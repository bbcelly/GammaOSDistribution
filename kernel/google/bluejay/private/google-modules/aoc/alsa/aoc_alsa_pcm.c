// SPDX-License-Identifier: GPL-2.0-only
/*
 * Google Whitechapel AoC ALSA Driver on PCM
 *
 * Copyright (c) 2019 Google LLC
 *
 */

#include <linux/module.h>
#include <linux/platform_device.h>
#include <linux/version.h>

#include "aoc_alsa.h"
#include "aoc_alsa_drv.h"

#include <linux/hrtimer.h>
#include <linux/ktime.h>

static bool is_aaudio_mmaped_service(const char *name)
{
	return strcmp(name, AOC_MMAP_PLAYBACK_SERVICE) == 0 ||
	       strcmp(name, AOC_MMAP_CAPTURE_SERVICE) == 0;
}

static void free_aoc_service_work_handler(struct work_struct *work)
{
	struct aoc_alsa_stream *alsa_stream =
		container_of(work, struct aoc_alsa_stream, free_aoc_service_work);
	struct snd_soc_pcm_runtime *rtd = alsa_stream->substream->private_data;
	struct aoc_chip *chip = alsa_stream->chip;

	if (!is_aaudio_mmaped_service(rtd->dai_link->name))
		return;

	aoc_timer_stop_sync(alsa_stream);
	cancel_work_sync(&alsa_stream->pcm_period_work);

	if (mutex_lock_interruptible(&chip->audio_mutex)) {
		pr_err("ERR: interrupted while waiting for lock\n");
		return;
	}

	free_aoc_audio_service(rtd->dai_link->name, alsa_stream->dev);

	/* To avoid accessing already removed aoc service in pcm prepare for aaudio */
	alsa_stream->dev = NULL;

	mutex_unlock(&chip->audio_mutex);
	return;
}

void aoc_pcm_period_work_handler(struct work_struct *work)
{
	struct aoc_alsa_stream *alsa_stream =
		container_of(work, struct aoc_alsa_stream, pcm_period_work);

	snd_pcm_period_elapsed(alsa_stream->substream);

	return;
}

static void aoc_pcm_reset_handler(aoc_aud_service_event_t evnt, void *cookies)
{
	struct aoc_alsa_stream *alsa_stream = (struct aoc_alsa_stream *)cookies;

	if (!alsa_stream || !alsa_stream->substream) {
		pr_err("%s: no active substream pointer\n", __func__);
		return;
	}

	if (evnt == AOC_SERVICE_EVENT_DOWN) {
		pr_debug("%s: AoC service is removed, wakeup sleep thread\n", __func__);
		/*
		 * We don't hold stream lock here before change stream's state because of avoiding
		 * deadlock on stream lock and chip->audio_lock. The tasks without checking xrun
		 * still return error since AOC isn't ready. Most of alsa stream tasks from
		 * user-space will be returned by xrun state.
		 */
		alsa_stream->substream->runtime->status->state = SNDRV_PCM_STATE_XRUN;
		wake_up(&alsa_stream->substream->runtime->sleep);
		wake_up(&alsa_stream->substream->runtime->tsleep);

		schedule_work(&alsa_stream->free_aoc_service_work);
		return;
	}
}

/* Timer interrupt to read the ring buffer reader/writer positions */
void aoc_timer_start(struct aoc_alsa_stream *alsa_stream)
{
	ktime_t interval = ktime_set(0, alsa_stream->timer_interval_ns);
	hrtimer_start(&(alsa_stream->hr_timer), interval, HRTIMER_MODE_REL);
}

void aoc_timer_restart(struct aoc_alsa_stream *alsa_stream)
{
	ktime_t currtime;
	ktime_t interval = ktime_set(0, alsa_stream->timer_interval_ns);
	currtime = ktime_get();
	hrtimer_forward(&(alsa_stream->hr_timer), currtime, interval);
}

void aoc_timer_stop(struct aoc_alsa_stream *alsa_stream)
{
	int ret;
	ret = hrtimer_cancel(&(alsa_stream->hr_timer));
	if (ret)
		pr_notice("The hr_timer was still in use...\n");
}

void aoc_timer_stop_sync(struct aoc_alsa_stream *alsa_stream)
{
	int ret;
	ret = hrtimer_cancel(&(alsa_stream->hr_timer));
	if (ret)
		pr_notice("The hr_timer was still in use...\n");
}

