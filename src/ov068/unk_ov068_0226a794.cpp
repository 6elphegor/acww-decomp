// mwcc-version: 1.2/sp2
#include "types.h"
#include "actor/Unk_ov068_SceneEntry.h"
#include "gfx/Unk_ov003_Blk.h"
#include "field/Unk_ov003_Flags.h"
#include "game/Unk_ov003_Vec.h"
#include "talk/TalkWindowState.h"
#include "player/PlayerActionRequest.h"
#include "sys/ProcBase.h"
#include "talk/MsgString9B.h"
#include "actor/Actor.h"
#include "actor/Character.h"

struct Unk_ov068_0226acf8_Vec {
    s32 x, y, z;
};

struct Unk_ov068_0226b12c_Vec3 {
    s32 x, y, z;
    Unk_ov068_0226b12c_Vec3() {}
    Unk_ov068_0226b12c_Vec3(const Unk_ov068_0226b12c_Vec3 &o) {
        x = o.x;
        y = o.y;
        z = o.z;
    }
};






// Secondary base at +0xec (vtable main 0x020ddcf0 chain).  Slot names are TalkMsgRequest's; slot 0x14
// (onMessageEnd) is overridden by BuildingActor.
class MsgRequest {
public:
    MsgRequest();
    virtual ~MsgRequest();
    virtual void vfunc_s08();

    void setFileName(const char *src);

    /* 0x04 */ char fileName[0x1a];
    /* 0x1e */ u8 msgIndex;
};


class TalkMsgRequest : public MsgRequest {
public:
    TalkMsgRequest();
    virtual ~TalkMsgRequest();
    virtual void vfunc_s08();
    virtual void vfunc_s0c();
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
    virtual s32 getVoiceType();
    virtual void onWindowClose();
    virtual void onTalkEnd();

    void setSpeakerName(u8 *a, u32 b);

    u8 pad_20[0x1c];
    /* 0x3c */ TalkWindowState *unk_3c;
    /* 0x40 */ u8 unk_40;
    u8 pad_41[3];
};

struct Unk_ov068_0226b5a4_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};



class Unk_020b1ddc;

// ov009 actor base (vtable 0x0225e29c, size 0x2b0).  Return types of the virtuals are those the derived units need.
class BuildingActor : public Character, public TalkMsgRequest {
public:
    BuildingActor();
    virtual ~BuildingActor();
    virtual BOOL vfunc_00();
    virtual BOOL preDelete();
    virtual BOOL preExecute();
    virtual BOOL vfunc_20(u32 a);
    virtual BOOL preDraw();
    virtual BOOL vfunc_48(void *a);
    virtual void vfunc_4c(u32 a, u8 b);
    virtual VecFx32 *getInteractionPos();
    virtual void vfunc_60(u32 a, void *p);
    virtual s32 vfunc_64();
    virtual s32 vfunc_68();
    virtual s32 vfunc_6c(s32 a);
    virtual BOOL vfunc_70();
    virtual void func_ov009_0225ca98();
    virtual void vfunc_78();
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();
    virtual void onMessageEnd();
    virtual BOOL vfunc_8c();
    virtual BOOL vfunc_90();
    virtual BOOL vfunc_94();
    virtual BOOL vfunc_98();
    virtual BOOL vfunc_9c();
    virtual s32 vfunc_a0();
    virtual char *vfunc_a4();
    virtual char *vfunc_a8();
    virtual char *vfunc_ac();
    virtual BOOL vfunc_b0();
    virtual Unk_ov068_0226b12c_Vec3 vfunc_b4();
    virtual BOOL vfunc_b8();

    s32 getBtaAnim(u32 a);
    s32 getBca2Anim();

    /* 0x130 */ u8 doorState;
    /* 0x131 */ u8 pad_131;
    /* 0x132 */ u16 itemId;
    /* 0x134 */ u8 pad_134[4];
    /* 0x138 */ u8 unk_138[0x1d4 - 0x138];
    /* 0x1d4 */ u8 unk_1d4[8];
    /* 0x1dc */ Unk_ov068_0226b5a4_Bits doorAnimFrame;
    /* 0x1e0 */ u8 pad_1e0[0x1f0 - 0x1e0];
    /* 0x1f0 */ u8 unk_1f0[0x234 - 0x1f0];
    /* 0x234 */ u8 unk_234[0x278 - 0x234];
    /* 0x278 */ u8 pad_278[0x28e - 0x278];
    /* 0x28e */ u8 unk_28e[0x2b0 - 0x28e];
};

// Overlay 68 concrete actor (vtable 0x02270110, secondary vtable 0x022701d4), size 0x2e4
class KappnTaxi : public BuildingActor {
public:
    KappnTaxi();
    virtual ~KappnTaxi();
    virtual BOOL vfunc_0c();
    virtual BOOL onExecute();
    virtual BOOL onDraw();
    virtual void vfunc_60(u32 a, void *b);
    virtual BOOL vfunc_70();
    virtual void onMessageEnd();
    virtual BOOL vfunc_b0();
    virtual Unk_ov068_0226b12c_Vec3 vfunc_b4();
    virtual s32 getVoiceType();

