// mwcc-version: 1.2/sp2
#include "types.h"
#include "gfx/Unk_ov004_Rgba.h"
#include "actor/Unk_ov004_SceneEntry.h"
#include "actor/Unk_0203e5d0_Node.h"
#include "game/Unk_ov004_02224ee4_Vec.h"
#include "gfx/AnimFrameCtrl.h"
#include "game/Vec3.h"
#include "room/RoomObjRes.h"
#include "room/RoomObjTex.h"
#include "gfx/CachedModel.h"
#include "game/TouchPicker.h"
#include "talk/MsgRequest.h"
#include "gfx/AnimModel.h"
#include "talk/TalkMsgRequest.h"
#include "talk/TalkWindowState.h"
#include "sys/ProcBase.h"
#include "actor/Actor.h"
#include "actor/Character.h"
#include "room/RoomObjActor.h"
#include "game/TouchPickTriangle.h"

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





// ---------------------------------------------------------------- secondary base at +0x290 (see tu01 / tu18)

struct Unk_ov004_0224dd98_Rec {
    u32 unk_00;
    s32 unk_04;
    s32 unk_08;
};


struct Unk_ov004_02227fb8_Pad {
    s32 v[2];
    Unk_ov004_02227fb8_Pad() {}
    ~Unk_ov004_02227fb8_Pad() {}
};





// a 4-byte colour record whose constructor is inline (the __sinit of this unit initialises six of them)

class RecycleBox : public RoomObjActor, public TalkMsgRequest {
public:
    RecycleBox();
    virtual ~RecycleBox();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL onExecute();
    virtual BOOL onDraw();
    virtual BOOL vfunc_48(void *a);
    virtual void vfunc_4c(u32 a, u8 b);
    virtual BOOL changeSyncState(u32 idx);
    virtual void onMessageStart(u32 attr);
    virtual void onMessageEnd(u32 attr);
    virtual void onChoice(u32 attr);

    void removeCollision();
    void initCollision();
    void execAct05();
    void enterAct05();
    void execAct04();
    BOOL enterAct04();
    void execAct03();
    void enterAct03();
    void execAct02();
    BOOL enterAct02();
    void execAct01();
    BOOL enterAct01();
    void execAct00();
    BOOL enterAct00();
    void execAct();
    BOOL changeAct(s32 m);
    void updateState03();
    BOOL enterState03();
    void updateState02();
    BOOL enterState02();
    void updateState01();
    BOOL enterState01();
    void updateState00();
    BOOL enterState00();
    void updateState();

    /* 0x2d4 */ u32 collider[0x27]; // a BoxCollider (ctor/dtor by hand: the original destroys it with D2)
    /* 0x370 */ u32 touchBox[0xaa]; // a TouchPickBox (ctor C2 / dtor D2 by hand)
    /* 0x618 */ s32 act;
};

typedef void (RecycleBox::*Unk_ov004_02228008_Fn)();
typedef void (RecycleBox::*Unk_ov004_02228168_Fn)();
typedef BOOL (RecycleBox::*Unk_ov004_022280b0_Fn)();
#define F(T, off) (*(T *)((u8 *)this + off))

