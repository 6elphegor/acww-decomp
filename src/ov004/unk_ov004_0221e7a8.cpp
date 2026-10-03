// mwcc-version: 1.2/base
// mwcc-flags: -str reuse
#include "types.h"

extern "C" {
void _ZN19PlayerActionRequestC1Ev(void *self);
void _ZN19PlayerActionRequestD1Ev(void *self);
void _ZN19PlayerActionRequest6assignEiis(void *self, s32 a, s32 b, s32 c);
}

extern "C" {
const s16 sSeatSideAngles[4] = {0, -0x4000, 0x4000, 0};
s32 data_ov004_0224d4a4 = 0x400;
char sRoomPlayerMsgFile[16] = "obj_etc_player";
s32 data_ov004_0224d4a8 = 0x400;
s32 sFtrPullDist = -0x2000;
s32 sSeatApproachDist = -0x2000;
s32 data_ov004_0224d4b0 = 0x400;
const s32 sAct12Pos[4] = {0x10800, 0x2200, 0x17100, 0x2000};
s32 sRoomInteractDist = 0xccd;
char sRoomErrorMsgFile[16] = "obj_etc_error";
s32 data_ov004_0224d4b4 = 0x400;
}

// Library base class chain (header GameProc.h rebuilt so that the vtable names the real symbols:
// slot 08 is Character::postCreate(s32), slot 20 takes a u32).
class ProcBase {
public:
    static void *operator new(unsigned long size);
    static void operator delete(void *ptr);

    ProcBase();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual void postCreate(s32 v);
    virtual BOOL vfunc_0c();
    virtual BOOL preDelete();
    virtual BOOL vfunc_14();
    virtual BOOL onExecute();
    virtual BOOL preExecute();
    virtual void vfunc_20(u32 a);
    virtual BOOL onDraw();
    virtual BOOL preDraw();
    virtual BOOL postDraw();
    virtual BOOL vfunc_30();
    virtual BOOL createHeapFitted();
    virtual BOOL createHeap();
    virtual BOOL vfunc_3c();
    virtual ~ProcBase();
};

class GameProc : public ProcBase {
public:
    GameProc() {}
    virtual ~GameProc() {}

    /* 0x04 */ u8 unk_04[0x4c];
};

struct Unk_ov004_02224ee4_Vec {
    s32 x, y, z;
};

struct Unk_0203e5d0_Node {
    /* 0x00 */ u32 unk_00;
    /* 0x04 */ Unk_0203e5d0_Node *unk_04;
    /* 0x08 */ u32 unk_08;
    /* 0x0c */ void *unk_0c;
};

class Actor : public GameProc {
public:
    Actor();
    virtual BOOL vfunc_04();
    virtual BOOL preDelete();
    virtual BOOL vfunc_14();
    virtual BOOL preExecute();
    virtual void vfunc_20(u32 a);
    virtual BOOL preDraw();
    virtual BOOL postDraw();
    virtual ~Actor();

    /* 0x50 */ u8 unk_50[0xc];
    /* 0x5c */ s32 position[3];
    /* 0x68 */ u8 pad_68[0xd4 - 0x68];
};

class Character : public Actor {
public:
    Character();
    virtual ~Character();
    virtual void postCreate(s32 v);
    virtual BOOL vfunc_04();
    virtual BOOL preDelete();
    virtual BOOL preExecute();
    virtual BOOL vfunc_48(void *a);
    virtual void vfunc_4c(u32 a, u8 b);
    virtual void *getInteractionPos();
    virtual BOOL acceptsInteractionOutOfRange(void *a);
    virtual BOOL vfunc_58(void *a);
    virtual BOOL vfunc_5c();

    void setCharId(u32 a);

    /* 0xd4 */ Unk_0203e5d0_Node charNode;
    /* 0xe4 */ s32 interactionRangeSq;
    /* 0xe8 */ u16 charFlags;
    /* 0xea */ u8 unk_ea;
    /* 0xeb */ u8 pad_eb;
};

// ---- model resource sub-object at +0xec (see src/main/unk_02054190.cpp)
class Unk_02055704 {
public:
    Unk_02055704();
    virtual ~Unk_02055704();
    u8 pad_04[0x94];
};

class CachedModel : public Unk_02055704 {
public:
    CachedModel();
    virtual ~CachedModel();
    u32 unk_98;
};

class AnimFrameCtrl {
public:
    virtual ~AnimFrameCtrl();
    inline AnimFrameCtrl() : unk_a4(0), unk_a8(0), unk_ac(0x1000) {}
    u32 unk_a0;
    s32 unk_a4;
    s32 unk_a8;
    s32 unk_ac;
    u32 unk_b0;

    s32 isFinished();
    s32 hasPassedFrame(s32 a);
};

class AnimModel : public CachedModel, public AnimFrameCtrl {
public:
    AnimModel();
    virtual ~AnimModel();
    void *unk_b4;

    s32 attachAnim();
    s32 drawAnimated(void *q);
    void stepAnim();
    BOOL allocAnmObj(void *x);
    // declared in BlendAnimModel in src/main, but it is called on this object
    void func_02054720(s32 a, s32 b, s32 c, u16 d, u16 e);
};

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
class RoomObjRes {
public:
    RoomObjRes();
    ~RoomObjRes();
    void clear();
    inline s32 RoomObjRes_GetBca(u32 i) { return ::RoomObjRes_GetBca(this, i); }
    inline void RoomObjRes_Free() { ::RoomObjRes_Free(this); }
    inline void RoomObjRes_Load(const char *s) { ::RoomObjRes_Load(this, s); }
    inline void *RoomObjRes_GetModel() { return ::RoomObjRes_GetModel(this); }

    u32 unk_00;
    u32 unk_04;
    u32 unk_08[13];
    u32 unk_3c[13];
    u32 unk_70[13];
};

class RoomObjTex {
public:
    inline RoomObjTex() { RoomObjTex_Construct(this); }
    inline void RoomObjTex_Reset() { ::RoomObjTex_Reset(this); }
    inline void RoomObjTex_Load(const char *s) { ::RoomObjTex_Load(this, s); }
    inline u32 RoomObjTex_Get() { return ::RoomObjTex_Get(this); }

    u32 unk_00;
    u8 unk_04;
};

class RoomObjSe {
public:
    inline RoomObjSe() { RoomObj_ConstructSe(this); }
    inline void RoomObj_PlaySe(s32 v) { ::RoomObj_PlaySe(this, v); }
    inline void RoomObj_DeactivateSe() { ::RoomObj_DeactivateSe(this); }
    inline void RoomObj_SetSePos(Unk_ov004_02224ee4_Vec *v) { ::RoomObj_SetSePos(this, v); }
    inline void RoomObj_ActivateSe() { ::RoomObj_ActivateSe(this); }

    u32 unk_00[0x10];
};

extern "C" {

s32 func_020639e8(char *buf, const char *fmt, ...);
s32 RoomObjSync_SetState(u32 v);
s32 RoomObjSync_GetState(u32 v);
void _ZN5Actor8vfunc_20Ev(void *o, u32 v);
void _ZN5Model11setResourceEP16Unk_020553f8_Resj(void *m, void *r, u32 z);
void NNS_G3dBindMdlTex(void *a, u32 b);
void NNS_G3dBindMdlPltt(void *a, u32 b);
}

class RoomObjActor : public Character {
public:
    virtual ~RoomObjActor();
    virtual BOOL vfunc_04();
    virtual BOOL preDelete();
    virtual BOOL preExecute();
    virtual void vfunc_20(u32 a);
    virtual BOOL changeSyncState(u32 v);
    virtual void getSoundPos(Unk_ov004_02224ee4_Vec *out);

    void setSyncSlot(u32 v);
    s32 storeSyncState();
    s32 getSyncState();
    void releaseResources();
    void loadResourcesByName(char *name);
    void loadResources(char *a, char *b);

    /* 0xec */ AnimModel unk_ec;
    /* 0x1a4 */ RoomObjRes unk_1a4;
    /* 0x248 */ RoomObjTex unk_248;
    /* 0x250 */ RoomObjSe unk_250;
};

extern "C" {
void _ZN9CharacterC2Ev(void *self);
void _ZN9AnimModelC1Ev(void *self);
void _ZN10RoomObjResC1Ev(void *self);
extern char _ZTV12RoomObjActor[];
}

typedef RoomObjActor M;
typedef Unk_ov004_02224ee4_Vec Vec;

extern "C" void RoomObj_LoadResourcesByName(char *name, AnimModel *m, RoomObjRes *a, RoomObjTex *b);
extern "C" void RoomObj_LoadResources(char *a, char *b, AnimModel *m, RoomObjRes *aa, RoomObjTex *bb);
extern "C" void RoomObj_ReleaseResources(RoomObjRes *a, RoomObjTex *b);

extern "C" RoomObjActor *_ZN12RoomObjActorC2Ev(RoomObjActor *self) {
    _ZN9CharacterC2Ev(self);
    *(void **)self = _ZTV12RoomObjActor + 8;
    _ZN9AnimModelC1Ev(&self->unk_ec);
    _ZN10RoomObjResC1Ev(&self->unk_1a4);
    RoomObjTex_Construct(&self->unk_248);
    RoomObj_ConstructSe(&self->unk_250);
    self->unk_ea = 0xff;
    return self;
}

RoomObjActor::~RoomObjActor() {
    RoomObj_DestructSe(&unk_250);
    RoomObjTex_Destruct(&unk_248);
}

BOOL RoomObjActor::vfunc_04() {
    if (Character::vfunc_04() == 0) {
        return FALSE;
    }
    setCharId(0);
    unk_250.RoomObj_ActivateSe();
    return TRUE;
}

BOOL RoomObjActor::preExecute() {
    if (Character::preExecute() == 0) {
        return FALSE;
    }
    if (unk_ea != 0xff) {
        s32 v = getSyncState();
        if (unk_248.unk_04 != v) {
            changeSyncState(v);
        }
    }
    return TRUE;
}

void RoomObjActor::vfunc_20(u32 a) {
    Vec out;
    getSoundPos(&out);
    unk_250.RoomObj_SetSePos(&out);
    _ZN5Actor8vfunc_20Ev(this, a);
}

BOOL RoomObjActor::preDelete() {
    if (Character::preDelete() == 0) {
        return FALSE;
    }
    unk_250.RoomObj_DeactivateSe();
    return TRUE;
}

void RoomObjActor::getSoundPos(Vec *out) {
    out->x = position[0];
    out->y = position[1];
    out->z = position[2];
}

BOOL RoomObjActor::changeSyncState(u32 v) {
    return TRUE;
}

extern "C" void RoomObj_LoadResources(char *a, char *b, AnimModel *m, RoomObjRes *aa, RoomObjTex *bb) {
    aa->RoomObjRes_Load(a);
    bb->RoomObjTex_Load(b);
    _ZN5Model11setResourceEP16Unk_020553f8_Resj(m, aa->RoomObjRes_GetModel(), 0);
    void *p = aa->RoomObjRes_GetModel();
    NNS_G3dBindMdlTex(p, bb->RoomObjTex_Get());
    void *q = aa->RoomObjRes_GetModel();
    NNS_G3dBindMdlPltt(q, bb->RoomObjTex_Get());
}

extern "C" void RoomObj_LoadResourcesByName(char *name, AnimModel *m, RoomObjRes *a, RoomObjTex *b) {
    char x[0x28];
    char y[0x28];
    func_020639e8(x, "/roomObj/%s.arc", name);
    func_020639e8(y, "/roomObj/%s.nsbtx", name);
    RoomObj_LoadResources(x, y, m, a, b);
}

void RoomObjActor::loadResources(char *a, char *b) {
    RoomObj_LoadResources(a, b, &unk_ec, &unk_1a4, &unk_248);
}

void RoomObjActor::loadResourcesByName(char *name) {
    char a[0x28];
    char b[0x28];
    func_020639e8(a, "/roomObj/%s.arc", name);
    func_020639e8(b, "/roomObj/%s.nsbtx", name);
    loadResources(a, b);
}

extern "C" void RoomObj_ReleaseResources(RoomObjRes *a, RoomObjTex *b) {
    a->RoomObjRes_Free();
    b->RoomObjTex_Reset();
}

void RoomObjActor::releaseResources() {
    RoomObj_ReleaseResources(&unk_1a4, &unk_248);
}

void RoomObjActor::setSyncSlot(u32 v) {
    unk_ea = v;
}

s32 RoomObjActor::getSyncState() {
    if (unk_ea != 0xff) {
        return RoomObjSync_GetState(unk_ea);
    }
    return 0;
}

s32 RoomObjActor::storeSyncState() {
    if (unk_ea != 0xff) {
        return RoomObjSync_SetState(unk_ea);
    }
    return 0;
}

// 02224ee4 is the first function
RoomObjRes::RoomObjRes() {
    clear();
}

RoomObjRes::~RoomObjRes() {
    clear();
}

void RoomObjRes::clear() {
    unk_00 = 0;
    unk_04 = 0;
    u32 i;
    for (i = 0; i < 13; i++) {
        unk_3c[i] = 0;
        unk_08[i] = 0;
        unk_70[i] = 0;
    }
}


namespace ns_0222459c {

struct Unk_ov004_022245ac_V3 {
    s32 x, y, z;
};

class Unk_ov004_022245ac_Msg {
public:
    inline Unk_ov004_022245ac_Msg() { _ZN19PlayerActionRequestC1Ev(this); }
    inline void func_0200e2c0(u32 a, u32 b, u32 c) { _ZN19PlayerActionRequest6assignEiis(this, a, b, c); }
    u8 pad_00[0xc];
    u8 unk_0c;
    u8 pad_0d[0x1c - 0xd];
};

struct Unk_ov004_022245ac_Rec {
    Unk_ov004_022245ac_V3 pos;
    u8 flag;
};

struct Unk_ov004_022245ac_Obj {
    u8 pad_00[0x5c];
    Unk_ov004_022245ac_V3 position;
    u8 pad_68[0x8e - 0x68];
    s16 rotY;
    u8 pad_90[0x700 - 0x90];
    s32 animId;
    u8 pad_704[0x7d0 - 0x704];
    u8 actionWork;
    u8 pad_7d1[0x7ec - 0x7d1];
    s32 action;
    u8 pad_7f0[0x7f8 - 0x7f0];
    s32 actionPriority;
    u32 sessionSlot;
    u8 pad_800[4];
    s32 exitMode;
    u8 pad_808[0x8e6 - 0x808];
    u8 lastInputSide;
    u8 pad_8e7[0xc80 - 0x8e7];
    u16 netSeq;
};

struct Unk_ov004_02224d10 {
    u32 unk_00;
    u32 unk_04;
    u32 unk_08[13];
    u32 unk_3c[13];
    u32 unk_70[13];
};

typedef Unk_ov004_022245ac_Obj Obj;
typedef Unk_ov004_022245ac_V3 V3;
typedef Unk_ov004_022245ac_Msg Msg;
typedef Unk_ov004_022245ac_Rec Rec;
typedef Unk_ov004_02224d10 Res;

extern "C" {
extern void *gCommManager;
extern void *gBgHeap;
extern void *gCurrentHeap;

Obj *PlayerActor_Get(u32 idx);
s32 PlayerActor_TestSlotFlag(s32 a, s32 b);
s32 _ZN11PlayerActor11pushRequestEP19PlayerActionRequest(Obj *o, Msg *m);
s32 _ZN11CommManager11isLocalSlotEj(void *g, u32 a);
s32 _ZN12Unk_02006d1418netFollowTransformEv(Obj *o);
s32 _ZN12Unk_020102ec11advanceAnimEv(Obj *o);
void _ZN12Unk_020102ec19submitSceneColliderEv(Obj *o);
BOOL Scene_InUnk6To8(void);
s32 _ZN11PlayerActor17getInputMagnitudeEv(Obj *o);
s32 _ZN11PlayerActor20getInputSideRelativeEv(Obj *o);
s32 _ZN11PlayerActor20getEffectivePriorityEv(Obj *o);
s32 Math_AngleToSide(s16 a);
s32 PlayerActor_GetGender(Obj *o);
void _ZN12Unk_02006d146playSeEj(Obj *o, u32 a);
void _ZN12Unk_020102ec9startAnimEijt(Obj *o, s32 a, u32 b, u32 c);
void _ZN12Unk_020102ec13startAnimOnceEijt(Obj *o, s32 a, u32 b, u32 c);
s32 TalkRequest_FinishSceneEntry(void);
s32 _ZN12Unk_0200769421getActionDonePriorityEj(Obj *o, s32 a);
s32 _ZN12Unk_02006d1413loadInputModeEv(Obj *o);
s32 _ZN12Unk_02006d1414testActionFlagEj(Obj *o, u32 a);
void _ZN12Unk_02006d1415clearActionFlagEj(Obj *o, u32 a);
void _ZN12Unk_02006d1413setActionFlagEj(Obj *o, u32 a);
void PlayerActor_GetHat(u16 *p, Obj *o);
void PlayerActor_GetFaceItem(u16 *p, Obj *o);
s32 PlayerActor_GetHairStyle(Obj *o);
s32 PlayerActor_GetHairColor(Obj *o);
s32 _ZN12Unk_02006d1416requestHatChangeEPthhh(Obj *o, u16 *v, s32 a, s32 b, u32 c);
void _ZN12Unk_02006d1421requestFaceItemChangeEPt(Obj *o, u16 *v);
s32 Snd_SeEmitterPlayHeld(s32 a, s32 b, s32 c, s32 d);
s32 func_02003e70(s32 a, s32 b, s32 c, s32 d);
s32 _ZN12Unk_02003c3013func_02003e50Ev(s32 a);
s32 _ZN12Unk_02003c4013func_02003e80EP16Unk_02003a6c_Vec(s32 a, V3 *v);
s32 _ZN12Unk_02003c3013func_02003eccEv(s32 a);
void func_020f43fc(void *p);
void func_020f440c(void *p);
s32 File_LoadAlloc(u32 id, void *g, s32 a, u32 b);
void *NNS_G3dGetTex(s32 a);
void Gfx3d_LoadTexAndPltt(void *p, u32 a);
u32 Gfx3d_CopyTex(void *p, void *g);
void Mem_Free(s32 a);
void Heap_Free(void *g, u32 p);
s32 func_020639e8(char *buf, char *fmt, ...);
s32 func_02101340(void *buf, char *name, u32 data);
void *func_021012bc(char *name);
void func_02101310(void *buf);
void *NNS_G3dGetMdlSet(void *p);
void *func_021065dc(void *p);
u32 func_021065f8(void *p, u32 a);
void *func_02106618(void *p);
u32 func_02106634(void *p, u32 a);
void *func_02106654(void *p);
u32 func_02106670(void *p, u32 a);

s32 PlayerActor_RequestBedRollCheck(Obj *o, u32 a, u32 b, u32 c);
s32 FtrMgr_CheckBedStepFront(void *p, s32 a);
s32 FtrMgr_CheckBedStepBack(void *p, s32 a);
s32 PlayerActor_RequestDrinkCoffee(Obj *o, u32 a, u32 b);
s32 PlayerActor_RequestAct12(Obj *o, u32 a, u32 b);
s32 PlayerActor_RequestSit(Obj *o, u32 a, u32 b, u32 c);
s32 PlayerActor_RequestPhoneHangUp(Obj *o, u32 a, u32 b);
s32 PlayerActor_RequestPhonePickUp(Obj *o, u32 a, u32 b);
s32 PlayerActor_RequestHaircutStart(Obj *o, u32 a, u32 b, u32 c, s32 e);
s32 PlayerActor_RequestAct37(Obj *o, s32 a, s32 b);
s32 PlayerActor_RequestAct36(Obj *o, u32 a, u32 b, u32 c, u32 d, u32 e, u32 f, s32 g);
s32 PlayerActor_RequestDoorWalkOut(Obj *o, V3 *v, u32 a, u32 b);
s32 PlayerActor_RequestLeaveRoom(Obj *o, s32 a, s32 b);
s32 PlayerActor_RequestStorageClose(Obj *o, u32 a, s32 b, s32 c);
s32 PlayerActor_RequestStorageOpen(Obj *o, u8 b, u32 x, u32 y, s16 c, s32 d, s32 e);
s32 PlayerActor_RequestStandUpFront(Obj *o, s32 a, s32 b);
s32 PlayerActor_RequestStandUpSide1(Obj *o, s32 a, s32 b);
s32 PlayerActor_RequestStandUpSide2(Obj *o, u32 a, u32 b);
s32 PlayerActor_RequestSeatApproach(Obj *o, u32 a, u32 b, s16 c, u32 d, s32 e, s32 f);
s32 PlayerActor_RequestGetOutOfBed(Obj *o, u32 a, u32 b, u32 c, s32 d);
s32 PlayerActor_RequestBedApproach(Obj *o, u32 a, u32 b, s32 c, u32 d, s32 e, s32 f);

void PlayerActor_GetOutOfBedCheckSetWork(Rec *r, V3 *v, u32 f);
s32 PlayerActor_RequestGetOutOfBedCheck(Obj *o, u32 a, u32 b, u32 c);
void PlayerActor_GetOutOfBedCheckSetArgs(u8 *p, u32 v);
void PlayerActor_MainLieInBed(Obj *o);
void PlayerActor_LieInBedReadInput(Obj *o);
void PlayerActor_EndLieInBed(Obj *o, s32 a);
void PlayerActor_NetLieInBed(Obj *o, s32 a);
void PlayerActor_SetupLieInBed(Obj *o, u8 *p, s32 c);
void PlayerActor_LieInBedSetWork(u8 *p, u32 v);
s32 PlayerActor_RequestLieInBed(Obj *o, u32 a, u32 b, u32 c);
void PlayerActor_LieInBedSetArgs(u8 *p, u32 v);
s32 PlayerActor_GetPosIfInAction(V3 *out, u32 idx, s32 st);
}

enum Unk_ov004_02224a80_Limit { Unk_ov004_02224a80_LIMIT_6 = 6 };

extern "C" s32 RoomObjRes_Load(Res *self, u32 id) {
    if (self->unk_00 == 0) {
        char buf[0x24];
        u8 res[0x68];
        self->unk_00 = File_LoadAlloc(id, gBgHeap, 4, 0);
        if (self->unk_00) {
            if (func_02101340(res, "RMO", self->unk_00)) {
                u32 i, z;
                void *h = func_021012bc("RMO:a/bmd/bmd0");
                if (h) {
                    u8 *r = (u8 *)NNS_G3dGetMdlSet(h);
                    self->unk_04 = (u32)(r + *(u32 *)(r + *(u16 *)(r + 0xe) + 0xc));
                }
                for (i = 0, z = i; i < 13;) {
                    func_020639e8(buf, "RMO:a/bca/bca%d", i);
                    { void *h = func_021012bc(buf); if (h) {
                        self->unk_08[i] = func_021065f8(func_021065dc(h), z);
                    } }
                    if (self->unk_08[i] == 0) {
                        break;
                    }
                    i++;
                }
                for (i = 0, z = i; i < 13;) {
                    func_020639e8(buf, "RMO:a/bma/bma%d", i);
                    { void *h = func_021012bc(buf); if (h) {
                        self->unk_3c[i] = func_02106634(func_02106618(h), z);
                    } }
                    if (self->unk_3c[i] == 0) {
                        break;
                    }
                    i++;
                }
                for (i = 0, z = i; i < 13;) {
                    func_020639e8(buf, "RMO:a/bta/bta%d", i);
                    { void *h = func_021012bc(buf); if (h) {
                        self->unk_70[i] = func_02106670(func_02106654(h), z);
                    } }
                    if (self->unk_70[i] == 0) {
                        break;
                    }
                    i++;
                }
                func_02101310(res);
                return 1;
            }
        }
    }
    return 0;
}

extern "C" void RoomObjRes_Free(Res *p) {
    if (p->unk_00) {
        Heap_Free(gBgHeap, p->unk_00);
        p->unk_00 = 0;
    }
}

extern "C" u32 RoomObjRes_GetBca(Res *p, u32 i) {
    if (i < 13) {
        return p->unk_08[i];
    }
    return 0;
}

extern "C" u32 RoomObjRes_GetBma(Res *p, u32 i) {
    if (i < 13) {
        return p->unk_3c[i];
    }
    return 0;
}

extern "C" u32 RoomObjRes_GetBta(Res *p, u32 i) {
    if (i < 13) {
        return p->unk_70[i];
    }
    return 0;
}

extern "C" u32 RoomObjRes_GetModel(Res *p) {
    return p->unk_04;
}

extern "C" void RoomObjTex_Construct(Res *p) {
    p->unk_00 = 0;
}

extern "C" void RoomObjTex_Destruct(void) {
}

extern "C" s32 RoomObjTex_Load(Res *self, u32 id) {
    s32 r4 = File_LoadAlloc(id, gCurrentHeap, -4, 0);
    if (r4) {
        void *r6 = NNS_G3dGetTex(r4);
        Gfx3d_LoadTexAndPltt(r6, 0);
        self->unk_00 = Gfx3d_CopyTex(r6, gBgHeap);
        Mem_Free(r4);
        return 1;
    }
    return 0;
}

extern "C" void RoomObjTex_Reset(Res *p) {
    p->unk_00 = 0;
}

extern "C" u32 RoomObjTex_Get(Res *p) {
    return p->unk_00;
}

extern "C" Res *RoomObj_ConstructSe(Res *p) {
    func_020f440c(p);
    return p;
}

extern "C" Res *RoomObj_DestructSe(Res *p) {
    func_020f43fc(p);
    return p;
}

extern "C" s32 RoomObj_ActivateSe(s32 a) {
    return _ZN12Unk_02003c3013func_02003eccEv(a);
}

extern "C" s32 RoomObj_SetSePos(s32 a, V3 *p) {
    V3 v;
    v.x = p->x;
    v.y = p->y;
    v.z = p->z;
    return _ZN12Unk_02003c4013func_02003e80EP16Unk_02003a6c_Vec(a, &v);
}

extern "C" s32 RoomObj_DeactivateSe(s32 a) {
    return _ZN12Unk_02003c3013func_02003e50Ev(a);
}

extern "C" s32 RoomObj_PlaySe(s32 a, s32 b) {
    return func_02003e70(a, b, 0x7f, 0);
}

extern "C" s32 RoomObj_PlaySeHeld(s32 a, s32 b) {
    return Snd_SeEmitterPlayHeld(a, b, 0x7f, 0);
}

extern "C" s32 PlayerActor_TestLocalFlag0F(void) {
    return PlayerActor_TestSlotFlag(15, 4);
}

extern "C" s32 PlayerActor_TestLocalFlag02(void) {
    return PlayerActor_TestSlotFlag(2, 4);
}

extern "C" s32 PlayerActor_GetPosIfInAction(V3 *out, u32 idx, s32 st) {
    Obj *o = PlayerActor_Get(idx);
    if (o && o->action == st) {
        V3 *pv = &o->position;
        out->x = o->position.x;
        out->y = pv->y;
        out->z = pv->z;
        return 1;
    }
    return 0;
}

extern "C" s32 PlayerActor_GetPosIfSitting(V3 *out, u32 idx) {
    return PlayerActor_GetPosIfInAction(out, idx, 0x28);
}

extern "C" s32 PlayerActor_GetPosIfInBed(V3 *out, u32 idx) {
    return PlayerActor_GetPosIfInAction(out, idx, 8);
}

extern "C" s32 PlayerActor_LocalSetHeadwearHidden(u32 a) {
    Obj *o = PlayerActor_Get(4);
    if (o) {
        u16 v[2];
        u16 t[2];
        if (a) {
            if (_ZN12Unk_02006d1414testActionFlagEj(o, 0xc)) {
                PlayerActor_GetHat(&t[0], o);
                v[0] = t[0];
                PlayerActor_GetFaceItem(&t[1], o);
                v[1] = t[1];
                _ZN12Unk_02006d1415clearActionFlagEj(o, 0xc);
            } else {
                return 1;
            }
        } else {
            if (!_ZN12Unk_02006d1414testActionFlagEj(o, 0xc)) {
                v[1] = 0xfff1;
                v[0] = 0xfff1;
                _ZN12Unk_02006d1413setActionFlagEj(o, 0xc);
            } else {
                return 1;
            }
        }
        s32 r4 = PlayerActor_GetHairStyle(o);
        s32 r3 = PlayerActor_GetHairColor(o);
        if (_ZN12Unk_02006d1416requestHatChangeEPthhh(o, v, r4, r3, 1)) {
            _ZN12Unk_02006d1421requestFaceItemChangeEPt(o, &v[1]);
        }
        return 1;
    }
    return 0;
}

extern "C" s32 PlayerActor_LocalRequestBedApproach(u32 *a, u32 *b, s16 *c, s32 d) {
    Obj *o = PlayerActor_Get(4);
    if (o) {
        Unk_ov004_02224a80_Limit k = Unk_ov004_02224a80_LIMIT_6;
        if (k <= _ZN11PlayerActor20getEffectivePriorityEv(o)) {
            return 0;
        }
        u32 f = Math_AngleToSide(*c - d) == 1 ? 1 : 0;
        return PlayerActor_RequestBedApproach(o, *a, *b, *c, f, k, -1);
    }
    return 0;
}

extern "C" s32 PlayerActor_LocalRequestGetOutOfBed(u32 a, u32 b) {
    Obj *o = PlayerActor_Get(4);
    if (o) {
        if (PlayerActor_RequestGetOutOfBed(o, a, b, 6, -1)) {
            _ZN12Unk_02006d1413loadInputModeEv(o);
            return 1;
        }
    }
    return 0;
}

extern "C" s32 PlayerActor_LocalRequestSeatApproach(u32 *a, u32 *b, s16 *c, u8 *d) {
    Obj *o = PlayerActor_Get(4);
    if (o) {
        Unk_ov004_02224a80_Limit k = Unk_ov004_02224a80_LIMIT_6;
        if (k <= _ZN11PlayerActor20getEffectivePriorityEv(o)) {
            return 0;
        }
        return PlayerActor_RequestSeatApproach(o, *a, *b, *c + 0x8000, *d, k, -1);
    }
    return 0;
}

extern "C" s32 PlayerActor_LocalRequestStandUp(s32 t) {
    Obj *o = PlayerActor_Get(4);
    if (o) {
        switch (t) {
        case 0:
            PlayerActor_RequestStandUpFront(o, 6, -1);
            break;
        case 1:
            PlayerActor_RequestStandUpSide1(o, 6, -1);
            break;
        case 2:
            PlayerActor_RequestStandUpSide2(o, 6, -1);
            break;
        }
    }
    return 0;
}

extern "C" s32 PlayerActor_LocalRequestStorageOpen(u32 *a, u32 *b, u32 *c, s16 *d) {
    Obj *o = PlayerActor_Get(4);
    if (o) {
        return PlayerActor_RequestStorageOpen(o, *a, *b, *c, *d, 6, -1);
    }
    return 0;
}

extern "C" s32 PlayerActor_LocalRequestStorageClose(u32 *p) {
    Obj *o = PlayerActor_Get(4);
    if (o) {
        return PlayerActor_RequestStorageClose(o, *p, 6, -1);
    }
    return 0;
}

extern "C" s32 PlayerActor_LocalRequestLeaveRoom(void) {
    Obj *o = PlayerActor_Get(4);
    if (o) {
        if (o->exitMode == 4) {
            V3 v;
            V3 *pv = &o->position;
            v.x = o->position.x;
            v.y = pv->y;
            v.z = pv->z;
            v.z += 0x6000;
            return PlayerActor_RequestDoorWalkOut(o, &v, 6, -1);
        }
        return PlayerActor_RequestLeaveRoom(o, 6, -1);
    }
    return 0;
}

extern "C" s32 PlayerActor_LocalRequestAct36(u32 a, u32 *b, u8 *c, u32 *d, u32 e) {
    Obj *o = PlayerActor_Get(4);
    if (o) {
        return PlayerActor_RequestAct36(o, a, *b, *c, *d, e, 6, -1);
    }
    return 0;
}

extern "C" s32 PlayerActor_LocalRequestAct37(void) {
    Obj *o = PlayerActor_Get(4);
    if (o) {
        return PlayerActor_RequestAct37(o, 6, -1);
    }
    return 0;
}

extern "C" s32 PlayerActor_LocalRequestHaircutStart(u8 *a, u8 *b) {
    Obj *o = PlayerActor_Get(4);
    if (o) {
        return PlayerActor_RequestHaircutStart(o, *a, *b, 6, -1);
    }
    return 0;
}

extern "C" s32 PlayerActor_LocalRequestPhonePickUp(void) {
    Obj *o = PlayerActor_Get(4);
    if (o) {
        return PlayerActor_RequestPhonePickUp(o, 6, -1);
    }
    return 0;
}

extern "C" s32 PlayerActor_LocalRequestPhoneHangUp(void) {
    Obj *o = PlayerActor_Get(4);
    if (o) {
        return PlayerActor_RequestPhoneHangUp(o, 6, -1);
    }
    return 0;
}

extern "C" s32 PlayerActor_LocalRequestSit(void) {
    Obj *o = PlayerActor_Get(4);
    if (o) {
        return PlayerActor_RequestSit(o, 10, 6, -1);
    }
    return 0;
}

extern "C" s32 PlayerActor_LocalRequestAct12(void) {
    Obj *o = PlayerActor_Get(4);
    if (o) {
        o->actionPriority = _ZN12Unk_0200769421getActionDonePriorityEj(o, o->action);
        return PlayerActor_RequestAct12(o, 5, -1);
    }
    return 0;
}

extern "C" s32 PlayerActor_LocalRequestDrinkCoffee(void) {
    Obj *o = PlayerActor_Get(4);
    if (o) {
        return PlayerActor_RequestDrinkCoffee(o, 6, -1);
    }
    return 0;
}

extern "C" BOOL PlayerActor_LocalPlayAnim98(void) {
    Obj *o = PlayerActor_Get(4);
    if (o) {
        _ZN12Unk_020102ec13startAnimOnceEijt(o, 0x98, 0, 0);
        return TRUE;
    }
    return FALSE;
}

extern "C" void PlayerActor_LieInBedSetArgs(u8 *p, u32 v) {
    *p = v;
}

extern "C" s32 PlayerActor_RequestLieInBed(Obj *o, u32 a, u32 b, u32 c) {
    Msg m;
    m.func_0200e2c0(8, b, c);
    PlayerActor_LieInBedSetArgs(&m.unk_0c, a);
    s32 r = _ZN11PlayerActor11pushRequestEP19PlayerActionRequest(o, &m);
    _ZN19PlayerActionRequestD1Ev(&m);
    return r;
}

extern "C" void PlayerActor_LieInBedSetWork(u8 *p, u32 v) {
    *p = v;
}

extern "C" void PlayerActor_SetupLieInBed(Obj *o, u8 *p, s32 c) {
    u8 *q = p + 0xc;
    u8 *rec = &o->actionWork;
    if (o->animId != 0x11) {
        if (c == 0xf || c == 0xd || !_ZN11CommManager11isLocalSlotEj(gCommManager, o->sessionSlot)) {
            _ZN12Unk_020102ec9startAnimEijt(o, 0x11, 0, 0);
        } else {
            _ZN12Unk_020102ec9startAnimEijt(o, 0x11, 3, 0);
        }
    }
    PlayerActor_LieInBedSetWork(rec, *q);
    if (*rec == 0 && _ZN11CommManager11isLocalSlotEj(gCommManager, o->sessionSlot)) {
        TalkRequest_FinishSceneEntry();
    }
}

extern "C" void PlayerActor_NetLieInBed(Obj *o, s32 a) {
    if (o->action == 8) {
        o->netSeq = a;
    } else {
        PlayerActor_RequestLieInBed(o, 0, 6, a);
    }
}

extern "C" void PlayerActor_EndLieInBed(Obj *o, s32 a) {
    if (Scene_InUnk6To8() && a == 10 && o->actionWork == 0) {
        if (PlayerActor_GetGender(o)) {
            _ZN12Unk_02006d146playSeEj(o, 0x4cd);
        } else {
            _ZN12Unk_02006d146playSeEj(o, 0x4cc);
        }
    }
}

extern "C" void PlayerActor_LieInBedReadInput(Obj *o) {
    s32 r;
    if (!Scene_InUnk6To8()) {
        if (_ZN11PlayerActor17getInputMagnitudeEv(o) > 0) {
            s32 t = _ZN11PlayerActor20getInputSideRelativeEv(o);
            if (o->lastInputSide != t + 1) {
                o->lastInputSide = t + 1;
                switch (t) {
                case 0:
                    r = FtrMgr_CheckBedStepFront(&o->position, o->rotY);
                    break;
                case 1:
                    r = FtrMgr_CheckBedStepBack(&o->position, o->rotY);
                    break;
                }
                if (r == 1) {
                    PlayerActor_RequestBedRollCheck(o, t == 0 ? 1 : 0, 6, -1);
                } else if (r == 2) {
                    PlayerActor_RequestGetOutOfBedCheck(o, t == 0 ? 1 : 0, 6, -1);
                }
            }
        }
    }
}

extern "C" void PlayerActor_MainLieInBed(Obj *o) {
    _ZN12Unk_02006d1418netFollowTransformEv(o);
    _ZN12Unk_020102ec11advanceAnimEv(o);
    _ZN12Unk_020102ec19submitSceneColliderEv(o);
    if (_ZN11CommManager11isLocalSlotEj(gCommManager, o->sessionSlot)) {
        PlayerActor_LieInBedReadInput(o);
    }
}

extern "C" void PlayerActor_GetOutOfBedCheckSetArgs(u8 *p, u32 v) {
    *p = v;
}

extern "C" s32 PlayerActor_RequestGetOutOfBedCheck(Obj *o, u32 a, u32 b, u32 c) {
    Msg m;
    m.func_0200e2c0(9, b, c);
    PlayerActor_GetOutOfBedCheckSetArgs(&m.unk_0c, a);
    s32 r = _ZN11PlayerActor11pushRequestEP19PlayerActionRequest(o, &m);
    _ZN19PlayerActionRequestD1Ev(&m);
    return r;
}

extern "C" void PlayerActor_GetOutOfBedCheckSetWork(Rec *r, V3 *v, u32 f) {
    r->pos.x = v->x;
    r->pos.y = v->y;
    r->pos.z = v->z;
    r->flag = f;
}


}  // namespace ns_0222459c

