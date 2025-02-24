// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: frameworks/base/core/proto/android/os/messagequeue.proto

#include "frameworks/base/core/proto/android/os/messagequeue.pb.h"

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
extern PROTOBUF_INTERNAL_EXPORT_frameworks_2fbase_2fcore_2fproto_2fandroid_2fos_2fmessage_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_MessageProto_frameworks_2fbase_2fcore_2fproto_2fandroid_2fos_2fmessage_2eproto;
namespace android {
namespace os {
class MessageQueueProtoDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<MessageQueueProto> _instance;
} _MessageQueueProto_default_instance_;
}  // namespace os
}  // namespace android
static void InitDefaultsscc_info_MessageQueueProto_frameworks_2fbase_2fcore_2fproto_2fandroid_2fos_2fmessagequeue_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::android::os::_MessageQueueProto_default_instance_;
    new (ptr) ::android::os::MessageQueueProto();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::android::os::MessageQueueProto::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_MessageQueueProto_frameworks_2fbase_2fcore_2fproto_2fandroid_2fos_2fmessagequeue_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, InitDefaultsscc_info_MessageQueueProto_frameworks_2fbase_2fcore_2fproto_2fandroid_2fos_2fmessagequeue_2eproto}, {
      &scc_info_MessageProto_frameworks_2fbase_2fcore_2fproto_2fandroid_2fos_2fmessage_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_frameworks_2fbase_2fcore_2fproto_2fandroid_2fos_2fmessagequeue_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_frameworks_2fbase_2fcore_2fproto_2fandroid_2fos_2fmessagequeue_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_frameworks_2fbase_2fcore_2fproto_2fandroid_2fos_2fmessagequeue_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_frameworks_2fbase_2fcore_2fproto_2fandroid_2fos_2fmessagequeue_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::android::os::MessageQueueProto, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::android::os::MessageQueueProto, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::android::os::MessageQueueProto, messages_),
  PROTOBUF_FIELD_OFFSET(::android::os::MessageQueueProto, is_polling_locked_),
  PROTOBUF_FIELD_OFFSET(::android::os::MessageQueueProto, is_quitting_),
  ~0u,
  0,
  1,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 8, sizeof(::android::os::MessageQueueProto)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::android::os::_MessageQueueProto_default_instance_),
};

