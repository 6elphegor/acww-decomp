// mwcc-version: 1.2/sp2
#include "types.h"
// Library base class (as include/GameProc.h, but vfunc_20 takes the u32 that ov004's override uses)
class ProcBase {
public:
    static void *operator new(unsigned long size);
    static void operator delete(void *ptr);

    ProcBase();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual void postCreate(s32 v);
    virtual BOOL func_ov004_02225608();
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
    virtual BOOL preDraw();
    virtual BOOL postDraw();
    virtual ~Actor();

    /* 0x50 */ u8 unk_50[0xc];
    /* 0x5c */ s32 unk_5c[3];
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

    /* 0xd4 */ Unk_0203e5d0_Node unk_d4;
    /* 0xe4 */ s32 unk_e4;
    /* 0xe8 */ u16 unk_e8;
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

// ---- helper objects at +0x1a4, +0x248, +0x250 (their other methods live in ov004_054)
class RoomObjRes {
public:
    RoomObjRes();
    ~RoomObjRes();
    void clear();
    s32 RoomObjRes_GetBca(u32 i);
    void RoomObjRes_Free();
    void RoomObjRes_Load(const char *s);
    void *RoomObjRes_GetModel();

    u32 unk_00;
    u32 unk_04;
    u32 unk_08[13];
    u32 unk_3c[13];
    u32 unk_70[13];
};

class RoomObjTex {
public:
    RoomObjTex();
    ~RoomObjTex();
    void RoomObjTex_Reset();
    void RoomObjTex_Load(const char *s);
    u32 RoomObjTex_Get();

    u32 unk_00;
    u8 unk_04;
};

class RoomObjSe {
public:
    RoomObjSe();
    ~RoomObjSe();
    void RoomObj_PlaySe(s32 v);
    void RoomObj_DeactivateSe();
    void RoomObj_SetSePos(Unk_ov004_02224ee4_Vec *v);
    void RoomObj_ActivateSe();

    u32 unk_00[0x10];
};

// ---- second base at +0x290 (see src/main/unk_02065f14.cpp)
class MsgRequest {
public:
    MsgRequest();
    virtual ~MsgRequest();
    virtual void vfunc_08();
    /* 0x04 */ char unk_04[0x1a];
    /* 0x1e */ u8 unk_1e;
};

class TalkMsgRequest : public MsgRequest {
public:
    TalkMsgRequest();
    virtual ~TalkMsgRequest();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void onMessageStart();
    virtual void onMessageEnd();
    virtual void onChoice();
    virtual void onSignalTag();
    virtual void onActionTag0();
    virtual void onActionTag1();
    virtual void onActionTag2();
    virtual void onActionTag3();
    virtual void onActionTag4();
    virtual void onConditionTag();
    virtual void onEventTag(u32 a);
    virtual void onTag09_0();
    virtual void onTag09_1();
    virtual void onTag09_2();
    virtual void onTag09_3();
    virtual void onTag09_4();
    virtual void onTag09_5();
    virtual void onTag09_6();
    virtual void onTag09_7();
    virtual void onTag09_8();
    virtual void onTag09_9();
    virtual void onScannedTag();
    virtual void getSpeakerData();
    virtual void getVoiceType();
    virtual void onWindowClose();
    virtual void onTalkEnd();

    u8 pad_20[0x1c];
    /* 0x3c */ u32 unk_3c;
    /* 0x40 */ u8 unk_40;
};

struct BoxCollider {
    virtual void onEdgeContact();
    u8 pad_04[0x94];
    u8 unk_98;

