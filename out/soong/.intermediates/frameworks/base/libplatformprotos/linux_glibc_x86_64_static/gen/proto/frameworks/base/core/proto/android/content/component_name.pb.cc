// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: frameworks/base/core/proto/android/content/component_name.proto

#include "frameworks/base/core/proto/android/content/component_name.pb.h"

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
namespace content {
class ComponentNameProtoDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<ComponentNameProto> _instance;
} _ComponentNameProto_default_instance_;
}  // namespace content
}  // namespace android
static void InitDefaultsscc_info_ComponentNameProto_frameworks_2fbase_2fcore_2fproto_2fandroid_2fcontent_2fcomponent_5fname_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::android::content::_ComponentNameProto_default_instance_;
    new (ptr) ::android::content::ComponentNameProto();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::android::content::ComponentNameProto::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_ComponentNameProto_frameworks_2fbase_2fcore_2fproto_2fandroid_2fcontent_2fcomponent_5fname_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsscc_info_ComponentNameProto_frameworks_2fbase_2fcore_2fproto_2fandroid_2fcontent_2fcomponent_5fname_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_frameworks_2fbase_2fcore_2fproto_2fandroid_2fcontent_2fcomponent_5fname_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_frameworks_2fbase_2fcore_2fproto_2fandroid_2fcontent_2fcomponent_5fname_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_frameworks_2fbase_2fcore_2fproto_2fandroid_2fcontent_2fcomponent_5fname_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_frameworks_2fbase_2fcore_2fproto_2fandroid_2fcontent_2fcomponent_5fname_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::android::content::ComponentNameProto, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::android::content::ComponentNameProto, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::android::content::ComponentNameProto, package_name_),
  PROTOBUF_FIELD_OFFSET(::android::content::ComponentNameProto, class_name_),
  0,
  1,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 7, sizeof(::android::content::ComponentNameProto)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::android::content::_ComponentNameProto_default_instance_),
};

const char descriptor_table_protodef_frameworks_2fbase_2fcore_2fproto_2fandroid_2fcontent_2fcomponent_5fname_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\?frameworks/base/core/proto/android/con"
  "tent/component_name.proto\022\017android.conte"
  "nt\0320frameworks/base/core/proto/android/p"
  "rivacy.proto\"I\n\022ComponentNameProto\022\024\n\014pa"
  "ckage_name\030\001 \001(\t\022\022\n\nclass_name\030\002 \001(\t:\t\232\237"
  "\325\207\003\003\010\310\001B\002P\001"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_frameworks_2fbase_2fcore_2fproto_2fandroid_2fcontent_2fcomponent_5fname_2eproto_deps[1] = {
  &::descriptor_table_frameworks_2fbase_2fcore_2fproto_2fandroid_2fprivacy_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_frameworks_2fbase_2fcore_2fproto_2fandroid_2fcontent_2fcomponent_5fname_2eproto_sccs[1] = {
  &scc_info_ComponentNameProto_frameworks_2fbase_2fcore_2fproto_2fandroid_2fcontent_2fcomponent_5fname_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_frameworks_2fbase_2fcore_2fproto_2fandroid_2fcontent_2fcomponent_5fname_2eproto_once;
static bool descriptor_table_frameworks_2fbase_2fcore_2fproto_2fandroid_2fcontent_2fcomponent_5fname_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_frameworks_2fbase_2fcore_2fproto_2fandroid_2fcontent_2fcomponent_5fname_2eproto = {
  &descriptor_table_frameworks_2fbase_2fcore_2fproto_2fandroid_2fcontent_2fcomponent_5fname_2eproto_initialized, descriptor_table_protodef_frameworks_2fbase_2fcore_2fproto_2fandroid_2fcontent_2fcomponent_5fname_2eproto, "frameworks/base/core/proto/android/content/component_name.proto", 211,
  &descriptor_table_frameworks_2fbase_2fcore_2fproto_2fandroid_2fcontent_2fcomponent_5fname_2eproto_once, descriptor_table_frameworks_2fbase_2fcore_2fproto_2fandroid_2fcontent_2fcomponent_5fname_2eproto_sccs, descriptor_table_frameworks_2fbase_2fcore_2fproto_2fandroid_2fcontent_2fcomponent_5fname_2eproto_deps, 1, 1,
  schemas, file_default_instances, TableStruct_frameworks_2fbase_2fcore_2fproto_2fandroid_2fcontent_2fcomponent_5fname_2eproto::offsets,
  file_level_metadata_frameworks_2fbase_2fcore_2fproto_2fandroid_2fcontent_2fcomponent_5fname_2eproto, 1, file_level_enum_descriptors_frameworks_2fbase_2fcore_2fproto_2fandroid_2fcontent_2fcomponent_5fname_2eproto, file_level_service_descriptors_frameworks_2fbase_2fcore_2fproto_2fandroid_2fcontent_2fcomponent_5fname_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_frameworks_2fbase_2fcore_2fproto_2fandroid_2fcontent_2fcomponent_5fname_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_frameworks_2fbase_2fcore_2fproto_2fandroid_2fcontent_2fcomponent_5fname_2eproto), true);
namespace android {
namespace content {

// ===================================================================

void ComponentNameProto::InitAsDefaultInstance() {
}
class ComponentNameProto::_Internal {
 public:
  using HasBits = decltype(std::declval<ComponentNameProto>()._has_bits_);
  static void set_has_package_name(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_class_name(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
};

ComponentNameProto::ComponentNameProto()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:android.content.ComponentNameProto)
}
ComponentNameProto::ComponentNameProto(const ComponentNameProto& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  package_name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from.has_package_name()) {
    package_name_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.package_name_);
  }
  class_name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from.has_class_name()) {
    class_name_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.class_name_);
  }
  // @@protoc_insertion_point(copy_constructor:android.content.ComponentNameProto)
}

