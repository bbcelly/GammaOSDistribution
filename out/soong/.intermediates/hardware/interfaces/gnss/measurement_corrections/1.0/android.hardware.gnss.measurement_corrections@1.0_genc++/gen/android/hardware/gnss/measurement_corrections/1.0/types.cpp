#define LOG_TAG "android.hardware.gnss.measurement_corrections@1.0::types"

#include <log/log.h>
#include <cutils/trace.h>
#include <hidl/HidlTransportSupport.h>

#include <hidl/Static.h>
#include <hwbinder/ProcessState.h>
#include <utils/Trace.h>
#include <android/hardware/gnss/measurement_corrections/1.0/types.h>
#include <android/hardware/gnss/measurement_corrections/1.0/hwtypes.h>

namespace android {
namespace hardware {
namespace gnss {
namespace measurement_corrections {
namespace V1_0 {

::android::status_t readEmbeddedFromParcel(
        const MeasurementCorrections &obj,
        const ::android::hardware::Parcel &parcel,
        size_t parentHandle,
        size_t parentOffset) {
    ::android::status_t _hidl_err = ::android::OK;

    size_t _hidl_satCorrections_child;

    _hidl_err = ::android::hardware::readEmbeddedFromParcel(
            const_cast<::android::hardware::hidl_vec<::android::hardware::gnss::measurement_corrections::V1_0::SingleSatCorrection> &>(obj.satCorrections),
            parcel,
            parentHandle,
            parentOffset + offsetof(::android::hardware::gnss::measurement_corrections::V1_0::MeasurementCorrections, satCorrections), &_hidl_satCorrections_child);

    if (_hidl_err != ::android::OK) { return _hidl_err; }

    return _hidl_err;
}

::android::status_t writeEmbeddedToParcel(
        const MeasurementCorrections &obj,
        ::android::hardware::Parcel *parcel,
        size_t parentHandle,
        size_t parentOffset) {
    ::android::status_t _hidl_err = ::android::OK;

    size_t _hidl_satCorrections_child;

    _hidl_err = ::android::hardware::writeEmbeddedToParcel(
            obj.satCorrections,
            parcel,
            parentHandle,
            parentOffset + offsetof(::android::hardware::gnss::measurement_corrections::V1_0::MeasurementCorrections, satCorrections), &_hidl_satCorrections_child);

    if (_hidl_err != ::android::OK) { return _hidl_err; }

    return _hidl_err;
}

static_assert(sizeof(::android::hardware::MQDescriptor<char, ::android::hardware::kSynchronizedReadWrite>) == 32, "wrong size");
static_assert(sizeof(::android::hardware::hidl_handle) == 16, "wrong size");
static_assert(sizeof(::android::hardware::hidl_memory) == 40, "wrong size");
static_assert(sizeof(::android::hardware::hidl_string) == 16, "wrong size");
static_assert(sizeof(::android::hardware::hidl_vec<char>) == 16, "wrong size");

}  // namespace V1_0
}  // namespace measurement_corrections
}  // namespace gnss
}  // namespace hardware
}  // namespace android
