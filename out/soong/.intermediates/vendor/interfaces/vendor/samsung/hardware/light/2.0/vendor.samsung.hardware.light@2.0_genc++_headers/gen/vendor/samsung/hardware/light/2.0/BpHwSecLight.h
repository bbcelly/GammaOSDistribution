#ifndef HIDL_GENERATED_VENDOR_SAMSUNG_HARDWARE_LIGHT_V2_0_BPHWSECLIGHT_H
#define HIDL_GENERATED_VENDOR_SAMSUNG_HARDWARE_LIGHT_V2_0_BPHWSECLIGHT_H

#include <hidl/HidlTransportSupport.h>

#include <vendor/samsung/hardware/light/2.0/IHwSecLight.h>

namespace vendor {
namespace samsung {
namespace hardware {
namespace light {
namespace V2_0 {

struct BpHwSecLight : public ::android::hardware::BpInterface<ISecLight>, public ::android::hardware::details::HidlInstrumentor {
    explicit BpHwSecLight(const ::android::sp<::android::hardware::IBinder> &_hidl_impl);

    /**
     * The pure class is what this class wraps.
     */
    typedef ISecLight Pure;

    /**
     * Type tag for use in template logic that indicates this is a 'proxy' class.
     */
    typedef ::android::hardware::details::bphw_tag _hidl_tag;

    virtual bool isRemote() const override { return true; }

    void onLastStrongRef(const void* id) override;

    // Methods from ::vendor::samsung::hardware::light::V2_0::ISecLight follow.
    static ::android::hardware::Return<::android::hardware::light::V2_0::Status>  _hidl_setLightSec(::android::hardware::IInterface* _hidl_this, ::android::hardware::details::HidlInstrumentor *_hidl_this_instrumentor, ::vendor::samsung::hardware::light::V2_0::SecType type, const ::android::hardware::light::V2_0::LightState& lightState);

    // Methods from ::android::hardware::light::V2_0::ILight follow.
    ::android::hardware::Return<::android::hardware::light::V2_0::Status> setLight(::android::hardware::light::V2_0::Type type, const ::android::hardware::light::V2_0::LightState& state) override;
    ::android::hardware::Return<void> getSupportedTypes(getSupportedTypes_cb _hidl_cb) override;

    // Methods from ::vendor::samsung::hardware::light::V2_0::ISecLight follow.
    ::android::hardware::Return<::android::hardware::light::V2_0::Status> setLightSec(::vendor::samsung::hardware::light::V2_0::SecType type, const ::android::hardware::light::V2_0::LightState& lightState) override;

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

}  // namespace V2_0
}  // namespace light
}  // namespace hardware
}  // namespace samsung
}  // namespace vendor

#endif  // HIDL_GENERATED_VENDOR_SAMSUNG_HARDWARE_LIGHT_V2_0_BPHWSECLIGHT_H
