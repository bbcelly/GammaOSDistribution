// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: frameworks/base/core/proto/android/app/profilerinfo.proto

#include "frameworks/base/core/proto/android/app/profilerinfo.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
namespace android {
namespace app {
class ProfilerInfoProtoDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<ProfilerInfoProto> _instance;
} _ProfilerInfoProto_default_instance_;
}  // namespace app
}  // namespace android
static void InitDefaultsscc_info_ProfilerInfoProto_frameworks_2fbase_2fcore_2fproto_2fandroid_2fapp_2fprofilerinfo_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::android::app::_ProfilerInfoProto_default_instance_;
    new (ptr) ::android::app::ProfilerInfoProto();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::android::app::ProfilerInfoProto::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_ProfilerInfoProto_frameworks_2fbase_2fcore_2fproto_2fandroid_2fapp_2fprofilerinfo_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsscc_info_ProfilerInfoProto_frameworks_2fbase_2fcore_2fproto_2fandroid_2fapp_2fprofilerinfo_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_frameworks_2fbase_2fcore_2fproto_2fandroid_2fapp_2fprofilerinfo_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_frameworks_2fbase_2fcore_2fproto_2fandroid_2fapp_2fprofilerinfo_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_frameworks_2fbase_2fcore_2fproto_2fandroid_2fapp_2fprofilerinfo_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_frameworks_2fbase_2fcore_2fproto_2fandroid_2fapp_2fprofilerinfo_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::android::app::ProfilerInfoProto, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::android::app::ProfilerInfoProto, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::android::app::ProfilerInfoProto, profile_file_),
  PROTOBUF_FIELD_OFFSET(::android::app::ProfilerInfoProto, profile_fd_),
  PROTOBUF_FIELD_OFFSET(::android::app::ProfilerInfoProto, sampling_interval_),
  PROTOBUF_FIELD_OFFSET(::android::app::ProfilerInfoProto, auto_stop_profiler_),
  PROTOBUF_FIELD_OFFSET(::android::app::ProfilerInfoProto, streaming_output_),
  PROTOBUF_FIELD_OFFSET(::android::app::ProfilerInfoProto, agent_),
  0,
  2,
  3,
  4,
  5,
  1,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 11, sizeof(::android::app::ProfilerInfoProto)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::android::app::_ProfilerInfoProto_default_instance_),
};

