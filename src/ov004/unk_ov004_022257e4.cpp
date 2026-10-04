// mwcc-version: 1.2/base
#include "types.h"
#include "gfx/DebugColor.h"
#include "actor/ActorProfile.h"
#include "actor/CharacterListNode.h"
#include "game/Unk_ov004_02224ee4_Vec.h"
#include "gfx/AnimFrameCtrl.h"
#include "room/RoomObjRes.h"
#include "room/RoomObjTex.h"
#include "gfx/CachedModel.h"
#include "game/FxVec3.h"
#include "sys/ProcBase.h"
#include "actor/Actor.h"
#include "actor/Character.h"
#include "gfx/AnimModel.h"
#include "room/RoomObjActor.h"
#include "gfx/ModelAnim.h"







// ---- model resource sub-object at +0xec (see src/main/unk_02054190.cpp)




// ---- helper objects at +0x1a4, +0x248, +0x250 (their other methods live in ov004_054)




struct Unk_ov004_02225cf4_Q {
    u32 pad_00;
    u32 prmMatColor0;
    u32 pad_08;
    u32 prmPolygonAttr;
};

struct Unk_ov004_02225cf4_P {
    u8 pad_00[8];
    u32 flag;
    u8 pad_0c[0xb0 - 0xc];
    Unk_ov004_02225cf4_Q *matAnmResult;
};

struct Unk_ov004_02225c6c_V3 {
    s32 x, y, z;
};


struct Unk_ov004_02226458_Obj {
    u32 unk_00;
    u32 unk_04;
    u8 pad_08[0x14];
    void (*matCallback)(void *);
    u8 pad_20[0x90 - 0x20];
    u8 matCallbackTiming;
};

struct Unk_ov004_02226468_Sub {
    u8 pad_00[0x2c];
    u32 userPtr;
};
struct Unk_ov004_02226468_Ctx {
    u8 cmdBytes[2];
    u8 pad_02[2];
};
struct Unk_ov004_02226468_Obj {
    Unk_ov004_02226468_Ctx *sbcCmd;
    Unk_ov004_02226468_Sub *renderObj;
};

// a 4-byte colour record whose constructor is inline (the __sinit of this unit initialises six of them)



class CheckInGate : public RoomObjActor {
public:
    CheckInGate();
    virtual ~CheckInGate();
    virtual BOOL onCreate();
    virtual BOOL onDelete();
    virtual BOOL onExecute();
    virtual BOOL onDraw();
    virtual BOOL changeSyncState(u32 a);

    void updateState03();
    BOOL enterState03();
    void updateState02();
    BOOL enterState02();
    void updateState01();
    BOOL enterState01();
    void updateState00();
    BOOL enterState00();
    void updateState();
    void removeDoorCollision();
    void updateDoorCollision();
    void setDoorOffset(s32 a);
    void clearDoorUpdate();
    void applyHourLight(u32 a, Unk_ov004_02225cf4_P *p);
    BOOL initMatAnim();
    BOOL initBodyAnim();
    void setGroundMatFlags();
    BOOL bindTextures();

    /* 0x290 */ ModelAnim matAnim; // curFrame (0x298) and anmObj (0x2a8) are read through F()
    /* 0x2b0 */ u32 matIdx[3];      // material indices of m_lt / m_ltdoor / m_open (read through F())
    /* 0x2bc */ u32 doorCollider[0x27];    // a BoxCollider (ctor/dtor by hand: the original destroys it with D2)
    /* 0x358 */ u32 leftCollider[0x27];
    /* 0x3f4 */ u32 rightCollider[0x27];
    /* 0x490 */ u8 pad_490[8];
};

typedef CheckInGate Cls;
typedef void (Cls::*Fn1)();
typedef BOOL (Cls::*Fn2)();
#define F(T, off) (*(T *)((u8 *)this + off))