/* Hardware definition
 * TODO: different pcm may have different hardware setup,
 * considering deep buffer and compressed offload buffer
 */
static struct snd_pcm_hardware snd_aoc_playback_hw = {
	.info = (SNDRV_PCM_INFO_INTERLEAVED | SNDRV_PCM_INFO_BLOCK_TRANSFER | SNDRV_PCM_INFO_MMAP |
		 SNDRV_PCM_INFO_MMAP_VALID),
	.formats = SNDRV_PCM_FMTBIT_S8 | SNDRV_PCM_FMTBIT_U8 | SNDRV_PCM_FMTBIT_S16_LE |
		   SNDRV_PCM_FMTBIT_S24_LE | SNDRV_PCM_FMTBIT_S24_3LE | SNDRV_PCM_FMTBIT_S32_LE |
		   SNDRV_PCM_FMTBIT_FLOAT_LE,
	.rates = SNDRV_PCM_RATE_CONTINUOUS | SNDRV_PCM_RATE_8000_48000,
	.rate_min = 8000,
	.rate_max = 48000,
	.channels_min = 1,
	.channels_max = 4,
	.buffer_bytes_max = 16384 * 6,
	.period_bytes_min = 16,
	.period_bytes_max = 7680,
	.periods_min = 2,
	.periods_max = 1024 * 6,
};

static enum hrtimer_restart aoc_pcm_hrtimer_irq_handler(struct hrtimer *timer)
{
	struct aoc_alsa_stream *alsa_stream;
	struct aoc_service_dev *dev;
	unsigned long consumed; /* TODO: uint64_t? */
	int avail;

	WARN_ON(!timer);
	alsa_stream = container_of(timer, struct aoc_alsa_stream, hr_timer);

	WARN_ON(!alsa_stream || !alsa_stream->substream);

	if(alsa_stream->substream->runtime->status->state != SNDRV_PCM_STATE_RUNNING)
			return HRTIMER_NORESTART;

	/* Start the timer immediately for next period */
	/* aoc_timer_start(alsa_stream); */
	aoc_timer_restart(alsa_stream);

	/* The number of bytes read/writtien should be the bytes in the buffer
	 * already played out in the case of playback. But this may not be true
	 * in the AoC ring buffer implementation, since the reader pointer in
	 * the playback case represents what has been read from the buffer,
	 * not what already played out .
	*/
	dev = alsa_stream->dev;
	consumed = ((alsa_stream->substream->stream == SNDRV_PCM_STREAM_PLAYBACK) ?
				  aoc_ring_bytes_read(dev->service, AOC_DOWN) :
				  aoc_ring_bytes_written(dev->service, AOC_UP));

	pr_debug("consumed = %ld , hw_ptr_base =%ld\n", consumed, alsa_stream->hw_ptr_base);

	/* Advance the write ptr in the DRAM ring buffer for mmap-based playback */
	if (alsa_stream->stream_type == MMAPED &&
	    alsa_stream->substream->stream == SNDRV_PCM_STREAM_PLAYBACK) {
		avail = aoc_ring_bytes_available_to_write(dev->service, AOC_DOWN);
		if (!aoc_service_advance_write_index(dev->service, AOC_DOWN, avail)) {
			dev_err(&(dev->dev), "ERR: in advancing pcm playback writer ptr\n");
		}
	}

	/* TODO: To do more on no pointer update? */
	if (consumed == alsa_stream->prev_consumed)
		return HRTIMER_RESTART;

	/* To deal with overlfow in Tx or Rx in int32_t */
	if (consumed < alsa_stream->prev_consumed) {
		alsa_stream->n_overflow++;
		pr_notice("overflow in Tx/Rx: %ld - %ld - %d times\n", consumed,
			  alsa_stream->prev_consumed, alsa_stream->n_overflow);
	}
	alsa_stream->prev_consumed = consumed;

	/* Update the pcm pointer  */
	if (unlikely(alsa_stream->n_overflow)) {
		alsa_stream->pos = (consumed + 0x100000000 * alsa_stream->n_overflow -
				    alsa_stream->hw_ptr_base) %
				   alsa_stream->buffer_size;
	} else {
		alsa_stream->pos = (consumed - alsa_stream->hw_ptr_base) % alsa_stream->buffer_size;
	}