namespace ns_02223c38 {

struct Unk_ov004_02223c38_V3 {
    s32 x, y, z;
};

struct Unk_ov004_02223c38_V3c {
    s32 x, y, z;
    Unk_ov004_02223c38_V3c() {}
    ~Unk_ov004_02223c38_V3c() {}
};

struct Unk_ov004_02223c38_Rec {
    s32 x;
    s32 z;
    s16 h;
    u8 unk_0a;
    u8 unk_0b;
    u8 unk_0c;
};

class Unk_ov004_02223c38_Msg {
public:
    inline Unk_ov004_02223c38_Msg() { _ZN19PlayerActionRequestC1Ev(this); }
    inline void func_0200e2c0(s32 a, s32 b, s32 c) { _ZN19PlayerActionRequest6assignEiis(this, a, b, c); }
    u8 pad_00[0xc];
    u8 unk_0c;
    u8 pad_0d[0x1c - 0xd];
};

struct Unk_ov004_02223c38_Sub2cc {
    u32 unk_00;
};

struct Unk_ov004_02223c38_Bits16 {
    u16 lo : 7;
    u16 mid : 4;
    u16 hi : 5;
};

struct Unk_ov004_02223c38_Obj {
    u8 pad_00[0x5c];
    Unk_ov004_02223c38_V3 position;
    Unk_ov004_02223c38_V3 prevPosition;
    u8 pad_74[0x8e - 0x74];
    s16 rotY;
    u8 pad_90[0x1c0 - 0x90];
    u8 subCollider[0x3c];
    u8 unk_1fc;
    u8 pad_1fd[0x2cc - 0x1fd];
    Unk_ov004_02223c38_Sub2cc unk_2cc;
    u8 pad_2d0[0x7d0 - 0x2d0];
    Unk_ov004_02223c38_Rec actionWork;
    u8 pad_7e0[0x7ec - 0x7e0];
    u32 action;
    u8 pad_7f0[0x7f8 - 0x7f0];
    s32 actionPriority;
    u32 sessionSlot;
    u8 pad_800[0x8e6 - 0x800];
    u8 lastInputSide;
    u8 pad_8e7[0x8ec - 0x8e7];
    u8 netData[8];
};

typedef Unk_ov004_02223c38_Obj Obj;
typedef Unk_ov004_02223c38_V3 V3;
typedef Unk_ov004_02223c38_V3c V3c;
typedef Unk_ov004_02223c38_Rec Rec;
typedef Unk_ov004_02223c38_Msg Msg;
typedef Unk_ov004_02223c38_Bits16 Bits16;

extern "C" {
extern void *gCommManager;
extern u8 gFieldSceneKind;
extern s16 data_02135f44[];

void _ZN12Unk_02006d1418netFollowTransformEv(Obj *o);
void _ZN12Unk_020102ec11advanceAnimEv(Obj *o);
void _ZN12Unk_020102ec18updateBodyColliderEv(Obj *o);
void _ZN12Unk_02006d146playSeEj(Obj *o, u32 a);
void _ZN12Unk_020102ec13startAnimOnceEijt(Obj *o, s32 a, u32 b, u32 c);
void _ZN12Unk_020102ec9startAnimEijt(Obj *o, s32 a, u32 b, u32 c);
void _ZN12Unk_020102ec9setAngleYEPs(Obj *o, s16 *a);
s32 _ZN11PlayerActor11pushRequestEP19PlayerActionRequest(Obj *o, Msg *m);
s32 _ZN11CommManager11isLocalSlotEj(void *g, u32 a);
s32 _ZN13AnimFrameCtrl10isFinishedEv(void *p);
s32 _ZN13AnimFrameCtrl14hasPassedFrameEi(void *p, u32 a);
s32 PlayerActor_OffsetByAngle(V3 *out, Obj *o, V3 *pos, s16 *ang, s32 *d);
s32 _ZN12Unk_0200769421getActionDonePriorityEj(Obj *o, u32 a);
void _ZN12Unk_02006d1412requestAct10Esji(Obj *o, u32 a, u32 b, s32 c);
void _ZN11PlayerActor11requestWaitEjjj(Obj *o, s32 a, s32 b, s32 c);
u16 *PlayerSession_GetTanTimer(void);
Bits16 *PlayerSession_GetLastPlayDate(void);
u8 *PlayerSession_GetSessionFlags(void);
u32 PlayerActor_GetPlayerData(Obj *o);
u32 PlayerActor_GetTan(Obj *o);
u32 _ZN10PlayerData15getLastPlayDateEv(void);
s32 PlayerActor_CompareLastPlayDateNow(Obj *o);
u16 *DebugVar_GetPtr(s32 a, s32 b);
s32 Ground_GetDefaultY(u32 a);
void _ZN12Unk_020102ec24updateCollidersAtDrawPosEPj(Obj *o, V3 *v);
void _ZN12Unk_020102ec14setSubColliderEjjj(Obj *o, V3 *v, s32 a, s32 b);
void _ZN13ActorCollider6submitEv(void *p);
s32 func_01ffcb0c(s32 a, s32 b);
s32 BedSpot_GetRollResult(void);
void BedSpot_RequestRoll(V3 *v);
void BedSpot_Release(void);
s32 BedSpot_GetGetOutResult(void);
void BedSpot_RequestGetOut(V3 *v);

void FtrMgr_PlaySeatSound2At(V3 *p);
s32 PlayerActor_RequestLieInBed(Obj *o, u32 a, s32 b, s32 c);
s32 PlayerActor_GetOutOfBedCheckSetWork(Rec *r, V3 *v, u32 c);

void PlayerActor_BedApproachSetArgs(Rec *t, s32 x, s32 z, s16 h, u8 a, u8 b);
void PlayerActor_MainBedRoll(Obj *o);
void PlayerActor_BedRollCheckEnd(Obj *o);
void PlayerActor_EndBedRoll(Obj *o);
void PlayerActor_NetBedRoll(Obj *o, s32 a);
void PlayerActor_SetupBedRoll(Obj *o, Msg *m);
void PlayerActor_BedRollGetNetData(u8 *p, u8 *out);
void PlayerActor_BedRollSetNetData(u8 *p, u32 v);
void PlayerActor_BedRollSetWork(s32 *p, s32 x, s32 z);
s32 PlayerActor_RequestBedRoll(Obj *o, u32 a, s32 b, s32 c);
void PlayerActor_BedRollSetArgs(u8 *p, u32 v);
void PlayerActor_MainBedRollBlocked(Obj *o);
void PlayerActor_BedRollBlockedCheckEnd(Obj *o);
void PlayerActor_NetBedRollBlocked(Obj *o, s32 a);
void PlayerActor_SetupBedRollBlocked(Obj *o, Msg *m);
void PlayerActor_BedRollBlockedGetNetData(u8 *p, u8 *out);
void PlayerActor_BedRollBlockedSetNetData(u8 *p, u32 v);
s32 PlayerActor_RequestBedRollBlocked(Obj *o, u32 a, s32 b, s32 c);
void PlayerActor_BedRollBlockedSetArgs(u8 *p, u32 v);
void PlayerActor_MainBedRollCheck(Obj *o);
void PlayerActor_BedRollCheckResult(Obj *o);
void PlayerActor_NetBedRollCheck(Obj *o, s32 a);
void PlayerActor_SetupBedRollCheck(Obj *o, Msg *m);
void PlayerActor_BedRollCheckGetNetData(u8 *p, u8 *out);
void PlayerActor_BedRollCheckSetNetData(u8 *p, u32 v);
void PlayerActor_BedRollCheckSetWork(u8 *p, u32 v);
s32 PlayerActor_RequestBedRollCheck(Obj *o, u32 a, s32 b, s32 c);
void PlayerActor_BedRollCheckSetArgs(u8 *p, u32 v);
void PlayerActor_MainGetOutOfBed(Obj *o);
void PlayerActor_GetOutOfBedCheckEnd(Obj *o);
void PlayerActor_GetOutOfBedUpdateHeight(Obj *o);
void PlayerActor_GetOutOfBedUpdateAnim(Obj *o);
void PlayerActor_EndGetOutOfBed(Obj *o);
void PlayerActor_NetGetOutOfBed(Obj *o, s32 a);
void PlayerActor_SetupGetOutOfBed(Obj *o, Msg *m);
void PlayerActor_GetOutOfBedGetNetData(u8 *p, u8 *out);
void PlayerActor_GetOutOfBedSetNetData(u8 *p, u32 v);
void PlayerActor_GetOutOfBedSetWork(Rec *r, s32 x, s32 z, s16 h, u8 a);
s32 PlayerActor_RequestGetOutOfBed(Obj *o, u32 a, u32 b, s32 c, s32 d);
void PlayerActor_GetOutOfBedSetArgs(u8 *p, u32 a, u32 b);
void PlayerActor_MainGetOutOfBedCheck(Obj *o);
void PlayerActor_GetOutOfBedCheckResult(Obj *o);
void PlayerActor_GetOutOfBedCheckTurn(Obj *o);
void PlayerActor_NetGetOutOfBedCheck(void);
void PlayerActor_SetupGetOutOfBedCheck(Obj *o, Msg *m);
}

static inline BOOL Unk_ov004_02224284_IsOne(u8 v) {
    return v == 1 ? TRUE : FALSE;
}

extern "C" void PlayerActor_SetupGetOutOfBedCheck(Obj *o, Msg *m) {
    u8 c = m->unk_0c;
    s32 ang = o->rotY;
    Rec *r = &o->actionWork;
    V3 v;
    V3 w;
    {
        V3 *pp = &o->position;
        v.x = o->position.x;
        v.y = pp->y;
        v.z = pp->z;
    }
    s32 k = 0x2000;
    if (c == 0) {
        k *= -1;
    }
    s32 t[2];
    t[0] = data_02135f44[((u16)ang >> 4) * 2];
    t[1] = data_02135f44[((u16)ang >> 4) * 2 + 1];
    s32 dz = func_01ffcb0c(t[1], 0x1000);
    dz -= func_01ffcb0c(t[0], k);
    s32 dx = func_01ffcb0c(t[0], 0x1000);
    dx += func_01ffcb0c(t[1], k);
    V3 *p2 = &o->position;
    v.x = p2->x + dx;
    v.z = p2->z + dz;
    w.x = v.x;
    w.y = v.y;
    w.z = v.z;
    PlayerActor_GetOutOfBedCheckSetWork(r, &w, c);
    if (_ZN11CommManager11isLocalSlotEj(gCommManager, o->sessionSlot)) {
        BedSpot_RequestGetOut(&v);
    }
}

extern "C" void PlayerActor_NetGetOutOfBedCheck(void) {
}

extern "C" void PlayerActor_GetOutOfBedCheckTurn(Obj *o) {
    V3 v;
    V3 *s = (V3 *)&o->actionWork;
    v.x = s->x;
    v.y = s->y;
    v.z = s->z;
    _ZN12Unk_020102ec14setSubColliderEjjj(o, &v, 0x1000, 0x1000);
    _ZN13ActorCollider6submitEv(o->subCollider);
}

extern "C" void PlayerActor_GetOutOfBedCheckResult(Obj *o) {
    switch (BedSpot_GetGetOutResult()) {
    case 0:
        return;
    case 1:
        o->actionPriority = _ZN12Unk_0200769421getActionDonePriorityEj(o, o->action);
        break;
    case 2:
        o->actionPriority = _ZN12Unk_0200769421getActionDonePriorityEj(o, o->action);
        PlayerActor_RequestLieInBed(o, 0, 6, -1);
        return;
    }
    Rec *r = &o->actionWork;
    if (o->unk_1fc != 0) {
        PlayerActor_RequestLieInBed(o, 0, 6, -1);
    } else {
        PlayerActor_RequestGetOutOfBed(o, r->unk_0c, 0, 6, -1);
    }
}

extern "C" void PlayerActor_MainGetOutOfBedCheck(Obj *o) {
    _ZN12Unk_020102ec11advanceAnimEv(o);
    _ZN12Unk_020102ec18updateBodyColliderEv(o);
    PlayerActor_GetOutOfBedCheckResult(o);
    PlayerActor_GetOutOfBedCheckTurn(o);
}

extern "C" void PlayerActor_GetOutOfBedSetArgs(u8 *p, u32 a, u32 b) {
    p[0] = a;
    p[1] = b;
}

extern "C" s32 PlayerActor_RequestGetOutOfBed(Obj *o, u32 a, u32 b, s32 c, s32 d) {
    Msg m;
    m.func_0200e2c0(0xa, c, *(s16 *)&d);
    PlayerActor_GetOutOfBedSetArgs(&m.unk_0c, a, b);
    s32 r = _ZN11PlayerActor11pushRequestEP19PlayerActionRequest(o, &m);
    _ZN19PlayerActionRequestD1Ev(&m);
    return r;
}

extern "C" void PlayerActor_GetOutOfBedSetWork(Rec *r, s32 x, s32 z, s16 h, u8 a) {
    r->x = x;
    r->z = z;
    r->h = h;
    r->unk_0a = a;
}

extern "C" void PlayerActor_GetOutOfBedSetNetData(u8 *p, u32 v) {
    *p = v;
}

extern "C" void PlayerActor_GetOutOfBedGetNetData(u8 *p, u8 *out) {
    *out = *p;
}

extern "C" void PlayerActor_SetupGetOutOfBed(Obj *o, Msg *m) {
    u8 *q0 = (u8 *)m;
    u8 *q = q0 + 0xc;
    u8 c = m->unk_0c;
    if (Unk_ov004_02224284_IsOne(gFieldSceneKind)) {
        FtrMgr_PlaySeatSound2At(&o->position);
    }
    _ZN12Unk_020102ec13startAnimOnceEijt(o, c ? 0xa : 9, 3, 0);
    s32 ang = o->rotY;
    Rec *r = &o->actionWork;
    s32 k = 0x2000;
    if (c == 0) {
        k *= -1;
    }
    s32 t[2];
    t[0] = data_02135f44[((u16)ang >> 4) * 2];
    t[1] = data_02135f44[((u16)ang >> 4) * 2 + 1];
    s32 dz = func_01ffcb0c(t[1], 0x1000);
    dz -= func_01ffcb0c(t[0], k);
    s32 dx = func_01ffcb0c(t[0], 0x1000);
    dx += func_01ffcb0c(t[1], k);
    V3 *p = &o->position;
    s32 x = p->x + dx;
    s32 z = p->z + dz;
    s16 h;
    if (c != 0) {
        h = ang + 0x4000;
    } else {
        h = ang - 0x4000;
    }
    PlayerActor_GetOutOfBedSetWork(r, x, z, h, q[1]);
    PlayerActor_GetOutOfBedSetNetData(o->netData, c);
}

extern "C" void PlayerActor_NetGetOutOfBed(Obj *o, s32 a) {
    u8 b;
    PlayerActor_GetOutOfBedGetNetData(o->netData, &b);
    PlayerActor_RequestGetOutOfBed(o, b, 0, 6, a);
}

extern "C" void PlayerActor_EndGetOutOfBed(Obj *o) {
    Rec *r = &o->actionWork;
    V3 *p = &o->position;
    p->x = r->x;
    p->z = r->z;
    _ZN12Unk_020102ec9setAngleYEPs(o, &r->h);
    o->prevPosition.x = o->position.x;
    o->prevPosition.y = o->position.y;
    o->prevPosition.z = o->position.z;
}

extern "C" void PlayerActor_GetOutOfBedUpdateAnim(Obj *o) {
    _ZN12Unk_020102ec11advanceAnimEv(o);
    if (_ZN13AnimFrameCtrl14hasPassedFrameEi(&o->unk_2cc, 0x15)) {
        _ZN12Unk_02006d146playSeEj(o, 0x4c6);
        if (_ZN11CommManager11isLocalSlotEj(gCommManager, o->sessionSlot)) {
            BedSpot_Release();
        }
    }
}

extern "C" void PlayerActor_GetOutOfBedUpdateHeight(Obj *o) {
    V3 v;
    Rec *r = &o->actionWork;
    v.x = r->x;
    v.y = Ground_GetDefaultY(0);
    v.z = r->z;
    _ZN12Unk_020102ec24updateCollidersAtDrawPosEPj(o, &v);
}

extern "C" void PlayerActor_GetOutOfBedCheckEnd(Obj *o) {
    if (_ZN13AnimFrameCtrl10isFinishedEv(&o->unk_2cc)) {
        o->actionPriority = _ZN12Unk_0200769421getActionDonePriorityEj(o, o->action);
        if (o->actionWork.unk_0a != 0) {
            volatile u16 t[2];
            _ZN12Unk_02006d1412requestAct10Esji(o, 0, 5, -1);
            *PlayerSession_GetTanTimer() = 0x4650;
            PlayerActor_GetPlayerData(o);
            t[0] = _ZN10PlayerData15getLastPlayDateEv();
            t[1] = t[0];
            *(u16 *)PlayerSession_GetLastPlayDate() = t[1];
            s32 r5 = PlayerActor_CompareLastPlayDateNow(o);
            u16 *r7 = DebugVar_GetPtr(0, 0x50);
            u32 r4 = PlayerActor_GetTan(o);
            Bits16 *r6 = PlayerSession_GetLastPlayDate();
            *r7 = r4 + r6->mid * 1000 + PlayerSession_GetLastPlayDate()->hi * 10;
            if (r5 == 0) {
                *PlayerSession_GetSessionFlags() = 0x11;
            } else {
                *PlayerSession_GetSessionFlags() = 0;
            }
        } else {
            _ZN11PlayerActor11requestWaitEjjj(o, 0, 1, -1);
        }
    }
}

extern "C" void PlayerActor_MainGetOutOfBed(Obj *o) {
    PlayerActor_GetOutOfBedUpdateAnim(o);
    PlayerActor_GetOutOfBedUpdateHeight(o);
    PlayerActor_GetOutOfBedCheckEnd(o);
}

extern "C" void PlayerActor_BedRollCheckSetArgs(u8 *p, u32 v) {
    *p = v;
}

extern "C" s32 PlayerActor_RequestBedRollCheck(Obj *o, u32 a, s32 b, s32 c) {
    Msg m;
    m.func_0200e2c0(0xb, b, c);
    PlayerActor_BedRollCheckSetArgs(&m.unk_0c, a);
    s32 r = _ZN11PlayerActor11pushRequestEP19PlayerActionRequest(o, &m);
    _ZN19PlayerActionRequestD1Ev(&m);
    return r;
}

extern "C" void PlayerActor_BedRollCheckSetWork(u8 *p, u32 v) {
    p[0] = 0;
    p[1] = v;
}

extern "C" void PlayerActor_BedRollCheckSetNetData(u8 *p, u32 v) {
    *p = v;
}

extern "C" void PlayerActor_BedRollCheckGetNetData(u8 *p, u8 *out) {
    *out = *p;
}

extern "C" void PlayerActor_SetupBedRollCheck(Obj *o, Msg *m) {
    u8 c = m->unk_0c;
    s32 k;
    s32 d;
    s16 ang;
    V3 w;
    V3 v;
    PlayerActor_BedRollCheckSetWork((u8 *)&o->actionWork, c);
    PlayerActor_BedRollCheckSetNetData(o->netData, c);
    if (c != 0) {
        k = 0xc;
    } else {
        k = 0xf;
    }
    if (_ZN11CommManager11isLocalSlotEj(gCommManager, o->sessionSlot)) {
        if (c == 0) {
            d = -0x2000;
        } else {
            d = 0x2000;
        }
        ang = o->rotY + 0x4000;
        PlayerActor_OffsetByAngle(&v, o, &o->position, &ang, &d);
        w.x = v.x;
        w.y = v.y;
        w.z = v.z;
        BedSpot_RequestRoll(&w);
        _ZN12Unk_020102ec9startAnimEijt(o, k, 3, 0);
    } else {
        _ZN12Unk_020102ec9startAnimEijt(o, k, 3, 0);
    }
}

extern "C" void PlayerActor_NetBedRollCheck(Obj *o, s32 a) {
    u8 b;
    PlayerActor_BedRollCheckGetNetData(o->netData, &b);
    PlayerActor_RequestBedRollCheck(o, b, 6, a);
}

extern "C" void PlayerActor_BedRollCheckResult(Obj *o) {
    if (_ZN11CommManager11isLocalSlotEj(gCommManager, o->sessionSlot)) {
        u8 *p = (u8 *)&o->actionWork;
        if (p[0] < 3) {
            p[0] = p[0] + 1;
        }
        switch (BedSpot_GetRollResult()) {
        case 0:
            break;
        case 1:
            if (p[0] >= 3) {
                PlayerActor_RequestBedRoll(o, p[1], 6, -1);
            }
            break;
        case 2:
            if (p[0] >= 3) {
                PlayerActor_RequestBedRollBlocked(o, p[1], 6, -1);
            }
            break;
        }
    }
}

extern "C" void PlayerActor_MainBedRollCheck(Obj *o) {
    _ZN12Unk_02006d1418netFollowTransformEv(o);
    _ZN12Unk_020102ec11advanceAnimEv(o);
    PlayerActor_BedRollCheckResult(o);
}

extern "C" void PlayerActor_BedRollBlockedSetArgs(u8 *p, u32 v) {
    *p = v;
}

extern "C" s32 PlayerActor_RequestBedRollBlocked(Obj *o, u32 a, s32 b, s32 c) {
    Msg m;
    m.func_0200e2c0(0xc, b, c);
    PlayerActor_BedRollBlockedSetArgs(&m.unk_0c, a);
    s32 r = _ZN11PlayerActor11pushRequestEP19PlayerActionRequest(o, &m);
    _ZN19PlayerActionRequestD1Ev(&m);
    return r;
}

extern "C" void PlayerActor_BedRollBlockedSetNetData(u8 *p, u32 v) {
    *p = v;
}

extern "C" void PlayerActor_BedRollBlockedGetNetData(u8 *p, u8 *out) {
    *out = *p;
}

extern "C" void PlayerActor_SetupBedRollBlocked(Obj *o, Msg *m) {
    u8 c = m->unk_0c;
    PlayerActor_BedRollBlockedSetNetData(o->netData, c);
    s32 k;
    if (c != 0) {
        k = 0xd;
    } else {
        k = 0x10;
    }
    _ZN12Unk_020102ec13startAnimOnceEijt(o, k, 3, 0);
    _ZN12Unk_02006d146playSeEj(o, 0x4a4);
}

extern "C" void PlayerActor_NetBedRollBlocked(Obj *o, s32 a) {
    u8 b;
    PlayerActor_BedRollBlockedGetNetData(o->netData, &b);
    PlayerActor_RequestBedRollBlocked(o, b, 6, a);
}

extern "C" void PlayerActor_BedRollBlockedCheckEnd(Obj *o) {
    if (_ZN13AnimFrameCtrl10isFinishedEv(&o->unk_2cc)) {
        PlayerActor_RequestLieInBed(o, 0, 6, -1);
    }
}

extern "C" void PlayerActor_MainBedRollBlocked(Obj *o) {
    _ZN12Unk_020102ec11advanceAnimEv(o);
    PlayerActor_BedRollBlockedCheckEnd(o);
}

extern "C" void PlayerActor_BedRollSetArgs(u8 *p, u32 v) {
    *p = v;
}

extern "C" s32 PlayerActor_RequestBedRoll(Obj *o, u32 a, s32 b, s32 c) {
    Msg m;
    m.func_0200e2c0(0xd, b, c);
    PlayerActor_BedRollSetArgs(&m.unk_0c, a);
    s32 r = _ZN11PlayerActor11pushRequestEP19PlayerActionRequest(o, &m);
    _ZN19PlayerActionRequestD1Ev(&m);
    return r;
}

extern "C" void PlayerActor_BedRollSetWork(s32 *p, s32 x, s32 z) {
    p[0] = x;
    p[1] = z;
}

extern "C" void PlayerActor_BedRollSetNetData(u8 *p, u32 v) {
    *p = v;
}

extern "C" void PlayerActor_BedRollGetNetData(u8 *p, u8 *out) {
    *out = *p;
}

extern "C" void PlayerActor_SetupBedRoll(Obj *o, Msg *m) {
    u8 c = m->unk_0c;
    s32 k;
    s32 d;
    s16 ang;
    V3c w;
    V3 v;
    if (c != 0) {
        k = 0xb;
    } else {
        k = 0xe;
    }
    if (_ZN11CommManager11isLocalSlotEj(gCommManager, o->sessionSlot)) {
        _ZN12Unk_020102ec13startAnimOnceEijt(o, k, 3, 0);
    } else {
        _ZN12Unk_020102ec13startAnimOnceEijt(o, k, 0, 0);
    }
    Rec *r = &o->actionWork;
    if (c == 0) {
        d = -0x2000;
    } else {
        d = 0x2000;
    }
    ang = o->rotY + 0x4000;
    PlayerActor_OffsetByAngle(&v, o, &o->position, &ang, &d);
    s32 tx = v.x;
    w.x = tx;
    w.y = v.y;
    s32 tz = v.z;
    w.z = tz;
    PlayerActor_BedRollSetWork((s32 *)r, tx, tz);
    PlayerActor_BedRollSetNetData(o->netData, c);
    _ZN12Unk_02006d146playSeEj(o, 0x435);
}

extern "C" void PlayerActor_NetBedRoll(Obj *o, s32 a) {
    u8 b;
    PlayerActor_BedRollGetNetData(o->netData, &b);
    PlayerActor_RequestBedRoll(o, b, 6, a);
}

extern "C" void PlayerActor_EndBedRoll(Obj *o) {
    Rec *r = &o->actionWork;
    V3 *p = &o->position;
    p->x = r->x;
    p->z = r->z;
}

extern "C" void PlayerActor_BedRollCheckEnd(Obj *o) {
    if (_ZN13AnimFrameCtrl10isFinishedEv(&o->unk_2cc)) {
        if (PlayerActor_RequestLieInBed(o, 0, 6, -1)) {
            o->lastInputSide = 0;
        }
    }
}

extern "C" void PlayerActor_MainBedRoll(Obj *o) {
    _ZN12Unk_02006d1418netFollowTransformEv(o);
    _ZN12Unk_020102ec11advanceAnimEv(o);
    PlayerActor_BedRollCheckEnd(o);
}

extern "C" void PlayerActor_BedApproachSetArgs(Rec *t, s32 x, s32 z, s16 h, u8 a, u8 b) {
    t->x = x;
    t->z = z;
    t->h = h;
    t->unk_0a = a;
    t->unk_0b = b;
}


}  // namespace ns_02223c38

