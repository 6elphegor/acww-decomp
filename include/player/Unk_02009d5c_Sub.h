#ifndef PLAYER_UNK_02009D5C_SUB_H
#define PLAYER_UNK_02009D5C_SUB_H

#include "types.h"

// Player action request arguments (kind, next mode, variant, partner)
// (src/main/unk_02004558.cpp; also used by src/main/unk_02004558_extra.cpp).

struct Unk_02009d5c_Sub {
    /* 0x0 */ u32 kind;
    /* 0x4 */ u8 nextMode;
    /* 0x8 */ u32 variant;
    /* 0xc */ u32 partner;
};

#endif
