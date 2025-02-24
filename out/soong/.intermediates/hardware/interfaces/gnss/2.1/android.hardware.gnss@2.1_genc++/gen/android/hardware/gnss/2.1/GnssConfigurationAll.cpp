#define LOG_TAG "android.hardware.gnss@2.1::GnssConfiguration"

#include <log/log.h>
#include <cutils/trace.h>
#include <hidl/HidlTransportSupport.h>

#include <hidl/Static.h>
#include <hwbinder/ProcessState.h>
#include <utils/Trace.h>
#include <android/hidl/manager/1.0/IServiceManager.h>
#include <android/hardware/gnss/2.1/BpHwGnssConfiguration.h>
#include <android/hardware/gnss/2.1/BnHwGnssConfiguration.h>
#include <android/hardware/gnss/2.1/BsGnssConfiguration.h>
#include <android/hardware/gnss/2.0/BpHwGnssConfiguration.h>
#include <android/hardware/gnss/1.1/BpHwGnssConfiguration.h>
#include <android/hardware/gnss/1.0/BpHwGnssConfiguration.h>
#include <android/hidl/base/1.0/BpHwBase.h>
#include <hidl/ServiceManagement.h>

namespace android {
namespace hardware {
namespace gnss {
namespace V2_1 {

const char* IGnssConfiguration::descriptor("android.hardware.gnss@2.1::IGnssConfiguration");

__attribute__((constructor)) static void static_constructor() {
    ::android::hardware::details::getBnConstructorMap().set(IGnssConfiguration::descriptor,
            [](void *iIntf) -> ::android::sp<::android::hardware::IBinder> {
                return new BnHwGnssConfiguration(static_cast<IGnssConfiguration *>(iIntf));
            });
    ::android::hardware::details::getBsConstructorMap().set(IGnssConfiguration::descriptor,
            [](void *iIntf) -> ::android::sp<::android::hidl::base::V1_0::IBase> {
                return new BsGnssConfiguration(static_cast<IGnssConfiguration *>(iIntf));
            });
}

__attribute__((destructor))static void static_destructor() {
    ::android::hardware::details::getBnConstructorMap().erase(IGnssConfiguration::descriptor);
    ::android::hardware::details::getBsConstructorMap().erase(IGnssConfiguration::descriptor);
}

// Methods from ::android::hardware::gnss::V1_0::IGnssConfiguration follow.
// no default implementation for: ::android::hardware::Return<bool> IGnssConfiguration::setSuplEs(bool enabled)
// no default implementation for: ::android::hardware::Return<bool> IGnssConfiguration::setSuplVersion(uint32_t version)
// no default implementation for: ::android::hardware::Return<bool> IGnssConfiguration::setSuplMode(::android::hardware::hidl_bitfield<::android::hardware::gnss::V1_0::IGnssConfiguration::SuplMode> mode)
// no default implementation for: ::android::hardware::Return<bool> IGnssConfiguration::setGpsLock(::android::hardware::hidl_bitfield<::android::hardware::gnss::V1_0::IGnssConfiguration::GpsLock> lock)
// no default implementation for: ::android::hardware::Return<bool> IGnssConfiguration::setLppProfile(::android::hardware::hidl_bitfield<::android::hardware::gnss::V1_0::IGnssConfiguration::LppProfile> lppProfile)
// no default implementation for: ::android::hardware::Return<bool> IGnssConfiguration::setGlonassPositioningProtocol(::android::hardware::hidl_bitfield<::android::hardware::gnss::V1_0::IGnssConfiguration::GlonassPosProtocol> protocol)
// no default implementation for: ::android::hardware::Return<bool> IGnssConfiguration::setEmergencySuplPdn(bool enable)

// Methods from ::android::hardware::gnss::V1_1::IGnssConfiguration follow.
// no default implementation for: ::android::hardware::Return<bool> IGnssConfiguration::setBlacklist(const ::android::hardware::hidl_vec<::android::hardware::gnss::V1_1::IGnssConfiguration::BlacklistedSource>& blacklist)

// Methods from ::android::hardware::gnss::V2_0::IGnssConfiguration follow.
// no default implementation for: ::android::hardware::Return<bool> IGnssConfiguration::setEsExtensionSec(uint32_t emergencyExtensionSeconds)

// Methods from ::android::hardware::gnss::V2_1::IGnssConfiguration follow.
// no default implementation for: ::android::hardware::Return<bool> IGnssConfiguration::setBlacklist_2_1(const ::android::hardware::hidl_vec<::android::hardware::gnss::V2_1::IGnssConfiguration::BlacklistedSource>& blacklist)

// Methods from ::android::hidl::base::V1_0::IBase follow.
::android::hardware::Return<void> IGnssConfiguration::interfaceChain(interfaceChain_cb _hidl_cb){
    _hidl_cb({
        ::android::hardware::gnss::V2_1::IGnssConfiguration::descriptor,
        ::android::hardware::gnss::V2_0::IGnssConfiguration::descriptor,
        ::android::hardware::gnss::V1_1::IGnssConfiguration::descriptor,
        ::android::hardware::gnss::V1_0::IGnssConfiguration::descriptor,
        ::android::hidl::base::V1_0::IBase::descriptor,
    });
    return ::android::hardware::Void();
}

::android::hardware::Return<void> IGnssConfiguration::debug(const ::android::hardware::hidl_handle& fd, const ::android::hardware::hidl_vec<::android::hardware::hidl_string>& options){
    (void)fd;
    (void)options;
    return ::android::hardware::Void();
}

::android::hardware::Return<void> IGnssConfiguration::interfaceDescriptor(interfaceDescriptor_cb _hidl_cb){
    _hidl_cb(::android::hardware::gnss::V2_1::IGnssConfiguration::descriptor);
    return ::android::hardware::Void();
}

::android::hardware::Return<void> IGnssConfiguration::getHashChain(getHashChain_cb _hidl_cb){
    _hidl_cb({
        (uint8_t[32]){115,125,117,0,23,115,143,7,83,209,59,160,26,51,16,224,22,31,41,75,138,232,11,63,214,62,170,34,126,157,156,102} /* 737d750017738f0753d13ba01a3310e0161f294b8ae80b3fd63eaa227e9d9c66 */,
        (uint8_t[32]){236,201,102,198,139,221,189,149,200,218,231,130,184,66,4,207,1,199,87,52,103,94,135,105,150,63,59,81,6,236,18,139} /* ecc966c68bddbd95c8dae782b84204cf01c75734675e8769963f3b5106ec128b */,
        (uint8_t[32]){60,81,131,215,80,96,16,190,87,224,247,72,227,100,15,194,222,209,186,149,87,132,182,37,107,164,39,244,195,153,89,28} /* 3c5183d7506010be57e0f748e3640fc2ded1ba955784b6256ba427f4c399591c */,
        (uint8_t[32]){251,146,226,180,15,142,157,73,78,143,211,180,172,24,73,154,50,22,52,46,124,255,22,7,20,195,187,243,102,11,110,121} /* fb92e2b40f8e9d494e8fd3b4ac18499a3216342e7cff160714c3bbf3660b6e79 */,
        (uint8_t[32]){236,127,215,158,208,45,250,133,188,73,148,38,173,174,62,190,35,239,5,36,243,205,105,87,19,147,36,184,59,24,202,76} /* ec7fd79ed02dfa85bc499426adae3ebe23ef0524f3cd6957139324b83b18ca4c */});
    return ::android::hardware::Void();
}

::android::hardware::Return<void> IGnssConfiguration::setHALInstrumentation(){
    return ::android::hardware::Void();
}

::android::hardware::Return<bool> IGnssConfiguration::linkToDeath(const ::android::sp<::android::hardware::hidl_death_recipient>& recipient, uint64_t cookie){
    (void)cookie;
    return (recipient != nullptr);
}

::android::hardware::Return<void> IGnssConfiguration::ping(){
    return ::android::hardware::Void();
}

::android::hardware::Return<void> IGnssConfiguration::getDebugInfo(getDebugInfo_cb _hidl_cb){
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

::android::hardware::Return<void> IGnssConfiguration::notifySyspropsChanged(){
    ::android::report_sysprop_change();
    return ::android::hardware::Void();
}

::android::hardware::Return<bool> IGnssConfiguration::unlinkToDeath(const ::android::sp<::android::hardware::hidl_death_recipient>& recipient){
    return (recipient != nullptr);
}


::android::hardware::Return<::android::sp<::android::hardware::gnss::V2_1::IGnssConfiguration>> IGnssConfiguration::castFrom(const ::android::sp<::android::hardware::gnss::V2_1::IGnssConfiguration>& parent, bool /* emitError */) {
    return parent;
}

::android::hardware::Return<::android::sp<::android::hardware::gnss::V2_1::IGnssConfiguration>> IGnssConfiguration::castFrom(const ::android::sp<::android::hardware::gnss::V2_0::IGnssConfiguration>& parent, bool emitError) {
    return ::android::hardware::details::castInterface<IGnssConfiguration, ::android::hardware::gnss::V2_0::IGnssConfiguration, BpHwGnssConfiguration>(
            parent, "android.hardware.gnss@2.1::IGnssConfiguration", emitError);
}

::android::hardware::Return<::android::sp<::android::hardware::gnss::V2_1::IGnssConfiguration>> IGnssConfiguration::castFrom(const ::android::sp<::android::hardware::gnss::V1_1::IGnssConfiguration>& parent, bool emitError) {
    return ::android::hardware::details::castInterface<IGnssConfiguration, ::android::hardware::gnss::V1_1::IGnssConfiguration, BpHwGnssConfiguration>(
            parent, "android.hardware.gnss@2.1::IGnssConfiguration", emitError);
}

::android::hardware::Return<::android::sp<::android::hardware::gnss::V2_1::IGnssConfiguration>> IGnssConfiguration::castFrom(const ::android::sp<::android::hardware::gnss::V1_0::IGnssConfiguration>& parent, bool emitError) {
    return ::android::hardware::details::castInterface<IGnssConfiguration, ::android::hardware::gnss::V1_0::IGnssConfiguration, BpHwGnssConfiguration>(
            parent, "android.hardware.gnss@2.1::IGnssConfiguration", emitError);
}

::android::hardware::Return<::android::sp<::android::hardware::gnss::V2_1::IGnssConfiguration>> IGnssConfiguration::castFrom(const ::android::sp<::android::hidl::base::V1_0::IBase>& parent, bool emitError) {
    return ::android::hardware::details::castInterface<IGnssConfiguration, ::android::hidl::base::V1_0::IBase, BpHwGnssConfiguration>(
            parent, "android.hardware.gnss@2.1::IGnssConfiguration", emitError);
}

BpHwGnssConfiguration::BpHwGnssConfiguration(const ::android::sp<::android::hardware::IBinder> &_hidl_impl)
        : BpInterface<IGnssConfiguration>(_hidl_impl),
          ::android::hardware::details::HidlInstrumentor("android.hardware.gnss@2.1", "IGnssConfiguration") {
}

void BpHwGnssConfiguration::onLastStrongRef(const void* id) {
    {
        std::unique_lock<std::mutex> lock(_hidl_mMutex);
        _hidl_mDeathRecipients.clear();
    }

    BpInterface<IGnssConfiguration>::onLastStrongRef(id);
}
// Methods from ::android::hardware::gnss::V2_1::IGnssConfiguration follow.
::android::hardware::Return<bool> BpHwGnssConfiguration::_hidl_setBlacklist_2_1(::android::hardware::IInterface *_hidl_this, ::android::hardware::details::HidlInstrumentor *_hidl_this_instrumentor, const ::android::hardware::hidl_vec<::android::hardware::gnss::V2_1::IGnssConfiguration::BlacklistedSource>& blacklist) {
    #ifdef __ANDROID_DEBUGGABLE__
    bool mEnableInstrumentation = _hidl_this_instrumentor->isInstrumentationEnabled();
    const auto &mInstrumentationCallbacks = _hidl_this_instrumentor->getInstrumentationCallbacks();
    #else
    (void) _hidl_this_instrumentor;
    #endif // __ANDROID_DEBUGGABLE__
    ::android::ScopedTrace PASTE(___tracer, __LINE__) (ATRACE_TAG_HAL, "HIDL::IGnssConfiguration::setBlacklist_2_1::client");
    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        _hidl_args.push_back((void *)&blacklist);
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_ENTRY, "android.hardware.gnss", "2.1", "IGnssConfiguration", "setBlacklist_2_1", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    ::android::hardware::Parcel _hidl_data;
    ::android::hardware::Parcel _hidl_reply;
    ::android::status_t _hidl_err;
    ::android::status_t _hidl_transact_err;
    ::android::hardware::Status _hidl_status;

    bool _hidl_out_success;

    _hidl_err = _hidl_data.writeInterfaceToken(BpHwGnssConfiguration::descriptor);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    size_t _hidl_blacklist_parent;

    _hidl_err = _hidl_data.writeBuffer(&blacklist, sizeof(blacklist), &_hidl_blacklist_parent);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    size_t _hidl_blacklist_child;

    _hidl_err = ::android::hardware::writeEmbeddedToParcel(
            blacklist,
            &_hidl_data,
            _hidl_blacklist_parent,
            0 /* parentOffset */, &_hidl_blacklist_child);

    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_transact_err = ::android::hardware::IInterface::asBinder(_hidl_this)->transact(10 /* setBlacklist_2_1 */, _hidl_data, &_hidl_reply, 0 /* flags */);
    if (_hidl_transact_err != ::android::OK) 
    {
        _hidl_err = _hidl_transact_err;
        goto _hidl_error;
    }

    _hidl_err = ::android::hardware::readFromParcel(&_hidl_status, _hidl_reply);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    if (!_hidl_status.isOk()) { return _hidl_status; }

    _hidl_err = _hidl_reply.readBool(&_hidl_out_success);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        _hidl_args.push_back((void *)&_hidl_out_success);
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_EXIT, "android.hardware.gnss", "2.1", "IGnssConfiguration", "setBlacklist_2_1", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    return ::android::hardware::Return<bool>(_hidl_out_success);

_hidl_error:
    _hidl_status.setFromStatusT(_hidl_err);
    return ::android::hardware::Return<bool>(_hidl_status);
}


// Methods from ::android::hardware::gnss::V1_0::IGnssConfiguration follow.
::android::hardware::Return<bool> BpHwGnssConfiguration::setSuplEs(bool enabled){
    ::android::hardware::Return<bool>  _hidl_out = ::android::hardware::gnss::V1_0::BpHwGnssConfiguration::_hidl_setSuplEs(this, this, enabled);

    return _hidl_out;
}

::android::hardware::Return<bool> BpHwGnssConfiguration::setSuplVersion(uint32_t version){
    ::android::hardware::Return<bool>  _hidl_out = ::android::hardware::gnss::V1_0::BpHwGnssConfiguration::_hidl_setSuplVersion(this, this, version);

    return _hidl_out;
}

::android::hardware::Return<bool> BpHwGnssConfiguration::setSuplMode(::android::hardware::hidl_bitfield<::android::hardware::gnss::V1_0::IGnssConfiguration::SuplMode> mode){
    ::android::hardware::Return<bool>  _hidl_out = ::android::hardware::gnss::V1_0::BpHwGnssConfiguration::_hidl_setSuplMode(this, this, mode);

    return _hidl_out;
}

::android::hardware::Return<bool> BpHwGnssConfiguration::setGpsLock(::android::hardware::hidl_bitfield<::android::hardware::gnss::V1_0::IGnssConfiguration::GpsLock> lock){
    ::android::hardware::Return<bool>  _hidl_out = ::android::hardware::gnss::V1_0::BpHwGnssConfiguration::_hidl_setGpsLock(this, this, lock);

    return _hidl_out;
}

::android::hardware::Return<bool> BpHwGnssConfiguration::setLppProfile(::android::hardware::hidl_bitfield<::android::hardware::gnss::V1_0::IGnssConfiguration::LppProfile> lppProfile){
    ::android::hardware::Return<bool>  _hidl_out = ::android::hardware::gnss::V1_0::BpHwGnssConfiguration::_hidl_setLppProfile(this, this, lppProfile);

    return _hidl_out;
}

::android::hardware::Return<bool> BpHwGnssConfiguration::setGlonassPositioningProtocol(::android::hardware::hidl_bitfield<::android::hardware::gnss::V1_0::IGnssConfiguration::GlonassPosProtocol> protocol){
    ::android::hardware::Return<bool>  _hidl_out = ::android::hardware::gnss::V1_0::BpHwGnssConfiguration::_hidl_setGlonassPositioningProtocol(this, this, protocol);

    return _hidl_out;
}

::android::hardware::Return<bool> BpHwGnssConfiguration::setEmergencySuplPdn(bool enable){
    ::android::hardware::Return<bool>  _hidl_out = ::android::hardware::gnss::V1_0::BpHwGnssConfiguration::_hidl_setEmergencySuplPdn(this, this, enable);

    return _hidl_out;
}


// Methods from ::android::hardware::gnss::V1_1::IGnssConfiguration follow.
::android::hardware::Return<bool> BpHwGnssConfiguration::setBlacklist(const ::android::hardware::hidl_vec<::android::hardware::gnss::V1_1::IGnssConfiguration::BlacklistedSource>& blacklist){
    ::android::hardware::Return<bool>  _hidl_out = ::android::hardware::gnss::V1_1::BpHwGnssConfiguration::_hidl_setBlacklist(this, this, blacklist);

    return _hidl_out;
}


// Methods from ::android::hardware::gnss::V2_0::IGnssConfiguration follow.
::android::hardware::Return<bool> BpHwGnssConfiguration::setEsExtensionSec(uint32_t emergencyExtensionSeconds){
    ::android::hardware::Return<bool>  _hidl_out = ::android::hardware::gnss::V2_0::BpHwGnssConfiguration::_hidl_setEsExtensionSec(this, this, emergencyExtensionSeconds);

    return _hidl_out;
}


// Methods from ::android::hardware::gnss::V2_1::IGnssConfiguration follow.
::android::hardware::Return<bool> BpHwGnssConfiguration::setBlacklist_2_1(const ::android::hardware::hidl_vec<::android::hardware::gnss::V2_1::IGnssConfiguration::BlacklistedSource>& blacklist){
    ::android::hardware::Return<bool>  _hidl_out = ::android::hardware::gnss::V2_1::BpHwGnssConfiguration::_hidl_setBlacklist_2_1(this, this, blacklist);

    return _hidl_out;
}


// Methods from ::android::hidl::base::V1_0::IBase follow.
::android::hardware::Return<void> BpHwGnssConfiguration::interfaceChain(interfaceChain_cb _hidl_cb){
    ::android::hardware::Return<void>  _hidl_out = ::android::hidl::base::V1_0::BpHwBase::_hidl_interfaceChain(this, this, _hidl_cb);

    return _hidl_out;
}

::android::hardware::Return<void> BpHwGnssConfiguration::debug(const ::android::hardware::hidl_handle& fd, const ::android::hardware::hidl_vec<::android::hardware::hidl_string>& options){
    ::android::hardware::Return<void>  _hidl_out = ::android::hidl::base::V1_0::BpHwBase::_hidl_debug(this, this, fd, options);

    return _hidl_out;
}

::android::hardware::Return<void> BpHwGnssConfiguration::interfaceDescriptor(interfaceDescriptor_cb _hidl_cb){
    ::android::hardware::Return<void>  _hidl_out = ::android::hidl::base::V1_0::BpHwBase::_hidl_interfaceDescriptor(this, this, _hidl_cb);

    return _hidl_out;
}

::android::hardware::Return<void> BpHwGnssConfiguration::getHashChain(getHashChain_cb _hidl_cb){
    ::android::hardware::Return<void>  _hidl_out = ::android::hidl::base::V1_0::BpHwBase::_hidl_getHashChain(this, this, _hidl_cb);

    return _hidl_out;
}

::android::hardware::Return<void> BpHwGnssConfiguration::setHALInstrumentation(){
    ::android::hardware::Return<void>  _hidl_out = ::android::hidl::base::V1_0::BpHwBase::_hidl_setHALInstrumentation(this, this);

    return _hidl_out;
}

::android::hardware::Return<bool> BpHwGnssConfiguration::linkToDeath(const ::android::sp<::android::hardware::hidl_death_recipient>& recipient, uint64_t cookie){
    ::android::hardware::ProcessState::self()->startThreadPool();
    ::android::hardware::hidl_binder_death_recipient *binder_recipient = new ::android::hardware::hidl_binder_death_recipient(recipient, cookie, this);
    std::unique_lock<std::mutex> lock(_hidl_mMutex);
    _hidl_mDeathRecipients.push_back(binder_recipient);
    return (remote()->linkToDeath(binder_recipient) == ::android::OK);
}

::android::hardware::Return<void> BpHwGnssConfiguration::ping(){
    ::android::hardware::Return<void>  _hidl_out = ::android::hidl::base::V1_0::BpHwBase::_hidl_ping(this, this);

    return _hidl_out;
}

::android::hardware::Return<void> BpHwGnssConfiguration::getDebugInfo(getDebugInfo_cb _hidl_cb){
    ::android::hardware::Return<void>  _hidl_out = ::android::hidl::base::V1_0::BpHwBase::_hidl_getDebugInfo(this, this, _hidl_cb);

    return _hidl_out;
}

::android::hardware::Return<void> BpHwGnssConfiguration::notifySyspropsChanged(){
    ::android::hardware::Return<void>  _hidl_out = ::android::hidl::base::V1_0::BpHwBase::_hidl_notifySyspropsChanged(this, this);

    return _hidl_out;
}

::android::hardware::Return<bool> BpHwGnssConfiguration::unlinkToDeath(const ::android::sp<::android::hardware::hidl_death_recipient>& recipient){
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


BnHwGnssConfiguration::BnHwGnssConfiguration(const ::android::sp<IGnssConfiguration> &_hidl_impl)
        : ::android::hidl::base::V1_0::BnHwBase(_hidl_impl, "android.hardware.gnss@2.1", "IGnssConfiguration") { 
            _hidl_mImpl = _hidl_impl;
            auto prio = ::android::hardware::getMinSchedulerPolicy(_hidl_impl);
            mSchedPolicy = prio.sched_policy;
            mSchedPriority = prio.prio;
            setRequestingSid(::android::hardware::getRequestingSid(_hidl_impl));
}

BnHwGnssConfiguration::~BnHwGnssConfiguration() {
    ::android::hardware::details::gBnMap->eraseIfEqual(_hidl_mImpl.get(), this);
}

// Methods from ::android::hardware::gnss::V2_1::IGnssConfiguration follow.
::android::status_t BnHwGnssConfiguration::_hidl_setBlacklist_2_1(
        ::android::hidl::base::V1_0::BnHwBase* _hidl_this,
        const ::android::hardware::Parcel &_hidl_data,
        ::android::hardware::Parcel *_hidl_reply,
        TransactCallback _hidl_cb) {
    #ifdef __ANDROID_DEBUGGABLE__
    bool mEnableInstrumentation = _hidl_this->isInstrumentationEnabled();
    const auto &mInstrumentationCallbacks = _hidl_this->getInstrumentationCallbacks();
    #endif // __ANDROID_DEBUGGABLE__

    ::android::status_t _hidl_err = ::android::OK;
    if (!_hidl_data.enforceInterface(BnHwGnssConfiguration::Pure::descriptor)) {
        _hidl_err = ::android::BAD_TYPE;
        return _hidl_err;
    }

    const ::android::hardware::hidl_vec<::android::hardware::gnss::V2_1::IGnssConfiguration::BlacklistedSource>* blacklist;

    size_t _hidl_blacklist_parent;

    _hidl_err = _hidl_data.readBuffer(sizeof(*blacklist), &_hidl_blacklist_parent,  reinterpret_cast<const void **>(&blacklist));

    if (_hidl_err != ::android::OK) { return _hidl_err; }

    size_t _hidl_blacklist_child;

    _hidl_err = ::android::hardware::readEmbeddedFromParcel(
            const_cast<::android::hardware::hidl_vec<::android::hardware::gnss::V2_1::IGnssConfiguration::BlacklistedSource> &>(*blacklist),
            _hidl_data,
            _hidl_blacklist_parent,
            0 /* parentOffset */, &_hidl_blacklist_child);

    if (_hidl_err != ::android::OK) { return _hidl_err; }

    atrace_begin(ATRACE_TAG_HAL, "HIDL::IGnssConfiguration::setBlacklist_2_1::server");
    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        _hidl_args.push_back((void *)blacklist);
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::SERVER_API_ENTRY, "android.hardware.gnss", "2.1", "IGnssConfiguration", "setBlacklist_2_1", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    bool _hidl_out_success = static_cast<IGnssConfiguration*>(_hidl_this->getImpl().get())->setBlacklist_2_1(*blacklist);

    ::android::hardware::writeToParcel(::android::hardware::Status::ok(), _hidl_reply);

    _hidl_err = _hidl_reply->writeBool(_hidl_out_success);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

_hidl_error:
    atrace_end(ATRACE_TAG_HAL);
    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        _hidl_args.push_back((void *)&_hidl_out_success);
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::SERVER_API_EXIT, "android.hardware.gnss", "2.1", "IGnssConfiguration", "setBlacklist_2_1", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    if (_hidl_err != ::android::OK) { return _hidl_err; }
    _hidl_cb(*_hidl_reply);
    return _hidl_err;
}


// Methods from ::android::hardware::gnss::V1_0::IGnssConfiguration follow.

// Methods from ::android::hardware::gnss::V1_1::IGnssConfiguration follow.

// Methods from ::android::hardware::gnss::V2_0::IGnssConfiguration follow.

// Methods from ::android::hardware::gnss::V2_1::IGnssConfiguration follow.

// Methods from ::android::hidl::base::V1_0::IBase follow.
::android::hardware::Return<void> BnHwGnssConfiguration::ping() {
    return ::android::hardware::Void();
}
::android::hardware::Return<void> BnHwGnssConfiguration::getDebugInfo(getDebugInfo_cb _hidl_cb) {
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

::android::status_t BnHwGnssConfiguration::onTransact(
        uint32_t _hidl_code,
        const ::android::hardware::Parcel &_hidl_data,
        ::android::hardware::Parcel *_hidl_reply,
        uint32_t _hidl_flags,
        TransactCallback _hidl_cb) {
    ::android::status_t _hidl_err = ::android::OK;

    switch (_hidl_code) {
        case 1 /* setSuplEs */:
        {
            _hidl_err = ::android::hardware::gnss::V1_0::BnHwGnssConfiguration::_hidl_setSuplEs(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 2 /* setSuplVersion */:
        {
            _hidl_err = ::android::hardware::gnss::V1_0::BnHwGnssConfiguration::_hidl_setSuplVersion(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 3 /* setSuplMode */:
        {
            _hidl_err = ::android::hardware::gnss::V1_0::BnHwGnssConfiguration::_hidl_setSuplMode(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 4 /* setGpsLock */:
        {
            _hidl_err = ::android::hardware::gnss::V1_0::BnHwGnssConfiguration::_hidl_setGpsLock(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 5 /* setLppProfile */:
        {
            _hidl_err = ::android::hardware::gnss::V1_0::BnHwGnssConfiguration::_hidl_setLppProfile(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 6 /* setGlonassPositioningProtocol */:
        {
            _hidl_err = ::android::hardware::gnss::V1_0::BnHwGnssConfiguration::_hidl_setGlonassPositioningProtocol(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 7 /* setEmergencySuplPdn */:
        {
            _hidl_err = ::android::hardware::gnss::V1_0::BnHwGnssConfiguration::_hidl_setEmergencySuplPdn(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 8 /* setBlacklist */:
        {
            _hidl_err = ::android::hardware::gnss::V1_1::BnHwGnssConfiguration::_hidl_setBlacklist(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 9 /* setEsExtensionSec */:
        {
            _hidl_err = ::android::hardware::gnss::V2_0::BnHwGnssConfiguration::_hidl_setEsExtensionSec(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 10 /* setBlacklist_2_1 */:
        {
            _hidl_err = ::android::hardware::gnss::V2_1::BnHwGnssConfiguration::_hidl_setBlacklist_2_1(this, _hidl_data, _hidl_reply, _hidl_cb);
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

BsGnssConfiguration::BsGnssConfiguration(const ::android::sp<::android::hardware::gnss::V2_1::IGnssConfiguration> impl) : ::android::hardware::details::HidlInstrumentor("android.hardware.gnss@2.1", "IGnssConfiguration"), mImpl(impl) {
    mOnewayQueue.start(3000 /* similar limit to binderized */);
}

::android::hardware::Return<void> BsGnssConfiguration::addOnewayTask(std::function<void(void)> fun) {
    if (!mOnewayQueue.push(fun)) {
        return ::android::hardware::Status::fromExceptionCode(
                ::android::hardware::Status::EX_TRANSACTION_FAILED,
                "Passthrough oneway function queue exceeds maximum size.");
    }
    return ::android::hardware::Status();
}

::android::sp<IGnssConfiguration> IGnssConfiguration::tryGetService(const std::string &serviceName, const bool getStub) {
    return ::android::hardware::details::getServiceInternal<BpHwGnssConfiguration>(serviceName, false, getStub);
}

::android::sp<IGnssConfiguration> IGnssConfiguration::getService(const std::string &serviceName, const bool getStub) {
    return ::android::hardware::details::getServiceInternal<BpHwGnssConfiguration>(serviceName, true, getStub);
}

::android::status_t IGnssConfiguration::registerAsService(const std::string &serviceName) {
    return ::android::hardware::details::registerAsServiceInternal(this, serviceName);
}

bool IGnssConfiguration::registerForNotifications(
        const std::string &serviceName,
        const ::android::sp<::android::hidl::manager::V1_0::IServiceNotification> &notification) {
    const ::android::sp<::android::hidl::manager::V1_0::IServiceManager> sm
            = ::android::hardware::defaultServiceManager();
    if (sm == nullptr) {
        return false;
    }
    ::android::hardware::Return<bool> success =
            sm->registerForNotifications("android.hardware.gnss@2.1::IGnssConfiguration",
                    serviceName, notification);
    return success.isOk() && success;
}

static_assert(sizeof(::android::hardware::MQDescriptor<char, ::android::hardware::kSynchronizedReadWrite>) == 32, "wrong size");
static_assert(sizeof(::android::hardware::hidl_handle) == 16, "wrong size");
static_assert(sizeof(::android::hardware::hidl_memory) == 40, "wrong size");
static_assert(sizeof(::android::hardware::hidl_string) == 16, "wrong size");
static_assert(sizeof(::android::hardware::hidl_vec<char>) == 16, "wrong size");

}  // namespace V2_1
}  // namespace gnss
}  // namespace hardware
}  // namespace android
