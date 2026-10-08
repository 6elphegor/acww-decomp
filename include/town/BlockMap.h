#ifndef TOWN_BLOCKMAP_H
#define TOWN_BLOCKMAP_H

#include "types.h"
#include "town/MapBlockEntry.h"

class MapBlock;

// A block map's size in blocks (BlockMap::build).
struct BlockMapSize {
    s32 v[2];
};

// The scene's block map (gSceneBlockMap): the MapBlock grid (blocks, width x height), its size in units and the BG
// map slot; the structures placed on it. Methods in src/main/unk_0204cc1c.cpp, with the BlockMap_* functions.
// TownBlockMap (town/TownBlockMap.h), Unk_0204e858_Grid and Unk_0204da0c_Map are older views of the same object.
class BlockMap {
public:
    MapBlock *blocks;  // MapBlock[width * height]
    s32 width;
    s32 height;
    s32 unitsX;
    s32 unitsZ;
    s32 worldWidth;
    s32 worldHeight;
    s32 mapSlot;

    BOOL build(MapBlockEntry *e, BlockMapSize *sz, void *heap);
    void free(void *heap);
    void clear();
    s32 clearPlantFlag(s32 a, s32 b);
    s32 getWalkLinksAtPos(void *a); // a: VecFx32 *
    s32 getWalkLinks(s32 a, s32 b);
    s32 getPlantFlag(s32 a, s32 b);
    s32 getDigKind(s32 a, s32 b);
    s32 isShore(s32 a, s32 b);
    s32 isGrassSurface(s32 a, s32 b);
    s32 isWalkable(s32 a, s32 b);
    s32 canPlaceItemAtBlockUnit(s32 a, s32 b, s32 c, s32 d);
    s32 canPlaceItem(s32 a, s32 b);
    BOOL placeStructure(u16 *a, s32 x, s32 y, u8 flag);
    BOOL putStructure(u16 *a, s32 x, s32 y);
    BOOL removeStructure(s32 x, s32 y, u16 *p);
    BOOL replaceStructure(u16 *a, u16 *b, u16 *c, s32 x, s32 y);
};

#endif
