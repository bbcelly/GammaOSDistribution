// Generated by the sysprop generator. DO NOT EDIT!

#pragma once

#include <cstdint>
#include <optional>
#include <string>
#include <vector>

namespace android::sysprop::WifiProperties {

std::optional<bool> start_supplicant();
bool start_supplicant(const std::optional<bool>& value);

std::optional<bool> stop_supplicant();
bool stop_supplicant(const std::optional<bool>& value);

}  // namespace android::sysprop::WifiProperties