    // update states
    void execTaxiLeaveEnd();
    void execTaxiLeaveDrive();
    void execTaxiPlayerGetIn();
    void execTaxiLeaveDoorAnim();
    void execTaxiLeaveDoorOpen();
    void execTaxiPlayerExitTownHall();
    void execTaxiLeave();
    void execTaxiWarpTownHall();
    void execTaxiEnterTownHall();
    void execTaxiWaitPlayerWalk();
    void execTaxiDepart();
    void execTaxiTalkWait();
    void execTaxiTalk();
    void execTaxiPlayerGetOut();
    void execTaxiDoorOpen();
    void execTaxiArrive();
    void execTaxiIdle();
    // enter states
    BOOL enterTaxiLeaveEnd();
    BOOL enterTaxiLeaveDrive();
    BOOL enterTaxiPlayerGetIn();
    BOOL enterTaxiLeaveDoorAnim();
    BOOL enterTaxiLeaveDoorOpen();
    BOOL enterTaxiPlayerExitTownHall();
    BOOL enterTaxiLeave();
    BOOL enterTaxiWarpTownHall();
    BOOL enterTaxiEnterTownHall();
    BOOL enterTaxiWaitPlayerWalk();
    BOOL enterTaxiDepart();
    BOOL enterTaxiTalkWait();
    BOOL enterTaxiTalk();
    BOOL enterTaxiPlayerGetOut();
    BOOL enterTaxiDoorOpen();
    BOOL enterTaxiArrive();
    BOOL enterTaxiIdle();

    void updateTaxiState();
    BOOL setTaxiState(s32 idx);
    void stopEffect42();
    void updateEffect42();
    void startEffect42();
    void stopEffect41();
    void updateEffect41();
    void startEffect41();
    s32 getAngleToPlayer();
    Unk_ov068_0226b12c_Vec3 getDoorPoint();
    s32 callGetBca2Anim();

    /* 0x2b0 */ s32 taxiState;
    /* 0x2b4 */ s32 townHallGridX;
    /* 0x2b8 */ s32 townHallGridZ;
    /* 0x2bc */ Unk_ov068_0226acf8_Vec townHallWalkTarget;
    /* 0x2c8 */ Unk_ov068_0226b12c_Vec3 carPos;
    /* 0x2d4 */ u16 warpDelayTimer;
    /* 0x2d6 */ u8 getInTimer;
    /* 0x2d7 */ u8 exitWalkDelay;
    /* 0x2d8 */ u8 departFrameCount;
    /* 0x2d9 */ u8 getOutFrameCount;
    /* 0x2da */ u8 ownsTaxiFlags;
    /* 0x2db */ u8 pad_2db;
    /* 0x2dc */ s32 effect41;
    /* 0x2e0 */ s32 effect42;
};

struct Unk_ov068_0226b724_Obj {
    /* 0x00 */ u8 pad_00[0x4c];
    /* 0x4c */ Unk_ov068_0226b12c_Vec3 trans;
};

struct Unk_ov068_0226b724_Arg {
    /* 0x00 */ u8 pad_00[0xb4];
    /* 0xb4 */ Unk_ov068_0226b724_Obj *pJntAnmResult;
};

struct Unk_ov068_0226a940_Bits {
    u16 a : 7;
    u16 b : 4;
    u16 c : 5;
};

struct Unk_ov068_0226a940_Words {
    u32 a, b;
};

struct Unk_ov068_0226a940_Loc {
    u16 pad;
    u16 h;
};



class PlayerActTaxiGetIn {
public:
    /* 0x00 */ u8 pad_00[0x5c];
    /* 0x5c */ s32 positionX;
    /* 0x60 */ u8 pad_60[4];
    /* 0x64 */ s32 positionZ;
    /* 0x68 */ u8 pad_68[0x8e - 0x68];
    /* 0x8e */ s16 rotY;
    /* 0x90 */ u8 pad_90[0x2cc - 0x90];
    /* 0x2cc */ u8 unk_2cc[0x7ec - 0x2cc];
    /* 0x7ec */ u32 action;
    /* 0x7f0 */ u8 pad_7f0[0x7f8 - 0x7f0];
    /* 0x7f8 */ u32 actionPriority;

    void mainTaxiGetIn();
    void mainTaxiGetInFinish();
    void mainTaxiGetInAnim();
    void endTaxiGetIn();
    void netTaxiGetIn();
    void setupTaxiGetIn();
    s32 requestTaxiGetIn(s32 a, s32 b);
};

class PlayerActTaxiGetOut {
public:
    /* 0x00 */ u8 pad_00[0x5c];
    /* 0x5c */ s32 positionX;
    /* 0x60 */ u8 pad_60[4];
    /* 0x64 */ s32 positionZ;
    /* 0x68 */ u8 pad_68[0x8e - 0x68];
    /* 0x8e */ s16 rotY;
    /* 0x90 */ u8 pad_90[0x2cc - 0x90];
    /* 0x2cc */ u8 unk_2cc[0x7ec - 0x2cc];
    /* 0x7ec */ u32 action;
    /* 0x7f0 */ u8 pad_7f0[0x7f8 - 0x7f0];
    /* 0x7f8 */ u32 actionPriority;

    void mainTaxiGetOut();
    void mainTaxiGetOutFinish();
    void mainTaxiGetOutAnim();
    void endTaxiGetOut();
    void netTaxiGetOut();
    void setupTaxiGetOut();
    s32 requestTaxiGetOut(s32 a, s32 b);
};

