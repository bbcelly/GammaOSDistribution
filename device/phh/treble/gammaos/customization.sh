#!/system/bin/sh

if [ ! -d /data/setupcompleted ] && [ -z $(getprop persist.sys.device_provisioned) ]
then
        am start -a android.intent.action.VIEW -d file:///system/etc/gammaupdating.mp4 -t video/mp4
	settings put system screen_off_timeout 1800000
	setenforce 0
	settings put system screen_brightness 255
        am start -a android.intent.action.VIEW -d file:///system/etc/gammaupdating.mp4 -t video/mp4
	input keyevent 26
	sleep 1
	input keyevent 26
	sleep 3

        am start -a android.intent.action.VIEW -d file:///system/etc/gammaupdating.mp4 -t video/mp4

	settings put secure doze_pulse_on_pick_up 0
	settings put secure camera_double_tap_power_gesture_disabled 1
	settings put secure wake_gesture_enabled 0
	settings put --lineage global wake_when_plugged_or_unplugged 0
	settings put --lineage global trust_restrict_usb 0
	settings put --lineage secure advanced_reboot 1
	settings put --lineage secure trust_warning 0
	settings put --lineage secure trust_warnings 0
	settings put --lineage secure power_menu_actions "lockdown|power|restart|screenshot|bugreport|logout"
	settings put --lineage secure qs_show_auto_brightness 0
	settings put --lineage secure qs_show_brightness_slider 1
	settings put --lineage system app_switch_wake_screen 0
	settings put --lineage system assist_wake_screen 0
	settings put --lineage system trust_interface_hinted 1
	settings put --lineage system back_wake_screen 0
	settings put --lineage system camera_launch 0
	settings put --lineage system camera_sleep_on_release 0
	settings put --lineage system camera_wake_screen 0
	settings put --lineage system click_partial_screenshot 0
	settings put --lineage system double_tap_sleep_gesture 0
	settings put --lineage system home_wake_screen 1
	settings put --lineage system key_back_long_press_action 2
	settings put --lineage system lockscreen_rotation 1
	settings put --lineage system menu_wake_screen 0
	settings put --lineage system navigation_bar_menu_arrow_keys 0
	settings put --lineage system status_bar_am_pm 2
	settings put --lineage system status_bar_brightness_control 1
	settings put --lineage system status_bar_clock_auto_hide 0
	settings put --lineage system status_bar_show_battery_percent 2
	settings put --lineage system berry_black_theme 1
	settings put secure immersive_mode_confirmations confirmed
	settings put secure ui_night_mode 2
        am start -a android.intent.action.VIEW -d file:///system/etc/gammaupdating.mp4 -t video/mp4