extern "C" {
extern u32 gBgHeap;
extern void *gCommManager;

s32 RoomObjRes_GetBca(void *, u32);
s32 RoomObjRes_GetBma(void *, u32);
u32 RoomObjTex_Get(void *);
void RoomObjTex_Reset(void *);
void RoomObjRes_Free(void *);
void CheckInGate_SetInstance(Cls *c);

void _ZN14BlendAnimModel8initAnimEiiitt(void *, s32, s32, s32, u16, u16);
void *_ZN5Model12getRenderObjEv(void *);
void _ZN9ModelAnim7replaceEiiiit(void *, s32, s32, s32, s32, u16);
void _ZN9ModelAnim4initEiiit(void *, s32, s32, s32, s32);
void _ZN9ModelAnim14addToRenderObjEj(void *, void *);
BOOL _ZN9ModelAnim11allocMatAnmEjPv(void *, u32, u32);
void Snd_PlaySe(u32);
void _ZN9AnimModel8stepAnimEv(void *);
void _ZN13AnimFrameCtrl4stepEv(void *);
BOOL _ZN13AnimFrameCtrl10isFinishedEv(void *);
BOOL _ZN13AnimFrameCtrl14hasPassedFrameEi(void *, u32);
void Math_ApproachS32Max(s32 *, s32, s32, s32);
s32 _ZN9AnimModel11allocAnmObjEPv(void *, u32);
void _ZN9AnimModel10attachAnimEv(void *);
void _ZN9AnimModel12drawAnimatedEPv(void *, s32);
s32 _ZN12G3dResAccess10findMatIdxEi(void *, u32);
s32 BoxCollider_Unregister(void *);
s32 BoxCollider_Register(void *, s32, s32, s32, void *, s32, s32);
void Clock_GetMinuteHour(u8 *);
s32 FX_Div(s32, s32);
s32 func_01ffcb0c(s32, s32);
s32 Scene_GetCurrent(void);
void NNS_G3dBindMdlTex(void *, void *);
void NNS_G3dBindMdlPltt(void *, void *);
void *BgModelCache_Get(void);
void *_ZN12BgModelCache12getGroundTexEv(void *);
s32 TownSessionState_Get(void);
s32 TownSessionState_GetTravelState(s32);
s32 _ZN15TownTravelState7getModeEv(s32);
s32 _ZN11CommManager12isSlotActiveEi(void *, u32);
void _ZN5Model11setResourceEP12NNSG3dResMdlj(void *, void *, s32);
void _ZN5Model15setInitCallbackEii(void *, void *, void *);
void _ZN11BoxColliderC1Ev(void *self);
void _ZN11BoxColliderD2Ev(void *self);
}

extern "C" const u8 sCheckInGateHourLight[];
extern "C" const u8 data_ov004_0224016c[];
#define data_ov004_0224014d (sCheckInGateHourLight + 1)
#define data_ov004_0224014e (sCheckInGateHourLight + 2)
#define data_ov004_02240150 (sCheckInGateHourLight + 4)
#define data_ov004_02240154 (sCheckInGateHourLight + 8)

extern "C" CheckInGate *CheckInGate_Create();
extern "C" CheckInGate *CheckInGate_Create();// declarations (definition order below sets the data layout)
extern "C" { extern DebugColor data_ov004_02250c48; }
extern "C" { extern DebugColor data_ov004_02250c4c; }
extern "C" { extern DebugColor data_ov004_02250c40; }
extern "C" { extern DebugColor data_ov004_02250c44; }
extern "C" { extern char data_ov004_0224d7ac[]; }
extern "C" { extern DebugColor data_ov004_02250c50; }
extern "C" { extern char *sCheckInGateGroundMats[7]; }
extern "C" { extern Cls *sCheckInGate; }
extern "C" { extern char data_ov004_0224d7b8[]; }
extern "C" { extern char data_ov004_0224d77c[]; }
extern "C" { extern char data_ov004_0224d7c4[]; }
extern "C" { extern char data_ov004_0224d788[]; }
extern "C" { extern char data_ov004_0224d794[]; }
extern "C" { extern char data_ov004_0224d7a0[]; }
extern "C" { extern DebugColor data_ov004_02250c38; }
extern "C" { extern ActorProfile sCheckInGateProfile; }
extern "C" { extern const u8 sCheckInGateHourLight[0x20]; }
extern "C" { extern const u8 data_ov004_0224016c[0x104]; }

