// Generated by the sysprop generator. DO NOT EDIT!

#pragma once

#include <cstdint>
#include <optional>
#include <string>
#include <vector>

namespace android::sysprop::OtaProperties {

std::optional<bool> warm_reset();
bool warm_reset(const std::optional<bool>& value);

std::optional<std::string> ab_ota_partitions();

std::optional<bool> virtual_ab_enabled();

std::optional<bool> virtual_ab_retrofit();

}  // namespace android::sysprop::OtaProperties