struct Unk_ov068_02270110_Color {
    u8 a, b, c, d;
    Unk_ov068_02270110_Color(u8 a_, u8 b_, u8 c_, u8 d_) {
        a = a_;
        b = b_;
        c = c_;
        d = d_;
    }
};

extern "C" {
extern s16 sKappnTaxiLeaveTimer;
extern u8 gSaveData[];
s32 _ZN13AnimFrameCtrl10isFinishedEv(void *);
s32 _ZN13AnimFrameCtrl14hasPassedFrameEi(void *, s32);
u32 _ZN12Unk_0200769421getActionDonePriorityEj(void *, u32);
void _ZN11PlayerActor12requestAct01Ejj(void *, s32, s32);
void _ZN12Unk_02006d1412requestAct10Esji(void *, s32, s32, s32);
void *PlayerSession_GetSessionFlags();
void _ZN12Unk_020102ec11advanceAnimEv(void *);
void _ZN12Unk_02006d1414playFootstepSeEv(void *);
void _ZN12Unk_020102ec13startAnimOnceEijt(void *, s32, s32, s32);
void _ZN12Unk_02006d1415clearActionFlagEj(void *);
void *PlayerActor_GetPlayerData(void *);
void Clock_GetDateTime(void *);
void DateTime_SubDays(void *, s32);
void PlayerActor_SetLastPlayDate(void *, void *, void *);
void *PlayerActor_Get(s32);
void TalkRequestFlags_ClearSceneHold();
void *Scene_GetWarpRequest();
void SceneWarp_RequestFade(void *, s32, s32, s32);
void *PlayerData_GetCurrent();
void *_ZN10PlayerData5resetEv(void *);
void *PlayerData_GetCurrentIndex();
void _ZN8SaveData11resetPlayerEi(void *, void *);
void _ZN17BuildingSeEmitter10playSeHeldEj(void *, s32);
void _ZN17BuildingSeEmitter6playSeEj(void *, s32);
void _ZN9AnimModel8stepAnimEv(void *);
void _ZN14BlendAnimModel8initAnimEiiitt(void *, s32, s32, s32, s32, s32);
void PlayerActor_SetHeadTilt(s32, s32, s32);
void *PlayerActor_GetActor(s32);
s32 func_020e780c(s32, s32);
void *BuildingList_FindByItem(s32);
s32 _ZN13BuildingActor10isDoorIdleEv(void *);
s32 PlayerActor_RequestWalkTo(void *, s32, s32);
s32 _ZN13BuildingActor15openDoorForExitEv(void *);
void TalkRequestFlags_SetSceneHold();
void Field_SetDoorExitMode(s32);
s32 _ZN13BuildingActor10getDoorPosEP23Unk_ov009_0225b880_Vec3Ps(void *, void *, void *);
void SceneWarp_RequestExit(void *, s32);
void *Scene_GetCurrent(void *);
void Scene_SetTownReturnPos(void *, void *, void *, s32, s32, s32, s32);
void _ZN13BuildingActor16openDoorForEntryEv(void *);
s32 _ZN13BuildingActor8getGridXEv(void *);
s32 _ZN13BuildingActor8getGridZEv(void *);
s32 PlayerActor_LocalRequestDoorEnter(s32, void *, void *, s32);
s32 PlayerActor_IsScriptedWalking(s32);
u32 *TalkWindow_Get(s32);
void _ZN15TalkWindowState13detachRequestEv(void *, u32);
s32 _ZN10PlayerData11getPlayerIdEv(...);
s32 _ZN8PlayerId9getGenderEv(...);
void _ZN15TalkWindowState13attachRequestEP14TalkMsgRequest(void *, void *);
void func_02094030(void *);
void Npc_GetName(void *, void *);
void func_02094018(void *);
void PlayerActor_KeepAnimForNextAction();
void PlayerActor_RequestTurnTo(s32, s32);
void Effect_End(s32);
void Effect_SetPosition(s32, void *, s32, s32);
s32 Effect_Create(s32, void *, s32, s32);
Unk_ov068_0226b12c_Vec3 *PlayerActor_GetBodyPos(s32);
void func_020e9960(Unk_ov068_0226b12c_Vec3 *, Unk_ov068_0226b12c_Vec3 *, Unk_ov068_0226b12c_Vec3 *);
void func_01ffd070(Unk_ov068_0226b12c_Vec3 *, void *, Unk_ov068_0226b12c_Vec3 *);
s32 func_020e7b98(s32, s32);
s32 FX_Div(s32, s32);
void Taxi_ClearArriving();
void Taxi_ClearLeaving();
void PlayerActor_SetEventLock(s32);
BOOL Taxi_IsArriving();
BOOL Taxi_IsLeaving();
void Scene_ResetTownReturnPos();
void _ZN10PlayerData11setHeldItemEPt(void *, u16 *);
BOOL KappnTaxi_RequestPlayerGetOut();
void _ZN19PlayerActionRequest6assignEiis(void *, s32, s32, s32);
s32 KappnTaxi_RequestPlayerGetIn();
s32 _ZN11PlayerActor11pushRequestEP19PlayerActionRequest(void *, void *);
}