	queue_work(system_highpri_wq, &alsa_stream->pcm_period_work);

	return HRTIMER_RESTART;
}

static void snd_aoc_pcm_free(struct snd_pcm_runtime *runtime)
{
	pr_debug("Freeing up alsa stream here ..\n");
	pr_debug("%s:", __func__);

	kfree(runtime->private_data);
	runtime->private_data = NULL;
}

/* PCM open callback */
static int snd_aoc_pcm_open(struct snd_soc_component *component,
			    struct snd_pcm_substream *substream)
{
	struct snd_soc_pcm_runtime *rtd = substream->private_data;
	struct snd_soc_card *card = rtd->card;
	struct aoc_chip *chip = snd_soc_card_get_drvdata(card);
	struct snd_pcm_runtime *runtime = substream->runtime;

	struct aoc_alsa_stream *alsa_stream = NULL;
	struct aoc_service_dev *dev = NULL;
	int idx;
	int err;

	pr_debug("stream (%d)\n", substream->number); /* Playback or capture */
	if (mutex_lock_interruptible(&chip->audio_mutex)) {
		pr_err("ERR: interrupted whilst waiting for lock\n");
		return -EINTR;
	}

	idx = substream->pcm->device;
	pr_debug("pcm device open (%d)\n", idx);
	pr_debug("chip open (%d)\n", chip->opened);

	alsa_stream = kzalloc(sizeof(struct aoc_alsa_stream), GFP_KERNEL);
	if (alsa_stream == NULL) {
		err = -ENOMEM;
		pr_err("ERR: fail to alloc alsa_stream for %s", rtd->dai_link->name);
		goto out;
	}

	/* Initialise alsa_stream */
	alsa_stream->chip = chip;
	alsa_stream->substream = substream;
	alsa_stream->cstream = NULL;
	alsa_stream->idx = idx;
	alsa_stream->stream_type = aoc_pcm_device_to_stream_type(idx);

	INIT_WORK(&alsa_stream->free_aoc_service_work, free_aoc_service_work_handler);
	INIT_WORK(&alsa_stream->pcm_period_work, aoc_pcm_period_work_handler);

	/* Find the corresponding aoc audio service */
	err = alloc_aoc_audio_service(rtd->dai_link->name, &dev, aoc_pcm_reset_handler,
			alsa_stream);
	if (err < 0) {
		pr_err("ERR:%d fail to alloc service for %s", err, rtd->dai_link->name);
		goto out;
	}
	alsa_stream->dev = dev;

	/* Ring buffer will be flushed at prepare() before playback/capture */
	alsa_stream->hw_ptr_base = (substream->stream == SNDRV_PCM_STREAM_PLAYBACK) ?
						 aoc_ring_bytes_read(dev->service, AOC_DOWN) :
						 aoc_ring_bytes_written(dev->service, AOC_UP);
	alsa_stream->prev_consumed = alsa_stream->hw_ptr_base;
	alsa_stream->n_overflow = 0;

	err = aoc_audio_open(alsa_stream);
	if (err != 0) {
		pr_err("ERR: fail to audio open for %s", rtd->dai_link->name);
		goto out;
	}
	runtime->private_data = alsa_stream;
	runtime->private_free = snd_aoc_pcm_free;
	runtime->hw = snd_aoc_playback_hw;
	chip->alsa_stream[idx] = alsa_stream;
	chip->opened |= (1 << idx);
	alsa_stream->open = 1;
	alsa_stream->draining = 1;

	alsa_stream->timer_interval_ns = PCM_TIMER_INTERVAL_NANOSECS;
	hrtimer_init(&(alsa_stream->hr_timer), CLOCK_MONOTONIC, HRTIMER_MODE_REL);
	alsa_stream->hr_timer.function = &aoc_pcm_hrtimer_irq_handler;

	pr_debug("rtd->pcm->nonatomic = %d\n", rtd->pcm->nonatomic);

	/* TODO: refactor needed on mapping between device number and entrypoint */
	alsa_stream->entry_point_idx = (idx == 7) ? HAPTICS : idx;
	mutex_unlock(&chip->audio_mutex);

