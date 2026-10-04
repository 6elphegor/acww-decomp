#ifndef ITEM_SHOPPURCHASEBITS_H
#define ITEM_SHOPPURCHASEBITS_H

// Packed shop purchase record word read by Shop_OnPurchaseRecord (src/main/unk_020ac750.cpp; also declared in
// unk_020abea8.cpp): a = item slot (6 bits), b = 19-bit value, c = flag, d = shop scene id.
#include "types.h"

struct Bits {
    u32 a : 6;
    u32 b : 19;
    u32 c : 1;
    u32 d : 6;
};

#endif
