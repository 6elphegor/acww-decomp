#ifndef ROOM_FTRACTORGRID_H
#define ROOM_FTRACTORGRID_H

#include "types.h"

class FtrActor;

// Room furniture grid: the furniture actor index of each unit cell, two layers of 16x16 (FtrActorGrid_GetInstance).
// Methods defined in src/ov004/unk_ov004_02233074.cpp (which still has its own copy of this class: to be replaced by
// this header).
class FtrActorGrid {
public:
    u8 cells[2][16][16];
    FtrActorGrid();
    ~FtrActorGrid();
    FtrActor *getActorAtPos(void *p, s32 layer);
    FtrActor *getActor(s32 x, s32 y, s32 layer);
    s32 getIndex(s32 x, s32 y, s32 layer);
    BOOL clearCell(s32 id, s32 x, s32 y, u8 layer);
    BOOL setCell(s32 id, s32 x, s32 y, u8 layer);
    void clear();
};

#endif