namespace ns_02223314 {

struct Unk_ov004_02223314_V3 {
    s32 x, y, z;
};

struct Unk_ov004_02223314_Rec {
    s32 unk_00;
    s32 unk_04;
    s16 unk_08;
    u8 unk_0a;
    u8 unk_0b;
};

struct Unk_ov004_02223314_Rec2 {
    s32 unk_00;
    u8 unk_04;
    u8 unk_05;
};

struct Unk_ov004_02223314_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

struct Unk_ov004_02223314_Pl {
    u8 a;
    u8 b;
    u8 pad_02[2];
    s32 c;
    s16 d;
    u8 e;
    u8 f;
};

class Unk_ov004_02223314_Msg {
public:
    inline Unk_ov004_02223314_Msg() { _ZN19PlayerActionRequestC1Ev(this); }
    inline void func_0200e2c0(u32 a, u32 b, s32 c) { _ZN19PlayerActionRequest6assignEiis(this, a, b, c); }
    u8 pad_00[0xc];
    Unk_ov004_02223314_Pl unk_0c;
    u8 pad_18[4];
};

struct Unk_ov004_02223314_Obj {
    u8 pad_00[0x5c];
    Unk_ov004_02223314_V3 position;
    u8 pad_68[0x8e - 0x68];
    s16 rotY;
    u8 pad_90[0x2cc - 0x90];
    u32 unk_2cc;
    u8 pad_2d0[0x2d4 - 0x2d0];
    Unk_ov004_02223314_Bits unk_2d4;
    u8 pad_2d8[0x700 - 0x2d8];
    s32 animId;
    u8 pad_704[0x7d0 - 0x704];
    Unk_ov004_02223314_Rec actionWork;
    u8 pad_7dc[0x7ec - 0x7dc];
    s32 action;
    u8 pad_7f0[0x7f8 - 0x7f0];
    s32 actionPriority;
    u32 sessionSlot;
    u8 pad_800[0x814 - 0x800];
    s32 fieldAnswer;
    u8 pad_818[0x81c - 0x818];
    u16 actionItem;
    u16 shownItem;
    u32 shownItemPosX;
    s32 shownItemPosY;
    u8 pad_828[0x82c - 0x828];
    s32 shownItemScaleX;
    s32 shownItemScaleY;
    s32 shownItemScaleZ;
    u8 pad_838[0x8ec - 0x838];
    u8 netData[8];
    u8 pad_8f4[0xc80 - 0x8f4];
    u16 netSeq;
};

typedef Unk_ov004_02223314_Obj Obj;
typedef Unk_ov004_02223314_V3 V3;
typedef Unk_ov004_02223314_Rec Rec;
typedef Unk_ov004_02223314_Rec2 Rec2;
typedef Unk_ov004_02223314_Msg Msg;
typedef Unk_ov004_02223314_Pl Pl;

extern "C" {
extern u8 gFieldSceneKind;
extern void *gCommManager;
extern void *gSceneBlockMap;
extern s32 sAct12Pos[];

s32 _ZN12Unk_02006d1414testActionFlagEj(Obj *o, s32 a);
void _ZN12Unk_02006d1413setActionFlagEj(Obj *o, s32 a);
void _ZN12Unk_02006d1415clearActionFlagEj(Obj *o, s32 a);
void _ZN12Unk_02006d1418updateShownItemPosEjz(Obj *o, s32 a);
s32 _ZN11PlayerActor11pushRequestEP19PlayerActionRequest(Obj *o, Msg *m);
s32 _ZN12Unk_020102ec11advanceAnimEv(Obj *o);
void _ZN12Unk_020102ec18updateBodyColliderEv(Obj *o);
void _ZN12Unk_02006d1418netFollowTransformEv(Obj *o);
void _ZN12Unk_02006d146playSeEj(Obj *o, u32 a);
s32 _ZN13AnimFrameCtrl14hasPassedFrameEi(void *p, s32 n);
s32 _ZN13AnimFrameCtrl10isFinishedEv(void *p);
s32 _ZN11CommManager11isLocalSlotEj(void *g, u32 a);
s32 _ZN12Unk_0200769421getActionDonePriorityEj(Obj *o, s32 a);
void _ZN11PlayerActor11requestWaitEjjj(Obj *o, s32 a, s32 b, s32 c);
void _ZN12Unk_020102ec13startAnimOnceEijt(Obj *o, s32 a, s32 b, s32 c);
void _ZN12Unk_020102ec9startAnimEijt(Obj *o, s32 a, u32 b, u32 c);
void _ZN12Unk_020102ec9setAngleYEPs(Obj *o, s16 *a);
void PlayerActor_ApproachValue(void *p, s32 a, u32 b, u32 c, u32 d);
s32 PlayerActor_OffsetByAngle(V3 *out, Obj *o, void *pos, void *ang, u32 arg);
void _ZN12Unk_02006d1418turnAwayFromCameraEi(Obj *o, s32 a);
void PlayerActor_StepTowardXZ(Obj *o, s32 a, s32 b);
void PlayerActor_StepTowardPose(Obj *o, s32 a, s32 b, s32 c);
s32 Camera_SnapToFocus(V3 *v);
s32 Math_AngleToDir4(s16 a);
s32 BedSpot_GetApproachResult(void);
void BedSpot_RequestApproach(V3 *v);
void NetBuf_UnpackPair20(void *a, s32 *b, s32 *c);
void NetBuf_PackPair20(void *a, s32 b, s32 c);
s32 NetBuf_ReadS16B(void *a);
void NetBuf_WriteS16B(void *a, s32 b);
s32 FieldPos_FromUnitCenter(void *p, u32 a, s32 b);
u16 *BlockMap_GetItemPtrAtPos(void *g, void *p, s32 a);
s32 Pocket_FindEmpty(void);
s32 Scene_InHouseRoom(void);
u32 Room_CountOccupants(void);
s32 Item_IsFurniture(void *p);
s32 Item_GetFurnitureIndex(void *p);
void PendingUnit_ApplyAt(void *p, s32 a);

s32 FtrMgr_PollRemovedPos(void);
s32 FtrMgr_GetSurfaceHeightAtPos(void *p);
void FtrMgr_RemoveActor(s32 a, void *b, void *c);
void FtrMgr_PlaySeatSound1At(V3 *v);
s32 PlayerActor_RequestLieInBed(Obj *o, u32 a, s32 b, s32 c);
void PlayerActor_BedApproachSetArgs(void *out, s32 x, s32 z, s32 h, u32 e, u32 f);

void PlayerActor_PickUpItemUpdateScale(Obj *o);
void PlayerActor_PickUpItemUpdateAnim(Obj *o);
void PlayerActor_NetPickUpItem(void);
void PlayerActor_SetupPickUpItem(Obj *o, Msg *m);
s32 PlayerActor_RequestPickUpItem(Obj *o, s32 *p, s32 c, u32 b, s16 d);
void PlayerActor_PickUpItemSetArgs(void *out, s32 *in, s32 c);
void PlayerActor_MainAct12(Obj *o);
void PlayerActor_Act12Move(Obj *o);
void PlayerActor_NetAct12(void);
void PlayerActor_SetupAct12(Obj *o);
s32 PlayerActor_RequestAct12(Obj *o, s32 a, s32 b);
void PlayerActor_MainGetIntoBed(Obj *o);
void PlayerActor_GetIntoBedCheckEnd(Obj *o);
void PlayerActor_GetIntoBedUpdateAnim(Obj *o);
void PlayerActor_GetIntoBedSlide(Obj *o);
void PlayerActor_EndGetIntoBed(Obj *o);
void PlayerActor_NetGetIntoBed(Obj *o, u32 a);
void PlayerActor_SetupGetIntoBed(Obj *o, Msg *m);
void PlayerActor_GetIntoBedGetNetData(u8 *src, u8 *out, s32 *x, s32 *z);
void PlayerActor_GetIntoBedSetNetData(u8 *dst, u32 k, s32 a, s32 b);
void PlayerActor_GetIntoBedSetWork(Rec *r, s32 a, s32 b, s32 c, u8 d);
s32 PlayerActor_RequestGetIntoBed(Obj *o, u8 b, s32 x, s32 z, u8 e, s32 f, s32 g);
void PlayerActor_GetIntoBedSetArgs(void *out, u8 b, s32 x, s32 z, u8 e);
void PlayerActor_MainBedApproach(Obj *o);
void PlayerActor_BedApproachCheckArrive(Obj *o);
void PlayerActor_BedApproachMove(Obj *o);
void PlayerActor_EndBedApproach(Obj *o);
void PlayerActor_NetBedApproach(Obj *o, u32 a);
void PlayerActor_SetupBedApproach(Obj *o, Msg *m);
void PlayerActor_BedApproachGetNetData(u8 *src, s32 *x, s32 *z, s16 *h, u8 *b);
void PlayerActor_BedApproachSetNetData(u8 *dst, s32 x, s32 z, s32 h, u8 b);
void PlayerActor_BedApproachSetWork(Rec *r, s32 a, s32 b, s16 c, u8 d, u8 e);
s32 PlayerActor_RequestBedApproach(Obj *o, s32 x, s32 z, s32 h, u8 a, s32 b, s32 c);
}

static inline BOOL Unk_ov004_02223314_IsOne(u8 v) {
    return v == 1 ? TRUE : FALSE;
}

extern "C" s32 PlayerActor_RequestBedApproach(Obj *o, s32 x, s32 z, s32 h, u8 a, s32 b, s32 c) {
    Msg m;
    m.func_0200e2c0(0xe, b, *(s16 *)&c);
    PlayerActor_BedApproachSetArgs(&m.unk_0c, x, z, h, a, b == 6 ? 1 : 0);
    s32 r = _ZN11PlayerActor11pushRequestEP19PlayerActionRequest(o, &m);
    _ZN19PlayerActionRequestD1Ev(&m);
    return r;
}

extern "C" void PlayerActor_BedApproachSetWork(Rec *r, s32 a, s32 b, s16 c, u8 d, u8 e) {
    r->unk_00 = a;
    r->unk_04 = b;
    r->unk_08 = c;
    r->unk_0a = d;
    r->unk_0b = e;
}

extern "C" void PlayerActor_BedApproachSetNetData(u8 *dst, s32 x, s32 z, s32 h, u8 b) {
    NetBuf_PackPair20(dst, x, z);
    NetBuf_WriteS16B(dst + 5, h);
    dst[7] = b;
}

extern "C" void PlayerActor_BedApproachGetNetData(u8 *src, s32 *x, s32 *z, s16 *h, u8 *b) {
    NetBuf_UnpackPair20(src, x, z);
    *h = NetBuf_ReadS16B(src + 5);
    *b = src[7];
}

extern "C" void PlayerActor_SetupBedApproach(Obj *o, Msg *m) {
    Pl *pl = &m->unk_0c;
    V3 v;
    s16 h;
    V3 tmp;
    void *g;
    u8 r6;
    Rec *r7;
    s32 c = pl->c;
    v.x = *(s32 *)pl;
    v.y = 0;
    v.z = c;
    h = pl->d;
    r6 = pl->e;
    r7 = &o->actionWork;
    g = gCommManager;
    if (_ZN11CommManager11isLocalSlotEj(g, o->sessionSlot)) {
        PlayerActor_OffsetByAngle(&tmp, o, &v, &h, (u32)(sAct12Pos + 3));
        v.x = tmp.x;
        v.y = tmp.y;
        v.z = tmp.z;
    }
    PlayerActor_BedApproachSetWork(r7, v.x, v.z, h, r6, pl->f);
    PlayerActor_BedApproachSetNetData(o->netData, v.x, v.z, h, r6);
    if (_ZN11CommManager11isLocalSlotEj(g, o->sessionSlot)) {
        BedSpot_RequestApproach(&v);
    }
    _ZN12Unk_020102ec9startAnimEijt(o, 0x1a, 3, 0);
}

extern "C" void PlayerActor_NetBedApproach(Obj *o, u32 a) {
    struct L {
        u8 b;
        s16 h;
    } l;
    s32 x, z;
    L *q = &l;
    PlayerActor_BedApproachGetNetData(o->netData, &x, &z, &l.h, &l.b);
    PlayerActor_RequestBedApproach(o, x, z, q->h, q->b, 6, a);
}

extern "C" void PlayerActor_EndBedApproach(Obj *o) {
    _ZN12Unk_020102ec9setAngleYEPs(o, &o->actionWork.unk_08);
}

extern "C" void PlayerActor_BedApproachMove(Obj *o) {
    PlayerActor_StepTowardPose(o, o->position.x, o->position.z, o->actionWork.unk_08);
}

extern "C" void PlayerActor_BedApproachCheckArrive(Obj *o) {
    Rec *r = &o->actionWork;
    if (_ZN11CommManager11isLocalSlotEj(gCommManager, o->sessionSlot) == 0) {
        o->actionPriority = _ZN12Unk_0200769421getActionDonePriorityEj(o, o->action);
    } else {
        switch (BedSpot_GetApproachResult()) {
        case 0:
            break;
        case 2:
            o->actionPriority = _ZN12Unk_0200769421getActionDonePriorityEj(o, o->action);
            _ZN11PlayerActor11requestWaitEjjj(o, 3, 1, -1);
            break;
        case 1:
        default:
            if (r->unk_08 == o->rotY) {
                PlayerActor_RequestGetIntoBed(o, r->unk_0a, r->unk_00, r->unk_04, r->unk_0b, 6, -1);
            }
            break;
        }
    }
}

extern "C" void PlayerActor_MainBedApproach(Obj *o) {
    PlayerActor_BedApproachMove(o);
    _ZN12Unk_020102ec11advanceAnimEv(o);
    _ZN12Unk_020102ec18updateBodyColliderEv(o);
    PlayerActor_BedApproachCheckArrive(o);
}

extern "C" void PlayerActor_GetIntoBedSetArgs(void *out, u8 b, s32 x, s32 z, u8 e) {
    u8 *p = (u8 *)out;
    p[0] = b;
    *(s32 *)(p + 4) = x;
    *(s32 *)(p + 8) = z;
    p[0xc] = e;
}

extern "C" s32 PlayerActor_RequestGetIntoBed(Obj *o, u8 b, s32 x, s32 z, u8 e, s32 f, s32 g) {
    Msg m;
    m.func_0200e2c0(0xf, f, *(s16 *)&g);
    PlayerActor_GetIntoBedSetArgs(&m.unk_0c, b, x, z, e);
    s32 r = _ZN11PlayerActor11pushRequestEP19PlayerActionRequest(o, &m);
    _ZN19PlayerActionRequestD1Ev(&m);
    return r;
}

extern "C" void PlayerActor_GetIntoBedSetWork(Rec *r, s32 a, s32 b, s32 c, u8 d) {
    r->unk_00 = a;
    r->unk_04 = b;
    r->unk_08 = c;
    r->unk_0a = d;
}

extern "C" void PlayerActor_GetIntoBedSetNetData(u8 *dst, u32 k, s32 a, s32 b) {
    dst[0] = k;
    NetBuf_PackPair20(dst + 1, a, b);
}

extern "C" void PlayerActor_GetIntoBedGetNetData(u8 *src, u8 *out, s32 *x, s32 *z) {
    *out = src[0];
    NetBuf_UnpackPair20(src + 1, x, z);
}

extern "C" void PlayerActor_SetupGetIntoBed(Obj *o, Msg *m) {
    Pl *pl = &m->unk_0c;
    u8 k = pl->a;
    Rec *r;
    s32 t, h, x, z;
    _ZN12Unk_020102ec13startAnimOnceEijt(o, k == 0 ? 8 : 7, 3, 0);
    _ZN12Unk_02006d146playSeEj(o, 0x4c5);
    r = &o->actionWork;
    t = Math_AngleToDir4(o->rotY);
    t = (t << 30) >> 16;
    x = pl->c;
    z = *(s32 *)((u8 *)pl + 8);
    if (k == 0) {
        h = (s16)(t + 0x4000);
    } else {
        h = (s16)(t - 0x4000);
    }
    PlayerActor_GetIntoBedSetWork(r, x, z, h, ((u8 *)pl)[0xc]);
    PlayerActor_GetIntoBedSetNetData(o->netData, k, x, z);
}

extern "C" void PlayerActor_NetGetIntoBed(Obj *o, u32 a) {
    if (o->action == 0xf) {
        o->netSeq = a;
    } else {
        u8 b;
        s32 x, z;
        PlayerActor_GetIntoBedGetNetData(o->netData, &b, &x, &z);
        PlayerActor_RequestGetIntoBed(o, b, x, z, 0, 6, a);
    }
}

extern "C" void PlayerActor_EndGetIntoBed(Obj *o) {
    Rec *r = &o->actionWork;
    V3 *p = &o->position;
    p->x = r->unk_00;
    p->z = r->unk_04;
    _ZN12Unk_020102ec9setAngleYEPs(o, &r->unk_08);
}

extern "C" void PlayerActor_GetIntoBedSlide(Obj *o) {
    Rec *r = &o->actionWork;
    u8 *p;
    s32 v;
    if (_ZN11CommManager11isLocalSlotEj(gCommManager, o->sessionSlot)) {
        p = (u8 *)o;
        p += 0x5c;
        if ((r->unk_08 & 0x4000) != 0) {
            v = r->unk_00;
        } else {
            p += 8;
            v = r->unk_04;
        }
        PlayerActor_ApproachValue(p, v, 0x399, 0x1ec, 0x31);
    } else {
        _ZN12Unk_02006d1418netFollowTransformEv(o);
    }
}

extern "C" void PlayerActor_GetIntoBedUpdateAnim(Obj *o) {
    V3 v;
    _ZN12Unk_020102ec11advanceAnimEv(o);
    if (_ZN13AnimFrameCtrl14hasPassedFrameEi(&o->unk_2cc, 0xd)) {
        if (Unk_ov004_02223314_IsOne(gFieldSceneKind)) {
            Rec *r = &o->actionWork;
            s32 z = r->unk_04;
            s32 y = o->position.y;
            s32 x = r->unk_00;
            v.x = x;
            v.y = y;
            v.z = z;
            FtrMgr_PlaySeatSound1At(&v);
        }
    }
}

extern "C" void PlayerActor_GetIntoBedCheckEnd(Obj *o) {
    if (_ZN13AnimFrameCtrl10isFinishedEv(&o->unk_2cc)) {
        PlayerActor_RequestLieInBed(o, o->actionWork.unk_0a, 6, -1);
    }
}

extern "C" void PlayerActor_MainGetIntoBed(Obj *o) {
    PlayerActor_GetIntoBedSlide(o);
    PlayerActor_GetIntoBedUpdateAnim(o);
    _ZN12Unk_020102ec18updateBodyColliderEv(o);
    PlayerActor_GetIntoBedCheckEnd(o);
}

extern "C" s32 PlayerActor_RequestAct12(Obj *o, s32 a, s32 b) {
    Msg m;
    m.func_0200e2c0(0x12, a, b);
    s32 r = _ZN11PlayerActor11pushRequestEP19PlayerActionRequest(o, &m);
    _ZN19PlayerActionRequestD1Ev(&m);
    return r;
}

extern "C" void PlayerActor_SetupAct12(Obj *o) {
    V3 v;
    _ZN12Unk_020102ec9startAnimEijt(o, 0x9b, 3, 0);
    v.x = sAct12Pos[0];
    v.y = sAct12Pos[1];
    v.z = sAct12Pos[2];
    Camera_SnapToFocus(&v);
}

extern "C" void PlayerActor_NetAct12(void) {
}

extern "C" void PlayerActor_Act12Move(Obj *o) {
    _ZN12Unk_02006d1418turnAwayFromCameraEi(o, 0x400);
    PlayerActor_StepTowardXZ(o, sAct12Pos[0], sAct12Pos[2]);
}

extern "C" void PlayerActor_MainAct12(Obj *o) {
    _ZN12Unk_020102ec11advanceAnimEv(o);
    PlayerActor_Act12Move(o);
    _ZN12Unk_020102ec18updateBodyColliderEv(o);
}

extern "C" void PlayerActor_PickUpItemSetArgs(void *out, s32 *in, s32 c) {
    ((u8 *)out)[0] = in[0];
    ((u8 *)out)[1] = in[1];
    *(s32 *)((u8 *)out + 4) = c;
}

extern "C" s32 PlayerActor_RequestPickUpItem(Obj *o, s32 *p, s32 c, u32 b, s16 d) {
    Msg m;
    struct {
        s32 x;
        s32 z;
    } v;
    m.func_0200e2c0(0x1c, b, d);
    v.x = p[0];
    v.z = p[1];
    PlayerActor_PickUpItemSetArgs(&m.unk_0c, &v.x, c);
    s32 r = _ZN11PlayerActor11pushRequestEP19PlayerActionRequest(o, &m);
    _ZN19PlayerActionRequestD1Ev(&m);
    return r;
}

extern "C" void PlayerActor_SetupPickUpItem(Obj *o, Msg *m) {
    Pl *pl = &m->unk_0c;
    s32 b = pl->c;
    Rec2 *r = (Rec2 *)&o->actionWork;
    u8 a;
    u32 c;
    u16 *p;
    r->unk_04 = 0;
    r->unk_05 = 0;
    r->unk_00 = b;
    a = pl->a;
    c = pl->b;
    FieldPos_FromUnitCenter(&o->shownItemPosX, a, c);
    o->shownItemPosY = FtrMgr_GetSurfaceHeightAtPos(&o->shownItemPosX);
    o->shownItemScaleX = 0x1000;
    o->shownItemScaleY = 0x1000;
    o->shownItemScaleZ = 0x1000;
    if (b < 0) {
        p = BlockMap_GetItemPtrAtPos(gSceneBlockMap, &o->shownItemPosX, 1);
        if (p == 0) {
            o->actionPriority = _ZN12Unk_0200769421getActionDonePriorityEj(o, o->action);
            _ZN11PlayerActor11requestWaitEjjj(o, 3, 1, -1);
            return;
        }
        o->shownItem = *p;
        o->actionItem = o->shownItem;
    }
    if (Pocket_FindEmpty() == -1 && Scene_InHouseRoom()) {
        BOOL ok;
        if (Item_IsFurniture(&o->actionItem)) {
            u16 t = 0xfff1;
            s32 x = Item_GetFurnitureIndex(&o->actionItem);
            if (x == Item_GetFurnitureIndex(&t)) {
                ok = TRUE;
            } else {
                ok = FALSE;
            }
        } else {
            if (o->actionItem == 0xfff1) {
                ok = TRUE;
            } else {
                ok = FALSE;
            }
        }
        if (!ok) {
            _ZN12Unk_020102ec9startAnimEijt(o, 0, 3, 0);
            r->unk_05 = 6;
            o->shownItem = 0xfff1;
            o->actionItem = o->shownItem;
            return;
        }
    }
    if (Room_CountOccupants() <= 1) {
        if (b < 0) {
            struct {
                s32 a;
                s32 c;
            } v;
            _ZN12Unk_02006d1413setActionFlagEj(o, 0xd);
            v.a = a;
            v.c = c;
            PendingUnit_ApplyAt(&v, 1);
        } else {
            FtrMgr_RemoveActor(b, &o->actionItem, &o->shownItem);
        }
        _ZN12Unk_020102ec13startAnimOnceEijt(o, 0x19, 3, 0);
        _ZN12Unk_02006d146playSeEj(o, 0x52);
    } else {
        r->unk_05 = 10;
        _ZN12Unk_020102ec9startAnimEijt(o, 0, 3, 0);
    }
}

extern "C" void PlayerActor_NetPickUpItem(void) {
}

extern "C" void PlayerActor_PickUpItemUpdateAnim(Obj *o) {
    Rec2 *r = (Rec2 *)&o->actionWork;
    if (r->unk_05 >= 6) {
        _ZN12Unk_020102ec11advanceAnimEv(o);
        return;
    }
    if (r->unk_04 == 2) {
        if (_ZN13AnimFrameCtrl14hasPassedFrameEi(&o->unk_2cc, 7)) {
            o->actionPriority = _ZN12Unk_0200769421getActionDonePriorityEj(o, o->action);
            _ZN11PlayerActor11requestWaitEjjj(o, 3, 1, -1);
            return;
        }
    } else if (r->unk_04 == 0) {
        if (o->unk_2d4.mid < 7) {
            if (o->fieldAnswer == 2) {
                r->unk_04 = 2;
            } else if (o->fieldAnswer == 1) {
                r->unk_04 = 1;
                _ZN12Unk_02006d1413setActionFlagEj(o, 0xd);
            }
        }
    }
    _ZN12Unk_020102ec11advanceAnimEv(o);
}

extern "C" void PlayerActor_PickUpItemUpdateScale(Obj *o) {
    s32 *p;
    s32 r;
    if (_ZN12Unk_02006d1414testActionFlagEj(o, 0xd) == 0) {
        p = (s32 *)((u8 *)o + 0x7d0);
        if (*p < 0) return;
        if (FtrMgr_PollRemovedPos() == 0) return;
        _ZN12Unk_02006d1413setActionFlagEj(o, 0xd);
        *p = -1;
    }
    if (o->animId != 0x19) {
        o->shownItemScaleX = 0;
        o->shownItemScaleY = 0;
        o->shownItemScaleZ = 0;
        return;
    }
    if (o->unk_2d4.mid < 8) return;
    r = 0x1000 - (s32)((o->unk_2d4.mid - 8) << 12) / 7;
    if (r < 0) {
        r = 0;
        _ZN12Unk_02006d1415clearActionFlagEj(o, 0xd);
    }
    o->shownItemScaleX = r;
    o->shownItemScaleY = r;
    o->shownItemScaleZ = r;
    _ZN12Unk_02006d1418updateShownItemPosEjz(o, r);
}


}  // namespace ns_02223314

namespace ns_02222838 {

struct Unk_ov004_02222874_V3 {
    s32 x, y, z;
};

struct Unk_ov004_02222874_Tgt {
    s32 x, z;
    s16 h;
};

struct Unk_ov004_02222874_Rt {
    u32 unk_00;
    u32 unk_04;
    u32 unk_08;
};

class Unk_ov004_02222874_Msg {
public:
    inline Unk_ov004_02222874_Msg() { _ZN19PlayerActionRequestC1Ev(this); }
    inline void func_0200e2c0(u32 a, u32 b, u32 c) { _ZN19PlayerActionRequest6assignEiis(this, a, b, c); }
    u8 pad_00[0xc];
    union {
        Unk_ov004_02222874_Tgt t;
        u8 b[2];
    } unk_0c;
    u8 pad_18[4];
};

class Unk_ov004_02222874_Prim {
public:
    virtual void vfunc_00();
    u8 pad_04[0x5c - 4];
    Unk_ov004_02222874_V3 unk_5c;
    u8 pad_68[0x8e - 0x68];
    s16 unk_8e;
    u8 pad_90[0xec - 0x90];
};

class Unk_ov004_02222874_Sec {
public:
    virtual void vfunc_s00();
    u8 pad_04[0x1e - 4];
    u8 unk_10a;
    u8 pad_1f[0x3c - 0x1f];
    Unk_ov004_02222874_Rt *unk_128;
    u8 pad_40[0x51 - 0x40];
    u8 unk_13d;
    u8 pad_52[0x60 - 0x52];
};

struct Unk_ov004_02222874_Rec {
    s32 x;
    s32 z;
    s16 h;
    u8 flag;
    u8 pad_b;
};

struct Unk_ov004_02222874_Obj : public Unk_ov004_02222874_Prim, public Unk_ov004_02222874_Sec {
    u8 pad_14c[0x2cc - 0x14c];
    u8 unk_2cc[0x10];
    s32 unk_2dc;
    u8 pad_2e0[0x59c - 0x2e0];
    u8 heldItemModel[4];
    u8 pad_5a0[0x7d0 - 0x5a0];
    union {
        Unk_ov004_02222874_Rec r;
        u8 b[2];
    } unk_7d0;
    u8 pad_7dc[0x7ec - 0x7dc];
    s32 action;
    u8 pad_7f0[0x7f8 - 0x7f0];
    s32 actionPriority;
    u32 sessionSlot;
    u8 pad_800[0x80c - 0x800];
    s32 dropQuery;
    u8 pad_810[0x818 - 0x810];
    s32 msgStep;
    u16 actionItem;
    u8 pad_81e[0x8ec - 0x81e];
    u8 netData[0x10];
};

typedef Unk_ov004_02222874_Obj Obj;
typedef Unk_ov004_02222874_Sec Sec;
typedef Unk_ov004_02222874_V3 V3;
typedef Unk_ov004_02222874_Tgt Tgt;
typedef Unk_ov004_02222874_Msg Msg;
typedef Unk_ov004_02222874_Rec Rec;

extern "C" {
extern u8 gFieldSceneKind;
extern void *gCommManager;
extern u8 sRoomErrorMsgFile[];
extern u8 sRoomPlayerMsgFile[];

s32 _ZN11PlayerActor11pushRequestEP19PlayerActionRequest(Obj *o, Msg *m);
void _ZN12Unk_02006d146playSeEj(Obj *o, u32 a);
s32 _ZN12Unk_020102ec11advanceAnimEv(Obj *o);
s32 _ZN12Unk_020102ec17moveWithCollisionEv(Obj *o);
s32 _ZN12Unk_020102ec18updateBodyColliderEv(Obj *o);
s32 _ZN12Unk_020102ec19submitSceneColliderEv(Obj *o);
void _ZN12Unk_020102ec13startAnimOnceEijt(Obj *o, s32 a, s32 b, s32 c);
void _ZN12Unk_020102ec9startAnimEijt(Obj *o, s32 a, s32 b, s32 c);
void _ZN12Unk_020102ec9setAngleYEPs(Obj *o, s16 *a);
s32 _ZN11CommManager11isLocalSlotEj(void *g, u32 a);
s32 _ZN12Unk_0200769421getActionDonePriorityEj(Obj *o, s32 a);
s32 _ZN11PlayerActor17getInputMagnitudeEv(Obj *o);
s32 _ZN11PlayerActor19getInputDirRelativeEv(Obj *o);
s32 _ZN11PlayerActor11requestWaitEjjj(Obj *o, s32 a, s32 b, s32 c);
s32 Room_CountOccupants(void);
s32 Scene_InHouseRoom(void);
s32 TalkRequest_AddPlayerMessage(void);
void TalkRequest_FinishPlayerMessage(void);
void _ZN9Character17detachTalkRequestEi(void *o, Sec *s);
void _ZN9Character17attachTalkRequestEi(void *o, Sec *s);
void _ZN12Unk_02006d1415clearActionFlagEj(Obj *o, s32 a);
void _ZN12Unk_02006d1413setActionFlagEj(Obj *o, s32 a);
void _ZN10MsgRequest11setFileNameEPKc(Sec *s, void *d);
s32 _ZN13AnimFrameCtrl10isFinishedEv(void *p);
s32 PlayerActor_StepTowardPose(Obj *o, s32 x, s32 z, s32 h);
void NetBuf_UnpackPair20(void *a, s32 *b, s32 *c);
void NetBuf_PackPair20(void *a, s32 b, s32 c);
s32 NetBuf_ReadS16B(void *a);
void NetBuf_WriteS16B(void *a, s32 b);
s32 Item_IsFurniture(void *p);
u32 Item_GetFurnitureIndex(void *p);
s32 Pocket_FindEmpty(void);
void Pocket_AddFoundItem(void *p);
s32 _ZN12Unk_02006d1415getHeldToolKindEv(Obj *o);
void HeldItemModel_PlayAnim(void *p, s32 a, s32 b, s32 c);
s32 FieldAction_RequestPlaceAtPendingForAid(u32 a, u32 b);
s32 MenuCtrl_OpenPocketsFullPickUp(u32 a);
s32 MenuCtrl_IsFinished(void);
s32 MenuCtrl_IsResultOk(void);

void *FtrContactSet_GetInstance(void);
s32 _ZN13FtrContactSet15canRotatePlus90Ev(void *p);
s32 _ZN13FtrContactSet16canRotateMinus90Ev(void *p);
s32 _ZN13FtrContactSet17startRotatePlus90Ev(void *p);
s32 _ZN13FtrContactSet18startRotateMinus90Ev(void *p);
s32 _ZN13FtrContactSet13requestToggleEv(void *p);
s32 PlayerActor_RequestFtrPush(Obj *o, s32 a, s32 b);
s32 PlayerActor_RequestFtrPull(Obj *o, s32 a, s32 b);
s32 PlayerActor_PickUpItemUpdateAnim(Obj *o);
s32 PlayerActor_PickUpItemUpdateScale(Obj *o);

void PlayerActor_NetFtrRotate(void);
void PlayerActor_SetupFtrRotate(Obj *o, Obj *arg);
void PlayerActor_FtrRotateSetStickFlag(u8 *p, u32 v);
s32 PlayerActor_RequestFtrRotate(Obj *o, u32 a, s32 b, s32 c);
void PlayerActor_FtrRotateSetArgs(u8 *p, u32 v);
void PlayerActor_MainFtrHold(Obj *o);
void PlayerActor_FtrHoldUpdate(Obj *o);
void PlayerActor_NetFtrHold(Obj *o, s32 c);
void PlayerActor_SetupFtrHold(Obj *o, Obj *arg);
void PlayerActor_FtrHoldGetNetData(u8 *src, u8 *a, u8 *b);
void PlayerActor_FtrHoldSetNetData(u8 *p, u32 a, u32 b);
void PlayerActor_FtrHoldSetWork(u8 *p, s32 v);
s32 PlayerActor_RequestFtrHold(Obj *o, u32 a, u32 b, u32 c, s32 e);
void PlayerActor_FtrHoldSetArgs(u8 *p, u32 a, u32 b);
void PlayerActor_MainFtrGrabApproach(Obj *o);
void PlayerActor_FtrGrabApproachCheckArrive(Obj *o);
void PlayerActor_FtrGrabApproachMove(Obj *o);
void PlayerActor_EndFtrGrabApproach(Obj *o);
s32 PlayerActor_NetFtrGrabApproach(Obj *o, s32 c);
void PlayerActor_SetupFtrGrabApproach(Obj *o, Obj *arg);
void PlayerActor_FtrGrabApproachGetNetData(void *p, s32 *x, s32 *z, s16 *h);
void PlayerActor_FtrGrabApproachSetNetData(void *p, s32 x, s32 z, s16 h);
void PlayerActor_FtrGrabApproachSetWork(Rec *r, s32 x, s32 z, s16 h);
s32 PlayerActor_RequestFtrGrabApproach(Obj *o, s32 x, s32 z, s16 h, u32 a, s32 b);
void PlayerActor_FtrGrabApproachSetArgs(Tgt *t, s32 x, s32 z, s16 h);
void PlayerActor_MainPickUpItem(Obj *o);
void PlayerActor_PickUpItemUpdateState(Obj *o);
}

struct Unk_ov004_02222980_Pad {
    s32 v[2];
    Unk_ov004_02222980_Pad() {}
    ~Unk_ov004_02222980_Pad() {}
};

static inline BOOL Unk_ov004_02222874_IsOne(u8 v) {
    return v == 1 ? TRUE : FALSE;
}

#define ECC_START_FAIL(c) \
    { \
        *p = 4; \
        _ZN12Unk_020102ec9startAnimEijt(o, 0, 6, 6); \
        o->dropQuery = FieldAction_RequestPlaceAtPendingForAid(o->sessionSlot, o->actionItem); \
    }

extern "C" void PlayerActor_PickUpItemUpdateState(Obj *o) {
    u8 *p = (u8 *)o + 0x7d5;
    struct {
        u32 pad;
        u16 a;
        u16 b;
    } w;
    s32 t;
    switch (*p) {
    case 0:
        if (_ZN13AnimFrameCtrl10isFinishedEv(o->unk_2cc) == 0) {
            break;
        }
        {
            BOOL ok;
            if (Pocket_FindEmpty() == -1) {
                if (Item_IsFurniture(&o->actionItem) != 0) {
                    w.b = 0xfff1;
                    u32 r6 = Item_GetFurnitureIndex(&o->actionItem);
                    if (r6 == Item_GetFurnitureIndex(&w.b)) {
                        ok = TRUE;
                    } else {
                        ok = FALSE;
                    }
                } else {
                    if (o->actionItem == 0xfff1) {
                        ok = TRUE;
                    } else {
                        ok = FALSE;
                    }
                }
                if (ok == FALSE) {
                    if (TalkRequest_AddPlayerMessage() == 0) {
                        break;
                    }
                    _ZN12Unk_020102ec9startAnimEijt(o, 0x6c, 3, 0);
                    s32 r = _ZN12Unk_02006d1415getHeldToolKindEv(o);
                    if (r == 4) {
                        HeldItemModel_PlayAnim(o->heldItemModel, 0, 9, 0);
                    } else if (r == 3) {
                        HeldItemModel_PlayAnim(o->heldItemModel, 0x13, 3, 0);
                    }
                    *p = 1;
                    _ZN9Character17attachTalkRequestEi(o, o);
                    _ZN12Unk_02006d1413setActionFlagEj(o, 0x11);
                    {
                        Sec &s = *o;
                        _ZN10MsgRequest11setFileNameEPKc(&s, sRoomPlayerMsgFile);
                    }
                    o->unk_10a = 2;
                    o->unk_128->unk_08 = 1;
                    break;
                }
            }
        }
        w.a = o->actionItem;
        Pocket_AddFoundItem(&w.a);
        *p = 5;
        break;
    case 1:
        if (o->unk_128 != 0) {
            if (o->unk_128->unk_04 != 0) {
                *p = 2;
                o->msgStep = 3;
            }
        }
        break;
    case 2:
        t = o->msgStep;
        if (t >= 0xf) {
            *p = 3;
            if (o->dropQuery == -1) {
                ECC_START_FAIL(0)
            }
        } else if (o->unk_128 != 0) {
            if (o->unk_128->unk_04 == 0) {
                if (t == 5) {
                    if (MenuCtrl_OpenPocketsFullPickUp(o->actionItem) != 0) {
                        o->msgStep = 6;
                    }
                } else if (t == 6) {
                    if (MenuCtrl_IsFinished() != 0) {
                        o->msgStep = 0xf;
                        o->unk_2dc = 0x1000;
                        if (MenuCtrl_IsResultOk() != 0) {
                            *p = 5;
                            _ZN9Character17detachTalkRequestEi(o, o);
                            _ZN12Unk_02006d1415clearActionFlagEj(o, 0x11);
                            TalkRequest_FinishPlayerMessage();
                        } else {
                            *p = 3;
                            if (o->dropQuery == -1) {
                                ECC_START_FAIL(0)
                            }
                        }
                    }
                }
            }
        }
        break;
    case 3:
        if (o->dropQuery == -1) {
            ECC_START_FAIL(0)
        }
        break;
    case 4:
        if (o->unk_128 != 0) {
            if (o->unk_128->unk_04 == 0) {
                _ZN9Character17detachTalkRequestEi(o, o);
                _ZN12Unk_02006d1415clearActionFlagEj(o, 0x11);
                TalkRequest_FinishPlayerMessage();
                *p = 5;
                _ZN12Unk_020102ec9startAnimEijt(o, 0, 6, 6);
            }
        }
        break;
    case 5:
        o->actionPriority = _ZN12Unk_0200769421getActionDonePriorityEj(o, o->action);
        _ZN11PlayerActor11requestWaitEjjj(o, 3, 1, -1);
        _ZN12Unk_02006d1415clearActionFlagEj(o, 0xd);
        o->msgStep = 0xf;
        break;
    case 6:
        if (TalkRequest_AddPlayerMessage() != 0) {
            *p = 7;
            _ZN9Character17attachTalkRequestEi(o, o);
            _ZN12Unk_02006d1413setActionFlagEj(o, 0x11);
            {
                Sec &s = *o;
                _ZN10MsgRequest11setFileNameEPKc(&s, sRoomPlayerMsgFile);
            }
            o->unk_10a = 0;
            o->unk_128->unk_08 = 1;
        }
        break;
    case 7:
        if (o->unk_128 != 0) {
            if (o->unk_128->unk_04 != 0) {
                *p = 8;
            }
        }
        break;
    case 8:
        if (o->unk_128 != 0) {
            if (o->unk_128->unk_04 == 0) {
                _ZN9Character17detachTalkRequestEi(o, o);
                _ZN12Unk_02006d1415clearActionFlagEj(o, 0x11);
                TalkRequest_FinishPlayerMessage();
                *p = 9;
            }
        }
        break;
    case 9:
        o->actionPriority = _ZN12Unk_0200769421getActionDonePriorityEj(o, o->action);
        _ZN11PlayerActor11requestWaitEjjj(o, 3, 1, -1);
        _ZN12Unk_02006d1415clearActionFlagEj(o, 0xd);
        break;
    case 10:
        if (TalkRequest_AddPlayerMessage() != 0) {
            *p = 0xb;
            _ZN9Character17attachTalkRequestEi(o, o);
            _ZN12Unk_02006d1413setActionFlagEj(o, 0x11);
            {
                Sec &s = *o;
                _ZN10MsgRequest11setFileNameEPKc(&s, sRoomErrorMsgFile);
            }
            o->unk_10a = 1;
            o->unk_128->unk_08 = 1;
        }
        break;
    case 11:
        if (o->unk_128 != 0) {
            if (o->unk_128->unk_04 != 0) {
                *p = 0xc;
            }
        }
        break;
    case 12:
        if (o->unk_128 != 0) {
            if (o->unk_128->unk_04 == 0) {
                _ZN9Character17detachTalkRequestEi(o, o);
                _ZN12Unk_02006d1415clearActionFlagEj(o, 0x11);
                TalkRequest_FinishPlayerMessage();
                o->actionPriority = _ZN12Unk_0200769421getActionDonePriorityEj(o, o->action);
                _ZN11PlayerActor11requestWaitEjjj(o, 3, 1, -1);
            }
        }
        break;
    }
}

extern "C" void PlayerActor_MainPickUpItem(Obj *o) {
    PlayerActor_PickUpItemUpdateAnim(o);
    _ZN12Unk_020102ec18updateBodyColliderEv(o);
    PlayerActor_PickUpItemUpdateScale(o);
    PlayerActor_PickUpItemUpdateState(o);
}

extern "C" void PlayerActor_FtrGrabApproachSetArgs(Tgt *t, s32 x, s32 z, s16 h) {
    t->x = x;
    t->z = z;
    t->h = h;
}

extern "C" s32 PlayerActor_RequestFtrGrabApproach(Obj *o, s32 x, s32 z, s16 h, u32 a, s32 b) {
    Msg m;
    m.func_0200e2c0(0x1d, a, *(s16 *)&b);
    PlayerActor_FtrGrabApproachSetArgs(&m.unk_0c.t, x, z, h);
    s32 r = _ZN11PlayerActor11pushRequestEP19PlayerActionRequest(o, &m);
    _ZN19PlayerActionRequestD1Ev(&m);
    return r;
}

extern "C" void PlayerActor_FtrGrabApproachSetWork(Rec *r, s32 x, s32 z, s16 h) {
    r->x = x;
    r->z = z;
    r->h = h;
    r->flag = 0;
}

extern "C" void PlayerActor_FtrGrabApproachSetNetData(void *p, s32 x, s32 z, s16 h) {
    NetBuf_PackPair20(p, x, z);
    NetBuf_WriteS16B((u8 *)p + 5, h);
}

extern "C" void PlayerActor_FtrGrabApproachGetNetData(void *p, s32 *x, s32 *z, s16 *h) {
    NetBuf_UnpackPair20(p, x, z);
    *h = NetBuf_ReadS16B((u8 *)p + 5);
}

extern "C" void PlayerActor_SetupFtrGrabApproach(Obj *o, Obj *arg) {
    _ZN12Unk_020102ec13startAnimOnceEijt(o, 0x1a, 3, 0);
    V3 *p = (V3 *)((u8 *)arg + 0xc);
    s32 x = p->x;
    s32 z = p->y;
    s16 h = *(s16 *)((u8 *)p + 8);
    PlayerActor_FtrGrabApproachSetWork(&o->unk_7d0.r, x, z, h);
    PlayerActor_FtrGrabApproachSetNetData(o->netData, x, z, h);
}

extern "C" s32 PlayerActor_NetFtrGrabApproach(Obj *o, s32 c) {
    s32 x, z;
    s16 h;
    PlayerActor_FtrGrabApproachGetNetData(o->netData, &x, &z, &h);
    PlayerActor_RequestFtrGrabApproach(o, x, z, h, 5, c);
}

extern "C" void PlayerActor_EndFtrGrabApproach(Obj *o) {
    Rec *r = &o->unk_7d0.r;
    V3 *p = &o->unk_5c;
    p->x = r->x;
    p->z = r->z;
    _ZN12Unk_020102ec9setAngleYEPs(o, &r->h);
}

extern "C" void PlayerActor_FtrGrabApproachMove(Obj *o) {
    Rec *r = &o->unk_7d0.r;
    PlayerActor_StepTowardPose(o, r->x, r->z, r->h);
}

extern "C" void PlayerActor_FtrGrabApproachCheckArrive(Obj *o) {
    Rec *r = &o->unk_7d0.r;
    V3 *v = &o->unk_5c;
    if (_ZN13AnimFrameCtrl10isFinishedEv(o->unk_2cc) && v->x == r->x && v->z == r->z && r->h == o->unk_8e) {
        PlayerActor_RequestFtrHold(o, 1, 0, 5, -1);
    } else if (o->unk_13d == 0) {
        if (r->flag == 0) {
            r->flag = 1;
            if (_ZN13AnimFrameCtrl10isFinishedEv(o->unk_2cc) == 0) {
                _ZN13FtrContactSet13requestToggleEv(FtrContactSet_GetInstance());
            }
        } else {
            o->actionPriority = _ZN12Unk_0200769421getActionDonePriorityEj(o, o->action);
            _ZN11PlayerActor11requestWaitEjjj(o, 3, 1, -1);
        }
    }
}

extern "C" void PlayerActor_MainFtrGrabApproach(Obj *o) {
    PlayerActor_FtrGrabApproachMove(o);
    _ZN12Unk_020102ec11advanceAnimEv(o);
    _ZN12Unk_020102ec17moveWithCollisionEv(o);
    _ZN12Unk_020102ec18updateBodyColliderEv(o);
    _ZN12Unk_020102ec19submitSceneColliderEv(o);
    if (_ZN11CommManager11isLocalSlotEj(gCommManager, o->sessionSlot)) {
        PlayerActor_FtrGrabApproachCheckArrive(o);
    } else {
        o->actionPriority = _ZN12Unk_0200769421getActionDonePriorityEj(o, o->action);
    }
}

extern "C" void PlayerActor_FtrHoldSetArgs(u8 *p, u32 a, u32 b) {
    p[0] = a;
    p[1] = b;
}

extern "C" s32 PlayerActor_RequestFtrHold(Obj *o, u32 a, u32 b, u32 c, s32 e) {
    Msg m;
    m.func_0200e2c0(0x1e, c, *(s16 *)&e);
    PlayerActor_FtrHoldSetArgs(m.unk_0c.b, a, b);
    s32 r = _ZN11PlayerActor11pushRequestEP19PlayerActionRequest(o, &m);
    _ZN19PlayerActionRequestD1Ev(&m);
    return r;
}

extern "C" void PlayerActor_FtrHoldSetWork(u8 *p, s32 v) {
    if (v > 0x333) {
        p[0] = 0;
    } else {
        p[0] = 1;
    }
    p[1] = 0;
}

extern "C" void PlayerActor_FtrHoldSetNetData(u8 *p, u32 a, u32 b) {
    p[0] = a;
    p[1] = b;
}

extern "C" void PlayerActor_FtrHoldGetNetData(u8 *src, u8 *a, u8 *b) {
    *a = src[0];
    *b = src[1];
}

extern "C" void PlayerActor_SetupFtrHold(Obj *o, Obj *arg) {
    u8 *a = (u8 *)arg + 0xc;
    u8 *r = &o->unk_7d0.b[0];
    u32 x = a[0];
    u32 y = a[1];
    s32 t = _ZN11PlayerActor17getInputMagnitudeEv(o);
    if (x != 0) {
        t = 0;
    }
    PlayerActor_FtrHoldSetWork(r, t);
    if (y != 0) {
        _ZN12Unk_020102ec9startAnimEijt(o, 0x1a, 3, 0);
    } else {
        _ZN12Unk_020102ec9startAnimEijt(o, 0x1a, 0, 0);
    }
    PlayerActor_FtrHoldSetNetData(o->netData, x, y);
}

extern "C" void PlayerActor_NetFtrHold(Obj *o, s32 c) {
    u8 l[2];
    PlayerActor_FtrHoldGetNetData(o->netData, &l[0], &l[1]);
    PlayerActor_RequestFtrHold(o, l[0], l[1], 5, c);
}

extern "C" void PlayerActor_FtrHoldUpdate(Obj *o) {
    Unk_ov004_02222980_Pad pad;
    u8 *p = &o->unk_7d0.b[0];
    u8 *q = p + 1;
    switch (*q) {
    case 0:
        if (*p == 0) {
            if (_ZN11PlayerActor17getInputMagnitudeEv(o) < 0x333) {
                *p = 1;
            }
        }
        if (o->unk_13d == 0) {
            o->actionPriority = _ZN12Unk_0200769421getActionDonePriorityEj(o, o->action);
            _ZN11PlayerActor11requestWaitEjjj(o, 3, 1, -1);
        } else if (_ZN11PlayerActor17getInputMagnitudeEv(o) > 0x333) {
            if ((u32)Room_CountOccupants() <= 1) {
                o->actionPriority = _ZN12Unk_0200769421getActionDonePriorityEj(o, o->action);
                switch (_ZN11PlayerActor19getInputDirRelativeEv(o)) {
                case 2:
                    PlayerActor_RequestFtrPull(o, 6, -1);
                    break;
                case 0:
                    PlayerActor_RequestFtrPush(o, 6, -1);
                    break;
                case 3:
                    if (*p != 0) {
                        if (PlayerActor_RequestFtrRotate(o, 1, 6, -1) == 0) {
                            *p = 0;
                        }
                    }
                    break;
                case 1:
                    if (*p != 0) {
                        if (PlayerActor_RequestFtrRotate(o, 0, 6, -1) == 0) {
                            *p = 0;
                        }
                    }
                    break;
                }
            } else {
                if (Scene_InHouseRoom() != 0 && o->sessionSlot == 0) {
                    (*q)++;
                }
            }
        }
        break;
    case 1:
        if (TalkRequest_AddPlayerMessage() != 0) {
            (*q)++;
            _ZN9Character17attachTalkRequestEi(o, o);
            _ZN12Unk_02006d1413setActionFlagEj(o, 0x11);
            {
                Sec &s = *o;
                _ZN10MsgRequest11setFileNameEPKc(&s, sRoomErrorMsgFile);
            }
            o->unk_10a = 1;
            o->unk_128->unk_08 = 1;
        }
        break;
    case 2:
        if (o->unk_128 != 0) {
            if (o->unk_128->unk_04 != 0) {
                *q = *q + 1;
            }
        }
        break;
    case 3:
        if (o->unk_128 != 0) {
            if (o->unk_128->unk_04 == 0) {
                _ZN9Character17detachTalkRequestEi(o, o);
                _ZN12Unk_02006d1415clearActionFlagEj(o, 0x11);
                TalkRequest_FinishPlayerMessage();
                *q = 0;
            }
        }
        break;
    }
}

extern "C" void PlayerActor_MainFtrHold(Obj *o) {
    _ZN12Unk_020102ec11advanceAnimEv(o);
    _ZN12Unk_020102ec17moveWithCollisionEv(o);
    _ZN12Unk_020102ec18updateBodyColliderEv(o);
    _ZN12Unk_020102ec19submitSceneColliderEv(o);
    if (_ZN11CommManager11isLocalSlotEj(gCommManager, o->sessionSlot)) {
        PlayerActor_FtrHoldUpdate(o);
    } else {
        o->actionPriority = _ZN12Unk_0200769421getActionDonePriorityEj(o, o->action);
    }
}

extern "C" void PlayerActor_FtrRotateSetArgs(u8 *p, u32 v) {
    *p = v;
}

extern "C" s32 PlayerActor_RequestFtrRotate(Obj *o, u32 a, s32 b, s32 c) {
    if (!Unk_ov004_02222874_IsOne(gFieldSceneKind)) {
        return 0;
    }
    if ((a != 0 && _ZN13FtrContactSet15canRotatePlus90Ev(FtrContactSet_GetInstance()) != 0) || (a == 0 && _ZN13FtrContactSet16canRotateMinus90Ev(FtrContactSet_GetInstance()) != 0)) {
        Msg m;
        m.func_0200e2c0(0x1f, b, c);
        PlayerActor_FtrRotateSetArgs(m.unk_0c.b, a);
        if (a != 0) {
            _ZN13FtrContactSet17startRotatePlus90Ev(FtrContactSet_GetInstance());
        } else {
            _ZN13FtrContactSet18startRotateMinus90Ev(FtrContactSet_GetInstance());
        }
        s32 r = _ZN11PlayerActor11pushRequestEP19PlayerActionRequest(o, &m);
        _ZN19PlayerActionRequestD1Ev(&m);
        return r;
    }
    if (Scene_InHouseRoom() != 0 && o->sessionSlot == 0) {
        _ZN12Unk_02006d146playSeEj(o, 0x6d);
    }
    return 0;
}

extern "C" void PlayerActor_FtrRotateSetStickFlag(u8 *p, u32 v) {
    *p = v;
}

extern "C" void PlayerActor_SetupFtrRotate(Obj *o, Obj *arg) {
    u8 *p = &o->unk_7d0.b[0];
    if (*((u8 *)arg + 0xc) != 0) {
        _ZN12Unk_020102ec13startAnimOnceEijt(o, 0x1b, 3, 0);
    } else {
        _ZN12Unk_020102ec13startAnimOnceEijt(o, 0x1c, 3, 0);
    }
    PlayerActor_FtrRotateSetStickFlag(p, 0);
}

extern "C" void PlayerActor_NetFtrRotate(void) {
}


}  // namespace ns_02222838

