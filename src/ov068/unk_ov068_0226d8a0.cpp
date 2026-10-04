// mwcc-version: 1.2/base
#include "types.h"
#include "actor/Unk_0203e5d0_Node.h"
#include "gfx/Unk_02055704.h"
#include "game/Unk_ov004_02224ee4_Vec.h"
#include "room/Unk_ov004_02224d60_B.h"
#include "gfx/Unk_ov068_022708fc_Color.h"
#include "actor/Unk_ov068_SceneEntry.h"
#include "gfx/AnimFrameCtrl.h"
#include "room/RoomObjRes.h"
#include "gfx/CachedModel.h"
#include "sys/ProcBase.h"
#include "actor/Actor.h"
#include "actor/Character.h"
#include "gfx/AnimModel.h"
// shared_0224d4e8.h.txt -- final declaration of class RoomObjActor (defined in ov004 TU17, 0x0221e7a8-0x02225290).
// Paste this block unchanged into TU18..TU26 (it is the base of 0224d618 (TU18), 0224d80c (TU19), 0224dd98 (TU23),
// 0224def8 (TU24), 0224e034 (TU25), 0224e2b8 (TU26)).  It is what TU17's unit.cpp compiles; vtable symbols in the
// original (0x0224d4e0, 0x70 bytes):
//   slot 00 ProcBase::vfunc_00        04 M::vfunc_04               08 Character::postCreate(s32)
//   0c Base::vfunc_0c   10 M::vfunc_10   14 Actor::vfunc_14   18 Base::vfunc_18   1c M::vfunc_1c
//   20 M::vfunc_20(u32) (symbols.txt calls it func_ov004_022250cc: renames.txt  ov004 022250cc _ZN12RoomObjActor8vfunc_20Ej)
//   24 Base::vfunc_24   28 Actor::preDraw   2c Actor::postDraw   30..3c Base   40 D1  44 D0
//   48..5c Character (vfunc_48/4c/50/54/58/5c)   60 M::changeSyncState(u32)   64 M::getSoundPos(Vec *)
// Notes for derived classes:
//  * M's constructor is the base-object ctor _ZN12RoomObjActorC2Ev (0x02225244, the only ctor in the original);
//    TU17 defines it as an extern "C" function with that name, derived constructors call it as M::M() (C2).
//  * The helper members unk_1a4 (RoomObjRes: real C1/D1 methods), unk_248 (RoomObjTex) and unk_250
//    (RoomObjSe) are driven through plain extern "C" functions func_ov004_02224xxxx(void *self, ...) (their symbols.txt
//    names); the inline member wrappers below call them.  Their destructors are called by M's own destructor bodies
//    (RoomObj_DestructSe / RoomObjTex_Destruct), so RoomObjTex and RoomObjSe have no destructor here.
//  * ProcBase .. Character are an own copy of the library chain (the header GameProc.h names slot 08
//    vfunc_08, the real symbol is Character::postCreate(s32); slot 20 takes a u32).  Do not also include GameProc.h.
//  * Names a derived class must not reuse: unk_ea (u8, 0xff = none), unk_ec (AnimModel), unk_1a4, unk_248, unk_250.
// Layout: M is 0x290 bytes; TalkMsgRequest (secondary base of the derived classes) starts at 0x290.







// ---- model resource sub-object at +0xec (see src/main/unk_02054190.cpp)




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

// ---- helper objects at +0x1a4, +0x248, +0x250 (their other methods live in ov004_054)



class RoomObjActor : public Character {
public:
    RoomObjActor();
    virtual ~RoomObjActor();
    virtual BOOL vfunc_04();
    virtual BOOL preDelete();
    virtual BOOL preExecute();
    virtual BOOL vfunc_20(u32 a);
    virtual BOOL changeSyncState(u32 v);
    virtual void getSoundPos(Unk_ov004_02224ee4_Vec *out);

    void setSyncSlot(u32 v);
    s32 storeSyncState();
    s32 getSyncState();
    void releaseResources();
    void loadResourcesByName(char *name);
    void loadResources(char *a, char *b);

    /* 0xec */ AnimModel model;
    /* 0x1a4 */ RoomObjRes res;
    /* 0x248 */ Unk_ov004_02224d60_B tex;
    /* 0x250 */ RoomObjSe se;
};


struct Unk_ov068_022708fc_Obj {
    u8 pad[0x18];
    u8 numMat;
};



struct RoomObjTex {
    inline RoomObjTex() { RoomObjTex_Construct(this); }
    inline ~RoomObjTex() { RoomObjTex_Destruct(this); }
    u32 texture;
};

extern "C" {
void RoomObj_LoadResourcesByName(char *s, void *a, void *b, void *c);
void RoomObj_ReleaseResources(void *a, void *b);
s32 _ZN12RoomObjActor14storeSyncStateEv(void *self, u32 v);
void func_020e761c(void *dst, s32 v, s32 n);
void NNS_G3dMdlSetMdlAlpha(void *o, u32 i, u32 v);
}

