#ifndef ROOM_FTRACTORGRID_H
#define ROOM_FTRACTORGRID_H

#include "types.h"

class FtrActor;

// The furniture actors of a room by unit (two layers of 16 x 16 actor indices; FtrActorGrid_GetInstance). Defined in
// src/ov004/unk_ov004_02233074.cpp (which still keeps its own copy of the class: switch it to this header).
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
