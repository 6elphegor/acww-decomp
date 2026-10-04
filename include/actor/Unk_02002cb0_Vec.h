#ifndef ACTOR_UNK_02002CB0_VEC_H
#define ACTOR_UNK_02002CB0_VEC_H

#include "types.h"

// Collider push record passed to Actor::applyVelocity / Actor::updatePosition (push offsets at 0x10 and 0x18).
// Read in src/main/unk_02002b1c.cpp; ov004 passes an actor's hitBox as one.

struct Unk_02002cb0_Vec {
    /* 0x00 */ u8 unk_00[0x10];
    /* 0x10 */ s32 pushX;
    /* 0x14 */ s32 unk_14;
    /* 0x18 */ s32 pushZ;
};

#endif