extern "C" void KappnTaxi_Create();

extern "C" Unk_ov068_02270110_Color data_ov068_02271090(0x1f, 0x14, 0x14, 0x1f);
extern "C" Unk_ov068_02270110_Color data_ov068_02271098(0x14, 0x14, 0x1f, 0x1f);
extern "C" Unk_ov068_02270110_Color data_ov068_022710a4(0x1f, 0x1f, 0x14, 0x1f);
extern "C" Unk_ov068_02270110_Color data_ov068_022710a0(0x14, 0x1f, 0x14, 0x1f);
extern "C" Unk_ov068_02270110_Color data_ov068_02271094(0x14, 0x1f, 0x1f, 0x1f);
extern "C" Unk_ov068_02270110_Color data_ov068_0227109c(0x14, 0x18, 0x18, 0x1f);
extern "C" Unk_ov068_SceneEntry sKappnTaxiProfile = {(void *(*)())KappnTaxi_Create, 0x23, 0x29, 0, 0xc8000, 0x12c000, 0x258000};

extern "C" void KappnTaxi_Create() {
    new KappnTaxi();
}

KappnTaxi::KappnTaxi() {
}

KappnTaxi::~KappnTaxi() {
}

BOOL KappnTaxi::vfunc_70() {
    void *p = PlayerData_GetCurrent();
    carPos.x = position.x;
    carPos.y = position.y;
    carPos.z = position.z;
    if (Taxi_IsArriving()) {
        ownsTaxiFlags = 1;
        Scene_GetWarpRequest();
        Scene_ResetTownReturnPos();
        setTaxiState(1);
    } else if (Taxi_IsLeaving()) {
        ownsTaxiFlags = 1;
        if (p) {
            u16 t = 0xfff1;
            _ZN10PlayerData11setHeldItemEPt(p, &t);
        }
        Scene_GetWarpRequest();
        Scene_ResetTownReturnPos();
        setTaxiState(0xa);
    } else {
        setTaxiState(0);
    }
    return TRUE;
}

BOOL KappnTaxi::onExecute() {
    updateTaxiState();
    if (taxiState) {
        PlayerActor_SetEventLock(1);
    }
    return TRUE;
}

BOOL KappnTaxi::onDraw() {
    return TRUE;
}

BOOL KappnTaxi::vfunc_0c() {
    if (taxiState) {
        TalkRequestFlags_ClearSceneHold();
    }
    if (ownsTaxiFlags) {
        ownsTaxiFlags = 0;
        Taxi_ClearArriving();
        Taxi_ClearLeaving();
    }
    return TRUE;
}

Unk_ov068_0226b12c_Vec3 KappnTaxi::vfunc_b4() {
    return carPos;
}

s32 KappnTaxi::callGetBca2Anim() {
    return getBca2Anim();
}

BOOL KappnTaxi::vfunc_b0() {
    if (taxiState) {
        return TRUE;
    }
    return FALSE;
}

void KappnTaxi::vfunc_60(u32 a, void *b) {
    if (a == 0) {
        Unk_ov068_0226b724_Obj *o = ((Unk_ov068_0226b724_Arg *)b)->pJntAnmResult;
        Unk_ov068_0226b12c_Vec3 v;
        Unk_ov068_0226b12c_Vec3 out;
        Unk_ov068_0226b12c_Vec3 *pv = &o->trans;
        v.x = pv->x;
        v.y = pv->y;
        v.z = pv->z;
        func_01ffd070(&out, &position, &v);
        carPos.x = out.x;
        carPos.y = out.y;
        carPos.z = out.z;
    }
}

s32 KappnTaxi::getVoiceType() {
    return 0;
}

void KappnTaxi::onMessageEnd() {
}

Unk_ov068_0226b12c_Vec3 KappnTaxi::getDoorPoint() {
    Unk_ov068_0226b12c_Vec3 r;
    r.x = carPos.x;
    r.y = carPos.y;
    r.z = carPos.z;
    r.x += FX_Div(0x19000, 0x64000) - 0xf6;
    return r;
}

s32 KappnTaxi::getAngleToPlayer() {
    if (PlayerActor_GetBodyPos(4)) {
        Unk_ov068_0226b12c_Vec3 a;
        Unk_ov068_0226b12c_Vec3 c;
        Unk_ov068_0226b12c_Vec3 *p = PlayerActor_GetBodyPos(4);
        a.x = p->x;
        a.y = p->y;
        a.z = p->z;
        Unk_ov068_0226b12c_Vec3 b = getDoorPoint();
        func_020e9960(&c, &b, &a);
        return func_020e7b98(c.x, c.z);
    }
    return 0;
}

void KappnTaxi::startEffect41() {
    effect41 = Effect_Create(0x41, &carPos, 0, 0);
}

void KappnTaxi::updateEffect41() {
    u32 v = doorAnimFrame.mid;
    if (v >= 0x2d && v <= 0x31) {
        if (v == 0x2d) {
            startEffect41();
        }
        Effect_SetPosition(effect41, &carPos, 0, 0);
        if (v == 0x31) {
            stopEffect41();
        }
    }
}

void KappnTaxi::stopEffect41() {
    Effect_End(effect41);
}