# Only for RK3566
#	settings put global window_animation_scale 0
#	settings put global transition_animation_scale 0
#	settings put global animator_duration_scale 0

        am start -a android.intent.action.VIEW -d file:///system/etc/gammaupdating.mp4 -t video/mp4
	settings put global private_dns_mode "hostname"
	settings put global private_dns_specifier "dns.adguard-dns.com"

	/system/bin/pm set-home-activity com.magneticchen.daijishou/.app.HomeActivity -user --user 0

	/system/bin/mkdir /data/tmpsetup
        am start -a android.intent.action.VIEW -d file:///system/etc/gammaupdating.mp4 -t video/mp4
	/system/bin/pm install /system/etc/magisk.apk
	am force-stop com.topjohnwu.magisk
	/system/bin/tar -xvf /system/etc/magisk-data-adb.tar.gz -C /
	/system/bin/rm -rf /data/tmpsetup/*
	/system/bin/tar -xvf /system/etc/magisk_user_de.tar.gz -C /data/tmpsetup/
	launcheruser=$( stat -c "%U" /data/data/com.topjohnwu.magisk)
	launchergroup=$( stat -c "%G" /data/data/com.topjohnwu.magisk)
	/system/bin/chown -R $launcheruser:$launchergroup /data/tmpsetup/data/user_de/0/com.topjohnwu.magisk
	/system/bin/rm -rf /data/tmpsetup/data/user_de/0/com.topjohnwu.magisk/cache
	/system/bin/rm -rf /data/tmpsetup/data/user_de/0/com.topjohnwu.magisk/code_cache
	/system/bin/cp -pdrav /data/tmpsetup/data/user_de/0/com.topjohnwu.magisk /data/user_de/0/
	/system/bin/rm -rf /data/tmpsetup/*
	magisk --sqlite "UPDATE settings SET value = 1 WHERE key = 'zygisk'"
	magisk --denylist add com.android.vending com.android.vending
	magisk --denylist add com.android.vending com.android.vending:background
	magisk --denylist add com.android.vending com.android.vending:instant_app_installer
	magisk --denylist add com.android.vending com.android.vending:quick_launch
	magisk --denylist add com.android.vending com.android.vending:recovery_mode
	magisk --denylist add com.android.vending com.android.vending:download_service
	magisk --denylist add com.google.android.gms com.google.android.gms
	magisk --denylist add com.google.android.gms com.google.android.gms.feedback
	magisk --denylist add com.google.android.gms com.google.android.gms.learning
	magisk --denylist add com.google.android.gms com.google.android.gms.persistent
	magisk --denylist add com.google.android.gms com.google.android.gms.remapping1
	magisk --denylist add com.google.android.gms com.google.android.gms.room
	magisk --denylist add com.google.android.gms com.google.android.gms.ui
	magisk --denylist add com.google.android.gms com.google.android.gms.unstable
	magisk --denylist add com.google.android.gms com.google.android.gms:car
	magisk --denylist add com.google.android.gms com.google.android.gms:snet
        am start -a android.intent.action.VIEW -d file:///system/etc/gammaupdating.mp4 -t video/mp4
	/system/bin/tar -xvf /system/etc/launcher3.tar.gz -C /data/tmpsetup/
	launcheruser=$( stat -c "%U" /data/data/com.android.launcher3)
	launchergroup=$( stat -c "%G" /data/data/com.android.launcher3)
	/system/bin/chown -R $launcheruser:$launchergroup /data/tmpsetup/data/data/com.android.launcher3
	/system/bin/rm -rf /data/tmpsetup/data/data/com.android.launcher3/cache
	/system/bin/rm -rf /data/tmpsetup/data/data/com.android.launcher3/code_cache
	/system/bin/cp -pdrav /data/tmpsetup/data/data/com.android.launcher3 /data/data/
	/system/bin/rm -rf /data/tmpsetup/*
        am start -a android.intent.action.VIEW -d file:///system/etc/gammaupdating.mp4 -t video/mp4

	/system/bin/tar -xvf /system/etc/launcherconfig.tar.gz -C /data/tmpsetup/
	launcheruser=$( stat -c "%U" /data/data/com.magneticchen.daijishou)
	launchergroup=$( stat -c "%G" /data/data/com.magneticchen.daijishou)
	/system/bin/chown -R $launcheruser:$launchergroup /data/tmpsetup/data/data/com.magneticchen.daijishou
	/system/bin/rm -rf /data/tmpsetup/data/data/com.magneticchen.daijishou/cache
	/system/bin/rm -rf /data/tmpsetup/data/data/com.magneticchen.daijishou/code_cache
	/system/bin/cp -pdrav /data/tmpsetup/data/data/com.magneticchen.daijishou /data/data/
	/system/bin/rm -rf /data/tmpsetup/*
        am start -a android.intent.action.VIEW -d file:///system/etc/gammaupdating.mp4 -t video/mp4
	/system/bin/pm disable-user --user 0 com.android.camera2
	/system/bin/pm disable-user --user 0 com.google.android.dialer
	/system/bin/pm disable-user --user 0 com.google.android.apps.messaging
	/system/bin/pm disable-user --user 0 com.android.nfc
	/system/bin/pm disable-user --user 0 com.google.android.keep
	/system/bin/pm disable-user --user 0 com.google.android.contacts
	/system/bin/pm disable-user --user 0 com.google.android.googlequicksearchbox
	/system/bin/pm disable-user --user 0 com.android.dialer
	/system/bin/pm disable-user --user 0 com.android.imsserviceentitlement
	/system/bin/pm disable-user --user 0 com.android.smspush
	settings put system accelerometer_rotation 0
	settings put --lineage system lockscreen_rotation 1
	dumpsys deviceidle whitelist +com.retroarch.aarch64
	dumpsys deviceidle whitelist +com.magneticchen.daijishou
        am start -a android.intent.action.VIEW -d file:///system/etc/gammaupdating.mp4 -t video/mp4
	/system/bin/pm install /system/etc/Firefox_120.0.1.apk
	/system/bin/pm install /system/etc/RetroArch_aarch64.apk
        am start -a android.intent.action.VIEW -d file:///system/etc/gammaupdating.mp4 -t video/mp4
	/system/bin/tar -xvf /system/etc/roms.tar.gz -C /
        am start -a android.intent.action.VIEW -d file:///system/etc/gammaupdating.mp4 -t video/mp4
	/system/bin/tar -xvf /system/etc/retroarch64sdcard.tar.gz -C /
	launcheruser=$( stat -c "%U" /data/data/com.retroarch.aarch64)
	/system/bin/chown -R $launcheruser:media_rw /sdcard/RetroArch
        am start -a android.intent.action.VIEW -d file:///system/etc/gammaupdating.mp4 -t video/mp4
	/system/bin/tar -xvf /system/etc/retroarch64sdcard2.tar.gz -C /
	launcheruser=$( stat -c "%U" /data/data/com.retroarch.aarch64)
	/system/bin/chown -R $launcheruser:ext_data_rw /sdcard/Android/data/com.retroarch.aarch64
        am start -a android.intent.action.VIEW -d file:///system/etc/gammaupdating.mp4 -t video/mp4

	/system/bin/pm grant com.retroarch.aarch64 android.permission.WRITE_EXTERNAL_STORAGE
	/system/bin/pm grant com.retroarch.aarch64 android.permission.READ_EXTERNAL_STORAGE
        am start -a android.intent.action.VIEW -d file:///system/etc/gammaupdating.mp4 -t video/mp4
	/system/bin/tar -xvf /system/etc/retroarch64.tar.gz -C /data/tmpsetup/
	launcheruser=$( stat -c "%U" /data/data/com.retroarch.aarch64)
	launchergroup=$( stat -c "%G" /data/data/com.retroarch.aarch64)
	/system/bin/chown -R $launcheruser:$launchergroup /data/tmpsetup/data/data/com.retroarch.aarch64
	/system/bin/rm -rf /data/tmpsetup/data/data/com.retroarch.aarch64/cache
	/system/bin/rm -rf /data/tmpsetup/data/data/com.retroarch.aarch64/code_cache
	/system/bin/cp -pdrav /data/tmpsetup/data/data/com.retroarch.aarch64 /data/data/
	/system/bin/rm -rf /data/tmpsetup/*
        am start -a android.intent.action.VIEW -d file:///system/etc/gammaupdating.mp4 -t video/mp4
	settings put secure sysui_qs_tiles "wifi,bt,performance,abxy,dpadAnalogToggle,analogsensitivity,analogaxis,rightanalogaxis,airplane,rotation,cast,screenrecord"

	screensize=$(wm size)
    	# for RG405M
	if [[ "$screensize" == *"480x640"* ]]; then
	settings put system accelerometer_rotation 0
	settings put system user_rotation 1
	settings put system accelerometer_rotation_angles 2
	settings put system accelerometer_rotation 1
	settings put --lineage system lockscreen_rotation 1
	wm size 640x480
	wm reset
	/system/bin/tar -xvf /system/etc/retroarch64sdcard2-405.tar.gz -C /
	launcheruser=$( stat -c "%U" /data/data/com.retroarch.aarch64)
	/system/bin/chown -R $launcheruser:ext_data_rw /sdcard/Android/data/com.retroarch.aarch64
	fi
        am start -a android.intent.action.VIEW -d file:///system/etc/gammaupdating.mp4 -t video/mp4
	isarc=$(cat /proc/device-tree/model)
	if [[ "$isarc" == *"Anbernic RG403H"* ]]; then
	/system/bin/tar -xvf /system/etc/retroarch64sdcard1-arc.tar.gz -C /
	launcheruser=$( stat -c "%U" /data/data/com.retroarch.aarch64)
	/system/bin/chown -R $launcheruser:media_rw /sdcard/RetroArch
	fi

        am start -a android.intent.action.VIEW -d file:///system/etc/gammaupdating.mp4 -t video/mp4
        is405v=$(getprop ro.product.vendor_dlkm.model)
        if [[ "$is405v" == *"RG405V"* ]]; then
	value=1; printf "%b" "$(printf '\\x%02x\\x%02x\\x%02x\\x%02x' $((value & 0xFF)) $((value >> 8 & 0xFF)) $((value >> 16 & 0xFF)) $((value >> 24 & 0xFF)))" > /data/rgp2xbox/FAN_CONTROL_ISENABLED
	settings put secure sysui_qs_tiles "wifi,bt,performance,fan,abxy,dpadAnalogToggle,analogsensitivity,analogaxis,rightanalogaxis,airplane,rotation,cast,screenrecord"
	wm density 160
        fi

        am start -a android.intent.action.VIEW -d file:///system/etc/gammaupdating.mp4 -t video/mp4
        isktr1=$(getprop ro.vendor.soc.model)
        if [[ "$isktr1" == *"MT6789V/CD"* ]]; then
	/system/bin/pm install /system/etc/com.ktpocket.launcher.apk
        settings put system accelerometer_rotation 0
        settings put system user_rotation 1
        settings put system accelerometer_rotation_angles 2
        settings put system accelerometer_rotation 1
        settings put --lineage system lockscreen_rotation 1
        wm size 1620x1080
        wm reset
        /system/bin/tar -xvf /system/etc/retroarch64sdcard2-ktr1.tar.gz -C /
        launcheruser=$( stat -c "%U" /data/data/com.retroarch.aarch64)
        /system/bin/chown -R $launcheruser:ext_data_rw /sdcard/Android/data/com.retroarch.aarch64
        fi

	am force-stop com.android.gallery3d
	sleep 1
	input keyevent 61
	sleep 0.5
	input keyevent 66
	sleep 2

	mkdir /data/setupcompleted
        mkdir /data/setupcompleted/1.5
	settings put system screen_off_timeout 120000
else
        /system/bin/pm set-home-activity com.magneticchen.daijishou/.app.HomeActivity -user --user 0
	setenforce 0
	input keyevent 26
	sleep 1
	input keyevent 26

	dumpsys deviceidle whitelist +com.retroarch.aarch64
	dumpsys deviceidle whitelist +com.magneticchen.daijishou

        is405v=$(getprop ro.product.vendor_dlkm.model)
        if [[ "$is405v" == *"RG405V"* ]]; then
        value=1; printf "%b" "$(printf '\\x%02x\\x%02x\\x%02x\\x%02x' $((value & 0xFF)) $((value >> 8 & 0xFF)) $((value >> 16 & 0xFF)) $((value >> 24 & 0xFF)))" > /data/rgp2xbox/FAN_CONTROL_ISENABLED
        fi

	# Migrations to GammaOS 1.5
	if [ ! -d /data/setupcompleted/1.5 ]
	then
		while true; do
    				# Check the mDreamingLockscreen value
    				if dumpsys window | grep 'mDreamingLockscreen=true'; then
        			# If the device is locked, wait for 1 second
        			echo "Device is locked. Waiting..."
        			sleep 1
    			else
        			# If the device is unlocked, break the loop
        			echo "Device is unlocked. Executing commands..."
        			break
    			fi
		done

		am start -a android.intent.action.VIEW -d file:///system/etc/gammaupdating.mp4 -t video/mp4

        	modelname=$(getprop ro.product.vendor_dlkm.model)
        	if [[ "$modelname" == *"RG405V"* ]]; then
        	settings put global device_name "Anbernic RG405V"
        	wm density 160
        	fi
                am start -a android.intent.action.VIEW -d file:///system/etc/gammaupdating.mp4 -t video/mp4
                if [[ "$modelname" == *"RG405M"* ]]; then
                settings put global device_name "Anbernic RG405M"
                fi
                am start -a android.intent.action.VIEW -d file:///system/etc/gammaupdating.mp4 -t video/mp4
                if [[ "$modelname" == *"RG505"* ]]; then
                settings put global device_name "Anbernic RG505"
                fi
                am start -a android.intent.action.VIEW -d file:///system/etc/gammaupdating.mp4 -t video/mp4
                pm install /system/product/app/daijisho/399.apk
                /system/bin/pm set-home-activity com.magneticchen.daijishou/.app.HomeActivity -user --user 0
		/system/bin/pm install /system/etc/Firefox_120.0.1.apk

	        screensize=$(wm size)
        	# for RG405M
        	if [[ "$screensize" == *"480x640"* ]]; then
        	wm size 640x480
        	wm reset
        	fi
                am start -a android.intent.action.VIEW -d file:///system/etc/gammaupdating.mp4 -t video/mp4
 		/system/bin/rm -rf /data/tmpsetup/*
		/system/bin/tar -xvf /system/etc/retroarch64.tar.gz -C /data/tmpsetup/
        	launcheruser=$( stat -c "%U" /data/data/com.retroarch.aarch64)
        	launchergroup=$( stat -c "%G" /data/data/com.retroarch.aarch64)
        	/system/bin/chown -R $launcheruser:$launchergroup /data/tmpsetup/data/data/com.retroarch.aarch64
        	/system/bin/rm -rf /data/tmpsetup/data/data/com.retroarch.aarch64/cache
        	/system/bin/rm -rf /data/tmpsetup/data/data/com.retroarch.aarch64/code_cache
        	/system/bin/cp -pdrav /data/tmpsetup/data/data/com.retroarch.aarch64 /data/data/
        	/system/bin/rm -rf /data/tmpsetup/*
                am start -a android.intent.action.VIEW -d file:///system/etc/gammaupdating.mp4 -t video/mp4
		sed -i '/^input_block_timeout/c\input_block_timeout = "0"' /sdcard/Android/data/com.retroarch.aarch64/files/retroarch.cfg
		sed -i '/^audio_out_rate/c\audio_out_rate = "44100"' /sdcard/Android/data/com.retroarch.aarch64/files/retroarch.cfg
		sed -i '/^autosave_interval/c\autosave_interval = "5"' /sdcard/Android/data/com.retroarch.aarch64/files/retroarch.cfg
		sed -i '/^input_exit_emulator_btn/c\input_exit_emulator_btn = "190"' /sdcard/Android/data/com.retroarch.aarch64/files/retroarch.cfg
		sed -i '/^input_menu_toggle_btn/c\input_menu_toggle_btn = "189"' /sdcard/Android/data/com.retroarch.aarch64/files/retroarch.cfg
		sed -i '/^menu_pause_libretro/c\menu_pause_libretro = "true"' /sdcard/Android/data/com.retroarch.aarch64/files/retroarch.cfg
		sed -i '/^quit_press_twice/c\quit_press_twice = "false"' /sdcard/Android/data/com.retroarch.aarch64/files/retroarch.cfg
		sed -i '/^savestate_auto_load/c\savestate_auto_load = "true"' /sdcard/Android/data/com.retroarch.aarch64/files/retroarch.cfg
                am start -a android.intent.action.VIEW -d file:///system/etc/gammaupdating.mp4 -t video/mp4
        	if [[ "$is405v" == *"RG405V"* ]]; then
		settings put secure sysui_qs_tiles "wifi,bt,performance,fan,abxy,dpadAnalogToggle,analogsensitivity,analogaxis,rightanalogaxis,airplane,rotation,cast,screenrecord"
		else
		settings put secure sysui_qs_tiles "wifi,bt,performance,abxy,dpadAnalogToggle,analogsensitivity,analogaxis,rightanalogaxis,airplane,rotation,cast,screenrecord"
		fi

		mkdir -p /data/setupcompleted/1.5
		am force-stop com.android.gallery3d
	fi
fi
