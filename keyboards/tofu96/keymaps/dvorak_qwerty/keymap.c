#include QMK_KEYBOARD_H

/*
  __________  ________  __   ____  _____
 /_  __/ __ \/ ____/ / / /  / __ \/ ___/
  / / / / / / /_  / / / /  / /_/ / __ \ 
 / / / /_/ / __/ / /_/ /   \__, / /_/ / 
/_/  \____/_/    \____/   /____/\____/ 
--------------------------------------
> BOARD OVERVIEW - TOFU96 - Layout by PINPAL - https://kbdfans.com/products/tofu96-mechanical-keyboard-diy-kit

┌────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┐
│ Esc    │ F1     │ F2     │ F3     │ F4     │ F5     │ F6     │ F7     │ F8     │ F9     │ F10    │ F11    │ F12    │ Delete │ Home   │ Play   │ Vol +  │ Vol -  │ F24    │
│        │        │        │        │        │        │        │        │        │        │        │        │        │        │        │        │        │        │        │
├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┴────────┼────────┼────────┼────────┼────────┤
│ ~      │ 1      │ 2      │ 3      │ 4      │ 5      │ 6      │ 7      │ 8      │ 9      │ 0      │ -      │ +      │ Backspace       │ ,      │ /      │ *      │ -      │
│ `      │        │        │        │        │        │        │        │        │        │        │ _      │ =      │                 │        │        │        │        │
├────────┴───┬────┴───┬────┴───┬────┴───┬────┴───┬────┴───┬────┴───┬────┴───┬────┴───┬────┴───┬────┴───┬────┴───┬────┴───┬─────────────┼────────┼────────┼────────┤────────┤
│ Tab        │ Q      │ W      │ E      │ R      │ T      │ Y      │ U      │ I      │ O      │ P      │ {      │ }      │ |           │ 7      │ 8      │ 9      │        │
│            │        │        │        │        │        │        │        │        │        │        │ [      │ ]      │ \           │        │        │        │        │
├────────────┴─┬──────┴─┬──────┴─┬──────┴─┬──────┴─┬──────┴─┬──────┴─┬──────┴─┬──────┴─┬──────┴─┬──────┴─┬──────┴─┬──────┴─────────────┼────────┼────────┼────────┤ +      │
│ Caps Lock    │ A      │ S      │ D      │ F      │ G      │ H      │ J      │ K      │ L      │ :      │ "      │ Enter              │ 4      │ 5      │ 6      │        │
│              │        │        │        │        │        │        │        │        │        │ ;      │ '      │                    │        │        │        │        │
├──────────────┴───┬────┴───┬────┴───┬────┴───┬────┴───┬────┴───┬────┴───┬────┴───┬────┴───┬────┴───┬────┴───┬────┴───────────┬────────┼────────┼────────┼────────┤────────┤
│ Shift            │ Z      │ X      │ C      │ V      │ B      │ N      │ M      │ <      │ >      │ ?      │ Shift          │ ▲      │ 1      │ 2      │ 3      │        │
│                  │        │        │        │        │        │        │        │ ,      │ .      │ /      │                │        │        │        │        │        │
├─────────┬────────┴┬───────┴─┬──────┴────────┴────────┴────────┴────────┴────────┴────────┼────────┴───┬────┴───────┬────────┼────────┼────────┼────────┼────────┤ Enter  │
│ Ctrl    │ FN      │ Alt     │ Space                                                      │ Alt        │ CTRL       │ ◄      │ ▼      │ ►      │ 0      │ •      │        │
│         │         │         │                                                            │            │            │        │        │        │        │        │        │
└─────────┴─────────┴─────────┴────────────────────────────────────────────────────────────┴────────────┴────────────┴────────┴────────┴────────┴────────┴────────┴────────┘
*/

// Increase Readability
#define ________ 	KC_TRNS 	// Transparent Key
#define _ 			KC_NO		// Do Nothing Key

