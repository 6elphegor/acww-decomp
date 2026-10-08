#ifndef TOWN_TOWNBLOCKCELL_H
#define TOWN_TOWNBLOCKCELL_H

// A cell of the town block map grid (TownBlockMap_Get): the MapBlock (town/MapBlock.h), under the name its older
// users (ov003 / ov004 / ov117, itcm unk_01ffcb2c) give it.
#include "types.h"
#include "town/MapBlock.h"

typedef MapBlock TownBlockCell;

// a cell's size (0x28 on the DS)
#define MAPBLOCK_SIZE sizeof(MapBlock)

#endif