	return 0;
out:
	if (dev) {
		free_aoc_audio_service(rtd->dai_link->name, dev);
		if (alsa_stream)
		    alsa_stream->dev = NULL;
	}
	mutex_unlock(&chip->audio_mutex);

	if (alsa_stream) {
		cancel_work_sync(&alsa_stream->free_aoc_service_work);
		cancel_work_sync(&alsa_stream->pcm_period_work);
		kfree(alsa_stream);
	}

	pr_debug("pcm open err=%d\n", err);
	return err;
}

/* Close callback */
static int snd_aoc_pcm_close(struct snd_soc_component *component,
			     struct snd_pcm_substream *substream)
{
	struct snd_soc_pcm_runtime *rtd = substream->private_data;
	struct snd_pcm_runtime *runtime = substream->runtime;
	struct aoc_alsa_stream *alsa_stream = runtime->private_data;
	struct aoc_chip *chip = alsa_stream->chip;
	int err;

	pr_debug("%s: name %s substream %p", __func__, rtd->dai_link->name, substream);
	aoc_timer_stop_sync(alsa_stream);
	cancel_work_sync(&alsa_stream->pcm_period_work);

	if (mutex_lock_interruptible(&chip->audio_mutex)) {
		pr_err("ERR: interrupted while waiting for lock\n");
		return -EINTR;
	}

	runtime = substream->runtime;
	alsa_stream = runtime->private_data;

	pr_debug("alsa pcm close\n");
	free_aoc_audio_service(rtd->dai_link->name, alsa_stream->dev);
	alsa_stream->dev = NULL;
	/*
	* Call stop if it's still running. This happens when app
	* is force killed and we don't get a stop trigger.
	*/
	if (alsa_stream->running) {
		err = aoc_audio_stop(alsa_stream);
		alsa_stream->running = 0;
		if (err != 0)
			pr_err("ERR: fail to stop alsa stream\n");
	}

	alsa_stream->period_size = 0;
	alsa_stream->buffer_size = 0;

	chip->opened &= ~(1 << alsa_stream->idx);
	chip->capture_param_set &= ~(1 << alsa_stream->idx);

	if (alsa_stream->open) {
		alsa_stream->open = 0;
		aoc_audio_close(alsa_stream);
	}
	if (alsa_stream->chip)
		alsa_stream->chip->alsa_stream[alsa_stream->idx] = NULL;
	/*
	* Do not free up alsa_stream here, it will be freed up by
	* runtime->private_free callback we registered in *_open above
   	*/
	mutex_unlock(&chip->audio_mutex);

	cancel_work_sync(&alsa_stream->free_aoc_service_work);

	return 0;
}

/* PCM hw_params callback */
static int snd_aoc_pcm_hw_params(struct snd_soc_component *component,
				 struct snd_pcm_substream *substream,
				 struct snd_pcm_hw_params *params)
{
	struct snd_pcm_runtime *runtime = substream->runtime;
	struct aoc_alsa_stream *alsa_stream = runtime->private_data;
	struct aoc_chip *chip = alsa_stream->chip;
	int err;

	err = snd_pcm_lib_malloc_pages(substream, params_buffer_bytes(params));
	if (err < 0) {
		pr_err("ERR:%d fail in pcm buffer allocation\n", err);
		return err;
	}

	substream->wait_time = msecs_to_jiffies(chip->pcm_wait_time_in_ms);

	alsa_stream->channels = params_channels(params);
	alsa_stream->params_rate = params_rate(params);
	alsa_stream->pcm_format_width = snd_pcm_format_width(params_format(params));

	alsa_stream->pcm_float_fmt = (params_format(params) == SNDRV_PCM_FORMAT_FLOAT_LE);

	pr_debug("alsa_stream->pcm_format_width = %d\n", alsa_stream->pcm_format_width);
	return err;
}

/* PCM hw_free callback */
static int snd_aoc_pcm_hw_free(struct snd_soc_component *component,
			       struct snd_pcm_substream *substream)
{
	return snd_pcm_lib_free_pages(substream);
}

/* PCM prepare callback */
static int snd_aoc_pcm_prepare(struct snd_soc_component *component,
			       struct snd_pcm_substream *substream)
{
	struct snd_pcm_runtime *runtime = substream->runtime;
	struct aoc_alsa_stream *alsa_stream = runtime->private_data;
	struct aoc_service_dev *dev;
	struct aoc_chip *chip = alsa_stream->chip;
	int channels, source_mode, err, avail;

