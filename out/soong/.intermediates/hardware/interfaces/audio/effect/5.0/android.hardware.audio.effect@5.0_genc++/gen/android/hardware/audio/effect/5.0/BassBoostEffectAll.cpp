#define LOG_TAG "android.hardware.audio.effect@5.0::BassBoostEffect"

#include <log/log.h>
#include <cutils/trace.h>
#include <hidl/HidlTransportSupport.h>

#include <hidl/Static.h>
#include <hwbinder/ProcessState.h>
#include <utils/Trace.h>
#include <android/hidl/manager/1.0/IServiceManager.h>
#include <android/hardware/audio/effect/5.0/BpHwBassBoostEffect.h>
#include <android/hardware/audio/effect/5.0/BnHwBassBoostEffect.h>
#include <android/hardware/audio/effect/5.0/BsBassBoostEffect.h>
#include <android/hardware/audio/effect/5.0/BpHwEffect.h>
#include <android/hidl/base/1.0/BpHwBase.h>
#include <hidl/ServiceManagement.h>

namespace android {
namespace hardware {
namespace audio {
namespace effect {
namespace V5_0 {

const char* IBassBoostEffect::descriptor("android.hardware.audio.effect@5.0::IBassBoostEffect");

__attribute__((constructor)) static void static_constructor() {
    ::android::hardware::details::getBnConstructorMap().set(IBassBoostEffect::descriptor,
            [](void *iIntf) -> ::android::sp<::android::hardware::IBinder> {
                return new BnHwBassBoostEffect(static_cast<IBassBoostEffect *>(iIntf));
            });
    ::android::hardware::details::getBsConstructorMap().set(IBassBoostEffect::descriptor,
            [](void *iIntf) -> ::android::sp<::android::hidl::base::V1_0::IBase> {
                return new BsBassBoostEffect(static_cast<IBassBoostEffect *>(iIntf));
            });
}

__attribute__((destructor))static void static_destructor() {
    ::android::hardware::details::getBnConstructorMap().erase(IBassBoostEffect::descriptor);
    ::android::hardware::details::getBsConstructorMap().erase(IBassBoostEffect::descriptor);
}

// Methods from ::android::hardware::audio::effect::V5_0::IEffect follow.
// no default implementation for: ::android::hardware::Return<::android::hardware::audio::effect::V5_0::Result> IBassBoostEffect::init()
// no default implementation for: ::android::hardware::Return<::android::hardware::audio::effect::V5_0::Result> IBassBoostEffect::setConfig(const ::android::hardware::audio::effect::V5_0::EffectConfig& config, const ::android::sp<::android::hardware::audio::effect::V5_0::IEffectBufferProviderCallback>& inputBufferProvider, const ::android::sp<::android::hardware::audio::effect::V5_0::IEffectBufferProviderCallback>& outputBufferProvider)
// no default implementation for: ::android::hardware::Return<::android::hardware::audio::effect::V5_0::Result> IBassBoostEffect::reset()
// no default implementation for: ::android::hardware::Return<::android::hardware::audio::effect::V5_0::Result> IBassBoostEffect::enable()
// no default implementation for: ::android::hardware::Return<::android::hardware::audio::effect::V5_0::Result> IBassBoostEffect::disable()
// no default implementation for: ::android::hardware::Return<::android::hardware::audio::effect::V5_0::Result> IBassBoostEffect::setDevice(::android::hardware::hidl_bitfield<::android::hardware::audio::common::V5_0::AudioDevice> device)
// no default implementation for: ::android::hardware::Return<void> IBassBoostEffect::setAndGetVolume(const ::android::hardware::hidl_vec<uint32_t>& volumes, setAndGetVolume_cb _hidl_cb)
// no default implementation for: ::android::hardware::Return<::android::hardware::audio::effect::V5_0::Result> IBassBoostEffect::volumeChangeNotification(const ::android::hardware::hidl_vec<uint32_t>& volumes)
// no default implementation for: ::android::hardware::Return<::android::hardware::audio::effect::V5_0::Result> IBassBoostEffect::setAudioMode(::android::hardware::audio::common::V5_0::AudioMode mode)
// no default implementation for: ::android::hardware::Return<::android::hardware::audio::effect::V5_0::Result> IBassBoostEffect::setConfigReverse(const ::android::hardware::audio::effect::V5_0::EffectConfig& config, const ::android::sp<::android::hardware::audio::effect::V5_0::IEffectBufferProviderCallback>& inputBufferProvider, const ::android::sp<::android::hardware::audio::effect::V5_0::IEffectBufferProviderCallback>& outputBufferProvider)
// no default implementation for: ::android::hardware::Return<::android::hardware::audio::effect::V5_0::Result> IBassBoostEffect::setInputDevice(::android::hardware::hidl_bitfield<::android::hardware::audio::common::V5_0::AudioDevice> device)
// no default implementation for: ::android::hardware::Return<void> IBassBoostEffect::getConfig(getConfig_cb _hidl_cb)
// no default implementation for: ::android::hardware::Return<void> IBassBoostEffect::getConfigReverse(getConfigReverse_cb _hidl_cb)
// no default implementation for: ::android::hardware::Return<void> IBassBoostEffect::getSupportedAuxChannelsConfigs(uint32_t maxConfigs, getSupportedAuxChannelsConfigs_cb _hidl_cb)
// no default implementation for: ::android::hardware::Return<void> IBassBoostEffect::getAuxChannelsConfig(getAuxChannelsConfig_cb _hidl_cb)
// no default implementation for: ::android::hardware::Return<::android::hardware::audio::effect::V5_0::Result> IBassBoostEffect::setAuxChannelsConfig(const ::android::hardware::audio::effect::V5_0::EffectAuxChannelsConfig& config)
// no default implementation for: ::android::hardware::Return<::android::hardware::audio::effect::V5_0::Result> IBassBoostEffect::setAudioSource(::android::hardware::audio::common::V5_0::AudioSource source)
// no default implementation for: ::android::hardware::Return<::android::hardware::audio::effect::V5_0::Result> IBassBoostEffect::offload(const ::android::hardware::audio::effect::V5_0::EffectOffloadParameter& param)
// no default implementation for: ::android::hardware::Return<void> IBassBoostEffect::getDescriptor(getDescriptor_cb _hidl_cb)
// no default implementation for: ::android::hardware::Return<void> IBassBoostEffect::prepareForProcessing(prepareForProcessing_cb _hidl_cb)
// no default implementation for: ::android::hardware::Return<::android::hardware::audio::effect::V5_0::Result> IBassBoostEffect::setProcessBuffers(const ::android::hardware::audio::effect::V5_0::AudioBuffer& inBuffer, const ::android::hardware::audio::effect::V5_0::AudioBuffer& outBuffer)
// no default implementation for: ::android::hardware::Return<void> IBassBoostEffect::command(uint32_t commandId, const ::android::hardware::hidl_vec<uint8_t>& data, uint32_t resultMaxSize, command_cb _hidl_cb)
// no default implementation for: ::android::hardware::Return<::android::hardware::audio::effect::V5_0::Result> IBassBoostEffect::setParameter(const ::android::hardware::hidl_vec<uint8_t>& parameter, const ::android::hardware::hidl_vec<uint8_t>& value)
// no default implementation for: ::android::hardware::Return<void> IBassBoostEffect::getParameter(const ::android::hardware::hidl_vec<uint8_t>& parameter, uint32_t valueMaxSize, getParameter_cb _hidl_cb)
// no default implementation for: ::android::hardware::Return<void> IBassBoostEffect::getSupportedConfigsForFeature(uint32_t featureId, uint32_t maxConfigs, uint32_t configSize, getSupportedConfigsForFeature_cb _hidl_cb)
// no default implementation for: ::android::hardware::Return<void> IBassBoostEffect::getCurrentConfigForFeature(uint32_t featureId, uint32_t configSize, getCurrentConfigForFeature_cb _hidl_cb)
// no default implementation for: ::android::hardware::Return<::android::hardware::audio::effect::V5_0::Result> IBassBoostEffect::setCurrentConfigForFeature(uint32_t featureId, const ::android::hardware::hidl_vec<uint8_t>& configData)
// no default implementation for: ::android::hardware::Return<::android::hardware::audio::effect::V5_0::Result> IBassBoostEffect::close()

// Methods from ::android::hardware::audio::effect::V5_0::IBassBoostEffect follow.
// no default implementation for: ::android::hardware::Return<void> IBassBoostEffect::isStrengthSupported(isStrengthSupported_cb _hidl_cb)
// no default implementation for: ::android::hardware::Return<::android::hardware::audio::effect::V5_0::Result> IBassBoostEffect::setStrength(uint16_t strength)
// no default implementation for: ::android::hardware::Return<void> IBassBoostEffect::getStrength(getStrength_cb _hidl_cb)

// Methods from ::android::hidl::base::V1_0::IBase follow.
::android::hardware::Return<void> IBassBoostEffect::interfaceChain(interfaceChain_cb _hidl_cb){
    _hidl_cb({
        ::android::hardware::audio::effect::V5_0::IBassBoostEffect::descriptor,
        ::android::hardware::audio::effect::V5_0::IEffect::descriptor,
        ::android::hidl::base::V1_0::IBase::descriptor,
    });
    return ::android::hardware::Void();
}

::android::hardware::Return<void> IBassBoostEffect::debug(const ::android::hardware::hidl_handle& fd, const ::android::hardware::hidl_vec<::android::hardware::hidl_string>& options){
    (void)fd;
    (void)options;
    return ::android::hardware::Void();
}

::android::hardware::Return<void> IBassBoostEffect::interfaceDescriptor(interfaceDescriptor_cb _hidl_cb){
    _hidl_cb(::android::hardware::audio::effect::V5_0::IBassBoostEffect::descriptor);
    return ::android::hardware::Void();
}

::android::hardware::Return<void> IBassBoostEffect::getHashChain(getHashChain_cb _hidl_cb){
    _hidl_cb({
        (uint8_t[32]){225,191,134,76,203,132,88,192,218,29,204,116,162,231,72,177,220,168,172,54,13,245,144,89,28,248,45,152,41,45,121,129} /* e1bf864ccb8458c0da1dcc74a2e748b1dca8ac360df590591cf82d98292d7981 */,
        (uint8_t[32]){68,90,101,234,46,221,28,203,168,168,216,225,200,141,36,198,234,103,229,125,53,95,164,70,171,57,14,32,240,219,20,170} /* 445a65ea2edd1ccba8a8d8e1c88d24c6ea67e57d355fa446ab390e20f0db14aa */,
        (uint8_t[32]){236,127,215,158,208,45,250,133,188,73,148,38,173,174,62,190,35,239,5,36,243,205,105,87,19,147,36,184,59,24,202,76} /* ec7fd79ed02dfa85bc499426adae3ebe23ef0524f3cd6957139324b83b18ca4c */});
    return ::android::hardware::Void();
}

::android::hardware::Return<void> IBassBoostEffect::setHALInstrumentation(){
    return ::android::hardware::Void();
}

::android::hardware::Return<bool> IBassBoostEffect::linkToDeath(const ::android::sp<::android::hardware::hidl_death_recipient>& recipient, uint64_t cookie){
    (void)cookie;
    return (recipient != nullptr);
}

::android::hardware::Return<void> IBassBoostEffect::ping(){
    return ::android::hardware::Void();
}

::android::hardware::Return<void> IBassBoostEffect::getDebugInfo(getDebugInfo_cb _hidl_cb){
    ::android::hidl::base::V1_0::DebugInfo info = {};
    info.pid = -1;
    info.ptr = 0;
    info.arch = 
    #if defined(__LP64__)
    ::android::hidl::base::V1_0::DebugInfo::Architecture::IS_64BIT
    #else
    ::android::hidl::base::V1_0::DebugInfo::Architecture::IS_32BIT
    #endif
    ;
    _hidl_cb(info);
    return ::android::hardware::Void();
}

::android::hardware::Return<void> IBassBoostEffect::notifySyspropsChanged(){
    ::android::report_sysprop_change();
    return ::android::hardware::Void();
}

::android::hardware::Return<bool> IBassBoostEffect::unlinkToDeath(const ::android::sp<::android::hardware::hidl_death_recipient>& recipient){
    return (recipient != nullptr);
}


::android::hardware::Return<::android::sp<::android::hardware::audio::effect::V5_0::IBassBoostEffect>> IBassBoostEffect::castFrom(const ::android::sp<::android::hardware::audio::effect::V5_0::IBassBoostEffect>& parent, bool /* emitError */) {
    return parent;
}

::android::hardware::Return<::android::sp<::android::hardware::audio::effect::V5_0::IBassBoostEffect>> IBassBoostEffect::castFrom(const ::android::sp<::android::hardware::audio::effect::V5_0::IEffect>& parent, bool emitError) {
    return ::android::hardware::details::castInterface<IBassBoostEffect, ::android::hardware::audio::effect::V5_0::IEffect, BpHwBassBoostEffect>(
            parent, "android.hardware.audio.effect@5.0::IBassBoostEffect", emitError);
}

::android::hardware::Return<::android::sp<::android::hardware::audio::effect::V5_0::IBassBoostEffect>> IBassBoostEffect::castFrom(const ::android::sp<::android::hidl::base::V1_0::IBase>& parent, bool emitError) {
    return ::android::hardware::details::castInterface<IBassBoostEffect, ::android::hidl::base::V1_0::IBase, BpHwBassBoostEffect>(
            parent, "android.hardware.audio.effect@5.0::IBassBoostEffect", emitError);
}

BpHwBassBoostEffect::BpHwBassBoostEffect(const ::android::sp<::android::hardware::IBinder> &_hidl_impl)
        : BpInterface<IBassBoostEffect>(_hidl_impl),
          ::android::hardware::details::HidlInstrumentor("android.hardware.audio.effect@5.0", "IBassBoostEffect") {
}

void BpHwBassBoostEffect::onLastStrongRef(const void* id) {
    {
        std::unique_lock<std::mutex> lock(_hidl_mMutex);
        _hidl_mDeathRecipients.clear();
    }

    BpInterface<IBassBoostEffect>::onLastStrongRef(id);
}
// Methods from ::android::hardware::audio::effect::V5_0::IBassBoostEffect follow.
::android::hardware::Return<void> BpHwBassBoostEffect::_hidl_isStrengthSupported(::android::hardware::IInterface *_hidl_this, ::android::hardware::details::HidlInstrumentor *_hidl_this_instrumentor, isStrengthSupported_cb _hidl_cb) {
    #ifdef __ANDROID_DEBUGGABLE__
    bool mEnableInstrumentation = _hidl_this_instrumentor->isInstrumentationEnabled();
    const auto &mInstrumentationCallbacks = _hidl_this_instrumentor->getInstrumentationCallbacks();
    #else
    (void) _hidl_this_instrumentor;
    #endif // __ANDROID_DEBUGGABLE__
    ::android::ScopedTrace PASTE(___tracer, __LINE__) (ATRACE_TAG_HAL, "HIDL::IBassBoostEffect::isStrengthSupported::client");
    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_ENTRY, "android.hardware.audio.effect", "5.0", "IBassBoostEffect", "isStrengthSupported", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    ::android::hardware::Parcel _hidl_data;
    ::android::hardware::Parcel _hidl_reply;
    ::android::status_t _hidl_err;
    ::android::status_t _hidl_transact_err;
    ::android::hardware::Status _hidl_status;

    _hidl_err = _hidl_data.writeInterfaceToken(BpHwBassBoostEffect::descriptor);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_transact_err = ::android::hardware::IInterface::asBinder(_hidl_this)->transact(29 /* isStrengthSupported */, _hidl_data, &_hidl_reply, 0 /* flags */, [&] (::android::hardware::Parcel& _hidl_reply) {
        ::android::hardware::audio::effect::V5_0::Result _hidl_out_retval;
        bool _hidl_out_strengthSupported;


        _hidl_err = ::android::hardware::readFromParcel(&_hidl_status, _hidl_reply);
        if (_hidl_err != ::android::OK) { return; }

        if (!_hidl_status.isOk()) { return; }

        _hidl_err = _hidl_reply.readInt32((int32_t *)&_hidl_out_retval);
        if (_hidl_err != ::android::OK) { return; }

        _hidl_err = _hidl_reply.readBool(&_hidl_out_strengthSupported);
        if (_hidl_err != ::android::OK) { return; }

        _hidl_cb(_hidl_out_retval, _hidl_out_strengthSupported);

        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&_hidl_out_retval);
            _hidl_args.push_back((void *)&_hidl_out_strengthSupported);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::CLIENT_API_EXIT, "android.hardware.audio.effect", "5.0", "IBassBoostEffect", "isStrengthSupported", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

    });
    if (_hidl_transact_err != ::android::OK) {
        _hidl_err = _hidl_transact_err;
        goto _hidl_error;
    }

