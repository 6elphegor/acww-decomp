#ifndef PLAYER_UNK_020D6DF4_7D0_H
#define PLAYER_UNK_020D6DF4_7D0_H

#include "types.h"

// PlayerActor helpers of src/main/unk_02004558.cpp (and its _extra copy): the action work at 0x7d0
// (initWalk defined there), the position vector and the gCommManager view used by the player code.

struct Unk_020d6df4_7d0 {
    /* 0x0 */ s32 walkSpeed;
    void initWalk();
};

struct Unk_020d6df4_Vec {
    /* 0x0 */ s32 x, y, z;
};

struct Unk_020d6df4_Data {
    /* 0x00 */ u8 pad_00[0x64];
    /* 0x64 */ s32 myAid;
};

#endif