extern "C" {
extern void *data_021c1b3c;
extern s32 gGfxMainOnTop;
extern u32 gBgHeap;
s32 BoxCollider_Unregister(void *);
s32 BoxCollider_Register(void *, s32, s32, s32, void *, s32, s32);
TouchPicker *Scene_GetTouchPicker(void);
s32 TalkRequest_SetTargetDone(void *);
s32 RoomObjSync_ChangeState(void *, u32);
s32 MenuCtrl_IsFinished(void);
s32 MenuCtrl_OpenLauncher(u32);
s32 func_020e9650(s32 *a, s32 *b);
s32 func_020e780c(s32 a, s32 b);
s32 _ZN13AnimFrameCtrl10isFinishedEv(void *);
s32 _ZN9AnimModel8stepAnimEv(void *);
s32 _ZN9AnimModel12drawAnimatedEPv(void *, u32);
s32 _ZN9AnimModel10attachAnimEv(void *);
s32 _ZN9AnimModel11allocAnmObjEPv(void *, u32);
s32 _ZN14BlendAnimModel8initAnimEiiitt(void *, u32, u32, u32, u32, u32);
s32 RoomObjRes_GetBca(void *, u32);
void RoomObj_PlaySe(void *, s32);
void _ZN11BoxColliderC1Ev(void *self);
void _ZN11BoxColliderD2Ev(void *self);
void _ZN12TouchPickBoxC2Ev(void *self);
void _ZN12TouchPickBoxD2Ev(void *self);
void _ZN9Character17detachTalkRequestEi(void *self, TalkMsgRequest *sec);
void _ZN9Character17attachTalkRequestEi(void *self, TalkMsgRequest *sec);
s32 _ZN12RoomObjActor14storeSyncStateEv(void *self, s32 a);
RecycleBox *RecycleBox_Create();
RecycleBox *RecycleBox_GetInstance();
}// declarations (definition order below sets the data layout)
extern "C" { extern Unk_ov004_Rgba data_ov004_02250e70; }
extern "C" { extern Unk_ov004_Rgba data_ov004_02250e64; }
extern "C" { extern Unk_ov004_Rgba data_ov004_02250e60; }
extern "C" { extern Unk_ov004_Rgba data_ov004_02250e6c; }
extern "C" { extern Unk_ov004_Rgba data_ov004_02250e5c; }
extern "C" { extern Unk_ov004_Rgba data_ov004_02250e4c; }
extern "C" { extern Unk_ov004_Scene_Entry sRecycleBoxProfile; }
extern "C" { extern char sRecycleBoxMsgFile[0x10]; }
extern "C" { extern char *sRecycleBoxMsgFilePtr; }
extern "C" { extern RecycleBox *sRecycleBox; }

extern "C" Unk_ov004_Rgba data_ov004_02250e70(31, 20, 20, 31);

extern "C" Unk_ov004_Rgba data_ov004_02250e64(20, 20, 31, 31);

extern "C" Unk_ov004_Rgba data_ov004_02250e60(31, 31, 20, 31);

extern "C" Unk_ov004_Rgba data_ov004_02250e6c(20, 31, 20, 31);

extern "C" Unk_ov004_Rgba data_ov004_02250e5c(20, 31, 31, 31);

extern "C" Unk_ov004_Rgba data_ov004_02250e4c(20, 24, 24, 31);

extern "C" Unk_ov004_Scene_Entry sRecycleBoxProfile = {(void *(*)())RecycleBox_Create, 0x12, 0x16, 0, 0xc8000, 0x12c000, 0x258000};

// ---------------------------------------------------------------- data
extern "C" char sRecycleBoxMsgFile[0x10] = "sp_npc_trash";

extern "C" char *sRecycleBoxMsgFilePtr = sRecycleBoxMsgFile;

extern "C" RecycleBox *sRecycleBox = 0;

// @0x2228658
extern "C" RecycleBox *RecycleBox_Create() {
    return new RecycleBox;
}

extern "C" RecycleBox *RecycleBox_GetInstance() {
    return sRecycleBox;
}

RecycleBox::RecycleBox() {
    _ZN11BoxColliderC1Ev(collider);
    _ZN12TouchPickBoxC2Ev(touchBox);
}

RecycleBox::~RecycleBox() {
    _ZN12TouchPickBoxD2Ev(touchBox);
    _ZN11BoxColliderD2Ev(collider);
}

BOOL RecycleBox::vfunc_00() {
    sRecycleBox = this;
    setSyncSlot(0);
    loadResourcesByName("obj_r_box");
    initCollision();
    if (RoomObjRes_GetBca(&res, 0)) {
        if (_ZN9AnimModel11allocAnmObjEPv(&model, gBgHeap)) {
            _ZN14BlendAnimModel8initAnimEiiitt(&model, RoomObjRes_GetBca(&res, 0), 1, 0x1000, 0, 0);
            _ZN9AnimModel10attachAnimEv(&model);
        }
    }
    changeAct(0);
    changeSyncState(getSyncState());
    return TRUE;
}

