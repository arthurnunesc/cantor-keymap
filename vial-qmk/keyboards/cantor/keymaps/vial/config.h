/* keyboard uid */
#define VIAL_KEYBOARD_UID {0xF0, 0x67, 0x2F, 0x54, 0x23, 0xB3, 0x7B, 0x55}

#define VIAL_UNLOCK_COMBO_ROWS { 0, 4 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 5 }

/* default layer count */
#define DYNAMIC_KEYMAP_LAYER_COUNT 4

// HOME-ROW MODS
// Configure the global tapping term (default: 200ms)
#undef TAPPING_TERM
#define TAPPING_TERM 250

// Prevent normal rollover on alphas from accidentally triggering mods.
#define IGNORE_MOD_TAP_INTERRUPT

// Enable rapid switch from tap to hold, disables double tap hold auto-repeat.
#define TAPPING_FORCE_HOLD

// Left-hand home row mods
#define HOME_S LGUI_T(KC_S)
#define HOME_A LALT_T(KC_A)
#define HOME_R LSFT_T(KC_R)
#define HOME_T LCTL_T(KC_T)

// Right-hand home row mods
#define HOME_N RCTL_T(KC_N)
#define HOME_O RSFT_T(KC_O)
#define HOME_E LALT_T(KC_E)
#define HOME_I RGUI_T(KC_I)
