#ifndef ITEM_ITEMID_H
#define ITEM_ITEMID_H

// 2-byte item id. The default constructor (0x0203442c, stores 0xfff1 = no item) and the destructor (0x02004b60) are
// out of line; ItemId(u16) is inline. The defining TU src/main/unk_02034048.cpp and src/main/unk_0204a780.cpp
// (ItemId(u32) = Item_SetId, ItemId(u16 *) = Item_FromPlacedForm) keep their own views.
#include "types.h"

struct ItemId {
    /* 0x0 */ u16 id;

    ItemId();
    ItemId(u16 x) { id = x; }
    ~ItemId();
};

#endif
