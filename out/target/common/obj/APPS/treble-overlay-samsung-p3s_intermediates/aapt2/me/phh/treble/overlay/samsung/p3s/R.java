/* AUTO-GENERATED FILE. DO NOT MODIFY.
 *
 * This class was automatically generated by the
 * aapt tool from the resource data it found. It
 * should not be modified by hand.
 */

package me.phh.treble.overlay.samsung.p3s;

public final class R {
  public static final class array {
    public static final int config_autoBrightnessDisplayValuesNits=0x7f010000;
    public static final int config_autoBrightnessLcdBacklightValues=0x7f010001;
    public static final int config_autoBrightnessLevels=0x7f010002;
    /**
     * Default list of files pinned by the Pinner Service
     */
    public static final int config_defaultPinnerServiceFiles=0x7f010003;
    public static final int config_keyboardTapVibePattern=0x7f010004;
    public static final int config_longPressVibePattern=0x7f010005;
    public static final int config_screenBrightnessBacklight=0x7f010006;
    public static final int config_screenBrightnessNits=0x7f010007;
    public static final int config_tether_usb_regexs=0x7f010008;
    public static final int config_virtualKeyVibePattern=0x7f010009;
  }
  public static final class bool {
    /**
     * Flag indicating whether we should enable the automatic brightness.
     * Software implementation will be used if config_hardware_auto_brightness_available is not set
     */
    public static final int config_automatic_brightness_available=0x7f020000;
    /**
     * Whether the display blanks itself when transitioning from a doze to a non-doze state
     */
    public static final int config_displayBlanksAfterDoze=0x7f020001;
    /**
     * True if the display hardware only has brightness buckets rather than a full range of
     * backlight values
     */
    public static final int config_displayBrightnessBucketsInDoze=0x7f020002;
    /**
     * If true, the doze component is not started until after the screen has been
     * turned off and the screen off animation has been performed.
     */
    public static final int config_dozeAfterScreenOffByDefault=0x7f020003;
    /**
     * Control whether the always on display mode is available. This should only be enabled on
     * devices where the display has be tuned to be power efficient in DOZE and/or DOZE_SUSPEND
     * states.
     */
    public static final int config_dozeAlwaysOnDisplayAvailable=0x7f020004;
    /**
     * If AOD can show an ambient version of the wallpaper
     */
    public static final int config_dozeSupportsAodWallpaper=0x7f020005;
    /**
     * If true, the display will be shifted around in ambient mode.
     */
    public static final int config_enableBurnInProtection=0x7f020006;
    /**
     * Is the device capable of hot swapping an UICC Card
     */
    public static final int config_hotswapCapable=0x7f020007;
    /**
     * Should the pinner service pin the Home application?
     */
    public static final int config_pinnerHomeApp=0x7f020008;
    /**
     * Power Management: Specifies whether to decouple the auto-suspend state of the
     * device from the display on/off state.
     * When false, autosuspend_disable() will be called before the display is turned on
     * and autosuspend_enable() will be called after the display is turned off.
     * This mode provides best compatibility for devices using legacy power management
     * features such as early suspend / late resume.
     * When true, autosuspend_display() and autosuspend_enable() will be called
     * independently of whether the display is being turned on or off.  This mode
     * enables the power manager to suspend the application processor while the
     * display is on.
     * This resource should be set to "true" when a doze component has been specified
     * to maximize power savings but not all devices support it.
     * Refer to autosuspend.h for details.
     */
    public static final int config_powerDecoupleAutoSuspendModeFromDisplay=0x7f020009;
    /**
     * Power Management: Specifies whether to decouple the interactive state of the
     * device from the display on/off state.
     * When false, setInteractive(..., true) will be called before the display is turned on
     * and setInteractive(..., false) will be called after the display is turned off.
     * This mode provides best compatibility for devices that expect the interactive
     * state to be tied to the display state.
     * When true, setInteractive(...) will be called independently of whether the display
     * is being turned on or off.  This mode enables the power manager to reduce
     * clocks and disable the touch controller while the display is on.
     * This resource should be set to "true" when a doze component has been specified
     * to maximize power savings but not all devices support it.
     * Refer to power.h for details.
     */
    public static final int config_powerDecoupleInteractiveModeFromDisplay=0x7f02000a;
    /**
     * Boolean indicating whether the HWC setColorTransform function can be performed efficiently
     * in hardware.
     */
    public static final int config_setColorTransformAccelerated=0x7f02000b;
    /**
     * Whether device supports double tap to wake
     */
    public static final int config_supportDoubleTapWake=0x7f02000c;
    /**
     * If this is true, device supports Sustained Performance Mode.
     */
    public static final int config_sustainedPerformanceModeSupported=0x7f02000d;
  }
  public static final class dimen {
    /**
     * Radius of the software rounded corners at the bottom of the display in its natural
     * orientation. If zero, the value of rounded_corner_radius is used.
     */
    public static final int rounded_corner_radius_bottom=0x7f030000;
    /**
     * Radius of the software rounded corners at the top of the display in its natural
     * orientation. If zero, the value of rounded_corner_radius is used.
     */
    public static final int rounded_corner_radius_top=0x7f030001;
    public static final int status_bar_height=0x7f030002;
    public static final int status_bar_height_default=0x7f030003;
    /**
     * Height of the status bar in landscape.
     * Do not read this dimen directly. Use {@link SystemBarUtils#getStatusBarHeight} instead.
     */
    public static final int status_bar_height_landscape=0x7f030004;
    /**
     * Height of the status bar in portrait.
     * Do not read this dimen directly. Use {@link SystemBarUtils#getStatusBarHeight} instead.
     */
    public static final int status_bar_height_portrait=0x7f030005;
  }
  public static final class integer {
    public static final int config_autoBrightnessBrighteningLightDebounce=0x7f040000;
    /**
     * Specifies the maximum burn-in offset horizontally.
     */
    public static final int config_burnInProtectionMaxHorizontalOffset=0x7f040001;
    /**
     * Specifies the maximum burn-in offset displacement from the center. If -1, no maximum value
     * will be used.
     */
    public static final int config_burnInProtectionMaxRadius=0x7f040002;
    /**
     * Specifies the maximum burn-in offset vertically.
     */
    public static final int config_burnInProtectionMaxVerticalOffset=0x7f040003;
    /**
     * Specifies the minimum burn-in offset horizontally.
     */
    public static final int config_burnInProtectionMinHorizontalOffset=0x7f040004;
    /**
     * Specifies the minimum burn-in offset vertically.
     */
    public static final int config_burnInProtectionMinVerticalOffset=0x7f040005;
    /**
     * The default peak refresh rate for a given device. Change this value if you want to prevent
     * the framework from using higher refresh rates, even if display modes with higher refresh
     * rates are available from hardware composer. Only has an effect if the value is
     * non-zero.
     */
    public static final int config_defaultPeakRefreshRate=0x7f040006;
    /**
     * The default refresh rate for a given device. Change this value to set a higher default
     * refresh rate. If the hardware composer on the device supports display modes with a higher
     * refresh rate than the default value specified here, the framework may use those higher
     * refresh rate modes if an app chooses one by setting preferredDisplayModeId or calling
     * setFrameRate().
     * If a non-zero value is set for config_defaultPeakRefreshRate, then
     * config_defaultRefreshRate may be set to 0, in which case the value set for
     * config_defaultPeakRefreshRate will act as the default frame rate.
     */
    public static final int config_defaultRefreshRate=0x7f040007;
    public static final int config_screenBrightnessDark=0x7f040008;
    /**
     * Screen brightness used to dim the screen while dozing in a very low power state.
     * May be less than the minimum allowed brightness setting
     * that can be set by the user.
     */
    public static final int config_screenBrightnessDoze=0x7f040009;
    public static final int config_screenBrightnessSettingDefault=0x7f04000a;
    public static final int config_screenBrightnessSettingMaximum=0x7f04000b;
    public static final int config_screenBrightnessSettingMinimum=0x7f04000c;
  }
  public static final class string {
    /**
     * The bounding path of the cutout region of the main built-in display.
     * Must either be empty if there is no cutout region, or a string that is parsable by
     * {@link android.util.PathParser}.
     * The path is assumed to be specified in display coordinates with pixel units and in
     * the display's native orientation, with the origin of the coordinate system at the
     * center top of the display. Optionally, you can append either `@left` or `@right` to the
     * end of the path string, in order to change the path origin to either the top left,
     * or top right of the display.
     * To facilitate writing device-independent emulation overlays, the marker `@dp` can be
     * appended after the path string to interpret coordinates in dp instead of px units.
     * Note that a physical cutout should be configured in pixels for the best results.
     * Example for a 10px x 10px square top-center cutout:
     * <string ...>M -5,0 L -5,10 L 5,10 L 5,0 Z</string>
     * Example for a 10dp x 10dp square top-center cutout:
     * <string ...>M -5,0 L -5,10 L 5,10 L 5,0 Z @dp</string>
     * @see https://www.w3.org/TR/SVG/paths.html#PathData
     */
    public static final int config_mainBuiltInDisplayCutout=0x7f050000;
  }
  public static final class xml {
    public static final int power_profile=0x7f060000;
  }
}