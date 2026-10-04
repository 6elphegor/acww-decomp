#ifndef PLAYER_UNK_0200944C_H
#define PLAYER_UNK_0200944C_H

#include "types.h"
#include "player/Unk_02006d14_Vec.h"

// Walk-to request arguments (target position, max speed); setWalkToArgs is defined in src/main/unk_02004558.cpp
// (also used by src/main/unk_02004558_extra.cpp).

struct Unk_0200944c {
    /* 0x00 */ Unk_02006d14_Vec targetPos;
    /* 0x0c */ s32 maxSpeed;
    void setWalkToArgs(Unk_02006d14_Vec v, s32 a);
};

#endif