// @2226484
extern "C" CheckInGate *CheckInGate_Create() {
    return new CheckInGate();
}

extern "C" void CheckInGate_MatCallback(Unk_ov004_02226458_Obj *o);
extern "C" void CheckInGate_MatCallback(Unk_ov004_02226458_Obj *o) {
    Unk_ov004_02226468_Obj *t = (Unk_ov004_02226468_Obj *)o;
    Unk_ov004_02226468_Sub *s = t->renderObj;
    if (s->userPtr != 0) {
        ((Cls *)s->userPtr)->applyHourLight(t->sbcCmd->cmdBytes[1], (Unk_ov004_02225cf4_P *)o);
    }
}

extern "C" void CheckInGate_InitRenderObj(Unk_ov004_02226458_Obj *o) {
    o->matCallback = (void (*)(void *))CheckInGate_MatCallback;
    o->matCallbackTiming = 2;
}

// @2226410
CheckInGate::CheckInGate() {
    _ZN11BoxColliderC1Ev(doorCollider);
    _ZN11BoxColliderC1Ev(leftCollider);
    _ZN11BoxColliderC1Ev(rightCollider);
}

// @2226374
CheckInGate::~CheckInGate() {
    _ZN11BoxColliderD2Ev(rightCollider);
    _ZN11BoxColliderD2Ev(leftCollider);
    _ZN11BoxColliderD2Ev(doorCollider);
}

// @2226158
BOOL CheckInGate::onCreate() {
    s32 v;
    s32 s = TownSessionState_GetTravelState(TownSessionState_Get());
    RoomObjRes_Load(&res, "/roomObj/obj_check_in.arc");
    RoomObjTex_Load(&tex, "/roomObj/obj_check_in.nsbtx");
    _ZN5Model11setResourceEP12NNSG3dResMdlj(&model, RoomObjRes_GetModel(&res), 0);
    F(u32, 0x2b0) = _ZN12G3dResAccess10findMatIdxEi(RoomObjRes_GetModel(&res), (u32)"m_lt");
    F(u32, 0x2b4) = _ZN12G3dResAccess10findMatIdxEi(RoomObjRes_GetModel(&res), (u32)"m_ltdoor");
    F(u32, 0x2b8) = _ZN12G3dResAccess10findMatIdxEi(RoomObjRes_GetModel(&res), (u32)"m_open");
    _ZN5Model15setInitCallbackEii(&model, (void *)CheckInGate_InitRenderObj, this);
    bindTextures();
    setGroundMatFlags();
    initBodyAnim();
    initMatAnim();
    v = Scene_GetCurrent();
    switch (v) {
    case 0xb:
        if (_ZN11CommManager12isSlotActiveEi(gCommManager, *(u32 *)((u8 *)gCommManager + 0x64))) {
            changeSyncState(2);
        } else {
            changeSyncState(0);
        }
        break;
    case 0xc:
        if (_ZN15TownTravelState7getModeEv(s) == 1) {
            changeSyncState(0);
        } else {
            changeSyncState(2);
        }
        break;
    case 0xd:
    case 0xe:
    case 0x2f:
        changeSyncState(2);
        break;
    }
    CheckInGate_SetInstance(this);
    F(s32, 0x494) = -1;
    static FxVec3 sa(0xb000, 0, 0x10800);
    static FxVec3 sb(0x15000, 0, 0x10800);
    BoxCollider_Register(leftCollider, 0x2000, 0x1c00, 0x2000, &sa, 0, 0);
    BoxCollider_Register(rightCollider, 0x2000, 0x1c00, 0x2000, &sb, 0, 0);
    return TRUE;
}

// @222613c
BOOL CheckInGate::onExecute() {
    clearDoorUpdate();
    updateState();
    updateDoorCollision();
    return TRUE;
}

// @2226128
BOOL CheckInGate::onDraw() {
    _ZN9AnimModel12drawAnimatedEPv(&model, 0);
    return TRUE;
}

