#ifndef TOWN_BLOCKMAP_H
#define TOWN_BLOCKMAP_H

#include "types.h"

struct MapBlockEntry;
struct BlockMapSize;

// The scene's block map (gSceneBlockMap): the block array, its dimensions in blocks, units and world coordinates, the
// BG map slot. Methods defined in src/main/unk_0204cc1c.cpp (which still has its own copy of this class: to be
// replaced by this header; src/main/unk_020119cc.cpp, unk_02077ac4.cpp and include/town/TownBlockMap.h are partial
// views of the same object).
class BlockMap {
public:
    void *blocks;
    s32 width;
    s32 height;
    s32 unitsX;
    s32 unitsZ;
    s32 worldWidth;
    s32 worldHeight;
    s32 mapSlot;

    BOOL build(MapBlockEntry *e, BlockMapSize *sz, s32 heap);
    void free(s32 heap);
    void clear();
    s32 clearPlantFlag(s32 a, s32 b);
    s32 getWalkLinksAtPos(void *a);
    s32 getWalkLinks(s32 a, s32 b);
    s32 getPlantFlag(s32 a, s32 b);
    s32 getDigKind(s32 a, s32 b);
    s32 isShore(s32 a, s32 b);
    s32 isGrassSurface(s32 a, s32 b);
    s32 isWalkable(s32 a, s32 b);
    s32 canPlaceItemAtBlockUnit(s32 a, s32 b, s32 c, s32 d);
    s32 canPlaceItem(s32 a, s32 b);
};

#endif