    if (!_hidl_status.isOk()) { return _hidl_status; }
    return ::android::hardware::Return<void>();

_hidl_error:
    _hidl_status.setFromStatusT(_hidl_err);
    return ::android::hardware::Return<void>(_hidl_status);
}

::android::hardware::Return<::android::hardware::audio::effect::V5_0::Result> BpHwBassBoostEffect::_hidl_setStrength(::android::hardware::IInterface *_hidl_this, ::android::hardware::details::HidlInstrumentor *_hidl_this_instrumentor, uint16_t strength) {
    #ifdef __ANDROID_DEBUGGABLE__
    bool mEnableInstrumentation = _hidl_this_instrumentor->isInstrumentationEnabled();
    const auto &mInstrumentationCallbacks = _hidl_this_instrumentor->getInstrumentationCallbacks();
    #else
    (void) _hidl_this_instrumentor;
    #endif // __ANDROID_DEBUGGABLE__
    ::android::ScopedTrace PASTE(___tracer, __LINE__) (ATRACE_TAG_HAL, "HIDL::IBassBoostEffect::setStrength::client");
    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        _hidl_args.push_back((void *)&strength);
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_ENTRY, "android.hardware.audio.effect", "5.0", "IBassBoostEffect", "setStrength", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    ::android::hardware::Parcel _hidl_data;
    ::android::hardware::Parcel _hidl_reply;
    ::android::status_t _hidl_err;
    ::android::status_t _hidl_transact_err;
    ::android::hardware::Status _hidl_status;

    ::android::hardware::audio::effect::V5_0::Result _hidl_out_retval;

    _hidl_err = _hidl_data.writeInterfaceToken(BpHwBassBoostEffect::descriptor);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_err = _hidl_data.writeUint16(strength);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_transact_err = ::android::hardware::IInterface::asBinder(_hidl_this)->transact(30 /* setStrength */, _hidl_data, &_hidl_reply, 0 /* flags */);
    if (_hidl_transact_err != ::android::OK) 
    {
        _hidl_err = _hidl_transact_err;
        goto _hidl_error;
    }

    _hidl_err = ::android::hardware::readFromParcel(&_hidl_status, _hidl_reply);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    if (!_hidl_status.isOk()) { return _hidl_status; }

    _hidl_err = _hidl_reply.readInt32((int32_t *)&_hidl_out_retval);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        _hidl_args.push_back((void *)&_hidl_out_retval);
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_EXIT, "android.hardware.audio.effect", "5.0", "IBassBoostEffect", "setStrength", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    return ::android::hardware::Return<::android::hardware::audio::effect::V5_0::Result>(_hidl_out_retval);

_hidl_error:
    _hidl_status.setFromStatusT(_hidl_err);
    return ::android::hardware::Return<::android::hardware::audio::effect::V5_0::Result>(_hidl_status);
}

::android::hardware::Return<void> BpHwBassBoostEffect::_hidl_getStrength(::android::hardware::IInterface *_hidl_this, ::android::hardware::details::HidlInstrumentor *_hidl_this_instrumentor, getStrength_cb _hidl_cb) {
    #ifdef __ANDROID_DEBUGGABLE__
    bool mEnableInstrumentation = _hidl_this_instrumentor->isInstrumentationEnabled();
    const auto &mInstrumentationCallbacks = _hidl_this_instrumentor->getInstrumentationCallbacks();
    #else
    (void) _hidl_this_instrumentor;
    #endif // __ANDROID_DEBUGGABLE__
    ::android::ScopedTrace PASTE(___tracer, __LINE__) (ATRACE_TAG_HAL, "HIDL::IBassBoostEffect::getStrength::client");
    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_ENTRY, "android.hardware.audio.effect", "5.0", "IBassBoostEffect", "getStrength", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    ::android::hardware::Parcel _hidl_data;
    ::android::hardware::Parcel _hidl_reply;
    ::android::status_t _hidl_err;
    ::android::status_t _hidl_transact_err;
    ::android::hardware::Status _hidl_status;

    _hidl_err = _hidl_data.writeInterfaceToken(BpHwBassBoostEffect::descriptor);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_transact_err = ::android::hardware::IInterface::asBinder(_hidl_this)->transact(31 /* getStrength */, _hidl_data, &_hidl_reply, 0 /* flags */, [&] (::android::hardware::Parcel& _hidl_reply) {
        ::android::hardware::audio::effect::V5_0::Result _hidl_out_retval;
        uint16_t _hidl_out_strength;


        _hidl_err = ::android::hardware::readFromParcel(&_hidl_status, _hidl_reply);
        if (_hidl_err != ::android::OK) { return; }

        if (!_hidl_status.isOk()) { return; }

        _hidl_err = _hidl_reply.readInt32((int32_t *)&_hidl_out_retval);
        if (_hidl_err != ::android::OK) { return; }

        _hidl_err = _hidl_reply.readUint16(&_hidl_out_strength);
        if (_hidl_err != ::android::OK) { return; }

        _hidl_cb(_hidl_out_retval, _hidl_out_strength);

        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&_hidl_out_retval);
            _hidl_args.push_back((void *)&_hidl_out_strength);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::CLIENT_API_EXIT, "android.hardware.audio.effect", "5.0", "IBassBoostEffect", "getStrength", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

    });
    if (_hidl_transact_err != ::android::OK) {
        _hidl_err = _hidl_transact_err;
        goto _hidl_error;
    }

