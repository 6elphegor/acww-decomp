#ifndef PLAYER_UNK_02006D14_ST7D0_H
#define PLAYER_UNK_02006D14_ST7D0_H

#include "types.h"

// Pick-up / store view of the player action work area at 0x7d0. Used in src/main/unk_02004558.cpp (PlayerActor unit).

struct Unk_02006d14_St7d0 {
    /* 0x0 */ u8 commitUnit;
    /* 0x1 */ u8 fanfareStep;
    /* 0x2 */ u8 unitX;
    /* 0x3 */ u8 unitZ;
    /* 0x4 */ u8 pad_4[4];
    /* 0x8 */ u8 storeStep;
    /* 0x9 */ u8 pickUnitX;
    /* 0xa */ u8 pickUnitZ;
};

#endif