void ComponentNameProto::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_ComponentNameProto_frameworks_2fbase_2fcore_2fproto_2fandroid_2fcontent_2fcomponent_5fname_2eproto.base);
  package_name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  class_name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

ComponentNameProto::~ComponentNameProto() {
  // @@protoc_insertion_point(destructor:android.content.ComponentNameProto)
  SharedDtor();
}

void ComponentNameProto::SharedDtor() {
  package_name_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  class_name_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void ComponentNameProto::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ComponentNameProto& ComponentNameProto::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_ComponentNameProto_frameworks_2fbase_2fcore_2fproto_2fandroid_2fcontent_2fcomponent_5fname_2eproto.base);
  return *internal_default_instance();
}


void ComponentNameProto::Clear() {
// @@protoc_insertion_point(message_clear_start:android.content.ComponentNameProto)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      package_name_.ClearNonDefaultToEmptyNoArena();
    }
    if (cached_has_bits & 0x00000002u) {
      class_name_.ClearNonDefaultToEmptyNoArena();
    }
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* ComponentNameProto::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // optional string package_name = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParserUTF8Verify(mutable_package_name(), ptr, ctx, "android.content.ComponentNameProto.package_name");
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional string class_name = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParserUTF8Verify(mutable_class_name(), ptr, ctx, "android.content.ComponentNameProto.class_name");
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
bool ComponentNameProto::MergePartialFromCodedStream(
    ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::PROTOBUF_NAMESPACE_ID::uint32 tag;
  // @@protoc_insertion_point(parse_start:android.content.ComponentNameProto)
  for (;;) {
    ::std::pair<::PROTOBUF_NAMESPACE_ID::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string package_name = 1;
      case 1: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (10 & 0xFF)) {
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadString(
                input, this->mutable_package_name()));
          ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
            this->package_name().data(), static_cast<int>(this->package_name().length()),
            ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::PARSE,
            "android.content.ComponentNameProto.package_name");
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional string class_name = 2;
      case 2: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (18 & 0xFF)) {
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadString(
                input, this->mutable_class_name()));
          ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
            this->class_name().data(), static_cast<int>(this->class_name().length()),
            ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::PARSE,
            "android.content.ComponentNameProto.class_name");
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
  // @@protoc_insertion_point(parse_success:android.content.ComponentNameProto)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:android.content.ComponentNameProto)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void ComponentNameProto::SerializeWithCachedSizes(
    ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:android.content.ComponentNameProto)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional string package_name = 1;
  if (cached_has_bits & 0x00000001u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->package_name().data(), static_cast<int>(this->package_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "android.content.ComponentNameProto.package_name");
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->package_name(), output);
  }

  // optional string class_name = 2;
  if (cached_has_bits & 0x00000002u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->class_name().data(), static_cast<int>(this->class_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "android.content.ComponentNameProto.class_name");
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->class_name(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:android.content.ComponentNameProto)
}

::PROTOBUF_NAMESPACE_ID::uint8* ComponentNameProto::InternalSerializeWithCachedSizesToArray(
    ::PROTOBUF_NAMESPACE_ID::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:android.content.ComponentNameProto)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional string package_name = 1;
  if (cached_has_bits & 0x00000001u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->package_name().data(), static_cast<int>(this->package_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "android.content.ComponentNameProto.package_name");
    target =
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteStringToArray(
        1, this->package_name(), target);
  }

  // optional string class_name = 2;
  if (cached_has_bits & 0x00000002u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->class_name().data(), static_cast<int>(this->class_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "android.content.ComponentNameProto.class_name");
    target =
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteStringToArray(
        2, this->class_name(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:android.content.ComponentNameProto)
  return target;
}

size_t ComponentNameProto::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:android.content.ComponentNameProto)
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
  if (cached_has_bits & 0x00000003u) {
    // optional string package_name = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->package_name());
    }

    // optional string class_name = 2;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->class_name());
    }

  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ComponentNameProto::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:android.content.ComponentNameProto)
  GOOGLE_DCHECK_NE(&from, this);
  const ComponentNameProto* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<ComponentNameProto>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:android.content.ComponentNameProto)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:android.content.ComponentNameProto)
    MergeFrom(*source);
  }
}

void ComponentNameProto::MergeFrom(const ComponentNameProto& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:android.content.ComponentNameProto)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      _has_bits_[0] |= 0x00000001u;
      package_name_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.package_name_);
    }
    if (cached_has_bits & 0x00000002u) {
      _has_bits_[0] |= 0x00000002u;
      class_name_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.class_name_);
    }
  }
}

void ComponentNameProto::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:android.content.ComponentNameProto)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ComponentNameProto::CopyFrom(const ComponentNameProto& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:android.content.ComponentNameProto)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ComponentNameProto::IsInitialized() const {
  return true;
}

void ComponentNameProto::InternalSwap(ComponentNameProto* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  package_name_.Swap(&other->package_name_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  class_name_.Swap(&other->class_name_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
}

::PROTOBUF_NAMESPACE_ID::Metadata ComponentNameProto::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace content
}  // namespace android
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::android::content::ComponentNameProto* Arena::CreateMaybeMessage< ::android::content::ComponentNameProto >(Arena* arena) {
  return Arena::CreateInternal< ::android::content::ComponentNameProto >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