const char descriptor_table_protodef_frameworks_2fbase_2fcore_2fproto_2fandroid_2fos_2fmessagequeue_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n8frameworks/base/core/proto/android/os/"
  "messagequeue.proto\022\nandroid.os\0323framewor"
  "ks/base/core/proto/android/os/message.pr"
  "oto\0320frameworks/base/core/proto/android/"
  "privacy.proto\"z\n\021MessageQueueProto\022*\n\010me"
  "ssages\030\001 \003(\0132\030.android.os.MessageProto\022\031"
  "\n\021is_polling_locked\030\002 \001(\010\022\023\n\013is_quitting"
  "\030\003 \001(\010:\t\232\237\325\207\003\003\010\310\001B\002P\001"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_frameworks_2fbase_2fcore_2fproto_2fandroid_2fos_2fmessagequeue_2eproto_deps[2] = {
  &::descriptor_table_frameworks_2fbase_2fcore_2fproto_2fandroid_2fos_2fmessage_2eproto,
  &::descriptor_table_frameworks_2fbase_2fcore_2fproto_2fandroid_2fprivacy_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_frameworks_2fbase_2fcore_2fproto_2fandroid_2fos_2fmessagequeue_2eproto_sccs[1] = {
  &scc_info_MessageQueueProto_frameworks_2fbase_2fcore_2fproto_2fandroid_2fos_2fmessagequeue_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_frameworks_2fbase_2fcore_2fproto_2fandroid_2fos_2fmessagequeue_2eproto_once;
static bool descriptor_table_frameworks_2fbase_2fcore_2fproto_2fandroid_2fos_2fmessagequeue_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_frameworks_2fbase_2fcore_2fproto_2fandroid_2fos_2fmessagequeue_2eproto = {
  &descriptor_table_frameworks_2fbase_2fcore_2fproto_2fandroid_2fos_2fmessagequeue_2eproto_initialized, descriptor_table_protodef_frameworks_2fbase_2fcore_2fproto_2fandroid_2fos_2fmessagequeue_2eproto, "frameworks/base/core/proto/android/os/messagequeue.proto", 301,
  &descriptor_table_frameworks_2fbase_2fcore_2fproto_2fandroid_2fos_2fmessagequeue_2eproto_once, descriptor_table_frameworks_2fbase_2fcore_2fproto_2fandroid_2fos_2fmessagequeue_2eproto_sccs, descriptor_table_frameworks_2fbase_2fcore_2fproto_2fandroid_2fos_2fmessagequeue_2eproto_deps, 1, 2,
  schemas, file_default_instances, TableStruct_frameworks_2fbase_2fcore_2fproto_2fandroid_2fos_2fmessagequeue_2eproto::offsets,
  file_level_metadata_frameworks_2fbase_2fcore_2fproto_2fandroid_2fos_2fmessagequeue_2eproto, 1, file_level_enum_descriptors_frameworks_2fbase_2fcore_2fproto_2fandroid_2fos_2fmessagequeue_2eproto, file_level_service_descriptors_frameworks_2fbase_2fcore_2fproto_2fandroid_2fos_2fmessagequeue_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_frameworks_2fbase_2fcore_2fproto_2fandroid_2fos_2fmessagequeue_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_frameworks_2fbase_2fcore_2fproto_2fandroid_2fos_2fmessagequeue_2eproto), true);
namespace android {
namespace os {

// ===================================================================

void MessageQueueProto::InitAsDefaultInstance() {
}
class MessageQueueProto::_Internal {
 public:
  using HasBits = decltype(std::declval<MessageQueueProto>()._has_bits_);
  static void set_has_is_polling_locked(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_is_quitting(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
};

void MessageQueueProto::clear_messages() {
  messages_.Clear();
}
MessageQueueProto::MessageQueueProto()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:android.os.MessageQueueProto)
}
MessageQueueProto::MessageQueueProto(const MessageQueueProto& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_),
      messages_(from.messages_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&is_polling_locked_, &from.is_polling_locked_,
    static_cast<size_t>(reinterpret_cast<char*>(&is_quitting_) -
    reinterpret_cast<char*>(&is_polling_locked_)) + sizeof(is_quitting_));
  // @@protoc_insertion_point(copy_constructor:android.os.MessageQueueProto)
}

void MessageQueueProto::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_MessageQueueProto_frameworks_2fbase_2fcore_2fproto_2fandroid_2fos_2fmessagequeue_2eproto.base);
  ::memset(&is_polling_locked_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&is_quitting_) -
      reinterpret_cast<char*>(&is_polling_locked_)) + sizeof(is_quitting_));
}

MessageQueueProto::~MessageQueueProto() {
  // @@protoc_insertion_point(destructor:android.os.MessageQueueProto)
  SharedDtor();
}

void MessageQueueProto::SharedDtor() {
}

void MessageQueueProto::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const MessageQueueProto& MessageQueueProto::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_MessageQueueProto_frameworks_2fbase_2fcore_2fproto_2fandroid_2fos_2fmessagequeue_2eproto.base);
  return *internal_default_instance();
}


