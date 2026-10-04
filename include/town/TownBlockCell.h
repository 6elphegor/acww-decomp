#ifndef TOWN_TOWNBLOCKCELL_H
#define TOWN_TOWNBLOCKCELL_H

// 0x28-byte cell of the town block map grid (TownBlockMap_Get; src/itcm/unk_01ffcb2c.cpp reads the u16 row table at
// 0x24, src/main/unk_020af514.cpp walks the cells for MapBlock_GetItemPtr).
#include "types.h"

struct Cell {
    /* 0x00 */ u8 pad_00[0x24];
    /* 0x24 */ u16 *unk_24;
};

#endif
