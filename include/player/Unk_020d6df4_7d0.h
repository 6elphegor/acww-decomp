#ifndef PLAYER_UNK_020D6DF4_7D0_H
#define PLAYER_UNK_020D6DF4_7D0_H

#include "types.h"

// PlayerActor helpers of src/main/unk_02004558.cpp (and its _extra copy): the action work at 0x7d0
// (initWalk defined there), and the position vector used by the player code.

struct Unk_020d6df4_7d0 {
    /* 0x0 */ s32 walkSpeed;
    void initWalk();
};

#endif
