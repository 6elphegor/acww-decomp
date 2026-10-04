#ifndef ROOM_ROOMFREEUNITMAP_H
#define ROOM_ROOMFREEUNITMAP_H

// 16x16 bitmap of free floor units of a room (one u16 per row; RoomFreeUnitMap_Build/_Test/_Set/_Clear at
// 0x02083eb4..). ctor/dtor at 0x0208403c are in src/main/unk_02082d74.cpp.
#include "types.h"

struct RoomFreeUnitMap {
    /* 0x00 */ u16 rows[16];
    RoomFreeUnitMap();
    ~RoomFreeUnitMap();
};

#endif