namespace ns_02221ed0 {

struct Unk_ov004_02221ed0_V3 {
    s32 x, y, z;
};

struct Unk_ov004_02221ed0_Rec {
    s32 x;
    s32 z;
    s16 h;
    u8 d;
};

struct Unk_ov004_02221ed0_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

class Unk_ov004_02221ed0_Msg {
public:
    inline Unk_ov004_02221ed0_Msg() { _ZN19PlayerActionRequestC1Ev(this); }
    inline void func_0200e2c0(s32 a, s32 b, s32 c) { _ZN19PlayerActionRequest6assignEiis(this, a, b, c); }
    u8 pad_00[0xc];
    Unk_ov004_02221ed0_Rec unk_0c;
    u8 pad_18[4];
};

struct Unk_ov004_02221ed0_Obj {
    u8 pad_00[0x5c];
    Unk_ov004_02221ed0_V3 position;
    Unk_ov004_02221ed0_V3 prevPosition;
    u8 pad_74[0x8e - 0x74];
    s16 rotY;
    u8 pad_90[0x13d - 0x90];
    u8 actionHeld;
    u8 pad_13e[0x2cc - 0x13e];
    u8 unk_2cc[4];
    Unk_ov004_02221ed0_Bits unk_2d0;
    u8 pad_2d4[0x2e0 - 0x2d4];
    u8 unk_2e0;
    u8 pad_2e1[0x6f0 - 0x2e1];
    s32 bodyPosX;
    u8 pad_6f4[0x6f8 - 0x6f4];
    s32 bodyPosZ;
    u8 pad_6fc[0x7d0 - 0x6fc];
    Unk_ov004_02221ed0_Rec actionWork;
    u8 pad_7dc[0x7ec - 0x7dc];
    s32 action;
    u8 pad_7f0[0x7f8 - 0x7f0];
    s32 actionPriority;
    u32 sessionSlot;
    u8 pad_800[0x8ec - 0x800];
    u8 netData[0x10];
};

typedef Unk_ov004_02221ed0_Obj Obj;
typedef Unk_ov004_02221ed0_V3 V3;
typedef Unk_ov004_02221ed0_Rec Rec;
typedef Unk_ov004_02221ed0_Msg Msg;

extern "C" {
extern void *gCommManager;
extern u8 sAct12Pos[];
extern u8 sSeatApproachDist[];
extern u8 sFtrPullDist[];
extern s16 sSeatSideAngles[];

s32 _ZN11PlayerActor11pushRequestEP19PlayerActionRequest(Obj *o, Msg *m);
s32 _ZN11CommManager11isLocalSlotEj(void *g, u32 a);
s32 _ZN12Unk_0200769421getActionDonePriorityEj(Obj *o, s32 a);
void _ZN12Unk_020102ec11advanceAnimEv(Obj *o);
void _ZN12Unk_020102ec18updateBodyColliderEv(Obj *o);
void _ZN12Unk_020102ec19submitSceneColliderEv(Obj *o);
void _ZN12Unk_020102ec17moveWithCollisionEv(Obj *o);
void _ZN12Unk_02006d1418netFollowTransformEv(Obj *o);
s32 SpotSync_GetReserveResult(void);
void SpotSync_RequestReserve(V3 *v);
void _ZN11PlayerActor11requestWaitEjjj(Obj *o, s32 a, s32 b, s32 c);
void _ZN12Unk_02006d146playSeEj(Obj *o, u32 a);
s32 _ZN11PlayerActor19getInputDirRelativeEv(Obj *o);
s32 _ZN11PlayerActor17getInputMagnitudeEv(Obj *o);
void PlayerActor_StepTowardPose(Obj *o, s32 a, s32 b, s32 c);
void _ZN12Unk_020102ec13startAnimOnceEijt(Obj *o, s32 a, s32 b, s32 c);
void _ZN12Unk_020102ec9startAnimEijt(Obj *o, s32 a, u32 b, u32 c);
void _ZN12Unk_020102ec9setAngleYEPs(Obj *o, s16 *a);
s32 _ZN13AnimFrameCtrl10isFinishedEv(void *p);
s32 _ZN13AnimFrameCtrl5setupEihit(void *p, s32 a, s32 b, s32 c, u32 d);
s32 PlayerActor_OffsetByAngle(V3 *out, Obj *o, void *pos, void *ang, u32 arg);
void NetBuf_UnpackPair20(void *a, s32 *b, s32 *c);
void NetBuf_PackPair20(void *a, s32 b, s32 c);
u16 NetBuf_ReadS16B(void *a);
void NetBuf_WriteS16B(void *a, s32 b);

s32 PlayerActor_RequestFtrHold(Obj *o, s32 a, s32 b, s32 c, s32 d);
s32 PlayerActor_FtrRotateSetStickFlag(u8 *p, s32 a);
s32 FtrContactSet_GetInstance(void);
s32 _ZN13FtrContactSet7canPullEv(void);
s32 _ZN13FtrContactSet7canPushEv(void);
s32 _ZN13FtrContactSet9startPullEv(void);
s32 _ZN13FtrContactSet9startPushEv(void);
s32 Scene_InHouseRoom(void);

s32 PlayerActor_RequestSitDownFront(Obj *o, u32 a, u32 b);
s32 PlayerActor_RequestSitDownSide1(Obj *o, u32 a, u32 b);
s32 PlayerActor_RequestSitDownSide2(Obj *o, u32 a, u32 b);

void PlayerActor_SitDownFrontSetArgs(Rec *t, s32 x, s32 z, s16 h);
void PlayerActor_MainSeatApproach(Obj *o);
void PlayerActor_SeatApproachCheckArrive(Obj *o);
void PlayerActor_SeatApproachMove(Obj *o);
void PlayerActor_EndSeatApproach(Obj *o);
void PlayerActor_NetSeatApproach(Obj *o, s32 a);
void PlayerActor_SetupSeatApproach(Obj *o, Msg *m);
void PlayerActor_SeatApproachGetNetData(u8 *self, s32 *x, s32 *z, s16 *h, u8 *d);
void PlayerActor_SeatApproachSetNetData(u8 *self, s32 x, s32 z, s16 h, u8 d);
void PlayerActor_SeatApproachSetWork(Rec *r, s32 x, s32 z, s16 h, u8 d);
s32 PlayerActor_RequestSeatApproach(Obj *o, s32 x, s32 z, s16 h, u8 d, s32 a, s32 b);
void PlayerActor_SeatApproachSetArgs(Rec *r, s32 x, s32 z, s16 h, u8 d);
void PlayerActor_MainFtrPullMove(Obj *o);
void PlayerActor_FtrPullMoveCheckEnd(Obj *o);
void PlayerActor_FtrPullMoveCollide(Obj *o);
void PlayerActor_EndFtrPullMove(Obj *o);
void PlayerActor_NetFtrPullMove(void);
void PlayerActor_SetupFtrPullMove(Obj *o);
void PlayerActor_FtrPullMoveSetWork(Rec *r, s32 x, s32 z);
s32 PlayerActor_RequestFtrPullMove(Obj *o, s32 a, s32 b);
void PlayerActor_MainFtrPushMove(Obj *o);
void PlayerActor_FtrPushMoveCheckEnd(Obj *o);
void PlayerActor_EndFtrPushMove(Obj *o);
void PlayerActor_NetFtrPushMove(void);
void PlayerActor_SetupFtrPushMove(Obj *o);
void PlayerActor_FtrPushMoveSetWork(Rec *r, s32 x, s32 z);
s32 PlayerActor_RequestFtrPushMove(Obj *o, s32 a, s32 b);
void PlayerActor_MainFtrPull(Obj *o);
void PlayerActor_FtrPullTryMove(Obj *o);
void PlayerActor_NetFtrPull(Obj *o, s32 a);
void PlayerActor_SetupFtrPull(Obj *o);
s32 PlayerActor_RequestFtrPull(Obj *o, s32 a, s32 b);
void PlayerActor_MainFtrPush(Obj *o);
void PlayerActor_FtrPushTryMove(Obj *o);
void PlayerActor_NetFtrPush(Obj *o, s32 a);
void PlayerActor_SetupFtrPush(Obj *o);
s32 PlayerActor_RequestFtrPush(Obj *o, s32 a, s32 b);
void PlayerActor_MainFtrRotate(Obj *o);
void PlayerActor_FtrRotateCheckEnd(Obj *o);
}

extern "C" void PlayerActor_FtrRotateCheckEnd(Obj *o) {
    if (o->unk_2e0 == 3) {
        u8 *f = (u8 *)&o->actionWork;
        s32 t;
        if (*f == 0) {
            if (_ZN11PlayerActor17getInputMagnitudeEv(o) < 0x19a) {
                PlayerActor_FtrRotateSetStickFlag(f, 1);
            }
        }
        o->actionPriority = _ZN12Unk_0200769421getActionDonePriorityEj(o, o->action);
        t = _ZN11PlayerActor19getInputDirRelativeEv(o);
        if (*f != 0 && _ZN11PlayerActor17getInputMagnitudeEv(o) > 0x19a) {
            if (t == 3 || t == 1) {
                PlayerActor_RequestFtrHold(o, 1, 1, 5, -1);
                return;
            }
        }
        if (_ZN13AnimFrameCtrl10isFinishedEv(o->unk_2cc)) {
            if (o->actionHeld) {
                PlayerActor_RequestFtrHold(o, 0, 1, 5, -1);
            } else {
                _ZN11PlayerActor11requestWaitEjjj(o, 3, 1, -1);
            }
        }
    } else {
        if (_ZN13AnimFrameCtrl10isFinishedEv(o->unk_2cc)) {
            _ZN13AnimFrameCtrl5setupEihit(o->unk_2cc, 0, 3, 0x1000, o->unk_2d0.mid);
        }
    }
}

extern "C" void PlayerActor_MainFtrRotate(Obj *o) {
    _ZN12Unk_020102ec11advanceAnimEv(o);
    _ZN12Unk_020102ec18updateBodyColliderEv(o);
    _ZN12Unk_020102ec19submitSceneColliderEv(o);
    PlayerActor_FtrRotateCheckEnd(o);
}

extern "C" s32 PlayerActor_RequestFtrPush(Obj *o, s32 a, s32 b) {
    Msg m;
    m.func_0200e2c0(0x20, a, b);
    s32 r = _ZN11PlayerActor11pushRequestEP19PlayerActionRequest(o, &m);
    _ZN19PlayerActionRequestD1Ev(&m);
    return r;
}

extern "C" void PlayerActor_SetupFtrPush(Obj *o) {
    _ZN12Unk_020102ec13startAnimOnceEijt(o, 0x1d, 3, 0);
    *(u8 *)&o->actionWork = 0;
}

extern "C" void PlayerActor_NetFtrPush(Obj *o, s32 a) {
    PlayerActor_RequestFtrPush(o, 6, a);
}

extern "C" void PlayerActor_FtrPushTryMove(Obj *o) {
    if (_ZN13AnimFrameCtrl10isFinishedEv(o->unk_2cc)) {
        if (_ZN11CommManager11isLocalSlotEj(gCommManager, o->sessionSlot)) {
            u8 r4 = 0;
            FtrContactSet_GetInstance();
            if (_ZN13FtrContactSet7canPushEv() == 0) {
                r4 = 1;
            }
            if (Scene_InHouseRoom() == 0 || o->sessionSlot != 0) {
                r4 |= 2;
            }
            if (r4 != 0) {
                u8 *f = (u8 *)&o->actionWork;
                if (*f == 0) {
                    *f = 1;
                    if (r4 == 1) {
                        _ZN12Unk_02006d146playSeEj(o, 0x6d);
                    }
                }
                s32 t = _ZN11PlayerActor19getInputDirRelativeEv(o);
                if (_ZN11PlayerActor17getInputMagnitudeEv(o) > 0) {
                    if (t == 0) {
                        return;
                    }
                }
                o->actionPriority = _ZN12Unk_0200769421getActionDonePriorityEj(o, o->action);
                PlayerActor_RequestFtrHold(o, 0, 1, 5, -1);
            } else {
                PlayerActor_RequestFtrPushMove(o, 6, -1);
                FtrContactSet_GetInstance();
                _ZN13FtrContactSet9startPushEv();
            }
        } else {
            o->actionPriority = _ZN12Unk_0200769421getActionDonePriorityEj(o, o->action);
        }
    }
}

extern "C" void PlayerActor_MainFtrPush(Obj *o) {
    _ZN12Unk_020102ec11advanceAnimEv(o);
    _ZN12Unk_020102ec17moveWithCollisionEv(o);
    _ZN12Unk_020102ec18updateBodyColliderEv(o);
    _ZN12Unk_020102ec19submitSceneColliderEv(o);
    PlayerActor_FtrPushTryMove(o);
}

extern "C" s32 PlayerActor_RequestFtrPull(Obj *o, s32 a, s32 b) {
    Msg m;
    m.func_0200e2c0(0x21, a, b);
    s32 r = _ZN11PlayerActor11pushRequestEP19PlayerActionRequest(o, &m);
    _ZN19PlayerActionRequestD1Ev(&m);
    return r;
}

extern "C" void PlayerActor_SetupFtrPull(Obj *o) {
    _ZN12Unk_020102ec13startAnimOnceEijt(o, 0x1e, 3, 0);
    *(u8 *)&o->actionWork = 0;
}

extern "C" void PlayerActor_NetFtrPull(Obj *o, s32 a) {
    PlayerActor_RequestFtrPull(o, 6, a);
}

extern "C" void PlayerActor_FtrPullTryMove(Obj *o) {
    if (_ZN13AnimFrameCtrl10isFinishedEv(o->unk_2cc)) {
        if (_ZN11CommManager11isLocalSlotEj(gCommManager, o->sessionSlot)) {
            u8 r4 = 0;
            FtrContactSet_GetInstance();
            if (_ZN13FtrContactSet7canPullEv() == 0) {
                r4 = 1;
            }
            if (Scene_InHouseRoom() == 0 || o->sessionSlot != 0) {
                r4 |= 2;
            }
            if (r4 != 0) {
                u8 *f = (u8 *)&o->actionWork;
                if (*f == 0) {
                    *f = 1;
                    if (r4 == 1) {
                        _ZN12Unk_02006d146playSeEj(o, 0x6d);
                    }
                }
                s32 t = _ZN11PlayerActor19getInputDirRelativeEv(o);
                if (_ZN11PlayerActor17getInputMagnitudeEv(o) > 0) {
                    if (t == 2) {
                        return;
                    }
                }
                o->actionPriority = _ZN12Unk_0200769421getActionDonePriorityEj(o, o->action);
                PlayerActor_RequestFtrHold(o, 0, 1, 5, -1);
            } else {
                PlayerActor_RequestFtrPullMove(o, 6, -1);
                FtrContactSet_GetInstance();
                _ZN13FtrContactSet9startPullEv();
            }
        } else {
            o->actionPriority = _ZN12Unk_0200769421getActionDonePriorityEj(o, o->action);
        }
    }
}

extern "C" void PlayerActor_MainFtrPull(Obj *o) {
    _ZN12Unk_020102ec11advanceAnimEv(o);
    _ZN12Unk_020102ec17moveWithCollisionEv(o);
    _ZN12Unk_020102ec18updateBodyColliderEv(o);
    _ZN12Unk_020102ec19submitSceneColliderEv(o);
    PlayerActor_FtrPullTryMove(o);
}

extern "C" s32 PlayerActor_RequestFtrPushMove(Obj *o, s32 a, s32 b) {
    Msg m;
    m.func_0200e2c0(0x22, a, b);
    s32 r = _ZN11PlayerActor11pushRequestEP19PlayerActionRequest(o, &m);
    _ZN19PlayerActionRequestD1Ev(&m);
    return r;
}

extern "C" void PlayerActor_FtrPushMoveSetWork(Rec *r, s32 x, s32 z) {
    r->x = x;
    r->z = z;
}

extern "C" void PlayerActor_SetupFtrPushMove(Obj *o) {
    V3 v;
    _ZN12Unk_020102ec13startAnimOnceEijt(o, 0x1f, 3, 0);
    PlayerActor_OffsetByAngle(&v, o, &o->position, &o->rotY, (u32)(sAct12Pos + 12));
    PlayerActor_FtrPushMoveSetWork(&o->actionWork, v.x, v.z);
}

extern "C" void PlayerActor_NetFtrPushMove(void) {
}

extern "C" void PlayerActor_EndFtrPushMove(Obj *o) {
    V3 *p = &o->position;
    Rec *r = &o->actionWork;
    p->x = r->x;
    p->z = r->z;
}

extern "C" void PlayerActor_FtrPushMoveCheckEnd(Obj *o) {
    if (_ZN13AnimFrameCtrl10isFinishedEv(o->unk_2cc)) {
        o->actionPriority = _ZN12Unk_0200769421getActionDonePriorityEj(o, o->action);
        if (o->actionHeld) {
            PlayerActor_RequestFtrHold(o, 1, 0, 5, -1);
        } else {
            _ZN11PlayerActor11requestWaitEjjj(o, 3, 1, -1);
        }
    }
}

extern "C" void PlayerActor_MainFtrPushMove(Obj *o) {
    _ZN12Unk_020102ec11advanceAnimEv(o);
    _ZN12Unk_020102ec18updateBodyColliderEv(o);
    _ZN12Unk_020102ec19submitSceneColliderEv(o);
    PlayerActor_FtrPushMoveCheckEnd(o);
}

extern "C" s32 PlayerActor_RequestFtrPullMove(Obj *o, s32 a, s32 b) {
    Msg m;
    m.func_0200e2c0(0x23, a, b);
    s32 r = _ZN11PlayerActor11pushRequestEP19PlayerActionRequest(o, &m);
    _ZN19PlayerActionRequestD1Ev(&m);
    return r;
}

extern "C" void PlayerActor_FtrPullMoveSetWork(Rec *r, s32 x, s32 z) {
    r->x = x;
    r->z = z;
}

extern "C" void PlayerActor_SetupFtrPullMove(Obj *o) {
    V3 v;
    _ZN12Unk_020102ec13startAnimOnceEijt(o, 0x20, 3, 0);
    PlayerActor_OffsetByAngle(&v, o, &o->position, &o->rotY, (u32)sFtrPullDist);
    PlayerActor_FtrPullMoveSetWork(&o->actionWork, v.x, v.z);
}

extern "C" void PlayerActor_NetFtrPullMove(void) {
}

extern "C" void PlayerActor_EndFtrPullMove(Obj *o) {
    V3 *p = &o->position;
    Rec *r = &o->actionWork;
    p->x = r->x;
    p->z = r->z;
    o->prevPosition.x = p->x;
    o->prevPosition.y = p->y;
    o->prevPosition.z = p->z;
}

extern "C" void PlayerActor_FtrPullMoveCollide(Obj *o) {
    volatile V3 old;
    V3 *pv = &o->position;
    s32 y;
    old.x = o->position.x;
    y = pv->y;
    old.y = y;
    old.z = pv->z;
    s32 nz = o->bodyPosZ;
    s32 nx = o->bodyPosX;
    o->position.x = nx;
    o->position.y = y;
    o->position.z = nz;
    o->prevPosition.x = o->position.x;
    o->prevPosition.y = o->position.y;
    o->prevPosition.z = o->position.z;
    _ZN12Unk_020102ec17moveWithCollisionEv(o);
    s32 ox = old.x;
    if (ox == o->bodyPosX) {
        o->position.z = old.z;
    } else {
        o->position.x = ox;
    }
}

extern "C" void PlayerActor_FtrPullMoveCheckEnd(Obj *o) {
    if (_ZN13AnimFrameCtrl10isFinishedEv(o->unk_2cc)) {
        o->actionPriority = _ZN12Unk_0200769421getActionDonePriorityEj(o, o->action);
        if (o->actionHeld) {
            PlayerActor_RequestFtrHold(o, 1, 0, 5, -1);
        } else {
            _ZN11PlayerActor11requestWaitEjjj(o, 3, 1, -1);
        }
    }
}

extern "C" void PlayerActor_MainFtrPullMove(Obj *o) {
    _ZN12Unk_020102ec11advanceAnimEv(o);
    PlayerActor_FtrPullMoveCollide(o);
    _ZN12Unk_020102ec18updateBodyColliderEv(o);
    _ZN12Unk_020102ec19submitSceneColliderEv(o);
    PlayerActor_FtrPullMoveCheckEnd(o);
}

extern "C" void PlayerActor_SeatApproachSetArgs(Rec *r, s32 x, s32 z, s16 h, u8 d) {
    r->x = x;
    r->z = z;
    r->h = h;
    r->d = d;
}

extern "C" s32 PlayerActor_RequestSeatApproach(Obj *o, s32 x, s32 z, s16 h, u8 d, s32 a, s32 b) {
    Msg m;
    m.func_0200e2c0(0x24, a, *(s16 *)&b);
    PlayerActor_SeatApproachSetArgs(&m.unk_0c, x, z, h, d);
    s32 r = _ZN11PlayerActor11pushRequestEP19PlayerActionRequest(o, &m);
    _ZN19PlayerActionRequestD1Ev(&m);
    return r;
}

extern "C" void PlayerActor_SeatApproachSetWork(Rec *r, s32 x, s32 z, s16 h, u8 d) {
    r->x = x;
    r->z = z;
    r->h = h;
    r->d = d;
}

extern "C" void PlayerActor_SeatApproachSetNetData(u8 *self, s32 x, s32 z, s16 h, u8 d) {
    NetBuf_PackPair20(self, x, z);
    NetBuf_WriteS16B(self + 5, h);
    self[7] = d;
}

extern "C" void PlayerActor_SeatApproachGetNetData(u8 *self, s32 *x, s32 *z, s16 *h, u8 *d) {
    NetBuf_UnpackPair20(self, x, z);
    *h = NetBuf_ReadS16B(self + 5);
    *d = self[7];
}

extern "C" void PlayerActor_SetupSeatApproach(Obj *o, Msg *m) {
    Rec *p = &m->unk_0c;
    s16 h = p->h;
    u8 d = p->d;
    s32 z = p->z;
    s32 y = o->position.y;
    s32 x = p->x;
    V3 tmp;
    V3 v;
    s16 t;
    tmp.x = x;
    tmp.y = y;
    tmp.z = z;
    t = h + sSeatSideAngles[d];
    PlayerActor_OffsetByAngle(&v, o, &tmp, &t, (u32)sSeatApproachDist);
    PlayerActor_SeatApproachSetWork(&o->actionWork, v.x, v.z, t, d);
    PlayerActor_SeatApproachSetNetData(o->netData, tmp.x, tmp.z, h, d);
    if (_ZN11CommManager11isLocalSlotEj(gCommManager, o->sessionSlot)) {
        SpotSync_RequestReserve(&tmp);
    }
    _ZN12Unk_020102ec9startAnimEijt(o, 0x1a, 3, 0);
}

extern "C" void PlayerActor_NetSeatApproach(Obj *o, s32 a) {
    struct {
        u8 d;
        u8 pad;
        s16 h;
    } l;
    s32 x, z;
    PlayerActor_SeatApproachGetNetData(o->netData, &x, &z, &l.h, &l.d);
    PlayerActor_RequestSeatApproach(o, x, z, l.h, l.d, 6, a);
}

extern "C" void PlayerActor_EndSeatApproach(Obj *o) {
    Rec *r = &o->actionWork;
    V3 *p = &o->position;
    p->x = r->x;
    p->z = r->z;
    _ZN12Unk_020102ec9setAngleYEPs(o, &r->h);
}

extern "C" void PlayerActor_SeatApproachMove(Obj *o) {
    Rec *r = &o->actionWork;
    PlayerActor_StepTowardPose(o, r->x, r->z, r->h);
}

extern "C" void PlayerActor_SeatApproachCheckArrive(Obj *o) {
    if (_ZN11CommManager11isLocalSlotEj(gCommManager, o->sessionSlot) == 0) {
        o->actionPriority = _ZN12Unk_0200769421getActionDonePriorityEj(o, o->action);
        return;
    }
    switch (SpotSync_GetReserveResult()) {
    case 0:
        return;
    case 1:
        break;
    case 2:
        o->actionPriority = _ZN12Unk_0200769421getActionDonePriorityEj(o, o->action);
        _ZN11PlayerActor11requestWaitEjjj(o, 3, 1, -1);
        return;
    }
    Rec *r = &o->actionWork;
    V3 *p = &o->position;
    if (p->x == r->x) {
        if (p->z == r->z) {
            if (r->h == o->rotY) {
                switch (r->d) {
                case 0:
                    PlayerActor_RequestSitDownFront(o, 6, -1);
                    break;
                case 1:
                    PlayerActor_RequestSitDownSide1(o, 6, -1);
                    break;
                case 2:
                    PlayerActor_RequestSitDownSide2(o, 6, -1);
                    break;
                }
            }
        }
    }
}

extern "C" void PlayerActor_MainSeatApproach(Obj *o) {
    PlayerActor_SeatApproachMove(o);
    _ZN12Unk_020102ec11advanceAnimEv(o);
    _ZN12Unk_020102ec18updateBodyColliderEv(o);
    PlayerActor_SeatApproachCheckArrive(o);
}

extern "C" void PlayerActor_SitDownFrontSetArgs(Rec *t, s32 x, s32 z, s16 h) {
    t->x = x;
    t->z = z;
    t->h = h;
}


}  // namespace ns_02221ed0

