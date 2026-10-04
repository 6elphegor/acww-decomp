#ifndef ROOM_FTRSTACKEDSET_H
#define ROOM_FTRSTACKEDSET_H

#include "types.h"

struct FtrTileList;
class FtrActor;

// Set of up to 4 neighbouring furniture objects collected from a tile list.
// Members defined in src/ov004/unk_ov004_02204f24.cpp (0x02206434-0x02206520).
struct FtrStackedSet {
    FtrStackedSet();
    FtrStackedSet(FtrTileList *l, s32 flag);
    BOOL add(FtrActor *o);
    FtrActor *get(u32 i);
    u32 getCount();
    void collect(FtrTileList *l, s32 flag);
    void clear();

    /* 0x00 */ u32 count;
    /* 0x04 */ FtrActor *actors[4];
};

#endif // ROOM_FTRSTACKEDSET_H
