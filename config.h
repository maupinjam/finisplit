#pragma once
#define OLED_DISPLAY_ADDRESS 0x3C
#define OLED_BRIGHTNESS 255
#define OLED_IC OLED_IC_SSD1306
#define OLED_DISPLAY_WIDTH 128
#define OLED_DISPLAY_HEIGHT 32
#define OLED_TIMEOUT 31000
#define USE_SERIAL_GP1
#define ENCODER_RESOLUTIONS { 2 }
// #define EE_HANDS

#define DYNAMIC_KEYMAP_LAYER_COUNT 4

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

