#pragma once

#include <android/binder_to_string.h>
#include <android/media/IAudioRecord.h>
#include <android/media/SharedFileRegion.h>
#include <binder/Parcel.h>
#include <binder/Status.h>
#include <cstdint>
#include <optional>
#include <tuple>
#include <utils/String16.h>

namespace android {

namespace media {

class CreateRecordResponse : public ::android::Parcelable {
public:
  inline bool operator!=(const CreateRecordResponse& rhs) const {
    return std::tie(flags, frameCount, notificationFrameCount, selectedDeviceId, sessionId, sampleRate, inputId, cblk, buffers, portId, audioRecord) != std::tie(rhs.flags, rhs.frameCount, rhs.notificationFrameCount, rhs.selectedDeviceId, rhs.sessionId, rhs.sampleRate, rhs.inputId, rhs.cblk, rhs.buffers, rhs.portId, rhs.audioRecord);
  }
  inline bool operator<(const CreateRecordResponse& rhs) const {
    return std::tie(flags, frameCount, notificationFrameCount, selectedDeviceId, sessionId, sampleRate, inputId, cblk, buffers, portId, audioRecord) < std::tie(rhs.flags, rhs.frameCount, rhs.notificationFrameCount, rhs.selectedDeviceId, rhs.sessionId, rhs.sampleRate, rhs.inputId, rhs.cblk, rhs.buffers, rhs.portId, rhs.audioRecord);
  }
  inline bool operator<=(const CreateRecordResponse& rhs) const {
    return std::tie(flags, frameCount, notificationFrameCount, selectedDeviceId, sessionId, sampleRate, inputId, cblk, buffers, portId, audioRecord) <= std::tie(rhs.flags, rhs.frameCount, rhs.notificationFrameCount, rhs.selectedDeviceId, rhs.sessionId, rhs.sampleRate, rhs.inputId, rhs.cblk, rhs.buffers, rhs.portId, rhs.audioRecord);
  }
  inline bool operator==(const CreateRecordResponse& rhs) const {
    return std::tie(flags, frameCount, notificationFrameCount, selectedDeviceId, sessionId, sampleRate, inputId, cblk, buffers, portId, audioRecord) == std::tie(rhs.flags, rhs.frameCount, rhs.notificationFrameCount, rhs.selectedDeviceId, rhs.sessionId, rhs.sampleRate, rhs.inputId, rhs.cblk, rhs.buffers, rhs.portId, rhs.audioRecord);
  }
  inline bool operator>(const CreateRecordResponse& rhs) const {
    return std::tie(flags, frameCount, notificationFrameCount, selectedDeviceId, sessionId, sampleRate, inputId, cblk, buffers, portId, audioRecord) > std::tie(rhs.flags, rhs.frameCount, rhs.notificationFrameCount, rhs.selectedDeviceId, rhs.sessionId, rhs.sampleRate, rhs.inputId, rhs.cblk, rhs.buffers, rhs.portId, rhs.audioRecord);
  }
  inline bool operator>=(const CreateRecordResponse& rhs) const {
    return std::tie(flags, frameCount, notificationFrameCount, selectedDeviceId, sessionId, sampleRate, inputId, cblk, buffers, portId, audioRecord) >= std::tie(rhs.flags, rhs.frameCount, rhs.notificationFrameCount, rhs.selectedDeviceId, rhs.sessionId, rhs.sampleRate, rhs.inputId, rhs.cblk, rhs.buffers, rhs.portId, rhs.audioRecord);
  }

  int32_t flags = int32_t(0);
  int64_t frameCount = int64_t(0L);
  int64_t notificationFrameCount = int64_t(0L);
  int32_t selectedDeviceId = int32_t(0);
  int32_t sessionId = int32_t(0);
  int32_t sampleRate = int32_t(0);
  int32_t inputId = int32_t(0);
  ::std::optional<::android::media::SharedFileRegion> cblk;
  ::std::optional<::android::media::SharedFileRegion> buffers;
  int32_t portId = int32_t(0);
  ::android::sp<::android::media::IAudioRecord> audioRecord;
  ::android::status_t readFromParcel(const ::android::Parcel* _aidl_parcel) final;
  ::android::status_t writeToParcel(::android::Parcel* _aidl_parcel) const final;
  static const ::android::String16& getParcelableDescriptor() {
    static const ::android::StaticString16 DESCIPTOR (u"android.media.CreateRecordResponse");
    return DESCIPTOR;
  }
  inline std::string toString() const {
    std::ostringstream os;
    os << "CreateRecordResponse{";
    os << "flags: " << ::android::internal::ToString(flags);
    os << ", frameCount: " << ::android::internal::ToString(frameCount);
    os << ", notificationFrameCount: " << ::android::internal::ToString(notificationFrameCount);
    os << ", selectedDeviceId: " << ::android::internal::ToString(selectedDeviceId);
    os << ", sessionId: " << ::android::internal::ToString(sessionId);
    os << ", sampleRate: " << ::android::internal::ToString(sampleRate);
    os << ", inputId: " << ::android::internal::ToString(inputId);
    os << ", cblk: " << ::android::internal::ToString(cblk);
    os << ", buffers: " << ::android::internal::ToString(buffers);
    os << ", portId: " << ::android::internal::ToString(portId);
    os << ", audioRecord: " << ::android::internal::ToString(audioRecord);
    os << "}";
    return os.str();
  }
};  // class CreateRecordResponse

}  // namespace media

}  // namespace android