// @22260e4
BOOL CheckInGate::onDelete() {
    RoomObjRes_Free(&res);
    RoomObjTex_Reset(&tex);
    removeDoorCollision();
    BoxCollider_Unregister(leftCollider);
    BoxCollider_Unregister(rightCollider);
    return TRUE;
}

// @2226064
BOOL CheckInGate::bindTextures() {
    void *o;
    o = RoomObjRes_GetModel(&res);
    NNS_G3dBindMdlTex(o, _ZN12BgModelCache12getGroundTexEv(BgModelCache_Get()));
    o = RoomObjRes_GetModel(&res);
    NNS_G3dBindMdlPltt(o, _ZN12BgModelCache12getGroundTexEv(BgModelCache_Get()));
    o = RoomObjRes_GetModel(&res);
    NNS_G3dBindMdlTex(o, (void *)RoomObjTex_Get(&tex));
    o = RoomObjRes_GetModel(&res);
    NNS_G3dBindMdlPltt(o, (void *)RoomObjTex_Get(&tex));
    return TRUE;
}

// @2225fec
void CheckInGate::setGroundMatFlags() {
    u32 i;
    u8 *base;
    u32 col;
    { u8 *h = (u8 *)RoomObjRes_GetModel(&res); base = h + *(s32 *)(h + 8); }
    i = 0;
    col = ((const u32 *)data_ov004_0224016c)[0x40];
    for (; i < 7; i++) {
        s32 x = _ZN12G3dResAccess10findMatIdxEi(RoomObjRes_GetModel(&res), (u32)sCheckInGateGroundMats[i]);
        u8 *t = base + 4 + *(u16 *)(base + 0xa);
        u8 *q = t + *(u16 *)t * x;
        u32 *rec = (u32 *)(base + *(s32 *)(q + 4));
        if (rec != 0) {
            rec[4] &= ~0xf;
            rec[4] |= col;
            rec[3] &= ~0xf;
            rec[3] |= col;
        }
    }
}

// @2225f88
BOOL CheckInGate::initBodyAnim() {
    if (RoomObjRes_GetBca(&res, 0) != 0 && _ZN9AnimModel11allocAnmObjEPv(&model, gBgHeap) != 0) {
        _ZN14BlendAnimModel8initAnimEiiitt(&model, RoomObjRes_GetBca(&res, 0), 0, 0x1000, 0, 0);
        _ZN9AnimModel10attachAnimEv(&model);
        return TRUE;
    }
    return FALSE;
}

// @2225f10
BOOL CheckInGate::initMatAnim() {
    if (RoomObjRes_GetBma(&res, 0) != 0 && _ZN9ModelAnim11allocMatAnmEjPv(&matAnim, F(u32, 0x148), gBgHeap)) {
        _ZN9ModelAnim4initEiiit(&matAnim, RoomObjRes_GetBma(&res, 0), 0, 0x1000, 0);
        _ZN9ModelAnim14addToRenderObjEj(&matAnim, _ZN5Model12getRenderObjEv(&model));
        return TRUE;
    }
    return FALSE;
}

// @2225f04
extern "C" void CheckInGate_SetInstance(Cls *c) {
    sCheckInGate = c;
}

// @2225ee0
extern "C" BOOL CheckInGate_Open() {
    if (sCheckInGate != 0) {
        return sCheckInGate->changeSyncState(1);
    }
    return FALSE;
}

// @2225ebc
extern "C" BOOL CheckInGate_Close() {
    if (sCheckInGate != 0) {
        return sCheckInGate->changeSyncState(3);
    }
    return FALSE;
}

// @2225e9c
extern "C" BOOL CheckInGate_IsOpen() {
    if (sCheckInGate != 0 && sCheckInGate->tex.syncState == 2) {
        return TRUE;
    }
    return FALSE;
}

