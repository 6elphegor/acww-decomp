// mwcc-version: 1.2/sp2
#include "types.h"
#include "actor/Unk_ov004_SceneEntry.h"
#include "actor/Unk_0203e5d0_Node.h"
#include "gfx/Unk_02055704.h"
#include "game/Unk_ov004_02224ee4_Vec.h"
#include "gfx/AnimFrameCtrl.h"
#include "room/RoomObjRes.h"
#include "room/RoomObjTex.h"
#include "game/BoxCollider.h"
#include "gfx/CachedModel.h"
#include "talk/MsgRequest.h"
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



class AnimModel : public CachedModel, public AnimFrameCtrl {
public:
    AnimModel();
    virtual ~AnimModel();
    void *anmObj;

    s32 attachAnim();
    s32 drawAnimated(void *q);
    void stepAnim();
    BOOL allocAnmObj(void *x);
    // declared in BlendAnimModel in src/main, but it is called on this object
    void func_02054720(s32 a, s32 b, s32 c, u16 d, u16 e);
};

// ---- helper objects at +0x1a4, +0x248, +0x250 (their other methods live in ov004_054)



// ---- second base at +0x290 (see src/main/unk_02065f14.cpp)

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

    /* 0xec */ AnimModel model;
    /* 0x1a4 */ RoomObjRes res;
    /* 0x248 */ RoomObjTex tex;
    /* 0x250 */ RoomObjSe se;
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

    /* 0x2d4 */ u32 collider[0x27]; // a BoxCollider (ctor/dtor called by hand: the original destroys it with D2)
    /* 0x370 */ u8 isStartedLocally;
};

typedef RoomObjActor M;
typedef Unk_ov004_02224ee4_Vec Vec;


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
    _ZN11BoxColliderC1Ev(collider);
}

// @22256d4
BarberMachine::~BarberMachine() {
    _ZN11BoxColliderD2Ev(collider);
}

// @222564c
BOOL BarberMachine::vfunc_00() {
    sBarberMachine = this;
    isStartedLocally = 0;
    loadResources("/roomObj/obj_b_machine.arc", "/roomObj/obj_b_machine.nsbtx");
    initCollision();
    if (RoomObjRes_GetBca(&res, 0) != 0) {
        if (model.allocAnmObj(gBgHeap) != 0) {
            s32 r = RoomObjRes_GetBca(&res, 0);
            _ZN14BlendAnimModel8initAnimEiiitt(&model, r, 1, 0x1000, 0, 0);
            model.attachAnim();
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
    model.drawAnimated(0);
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

extern "C" Unk_ov004_Scene_Entry sBarberMachineProfile = {(void *(*)())BarberMachine_Create, 0x15, 0x19, 0, 0xc8000, 0x12c000, 0x258000};

extern "C" BarberMachine *volatile sBarberMachine = 0;

// @2225550
BOOL BarberMachine::changeSyncState(u32 idx) {
    typedef BOOL (BarberMachine::*Fn)();
    static Fn tbl[4] = {&BarberMachine::enterState00, &BarberMachine::enterState01, &BarberMachine::enterState02,
                        &BarberMachine::enterState03};
    if (idx < 4) {
        if ((this->*tbl[idx])() != 0) {
            tex.syncState = idx;
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
    u32 i = tex.syncState;
    if (i < 4) {
        (this->*tbl[i])();
    }
}

// @222548c
BOOL BarberMachine::enterState00() {
    s32 r = RoomObjRes_GetBca(&res, 0);
    _ZN14BlendAnimModel8initAnimEiiitt(&model, r, 1, 0x1000, 0, 0);
    return TRUE;
}

// @2225488
void BarberMachine::updateState00() {
}

// @2225440
BOOL BarberMachine::enterState01() {
    s32 r = RoomObjRes_GetBca(&res, 0);
    _ZN14BlendAnimModel8initAnimEiiitt(&model, r, 1, 0x1000, 0, 0);
    RoomObj_PlaySe(&se, 0x4d8);
    return TRUE;
}

// @22253fc
void BarberMachine::updateState01() {
    if (model.isFinished() != 0) {
        if (isStartedLocally == 0) {
            changeSyncState(2);
        } else {
            RoomObjSync_ChangeState(this, 2);
        }
    } else {
        model.stepAnim();
    }
}

// @22253c4
BOOL BarberMachine::enterState02() {
    s32 r = RoomObjRes_GetBca(&res, 1);
    _ZN14BlendAnimModel8initAnimEiiitt(&model, r, 1, 0x1000, 0, 0);
    return TRUE;
}

// @2225380
void BarberMachine::updateState02() {
    if (model.isFinished() != 0) {
        if (isStartedLocally == 0) {
            changeSyncState(3);
        } else {
            RoomObjSync_ChangeState(this, 3);
        }
    } else {
        model.stepAnim();
    }
}

// @222532c
BOOL BarberMachine::enterState03() {
    s32 r = RoomObjRes_GetBca(&res, 2);
    _ZN14BlendAnimModel8initAnimEiiitt(&model, r, 1, 0x1000, 0, 0);
    RoomObj_PlaySe(&se, 0x4d9);
    isStartedLocally = 0;
    return TRUE;
}

// @22252fc
void BarberMachine::updateState03() {
    if (model.isFinished() != 0) {
        changeSyncState(0);
    } else {
        model.stepAnim();
    }
}

// @22252cc
void BarberMachine::initCollision() {
    BoxCollider_Register(&collider, 0x2000, 0x4000, 0x2000, position, 0, 0);
}

// @22252bc
void BarberMachine::removeCollision() {
    BoxCollider_Unregister(&collider);
}

// @2225290
extern "C" void BarberMachine_Start() {
    if (RoomObjSync_ChangeState(sBarberMachine, 1) != 0) {
        sBarberMachine->isStartedLocally = 1;
    }
}