void KappnTaxi::startEffect42() {
    effect42 = Effect_Create(0x42, &carPos, 0, 0);
}

void KappnTaxi::updateEffect42() {
    u32 v = doorAnimFrame.mid;
    if (v >= 0x25 && v <= 0x32) {
        if (v == 0x25) {
            startEffect42();
        }
        Effect_SetPosition(effect42, &carPos, 0, 0);
        if (v == 0x32) {
            stopEffect42();
        }
    }
}

void KappnTaxi::stopEffect42() {
    Effect_End(effect42);
}

BOOL KappnTaxi::setTaxiState(s32 idx) {
    static BOOL (KappnTaxi::*tbl[17])() = {
        &KappnTaxi::enterTaxiIdle, &KappnTaxi::enterTaxiArrive,
        &KappnTaxi::enterTaxiDoorOpen, &KappnTaxi::enterTaxiPlayerGetOut,
        &KappnTaxi::enterTaxiTalk, &KappnTaxi::enterTaxiTalkWait,
        &KappnTaxi::enterTaxiDepart, &KappnTaxi::enterTaxiWaitPlayerWalk,
        &KappnTaxi::enterTaxiEnterTownHall, &KappnTaxi::enterTaxiWarpTownHall,
        &KappnTaxi::enterTaxiLeave, &KappnTaxi::enterTaxiPlayerExitTownHall,
        &KappnTaxi::enterTaxiLeaveDoorOpen, &KappnTaxi::enterTaxiLeaveDoorAnim,
        &KappnTaxi::enterTaxiPlayerGetIn, &KappnTaxi::enterTaxiLeaveDrive,
        &KappnTaxi::enterTaxiLeaveEnd,
    };
    if (idx < 0x11) {
        if ((this->*tbl[idx])()) {
            taxiState = idx;
            return TRUE;
        }
    }
    return FALSE;
}

void KappnTaxi::updateTaxiState() {
    static void (KappnTaxi::*tbl[17])() = {
        &KappnTaxi::execTaxiIdle, &KappnTaxi::execTaxiArrive,
        &KappnTaxi::execTaxiDoorOpen, &KappnTaxi::execTaxiPlayerGetOut,
        &KappnTaxi::execTaxiTalk, &KappnTaxi::execTaxiTalkWait,
        &KappnTaxi::execTaxiDepart, &KappnTaxi::execTaxiWaitPlayerWalk,
        &KappnTaxi::execTaxiEnterTownHall, &KappnTaxi::execTaxiWarpTownHall,
        &KappnTaxi::execTaxiLeave, &KappnTaxi::execTaxiPlayerExitTownHall,
        &KappnTaxi::execTaxiLeaveDoorOpen, &KappnTaxi::execTaxiLeaveDoorAnim,
        &KappnTaxi::execTaxiPlayerGetIn, &KappnTaxi::execTaxiLeaveDrive,
        &KappnTaxi::execTaxiLeaveEnd,
    };
    if (taxiState < 0x11) {
        (this->*tbl[taxiState])();
    }
}

extern "C" {
s16 sKappnTaxiLeaveTimer;
}

BOOL KappnTaxi::enterTaxiIdle() {
    _ZN14BlendAnimModel8initAnimEiiitt(unk_138, vfunc_64(), 1, 0x1000, 0, 0);
    return TRUE;
}

void KappnTaxi::execTaxiIdle() {
}

BOOL KappnTaxi::enterTaxiArrive() {
    _ZN14BlendAnimModel8initAnimEiiitt(unk_138, vfunc_64(), 1, 0x1000, 0, 0);
    TalkRequestFlags_SetSceneHold();
    return TRUE;
}

void KappnTaxi::execTaxiArrive() {
    if (PlayerActor_GetActor(4)) {
        setTaxiState(2);
    }
}

BOOL KappnTaxi::enterTaxiDoorOpen() {
    _ZN14BlendAnimModel8initAnimEiiitt(unk_138, vfunc_64(), 1, 0x1000, 0, 0);
    return TRUE;
}

void KappnTaxi::execTaxiDoorOpen() {
    _ZN17BuildingSeEmitter10playSeHeldEj(unk_234, 0x888);
    if (_ZN13AnimFrameCtrl10isFinishedEv(unk_1d4)) {
        setTaxiState(3);
    }
    updateEffect41();
    _ZN9AnimModel8stepAnimEv(unk_138);
}

BOOL KappnTaxi::enterTaxiPlayerGetOut() {
    getOutFrameCount = 0;
    if (KappnTaxi_RequestPlayerGetOut()) {
        _ZN14BlendAnimModel8initAnimEiiitt(unk_138, vfunc_68(), 1, 0x1000, 0, 0);
        _ZN17BuildingSeEmitter6playSeEj(unk_234, 0x88a);
        return TRUE;
    }
    return FALSE;
}

void KappnTaxi::execTaxiPlayerGetOut() {
    if (_ZN13AnimFrameCtrl10isFinishedEv(unk_1d4)) {
        switch (getOutFrameCount) {
        case 0x12:
            PlayerActor_KeepAnimForNextAction();
            PlayerActor_RequestTurnTo(getAngleToPlayer(), 4);
            break;
        case 0x1c:
            setTaxiState(4);
            break;
        }
        if (getOutFrameCount < 0xc8) {
            getOutFrameCount++;
        }
    } else {
        _ZN9AnimModel8stepAnimEv(unk_138);
    }
}

