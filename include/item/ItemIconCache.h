#ifndef ITEM_ITEMICONCACHE_H
#define ITEM_ITEMICONCACHE_H

#include "types.h"

// Cache of one page of item icon characters (vtable 0x02294a40 in ov094). Methods defined in
// src/ov094/unk_ov094_02292da8.cpp; also the base of an ov114 class.

struct ItemIconCache {
    /* 0x000 */ u8 iconChars[0x800];
    /* 0x800 */ u8 loadedPage;

    ItemIconCache();
    virtual ~ItemIconCache();
    u8 *getPresentChars(s32 idx);
    u8 *getIconChars(s32 idx);
    void invalidate();
};

#endif