const char descriptor_table_protodef_frameworks_2fbase_2fcore_2fproto_2fandroid_2fapp_2fprofilerinfo_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n9frameworks/base/core/proto/android/app"
  "/profilerinfo.proto\022\013android.app\0320framew"
  "orks/base/core/proto/android/privacy.pro"
  "to\"\250\001\n\021ProfilerInfoProto\022\024\n\014profile_file"
  "\030\001 \001(\t\022\022\n\nprofile_fd\030\002 \001(\005\022\031\n\021sampling_i"
  "nterval\030\003 \001(\005\022\032\n\022auto_stop_profiler\030\004 \001("
  "\010\022\030\n\020streaming_output\030\005 \001(\010\022\r\n\005agent\030\006 \001"
  "(\t:\t\232\237\325\207\003\003\010\310\001B\002P\001"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_frameworks_2fbase_2fcore_2fproto_2fandroid_2fapp_2fprofilerinfo_2eproto_deps[1] = {
  &::descriptor_table_frameworks_2fbase_2fcore_2fproto_2fandroid_2fprivacy_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_frameworks_2fbase_2fcore_2fproto_2fandroid_2fapp_2fprofilerinfo_2eproto_sccs[1] = {
  &scc_info_ProfilerInfoProto_frameworks_2fbase_2fcore_2fproto_2fandroid_2fapp_2fprofilerinfo_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_frameworks_2fbase_2fcore_2fproto_2fandroid_2fapp_2fprofilerinfo_2eproto_once;
static bool descriptor_table_frameworks_2fbase_2fcore_2fproto_2fandroid_2fapp_2fprofilerinfo_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_frameworks_2fbase_2fcore_2fproto_2fandroid_2fapp_2fprofilerinfo_2eproto = {
  &descriptor_table_frameworks_2fbase_2fcore_2fproto_2fandroid_2fapp_2fprofilerinfo_2eproto_initialized, descriptor_table_protodef_frameworks_2fbase_2fcore_2fproto_2fandroid_2fapp_2fprofilerinfo_2eproto, "frameworks/base/core/proto/android/app/profilerinfo.proto", 297,
  &descriptor_table_frameworks_2fbase_2fcore_2fproto_2fandroid_2fapp_2fprofilerinfo_2eproto_once, descriptor_table_frameworks_2fbase_2fcore_2fproto_2fandroid_2fapp_2fprofilerinfo_2eproto_sccs, descriptor_table_frameworks_2fbase_2fcore_2fproto_2fandroid_2fapp_2fprofilerinfo_2eproto_deps, 1, 1,
  schemas, file_default_instances, TableStruct_frameworks_2fbase_2fcore_2fproto_2fandroid_2fapp_2fprofilerinfo_2eproto::offsets,
  file_level_metadata_frameworks_2fbase_2fcore_2fproto_2fandroid_2fapp_2fprofilerinfo_2eproto, 1, file_level_enum_descriptors_frameworks_2fbase_2fcore_2fproto_2fandroid_2fapp_2fprofilerinfo_2eproto, file_level_service_descriptors_frameworks_2fbase_2fcore_2fproto_2fandroid_2fapp_2fprofilerinfo_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_frameworks_2fbase_2fcore_2fproto_2fandroid_2fapp_2fprofilerinfo_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_frameworks_2fbase_2fcore_2fproto_2fandroid_2fapp_2fprofilerinfo_2eproto), true);
namespace android {
namespace app {

// ===================================================================

void ProfilerInfoProto::InitAsDefaultInstance() {
}
class ProfilerInfoProto::_Internal {
 public:
  using HasBits = decltype(std::declval<ProfilerInfoProto>()._has_bits_);
  static void set_has_profile_file(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_profile_fd(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_sampling_interval(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
  static void set_has_auto_stop_profiler(HasBits* has_bits) {
    (*has_bits)[0] |= 16u;
  }
  static void set_has_streaming_output(HasBits* has_bits) {
    (*has_bits)[0] |= 32u;
  }
  static void set_has_agent(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
};

ProfilerInfoProto::ProfilerInfoProto()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:android.app.ProfilerInfoProto)
}
ProfilerInfoProto::ProfilerInfoProto(const ProfilerInfoProto& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  profile_file_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from.has_profile_file()) {
    profile_file_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.profile_file_);
  }
  agent_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from.has_agent()) {
    agent_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.agent_);
  }
  ::memcpy(&profile_fd_, &from.profile_fd_,
    static_cast<size_t>(reinterpret_cast<char*>(&streaming_output_) -
    reinterpret_cast<char*>(&profile_fd_)) + sizeof(streaming_output_));
  // @@protoc_insertion_point(copy_constructor:android.app.ProfilerInfoProto)
}

void ProfilerInfoProto::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_ProfilerInfoProto_frameworks_2fbase_2fcore_2fproto_2fandroid_2fapp_2fprofilerinfo_2eproto.base);
  profile_file_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  agent_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  ::memset(&profile_fd_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&streaming_output_) -
      reinterpret_cast<char*>(&profile_fd_)) + sizeof(streaming_output_));
}

ProfilerInfoProto::~ProfilerInfoProto() {
  // @@protoc_insertion_point(destructor:android.app.ProfilerInfoProto)
  SharedDtor();
}

void ProfilerInfoProto::SharedDtor() {
  profile_file_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  agent_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void ProfilerInfoProto::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ProfilerInfoProto& ProfilerInfoProto::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_ProfilerInfoProto_frameworks_2fbase_2fcore_2fproto_2fandroid_2fapp_2fprofilerinfo_2eproto.base);
  return *internal_default_instance();
}


