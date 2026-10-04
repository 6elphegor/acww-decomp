#ifndef PLAYER_UNK_02006D14_SUB7D0_H
#define PLAYER_UNK_02006D14_SUB7D0_H

#include "types.h"

// Pick-up / store view of the player action work area at 0x7d0 (word-aligned variant). Used in src/main/unk_02004558.cpp (PlayerActor unit).

struct Unk_02006d14_Sub7d0 {
    /* 0x0 */ u8 commitUnit;
    /* 0x1 */ u8 pad_01[3];
    /* 0x4 */ union { s32 s; struct { u8 unk_04, unk_05, unk_06, unk_07; } b; } unk_04;
    /* 0x8 */ u8 storeStep;
    /* 0x9 */ u8 pickUnitX;
    /* 0xa */ u8 pickUnitZ;
};

#endif