    if (!_hidl_status.isOk()) { return _hidl_status; }
    return ::android::hardware::Return<void>();

_hidl_error:
    _hidl_status.setFromStatusT(_hidl_err);
    return ::android::hardware::Return<void>(_hidl_status);
}


// Methods from ::android::hardware::audio::effect::V5_0::IEffect follow.
::android::hardware::Return<::android::hardware::audio::effect::V5_0::Result> BpHwBassBoostEffect::init(){
    ::android::hardware::Return<::android::hardware::audio::effect::V5_0::Result>  _hidl_out = ::android::hardware::audio::effect::V5_0::BpHwEffect::_hidl_init(this, this);

    return _hidl_out;
}

::android::hardware::Return<::android::hardware::audio::effect::V5_0::Result> BpHwBassBoostEffect::setConfig(const ::android::hardware::audio::effect::V5_0::EffectConfig& config, const ::android::sp<::android::hardware::audio::effect::V5_0::IEffectBufferProviderCallback>& inputBufferProvider, const ::android::sp<::android::hardware::audio::effect::V5_0::IEffectBufferProviderCallback>& outputBufferProvider){
    ::android::hardware::Return<::android::hardware::audio::effect::V5_0::Result>  _hidl_out = ::android::hardware::audio::effect::V5_0::BpHwEffect::_hidl_setConfig(this, this, config, inputBufferProvider, outputBufferProvider);

    return _hidl_out;
}

::android::hardware::Return<::android::hardware::audio::effect::V5_0::Result> BpHwBassBoostEffect::reset(){
    ::android::hardware::Return<::android::hardware::audio::effect::V5_0::Result>  _hidl_out = ::android::hardware::audio::effect::V5_0::BpHwEffect::_hidl_reset(this, this);

    return _hidl_out;
}

::android::hardware::Return<::android::hardware::audio::effect::V5_0::Result> BpHwBassBoostEffect::enable(){
    ::android::hardware::Return<::android::hardware::audio::effect::V5_0::Result>  _hidl_out = ::android::hardware::audio::effect::V5_0::BpHwEffect::_hidl_enable(this, this);

    return _hidl_out;
}

::android::hardware::Return<::android::hardware::audio::effect::V5_0::Result> BpHwBassBoostEffect::disable(){
    ::android::hardware::Return<::android::hardware::audio::effect::V5_0::Result>  _hidl_out = ::android::hardware::audio::effect::V5_0::BpHwEffect::_hidl_disable(this, this);

    return _hidl_out;
}

::android::hardware::Return<::android::hardware::audio::effect::V5_0::Result> BpHwBassBoostEffect::setDevice(::android::hardware::hidl_bitfield<::android::hardware::audio::common::V5_0::AudioDevice> device){
    ::android::hardware::Return<::android::hardware::audio::effect::V5_0::Result>  _hidl_out = ::android::hardware::audio::effect::V5_0::BpHwEffect::_hidl_setDevice(this, this, device);

    return _hidl_out;
}

::android::hardware::Return<void> BpHwBassBoostEffect::setAndGetVolume(const ::android::hardware::hidl_vec<uint32_t>& volumes, setAndGetVolume_cb _hidl_cb){
    ::android::hardware::Return<void>  _hidl_out = ::android::hardware::audio::effect::V5_0::BpHwEffect::_hidl_setAndGetVolume(this, this, volumes, _hidl_cb);

    return _hidl_out;
}

::android::hardware::Return<::android::hardware::audio::effect::V5_0::Result> BpHwBassBoostEffect::volumeChangeNotification(const ::android::hardware::hidl_vec<uint32_t>& volumes){
    ::android::hardware::Return<::android::hardware::audio::effect::V5_0::Result>  _hidl_out = ::android::hardware::audio::effect::V5_0::BpHwEffect::_hidl_volumeChangeNotification(this, this, volumes);

    return _hidl_out;
}

::android::hardware::Return<::android::hardware::audio::effect::V5_0::Result> BpHwBassBoostEffect::setAudioMode(::android::hardware::audio::common::V5_0::AudioMode mode){
    ::android::hardware::Return<::android::hardware::audio::effect::V5_0::Result>  _hidl_out = ::android::hardware::audio::effect::V5_0::BpHwEffect::_hidl_setAudioMode(this, this, mode);

    return _hidl_out;
}

::android::hardware::Return<::android::hardware::audio::effect::V5_0::Result> BpHwBassBoostEffect::setConfigReverse(const ::android::hardware::audio::effect::V5_0::EffectConfig& config, const ::android::sp<::android::hardware::audio::effect::V5_0::IEffectBufferProviderCallback>& inputBufferProvider, const ::android::sp<::android::hardware::audio::effect::V5_0::IEffectBufferProviderCallback>& outputBufferProvider){
    ::android::hardware::Return<::android::hardware::audio::effect::V5_0::Result>  _hidl_out = ::android::hardware::audio::effect::V5_0::BpHwEffect::_hidl_setConfigReverse(this, this, config, inputBufferProvider, outputBufferProvider);

    return _hidl_out;
}

::android::hardware::Return<::android::hardware::audio::effect::V5_0::Result> BpHwBassBoostEffect::setInputDevice(::android::hardware::hidl_bitfield<::android::hardware::audio::common::V5_0::AudioDevice> device){
    ::android::hardware::Return<::android::hardware::audio::effect::V5_0::Result>  _hidl_out = ::android::hardware::audio::effect::V5_0::BpHwEffect::_hidl_setInputDevice(this, this, device);

    return _hidl_out;
}

::android::hardware::Return<void> BpHwBassBoostEffect::getConfig(getConfig_cb _hidl_cb){
    ::android::hardware::Return<void>  _hidl_out = ::android::hardware::audio::effect::V5_0::BpHwEffect::_hidl_getConfig(this, this, _hidl_cb);

    return _hidl_out;
}

::android::hardware::Return<void> BpHwBassBoostEffect::getConfigReverse(getConfigReverse_cb _hidl_cb){
    ::android::hardware::Return<void>  _hidl_out = ::android::hardware::audio::effect::V5_0::BpHwEffect::_hidl_getConfigReverse(this, this, _hidl_cb);

    return _hidl_out;
}

::android::hardware::Return<void> BpHwBassBoostEffect::getSupportedAuxChannelsConfigs(uint32_t maxConfigs, getSupportedAuxChannelsConfigs_cb _hidl_cb){
    ::android::hardware::Return<void>  _hidl_out = ::android::hardware::audio::effect::V5_0::BpHwEffect::_hidl_getSupportedAuxChannelsConfigs(this, this, maxConfigs, _hidl_cb);

    return _hidl_out;
}

::android::hardware::Return<void> BpHwBassBoostEffect::getAuxChannelsConfig(getAuxChannelsConfig_cb _hidl_cb){
    ::android::hardware::Return<void>  _hidl_out = ::android::hardware::audio::effect::V5_0::BpHwEffect::_hidl_getAuxChannelsConfig(this, this, _hidl_cb);

    return _hidl_out;
}

::android::hardware::Return<::android::hardware::audio::effect::V5_0::Result> BpHwBassBoostEffect::setAuxChannelsConfig(const ::android::hardware::audio::effect::V5_0::EffectAuxChannelsConfig& config){
    ::android::hardware::Return<::android::hardware::audio::effect::V5_0::Result>  _hidl_out = ::android::hardware::audio::effect::V5_0::BpHwEffect::_hidl_setAuxChannelsConfig(this, this, config);

    return _hidl_out;
}

::android::hardware::Return<::android::hardware::audio::effect::V5_0::Result> BpHwBassBoostEffect::setAudioSource(::android::hardware::audio::common::V5_0::AudioSource source){
    ::android::hardware::Return<::android::hardware::audio::effect::V5_0::Result>  _hidl_out = ::android::hardware::audio::effect::V5_0::BpHwEffect::_hidl_setAudioSource(this, this, source);

    return _hidl_out;
}

::android::hardware::Return<::android::hardware::audio::effect::V5_0::Result> BpHwBassBoostEffect::offload(const ::android::hardware::audio::effect::V5_0::EffectOffloadParameter& param){
    ::android::hardware::Return<::android::hardware::audio::effect::V5_0::Result>  _hidl_out = ::android::hardware::audio::effect::V5_0::BpHwEffect::_hidl_offload(this, this, param);

    return _hidl_out;
}

::android::hardware::Return<void> BpHwBassBoostEffect::getDescriptor(getDescriptor_cb _hidl_cb){
    ::android::hardware::Return<void>  _hidl_out = ::android::hardware::audio::effect::V5_0::BpHwEffect::_hidl_getDescriptor(this, this, _hidl_cb);

    return _hidl_out;
}

::android::hardware::Return<void> BpHwBassBoostEffect::prepareForProcessing(prepareForProcessing_cb _hidl_cb){
    ::android::hardware::Return<void>  _hidl_out = ::android::hardware::audio::effect::V5_0::BpHwEffect::_hidl_prepareForProcessing(this, this, _hidl_cb);

    return _hidl_out;
}

::android::hardware::Return<::android::hardware::audio::effect::V5_0::Result> BpHwBassBoostEffect::setProcessBuffers(const ::android::hardware::audio::effect::V5_0::AudioBuffer& inBuffer, const ::android::hardware::audio::effect::V5_0::AudioBuffer& outBuffer){
    ::android::hardware::Return<::android::hardware::audio::effect::V5_0::Result>  _hidl_out = ::android::hardware::audio::effect::V5_0::BpHwEffect::_hidl_setProcessBuffers(this, this, inBuffer, outBuffer);

    return _hidl_out;
}

::android::hardware::Return<void> BpHwBassBoostEffect::command(uint32_t commandId, const ::android::hardware::hidl_vec<uint8_t>& data, uint32_t resultMaxSize, command_cb _hidl_cb){
    ::android::hardware::Return<void>  _hidl_out = ::android::hardware::audio::effect::V5_0::BpHwEffect::_hidl_command(this, this, commandId, data, resultMaxSize, _hidl_cb);

    return _hidl_out;
}

::android::hardware::Return<::android::hardware::audio::effect::V5_0::Result> BpHwBassBoostEffect::setParameter(const ::android::hardware::hidl_vec<uint8_t>& parameter, const ::android::hardware::hidl_vec<uint8_t>& value){
    ::android::hardware::Return<::android::hardware::audio::effect::V5_0::Result>  _hidl_out = ::android::hardware::audio::effect::V5_0::BpHwEffect::_hidl_setParameter(this, this, parameter, value);

    return _hidl_out;
}

::android::hardware::Return<void> BpHwBassBoostEffect::getParameter(const ::android::hardware::hidl_vec<uint8_t>& parameter, uint32_t valueMaxSize, getParameter_cb _hidl_cb){
    ::android::hardware::Return<void>  _hidl_out = ::android::hardware::audio::effect::V5_0::BpHwEffect::_hidl_getParameter(this, this, parameter, valueMaxSize, _hidl_cb);

    return _hidl_out;
}

::android::hardware::Return<void> BpHwBassBoostEffect::getSupportedConfigsForFeature(uint32_t featureId, uint32_t maxConfigs, uint32_t configSize, getSupportedConfigsForFeature_cb _hidl_cb){
    ::android::hardware::Return<void>  _hidl_out = ::android::hardware::audio::effect::V5_0::BpHwEffect::_hidl_getSupportedConfigsForFeature(this, this, featureId, maxConfigs, configSize, _hidl_cb);

    return _hidl_out;
}

::android::hardware::Return<void> BpHwBassBoostEffect::getCurrentConfigForFeature(uint32_t featureId, uint32_t configSize, getCurrentConfigForFeature_cb _hidl_cb){
    ::android::hardware::Return<void>  _hidl_out = ::android::hardware::audio::effect::V5_0::BpHwEffect::_hidl_getCurrentConfigForFeature(this, this, featureId, configSize, _hidl_cb);

    return _hidl_out;
}

::android::hardware::Return<::android::hardware::audio::effect::V5_0::Result> BpHwBassBoostEffect::setCurrentConfigForFeature(uint32_t featureId, const ::android::hardware::hidl_vec<uint8_t>& configData){
    ::android::hardware::Return<::android::hardware::audio::effect::V5_0::Result>  _hidl_out = ::android::hardware::audio::effect::V5_0::BpHwEffect::_hidl_setCurrentConfigForFeature(this, this, featureId, configData);

    return _hidl_out;
}

::android::hardware::Return<::android::hardware::audio::effect::V5_0::Result> BpHwBassBoostEffect::close(){
    ::android::hardware::Return<::android::hardware::audio::effect::V5_0::Result>  _hidl_out = ::android::hardware::audio::effect::V5_0::BpHwEffect::_hidl_close(this, this);

    return _hidl_out;
}


// Methods from ::android::hardware::audio::effect::V5_0::IBassBoostEffect follow.
::android::hardware::Return<void> BpHwBassBoostEffect::isStrengthSupported(isStrengthSupported_cb _hidl_cb){
    ::android::hardware::Return<void>  _hidl_out = ::android::hardware::audio::effect::V5_0::BpHwBassBoostEffect::_hidl_isStrengthSupported(this, this, _hidl_cb);

    return _hidl_out;
}

::android::hardware::Return<::android::hardware::audio::effect::V5_0::Result> BpHwBassBoostEffect::setStrength(uint16_t strength){
    ::android::hardware::Return<::android::hardware::audio::effect::V5_0::Result>  _hidl_out = ::android::hardware::audio::effect::V5_0::BpHwBassBoostEffect::_hidl_setStrength(this, this, strength);

    return _hidl_out;
}

::android::hardware::Return<void> BpHwBassBoostEffect::getStrength(getStrength_cb _hidl_cb){
    ::android::hardware::Return<void>  _hidl_out = ::android::hardware::audio::effect::V5_0::BpHwBassBoostEffect::_hidl_getStrength(this, this, _hidl_cb);

    return _hidl_out;
}


// Methods from ::android::hidl::base::V1_0::IBase follow.
::android::hardware::Return<void> BpHwBassBoostEffect::interfaceChain(interfaceChain_cb _hidl_cb){
    ::android::hardware::Return<void>  _hidl_out = ::android::hidl::base::V1_0::BpHwBase::_hidl_interfaceChain(this, this, _hidl_cb);

    return _hidl_out;
}

::android::hardware::Return<void> BpHwBassBoostEffect::debug(const ::android::hardware::hidl_handle& fd, const ::android::hardware::hidl_vec<::android::hardware::hidl_string>& options){
    ::android::hardware::Return<void>  _hidl_out = ::android::hidl::base::V1_0::BpHwBase::_hidl_debug(this, this, fd, options);

    return _hidl_out;
}

::android::hardware::Return<void> BpHwBassBoostEffect::interfaceDescriptor(interfaceDescriptor_cb _hidl_cb){
    ::android::hardware::Return<void>  _hidl_out = ::android::hidl::base::V1_0::BpHwBase::_hidl_interfaceDescriptor(this, this, _hidl_cb);

    return _hidl_out;
}

::android::hardware::Return<void> BpHwBassBoostEffect::getHashChain(getHashChain_cb _hidl_cb){
    ::android::hardware::Return<void>  _hidl_out = ::android::hidl::base::V1_0::BpHwBase::_hidl_getHashChain(this, this, _hidl_cb);

    return _hidl_out;
}

::android::hardware::Return<void> BpHwBassBoostEffect::setHALInstrumentation(){
    ::android::hardware::Return<void>  _hidl_out = ::android::hidl::base::V1_0::BpHwBase::_hidl_setHALInstrumentation(this, this);

    return _hidl_out;
}

::android::hardware::Return<bool> BpHwBassBoostEffect::linkToDeath(const ::android::sp<::android::hardware::hidl_death_recipient>& recipient, uint64_t cookie){
    ::android::hardware::ProcessState::self()->startThreadPool();
    ::android::hardware::hidl_binder_death_recipient *binder_recipient = new ::android::hardware::hidl_binder_death_recipient(recipient, cookie, this);
    std::unique_lock<std::mutex> lock(_hidl_mMutex);
    _hidl_mDeathRecipients.push_back(binder_recipient);
    return (remote()->linkToDeath(binder_recipient) == ::android::OK);
}

::android::hardware::Return<void> BpHwBassBoostEffect::ping(){
    ::android::hardware::Return<void>  _hidl_out = ::android::hidl::base::V1_0::BpHwBase::_hidl_ping(this, this);

    return _hidl_out;
}

::android::hardware::Return<void> BpHwBassBoostEffect::getDebugInfo(getDebugInfo_cb _hidl_cb){
    ::android::hardware::Return<void>  _hidl_out = ::android::hidl::base::V1_0::BpHwBase::_hidl_getDebugInfo(this, this, _hidl_cb);

    return _hidl_out;
}

::android::hardware::Return<void> BpHwBassBoostEffect::notifySyspropsChanged(){
    ::android::hardware::Return<void>  _hidl_out = ::android::hidl::base::V1_0::BpHwBase::_hidl_notifySyspropsChanged(this, this);

    return _hidl_out;
}

::android::hardware::Return<bool> BpHwBassBoostEffect::unlinkToDeath(const ::android::sp<::android::hardware::hidl_death_recipient>& recipient){
    std::unique_lock<std::mutex> lock(_hidl_mMutex);
    for (auto it = _hidl_mDeathRecipients.rbegin();it != _hidl_mDeathRecipients.rend();++it) {
        if ((*it)->getRecipient() == recipient) {
            ::android::status_t status = remote()->unlinkToDeath(*it);
            _hidl_mDeathRecipients.erase(it.base()-1);
            return status == ::android::OK;
        }
    }
    return false;
}


BnHwBassBoostEffect::BnHwBassBoostEffect(const ::android::sp<IBassBoostEffect> &_hidl_impl)
        : ::android::hidl::base::V1_0::BnHwBase(_hidl_impl, "android.hardware.audio.effect@5.0", "IBassBoostEffect") { 
            _hidl_mImpl = _hidl_impl;
            auto prio = ::android::hardware::getMinSchedulerPolicy(_hidl_impl);
            mSchedPolicy = prio.sched_policy;
            mSchedPriority = prio.prio;
            setRequestingSid(::android::hardware::getRequestingSid(_hidl_impl));
}

BnHwBassBoostEffect::~BnHwBassBoostEffect() {
    ::android::hardware::details::gBnMap->eraseIfEqual(_hidl_mImpl.get(), this);
}

// Methods from ::android::hardware::audio::effect::V5_0::IBassBoostEffect follow.
::android::status_t BnHwBassBoostEffect::_hidl_isStrengthSupported(
        ::android::hidl::base::V1_0::BnHwBase* _hidl_this,
        const ::android::hardware::Parcel &_hidl_data,
        ::android::hardware::Parcel *_hidl_reply,
        TransactCallback _hidl_cb) {
    #ifdef __ANDROID_DEBUGGABLE__
    bool mEnableInstrumentation = _hidl_this->isInstrumentationEnabled();
    const auto &mInstrumentationCallbacks = _hidl_this->getInstrumentationCallbacks();
    #endif // __ANDROID_DEBUGGABLE__

    ::android::status_t _hidl_err = ::android::OK;
    if (!_hidl_data.enforceInterface(BnHwBassBoostEffect::Pure::descriptor)) {
        _hidl_err = ::android::BAD_TYPE;
        return _hidl_err;
    }

    atrace_begin(ATRACE_TAG_HAL, "HIDL::IBassBoostEffect::isStrengthSupported::server");
    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::SERVER_API_ENTRY, "android.hardware.audio.effect", "5.0", "IBassBoostEffect", "isStrengthSupported", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    bool _hidl_callbackCalled = false;

    ::android::hardware::Return<void> _hidl_ret = static_cast<IBassBoostEffect*>(_hidl_this->getImpl().get())->isStrengthSupported([&](const auto &_hidl_out_retval, const auto &_hidl_out_strengthSupported) {
        if (_hidl_callbackCalled) {
            LOG_ALWAYS_FATAL("isStrengthSupported: _hidl_cb called a second time, but must be called once.");
        }
        _hidl_callbackCalled = true;

        ::android::hardware::writeToParcel(::android::hardware::Status::ok(), _hidl_reply);

        _hidl_err = _hidl_reply->writeInt32((int32_t)_hidl_out_retval);
        if (_hidl_err != ::android::OK) { goto _hidl_error; }

        _hidl_err = _hidl_reply->writeBool(_hidl_out_strengthSupported);
        if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_error:
        atrace_end(ATRACE_TAG_HAL);
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&_hidl_out_retval);
            _hidl_args.push_back((void *)&_hidl_out_strengthSupported);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::SERVER_API_EXIT, "android.hardware.audio.effect", "5.0", "IBassBoostEffect", "isStrengthSupported", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        if (_hidl_err != ::android::OK) { return; }
        _hidl_cb(*_hidl_reply);
    });

