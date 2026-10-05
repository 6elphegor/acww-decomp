#ifndef ROOM_ROOMOBJTEX_H
#define ROOM_ROOMOBJTEX_H

// Texture helper of the ov004 room objects (RoomObjActor +0x248); its methods are the plain functions
// RoomObjTex_* (0x02224d04..) declared in room/RoomObjRes.h. No destructor: the owner calls RoomObjTex_Destruct by
// hand (the ov068 taxi TUs use their own 4-byte RoomObjTexAuto, whose inline destructor does it implicitly).
#include "room/RoomObjRes.h"

class RoomObjTex {
public:
    inline RoomObjTex() { RoomObjTex_Construct(this); }
    inline void RoomObjTex_Reset() { ::RoomObjTex_Reset(this); }
    inline void RoomObjTex_Load(const char *s) { ::RoomObjTex_Load(this, s); }
    inline u32 RoomObjTex_Get() { return ::RoomObjTex_Get(this); }

    /* 0x0 */ u32 texture;
    /* 0x4 */ u8 syncState;
};

#endif
