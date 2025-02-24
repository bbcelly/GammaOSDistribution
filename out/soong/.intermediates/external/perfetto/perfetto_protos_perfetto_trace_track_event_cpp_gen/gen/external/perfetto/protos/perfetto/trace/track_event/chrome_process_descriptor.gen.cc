#include "perfetto/protozero/message.h"
#include "perfetto/protozero/packed_repeated_fields.h"
#include "perfetto/protozero/proto_decoder.h"
#include "perfetto/protozero/scattered_heap_buffer.h"
// DO NOT EDIT. Autogenerated by Perfetto cppgen_plugin
#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wfloat-equal"
#endif
#include "protos/perfetto/trace/track_event/chrome_process_descriptor.gen.h"

namespace perfetto {
namespace protos {
namespace gen {

ChromeProcessDescriptor::ChromeProcessDescriptor() = default;
ChromeProcessDescriptor::~ChromeProcessDescriptor() = default;
ChromeProcessDescriptor::ChromeProcessDescriptor(const ChromeProcessDescriptor&) = default;
ChromeProcessDescriptor& ChromeProcessDescriptor::operator=(const ChromeProcessDescriptor&) = default;
ChromeProcessDescriptor::ChromeProcessDescriptor(ChromeProcessDescriptor&&) noexcept = default;
ChromeProcessDescriptor& ChromeProcessDescriptor::operator=(ChromeProcessDescriptor&&) = default;

bool ChromeProcessDescriptor::operator==(const ChromeProcessDescriptor& other) const {
  return unknown_fields_ == other.unknown_fields_
   && process_type_ == other.process_type_
   && process_priority_ == other.process_priority_
   && legacy_sort_index_ == other.legacy_sort_index_
   && host_app_package_name_ == other.host_app_package_name_
   && crash_trace_id_ == other.crash_trace_id_;
}

bool ChromeProcessDescriptor::ParseFromArray(const void* raw, size_t size) {
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* process_type */:
        field.get(&process_type_);
        break;
      case 2 /* process_priority */:
        field.get(&process_priority_);
        break;
      case 3 /* legacy_sort_index */:
        field.get(&legacy_sort_index_);
        break;
      case 4 /* host_app_package_name */:
        field.get(&host_app_package_name_);
        break;
      case 5 /* crash_trace_id */:
        field.get(&crash_trace_id_);
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string ChromeProcessDescriptor::SerializeAsString() const {
  ::protozero::HeapBuffered<::protozero::Message> msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> ChromeProcessDescriptor::SerializeAsArray() const {
  ::protozero::HeapBuffered<::protozero::Message> msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void ChromeProcessDescriptor::Serialize(::protozero::Message* msg) const {
  // Field 1: process_type
  if (_has_field_[1]) {
    msg->AppendVarInt(1, process_type_);
  }

  // Field 2: process_priority
  if (_has_field_[2]) {
    msg->AppendVarInt(2, process_priority_);
  }

  // Field 3: legacy_sort_index
  if (_has_field_[3]) {
    msg->AppendVarInt(3, legacy_sort_index_);
  }

  // Field 4: host_app_package_name
  if (_has_field_[4]) {
    msg->AppendString(4, host_app_package_name_);
  }

  // Field 5: crash_trace_id
  if (_has_field_[5]) {
    msg->AppendVarInt(5, crash_trace_id_);
  }

  msg->AppendRawProtoBytes(unknown_fields_.data(), unknown_fields_.size());
}

}  // namespace perfetto
}  // namespace protos
}  // namespace gen
#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic pop
#endif