    _hidl_ret.assertOk();
    if (!_hidl_callbackCalled) {
        LOG_ALWAYS_FATAL("isStrengthSupported: _hidl_cb not called, but must be called once.");
    }

    return _hidl_err;
}

::android::status_t BnHwBassBoostEffect::_hidl_setStrength(
        ::android::hidl::base::V1_0::BnHwBase* _hidl_this,
        const ::android::hardware::Parcel &_hidl_data,
        ::android::hardware::Parcel *_hidl_reply,
        TransactCallback _hidl_cb) {
    #ifdef __ANDROID_DEBUGGABLE__
    bool mEnableInstrumentation = _hidl_this->isInstrumentationEnabled();
    const auto &mInstrumentationCallbacks = _hidl_this->getInstrumentationCallbacks();
    #endif // __ANDROID_DEBUGGABLE__

    ::android::status_t _hidl_err = ::android::OK;
    if (!_hidl_data.enforceInterface(BnHwBassBoostEffect::Pure::descriptor)) {
        _hidl_err = ::android::BAD_TYPE;
        return _hidl_err;
    }

    uint16_t strength;

    _hidl_err = _hidl_data.readUint16(&strength);
    if (_hidl_err != ::android::OK) { return _hidl_err; }

    atrace_begin(ATRACE_TAG_HAL, "HIDL::IBassBoostEffect::setStrength::server");
    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        _hidl_args.push_back((void *)&strength);
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::SERVER_API_ENTRY, "android.hardware.audio.effect", "5.0", "IBassBoostEffect", "setStrength", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    ::android::hardware::audio::effect::V5_0::Result _hidl_out_retval = static_cast<IBassBoostEffect*>(_hidl_this->getImpl().get())->setStrength(strength);

    ::android::hardware::writeToParcel(::android::hardware::Status::ok(), _hidl_reply);

    _hidl_err = _hidl_reply->writeInt32((int32_t)_hidl_out_retval);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

_hidl_error:
    atrace_end(ATRACE_TAG_HAL);
    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        _hidl_args.push_back((void *)&_hidl_out_retval);
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::SERVER_API_EXIT, "android.hardware.audio.effect", "5.0", "IBassBoostEffect", "setStrength", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    if (_hidl_err != ::android::OK) { return _hidl_err; }
    _hidl_cb(*_hidl_reply);
    return _hidl_err;
}

::android::status_t BnHwBassBoostEffect::_hidl_getStrength(
        ::android::hidl::base::V1_0::BnHwBase* _hidl_this,
        const ::android::hardware::Parcel &_hidl_data,
        ::android::hardware::Parcel *_hidl_reply,
        TransactCallback _hidl_cb) {
    #ifdef __ANDROID_DEBUGGABLE__
    bool mEnableInstrumentation = _hidl_this->isInstrumentationEnabled();
    const auto &mInstrumentationCallbacks = _hidl_this->getInstrumentationCallbacks();
    #endif // __ANDROID_DEBUGGABLE__

    ::android::status_t _hidl_err = ::android::OK;
    if (!_hidl_data.enforceInterface(BnHwBassBoostEffect::Pure::descriptor)) {
        _hidl_err = ::android::BAD_TYPE;
        return _hidl_err;
    }

    atrace_begin(ATRACE_TAG_HAL, "HIDL::IBassBoostEffect::getStrength::server");
    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::SERVER_API_ENTRY, "android.hardware.audio.effect", "5.0", "IBassBoostEffect", "getStrength", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    bool _hidl_callbackCalled = false;

    ::android::hardware::Return<void> _hidl_ret = static_cast<IBassBoostEffect*>(_hidl_this->getImpl().get())->getStrength([&](const auto &_hidl_out_retval, const auto &_hidl_out_strength) {
        if (_hidl_callbackCalled) {
            LOG_ALWAYS_FATAL("getStrength: _hidl_cb called a second time, but must be called once.");
        }
        _hidl_callbackCalled = true;

        ::android::hardware::writeToParcel(::android::hardware::Status::ok(), _hidl_reply);

        _hidl_err = _hidl_reply->writeInt32((int32_t)_hidl_out_retval);
        if (_hidl_err != ::android::OK) { goto _hidl_error; }

        _hidl_err = _hidl_reply->writeUint16(_hidl_out_strength);
        if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_error:
        atrace_end(ATRACE_TAG_HAL);
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&_hidl_out_retval);
            _hidl_args.push_back((void *)&_hidl_out_strength);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::SERVER_API_EXIT, "android.hardware.audio.effect", "5.0", "IBassBoostEffect", "getStrength", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        if (_hidl_err != ::android::OK) { return; }
        _hidl_cb(*_hidl_reply);
    });

