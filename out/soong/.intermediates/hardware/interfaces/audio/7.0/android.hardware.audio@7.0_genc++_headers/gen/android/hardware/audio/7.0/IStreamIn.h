#ifndef HIDL_GENERATED_ANDROID_HARDWARE_AUDIO_V7_0_ISTREAMIN_H
#define HIDL_GENERATED_ANDROID_HARDWARE_AUDIO_V7_0_ISTREAMIN_H

#include <android/hardware/audio/common/7.0/types.h>
#include <android/hardware/audio/7.0/IStream.h>
#include <android/hardware/audio/7.0/types.h>

#include <android/hidl/manager/1.0/IServiceNotification.h>

#include <hidl/HidlSupport.h>
#include <hidl/MQDescriptor.h>
#include <hidl/Status.h>
#include <utils/NativeHandle.h>
#include <utils/misc.h>

namespace android {
namespace hardware {
namespace audio {
namespace V7_0 {

struct IStreamIn : public ::android::hardware::audio::V7_0::IStream {
    /**
     * Type tag for use in template logic that indicates this is a 'pure' class.
     */
    typedef ::android::hardware::details::i_tag _hidl_tag;

    /**
     * Fully qualified interface name: "android.hardware.audio@7.0::IStreamIn"
     */
    static const char* descriptor;

    // Forward declaration for forward reference support:
    enum class ReadCommand : int32_t;
    struct ReadParameters;
    struct ReadStatus;

    /**
     * Commands that can be executed on the driver reader thread.
     */
    enum class ReadCommand : int32_t {
        READ = 0,
        GET_CAPTURE_POSITION = 1 /* ::android::hardware::audio::V7_0::IStreamIn::ReadCommand.READ implicitly + 1 */,
    };

    /**
     * Data structure passed to the driver for executing commands
     * on the driver reader thread.
     */
    struct ReadParameters final {
        // Forward declaration for forward reference support:
        union Params;

        union Params final {
            uint64_t read __attribute__ ((aligned(8)));
        };

        static_assert(offsetof(::android::hardware::audio::V7_0::IStreamIn::ReadParameters::Params, read) == 0, "wrong offset");
        static_assert(sizeof(::android::hardware::audio::V7_0::IStreamIn::ReadParameters::Params) == 8, "wrong size");
        static_assert(__alignof(::android::hardware::audio::V7_0::IStreamIn::ReadParameters::Params) == 8, "wrong alignment");

        ::android::hardware::audio::V7_0::IStreamIn::ReadCommand command __attribute__ ((aligned(4)));
        ::android::hardware::audio::V7_0::IStreamIn::ReadParameters::Params params __attribute__ ((aligned(8)));
    };

    static_assert(offsetof(::android::hardware::audio::V7_0::IStreamIn::ReadParameters, command) == 0, "wrong offset");
    static_assert(offsetof(::android::hardware::audio::V7_0::IStreamIn::ReadParameters, params) == 8, "wrong offset");
    static_assert(sizeof(::android::hardware::audio::V7_0::IStreamIn::ReadParameters) == 16, "wrong size");
    static_assert(__alignof(::android::hardware::audio::V7_0::IStreamIn::ReadParameters) == 8, "wrong alignment");

    /**
     * Data structure passed back to the client via status message queue
     * of 'read' operation.
     *
     * Possible values of 'retval' field:
     *  - OK, read operation was successful;
     *  - INVALID_ARGUMENTS, stream was not configured properly;
     *  - INVALID_STATE, stream is in a state that doesn't allow reads.
     */
    struct ReadStatus final {
        // Forward declaration for forward reference support:
        union Reply;

        union Reply final {
            // Forward declaration for forward reference support:
            struct CapturePosition;

            struct CapturePosition final {
                uint64_t frames __attribute__ ((aligned(8)));
                uint64_t time __attribute__ ((aligned(8)));
            };

            static_assert(offsetof(::android::hardware::audio::V7_0::IStreamIn::ReadStatus::Reply::CapturePosition, frames) == 0, "wrong offset");
            static_assert(offsetof(::android::hardware::audio::V7_0::IStreamIn::ReadStatus::Reply::CapturePosition, time) == 8, "wrong offset");
            static_assert(sizeof(::android::hardware::audio::V7_0::IStreamIn::ReadStatus::Reply::CapturePosition) == 16, "wrong size");
            static_assert(__alignof(::android::hardware::audio::V7_0::IStreamIn::ReadStatus::Reply::CapturePosition) == 8, "wrong alignment");

            uint64_t read __attribute__ ((aligned(8)));
            ::android::hardware::audio::V7_0::IStreamIn::ReadStatus::Reply::CapturePosition capturePosition __attribute__ ((aligned(8)));
        };

        static_assert(offsetof(::android::hardware::audio::V7_0::IStreamIn::ReadStatus::Reply, read) == 0, "wrong offset");
        static_assert(offsetof(::android::hardware::audio::V7_0::IStreamIn::ReadStatus::Reply, capturePosition) == 0, "wrong offset");
        static_assert(sizeof(::android::hardware::audio::V7_0::IStreamIn::ReadStatus::Reply) == 16, "wrong size");
        static_assert(__alignof(::android::hardware::audio::V7_0::IStreamIn::ReadStatus::Reply) == 8, "wrong alignment");