void ProfilerInfoProto::Clear() {
// @@protoc_insertion_point(message_clear_start:android.app.ProfilerInfoProto)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      profile_file_.ClearNonDefaultToEmptyNoArena();
    }
    if (cached_has_bits & 0x00000002u) {
      agent_.ClearNonDefaultToEmptyNoArena();
    }
  }
  if (cached_has_bits & 0x0000003cu) {
    ::memset(&profile_fd_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&streaming_output_) -
        reinterpret_cast<char*>(&profile_fd_)) + sizeof(streaming_output_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* ProfilerInfoProto::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // optional string profile_file = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParserUTF8Verify(mutable_profile_file(), ptr, ctx, "android.app.ProfilerInfoProto.profile_file");
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional int32 profile_fd = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          _Internal::set_has_profile_fd(&has_bits);
          profile_fd_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional int32 sampling_interval = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 24)) {
          _Internal::set_has_sampling_interval(&has_bits);
          sampling_interval_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional bool auto_stop_profiler = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 32)) {
          _Internal::set_has_auto_stop_profiler(&has_bits);
          auto_stop_profiler_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional bool streaming_output = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 40)) {
          _Internal::set_has_streaming_output(&has_bits);
          streaming_output_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional string agent = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 50)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParserUTF8Verify(mutable_agent(), ptr, ctx, "android.app.ProfilerInfoProto.agent");
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
bool ProfilerInfoProto::MergePartialFromCodedStream(
    ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::PROTOBUF_NAMESPACE_ID::uint32 tag;
  // @@protoc_insertion_point(parse_start:android.app.ProfilerInfoProto)
  for (;;) {
    ::std::pair<::PROTOBUF_NAMESPACE_ID::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string profile_file = 1;
      case 1: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (10 & 0xFF)) {
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadString(
                input, this->mutable_profile_file()));
          ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
            this->profile_file().data(), static_cast<int>(this->profile_file().length()),
            ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::PARSE,
            "android.app.ProfilerInfoProto.profile_file");
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional int32 profile_fd = 2;
      case 2: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (16 & 0xFF)) {
          _Internal::set_has_profile_fd(&_has_bits_);
          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPrimitive<
                   ::PROTOBUF_NAMESPACE_ID::int32, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_INT32>(
                 input, &profile_fd_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional int32 sampling_interval = 3;
      case 3: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (24 & 0xFF)) {
          _Internal::set_has_sampling_interval(&_has_bits_);
          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPrimitive<
                   ::PROTOBUF_NAMESPACE_ID::int32, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_INT32>(
                 input, &sampling_interval_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional bool auto_stop_profiler = 4;
      case 4: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (32 & 0xFF)) {
          _Internal::set_has_auto_stop_profiler(&_has_bits_);
          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPrimitive<
                   bool, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_BOOL>(
                 input, &auto_stop_profiler_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional bool streaming_output = 5;
      case 5: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (40 & 0xFF)) {
          _Internal::set_has_streaming_output(&_has_bits_);
          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPrimitive<
                   bool, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_BOOL>(
                 input, &streaming_output_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional string agent = 6;
      case 6: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (50 & 0xFF)) {
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadString(
                input, this->mutable_agent()));
          ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
            this->agent().data(), static_cast<int>(this->agent().length()),
            ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::PARSE,
            "android.app.ProfilerInfoProto.agent");
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
        DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:android.app.ProfilerInfoProto)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:android.app.ProfilerInfoProto)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void ProfilerInfoProto::SerializeWithCachedSizes(
    ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:android.app.ProfilerInfoProto)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional string profile_file = 1;
  if (cached_has_bits & 0x00000001u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->profile_file().data(), static_cast<int>(this->profile_file().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "android.app.ProfilerInfoProto.profile_file");
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->profile_file(), output);
  }

  // optional int32 profile_fd = 2;
  if (cached_has_bits & 0x00000004u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32(2, this->profile_fd(), output);
  }

  // optional int32 sampling_interval = 3;
  if (cached_has_bits & 0x00000008u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32(3, this->sampling_interval(), output);
  }

  // optional bool auto_stop_profiler = 4;
  if (cached_has_bits & 0x00000010u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBool(4, this->auto_stop_profiler(), output);
  }

  // optional bool streaming_output = 5;
  if (cached_has_bits & 0x00000020u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBool(5, this->streaming_output(), output);
  }

  // optional string agent = 6;
  if (cached_has_bits & 0x00000002u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->agent().data(), static_cast<int>(this->agent().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "android.app.ProfilerInfoProto.agent");
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteStringMaybeAliased(
      6, this->agent(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:android.app.ProfilerInfoProto)
}

::PROTOBUF_NAMESPACE_ID::uint8* ProfilerInfoProto::InternalSerializeWithCachedSizesToArray(
    ::PROTOBUF_NAMESPACE_ID::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:android.app.ProfilerInfoProto)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional string profile_file = 1;
  if (cached_has_bits & 0x00000001u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->profile_file().data(), static_cast<int>(this->profile_file().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "android.app.ProfilerInfoProto.profile_file");
    target =
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteStringToArray(
        1, this->profile_file(), target);
  }

  // optional int32 profile_fd = 2;
  if (cached_has_bits & 0x00000004u) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(2, this->profile_fd(), target);
  }

  // optional int32 sampling_interval = 3;
  if (cached_has_bits & 0x00000008u) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(3, this->sampling_interval(), target);
  }

  // optional bool auto_stop_profiler = 4;
  if (cached_has_bits & 0x00000010u) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(4, this->auto_stop_profiler(), target);
  }

  // optional bool streaming_output = 5;
  if (cached_has_bits & 0x00000020u) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(5, this->streaming_output(), target);
  }

  // optional string agent = 6;
  if (cached_has_bits & 0x00000002u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->agent().data(), static_cast<int>(this->agent().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "android.app.ProfilerInfoProto.agent");
    target =
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteStringToArray(
        6, this->agent(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:android.app.ProfilerInfoProto)
  return target;
}

size_t ProfilerInfoProto::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:android.app.ProfilerInfoProto)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x0000003fu) {
    // optional string profile_file = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->profile_file());
    }

    // optional string agent = 6;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->agent());
    }

    // optional int32 profile_fd = 2;
    if (cached_has_bits & 0x00000004u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
          this->profile_fd());
    }

    // optional int32 sampling_interval = 3;
    if (cached_has_bits & 0x00000008u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
          this->sampling_interval());
    }

    // optional bool auto_stop_profiler = 4;
    if (cached_has_bits & 0x00000010u) {
      total_size += 1 + 1;
    }

    // optional bool streaming_output = 5;
    if (cached_has_bits & 0x00000020u) {
      total_size += 1 + 1;
    }

  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ProfilerInfoProto::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:android.app.ProfilerInfoProto)
  GOOGLE_DCHECK_NE(&from, this);
  const ProfilerInfoProto* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<ProfilerInfoProto>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:android.app.ProfilerInfoProto)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:android.app.ProfilerInfoProto)
    MergeFrom(*source);
  }
}

