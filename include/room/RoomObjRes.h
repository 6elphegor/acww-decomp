#ifndef ROOM_ROOMOBJRES_H
#define ROOM_ROOMOBJRES_H

// Resource helpers of the ov004 room objects (RoomObjActor +0x1a4 / +0x248 / +0x250). RoomObjRes ctor/dtor/clear are
// at 0x02224ee4.. (src/ov004/unk_ov004_0221e7a8.cpp); the other methods are plain functions taking the object first
// (0x02224ca4..), wrapped inline here. RoomObjSe has no destructor: its owner calls RoomObj_DestructSe by hand.
// RoomObjTex (+0x248) is in room/RoomObjTex.h.
#include "types.h"
#include "gfx/VecFx32.h"


extern "C" {
s32 RoomObjRes_GetBca(void *self, u32 i);
void RoomObjRes_Free(void *self);
void RoomObjRes_Load(void *self, const char *s);
void *RoomObjRes_GetModel(void *self);
void RoomObjTex_Construct(void *self);
void RoomObjTex_Destruct(void *self);
void RoomObjTex_Reset(void *self);
void RoomObjTex_Load(void *self, const char *s);
u32 RoomObjTex_Get(void *self);
void RoomObj_ConstructSe(void *self);
void RoomObj_DestructSe(void *self);
void RoomObj_PlaySe(void *self, s32 v);
void RoomObj_DeactivateSe(void *self);
void RoomObj_SetSePos(void *self, void *v);
void RoomObj_ActivateSe(void *self);
}

class RoomObjRes {
public:
    RoomObjRes();
    ~RoomObjRes();
    void clear();
    inline s32 RoomObjRes_GetBca(u32 i) { return ::RoomObjRes_GetBca(this, i); }
    inline void RoomObjRes_Free() { ::RoomObjRes_Free(this); }
    inline void RoomObjRes_Load(const char *s) { ::RoomObjRes_Load(this, s); }
    inline void *RoomObjRes_GetModel() { return ::RoomObjRes_GetModel(this); }

    /* 0x00 */ u32 archive;
    /* 0x04 */ u32 model;
    /* 0x08 */ u32 bcas[13];
    /* 0x3c */ u32 bmas[13];
    /* 0x70 */ u32 btas[13];
};

class RoomObjSe {
public:
    inline RoomObjSe() { RoomObj_ConstructSe(this); }
    inline void RoomObj_PlaySe(s32 v) { ::RoomObj_PlaySe(this, v); }
    inline void RoomObj_DeactivateSe() { ::RoomObj_DeactivateSe(this); }
    inline void RoomObj_SetSePos(VecFx32 *v) { ::RoomObj_SetSePos(this, v); }
    inline void RoomObj_ActivateSe() { ::RoomObj_ActivateSe(this); }

    /* 0x00 */ u32 emitter[0x10];
};

#endif
