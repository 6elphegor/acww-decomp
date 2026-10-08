#ifndef TOWN_MAPBLOCKACRE_H
#define TOWN_MAPBLOCKACRE_H

#include "types.h"

// The acre part of a town block map cell (TownBlockCell / MapBlock: the acre id at 0). Methods in
// src/main/unk_02037358.cpp (which still declares the class itself: switch it to this header).
class MapBlockAcre {
public:
    s32 hasPond();
    u32 getAcreId();
    void setAcreId(u32 v);
    u8 *getUnk04();
    u32 acreId;
};

#endif
