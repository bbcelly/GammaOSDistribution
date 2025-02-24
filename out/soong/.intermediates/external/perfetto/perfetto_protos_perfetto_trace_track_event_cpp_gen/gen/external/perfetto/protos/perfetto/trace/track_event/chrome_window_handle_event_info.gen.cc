#include "perfetto/protozero/message.h"
#include "perfetto/protozero/packed_repeated_fields.h"
#include "perfetto/protozero/proto_decoder.h"
#include "perfetto/protozero/scattered_heap_buffer.h"
// DO NOT EDIT. Autogenerated by Perfetto cppgen_plugin
#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wfloat-equal"
#endif
#include "protos/perfetto/trace/track_event/chrome_window_handle_event_info.gen.h"

namespace perfetto {
namespace protos {
namespace gen {

ChromeWindowHandleEventInfo::ChromeWindowHandleEventInfo() = default;
ChromeWindowHandleEventInfo::~ChromeWindowHandleEventInfo() = default;
ChromeWindowHandleEventInfo::ChromeWindowHandleEventInfo(const ChromeWindowHandleEventInfo&) = default;
ChromeWindowHandleEventInfo& ChromeWindowHandleEventInfo::operator=(const ChromeWindowHandleEventInfo&) = default;
ChromeWindowHandleEventInfo::ChromeWindowHandleEventInfo(ChromeWindowHandleEventInfo&&) noexcept = default;
ChromeWindowHandleEventInfo& ChromeWindowHandleEventInfo::operator=(ChromeWindowHandleEventInfo&&) = default;

bool ChromeWindowHandleEventInfo::operator==(const ChromeWindowHandleEventInfo& other) const {
  return unknown_fields_ == other.unknown_fields_
   && dpi_ == other.dpi_
   && message_id_ == other.message_id_
   && hwnd_ptr_ == other.hwnd_ptr_;
}

bool ChromeWindowHandleEventInfo::ParseFromArray(const void* raw, size_t size) {
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* dpi */:
        field.get(&dpi_);
        break;
      case 2 /* message_id */:
        field.get(&message_id_);
        break;
      case 3 /* hwnd_ptr */:
        field.get(&hwnd_ptr_);
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string ChromeWindowHandleEventInfo::SerializeAsString() const {
  ::protozero::HeapBuffered<::protozero::Message> msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> ChromeWindowHandleEventInfo::SerializeAsArray() const {
  ::protozero::HeapBuffered<::protozero::Message> msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void ChromeWindowHandleEventInfo::Serialize(::protozero::Message* msg) const {
  // Field 1: dpi
  if (_has_field_[1]) {
    msg->AppendVarInt(1, dpi_);
  }

  // Field 2: message_id
  if (_has_field_[2]) {
    msg->AppendVarInt(2, message_id_);
  }

  // Field 3: hwnd_ptr
  if (_has_field_[3]) {
    msg->AppendFixed(3, hwnd_ptr_);
  }

  msg->AppendRawProtoBytes(unknown_fields_.data(), unknown_fields_.size());
}

}  // namespace perfetto
}  // namespace protos
}  // namespace gen
#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic pop
#endif
