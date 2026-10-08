#ifndef FIELD_ITEMDROPUNIT_H
#define FIELD_ITEMDROPUNIT_H

#include "types.h"

// The unit (x, z) an item drop lands on (ItemDrop_StartToUnit, ItemDropList_Add). Defined in
// src/ov004/unk_ov004_0222bed0.cpp (which still keeps its own copy of the struct: switch it to this header).
struct Unk_ov004_0222bf34_P2 {
    s32 a, b;
    Unk_ov004_0222bf34_P2() {}
    Unk_ov004_0222bf34_P2(s32 x, s32 y) {
        a = x;
        b = y;
    }
    Unk_ov004_0222bf34_P2(const Unk_ov004_0222bf34_P2 &o) {
        a = o.a;
        b = o.b;
    }
};

#endif