// Macro Shorthand
#define M_SAVE	LCTL(KC_SCLN)	// Control + S	Save 
#define M_CLSE	LCTL(KC_COMM)	// Control + W	Close
#define M_NEW	LCTL(KC_L)		// Control + N	New
#define M_REDO	LCTL(KC_T)		// Control + Y	Redo
#define M_UNDO	LCTL(KC_SLSH)	// Control + Z	Undo
#define M_SLCT 	LCTL(KC_A)		// Control + A	Select All
#define M_DSLCT LCTL(KC_H)		// Control + D	Deselect
#define M_QUIT	LCTL(KC_X)		// Control + Q	Quit
#define M_BOLD	LCTL(KC_N)		// Control + B	Bold
#define M_HIST	LCTL(KC_J)		// Control + H	History
#define M_GRUP	LCTL(KC_U)		// Control + G	Group
#define M_FIND	LCTL(KC_Y)		// Control + F	Find
#define M_RLD	LCTL(KC_O)		// Control + R	Reload
#define M_TAB	LCTL(KC_K)		// Control + T	New Tab
#define M_PRNT	LCTL(KC_R)		// Control + P	Print
#define M_OPEN	LCTL(KC_S)		// Control + O	Open
#define M_ADRS	LCTL(KC_P)		// Control + l	Focus Address Bar
#define M_DL	LCTL(KC_C)		// Control + J	View Downloads
#define M_COPY	LCTL(KC_I)		// Control + C	Copy
#define M_CUT	LCTL(KC_B)		// Control + X	Cut
#define M_PSTE	LCTL(KC_DOT)	// Control + V	Paste
#define M_RUN	LGUI(KC_O)		// Windows + R	Open Run
#define M_LOCK	LGUI(KC_P)		// Windows + R	Lockscreen

#define M_LEFT	SWIN(KC_LEFT)	// Shift + Win + ◄	Move Window Left
#define M_RGHT	SWIN(KC_RGHT)	// Shift + Win + ►	Move Window Right
#define M_WT	LGUI(KC_UP)		// Windows + ▲	Split Window Top
#define M_WB	LGUI(KC_DOWN)	// Windows + ▼	Split Window Down
#define M_WL	LGUI(KC_LEFT)	// Windows + ◄	Split Window Left
#define M_WR	LGUI(KC_RGHT)	// Windows + ►	Split Window Right

// Define Custom Keycodes
enum custom_keycodes {
  M_WTL = SAFE_RANGE,
  M_WBL,
  M_WTR,
  M_WBR,
};

// Custom Keycodes
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
	//  Windows + ▲ ◄	Split Window Top Left
    case M_WTL:
		if (record->event.pressed) {
			register_mods(MOD_BIT(KC_LGUI));
			tap_code(KC_LEFT);
			tap_code(KC_UP);
			unregister_mods(MOD_BIT(KC_LGUI));
		}
		break;
	// Windows + ▼ ◄	Split Window Bottom Left
	case M_WBL:
		if (record->event.pressed) {
			register_mods(MOD_BIT(KC_LGUI));
			tap_code(KC_LEFT);
			tap_code(KC_DOWN);
			unregister_mods(MOD_BIT(KC_LGUI));
		}
		break;
	//  Windows + ▲ ►	Split Window Top Right
	case M_WTR:
		if (record->event.pressed) {
			register_mods(MOD_BIT(KC_LGUI));
			tap_code(KC_RIGHT);
			tap_code(KC_UP);
			unregister_mods(MOD_BIT(KC_LGUI));
		}
		break;
	// Windows + ▼ ►	Split Window Bottom Right
	case M_WBR:
		if (record->event.pressed) {
			register_mods(MOD_BIT(KC_LGUI));
			tap_code(KC_RIGHT);
			tap_code(KC_DOWN);
			unregister_mods(MOD_BIT(KC_LGUI));
		}
		break;
  }
  return true;
};

// Right Alt & Ctrl act as normal when tapped but switch to layer 1 while held
#define FN_ALT	LT(1,KC_RALT)
#define FN_CTRL LT(1,KC_RCTL)

// Force NUMLOCK all the time
void led_set_keymap(uint8_t usb_led) { 		// Called to check LED lights status upon connection
  if (!(usb_led & (1<<USB_LED_NUM_LOCK))) { // Check if NUMLOCK enabled
    register_code(KC_NUMLOCK);				// Simulate NUMLOCK key down stroke
    unregister_code(KC_NUMLOCK); 			// Simulate NUMLOCK key up stroke
  }
}