BOOL RecycleBox::onExecute() {
    updateState();
    execAct();
    Scene_GetTouchPicker()->pushBox((TouchPickBox *)touchBox);
    return TRUE;
}

BOOL RecycleBox::onDraw() {
    _ZN9AnimModel12drawAnimatedEPv(&model, 0);
    return TRUE;
}

BOOL RecycleBox::vfunc_0c() {
    removeCollision();
    releaseResources();
    sRecycleBox = 0;
    return TRUE;
}

BOOL RecycleBox::vfunc_48(void *a) {
    Character *o = (Character *)a;
    if (o) {
        if (func_020e9650(&o->position.x, &position.x) < 0x299a) {
            if (func_020e780c((s16)(F(s16, 0x8e) + 0x8000), *(s16 *)((u8 *)o + 0x8e)) < 0x1200) {
                return TRUE;
            }
        }
    }
    return FALSE;
}

void RecycleBox::vfunc_4c(u32 a, u8 b) {
    switch (a) {
    case 0:
        changeAct(1);
        break;
    case 8:
        changeAct(0);
        break;
    }
}

BOOL RecycleBox::changeSyncState(u32 idx) {
    static Unk_ov004_022280b0_Fn tbl[4] = {
        (Unk_ov004_022280b0_Fn)&RecycleBox::enterState00,
        (Unk_ov004_022280b0_Fn)&RecycleBox::enterState01,
        (Unk_ov004_022280b0_Fn)&RecycleBox::enterState02,
        (Unk_ov004_022280b0_Fn)&RecycleBox::enterState03,
    };
    if (idx < 4) {
        if ((this->*tbl[idx])()) {
            if (_ZN12RoomObjActor14storeSyncStateEv(this, idx)) {
                tex.syncState = idx;
                return TRUE;
            }
        }
    }
    return FALSE;
}

void RecycleBox::updateState() {
    static Unk_ov004_02228168_Fn tbl[4] = {
        &RecycleBox::updateState00,
        &RecycleBox::updateState01,
        &RecycleBox::updateState02,
        &RecycleBox::updateState03,
    };
    u32 i = tex.syncState;
    if (i < 4) {
        (this->*tbl[i])();
    }
}

BOOL RecycleBox::enterState00() {
    _ZN14BlendAnimModel8initAnimEiiitt(&model, RoomObjRes_GetBca(&res, 0), 1, 0x1000, 0, 0);
    return TRUE;
}

void RecycleBox::updateState00() {}

BOOL RecycleBox::enterState01() {
    _ZN14BlendAnimModel8initAnimEiiitt(&model, RoomObjRes_GetBca(&res, 0), 1, 0x1000, 0, 0);
    RoomObj_PlaySe(&se, 0x4d6);
    return TRUE;
}

void RecycleBox::updateState01() {
    if (_ZN13AnimFrameCtrl10isFinishedEv((u8 *)this + 0x188)) {
        changeSyncState(2);
    } else {
        _ZN9AnimModel8stepAnimEv(&model);
    }
}

BOOL RecycleBox::enterState02() {
    _ZN14BlendAnimModel8initAnimEiiitt(&model, RoomObjRes_GetBca(&res, 1), 1, 0x1000, 0, 0);
    return TRUE;
}

void RecycleBox::updateState02() {}

BOOL RecycleBox::enterState03() {
    _ZN14BlendAnimModel8initAnimEiiitt(&model, RoomObjRes_GetBca(&res, 1), 1, 0x1000, 0, 0);
    RoomObj_PlaySe(&se, 0x4d7);
    return TRUE;
}

