#include "aidl/android/media/MediaObservableFilter.h"

#include <android/binder_parcel_utils.h>

namespace aidl {
namespace android {
namespace media {
const char* MediaObservableFilter::descriptor = "android.media.MediaObservableFilter";

binder_status_t MediaObservableFilter::readFromParcel(const AParcel* parcel) {
  int32_t _aidl_parcelable_size;
  int32_t _aidl_start_pos = AParcel_getDataPosition(parcel);
  binder_status_t _aidl_ret_status = AParcel_readInt32(parcel, &_aidl_parcelable_size);
  if (_aidl_start_pos > INT32_MAX - _aidl_parcelable_size) return STATUS_BAD_VALUE;
  if (_aidl_parcelable_size < 0) return STATUS_BAD_VALUE;
  if (_aidl_ret_status != STATUS_OK) return _aidl_ret_status;

  if (AParcel_getDataPosition(parcel) - _aidl_start_pos >= _aidl_parcelable_size) {
    AParcel_setDataPosition(parcel, _aidl_start_pos + _aidl_parcelable_size);
    return _aidl_ret_status;
  }
  _aidl_ret_status = AParcel_readInt32(parcel, reinterpret_cast<int32_t*>(&type));
  if (_aidl_ret_status != STATUS_OK) return _aidl_ret_status;

  if (AParcel_getDataPosition(parcel) - _aidl_start_pos >= _aidl_parcelable_size) {
    AParcel_setDataPosition(parcel, _aidl_start_pos + _aidl_parcelable_size);
    return _aidl_ret_status;
  }
  _aidl_ret_status = AParcel_readInt64(parcel, reinterpret_cast<int64_t*>(&eventFilter));
  if (_aidl_ret_status != STATUS_OK) return _aidl_ret_status;

  AParcel_setDataPosition(parcel, _aidl_start_pos + _aidl_parcelable_size);
  return _aidl_ret_status;
}
binder_status_t MediaObservableFilter::writeToParcel(AParcel* parcel) const {
  binder_status_t _aidl_ret_status;
  size_t _aidl_start_pos = AParcel_getDataPosition(parcel);
  _aidl_ret_status = AParcel_writeInt32(parcel, 0);
  if (_aidl_ret_status != STATUS_OK) return _aidl_ret_status;

  _aidl_ret_status = AParcel_writeInt32(parcel, static_cast<int32_t>(type));
  if (_aidl_ret_status != STATUS_OK) return _aidl_ret_status;

  _aidl_ret_status = AParcel_writeInt64(parcel, static_cast<int64_t>(eventFilter));
  if (_aidl_ret_status != STATUS_OK) return _aidl_ret_status;

  size_t _aidl_end_pos = AParcel_getDataPosition(parcel);
  AParcel_setDataPosition(parcel, _aidl_start_pos);
  AParcel_writeInt32(parcel, _aidl_end_pos - _aidl_start_pos);
  AParcel_setDataPosition(parcel, _aidl_end_pos);
  return _aidl_ret_status;
}

}  // namespace media
}  // namespace android
}  // namespace aidl
