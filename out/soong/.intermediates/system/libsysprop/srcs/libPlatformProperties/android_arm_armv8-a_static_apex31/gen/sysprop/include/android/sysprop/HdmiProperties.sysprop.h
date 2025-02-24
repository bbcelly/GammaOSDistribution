// Generated by the sysprop generator. DO NOT EDIT!

#pragma once

#include <cstdint>
#include <optional>
#include <string>
#include <vector>

namespace android::sysprop::HdmiProperties {

[[deprecated]] std::vector<std::optional<std::int32_t>> device_type();

enum class cec_device_types_values {
    TV,
    RECORDING_DEVICE,
    RESERVED,
    TUNER,
    PLAYBACK_DEVICE,
    AUDIO_SYSTEM,
    PURE_CEC_SWITCH,
    VIDEO_PROCESSOR,
};

std::vector<std::optional<cec_device_types_values>> cec_device_types();

std::optional<bool> set_menu_language_enabled();

std::optional<std::string> arc_port();

std::optional<bool> forward_volume_keys_when_system_audio_mode_off();

std::optional<bool> is_switch();

enum class playback_device_action_on_routing_control_values {
    NONE,
    WAKE_UP_ONLY,
    WAKE_UP_AND_SEND_ACTIVE_SOURCE,
};

std::optional<playback_device_action_on_routing_control_values> playback_device_action_on_routing_control();

}  // namespace android::sysprop::HdmiProperties