namespace ns_022215a8 {

struct Unk_ov004_022215a8_V3 {
    s32 x, y, z;
};

struct Unk_ov004_022215a8_Tgt {
    s32 x, z;
    s16 h;
};

struct Unk_ov004_022215a8_Rec {
    s32 x;
    union {
        s32 z;
        u8 flag;
    } u;
    s16 h;
};

struct Unk_ov004_022215a8_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

class Unk_ov004_022215a8_Msg {
public:
    inline Unk_ov004_022215a8_Msg() { _ZN19PlayerActionRequestC1Ev(this); }
    inline void func_0200e2c0(u32 a, u32 b, u32 c) { _ZN19PlayerActionRequest6assignEiis(this, a, b, c); }
    u8 pad_00[0xc];
    union {
        Unk_ov004_022215a8_Tgt t;
        u16 h;
    } unk_0c;
    u8 pad_18[4];
};

struct Unk_ov004_022215a8_Sub {
    u8 pad_00[0x9c];
    u8 unk_9c[8];
    Unk_ov004_022215a8_Bits unk_a4;
    u8 pad_a8[4];
    s32 unk_ac;
    u8 pad_b0[8];
    u8 unk_b8[0x300 - 0x230 - 0xb8];
};

struct Unk_ov004_022215a8_Obj {
    u8 pad_00[0x5c];
    Unk_ov004_022215a8_V3 position;
    u8 pad_68[0x8e - 0x68];
    s16 rotY;
    u8 pad_90[0xb0 - 0x90];
    s32 actorFlags;
    u8 pad_b4[0x230 - 0xb4];
    Unk_ov004_022215a8_Sub bodyModel;
    u8 pad_300[0x700 - 0x300];
    s32 animId;
    u8 pad_704[0x7d0 - 0x704];
    Unk_ov004_022215a8_Rec actionWork;
    u8 pad_7dc[0x7ec - 0x7dc];
    s32 action;
    u8 pad_7f0[0x7f8 - 0x7f0];
    s32 actionPriority;
    u32 sessionSlot;
    u8 pad_800[0x8ec - 0x800];
    u8 netData[0x10];
};

typedef Unk_ov004_022215a8_Obj Obj;
typedef Unk_ov004_022215a8_V3 V3;
struct Unk_ov004_022215a8_V3c {
    volatile s32 x, y, z;
    Unk_ov004_022215a8_V3c(s32 a, s32 b, s32 c) {
        x = a;
        y = b;
        z = c;
    }
};
typedef Unk_ov004_022215a8_V3c V3c;
typedef Unk_ov004_022215a8_Tgt Tgt;
typedef Unk_ov004_022215a8_Msg Msg;
typedef Unk_ov004_022215a8_Rec Rec;
typedef Unk_ov004_022215a8_Sub Sub;

extern "C" {
extern u8 gFieldSceneKind;
extern void *gCommManager;
extern u8 sAct12Pos[];

s32 _ZN11PlayerActor11pushRequestEP19PlayerActionRequest(Obj *o, Msg *m);
s32 Bgm_GetCurrent(void);
s32 func_020e77cc(s32 a, s32 b, s32 c);
u8 *Snd_GetBeatState(void);
void _ZN10JointBlend5startEi(void *p, s32 n);
void _ZN17TwoLayerAnimModel12updateLayersEv(void *p);
s32 _ZN13AnimFrameCtrl10isFinishedEv(void *p);
s32 _ZN13AnimFrameCtrl14hasPassedFrameEi(void *p, s32 n);
s32 _ZN12Unk_020102ec11advanceAnimEv(Obj *o);
void _ZN12Unk_020102ec19submitSceneColliderEv(Obj *o);
void _ZN12Unk_02006d1418netFollowTransformEv(Obj *o);
void _ZN12Unk_020102ec18updateBodyColliderEv(Obj *o);
void _ZN12Unk_02006d146playSeEj(Obj *o, u32 a);
void _ZN12Unk_020102ec13startAnimOnceEijt(Obj *o, s32 a, s32 b, s32 c);
void _ZN12Unk_020102ec9startAnimEijt(Obj *o, s32 a, u32 b, u32 c);
void _ZN12Unk_020102ec9setAngleYEPs(Obj *o, s16 *a);
s32 _ZN11CommManager11isLocalSlotEj(void *g, u32 a);
s32 _ZN12Unk_0200769421getActionDonePriorityEj(Obj *o, s32 a);
s32 _ZN11PlayerActor17getInputMagnitudeEv(Obj *o);
s32 _ZN11PlayerActor13getInputAngleEv(Obj *o);
s32 Math_AngleToDir4(s16 a);
void NetBuf_UnpackPair20(void *a, s32 *b, s32 *c);
void NetBuf_PackPair20(void *a, s32 b, s32 c);
s32 NetBuf_ReadS16B(void *a);
void NetBuf_WriteS16B(void *a, s32 b);
s32 PlayerActor_OffsetByAngle(V3 *out, Obj *o, void *pos, void *ang, u32 arg);

void FtrMgr_PlaySeatSound0At(void *p);
void FtrMgr_PlaySeatSound1At(V3 *v);
s32 FtrMgr_CanStepForward(void *p, s32 a);
s32 FtrMgr_CanStepSidePlus90(void *p, s32 a);
s32 FtrMgr_CanStepSideMinus90(void *p, s32 a);
s32 PlayerActor_RequestStandUpCheck(Obj *o, s32 a, s32 b, s32 c);

s32 PlayerActor_RequestStandUpSide2(Obj *o, u32 a, u32 b);
void PlayerActor_MainSit(Obj *o);
void PlayerActor_SitReadInput(Obj *o);
void PlayerActor_SitUpdateAnim(Obj *o);
void PlayerActor_EndSit(Obj *o);
s32 PlayerActor_NetSit(Obj *o, s32 a);
void PlayerActor_SetupSit(Obj *o, Obj *arg);
s32 PlayerActor_RequestSit(Obj *o, u32 a, u32 b, u32 c);
void PlayerActor_MainSitDownSide1(Obj *o);
void PlayerActor_SitDownSide1CheckEnd(Obj *o);
void PlayerActor_SitDownSide1Update(Obj *o);
void PlayerActor_EndSitDownSide1(Obj *o);
void PlayerActor_NetSitDownSide1(Obj *o, s32 a);
void PlayerActor_SetupSitDownSide1(Obj *o, Obj *arg);
void PlayerActor_SitDownSide1GetNetData(void *p, s32 *x, s32 *z, s16 *h);
void PlayerActor_SitDownSide1SetNetData(void *p, s32 x, s32 z, s16 h);
void PlayerActor_SitDownSide1SetWork(Tgt *t, s32 x, s32 z, s16 h);
s32 PlayerActor_RequestSitDownSide1At(Obj *o, s32 *x, s32 *z, s16 *h, u32 a, u32 b);
s32 PlayerActor_RequestSitDownSide1(Obj *o, u32 a, u32 b);
void PlayerActor_SitDownSide1SetArgs(Tgt *t, s32 x, s32 z, s16 h);
void PlayerActor_MainSitDownSide2(Obj *o);
void PlayerActor_SitDownSide2CheckEnd(Obj *o);
void PlayerActor_SitDownSide2Update(Obj *o);
void PlayerActor_EndSitDownSide2(Obj *o);
void PlayerActor_NetSitDownSide2(Obj *o, s32 a);
void PlayerActor_SetupSitDownSide2(Obj *o, Obj *arg);
void PlayerActor_SitDownSide2GetNetData(void *p, s32 *x, s32 *z, s16 *h);
void PlayerActor_SitDownSide2SetNetData(void *p, s32 x, s32 z, s16 h);
void PlayerActor_SitDownSide2SetWork(Tgt *t, s32 x, s32 z, s16 h);
s32 PlayerActor_RequestSitDownSide2At(Obj *o, s32 *x, s32 *z, s16 *h, u32 a, u32 b);
s32 PlayerActor_RequestSitDownSide2(Obj *o, u32 a, u32 b);
void PlayerActor_SitDownSide2SetArgs(Tgt *t, s32 x, s32 z, s16 h);
void PlayerActor_MainSitDownFront(Obj *o);
void PlayerActor_SitDownFrontCheckEnd(Obj *o);
void PlayerActor_SitDownFrontUpdate(Obj *o);
void PlayerActor_EndSitDownFront(Obj *o);
void PlayerActor_NetSitDownFront(Obj *o, s32 a);
void PlayerActor_SetupSitDownFront(Obj *o, Obj *arg);
void PlayerActor_SitDownFrontGetNetData(void *p, s32 *x, s32 *z, s16 *h);
void PlayerActor_SitDownFrontSetNetData(void *p, s32 x, s32 z, s16 h);
void PlayerActor_SitDownFrontSetWork(Tgt *t, s32 x, s32 z, s16 h);
s32 PlayerActor_RequestSitDownFrontAt(Obj *o, s32 *x, s32 *z, s16 *h, u32 a, u32 b);
s32 PlayerActor_RequestSitDownFront(Obj *o, u32 a, u32 b);
void PlayerActor_SitDownFrontSetArgs(Tgt *t, s32 x, s32 z, s16 h);
}

static inline BOOL Unk_ov004_022215a8_IsOne(u8 v) {
    return v == 1 ? TRUE : FALSE;
}

extern "C" s32 PlayerActor_RequestSitDownFront(Obj *o, u32 a, u32 b) {
    Msg m;
    V3 v;
    m.func_0200e2c0(0x25, a, b);
    PlayerActor_OffsetByAngle(&v, o, &o->position, &o->rotY, (u32)(sAct12Pos + 12));
    PlayerActor_SitDownFrontSetArgs(&m.unk_0c.t, v.x, v.z, (s16)(o->rotY + 0x8000));
    s32 r = _ZN11PlayerActor11pushRequestEP19PlayerActionRequest(o, &m);
    _ZN19PlayerActionRequestD1Ev(&m);
    return r;
}

extern "C" s32 PlayerActor_RequestSitDownFrontAt(Obj *o, s32 *x, s32 *z, s16 *h, u32 a, u32 b) {
    Msg m;
    m.func_0200e2c0(0x25, a, *(s16 *)&b);
    PlayerActor_SitDownFrontSetArgs(&m.unk_0c.t, *x, *z, *h);
    s32 r = _ZN11PlayerActor11pushRequestEP19PlayerActionRequest(o, &m);
    _ZN19PlayerActionRequestD1Ev(&m);
    return r;
}

extern "C" void PlayerActor_SitDownFrontSetWork(Tgt *t, s32 x, s32 z, s16 h) {
    t->x = x;
    t->z = z;
    t->h = h;
}

extern "C" void PlayerActor_SitDownFrontSetNetData(void *p, s32 x, s32 z, s16 h) {
    NetBuf_PackPair20(p, x, z);
    NetBuf_WriteS16B((u8 *)p + 5, h);
}

extern "C" void PlayerActor_SitDownFrontGetNetData(void *p, s32 *x, s32 *z, s16 *h) {
    NetBuf_UnpackPair20(p, x, z);
    *h = NetBuf_ReadS16B((u8 *)p + 5);
}

extern "C" void PlayerActor_SetupSitDownFront(Obj *o, Obj *arg) {
    s16 h;
    _ZN12Unk_020102ec13startAnimOnceEijt(o, 0x21, 3, 0);
    _ZN12Unk_02006d146playSeEj(o, 0x4c5);
    V3 *p = (V3 *)((u8 *)arg + 0xc);
    h = *(s16 *)((u8 *)p + 8);
    s32 z = p->y;
    s32 y = *(volatile s32 *)&o->position.y;
    s32 x = *(s32 *)((u8 *)arg + 0xc);
    V3c v(x, y, z);
    PlayerActor_SitDownFrontSetWork((Tgt *)&o->actionWork, x, z, h);
    PlayerActor_SitDownFrontSetNetData(o->netData, v.x, v.z, h);
}

extern "C" void PlayerActor_NetSitDownFront(Obj *o, s32 a) {
    s32 x, z;
    s16 h;
    PlayerActor_SitDownFrontGetNetData(o->netData, &x, &z, &h);
    PlayerActor_RequestSitDownFrontAt(o, &x, &z, &h, 6, a);
}

extern "C" void PlayerActor_EndSitDownFront(Obj *o) {
    Rec *r = &o->actionWork;
    V3 *p = &o->position;
    p->x = r->x;
    p->z = r->u.z;
    _ZN12Unk_020102ec9setAngleYEPs(o, &r->h);
}

extern "C" void PlayerActor_SitDownFrontUpdate(Obj *o) {
    V3 v;
    _ZN12Unk_020102ec11advanceAnimEv(o);
    if (_ZN13AnimFrameCtrl14hasPassedFrameEi(o->bodyModel.unk_9c, 0xc)) {
        if (Unk_ov004_022215a8_IsOne(gFieldSceneKind)) {
            Rec *r = &o->actionWork;
            s32 z = r->u.z;
            s32 y = o->position.y;
            s32 x = r->x;
            v.x = x;
            v.y = y;
            v.z = z;
            FtrMgr_PlaySeatSound1At(&v);
        }
    }
}

extern "C" void PlayerActor_SitDownFrontCheckEnd(Obj *o) {
    if (_ZN13AnimFrameCtrl10isFinishedEv(o->bodyModel.unk_9c)) {
        PlayerActor_RequestSit(o, 0, 6, -1);
    }
}

extern "C" void PlayerActor_MainSitDownFront(Obj *o) {
    PlayerActor_SitDownFrontUpdate(o);
    _ZN12Unk_02006d1418netFollowTransformEv(o);
    _ZN12Unk_020102ec18updateBodyColliderEv(o);
    PlayerActor_SitDownFrontCheckEnd(o);
}

extern "C" void PlayerActor_SitDownSide2SetArgs(Tgt *t, s32 x, s32 z, s16 h) {
    t->x = x;
    t->z = z;
    t->h = h;
}

extern "C" s32 PlayerActor_RequestSitDownSide2(Obj *o, u32 a, u32 b) {
    Msg m;
    V3 v;
    m.func_0200e2c0(0x26, a, b);
    PlayerActor_OffsetByAngle(&v, o, &o->position, &o->rotY, (u32)(sAct12Pos + 12));
    PlayerActor_SitDownSide2SetArgs(&m.unk_0c.t, v.x, v.z, (s16)(o->rotY + 0x4000));
    s32 r = _ZN11PlayerActor11pushRequestEP19PlayerActionRequest(o, &m);
    _ZN19PlayerActionRequestD1Ev(&m);
    return r;
}

extern "C" s32 PlayerActor_RequestSitDownSide2At(Obj *o, s32 *x, s32 *z, s16 *h, u32 a, u32 b) {
    Msg m;
    m.func_0200e2c0(0x26, a, *(s16 *)&b);
    PlayerActor_SitDownSide2SetArgs(&m.unk_0c.t, *x, *z, *h);
    s32 r = _ZN11PlayerActor11pushRequestEP19PlayerActionRequest(o, &m);
    _ZN19PlayerActionRequestD1Ev(&m);
    return r;
}

extern "C" void PlayerActor_SitDownSide2SetWork(Tgt *t, s32 x, s32 z, s16 h) {
    t->x = x;
    t->z = z;
    t->h = h;
}

extern "C" void PlayerActor_SitDownSide2SetNetData(void *p, s32 x, s32 z, s16 h) {
    NetBuf_PackPair20(p, x, z);
    NetBuf_WriteS16B((u8 *)p + 5, h);
}

extern "C" void PlayerActor_SitDownSide2GetNetData(void *p, s32 *x, s32 *z, s16 *h) {
    NetBuf_UnpackPair20(p, x, z);
    *h = NetBuf_ReadS16B((u8 *)p + 5);
}

extern "C" void PlayerActor_SetupSitDownSide2(Obj *o, Obj *arg) {
    s16 h;
    _ZN12Unk_020102ec13startAnimOnceEijt(o, 0x22, 0, 0);
    _ZN12Unk_02006d146playSeEj(o, 0x4c5);
    V3 *p = (V3 *)((u8 *)arg + 0xc);
    h = *(s16 *)((u8 *)p + 8);
    s32 z = p->y;
    s32 y = *(volatile s32 *)&o->position.y;
    s32 x = *(s32 *)((u8 *)arg + 0xc);
    V3c v(x, y, z);
    PlayerActor_SitDownSide2SetWork((Tgt *)&o->actionWork, x, z, h);
    PlayerActor_SitDownSide2SetNetData(o->netData, v.x, v.z, h);
}

extern "C" void PlayerActor_NetSitDownSide2(Obj *o, s32 a) {
    s32 x, z;
    s16 h;
    PlayerActor_SitDownSide2GetNetData(o->netData, &x, &z, &h);
    PlayerActor_RequestSitDownSide2At(o, &x, &z, &h, 6, a);
}

extern "C" void PlayerActor_EndSitDownSide2(Obj *o) {
    Rec *r = &o->actionWork;
    V3 *p = &o->position;
    p->x = r->x;
    p->z = r->u.z;
    _ZN12Unk_020102ec9setAngleYEPs(o, &r->h);
}

extern "C" void PlayerActor_SitDownSide2Update(Obj *o) {
    V3 v;
    _ZN12Unk_020102ec11advanceAnimEv(o);
    if (_ZN13AnimFrameCtrl14hasPassedFrameEi(o->bodyModel.unk_9c, 0xc)) {
        if (Unk_ov004_022215a8_IsOne(gFieldSceneKind)) {
            Rec *r = &o->actionWork;
            s32 z = r->u.z;
            s32 y = o->position.y;
            s32 x = r->x;
            v.x = x;
            v.y = y;
            v.z = z;
            FtrMgr_PlaySeatSound1At(&v);
        }
    }
}

extern "C" void PlayerActor_SitDownSide2CheckEnd(Obj *o) {
    if (_ZN13AnimFrameCtrl10isFinishedEv(o->bodyModel.unk_9c)) {
        PlayerActor_RequestSit(o, 0, 6, -1);
    }
}

extern "C" void PlayerActor_MainSitDownSide2(Obj *o) {
    PlayerActor_SitDownSide2Update(o);
    _ZN12Unk_02006d1418netFollowTransformEv(o);
    _ZN12Unk_020102ec18updateBodyColliderEv(o);
    PlayerActor_SitDownSide2CheckEnd(o);
}

extern "C" void PlayerActor_SitDownSide1SetArgs(Tgt *t, s32 x, s32 z, s16 h) {
    t->x = x;
    t->z = z;
    t->h = h;
}

extern "C" s32 PlayerActor_RequestSitDownSide1(Obj *o, u32 a, u32 b) {
    Msg m;
    V3 v;
    m.func_0200e2c0(0x27, a, b);
    PlayerActor_OffsetByAngle(&v, o, &o->position, &o->rotY, (u32)(sAct12Pos + 12));
    PlayerActor_SitDownSide1SetArgs(&m.unk_0c.t, v.x, v.z, (s16)(o->rotY - 0x4000));
    s32 r = _ZN11PlayerActor11pushRequestEP19PlayerActionRequest(o, &m);
    _ZN19PlayerActionRequestD1Ev(&m);
    return r;
}

extern "C" s32 PlayerActor_RequestSitDownSide1At(Obj *o, s32 *x, s32 *z, s16 *h, u32 a, u32 b) {
    Msg m;
    m.func_0200e2c0(0x27, a, *(s16 *)&b);
    PlayerActor_SitDownSide1SetArgs(&m.unk_0c.t, *x, *z, *h);
    s32 r = _ZN11PlayerActor11pushRequestEP19PlayerActionRequest(o, &m);
    _ZN19PlayerActionRequestD1Ev(&m);
    return r;
}

extern "C" void PlayerActor_SitDownSide1SetWork(Tgt *t, s32 x, s32 z, s16 h) {
    t->x = x;
    t->z = z;
    t->h = h;
}

extern "C" void PlayerActor_SitDownSide1SetNetData(void *p, s32 x, s32 z, s16 h) {
    NetBuf_PackPair20(p, x, z);
    NetBuf_WriteS16B((u8 *)p + 5, h);
}

extern "C" void PlayerActor_SitDownSide1GetNetData(void *p, s32 *x, s32 *z, s16 *h) {
    NetBuf_UnpackPair20(p, x, z);
    *h = NetBuf_ReadS16B((u8 *)p + 5);
}

extern "C" void PlayerActor_SetupSitDownSide1(Obj *o, Obj *arg) {
    s16 h;
    _ZN12Unk_020102ec13startAnimOnceEijt(o, 0x23, 0, 0);
    _ZN12Unk_02006d146playSeEj(o, 0x4c5);
    V3 *p = (V3 *)((u8 *)arg + 0xc);
    h = *(s16 *)((u8 *)p + 8);
    s32 z = p->y;
    s32 y = *(volatile s32 *)&o->position.y;
    s32 x = *(s32 *)((u8 *)arg + 0xc);
    V3c v(x, y, z);
    PlayerActor_SitDownSide1SetWork((Tgt *)&o->actionWork, x, z, h);
    PlayerActor_SitDownSide1SetNetData(o->netData, v.x, v.z, h);
}

extern "C" void PlayerActor_NetSitDownSide1(Obj *o, s32 a) {
    s32 x, z;
    s16 h;
    PlayerActor_SitDownSide1GetNetData(o->netData, &x, &z, &h);
    PlayerActor_RequestSitDownSide1At(o, &x, &z, &h, 6, a);
}

extern "C" void PlayerActor_EndSitDownSide1(Obj *o) {
    Rec *r = &o->actionWork;
    V3 *p = &o->position;
    p->x = r->x;
    p->z = r->u.z;
    _ZN12Unk_020102ec9setAngleYEPs(o, &r->h);
}

extern "C" void PlayerActor_SitDownSide1Update(Obj *o) {
    V3 v;
    _ZN12Unk_020102ec11advanceAnimEv(o);
    if (_ZN13AnimFrameCtrl14hasPassedFrameEi(o->bodyModel.unk_9c, 0xc)) {
        if (Unk_ov004_022215a8_IsOne(gFieldSceneKind)) {
            Rec *r = &o->actionWork;
            s32 z = r->u.z;
            s32 y = o->position.y;
            s32 x = r->x;
            v.x = x;
            v.y = y;
            v.z = z;
            FtrMgr_PlaySeatSound1At(&v);
        }
    }
}

extern "C" void PlayerActor_SitDownSide1CheckEnd(Obj *o) {
    if (_ZN13AnimFrameCtrl10isFinishedEv(o->bodyModel.unk_9c)) {
        PlayerActor_RequestSit(o, 0, 6, -1);
    }
}

extern "C" void PlayerActor_MainSitDownSide1(Obj *o) {
    PlayerActor_SitDownSide1Update(o);
    _ZN12Unk_02006d1418netFollowTransformEv(o);
    _ZN12Unk_020102ec18updateBodyColliderEv(o);
    PlayerActor_SitDownSide1CheckEnd(o);
}

extern "C" s32 PlayerActor_RequestSit(Obj *o, u32 a, u32 b, u32 c) {
    Msg m;
    m.func_0200e2c0(0x28, b, c);
    m.unk_0c.h = a;
    s32 r = _ZN11PlayerActor11pushRequestEP19PlayerActionRequest(o, &m);
    _ZN19PlayerActionRequestD1Ev(&m);
    return r;
}

extern "C" void PlayerActor_SetupSit(Obj *o, Obj *arg) {
    u16 *r2 = (u16 *)((u8 *)arg + 0xc);
    if (o->animId != 0x24) {
        _ZN12Unk_020102ec9startAnimEijt(o, 0x24, *r2, 0);
    }
    Rec *r = &o->actionWork;
    r->x = o->actorFlags;
    r->u.flag = 0;
}

extern "C" s32 PlayerActor_NetSit(Obj *o, s32 a) {
    return PlayerActor_RequestSit(o, 0, 6, a);
}

extern "C" void PlayerActor_EndSit(Obj *o) {
    o->actorFlags = o->actionWork.x;
}

extern "C" void PlayerActor_SitUpdateAnim(Obj *o) {
    u8 *p;
    if (func_020e77cc(Bgm_GetCurrent(), 0x63, 0xab) != 0 && (p = Snd_GetBeatState()) != 0 && (s8)p[3] != 1) {
        Sub *sb = &o->bodyModel;
        Rec *r = &o->actionWork;
        if (r->u.flag == 0) {
            r->u.flag = 1;
            if (sb->unk_a4.mid != 0) {
                _ZN10JointBlend5startEi(sb->unk_b8, 0xa);
            }
        }
        *(u32 *)&sb->unk_a4 = 0;
        sb->unk_ac = *(s32 *)(p + 0xc);
        _ZN17TwoLayerAnimModel12updateLayersEv(sb);
        sb->unk_ac = 0x1000;
        o->actorFlags = 0;
    } else {
        _ZN12Unk_020102ec11advanceAnimEv(o);
    }
}

extern "C" void PlayerActor_SitReadInput(Obj *o) {
    if (_ZN11PlayerActor17getInputMagnitudeEv(o) > 0) {
        s32 t = _ZN11PlayerActor13getInputAngleEv(o);
        switch (Math_AngleToDir4((s16)(o->rotY - t))) {
        case 0:
            if (FtrMgr_CanStepForward(&o->position, o->rotY)) {
                PlayerActor_RequestStandUpCheck(o, 0, 6, -1);
            }
            break;
        case 3:
            if (FtrMgr_CanStepSidePlus90(&o->position, o->rotY)) {
                PlayerActor_RequestStandUpCheck(o, 1, 6, -1);
            }
            break;
        case 1:
            if (FtrMgr_CanStepSideMinus90(&o->position, o->rotY)) {
                PlayerActor_RequestStandUpCheck(o, 2, 6, -1);
            }
            break;
        }
    }
}

extern "C" void PlayerActor_MainSit(Obj *o) {
    if (Unk_ov004_022215a8_IsOne(gFieldSceneKind)) {
        FtrMgr_PlaySeatSound0At(&o->position);
    }
    PlayerActor_SitUpdateAnim(o);
    _ZN12Unk_020102ec19submitSceneColliderEv(o);
    if (_ZN11CommManager11isLocalSlotEj(gCommManager, o->sessionSlot)) {
        PlayerActor_SitReadInput(o);
    } else {
        o->actionPriority = _ZN12Unk_0200769421getActionDonePriorityEj(o, o->action);
    }
}

extern "C" s32 PlayerActor_RequestStandUpSide2(Obj *o, u32 a, u32 b) {
    Msg m;
    m.func_0200e2c0(0x29, a, b);
    s32 r = _ZN11PlayerActor11pushRequestEP19PlayerActionRequest(o, &m);
    _ZN19PlayerActionRequestD1Ev(&m);
    return r;
}


}  // namespace ns_022215a8

namespace ns_02220c78 {

struct Unk_ov004_02220c78_V3 {
    s32 x, y, z;
};

struct Unk_ov004_02220c78_Rec {
    u32 unk_00;
    u32 unk_04;
    s16 unk_08;
    u8 unk_0a;
    u8 unk_0b;
    u8 unk_0c;
};

class Unk_ov004_02220c78_Msg {
public:
    inline Unk_ov004_02220c78_Msg() { _ZN19PlayerActionRequestC1Ev(this); }
    inline void func_0200e2c0(s32 a, s32 b, s32 c) { _ZN19PlayerActionRequest6assignEiis(this, a, b, c); }
    u8 pad_00[0xc];
    u8 unk_0c;
    u8 pad_0d[0x1c - 0xd];
};

struct Unk_ov004_02220c78_Sub2cc {
    u32 unk_00;
};

struct Unk_ov004_02220c78_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

struct Unk_ov004_02220c78_Obj {
    u8 pad_00[0x5c];
    Unk_ov004_02220c78_V3 position;
    u8 pad_68[0x8e - 0x68];
    s16 rotY;
    u8 pad_90[0x170 - 0x90];
    u8 bodyCollider[0x50];
    u8 subCollider[0x3c];
    u8 unk_1fc;
    u8 pad_1fd[0x2cc - 0x1fd];
    Unk_ov004_02220c78_Sub2cc unk_2cc;
    u8 pad_2d0[0x2d4 - 0x2d0];
    Unk_ov004_02220c78_Bits unk_2d4;
    u8 pad_2d8[0x2e0 - 0x2d8];
    u8 unk_2e0;
    u8 pad_2e1[0x700 - 0x2e1];
    s32 animId;
    u8 pad_704[0x7d0 - 0x704];
    Unk_ov004_02220c78_Rec actionWork;
    u8 pad_7e0[0x7ec - 0x7e0];
    u32 action;
    u8 pad_7f0[0x7f8 - 0x7f0];
    s32 actionPriority;
    u32 sessionSlot;
    u8 pad_800[0x8ec - 0x800];
    u8 netData[8];
    u8 pad_8f4[0xc80 - 0x8f4];
    u16 netSeq;
};

typedef Unk_ov004_02220c78_Obj Obj;
typedef Unk_ov004_02220c78_V3 V3;
typedef Unk_ov004_02220c78_Rec Rec;
typedef Unk_ov004_02220c78_Msg Msg;

extern "C" {
extern void *gCommManager;
extern u8 gFieldSceneKind[];
extern u8 sAct12Pos[];
extern s16 sSeatSideAngles[];

void _ZN12Unk_020102ec11advanceAnimEv(Obj *o);
void _ZN12Unk_020102ec18updateBodyColliderEv(Obj *o);
void _ZN12Unk_02006d1415clearActionFlagEj(Obj *o, u32 a);
void _ZN12Unk_02006d1413setActionFlagEj(Obj *o, u32 a);
void _ZN12Unk_02006d146playSeEj(Obj *o, u32 a);
void PlayerActor_StepTowardPose(Obj *o, u32 a, u32 b, s32 c);
s32 _ZN11PlayerActor11pushRequestEP19PlayerActionRequest(Obj *o, Msg *m);
s32 _ZN11CommManager11isLocalSlotEj(void *g, u32 a);
s32 _ZN13AnimFrameCtrl10isFinishedEv(void *p);
s32 _ZN13AnimFrameCtrl14hasPassedFrameEi(void *p, u32 a);
void _ZN12Unk_020102ec13startAnimOnceEijt(Obj *o, s32 a, u32 b, u32 c);
void _ZN12Unk_020102ec9startAnimEijt(Obj *o, s32 a, u32 b, u32 c);
s32 _ZN12Unk_0200769421getActionDonePriorityEj(Obj *o, u32 a);
void _ZN11PlayerActor11requestWaitEjjj(Obj *o, s32 a, s32 b, s32 c);
void _ZN12Unk_020102ec17setBodyColliderAtEP16Unk_020107c8_BlkPj(Obj *o, V3 *v, void *p);
void _ZN12Unk_020102ec14setSubColliderEjjj(Obj *o, V3 *v, s32 a, s32 b);
void _ZN13ActorCollider6submitEv(void *p);
void SpotSync_Release(s32 a);
s32 SpotSync_GetStandUpSpotResult();
void SpotSync_RequestStandUpSpot(V3 *v);
void _ZN12Unk_020102ec9setAngleYEPs(Obj *o, s16 *a);
s32 PlayerActor_OffsetByAngle(V3 *out, Obj *o, void *pos, void *ang, u32 arg);
void NetBuf_UnpackPair20(void *a, s32 *b, s32 *c);
void NetBuf_PackPair20(void *a, s32 b, s32 c);
u16 NetBuf_ReadS16B(void *a);
void NetBuf_WriteS16B(void *a, s32 b);

void func_ov004_02233d00(V3 *p, s32 a);
void func_ov004_02233d04(V3 *p, s32 a);
void FtrMgr_PlaySeatSound2At(V3 *p);
void FtrMgr_PlaySeatSound0At(V3 *p);
s32 PlayerActor_RequestSit(Obj *o, s32 a, s32 b, s32 c);
s32 PlayerActor_RequestStandUpSide2(Obj *o, s32 a, s32 b);

s32 PlayerActor_RequestStorageClose(Obj *o, u32 a, s32 b, s32 c);
void PlayerActor_StorageCloseSetArgs(u32 *p, u32 v);
void PlayerActor_StorageHoldGetNetData(u8 *p, u8 *out);
void PlayerActor_StorageHoldSetNetData(u8 *p, u32 v);
void PlayerActor_StorageHoldSetWork(u32 *p, u32 v);
s32 PlayerActor_RequestStorageHold(Obj *o, u32 a, s32 b, s32 c);
void PlayerActor_StorageHoldSetArgs(u8 *p, u32 v);
void PlayerActor_StorageOpenCheckEnd(Obj *o);
void PlayerActor_StorageOpenStartAnim(Obj *o);
void PlayerActor_StorageOpenMove(Obj *o);
void PlayerActor_StorageOpenGetNetData(u8 *self, u8 *o1, s32 *o2, s32 *o3, u16 *o4);
void PlayerActor_StorageOpenSetNetData(u8 *self, u8 b, s32 x, s32 y, s16 h);
void PlayerActor_StorageOpenSetWork(Rec *r, u8 d, u32 a, u32 b, s16 c);
s32 PlayerActor_RequestStorageOpen(Obj *o, u8 b, u32 x, u32 y, s16 c, s32 d, s32 e);
void PlayerActor_StorageOpenSetArgs(void *r, u8 d, u32 a, u32 b, s16 c);
void PlayerActor_StandUpFrontCheckEnd(Obj *o);
void PlayerActor_StandUpFrontMoveRemote(Obj *o);
void PlayerActor_StandUpFrontUpdateAnim(Obj *o);
void PlayerActor_StandUpFrontSetWork(V3 *d, V3 *s);
s32 PlayerActor_RequestStandUpFront(Obj *o, s32 a, s32 b);
void PlayerActor_StandUpCheckResult(Obj *o);
void PlayerActor_StandUpCheckTurn(Obj *o);
void PlayerActor_StandUpCheckSetWork(V3 *d, V3 *s, u8 b);
s32 PlayerActor_RequestStandUpCheck(Obj *o, u32 a, s32 b, s32 c);
void PlayerActor_StandUpCheckSetArgs(u8 *p, u32 v);
void PlayerActor_StandUpSide1CheckEnd(Obj *o);
s32 PlayerActor_RequestStandUpSide1(Obj *o, s32 a, s32 b);
void PlayerActor_StandUpSide2CheckEnd(Obj *o);
}

static inline BOOL Unk_ov004_02220e48_IsZero(u32 v) {
    return v == 0 ? TRUE : FALSE;
}

static inline BOOL Unk_ov004_022211ac_Flag() {
    if (gFieldSceneKind[0] == 1) return TRUE;
    return FALSE;
}

extern "C" void PlayerActor_SetupStandUpSide2(Obj *o) {
    s32 t = o->rotY;
    t -= 0x4000;
    *(u16 *)&o->actionWork = t;
    _ZN12Unk_020102ec13startAnimOnceEijt(o, 0x26, 0, 0);
    _ZN12Unk_02006d146playSeEj(o, 0x4c9);
}

extern "C" s32 PlayerActor_NetStandUpSide2(Obj *o, s32 a) {
    return PlayerActor_RequestStandUpSide2(o, 6, a);
}

extern "C" void PlayerActor_EndStandUpSide2(Obj *o) {
    _ZN12Unk_020102ec9setAngleYEPs(o, (s16 *)&o->actionWork);
}

extern "C" void PlayerActor_StandUpSide2CheckEnd(Obj *o) {
    if (_ZN13AnimFrameCtrl10isFinishedEv(&o->unk_2cc)) {
        PlayerActor_RequestStandUpFront(o, 6, -1);
    }
}

extern "C" void PlayerActor_MainStandUpSide2(Obj *o) {
    _ZN12Unk_020102ec11advanceAnimEv(o);
    _ZN12Unk_020102ec18updateBodyColliderEv(o);
    PlayerActor_StandUpSide2CheckEnd(o);
}

extern "C" s32 PlayerActor_RequestStandUpSide1(Obj *o, s32 a, s32 b) {
    Msg m;
    m.func_0200e2c0(0x2a, a, b);
    s32 r = _ZN11PlayerActor11pushRequestEP19PlayerActionRequest(o, &m);
    _ZN19PlayerActionRequestD1Ev(&m);
    return r;
}

extern "C" void PlayerActor_SetupStandUpSide1(Obj *o) {
    s32 t = o->rotY;
    t += 0x4000;
    *(u16 *)&o->actionWork = t;
    _ZN12Unk_020102ec13startAnimOnceEijt(o, 0x25, 0, 0);
    _ZN12Unk_02006d146playSeEj(o, 0x4c9);
}

extern "C" s32 PlayerActor_NetStandUpSide1(Obj *o, s32 a) {
    return PlayerActor_RequestStandUpSide1(o, 6, a);
}

extern "C" void PlayerActor_EndStandUpSide1(Obj *o) {
    _ZN12Unk_020102ec9setAngleYEPs(o, (s16 *)&o->actionWork);
}

extern "C" void PlayerActor_StandUpSide1CheckEnd(Obj *o) {
    if (_ZN13AnimFrameCtrl10isFinishedEv(&o->unk_2cc)) {
        PlayerActor_RequestStandUpFront(o, 6, -1);
    }
}

extern "C" void PlayerActor_MainStandUpSide1(Obj *o) {
    _ZN12Unk_020102ec11advanceAnimEv(o);
    _ZN12Unk_020102ec18updateBodyColliderEv(o);
    PlayerActor_StandUpSide1CheckEnd(o);
}

extern "C" void PlayerActor_StandUpCheckSetArgs(u8 *p, u32 v) {
    *p = v;
}

extern "C" s32 PlayerActor_RequestStandUpCheck(Obj *o, u32 a, s32 b, s32 c) {
    Msg m;
    m.func_0200e2c0(0x2b, b, c);
    PlayerActor_StandUpCheckSetArgs(&m.unk_0c, a);
    s32 r = _ZN11PlayerActor11pushRequestEP19PlayerActionRequest(o, &m);
    _ZN19PlayerActionRequestD1Ev(&m);
    return r;
}

extern "C" void PlayerActor_StandUpCheckSetWork(V3 *d, V3 *s, u8 b) {
    d->x = s->x;
    d->y = s->y;
    d->z = s->z;
    ((u8 *)d)[0xc] = b;
}

extern "C" void PlayerActor_SetupStandUpCheck(Obj *o, Msg *m) {
    V3 pos;
    V3 tmp;
    s16 t;
    u8 idx = m->unk_0c;
    t = o->rotY - sSeatSideAngles[idx];
    PlayerActor_OffsetByAngle(&pos, o, &o->position, &t, (u32)(sAct12Pos + 12));
    tmp.x = pos.x;
    tmp.y = pos.y;
    tmp.z = pos.z;
    PlayerActor_StandUpCheckSetWork((V3 *)&o->actionWork, &tmp, idx);
    if (_ZN11CommManager11isLocalSlotEj(gCommManager, o->sessionSlot)) {
        SpotSync_RequestStandUpSpot(&pos);
    }
}

extern "C" void PlayerActor_NetStandUpCheck() {
}

extern "C" void PlayerActor_StandUpCheckTurn(Obj *o) {
    V3 v;
    V3 *s = (V3 *)&o->actionWork;
    v.x = s->x;
    v.y = s->y;
    v.z = s->z;
    _ZN12Unk_020102ec14setSubColliderEjjj(o, &v, 0x1000, 0x1000);
    _ZN13ActorCollider6submitEv(o->subCollider);
}

extern "C" void PlayerActor_StandUpCheckResult(Obj *o) {
    Rec *r;
    switch (SpotSync_GetStandUpSpotResult()) {
    case 0:
        return;
    case 1:
        o->actionPriority = _ZN12Unk_0200769421getActionDonePriorityEj(o, o->action);
        break;
    case 2:
        o->actionPriority = _ZN12Unk_0200769421getActionDonePriorityEj(o, o->action);
        PlayerActor_RequestSit(o, 3, 6, -1);
        return;
    }
    r = &o->actionWork;
    if (o->unk_1fc != 0) {
        PlayerActor_RequestSit(o, 3, 6, -1);
        return;
    }
    switch (r->unk_0c) {
    case 0:
        PlayerActor_RequestStandUpFront(o, 6, -1);
        break;
    case 1:
        PlayerActor_RequestStandUpSide1(o, 6, -1);
        break;
    case 2:
        PlayerActor_RequestStandUpSide2(o, 6, -1);
        break;
    }
}

extern "C" void PlayerActor_MainStandUpCheck(Obj *o) {
    if (Unk_ov004_022211ac_Flag()) {
        FtrMgr_PlaySeatSound0At(&o->position);
    }
    _ZN12Unk_020102ec11advanceAnimEv(o);
    _ZN12Unk_020102ec18updateBodyColliderEv(o);
    PlayerActor_StandUpCheckResult(o);
    PlayerActor_StandUpCheckTurn(o);
}

extern "C" s32 PlayerActor_RequestStandUpFront(Obj *o, s32 a, s32 b) {
    Msg m;
    m.func_0200e2c0(0x2c, a, b);
    s32 r = _ZN11PlayerActor11pushRequestEP19PlayerActionRequest(o, &m);
    _ZN19PlayerActionRequestD1Ev(&m);
    return r;
}

extern "C" void PlayerActor_StandUpFrontSetWork(V3 *d, V3 *s) {
    d->x = s->x;
    d->y = s->y;
    d->z = s->z;
}

extern "C" void PlayerActor_SetupStandUpFront(Obj *o) {
    V3 v;
    _ZN12Unk_020102ec13startAnimOnceEijt(o, 0x27, 0, 0);
    PlayerActor_OffsetByAngle(&v, o, &o->position, &o->rotY, (u32)(sAct12Pos + 12));
    PlayerActor_StandUpFrontSetWork((V3 *)&o->actionWork, &v);
    if (Unk_ov004_022211ac_Flag()) {
        FtrMgr_PlaySeatSound2At(&o->position);
    }
}

extern "C" void PlayerActor_NetStandUpFront(Obj *o, s32 a) {
    s32 t = o->action;
    if ((u32)(t - 0x29) <= 1) return;
    if (t == 0x2c) {
        o->netSeq = a;
    } else {
        PlayerActor_RequestStandUpFront(o, 6, a);
    }
}

extern "C" void PlayerActor_EndStandUpFront(Obj *o) {
    if (_ZN11CommManager11isLocalSlotEj(gCommManager, o->sessionSlot)) {
        SpotSync_Release(0);
    }
    V3 *s = (V3 *)&o->actionWork;
    V3 *d = &o->position;
    o->position.x = s->x;
    d->y = s->y;
    d->z = s->z;
}

extern "C" void PlayerActor_StandUpFrontUpdateAnim(Obj *o) {
    _ZN12Unk_020102ec11advanceAnimEv(o);
    if (_ZN13AnimFrameCtrl14hasPassedFrameEi(&o->unk_2cc, 0xd)) {
        _ZN12Unk_02006d146playSeEj(o, 0x4c6);
    }
}

extern "C" void PlayerActor_StandUpFrontMoveRemote(Obj *o) {
    V3 v;
    if (_ZN11CommManager11isLocalSlotEj(gCommManager, o->sessionSlot)) {
        _ZN12Unk_020102ec18updateBodyColliderEv(o);
    } else {
        V3 *s = (V3 *)&o->actionWork;
        v.x = s->x;
        v.y = s->y;
        v.z = s->z;
        _ZN12Unk_020102ec17setBodyColliderAtEP16Unk_020107c8_BlkPj(o, &v, &o->action);
        _ZN13ActorCollider6submitEv(o->bodyCollider);
    }
}

extern "C" void PlayerActor_StandUpFrontCheckEnd(Obj *o) {
    if (_ZN13AnimFrameCtrl10isFinishedEv(&o->unk_2cc)) {
        o->actionPriority = _ZN12Unk_0200769421getActionDonePriorityEj(o, o->action);
        _ZN11PlayerActor11requestWaitEjjj(o, 0, 1, -1);
    }
}

extern "C" void PlayerActor_MainStandUpFront(Obj *o) {
    PlayerActor_StandUpFrontUpdateAnim(o);
    PlayerActor_StandUpFrontMoveRemote(o);
    PlayerActor_StandUpFrontCheckEnd(o);
}

extern "C" void PlayerActor_StorageOpenSetArgs(void *r, u8 d, u32 a, u32 b, s16 c) {
    Rec *p = (Rec *)r;
    p->unk_0a = d;
    p->unk_00 = a;
    p->unk_04 = b;
    p->unk_08 = c;
}

extern "C" s32 PlayerActor_RequestStorageOpen(Obj *o, u8 b, u32 x, u32 y, s16 c, s32 d, s32 e) {
    Msg m;
    m.func_0200e2c0(0x2d, d, *(s16 *)&e);
    PlayerActor_StorageOpenSetArgs(&m.unk_0c, b, x, y, c);
    s32 r = _ZN11PlayerActor11pushRequestEP19PlayerActionRequest(o, &m);
    _ZN19PlayerActionRequestD1Ev(&m);
    return r;
}

extern "C" void PlayerActor_StorageOpenSetWork(Rec *r, u8 d, u32 a, u32 b, s16 c) {
    r->unk_0a = d;
    r->unk_00 = a;
    r->unk_04 = b;
    r->unk_08 = c;
}

extern "C" void PlayerActor_StorageOpenSetNetData(u8 *self, u8 b, s32 x, s32 y, s16 h) {
    self[7] = b;
    NetBuf_PackPair20(self, x, y);
    NetBuf_WriteS16B(self + 5, h);
}

extern "C" void PlayerActor_StorageOpenGetNetData(u8 *self, u8 *o1, s32 *o2, s32 *o3, u16 *o4) {
    u8 b = self[7];
    *o1 = b;
    NetBuf_UnpackPair20(self, o2, o3);
    *o4 = NetBuf_ReadS16B(self + 5);
}

extern "C" void PlayerActor_SetupStorageOpen(Obj *o, Msg *m) {
    Rec *p = (Rec *)&m->unk_0c;
    u8 d = p->unk_0a;
    u32 a = *(u32 *)&m->unk_0c;
    u32 b = p->unk_04;
    s16 c = p->unk_08;
    PlayerActor_StorageOpenSetWork(&o->actionWork, d, a, b, c);
    PlayerActor_StorageOpenSetNetData(o->netData, d, a, b, c);
    o->unk_2e0 = 1;
}

extern "C" void PlayerActor_NetStorageOpen(Obj *o, s32 a) {
    u8 b;
    u16 h;
    s32 x, y;
    PlayerActor_StorageOpenGetNetData(o->netData, &b, &x, &y, &h);
    PlayerActor_RequestStorageOpen(o, b, x, y, (s16)h, 6, a);
}

extern "C" void PlayerActor_StorageOpenMove(Obj *o) {
    Rec *r = &o->actionWork;
    PlayerActor_StepTowardPose(o, r->unk_00, r->unk_04, r->unk_08);
}

extern "C" void PlayerActor_StorageOpenStartAnim(Obj *o) {
    s32 k;
    if (o->animId == 0x1a || o->animId == 0) {
        if (Unk_ov004_02220e48_IsZero(o->unk_2d4.mid) < 6) {
            _ZN12Unk_02006d1413setActionFlagEj(o, 2);
            switch (o->actionWork.unk_0a) {
            case 0:
                k = 0x3b;
                break;
            case 1:
                k = 0x3c;
                break;
            case 2:
                k = 0x3d;
                break;
            }
            _ZN12Unk_020102ec13startAnimOnceEijt(o, k, 3, 0);
            if (_ZN11CommManager11isLocalSlotEj(gCommManager, o->sessionSlot) == 0) {
                func_ov004_02233d04(&o->position, o->rotY);
            }
        }
    }
}

extern "C" void PlayerActor_StorageOpenCheckEnd(Obj *o) {
    if (o->animId == 0x1a) return;
    if (o->animId == 0) return;
    if (_ZN13AnimFrameCtrl10isFinishedEv(&o->unk_2cc)) {
        _ZN12Unk_02006d1415clearActionFlagEj(o, 2);
        PlayerActor_RequestStorageHold(o, o->actionWork.unk_0a, 6, -1);
    }
}

extern "C" void PlayerActor_MainStorageOpen(Obj *o) {
    PlayerActor_StorageOpenMove(o);
    PlayerActor_StorageOpenStartAnim(o);
    _ZN12Unk_020102ec11advanceAnimEv(o);
    _ZN12Unk_020102ec18updateBodyColliderEv(o);
    PlayerActor_StorageOpenCheckEnd(o);
}

extern "C" void PlayerActor_StorageHoldSetArgs(u8 *p, u32 v) {
    *p = v;
}

extern "C" s32 PlayerActor_RequestStorageHold(Obj *o, u32 a, s32 b, s32 c) {
    Msg m;
    m.func_0200e2c0(0x2e, b, c);
    PlayerActor_StorageHoldSetArgs(&m.unk_0c, a);
    s32 r = _ZN11PlayerActor11pushRequestEP19PlayerActionRequest(o, &m);
    _ZN19PlayerActionRequestD1Ev(&m);
    return r;
}

extern "C" void PlayerActor_StorageHoldSetWork(u32 *p, u32 v) {
    *p = v;
}

extern "C" void PlayerActor_StorageHoldSetNetData(u8 *p, u32 v) {
    *p = v;
}

extern "C" void PlayerActor_StorageHoldGetNetData(u8 *p, u8 *out) {
    *out = *p;
}

extern "C" void PlayerActor_SetupStorageHold(Obj *o, Msg *m) {
    u32 t = m->unk_0c;
    s32 k;
    PlayerActor_StorageHoldSetWork((u32 *)&o->actionWork, t);
    PlayerActor_StorageHoldSetNetData(o->netData, t);
    switch (m->unk_0c) {
    case 0:
        k = 0x3b;
        break;
    case 1:
        k = 0x3c;
        break;
    case 2:
        k = 0x3d;
        break;
    }
    _ZN12Unk_020102ec9startAnimEijt(o, k, 3, 0);
    if (_ZN11CommManager11isLocalSlotEj(gCommManager, o->sessionSlot) == 0) {
        func_ov004_02233d00(&o->position, o->rotY);
    }
}

extern "C" void PlayerActor_NetStorageHold(Obj *o, s32 a) {
    u8 b;
    PlayerActor_StorageHoldGetNetData(o->netData, &b);
    PlayerActor_RequestStorageHold(o, b, 6, a);
}

extern "C" void PlayerActor_MainStorageHold(Obj *o) {
    _ZN12Unk_020102ec11advanceAnimEv(o);
    _ZN12Unk_020102ec18updateBodyColliderEv(o);
}

extern "C" void PlayerActor_StorageCloseSetArgs(u32 *p, u32 v) {
    *p = v;
}

extern "C" s32 PlayerActor_RequestStorageClose(Obj *o, u32 a, s32 b, s32 c) {
    Msg m;
    m.func_0200e2c0(0x2f, b, c);
    PlayerActor_StorageCloseSetArgs((u32 *)&m.unk_0c, a);
    s32 r = _ZN11PlayerActor11pushRequestEP19PlayerActionRequest(o, &m);
    _ZN19PlayerActionRequestD1Ev(&m);
    return r;
}

extern "C" void PlayerActor_StorageCloseSetWork(u32 *a, u32 v) {
    *a = v;
}

extern "C" void PlayerActor_StorageCloseSetNetData(u8 *a, u32 v) {
    *a = v;
}

extern "C" void PlayerActor_StorageCloseGetNetData(u8 *a, u8 *b) {
    *b = *a;
}


}  // namespace ns_02220c78

