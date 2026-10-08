#ifndef MENU_INVENTORYITEMGRID_H
#define MENU_INVENTORYITEMGRID_H

#include "types.h"
#include "item/ItemIconCache.h"
#include "gfx/BgVramTask.h"

// Staging copy of one 16x16 item icon for a BG VRAM upload: the top and the bottom 8-pixel character rows (0x40 bytes
// each, copied from the icon's character data at +0 and +0x400 by InventoryItemGrid_UploadIcon).
struct ItemIconUploadChars {
    /* 0x00 */ u8 top[0x40];
    /* 0x40 */ u8 bottom[0x40];
};

// 0xa60-byte item grid of the inventory-style menus (ov094 code, members of the ov096..ov110 menus).
// Defined in src/ov094/unk_ov094_02292da8.cpp (the InventoryItemGrid_* functions).
struct InventoryItemGrid {
    InventoryItemGrid();
    virtual ~InventoryItemGrid();

    /* 0x004 */ ItemIconUploadChars iconUploadChars[3];
    /* 0x184 */ ItemIconCache iconCache;
    /* 0x98c */ BgVramTaskPair iconUploadTasks[3];
    /* 0xa34 */ u16 *boxItems;
    /* 0xa38 */ u32 occupiedBits[2];  // slot bit sets (0x23 slots)
    /* 0xa40 */ u32 markedBits[2];
    /* 0xa48 */ u32 disabledBits[2];
    /* 0xa50 */ u32 objPriority;
    /* 0xa54 */ u16 presentItem;
    /* 0xa56 */ u8 cursorSlot;
    /* 0xa57 */ u8 cursorLiftTimer;
    /* 0xa58 */ u8 numIconUploads;
    /* 0xa59 */ u8 heldScale;
    /* 0xa5a */ u8 presentAnimStep;
    /* 0xa5b */ u8 presentVariant;
    /* 0xa5c */ u8 showHeldFocus;
};

#endif