        ::android::hardware::audio::V7_0::Result retval __attribute__ ((aligned(4)));
        ::android::hardware::audio::V7_0::IStreamIn::ReadCommand replyTo __attribute__ ((aligned(4)));
        ::android::hardware::audio::V7_0::IStreamIn::ReadStatus::Reply reply __attribute__ ((aligned(8)));
    };

    static_assert(offsetof(::android::hardware::audio::V7_0::IStreamIn::ReadStatus, retval) == 0, "wrong offset");
    static_assert(offsetof(::android::hardware::audio::V7_0::IStreamIn::ReadStatus, replyTo) == 4, "wrong offset");
    static_assert(offsetof(::android::hardware::audio::V7_0::IStreamIn::ReadStatus, reply) == 8, "wrong offset");
    static_assert(sizeof(::android::hardware::audio::V7_0::IStreamIn::ReadStatus) == 24, "wrong size");
    static_assert(__alignof(::android::hardware::audio::V7_0::IStreamIn::ReadStatus) == 8, "wrong alignment");

    /**
     * Returns whether this object's implementation is outside of the current process.
     */
    virtual bool isRemote() const override { return false; }

    /**
     * Return the frame size (number of bytes per sample).
     *
     * @return frameSize frame size in bytes.
     */
    virtual ::android::hardware::Return<uint64_t> getFrameSize() = 0;

    /**
     * Return the frame count of the buffer. Calling this method is equivalent
     * to getting AUDIO_PARAMETER_STREAM_FRAME_COUNT on the legacy HAL.
     *
     * @return count frame count.
     */
    virtual ::android::hardware::Return<uint64_t> getFrameCount() = 0;

    /**
     * Return the size of input/output buffer in bytes for this stream.
     * It must be a multiple of the frame size.
     *
     * @return buffer buffer size in bytes.
     */
    virtual ::android::hardware::Return<uint64_t> getBufferSize() = 0;

    /**
     * Return callback for getSupportedProfiles
     */
    using getSupportedProfiles_cb = std::function<void(::android::hardware::audio::V7_0::Result retval, const ::android::hardware::hidl_vec<::android::hardware::audio::common::V7_0::AudioProfile>& profiles)>;
    /**
     * Return supported audio profiles for this particular stream. This method
     * is normally called for streams opened on devices that use dynamic
     * profiles, e.g. HDMI and USB interfaces. Please note that supported
     * profiles of the stream may differ from the capabilities of the connected
     * physical device.
     *
     * For devices with fixed configurations, e.g. built-in audio devices, all
     * the profiles are specified in the audio_policy_configuration.xml
     * file. For such devices, this method must return the configuration from
     * the config file, or NOT_SUPPORTED retval.
     *
     * @return retval operation completion status.
     * @return formats supported audio profiles.
     *                 Must be non empty if retval is OK.
     */
    virtual ::android::hardware::Return<void> getSupportedProfiles(getSupportedProfiles_cb _hidl_cb) = 0;

    /**
     * Return callback for getAudioProperties
     */
    using getAudioProperties_cb = std::function<void(::android::hardware::audio::V7_0::Result retval, const ::android::hardware::audio::common::V7_0::AudioConfigBase& config)>;
    /**
     * Retrieves basic stream configuration: sample rate, audio format,
     * channel mask.
     *
     * @return retval operation completion status.
     * @return config basic stream configuration.
     */
    virtual ::android::hardware::Return<void> getAudioProperties(getAudioProperties_cb _hidl_cb) = 0;

    /**
     * Sets stream parameters. Only sets parameters that are specified.
     *
     * Optional method. If implemented, only called on a stopped stream.
     *
     * @param config basic stream configuration.
     * @return retval operation completion status.
     */
    virtual ::android::hardware::Return<::android::hardware::audio::V7_0::Result> setAudioProperties(const ::android::hardware::audio::common::V7_0::AudioConfigBaseOptional& config) = 0;

    /**
     * Applies audio effect to the stream.
     *
     * @param effectId effect ID (obtained from IEffectsFactory.createEffect) of
     *                 the effect to apply.
     * @return retval operation completion status.
     */
    virtual ::android::hardware::Return<::android::hardware::audio::V7_0::Result> addEffect(uint64_t effectId) = 0;

    /**
     * Stops application of the effect to the stream.
     *
     * @param effectId effect ID (obtained from IEffectsFactory.createEffect) of
     *                 the effect to remove.
     * @return retval operation completion status.
     */
    virtual ::android::hardware::Return<::android::hardware::audio::V7_0::Result> removeEffect(uint64_t effectId) = 0;

    /**
     * Put the audio hardware input/output into standby mode.
     * Driver must exit from standby mode at the next I/O operation.
     *
     * @return retval operation completion status.
     */
    virtual ::android::hardware::Return<::android::hardware::audio::V7_0::Result> standby() = 0;

    /**
     * Return callback for getDevices
     */
    using getDevices_cb = std::function<void(::android::hardware::audio::V7_0::Result retval, const ::android::hardware::hidl_vec<::android::hardware::audio::common::V7_0::DeviceAddress>& devices)>;
    /**
     * Return the set of devices which this stream is connected to.
     *
     * Optional method
     *
     * @return retval operation completion status: OK or NOT_SUPPORTED.
     * @return device set of devices which this stream is connected to.
     */
    virtual ::android::hardware::Return<void> getDevices(getDevices_cb _hidl_cb) = 0;

