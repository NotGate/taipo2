// qmk new-keymap -kb gergoplex -km taipo
// qmk compile -kb gboards/k/gergoplex -km taipo
// make gboards/k/gergoplex:default:flash
#include QMK_KEYBOARD_H

#define XX KC_NO
#define TAP(KC) tap_code16(KC);break;
#define OS(KC) set_oneshot_mods(KC);break;

// {pinky, ring, middle, index, thumb}{bottom, top}
#define pb 1<<1
#define pt 1<<2
#define rb 1<<3
#define rt 1<<4
#define mb 1<<5
#define mt 1<<6
#define ib 1<<7
#define it 1<<8
#define tb 1<<9
#define tt 1<<10

static uint16_t stateL, stateR;

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[0] = LAYOUT_gergoplex(
     2,  4,  6,  8, XX, XX, 18, 16, 14, 12,
     1,  3,  5,  7, XX, XX, 17, 15, 13, 11,
    XX, XX, XX, XX, XX, XX, XX, XX, XX, XX,
        XX,  9, 10,         20, 19, XX)
};

static void send(uint16_t val) {
    switch (val) {
        // Layer 0
        case ib: TAP(KC_T)
        case it: TAP(KC_E)
        case mb: TAP(KC_I)
        case mt: TAP(KC_S)
        case rb: TAP(KC_O)
        case rt: TAP(KC_N)
        case pb: TAP(KC_R)
        case pt: TAP(KC_A)
        case ib|mb: TAP(KC_P)
        case it|mt: TAP(KC_L)
        case mb|rb: TAP(KC_H)
        case mt|rt: TAP(KC_C)
        case rb|pb: TAP(KC_SCLN)
        case rt|pt: TAP(KC_U)
        case ib|rb: TAP(KC_Y)
        case it|rt: TAP(KC_D)
        case mb|pb: TAP(KC_COMM)
        case mt|pt: TAP(KC_X)
        case ib|pb: TAP(KC_LBRC)
        case it|pt: TAP(KC_M)
        case ib|mt: TAP(KC_F)
        case it|mb: TAP(KC_LT)
        case mb|rt: TAP(KC_MINS)
        case mt|rb: TAP(KC_W)
        case rb|pt: TAP(KC_LPRN)
        case rt|pb: TAP(KC_Z)
        case ib|rt: TAP(KC_SLSH)
        case it|rb: TAP(KC_K)
        case mb|pt: TAP(KC_Q)
        case mt|pb: TAP(KC_G)
        case ib|pt: TAP(KC_QUOT)
        case it|pb: TAP(KC_B)
        case ib|mb|rb: TAP(KC_V)
        case it|mt|rt: TAP(KC_EXLM)
        case ib|mt|rt: TAP(KC_J)
        case it|mt|rb: TAP(KC_LCBR)
        case it|mb|rb: TAP(KC_LEFT)
        case ib|mb|rt: TAP(KC_RGHT)
        case ib|mt|rb: TAP(KC_UP)
        case it|mb|rt: TAP(KC_DOWN)
        case mb|rb|pb: TAP(KC_ENT)
        case mt|rt|pt: TAP(KC_DEL)
        case mb|rt|pt: OS(MOD_LCTL)
        case mt|rb|pb: OS(MOD_LSFT)

        // Layer 1
        case tb: TAP(KC_SPC)
        case tb|ib: TAP(S(KC_T))
        case tb|it: TAP(S(KC_E))
        case tb|mb: TAP(S(KC_I))
        case tb|mt: TAP(S(KC_S))
        case tb|rb: TAP(S(KC_O))
        case tb|rt: TAP(S(KC_N))
        case tb|pb: TAP(S(KC_R))
        case tb|pt: TAP(S(KC_A))
        case tb|ib|mb: TAP(S(KC_P))
        case tb|it|mt: TAP(S(KC_L))
        case tb|mb|rb: TAP(S(KC_H))
        case tb|mt|rt: TAP(S(KC_C))
        case tb|rb|pb: TAP(KC_COLN)
        case tb|rt|pt: TAP(S(KC_U))
        case tb|ib|rb: TAP(S(KC_Y))
        case tb|it|rt: TAP(S(KC_D))
        case tb|mb|pb: TAP(KC_DOT)
        case tb|mt|pt: TAP(S(KC_X))
        case tb|ib|pb: TAP(KC_RBRC)
        case tb|it|pt: TAP(S(KC_M))
        case tb|ib|mt: TAP(S(KC_F))
        case tb|it|mb: TAP(KC_GT)
        case tb|mb|rt: TAP(KC_UNDS)
        case tb|mt|rb: TAP(S(KC_W))
        case tb|rb|pt: TAP(KC_RPRN)
        case tb|rt|pb: TAP(S(KC_Z))
        case tb|ib|rt: TAP(KC_BSLS)
        case tb|it|rb: TAP(S(KC_K))
        case tb|mb|pt: TAP(S(KC_Q))
        case tb|mt|pb: TAP(S(KC_G))
        case tb|ib|pt: TAP(KC_DQT)
        case tb|it|pb: TAP(S(KC_B))
        case tb|ib|mb|rb: TAP(S(KC_V))
        case tb|it|mt|rt: TAP(KC_QUES)
        case tb|ib|mt|rt: TAP(S(KC_J))
        case tb|it|mt|rb: TAP(KC_RCBR)
        case tb|ib|mt|rb: TAP(KC_PGUP)
        case tb|it|mb|rt: TAP(KC_PGDOWN)
        case tb|mb|rb|pb: TAP(KC_TAB)
        case tb|mt|rt|pt: TAP(KC_INS)
        case tb|mb|rt|pt: OS(MOD_LALT)
        case tb|mt|rb|pb: OS(MOD_RALT)

        // Layer 2
        case tt: TAP(KC_BSPC)
        case tt|ib: TAP(KC_GRV)
        case tt|it: TAP(KC_CIRC)
        case tt|mb: TAP(KC_PLUS)
        case tt|mt: TAP(KC_EQL)
        case tt|rb: TAP(KC_DLR)
        case tt|rt: TAP(KC_ASTR)
        case tt|pb: TAP(KC_HASH)
        case tt|pt: TAP(KC_TILD)
        case tt|ib|mb: TAP(KC_0)
        case tt|it|mt: TAP(KC_5)
        case tt|mb|rb: TAP(KC_1)
        case tt|mt|rt: TAP(KC_6)
        case tt|rb|pb: TAP(KC_2)
        case tt|rt|pt: TAP(KC_7)
        case tt|ib|rb: TAP(KC_3)
        case tt|it|rt: TAP(KC_8)
        case tt|mb|pb: TAP(KC_4)
        case tt|mt|pt: TAP(KC_9)
        case tt|ib|pb: TAP(KC_PIPE)
        case tt|it|pt: TAP(KC_AMPR)
        case tt|ib|mt: TAP(KC_PERC)
        case tt|mb|rt: TAP(KC_VOLD)
        case tt|it|mb: TAP(KC_AT)
        case tt|mt|rb: TAP(KC_VOLU)
        case tt|ib|rt: TAP(KC_MPRV)
        case tt|it|rb: TAP(KC_MNXT)
        case tt|ib|pt: TAP(KC_BRID)
        case tt|it|pb: TAP(KC_BRIU)
        case tt|ib|mb|rb: TAP(KC_MUTE)
        case tt|it|mt|rt: TAP(KC_MPLY)
        case tt|ib|mt|rb: TAP(KC_HOME)
        case tt|it|mb|rt: TAP(KC_END)
        case tt|mb|rb|pb: TAP(KC_ESC)
        case tt|mt|rt|pt: TAP(KC_PSCR)
        case tt|mb|rt|pt: OS(MOD_LGUI)
        // case tt|mt|rb|pb: TAP(MOD_LEAD)
    }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if(record->event.pressed && keycode != XX) {
        if(keycode>10)
            stateR |= 1 << (keycode - 10);
        else
            stateL |= 1 << keycode;
    } else {
        send(stateL);
        send(stateR);
        stateL = 0;
        stateR = 0;
    }
    return false;
}
