#undef RGBLIGHT_LIMIT_VAL
#define RGBLIGHT_LIMIT_VAL 200
#undef WS2812_DI_PIN  
#define WS2812_DI_PIN 25  
#undef RGBLIGHT_LED_COUNT  
#define RGBLIGHT_LED_COUNT 2  
#undef RGBLED_SPLIT  
#define RGBLED_SPLIT {1, 1}
#define SPLIT_LED_STATE_ENABLE
// Enable layer state sync between split halves
#define SPLIT_LAYER_STATE_ENABLE
// Enable modifier state sync between split halves (for CTRL, SHIFT, ALT, GUI)
#define SPLIT_MODS_ENABLE