    /**
     * Connects the stream to one or multiple devices.
     *
     * This method must only be used for HALs that do not support
     * 'IDevice.createAudioPatch' method. Calling this method is
     * equivalent to setting AUDIO_PARAMETER_STREAM_ROUTING preceded
     * with a device address in the legacy HAL interface.
     *
     * @param address device to connect the stream to.
     * @return retval operation completion status.
     */
    virtual ::android::hardware::Return<::android::hardware::audio::V7_0::Result> setDevices(const ::android::hardware::hidl_vec<::android::hardware::audio::common::V7_0::DeviceAddress>& devices) = 0;

    /**
     * Sets the HW synchronization source. Calling this method is equivalent to
     * setting AUDIO_PARAMETER_STREAM_HW_AV_SYNC on the legacy HAL.
     *
     * Optional method
     *
     * @param hwAvSync HW synchronization source
     * @return retval operation completion status.
     */
    virtual ::android::hardware::Return<::android::hardware::audio::V7_0::Result> setHwAvSync(uint32_t hwAvSync) = 0;

    /**
     * Return callback for getParameters
     */
    using getParameters_cb = std::function<void(::android::hardware::audio::V7_0::Result retval, const ::android::hardware::hidl_vec<::android::hardware::audio::V7_0::ParameterValue>& parameters)>;
    /**
     * Generic method for retrieving vendor-specific parameter values.
     * The framework does not interpret the parameters, they are passed
     * in an opaque manner between a vendor application and HAL.
     *
     * Multiple parameters can be retrieved at the same time.
     * The implementation should return as many requested parameters
     * as possible, even if one or more is not supported
     *
     * @param context provides more information about the request
     * @param keys keys of the requested parameters
     * @return retval operation completion status.
     *         OK must be returned if keys is empty.
     *         NOT_SUPPORTED must be returned if at least one key is unknown.
     * @return parameters parameter key value pairs.
     *         Must contain the value of all requested keys if retval == OK
     */
    virtual ::android::hardware::Return<void> getParameters(const ::android::hardware::hidl_vec<::android::hardware::audio::V7_0::ParameterValue>& context, const ::android::hardware::hidl_vec<::android::hardware::hidl_string>& keys, getParameters_cb _hidl_cb) = 0;

    /**
     * Generic method for setting vendor-specific parameter values.
     * The framework does not interpret the parameters, they are passed
     * in an opaque manner between a vendor application and HAL.
     *
     * Multiple parameters can be set at the same time though this is
     * discouraged as it make failure analysis harder.
     *
     * If possible, a failed setParameters should not impact the platform state.
     *
     * @param context provides more information about the request
     * @param parameters parameter key value pairs.
     * @return retval operation completion status.
     *         All parameters must be successfully set for OK to be returned
     */
    virtual ::android::hardware::Return<::android::hardware::audio::V7_0::Result> setParameters(const ::android::hardware::hidl_vec<::android::hardware::audio::V7_0::ParameterValue>& context, const ::android::hardware::hidl_vec<::android::hardware::audio::V7_0::ParameterValue>& parameters) = 0;

    /**
     * Called by the framework to start a stream operating in mmap mode.
     * createMmapBuffer() must be called before calling start().
     * Function only implemented by streams operating in mmap mode.
     *
     * @return retval OK in case the success.
     *                NOT_SUPPORTED on non mmap mode streams
     *                INVALID_STATE if called out of sequence
     */
    virtual ::android::hardware::Return<::android::hardware::audio::V7_0::Result> start() = 0;

    /**
     * Called by the framework to stop a stream operating in mmap mode.
     * Function only implemented by streams operating in mmap mode.
     *
     * @return retval OK in case the success.
     *                NOT_SUPPORTED on non mmap mode streams
     *                INVALID_STATE if called out of sequence
     */
    virtual ::android::hardware::Return<::android::hardware::audio::V7_0::Result> stop() = 0;

    /**
     * Return callback for createMmapBuffer
     */
    using createMmapBuffer_cb = std::function<void(::android::hardware::audio::V7_0::Result retval, const ::android::hardware::audio::V7_0::MmapBufferInfo& info)>;
    /**
     * Called by the framework to retrieve information on the mmap buffer used for audio
     * samples transfer.
     * Function only implemented by streams operating in mmap mode.
     *
     * @param minSizeFrames minimum buffer size requested. The actual buffer
     *                     size returned in struct MmapBufferInfo can be larger.
     *                     The size must be a positive value.
     * @return retval OK in case the success.
     *                NOT_SUPPORTED on non mmap mode streams
     *                NOT_INITIALIZED in case of memory allocation error
     *                INVALID_ARGUMENTS if the requested buffer size is invalid
     *                INVALID_STATE if called out of sequence
     * @return info    a MmapBufferInfo struct containing information on the MMMAP buffer created.
     */
    virtual ::android::hardware::Return<void> createMmapBuffer(int32_t minSizeFrames, createMmapBuffer_cb _hidl_cb) = 0;

    /**
     * Return callback for getMmapPosition
     */
    using getMmapPosition_cb = std::function<void(::android::hardware::audio::V7_0::Result retval, const ::android::hardware::audio::V7_0::MmapPosition& position)>;
    /**
     * Called by the framework to read current read/write position in the mmap buffer
     * with associated time stamp.
     * Function only implemented by streams operating in mmap mode.
     *
     * @return retval OK in case the success.
     *                NOT_SUPPORTED on non mmap mode streams
     *                INVALID_STATE if called out of sequence
     * @return position a MmapPosition struct containing current HW read/write position in frames
     *                  with associated time stamp.
     */
    virtual ::android::hardware::Return<void> getMmapPosition(getMmapPosition_cb _hidl_cb) = 0;