// @2225cf4
void CheckInGate::applyHourLight(u32 a, Unk_ov004_02225cf4_P *p) {
    u8 tm[2];
    Clock_GetMinuteHour(tm);
    s32 hr = tm[1];
    s32 f = FX_Div(tm[0] << 12, 0x3c000);
    u32 i0 = (u8)((hr + 1) % 24) * 12;
    u32 i1 = (u8)(hr % 24) * 12;
    u32 packed;
    s32 w1, w2;
    packed = (u8)(((0x1000 - f) * data_ov004_0224014e[i1] + f * data_ov004_0224014e[i0]) >> 12) << 10;
    {
        u32 c = (u8)(((0x1000 - f) * sCheckInGateHourLight[i1] + f * sCheckInGateHourLight[i0]) >> 12);
        u32 d = (u8)(((0x1000 - f) * data_ov004_0224014d[i1] + f * data_ov004_0224014d[i0]) >> 12) << 5;
        packed |= c | d;
    }
    u16 pk = (u16)packed;
    w1 = ((0x1000 - f) * *(s32 *)(data_ov004_02240154 + i1) + f * *(s32 *)(data_ov004_02240154 + i0)) >> 12;
    w2 = ((0x1000 - f) * *(s32 *)(data_ov004_02240150 + i1) + f * *(s32 *)(data_ov004_02240150 + i0)) >> 12;
    u32 e0 = F(u32, 0x2b0);
    if (a == e0 || a == F(u32, 0x2b4) || a == F(u32, 0x2b8)) {
        u8 b = (p->matAnmResult->prmPolygonAttr >> 16) & 0x1f;
        u8 r;
        if (a == e0) {
            r = (func_01ffcb0c(b << 12, w2) >> 12) & 0x1f;
        } else {
            r = (func_01ffcb0c(b << 12, w1) >> 12) & 0x1f;
        }
        p->matAnmResult->prmPolygonAttr &= 0xffe0ffff;
        p->matAnmResult->prmPolygonAttr |= r << 16;
        p->flag &= ~0x100;
        p->matAnmResult->prmMatColor0 &= 0xffff8000;
        p->matAnmResult->prmMatColor0 |= pk;
    }
}

// @2225ce8
void CheckInGate::clearDoorUpdate() {
    F(u8, 0x490) = 0;
}

// @2225cd4
void CheckInGate::setDoorOffset(s32 a) {
    F(u8, 0x490) = 1;
    F(s32, 0x494) = a;
}

// @2225c6c
void CheckInGate::updateDoorCollision() {
    if (F(u8, 0x354)) {
        BoxCollider_Unregister(doorCollider);
    }
    if (F(u8, 0x490)) {
        Unk_ov004_02225c6c_V3 v;
        s32 z = F(s32, 0x494) + 0x10000;
        v.x = 0x10000;
        v.y = 0;
        v.z = z;
        BoxCollider_Register(doorCollider, 0x8000, 0, 0x2000, &v, 0, 0);
    }
}

// @2225c48
void CheckInGate::removeDoorCollision() {
    if (F(u8, 0x354)) {
        BoxCollider_Unregister(doorCollider);
    }
}

extern "C" char data_ov004_0224d7ac[] = "m_grd_soi";

extern "C" Cls *sCheckInGate = 0;

extern "C" char data_ov004_0224d788[] = "m_grd_g_s";

extern "C" DebugColor data_ov004_02250c48(31, 20, 20, 31);

extern "C" DebugColor data_ov004_02250c4c(20, 20, 31, 31);

extern "C" DebugColor data_ov004_02250c40(31, 31, 20, 31);

