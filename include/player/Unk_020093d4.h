#ifndef PLAYER_UNK_020093D4_H
#define PLAYER_UNK_020093D4_H

#include "types.h"
#include "gfx/VecFx32.h"

// Walk-to action arguments (target position, speeds); initWalkTo is defined in src/main/unk_02004558.cpp.
struct Unk_020093d4 {
    /* 0x00 */ VecFx32Ctor targetPos;
    /* 0x0c */ s32 walkSpeed;
    /* 0x10 */ s32 maxSpeed;
    /* 0x14 */ s32 prevAction;
    void initWalkTo(VecFx32Ctor v, s32 a, s32 b);
};

#endif