void RecycleBox::updateState03() {
    if (_ZN13AnimFrameCtrl10isFinishedEv((u8 *)this + 0x188)) {
        changeSyncState(0);
    } else {
        _ZN9AnimModel8stepAnimEv(&model);
    }
}

BOOL RecycleBox::changeAct(s32 m) {
    static Unk_ov004_022280b0_Fn tbl[6] = {
        (Unk_ov004_022280b0_Fn)&RecycleBox::enterAct00,
        (Unk_ov004_022280b0_Fn)&RecycleBox::enterAct01,
        (Unk_ov004_022280b0_Fn)&RecycleBox::enterAct02,
        (Unk_ov004_022280b0_Fn)&RecycleBox::enterAct03,
        (Unk_ov004_022280b0_Fn)&RecycleBox::enterAct04,
        (Unk_ov004_022280b0_Fn)&RecycleBox::enterAct05,
    };
    if (m < 6) {
        if ((this->*tbl[m])()) {
            act = m;
            return TRUE;
        }
    }
    return FALSE;
}

void RecycleBox::execAct() {
    static Unk_ov004_02228008_Fn tbl[6] = {
        &RecycleBox::execAct00,
        &RecycleBox::execAct01,
        &RecycleBox::execAct02,
        &RecycleBox::execAct03,
        &RecycleBox::execAct04,
        &RecycleBox::execAct05,
    };
    if (act < 6) {
        (this->*tbl[act])();
    }
}

BOOL RecycleBox::enterAct00() {
    return TRUE;
}

void RecycleBox::execAct00() {}

BOOL RecycleBox::enterAct01() {
    Unk_ov004_02227fb8_Pad pad;
    _ZN9Character17attachTalkRequestEi(this, (TalkMsgRequest *)this);
    MsgRequest::setFileName(sRecycleBoxMsgFilePtr);
    MsgRequest::msgIndex = 0;
    TalkMsgRequest::unk_3c->nextState = 1;
    return TRUE;
}

void RecycleBox::execAct01() {
    if (TalkMsgRequest::unk_3c != 0) {
        if (TalkMsgRequest::unk_3c->state != 0) {
            changeAct(2);
        }
    }
}

BOOL RecycleBox::enterAct02() {
    return TRUE;
}

void RecycleBox::execAct02() {
    if (TalkMsgRequest::unk_3c != 0) {
        if (TalkMsgRequest::unk_3c->state == 0) {
            _ZN9Character17detachTalkRequestEi(this, (TalkMsgRequest *)this);
            changeAct(3);
        }
    }
}

void RecycleBox::enterAct03() {
    RoomObjSync_ChangeState(this, 1);
}

void RecycleBox::execAct03() {
    if (tex.syncState == 2) {
        changeAct(4);
    }
}

BOOL RecycleBox::enterAct04() {
    if (MenuCtrl_OpenLauncher(0x20) != 0) {
        return TRUE;
    }
    return FALSE;
}

void RecycleBox::execAct04() {
    if (gGfxMainOnTop == 0) {
        if (MenuCtrl_IsFinished() != 0) {
            changeAct(5);
        }
    }
}

void RecycleBox::enterAct05() {
    RoomObjSync_ChangeState(this, 3);
}

void RecycleBox::execAct05() {
    if (tex.syncState == 0) {
        TalkRequest_SetTargetDone(this);
    }
}

void RecycleBox::onMessageStart(u32) {}

void RecycleBox::onMessageEnd(u32) {
    ((u32 *)data_021c1b3c)[0x248 / 4] = 0x1a;
}

void RecycleBox::onChoice(u32 a) {}

void RecycleBox::initCollision() {
    BoxCollider_Register(collider, 0x2000, 0x4000, 0x2000, (u8 *)this + 0x5c, 0, 0);
    Scene_GetTouchPicker()->addBox((TouchPickBox *)touchBox, (Vec3 *)((u8 *)this + 0x5c), 0x2000, 0x4000, 0x2000, 0, 0xc, 0xff);
}

void RecycleBox::removeCollision() {
    BoxCollider_Unregister(collider);
}