	aoc_timer_stop_sync(alsa_stream);

	if (mutex_lock_interruptible(&chip->audio_mutex))
		return -EINTR;

	dev = alsa_stream->dev;
	if (!dev) {
		err = -EIO;
		pr_err("ERR in pcm prepare: AoC service not available\n");
		goto out;
	}

	channels = alsa_stream->channels;

	/* source_mode only used by playback */
	if (alsa_stream->entry_point_idx == HAPTICS) {
		source_mode = HAPTICS_MODE;
	} else if (alsa_stream->cstream)
		source_mode = OFFLOAD_MODE;
	else
		source_mode = PLAYBACK_MODE;

	/* Reset the writer pointer of the DRAM buffer */
	if (alsa_stream->substream->stream == SNDRV_PCM_STREAM_PLAYBACK) {
		if (!aoc_ring_reset_write_pointer(alsa_stream->dev->service, AOC_DOWN)) {
			err = -EIO;
			pr_err("ERR in resetting the DRAM ring buffer writer pointer\n");
			goto out;
		}
	}

	/* Set the audio formats and flush the DRAM buffer */
	err = aoc_audio_set_params(alsa_stream, channels, alsa_stream->params_rate,
				   alsa_stream->pcm_format_width, alsa_stream->pcm_float_fmt,
				   source_mode);
	if (err < 0) {
		pr_err("ERR:%d in setting pcm hw params\n", err);
		goto out;
	}

	pr_debug("channels = %d, rate = %d, bits = %d, float-fmt = %d\n", channels,
		 alsa_stream->params_rate, alsa_stream->pcm_format_width,
		 alsa_stream->pcm_float_fmt);

	aoc_audio_setup(alsa_stream);

	/* in preparation of the stream */
	/* aoc_audio_set_ctls(alsa_stream->chip); */
	alsa_stream->buffer_size = snd_pcm_lib_buffer_bytes(substream);
	alsa_stream->period_size = snd_pcm_lib_period_bytes(substream);
	alsa_stream->pos = 0;
	alsa_stream->hw_ptr_base = (substream->stream == SNDRV_PCM_STREAM_PLAYBACK) ?
						 aoc_ring_bytes_read(dev->service, AOC_DOWN) :
						 aoc_ring_bytes_written(dev->service, AOC_UP);
	alsa_stream->prev_consumed = alsa_stream->hw_ptr_base;
	alsa_stream->n_overflow = 0;

	pr_debug("pcm prepare: hw_ptr_base = %lu\n", alsa_stream->hw_ptr_base);

	pr_debug("buffer_size=%d, period_size=%d pos=%d frame_bits=%d\n", alsa_stream->buffer_size,
		 alsa_stream->period_size, alsa_stream->pos, runtime->frame_bits);

	/* Advance the write ptr in the DRAM ring buffer for mmap-based playback */
	if (alsa_stream->stream_type == MMAPED &&
	    alsa_stream->substream->stream == SNDRV_PCM_STREAM_PLAYBACK) {
		avail = aoc_ring_bytes_available_to_write(dev->service, AOC_DOWN);
		if (!aoc_service_advance_write_index(dev->service, AOC_DOWN, avail)) {
			dev_err(&(dev->dev), "ERR: in advancing pcm playback writer ptr\n");
		}
	}

out:
	mutex_unlock(&chip->audio_mutex);
	return err;
}

/* Trigger callback */
static int snd_aoc_pcm_trigger(struct snd_soc_component *component,
			       struct snd_pcm_substream *substream, int cmd)
{
	struct snd_pcm_runtime *runtime = substream->runtime;
	struct aoc_alsa_stream *alsa_stream = runtime->private_data;
	int err = 0;

