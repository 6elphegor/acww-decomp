#ifndef PLAYER_UNK_02009A78_LOCALS_H
#define PLAYER_UNK_02009A78_LOCALS_H

#include "types.h"
#include "gfx/VecFx32.h"

// Position vector and its locals bundle used by the player walk/approach code
// (src/main/unk_02004558.cpp; also used by src/main/unk_02004558_extra.cpp).

struct Unk_02009a78_Locals {
    /* 0x00 */ VecFx32 cur;
    /* 0x0c */ VecFx32 pos;
    /* 0x18 */ VecFx32 diff;
};

#endif