namespace ns_02220314 {

struct Unk_ov004_02220314_V3 {
    s32 x, y, z;
};

struct Unk_ov004_02220314_Sec {
    u8 pad_00[4];
};

struct Unk_ov004_02220314_V3c {
    s32 x, y, z;
    Unk_ov004_02220314_V3c(s32 a, s32 b, s32 c) {
        x = a;
        y = b;
        z = c;
    }
};

struct Unk_ov004_02220314_Rec {
    s32 unk_00;
    s16 unk_04;
    s32 unk_08;
    s32 unk_0c;
    u8 unk_10;
};

struct Unk_ov004_02220314_Pay {
    s32 unk_00;
    s16 unk_04;
};

struct Unk_ov004_02220314_Pay2 {
    s32 unk_00;
    u8 unk_04;
    s32 unk_08;
    s32 unk_0c;
};

struct Unk_ov004_02220314_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

struct Unk_ov004_02220314_Ptr {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
};

struct Unk_ov004_02220314_Msgp {
    u8 pad_00[0xc];
    Unk_ov004_02220314_Pay unk_0c;
};

struct Unk_ov004_02220314_Msgp2 {
    u8 pad_00[0xc];
    Unk_ov004_02220314_Pay2 unk_0c;
};

class Unk_ov004_02220314_Msg {
public:
    inline Unk_ov004_02220314_Msg() { _ZN19PlayerActionRequestC1Ev(this); }
    inline void func_0200e2c0(u32 a, u32 b, u32 c) { _ZN19PlayerActionRequest6assignEiis(this, a, b, c); }
    u8 pad_00[0xc];
    Unk_ov004_02220314_V3 unk_0c;
    u8 pad_18[4];
};

struct Unk_ov004_02220314_Obj {
    u8 pad_00[0x5c];
    Unk_ov004_02220314_V3 position;
    u8 pad_68[0x8e - 0x68];
    s16 rotY;
    u8 pad_90[0x10a - 0x90];
    u8 unk_10a;
    u8 pad_10b[0x128 - 0x10b];
    Unk_ov004_02220314_Ptr *window;
    u8 pad_12c[0x2cc - 0x12c];
    u32 unk_2cc;
    u32 unk_2d0;
    u32 unk_2d4;
    u8 pad_2d8[4];
    s32 unk_2dc;
    u8 pad_2e0[0x700 - 0x2e0];
    s32 animId;
    u8 pad_704[0x7d0 - 0x704];
    Unk_ov004_02220314_Rec actionWork;
    u8 pad_7e4[0x7ec - 0x7e4];
    s32 action;
    u8 pad_7f0[0x7f8 - 0x7f0];
    s32 actionPriority;
    u32 sessionSlot;
    s32 exitIndex;
    u8 pad_804[0x81c - 0x804];
    u16 actionItem;
    u16 shownItem;
    u8 pad_820[0x8e7 - 0x820];
    u8 pendingAct76Kind;
    u8 pad_8e8[4];
    u8 netData[4];
};

static inline BOOL Unk_ov004_02220314_IsZero(u8 v) {
    return v == 0 ? TRUE : FALSE;
}

typedef Unk_ov004_02220314_Obj Obj;
typedef Unk_ov004_02220314_V3 V3;
typedef Unk_ov004_02220314_Rec Rec;
typedef Unk_ov004_02220314_Msg Msg;
typedef Unk_ov004_02220314_Sec Sec;
typedef Unk_ov004_02220314_Bits Bits;

extern "C" {
extern void *gCommManager;
extern u8 gScreenTransition;
extern u8 sRoomErrorMsgFile[];

s32 _ZN11CommManager11isLocalSlotEj(void *g, u32 a);
s32 _ZN11PlayerActor11pushRequestEP19PlayerActionRequest(Obj *o, Msg *m);
void _ZN12Unk_020102ec9startAnimEijt(Obj *o, s32 a, u32 b, u32 c);
void _ZN12Unk_020102ec13startAnimOnceEijt(Obj *o, s32 a, u32 b, u32 c);
void _ZN12Unk_020102ec11advanceAnimEv(Obj *o);
void _ZN12Unk_020102ec18updateBodyColliderEv(Obj *o);
void _ZN12Unk_02006d1413setActionFlagEj(Obj *o, u32 a);
void _ZN12Unk_02006d1415clearActionFlagEj(Obj *o, u32 a);
void _ZN12Unk_02006d146playSeEj(Obj *o, u32 a);
void _ZN9Character17attachTalkRequestEi(Obj *o, Sec *s);
void _ZN9Character17detachTalkRequestEi(Obj *o, Sec *s);
void _ZN10MsgRequest11setFileNameEPKc(Sec *s, void *n);
s32 _ZN12Unk_0200769421getActionDonePriorityEj(Obj *o, s32 a);
s32 _ZN12Unk_0200769416keepsBgCheckWorkEj(Obj *o, s32 a);
void _ZN12Unk_02006d1413requestWalkToEP16Unk_02006d14_Vecjjs(Obj *o, V3 *v, u32 a, u32 b, s32 c);
s32 RoomEntry_GetRequest(void);
s32 RoomEntry_Request(s32 a);
s32 RoomEntryRequest_GetResult(s32 p);
s32 RoomEntryRequest_GetDoorKind(s32 p);
V3 *RoomEntryRequest_GetRetreatPos(s32 p);
s32 RoomEntry_IsExclusiveExit(s32 a);
s32 Scene_GetWarpRequest(void);
void SceneWarp_RequestExit(s32 a, s32 b);
void SceneExit_SnapPos(s32 a, s32 b, V3 *v, V3 *w);
s32 SceneExit_GetDoor(s32 a, s32 b, s32 *c, s16 *d);
s32 Scene_GetCurrent(void);
s32 Math_AngleToDir4(s32 a);
s32 _ZN13AnimFrameCtrl14hasPassedFrameEi(void *p, u32 a);
s32 _ZN13AnimFrameCtrl10isFinishedEv(void *p);
void _ZN12Unk_02006d1412requestAct10Esji(Obj *o, u32 a, u32 b, s32 c);
void HandOverItem_GetItem(u16 *p);
void HandOverItem_End(Obj *o);
void _ZN13AnimFrameCtrl5setupEihit(void *p, u32 a, u32 b, u32 c, u32 d);
s32 HandOverItem_GetNextMode(void);
void HandOverItem_RequestMode(s32 a, Obj *o);
void HandOverItem_Begin(void *p, s32 a, u32 b, s32 c, Obj *o, s32 d);
void PlayerActor_StepTowardPose(Obj *o, s32 a, s32 b, s32 c);
void _ZN12Unk_02006d1416updateFootstepFxEv(Obj *o);
void _ZN12Unk_02006d1414playFootstepSeEv(Obj *o);
void func_020e9960(V3 *o, V3 *a, V3 *b);
s32 func_020e9688(V3 *v);
s32 func_020e9650(V3 *a, V3 *b);
s32 func_01ffcb0c(s32 a, s32 b);
s32 FX_Div(s32 a);
void _ZN14CollisionStateC1Ev(void *p);
void _ZN14CollisionStateD1Ev(void *p);
void Collision_Move(void *a, V3 *b, V3 *c, s32 d, u32 e, Obj *f, u32 g);
s32 Ground_GetDefaultY(u32 a);
void func_ov004_02233cfc(V3 *p, s32 a);
void PlayerActor_StepAlpha(Obj *o, u32 a, u32 b);
void PlayerActor_RequestAct42(Obj *o, s32 a, s32 b);
void PlayerActor_StorageCloseGetNetData(void *p, u8 *o);
void PlayerActor_StorageCloseSetNetData(void *p, u32 a);
void PlayerActor_StorageCloseSetWork(void *p, u32 a);
void PlayerActor_RequestStorageClose(Obj *o, u32 a, u32 b, s32 c);

s32 PlayerActor_NetAct41(Obj *o, s32 a);
void PlayerActor_SetupAct41(Obj *o);
s32 PlayerActor_RequestAct41(Obj *o, s32 a, s32 b);
void PlayerActor_MainLeaveRoom(Obj *o);
void PlayerActor_LeaveRoomCheckArrive(Obj *o);
void PlayerActor_LeaveRoomUpdateHeight(Obj *o);
void PlayerActor_LeaveRoomUpdateAnim(Obj *o);
void PlayerActor_LeaveRoomMove(Obj *o);
void PlayerActor_NetLeaveRoom(Obj *o);
void PlayerActor_SetupLeaveRoom(Obj *o, Unk_ov004_02220314_Msgp *m);
void PlayerActor_LeaveRoomSetWork(Rec *r, s32 a, s32 b, s32 c, s32 d, bool e);
s32 PlayerActor_RequestLeaveRoom(Obj *o, s32 a, s32 b);
void PlayerActor_LeaveRoomSetArgs(void *p, s32 a, s16 b);
void PlayerActor_MainAct37(Obj *o);
void PlayerActor_Act37CheckEnd(Obj *o);
void PlayerActor_NetAct37(Obj *o);
void PlayerActor_SetupAct37(Obj *o);
s32 PlayerActor_RequestAct37(Obj *o, s32 a, s32 b);
void PlayerActor_MainAct36(Obj *o);
void PlayerActor_Act36CheckEnd(Obj *o);
void PlayerActor_Act36UpdateAnim(Obj *o);
void PlayerActor_NetAct36(Obj *o);
void PlayerActor_SetupAct36(Obj *o, Unk_ov004_02220314_Msgp2 *m);
s32 PlayerActor_RequestAct36(Obj *o, u16 *a, s32 b, s32 c, s32 d, s32 e, s32 f, s16 g);
void PlayerActor_Act36SetArgs(void *p, s32 a, u32 b, s32 c, s32 d);
void PlayerActor_MainStorageClose(Obj *o);
void PlayerActor_StorageCloseCheckEnd(Obj *o);
void PlayerActor_NetStorageClose(Obj *o, s32 a);
void PlayerActor_SetupStorageClose(Obj *o, Unk_ov004_02220314_Msgp *m);
}

extern "C" void PlayerActor_SetupStorageClose(Obj *o, Unk_ov004_02220314_Msgp *m) {
    s32 t = m->unk_0c.unk_00;
    s32 k;
    PlayerActor_StorageCloseSetWork(&o->actionWork, t);
    PlayerActor_StorageCloseSetNetData(&o->netData, (u8)t);
    switch (m->unk_0c.unk_00) {
    case 0:
        k = 0x38;
        break;
    case 1:
        k = 0x39;
        break;
    case 2:
        k = 0x3a;
        break;
    }
    _ZN12Unk_020102ec13startAnimOnceEijt(o, k, 3, 0);
    u32 mid = ((Bits *)&o->unk_2d0)->mid;
    _ZN13AnimFrameCtrl5setupEihit(&o->unk_2cc, mid, 3, 0x1000, (u16)(mid - 1));
    if (_ZN11CommManager11isLocalSlotEj(gCommManager, o->sessionSlot) == 0) {
        func_ov004_02233cfc(&o->position, o->rotY);
    }
}

extern "C" void PlayerActor_NetStorageClose(Obj *o, s32 a) {
    u8 b;
    PlayerActor_StorageCloseGetNetData(&o->netData, &b);
    PlayerActor_RequestStorageClose(o, b, 6, a);
}

extern "C" void PlayerActor_StorageCloseCheckEnd(Obj *o) {
    if (_ZN13AnimFrameCtrl10isFinishedEv(&o->unk_2cc)) {
        _ZN12Unk_020102ec9startAnimEijt(o, 0, 3, 3);
        if (_ZN11CommManager11isLocalSlotEj(gCommManager, o->sessionSlot) == 0) {
            o->actionPriority = _ZN12Unk_0200769421getActionDonePriorityEj(o, o->action);
        }
    }
}

extern "C" void PlayerActor_MainStorageClose(Obj *o) {
    _ZN12Unk_020102ec11advanceAnimEv(o);
    _ZN12Unk_020102ec18updateBodyColliderEv(o);
    PlayerActor_StorageCloseCheckEnd(o);
}

extern "C" void PlayerActor_Act36SetArgs(void *p, s32 a, u32 b, s32 c, s32 d) {
    *(s32 *)p = a;
    *((u8 *)p + 4) = b;
    *(s32 *)((u8 *)p + 8) = c;
    *(s32 *)((u8 *)p + 0xc) = d;
}

extern "C" s32 PlayerActor_RequestAct36(Obj *o, u16 *a, s32 b, s32 c, s32 d, s32 e, s32 f, s16 g) {
    Msg m;
    m.func_0200e2c0(0x36, f, g);
    u16 *p = &o->shownItem;
    *p = *a;
    o->actionItem = *p;
    PlayerActor_Act36SetArgs(&m.unk_0c, b, c, d, e);
    s32 r = _ZN11PlayerActor11pushRequestEP19PlayerActionRequest(o, &m);
    _ZN19PlayerActionRequestD1Ev(&m);
    return r;
}

extern "C" void PlayerActor_SetupAct36(Obj *o, Unk_ov004_02220314_Msgp2 *m) {
    Unk_ov004_02220314_Pay2 *p = &m->unk_0c;
    HandOverItem_Begin(&o->actionItem, m->unk_0c.unk_00, p->unk_04, p->unk_08, o, p->unk_0c);
    _ZN12Unk_020102ec13startAnimOnceEijt(o, 0x2e, 3, 0);
    HandOverItem_RequestMode(1, o);
    if (Scene_GetCurrent() == 9) {
        _ZN12Unk_02006d146playSeEj(o, 0x4f);
    }
}

extern "C" void PlayerActor_NetAct36(Obj *o) {
}

extern "C" void PlayerActor_Act36UpdateAnim(Obj *o) {
    if (_ZN13AnimFrameCtrl14hasPassedFrameEi(&o->unk_2cc, 8)) {
        if (Scene_GetCurrent() == 9) {
            _ZN12Unk_02006d146playSeEj(o, 0x63);
        }
    }
    _ZN12Unk_020102ec11advanceAnimEv(o);
}

extern "C" void PlayerActor_Act36CheckEnd(Obj *o) {
    if (_ZN13AnimFrameCtrl10isFinishedEv(&o->unk_2cc)) {
        o->actionPriority = _ZN12Unk_0200769421getActionDonePriorityEj(o, o->action);
        _ZN12Unk_02006d1412requestAct10Esji(o, 3, 5, -1);
    }
}

extern "C" void PlayerActor_MainAct36(Obj *o) {
    PlayerActor_Act36UpdateAnim(o);
    _ZN12Unk_020102ec18updateBodyColliderEv(o);
    PlayerActor_Act36CheckEnd(o);
}

extern "C" s32 PlayerActor_RequestAct37(Obj *o, s32 a, s32 b) {
    Msg m;
    m.func_0200e2c0(0x37, a, b);
    s32 r = _ZN11PlayerActor11pushRequestEP19PlayerActionRequest(o, &m);
    _ZN19PlayerActionRequestD1Ev(&m);
    return r;
}

extern "C" void PlayerActor_SetupAct37(Obj *o) {
    _ZN12Unk_020102ec13startAnimOnceEijt(o, 0x2e, 3, 0);
    u32 mid = ((Bits *)&o->unk_2d0)->mid;
    _ZN13AnimFrameCtrl5setupEihit(&o->unk_2cc, mid, 3, 0x1000, (u16)(mid - 1));
    HandOverItem_RequestMode(HandOverItem_GetNextMode(), o);
    _ZN12Unk_02006d146playSeEj(o, 0x52);
}

extern "C" void PlayerActor_NetAct37(Obj *o) {
}

extern "C" void PlayerActor_Act37CheckEnd(Obj *o) {
    if (_ZN13AnimFrameCtrl10isFinishedEv(&o->unk_2cc)) {
        o->actionPriority = _ZN12Unk_0200769421getActionDonePriorityEj(o, o->action);
        _ZN12Unk_02006d1412requestAct10Esji(o, 3, 5, -1);
        u16 v;
        HandOverItem_GetItem(&v);
        if (v == 0x1379) {
            o->pendingAct76Kind = 4;
        }
        HandOverItem_End(o);
    }
}

extern "C" void PlayerActor_MainAct37(Obj *o) {
    _ZN12Unk_020102ec11advanceAnimEv(o);
    _ZN12Unk_020102ec18updateBodyColliderEv(o);
    PlayerActor_Act37CheckEnd(o);
}

extern "C" void PlayerActor_LeaveRoomSetArgs(void *p, s32 a, s16 b) {
    *(s32 *)p = a;
    *(s16 *)((u8 *)p + 4) = b;
}

extern "C" s32 PlayerActor_RequestLeaveRoom(Obj *o, s32 a, s32 b) {
    s32 h = o->exitIndex;
    if (h != -1) {
        s16 x;
        s32 y;
        if (SceneExit_GetDoor(Scene_GetWarpRequest(), h, &y, &x) == 0) {
            return 0;
        }
        Msg m;
        m.func_0200e2c0(0x40, a, b);
        PlayerActor_LeaveRoomSetArgs(&m.unk_0c, y, x);
        s32 r = _ZN11PlayerActor11pushRequestEP19PlayerActionRequest(o, &m);
        _ZN19PlayerActionRequestD1Ev(&m);
        return r;
    }
    return 0;
}

extern "C" void PlayerActor_LeaveRoomSetWork(Rec *r, s32 a, s32 b, s32 c, s32 d, bool e) {
    r->unk_00 = a;
    r->unk_04 = b;
    r->unk_08 = c;
    r->unk_0c = d;
    r->unk_10 = e;
}

extern "C" void PlayerActor_SetupLeaveRoom(Obj *o, Unk_ov004_02220314_Msgp *m) {
    _ZN12Unk_02006d1413setActionFlagEj(o, 3);
    Unk_ov004_02220314_Pay *pay = &m->unk_0c;
    Rec *r = &o->actionWork;
    V3 v;
    SceneExit_SnapPos(Scene_GetWarpRequest(), o->exitIndex, &v, &o->position);
    s32 mode = pay->unk_00;
    s32 ang = pay->unk_04;
    if (mode == 2) {
        switch (Math_AngleToDir4(ang)) {
        case 2:
            v.z += 0x1000;
            break;
        case 0:
            v.z -= 0x1000;
            break;
        case 3:
            v.x += 0x1000;
            break;
        case 1:
            v.x -= 0x1000;
            break;
        }
    } else if (mode == 0) {
        ang = -0x8000;
        v.x = o->position.x;
        v.z = o->position.z;
    }
    bool flag = 0;
    if (RoomEntry_IsExclusiveExit(o->exitIndex)) {
        flag = 1;
    }
    PlayerActor_LeaveRoomSetWork(r, mode, ang, v.x, v.z, flag);
    if (flag == 0) {
        if (mode == 1) {
            _ZN12Unk_020102ec13startAnimOnceEijt(o, 0x3e, 3, 0);
        } else {
            _ZN12Unk_020102ec13startAnimOnceEijt(o, 0x3f, 3, 0);
        }
    } else {
        _ZN12Unk_02006d1413setActionFlagEj(o, 0x18);
        _ZN12Unk_020102ec13startAnimOnceEijt(o, 1, 3, 0);
    }
}

extern "C" void PlayerActor_NetLeaveRoom(Obj *o) {
}

extern "C" void PlayerActor_LeaveRoomMove(Obj *o) {
    Rec *r = &o->actionWork;
    PlayerActor_StepTowardPose(o, r->unk_08, r->unk_0c, r->unk_04);
}

extern "C" void PlayerActor_LeaveRoomUpdateAnim(Obj *o) {
    _ZN12Unk_020102ec11advanceAnimEv(o);
    if (o->animId == 1) {
        V3 v;
        func_020e9960(&v, &o->position, (V3 *)((u8 *)o + 0x68));
        s32 t = func_01ffcb0c(func_020e9688(&v), 0x3ae1) << 2;
        if (t <= (s32)o->unk_2d0) {
            o->unk_2dc = t;
        }
        _ZN12Unk_02006d1416updateFootstepFxEv(o);
        if (t == 0) {
            _ZN12Unk_020102ec9startAnimEijt(o, 0, 3, 0);
        }
    } else if (o->animId != 0) {
        if (_ZN13AnimFrameCtrl14hasPassedFrameEi(&o->unk_2cc, 1) || _ZN13AnimFrameCtrl14hasPassedFrameEi(&o->unk_2cc, 6) || _ZN13AnimFrameCtrl14hasPassedFrameEi(&o->unk_2cc, 0xb) || _ZN13AnimFrameCtrl14hasPassedFrameEi(&o->unk_2cc, 0x10)) {
            _ZN12Unk_02006d1414playFootstepSeEv(o);
        }
    }
}

extern "C" void PlayerActor_LeaveRoomUpdateHeight(Obj *o) {
    V3 *p = &o->position;
    u8 loc[0x30];
    _ZN14CollisionStateC1Ev(loc);
    s32 ang = o->rotY;
    void *sel;
    if (_ZN12Unk_0200769416keepsBgCheckWorkEj(o, o->action) == 0) {
        sel = loc;
    } else {
        sel = (u8 *)o + 0x7a0;
    }
    Collision_Move(sel, p, (V3 *)((u8 *)o + 0x68), ang, 0xfd7, o, 0xf);
    _ZN14CollisionStateD1Ev(loc);
    p->y = Ground_GetDefaultY(0);
    Rec *r = &o->actionWork;
    s32 m = r->unk_00;
    if ((u32)(m - 1) <= 1) {
        Unk_ov004_02220314_V3c v(r->unk_08, p->y, r->unk_0c);
        if (func_020e9650((V3 *)&v, p) < 0x1000) {
            s32 d = FX_Div(0x1000 - func_020e9650((V3 *)&v, p)) * 6;
            if (m == 1) {
                p->y = p->y + (d >> 5);
            } else {
                p->y = p->y - (d >> 5);
            }
        }
    }
}

extern "C" void PlayerActor_LeaveRoomCheckArrive(Obj *o) {
    Rec *r = &o->actionWork;
    u8 *st = &r->unk_10;
    if (*st == 0) {
        V3 *p = &o->position;
        if (p->x == r->unk_08 && p->z == r->unk_0c && r->unk_04 == o->rotY) {
            if (r->unk_00 == 1) {
                PlayerActor_RequestAct41(o, 6, -1);
            } else {
                PlayerActor_RequestAct42(o, 6, -1);
            }
        }
        s32 t = o->animId;
        if (t == 1) return;
        if (t == 0x3e) {
            if (((Bits *)&o->unk_2d4)->mid >= 6) {
                PlayerActor_StepAlpha(o, 0, 6);
            }
        }
        if (Unk_ov004_02220314_IsZero(gScreenTransition)) return;
        if (((Bits *)&o->unk_2d4)->mid >= 5) {
            SceneWarp_RequestExit(Scene_GetWarpRequest(), o->exitIndex);
        }
    } else {
        s32 p = RoomEntry_GetRequest();
        switch (*st) {
        case 1:
            if (!RoomEntry_Request(o->exitIndex)) break;
            *st = *st + 1;
        case 2: {
            s32 c = RoomEntryRequest_GetResult(p);
            switch (c) {
            case 0:
                break;
            case 2:
                if (RoomEntryRequest_GetDoorKind(p) == 0) {
                    SceneWarp_RequestExit(Scene_GetWarpRequest(), o->exitIndex);
                } else {
                    *st = 0;
                    _ZN12Unk_020102ec13startAnimOnceEijt(o, 0x3e, 3, 0);
                }
                break;
            case 1: {
                Sec *s = (Sec *)o;
                if (o) s = (Sec *)((u8 *)o + 0xec);
                _ZN9Character17attachTalkRequestEi(o, s);
                _ZN12Unk_02006d1413setActionFlagEj(o, 0x11);
                _ZN10MsgRequest11setFileNameEPKc((Sec *)((u8 *)o + 0xec), sRoomErrorMsgFile);
                o->unk_10a = 0x15;
                o->window->unk_08 = 1;
                *st = *st + 1;
                break;
            }
            }
            break;
        }
        case 3: {
            Unk_ov004_02220314_Ptr *q = o->window;
            if (q != 0) {
                if (q->unk_04 != 0) {
                    *st = *st + 1;
                }
            }
            break;
        }
        case 4: {
            Unk_ov004_02220314_Ptr *q = o->window;
            if (q != 0) {
                if (q->unk_04 == 0) {
                    struct { u32 pad; V3 a; V3 b; } l;
                    V3 *v = RoomEntryRequest_GetRetreatPos(p);
                    l.a.x = v->x;
                    l.a.y = v->y;
                    l.a.z = v->z;
                    Sec *s = (Sec *)o;
                    if (o) s = (Sec *)((u8 *)o + 0xec);
                    _ZN9Character17detachTalkRequestEi(o, s);
                    _ZN12Unk_02006d1415clearActionFlagEj(o, 0x11);
                    o->actionPriority = _ZN12Unk_0200769421getActionDonePriorityEj(o, o->action);
                    l.b.x = l.a.x;
                    l.b.y = l.a.y;
                    l.b.z = l.a.z;
                    _ZN12Unk_02006d1413requestWalkToEP16Unk_02006d14_Vecjjs(o, &l.b, 0x333, 5, -1);
                }
            }
            break;
        }
        }
    }
}

extern "C" void PlayerActor_MainLeaveRoom(Obj *o) {
    PlayerActor_LeaveRoomMove(o);
    PlayerActor_LeaveRoomUpdateAnim(o);
    PlayerActor_LeaveRoomUpdateHeight(o);
    _ZN12Unk_020102ec18updateBodyColliderEv(o);
    PlayerActor_LeaveRoomCheckArrive(o);
}

extern "C" s32 PlayerActor_RequestAct41(Obj *o, s32 a, s32 b) {
    Msg m;
    m.func_0200e2c0(0x41, a, b);
    s32 r = _ZN11PlayerActor11pushRequestEP19PlayerActionRequest(o, &m);
    _ZN19PlayerActionRequestD1Ev(&m);
    return r;
}

extern "C" void PlayerActor_SetupAct41(Obj *o) {
    if (_ZN11CommManager11isLocalSlotEj(gCommManager, o->sessionSlot)) {
        if (o->animId != 0x3e) {
            _ZN12Unk_020102ec9startAnimEijt(o, 0x3e, 3, 0);
        }
    } else {
        _ZN12Unk_020102ec9startAnimEijt(o, 0, 3, 3);
    }
}

extern "C" s32 PlayerActor_NetAct41(Obj *o, s32 a) {
    return PlayerActor_RequestAct41(o, 9, a);
}


}  // namespace ns_02220314