BOOL KappnTaxi::enterTaxiTalk() {
    u32 *rec = TalkWindow_Get(0);
    this->TalkMsgRequest::vfunc_s08();
    this->setFileName("sp_etc_sequence4");
    BOOL r;
    if (PlayerData_GetCurrent() != 0 && (_ZN10PlayerData11getPlayerIdEv(), _ZN8PlayerId9getGenderEv() == 1)) {
        r = TRUE;
    } else {
        r = FALSE;
    }
    msgIndex = r;
    _ZN15TalkWindowState13attachRequestEP14TalkMsgRequest(rec, (TalkMsgRequest *)this);
    rec[2] = 1;
    Unk_ov068_0226a940_Loc l;
    MsgString9B o;
    l.h = 0xd014;
    Npc_GetName(&o, &l.h);
    MsgString9B *po = (MsgString9B *)(u8 *)&o;
    this->setSpeakerName(po->data(), 0);
    return TRUE;
}

void KappnTaxi::execTaxiTalk() {
    setTaxiState(5);
}

BOOL KappnTaxi::enterTaxiTalkWait() {
    return TRUE;
}

void KappnTaxi::execTaxiTalkWait() {
    u32 *r = TalkWindow_Get(0);
    u32 t = r[1];
    if (t == 0) {
        _ZN15TalkWindowState13detachRequestEv(r, t);
        setTaxiState(6);
    }
}

BOOL KappnTaxi::enterTaxiDepart() {
    s32 r1 = callGetBca2Anim();
    _ZN14BlendAnimModel8initAnimEiiitt(unk_138, r1, 1, 0x1000, 0, 0);
    _ZN17BuildingSeEmitter6playSeEj(unk_234, 0x88b);
    departFrameCount = 0;
    return TRUE;
}

void KappnTaxi::execTaxiDepart() {
    _ZN17BuildingSeEmitter10playSeHeldEj(unk_234, 0x889);
    updateEffect42();
    if (_ZN13AnimFrameCtrl10isFinishedEv(unk_1d4) != 0) {
        setTaxiState(7);
    } else {
        _ZN9AnimModel8stepAnimEv(unk_138);
        u8 *o = (u8 *)PlayerActor_GetActor(4);
        if (o != 0) {
            s32 r4 = *(s16 *)(o + 0x8e);
            if (func_020e780c(r4, getAngleToPlayer()) < 0x1200) {
                PlayerActor_SetHeadTilt(0, (s16)(getAngleToPlayer() - r4), 4);
            } else {
                if (departFrameCount < 0xc8) {
                    departFrameCount = departFrameCount + 1;
                }
                if (departFrameCount == 0x10) {
                    void *q = BuildingList_FindByItem(0x5000);
                    if (q != 0) {
                        s32 l0[1];
                        s32 l1[3];
                        if (_ZN13BuildingActor10getDoorPosEP23Unk_ov009_0225b880_Vec3Ps(q, l1, l0) != 0) {
                            townHallWalkTarget.x = l1[0];
                            townHallWalkTarget.y = l1[1];
                            s32 *p = &townHallWalkTarget.z;
                            *p = l1[2];
                            *p = *p + 0x200;
                            PlayerActor_SetHeadTilt(0, 0, 4);
                            PlayerActor_RequestWalkTo(&townHallWalkTarget, 0x400, 4);
                        }
                    }
                }
            }
        }
    }
}

BOOL KappnTaxi::enterTaxiWaitPlayerWalk() {
    return TRUE;
}

void KappnTaxi::execTaxiWaitPlayerWalk() {
    if (PlayerActor_IsScriptedWalking(4) == 0) {
        setTaxiState(8);
    }
}

BOOL KappnTaxi::enterTaxiEnterTownHall() {
    if (PlayerActor_LocalRequestDoorEnter(1, &townHallWalkTarget, &townHallWalkTarget.z, -0x8000) != 0) {
        return TRUE;
    }
    return FALSE;
}

void KappnTaxi::execTaxiEnterTownHall() {
    void *q = BuildingList_FindByItem(0x5000);
    if (q != 0) {
        _ZN13BuildingActor16openDoorForEntryEv(q);
        townHallGridX = _ZN13BuildingActor8getGridXEv(q);
        townHallGridZ = _ZN13BuildingActor8getGridZEv(q);
        setTaxiState(9);
    }
}

BOOL KappnTaxi::enterTaxiWarpTownHall() {
    warpDelayTimer = 0x14;
    return TRUE;
}

void KappnTaxi::execTaxiWarpTownHall() {
    Unk_ov068_0226acf8_Vec v;
    s16 sv;
    if (warpDelayTimer != 0) {
        warpDelayTimer = warpDelayTimer - 1;
    }
    if (warpDelayTimer == 0) {
        void *q = BuildingList_FindByItem(0x5000);
        if (q != 0) {
            if (_ZN13BuildingActor10getDoorPosEP23Unk_ov009_0225b880_Vec3Ps(q, &v, &sv) != 0) {
                SceneWarp_RequestExit(Scene_GetWarpRequest(), 9);
                v.z = v.z + 0x1000;
                void *r4 = Scene_GetWarpRequest();
                void *r1 = Scene_GetCurrent(r4);
                Scene_SetTownReturnPos(r4, r1, &v, 0xf000000, (s16)(sv + 0x8000), townHallGridX, townHallGridZ);
                TalkRequestFlags_ClearSceneHold();
            }
        }
    }
}

