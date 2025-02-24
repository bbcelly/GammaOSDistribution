#pragma once

#include <android/binder_to_string.h>
#include <binder/Parcel.h>
#include <binder/Status.h>
#include <cstdint>
#include <tuple>
#include <utils/String16.h>
#include <vector>

namespace android {

namespace security {

namespace identity {

class AuthKeyParcel : public ::android::Parcelable {
public:
  inline bool operator!=(const AuthKeyParcel& rhs) const {
    return std::tie(x509cert) != std::tie(rhs.x509cert);
  }
  inline bool operator<(const AuthKeyParcel& rhs) const {
    return std::tie(x509cert) < std::tie(rhs.x509cert);
  }
  inline bool operator<=(const AuthKeyParcel& rhs) const {
    return std::tie(x509cert) <= std::tie(rhs.x509cert);
  }
  inline bool operator==(const AuthKeyParcel& rhs) const {
    return std::tie(x509cert) == std::tie(rhs.x509cert);
  }
  inline bool operator>(const AuthKeyParcel& rhs) const {
    return std::tie(x509cert) > std::tie(rhs.x509cert);
  }
  inline bool operator>=(const AuthKeyParcel& rhs) const {
    return std::tie(x509cert) >= std::tie(rhs.x509cert);
  }

  ::std::vector<uint8_t> x509cert;
  ::android::status_t readFromParcel(const ::android::Parcel* _aidl_parcel) final;
  ::android::status_t writeToParcel(::android::Parcel* _aidl_parcel) const final;
  static const ::android::String16& getParcelableDescriptor() {
    static const ::android::StaticString16 DESCIPTOR (u"android.security.identity.AuthKeyParcel");
    return DESCIPTOR;
  }
  inline std::string toString() const {
    std::ostringstream os;
    os << "AuthKeyParcel{";
    os << "x509cert: " << ::android::internal::ToString(x509cert);
    os << "}";
    return os.str();
  }
};  // class AuthKeyParcel

}  // namespace identity

}  // namespace security

}  // namespace android
