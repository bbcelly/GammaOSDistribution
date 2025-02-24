#ifndef HIDL_GENERATED_ANDROID_FRAMEWORKS_CAMERASERVICE_SERVICE_V2_2_BNHWCAMERASERVICE_H
#define HIDL_GENERATED_ANDROID_FRAMEWORKS_CAMERASERVICE_SERVICE_V2_2_BNHWCAMERASERVICE_H

#include <android/frameworks/cameraservice/service/2.2/IHwCameraService.h>

namespace android {
namespace frameworks {
namespace cameraservice {
namespace service {
namespace V2_2 {

struct BnHwCameraService : public ::android::hidl::base::V1_0::BnHwBase {
    explicit BnHwCameraService(const ::android::sp<ICameraService> &_hidl_impl);
    explicit BnHwCameraService(const ::android::sp<ICameraService> &_hidl_impl, const std::string& HidlInstrumentor_package, const std::string& HidlInstrumentor_interface);

    virtual ~BnHwCameraService();

    ::android::status_t onTransact(
            uint32_t _hidl_code,
            const ::android::hardware::Parcel &_hidl_data,
            ::android::hardware::Parcel *_hidl_reply,
            uint32_t _hidl_flags = 0,
            TransactCallback _hidl_cb = nullptr) override;


    /**
     * The pure class is what this class wraps.
     */
    typedef ICameraService Pure;

    /**
     * Type tag for use in template logic that indicates this is a 'native' class.
     */
    typedef ::android::hardware::details::bnhw_tag _hidl_tag;

    ::android::sp<ICameraService> getImpl() { return _hidl_mImpl; }

private:
    // Methods from ::android::frameworks::cameraservice::service::V2_0::ICameraService follow.

    // Methods from ::android::frameworks::cameraservice::service::V2_1::ICameraService follow.

    // Methods from ::android::hidl::base::V1_0::IBase follow.
    ::android::hardware::Return<void> ping();
    using getDebugInfo_cb = ::android::hidl::base::V1_0::IBase::getDebugInfo_cb;
    ::android::hardware::Return<void> getDebugInfo(getDebugInfo_cb _hidl_cb);

    ::android::sp<ICameraService> _hidl_mImpl;
};

}  // namespace V2_2
}  // namespace service
}  // namespace cameraservice
}  // namespace frameworks
}  // namespace android

#endif  // HIDL_GENERATED_ANDROID_FRAMEWORKS_CAMERASERVICE_SERVICE_V2_2_BNHWCAMERASERVICE_H
