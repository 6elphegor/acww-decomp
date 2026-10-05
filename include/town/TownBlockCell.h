#ifndef TOWN_TOWNBLOCKCELL_H
#define TOWN_TOWNBLOCKCELL_H

// 0x28-byte cell of the town block map grid (TownBlockMap_Get; src/itcm/unk_01ffcb2c.cpp reads the u16 row table at
// 0x24, src/main/unk_020af514.cpp walks the cells for MapBlock_GetItemPtr). View of the TU-local class MapBlock
// (src/main/unk_02037358.cpp): bgModel at 0x20 is MapBlock::bgModel (the ov004 RoomShell reads the room model from it).
#include "types.h"

struct BgAcreModel;

struct TownBlockCell {
    /* 0x00 */ u8 pad_00[0x20];
    /* 0x20 */ BgAcreModel *bgModel;
    /* 0x24 */ u16 *buriedFlags;
};

#endif
