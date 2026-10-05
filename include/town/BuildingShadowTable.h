#ifndef TOWN_BUILDINGSHADOWTABLE_H
#define TOWN_BUILDINGSHADOWTABLE_H

#include "types.h"
#include "town/Unk_ov009_0225b880.h"

// Variable-length shadow-shape table of a building model (count + entries), see BuildingResources::shadowTable.
// Defined in ov009, unk_ov009_0225b880.cpp (getEntry 0x0225cd48, getCount 0x0225cd54) and its _switch twin.
struct BuildingShadowTable {
    BuildingShadowEntry *getEntry(u32 i);
    u32 getCount();

    /* 0x00 */ u32 count;
    /* 0x04 */ BuildingShadowEntry entries[1];
};

#endif
