#ifndef ROOM_FTRSTACKLINK_H
#define ROOM_FTRSTACKLINK_H

#include "types.h"
#include "room/FtrActorParts.h"

// Link of a furniture object stacked on another one: parent index, relative angle and position (0x02205e20).
// Members defined in src/ov004/unk_ov004_02204f24.cpp.
struct FtrStackLink {
    ~FtrStackLink();
    BOOL attachAt(s32 x, s32 y, s16 z);
    BOOL set(s32 idx, Unk_ov004_02205d8c_Vec *pos, s32 ang);
    s32 getRelAngle();
    Unk_ov004_02205d8c_Vec *getRelPos();
    s32 getParentIndex();
    BOOL isAttached();
    void clear();
    /* 0x00 */ s16 parentIndex;
    /* 0x02 */ s16 relAngle;
    /* 0x04 */ Unk_ov004_02205d8c_Vec relPos;
};

#endif // ROOM_FTRSTACKLINK_H
