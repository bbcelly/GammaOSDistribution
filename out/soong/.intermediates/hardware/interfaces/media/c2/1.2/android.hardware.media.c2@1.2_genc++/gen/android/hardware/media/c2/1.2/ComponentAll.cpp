#define LOG_TAG "android.hardware.media.c2@1.2::Component"

#include <log/log.h>
#include <cutils/trace.h>
#include <hidl/HidlTransportSupport.h>

#include <hidl/Static.h>
#include <hwbinder/ProcessState.h>
#include <utils/Trace.h>
#include <android/hidl/manager/1.0/IServiceManager.h>
#include <android/hardware/media/c2/1.2/BpHwComponent.h>
#include <android/hardware/media/c2/1.2/BnHwComponent.h>
#include <android/hardware/media/c2/1.2/BsComponent.h>
#include <android/hardware/media/c2/1.1/BpHwComponent.h>
#include <android/hardware/media/c2/1.0/BpHwComponent.h>
#include <android/hidl/base/1.0/BpHwBase.h>
#include <hidl/ServiceManagement.h>

namespace android {
namespace hardware {
namespace media {
namespace c2 {
namespace V1_2 {

const char* IComponent::descriptor("android.hardware.media.c2@1.2::IComponent");

__attribute__((constructor)) static void static_constructor() {
    ::android::hardware::details::getBnConstructorMap().set(IComponent::descriptor,
            [](void *iIntf) -> ::android::sp<::android::hardware::IBinder> {
                return new BnHwComponent(static_cast<IComponent *>(iIntf));
            });
    ::android::hardware::details::getBsConstructorMap().set(IComponent::descriptor,
            [](void *iIntf) -> ::android::sp<::android::hidl::base::V1_0::IBase> {
                return new BsComponent(static_cast<IComponent *>(iIntf));
            });
}

__attribute__((destructor))static void static_destructor() {
    ::android::hardware::details::getBnConstructorMap().erase(IComponent::descriptor);
    ::android::hardware::details::getBsConstructorMap().erase(IComponent::descriptor);
}

// Methods from ::android::hardware::media::c2::V1_0::IComponent follow.
// no default implementation for: ::android::hardware::Return<::android::hardware::media::c2::V1_0::Status> IComponent::queue(const ::android::hardware::media::c2::V1_0::WorkBundle& workBundle)
// no default implementation for: ::android::hardware::Return<void> IComponent::flush(flush_cb _hidl_cb)
// no default implementation for: ::android::hardware::Return<::android::hardware::media::c2::V1_0::Status> IComponent::drain(bool withEos)
// no default implementation for: ::android::hardware::Return<::android::hardware::media::c2::V1_0::Status> IComponent::setOutputSurface(uint64_t blockPoolId, const ::android::sp<::android::hardware::graphics::bufferqueue::V2_0::IGraphicBufferProducer>& surface)
// no default implementation for: ::android::hardware::Return<void> IComponent::connectToInputSurface(const ::android::sp<::android::hardware::media::c2::V1_0::IInputSurface>& inputSurface, connectToInputSurface_cb _hidl_cb)
// no default implementation for: ::android::hardware::Return<void> IComponent::connectToOmxInputSurface(const ::android::sp<::android::hardware::graphics::bufferqueue::V1_0::IGraphicBufferProducer>& producer, const ::android::sp<::android::hardware::media::omx::V1_0::IGraphicBufferSource>& source, connectToOmxInputSurface_cb _hidl_cb)
// no default implementation for: ::android::hardware::Return<::android::hardware::media::c2::V1_0::Status> IComponent::disconnectFromInputSurface()
// no default implementation for: ::android::hardware::Return<void> IComponent::createBlockPool(uint32_t allocatorId, createBlockPool_cb _hidl_cb)
// no default implementation for: ::android::hardware::Return<::android::hardware::media::c2::V1_0::Status> IComponent::destroyBlockPool(uint64_t blockPoolId)
// no default implementation for: ::android::hardware::Return<::android::hardware::media::c2::V1_0::Status> IComponent::start()
// no default implementation for: ::android::hardware::Return<::android::hardware::media::c2::V1_0::Status> IComponent::stop()
// no default implementation for: ::android::hardware::Return<::android::hardware::media::c2::V1_0::Status> IComponent::reset()
// no default implementation for: ::android::hardware::Return<::android::hardware::media::c2::V1_0::Status> IComponent::release()
// no default implementation for: ::android::hardware::Return<::android::sp<::android::hardware::media::c2::V1_0::IComponentInterface>> IComponent::getInterface()
// no default implementation for: ::android::hardware::Return<::android::sp<::android::hardware::media::c2::V1_0::IInputSink>> IComponent::asInputSink()

// Methods from ::android::hardware::media::c2::V1_1::IComponent follow.
// no default implementation for: ::android::hardware::Return<void> IComponent::configureVideoTunnel(uint32_t avSyncHwId, configureVideoTunnel_cb _hidl_cb)

// Methods from ::android::hardware::media::c2::V1_2::IComponent follow.
// no default implementation for: ::android::hardware::Return<::android::hardware::media::c2::V1_0::Status> IComponent::setOutputSurfaceWithSyncObj(uint64_t blockPoolId, const ::android::sp<::android::hardware::graphics::bufferqueue::V2_0::IGraphicBufferProducer>& surface, const ::android::hardware::media::c2::V1_2::SurfaceSyncObj& syncObject)

// Methods from ::android::hidl::base::V1_0::IBase follow.
::android::hardware::Return<void> IComponent::interfaceChain(interfaceChain_cb _hidl_cb){
    _hidl_cb({
        ::android::hardware::media::c2::V1_2::IComponent::descriptor,
        ::android::hardware::media::c2::V1_1::IComponent::descriptor,
        ::android::hardware::media::c2::V1_0::IComponent::descriptor,
        ::android::hidl::base::V1_0::IBase::descriptor,
    });
    return ::android::hardware::Void();
}

::android::hardware::Return<void> IComponent::debug(const ::android::hardware::hidl_handle& fd, const ::android::hardware::hidl_vec<::android::hardware::hidl_string>& options){
    (void)fd;
    (void)options;
    return ::android::hardware::Void();
}

::android::hardware::Return<void> IComponent::interfaceDescriptor(interfaceDescriptor_cb _hidl_cb){
    _hidl_cb(::android::hardware::media::c2::V1_2::IComponent::descriptor);
    return ::android::hardware::Void();
}

::android::hardware::Return<void> IComponent::getHashChain(getHashChain_cb _hidl_cb){
    _hidl_cb({
        (uint8_t[32]){97,229,215,61,18,213,88,163,17,94,91,30,46,116,15,190,20,146,53,195,108,96,120,129,240,83,242,244,67,202,253,245} /* 61e5d73d12d558a3115e5b1e2e740fbe149235c36c607881f053f2f443cafdf5 */,
        (uint8_t[32]){223,156,121,196,253,222,40,33,85,12,109,92,61,7,245,236,10,223,177,183,2,86,28,229,67,201,6,221,239,105,135,3} /* df9c79c4fdde2821550c6d5c3d07f5ec0adfb1b702561ce543c906ddef698703 */,
        (uint8_t[32]){127,170,32,126,37,7,198,162,97,126,94,194,85,75,131,56,62,190,57,43,110,98,125,221,242,227,176,234,229,113,91,168} /* 7faa207e2507c6a2617e5ec2554b83383ebe392b6e627dddf2e3b0eae5715ba8 */,
        (uint8_t[32]){236,127,215,158,208,45,250,133,188,73,148,38,173,174,62,190,35,239,5,36,243,205,105,87,19,147,36,184,59,24,202,76} /* ec7fd79ed02dfa85bc499426adae3ebe23ef0524f3cd6957139324b83b18ca4c */});
    return ::android::hardware::Void();
}

::android::hardware::Return<void> IComponent::setHALInstrumentation(){
    return ::android::hardware::Void();
}

::android::hardware::Return<bool> IComponent::linkToDeath(const ::android::sp<::android::hardware::hidl_death_recipient>& recipient, uint64_t cookie){
    (void)cookie;
    return (recipient != nullptr);
}

::android::hardware::Return<void> IComponent::ping(){
    return ::android::hardware::Void();
}

::android::hardware::Return<void> IComponent::getDebugInfo(getDebugInfo_cb _hidl_cb){
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

::android::hardware::Return<void> IComponent::notifySyspropsChanged(){
    ::android::report_sysprop_change();
    return ::android::hardware::Void();
}

::android::hardware::Return<bool> IComponent::unlinkToDeath(const ::android::sp<::android::hardware::hidl_death_recipient>& recipient){
    return (recipient != nullptr);
}


::android::hardware::Return<::android::sp<::android::hardware::media::c2::V1_2::IComponent>> IComponent::castFrom(const ::android::sp<::android::hardware::media::c2::V1_2::IComponent>& parent, bool /* emitError */) {
    return parent;
}

::android::hardware::Return<::android::sp<::android::hardware::media::c2::V1_2::IComponent>> IComponent::castFrom(const ::android::sp<::android::hardware::media::c2::V1_1::IComponent>& parent, bool emitError) {
    return ::android::hardware::details::castInterface<IComponent, ::android::hardware::media::c2::V1_1::IComponent, BpHwComponent>(
            parent, "android.hardware.media.c2@1.2::IComponent", emitError);
}

::android::hardware::Return<::android::sp<::android::hardware::media::c2::V1_2::IComponent>> IComponent::castFrom(const ::android::sp<::android::hardware::media::c2::V1_0::IComponent>& parent, bool emitError) {
    return ::android::hardware::details::castInterface<IComponent, ::android::hardware::media::c2::V1_0::IComponent, BpHwComponent>(
            parent, "android.hardware.media.c2@1.2::IComponent", emitError);
}

::android::hardware::Return<::android::sp<::android::hardware::media::c2::V1_2::IComponent>> IComponent::castFrom(const ::android::sp<::android::hidl::base::V1_0::IBase>& parent, bool emitError) {
    return ::android::hardware::details::castInterface<IComponent, ::android::hidl::base::V1_0::IBase, BpHwComponent>(
            parent, "android.hardware.media.c2@1.2::IComponent", emitError);
}

BpHwComponent::BpHwComponent(const ::android::sp<::android::hardware::IBinder> &_hidl_impl)
        : BpInterface<IComponent>(_hidl_impl),
          ::android::hardware::details::HidlInstrumentor("android.hardware.media.c2@1.2", "IComponent") {
}

void BpHwComponent::onLastStrongRef(const void* id) {
    {
        std::unique_lock<std::mutex> lock(_hidl_mMutex);
        _hidl_mDeathRecipients.clear();
    }

    BpInterface<IComponent>::onLastStrongRef(id);
}
// Methods from ::android::hardware::media::c2::V1_2::IComponent follow.
::android::hardware::Return<::android::hardware::media::c2::V1_0::Status> BpHwComponent::_hidl_setOutputSurfaceWithSyncObj(::android::hardware::IInterface *_hidl_this, ::android::hardware::details::HidlInstrumentor *_hidl_this_instrumentor, uint64_t blockPoolId, const ::android::sp<::android::hardware::graphics::bufferqueue::V2_0::IGraphicBufferProducer>& surface, const ::android::hardware::media::c2::V1_2::SurfaceSyncObj& syncObject) {
    #ifdef __ANDROID_DEBUGGABLE__
    bool mEnableInstrumentation = _hidl_this_instrumentor->isInstrumentationEnabled();
    const auto &mInstrumentationCallbacks = _hidl_this_instrumentor->getInstrumentationCallbacks();
    #else
    (void) _hidl_this_instrumentor;
    #endif // __ANDROID_DEBUGGABLE__
    ::android::ScopedTrace PASTE(___tracer, __LINE__) (ATRACE_TAG_HAL, "HIDL::IComponent::setOutputSurfaceWithSyncObj::client");
    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        _hidl_args.push_back((void *)&blockPoolId);
        _hidl_args.push_back((void *)&surface);
        _hidl_args.push_back((void *)&syncObject);
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_ENTRY, "android.hardware.media.c2", "1.2", "IComponent", "setOutputSurfaceWithSyncObj", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    ::android::hardware::Parcel _hidl_data;
    ::android::hardware::Parcel _hidl_reply;
    ::android::status_t _hidl_err;
    ::android::status_t _hidl_transact_err;
    ::android::hardware::Status _hidl_status;

    ::android::hardware::media::c2::V1_0::Status _hidl_out_status;

    _hidl_err = _hidl_data.writeInterfaceToken(BpHwComponent::descriptor);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_err = _hidl_data.writeUint64(blockPoolId);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    if (surface == nullptr) {
        _hidl_err = _hidl_data.writeStrongBinder(nullptr);
    } else {
        ::android::sp<::android::hardware::IBinder> _hidl_binder = ::android::hardware::getOrCreateCachedBinder(surface.get());
        if (_hidl_binder.get() != nullptr) {
            _hidl_err = _hidl_data.writeStrongBinder(_hidl_binder);
        } else {
            _hidl_err = ::android::UNKNOWN_ERROR;
        }
    }
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    size_t _hidl_syncObject_parent;

    _hidl_err = _hidl_data.writeBuffer(&syncObject, sizeof(syncObject), &_hidl_syncObject_parent);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_err = writeEmbeddedToParcel(
            syncObject,
            &_hidl_data,
            _hidl_syncObject_parent,
            0 /* parentOffset */);

    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    ::android::hardware::ProcessState::self()->startThreadPool();
    _hidl_transact_err = ::android::hardware::IInterface::asBinder(_hidl_this)->transact(17 /* setOutputSurfaceWithSyncObj */, _hidl_data, &_hidl_reply, 0 /* flags */);
    if (_hidl_transact_err != ::android::OK) 
    {
        _hidl_err = _hidl_transact_err;
        goto _hidl_error;
    }

    _hidl_err = ::android::hardware::readFromParcel(&_hidl_status, _hidl_reply);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    if (!_hidl_status.isOk()) { return _hidl_status; }

    _hidl_err = _hidl_reply.readInt32((int32_t *)&_hidl_out_status);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        _hidl_args.push_back((void *)&_hidl_out_status);
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_EXIT, "android.hardware.media.c2", "1.2", "IComponent", "setOutputSurfaceWithSyncObj", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    return ::android::hardware::Return<::android::hardware::media::c2::V1_0::Status>(_hidl_out_status);

_hidl_error:
    _hidl_status.setFromStatusT(_hidl_err);
    return ::android::hardware::Return<::android::hardware::media::c2::V1_0::Status>(_hidl_status);
}


// Methods from ::android::hardware::media::c2::V1_0::IComponent follow.
::android::hardware::Return<::android::hardware::media::c2::V1_0::Status> BpHwComponent::queue(const ::android::hardware::media::c2::V1_0::WorkBundle& workBundle){
    ::android::hardware::Return<::android::hardware::media::c2::V1_0::Status>  _hidl_out = ::android::hardware::media::c2::V1_0::BpHwComponent::_hidl_queue(this, this, workBundle);

    return _hidl_out;
}

::android::hardware::Return<void> BpHwComponent::flush(flush_cb _hidl_cb){
    ::android::hardware::Return<void>  _hidl_out = ::android::hardware::media::c2::V1_0::BpHwComponent::_hidl_flush(this, this, _hidl_cb);

    return _hidl_out;
}

::android::hardware::Return<::android::hardware::media::c2::V1_0::Status> BpHwComponent::drain(bool withEos){
    ::android::hardware::Return<::android::hardware::media::c2::V1_0::Status>  _hidl_out = ::android::hardware::media::c2::V1_0::BpHwComponent::_hidl_drain(this, this, withEos);

    return _hidl_out;
}

::android::hardware::Return<::android::hardware::media::c2::V1_0::Status> BpHwComponent::setOutputSurface(uint64_t blockPoolId, const ::android::sp<::android::hardware::graphics::bufferqueue::V2_0::IGraphicBufferProducer>& surface){
    ::android::hardware::Return<::android::hardware::media::c2::V1_0::Status>  _hidl_out = ::android::hardware::media::c2::V1_0::BpHwComponent::_hidl_setOutputSurface(this, this, blockPoolId, surface);

    return _hidl_out;
}

::android::hardware::Return<void> BpHwComponent::connectToInputSurface(const ::android::sp<::android::hardware::media::c2::V1_0::IInputSurface>& inputSurface, connectToInputSurface_cb _hidl_cb){
    ::android::hardware::Return<void>  _hidl_out = ::android::hardware::media::c2::V1_0::BpHwComponent::_hidl_connectToInputSurface(this, this, inputSurface, _hidl_cb);

    return _hidl_out;
}

::android::hardware::Return<void> BpHwComponent::connectToOmxInputSurface(const ::android::sp<::android::hardware::graphics::bufferqueue::V1_0::IGraphicBufferProducer>& producer, const ::android::sp<::android::hardware::media::omx::V1_0::IGraphicBufferSource>& source, connectToOmxInputSurface_cb _hidl_cb){
    ::android::hardware::Return<void>  _hidl_out = ::android::hardware::media::c2::V1_0::BpHwComponent::_hidl_connectToOmxInputSurface(this, this, producer, source, _hidl_cb);

    return _hidl_out;
}

::android::hardware::Return<::android::hardware::media::c2::V1_0::Status> BpHwComponent::disconnectFromInputSurface(){
    ::android::hardware::Return<::android::hardware::media::c2::V1_0::Status>  _hidl_out = ::android::hardware::media::c2::V1_0::BpHwComponent::_hidl_disconnectFromInputSurface(this, this);

    return _hidl_out;
}

::android::hardware::Return<void> BpHwComponent::createBlockPool(uint32_t allocatorId, createBlockPool_cb _hidl_cb){
    ::android::hardware::Return<void>  _hidl_out = ::android::hardware::media::c2::V1_0::BpHwComponent::_hidl_createBlockPool(this, this, allocatorId, _hidl_cb);

    return _hidl_out;
}

::android::hardware::Return<::android::hardware::media::c2::V1_0::Status> BpHwComponent::destroyBlockPool(uint64_t blockPoolId){
    ::android::hardware::Return<::android::hardware::media::c2::V1_0::Status>  _hidl_out = ::android::hardware::media::c2::V1_0::BpHwComponent::_hidl_destroyBlockPool(this, this, blockPoolId);

    return _hidl_out;
}

::android::hardware::Return<::android::hardware::media::c2::V1_0::Status> BpHwComponent::start(){
    ::android::hardware::Return<::android::hardware::media::c2::V1_0::Status>  _hidl_out = ::android::hardware::media::c2::V1_0::BpHwComponent::_hidl_start(this, this);

    return _hidl_out;
}

::android::hardware::Return<::android::hardware::media::c2::V1_0::Status> BpHwComponent::stop(){
    ::android::hardware::Return<::android::hardware::media::c2::V1_0::Status>  _hidl_out = ::android::hardware::media::c2::V1_0::BpHwComponent::_hidl_stop(this, this);

    return _hidl_out;
}

::android::hardware::Return<::android::hardware::media::c2::V1_0::Status> BpHwComponent::reset(){
    ::android::hardware::Return<::android::hardware::media::c2::V1_0::Status>  _hidl_out = ::android::hardware::media::c2::V1_0::BpHwComponent::_hidl_reset(this, this);

    return _hidl_out;
}

::android::hardware::Return<::android::hardware::media::c2::V1_0::Status> BpHwComponent::release(){
    ::android::hardware::Return<::android::hardware::media::c2::V1_0::Status>  _hidl_out = ::android::hardware::media::c2::V1_0::BpHwComponent::_hidl_release(this, this);

    return _hidl_out;
}

::android::hardware::Return<::android::sp<::android::hardware::media::c2::V1_0::IComponentInterface>> BpHwComponent::getInterface(){
    ::android::hardware::Return<::android::sp<::android::hardware::media::c2::V1_0::IComponentInterface>>  _hidl_out = ::android::hardware::media::c2::V1_0::BpHwComponent::_hidl_getInterface(this, this);

    return _hidl_out;
}

::android::hardware::Return<::android::sp<::android::hardware::media::c2::V1_0::IInputSink>> BpHwComponent::asInputSink(){
    ::android::hardware::Return<::android::sp<::android::hardware::media::c2::V1_0::IInputSink>>  _hidl_out = ::android::hardware::media::c2::V1_0::BpHwComponent::_hidl_asInputSink(this, this);

    return _hidl_out;
}


// Methods from ::android::hardware::media::c2::V1_1::IComponent follow.
::android::hardware::Return<void> BpHwComponent::configureVideoTunnel(uint32_t avSyncHwId, configureVideoTunnel_cb _hidl_cb){
    ::android::hardware::Return<void>  _hidl_out = ::android::hardware::media::c2::V1_1::BpHwComponent::_hidl_configureVideoTunnel(this, this, avSyncHwId, _hidl_cb);

    return _hidl_out;
}


// Methods from ::android::hardware::media::c2::V1_2::IComponent follow.
::android::hardware::Return<::android::hardware::media::c2::V1_0::Status> BpHwComponent::setOutputSurfaceWithSyncObj(uint64_t blockPoolId, const ::android::sp<::android::hardware::graphics::bufferqueue::V2_0::IGraphicBufferProducer>& surface, const ::android::hardware::media::c2::V1_2::SurfaceSyncObj& syncObject){
    ::android::hardware::Return<::android::hardware::media::c2::V1_0::Status>  _hidl_out = ::android::hardware::media::c2::V1_2::BpHwComponent::_hidl_setOutputSurfaceWithSyncObj(this, this, blockPoolId, surface, syncObject);

    return _hidl_out;
}


// Methods from ::android::hidl::base::V1_0::IBase follow.
::android::hardware::Return<void> BpHwComponent::interfaceChain(interfaceChain_cb _hidl_cb){
    ::android::hardware::Return<void>  _hidl_out = ::android::hidl::base::V1_0::BpHwBase::_hidl_interfaceChain(this, this, _hidl_cb);

    return _hidl_out;
}

::android::hardware::Return<void> BpHwComponent::debug(const ::android::hardware::hidl_handle& fd, const ::android::hardware::hidl_vec<::android::hardware::hidl_string>& options){
    ::android::hardware::Return<void>  _hidl_out = ::android::hidl::base::V1_0::BpHwBase::_hidl_debug(this, this, fd, options);

    return _hidl_out;
}

::android::hardware::Return<void> BpHwComponent::interfaceDescriptor(interfaceDescriptor_cb _hidl_cb){
    ::android::hardware::Return<void>  _hidl_out = ::android::hidl::base::V1_0::BpHwBase::_hidl_interfaceDescriptor(this, this, _hidl_cb);

    return _hidl_out;
}

::android::hardware::Return<void> BpHwComponent::getHashChain(getHashChain_cb _hidl_cb){
    ::android::hardware::Return<void>  _hidl_out = ::android::hidl::base::V1_0::BpHwBase::_hidl_getHashChain(this, this, _hidl_cb);

    return _hidl_out;
}

::android::hardware::Return<void> BpHwComponent::setHALInstrumentation(){
    ::android::hardware::Return<void>  _hidl_out = ::android::hidl::base::V1_0::BpHwBase::_hidl_setHALInstrumentation(this, this);

    return _hidl_out;
}

::android::hardware::Return<bool> BpHwComponent::linkToDeath(const ::android::sp<::android::hardware::hidl_death_recipient>& recipient, uint64_t cookie){
    ::android::hardware::ProcessState::self()->startThreadPool();
    ::android::hardware::hidl_binder_death_recipient *binder_recipient = new ::android::hardware::hidl_binder_death_recipient(recipient, cookie, this);
    std::unique_lock<std::mutex> lock(_hidl_mMutex);
    _hidl_mDeathRecipients.push_back(binder_recipient);
    return (remote()->linkToDeath(binder_recipient) == ::android::OK);
}

::android::hardware::Return<void> BpHwComponent::ping(){
    ::android::hardware::Return<void>  _hidl_out = ::android::hidl::base::V1_0::BpHwBase::_hidl_ping(this, this);

    return _hidl_out;
}

::android::hardware::Return<void> BpHwComponent::getDebugInfo(getDebugInfo_cb _hidl_cb){
    ::android::hardware::Return<void>  _hidl_out = ::android::hidl::base::V1_0::BpHwBase::_hidl_getDebugInfo(this, this, _hidl_cb);

    return _hidl_out;
}

::android::hardware::Return<void> BpHwComponent::notifySyspropsChanged(){
    ::android::hardware::Return<void>  _hidl_out = ::android::hidl::base::V1_0::BpHwBase::_hidl_notifySyspropsChanged(this, this);

    return _hidl_out;
}

::android::hardware::Return<bool> BpHwComponent::unlinkToDeath(const ::android::sp<::android::hardware::hidl_death_recipient>& recipient){
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


BnHwComponent::BnHwComponent(const ::android::sp<IComponent> &_hidl_impl)
        : ::android::hidl::base::V1_0::BnHwBase(_hidl_impl, "android.hardware.media.c2@1.2", "IComponent") { 
            _hidl_mImpl = _hidl_impl;
            auto prio = ::android::hardware::getMinSchedulerPolicy(_hidl_impl);
            mSchedPolicy = prio.sched_policy;
            mSchedPriority = prio.prio;
            setRequestingSid(::android::hardware::getRequestingSid(_hidl_impl));
}

BnHwComponent::~BnHwComponent() {
    ::android::hardware::details::gBnMap->eraseIfEqual(_hidl_mImpl.get(), this);
}

// Methods from ::android::hardware::media::c2::V1_2::IComponent follow.
::android::status_t BnHwComponent::_hidl_setOutputSurfaceWithSyncObj(
        ::android::hidl::base::V1_0::BnHwBase* _hidl_this,
        const ::android::hardware::Parcel &_hidl_data,
        ::android::hardware::Parcel *_hidl_reply,
        TransactCallback _hidl_cb) {
    #ifdef __ANDROID_DEBUGGABLE__
    bool mEnableInstrumentation = _hidl_this->isInstrumentationEnabled();
    const auto &mInstrumentationCallbacks = _hidl_this->getInstrumentationCallbacks();
    #endif // __ANDROID_DEBUGGABLE__

    ::android::status_t _hidl_err = ::android::OK;
    if (!_hidl_data.enforceInterface(BnHwComponent::Pure::descriptor)) {
        _hidl_err = ::android::BAD_TYPE;
        return _hidl_err;
    }

    uint64_t blockPoolId;
    ::android::sp<::android::hardware::graphics::bufferqueue::V2_0::IGraphicBufferProducer> surface;
    ::android::hardware::media::c2::V1_2::SurfaceSyncObj* syncObject;

    _hidl_err = _hidl_data.readUint64(&blockPoolId);
    if (_hidl_err != ::android::OK) { return _hidl_err; }

    {
        ::android::sp<::android::hardware::IBinder> _hidl_binder;
        _hidl_err = _hidl_data.readNullableStrongBinder(&_hidl_binder);
        if (_hidl_err != ::android::OK) { return _hidl_err; }

        surface = ::android::hardware::fromBinder<::android::hardware::graphics::bufferqueue::V2_0::IGraphicBufferProducer,::android::hardware::graphics::bufferqueue::V2_0::BpHwGraphicBufferProducer,::android::hardware::graphics::bufferqueue::V2_0::BnHwGraphicBufferProducer>(_hidl_binder);
    }

    size_t _hidl_syncObject_parent;

    _hidl_err = _hidl_data.readBuffer(sizeof(*syncObject), &_hidl_syncObject_parent,  const_cast<const void**>(reinterpret_cast<void **>(&syncObject)));
    if (_hidl_err != ::android::OK) { return _hidl_err; }

    _hidl_err = readEmbeddedFromParcel(
            const_cast<::android::hardware::media::c2::V1_2::SurfaceSyncObj &>(*syncObject),
            _hidl_data,
            _hidl_syncObject_parent,
            0 /* parentOffset */);

    if (_hidl_err != ::android::OK) { return _hidl_err; }

    atrace_begin(ATRACE_TAG_HAL, "HIDL::IComponent::setOutputSurfaceWithSyncObj::server");
    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        _hidl_args.push_back((void *)&blockPoolId);
        _hidl_args.push_back((void *)&surface);
        _hidl_args.push_back((void *)syncObject);
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::SERVER_API_ENTRY, "android.hardware.media.c2", "1.2", "IComponent", "setOutputSurfaceWithSyncObj", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    ::android::hardware::media::c2::V1_0::Status _hidl_out_status = static_cast<IComponent*>(_hidl_this->getImpl().get())->setOutputSurfaceWithSyncObj(blockPoolId, surface, *syncObject);

    ::android::hardware::writeToParcel(::android::hardware::Status::ok(), _hidl_reply);

    _hidl_err = _hidl_reply->writeInt32((int32_t)_hidl_out_status);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

_hidl_error:
    atrace_end(ATRACE_TAG_HAL);
    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        _hidl_args.push_back((void *)&_hidl_out_status);
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::SERVER_API_EXIT, "android.hardware.media.c2", "1.2", "IComponent", "setOutputSurfaceWithSyncObj", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    if (_hidl_err != ::android::OK) { return _hidl_err; }
    _hidl_cb(*_hidl_reply);
    return _hidl_err;
}


// Methods from ::android::hardware::media::c2::V1_0::IComponent follow.

// Methods from ::android::hardware::media::c2::V1_1::IComponent follow.

// Methods from ::android::hardware::media::c2::V1_2::IComponent follow.

// Methods from ::android::hidl::base::V1_0::IBase follow.
::android::hardware::Return<void> BnHwComponent::ping() {
    return ::android::hardware::Void();
}
::android::hardware::Return<void> BnHwComponent::getDebugInfo(getDebugInfo_cb _hidl_cb) {
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

::android::status_t BnHwComponent::onTransact(
        uint32_t _hidl_code,
        const ::android::hardware::Parcel &_hidl_data,
        ::android::hardware::Parcel *_hidl_reply,
        uint32_t _hidl_flags,
        TransactCallback _hidl_cb) {
    ::android::status_t _hidl_err = ::android::OK;

    switch (_hidl_code) {
        case 1 /* queue */:
        {
            _hidl_err = ::android::hardware::media::c2::V1_0::BnHwComponent::_hidl_queue(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 2 /* flush */:
        {
            _hidl_err = ::android::hardware::media::c2::V1_0::BnHwComponent::_hidl_flush(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 3 /* drain */:
        {
            _hidl_err = ::android::hardware::media::c2::V1_0::BnHwComponent::_hidl_drain(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 4 /* setOutputSurface */:
        {
            _hidl_err = ::android::hardware::media::c2::V1_0::BnHwComponent::_hidl_setOutputSurface(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 5 /* connectToInputSurface */:
        {
            _hidl_err = ::android::hardware::media::c2::V1_0::BnHwComponent::_hidl_connectToInputSurface(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 6 /* connectToOmxInputSurface */:
        {
            _hidl_err = ::android::hardware::media::c2::V1_0::BnHwComponent::_hidl_connectToOmxInputSurface(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 7 /* disconnectFromInputSurface */:
        {
            _hidl_err = ::android::hardware::media::c2::V1_0::BnHwComponent::_hidl_disconnectFromInputSurface(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 8 /* createBlockPool */:
        {
            _hidl_err = ::android::hardware::media::c2::V1_0::BnHwComponent::_hidl_createBlockPool(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 9 /* destroyBlockPool */:
        {
            _hidl_err = ::android::hardware::media::c2::V1_0::BnHwComponent::_hidl_destroyBlockPool(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 10 /* start */:
        {
            _hidl_err = ::android::hardware::media::c2::V1_0::BnHwComponent::_hidl_start(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 11 /* stop */:
        {
            _hidl_err = ::android::hardware::media::c2::V1_0::BnHwComponent::_hidl_stop(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 12 /* reset */:
        {
            _hidl_err = ::android::hardware::media::c2::V1_0::BnHwComponent::_hidl_reset(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 13 /* release */:
        {
            _hidl_err = ::android::hardware::media::c2::V1_0::BnHwComponent::_hidl_release(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 14 /* getInterface */:
        {
            _hidl_err = ::android::hardware::media::c2::V1_0::BnHwComponent::_hidl_getInterface(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 15 /* asInputSink */:
        {
            _hidl_err = ::android::hardware::media::c2::V1_0::BnHwComponent::_hidl_asInputSink(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 16 /* configureVideoTunnel */:
        {
            _hidl_err = ::android::hardware::media::c2::V1_1::BnHwComponent::_hidl_configureVideoTunnel(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 17 /* setOutputSurfaceWithSyncObj */:
        {
            _hidl_err = ::android::hardware::media::c2::V1_2::BnHwComponent::_hidl_setOutputSurfaceWithSyncObj(this, _hidl_data, _hidl_reply, _hidl_cb);
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

BsComponent::BsComponent(const ::android::sp<::android::hardware::media::c2::V1_2::IComponent> impl) : ::android::hardware::details::HidlInstrumentor("android.hardware.media.c2@1.2", "IComponent"), mImpl(impl) {
    mOnewayQueue.start(3000 /* similar limit to binderized */);
}

::android::hardware::Return<void> BsComponent::addOnewayTask(std::function<void(void)> fun) {
    if (!mOnewayQueue.push(fun)) {
        return ::android::hardware::Status::fromExceptionCode(
                ::android::hardware::Status::EX_TRANSACTION_FAILED,
                "Passthrough oneway function queue exceeds maximum size.");
    }
    return ::android::hardware::Status();
}

::android::sp<IComponent> IComponent::tryGetService(const std::string &serviceName, const bool getStub) {
    return ::android::hardware::details::getServiceInternal<BpHwComponent>(serviceName, false, getStub);
}

::android::sp<IComponent> IComponent::getService(const std::string &serviceName, const bool getStub) {
    return ::android::hardware::details::getServiceInternal<BpHwComponent>(serviceName, true, getStub);
}

::android::status_t IComponent::registerAsService(const std::string &serviceName) {
    return ::android::hardware::details::registerAsServiceInternal(this, serviceName);
}

bool IComponent::registerForNotifications(
        const std::string &serviceName,
        const ::android::sp<::android::hidl::manager::V1_0::IServiceNotification> &notification) {
    const ::android::sp<::android::hidl::manager::V1_0::IServiceManager> sm
            = ::android::hardware::defaultServiceManager();
    if (sm == nullptr) {
        return false;
    }
    ::android::hardware::Return<bool> success =
            sm->registerForNotifications("android.hardware.media.c2@1.2::IComponent",
                    serviceName, notification);
    return success.isOk() && success;
}

static_assert(sizeof(::android::hardware::MQDescriptor<char, ::android::hardware::kSynchronizedReadWrite>) == 32, "wrong size");
static_assert(sizeof(::android::hardware::hidl_handle) == 16, "wrong size");
static_assert(sizeof(::android::hardware::hidl_memory) == 40, "wrong size");
static_assert(sizeof(::android::hardware::hidl_string) == 16, "wrong size");
static_assert(sizeof(::android::hardware::hidl_vec<char>) == 16, "wrong size");

}  // namespace V1_2
}  // namespace c2
}  // namespace media
}  // namespace hardware
}  // namespace android
