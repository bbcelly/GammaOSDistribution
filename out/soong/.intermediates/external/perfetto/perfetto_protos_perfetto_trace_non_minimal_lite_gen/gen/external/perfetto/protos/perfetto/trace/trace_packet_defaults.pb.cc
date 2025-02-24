// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/trace/trace_packet_defaults.proto

#include "protos/perfetto/trace/trace_packet_defaults.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
extern PROTOBUF_INTERNAL_EXPORT_protos_2fperfetto_2ftrace_2fprofiling_2fprofile_5fpacket_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_PerfSampleDefaults_protos_2fperfetto_2ftrace_2fprofiling_2fprofile_5fpacket_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_protos_2fperfetto_2ftrace_2ftrack_5fevent_2ftrack_5fevent_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_TrackEventDefaults_protos_2fperfetto_2ftrace_2ftrack_5fevent_2ftrack_5fevent_2eproto;
namespace perfetto {
namespace protos {
class TracePacketDefaultsDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<TracePacketDefaults> _instance;
} _TracePacketDefaults_default_instance_;
}  // namespace protos
}  // namespace perfetto
static void InitDefaultsscc_info_TracePacketDefaults_protos_2fperfetto_2ftrace_2ftrace_5fpacket_5fdefaults_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::perfetto::protos::_TracePacketDefaults_default_instance_;
    new (ptr) ::perfetto::protos::TracePacketDefaults();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::perfetto::protos::TracePacketDefaults::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<2> scc_info_TracePacketDefaults_protos_2fperfetto_2ftrace_2ftrace_5fpacket_5fdefaults_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 2, InitDefaultsscc_info_TracePacketDefaults_protos_2fperfetto_2ftrace_2ftrace_5fpacket_5fdefaults_2eproto}, {
      &scc_info_TrackEventDefaults_protos_2fperfetto_2ftrace_2ftrack_5fevent_2ftrack_5fevent_2eproto.base,
      &scc_info_PerfSampleDefaults_protos_2fperfetto_2ftrace_2fprofiling_2fprofile_5fpacket_2eproto.base,}};

namespace perfetto {
namespace protos {

// ===================================================================

void TracePacketDefaults::InitAsDefaultInstance() {
  ::perfetto::protos::_TracePacketDefaults_default_instance_._instance.get_mutable()->track_event_defaults_ = const_cast< ::perfetto::protos::TrackEventDefaults*>(
      ::perfetto::protos::TrackEventDefaults::internal_default_instance());
  ::perfetto::protos::_TracePacketDefaults_default_instance_._instance.get_mutable()->perf_sample_defaults_ = const_cast< ::perfetto::protos::PerfSampleDefaults*>(
      ::perfetto::protos::PerfSampleDefaults::internal_default_instance());
}
class TracePacketDefaults::_Internal {
 public:
  using HasBits = decltype(std::declval<TracePacketDefaults>()._has_bits_);
  static void set_has_timestamp_clock_id(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static const ::perfetto::protos::TrackEventDefaults& track_event_defaults(const TracePacketDefaults* msg);
  static void set_has_track_event_defaults(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static const ::perfetto::protos::PerfSampleDefaults& perf_sample_defaults(const TracePacketDefaults* msg);
  static void set_has_perf_sample_defaults(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
};

const ::perfetto::protos::TrackEventDefaults&
TracePacketDefaults::_Internal::track_event_defaults(const TracePacketDefaults* msg) {
  return *msg->track_event_defaults_;
}
const ::perfetto::protos::PerfSampleDefaults&
TracePacketDefaults::_Internal::perf_sample_defaults(const TracePacketDefaults* msg) {
  return *msg->perf_sample_defaults_;
}
void TracePacketDefaults::clear_track_event_defaults() {
  if (track_event_defaults_ != nullptr) track_event_defaults_->Clear();
  _has_bits_[0] &= ~0x00000001u;
}
void TracePacketDefaults::clear_perf_sample_defaults() {
  if (perf_sample_defaults_ != nullptr) perf_sample_defaults_->Clear();
  _has_bits_[0] &= ~0x00000002u;
}
TracePacketDefaults::TracePacketDefaults()
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:perfetto.protos.TracePacketDefaults)
}
TracePacketDefaults::TracePacketDefaults(const TracePacketDefaults& from)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_track_event_defaults()) {
    track_event_defaults_ = new ::perfetto::protos::TrackEventDefaults(*from.track_event_defaults_);
  } else {
    track_event_defaults_ = nullptr;
  }
  if (from.has_perf_sample_defaults()) {
    perf_sample_defaults_ = new ::perfetto::protos::PerfSampleDefaults(*from.perf_sample_defaults_);
  } else {
    perf_sample_defaults_ = nullptr;
  }
  timestamp_clock_id_ = from.timestamp_clock_id_;
  // @@protoc_insertion_point(copy_constructor:perfetto.protos.TracePacketDefaults)
}

void TracePacketDefaults::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_TracePacketDefaults_protos_2fperfetto_2ftrace_2ftrace_5fpacket_5fdefaults_2eproto.base);
  ::memset(&track_event_defaults_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&timestamp_clock_id_) -
      reinterpret_cast<char*>(&track_event_defaults_)) + sizeof(timestamp_clock_id_));
}