    /**
     * Called by the framework to deinitialize the stream and free up
     * all currently allocated resources. It is recommended to close
     * the stream on the client side as soon as it is becomes unused.
     *
     * The client must ensure that this function is not called while
     * audio data is being transferred through the stream's message queues.
     *
     * @return retval OK in case the success.
     *                NOT_SUPPORTED if called on IStream instead of input or
     *                              output stream interface.
     *                INVALID_STATE if the stream was already closed.
     */
    virtual ::android::hardware::Return<::android::hardware::audio::V7_0::Result> close() = 0;

    /**
     * Return callback for getAudioSource
     */
    using getAudioSource_cb = std::function<void(::android::hardware::audio::V7_0::Result retval, const ::android::hardware::hidl_string& source)>;
    /**
     * Returns the source descriptor of the input stream. Calling this method is
     * equivalent to getting AUDIO_PARAMETER_STREAM_INPUT_SOURCE on the legacy
     * HAL.
     *
     * Optional method
     *
     * @return retval operation completion status.
     * @return source audio source.
     */
    virtual ::android::hardware::Return<void> getAudioSource(getAudioSource_cb _hidl_cb) = 0;

    /**
     * Set the input gain for the audio driver.
     *
     * Optional method
     *
     * @param gain 1.0f is unity, 0.0f is zero.
     * @result retval operation completion status.
     */
    virtual ::android::hardware::Return<::android::hardware::audio::V7_0::Result> setGain(float gain) = 0;

    /**
     * Called when the metadata of the stream's sink has been changed.
     *
     * Optional method
     *
     * @param sinkMetadata Description of the audio that is suggested by the clients.
     * @return retval operation completion status.
     *        If any of the metadata fields contains an invalid value,
     *        returns INVALID_ARGUMENTS.
     *        If method isn't supported by the HAL returns NOT_SUPPORTED.
     */
    virtual ::android::hardware::Return<::android::hardware::audio::V7_0::Result> updateSinkMetadata(const ::android::hardware::audio::common::V7_0::SinkMetadata& sinkMetadata) = 0;

    /**
     * Return callback for prepareForReading
     */
    using prepareForReading_cb = std::function<void(::android::hardware::audio::V7_0::Result retval, const ::android::hardware::MQDescriptorSync<::android::hardware::audio::V7_0::IStreamIn::ReadParameters>& commandMQ, const ::android::hardware::MQDescriptorSync<uint8_t>& dataMQ, const ::android::hardware::MQDescriptorSync<::android::hardware::audio::V7_0::IStreamIn::ReadStatus>& statusMQ, int32_t threadId)>;
    /**
     * Set up required transports for receiving audio buffers from the driver.
     *
     * The transport consists of three message queues:
     *  -- command queue is used to instruct the reader thread what operation
     *     to perform;
     *  -- data queue is used for passing audio data from the driver
     *     to the client;
     *  -- status queue is used for reporting operation status
     *     (e.g. amount of bytes actually read or error code).
     *
     * The driver operates on a dedicated thread. The client must ensure that
     * the thread is given an appropriate priority and assigned to correct
     * scheduler and cgroup. For this purpose, the method returns the identifier
     * of the driver thread.
     *
     * @param frameSize the size of a single frame, in bytes.
     * @param framesCount the number of frames in a buffer.
     * @param threadPriority priority of the driver thread.
     * @return retval OK if both message queues were created successfully.
     *                INVALID_STATE if the method was already called.
     *                INVALID_ARGUMENTS if there was a problem setting up
     *                                  the queues.
     * @return commandMQ a message queue used for passing commands.
     * @return dataMQ a message queue used for passing audio data in the format
     *                specified at the stream opening.
     * @return statusMQ a message queue used for passing status from the driver
     *                  using ReadStatus structures.
     * @return threadId identifier of the driver's dedicated thread; the caller
     *                  may adjust the thread priority to match the priority
     *                  of the thread that provides audio data.
     */
    virtual ::android::hardware::Return<void> prepareForReading(uint32_t frameSize, uint32_t framesCount, prepareForReading_cb _hidl_cb) = 0;

    /**
     * Return the amount of input frames lost in the audio driver since the last
     * call of this function.
     *
     * Audio driver is expected to reset the value to 0 and restart counting
     * upon returning the current value by this function call. Such loss
     * typically occurs when the user space process is blocked longer than the
     * capacity of audio driver buffers.
     *
     * @return framesLost the number of input audio frames lost.
     */
    virtual ::android::hardware::Return<uint32_t> getInputFramesLost() = 0;

    /**
     * Return callback for getCapturePosition
     */
    using getCapturePosition_cb = std::function<void(::android::hardware::audio::V7_0::Result retval, uint64_t frames, uint64_t time)>;
    /**
     * Return a recent count of the number of audio frames received and the
     * clock time associated with that frame count. The count must not reset to
     * zero when a PCM input enters standby.
     *
     * @return retval INVALID_STATE if the device is not ready/available,
     *                NOT_SUPPORTED if the command is not supported,
     *                OK otherwise.
     * @return frames the total frame count received. This must be as early in
     *                the capture pipeline as possible. In general, frames
     *                must be non-negative and must not go "backwards".
     * @return time is the clock monotonic time when frames was measured. In
     *              general, time must be a positive quantity and must not
     *              go "backwards".
     */
    virtual ::android::hardware::Return<void> getCapturePosition(getCapturePosition_cb _hidl_cb) = 0;

