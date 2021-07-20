#include QMK_KEYBOARD_H

enum preonic_layers {
  BASE,
  NAVR,
  MOUR,
  MEDR,
  NSL,
  NSSL,
  FUNL
}; 

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* Base (tap)
   * ,-----------------------------------------------------------------------------------.
   * |   1  |   2  |   3  |   4  |   5  |  N/A |  N/A |   6  |   7  |   8  |   9  |   0  |
   * |------+------+------+------+------+------+------+------+------+------+------+------|
   * |   Q  |   W  |   E  |   R  |   T  |  N/A |  N/A |   Y  |   U  |   I  |   O  |   P  |
   * |------+------+------+------+------+-------------+------+------+------+------+------|
   * |   A  |   S  |   D  |   F  |   G  |  N/A |  N/A |   H  |   J  |   K  |   L  |   ;  |
   * |------+------+------+------+------+------|------+------+------+------+------+------|
   * |   Z  |   X  |   C  |   V  |   B  |  N/A |  N/A |   N  |   M  |   ,  |   .  |   /  |
   * |------+------+------+------+------+------+------+------+------+------+------+------|
   * |  N/A |  N/A |  ESC |  TAB |  SPC |  N/A |  N/A |  ENT | BSPC |  DEL |  N/A |  N/A |
   * `-----------------------------------------------------------------------------------'
   *
   * Base (hold)
   * ,-----------------------------------------------------------------------------------.
   * |      |      |      |      |      |  N/A |  N/A |      |      |      |      |      |
   * |------+------+------+------+------+------+------+------+------+------+------+------|
   * |      |      |      |      |      |  N/A |  N/A |      |      |      |      |      |
   * |------+------+------+------+------+-------------+------+------+------+------+------|
   * | LGUI | LALT | LCTL | LSFT |      |  N/A |  N/A |      | LSFT | LCTL | LALT | LGUI |
   * |------+------+------+------+------+------|------+------+------+------+------+------|
   * |      |      |      |      |      |  N/A |  N/A |      |      |      |      |      |
   * |------+------+------+------+------+------+------+------+------+------+------+------|
   * |  N/A |  N/A | MEDR | NAVR | MOUR |  N/A |  N/A | NSSL | NSL  |      |  N/A |  N/A |
   * `-----------------------------------------------------------------------------------'
   */
  [BASE] = LAYOUT_preonic_grid(
    KC_1,          KC_2,             KC_3,             KC_4,             KC_5, KC_NO, KC_NO,             KC_6,             KC_7,         KC_8,         KC_9, KC_0,
    KC_Q,          KC_W,             KC_E,             KC_R,             KC_T, KC_NO, KC_NO,             KC_Y,             KC_U,         KC_I,         KC_O, KC_P,
    LGUI_T(KC_A),  LALT_T(KC_S),     LCTL_T(KC_D),     LSFT_T(KC_F),             KC_G, KC_NO, KC_NO,             KC_H,     LSFT_T(KC_J), LCTL_T(KC_K), LALT_T(KC_L), LGUI_T(KC_SCLN),
    KC_Z,          KC_X,             KC_C,             KC_V,             KC_B, KC_NO, KC_NO,             KC_N,             KC_M,      KC_COMM,       KC_DOT, KC_SLSH,
    KC_NO,        KC_NO, LT(MEDR, KC_ESC), LT(NAVR, KC_TAB), LT(MOUR, KC_SPC), KC_NO, KC_NO, LT(NSSL, KC_ENT), LT(NSL, KC_BSPC),       KC_DEL,        KC_NO, KC_NO
  ),

  /* Navigation (right-hand)
   * ,-----------------------------------------------------------------------------------.
   * |      |      |      |      |      |  N/A |  N/A |      |      |      |      |      |
   * |------+------+------+------+------+------+------+------+------+------+------+------|
   * |      |      |      |      |      |  N/A |  N/A | U_RDO| U_PST| U_CPY| U_CUT| U_UND|
   * |------+------+------+------+------+-------------+------+------+------+------+------|
   * |      |      |      |      |      |  N/A |  N/A | CAPS | LEFT | DOWN |  UP  | RGHT |
   * |------+------+------+------+------+------|------+------+------+------+------+------|
   * |      |      |      |      |      |  N/A |  N/A | INS  | HOME | PGDN | PGUP | END  |
   * |------+------+------+------+------+------+------+------+------+------+------+------|
   * |      |      |      |      |      |  N/A |  N/A |  ENT | BSPC |  DEL |  N/A |  N/A |
   * `-----------------------------------------------------------------------------------'
   */
  [NAVR] = LAYOUT_preonic_grid(
    _______, _______, _______, _______, _______, KC_NO, KC_NO, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, KC_NO, KC_NO, KC_AGIN, KC_PSTE, KC_COPY,  KC_CUT, KC_UNDO,
    _______, _______, _______, _______, _______, KC_NO, KC_NO, KC_CAPS, KC_LEFT, KC_DOWN,   KC_UP, KC_RGHT,
    _______, _______, _______, _______, _______, KC_NO, KC_NO,  KC_INS, KC_HOME, KC_PGDN, KC_PGUP,  KC_END,
    _______, _______, _______, _______, _______, KC_NO, KC_NO,  KC_ENT, KC_BSPC,  KC_DEL,   KC_NO,   KC_NO
  ),

  /* Mouse (right-hand)
   * ,-----------------------------------------------------------------------------------.
   * |      |      |      |      |      |  N/A |  N/A |      |      |      |      |      |
   * |------+------+------+------+------+------+------+------+------+------+------+------|
   * |      |      |      |      |      |  N/A |  N/A |      |      |      |      |      |
   * |------+------+------+------+------+-------------+------+------+------+------+------|
   * |      |      |      |      |      |  N/A |  N/A |      | MS_L | MS_D | MS_U | MS_R |
   * |------+------+------+------+------+------|------+------+------+------+------+------|
   * |      |      |      |      |      |  N/A |  N/A |      | WH_L | WH_D | WH_U | WH_R |
   * |------+------+------+------+------+------+------+------+------+------+------+------|
   * |      |      |      |      |      |  N/A |  N/A | BTN1 | BTN3 | BTN2 |  N/A |  N/A |
   * `-----------------------------------------------------------------------------------'
   */
  [MOUR] = LAYOUT_preonic_grid(
    _______, _______, _______, _______, _______, KC_NO, KC_NO, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, KC_NO, KC_NO, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, KC_NO, KC_NO, _______, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R,
    _______, _______, _______, _______, _______, KC_NO, KC_NO, _______, KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R,
    _______, _______, _______, _______, _______, KC_NO, KC_NO, KC_BTN1, KC_BTN3, KC_BTN2,   KC_NO,   KC_NO
  ),

  /* Media (right-hand)
   * ,-----------------------------------------------------------------------------------.
   * |      |      |      |      |      |  N/A |  N/A |      |      |      |      |      |
   * |------+------+------+------+------+------+------+------+------+------+------+------|
   * |      |      |      |      |      |  N/A |  N/A |      |      |      |      |      |
   * |------+------+------+------+------+-------------+------+------+------+------+------|
   * |      |      |      |      |      |  N/A |  N/A |      | MPRV | VOLD | VOLU | MNXT |
   * |------+------+------+------+------+------|------+------+------+------+------+------|
   * |      |      |      |      |      |  N/A |  N/A |      |      |      |      |      |
   * |------+------+------+------+------+------+------+------+------+------+------+------|
   * |      |      |      |      |      |  N/A |  N/A | MSTP | MPLY | MUTE |  N/A |  N/A |
   * `-----------------------------------------------------------------------------------'
   */
  [MEDR] = LAYOUT_preonic_grid(
    _______, _______, _______, _______, _______, KC_NO, KC_NO, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, KC_NO, KC_NO, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, KC_NO, KC_NO, _______, KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT,
    _______, _______, _______, _______, _______, KC_NO, KC_NO, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, KC_NO, KC_NO, KC_MSTP, KC_MPLY, KC_MUTE,   KC_NO,   KC_NO
  ),

  /* Numerals and symbols (left-hand)
   * ,-----------------------------------------------------------------------------------.
   * |      |      |      |      |      |  N/A |  N/A |      |      |      |      |      |
   * |------+------+------+------+------+------+------+------+------+------+------+------|
   * |   [  |   7  |   8  |   9  |   ]  |  N/A |  N/A |      |      |      |      |      |
   * |------+------+------+------+------+-------------+------+------+------+------+------|
   * |   '  |   4  |   5  |   6  |   =  |  N/A |  N/A |      |      |      |      |      |
   * |------+------+------+------+------+------|------+------+------+------+------+------|
   * |   `  |   1  |   2  |   3  |   \  |  N/A |  N/A |      |      |      |      |      |
   * |------+------+------+------+------+------+------+------+------+------+------+------|
   * |  N/A |  N/A |   .  |   0  |   -  |  N/A |  N/A |      |      |      |      |      |
   * `-----------------------------------------------------------------------------------'
   */
  [NSL] = LAYOUT_preonic_grid(
    _______, _______, _______, _______, _______, KC_NO, KC_NO, _______, _______, _______, _______, _______,
    KC_LBRC,    KC_7,    KC_8,    KC_9, KC_RBRC, KC_NO, KC_NO, _______, _______, _______, _______, _______,
    KC_QUOT,    KC_4,    KC_5,    KC_6,  KC_EQL, KC_NO, KC_NO, _______, _______, _______, _______, _______,
     KC_GRV,    KC_1,    KC_2,    KC_3, KC_BSLS, KC_NO, KC_NO, _______, _______, _______, _______, _______,
      KC_NO,   KC_NO,  KC_DOT,    KC_0, KC_MINS, KC_NO, KC_NO, _______, _______, _______, _______, _______
  ),

  /* Shifted numerals and symbols (left-hand)
   * ,-----------------------------------------------------------------------------------.
   * |      |      |      |      |      |  N/A |  N/A |      |      |      |      |      |
   * |------+------+------+------+------+------+------+------+------+------+------+------|
   * |   {  |   &  |   *  |   (  |   }  |  N/A |  N/A |      |      |      |      |      |
   * |------+------+------+------+------+-------------+------+------+------+------+------|
   * |   "  |   $  |   %  |   ^  |   +  |  N/A |  N/A |      |      |      |      |      |
   * |------+------+------+------+------+------|------+------+------+------+------+------|
   * |   ~  |   !  |   @  |   #  |   |  |  N/A |  N/A |      |      |      |      |      |
   * |------+------+------+------+------+------+------+------+------+------+------+------|
   * |  N/A |  N/A |   (  |   )  |   _  |  N/A |  N/A |      |      |      |      |      |
   * `-----------------------------------------------------------------------------------'
   */
  [NSSL] = LAYOUT_preonic_grid(
    _______, _______, _______, _______, _______, KC_NO, KC_NO, _______, _______, _______, _______, _______,
    KC_LCBR, KC_AMPR, KC_ASTR, KC_LPRN, KC_RCBR, KC_NO, KC_NO, _______, _______, _______, _______, _______,
    KC_DQUO,  KC_DLR, KC_PERC, KC_CIRC, KC_PLUS, KC_NO, KC_NO, _______, _______, _______, _______, _______,
    KC_TILD, KC_EXLM,   KC_AT, KC_HASH, KC_PIPE, KC_NO, KC_NO, _______, _______, _______, _______, _______,
      KC_NO,   KC_NO, KC_LPRN, KC_RPRN, KC_UNDS, KC_NO, KC_NO, _______, _______, _______, _______, _______
  )
};

#ifdef RGBLIGHT_ENABLE
void keyboard_post_init_user(void) {
  rgblight_enable_noeeprom(); // Enables RGB, without saving settings
  rgblight_sethsv_noeeprom(HSV_WHITE);
  rgblight_mode_noeeprom(RGBLIGHT_MODE_STATIC_LIGHT);
}
#endif