    _hidl_ret.assertOk();
    if (!_hidl_callbackCalled) {
        LOG_ALWAYS_FATAL("getStrength: _hidl_cb not called, but must be called once.");
    }

    return _hidl_err;
}


// Methods from ::android::hardware::audio::effect::V5_0::IEffect follow.

// Methods from ::android::hardware::audio::effect::V5_0::IBassBoostEffect follow.

// Methods from ::android::hidl::base::V1_0::IBase follow.
::android::hardware::Return<void> BnHwBassBoostEffect::ping() {
    return ::android::hardware::Void();
}
::android::hardware::Return<void> BnHwBassBoostEffect::getDebugInfo(getDebugInfo_cb _hidl_cb) {
    ::android::hidl::base::V1_0::DebugInfo info = {};
    info.pid = ::android::hardware::details::getPidIfSharable();
    info.ptr = ::android::hardware::details::debuggable()? reinterpret_cast<uint64_t>(this) : 0;
    info.arch = 
    #if defined(__LP64__)
    ::android::hidl::base::V1_0::DebugInfo::Architecture::IS_64BIT
    #else
    ::android::hidl::base::V1_0::DebugInfo::Architecture::IS_32BIT
    #endif
    ;
    _hidl_cb(info);
    return ::android::hardware::Void();
}

::android::status_t BnHwBassBoostEffect::onTransact(
        uint32_t _hidl_code,
        const ::android::hardware::Parcel &_hidl_data,
        ::android::hardware::Parcel *_hidl_reply,
        uint32_t _hidl_flags,
        TransactCallback _hidl_cb) {
    ::android::status_t _hidl_err = ::android::OK;

    switch (_hidl_code) {
        case 1 /* init */:
        {
            _hidl_err = ::android::hardware::audio::effect::V5_0::BnHwEffect::_hidl_init(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 2 /* setConfig */:
        {
            _hidl_err = ::android::hardware::audio::effect::V5_0::BnHwEffect::_hidl_setConfig(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 3 /* reset */:
        {
            _hidl_err = ::android::hardware::audio::effect::V5_0::BnHwEffect::_hidl_reset(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 4 /* enable */:
        {
            _hidl_err = ::android::hardware::audio::effect::V5_0::BnHwEffect::_hidl_enable(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 5 /* disable */:
        {
            _hidl_err = ::android::hardware::audio::effect::V5_0::BnHwEffect::_hidl_disable(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 6 /* setDevice */:
        {
            _hidl_err = ::android::hardware::audio::effect::V5_0::BnHwEffect::_hidl_setDevice(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 7 /* setAndGetVolume */:
        {
            _hidl_err = ::android::hardware::audio::effect::V5_0::BnHwEffect::_hidl_setAndGetVolume(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 8 /* volumeChangeNotification */:
        {
            _hidl_err = ::android::hardware::audio::effect::V5_0::BnHwEffect::_hidl_volumeChangeNotification(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 9 /* setAudioMode */:
        {
            _hidl_err = ::android::hardware::audio::effect::V5_0::BnHwEffect::_hidl_setAudioMode(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 10 /* setConfigReverse */:
        {
            _hidl_err = ::android::hardware::audio::effect::V5_0::BnHwEffect::_hidl_setConfigReverse(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 11 /* setInputDevice */:
        {
            _hidl_err = ::android::hardware::audio::effect::V5_0::BnHwEffect::_hidl_setInputDevice(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 12 /* getConfig */:
        {
            _hidl_err = ::android::hardware::audio::effect::V5_0::BnHwEffect::_hidl_getConfig(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 13 /* getConfigReverse */:
        {
            _hidl_err = ::android::hardware::audio::effect::V5_0::BnHwEffect::_hidl_getConfigReverse(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 14 /* getSupportedAuxChannelsConfigs */:
        {
            _hidl_err = ::android::hardware::audio::effect::V5_0::BnHwEffect::_hidl_getSupportedAuxChannelsConfigs(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 15 /* getAuxChannelsConfig */:
        {
            _hidl_err = ::android::hardware::audio::effect::V5_0::BnHwEffect::_hidl_getAuxChannelsConfig(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 16 /* setAuxChannelsConfig */:
        {
            _hidl_err = ::android::hardware::audio::effect::V5_0::BnHwEffect::_hidl_setAuxChannelsConfig(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 17 /* setAudioSource */:
        {
            _hidl_err = ::android::hardware::audio::effect::V5_0::BnHwEffect::_hidl_setAudioSource(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 18 /* offload */:
        {
            _hidl_err = ::android::hardware::audio::effect::V5_0::BnHwEffect::_hidl_offload(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 19 /* getDescriptor */:
        {
            _hidl_err = ::android::hardware::audio::effect::V5_0::BnHwEffect::_hidl_getDescriptor(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 20 /* prepareForProcessing */:
        {
            _hidl_err = ::android::hardware::audio::effect::V5_0::BnHwEffect::_hidl_prepareForProcessing(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 21 /* setProcessBuffers */:
        {
            _hidl_err = ::android::hardware::audio::effect::V5_0::BnHwEffect::_hidl_setProcessBuffers(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 22 /* command */:
        {
            _hidl_err = ::android::hardware::audio::effect::V5_0::BnHwEffect::_hidl_command(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 23 /* setParameter */:
        {
            _hidl_err = ::android::hardware::audio::effect::V5_0::BnHwEffect::_hidl_setParameter(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 24 /* getParameter */:
        {
            _hidl_err = ::android::hardware::audio::effect::V5_0::BnHwEffect::_hidl_getParameter(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 25 /* getSupportedConfigsForFeature */:
        {
            _hidl_err = ::android::hardware::audio::effect::V5_0::BnHwEffect::_hidl_getSupportedConfigsForFeature(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 26 /* getCurrentConfigForFeature */:
        {
            _hidl_err = ::android::hardware::audio::effect::V5_0::BnHwEffect::_hidl_getCurrentConfigForFeature(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 27 /* setCurrentConfigForFeature */:
        {
            _hidl_err = ::android::hardware::audio::effect::V5_0::BnHwEffect::_hidl_setCurrentConfigForFeature(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 28 /* close */:
        {
            _hidl_err = ::android::hardware::audio::effect::V5_0::BnHwEffect::_hidl_close(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 29 /* isStrengthSupported */:
        {
            _hidl_err = ::android::hardware::audio::effect::V5_0::BnHwBassBoostEffect::_hidl_isStrengthSupported(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 30 /* setStrength */:
        {
            _hidl_err = ::android::hardware::audio::effect::V5_0::BnHwBassBoostEffect::_hidl_setStrength(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 31 /* getStrength */:
        {
            _hidl_err = ::android::hardware::audio::effect::V5_0::BnHwBassBoostEffect::_hidl_getStrength(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        default:
        {
            return ::android::hidl::base::V1_0::BnHwBase::onTransact(
                    _hidl_code, _hidl_data, _hidl_reply, _hidl_flags, _hidl_cb);
        }
    }

    if (_hidl_err == ::android::UNEXPECTED_NULL) {
        _hidl_err = ::android::hardware::writeToParcel(
                ::android::hardware::Status::fromExceptionCode(::android::hardware::Status::EX_NULL_POINTER),
                _hidl_reply);
    }return _hidl_err;
}

BsBassBoostEffect::BsBassBoostEffect(const ::android::sp<::android::hardware::audio::effect::V5_0::IBassBoostEffect> impl) : ::android::hardware::details::HidlInstrumentor("android.hardware.audio.effect@5.0", "IBassBoostEffect"), mImpl(impl) {
    mOnewayQueue.start(3000 /* similar limit to binderized */);
}

::android::hardware::Return<void> BsBassBoostEffect::addOnewayTask(std::function<void(void)> fun) {
    if (!mOnewayQueue.push(fun)) {
        return ::android::hardware::Status::fromExceptionCode(
                ::android::hardware::Status::EX_TRANSACTION_FAILED,
                "Passthrough oneway function queue exceeds maximum size.");
    }
    return ::android::hardware::Status();
}

::android::sp<IBassBoostEffect> IBassBoostEffect::tryGetService(const std::string &serviceName, const bool getStub) {
    return ::android::hardware::details::getServiceInternal<BpHwBassBoostEffect>(serviceName, false, getStub);
}

::android::sp<IBassBoostEffect> IBassBoostEffect::getService(const std::string &serviceName, const bool getStub) {
    return ::android::hardware::details::getServiceInternal<BpHwBassBoostEffect>(serviceName, true, getStub);
}

::android::status_t IBassBoostEffect::registerAsService(const std::string &serviceName) {
    return ::android::hardware::details::registerAsServiceInternal(this, serviceName);
}

bool IBassBoostEffect::registerForNotifications(
        const std::string &serviceName,
        const ::android::sp<::android::hidl::manager::V1_0::IServiceNotification> &notification) {
    const ::android::sp<::android::hidl::manager::V1_0::IServiceManager> sm
            = ::android::hardware::defaultServiceManager();
    if (sm == nullptr) {
        return false;
    }
    ::android::hardware::Return<bool> success =
            sm->registerForNotifications("android.hardware.audio.effect@5.0::IBassBoostEffect",
                    serviceName, notification);
    return success.isOk() && success;
}

static_assert(sizeof(::android::hardware::MQDescriptor<char, ::android::hardware::kSynchronizedReadWrite>) == 32, "wrong size");
static_assert(sizeof(::android::hardware::hidl_handle) == 16, "wrong size");
static_assert(sizeof(::android::hardware::hidl_memory) == 40, "wrong size");
static_assert(sizeof(::android::hardware::hidl_string) == 16, "wrong size");
static_assert(sizeof(::android::hardware::hidl_vec<char>) == 16, "wrong size");

}  // namespace V5_0
}  // namespace effect
}  // namespace audio
}  // namespace hardware
}  // namespace android
