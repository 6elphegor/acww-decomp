#ifndef ROOM_ROOMOBJACTOR_H
#define ROOM_ROOMOBJACTOR_H

// Base of the ov004/ov068 room objects (furniture, telephone, ...): a Character with an animated model, its
// resources, texture and sound helpers (vtable 0x0224d4e0, 0x70 bytes). Defined in src/ov004/unk_ov004_0221e7a8.cpp
// (its constructor there is the extern "C" function _ZN12RoomObjActorC2Ev).
#include "types.h"
#include "actor/Character.h"
#include "gfx/AnimModel.h"
#include "room/RoomObjRes.h"
#include "room/RoomObjTex.h"

struct Unk_ov004_02224ee4_Vec;

class RoomObjActor : public Character {
public:
    RoomObjActor();
    virtual ~RoomObjActor();
    virtual BOOL preCreate();
    virtual BOOL preDelete();
    virtual BOOL preExecute();
    virtual BOOL postExecute(u32 a);
    virtual BOOL changeSyncState(u32 v);
    virtual void getSoundPos(Unk_ov004_02224ee4_Vec *out);

    void setSyncSlot(u32 v);
    s32 storeSyncState();
    s32 getSyncState();
    void releaseResources();
    void loadResourcesByName(char *name);
    void loadResources(char *a, char *b);

    /* 0xea */ u8 unk_ea;
    /* 0xeb */ u8 pad_eb;
    /* 0xec */ AnimModel model;
    /* 0x1a4 */ RoomObjRes res;
    /* 0x248 */ RoomObjTex tex;
    /* 0x250 */ RoomObjSe se;
};

#endif // ROOM_ROOMOBJACTOR_H