namespace ns_0221fa00 {

struct Unk_ov004_0221fa00_V3 {
    s32 x, y, z;
};

struct Unk_ov004_0221fa00_Rec {
    u8 unk_00;
    u8 unk_01;
    u8 unk_02;
};

struct Unk_ov004_0221fa00_Pay {
    u8 unk_00;
    u8 unk_01;
};

class Unk_ov004_0221fa00_Msg {
public:
    inline Unk_ov004_0221fa00_Msg() { _ZN19PlayerActionRequestC1Ev(this); }
    inline void func_0200e2c0(u32 a, u32 b, u32 c) { _ZN19PlayerActionRequest6assignEiis(this, a, b, c); }
    u8 pad_00[0xc];
    Unk_ov004_0221fa00_Pay unk_0c;
    u8 pad_0e[0x1c - 0xe];
};

struct Unk_ov004_0221fa00_Msgp {
    u8 pad_00[0xc];
    Unk_ov004_0221fa00_Pay unk_0c;
};

struct Unk_ov004_0221fa00_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

struct Unk_ov004_0221fa00_Obj {
    u8 pad_00[0x2cc];
    u32 unk_2cc;
    u32 unk_2d0;
    u32 unk_2d4;
    u8 pad_2d8[0x700 - 0x2d8];
    s32 animId;
    u8 pad_704[0x7d0 - 0x704];
    Unk_ov004_0221fa00_Rec actionWork;
    u8 pad_7d3[0x7ec - 0x7d3];
    s32 action;
    u8 pad_7f0[0x7f8 - 0x7f0];
    s32 actionPriority;
    u32 sessionSlot;
    s32 exitIndex;
    u8 pad_804[0x8e5 - 0x804];
    u8 alpha;
};

static inline BOOL Unk_ov004_0221fa00_IsZero(u8 v) {
    return v == 0 ? TRUE : FALSE;
}

typedef Unk_ov004_0221fa00_Obj Obj;
typedef Unk_ov004_0221fa00_V3 V3;
typedef Unk_ov004_0221fa00_Rec Rec;
typedef Unk_ov004_0221fa00_Msg Msg;
typedef Unk_ov004_0221fa00_Msgp Msgp;
typedef Unk_ov004_0221fa00_Bits Bits;

extern "C" {
extern void *gCommManager;
extern u8 gScreenTransition;
extern u8 gEffectSplDefaultInitCbs[];

s32 _ZN11CommManager11isLocalSlotEj(void *g, u32 a);
s32 _ZN11PlayerActor11pushRequestEP19PlayerActionRequest(Obj *o, Msg *m);
void _ZN12Unk_020102ec9startAnimEijt(Obj *o, s32 a, u32 b, u32 c);
void _ZN12Unk_020102ec13startAnimOnceEijt(Obj *o, s32 a, u32 b, u32 c);
void _ZN12Unk_020102ec11advanceAnimEv(Obj *o);
s32 _ZN12Unk_020102ec20netApproachTransformEv(Obj *o);
void _ZN12Unk_020102ec18updateBodyColliderEv(Obj *o);
s32 _ZN13AnimFrameCtrl14hasPassedFrameEi(void *p, u32 a);
s32 _ZN13AnimFrameCtrl10isFinishedEv(void *p);
void EffectSpl_CreateOneShot(u32 a, void *b, u32 c, void *d);
void PlayerActor_GetHat(u16 *p, Obj *o);
s32 _ZN12Unk_02006d1416requestHatChangeEPthhh(Obj *o, u16 *p, u32 a, u32 b, s32 c);
s32 PlayerActor_GetPlayerData(Obj *o);
void _ZN10PlayerData12setHairStyleEh(s32 p, u32 a);
void _ZN10PlayerData12setHairColorEh(s32 p, u32 a);
s32 PlayerData_GetBySessionSlot(u32 a);
s32 _ZN10PlayerData12getHairStyleEv(s32 p);
s32 _ZN10PlayerData12getHairColorEv(s32 p);
s32 PlayerActor_GetHairStyle(Obj *o);
s32 PlayerActor_GetHairColor(Obj *o);
void _ZN12Unk_02006d1412nudgeForwardEv(Obj *o);
s32 _ZN12Unk_0200769421getActionDonePriorityEj(Obj *o, s32 a);
void _ZN11PlayerActor11requestWaitEjjj(Obj *o, s32 a, s32 b, s32 c);
s32 TalkRequest_FinishSceneEntry(void);
void _ZN12Unk_02006d1414playFootstepSeEv(Obj *o);
s32 Scene_GetWarpRequest(void);
void SceneWarp_RequestExit(s32 a, s32 b);
void PlayerActor_StepAlpha(Obj *o, u32 a, u32 b);
void PlayerActor_NetSendHair(Obj *o, s32 a, s32 b);

void PlayerActor_HaircutFinishUpdate(Obj *o);
void PlayerActor_EndHaircutFinish(Obj *o);
void PlayerActor_NetHaircutFinish(Obj *o);
void PlayerActor_SetupHaircutFinish(Obj *o, Msgp *m);
s32 PlayerActor_RequestHaircutFinish(Obj *o, u32 a, u32 b, u32 c, s32 e);
void PlayerActor_MainHaircutCut(Obj *o);
void PlayerActor_HaircutCutCheckEnd(Obj *o);
void PlayerActor_NetHaircutCut(Obj *o);
void PlayerActor_SetupHaircutCut(Obj *o, Msgp *m);
s32 PlayerActor_RequestHaircutCut(Obj *o, u32 a, u32 b, u32 c, s32 e);
void PlayerActor_MainHaircutStart(Obj *o);
void PlayerActor_HaircutStartCheckEnd(Obj *o);
void PlayerActor_NetHaircutStart(Obj *o);
void PlayerActor_SetupHaircutStart(Obj *o, Msgp *m);
s32 PlayerActor_RequestHaircutStart(Obj *o, u32 a, u32 b, u32 c, s32 e);
void PlayerActor_MainAct44(Obj *o);
void PlayerActor_Act44CheckEnd(Obj *o);
void PlayerActor_Act44UpdateAnim(Obj *o);
s32 PlayerActor_NetAct44(Obj *o, s32 a);
void PlayerActor_SetupAct44(Obj *o);
s32 PlayerActor_RequestAct44(Obj *o, s32 a, s32 b);
void PlayerActor_MainAct43(Obj *o);
void PlayerActor_Act43CheckEnd(Obj *o);
void PlayerActor_Act43UpdateAnim(Obj *o);
s32 PlayerActor_NetAct43(Obj *o, s32 a);
void PlayerActor_SetupAct43(Obj *o);
s32 PlayerActor_RequestAct43(Obj *o, s32 a, s32 b);
void PlayerActor_MainAct42(Obj *o);
void PlayerActor_Act42CheckSceneChange(Obj *o);
void PlayerActor_Act42FadeOut(Obj *o);
void PlayerActor_Act42UpdateRemote(Obj *o, s32 a);
void PlayerActor_Act42UpdateAnim(Obj *o);
s32 PlayerActor_NetAct42(Obj *o, s32 a);
void PlayerActor_SetupAct42(Obj *o);
s32 PlayerActor_RequestAct42(Obj *o, s32 a, s32 b);
void PlayerActor_MainAct41(Obj *o);
void PlayerActor_Act41CheckSceneChange(Obj *o);
void PlayerActor_Act41FadeOut(Obj *o);
void PlayerActor_Act41UpdateRemote(Obj *o, s32 a);
void PlayerActor_Act41UpdateAnim(Obj *o);
}

extern "C" void PlayerActor_Act41UpdateAnim(Obj *o) {
    _ZN12Unk_020102ec11advanceAnimEv(o);
    if (_ZN13AnimFrameCtrl14hasPassedFrameEi(&o->unk_2cc, 1) || _ZN13AnimFrameCtrl14hasPassedFrameEi(&o->unk_2cc, 6) || _ZN13AnimFrameCtrl14hasPassedFrameEi(&o->unk_2cc, 0xb) || _ZN13AnimFrameCtrl14hasPassedFrameEi(&o->unk_2cc, 0x10)) {
        _ZN12Unk_02006d1414playFootstepSeEv(o);
    }
}

extern "C" void PlayerActor_Act41UpdateRemote(Obj *o, s32 a) {
    if (a != 0) {
        if (o->animId != 0x3e) {
            _ZN12Unk_020102ec13startAnimOnceEijt(o, 0x3e, 3, 0);
        }
    }
    _ZN12Unk_020102ec11advanceAnimEv(o);
    if (o->animId == 0x3e) {
        if (_ZN13AnimFrameCtrl14hasPassedFrameEi(&o->unk_2cc, 1) || _ZN13AnimFrameCtrl14hasPassedFrameEi(&o->unk_2cc, 6) || _ZN13AnimFrameCtrl14hasPassedFrameEi(&o->unk_2cc, 0xb) || _ZN13AnimFrameCtrl14hasPassedFrameEi(&o->unk_2cc, 0x10)) {
            _ZN12Unk_02006d1414playFootstepSeEv(o);
        }
    }
}

extern "C" void PlayerActor_Act41FadeOut(Obj *o) {
    if (o->animId == 0x3e) {
        if (((Bits *)&o->unk_2d4)->mid >= 6) {
            PlayerActor_StepAlpha(o, 0, 6);
        }
    }
}

extern "C" void PlayerActor_Act41CheckSceneChange(Obj *o) {
    if (Unk_ov004_0221fa00_IsZero(gScreenTransition)) return;
    if (((Bits *)&o->unk_2d4)->mid >= 5) {
        SceneWarp_RequestExit(Scene_GetWarpRequest(), o->exitIndex);
    }
}

extern "C" void PlayerActor_MainAct41(Obj *o) {
    if (_ZN11CommManager11isLocalSlotEj(gCommManager, o->sessionSlot)) {
        PlayerActor_Act41UpdateAnim(o);
        PlayerActor_Act41FadeOut(o);
        PlayerActor_Act41CheckSceneChange(o);
    } else {
        PlayerActor_Act41UpdateRemote(o, _ZN12Unk_020102ec20netApproachTransformEv(o));
        PlayerActor_Act41FadeOut(o);
    }
}

extern "C" s32 PlayerActor_RequestAct42(Obj *o, s32 a, s32 b) {
    Msg m;
    m.func_0200e2c0(0x42, a, b);
    s32 r = _ZN11PlayerActor11pushRequestEP19PlayerActionRequest(o, &m);
    _ZN19PlayerActionRequestD1Ev(&m);
    return r;
}

extern "C" void PlayerActor_SetupAct42(Obj *o) {
    if (_ZN11CommManager11isLocalSlotEj(gCommManager, o->sessionSlot) == 0) {
        _ZN12Unk_020102ec9startAnimEijt(o, 0, 3, 3);
    }
}

extern "C" s32 PlayerActor_NetAct42(Obj *o, s32 a) {
    return PlayerActor_RequestAct42(o, 9, a);
}

extern "C" void PlayerActor_Act42UpdateAnim(Obj *o) {
    _ZN12Unk_020102ec11advanceAnimEv(o);
    if (_ZN13AnimFrameCtrl14hasPassedFrameEi(&o->unk_2cc, 1) || _ZN13AnimFrameCtrl14hasPassedFrameEi(&o->unk_2cc, 6) || _ZN13AnimFrameCtrl14hasPassedFrameEi(&o->unk_2cc, 0xb) || _ZN13AnimFrameCtrl14hasPassedFrameEi(&o->unk_2cc, 0x10)) {
        _ZN12Unk_02006d1414playFootstepSeEv(o);
    }
}

extern "C" void PlayerActor_Act42UpdateRemote(Obj *o, s32 a) {
    if (a != 0) {
        if (o->animId != 0x3f) {
            _ZN12Unk_020102ec13startAnimOnceEijt(o, 0x3f, 3, 0);
        }
    }
    _ZN12Unk_020102ec11advanceAnimEv(o);
    if (o->animId == 0x3e) {
        if (_ZN13AnimFrameCtrl14hasPassedFrameEi(&o->unk_2cc, 1) || _ZN13AnimFrameCtrl14hasPassedFrameEi(&o->unk_2cc, 6) || _ZN13AnimFrameCtrl14hasPassedFrameEi(&o->unk_2cc, 0xb) || _ZN13AnimFrameCtrl14hasPassedFrameEi(&o->unk_2cc, 0x10)) {
            _ZN12Unk_02006d1414playFootstepSeEv(o);
        }
    }
}

extern "C" void PlayerActor_Act42FadeOut(Obj *o) {
    if (o->animId == 0x3f) {
        if (((Bits *)&o->unk_2d4)->mid >= 9) {
            PlayerActor_StepAlpha(o, 0, 6);
        }
    }
}

extern "C" void PlayerActor_Act42CheckSceneChange(Obj *o) {
    if (Unk_ov004_0221fa00_IsZero(gScreenTransition)) return;
    if (((Bits *)&o->unk_2d4)->mid >= 5) {
        SceneWarp_RequestExit(Scene_GetWarpRequest(), o->exitIndex);
    }
}

extern "C" void PlayerActor_MainAct42(Obj *o) {
    if (_ZN11CommManager11isLocalSlotEj(gCommManager, o->sessionSlot)) {
        PlayerActor_Act42UpdateAnim(o);
        PlayerActor_Act42FadeOut(o);
        PlayerActor_Act42CheckSceneChange(o);
    } else {
        PlayerActor_Act42UpdateRemote(o, _ZN12Unk_020102ec20netApproachTransformEv(o));
        PlayerActor_Act42FadeOut(o);
    }
}

extern "C" s32 PlayerActor_RequestAct43(Obj *o, s32 a, s32 b) {
    Msg m;
    m.func_0200e2c0(0x43, a, b);
    s32 r = _ZN11PlayerActor11pushRequestEP19PlayerActionRequest(o, &m);
    _ZN19PlayerActionRequestD1Ev(&m);
    return r;
}

extern "C" void PlayerActor_SetupAct43(Obj *o) {
    _ZN12Unk_020102ec13startAnimOnceEijt(o, 0x40, 0, 0);
    o->alpha = 0;
}

extern "C" s32 PlayerActor_NetAct43(Obj *o, s32 a) {
    return PlayerActor_RequestAct43(o, 9, a);
}

extern "C" void PlayerActor_Act43UpdateAnim(Obj *o) {
    _ZN12Unk_020102ec11advanceAnimEv(o);
    if (_ZN13AnimFrameCtrl14hasPassedFrameEi(&o->unk_2cc, 1) || _ZN13AnimFrameCtrl14hasPassedFrameEi(&o->unk_2cc, 6) || _ZN13AnimFrameCtrl14hasPassedFrameEi(&o->unk_2cc, 0xc) || _ZN13AnimFrameCtrl14hasPassedFrameEi(&o->unk_2cc, 0x14)) {
        _ZN12Unk_02006d1414playFootstepSeEv(o);
    }
}

extern "C" void PlayerActor_Act43CheckEnd(Obj *o) {
    if (_ZN13AnimFrameCtrl10isFinishedEv(&o->unk_2cc)) {
        _ZN12Unk_02006d1412nudgeForwardEv(o);
        o->actionPriority = _ZN12Unk_0200769421getActionDonePriorityEj(o, o->action);
        _ZN11PlayerActor11requestWaitEjjj(o, 3, 1, -1);
        if (_ZN11CommManager11isLocalSlotEj(gCommManager, o->sessionSlot)) {
            TalkRequest_FinishSceneEntry();
        }
    }
}

extern "C" void PlayerActor_MainAct43(Obj *o) {
    PlayerActor_Act43UpdateAnim(o);
    PlayerActor_StepAlpha(o, 0x1f, 6);
    _ZN12Unk_020102ec18updateBodyColliderEv(o);
    PlayerActor_Act43CheckEnd(o);
}

extern "C" s32 PlayerActor_RequestAct44(Obj *o, s32 a, s32 b) {
    Msg m;
    m.func_0200e2c0(0x44, a, b);
    s32 r = _ZN11PlayerActor11pushRequestEP19PlayerActionRequest(o, &m);
    _ZN19PlayerActionRequestD1Ev(&m);
    return r;
}

extern "C" void PlayerActor_SetupAct44(Obj *o) {
    _ZN12Unk_020102ec13startAnimOnceEijt(o, 0x41, 0, 0);
    o->alpha = 0;
}

extern "C" s32 PlayerActor_NetAct44(Obj *o, s32 a) {
    return PlayerActor_RequestAct44(o, 9, a);
}

extern "C" void PlayerActor_Act44UpdateAnim(Obj *o) {
    _ZN12Unk_020102ec11advanceAnimEv(o);
    if (_ZN13AnimFrameCtrl14hasPassedFrameEi(&o->unk_2cc, 1) || _ZN13AnimFrameCtrl14hasPassedFrameEi(&o->unk_2cc, 6) || _ZN13AnimFrameCtrl14hasPassedFrameEi(&o->unk_2cc, 0xc) || _ZN13AnimFrameCtrl14hasPassedFrameEi(&o->unk_2cc, 0x14)) {
        _ZN12Unk_02006d1414playFootstepSeEv(o);
    }
}

extern "C" void PlayerActor_Act44CheckEnd(Obj *o) {
    if (_ZN13AnimFrameCtrl10isFinishedEv(&o->unk_2cc)) {
        _ZN12Unk_02006d1412nudgeForwardEv(o);
        o->actionPriority = _ZN12Unk_0200769421getActionDonePriorityEj(o, o->action);
        _ZN11PlayerActor11requestWaitEjjj(o, 3, 1, -1);
        if (_ZN11CommManager11isLocalSlotEj(gCommManager, o->sessionSlot)) {
            TalkRequest_FinishSceneEntry();
        }
    }
}

extern "C" void PlayerActor_MainAct44(Obj *o) {
    PlayerActor_Act44UpdateAnim(o);
    PlayerActor_StepAlpha(o, 0x1f, 6);
    _ZN12Unk_020102ec18updateBodyColliderEv(o);
    PlayerActor_Act44CheckEnd(o);
}

extern "C" s32 PlayerActor_RequestHaircutStart(Obj *o, u32 a, u32 b, u32 c, s32 e) {
    Msg m;
    m.func_0200e2c0(0x7a, c, *(s16 *)&e);
    Unk_ov004_0221fa00_Pay &q = m.unk_0c;
    q.unk_00 = a;
    q.unk_01 = b;
    s32 r = _ZN11PlayerActor11pushRequestEP19PlayerActionRequest(o, &m);
    _ZN19PlayerActionRequestD1Ev(&m);
    return r;
}

extern "C" void PlayerActor_SetupHaircutStart(Obj *o, Msgp *m) {
    _ZN12Unk_020102ec13startAnimOnceEijt(o, 0x6d, 3, 0);
    Unk_ov004_0221fa00_Pay *p = &m->unk_0c;
    u8 b = p->unk_01;
    Rec *r = &o->actionWork;
    r->unk_00 = p->unk_00;
    r->unk_01 = b;
}

extern "C" void PlayerActor_NetHaircutStart(Obj *o) {
}

extern "C" void PlayerActor_HaircutStartCheckEnd(Obj *o) {
    if (_ZN13AnimFrameCtrl10isFinishedEv(&o->unk_2cc)) {
        Rec *r = &o->actionWork;
        PlayerActor_RequestHaircutCut(o, r->unk_00, r->unk_01, 6, -1);
    } else if (((Bits *)&o->unk_2d4)->mid >= 3) {
        if (PlayerActor_GetHairStyle(o)) {
            u16 loc[2];
            PlayerActor_GetHat(&loc[1], o);
            loc[0] = loc[1];
            s32 t = PlayerActor_GetHairColor(o);
            if (_ZN12Unk_02006d1416requestHatChangeEPthhh(o, loc, 0, t, 0)) {
                _ZN10PlayerData12setHairStyleEh(PlayerActor_GetPlayerData(o), 0);
            }
        }
    }
}

extern "C" void PlayerActor_MainHaircutStart(Obj *o) {
    _ZN12Unk_020102ec11advanceAnimEv(o);
    PlayerActor_HaircutStartCheckEnd(o);
}

extern "C" s32 PlayerActor_RequestHaircutCut(Obj *o, u32 a, u32 b, u32 c, s32 e) {
    Msg m;
    m.func_0200e2c0(0x7b, c, *(s16 *)&e);
    Unk_ov004_0221fa00_Pay &q = m.unk_0c;
    q.unk_00 = a;
    q.unk_01 = b;
    s32 r = _ZN11PlayerActor11pushRequestEP19PlayerActionRequest(o, &m);
    _ZN19PlayerActionRequestD1Ev(&m);
    return r;
}

extern "C" void PlayerActor_SetupHaircutCut(Obj *o, Msgp *m) {
    _ZN12Unk_020102ec13startAnimOnceEijt(o, 0x6e, 3, 0);
    Unk_ov004_0221fa00_Pay *p = &m->unk_0c;
    u8 b = p->unk_01;
    Rec *r = &o->actionWork;
    r->unk_00 = p->unk_00;
    r->unk_01 = b;
}

extern "C" void PlayerActor_NetHaircutCut(Obj *o) {
}

extern "C" void PlayerActor_HaircutCutCheckEnd(Obj *o) {
    if (_ZN13AnimFrameCtrl10isFinishedEv(&o->unk_2cc)) {
        Rec *r = &o->actionWork;
        PlayerActor_RequestHaircutFinish(o, r->unk_00, r->unk_01, 6, -1);
    }
}

extern "C" void PlayerActor_MainHaircutCut(Obj *o) {
    _ZN12Unk_020102ec11advanceAnimEv(o);
    PlayerActor_HaircutCutCheckEnd(o);
}

extern "C" s32 PlayerActor_RequestHaircutFinish(Obj *o, u32 a, u32 b, u32 c, s32 e) {
    Msg m;
    m.func_0200e2c0(0x7c, c, *(s16 *)&e);
    Unk_ov004_0221fa00_Pay &q = m.unk_0c;
    q.unk_00 = a;
    q.unk_01 = b;
    s32 r = _ZN11PlayerActor11pushRequestEP19PlayerActionRequest(o, &m);
    _ZN19PlayerActionRequestD1Ev(&m);
    return r;
}

extern "C" void PlayerActor_SetupHaircutFinish(Obj *o, Msgp *m) {
    _ZN12Unk_020102ec13startAnimOnceEijt(o, 0x6f, 3, 0);
    Unk_ov004_0221fa00_Pay *p = &m->unk_0c;
    u8 b = p->unk_01;
    Rec *r = &o->actionWork;
    r->unk_00 = p->unk_00;
    r->unk_01 = b;
    r->unk_02 = 0;
}

extern "C" void PlayerActor_NetHaircutFinish(Obj *o) {
}

extern "C" void PlayerActor_EndHaircutFinish(Obj *o) {
    if (_ZN11CommManager11isLocalSlotEj(gCommManager, o->sessionSlot)) {
        s32 r4 = PlayerData_GetBySessionSlot(o->sessionSlot);
        s32 r6 = _ZN10PlayerData12getHairStyleEv(r4);
        s32 r2 = _ZN10PlayerData12getHairColorEv(r4);
        PlayerActor_NetSendHair(o, r6, r2);
    }
}

extern "C" void PlayerActor_HaircutFinishUpdate(Obj *o) {
    _ZN12Unk_020102ec11advanceAnimEv(o);
    if (_ZN13AnimFrameCtrl14hasPassedFrameEi(&o->unk_2cc, 10)) {
        EffectSpl_CreateOneShot(0x60, (u8 *)o + 0x6dc, 0, gEffectSplDefaultInitCbs);
    }
    if (((Bits *)&o->unk_2d4)->mid >= 0xb) {
        Rec *r = &o->actionWork;
        if (r->unk_02 == 0) {
            u16 loc[2];
            PlayerActor_GetHat(&loc[1], o);
            loc[0] = loc[1];
            if (_ZN12Unk_02006d1416requestHatChangeEPthhh(o, loc, r->unk_00, r->unk_01, 0)) {
                s32 p = PlayerActor_GetPlayerData(o);
                _ZN10PlayerData12setHairStyleEh(p, r->unk_00);
                _ZN10PlayerData12setHairColorEh(p, r->unk_01);
                r->unk_02 = 1;
            }
        }
    }
}


}  // namespace ns_0221fa00

