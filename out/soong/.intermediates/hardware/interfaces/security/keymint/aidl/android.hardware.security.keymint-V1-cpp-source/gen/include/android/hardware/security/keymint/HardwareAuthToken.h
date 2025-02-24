#pragma once

#include <android/binder_to_string.h>
#include <android/hardware/security/keymint/HardwareAuthenticatorType.h>
#include <android/hardware/security/secureclock/Timestamp.h>
#include <binder/Parcel.h>
#include <binder/Status.h>
#include <cstdint>
#include <tuple>
#include <utils/String16.h>
#include <vector>

namespace android {

namespace hardware {

namespace security {

namespace keymint {

class HardwareAuthToken : public ::android::Parcelable {
public:
  inline bool operator!=(const HardwareAuthToken& rhs) const {
    return std::tie(challenge, userId, authenticatorId, authenticatorType, timestamp, mac) != std::tie(rhs.challenge, rhs.userId, rhs.authenticatorId, rhs.authenticatorType, rhs.timestamp, rhs.mac);
  }
  inline bool operator<(const HardwareAuthToken& rhs) const {
    return std::tie(challenge, userId, authenticatorId, authenticatorType, timestamp, mac) < std::tie(rhs.challenge, rhs.userId, rhs.authenticatorId, rhs.authenticatorType, rhs.timestamp, rhs.mac);
  }
  inline bool operator<=(const HardwareAuthToken& rhs) const {
    return std::tie(challenge, userId, authenticatorId, authenticatorType, timestamp, mac) <= std::tie(rhs.challenge, rhs.userId, rhs.authenticatorId, rhs.authenticatorType, rhs.timestamp, rhs.mac);
  }
  inline bool operator==(const HardwareAuthToken& rhs) const {
    return std::tie(challenge, userId, authenticatorId, authenticatorType, timestamp, mac) == std::tie(rhs.challenge, rhs.userId, rhs.authenticatorId, rhs.authenticatorType, rhs.timestamp, rhs.mac);
  }
  inline bool operator>(const HardwareAuthToken& rhs) const {
    return std::tie(challenge, userId, authenticatorId, authenticatorType, timestamp, mac) > std::tie(rhs.challenge, rhs.userId, rhs.authenticatorId, rhs.authenticatorType, rhs.timestamp, rhs.mac);
  }
  inline bool operator>=(const HardwareAuthToken& rhs) const {
    return std::tie(challenge, userId, authenticatorId, authenticatorType, timestamp, mac) >= std::tie(rhs.challenge, rhs.userId, rhs.authenticatorId, rhs.authenticatorType, rhs.timestamp, rhs.mac);
  }

  int64_t challenge = int64_t(0L);
  int64_t userId = int64_t(0L);
  int64_t authenticatorId = int64_t(0L);
  ::android::hardware::security::keymint::HardwareAuthenticatorType authenticatorType = ::android::hardware::security::keymint::HardwareAuthenticatorType(::android::hardware::security::keymint::HardwareAuthenticatorType::NONE);
  ::android::hardware::security::secureclock::Timestamp timestamp;
  ::std::vector<uint8_t> mac;
  ::android::Parcelable::Stability getStability() const override { return ::android::Parcelable::Stability::STABILITY_VINTF; }
  ::android::status_t readFromParcel(const ::android::Parcel* _aidl_parcel) final;
  ::android::status_t writeToParcel(::android::Parcel* _aidl_parcel) const final;
  static const ::android::String16& getParcelableDescriptor() {
    static const ::android::StaticString16 DESCIPTOR (u"android.hardware.security.keymint.HardwareAuthToken");
    return DESCIPTOR;
  }
  inline std::string toString() const {
    std::ostringstream os;
    os << "HardwareAuthToken{";
    os << "challenge: " << ::android::internal::ToString(challenge);
    os << ", userId: " << ::android::internal::ToString(userId);
    os << ", authenticatorId: " << ::android::internal::ToString(authenticatorId);
    os << ", authenticatorType: " << ::android::internal::ToString(authenticatorType);
    os << ", timestamp: " << ::android::internal::ToString(timestamp);
    os << ", mac: " << ::android::internal::ToString(mac);
    os << "}";
    return os.str();
  }
};  // class HardwareAuthToken

}  // namespace keymint

}  // namespace security

}  // namespace hardware

}  // namespace android