BOOL KappnTaxi::enterTaxiLeave() {
    TalkRequestFlags_SetSceneHold();
    Field_SetDoorExitMode(1);
    return TRUE;
}

void KappnTaxi::execTaxiLeave() {
    setTaxiState(0xb);
}

BOOL KappnTaxi::enterTaxiPlayerExitTownHall() {
    void *q = BuildingList_FindByItem(0x5000);
    if (q != 0) {
        exitWalkDelay = 0x10;
        return _ZN13BuildingActor15openDoorForExitEv(q);
    }
    return TRUE;
}

void KappnTaxi::execTaxiPlayerExitTownHall() {
    void *q = BuildingList_FindByItem(0x5000);
    if (q != 0) {
        if (_ZN13BuildingActor10isDoorIdleEv(q) != 0) {
            u8 *o = (u8 *)PlayerActor_GetActor(4);
            if (o != 0) {
                if (exitWalkDelay == 0) {
                    Unk_ov068_0226acf8_Vec v;
                    Unk_ov068_0226acf8_Vec *pv = (Unk_ov068_0226acf8_Vec *)(o + 0x5c);
                    v.x = pv->x;
                    v.y = pv->y;
                    v.z = pv->z;
                    v.z = v.z + 0x4000;
                    if (PlayerActor_RequestWalkTo(&v, 0x400, 4) != 0) {
                        setTaxiState(0xc);
                    }
                }
            }
            if (exitWalkDelay != 0) {
                exitWalkDelay = exitWalkDelay - 1;
            }
        }
    }
}

BOOL KappnTaxi::enterTaxiLeaveDoorOpen() {
    s32 r1 = vfunc_64();
    _ZN14BlendAnimModel8initAnimEiiitt(unk_138, r1, 1, 0x1000, 0, 0);
    return TRUE;
}

void KappnTaxi::execTaxiLeaveDoorOpen() {
    _ZN17BuildingSeEmitter10playSeHeldEj(unk_234, 0x888);
    if (_ZN13AnimFrameCtrl10isFinishedEv(unk_1d4) != 0) {
        setTaxiState(0xd);
    }
    updateEffect41();
    _ZN9AnimModel8stepAnimEv(unk_138);
    u8 *o = (u8 *)PlayerActor_GetActor(4);
    if (o != 0) {
        s32 r4 = *(s16 *)(o + 0x8e);
        if (func_020e780c(r4, getAngleToPlayer()) < 0x1200) {
            PlayerActor_SetHeadTilt(0, (s16)(getAngleToPlayer() - r4), 4);
        }
    }
}

BOOL KappnTaxi::enterTaxiLeaveDoorAnim() {
    s32 r1 = vfunc_68();
    _ZN14BlendAnimModel8initAnimEiiitt(unk_138, r1, 1, 0x1000, 0, 0);
    _ZN17BuildingSeEmitter6playSeEj(unk_234, 0x88a);
    return TRUE;
}

void KappnTaxi::execTaxiLeaveDoorAnim() {
    if (_ZN13AnimFrameCtrl10isFinishedEv(unk_1d4) != 0) {
        setTaxiState(0xe);
    }
    _ZN9AnimModel8stepAnimEv(unk_138);
}

BOOL KappnTaxi::enterTaxiPlayerGetIn() {
    getInTimer = 0x1e;
    if (KappnTaxi_RequestPlayerGetIn() != 0) {
        return TRUE;
    }
    return FALSE;
}

void KappnTaxi::execTaxiPlayerGetIn() {
    if (getInTimer == 0) {
        setTaxiState(0xf);
    }
    if (getInTimer != 0) {
        PlayerActor_SetHeadTilt(0, 0, 4);
        getInTimer = getInTimer - 1;
    }
    _ZN9AnimModel8stepAnimEv(unk_138);
}

BOOL KappnTaxi::enterTaxiLeaveDrive() {
    s32 r1 = callGetBca2Anim();
    _ZN14BlendAnimModel8initAnimEiiitt(unk_138, r1, 1, 0x1000, 0, 0);
    _ZN17BuildingSeEmitter6playSeEj(unk_234, 0x88b);
    return TRUE;
}

void KappnTaxi::execTaxiLeaveDrive() {
    _ZN17BuildingSeEmitter10playSeHeldEj(unk_234, 0x889);
    if (_ZN13AnimFrameCtrl10isFinishedEv(unk_1d4) != 0) {
        setTaxiState(0x10);
    }
    updateEffect42();
    _ZN9AnimModel8stepAnimEv(unk_138);
}

BOOL KappnTaxi::enterTaxiLeaveEnd() {
    sKappnTaxiLeaveTimer = 0x41;
    return TRUE;
}

