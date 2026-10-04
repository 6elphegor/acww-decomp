#ifndef PLAYER_UNK_02007EBC_VEC_H
#define PLAYER_UNK_02007EBC_VEC_H

#include "types.h"

// Fixed-point position used by the player actor's curved-world conversion
// (src/main/unk_02004558.cpp; also used by src/main/unk_02004558_extra.cpp).

struct Unk_02007ebc_Vec {
    /* 0x0 */ s32 x;
    /* 0x4 */ s32 y;
    /* 0x8 */ s32 z;
};

#endif