    /**
     * Return callback for getActiveMicrophones
     */
    using getActiveMicrophones_cb = std::function<void(::android::hardware::audio::V7_0::Result retval, const ::android::hardware::hidl_vec<::android::hardware::audio::V7_0::MicrophoneInfo>& microphones)>;
    /**
     * Returns an array with active microphones in the stream.
     *
     * @return retval INVALID_STATE if the call is not successful,
     *                OK otherwise.
     *
     * @return microphones array with microphones info
     */
    virtual ::android::hardware::Return<void> getActiveMicrophones(getActiveMicrophones_cb _hidl_cb) = 0;

    /**
     * Specifies the logical microphone (for processing).
     *
     * If the feature is not supported an error should be returned
     * If multiple microphones are present, this should be treated as a preference
     * for their combined direction.
     *
     * Optional method
     *
     * @param Direction constant
     * @return retval OK if the call is successful, an error code otherwise.
     */
    virtual ::android::hardware::Return<::android::hardware::audio::V7_0::Result> setMicrophoneDirection(::android::hardware::audio::V7_0::MicrophoneDirection direction) = 0;

    /**
     * Specifies the zoom factor for the selected microphone (for processing).
     *
     * If the feature is not supported an error should be returned
     * If multiple microphones are present, this should be treated as a preference
     * for their combined field dimension.
     *
     * Optional method
     *
     * @param the desired field dimension of microphone capture. Range is from -1 (wide angle),
     * though 0 (no zoom) to 1 (maximum zoom).
     *
     * @return retval OK if the call is not successful, an error code otherwise.
     */
    virtual ::android::hardware::Return<::android::hardware::audio::V7_0::Result> setMicrophoneFieldDimension(float zoom) = 0;

    /**
     * Return callback for interfaceChain
     */
    using interfaceChain_cb = std::function<void(const ::android::hardware::hidl_vec<::android::hardware::hidl_string>& descriptors)>;
    /*
     * Provides run-time type information for this object.
     * For example, for the following interface definition:
     *     package android.hardware.foo@1.0;
     *     interface IParent {};
     *     interface IChild extends IParent {};
     * Calling interfaceChain on an IChild object must yield the following:
     *     ["android.hardware.foo@1.0::IChild",
     *      "android.hardware.foo@1.0::IParent"
     *      "android.hidl.base@1.0::IBase"]
     *
     * @return descriptors a vector of descriptors of the run-time type of the
     *         object.
     */
    virtual ::android::hardware::Return<void> interfaceChain(interfaceChain_cb _hidl_cb) override;

    /*
     * Emit diagnostic information to the given file.
     *
     * Optionally overriden.
     *
     * @param fd      File descriptor to dump data to.
     *                Must only be used for the duration of this call.
     * @param options Arguments for debugging.
     *                Must support empty for default debug information.
     */
    virtual ::android::hardware::Return<void> debug(const ::android::hardware::hidl_handle& fd, const ::android::hardware::hidl_vec<::android::hardware::hidl_string>& options) override;

    /**
     * Return callback for interfaceDescriptor
     */
    using interfaceDescriptor_cb = std::function<void(const ::android::hardware::hidl_string& descriptor)>;
    /*
     * Provides run-time type information for this object.
     * For example, for the following interface definition:
     *     package android.hardware.foo@1.0;
     *     interface IParent {};
     *     interface IChild extends IParent {};
     * Calling interfaceDescriptor on an IChild object must yield
     *     "android.hardware.foo@1.0::IChild"
     *
     * @return descriptor a descriptor of the run-time type of the
     *         object (the first element of the vector returned by
     *         interfaceChain())
     */
    virtual ::android::hardware::Return<void> interfaceDescriptor(interfaceDescriptor_cb _hidl_cb) override;

    /**
     * Return callback for getHashChain
     */
    using getHashChain_cb = std::function<void(const ::android::hardware::hidl_vec<::android::hardware::hidl_array<uint8_t, 32>>& hashchain)>;
    /*
     * Returns hashes of the source HAL files that define the interfaces of the
     * runtime type information on the object.
     * For example, for the following interface definition:
     *     package android.hardware.foo@1.0;
     *     interface IParent {};
     *     interface IChild extends IParent {};
     * Calling interfaceChain on an IChild object must yield the following:
     *     [(hash of IChild.hal),
     *      (hash of IParent.hal)
     *      (hash of IBase.hal)].
     *
     * SHA-256 is used as the hashing algorithm. Each hash has 32 bytes
     * according to SHA-256 standard.
     *
     * @return hashchain a vector of SHA-1 digests
     */
    virtual ::android::hardware::Return<void> getHashChain(getHashChain_cb _hidl_cb) override;

    /*
     * This method trigger the interface to enable/disable instrumentation based
     * on system property hal.instrumentation.enable.
     */
    virtual ::android::hardware::Return<void> setHALInstrumentation() override;

    /*
     * Registers a death recipient, to be called when the process hosting this
     * interface dies.
     *
     * @param recipient a hidl_death_recipient callback object
     * @param cookie a cookie that must be returned with the callback
     * @return success whether the death recipient was registered successfully.
     */
    virtual ::android::hardware::Return<bool> linkToDeath(const ::android::sp<::android::hardware::hidl_death_recipient>& recipient, uint64_t cookie) override;

    /*
     * Provides way to determine if interface is running without requesting
     * any functionality.
     */
    virtual ::android::hardware::Return<void> ping() override;

