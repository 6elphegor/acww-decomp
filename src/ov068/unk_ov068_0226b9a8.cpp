// mwcc-version: 1.2/base
#include "types.h"
#include "actor/Unk_0203e5d0_Node.h"
#include "game/Unk_ov004_02224ee4_Vec.h"
#include "room/Unk_ov004_02224d60_B.h"
#include "actor/Unk_ov068_SceneEntry.h"
#include "gfx/AnimFrameCtrl.h"
#include "room/RoomObjRes.h"
#include "gfx/CachedModel.h"
#include "sys/ProcBase.h"
#include "actor/Actor.h"
#include "actor/Character.h"
#include "gfx/AnimModel.h"
#include "gfx/ModelAnim.h"
#include "room/RoomObjActor.h"
#define AnimFrameCtrl_hasPassedFrame _ZN13AnimFrameCtrl14hasPassedFrameEi
#define AnimFrameCtrl_step _ZN13AnimFrameCtrl4stepEv
#define BlendAnimModel_initAnim _ZN14BlendAnimModel8initAnimEiiitt
#define AnimModel_attachAnim _ZN9AnimModel10attachAnimEv
#define AnimModel_allocAnmObj _ZN9AnimModel11allocAnmObjEPv
#define AnimModel_drawAnimated _ZN9AnimModel12drawAnimatedEPv
#define AnimModel_stepAnim _ZN9AnimModel8stepAnimEv
#define Model_setInitCallback _ZN5Model15setInitCallbackEii
#define Model_getRenderObj _ZN5Model12getRenderObjEv
#define ModelAnim_addToRenderObj _ZN9ModelAnim14addToRenderObjEj
#define ModelAnim_replace _ZN9ModelAnim7replaceEiiiit
#define ModelAnim_init _ZN9ModelAnim4initEiiit
#define ModelAnim_allocMatAnm _ZN9ModelAnim11allocMatAnmEjPv
#define G3dResAccess_findMatIdx _ZN12G3dResAccess10findMatIdxEi
#define BlendAnimModel_getAnmRes _ZN14BlendAnimModel9getAnmResEv

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




struct Unk_ov068_022702b4_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

union Unk_ov068_022702b4_Word {
    u32 v;
    Unk_ov068_022702b4_Bits b;
};

// 4-byte texture slot with an inline destructor (the ov004 RoomObjTex of room/RoomObjTex.h has none: its owners destroy
// it by hand); named apart so that room/RoomObjActor.h can be included
struct RoomObjTexAuto {
    inline RoomObjTexAuto() { RoomObjTex_Construct(this); }
    inline ~RoomObjTexAuto() { RoomObjTex_Destruct(this); }
    u32 texture;
};

class TaxiInterior;


extern "C" TaxiInterior *sTaxiInterior;
extern "C" Unk_ov068_Scene_Entry sTaxiInteriorProfile;

struct Unk_ov068_0226c298_Arg;
typedef void (*Unk_ov068_0226c298_Fn)(Unk_ov068_0226c298_Arg *);
struct Unk_ov068_0226c298_Arg {
    /* 0x00 */ u8 pad_00[0x1c];
    /* 0x1c */ Unk_ov068_0226c298_Fn matCallback;
    /* 0x20 */ u8 pad_20[0x70];
    /* 0x90 */ u8 matCallbackTiming;
};

struct Unk_ov068_0226c2a8_Inner {
    u8 pad_00;
    u8 matIdx;
};
struct Unk_ov068_0226c2a8_Owner {
    u8 pad_00[0x2c];
    void *ptrUser;
};
struct Unk_ov068_0226c2a8_Arg {
    Unk_ov068_0226c2a8_Inner *c;
    Unk_ov068_0226c2a8_Owner *pRenderObj;
};

