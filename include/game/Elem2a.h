#ifndef GAME_ELEM2A_H
#define GAME_ELEM2A_H

#include "types.h"

// Two-byte element with an out-of-line constructor (shop helpers in unk_020af258 / unk_020ac750, next to Elem2b).
struct Elem2a {
    Elem2a();
    /* 0x0 */ u16 d;
};

#endif
