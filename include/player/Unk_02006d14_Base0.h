#ifndef PLAYER_UNK_02006D14_BASE0_H
#define PLAYER_UNK_02006D14_BASE0_H

#include "types.h"
#include "player/Unk_02006d14_Trip.h"

// First base (0x00-0xec) of the PlayerActor view Unk_02006d14 used by the unk_02009f68 section of
// src/main/unk_02004558.cpp / unk_02004558_extra.cpp.
struct Unk_02006d14_Base0 {
    /* 0x00 */ u8 pad_000[0xc4];
    /* 0xc4 */ Unk_02006d14_Trip unk_c4;
    /* 0xd0 */ s16 unk_d0;
    /* 0xd2 */ u8 pad_d2[0xec - 0xd2];
};

#endif