extern "C" {
extern void *gBgHeap;
BOOL AnimFrameCtrl_hasPassedFrame(void *p, u32 i);
void Snd_PlaySe(u32 a);
void func_02004008(u32 a);
void Snd_StopSe(u32 a, u32 b);
void *RoomObjRes_GetBma(void *p, u32 i);
void *RoomObjRes_GetBta(void *p, u32 i);
void RoomObj_LoadResourcesByName(char *s, void *a, void *b, void *c);
void RoomObj_ReleaseResources(void *a, void *b);
void BlendAnimModel_initAnim(void *p, void *q, s32 a, s32 b, s32 c, s32 d);
void AnimModel_attachAnim(void *p);
BOOL AnimModel_allocAnmObj(void *p, void *q);
void *Model_getRenderObj(void *p);
void ModelAnim_replace(void *p, void *a, void *b, s32 c, s32 d, s32 e);
BOOL ModelAnim_allocMatAnm(void *p, u32 a, void *q);
void ModelAnim_init(void *p, void *q, s32 a, s32 b, s32 c);
void ModelAnim_addToRenderObj(void *p, void *q);
void AnimModel_drawAnimated(void *p, u32 a);
void AnimModel_stepAnim(void *p);
void AnimFrameCtrl_step(void *p);
s32 SpNpcKappn_GetAnimState();
s32 SpNpcKappn_GetAnimFrame();
void TaxiInterior_SetPartAnim(void *self, u8 k, void *a, void *b, u8 s0, u32 s1, u16 s2, u16 s3);
void TaxiInterior_OnModelNode(void *p, u32 b, void *c);
void NNS_G3dMdlSetMdlAlpha(u32 p, s32 a, u8 b);
void Model_setInitCallback(void *m, void (*fn)(Unk_ov068_0226c298_Arg *), void *self);
s32 G3dResAccess_findMatIdx(u32 a, const char *s);
}

class TaxiInterior : public RoomObjActor {
public:
    TaxiInterior();
    virtual ~TaxiInterior();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL onExecute();
    virtual BOOL onDraw();

    void execDry();
    BOOL enterDry();
    void execRainFading();
    BOOL enterRainFading();
    void execRaining();
    BOOL enterRaining();
    void updateRainState();
    BOOL setRainState(s32 s);
    void playBodyAnim(s32 a);
    void loadModels();

    /* 0x290 */ ModelAnim bodyMatAnim;
    /* 0x2b0 */ ModelAnim bodyTexAnim;
    /* 0x2d0 */ AnimModel driverModel;
    /* 0x388 */ RoomObjRes driverRes;
    /* 0x42c */ RoomObjTexAuto driverTex;
    /* 0x430 */ u8 isDriverAnimating;
    /* 0x431 */ u8 pad_431[3];
    /* 0x434 */ AnimModel wheelModel;
    /* 0x4ec */ RoomObjRes wheelRes;
    /* 0x590 */ RoomObjTexAuto wheelTex;
    /* 0x594 */ s32 rainState;
    /* 0x598 */ u16 rainFadeFrame;
    /* 0x59a */ s16 rainAlpha;
    /* 0x59c */ s16 rainAMatIdx;
    /* 0x59e */ s16 rainBMatIdx;
    /* 0x5a0 */ s16 splashMatIdx;
    /* 0x5a2 */ u16 pad_5a2;
};

extern "C" TaxiInterior *TaxiInterior_Create();
extern "C" Unk_ov068_Scene_Entry sTaxiInteriorProfile = {(void *(*)())TaxiInterior_Create, 0x13, 0x17, 0, 0xc8000, 0x12c000, 0x258000};
extern "C" {
TaxiInterior *sTaxiInterior;
}

extern "C" void TaxiInterior_InitModelCallback(Unk_ov068_0226c298_Arg *p);
extern "C" void TaxiInterior_ModelCallback(Unk_ov068_0226c2a8_Arg *p);

extern "C" {
s32 BlendAnimModel_getAnmRes(void *p);
BOOL TaxiInterior_StartDriverAnim();
}

extern "C" TaxiInterior *TaxiInterior_Create() {
    return new TaxiInterior;
}

extern "C" void TaxiInterior_ModelCallback(Unk_ov068_0226c2a8_Arg *p) {
    void *o = p->pRenderObj->ptrUser;
    if (o) {
        TaxiInterior_OnModelNode(o, p->c->matIdx, p);
    }
}

extern "C" void TaxiInterior_InitModelCallback(Unk_ov068_0226c298_Arg *p) {
    p->matCallback = (Unk_ov068_0226c298_Fn)TaxiInterior_ModelCallback;
    p->matCallbackTiming = 2;
}

TaxiInterior::TaxiInterior() {}

TaxiInterior::~TaxiInterior() {}

BOOL TaxiInterior::vfunc_00() {
    sTaxiInterior = this;
    loadModels();
    Model_setInitCallback(&model, TaxiInterior_InitModelCallback, this);
    rainAMatIdx = G3dResAccess_findMatIdx((*(u32 *)((u8 *)&model + 0x5c)), "m_rainA");
    rainBMatIdx = G3dResAccess_findMatIdx((*(u32 *)((u8 *)&model + 0x5c)), "m_rainB");
    splashMatIdx = G3dResAccess_findMatIdx((*(u32 *)((u8 *)&model + 0x5c)), "m_splash");
    setRainState(0);
    func_02004008(0x884);
    func_02004008(0x885);
    return TRUE;
}

