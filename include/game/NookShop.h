#ifndef GAME_NOOKSHOP_H
#define GAME_NOOKSHOP_H

#include "types.h"
#include "item/ItemId.h"

// Nook's shop state (constructor C1 0x020aec1c builds the stock slots, then NookShop_Clear): sales total, 0x25 ItemId
// stock slots, flags and a packed bitfield at 0x5a. Defined in main, unk_020ac750.cpp.
struct Bits5a {
    u16 saleHour : 5;
    u16 paintCounter : 4;
    u16 level : 2;
    u16 unk_0b : 5;
};

struct NookShop {
    /* 0x00 */ u32 sales;
    /* 0x04 */ ItemId e[0x25];
    /* 0x4e */ u8 pad_4e[0x51 - 0x4e];
    /* 0x51 */ u8 stockStale;
    /* 0x52 */ u8 pad_52[0x59 - 0x52];
    /* 0x59 */ u8 renovationScheduled;
    /* 0x5a */ Bits5a packedState;
    NookShop();
};

#endif
