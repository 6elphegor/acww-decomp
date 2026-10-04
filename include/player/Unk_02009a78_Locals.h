#ifndef PLAYER_UNK_02009A78_LOCALS_H
#define PLAYER_UNK_02009A78_LOCALS_H

#include "types.h"

// Position vector and its locals bundle used by the player walk/approach code
// (src/main/unk_02004558.cpp; also used by src/main/unk_02004558_extra.cpp).

struct Unk_02009a78_Vec {
    /* 0x0 */ s32 x;
    /* 0x4 */ s32 y;
    /* 0x8 */ s32 z;
};

struct Unk_02009a78_Locals {
    /* 0x00 */ Unk_02009a78_Vec cur;
    /* 0x0c */ Unk_02009a78_Vec pos;
    /* 0x18 */ Unk_02009a78_Vec diff;
};

#endif
