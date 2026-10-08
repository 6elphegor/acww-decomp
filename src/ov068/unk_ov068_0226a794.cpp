// mwcc-version: 1.2/sp2
#include "types.h"
#include "gfx/VecFx32.h"
#include "actor/ActorProfile.h"
#include "talk/TalkWindowState.h"
#include "player/PlayerActionRequest.h"
#include "sys/ProcBase.h"
#include "talk/MsgString9B.h"
#include "actor/Actor.h"
#include "actor/Character.h"
#include "talk/MsgRequest.h"
#include "talk/TalkMsgRequest.h"
#include "town/BuildingActor.h"
#include "gfx/DebugColor.h"
#include "gfx/NNSG3dRS.h"
#include "gfx/NNSG3dRenderObj.h"
#include "gfx/AnimFrameCtrl.h"
#include "gfx/AnimModel.h"
#include "gfx/TwoLayerAnimModel.h"
#include "player/PlayerActor.h"
#include "player/PlayerData.h"
#include "player/PlayerId.h"
#include "player/Unk_02007694.h"
#include "save/SaveData.h"
#include "snd/BuildingSeEmitter.h"
#define PROTO_LOCAL_PlayerActor_GetBodyPos  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_PlayerActor_LocalRequestDoorEnter  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_PlayerActor_RequestWalkTo  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_TalkWindow_Get  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_Vec_Add  // declared below: the shared prototype conflicts with the calls here
#include "proto/main/unk_02090268.h"
#include "proto/main/unk_020943dc.h"
#include "proto/main/unk_02094810.h"
#include "proto/main/unk_02097444.h"
#include "proto/main/unk_020b0e60.h"
#include "proto/ov003/unk_ov003_022187fc.h"
#include "proto/ov068/unk_ov068_0226a794.h"














// Overlay 68 concrete actor (vtable 0x02270110, secondary vtable 0x022701d4), size 0x2e4
class KappnTaxi : public BuildingActor {
public:
    KappnTaxi();
    virtual ~KappnTaxi();
    virtual BOOL onDelete();
    virtual BOOL onExecute();
    virtual BOOL onDraw();
    virtual void onJointCalcPost(u32 a, void *b);
    virtual BOOL initBuilding();
    virtual void onMessageEnd(u32 attr);
    virtual BOOL needsMatrixUpdate();
    virtual VecFx32Ctor getSoundPos();
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
    VecFx32Copy getDoorPoint();
    void *callGetBca2Anim();

