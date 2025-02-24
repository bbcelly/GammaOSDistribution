// Generated by protoc-gen-cppstream. DO NOT MODIFY.
// source: frameworks/base/core/proto/android/os/metadata.proto

#ifndef ANDROID_FRAMEWORKS_BASE_CORE_PROTO_ANDROID_OS_METADATA_PROTO_STREAM_H
#define ANDROID_FRAMEWORKS_BASE_CORE_PROTO_ANDROID_OS_METADATA_PROTO_STREAM_H

namespace android {
namespace os {

// message IncidentMetadata
namespace IncidentMetadata {
    // enum Destination
    const int AUTOMATIC = 0;
    const int EXPLICIT = 1;
    const int LOCAL = 2;
    static const int _ENUM_DESTINATION_COUNT = 3;
    static const char* _ENUM_DESTINATION_NAMES[3] = {
        "AUTOMATIC",
        "EXPLICIT",
        "LOCAL",
    };
    static const int _ENUM_DESTINATION_VALUES[3] = {
        AUTOMATIC,
        EXPLICIT,
        LOCAL,
    };

    // message SectionStats
    namespace SectionStats {
        // optional int32 id = 1;
        const uint64_t ID = 0x0000010500000001LL;

        // optional bool success = 2;
        const uint64_t SUCCESS = 0x0000010800000002LL;

        // optional int32 report_size_bytes = 3;
        const uint64_t REPORT_SIZE_BYTES = 0x0000010500000003LL;

        // optional int64 exec_duration_ms = 4;
        const uint64_t EXEC_DURATION_MS = 0x0000010300000004LL;

        // optional int32 dump_size_bytes = 5;
        const uint64_t DUMP_SIZE_BYTES = 0x0000010500000005LL;

        // optional int64 dump_duration_ms = 6;
        const uint64_t DUMP_DURATION_MS = 0x0000010300000006LL;

        // optional bool timed_out = 7;
        const uint64_t TIMED_OUT = 0x0000010800000007LL;

        // optional bool is_truncated = 8;
        const uint64_t IS_TRUNCATED = 0x0000010800000008LL;

        // optional string error_msg = 9;
        const uint64_t ERROR_MSG = 0x0000010900000009LL;

        static const int _FIELD_COUNT = 9;
        static const char* _FIELD_NAMES[9] = {
            "id",
            "success",
            "report_size_bytes",
            "exec_duration_ms",
            "dump_size_bytes",
            "dump_duration_ms",
            "timed_out",
            "is_truncated",
            "error_msg",
        };
        static const uint64_t _FIELD_IDS[9] = {
            ID,
            SUCCESS,
            REPORT_SIZE_BYTES,
            EXEC_DURATION_MS,
            DUMP_SIZE_BYTES,
            DUMP_DURATION_MS,
            TIMED_OUT,
            IS_TRUNCATED,
            ERROR_MSG,
        };

    } //SectionStats

    // optional int64 report_id = 1;
    const uint64_t REPORT_ID = 0x0000010300000001LL;

    // optional int32 sequence_number = 2;
    const uint64_t SEQUENCE_NUMBER = 0x0000010500000002LL;

    // optional .android.os.IncidentMetadata.Destination dest = 3;
    const uint64_t DEST = 0x0000010e00000003LL;

    // optional int32 request_size = 4;
    const uint64_t REQUEST_SIZE = 0x0000010500000004LL;

    // optional bool use_dropbox = 5;
    const uint64_t USE_DROPBOX = 0x0000010800000005LL;

    // repeated .android.os.IncidentMetadata.SectionStats sections = 6;
    const uint64_t SECTIONS = 0x0000020b00000006LL;

    static const int _FIELD_COUNT = 6;
    static const char* _FIELD_NAMES[6] = {
        "report_id",
        "sequence_number",
        "dest",
        "request_size",
        "use_dropbox",
        "sections",
    };
    static const uint64_t _FIELD_IDS[6] = {
        REPORT_ID,
        SEQUENCE_NUMBER,
        DEST,
        REQUEST_SIZE,
        USE_DROPBOX,
        SECTIONS,
    };

} //IncidentMetadata

} // os
} // android

#endif // ANDROID_FRAMEWORKS_BASE_CORE_PROTO_ANDROID_OS_METADATA_PROTO_STREAM_H
