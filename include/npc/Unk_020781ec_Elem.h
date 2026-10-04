#ifndef NPC_UNK_020781EC_ELEM_H
#define NPC_UNK_020781EC_ELEM_H

#include "types.h"

// Per-villager comm element, 0x2c bytes (src/main/unk_020742f4.cpp, unk_02077ac4.cpp).

struct Unk_020781ec_Elem {
    /* 0x00 */ u8 pad_00[0x1d];
    /* 0x1d */ u8 flags;
    /* 0x1e */ u8 pad_1e[0x2c - 0x1e];
};

#endif // NPC_UNK_020781EC_ELEM_H
