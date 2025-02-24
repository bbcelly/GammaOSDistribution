#ifndef HIDL_GENERATED_ANDROID_HARDWARE_CAMERA_PROVIDER_V2_7_HWTYPES_H
#define HIDL_GENERATED_ANDROID_HARDWARE_CAMERA_PROVIDER_V2_7_HWTYPES_H

#include <android/hardware/camera/provider/2.7/types.h>

#include <android/hardware/camera/device/3.7/hwtypes.h>

#include <hidl/Status.h>
#include <hwbinder/IBinder.h>
#include <hwbinder/Parcel.h>

namespace android {
namespace hardware {
namespace camera {
namespace provider {
namespace V2_7 {
::android::status_t readEmbeddedFromParcel(
        const ::android::hardware::camera::provider::V2_7::CameraIdAndStreamCombination &obj,
        const ::android::hardware::Parcel &parcel,
        size_t parentHandle,
        size_t parentOffset);

::android::status_t writeEmbeddedToParcel(
        const ::android::hardware::camera::provider::V2_7::CameraIdAndStreamCombination &obj,
        ::android::hardware::Parcel *parcel,
        size_t parentHandle,
        size_t parentOffset);

}  // namespace V2_7
}  // namespace provider
}  // namespace camera
}  // namespace hardware
}  // namespace android

#endif  // HIDL_GENERATED_ANDROID_HARDWARE_CAMERA_PROVIDER_V2_7_HWTYPES_H
