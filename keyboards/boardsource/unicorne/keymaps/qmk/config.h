// config.h
#pragma once

#define MOUSEKEY_DELAY 1
#define MOUSEKEY_INTERVAL 8
#define MOUSEKEY_MOVE_DELTA 8
#define MOUSEKEY_MAX_SPEED 2
#define MOUSEKEY_TIME_TO_MAX 100 
#define MOUSEKEY_WHEEL_DELAY 1
#define MOUSEKEY_WHEEL_INTERVAL 100
#define MOUSEKEY_WHEEL_DELTA 1
#define MOUSEKEY_WHEEL_MAX_SPEED 12
#define MOUSEKEY_WHEEL_TIME_TO_MAX 0

#define RGB_MATRIX_MAXIMUM_BRIGHTNESS 200                       // limits maximum brightness of LEDs to 180 out of 255. If not defined maximum brightness is set to 255
#define RGB_MATRIX_DEFAULT_ON true                              // Sets the default enabled state, if none has been set
#define RGB_MATRIX_DEFAULT_MODE RGB_MATRIX_RIVERFLOW            // Sets the default mode, if none has been set
#define RGB_MATRIX_DEFAULT_HUE 40                               // Sets the default hue value, if none has been set
#define RGB_MATRIX_DEFAULT_SAT 255                              // Sets the default saturation value, if none has been set
#define RGB_MATRIX_DEFAULT_VAL RGB_MATRIX_MAXIMUM_BRIGHTNESS    // Sets the default brightness value, if none has been set
#define RGB_MATRIX_DEFAULT_SPD 100                              // Sets the default animation speed, if none has been set

#define TAPPING_TERM 250
#define COMBO_TERM 40

#define CIRQUE_PINNACLE_DIAMETER_MM 40
#define CIRQUE_PINNACLE_ADDR 0x2A
#define CIRQUE_PINNACLE_CURVED_OVERLAY
#define CIRQUE_PINNACLE_ATTENUATION EXTREG__TRACK_ADCCONFIG__ADC_ATTENUATE_3X
#define CIRQUE_PINNACLE_POSITION_MODE CIRQUE_PINNACLE_RELATIVE_MODE
#define POINTING_DEVICE_GESTURES_SCROLL_ENABLE
#define SPLIT_POINTING_ENABLE
#define POINTING_DEVICE_RIGHT
#define POINTING_DEVICE_ROTATION_90_RIGHT