void ProfilerInfoProto::MergeFrom(const ProfilerInfoProto& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:android.app.ProfilerInfoProto)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x0000003fu) {
    if (cached_has_bits & 0x00000001u) {
      _has_bits_[0] |= 0x00000001u;
      profile_file_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.profile_file_);
    }
    if (cached_has_bits & 0x00000002u) {
      _has_bits_[0] |= 0x00000002u;
      agent_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.agent_);
    }
    if (cached_has_bits & 0x00000004u) {
      profile_fd_ = from.profile_fd_;
    }
    if (cached_has_bits & 0x00000008u) {
      sampling_interval_ = from.sampling_interval_;
    }
    if (cached_has_bits & 0x00000010u) {
      auto_stop_profiler_ = from.auto_stop_profiler_;
    }
    if (cached_has_bits & 0x00000020u) {
      streaming_output_ = from.streaming_output_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void ProfilerInfoProto::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:android.app.ProfilerInfoProto)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ProfilerInfoProto::CopyFrom(const ProfilerInfoProto& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:android.app.ProfilerInfoProto)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ProfilerInfoProto::IsInitialized() const {
  return true;
}

void ProfilerInfoProto::InternalSwap(ProfilerInfoProto* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  profile_file_.Swap(&other->profile_file_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  agent_.Swap(&other->agent_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(profile_fd_, other->profile_fd_);
  swap(sampling_interval_, other->sampling_interval_);
  swap(auto_stop_profiler_, other->auto_stop_profiler_);
  swap(streaming_output_, other->streaming_output_);
}

::PROTOBUF_NAMESPACE_ID::Metadata ProfilerInfoProto::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace app
}  // namespace android
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::android::app::ProfilerInfoProto* Arena::CreateMaybeMessage< ::android::app::ProfilerInfoProto >(Arena* arena) {
  return Arena::CreateInternal< ::android::app::ProfilerInfoProto >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
