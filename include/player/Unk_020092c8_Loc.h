#ifndef PLAYER_UNK_020092C8_LOC_H
#define PLAYER_UNK_020092C8_LOC_H

#include "types.h"

// Last-play date / location record views used when the player enters the field
// (src/main/unk_02004558.cpp; also used by src/main/unk_02004558_extra.cpp).

struct Unk_020092c8_Flags {
    /* 0x0 */ u8 f0 : 1;
    /* 0x0 */ u8 f1 : 2;
    /* 0x0 */ u8 f3 : 5;
};

struct Unk_020092c8_Date {
    union {
        struct {
            /* 0x0 */ u32 w0;
            /* 0x4 */ u32 w1;
        };
        /* 0x0 */ u8 b[8];
    };
};

struct Unk_020092c8_Bits {
    /* 0x0 */ u16 y : 7;
    /* 0x0 */ u16 m : 4;
    /* 0x0 */ u16 d : 5;
};

struct Unk_020092c8_Loc {
    /* 0x0 */ Unk_020092c8_Bits bits;
    /* 0x2 */ u16 pad;
    /* 0x4 */ Unk_020092c8_Date date;
};

#endif
