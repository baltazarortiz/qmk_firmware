#pragma once
#undef TAPPING_TERM
#define TAPPING_TERM 150

/* The way how "handedness" is decided (which half is which),
see https://docs.qmk.fm/#/feature_split_keyboard?id=setting-handedness
for more options.
*/

// I've found this helps with some ProMicros where the second uc does not boot
#define SPLIT_USB_DETECT

#define RGBLIGHT_LIMIT_VAL 100
#define RGB_MATRIX_KEYPRESSES
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE
