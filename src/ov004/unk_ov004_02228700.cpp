#include "uptr.h"
#include "gfx/MatTexVramTask.h"
#include "gfx/ModelAnim.h"
#include "item/DateSeededRandomSource.h"
// mwcc-version: 1.2/base
#include "types.h"
#include "actor/ActorProfile.h"
#include "actor/CharacterListNode.h"
#include "gfx/Mtx43.h"
#include "gfx/AnimFrameCtrl.h"
#include "room/RoomObjRes.h"
#include "room/RoomObjTex.h"
#include "gfx/CachedModel.h"
#include "sys/ProcBase.h"
#include "actor/Actor.h"
#include "actor/Character.h"
#include "gfx/AnimModel.h"
#include "room/RoomObjActor.h"
#include "gfx/Model.h"
#include "gfx/TwoLayerAnimModel.h"
#include "item/ItemPickSpec.h"
#define PROTO_LOCAL_ItemPick_One  // declared below: the shared prototype conflicts with the calls here
#include "proto/main/unk_0203c638.h"
#include "proto/main/unk_0205b7b0.h"
#include "proto/main/unk_02063904.h"
#include "proto/main/unk_0206e54c.h"
#include "proto/ov004/unk_ov004_0221e7a8.h"
#include "proto/ov004/unk_ov004_02228700.h"

// shared_0224d4e8.h.txt -- final declaration of class RoomObjActor (defined in ov004 TU17, 0x0221e7a8-0x02225290).
// Paste this block unchanged into TU18..TU26 (it is the base of 0224d618 (TU18), 0224d80c (TU19), 0224dd98 (TU23),
// 0224def8 (TU24), 0224e034 (TU25), 0224e2b8 (TU26)).  It is what TU17's unit.cpp compiles; vtable symbols in the
// original (0x0224d4e0, 0x70 bytes):
//   slot 00 ProcBase::onCreate        04 M::vfunc_04               08 Character::postCreate(s32)
//   0c Base::vfunc_0c   10 M::vfunc_10   14 Actor::postDelete   18 Base::vfunc_18   1c M::vfunc_1c
//   20 M::vfunc_20(u32) (symbols.txt calls it func_ov004_022250cc: renames.txt  ov004 022250cc _ZN12RoomObjActor11postExecuteEj)
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
//  * Names a derived class must not reuse: syncSlot (u8, 0xff = none), unk_ec (AnimModel), unk_1a4, unk_248, unk_250.
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





struct Unk_ov004_022288c0_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};



// the global object at 0x02250f6c: constructed / registered by the unit's __sinit (ctor and dtor are two 2-byte stubs in main)
struct ClothTex {
    ClothTex();
    ~ClothTex();
    u8 pad_00[0x2c4];
};

class SewingMachine : public RoomObjActor {
public:
    SewingMachine();
    virtual ~SewingMachine();
    virtual BOOL onCreate();
    virtual BOOL onDelete();
    virtual BOOL onExecute();
    virtual BOOL onDraw();
    virtual BOOL changeSyncState(u32 idx);

    void updateState03();
    BOOL enterState03();
    void updateState02();
    BOOL enterState02();
    void updateState01();
    BOOL enterState01();
    void updateState00();
    BOOL enterState00();
    void updateState();

    /* 0x290 */ u32 partModel[HOST_SIZED(0xb8, AnimModel) / 4] HOST_ALIGN8;  // a AnimModel (ctor C1 / dtor D1 by hand)
    /* 0x348 */ u32 partRes[HOST_SIZED(0xa4, RoomObjRes) / 4] HOST_ALIGN8;  // a RoomObjRes (C1 / D1 by hand)
    /* 0x3ec */ u32 partTex;        // helper with plain ctor/dtor functions 02224d60 / 02224d5c
    /* 0x3f0 */ u8 clothTexTask[HOST_SIZED(0x28, MatTexVramTask) / 1] HOST_ALIGN8;   // a MatTexVramTask (C1 by hand)
    /* 0x418 */ u32 matAnim[HOST_SIZED(0x28, ModelAnim) / 4] HOST_ALIGN8;   // a ModelAnim (C1 / D1 by hand)
};

#define F(T, off) (*(T *)((u8 *)this + off))
#define G(T, off) (*(T *)((u8 *)g + off))

extern "C" {
extern Mtx43 data_021f47e0;
void RoomObjTex_Construct(void *);
void RoomObjTex_Destruct(void *);
void RoomObjRes_Free(void *);
void RoomObjTex_Reset(void *);
s32 RoomObjRes_GetBca(void *, u32);
s32 RoomObjRes_GetBta(void *, u32);
void Mtx43_SetTranslate(void *m, s32 x, s32 y, s32 z);
s32 NNS_G3dBindMdlTex(void *, u32);
s32 NNS_G3dBindMdlPltt(void *, u32);
void _ZN22DateSeededRandomSourceC2Ev(void *);
void _ZN22DateSeededRandomSourceD2Ev(void *);
void ItemPickSpec_Destruct(void *);
void ItemPick_One(u16 *out, void *p, u32 a, void *q, u32 b, u32 c, u32 d);
s32 Math_IsInRange(s32 a, s32 b, s32 c);
}

typedef void (SewingMachine::*Unk_ov004_022288c0_Fn)();
typedef BOOL (SewingMachine::*Unk_ov004_0222894c_Fn)();

// ---------------------------------------------------------------- data
extern "C" ActorProfile sSewingMachineProfile = {(void *(*)())SewingMachine_Create, 0x78, 0x15, 0, 0xc8000, 0x12c000, 0x258000};
extern "C" SewingMachine *sSewingMachine = 0;
ClothTex sSewingMachineCloth;

extern "C" SewingMachine *SewingMachine_Create() {
    return new SewingMachine();
}

SewingMachine::SewingMachine() {
    new (partModel) AnimModel();
    new (partRes) RoomObjRes();
    RoomObjTex_Construct(&partTex);
    new (clothTexTask) MatTexVramTask();
    new (matAnim) ModelAnim();
}

SewingMachine::~SewingMachine() {
    ((ModelAnim *)(matAnim))->ModelAnim::~ModelAnim();
    RoomObjTex_Destruct(&partTex);
    ((RoomObjRes *)(partRes))->~RoomObjRes();
    ((AnimModel *)(partModel))->AnimModel::~AnimModel();
}

BOOL SewingMachine::onCreate() {
    sSewingMachine = this;
    loadResources("/roomObj/obj_tailor1.arc", "/roomObj/obj_tailor1.nsbtx");
    RoomObjRes_Load(partRes, "/roomObj/obj_tailor2.arc");
    RoomObjTex_Load(&partTex, "/roomObj/obj_tailor2.nsbtx");
    ((Model *)(partModel))->setResource((NNSG3dResMdl *)(RoomObjRes_GetModel(partRes)), 0);
    {
        void *a = RoomObjRes_GetModel(partRes);
        NNS_G3dBindMdlTex(a, RoomObjTex_Get(&partTex));
    }
    {
        void *a = RoomObjRes_GetModel(partRes);
        NNS_G3dBindMdlPltt(a, RoomObjTex_Get(&partTex));
    }
    if (RoomObjRes_GetBca(&res, 0) && ((AnimModel *)(&model))->allocAnmObj(gBgHeap)) {
        ((BlendAnimModel *)(&model))->initAnim(RoomObjRes_GetBca(&res, 0), 0, 0x1000, 0, 0);
        ((AnimModel *)(&model))->attachAnim();
        F(u32, 0x198) = 0;
    }
    if (((ModelAnim *)(matAnim))->allocMatAnm(F(u32, 0x148), gBgHeap)) {
        ((ModelAnim *)(matAnim))->init(RoomObjRes_GetBta(&res, 0), 0, 0x1000, 0);
        ((ModelAnim *)(matAnim))->addToRenderObj((u32)(((Model *)(&model))->getRenderObj()));
        F(u32, 0x428) = 0;
    }
    if (RoomObjRes_GetBca(partRes, 0) && ((AnimModel *)(partModel))->allocAnmObj(gBgHeap)) {
        ((BlendAnimModel *)(partModel))->initAnim(RoomObjRes_GetBca(partRes, 0), 0, 0x1000, 0, 0);
        ((AnimModel *)(partModel))->attachAnim();
        F(u32, 0x33c) = 0;
    }
    {
        u32 x[HOST_SIZED(0xc, DateSeededRandomSource) / 4] HOST_ALIGN8;
        u32 y[2];
        u16 z;
        _ZN22DateSeededRandomSourceC2Ev(x);
        ((ItemPickSpec *)(y))->set(2, 0);
        ItemPick_One(&z, y, 0, x, 1, 1, 0);
        ItemPickSpec_Destruct(y);
        ClothTex_LoadItem(&sSewingMachineCloth, &z, 0);
        u32 r5 = F(u32, 0x2ec);
        void *t = ClothTex_GetTex(&sSewingMachineCloth);
        ((MatTexVramTask *)(clothTexTask))->request((void *)(r5), (u32)("w"), t, 0, 0);
        enterState00();
        _ZN22DateSeededRandomSourceD2Ev(x);
    }
    return TRUE;
}

BOOL SewingMachine::onExecute() {
    ((AnimModel *)(&model))->stepAnim();
    ((AnimModel *)(partModel))->stepAnim();
    ((AnimFrameCtrl *)(matAnim))->step();
    *F(u32 *, 0x430) = F(u32, 0x420);
    Mtx43_SetTranslate(&data_021f47e0, position.x, position.y, position.z);
    F(Mtx43, 0xec + 0x64) = data_021f47e0;
    F(Mtx43, 0x290 + 0x64) = data_021f47e0;
    updateState();
    return TRUE;
}

BOOL SewingMachine::onDraw() {
    ((AnimModel *)(&model))->drawAnimated((void *)(0));
    ((AnimModel *)(partModel))->drawAnimated((void *)(0));
    return TRUE;
}

BOOL SewingMachine::onDelete() {
    releaseResources();
    RoomObjRes_Free(partRes);
    RoomObjTex_Reset(&partTex);
    sSewingMachine = 0;
    return TRUE;
}

BOOL SewingMachine::changeSyncState(u32 idx) {
    static Unk_ov004_0222894c_Fn tbl[4] = {
        (Unk_ov004_0222894c_Fn)&SewingMachine::enterState00,
        (Unk_ov004_0222894c_Fn)&SewingMachine::enterState01,
        (Unk_ov004_0222894c_Fn)&SewingMachine::enterState02,
        (Unk_ov004_0222894c_Fn)&SewingMachine::enterState03,
    };
    if (idx < 4) {
        if ((this->*tbl[idx])()) {
            tex.syncState = idx;
            return TRUE;
        }
    }
    return FALSE;
}

void SewingMachine::updateState() {
    static Unk_ov004_022288c0_Fn tbl[4] = {
        &SewingMachine::updateState00,
        &SewingMachine::updateState01,
        &SewingMachine::updateState02,
        &SewingMachine::updateState03,
    };
    u32 i = tex.syncState;
    if (i < 4) {
        (this->*tbl[i])();
    }
}

BOOL SewingMachine::enterState00() {
    return TRUE;
}

void SewingMachine::updateState00() {}

BOOL SewingMachine::enterState01() {
    F(s32, 0x33c) = 0x1000;
    F(s32, 0x43c) = 0;
    return TRUE;
}

void SewingMachine::updateState01() {
    F(s32, 0x198) = 0x1000;
    F(s32, 0x428) = 0x1000;
    changeSyncState(2);
}

BOOL SewingMachine::enterState02() {
    return TRUE;
}

void SewingMachine::updateState02() {
    s32 t = ((Unk_ov004_022288c0_Bits *)(HOST_AT(this, 0x334, partModel[41], 0)))->mid;
    u32 q = (u16)(t / 0x38);
    if (Math_IsInRange((u16)(t - q * 0x38), 0x11, 0x34)) {
        if (!MenuCtrl_IsMenuOpen()) {
            RoomObj_PlaySeHeld(&se, 0x85e);
        }
    }
}

BOOL SewingMachine::enterState03() {
    F(s32, 0x33c) = 0;
    F(s32, 0x43c) = 0;
    return TRUE;
}

void SewingMachine::updateState03() {
    s32 r = 0x1000 - Math_EaseRampProgress(F(s32, 0x43c), 0, 0x28000, 0xa000, 0xa000);
    F(s32, 0x198) = r;
    F(s32, 0x428) = r;
    F(s32, 0x43c) += 0x1000;
    if (r == 0) {
        changeSyncState(0);
    }
}

extern "C" BOOL SewingMachine_Start() {
    SewingMachine *g = sSewingMachine;
    if (g) {
        return g->changeSyncState(1);
    }
    return 0;
}

extern "C" BOOL SewingMachine_Stop() {
    SewingMachine *g = sSewingMachine;
    if (g) {
        return g->changeSyncState(3);
    }
    return 0;
}

extern "C" BOOL SewingMachine_IsStopped() {
    SewingMachine *g = sSewingMachine;
    if (g) {
        u32 t = g->tex.syncState;
        if (t == 3 || t == 0) {
            return TRUE;
        }
    }
    return FALSE;
}

extern "C" void SewingMachine_SetFrame(u32 x) {
    SewingMachine *g = sSewingMachine;
    if (g) {
        G(u32, 0x334) = x << 12;
    }
}

extern "C" u32 SewingMachine_GetFrame() {
    SewingMachine *g = sSewingMachine;
    if (g) {
        return ((Unk_ov004_022288c0_Bits *)(HOST_AT(g, 0x334, partModel[41], 0)))->mid;
    }
    return 0;
}
