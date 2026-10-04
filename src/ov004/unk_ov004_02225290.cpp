// mwcc-version: 1.2/sp2
#include "types.h"
#include "actor/Unk_ov004_SceneEntry.h"
#include "actor/Unk_0203e5d0_Node.h"
#include "game/Unk_ov004_02224ee4_Vec.h"
#include "gfx/AnimFrameCtrl.h"
#include "room/RoomObjRes.h"
#include "room/RoomObjTex.h"
#include "game/BoxCollider.h"
#include "gfx/CachedModel.h"
#include "talk/MsgRequest.h"
#include "gfx/AnimModel.h"
#include "talk/TalkMsgRequest.h"
#include "sys/ProcBase.h"
#include "actor/Actor.h"
#include "actor/Character.h"
#include "room/RoomObjActor.h"






// ---- model resource sub-object at +0xec (see src/main/unk_02054190.cpp)




// ---- helper objects at +0x1a4, +0x248, +0x250 (their other methods live in ov004_054)



// ---- second base at +0x290 (see src/main/unk_02065f14.cpp)



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


class BarberMachine : public RoomObjActor, public TalkMsgRequest {
public:
    BarberMachine();
    virtual ~BarberMachine();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
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
BOOL BarberMachine::vfunc_0c() {
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
    BoxCollider_Register(&collider, 0x2000, 0x4000, 0x2000, &position, 0, 0);
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