TracePacketDefaults::~TracePacketDefaults() {
  // @@protoc_insertion_point(destructor:perfetto.protos.TracePacketDefaults)
  SharedDtor();
}

void TracePacketDefaults::SharedDtor() {
  if (this != internal_default_instance()) delete track_event_defaults_;
  if (this != internal_default_instance()) delete perf_sample_defaults_;
}

void TracePacketDefaults::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const TracePacketDefaults& TracePacketDefaults::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_TracePacketDefaults_protos_2fperfetto_2ftrace_2ftrace_5fpacket_5fdefaults_2eproto.base);
  return *internal_default_instance();
}


void TracePacketDefaults::Clear() {
// @@protoc_insertion_point(message_clear_start:perfetto.protos.TracePacketDefaults)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      GOOGLE_DCHECK(track_event_defaults_ != nullptr);
      track_event_defaults_->Clear();
    }
    if (cached_has_bits & 0x00000002u) {
      GOOGLE_DCHECK(perf_sample_defaults_ != nullptr);
      perf_sample_defaults_->Clear();
    }
  }
  timestamp_clock_id_ = 0u;
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* TracePacketDefaults::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // optional .perfetto.protos.TrackEventDefaults track_event_defaults = 11;
      case 11:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 90)) {
          ptr = ctx->ParseMessage(mutable_track_event_defaults(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional .perfetto.protos.PerfSampleDefaults perf_sample_defaults = 12;
      case 12:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 98)) {
          ptr = ctx->ParseMessage(mutable_perf_sample_defaults(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional uint32 timestamp_clock_id = 58;
      case 58:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 208)) {
          _Internal::set_has_timestamp_clock_id(&has_bits);
          timestamp_clock_id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  _has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}
#else  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
bool TracePacketDefaults::MergePartialFromCodedStream(
    ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::PROTOBUF_NAMESPACE_ID::uint32 tag;
  ::PROTOBUF_NAMESPACE_ID::internal::LiteUnknownFieldSetter unknown_fields_setter(
      &_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::io::StringOutputStream unknown_fields_output(
      unknown_fields_setter.buffer());
  ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_output, false);
  // @@protoc_insertion_point(parse_start:perfetto.protos.TracePacketDefaults)
  for (;;) {
    ::std::pair<::PROTOBUF_NAMESPACE_ID::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(16383u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .perfetto.protos.TrackEventDefaults track_event_defaults = 11;
      case 11: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (90 & 0xFF)) {
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadMessage(
               input, mutable_track_event_defaults()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional .perfetto.protos.PerfSampleDefaults perf_sample_defaults = 12;
      case 12: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (98 & 0xFF)) {
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadMessage(
               input, mutable_perf_sample_defaults()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional uint32 timestamp_clock_id = 58;
      case 58: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (464 & 0xFF)) {
          _Internal::set_has_timestamp_clock_id(&_has_bits_);
          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPrimitive<
                   ::PROTOBUF_NAMESPACE_ID::uint32, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_UINT32>(
                 input, &timestamp_clock_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SkipField(
            input, tag, &unknown_fields_stream));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:perfetto.protos.TracePacketDefaults)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:perfetto.protos.TracePacketDefaults)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void TracePacketDefaults::SerializeWithCachedSizes(
    ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:perfetto.protos.TracePacketDefaults)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional .perfetto.protos.TrackEventDefaults track_event_defaults = 11;
  if (cached_has_bits & 0x00000001u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteMessage(
      11, _Internal::track_event_defaults(this), output);
  }

  // optional .perfetto.protos.PerfSampleDefaults perf_sample_defaults = 12;
  if (cached_has_bits & 0x00000002u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteMessage(
      12, _Internal::perf_sample_defaults(this), output);
  }

  // optional uint32 timestamp_clock_id = 58;
  if (cached_has_bits & 0x00000004u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32(58, this->timestamp_clock_id(), output);
  }

  output->WriteRaw(_internal_metadata_.unknown_fields().data(),
                   static_cast<int>(_internal_metadata_.unknown_fields().size()));
  // @@protoc_insertion_point(serialize_end:perfetto.protos.TracePacketDefaults)
}

size_t TracePacketDefaults::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:perfetto.protos.TracePacketDefaults)
  size_t total_size = 0;

  total_size += _internal_metadata_.unknown_fields().size();

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    // optional .perfetto.protos.TrackEventDefaults track_event_defaults = 11;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *track_event_defaults_);
    }

    // optional .perfetto.protos.PerfSampleDefaults perf_sample_defaults = 12;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *perf_sample_defaults_);
    }

    // optional uint32 timestamp_clock_id = 58;
    if (cached_has_bits & 0x00000004u) {
      total_size += 2 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
          this->timestamp_clock_id());
    }

  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void TracePacketDefaults::CheckTypeAndMergeFrom(
    const ::PROTOBUF_NAMESPACE_ID::MessageLite& from) {
  MergeFrom(*::PROTOBUF_NAMESPACE_ID::internal::DownCast<const TracePacketDefaults*>(
      &from));
}

