#ifndef PLAYER_UNK_02006D14_TRIP_H
#define PLAYER_UNK_02006D14_TRIP_H

#include "types.h"

// Three u32 (PlayerActor field at 0xc4). Used in src/main/unk_02004558.cpp (PlayerActor unit).

struct Unk_02006d14_Trip {
    /* 0x0 */ u32 x;
    /* 0x4 */ u32 y;
    /* 0x8 */ u32 z;
};

#endif
