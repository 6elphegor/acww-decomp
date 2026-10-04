#ifndef GAME_NOOKSHOP_H
#define GAME_NOOKSHOP_H

#include "types.h"
#include "item/ItemId.h"

// Nook's shop stock object: a vtable word and 0x25 ItemId slots (constructor C1 0x020aec1c builds the slots, then
// NookShop_Clear). Defined in main, unk_020ac750.cpp.
struct NookShop {
    /* 0x00 */ u32 vt;
    /* 0x04 */ ItemId e[0x25];
    NookShop();
};

#endif
