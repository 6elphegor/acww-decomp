#ifndef TOWN_MAPBLOCKENTRY_H
#define TOWN_MAPBLOCKENTRY_H

#include "types.h"

// Map block entry (0x10 bytes on the DS): a block's acre id, its two item layers (16x16 items each) and its
// buried-item mask, from which MapBlock::init sets the block up. Constructor in main, unk_0204cc1c.cpp.
struct MapBlockEntry {
    /* 0x00 */ u32 acreId;
    /* 0x04 */ u16 *layers[2];
    /* 0x0c */ u16 *buried;
#ifdef __cplusplus
    MapBlockEntry();
#endif
};
#ifndef __cplusplus
typedef struct MapBlockEntry MapBlockEntry;
#endif

#endif