    BoxCollider();
    ~BoxCollider();
};

class BarberMachine;

extern "C" {
extern void *gBgHeap;

s32 func_020639e8(char *buf, const char *fmt, ...);
s32 RoomObjSync_SetState(u32 v);
s32 RoomObjSync_GetState(u32 v);
s32 RoomObjSync_ChangeState(void *o, u32 v);
void func_02002dd0(void *o, u32 v);
void func_020555ec(void *m, void *r, u32 z);
void NNS_G3dBindMdlTex(void *a, u32 b);
void NNS_G3dBindMdlPltt(void *a, u32 b);
s32 BoxCollider_Unregister(void *p);
void BoxCollider_Register(void *p, s32 a, s32 b, s32 c, void *d, s32 e, s32 f);
void func_020566bc(void *p);
void func_020e7820(void *a, s32 b, s32 c, s32 d);
void Snd_PlaySe(s32 a);
void _ZN11BoxColliderC1Ev(void *self);
void _ZN11BoxColliderD2Ev(void *self);
s32 RoomObjRes_GetBca(void *o, u32 i);
void RoomObj_PlaySe(void *o, s32 v);
void _ZN14BlendAnimModel8initAnimEiiitt(void *self, s32 a, s32 b, s32 c, u16 d, u16 e);
}

class RoomObjActor : public Character {
public:
    RoomObjActor();
    virtual ~RoomObjActor();
    virtual BOOL vfunc_04();
    virtual BOOL preDelete();
    virtual BOOL preExecute();
    virtual BOOL changeSyncState(u32 v);
    virtual void getSoundPos(Unk_ov004_02224ee4_Vec *out);

    void setSyncSlot(u32 v);
    s32 storeSyncState();
    s32 getSyncState();
    void releaseResources();
    void loadResourcesByName(char *name);
    void loadResources(char *a, char *b);
    virtual void vfunc_20(u32 a);

    /* 0xec */ AnimModel unk_ec;
    /* 0x1a4 */ RoomObjRes unk_1a4;
    /* 0x248 */ RoomObjTex unk_248;
    /* 0x250 */ RoomObjSe unk_250;
};

class BarberMachine : public RoomObjActor, public TalkMsgRequest {
public:
    BarberMachine();
    virtual ~BarberMachine();
    virtual BOOL vfunc_00();
    virtual BOOL func_ov004_02225608();
    virtual BOOL onExecute();
    virtual BOOL onDraw();
    virtual BOOL changeSyncState(u32 v);
    virtual void getSoundPos(Unk_ov004_02224ee4_Vec *out);

    void removeCollision();
    void initCollision();
    void updateState03();
    void updateState02();
    void updateState01();
    void updateState00();
    void updateState();
    BOOL enterState03();
    BOOL enterState02();
    BOOL enterState01();
    BOOL enterState00();

