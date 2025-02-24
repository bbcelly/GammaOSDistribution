#ifndef HIDL_GENERATED_ANDROID_HARDWARE_AUDIO_EFFECT_V7_0_BPHWAUTOMATICGAINCONTROLEFFECT_H
#define HIDL_GENERATED_ANDROID_HARDWARE_AUDIO_EFFECT_V7_0_BPHWAUTOMATICGAINCONTROLEFFECT_H

#include <hidl/HidlTransportSupport.h>

#include <android/hardware/audio/effect/7.0/IHwAutomaticGainControlEffect.h>

namespace android {
namespace hardware {
namespace audio {
namespace effect {
namespace V7_0 {

struct BpHwAutomaticGainControlEffect : public ::android::hardware::BpInterface<IAutomaticGainControlEffect>, public ::android::hardware::details::HidlInstrumentor {
    explicit BpHwAutomaticGainControlEffect(const ::android::sp<::android::hardware::IBinder> &_hidl_impl);

    /**
     * The pure class is what this class wraps.
     */
    typedef IAutomaticGainControlEffect Pure;

    /**
     * Type tag for use in template logic that indicates this is a 'proxy' class.
     */
    typedef ::android::hardware::details::bphw_tag _hidl_tag;

    virtual bool isRemote() const override { return true; }

    void onLastStrongRef(const void* id) override;

    // Methods from ::android::hardware::audio::effect::V7_0::IAutomaticGainControlEffect follow.
    static ::android::hardware::Return<::android::hardware::audio::effect::V7_0::Result>  _hidl_setTargetLevel(::android::hardware::IInterface* _hidl_this, ::android::hardware::details::HidlInstrumentor *_hidl_this_instrumentor, int16_t targetLevelMb);
    static ::android::hardware::Return<void>  _hidl_getTargetLevel(::android::hardware::IInterface* _hidl_this, ::android::hardware::details::HidlInstrumentor *_hidl_this_instrumentor, getTargetLevel_cb _hidl_cb);
    static ::android::hardware::Return<::android::hardware::audio::effect::V7_0::Result>  _hidl_setCompGain(::android::hardware::IInterface* _hidl_this, ::android::hardware::details::HidlInstrumentor *_hidl_this_instrumentor, int16_t compGainMb);
    static ::android::hardware::Return<void>  _hidl_getCompGain(::android::hardware::IInterface* _hidl_this, ::android::hardware::details::HidlInstrumentor *_hidl_this_instrumentor, getCompGain_cb _hidl_cb);
    static ::android::hardware::Return<::android::hardware::audio::effect::V7_0::Result>  _hidl_setLimiterEnabled(::android::hardware::IInterface* _hidl_this, ::android::hardware::details::HidlInstrumentor *_hidl_this_instrumentor, bool enabled);
    static ::android::hardware::Return<void>  _hidl_isLimiterEnabled(::android::hardware::IInterface* _hidl_this, ::android::hardware::details::HidlInstrumentor *_hidl_this_instrumentor, isLimiterEnabled_cb _hidl_cb);
    static ::android::hardware::Return<::android::hardware::audio::effect::V7_0::Result>  _hidl_setAllProperties(::android::hardware::IInterface* _hidl_this, ::android::hardware::details::HidlInstrumentor *_hidl_this_instrumentor, const ::android::hardware::audio::effect::V7_0::IAutomaticGainControlEffect::AllProperties& properties);
    static ::android::hardware::Return<void>  _hidl_getAllProperties(::android::hardware::IInterface* _hidl_this, ::android::hardware::details::HidlInstrumentor *_hidl_this_instrumentor, getAllProperties_cb _hidl_cb);