	switch (cmd) {
	case SNDRV_PCM_TRIGGER_START:
		pr_debug("aoc_AUDIO_TRIGGER_START running=%d\n", alsa_stream->running);
		if (!alsa_stream->running) {
			/* start timer first to avoid underrun/overrun */
			aoc_timer_start(alsa_stream);

			err = aoc_audio_start(alsa_stream);
			if (err == 0) {
				alsa_stream->running = 1;
				alsa_stream->draining = 1;
			} else {
				pr_err("ERR:%d fail to START stream\n", err);
			}
		}
		break;
	case SNDRV_PCM_TRIGGER_STOP:
		pr_debug("aoc_AUDIO_TRIGGER_STOP running=%d draining=%d\n", alsa_stream->running,
			 runtime->status->state == SNDRV_PCM_STATE_DRAINING);

		if (runtime->status->state == SNDRV_PCM_STATE_DRAINING) {
			pr_debug("DRAINING\n");
			alsa_stream->draining = 1;
		} else {
			pr_debug("DROPPING\n");
			alsa_stream->draining = 0;
		}
		if (alsa_stream->running) {
			err = aoc_audio_stop(alsa_stream);
			if (err != 0)
				pr_err("ERR:%d fail to STOP stream\n", err);
			alsa_stream->running = 0;
		}
		break;
	default:
		err = -EINVAL;
	}

	return err;
}

/* Copy data from user space to hardware buffer  */
static int snd_aoc_pcm_playback_copy_user(struct snd_pcm_substream *substream, int channel,
					  unsigned long pos, void __user *buf, unsigned long count)
{
	struct snd_pcm_runtime *runtime = substream->runtime;
	struct aoc_alsa_stream *alsa_stream = runtime->private_data;
	int err = 0;

	err = aoc_audio_write(alsa_stream, buf, count);
	if (err)
		pr_err("ERR:%d fail to send audio to aoc\n", err);

	return err;
}

/* Copy data from hardware buffer to user space */
static int snd_aoc_pcm_capture_copy_user(struct snd_pcm_substream *substream, int channel,
					 unsigned long pos, void __user *buf, unsigned long count)
{
	struct snd_pcm_runtime *runtime = substream->runtime;
	struct aoc_alsa_stream *alsa_stream = runtime->private_data;
	int err = 0;

	err = aoc_audio_read(alsa_stream, buf, count);
	if (err)
		pr_err("ERR:%d fail to get audio from aoc\n", err);

	return err;
}

/* Copy data between hardware buffer and user space */
static int snd_aoc_pcm_copy_user(struct snd_soc_component *component,
				 struct snd_pcm_substream *substream, int channel,
				 unsigned long pos, void __user *buf, unsigned long count)
{
	if (substream->stream == SNDRV_PCM_STREAM_PLAYBACK) {
		return snd_aoc_pcm_playback_copy_user(substream, channel, pos, buf, count);
	} else { /* Capture */
		return snd_aoc_pcm_capture_copy_user(substream, channel, pos, buf, count);
	}
}

/* Pointer callback */
static snd_pcm_uframes_t snd_aoc_pcm_pointer(struct snd_soc_component *component,
					     struct snd_pcm_substream *substream)
{
	struct snd_pcm_runtime *runtime = substream->runtime;
	struct aoc_alsa_stream *alsa_stream = runtime->private_data;
	int pointer;

	pr_debug("pcm_pointer... (%d) hwptr=%ld appl=%ld pos=%d\n", 0,
		 frames_to_bytes(runtime, runtime->status->hw_ptr),
		 frames_to_bytes(runtime, runtime->control->appl_ptr), alsa_stream->pos);

	pointer = bytes_to_frames(substream->runtime, alsa_stream->pos);

	pr_debug("pcm pointer  = %d\n", pointer);
	return pointer;
}

static int snd_aoc_pcm_mmap(struct snd_soc_component *component,
			    struct snd_pcm_substream *substream, struct vm_area_struct *vma)
{
	struct snd_pcm_runtime *runtime = substream->runtime;
	struct aoc_alsa_stream *alsa_stream = runtime->private_data;
	struct snd_soc_pcm_runtime *rtd = substream->private_data;
	size_t ring_size;
	int err;
	phys_addr_t aoc_ring_base;
	aoc_direction dir;

	dir = ((alsa_stream->substream->stream == SNDRV_PCM_STREAM_PLAYBACK) ?
		AOC_DOWN : AOC_UP);

	/* return the heap base address for MMAP playback and capture */
	if (is_aaudio_mmaped_service(rtd->dai_link->name)) {
		aoc_ring_base =
			aoc_get_heap_base_phys_addr(alsa_stream->dev, dir, &ring_size);
	} else {
		aoc_ring_base =
			aoc_service_ring_base_phys_addr(alsa_stream->dev, dir, &ring_size);
	}