void TracePacketDefaults::MergeFrom(const TracePacketDefaults& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:perfetto.protos.TracePacketDefaults)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    if (cached_has_bits & 0x00000001u) {
      mutable_track_event_defaults()->::perfetto::protos::TrackEventDefaults::MergeFrom(from.track_event_defaults());
    }
    if (cached_has_bits & 0x00000002u) {
      mutable_perf_sample_defaults()->::perfetto::protos::PerfSampleDefaults::MergeFrom(from.perf_sample_defaults());
    }
    if (cached_has_bits & 0x00000004u) {
      timestamp_clock_id_ = from.timestamp_clock_id_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void TracePacketDefaults::CopyFrom(const TracePacketDefaults& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:perfetto.protos.TracePacketDefaults)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool TracePacketDefaults::IsInitialized() const {
  return true;
}

void TracePacketDefaults::InternalSwap(TracePacketDefaults* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  swap(track_event_defaults_, other->track_event_defaults_);
  swap(perf_sample_defaults_, other->perf_sample_defaults_);
  swap(timestamp_clock_id_, other->timestamp_clock_id_);
}

std::string TracePacketDefaults::GetTypeName() const {
  return "perfetto.protos.TracePacketDefaults";
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::perfetto::protos::TracePacketDefaults* Arena::CreateMaybeMessage< ::perfetto::protos::TracePacketDefaults >(Arena* arena) {
  return Arena::CreateInternal< ::perfetto::protos::TracePacketDefaults >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
