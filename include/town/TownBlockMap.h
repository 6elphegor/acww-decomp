#ifndef TOWN_TOWNBLOCKMAP_H
#define TOWN_TOWNBLOCKMAP_H

#include "types.h"

// 0x20-byte town block map (block array, dimensions, BG map slot). Defined in main, unk_0204cc1c.cpp.
struct TownBlockMap {
    /* 0x00 */ u8 *blocks;
    /* 0x04 */ s32 width;
    /* 0x08 */ s32 height;
    /* 0x0c */ s32 unitsX;
    /* 0x10 */ s32 unitsZ;
    /* 0x14 */ s32 worldWidth;
    /* 0x18 */ s32 worldHeight;
    /* 0x1c */ s32 mapSlot;
    u32 releaseBg();
    void bindBg();
    void updateAcreIds();
    void freeBlocks(void *heap);
    BOOL build(void *heap);
    void clear();
};

#endif
