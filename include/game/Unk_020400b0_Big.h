#ifndef GAME_UNK_020400B0_BIG_H
#define GAME_UNK_020400B0_BIG_H

#include "types.h"

// Large save-data view, only the bytes at 0x15e28..0x15e2a are known (src/main/unk_02040050.cpp,
// unk_02040234.cpp).

struct Unk_020400b0_Big {
    /* 0x00000 */ u8 pad[0x15e28];
    /* 0x15e28 */ u8 unk_15e28;
    /* 0x15e29 */ u8 unk_15e29;
    /* 0x15e2a */ u8 unk_15e2a;
};

#endif
