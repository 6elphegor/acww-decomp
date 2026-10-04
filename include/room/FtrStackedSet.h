#ifndef ROOM_FTRSTACKEDSET_H
#define ROOM_FTRSTACKEDSET_H

#include "types.h"

struct FtrTileList;
struct Unk_ov004_02205c80_Obj;

// Set of up to 4 neighbouring furniture objects collected from a tile list.
// Members defined in src/ov004/unk_ov004_02204f24.cpp (0x02206434-0x0220650a).
struct FtrStackedSet {
    FtrStackedSet();
    FtrStackedSet(FtrTileList *l, s32 flag);
    BOOL add(Unk_ov004_02205c80_Obj *o);
    Unk_ov004_02205c80_Obj *get(u32 i);
    u32 getCount();
    void collect(FtrTileList *l, s32 flag);

    /* 0x00 */ u32 count;
    /* 0x04 */ Unk_ov004_02205c80_Obj *actors[4];
};

#endif // ROOM_FTRSTACKEDSET_H