    /* 0x2b0 */ s32 taxiState;
    /* 0x2b4 */ s32 townHallGridX;
    /* 0x2b8 */ s32 townHallGridZ;
    /* 0x2bc */ VecFx32 townHallWalkTarget;
    /* 0x2c8 */ VecFx32Copy carPos;
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

struct Unk_ov068_0226a940_Bits {
    u16 a : 7;
    u16 b : 4;
    u16 c : 5;
};

struct Unk_ov068_0226a940_Words {
    u32 a, b;
};

struct KappnNpcIdBuf {
    u16 pad;
    u16 npcId;
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

extern "C" {
extern u8 gSaveData[];
void *PlayerActor_GetPlayerData(void *);
void Clock_GetDateTime(void *);
void DateTime_SubDays(void *, s32);
void PlayerActor_SetLastPlayDate(void *, void *, void *);
void TalkRequestFlags_ClearSceneHold();
void *Scene_GetWarpRequest();
void SceneWarp_RequestFade(void *, s32, s32, s32);
s32 Math_AngleDiffAbs(s32, s32);
s32 PlayerActor_RequestWalkTo(void *, s32, s32);
void TalkRequestFlags_SetSceneHold();
void SceneWarp_RequestExit(void *, s32);
void *Scene_GetCurrent(void *);
void Scene_SetTownReturnPos(void *, void *, void *, s32, s32, s32, s32);
s32 PlayerActor_LocalRequestDoorEnter(s32, void *, void *, s32);
u32 *TalkWindow_Get(s32);
void func_02094030(void *);
void Npc_GetName(void *, void *);
void func_02094018(void *);
VecFx32Copy *PlayerActor_GetBodyPos(s32);
void Vec_Sub(VecFx32Copy *, VecFx32Copy *, VecFx32Copy *);
void Vec_Add(VecFx32Copy *, void *, VecFx32Copy *);
s32 Math_Atan2(s32, s32);
s32 FX_Div(s32, s32);
void Scene_ResetTownReturnPos(s32 unused);
}



extern "C" DebugColor data_ov068_02271090(0x1f, 0x14, 0x14, 0x1f);
extern "C" DebugColor data_ov068_02271098(0x14, 0x14, 0x1f, 0x1f);
extern "C" DebugColor data_ov068_022710a4(0x1f, 0x1f, 0x14, 0x1f);
extern "C" DebugColor data_ov068_022710a0(0x14, 0x1f, 0x14, 0x1f);
extern "C" DebugColor data_ov068_02271094(0x14, 0x1f, 0x1f, 0x1f);
extern "C" DebugColor data_ov068_0227109c(0x14, 0x18, 0x18, 0x1f);
extern "C" ActorProfile sKappnTaxiProfile = {(void *(*)())KappnTaxi_Create, 0x23, 0x29, 0, 0xc8000, 0x12c000, 0x258000};

extern "C" void *KappnTaxi_Create() {
    return new KappnTaxi();
}

KappnTaxi::KappnTaxi() {
}

KappnTaxi::~KappnTaxi() {
}

BOOL KappnTaxi::initBuilding() {
    void *p = PlayerData_GetCurrent();
    carPos.x = position.x;
    carPos.y = position.y;
    carPos.z = position.z;
    if (Taxi_IsArriving()) {
        ownsTaxiFlags = 1;
        Scene_ResetTownReturnPos((s32)Scene_GetWarpRequest()); // unused by Scene_ResetTownReturnPos
        setTaxiState(1);
    } else if (Taxi_IsLeaving()) {
        ownsTaxiFlags = 1;
        if (p) {
            u16 t = 0xfff1;
            ((PlayerData *)(p))->setHeldItem(&t);
        }
        Scene_ResetTownReturnPos((s32)Scene_GetWarpRequest()); // unused by Scene_ResetTownReturnPos
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

BOOL KappnTaxi::onDelete() {
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

VecFx32Ctor KappnTaxi::getSoundPos() {
    VecFx32Ctor r;
    r.x = carPos.x;
    r.y = carPos.y;
    r.z = carPos.z;
    return r;
}

void *KappnTaxi::callGetBca2Anim() {
    return getBca2Anim();
}

BOOL KappnTaxi::needsMatrixUpdate() {
    if (taxiState) {
        return TRUE;
    }
    return FALSE;
}

void KappnTaxi::onJointCalcPost(u32 a, void *b) {
    if (a == 0) {
        NNSG3dJntAnmResult *o = ((NNSG3dRS *)b)->pJntAnmResult;
        VecFx32Copy v;
        VecFx32Copy out;
        VecFx32 *pv = &o->trans;
        v.x = pv->x;
        v.y = pv->y;
        v.z = pv->z;
        Vec_Add(&out, &position, &v);
        carPos.x = out.x;
        carPos.y = out.y;
        carPos.z = out.z;
    }
}

s32 KappnTaxi::getVoiceType() {
    return 0;
}

void KappnTaxi::onMessageEnd(u32) {
}

VecFx32Copy KappnTaxi::getDoorPoint() {
    VecFx32Copy r;
    r.x = carPos.x;
    r.y = carPos.y;
    r.z = carPos.z;
    r.x += FX_Div(0x19000, 0x64000) - 0xf6;
    return r;
}

s32 KappnTaxi::getAngleToPlayer() {
    if (PlayerActor_GetBodyPos(4)) {
        VecFx32Copy a;
        VecFx32Copy c;
        VecFx32Copy *p = PlayerActor_GetBodyPos(4);
        a.x = p->x;
        a.y = p->y;
        a.z = p->z;
        VecFx32Copy b = getDoorPoint();
        Vec_Sub(&c, &b, &a);
        return Math_Atan2(c.x, c.z);
    }
    return 0;
}

void KappnTaxi::startEffect41() {
    effect41 = Effect_Create(0x41, &carPos, 0, 0);
}

void KappnTaxi::updateEffect41() {
    u32 v = (u16)(model.curFrame >> 12);
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
    u32 v = (u16)(model.curFrame >> 12);
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
    static_cast<BlendAnimModel *>(&model)->initAnim(getDoorInAnim(), 1, 0x1000, 0, 0);
    return TRUE;
}

void KappnTaxi::execTaxiIdle() {
}

BOOL KappnTaxi::enterTaxiArrive() {
    static_cast<BlendAnimModel *>(&model)->initAnim(getDoorInAnim(), 1, 0x1000, 0, 0);
    TalkRequestFlags_SetSceneHold();
    return TRUE;
}

void KappnTaxi::execTaxiArrive() {
    if (PlayerActor_GetActor(4)) {
        setTaxiState(2);
    }
}

BOOL KappnTaxi::enterTaxiDoorOpen() {
    static_cast<BlendAnimModel *>(&model)->initAnim(getDoorInAnim(), 1, 0x1000, 0, 0);
    return TRUE;
}

void KappnTaxi::execTaxiDoorOpen() {
    seEmitter.playSeHeld(0x888);
    if (model.isFinished()) {
        setTaxiState(3);
    }
    updateEffect41();
    model.stepAnim();
}

BOOL KappnTaxi::enterTaxiPlayerGetOut() {
    getOutFrameCount = 0;
    if (KappnTaxi_RequestPlayerGetOut()) {
        static_cast<BlendAnimModel *>(&model)->initAnim(getDoorOutAnim(), 1, 0x1000, 0, 0);
        seEmitter.playSe(0x88a);
        return TRUE;
    }
    return FALSE;
}

void KappnTaxi::execTaxiPlayerGetOut() {
    if (model.isFinished()) {
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
        model.stepAnim();
    }
}

BOOL KappnTaxi::enterTaxiTalk() {
    u32 *rec = TalkWindow_Get(0);
    this->TalkMsgRequest::resetMsg();
    this->setFileName("sp_etc_sequence4");
    BOOL r;
    void *c = PlayerData_GetCurrent();
    if (c != 0 && ((PlayerId *)(((PlayerData *)(c))->getPlayerId()))->getGender() == 1) {
        r = TRUE;
    } else {
        r = FALSE;
    }
    msgIndex = r;
    ((TalkWindowState *)(rec))->attachRequest((TalkMsgRequest *)((TalkMsgRequest *)this));
    rec[2] = 1;
    KappnNpcIdBuf l;
    MsgString9B o;
    l.npcId = 0xd014;
    Npc_GetName(&o, &l.npcId);
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
        ((TalkWindowState *)(r))->detachRequest();
        setTaxiState(6);
    }
}

BOOL KappnTaxi::enterTaxiDepart() {
    void *r1 = callGetBca2Anim();
    static_cast<BlendAnimModel *>(&model)->initAnim(r1, 1, 0x1000, 0, 0);
    seEmitter.playSe(0x88b);
    departFrameCount = 0;
    return TRUE;
}

void KappnTaxi::execTaxiDepart() {
    seEmitter.playSeHeld(0x889);
    updateEffect42();
    if (model.isFinished() != 0) {
        setTaxiState(7);
    } else {
        model.stepAnim();
        u8 *o = (u8 *)PlayerActor_GetActor(4);
        if (o != 0) {
            s32 r4 = *(s16 *)(o + 0x8e);
            if (Math_AngleDiffAbs(r4, getAngleToPlayer()) < 0x1200) {
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
                        if (((BuildingActor *)(q))->getDoorPos((VecFx32 *)(l1), (s16 *)(l0)) != 0) {
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
        ((BuildingActor *)(q))->openDoorForEntry();
        townHallGridX = ((BuildingActor *)(q))->getGridX();
        townHallGridZ = ((BuildingActor *)(q))->getGridZ();
        setTaxiState(9);
    }
}

BOOL KappnTaxi::enterTaxiWarpTownHall() {
    warpDelayTimer = 0x14;
    return TRUE;
}

void KappnTaxi::execTaxiWarpTownHall() {
    VecFx32 v;
    s16 sv;
    if (warpDelayTimer != 0) {
        warpDelayTimer = warpDelayTimer - 1;
    }
    if (warpDelayTimer == 0) {
        void *q = BuildingList_FindByItem(0x5000);
        if (q != 0) {
            if (((BuildingActor *)(q))->getDoorPos((VecFx32 *)(&v), (s16 *)(&sv)) != 0) {
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
        return ((BuildingActor *)(q))->openDoorForExit();
    }
    return TRUE;
}

void KappnTaxi::execTaxiPlayerExitTownHall() {
    void *q = BuildingList_FindByItem(0x5000);
    if (q != 0) {
        if (((BuildingActor *)(q))->isDoorIdle() != 0) {
            u8 *o = (u8 *)PlayerActor_GetActor(4);
            if (o != 0) {
                if (exitWalkDelay == 0) {
                    VecFx32 v;
                    VecFx32 *pv = (VecFx32 *)(o + 0x5c);
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
    void *r1 = getDoorInAnim();
    static_cast<BlendAnimModel *>(&model)->initAnim(r1, 1, 0x1000, 0, 0);
    return TRUE;
}

void KappnTaxi::execTaxiLeaveDoorOpen() {
    seEmitter.playSeHeld(0x888);
    if (model.isFinished() != 0) {
        setTaxiState(0xd);
    }
    updateEffect41();
    model.stepAnim();
    u8 *o = (u8 *)PlayerActor_GetActor(4);
    if (o != 0) {
        s32 r4 = *(s16 *)(o + 0x8e);
        if (Math_AngleDiffAbs(r4, getAngleToPlayer()) < 0x1200) {
            PlayerActor_SetHeadTilt(0, (s16)(getAngleToPlayer() - r4), 4);
        }
    }
}

BOOL KappnTaxi::enterTaxiLeaveDoorAnim() {
    void *r1 = getDoorOutAnim();
    static_cast<BlendAnimModel *>(&model)->initAnim(r1, 1, 0x1000, 0, 0);
    seEmitter.playSe(0x88a);
    return TRUE;
}

void KappnTaxi::execTaxiLeaveDoorAnim() {
    if (model.isFinished() != 0) {
        setTaxiState(0xe);
    }
    model.stepAnim();
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
    model.stepAnim();
}

BOOL KappnTaxi::enterTaxiLeaveDrive() {
    void *r1 = callGetBca2Anim();
    static_cast<BlendAnimModel *>(&model)->initAnim(r1, 1, 0x1000, 0, 0);
    seEmitter.playSe(0x88b);
    return TRUE;
}

void KappnTaxi::execTaxiLeaveDrive() {
    seEmitter.playSeHeld(0x889);
    if (model.isFinished() != 0) {
        setTaxiState(0x10);
    }
    updateEffect42();
    model.stepAnim();
}

BOOL KappnTaxi::enterTaxiLeaveEnd() {
    sKappnTaxiLeaveTimer = 0x41;
    return TRUE;
}

void KappnTaxi::execTaxiLeaveEnd() {
    if (sKappnTaxiLeaveTimer == 0) {
        TalkRequestFlags_ClearSceneHold();
        SceneWarp_RequestFade(Scene_GetWarpRequest(), 0x2c, 2, 2);
        PlayerData_GetCurrent()->reset();
        ((SaveData *)(gSaveData))->resetPlayer((s32)(PlayerData_GetCurrentIndex()));
    }
    if (sKappnTaxiLeaveTimer >= 0) {
        sKappnTaxiLeaveTimer = sKappnTaxiLeaveTimer - 1;
    }
}

extern "C" s32 KappnTaxi_RequestPlayerGetOut() {
    PlayerActTaxiGetOut *p = (PlayerActTaxiGetOut *)PlayerActor_Get(4);
    if (p != 0) {
        p->actionPriority = ((Unk_02007694 *)(p))->getActionDonePriority(p->action);
        return p->requestTaxiGetOut(6, -1);
    }
    return 0;
}

extern "C" s32 KappnTaxi_RequestPlayerGetIn() {
    PlayerActTaxiGetIn *p = (PlayerActTaxiGetIn *)PlayerActor_Get(4);
    if (p != 0) {
        p->actionPriority = ((Unk_02007694 *)(p))->getActionDonePriority(p->action);
        return p->requestTaxiGetIn(6, -1);
    }
    return 0;
}

s32 PlayerActTaxiGetOut::requestTaxiGetOut(s32 a, s32 b) {
    PlayerActionRequest m;
    ((PlayerActionRequest *)(&m))->assign(0x87, a, b);
    return ((PlayerActor *)(this))->pushRequest((PlayerActionRequest *)(&m));
}

void PlayerActTaxiGetOut::setupTaxiGetOut() {
    KappnNpcIdBuf l;
    Unk_ov068_0226a940_Words w;
    ((PlayerActor *)(this))->startAnimOnce(0x82, 0, 0);
    rotY = 0;
    ((PlayerActor *)(this))->clearActionFlag(0);
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
    ((PlayerActor *)(this))->advanceAnim();
    if (((AnimFrameCtrl *)(unk_2cc))->hasPassedFrame(0x16) != 0) {
        ((PlayerActor *)(this))->playFootstepSe();
    }
}

void PlayerActTaxiGetOut::mainTaxiGetOutFinish() {
    if (((AnimFrameCtrl *)(unk_2cc))->isFinished() != 0) {
        actionPriority = ((Unk_02007694 *)(this))->getActionDonePriority(action);
        ((PlayerActor *)(this))->requestAct10(0, 5, -1);
        *(u8 *)PlayerSession_GetSessionFlags() = 0;
    }
}

void PlayerActTaxiGetOut::mainTaxiGetOut() {
    mainTaxiGetOutAnim();
    mainTaxiGetOutFinish();
}

s32 PlayerActTaxiGetIn::requestTaxiGetIn(s32 a, s32 b) {
    PlayerActionRequest m;
    ((PlayerActionRequest *)(&m))->assign(0x88, a, b);
    return ((PlayerActor *)(this))->pushRequest((PlayerActionRequest *)(&m));
}

void PlayerActTaxiGetIn::setupTaxiGetIn() {
    ((PlayerActor *)(this))->startAnimOnce(0x83, 3, 0);
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
    ((PlayerActor *)(this))->advanceAnim();
    if (((AnimFrameCtrl *)(unk_2cc))->hasPassedFrame(8) != 0) {
        ((PlayerActor *)(this))->playFootstepSe();
    }
}

void PlayerActTaxiGetIn::mainTaxiGetInFinish() {
    if (((AnimFrameCtrl *)(unk_2cc))->isFinished() != 0) {
        actionPriority = ((Unk_02007694 *)(this))->getActionDonePriority(action);
        ((PlayerActor *)(this))->requestAct01(9, -1);
    }
}

void PlayerActTaxiGetIn::mainTaxiGetIn() {
    mainTaxiGetInAnim();
    mainTaxiGetInFinish();
}

