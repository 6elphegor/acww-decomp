#ifndef PLAYER_PLAYERACT30ARGS_H
#define PLAYER_PLAYERACT30ARGS_H

#include "types.h"

// Player action request arguments (kind, next mode, variant, partner)
// (src/main/unk_02004558.cpp; also used by src/main/unk_02004558_extra.cpp).

struct PlayerAct30Args {
    /* 0x0 */ u32 kind;
    /* 0x4 */ u8 nextMode;
    /* 0x8 */ u32 variant;
    /* 0xc */ u32 partner;
};

#endif
