#ifndef PLAYER_PLAYERWALKTOARGS_H
#define PLAYER_PLAYERWALKTOARGS_H

#include "types.h"
#include "gfx/VecFx32.h"

// Walk-to request arguments (target position, max speed); setWalkToArgs is defined in src/main/unk_02004558.cpp
// (also used by src/main/unk_02004558_extra.cpp).

struct PlayerWalkToArgs {
    /* 0x00 */ VecFx32Ctor targetPos;
    /* 0x0c */ s32 maxSpeed;
    void setWalkToArgs(VecFx32Ctor v, s32 a);
};

#endif
