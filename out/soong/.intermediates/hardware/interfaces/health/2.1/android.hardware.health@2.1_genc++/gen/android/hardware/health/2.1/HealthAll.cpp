#define LOG_TAG "android.hardware.health@2.1::Health"

#include <log/log.h>
#include <cutils/trace.h>
#include <hidl/HidlTransportSupport.h>

#include <hidl/Static.h>
#include <hwbinder/ProcessState.h>
#include <utils/Trace.h>
#include <android/hidl/manager/1.0/IServiceManager.h>
#include <android/hardware/health/2.1/BpHwHealth.h>
#include <android/hardware/health/2.1/BnHwHealth.h>
#include <android/hardware/health/2.1/BsHealth.h>
#include <android/hardware/health/2.0/BpHwHealth.h>
#include <android/hidl/base/1.0/BpHwBase.h>
#include <hidl/ServiceManagement.h>

namespace android {
namespace hardware {
namespace health {
namespace V2_1 {

const char* IHealth::descriptor("android.hardware.health@2.1::IHealth");

__attribute__((constructor)) static void static_constructor() {
    ::android::hardware::details::getBnConstructorMap().set(IHealth::descriptor,
            [](void *iIntf) -> ::android::sp<::android::hardware::IBinder> {
                return new BnHwHealth(static_cast<IHealth *>(iIntf));
            });
    ::android::hardware::details::getBsConstructorMap().set(IHealth::descriptor,
            [](void *iIntf) -> ::android::sp<::android::hidl::base::V1_0::IBase> {
                return new BsHealth(static_cast<IHealth *>(iIntf));
            });
}

__attribute__((destructor))static void static_destructor() {
    ::android::hardware::details::getBnConstructorMap().erase(IHealth::descriptor);
    ::android::hardware::details::getBsConstructorMap().erase(IHealth::descriptor);
}

// Methods from ::android::hardware::health::V2_0::IHealth follow.
// no default implementation for: ::android::hardware::Return<::android::hardware::health::V2_0::Result> IHealth::registerCallback(const ::android::sp<::android::hardware::health::V2_0::IHealthInfoCallback>& callback)
// no default implementation for: ::android::hardware::Return<::android::hardware::health::V2_0::Result> IHealth::unregisterCallback(const ::android::sp<::android::hardware::health::V2_0::IHealthInfoCallback>& callback)
// no default implementation for: ::android::hardware::Return<::android::hardware::health::V2_0::Result> IHealth::update()
// no default implementation for: ::android::hardware::Return<void> IHealth::getChargeCounter(getChargeCounter_cb _hidl_cb)
// no default implementation for: ::android::hardware::Return<void> IHealth::getCurrentNow(getCurrentNow_cb _hidl_cb)
// no default implementation for: ::android::hardware::Return<void> IHealth::getCurrentAverage(getCurrentAverage_cb _hidl_cb)
// no default implementation for: ::android::hardware::Return<void> IHealth::getCapacity(getCapacity_cb _hidl_cb)
// no default implementation for: ::android::hardware::Return<void> IHealth::getEnergyCounter(getEnergyCounter_cb _hidl_cb)
// no default implementation for: ::android::hardware::Return<void> IHealth::getChargeStatus(getChargeStatus_cb _hidl_cb)
// no default implementation for: ::android::hardware::Return<void> IHealth::getStorageInfo(getStorageInfo_cb _hidl_cb)
// no default implementation for: ::android::hardware::Return<void> IHealth::getDiskStats(getDiskStats_cb _hidl_cb)
// no default implementation for: ::android::hardware::Return<void> IHealth::getHealthInfo(getHealthInfo_cb _hidl_cb)

// Methods from ::android::hardware::health::V2_1::IHealth follow.
// no default implementation for: ::android::hardware::Return<void> IHealth::getHealthConfig(getHealthConfig_cb _hidl_cb)
// no default implementation for: ::android::hardware::Return<void> IHealth::getHealthInfo_2_1(getHealthInfo_2_1_cb _hidl_cb)
// no default implementation for: ::android::hardware::Return<void> IHealth::shouldKeepScreenOn(shouldKeepScreenOn_cb _hidl_cb)

// Methods from ::android::hidl::base::V1_0::IBase follow.
::android::hardware::Return<void> IHealth::interfaceChain(interfaceChain_cb _hidl_cb){
    _hidl_cb({
        ::android::hardware::health::V2_1::IHealth::descriptor,
        ::android::hardware::health::V2_0::IHealth::descriptor,
        ::android::hidl::base::V1_0::IBase::descriptor,
    });
    return ::android::hardware::Void();
}

::android::hardware::Return<void> IHealth::debug(const ::android::hardware::hidl_handle& fd, const ::android::hardware::hidl_vec<::android::hardware::hidl_string>& options){
    (void)fd;
    (void)options;
    return ::android::hardware::Void();
}

::android::hardware::Return<void> IHealth::interfaceDescriptor(interfaceDescriptor_cb _hidl_cb){
    _hidl_cb(::android::hardware::health::V2_1::IHealth::descriptor);
    return ::android::hardware::Void();
}

::android::hardware::Return<void> IHealth::getHashChain(getHashChain_cb _hidl_cb){
    _hidl_cb({
        (uint8_t[32]){206,141,190,118,235,158,233,75,70,239,152,247,37,190,153,46,118,10,87,81,7,61,79,73,18,72,64,38,84,19,113,243} /* ce8dbe76eb9ee94b46ef98f725be992e760a5751073d4f4912484026541371f3 */,
        (uint8_t[32]){103,86,130,221,48,7,128,92,152,94,170,236,145,97,42,188,136,244,194,91,52,49,251,132,7,11,117,132,161,167,65,251} /* 675682dd3007805c985eaaec91612abc88f4c25b3431fb84070b7584a1a741fb */,
        (uint8_t[32]){236,127,215,158,208,45,250,133,188,73,148,38,173,174,62,190,35,239,5,36,243,205,105,87,19,147,36,184,59,24,202,76} /* ec7fd79ed02dfa85bc499426adae3ebe23ef0524f3cd6957139324b83b18ca4c */});
    return ::android::hardware::Void();
}

::android::hardware::Return<void> IHealth::setHALInstrumentation(){
    return ::android::hardware::Void();
}

::android::hardware::Return<bool> IHealth::linkToDeath(const ::android::sp<::android::hardware::hidl_death_recipient>& recipient, uint64_t cookie){
    (void)cookie;
    return (recipient != nullptr);
}

::android::hardware::Return<void> IHealth::ping(){
    return ::android::hardware::Void();
}

::android::hardware::Return<void> IHealth::getDebugInfo(getDebugInfo_cb _hidl_cb){
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

::android::hardware::Return<void> IHealth::notifySyspropsChanged(){
    ::android::report_sysprop_change();
    return ::android::hardware::Void();
}

::android::hardware::Return<bool> IHealth::unlinkToDeath(const ::android::sp<::android::hardware::hidl_death_recipient>& recipient){
    return (recipient != nullptr);
}


::android::hardware::Return<::android::sp<::android::hardware::health::V2_1::IHealth>> IHealth::castFrom(const ::android::sp<::android::hardware::health::V2_1::IHealth>& parent, bool /* emitError */) {
    return parent;
}

::android::hardware::Return<::android::sp<::android::hardware::health::V2_1::IHealth>> IHealth::castFrom(const ::android::sp<::android::hardware::health::V2_0::IHealth>& parent, bool emitError) {
    return ::android::hardware::details::castInterface<IHealth, ::android::hardware::health::V2_0::IHealth, BpHwHealth>(
            parent, "android.hardware.health@2.1::IHealth", emitError);
}

::android::hardware::Return<::android::sp<::android::hardware::health::V2_1::IHealth>> IHealth::castFrom(const ::android::sp<::android::hidl::base::V1_0::IBase>& parent, bool emitError) {
    return ::android::hardware::details::castInterface<IHealth, ::android::hidl::base::V1_0::IBase, BpHwHealth>(
            parent, "android.hardware.health@2.1::IHealth", emitError);
}

BpHwHealth::BpHwHealth(const ::android::sp<::android::hardware::IBinder> &_hidl_impl)
        : BpInterface<IHealth>(_hidl_impl),
          ::android::hardware::details::HidlInstrumentor("android.hardware.health@2.1", "IHealth") {
}

void BpHwHealth::onLastStrongRef(const void* id) {
    {
        std::unique_lock<std::mutex> lock(_hidl_mMutex);
        _hidl_mDeathRecipients.clear();
    }

    BpInterface<IHealth>::onLastStrongRef(id);
}
// Methods from ::android::hardware::health::V2_1::IHealth follow.
::android::hardware::Return<void> BpHwHealth::_hidl_getHealthConfig(::android::hardware::IInterface *_hidl_this, ::android::hardware::details::HidlInstrumentor *_hidl_this_instrumentor, getHealthConfig_cb _hidl_cb) {
    #ifdef __ANDROID_DEBUGGABLE__
    bool mEnableInstrumentation = _hidl_this_instrumentor->isInstrumentationEnabled();
    const auto &mInstrumentationCallbacks = _hidl_this_instrumentor->getInstrumentationCallbacks();
    #else
    (void) _hidl_this_instrumentor;
    #endif // __ANDROID_DEBUGGABLE__
    ::android::ScopedTrace PASTE(___tracer, __LINE__) (ATRACE_TAG_HAL, "HIDL::IHealth::getHealthConfig::client");
    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_ENTRY, "android.hardware.health", "2.1", "IHealth", "getHealthConfig", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    ::android::hardware::Parcel _hidl_data;
    ::android::hardware::Parcel _hidl_reply;
    ::android::status_t _hidl_err;
    ::android::status_t _hidl_transact_err;
    ::android::hardware::Status _hidl_status;

    _hidl_err = _hidl_data.writeInterfaceToken(BpHwHealth::descriptor);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_transact_err = ::android::hardware::IInterface::asBinder(_hidl_this)->transact(13 /* getHealthConfig */, _hidl_data, &_hidl_reply, 0 /* flags */, [&] (::android::hardware::Parcel& _hidl_reply) {
        ::android::hardware::health::V2_0::Result _hidl_out_result;
        ::android::hardware::health::V2_1::HealthConfig* _hidl_out_config;


        _hidl_err = ::android::hardware::readFromParcel(&_hidl_status, _hidl_reply);
        if (_hidl_err != ::android::OK) { return; }

        if (!_hidl_status.isOk()) { return; }

        _hidl_err = _hidl_reply.readInt32((int32_t *)&_hidl_out_result);
        if (_hidl_err != ::android::OK) { return; }

        size_t _hidl__hidl_out_config_parent;

        _hidl_err = _hidl_reply.readBuffer(sizeof(*_hidl_out_config), &_hidl__hidl_out_config_parent,  const_cast<const void**>(reinterpret_cast<void **>(&_hidl_out_config)));
        if (_hidl_err != ::android::OK) { return; }

        _hidl_err = readEmbeddedFromParcel(
                const_cast<::android::hardware::health::V2_1::HealthConfig &>(*_hidl_out_config),
                _hidl_reply,
                _hidl__hidl_out_config_parent,
                0 /* parentOffset */);

        if (_hidl_err != ::android::OK) { return; }

        _hidl_cb(_hidl_out_result, *_hidl_out_config);

        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&_hidl_out_result);
            _hidl_args.push_back((void *)_hidl_out_config);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::CLIENT_API_EXIT, "android.hardware.health", "2.1", "IHealth", "getHealthConfig", &_hidl_args);
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

::android::hardware::Return<void> BpHwHealth::_hidl_getHealthInfo_2_1(::android::hardware::IInterface *_hidl_this, ::android::hardware::details::HidlInstrumentor *_hidl_this_instrumentor, getHealthInfo_2_1_cb _hidl_cb) {
    #ifdef __ANDROID_DEBUGGABLE__
    bool mEnableInstrumentation = _hidl_this_instrumentor->isInstrumentationEnabled();
    const auto &mInstrumentationCallbacks = _hidl_this_instrumentor->getInstrumentationCallbacks();
    #else
    (void) _hidl_this_instrumentor;
    #endif // __ANDROID_DEBUGGABLE__
    ::android::ScopedTrace PASTE(___tracer, __LINE__) (ATRACE_TAG_HAL, "HIDL::IHealth::getHealthInfo_2_1::client");
    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_ENTRY, "android.hardware.health", "2.1", "IHealth", "getHealthInfo_2_1", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    ::android::hardware::Parcel _hidl_data;
    ::android::hardware::Parcel _hidl_reply;
    ::android::status_t _hidl_err;
    ::android::status_t _hidl_transact_err;
    ::android::hardware::Status _hidl_status;

    _hidl_err = _hidl_data.writeInterfaceToken(BpHwHealth::descriptor);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_transact_err = ::android::hardware::IInterface::asBinder(_hidl_this)->transact(14 /* getHealthInfo_2_1 */, _hidl_data, &_hidl_reply, 0 /* flags */, [&] (::android::hardware::Parcel& _hidl_reply) {
        ::android::hardware::health::V2_0::Result _hidl_out_result;
        ::android::hardware::health::V2_1::HealthInfo* _hidl_out_value;


        _hidl_err = ::android::hardware::readFromParcel(&_hidl_status, _hidl_reply);
        if (_hidl_err != ::android::OK) { return; }

        if (!_hidl_status.isOk()) { return; }

        _hidl_err = _hidl_reply.readInt32((int32_t *)&_hidl_out_result);
        if (_hidl_err != ::android::OK) { return; }

        size_t _hidl__hidl_out_value_parent;

        _hidl_err = _hidl_reply.readBuffer(sizeof(*_hidl_out_value), &_hidl__hidl_out_value_parent,  const_cast<const void**>(reinterpret_cast<void **>(&_hidl_out_value)));
        if (_hidl_err != ::android::OK) { return; }

        _hidl_err = readEmbeddedFromParcel(
                const_cast<::android::hardware::health::V2_1::HealthInfo &>(*_hidl_out_value),
                _hidl_reply,
                _hidl__hidl_out_value_parent,
                0 /* parentOffset */);

        if (_hidl_err != ::android::OK) { return; }

        _hidl_cb(_hidl_out_result, *_hidl_out_value);

        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&_hidl_out_result);
            _hidl_args.push_back((void *)_hidl_out_value);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::CLIENT_API_EXIT, "android.hardware.health", "2.1", "IHealth", "getHealthInfo_2_1", &_hidl_args);
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

::android::hardware::Return<void> BpHwHealth::_hidl_shouldKeepScreenOn(::android::hardware::IInterface *_hidl_this, ::android::hardware::details::HidlInstrumentor *_hidl_this_instrumentor, shouldKeepScreenOn_cb _hidl_cb) {
    #ifdef __ANDROID_DEBUGGABLE__
    bool mEnableInstrumentation = _hidl_this_instrumentor->isInstrumentationEnabled();
    const auto &mInstrumentationCallbacks = _hidl_this_instrumentor->getInstrumentationCallbacks();
    #else
    (void) _hidl_this_instrumentor;
    #endif // __ANDROID_DEBUGGABLE__
    ::android::ScopedTrace PASTE(___tracer, __LINE__) (ATRACE_TAG_HAL, "HIDL::IHealth::shouldKeepScreenOn::client");
    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_ENTRY, "android.hardware.health", "2.1", "IHealth", "shouldKeepScreenOn", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    ::android::hardware::Parcel _hidl_data;
    ::android::hardware::Parcel _hidl_reply;
    ::android::status_t _hidl_err;
    ::android::status_t _hidl_transact_err;
    ::android::hardware::Status _hidl_status;

    _hidl_err = _hidl_data.writeInterfaceToken(BpHwHealth::descriptor);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_transact_err = ::android::hardware::IInterface::asBinder(_hidl_this)->transact(15 /* shouldKeepScreenOn */, _hidl_data, &_hidl_reply, 0 /* flags */, [&] (::android::hardware::Parcel& _hidl_reply) {
        ::android::hardware::health::V2_0::Result _hidl_out_result;
        bool _hidl_out_value;


        _hidl_err = ::android::hardware::readFromParcel(&_hidl_status, _hidl_reply);
        if (_hidl_err != ::android::OK) { return; }

        if (!_hidl_status.isOk()) { return; }

        _hidl_err = _hidl_reply.readInt32((int32_t *)&_hidl_out_result);
        if (_hidl_err != ::android::OK) { return; }

        _hidl_err = _hidl_reply.readBool(&_hidl_out_value);
        if (_hidl_err != ::android::OK) { return; }

        _hidl_cb(_hidl_out_result, _hidl_out_value);

        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&_hidl_out_result);
            _hidl_args.push_back((void *)&_hidl_out_value);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::CLIENT_API_EXIT, "android.hardware.health", "2.1", "IHealth", "shouldKeepScreenOn", &_hidl_args);
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


// Methods from ::android::hardware::health::V2_0::IHealth follow.
::android::hardware::Return<::android::hardware::health::V2_0::Result> BpHwHealth::registerCallback(const ::android::sp<::android::hardware::health::V2_0::IHealthInfoCallback>& callback){
    ::android::hardware::Return<::android::hardware::health::V2_0::Result>  _hidl_out = ::android::hardware::health::V2_0::BpHwHealth::_hidl_registerCallback(this, this, callback);

    return _hidl_out;
}

::android::hardware::Return<::android::hardware::health::V2_0::Result> BpHwHealth::unregisterCallback(const ::android::sp<::android::hardware::health::V2_0::IHealthInfoCallback>& callback){
    ::android::hardware::Return<::android::hardware::health::V2_0::Result>  _hidl_out = ::android::hardware::health::V2_0::BpHwHealth::_hidl_unregisterCallback(this, this, callback);

    return _hidl_out;
}

::android::hardware::Return<::android::hardware::health::V2_0::Result> BpHwHealth::update(){
    ::android::hardware::Return<::android::hardware::health::V2_0::Result>  _hidl_out = ::android::hardware::health::V2_0::BpHwHealth::_hidl_update(this, this);

    return _hidl_out;
}

::android::hardware::Return<void> BpHwHealth::getChargeCounter(getChargeCounter_cb _hidl_cb){
    ::android::hardware::Return<void>  _hidl_out = ::android::hardware::health::V2_0::BpHwHealth::_hidl_getChargeCounter(this, this, _hidl_cb);

    return _hidl_out;
}

::android::hardware::Return<void> BpHwHealth::getCurrentNow(getCurrentNow_cb _hidl_cb){
    ::android::hardware::Return<void>  _hidl_out = ::android::hardware::health::V2_0::BpHwHealth::_hidl_getCurrentNow(this, this, _hidl_cb);

    return _hidl_out;
}

::android::hardware::Return<void> BpHwHealth::getCurrentAverage(getCurrentAverage_cb _hidl_cb){
    ::android::hardware::Return<void>  _hidl_out = ::android::hardware::health::V2_0::BpHwHealth::_hidl_getCurrentAverage(this, this, _hidl_cb);

    return _hidl_out;
}

::android::hardware::Return<void> BpHwHealth::getCapacity(getCapacity_cb _hidl_cb){
    ::android::hardware::Return<void>  _hidl_out = ::android::hardware::health::V2_0::BpHwHealth::_hidl_getCapacity(this, this, _hidl_cb);

    return _hidl_out;
}

::android::hardware::Return<void> BpHwHealth::getEnergyCounter(getEnergyCounter_cb _hidl_cb){
    ::android::hardware::Return<void>  _hidl_out = ::android::hardware::health::V2_0::BpHwHealth::_hidl_getEnergyCounter(this, this, _hidl_cb);

    return _hidl_out;
}

::android::hardware::Return<void> BpHwHealth::getChargeStatus(getChargeStatus_cb _hidl_cb){
    ::android::hardware::Return<void>  _hidl_out = ::android::hardware::health::V2_0::BpHwHealth::_hidl_getChargeStatus(this, this, _hidl_cb);

    return _hidl_out;
}

::android::hardware::Return<void> BpHwHealth::getStorageInfo(getStorageInfo_cb _hidl_cb){
    ::android::hardware::Return<void>  _hidl_out = ::android::hardware::health::V2_0::BpHwHealth::_hidl_getStorageInfo(this, this, _hidl_cb);

    return _hidl_out;
}

::android::hardware::Return<void> BpHwHealth::getDiskStats(getDiskStats_cb _hidl_cb){
    ::android::hardware::Return<void>  _hidl_out = ::android::hardware::health::V2_0::BpHwHealth::_hidl_getDiskStats(this, this, _hidl_cb);

    return _hidl_out;
}

::android::hardware::Return<void> BpHwHealth::getHealthInfo(getHealthInfo_cb _hidl_cb){
    ::android::hardware::Return<void>  _hidl_out = ::android::hardware::health::V2_0::BpHwHealth::_hidl_getHealthInfo(this, this, _hidl_cb);

    return _hidl_out;
}


// Methods from ::android::hardware::health::V2_1::IHealth follow.
::android::hardware::Return<void> BpHwHealth::getHealthConfig(getHealthConfig_cb _hidl_cb){
    ::android::hardware::Return<void>  _hidl_out = ::android::hardware::health::V2_1::BpHwHealth::_hidl_getHealthConfig(this, this, _hidl_cb);

    return _hidl_out;
}

::android::hardware::Return<void> BpHwHealth::getHealthInfo_2_1(getHealthInfo_2_1_cb _hidl_cb){
    ::android::hardware::Return<void>  _hidl_out = ::android::hardware::health::V2_1::BpHwHealth::_hidl_getHealthInfo_2_1(this, this, _hidl_cb);

    return _hidl_out;
}

::android::hardware::Return<void> BpHwHealth::shouldKeepScreenOn(shouldKeepScreenOn_cb _hidl_cb){
    ::android::hardware::Return<void>  _hidl_out = ::android::hardware::health::V2_1::BpHwHealth::_hidl_shouldKeepScreenOn(this, this, _hidl_cb);

    return _hidl_out;
}


// Methods from ::android::hidl::base::V1_0::IBase follow.
::android::hardware::Return<void> BpHwHealth::interfaceChain(interfaceChain_cb _hidl_cb){
    ::android::hardware::Return<void>  _hidl_out = ::android::hidl::base::V1_0::BpHwBase::_hidl_interfaceChain(this, this, _hidl_cb);

    return _hidl_out;
}

::android::hardware::Return<void> BpHwHealth::debug(const ::android::hardware::hidl_handle& fd, const ::android::hardware::hidl_vec<::android::hardware::hidl_string>& options){
    ::android::hardware::Return<void>  _hidl_out = ::android::hidl::base::V1_0::BpHwBase::_hidl_debug(this, this, fd, options);

    return _hidl_out;
}

::android::hardware::Return<void> BpHwHealth::interfaceDescriptor(interfaceDescriptor_cb _hidl_cb){
    ::android::hardware::Return<void>  _hidl_out = ::android::hidl::base::V1_0::BpHwBase::_hidl_interfaceDescriptor(this, this, _hidl_cb);

    return _hidl_out;
}

::android::hardware::Return<void> BpHwHealth::getHashChain(getHashChain_cb _hidl_cb){
    ::android::hardware::Return<void>  _hidl_out = ::android::hidl::base::V1_0::BpHwBase::_hidl_getHashChain(this, this, _hidl_cb);

    return _hidl_out;
}

::android::hardware::Return<void> BpHwHealth::setHALInstrumentation(){
    ::android::hardware::Return<void>  _hidl_out = ::android::hidl::base::V1_0::BpHwBase::_hidl_setHALInstrumentation(this, this);

    return _hidl_out;
}

::android::hardware::Return<bool> BpHwHealth::linkToDeath(const ::android::sp<::android::hardware::hidl_death_recipient>& recipient, uint64_t cookie){
    ::android::hardware::ProcessState::self()->startThreadPool();
    ::android::hardware::hidl_binder_death_recipient *binder_recipient = new ::android::hardware::hidl_binder_death_recipient(recipient, cookie, this);
    std::unique_lock<std::mutex> lock(_hidl_mMutex);
    _hidl_mDeathRecipients.push_back(binder_recipient);
    return (remote()->linkToDeath(binder_recipient) == ::android::OK);
}

::android::hardware::Return<void> BpHwHealth::ping(){
    ::android::hardware::Return<void>  _hidl_out = ::android::hidl::base::V1_0::BpHwBase::_hidl_ping(this, this);

    return _hidl_out;
}

::android::hardware::Return<void> BpHwHealth::getDebugInfo(getDebugInfo_cb _hidl_cb){
    ::android::hardware::Return<void>  _hidl_out = ::android::hidl::base::V1_0::BpHwBase::_hidl_getDebugInfo(this, this, _hidl_cb);

    return _hidl_out;
}

::android::hardware::Return<void> BpHwHealth::notifySyspropsChanged(){
    ::android::hardware::Return<void>  _hidl_out = ::android::hidl::base::V1_0::BpHwBase::_hidl_notifySyspropsChanged(this, this);

    return _hidl_out;
}

::android::hardware::Return<bool> BpHwHealth::unlinkToDeath(const ::android::sp<::android::hardware::hidl_death_recipient>& recipient){
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


BnHwHealth::BnHwHealth(const ::android::sp<IHealth> &_hidl_impl)
        : ::android::hidl::base::V1_0::BnHwBase(_hidl_impl, "android.hardware.health@2.1", "IHealth") { 
            _hidl_mImpl = _hidl_impl;
            auto prio = ::android::hardware::getMinSchedulerPolicy(_hidl_impl);
            mSchedPolicy = prio.sched_policy;
            mSchedPriority = prio.prio;
            setRequestingSid(::android::hardware::getRequestingSid(_hidl_impl));
}

BnHwHealth::~BnHwHealth() {
    ::android::hardware::details::gBnMap->eraseIfEqual(_hidl_mImpl.get(), this);
}

// Methods from ::android::hardware::health::V2_1::IHealth follow.
::android::status_t BnHwHealth::_hidl_getHealthConfig(
        ::android::hidl::base::V1_0::BnHwBase* _hidl_this,
        const ::android::hardware::Parcel &_hidl_data,
        ::android::hardware::Parcel *_hidl_reply,
        TransactCallback _hidl_cb) {
    #ifdef __ANDROID_DEBUGGABLE__
    bool mEnableInstrumentation = _hidl_this->isInstrumentationEnabled();
    const auto &mInstrumentationCallbacks = _hidl_this->getInstrumentationCallbacks();
    #endif // __ANDROID_DEBUGGABLE__

    ::android::status_t _hidl_err = ::android::OK;
    if (!_hidl_data.enforceInterface(BnHwHealth::Pure::descriptor)) {
        _hidl_err = ::android::BAD_TYPE;
        return _hidl_err;
    }

    atrace_begin(ATRACE_TAG_HAL, "HIDL::IHealth::getHealthConfig::server");
    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::SERVER_API_ENTRY, "android.hardware.health", "2.1", "IHealth", "getHealthConfig", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    bool _hidl_callbackCalled = false;

    ::android::hardware::Return<void> _hidl_ret = static_cast<IHealth*>(_hidl_this->getImpl().get())->getHealthConfig([&](const auto &_hidl_out_result, const auto &_hidl_out_config) {
        if (_hidl_callbackCalled) {
            LOG_ALWAYS_FATAL("getHealthConfig: _hidl_cb called a second time, but must be called once.");
        }
        _hidl_callbackCalled = true;

        ::android::hardware::writeToParcel(::android::hardware::Status::ok(), _hidl_reply);

        _hidl_err = _hidl_reply->writeInt32((int32_t)_hidl_out_result);
        if (_hidl_err != ::android::OK) { goto _hidl_error; }

        size_t _hidl__hidl_out_config_parent;

        _hidl_err = _hidl_reply->writeBuffer(&_hidl_out_config, sizeof(_hidl_out_config), &_hidl__hidl_out_config_parent);
        if (_hidl_err != ::android::OK) { goto _hidl_error; }

        _hidl_err = writeEmbeddedToParcel(
                _hidl_out_config,
                _hidl_reply,
                _hidl__hidl_out_config_parent,
                0 /* parentOffset */);

        if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_error:
        atrace_end(ATRACE_TAG_HAL);
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&_hidl_out_result);
            _hidl_args.push_back((void *)&_hidl_out_config);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::SERVER_API_EXIT, "android.hardware.health", "2.1", "IHealth", "getHealthConfig", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        if (_hidl_err != ::android::OK) { return; }
        _hidl_cb(*_hidl_reply);
    });

    _hidl_ret.assertOk();
    if (!_hidl_callbackCalled) {
        LOG_ALWAYS_FATAL("getHealthConfig: _hidl_cb not called, but must be called once.");
    }

    return _hidl_err;
}

::android::status_t BnHwHealth::_hidl_getHealthInfo_2_1(
        ::android::hidl::base::V1_0::BnHwBase* _hidl_this,
        const ::android::hardware::Parcel &_hidl_data,
        ::android::hardware::Parcel *_hidl_reply,
        TransactCallback _hidl_cb) {
    #ifdef __ANDROID_DEBUGGABLE__
    bool mEnableInstrumentation = _hidl_this->isInstrumentationEnabled();
    const auto &mInstrumentationCallbacks = _hidl_this->getInstrumentationCallbacks();
    #endif // __ANDROID_DEBUGGABLE__

    ::android::status_t _hidl_err = ::android::OK;
    if (!_hidl_data.enforceInterface(BnHwHealth::Pure::descriptor)) {
        _hidl_err = ::android::BAD_TYPE;
        return _hidl_err;
    }

    atrace_begin(ATRACE_TAG_HAL, "HIDL::IHealth::getHealthInfo_2_1::server");
    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::SERVER_API_ENTRY, "android.hardware.health", "2.1", "IHealth", "getHealthInfo_2_1", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    bool _hidl_callbackCalled = false;

    ::android::hardware::Return<void> _hidl_ret = static_cast<IHealth*>(_hidl_this->getImpl().get())->getHealthInfo_2_1([&](const auto &_hidl_out_result, const auto &_hidl_out_value) {
        if (_hidl_callbackCalled) {
            LOG_ALWAYS_FATAL("getHealthInfo_2_1: _hidl_cb called a second time, but must be called once.");
        }
        _hidl_callbackCalled = true;

        ::android::hardware::writeToParcel(::android::hardware::Status::ok(), _hidl_reply);

        _hidl_err = _hidl_reply->writeInt32((int32_t)_hidl_out_result);
        if (_hidl_err != ::android::OK) { goto _hidl_error; }

        size_t _hidl__hidl_out_value_parent;

        _hidl_err = _hidl_reply->writeBuffer(&_hidl_out_value, sizeof(_hidl_out_value), &_hidl__hidl_out_value_parent);
        if (_hidl_err != ::android::OK) { goto _hidl_error; }

        _hidl_err = writeEmbeddedToParcel(
                _hidl_out_value,
                _hidl_reply,
                _hidl__hidl_out_value_parent,
                0 /* parentOffset */);

        if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_error:
        atrace_end(ATRACE_TAG_HAL);
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&_hidl_out_result);
            _hidl_args.push_back((void *)&_hidl_out_value);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::SERVER_API_EXIT, "android.hardware.health", "2.1", "IHealth", "getHealthInfo_2_1", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        if (_hidl_err != ::android::OK) { return; }
        _hidl_cb(*_hidl_reply);
    });

    _hidl_ret.assertOk();
    if (!_hidl_callbackCalled) {
        LOG_ALWAYS_FATAL("getHealthInfo_2_1: _hidl_cb not called, but must be called once.");
    }

    return _hidl_err;
}

::android::status_t BnHwHealth::_hidl_shouldKeepScreenOn(
        ::android::hidl::base::V1_0::BnHwBase* _hidl_this,
        const ::android::hardware::Parcel &_hidl_data,
        ::android::hardware::Parcel *_hidl_reply,
        TransactCallback _hidl_cb) {
    #ifdef __ANDROID_DEBUGGABLE__
    bool mEnableInstrumentation = _hidl_this->isInstrumentationEnabled();
    const auto &mInstrumentationCallbacks = _hidl_this->getInstrumentationCallbacks();
    #endif // __ANDROID_DEBUGGABLE__

    ::android::status_t _hidl_err = ::android::OK;
    if (!_hidl_data.enforceInterface(BnHwHealth::Pure::descriptor)) {
        _hidl_err = ::android::BAD_TYPE;
        return _hidl_err;
    }

    atrace_begin(ATRACE_TAG_HAL, "HIDL::IHealth::shouldKeepScreenOn::server");
    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::SERVER_API_ENTRY, "android.hardware.health", "2.1", "IHealth", "shouldKeepScreenOn", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    bool _hidl_callbackCalled = false;

    ::android::hardware::Return<void> _hidl_ret = static_cast<IHealth*>(_hidl_this->getImpl().get())->shouldKeepScreenOn([&](const auto &_hidl_out_result, const auto &_hidl_out_value) {
        if (_hidl_callbackCalled) {
            LOG_ALWAYS_FATAL("shouldKeepScreenOn: _hidl_cb called a second time, but must be called once.");
        }
        _hidl_callbackCalled = true;

        ::android::hardware::writeToParcel(::android::hardware::Status::ok(), _hidl_reply);

        _hidl_err = _hidl_reply->writeInt32((int32_t)_hidl_out_result);
        if (_hidl_err != ::android::OK) { goto _hidl_error; }

        _hidl_err = _hidl_reply->writeBool(_hidl_out_value);
        if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_error:
        atrace_end(ATRACE_TAG_HAL);
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&_hidl_out_result);
            _hidl_args.push_back((void *)&_hidl_out_value);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::SERVER_API_EXIT, "android.hardware.health", "2.1", "IHealth", "shouldKeepScreenOn", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        if (_hidl_err != ::android::OK) { return; }
        _hidl_cb(*_hidl_reply);
    });

    _hidl_ret.assertOk();
    if (!_hidl_callbackCalled) {
        LOG_ALWAYS_FATAL("shouldKeepScreenOn: _hidl_cb not called, but must be called once.");
    }

    return _hidl_err;
}


// Methods from ::android::hardware::health::V2_0::IHealth follow.

// Methods from ::android::hardware::health::V2_1::IHealth follow.

// Methods from ::android::hidl::base::V1_0::IBase follow.
::android::hardware::Return<void> BnHwHealth::ping() {
    return ::android::hardware::Void();
}
::android::hardware::Return<void> BnHwHealth::getDebugInfo(getDebugInfo_cb _hidl_cb) {
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

::android::status_t BnHwHealth::onTransact(
        uint32_t _hidl_code,
        const ::android::hardware::Parcel &_hidl_data,
        ::android::hardware::Parcel *_hidl_reply,
        uint32_t _hidl_flags,
        TransactCallback _hidl_cb) {
    ::android::status_t _hidl_err = ::android::OK;

    switch (_hidl_code) {
        case 1 /* registerCallback */:
        {
            _hidl_err = ::android::hardware::health::V2_0::BnHwHealth::_hidl_registerCallback(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 2 /* unregisterCallback */:
        {
            _hidl_err = ::android::hardware::health::V2_0::BnHwHealth::_hidl_unregisterCallback(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 3 /* update */:
        {
            _hidl_err = ::android::hardware::health::V2_0::BnHwHealth::_hidl_update(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 4 /* getChargeCounter */:
        {
            _hidl_err = ::android::hardware::health::V2_0::BnHwHealth::_hidl_getChargeCounter(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 5 /* getCurrentNow */:
        {
            _hidl_err = ::android::hardware::health::V2_0::BnHwHealth::_hidl_getCurrentNow(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 6 /* getCurrentAverage */:
        {
            _hidl_err = ::android::hardware::health::V2_0::BnHwHealth::_hidl_getCurrentAverage(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 7 /* getCapacity */:
        {
            _hidl_err = ::android::hardware::health::V2_0::BnHwHealth::_hidl_getCapacity(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 8 /* getEnergyCounter */:
        {
            _hidl_err = ::android::hardware::health::V2_0::BnHwHealth::_hidl_getEnergyCounter(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 9 /* getChargeStatus */:
        {
            _hidl_err = ::android::hardware::health::V2_0::BnHwHealth::_hidl_getChargeStatus(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 10 /* getStorageInfo */:
        {
            _hidl_err = ::android::hardware::health::V2_0::BnHwHealth::_hidl_getStorageInfo(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 11 /* getDiskStats */:
        {
            _hidl_err = ::android::hardware::health::V2_0::BnHwHealth::_hidl_getDiskStats(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 12 /* getHealthInfo */:
        {
            _hidl_err = ::android::hardware::health::V2_0::BnHwHealth::_hidl_getHealthInfo(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 13 /* getHealthConfig */:
        {
            _hidl_err = ::android::hardware::health::V2_1::BnHwHealth::_hidl_getHealthConfig(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 14 /* getHealthInfo_2_1 */:
        {
            _hidl_err = ::android::hardware::health::V2_1::BnHwHealth::_hidl_getHealthInfo_2_1(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 15 /* shouldKeepScreenOn */:
        {
            _hidl_err = ::android::hardware::health::V2_1::BnHwHealth::_hidl_shouldKeepScreenOn(this, _hidl_data, _hidl_reply, _hidl_cb);
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

BsHealth::BsHealth(const ::android::sp<::android::hardware::health::V2_1::IHealth> impl) : ::android::hardware::details::HidlInstrumentor("android.hardware.health@2.1", "IHealth"), mImpl(impl) {
    mOnewayQueue.start(3000 /* similar limit to binderized */);
}

::android::hardware::Return<void> BsHealth::addOnewayTask(std::function<void(void)> fun) {
    if (!mOnewayQueue.push(fun)) {
        return ::android::hardware::Status::fromExceptionCode(
                ::android::hardware::Status::EX_TRANSACTION_FAILED,
                "Passthrough oneway function queue exceeds maximum size.");
    }
    return ::android::hardware::Status();
}

::android::sp<IHealth> IHealth::tryGetService(const std::string &serviceName, const bool getStub) {
    return ::android::hardware::details::getServiceInternal<BpHwHealth>(serviceName, false, getStub);
}

::android::sp<IHealth> IHealth::getService(const std::string &serviceName, const bool getStub) {
    return ::android::hardware::details::getServiceInternal<BpHwHealth>(serviceName, true, getStub);
}

::android::status_t IHealth::registerAsService(const std::string &serviceName) {
    return ::android::hardware::details::registerAsServiceInternal(this, serviceName);
}

bool IHealth::registerForNotifications(
        const std::string &serviceName,
        const ::android::sp<::android::hidl::manager::V1_0::IServiceNotification> &notification) {
    const ::android::sp<::android::hidl::manager::V1_0::IServiceManager> sm
            = ::android::hardware::defaultServiceManager();
    if (sm == nullptr) {
        return false;
    }
    ::android::hardware::Return<bool> success =
            sm->registerForNotifications("android.hardware.health@2.1::IHealth",
                    serviceName, notification);
    return success.isOk() && success;
}

static_assert(sizeof(::android::hardware::MQDescriptor<char, ::android::hardware::kSynchronizedReadWrite>) == 32, "wrong size");
static_assert(sizeof(::android::hardware::hidl_handle) == 16, "wrong size");
static_assert(sizeof(::android::hardware::hidl_memory) == 40, "wrong size");
static_assert(sizeof(::android::hardware::hidl_string) == 16, "wrong size");
static_assert(sizeof(::android::hardware::hidl_vec<char>) == 16, "wrong size");

}  // namespace V2_1
}  // namespace health
}  // namespace hardware
}  // namespace android