// Layouts
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	// Main Layer
	[0] = LAYOUT_default(
	//┌────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┐
	//│ Esc    │ F1     │ F2     │ F3     │ F4     │ F5     │ F6     │ F7     │ F8     │ F9     │ F10    │ F11    │ F12    │ Delete │ Home   │ Play   │ Vol +  │ Vol -  │ F24    │
		KC_ESC , KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  , KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F11 , KC_F12 , KC_DEL , KC_HOME, KC_MPLY, KC_VOLD, KC_VOLU, KC_F24 ,\
	//├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┴────────┼────────┼────────┼────────┼────────┤
	//│ ~      │ 1      │ 2      │ 3      │ 4      │ 5      │ 6      │ 7      │ 8      │ 9      │ 0      │ -      │ +      │ Backspace       │ ,      │ /      │ *      │ -      │
		KC_GRV , KC_1   , KC_2   , KC_3   , KC_4   , KC_5   , KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , KC_MINS, KC_EQL , KC_BSPC         , KC_W   , KC_PSLS, KC_PAST, KC_PMNS,\
	//├────────┴───┬────┴───┬────┴───┬────┴───┬────┴───┬────┴───┬────┴───┬────┴───┬────┴───┬────┴───┬────┴───┬────┴───┬────┴───┬─────────────┼────────┼────────┼────────┤────────┤
	//│ Tab        │ Q      │ W      │ E      │ R      │ T      │ Y      │ U      │ I      │ O      │ P      │ {      │ }      │ |           │ 7      │ 8      │ 9      │        │	 
		KC_TAB     , KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   , KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_LBRC, KC_RBRC, KC_BSLS     , KC_P7  , KC_P8  , KC_P9  , KC_PPLS,\
	//├────────────┴─┬──────┴─┬──────┴─┬──────┴─┬──────┴─┬──────┴─┬──────┴─┬──────┴─┬──────┴─┬──────┴─┬──────┴─┬──────┴─┬──────┴─────────────┼────────┼────────┼────────┤ +      │
	//│ Caps Lock    │ A      │ S      │ D      │ F      │ G      │ H      │ J      │ K      │ L      │ :      │ "      │ Enter              │ 4      │ 5      │ 6      │        │
		KC_CAPS      , KC_A   , KC_S   , KC_D   , KC_F   , KC_G   , KC_H   , KC_J   , KC_K   , KC_L   , KC_SCLN, KC_QUOT, KC_ENT             , KC_P4  , KC_P5  , KC_P6  ,         \
	//├──────────────┴───┬────┴───┬────┴───┬────┴───┬────┴───┬────┴───┬────┴───┬────┴───┬────┴───┬────┴───┬────┴───┬────┴───────────┬────────┼────────┼────────┼────────┤────────┤
	//│ Shift            │ Z      │ X      │ C      │ V      │ B      │ N      │ M      │ <      │ >      │ ?      │ Shift          │ ▲      │ 1      │ 2      │ 3      │        │	 
		KC_LSPO          , KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   , KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, KC_RSPC        , KC_UP  , KC_P1  , KC_P2  , KC_P3  , KC_ENT ,\
	//├─────────┬────────┴┬───────┴─┬──────┴────────┴────────┴────────┴────────┴────────┴────────┼────────┴───┬────┴───────┬────────┼────────┼────────┼────────┼────────┤ Enter  │
	//│ Ctrl    │ FN → 1  │ Alt     │ Space                                                      │ Alt        │ CTRL       │ ◄      │ ▼      │ ►      │ 0      │ •      │        │
		KC_LCTL , MO(1)   , KC_LALT , KC_SPC                                                     , FN_ALT     ,_, FN_CTRL    , KC_LEFT, KC_DOWN, KC_RGHT, KC_P0  , KC_PDOT            
	//└─────────┴─────────┴─────────┴────────────────────────────────────────────────────────────┴────────────┴────────────┴────────┴────────┴────────┴────────┴────────┴────────┘
	),

	// Main Function Layer
	[1] = LAYOUT_default(
	//┌────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┐
	//│        │        │        │        │        │        │        │        │        │        │        │        │        │ PrntScr│ End    │ Mute   │ Skip ♫ │ Next ♫ │ F23    │
	   ________,________,________,________,________,________,________,________,________,________,________,________,________, KC_PSCR, KC_END , KC_MUTE, KC_MPRV, KC_MNXT, KC_F23 ,\
	//├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┴────────┼────────┼────────┼────────┼────────┤
	//│        │        │        │        │        │        │        │        │        │        │        │        │        │                 │        │        │        │        │
	   ________,________,________,________,________,________,________,________,________,________,________,________,________,________         ,________,________,________,________,\
	//├────────┴───┬────┴───┬────┴───┬────┴───┬────┴───┬────┴───┬────┴───┬────┴───┬────┴───┬────┴───┬────┴───┬────┴───┬────┴───┬─────────────┼────────┼────────┼────────┤────────┤
	//│            │ Quit   │ Close  │  Run   │ Relaod │ New Tab│ Redo   │        │        │ Open   │ Print  │        │        │             │        │        │        │        │
	   ________    , M_QUIT , M_CLSE , M_RUN  , M_RLD  , M_TAB  , M_REDO ,________,________, M_OPEN , M_PRNT ,________,________,________     , M_WTL  , M_WT   , M_WTR  ,________,\
	//├────────────┴─┬──────┴─┬──────┴─┬──────┴─┬──────┴─┬──────┴─┬──────┴─┬──────┴─┬──────┴─┬──────┴─┬──────┴─┬──────┴─┬──────┴─────────────┼────────┼────────┼────────┤        │
	//│              │ Select │ Save   │Deselect│ Find   │ Group  │ History│Downlaod│ Lock   │ Search │        │        │                    │        │        │        │        │
	   ________      , M_SLCT , M_SAVE , M_DSLCT, M_FIND , M_GRUP , M_HIST , M_DL   , M_LOCK , M_ADRS ,________,________,________            , M_WL   ,________, M_WR   ,         \
	//├──────────────┴───┬────┴───┬────┴───┬────┴───┬────┴───┬────┴───┬────┴───┬────┴───┬────┴───┬────┴───┬────┴───┬────┴───────────┬────────┼────────┼────────┼────────┤────────┤
	//│                  │ Undo   │ Cut    │ Copy   │ Paste  │ Bold   │ New    │        │        │        │        │                │        │        │        │        │        │
	   ________          , M_UNDO , M_CUT  , M_COPY , M_PSTE , M_BOLD , M_NEW  ,________,________,________,________,________        ,________, M_WBL  , M_WB   , M_WBR  ,________,\
	//├─────────┬────────┴┬───────┴─┬──────┴────────┴────────┴────────┴────────┴────────┴────────┼────────┴───┬────┴───────┬────────┼────────┼────────┼────────┼────────┤        │
	//│ FN → 2  │         │         │ Left OS Key (Windows Key)                                               │            │        │        │        │        │        │        │
	    MO(2)    ,________ ,________, KC_LGUI                                                    ,________    ,_,________  , M_LEFT ,________, M_RGHT ,________,________
	//└─────────┴─────────┴─────────┴────────────────────────────────────────────────────────────┴────────────┴────────────┴────────┴────────┴────────┴────────┴────────┴────────┘
	),
	
	// Secondary Function Layer
	[2] = LAYOUT_default(
	//┌────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┐
	//│ FLASH  │        │        │        │        │        │        │        │        │        │        │        │        │        │        │        │        │        │        │
	    RESET  ,________,________,________,________,________,________,________,________,________,________,________,________,________,________,________,________,________,________,\
	//├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┴────────┼────────┼────────┼────────┼────────┤
	//│        │        │        │        │        │        │        │        │        │        │        │        │        │                 │        │        │        │        │
	   ________,________,________,________,________,________,________,________,________,________,________,________,________,________         ,________,________,________,________,\
	//├────────┴───┬────┴───┬────┴───┬────┴───┬────┴───┬────┴───┬────┴───┬────┴───┬────┴───┬────┴───┬────┴───┬────┴───┬────┴───┬─────────────┼────────┼────────┼────────┤────────┤
	//│            │        │        │        │        │        │        │        │        │        │        │        │        │             │        │        │        │        │
	   ________    ,________,________,________,________,________,________,________,________,________,________,________,________,________     ,________,________,________,         \
	//├────────────┴─┬──────┴─┬──────┴─┬──────┴─┬──────┴─┬──────┴─┬──────┴─┬──────┴─┬──────┴─┬──────┴─┬──────┴─┬──────┴─┬──────┴─────────────┼────────┼────────┼────────┤        │
	//│              │        │        │        │        │        │        │        │        │        │        │        │                    │        │        │        │        │
	   ________      ,________,________,________,________,________,________,________,________,________,________,________,________,________,________,________,________,\
	//├──────────────┴───┬────┴───┬────┴───┬────┴───┬────┴───┬────┴───┬────┴───┬────┴───┬────┴───┬────┴───┬────┴───┬────┴───────────┬────────┼────────┼────────┼────────┤────────┤
	//│                  │        │        │        │        │        │        │        │        │        │        │                │        │        │        │        │        │
	   ________          ,________,________,________,________,________,________,________,________,________,________,________,________,________,________,________,________,        \
	//├─────────┬────────┴┬───────┴─┬──────┴────────┴────────┴────────┴────────┴────────┴────────┼────────┴───┬────┴───────┬────────┼────────┼────────┼────────┼────────┤        │
	//│         │         │         │                                                            │            │            │        │        │        │        │        │        │
	   ________ ,________ ,________ ,________                                                    ,________    ,________    ,________,________,________,________,________,________
	//└─────────┴─────────┴─────────┴────────────────────────────────────────────────────────────┴────────────┴────────────┴────────┴────────┴────────┴────────┴────────┴────────┘
	)

};
