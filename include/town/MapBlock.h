#ifndef TOWN_MAPBLOCK_H
#define TOWN_MAPBLOCK_H

#include "types.h"
#include "uptr.h"
#include "gfx/VecFx32.h"

class BgAcreModel;

// A block (acre) of the scene's block map (0x28 bytes on the DS): its acre, grid position, BG model and buried-item
// mask. Methods in src/main/unk_02037358.cpp. TownBlockCell (town/TownBlockCell.h) is an older view of the same
// object. layers[] are the two item layers' addresses (u16 [16 * 16]) still kept as integers, as the callers of
// MapBlock_Init (src/main/unk_0204cc1c.cpp) pass them.
class MapBlock {
public:
    void clear();
    void bindBg(BgAcreModel *s, u32 t, u32 u);
    void init(s32 a, VecFx32 *v, s32 b, s32 k0, s32 k1, BgAcreModel *k2, u32 k3, s32 k4, s32 k5, u32 k6);

    s32 acreId;
    s32 blockX;
    s32 blockZ;
    VecFx32 pos;
    s32 layers[2];
    BgAcreModel *bgModel;
    uptr buried;  // the buried-item mask (u16 *: TownBlockCell::buriedFlags)
};

// The acre id at the start of a MapBlock, seen on its own (MapBlockAcre::getUnk04 is the address of MapBlock::blockX).
class MapBlockAcre {
public:
    s32 hasPond();
    u32 getAcreId();
    void setAcreId(u32 v);
    u8 *getUnk04();
    u32 acreId;
};

#endif
