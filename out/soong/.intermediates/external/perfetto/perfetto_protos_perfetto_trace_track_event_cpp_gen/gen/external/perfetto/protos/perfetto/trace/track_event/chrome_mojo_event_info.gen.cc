#include "perfetto/protozero/message.h"
#include "perfetto/protozero/packed_repeated_fields.h"
#include "perfetto/protozero/proto_decoder.h"
#include "perfetto/protozero/scattered_heap_buffer.h"
// DO NOT EDIT. Autogenerated by Perfetto cppgen_plugin
#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wfloat-equal"
#endif
#include "protos/perfetto/trace/track_event/chrome_mojo_event_info.gen.h"

namespace perfetto {
namespace protos {
namespace gen {

ChromeMojoEventInfo::ChromeMojoEventInfo() = default;
ChromeMojoEventInfo::~ChromeMojoEventInfo() = default;
ChromeMojoEventInfo::ChromeMojoEventInfo(const ChromeMojoEventInfo&) = default;
ChromeMojoEventInfo& ChromeMojoEventInfo::operator=(const ChromeMojoEventInfo&) = default;
ChromeMojoEventInfo::ChromeMojoEventInfo(ChromeMojoEventInfo&&) noexcept = default;
ChromeMojoEventInfo& ChromeMojoEventInfo::operator=(ChromeMojoEventInfo&&) = default;

bool ChromeMojoEventInfo::operator==(const ChromeMojoEventInfo& other) const {
  return unknown_fields_ == other.unknown_fields_
   && watcher_notify_interface_tag_ == other.watcher_notify_interface_tag_
   && ipc_hash_ == other.ipc_hash_
   && mojo_interface_tag_ == other.mojo_interface_tag_;
}

bool ChromeMojoEventInfo::ParseFromArray(const void* raw, size_t size) {
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* watcher_notify_interface_tag */:
        field.get(&watcher_notify_interface_tag_);
        break;
      case 2 /* ipc_hash */:
        field.get(&ipc_hash_);
        break;
      case 3 /* mojo_interface_tag */:
        field.get(&mojo_interface_tag_);
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string ChromeMojoEventInfo::SerializeAsString() const {
  ::protozero::HeapBuffered<::protozero::Message> msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> ChromeMojoEventInfo::SerializeAsArray() const {
  ::protozero::HeapBuffered<::protozero::Message> msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void ChromeMojoEventInfo::Serialize(::protozero::Message* msg) const {
  // Field 1: watcher_notify_interface_tag
  if (_has_field_[1]) {
    msg->AppendString(1, watcher_notify_interface_tag_);
  }

  // Field 2: ipc_hash
  if (_has_field_[2]) {
    msg->AppendVarInt(2, ipc_hash_);
  }

  // Field 3: mojo_interface_tag
  if (_has_field_[3]) {
    msg->AppendString(3, mojo_interface_tag_);
  }

  msg->AppendRawProtoBytes(unknown_fields_.data(), unknown_fields_.size());
}

}  // namespace perfetto
}  // namespace protos
}  // namespace gen
#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic pop
#endif