void MessageQueueProto::Clear() {
// @@protoc_insertion_point(message_clear_start:android.os.MessageQueueProto)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  messages_.Clear();
  ::memset(&is_polling_locked_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&is_quitting_) -
      reinterpret_cast<char*>(&is_polling_locked_)) + sizeof(is_quitting_));
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* MessageQueueProto::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // repeated .android.os.MessageProto messages = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(add_messages(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<::PROTOBUF_NAMESPACE_ID::uint8>(ptr) == 10);
        } else goto handle_unusual;
        continue;
      // optional bool is_polling_locked = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          _Internal::set_has_is_polling_locked(&has_bits);
          is_polling_locked_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional bool is_quitting = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 24)) {
          _Internal::set_has_is_quitting(&has_bits);
          is_quitting_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
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
bool MessageQueueProto::MergePartialFromCodedStream(
    ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::PROTOBUF_NAMESPACE_ID::uint32 tag;
  // @@protoc_insertion_point(parse_start:android.os.MessageQueueProto)
  for (;;) {
    ::std::pair<::PROTOBUF_NAMESPACE_ID::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .android.os.MessageProto messages = 1;
      case 1: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (10 & 0xFF)) {
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadMessage(
                input, add_messages()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional bool is_polling_locked = 2;
      case 2: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (16 & 0xFF)) {
          _Internal::set_has_is_polling_locked(&_has_bits_);
          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPrimitive<
                   bool, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_polling_locked_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional bool is_quitting = 3;
      case 3: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (24 & 0xFF)) {
          _Internal::set_has_is_quitting(&_has_bits_);
          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPrimitive<
                   bool, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_quitting_)));
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
  // @@protoc_insertion_point(parse_success:android.os.MessageQueueProto)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:android.os.MessageQueueProto)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void MessageQueueProto::SerializeWithCachedSizes(
    ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:android.os.MessageQueueProto)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .android.os.MessageProto messages = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->messages_size()); i < n; i++) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteMessageMaybeToArray(
      1,
      this->messages(static_cast<int>(i)),
      output);
  }

  cached_has_bits = _has_bits_[0];
  // optional bool is_polling_locked = 2;
  if (cached_has_bits & 0x00000001u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBool(2, this->is_polling_locked(), output);
  }

  // optional bool is_quitting = 3;
  if (cached_has_bits & 0x00000002u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBool(3, this->is_quitting(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:android.os.MessageQueueProto)
}

::PROTOBUF_NAMESPACE_ID::uint8* MessageQueueProto::InternalSerializeWithCachedSizesToArray(
    ::PROTOBUF_NAMESPACE_ID::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:android.os.MessageQueueProto)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .android.os.MessageProto messages = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->messages_size()); i < n; i++) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, this->messages(static_cast<int>(i)), target);
  }

  cached_has_bits = _has_bits_[0];
  // optional bool is_polling_locked = 2;
  if (cached_has_bits & 0x00000001u) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(2, this->is_polling_locked(), target);
  }

  // optional bool is_quitting = 3;
  if (cached_has_bits & 0x00000002u) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(3, this->is_quitting(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:android.os.MessageQueueProto)
  return target;
}

size_t MessageQueueProto::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:android.os.MessageQueueProto)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .android.os.MessageProto messages = 1;
  {
    unsigned int count = static_cast<unsigned int>(this->messages_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          this->messages(static_cast<int>(i)));
    }
  }

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    // optional bool is_polling_locked = 2;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 + 1;
    }

    // optional bool is_quitting = 3;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 + 1;
    }

  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void MessageQueueProto::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:android.os.MessageQueueProto)
  GOOGLE_DCHECK_NE(&from, this);
  const MessageQueueProto* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<MessageQueueProto>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:android.os.MessageQueueProto)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:android.os.MessageQueueProto)
    MergeFrom(*source);
  }
}

void MessageQueueProto::MergeFrom(const MessageQueueProto& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:android.os.MessageQueueProto)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  messages_.MergeFrom(from.messages_);
  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      is_polling_locked_ = from.is_polling_locked_;
    }
    if (cached_has_bits & 0x00000002u) {
      is_quitting_ = from.is_quitting_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void MessageQueueProto::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:android.os.MessageQueueProto)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void MessageQueueProto::CopyFrom(const MessageQueueProto& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:android.os.MessageQueueProto)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MessageQueueProto::IsInitialized() const {
  return true;
}

void MessageQueueProto::InternalSwap(MessageQueueProto* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  CastToBase(&messages_)->InternalSwap(CastToBase(&other->messages_));
  swap(is_polling_locked_, other->is_polling_locked_);
  swap(is_quitting_, other->is_quitting_);
}

::PROTOBUF_NAMESPACE_ID::Metadata MessageQueueProto::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace os
}  // namespace android
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::android::os::MessageQueueProto* Arena::CreateMaybeMessage< ::android::os::MessageQueueProto >(Arena* arena) {
  return Arena::CreateInternal< ::android::os::MessageQueueProto >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
