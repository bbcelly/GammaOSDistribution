#ifndef HIDL_GENERATED_VENDOR_SAMSUNG_HARDWARE_CAMERA_DEVICE_V5_0_BPHWSEHCAMERADEVICE_H
#define HIDL_GENERATED_VENDOR_SAMSUNG_HARDWARE_CAMERA_DEVICE_V5_0_BPHWSEHCAMERADEVICE_H

#include <hidl/HidlTransportSupport.h>

#include <vendor/samsung/hardware/camera/device/5.0/IHwSehCameraDevice.h>

namespace vendor {
namespace samsung {
namespace hardware {
namespace camera {
namespace device {
namespace V5_0 {

struct BpHwSehCameraDevice : public ::android::hardware::BpInterface<ISehCameraDevice>, public ::android::hardware::details::HidlInstrumentor {
    explicit BpHwSehCameraDevice(const ::android::sp<::android::hardware::IBinder> &_hidl_impl);

    /**
     * The pure class is what this class wraps.
     */
    typedef ISehCameraDevice Pure;

    /**
     * Type tag for use in template logic that indicates this is a 'proxy' class.
     */
    typedef ::android::hardware::details::bphw_tag _hidl_tag;

    virtual bool isRemote() const override { return true; }

    void onLastStrongRef(const void* id) override;

    // Methods from ::vendor::samsung::hardware::camera::device::V5_0::ISehCameraDevice follow.
    static ::android::hardware::Return<::android::hardware::camera::common::V1_0::Status>  _hidl_sehSetTorchModeStrength(::android::hardware::IInterface* _hidl_this, ::android::hardware::details::HidlInstrumentor *_hidl_this_instrumentor, ::android::hardware::camera::common::V1_0::TorchMode mode, uint32_t strength);

    // Methods from ::android::hardware::camera::device::V3_2::ICameraDevice follow.
    ::android::hardware::Return<void> getResourceCost(getResourceCost_cb _hidl_cb) override;
    ::android::hardware::Return<void> getCameraCharacteristics(getCameraCharacteristics_cb _hidl_cb) override;
    ::android::hardware::Return<::android::hardware::camera::common::V1_0::Status> setTorchMode(::android::hardware::camera::common::V1_0::TorchMode mode) override;
    ::android::hardware::Return<void> open(const ::android::sp<::android::hardware::camera::device::V3_2::ICameraDeviceCallback>& callback, open_cb _hidl_cb) override;
    ::android::hardware::Return<void> dumpState(const ::android::hardware::hidl_handle& fd) override;

    // Methods from ::android::hardware::camera::device::V3_5::ICameraDevice follow.
    ::android::hardware::Return<void> getPhysicalCameraCharacteristics(const ::android::hardware::hidl_string& physicalCameraId, getPhysicalCameraCharacteristics_cb _hidl_cb) override;
    ::android::hardware::Return<void> isStreamCombinationSupported(const ::android::hardware::camera::device::V3_4::StreamConfiguration& streams, isStreamCombinationSupported_cb _hidl_cb) override;

    // Methods from ::vendor::samsung::hardware::camera::device::V5_0::ISehCameraDevice follow.
    ::android::hardware::Return<::android::hardware::camera::common::V1_0::Status> sehSetTorchModeStrength(::android::hardware::camera::common::V1_0::TorchMode mode, uint32_t strength) override;

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

}  // namespace V5_0
}  // namespace device
}  // namespace camera
}  // namespace hardware
}  // namespace samsung
}  // namespace vendor

#endif  // HIDL_GENERATED_VENDOR_SAMSUNG_HARDWARE_CAMERA_DEVICE_V5_0_BPHWSEHCAMERADEVICE_H
