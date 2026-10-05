#ifndef ROOM_ROOMOBJTEXAUTO_H
#define ROOM_ROOMOBJTEXAUTO_H

#include "types.h"
#include "room/RoomObjRes.h"

// 4-byte room-object texture slot with an inline destructor, used by the ov068 taxi units (TaxiInterior driver/wheel
// textures, the taxi character texture). Same storage and calls as room/RoomObjTex.h, whose ov004 owners destroy it by
// hand instead (RoomObjTex has no destructor); the link-once D1 is emitted by each using unit.
struct RoomObjTexAuto {
    inline RoomObjTexAuto() { RoomObjTex_Construct(this); }
    inline ~RoomObjTexAuto() { RoomObjTex_Destruct(this); }
    /* 0x0 */ u32 texture;
};

#endif