    /**
     * Return callback for getDebugInfo
     */
    using getDebugInfo_cb = std::function<void(const ::android::hidl::base::V1_0::DebugInfo& info)>;
    /*
     * Get debug information on references on this interface.
     * @return info debugging information. See comments of DebugInfo.
     */
    virtual ::android::hardware::Return<void> getDebugInfo(getDebugInfo_cb _hidl_cb) override;

    /*
     * This method notifies the interface that one or more system properties
     * have changed. The default implementation calls
     * (C++)  report_sysprop_change() in libcutils or
     * (Java) android.os.SystemProperties.reportSyspropChanged,
     * which in turn calls a set of registered callbacks (eg to update trace
     * tags).
     */
    virtual ::android::hardware::Return<void> notifySyspropsChanged() override;

    /*
     * Unregisters the registered death recipient. If this service was registered
     * multiple times with the same exact death recipient, this unlinks the most
     * recently registered one.
     *
     * @param recipient a previously registered hidl_death_recipient callback
     * @return success whether the death recipient was unregistered successfully.
     */
    virtual ::android::hardware::Return<bool> unlinkToDeath(const ::android::sp<::android::hardware::hidl_death_recipient>& recipient) override;

    // cast static functions
    /**
     * This performs a checked cast based on what the underlying implementation actually is.
     */
    static ::android::hardware::Return<::android::sp<::android::hardware::audio::V7_0::IStreamIn>> castFrom(const ::android::sp<::android::hardware::audio::V7_0::IStreamIn>& parent, bool emitError = false);
    /**
     * This performs a checked cast based on what the underlying implementation actually is.
     */
    static ::android::hardware::Return<::android::sp<::android::hardware::audio::V7_0::IStreamIn>> castFrom(const ::android::sp<::android::hardware::audio::V7_0::IStream>& parent, bool emitError = false);
    /**
     * This performs a checked cast based on what the underlying implementation actually is.
     */
    static ::android::hardware::Return<::android::sp<::android::hardware::audio::V7_0::IStreamIn>> castFrom(const ::android::sp<::android::hidl::base::V1_0::IBase>& parent, bool emitError = false);

    // helper methods for interactions with the hwservicemanager
    /**
     * This gets the service of this type with the specified instance name. If the
     * service is currently not available or not in the VINTF manifest on a Trebilized
     * device, this will return nullptr. This is useful when you don't want to block
     * during device boot. If getStub is true, this will try to return an unwrapped
     * passthrough implementation in the same process. This is useful when getting an
     * implementation from the same partition/compilation group.
     *
     * In general, prefer getService(std::string,bool)
     */
    static ::android::sp<IStreamIn> tryGetService(const std::string &serviceName="default", bool getStub=false);
    /**
     * Deprecated. See tryGetService(std::string, bool)
     */
    static ::android::sp<IStreamIn> tryGetService(const char serviceName[], bool getStub=false)  { std::string str(serviceName ? serviceName : "");      return tryGetService(str, getStub); }
    /**
     * Deprecated. See tryGetService(std::string, bool)
     */
    static ::android::sp<IStreamIn> tryGetService(const ::android::hardware::hidl_string& serviceName, bool getStub=false)  { std::string str(serviceName.c_str());      return tryGetService(str, getStub); }
    /**
     * Calls tryGetService("default", bool). This is the recommended instance name for singleton services.
     */
    static ::android::sp<IStreamIn> tryGetService(bool getStub) { return tryGetService("default", getStub); }
    /**
     * This gets the service of this type with the specified instance name. If the
     * service is not in the VINTF manifest on a Trebilized device, this will return
     * nullptr. If the service is not available, this will wait for the service to
     * become available. If the service is a lazy service, this will start the service
     * and return when it becomes available. If getStub is true, this will try to
     * return an unwrapped passthrough implementation in the same process. This is
     * useful when getting an implementation from the same partition/compilation group.
     */
    static ::android::sp<IStreamIn> getService(const std::string &serviceName="default", bool getStub=false);
    /**
     * Deprecated. See getService(std::string, bool)
     */
    static ::android::sp<IStreamIn> getService(const char serviceName[], bool getStub=false)  { std::string str(serviceName ? serviceName : "");      return getService(str, getStub); }
    /**
     * Deprecated. See getService(std::string, bool)
     */
    static ::android::sp<IStreamIn> getService(const ::android::hardware::hidl_string& serviceName, bool getStub=false)  { std::string str(serviceName.c_str());      return getService(str, getStub); }
    /**
     * Calls getService("default", bool). This is the recommended instance name for singleton services.
     */
    static ::android::sp<IStreamIn> getService(bool getStub) { return getService("default", getStub); }
    /**
     * Registers a service with the service manager. For Trebilized devices, the service
     * must also be in the VINTF manifest.
     */
    __attribute__ ((warn_unused_result))::android::status_t registerAsService(const std::string &serviceName="default");
    /**
     * Registers for notifications for when a service is registered.
     */
    static bool registerForNotifications(
            const std::string &serviceName,
            const ::android::sp<::android::hidl::manager::V1_0::IServiceNotification> &notification);
};

//
// type declarations for package
//

template<typename>
static inline std::string toString(int32_t o);
static inline std::string toString(::android::hardware::audio::V7_0::IStreamIn::ReadCommand o);
static inline void PrintTo(::android::hardware::audio::V7_0::IStreamIn::ReadCommand o, ::std::ostream* os);
constexpr int32_t operator|(const ::android::hardware::audio::V7_0::IStreamIn::ReadCommand lhs, const ::android::hardware::audio::V7_0::IStreamIn::ReadCommand rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) | static_cast<int32_t>(rhs));
}
constexpr int32_t operator|(const int32_t lhs, const ::android::hardware::audio::V7_0::IStreamIn::ReadCommand rhs) {
    return static_cast<int32_t>(lhs | static_cast<int32_t>(rhs));
}
constexpr int32_t operator|(const ::android::hardware::audio::V7_0::IStreamIn::ReadCommand lhs, const int32_t rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) | rhs);
}
constexpr int32_t operator&(const ::android::hardware::audio::V7_0::IStreamIn::ReadCommand lhs, const ::android::hardware::audio::V7_0::IStreamIn::ReadCommand rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) & static_cast<int32_t>(rhs));
}
constexpr int32_t operator&(const int32_t lhs, const ::android::hardware::audio::V7_0::IStreamIn::ReadCommand rhs) {
    return static_cast<int32_t>(lhs & static_cast<int32_t>(rhs));
}
constexpr int32_t operator&(const ::android::hardware::audio::V7_0::IStreamIn::ReadCommand lhs, const int32_t rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) & rhs);
}
constexpr int32_t &operator|=(int32_t& v, const ::android::hardware::audio::V7_0::IStreamIn::ReadCommand e) {
    v |= static_cast<int32_t>(e);
    return v;
}
constexpr int32_t &operator&=(int32_t& v, const ::android::hardware::audio::V7_0::IStreamIn::ReadCommand e) {
    v &= static_cast<int32_t>(e);
    return v;
}

