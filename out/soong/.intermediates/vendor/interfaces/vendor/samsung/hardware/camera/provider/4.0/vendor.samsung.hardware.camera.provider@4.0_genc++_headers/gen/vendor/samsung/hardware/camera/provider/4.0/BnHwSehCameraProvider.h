#ifndef HIDL_GENERATED_VENDOR_SAMSUNG_HARDWARE_CAMERA_PROVIDER_V4_0_BNHWSEHCAMERAPROVIDER_H
#define HIDL_GENERATED_VENDOR_SAMSUNG_HARDWARE_CAMERA_PROVIDER_V4_0_BNHWSEHCAMERAPROVIDER_H

#include <vendor/samsung/hardware/camera/provider/4.0/IHwSehCameraProvider.h>

namespace vendor {
namespace samsung {
namespace hardware {
namespace camera {
namespace provider {
namespace V4_0 {

struct BnHwSehCameraProvider : public ::android::hidl::base::V1_0::BnHwBase {
    explicit BnHwSehCameraProvider(const ::android::sp<ISehCameraProvider> &_hidl_impl);
    explicit BnHwSehCameraProvider(const ::android::sp<ISehCameraProvider> &_hidl_impl, const std::string& HidlInstrumentor_package, const std::string& HidlInstrumentor_interface);

    virtual ~BnHwSehCameraProvider();

    ::android::status_t onTransact(
            uint32_t _hidl_code,
            const ::android::hardware::Parcel &_hidl_data,
            ::android::hardware::Parcel *_hidl_reply,
            uint32_t _hidl_flags = 0,
            TransactCallback _hidl_cb = nullptr) override;


    /**
     * The pure class is what this class wraps.
     */
    typedef ISehCameraProvider Pure;

    /**
     * Type tag for use in template logic that indicates this is a 'native' class.
     */
    typedef ::android::hardware::details::bnhw_tag _hidl_tag;

    ::android::sp<ISehCameraProvider> getImpl() { return _hidl_mImpl; }
    // Methods from ::vendor::samsung::hardware::camera::provider::V4_0::ISehCameraProvider follow.
    static ::android::status_t _hidl_sehGetCameraIdList(
            ::android::hidl::base::V1_0::BnHwBase* _hidl_this,
            const ::android::hardware::Parcel &_hidl_data,
            ::android::hardware::Parcel *_hidl_reply,
            TransactCallback _hidl_cb);



private:
    // Methods from ::android::hardware::camera::provider::V2_4::ICameraProvider follow.

    // Methods from ::android::hardware::camera::provider::V2_5::ICameraProvider follow.

    // Methods from ::android::hardware::camera::provider::V2_6::ICameraProvider follow.

    // Methods from ::vendor::samsung::hardware::camera::provider::V4_0::ISehCameraProvider follow.

    // Methods from ::android::hidl::base::V1_0::IBase follow.
    ::android::hardware::Return<void> ping();
    using getDebugInfo_cb = ::android::hidl::base::V1_0::IBase::getDebugInfo_cb;
    ::android::hardware::Return<void> getDebugInfo(getDebugInfo_cb _hidl_cb);

    ::android::sp<ISehCameraProvider> _hidl_mImpl;
};

}  // namespace V4_0
}  // namespace provider
}  // namespace camera
}  // namespace hardware
}  // namespace samsung
}  // namespace vendor

#endif  // HIDL_GENERATED_VENDOR_SAMSUNG_HARDWARE_CAMERA_PROVIDER_V4_0_BNHWSEHCAMERAPROVIDER_H