    // Methods from ::android::hardware::audio::effect::V7_0::IEffect follow.
    ::android::hardware::Return<::android::hardware::audio::effect::V7_0::Result> init() override;
    ::android::hardware::Return<::android::hardware::audio::effect::V7_0::Result> setConfig(const ::android::hardware::audio::effect::V7_0::EffectConfig& config, const ::android::sp<::android::hardware::audio::effect::V7_0::IEffectBufferProviderCallback>& inputBufferProvider, const ::android::sp<::android::hardware::audio::effect::V7_0::IEffectBufferProviderCallback>& outputBufferProvider) override;
    ::android::hardware::Return<::android::hardware::audio::effect::V7_0::Result> reset() override;
    ::android::hardware::Return<::android::hardware::audio::effect::V7_0::Result> enable() override;
    ::android::hardware::Return<::android::hardware::audio::effect::V7_0::Result> disable() override;
    ::android::hardware::Return<::android::hardware::audio::effect::V7_0::Result> setDevice(const ::android::hardware::audio::common::V7_0::DeviceAddress& device) override;
    ::android::hardware::Return<void> setAndGetVolume(const ::android::hardware::hidl_vec<uint32_t>& volumes, setAndGetVolume_cb _hidl_cb) override;
    ::android::hardware::Return<::android::hardware::audio::effect::V7_0::Result> volumeChangeNotification(const ::android::hardware::hidl_vec<uint32_t>& volumes) override;
    ::android::hardware::Return<::android::hardware::audio::effect::V7_0::Result> setAudioMode(::android::hardware::audio::common::V7_0::AudioMode mode) override;
    ::android::hardware::Return<::android::hardware::audio::effect::V7_0::Result> setConfigReverse(const ::android::hardware::audio::effect::V7_0::EffectConfig& config, const ::android::sp<::android::hardware::audio::effect::V7_0::IEffectBufferProviderCallback>& inputBufferProvider, const ::android::sp<::android::hardware::audio::effect::V7_0::IEffectBufferProviderCallback>& outputBufferProvider) override;
    ::android::hardware::Return<::android::hardware::audio::effect::V7_0::Result> setInputDevice(const ::android::hardware::audio::common::V7_0::DeviceAddress& device) override;
    ::android::hardware::Return<void> getConfig(getConfig_cb _hidl_cb) override;
    ::android::hardware::Return<void> getConfigReverse(getConfigReverse_cb _hidl_cb) override;
    ::android::hardware::Return<void> getSupportedAuxChannelsConfigs(uint32_t maxConfigs, getSupportedAuxChannelsConfigs_cb _hidl_cb) override;
    ::android::hardware::Return<void> getAuxChannelsConfig(getAuxChannelsConfig_cb _hidl_cb) override;
    ::android::hardware::Return<::android::hardware::audio::effect::V7_0::Result> setAuxChannelsConfig(const ::android::hardware::audio::effect::V7_0::EffectAuxChannelsConfig& config) override;
    ::android::hardware::Return<::android::hardware::audio::effect::V7_0::Result> setAudioSource(const ::android::hardware::hidl_string& source) override;
    ::android::hardware::Return<::android::hardware::audio::effect::V7_0::Result> offload(const ::android::hardware::audio::effect::V7_0::EffectOffloadParameter& param) override;
    ::android::hardware::Return<void> getDescriptor(getDescriptor_cb _hidl_cb) override;
    ::android::hardware::Return<void> prepareForProcessing(prepareForProcessing_cb _hidl_cb) override;
    ::android::hardware::Return<::android::hardware::audio::effect::V7_0::Result> setProcessBuffers(const ::android::hardware::audio::effect::V7_0::AudioBuffer& inBuffer, const ::android::hardware::audio::effect::V7_0::AudioBuffer& outBuffer) override;
    ::android::hardware::Return<void> command(uint32_t commandId, const ::android::hardware::hidl_vec<uint8_t>& data, uint32_t resultMaxSize, command_cb _hidl_cb) override;
    ::android::hardware::Return<::android::hardware::audio::effect::V7_0::Result> setParameter(const ::android::hardware::hidl_vec<uint8_t>& parameter, const ::android::hardware::hidl_vec<uint8_t>& value) override;
    ::android::hardware::Return<void> getParameter(const ::android::hardware::hidl_vec<uint8_t>& parameter, uint32_t valueMaxSize, getParameter_cb _hidl_cb) override;
    ::android::hardware::Return<void> getSupportedConfigsForFeature(uint32_t featureId, uint32_t maxConfigs, uint32_t configSize, getSupportedConfigsForFeature_cb _hidl_cb) override;
    ::android::hardware::Return<void> getCurrentConfigForFeature(uint32_t featureId, uint32_t configSize, getCurrentConfigForFeature_cb _hidl_cb) override;
    ::android::hardware::Return<::android::hardware::audio::effect::V7_0::Result> setCurrentConfigForFeature(uint32_t featureId, const ::android::hardware::hidl_vec<uint8_t>& configData) override;
    ::android::hardware::Return<::android::hardware::audio::effect::V7_0::Result> close() override;

    // Methods from ::android::hardware::audio::effect::V7_0::IAutomaticGainControlEffect follow.
    ::android::hardware::Return<::android::hardware::audio::effect::V7_0::Result> setTargetLevel(int16_t targetLevelMb) override;
    ::android::hardware::Return<void> getTargetLevel(getTargetLevel_cb _hidl_cb) override;
    ::android::hardware::Return<::android::hardware::audio::effect::V7_0::Result> setCompGain(int16_t compGainMb) override;
    ::android::hardware::Return<void> getCompGain(getCompGain_cb _hidl_cb) override;
    ::android::hardware::Return<::android::hardware::audio::effect::V7_0::Result> setLimiterEnabled(bool enabled) override;
    ::android::hardware::Return<void> isLimiterEnabled(isLimiterEnabled_cb _hidl_cb) override;
    ::android::hardware::Return<::android::hardware::audio::effect::V7_0::Result> setAllProperties(const ::android::hardware::audio::effect::V7_0::IAutomaticGainControlEffect::AllProperties& properties) override;
    ::android::hardware::Return<void> getAllProperties(getAllProperties_cb _hidl_cb) override;

    // Methods from ::android::hidl::base::V1_0::IBase follow.
    ::android::hardware::Return<void> interfaceChain(interfaceChain_cb _hidl_cb) override;
    ::android::hardware::Return<void> debug(const ::android::hardware::hidl_handle& fd, const ::android::hardware::hidl_vec<::android::hardware::hidl_string>& options) override;
    ::android::hardware::Return<void> interfaceDescriptor(interfaceDescriptor_cb _hidl_cb) override;
    ::android::hardware::Return<void> getHashChain(getHashChain_cb _hidl_cb) override;
    ::android::hardware::Return<void> setHALInstrumentation() override;
    ::android::hardware::Return<bool> linkToDeath(const ::android::sp<::android::hardware::hidl_death_recipient>& recipient, uint64_t cookie) override;
    ::android::hardware::Return<void> ping() override;
    ::android::hardware::Return<void> getDebugInfo(getDebugInfo_cb _hidl_cb) override;
    ::android::hardware::Return<void> notifySyspropsChanged() override;
    ::android::hardware::Return<bool> unlinkToDeath(const ::android::sp<::android::hardware::hidl_death_recipient>& recipient) override;

private:
    std::mutex _hidl_mMutex;
    std::vector<::android::sp<::android::hardware::hidl_binder_death_recipient>> _hidl_mDeathRecipients;
};

}  // namespace V7_0
}  // namespace effect
}  // namespace audio
}  // namespace hardware
}  // namespace android

#endif  // HIDL_GENERATED_ANDROID_HARDWARE_AUDIO_EFFECT_V7_0_BPHWAUTOMATICGAINCONTROLEFFECT_H