namespace ns_0221f0b8 {

struct Unk_ov004_0221f0b8_V3 {
    s32 x, y, z;
};

struct Unk_ov004_0221f0b8_Rec {
    Unk_ov004_0221f0b8_V3 unk_00;
    s32 unk_0c;
    s32 unk_10;
    u8 unk_14;
    u8 unk_15;
};

class Unk_ov004_0221f0b8_Msg {
public:
    inline Unk_ov004_0221f0b8_Msg() { _ZN19PlayerActionRequestC1Ev(this); }
    inline void func_0200e2c0(u32 a, u32 b, u32 c) { _ZN19PlayerActionRequest6assignEiis(this, a, b, c); }
    u8 pad_00[0xc];
    Unk_ov004_0221f0b8_V3 unk_0c;
    u8 pad_18[4];
};

struct Unk_ov004_0221f0b8_Obj {
    u8 pad_00[0x5c];
    Unk_ov004_0221f0b8_V3 position;
    u8 pad_68[0x8e - 0x68];
    s16 rotY;
    u8 pad_90[0x98 - 0x90];
    s32 speed;
    u8 pad_9c[0x2cc - 0x9c];
    s32 unk_2cc;
    s32 unk_2d0;
    u8 pad_2d4[0x2dc - 0x2d4];
    s32 unk_2dc;
    u8 pad_2e0[0x700 - 0x2e0];
    s32 animId;
    u8 pad_704[0x7d0 - 0x704];
    Unk_ov004_0221f0b8_Rec actionWork;
    u8 pad_7e8[0x7ec - 0x7e8];
    s32 action;
    u8 pad_7f0[0x7f4 - 0x7f0];
    s32 drawStep;
    s32 actionPriority;
    u32 sessionSlot;
    s32 exitIndex;
    u8 pad_804[0x8ec - 0x804];
    u32 netData[4];
};

typedef Unk_ov004_0221f0b8_Obj Obj;
typedef Unk_ov004_0221f0b8_V3 V3;
typedef Unk_ov004_0221f0b8_Rec Rec;
typedef Unk_ov004_0221f0b8_Msg Msg;

extern "C" {
extern void *gCommManager;
extern u8 data_ov004_0224d4a4[];
extern u8 data_ov004_0224d4b0[];
extern u8 data_ov004_0224d4b4[];

s32 func_01ffcb0c(s32 a, s32 b);
void _ZN12Unk_020102ec10switchAnimEijt(Obj *o, s32 a, u32 b, u32 c);
void _ZN12Unk_020102ec9startAnimEijt(Obj *o, s32 a, u32 b, u32 c);
void _ZN12Unk_020102ec13startAnimOnceEijt(Obj *o, s32 a, u32 b, u32 c);
void _ZN12Unk_020102ec8setSpeedEPj(Obj *o, u8 *a);
s32 _ZN12Unk_020102ec11advanceAnimEv(Obj *o);
void _ZN12Unk_020102ec15moveNoCollisionEv(Obj *o);
void _ZN12Unk_020102ec18updateBodyColliderEv(Obj *o);
void _ZN12Unk_02006d1415clearActionFlagEj(Obj *o, u32 a);
void _ZN12Unk_02006d1413setActionFlagEj(Obj *o, u32 a);
void _ZN12Unk_02006d146playSeEj(Obj *o, u32 a);
void _ZN11PlayerActor11requestWaitEjjj(Obj *o, s32 a, s32 b, s32 c);
s32 _ZN12Unk_0200769421getActionDonePriorityEj(Obj *o, s32 a);
s32 _ZN11CommManager11isLocalSlotEj(void *g, u32 a);
s32 TalkRequest_FinishSceneEntry();
s32 Building_GetLastEntranceType();
void Building_PlayDoorChime();
s32 Scene_GetWarpRequest();
void SceneWarp_RequestExit(s32 a, s32 b);
s32 Scene_InHouseRoom();
s32 Scene_InVillagerHouse();
s32 _ZN12Unk_02006d1416isGuestInSessionEv(Obj *o);
s32 _ZN11PlayerActor11pushRequestEP19PlayerActionRequest(Obj *o, Msg *m);
s32 _ZN17TwoLayerAnimModel12updateLayersEv(void *p);
s32 _ZN12Unk_02006d1416updateFootstepFxEv(Obj *o);
s32 _ZN13AnimFrameCtrl10isFinishedEv(void *p);
s32 _ZN13AnimFrameCtrl5setupEihit(void *p, u32 a, u32 b, u32 c, u32 d);
s32 _ZN12Unk_02006d1418netFollowTransformEv(Obj *o);
s32 PlayerActor_StepTowardPose(Obj *o, s32 a, s32 b, s32 c);
void PlayerActor_GetFrontUnitCenter(V3 *out, Obj *o);
s32 _ZN11PlayerActor17getInputMagnitudeEv(Obj *o);
s32 _ZN11PlayerActor13getInputAngleEv(Obj *o);
s32 Math_AngleToDir4(s16 a);
void NetBuf_UnpackPair20(void *a, s32 *b, s32 *c);
void NetBuf_PackPair20(void *a, s32 b, s32 c);

s32 PlayerActor_RoomWalkToward(Obj *o, V3 *tgt, s32 *out, s32 *lim);
s32 PlayerActor_RequestSit(Obj *o, s32 a, s32 b, s32 c);
s32 PlayerActor_RequestStandUpFront(Obj *o, s32 a, s32 b);
s32 RoomTelephone_GetInstance();
s32 RoomTelephone_PlayAnimHangUp();
s32 RoomTelephone_PlayAnimHold();
s32 RoomTelephone_PlayAnimPickUp();
void PlayerActor_HaircutFinishUpdate(Obj *o);

void PlayerActor_DoorWalkOutGetNetData(void *a, s32 *b, s32 *c);
void PlayerActor_DoorWalkOutSetNetData(void *a, s32 b, s32 c);
void PlayerActor_DoorWalkOutSetWork(Rec *r, V3 v, s32 a, s32 b, u8 c);
s32 PlayerActor_RequestDoorWalkOut(Obj *o, V3 *v, u32 a, u32 b);
void PlayerActor_DoorWalkOutSetArgs(V3 *d, V3 v);
void PlayerActor_RoomWalkCheckEnd(Obj *o);
void PlayerActor_RoomWalkUpdateAnim(Obj *o);
void PlayerActor_DoorWalkInUpdate(Obj *o);
void PlayerActor_DoorWalkInGetNetData(void *a, s32 *b, s32 *c);
void PlayerActor_DoorWalkInSetNetData(void *a, s32 b, s32 c);
void PlayerActor_DoorWalkInSetWork(Rec *r, V3 v, s32 a, u32 b, u8 c);
s32 PlayerActor_RequestDoorWalkIn(Obj *o, V3 *v, u32 a, u32 b);
void PlayerActor_DoorWalkInSetArgs(V3 *d, V3 v);
void PlayerActor_DrinkCoffeeCheckEnd(Obj *o);
s32 PlayerActor_PhoneHangUpCheckEnd(Obj *o);
s32 PlayerActor_RequestPhoneHangUp(Obj *o, u32 a, u32 b);
s32 PlayerActor_RequestPhoneHold(Obj *o, u32 a, u32 b);
void PlayerActor_PhonePickUpCheckEnd(Obj *o);
void PlayerActor_PhonePickUpMove(Obj *o);
s32 PlayerActor_RequestPhonePickUp(Obj *o, u32 a, u32 b);
void PlayerActor_PhonePickUpSetWork(V3 *d, V3 v);
void PlayerActor_HaircutFinishCheckEnd(Obj *o);
}

extern "C" void PlayerActor_HaircutFinishCheckEnd(Obj *o) {
    if (_ZN13AnimFrameCtrl10isFinishedEv(&o->unk_2cc)) {
        if (_ZN11PlayerActor17getInputMagnitudeEv(o) > 0) {
            s32 t = _ZN11PlayerActor13getInputAngleEv(o) - o->rotY;
            if (Math_AngleToDir4((s16)t) == 0) {
                PlayerActor_RequestStandUpFront(o, 6, -1);
            }
        }
    }
}

extern "C" void PlayerActor_MainHaircutFinish(Obj *o) {
    PlayerActor_HaircutFinishUpdate(o);
    PlayerActor_HaircutFinishCheckEnd(o);
}

extern "C" s32 PlayerActor_RequestPhonePickUp(Obj *o, u32 a, u32 b) {
    Msg m;
    m.func_0200e2c0(0x7d, a, b);
    s32 r = _ZN11PlayerActor11pushRequestEP19PlayerActionRequest(o, &m);
    _ZN19PlayerActionRequestD1Ev(&m);
    return r;
}

extern "C" void PlayerActor_PhonePickUpSetWork(V3 *d, V3 v) {
    d->x = v.x;
    d->y = v.y;
    d->z = v.z;
}

extern "C" void PlayerActor_SetupPhonePickUp(Obj *o) {
    V3 v;
    _ZN12Unk_020102ec13startAnimOnceEijt(o, 0x78, 3, 0);
    PlayerActor_GetFrontUnitCenter(&v, o);
    v.z = v.z + 0x2000;
    PlayerActor_PhonePickUpSetWork((V3 *)&o->actionWork, v);
    RoomTelephone_GetInstance();
    RoomTelephone_PlayAnimPickUp();
}

extern "C" void PlayerActor_NetPhonePickUp(Obj *o, u32 a) {
    PlayerActor_RequestPhonePickUp(o, 6, a);
}

extern "C" void PlayerActor_PhonePickUpMove(Obj *o) {
    Rec *r4 = &o->actionWork;
    if (_ZN11CommManager11isLocalSlotEj(gCommManager, o->sessionSlot)) {
        PlayerActor_StepTowardPose(o, r4->unk_00.x, r4->unk_00.z, -0x8000);
    } else {
        _ZN12Unk_02006d1418netFollowTransformEv(o);
    }
}

extern "C" void PlayerActor_PhonePickUpCheckEnd(Obj *o) {
    if (_ZN13AnimFrameCtrl10isFinishedEv(&o->unk_2cc)) {
        PlayerActor_RequestPhoneHold(o, 6, -1);
    }
}

extern "C" void PlayerActor_MainPhonePickUp(Obj *o) {
    PlayerActor_PhonePickUpMove(o);
    _ZN12Unk_020102ec11advanceAnimEv(o);
    _ZN12Unk_020102ec18updateBodyColliderEv(o);
    PlayerActor_PhonePickUpCheckEnd(o);
}

extern "C" s32 PlayerActor_RequestPhoneHold(Obj *o, u32 a, u32 b) {
    Msg m;
    m.func_0200e2c0(0x7e, a, b);
    s32 r = _ZN11PlayerActor11pushRequestEP19PlayerActionRequest(o, &m);
    _ZN19PlayerActionRequestD1Ev(&m);
    return r;
}

extern "C" void PlayerActor_SetupPhoneHold(Obj *o) {
    _ZN12Unk_020102ec9startAnimEijt(o, 0x79, 3, 0);
    RoomTelephone_GetInstance();
    RoomTelephone_PlayAnimHold();
}

extern "C" void PlayerActor_NetPhoneHold(Obj *o, u32 a) {
    PlayerActor_RequestPhoneHold(o, 6, a);
}

extern "C" void PlayerActor_MainPhoneHold(Obj *o) {
    _ZN12Unk_020102ec11advanceAnimEv(o);
    _ZN12Unk_020102ec18updateBodyColliderEv(o);
    _ZN12Unk_02006d1418netFollowTransformEv(o);
}

extern "C" s32 PlayerActor_RequestPhoneHangUp(Obj *o, u32 a, u32 b) {
    Msg m;
    m.func_0200e2c0(0x7f, a, b);
    s32 r = _ZN11PlayerActor11pushRequestEP19PlayerActionRequest(o, &m);
    _ZN19PlayerActionRequestD1Ev(&m);
    return r;
}

extern "C" void PlayerActor_SetupPhoneHangUp(Obj *o) {
    _ZN12Unk_020102ec13startAnimOnceEijt(o, 0x78, 3, 0);
    u32 t = (u32)(o->unk_2d0 << 4) >> 16;
    _ZN13AnimFrameCtrl5setupEihit(&o->unk_2cc, t, 3, 0x1000, (u16)(t - 1));
    RoomTelephone_GetInstance();
    RoomTelephone_PlayAnimHangUp();
}

extern "C" void PlayerActor_NetPhoneHangUp(Obj *o, u32 a) {
    PlayerActor_RequestPhoneHangUp(o, 6, a);
}

extern "C" s32 PlayerActor_PhoneHangUpCheckEnd(Obj *o) {
    if (_ZN13AnimFrameCtrl10isFinishedEv(&o->unk_2cc)) {
        o->actionPriority = _ZN12Unk_0200769421getActionDonePriorityEj(o, o->action);
        _ZN11PlayerActor11requestWaitEjjj(o, 3, 1, -1);
    }
}

extern "C" void PlayerActor_MainPhoneHangUp(Obj *o) {
    _ZN12Unk_020102ec11advanceAnimEv(o);
    _ZN12Unk_020102ec18updateBodyColliderEv(o);
    PlayerActor_PhoneHangUpCheckEnd(o);
}

extern "C" s32 PlayerActor_RequestDrinkCoffee(Obj *o, u32 a, u32 b) {
    Msg m;
    m.func_0200e2c0(0x8a, a, b);
    s32 r = _ZN11PlayerActor11pushRequestEP19PlayerActionRequest(o, &m);
    _ZN19PlayerActionRequestD1Ev(&m);
    return r;
}

extern "C" void PlayerActor_SetupDrinkCoffee(Obj *o) {
    _ZN12Unk_020102ec13startAnimOnceEijt(o, 0x95, 3, 0);
}

extern "C" void PlayerActor_NetDrinkCoffee() {
}

extern "C" void PlayerActor_DrinkCoffeeCheckEnd(Obj *o) {
    if (_ZN13AnimFrameCtrl10isFinishedEv(&o->unk_2cc)) {
        switch (o->animId) {
        case 0x95:
            _ZN12Unk_020102ec13startAnimOnceEijt(o, 0x96, 0, 0);
            break;
        case 0x96:
            _ZN12Unk_020102ec13startAnimOnceEijt(o, 0x97, 0, 0);
            break;
        case 0x97:
            break;
        case 0x98:
            PlayerActor_RequestSit(o, 0, 6, -1);
            break;
        }
    }
}

extern "C" void PlayerActor_MainDrinkCoffee(Obj *o) {
    _ZN12Unk_020102ec11advanceAnimEv(o);
    PlayerActor_DrinkCoffeeCheckEnd(o);
}

extern "C" void PlayerActor_DoorWalkInSetArgs(V3 *d, V3 v) {
    d->x = v.x;
    d->y = v.y;
    d->z = v.z;
}

extern "C" s32 PlayerActor_RequestDoorWalkIn(Obj *o, V3 *v, u32 a, u32 b) {
    Msg m;
    m.func_0200e2c0(0x8b, a, b);
    PlayerActor_DoorWalkInSetArgs(&m.unk_0c, *v);
    s32 r = _ZN11PlayerActor11pushRequestEP19PlayerActionRequest(o, &m);
    _ZN19PlayerActionRequestD1Ev(&m);
    return r;
}

extern "C" void PlayerActor_DoorWalkInSetWork(Rec *r, V3 v, s32 a, u32 b, u8 c) {
    r->unk_00.x = v.x;
    r->unk_00.y = v.y;
    r->unk_00.z = v.z;
    r->unk_0c = 0;
    r->unk_10 = a;
    r->unk_14 = *(u8 *)&b;
    r->unk_15 = c;
}

extern "C" void PlayerActor_DoorWalkInSetNetData(void *a, s32 b, s32 c) {
    NetBuf_PackPair20(a, b, c);
}

extern "C" void PlayerActor_DoorWalkInGetNetData(void *a, s32 *b, s32 *c) {
    NetBuf_UnpackPair20(a, b, c);
}

extern "C" void PlayerActor_SetupDoorWalkIn(Obj *o, Obj *arg) {
    V3 c;
    V3 *r6 = (V3 *)((u8 *)arg + 0xc);
    Rec *r0c = &o->actionWork;
    _ZN12Unk_020102ec9startAnimEijt(o, 1, 0, 0);
    s32 r7 = 0;
    o->unk_2dc = r7;
    u32 r5 = r7;
    s32 mode = Building_GetLastEntranceType();
    o->drawStep = 1;
    switch (mode) {
    case 2:
        if ((_ZN12Unk_02006d1416isGuestInSessionEv(o) && Scene_InHouseRoom()) || Scene_InVillagerHouse()) {
            r7 = 0x14;
            r5 = 0x4ca;
            o->drawStep = 0;
        } else {
            r5 = 0x4cb;
        }
        break;
    case 1:
        r5 = 0x4d2;
        r7 = 0x14;
        o->drawStep = 0;
        break;
    case 0:
    case 3:
        break;
    }
    void *r14 = &o->netData;
    if (_ZN11CommManager11isLocalSlotEj(gCommManager, o->sessionSlot)) {
        V3 *pv = &o->position;
        c.x = pv->x;
        c.y = pv->y;
        c.z = pv->z;
        PlayerActor_DoorWalkInSetNetData(r14, c.x, c.z);
        o->position.z = o->position.z + 0x6000;
    } else {
        if (r5 != 0) {
            _ZN12Unk_02006d146playSeEj(o, r5);
            if (r5 == 0x4cb) Building_PlayDoorChime();
        }
        c.x = r6->x;
        c.y = r6->y;
        c.z = r6->z;
        o->position.z = c.z + 0x6000;
    }
    PlayerActor_DoorWalkInSetWork(r0c, c, 0x400, r7, (u8)mode);
    if (o->drawStep == 1) {
        _ZN12Unk_020102ec8setSpeedEPj(o, data_ov004_0224d4b4);
        r0c->unk_0c = 0x400;
    }
    _ZN12Unk_02006d1413setActionFlagEj(o, 5);
}

extern "C" void PlayerActor_NetDoorWalkIn(Obj *o, u32 a) {
    V3 v;
    PlayerActor_DoorWalkInGetNetData(&o->netData, &v.x, &v.z);
    PlayerActor_RequestDoorWalkIn(o, &v, 6, a);
}

extern "C" void PlayerActor_DoorWalkInUpdate(Obj *o) {
    Rec *r4 = &o->actionWork;
    V3 v;
    s32 lim;
    u8 *p = &r4->unk_14;
    if (r4->unk_14 != 0) {
        *p = r4->unk_14 - 1;
        if (r4->unk_15 == 2) {
            if (*p != 0) return;
            if (_ZN11CommManager11isLocalSlotEj(gCommManager, o->sessionSlot) == 0) {
                Building_PlayDoorChime();
                _ZN12Unk_02006d146playSeEj(o, 0x4cb);
            }
            o->drawStep = 1;
            _ZN12Unk_020102ec8setSpeedEPj(o, data_ov004_0224d4b0);
            r4->unk_0c = 0x400;
        } else {
            u32 c = *p;
            if (c > 0xa) return;
            if (c == 0xa) {
                o->drawStep = 1;
                _ZN12Unk_020102ec8setSpeedEPj(o, data_ov004_0224d4a4);
                r4->unk_0c = 0x400;
            } else if (c == 0) {
                if (_ZN11CommManager11isLocalSlotEj(gCommManager, o->sessionSlot) == 0) {
                    _ZN12Unk_02006d146playSeEj(o, 0x4d3);
                }
            }
        }
    }
    lim = r4->unk_10;
    v.x = r4->unk_00.x;
    v.y = r4->unk_00.y;
    v.z = r4->unk_00.z;
    PlayerActor_RoomWalkToward(o, &v, &r4->unk_0c, &lim);
}

extern "C" void PlayerActor_RoomWalkUpdateAnim(Obj *o) {
    s32 r4 = o->speed;
    s32 t = func_01ffcb0c(r4, 0x3ae1);
    if (t < 0x800) t = 0x800;
    if (t <= o->unk_2d0) o->unk_2dc = t;
    if (r4 > 0x53f) {
        if (o->animId != 2) _ZN12Unk_020102ec10switchAnimEijt(o, 2, 3, 0);
    } else {
        if (o->animId != 1) _ZN12Unk_020102ec10switchAnimEijt(o, 1, 3, 0);
    }
    _ZN17TwoLayerAnimModel12updateLayersEv((u8 *)o + 0x230);
    _ZN12Unk_02006d1416updateFootstepFxEv(o);
}

extern "C" void PlayerActor_RoomWalkCheckEnd(Obj *o) {
    if (o->speed == 0 && o->drawStep == 1) {
        o->actionPriority = _ZN12Unk_0200769421getActionDonePriorityEj(o, o->action);
        _ZN11PlayerActor11requestWaitEjjj(o, 3, 5, -1);
        _ZN12Unk_02006d1415clearActionFlagEj(o, 5);
        if (_ZN11CommManager11isLocalSlotEj(gCommManager, o->sessionSlot)) {
            TalkRequest_FinishSceneEntry();
        }
    }
}

extern "C" void PlayerActor_MainDoorWalkIn(Obj *o) {
    PlayerActor_DoorWalkInUpdate(o);
    PlayerActor_RoomWalkUpdateAnim(o);
    _ZN12Unk_020102ec15moveNoCollisionEv(o);
    _ZN12Unk_020102ec18updateBodyColliderEv(o);
    PlayerActor_RoomWalkCheckEnd(o);
}

extern "C" void PlayerActor_DoorWalkOutSetArgs(V3 *d, V3 v) {
    d->x = v.x;
    d->y = v.y;
    d->z = v.z;
}

extern "C" s32 PlayerActor_RequestDoorWalkOut(Obj *o, V3 *v, u32 a, u32 b) {
    Msg m;
    m.func_0200e2c0(0x8c, a, b);
    PlayerActor_DoorWalkOutSetArgs(&m.unk_0c, *v);
    s32 r = _ZN11PlayerActor11pushRequestEP19PlayerActionRequest(o, &m);
    _ZN19PlayerActionRequestD1Ev(&m);
    return r;
}

extern "C" void PlayerActor_DoorWalkOutSetWork(Rec *r, V3 v, s32 a, s32 b, u8 c) {
    r->unk_00.x = v.x;
    r->unk_00.y = v.y;
    r->unk_00.z = v.z;
    r->unk_0c = a;
    r->unk_10 = b;
    r->unk_14 = 0;
    r->unk_15 = c;
}

extern "C" void PlayerActor_DoorWalkOutSetNetData(void *a, s32 b, s32 c) {
    NetBuf_PackPair20(a, b, c);
}

extern "C" void PlayerActor_DoorWalkOutGetNetData(void *a, s32 *b, s32 *c) {
    NetBuf_UnpackPair20(a, b, c);
}

extern "C" void PlayerActor_SetupDoorWalkOut(Obj *o, Obj *arg) {
    V3 c;
    V3 *r6 = (V3 *)((u8 *)arg + 0xc);
    if (o->animId != 1) _ZN12Unk_020102ec9startAnimEijt(o, 1, 3, 0);
    u32 r5 = 0;
    s32 r7 = Building_GetLastEntranceType();
    switch (r7) {
    case 2:
        r5 = 0x4cb;
        break;
    case 1:
        r5 = 0x4d2;
        break;
    case 0:
    case 3:
        if (_ZN11CommManager11isLocalSlotEj(gCommManager, o->sessionSlot)) {
            SceneWarp_RequestExit(Scene_GetWarpRequest(), o->exitIndex);
        }
        break;
    }
    if (r5 != 0) {
        if (_ZN11CommManager11isLocalSlotEj(gCommManager, o->sessionSlot) == 0) {
            _ZN12Unk_02006d146playSeEj(o, r5);
            if (r5 == 0x4cb) Building_PlayDoorChime();
        }
    }
    c.x = r6->x;
    c.y = r6->y;
    c.z = r6->z;
    PlayerActor_DoorWalkOutSetWork(&o->actionWork, c, o->speed, 0x400, (u8)r7);
    PlayerActor_DoorWalkOutSetNetData(&o->netData, c.x, c.z);
}

extern "C" void PlayerActor_NetDoorWalkOut(Obj *o, u32 a) {
    V3 v;
    PlayerActor_DoorWalkOutGetNetData(&o->netData, &v.x, &v.z);
    PlayerActor_RequestDoorWalkOut(o, &v, 6, a);
}


}  // namespace ns_0221f0b8

namespace ns_0221e7a8 {

struct Unk_ov004_0221e7a8_V3 {
    s32 x, y, z;
};

struct Unk_ov004_0221e7a8_Rec {
    Unk_ov004_0221e7a8_V3 unk_00;
    s32 unk_0c;
    s32 unk_10;
    u8 unk_14;
    u8 unk_15;
};

struct Unk_ov004_0221e7a8_Pair {
    s32 a, b;
};

class Unk_ov004_0221e7a8_Msg {
public:
    inline Unk_ov004_0221e7a8_Msg() { _ZN19PlayerActionRequestC1Ev(this); }
    inline void func_0200e2c0(u32 a, u32 b, u32 c) { _ZN19PlayerActionRequest6assignEiis(this, a, b, c); }
    u8 pad_00[0xc];
    Unk_ov004_0221e7a8_V3 unk_0c;
    u8 pad_18[4];
};

struct Unk_ov004_0221e7a8_Obj {
    u8 pad_00[0x5c];
    Unk_ov004_0221e7a8_V3 position;
    u8 pad_68[0x8e - 0x68];
    s16 rotY;
    u8 pad_90[0x98 - 0x90];
    s32 speed;
    u8 pad_9c[0x13d - 0x9c];
    u8 actionHeld;
    u8 pad_13e[0x144 - 0x13e];
    u8 hasTargetPos;
    u8 pad_145[0x154 - 0x145];
    s32 targetPosX;
    s32 targetPosY;
    s32 targetPosZ;
    u8 pad_160[0x169 - 0x160];
    u8 touchTargetId;
    u8 pad_16a[0x16c - 0x16a];
    s32 inputMode;
    u8 pad_170[0x2dc - 0x170];
    s32 unk_2dc;
    u8 pad_2e0[0x700 - 0x2e0];
    s32 animId;
    u8 pad_704[0x7d0 - 0x704];
    Unk_ov004_0221e7a8_Rec actionWork;
    u8 pad_7e8[0x7fc - 0x7e8];
    u32 sessionSlot;
    s32 exitIndex;
    u8 pad_804[0x81c - 0x804];
    u16 actionItem;
    u16 shownItem;
    u8 pad_820[0x8e5 - 0x820];
    u8 alpha;
    u8 pad_8e6[0x8ec - 0x8e6];
    u32 netData[4];
};

typedef Unk_ov004_0221e7a8_Obj Obj;
typedef Unk_ov004_0221e7a8_V3 V3;
typedef Unk_ov004_0221e7a8_Pair Pair;
typedef Unk_ov004_0221e7a8_Rec Rec;
typedef Unk_ov004_0221e7a8_Msg Msg;

extern "C" {
extern void *gCommManager;
extern u8 sAct12Pos[];
extern u8 sRoomInteractDist[];
extern u8 data_ov004_0224d4a8[];
extern s16 data_02135f44[];
extern void *gSceneBlockMap;

s32 func_020e9688(V3 *v);
s32 func_020e9650(void *a, void *b);
s32 func_020e7b98(s32 a, s32 b);
s32 func_01ffcb0c(s32 a, s32 b);
void VEC_Add(void *a, void *b, void *c);
void func_01ffd070(void *a, void *b, void *c);
void PlayerActor_ApproachValue(s32 *p, s32 a, s32 b, s32 c, s32 d);
s32 PlayerActor_Decelerate(s32 a, s32 b);
s32 PlayerActor_Accelerate(s32 a, s32 b);
void PlayerActor_TurnAngle(void *a, s32 b);
void _ZN12Unk_020102ec9setAngleYEPs(Obj *o, s16 *a);
void _ZN12Unk_020102ec8setSpeedEPj(Obj *o, s32 *a);
void _ZN12Unk_020102ec9startAnimEijt(Obj *o, s32 a, u32 b, u32 c);
void _ZN12Unk_020102ec15moveNoCollisionEv(Obj *o);
void _ZN12Unk_020102ec18updateBodyColliderEv(Obj *o);
void _ZN12Unk_02006d1413setActionFlagEj(Obj *o, u32 a);
void _ZN12Unk_02006d146playSeEj(Obj *o, u32 a);
s32 _ZN12Unk_02006d1415getHeldToolKindEv(Obj *o);
s32 _ZN12Unk_02006d1410interactAtEi(Obj *o, s32 a);
s32 Math_AngleToDir4(s16 a);
void NetBuf_UnpackPair20(void *a, s32 *b, s32 *c);
void NetBuf_PackPair20(void *a, s32 b, s32 c);
s32 _ZN11PlayerActor11pushRequestEP19PlayerActionRequest(Obj *o, Msg *m);
s32 _ZN11CommManager8isOnlineEv(void *g);
void _ZN11CommManager11beginRecordEv(void *g);
void _ZN11CommManager11writeRecordEPhj(void *g, u8 *b, u32 n);
void _ZN11CommManager9endRecordEjj(void *g, u32 a, u32 b);
s32 _ZN11CommManager11isLocalSlotEj(void *g, u32 a);
void PlayerActor_PackHair(u8 *p, s32 a, s32 b);
s32 Scene_InHouseRoom();
s32 Room_CountOccupants();
s32 Scene_GetWarpRequest();
void SceneWarp_RequestExit(s32 a, s32 b);
s32 Pocket_FindEmpty();
s32 BlockMap_GetItemPtrAtPos(void *a, V3 *v, u32 b);
s32 Item_IsNormalItem(s32 a);
void FieldPos_ToUnit(s32 *a, s32 *b, V3 *v);
s32 _ZN12Unk_02006d1418requestPickUpReachE17Unk_0200b750_Pairijs(Obj *o, Pair *p, s32 a, u32 b, s32 c);
s32 PlayerActor_OffsetByAngle(V3 *out, Obj *o, void *pos, void *ang, u32 arg);
s32 _ZN12Unk_02006d1412isPosInReachEPij(Obj *o, V3 *v, u32 a);
s32 _ZN12Unk_02006d1415startFieldQueryEiii(Obj *o, V3 *v, s32 a, s32 b);
s32 _ZN12Unk_02006d1420requestByFieldAnswerEii(Obj *o, V3 *v, s32 a);

void PlayerActor_RoomWalkUpdateAnim(Obj *o);
void PlayerActor_RoomWalkCheckEnd(Obj *o);
s32 FtrContactSet_GetInstance();
s32 _ZN13FtrContactSet10getContactEj(s32 a, s32 b);
V3 *_ZN10FtrContact22getClampedContactPointEv(s32 a);
s32 _ZN10FtrContact12getPushAngleEv(s32 a);
s32 PlayerActor_RequestFtrGrabApproach(Obj *o, s32 x, s32 z, s32 a, s32 b, s32 c);
s32 FtrMgr_FindFurnitureFacingPlayer(u32 *a, u32 *b, u16 *c, u16 *d);
s32 FtrMgr_GetActorLayer(s32 a);
s32 PlayerActor_RequestPickUpItem(Obj *o, Pair *p, s32 a, u32 b, s32 c);

void PlayerActor_RoomWalkToward(Obj *o, V3 *tgt, s32 *out, s32 *lim);
void PlayerActor_ExitWalkInMove(Obj *o);
void PlayerActor_ExitWalkOutMove(Obj *o);
void PlayerActor_DoorWalkOutMove(Obj *o);
void PlayerActor_ExitWalkInGetNetData(void *a, s32 *b, s32 *c);
void PlayerActor_ExitWalkInSetNetData(void *a, s32 b, s32 c);
void PlayerActor_ExitWalkInSetWork(Rec *r, V3 v, s32 w);
s32 PlayerActor_RequestExitWalkIn(Obj *o, V3 *v, u32 a, u32 b);
void PlayerActor_ExitWalkInSetArgs(V3 *d, V3 v);
void PlayerActor_ExitWalkOutGetNetData(void *a, s32 *b, s32 *c);
void PlayerActor_ExitWalkOutSetNetData(void *a, s32 b, s32 c);
void PlayerActor_ExitWalkOutSetWork(Rec *r, V3 v, s32 a, s32 b);
s32 PlayerActor_RequestExitWalkOut(Obj *o, V3 *v, u32 a, u32 b);
void PlayerActor_ExitWalkOutSetArgs(V3 *d, V3 v);
}

extern "C" void PlayerActor_DoorWalkOutMove(Obj *o) {
    Rec *r = &o->actionWork;
    s32 lim = r->unk_10;
    V3 v;
    v.x = r->unk_00.x;
    v.y = r->unk_00.y;
    v.z = r->unk_00.z;
    PlayerActor_RoomWalkToward(o, &v, &r->unk_0c, &lim);
}

extern "C" void PlayerActor_MainDoorWalkOut(Obj *o) {
    PlayerActor_DoorWalkOutMove(o);
    PlayerActor_RoomWalkUpdateAnim(o);
    _ZN12Unk_020102ec15moveNoCollisionEv(o);
    _ZN12Unk_020102ec18updateBodyColliderEv(o);
    Rec *q = &o->actionWork;
    u8 *r4 = &q->unk_14;
    u8 r6 = q->unk_15;
    void *r7 = gCommManager;
    if (_ZN11CommManager11isLocalSlotEj(r7, o->sessionSlot) == 0 && *r4 == 0xf && r6 == 1) {
        _ZN12Unk_02006d146playSeEj(o, 0x4d3);
    }
    if (_ZN11CommManager11isLocalSlotEj(r7, o->sessionSlot) != 0) {
        if ((u32)(r6 - 1) <= 1 && *r4 == 0xa) {
            SceneWarp_RequestExit(Scene_GetWarpRequest(), o->exitIndex);
        }
    }
    *r4 = *r4 + 1;
}

extern "C" void PlayerActor_ExitWalkOutSetArgs(V3 *d, V3 v) {
    d->x = v.x;
    d->y = v.y;
    d->z = v.z;
}

extern "C" s32 PlayerActor_RequestExitWalkOut(Obj *o, V3 *v, u32 a, u32 b) {
    Msg m;
    m.func_0200e2c0(0x8d, a, b);
    PlayerActor_ExitWalkOutSetArgs(&m.unk_0c, *v);
    s32 r = _ZN11PlayerActor11pushRequestEP19PlayerActionRequest(o, &m);
    _ZN19PlayerActionRequestD1Ev(&m);
    return r;
}

extern "C" void PlayerActor_ExitWalkOutSetWork(Rec *r, V3 v, s32 a, s32 b) {
    r->unk_00.x = v.x;
    r->unk_00.y = v.y;
    r->unk_00.z = v.z;
    r->unk_0c = a;
    r->unk_10 = b;
}

extern "C" void PlayerActor_ExitWalkOutSetNetData(void *a, s32 b, s32 c) {
    NetBuf_PackPair20(a, b, c);
}

extern "C" void PlayerActor_ExitWalkOutGetNetData(void *a, s32 *b, s32 *c) {
    NetBuf_UnpackPair20(a, b, c);
}

extern "C" void PlayerActor_SetupExitWalkOut(Obj *o, Obj *arg) {
    V3 c;
    V3 *r4 = (V3 *)((u8 *)arg + 0xc);
    if (o->animId != 1) _ZN12Unk_020102ec9startAnimEijt(o, 1, 3, 0);
    c.x = r4->x;
    c.y = r4->y;
    c.z = r4->z;
    PlayerActor_ExitWalkOutSetWork(&o->actionWork, c, o->speed, 0x400);
    PlayerActor_ExitWalkOutSetNetData(&o->netData, c.x, c.z);
}

extern "C" void PlayerActor_NetExitWalkOut(Obj *o, u32 a) {
    V3 v;
    PlayerActor_ExitWalkOutGetNetData(&o->netData, &v.x, &v.z);
    if ((v.x & 0x80000) != 0) v.x |= 0xfff00000;
    if ((v.z & 0x80000) != 0) v.z |= 0xfff00000;
    PlayerActor_RequestExitWalkOut(o, &v, 6, a);
}

extern "C" void PlayerActor_ExitWalkOutMove(Obj *o) {
    Rec *r = &o->actionWork;
    s32 lim = r->unk_10;
    V3 v;
    v.x = r->unk_00.x;
    v.y = r->unk_00.y;
    v.z = r->unk_00.z;
    PlayerActor_RoomWalkToward(o, &v, &r->unk_0c, &lim);
}

extern "C" void PlayerActor_MainExitWalkOut(Obj *o) {
    PlayerActor_ExitWalkOutMove(o);
    PlayerActor_RoomWalkUpdateAnim(o);
    _ZN12Unk_020102ec15moveNoCollisionEv(o);
    _ZN12Unk_020102ec18updateBodyColliderEv(o);
}

extern "C" void PlayerActor_ExitWalkInSetArgs(V3 *d, V3 v) {
    d->x = v.x;
    d->y = v.y;
    d->z = v.z;
}

extern "C" s32 PlayerActor_RequestExitWalkIn(Obj *o, V3 *v, u32 a, u32 b) {
    Msg m;
    m.func_0200e2c0(0x8e, a, b);
    PlayerActor_ExitWalkInSetArgs(&m.unk_0c, *v);
    s32 r = _ZN11PlayerActor11pushRequestEP19PlayerActionRequest(o, &m);
    _ZN19PlayerActionRequestD1Ev(&m);
    return r;
}

extern "C" void PlayerActor_ExitWalkInSetWork(Rec *r, V3 v, s32 w) {
    r->unk_00.x = v.x;
    r->unk_00.y = v.y;
    r->unk_00.z = v.z;
    r->unk_0c = w;
    r->unk_10 = w;
}

extern "C" void PlayerActor_ExitWalkInSetNetData(void *a, s32 b, s32 c) {
    NetBuf_PackPair20(a, b, c);
}

extern "C" void PlayerActor_ExitWalkInGetNetData(void *a, s32 *b, s32 *c) {
    NetBuf_UnpackPair20(a, b, c);
}

extern "C" void PlayerActor_SetupExitWalkIn(Obj *o, Obj *arg) {
    V3 cur;
    V3 w;
    V3 tmp;
    V3 *r5 = (V3 *)((u8 *)arg + 0xc);
    Rec *r6 = &o->actionWork;
    _ZN12Unk_020102ec9startAnimEijt(o, 1, 0, 0);
    o->unk_2dc = 0;
    w.x = 0;
    w.y = 0;
    w.z = 0;
    void *r7 = &o->netData;
    switch (Math_AngleToDir4(o->rotY)) {
    case 2:
        w.z = w.z + 0x6000;
        break;
    case 0:
        w.z = w.z - 0x6000;
        break;
    case 3:
        w.x = w.x + 0x6000;
        break;
    case 1:
        w.x = w.x - 0x6000;
        break;
    }
    if (_ZN11CommManager11isLocalSlotEj(gCommManager, o->sessionSlot)) {
        V3 *pv = &o->position;
        cur.x = pv->x;
        cur.y = pv->y;
        cur.z = pv->z;
        PlayerActor_ExitWalkInSetNetData(r7, cur.x, cur.z);
        VEC_Add(&o->position, &w, &o->position);
    } else {
        cur.x = r5->x;
        cur.y = r5->y;
        cur.z = r5->z;
        func_01ffd070(&tmp, &cur, &w);
        V3 *pv = &o->position;
        pv->x = tmp.x;
        pv->y = tmp.y;
        pv->z = tmp.z;
    }
    PlayerActor_ExitWalkInSetWork(r6, cur, 0x400);
    _ZN12Unk_020102ec8setSpeedEPj(o, (s32 *)data_ov004_0224d4a8);
    _ZN12Unk_02006d1413setActionFlagEj(o, 5);
}

extern "C" void PlayerActor_NetExitWalkIn(Obj *o, u32 a) {
    V3 v;
    PlayerActor_ExitWalkInGetNetData(&o->netData, &v.x, &v.z);
    PlayerActor_RequestExitWalkIn(o, &v, 6, a);
}

extern "C" void PlayerActor_ExitWalkInMove(Obj *o) {
    Rec *r = &o->actionWork;
    s32 lim = r->unk_10;
    V3 v;
    v.x = r->unk_00.x;
    v.y = r->unk_00.y;
    v.z = r->unk_00.z;
    PlayerActor_RoomWalkToward(o, &v, &r->unk_0c, &lim);
}

extern "C" void PlayerActor_MainExitWalkIn(Obj *o) {
    PlayerActor_ExitWalkInMove(o);
    PlayerActor_RoomWalkUpdateAnim(o);
    _ZN12Unk_020102ec15moveNoCollisionEv(o);
    _ZN12Unk_020102ec18updateBodyColliderEv(o);
    PlayerActor_RoomWalkCheckEnd(o);
}

extern "C" void PlayerActor_StepAlpha(Obj *o, u32 lim, u32 step) {
    u8 *p = &o->alpha;
    u32 c = *p;
    if (c == lim) return;
    if (c < lim) {
        *p = c + step;
        if (*p > lim) *p = lim;
    } else {
        *p = c - step;
        if (*(s8 *)p < (s32)lim) *p = lim;
    }
}

extern "C" s32 PlayerActor_RoomInteractAt(Obj *o, s32 param) {
    s32 o1 = 0, o2 = 0;
    u32 u, v;
    Pair pa, pb, pc, pd, pe, pf;
    V3 tgt, tmp1, tmp2;
    s32 r5;
    void *r6;
    if (Scene_InHouseRoom() == 0) goto fail;
    if (o->sessionSlot != 0) goto fail;
    r5 = FtrMgr_FindFurnitureFacingPlayer(&u, &v, &o->actionItem, &o->shownItem);
    if (r5 >= 0) {
        if (r5 == o->touchTargetId || o->inputMode == 1) {
            if (FtrMgr_GetActorLayer(r5) == 0) {
                pa.a = 0;
                pa.b = 0;
                _ZN12Unk_02006d1418requestPickUpReachE17Unk_0200b750_Pairijs(o, &pa, r5, 6, -1);
            } else {
                pb.a = (u8)u;
                pb.b = (u8)v;
                PlayerActor_RequestPickUpItem(o, &pb, r5, 6, -1);
            }
            return 1;
        }
    }
    r6 = gSceneBlockMap;
    if (r5 == -2) {
        if (o->inputMode == 1) {
            PlayerActor_OffsetByAngle(&tmp1, o, &o->position, &o->rotY, (u32)(sAct12Pos + 12));
            tgt.x = tmp1.x;
            tgt.y = tmp1.y;
            tgt.z = tmp1.z;
        } else {
            tgt.x = o->targetPosX;
            tgt.y = o->targetPosY;
            tgt.z = o->targetPosZ;
            if (_ZN12Unk_02006d1412isPosInReachEPij(o, &tgt, 0xe) == 0) goto second;
        }
        r5 = BlockMap_GetItemPtrAtPos(r6, &tgt, 1);
        if (Pocket_FindEmpty() == -1) {
            if (r5 == 0) goto second;
            if (Item_IsNormalItem(r5) == 0) goto second;
            FieldPos_ToUnit(&o1, &o2, &tgt);
            pc.a = o1;
            pc.b = o2;
            _ZN12Unk_02006d1418requestPickUpReachE17Unk_0200b750_Pairijs(o, &pc, -1, 6, -1);
            return 1;
        }
        if (r5 == 0) goto second;
        if (Item_IsNormalItem(r5) == 0) goto second;
        if ((u32)Room_CountOccupants() <= 1) {
            if (_ZN12Unk_02006d1415startFieldQueryEiii(o, &tgt, 0, param) == 0) goto second;
            if (_ZN12Unk_02006d1420requestByFieldAnswerEii(o, &tgt, 1) == 0) goto second;
            return 1;
        }
        FieldPos_ToUnit(&o1, &o2, &tgt);
        pd.a = o1;
        pd.b = o2;
        _ZN12Unk_02006d1418requestPickUpReachE17Unk_0200b750_Pairijs(o, &pd, -3, 6, -1);
        return 1;
    }
second:
    if (o->inputMode == 1) {
        PlayerActor_OffsetByAngle(&tmp2, o, &o->position, &o->rotY, (u32)sRoomInteractDist);
        tgt.x = tmp2.x;
        tgt.y = tmp2.y;
        tgt.z = tmp2.z;
    } else {
        tgt.x = o->targetPosX;
        tgt.y = o->targetPosY;
        tgt.z = o->targetPosZ;
        if (_ZN12Unk_02006d1412isPosInReachEPij(o, &tgt, 0xc) == 0) return 0;
    }
    {
        s32 q = BlockMap_GetItemPtrAtPos(r6, &tgt, 0);
        if (q == 0) goto fail;
        if (Item_IsNormalItem(q) == 0) goto fail;
    }
    if (Pocket_FindEmpty() == -1) {
        FieldPos_ToUnit(&o1, &o2, &tgt);
        pe.a = o1;
        pe.b = o2;
        _ZN12Unk_02006d1418requestPickUpReachE17Unk_0200b750_Pairijs(o, &pe, -1, 6, -1);
        return 1;
    }
    if ((u32)Room_CountOccupants() <= 1) {
        if (_ZN12Unk_02006d1415startFieldQueryEiii(o, &tgt, 0, param) == 0) goto fail;
        if (_ZN12Unk_02006d1420requestByFieldAnswerEii(o, &tgt, 0) == 0) goto fail;
        return 1;
    }
    FieldPos_ToUnit(&o1, &o2, &tgt);
    pf.a = o1;
    pf.b = o2;
    _ZN12Unk_02006d1418requestPickUpReachE17Unk_0200b750_Pairijs(o, &pf, -3, 6, -1);
    return 1;
fail:
    return 0;
}

extern "C" void PlayerActor_NetSendHair(void *unused, s32 a, s32 b) {
    u8 buf[4];
    if (_ZN11CommManager8isOnlineEv(gCommManager)) {
        PlayerActor_PackHair(buf, a, b);
        void *g = gCommManager;
        _ZN11CommManager11beginRecordEv(g);
        _ZN11CommManager11writeRecordEPhj(g, buf, 1);
        _ZN11CommManager9endRecordEjj(g, 0x2c, 4);
    }
}

extern "C" s32 PlayerActor_RoomUseTool(Obj *o) {
    if (o->actionHeld != 0) {
        s32 a = FtrContactSet_GetInstance();
        s32 r4 = _ZN13FtrContactSet10getContactEj(a, 0);
        if (r4 == 0) return 0;
        volatile V3 loc;
        V3 *p = _ZN10FtrContact22getClampedContactPointEv(r4);
        loc.x = p->x;
        loc.y = p->y;
        loc.z = p->z;
        return PlayerActor_RequestFtrGrabApproach(o, loc.x, loc.z, _ZN10FtrContact12getPushAngleEv(r4), 5, -1);
    }
    if (o->hasTargetPos != 0) {
        return _ZN12Unk_02006d1410interactAtEi(o, _ZN12Unk_02006d1415getHeldToolKindEv(o));
    }
    return 0;
}

extern "C" void PlayerActor_RoomWalkToward(Obj *o, V3 *tgt, s32 *out, s32 *lim) {
    V3 d;
    V3 saved;
    s32 t;
    s32 ang;
    s16 h;
    s32 v;
    V3 *pv = &o->position;
    saved = *pv;
    d.x = tgt->x - o->position.x;
    d.z = tgt->z - o->position.z;
    if (func_020e9688(&d) < 0x1000) {
        if (*out <= *lim) {
            PlayerActor_ApproachValue(&o->position.x, tgt->x, 0x800, *lim, 0x31);
            PlayerActor_ApproachValue(&o->position.z, tgt->z, 0x800, *lim, 0x31);
            if (tgt->x == o->position.x && tgt->z == o->position.z) {
                *out = 0;
            } else {
                *out = func_020e9650(&o->position, &saved);
                V3 *pw = &o->position;
                *pw = saved;
            }
        } else {
            *out = PlayerActor_Decelerate(*out, *lim);
        }
    } else {
        *out = PlayerActor_Accelerate(*out, *lim);
    }
    ang = func_020e7b98(d.x, d.z);
    h = o->rotY;
    if (*out != 0) {
        PlayerActor_TurnAngle(&h, ang);
        _ZN12Unk_020102ec9setAngleYEPs(o, &h);
    }
    s32 vt = func_01ffcb0c(*out, data_02135f44[(((u16)(s16)(h - ang)) >> 4) * 2 + 1]);
    if (vt < 0) vt = -vt;
    v = vt;
    _ZN12Unk_020102ec8setSpeedEPj(o, &v);
}


}  // namespace ns_0221e7a8