BOOL TaxiInterior::onExecute() {
    updateRainState();
    AnimFrameCtrl_step(&bodyTexAnim);
    *(u32 *)bodyTexAnim.anmObj = bodyTexAnim.curFrame;
    AnimModel_stepAnim(&model);
    AnimFrameCtrl_step(&bodyMatAnim);
    *(u32 *)bodyMatAnim.anmObj = bodyMatAnim.curFrame;
    if (isDriverAnimating) {
        AnimModel_stepAnim(&driverModel);
    }
    s32 t = SpNpcKappn_GetAnimState();
    SpNpcKappn_GetAnimFrame();
    s32 k = 0;
    switch (t) {
    case 0xfb:
        k = 0;
        break;
    case 0x8d:
        k = 1;
        break;
    case 0x8e:
        k = 2;
        break;
    case 0x8f:
        k = 3;
        break;
    case 0x90:
        k = 4;
        break;
    case 0x91:
        k = 5;
        break;
    }
    TaxiInterior_SetPartAnim(this, k, &wheelModel, &wheelRes, 0, 0x1000, 0, 0);
    AnimModel_stepAnim(&wheelModel);
    NNS_G3dMdlSetMdlAlpha((*(u32 *)((u8 *)&model + 0x5c)), rainAMatIdx, rainAlpha);
    NNS_G3dMdlSetMdlAlpha((*(u32 *)((u8 *)&model + 0x5c)), rainBMatIdx, rainAlpha);
    NNS_G3dMdlSetMdlAlpha((*(u32 *)((u8 *)&model + 0x5c)), splashMatIdx, rainAlpha);
    return TRUE;
}

BOOL TaxiInterior::onDraw() {
    AnimModel_drawAnimated(&model, 0);
    AnimModel_drawAnimated(&driverModel, 0);
    AnimModel_drawAnimated(&wheelModel, 0);
    return TRUE;
}

BOOL TaxiInterior::vfunc_0c() {
    sTaxiInterior = 0;
    releaseResources();
    RoomObj_ReleaseResources(&driverRes, &driverTex);
    RoomObj_ReleaseResources(&wheelRes, &wheelTex);
    Snd_StopSe(0x884, 1);
    Snd_StopSe(0x885, 1);
    return TRUE;
}

void TaxiInterior::loadModels() {
    loadResourcesByName("obj_taxi");
    if ((void *)RoomObjRes_GetBca(&res, 0)) {
        if (AnimModel_allocAnmObj(&model, gBgHeap)) {
            BlendAnimModel_initAnim(&model, (void *)RoomObjRes_GetBca(&res, 0), 0, 0x1000, 0, 0);
            AnimModel_attachAnim(&model);
        }
    }
    if (RoomObjRes_GetBta(&res, 0)) {
        if (ModelAnim_allocMatAnm(&bodyTexAnim, (*(u32 *)((u8 *)&model + 0x5c)), gBgHeap)) {
            ModelAnim_init(&bodyTexAnim, RoomObjRes_GetBta(&res, 0), 0, 0x1000, 0);
            ModelAnim_addToRenderObj(&bodyTexAnim, Model_getRenderObj(&model));
        }
    }
    if (RoomObjRes_GetBma(&res, 0)) {
        if (ModelAnim_allocMatAnm(&bodyMatAnim, (*(u32 *)((u8 *)&model + 0x5c)), gBgHeap)) {
            ModelAnim_init(&bodyMatAnim, RoomObjRes_GetBma(&res, 0), 0, 0x1000, 0);
            ModelAnim_addToRenderObj(&bodyMatAnim, Model_getRenderObj(&model));
        }
    }
    RoomObj_LoadResourcesByName("obj_taxi_fig", &driverModel, &driverRes, &driverTex);
    if ((void *)RoomObjRes_GetBca(&driverRes, 0)) {
        if (AnimModel_allocAnmObj(&driverModel, gBgHeap)) {
            BlendAnimModel_initAnim(&driverModel, (void *)RoomObjRes_GetBca(&driverRes, 0), 1, 0x1000, 0, 0);
            AnimModel_attachAnim(&driverModel);
        }
    }
    RoomObj_LoadResourcesByName("obj_taxi_hdl", &wheelModel, &wheelRes, &wheelTex);
    if ((void *)RoomObjRes_GetBca(&wheelRes, 0)) {
        if (AnimModel_allocAnmObj(&wheelModel, gBgHeap)) {
            BlendAnimModel_initAnim(&wheelModel, (void *)RoomObjRes_GetBca(&wheelRes, 0), 0, 0x1000, 0, 0);
            AnimModel_attachAnim(&wheelModel);
        }
    }
}

