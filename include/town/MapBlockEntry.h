#ifndef TOWN_MAPBLOCKENTRY_H
#define TOWN_MAPBLOCKENTRY_H

#include "types.h"

// 0x10-byte map block entry (acre id, two layer words, buried flag). Constructor in main, unk_0204cc1c.cpp.
struct MapBlockEntry {
    /* 0x00 */ u32 acreId;
    /* 0x04 */ u32 layers[2];
    /* 0x0c */ u32 buried;
    MapBlockEntry();
};

#endif
