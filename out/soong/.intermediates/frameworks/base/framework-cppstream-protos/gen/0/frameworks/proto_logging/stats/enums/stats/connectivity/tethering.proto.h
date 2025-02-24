// Generated by protoc-gen-cppstream. DO NOT MODIFY.
// source: frameworks/proto_logging/stats/enums/stats/connectivity/tethering.proto

#ifndef ANDROID_FRAMEWORKS_PROTO_LOGGING_STATS_ENUMS_STATS_CONNECTIVITY_TETHERING_PROTO_STREAM_H
#define ANDROID_FRAMEWORKS_PROTO_LOGGING_STATS_ENUMS_STATS_CONNECTIVITY_TETHERING_PROTO_STREAM_H

namespace android {
namespace stats {
namespace connectivity {

// enum ErrorCode
const int EC_NO_ERROR = 0;
const int EC_UNKNOWN_IFACE = 1;
const int EC_SERVICE_UNAVAIL = 2;
const int EC_UNSUPPORTED = 3;
const int EC_UNAVAIL_IFACE = 4;
const int EC_INTERNAL_ERROR = 5;
const int EC_TETHER_IFACE_ERROR = 6;
const int EC_UNTETHER_IFACE_ERROR = 7;
const int EC_ENABLE_FORWARDING_ERROR = 8;
const int EC_DISABLE_FORWARDING_ERROR = 9;
const int EC_IFACE_CFG_ERROR = 10;
const int EC_PROVISIONING_FAILED = 11;
const int EC_DHCPSERVER_ERROR = 12;
const int EC_ENTITLEMENT_UNKNOWN = 13;
const int EC_NO_CHANGE_TETHERING_PERMISSION = 14;
const int EC_NO_ACCESS_TETHERING_PERMISSION = 15;
const int EC_UNKNOWN_TYPE = 16;
static const int _ENUM_ERROR_CODE_COUNT = 17;
static const char* _ENUM_ERROR_CODE_NAMES[17] = {
    "EC_NO_ERROR",
    "EC_UNKNOWN_IFACE",
    "EC_SERVICE_UNAVAIL",
    "EC_UNSUPPORTED",
    "EC_UNAVAIL_IFACE",
    "EC_INTERNAL_ERROR",
    "EC_TETHER_IFACE_ERROR",
    "EC_UNTETHER_IFACE_ERROR",
    "EC_ENABLE_FORWARDING_ERROR",
    "EC_DISABLE_FORWARDING_ERROR",
    "EC_IFACE_CFG_ERROR",
    "EC_PROVISIONING_FAILED",
    "EC_DHCPSERVER_ERROR",
    "EC_ENTITLEMENT_UNKNOWN",
    "EC_NO_CHANGE_TETHERING_PERMISSION",
    "EC_NO_ACCESS_TETHERING_PERMISSION",
    "EC_UNKNOWN_TYPE",
};
static const int _ENUM_ERROR_CODE_VALUES[17] = {
    EC_NO_ERROR,
    EC_UNKNOWN_IFACE,
    EC_SERVICE_UNAVAIL,
    EC_UNSUPPORTED,
    EC_UNAVAIL_IFACE,
    EC_INTERNAL_ERROR,
    EC_TETHER_IFACE_ERROR,
    EC_UNTETHER_IFACE_ERROR,
    EC_ENABLE_FORWARDING_ERROR,
    EC_DISABLE_FORWARDING_ERROR,
    EC_IFACE_CFG_ERROR,
    EC_PROVISIONING_FAILED,
    EC_DHCPSERVER_ERROR,
    EC_ENTITLEMENT_UNKNOWN,
    EC_NO_CHANGE_TETHERING_PERMISSION,
    EC_NO_ACCESS_TETHERING_PERMISSION,
    EC_UNKNOWN_TYPE,
};

// enum DownstreamType
const int DS_UNSPECIFIED = 0;
const int DS_TETHERING_WIFI = 1;
const int DS_TETHERING_USB = 2;
const int DS_TETHERING_BLUETOOTH = 3;
const int DS_TETHERING_WIFI_P2P = 4;
const int DS_TETHERING_NCM = 5;
const int DS_TETHERING_ETHERNET = 6;
static const int _ENUM_DOWNSTREAM_TYPE_COUNT = 7;
static const char* _ENUM_DOWNSTREAM_TYPE_NAMES[7] = {
    "DS_UNSPECIFIED",
    "DS_TETHERING_WIFI",
    "DS_TETHERING_USB",
    "DS_TETHERING_BLUETOOTH",
    "DS_TETHERING_WIFI_P2P",
    "DS_TETHERING_NCM",
    "DS_TETHERING_ETHERNET",
};
static const int _ENUM_DOWNSTREAM_TYPE_VALUES[7] = {
    DS_UNSPECIFIED,
    DS_TETHERING_WIFI,
    DS_TETHERING_USB,
    DS_TETHERING_BLUETOOTH,
    DS_TETHERING_WIFI_P2P,
    DS_TETHERING_NCM,
    DS_TETHERING_ETHERNET,
};

// enum UpstreamType
const int UT_UNKNOWN = 0;
const int UT_CELLULAR = 1;
const int UT_WIFI = 2;
const int UT_BLUETOOTH = 3;
const int UT_ETHERNET = 4;
const int UT_WIFI_AWARE = 5;
const int UT_LOWPAN = 6;
const int UT_CELLULAR_VPN = 7;
const int UT_WIFI_VPN = 8;
const int UT_BLUETOOTH_VPN = 9;
const int UT_ETHERNET_VPN = 10;
const int UT_WIFI_CELLULAR_VPN = 11;
const int UT_TEST = 12;
const int UT_DUN_CELLULAR = 13;
static const int _ENUM_UPSTREAM_TYPE_COUNT = 14;
static const char* _ENUM_UPSTREAM_TYPE_NAMES[14] = {
    "UT_UNKNOWN",
    "UT_CELLULAR",
    "UT_WIFI",
    "UT_BLUETOOTH",
    "UT_ETHERNET",
    "UT_WIFI_AWARE",
    "UT_LOWPAN",
    "UT_CELLULAR_VPN",
    "UT_WIFI_VPN",
    "UT_BLUETOOTH_VPN",
    "UT_ETHERNET_VPN",
    "UT_WIFI_CELLULAR_VPN",
    "UT_TEST",
    "UT_DUN_CELLULAR",
};
static const int _ENUM_UPSTREAM_TYPE_VALUES[14] = {
    UT_UNKNOWN,
    UT_CELLULAR,
    UT_WIFI,
    UT_BLUETOOTH,
    UT_ETHERNET,
    UT_WIFI_AWARE,
    UT_LOWPAN,
    UT_CELLULAR_VPN,
    UT_WIFI_VPN,
    UT_BLUETOOTH_VPN,
    UT_ETHERNET_VPN,
    UT_WIFI_CELLULAR_VPN,
    UT_TEST,
    UT_DUN_CELLULAR,
};

// enum UserType
const int USER_UNKNOWN = 0;
const int USER_SETTINGS = 1;
const int USER_SYSTEMUI = 2;
const int USER_GMS = 3;
static const int _ENUM_USER_TYPE_COUNT = 4;
static const char* _ENUM_USER_TYPE_NAMES[4] = {
    "USER_UNKNOWN",
    "USER_SETTINGS",
    "USER_SYSTEMUI",
    "USER_GMS",
};
static const int _ENUM_USER_TYPE_VALUES[4] = {
    USER_UNKNOWN,
    USER_SETTINGS,
    USER_SYSTEMUI,
    USER_GMS,
};

} // connectivity
} // stats
} // android

#endif // ANDROID_FRAMEWORKS_PROTO_LOGGING_STATS_ENUMS_STATS_CONNECTIVITY_TETHERING_PROTO_STREAM_H