static inline std::string toString(const ::android::hardware::audio::V7_0::IStreamIn::ReadParameters::Params& o);
static inline void PrintTo(const ::android::hardware::audio::V7_0::IStreamIn::ReadParameters::Params& o, ::std::ostream*);
// operator== and operator!= are not generated for Params

static inline std::string toString(const ::android::hardware::audio::V7_0::IStreamIn::ReadParameters& o);
static inline void PrintTo(const ::android::hardware::audio::V7_0::IStreamIn::ReadParameters& o, ::std::ostream*);
// operator== and operator!= are not generated for ReadParameters

static inline std::string toString(const ::android::hardware::audio::V7_0::IStreamIn::ReadStatus::Reply::CapturePosition& o);
static inline void PrintTo(const ::android::hardware::audio::V7_0::IStreamIn::ReadStatus::Reply::CapturePosition& o, ::std::ostream*);
static inline bool operator==(const ::android::hardware::audio::V7_0::IStreamIn::ReadStatus::Reply::CapturePosition& lhs, const ::android::hardware::audio::V7_0::IStreamIn::ReadStatus::Reply::CapturePosition& rhs);
static inline bool operator!=(const ::android::hardware::audio::V7_0::IStreamIn::ReadStatus::Reply::CapturePosition& lhs, const ::android::hardware::audio::V7_0::IStreamIn::ReadStatus::Reply::CapturePosition& rhs);

static inline std::string toString(const ::android::hardware::audio::V7_0::IStreamIn::ReadStatus::Reply& o);
static inline void PrintTo(const ::android::hardware::audio::V7_0::IStreamIn::ReadStatus::Reply& o, ::std::ostream*);
// operator== and operator!= are not generated for Reply

static inline std::string toString(const ::android::hardware::audio::V7_0::IStreamIn::ReadStatus& o);
static inline void PrintTo(const ::android::hardware::audio::V7_0::IStreamIn::ReadStatus& o, ::std::ostream*);
// operator== and operator!= are not generated for ReadStatus

static inline std::string toString(const ::android::sp<::android::hardware::audio::V7_0::IStreamIn>& o);

//
// type header definitions for package
//

template<>
inline std::string toString<::android::hardware::audio::V7_0::IStreamIn::ReadCommand>(int32_t o) {
    using ::android::hardware::details::toHexString;
    std::string os;
    ::android::hardware::hidl_bitfield<::android::hardware::audio::V7_0::IStreamIn::ReadCommand> flipped = 0;
    bool first = true;
    if ((o & ::android::hardware::audio::V7_0::IStreamIn::ReadCommand::READ) == static_cast<int32_t>(::android::hardware::audio::V7_0::IStreamIn::ReadCommand::READ)) {
        os += (first ? "" : " | ");
        os += "READ";
        first = false;
        flipped |= ::android::hardware::audio::V7_0::IStreamIn::ReadCommand::READ;
    }
    if ((o & ::android::hardware::audio::V7_0::IStreamIn::ReadCommand::GET_CAPTURE_POSITION) == static_cast<int32_t>(::android::hardware::audio::V7_0::IStreamIn::ReadCommand::GET_CAPTURE_POSITION)) {
        os += (first ? "" : " | ");
        os += "GET_CAPTURE_POSITION";
        first = false;
        flipped |= ::android::hardware::audio::V7_0::IStreamIn::ReadCommand::GET_CAPTURE_POSITION;
    }
    if (o != flipped) {
        os += (first ? "" : " | ");
        os += toHexString(o & (~flipped));
    }os += " (";
    os += toHexString(o);
    os += ")";
    return os;
}