extern "C" const u8 data_ov004_0224016c[0x104] = {
    0xcd, 0x04, 0x00, 0x00, 0x1f, 0x1f, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xcd, 0x04, 0x00, 0x00, 0x1f, 0x1c, 0x13, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x66, 0x06, 0x00, 0x00, 0x1f, 0x1e, 0x16, 0x00, 0x00, 0x08, 0x00, 0x00,
    0x33, 0x0b, 0x00, 0x00, 0x1f, 0x1f, 0x1f, 0x00, 0x9a, 0x09, 0x00, 0x00,
    0xcd, 0x0c, 0x00, 0x00, 0x1f, 0x1f, 0x1f, 0x00, 0x33, 0x0b, 0x00, 0x00,
    0xcd, 0x0c, 0x00, 0x00, 0x1f, 0x1f, 0x1f, 0x00, 0x33, 0x0b, 0x00, 0x00,
    0xcd, 0x0c, 0x00, 0x00, 0x1f, 0x1f, 0x1f, 0x00, 0x33, 0x0b, 0x00, 0x00,
    0xcd, 0x0c, 0x00, 0x00, 0x1f, 0x1f, 0x1f, 0x00, 0x33, 0x0b, 0x00, 0x00,
    0xcd, 0x0c, 0x00, 0x00, 0x1f, 0x1f, 0x1f, 0x00, 0x33, 0x0b, 0x00, 0x00,
    0xcd, 0x0c, 0x00, 0x00, 0x1f, 0x1f, 0x1f, 0x00, 0x33, 0x0b, 0x00, 0x00,
    0xcd, 0x0c, 0x00, 0x00, 0x1f, 0x1f, 0x1f, 0x00, 0x33, 0x0b, 0x00, 0x00,
    0xcd, 0x0c, 0x00, 0x00, 0x1f, 0x1f, 0x1f, 0x00, 0x9a, 0x09, 0x00, 0x00,
    0xcd, 0x0c, 0x00, 0x00, 0x1f, 0x1e, 0x18, 0x00, 0x00, 0x08, 0x00, 0x00,
    0x33, 0x0b, 0x00, 0x00, 0x1f, 0x1c, 0x13, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x33, 0x0b, 0x00, 0x00, 0x1f, 0x15, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x33, 0x0b, 0x00, 0x00, 0x1f, 0x10, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x33, 0x0b, 0x00, 0x00, 0x1f, 0x18, 0x0d, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x08, 0x00, 0x00, 0x1f, 0x1f, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xcd, 0x04, 0x00, 0x00, 0x1f, 0x1f, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xcd, 0x04, 0x00, 0x00, 0x1f, 0x1f, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xcd, 0x04, 0x00, 0x00, 0x1f, 0x1f, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xcd, 0x04, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00
};

extern "C" char data_ov004_0224d7b8[] = "m_grd_clf2";

extern "C" const u8 sCheckInGateHourLight[0x20] = {
    0x1f, 0x1f, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x00, 0xcd, 0x04, 0x00, 0x00,
    0x1f, 0x1f, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x00, 0xcd, 0x04, 0x00, 0x00,
    0x1f, 0x1f, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x00
};

extern "C" DebugColor data_ov004_02250c44(20, 31, 20, 31);

extern "C" char data_ov004_0224d794[] = "m_grd_grs";

extern "C" DebugColor data_ov004_02250c50(20, 31, 31, 31);

extern "C" char data_ov004_0224d7a0[] = "m_grd_s_s";

extern "C" char data_ov004_0224d7c4[] = "m_grd_clf3";

extern "C" char *sCheckInGateGroundMats[7] = {data_ov004_0224d77c, data_ov004_0224d7b8, data_ov004_0224d7c4, data_ov004_0224d788,
                                           data_ov004_0224d794, data_ov004_0224d7a0, data_ov004_0224d7ac};

extern "C" DebugColor data_ov004_02250c38(20, 24, 24, 31);

extern "C" char data_ov004_0224d77c[] = "m_grd_clf";

extern "C" ActorProfile sCheckInGateProfile = {(void *(*)())CheckInGate_Create, 0x11, 0x14, 0, 0xc8000, 0x12c000, 0x258000};

// @2225ba8
BOOL CheckInGate::changeSyncState(u32 a) {
    static Fn2 tbl[4] = {&Cls::enterState00, &Cls::enterState01, &Cls::enterState02,
                         &Cls::enterState03};
    if (a < 4) {
        if ((this->*tbl[a])()) {
            tex.syncState = a;
            return TRUE;
        }
        return FALSE;
    }
    return FALSE;
}

// @2225b1c
void CheckInGate::updateState() {
    static Fn1 tbl[4] = {&Cls::updateState00, &Cls::updateState01, &Cls::updateState02,
                         &Cls::updateState03};
    u32 i = tex.syncState;
    if (i < 4) {
        (this->*tbl[i])();
    }
}

