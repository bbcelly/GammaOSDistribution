// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: frameworks/proto_logging/stats/enums/debug/enums.proto

#include "frameworks/proto_logging/stats/enums/debug/enums.pb.h"

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
namespace debug {
}  // namespace debug
}  // namespace android
static constexpr ::PROTOBUF_NAMESPACE_ID::Metadata* file_level_metadata_frameworks_2fproto_5flogging_2fstats_2fenums_2fdebug_2fenums_2eproto = nullptr;
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_frameworks_2fproto_5flogging_2fstats_2fenums_2fdebug_2fenums_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_frameworks_2fproto_5flogging_2fstats_2fenums_2fdebug_2fenums_2eproto = nullptr;
const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_frameworks_2fproto_5flogging_2fstats_2fenums_2fdebug_2fenums_2eproto::offsets[1] = {};
static constexpr ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema* schemas = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::Message* const* file_default_instances = nullptr;

const char descriptor_table_protodef_frameworks_2fproto_5flogging_2fstats_2fenums_2fdebug_2fenums_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n6frameworks/proto_logging/stats/enums/d"
  "ebug/enums.proto\022\randroid.debug*\302\001\n\026AdbC"
  "onnectionStateEnum\022\013\n\007UNKNOWN\020\000\022\032\n\026AWAIT"
  "ING_USER_APPROVAL\020\001\022\020\n\014USER_ALLOWED\020\002\022\017\n"
  "\013USER_DENIED\020\003\022\031\n\025AUTOMATICALLY_ALLOWED\020"
  "\004\022\026\n\022DENIED_INVALID_KEY\020\005\022\027\n\023DENIED_VOLD"
  "_DECRYPT\020\006\022\020\n\014DISCONNECTED\020\007B\021B\rAdbProto"
  "EnumsP\001"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_frameworks_2fproto_5flogging_2fstats_2fenums_2fdebug_2fenums_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_frameworks_2fproto_5flogging_2fstats_2fenums_2fdebug_2fenums_2eproto_sccs[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_frameworks_2fproto_5flogging_2fstats_2fenums_2fdebug_2fenums_2eproto_once;
static bool descriptor_table_frameworks_2fproto_5flogging_2fstats_2fenums_2fdebug_2fenums_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_frameworks_2fproto_5flogging_2fstats_2fenums_2fdebug_2fenums_2eproto = {
  &descriptor_table_frameworks_2fproto_5flogging_2fstats_2fenums_2fdebug_2fenums_2eproto_initialized, descriptor_table_protodef_frameworks_2fproto_5flogging_2fstats_2fenums_2fdebug_2fenums_2eproto, "frameworks/proto_logging/stats/enums/debug/enums.proto", 287,
  &descriptor_table_frameworks_2fproto_5flogging_2fstats_2fenums_2fdebug_2fenums_2eproto_once, descriptor_table_frameworks_2fproto_5flogging_2fstats_2fenums_2fdebug_2fenums_2eproto_sccs, descriptor_table_frameworks_2fproto_5flogging_2fstats_2fenums_2fdebug_2fenums_2eproto_deps, 0, 0,
  schemas, file_default_instances, TableStruct_frameworks_2fproto_5flogging_2fstats_2fenums_2fdebug_2fenums_2eproto::offsets,
  file_level_metadata_frameworks_2fproto_5flogging_2fstats_2fenums_2fdebug_2fenums_2eproto, 0, file_level_enum_descriptors_frameworks_2fproto_5flogging_2fstats_2fenums_2fdebug_2fenums_2eproto, file_level_service_descriptors_frameworks_2fproto_5flogging_2fstats_2fenums_2fdebug_2fenums_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_frameworks_2fproto_5flogging_2fstats_2fenums_2fdebug_2fenums_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_frameworks_2fproto_5flogging_2fstats_2fenums_2fdebug_2fenums_2eproto), true);
namespace android {
namespace debug {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* AdbConnectionStateEnum_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_frameworks_2fproto_5flogging_2fstats_2fenums_2fdebug_2fenums_2eproto);
  return file_level_enum_descriptors_frameworks_2fproto_5flogging_2fstats_2fenums_2fdebug_2fenums_2eproto[0];
}
bool AdbConnectionStateEnum_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
      return true;
    default:
      return false;
  }
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace debug
}  // namespace android
PROTOBUF_NAMESPACE_OPEN
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