void KappnTaxi::execTaxiLeaveEnd() {
    if (sKappnTaxiLeaveTimer == 0) {
        TalkRequestFlags_ClearSceneHold();
        SceneWarp_RequestFade(Scene_GetWarpRequest(), 0x2c, 2, 2);
        _ZN10PlayerData5resetEv(PlayerData_GetCurrent());
        _ZN8SaveData11resetPlayerEi(gSaveData, PlayerData_GetCurrentIndex());
    }
    if (sKappnTaxiLeaveTimer >= 0) {
        sKappnTaxiLeaveTimer = sKappnTaxiLeaveTimer - 1;
    }
}

extern "C" s32 KappnTaxi_RequestPlayerGetOut() {
    PlayerActTaxiGetOut *p = (PlayerActTaxiGetOut *)PlayerActor_Get(4);
    if (p != 0) {
        p->actionPriority = _ZN12Unk_0200769421getActionDonePriorityEj(p, p->action);
        return p->requestTaxiGetOut(6, -1);
    }
    return 0;
}

extern "C" s32 KappnTaxi_RequestPlayerGetIn() {
    PlayerActTaxiGetIn *p = (PlayerActTaxiGetIn *)PlayerActor_Get(4);
    if (p != 0) {
        p->actionPriority = _ZN12Unk_0200769421getActionDonePriorityEj(p, p->action);
        return p->requestTaxiGetIn(6, -1);
    }
    return 0;
}

s32 PlayerActTaxiGetOut::requestTaxiGetOut(s32 a, s32 b) {
    PlayerActionRequest m;
    _ZN19PlayerActionRequest6assignEiis(&m, 0x87, a, b);
    return _ZN11PlayerActor11pushRequestEP19PlayerActionRequest(this, &m);
}

void PlayerActTaxiGetOut::setupTaxiGetOut() {
    Unk_ov068_0226a940_Loc l;
    Unk_ov068_0226a940_Words w;
    _ZN12Unk_020102ec13startAnimOnceEijt(this, 0x82, 0, 0);
    rotY = 0;
    _ZN12Unk_02006d1415clearActionFlagEj(this);
    void *r4 = PlayerActor_GetPlayerData(this);
    if (r4 != 0) {
        Unk_ov068_0226a940_Bits bits;
        w.a = 0;
        w.b = 0;
        Clock_GetDateTime(&w);
        DateTime_SubDays(&w, 1);
        bits.a = ((u8 *)&w)[5];
        bits.b = ((u8 *)&w)[4];
        bits.c = ((u8 *)&w)[3];
        PlayerActor_SetLastPlayDate(this, r4, &bits);
    }
}

void PlayerActTaxiGetOut::netTaxiGetOut() {
}

void PlayerActTaxiGetOut::endTaxiGetOut() {
    positionX = positionX + 0x1c00;
    positionZ = positionZ - 0x2c00;
    rotY = rotY + 0x8000;
}

void PlayerActTaxiGetOut::mainTaxiGetOutAnim() {
    _ZN12Unk_020102ec11advanceAnimEv(this);
    if (_ZN13AnimFrameCtrl14hasPassedFrameEi(unk_2cc, 0x16) != 0) {
        _ZN12Unk_02006d1414playFootstepSeEv(this);
    }
}

void PlayerActTaxiGetOut::mainTaxiGetOutFinish() {
    if (_ZN13AnimFrameCtrl10isFinishedEv(unk_2cc) != 0) {
        actionPriority = _ZN12Unk_0200769421getActionDonePriorityEj(this, action);
        _ZN12Unk_02006d1412requestAct10Esji(this, 0, 5, -1);
        *(u8 *)PlayerSession_GetSessionFlags() = 0;
    }
}

void PlayerActTaxiGetOut::mainTaxiGetOut() {
    mainTaxiGetOutAnim();
    mainTaxiGetOutFinish();
}

s32 PlayerActTaxiGetIn::requestTaxiGetIn(s32 a, s32 b) {
    PlayerActionRequest m;
    _ZN19PlayerActionRequest6assignEiis(&m, 0x88, a, b);
    return _ZN11PlayerActor11pushRequestEP19PlayerActionRequest(this, &m);
}

void PlayerActTaxiGetIn::setupTaxiGetIn() {
    _ZN12Unk_020102ec13startAnimOnceEijt(this, 0x83, 3, 0);
    rotY = 0;
}

void PlayerActTaxiGetIn::netTaxiGetIn() {
}

void PlayerActTaxiGetIn::endTaxiGetIn() {
    positionX = positionX - 0x1c00;
    positionZ = positionZ + 0x2c00;
    rotY = rotY + 0x8000;
}

void PlayerActTaxiGetIn::mainTaxiGetInAnim() {
    _ZN12Unk_020102ec11advanceAnimEv(this);
    if (_ZN13AnimFrameCtrl14hasPassedFrameEi(unk_2cc, 8) != 0) {
        _ZN12Unk_02006d1414playFootstepSeEv(this);
    }
}

void PlayerActTaxiGetIn::mainTaxiGetInFinish() {
    if (_ZN13AnimFrameCtrl10isFinishedEv(unk_2cc) != 0) {
        actionPriority = _ZN12Unk_0200769421getActionDonePriorityEj(this, action);
        _ZN11PlayerActor12requestAct01Ejj(this, 9, -1);
    }
}

void PlayerActTaxiGetIn::mainTaxiGetIn() {
    mainTaxiGetInAnim();
    mainTaxiGetInFinish();
}