    /* 0x2d4 */ u32 unk_2d4[0x27]; // a BoxCollider (ctor/dtor called by hand: the original destroys it with D2)
    /* 0x370 */ u8 unk_370;
};

typedef RoomObjActor M;
typedef Unk_ov004_02224ee4_Vec Vec;

struct Unk_ov004_Scene_Entry {
    void *(*unk_00)();
    u16 unk_04;
    u16 unk_06;
    s32 unk_08[4];
};

extern "C" BarberMachine *BarberMachine_Create();
// Declarations for data defined further down (definition order sets the data layout)
extern "C" Unk_ov004_Scene_Entry sBarberMachineProfile;
extern "C" BarberMachine *volatile sBarberMachine;

struct Unk_ov004_022255ec_Pad {
    s32 v[4];
    Unk_ov004_022255ec_Pad() {}
    ~Unk_ov004_022255ec_Pad() {}
};

// @2225790
extern "C" BarberMachine *BarberMachine_Create() {
    return new BarberMachine;
}

// @2225754
BarberMachine::BarberMachine() {
    _ZN11BoxColliderC1Ev(unk_2d4);
}

// @22256d4
BarberMachine::~BarberMachine() {
    _ZN11BoxColliderD2Ev(unk_2d4);
}

// @222564c
BOOL BarberMachine::vfunc_00() {
    sBarberMachine = this;
    unk_370 = 0;
    loadResources("/roomObj/obj_b_machine.arc", "/roomObj/obj_b_machine.nsbtx");
    initCollision();
    if (RoomObjRes_GetBca(&unk_1a4, 0) != 0) {
        if (unk_ec.allocAnmObj(gBgHeap) != 0) {
            s32 r = RoomObjRes_GetBca(&unk_1a4, 0);
            _ZN14BlendAnimModel8initAnimEiiitt(&unk_ec, r, 1, 0x1000, 0, 0);
            unk_ec.attachAnim();
        }
    }
    return TRUE;
}

// @222563c
BOOL BarberMachine::onExecute() {
    updateState();
    return TRUE;
}

// @2225628
BOOL BarberMachine::onDraw() {
    unk_ec.drawAnimated(0);
    return TRUE;
}

// @2225608
BOOL BarberMachine::func_ov004_02225608() {
    removeCollision();
    releaseResources();
    sBarberMachine = 0;
    return TRUE;
}

// @22255ec
void BarberMachine::getSoundPos(Vec *out) {
    Unk_ov004_022255ec_Pad pad;
    out->x = 0xc000;
    out->y = 0;
    out->z = 0x17000;
}

extern "C" Unk_ov004_Scene_Entry sBarberMachineProfile = {(void *(*)())BarberMachine_Create, 0x15, 0x19, {0, 0xc8000, 0x12c000, 0x258000}};

extern "C" BarberMachine *volatile sBarberMachine = 0;

// @2225550
BOOL BarberMachine::changeSyncState(u32 idx) {
    typedef BOOL (BarberMachine::*Fn)();
    static Fn tbl[4] = {&BarberMachine::enterState00, &BarberMachine::enterState01, &BarberMachine::enterState02,
                        &BarberMachine::enterState03};
    if (idx < 4) {
        if ((this->*tbl[idx])() != 0) {
            unk_248.unk_04 = idx;
            return TRUE;
        }
    }
    return FALSE;
}

// @22254c4
void BarberMachine::updateState() {
    typedef void (BarberMachine::*Fn)();
    static Fn tbl[4] = {&BarberMachine::updateState00, &BarberMachine::updateState01, &BarberMachine::updateState02,
                        &BarberMachine::updateState03};
    u32 i = unk_248.unk_04;
    if (i < 4) {
        (this->*tbl[i])();
    }
}

// @222548c
BOOL BarberMachine::enterState00() {
    s32 r = RoomObjRes_GetBca(&unk_1a4, 0);
    _ZN14BlendAnimModel8initAnimEiiitt(&unk_ec, r, 1, 0x1000, 0, 0);
    return TRUE;
}

// @2225488
void BarberMachine::updateState00() {
}

// @2225440
BOOL BarberMachine::enterState01() {
    s32 r = RoomObjRes_GetBca(&unk_1a4, 0);
    _ZN14BlendAnimModel8initAnimEiiitt(&unk_ec, r, 1, 0x1000, 0, 0);
    RoomObj_PlaySe(&unk_250, 0x4d8);
    return TRUE;
}

// @22253fc
void BarberMachine::updateState01() {
    if (unk_ec.isFinished() != 0) {
        if (unk_370 == 0) {
            changeSyncState(2);
        } else {
            RoomObjSync_ChangeState(this, 2);
        }
    } else {
        unk_ec.stepAnim();
    }
}

// @22253c4
BOOL BarberMachine::enterState02() {
    s32 r = RoomObjRes_GetBca(&unk_1a4, 1);
    _ZN14BlendAnimModel8initAnimEiiitt(&unk_ec, r, 1, 0x1000, 0, 0);
    return TRUE;
}

// @2225380
void BarberMachine::updateState02() {
    if (unk_ec.isFinished() != 0) {
        if (unk_370 == 0) {
            changeSyncState(3);
        } else {
            RoomObjSync_ChangeState(this, 3);
        }
    } else {
        unk_ec.stepAnim();
    }
}

// @222532c
BOOL BarberMachine::enterState03() {
    s32 r = RoomObjRes_GetBca(&unk_1a4, 2);
    _ZN14BlendAnimModel8initAnimEiiitt(&unk_ec, r, 1, 0x1000, 0, 0);
    RoomObj_PlaySe(&unk_250, 0x4d9);
    unk_370 = 0;
    return TRUE;
}

// @22252fc
void BarberMachine::updateState03() {
    if (unk_ec.isFinished() != 0) {
        changeSyncState(0);
    } else {
        unk_ec.stepAnim();
    }
}

// @22252cc
void BarberMachine::initCollision() {
    BoxCollider_Register(&unk_2d4, 0x2000, 0x4000, 0x2000, unk_5c, 0, 0);
}

// @22252bc
void BarberMachine::removeCollision() {
    BoxCollider_Unregister(&unk_2d4);
}

// @2225290
extern "C" void BarberMachine_Start() {
    if (RoomObjSync_ChangeState(sBarberMachine, 1) != 0) {
        sBarberMachine->unk_370 = 1;
    }
}

