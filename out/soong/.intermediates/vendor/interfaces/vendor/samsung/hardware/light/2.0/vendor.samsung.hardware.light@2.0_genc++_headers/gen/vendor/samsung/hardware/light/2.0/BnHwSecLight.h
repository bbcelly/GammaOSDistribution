#ifndef HIDL_GENERATED_VENDOR_SAMSUNG_HARDWARE_LIGHT_V2_0_BNHWSECLIGHT_H
#define HIDL_GENERATED_VENDOR_SAMSUNG_HARDWARE_LIGHT_V2_0_BNHWSECLIGHT_H

#include <vendor/samsung/hardware/light/2.0/IHwSecLight.h>

namespace vendor {
namespace samsung {
namespace hardware {
namespace light {
namespace V2_0 {

struct BnHwSecLight : public ::android::hidl::base::V1_0::BnHwBase {
    explicit BnHwSecLight(const ::android::sp<ISecLight> &_hidl_impl);
    explicit BnHwSecLight(const ::android::sp<ISecLight> &_hidl_impl, const std::string& HidlInstrumentor_package, const std::string& HidlInstrumentor_interface);

    virtual ~BnHwSecLight();

    ::android::status_t onTransact(
            uint32_t _hidl_code,
            const ::android::hardware::Parcel &_hidl_data,
            ::android::hardware::Parcel *_hidl_reply,
            uint32_t _hidl_flags = 0,
            TransactCallback _hidl_cb = nullptr) override;


    /**
     * The pure class is what this class wraps.
     */
    typedef ISecLight Pure;

    /**
     * Type tag for use in template logic that indicates this is a 'native' class.
     */
    typedef ::android::hardware::details::bnhw_tag _hidl_tag;

    ::android::sp<ISecLight> getImpl() { return _hidl_mImpl; }
    // Methods from ::vendor::samsung::hardware::light::V2_0::ISecLight follow.
    static ::android::status_t _hidl_setLightSec(
            ::android::hidl::base::V1_0::BnHwBase* _hidl_this,
            const ::android::hardware::Parcel &_hidl_data,
            ::android::hardware::Parcel *_hidl_reply,
            TransactCallback _hidl_cb);



private:
    // Methods from ::android::hardware::light::V2_0::ILight follow.

    // Methods from ::vendor::samsung::hardware::light::V2_0::ISecLight follow.

    // Methods from ::android::hidl::base::V1_0::IBase follow.
    ::android::hardware::Return<void> ping();
    using getDebugInfo_cb = ::android::hidl::base::V1_0::IBase::getDebugInfo_cb;
    ::android::hardware::Return<void> getDebugInfo(getDebugInfo_cb _hidl_cb);

    ::android::sp<ISecLight> _hidl_mImpl;
};

}  // namespace V2_0
}  // namespace light
}  // namespace hardware
}  // namespace samsung
}  // namespace vendor

#endif  // HIDL_GENERATED_VENDOR_SAMSUNG_HARDWARE_LIGHT_V2_0_BNHWSECLIGHT_H
