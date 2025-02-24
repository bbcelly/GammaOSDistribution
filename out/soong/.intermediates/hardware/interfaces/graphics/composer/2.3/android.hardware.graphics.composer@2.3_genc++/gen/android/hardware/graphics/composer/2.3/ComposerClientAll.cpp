#define LOG_TAG "android.hardware.graphics.composer@2.3::ComposerClient"

#include <log/log.h>
#include <cutils/trace.h>
#include <hidl/HidlTransportSupport.h>

#include <hidl/Static.h>
#include <hwbinder/ProcessState.h>
#include <utils/Trace.h>
#include <android/hidl/manager/1.0/IServiceManager.h>
#include <android/hardware/graphics/composer/2.3/BpHwComposerClient.h>
#include <android/hardware/graphics/composer/2.3/BnHwComposerClient.h>
#include <android/hardware/graphics/composer/2.3/BsComposerClient.h>
#include <android/hardware/graphics/composer/2.2/BpHwComposerClient.h>
#include <android/hardware/graphics/composer/2.1/BpHwComposerClient.h>
#include <android/hidl/base/1.0/BpHwBase.h>
#include <hidl/ServiceManagement.h>

namespace android {
namespace hardware {
namespace graphics {
namespace composer {
namespace V2_3 {

::android::status_t readEmbeddedFromParcel(
        const IComposerClient::IComposerClient::PerFrameMetadataBlob &obj,
        const ::android::hardware::Parcel &parcel,
        size_t parentHandle,
        size_t parentOffset) {
    ::android::status_t _hidl_err = ::android::OK;

    size_t _hidl_blob_child;

    _hidl_err = ::android::hardware::readEmbeddedFromParcel(
            const_cast<::android::hardware::hidl_vec<uint8_t> &>(obj.blob),
            parcel,
            parentHandle,
            parentOffset + offsetof(::android::hardware::graphics::composer::V2_3::IComposerClient::PerFrameMetadataBlob, blob), &_hidl_blob_child);

    if (_hidl_err != ::android::OK) { return _hidl_err; }

    return _hidl_err;
}

::android::status_t writeEmbeddedToParcel(
        const IComposerClient::IComposerClient::PerFrameMetadataBlob &obj,
        ::android::hardware::Parcel *parcel,
        size_t parentHandle,
        size_t parentOffset) {
    ::android::status_t _hidl_err = ::android::OK;

    size_t _hidl_blob_child;

    _hidl_err = ::android::hardware::writeEmbeddedToParcel(
            obj.blob,
            parcel,
            parentHandle,
            parentOffset + offsetof(::android::hardware::graphics::composer::V2_3::IComposerClient::PerFrameMetadataBlob, blob), &_hidl_blob_child);

    if (_hidl_err != ::android::OK) { return _hidl_err; }

    return _hidl_err;
}

const char* IComposerClient::descriptor("android.hardware.graphics.composer@2.3::IComposerClient");

__attribute__((constructor)) static void static_constructor() {
    ::android::hardware::details::getBnConstructorMap().set(IComposerClient::descriptor,
            [](void *iIntf) -> ::android::sp<::android::hardware::IBinder> {
                return new BnHwComposerClient(static_cast<IComposerClient *>(iIntf));
            });
    ::android::hardware::details::getBsConstructorMap().set(IComposerClient::descriptor,
            [](void *iIntf) -> ::android::sp<::android::hidl::base::V1_0::IBase> {
                return new BsComposerClient(static_cast<IComposerClient *>(iIntf));
            });
}

__attribute__((destructor))static void static_destructor() {
    ::android::hardware::details::getBnConstructorMap().erase(IComposerClient::descriptor);
    ::android::hardware::details::getBsConstructorMap().erase(IComposerClient::descriptor);
}

// Methods from ::android::hardware::graphics::composer::V2_1::IComposerClient follow.
// no default implementation for: ::android::hardware::Return<void> IComposerClient::registerCallback(const ::android::sp<::android::hardware::graphics::composer::V2_1::IComposerCallback>& callback)
// no default implementation for: ::android::hardware::Return<uint32_t> IComposerClient::getMaxVirtualDisplayCount()
// no default implementation for: ::android::hardware::Return<void> IComposerClient::createVirtualDisplay(uint32_t width, uint32_t height, ::android::hardware::graphics::common::V1_0::PixelFormat formatHint, uint32_t outputBufferSlotCount, createVirtualDisplay_cb _hidl_cb)
// no default implementation for: ::android::hardware::Return<::android::hardware::graphics::composer::V2_1::Error> IComposerClient::destroyVirtualDisplay(uint64_t display)
// no default implementation for: ::android::hardware::Return<void> IComposerClient::createLayer(uint64_t display, uint32_t bufferSlotCount, createLayer_cb _hidl_cb)
// no default implementation for: ::android::hardware::Return<::android::hardware::graphics::composer::V2_1::Error> IComposerClient::destroyLayer(uint64_t display, uint64_t layer)
// no default implementation for: ::android::hardware::Return<void> IComposerClient::getActiveConfig(uint64_t display, getActiveConfig_cb _hidl_cb)
// no default implementation for: ::android::hardware::Return<::android::hardware::graphics::composer::V2_1::Error> IComposerClient::getClientTargetSupport(uint64_t display, uint32_t width, uint32_t height, ::android::hardware::graphics::common::V1_0::PixelFormat format, ::android::hardware::graphics::common::V1_0::Dataspace dataspace)
// no default implementation for: ::android::hardware::Return<void> IComposerClient::getColorModes(uint64_t display, getColorModes_cb _hidl_cb)
// no default implementation for: ::android::hardware::Return<void> IComposerClient::getDisplayAttribute(uint64_t display, uint32_t config, ::android::hardware::graphics::composer::V2_1::IComposerClient::Attribute attribute, getDisplayAttribute_cb _hidl_cb)
// no default implementation for: ::android::hardware::Return<void> IComposerClient::getDisplayConfigs(uint64_t display, getDisplayConfigs_cb _hidl_cb)
// no default implementation for: ::android::hardware::Return<void> IComposerClient::getDisplayName(uint64_t display, getDisplayName_cb _hidl_cb)
// no default implementation for: ::android::hardware::Return<void> IComposerClient::getDisplayType(uint64_t display, getDisplayType_cb _hidl_cb)
// no default implementation for: ::android::hardware::Return<void> IComposerClient::getDozeSupport(uint64_t display, getDozeSupport_cb _hidl_cb)
// no default implementation for: ::android::hardware::Return<void> IComposerClient::getHdrCapabilities(uint64_t display, getHdrCapabilities_cb _hidl_cb)
// no default implementation for: ::android::hardware::Return<::android::hardware::graphics::composer::V2_1::Error> IComposerClient::setClientTargetSlotCount(uint64_t display, uint32_t clientTargetSlotCount)
// no default implementation for: ::android::hardware::Return<::android::hardware::graphics::composer::V2_1::Error> IComposerClient::setActiveConfig(uint64_t display, uint32_t config)
// no default implementation for: ::android::hardware::Return<::android::hardware::graphics::composer::V2_1::Error> IComposerClient::setColorMode(uint64_t display, ::android::hardware::graphics::common::V1_0::ColorMode mode)
// no default implementation for: ::android::hardware::Return<::android::hardware::graphics::composer::V2_1::Error> IComposerClient::setPowerMode(uint64_t display, ::android::hardware::graphics::composer::V2_1::IComposerClient::PowerMode mode)
// no default implementation for: ::android::hardware::Return<::android::hardware::graphics::composer::V2_1::Error> IComposerClient::setVsyncEnabled(uint64_t display, ::android::hardware::graphics::composer::V2_1::IComposerClient::Vsync enabled)
// no default implementation for: ::android::hardware::Return<::android::hardware::graphics::composer::V2_1::Error> IComposerClient::setInputCommandQueue(const ::android::hardware::MQDescriptorSync<uint32_t>& descriptor)
// no default implementation for: ::android::hardware::Return<void> IComposerClient::getOutputCommandQueue(getOutputCommandQueue_cb _hidl_cb)
// no default implementation for: ::android::hardware::Return<void> IComposerClient::executeCommands(uint32_t inLength, const ::android::hardware::hidl_vec<::android::hardware::hidl_handle>& inHandles, executeCommands_cb _hidl_cb)

// Methods from ::android::hardware::graphics::composer::V2_2::IComposerClient follow.
// no default implementation for: ::android::hardware::Return<void> IComposerClient::getPerFrameMetadataKeys(uint64_t display, getPerFrameMetadataKeys_cb _hidl_cb)
// no default implementation for: ::android::hardware::Return<void> IComposerClient::getReadbackBufferAttributes(uint64_t display, getReadbackBufferAttributes_cb _hidl_cb)
// no default implementation for: ::android::hardware::Return<void> IComposerClient::getReadbackBufferFence(uint64_t display, getReadbackBufferFence_cb _hidl_cb)
// no default implementation for: ::android::hardware::Return<::android::hardware::graphics::composer::V2_1::Error> IComposerClient::setReadbackBuffer(uint64_t display, const ::android::hardware::hidl_handle& buffer, const ::android::hardware::hidl_handle& releaseFence)
// no default implementation for: ::android::hardware::Return<void> IComposerClient::createVirtualDisplay_2_2(uint32_t width, uint32_t height, ::android::hardware::graphics::common::V1_1::PixelFormat formatHint, uint32_t outputBufferSlotCount, createVirtualDisplay_2_2_cb _hidl_cb)
// no default implementation for: ::android::hardware::Return<::android::hardware::graphics::composer::V2_1::Error> IComposerClient::getClientTargetSupport_2_2(uint64_t display, uint32_t width, uint32_t height, ::android::hardware::graphics::common::V1_1::PixelFormat format, ::android::hardware::graphics::common::V1_1::Dataspace dataspace)
// no default implementation for: ::android::hardware::Return<::android::hardware::graphics::composer::V2_1::Error> IComposerClient::setPowerMode_2_2(uint64_t display, ::android::hardware::graphics::composer::V2_2::IComposerClient::PowerMode mode)
// no default implementation for: ::android::hardware::Return<void> IComposerClient::getColorModes_2_2(uint64_t display, getColorModes_2_2_cb _hidl_cb)
// no default implementation for: ::android::hardware::Return<void> IComposerClient::getRenderIntents(uint64_t display, ::android::hardware::graphics::common::V1_1::ColorMode mode, getRenderIntents_cb _hidl_cb)
// no default implementation for: ::android::hardware::Return<::android::hardware::graphics::composer::V2_1::Error> IComposerClient::setColorMode_2_2(uint64_t display, ::android::hardware::graphics::common::V1_1::ColorMode mode, ::android::hardware::graphics::common::V1_1::RenderIntent intent)
// no default implementation for: ::android::hardware::Return<void> IComposerClient::getDataspaceSaturationMatrix(::android::hardware::graphics::common::V1_1::Dataspace dataspace, getDataspaceSaturationMatrix_cb _hidl_cb)
// no default implementation for: ::android::hardware::Return<void> IComposerClient::executeCommands_2_2(uint32_t inLength, const ::android::hardware::hidl_vec<::android::hardware::hidl_handle>& inHandles, executeCommands_2_2_cb _hidl_cb)

// Methods from ::android::hardware::graphics::composer::V2_3::IComposerClient follow.
// no default implementation for: ::android::hardware::Return<void> IComposerClient::getDisplayIdentificationData(uint64_t display, getDisplayIdentificationData_cb _hidl_cb)
// no default implementation for: ::android::hardware::Return<void> IComposerClient::getReadbackBufferAttributes_2_3(uint64_t display, getReadbackBufferAttributes_2_3_cb _hidl_cb)
// no default implementation for: ::android::hardware::Return<::android::hardware::graphics::composer::V2_1::Error> IComposerClient::getClientTargetSupport_2_3(uint64_t display, uint32_t width, uint32_t height, ::android::hardware::graphics::common::V1_2::PixelFormat format, ::android::hardware::graphics::common::V1_2::Dataspace dataspace)
// no default implementation for: ::android::hardware::Return<void> IComposerClient::getDisplayedContentSamplingAttributes(uint64_t display, getDisplayedContentSamplingAttributes_cb _hidl_cb)
// no default implementation for: ::android::hardware::Return<::android::hardware::graphics::composer::V2_1::Error> IComposerClient::setDisplayedContentSamplingEnabled(uint64_t display, ::android::hardware::graphics::composer::V2_3::IComposerClient::DisplayedContentSampling enable, ::android::hardware::hidl_bitfield<::android::hardware::graphics::composer::V2_3::IComposerClient::FormatColorComponent> componentMask, uint64_t maxFrames)
// no default implementation for: ::android::hardware::Return<void> IComposerClient::getDisplayedContentSample(uint64_t display, uint64_t maxFrames, uint64_t timestamp, getDisplayedContentSample_cb _hidl_cb)
// no default implementation for: ::android::hardware::Return<void> IComposerClient::executeCommands_2_3(uint32_t inLength, const ::android::hardware::hidl_vec<::android::hardware::hidl_handle>& inHandles, executeCommands_2_3_cb _hidl_cb)
// no default implementation for: ::android::hardware::Return<void> IComposerClient::getRenderIntents_2_3(uint64_t display, ::android::hardware::graphics::common::V1_2::ColorMode mode, getRenderIntents_2_3_cb _hidl_cb)
// no default implementation for: ::android::hardware::Return<void> IComposerClient::getColorModes_2_3(uint64_t display, getColorModes_2_3_cb _hidl_cb)
// no default implementation for: ::android::hardware::Return<::android::hardware::graphics::composer::V2_1::Error> IComposerClient::setColorMode_2_3(uint64_t display, ::android::hardware::graphics::common::V1_2::ColorMode mode, ::android::hardware::graphics::common::V1_1::RenderIntent intent)
// no default implementation for: ::android::hardware::Return<void> IComposerClient::getDisplayCapabilities(uint64_t display, getDisplayCapabilities_cb _hidl_cb)
// no default implementation for: ::android::hardware::Return<void> IComposerClient::getPerFrameMetadataKeys_2_3(uint64_t display, getPerFrameMetadataKeys_2_3_cb _hidl_cb)
// no default implementation for: ::android::hardware::Return<void> IComposerClient::getHdrCapabilities_2_3(uint64_t display, getHdrCapabilities_2_3_cb _hidl_cb)
// no default implementation for: ::android::hardware::Return<void> IComposerClient::getDisplayBrightnessSupport(uint64_t display, getDisplayBrightnessSupport_cb _hidl_cb)
// no default implementation for: ::android::hardware::Return<::android::hardware::graphics::composer::V2_1::Error> IComposerClient::setDisplayBrightness(uint64_t display, float brightness)

// Methods from ::android::hidl::base::V1_0::IBase follow.
::android::hardware::Return<void> IComposerClient::interfaceChain(interfaceChain_cb _hidl_cb){
    _hidl_cb({
        ::android::hardware::graphics::composer::V2_3::IComposerClient::descriptor,
        ::android::hardware::graphics::composer::V2_2::IComposerClient::descriptor,
        ::android::hardware::graphics::composer::V2_1::IComposerClient::descriptor,
        ::android::hidl::base::V1_0::IBase::descriptor,
    });
    return ::android::hardware::Void();
}

::android::hardware::Return<void> IComposerClient::debug(const ::android::hardware::hidl_handle& fd, const ::android::hardware::hidl_vec<::android::hardware::hidl_string>& options){
    (void)fd;
    (void)options;
    return ::android::hardware::Void();
}

::android::hardware::Return<void> IComposerClient::interfaceDescriptor(interfaceDescriptor_cb _hidl_cb){
    _hidl_cb(::android::hardware::graphics::composer::V2_3::IComposerClient::descriptor);
    return ::android::hardware::Void();
}

::android::hardware::Return<void> IComposerClient::getHashChain(getHashChain_cb _hidl_cb){
    _hidl_cb({
        (uint8_t[32]){178,176,239,62,111,94,155,180,170,110,151,139,198,46,1,123,63,214,77,186,149,162,21,46,139,7,227,183,196,88,29,79} /* b2b0ef3e6f5e9bb4aa6e978bc62e017b3fd64dba95a2152e8b07e3b7c4581d4f */,
        (uint8_t[32]){162,241,131,247,252,199,154,171,237,174,241,16,149,171,34,58,172,14,213,239,152,77,133,8,147,135,37,21,231,245,96,199} /* a2f183f7fcc79aabedaef11095ab223aac0ed5ef984d850893872515e7f560c7 */,
        (uint8_t[32]){212,254,169,149,55,139,180,244,33,180,226,76,207,104,202,210,115,74,176,127,228,248,116,161,38,186,85,139,153,223,87,102} /* d4fea995378bb4f421b4e24ccf68cad2734ab07fe4f874a126ba558b99df5766 */,
        (uint8_t[32]){236,127,215,158,208,45,250,133,188,73,148,38,173,174,62,190,35,239,5,36,243,205,105,87,19,147,36,184,59,24,202,76} /* ec7fd79ed02dfa85bc499426adae3ebe23ef0524f3cd6957139324b83b18ca4c */});
    return ::android::hardware::Void();
}

::android::hardware::Return<void> IComposerClient::setHALInstrumentation(){
    return ::android::hardware::Void();
}

::android::hardware::Return<bool> IComposerClient::linkToDeath(const ::android::sp<::android::hardware::hidl_death_recipient>& recipient, uint64_t cookie){
    (void)cookie;
    return (recipient != nullptr);
}

::android::hardware::Return<void> IComposerClient::ping(){
    return ::android::hardware::Void();
}

::android::hardware::Return<void> IComposerClient::getDebugInfo(getDebugInfo_cb _hidl_cb){
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

::android::hardware::Return<void> IComposerClient::notifySyspropsChanged(){
    ::android::report_sysprop_change();
    return ::android::hardware::Void();
}

::android::hardware::Return<bool> IComposerClient::unlinkToDeath(const ::android::sp<::android::hardware::hidl_death_recipient>& recipient){
    return (recipient != nullptr);
}


::android::hardware::Return<::android::sp<::android::hardware::graphics::composer::V2_3::IComposerClient>> IComposerClient::castFrom(const ::android::sp<::android::hardware::graphics::composer::V2_3::IComposerClient>& parent, bool /* emitError */) {
    return parent;
}

::android::hardware::Return<::android::sp<::android::hardware::graphics::composer::V2_3::IComposerClient>> IComposerClient::castFrom(const ::android::sp<::android::hardware::graphics::composer::V2_2::IComposerClient>& parent, bool emitError) {
    return ::android::hardware::details::castInterface<IComposerClient, ::android::hardware::graphics::composer::V2_2::IComposerClient, BpHwComposerClient>(
            parent, "android.hardware.graphics.composer@2.3::IComposerClient", emitError);
}

::android::hardware::Return<::android::sp<::android::hardware::graphics::composer::V2_3::IComposerClient>> IComposerClient::castFrom(const ::android::sp<::android::hardware::graphics::composer::V2_1::IComposerClient>& parent, bool emitError) {
    return ::android::hardware::details::castInterface<IComposerClient, ::android::hardware::graphics::composer::V2_1::IComposerClient, BpHwComposerClient>(
            parent, "android.hardware.graphics.composer@2.3::IComposerClient", emitError);
}

::android::hardware::Return<::android::sp<::android::hardware::graphics::composer::V2_3::IComposerClient>> IComposerClient::castFrom(const ::android::sp<::android::hidl::base::V1_0::IBase>& parent, bool emitError) {
    return ::android::hardware::details::castInterface<IComposerClient, ::android::hidl::base::V1_0::IBase, BpHwComposerClient>(
            parent, "android.hardware.graphics.composer@2.3::IComposerClient", emitError);
}

BpHwComposerClient::BpHwComposerClient(const ::android::sp<::android::hardware::IBinder> &_hidl_impl)
        : BpInterface<IComposerClient>(_hidl_impl),
          ::android::hardware::details::HidlInstrumentor("android.hardware.graphics.composer@2.3", "IComposerClient") {
}

void BpHwComposerClient::onLastStrongRef(const void* id) {
    {
        std::unique_lock<std::mutex> lock(_hidl_mMutex);
        _hidl_mDeathRecipients.clear();
    }

    BpInterface<IComposerClient>::onLastStrongRef(id);
}
// Methods from ::android::hardware::graphics::composer::V2_3::IComposerClient follow.
::android::hardware::Return<void> BpHwComposerClient::_hidl_getDisplayIdentificationData(::android::hardware::IInterface *_hidl_this, ::android::hardware::details::HidlInstrumentor *_hidl_this_instrumentor, uint64_t display, getDisplayIdentificationData_cb _hidl_cb) {
    #ifdef __ANDROID_DEBUGGABLE__
    bool mEnableInstrumentation = _hidl_this_instrumentor->isInstrumentationEnabled();
    const auto &mInstrumentationCallbacks = _hidl_this_instrumentor->getInstrumentationCallbacks();
    #else
    (void) _hidl_this_instrumentor;
    #endif // __ANDROID_DEBUGGABLE__
    ::android::ScopedTrace PASTE(___tracer, __LINE__) (ATRACE_TAG_HAL, "HIDL::IComposerClient::getDisplayIdentificationData::client");
    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        _hidl_args.push_back((void *)&display);
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_ENTRY, "android.hardware.graphics.composer", "2.3", "IComposerClient", "getDisplayIdentificationData", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    ::android::hardware::Parcel _hidl_data;
    ::android::hardware::Parcel _hidl_reply;
    ::android::status_t _hidl_err;
    ::android::status_t _hidl_transact_err;
    ::android::hardware::Status _hidl_status;

    _hidl_err = _hidl_data.writeInterfaceToken(BpHwComposerClient::descriptor);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_err = _hidl_data.writeUint64(display);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_transact_err = ::android::hardware::IInterface::asBinder(_hidl_this)->transact(36 /* getDisplayIdentificationData */, _hidl_data, &_hidl_reply, 0 /* flags */, [&] (::android::hardware::Parcel& _hidl_reply) {
        ::android::hardware::graphics::composer::V2_1::Error _hidl_out_error;
        uint8_t _hidl_out_port;
        const ::android::hardware::hidl_vec<uint8_t>* _hidl_out_data;


        _hidl_err = ::android::hardware::readFromParcel(&_hidl_status, _hidl_reply);
        if (_hidl_err != ::android::OK) { return; }

        if (!_hidl_status.isOk()) { return; }

        _hidl_err = _hidl_reply.readInt32((int32_t *)&_hidl_out_error);
        if (_hidl_err != ::android::OK) { return; }

        _hidl_err = _hidl_reply.readUint8(&_hidl_out_port);
        if (_hidl_err != ::android::OK) { return; }

        size_t _hidl__hidl_out_data_parent;

        _hidl_err = _hidl_reply.readBuffer(sizeof(*_hidl_out_data), &_hidl__hidl_out_data_parent,  reinterpret_cast<const void **>(&_hidl_out_data));

        if (_hidl_err != ::android::OK) { return; }

        size_t _hidl__hidl_out_data_child;

        _hidl_err = ::android::hardware::readEmbeddedFromParcel(
                const_cast<::android::hardware::hidl_vec<uint8_t> &>(*_hidl_out_data),
                _hidl_reply,
                _hidl__hidl_out_data_parent,
                0 /* parentOffset */, &_hidl__hidl_out_data_child);

        if (_hidl_err != ::android::OK) { return; }

        _hidl_cb(_hidl_out_error, _hidl_out_port, *_hidl_out_data);

        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&_hidl_out_error);
            _hidl_args.push_back((void *)&_hidl_out_port);
            _hidl_args.push_back((void *)_hidl_out_data);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::CLIENT_API_EXIT, "android.hardware.graphics.composer", "2.3", "IComposerClient", "getDisplayIdentificationData", &_hidl_args);
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

::android::hardware::Return<void> BpHwComposerClient::_hidl_getReadbackBufferAttributes_2_3(::android::hardware::IInterface *_hidl_this, ::android::hardware::details::HidlInstrumentor *_hidl_this_instrumentor, uint64_t display, getReadbackBufferAttributes_2_3_cb _hidl_cb) {
    #ifdef __ANDROID_DEBUGGABLE__
    bool mEnableInstrumentation = _hidl_this_instrumentor->isInstrumentationEnabled();
    const auto &mInstrumentationCallbacks = _hidl_this_instrumentor->getInstrumentationCallbacks();
    #else
    (void) _hidl_this_instrumentor;
    #endif // __ANDROID_DEBUGGABLE__
    ::android::ScopedTrace PASTE(___tracer, __LINE__) (ATRACE_TAG_HAL, "HIDL::IComposerClient::getReadbackBufferAttributes_2_3::client");
    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        _hidl_args.push_back((void *)&display);
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_ENTRY, "android.hardware.graphics.composer", "2.3", "IComposerClient", "getReadbackBufferAttributes_2_3", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    ::android::hardware::Parcel _hidl_data;
    ::android::hardware::Parcel _hidl_reply;
    ::android::status_t _hidl_err;
    ::android::status_t _hidl_transact_err;
    ::android::hardware::Status _hidl_status;

    _hidl_err = _hidl_data.writeInterfaceToken(BpHwComposerClient::descriptor);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_err = _hidl_data.writeUint64(display);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_transact_err = ::android::hardware::IInterface::asBinder(_hidl_this)->transact(37 /* getReadbackBufferAttributes_2_3 */, _hidl_data, &_hidl_reply, 0 /* flags */, [&] (::android::hardware::Parcel& _hidl_reply) {
        ::android::hardware::graphics::composer::V2_1::Error _hidl_out_error;
        ::android::hardware::graphics::common::V1_2::PixelFormat _hidl_out_format;
        ::android::hardware::graphics::common::V1_2::Dataspace _hidl_out_dataspace;


        _hidl_err = ::android::hardware::readFromParcel(&_hidl_status, _hidl_reply);
        if (_hidl_err != ::android::OK) { return; }

        if (!_hidl_status.isOk()) { return; }

        _hidl_err = _hidl_reply.readInt32((int32_t *)&_hidl_out_error);
        if (_hidl_err != ::android::OK) { return; }

        _hidl_err = _hidl_reply.readInt32((int32_t *)&_hidl_out_format);
        if (_hidl_err != ::android::OK) { return; }

        _hidl_err = _hidl_reply.readInt32((int32_t *)&_hidl_out_dataspace);
        if (_hidl_err != ::android::OK) { return; }

        _hidl_cb(_hidl_out_error, _hidl_out_format, _hidl_out_dataspace);

        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&_hidl_out_error);
            _hidl_args.push_back((void *)&_hidl_out_format);
            _hidl_args.push_back((void *)&_hidl_out_dataspace);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::CLIENT_API_EXIT, "android.hardware.graphics.composer", "2.3", "IComposerClient", "getReadbackBufferAttributes_2_3", &_hidl_args);
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

::android::hardware::Return<::android::hardware::graphics::composer::V2_1::Error> BpHwComposerClient::_hidl_getClientTargetSupport_2_3(::android::hardware::IInterface *_hidl_this, ::android::hardware::details::HidlInstrumentor *_hidl_this_instrumentor, uint64_t display, uint32_t width, uint32_t height, ::android::hardware::graphics::common::V1_2::PixelFormat format, ::android::hardware::graphics::common::V1_2::Dataspace dataspace) {
    #ifdef __ANDROID_DEBUGGABLE__
    bool mEnableInstrumentation = _hidl_this_instrumentor->isInstrumentationEnabled();
    const auto &mInstrumentationCallbacks = _hidl_this_instrumentor->getInstrumentationCallbacks();
    #else
    (void) _hidl_this_instrumentor;
    #endif // __ANDROID_DEBUGGABLE__
    ::android::ScopedTrace PASTE(___tracer, __LINE__) (ATRACE_TAG_HAL, "HIDL::IComposerClient::getClientTargetSupport_2_3::client");
    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        _hidl_args.push_back((void *)&display);
        _hidl_args.push_back((void *)&width);
        _hidl_args.push_back((void *)&height);
        _hidl_args.push_back((void *)&format);
        _hidl_args.push_back((void *)&dataspace);
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_ENTRY, "android.hardware.graphics.composer", "2.3", "IComposerClient", "getClientTargetSupport_2_3", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    ::android::hardware::Parcel _hidl_data;
    ::android::hardware::Parcel _hidl_reply;
    ::android::status_t _hidl_err;
    ::android::status_t _hidl_transact_err;
    ::android::hardware::Status _hidl_status;

    ::android::hardware::graphics::composer::V2_1::Error _hidl_out_error;

    _hidl_err = _hidl_data.writeInterfaceToken(BpHwComposerClient::descriptor);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_err = _hidl_data.writeUint64(display);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_err = _hidl_data.writeUint32(width);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_err = _hidl_data.writeUint32(height);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_err = _hidl_data.writeInt32((int32_t)format);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_err = _hidl_data.writeInt32((int32_t)dataspace);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_transact_err = ::android::hardware::IInterface::asBinder(_hidl_this)->transact(38 /* getClientTargetSupport_2_3 */, _hidl_data, &_hidl_reply, 0 /* flags */);
    if (_hidl_transact_err != ::android::OK) 
    {
        _hidl_err = _hidl_transact_err;
        goto _hidl_error;
    }

    _hidl_err = ::android::hardware::readFromParcel(&_hidl_status, _hidl_reply);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    if (!_hidl_status.isOk()) { return _hidl_status; }

    _hidl_err = _hidl_reply.readInt32((int32_t *)&_hidl_out_error);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        _hidl_args.push_back((void *)&_hidl_out_error);
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_EXIT, "android.hardware.graphics.composer", "2.3", "IComposerClient", "getClientTargetSupport_2_3", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    return ::android::hardware::Return<::android::hardware::graphics::composer::V2_1::Error>(_hidl_out_error);

_hidl_error:
    _hidl_status.setFromStatusT(_hidl_err);
    return ::android::hardware::Return<::android::hardware::graphics::composer::V2_1::Error>(_hidl_status);
}

::android::hardware::Return<void> BpHwComposerClient::_hidl_getDisplayedContentSamplingAttributes(::android::hardware::IInterface *_hidl_this, ::android::hardware::details::HidlInstrumentor *_hidl_this_instrumentor, uint64_t display, getDisplayedContentSamplingAttributes_cb _hidl_cb) {
    #ifdef __ANDROID_DEBUGGABLE__
    bool mEnableInstrumentation = _hidl_this_instrumentor->isInstrumentationEnabled();
    const auto &mInstrumentationCallbacks = _hidl_this_instrumentor->getInstrumentationCallbacks();
    #else
    (void) _hidl_this_instrumentor;
    #endif // __ANDROID_DEBUGGABLE__
    ::android::ScopedTrace PASTE(___tracer, __LINE__) (ATRACE_TAG_HAL, "HIDL::IComposerClient::getDisplayedContentSamplingAttributes::client");
    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        _hidl_args.push_back((void *)&display);
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_ENTRY, "android.hardware.graphics.composer", "2.3", "IComposerClient", "getDisplayedContentSamplingAttributes", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    ::android::hardware::Parcel _hidl_data;
    ::android::hardware::Parcel _hidl_reply;
    ::android::status_t _hidl_err;
    ::android::status_t _hidl_transact_err;
    ::android::hardware::Status _hidl_status;

    _hidl_err = _hidl_data.writeInterfaceToken(BpHwComposerClient::descriptor);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_err = _hidl_data.writeUint64(display);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_transact_err = ::android::hardware::IInterface::asBinder(_hidl_this)->transact(39 /* getDisplayedContentSamplingAttributes */, _hidl_data, &_hidl_reply, 0 /* flags */, [&] (::android::hardware::Parcel& _hidl_reply) {
        ::android::hardware::graphics::composer::V2_1::Error _hidl_out_error;
        ::android::hardware::graphics::common::V1_2::PixelFormat _hidl_out_format;
        ::android::hardware::graphics::common::V1_2::Dataspace _hidl_out_dataspace;
        ::android::hardware::hidl_bitfield<::android::hardware::graphics::composer::V2_3::IComposerClient::FormatColorComponent> _hidl_out_componentMask;


        _hidl_err = ::android::hardware::readFromParcel(&_hidl_status, _hidl_reply);
        if (_hidl_err != ::android::OK) { return; }

        if (!_hidl_status.isOk()) { return; }

        _hidl_err = _hidl_reply.readInt32((int32_t *)&_hidl_out_error);
        if (_hidl_err != ::android::OK) { return; }

        _hidl_err = _hidl_reply.readInt32((int32_t *)&_hidl_out_format);
        if (_hidl_err != ::android::OK) { return; }

        _hidl_err = _hidl_reply.readInt32((int32_t *)&_hidl_out_dataspace);
        if (_hidl_err != ::android::OK) { return; }

        _hidl_err = _hidl_reply.readUint8((uint8_t *)&_hidl_out_componentMask);
        if (_hidl_err != ::android::OK) { return; }

        _hidl_cb(_hidl_out_error, _hidl_out_format, _hidl_out_dataspace, _hidl_out_componentMask);

        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&_hidl_out_error);
            _hidl_args.push_back((void *)&_hidl_out_format);
            _hidl_args.push_back((void *)&_hidl_out_dataspace);
            _hidl_args.push_back((void *)&_hidl_out_componentMask);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::CLIENT_API_EXIT, "android.hardware.graphics.composer", "2.3", "IComposerClient", "getDisplayedContentSamplingAttributes", &_hidl_args);
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

::android::hardware::Return<::android::hardware::graphics::composer::V2_1::Error> BpHwComposerClient::_hidl_setDisplayedContentSamplingEnabled(::android::hardware::IInterface *_hidl_this, ::android::hardware::details::HidlInstrumentor *_hidl_this_instrumentor, uint64_t display, ::android::hardware::graphics::composer::V2_3::IComposerClient::DisplayedContentSampling enable, ::android::hardware::hidl_bitfield<::android::hardware::graphics::composer::V2_3::IComposerClient::FormatColorComponent> componentMask, uint64_t maxFrames) {
    #ifdef __ANDROID_DEBUGGABLE__
    bool mEnableInstrumentation = _hidl_this_instrumentor->isInstrumentationEnabled();
    const auto &mInstrumentationCallbacks = _hidl_this_instrumentor->getInstrumentationCallbacks();
    #else
    (void) _hidl_this_instrumentor;
    #endif // __ANDROID_DEBUGGABLE__
    ::android::ScopedTrace PASTE(___tracer, __LINE__) (ATRACE_TAG_HAL, "HIDL::IComposerClient::setDisplayedContentSamplingEnabled::client");
    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        _hidl_args.push_back((void *)&display);
        _hidl_args.push_back((void *)&enable);
        _hidl_args.push_back((void *)&componentMask);
        _hidl_args.push_back((void *)&maxFrames);
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_ENTRY, "android.hardware.graphics.composer", "2.3", "IComposerClient", "setDisplayedContentSamplingEnabled", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    ::android::hardware::Parcel _hidl_data;
    ::android::hardware::Parcel _hidl_reply;
    ::android::status_t _hidl_err;
    ::android::status_t _hidl_transact_err;
    ::android::hardware::Status _hidl_status;

    ::android::hardware::graphics::composer::V2_1::Error _hidl_out_error;

    _hidl_err = _hidl_data.writeInterfaceToken(BpHwComposerClient::descriptor);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_err = _hidl_data.writeUint64(display);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_err = _hidl_data.writeInt32((int32_t)enable);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_err = _hidl_data.writeUint8((uint8_t)componentMask);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_err = _hidl_data.writeUint64(maxFrames);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_transact_err = ::android::hardware::IInterface::asBinder(_hidl_this)->transact(40 /* setDisplayedContentSamplingEnabled */, _hidl_data, &_hidl_reply, 0 /* flags */);
    if (_hidl_transact_err != ::android::OK) 
    {
        _hidl_err = _hidl_transact_err;
        goto _hidl_error;
    }

    _hidl_err = ::android::hardware::readFromParcel(&_hidl_status, _hidl_reply);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    if (!_hidl_status.isOk()) { return _hidl_status; }

    _hidl_err = _hidl_reply.readInt32((int32_t *)&_hidl_out_error);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        _hidl_args.push_back((void *)&_hidl_out_error);
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_EXIT, "android.hardware.graphics.composer", "2.3", "IComposerClient", "setDisplayedContentSamplingEnabled", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    return ::android::hardware::Return<::android::hardware::graphics::composer::V2_1::Error>(_hidl_out_error);

_hidl_error:
    _hidl_status.setFromStatusT(_hidl_err);
    return ::android::hardware::Return<::android::hardware::graphics::composer::V2_1::Error>(_hidl_status);
}

::android::hardware::Return<void> BpHwComposerClient::_hidl_getDisplayedContentSample(::android::hardware::IInterface *_hidl_this, ::android::hardware::details::HidlInstrumentor *_hidl_this_instrumentor, uint64_t display, uint64_t maxFrames, uint64_t timestamp, getDisplayedContentSample_cb _hidl_cb) {
    #ifdef __ANDROID_DEBUGGABLE__
    bool mEnableInstrumentation = _hidl_this_instrumentor->isInstrumentationEnabled();
    const auto &mInstrumentationCallbacks = _hidl_this_instrumentor->getInstrumentationCallbacks();
    #else
    (void) _hidl_this_instrumentor;
    #endif // __ANDROID_DEBUGGABLE__
    ::android::ScopedTrace PASTE(___tracer, __LINE__) (ATRACE_TAG_HAL, "HIDL::IComposerClient::getDisplayedContentSample::client");
    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        _hidl_args.push_back((void *)&display);
        _hidl_args.push_back((void *)&maxFrames);
        _hidl_args.push_back((void *)&timestamp);
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_ENTRY, "android.hardware.graphics.composer", "2.3", "IComposerClient", "getDisplayedContentSample", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    ::android::hardware::Parcel _hidl_data;
    ::android::hardware::Parcel _hidl_reply;
    ::android::status_t _hidl_err;
    ::android::status_t _hidl_transact_err;
    ::android::hardware::Status _hidl_status;

    _hidl_err = _hidl_data.writeInterfaceToken(BpHwComposerClient::descriptor);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_err = _hidl_data.writeUint64(display);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_err = _hidl_data.writeUint64(maxFrames);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_err = _hidl_data.writeUint64(timestamp);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_transact_err = ::android::hardware::IInterface::asBinder(_hidl_this)->transact(41 /* getDisplayedContentSample */, _hidl_data, &_hidl_reply, 0 /* flags */, [&] (::android::hardware::Parcel& _hidl_reply) {
        ::android::hardware::graphics::composer::V2_1::Error _hidl_out_error;
        uint64_t _hidl_out_frameCount;
        const ::android::hardware::hidl_vec<uint64_t>* _hidl_out_sampleComponent0;
        const ::android::hardware::hidl_vec<uint64_t>* _hidl_out_sampleComponent1;
        const ::android::hardware::hidl_vec<uint64_t>* _hidl_out_sampleComponent2;
        const ::android::hardware::hidl_vec<uint64_t>* _hidl_out_sampleComponent3;


        _hidl_err = ::android::hardware::readFromParcel(&_hidl_status, _hidl_reply);
        if (_hidl_err != ::android::OK) { return; }

        if (!_hidl_status.isOk()) { return; }

        _hidl_err = _hidl_reply.readInt32((int32_t *)&_hidl_out_error);
        if (_hidl_err != ::android::OK) { return; }

        _hidl_err = _hidl_reply.readUint64(&_hidl_out_frameCount);
        if (_hidl_err != ::android::OK) { return; }

        size_t _hidl__hidl_out_sampleComponent0_parent;

        _hidl_err = _hidl_reply.readBuffer(sizeof(*_hidl_out_sampleComponent0), &_hidl__hidl_out_sampleComponent0_parent,  reinterpret_cast<const void **>(&_hidl_out_sampleComponent0));

        if (_hidl_err != ::android::OK) { return; }

        size_t _hidl__hidl_out_sampleComponent0_child;

        _hidl_err = ::android::hardware::readEmbeddedFromParcel(
                const_cast<::android::hardware::hidl_vec<uint64_t> &>(*_hidl_out_sampleComponent0),
                _hidl_reply,
                _hidl__hidl_out_sampleComponent0_parent,
                0 /* parentOffset */, &_hidl__hidl_out_sampleComponent0_child);

        if (_hidl_err != ::android::OK) { return; }

        size_t _hidl__hidl_out_sampleComponent1_parent;

        _hidl_err = _hidl_reply.readBuffer(sizeof(*_hidl_out_sampleComponent1), &_hidl__hidl_out_sampleComponent1_parent,  reinterpret_cast<const void **>(&_hidl_out_sampleComponent1));

        if (_hidl_err != ::android::OK) { return; }

        size_t _hidl__hidl_out_sampleComponent1_child;

        _hidl_err = ::android::hardware::readEmbeddedFromParcel(
                const_cast<::android::hardware::hidl_vec<uint64_t> &>(*_hidl_out_sampleComponent1),
                _hidl_reply,
                _hidl__hidl_out_sampleComponent1_parent,
                0 /* parentOffset */, &_hidl__hidl_out_sampleComponent1_child);

        if (_hidl_err != ::android::OK) { return; }

        size_t _hidl__hidl_out_sampleComponent2_parent;

        _hidl_err = _hidl_reply.readBuffer(sizeof(*_hidl_out_sampleComponent2), &_hidl__hidl_out_sampleComponent2_parent,  reinterpret_cast<const void **>(&_hidl_out_sampleComponent2));

        if (_hidl_err != ::android::OK) { return; }

        size_t _hidl__hidl_out_sampleComponent2_child;

        _hidl_err = ::android::hardware::readEmbeddedFromParcel(
                const_cast<::android::hardware::hidl_vec<uint64_t> &>(*_hidl_out_sampleComponent2),
                _hidl_reply,
                _hidl__hidl_out_sampleComponent2_parent,
                0 /* parentOffset */, &_hidl__hidl_out_sampleComponent2_child);

        if (_hidl_err != ::android::OK) { return; }

        size_t _hidl__hidl_out_sampleComponent3_parent;

        _hidl_err = _hidl_reply.readBuffer(sizeof(*_hidl_out_sampleComponent3), &_hidl__hidl_out_sampleComponent3_parent,  reinterpret_cast<const void **>(&_hidl_out_sampleComponent3));

        if (_hidl_err != ::android::OK) { return; }

        size_t _hidl__hidl_out_sampleComponent3_child;

        _hidl_err = ::android::hardware::readEmbeddedFromParcel(
                const_cast<::android::hardware::hidl_vec<uint64_t> &>(*_hidl_out_sampleComponent3),
                _hidl_reply,
                _hidl__hidl_out_sampleComponent3_parent,
                0 /* parentOffset */, &_hidl__hidl_out_sampleComponent3_child);

        if (_hidl_err != ::android::OK) { return; }

        _hidl_cb(_hidl_out_error, _hidl_out_frameCount, *_hidl_out_sampleComponent0, *_hidl_out_sampleComponent1, *_hidl_out_sampleComponent2, *_hidl_out_sampleComponent3);

        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&_hidl_out_error);
            _hidl_args.push_back((void *)&_hidl_out_frameCount);
            _hidl_args.push_back((void *)_hidl_out_sampleComponent0);
            _hidl_args.push_back((void *)_hidl_out_sampleComponent1);
            _hidl_args.push_back((void *)_hidl_out_sampleComponent2);
            _hidl_args.push_back((void *)_hidl_out_sampleComponent3);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::CLIENT_API_EXIT, "android.hardware.graphics.composer", "2.3", "IComposerClient", "getDisplayedContentSample", &_hidl_args);
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

::android::hardware::Return<void> BpHwComposerClient::_hidl_executeCommands_2_3(::android::hardware::IInterface *_hidl_this, ::android::hardware::details::HidlInstrumentor *_hidl_this_instrumentor, uint32_t inLength, const ::android::hardware::hidl_vec<::android::hardware::hidl_handle>& inHandles, executeCommands_2_3_cb _hidl_cb) {
    #ifdef __ANDROID_DEBUGGABLE__
    bool mEnableInstrumentation = _hidl_this_instrumentor->isInstrumentationEnabled();
    const auto &mInstrumentationCallbacks = _hidl_this_instrumentor->getInstrumentationCallbacks();
    #else
    (void) _hidl_this_instrumentor;
    #endif // __ANDROID_DEBUGGABLE__
    ::android::ScopedTrace PASTE(___tracer, __LINE__) (ATRACE_TAG_HAL, "HIDL::IComposerClient::executeCommands_2_3::client");
    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        _hidl_args.push_back((void *)&inLength);
        _hidl_args.push_back((void *)&inHandles);
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_ENTRY, "android.hardware.graphics.composer", "2.3", "IComposerClient", "executeCommands_2_3", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    ::android::hardware::Parcel _hidl_data;
    ::android::hardware::Parcel _hidl_reply;
    ::android::status_t _hidl_err;
    ::android::status_t _hidl_transact_err;
    ::android::hardware::Status _hidl_status;

    _hidl_err = _hidl_data.writeInterfaceToken(BpHwComposerClient::descriptor);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_err = _hidl_data.writeUint32(inLength);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    size_t _hidl_inHandles_parent;

    _hidl_err = _hidl_data.writeBuffer(&inHandles, sizeof(inHandles), &_hidl_inHandles_parent);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    size_t _hidl_inHandles_child;

    _hidl_err = ::android::hardware::writeEmbeddedToParcel(
            inHandles,
            &_hidl_data,
            _hidl_inHandles_parent,
            0 /* parentOffset */, &_hidl_inHandles_child);

    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    for (size_t _hidl_index_0 = 0; _hidl_index_0 < inHandles.size(); ++_hidl_index_0) {
        _hidl_err = ::android::hardware::writeEmbeddedToParcel(
                inHandles[_hidl_index_0],
                &_hidl_data,
                _hidl_inHandles_child,
                _hidl_index_0 * sizeof(::android::hardware::hidl_handle));

        if (_hidl_err != ::android::OK) { goto _hidl_error; }

    }

    _hidl_transact_err = ::android::hardware::IInterface::asBinder(_hidl_this)->transact(42 /* executeCommands_2_3 */, _hidl_data, &_hidl_reply, 0 /* flags */, [&] (::android::hardware::Parcel& _hidl_reply) {
        ::android::hardware::graphics::composer::V2_1::Error _hidl_out_error;
        bool _hidl_out_outQueueChanged;
        uint32_t _hidl_out_outLength;
        const ::android::hardware::hidl_vec<::android::hardware::hidl_handle>* _hidl_out_outHandles;


        _hidl_err = ::android::hardware::readFromParcel(&_hidl_status, _hidl_reply);
        if (_hidl_err != ::android::OK) { return; }

        if (!_hidl_status.isOk()) { return; }

        _hidl_err = _hidl_reply.readInt32((int32_t *)&_hidl_out_error);
        if (_hidl_err != ::android::OK) { return; }

        _hidl_err = _hidl_reply.readBool(&_hidl_out_outQueueChanged);
        if (_hidl_err != ::android::OK) { return; }

        _hidl_err = _hidl_reply.readUint32(&_hidl_out_outLength);
        if (_hidl_err != ::android::OK) { return; }

        size_t _hidl__hidl_out_outHandles_parent;

        _hidl_err = _hidl_reply.readBuffer(sizeof(*_hidl_out_outHandles), &_hidl__hidl_out_outHandles_parent,  reinterpret_cast<const void **>(&_hidl_out_outHandles));

        if (_hidl_err != ::android::OK) { return; }

        size_t _hidl__hidl_out_outHandles_child;

        _hidl_err = ::android::hardware::readEmbeddedFromParcel(
                const_cast<::android::hardware::hidl_vec<::android::hardware::hidl_handle> &>(*_hidl_out_outHandles),
                _hidl_reply,
                _hidl__hidl_out_outHandles_parent,
                0 /* parentOffset */, &_hidl__hidl_out_outHandles_child);

        if (_hidl_err != ::android::OK) { return; }

        for (size_t _hidl_index_0 = 0; _hidl_index_0 < _hidl_out_outHandles->size(); ++_hidl_index_0) {
            _hidl_err = ::android::hardware::readEmbeddedFromParcel(
                    const_cast<::android::hardware::hidl_handle &>((*_hidl_out_outHandles)[_hidl_index_0]),
                    _hidl_reply,
                    _hidl__hidl_out_outHandles_child,
                    _hidl_index_0 * sizeof(::android::hardware::hidl_handle));

            if (_hidl_err != ::android::OK) { return; }

        }

        _hidl_cb(_hidl_out_error, _hidl_out_outQueueChanged, _hidl_out_outLength, *_hidl_out_outHandles);

        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&_hidl_out_error);
            _hidl_args.push_back((void *)&_hidl_out_outQueueChanged);
            _hidl_args.push_back((void *)&_hidl_out_outLength);
            _hidl_args.push_back((void *)_hidl_out_outHandles);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::CLIENT_API_EXIT, "android.hardware.graphics.composer", "2.3", "IComposerClient", "executeCommands_2_3", &_hidl_args);
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

::android::hardware::Return<void> BpHwComposerClient::_hidl_getRenderIntents_2_3(::android::hardware::IInterface *_hidl_this, ::android::hardware::details::HidlInstrumentor *_hidl_this_instrumentor, uint64_t display, ::android::hardware::graphics::common::V1_2::ColorMode mode, getRenderIntents_2_3_cb _hidl_cb) {
    #ifdef __ANDROID_DEBUGGABLE__
    bool mEnableInstrumentation = _hidl_this_instrumentor->isInstrumentationEnabled();
    const auto &mInstrumentationCallbacks = _hidl_this_instrumentor->getInstrumentationCallbacks();
    #else
    (void) _hidl_this_instrumentor;
    #endif // __ANDROID_DEBUGGABLE__
    ::android::ScopedTrace PASTE(___tracer, __LINE__) (ATRACE_TAG_HAL, "HIDL::IComposerClient::getRenderIntents_2_3::client");
    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        _hidl_args.push_back((void *)&display);
        _hidl_args.push_back((void *)&mode);
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_ENTRY, "android.hardware.graphics.composer", "2.3", "IComposerClient", "getRenderIntents_2_3", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    ::android::hardware::Parcel _hidl_data;
    ::android::hardware::Parcel _hidl_reply;
    ::android::status_t _hidl_err;
    ::android::status_t _hidl_transact_err;
    ::android::hardware::Status _hidl_status;

    _hidl_err = _hidl_data.writeInterfaceToken(BpHwComposerClient::descriptor);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_err = _hidl_data.writeUint64(display);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_err = _hidl_data.writeInt32((int32_t)mode);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_transact_err = ::android::hardware::IInterface::asBinder(_hidl_this)->transact(43 /* getRenderIntents_2_3 */, _hidl_data, &_hidl_reply, 0 /* flags */, [&] (::android::hardware::Parcel& _hidl_reply) {
        ::android::hardware::graphics::composer::V2_1::Error _hidl_out_error;
        const ::android::hardware::hidl_vec<::android::hardware::graphics::common::V1_1::RenderIntent>* _hidl_out_intents;


        _hidl_err = ::android::hardware::readFromParcel(&_hidl_status, _hidl_reply);
        if (_hidl_err != ::android::OK) { return; }

        if (!_hidl_status.isOk()) { return; }

        _hidl_err = _hidl_reply.readInt32((int32_t *)&_hidl_out_error);
        if (_hidl_err != ::android::OK) { return; }

        size_t _hidl__hidl_out_intents_parent;

        _hidl_err = _hidl_reply.readBuffer(sizeof(*_hidl_out_intents), &_hidl__hidl_out_intents_parent,  reinterpret_cast<const void **>(&_hidl_out_intents));

        if (_hidl_err != ::android::OK) { return; }

        size_t _hidl__hidl_out_intents_child;

        _hidl_err = ::android::hardware::readEmbeddedFromParcel(
                const_cast<::android::hardware::hidl_vec<::android::hardware::graphics::common::V1_1::RenderIntent> &>(*_hidl_out_intents),
                _hidl_reply,
                _hidl__hidl_out_intents_parent,
                0 /* parentOffset */, &_hidl__hidl_out_intents_child);

        if (_hidl_err != ::android::OK) { return; }

        _hidl_cb(_hidl_out_error, *_hidl_out_intents);

        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&_hidl_out_error);
            _hidl_args.push_back((void *)_hidl_out_intents);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::CLIENT_API_EXIT, "android.hardware.graphics.composer", "2.3", "IComposerClient", "getRenderIntents_2_3", &_hidl_args);
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

::android::hardware::Return<void> BpHwComposerClient::_hidl_getColorModes_2_3(::android::hardware::IInterface *_hidl_this, ::android::hardware::details::HidlInstrumentor *_hidl_this_instrumentor, uint64_t display, getColorModes_2_3_cb _hidl_cb) {
    #ifdef __ANDROID_DEBUGGABLE__
    bool mEnableInstrumentation = _hidl_this_instrumentor->isInstrumentationEnabled();
    const auto &mInstrumentationCallbacks = _hidl_this_instrumentor->getInstrumentationCallbacks();
    #else
    (void) _hidl_this_instrumentor;
    #endif // __ANDROID_DEBUGGABLE__
    ::android::ScopedTrace PASTE(___tracer, __LINE__) (ATRACE_TAG_HAL, "HIDL::IComposerClient::getColorModes_2_3::client");
    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        _hidl_args.push_back((void *)&display);
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_ENTRY, "android.hardware.graphics.composer", "2.3", "IComposerClient", "getColorModes_2_3", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    ::android::hardware::Parcel _hidl_data;
    ::android::hardware::Parcel _hidl_reply;
    ::android::status_t _hidl_err;
    ::android::status_t _hidl_transact_err;
    ::android::hardware::Status _hidl_status;

    _hidl_err = _hidl_data.writeInterfaceToken(BpHwComposerClient::descriptor);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_err = _hidl_data.writeUint64(display);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_transact_err = ::android::hardware::IInterface::asBinder(_hidl_this)->transact(44 /* getColorModes_2_3 */, _hidl_data, &_hidl_reply, 0 /* flags */, [&] (::android::hardware::Parcel& _hidl_reply) {
        ::android::hardware::graphics::composer::V2_1::Error _hidl_out_error;
        const ::android::hardware::hidl_vec<::android::hardware::graphics::common::V1_2::ColorMode>* _hidl_out_modes;


        _hidl_err = ::android::hardware::readFromParcel(&_hidl_status, _hidl_reply);
        if (_hidl_err != ::android::OK) { return; }

        if (!_hidl_status.isOk()) { return; }

        _hidl_err = _hidl_reply.readInt32((int32_t *)&_hidl_out_error);
        if (_hidl_err != ::android::OK) { return; }

        size_t _hidl__hidl_out_modes_parent;

        _hidl_err = _hidl_reply.readBuffer(sizeof(*_hidl_out_modes), &_hidl__hidl_out_modes_parent,  reinterpret_cast<const void **>(&_hidl_out_modes));

        if (_hidl_err != ::android::OK) { return; }

        size_t _hidl__hidl_out_modes_child;

        _hidl_err = ::android::hardware::readEmbeddedFromParcel(
                const_cast<::android::hardware::hidl_vec<::android::hardware::graphics::common::V1_2::ColorMode> &>(*_hidl_out_modes),
                _hidl_reply,
                _hidl__hidl_out_modes_parent,
                0 /* parentOffset */, &_hidl__hidl_out_modes_child);

        if (_hidl_err != ::android::OK) { return; }

        _hidl_cb(_hidl_out_error, *_hidl_out_modes);

        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&_hidl_out_error);
            _hidl_args.push_back((void *)_hidl_out_modes);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::CLIENT_API_EXIT, "android.hardware.graphics.composer", "2.3", "IComposerClient", "getColorModes_2_3", &_hidl_args);
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

::android::hardware::Return<::android::hardware::graphics::composer::V2_1::Error> BpHwComposerClient::_hidl_setColorMode_2_3(::android::hardware::IInterface *_hidl_this, ::android::hardware::details::HidlInstrumentor *_hidl_this_instrumentor, uint64_t display, ::android::hardware::graphics::common::V1_2::ColorMode mode, ::android::hardware::graphics::common::V1_1::RenderIntent intent) {
    #ifdef __ANDROID_DEBUGGABLE__
    bool mEnableInstrumentation = _hidl_this_instrumentor->isInstrumentationEnabled();
    const auto &mInstrumentationCallbacks = _hidl_this_instrumentor->getInstrumentationCallbacks();
    #else
    (void) _hidl_this_instrumentor;
    #endif // __ANDROID_DEBUGGABLE__
    ::android::ScopedTrace PASTE(___tracer, __LINE__) (ATRACE_TAG_HAL, "HIDL::IComposerClient::setColorMode_2_3::client");
    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        _hidl_args.push_back((void *)&display);
        _hidl_args.push_back((void *)&mode);
        _hidl_args.push_back((void *)&intent);
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_ENTRY, "android.hardware.graphics.composer", "2.3", "IComposerClient", "setColorMode_2_3", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    ::android::hardware::Parcel _hidl_data;
    ::android::hardware::Parcel _hidl_reply;
    ::android::status_t _hidl_err;
    ::android::status_t _hidl_transact_err;
    ::android::hardware::Status _hidl_status;

    ::android::hardware::graphics::composer::V2_1::Error _hidl_out_error;

    _hidl_err = _hidl_data.writeInterfaceToken(BpHwComposerClient::descriptor);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_err = _hidl_data.writeUint64(display);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_err = _hidl_data.writeInt32((int32_t)mode);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_err = _hidl_data.writeInt32((int32_t)intent);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_transact_err = ::android::hardware::IInterface::asBinder(_hidl_this)->transact(45 /* setColorMode_2_3 */, _hidl_data, &_hidl_reply, 0 /* flags */);
    if (_hidl_transact_err != ::android::OK) 
    {
        _hidl_err = _hidl_transact_err;
        goto _hidl_error;
    }

    _hidl_err = ::android::hardware::readFromParcel(&_hidl_status, _hidl_reply);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    if (!_hidl_status.isOk()) { return _hidl_status; }

    _hidl_err = _hidl_reply.readInt32((int32_t *)&_hidl_out_error);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        _hidl_args.push_back((void *)&_hidl_out_error);
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_EXIT, "android.hardware.graphics.composer", "2.3", "IComposerClient", "setColorMode_2_3", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    return ::android::hardware::Return<::android::hardware::graphics::composer::V2_1::Error>(_hidl_out_error);

_hidl_error:
    _hidl_status.setFromStatusT(_hidl_err);
    return ::android::hardware::Return<::android::hardware::graphics::composer::V2_1::Error>(_hidl_status);
}

::android::hardware::Return<void> BpHwComposerClient::_hidl_getDisplayCapabilities(::android::hardware::IInterface *_hidl_this, ::android::hardware::details::HidlInstrumentor *_hidl_this_instrumentor, uint64_t display, getDisplayCapabilities_cb _hidl_cb) {
    #ifdef __ANDROID_DEBUGGABLE__
    bool mEnableInstrumentation = _hidl_this_instrumentor->isInstrumentationEnabled();
    const auto &mInstrumentationCallbacks = _hidl_this_instrumentor->getInstrumentationCallbacks();
    #else
    (void) _hidl_this_instrumentor;
    #endif // __ANDROID_DEBUGGABLE__
    ::android::ScopedTrace PASTE(___tracer, __LINE__) (ATRACE_TAG_HAL, "HIDL::IComposerClient::getDisplayCapabilities::client");
    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        _hidl_args.push_back((void *)&display);
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_ENTRY, "android.hardware.graphics.composer", "2.3", "IComposerClient", "getDisplayCapabilities", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    ::android::hardware::Parcel _hidl_data;
    ::android::hardware::Parcel _hidl_reply;
    ::android::status_t _hidl_err;
    ::android::status_t _hidl_transact_err;
    ::android::hardware::Status _hidl_status;

    _hidl_err = _hidl_data.writeInterfaceToken(BpHwComposerClient::descriptor);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_err = _hidl_data.writeUint64(display);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_transact_err = ::android::hardware::IInterface::asBinder(_hidl_this)->transact(46 /* getDisplayCapabilities */, _hidl_data, &_hidl_reply, 0 /* flags */, [&] (::android::hardware::Parcel& _hidl_reply) {
        ::android::hardware::graphics::composer::V2_1::Error _hidl_out_error;
        const ::android::hardware::hidl_vec<::android::hardware::graphics::composer::V2_3::IComposerClient::DisplayCapability>* _hidl_out_capabilities;


        _hidl_err = ::android::hardware::readFromParcel(&_hidl_status, _hidl_reply);
        if (_hidl_err != ::android::OK) { return; }

        if (!_hidl_status.isOk()) { return; }

        _hidl_err = _hidl_reply.readInt32((int32_t *)&_hidl_out_error);
        if (_hidl_err != ::android::OK) { return; }

        size_t _hidl__hidl_out_capabilities_parent;

        _hidl_err = _hidl_reply.readBuffer(sizeof(*_hidl_out_capabilities), &_hidl__hidl_out_capabilities_parent,  reinterpret_cast<const void **>(&_hidl_out_capabilities));

        if (_hidl_err != ::android::OK) { return; }

        size_t _hidl__hidl_out_capabilities_child;

        _hidl_err = ::android::hardware::readEmbeddedFromParcel(
                const_cast<::android::hardware::hidl_vec<::android::hardware::graphics::composer::V2_3::IComposerClient::DisplayCapability> &>(*_hidl_out_capabilities),
                _hidl_reply,
                _hidl__hidl_out_capabilities_parent,
                0 /* parentOffset */, &_hidl__hidl_out_capabilities_child);

        if (_hidl_err != ::android::OK) { return; }

        _hidl_cb(_hidl_out_error, *_hidl_out_capabilities);

        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&_hidl_out_error);
            _hidl_args.push_back((void *)_hidl_out_capabilities);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::CLIENT_API_EXIT, "android.hardware.graphics.composer", "2.3", "IComposerClient", "getDisplayCapabilities", &_hidl_args);
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

::android::hardware::Return<void> BpHwComposerClient::_hidl_getPerFrameMetadataKeys_2_3(::android::hardware::IInterface *_hidl_this, ::android::hardware::details::HidlInstrumentor *_hidl_this_instrumentor, uint64_t display, getPerFrameMetadataKeys_2_3_cb _hidl_cb) {
    #ifdef __ANDROID_DEBUGGABLE__
    bool mEnableInstrumentation = _hidl_this_instrumentor->isInstrumentationEnabled();
    const auto &mInstrumentationCallbacks = _hidl_this_instrumentor->getInstrumentationCallbacks();
    #else
    (void) _hidl_this_instrumentor;
    #endif // __ANDROID_DEBUGGABLE__
    ::android::ScopedTrace PASTE(___tracer, __LINE__) (ATRACE_TAG_HAL, "HIDL::IComposerClient::getPerFrameMetadataKeys_2_3::client");
    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        _hidl_args.push_back((void *)&display);
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_ENTRY, "android.hardware.graphics.composer", "2.3", "IComposerClient", "getPerFrameMetadataKeys_2_3", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    ::android::hardware::Parcel _hidl_data;
    ::android::hardware::Parcel _hidl_reply;
    ::android::status_t _hidl_err;
    ::android::status_t _hidl_transact_err;
    ::android::hardware::Status _hidl_status;

    _hidl_err = _hidl_data.writeInterfaceToken(BpHwComposerClient::descriptor);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_err = _hidl_data.writeUint64(display);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_transact_err = ::android::hardware::IInterface::asBinder(_hidl_this)->transact(47 /* getPerFrameMetadataKeys_2_3 */, _hidl_data, &_hidl_reply, 0 /* flags */, [&] (::android::hardware::Parcel& _hidl_reply) {
        ::android::hardware::graphics::composer::V2_1::Error _hidl_out_error;
        const ::android::hardware::hidl_vec<::android::hardware::graphics::composer::V2_3::IComposerClient::PerFrameMetadataKey>* _hidl_out_keys;


        _hidl_err = ::android::hardware::readFromParcel(&_hidl_status, _hidl_reply);
        if (_hidl_err != ::android::OK) { return; }

        if (!_hidl_status.isOk()) { return; }

        _hidl_err = _hidl_reply.readInt32((int32_t *)&_hidl_out_error);
        if (_hidl_err != ::android::OK) { return; }

        size_t _hidl__hidl_out_keys_parent;

        _hidl_err = _hidl_reply.readBuffer(sizeof(*_hidl_out_keys), &_hidl__hidl_out_keys_parent,  reinterpret_cast<const void **>(&_hidl_out_keys));

        if (_hidl_err != ::android::OK) { return; }

        size_t _hidl__hidl_out_keys_child;

        _hidl_err = ::android::hardware::readEmbeddedFromParcel(
                const_cast<::android::hardware::hidl_vec<::android::hardware::graphics::composer::V2_3::IComposerClient::PerFrameMetadataKey> &>(*_hidl_out_keys),
                _hidl_reply,
                _hidl__hidl_out_keys_parent,
                0 /* parentOffset */, &_hidl__hidl_out_keys_child);

        if (_hidl_err != ::android::OK) { return; }

        _hidl_cb(_hidl_out_error, *_hidl_out_keys);

        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&_hidl_out_error);
            _hidl_args.push_back((void *)_hidl_out_keys);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::CLIENT_API_EXIT, "android.hardware.graphics.composer", "2.3", "IComposerClient", "getPerFrameMetadataKeys_2_3", &_hidl_args);
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

::android::hardware::Return<void> BpHwComposerClient::_hidl_getHdrCapabilities_2_3(::android::hardware::IInterface *_hidl_this, ::android::hardware::details::HidlInstrumentor *_hidl_this_instrumentor, uint64_t display, getHdrCapabilities_2_3_cb _hidl_cb) {
    #ifdef __ANDROID_DEBUGGABLE__
    bool mEnableInstrumentation = _hidl_this_instrumentor->isInstrumentationEnabled();
    const auto &mInstrumentationCallbacks = _hidl_this_instrumentor->getInstrumentationCallbacks();
    #else
    (void) _hidl_this_instrumentor;
    #endif // __ANDROID_DEBUGGABLE__
    ::android::ScopedTrace PASTE(___tracer, __LINE__) (ATRACE_TAG_HAL, "HIDL::IComposerClient::getHdrCapabilities_2_3::client");
    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        _hidl_args.push_back((void *)&display);
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_ENTRY, "android.hardware.graphics.composer", "2.3", "IComposerClient", "getHdrCapabilities_2_3", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    ::android::hardware::Parcel _hidl_data;
    ::android::hardware::Parcel _hidl_reply;
    ::android::status_t _hidl_err;
    ::android::status_t _hidl_transact_err;
    ::android::hardware::Status _hidl_status;

    _hidl_err = _hidl_data.writeInterfaceToken(BpHwComposerClient::descriptor);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_err = _hidl_data.writeUint64(display);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_transact_err = ::android::hardware::IInterface::asBinder(_hidl_this)->transact(48 /* getHdrCapabilities_2_3 */, _hidl_data, &_hidl_reply, 0 /* flags */, [&] (::android::hardware::Parcel& _hidl_reply) {
        ::android::hardware::graphics::composer::V2_1::Error _hidl_out_error;
        const ::android::hardware::hidl_vec<::android::hardware::graphics::common::V1_2::Hdr>* _hidl_out_types;
        float _hidl_out_maxLuminance;
        float _hidl_out_maxAverageLuminance;
        float _hidl_out_minLuminance;


        _hidl_err = ::android::hardware::readFromParcel(&_hidl_status, _hidl_reply);
        if (_hidl_err != ::android::OK) { return; }

        if (!_hidl_status.isOk()) { return; }

        _hidl_err = _hidl_reply.readInt32((int32_t *)&_hidl_out_error);
        if (_hidl_err != ::android::OK) { return; }

        size_t _hidl__hidl_out_types_parent;

        _hidl_err = _hidl_reply.readBuffer(sizeof(*_hidl_out_types), &_hidl__hidl_out_types_parent,  reinterpret_cast<const void **>(&_hidl_out_types));

        if (_hidl_err != ::android::OK) { return; }

        size_t _hidl__hidl_out_types_child;

        _hidl_err = ::android::hardware::readEmbeddedFromParcel(
                const_cast<::android::hardware::hidl_vec<::android::hardware::graphics::common::V1_2::Hdr> &>(*_hidl_out_types),
                _hidl_reply,
                _hidl__hidl_out_types_parent,
                0 /* parentOffset */, &_hidl__hidl_out_types_child);

        if (_hidl_err != ::android::OK) { return; }

        _hidl_err = _hidl_reply.readFloat(&_hidl_out_maxLuminance);
        if (_hidl_err != ::android::OK) { return; }

        _hidl_err = _hidl_reply.readFloat(&_hidl_out_maxAverageLuminance);
        if (_hidl_err != ::android::OK) { return; }

        _hidl_err = _hidl_reply.readFloat(&_hidl_out_minLuminance);
        if (_hidl_err != ::android::OK) { return; }

        _hidl_cb(_hidl_out_error, *_hidl_out_types, _hidl_out_maxLuminance, _hidl_out_maxAverageLuminance, _hidl_out_minLuminance);

        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&_hidl_out_error);
            _hidl_args.push_back((void *)_hidl_out_types);
            _hidl_args.push_back((void *)&_hidl_out_maxLuminance);
            _hidl_args.push_back((void *)&_hidl_out_maxAverageLuminance);
            _hidl_args.push_back((void *)&_hidl_out_minLuminance);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::CLIENT_API_EXIT, "android.hardware.graphics.composer", "2.3", "IComposerClient", "getHdrCapabilities_2_3", &_hidl_args);
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

::android::hardware::Return<void> BpHwComposerClient::_hidl_getDisplayBrightnessSupport(::android::hardware::IInterface *_hidl_this, ::android::hardware::details::HidlInstrumentor *_hidl_this_instrumentor, uint64_t display, getDisplayBrightnessSupport_cb _hidl_cb) {
    #ifdef __ANDROID_DEBUGGABLE__
    bool mEnableInstrumentation = _hidl_this_instrumentor->isInstrumentationEnabled();
    const auto &mInstrumentationCallbacks = _hidl_this_instrumentor->getInstrumentationCallbacks();
    #else
    (void) _hidl_this_instrumentor;
    #endif // __ANDROID_DEBUGGABLE__
    ::android::ScopedTrace PASTE(___tracer, __LINE__) (ATRACE_TAG_HAL, "HIDL::IComposerClient::getDisplayBrightnessSupport::client");
    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        _hidl_args.push_back((void *)&display);
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_ENTRY, "android.hardware.graphics.composer", "2.3", "IComposerClient", "getDisplayBrightnessSupport", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    ::android::hardware::Parcel _hidl_data;
    ::android::hardware::Parcel _hidl_reply;
    ::android::status_t _hidl_err;
    ::android::status_t _hidl_transact_err;
    ::android::hardware::Status _hidl_status;

    _hidl_err = _hidl_data.writeInterfaceToken(BpHwComposerClient::descriptor);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_err = _hidl_data.writeUint64(display);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_transact_err = ::android::hardware::IInterface::asBinder(_hidl_this)->transact(49 /* getDisplayBrightnessSupport */, _hidl_data, &_hidl_reply, 0 /* flags */, [&] (::android::hardware::Parcel& _hidl_reply) {
        ::android::hardware::graphics::composer::V2_1::Error _hidl_out_error;
        bool _hidl_out_support;


        _hidl_err = ::android::hardware::readFromParcel(&_hidl_status, _hidl_reply);
        if (_hidl_err != ::android::OK) { return; }

        if (!_hidl_status.isOk()) { return; }

        _hidl_err = _hidl_reply.readInt32((int32_t *)&_hidl_out_error);
        if (_hidl_err != ::android::OK) { return; }

        _hidl_err = _hidl_reply.readBool(&_hidl_out_support);
        if (_hidl_err != ::android::OK) { return; }

        _hidl_cb(_hidl_out_error, _hidl_out_support);

        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&_hidl_out_error);
            _hidl_args.push_back((void *)&_hidl_out_support);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::CLIENT_API_EXIT, "android.hardware.graphics.composer", "2.3", "IComposerClient", "getDisplayBrightnessSupport", &_hidl_args);
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

::android::hardware::Return<::android::hardware::graphics::composer::V2_1::Error> BpHwComposerClient::_hidl_setDisplayBrightness(::android::hardware::IInterface *_hidl_this, ::android::hardware::details::HidlInstrumentor *_hidl_this_instrumentor, uint64_t display, float brightness) {
    #ifdef __ANDROID_DEBUGGABLE__
    bool mEnableInstrumentation = _hidl_this_instrumentor->isInstrumentationEnabled();
    const auto &mInstrumentationCallbacks = _hidl_this_instrumentor->getInstrumentationCallbacks();
    #else
    (void) _hidl_this_instrumentor;
    #endif // __ANDROID_DEBUGGABLE__
    ::android::ScopedTrace PASTE(___tracer, __LINE__) (ATRACE_TAG_HAL, "HIDL::IComposerClient::setDisplayBrightness::client");
    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        _hidl_args.push_back((void *)&display);
        _hidl_args.push_back((void *)&brightness);
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_ENTRY, "android.hardware.graphics.composer", "2.3", "IComposerClient", "setDisplayBrightness", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    ::android::hardware::Parcel _hidl_data;
    ::android::hardware::Parcel _hidl_reply;
    ::android::status_t _hidl_err;
    ::android::status_t _hidl_transact_err;
    ::android::hardware::Status _hidl_status;

    ::android::hardware::graphics::composer::V2_1::Error _hidl_out_error;

    _hidl_err = _hidl_data.writeInterfaceToken(BpHwComposerClient::descriptor);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_err = _hidl_data.writeUint64(display);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_err = _hidl_data.writeFloat(brightness);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_transact_err = ::android::hardware::IInterface::asBinder(_hidl_this)->transact(50 /* setDisplayBrightness */, _hidl_data, &_hidl_reply, 0 /* flags */);
    if (_hidl_transact_err != ::android::OK) 
    {
        _hidl_err = _hidl_transact_err;
        goto _hidl_error;
    }

    _hidl_err = ::android::hardware::readFromParcel(&_hidl_status, _hidl_reply);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    if (!_hidl_status.isOk()) { return _hidl_status; }

    _hidl_err = _hidl_reply.readInt32((int32_t *)&_hidl_out_error);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        _hidl_args.push_back((void *)&_hidl_out_error);
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_EXIT, "android.hardware.graphics.composer", "2.3", "IComposerClient", "setDisplayBrightness", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    return ::android::hardware::Return<::android::hardware::graphics::composer::V2_1::Error>(_hidl_out_error);

_hidl_error:
    _hidl_status.setFromStatusT(_hidl_err);
    return ::android::hardware::Return<::android::hardware::graphics::composer::V2_1::Error>(_hidl_status);
}


// Methods from ::android::hardware::graphics::composer::V2_1::IComposerClient follow.
::android::hardware::Return<void> BpHwComposerClient::registerCallback(const ::android::sp<::android::hardware::graphics::composer::V2_1::IComposerCallback>& callback){
    ::android::hardware::Return<void>  _hidl_out = ::android::hardware::graphics::composer::V2_1::BpHwComposerClient::_hidl_registerCallback(this, this, callback);

    return _hidl_out;
}

::android::hardware::Return<uint32_t> BpHwComposerClient::getMaxVirtualDisplayCount(){
    ::android::hardware::Return<uint32_t>  _hidl_out = ::android::hardware::graphics::composer::V2_1::BpHwComposerClient::_hidl_getMaxVirtualDisplayCount(this, this);

    return _hidl_out;
}

::android::hardware::Return<void> BpHwComposerClient::createVirtualDisplay(uint32_t width, uint32_t height, ::android::hardware::graphics::common::V1_0::PixelFormat formatHint, uint32_t outputBufferSlotCount, createVirtualDisplay_cb _hidl_cb){
    ::android::hardware::Return<void>  _hidl_out = ::android::hardware::graphics::composer::V2_1::BpHwComposerClient::_hidl_createVirtualDisplay(this, this, width, height, formatHint, outputBufferSlotCount, _hidl_cb);

    return _hidl_out;
}

::android::hardware::Return<::android::hardware::graphics::composer::V2_1::Error> BpHwComposerClient::destroyVirtualDisplay(uint64_t display){
    ::android::hardware::Return<::android::hardware::graphics::composer::V2_1::Error>  _hidl_out = ::android::hardware::graphics::composer::V2_1::BpHwComposerClient::_hidl_destroyVirtualDisplay(this, this, display);

    return _hidl_out;
}

::android::hardware::Return<void> BpHwComposerClient::createLayer(uint64_t display, uint32_t bufferSlotCount, createLayer_cb _hidl_cb){
    ::android::hardware::Return<void>  _hidl_out = ::android::hardware::graphics::composer::V2_1::BpHwComposerClient::_hidl_createLayer(this, this, display, bufferSlotCount, _hidl_cb);

    return _hidl_out;
}

::android::hardware::Return<::android::hardware::graphics::composer::V2_1::Error> BpHwComposerClient::destroyLayer(uint64_t display, uint64_t layer){
    ::android::hardware::Return<::android::hardware::graphics::composer::V2_1::Error>  _hidl_out = ::android::hardware::graphics::composer::V2_1::BpHwComposerClient::_hidl_destroyLayer(this, this, display, layer);

    return _hidl_out;
}

::android::hardware::Return<void> BpHwComposerClient::getActiveConfig(uint64_t display, getActiveConfig_cb _hidl_cb){
    ::android::hardware::Return<void>  _hidl_out = ::android::hardware::graphics::composer::V2_1::BpHwComposerClient::_hidl_getActiveConfig(this, this, display, _hidl_cb);

    return _hidl_out;
}

::android::hardware::Return<::android::hardware::graphics::composer::V2_1::Error> BpHwComposerClient::getClientTargetSupport(uint64_t display, uint32_t width, uint32_t height, ::android::hardware::graphics::common::V1_0::PixelFormat format, ::android::hardware::graphics::common::V1_0::Dataspace dataspace){
    ::android::hardware::Return<::android::hardware::graphics::composer::V2_1::Error>  _hidl_out = ::android::hardware::graphics::composer::V2_1::BpHwComposerClient::_hidl_getClientTargetSupport(this, this, display, width, height, format, dataspace);

    return _hidl_out;
}

::android::hardware::Return<void> BpHwComposerClient::getColorModes(uint64_t display, getColorModes_cb _hidl_cb){
    ::android::hardware::Return<void>  _hidl_out = ::android::hardware::graphics::composer::V2_1::BpHwComposerClient::_hidl_getColorModes(this, this, display, _hidl_cb);

    return _hidl_out;
}

::android::hardware::Return<void> BpHwComposerClient::getDisplayAttribute(uint64_t display, uint32_t config, ::android::hardware::graphics::composer::V2_1::IComposerClient::Attribute attribute, getDisplayAttribute_cb _hidl_cb){
    ::android::hardware::Return<void>  _hidl_out = ::android::hardware::graphics::composer::V2_1::BpHwComposerClient::_hidl_getDisplayAttribute(this, this, display, config, attribute, _hidl_cb);

    return _hidl_out;
}

::android::hardware::Return<void> BpHwComposerClient::getDisplayConfigs(uint64_t display, getDisplayConfigs_cb _hidl_cb){
    ::android::hardware::Return<void>  _hidl_out = ::android::hardware::graphics::composer::V2_1::BpHwComposerClient::_hidl_getDisplayConfigs(this, this, display, _hidl_cb);

    return _hidl_out;
}

::android::hardware::Return<void> BpHwComposerClient::getDisplayName(uint64_t display, getDisplayName_cb _hidl_cb){
    ::android::hardware::Return<void>  _hidl_out = ::android::hardware::graphics::composer::V2_1::BpHwComposerClient::_hidl_getDisplayName(this, this, display, _hidl_cb);

    return _hidl_out;
}

::android::hardware::Return<void> BpHwComposerClient::getDisplayType(uint64_t display, getDisplayType_cb _hidl_cb){
    ::android::hardware::Return<void>  _hidl_out = ::android::hardware::graphics::composer::V2_1::BpHwComposerClient::_hidl_getDisplayType(this, this, display, _hidl_cb);

    return _hidl_out;
}

::android::hardware::Return<void> BpHwComposerClient::getDozeSupport(uint64_t display, getDozeSupport_cb _hidl_cb){
    ::android::hardware::Return<void>  _hidl_out = ::android::hardware::graphics::composer::V2_1::BpHwComposerClient::_hidl_getDozeSupport(this, this, display, _hidl_cb);

    return _hidl_out;
}

::android::hardware::Return<void> BpHwComposerClient::getHdrCapabilities(uint64_t display, getHdrCapabilities_cb _hidl_cb){
    ::android::hardware::Return<void>  _hidl_out = ::android::hardware::graphics::composer::V2_1::BpHwComposerClient::_hidl_getHdrCapabilities(this, this, display, _hidl_cb);

    return _hidl_out;
}

::android::hardware::Return<::android::hardware::graphics::composer::V2_1::Error> BpHwComposerClient::setClientTargetSlotCount(uint64_t display, uint32_t clientTargetSlotCount){
    ::android::hardware::Return<::android::hardware::graphics::composer::V2_1::Error>  _hidl_out = ::android::hardware::graphics::composer::V2_1::BpHwComposerClient::_hidl_setClientTargetSlotCount(this, this, display, clientTargetSlotCount);

    return _hidl_out;
}

::android::hardware::Return<::android::hardware::graphics::composer::V2_1::Error> BpHwComposerClient::setActiveConfig(uint64_t display, uint32_t config){
    ::android::hardware::Return<::android::hardware::graphics::composer::V2_1::Error>  _hidl_out = ::android::hardware::graphics::composer::V2_1::BpHwComposerClient::_hidl_setActiveConfig(this, this, display, config);

    return _hidl_out;
}

::android::hardware::Return<::android::hardware::graphics::composer::V2_1::Error> BpHwComposerClient::setColorMode(uint64_t display, ::android::hardware::graphics::common::V1_0::ColorMode mode){
    ::android::hardware::Return<::android::hardware::graphics::composer::V2_1::Error>  _hidl_out = ::android::hardware::graphics::composer::V2_1::BpHwComposerClient::_hidl_setColorMode(this, this, display, mode);

    return _hidl_out;
}

::android::hardware::Return<::android::hardware::graphics::composer::V2_1::Error> BpHwComposerClient::setPowerMode(uint64_t display, ::android::hardware::graphics::composer::V2_1::IComposerClient::PowerMode mode){
    ::android::hardware::Return<::android::hardware::graphics::composer::V2_1::Error>  _hidl_out = ::android::hardware::graphics::composer::V2_1::BpHwComposerClient::_hidl_setPowerMode(this, this, display, mode);

    return _hidl_out;
}

::android::hardware::Return<::android::hardware::graphics::composer::V2_1::Error> BpHwComposerClient::setVsyncEnabled(uint64_t display, ::android::hardware::graphics::composer::V2_1::IComposerClient::Vsync enabled){
    ::android::hardware::Return<::android::hardware::graphics::composer::V2_1::Error>  _hidl_out = ::android::hardware::graphics::composer::V2_1::BpHwComposerClient::_hidl_setVsyncEnabled(this, this, display, enabled);

    return _hidl_out;
}

::android::hardware::Return<::android::hardware::graphics::composer::V2_1::Error> BpHwComposerClient::setInputCommandQueue(const ::android::hardware::MQDescriptorSync<uint32_t>& descriptor){
    ::android::hardware::Return<::android::hardware::graphics::composer::V2_1::Error>  _hidl_out = ::android::hardware::graphics::composer::V2_1::BpHwComposerClient::_hidl_setInputCommandQueue(this, this, descriptor);

    return _hidl_out;
}

::android::hardware::Return<void> BpHwComposerClient::getOutputCommandQueue(getOutputCommandQueue_cb _hidl_cb){
    ::android::hardware::Return<void>  _hidl_out = ::android::hardware::graphics::composer::V2_1::BpHwComposerClient::_hidl_getOutputCommandQueue(this, this, _hidl_cb);

    return _hidl_out;
}

::android::hardware::Return<void> BpHwComposerClient::executeCommands(uint32_t inLength, const ::android::hardware::hidl_vec<::android::hardware::hidl_handle>& inHandles, executeCommands_cb _hidl_cb){
    ::android::hardware::Return<void>  _hidl_out = ::android::hardware::graphics::composer::V2_1::BpHwComposerClient::_hidl_executeCommands(this, this, inLength, inHandles, _hidl_cb);

    return _hidl_out;
}


// Methods from ::android::hardware::graphics::composer::V2_2::IComposerClient follow.
::android::hardware::Return<void> BpHwComposerClient::getPerFrameMetadataKeys(uint64_t display, getPerFrameMetadataKeys_cb _hidl_cb){
    ::android::hardware::Return<void>  _hidl_out = ::android::hardware::graphics::composer::V2_2::BpHwComposerClient::_hidl_getPerFrameMetadataKeys(this, this, display, _hidl_cb);

    return _hidl_out;
}

::android::hardware::Return<void> BpHwComposerClient::getReadbackBufferAttributes(uint64_t display, getReadbackBufferAttributes_cb _hidl_cb){
    ::android::hardware::Return<void>  _hidl_out = ::android::hardware::graphics::composer::V2_2::BpHwComposerClient::_hidl_getReadbackBufferAttributes(this, this, display, _hidl_cb);

    return _hidl_out;
}

::android::hardware::Return<void> BpHwComposerClient::getReadbackBufferFence(uint64_t display, getReadbackBufferFence_cb _hidl_cb){
    ::android::hardware::Return<void>  _hidl_out = ::android::hardware::graphics::composer::V2_2::BpHwComposerClient::_hidl_getReadbackBufferFence(this, this, display, _hidl_cb);

    return _hidl_out;
}

::android::hardware::Return<::android::hardware::graphics::composer::V2_1::Error> BpHwComposerClient::setReadbackBuffer(uint64_t display, const ::android::hardware::hidl_handle& buffer, const ::android::hardware::hidl_handle& releaseFence){
    ::android::hardware::Return<::android::hardware::graphics::composer::V2_1::Error>  _hidl_out = ::android::hardware::graphics::composer::V2_2::BpHwComposerClient::_hidl_setReadbackBuffer(this, this, display, buffer, releaseFence);

    return _hidl_out;
}

::android::hardware::Return<void> BpHwComposerClient::createVirtualDisplay_2_2(uint32_t width, uint32_t height, ::android::hardware::graphics::common::V1_1::PixelFormat formatHint, uint32_t outputBufferSlotCount, createVirtualDisplay_2_2_cb _hidl_cb){
    ::android::hardware::Return<void>  _hidl_out = ::android::hardware::graphics::composer::V2_2::BpHwComposerClient::_hidl_createVirtualDisplay_2_2(this, this, width, height, formatHint, outputBufferSlotCount, _hidl_cb);

    return _hidl_out;
}

::android::hardware::Return<::android::hardware::graphics::composer::V2_1::Error> BpHwComposerClient::getClientTargetSupport_2_2(uint64_t display, uint32_t width, uint32_t height, ::android::hardware::graphics::common::V1_1::PixelFormat format, ::android::hardware::graphics::common::V1_1::Dataspace dataspace){
    ::android::hardware::Return<::android::hardware::graphics::composer::V2_1::Error>  _hidl_out = ::android::hardware::graphics::composer::V2_2::BpHwComposerClient::_hidl_getClientTargetSupport_2_2(this, this, display, width, height, format, dataspace);

    return _hidl_out;
}

::android::hardware::Return<::android::hardware::graphics::composer::V2_1::Error> BpHwComposerClient::setPowerMode_2_2(uint64_t display, ::android::hardware::graphics::composer::V2_2::IComposerClient::PowerMode mode){
    ::android::hardware::Return<::android::hardware::graphics::composer::V2_1::Error>  _hidl_out = ::android::hardware::graphics::composer::V2_2::BpHwComposerClient::_hidl_setPowerMode_2_2(this, this, display, mode);

    return _hidl_out;
}

::android::hardware::Return<void> BpHwComposerClient::getColorModes_2_2(uint64_t display, getColorModes_2_2_cb _hidl_cb){
    ::android::hardware::Return<void>  _hidl_out = ::android::hardware::graphics::composer::V2_2::BpHwComposerClient::_hidl_getColorModes_2_2(this, this, display, _hidl_cb);

    return _hidl_out;
}

::android::hardware::Return<void> BpHwComposerClient::getRenderIntents(uint64_t display, ::android::hardware::graphics::common::V1_1::ColorMode mode, getRenderIntents_cb _hidl_cb){
    ::android::hardware::Return<void>  _hidl_out = ::android::hardware::graphics::composer::V2_2::BpHwComposerClient::_hidl_getRenderIntents(this, this, display, mode, _hidl_cb);

    return _hidl_out;
}

::android::hardware::Return<::android::hardware::graphics::composer::V2_1::Error> BpHwComposerClient::setColorMode_2_2(uint64_t display, ::android::hardware::graphics::common::V1_1::ColorMode mode, ::android::hardware::graphics::common::V1_1::RenderIntent intent){
    ::android::hardware::Return<::android::hardware::graphics::composer::V2_1::Error>  _hidl_out = ::android::hardware::graphics::composer::V2_2::BpHwComposerClient::_hidl_setColorMode_2_2(this, this, display, mode, intent);

    return _hidl_out;
}

::android::hardware::Return<void> BpHwComposerClient::getDataspaceSaturationMatrix(::android::hardware::graphics::common::V1_1::Dataspace dataspace, getDataspaceSaturationMatrix_cb _hidl_cb){
    ::android::hardware::Return<void>  _hidl_out = ::android::hardware::graphics::composer::V2_2::BpHwComposerClient::_hidl_getDataspaceSaturationMatrix(this, this, dataspace, _hidl_cb);

    return _hidl_out;
}

::android::hardware::Return<void> BpHwComposerClient::executeCommands_2_2(uint32_t inLength, const ::android::hardware::hidl_vec<::android::hardware::hidl_handle>& inHandles, executeCommands_2_2_cb _hidl_cb){
    ::android::hardware::Return<void>  _hidl_out = ::android::hardware::graphics::composer::V2_2::BpHwComposerClient::_hidl_executeCommands_2_2(this, this, inLength, inHandles, _hidl_cb);

    return _hidl_out;
}


// Methods from ::android::hardware::graphics::composer::V2_3::IComposerClient follow.
::android::hardware::Return<void> BpHwComposerClient::getDisplayIdentificationData(uint64_t display, getDisplayIdentificationData_cb _hidl_cb){
    ::android::hardware::Return<void>  _hidl_out = ::android::hardware::graphics::composer::V2_3::BpHwComposerClient::_hidl_getDisplayIdentificationData(this, this, display, _hidl_cb);

    return _hidl_out;
}

::android::hardware::Return<void> BpHwComposerClient::getReadbackBufferAttributes_2_3(uint64_t display, getReadbackBufferAttributes_2_3_cb _hidl_cb){
    ::android::hardware::Return<void>  _hidl_out = ::android::hardware::graphics::composer::V2_3::BpHwComposerClient::_hidl_getReadbackBufferAttributes_2_3(this, this, display, _hidl_cb);

    return _hidl_out;
}

::android::hardware::Return<::android::hardware::graphics::composer::V2_1::Error> BpHwComposerClient::getClientTargetSupport_2_3(uint64_t display, uint32_t width, uint32_t height, ::android::hardware::graphics::common::V1_2::PixelFormat format, ::android::hardware::graphics::common::V1_2::Dataspace dataspace){
    ::android::hardware::Return<::android::hardware::graphics::composer::V2_1::Error>  _hidl_out = ::android::hardware::graphics::composer::V2_3::BpHwComposerClient::_hidl_getClientTargetSupport_2_3(this, this, display, width, height, format, dataspace);

    return _hidl_out;
}

::android::hardware::Return<void> BpHwComposerClient::getDisplayedContentSamplingAttributes(uint64_t display, getDisplayedContentSamplingAttributes_cb _hidl_cb){
    ::android::hardware::Return<void>  _hidl_out = ::android::hardware::graphics::composer::V2_3::BpHwComposerClient::_hidl_getDisplayedContentSamplingAttributes(this, this, display, _hidl_cb);

    return _hidl_out;
}

::android::hardware::Return<::android::hardware::graphics::composer::V2_1::Error> BpHwComposerClient::setDisplayedContentSamplingEnabled(uint64_t display, ::android::hardware::graphics::composer::V2_3::IComposerClient::DisplayedContentSampling enable, ::android::hardware::hidl_bitfield<::android::hardware::graphics::composer::V2_3::IComposerClient::FormatColorComponent> componentMask, uint64_t maxFrames){
    ::android::hardware::Return<::android::hardware::graphics::composer::V2_1::Error>  _hidl_out = ::android::hardware::graphics::composer::V2_3::BpHwComposerClient::_hidl_setDisplayedContentSamplingEnabled(this, this, display, enable, componentMask, maxFrames);

    return _hidl_out;
}

::android::hardware::Return<void> BpHwComposerClient::getDisplayedContentSample(uint64_t display, uint64_t maxFrames, uint64_t timestamp, getDisplayedContentSample_cb _hidl_cb){
    ::android::hardware::Return<void>  _hidl_out = ::android::hardware::graphics::composer::V2_3::BpHwComposerClient::_hidl_getDisplayedContentSample(this, this, display, maxFrames, timestamp, _hidl_cb);

    return _hidl_out;
}

::android::hardware::Return<void> BpHwComposerClient::executeCommands_2_3(uint32_t inLength, const ::android::hardware::hidl_vec<::android::hardware::hidl_handle>& inHandles, executeCommands_2_3_cb _hidl_cb){
    ::android::hardware::Return<void>  _hidl_out = ::android::hardware::graphics::composer::V2_3::BpHwComposerClient::_hidl_executeCommands_2_3(this, this, inLength, inHandles, _hidl_cb);

    return _hidl_out;
}

::android::hardware::Return<void> BpHwComposerClient::getRenderIntents_2_3(uint64_t display, ::android::hardware::graphics::common::V1_2::ColorMode mode, getRenderIntents_2_3_cb _hidl_cb){
    ::android::hardware::Return<void>  _hidl_out = ::android::hardware::graphics::composer::V2_3::BpHwComposerClient::_hidl_getRenderIntents_2_3(this, this, display, mode, _hidl_cb);

    return _hidl_out;
}

::android::hardware::Return<void> BpHwComposerClient::getColorModes_2_3(uint64_t display, getColorModes_2_3_cb _hidl_cb){
    ::android::hardware::Return<void>  _hidl_out = ::android::hardware::graphics::composer::V2_3::BpHwComposerClient::_hidl_getColorModes_2_3(this, this, display, _hidl_cb);

    return _hidl_out;
}

::android::hardware::Return<::android::hardware::graphics::composer::V2_1::Error> BpHwComposerClient::setColorMode_2_3(uint64_t display, ::android::hardware::graphics::common::V1_2::ColorMode mode, ::android::hardware::graphics::common::V1_1::RenderIntent intent){
    ::android::hardware::Return<::android::hardware::graphics::composer::V2_1::Error>  _hidl_out = ::android::hardware::graphics::composer::V2_3::BpHwComposerClient::_hidl_setColorMode_2_3(this, this, display, mode, intent);

    return _hidl_out;
}

::android::hardware::Return<void> BpHwComposerClient::getDisplayCapabilities(uint64_t display, getDisplayCapabilities_cb _hidl_cb){
    ::android::hardware::Return<void>  _hidl_out = ::android::hardware::graphics::composer::V2_3::BpHwComposerClient::_hidl_getDisplayCapabilities(this, this, display, _hidl_cb);

    return _hidl_out;
}

::android::hardware::Return<void> BpHwComposerClient::getPerFrameMetadataKeys_2_3(uint64_t display, getPerFrameMetadataKeys_2_3_cb _hidl_cb){
    ::android::hardware::Return<void>  _hidl_out = ::android::hardware::graphics::composer::V2_3::BpHwComposerClient::_hidl_getPerFrameMetadataKeys_2_3(this, this, display, _hidl_cb);

    return _hidl_out;
}

::android::hardware::Return<void> BpHwComposerClient::getHdrCapabilities_2_3(uint64_t display, getHdrCapabilities_2_3_cb _hidl_cb){
    ::android::hardware::Return<void>  _hidl_out = ::android::hardware::graphics::composer::V2_3::BpHwComposerClient::_hidl_getHdrCapabilities_2_3(this, this, display, _hidl_cb);

    return _hidl_out;
}

::android::hardware::Return<void> BpHwComposerClient::getDisplayBrightnessSupport(uint64_t display, getDisplayBrightnessSupport_cb _hidl_cb){
    ::android::hardware::Return<void>  _hidl_out = ::android::hardware::graphics::composer::V2_3::BpHwComposerClient::_hidl_getDisplayBrightnessSupport(this, this, display, _hidl_cb);

    return _hidl_out;
}

::android::hardware::Return<::android::hardware::graphics::composer::V2_1::Error> BpHwComposerClient::setDisplayBrightness(uint64_t display, float brightness){
    ::android::hardware::Return<::android::hardware::graphics::composer::V2_1::Error>  _hidl_out = ::android::hardware::graphics::composer::V2_3::BpHwComposerClient::_hidl_setDisplayBrightness(this, this, display, brightness);

    return _hidl_out;
}


// Methods from ::android::hidl::base::V1_0::IBase follow.
::android::hardware::Return<void> BpHwComposerClient::interfaceChain(interfaceChain_cb _hidl_cb){
    ::android::hardware::Return<void>  _hidl_out = ::android::hidl::base::V1_0::BpHwBase::_hidl_interfaceChain(this, this, _hidl_cb);

    return _hidl_out;
}

::android::hardware::Return<void> BpHwComposerClient::debug(const ::android::hardware::hidl_handle& fd, const ::android::hardware::hidl_vec<::android::hardware::hidl_string>& options){
    ::android::hardware::Return<void>  _hidl_out = ::android::hidl::base::V1_0::BpHwBase::_hidl_debug(this, this, fd, options);

    return _hidl_out;
}

::android::hardware::Return<void> BpHwComposerClient::interfaceDescriptor(interfaceDescriptor_cb _hidl_cb){
    ::android::hardware::Return<void>  _hidl_out = ::android::hidl::base::V1_0::BpHwBase::_hidl_interfaceDescriptor(this, this, _hidl_cb);

    return _hidl_out;
}

::android::hardware::Return<void> BpHwComposerClient::getHashChain(getHashChain_cb _hidl_cb){
    ::android::hardware::Return<void>  _hidl_out = ::android::hidl::base::V1_0::BpHwBase::_hidl_getHashChain(this, this, _hidl_cb);

    return _hidl_out;
}

::android::hardware::Return<void> BpHwComposerClient::setHALInstrumentation(){
    ::android::hardware::Return<void>  _hidl_out = ::android::hidl::base::V1_0::BpHwBase::_hidl_setHALInstrumentation(this, this);

    return _hidl_out;
}

::android::hardware::Return<bool> BpHwComposerClient::linkToDeath(const ::android::sp<::android::hardware::hidl_death_recipient>& recipient, uint64_t cookie){
    ::android::hardware::ProcessState::self()->startThreadPool();
    ::android::hardware::hidl_binder_death_recipient *binder_recipient = new ::android::hardware::hidl_binder_death_recipient(recipient, cookie, this);
    std::unique_lock<std::mutex> lock(_hidl_mMutex);
    _hidl_mDeathRecipients.push_back(binder_recipient);
    return (remote()->linkToDeath(binder_recipient) == ::android::OK);
}

::android::hardware::Return<void> BpHwComposerClient::ping(){
    ::android::hardware::Return<void>  _hidl_out = ::android::hidl::base::V1_0::BpHwBase::_hidl_ping(this, this);

    return _hidl_out;
}

::android::hardware::Return<void> BpHwComposerClient::getDebugInfo(getDebugInfo_cb _hidl_cb){
    ::android::hardware::Return<void>  _hidl_out = ::android::hidl::base::V1_0::BpHwBase::_hidl_getDebugInfo(this, this, _hidl_cb);

    return _hidl_out;
}

::android::hardware::Return<void> BpHwComposerClient::notifySyspropsChanged(){
    ::android::hardware::Return<void>  _hidl_out = ::android::hidl::base::V1_0::BpHwBase::_hidl_notifySyspropsChanged(this, this);

    return _hidl_out;
}

::android::hardware::Return<bool> BpHwComposerClient::unlinkToDeath(const ::android::sp<::android::hardware::hidl_death_recipient>& recipient){
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


BnHwComposerClient::BnHwComposerClient(const ::android::sp<IComposerClient> &_hidl_impl)
        : ::android::hidl::base::V1_0::BnHwBase(_hidl_impl, "android.hardware.graphics.composer@2.3", "IComposerClient") { 
            _hidl_mImpl = _hidl_impl;
            auto prio = ::android::hardware::getMinSchedulerPolicy(_hidl_impl);
            mSchedPolicy = prio.sched_policy;
            mSchedPriority = prio.prio;
            setRequestingSid(::android::hardware::getRequestingSid(_hidl_impl));
}

BnHwComposerClient::~BnHwComposerClient() {
    ::android::hardware::details::gBnMap->eraseIfEqual(_hidl_mImpl.get(), this);
}

// Methods from ::android::hardware::graphics::composer::V2_3::IComposerClient follow.
::android::status_t BnHwComposerClient::_hidl_getDisplayIdentificationData(
        ::android::hidl::base::V1_0::BnHwBase* _hidl_this,
        const ::android::hardware::Parcel &_hidl_data,
        ::android::hardware::Parcel *_hidl_reply,
        TransactCallback _hidl_cb) {
    #ifdef __ANDROID_DEBUGGABLE__
    bool mEnableInstrumentation = _hidl_this->isInstrumentationEnabled();
    const auto &mInstrumentationCallbacks = _hidl_this->getInstrumentationCallbacks();
    #endif // __ANDROID_DEBUGGABLE__

    ::android::status_t _hidl_err = ::android::OK;
    if (!_hidl_data.enforceInterface(BnHwComposerClient::Pure::descriptor)) {
        _hidl_err = ::android::BAD_TYPE;
        return _hidl_err;
    }

    uint64_t display;

    _hidl_err = _hidl_data.readUint64(&display);
    if (_hidl_err != ::android::OK) { return _hidl_err; }

    atrace_begin(ATRACE_TAG_HAL, "HIDL::IComposerClient::getDisplayIdentificationData::server");
    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        _hidl_args.push_back((void *)&display);
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::SERVER_API_ENTRY, "android.hardware.graphics.composer", "2.3", "IComposerClient", "getDisplayIdentificationData", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    bool _hidl_callbackCalled = false;

    ::android::hardware::Return<void> _hidl_ret = static_cast<IComposerClient*>(_hidl_this->getImpl().get())->getDisplayIdentificationData(display, [&](const auto &_hidl_out_error, const auto &_hidl_out_port, const auto &_hidl_out_data) {
        if (_hidl_callbackCalled) {
            LOG_ALWAYS_FATAL("getDisplayIdentificationData: _hidl_cb called a second time, but must be called once.");
        }
        _hidl_callbackCalled = true;

        ::android::hardware::writeToParcel(::android::hardware::Status::ok(), _hidl_reply);

        _hidl_err = _hidl_reply->writeInt32((int32_t)_hidl_out_error);
        if (_hidl_err != ::android::OK) { goto _hidl_error; }

        _hidl_err = _hidl_reply->writeUint8(_hidl_out_port);
        if (_hidl_err != ::android::OK) { goto _hidl_error; }

        size_t _hidl__hidl_out_data_parent;

        _hidl_err = _hidl_reply->writeBuffer(&_hidl_out_data, sizeof(_hidl_out_data), &_hidl__hidl_out_data_parent);
        if (_hidl_err != ::android::OK) { goto _hidl_error; }

        size_t _hidl__hidl_out_data_child;

        _hidl_err = ::android::hardware::writeEmbeddedToParcel(
                _hidl_out_data,
                _hidl_reply,
                _hidl__hidl_out_data_parent,
                0 /* parentOffset */, &_hidl__hidl_out_data_child);

        if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_error:
        atrace_end(ATRACE_TAG_HAL);
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&_hidl_out_error);
            _hidl_args.push_back((void *)&_hidl_out_port);
            _hidl_args.push_back((void *)&_hidl_out_data);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::SERVER_API_EXIT, "android.hardware.graphics.composer", "2.3", "IComposerClient", "getDisplayIdentificationData", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        if (_hidl_err != ::android::OK) { return; }
        _hidl_cb(*_hidl_reply);
    });

    _hidl_ret.assertOk();
    if (!_hidl_callbackCalled) {
        LOG_ALWAYS_FATAL("getDisplayIdentificationData: _hidl_cb not called, but must be called once.");
    }

    return _hidl_err;
}

::android::status_t BnHwComposerClient::_hidl_getReadbackBufferAttributes_2_3(
        ::android::hidl::base::V1_0::BnHwBase* _hidl_this,
        const ::android::hardware::Parcel &_hidl_data,
        ::android::hardware::Parcel *_hidl_reply,
        TransactCallback _hidl_cb) {
    #ifdef __ANDROID_DEBUGGABLE__
    bool mEnableInstrumentation = _hidl_this->isInstrumentationEnabled();
    const auto &mInstrumentationCallbacks = _hidl_this->getInstrumentationCallbacks();
    #endif // __ANDROID_DEBUGGABLE__

    ::android::status_t _hidl_err = ::android::OK;
    if (!_hidl_data.enforceInterface(BnHwComposerClient::Pure::descriptor)) {
        _hidl_err = ::android::BAD_TYPE;
        return _hidl_err;
    }

    uint64_t display;

    _hidl_err = _hidl_data.readUint64(&display);
    if (_hidl_err != ::android::OK) { return _hidl_err; }

    atrace_begin(ATRACE_TAG_HAL, "HIDL::IComposerClient::getReadbackBufferAttributes_2_3::server");
    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        _hidl_args.push_back((void *)&display);
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::SERVER_API_ENTRY, "android.hardware.graphics.composer", "2.3", "IComposerClient", "getReadbackBufferAttributes_2_3", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    bool _hidl_callbackCalled = false;

    ::android::hardware::Return<void> _hidl_ret = static_cast<IComposerClient*>(_hidl_this->getImpl().get())->getReadbackBufferAttributes_2_3(display, [&](const auto &_hidl_out_error, const auto &_hidl_out_format, const auto &_hidl_out_dataspace) {
        if (_hidl_callbackCalled) {
            LOG_ALWAYS_FATAL("getReadbackBufferAttributes_2_3: _hidl_cb called a second time, but must be called once.");
        }
        _hidl_callbackCalled = true;

        ::android::hardware::writeToParcel(::android::hardware::Status::ok(), _hidl_reply);

        _hidl_err = _hidl_reply->writeInt32((int32_t)_hidl_out_error);
        if (_hidl_err != ::android::OK) { goto _hidl_error; }

        _hidl_err = _hidl_reply->writeInt32((int32_t)_hidl_out_format);
        if (_hidl_err != ::android::OK) { goto _hidl_error; }

        _hidl_err = _hidl_reply->writeInt32((int32_t)_hidl_out_dataspace);
        if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_error:
        atrace_end(ATRACE_TAG_HAL);
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&_hidl_out_error);
            _hidl_args.push_back((void *)&_hidl_out_format);
            _hidl_args.push_back((void *)&_hidl_out_dataspace);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::SERVER_API_EXIT, "android.hardware.graphics.composer", "2.3", "IComposerClient", "getReadbackBufferAttributes_2_3", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        if (_hidl_err != ::android::OK) { return; }
        _hidl_cb(*_hidl_reply);
    });

    _hidl_ret.assertOk();
    if (!_hidl_callbackCalled) {
        LOG_ALWAYS_FATAL("getReadbackBufferAttributes_2_3: _hidl_cb not called, but must be called once.");
    }

    return _hidl_err;
}

::android::status_t BnHwComposerClient::_hidl_getClientTargetSupport_2_3(
        ::android::hidl::base::V1_0::BnHwBase* _hidl_this,
        const ::android::hardware::Parcel &_hidl_data,
        ::android::hardware::Parcel *_hidl_reply,
        TransactCallback _hidl_cb) {
    #ifdef __ANDROID_DEBUGGABLE__
    bool mEnableInstrumentation = _hidl_this->isInstrumentationEnabled();
    const auto &mInstrumentationCallbacks = _hidl_this->getInstrumentationCallbacks();
    #endif // __ANDROID_DEBUGGABLE__

    ::android::status_t _hidl_err = ::android::OK;
    if (!_hidl_data.enforceInterface(BnHwComposerClient::Pure::descriptor)) {
        _hidl_err = ::android::BAD_TYPE;
        return _hidl_err;
    }

    uint64_t display;
    uint32_t width;
    uint32_t height;
    ::android::hardware::graphics::common::V1_2::PixelFormat format;
    ::android::hardware::graphics::common::V1_2::Dataspace dataspace;

    _hidl_err = _hidl_data.readUint64(&display);
    if (_hidl_err != ::android::OK) { return _hidl_err; }

    _hidl_err = _hidl_data.readUint32(&width);
    if (_hidl_err != ::android::OK) { return _hidl_err; }

    _hidl_err = _hidl_data.readUint32(&height);
    if (_hidl_err != ::android::OK) { return _hidl_err; }

    _hidl_err = _hidl_data.readInt32((int32_t *)&format);
    if (_hidl_err != ::android::OK) { return _hidl_err; }

    _hidl_err = _hidl_data.readInt32((int32_t *)&dataspace);
    if (_hidl_err != ::android::OK) { return _hidl_err; }

    atrace_begin(ATRACE_TAG_HAL, "HIDL::IComposerClient::getClientTargetSupport_2_3::server");
    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        _hidl_args.push_back((void *)&display);
        _hidl_args.push_back((void *)&width);
        _hidl_args.push_back((void *)&height);
        _hidl_args.push_back((void *)&format);
        _hidl_args.push_back((void *)&dataspace);
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::SERVER_API_ENTRY, "android.hardware.graphics.composer", "2.3", "IComposerClient", "getClientTargetSupport_2_3", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    ::android::hardware::graphics::composer::V2_1::Error _hidl_out_error = static_cast<IComposerClient*>(_hidl_this->getImpl().get())->getClientTargetSupport_2_3(display, width, height, format, dataspace);

    ::android::hardware::writeToParcel(::android::hardware::Status::ok(), _hidl_reply);

    _hidl_err = _hidl_reply->writeInt32((int32_t)_hidl_out_error);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

_hidl_error:
    atrace_end(ATRACE_TAG_HAL);
    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        _hidl_args.push_back((void *)&_hidl_out_error);
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::SERVER_API_EXIT, "android.hardware.graphics.composer", "2.3", "IComposerClient", "getClientTargetSupport_2_3", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    if (_hidl_err != ::android::OK) { return _hidl_err; }
    _hidl_cb(*_hidl_reply);
    return _hidl_err;
}

::android::status_t BnHwComposerClient::_hidl_getDisplayedContentSamplingAttributes(
        ::android::hidl::base::V1_0::BnHwBase* _hidl_this,
        const ::android::hardware::Parcel &_hidl_data,
        ::android::hardware::Parcel *_hidl_reply,
        TransactCallback _hidl_cb) {
    #ifdef __ANDROID_DEBUGGABLE__
    bool mEnableInstrumentation = _hidl_this->isInstrumentationEnabled();
    const auto &mInstrumentationCallbacks = _hidl_this->getInstrumentationCallbacks();
    #endif // __ANDROID_DEBUGGABLE__

    ::android::status_t _hidl_err = ::android::OK;
    if (!_hidl_data.enforceInterface(BnHwComposerClient::Pure::descriptor)) {
        _hidl_err = ::android::BAD_TYPE;
        return _hidl_err;
    }

    uint64_t display;

    _hidl_err = _hidl_data.readUint64(&display);
    if (_hidl_err != ::android::OK) { return _hidl_err; }

    atrace_begin(ATRACE_TAG_HAL, "HIDL::IComposerClient::getDisplayedContentSamplingAttributes::server");
    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        _hidl_args.push_back((void *)&display);
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::SERVER_API_ENTRY, "android.hardware.graphics.composer", "2.3", "IComposerClient", "getDisplayedContentSamplingAttributes", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    bool _hidl_callbackCalled = false;

    ::android::hardware::Return<void> _hidl_ret = static_cast<IComposerClient*>(_hidl_this->getImpl().get())->getDisplayedContentSamplingAttributes(display, [&](const auto &_hidl_out_error, const auto &_hidl_out_format, const auto &_hidl_out_dataspace, const auto &_hidl_out_componentMask) {
        if (_hidl_callbackCalled) {
            LOG_ALWAYS_FATAL("getDisplayedContentSamplingAttributes: _hidl_cb called a second time, but must be called once.");
        }
        _hidl_callbackCalled = true;

        ::android::hardware::writeToParcel(::android::hardware::Status::ok(), _hidl_reply);

        _hidl_err = _hidl_reply->writeInt32((int32_t)_hidl_out_error);
        if (_hidl_err != ::android::OK) { goto _hidl_error; }

        _hidl_err = _hidl_reply->writeInt32((int32_t)_hidl_out_format);
        if (_hidl_err != ::android::OK) { goto _hidl_error; }

        _hidl_err = _hidl_reply->writeInt32((int32_t)_hidl_out_dataspace);
        if (_hidl_err != ::android::OK) { goto _hidl_error; }

        _hidl_err = _hidl_reply->writeUint8((uint8_t)_hidl_out_componentMask);
        if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_error:
        atrace_end(ATRACE_TAG_HAL);
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&_hidl_out_error);
            _hidl_args.push_back((void *)&_hidl_out_format);
            _hidl_args.push_back((void *)&_hidl_out_dataspace);
            _hidl_args.push_back((void *)&_hidl_out_componentMask);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::SERVER_API_EXIT, "android.hardware.graphics.composer", "2.3", "IComposerClient", "getDisplayedContentSamplingAttributes", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        if (_hidl_err != ::android::OK) { return; }
        _hidl_cb(*_hidl_reply);
    });

    _hidl_ret.assertOk();
    if (!_hidl_callbackCalled) {
        LOG_ALWAYS_FATAL("getDisplayedContentSamplingAttributes: _hidl_cb not called, but must be called once.");
    }

    return _hidl_err;
}

::android::status_t BnHwComposerClient::_hidl_setDisplayedContentSamplingEnabled(
        ::android::hidl::base::V1_0::BnHwBase* _hidl_this,
        const ::android::hardware::Parcel &_hidl_data,
        ::android::hardware::Parcel *_hidl_reply,
        TransactCallback _hidl_cb) {
    #ifdef __ANDROID_DEBUGGABLE__
    bool mEnableInstrumentation = _hidl_this->isInstrumentationEnabled();
    const auto &mInstrumentationCallbacks = _hidl_this->getInstrumentationCallbacks();
    #endif // __ANDROID_DEBUGGABLE__

    ::android::status_t _hidl_err = ::android::OK;
    if (!_hidl_data.enforceInterface(BnHwComposerClient::Pure::descriptor)) {
        _hidl_err = ::android::BAD_TYPE;
        return _hidl_err;
    }

    uint64_t display;
    ::android::hardware::graphics::composer::V2_3::IComposerClient::DisplayedContentSampling enable;
    ::android::hardware::hidl_bitfield<::android::hardware::graphics::composer::V2_3::IComposerClient::FormatColorComponent> componentMask;
    uint64_t maxFrames;

    _hidl_err = _hidl_data.readUint64(&display);
    if (_hidl_err != ::android::OK) { return _hidl_err; }

    _hidl_err = _hidl_data.readInt32((int32_t *)&enable);
    if (_hidl_err != ::android::OK) { return _hidl_err; }

    _hidl_err = _hidl_data.readUint8((uint8_t *)&componentMask);
    if (_hidl_err != ::android::OK) { return _hidl_err; }

    _hidl_err = _hidl_data.readUint64(&maxFrames);
    if (_hidl_err != ::android::OK) { return _hidl_err; }

    atrace_begin(ATRACE_TAG_HAL, "HIDL::IComposerClient::setDisplayedContentSamplingEnabled::server");
    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        _hidl_args.push_back((void *)&display);
        _hidl_args.push_back((void *)&enable);
        _hidl_args.push_back((void *)&componentMask);
        _hidl_args.push_back((void *)&maxFrames);
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::SERVER_API_ENTRY, "android.hardware.graphics.composer", "2.3", "IComposerClient", "setDisplayedContentSamplingEnabled", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    ::android::hardware::graphics::composer::V2_1::Error _hidl_out_error = static_cast<IComposerClient*>(_hidl_this->getImpl().get())->setDisplayedContentSamplingEnabled(display, enable, componentMask, maxFrames);

    ::android::hardware::writeToParcel(::android::hardware::Status::ok(), _hidl_reply);

    _hidl_err = _hidl_reply->writeInt32((int32_t)_hidl_out_error);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

_hidl_error:
    atrace_end(ATRACE_TAG_HAL);
    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        _hidl_args.push_back((void *)&_hidl_out_error);
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::SERVER_API_EXIT, "android.hardware.graphics.composer", "2.3", "IComposerClient", "setDisplayedContentSamplingEnabled", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    if (_hidl_err != ::android::OK) { return _hidl_err; }
    _hidl_cb(*_hidl_reply);
    return _hidl_err;
}

::android::status_t BnHwComposerClient::_hidl_getDisplayedContentSample(
        ::android::hidl::base::V1_0::BnHwBase* _hidl_this,
        const ::android::hardware::Parcel &_hidl_data,
        ::android::hardware::Parcel *_hidl_reply,
        TransactCallback _hidl_cb) {
    #ifdef __ANDROID_DEBUGGABLE__
    bool mEnableInstrumentation = _hidl_this->isInstrumentationEnabled();
    const auto &mInstrumentationCallbacks = _hidl_this->getInstrumentationCallbacks();
    #endif // __ANDROID_DEBUGGABLE__

    ::android::status_t _hidl_err = ::android::OK;
    if (!_hidl_data.enforceInterface(BnHwComposerClient::Pure::descriptor)) {
        _hidl_err = ::android::BAD_TYPE;
        return _hidl_err;
    }

    uint64_t display;
    uint64_t maxFrames;
    uint64_t timestamp;

    _hidl_err = _hidl_data.readUint64(&display);
    if (_hidl_err != ::android::OK) { return _hidl_err; }

    _hidl_err = _hidl_data.readUint64(&maxFrames);
    if (_hidl_err != ::android::OK) { return _hidl_err; }

    _hidl_err = _hidl_data.readUint64(&timestamp);
    if (_hidl_err != ::android::OK) { return _hidl_err; }

    atrace_begin(ATRACE_TAG_HAL, "HIDL::IComposerClient::getDisplayedContentSample::server");
    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        _hidl_args.push_back((void *)&display);
        _hidl_args.push_back((void *)&maxFrames);
        _hidl_args.push_back((void *)&timestamp);
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::SERVER_API_ENTRY, "android.hardware.graphics.composer", "2.3", "IComposerClient", "getDisplayedContentSample", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    bool _hidl_callbackCalled = false;

    ::android::hardware::Return<void> _hidl_ret = static_cast<IComposerClient*>(_hidl_this->getImpl().get())->getDisplayedContentSample(display, maxFrames, timestamp, [&](const auto &_hidl_out_error, const auto &_hidl_out_frameCount, const auto &_hidl_out_sampleComponent0, const auto &_hidl_out_sampleComponent1, const auto &_hidl_out_sampleComponent2, const auto &_hidl_out_sampleComponent3) {
        if (_hidl_callbackCalled) {
            LOG_ALWAYS_FATAL("getDisplayedContentSample: _hidl_cb called a second time, but must be called once.");
        }
        _hidl_callbackCalled = true;

        ::android::hardware::writeToParcel(::android::hardware::Status::ok(), _hidl_reply);

        _hidl_err = _hidl_reply->writeInt32((int32_t)_hidl_out_error);
        if (_hidl_err != ::android::OK) { goto _hidl_error; }

        _hidl_err = _hidl_reply->writeUint64(_hidl_out_frameCount);
        if (_hidl_err != ::android::OK) { goto _hidl_error; }

        size_t _hidl__hidl_out_sampleComponent0_parent;

        _hidl_err = _hidl_reply->writeBuffer(&_hidl_out_sampleComponent0, sizeof(_hidl_out_sampleComponent0), &_hidl__hidl_out_sampleComponent0_parent);
        if (_hidl_err != ::android::OK) { goto _hidl_error; }

        size_t _hidl__hidl_out_sampleComponent0_child;

        _hidl_err = ::android::hardware::writeEmbeddedToParcel(
                _hidl_out_sampleComponent0,
                _hidl_reply,
                _hidl__hidl_out_sampleComponent0_parent,
                0 /* parentOffset */, &_hidl__hidl_out_sampleComponent0_child);

        if (_hidl_err != ::android::OK) { goto _hidl_error; }

        size_t _hidl__hidl_out_sampleComponent1_parent;

        _hidl_err = _hidl_reply->writeBuffer(&_hidl_out_sampleComponent1, sizeof(_hidl_out_sampleComponent1), &_hidl__hidl_out_sampleComponent1_parent);
        if (_hidl_err != ::android::OK) { goto _hidl_error; }

        size_t _hidl__hidl_out_sampleComponent1_child;

        _hidl_err = ::android::hardware::writeEmbeddedToParcel(
                _hidl_out_sampleComponent1,
                _hidl_reply,
                _hidl__hidl_out_sampleComponent1_parent,
                0 /* parentOffset */, &_hidl__hidl_out_sampleComponent1_child);

        if (_hidl_err != ::android::OK) { goto _hidl_error; }

        size_t _hidl__hidl_out_sampleComponent2_parent;

        _hidl_err = _hidl_reply->writeBuffer(&_hidl_out_sampleComponent2, sizeof(_hidl_out_sampleComponent2), &_hidl__hidl_out_sampleComponent2_parent);
        if (_hidl_err != ::android::OK) { goto _hidl_error; }

        size_t _hidl__hidl_out_sampleComponent2_child;

        _hidl_err = ::android::hardware::writeEmbeddedToParcel(
                _hidl_out_sampleComponent2,
                _hidl_reply,
                _hidl__hidl_out_sampleComponent2_parent,
                0 /* parentOffset */, &_hidl__hidl_out_sampleComponent2_child);

        if (_hidl_err != ::android::OK) { goto _hidl_error; }

        size_t _hidl__hidl_out_sampleComponent3_parent;

        _hidl_err = _hidl_reply->writeBuffer(&_hidl_out_sampleComponent3, sizeof(_hidl_out_sampleComponent3), &_hidl__hidl_out_sampleComponent3_parent);
        if (_hidl_err != ::android::OK) { goto _hidl_error; }

        size_t _hidl__hidl_out_sampleComponent3_child;

        _hidl_err = ::android::hardware::writeEmbeddedToParcel(
                _hidl_out_sampleComponent3,
                _hidl_reply,
                _hidl__hidl_out_sampleComponent3_parent,
                0 /* parentOffset */, &_hidl__hidl_out_sampleComponent3_child);

        if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_error:
        atrace_end(ATRACE_TAG_HAL);
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&_hidl_out_error);
            _hidl_args.push_back((void *)&_hidl_out_frameCount);
            _hidl_args.push_back((void *)&_hidl_out_sampleComponent0);
            _hidl_args.push_back((void *)&_hidl_out_sampleComponent1);
            _hidl_args.push_back((void *)&_hidl_out_sampleComponent2);
            _hidl_args.push_back((void *)&_hidl_out_sampleComponent3);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::SERVER_API_EXIT, "android.hardware.graphics.composer", "2.3", "IComposerClient", "getDisplayedContentSample", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        if (_hidl_err != ::android::OK) { return; }
        _hidl_cb(*_hidl_reply);
    });

    _hidl_ret.assertOk();
    if (!_hidl_callbackCalled) {
        LOG_ALWAYS_FATAL("getDisplayedContentSample: _hidl_cb not called, but must be called once.");
    }

    return _hidl_err;
}

::android::status_t BnHwComposerClient::_hidl_executeCommands_2_3(
        ::android::hidl::base::V1_0::BnHwBase* _hidl_this,
        const ::android::hardware::Parcel &_hidl_data,
        ::android::hardware::Parcel *_hidl_reply,
        TransactCallback _hidl_cb) {
    #ifdef __ANDROID_DEBUGGABLE__
    bool mEnableInstrumentation = _hidl_this->isInstrumentationEnabled();
    const auto &mInstrumentationCallbacks = _hidl_this->getInstrumentationCallbacks();
    #endif // __ANDROID_DEBUGGABLE__

    ::android::status_t _hidl_err = ::android::OK;
    if (!_hidl_data.enforceInterface(BnHwComposerClient::Pure::descriptor)) {
        _hidl_err = ::android::BAD_TYPE;
        return _hidl_err;
    }

    uint32_t inLength;
    const ::android::hardware::hidl_vec<::android::hardware::hidl_handle>* inHandles;

    _hidl_err = _hidl_data.readUint32(&inLength);
    if (_hidl_err != ::android::OK) { return _hidl_err; }

    size_t _hidl_inHandles_parent;

    _hidl_err = _hidl_data.readBuffer(sizeof(*inHandles), &_hidl_inHandles_parent,  reinterpret_cast<const void **>(&inHandles));

    if (_hidl_err != ::android::OK) { return _hidl_err; }

    size_t _hidl_inHandles_child;

    _hidl_err = ::android::hardware::readEmbeddedFromParcel(
            const_cast<::android::hardware::hidl_vec<::android::hardware::hidl_handle> &>(*inHandles),
            _hidl_data,
            _hidl_inHandles_parent,
            0 /* parentOffset */, &_hidl_inHandles_child);

    if (_hidl_err != ::android::OK) { return _hidl_err; }

    for (size_t _hidl_index_0 = 0; _hidl_index_0 < inHandles->size(); ++_hidl_index_0) {
        _hidl_err = ::android::hardware::readEmbeddedFromParcel(
                const_cast<::android::hardware::hidl_handle &>((*inHandles)[_hidl_index_0]),
                _hidl_data,
                _hidl_inHandles_child,
                _hidl_index_0 * sizeof(::android::hardware::hidl_handle));

        if (_hidl_err != ::android::OK) { return _hidl_err; }

    }

    atrace_begin(ATRACE_TAG_HAL, "HIDL::IComposerClient::executeCommands_2_3::server");
    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        _hidl_args.push_back((void *)&inLength);
        _hidl_args.push_back((void *)inHandles);
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::SERVER_API_ENTRY, "android.hardware.graphics.composer", "2.3", "IComposerClient", "executeCommands_2_3", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    bool _hidl_callbackCalled = false;

    ::android::hardware::Return<void> _hidl_ret = static_cast<IComposerClient*>(_hidl_this->getImpl().get())->executeCommands_2_3(inLength, *inHandles, [&](const auto &_hidl_out_error, const auto &_hidl_out_outQueueChanged, const auto &_hidl_out_outLength, const auto &_hidl_out_outHandles) {
        if (_hidl_callbackCalled) {
            LOG_ALWAYS_FATAL("executeCommands_2_3: _hidl_cb called a second time, but must be called once.");
        }
        _hidl_callbackCalled = true;

        ::android::hardware::writeToParcel(::android::hardware::Status::ok(), _hidl_reply);

        _hidl_err = _hidl_reply->writeInt32((int32_t)_hidl_out_error);
        if (_hidl_err != ::android::OK) { goto _hidl_error; }

        _hidl_err = _hidl_reply->writeBool(_hidl_out_outQueueChanged);
        if (_hidl_err != ::android::OK) { goto _hidl_error; }

        _hidl_err = _hidl_reply->writeUint32(_hidl_out_outLength);
        if (_hidl_err != ::android::OK) { goto _hidl_error; }

        size_t _hidl__hidl_out_outHandles_parent;

        _hidl_err = _hidl_reply->writeBuffer(&_hidl_out_outHandles, sizeof(_hidl_out_outHandles), &_hidl__hidl_out_outHandles_parent);
        if (_hidl_err != ::android::OK) { goto _hidl_error; }

        size_t _hidl__hidl_out_outHandles_child;

        _hidl_err = ::android::hardware::writeEmbeddedToParcel(
                _hidl_out_outHandles,
                _hidl_reply,
                _hidl__hidl_out_outHandles_parent,
                0 /* parentOffset */, &_hidl__hidl_out_outHandles_child);

        if (_hidl_err != ::android::OK) { goto _hidl_error; }

        for (size_t _hidl_index_0 = 0; _hidl_index_0 < _hidl_out_outHandles.size(); ++_hidl_index_0) {
            _hidl_err = ::android::hardware::writeEmbeddedToParcel(
                    _hidl_out_outHandles[_hidl_index_0],
                    _hidl_reply,
                    _hidl__hidl_out_outHandles_child,
                    _hidl_index_0 * sizeof(::android::hardware::hidl_handle));

            if (_hidl_err != ::android::OK) { goto _hidl_error; }

        }

    _hidl_error:
        atrace_end(ATRACE_TAG_HAL);
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&_hidl_out_error);
            _hidl_args.push_back((void *)&_hidl_out_outQueueChanged);
            _hidl_args.push_back((void *)&_hidl_out_outLength);
            _hidl_args.push_back((void *)&_hidl_out_outHandles);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::SERVER_API_EXIT, "android.hardware.graphics.composer", "2.3", "IComposerClient", "executeCommands_2_3", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        if (_hidl_err != ::android::OK) { return; }
        _hidl_cb(*_hidl_reply);
    });

    _hidl_ret.assertOk();
    if (!_hidl_callbackCalled) {
        LOG_ALWAYS_FATAL("executeCommands_2_3: _hidl_cb not called, but must be called once.");
    }

    return _hidl_err;
}

::android::status_t BnHwComposerClient::_hidl_getRenderIntents_2_3(
        ::android::hidl::base::V1_0::BnHwBase* _hidl_this,
        const ::android::hardware::Parcel &_hidl_data,
        ::android::hardware::Parcel *_hidl_reply,
        TransactCallback _hidl_cb) {
    #ifdef __ANDROID_DEBUGGABLE__
    bool mEnableInstrumentation = _hidl_this->isInstrumentationEnabled();
    const auto &mInstrumentationCallbacks = _hidl_this->getInstrumentationCallbacks();
    #endif // __ANDROID_DEBUGGABLE__

    ::android::status_t _hidl_err = ::android::OK;
    if (!_hidl_data.enforceInterface(BnHwComposerClient::Pure::descriptor)) {
        _hidl_err = ::android::BAD_TYPE;
        return _hidl_err;
    }

    uint64_t display;
    ::android::hardware::graphics::common::V1_2::ColorMode mode;

    _hidl_err = _hidl_data.readUint64(&display);
    if (_hidl_err != ::android::OK) { return _hidl_err; }

    _hidl_err = _hidl_data.readInt32((int32_t *)&mode);
    if (_hidl_err != ::android::OK) { return _hidl_err; }

    atrace_begin(ATRACE_TAG_HAL, "HIDL::IComposerClient::getRenderIntents_2_3::server");
    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        _hidl_args.push_back((void *)&display);
        _hidl_args.push_back((void *)&mode);
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::SERVER_API_ENTRY, "android.hardware.graphics.composer", "2.3", "IComposerClient", "getRenderIntents_2_3", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    bool _hidl_callbackCalled = false;

    ::android::hardware::Return<void> _hidl_ret = static_cast<IComposerClient*>(_hidl_this->getImpl().get())->getRenderIntents_2_3(display, mode, [&](const auto &_hidl_out_error, const auto &_hidl_out_intents) {
        if (_hidl_callbackCalled) {
            LOG_ALWAYS_FATAL("getRenderIntents_2_3: _hidl_cb called a second time, but must be called once.");
        }
        _hidl_callbackCalled = true;

        ::android::hardware::writeToParcel(::android::hardware::Status::ok(), _hidl_reply);

        _hidl_err = _hidl_reply->writeInt32((int32_t)_hidl_out_error);
        if (_hidl_err != ::android::OK) { goto _hidl_error; }

        size_t _hidl__hidl_out_intents_parent;

        _hidl_err = _hidl_reply->writeBuffer(&_hidl_out_intents, sizeof(_hidl_out_intents), &_hidl__hidl_out_intents_parent);
        if (_hidl_err != ::android::OK) { goto _hidl_error; }

        size_t _hidl__hidl_out_intents_child;

        _hidl_err = ::android::hardware::writeEmbeddedToParcel(
                _hidl_out_intents,
                _hidl_reply,
                _hidl__hidl_out_intents_parent,
                0 /* parentOffset */, &_hidl__hidl_out_intents_child);

        if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_error:
        atrace_end(ATRACE_TAG_HAL);
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&_hidl_out_error);
            _hidl_args.push_back((void *)&_hidl_out_intents);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::SERVER_API_EXIT, "android.hardware.graphics.composer", "2.3", "IComposerClient", "getRenderIntents_2_3", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        if (_hidl_err != ::android::OK) { return; }
        _hidl_cb(*_hidl_reply);
    });

    _hidl_ret.assertOk();
    if (!_hidl_callbackCalled) {
        LOG_ALWAYS_FATAL("getRenderIntents_2_3: _hidl_cb not called, but must be called once.");
    }

    return _hidl_err;
}

::android::status_t BnHwComposerClient::_hidl_getColorModes_2_3(
        ::android::hidl::base::V1_0::BnHwBase* _hidl_this,
        const ::android::hardware::Parcel &_hidl_data,
        ::android::hardware::Parcel *_hidl_reply,
        TransactCallback _hidl_cb) {
    #ifdef __ANDROID_DEBUGGABLE__
    bool mEnableInstrumentation = _hidl_this->isInstrumentationEnabled();
    const auto &mInstrumentationCallbacks = _hidl_this->getInstrumentationCallbacks();
    #endif // __ANDROID_DEBUGGABLE__

    ::android::status_t _hidl_err = ::android::OK;
    if (!_hidl_data.enforceInterface(BnHwComposerClient::Pure::descriptor)) {
        _hidl_err = ::android::BAD_TYPE;
        return _hidl_err;
    }

    uint64_t display;

    _hidl_err = _hidl_data.readUint64(&display);
    if (_hidl_err != ::android::OK) { return _hidl_err; }

    atrace_begin(ATRACE_TAG_HAL, "HIDL::IComposerClient::getColorModes_2_3::server");
    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        _hidl_args.push_back((void *)&display);
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::SERVER_API_ENTRY, "android.hardware.graphics.composer", "2.3", "IComposerClient", "getColorModes_2_3", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    bool _hidl_callbackCalled = false;

    ::android::hardware::Return<void> _hidl_ret = static_cast<IComposerClient*>(_hidl_this->getImpl().get())->getColorModes_2_3(display, [&](const auto &_hidl_out_error, const auto &_hidl_out_modes) {
        if (_hidl_callbackCalled) {
            LOG_ALWAYS_FATAL("getColorModes_2_3: _hidl_cb called a second time, but must be called once.");
        }
        _hidl_callbackCalled = true;

        ::android::hardware::writeToParcel(::android::hardware::Status::ok(), _hidl_reply);

        _hidl_err = _hidl_reply->writeInt32((int32_t)_hidl_out_error);
        if (_hidl_err != ::android::OK) { goto _hidl_error; }

        size_t _hidl__hidl_out_modes_parent;

        _hidl_err = _hidl_reply->writeBuffer(&_hidl_out_modes, sizeof(_hidl_out_modes), &_hidl__hidl_out_modes_parent);
        if (_hidl_err != ::android::OK) { goto _hidl_error; }

        size_t _hidl__hidl_out_modes_child;

        _hidl_err = ::android::hardware::writeEmbeddedToParcel(
                _hidl_out_modes,
                _hidl_reply,
                _hidl__hidl_out_modes_parent,
                0 /* parentOffset */, &_hidl__hidl_out_modes_child);

        if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_error:
        atrace_end(ATRACE_TAG_HAL);
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&_hidl_out_error);
            _hidl_args.push_back((void *)&_hidl_out_modes);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::SERVER_API_EXIT, "android.hardware.graphics.composer", "2.3", "IComposerClient", "getColorModes_2_3", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        if (_hidl_err != ::android::OK) { return; }
        _hidl_cb(*_hidl_reply);
    });

    _hidl_ret.assertOk();
    if (!_hidl_callbackCalled) {
        LOG_ALWAYS_FATAL("getColorModes_2_3: _hidl_cb not called, but must be called once.");
    }

    return _hidl_err;
}

::android::status_t BnHwComposerClient::_hidl_setColorMode_2_3(
        ::android::hidl::base::V1_0::BnHwBase* _hidl_this,
        const ::android::hardware::Parcel &_hidl_data,
        ::android::hardware::Parcel *_hidl_reply,
        TransactCallback _hidl_cb) {
    #ifdef __ANDROID_DEBUGGABLE__
    bool mEnableInstrumentation = _hidl_this->isInstrumentationEnabled();
    const auto &mInstrumentationCallbacks = _hidl_this->getInstrumentationCallbacks();
    #endif // __ANDROID_DEBUGGABLE__

    ::android::status_t _hidl_err = ::android::OK;
    if (!_hidl_data.enforceInterface(BnHwComposerClient::Pure::descriptor)) {
        _hidl_err = ::android::BAD_TYPE;
        return _hidl_err;
    }

    uint64_t display;
    ::android::hardware::graphics::common::V1_2::ColorMode mode;
    ::android::hardware::graphics::common::V1_1::RenderIntent intent;

    _hidl_err = _hidl_data.readUint64(&display);
    if (_hidl_err != ::android::OK) { return _hidl_err; }

    _hidl_err = _hidl_data.readInt32((int32_t *)&mode);
    if (_hidl_err != ::android::OK) { return _hidl_err; }

    _hidl_err = _hidl_data.readInt32((int32_t *)&intent);
    if (_hidl_err != ::android::OK) { return _hidl_err; }

    atrace_begin(ATRACE_TAG_HAL, "HIDL::IComposerClient::setColorMode_2_3::server");
    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        _hidl_args.push_back((void *)&display);
        _hidl_args.push_back((void *)&mode);
        _hidl_args.push_back((void *)&intent);
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::SERVER_API_ENTRY, "android.hardware.graphics.composer", "2.3", "IComposerClient", "setColorMode_2_3", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    ::android::hardware::graphics::composer::V2_1::Error _hidl_out_error = static_cast<IComposerClient*>(_hidl_this->getImpl().get())->setColorMode_2_3(display, mode, intent);

    ::android::hardware::writeToParcel(::android::hardware::Status::ok(), _hidl_reply);

    _hidl_err = _hidl_reply->writeInt32((int32_t)_hidl_out_error);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

_hidl_error:
    atrace_end(ATRACE_TAG_HAL);
    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        _hidl_args.push_back((void *)&_hidl_out_error);
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::SERVER_API_EXIT, "android.hardware.graphics.composer", "2.3", "IComposerClient", "setColorMode_2_3", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    if (_hidl_err != ::android::OK) { return _hidl_err; }
    _hidl_cb(*_hidl_reply);
    return _hidl_err;
}

::android::status_t BnHwComposerClient::_hidl_getDisplayCapabilities(
        ::android::hidl::base::V1_0::BnHwBase* _hidl_this,
        const ::android::hardware::Parcel &_hidl_data,
        ::android::hardware::Parcel *_hidl_reply,
        TransactCallback _hidl_cb) {
    #ifdef __ANDROID_DEBUGGABLE__
    bool mEnableInstrumentation = _hidl_this->isInstrumentationEnabled();
    const auto &mInstrumentationCallbacks = _hidl_this->getInstrumentationCallbacks();
    #endif // __ANDROID_DEBUGGABLE__

    ::android::status_t _hidl_err = ::android::OK;
    if (!_hidl_data.enforceInterface(BnHwComposerClient::Pure::descriptor)) {
        _hidl_err = ::android::BAD_TYPE;
        return _hidl_err;
    }

    uint64_t display;

    _hidl_err = _hidl_data.readUint64(&display);
    if (_hidl_err != ::android::OK) { return _hidl_err; }

    atrace_begin(ATRACE_TAG_HAL, "HIDL::IComposerClient::getDisplayCapabilities::server");
    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        _hidl_args.push_back((void *)&display);
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::SERVER_API_ENTRY, "android.hardware.graphics.composer", "2.3", "IComposerClient", "getDisplayCapabilities", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    bool _hidl_callbackCalled = false;

    ::android::hardware::Return<void> _hidl_ret = static_cast<IComposerClient*>(_hidl_this->getImpl().get())->getDisplayCapabilities(display, [&](const auto &_hidl_out_error, const auto &_hidl_out_capabilities) {
        if (_hidl_callbackCalled) {
            LOG_ALWAYS_FATAL("getDisplayCapabilities: _hidl_cb called a second time, but must be called once.");
        }
        _hidl_callbackCalled = true;

        ::android::hardware::writeToParcel(::android::hardware::Status::ok(), _hidl_reply);

        _hidl_err = _hidl_reply->writeInt32((int32_t)_hidl_out_error);
        if (_hidl_err != ::android::OK) { goto _hidl_error; }

        size_t _hidl__hidl_out_capabilities_parent;

        _hidl_err = _hidl_reply->writeBuffer(&_hidl_out_capabilities, sizeof(_hidl_out_capabilities), &_hidl__hidl_out_capabilities_parent);
        if (_hidl_err != ::android::OK) { goto _hidl_error; }

        size_t _hidl__hidl_out_capabilities_child;

        _hidl_err = ::android::hardware::writeEmbeddedToParcel(
                _hidl_out_capabilities,
                _hidl_reply,
                _hidl__hidl_out_capabilities_parent,
                0 /* parentOffset */, &_hidl__hidl_out_capabilities_child);

        if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_error:
        atrace_end(ATRACE_TAG_HAL);
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&_hidl_out_error);
            _hidl_args.push_back((void *)&_hidl_out_capabilities);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::SERVER_API_EXIT, "android.hardware.graphics.composer", "2.3", "IComposerClient", "getDisplayCapabilities", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        if (_hidl_err != ::android::OK) { return; }
        _hidl_cb(*_hidl_reply);
    });

    _hidl_ret.assertOk();
    if (!_hidl_callbackCalled) {
        LOG_ALWAYS_FATAL("getDisplayCapabilities: _hidl_cb not called, but must be called once.");
    }

    return _hidl_err;
}

::android::status_t BnHwComposerClient::_hidl_getPerFrameMetadataKeys_2_3(
        ::android::hidl::base::V1_0::BnHwBase* _hidl_this,
        const ::android::hardware::Parcel &_hidl_data,
        ::android::hardware::Parcel *_hidl_reply,
        TransactCallback _hidl_cb) {
    #ifdef __ANDROID_DEBUGGABLE__
    bool mEnableInstrumentation = _hidl_this->isInstrumentationEnabled();
    const auto &mInstrumentationCallbacks = _hidl_this->getInstrumentationCallbacks();
    #endif // __ANDROID_DEBUGGABLE__

    ::android::status_t _hidl_err = ::android::OK;
    if (!_hidl_data.enforceInterface(BnHwComposerClient::Pure::descriptor)) {
        _hidl_err = ::android::BAD_TYPE;
        return _hidl_err;
    }

    uint64_t display;

    _hidl_err = _hidl_data.readUint64(&display);
    if (_hidl_err != ::android::OK) { return _hidl_err; }

    atrace_begin(ATRACE_TAG_HAL, "HIDL::IComposerClient::getPerFrameMetadataKeys_2_3::server");
    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        _hidl_args.push_back((void *)&display);
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::SERVER_API_ENTRY, "android.hardware.graphics.composer", "2.3", "IComposerClient", "getPerFrameMetadataKeys_2_3", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    bool _hidl_callbackCalled = false;

    ::android::hardware::Return<void> _hidl_ret = static_cast<IComposerClient*>(_hidl_this->getImpl().get())->getPerFrameMetadataKeys_2_3(display, [&](const auto &_hidl_out_error, const auto &_hidl_out_keys) {
        if (_hidl_callbackCalled) {
            LOG_ALWAYS_FATAL("getPerFrameMetadataKeys_2_3: _hidl_cb called a second time, but must be called once.");
        }
        _hidl_callbackCalled = true;

        ::android::hardware::writeToParcel(::android::hardware::Status::ok(), _hidl_reply);

        _hidl_err = _hidl_reply->writeInt32((int32_t)_hidl_out_error);
        if (_hidl_err != ::android::OK) { goto _hidl_error; }

        size_t _hidl__hidl_out_keys_parent;

        _hidl_err = _hidl_reply->writeBuffer(&_hidl_out_keys, sizeof(_hidl_out_keys), &_hidl__hidl_out_keys_parent);
        if (_hidl_err != ::android::OK) { goto _hidl_error; }

        size_t _hidl__hidl_out_keys_child;

        _hidl_err = ::android::hardware::writeEmbeddedToParcel(
                _hidl_out_keys,
                _hidl_reply,
                _hidl__hidl_out_keys_parent,
                0 /* parentOffset */, &_hidl__hidl_out_keys_child);

        if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_error:
        atrace_end(ATRACE_TAG_HAL);
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&_hidl_out_error);
            _hidl_args.push_back((void *)&_hidl_out_keys);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::SERVER_API_EXIT, "android.hardware.graphics.composer", "2.3", "IComposerClient", "getPerFrameMetadataKeys_2_3", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        if (_hidl_err != ::android::OK) { return; }
        _hidl_cb(*_hidl_reply);
    });

    _hidl_ret.assertOk();
    if (!_hidl_callbackCalled) {
        LOG_ALWAYS_FATAL("getPerFrameMetadataKeys_2_3: _hidl_cb not called, but must be called once.");
    }

    return _hidl_err;
}

::android::status_t BnHwComposerClient::_hidl_getHdrCapabilities_2_3(
        ::android::hidl::base::V1_0::BnHwBase* _hidl_this,
        const ::android::hardware::Parcel &_hidl_data,
        ::android::hardware::Parcel *_hidl_reply,
        TransactCallback _hidl_cb) {
    #ifdef __ANDROID_DEBUGGABLE__
    bool mEnableInstrumentation = _hidl_this->isInstrumentationEnabled();
    const auto &mInstrumentationCallbacks = _hidl_this->getInstrumentationCallbacks();
    #endif // __ANDROID_DEBUGGABLE__

    ::android::status_t _hidl_err = ::android::OK;
    if (!_hidl_data.enforceInterface(BnHwComposerClient::Pure::descriptor)) {
        _hidl_err = ::android::BAD_TYPE;
        return _hidl_err;
    }

    uint64_t display;

    _hidl_err = _hidl_data.readUint64(&display);
    if (_hidl_err != ::android::OK) { return _hidl_err; }

    atrace_begin(ATRACE_TAG_HAL, "HIDL::IComposerClient::getHdrCapabilities_2_3::server");
    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        _hidl_args.push_back((void *)&display);
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::SERVER_API_ENTRY, "android.hardware.graphics.composer", "2.3", "IComposerClient", "getHdrCapabilities_2_3", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    bool _hidl_callbackCalled = false;

    ::android::hardware::Return<void> _hidl_ret = static_cast<IComposerClient*>(_hidl_this->getImpl().get())->getHdrCapabilities_2_3(display, [&](const auto &_hidl_out_error, const auto &_hidl_out_types, const auto &_hidl_out_maxLuminance, const auto &_hidl_out_maxAverageLuminance, const auto &_hidl_out_minLuminance) {
        if (_hidl_callbackCalled) {
            LOG_ALWAYS_FATAL("getHdrCapabilities_2_3: _hidl_cb called a second time, but must be called once.");
        }
        _hidl_callbackCalled = true;

        ::android::hardware::writeToParcel(::android::hardware::Status::ok(), _hidl_reply);

        _hidl_err = _hidl_reply->writeInt32((int32_t)_hidl_out_error);
        if (_hidl_err != ::android::OK) { goto _hidl_error; }

        size_t _hidl__hidl_out_types_parent;

        _hidl_err = _hidl_reply->writeBuffer(&_hidl_out_types, sizeof(_hidl_out_types), &_hidl__hidl_out_types_parent);
        if (_hidl_err != ::android::OK) { goto _hidl_error; }

        size_t _hidl__hidl_out_types_child;

        _hidl_err = ::android::hardware::writeEmbeddedToParcel(
                _hidl_out_types,
                _hidl_reply,
                _hidl__hidl_out_types_parent,
                0 /* parentOffset */, &_hidl__hidl_out_types_child);

        if (_hidl_err != ::android::OK) { goto _hidl_error; }

        _hidl_err = _hidl_reply->writeFloat(_hidl_out_maxLuminance);
        if (_hidl_err != ::android::OK) { goto _hidl_error; }

        _hidl_err = _hidl_reply->writeFloat(_hidl_out_maxAverageLuminance);
        if (_hidl_err != ::android::OK) { goto _hidl_error; }

        _hidl_err = _hidl_reply->writeFloat(_hidl_out_minLuminance);
        if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_error:
        atrace_end(ATRACE_TAG_HAL);
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&_hidl_out_error);
            _hidl_args.push_back((void *)&_hidl_out_types);
            _hidl_args.push_back((void *)&_hidl_out_maxLuminance);
            _hidl_args.push_back((void *)&_hidl_out_maxAverageLuminance);
            _hidl_args.push_back((void *)&_hidl_out_minLuminance);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::SERVER_API_EXIT, "android.hardware.graphics.composer", "2.3", "IComposerClient", "getHdrCapabilities_2_3", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        if (_hidl_err != ::android::OK) { return; }
        _hidl_cb(*_hidl_reply);
    });

    _hidl_ret.assertOk();
    if (!_hidl_callbackCalled) {
        LOG_ALWAYS_FATAL("getHdrCapabilities_2_3: _hidl_cb not called, but must be called once.");
    }

    return _hidl_err;
}

::android::status_t BnHwComposerClient::_hidl_getDisplayBrightnessSupport(
        ::android::hidl::base::V1_0::BnHwBase* _hidl_this,
        const ::android::hardware::Parcel &_hidl_data,
        ::android::hardware::Parcel *_hidl_reply,
        TransactCallback _hidl_cb) {
    #ifdef __ANDROID_DEBUGGABLE__
    bool mEnableInstrumentation = _hidl_this->isInstrumentationEnabled();
    const auto &mInstrumentationCallbacks = _hidl_this->getInstrumentationCallbacks();
    #endif // __ANDROID_DEBUGGABLE__

    ::android::status_t _hidl_err = ::android::OK;
    if (!_hidl_data.enforceInterface(BnHwComposerClient::Pure::descriptor)) {
        _hidl_err = ::android::BAD_TYPE;
        return _hidl_err;
    }

    uint64_t display;

    _hidl_err = _hidl_data.readUint64(&display);
    if (_hidl_err != ::android::OK) { return _hidl_err; }

    atrace_begin(ATRACE_TAG_HAL, "HIDL::IComposerClient::getDisplayBrightnessSupport::server");
    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        _hidl_args.push_back((void *)&display);
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::SERVER_API_ENTRY, "android.hardware.graphics.composer", "2.3", "IComposerClient", "getDisplayBrightnessSupport", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    bool _hidl_callbackCalled = false;

    ::android::hardware::Return<void> _hidl_ret = static_cast<IComposerClient*>(_hidl_this->getImpl().get())->getDisplayBrightnessSupport(display, [&](const auto &_hidl_out_error, const auto &_hidl_out_support) {
        if (_hidl_callbackCalled) {
            LOG_ALWAYS_FATAL("getDisplayBrightnessSupport: _hidl_cb called a second time, but must be called once.");
        }
        _hidl_callbackCalled = true;

        ::android::hardware::writeToParcel(::android::hardware::Status::ok(), _hidl_reply);

        _hidl_err = _hidl_reply->writeInt32((int32_t)_hidl_out_error);
        if (_hidl_err != ::android::OK) { goto _hidl_error; }

        _hidl_err = _hidl_reply->writeBool(_hidl_out_support);
        if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_error:
        atrace_end(ATRACE_TAG_HAL);
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&_hidl_out_error);
            _hidl_args.push_back((void *)&_hidl_out_support);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::SERVER_API_EXIT, "android.hardware.graphics.composer", "2.3", "IComposerClient", "getDisplayBrightnessSupport", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        if (_hidl_err != ::android::OK) { return; }
        _hidl_cb(*_hidl_reply);
    });

    _hidl_ret.assertOk();
    if (!_hidl_callbackCalled) {
        LOG_ALWAYS_FATAL("getDisplayBrightnessSupport: _hidl_cb not called, but must be called once.");
    }

    return _hidl_err;
}

::android::status_t BnHwComposerClient::_hidl_setDisplayBrightness(
        ::android::hidl::base::V1_0::BnHwBase* _hidl_this,
        const ::android::hardware::Parcel &_hidl_data,
        ::android::hardware::Parcel *_hidl_reply,
        TransactCallback _hidl_cb) {
    #ifdef __ANDROID_DEBUGGABLE__
    bool mEnableInstrumentation = _hidl_this->isInstrumentationEnabled();
    const auto &mInstrumentationCallbacks = _hidl_this->getInstrumentationCallbacks();
    #endif // __ANDROID_DEBUGGABLE__

    ::android::status_t _hidl_err = ::android::OK;
    if (!_hidl_data.enforceInterface(BnHwComposerClient::Pure::descriptor)) {
        _hidl_err = ::android::BAD_TYPE;
        return _hidl_err;
    }

    uint64_t display;
    float brightness;

    _hidl_err = _hidl_data.readUint64(&display);
    if (_hidl_err != ::android::OK) { return _hidl_err; }

    _hidl_err = _hidl_data.readFloat(&brightness);
    if (_hidl_err != ::android::OK) { return _hidl_err; }

    atrace_begin(ATRACE_TAG_HAL, "HIDL::IComposerClient::setDisplayBrightness::server");
    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        _hidl_args.push_back((void *)&display);
        _hidl_args.push_back((void *)&brightness);
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::SERVER_API_ENTRY, "android.hardware.graphics.composer", "2.3", "IComposerClient", "setDisplayBrightness", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    ::android::hardware::graphics::composer::V2_1::Error _hidl_out_error = static_cast<IComposerClient*>(_hidl_this->getImpl().get())->setDisplayBrightness(display, brightness);

    ::android::hardware::writeToParcel(::android::hardware::Status::ok(), _hidl_reply);

    _hidl_err = _hidl_reply->writeInt32((int32_t)_hidl_out_error);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

_hidl_error:
    atrace_end(ATRACE_TAG_HAL);
    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        _hidl_args.push_back((void *)&_hidl_out_error);
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::SERVER_API_EXIT, "android.hardware.graphics.composer", "2.3", "IComposerClient", "setDisplayBrightness", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    if (_hidl_err != ::android::OK) { return _hidl_err; }
    _hidl_cb(*_hidl_reply);
    return _hidl_err;
}


// Methods from ::android::hardware::graphics::composer::V2_1::IComposerClient follow.

// Methods from ::android::hardware::graphics::composer::V2_2::IComposerClient follow.

// Methods from ::android::hardware::graphics::composer::V2_3::IComposerClient follow.

// Methods from ::android::hidl::base::V1_0::IBase follow.
::android::hardware::Return<void> BnHwComposerClient::ping() {
    return ::android::hardware::Void();
}
::android::hardware::Return<void> BnHwComposerClient::getDebugInfo(getDebugInfo_cb _hidl_cb) {
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

::android::status_t BnHwComposerClient::onTransact(
        uint32_t _hidl_code,
        const ::android::hardware::Parcel &_hidl_data,
        ::android::hardware::Parcel *_hidl_reply,
        uint32_t _hidl_flags,
        TransactCallback _hidl_cb) {
    ::android::status_t _hidl_err = ::android::OK;

    switch (_hidl_code) {
        case 1 /* registerCallback */:
        {
            _hidl_err = ::android::hardware::graphics::composer::V2_1::BnHwComposerClient::_hidl_registerCallback(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 2 /* getMaxVirtualDisplayCount */:
        {
            _hidl_err = ::android::hardware::graphics::composer::V2_1::BnHwComposerClient::_hidl_getMaxVirtualDisplayCount(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 3 /* createVirtualDisplay */:
        {
            _hidl_err = ::android::hardware::graphics::composer::V2_1::BnHwComposerClient::_hidl_createVirtualDisplay(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 4 /* destroyVirtualDisplay */:
        {
            _hidl_err = ::android::hardware::graphics::composer::V2_1::BnHwComposerClient::_hidl_destroyVirtualDisplay(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 5 /* createLayer */:
        {
            _hidl_err = ::android::hardware::graphics::composer::V2_1::BnHwComposerClient::_hidl_createLayer(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 6 /* destroyLayer */:
        {
            _hidl_err = ::android::hardware::graphics::composer::V2_1::BnHwComposerClient::_hidl_destroyLayer(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 7 /* getActiveConfig */:
        {
            _hidl_err = ::android::hardware::graphics::composer::V2_1::BnHwComposerClient::_hidl_getActiveConfig(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 8 /* getClientTargetSupport */:
        {
            _hidl_err = ::android::hardware::graphics::composer::V2_1::BnHwComposerClient::_hidl_getClientTargetSupport(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 9 /* getColorModes */:
        {
            _hidl_err = ::android::hardware::graphics::composer::V2_1::BnHwComposerClient::_hidl_getColorModes(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 10 /* getDisplayAttribute */:
        {
            _hidl_err = ::android::hardware::graphics::composer::V2_1::BnHwComposerClient::_hidl_getDisplayAttribute(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 11 /* getDisplayConfigs */:
        {
            _hidl_err = ::android::hardware::graphics::composer::V2_1::BnHwComposerClient::_hidl_getDisplayConfigs(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 12 /* getDisplayName */:
        {
            _hidl_err = ::android::hardware::graphics::composer::V2_1::BnHwComposerClient::_hidl_getDisplayName(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 13 /* getDisplayType */:
        {
            _hidl_err = ::android::hardware::graphics::composer::V2_1::BnHwComposerClient::_hidl_getDisplayType(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 14 /* getDozeSupport */:
        {
            _hidl_err = ::android::hardware::graphics::composer::V2_1::BnHwComposerClient::_hidl_getDozeSupport(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 15 /* getHdrCapabilities */:
        {
            _hidl_err = ::android::hardware::graphics::composer::V2_1::BnHwComposerClient::_hidl_getHdrCapabilities(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 16 /* setClientTargetSlotCount */:
        {
            _hidl_err = ::android::hardware::graphics::composer::V2_1::BnHwComposerClient::_hidl_setClientTargetSlotCount(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 17 /* setActiveConfig */:
        {
            _hidl_err = ::android::hardware::graphics::composer::V2_1::BnHwComposerClient::_hidl_setActiveConfig(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 18 /* setColorMode */:
        {
            _hidl_err = ::android::hardware::graphics::composer::V2_1::BnHwComposerClient::_hidl_setColorMode(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 19 /* setPowerMode */:
        {
            _hidl_err = ::android::hardware::graphics::composer::V2_1::BnHwComposerClient::_hidl_setPowerMode(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 20 /* setVsyncEnabled */:
        {
            _hidl_err = ::android::hardware::graphics::composer::V2_1::BnHwComposerClient::_hidl_setVsyncEnabled(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 21 /* setInputCommandQueue */:
        {
            _hidl_err = ::android::hardware::graphics::composer::V2_1::BnHwComposerClient::_hidl_setInputCommandQueue(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 22 /* getOutputCommandQueue */:
        {
            _hidl_err = ::android::hardware::graphics::composer::V2_1::BnHwComposerClient::_hidl_getOutputCommandQueue(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 23 /* executeCommands */:
        {
            _hidl_err = ::android::hardware::graphics::composer::V2_1::BnHwComposerClient::_hidl_executeCommands(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 24 /* getPerFrameMetadataKeys */:
        {
            _hidl_err = ::android::hardware::graphics::composer::V2_2::BnHwComposerClient::_hidl_getPerFrameMetadataKeys(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 25 /* getReadbackBufferAttributes */:
        {
            _hidl_err = ::android::hardware::graphics::composer::V2_2::BnHwComposerClient::_hidl_getReadbackBufferAttributes(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 26 /* getReadbackBufferFence */:
        {
            _hidl_err = ::android::hardware::graphics::composer::V2_2::BnHwComposerClient::_hidl_getReadbackBufferFence(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 27 /* setReadbackBuffer */:
        {
            _hidl_err = ::android::hardware::graphics::composer::V2_2::BnHwComposerClient::_hidl_setReadbackBuffer(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 28 /* createVirtualDisplay_2_2 */:
        {
            _hidl_err = ::android::hardware::graphics::composer::V2_2::BnHwComposerClient::_hidl_createVirtualDisplay_2_2(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 29 /* getClientTargetSupport_2_2 */:
        {
            _hidl_err = ::android::hardware::graphics::composer::V2_2::BnHwComposerClient::_hidl_getClientTargetSupport_2_2(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 30 /* setPowerMode_2_2 */:
        {
            _hidl_err = ::android::hardware::graphics::composer::V2_2::BnHwComposerClient::_hidl_setPowerMode_2_2(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 31 /* getColorModes_2_2 */:
        {
            _hidl_err = ::android::hardware::graphics::composer::V2_2::BnHwComposerClient::_hidl_getColorModes_2_2(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 32 /* getRenderIntents */:
        {
            _hidl_err = ::android::hardware::graphics::composer::V2_2::BnHwComposerClient::_hidl_getRenderIntents(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 33 /* setColorMode_2_2 */:
        {
            _hidl_err = ::android::hardware::graphics::composer::V2_2::BnHwComposerClient::_hidl_setColorMode_2_2(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 34 /* getDataspaceSaturationMatrix */:
        {
            _hidl_err = ::android::hardware::graphics::composer::V2_2::BnHwComposerClient::_hidl_getDataspaceSaturationMatrix(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 35 /* executeCommands_2_2 */:
        {
            _hidl_err = ::android::hardware::graphics::composer::V2_2::BnHwComposerClient::_hidl_executeCommands_2_2(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 36 /* getDisplayIdentificationData */:
        {
            _hidl_err = ::android::hardware::graphics::composer::V2_3::BnHwComposerClient::_hidl_getDisplayIdentificationData(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 37 /* getReadbackBufferAttributes_2_3 */:
        {
            _hidl_err = ::android::hardware::graphics::composer::V2_3::BnHwComposerClient::_hidl_getReadbackBufferAttributes_2_3(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 38 /* getClientTargetSupport_2_3 */:
        {
            _hidl_err = ::android::hardware::graphics::composer::V2_3::BnHwComposerClient::_hidl_getClientTargetSupport_2_3(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 39 /* getDisplayedContentSamplingAttributes */:
        {
            _hidl_err = ::android::hardware::graphics::composer::V2_3::BnHwComposerClient::_hidl_getDisplayedContentSamplingAttributes(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 40 /* setDisplayedContentSamplingEnabled */:
        {
            _hidl_err = ::android::hardware::graphics::composer::V2_3::BnHwComposerClient::_hidl_setDisplayedContentSamplingEnabled(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 41 /* getDisplayedContentSample */:
        {
            _hidl_err = ::android::hardware::graphics::composer::V2_3::BnHwComposerClient::_hidl_getDisplayedContentSample(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 42 /* executeCommands_2_3 */:
        {
            _hidl_err = ::android::hardware::graphics::composer::V2_3::BnHwComposerClient::_hidl_executeCommands_2_3(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 43 /* getRenderIntents_2_3 */:
        {
            _hidl_err = ::android::hardware::graphics::composer::V2_3::BnHwComposerClient::_hidl_getRenderIntents_2_3(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 44 /* getColorModes_2_3 */:
        {
            _hidl_err = ::android::hardware::graphics::composer::V2_3::BnHwComposerClient::_hidl_getColorModes_2_3(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 45 /* setColorMode_2_3 */:
        {
            _hidl_err = ::android::hardware::graphics::composer::V2_3::BnHwComposerClient::_hidl_setColorMode_2_3(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 46 /* getDisplayCapabilities */:
        {
            _hidl_err = ::android::hardware::graphics::composer::V2_3::BnHwComposerClient::_hidl_getDisplayCapabilities(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 47 /* getPerFrameMetadataKeys_2_3 */:
        {
            _hidl_err = ::android::hardware::graphics::composer::V2_3::BnHwComposerClient::_hidl_getPerFrameMetadataKeys_2_3(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 48 /* getHdrCapabilities_2_3 */:
        {
            _hidl_err = ::android::hardware::graphics::composer::V2_3::BnHwComposerClient::_hidl_getHdrCapabilities_2_3(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 49 /* getDisplayBrightnessSupport */:
        {
            _hidl_err = ::android::hardware::graphics::composer::V2_3::BnHwComposerClient::_hidl_getDisplayBrightnessSupport(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 50 /* setDisplayBrightness */:
        {
            _hidl_err = ::android::hardware::graphics::composer::V2_3::BnHwComposerClient::_hidl_setDisplayBrightness(this, _hidl_data, _hidl_reply, _hidl_cb);
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

BsComposerClient::BsComposerClient(const ::android::sp<::android::hardware::graphics::composer::V2_3::IComposerClient> impl) : ::android::hardware::details::HidlInstrumentor("android.hardware.graphics.composer@2.3", "IComposerClient"), mImpl(impl) {
    mOnewayQueue.start(3000 /* similar limit to binderized */);
}

::android::hardware::Return<void> BsComposerClient::addOnewayTask(std::function<void(void)> fun) {
    if (!mOnewayQueue.push(fun)) {
        return ::android::hardware::Status::fromExceptionCode(
                ::android::hardware::Status::EX_TRANSACTION_FAILED,
                "Passthrough oneway function queue exceeds maximum size.");
    }
    return ::android::hardware::Status();
}

::android::sp<IComposerClient> IComposerClient::tryGetService(const std::string &serviceName, const bool getStub) {
    return ::android::hardware::details::getServiceInternal<BpHwComposerClient>(serviceName, false, getStub);
}

::android::sp<IComposerClient> IComposerClient::getService(const std::string &serviceName, const bool getStub) {
    return ::android::hardware::details::getServiceInternal<BpHwComposerClient>(serviceName, true, getStub);
}

::android::status_t IComposerClient::registerAsService(const std::string &serviceName) {
    return ::android::hardware::details::registerAsServiceInternal(this, serviceName);
}

bool IComposerClient::registerForNotifications(
        const std::string &serviceName,
        const ::android::sp<::android::hidl::manager::V1_0::IServiceNotification> &notification) {
    const ::android::sp<::android::hidl::manager::V1_0::IServiceManager> sm
            = ::android::hardware::defaultServiceManager();
    if (sm == nullptr) {
        return false;
    }
    ::android::hardware::Return<bool> success =
            sm->registerForNotifications("android.hardware.graphics.composer@2.3::IComposerClient",
                    serviceName, notification);
    return success.isOk() && success;
}

static_assert(sizeof(::android::hardware::MQDescriptor<char, ::android::hardware::kSynchronizedReadWrite>) == 32, "wrong size");
static_assert(sizeof(::android::hardware::hidl_handle) == 16, "wrong size");
static_assert(sizeof(::android::hardware::hidl_memory) == 40, "wrong size");
static_assert(sizeof(::android::hardware::hidl_string) == 16, "wrong size");
static_assert(sizeof(::android::hardware::hidl_vec<char>) == 16, "wrong size");

}  // namespace V2_3
}  // namespace composer
}  // namespace graphics
}  // namespace hardware
}  // namespace android
