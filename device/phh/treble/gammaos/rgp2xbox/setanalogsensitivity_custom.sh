#!/system/bin/sh

value=4; printf "%b" "$(printf '\\x%02x\\x%02x\\x%02x\\x%02x' $((value & 0xFF)) $((value >> 8 & 0xFF)) $((value >> 16 & 0xFF)) $((value >> 24 & 0xFF)))" > /data/rgp2xbox/ANALOG_SENSITIVITY
value=1; printf "%b" "$(printf '\\x%02x\\x%02x\\x%02x\\x%02x' $((value & 0xFF)) $((value >> 8 & 0xFF)) $((value >> 16 & 0xFF)) $((value >> 24 & 0xFF)))" > /data/rgp2xbox/ANALOG_SENSITIVITY_ISUPDATED
