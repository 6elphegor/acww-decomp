#ifndef ITEM_ITEMPICKSPEC_H
#define ITEM_ITEMPICKSPEC_H

// Item-pick request (item list + item class) passed to ItemPick_One. Methods at 0x02063380.. (src/main/unk_0206269c.cpp);
// set() and ItemPickSpec(s32, s32) share one symbol, ~ItemPickSpec is ItemPickSpec_Destruct.
#include "types.h"

struct ItemPickSpec {
    ItemPickSpec() {}
    ItemPickSpec(s32 a, s32 b);
    ItemPickSpec(const ItemPickSpec &o) { listIndex = o.listIndex; itemClass = o.itemClass; }
    ~ItemPickSpec();
    s32 getClass();
    s32 getList();
    void set(s32 a, s32 b);

    /* 0x0 */ s32 listIndex;
    /* 0x4 */ s32 itemClass;
};

#endif
