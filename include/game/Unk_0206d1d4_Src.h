#ifndef GAME_UNK_0206D1D4_SRC_H
#define GAME_UNK_0206D1D4_SRC_H

#include "types.h"

// Greeting source record: name at 0x34, count at 0xec (src/main/unk_0206cbdc.cpp, unk_0206d5b8.cpp,
// unk_0206d3f4.cpp).

struct Unk_0206d1d4_Src {
    /* 0x00 */ u8 pad_00[0x34];
    /* 0x34 */ u8 name[0x18];
    /* 0x4c */ u8 pad_4c[0xa0];
    /* 0xec */ u8 cnt;
};

#endif
