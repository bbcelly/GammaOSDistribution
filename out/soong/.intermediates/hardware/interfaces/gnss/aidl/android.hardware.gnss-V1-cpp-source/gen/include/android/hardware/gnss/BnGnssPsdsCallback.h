#pragma once

#include <binder/IInterface.h>
#include <android/hardware/gnss/IGnssPsdsCallback.h>

namespace android {

namespace hardware {

namespace gnss {

class BnGnssPsdsCallback : public ::android::BnInterface<IGnssPsdsCallback> {
public:
  static constexpr uint32_t TRANSACTION_downloadRequestCb = ::android::IBinder::FIRST_CALL_TRANSACTION + 0;
  static constexpr uint32_t TRANSACTION_getInterfaceVersion = ::android::IBinder::FIRST_CALL_TRANSACTION + 16777214;
  static constexpr uint32_t TRANSACTION_getInterfaceHash = ::android::IBinder::FIRST_CALL_TRANSACTION + 16777213;
  explicit BnGnssPsdsCallback();
  ::android::status_t onTransact(uint32_t _aidl_code, const ::android::Parcel& _aidl_data, ::android::Parcel* _aidl_reply, uint32_t _aidl_flags) override;
  int32_t getInterfaceVersion() final;
  std::string getInterfaceHash();
};  // class BnGnssPsdsCallback

}  // namespace gnss

}  // namespace hardware

}  // namespace android
