#ifndef TOWN_MAPBLOCK_H
#define TOWN_MAPBLOCK_H

#include "types.h"
#include "uptr.h"
#include "gfx/VecFx32.h"
#include "town/MapBlockAcre.h"

class BgAcreModel;

// A block (acre) of the scene's block map (0x28 bytes on the DS): its acre, grid position, BG model and buried-item
// mask. Methods in src/main/unk_02037358.cpp. TownBlockCell (town/TownBlockCell.h) is another name of it.
class MapBlock {
public:
    void clear();
    void bindBg(BgAcreModel *s, void *bcl, u32 mapSlot);
    void init(s32 a, VecFx32 *v, u16 *layer0, u16 *layer1, u16 *buriedMask, BgAcreModel *k2, void *bcl, s32 k4, s32 k5,
              u32 mapSlot);

    s32 acreId;
    s32 blockX;
    s32 blockZ;
    VecFx32 pos;
    u16 *layers[2];  // the two item layers (u16 [16 * 16] each)
    BgAcreModel *bgModel;
    u16 *buried;  // the buried-item mask (a u16 row per unit line)
};

// The acre id at the start of a MapBlock, seen on its own (MapBlockAcre::getUnk04 is the address of MapBlock::blockX):
// town/MapBlockAcre.h.

#endif