void TaxiInterior::playBodyAnim(s32 a) {
    void *p = (void *)RoomObjRes_GetBca(&res, 0);
    BlendAnimModel_initAnim(&model, p, a, 0x1000, ((Unk_ov068_022702b4_Bits *)&model.curFrame)->mid, 0);
    void *r6 = Model_getRenderObj(&model);
    void *q = RoomObjRes_GetBma(&res, 0);
    ModelAnim_replace(&bodyMatAnim, r6, q, a, 0x1000, ((Unk_ov068_022702b4_Bits *)&bodyMatAnim.curFrame)->mid);
}

BOOL TaxiInterior::setRainState(s32 s) {
    static BOOL (TaxiInterior::*tbl[3])() = {
        &TaxiInterior::enterRaining,
        &TaxiInterior::enterRainFading,
        &TaxiInterior::enterDry,
    };
    if (s < 3) {
        if ((this->*tbl[s])()) {
            rainState = s;
            return TRUE;
        }
    }
    return FALSE;
}

void TaxiInterior::updateRainState() {
    static void (TaxiInterior::*tbl[3])() = {
        &TaxiInterior::execRaining,
        &TaxiInterior::execRainFading,
        &TaxiInterior::execDry,
    };
    s32 s = rainState;
    if (s < 3) {
        (this->*tbl[s])();
    }
}

BOOL TaxiInterior::enterRaining() {
    rainAlpha = 0x1f;
    playBodyAnim(0);
    return TRUE;
}

void TaxiInterior::execRaining() {
    if (AnimFrameCtrl_hasPassedFrame((AnimFrameCtrl *)&model, 0)) {
        Snd_PlaySe(0x886);
    } else if (AnimFrameCtrl_hasPassedFrame((AnimFrameCtrl *)&model, 0x1c)) {
        Snd_PlaySe(0x887);
    }
}

BOOL TaxiInterior::enterRainFading() {
    playBodyAnim(0);
    return TRUE;
}

void TaxiInterior::execRainFading() {
    if (AnimFrameCtrl_hasPassedFrame((AnimFrameCtrl *)&model, 0)) {
        Snd_PlaySe(0x886);
    } else if (AnimFrameCtrl_hasPassedFrame((AnimFrameCtrl *)&model, 0x1c)) {
        Snd_PlaySe(0x887);
    }
    if (rainFadeFrame % 3 == 0) {
        if (rainAlpha >= 0) {
            rainAlpha = rainAlpha - 1;
            if (rainAlpha == 0) {
                setRainState(2);
            }
        }
    }
    rainFadeFrame++;
}

BOOL TaxiInterior::enterDry() {
    rainAlpha = 0;
    playBodyAnim(1);
    return TRUE;
}

void TaxiInterior::execDry() {}

extern "C" BOOL TaxiInterior_StopRain() {
    TaxiInterior *g = sTaxiInterior;
    if (g) {
        return g->setRainState(1);
    }
    return TRUE;
}

extern "C" BOOL TaxiInterior_StartDriverAnim() {
    TaxiInterior *g = sTaxiInterior;
    if (g) {
        g->isDriverAnimating = 1;
        BlendAnimModel_initAnim(&sTaxiInterior->driverModel, (void *)RoomObjRes_GetBca(&sTaxiInterior->driverRes, 0), 1, 0x1000, 0, 0);
        return TRUE;
    }
    return FALSE;
}

extern "C" void TaxiInterior_OnModelNode(void *p, u32 b, void *c) {
}

extern "C" void TaxiInterior_SetPartAnim(void *self, u8 k, void *sub, void *obj, u8 s0, u32 s1, u16 s2, u16 s3) {
    s32 cur = BlendAnimModel_getAnmRes(sub);
    if (cur != (s32)(void *)RoomObjRes_GetBca(obj, k)) {
        BlendAnimModel_initAnim(sub, (void *)RoomObjRes_GetBca(obj, k), s0, s1, s2, s3);
    }
}