// @2225abc
BOOL CheckInGate::enterState00() {
    s32 r = RoomObjRes_GetBca(&res, 0);
    _ZN14BlendAnimModel8initAnimEiiitt(&model, r, 0, 0x1000, 0, 0);
    void *o = _ZN5Model12getRenderObjEv(&model);
    _ZN9ModelAnim7replaceEiiiit(&matAnim, (s32)o, RoomObjRes_GetBma(&res, 0), 0, 0x1000, 0);
    return TRUE;
}

// @2225a84
void CheckInGate::updateState00() {
    _ZN9AnimModel8stepAnimEv(&model);
    _ZN13AnimFrameCtrl4stepEv(&matAnim);
    *F(u32 *, 0x2a8) = F(u32, 0x298);
    setDoorOffset(0);
}

// @2225a14
BOOL CheckInGate::enterState01() {
    s32 r = RoomObjRes_GetBca(&res, 1);
    _ZN14BlendAnimModel8initAnimEiiitt(&model, r, 1, 0x1000, 0, 0);
    void *o = _ZN5Model12getRenderObjEv(&model);
    _ZN9ModelAnim7replaceEiiiit(&matAnim, (s32)o, RoomObjRes_GetBma(&res, 1), 1, 0x1000, 0);
    Snd_PlaySe(0x4eb);
    return TRUE;
}

// @2225984
void CheckInGate::updateState01() {
    s32 v;
    _ZN9AnimModel8stepAnimEv(&model);
    _ZN13AnimFrameCtrl4stepEv(&matAnim);
    *F(u32 *, 0x2a8) = F(u32, 0x298);
    v = F(s32, 0x494);
    Math_ApproachS32Max(&v, -0x2000, 0x100, 0x1000);
    setDoorOffset(v);
    if (_ZN13AnimFrameCtrl10isFinishedEv(((u8 *)this + 0x188))) {
        changeSyncState(2);
    } else if (_ZN13AnimFrameCtrl14hasPassedFrameEi(((u8 *)this + 0x188), 0x3a)) {
        Snd_PlaySe(0x4ed);
    }
}

// @2225924
BOOL CheckInGate::enterState02() {
    s32 r = RoomObjRes_GetBca(&res, 2);
    _ZN14BlendAnimModel8initAnimEiiitt(&model, r, 0, 0x1000, 0, 0);
    void *o = _ZN5Model12getRenderObjEv(&model);
    _ZN9ModelAnim7replaceEiiiit(&matAnim, (s32)o, RoomObjRes_GetBma(&res, 2), 0, 0x1000, 0);
    return TRUE;
}

// @22258e0
void CheckInGate::updateState02() {
    _ZN9AnimModel8stepAnimEv(&model);
    _ZN13AnimFrameCtrl4stepEv(&matAnim);
    *F(u32 *, 0x2a8) = F(u32, 0x298);
    if (Scene_GetCurrent() == 0xb) {
        setDoorOffset(-0x2000);
    }
}

// @2225870
BOOL CheckInGate::enterState03() {
    s32 r = RoomObjRes_GetBca(&res, 3);
    _ZN14BlendAnimModel8initAnimEiiitt(&model, r, 1, 0x1000, 0, 0);
    void *o = _ZN5Model12getRenderObjEv(&model);
    _ZN9ModelAnim7replaceEiiiit(&matAnim, (s32)o, RoomObjRes_GetBma(&res, 3), 1, 0x1000, 0);
    Snd_PlaySe(0x4ec);
    return TRUE;
}

// @22257e4
void CheckInGate::updateState03() {
    model.stepAnim();
    _ZN13AnimFrameCtrl4stepEv((u8 *)this + 0x290);
    *(u32 *)*(u32 *)((u8 *)this + 0x2a8) = *(u32 *)((u8 *)this + 0x298);
    u32 t = F(s32, 0x494);
    Math_ApproachS32Max((s32 *)&t, 0, 0x100, 0x1000);
    setDoorOffset(t);
    if (model.isFinished() != 0) {
        changeSyncState(0);
    } else {
        if (model.hasPassedFrame(0x3a) != 0) {
            Snd_PlaySe(0x4ee);
        }
    }
}

