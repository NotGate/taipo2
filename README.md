# taipo
A chord-based typing system:
- only needs 10 keys per hand (2 keys per finger)
- optimized to reduce finger usage, travel distance, and awkward patterns
- used billions of SLOC for training data


This table shows what the index, middle, ring, and pinky need to do on the right hand for a chord.  
Taipo is symmetric, so the left hand would mirror the right hand.  
| Chord						        | L0      | L1      | L2      | Chord                   | L0      | L1        | L2      |
| :---         						| :---:   | :---:   | :---:   | :---:                   | :---:   | :---:     | :---:   |
| ⚫⚫⚫⚫<br>⚪⚫⚫⚫| t       | T       | `       | ⚪⚫⚫⚫<br>⚫⚫⚫⚫| e       | E         | ^       |
| ⚫⚫⚫⚫<br>⚫⚪⚫⚫| i       | I       | +       | ⚫⚪⚫⚫<br>⚫⚫⚫⚫| s       | S         | =       |
| ⚫⚫⚫⚫<br>⚫⚫⚪⚫| o       | O       | $       | ⚫⚫⚪⚫<br>⚫⚫⚫⚫| n       | N         | *       |
| ⚫⚫⚫⚫<br>⚫⚫⚫⚪| r       | R       | #       | ⚫⚫⚫⚪<br>⚫⚫⚫⚫| a       | A         | ~       |
| ⚫⚫⚫⚫<br>⚪⚪⚫⚫| p       | P       | 0       | ⚪⚪⚫⚫<br>⚫⚫⚫⚫| l       | L         | 5       |
| ⚫⚫⚫⚫<br>⚫⚪⚪⚫| h       | H       | 1       | ⚫⚪⚪⚫<br>⚫⚫⚫⚫| c       | C         | 6       |
| ⚫⚫⚫⚫<br>⚫⚫⚪⚪| ;       | :       | 2       | ⚫⚫⚪⚪<br>⚫⚫⚫⚫| u       | U         | 7       |
| ⚫⚫⚫⚫<br>⚪⚫⚪⚫| y       | Y       | 3       | ⚪⚫⚪⚫<br>⚫⚫⚫⚫| d       | D         | 8       |
| ⚫⚫⚫⚫<br>⚫⚪⚫⚪| ,       | .       | 4       | ⚫⚪⚫⚪<br>⚫⚫⚫⚫| x       | X         | 9       |
| ⚫⚫⚫⚫<br>⚪⚫⚫⚪| [       | ]       | \|      | ⚪⚫⚫⚪<br>⚫⚫⚫⚫| m       | M         | &       |
| ⚫⚪⚫⚫<br>⚪⚫⚫⚫| f       | F       | %       | ⚪⚫⚫⚫<br>⚫⚪⚫⚫| <       | >         | @       |
| ⚫⚫⚪⚫<br>⚫⚪⚫⚫| -       | _       | KC_VOLD | ⚫⚪⚫⚫<br>⚫⚫⚪⚫| w       | W         | KC_VOLU |
| ⚫⚫⚫⚪<br>⚫⚫⚪⚫| (       | )       |         | ⚫⚫⚪⚫<br>⚫⚫⚫⚪| z       | Z         |         |
| ⚫⚫⚪⚫<br>⚪⚫⚫⚫| /       | \       | KC_MPRV | ⚪⚫⚫⚫<br>⚫⚫⚪⚫| k       | K         | KC_MNXT |
| ⚫⚫⚫⚪<br>⚫⚪⚫⚫| q       | Q       |         | ⚫⚪⚫⚫<br>⚫⚫⚫⚪| g       | G         |         |
| ⚫⚫⚫⚪<br>⚪⚫⚫⚫| '       | "       | KC_BRID | ⚪⚫⚫⚫<br>⚫⚫⚫⚪| b       | B         | KC_BRIU |
| ⚫⚫⚫⚫<br>⚪⚪⚪⚫| v       | V       | KC_MUTE | ⚪⚪⚪⚫<br>⚫⚫⚫⚫| !       | ?         | KC_MPLY |
| ⚫⚪⚪⚫<br>⚪⚫⚫⚫| j       | J       |         | ⚪⚫⚫⚫<br>⚫⚪⚪⚫| KC_LEFT |           |         |
| ⚪⚪⚫⚫<br>⚫⚫⚪⚫| {       | }       |         | ⚫⚫⚪⚫<br>⚪⚪⚫⚫| KC_RGHT |           |         |
| ⚫⚫⚪⚪<br>⚫⚪⚫⚫| KC_LCTL | KC_LALT | KC_LGUI | ⚫⚪⚫⚫<br>⚫⚫⚪⚪| KC_LSFT | KC_ALGR   | KC_LEAD |
| ⚫⚪⚫⚫<br>⚪⚫⚪⚫| KC_UP   | KC_PGUP | KC_HOME | ⚪⚫⚪⚫<br>⚫⚪⚫⚫| KC_DOWN | KC_PGDOWN | KC_END  |
| ⚫⚫⚫⚫<br>⚫⚪⚪⚪| KC_ENT  | KC_TAB  | KC_ESC  | ⚫⚪⚪⚪<br>⚫⚫⚫⚫| KC_DEL  | KC_INS    | KC_PSCR 

## Notes
- Taipo was only optimized for typing visible characters (the main ascii 97), so feel free to move/add/subtract modifiers, nav keys, etc.  
- You can enter F1-F19 using the KC_LEAD chord. KC_LEAD+[1-9]=F1-F9, KC_LEAD+0+[0-9]=F10-F19