class RoostCafeSet : public RoomObjActor {
public:
    RoostCafeSet();
    virtual ~RoostCafeSet();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL onExecute();
    virtual BOOL onDraw();
    virtual BOOL changeSyncState(u32 v);

    void execShown();
    BOOL enterShown();
    void execHidden();
    BOOL enterHidden();
    void updateFadeState();

    /* 0x290 */ s32 alpha;
    /* 0x294 */ s32 targetAlpha;
    /* 0x298 */ u8 chrLoaded;
    /* 0x299 */ u8 pad_299[3];
    /* 0x29c */ AnimModel chrModel;
    /* 0x354 */ RoomObjRes chrRes;
    /* 0x3f8 */ RoomObjTex chrTex;
};

// colour constants (sinit store order = definition order), the registration entry, the instance pointer
extern "C" Unk_ov068_022708fc_Color data_ov068_02271268(0x1f, 0x14, 0x14, 0x1f);
extern "C" Unk_ov068_022708fc_Color data_ov068_02271264(0x14, 0x14, 0x1f, 0x1f);
extern "C" Unk_ov068_022708fc_Color data_ov068_02271254(0x1f, 0x1f, 0x14, 0x1f);
extern "C" Unk_ov068_022708fc_Color data_ov068_0227126c(0x14, 0x1f, 0x14, 0x1f);
extern "C" Unk_ov068_022708fc_Color data_ov068_02271258(0x14, 0x1f, 0x1f, 0x1f);
extern "C" Unk_ov068_022708fc_Color data_ov068_0227125c(0x14, 0x18, 0x18, 0x1f);
extern "C" RoostCafeSet *RoostCafeSet_Create();
extern "C" Unk_ov068_Scene_Entry sRoostCafeSetProfile = {(void *(*)())RoostCafeSet_Create, 0x10, 0x12, 0, 0xc8000, 0x12c000, 0x258000};
extern "C" {
RoostCafeSet *sRoostCafeSet;
}

extern "C" RoostCafeSet *RoostCafeSet_Create() {
    return new RoostCafeSet();
}

RoostCafeSet::RoostCafeSet() {
    sRoostCafeSet = NULL;
}

RoostCafeSet::~RoostCafeSet() {}

BOOL RoostCafeSet::vfunc_00() {
    sRoostCafeSet = this;
    setSyncSlot(1);
    loadResourcesByName("obj_ms_cafe");
    alpha = targetAlpha = 1;
    RoomObj_LoadResourcesByName("obj_cf_chr", &chrModel, &chrRes, &chrTex);
    changeSyncState(1);
    chrLoaded = 1;
    return TRUE;
}

BOOL RoostCafeSet::onExecute() {
    updateFadeState();
    if (alpha != targetAlpha) {
        func_020e761c(&alpha, targetAlpha, 2);
    }
    u32 n = (*(Unk_ov068_022708fc_Obj **)((u8 *)this + 0x148))->numMat;
    for (u32 i = 0; i < n; i++) {
        NNS_G3dMdlSetMdlAlpha(*(Unk_ov068_022708fc_Obj **)((u8 *)this + 0x148), i, (u8)alpha);
    }
    return TRUE;
}

BOOL RoostCafeSet::onDraw() {
    model.drawAnimated(0);
    if (chrLoaded != 0) {
        chrModel.drawAnimated(0);
    }
    return TRUE;
}

BOOL RoostCafeSet::vfunc_0c() {
    releaseResources();
    if (chrLoaded != 0) {
        RoomObj_ReleaseResources(&chrRes, &chrTex);
    }
    sRoostCafeSet = NULL;
    return TRUE;
}

BOOL RoostCafeSet::changeSyncState(u32 v) {
    static BOOL (RoostCafeSet::*tbl[2])() = {
        &RoostCafeSet::enterHidden,
        &RoostCafeSet::enterShown,
    };
    if (v < 2) {
        if ((this->*tbl[v])()) {
            if (_ZN12RoomObjActor14storeSyncStateEv(this, v)) {
                tex.syncState = v;
                return TRUE;
            }
        }
    }
    return FALSE;
}

void RoostCafeSet::updateFadeState() {
    static void (RoostCafeSet::*tbl[2])() = {
        &RoostCafeSet::execHidden,
        &RoostCafeSet::execShown,
    };
    if (tex.syncState < 2) {
        (this->*tbl[tex.syncState])();
    }
}

BOOL RoostCafeSet::enterHidden() {
    targetAlpha = 1;
    return TRUE;
}

void RoostCafeSet::execHidden() {
    targetAlpha = 1;
}

BOOL RoostCafeSet::enterShown() {
    targetAlpha = 0x1f;
    return TRUE;
}

void RoostCafeSet::execShown() {
    targetAlpha = 0x1f;
}
