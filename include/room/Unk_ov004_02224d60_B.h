#ifndef ROOM_UNK_OV004_02224D60_B_H
#define ROOM_UNK_OV004_02224D60_B_H

#include "types.h"

// Room-object texture slot (the RoomObjTex helper of ov004, constructor RoomObjTex_Construct 0x02224d60),
// as used by the ov068 room objects. Its functions are C entry points in ov004.
extern "C" {
void RoomObjTex_Construct(void *self);
void RoomObjTex_Reset(void *self);
void RoomObjTex_Load(void *self, const char *s);
u32 RoomObjTex_Get(void *self);
}

class Unk_ov004_02224d60_B {
public:
    inline Unk_ov004_02224d60_B() { RoomObjTex_Construct(this); }
    inline void RoomObjTex_Reset() { ::RoomObjTex_Reset(this); }
    inline void RoomObjTex_Load(const char *s) { ::RoomObjTex_Load(this, s); }
    inline u32 RoomObjTex_Get() { return ::RoomObjTex_Get(this); }

    /* 0x00 */ u32 texture;
    /* 0x04 */ u8 syncState;
};

#endif