	alsa_stream->vma = vma;

	err = remap_pfn_range(vma, vma->vm_start, aoc_ring_base >> PAGE_SHIFT,
			      vma->vm_end - vma->vm_start, pgprot_writecombine(vma->vm_page_prot));

	pr_debug("mmap ring base physical addr: %pa, size = %zu, vm_start=%lx:%lu\n",
		 &aoc_ring_base, ring_size, vma->vm_start, vma->vm_end - vma->vm_start);

	return err;
}

static int snd_aoc_pcm_lib_ioctl(struct snd_soc_component *component,
				 struct snd_pcm_substream *substream, unsigned int cmd, void *arg)
{
	int err = snd_pcm_lib_ioctl(substream, cmd, arg);

	pr_debug(" .. substream=%p, cmd=%d, arg=%p (%x) err=%d\n", substream, cmd, arg,
		 arg ? *(unsigned int *)arg : 0, err);
	return err;
}

static int aoc_pcm_new(struct snd_soc_component *component, struct snd_soc_pcm_runtime *rtd)
{
	struct snd_pcm_substream *substream = NULL;
	/* Allocate DMA memory */
	if (rtd->dai_link->dpcm_playback) {
		substream = rtd->pcm->streams[SNDRV_PCM_STREAM_PLAYBACK].substream;
		snd_pcm_lib_preallocate_pages(substream, SNDRV_DMA_TYPE_CONTINUOUS,
					      snd_dma_continuous_data(GFP_KERNEL),
					      snd_aoc_playback_hw.buffer_bytes_max,
					      snd_aoc_playback_hw.buffer_bytes_max);
	}

	if (rtd->dai_link->dpcm_capture) {
		substream = rtd->pcm->streams[SNDRV_PCM_STREAM_CAPTURE].substream;
		snd_pcm_lib_preallocate_pages(substream, SNDRV_DMA_TYPE_CONTINUOUS,
					      snd_dma_continuous_data(GFP_KERNEL),
					      snd_aoc_playback_hw.buffer_bytes_max,
					      snd_aoc_playback_hw.buffer_bytes_max);
	}


	rtd->pcm->nonatomic = true;

	return 0;
}

static const struct snd_soc_component_driver aoc_pcm_component = {
	.name = "AoC PCM",
	.open = snd_aoc_pcm_open,
	.close = snd_aoc_pcm_close,
	.ioctl = snd_aoc_pcm_lib_ioctl,
	.hw_params = snd_aoc_pcm_hw_params,
	.hw_free = snd_aoc_pcm_hw_free,
	.copy_user = snd_aoc_pcm_copy_user,
	.prepare = snd_aoc_pcm_prepare,
	.trigger = snd_aoc_pcm_trigger,
	.pointer = snd_aoc_pcm_pointer,
	.mmap = snd_aoc_pcm_mmap,
	.pcm_construct = aoc_pcm_new,
};

static int aoc_pcm_probe(struct platform_device *pdev)
{
	struct device *dev = &pdev->dev;
	struct device_node *np = dev->of_node;
	int err = 0;

	pr_debug("%s", __func__);
	if (!np)
		return -EINVAL;
	err = devm_snd_soc_register_component(dev, &aoc_pcm_component, NULL, 0);
	if (err) {
		pr_err("ERR:%d fail to reigster aoc pcm comp\n", err);
		return err;
	}

	return 0;
}

static const struct of_device_id aoc_pcm_of_match[] = {
	{
		.compatible = "google-aoc-snd-pcm",
	},
	{},
};
MODULE_DEVICE_TABLE(of, aoc_pcm_of_match);

static struct platform_driver aoc_pcm_drv = {
    .driver =
        {
            .name = "google-aoc-snd-pcm",
            .of_match_table = aoc_pcm_of_match,
        },
    .probe = aoc_pcm_probe,
};

int aoc_pcm_init(void)
{
	int err;

	pr_debug("%s", __func__);
	err = platform_driver_register(&aoc_pcm_drv);
	if (err) {
		pr_err("ERR:%d in registering aoc pcm drv\n", err);
		return err;
	}

	return 0;
}

void aoc_pcm_exit(void)
{
	platform_driver_unregister(&aoc_pcm_drv);
}