static inline std::string toString(::android::hardware::audio::V7_0::IStreamIn::ReadCommand o) {
    using ::android::hardware::details::toHexString;
    if (o == ::android::hardware::audio::V7_0::IStreamIn::ReadCommand::READ) {
        return "READ";
    }
    if (o == ::android::hardware::audio::V7_0::IStreamIn::ReadCommand::GET_CAPTURE_POSITION) {
        return "GET_CAPTURE_POSITION";
    }
    std::string os;
    os += toHexString(static_cast<int32_t>(o));
    return os;
}

static inline void PrintTo(::android::hardware::audio::V7_0::IStreamIn::ReadCommand o, ::std::ostream* os) {
    *os << toString(o);
}

static inline std::string toString(const ::android::hardware::audio::V7_0::IStreamIn::ReadParameters::Params& o) {
    using ::android::hardware::toString;
    std::string os;
    os += "{";
    os += ".read = ";
    os += ::android::hardware::toString(o.read);
    os += "}"; return os;
}

static inline void PrintTo(const ::android::hardware::audio::V7_0::IStreamIn::ReadParameters::Params& o, ::std::ostream* os) {
    *os << toString(o);
}

// operator== and operator!= are not generated for Params

static inline std::string toString(const ::android::hardware::audio::V7_0::IStreamIn::ReadParameters& o) {
    using ::android::hardware::toString;
    std::string os;
    os += "{";
    os += ".command = ";
    os += ::android::hardware::audio::V7_0::toString(o.command);
    os += ", .params = ";
    os += ::android::hardware::audio::V7_0::toString(o.params);
    os += "}"; return os;
}

static inline void PrintTo(const ::android::hardware::audio::V7_0::IStreamIn::ReadParameters& o, ::std::ostream* os) {
    *os << toString(o);
}

// operator== and operator!= are not generated for ReadParameters

static inline std::string toString(const ::android::hardware::audio::V7_0::IStreamIn::ReadStatus::Reply::CapturePosition& o) {
    using ::android::hardware::toString;
    std::string os;
    os += "{";
    os += ".frames = ";
    os += ::android::hardware::toString(o.frames);
    os += ", .time = ";
    os += ::android::hardware::toString(o.time);
    os += "}"; return os;
}

static inline void PrintTo(const ::android::hardware::audio::V7_0::IStreamIn::ReadStatus::Reply::CapturePosition& o, ::std::ostream* os) {
    *os << toString(o);
}

static inline bool operator==(const ::android::hardware::audio::V7_0::IStreamIn::ReadStatus::Reply::CapturePosition& lhs, const ::android::hardware::audio::V7_0::IStreamIn::ReadStatus::Reply::CapturePosition& rhs) {
    if (lhs.frames != rhs.frames) {
        return false;
    }
    if (lhs.time != rhs.time) {
        return false;
    }
    return true;
}

static inline bool operator!=(const ::android::hardware::audio::V7_0::IStreamIn::ReadStatus::Reply::CapturePosition& lhs, const ::android::hardware::audio::V7_0::IStreamIn::ReadStatus::Reply::CapturePosition& rhs){
    return !(lhs == rhs);
}

static inline std::string toString(const ::android::hardware::audio::V7_0::IStreamIn::ReadStatus::Reply& o) {
    using ::android::hardware::toString;
    std::string os;
    os += "{";
    os += ".read = ";
    os += ::android::hardware::toString(o.read);
    os += ", .capturePosition = ";
    os += ::android::hardware::audio::V7_0::toString(o.capturePosition);
    os += "}"; return os;
}

static inline void PrintTo(const ::android::hardware::audio::V7_0::IStreamIn::ReadStatus::Reply& o, ::std::ostream* os) {
    *os << toString(o);
}

// operator== and operator!= are not generated for Reply

static inline std::string toString(const ::android::hardware::audio::V7_0::IStreamIn::ReadStatus& o) {
    using ::android::hardware::toString;
    std::string os;
    os += "{";
    os += ".retval = ";
    os += ::android::hardware::audio::V7_0::toString(o.retval);
    os += ", .replyTo = ";
    os += ::android::hardware::audio::V7_0::toString(o.replyTo);
    os += ", .reply = ";
    os += ::android::hardware::audio::V7_0::toString(o.reply);
    os += "}"; return os;
}

static inline void PrintTo(const ::android::hardware::audio::V7_0::IStreamIn::ReadStatus& o, ::std::ostream* os) {
    *os << toString(o);
}

// operator== and operator!= are not generated for ReadStatus

static inline std::string toString(const ::android::sp<::android::hardware::audio::V7_0::IStreamIn>& o) {
    std::string os = "[class or subclass of ";
    os += ::android::hardware::audio::V7_0::IStreamIn::descriptor;
    os += "]";
    os += o->isRemote() ? "@remote" : "@local";
    return os;
}


}  // namespace V7_0
}  // namespace audio
}  // namespace hardware
}  // namespace android

//
// global type declarations for package
//

namespace android {
namespace hardware {
namespace details {
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++17-extensions"
template<> inline constexpr std::array<::android::hardware::audio::V7_0::IStreamIn::ReadCommand, 2> hidl_enum_values<::android::hardware::audio::V7_0::IStreamIn::ReadCommand> = {
    ::android::hardware::audio::V7_0::IStreamIn::ReadCommand::READ,
    ::android::hardware::audio::V7_0::IStreamIn::ReadCommand::GET_CAPTURE_POSITION,
};
#pragma clang diagnostic pop
}  // namespace details
}  // namespace hardware
}  // namespace android


#endif  // HIDL_GENERATED_ANDROID_HARDWARE_AUDIO_V7_0_ISTREAMIN_H
