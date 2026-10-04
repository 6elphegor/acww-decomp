// mwcc-version: 1.2/base
// mwcc-flags: -str reuse
// TU02 of ov003 (player free functions, 0x02204ce8-0x02212830): 25 unit files merged. Every original file is a namespace
// (the file-local Obj/V3/Rec/Msg typedefs and the extern "C" declarations differ per file); functions are emitted in
// descending address order, each in its own namespace block.
#include "types.h"
#include "gfx/VecFx32.h"
#include "Unk_020d8c7c.h"
#include "actor/Actor.h"
#include "actor/Character.h"
#include "talk/TalkMsgRequest.h"
#include "talk/TalkWindowState.h"
#include "talk/MsgRequest.h"
#include "player/PlayerActor.h"
#include "actor/NpcActor.h"
#include "game/GroundInfoBase.h"
#include "net/CommManager.h"
#include "field/FishShadow.h"

// calls into other modules (the old extern "C" declarations keep their local signatures; the call compiles like the method call)
#define Unk_02007694_getActionDonePriority _ZN12Unk_0200769421getActionDonePriorityEj
#define Unk_02007694_requestWaitMenu _ZN12Unk_0200769415requestWaitMenuEjjj
#define Unk_02008040_requestAct79 _ZN11PlayerActor12requestAct79Ejj
#define Unk_02008040_requestAct77 _ZN11PlayerActor12requestAct77Esjj
#define Unk_02006d14_requestAct76 _ZN11PlayerActor12requestAct76Ehhhjs
#define Unk_02006d14_act10FaceTalkTarget _ZN11PlayerActor19act10FaceTalkTargetEv
#define Unk_02006d14_requestAct10 _ZN11PlayerActor12requestAct10Esji
#define Unk_02007694_requestAct05 _ZN12Unk_0200769412requestAct05Etjj
#define PlayerActor_requestWalk _ZN11PlayerActor11requestWalkEjjj
#define PlayerActor_requestWait _ZN11PlayerActor11requestWaitEjjj
#define PlayerActor_getInputAngleRaw _ZN11PlayerActor16getInputAngleRawEv
#define PlayerActor_getInputMagnitude _ZN11PlayerActor17getInputMagnitudeEv
#define PlayerActor_getRequiredPriority _ZN11PlayerActor19getRequiredPriorityEv
#define PlayerActor_clearRequests _ZN11PlayerActor13clearRequestsEv
#define PlayerActor_pushRequest _ZN11PlayerActor11pushRequestEP19PlayerActionRequest
#define PlayerActor_isLocomotionAction _ZN11PlayerActor18isLocomotionActionEj
#define Unk_02006d14_isGuestInSession _ZN11PlayerActor16isGuestInSessionEv
#define Unk_02006d14_calcHandMtx _ZN11PlayerActor11calcHandMtxEv
#define Unk_02006d14_netSendTan _ZN11PlayerActor10netSendTanEv
#define Unk_02006d14_netSendClothesChange _ZN11PlayerActor20netSendClothesChangeEjj
#define Unk_02006d14_clearActionFlag _ZN11PlayerActor15clearActionFlagEj
#define Unk_02006d14_setActionFlag _ZN11PlayerActor13setActionFlagEj
#define Unk_02006d14_testActionFlag _ZN11PlayerActor14testActionFlagEj
#define Unk_02006d14_playSeAt _ZN11PlayerActor8playSeAtEjP7VecFx32
#define Unk_02006d14_playSe _ZN11PlayerActor6playSeEj
#define Unk_02006d14_nudgeForward _ZN11PlayerActor12nudgeForwardEv
#define Unk_02006d14_netSyncNearPoint _ZN11PlayerActor16netSyncNearPointEP7VecFx32
#define Unk_02006d14_netSyncNearUnit _ZN11PlayerActor15netSyncNearUnitEPi
#define Unk_02006d14_netFollowTransform _ZN11PlayerActor18netFollowTransformEv
#define Unk_02006d14_updateShownItemPos _ZN11PlayerActor18updateShownItemPosEjz
#define Unk_02006d14_playFootstepSe _ZN11PlayerActor14playFootstepSeEv
#define Unk_02006d14_updateFootstepFx _ZN11PlayerActor16updateFootstepFxEv
#define Unk_02006d14_turnAwayFromCamera _ZN11PlayerActor18turnAwayFromCameraEi
#define Unk_02006d14_turnToCamera _ZN11PlayerActor12turnToCameraEi
#define Unk_02006d14_turnToward _ZN11PlayerActor10turnTowardEi
#define Unk_02006d14_getHeldToolKind _ZN11PlayerActor15getHeldToolKindEv
#define Unk_02006d14_getHeldHoldableIndex _ZN11PlayerActor20getHeldHoldableIndexEv
#define Unk_02006d14_requestByFieldAnswer _ZN11PlayerActor20requestByFieldAnswerEii
#define Unk_02006d14_startUnitItemQuery _ZN11PlayerActor18startUnitItemQueryEP15Unk_0200f6d4_V2ii
#define Unk_02006d14_startFieldQuery _ZN11PlayerActor15startFieldQueryEiii
#define Unk_02006d14_getFieldAnswerKind _ZN11PlayerActor18getFieldAnswerKindEv
#define Unk_02006d14_interactAt _ZN11PlayerActor10interactAtEi
#define Unk_02006d14_isPosInReach _ZN11PlayerActor12isPosInReachEPij
#define Unk_02006d14_tryInteract _ZN11PlayerActor11tryInteractEv
#define Unk_02006d14_getTargetWalkSpeed _ZN11PlayerActor18getTargetWalkSpeedEv
#define Unk_02006d14_applyHeldItemPose _ZN11PlayerActor17applyHeldItemPoseEiPv
#define Unk_020102ec_startAnimOnce _ZN11PlayerActor13startAnimOnceEijt
#define Unk_020102ec_startAnim _ZN11PlayerActor9startAnimEijt
#define Unk_020102ec_submitSceneCollider _ZN11PlayerActor19submitSceneColliderEv
#define Unk_020102ec_updateBodyCollider _ZN11PlayerActor18updateBodyColliderEv
#define Unk_020102ec_setSubCollider _ZN11PlayerActor14setSubColliderEjjj
#define Unk_020102ec_advanceAnim _ZN11PlayerActor11advanceAnimEv
#define Unk_020102ec_moveWithCollision _ZN11PlayerActor17moveWithCollisionEv
#define Unk_020102ec_setSpeed _ZN11PlayerActor8setSpeedEPj
#define Unk_020102ec_setAngleY _ZN11PlayerActor9setAngleYEPs
#define GroundInfo_initAtPos _ZN10GroundInfo9initAtPosEP7VecFx32ii
#define FaintBgm_fadeOut _ZN8FaintBgm7fadeOutEv
#define FaintBgm_play _ZN8FaintBgm4playEv
#define BgmVolumeMixer_endFireworkDuck _ZN14BgmVolumeMixer15endFireworkDuckEv
#define BgmVolumeMixer_startFireworkDuck _ZN14BgmVolumeMixer17startFireworkDuckEv
#define BgmVolumeMixer_endFishDuck _ZN14BgmVolumeMixer11endFishDuckEv
#define BgmVolumeMixer_startFishDuck _ZN14BgmVolumeMixer13startFishDuckEv
#define Character_detachTalkRequest _ZN9Character17detachTalkRequestEi
#define Character_attachTalkRequest _ZN9Character17attachTalkRequestEi
#define TwoLayerAnimModel_updateLayers _ZN17TwoLayerAnimModel12updateLayersEv
#define AnimFrameCtrl_hasPassedFrame _ZN13AnimFrameCtrl14hasPassedFrameEi
#define AnimFrameCtrl_isFinished _ZN13AnimFrameCtrl10isFinishedEv
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define PlayerFaceTexRef_load _ZN16PlayerFaceTexRef4loadEj
#define FishBobber_setState _ZN10FishBobber8setStateEi
#define FishBobber_setPos _ZN10FishBobber6setPosEP7VecFx32
#define FishBobber_setTargetPos _ZN10FishBobber12setTargetPosEP7VecFx32
#define FishBobber_startCatchLift _ZN10FishBobber14startCatchLiftEv
#define FishBobber_endCatch _ZN10FishBobber8endCatchEv
#define FishBobber_isCatchLanded _ZN10FishBobber13isCatchLandedEv
#define FishBobber_checkReelResult _ZN10FishBobber15checkReelResultEv
#define FishBobber_tryHook _ZN10FishBobber7tryHookEv
#define FishBobber_getFish _ZN10FishBobber7getFishEv
#define FishBobber_setFish _ZN10FishBobber7setFishEPv
#define func_0206260c _ZN8ItemNameD1Ev
#define func_02062650 _ZN8ItemNameC1EPt
#define TalkWindowState_setNamedSlot _ZN15TalkWindowState12setNamedSlotEiPvj
#define CommManager_isLocalSlot _ZN11CommManager11isLocalSlotEj
#define ActorCollider_submit _ZN13ActorCollider6submitEv
#define HudCountdown_incCountB _ZN12HudCountdown9incCountBEv
#define HudCountdown_incCountA _ZN12HudCountdown9incCountAEv
#define PlayerData_clearFlag _ZN10PlayerData9clearFlagEj
#define PlayerData_setFlag _ZN10PlayerData7setFlagEj
#define PlayerData_testFlag _ZN10PlayerData8testFlagEj
#define PlayerData_setHeldItem _ZN10PlayerData11setHeldItemEPt
#define PlayerData_getHeldItem _ZN10PlayerData11getHeldItemEv
#define PlayerData_setTan _ZN10PlayerData6setTanEh
#define PlayerData_getFaceType _ZN10PlayerData11getFaceTypeEv
#define MsgRequest_setFileName _ZN10MsgRequest11setFileNameEPKc

// the real message class (main 0x0200e2c0 func/ctor 0x0200e2e0/dtor 0x0200e2d0). The 21 files that use it each saw it with a different layout of the
// payload at +0x0c: those views (hoisted below with their member types) are members of one union.
struct Unk_ov003_02205e58_Pair {
    u8 a, b;
};
struct PlayerBuryItemArgs {
    u16 h;
    u8 b2;
    u8 b3;
    u8 b4;
    u8 pad_05[7];
};
struct PlayerDigUpItemArgs {
    VecFx32Copy v;
    u16 a;
    u8 b;
};
struct Unk_ov003_0220bc84_Pair {
    u8 a, b;
};
struct Unk_ov003_0220c4ac_Rec {
    u8 a, b, c;
};
struct Unk_ov003_0220e030_P2 {
    s32 x, z;
};
struct Unk_ov003_0220e970_Rec {
    u8 b0, b1, b2, b3;
};
struct PlayerStowItemArgs {
    s32 st;
    s32 a;
    s32 b;
    s16 h;
    u8 bits;
    u8 pad_0f;
};
struct DoorEnterWork {
    s32 a, b;
    s16 c;
    u8 d, e;
};



namespace ns_02204d90 {


extern "C" {
s32 Vec_DistXZ(s32 *a, s32 *b);
extern s32 data_ov003_02230af0[];
extern s32 sFieldFrontDist[];
extern void *gSceneBlockMap;
BOOL PlayerActor_FieldInteractFront(PlayerActor *self, s32 *p);
s32 PlayerActor_FishFindCastTarget(PlayerActor *self, s32 *out, s32 *in);
void PlayerActor_RequestAxeSwing(PlayerActor *self, s32 a, s32 b);
void PlayerActor_RequestShovelReady(PlayerActor *self, s32 a, s32 b);
void PlayerActor_RequestBugNetSwing(PlayerActor *self, s32 a, s32 b);
void PlayerActor_RequestFishCast(PlayerActor *self, s32 *v, s32 a, s32 b);
void PlayerActor_RequestFishCastFail(PlayerActor *self, s32 a, s32 b);
void PlayerActor_RequestWateringCan(PlayerActor *self, s32 a, s32 b);
void PlayerActor_RequestSlingshot(PlayerActor *self, s32 a, s32 b);
void PlayerActor_RequestAct82(PlayerActor *self, s32 a, s32 b);
void PlayerActor_RequestAct80(PlayerActor *self, s32 a, s32 b);
void PlayerActor_RequestFirework(PlayerActor *self, s32 a, s32 b);
void PlayerActor_RequestTreeShake(PlayerActor *self, s32 x, s32 z, s32 f, s32 a, s32 b, s32 c);
void PlayerActor_RequestUmbrellaSpin(PlayerActor *self, s32 a, s32 b);
void PlayerActor_RequestAct72(PlayerActor *self, s32 a, s32 b);
void PlayerActor_OffsetByAngle(VecFx32 *out, PlayerActor *o, s32 *in, u16 *ang, s32 *p);
void PlayerActor_GetFrontUnitCenter(VecFx32 *out, PlayerActor *o);
BOOL Vec_Equal(s32 *a, s32 *b);
s32 Math_Atan2(s32 a, s32 b);
BOOL Ground_IsWaterAt(s32 *p);
BOOL Sky_IsShootingStarVisible();
void FieldPos_ToUnit(s32 *a, s32 *b, s32 *c);
void *BlockMap_GetItemPtr(void *m, s32 a, s32 b, s32 c, s32 d, s32 e);
}

struct Unk_ov003_02204f3c_Pad {
    s32 v[3];
    Unk_ov003_02204f3c_Pad() {}
    ~Unk_ov003_02204f3c_Pad() {}
};
extern "C" s32 Unk_02006d14_getHeldToolKind(PlayerActor *self);
extern "C" BOOL Unk_02006d14_isPosInReach(PlayerActor *self, s32 *p, s32 m);
extern "C" BOOL Unk_02006d14_interactAt(PlayerActor *self, s32 m);
extern "C" BOOL Unk_02006d14_startFieldQuery(PlayerActor *self, s32 *p, s32 a, s32 b);
extern "C" BOOL Unk_02006d14_requestByFieldAnswer(PlayerActor *self, s32 *p, s32 a);
extern "C" s32 Unk_02006d14_getFieldAnswerKind(PlayerActor *self);


// forward declarations (functions are emitted in descending address order)
extern "C" BOOL PlayerActor_FieldStartToolAction(PlayerActor *self, s32 mode, s32 *pos);
extern "C" BOOL PlayerActor_FieldUseTool(PlayerActor *self);
extern "C" BOOL PlayerActor_FieldInteractAt(PlayerActor *self, s32 a);
}

namespace ns_022052f4 {

struct Unk_ov003_022052f4_V2 {
    s32 x, y;
    Unk_ov003_022052f4_V2() {}
    Unk_ov003_022052f4_V2(const Unk_ov003_022052f4_V2 &o) { x = o.x; y = o.y; }
};

struct Unk_ov003_022052f4_Date {
    u16 a : 7;
    u16 b : 4;
    u16 c : 5;
};


typedef PlayerActor Obj;
typedef VecFx32 V3;
typedef Unk_ov003_022052f4_V2 V2;
typedef Unk_ov003_022052f4_Date Date;

extern "C" {
extern void *gSceneBlockMap;
extern u8 data_ov003_02230ae8[];
extern u8 sFishCastFarDist[];
extern u8 sFishCastNearDist[];
extern u8 sFieldFrontDist[];

void PlayerActor_GetHeldItem(u16 *out, Obj *o);
NpcActor *NpcRegistry_FindByKind(u32 a, u32 b);
void *Snowball_FindByParam(u32 a);
BOOL Unk_02006d14_isGuestInSession(Obj *o);
u16 *PlayerSession_GetTanTimer();
u8 *PlayerSession_GetSessionFlags();
s32 PlayerActor_GetPlayerData(Obj *o);
void Clock_GetDateTime(void *p);
s32 PlayerActor_CompareLastPlayDateNow(Obj *o);
s32 Weather_GetCurrent();
s32 PlayerActor_GetTan(Obj *o);
void PlayerData_setTan(u32 a, u32 b);
void PlayerActor_SetLastPlayDate(Obj *o, s32 a, void *d);
void Unk_02006d14_netSendTan(Obj *o);
BOOL Unk_02006d14_testActionFlag(Obj *o, u32 id);
s32 Unk_02006d14_clearActionFlag(Obj *o, u32 id);
void Unk_02006d14_setActionFlag(Obj *o, u32 id);
s32 PlayerActor_RequestPitfallFall(Obj *o, s32 *p, s32 a, s32 b);
BOOL PlayerActor_isLocomotionAction(Obj *o, s32 a);
void FieldPos_ToUnit(s32 *a, s32 *b, V3 *v);
s32 Unk_02006d14_getHeldToolKind(Obj *o);
s32 FieldAction_RequestPitfall(s32 a, V2 *p, s32 k);
s32 Unk_02006d14_getFieldAnswerKind(Obj *o);
void PlayerActor_clearRequests(Obj *o);
s32 Flower_Trample(V2 *p);
void PlayerActor_OffsetByAngle(V3 *out, Obj *o, V3 *pos, s16 *ang, void *arg);
u16 *BlockMap_GetItemPtr(void *grid, s32 hx, s32 hy, s32 lx, s32 ly, u32 layer);
void Tree_RequestShake(s32 a, V2 *p, s32 b);
s32 Vec_Equal(V3 *a, V3 *b);
s32 Math_Atan2(s32 a, s32 b);
BOOL Ground_IsWaterAt(V3 *v);
s32 Unk_02006d14_startUnitItemQuery(Obj *o, V2 *p, s32 a, s32 b);
void PlayerActor_GetFrontPoint(V3 *out, Obj *o);
s32 Ground_GetHeightAt(V3 *v, s32 *out, s32 a);
u16 *BlockMap_GetItemPtrAtPos(void *grid, V3 *v, u32 a);
s32 Unk_02006d14_isPosInReach(Obj *o, V3 *v, u32 a);
s32 Unk_02006d14_startFieldQuery(Obj *o, V3 *v, s32 a, s32 b);
s32 Unk_02006d14_requestByFieldAnswer(Obj *o, V3 *v, s32 a);

BOOL PlayerActor_CheckToolHitActor(Obj *o);
void PlayerActor_FieldUpdateTan(Obj *o);
void PlayerActor_FieldPollPitfall(Obj *o);
void PlayerActor_FieldCheckStepUnit(Obj *o);
void PlayerActor_FieldRunStep(Obj *o);
void PlayerActor_FieldCheckUnitAhead(Obj *o);
BOOL PlayerActor_FishFindCastTarget(Obj *o, V3 *out, V3 *tgt);
s32 PlayerActor_ShovelClassifyTarget(Obj *o, V3 *p, u8 *f);
s32 PlayerActor_AxeClassifyTarget(Obj *o, u8 *pa, u8 *pb, s32 *out);
BOOL PlayerActor_FieldInteractFront(Obj *o, s32 *pa);
}

static inline BOOL Unk_ov003_022052f4_Rng(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) r = TRUE;
    return r;
}

static inline BOOL Unk_ov003_022052f4_RngV(volatile u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    u32 a = *p;
    u32 b = *p;
    if (b >= lo && a <= hi) r = TRUE;
    return r;
}

static inline BOOL Unk_ov003_02205744_Chk(u16 *p) {
    BOOL f8 = TRUE, f7 = TRUE, f6 = TRUE, f5 = TRUE, f4 = TRUE, f3 = TRUE, f2 = TRUE, f1 = TRUE, f0 = FALSE;
    u32 v = *p;
    if (v >= 0x26 && v <= 0x2a) f0 = TRUE;
    if (!f0) { if (v < 0x5d || v > 0x61) f1 = FALSE; }
    if (!f1) { if (v < 0x2f || v > 0x56) f2 = FALSE; }
    if (!f2) { if (v < 0x57 || v > 0x5b) f3 = FALSE; }
    if (!f3) { if (v < 0x66 || v > 0x68) f4 = FALSE; }
    if (!f4) { if (v != 0x69) f5 = FALSE; }
    if (!f5) { if (v < 0x6a || v > 0x6c) f6 = FALSE; }
    if (!f6) { if (v != 0x6d) f7 = FALSE; }
    if (!f7) { if (v < 0xc8 || v > 0xcf) f8 = FALSE; }
    return f8;
}

// forward declarations (functions are emitted in descending address order)
extern "C" BOOL PlayerActor_CheckToolHitActor(Obj *o);
extern "C" void PlayerActor_FieldUpdateTan(Obj *o);
extern "C" void PlayerActor_FieldPollPitfall(Obj *o);
extern "C" void PlayerActor_FieldCheckStepUnit(Obj *o);
extern "C" void PlayerActor_FieldRunStep(Obj *o);
extern "C" void PlayerActor_FieldCheckUnitAhead(Obj *o);
extern "C" BOOL PlayerActor_FishFindCastTarget(Obj *o, V3 *out, V3 *tgt);
extern "C" s32 PlayerActor_ShovelClassifyTarget(Obj *o, V3 *p, u8 *f);
extern "C" s32 PlayerActor_AxeClassifyTarget(Obj *o, u8 *pa, u8 *pb, s32 *out);
extern "C" BOOL PlayerActor_FieldInteractFront(Obj *o, s32 *pa);
}

namespace ns_02205c28 {



struct Unk_ov003_02205c90_Bits {
    u32 a : 12;
    u32 f : 16;
    u32 b : 4;
};

static inline void Unk_ov003_02205e58_Set(Unk_ov003_02205e58_Pair *q, u32 a, u32 b) {
    q->a = a;
    q->b = b;
}


typedef PlayerActor Obj;
typedef VecFx32 V3;
typedef PlayerActionRequest Msg;
extern "C" void _ZN19PlayerActionRequest6assignEiis(Msg *self, u32 a, u32 b, u32 c);

extern "C" {
extern void *gCommManager;
extern u8 *data_021c1b3c;
extern u8 sWateringActive;
extern V3 sWateringPos;

s32 Unk_02006d14_getTargetWalkSpeed(Obj *o);
s32 Unk_02007694_getActionDonePriority(Obj *o, s32 a);
void PlayerActor_requestWalk(Obj *o, s32 a, s32 b, s32 c);
void Unk_02007694_requestAct05(Obj *o, s32 a, s32 b, s32 c);
void PlayerActor_requestWait(Obj *o, s32 a, s32 b, s32 c);
void Unk_02006d14_tryInteract(Obj *o);
void Unk_020102ec_advanceAnim(Obj *o);
s32 Unk_02006d14_netFollowTransform(Obj *o);
void Unk_020102ec_moveWithCollision(Obj *o);
void Unk_020102ec_updateBodyCollider(Obj *o);
void Unk_020102ec_startAnim(Obj *o, s32 a, u32 b, u32 c);
void Unk_020102ec_startAnimOnce(Obj *o, s32 a, u32 b, u32 c);
void Unk_02006d14_setActionFlag(Obj *o, u32 a);
void Unk_02006d14_clearActionFlag(Obj *o, u32 a);
void Unk_02006d14_playSe(Obj *o, u32 a);
void Unk_02006d14_netSendClothesChange(Obj *o, u32 a, u32 b);
s32 AnimFrameCtrl_isFinished(void *p);
s32 AnimFrameCtrl_hasPassedFrame(void *p, s32 a);
s32 CommManager_isLocalSlot(void *g, s32 a);
s32 Math_Atan2(s32 a, s32 b);
s32 Vec_DistXZ(void *a, void *b);
void PlayerActor_TurnAngle(void *a, s32 b);
void Unk_020102ec_setAngleY(Obj *o, s16 *a);
void PlayerActor_GetHeldItem(u16 *out, Obj *o);
void PlayerActor_ApproachAngle(void *p, s32 a, s32 b, s32 c, s32 d);
void PlayerActor_SetHeadTilt(s32 a, s32 b, s32 c);
void WorldCurve_FromCurved(V3 *a, V3 *b);
s32 Effect_Create(s32 a, V3 *v, void *p, s32 b);
void Effect_SetPosition(s32 a, V3 *v, void *p, s32 b);
void Effect_End(s32 a);
s32 PlayerData_GetBySessionSlot(s32 a);
void PlayerData_setHeldItem(s32 a, u16 *p);
u16 *PlayerData_getHeldItem(s32 a);
void HeldItemModel_SetItem(void *p, u16 *a, s32 b);
void HeldItemModel_PlayAnim(void *p, s32 a, s32 b, s32 c);
u8 *HeldItemModel_GetModel(void *p);
void PlayerActor_GetFrontPoint(V3 *out, Obj *o);
void Camera_SetModeDefault();
void Camera_SetMode4();
void BgmVolumeMixer_endFireworkDuck(void *p);
void BgmVolumeMixer_startFireworkDuck(void *p);
s32 PlayerActor_pushRequest(Obj *o, Msg *m);

V3 *FishCatch_GetPos(s32 a);
s32 FishCatch_IsActive(s32 a);
s32 BottleThrow_IsActive(s32 a);
V3 *BottleThrow_GetPos(s32 a);
void BottleThrow_Start(s32 a);

s32 PlayerActor_ResumeWalkOrIdle(Obj *o);
namespace ovcall {
s32 PlayerActor_FishReleaseLook(Obj *o);
s32 PlayerActor_ThrowBottleShowItem(Obj *o);
s32 PlayerActor_ThrowBottleLook(Obj *o);
s32 PlayerActor_Act82Update(Obj *o);
s32 PlayerActor_Act82CheckEnd(Obj *o);
s32 PlayerActor_FireworkCheckEnd(Obj *o);
s32 PlayerActor_FireworkUpdate(Obj *o);
}
void PlayerActor_FishReleaseLook(Obj *o);
void PlayerActor_FishReleaseGetNetData(u8 *src, u8 *a, u8 *b);
void PlayerActor_FishReleaseSetNetData(u8 *p, u32 a, u32 b);
s32 PlayerActor_RequestFishRelease(Obj *o, u8 *p, u32 c, s32 id, s32 e);
void PlayerActor_ThrowBottleShowItem(Obj *o);
void PlayerActor_ThrowBottleLook(Obj *o);
s32 PlayerActor_RequestThrowBottle(Obj *o, s32 a, s32 b);
void PlayerActor_Act82Update(Obj *o);
void PlayerActor_Act82CheckEnd(Obj *o);
s32 PlayerActor_RequestAct82(Obj *o, s32 a, s32 b);
void PlayerActor_FireworkUpdate(Obj *o);
void PlayerActor_FireworkCheckEnd(Obj *o);
s32 PlayerActor_RequestFirework(Obj *o, s32 a, s32 b);
}

// forward declarations (functions are emitted in descending address order)
extern "C" s32 PlayerActor_ResumeWalkOrIdle(Obj *o);
extern "C" void PlayerActor_MainFishRelease(Obj *o);
extern "C" void PlayerActor_FishReleaseLook(Obj *o);
extern "C" s32 PlayerActor_NetFishRelease(Obj *o, s32 a);
extern "C" void PlayerActor_SetupFishRelease(Obj *o, Msg *r);
extern "C" void PlayerActor_FishReleaseGetNetData(u8 *src, u8 *a, u8 *b);
extern "C" void PlayerActor_FishReleaseSetNetData(u8 *p, u32 a, u32 b);
extern "C" s32 PlayerActor_RequestFishRelease(Obj *o, u8 *p, u32 c, s32 id, s32 e);
extern "C" void PlayerActor_MainThrowBottle(Obj *o);
extern "C" void PlayerActor_ThrowBottleLook(Obj *o);
extern "C" void PlayerActor_ThrowBottleShowItem(Obj *o);
extern "C" s32 PlayerActor_NetThrowBottle(Obj *o, s32 a);
extern "C" void PlayerActor_SetupThrowBottle(Obj *o);
extern "C" s32 PlayerActor_RequestThrowBottle(Obj *o, s32 a, s32 b);
extern "C" void PlayerActor_MainAct82(Obj *o);
extern "C" void PlayerActor_Act82CheckEnd(Obj *o);
extern "C" void PlayerActor_Act82Update(Obj *o);
extern "C" void PlayerActor_EndAct82(Obj *o);
extern "C" s32 PlayerActor_NetAct82(Obj *o, s32 a);
extern "C" void PlayerActor_SetupAct82(Obj *o);
extern "C" s32 PlayerActor_RequestAct82(Obj *o, s32 a, s32 b);
extern "C" void PlayerActor_MainFirework(Obj *o);
extern "C" void PlayerActor_FireworkCheckEnd(Obj *o);
extern "C" void PlayerActor_FireworkUpdate(Obj *o);
extern "C" void PlayerActor_EndFirework(Obj *o);
extern "C" s32 PlayerActor_NetFirework(Obj *o, s32 a);
extern "C" void PlayerActor_SetupFirework(Obj *o);
}

namespace ns_02206574 {




struct PitfallStruggleWork {
    /* 0x00 */ s32 f0;
    /* 0x04 */ s32 f4;
    /* 0x08 */ s32 f8;
    /* 0x0c */ s32 fc;
    /* 0x10 */ s32 f10;
    /* 0x14 */ u16 f14;
    /* 0x16 */ u16 pad_16;
    /* 0x18 */ s32 f18;
};

struct Unk_ov003_022067c4_Pad {
    s32 v[2];
    Unk_ov003_022067c4_Pad() {}
    ~Unk_ov003_022067c4_Pad() {}
};

enum Unk_ov003_02206a84_Three { Unk_ov003_02206a84_THREE = 3 };


typedef PlayerActor Obj;
typedef VecFx32 V3;
typedef PlayerActionRequest Msg;
extern "C" void _ZN19PlayerActionRequest6assignEiis(Msg *self, u32 a, u32 b, u32 c);

extern "C" {
extern void *gCommManager;
extern s16 data_02135f44[];
struct Unk_ov003_02206c04_Keys { u16 a; u16 b; s16 c; };
extern Unk_ov003_02206c04_Keys gPad;

s32 Unk_02007694_getActionDonePriority(Obj *o, s32 a);
void PlayerActor_requestWait(Obj *o, s32 a, s32 b, s32 c);
void Unk_020102ec_advanceAnim(Obj *o);
void Unk_020102ec_moveWithCollision(Obj *o);
void Unk_020102ec_updateBodyCollider(Obj *o);
void Unk_020102ec_startAnimOnce(Obj *o, s32 a, u32 b, u32 c);
void Unk_02006d14_setActionFlag(Obj *o, u32 a);
void Unk_02006d14_clearActionFlag(Obj *o, u32 a);
void Unk_02006d14_playSe(Obj *o, u32 a);
void Unk_02006d14_netSendClothesChange(Obj *o, u32 a, u32 b);
s32 Unk_02006d14_testActionFlag(Obj *o, u32 a);
s32 Unk_02006d14_playSeAt(Obj *o, u32 a, void *v);
void Unk_02006d14_turnAwayFromCamera(Obj *o, u32 a);
s32 Unk_02006d14_turnToCamera(Obj *o, u32 a);
s32 Unk_02006d14_getHeldToolKind(Obj *o);
s32 PlayerActor_getInputMagnitude(Obj *o);
s32 PlayerActor_getInputAngleRaw(Obj *o);
s32 AnimFrameCtrl_isFinished(void *p);
s32 AnimFrameCtrl_hasPassedFrame(void *p, s32 a);
s32 CommManager_isLocalSlot(void *g, s32 a);
s32 PlayerData_GetBySessionSlot(s32 a);
void PlayerData_setHeldItem(s32 a, u16 *p);
u16 *PlayerData_getHeldItem(s32 a);
s32 Pocket_FindItem(u16 *p);
void PlayerActor_SetHoldableItem(s32 a, s32 b);
void Pocket_RemoveItem(s32 a);
void HeldItemModel_SetItem(void *p, u16 *a, s32 b);
void HeldItemModel_PlayAnim(void *p, s32 a, s32 b, s32 c);
void HeldItemModel_SetAnimSpeed(void *p, s32 a);
void PlayerFaceTexRef_load(void *p, void *q);
void WorldCurve_FromCurved(V3 *a, V3 *b);
s32 Effect_Create(s32 a, V3 *v, void *p, s32 b);
void Effect_SetPosition(s32 a, void *v, void *p, s32 b);
void Effect_PlayById(s32 a, V3 *v, s32 b, s32 c);
s32 PlayerData_GetCurrent();
void PlayerData_SetStungFace(s32 a, s32 b);
u8 *PlayerData_getFaceType(s32 a);
s32 PlayerData_testFlag(s32 a, s32 b);
void PlayerData_setFlag(s32 a, s32 b);
void Character_detachTalkRequest(void *self, TalkMsgRequest *sec);
void Character_attachTalkRequest(void *self, TalkMsgRequest *sec);
void Camera_SetMode4();
void Camera_SetModeDefault();
void TalkRequest_FinishPlayerMessage();
void Bgm_ReleasePriority(s32 a);
void Bgm_Release(s32 a);
s32 Bgm_RequestSilence(s32 a, s32 b, s32 c);
void Bgm_Request(s32 a, s32 b, s32 c, s32 d);
void GroundInfo_initAtPos(void *out, V3 *v, s32 a, s32 b);
void GroundInfo_Destruct(void *p);
s32 PlayerActor_pushRequest(Obj *o, Msg *m);
s32 func_01ffcb0c(s32 a, s32 b);
s32 FX_Div(s32 a, s32 b);
s32 VEC_Mag(V3 *v);
void Vec_Sub(V3 *out, V3 *a, V3 *b);
s32 FieldItemFx_StartPitfallClose(s32 a, V3 *v);
s32 PlayerActor_RequestStowItem(Obj *o, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g);

s32 PlayerActor_RequestFirework(Obj *o, s32 a, s32 b);
s32 PlayerActor_Act80CheckEnd(Obj *o);
s32 PlayerActor_Act80Update(Obj *o);
s32 PlayerActor_RequestAct80(Obj *o, s32 a, s32 b);
void PlayerActor_BeeStingUpdate(Obj *o);
s32 PlayerActor_PitfallClimbOutCheckEnd(Obj *o);
s32 PlayerActor_RequestPitfallClimbOut(Obj *o, s32 a, s32 b);
void PlayerActor_PitfallStruggleInput(Obj *o);
void PlayerActor_PitfallStruggleUpdate(Obj *o);
}

namespace Unk_ov003_02206be8_Ns {
extern "C" s32 PlayerActor_PitfallStruggleInput(Obj *o);
extern "C" s32 PlayerActor_PitfallStruggleUpdate(Obj *o);
}
extern "C" void MsgRequest_setFileName(void *self, const char *s);


// forward declarations (functions are emitted in descending address order)
extern "C" s32 PlayerActor_RequestFirework(Obj *o, s32 a, s32 b);
extern "C" void PlayerActor_MainAct80(Obj *o);
extern "C" s32 PlayerActor_Act80CheckEnd(Obj *o);
extern "C" s32 PlayerActor_Act80Update(Obj *o);
extern "C" void PlayerActor_EndAct80(Obj *o);
extern "C" s32 PlayerActor_NetAct80(Obj *o, s32 a);
extern "C" void PlayerActor_SetupAct80(Obj *o);
extern "C" s32 PlayerActor_RequestAct80(Obj *o, s32 a, s32 b);
extern "C" void PlayerActor_MainBeeSting(Obj *o);
extern "C" void PlayerActor_BeeStingUpdate(Obj *o);
extern "C" void PlayerActor_NetBeeSting();
extern "C" void PlayerActor_SetupBeeSting(Obj *o);
extern "C" s32 PlayerActor_RequestBeeSting(Obj *o, s32 a, s32 b);
extern "C" void PlayerActor_MainPitfallClimbOut(Obj *o);
extern "C" s32 PlayerActor_PitfallClimbOutCheckEnd(Obj *o);
extern "C" s32 PlayerActor_NetPitfallClimbOut(Obj *o, s32 a);
extern "C" void PlayerActor_SetupPitfallClimbOut(Obj *o);
extern "C" s32 PlayerActor_RequestPitfallClimbOut(Obj *o, s32 a, s32 b);
extern "C" void PlayerActor_MainPitfallStruggle(Obj *o);
extern "C" void PlayerActor_PitfallStruggleInput(Obj *o);
extern "C" void PlayerActor_PitfallStruggleUpdate(Obj *o);
}

namespace ns_02206e94 {
struct Unk_ov003_02206e94_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

struct TripPitfallWork {
    s32 unk_00;
    union {
        s32 unk_04;
        u8 unk_04_b;
    };
    s32 unk_08;
    s32 unk_0c;
    s32 unk_10;
    s16 inputAngle;
    s32 effectHandle;
};


typedef PlayerActor Obj;
typedef VecFx32 V3;
typedef PlayerActionRequest Msg;
extern "C" void _ZN19PlayerActionRequest6assignEiis(Msg *self, u32 a, u32 b, u32 c);
typedef TripPitfallWork Rec;

extern "C" void GroundInfo_initAtPos(GroundInfoBase *self, V3 *v, s32 a, s32 b);
extern "C" void GroundInfo_Destruct(GroundInfoBase *self);

extern "C" {
extern void *gCommManager;
extern u8 data_ov003_02230ad0[];
extern u8 data_ov003_02230ad8[];

void Effect_End(s32 a);
s32 Effect_SetPosition(s32 a, void *b, s32 c, s32 d);
s32 Effect_Create(s32 a, void *b, s32 c, s32 d);
void Effect_PlayById(s32 a, V3 *b, s32 c, s32 d);
void PlayerActor_SetHoldableItem(s32 a, s32 b);
s32 Unk_020102ec_startAnim(Obj *o, s32 a, u32 b, u32 c);
s32 Unk_020102ec_startAnimOnce(Obj *o, s32 a, u32 b, u32 c);
s32 PlayerActor_getInputMagnitude(Obj *o);
s32 PlayerActor_getInputAngleRaw(Obj *o);
s32 Unk_02006d14_clearActionFlag(Obj *o, u32 a);
s32 Unk_02006d14_setActionFlag(Obj *o, u32 a);
s32 Unk_02006d14_testActionFlag(Obj *o, u32 a);
s32 Unk_02006d14_playSeAt(Obj *o, u32 a, void *b);
s32 Unk_02006d14_playSe(Obj *o, u32 a);
s32 Unk_02006d14_getHeldToolKind(Obj *o);
s32 PlayerActor_StepTowardPose(Obj *o, s32 x, s32 z, s16 a);
s32 Unk_02006d14_turnToCamera(Obj *o, u32 a);
s32 PlayerActor_OffsetByAngle(V3 *out, Obj *o, void *pos, void *ang, u32 arg);
s32 PlayerActor_requestWait(Obj *o, s32 a, s32 b, s32 c);
s32 Unk_02007694_getActionDonePriority(Obj *o, s32 a);
void HeldItemModel_PlayAnim(void *p, s32 a, s32 b, s32 c);
void HeldItemModel_SetAnimSpeed(void *p, s32 a);
s32 AnimFrameCtrl_isFinished(void *p);
s32 AnimFrameCtrl_hasPassedFrame(void *p, s32 a);
void TwoLayerAnimModel_updateLayers(void *p);
s32 Unk_020102ec_advanceAnim(Obj *o);
s32 Unk_020102ec_moveWithCollision(Obj *o);
s32 Unk_020102ec_updateBodyCollider(Obj *o);
s32 PlayerActor_DecreaseClamped(s32 a, s32 b, s32 c);
void Unk_020102ec_setSpeed(Obj *o, s32 *a);
void PlayerActor_GetHeldItem(u16 *a, Obj *o);
s32 CommManager_isLocalSlot(void *g, u32 a);
s32 Sky_WishOnShootingStar();
void *PlayerData_GetCurrent();
s32 PlayerData_testFlag(void *p, s32 a);
s32 PlayerData_setFlag(void *p, s32 a);
void WorldCurve_FromCurved(V3 *a, V3 *b);
void FieldPos_FromUnitCenter(V3 *out, u32 a, u32 b);
s32 PlayerActor_pushRequest(Obj *o, Msg *m);

s32 FieldItemFx_StartPitfallClose(s32 a, V3 *v);
s32 FieldItemFx_StartPitfallHole(s32 a, V3 *v);
void PlayerActor_ResumeWalkOrIdle(Obj *o);

void PlayerActor_EndPitfallStruggle(Obj *o, s32 a);
s32 PlayerActor_NetPitfallStruggle(Obj *o, s32 a);
void PlayerActor_SetupPitfallStruggle(Obj *o, s32 *a);
s32 PlayerActor_RequestPitfallStruggle(Obj *o, s32 a, s32 b, s32 c);
void PlayerActor_MainPitfallFall(Obj *o);
void PlayerActor_PitfallFallUpdate(Obj *o);
s32 PlayerActor_PitfallFallEffect(Obj *o);
void PlayerActor_EndPitfallFall(Obj *o, s32 a);
s32 PlayerActor_NetPitfallFall(Obj *o, s32 a);
s32 PlayerActor_SetupPitfallFall(Obj *o, u8 *a);
void PlayerActor_PitfallFallGetNetData(u8 *s, u8 *a, u8 *b);
void PlayerActor_PitfallFallSetNetData(u8 *p, u8 a, u8 b);
s32 PlayerActor_RequestPitfallFall(Obj *o, s32 *p, s32 b, s32 c);
void PlayerActor_MainAct72(Obj *o);
void PlayerActor_Act72CheckEnd(Obj *o);
void PlayerActor_Act72Decelerate(Obj *o);
s32 PlayerActor_NetAct72(Obj *o, s32 a);
s32 PlayerActor_SetupAct72(Obj *o);
s32 PlayerActor_RequestAct72(Obj *o, s32 a, s32 b);
void PlayerActor_MainTrip(Obj *o);
void PlayerActor_TripUpdate(Obj *o);
void PlayerActor_TripCheckEnd(Obj *o);
void PlayerActor_TripEffects(Obj *o);
s32 PlayerActor_NetTrip(Obj *o, s32 a);
void PlayerActor_SetupTrip(Obj *o);
s32 PlayerActor_RequestTrip(Obj *o, s32 a, s32 b);
}

namespace ns_02206fc4 {
extern "C" s32 PlayerActor_PitfallFallUpdate(Obj *o);
}

static inline BOOL Eq2(V3 *p, volatile V3 *v) {
    s32 z = p->z;
    s32 x = p->x;
    return x == v->x && z == v->z;
}

struct Unk_ov003_022072b8_P {
    u8 a, b;
};

namespace ns_022072fc {
extern "C" s32 PlayerActor_Act72CheckEnd(Obj *o);
}

namespace ns_0220743c {
extern "C" s32 PlayerActor_TripCheckEnd(Obj *o);
}

static inline BOOL Range(volatile u16 *p, u32 lo, u32 hi) {
    u32 a = *p;
    u32 b = *p;
    BOOL r = FALSE;
    if (b >= lo && a <= hi) r = TRUE;
    return r;
}

// forward declarations (functions are emitted in descending address order)
extern "C" void PlayerActor_EndPitfallStruggle(Obj *o, s32 a);
extern "C" s32 PlayerActor_NetPitfallStruggle(Obj *o, s32 a);
extern "C" void PlayerActor_SetupPitfallStruggle(Obj *o, s32 *a);
extern "C" s32 PlayerActor_RequestPitfallStruggle(Obj *o, s32 a, s32 b, s32 c);
extern "C" void PlayerActor_MainPitfallFall(Obj *o);
extern "C" void PlayerActor_PitfallFallUpdate(Obj *o);
extern "C" s32 PlayerActor_PitfallFallEffect(Obj *o);
extern "C" void PlayerActor_EndPitfallFall(Obj *o, s32 a);
extern "C" s32 PlayerActor_NetPitfallFall(Obj *o, s32 a);
extern "C" s32 PlayerActor_SetupPitfallFall(Obj *o, u8 *a);
extern "C" void PlayerActor_PitfallFallGetNetData(u8 *s, u8 *a, u8 *b);
extern "C" void PlayerActor_PitfallFallSetNetData(u8 *p, u8 a, u8 b);
extern "C" s32 PlayerActor_RequestPitfallFall(Obj *o, s32 *p, s32 b, s32 c);
extern "C" void PlayerActor_MainAct72(Obj *o);
extern "C" void PlayerActor_Act72CheckEnd(Obj *o);
extern "C" void PlayerActor_Act72Decelerate(Obj *o);
extern "C" s32 PlayerActor_NetAct72(Obj *o, s32 a);
extern "C" s32 PlayerActor_SetupAct72(Obj *o);
extern "C" s32 PlayerActor_RequestAct72(Obj *o, s32 a, s32 b);
extern "C" void PlayerActor_MainTrip(Obj *o);
extern "C" void PlayerActor_TripUpdate(Obj *o);
extern "C" void PlayerActor_TripCheckEnd(Obj *o);
extern "C" void PlayerActor_TripEffects(Obj *o);
extern "C" s32 PlayerActor_NetTrip(Obj *o, s32 a);
extern "C" void PlayerActor_SetupTrip(Obj *o);
extern "C" s32 PlayerActor_RequestTrip(Obj *o, s32 a, s32 b);
}

namespace ns_022077c8 {

struct Unk_ov003_022077c8_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};


struct FaintWork {
    s32 effect;
    u8 faintKind;
    u8 pad_05[3];
    s32 unk_08;
};

typedef PlayerActor Obj;
typedef VecFx32 V3;
typedef Vec2 Pair;
typedef PlayerActionRequest Msg;
extern "C" void _ZN19PlayerActionRequest6assignEiis(Msg *self, s32 a, s32 b, s16 c);

extern "C" {
extern void *gCommManager;
extern u8 *data_021c1b3c;
extern u8 gScreenTransition;

void Unk_020102ec_startAnimOnce(Obj *o, s32 a, u32 b, u32 c);
void Unk_020102ec_startAnim(Obj *o, s32 a, u32 b, u32 c);
void Unk_020102ec_advanceAnim(Obj *o);
void Unk_020102ec_updateBodyCollider(Obj *o);
void Unk_020102ec_setAngleY(Obj *o, s16 *a);
void PlayerActor_GetHeldItem(u16 *out, Obj *o);
void PlayerActor_TurnAngle(void *out, s32 a);
void Unk_02006d14_clearActionFlag(Obj *o, u32 a);
void Unk_02006d14_setActionFlag(Obj *o, u32 a);
void Unk_02006d14_playSe(Obj *o, u32 a);
void PlayerActor_requestWait(Obj *o, s32 a, s32 b, s32 c);
s32 Unk_02007694_getActionDonePriority(Obj *o, s32 a);
s32 Unk_02006d14_getHeldToolKind(Obj *o);
s32 Unk_02006d14_turnToCamera(Obj *o, s32 a);
void Unk_02006d14_nudgeForward(Obj *o);
void Unk_02006d14_playFootstepSe(Obj *o);
void Unk_02006d14_updateFootstepFx(Obj *o);
s32 Unk_02006d14_netSyncNearUnit(Obj *o, Pair *p);
s32 PlayerActor_pushRequest(Obj *o, Msg *m);
void PlayerActor_StepTowardPose(Obj *o, s32 a, s32 b, s32 c);
s32 Unk_02008040_requestAct77(Obj *o, s16 v, u32 a, u32 b);
s32 AnimFrameCtrl_hasPassedFrame(void *a, s32 b);
s32 AnimFrameCtrl_isFinished(void *a);
void AnimFrameCtrl_setup(void *p, u32 a, s32 b, s32 c, u32 d);
void HeldItemModel_PlayAnim(void *a, u32 b, u32 c, u32 d);
void FaintBgm_fadeOut(void *a);
void FaintBgm_play(void *a);
void Bgm_ReleasePriority(s32 a);
void Bgm_RequestSilence(s32 a, s32 b, s32 c);
void Snd_PlaySe(s32 a);
s32 TalkRequest_FinishSceneEntry();
void TalkRequest_AddLeaveRoom();
s32 CommManager_isLocalSlot(void *g, u32 a);
s32 Item_GetFurnitureIndex(u16 *p);
s32 Item_IsFurniture(u16 *p);
void FieldPos_ToUnit(s32 *x, s32 *y, V3 *v);
s32 TownBlockMap_Get();
s32 Town_FindPlayerHouse(s32 o, V3 *v, s32 *a, s32 *b);
s32 Town_FindGateHouse(s32 o, V3 *v, s32 *a, s32 *b);
s32 Scene_GetWarpRequest();
void SceneWarp_RequestAt(s32 a, s32 b, void *c, s32 d, s32 e, s32 f, s32 g);
s32 Effect_Create(s32 a, void *b, void *c, s32 d);
s32 Effect_SetPosition(s32 h, void *a, void *b, s32 c);
void NetBuf_UnpackTriple20(void *p, s32 *out, s32 *x, s32 *y, s32 *z);
void NetBuf_PackTriple20(void *p, s32 a, s32 x, s32 y, s32 z);
s32 Math_Atan2(s32 a, s32 b);
void PlayerActor_RequestStowItem(Obj *o, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g);
void Tree_RequestShake(u32 a, Pair *p, s32 b);
void PlayerActor_TreeShakeReleaseSetWork(void *r, s32 a, s32 b, s32 c, u32 d, u32 e);

void PlayerActor_Act6ECheckEnd(Obj *o);
void PlayerActor_Act6EUpdateAnim(Obj *o);
s32 PlayerActor_RequestAct6E(Obj *o, s32 a, s16 b);
void PlayerActor_FaintWarp(Obj *o);
void PlayerActor_FaintEffect(Obj *o);
s32 PlayerActor_RequestFaint(Obj *o, u32 a, s32 b, s16 c);
void PlayerActor_MailboxCloseUpdate(Obj *o);
s32 PlayerActor_RequestMailboxClose(Obj *o, s32 a, s16 b);
s32 PlayerActor_RequestMailboxWait(Obj *o, s32 a, s16 b);
void PlayerActor_MailboxOpenMove(Obj *o);
s32 PlayerActor_MailboxOpenCheckEnd(Obj *o);
void PlayerActor_MailboxOpenGetNetData(void *a, V3 *v);
void PlayerActor_MailboxOpenSetNetData(void *a, V3 *v);
void PlayerActor_MailboxOpenSetWork(V3 *d, V3 v);
s32 PlayerActor_RequestMailboxOpen(Obj *o, V3 v, s32 a, s16 b);
void PlayerActor_MailboxOpenSetArgs(V3 *d, V3 v);
void PlayerActor_TreeShakeReleaseCheckEnd(Obj *o);
void PlayerActor_TreeShakeReleaseTurn(Obj *o);
void PlayerActor_TreeShakeReleaseUpdate(Obj *o);
}

namespace Unk_ov003_022077c8_Impl {
extern "C" s32 PlayerActor_Act6ECheckEnd(Obj *o);
}

static inline BOOL Unk_ov003_022078e0_IsTwo(u8 v) {
    if (v == 2) return TRUE;
    return FALSE;
}

namespace Unk_ov003_022079c4_Impl {
extern "C" s32 PlayerActor_FaintWarp(Obj *o);
}

// forward declarations (functions are emitted in descending address order)
extern "C" void PlayerActor_MainAct6E(Obj *o);
extern "C" void PlayerActor_Act6ECheckEnd(Obj *o);
extern "C" void PlayerActor_Act6EUpdateAnim(Obj *o);
extern "C" s32 PlayerActor_NetAct6E(Obj *o, s16 a);
extern "C" void PlayerActor_SetupAct6E(Obj *o);
extern "C" s32 PlayerActor_RequestAct6E(Obj *o, s32 a, s16 b);
extern "C" void PlayerActor_MainFaint(Obj *o);
extern "C" void PlayerActor_FaintWarp(Obj *o);
extern "C" void PlayerActor_FaintEffect(Obj *o);
extern "C" s32 PlayerActor_NetFaint(Obj *o, s16 a);
extern "C" void PlayerActor_SetupFaint(Obj *o, Msg *m);
extern "C" s32 PlayerActor_RequestFaint(Obj *o, u32 a, s32 b, s16 c);
extern "C" s32 PlayerActor_MainMailboxClose(Obj *o);
extern "C" void PlayerActor_MailboxCloseUpdate(Obj *o);
extern "C" s32 PlayerActor_NetMailboxClose(Obj *o, s16 a);
extern "C" void PlayerActor_SetupMailboxClose(Obj *o);
extern "C" s32 PlayerActor_RequestMailboxClose(Obj *o, s32 a, s16 b);
extern "C" void PlayerActor_MainMailboxWait(Obj *o);
extern "C" s32 PlayerActor_NetMailboxWait(Obj *o, s16 a);
extern "C" void PlayerActor_SetupMailboxWait(Obj *o);
extern "C" s32 PlayerActor_RequestMailboxWait(Obj *o, s32 a, s16 b);
extern "C" s32 PlayerActor_MainMailboxOpen(Obj *o);
extern "C" s32 PlayerActor_MailboxOpenCheckEnd(Obj *o);
extern "C" void PlayerActor_MailboxOpenMove(Obj *o);
extern "C" void PlayerActor_NetMailboxOpen(Obj *o, s16 a);
extern "C" void PlayerActor_SetupMailboxOpen(Obj *o, Msg *m);
extern "C" void PlayerActor_MailboxOpenGetNetData(void *a, V3 *v);
extern "C" void PlayerActor_MailboxOpenSetNetData(void *a, V3 *v);
extern "C" void PlayerActor_MailboxOpenSetWork(V3 *d, V3 v);
extern "C" s32 PlayerActor_RequestMailboxOpen(Obj *o, V3 v, s32 a, s16 b);
extern "C" void PlayerActor_MailboxOpenSetArgs(V3 *d, V3 v);
extern "C" void PlayerActor_MainTreeShakeRelease(Obj *o);
extern "C" void PlayerActor_TreeShakeReleaseCheckEnd(Obj *o);
extern "C" void PlayerActor_TreeShakeReleaseTurn(Obj *o);
extern "C" void PlayerActor_TreeShakeReleaseUpdate(Obj *o);
extern "C" void PlayerActor_NetTreeShakeRelease();
extern "C" void PlayerActor_SetupTreeShakeRelease(Obj *o, Msg *m);
}

namespace ns_02208108 {

struct Unk_ov003_02208190_Pair {
    s32 a, b;
    Unk_ov003_02208190_Pair() {}
    Unk_ov003_02208190_Pair(const Unk_ov003_02208190_Pair &o) { a = o.a; b = o.b; }
};

struct TreeShakeWork {
    s32 treePosX;
    s32 treePosZ;
    u16 faceAngle;
    u8 shakeFrames;
    u8 unk_0b;
    u8 doRelease;
    u8 unk_0d;
    u8 unk_0e;
    u8 unk_0f;
};

struct Act66Work {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    u8 unk_0c;
    u8 unk_0d;
    u8 waitFrames;
    u8 answer;
};

struct Unk_ov003_02208190_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

struct Unk_ov003_02208190_V3D : VecFx32Copy {
    Unk_ov003_02208190_V3D(s32 a, s32 b, s32 c) : VecFx32Copy(a, b, c) {}
    ~Unk_ov003_02208190_V3D() {}
};

struct Unk_ov003_02208190_VV {
    volatile s32 x, y, z;
    Unk_ov003_02208190_VV(s32 a, s32 b, s32 c) { x = a; y = b; z = c; }
};

struct Unk_ov003_02208190_VD : VecFx32Copy {
    Unk_ov003_02208190_VD() {}
    ~Unk_ov003_02208190_VD() {}
};

typedef VecFx32Copy V3;
typedef Unk_ov003_02208190_VV VV;
typedef Unk_ov003_02208190_VD VD;
typedef Unk_ov003_02208190_V3D V3D;
typedef Unk_ov003_02208190_Pair Pair;
typedef TreeShakeWork RecA;
typedef Act66Work RecC;


typedef PlayerActionRequest Msg;
extern "C" void _ZN19PlayerActionRequest6assignEiis(Msg *self, s32 a, s32 b, s16 c);
typedef PlayerActor Obj;

extern "C" {
extern void *gCommManager;

s32 PlayerActor_pushRequest(Obj *o, Msg *m);
void *Unk_02007694_getActionDonePriority(Obj *o, s32 a);
s32 AnimFrameCtrl_isFinished(void *p);
s32 AnimFrameCtrl_hasPassedFrame(void *p, s32 a);
s32 PlayerActor_requestWait(Obj *o, s32 a, s32 b, s32 c);
s32 CommManager_isLocalSlot(void *g, s32 a);
void Unk_020102ec_advanceAnim(Obj *o);
void Unk_020102ec_updateBodyCollider(Obj *o);
s32 Unk_02006d14_netFollowTransform(Obj *o);
s32 Unk_02006d14_netSyncNearPoint(Obj *o, V3 *v);
void PlayerActor_TurnAngle(void *a, s32 b);
void Unk_020102ec_setAngleY(Obj *o, s16 *a);
void Unk_020102ec_startAnimOnce(Obj *o, s32 a, s32 b, s32 c);
void Unk_020102ec_startAnim(Obj *o, s32 a, s32 b, s32 c);
void Unk_02006d14_clearActionFlag(Obj *o, s32 a);
s32 Unk_02006d14_testActionFlag(Obj *o, s32 a);
void Unk_02006d14_setActionFlag(Obj *o, s32 a);
void Unk_02006d14_playSe(Obj *o, s32 a);
void FieldPos_ToUnit(s32 *a, s32 *b, V3 *v);
void FieldPos_SnapToUnitCenter(V3 *out, s32 a);
void FieldPos_FromUnitCenter(V3 *out, s32 a, s32 b);
void Effect_Create(s32 a, void *b, void *c, s32 d);
void NetBuf_UnpackPair20(void *a, s32 *b, s32 *c);
void NetBuf_PackPair20(void *a, s32 b, s32 c);
s32 Math_Atan2(s32 a, s32 b);

void Tree_KeepShaking(s32 a, Pair p);
void Tree_RequestShake(s32 a, Pair p, s32 b);
void FieldItemFx_StartHoleShrink(s32 a, V3 v);
void PlayerActor_ResumeWalkOrIdle(Obj *o);
void PlayerActor_Act66GetNetData(void *a, Pair *p);
void PlayerActor_Act66SetNetData(void *a, Pair *p);
void PlayerActor_Act66SetWork(RecA *r, u32 a, s32 ang, V3 v);
void PlayerActor_RequestAct66(Obj *o, Pair p, s32 a, s32 b, s32 c);

void PlayerActor_TreeShakeReleaseSetWork(void *p, s16 a, s32 b, s32 c, u8 d, u8 e);
s32 PlayerActor_RequestTreeShakeRelease(Obj *o, s32 x, s32 z, u8 a, u8 b, s32 c, s16 d);
void PlayerActor_TreeShakeReleaseSetArgs(void *p, s32 a, s32 b, u8 c, u8 d);
void PlayerActor_MainTreeShake(Obj *o);
void PlayerActor_TreeShakeCheckEndRemote(Obj *o);
void PlayerActor_TreeShakeCheckEnd(Obj *o);
void PlayerActor_TreeShakeTurn(Obj *o);
void PlayerActor_EndTreeShake(Obj *o);
void PlayerActor_NetTreeShake(Obj *o, s32 a);
void PlayerActor_SetupTreeShake(Obj *o, u8 *m);
void PlayerActor_TreeShakeGetNetData(u8 *p, s32 *a, s32 *b, u8 *c);
void PlayerActor_TreeShakeSetNetData(u8 *p, s32 a, s32 b, u8 c);
void PlayerActor_TreeShakeSetWork(RecA *r, s32 a, s32 x, s32 z, u8 b, u8 c);
s32 PlayerActor_RequestTreeShake(Obj *o, s32 x, s32 z, bool a, bool b, s32 c, s32 d);
void PlayerActor_TreeShakeSetArgs(void *p, s32 a, s32 b, u8 c, u8 d);
void PlayerActor_MainAct67(Obj *o);
void PlayerActor_Act67CheckEndRemote(Obj *o);
void PlayerActor_Act67CheckEnd(Obj *o);
void PlayerActor_Act67Turn(Obj *o);
void PlayerActor_Act67Effect(Obj *o);
void PlayerActor_NetAct67(Obj *o);
void PlayerActor_SetupAct67(Obj *o, u8 *m);
void PlayerActor_Act67SetWork(RecC *r, s32 a, V3 v);
s32 PlayerActor_RequestAct67(Obj *o, V3 *v, s32 a, s16 b);
void PlayerActor_Act67SetArgs(V3 *d, V3 v);
void PlayerActor_MainAct66(Obj *o);
void PlayerActor_Act66CheckEnd(Obj *o);
void PlayerActor_Act66Turn(Obj *o);
void PlayerActor_EndAct66(Obj *o, s32 a);
void PlayerActor_NetAct66(Obj *o, s32 a);
void PlayerActor_SetupAct66(Obj *o, u8 *m);
}

// forward declarations (functions are emitted in descending address order)
extern "C" void PlayerActor_TreeShakeReleaseSetWork(void *p, s16 a, s32 b, s32 c, u8 d, u8 e);
extern "C" s32 PlayerActor_RequestTreeShakeRelease(Obj *o, s32 x, s32 z, u8 a, u8 b, s32 c, s16 d);
extern "C" void PlayerActor_TreeShakeReleaseSetArgs(void *p, s32 a, s32 b, u8 c, u8 d);
extern "C" void PlayerActor_MainTreeShake(Obj *o);
extern "C" void PlayerActor_TreeShakeCheckEndRemote(Obj *o);
extern "C" void PlayerActor_TreeShakeCheckEnd(Obj *o);
extern "C" void PlayerActor_TreeShakeTurn(Obj *o);
extern "C" void PlayerActor_EndTreeShake(Obj *o);
extern "C" void PlayerActor_NetTreeShake(Obj *o, s32 a);
extern "C" void PlayerActor_SetupTreeShake(Obj *o, u8 *m);
extern "C" void PlayerActor_TreeShakeGetNetData(u8 *p, s32 *a, s32 *b, u8 *c);
extern "C" void PlayerActor_TreeShakeSetNetData(u8 *p, s32 a, s32 b, u8 c);
extern "C" void PlayerActor_TreeShakeSetWork(RecA *r, s32 a, s32 x, s32 z, u8 b, u8 c);
extern "C" s32 PlayerActor_RequestTreeShake(Obj *o, s32 x, s32 z, bool a, bool b, s32 c, s32 d);
extern "C" void PlayerActor_TreeShakeSetArgs(void *p, s32 a, s32 b, u8 c, u8 d);
extern "C" void PlayerActor_MainAct67(Obj *o);
extern "C" void PlayerActor_Act67CheckEndRemote(Obj *o);
extern "C" void PlayerActor_Act67CheckEnd(Obj *o);
extern "C" void PlayerActor_Act67Turn(Obj *o);
extern "C" void PlayerActor_Act67Effect(Obj *o);
extern "C" void PlayerActor_NetAct67(Obj *o);
extern "C" void PlayerActor_SetupAct67(Obj *o, u8 *m);
extern "C" void PlayerActor_Act67SetWork(RecC *r, s32 a, V3 v);
extern "C" s32 PlayerActor_RequestAct67(Obj *o, V3 *v, s32 a, s16 b);
extern "C" void PlayerActor_Act67SetArgs(V3 *d, V3 v);
extern "C" void PlayerActor_MainAct66(Obj *o);
extern "C" void PlayerActor_Act66CheckEnd(Obj *o);
extern "C" void PlayerActor_Act66Turn(Obj *o);
extern "C" void PlayerActor_EndAct66(Obj *o, s32 a);
extern "C" void PlayerActor_NetAct66(Obj *o, s32 a);
extern "C" void PlayerActor_SetupAct66(Obj *o, u8 *m);
}

namespace ns_02208a58 {
struct Unk_ov003_02208a58_Pair {
    s32 a, b;
    Unk_ov003_02208a58_Pair(const Unk_ov003_02208a58_Pair &o) {
        a = o.a;
        b = o.b;
    }
};

struct Unk_ov003_02208a58_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

struct FillHoleWork {
    s32 unk_00;
    VecFx32 holePos;
    s16 faceAngle;
    u8 fillMode;
    u8 pad_13;
};




typedef PlayerActor Obj;
typedef VecFx32 V3;
typedef Unk_ov003_02208a58_Pair Pair;
typedef FillHoleWork Rec;
typedef PlayerActionRequest Msg;
extern "C" void _ZN19PlayerActionRequest6assignEiis(Msg *self, s32 a, s32 b, s16 c);

extern "C" {
extern void *gCommManager;
extern void *gSceneBlockMap;
extern u8 sWateringActive;
extern V3 sWateringPos;

void Unk_020102ec_advanceAnim(Obj *o);
void Unk_020102ec_updateBodyCollider(Obj *o);
void Unk_020102ec_submitSceneCollider(Obj *o);
void Unk_020102ec_startAnim(Obj *o, s32 a, u32 b, u32 c);
void Unk_020102ec_startAnimOnce(Obj *o, s32 a, u32 b, u32 c);
s32 AnimFrameCtrl_isFinished(void *p);
s32 CommManager_isLocalSlot(void *g, u32 a);
s32 Unk_02007694_getActionDonePriority(Obj *o, s32 a);
void Unk_02006d14_turnAwayFromCamera(Obj *o, s32 a);
void Unk_02006d14_playSeAt(Obj *o, s32 a, V3 *v);
s32 AnimFrameCtrl_hasPassedFrame(void *p, u32 a);
void FishBobber_setState(void *p, u32 a);
void FishBobber_setPos(void *p, V3 *v);
void Unk_02006d14_playSe(Obj *o, u32 a);
void Unk_02006d14_setActionFlag(Obj *o, u32 a);
s32 Unk_02006d14_testActionFlag(Obj *o, u32 a);
void Unk_02006d14_clearActionFlag(Obj *o, u32 a);
s32 TalkRequest_AddSlingshot();
void PlayerActor_requestWait(Obj *o, s32 a, s32 b, s32 c);
void Unk_02007694_requestWaitMenu(Obj *o, s32 a, s32 b, s32 c);
void Unk_02007694_requestAct05(Obj *o, s32 a, s32 b, s32 c);
void Sky_OnSlingshotFired(s32 h);
void HeldItemModel_PlayAnim(void *p, u32 a, u32 b, u32 c);
s32 PlayerActor_GetSlotAction(s32 *out, s32 a, u32 b);
s32 PlayerActor_ResumeWalkOrIdle(Obj *o);
void WorldCurve_FromCurved(V3 *a, V3 *b);
s32 Effect_Create(u32 id, V3 *v, s16 *h, u32 z);
void Effect_SetPosition(s32 h, V3 *v, u32 z);
void Effect_End(s32 h);
void PlayerActor_GetFrontPoint(V3 *out, Obj *o);
s32 Unk_02006d14_startFieldQuery(Obj *o, V3 *v, s32 a, s32 b);
void Unk_02006d14_netSyncNearPoint(Obj *o, V3 *v);
void Unk_02006d14_turnToward(Obj *o, s32 a);
s32 Math_Atan2(s32 a, s32 b);
void FieldPos_FromUnitCenter(V3 *out, u32 a, u32 b);
u16 *BlockMap_GetItemPtrAtPos(void *grid, V3 *v, u32 a);
void FieldItemFx_StartFillHole(s32 h, V3 *v);
void FieldItemFx_StartFillHoleWithItem(s32 h, V3 *v);
void Character_detachTalkRequest(Obj *o, TalkMsgRequest *s);
s32 PlayerActor_pushRequest(Obj *o, Msg *m);

void PlayerActor_Act66SetArgs(u8 *d, Pair v, u32 c);
void PlayerActor_SlingshotUpdate(Obj *o);
void PlayerActor_SlingshotCheckEnd(Obj *o);
s32 PlayerActor_RequestSlingshot(Obj *o, s32 a, s16 b);
void PlayerActor_WateringCanUpdate(Obj *o);
void PlayerActor_WateringCanCheckEnd(Obj *o);
void PlayerActor_WateringCanCheckEndRemote(Obj *o);
void PlayerActor_WateringCanGetNetData(u8 *p, u8 *out);
void PlayerActor_WateringCanSetNetData(u8 *p, u32 v);
s32 PlayerActor_RequestWateringCan(Obj *o, s32 a, s16 b);
void PlayerActor_FillHoleTurn(Obj *o);
void PlayerActor_FillHoleUpdate(Obj *o);
void PlayerActor_FillHoleCheckEnd(Obj *o);
}

// forward declarations (functions are emitted in descending address order)
extern "C" void PlayerActor_Act66GetNetData(u8 *p, Pair *out);
extern "C" void PlayerActor_Act66SetNetData(u8 *p, Pair *v);
extern "C" void PlayerActor_Act66SetWork(u8 *r, u32 a, u32 b, V3 *v);
extern "C" s32 PlayerActor_RequestAct66(Obj *o, Pair *p, u32 c, s32 b, s16 d);
extern "C" void PlayerActor_Act66SetArgs(u8 *d, Pair v, u32 c);
extern "C" void PlayerActor_MainSlingshotWatch(Obj *o);
extern "C" void PlayerActor_NetSlingshotWatch();
extern "C" void PlayerActor_SetupSlingshotWatch(Obj *o);
extern "C" s32 PlayerActor_RequestSlingshotWatch(Obj *o, s32 a, s16 b);
extern "C" void PlayerActor_MainSlingshot(Obj *o);
extern "C" void PlayerActor_SlingshotCheckEnd(Obj *o);
extern "C" void PlayerActor_SlingshotUpdate(Obj *o);
extern "C" s32 PlayerActor_NetSlingshot(Obj *o, s16 b);
extern "C" void PlayerActor_SetupSlingshot(Obj *o);
extern "C" s32 PlayerActor_RequestSlingshot(Obj *o, s32 a, s16 b);
extern "C" void PlayerActor_MainWateringCan(Obj *o);
extern "C" void PlayerActor_WateringCanCheckEndRemote(Obj *o);
extern "C" void PlayerActor_WateringCanCheckEnd(Obj *o);
extern "C" void PlayerActor_WateringCanUpdate(Obj *o);
extern "C" void PlayerActor_EndWateringCan(Obj *o);
extern "C" s32 PlayerActor_NetWateringCan(Obj *o, s16 b);
extern "C" void PlayerActor_SetupWateringCan(Obj *o);
extern "C" void PlayerActor_WateringCanGetNetData(u8 *p, u8 *out);
extern "C" void PlayerActor_WateringCanSetNetData(u8 *p, u32 v);
extern "C" s32 PlayerActor_RequestWateringCan(Obj *o, s32 a, s16 b);
extern "C" void PlayerActor_MainFillHole(Obj *o);
extern "C" void PlayerActor_FillHoleCheckEnd(Obj *o);
extern "C" void PlayerActor_FillHoleUpdate(Obj *o);
extern "C" void PlayerActor_FillHoleTurn(Obj *o);
extern "C" void PlayerActor_EndFillHole(Obj *o);
extern "C" void PlayerActor_NetFillHole();
extern "C" void PlayerActor_SetupFillHole(Obj *o, Msg *a);
}

namespace ns_022093bc {

// view A of the 0x7d0 record
struct BuryItemWork {
    u16 buryItem;
    s16 faceAngle;
    u8 fillMode;
    u8 holeUnitX;
    u8 holeUnitZ;
    u8 answerOk;
};

// view B
struct DugItemStoreWork {
    u8 digUnitX;
    u8 digUnitZ;
    u8 step;
};

// view C
struct DigUpItemMsgWork {
    VecFx32 digPos;
    u8 talkStep;
};

struct Unk_ov003_022093bc_Sub {
    u8 unk_00;
    u8 unk_01;
    u8 unk_02;
    u8 unk_03;
    u8 unk_04;
};



typedef VecFx32 V3;
typedef Vec2 Pair;
typedef PlayerActionRequest Msg;
extern "C" void _ZN19PlayerActionRequest6assignEiis(Msg *self, s32 a, s32 b, s16 c);
typedef PlayerBuryItemArgs Pay;
typedef Unk_ov003_022093bc_Sub Sub;

typedef PlayerActor Obj;

extern "C" {
extern void *gCommManager;

s32 PlayerActor_pushRequest(Obj *o, Msg *m);
s32 CommManager_isLocalSlot(void *g, u32 a);
void func_02007c08_dummy();
s32 Unk_02007694_getActionDonePriority(Obj *o, s32 a);
s32 AnimFrameCtrl_isFinished(void *p);
s32 AnimFrameCtrl_hasPassedFrame(void *p, s32 a);
void Unk_020102ec_startAnim(Obj *o, s32 a, u32 b, u32 c);
void Unk_020102ec_startAnimOnce(Obj *o, s32 a, u32 b, u32 c);
void Unk_020102ec_advanceAnim(Obj *o);
void Unk_020102ec_updateBodyCollider(Obj *o);
void Unk_020102ec_moveWithCollision(Obj *o);
void Unk_02006d14_clearActionFlag(Obj *o, u32 a);
void Unk_02006d14_setActionFlag(Obj *o, u32 a);
s32 Unk_02006d14_testActionFlag(Obj *o, u32 a);
void Unk_02006d14_playSe(Obj *o, u32 a);
void PlayerActor_requestWait(Obj *o, s32 a, s32 b, s32 c);
void Unk_02006d14_turnToward(Obj *o, s32 a);
void Unk_02006d14_updateShownItemPos(Obj *o, s32 a);
s32 Unk_02006d14_turnToCamera(Obj *o, s32 a);
void Unk_02006d14_netSyncNearPoint(Obj *o, V3 *v);
void FieldPos_FromUnitCenter(V3 *out, u32 a, u32 b);
void FieldPos_ToUnit(s32 *a, s32 *b, V3 *v);
s32 Math_Atan2(s32 a, s32 b);
void NetBuf_WriteU16(void *p, u32 v);
void Pocket_AddFoundItem(void *p);
s32 MenuCtrl_OpenPocketsFullDug(u32 v);
s32 MenuCtrl_IsFinished();
s32 MenuCtrl_IsResultOk();
void TalkRequest_FinishPlayerMessage();
s32 TalkRequest_AddPlayerMessage();
void Camera_SetMode4();
void Camera_SetModeDefault();
void Character_detachTalkRequest(Obj *o, MsgRequest *s);
void Character_attachTalkRequest(Obj *o, MsgRequest *s);
void *PlayerData_GetCurrent();
void MsgRequest_setFileName(void *p, void *s);
s32 PlayerData_testFlag(void *p, s32 a);
void PlayerData_setFlag(void *p, s32 a);
void func_02062650(void *b, void *s);
void func_0206260c(void *b);
void TalkWindowState_setNamedSlot(void *a, s32 b, void *c, s32 d);
void Bgm_ReleasePriority(s32 a);
void Bgm_RequestSilence(s32 a, s32 b, s32 c);
void Bgm_Request(s32 a, s32 b, s32 c, s32 d);
s32 Pocket_FindEmpty();
s32 FieldAction_RequestToolAtPendingForAid(u32 a, s32 b, s32 c, u32 d);

void PlayerActor_DigUpItemUpdate(Obj *o);
s32 PlayerActor_RequestFillHole(Obj *o, u32 k, Pair *p, u32 v, s32 a, s16 b);
void PlayerActor_MainBuryItem(Obj *o);
void PlayerActor_BuryItemCheckEnd(Obj *o);
void PlayerActor_BuryItemTurn(Obj *o);
void PlayerActor_NetBuryItem();
void PlayerActor_SetupBuryItem(Obj *o, Msg *m);
void PlayerActor_BuryItemSetNetData(Sub *s, u32 v, u8 a, u8 b, u8 c);
s32 PlayerActor_RequestBuryItem(Obj *o, u32 k, Pair *p, u32 v, s32 a, s16 b);
void PlayerActor_MainDugItemStore(Obj *o);
void PlayerActor_DugItemStoreUpdate(Obj *o);
void PlayerActor_DugItemStoreShrink(Obj *o);
void PlayerActor_NetDugItemStore(Obj *o, s32 a);
void PlayerActor_SetupDugItemStore(Obj *o, Msg *m);
void PlayerActor_DugItemStoreGetNetData(Sub *s, u8 *a, u8 *b, u8 *c);
void PlayerActor_DugItemStoreSetNetData(Sub *s, u8 a, u8 b, u8 c);
s32 PlayerActor_RequestDugItemStore(Obj *o, Pair *p, u32 c, u32 d, s32 e);
void PlayerActor_MainDigUpItem(Obj *o);
void PlayerActor_DigUpItemMessage(Obj *o);
}

static inline BOOL Unk_ov003_022099d0_R(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) r = TRUE;
    return r;
}

// forward declarations (functions are emitted in descending address order)
extern "C" s32 PlayerActor_RequestFillHole(Obj *o, u32 k, Pair *p, u32 v, s32 a, s16 b);
extern "C" void PlayerActor_MainBuryItem(Obj *o);
extern "C" void PlayerActor_BuryItemCheckEnd(Obj *o);
extern "C" void PlayerActor_BuryItemTurn(Obj *o);
extern "C" void PlayerActor_NetBuryItem();
extern "C" void PlayerActor_SetupBuryItem(Obj *o, Msg *m);
extern "C" void PlayerActor_BuryItemSetNetData(Sub *s, u32 v, u8 a, u8 b, u8 c);
extern "C" s32 PlayerActor_RequestBuryItem(Obj *o, u32 k, Pair *p, u32 v, s32 a, s16 b);
extern "C" void PlayerActor_MainDugItemStore(Obj *o);
extern "C" void PlayerActor_DugItemStoreUpdate(Obj *o);
extern "C" void PlayerActor_DugItemStoreShrink(Obj *o);
extern "C" void PlayerActor_NetDugItemStore(Obj *o, s32 a);
extern "C" void PlayerActor_SetupDugItemStore(Obj *o, Msg *m);
extern "C" void PlayerActor_DugItemStoreGetNetData(Sub *s, u8 *a, u8 *b, u8 *c);
extern "C" void PlayerActor_DugItemStoreSetNetData(Sub *s, u8 a, u8 b, u8 c);
extern "C" s32 PlayerActor_RequestDugItemStore(Obj *o, Pair *p, u32 c, u32 d, s32 e);
extern "C" void PlayerActor_MainDigUpItem(Obj *o);
extern "C" void PlayerActor_DigUpItemMessage(Obj *o);
}

namespace ns_02209d50 {
struct Unk_ov003_02209d50_V3D : VecFx32Copy {
    Unk_ov003_02209d50_V3D() {}
    ~Unk_ov003_02209d50_V3D() {}
};

struct Unk_ov003_02209d50_V2 {
    s32 x, y;
    Unk_ov003_02209d50_V2() {}
    Unk_ov003_02209d50_V2(const Unk_ov003_02209d50_V2 &o) { x = o.x; y = o.y; }
};

struct Unk_ov003_02209d50_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

struct DigUpItemWork {
    VecFx32Copy digPos;
    u8 talkStep;
    u8 holeKind;
};

struct DigWork {
    s32 unk_00;
    VecFx32Copy digPos;
};


typedef PlayerActor Obj;
typedef VecFx32Copy V3;
typedef Unk_ov003_02209d50_V2 V2;
typedef Unk_ov003_02209d50_V3D V3D;
typedef Mtx43 Blk;
typedef Unk_ov003_02209d50_Bits Bits;
typedef DigUpItemWork Rec;
typedef DigWork Rec2;
typedef PlayerActionRequest Msg;
extern "C" void _ZN19PlayerActionRequest6assignEiis(Msg *self, u32 a, u32 b, u32 c);
typedef PlayerDigUpItemArgs Pay;

extern "C" {
extern void *gCommManager;
extern void *gSceneBlockMap;

s32 Unk_020102ec_advanceAnim(Obj *o);
void Effect_Create(s32 a, V3 *b, s16 *c, s32 d);
void Unk_02006d14_playSe(Obj *o, u32 a);
void Unk_02006d14_setActionFlag(Obj *o, u32 a);
s32 Unk_02006d14_clearActionFlag(Obj *o, u32 a);
BOOL Unk_02006d14_testActionFlag(Obj *o, u32 a);
void FieldPos_ToUnit(s32 *a, s32 *b, V3 *v);
void Collision_AddDigHole(s32 a, s32 b);
void FieldItemFx_StartDigHole(s32 a, V3 v, u32 b);
void FieldItemFx_StartDigUpTree(s32 a, V3 v, s16 b);
void Unk_02006d14_calcHandMtx(Obj *o);
void Unk_02006d14_updateShownItemPos(Obj *o, s32 a);
void WorldCurve_FromCurved(void *a, void *b);
s32 CommManager_isLocalSlot(void *g, s32 a);
void Unk_020102ec_startAnimOnce(Obj *o, s32 a, s32 b, s32 c);
BOOL Item_IsFurniture(u16 *p);
s32 Item_GetFurnitureIndex(u16 *p);
s32 NetBuf_WriteU16(void *p, u32 a);
u16 NetBuf_ReadU16(void *p);
void FieldPos_FromUnitCenter(V3 *out, s32 x, s32 y);
u16 *BlockMap_GetItemPtr(void *grid, s32 hx, s32 hy, s32 lx, s32 ly, u32 layer);
void Bgm_RequestSilence(s32 a, s32 b, s32 c);
void VillagerTrend_OnItemDug(V3 *v);
s32 PlayerActor_pushRequest(Obj *o, Msg *m);
void Unk_020102ec_moveWithCollision(Obj *o);
void Unk_02006d14_netSyncNearPoint(Obj *o, V3 *v);
void Unk_020102ec_updateBodyCollider(Obj *o);
BOOL AnimFrameCtrl_isFinished(void *p);
s32 Unk_02007694_getActionDonePriority(Obj *o, s32 a);
void PlayerActor_requestWait(Obj *o, s32 a, s32 b, s32 c);

void PlayerActor_DigUpItemUpdate(Obj *o);
void PlayerActor_EndDigUpItem(Obj *o, s32 p);
void PlayerActor_NetDigUpItem(Obj *o, s32 a);
void PlayerActor_SetupDigUpItem(Obj *o, Msg *m);
void PlayerActor_DigUpItemGetNetData(u8 *p, s32 *xy, u16 *a, u8 *b);
void PlayerActor_DigUpItemSetNetData(u8 *p, V2 v, u16 a, u8 b);
s32 PlayerActor_RequestDigUpItemWith(Obj *o, V3 v, u16 a, u8 b, s32 c, s32 d);
s32 PlayerActor_RequestDigUpItem(Obj *o, V3 v, u8 x, s32 c, s32 e);
void PlayerActor_DigUpItemSetArgs(Pay *d, V3 v, u16 a, u8 b);
void PlayerActor_MainDig(Obj *o);
void PlayerActor_DigCheckEnd(Obj *o);
void PlayerActor_DigUpdate(Obj *o);
void PlayerActor_EndDig(Obj *o);
}

static inline BOOL Unk_ov003_02209fc8_Eq(u16 *p) {
    if (Item_IsFurniture(p)) {
        u16 w = 0xfff1;
        if (Item_GetFurnitureIndex(p) == Item_GetFurnitureIndex(&w)) return TRUE;
        return FALSE;
    }
    if (*p == 0xfff1) return TRUE;
    return FALSE;
}

static inline BOOL Unk_ov003_02209fc8_Rng(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) r = TRUE;
    return r;
}

namespace Unk_ov003_02209ef4_P {
extern "C" void FieldItemFx_StartDigHole(s32 a, V3 *v, u32 b);
}

static inline BOOL Unk_ov003_02209fc8_IsNone(u16 *p) {
    return Unk_ov003_02209fc8_Eq(p);
}
// An object with an (empty) inline constructor and destructor keeps its stack slot although no code touches it;
// the original frame has such an unused u16 slot between loc and the first inline temporary.
struct Unk_ov003_02209fc8_ItE { u16 v; Unk_ov003_02209fc8_ItE() {} ~Unk_ov003_02209fc8_ItE() {} };

// forward declarations (functions are emitted in descending address order)
extern "C" void PlayerActor_DigUpItemUpdate(Obj *o);
extern "C" void PlayerActor_EndDigUpItem(Obj *o, s32 p);
extern "C" void PlayerActor_NetDigUpItem(Obj *o, s32 a);
extern "C" void PlayerActor_SetupDigUpItem(Obj *o, Msg *m);
extern "C" void PlayerActor_DigUpItemGetNetData(u8 *p, s32 *xy, u16 *a, u8 *b);
extern "C" void PlayerActor_DigUpItemSetNetData(u8 *p, V2 v, u16 a, u8 b);
extern "C" s32 PlayerActor_RequestDigUpItemWith(Obj *o, V3 v, u16 a, u8 b, s32 c, s32 d);
extern "C" s32 PlayerActor_RequestDigUpItem(Obj *o, V3 v, u8 x, s32 c, s32 e);
extern "C" void PlayerActor_DigUpItemSetArgs(Pay *d, V3 v, u16 a, u8 b);
extern "C" void PlayerActor_MainDig(Obj *o);
extern "C" void PlayerActor_DigCheckEnd(Obj *o);
extern "C" void PlayerActor_DigUpdate(Obj *o);
extern "C" void PlayerActor_EndDig(Obj *o);
}

namespace ns_0220a680 {

struct Unk_ov003_0220a684_Pair {
    s32 a, b;
    Unk_ov003_0220a684_Pair() {}
    Unk_ov003_0220a684_Pair(s32 x, s32 y) { a = x; b = y; }
    Unk_ov003_0220a684_Pair(const Unk_ov003_0220a684_Pair &o) { a = o.a; b = o.b; }
};

struct ShovelStrikeWork {
    u8 a, b, c, pad_03;
    VecFx32CopyDtor pos;
    u8 pad_10[0x1c - 0x10];
};

struct PlayerDigArgs {
    u8 id;
    u8 pad_01[3];
    VecFx32CopyDtor pos;
    VecFx32CopyDtor GetPos() { return pos; }
};

struct Unk_ov003_0220a684_B3 {
    u8 a, b, c;
};






typedef PlayerActor Obj;
typedef VecFx32CopyDtor V3;
typedef Unk_ov003_0220a684_Pair Pair;
typedef ShovelStrikeWork Rec;
typedef PlayerDigArgs P3;
typedef Unk_ov003_0220a684_B3 B3;
typedef PlayerActionRequest Msg;
extern "C" void _ZN19PlayerActionRequest6assignEiis(Msg *self, u32 a, u32 b, s16 c);

extern "C" {
extern void *gCommManager;
extern void *gSceneBlockMap;
extern s16 data_02135f44[];

s32 Unk_020102ec_startAnimOnce(Obj *o, s32 a, u32 b, u32 c);
s32 Unk_02006d14_setActionFlag(Obj *o, u32 a);
s32 Unk_02006d14_clearActionFlag(Obj *o, u32 a);
s32 Unk_02006d14_testActionFlag(Obj *o, u32 a);
s32 Unk_02006d14_playSe(Obj *o, u32 a);
s32 PlayerActor_pushRequest(Obj *o, Msg *m);
s32 Unk_020102ec_moveWithCollision(Obj *o);
s32 Unk_020102ec_updateBodyCollider(Obj *o);
s32 Unk_020102ec_advanceAnim(Obj *o);
s32 Unk_020102ec_setSpeed(Obj *o, s32 *a);
void PlayerActor_GetHeldItem(u16 *out, Obj *o);
s32 PlayerActor_Decelerate(s32 a, s32 b);
s32 PlayerActor_DecreaseClamped(s32 a, s32 b, s32 c);
s32 AnimFrameCtrl_isFinished(void *p);
s32 AnimFrameCtrl_hasPassedFrame(void *p, s32 a);
s32 Unk_02007694_getActionDonePriority(Obj *o, s32 a);
s32 PlayerActor_requestWait(Obj *o, s32 a, s32 b, s32 c);
s32 CommManager_isLocalSlot(void *g, s32 a);
s32 Unk_02006d14_netFollowTransform(Obj *o);
void PlayerActor_GetFrontUnitCenter(V3 *out, Obj *o);
void FieldPos_ToUnit(s32 *a, s32 *b, V3 *v);
void FieldPos_FromUnitCenter(V3 *out, u32 a, u32 b);
u16 *BlockMap_GetItemPtr(void *grid, s32 hx, s32 hy, s32 lx, s32 ly, u32 layer);
s32 func_01ffcb0c(s32 a, s32 b);
s32 Effect_Create(s32 a, V3 *v, s16 *ang, ...);

s32 FieldItemFx_StartStrikeResult(Pair *p);
void Tree_RequestShake(s32 a, Pair p, s32 b);
s32 Snowball_Break(void *p, s32 a);
s32 PlayerActor_ShovelClassifyTarget(Obj *o, V3 *p, u8 *f);
s32 PlayerActor_RequestDigUpItem(Obj *o, V3 v, s32 a, s32 b, s32 c);
s32 PlayerActor_RequestFillHole(Obj *o, s32 a, Pair p, s32 b, s32 c, s32 d);

void PlayerActor_NetDig(Obj *o);
s32 PlayerActor_SetupDig(Obj *o, Msg *m);
void PlayerActor_DigSetWork(Rec *r, u32 id, V3 v);
s32 PlayerActor_RequestDig(Obj *o, u32 id, V3 v, s32 b, s16 c);
void PlayerActor_DigSetArgs(P3 *p, u32 id, V3 v);
void PlayerActor_MainShovelStrike(Obj *o);
void PlayerActor_ShovelStrikeCheckEnd(Obj *o);
void PlayerActor_ShovelStrikeUpdate(Obj *o);
void PlayerActor_EndShovelStrike(Obj *o);
void PlayerActor_NetShovelStrike(Obj *o, s32 x);
void PlayerActor_SetupShovelStrike(Obj *o, Msg *m);
void PlayerActor_ShovelStrikeGetNetData(u8 *s, u8 *a, u8 *b, u8 *c, u8 *d);
void PlayerActor_ShovelStrikeSetNetData(u8 *d, u8 a, u8 b, u8 c, u8 e);
void PlayerActor_ShovelStrikeSetWork(Rec *r, Pair p, u8 c);
s32 PlayerActor_RequestShovelStrike(Obj *o, u32 id, Pair p, s32 b, s32 c);
void PlayerActor_ShovelStrikeSetArgs(B3 *d, Pair p, u32 c);
void PlayerActor_MainAct5C(Obj *o);
void PlayerActor_Act5CCheckEnd(Obj *o);
s32 PlayerActor_NetAct5C(Obj *o, s16 x);
void PlayerActor_SetupAct5C(Obj *o);
s32 PlayerActor_RequestAct5C(Obj *o, u32 a, s16 b);
void PlayerActor_MainAct5B(Obj *o);
void PlayerActor_Act5BCheckEnd(Obj *o);
void PlayerActor_Act5BUpdate(Obj *o);
s32 PlayerActor_NetAct5B(Obj *o, s16 x);
void PlayerActor_SetupAct5B(Obj *o);
s32 PlayerActor_RequestAct5B(Obj *o, u32 a, s16 b);
void PlayerActor_MainShovelWait(Obj *o);
s32 PlayerActor_ShovelDispatch(Obj *o, V3 *v, u8 f);
void PlayerActor_ShovelWaitTrackTarget(Obj *o);
}

static inline BOOL Unk_ov003_0220a7fc_Chk(u16 *p) {
    BOOL f9 = TRUE, f8 = TRUE, f7 = TRUE, f6 = TRUE, f5 = TRUE, f4 = TRUE, f3 = TRUE, f2 = TRUE, f1 = FALSE;
    u32 v = *p;
    if (v >= 0x26 && v <= 0x2a) f1 = TRUE;
    if (!f1) {
        if (!(v >= 0x5d && v <= 0x61)) f2 = FALSE;
    }
    if (!f2) {
        if (!(v >= 0x2f && v <= 0x56)) f3 = FALSE;
    }
    if (!f3) {
        if (!(v >= 0x57 && v <= 0x5b)) f4 = FALSE;
    }
    if (!f4) {
        if (!(v >= 0x66 && v <= 0x68)) f5 = FALSE;
    }
    if (!f5) {
        if (v != 0x69) f6 = FALSE;
    }
    if (!f6) {
        if (!(v >= 0x6a && v <= 0x6c)) f7 = FALSE;
    }
    if (!f7) {
        if (v != 0x6d) f8 = FALSE;
    }
    if (!f8) {
        if (!(v >= 0xc8 && v <= 0xcf)) f9 = FALSE;
    }
    return f9;
}

// forward declarations (functions are emitted in descending address order)
extern "C" void PlayerActor_NetDig(Obj *o);
extern "C" s32 PlayerActor_SetupDig(Obj *o, Msg *m);
extern "C" void PlayerActor_DigSetWork(Rec *r, u32 id, V3 v);
extern "C" s32 PlayerActor_RequestDig(Obj *o, u32 id, V3 v, s32 b, s16 c);
extern "C" void PlayerActor_DigSetArgs(P3 *p, u32 id, V3 v);
extern "C" void PlayerActor_MainShovelStrike(Obj *o);
extern "C" void PlayerActor_ShovelStrikeCheckEnd(Obj *o);
extern "C" void PlayerActor_ShovelStrikeUpdate(Obj *o);
extern "C" void PlayerActor_EndShovelStrike(Obj *o);
extern "C" void PlayerActor_NetShovelStrike(Obj *o, s32 x);
extern "C" void PlayerActor_SetupShovelStrike(Obj *o, Msg *m);
extern "C" void PlayerActor_ShovelStrikeGetNetData(u8 *s, u8 *a, u8 *b, u8 *c, u8 *d);
extern "C" void PlayerActor_ShovelStrikeSetNetData(u8 *d, u8 a, u8 b, u8 c, u8 e);
extern "C" void PlayerActor_ShovelStrikeSetWork(Rec *r, Pair p, u8 c);
extern "C" s32 PlayerActor_RequestShovelStrike(Obj *o, u32 id, Pair p, s32 b, s32 c);
extern "C" void PlayerActor_ShovelStrikeSetArgs(B3 *d, Pair p, u32 c);
extern "C" void PlayerActor_MainAct5C(Obj *o);
extern "C" void PlayerActor_Act5CCheckEnd(Obj *o);
extern "C" s32 PlayerActor_NetAct5C(Obj *o, s16 x);
extern "C" void PlayerActor_SetupAct5C(Obj *o);
extern "C" s32 PlayerActor_RequestAct5C(Obj *o, u32 a, s16 b);
extern "C" void PlayerActor_MainAct5B(Obj *o);
extern "C" void PlayerActor_Act5BCheckEnd(Obj *o);
extern "C" void PlayerActor_Act5BUpdate(Obj *o);
extern "C" s32 PlayerActor_NetAct5B(Obj *o, s16 x);
extern "C" void PlayerActor_SetupAct5B(Obj *o);
extern "C" s32 PlayerActor_RequestAct5B(Obj *o, u32 a, s16 b);
extern "C" void PlayerActor_MainShovelWait(Obj *o);
extern "C" s32 PlayerActor_ShovelDispatch(Obj *o, V3 *v, u8 f);
}

namespace ns_0220b0f0 {

struct Unk_ov003_0220b0f0_Pair {
    s32 a, b;
    Unk_ov003_0220b0f0_Pair() {}
    Unk_ov003_0220b0f0_Pair(const Unk_ov003_0220b0f0_Pair &o) {
        a = o.a;
        b = o.b;
    }
};

struct Unk_ov003_0220b0f0_V3C : VecFx32 {
    Unk_ov003_0220b0f0_V3C() {}
    Unk_ov003_0220b0f0_V3C(const Unk_ov003_0220b0f0_V3C &o) {
        x = o.x;
        y = o.y;
        z = o.z;
    }
};

struct Unk_ov003_0220b0f0_B3 {
    u8 a, b, c;
};

struct Unk_ov003_0220b0f0_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

struct ShovelReadyWork {
    VecFx32 targetPos;
    s16 targetAngle;
    u8 hasTarget;
    u8 unk_0f;
};




typedef PlayerActor Obj;
typedef VecFx32 V3;
typedef Unk_ov003_0220b0f0_V3C V3C;
typedef Unk_ov003_0220b0f0_Pair Pair;
typedef ShovelReadyWork Rec;
typedef PlayerActionRequest Msg;
extern "C" void _ZN19PlayerActionRequest6assignEiis(Msg *self, s32 a, s32 b, s16 c);
typedef Mtx43 S30;
typedef TalkMsgRequest Sec;

extern "C" {
extern void *gCommManager;

void Unk_020102ec_advanceAnim(Obj *o);
void Unk_020102ec_updateBodyCollider(Obj *o);
s32 Unk_02006d14_netFollowTransform(Obj *o);
void Unk_020102ec_moveWithCollision(Obj *o);
void Unk_020102ec_startAnim(Obj *o, s32 a, u32 b, u32 c);
void Unk_020102ec_startAnimOnce(Obj *o, s32 a, u32 b, u32 c);
s32 AnimFrameCtrl_isFinished(void *p);
s32 CommManager_isLocalSlot(void *g, s32 a);
s32 Unk_02007694_getActionDonePriority(Obj *o, s32 a);
void PlayerActor_requestWait(Obj *o, s32 a, s32 b, s32 c);
s32 Unk_02006d14_testActionFlag(Obj *o, u32 a);
void Unk_02006d14_clearActionFlag(Obj *o, u32 a);
s32 Math_Atan2(s32 a, s32 b);
s32 Vec_DistXZ(void *a, void *b);
void FieldPos_FromUnitCenter(V3 *out, u32 a, u32 b);
void FieldPos_ToUnit(s32 *a, s32 *b, V3 *v);
void FieldPos_SnapToUnitCenter(V3 *out, V3 *in);
void Unk_020102ec_setSubCollider(Obj *o, V3 *v, s32 a, s32 b);
s32 ActorCollider_submit(void *p);
s32 PlayerActor_DecreaseClamped(s32 a, s32 b, s32 c);
void Unk_020102ec_setSpeed(Obj *o, s32 *a);
s32 Effect_Create(u32 id, V3 *v, s16 *h, u32 z);
void PlayerActor_GetFrontUnitCenter(V3 *out, Obj *o);
void Unk_02006d14_turnToward(Obj *o, s32 a);
s32 PlayerActor_OffsetByAngle(V3 *out, Obj *o, void *pos, void *ang, void *arg);
s32 PlayerActor_pushRequest(Obj *o, Msg *m);
void HeldItemModel_PlayAnim(void *p, u32 a, u32 b, u32 c);
void PlayerActor_ApproachAngle(void *p, s32 a, s32 b, s32 c, s32 d);
void WorldCurve_ToCurved(V3 *a, V3 *b);
void Pocket_AddFoundItem(s16 *p);
s32 MenuCtrl_OpenPocketsFullInsect(u32 a);
s32 MenuCtrl_IsFinished();
s32 MenuCtrl_IsResultOk();
void Character_detachTalkRequest(Obj *o, Sec *s);
void TalkRequest_FinishPlayerMessage();
s32 Random_GlobalBelow(s32 a);

s32 PlayerActor_ShovelDispatch(Obj *o, V3C v, s32 a);
void PlayerActor_ApplyHoldOffset(S30 *p, s32 a);
void HeldInsect_Remove(u8 id, s32 a);
void HeldInsect_Release(u8 id, s32 a);
s32 HeldInsect_GetStage(u8 id);
V3 *HeldInsect_GetPos(u8 id);
void HeldInsect_SetHandMatrix(u8 id, s16 *a, S30 *p, s32 f);
void PlayerActor_InsectStoreSetNetAngle(u8 *p, s32 a);
void PlayerActor_InsectStoreSetNetState(u8 *p, s32 a);
s32 PlayerActor_InsectStoreGetNetState(u8 *p);
s32 PlayerActor_InsectStoreGetNetAngle(u8 *p);

s32 PlayerActor_RequestShovelWait(Obj *o, Pair p, s32 id, s16 e);
void PlayerActor_ShovelWaitSetArgs(u8 *d, Pair v);
void PlayerActor_ShovelWaitGetNetData(u8 *p, Pair *out);
void PlayerActor_ShovelWaitSetNetData(u8 *p, Pair *v);
void PlayerActor_ShovelWaitSetWork(u8 *p, Pair *v);
void PlayerActor_ShovelReadyTurn(Obj *o);
void PlayerActor_ShovelReadyCheckEnd(Obj *o);
void PlayerActor_ShovelReadyTrackTarget(Obj *o);
void PlayerActor_ShovelReadyCheckEndRemote(Obj *o);
void PlayerActor_ShovelReadyGetNetData(u8 *src, u8 *a, u8 *b, u8 *c);
void PlayerActor_ShovelReadySetNetData(u8 *p, u8 a, u8 b, u32 c);
void PlayerActor_ShovelReadySetWork(Rec *r, V3C v, s32 c, u32 d);
s32 PlayerActor_RequestShovelReadyAt(Obj *o, u8 *a, u8 *b, u8 *c, s32 id, s32 e);
void PlayerActor_ShovelReadySetArgs(u8 *p, u8 a, u8 b, u32 c);
namespace ovcall {
s32 PlayerActor_InsectStoreUpdate(Obj *o);
}
void PlayerActor_InsectStoreUpdate(Obj *o);
}

static inline BOOL Unk_ov003_0220b330_IsZero(s32 v) {
    return v == 0 ? TRUE : FALSE;
}

// forward declarations (functions are emitted in descending address order)
extern "C" void PlayerActor_ShovelWaitTrackTarget(Obj *o);
extern "C" s32 PlayerActor_NetShovelWait(Obj *o, s16 a);
extern "C" void PlayerActor_SetupShovelWait(Obj *o, Msg *r);
extern "C" void PlayerActor_ShovelWaitGetNetData(u8 *p, Pair *out);
extern "C" void PlayerActor_ShovelWaitSetNetData(u8 *p, Pair *v);
extern "C" void PlayerActor_ShovelWaitSetWork(u8 *p, Pair *v);
extern "C" s32 PlayerActor_RequestShovelWait(Obj *o, Pair p, s32 id, s16 e);
extern "C" void PlayerActor_ShovelWaitSetArgs(u8 *d, Pair v);
extern "C" void PlayerActor_MainShovelReady(Obj *o);
extern "C" void PlayerActor_ShovelReadyCheckEndRemote(Obj *o);
extern "C" void PlayerActor_ShovelReadyCheckEnd(Obj *o);
extern "C" void PlayerActor_ShovelReadyTrackTarget(Obj *o);
extern "C" void PlayerActor_ShovelReadyTurn(Obj *o);
extern "C" s32 PlayerActor_NetShovelReady(Obj *o, s32 a);
extern "C" void PlayerActor_SetupShovelReady(Obj *o, Msg *r);
extern "C" void PlayerActor_ShovelReadyGetNetData(u8 *src, u8 *a, u8 *b, u8 *c);
extern "C" void PlayerActor_ShovelReadySetNetData(u8 *p, u8 a, u8 b, u32 c);
extern "C" void PlayerActor_ShovelReadySetWork(Rec *r, V3C v, s32 c, u32 d);
extern "C" s32 PlayerActor_RequestShovelReadyAt(Obj *o, u8 *a, u8 *b, u8 *c, s32 id, s32 e);
extern "C" s32 PlayerActor_RequestShovelReady(Obj *o, s32 a, s16 b);
extern "C" void PlayerActor_ShovelReadySetArgs(u8 *p, u8 a, u8 b, u32 c);
extern "C" void PlayerActor_MainInsectStore(Obj *o);
extern "C" void PlayerActor_InsectStoreUpdate(Obj *o);
}

namespace ns_0220ba90 {




struct Unk_ov003_0220bc84_Bits {
    u32 a : 12;
    u32 f : 16;
    u32 b : 4;
};

struct InsectShowCatchWork {
    /* 0x0 */ s32 effect;
    /* 0x4 */ u16 unk_04;
    /* 0x6 */ u8 showMode;
    /* 0x7 */ u8 insectSlot;
    /* 0x8 */ u8 insectKind;
    /* 0x9 */ u8 step;
    /* 0xa */ u8 catalogWasFull;
};


typedef PlayerActor Obj;
typedef VecFx32 V3;
typedef Mtx43 T48;
typedef PlayerActionRequest Msg;
extern "C" void _ZN19PlayerActionRequest6assignEiis(Msg *self, u32 a, u32 b, u32 c);
typedef InsectShowCatchWork State;

extern "C" {
extern void *gCommManager;

void Unk_020102ec_advanceAnim(Obj *o);
s32 Unk_02006d14_netFollowTransform(Obj *o);
void Unk_020102ec_updateBodyCollider(Obj *o);
void Unk_02006d14_calcHandMtx(Obj *o);
void Unk_02006d14_turnToCamera(Obj *o, s32 a);
s32 CommManager_isLocalSlot(void *g, s32 a);
s32 Unk_02007694_getActionDonePriority(Obj *o, s32 a);
void Unk_020102ec_startAnim(Obj *o, s32 a, u32 b, u32 c);
void Unk_020102ec_startAnimOnce(Obj *o, s32 a, u32 b, u32 c);
void HeldItemModel_PlayAnim(void *p, s32 a, s32 b, s32 c);
void Unk_02006d14_playSe(Obj *o, u32 a);
void Unk_02006d14_setActionFlag(Obj *o, u32 a);
void Unk_02006d14_clearActionFlag(Obj *o, u32 a);
s32 Unk_02006d14_testActionFlag(Obj *o, u32 a);
s32 PlayerActor_pushRequest(Obj *o, Msg *m);
void PlayerActor_requestWait(Obj *o, s32 a, s32 b, s32 c);
void Unk_02007694_requestAct05(Obj *o, s32 a, s32 b, s32 c);
void Unk_02006d14_requestAct76(Obj *o, s32 a, s32 b, s32 c, s32 d, s32 e);
void PlayerActor_ApproachAngle(void *p, s32 a, s32 b, s32 c, s32 d);
void WorldCurve_FromCurved(V3 *a, V3 *b);
s32 Effect_Create(s32 a, V3 *v, void *p, s32 b);
void Effect_SetPosition(s32 a, V3 *v, void *p, s32 b);
void Effect_End(s32 a);
s16 Math_Atan2(s32 a, s32 b);
s32 Vec_DistXZ(void *a, void *b);
s32 Random_GlobalBelow(s32 a);
s32 TalkRequest_AddPlayerMessage();
void Character_attachTalkRequest(Obj *o, MsgRequest *b);
void Character_detachTalkRequest(Obj *o, MsgRequest *b);
void MsgRequest_setFileName(void *p, void *q);
void Catalog_AddCreature(s16 *p);
void Camera_SetMode4();
void Camera_SetModeDefault();
void TalkRequest_FinishPlayerMessage();
s32 Catalog_HasAllInsects();
s32 Pocket_FindEmpty();
s32 FieldAction_FindDropUnit(s32 a, s32 *p);
void Bgm_Release(s32 a);
void Bgm_ReleasePriority(s32 a);
void Bgm_RequestSilence(s32 a, s32 b, s32 c);
void Bgm_Request(s32 a, s32 b, s32 c, s32 d);
void Hud_GetCountdown();
void HudCountdown_incCountB();
void VillagerTrend_OnInsectCaught(void *p);
u32 NetBuf_ReadS16B(u8 *p);
void NetBuf_WriteS16B(u8 *p, u32 a);

void Insect_FinishCatch(u32 a);
void PlayerActor_ApplyHoldOffset(T48 *t, V3 *d);
void HeldInsect_Start(u32 a, u32 b);
s32 HeldInsect_Release(u32 a, s32 b);
s32 HeldInsect_GetStage(u32 a);
V3 *HeldInsect_GetPos(u8 a);
void HeldInsect_SetHandMatrix(u32 a, s16 *p, T48 *t, s32 b);
u32 PlayerActor_InsectShowCatchGetNetState(u8 *p);
s32 PlayerActor_InsectShowCatchGetNetAngle(u8 *p);
void PlayerActor_InsectShowCatchSetNetAngle(u8 *p, s32 a);
void PlayerActor_InsectShowCatchSetNetState(u8 *p, u32 a);
void PlayerActor_InsectShowCatchGetNetData(u8 *p, u8 *a, u8 *b, u8 *c, u8 *d, u32 *e);
void PlayerActor_InsectShowCatchSetNetData(u8 *p, u32 a, u32 b, u32 c, u32 d, s32 e);
void PlayerActor_RequestInsectShowCatch(Obj *o, u32 a, u32 b, u32 c, s32 d, s32 e);

void PlayerActor_EndInsectStore(Obj *o);
s32 PlayerActor_NetInsectStore(Obj *o, s32 a);
void PlayerActor_SetupInsectStore(Obj *o, Msg *r);
u32 PlayerActor_InsectStoreGetNetAngle(u8 *p);
u32 PlayerActor_InsectStoreGetNetState(u8 *p);
void PlayerActor_InsectStoreGetNetData(u8 *p, u8 *a, u8 *b, u16 *c);
void PlayerActor_InsectStoreSetNetAngle(u8 *p, u32 a);
void PlayerActor_InsectStoreSetNetState(u8 *p, u32 a);
void PlayerActor_InsectStoreSetNetData(u8 *p, u32 a, u32 b, u32 c);
s32 PlayerActor_RequestInsectStore(Obj *o, u32 a, u32 b, s32 id, s32 e);
void PlayerActor_MainInsectShowCatch(Obj *o);
namespace ovcall {
void PlayerActor_InsectShowCatchUpdate(Obj *o);
}
void PlayerActor_InsectShowCatchUpdate(Obj *o);
void PlayerActor_EndInsectShowCatch(Obj *o);
void PlayerActor_NetInsectShowCatch(Obj *o, s32 a);
void PlayerActor_SetupInsectShowCatch(Obj *o, Msg *r);
}

// forward declarations (functions are emitted in descending address order)
extern "C" void PlayerActor_EndInsectStore(Obj *o);
extern "C" s32 PlayerActor_NetInsectStore(Obj *o, s32 a);
extern "C" void PlayerActor_SetupInsectStore(Obj *o, Msg *r);
extern "C" u32 PlayerActor_InsectStoreGetNetAngle(u8 *p);
extern "C" u32 PlayerActor_InsectStoreGetNetState(u8 *p);
extern "C" void PlayerActor_InsectStoreGetNetData(u8 *p, u8 *a, u8 *b, u16 *c);
extern "C" void PlayerActor_InsectStoreSetNetAngle(u8 *p, u32 a);
extern "C" void PlayerActor_InsectStoreSetNetState(u8 *p, u32 a);
extern "C" void PlayerActor_InsectStoreSetNetData(u8 *p, u32 a, u32 b, u32 c);
extern "C" s32 PlayerActor_RequestInsectStore(Obj *o, u32 a, u32 b, s32 id, s32 e);
extern "C" void PlayerActor_MainInsectShowCatch(Obj *o);
extern "C" void PlayerActor_InsectShowCatchUpdate(Obj *o);
extern "C" void PlayerActor_EndInsectShowCatch(Obj *o);
extern "C" void PlayerActor_NetInsectShowCatch(Obj *o, s32 a);
extern "C" void PlayerActor_SetupInsectShowCatch(Obj *o, Msg *r);
}

namespace ns_0220c448 {

struct Unk_ov003_0220c448_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};


class Unk_ov003_0220c768_A {
public:
    // ctor CollisionTag_Construct, dtor CollisionTag_Destruct are called explicitly
    u8 pad_00[0x14];
};

extern "C" void GroundInfo_initAtPos(GroundInfoBase *self, void *v, s32 a, s32 b);
extern "C" void GroundInfo_Destruct(GroundInfoBase *self);

typedef PlayerActor Obj;
typedef VecFx32Ctor V3;
typedef PlayerActionRequest Msg;
extern "C" void _ZN19PlayerActionRequest6assignEiis(Msg *self, u32 a, u32 b, u32 c);
typedef Unk_ov003_0220c4ac_Rec Rec;

extern "C" {
extern void *gCommManager;
extern void *gSceneBlockMap;
extern u8 data_ov003_02230ad4[];
extern u8 data_ov003_02230adc[];
extern u8 data_ov003_02230ae0[];
extern s16 data_02135f44[];

u32 NetBuf_ReadS16B(void *p);
void NetBuf_WriteS16B(void *p, s32 a);
s32 PlayerActor_pushRequest(Obj *o, Msg *m);
s32 CommManager_isLocalSlot(void *g, s32 a);
s32 AnimFrameCtrl_isFinished(void *p);
s32 AnimFrameCtrl_hasPassedFrame(void *p, s32 a);
void Unk_020102ec_moveWithCollision(Obj *o);
void Unk_020102ec_updateBodyCollider(Obj *o);
s32 Unk_02006d14_netFollowTransform(Obj *o);
void WorldCurve_FromCurved(V3 *a, V3 *b);
u8 *HeldItemModel_GetModel(void *p);
s32 Unk_02007694_getActionDonePriority(Obj *o, s32 a);
s32 PlayerActor_requestWait(Obj *o, s32 a, s32 b, s32 c);
s32 PlayerActor_DecreaseClamped(s32 a, s32 b, s32 c);
void Unk_020102ec_setSpeed(Obj *o, s32 *a);
s32 Effect_Create(s32 a, void *b, void *c, s32 d);
void CollisionTag_Construct(void *p);
void CollisionTag_Destruct(void *p);
s32 Collision_TestSegment(void *p, V3 *a, V3 *b, s32 c);
s32 Unk_02006d14_setActionFlag(Obj *o, u32 a);
s32 Unk_02006d14_playSe(Obj *o, u32 a);
void HeldItemModel_PlayAnim(void *p, s32 a, s32 b, s32 c);
void FieldPos_ToUnit(s32 *a, s32 *b, V3 *c);
void Flower_PlayTrampleFx(void *p);
s32 PlayerActor_OffsetByAngle(V3 *out, Obj *o, void *pos, void *ang, void *arg);
s32 Ground_GetHeightAt(V3 *a, s32 *b, s32 c);
void FieldPos_SnapToUnitCenter(V3 *a, V3 *b);
u16 *BlockMap_GetItemPtrAtPos(void *grid, V3 *v, u32 a);
s32 Math_Atan2(s32 a, s32 b);
s32 Math_AngleDiffAbs(s32 a, s32 b);
s32 func_01ffcb0c(s32 a, s32 b);

s32 Insect_GetCatchResult(s32 a, u32 b);
s32 Insect_FinishCatch(s32 a);
s32 PlayerActor_CheckToolHitActor(Obj *o);
void PlayerActor_BugNetSwingTurn(Obj *o);
void PlayerActor_BugNetSwingUpdate(Obj *o);
void PlayerActor_BugNetSwingAdvanceAnim(Obj *o);
void PlayerActor_BugNetSwingTrackTarget(Obj *o);

void PlayerActor_BugNetSwingDecelerate(Obj *o);
void PlayerActor_BugNetSwingCheckEnd(Obj *o);
void PlayerActor_BugNetSwingUpdateRemote(Obj *o);
s32 PlayerActor_BugNetSwingCheckWall(Obj *o);
s32 PlayerActor_BugNetSwingCheckGround(Obj *o, V3 *a, V3 *b, V3 *c);
s32 PlayerActor_RequestInsectShowCatch(Obj *o, u32 a, u32 b, u32 c, s32 d, s16 e);
void PlayerActor_BugNetSwingGetSweep(Obj *o, V3 *a, V3 *b, V3 *c);
s32 PlayerActor_BugNetSwingCanReach(Obj *o, V3 *a, V3 *b, u8 *c);
}

// forward declarations (functions are emitted in descending address order)
extern "C" u32 PlayerActor_InsectShowCatchGetNetAngle(void *p);
extern "C" u32 PlayerActor_InsectShowCatchGetNetState(u8 *p);
extern "C" void PlayerActor_InsectShowCatchGetNetData(u8 *p, u8 *a, u8 *b, u8 *c, u8 *d, u16 *e);
extern "C" void PlayerActor_InsectShowCatchSetNetAngle(void *p, s32 a);
extern "C" void PlayerActor_InsectShowCatchSetNetState(u8 *p, u32 a);
extern "C" void PlayerActor_InsectShowCatchSetNetData(u8 *p, u32 a, u32 b, u32 c, u8 d, s16 e);
extern "C" s32 PlayerActor_RequestInsectShowCatch(Obj *o, u32 a, u32 b, u32 c, s32 d, s16 e);
extern "C" void PlayerActor_MainBugNetSwing(Obj *o);
extern "C" void PlayerActor_BugNetSwingCheckEnd(Obj *o);
extern "C" void PlayerActor_BugNetSwingDecelerate(Obj *o);
extern "C" void PlayerActor_BugNetSwingUpdateRemote(Obj *o);
extern "C" s32 PlayerActor_BugNetSwingCheckGround(Obj *o, V3 *a, V3 *b, V3 *c);
extern "C" s32 PlayerActor_BugNetSwingCheckWall(Obj *o);
extern "C" s32 PlayerActor_BugNetSwingCanReach(Obj *o, V3 *a, V3 *b, u8 *c);
extern "C" s32 PlayerActor_BugNetSwingCheckHit(Obj *o, u8 *a, V3 *b, u8 *c);
extern "C" void PlayerActor_BugNetSwingGetSweep(Obj *o, V3 *a, V3 *b, V3 *out);
}

namespace ns_0220cd4c {

struct Unk_ov003_0220cd4c_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

struct BugNetSwingWork {
    u8 swingHit;
    u8 pad_01;
    s16 targetAngle;
    u8 caughtInsect;
};




struct Unk_ov003_0220d114_Ent {
    u8 v[20];
};

typedef PlayerActor Obj;
typedef VecFx32Ctor V3;
typedef Mtx43 Blk;
typedef PlayerActionRequest Msg;
extern "C" void _ZN19PlayerActionRequest6assignEiis(Msg *self, s32 a, s32 b, s32 c);
typedef FishShadow Act;

extern "C" {
extern void *gCommManager;
// 0x022349e6 is byte 0x12 of the record table sFishSizeClassParams (unit unk_ov003_0221ffb8)
extern u8 sFishSizeClassParams[];
#define data_ov003_022349e6 (sFishSizeClassParams + 0x12)
extern u8 data_ov003_02230ac4[];
extern u8 data_ov003_02230ac8[];

s32 AnimFrameCtrl_isFinished(void *p);
void WorldCurve_FromCurved(V3 *a, V3 *b);
void PlayerActor_GetHeldItem(u16 *out, Obj *o);
s32 BugNet_HitTest(V3 *a, V3 *b, s32 c, u8 *d, s32 e);
void FieldInsect_GetPosAndKind(V3 *v, u32 a);
u32 FieldInsect_IsTreeKind(u32 a);
s32 PlayerActor_BugNetSwingCheckHit(Obj *o, u8 *a, V3 *v, u8 *b);
s32 PlayerActor_BugNetSwingGetSweep(Obj *o, V3 *a, V3 *b, V3 *c);
s32 PlayerActor_BugNetSwingCheckGround(Obj *o, V3 *a, V3 *b, V3 *c);
s32 Insect_TryCatch(u32 a);
void Unk_02006d14_playSe(Obj *o, u32 a);
s32 Math_Atan2(s32 a, s32 b);
s32 Math_AngleDiffAbs(s32 a, s32 b);
void PlayerActor_GetFrontPoint(V3 *out, Obj *o);
void Unk_020102ec_setSubCollider(Obj *o, V3 *v, s32 a, s32 b);
void ActorCollider_submit(void *p);
void Unk_02006d14_turnToward(Obj *o, s32 a);
void Unk_020102ec_advanceAnim(Obj *o);
void Unk_020102ec_startAnimOnce(Obj *o, s32 a, u32 b, u32 c);
s32 HeldItemModel_PlayAnim(void *p, u32 a, u32 b, u32 c);
s32 PlayerActor_pushRequest(Obj *o, Msg *m);
void Unk_02006d14_netFollowTransform(Obj *o);
void Unk_020102ec_updateBodyCollider(Obj *o);
s32 CommManager_isLocalSlot(void *g, u32 a);
s32 Unk_02007694_getActionDonePriority(Obj *o, s32 a);
void Unk_020102ec_startAnim(Obj *o, s32 a, u32 b, u32 c);
Act *FishBobber_getFish(void *p);
void FishBobber_setFish(void *p, u32 a);
void FishBobber_endCatch(void *p);
void FishBobber_startCatchLift(void *p);
void PlayerActor_ApplyHoldOffset(Blk *b, u32 a);
void FishCatch_SetDisplayPosScale(Act *a, V3 *b, V3 *c);
void Fish_GetDisplayScale(V3 *v, s32 a);
void FishCatch_NetSendStored(u32 a);
void PlayerActor_requestWait(Obj *o, s32 a, s32 b, s32 c);
void Pocket_AddFoundItem(void *p);
s32 MenuCtrl_OpenPocketsFullFish(u32 a, Act *b);
s32 MenuCtrl_IsFinished();
s32 MenuCtrl_IsResultOk();
s32 Unk_02006d14_testActionFlag(Obj *o, u32 a);
void Unk_02006d14_clearActionFlag(Obj *o, u32 a);
void Character_detachTalkRequest(Obj *o, TalkMsgRequest *s);
void TalkRequest_FinishPlayerMessage();
s32 MenuCtrl_GetPocketsFullItem();
s32 FieldAction_RequestDropForAid(u32 a, u32 b);
void PlayerActor_RequestFishRelease(Obj *o, void *d, u32 a, u32 b, s32 c);
void Unk_02006d14_calcHandMtx(Obj *o);
void Unk_02006d14_turnToCamera(Obj *o, s32 a);

void PlayerActor_BugNetSwingUpdate(Obj *o);
void PlayerActor_BugNetSwingTrackTarget(Obj *o);
void PlayerActor_BugNetSwingTurn(Obj *o);
void PlayerActor_BugNetSwingAdvanceAnim(Obj *o);
s32 PlayerActor_NetBugNetSwing(Obj *o, s16 b);
void PlayerActor_SetupBugNetSwing(Obj *o, u8 *b);
s32 PlayerActor_RequestBugNetSwing(Obj *o, s32 a, s32 b);
void PlayerActor_MainFishStore(Obj *o);
void PlayerActor_FishStoreCheckEndRemote(Obj *o);
void PlayerActor_FishStoreUpdate(Obj *o);
s32 PlayerActor_NetFishStore(Obj *o, s16 a);
void PlayerActor_SetupFishStore(Obj *o, u8 *b);
u32 PlayerActor_FishStoreGetNetState(u8 *p);
void PlayerActor_FishStoreSetNetState(u8 *p, u32 v);
s32 PlayerActor_RequestFishStore(Obj *o, u32 a, s32 b, s32 c);
void PlayerActor_MainFishShowCatch(Obj *o);
void PlayerActor_FishShowCatchUpdate(Obj *o);
}

static inline BOOL Rng(volatile u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    u32 b = *p;
    u32 a = *p;
    if (a >= lo && b <= hi) r = TRUE;
    return r;
}

// forward declarations (functions are emitted in descending address order)
extern "C" void PlayerActor_BugNetSwingUpdate(Obj *o);
extern "C" void PlayerActor_BugNetSwingTrackTarget(Obj *o);
extern "C" void PlayerActor_BugNetSwingTurn(Obj *o);
extern "C" void PlayerActor_BugNetSwingAdvanceAnim(Obj *o);
extern "C" s32 PlayerActor_NetBugNetSwing(Obj *o, s16 b);
extern "C" void PlayerActor_SetupBugNetSwing(Obj *o, u8 *b);
extern "C" s32 PlayerActor_RequestBugNetSwing(Obj *o, s32 a, s32 b);
extern "C" void PlayerActor_MainFishStore(Obj *o);
extern "C" void PlayerActor_FishStoreCheckEndRemote(Obj *o);
extern "C" void PlayerActor_FishStoreUpdate(Obj *o);
extern "C" s32 PlayerActor_NetFishStore(Obj *o, s16 a);
extern "C" void PlayerActor_SetupFishStore(Obj *o, u8 *b);
extern "C" s32 PlayerActor_RequestFishStore(Obj *o, u32 a, s32 b, s32 c);
extern "C" void PlayerActor_MainFishShowCatch(Obj *o);
extern "C" u32 PlayerActor_FishStoreGetNetState(u8 *p);
extern "C" void PlayerActor_FishStoreSetNetState(u8 *p, u32 v);
}

namespace ns_0220d6f4 {

struct Unk_ov003_0220d6f4_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

struct FishShowCatchWork {
    s16 unk_00;
    u8 step;
    u8 fishId;
    u8 showMode;
    u8 catalogWasFull;
};




typedef PlayerActor Obj;
typedef VecFx32Ctor V3;
typedef Mtx43 Blk;
typedef PlayerActionRequest Msg;
extern "C" void _ZN19PlayerActionRequest6assignEiis(Msg *self, s32 a, s32 b, s16 c);
typedef FishShadow Act;
typedef TalkMsgRequest Sec;
typedef FishShowCatchWork Rec;

extern "C" {
extern void *gCommManager;
extern u8 data_ov003_02230ac0[];
extern u8 sFishEscapeSpeed[];

void Unk_02006d14_turnToCamera(Obj *o, s32 a);
Act *FishBobber_getFish(void *p);
void Fish_GetDisplayScale(V3 *v, s32 a);
void PlayerActor_ApplyHoldOffset(Blk *b, V3 *v);
void WorldCurve_FromCurved(V3 *a, V3 *b);
void FishCatch_SetDisplayPosScale(Act *a, V3 *b, V3 *c);
s32 AnimFrameCtrl_hasPassedFrame(void *p, u32 a);
void Camera_SetMode4();
s32 TalkRequest_AddPlayerMessage();
void Character_attachTalkRequest(Obj *o, Sec *s);
void Unk_02006d14_setActionFlag(Obj *o, u32 a);
void MsgRequest_setFileName(Sec *s, void *d);
void Catalog_AddCreature(u16 *p);
void Bgm_ReleasePriority(u32 a);
void Bgm_RequestSilence(u32 a, u32 b, u32 c);
void Bgm_Request(u32 a, u32 b, u32 c, u32 d);
s32 Catalog_HasAllFish();
s32 Pocket_FindEmpty();
s32 FieldAction_FindDropUnit(u32 a, u32 *b);
void Character_detachTalkRequest(Obj *o, Sec *s);
void Unk_02006d14_clearActionFlag(Obj *o, u32 a);
void TalkRequest_FinishPlayerMessage();
s32 PlayerActor_RequestFishStore(Obj *o, u32 a, s32 b, s32 c);
void Camera_SetModeDefault();
s32 FieldAction_RequestDropForAid(u32 a, u32 b);
void FishBobber_startCatchLift(void *p);
s32 Unk_02007694_getActionDonePriority(Obj *o, s32 a);
void PlayerActor_RequestFishRelease(Obj *o, void *d, u32 a, u32 b, s32 c);
void Unk_02006d14_requestAct76(Obj *o, u32 a, u32 b, u32 c, u32 d, s32 e);
s32 CommManager_isLocalSlot(void *g, u32 a);
void VillagerTrend_OnFishCaught(void *p);
void Hud_GetCountdown();
void HudCountdown_incCountA();
void Unk_020102ec_startAnimOnce(Obj *o, s32 a, u32 b, u32 c);
void HeldItemModel_PlayAnim(void *p, u32 a, u32 b, u32 c);
s32 PlayerActor_pushRequest(Obj *o, Msg *m);
void Unk_020102ec_advanceAnim(Obj *o);
s32 Unk_02006d14_netFollowTransform(Obj *o);
void Unk_020102ec_updateBodyCollider(Obj *o);
s32 AnimFrameCtrl_isFinished(void *p);
s32 FishBobber_isCatchLanded(void *p);
void Unk_02006d14_playSe(Obj *o, u32 a);
void Unk_020102ec_moveWithCollision(Obj *o);
s32 PlayerActor_DecreaseClamped(s32 a, s32 b, s32 c);
void Unk_020102ec_setSpeed(Obj *o, s32 *a);
void PlayerActor_requestWait(Obj *o, s32 a, s32 b, s32 c);
void Unk_02008040_requestAct79(Obj *o, s32 a, s32 b);
void PlayerActor_FishReelInSetArgs(u8 *p, u32 v);

void PlayerActor_FishShowCatchGetNetData(u8 *p, u8 *out);
void PlayerActor_FishShowCatchSetNetData(u8 *p, u32 v);
s32 PlayerActor_RequestFishShowCatch(Obj *o, u32 a, s32 b, s16 c);
void PlayerActor_FishLandCheckEnd(Obj *o);
s32 PlayerActor_RequestFishLand(Obj *o, s32 a, s16 b);
void PlayerActor_FishEscapeCheckEnd(Obj *o);
s32 PlayerActor_RequestFishEscape(Obj *o, s32 a, s16 b);
void PlayerActor_FishReelInCheckEnd(Obj *o);
void PlayerActor_FishReelInGetNetData(u8 *p, u8 *out);
void PlayerActor_FishReelInSetNetData(u8 *p, u32 v);
void PlayerActor_FishReelInSetWork(u8 *p, u32 v);
s32 PlayerActor_RequestFishReelIn(Obj *o, u32 a, s32 b, s16 c);

void PlayerActor_FishShowCatchUpdate(Obj *o);
void PlayerActor_NetFishShowCatch(Obj *o, s16 a);
void PlayerActor_SetupFishShowCatch(Obj *o, u8 *p);
void PlayerActor_MainFishLand(Obj *o);
s32 PlayerActor_NetFishLand(Obj *o, s16 a);
void PlayerActor_SetupFishLand(Obj *o);
void PlayerActor_MainFishEscape(Obj *o);
s32 PlayerActor_NetFishEscape(Obj *o, s16 a);
void PlayerActor_SetupFishEscape(Obj *o);
void PlayerActor_MainFishReelIn(Obj *o);
void PlayerActor_NetFishReelIn(Obj *o, s16 a);
void PlayerActor_SetupFishReelIn(Obj *o, u8 *p);
}

static inline BOOL Rng(volatile u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    u32 a = *p;
    u32 b = *p;
    if (a >= lo && b <= hi) r = TRUE;
    return r;
}

// forward declarations (functions are emitted in descending address order)
extern "C" void PlayerActor_FishShowCatchUpdate(Obj *o);
extern "C" void PlayerActor_NetFishShowCatch(Obj *o, s16 a);
extern "C" void PlayerActor_SetupFishShowCatch(Obj *o, u8 *p);
extern "C" void PlayerActor_FishShowCatchGetNetData(u8 *p, u8 *out);
extern "C" void PlayerActor_FishShowCatchSetNetData(u8 *p, u32 v);
extern "C" s32 PlayerActor_RequestFishShowCatch(Obj *o, u32 a, s32 b, s16 c);
extern "C" void PlayerActor_MainFishLand(Obj *o);
extern "C" void PlayerActor_FishLandCheckEnd(Obj *o);
extern "C" s32 PlayerActor_NetFishLand(Obj *o, s16 a);
extern "C" void PlayerActor_SetupFishLand(Obj *o);
extern "C" s32 PlayerActor_RequestFishLand(Obj *o, s32 a, s16 b);
extern "C" void PlayerActor_MainFishEscape(Obj *o);
extern "C" void PlayerActor_FishEscapeCheckEnd(Obj *o);
extern "C" s32 PlayerActor_NetFishEscape(Obj *o, s16 a);
extern "C" void PlayerActor_SetupFishEscape(Obj *o);
extern "C" s32 PlayerActor_RequestFishEscape(Obj *o, s32 a, s16 b);
extern "C" void PlayerActor_MainFishReelIn(Obj *o);
extern "C" void PlayerActor_FishReelInCheckEnd(Obj *o);
extern "C" void PlayerActor_NetFishReelIn(Obj *o, s16 a);
extern "C" void PlayerActor_SetupFishReelIn(Obj *o, u8 *p);
extern "C" void PlayerActor_FishReelInGetNetData(u8 *p, u8 *out);
extern "C" void PlayerActor_FishReelInSetNetData(u8 *p, u32 v);
extern "C" void PlayerActor_FishReelInSetWork(u8 *p, u32 v);
extern "C" s32 PlayerActor_RequestFishReelIn(Obj *o, u32 a, s32 b, s16 c);
}

namespace ns_0220e030 {




typedef PlayerActor Obj;
typedef VecFx32Ctor V3;
typedef PlayerActionRequest Msg;
extern "C" void _ZN19PlayerActionRequest6assignEiis(Msg *self, s32 a, s32 b, s16 c);
typedef Unk_ov003_0220e030_P2 P2;

extern "C" {
extern void *gCommManager;
extern u8 *data_021c1b3c;

s32 Unk_020102ec_advanceAnim(Obj *o);
s32 Unk_02006d14_netFollowTransform(Obj *o);
s32 Unk_020102ec_updateBodyCollider(Obj *o);
s32 Unk_020102ec_moveWithCollision(Obj *o);
s32 CommManager_isLocalSlot(void *g, u32 a);
s32 FishBobber_checkReelResult(void *p);
s32 FishBobber_tryHook(void *p);
s32 FishBobber_getFish(void *p);
s32 HeldItemModel_IsBobberLanded(void *p);
s32 Unk_02006d14_playSeAt(Obj *o, u32 a, void *b);
s32 Unk_02006d14_playSe(Obj *o, u32 a);
s32 Unk_02006d14_testActionFlag(Obj *o, u32 a);
s32 PlayerActor_pushRequest(Obj *o, Msg *m);
s32 Bgm_ReleasePriority(u32 a);
s32 Bgm_RequestSilence(u32 a, u32 b, u32 c);
s32 Unk_020102ec_startAnimOnce(Obj *o, s32 a, u32 b, u32 c);
s32 Unk_020102ec_startAnim(Obj *o, s32 a, u32 b, u32 c);
s32 HeldItemModel_PlayAnim(void *p, u32 a, u32 b, u32 c);
s32 Unk_02007694_getActionDonePriority(Obj *o, s32 a);
s32 BgmVolumeMixer_startFishDuck(void *p);
s32 BgmVolumeMixer_endFishDuck(void *p);
s32 Math_Atan2(s32 a, s32 b);
s32 PlayerActor_TurnAngle(u16 *a, s32 b);
s32 Unk_020102ec_setAngleY(Obj *o, u16 *a);
s32 FishBobber_setPos(void *p, V3 *v);
s32 FishBobber_setTargetPos(void *p, V3 *v);
s32 FishBobber_setState(void *p, u32 a);
s32 Scene_GetTouchPicker();
s32 TouchPick_GetGroundPos(s32 a, s32 b);
s32 PlayerActor_DecreaseClamped(s32 a, s32 b, s32 c);
s32 Unk_020102ec_setSpeed(Obj *o, s32 *a);
s32 AnimFrameCtrl_isFinished(void *p);
s32 AnimFrameCtrl_hasPassedFrame(void *p, u32 a);
s32 PlayerActor_requestWait(Obj *o, s32 a, s32 b, s32 c);
s32 Unk_02006d14_turnToward(Obj *o, s32 a);
s32 Camera_SetMode5();
s32 NetBuf_UnpackTriple20(void *p, s32 *a, s32 *b, s32 *c, u8 *d);
s32 NetBuf_PackTriple20(void *p, s32 a, s32 b, s32 c, u32 d);
s32 NetBuf_UnpackPair20(void *p, s32 *a, s32 *b);
s32 NetBuf_PackPair20(void *p, s32 a, s32 b);
s32 PlayerActor_RequestFishEscape(Obj *o, s32 a, s32 b);
s32 PlayerActor_RequestFishLand(Obj *o, s32 a, s32 b);
s32 PlayerActor_RequestFishReelIn(Obj *o, s32 a, s32 b, s32 c);
s32 FishShadow_OnRodPulled();
s32 FieldFish_ScareAround(void *p, s32 a);
s32 PlayerActor_AxeBrokenMessageUpdate(Obj *o);

void PlayerActor_FishReelInSetArgs(u8 *p, u32 v);
s32 PlayerActor_MainFishHook(Obj *o);
s32 PlayerActor_FishHookCheckResult(Obj *o);
s32 PlayerActor_NetFishHook(Obj *o, s16 a);
s32 PlayerActor_SetupFishHook(Obj *o);
s32 PlayerActor_RequestFishHook(Obj *o, s32 a, s16 b);
s32 PlayerActor_MainFishWait(Obj *o);
s32 PlayerActor_FishWaitCheckInput(Obj *o);
void PlayerActor_FishWaitOnBobberLand(Obj *o);
s32 PlayerActor_FishWaitFaceBobber(Obj *o);
void PlayerActor_FishWaitSyncBobber(Obj *o);
s32 PlayerActor_EndFishWait(Obj *o, s32 a);
s32 PlayerActor_NetFishWait(Obj *o, s16 a);
s32 PlayerActor_SetupFishWait(Obj *o);
void PlayerActor_FishWaitGetNetData(void *p, V3 *v, u8 *out);
s32 PlayerActor_FishWaitSetNetData(void *p, V3 *v, u8 c);
s32 PlayerActor_RequestFishWait(Obj *o, s32 a, s16 b);
s32 PlayerActor_MainFishCastFail(Obj *o);
s32 PlayerActor_FishCastFailCheckEnd(Obj *o);
s32 PlayerActor_FishCastFailUpdate(Obj *o);
s32 PlayerActor_NetFishCastFail(Obj *o, s16 a);
s32 PlayerActor_SetupFishCastFail(Obj *o);
s32 PlayerActor_RequestFishCastFail(Obj *o, s32 a, s16 b);
s32 PlayerActor_MainFishCast(Obj *o);
s32 PlayerActor_FishCastCheckEnd(Obj *o);
s32 PlayerActor_FishCastTurn(Obj *o);
s32 PlayerActor_FishCastUpdate(Obj *o);
s32 PlayerActor_NetFishCast(Obj *o, s16 a);
s32 PlayerActor_SetupFishCast(Obj *o, Msg *a);
s32 PlayerActor_FishCastGetNetData(void *p, s32 *a, s32 *b);
s32 PlayerActor_FishCastSetNetData(void *p, s32 a, s32 b);
s32 PlayerActor_RequestFishCast(Obj *o, V3 *v, s32 a, s16 b);
void PlayerActor_FishCastSetArgs(P2 *d, V3 *s);
s32 PlayerActor_MainAxeBrokenMessage(Obj *o);
}

// forward declarations (functions are emitted in descending address order)
extern "C" void PlayerActor_FishReelInSetArgs(u8 *p, u32 v);
extern "C" s32 PlayerActor_MainFishHook(Obj *o);
extern "C" s32 PlayerActor_FishHookCheckResult(Obj *o);
extern "C" s32 PlayerActor_NetFishHook(Obj *o, s16 a);
extern "C" s32 PlayerActor_SetupFishHook(Obj *o);
extern "C" s32 PlayerActor_RequestFishHook(Obj *o, s32 a, s16 b);
extern "C" s32 PlayerActor_MainFishWait(Obj *o);
extern "C" s32 PlayerActor_FishWaitCheckInput(Obj *o);
extern "C" void PlayerActor_FishWaitOnBobberLand(Obj *o);
extern "C" s32 PlayerActor_FishWaitFaceBobber(Obj *o);
extern "C" void PlayerActor_FishWaitSyncBobber(Obj *o);
extern "C" s32 PlayerActor_EndFishWait(Obj *o, s32 a);
extern "C" s32 PlayerActor_NetFishWait(Obj *o, s16 a);
extern "C" s32 PlayerActor_SetupFishWait(Obj *o);
extern "C" void PlayerActor_FishWaitGetNetData(void *p, V3 *v, u8 *out);
extern "C" s32 PlayerActor_FishWaitSetNetData(void *p, V3 *v, u8 c);
extern "C" s32 PlayerActor_RequestFishWait(Obj *o, s32 a, s16 b);
extern "C" s32 PlayerActor_MainFishCastFail(Obj *o);
extern "C" s32 PlayerActor_FishCastFailCheckEnd(Obj *o);
extern "C" s32 PlayerActor_FishCastFailUpdate(Obj *o);
extern "C" s32 PlayerActor_NetFishCastFail(Obj *o, s16 a);
extern "C" s32 PlayerActor_SetupFishCastFail(Obj *o);
extern "C" s32 PlayerActor_RequestFishCastFail(Obj *o, s32 a, s16 b);
extern "C" s32 PlayerActor_MainFishCast(Obj *o);
extern "C" s32 PlayerActor_FishCastCheckEnd(Obj *o);
extern "C" s32 PlayerActor_FishCastTurn(Obj *o);
extern "C" s32 PlayerActor_FishCastUpdate(Obj *o);
extern "C" s32 PlayerActor_NetFishCast(Obj *o, s16 a);
extern "C" s32 PlayerActor_SetupFishCast(Obj *o, Msg *a);
extern "C" s32 PlayerActor_FishCastGetNetData(void *p, s32 *a, s32 *b);
extern "C" s32 PlayerActor_FishCastSetNetData(void *p, s32 a, s32 b);
extern "C" s32 PlayerActor_RequestFishCast(Obj *o, V3 *v, s32 a, s16 b);
extern "C" void PlayerActor_FishCastSetArgs(P2 *d, V3 *s);
extern "C" s32 PlayerActor_MainAxeBrokenMessage(Obj *o);
}

namespace ns_0220e970 {

struct Unk_ov003_0220e970_P2 {
    s32 x, z;
};

struct Unk_ov003_0220e970_Pv {
    s32 x, z;
    Unk_ov003_0220e970_Pv() {}
    Unk_ov003_0220e970_Pv(s32 a, s32 b) {
        x = a;
        z = b;
    }
    Unk_ov003_0220e970_Pv(const Unk_ov003_0220e970_Pv &o) {
        x = o.x;
        z = o.z;
    }
};

struct Unk_ov003_0220e970_Mtx {
    s32 m[9];
    VecFx32 v;
};

struct Unk_ov003_0220e970_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};





typedef PlayerActor Obj;
typedef VecFx32 V3;
typedef PlayerActionRequest Msg;
extern "C" void _ZN19PlayerActionRequest6assignEiis(Msg *self, s32 a, s32 b, s16 c);
typedef Unk_ov003_0220e970_P2 P2;
typedef Unk_ov003_0220e970_Pv Pv;
typedef Unk_ov003_0220e970_Rec Rec;
typedef Unk_ov003_0220e970_Mtx Mtx;
typedef TalkMsgRequest Sec;

extern "C" {
extern void *gCommManager;
extern s16 data_02135f44[];

s32 CommManager_isLocalSlot(void *g, u32 a);
s32 PlayerActor_SetHoldableItem(s32 a, u32 b);
s32 Unk_02006d14_setActionFlag(Obj *o, u32 a);
s32 Unk_02006d14_clearActionFlag(Obj *o, u32 a);
s32 Unk_02006d14_testActionFlag(Obj *o, u32 a);
s32 Unk_02006d14_playSe(Obj *o, u32 a);
s32 Unk_02006d14_netSendClothesChange(Obj *o, u32 a, u32 b);
s32 Character_detachTalkRequest(Obj *o, Sec *s);
s32 Character_attachTalkRequest(Obj *o, Sec *s);
s32 MsgRequest_setFileName(Sec *s, void *d);
s32 TalkRequest_FinishPlayerMessage();
s32 TalkRequest_AddPlayerMessage();
s32 Unk_02007694_getActionDonePriority(Obj *o, s32 a);
s32 Unk_02008040_requestAct77(Obj *o, s32 a, s32 b, s32 c);
s32 PlayerActor_requestWait(Obj *o, s32 a, s32 b, s32 c);
s32 Camera_SetModeDefault();
s32 Camera_SetMode4();
s32 Bgm_ReleasePriority(u32 a);
s32 Bgm_RequestSilence(u32 a, u32 b, u32 c);
s32 Bgm_Request(u32 a, u32 b, u32 c, u32 d);
s32 Unk_020102ec_startAnim(Obj *o, s32 a, u32 b, u32 c);
s32 Unk_020102ec_startAnimOnce(Obj *o, s32 a, u32 b, u32 c);
s32 Unk_020102ec_advanceAnim(Obj *o);
s32 Unk_020102ec_moveWithCollision(Obj *o);
s32 Unk_020102ec_updateBodyCollider(Obj *o);
s32 Unk_020102ec_submitSceneCollider(Obj *o);
s32 AnimFrameCtrl_isFinished(void *p);
s32 AnimFrameCtrl_hasPassedFrame(void *p, u32 a);
s32 PendingUnit_ApplyAt(P2 *p, s32 a);
s32 WorldCurve_FromCurved(V3 *a, V3 *b);
s32 Effect_PlayById(s32 a, V3 *b, s32 c, s32 d);
s32 Effect_Create(s32 a, V3 *v, void *p, s32 b);
void MTX_MultVec43(V3 *a, Mtx *m, V3 *out);
s32 func_01ffcb0c(s32 a, s32 b);
s32 Unk_02006d14_turnToCamera(Obj *o, s32 a);
s32 Unk_02006d14_getHeldHoldableIndex(Obj *o);
s32 PlayerData_GetBySessionSlot(u32 a);
u16 *PlayerData_getHeldItem(s32 a);
s32 PlayerActor_Decelerate(s32 a, s32 b);
s32 Unk_020102ec_setSpeed(Obj *o, s32 *a);
s32 PlayerActor_GetHeldItem(u16 *out, Obj *o);
s32 FieldPos_FromUnitCenter(V3 *v, s32 a, s32 b);
s32 Tree_RequestChop(u32 a, P2 *p, s32 b);
s32 FieldItemFx_StartStrikeResult(P2 *p);
s32 Snowball_Break(void *q, s32 a);
s32 PlayerActor_ResumeWalkOrIdle(Obj *o);
s32 PlayerActor_AxeStrikeUpdate(Obj *o);
s32 PlayerActor_pushRequest(Obj *o, Msg *m);

s32 PlayerActor_EndAxeBrokenMessage(Obj *o);
void PlayerActor_AxeBrokenMessageUpdate(Obj *o);
s32 PlayerActor_NetAxeBrokenMessage(Obj *o, s16 a);
s32 PlayerActor_SetupAxeBrokenMessage(Obj *o);
void PlayerActor_AxeBrokenMessageInitWork(Rec *r);
s32 PlayerActor_RequestAxeBrokenMessage(Obj *o, s32 a, s16 b);
s32 PlayerActor_MainAxeBreak(Obj *o);
void PlayerActor_AxeBreakCheckEnd(Obj *o);
void PlayerActor_AxeBreakUpdate(Obj *o);
void PlayerActor_EndAxeBreak(Obj *o);
void PlayerActor_NetAxeBreak(Obj *o, s16 a);
s32 PlayerActor_SetupAxeBreak(Obj *o, Msg *a);
void PlayerActor_AxeBreakGetNetData(u8 *src, u8 *dst);
void PlayerActor_AxeBreakSetNetData(u8 *p, u32 v);
void PlayerActor_AxeBreakSetWork(Rec *r, u32 c, Pv p);
s32 PlayerActor_RequestAxeBreak(Obj *o, u32 a, Pv p, s32 c, s16 e);
void PlayerActor_AxeBreakSetArgs(Rec *r, u32 c, Pv p);
s32 PlayerActor_MainAxeChop(Obj *o);
void PlayerActor_AxeChopCheckEnd(Obj *o);
s32 PlayerActor_AxeChopHit(Obj *o);
s32 PlayerActor_AxeChopUpdate(Obj *o);
s32 PlayerActor_EndAxeChop(Obj *o);
void PlayerActor_NetAxeChop(Obj *o);
s32 PlayerActor_SetupAxeChop(Obj *o, Msg *a);
void PlayerActor_AxeChopSetWork(Rec *r, u32 a, u32 b, Pv p);
s32 PlayerActor_RequestAxeChop(Obj *o, u32 a, u32 b, Pv p, s32 c, s16 d);
void PlayerActor_AxeChopSetArgs(Rec *r, u32 a, u32 b, Pv p);
s32 PlayerActor_MainAxeStrike(Obj *o);
s32 PlayerActor_AxeStrikeCheckEnd(Obj *o);
void PlayerActor_AxeStrikeHit(Obj *o);
}

// forward declarations (functions are emitted in descending address order)
extern "C" s32 PlayerActor_EndAxeBrokenMessage(Obj *o);
extern "C" void PlayerActor_AxeBrokenMessageUpdate(Obj *o);
extern "C" s32 PlayerActor_NetAxeBrokenMessage(Obj *o, s16 a);
extern "C" s32 PlayerActor_SetupAxeBrokenMessage(Obj *o);
extern "C" s32 PlayerActor_RequestAxeBrokenMessage(Obj *o, s32 a, s16 b);
extern "C" s32 PlayerActor_MainAxeBreak(Obj *o);
extern "C" void PlayerActor_AxeBreakCheckEnd(Obj *o);
extern "C" void PlayerActor_AxeBreakUpdate(Obj *o);
extern "C" void PlayerActor_EndAxeBreak(Obj *o);
extern "C" void PlayerActor_NetAxeBreak(Obj *o, s16 a);
extern "C" s32 PlayerActor_SetupAxeBreak(Obj *o, Msg *a);
extern "C" s32 PlayerActor_RequestAxeBreak(Obj *o, u32 a, Pv p, s32 c, s16 e);
extern "C" s32 PlayerActor_MainAxeChop(Obj *o);
extern "C" void PlayerActor_AxeChopCheckEnd(Obj *o);
extern "C" s32 PlayerActor_AxeChopHit(Obj *o);
extern "C" s32 PlayerActor_AxeChopUpdate(Obj *o);
extern "C" s32 PlayerActor_EndAxeChop(Obj *o);
extern "C" s32 PlayerActor_SetupAxeChop(Obj *o, Msg *a);
extern "C" s32 PlayerActor_RequestAxeChop(Obj *o, u32 a, u32 b, Pv p, s32 c, s16 d);
extern "C" s32 PlayerActor_MainAxeStrike(Obj *o);
extern "C" s32 PlayerActor_AxeStrikeCheckEnd(Obj *o);
extern "C" void PlayerActor_AxeStrikeHit(Obj *o);
extern "C" void PlayerActor_AxeBrokenMessageInitWork(Rec *r);
extern "C" void PlayerActor_AxeBreakGetNetData(u8 *src, u8 *dst);
extern "C" void PlayerActor_AxeBreakSetNetData(u8 *p, u32 v);
extern "C" void PlayerActor_AxeBreakSetWork(Rec *r, u32 c, Pv p);
extern "C" void PlayerActor_AxeBreakSetArgs(Rec *r, u32 c, Pv p);
extern "C" void PlayerActor_NetAxeChop(Obj *o);
extern "C" void PlayerActor_AxeChopSetWork(Rec *r, u32 a, u32 b, Pv p);
extern "C" void PlayerActor_AxeChopSetArgs(Rec *r, u32 a, u32 b, Pv p);
}

namespace ns_0220f314 {

struct Unk_ov003_0220f314_P2 {
    s32 x, z;
    u8 flag;
};



struct AxeSwingWork {
    VecFx32Ctor v;
    s16 h;
};


typedef PlayerActor Obj;
typedef VecFx32Ctor V3;
typedef PlayerActionRequest Msg;
extern "C" void _ZN19PlayerActionRequest6assignEiis(Msg *self, s32 a, s32 b, s16 c);
typedef Unk_ov003_0220f314_P2 P2;
typedef Vec2 Pair;

extern "C" {
extern void *gCommManager;

s32 Unk_020102ec_advanceAnim(Obj *o);
s32 Unk_02006d14_netFollowTransform(Obj *o);
s32 Unk_020102ec_updateBodyCollider(Obj *o);
s32 Unk_020102ec_moveWithCollision(Obj *o);
s32 CommManager_isLocalSlot(void *g, u32 a);
s32 Unk_02006d14_testActionFlag(Obj *o, u32 a);
s32 Unk_02006d14_playSe(Obj *o, u32 a);
s32 PlayerActor_pushRequest(Obj *o, Msg *m);
s32 Unk_020102ec_startAnimOnce(Obj *o, s32 a, u32 b, u32 c);
s32 Unk_020102ec_startAnim(Obj *o, s32 a, u32 b, u32 c);
s32 Unk_02007694_getActionDonePriority(Obj *o, s32 a);
s32 Math_Atan2(s32 a, s32 b);
s32 PlayerActor_Decelerate(s32 a, s32 b);
s32 PlayerActor_DecreaseClamped(s32 a, s32 b, s32 c);
s32 Unk_020102ec_setSpeed(Obj *o, s32 *a);
s32 AnimFrameCtrl_isFinished(void *p);
s32 AnimFrameCtrl_hasPassedFrame(void *p, u32 a);
s32 PlayerActor_requestWait(Obj *o, s32 a, s32 b, s32 c);
s32 Unk_02006d14_turnToward(Obj *o, s32 a);
s32 NetBuf_UnpackPair20(void *p, s32 *a, s32 *b);
s32 NetBuf_PackPair20(void *p, s32 a, s32 b);
s32 Unk_02006d14_getHeldHoldableIndex(Obj *o);
void PlayerActor_GetFrontPoint(V3 *out, Obj *o);
void PlayerActor_GetFrontUnitCenter(V3 *out, Obj *o);
void Unk_020102ec_setSubCollider(Obj *o, V3 *v, s32 a, s32 b);
void ActorCollider_submit(void *p);
s32 Effect_Create(s32 a, void *b, void *c, s32 d);
s32 Random_GlobalBelow(s32 a);
s32 Ground_GetHeightAt(V3 *a, s32 *b, s32 c);
void Unk_02006d14_clearActionFlag(Obj *o, u32 a);
void Unk_02006d14_setActionFlag(Obj *o, u32 a);
s32 PlayerActor_AxeClassifyTarget(Obj *o, u8 *pa, u8 *pb, s32 *out);
s32 PlayerActor_RequestAxeBreak(Obj *o, s32 a, s32 *b, s32 c, s32 d);
s32 PlayerActor_RequestAxeChop(Obj *o, s32 a, s32 b, s32 *c, s32 d, s32 e);
s32 PlayerActor_AxeStrikeHit(Obj *o);

s32 PlayerActor_AxeStrikeUpdate(Obj *o);
s32 PlayerActor_EndAxeStrike(Obj *o);
void PlayerActor_NetAxeStrike(Obj *o, s32 a);
s32 PlayerActor_SetupAxeStrike(Obj *o, Msg *a);
void PlayerActor_AxeStrikeGetNetData(u8 *s, u8 *a, u8 *b, u8 *c, u8 *d, u8 *e);
void PlayerActor_AxeStrikeSetNetData(u8 *d, u8 a, u8 b, u8 c, u8 e, u8 f);
void PlayerActor_AxeStrikeSetWork(u8 *d, u32 x, u32 y, s32 *s);
s32 PlayerActor_RequestAxeStrike(Obj *o, u32 a, u32 b, s32 *c, s32 d, s32 e);
void PlayerActor_AxeStrikeSetArgs(u8 *d, u32 x, u32 y, s32 *s);
s32 PlayerActor_MainAct48(Obj *o);
s32 PlayerActor_Act48CheckEnd(Obj *o);
s32 PlayerActor_Act48Update(Obj *o);
s32 PlayerActor_NetAct48(Obj *o, s16 b);
s32 PlayerActor_SetupAct48(Obj *o);
s32 PlayerActor_RequestAct48(Obj *o, s32 a, s16 b);
s32 PlayerActor_MainAxeFollowThrough(Obj *o);
s32 PlayerActor_AxeDispatch(Obj *o, u8 a, ...);
s32 PlayerActor_AxeFollowThroughTrackTarget(Obj *o);
s32 PlayerActor_NetAxeFollowThrough(Obj *o, s16 b);
s32 PlayerActor_SetupAxeFollowThrough(Obj *o);
s32 PlayerActor_RequestAxeFollowThrough(Obj *o, s32 a, s16 b);
void PlayerActor_MainAxeSwing(Obj *o);
s32 PlayerActor_AxeSwingCheckEndRemote(Obj *o);
s32 PlayerActor_AxeSwingCheckEnd(Obj *o);
s32 PlayerActor_AxeSwingTrackTarget(Obj *o);
s32 PlayerActor_AxeSwingTurn(Obj *o);
s32 PlayerActor_NetAxeSwing(Obj *o, s32 a);
s32 PlayerActor_SetupAxeSwing(Obj *o, Msg *a);
void PlayerActor_AxeSwingGetNetData(void *p, s32 *a, s32 *b, u8 *c);
s32 PlayerActor_AxeSwingSetNetData(void *p, s32 a, s32 b, u8 c);
void PlayerActor_AxeSwingSetWork(u8 *d, V3 *v, s32 a);
s32 PlayerActor_RequestAxeSwingAt(Obj *o, s32 *a, s32 *b, u8 *c, s32 d, s32 e);
s32 PlayerActor_RequestAxeSwing(Obj *o, s32 a, s16 b);
void PlayerActor_AxeSwingSetArgs(u8 *d, s32 a, s32 b, u32 c);
}

static inline BOOL Unk_ov003_0220fa70_Ge(s32 v) {
    if (v >= 0x1000) {
        return TRUE;
    }
    return FALSE;
}

// forward declarations (functions are emitted in descending address order)
extern "C" s32 PlayerActor_AxeStrikeUpdate(Obj *o);
extern "C" s32 PlayerActor_EndAxeStrike(Obj *o);
extern "C" void PlayerActor_NetAxeStrike(Obj *o, s32 a);
extern "C" s32 PlayerActor_SetupAxeStrike(Obj *o, Msg *a);
extern "C" s32 PlayerActor_RequestAxeStrike(Obj *o, u32 a, u32 b, s32 *c, s32 d, s32 e);
extern "C" s32 PlayerActor_MainAct48(Obj *o);
extern "C" s32 PlayerActor_Act48CheckEnd(Obj *o);
extern "C" s32 PlayerActor_Act48Update(Obj *o);
extern "C" s32 PlayerActor_NetAct48(Obj *o, s16 b);
extern "C" s32 PlayerActor_SetupAct48(Obj *o);
extern "C" s32 PlayerActor_RequestAct48(Obj *o, s32 a, s16 b);
extern "C" s32 PlayerActor_MainAxeFollowThrough(Obj *o);
extern "C" s32 PlayerActor_AxeDispatch(Obj *o, u8 a, ...);
extern "C" s32 PlayerActor_AxeFollowThroughTrackTarget(Obj *o);
extern "C" s32 PlayerActor_NetAxeFollowThrough(Obj *o, s16 b);
extern "C" s32 PlayerActor_SetupAxeFollowThrough(Obj *o);
extern "C" s32 PlayerActor_RequestAxeFollowThrough(Obj *o, s32 a, s16 b);
extern "C" void PlayerActor_MainAxeSwing(Obj *o);
extern "C" s32 PlayerActor_AxeSwingCheckEndRemote(Obj *o);
extern "C" s32 PlayerActor_AxeSwingCheckEnd(Obj *o);
extern "C" s32 PlayerActor_AxeSwingTrackTarget(Obj *o);
extern "C" s32 PlayerActor_AxeSwingTurn(Obj *o);
extern "C" s32 PlayerActor_NetAxeSwing(Obj *o, s32 a);
extern "C" s32 PlayerActor_SetupAxeSwing(Obj *o, Msg *a);
extern "C" void PlayerActor_AxeSwingGetNetData(void *p, s32 *a, s32 *b, u8 *c);
extern "C" s32 PlayerActor_AxeSwingSetNetData(void *p, s32 a, s32 b, u8 c);
extern "C" s32 PlayerActor_RequestAxeSwingAt(Obj *o, s32 *a, s32 *b, u8 *c, s32 d, s32 e);
extern "C" s32 PlayerActor_RequestAxeSwing(Obj *o, s32 a, s16 b);
extern "C" void PlayerActor_AxeStrikeGetNetData(u8 *s, u8 *a, u8 *b, u8 *c, u8 *d, u8 *e);
extern "C" void PlayerActor_AxeStrikeSetNetData(u8 *d, u8 a, u8 b, u8 c, u8 e, u8 f);
extern "C" void PlayerActor_AxeStrikeSetArgs(u8 *d, u32 x, u32 y, s32 *s);
extern "C" void PlayerActor_AxeSwingSetWork(u8 *d, V3 *v, s32 a);
extern "C" void PlayerActor_AxeStrikeSetWork(u8 *d, u32 x, u32 y, s32 *s);
}

namespace ns_0220fc88 {

struct Unk_ov003_0220fc88_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

struct Unk_ov003_0220fc88_Bf {
    u8 a : 2;
    u8 b : 2;
    u8 c : 4;
};

struct StowItemWork {
    s32 st;
    s32 a;
    s32 b;
    s32 timer;
    s16 h;
    u8 bits;
    u8 pad_13;
};

struct Unk_ov003_0220fc88_H {
    u16 a;
    u16 b;
};




typedef PlayerActor Obj;
typedef VecFx32Ctor V3;
typedef PlayerStowItemArgs RecA;
typedef StowItemWork RecB;
typedef PlayerActionRequest Msg;
extern "C" void _ZN19PlayerActionRequest6assignEiis(Msg *self, s32 a, s32 b, s16 c);
typedef Unk_ov003_0220fc88_H H;

extern "C" {
extern void *gCommManager;

s32 Unk_020102ec_advanceAnim(Obj *o);
s32 Unk_020102ec_moveWithCollision(Obj *o);
s32 Unk_02006d14_netFollowTransform(Obj *o);
s32 Unk_020102ec_updateBodyCollider(Obj *o);
s32 Unk_020102ec_submitSceneCollider(Obj *o);
s32 CommManager_isLocalSlot(void *g, u32 a);
s32 AnimFrameCtrl_isFinished(void *p);
s32 AnimFrameCtrl_hasPassedFrame(void *p, u32 a);
s32 Unk_02007694_getActionDonePriority(Obj *o, s32 a);
s32 PlayerActor_requestWait(Obj *o, s32 a, s32 b, s32 c);
s32 Unk_02006d14_requestAct10(Obj *o, s32 a, s32 b, s32 c);
s32 WorldCurve_FromCurved(V3 *a, V3 *b);
s32 Effect_Create(u32 id, V3 *v, s16 *h, u32 z);
s32 Effect_SetPosition(s32 h, V3 *v, s16 *p);
s32 Effect_End(s32 h);
s32 Unk_020102ec_startAnimOnce(Obj *o, s32 a, u32 b, u32 c);
s32 Unk_02006d14_playSe(Obj *o, u32 a);
s32 Unk_02006d14_setActionFlag(Obj *o, u32 a);
s32 Unk_02006d14_clearActionFlag(Obj *o, u32 a);
s32 PlayerActor_pushRequest(Obj *o, Msg *m);
s32 TalkRequest_FinishSceneEntry();
s32 HeldItemModel_PlayAnim(void *p, u32 a, u32 b, u32 c);
s32 AnimFrameCtrl_setup(void *p, u32 a, s32 b, s32 c, u32 d);
BlendAnimModel *HeldItemModel_GetModel(void *p);
s32 PlayerActor_GetHeldItem(H *h, Obj *o);
s32 PlayerActor_GetPlayerData(Obj *o);
s32 PlayerData_setHeldItem(s32 r, void *p);
s32 Unk_02006d14_applyHeldItemPose(Obj *o, s32 a, s32 b);
s32 NetBuf_UnpackPair20(void *p, s32 *a, s32 *b);
s32 NetBuf_ReadS16B(void *p);
s32 NetBuf_PackPair20(void *p, s32 a, s32 b);
s32 NetBuf_WriteS16B(void *p, s32 a);
s32 PlayerActor_ResumeWalkOrIdle(Obj *o);
s32 PlayerActor_RequestDoorApproach(Obj *o, s32 a, s32 b, s32 c, s32 d, s32 e);
s32 PlayerActor_RequestDoorEnter(Obj *o, u32 a, s32 b, s32 c, s32 d, s32 e, s32 f);
s32 PlayerActor_StowItemGetNetData(void *p, u8 *a, s32 *b, s32 *c, s16 *d);
s32 PlayerActor_RequestStowItem(Obj *o, s32 id, u8 low, s32 x, s32 y, s16 h, s32 a, s32 b);
s32 PlayerActor_StowItemSetWork(void *p, s32 st, u32 bits, s32 x, s32 y, s32 h, s32 v);
s32 PlayerActor_StowItemSetNetData(void *p, u32 bits, s32 x, s32 y, s32 h);

void PlayerActor_AxeSwingSetArgs(s32 *p, s32 a, s32 b, u32 c);
s32 PlayerActor_MainUmbrellaSpin(Obj *o);
void PlayerActor_UmbrellaSpinCheckEnd(Obj *o);
s32 PlayerActor_UmbrellaSpinEffect(Obj *o);
void PlayerActor_EndUmbrellaSpin(Obj *o);
s32 PlayerActor_NetUmbrellaSpin(Obj *o, s16 b);
s32 PlayerActor_SetupUmbrellaSpin(Obj *o);
void PlayerActor_UmbrellaSpinInitWork(u8 *p);
s32 PlayerActor_RequestUmbrellaSpin(Obj *o, s32 a, s16 b);
s32 PlayerActor_MainStowUmbrella(Obj *o);
void PlayerActor_StowUmbrellaCheckEnd(Obj *o);
void PlayerActor_StowUmbrellaUpdate(Obj *o);
s32 PlayerActor_NetStowUmbrella(Obj *o, s32 a);
s32 PlayerActor_SetupStowUmbrella(Obj *o, Msg *a);
s32 PlayerActor_StowUmbrellaGetNetData(u8 *p, u8 *a, s32 *b, s32 *c, s16 *d);
s32 PlayerActor_StowUmbrellaSetNetData(u8 *p, u32 id, s32 x, s32 y, s32 h);
s32 PlayerActor_StowUmbrellaSetWork(RecA *p, s32 st, u32 bits, s32 x, s32 y, s32 h);
s32 PlayerActor_RequestStowUmbrella(Obj *o, s32 id, u8 low, s32 x, s32 y, s16 h, s32 a, s32 b);
s32 PlayerActor_StowUmbrellaSetArgs(RecA *p, s32 st, u32 bits, s32 x, s32 y, s32 h);
s32 PlayerActor_MainStowItem(Obj *o);
void PlayerActor_StowItemUpdate(Obj *o);
s32 PlayerActor_EndStowItem(Obj *o);
s32 PlayerActor_NetStowItem(Obj *o, s32 a);
s32 PlayerActor_SetupStowItem(Obj *o, Msg *a);
}

// forward declarations (functions are emitted in descending address order)
extern "C" void PlayerActor_AxeSwingSetArgs(s32 *p, s32 a, s32 b, u32 c);
extern "C" s32 PlayerActor_MainUmbrellaSpin(Obj *o);
extern "C" void PlayerActor_UmbrellaSpinCheckEnd(Obj *o);
extern "C" s32 PlayerActor_UmbrellaSpinEffect(Obj *o);
extern "C" void PlayerActor_EndUmbrellaSpin(Obj *o);
extern "C" s32 PlayerActor_NetUmbrellaSpin(Obj *o, s16 b);
extern "C" s32 PlayerActor_SetupUmbrellaSpin(Obj *o);
extern "C" void PlayerActor_UmbrellaSpinInitWork(u8 *p);
extern "C" s32 PlayerActor_RequestUmbrellaSpin(Obj *o, s32 a, s16 b);
extern "C" s32 PlayerActor_MainStowUmbrella(Obj *o);
extern "C" void PlayerActor_StowUmbrellaCheckEnd(Obj *o);
extern "C" void PlayerActor_StowUmbrellaUpdate(Obj *o);
extern "C" s32 PlayerActor_NetStowUmbrella(Obj *o, s32 a);
extern "C" s32 PlayerActor_SetupStowUmbrella(Obj *o, Msg *a);
extern "C" s32 PlayerActor_StowUmbrellaGetNetData(u8 *p, u8 *a, s32 *b, s32 *c, s16 *d);
extern "C" s32 PlayerActor_StowUmbrellaSetNetData(u8 *p, u32 id, s32 x, s32 y, s32 h);
extern "C" s32 PlayerActor_StowUmbrellaSetWork(RecA *p, s32 st, u32 bits, s32 x, s32 y, s32 h);
extern "C" s32 PlayerActor_RequestStowUmbrella(Obj *o, s32 id, u8 low, s32 x, s32 y, s16 h, s32 a, s32 b);
extern "C" s32 PlayerActor_StowUmbrellaSetArgs(RecA *p, s32 st, u32 bits, s32 x, s32 y, s32 h);
extern "C" s32 PlayerActor_MainStowItem(Obj *o);
extern "C" void PlayerActor_StowItemUpdate(Obj *o);
extern "C" s32 PlayerActor_EndStowItem(Obj *o);
extern "C" s32 PlayerActor_NetStowItem(Obj *o, s32 a);
extern "C" s32 PlayerActor_SetupStowItem(Obj *o, Msg *a);
}

namespace ns_022105bc {
struct Unk_ov003_022105bc_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

struct Unk_ov003_02210628_Pay {
    s32 a;
    s32 c;
    s32 d;
    s16 e;
    u8 b;
};

struct Unk_ov003_02210608_Rec {
    s32 a;
    s32 c;
    s32 d;
    s32 f;
    s16 e;
    u8 b;
};

struct Unk_ov003_02210bdc_Rec {
    u8 a;
    u8 b;
};

struct Unk_ov003_02210eb4_Rec {
    s32 a;
    s32 b;
    s16 c;
    u8 pad_0a;
    u8 cnt;
};


typedef PlayerActor Obj;
typedef Unk_ov003_022105bc_Bits Bits;
typedef PlayerActionRequest Msg;
extern "C" void _ZN19PlayerActionRequest6assignEiis(Msg *self, s32 a, s32 b, s32 c);
typedef Unk_ov003_02210628_Pay Pay;
typedef Unk_ov003_02210608_Rec Rec;
typedef Unk_ov003_02210bdc_Rec Rec2;
typedef Unk_ov003_02210eb4_Rec Rec3;

extern "C" {
extern void *gCommManager;

s32 NetBuf_UnpackPair20(void *p, u32 a, u32 b);
s32 NetBuf_PackPair20(void *p, u32 a, u32 b);
u32 NetBuf_ReadS16B(void *p);
void NetBuf_WriteS16B(void *p, s32 a);
void PlayerActor_GetHeldItem(u16 *out, Obj *o);
s32 Unk_02006d14_clearActionFlag(Obj *o, u32 a);
s32 Unk_02006d14_setActionFlag(Obj *o, u32 a);
s32 Unk_02006d14_testActionFlag(Obj *o, u32 a);
s32 PlayerActor_pushRequest(Obj *o, Msg *m);
s32 Unk_020102ec_startAnimOnce(Obj *o, s32 a, s32 b, s32 c);
s32 Unk_020102ec_startAnim(Obj *o, s32 a, s32 b, s32 c);
s32 CommManager_isLocalSlot(void *g, s32 a);
s32 AnimFrameCtrl_isFinished(void *p);
s32 Unk_02006d14_nudgeForward(Obj *o);
s32 Unk_02007694_getActionDonePriority(Obj *o, s32 a);
s32 Item_GetFurnitureIndex(u16 *p);
s32 Item_IsFurniture(u16 *p);
s32 Taxi_IsLeaving();
s32 PlayerActor_requestWait(Obj *o, s32 a, s32 b, s32 c);
s32 Unk_02006d14_requestAct76(Obj *o, s32 a, s32 b, s32 c, s32 d, s32 e);
s32 TalkRequest_FinishSceneEntry();
void *TownSessionState_Get();
s32 TownSessionState_TestFlag(void *p, s32 a);
s32 TownSessionState_ClearFlag(void *p, s32 a);
void *PlayerData_GetCurrent();
s32 PlayerData_clearFlag(void *p, s32 a);
s32 TownBbs_UpdateDaily();
s32 Bgm_RequestSilence(s32 a, s32 b, s32 c);
s32 Scene_GetCurrent();
s32 PlayerData_testFlag(void *p, s32 a);
s32 Scene_GetPrevious();
s32 SceneId_IsHouseRoom(s32 a);
u32 Building_GetDoorAnimParamAt(void *p);
s32 Unk_020102ec_advanceAnim(Obj *o);
s32 Unk_020102ec_updateBodyCollider(Obj *o);
s32 Unk_02006d14_playFootstepSe(Obj *o);
s32 PlayerActor_StepTowardPose(Obj *o, s32 a, s32 b, s32 c);

void PlayerActor_StowItemSetArgs(Pay *p, s32 a, u32 b, s32 c, s32 d, s16 e);
s32 PlayerActor_RequestStowUmbrella(Obj *o, s32 a, s32 b, s32 c, s32 d, s16 e, s32 f, s16 g);
s32 Field_GetDoorExitMode();
s32 Building_OpenDoorForExitAt(void *p);
void PlayerActor_DoorExitGetNetData(u8 *p, u8 *a, u8 *b);
void PlayerActor_DoorExitSetNetData(u8 *p, u32 a, u32 b);
s32 PlayerActor_RequestDoorExitWith(Obj *o, u32 a, u32 b, s32 c, s16 d);
s32 PlayerActor_RequestDoorEntered(Obj *o, s32 a, s32 b);
s32 PlayerActor_RequestAct3C(Obj *o, s32 a, s32 b);
void PlayerActor_DoorExitUpdate(Obj *o);
void PlayerActor_DoorExitCheckEnd(Obj *o);
s32 PlayerActor_DoorEnterMove(Obj *o);
void PlayerActor_DoorEnterUpdate(Obj *o);
s32 PlayerActor_DoorEnterCheckEnd(Obj *o);
}

namespace Unk_ov003_022107e0_Ns {
extern "C" s32 PlayerActor_DoorExitCheckEnd(Obj *o);
}

namespace Unk_ov003_02210b94_Ns {
extern "C" s32 PlayerActor_RequestDoorExitWith(Obj *o, u32 a, u32 b, s32 c, s32 d);
}

static inline BOOL Unk_ov003_022107fc_Eq(u16 *p, u16 *k) {
    if (Item_IsFurniture(p)) {
        *k = 0xfff1;
        s32 a = Item_GetFurnitureIndex(p);
        if (a == Item_GetFurnitureIndex(k)) return TRUE;
        return FALSE;
    }
    if (*p == 0xfff1) return TRUE;
    return FALSE;
}

// forward declarations (functions are emitted in descending address order)
extern "C" void PlayerActor_StowItemGetNetData(u8 *p, u8 *a, u32 b, u32 c, u16 *d);
extern "C" void PlayerActor_StowItemSetNetData(u8 *p, u32 a, u32 b, u32 c, s16 d);
extern "C" void PlayerActor_StowItemSetWork(Rec *p, s32 a, u32 b, s32 c, s32 d, s16 e, s32 f);
extern "C" s32 PlayerActor_RequestStowItem(Obj *o, s32 a, s32 b, s32 c, s32 d, s16 e, s32 f, s16 g);
extern "C" void PlayerActor_StowItemSetArgs(Pay *p, s32 a, u32 b, s32 c, s32 d, s16 e);
extern "C" void PlayerActor_MainAct3C();
extern "C" s32 PlayerActor_EndAct3C(Obj *o, s32 a);
extern "C" s32 PlayerActor_NetAct3C(Obj *o, s32 a);
extern "C" void PlayerActor_SetupAct3C(Obj *o);
extern "C" s32 PlayerActor_RequestAct3C(Obj *o, s32 a, s32 b);
extern "C" void PlayerActor_MainDoorExit(Obj *o);
extern "C" void PlayerActor_DoorExitCheckEnd(Obj *o);
extern "C" void PlayerActor_DoorExitUpdate(Obj *o);
extern "C" void PlayerActor_NetDoorExit(Obj *o, s32 a);
extern "C" s32 PlayerActor_SetupDoorExit(Obj *o, Msg *m);
extern "C" void PlayerActor_DoorExitGetNetData(u8 *p, u8 *a, u8 *b);
extern "C" void PlayerActor_DoorExitSetNetData(u8 *p, u32 a, u32 b);
extern "C" s32 PlayerActor_RequestDoorExitWith(Obj *o, u32 a, u32 b, s32 c, s16 d);
extern "C" s32 PlayerActor_RequestDoorExit(Obj *o, s32 a, s32 b);
extern "C" void PlayerActor_MainDoorEntered();
extern "C" s32 PlayerActor_NetDoorEntered(Obj *o, s32 a);
extern "C" void PlayerActor_SetupDoorEntered(Obj *o);
extern "C" s32 PlayerActor_RequestDoorEntered(Obj *o, s32 a, s32 b);
extern "C" s32 PlayerActor_MainDoorEnter(Obj *o);
extern "C" s32 PlayerActor_DoorEnterCheckEnd(Obj *o);
extern "C" void PlayerActor_DoorEnterUpdate(Obj *o);
extern "C" s32 PlayerActor_DoorEnterMove(Obj *o);
}

namespace ns_02210ef0 {

struct Unk_ov003_02210ef0_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

struct Unk_ov003_02210ef0_Pair {
    s32 a, b;
    Unk_ov003_02210ef0_Pair() {}
    Unk_ov003_02210ef0_Pair(s32 x, s32 y) {
        a = x;
        b = y;
    }
};

struct Unk_ov003_02210ef0_Rec2 {
    u8 a, b;
};


namespace Unk_ov003_02210f7c_Ns {
extern "C" void PlayerActor_DoorEnterSetWork(struct DoorEnterWork *p, u32 a, s32 b, s32 c, s16 d, u32 e);
}

typedef PlayerActor Obj;
typedef VecFx32Ctor V3;
typedef PlayerActionRequest Msg;
extern "C" void _ZN19PlayerActionRequest6assignEiis(Msg *self, u32 a, u32 b, u32 c);
typedef DoorEnterWork Rec;
typedef Unk_ov003_02210ef0_Pair Pair;

extern "C" {
extern void *gCommManager;
extern void *gSceneBlockMap;

s32 PlayerActor_GetSlotPosXZ(u8 *a, s32 *b, s32 *c, s32 d, s32 e);
void NetBuf_UnpackPair20(void *p, s32 *a, s32 *b);
void NetBuf_PackPair20(void *p, s32 a, s32 b);
u32 NetBuf_ReadS16B(void *p);
void NetBuf_WriteS16B(void *p, s32 a);
s32 PlayerActor_pushRequest(Obj *o, Msg *m);
s32 Unk_02006d14_setActionFlag(Obj *o, u32 a);
s32 Unk_02006d14_clearActionFlag(Obj *o, u32 a);
s32 Unk_02006d14_testActionFlag(Obj *o, u32 a);
s32 Unk_02006d14_playSe(Obj *o, u32 a);
s32 Unk_020102ec_startAnimOnce(Obj *o, u32 a, u32 b, u32 c);
s32 Unk_020102ec_startAnim(Obj *o, u32 a, u32 b);
s32 CommManager_isLocalSlot(void *g, s32 a);
s32 AnimFrameCtrl_isFinished(void *p);
s32 AnimFrameCtrl_hasPassedFrame(void *p, s32 a);
void Unk_020102ec_advanceAnim(Obj *o);
void Unk_020102ec_updateBodyCollider(Obj *o);
s32 Unk_020102ec_submitSceneCollider(Obj *o);
s32 PlayerActor_StepTowardPose(Obj *o, s32 a, s32 b, s32 c);
s32 Unk_02006d14_getHeldToolKind(Obj *o);
s32 Unk_02006d14_netSyncNearPoint(Obj *o, V3 *v);
s32 Unk_02006d14_netSyncNearUnit(Obj *o, Pair *p);
s32 Unk_02007694_getActionDonePriority(Obj *o, s32 a);
s32 PlayerActor_requestWait(Obj *o, s32 a, s32 b, s32 c);
void FieldPos_ToUnit(s32 *a, s32 *b, V3 *c);
s32 Effect_Create(s32 a, V3 *b, s16 *c, s32 d);
s32 Effect_PlayById2(s32 a, V3 *b, s32 c, s32 d);
void VEC_Add(V3 *a, V3 *b, V3 *c);
s32 Flower_SpawnPetalFxAt(u16 *a, Pair *b, s32 c, s32 d);
void PendingUnit_ApplyAt(Pair *a, s32 b);
void FieldPos_FromUnitCenter(V3 *a, u32 b, u32 c);
void HeldItemModel_PlayAnim(void *p, s32 a, s32 b, s32 c);
u16 *BlockMap_GetItemPtrAtPos(void *grid, V3 *v, u32 a);
s32 Building_OpenDoorForEntryAt(void *p, s32 a);
s32 PlayerActor_ResumeWalkOrIdle(Obj *o);
void PlayerActor_PluckReachGetNetData(void *p, Pair *q);
s32 PlayerActor_RequestPluckReach(Obj *o, Pair *q, s32 a, s32 b);

void PlayerActor_DoorEnterGetNetData(u8 *p, u8 *a, s32 *b, s32 *c, u16 *e);
void PlayerActor_DoorEnterSetNetData(u8 *p, u32 a, s32 b, s32 c, s16 e);
void PlayerActor_DoorEnterSetWork(Rec *p, u32 a, s32 b, s32 c, s16 d, u8 e);
s32 PlayerActor_RequestDoorEnter(Obj *o, u8 a, s32 b, s32 c, s16 d, s32 e, s32 f);
void PlayerActor_DoorEnterSetArgs(Rec *p, u32 a, s32 b, s32 c, s16 d);
void PlayerActor_DoorApproachMove(Obj *o);
void PlayerActor_DoorApproachUpdate(Obj *o);
void PlayerActor_DoorApproachCheckEnd(Obj *o);
void PlayerActor_DoorApproachGetNetData(u8 *p, s32 *a, s32 *b, s16 *c);
void PlayerActor_DoorApproachSetNetData(u8 *p, s32 a, s32 b, s16 c);
void PlayerActor_DoorApproachSetWork(Rec *p, s32 a, s32 b, s16 c);
s32 PlayerActor_RequestDoorApproach(Obj *o, s32 a, s32 b, s16 c, s32 d, s32 e);
void PlayerActor_DoorApproachSetArgs(Rec *p, s32 a, s32 b, s16 c);
void PlayerActor_PluckUpdate(Obj *o);
void PlayerActor_PluckCheckEnd(Obj *o);
s32 PlayerActor_PluckApply(Obj *o);
s32 PlayerActor_RequestPluck(Obj *o, s32 *p, s32 a, s32 b);
void PlayerActor_PluckReachUpdate(Obj *o);
void PlayerActor_PluckReachCheckEnd(Obj *o);
}

// forward declarations (functions are emitted in descending address order)
extern "C" void PlayerActor_NetDoorEnter(Obj *o, s32 x);
extern "C" void PlayerActor_SetupDoorEnter(Obj *o, Msg *m);
extern "C" void PlayerActor_DoorEnterGetNetData(u8 *p, u8 *a, s32 *b, s32 *c, u16 *e);
extern "C" void PlayerActor_DoorEnterSetNetData(u8 *p, u32 a, s32 b, s32 c, s16 e);
extern "C" void PlayerActor_DoorEnterSetWork(Rec *p, u32 a, s32 b, s32 c, s16 d, u8 e);
extern "C" s32 PlayerActor_RequestDoorEnter(Obj *o, u8 a, s32 b, s32 c, s16 d, s32 e, s32 f);
extern "C" void PlayerActor_DoorEnterSetArgs(Rec *p, u32 a, s32 b, s32 c, s16 d);
extern "C" void PlayerActor_MainDoorApproach(Obj *o);
extern "C" void PlayerActor_DoorApproachCheckEnd(Obj *o);
extern "C" void PlayerActor_DoorApproachUpdate(Obj *o);
extern "C" void PlayerActor_DoorApproachMove(Obj *o);
extern "C" void PlayerActor_NetDoorApproach(Obj *o, s32 x);
extern "C" void PlayerActor_SetupDoorApproach(Obj *o, Msg *m);
extern "C" void PlayerActor_DoorApproachGetNetData(u8 *p, s32 *a, s32 *b, s16 *c);
extern "C" void PlayerActor_DoorApproachSetNetData(u8 *p, s32 a, s32 b, s16 c);
extern "C" void PlayerActor_DoorApproachSetWork(Rec *p, s32 a, s32 b, s16 c);
extern "C" s32 PlayerActor_RequestDoorApproach(Obj *o, s32 a, s32 b, s16 c, s32 d, s32 e);
extern "C" void PlayerActor_DoorApproachSetArgs(Rec *p, s32 a, s32 b, s16 c);
extern "C" void PlayerActor_MainPluck(Obj *o);
extern "C" void PlayerActor_PluckCheckEnd(Obj *o);
extern "C" s32 PlayerActor_PluckApply(Obj *o);
extern "C" void PlayerActor_PluckUpdate(Obj *o);
extern "C" void PlayerActor_EndPluck(Obj *o);
extern "C" void PlayerActor_NetPluck();
extern "C" void PlayerActor_SetupPluck(Obj *o, Msg *m);
extern "C" s32 PlayerActor_RequestPluck(Obj *o, s32 *p, s32 a, s32 b);
extern "C" void PlayerActor_MainPluckReach(Obj *o);
extern "C" void PlayerActor_PluckReachCheckEnd(Obj *o);
extern "C" void PlayerActor_PluckReachUpdate(Obj *o);
extern "C" void PlayerActor_NetPluckReach(Obj *o, s32 x);
}

namespace ns_02211818 {

struct Unk_ov003_02211818_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

struct ReleaseCreatureWork {
    u16 item;
    u8 pad_02[2];
    s32 effect;
    void *fishDisplay;
    u8 isFish;
    u8 step;
};


typedef PlayerActor Obj;
typedef VecFx32Ctor V3;
typedef Mtx43 Blk;
typedef PlayerActionRequest Msg;
extern "C" void _ZN19PlayerActionRequest6assignEiis(Msg *self, s32 a, s32 b, s16 c);
typedef ReleaseCreatureWork Rec;
typedef Vec2 Pair;

struct Unk_ov003_02211818_T {
    u16 a;
    s16 b, c, d;
};

extern "C" {
extern void *gCommManager;

s32 PlayerActor_pushRequest(Obj *o, Msg *m);
void Unk_020102ec_startAnimOnce(Obj *o, s32 a, u32 b, u32 c);
void Unk_020102ec_startAnim(Obj *o, s32 a, u32 b, u32 c);
void HeldItemModel_PlayAnim(void *p, u32 a, u32 b, u32 c);
s32 Unk_02006d14_getHeldToolKind(Obj *o);
s32 CommManager_isLocalSlot(void *g, u32 a);
void Unk_02006d14_act10FaceTalkTarget(Obj *o);
s32 Unk_02006d14_netFollowTransform(Obj *o);
void Unk_020102ec_updateBodyCollider(Obj *o);
void Unk_020102ec_advanceAnim(Obj *o);
s32 AnimFrameCtrl_isFinished(void *p);
s32 AnimFrameCtrl_hasPassedFrame(void *p, u32 a);
void Unk_02006d14_playSe(Obj *o, u32 a);
void Unk_02006d14_calcHandMtx(Obj *o);
void Unk_020102ec_moveWithCollision(Obj *o);
void Unk_02006d14_turnToCamera(Obj *o, s32 a);
void Effect_End(s32 a);
void Effect_SetPosition(s32 a, V3 *b, u32 c, u32 d);
s32 Effect_CreateById(s32 a, V3 *b, u32 c, u32 d);
void WorldCurve_FromCurved(V3 *a, V3 *b);
void Fish_GetDisplayScale(V3 *v, s32 a);
void HeldInsect_SetHandMatrix(u8 id, s16 *a, Blk *p, s32 f);
void HeldInsect_Remove(u8 a, s32 b);
void HeldInsect_Start(u8 a, u8 b);
s32 FishDisplay_SetEntry(void *a, s32 b, V3 *c, V3 *d, s32 e, s32 f, s32 g, s32 h, s32 i, s32 j);
void FishDisplay_Release(void *a);
void *FishDisplay_Acquire();
void Unk_02007694_requestAct05(Obj *o, s32 a, s32 b, s32 c);
s32 func_02133150(s32 a, s32 b);
s32 func_02132a4c(s32 a);
float func_02132594(float a, float b);
void MTX_MultVec43(V3 *a, Blk *b, V3 *c);
s32 func_01ffcb0c(s32 a, s32 b);
void PlayerActor_GetSlotHeldItem(u16 *p, u32 a);
Obj *PlayerActor_Get(u32 a);
void *PlayerActor_GetBodyPos(u32 a);
u16 NetBuf_ReadU16(u8 *p);
void NetBuf_WriteU16(u8 *p, s32 a);

void PlayerActor_PluckReachGetNetData(u8 *p, Pair *o);
void PlayerActor_PluckReachSetNetData(u8 *p, Pair *s);
void PlayerActor_PluckReachSetArgs(u8 *p, Pair *s);
void PlayerActor_Act11Update(Obj *o);
s32 PlayerActor_RequestAct11(Obj *o, u32 p, s32 a, s16 b);
void PlayerActor_Act11SetArgs(u8 *p, u32 v);
void PlayerActor_ReleaseCreatureUpdate(Obj *o);
void PlayerActor_ReleaseCreatureUpdateModel(Obj *o);
void PlayerActor_ApplyHoldOffset(Blk *b, V3 *v);
u8 PlayerActor_ReleaseCreatureGetNetState(u8 *p);
void PlayerActor_ReleaseCreatureSetNetState(u8 *p, u32 v);
void PlayerActor_ReleaseCreatureGetNetItem(u8 *p, u16 *out);
void PlayerActor_ReleaseCreatureSetNetItem(u8 *p, s32 a);
s32 PlayerActor_RequestReleaseCreature(Obj *o, u32 a, s32 b, s16 c);
}

static inline s32 Idx(volatile u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    u32 b = *p;
    u32 a = *p;
    if (a >= lo && b <= hi) r = TRUE;
    if (r) return b - lo;
    return -1;
}

// forward declarations (functions are emitted in descending address order)
extern "C" void PlayerActor_PluckReachGetNetData(u8 *p, Pair *o);
extern "C" void PlayerActor_SetupPluckReach(Obj *o, u8 *m);
extern "C" void PlayerActor_PluckReachSetNetData(u8 *p, Pair *s);
extern "C" s32 PlayerActor_RequestPluckReach(Obj *o, Pair *p, s32 a, s16 b);
extern "C" void PlayerActor_PluckReachSetArgs(u8 *p, Pair *s);
extern "C" void PlayerActor_MainAct11(Obj *o);
extern "C" void PlayerActor_Act11Update(Obj *o);
extern "C" s32 PlayerActor_NetAct11(Obj *o, s16 a);
extern "C" void PlayerActor_SetupAct11(Obj *o, u8 *m);
extern "C" s32 PlayerActor_RequestAct11(Obj *o, u32 p, s32 a, s16 b);
extern "C" void PlayerActor_Act11SetArgs(u8 *p, u32 v);
extern "C" void PlayerActor_MainReleaseCreature(Obj *o);
extern "C" void PlayerActor_ReleaseCreatureUpdate(Obj *o);
extern "C" void PlayerActor_ReleaseCreatureUpdateModel(Obj *o);
extern "C" void PlayerActor_EndReleaseCreature(Obj *o);
extern "C" s32 PlayerActor_NetReleaseCreature(Obj *o, s16 a);
extern "C" void PlayerActor_SetupReleaseCreature(Obj *o, u8 *m);
extern "C" u8 PlayerActor_ReleaseCreatureGetNetState(u8 *p);
extern "C" void PlayerActor_ReleaseCreatureSetNetState(u8 *p, u32 v);
extern "C" void PlayerActor_ReleaseCreatureGetNetItem(u8 *p, u16 *out);
extern "C" void PlayerActor_ReleaseCreatureSetNetItem(u8 *p, s32 a);
extern "C" s32 PlayerActor_RequestReleaseCreature(Obj *o, u32 a, s32 b, s16 c);
extern "C" BOOL PlayerActor_LocalHoldsNet();
extern "C" void PlayerActor_LocalPlayAnim99();
extern "C" void PlayerActor_ApplyHoldOffset(Blk *b, V3 *v);
extern "C" void *PlayerActor_GetTrackTarget(u32 a);
extern "C" BOOL PlayerActor_ConfirmReleaseCreature();
extern "C" s32 PlayerActor_LocalRequestReleaseCreature(u32 a);
}

namespace ns_02212140 {

struct Unk_ov003_02212140_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};


struct Unk_ov003_02212140_V3D : VecFx32Ctor {
    Unk_ov003_02212140_V3D() {}
    ~Unk_ov003_02212140_V3D() {}
};

typedef PlayerActor Obj;
typedef VecFx32Ctor V3;
typedef Unk_ov003_02212140_V3D V3D;
typedef Vec2 Pair;

enum Unk_ov003_0221227c_Limit { UNK_ov003_0221227c_5 = 5 };

extern "C" {
extern CommManager *gCommManager;

Obj *PlayerActor_Get(s32 id);
void TalkRequest_FinishSlingshot();
s32 Unk_02007694_getActionDonePriority(Obj *o, s32 a);
s32 PlayerActor_requestWait(Obj *o, s32 a, s32 b, s32 c);
void PlayerActor_SetHeadTilt(s32 a, s32 b, s32 c);
s32 CommManager_isLocalSlot(CommManager *g, s32 a);
s32 PlayerActor_RequestSlingshotWatch(Obj *o, s32 a, s32 b);
s32 PlayerActor_RequestThrowBottle(Obj *o, s32 a, s32 b);
s32 PlayerActor_RequestAct11(Obj *o, s32 a, s32 b, s32 c);
s32 TalkRequest_IsSaveMenuRunning();
s32 Unk_02006d14_testActionFlag(Obj *o, s32 a);
s32 PlayerActor_getRequiredPriority(Obj *o);
s32 PlayerActor_RequestFishReelIn(Obj *o, s32 a, s32 b, s32 c);
s32 TalkRequest_AddPlayerMessage();
s32 PlayerActor_RequestBeeSting(Obj *o, s32 a, s32 b);
s32 Math_Atan2(s32 a, s32 b);
s32 Unk_02008040_requestAct77(Obj *o, s32 v, s32 a, s32 b);
s32 PlayerActor_RequestFaint(Obj *o, u8 a, s32 b, s32 c);
s32 Unk_02006d14_clearActionFlag(Obj *o, s32 a);
void Bgm_Release(s32 a);
s32 PlayerActor_RequestMailboxWait(Obj *o, s32 a, s32 b);
s32 PlayerActor_RequestMailboxClose(Obj *o, s32 a, s32 b);
s32 PlayerActor_RequestMailboxOpen(Obj *o, V3 v, s32 a, s32 b);
s32 PlayerActor_RequestDoorExit(Obj *o, s32 a, s32 b);
s32 Unk_02006d14_getHeldHoldableIndex();
s32 PlayerActor_RequestStowItem(Obj *o, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g);
s32 Unk_02006d14_setActionFlag(Obj *o, s32 a);
s32 PlayerActor_RequestDoorEnter(Obj *o, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f);
s32 PlayerActor_RequestDoorApproach(Obj *o, s32 a, s32 b, s32 c, s32 d, s32 e);
s32 PlayerActor_RequestFishRelease(Obj *o, u8 *p, u32 c, s32 id, s32 e);
s32 PlayerActor_RequestInsectShowCatch(Obj *o, s32 a, s32 b, s32 c, s32 d, s32 e);
void FieldPos_ToUnit(s32 *a, s32 *b, V3 *c);
s32 PlayerActor_RequestBuryItem(Obj *o, s32 a, Pair *p, u32 b, s32 c, s32 d);
s32 PlayerActor_GetFrontUnitCenter(V3 *v, Obj *o);
void FieldPos_FromUnitCenter(V3 *a, u32 b, u32 c);
void PlayerActor_TestSlotFlag(s32 a, s32 b);
}

static inline u16 Unk_ov003_022125ac_A(u32 x) {
    if (x < 0x38) {
        return x + 0x12e8;
    }
    return 0x12e8;
}

static inline u16 Unk_ov003_022125ac_B(u32 x) {
    if (x < 0x38) {
        return x + 0x12b0;
    }
    return 0x12b0;
}

static inline BOOL Unk_ov003_022125ac_R(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) {
        r = TRUE;
    }
    return r;
}

extern "C" s32 FieldPos_IsSameUnit(V3 *a, V3 *b);

// forward declarations (functions are emitted in descending address order)
extern "C" s32 PlayerActor_LocalEndWatch();
extern "C" s32 PlayerActor_SetWatchMode(s32 a, s32 b);
extern "C" s32 PlayerActor_LocalRequestThrowBottle();
extern "C" s32 PlayerActor_LocalRequestAct11();
extern "C" s32 PlayerActor_LocalBeeSting();
extern "C" s32 PlayerActor_LocalRequestAct77From(V3 *p);
extern "C" s32 PlayerActor_LocalFaint(s32 a);
extern "C" s32 PlayerActor_LocalRequestMailboxWaitOrClose(s32 a);
extern "C" s32 PlayerActor_LocalRequestMailboxOpen(V3 *p);
extern "C" s32 PlayerActor_LocalRequestDoorExit();
extern "C" s32 PlayerActor_LocalRequestDoorEnter(u32 a, s32 *b, s32 *c, s32 d);
extern "C" s32 PlayerActor_LocalRequestDoorApproach(s32 *a, s32 *b, s16 *c);
extern "C" s32 PlayerActor_LocalReleaseCatch(u8 a, s32 b, s32 c, s32 d);
extern "C" s32 PlayerActor_LocalRequestBuryItem(V3 *p, u16 *b);
extern "C" u16 PlayerActor_GetLocalShownItem();
extern "C" s32 PlayerActor_IsLocalReleaseWaiting();
extern "C" s32 PlayerActor_IsLocalAct67HitAt(V3 *a);
extern "C" s32 PlayerActor_GetStrikeCountdownAt(V3 *a, s32 b);
extern "C" s32 PlayerActor_GetDigCountdownAt(V3 *a, s32 b);
extern "C" s32 FieldPos_IsSameUnit(V3 *a, V3 *b);
extern "C" void PlayerActor_TestSlotFlag9(s32 a);
}

namespace ns_02212140 {
extern "C" void PlayerActor_TestSlotFlag9(s32 a) {
    PlayerActor_TestSlotFlag(9, a);
}
}

namespace ns_02212140 {
extern "C" s32 FieldPos_IsSameUnit(V3 *a, V3 *b) {
    s32 p[2], q[2];
    p[0] = 0;
    p[1] = 0;
    q[0] = 0;
    q[1] = 0;
    FieldPos_ToUnit(&p[0], &p[1], b);
    FieldPos_ToUnit(&q[0], &q[1], a);
    if (p[0] == q[0] && p[1] == q[1]) {
        return TRUE;
    }
    return FALSE;
}
}

namespace ns_02212140 {
extern "C" s32 PlayerActor_GetDigCountdownAt(V3 *a, s32 b) {
    Obj *o = PlayerActor_Get(b);
    if (o) {
        u32 t = ((Unk_ov003_02212140_Bits *)&o->bodyModel.curFrame)->mid;
        s32 r = 0;
        V3D v;
        v.x = r;
        v.y = r;
        v.z = r;
        if (o->action == 0x5e) {
            s32 *p = (s32 *)(o->actionWorkRaw);
            v.x = p[1];
            v.y = p[2];
            v.z = p[3];
            s32 st = o->animId;
            if (st == 0x4e) {
                r = 0x16 - t;
            } else if (st == 0x4b) {
                r = 9 - t;
            }
        }
        if (r > 0) {
            V3D w;
            w.x = v.x;
            w.y = v.y;
            w.z = v.z;
            if (FieldPos_IsSameUnit(a, &w)) {
                return r;
            }
        }
    }
    return 0;
}
}

namespace ns_02212140 {
extern "C" s32 PlayerActor_GetStrikeCountdownAt(V3 *a, s32 b) {
    Obj *o = PlayerActor_Get(b);
    if (o) {
        u32 t = ((Unk_ov003_02212140_Bits *)&o->bodyModel.curFrame)->mid;
        s32 r = 0;
        V3D v;
        v.x = r;
        v.y = r;
        v.z = r;
        s32 st = o->action;
        if (st == 0x49) {
            u8 *q = o->actionWorkRaw;
            FieldPos_FromUnitCenter(&v, q[0], q[1]);
            r = 8 - t;
        } else if (st == 0x5d) {
            u8 *q = o->actionWorkRaw;
            FieldPos_FromUnitCenter(&v, q[0], q[1]);
            r = 5 - t;
        }
        if (r > 0) {
            V3D w;
            w.x = v.x;
            w.y = v.y;
            w.z = v.z;
            if (FieldPos_IsSameUnit(a, &w)) {
                return r;
            }
        }
    }
    return 0;
}
}

namespace ns_02212140 {
extern "C" s32 PlayerActor_IsLocalAct67HitAt(V3 *a) {
    Obj *o = PlayerActor_Get(4);
    if (o) {
        u32 t = ((Unk_ov003_02212140_Bits *)&o->bodyModel.curFrame)->mid;
        s32 st = o->animId;
        if ((st == 0x67 && t == 5) || (st == 0x44 && t == 8)) {
            V3D v;
            PlayerActor_GetFrontUnitCenter(&v, o);
            return FieldPos_IsSameUnit(a, &v);
        }
    }
    return 0;
}
}

namespace ns_02212140 {
extern "C" s32 PlayerActor_IsLocalReleaseWaiting() {
    Obj *o = PlayerActor_Get(4);
    if (o) {
        if (o->action == 6) {
            if (o->actionWorkRaw[0xd] == 1) {
                return TRUE;
            }
        }
    }
    return FALSE;
}
}

namespace ns_02212140 {
extern "C" u16 PlayerActor_GetLocalShownItem() {
    Obj *o = PlayerActor_Get(4);
    u16 r = 0xfff1;
    if (o) {
        switch (o->action) {
        case 0x57: {
            u8 *q = o->actionWorkRaw;
            if (q[6] == 0) {
                r = Unk_ov003_022125ac_B(q[8]);
            }
            break;
        }
        case 0x54: {
            u8 *q = o->actionWorkRaw;
            if (q[4] == 0) {
                u32 x = q[3];
                if (x < 0x38) {
                    r = Unk_ov003_022125ac_A(x);
                }
            }
            break;
        }
        case 0x5f:
            if (Unk_ov003_022125ac_R(&o->actionItem, 0x1549, 0x1549)) {
                r = o->actionItem;
            }
            break;
        }
    }
    return r;
}
}

namespace ns_02212140 {
extern "C" s32 PlayerActor_LocalRequestBuryItem(V3 *p, u16 *b) {
    Obj *o = PlayerActor_Get(4);
    if (o) {
        s32 x = 0;
        s32 y = 0;
        FieldPos_ToUnit(&x, &y, p);
        Pair pr;
        u32 t = *b;
        pr.x = x;
        pr.y = y;
        return PlayerActor_RequestBuryItem(o, 1, &pr, t, 6, -1);
    }
    return 0;
}
}

namespace ns_02212140 {
extern "C" s32 PlayerActor_LocalReleaseCatch(u8 a, s32 b, s32 c, s32 d) {
    Obj *o = PlayerActor_Get(4);
    if (o) {
        if (a) {
            return PlayerActor_RequestFishRelease(o, &a, o->action == 5 ? 1 : 0, 6, -1);
        }
        return PlayerActor_RequestInsectShowCatch(o, 1, 0, 0, 6, -1);
    }
    return 0;
}
}

namespace ns_02212140 {
extern "C" s32 PlayerActor_LocalRequestDoorApproach(s32 *a, s32 *b, s16 *c) {
    Obj *o = PlayerActor_Get(4);
    if (o) {
        if (Unk_02006d14_getHeldHoldableIndex()) {
            return PlayerActor_RequestStowItem(o, 0x38, 0, *a, *b, *c, 6, -1);
        }
        Unk_02006d14_setActionFlag(o, 1);
        return PlayerActor_RequestDoorApproach(o, *a, *b, *c, 6, -1);
    }
    return 0;
}
}

namespace ns_02212140 {
extern "C" s32 PlayerActor_LocalRequestDoorEnter(u32 a, s32 *b, s32 *c, s32 d) {
    Obj *o = PlayerActor_Get(4);
    if (o) {
        if (Unk_02006d14_getHeldHoldableIndex()) {
            return PlayerActor_RequestStowItem(o, 0x39, ((u32)a << 26) >> 24, *b, *c, d, 6, -1);
        }
        Unk_02006d14_setActionFlag(o, 1);
        return PlayerActor_RequestDoorEnter(o, a, *b, *c, d, 6, -1);
    }
    return 0;
}
}

namespace ns_02212140 {
extern "C" s32 PlayerActor_LocalRequestDoorExit() {
    Obj *o = PlayerActor_Get(4);
    if (o) {
        return PlayerActor_RequestDoorExit(o, 6, -1);
    }
    return 0;
}
}

namespace ns_02212140 {
extern "C" s32 PlayerActor_LocalRequestMailboxOpen(V3 *p) {
    Obj *o = PlayerActor_Get(4);
    if (o) {
        return PlayerActor_RequestMailboxOpen(o, *p, 6, -1);
    }
    return 0;
}
}

namespace ns_02212140 {
extern "C" s32 PlayerActor_LocalRequestMailboxWaitOrClose(s32 a) {
    Obj *o = PlayerActor_Get(4);
    if (o) {
        switch (a) {
        case 1:
            return PlayerActor_RequestMailboxWait(o, 6, -1);
        case 2:
            return PlayerActor_RequestMailboxClose(o, 6, -1);
        default:
            return 0;
        }
    }
    return 0;
}
}

namespace ns_02212140 {
extern "C" s32 PlayerActor_LocalFaint(s32 a) {
    Obj *o = PlayerActor_Get(4);
    if (o) {
        Unk_ov003_0221227c_Limit k = UNK_ov003_0221227c_5;
        if (k <= PlayerActor_getRequiredPriority(o)) {
            return 0;
        }
        if (o->action == 0x78) {
            return 0;
        }
        if (PlayerActor_RequestFaint(o, a + 2, 7, -1)) {
            if (Unk_02006d14_testActionFlag(o, 0x1a)) {
                Unk_02006d14_clearActionFlag(o, 0x1a);
                Bgm_Release(0x3f);
            }
            return 1;
        }
    }
    return 0;
}
}

namespace ns_02212140 {
extern "C" s32 PlayerActor_LocalRequestAct77From(V3 *p) {
    Obj *o = PlayerActor_Get(4);
    if (o) {
        return Unk_02008040_requestAct77(o, Math_Atan2(p->x - o->position.x, p->z - o->position.z), 6, -1);
    }
    return 0;
}
}

namespace ns_02212140 {
extern "C" s32 PlayerActor_LocalBeeSting() {
    if (TalkRequest_IsSaveMenuRunning()) {
        return 0;
    }
    Obj *o = PlayerActor_Get(4);
    if (o) {
        if (Unk_02006d14_testActionFlag(o, 0xb)) {
            return 0;
        }
        Unk_ov003_0221227c_Limit k = UNK_ov003_0221227c_5;
        if (k <= PlayerActor_getRequiredPriority(o)) {
            s32 st = o->action;
            if (st != 0x4f) {
                return 0;
            }
            if (st == 0x4f) {
                PlayerActor_RequestFishReelIn(o, 0, 6, -1);
                return 0;
            }
        }
        if (!TalkRequest_AddPlayerMessage()) {
            return 0;
        }
        return PlayerActor_RequestBeeSting(o, 5, -1);
    }
    return 0;
}
}

namespace ns_02212140 {
extern "C" s32 PlayerActor_LocalRequestAct11() {
    Obj *o = PlayerActor_Get(4);
    if (o) {
        o->actionPriority = Unk_02007694_getActionDonePriority(o, o->action);
        return PlayerActor_RequestAct11(o, 3, 5, -1);
    }
    return 0;
}
}

namespace ns_02212140 {
extern "C" s32 PlayerActor_LocalRequestThrowBottle() {
    Obj *o = PlayerActor_Get(4);
    if (o) {
        if (o->action == 0x89) {
            return 0;
        }
        return PlayerActor_RequestThrowBottle(o, 6, -1);
    }
    return 0;
}
}

namespace ns_02212140 {
extern "C" s32 PlayerActor_SetWatchMode(s32 a, s32 b) {
    Obj *o = PlayerActor_Get(b);
    if (b == 4) {
        b = gCommManager->localSlot;
    }
    if (o) {
        if (CommManager_isLocalSlot(gCommManager, b)) {
            o->actionPriority = Unk_02007694_getActionDonePriority(o, o->action);
            switch (a) {
            case 0:
                TalkRequest_FinishSlingshot();
                PlayerActor_requestWait(o, 3, 1, -1);
                break;
            case 1:
                PlayerActor_RequestSlingshotWatch(o, 6, -1);
                break;
            }
        }
        return TRUE;
    }
    return FALSE;
}
}

namespace ns_02212140 {
// ---------------------------------------------------------------- free functions on the big player object
extern "C" s32 PlayerActor_LocalEndWatch() {
    Obj *o = PlayerActor_Get(4);
    if (o) {
        TalkRequest_FinishSlingshot();
        if (o->action != 0x77) {
            o->actionPriority = Unk_02007694_getActionDonePriority(o, o->action);
            PlayerActor_requestWait(o, 3, 1, -1);
        }
        PlayerActor_SetHeadTilt(0, 0, 4);
        return TRUE;
    }
    return FALSE;
}
}

namespace ns_02211818 {
extern "C" s32 PlayerActor_LocalRequestReleaseCreature(u32 a) {
    Obj *p = PlayerActor_Get(4);
    if (p) {
        return PlayerActor_RequestReleaseCreature(p, a, 5, -1);
    }
    return 0;
}
}

namespace ns_02211818 {
extern "C" BOOL PlayerActor_ConfirmReleaseCreature() {
    Obj *p = PlayerActor_Get(4);
    if (p) {
        if (p->action == 6) {
            Rec *r = (Rec *)&p->actionWork;
            if (r->step == 1) {
                r->step = 2;
                return TRUE;
            }
        }
    }
    return FALSE;
}
}

namespace ns_02211818 {
extern "C" void *PlayerActor_GetTrackTarget(u32 a) {
    Obj *p = PlayerActor_Get(a);
    if (p != 0 && Unk_02006d14_getHeldToolKind(p) == 3) {
        s32 *q = (s32 *)((u8 *)p + 0x5c4);
        if (q[1] > 1) return q + 2;
    }
    return PlayerActor_GetBodyPos(a);
}
}

namespace ns_02211818 {
extern "C" void PlayerActor_ApplyHoldOffset(Blk *b, V3 *v) {
    s32 r7 = b->m[9];
    s32 s0 = b->m[10];
    s32 s4 = b->m[11];
    Blk c;
    V3 vv;
    V3 out;
    b->m[9] = b->m[10] = b->m[11] = 0;
    c = *b;
    if (v == 0) {
        vv.x = 0x4cd;
        vv.y = 0;
        vv.z = 0;
    } else {
        vv.x = v->x;
        vv.y = v->y;
        vv.z = v->z;
    }
    MTX_MultVec43(&vv, &c, &out);
    b->m[9] = out.x + r7;
    b->m[10] = out.y + s0;
    b->m[11] = out.z + s4;
}
}

namespace ns_02211818 {
extern "C" void PlayerActor_LocalPlayAnim99() {
    Obj *o = PlayerActor_Get(4);
    if (o) {
        Unk_020102ec_startAnimOnce(o, 0x99, 3, 0);
    }
}
}

namespace ns_02211818 {
extern "C" BOOL PlayerActor_LocalHoldsNet() {
    u16 t;
    PlayerActor_GetSlotHeldItem(&t, 4);
    BOOL f = FALSE;
    volatile u16 *p = &t;
    u32 b = *p;
    u32 a = *p;
    if (a >= 0x1376 && b <= 0x1376) f = TRUE;
    if (f || (b >= 0x1377 && b <= 0x1377)) return TRUE;
    return FALSE;
}
}

namespace ns_02211818 {
extern "C" s32 PlayerActor_RequestReleaseCreature(Obj *o, u32 a, s32 b, s16 c) {
    Msg m;
    _ZN19PlayerActionRequest6assignEiis(&m, 6, b, c);
    *(u16 *)((u8 *)&m + 0xc) = a;
    s32 r = PlayerActor_pushRequest(o, &m);
    return r;
}
}

namespace ns_02211818 {
extern "C" void PlayerActor_ReleaseCreatureSetNetItem(u8 *p, s32 a) {
    NetBuf_WriteU16(p, a);
}
}

namespace ns_02211818 {
extern "C" void PlayerActor_ReleaseCreatureGetNetItem(u8 *p, u16 *out) {
    *out = NetBuf_ReadU16(p);
}
}

namespace ns_02211818 {
extern "C" void PlayerActor_ReleaseCreatureSetNetState(u8 *p, u32 v) {
    p[2] = v;
}
}

namespace ns_02211818 {
extern "C" u8 PlayerActor_ReleaseCreatureGetNetState(u8 *p) {
    return p[2];
}
}

namespace ns_02211818 {
extern "C" void PlayerActor_SetupReleaseCreature(Obj *o, u8 *m) {
    Rec *r4 = (Rec *)&o->actionWork;
    volatile u16 t;
    u16 r7 = *(u16 *)(m + 0xc);
    u32 id;
    u8 *r6;
    t = r7;
    r4->item = r7;
    r4->effect = -1;
    r4->fishDisplay = 0;
    {
        BOOL z = FALSE;
        volatile u16 *pt = &t;
        u32 b = *pt;
        u32 a = *pt;
        if (a >= 0x12e8 && b <= 0x131f) z = TRUE;
        r4->isFish = z;
    }
    r4->step = 0;
    if (r4->isFish == 0) {
        s32 i = Idx(&t, 0x12b0, 0x12e7);
        HeldInsect_Start(i, o->sessionSlot);
        id = 0x9f;
    } else {
        r4->fishDisplay = FishDisplay_Acquire();
        id = 0x9e;
    }
    Unk_020102ec_startAnimOnce(o, id, 3, 3);
    Unk_02006d14_playSe(o, 0x4f);
    r6 = o->netData.bytes;
    if (CommManager_isLocalSlot(gCommManager, o->sessionSlot)) {
        PlayerActor_ReleaseCreatureSetNetItem(r6, r7);
        PlayerActor_ReleaseCreatureSetNetState(r6, 0);
    } else if (PlayerActor_ReleaseCreatureGetNetState(r6) >= 1) {
        r4->step = 1;
        *(u32 *)(Unk_ov003_02211818_Bits *)&o->bodyModel.curFrame = ((u32)(((Unk_ov003_02211818_Bits *)&o->bodyModel.numFrames)->mid - 1) << 16) >> 4;
    }
}
}

namespace ns_02211818 {
extern "C" s32 PlayerActor_NetReleaseCreature(Obj *o, s16 a) {
    u16 t;
    PlayerActor_ReleaseCreatureGetNetItem(o->netData.bytes, &t);
    return PlayerActor_RequestReleaseCreature(o, t, 5, a);
}
}

namespace ns_02211818 {
extern "C" void PlayerActor_EndReleaseCreature(Obj *o) {
    Rec *r4 = (Rec *)&o->actionWork;
    if (r4->effect > -1) {
        Effect_End(r4->effect);
    }
    if (r4->isFish == 0) {
        HeldInsect_Remove(o->sessionSlot, 1);
    } else {
        FishDisplay_Release(r4->fishDisplay);
    }
}
}

namespace ns_02211818 {
extern "C" void PlayerActor_ReleaseCreatureUpdateModel(Obj *o) {
    Rec *r6 = (Rec *)&o->actionWork;
    Unk_ov003_02211818_T t;
    Blk b;
    V3 v50;
    V3 v5c;
    V3 v68;
    s32 *r7;
    s16 sc;
    s32 m;
    t.a = r6->item;
    r7 = &r6->effect;
    Unk_02006d14_turnToCamera(o, 0x400);
    b = o->itemHandMtx;
    v50.x = 0x4cd;
    v50.y = 0;
    v50.z = 0;
    m = ((Unk_ov003_02211818_Bits *)&o->bodyModel.curFrame)->mid;
    if (o->animId != 0xa0 && (s32)m >= 0x10) {
        s32 q = (m - 15) * 0x19a / 12;
        v50.x = v50.x + q * 2;
        v50.y = v50.y + q;
        v50.z = v50.z - q;
    }
    PlayerActor_ApplyHoldOffset(&b, &v50);
    if (*r7 > -1) {
        v5c.x = b.m[9];
        v5c.y = b.m[10];
        v5c.z = b.m[11];
        WorldCurve_FromCurved(&v5c, &v5c);
        Effect_SetPosition(*r7, &v5c, 0, 0);
    } else if (*r7 == -1) {
        *r7 = -2;
        if (r6->isFish == 0) {
            s32 i = Idx(&t.a, 0x12b0, 0x12e7);
            if (i == 0x18 || i == 0x30 || (u32)(i - 0x32) <= 1) {
                v5c.x = b.m[9];
                v5c.y = b.m[10];
                v5c.z = b.m[11];
                WorldCurve_FromCurved(&v5c, &v5c);
                *r7 = Effect_CreateById(0x5a, &v5c, 0, 0);
            }
        }
    }
    if (o->animId != 0xa0) {
        if (m <= 10) {
            sc = 0;
        } else if (m < 0x10) {
            sc = (s16)((m - 10) * 0x11);
        } else {
            sc = 0x64;
        }
    } else {
        if (m < 6) {
            sc = (s16)(0x64 - m * 0x11);
        } else {
            sc = 0;
        }
    }
    if (r6->isFish == 0) {
        t.b = sc;
        t.c = sc;
        t.d = sc;
        HeldInsect_SetHandMatrix(o->sessionSlot, &t.b, &b, 0);
    } else {
        float f = (float)sc / 100.0f;
        float g;
        if (f > 0) {
            g = 0.5f + 4096.0f * f;
        } else {
            g = 4096.0f * f - 0.5f;
        }
        s32 k = (s32)g;
        s32 i = Idx(&t.a, 0x12e8, 0x131f);
        Fish_GetDisplayScale(&v68, i);
        v68.x = func_01ffcb0c(v68.x, k);
        v68.y = func_01ffcb0c(v68.y, k);
        v68.z = func_01ffcb0c(v68.z, k);
        v5c.x = b.m[9];
        v5c.y = b.m[10];
        v5c.z = b.m[11];
        WorldCurve_FromCurved(&v5c, &v5c);
        i = Idx(&t.a, 0x12e8, 0x131f);
        FishDisplay_SetEntry(r6->fishDisplay, i, &v5c, &v68, 0, 0, 0, 1, 1, 0x1f);
    }
}
}

namespace ns_02211818 {
extern "C" void PlayerActor_ReleaseCreatureUpdate(Obj *o) {
    Rec *r0 = (Rec *)&o->actionWork;
    u8 *r6 = o->netData.bytes;
    u8 *r5 = &r0->step;
    switch (*r5) {
    case 0:
        if (AnimFrameCtrl_hasPassedFrame((AnimFrameCtrl *)&o->bodyModel, 10)) {
            Unk_02006d14_playSe(o, 0x63);
        } else if (AnimFrameCtrl_hasPassedFrame((AnimFrameCtrl *)&o->bodyModel, 0x19)) {
            Unk_02006d14_playSe(o, 0x7f2);
        }
        if (AnimFrameCtrl_isFinished((AnimFrameCtrl *)&o->bodyModel)) {
            *r5 = 1;
            PlayerActor_ReleaseCreatureSetNetState(r6, 1);
        }
        break;
    case 1:
        if (CommManager_isLocalSlot(gCommManager, o->sessionSlot) == 0) {
            if (PlayerActor_ReleaseCreatureGetNetState(r6) >= 2) {
                *r5 = 2;
            }
        }
        break;
    case 2:
        if (r0->effect > -1) {
            Effect_End(r0->effect);
        }
        if (CommManager_isLocalSlot(gCommManager, o->sessionSlot)) {
            PlayerActor_ReleaseCreatureSetNetState(r6, 2);
        }
        Unk_020102ec_startAnimOnce(o, 0xa0, 3, 0);
        Unk_02006d14_playSe(o, 0x7f1);
        *r5 = 3;
        break;
    case 3:
        if (AnimFrameCtrl_isFinished((AnimFrameCtrl *)&o->bodyModel)) {
            Unk_02007694_requestAct05(o, 3, 5, -1);
        }
        break;
    }
}
}

namespace ns_02211818 {
extern "C" void PlayerActor_MainReleaseCreature(Obj *o) {
    Unk_020102ec_advanceAnim(o);
    volatile V3 v;
    V3 *pv = (V3 *)&o->drawPos;
    v.x = o->drawPos.x;
    v.y = pv->y;
    v.z = pv->z;
    s32 d0 = (s16)o->drawTilt;
    Blk b1 = o->bodyModel.mtx;
    Blk b2 = o->itemHandMtx;
    Unk_02006d14_calcHandMtx(o);
    PlayerActor_ReleaseCreatureUpdateModel(o);
    o->drawPos.x = v.x;
    o->drawPos.y = v.y;
    o->drawPos.z = v.z;
    o->drawTilt = d0;
    o->bodyModel.mtx = b1;
    o->itemHandMtx = b2;
    if (Unk_02006d14_netFollowTransform(o)) {
        Unk_020102ec_moveWithCollision(o);
    }
    Unk_020102ec_updateBodyCollider(o);
    PlayerActor_ReleaseCreatureUpdate(o);
}
}

namespace ns_02211818 {
extern "C" void PlayerActor_Act11SetArgs(u8 *p, u32 v) {
    *(u16 *)p = v;
}
}

namespace ns_02211818 {
extern "C" s32 PlayerActor_RequestAct11(Obj *o, u32 p, s32 a, s16 b) {
    Msg m;
    _ZN19PlayerActionRequest6assignEiis(&m, 0x11, a, b);
    PlayerActor_Act11SetArgs(m.unk_0c_b, p);
    s32 r = PlayerActor_pushRequest(o, &m);
    return r;
}
}

namespace ns_02211818 {
extern "C" void PlayerActor_SetupAct11(Obj *o, u8 *m) {
    Unk_020102ec_startAnimOnce(o, 0x9a, *(u16 *)(m + 0xc), 0);
}
}

namespace ns_02211818 {
extern "C" s32 PlayerActor_NetAct11(Obj *o, s16 a) {
    return PlayerActor_RequestAct11(o, 3, 5, a);
}
}

namespace ns_02211818 {
extern "C" void PlayerActor_Act11Update(Obj *o) {
    Unk_020102ec_advanceAnim(o);
    if (AnimFrameCtrl_isFinished((AnimFrameCtrl *)&o->bodyModel)) {
        Unk_020102ec_startAnim(o, 0, 3, 0);
    }
}
}

namespace ns_02211818 {
extern "C" void PlayerActor_MainAct11(Obj *o) {
    PlayerActor_Act11Update(o);
    if (CommManager_isLocalSlot(gCommManager, o->sessionSlot)) {
        Unk_02006d14_act10FaceTalkTarget(o);
    } else {
        Unk_02006d14_netFollowTransform(o);
    }
    Unk_020102ec_updateBodyCollider(o);
}
}

namespace ns_02211818 {
extern "C" void PlayerActor_PluckReachSetArgs(u8 *p, Pair *s) {
    p[0] = s->x;
    p[1] = s->y;
}
}

namespace ns_02211818 {
extern "C" s32 PlayerActor_RequestPluckReach(Obj *o, Pair *p, s32 a, s16 b) {
    Pair t;
    Msg m;
    _ZN19PlayerActionRequest6assignEiis(&m, 0x16, a, b);
    t.x = p->x;
    t.y = p->y;
    PlayerActor_PluckReachSetArgs(m.unk_0c_b, &t);
    s32 r = PlayerActor_pushRequest(o, &m);
    return r;
}
}

namespace ns_02211818 {
extern "C" void PlayerActor_PluckReachSetNetData(u8 *p, Pair *s) {
    p[0] = s->x;
    p[1] = s->y;
}
}

namespace ns_02211818 {
extern "C" void PlayerActor_PluckReachGetNetData(u8 *p, Pair *o) {
    o->x = p[0];
    o->y = p[1];
}
}

namespace ns_02211818 {
extern "C" void PlayerActor_SetupPluckReach(Obj *o, u8 *m) {
    Pair s;
    u8 *q = m + 0xc;
    u32 a = q[0];
    u32 b = q[1];
    u8 *r = (u8 *)&o->actionWork;
    r[0] = a;
    r[1] = b;
    r[2] = 0;
    s.x = a;
    s.y = b;
    PlayerActor_PluckReachSetNetData(o->netData.bytes, &s);
    Unk_020102ec_startAnim(o, 0x15, 3, 0);
    if (Unk_02006d14_getHeldToolKind(o) == 4) {
        HeldItemModel_PlayAnim((u8 *)&o->heldItemModel, 0xb, 3, 0);
    }
}
}

namespace ns_02210ef0 {
extern "C" void PlayerActor_NetPluckReach(Obj *o, s32 x) {
    if (o->action == 0x16) {
        o->netSeq = x;
    } else {
        Pair p(0, 0);
        PlayerActor_PluckReachGetNetData(o->netData.bytes, &p);
        Pair q = p;
        PlayerActor_RequestPluckReach(o, &q, 6, x);
    }
}
}

namespace ns_02210ef0 {
extern "C" void PlayerActor_PluckReachUpdate(Obj *o) {
    u8 *r = (u8 *)&o->actionWork;
    if (r[2] == 0) {
        s32 t = o->fieldAnswer;
        if (t == 2) {
            r[2] = 2;
        } else if (t == 1) {
            r[2] = 1;
        }
    }
    Unk_020102ec_advanceAnim(o);
}
}

namespace ns_02210ef0 {
extern "C" void PlayerActor_PluckReachCheckEnd(Obj *o) {
    if (CommManager_isLocalSlot(gCommManager, o->sessionSlot) == 0) {
        o->actionPriority = Unk_02007694_getActionDonePriority(o, o->action);
    }
    u8 *r = (u8 *)&o->actionWork;
    switch (r[2]) {
    case 0:
        break;
    case 1: {
        s32 y = r[1];
        s32 x = r[0];
        Pair q(x, y);
        PlayerActor_RequestPluck(o, (s32 *)&q, 6, -1);
        break;
    }
    case 2:
        o->actionPriority = Unk_02007694_getActionDonePriority(o, o->action);
        PlayerActor_requestWait(o, 3, 1, -1);
        break;
    }
}
}

namespace ns_02210ef0 {
extern "C" void PlayerActor_MainPluckReach(Obj *o) {
    if (CommManager_isLocalSlot(gCommManager, o->sessionSlot)) {
        PlayerActor_PluckReachUpdate(o);
    } else {
        Unk_020102ec_advanceAnim(o);
        u8 *r = (u8 *)&o->actionWork;
        s32 y = r[1];
        s32 x = r[0];
        Pair q(x, y);
        Unk_02006d14_netSyncNearUnit(o, &q);
    }
    Unk_020102ec_updateBodyCollider(o);
    PlayerActor_PluckReachCheckEnd(o);
}
}

namespace ns_02210ef0 {
extern "C" s32 PlayerActor_RequestPluck(Obj *o, s32 *p, s32 a, s32 b) {
    Msg m;
    Unk_ov003_02210ef0_Rec2 &q = *(Unk_ov003_02210ef0_Rec2 *)m.unk_0c_b;
    _ZN19PlayerActionRequest6assignEiis(&m, 0x17, a, b);
    q.a = p[0];
    q.b = p[1];
    s32 r = PlayerActor_pushRequest(o, &m);
    return r;
}
}

namespace ns_02210ef0 {
extern "C" void PlayerActor_SetupPluck(Obj *o, Msg *m) {
    u8 *p = (u8 *)m + 0xc;
    V3 v;
    FieldPos_FromUnitCenter(&v, p[0], p[1]);
    V3 *pv = (V3 *)&o->actionWork;
    *pv = v;
    ((u8 *)pv)[12] = 0;
    Unk_020102ec_startAnimOnce(o, 0x14, 3, 0);
    if (Unk_02006d14_getHeldToolKind(o) == 4) {
        HeldItemModel_PlayAnim((u8 *)&o->heldItemModel, 0xe, 3, 0);
    }
    u16 *g = BlockMap_GetItemPtrAtPos(gSceneBlockMap, &v, 0);
    o->shownItem = *g;
    o->actionItem = o->shownItem;
}
}

namespace ns_02210ef0 {
extern "C" void PlayerActor_NetPluck() {
}
}

namespace ns_02210ef0 {
extern "C" void PlayerActor_EndPluck(Obj *o) {
    if (CommManager_isLocalSlot(gCommManager, o->sessionSlot) == 0) {
        if (Unk_02006d14_testActionFlag(o, 0x1c)) {
            PlayerActor_PluckApply(o);
        }
    }
}
}

namespace ns_02210ef0 {
extern "C" void PlayerActor_PluckUpdate(Obj *o) {
    Unk_020102ec_advanceAnim(o);
    if (AnimFrameCtrl_hasPassedFrame((AnimFrameCtrl *)&o->bodyModel, 0xa)) {
        PlayerActor_PluckApply(o);
    }
}
}

namespace ns_02210ef0 {
extern "C" s32 PlayerActor_PluckApply(Obj *o) {
    s16 ang;
    u16 t2;
    Pair ab;
    V3 *pv = (V3 *)&o->actionWork;
    V3 v = *pv;
    ab.a = 0;
    ab.b = 0;
    FieldPos_ToUnit(&ab.a, &ab.b, &v);
    ang = o->rotY;
    switch (o->actionItem) {
    case 0x1f:
        Effect_Create(0x2e, &v, &ang, 0);
        break;
    case 0x20:
        Effect_Create(0x2f, &v, &ang, 0);
        break;
    case 0x21: {
        V3 t(0, 0, -0x800);
        VEC_Add(&v, &t, &v);
        Effect_Create(0x2d, &v, &ang, 0);
        break;
    }
    case 0x22: {
        V3 t(-0x800, 0, 0);
        VEC_Add(&v, &t, &v);
        Effect_Create(0x2d, &v, &ang, 0);
        break;
    }
    case 0x23: {
        V3 t(0x800, 0, 0xc00);
        VEC_Add(&v, &t, &v);
        Effect_Create(0x2d, &v, &ang, 0);
        break;
    }
    case 0x24: {
        V3 t(-0x800, 0, 0);
        VEC_Add(&v, &t, &v);
        Effect_Create(0x2d, &v, &ang, 0);
        break;
    }
    default: {
        u32 w = o->actionItem;
        if ((w >= 0x6e && w <= 0x73) || (w >= 0x74 && w <= 0x79) || (w >= 0x7a && w <= 0x7f) ||
            (w >= 0x80 && w <= 0x87) || w == 0x88 || w == 0x89 || (w >= 0x8a && w <= 0x8f) ||
            (w >= 0x90 && w <= 0x95) || (w >= 0x96 && w <= 0x9b) || (w >= 0x9c && w <= 0xa3)) {
            goto hit;
        }
        if (w != 0xa5 && w != 0xa4) {
            break;
        }
    hit:
        Effect_PlayById2(0x54, &v, 0, 0);
        t2 = o->actionItem;
        Pair c(ab.a, ab.b);
        Flower_SpawnPetalFxAt(&t2, &c, o->rotY, 2);
        Unk_02006d14_playSe(o, 0x7d8);
        break;
    }
    }
    switch (o->actionItem) {
    case 0x1f:
    case 0x20:
        Unk_02006d14_playSe(o, 0x7d8);
        break;
    case 0x21:
    case 0x22:
    case 0x23:
    case 0x24:
        Unk_02006d14_playSe(o, 0x7ec);
        break;
    }
    Pair d(ab.a, ab.b);
    PendingUnit_ApplyAt(&d, 0);
    Unk_02006d14_clearActionFlag(o, 0x1c);
}
}

namespace ns_02210ef0 {
extern "C" void PlayerActor_PluckCheckEnd(Obj *o) {
    if (AnimFrameCtrl_isFinished((AnimFrameCtrl *)&o->bodyModel)) {
        o->actionPriority = Unk_02007694_getActionDonePriority(o, o->action);
        PlayerActor_requestWait(o, 3, 1, -1);
    }
    if (((Unk_ov003_02210ef0_Bits *)&o->bodyModel.curFrame)->mid >= 0xe) {
        if (CommManager_isLocalSlot(gCommManager, o->sessionSlot)) {
            PlayerActor_ResumeWalkOrIdle(o);
        } else {
            Unk_02006d14_clearActionFlag(o, 0x12);
        }
    }
}
}

namespace ns_02210ef0 {
extern "C" void PlayerActor_MainPluck(Obj *o) {
    PlayerActor_PluckUpdate(o);
    V3 *pv = (V3 *)&o->actionWork;
    V3 v = *pv;
    Unk_02006d14_netSyncNearPoint(o, &v);
    Unk_020102ec_updateBodyCollider(o);
    Unk_020102ec_submitSceneCollider(o);
    PlayerActor_PluckCheckEnd(o);
}
}

namespace ns_02210ef0 {
extern "C" void PlayerActor_DoorApproachSetArgs(Rec *p, s32 a, s32 b, s16 c) {
    p->a = a;
    p->b = b;
    p->c = c;
}
}

namespace ns_02210ef0 {
extern "C" s32 PlayerActor_RequestDoorApproach(Obj *o, s32 a, s32 b, s16 c, s32 d, s32 e) {
    Msg m;
    _ZN19PlayerActionRequest6assignEiis(&m, 0x38, d, *(s16 *)&e);
    PlayerActor_DoorApproachSetArgs((DoorEnterWork *)m.unk_0c_b, a, b, c);
    s32 r = PlayerActor_pushRequest(o, &m);
    return r;
}
}

namespace ns_02210ef0 {
extern "C" void PlayerActor_DoorApproachSetWork(Rec *p, s32 a, s32 b, s16 c) {
    p->a = a;
    p->b = b;
    p->c = c;
}
}

namespace ns_02210ef0 {
extern "C" void PlayerActor_DoorApproachSetNetData(u8 *p, s32 a, s32 b, s16 c) {
    NetBuf_PackPair20(p, a, b);
    NetBuf_WriteS16B(p + 5, c);
}
}

namespace ns_02210ef0 {
extern "C" void PlayerActor_DoorApproachGetNetData(u8 *p, s32 *a, s32 *b, s16 *c) {
    NetBuf_UnpackPair20(p, a, b);
    *c = NetBuf_ReadS16B(p + 5);
}
}

namespace ns_02210ef0 {
extern "C" void PlayerActor_SetupDoorApproach(Obj *o, Msg *m) {
    u8 *p = (u8 *)m + 0xc;
    Unk_020102ec_startAnimOnce(o, 0x37, 3, 0);
    s32 a = *(s32 *)p;
    s32 b = *(s32 *)(p + 4);
    s16 c = *(s16 *)(p + 8);
    PlayerActor_DoorApproachSetWork((Rec *)&o->actionWork, a, b, c);
    PlayerActor_DoorApproachSetNetData(o->netData.bytes, a, b, c);
}
}

namespace ns_02210ef0 {
extern "C" void PlayerActor_NetDoorApproach(Obj *o, s32 x) {
    s16 ang;
    V3 pos;
    PlayerActor_DoorApproachGetNetData(o->netData.bytes, &pos.x, &pos.z, &ang);
    pos.y = o->position.y;
    V3 *pv = (V3 *)&o->position;
    *pv = pos;
    o->rotY = ang;
    PlayerActor_RequestDoorApproach(o, pos.x, pos.z, ang, 6, x);
}
}

namespace ns_02210ef0 {
extern "C" void PlayerActor_DoorApproachMove(Obj *o) {
    Rec *r = (Rec *)&o->actionWork;
    PlayerActor_StepTowardPose(o, r->a, r->b, r->c);
}
}

namespace ns_02210ef0 {
extern "C" void PlayerActor_DoorApproachUpdate(Obj *o) {
    Unk_020102ec_advanceAnim(o);
    if (AnimFrameCtrl_hasPassedFrame((AnimFrameCtrl *)&o->bodyModel, 8) || AnimFrameCtrl_hasPassedFrame((AnimFrameCtrl *)&o->bodyModel, 0xd)) {
        Unk_02006d14_playSe(o, 0x7d5);
    }
}
}

namespace ns_02210ef0 {
extern "C" void PlayerActor_DoorApproachCheckEnd(Obj *o) {
    if (AnimFrameCtrl_isFinished((AnimFrameCtrl *)&o->bodyModel)) {
        Rec *r = (Rec *)&o->actionWork;
        PlayerActor_RequestDoorEnter(o, 1, r->a, r->b, r->c, 6, -1);
    }
}
}

namespace ns_02210ef0 {
extern "C" void PlayerActor_MainDoorApproach(Obj *o) {
    PlayerActor_DoorApproachMove(o);
    PlayerActor_DoorApproachUpdate(o);
    Unk_020102ec_updateBodyCollider(o);
    PlayerActor_DoorApproachCheckEnd(o);
}
}

namespace ns_02210ef0 {
extern "C" void PlayerActor_DoorEnterSetArgs(Rec *p, u32 a, s32 b, s32 c, s16 d) {
    p->d = a;
    p->a = b;
    p->b = c;
    p->c = d;
}
}

namespace ns_02210ef0 {
extern "C" s32 PlayerActor_RequestDoorEnter(Obj *o, u8 a, s32 b, s32 c, s16 d, s32 e, s32 f) {
    Msg m;
    _ZN19PlayerActionRequest6assignEiis(&m, 0x39, e, *(s16 *)&f);
    PlayerActor_DoorEnterSetArgs((DoorEnterWork *)m.unk_0c_b, a, b, c, d);
    s32 r = PlayerActor_pushRequest(o, &m);
    return r;
}
}

namespace ns_02210ef0 {
extern "C" void PlayerActor_DoorEnterSetWork(Rec *p, u32 a, s32 b, s32 c, s16 d, u8 e) {
    p->d = a;
    p->a = b;
    p->b = c;
    p->c = d;
    p->e = e;
}
}

namespace ns_02210ef0 {
extern "C" void PlayerActor_DoorEnterSetNetData(u8 *p, u32 a, s32 b, s32 c, s16 e) {
    p[7] = a;
    NetBuf_PackPair20(p, b, c);
    NetBuf_WriteS16B(p + 5, e);
}
}

namespace ns_02210ef0 {
extern "C" void PlayerActor_DoorEnterGetNetData(u8 *p, u8 *a, s32 *b, s32 *c, u16 *e) {
    *a = p[7];
    NetBuf_UnpackPair20(p, b, c);
    *e = NetBuf_ReadS16B(p + 5);
}
}

namespace ns_02210ef0 {
extern "C" void PlayerActor_SetupDoorEnter(Obj *o, Msg *m) {
    Unk_02006d14_setActionFlag(o, 4);
    u8 *p = (u8 *)m + 0xc;
    Rec *r = (Rec *)&o->actionWork;
    s32 z = 0;
    s32 k = z;
    switch (p[0xa]) {
    case 0:
        Unk_020102ec_startAnimOnce(o, 0x33, 3, 0);
        break;
    case 1:
        Unk_020102ec_startAnimOnce(o, 0x32, 3, 0);
        break;
    case 2:
        k = 0xc;
        Unk_020102ec_startAnim(o, z, 3);
        break;
    }
    u32 id = p[0xa];
    Pair t = *(Pair *)p;
    s16 ang = *(s16 *)(p + 8);
    Unk_ov003_02210f7c_Ns::PlayerActor_DoorEnterSetWork(r, id, t.a, t.b, ang, k);
    PlayerActor_DoorEnterSetNetData(o->netData.bytes, id, t.a, t.b, ang);
    s32 b = CommManager_isLocalSlot(gCommManager, o->sessionSlot) ? 1 : 0;
    Building_OpenDoorForEntryAt((V3 *)&o->position, b);
}
}

namespace ns_02210ef0 {
extern "C" void PlayerActor_NetDoorEnter(Obj *o, s32 x) {
    if ((u32)(o->action - 0x38) <= 2) {
        o->netSeq = x;
    } else {
        u8 a;
        u8 f;
        s16 ang;
        s32 o1, o2;
        V3 pos;
        PlayerActor_DoorEnterGetNetData(o->netData.bytes, &a, &pos.x, &pos.z, (u16 *)&ang);
        pos.y = o->position.y;
        if (PlayerActor_GetSlotPosXZ(&f, &o1, &o2, -1, o->sessionSlot)) {
            o->position.x = o1;
            o->position.z = o2;
        }
        o->rotY = ang;
        PlayerActor_RequestDoorEnter(o, a, pos.x, pos.z, ang, 6, x);
    }
}
}

namespace ns_022105bc {
extern "C" s32 PlayerActor_DoorEnterMove(Obj *o) {
    Rec3 *r = (Rec3 *)&o->actionWorkRaw[0];
    u8 *p = &r->cnt;
    if (r->cnt) {
        *p = r->cnt - 1;
        if (*p == 0) {
            Unk_020102ec_startAnimOnce(o, 0x33, 3, 0);
        }
    } else {
        PlayerActor_StepTowardPose(o, r->a, r->b, r->c);
    }
}
}

namespace ns_022105bc {
extern "C" void PlayerActor_DoorEnterUpdate(Obj *o) {
    Unk_020102ec_advanceAnim(o);
    if (o->animId == 0x32) {
        s32 m = ((Bits *)&o->bodyModel.curFrame)->mid;
        if (m > 0x16) goto r_hi;
        if (m >= 0x16) goto hit;
        if (m > 0xc) goto done;
        if (m < 8) goto done;
        switch (m) {
        case 8: goto hit;
        case 0xc: goto hit;
        }
        goto done;
    r_hi:
        if (m > 0x1b) goto r34;
        switch (m) {
        case 0x1b: goto hit;
        }
        goto done;
    r34:
        if (m != 0x22) goto done;
    hit:
        Unk_02006d14_playFootstepSe(o);
    done:;
    } else if (o->animId == 0x33) {
        switch ((s32)((Bits *)&o->bodyModel.curFrame)->mid) {
        case 9:
        case 0x11:
        case 0x1a:
            Unk_02006d14_playFootstepSe(o);
            break;
        }
    }
}
}

namespace ns_022105bc {
extern "C" s32 PlayerActor_DoorEnterCheckEnd(Obj *o) {
    if (AnimFrameCtrl_isFinished((AnimFrameCtrl *)&o->bodyModel)) {
        PlayerActor_RequestDoorEntered(o, 6, -1);
    }
}
}

namespace ns_022105bc {
extern "C" s32 PlayerActor_MainDoorEnter(Obj *o) {
    PlayerActor_DoorEnterMove(o);
    PlayerActor_DoorEnterUpdate(o);
    Unk_020102ec_updateBodyCollider(o);
    PlayerActor_DoorEnterCheckEnd(o);
}
}

namespace ns_022105bc {
extern "C" s32 PlayerActor_RequestDoorEntered(Obj *o, s32 a, s32 b) {
    Msg m;
    _ZN19PlayerActionRequest6assignEiis(&m, 0x3a, a, b);
    s32 r = PlayerActor_pushRequest(o, &m);
    return r;
}
}

namespace ns_022105bc {
extern "C" void PlayerActor_SetupDoorEntered(Obj *o) {
    Unk_02006d14_clearActionFlag(o, 0);
    o->drawStep = 0;
}
}

namespace ns_022105bc {
extern "C" s32 PlayerActor_NetDoorEntered(Obj *o, s32 a) {
    return PlayerActor_RequestDoorEntered(o, 6, a);
}
}

namespace ns_022105bc {
extern "C" void PlayerActor_MainDoorEntered() {}
}

namespace ns_022105bc {
extern "C" s32 PlayerActor_RequestDoorExit(Obj *o, s32 a, s32 b) {
    Msg m;
    Rec2 &q = *(Rec2 *)m.unk_0c_b;
    _ZN19PlayerActionRequest6assignEiis(&m, 0x3b, a, b);
    q.a = 0;
    q.b = 0;
    s32 r = PlayerActor_pushRequest(o, &m);
    return r;
}
}

namespace ns_022105bc {
extern "C" s32 PlayerActor_RequestDoorExitWith(Obj *o, u32 a, u32 b, s32 c, s16 d) {
    Msg m;
    _ZN19PlayerActionRequest6assignEiis(&m, 0x3b, c, d);
    Rec2 &q = *(Rec2 *)m.unk_0c_b;
    q.a = a;
    q.b = b;
    s32 r = PlayerActor_pushRequest(o, &m);
    return r;
}
}

namespace ns_022105bc {
extern "C" void PlayerActor_DoorExitSetNetData(u8 *p, u32 a, u32 b) {
    p[0] = a;
    p[1] = b;
}
}

namespace ns_022105bc {
extern "C" void PlayerActor_DoorExitGetNetData(u8 *p, u8 *a, u8 *b) {
    *a = p[0];
    *b = p[1];
}
}

namespace ns_022105bc {
extern "C" s32 PlayerActor_SetupDoorExit(Obj *o, Msg *m) {
    Unk_02006d14_clearActionFlag(o, 0);
    u8 *p = (u8 *)m + 0xc;
    Rec2 *rec = (Rec2 *)&o->actionWorkRaw[0];
    s32 t = 0;
    void *g = gCommManager;
    s32 n;
    if (CommManager_isLocalSlot(g, o->sessionSlot)) {
        n = Field_GetDoorExitMode();
    } else {
        n = p[0];
    }
    if (CommManager_isLocalSlot(g, o->sessionSlot)) {
        void *q = PlayerData_GetCurrent();
        if (Scene_GetCurrent() == 0 && q != 0 && PlayerData_testFlag(q, 0x23) != 0 &&
            (SceneId_IsHouseRoom(Scene_GetPrevious()) != 0 || Scene_GetPrevious() == 6)) {
            t = 1;
        } else if (TownSessionState_TestFlag(TownSessionState_Get(), 0) != 0) {
            t = 2;
        } else if (TownSessionState_TestFlag(TownSessionState_Get(), 5) != 0) {
            t = 3;
        }
    } else {
        t = p[1];
    }
    u32 u;
    if (n != 0) {
        Unk_020102ec_startAnimOnce(o, 0x34, 0, 0);
        u = 0;
        o->drawStep = 1;
    } else {
        u = (u8)Building_GetDoorAnimParamAt((u8 *)&o->position);
        if (u <= 1) {
            Unk_020102ec_startAnimOnce(o, 0x35, 0, 0);
        } else {
            Unk_020102ec_startAnim(o, 0x36, 0, 0);
        }
        o->drawStep = 1;
    }
    rec->b = u;
    rec->a = t;
    PlayerActor_DoorExitSetNetData(o->netData.bytes, n, t);
    Building_OpenDoorForExitAt((u8 *)&o->position);
}
}

namespace ns_022105bc {
extern "C" void PlayerActor_NetDoorExit(Obj *o, s32 a) {
    if (o->action == 0x3b) {
        o->netSeq = a;
    } else {
        Rec2 r;
        PlayerActor_DoorExitGetNetData(o->netData.bytes, &r.a, &r.b);
        Unk_ov003_02210b94_Ns::PlayerActor_RequestDoorExitWith(o, r.a, r.b, 6, a);
    }
}
}

namespace ns_022105bc {
extern "C" void PlayerActor_DoorExitUpdate(Obj *o) {
    u8 *p = &o->actionWorkRaw[1]; // Rec2.b: frames to wait before the exit walk
    Unk_020102ec_advanceAnim(o);
    u32 c = o->actionWorkRaw[1];
    if (c) {
        *p = c - 1;
        if (*p == 0) {
            if (o->animId == 0x36) {
                Unk_020102ec_startAnimOnce(o, 0x35, 5, 0);
            }
        }
    } else {
        if (o->animId == 0x34) {
            s32 m = ((Bits *)&o->bodyModel.curFrame)->mid;
            if (m > 0x1c) goto r_hi;
            if (m >= 0x1c) goto hit;
            if (m > 0x11) goto l23;
            if (m < 0xd) goto done;
            switch (m) {
            case 0xd: goto hit;
            case 0x11: goto hit;
            }
            goto done;
        l23:
            switch (m) {
            case 0x17: goto hit;
            }
            goto done;
        r_hi:
            if (m > 0x25) goto r40;
            switch (m) {
            case 0x25: goto hit;
            }
            goto done;
        r40:
            if (m != 0x28) goto done;
        hit:
            Unk_02006d14_playFootstepSe(o);
        done:;
        } else if (o->animId == 0x35) {
            switch ((s32)((Bits *)&o->bodyModel.curFrame)->mid) {
            case 4:
            case 9:
            case 0xe:
            case 0x14:
                Unk_02006d14_playFootstepSe(o);
                break;
            }
        }
    }
}
}

namespace ns_022105bc {
extern "C" void PlayerActor_DoorExitCheckEnd(Obj *o) {
    u16 v[8];
    if (!AnimFrameCtrl_isFinished((AnimFrameCtrl *)&o->bodyModel)) return;
    Unk_02006d14_nudgeForward(o);
    o->actionPriority = Unk_02007694_getActionDonePriority(o, o->action);
    u8 *pst = &o->actionWorkRaw[0];
    u8 st = *pst;
    PlayerActor_GetHeldItem(v, o);
    if (st <= 1) {
        BOOL r = FALSE;
        volatile u16 *pv = &v[0];
        u32 x = *pv;
        u32 y = *pv;
        if (y < 0x1380 || x > 0x139f) {
        } else {
            r = TRUE;
        }
        if (r != 0 || (x >= 0x13a0 && x <= 0x13a7)) {
            Unk_02006d14_clearActionFlag(o, 0x1d);
        }
    }
    switch (*pst) {
    case 0: {
        BOOL r = Unk_ov003_022107fc_Eq(v, &v[5]);
        if (r == 0 && Taxi_IsLeaving() == 0 && Unk_02006d14_testActionFlag(o, 0x1d) == 0) {
            PlayerActor_RequestStowItem(o, 2, 2, 0, 0, 0, 6, -1);
            return;
        }
        if (CommManager_isLocalSlot(gCommManager, o->sessionSlot)) {
            if (Unk_ov003_022107fc_Eq(v, &v[2])) {
                Unk_02006d14_setActionFlag(o, 0);
            }
        }
    }
    case 1:
        if (Unk_ov003_022107fc_Eq(v, &v[3])) {
            Unk_02006d14_setActionFlag(o, 0);
        }
        TalkRequest_FinishSceneEntry();
        Unk_02006d14_clearActionFlag(o, 0x1d);
        PlayerActor_requestWait(o, 3, 1, -1);
        break;
    case 2: {
        void *g = gCommManager;
        if (CommManager_isLocalSlot(g, o->sessionSlot)) {
            TownSessionState_ClearFlag(TownSessionState_Get(), 0);
        }
        if (Taxi_IsLeaving() == 0) {
            Unk_02006d14_requestAct76(o, 2, 0, 0, 6, -1);
            return;
        }
        TalkRequest_FinishSceneEntry();
        if (CommManager_isLocalSlot(g, o->sessionSlot)) {
            goto x;
        } else {
            PlayerActor_GetHeldItem(&v[1], o);
            if (Unk_ov003_022107fc_Eq(&v[1], &v[4])) {
            x:
                Unk_02006d14_setActionFlag(o, 0);
            }
        }
        Unk_02006d14_clearActionFlag(o, 0x1d);
        PlayerActor_requestWait(o, 3, 1, -1);
        break;
    }
    case 3:
        if (CommManager_isLocalSlot(gCommManager, o->sessionSlot)) {
            TownSessionState_ClearFlag(TownSessionState_Get(), 5);
            PlayerData_clearFlag(PlayerData_GetCurrent(), 1);
            TownBbs_UpdateDaily();
        }
        Unk_02006d14_requestAct76(o, 3, 0, 0, 6, -1);
        break;
    }
}
}

namespace ns_022105bc {
extern "C" void PlayerActor_MainDoorExit(Obj *o) {
    PlayerActor_DoorExitUpdate(o);
    Unk_020102ec_updateBodyCollider(o);
    Unk_ov003_022107e0_Ns::PlayerActor_DoorExitCheckEnd(o);
}
}

namespace ns_022105bc {
extern "C" s32 PlayerActor_RequestAct3C(Obj *o, s32 a, s32 b) {
    Msg m;
    _ZN19PlayerActionRequest6assignEiis(&m, 0x3c, a, b);
    s32 r = PlayerActor_pushRequest(o, &m);
    return r;
}
}

namespace ns_022105bc {
extern "C" void PlayerActor_SetupAct3C(Obj *o) {
    Unk_02006d14_clearActionFlag(o, 0);
    if (Field_GetDoorExitMode()) {
        Unk_020102ec_startAnimOnce(o, 0x34, 0, 0);
    } else {
        Unk_020102ec_startAnimOnce(o, 0x35, 0, 0);
    }
    o->drawStep = 0;
    if (TownSessionState_TestFlag(TownSessionState_Get(), 0) != 0 || TownSessionState_TestFlag(TownSessionState_Get(), 5) != 0) {
        if (CommManager_isLocalSlot(gCommManager, o->sessionSlot)) {
            Bgm_RequestSilence(0x12, 0xf, 0);
        }
    }
}
}

namespace ns_022105bc {
extern "C" s32 PlayerActor_NetAct3C(Obj *o, s32 a) {
    return PlayerActor_RequestAct3C(o, 1, a);
}
}

namespace ns_022105bc {
extern "C" s32 PlayerActor_EndAct3C(Obj *o, s32 a) {
    if (a != 0x3b && a != 0x3d) {
        Unk_02006d14_setActionFlag(o, 0);
    }
}
}

namespace ns_022105bc {
extern "C" void PlayerActor_MainAct3C() {}
}

namespace ns_022105bc {
extern "C" void PlayerActor_StowItemSetArgs(Pay *p, s32 a, u32 b, s32 c, s32 d, s16 e) {
    p->a = a;
    p->b = b;
    p->c = c;
    p->d = d;
    p->e = e;
}
}

namespace ns_022105bc {
extern "C" s32 PlayerActor_RequestStowItem(Obj *o, s32 a, s32 b, s32 c, s32 d, s16 e, s32 f, s16 g) {
    u16 v[2];
    PlayerActor_GetHeldItem(v, o);
    {
        BOOL r = FALSE;
        volatile u16 *pv = &v[0];
        u32 x = *pv;
        u32 y = *pv;
        if (y < 0x1380 || x > 0x139f) {
        } else {
            r = TRUE;
        }
        if (r != 0 || (x >= 0x13a0 && x <= 0x13a7)) {
            return PlayerActor_RequestStowUmbrella(o, a, b, c, d, e, f, g);
        }
    }
    Msg m;
    _ZN19PlayerActionRequest6assignEiis(&m, 0x3d, f, g);
    PlayerActor_StowItemSetArgs((Pay *)m.unk_0c_b, a, b, c, d, e);
    Unk_02006d14_clearActionFlag(o, 1);
    s32 r = PlayerActor_pushRequest(o, &m);
    return r;
}
}

namespace ns_022105bc {
extern "C" void PlayerActor_StowItemSetWork(Rec *p, s32 a, u32 b, s32 c, s32 d, s16 e, s32 f) {
    p->a = a;
    p->b = b;
    p->c = c;
    p->d = d;
    p->e = e;
    p->f = f;
}
}

namespace ns_022105bc {
extern "C" void PlayerActor_StowItemSetNetData(u8 *p, u32 a, u32 b, u32 c, s16 d) {
    p[7] = a;
    NetBuf_PackPair20(p, b, c);
    NetBuf_WriteS16B(p + 5, d);
}
}

namespace ns_022105bc {
extern "C" void PlayerActor_StowItemGetNetData(u8 *p, u8 *a, u32 b, u32 c, u16 *d) {
    *a = p[7];
    NetBuf_UnpackPair20(p, b, c);
    *d = NetBuf_ReadS16B(p + 5);
}
}

namespace ns_0220fc88 {
extern "C" s32 PlayerActor_SetupStowItem(Obj *o, Msg *a) {
    RecA *r = (RecA *)a->unk_0c_b;
    H hh;
    RecA *p7d0 = (RecA *)&o->actionWork;
    PlayerActor_GetHeldItem(&hh, o);
    s32 q = PlayerActor_GetPlayerData(o);
    hh.b = 0xfff1;
    PlayerData_setHeldItem(q, &hh.b);
    Unk_020102ec_startAnimOnce(o, 0x6b, 3, 0);
    PlayerData_setHeldItem(q, &hh);
    s32 v;
    if ((r->bits & 3) == 2) {
        Unk_02006d14_setActionFlag(o, 0);
        v = 0;
        u32 mid = ((Unk_ov003_0220fc88_Bits *)&o->bodyModel.numFrames)->mid;
        AnimFrameCtrl_setup((AnimFrameCtrl *)&o->bodyModel, mid, 3, 0x1000, (u16)(mid - 1));
    } else {
        v = 0x1000;
    }
    s32 st = r->st;
    u8 bits = r->bits;
    s32 x = r->a;
    s32 y = r->b;
    s32 h2 = r->h;
    PlayerActor_StowItemSetWork(p7d0, st, bits, x, y, h2, v);
    u8 *p8 = o->netData.bytes;
    switch (st) {
    case 0x38:
        break;
    case 0x39:
        bits |= 0x10;
        break;
    case 0x10:
        bits |= 0x20;
        break;
    case 2:
        bits |= 0x30;
        break;
    }
    PlayerActor_StowItemSetNetData(p8, bits, x, y, h2);
    Unk_02006d14_playSe(o, 0x4f);
}
}

namespace ns_0220fc88 {
extern "C" s32 PlayerActor_NetStowItem(Obj *o, s32 a) {
    u8 b;
    s16 h;
    s32 x, y;
    PlayerActor_StowItemGetNetData(o->netData.bytes, &b, &x, &y, &h);
    s32 id;
    switch (b & 0xf0) {
    case 0:
        id = 0x38;
        break;
    case 0x10:
        id = 0x39;
        break;
    case 0x20:
        id = 0x10;
        break;
    default:
        id = 2;
        break;
    }
    PlayerActor_RequestStowItem(o, id, (u8)(b & 0xf), x, y, h, 6, a);
}
}

namespace ns_0220fc88 {
extern "C" s32 PlayerActor_EndStowItem(Obj *o) {
    if ((((RecB *)&o->actionWork)->bits & 3) == 2) {
        o->heldItemModel.scale = 0x1000;
    } else {
        o->heldItemModel.scale = 0;
        Unk_02006d14_clearActionFlag(o, 0);
    }
}
}

namespace ns_0220fc88 {
extern "C" void PlayerActor_StowItemUpdate(Obj *o) {
    RecB *r = (RecB *)&o->actionWork;
    s32 *t = &r->timer;
    s32 target;
    if ((r->bits & 3) == 2) {
        target = 0x1000;
        if (((Unk_ov003_0220fc88_Bits *)&o->bodyModel.curFrame)->mid < 8) {
            if (AnimFrameCtrl_hasPassedFrame((AnimFrameCtrl *)&o->bodyModel, 7)) {
                Unk_02006d14_applyHeldItemPose(o, 0, 7);
            }
            if (*t != 0x1000) {
                *t += 0x249;
                if (*t > 0x1000) *t = 0x1000;
            }
        }
    } else {
        target = 0;
        if (*t != 0) {
            *t -= 0x249;
            if (*t < 0) *t = target;
        }
    }
    o->heldItemModel.scale = r->timer;
    if (AnimFrameCtrl_isFinished((AnimFrameCtrl *)&o->bodyModel) && target == *t) {
        Unk_02006d14_setActionFlag(o, 1);
        switch (r->st) {
        case 0x38:
            Unk_02006d14_clearActionFlag(o, 0);
            PlayerActor_RequestDoorApproach(o, r->a, r->b, r->h, 6, -1);
            break;
        case 0x39:
            Unk_02006d14_clearActionFlag(o, 0);
            PlayerActor_RequestDoorEnter(o, (u8)((r->bits & 0xc) >> 2), r->a, r->b, r->h, 6, -1);
            break;
        case 0x10:
            Unk_02006d14_clearActionFlag(o, 0);
            o->actionPriority = Unk_02007694_getActionDonePriority(o, o->action);
            Unk_02006d14_requestAct10(o, 3, 5, -1);
            break;
        case 2:
            TalkRequest_FinishSceneEntry();
            o->actionPriority = Unk_02007694_getActionDonePriority(o, o->action);
            PlayerActor_requestWait(o, 3, 1, -1);
            break;
        }
    }
}
}

namespace ns_0220fc88 {
extern "C" s32 PlayerActor_MainStowItem(Obj *o) {
    Unk_020102ec_advanceAnim(o);
    Unk_020102ec_updateBodyCollider(o);
    PlayerActor_StowItemUpdate(o);
}
}

namespace ns_0220fc88 {
extern "C" s32 PlayerActor_StowUmbrellaSetArgs(RecA *p, s32 st, u32 bits, s32 x, s32 y, s32 h) {
    p->st = st;
    p->bits = bits;
    p->a = x;
    p->b = y;
    p->h = *(s16 *)&h;
}
}

namespace ns_0220fc88 {
extern "C" s32 PlayerActor_RequestStowUmbrella(Obj *o, s32 id, u8 low, s32 x, s32 y, s16 h, s32 a, s32 b) {
    Msg m;
    _ZN19PlayerActionRequest6assignEiis(&m, 0x3e, a, *(s16 *)&b);
    PlayerActor_StowUmbrellaSetArgs((PlayerStowItemArgs *)m.unk_0c_b, id, low, x, y, h);
    Unk_02006d14_clearActionFlag(o, 1);
    s32 r = PlayerActor_pushRequest(o, &m);
    return r;
}
}

namespace ns_0220fc88 {
extern "C" s32 PlayerActor_StowUmbrellaSetWork(RecA *p, s32 st, u32 bits, s32 x, s32 y, s32 h) {
    p->st = st;
    p->bits = bits;
    p->a = x;
    p->b = y;
    p->h = *(s16 *)&h;
}
}

namespace ns_0220fc88 {
extern "C" s32 PlayerActor_StowUmbrellaSetNetData(u8 *p, u32 id, s32 x, s32 y, s32 h) {
    p[7] = id;
    NetBuf_PackPair20(p, x, y);
    NetBuf_WriteS16B(p + 5, *(s16 *)&h);
}
}

namespace ns_0220fc88 {
extern "C" s32 PlayerActor_StowUmbrellaGetNetData(u8 *p, u8 *a, s32 *b, s32 *c, s16 *d) {
    *a = p[7];
    NetBuf_UnpackPair20(p, b, c);
    *d = NetBuf_ReadS16B(p + 5);
}
}

namespace ns_0220fc88 {
extern "C" s32 PlayerActor_SetupStowUmbrella(Obj *o, Msg *a) {
    RecA *r = (RecA *)a->unk_0c_b;
    u8 bits = r->bits;
    RecA *p7d0 = (RecA *)&o->actionWork;
    HeldItemModel_PlayAnim((u8 *)&o->heldItemModel, 0x24, 3, 1);
    s32 x, y, st;
    s16 h;
    if ((bits & 3) != 2) {
        Unk_020102ec_startAnimOnce(o, 0x62, 3, 0);
        u32 mid = ((Unk_ov003_0220fc88_Bits *)&o->bodyModel.numFrames)->mid;
        AnimFrameCtrl_setup((AnimFrameCtrl *)&o->bodyModel, mid, 3, 0x1000, (u16)(mid - 1));
        BlendAnimModel *s = HeldItemModel_GetModel((u8 *)&o->heldItemModel);
        u32 mid2 = ((Unk_ov003_0220fc88_Bits *)&s->numFrames)->mid;
        AnimFrameCtrl_setup(&static_cast<AnimFrameCtrl &>(*s), mid2, 3, 0x1000, (u16)(mid2 - 1));
        Unk_02006d14_playSe(o, 0x858);
    } else {
        H hh;
        PlayerActor_GetHeldItem(&hh, o);
        s32 q = PlayerActor_GetPlayerData(o);
        hh.b = 0xfff1;
        PlayerData_setHeldItem(q, &hh.b);
        Unk_020102ec_startAnimOnce(o, 0x62, 3, 0);
        PlayerData_setHeldItem(q, &hh);
        Unk_02006d14_clearActionFlag(o, 0);
    }
    st = r->st;
    x = r->a;
    y = r->b;
    h = r->h;
    PlayerActor_StowUmbrellaSetWork(p7d0, st, bits, x, y, h);
    u8 *p8 = o->netData.bytes;
    switch (st) {
    case 0x38:
        break;
    case 0x39:
        bits |= 0x10;
        break;
    case 0x10:
        bits |= 0x20;
        break;
    case 2:
        bits |= 0x30;
        break;
    }
    PlayerActor_StowUmbrellaSetNetData(p8, bits, x, y, h);
    Unk_02006d14_playSe(o, 0x4f);
}
}

namespace ns_0220fc88 {
extern "C" s32 PlayerActor_NetStowUmbrella(Obj *o, s32 a) {
    u8 b;
    s16 h;
    s32 x, y;
    PlayerActor_StowUmbrellaGetNetData(o->netData.bytes, &b, &x, &y, &h);
    s32 id;
    switch (b & 0xf0) {
    case 0:
        id = 0x38;
        break;
    case 0x10:
        id = 0x39;
        break;
    case 0x20:
        id = 0x10;
        break;
    default:
        id = 2;
        break;
    }
    PlayerActor_RequestStowUmbrella(o, id, (u8)(b & 0xf), x, y, h, 6, a);
}
}

namespace ns_0220fc88 {
extern "C" void PlayerActor_StowUmbrellaUpdate(Obj *o) {
    Unk_020102ec_advanceAnim(o);
    RecA *r = (RecA *)&o->actionWork;
    if ((r->bits & 3) != 2) {
        if (((Unk_ov003_0220fc88_Bits *)&o->bodyModel.curFrame)->mid < 6) {
            if (AnimFrameCtrl_hasPassedFrame((AnimFrameCtrl *)&o->bodyModel, 5)) {
                Unk_02006d14_clearActionFlag(o, 0);
            }
        }
    } else {
        if (((Unk_ov003_0220fc88_Bits *)&o->bodyModel.curFrame)->mid < 8) {
            if (AnimFrameCtrl_hasPassedFrame((AnimFrameCtrl *)&o->bodyModel, 7)) {
                Unk_02006d14_setActionFlag(o, 0);
                Unk_02006d14_playSe(o, 0x857);
            }
        }
    }
}
}

namespace ns_0220fc88 {
extern "C" void PlayerActor_StowUmbrellaCheckEnd(Obj *o) {
    RecA *r = (RecA *)&o->actionWork;
    if (AnimFrameCtrl_isFinished((AnimFrameCtrl *)&o->bodyModel)) {
        Unk_02006d14_setActionFlag(o, 1);
        switch (r->st) {
        case 0x38:
            Unk_02006d14_clearActionFlag(o, 0);
            PlayerActor_RequestDoorApproach(o, r->a, r->b, r->h, 6, -1);
            break;
        case 0x39:
            Unk_02006d14_clearActionFlag(o, 0);
            PlayerActor_RequestDoorEnter(o, (u8)((r->bits & 0xc) >> 2), r->a, r->b, r->h, 6, -1);
            break;
        case 0x10:
            Unk_02006d14_clearActionFlag(o, 0);
            o->actionPriority = Unk_02007694_getActionDonePriority(o, o->action);
            Unk_02006d14_requestAct10(o, 3, 5, -1);
            break;
        case 2:
            TalkRequest_FinishSceneEntry();
            o->actionPriority = Unk_02007694_getActionDonePriority(o, o->action);
            PlayerActor_requestWait(o, 3, 1, -1);
            break;
        }
    }
}
}

namespace ns_0220fc88 {
extern "C" s32 PlayerActor_MainStowUmbrella(Obj *o) {
    PlayerActor_StowUmbrellaUpdate(o);
    Unk_020102ec_updateBodyCollider(o);
    PlayerActor_StowUmbrellaCheckEnd(o);
}
}

namespace ns_0220fc88 {
extern "C" s32 PlayerActor_RequestUmbrellaSpin(Obj *o, s32 a, s16 b) {
    Msg m;
    _ZN19PlayerActionRequest6assignEiis(&m, 0x45, a, b);
    s32 r = PlayerActor_pushRequest(o, &m);
    return r;
}
}

namespace ns_0220fc88 {
extern "C" void PlayerActor_UmbrellaSpinInitWork(u8 *p) {
    *(u16 *)p = 0;
    *(u16 *)(p + 2) = 0x20;
    *(s32 *)(p + 4) = -1;
}
}

namespace ns_0220fc88 {
extern "C" s32 PlayerActor_SetupUmbrellaSpin(Obj *o) {
    Unk_020102ec_startAnimOnce(o, 0x63, 3, 0);
    PlayerActor_UmbrellaSpinInitWork((u8 *)&o->actionWork);
    Unk_02006d14_playSe(o, 0x856);
    Unk_02006d14_setActionFlag(o, 9);
}
}

namespace ns_0220fc88 {
extern "C" s32 PlayerActor_NetUmbrellaSpin(Obj *o, s16 b) {
    return PlayerActor_RequestUmbrellaSpin(o, 6, b);
}
}

namespace ns_0220fc88 {
extern "C" void PlayerActor_EndUmbrellaSpin(Obj *o) {
    s32 h = ((RecB *)&o->actionWork)->a;
    if (h != -1) {
        Effect_End(h);
    }
}
}

namespace ns_0220fc88 {
extern "C" s32 PlayerActor_UmbrellaSpinEffect(Obj *o) {
    Unk_020102ec_advanceAnim(o);
    s32 *p = (s32 *)&o->actionWorkRaw[4]; // RecB.a
    V3 v(o->heldItemJointMtx.m[9], o->heldItemJointMtx.m[10], o->heldItemJointMtx.m[11]);
    WorldCurve_FromCurved(&v, &v);
    if (((RecB *)&o->actionWork)->a == -1) {
        *p = Effect_Create(0x33, &v, &o->rotY, 0);
    } else {
        Effect_SetPosition(((RecB *)&o->actionWork)->a, &v, &o->rotY);
    }
}
}

namespace ns_0220fc88 {
extern "C" void PlayerActor_UmbrellaSpinCheckEnd(Obj *o) {
    if (AnimFrameCtrl_isFinished((AnimFrameCtrl *)&o->bodyModel)) {
        o->actionPriority = Unk_02007694_getActionDonePriority(o, o->action);
        PlayerActor_requestWait(o, 3, 1, -1);
    }
    u32 m = ((Unk_ov003_0220fc88_Bits *)&o->bodyModel.curFrame)->mid;
    if (m >= 0xe) {
        if (CommManager_isLocalSlot(gCommManager, o->sessionSlot)) {
            PlayerActor_ResumeWalkOrIdle(o);
        }
    }
}
}

namespace ns_0220fc88 {
extern "C" s32 PlayerActor_MainUmbrellaSpin(Obj *o) {
    PlayerActor_UmbrellaSpinEffect(o);
    if (CommManager_isLocalSlot(gCommManager, o->sessionSlot)) {
        Unk_020102ec_moveWithCollision(o);
    } else {
        Unk_02006d14_netFollowTransform(o);
    }
    Unk_020102ec_updateBodyCollider(o);
    Unk_020102ec_submitSceneCollider(o);
    PlayerActor_UmbrellaSpinCheckEnd(o);
}
}

namespace ns_0220fc88 {
extern "C" void PlayerActor_AxeSwingSetArgs(s32 *p, s32 a, s32 b, u32 c) {
    p[0] = a;
    p[1] = b;
    *(u8 *)&p[2] = c;
}
}

namespace ns_0220f314 {
extern "C" s32 PlayerActor_RequestAxeSwing(Obj *o, s32 a, s16 b) {
    Msg m;
    u8 *p = m.unk_0c_b;
    _ZN19PlayerActionRequest6assignEiis(&m, 0x46, a, b);
    if (o->hasTargetPos) {
        PlayerActor_AxeSwingSetArgs(p, o->targetPos.x, o->targetPos.z, 1);
    } else {
        PlayerActor_AxeSwingSetArgs(p, o->toolTargetPos.x, o->toolTargetPos.z, o->toolTargetKind != 0 ? 1 : 0);
    }
    s32 r = PlayerActor_pushRequest(o, &m);
    return r;
}
}

namespace ns_0220f314 {
extern "C" s32 PlayerActor_RequestAxeSwingAt(Obj *o, s32 *a, s32 *b, u8 *c, s32 d, s32 e) {
    Msg m;
    _ZN19PlayerActionRequest6assignEiis(&m, 0x46, d, *(s16 *)&e);
    PlayerActor_AxeSwingSetArgs(m.unk_0c_b, *a, *b, *c);
    s32 r = PlayerActor_pushRequest(o, &m);
    return r;
}
}

namespace ns_0220f314 {
extern "C" void PlayerActor_AxeSwingSetWork(u8 *d, V3 *v, s32 a) {
    AxeSwingWork *r = (AxeSwingWork *)d;
    r->v.x = v->x;
    r->v.y = v->y;
    r->v.z = v->z;
    r->h = a;
}
}

namespace ns_0220f314 {
extern "C" s32 PlayerActor_AxeSwingSetNetData(void *p, s32 a, s32 b, u8 c) {
    NetBuf_PackPair20(p, a, b);
    ((u8 *)p)[5] = c;
}
}

namespace ns_0220f314 {
extern "C" void PlayerActor_AxeSwingGetNetData(void *p, s32 *a, s32 *b, u8 *c) {
    NetBuf_UnpackPair20(p, a, b);
    u32 t = ((u8 *)p)[5];
    *c = t;
}
}

namespace ns_0220f314 {
extern "C" s32 PlayerActor_SetupAxeSwing(Obj *o, Msg *a) {
    struct {
        s32 out;
        V3 v, A, B, C, D;
    } l;
    P2 *q = (P2 *)a->unk_0c_b;
    u8 *rec = (u8 *)&o->actionWork;
    s32 x = ((P2 *)a->unk_0c_b)->x;
    s32 z = q->z;
    u8 flag = q->flag;
    PlayerActor_AxeSwingSetNetData(o->netData.bytes, x, z, flag);
    Unk_020102ec_startAnimOnce(o, 0x42, 3, 0);
    if (flag != 0) {
        l.v.x = x;
        l.v.z = z;
    } else {
        PlayerActor_GetFrontPoint(&l.A, o);
        if (Unk_ov003_0220fa70_Ge(Ground_GetHeightAt(&l.A, &l.out, 0x19))) {
            PlayerActor_GetFrontUnitCenter(&l.B, o);
            l.v.x = l.B.x;
            l.v.y = l.B.y;
            l.v.z = l.B.z;
        } else {
            PlayerActor_GetFrontPoint(&l.C, o);
            l.v.x = l.C.x;
            l.v.y = l.C.y;
            l.v.z = l.C.z;
        }
    }
    s32 ang = Math_Atan2(l.v.x - o->bodyPos.x, l.v.z - o->bodyPos.z);
    l.D.x = l.v.x;
    l.D.y = l.v.y;
    l.D.z = l.v.z;
    PlayerActor_AxeSwingSetWork(rec, &l.D, ang);
    if (CommManager_isLocalSlot(gCommManager, o->sessionSlot)) {
        Unk_02006d14_clearActionFlag(o, 0x14);
        if (Unk_02006d14_getHeldHoldableIndex(o) != 0xb) {
            if (!Random_GlobalBelow(8)) {
                Unk_02006d14_setActionFlag(o, 0x14);
            }
        }
    }
}
}

namespace ns_0220f314 {
extern "C" s32 PlayerActor_NetAxeSwing(Obj *o, s32 a) {
    u8 c;
    s32 x, z;
    PlayerActor_AxeSwingGetNetData(o->netData.bytes, &x, &z, &c);
    return PlayerActor_RequestAxeSwingAt(o, &x, &z, &c, 6, a);
}
}

namespace ns_0220f314 {
extern "C" s32 PlayerActor_AxeSwingTurn(Obj *o) {
    return Unk_02006d14_turnToward(o, ((AxeSwingWork *)&o->actionWork)->h);
}
}

namespace ns_0220f314 {
extern "C" s32 PlayerActor_AxeSwingTrackTarget(Obj *o) {
    V3 t;
    V3 *pv = &((AxeSwingWork *)&o->actionWork)->v;
    t.x = pv->x;
    t.y = pv->y;
    t.z = pv->z;
    Unk_020102ec_setSubCollider(o, &t, 0xf33, 0x1000);
    ActorCollider_submit((u8 *)&o->subCollider);
}
}

namespace ns_0220f314 {
extern "C" s32 PlayerActor_AxeSwingCheckEnd(Obj *o) {
    if (AnimFrameCtrl_isFinished((AnimFrameCtrl *)&o->bodyModel)) {
        if (PlayerActor_AxeDispatch(o, 1) == 0) {
            PlayerActor_RequestAxeFollowThrough(o, 6, -1);
        }
    }
}
}

namespace ns_0220f314 {
extern "C" s32 PlayerActor_AxeSwingCheckEndRemote(Obj *o) {
    o->actionPriority = Unk_02007694_getActionDonePriority(o, o->action);
    if (AnimFrameCtrl_isFinished((AnimFrameCtrl *)&o->bodyModel)) {
        PlayerActor_RequestAxeFollowThrough(o, 6, -1);
    }
}
}

namespace ns_0220f314 {
extern "C" void PlayerActor_MainAxeSwing(Obj *o) {
    s32 old = o->speed;
    if (CommManager_isLocalSlot(gCommManager, o->sessionSlot)) {
        s32 t;
        PlayerActor_AxeSwingTurn(o);
        Unk_020102ec_advanceAnim(o);
        Unk_020102ec_moveWithCollision(o);
        Unk_020102ec_updateBodyCollider(o);
        t = PlayerActor_DecreaseClamped(o->speed, 0, 0x171);
        Unk_020102ec_setSpeed(o, &t);
        PlayerActor_AxeSwingCheckEnd(o);
        PlayerActor_AxeSwingTrackTarget(o);
    } else {
        s32 t2;
        Unk_020102ec_advanceAnim(o);
        if (Unk_02006d14_netFollowTransform(o)) {
            Unk_020102ec_moveWithCollision(o);
        }
        Unk_020102ec_updateBodyCollider(o);
        t2 = PlayerActor_DecreaseClamped(o->speed, 0, 0x171);
        Unk_020102ec_setSpeed(o, &t2);
        PlayerActor_AxeSwingCheckEndRemote(o);
    }
    if (old != 0 && o->speed == 0) {
        Effect_Create(0x2c, &o->position.x, &o->rotY, 0);
    }
}
}

namespace ns_0220f314 {
extern "C" s32 PlayerActor_RequestAxeFollowThrough(Obj *o, s32 a, s16 b) {
    Msg m;
    _ZN19PlayerActionRequest6assignEiis(&m, 0x47, a, b);
    s32 r = PlayerActor_pushRequest(o, &m);
    return r;
}
}

namespace ns_0220f314 {
extern "C" s32 PlayerActor_SetupAxeFollowThrough(Obj *o) {
    Unk_020102ec_startAnim(o, 0x43, 3, 0);
}
}

namespace ns_0220f314 {
extern "C" s32 PlayerActor_NetAxeFollowThrough(Obj *o, s16 b) {
    return PlayerActor_RequestAxeFollowThrough(o, 6, b);
}
}

namespace ns_0220f314 {
extern "C" s32 PlayerActor_AxeFollowThroughTrackTarget(Obj *o) {
    V3 v;
    PlayerActor_GetFrontPoint(&v, o);
    Unk_020102ec_setSubCollider(o, &v, 0xf33, 0x1000);
    ActorCollider_submit((u8 *)&o->subCollider);
}
}

namespace ns_0220f314 {
extern "C" s32 PlayerActor_AxeDispatch(Obj *o, u8 a, ...) {
    u8 k;
    s32 v[2];
    s32 r;
    Pair t0, t1, t2, t3, t4, t5;
    if (o->speed != 0) {
        return -1;
    }
    r = Unk_02006d14_getHeldHoldableIndex(o);
    k = 0;
    if (r != 0xb) {
        if (Unk_02006d14_testActionFlag(o, 0x14)) {
            if (r != 0xa) {
                k = 1;
            } else {
                k = 2;
            }
        }
    }
    v[0] = 0;
    v[1] = 0;
    r = PlayerActor_AxeClassifyTarget(o, &a, &k, v);
    if (!CommManager_isLocalSlot(gCommManager, o->sessionSlot)) {
        k = 0;
    }
    switch (r) {
    case 1:
        PlayerActor_RequestAct48(o, 6, -1);
        break;
    case 2:
    case 3:
        if (k == 2) {
            t0.x = v[0];
            t0.y = v[1];
            PlayerActor_RequestAxeBreak(o, 1, &t0.x, 6, -1);
        } else {
            t1.x = v[0];
            t1.y = v[1];
            BOOL f1 = k ? 1 : 0;
            BOOL f2 = r == 3 ? 1 : 0;
            PlayerActor_RequestAxeChop(o, f1, f2, &t1.x, 6, -1);
        }
        break;
    case 4:
        if (k == 2) {
            t2.x = v[0];
            t2.y = v[1];
            PlayerActor_RequestAxeBreak(o, 0, &t2.x, 6, -1);
        } else {
            t3.x = v[0];
            t3.y = v[1];
            PlayerActor_RequestAxeStrike(o, k ? 1 : 0, 0, &t3.x, 6, -1);
        }
        break;
    case 5:
        o->actionPriority = Unk_02007694_getActionDonePriority(o, o->action);
        PlayerActor_requestWait(o, 3, 1, -1);
        break;
    case 6:
        if (k == 2) {
            t4.x = v[0];
            t4.y = v[1];
            PlayerActor_RequestAxeBreak(o, 1, &t4.x, 6, -1);
        } else {
            t5.x = v[0];
            t5.y = v[1];
            PlayerActor_RequestAxeStrike(o, k ? 1 : 0, 1, &t5.x, 6, -1);
        }
        break;
    }
    return r;
}
}

namespace ns_0220f314 {
extern "C" s32 PlayerActor_MainAxeFollowThrough(Obj *o) {
    Unk_020102ec_advanceAnim(o);
    if (CommManager_isLocalSlot(gCommManager, o->sessionSlot)) {
        s32 t;
        Unk_020102ec_moveWithCollision(o);
        Unk_020102ec_updateBodyCollider(o);
        t = PlayerActor_Decelerate(o->speed, 0);
        Unk_020102ec_setSpeed(o, &t);
        PlayerActor_AxeDispatch(o, 0);
    } else {
        s32 t2;
        if (Unk_02006d14_netFollowTransform(o)) {
            Unk_020102ec_moveWithCollision(o);
        }
        Unk_020102ec_updateBodyCollider(o);
        t2 = PlayerActor_Decelerate(o->speed, 0);
        Unk_020102ec_setSpeed(o, &t2);
        o->actionPriority = Unk_02007694_getActionDonePriority(o, o->action);
    }
    PlayerActor_AxeFollowThroughTrackTarget(o);
}
}

namespace ns_0220f314 {
extern "C" s32 PlayerActor_RequestAct48(Obj *o, s32 a, s16 b) {
    Msg m;
    _ZN19PlayerActionRequest6assignEiis(&m, 0x48, a, b);
    s32 r = PlayerActor_pushRequest(o, &m);
    return r;
}
}

namespace ns_0220f314 {
extern "C" s32 PlayerActor_SetupAct48(Obj *o) {
    Unk_020102ec_startAnimOnce(o, 0x46, 3, 0);
}
}

namespace ns_0220f314 {
extern "C" s32 PlayerActor_NetAct48(Obj *o, s16 b) {
    return PlayerActor_RequestAct48(o, 6, b);
}
}

namespace ns_0220f314 {
extern "C" s32 PlayerActor_Act48Update(Obj *o) {
    if (AnimFrameCtrl_hasPassedFrame((AnimFrameCtrl *)&o->bodyModel, 6)) {
        Unk_02006d14_playSe(o, 0x83d);
    }
    Unk_020102ec_advanceAnim(o);
}
}

namespace ns_0220f314 {
extern "C" s32 PlayerActor_Act48CheckEnd(Obj *o) {
    if (AnimFrameCtrl_isFinished((AnimFrameCtrl *)&o->bodyModel)) {
        o->actionPriority = Unk_02007694_getActionDonePriority(o, o->action);
        PlayerActor_requestWait(o, 3, 1, -1);
    }
}
}

namespace ns_0220f314 {
extern "C" s32 PlayerActor_MainAct48(Obj *o) {
    PlayerActor_Act48Update(o);
    Unk_020102ec_updateBodyCollider(o);
    PlayerActor_Act48CheckEnd(o);
}
}

namespace ns_0220f314 {
extern "C" void PlayerActor_AxeStrikeSetArgs(u8 *d, u32 x, u32 y, s32 *s) {
    d[2] = x;
    d[3] = y;
    d[0] = s[0];
    d[1] = s[1];
}
}

namespace ns_0220f314 {
extern "C" s32 PlayerActor_RequestAxeStrike(Obj *o, u32 a, u32 b, s32 *c, s32 d, s32 e) {
    Msg m;
    Pair t;
    _ZN19PlayerActionRequest6assignEiis(&m, 0x49, d, *(s16 *)&e);
    t.x = c[0];
    t.y = c[1];
    PlayerActor_AxeStrikeSetArgs(m.unk_0c_b, a, b, &t.x);
    s32 r = PlayerActor_pushRequest(o, &m);
    return r;
}
}

namespace ns_0220f314 {
extern "C" void PlayerActor_AxeStrikeSetWork(u8 *d, u32 x, u32 y, s32 *s) {
    d[2] = x;
    d[3] = y;
    d[0] = s[0];
    d[1] = s[1];
}
}

namespace ns_0220f314 {
extern "C" void PlayerActor_AxeStrikeSetNetData(u8 *d, u8 a, u8 b, u8 c, u8 e, u8 f) {
    d[0] = a;
    d[1] = b;
    d[2] = c;
    d[3] = e;
    d[4] = f;
}
}

namespace ns_0220f314 {
extern "C" void PlayerActor_AxeStrikeGetNetData(u8 *s, u8 *a, u8 *b, u8 *c, u8 *d, u8 *e) {
    *a = s[0];
    *b = s[1];
    *c = s[2];
    *d = s[3];
    *e = s[4];
}
}

namespace ns_0220f314 {
extern "C" s32 PlayerActor_SetupAxeStrike(Obj *o, Msg *a) {
    u8 *q = a->unk_0c_b;
    u8 b2 = q[2];
    u8 b3 = q[3];
    u32 b0 = a->unk_0c_b[0];
    u32 b1 = q[1];
    Pair t;
    t.x = b0;
    t.y = b1;
    PlayerActor_AxeStrikeSetWork((u8 *)&o->actionWork, b2, b3, &t.x);
    PlayerActor_AxeStrikeSetNetData(o->netData.bytes, b2, b3, o->toolHitKind, b0, b1);
    Unk_020102ec_startAnimOnce(o, 0x45, 3, 0);
    if (b3) {
        Unk_02006d14_setActionFlag(o, 0x1c);
    }
}
}

namespace ns_0220f314 {
extern "C" void PlayerActor_NetAxeStrike(Obj *o, s32 a) {
    struct {
        u8 a, b, c, d, e;
    } l;
    Pair t;
    PlayerActor_AxeStrikeGetNetData(o->netData.bytes, &l.a, &l.b, &l.c, &l.d, &l.e);
    o->toolHitKind = l.c;
    if (l.b == 0) {
        t.x = l.d;
        t.y = l.e;
        PlayerActor_RequestAxeStrike(o, l.a, 0, &t.x, 6, a);
    }
}
}

namespace ns_0220f314 {
extern "C" s32 PlayerActor_EndAxeStrike(Obj *o) {
    if (!CommManager_isLocalSlot(gCommManager, o->sessionSlot)) {
        if (Unk_02006d14_testActionFlag(o, 0x1c)) {
            PlayerActor_AxeStrikeHit(o);
        }
    }
}
}

namespace ns_0220f314 {
extern "C" s32 PlayerActor_AxeStrikeUpdate(Obj *o) {
    Unk_020102ec_advanceAnim(o);
    if (AnimFrameCtrl_hasPassedFrame((AnimFrameCtrl *)&o->bodyModel, 8)) {
        PlayerActor_AxeStrikeHit(o);
    }
}
}

namespace ns_0220e970 {
extern "C" void PlayerActor_AxeStrikeHit(Obj *o) {
    s16 ang;
    u16 buf;
    s32 t = -0x333;
    Unk_020102ec_setSpeed(o, &t);
    Rec *r = (Rec *)&o->actionWork;
    s32 n = Unk_02006d14_getHeldHoldableIndex(o);
    if (r->b2) {
        n++;
        if (n == 7) {
            Unk_02006d14_playSe(o, 0x83e);
        } else if (n == 9) {
            Unk_02006d14_playSe(o, 0x83f);
        }
    }
    PlayerActor_SetHoldableItem(n, o->sessionSlot);
    Unk_02006d14_setActionFlag(o, 9);
    if (r->b3) {
        P2 q;
        s32 y = r->b1;
        s32 x = r->b0;
        q.x = x;
        q.z = y;
        FieldItemFx_StartStrikeResult(&q);
        Unk_02006d14_clearActionFlag(o, 0x12);
        Unk_02006d14_clearActionFlag(o, 0x1c);
    }
    switch (o->toolHitKind) {
    case 0: {
        V3 v;
        V3 *pv = (V3 *)&o->position;
        v.x = pv->x;
        v.y = pv->y;
        v.z = pv->z;
        ang = o->rotY;
        s32 idx = ((u16)ang >> 4) * 2;
        s32 s, dz, c, dx;
        c = data_02135f44[idx];
        s = data_02135f44[idx + 1];
        dz = func_01ffcb0c(s, 0xccd) - func_01ffcb0c(c, -0x800);
        dx = func_01ffcb0c(c, 0xccd) + func_01ffcb0c(s, -0x800);
        v.x += dx;
        v.z += dz;
        v.y += 0xccd;
        ang += 0x2000;
        Effect_Create(4, &v, &ang, 0);
        Unk_02006d14_playSe(o, 0x83c);
        break;
    }
    case 1:
        Unk_02006d14_playSe(o, 0x7df);
        break;
    case 2:
        Unk_02006d14_playSe(o, 0x7df);
        if (o->toolHitActor) {
            PlayerActor_GetHeldItem(&buf, o);
            ((NpcActor *)o->toolHitActor)->onToolHit(&buf);
        }
        break;
    case 3:
        if (CommManager_isLocalSlot(gCommManager, o->sessionSlot)) {
            if (Snowball_Break((void *)o->toolHitActor, 1) == 0) {
                Unk_02006d14_playSe(o, 0x7df);
            }
        } else {
            Unk_02006d14_playSe(o, 0x7df);
        }
        break;
    }
    o->toolHitActor = 0;
    o->toolHitKind = 0;
}
}

namespace ns_0220e970 {
extern "C" s32 PlayerActor_AxeStrikeCheckEnd(Obj *o) {
    if (AnimFrameCtrl_isFinished((AnimFrameCtrl *)&o->bodyModel)) {
        o->actionPriority = Unk_02007694_getActionDonePriority(o, o->action);
        PlayerActor_requestWait(o, 3, 1, -1);
    }
}
}

namespace ns_0220e970 {
extern "C" s32 PlayerActor_MainAxeStrike(Obj *o) {
    PlayerActor_AxeStrikeUpdate(o);
    Unk_020102ec_moveWithCollision(o);
    Unk_020102ec_updateBodyCollider(o);
    s32 *p = &o->speed;
    s32 v = *p;
    if (v < 0) v = -v;
    s32 t = PlayerActor_Decelerate(v, 0) * -1;
    Unk_020102ec_setSpeed(o, &t);
    PlayerActor_AxeStrikeCheckEnd(o);
}
}

namespace ns_0220e970 {
extern "C" void PlayerActor_AxeChopSetArgs(Rec *r, u32 a, u32 b, Pv p) {
    r->b2 = a;
    r->b3 = b;
    r->b0 = p.x;
    r->b1 = p.z;
}
}

namespace ns_0220e970 {
extern "C" s32 PlayerActor_RequestAxeChop(Obj *o, u32 a, u32 b, Pv p, s32 c, s16 d) {
    Msg m;
    _ZN19PlayerActionRequest6assignEiis(&m, 0x4a, c, d);
    PlayerActor_AxeChopSetArgs((Unk_ov003_0220e970_Rec *)m.unk_0c_b, a, b, p);
    s32 r = PlayerActor_pushRequest(o, &m);
    return r;
}
}

namespace ns_0220e970 {
extern "C" void PlayerActor_AxeChopSetWork(Rec *r, u32 a, u32 b, Pv p) {
    r->b2 = a;
    r->b3 = b;
    r->b0 = p.x;
    r->b1 = p.z;
}
}

namespace ns_0220e970 {
extern "C" s32 PlayerActor_SetupAxeChop(Obj *o, Msg *a) {
    Rec &r = *(Rec *)a->unk_0c_b;
    u32 c = r.b2;
    u32 d = r.b3;
    PlayerActor_AxeChopSetWork((Rec *)&o->actionWork, c, d, Pv(r.b0, r.b1));
    Unk_020102ec_startAnimOnce(o, 0x44, 3, 0);
    Unk_02006d14_setActionFlag(o, 0x1c);
}
}

namespace ns_0220e970 {
extern "C" void PlayerActor_NetAxeChop(Obj *o) {
}
}

namespace ns_0220e970 {
extern "C" s32 PlayerActor_EndAxeChop(Obj *o) {
    if (!CommManager_isLocalSlot(gCommManager, o->sessionSlot)) {
        if (Unk_02006d14_testActionFlag(o, 0x1c)) {
            PlayerActor_AxeChopHit(o);
        }
    }
}
}

namespace ns_0220e970 {
extern "C" s32 PlayerActor_AxeChopUpdate(Obj *o) {
    Unk_020102ec_advanceAnim(o);
    if (AnimFrameCtrl_hasPassedFrame((AnimFrameCtrl *)&o->bodyModel, 8)) {
        PlayerActor_AxeChopHit(o);
    }
}
}

namespace ns_0220e970 {
extern "C" s32 PlayerActor_AxeChopHit(Obj *o) {
    Rec *r = (Rec *)&o->actionWork;
    s32 n = Unk_02006d14_getHeldHoldableIndex(o);
    if (r->b2) {
        n++;
        if (n == 7) {
            Unk_02006d14_playSe(o, 0x83e);
        } else if (n == 9) {
            Unk_02006d14_playSe(o, 0x83f);
        }
    }
    PlayerActor_SetHoldableItem(n, o->sessionSlot);
    Unk_02006d14_setActionFlag(o, 9);
    Unk_02006d14_playSe(o, 0x83b);
    u32 x = r->b0;
    u32 y = r->b1;
    u16 v;
    V3 pos;
    FieldPos_FromUnitCenter(&pos, r->b0, r->b1);
    v = o->rotY + 0x2000;
    Effect_Create(2, &pos, &v, 0);
    if (pos.x >= o->position.x) {
        P2 a;
        a.x = x;
        a.z = y;
        Tree_RequestChop(o->sessionSlot, &a, 5);
    } else {
        P2 b;
        b.x = x;
        b.z = y;
        Tree_RequestChop(o->sessionSlot, &b, 4);
    }
    Unk_02006d14_clearActionFlag(o, 0x1c);
}
}

namespace ns_0220e970 {
extern "C" void PlayerActor_AxeChopCheckEnd(Obj *o) {
    u32 b3 = ((Rec *)&o->actionWork)->b3;
    if (AnimFrameCtrl_isFinished((AnimFrameCtrl *)&o->bodyModel)) {
        o->actionPriority = Unk_02007694_getActionDonePriority(o, o->action);
        if (b3) {
            Unk_02008040_requestAct77(o, o->rotY, 6, -1);
        } else {
            PlayerActor_requestWait(o, 3, 1, -1);
        }
    }
    if (b3 == 0) {
        if (CommManager_isLocalSlot(gCommManager, o->sessionSlot)) {
            if (((Unk_ov003_0220e970_Bits *)&o->bodyModel.curFrame)->mid > 8) {
                PlayerActor_ResumeWalkOrIdle(o);
            }
        }
    }
}
}

namespace ns_0220e970 {
extern "C" s32 PlayerActor_MainAxeChop(Obj *o) {
    PlayerActor_AxeChopUpdate(o);
    Unk_020102ec_updateBodyCollider(o);
    Unk_020102ec_submitSceneCollider(o);
    PlayerActor_AxeChopCheckEnd(o);
}
}

namespace ns_0220e970 {
extern "C" void PlayerActor_AxeBreakSetArgs(Rec *r, u32 c, Pv p) {
    r->b2 = c;
    r->b0 = p.x;
    r->b1 = p.z;
}
}

namespace ns_0220e970 {
extern "C" s32 PlayerActor_RequestAxeBreak(Obj *o, u32 a, Pv p, s32 c, s16 e) {
    Msg m;
    _ZN19PlayerActionRequest6assignEiis(&m, 0x4b, c, e);
    PlayerActor_AxeBreakSetArgs((Unk_ov003_0220e970_Rec *)m.unk_0c_b, a, p);
    s32 r = PlayerActor_pushRequest(o, &m);
    return r;
}
}

namespace ns_0220e970 {
extern "C" void PlayerActor_AxeBreakSetWork(Rec *r, u32 c, Pv p) {
    r->b2 = c;
    r->b0 = p.x;
    r->b1 = p.z;
}
}

namespace ns_0220e970 {
extern "C" void PlayerActor_AxeBreakSetNetData(u8 *p, u32 v) {
    *p = v;
}
}

namespace ns_0220e970 {
extern "C" void PlayerActor_AxeBreakGetNetData(u8 *src, u8 *dst) {
    *dst = *src;
}
}

namespace ns_0220e970 {
extern "C" s32 PlayerActor_SetupAxeBreak(Obj *o, Msg *a) {
    Rec *r = (Rec *)a->unk_0c_b;
    u32 c = r->b2;
    PlayerActor_AxeBreakSetWork((Rec *)&o->actionWork, c, Pv(r->b0, r->b1));
    PlayerActor_AxeBreakSetNetData(o->netData.bytes, c);
    Unk_020102ec_startAnimOnce(o, 0x47, 3, 0);
    if (CommManager_isLocalSlot(gCommManager, o->sessionSlot)) {
        Bgm_RequestSilence(0x12, 0xf, 0);
    }
}
}

namespace ns_0220e970 {
extern "C" void PlayerActor_NetAxeBreak(Obj *o, s16 a) {
    u8 t;
    PlayerActor_AxeBreakGetNetData(o->netData.bytes, &t);
    if (t == 0) {
        PlayerActor_RequestAxeBreak(o, 0, Pv(0, 0), 6, a);
    }
}
}

namespace ns_0220e970 {
extern "C" void PlayerActor_EndAxeBreak(Obj *o) {
    if (CommManager_isLocalSlot(gCommManager, o->sessionSlot)) {
        u16 *r = PlayerData_getHeldItem(PlayerData_GetBySessionSlot(o->sessionSlot));
        if (r) {
            Unk_02006d14_netSendClothesChange(o, 3, *r);
        }
    } else {
        Rec *r = (Rec *)&o->actionWork;
        if (r->b2) {
            P2 q;
            s32 y = r->b1;
            s32 x = r->b0;
            q.x = x;
            q.z = y;
            PendingUnit_ApplyAt(&q, 0);
            Unk_02006d14_clearActionFlag(o, 0x12);
        }
    }
}
}

namespace ns_0220e970 {
extern "C" void PlayerActor_AxeBreakUpdate(Obj *o) {
    Unk_020102ec_advanceAnim(o);
    if (((Unk_ov003_0220e970_Bits *)&o->bodyModel.curFrame)->mid >= 8) {
        if (AnimFrameCtrl_hasPassedFrame((AnimFrameCtrl *)&o->bodyModel, 8)) {
            Rec *r = (Rec *)&o->actionWork;
            if (r->b2) {
                P2 q;
                s32 y = r->b1;
                s32 x = r->b0;
                q.x = x;
                q.z = y;
                PendingUnit_ApplyAt(&q, 0);
                Unk_02006d14_clearActionFlag(o, 0x12);
                r->b2 = 0;
            }
            Unk_02006d14_playSe(o, 0x840);
            Unk_02006d14_clearActionFlag(o, 0);
            Unk_02006d14_setActionFlag(o, 9);
            Mtx t = *(Mtx *)&o->toolHandMtx;
            V3 pos;
            pos.x = t.v.x;
            pos.y = t.v.y;
            pos.z = t.v.z;
            WorldCurve_FromCurved(&pos, &pos);
            Effect_PlayById(0x8c, &pos, 0, 0);
            pos.x = t.v.x;
            pos.y = t.v.y;
            pos.z = t.v.z;
            t.v.x = t.v.y = t.v.z = 0;
            Mtx t2 = t;
            V3 v;
            V3 out;
            v.x = v.y = 0;
            v.z = 0xab8;
            MTX_MultVec43(&v, &t2, &out);
            pos.x = pos.x + out.x;
            pos.y = pos.y + out.y;
            pos.z = pos.z + out.z;
            WorldCurve_FromCurved(&pos, &pos);
            Effect_PlayById(0x8b, &pos, 0, 0);
        }
        Unk_02006d14_turnToCamera(o, 0x200);
    }
}
}

namespace ns_0220e970 {
extern "C" void PlayerActor_AxeBreakCheckEnd(Obj *o) {
    if (o->rotY == 0) {
        if (AnimFrameCtrl_isFinished((AnimFrameCtrl *)&o->bodyModel)) {
            if (!CommManager_isLocalSlot(gCommManager, o->sessionSlot) || TalkRequest_AddPlayerMessage()) {
                PlayerActor_RequestAxeBrokenMessage(o, 6, -1);
            }
        }
    }
}
}

namespace ns_0220e970 {
extern "C" s32 PlayerActor_MainAxeBreak(Obj *o) {
    PlayerActor_AxeBreakUpdate(o);
    Unk_020102ec_moveWithCollision(o);
    Unk_020102ec_updateBodyCollider(o);
    PlayerActor_AxeBreakCheckEnd(o);
}
}

namespace ns_0220e970 {
extern "C" s32 PlayerActor_RequestAxeBrokenMessage(Obj *o, s32 a, s16 b) {
    Msg m;
    _ZN19PlayerActionRequest6assignEiis(&m, 0x4c, a, b);
    s32 r = PlayerActor_pushRequest(o, &m);
    return r;
}
}

namespace ns_0220e970 {
extern "C" void PlayerActor_AxeBrokenMessageInitWork(Rec *r) {
    r->b0 = 0;
}
}

namespace ns_0220e970 {
extern "C" s32 PlayerActor_SetupAxeBrokenMessage(Obj *o) {
    struct Pad { s32 v[2]; Pad() {} ~Pad() {} } pad;
    Unk_020102ec_startAnim(o, 0x48, 3, 0);
    PlayerActor_AxeBrokenMessageInitWork((Rec *)&o->actionWork);
    if (CommManager_isLocalSlot(gCommManager, o->sessionSlot)) {
        Character_attachTalkRequest(o, o);
        Sec &s = *o;
        MsgRequest_setFileName(&s, (void *)"obj_etc_player");
        o->msgIndex = 10;
        o->window->nextState = 1;
        Camera_SetMode4();
        Bgm_ReleasePriority(0x12);
        Bgm_RequestSilence(0xc, 0, 1);
        Bgm_Request(0xd, 0x42, 0x7f, 1);
    }
}
}

namespace ns_0220e970 {
extern "C" s32 PlayerActor_NetAxeBrokenMessage(Obj *o, s16 a) {
    return PlayerActor_RequestAxeBrokenMessage(o, 6, a);
}
}

namespace ns_0220e970 {
extern "C" void PlayerActor_AxeBrokenMessageUpdate(Obj *o) {
    Rec *p = (Rec *)&o->actionWork;
    switch (p->b0) {
    case 0:
        if (o->window) {
            if (o->window->state) {
                p->b0 = 1;
                o->msgStep = 12;
            }
        }
        break;
    case 1:
        if (o->window) {
            if (!o->window->state) {
                Character_detachTalkRequest(o, o);
                Unk_02006d14_clearActionFlag(o, 0x11);
                TalkRequest_FinishPlayerMessage();
                o->actionPriority = Unk_02007694_getActionDonePriority(o, o->action);
                PlayerActor_SetHoldableItem(0, o->sessionSlot);
                Unk_02006d14_setActionFlag(o, 0);
                PlayerActor_requestWait(o, 3, 1, -1);
                Camera_SetModeDefault();
            }
        }
        break;
    }
}
}

namespace ns_0220e970 {
extern "C" s32 PlayerActor_EndAxeBrokenMessage(Obj *o) {
    if (!CommManager_isLocalSlot(gCommManager, o->sessionSlot)) {
        PlayerActor_SetHoldableItem(0, o->sessionSlot);
        Unk_02006d14_setActionFlag(o, 0);
    }
}
}

namespace ns_0220e030 {
extern "C" s32 PlayerActor_MainAxeBrokenMessage(Obj *o) {
    Unk_020102ec_advanceAnim(o);
    Unk_020102ec_updateBodyCollider(o);
    if (CommManager_isLocalSlot(gCommManager, o->sessionSlot)) {
        PlayerActor_AxeBrokenMessageUpdate(o);
    } else {
        o->actionPriority = Unk_02007694_getActionDonePriority(o, o->action);
    }
}
}

namespace ns_0220e030 {
extern "C" void PlayerActor_FishCastSetArgs(P2 *d, V3 *s) {
    d->x = s->x;
    d->z = s->z;
}
}

namespace ns_0220e030 {
extern "C" s32 PlayerActor_RequestFishCast(Obj *o, V3 *v, s32 a, s16 b) {
    Msg m;
    V3 t;
    _ZN19PlayerActionRequest6assignEiis(&m, 0x4d, a, b);
    t.x = v->x;
    t.y = v->y;
    t.z = v->z;
    PlayerActor_FishCastSetArgs((Unk_ov003_0220e030_P2 *)m.unk_0c_b, &t);
    s32 r = PlayerActor_pushRequest(o, &m);
    return r;
}
}

namespace ns_0220e030 {
extern "C" s32 PlayerActor_FishCastSetNetData(void *p, s32 a, s32 b) {
    return NetBuf_PackPair20(p, a, b);
}
}

namespace ns_0220e030 {
extern "C" s32 PlayerActor_FishCastGetNetData(void *p, s32 *a, s32 *b) {
    return NetBuf_UnpackPair20(p, a, b);
}
}

namespace ns_0220e030 {
extern "C" s32 PlayerActor_SetupFishCast(Obj *o, Msg *a) {
    Unk_020102ec_startAnimOnce(o, 0x52, 3, 0);
    HeldItemModel_PlayAnim((u8 *)&o->heldItemModel, 0x15, 3, 0);
    P2 &q = *(P2 *)a->unk_0c_b;
    struct { V3 t1, t2; } l;
    s32 z = q.z;
    s32 x = q.x;
    l.t1.x = x; l.t1.y = 0; l.t1.z = z;
    l.t2.x = x; l.t2.y = 0; l.t2.z = z;
    FishBobber_setTargetPos((u8 *)&o->heldItemModel.bobber, &l.t2);
    PlayerActor_FishCastSetNetData(o->netData.bytes, l.t1.x, l.t1.z);
    (*(s16 *)&o->actionWork) = Math_Atan2(l.t1.x - o->position.x, l.t1.z - o->position.z);
}
}

namespace ns_0220e030 {
extern "C" s32 PlayerActor_NetFishCast(Obj *o, s16 a) {
    s32 x, z;
    struct { V3 v1, v2; } l;
    PlayerActor_FishCastGetNetData(o->netData.bytes, &x, &z);
    s32 y = o->position.y;
    l.v1.x = x;
    l.v1.y = y;
    l.v1.z = z;
    l.v2.x = x;
    l.v2.y = y;
    l.v2.z = z;
    return PlayerActor_RequestFishCast(o, &l.v2, 6, a);
}
}

namespace ns_0220e030 {
extern "C" s32 PlayerActor_FishCastUpdate(Obj *o) {
    Unk_020102ec_advanceAnim(o);
    if (AnimFrameCtrl_hasPassedFrame((AnimFrameCtrl *)&o->bodyModel, 0x11)) {
        Unk_02006d14_playSe(o, 0x849);
    }
}
}

namespace ns_0220e030 {
extern "C" s32 PlayerActor_FishCastTurn(Obj *o) {
    return Unk_02006d14_turnToward(o, (*(s16 *)&o->actionWork));
}
}

namespace ns_0220e030 {
extern "C" s32 PlayerActor_FishCastCheckEnd(Obj *o) {
    if (AnimFrameCtrl_isFinished((AnimFrameCtrl *)&o->bodyModel)) {
        PlayerActor_RequestFishWait(o, 6, -1);
        if (CommManager_isLocalSlot(gCommManager, o->sessionSlot)) {
            Camera_SetMode5();
        }
    }
}
}

namespace ns_0220e030 {
extern "C" s32 PlayerActor_MainFishCast(Obj *o) {
    if (CommManager_isLocalSlot(gCommManager, o->sessionSlot)) {
        s32 t;
        PlayerActor_FishCastTurn(o);
        PlayerActor_FishCastUpdate(o);
        Unk_020102ec_moveWithCollision(o);
        Unk_020102ec_updateBodyCollider(o);
        t = PlayerActor_DecreaseClamped(o->speed, 0, 0x171);
        Unk_020102ec_setSpeed(o, &t);
        PlayerActor_FishCastCheckEnd(o);
    } else {
        s32 t2;
        PlayerActor_FishCastUpdate(o);
        if (Unk_02006d14_netFollowTransform(o)) {
            Unk_020102ec_moveWithCollision(o);
        }
        Unk_020102ec_updateBodyCollider(o);
        t2 = PlayerActor_DecreaseClamped(o->speed, 0, 0x171);
        Unk_020102ec_setSpeed(o, &t2);
        PlayerActor_FishCastCheckEnd(o);
    }
}
}

namespace ns_0220e030 {
extern "C" s32 PlayerActor_RequestFishCastFail(Obj *o, s32 a, s16 b) {
    Msg m;
    _ZN19PlayerActionRequest6assignEiis(&m, 0x4e, a, b);
    s32 r = PlayerActor_pushRequest(o, &m);
    return r;
}
}

namespace ns_0220e030 {
extern "C" s32 PlayerActor_SetupFishCastFail(Obj *o) {
    Unk_020102ec_startAnimOnce(o, 0x53, 3, 0);
    HeldItemModel_PlayAnim((u8 *)&o->heldItemModel, 0x16, 3, 0);
}
}

namespace ns_0220e030 {
extern "C" s32 PlayerActor_NetFishCastFail(Obj *o, s16 a) {
    return PlayerActor_RequestFishCastFail(o, 6, a);
}
}

namespace ns_0220e030 {
extern "C" s32 PlayerActor_FishCastFailUpdate(Obj *o) {
    Unk_020102ec_advanceAnim(o);
    if (AnimFrameCtrl_hasPassedFrame((AnimFrameCtrl *)&o->bodyModel, 0xc)) {
        Unk_02006d14_playSe(o, 0x84a);
    }
}
}

namespace ns_0220e030 {
extern "C" s32 PlayerActor_FishCastFailCheckEnd(Obj *o) {
    if (AnimFrameCtrl_isFinished((AnimFrameCtrl *)&o->bodyModel)) {
        o->actionPriority = Unk_02007694_getActionDonePriority(o, o->action);
        PlayerActor_requestWait(o, 3, 1, -1);
    }
}
}

namespace ns_0220e030 {
extern "C" s32 PlayerActor_MainFishCastFail(Obj *o) {
    PlayerActor_FishCastFailUpdate(o);
    if (Unk_02006d14_netFollowTransform(o)) {
        Unk_020102ec_moveWithCollision(o);
    }
    Unk_020102ec_updateBodyCollider(o);
    s32 t = PlayerActor_DecreaseClamped(o->speed, 0, 0x171);
    Unk_020102ec_setSpeed(o, &t);
    PlayerActor_FishCastFailCheckEnd(o);
}
}

namespace ns_0220e030 {
extern "C" s32 PlayerActor_RequestFishWait(Obj *o, s32 a, s16 b) {
    Msg m;
    _ZN19PlayerActionRequest6assignEiis(&m, 0x4f, a, b);
    s32 r = PlayerActor_pushRequest(o, &m);
    return r;
}
}

namespace ns_0220e030 {
extern "C" s32 PlayerActor_FishWaitSetNetData(void *p, V3 *v, u8 c) {
    return NetBuf_PackTriple20(p, v->x, v->y, v->z, c);
}
}

namespace ns_0220e030 {
extern "C" void PlayerActor_FishWaitGetNetData(void *p, V3 *v, u8 *out) {
    NetBuf_UnpackTriple20(p, &v->x, &v->y, &v->z, out);
}
}

namespace ns_0220e030 {
extern "C" s32 PlayerActor_SetupFishWait(Obj *o) {
    u8 kind;
    V3 pos;
    V3 cur;
    u8 *p = o->netData.bytes;
    Unk_020102ec_startAnim(o, 0x54, 3, 0);
    void *g = gCommManager;
    if (!CommManager_isLocalSlot(g, o->sessionSlot)) {
        PlayerActor_FishWaitGetNetData(p, &pos, &kind);
        if (kind == 3) {
            cur.x = pos.x;
            cur.y = pos.y;
            cur.z = pos.z;
            FishBobber_setPos((u8 *)&o->heldItemModel.bobber, &cur);
        }
    }
    HeldItemModel_PlayAnim((u8 *)&o->heldItemModel, 0x17, 3, 0);
    if (CommManager_isLocalSlot(g, o->sessionSlot)) {
        PlayerActor_FishWaitSetNetData(p, (V3 *)&o->heldItemModel.bobber.pos, o->heldItemModel.bobber.curState);
    }
}
}

namespace ns_0220e030 {
extern "C" s32 PlayerActor_NetFishWait(Obj *o, s16 a) {
    s32 st = o->action;
    if (st != 0x4d) {
        if (st == 0x4f) {
            o->netSeq = a;
        } else {
            PlayerActor_RequestFishWait(o, 6, a);
        }
    }
}
}

namespace ns_0220e030 {
extern "C" s32 PlayerActor_EndFishWait(Obj *o, s32 a) {
    if (CommManager_isLocalSlot(gCommManager, o->sessionSlot)) {
        BgmVolumeMixer_endFishDuck(data_021c1b3c + 0x1c4);
    } else if (a != 0x50 && a != 0x51) {
        FishBobber_setState((u8 *)&o->heldItemModel.bobber, 1);
    }
}
}

namespace ns_0220e030 {
extern "C" void PlayerActor_FishWaitSyncBobber(Obj *o) {
    u8 kind;
    V3 pos;
    struct { V3 cur, t2, t3; } l;
    u8 *p = o->netData.bytes;
    if (CommManager_isLocalSlot(gCommManager, o->sessionSlot)) {
        PlayerActor_FishWaitSetNetData(p, (V3 *)&o->heldItemModel.bobber.pos, o->heldItemModel.bobber.curState);
    } else {
        PlayerActor_FishWaitGetNetData(p, &pos, &kind);
        u8 k = kind;
        s32 st = o->heldItemModel.bobber.curState;
        if (st == 4) goto case4;
        if (st == 3) goto end;
        if (k == 4) {
            FishBobber_setState((u8 *)&o->heldItemModel.bobber, k);
            l.t2 = pos;
            FishBobber_setPos((u8 *)&o->heldItemModel.bobber, &l.t2);
        } else if (st >= 6) {
            FishBobber_setState((u8 *)&o->heldItemModel.bobber, 0);
        }
        goto end;
    case4: {
        V3 *pc = (V3 *)&o->heldItemModel.bobber.pos;
        l.cur = *pc;
        s32 dx = l.cur.x - pos.x;
        s32 dz = l.cur.z - pos.z;
        if (dx * dx + dz * dz >= 0x400000) {
            l.t3 = pos;
            FishBobber_setPos((u8 *)&o->heldItemModel.bobber, &l.t3);
        }
        if (k == 5) {
            FishBobber_setState((u8 *)&o->heldItemModel.bobber, k);
            Unk_02006d14_playSe(o, 0x84f);
            o->sePosX = pos.x;
            o->sePosY = pos.y;
            o->sePosZ = pos.z;
        }
    }
    end:;
    }
}
}

namespace ns_0220e030 {
extern "C" s32 PlayerActor_FishWaitFaceBobber(Obj *o) {
    u16 t;
    V3 *p = (V3 *)&o->heldItemModel.bobber.pos;
    s32 a = Math_Atan2(p->x - o->position.x, p->z - o->position.z);
    t = o->rotY;
    PlayerActor_TurnAngle(&t, a);
    Unk_020102ec_setAngleY(o, &t);
}
}

namespace ns_0220e030 {
extern "C" void PlayerActor_FishWaitOnBobberLand(Obj *o) {
    if (HeldItemModel_IsBobberLanded((u8 *)&o->heldItemModel) && o->heldItemModel.bobber.justLanded) {
        Unk_02006d14_playSe(o, 0x84b);
        V3 *p = (V3 *)&o->heldItemModel.bobber.pos;
        o->sePosX = p->x;
        o->sePosY = p->y;
        o->sePosZ = p->z;
        if (CommManager_isLocalSlot(gCommManager, o->sessionSlot)) {
            BgmVolumeMixer_startFishDuck(data_021c1b3c + 0x1c4);
        }
    }
}
}

namespace ns_0220e030 {
extern "C" s32 PlayerActor_FishWaitCheckInput(Obj *o) {
    PlayerActor_FishWaitOnBobberLand(o);
    if (HeldItemModel_IsBobberLanded((u8 *)&o->heldItemModel)) {
        if (Unk_02006d14_testActionFlag(o, 0xb)) {
            if (FishBobber_getFish((u8 *)&o->heldItemModel.bobber)) {
                FishShadow_OnRodPulled();
            } else {
                FieldFish_ScareAround((V3 *)&o->heldItemModel.bobber.pos, 0x1000);
            }
            PlayerActor_RequestFishReelIn(o, 0, 6, -1);
        } else {
            if (o->actionPressed != 0 || TouchPick_GetGroundPos(Scene_GetTouchPicker(), 0)) {
                if (FishBobber_tryHook((u8 *)&o->heldItemModel.bobber)) {
                    PlayerActor_RequestFishHook(o, 6, -1);
                } else {
                    PlayerActor_RequestFishReelIn(o, 0, 6, -1);
                }
            }
        }
    }
}
}

namespace ns_0220e030 {
extern "C" s32 PlayerActor_MainFishWait(Obj *o) {
    Unk_020102ec_advanceAnim(o);
    PlayerActor_FishWaitSyncBobber(o);
    Unk_02006d14_netFollowTransform(o);
    PlayerActor_FishWaitFaceBobber(o);
    Unk_020102ec_updateBodyCollider(o);
    if (CommManager_isLocalSlot(gCommManager, o->sessionSlot)) {
        PlayerActor_FishWaitCheckInput(o);
    } else {
        o->actionPriority = Unk_02007694_getActionDonePriority(o, o->action);
    }
}
}

namespace ns_0220e030 {
extern "C" s32 PlayerActor_RequestFishHook(Obj *o, s32 a, s16 b) {
    Msg m;
    _ZN19PlayerActionRequest6assignEiis(&m, 0x50, a, b);
    s32 r = PlayerActor_pushRequest(o, &m);
    return r;
}
}

namespace ns_0220e030 {
extern "C" s32 PlayerActor_SetupFishHook(Obj *o) {
    Unk_020102ec_startAnim(o, 0x55, 3, 0);
    HeldItemModel_PlayAnim((u8 *)&o->heldItemModel, 0x18, 3, 0);
    if (CommManager_isLocalSlot(gCommManager, o->sessionSlot)) {
        Bgm_RequestSilence(0x12, 0, 0);
    }
}
}

namespace ns_0220e030 {
extern "C" s32 PlayerActor_NetFishHook(Obj *o, s16 a) {
    return PlayerActor_RequestFishHook(o, 6, a);
}
}

namespace ns_0220e030 {
extern "C" s32 PlayerActor_FishHookCheckResult(Obj *o) {
    V3 *p = (V3 *)&o->heldItemModel.bobber.pos;
    volatile s32 pad;
    if (CommManager_isLocalSlot(gCommManager, o->sessionSlot)) {
        switch (FishBobber_checkReelResult((u8 *)&o->heldItemModel.bobber)) {
        case 0:
            Unk_02006d14_playSeAt(o, 0x7f6, p);
            break;
        case 1:
            PlayerActor_RequestFishEscape(o, 6, -1);
            Bgm_ReleasePriority(0x12);
            break;
        case 2:
            PlayerActor_RequestFishLand(o, 6, -1);
            break;
        }
    } else {
        Unk_02006d14_playSeAt(o, 0x7f6, p);
    }
}
}

namespace ns_0220e030 {
extern "C" s32 PlayerActor_MainFishHook(Obj *o) {
    Unk_020102ec_advanceAnim(o);
    Unk_02006d14_netFollowTransform(o);
    Unk_020102ec_updateBodyCollider(o);
    PlayerActor_FishHookCheckResult(o);
}
}

namespace ns_0220e030 {
extern "C" void PlayerActor_FishReelInSetArgs(u8 *p, u32 v) {
    *p = v;
}
}

namespace ns_0220d6f4 {
extern "C" s32 PlayerActor_RequestFishReelIn(Obj *o, u32 a, s32 b, s16 c) {
    Msg m;
    _ZN19PlayerActionRequest6assignEiis(&m, 0x51, b, c);
    PlayerActor_FishReelInSetArgs(m.unk_0c_b, a);
    s32 r = PlayerActor_pushRequest(o, &m);
    return r;
}
}

namespace ns_0220d6f4 {
extern "C" void PlayerActor_FishReelInSetWork(u8 *p, u32 v) {
    *p = v;
}
}

namespace ns_0220d6f4 {
extern "C" void PlayerActor_FishReelInSetNetData(u8 *p, u32 v) {
    *p = v;
}
}

namespace ns_0220d6f4 {
extern "C" void PlayerActor_FishReelInGetNetData(u8 *p, u8 *out) {
    *out = *p;
}
}

namespace ns_0220d6f4 {
extern "C" void PlayerActor_SetupFishReelIn(Obj *o, u8 *p) {
    u32 b = p[0xc];
    PlayerActor_FishReelInSetWork((u8 *)&o->actionWork, b);
    PlayerActor_FishReelInSetNetData(o->netData.bytes, b);
    Unk_020102ec_startAnimOnce(o, 0x56, 3, 0);
    HeldItemModel_PlayAnim((u8 *)&o->heldItemModel, 0x19, 3, 0);
    Unk_02006d14_playSe(o, 0x84c);
    Unk_02006d14_playSe(o, 0x84e);
    s32 *q = (s32 *)&o->heldItemModel.bobber.pos;
    o->sePosX = q[0];
    o->sePosY = q[1];
    o->sePosZ = q[2];
    if (CommManager_isLocalSlot(gCommManager, o->sessionSlot)) Camera_SetModeDefault();
}
}

namespace ns_0220d6f4 {
extern "C" void PlayerActor_NetFishReelIn(Obj *o, s16 a) {
    u8 t;
    PlayerActor_FishReelInGetNetData(o->netData.bytes, &t);
    PlayerActor_RequestFishReelIn(o, t, 6, a);
}
}

namespace ns_0220d6f4 {
extern "C" void PlayerActor_FishReelInCheckEnd(Obj *o) {
    if (AnimFrameCtrl_isFinished((AnimFrameCtrl *)&o->bodyModel)) {
        o->actionPriority = Unk_02007694_getActionDonePriority(o, o->action);
        if (*(u8 *)&o->actionWork) {
            Unk_02008040_requestAct79(o, 5, -1);
        } else {
            PlayerActor_requestWait(o, 3, 1, -1);
        }
    }
}
}

namespace ns_0220d6f4 {
extern "C" void PlayerActor_MainFishReelIn(Obj *o) {
    Unk_020102ec_advanceAnim(o);
    Unk_02006d14_netFollowTransform(o);
    Unk_020102ec_updateBodyCollider(o);
    PlayerActor_FishReelInCheckEnd(o);
}
}

namespace ns_0220d6f4 {
extern "C" s32 PlayerActor_RequestFishEscape(Obj *o, s32 a, s16 b) {
    Msg m;
    _ZN19PlayerActionRequest6assignEiis(&m, 0x52, a, b);
    s32 r = PlayerActor_pushRequest(o, &m);
    return r;
}
}

namespace ns_0220d6f4 {
extern "C" void PlayerActor_SetupFishEscape(Obj *o) {
    Unk_020102ec_setSpeed(o, (s32 *)sFishEscapeSpeed);
    Unk_020102ec_startAnimOnce(o, 0x57, 3, 0);
    HeldItemModel_PlayAnim((u8 *)&o->heldItemModel, 0x1a, 3, 0);
}
}

namespace ns_0220d6f4 {
extern "C" s32 PlayerActor_NetFishEscape(Obj *o, s16 a) {
    return PlayerActor_RequestFishEscape(o, 6, a);
}
}

namespace ns_0220d6f4 {
extern "C" void PlayerActor_FishEscapeCheckEnd(Obj *o) {
    if (AnimFrameCtrl_isFinished((AnimFrameCtrl *)&o->bodyModel)) {
        if (CommManager_isLocalSlot(gCommManager, o->sessionSlot)) Camera_SetModeDefault();
        o->actionPriority = Unk_02007694_getActionDonePriority(o, o->action);
        PlayerActor_requestWait(o, 3, 1, -1);
        HeldItemModel_PlayAnim((u8 *)&o->heldItemModel, 0x13, 3, 0);
    }
}
}

namespace ns_0220d6f4 {
extern "C" void PlayerActor_MainFishEscape(Obj *o) {
    s32 t;
    Unk_020102ec_advanceAnim(o);
    if (Unk_02006d14_netFollowTransform(o)) Unk_020102ec_moveWithCollision(o);
    Unk_020102ec_updateBodyCollider(o);
    s32 v = o->speed;
    if (v < 0) v = -v;
    t = PlayerActor_DecreaseClamped(v, 0, 0xc5) * -1;
    Unk_020102ec_setSpeed(o, &t);
    PlayerActor_FishEscapeCheckEnd(o);
}
}

namespace ns_0220d6f4 {
extern "C" s32 PlayerActor_RequestFishLand(Obj *o, s32 a, s16 b) {
    Msg m;
    _ZN19PlayerActionRequest6assignEiis(&m, 0x53, a, b);
    s32 r = PlayerActor_pushRequest(o, &m);
    return r;
}
}

namespace ns_0220d6f4 {
extern "C" void PlayerActor_SetupFishLand(Obj *o) {
    Unk_020102ec_startAnimOnce(o, 0x58, 3, 0);
    HeldItemModel_PlayAnim((u8 *)&o->heldItemModel, 0x1b, 3, 1);
    Unk_02006d14_playSe(o, 0x84c);
    Unk_02006d14_playSe(o, 0x84e);
    s32 *p = (s32 *)&o->heldItemModel.bobber.pos;
    o->sePosX = p[0];
    o->sePosY = p[1];
    o->sePosZ = p[2];
}
}

namespace ns_0220d6f4 {
extern "C" s32 PlayerActor_NetFishLand(Obj *o, s16 a) {
    return PlayerActor_RequestFishLand(o, 6, a);
}
}

namespace ns_0220d6f4 {
extern "C" void PlayerActor_FishLandCheckEnd(Obj *o) {
    if (AnimFrameCtrl_isFinished((AnimFrameCtrl *)&o->bodyModel)) {
        if (FishBobber_isCatchLanded((u8 *)&o->heldItemModel.bobber)) PlayerActor_RequestFishShowCatch(o, 0, 6, -1);
    }
}
}

namespace ns_0220d6f4 {
extern "C" void PlayerActor_MainFishLand(Obj *o) {
    Unk_020102ec_advanceAnim(o);
    Unk_02006d14_netFollowTransform(o);
    Unk_020102ec_updateBodyCollider(o);
    if (CommManager_isLocalSlot(gCommManager, o->sessionSlot)) PlayerActor_FishLandCheckEnd(o);
}
}

namespace ns_0220d6f4 {
extern "C" s32 PlayerActor_RequestFishShowCatch(Obj *o, u32 a, s32 b, s16 c) {
    Msg m;
    _ZN19PlayerActionRequest6assignEiis(&m, 0x54, b, c);
    m.unk_0c_b[0] = a;
    s32 r = PlayerActor_pushRequest(o, &m);
    return r;
}
}

namespace ns_0220d6f4 {
extern "C" void PlayerActor_FishShowCatchSetNetData(u8 *p, u32 v) {
    *p = v;
}
}

namespace ns_0220d6f4 {
extern "C" void PlayerActor_FishShowCatchGetNetData(u8 *p, u8 *out) {
    *out = *p;
}
}

namespace ns_0220d6f4 {
extern "C" void PlayerActor_SetupFishShowCatch(Obj *o, u8 *p) {
    u32 b = p[0xc];
    Rec *r = (Rec *)&o->actionWork;
    r->showMode = b;
    r->unk_00 = 0x39;
    r->catalogWasFull = Catalog_HasAllFish();
    if (b == 0) {
        if (CommManager_isLocalSlot(gCommManager, o->sessionSlot)) {
            Act *a = FishBobber_getFish((u8 *)&o->heldItemModel.bobber);
            s8 v = a->fishId;
            r->fishId = v;
            if (v < 0x38) {
                VillagerTrend_OnFishCaught((u8 *)o + 0x5c);
                Hud_GetCountdown();
                HudCountdown_incCountA();
            }
        }
        r->step = 0;
        Unk_020102ec_startAnimOnce(o, 0x59, 3, 0);
        HeldItemModel_PlayAnim((u8 *)&o->heldItemModel, 0x1c, 3, 1);
    } else {
        r->step = 2;
        r->unk_00 = 0x3a;
        o->msgStep = 8;
    }
    PlayerActor_FishShowCatchSetNetData(o->netData.bytes, b);
}
}

namespace ns_0220d6f4 {
extern "C" void PlayerActor_NetFishShowCatch(Obj *o, s16 a) {
    u8 t;
    PlayerActor_FishShowCatchGetNetData(o->netData.bytes, &t);
    PlayerActor_RequestFishShowCatch(o, t, 6, a);
}
}

namespace ns_0220d6f4 {
extern "C" void PlayerActor_FishShowCatchUpdate(Obj *o) {
    Rec *r6;
    u8 *r5;
    Act *a;
    struct {
        u16 pad0;
        u16 t;
        u32 pad1;
    } tmp;
    u32 buf[2];
    Blk b;
    V3 v48;
    V3 v54;
    V3 v60;
    V3 v6c;
    V3 v78;
    Unk_02006d14_turnToCamera(o, 0x400);
    r6 = (Rec *)&o->actionWork;
    a = FishBobber_getFish((u8 *)&o->heldItemModel.bobber);
    if (a) {
        b = o->itemHandMtx;
        Fish_GetDisplayScale(&v54, a->fishId);
        v48.x = 0x4cd;
        v48.y = 0;
        v48.z = 0;
        u32 m = ((Unk_ov003_0220d6f4_Bits *)&o->bodyModel.curFrame)->mid;
        if (r6->showMode != 0) {
            v48.x = 0x800;
            v48.y = 0x19a;
            v48.z = -0x19a;
        } else if ((s32)m >= 0x10) {
            s32 q = (s32)((m - 15) * 0x19a) / (s32)(((Unk_ov003_0220d6f4_Bits *)&o->bodyModel.numFrames)->mid - 0x10);
            v48.x = v48.x + q * 2;
            v48.y = v48.y + q;
            v48.z = v48.z - q;
        }
        PlayerActor_ApplyHoldOffset(&b, &v48);
        v60.x = b.m[9];
        v60.y = b.m[10];
        v60.z = b.m[11];
        WorldCurve_FromCurved(&v60, &v60);
        v6c.x = v60.x;
        v6c.y = v60.y;
        v6c.z = v60.z;
        v78.x = v54.x;
        v78.y = v54.y;
        v78.z = v54.z;
        FishCatch_SetDisplayPosScale(a, &v6c, &v78);
    }
    r5 = &r6->step;
    if (o->animId == 0x59) {
        if (AnimFrameCtrl_hasPassedFrame((AnimFrameCtrl *)&o->bodyModel, 3)) Camera_SetMode4();
    }
    if (((Unk_ov003_0220d6f4_Bits *)&o->bodyModel.curFrame)->mid < 0x11 && *r5 < 5 && r6->showMode == 0) return;
    switch (*r5) {
    case 0:
        if (TalkRequest_AddPlayerMessage()) {
            *r5 = 1;
            Character_attachTalkRequest(o, o);
            Unk_02006d14_setActionFlag(o, 0x11);
            Sec &s = *o;
            MsgRequest_setFileName(&s, (void *)"obj_etc_getfish");
            u32 v = r6->fishId;
            o->msgIndex = v;
            tmp.t = v + 0x12e8;
            Catalog_AddCreature(&tmp.t);
            o->actionItem = o->shownItem = tmp.t;
            o->window->nextState = 1;
            Bgm_ReleasePriority(0x12);
            Bgm_RequestSilence(0xc, 0, 4);
            Bgm_Request(0xd, 0x39, 0x7f, 1);
        }
    case 1:
        if (o->window == 0) return;
        if (o->window->state == 0) return;
        if (Catalog_HasAllFish() && r6->catalogWasFull == 0) {
            *r5 = 5;
            o->msgStep = 0xe;
        } else {
            *r5 = 2;
            o->msgStep = 8;
        }
        return;
    case 2: {
        s32 c = Pocket_FindEmpty();
        if (c == -1) {
            buf[0] = 0;
            buf[1] = 0;
            if (FieldAction_FindDropUnit(0x10, buf)) {
                *r5 = 3;
                BOOL in = FALSE;
                u32 h = o->actionItem;
                if (h >= 0x1320 && h <= 0x1322) in = TRUE;
                if (in) {
                    o->msgStep = 4;
                } else {
                    o->msgStep = 0;
                }
            } else {
                *r5 = 4;
                o->msgStep = 1;
            }
        } else {
            if (o->window == 0) return;
            if (o->window->state != 0) return;
            Character_detachTalkRequest(o, o);
            Unk_02006d14_clearActionFlag(o, 0x11);
            TalkRequest_FinishPlayerMessage();
            PlayerActor_RequestFishStore(o, 0, 6, -1);
            Camera_SetModeDefault();
        }
        return;
    }
    case 3:
        if (o->msgStep >= 0xf) {
            BOOL in = FALSE;
            u32 h = o->actionItem;
            if (h >= 0x1320 && h <= 0x1322) in = TRUE;
            if (in) {
                *r5 = 6;
                if (o->dropQuery != -1) return;
                o->dropQuery = FieldAction_RequestDropForAid(o->sessionSlot, o->actionItem);
                if (o->dropQuery == -1) return;
                *r5 = 4;
            } else {
                *r5 = 4;
            }
        } else {
            if (o->window == 0) return;
            if (o->window->state != 0) return;
            Character_detachTalkRequest(o, o);
            Unk_02006d14_clearActionFlag(o, 0x11);
            PlayerActor_RequestFishStore(o, 1, 6, -1);
            Camera_SetModeDefault();
        }
        return;
    case 4:
        if (o->window == 0) return;
        if (o->window->state != 0) return;
        FishBobber_startCatchLift((u8 *)&o->heldItemModel.bobber);
        Character_detachTalkRequest(o, o);
        Unk_02006d14_clearActionFlag(o, 0x11);
        TalkRequest_FinishPlayerMessage();
        o->actionPriority = Unk_02007694_getActionDonePriority(o, o->action);
        PlayerActor_RequestFishRelease(o, data_ov003_02230ac0, 0, 6, -1);
        Camera_SetModeDefault();
        return;
    case 5:
        if (o->window == 0) return;
        if (o->window->state != 0) return;
        Character_detachTalkRequest(o, o);
        Unk_02006d14_clearActionFlag(o, 0x11);
        TalkRequest_FinishPlayerMessage();
        Unk_02006d14_requestAct76(o, 1, r6->fishId, 0, 6, -1);
        return;
    case 6:
        if (o->dropQuery != -1) return;
        o->dropQuery = FieldAction_RequestDropForAid(o->sessionSlot, o->actionItem);
        if (o->dropQuery == -1) return;
        *r5 = 4;
        return;
    }
}
}

namespace ns_0220cd4c {
extern "C" void PlayerActor_MainFishShowCatch(Obj *o) {
    Unk_020102ec_advanceAnim(o);
    volatile VecFx32 sv;
    V3 *pv = (V3 *)&o->drawPos;
    sv.x = pv->x;
    sv.y = pv->y;
    sv.z = pv->z;
    s16 h = o->drawTilt;
    Blk b0 = o->bodyModel.mtx;
    Blk b1 = o->itemHandMtx;
    Unk_02006d14_calcHandMtx(o);
    Unk_02006d14_netFollowTransform(o);
    Unk_020102ec_updateBodyCollider(o);
    if (CommManager_isLocalSlot(gCommManager, o->sessionSlot)) {
        PlayerActor_FishShowCatchUpdate(o);
    } else {
        o->actionPriority = Unk_02007694_getActionDonePriority(o, o->action);
        Unk_02006d14_turnToCamera(o, 0x400);
    }
    o->drawPos.x = sv.x;
    o->drawPos.y = sv.y;
    o->drawPos.z = sv.z;
    o->drawTilt = h;
    o->bodyModel.mtx = b0;
    o->itemHandMtx = b1;
}
}

namespace ns_0220cd4c {
extern "C" s32 PlayerActor_RequestFishStore(Obj *o, u32 a, s32 b, s32 c) {
    Msg m;
    _ZN19PlayerActionRequest6assignEiis(&m, 0x55, b, c);
    *(u8 *)((u8 *)&m + 0xc) = a;
    s32 r = PlayerActor_pushRequest(o, &m);
    return r;
}
}

namespace ns_0220cd4c {
extern "C" void PlayerActor_FishStoreSetNetState(u8 *p, u32 v) {
    *p = v;
}
}

namespace ns_0220cd4c {
extern "C" u32 PlayerActor_FishStoreGetNetState(u8 *p) {
    return *p;
}
}

namespace ns_0220cd4c {
extern "C" void PlayerActor_SetupFishStore(Obj *o, u8 *b) {
    u8 v = b[0xc];
    ((BugNetSwingWork *)&o->actionWork)->swingHit = v;
    PlayerActor_FishStoreSetNetState(o->netData.bytes, v);
    Unk_020102ec_startAnimOnce(o, 0x5a, 3, 3);
    Unk_02006d14_playSe(o, 0x4f);
}
}

namespace ns_0220cd4c {
extern "C" s32 PlayerActor_NetFishStore(Obj *o, s16 a) {
    return PlayerActor_RequestFishStore(o, PlayerActor_FishStoreGetNetState(o->netData.bytes), 6, a);
}
}

namespace ns_0220cd4c {
extern "C" void PlayerActor_FishStoreUpdate(Obj *o) {
    u16 v[4];
    V3 vf;
    Blk bl;
    V3 v48;
    Act *p5 = FishBobber_getFish((u8 *)&o->heldItemModel.bobber);
    s32 f;
    if (o->animId == 0x5a) {
        f = *(s32 *)(Unk_ov003_0220cd4c_Bits *)&o->bodyModel.curFrame >> 12;
        if ((u16)f < 6) {
            if (p5) {
                s32 k = (s32)((u32)data_ov003_022349e6[p5->sizeClass * 20] << 12) / 100;
                f = (s16)(k - k * (u16)f / 6);
            } else {
                f = (s16)(0x1000 - (u16)f * 0x2ab);
            }
        } else {
            f = 0;
        }
    } else {
        f = 0;
    }
    vf.x = f;
    vf.y = f;
    vf.z = f;
    bl = o->itemHandMtx;
    PlayerActor_ApplyHoldOffset(&bl, 0);
    v48.x = ((V3 *)&bl.m[9])->x;
    v48.y = ((V3 *)&bl.m[9])->y;
    v48.z = ((V3 *)&bl.m[9])->z;
    v[0] = 0xfff1;
    if (p5) {
        V3 a, b;
        WorldCurve_FromCurved(&v48, &v48);
        a.x = v48.x;
        a.y = v48.y;
        a.z = v48.z;
        b.x = vf.x;
        b.y = vf.y;
        b.z = vf.z;
        FishCatch_SetDisplayPosScale(p5, &a, &b);
        v[0] = p5->fishId + 0x12e8;
        if (f == 0) FishCatch_NetSendStored(o->sessionSlot);
    }
    u8 *r6 = &((BugNetSwingWork *)&o->actionWork)->swingHit;
    u8 *r7 = o->netData.bytes;
    switch (*r6) {
    case 0:
        if (!AnimFrameCtrl_isFinished((AnimFrameCtrl *)&o->bodyModel)) return;
        o->actionPriority = Unk_02007694_getActionDonePriority(o, o->action);
        PlayerActor_requestWait(o, 6, 1, -1);
        if (CommManager_isLocalSlot(gCommManager, o->sessionSlot)) {
            v[3] = v[0];
            Pocket_AddFoundItem(&v[3]);
        }
        FishBobber_endCatch((u8 *)&o->heldItemModel.bobber);
        break;
    case 1:
        if (o->animId == 0x5a) {
            if (!AnimFrameCtrl_isFinished((AnimFrameCtrl *)&o->bodyModel)) return;
            Unk_020102ec_startAnim(o, 0x6c, 6, 6);
            HeldItemModel_PlayAnim((u8 *)&o->heldItemModel, 0x13, 6, 0);
        }
        if (CommManager_isLocalSlot(gCommManager, o->sessionSlot)) {
            if (o->msgStep == 5) {
                if (!MenuCtrl_OpenPocketsFullFish(v[0], p5)) return;
                o->msgStep = 6;
            } else if (o->msgStep == 6) {
                if (!MenuCtrl_IsFinished()) return;
                o->msgStep = 0xf;
                if (MenuCtrl_IsResultOk()) {
                    FishBobber_setFish((u8 *)&o->heldItemModel.bobber, 0);
                    if (Unk_02006d14_testActionFlag(o, 0x11)) {
                        Unk_02006d14_clearActionFlag(o, 0x11);
                        Character_detachTalkRequest(o, o);
                    }
                    TalkRequest_FinishPlayerMessage();
                    v[1] = MenuCtrl_GetPocketsFullItem();
                    o->actionPriority = Unk_02007694_getActionDonePriority(o, o->action);
                    if (Rng(&v[1], 0x12e8, 0x131f)) {
                        PlayerActor_RequestFishRelease(o, data_ov003_02230ac4, 0, 6, -1);
                    } else {
                        PlayerActor_requestWait(o, 6, 1, -1);
                        *r6 = 2;
                    }
                    return;
                }
                goto l378;
            } else if (o->msgStep >= 0xf) {
            l378:
                if (Rng(&v[0], 0x1320, 0x1322)) {
                    *r6 = 3;
                    if (o->dropQuery == -1) {
                        o->dropQuery = FieldAction_RequestDropForAid(o->sessionSlot, v[0]);
                        if (o->dropQuery != -1) *r6 = 2;
                    }
                } else {
                    if (p5) {
                        V3 a, b;
                        Fish_GetDisplayScale(&vf, p5->fishId);
                        a.x = v48.x;
                        a.y = v48.y;
                        a.z = v48.z;
                        b.x = vf.x;
                        b.y = vf.y;
                        b.z = vf.z;
                        FishCatch_SetDisplayPosScale(p5, &a, &b);
                    }
                    PlayerActor_RequestFishRelease(o, data_ov003_02230ac8, 0, 6, -1);
                    PlayerActor_FishStoreSetNetState(r7, 2);
                }
                FishBobber_startCatchLift((u8 *)&o->heldItemModel.bobber);
                if (Unk_02006d14_testActionFlag(o, 0x11)) {
                    Unk_02006d14_clearActionFlag(o, 0x11);
                    Character_detachTalkRequest(o, o);
                }
                TalkRequest_FinishPlayerMessage();
            }
        } else {
            o->actionPriority = Unk_02007694_getActionDonePriority(o, o->action);
            if (PlayerActor_FishStoreGetNetState(r7) == 2) {
                if (p5) {
                    V3 a, b;
                    Fish_GetDisplayScale(&vf, p5->fishId);
                    a.x = v48.x;
                    a.y = v48.y;
                    a.z = v48.z;
                    b.x = vf.x;
                    b.y = vf.y;
                    b.z = vf.z;
                    FishCatch_SetDisplayPosScale(p5, &a, &b);
                }
                FishBobber_startCatchLift((u8 *)&o->heldItemModel.bobber);
                *r6 = 2;
                Unk_020102ec_startAnim(o, 0, 6, 6);
            }
        }
        break;
    case 2:
        o->actionPriority = Unk_02007694_getActionDonePriority(o, o->action);
        PlayerActor_requestWait(o, 6, 1, -1);
        break;
    case 3:
        if (o->dropQuery == -1) {
            o->dropQuery = FieldAction_RequestDropForAid(o->sessionSlot, v[0]);
            if (o->dropQuery != -1) *r6 = 2;
        }
        break;
    }
}
}

namespace ns_0220cd4c {
extern "C" void PlayerActor_FishStoreCheckEndRemote(Obj *o) {
    if (AnimFrameCtrl_isFinished((AnimFrameCtrl *)&o->bodyModel)) {
        o->actionPriority = Unk_02007694_getActionDonePriority(o, o->action);
        Unk_020102ec_startAnim(o, 0x6c, 6, 6);
        HeldItemModel_PlayAnim((u8 *)&o->heldItemModel, 0x13, 6, 0);
    }
}
}

namespace ns_0220cd4c {
extern "C" void PlayerActor_MainFishStore(Obj *o) {
    Unk_020102ec_advanceAnim(o);
    Unk_02006d14_netFollowTransform(o);
    Unk_020102ec_updateBodyCollider(o);
    if (CommManager_isLocalSlot(gCommManager, o->sessionSlot)) {
        PlayerActor_FishStoreUpdate(o);
    } else {
        PlayerActor_FishStoreCheckEndRemote(o);
    }
}
}

namespace ns_0220cd4c {
extern "C" s32 PlayerActor_RequestBugNetSwing(Obj *o, s32 a, s32 b) {
    Msg m;
    u16 *p = (u16 *)m.unk_0c_b;
    _ZN19PlayerActionRequest6assignEiis(&m, 0x56, a, b);
    if (o->toolTargetKind == 2) {
        *p = Math_Atan2(o->toolTargetPos.x - o->bodyPos.x, o->toolTargetPos.z - o->bodyPos.z);
    } else {
        *p = o->rotY;
    }
    s32 r = PlayerActor_pushRequest(o, &m);
    return r;
}
}

namespace ns_0220cd4c {
extern "C" void PlayerActor_SetupBugNetSwing(Obj *o, u8 *b) {
    BugNetSwingWork *r = (BugNetSwingWork *)&o->actionWork;
    u32 z = 0;
    r->swingHit = z;
    r->targetAngle = *(s16 *)(b + 0xc);
    r->caughtInsect = 0xff;
    Unk_020102ec_startAnimOnce(o, 0x5b, 3, z);
    HeldItemModel_PlayAnim((u8 *)&o->heldItemModel, 3, 3, 0);
}
}

namespace ns_0220cd4c {
extern "C" s32 PlayerActor_NetBugNetSwing(Obj *o, s16 b) {
    return PlayerActor_RequestBugNetSwing(o, 6, b);
}
}

namespace ns_0220cd4c {
extern "C" void PlayerActor_BugNetSwingAdvanceAnim(Obj *o) {
    BOOL r;
    if (AnimFrameCtrl_isFinished((AnimFrameCtrl *)&o->bodyModel))
        r = TRUE;
    else
        r = FALSE;
    Unk_020102ec_advanceAnim(o);
    if (r == 0) {
        if (AnimFrameCtrl_isFinished((AnimFrameCtrl *)&o->bodyModel)) Unk_02006d14_playSe(o, 0x848);
    }
}
}

namespace ns_0220cd4c {
extern "C" void PlayerActor_BugNetSwingTurn(Obj *o) {
    Unk_02006d14_turnToward(o, *(s16 *)((u8 *)o + 0x7d2));
}
}

namespace ns_0220cd4c {
extern "C" void PlayerActor_BugNetSwingTrackTarget(Obj *o) {
    V3 v;
    PlayerActor_GetFrontPoint(&v, o);
    Unk_020102ec_setSubCollider(o, &v, 0x99a, 0x1000);
    ActorCollider_submit((u8 *)o + 0x1c0);
}
}

namespace ns_0220cd4c {
extern "C" void PlayerActor_BugNetSwingUpdate(Obj *o) {
    struct {
        u8 a, b, c, pad;
        volatile u16 w;
    } st;
    V3 v0c, v18, v24, v30, v3c;
    volatile VecFx32 v48;
    V3 v54;
    BugNetSwingWork *r5;
    if (o->bodyModel.frameStep == 0) return;
    if (AnimFrameCtrl_isFinished((AnimFrameCtrl *)&o->bodyModel)) return;
    if (((Unk_ov003_0220cd4c_Bits *)&o->bodyModel.curFrame)->mid < 3) return;
    st.a = 0;
    st.b = 0;
    v0c = V3(o->toolHandMtx.m[9], o->toolHandMtx.m[10], o->toolHandMtx.m[11]);
    WorldCurve_FromCurved(&v0c, &v0c);
    v18.x = v0c.x;
    v18.y = v0c.y;
    v18.z = v0c.z;
    PlayerActor_BugNetSwingGetSweep(o, &v18, &v24, &v30);
    r5 = (BugNetSwingWork *)&o->actionWork;
    if (r5->swingHit == 0 && ((Unk_ov003_0220cd4c_Bits *)&o->bodyModel.curFrame)->mid < 6) {
        PlayerActor_GetHeldItem((u16 *)&st.w, o);
        s32 id;
        if (Rng(&st.w, 0x1376, 0x1376))
            id = 0xa00;
        else
            id = 0xd1f;
        if (BugNet_HitTest(&v18, &v24, id, &st.c, 0)) {
            st.a = 1;
            FieldInsect_GetPosAndKind(&v3c, st.c);
            st.b = FieldInsect_IsTreeKind(st.c);
            if (st.b != 0) v3c.z += 0x100;
        }
    }
    switch (PlayerActor_BugNetSwingCheckHit(o, &st.a, &v3c, &st.b)) {
    case 1:
        if (Insect_TryCatch(st.c) == 0) return;
        r5->swingHit = 1;
        r5->caughtInsect = st.c;
        Unk_02006d14_playSe(o, 0x847);
        return;
    case 2:
        return;
    case 3:
        if (r5->swingHit != 0) return;
        r5->swingHit = 1;
        r5->caughtInsect = 0xff;
        Unk_02006d14_playSe(o, 0x847);
        return;
    case 0:
    default:
        break;
    }
    v54.x = v0c.x;
    v54.y = v0c.y;
    v54.z = v0c.z;
    s32 r = PlayerActor_BugNetSwingCheckGround(o, &v54, &v24, &v30);
    if (st.a == 0) return;
    s32 ang;
    if (r) {
        s32 dx = v3c.x - v30.x;
        v48.x = dx;
        s32 dz = v3c.z - v30.z;
        v48.z = dz;
        ang = Math_Atan2(dx, dz);
    } else {
        ang = 0x7fff;
    }
    if (Math_AngleDiffAbs(ang, 0) > 0x4000) {
        if (Insect_TryCatch(st.c) == 0) return;
        r5->swingHit = 1;
        r5->caughtInsect = st.c;
        Unk_02006d14_playSe(o, 0x847);
    }
}
}

namespace ns_0220c448 {
extern "C" void PlayerActor_BugNetSwingGetSweep(Obj *o, V3 *a, V3 *b, V3 *out) {
    V3 *pos = (V3 *)&o->position;
    b->x = pos->x;
    b->y = pos->y;
    b->z = pos->z;
    s32 idx = ((u16)o->rotY >> 4) * 2;
    s32 sn = data_02135f44[idx];
    s32 cs = data_02135f44[idx + 1];
    switch (((Unk_ov003_0220c448_Bits *)&o->bodyModel.curFrame)->mid) {
    case 3:
        Unk_02006d14_playSe(o, 0x845);
        a->y += 0x1dd3;
        b->x += func_01ffcb0c(sn, 0x1e66);
        b->y += 0x24cd;
        b->z += func_01ffcb0c(cs, 0x1e66);
        break;
    case 4:
        a->x = pos->x;
        a->y = pos->y;
        a->z = pos->z;
        a->x += func_01ffcb0c(sn, 0x1e66);
        a->y += 0x24cd;
        a->z += func_01ffcb0c(cs, 0x1e66);
        b->x += func_01ffcb0c(sn, 0x2a66);
        b->z += func_01ffcb0c(cs, 0x2a66);
        break;
    case 5:
        a->x = pos->x;
        a->y = pos->y;
        a->z = pos->z;
        a->x += func_01ffcb0c(sn, 0x2a66);
        a->z += func_01ffcb0c(cs, 0x2a66);
        b->x += func_01ffcb0c(sn, 0x2800);
        b->y -= 0x666;
        b->z += func_01ffcb0c(cs, 0x2800);
        break;
    }
    Mtx43 l = o->heldItemJointMtx;
    V3 t(l.m[9], l.m[10], l.m[11]);
    WorldCurve_FromCurved(&t, &t);
    *out = t;
}
}

namespace ns_0220c448 {
extern "C" s32 PlayerActor_BugNetSwingCheckHit(Obj *o, u8 *a, V3 *b, u8 *c) {
    V3 v;
    s32 t;
    if (AnimFrameCtrl_hasPassedFrame((AnimFrameCtrl *)&o->bodyModel, 4)) {
        if (PlayerActor_CheckToolHitActor(o)) {
            Unk_02006d14_setActionFlag(o, 9);
            Unk_02006d14_playSe(o, 0x846);
            o->bodyModel.frameStep = 0;
            HeldItemModel_PlayAnim((u8 *)&o->heldItemModel, 4, 3, 1);
            if (o->toolHitKind == 4) {
                return 3;
            }
            if (a[0] != 0) {
                return 1;
            }
            return 2;
        }
        PlayerActor_OffsetByAngle(&v, o, (V3 *)&o->position, &o->rotY, data_ov003_02230adc);
        FieldPos_SnapToUnitCenter(&v, &v);
        if (Ground_GetHeightAt(&v, &t, 0x19) >= 0x400) {
            Unk_02006d14_setActionFlag(o, 9);
            Unk_02006d14_playSe(o, 0x846);
            o->bodyModel.frameStep = 0;
            HeldItemModel_PlayAnim((u8 *)&o->heldItemModel, 4, 3, 1);
            if (a[0] != 0) {
                if (PlayerActor_BugNetSwingCanReach(o, &v, b, c)) {
                    return 1;
                }
                return 2;
            }
            return 2;
        }
    } else if (AnimFrameCtrl_hasPassedFrame((AnimFrameCtrl *)&o->bodyModel, 3)) {
        if (a[0] != 0) {
            V3 w;
            s32 u;
            PlayerActor_OffsetByAngle(&w, o, (V3 *)&o->position, &o->rotY, data_ov003_02230ae0);
            FieldPos_SnapToUnitCenter(&w, &w);
            if (Ground_GetHeightAt(&w, &u, 0x19) >= 0x400) {
                if (PlayerActor_BugNetSwingCanReach(o, &w, b, c)) {
                    return 1;
                }
                return 2;
            }
        }
    }
    return 0;
}
}

namespace ns_0220c448 {
extern "C" s32 PlayerActor_BugNetSwingCanReach(Obj *o, V3 *a, V3 *b, u8 *c) {
    volatile V3 base;
    V3 *pv = (V3 *)&o->position;
    base.x = pv->x;
    base.y = pv->y;
    base.z = pv->z;
    u16 *cell = BlockMap_GetItemPtrAtPos(gSceneBlockMap, a, 0);
    if (cell) {
        if (*cell == 0x1b || *cell == 0x89) {
            return 1;
        }
    }
    if (c[0] == 0) {
        s32 a4 = Math_Atan2(b->x - base.x, b->z - base.z);
        s32 a5 = Math_Atan2(a->x - base.x, a->z - base.z);
        s32 t1 = (s16)Math_AngleDiffAbs(a4, 0);
        s32 t2 = (s16)Math_AngleDiffAbs(a5, 0);
        if (t1 == t2) {
            s32 z = b->z;
            s32 bz = base.z;
            if ((bz >= z && z > a->z) || (bz <= z && z < a->z)) {
                return 1;
            }
            return 0;
        }
        if ((t1 >= 0x4000 && t2 > t1) || (t2 < 0x4000 && t2 <= t1)) {
            return 1;
        }
        s32 dx = a->x - base.x;
        s32 dz = a->z - base.z;
        s32 d2 = dx * dx + dz * dz;
        s16 k = data_02135f44[(((u16)(s16)(t1 - t2)) >> 4) * 2 + 1];
        s32 q = func_01ffcb0c(d2, k);
        q = func_01ffcb0c(q, k);
        if (d2 - q < 0x900000) {
            return 0;
        }
        return 1;
    } else {
        s32 z = b->z;
        s32 bz = base.z;
        if ((bz >= z && z > a->z) || (bz <= z && z < a->z)) {
            return 1;
        }
        return 0;
    }
}
}

namespace ns_0220c448 {
extern "C" s32 PlayerActor_BugNetSwingCheckWall(Obj *o) {
    V3 v;
    s32 t;
    if (AnimFrameCtrl_hasPassedFrame((AnimFrameCtrl *)&o->bodyModel, 4)) {
        if (PlayerActor_CheckToolHitActor(o)) {
            Unk_02006d14_setActionFlag(o, 9);
            Unk_02006d14_playSe(o, 0x846);
            o->bodyModel.frameStep = 0;
            HeldItemModel_PlayAnim((u8 *)&o->heldItemModel, 4, 3, 1);
            return 1;
        }
        PlayerActor_OffsetByAngle(&v, o, (V3 *)&o->position, &o->rotY, data_ov003_02230ad4);
        if (Ground_GetHeightAt(&v, &t, 0x19) >= 0x400) {
            Unk_02006d14_setActionFlag(o, 9);
            Unk_02006d14_playSe(o, 0x846);
            o->bodyModel.frameStep = 0;
            HeldItemModel_PlayAnim((u8 *)&o->heldItemModel, 4, 3, 1);
            return 1;
        }
    }
    return 0;
}
}

namespace ns_0220c448 {
extern "C" s32 PlayerActor_BugNetSwingCheckGround(Obj *o, V3 *a, V3 *b, V3 *c) {
    Unk_ov003_0220c768_A l;
    CollisionTag_Construct(&l);
    s32 x, y;
    if (Collision_TestSegment(&l, c, a, 0x1b)) {
    L_ok:
        Unk_02006d14_setActionFlag(o, 9);
        Unk_02006d14_playSe(o, 0x846);
        o->bodyModel.frameStep = 0;
        HeldItemModel_PlayAnim((u8 *)&o->heldItemModel, 4, 3, 1);
        if (AnimFrameCtrl_hasPassedFrame((AnimFrameCtrl *)&o->bodyModel, 5)) {
            Vec2 p;
            x = 0;
            y = 0;
            FieldPos_ToUnit(&x, &y, c);
            p.x = x;
            p.y = y;
            Flower_PlayTrampleFx(&p);
        }
        if (((Unk_ov003_0220c448_Bits *)&o->bodyModel.curFrame)->mid <= 4) {
            CollisionTag_Destruct(&l);
            return 1;
        }
    } else {
        if (AnimFrameCtrl_hasPassedFrame((AnimFrameCtrl *)&o->bodyModel, 5) == 0) {
            goto end0;
        }
        if (CommManager_isLocalSlot(gCommManager, o->sessionSlot) == 0) {
            GroundInfoBase q;
            GroundInfo_initAtPos(&q, b, 0, 0);
            if (q.waterKind == 0) {
                *c = *b;
                GroundInfo_Destruct(&q);
                goto L_ok;
            }
            GroundInfo_Destruct(&q);
        }
        Effect_Create(0xb, b, 0, 0);
        Unk_02006d14_setActionFlag(o, 9);
        HeldItemModel_PlayAnim((u8 *)&o->heldItemModel, 4, 3, 1);
    }
end0:
    CollisionTag_Destruct(&l);
    return 0;
}
}

namespace ns_0220c448 {
extern "C" void PlayerActor_BugNetSwingUpdateRemote(Obj *o) {
    if (o->bodyModel.frameStep != 0 && ((Unk_ov003_0220c448_Bits *)&o->bodyModel.curFrame)->mid >= 3) {
        if (PlayerActor_BugNetSwingCheckWall(o) == 0) {
            V3 a(o->toolHandMtx.m[9], o->toolHandMtx.m[10], o->toolHandMtx.m[11]);
            V3 b, c, d, e;
            WorldCurve_FromCurved(&a, &a);
            b = a;
            PlayerActor_BugNetSwingGetSweep(o, &b, &c, &d);
            e = a;
            PlayerActor_BugNetSwingCheckGround(o, &e, &c, &d);
        }
    }
}
}

namespace ns_0220c448 {
extern "C" void PlayerActor_BugNetSwingDecelerate(Obj *o) {
    if (o->speed != 0) {
        s32 t = PlayerActor_DecreaseClamped(o->speed, 0, 0x171);
        Unk_020102ec_setSpeed(o, &t);
        if (o->speed == 0) {
            Effect_Create(0x2b, (V3 *)&o->position, &o->rotY, 0);
        }
    }
}
}

namespace ns_0220c448 {
extern "C" void PlayerActor_BugNetSwingCheckEnd(Obj *o) {
    if (AnimFrameCtrl_isFinished((AnimFrameCtrl *)&o->bodyModel) == 0 && o->bodyModel.frameStep != 0) {
        return;
    }
    u8 *p = &o->actionWorkRaw[0];
    if (p[0] != 0) {
        u32 id = p[4];
        if (id == 0xff) {
            PlayerActor_RequestInsectShowCatch(o, 0, id, 0x30, 6, -1);
        } else {
            s32 r = Insect_GetCatchResult(id, (u8)o->sessionSlot);
            if (r == 0) {
                u32 t = (u8)Insect_FinishCatch(id);
                PlayerActor_RequestInsectShowCatch(o, 0, id, t, 6, -1);
            } else if (r == 1) {
                p[0] = 0;
            }
        }
    } else {
        if (AnimFrameCtrl_isFinished(HeldItemModel_GetModel((u8 *)&o->heldItemModel) + 0x9c)) {
            o->actionPriority = Unk_02007694_getActionDonePriority(o, o->action);
            if (CommManager_isLocalSlot(gCommManager, o->sessionSlot)) {
                PlayerActor_requestWait(o, 9, 1, -1);
            }
        }
    }
}
}

namespace ns_0220c448 {
extern "C" void PlayerActor_MainBugNetSwing(Obj *o) {
    if (CommManager_isLocalSlot(gCommManager, o->sessionSlot)) {
        PlayerActor_BugNetSwingTurn(o);
        PlayerActor_BugNetSwingUpdate(o);
        PlayerActor_BugNetSwingAdvanceAnim(o);
        Unk_020102ec_moveWithCollision(o);
        Unk_020102ec_updateBodyCollider(o);
        PlayerActor_BugNetSwingDecelerate(o);
        PlayerActor_BugNetSwingCheckEnd(o);
        PlayerActor_BugNetSwingTrackTarget(o);
    } else {
        PlayerActor_BugNetSwingUpdateRemote(o);
        PlayerActor_BugNetSwingAdvanceAnim(o);
        if (Unk_02006d14_netFollowTransform(o)) {
            Unk_020102ec_moveWithCollision(o);
        }
        Unk_020102ec_updateBodyCollider(o);
        PlayerActor_BugNetSwingDecelerate(o);
        PlayerActor_BugNetSwingCheckEnd(o);
        PlayerActor_BugNetSwingTrackTarget(o);
    }
    u8 *p = &o->actionWorkRaw[0];
    V3 a, b(o->heldItemJointMtx.m[9], o->heldItemJointMtx.m[10], o->heldItemJointMtx.m[11]);
    WorldCurve_FromCurved(&a, &b);
    *(V3 *)(p + 8) = a;
}
}

namespace ns_0220c448 {
extern "C" s32 PlayerActor_RequestInsectShowCatch(Obj *o, u32 a, u32 b, u32 c, s32 d, s16 e) {
    Msg m;
    _ZN19PlayerActionRequest6assignEiis(&m, 0x57, d, e);
    Rec &q = (*(Unk_ov003_0220c4ac_Rec *)m.unk_0c_b);
    q.c = a;
    q.a = b;
    q.b = c;
    s32 r = PlayerActor_pushRequest(o, &m);
    return r;
}
}

namespace ns_0220c448 {
extern "C" void PlayerActor_InsectShowCatchSetNetData(u8 *p, u32 a, u32 b, u32 c, u8 d, s16 e) {
    p[0] = a;
    p[1] = b;
    p[2] = c;
    p[3] = d;
    PlayerActor_InsectShowCatchSetNetAngle(p, e);
}
}

namespace ns_0220c448 {
extern "C" void PlayerActor_InsectShowCatchSetNetState(u8 *p, u32 a) {
    p[0] = a;
}
}

namespace ns_0220c448 {
extern "C" void PlayerActor_InsectShowCatchSetNetAngle(void *p, s32 a) {
    NetBuf_WriteS16B((u8 *)p + 4, a);
}
}

namespace ns_0220c448 {
extern "C" void PlayerActor_InsectShowCatchGetNetData(u8 *p, u8 *a, u8 *b, u8 *c, u8 *d, u16 *e) {
    *a = p[0];
    *b = p[1];
    *c = p[2];
    *d = p[3];
    *e = PlayerActor_InsectShowCatchGetNetAngle(p);
}
}

namespace ns_0220c448 {
extern "C" u32 PlayerActor_InsectShowCatchGetNetState(u8 *p) {
    return p[0];
}
}

namespace ns_0220c448 {
extern "C" u32 PlayerActor_InsectShowCatchGetNetAngle(void *p) {
    return NetBuf_ReadS16B((u8 *)p + 4);
}
}

namespace ns_0220ba90 {
extern "C" void PlayerActor_SetupInsectShowCatch(Obj *o, Msg *r) {
    u8 *q = &((Unk_ov003_0220bc84_Pair *)r->unk_0c_b)->a;
    u32 a = q[0];
    u32 b = q[1];
    u32 c = q[2];
    if (c == 0) {
        Unk_020102ec_startAnimOnce(o, 0x5c, 3, 0);
        HeldItemModel_PlayAnim((u8 *)&o->heldItemModel, 5, 3, 1);
    }
    State *rec = (State *)&o->actionWork;
    rec->insectSlot = a;
    rec->insectKind = b;
    rec->showMode = c;
    rec->unk_04 = 0x39;
    rec->catalogWasFull = Catalog_HasAllInsects();
    if (c != 0) {
        if (c == 3) {
            rec->step = 3;
            rec->unk_04 = 0x3b;
            o->msgStep = 8;
        } else {
            if (o->animId == 0x6c) {
                rec->showMode = 2;
                Unk_020102ec_startAnim(o, 0, 3, 3);
            }
            rec->step = 7;
        }
    } else {
        if (CommManager_isLocalSlot(gCommManager, o->sessionSlot)) {
            Bgm_RequestSilence(0x12, 0, 0);
            Hud_GetCountdown();
            HudCountdown_incCountB();
            VillagerTrend_OnInsectCaught(&o->position);
        }
        rec->step = 0;
    }
    rec->effect = -1;
    if (CommManager_isLocalSlot(gCommManager, o->sessionSlot)) {
        PlayerActor_InsectShowCatchSetNetData(o->netData.bytes, rec->step, a, b, c, 0);
    }
}
}

namespace ns_0220ba90 {
extern "C" void PlayerActor_NetInsectShowCatch(Obj *o, s32 a) {
    u8 buf[4];
    u32 e;
    PlayerActor_InsectShowCatchGetNetData(o->netData.bytes, &buf[0], &buf[1], &buf[2], &buf[3], &e);
    PlayerActor_RequestInsectShowCatch(o, buf[3], buf[1], buf[2], 6, a);
}
}

namespace ns_0220ba90 {
extern "C" void PlayerActor_EndInsectShowCatch(Obj *o) {
    if (((State *)&o->actionWork)->effect != -1) {
        Effect_End(((State *)&o->actionWork)->effect);
    }
    o->headPitch = 0;
    o->headYaw = 0;
}
}

namespace ns_0220ba90 {
extern "C" void PlayerActor_InsectShowCatchUpdate(Obj *o) {
    struct {
        s16 v[5];
        s32 pr[2];
    } L2;
    T48 t;
    V3 vv;
    T48 t2;
    V3 d;
    V3 w;
    V3 pos;
    State *rec;
    u8 *sub;
    u32 mode;
    u8 *p7;
    u8 b8;
    void *g;
    rec = (State *)&o->actionWork;
    sub = o->netData.bytes;
    mode = rec->showMode;
    u8 *st = &rec->step;
    p7 = &rec->insectSlot;
    b8 = rec->insectKind;
    if (mode == 0) {
        Unk_02006d14_turnToCamera(o, 0x400);
    }
    s32 r7 = o->sessionSlot;
    if (*st == 0) {
        if (CommManager_isLocalSlot(gCommManager, r7)) {
            *st = 1;
        } else {
            *st = 9;
            if (*p7 != 0xff) {
                Insect_FinishCatch(*p7);
            }
        }
        u32 bt = b8;
        if (bt == 0x18 || bt == 0x30 || (u8)(bt + 0xce) <= 1) {
            t = o->itemHandMtx;
            PlayerActor_ApplyHoldOffset(&t, 0);
            vv.x = ((V3 *)((u8 *)&t + 0x24))->x;
            vv.y = ((V3 *)((u8 *)&t + 0x24))->y;
            vv.z = ((V3 *)((u8 *)&t + 0x24))->z;
            WorldCurve_FromCurved(&vv, &vv);
            rec->effect = Effect_Create(0x25, &vv, 0, 0);
        }
        HeldInsect_Start(b8, (u8)r7);
    }
    t2 = o->itemHandMtx;
    d.x = 0x4cd;
    d.y = 0;
    d.z = 0;
    if (o->animId != 0x5c) {
        d.x = d.x + 0x333;
        d.y = d.y + 0x19a;
        d.z = d.z - 0x19a;
    } else {
        s32 f = ((Unk_ov003_0220bc84_Bits *)&o->bodyModel.curFrame)->f;
        if (f >= 0x24) {
            s32 num = (f - 0x23) * 0x19a;
            s32 den = ((Unk_ov003_0220bc84_Bits *)&o->bodyModel.numFrames)->f - 0x24;
            s32 e = num / den;
            d.x = d.x + e * 2;
            d.y = d.y + e;
            d.z = d.z - e;
        }
    }
    PlayerActor_ApplyHoldOffset(&t2, &d);
    if (rec->effect != -1) {
        w.x = ((V3 *)((u8 *)&t2 + 0x24))->x;
        w.y = ((V3 *)((u8 *)&t2 + 0x24))->y;
        w.z = ((V3 *)((u8 *)&t2 + 0x24))->z;
        WorldCurve_FromCurved(&w, &w);
        Effect_SetPosition(rec->effect, &w, 0, 0);
    }
    L2.v[2] = 0;
    L2.v[3] = 0;
    L2.v[4] = 0;
    u32 fr = ((Unk_ov003_0220bc84_Bits *)&o->bodyModel.curFrame)->f;
    if (fr < 0x17 && o->animId == 0x5c) {
        goto tail;
    }
    g = gCommManager;
    if (!CommManager_isLocalSlot(g, o->sessionSlot)) {
        o->actionPriority = Unk_02007694_getActionDonePriority(o, o->action);
        if (*st < 6 || *st == 9) {
            if (PlayerActor_InsectShowCatchGetNetState(sub) == 6) {
                HeldInsect_Release((u8)r7, PlayerActor_InsectShowCatchGetNetAngle(sub));
                Unk_020102ec_startAnim(o, 0, 3, 3);
                *st = 7;
            }
        }
    }
    L2.v[2] = 0x64;
    L2.v[3] = 0x64;
    L2.v[4] = 0x64;
    if (o->animId == 0x5c) {
        u32 f2 = ((Unk_ov003_0220bc84_Bits *)&o->bodyModel.curFrame)->f;
        if (f2 <= 0x21) {
            s16 t = (f2 - 0x17) * 10;
            if (t >= 0x64) {
                t = 0x64;
            }
            L2.v[2] = t;
            L2.v[3] = t;
            L2.v[4] = t;
        }
    }
    switch (*st) {
    case 0:
        break;
    case 1: {
        if (TalkRequest_AddPlayerMessage() == 0) {
            break;
        }
        *st = 2;
        MsgRequest *sec = o;
        Character_attachTalkRequest(o, sec);
        Unk_02006d14_setActionFlag(o, 0x11);
        MsgRequest &sr = *o;
        MsgRequest_setFileName(&sr, (void *)"obj_etc_getinsect");
        o->msgIndex = b8;
        L2.v[1] = b8 + 0x12b0;
        Catalog_AddCreature(&L2.v[1]);
        o->window->nextState = 1;
        Camera_SetMode4();
        if (Unk_02006d14_testActionFlag(o, 0x1a)) {
            Bgm_Release(0x3f);
            Unk_02006d14_clearActionFlag(o, 0x1a);
        }
        Bgm_ReleasePriority(0x12);
        Bgm_RequestSilence(0xc, 0, 0xe);
        Bgm_Request(0xd, 0x39, 0x7f, 1);
        break;
    }
    case 2: {
        TalkWindowState *h = o->window;
        if (h == 0) {
            break;
        }
        if (h->state == 0) {
            break;
        }
        if (Catalog_HasAllInsects() != 0 && rec->catalogWasFull == 0) {
            *st = 8;
            o->msgStep = 0xd;
            break;
        }
        *st = 3;
        o->msgStep = 8;
        break;
    }
    case 3: {
        if (Pocket_FindEmpty() == -1) {
            L2.pr[0] = 0;
            L2.pr[1] = 0;
            if (FieldAction_FindDropUnit(0x10, L2.pr)) {
                *st = 4;
                o->msgStep = 0;
            } else {
                *st = 5;
                o->msgStep = 1;
            }
            return;
        }
        TalkWindowState *h = o->window;
        if (h == 0) {
            break;
        }
        if (h->state != 0) {
            break;
        }
        MsgRequest *sec = o;
        Character_detachTalkRequest(o, sec);
        Unk_02006d14_clearActionFlag(o, 0x11);
        TalkRequest_FinishPlayerMessage();
        PlayerActor_RequestInsectStore(o, b8, 0, 6, -1);
        Camera_SetModeDefault();
        break;
    }
    case 4: {
        if (o->msgStep >= 0xf) {
            *st = 5;
            break;
        }
        TalkWindowState *h = o->window;
        if (h == 0) {
            break;
        }
        if (h->state != 0) {
            break;
        }
        MsgRequest *sec = o;
        Character_detachTalkRequest(o, sec);
        Unk_02006d14_clearActionFlag(o, 0x11);
        PlayerActor_RequestInsectStore(o, b8, 1, 6, -1);
        Camera_SetModeDefault();
        break;
    }
    case 5: {
        TalkWindowState *h = o->window;
        if (h == 0) {
            break;
        }
        if (h->state != 0) {
            break;
        }
        if (rec->effect != -1) {
            Effect_End(rec->effect);
        }
        s16 ang = Random_GlobalBelow(0x2aaa) - 0x1555;
        HeldInsect_Release((u8)r7, ang);
        PlayerActor_InsectShowCatchSetNetAngle(sub, ang);
        MsgRequest *sec = o;
        Character_detachTalkRequest(o, sec);
        Unk_02006d14_clearActionFlag(o, 0x11);
        TalkRequest_FinishPlayerMessage();
        Unk_020102ec_startAnim(o, 0, 3, 3);
        *st = 6;
        PlayerActor_InsectShowCatchSetNetState(sub, 6);
        Camera_SetModeDefault();
        return;
    }
    case 6: {
        if (HeldInsect_GetStage((u8)r7) != 3) {
            if (o->headPitch == 0 && o->headYaw == 0) {
                o->actionPriority = Unk_02007694_getActionDonePriority(o, o->action);
                switch (mode) {
                case 2:
                    if (CommManager_isLocalSlot(g, o->sessionSlot)) {
                        if (Unk_02006d14_testActionFlag(o, 0x11)) {
                            Unk_02006d14_clearActionFlag(o, 0x11);
                            MsgRequest *sec = o;
                            Character_detachTalkRequest(o, sec);
                        }
                        TalkRequest_FinishPlayerMessage();
                    }
                case 0:
                case 3:
                    PlayerActor_requestWait(o, 3, 1, -1);
                    return;
                case 1:
                    Unk_02007694_requestAct05(o, 3, 5, -1);
                    return;
                }
                return;
            }
            PlayerActor_ApproachAngle(&o->headPitch, 0, 0x400, 0x1770000, 0xc0000);
            PlayerActor_ApproachAngle(&o->headYaw, 0, 0x400, 0x1770000, 0xc0000);
            return;
        } else {
            V3 *q = HeldInsect_GetPos(r7);
            V3 *pv = (V3 *)&o->position;
            pos.x = o->position.x;
            pos.y = pv->y;
            pos.z = pv->z;
            pos.y = pos.y + 0x1b33;
            s16 yaw = Math_Atan2(q->x - pos.x, q->z - pos.z);
            s32 h = Math_Atan2(q->y - pos.y, Vec_DistXZ(q, &pos));
            if (h >= 0x1800) {
                h = 0x1800;
            }
            yaw -= o->rotY;
            PlayerActor_ApproachAngle(&o->headPitch, h, 0x400, 0x1770000, 0xc0000);
            PlayerActor_ApproachAngle(&o->headYaw, yaw, 0x400, 0x1770000, 0xc0000);
            return;
        }
    }
    case 7: {
        s32 r = HeldInsect_GetStage((u8)r7);
        if (r == 3 || r == 0) {
            *st = 6;
        }
        return;
    }
    case 8: {
        TalkWindowState *h = o->window;
        if (h == 0) {
            break;
        }
        if (h->state != 0) {
            break;
        }
        MsgRequest *sec = o;
        Character_detachTalkRequest(o, sec);
        Unk_02006d14_clearActionFlag(o, 0x11);
        TalkRequest_FinishPlayerMessage();
        Unk_02006d14_requestAct76(o, 0, b8, *p7, 6, -1);
        return;
    }
    }
tail:
    HeldInsect_SetHandMatrix((u8)r7, &L2.v[2], &t2, 0);
}
}

namespace ns_0220ba90 {
extern "C" void PlayerActor_MainInsectShowCatch(Obj *o) {
    Unk_020102ec_advanceAnim(o);
    volatile V3 sv;
    V3 *pv = (V3 *)&o->drawPos;
    sv.x = o->drawPos.x;
    sv.y = pv->y;
    sv.z = pv->z;
    s16 d0 = o->drawTilt;
    T48 a = o->bodyModel.mtx;
    T48 b = o->itemHandMtx;
    Unk_02006d14_calcHandMtx(o);
    Unk_02006d14_netFollowTransform(o);
    Unk_020102ec_updateBodyCollider(o);
    ovcall::PlayerActor_InsectShowCatchUpdate(o);
    o->drawPos.x = sv.x;
    o->drawPos.y = sv.y;
    o->drawPos.z = sv.z;
    o->drawTilt = d0;
    o->bodyModel.mtx = a;
    o->itemHandMtx = b;
}
}

namespace ns_0220ba90 {
extern "C" s32 PlayerActor_RequestInsectStore(Obj *o, u32 a, u32 b, s32 id, s32 e) {
    Msg m;
    _ZN19PlayerActionRequest6assignEiis(&m, 0x58, id, *(s16 *)&e);
    Unk_ov003_0220bc84_Pair &q = (*(Unk_ov003_0220bc84_Pair *)m.unk_0c_b);
    q.a = a;
    q.b = b;
    s32 r = PlayerActor_pushRequest(o, &m);
    return r;
}
}

namespace ns_0220ba90 {
extern "C" void PlayerActor_InsectStoreSetNetData(u8 *p, u32 a, u32 b, u32 c) {
    p[0] = a;
    PlayerActor_InsectStoreSetNetState(p, b);
    PlayerActor_InsectStoreSetNetAngle(p, c);
}
}

namespace ns_0220ba90 {
extern "C" void PlayerActor_InsectStoreSetNetState(u8 *p, u32 a) {
    p[1] = a;
}
}

namespace ns_0220ba90 {
extern "C" void PlayerActor_InsectStoreSetNetAngle(u8 *p, u32 a) {
    NetBuf_WriteS16B(p + 2, a);
}
}

namespace ns_0220ba90 {
extern "C" void PlayerActor_InsectStoreGetNetData(u8 *p, u8 *a, u8 *b, u16 *c) {
    *a = p[0];
    *b = PlayerActor_InsectStoreGetNetState(p);
    *c = PlayerActor_InsectStoreGetNetAngle(p);
}
}

namespace ns_0220ba90 {
extern "C" u32 PlayerActor_InsectStoreGetNetState(u8 *p) {
    return p[1];
}
}

namespace ns_0220ba90 {
extern "C" u32 PlayerActor_InsectStoreGetNetAngle(u8 *p) {
    return NetBuf_ReadS16B(p + 2);
}
}

namespace ns_0220ba90 {
extern "C" void PlayerActor_SetupInsectStore(Obj *o, Msg *r) {
    u8 x, y;
    Unk_ov003_0220bc84_Pair *q = (Unk_ov003_0220bc84_Pair *)r->unk_0c_b;
    u8 *p = (u8 *)&o->actionWork;
    x = q->a;
    y = q->b;
    p[0] = x;
    p[1] = y;
    PlayerActor_InsectStoreSetNetData(o->netData.bytes, x, y, 0);
    Unk_020102ec_startAnimOnce(o, 0x5d, 3, 0);
    HeldItemModel_PlayAnim((u8 *)&o->heldItemModel, 6, 3, 1);
    Unk_02006d14_playSe(o, 0x4f);
}
}

namespace ns_0220ba90 {
extern "C" s32 PlayerActor_NetInsectStore(Obj *o, s32 a) {
    u8 buf[4];
    PlayerActor_InsectStoreGetNetData(o->netData.bytes, &buf[0], &buf[1], (u16 *)&buf[2]);
    return PlayerActor_RequestInsectStore(o, buf[0], buf[1], 6, a);
}
}

namespace ns_0220ba90 {
extern "C" void PlayerActor_EndInsectStore(Obj *o) {
    o->headPitch = 0;
    o->headYaw = 0;
}
}

namespace ns_0220b0f0 {
extern "C" void PlayerActor_InsectStoreUpdate(Obj *o) {
    s32 flag = 0;
    s16 w[4];
    V3 pos;
    S30 cp;
    u32 code;
    s32 v;
    s16 h;
    u32 id;
    V3 *pv = (V3 *)&o->position;
    pos.x = pv->x;
    pos.y = pv->y;
    pos.z = pv->z;
    id = o->sessionSlot;
    if (o->animId == 0x5d) {
        u32 m = ((Unk_ov003_0220b0f0_Bits *)&o->bodyModel.curFrame)->mid;
        if (m < 6) {
            h = 0x64 - m * 16;
        } else {
            h = 0;
        }
    } else {
        h = 0;
    }
    w[1] = h;
    w[2] = h;
    w[3] = h;
    cp = o->itemHandMtx;
    PlayerActor_ApplyHoldOffset(&cp, 0);
    u8 *rec = (u8 *)&o->actionWork;
    u8 *p6 = o->netData.bytes;
    u8 *st = rec + 1;
    code = (u16)(rec[0] + 0x12b0);
    switch (rec[1]) {
    case 0:
        if (AnimFrameCtrl_isFinished((AnimFrameCtrl *)&o->bodyModel) == 0) {
            goto tail;
        }
        HeldInsect_Remove(o->sessionSlot, 1);
        o->actionPriority = Unk_02007694_getActionDonePriority(o, o->action);
        PlayerActor_requestWait(o, 6, 1, -1);
        if (CommManager_isLocalSlot(gCommManager, o->sessionSlot)) {
            w[0] = code;
            Pocket_AddFoundItem(w);
        }
        flag = 1;
        goto tail;
    case 1:
        if (o->animId == 0x5d) {
            if (AnimFrameCtrl_isFinished((AnimFrameCtrl *)&o->bodyModel) == 0) {
                goto tail;
            }
            Unk_020102ec_startAnim(o, 0x6c, 3, 3);
            HeldItemModel_PlayAnim((u8 *)&o->heldItemModel, 0, 3, 0);
        }
        pos.x -= 0x400;
        pos.y += 0x1b34;
        pos.z += 0x1400;
        WorldCurve_ToCurved(&pos, &pos);
        cp.m[9] = pos.x;
        cp.m[10] = pos.y;
        cp.m[11] = pos.z;
        if (CommManager_isLocalSlot(gCommManager, o->sessionSlot)) {
            s32 s = o->msgStep;
            if (s == 5) {
                if (MenuCtrl_OpenPocketsFullInsect(code) == 0) {
                    goto tail;
                }
                o->msgStep = 6;
                goto tail;
            } else if (s == 6) {
                if (MenuCtrl_IsFinished() == 0) {
                    goto tail;
                }
                o->msgStep = 0xf;
                if (MenuCtrl_IsResultOk() != 0) {
                    if (Unk_02006d14_testActionFlag(o, 0x11)) {
                        Unk_02006d14_clearActionFlag(o, 0x11);
                        Character_detachTalkRequest(o, o);
                    }
                    TalkRequest_FinishPlayerMessage();
                    o->actionPriority = Unk_02007694_getActionDonePriority(o, o->action);
                    PlayerActor_requestWait(o, 6, 1, -1);
                    return;
                }
            } else if (s < 0xf) {
                goto tail;
            }
            v = (s16)(Random_GlobalBelow(0x2aaa) - 0x1555);
            HeldInsect_Release(id, v);
            PlayerActor_InsectStoreSetNetAngle(p6, v);
            if (Unk_02006d14_testActionFlag(o, 0x11)) {
                Unk_02006d14_clearActionFlag(o, 0x11);
                Character_detachTalkRequest(o, o);
            }
            TalkRequest_FinishPlayerMessage();
            *st = 2;
            PlayerActor_InsectStoreSetNetState(p6, 2);
            Unk_020102ec_startAnim(o, 0, 4, 4);
            return;
        } else {
            o->actionPriority = Unk_02007694_getActionDonePriority(o, o->action);
            if (PlayerActor_InsectStoreGetNetState(p6) == 2) {
                HeldInsect_Release(id, PlayerActor_InsectStoreGetNetAngle(p6));
                *st = 2;
                Unk_020102ec_startAnim(o, 0, 4, 4);
            }
            return;
        }
    case 2:
        if (HeldInsect_GetStage(id) != 3) {
            if (o->headPitch == 0 && o->headYaw == 0) {
                o->actionPriority = Unk_02007694_getActionDonePriority(o, o->action);
                PlayerActor_requestWait(o, 6, 1, -1);
            } else {
                PlayerActor_ApproachAngle(&o->headPitch, 0, 0x400, 0x1770000, 0xc0000);
                PlayerActor_ApproachAngle(&o->headYaw, 0, 0x400, 0x1770000, 0xc0000);
            }
            return;
        } else {
            V3 *q = HeldInsect_GetPos(id);
            V3 p3;
            V3 *pv2 = (V3 *)&o->position;
            p3.x = pv2->x;
            p3.y = pv2->y;
            p3.z = pv2->z;
            p3.y += 0x1b33;
            s32 yaw = Math_Atan2(q->x - p3.x, q->z - p3.z);
            s32 hh = Math_Atan2(q->y - p3.y, Vec_DistXZ(q, &p3));
            o->headYaw = yaw;
            if (hh >= 0x1800) {
                hh = 0x1800;
            }
            o->headPitch = hh;
            return;
        }
    default:
    tail:
        HeldInsect_SetHandMatrix(id, &w[1], &cp, flag);
    }
}
}

namespace ns_0220b0f0 {
extern "C" void PlayerActor_MainInsectStore(Obj *o) {
    Unk_020102ec_advanceAnim(o);
    Unk_02006d14_netFollowTransform(o);
    Unk_020102ec_updateBodyCollider(o);
    ovcall::PlayerActor_InsectStoreUpdate(o);
}
}

namespace ns_0220b0f0 {
extern "C" void PlayerActor_ShovelReadySetArgs(u8 *p, u8 a, u8 b, u32 c) {
    p[0] = a;
    p[1] = b;
    p[2] = c;
}
}

namespace ns_0220b0f0 {
extern "C" s32 PlayerActor_RequestShovelReady(Obj *o, s32 a, s16 b) {
    Msg m;
    u8 *d = m.unk_0c_b;
    V3 v;
    s32 f;
    _ZN19PlayerActionRequest6assignEiis(&m, 0x59, a, b);
    if (o->hasTargetPos != 0) {
        s32 z = o->targetPos.z;
        v.x = o->targetPos.x;
        v.y = 0;
        v.z = z;
        f = 1;
    } else {
        s32 z = o->toolTargetPos.z;
        v.x = o->toolTargetPos.x;
        f = 0;
        v.y = 0;
        v.z = z;
        if (o->toolTargetKind != 0) {
            f = 1;
        }
    }
    s32 x = 0;
    s32 y = 0;
    FieldPos_ToUnit(&x, &y, &v);
    PlayerActor_ShovelReadySetArgs(d, x, y, f);
    s32 r = PlayerActor_pushRequest(o, &m);
    return r;
}
}

namespace ns_0220b0f0 {
extern "C" s32 PlayerActor_RequestShovelReadyAt(Obj *o, u8 *a, u8 *b, u8 *c, s32 id, s32 e) {
    Msg m;
    _ZN19PlayerActionRequest6assignEiis(&m, 0x59, id, *(s16 *)&e);
    PlayerActor_ShovelReadySetArgs(m.unk_0c_b, *a, *b, *c);
    s32 r = PlayerActor_pushRequest(o, &m);
    return r;
}
}

namespace ns_0220b0f0 {
extern "C" void PlayerActor_ShovelReadySetWork(Rec *r, V3C v, s32 c, u32 d) {
    r->targetPos.x = v.x;
    r->targetPos.y = v.y;
    r->targetPos.z = v.z;
    r->targetAngle = c;
    r->hasTarget = d;
    r->unk_0f = 0;
}
}

namespace ns_0220b0f0 {
extern "C" void PlayerActor_ShovelReadySetNetData(u8 *p, u8 a, u8 b, u32 c) {
    p[0] = a;
    p[1] = b;
    p[2] = c;
}
}

namespace ns_0220b0f0 {
extern "C" void PlayerActor_ShovelReadyGetNetData(u8 *src, u8 *a, u8 *b, u8 *c) {
    *a = src[0];
    *b = src[1];
    *c = src[2];
}
}

namespace ns_0220b0f0 {
extern "C" void PlayerActor_SetupShovelReady(Obj *o, Msg *r) {
    Unk_ov003_0220b0f0_B3 *q = (Unk_ov003_0220b0f0_B3 *)r->unk_0c_b;
    Rec *rp = (Rec *)&o->actionWork;
    u32 a = q->a;
    u32 b = q->b;
    u32 c = q->c;
    V3 pos;
    V3 out;
    V3C t;
    s32 acc;
    PlayerActor_ShovelReadySetNetData(o->netData.bytes, a, b, c);
    Unk_020102ec_startAnimOnce(o, 0x49, 3, 0);
    FieldPos_FromUnitCenter(&pos, a, b);
    if (c == 0) {
        s32 d = o->speed;
        acc = 0x2000;
        while (d != 0) {
            d -= 0x171;
            if (d > 0) {
                acc += d;
            } else {
                d = 0;
            }
        }
        PlayerActor_OffsetByAngle(&out, o, (V3 *)&o->position, &o->rotY, &acc);
        pos.x = out.x;
        pos.y = out.y;
        pos.z = out.z;
        FieldPos_SnapToUnitCenter(&pos, &pos);
    }
    s32 h = Math_Atan2(pos.x - o->bodyPos.x, pos.z - o->bodyPos.z);
    t.x = pos.x;
    t.y = pos.y;
    t.z = pos.z;
    PlayerActor_ShovelReadySetWork(rp, t, h, c);
}
}

namespace ns_0220b0f0 {
extern "C" s32 PlayerActor_NetShovelReady(Obj *o, s32 a) {
    u8 b[3];
    PlayerActor_ShovelReadyGetNetData(o->netData.bytes, &b[0], &b[1], &b[2]);
    return PlayerActor_RequestShovelReadyAt(o, &b[0], &b[1], &b[2], 6, a);
}
}

namespace ns_0220b0f0 {
extern "C" void PlayerActor_ShovelReadyTurn(Obj *o) {
    Rec *r4 = (Rec *)&o->actionWork;
    s32 h;
    if (o->speed == 0 && r4->hasTarget == 0) {
        V3 t;
        PlayerActor_GetFrontUnitCenter(&t, o);
        h = Math_Atan2(t.x - o->bodyPos.x, t.z - o->bodyPos.z);
        r4->targetAngle = h;
        r4->hasTarget = 1;
        r4->targetPos.x = t.x;
        r4->targetPos.y = t.y;
        r4->targetPos.z = t.z;
    } else {
        h = r4->targetAngle;
    }
    Unk_02006d14_turnToward(o, h);
}
}

namespace ns_0220b0f0 {
extern "C" void PlayerActor_ShovelReadyTrackTarget(Obj *o) {
    V3 v;
    Rec *r = (Rec *)&o->actionWork;
    v.x = r->targetPos.x;
    v.y = r->targetPos.y;
    v.z = r->targetPos.z;
    Unk_020102ec_setSubCollider(o, &v, 0xf33, 0x1000);
    ActorCollider_submit((u8 *)o + 0x1c0);
}
}

namespace ns_0220b0f0 {
extern "C" void PlayerActor_ShovelReadyCheckEnd(Obj *o) {
    Rec *r4 = (Rec *)&o->actionWork;
    if (AnimFrameCtrl_isFinished((AnimFrameCtrl *)&o->bodyModel) != 0 || o->animId == 0x4a) {
        if (o->animId == 0x49) {
            Unk_020102ec_startAnim(o, 0x4a, 3, 0);
        }
        if (o->speed == 0) {
            if (r4->targetAngle == o->rotY) {
                V3C a;
                a.x = r4->targetPos.x;
                a.y = r4->targetPos.y;
                a.z = r4->targetPos.z;
                if (Unk_ov003_0220b330_IsZero(PlayerActor_ShovelDispatch(o, a, 1))) {
                    s32 x = 0;
                    s32 y = 0;
                    Pair w;
                    FieldPos_ToUnit(&x, &y, &a);
                    w.a = x;
                    w.b = y;
                    PlayerActor_RequestShovelWait(o, w, 6, -1);
                }
            }
        }
    }
}
}

namespace ns_0220b0f0 {
extern "C" void PlayerActor_ShovelReadyCheckEndRemote(Obj *o) {
    o->actionPriority = Unk_02007694_getActionDonePriority(o, o->action);
    if (AnimFrameCtrl_isFinished((AnimFrameCtrl *)&o->bodyModel)) {
        Unk_020102ec_startAnim(o, 0x4a, 3, 0);
    }
}
}

namespace ns_0220b0f0 {
extern "C" void PlayerActor_MainShovelReady(Obj *o) {
    s32 r4 = o->speed;
    s32 t = PlayerActor_DecreaseClamped(r4, 0, 0x171);
    Unk_020102ec_setSpeed(o, &t);
    if (CommManager_isLocalSlot(gCommManager, o->sessionSlot)) {
        PlayerActor_ShovelReadyTurn(o);
        Unk_020102ec_advanceAnim(o);
        Unk_020102ec_moveWithCollision(o);
        Unk_020102ec_updateBodyCollider(o);
        PlayerActor_ShovelReadyCheckEnd(o);
        PlayerActor_ShovelReadyTrackTarget(o);
    } else {
        Unk_020102ec_advanceAnim(o);
        if (Unk_02006d14_netFollowTransform(o)) {
            Unk_020102ec_moveWithCollision(o);
        }
        Unk_020102ec_updateBodyCollider(o);
        PlayerActor_ShovelReadyCheckEndRemote(o);
    }
    if (r4 != 0 && o->speed == 0) {
        Effect_Create(0x2a, (V3 *)&o->position, &o->rotY, 0);
    }
}
}

namespace ns_0220b0f0 {
extern "C" void PlayerActor_ShovelWaitSetArgs(u8 *d, Pair v) {
    d[0] = v.a;
    d[1] = v.b;
}
}

namespace ns_0220b0f0 {
extern "C" s32 PlayerActor_RequestShovelWait(Obj *o, Pair p, s32 id, s16 e) {
    Msg m;
    _ZN19PlayerActionRequest6assignEiis(&m, 0x5a, id, e);
    PlayerActor_ShovelWaitSetArgs(m.unk_0c_b, p);
    s32 r = PlayerActor_pushRequest(o, &m);
    return r;
}
}

namespace ns_0220b0f0 {
extern "C" void PlayerActor_ShovelWaitSetWork(u8 *p, Pair *v) {
    p[0] = v->a;
    p[1] = v->b;
}
}

namespace ns_0220b0f0 {
extern "C" void PlayerActor_ShovelWaitSetNetData(u8 *p, Pair *v) {
    p[0] = v->a;
    p[1] = v->b;
}
}

namespace ns_0220b0f0 {
extern "C" void PlayerActor_ShovelWaitGetNetData(u8 *p, Pair *out) {
    out->a = p[0];
    out->b = p[1];
}
}

namespace ns_0220b0f0 {
extern "C" void PlayerActor_SetupShovelWait(Obj *o, Msg *r) {
    Pair w;
    Pair w2;
    Unk_ov003_0220b0f0_B3 *q = (Unk_ov003_0220b0f0_B3 *)r->unk_0c_b;
    u32 b = q->b;
    u8 *p = (u8 *)&o->actionWork;
    u32 a = q->a;
    w.a = a;
    w.b = b;
    PlayerActor_ShovelWaitSetWork(p, &w);
    if (o->fieldQuery == -1) {
        p[2] = 0;
    } else {
        p[2] = 1;
    }
    w2.a = a;
    w2.b = b;
    PlayerActor_ShovelWaitSetNetData(o->netData.bytes, &w2);
    if (o->animId == 0x4a) {
        Unk_020102ec_startAnim(o, 0x4a, 3, 0);
    }
}
}

namespace ns_0220b0f0 {
extern "C" s32 PlayerActor_NetShovelWait(Obj *o, s16 a) {
    Pair v;
    v.a = 0;
    v.b = 0;
    PlayerActor_ShovelWaitGetNetData(o->netData.bytes, &v);
    return PlayerActor_RequestShovelWait(o, v, 6, a);
}
}

namespace ns_0220b0f0 {
extern "C" void PlayerActor_ShovelWaitTrackTarget(Obj *o) {
    V3 v;
    u8 *p = (u8 *)&o->actionWork;
    FieldPos_FromUnitCenter(&v, p[0], p[1]);
    Unk_020102ec_setSubCollider(o, &v, 0xf33, 0x1000);
    ActorCollider_submit((u8 *)o + 0x1c0);
}
}

namespace ns_0220a680 {
extern "C" s32 PlayerActor_ShovelDispatch(Obj *o, V3 *v, u8 f) {
    Pair xy;
    V3 pos;
    s32 r6;
    u32 r7;
    Rec *r5;
    if (o->speed != 0) return -1;
    r7 = 0;
    r5 = (Rec *)&o->actionWork;
    if (f != 0) {
        pos.x = v->x;
        pos.y = v->y;
        pos.z = v->z;
    } else {
        FieldPos_FromUnitCenter(&pos, r5->a, r5->b);
        if (r5->c == 0) {
            r7 = 1;
            f = 1;
        }
    }
    r6 = PlayerActor_ShovelClassifyTarget(o, &pos, &f);
    xy.a = 0;
    xy.b = 0;
    FieldPos_ToUnit(&xy.a, &xy.b, &pos);
    if (r7 != 0) {
        if (o->fieldQuery != -1) r5->c = 1;
    }
    switch (r6) {
    case 0:
        break;
    case 1:
        PlayerActor_RequestAct5B(o, 6, -1);
        break;
    case 2:
        PlayerActor_RequestShovelStrike(o, 0, xy, 6, -1);
        break;
    case 3:
        PlayerActor_RequestDig(o, 0, pos, 6, -1);
        break;
    case 4:
        PlayerActor_RequestDig(o, 1, pos, 6, -1);
        break;
    case 5:
        PlayerActor_RequestDigUpItem(o, pos, 0, 6, -1);
        break;
    case 6: {
        Pair xy2;
        xy2.a = 0;
        xy2.b = 0;
        FieldPos_ToUnit(&xy2.a, &xy2.b, &pos);
        PlayerActor_RequestFillHole(o, 0, xy2, 0xfff1, 6, -1);
        break;
    }
    case 7:
        PlayerActor_RequestAct5C(o, 6, -1);
        break;
    case 8:
        PlayerActor_RequestShovelStrike(o, 1, xy, 6, -1);
        break;
    case 9:
        PlayerActor_RequestDigUpItem(o, pos, 1, 6, -1);
        break;
    }
    return r6;
}
}

namespace ns_0220a680 {
extern "C" void PlayerActor_MainShovelWait(Obj *o) {
    s32 r4 = o->speed;
    s32 t = PlayerActor_Decelerate(r4, 0);
    Unk_020102ec_setSpeed(o, &t);
    Unk_020102ec_advanceAnim(o);
    if (CommManager_isLocalSlot(gCommManager, o->sessionSlot)) {
        V3 v;
        Unk_020102ec_moveWithCollision(o);
        Unk_020102ec_updateBodyCollider(o);
        v.x = 0;
        v.y = 0;
        v.z = 0;
        PlayerActor_ShovelDispatch(o, &v, 0);
    } else {
        if (Unk_02006d14_netFollowTransform(o)) Unk_020102ec_moveWithCollision(o);
        Unk_020102ec_updateBodyCollider(o);
        o->actionPriority = Unk_02007694_getActionDonePriority(o, o->action);
    }
    PlayerActor_ShovelWaitTrackTarget(o);
    if (r4 != 0) {
        if (o->speed == 0) {
            Effect_Create(0x2a, (VecFx32CopyDtor *)&o->position, &o->rotY, 0);
        }
    }
}
}

namespace ns_0220a680 {
extern "C" s32 PlayerActor_RequestAct5B(Obj *o, u32 a, s16 b) {
    Msg m;
    _ZN19PlayerActionRequest6assignEiis(&m, 0x5b, a, b);
    s32 r = PlayerActor_pushRequest(o, &m);
    return r;
}
}

namespace ns_0220a680 {
extern "C" void PlayerActor_SetupAct5B(Obj *o) {
    Unk_020102ec_startAnimOnce(o, 0x4d, 3, 0);
}
}

namespace ns_0220a680 {
extern "C" s32 PlayerActor_NetAct5B(Obj *o, s16 x) {
    return PlayerActor_RequestAct5B(o, 6, x);
}
}

namespace ns_0220a680 {
extern "C" void PlayerActor_Act5BUpdate(Obj *o) {
    if (AnimFrameCtrl_hasPassedFrame((AnimFrameCtrl *)&o->bodyModel, 5)) {
        Unk_02006d14_playSe(o, 0x842);
    }
    Unk_020102ec_advanceAnim(o);
}
}

namespace ns_0220a680 {
extern "C" void PlayerActor_Act5BCheckEnd(Obj *o) {
    if (AnimFrameCtrl_isFinished((AnimFrameCtrl *)&o->bodyModel)) {
        o->actionPriority = Unk_02007694_getActionDonePriority(o, o->action);
        PlayerActor_requestWait(o, 3, 1, -1);
    }
}
}

namespace ns_0220a680 {
extern "C" void PlayerActor_MainAct5B(Obj *o) {
    PlayerActor_Act5BUpdate(o);
    Unk_020102ec_updateBodyCollider(o);
    PlayerActor_Act5BCheckEnd(o);
}
}

namespace ns_0220a680 {
extern "C" s32 PlayerActor_RequestAct5C(Obj *o, u32 a, s16 b) {
    Msg m;
    _ZN19PlayerActionRequest6assignEiis(&m, 0x5c, a, b);
    s32 r = PlayerActor_pushRequest(o, &m);
    return r;
}
}

namespace ns_0220a680 {
extern "C" void PlayerActor_SetupAct5C(Obj *o) {
    Unk_020102ec_startAnimOnce(o, 0x5e, 3, 0);
}
}

namespace ns_0220a680 {
extern "C" s32 PlayerActor_NetAct5C(Obj *o, s16 x) {
    return PlayerActor_RequestAct5C(o, 6, x);
}
}

namespace ns_0220a680 {
extern "C" void PlayerActor_Act5CCheckEnd(Obj *o) {
    if (AnimFrameCtrl_isFinished((AnimFrameCtrl *)&o->bodyModel)) {
        o->actionPriority = Unk_02007694_getActionDonePriority(o, o->action);
        PlayerActor_requestWait(o, 3, 1, -1);
    }
}
}

namespace ns_0220a680 {
extern "C" void PlayerActor_MainAct5C(Obj *o) {
    Unk_020102ec_advanceAnim(o);
    Unk_020102ec_moveWithCollision(o);
    Unk_020102ec_updateBodyCollider(o);
    s32 t = PlayerActor_DecreaseClamped(o->speed, 0, 0x171);
    Unk_020102ec_setSpeed(o, &t);
    PlayerActor_Act5CCheckEnd(o);
}
}

namespace ns_0220a680 {
extern "C" void PlayerActor_ShovelStrikeSetArgs(B3 *d, Pair p, u32 c) {
    d->a = p.a;
    d->b = p.b;
    d->c = c;
}
}

namespace ns_0220a680 {
extern "C" s32 PlayerActor_RequestShovelStrike(Obj *o, u32 id, Pair p, s32 b, s32 c) {
    Msg m;
    _ZN19PlayerActionRequest6assignEiis(&m, 0x5d, b, *(s16 *)&c);
    PlayerActor_ShovelStrikeSetArgs((B3 *)m.unk_0c_b, p, id);
    s32 r = PlayerActor_pushRequest(o, &m);
    return r;
}
}

namespace ns_0220a680 {
extern "C" void PlayerActor_ShovelStrikeSetWork(Rec *r, Pair p, u8 c) {
    r->a = p.a;
    r->b = p.b;
    r->c = c;
}
}

namespace ns_0220a680 {
extern "C" void PlayerActor_ShovelStrikeSetNetData(u8 *d, u8 a, u8 b, u8 c, u8 e) {
    d[0] = a;
    d[1] = b;
    d[2] = c;
    d[3] = e;
}
}

namespace ns_0220a680 {
extern "C" void PlayerActor_ShovelStrikeGetNetData(u8 *s, u8 *a, u8 *b, u8 *c, u8 *d) {
    *a = s[0];
    *b = s[1];
    *c = s[2];
    *d = s[3];
}
}

namespace ns_0220a680 {
extern "C" void PlayerActor_SetupShovelStrike(Obj *o, Msg *m) {
    B3 *q = (B3 *)m->unk_0c_b;
    u8 c = q->c;
    s32 a = q->a;
    s32 b = q->b;
    Pair p;
    p.a = a;
    p.b = b;
    PlayerActor_ShovelStrikeSetWork((Rec *)&o->actionWork, p, c);
    PlayerActor_ShovelStrikeSetNetData(o->netData.bytes, c, a, b, o->toolHitKind);
    Unk_020102ec_startAnimOnce(o, 0x4c, 3, 0);
    if (c != 0) {
        Unk_02006d14_setActionFlag(o, 0x1c);
    }
}
}

namespace ns_0220a680 {
extern "C" void PlayerActor_NetShovelStrike(Obj *o, s32 x) {
    u8 b[4];
    PlayerActor_ShovelStrikeGetNetData(o->netData.bytes, &b[0], &b[1], &b[2], &b[3]);
    o->toolHitKind = b[3];
    if (b[0] == 0) {
        Pair p;
        p.a = b[1];
        p.b = b[2];
        PlayerActor_RequestShovelStrike(o, 0, p, 6, x);
    }
}
}

namespace ns_0220a680 {
extern "C" void PlayerActor_EndShovelStrike(Obj *o) {
    if (CommManager_isLocalSlot(gCommManager, o->sessionSlot) == 0) {
        if (Unk_02006d14_testActionFlag(o, 0x1c)) {
            Rec *r = (Rec *)&o->actionWork;
            if (r->c != 0) {
                Pair p;
                u32 b = r->b;
                u32 a = r->a;
                p.a = a;
                p.b = b;
                FieldItemFx_StartStrikeResult(&p);
                Unk_02006d14_clearActionFlag(o, 0x12);
                Unk_02006d14_clearActionFlag(o, 0x1c);
            }
        }
    }
}
}

namespace ns_0220a680 {
extern "C" void PlayerActor_ShovelStrikeUpdate(Obj *o) {
    s16 h[2];
    s32 xy[2];
    V3 pos;
    u16 *p;
    s32 k;
    Unk_020102ec_advanceAnim(o);
    if (AnimFrameCtrl_hasPassedFrame((AnimFrameCtrl *)&o->bodyModel, 5)) {
        Rec *rc = (Rec *)&o->actionWork;
        if (rc->c != 0) {
            Pair pa;
            u32 b = rc->b;
            u32 a = rc->a;
            pa.a = a;
            pa.b = b;
            FieldItemFx_StartStrikeResult(&pa);
            Unk_02006d14_clearActionFlag(o, 0x12);
            Unk_02006d14_clearActionFlag(o, 0x1c);
        }
        s32 t = -0x333;
        Unk_020102ec_setSpeed(o, &t);
        PlayerActor_GetFrontUnitCenter(&pos, o);
        xy[0] = 0;
        xy[1] = 0;
        FieldPos_ToUnit(&xy[0], &xy[1], &pos);
        s32 x, y, hx, hy;
        x = *(volatile s32 *)&xy[0];
        y = *(volatile s32 *)&xy[1];
        hx = x >> 4;
        hy = y >> 4;
        p = BlockMap_GetItemPtr(gSceneBlockMap, hx, hy, x - (hx << 4), y - (hy << 4), 0);
        if (p != NULL) {
            if (Unk_ov003_0220a7fc_Chk(p)) {
                Tree_RequestShake(o->sessionSlot, Pair(xy[0], xy[1]), 1);
            }
        }
        Unk_02006d14_setActionFlag(o, 9);
        k = 0xf;
        if (p != NULL) k = (s32)(*p & 0xf000) >> 12;
        switch (o->toolHitKind) {
        case 0:
            if (p != NULL) {
                if (k <= 4) {
                    BOOL r3 = TRUE;
                    BOOL r2 = FALSE;
                    u32 v = *p;
                    if (v >= 0xe3 && v <= 0xe7) r2 = r3;
                    if (!r2) {
                        if (!(v >= 0xe8 && v <= 0xfb)) r3 = FALSE;
                    }
                    if (!r3) {
                        if (v >= 0x26 && v <= 0x2a) goto l_a9dc;
                        if (v >= 0x5d && v <= 0x61) goto l_a9dc;
                        if (v >= 0x2f && v <= 0x56) goto l_a9dc;
                        if (v >= 0x57 && v <= 0x5b) goto l_a9dc;
                        if (v >= 0x66 && v <= 0x68) goto l_a9dc;
                        if (v == 0x69) goto l_a9dc;
                        if (v >= 0x6a && v <= 0x6c) goto l_a9dc;
                        if (v == 0x6d) goto l_a9dc;
                        if (!(v >= 0xc8 && v <= 0xcf)) goto l_a9e6;
                    }
                }
            l_a9dc:
                if (k == 0xa) goto l_a9e6;
                if ((u32)(k - 0xd) > 1) goto l_a9f0;
            l_a9e6:
                Unk_02006d14_playSe(o, 0x7df);
                break;
            }
        l_a9f0:
            Unk_02006d14_playSe(o, 0x844);
            {
                V3 *pv = (V3 *)&o->position;
                pos.x = pv->x;
                pos.y = pv->y;
                pos.z = pv->z;
                *(s16 *)&h[0] = o->rotY;
                s32 r5, r6, r7, dz, dx;
                s32 idx = ((u16)h[0] >> 4) * 2;
                s32 sn = data_02135f44[idx];
                s32 cs = data_02135f44[idx + 1];
                r5 = func_01ffcb0c(cs, 0xccd);
                r5 -= func_01ffcb0c(sn, 0x800);
                r6 = func_01ffcb0c(sn, 0xccd);
                dx = r6 + func_01ffcb0c(cs, 0x800);
                pos.x = pos.x + dx;
                pos.z += r5;
                h[0] = (s16)(h[0] - 0x2000);
                Effect_Create(5, &pos, &h[0], 0);
            }
            break;
        case 1:
            Unk_02006d14_playSe(o, 0x7df);
            break;
        case 2:
            Unk_02006d14_playSe(o, 0x7df);
            if (o->toolHitActor != NULL) {
                PlayerActor_GetHeldItem((u16 *)&h[1], o);
                ((NpcActor *)o->toolHitActor)->onToolHit((u16 *)&h[1]);
            }
            break;
        case 3:
            if (CommManager_isLocalSlot(gCommManager, o->sessionSlot)) {
                if (Snowball_Break((void *)o->toolHitActor, 1) == 0) {
                    Unk_02006d14_playSe(o, 0x7df);
                }
            } else {
                Unk_02006d14_playSe(o, 0x7df);
            }
            break;
        }
        o->toolHitActor = 0;
        o->toolHitKind = 0;
    }
}
}

namespace ns_0220a680 {
extern "C" void PlayerActor_ShovelStrikeCheckEnd(Obj *o) {
    if (AnimFrameCtrl_isFinished((AnimFrameCtrl *)&o->bodyModel)) {
        o->actionPriority = Unk_02007694_getActionDonePriority(o, o->action);
        PlayerActor_requestWait(o, 3, 1, -1);
    }
}
}

namespace ns_0220a680 {
extern "C" void PlayerActor_MainShovelStrike(Obj *o) {
    PlayerActor_ShovelStrikeUpdate(o);
    Unk_020102ec_moveWithCollision(o);
    Unk_020102ec_updateBodyCollider(o);
    s32 v = o->speed;
    if (v < 0) v = -v;
    s32 t = PlayerActor_Decelerate(v, 0) * -1;
    Unk_020102ec_setSpeed(o, &t);
    PlayerActor_ShovelStrikeCheckEnd(o);
}
}

namespace ns_0220a680 {
extern "C" void PlayerActor_DigSetArgs(P3 *p, u32 id, V3 v) {
    p->id = id;
    p->pos.x = v.x;
    p->pos.y = v.y;
    p->pos.z = v.z;
}
}

namespace ns_0220a680 {
extern "C" s32 PlayerActor_RequestDig(Obj *o, u32 id, V3 v, s32 b, s16 c) {
    Msg m;
    _ZN19PlayerActionRequest6assignEiis(&m, 0x5e, b, c);
    PlayerActor_DigSetArgs((P3 *)m.unk_0c_b, id, v);
    s32 r = PlayerActor_pushRequest(o, &m);
    return r;
}
}

namespace ns_0220a680 {
extern "C" void PlayerActor_DigSetWork(Rec *r, u32 id, V3 v) {
    r->a = id;
    r->pos.x = v.x;
    r->pos.y = v.y;
    r->pos.z = v.z;
}
}

namespace ns_0220a680 {
extern "C" s32 PlayerActor_SetupDig(Obj *o, Msg *m) {
    P3 *p = (P3 *)m->unk_0c_b;
    u32 id = p->id;
    V3 t = p->pos;
    Rec *r = (Rec *)&o->actionWork;
    PlayerActor_DigSetWork(r, id, t);
    if ((u32)(o->animId - 0x49) <= 1) {
        if (r->a != 0) {
            Unk_020102ec_startAnimOnce(o, 0x4e, 3, 0);
        } else {
            Unk_020102ec_startAnimOnce(o, 0x4b, 3, 0);
        }
    } else {
        Unk_020102ec_startAnimOnce(o, 0x49, 3, 0);
    }
    Unk_02006d14_setActionFlag(o, 0x1c);
}
}

namespace ns_0220a680 {
extern "C" void PlayerActor_NetDig(Obj *o) {
}
}

namespace ns_02209d50 {
extern "C" void PlayerActor_EndDig(Obj *o) {
    if (!CommManager_isLocalSlot(gCommManager, o->sessionSlot)) {
        if (Unk_02006d14_testActionFlag(o, 0x1c)) {
            Rec2 *r = (Rec2 *)&o->actionWork;
            V3D p;
            p.x = r->digPos.x;
            p.y = r->digPos.y;
            p.z = r->digPos.z;
            if (o->animId == 0x4b) {
                FieldItemFx_StartDigHole(o->sessionSlot, p, 0);
            } else {
                FieldItemFx_StartDigUpTree(o->sessionSlot, p, o->rotY);
                FieldItemFx_StartDigHole(o->sessionSlot, p, 0);
            }
            Unk_02006d14_clearActionFlag(o, 0x1c);
        }
    }
}
}

namespace ns_02209d50 {
extern "C" void PlayerActor_DigUpdate(Obj *o) {
    s16 h;
    V3D p;
    s32 a, b;
    if (o->animId != 0x49) {
        Rec2 *r = (Rec2 *)&o->actionWork;
        p.x = r->digPos.x;
        p.y = r->digPos.y;
        p.z = r->digPos.z;
        h = o->rotY;
        if (o->animId == 0x4b) {
            switch (((Bits *)&o->bodyModel.curFrame)->mid) {
            case 2:
                Effect_Create(6, &p, 0, 0);
                break;
            case 5:
                Unk_02006d14_playSe(o, 0x841);
                Unk_02006d14_setActionFlag(o, 9);
                break;
            case 7: {
                Effect_Create(7, &p, &h, 0);
                FieldItemFx_StartDigHole(o->sessionSlot, p, 0);
                Unk_02006d14_clearActionFlag(o, 0x1c);
                FieldPos_ToUnit(&a, &b, &p);
                Collision_AddDigHole(a, b);
                break;
            }
            }
        } else {
            switch ((s32)((Bits *)&o->bodyModel.curFrame)->mid) {
            case 5:
                Unk_02006d14_playSe(o, 0x85b);
                Unk_02006d14_setActionFlag(o, 9);
                break;
            case 12:
                Effect_Create(6, &p, 0, 0);
                break;
            case 18:
                Effect_Create(8, &p, &h, 0);
                break;
            case 21: {
                FieldItemFx_StartDigUpTree(o->sessionSlot, p, o->rotY);
                FieldItemFx_StartDigHole(o->sessionSlot, p, 0);
                Unk_02006d14_playSe(o, 0x85c);
                Unk_02006d14_clearActionFlag(o, 0x1c);
                break;
            }
            }
        }
    }
    Unk_020102ec_advanceAnim(o);
}
}

namespace ns_02209d50 {
extern "C" void PlayerActor_DigCheckEnd(Obj *o) {
    if (AnimFrameCtrl_isFinished((AnimFrameCtrl *)&o->bodyModel)) {
        if (o->animId == 0x49) {
            if (*(u8 *)&o->actionWork != 0) {
                Unk_020102ec_startAnimOnce(o, 0x4e, 3, 0);
            } else {
                Unk_020102ec_startAnimOnce(o, 0x4b, 3, 0);
            }
        } else {
            o->actionPriority = Unk_02007694_getActionDonePriority(o, o->action);
            PlayerActor_requestWait(o, 3, 1, -1);
        }
    }
}
}

namespace ns_02209d50 {
extern "C" void PlayerActor_MainDig(Obj *o) {
    V3 v;
    PlayerActor_DigUpdate(o);
    if (CommManager_isLocalSlot(gCommManager, o->sessionSlot)) {
        Unk_020102ec_moveWithCollision(o);
    } else {
        Rec2 *r = (Rec2 *)&o->actionWork;
        v = r->digPos;
        Unk_02006d14_netSyncNearPoint(o, &v);
    }
    Unk_020102ec_updateBodyCollider(o);
    PlayerActor_DigCheckEnd(o);
}
}

namespace ns_02209d50 {
extern "C" void PlayerActor_DigUpItemSetArgs(Pay *d, V3 v, u16 a, u8 b) {
    d->v.x = v.x;
    d->v.y = v.y;
    d->v.z = v.z;
    d->a = a;
    d->b = b;
}
}

namespace ns_02209d50 {
extern "C" s32 PlayerActor_RequestDigUpItem(Obj *o, V3 v, u8 x, s32 c, s32 e) {
    Msg m;
    _ZN19PlayerActionRequest6assignEiis(&m, 0x5f, c, *(s16 *)&e);
    PlayerActor_DigUpItemSetArgs((PlayerDigUpItemArgs *)m.unk_0c_b, v, 0xfff1, x);
    s32 r = PlayerActor_pushRequest(o, &m);
    return r;
}
}

namespace ns_02209d50 {
extern "C" s32 PlayerActor_RequestDigUpItemWith(Obj *o, V3 v, u16 a, u8 b, s32 c, s32 d) {
    Msg m;
    _ZN19PlayerActionRequest6assignEiis(&m, 0x5f, c, *(s16 *)&d);
    PlayerActor_DigUpItemSetArgs((PlayerDigUpItemArgs *)m.unk_0c_b, v, a, b);
    if (!CommManager_isLocalSlot(gCommManager, o->sessionSlot)) {
        o->actionItem = o->shownItem = 0xfff1;
    }
    s32 r = PlayerActor_pushRequest(o, &m);
    return r;
}
}

namespace ns_02209d50 {
extern "C" void PlayerActor_DigUpItemSetNetData(u8 *p, V2 v, u16 a, u8 b) {
    p[2] = v.x;
    p[3] = v.y;
    NetBuf_WriteU16(p, a);
    p[4] = b;
}
}

namespace ns_02209d50 {
extern "C" void PlayerActor_DigUpItemGetNetData(u8 *p, s32 *xy, u16 *a, u8 *b) {
    xy[0] = p[2];
    xy[1] = p[3];
    *a = NetBuf_ReadU16(p);
    *b = p[4];
}
}

namespace ns_02209d50 {
extern "C" void PlayerActor_SetupDigUpItem(Obj *o, Msg *m) {
    Pay *pl = (PlayerDigUpItemArgs *)m->unk_0c_b;
    V3 v = pl->v;
    u16 loc = pl->a;
    u8 b = pl->b;
    Unk_ov003_02209fc8_ItE dx;

    Rec *r = (Rec *)&o->actionWork;
    r->talkStep = 0;
    r->digPos = v;
    r->holeKind = b;
    s32 st = o->animId;
    if (st == 0x49 || st == 0x4a || !Unk_ov003_02209fc8_IsNone(&loc)) {
        Unk_020102ec_startAnimOnce(o, 0x4f, 3, 0);
    } else {
        Unk_020102ec_startAnimOnce(o, 0x49, 3, 0);
    }
    s32 z2 = o->heldItemJointMtx.m[11];
    s32 y2 = o->heldItemJointMtx.m[10];
    s32 x2 = o->heldItemJointMtx.m[9];
    o->shownItemPosX = x2;
    o->shownItemPosY = y2;
    o->shownItemPosZ = z2;
    WorldCurve_FromCurved((V3 *)&o->shownItemPosX, (V3 *)&o->shownItemPosX);
    o->shownItemScaleX = 0x1000;
    o->shownItemScaleY = 0x1000;
    o->shownItemScaleZ = 0x1000;
    Unk_02006d14_clearActionFlag(o, 0xd);
    s32 xy[2];
    xy[0] = 0;
    xy[1] = 0;
    FieldPos_ToUnit(&xy[0], &xy[1], &v);
    u16 t = o->actionItem;
    V2 pr;
    pr.x = xy[0];
    pr.y = xy[1];
    PlayerActor_DigUpItemSetNetData(o->netData.bytes, pr, t, b);
    s32 px = *(volatile s32 *)&xy[0];
    s32 py = *(volatile s32 *)&xy[1];
    s32 hx = px >> 4;
    s32 hy = py >> 4;
    u16 *cell = BlockMap_GetItemPtr(gSceneBlockMap, hx, hy, px - (hx << 4), py - (hy << 4), 0);
    if (!Unk_ov003_02209fc8_IsNone(&loc)) {
        o->actionItem = o->shownItem = loc;
        if (Unk_ov003_02209fc8_Rng(cell, 0xfc, 0xfd)) {
            *(u32 *)(Bits *)&o->bodyModel.curFrame = (u32)((((Bits *)&o->bodyModel.numFrames)->mid - 1) << 16) >> 4;
            Unk_02006d14_setActionFlag(o, 0xd);
        }
    } else {
        if (Unk_ov003_02209fc8_Eq(&o->actionItem) || !CommManager_isLocalSlot(gCommManager, o->sessionSlot)) {
            if (cell == 0) {
                o->actionItem = o->shownItem = 0xfff1;
            } else {
                o->actionItem = o->shownItem = *cell;
            }
        }
    }
    if (CommManager_isLocalSlot(gCommManager, o->sessionSlot)) {
        Bgm_RequestSilence(0x12, 0xf, 0);
        if (Unk_ov003_02209fc8_Rng(&o->actionItem, 0x1549, 0x1549)) VillagerTrend_OnItemDug((V3 *)&o->position);
    }
    o->msgStep = 7;
    Unk_02006d14_setActionFlag(o, 0x1c);
}
}

namespace ns_02209d50 {
extern "C" void PlayerActor_NetDigUpItem(Obj *o, s32 a) {
    s32 xy[2];
    V3 v;
    u16 h;
    u8 b;
    if (o->action == 0) {
        xy[0] = 0;
        xy[1] = 0;
        PlayerActor_DigUpItemGetNetData(o->netData.bytes, xy, &h, &b);
        FieldPos_FromUnitCenter(&v, xy[0], xy[1]);
        V3 w = v;
        PlayerActor_RequestDigUpItemWith(o, w, h, b, 6, a);
    }
}
}

namespace ns_02209d50 {
extern "C" void PlayerActor_EndDigUpItem(Obj *o, s32 p) {
    if (!CommManager_isLocalSlot(gCommManager, o->sessionSlot)) {
        if (Unk_02006d14_testActionFlag(o, 0x1c)) {
            Rec *r = (Rec *)&o->actionWork;
            V3 v;
            v = r->digPos;
            Unk_ov003_02209ef4_P::FieldItemFx_StartDigHole(o->sessionSlot, &v, r->holeKind);
            Unk_02006d14_clearActionFlag(o, 0x1c);
            Unk_02006d14_clearActionFlag(o, 9);
        }
        if (p != 0x60 && p != 0x61) Unk_02006d14_clearActionFlag(o, 0xd);
    }
}
}

namespace ns_02209d50 {
extern "C" void PlayerActor_DigUpItemUpdate(Obj *o) {
    s32 a, b;
    V3 p;
    volatile VecFx32 sv;
    Blk b0;
    Blk b1;
    Unk_020102ec_advanceAnim(o);
    if (o->animId != 0x49) {
        Rec *r = (Rec *)&o->actionWork;
        p = r->digPos;
        switch (((Bits *)&o->bodyModel.curFrame)->mid) {
        case 5:
            Effect_Create(6, &p, 0, 0);
            break;
        case 6:
            Unk_02006d14_playSe(o, 0x841);
            Unk_02006d14_setActionFlag(o, 9);
            break;
        case 12: {
            Effect_Create(8, &p, 0, 0);
            FieldPos_ToUnit(&a, &b, &p);
            Collision_AddDigHole(a, b);
            FieldItemFx_StartDigHole(o->sessionSlot, p, r->holeKind);
            Unk_02006d14_setActionFlag(o, 0xd);
            Unk_02006d14_clearActionFlag(o, 0x1c);
            break;
        }
        }
        if (((Bits *)&o->bodyModel.curFrame)->mid >= 0x18) {
            Unk_02006d14_clearActionFlag(o, 9);
            V3 *pv = (V3 *)&o->drawPos;
            sv.x = pv->x;
            sv.y = pv->y;
            sv.z = pv->z;
            s16 h = o->drawTilt;
            b0 = o->bodyModel.mtx;
            b1 = o->itemHandMtx;
            Unk_02006d14_calcHandMtx(o);
            Unk_02006d14_updateShownItemPos(o, 0x1000);
            o->drawPos.x = sv.x;
            o->drawPos.y = sv.y;
            o->drawPos.z = sv.z;
            o->drawTilt = h;
            o->bodyModel.mtx = b0;
            o->itemHandMtx = b1;
        } else {
            s32 z2 = o->heldItemJointMtx.m[11];
            s32 y2 = o->heldItemJointMtx.m[10];
            s32 x2 = o->heldItemJointMtx.m[9];
            o->shownItemPosX = x2;
            o->shownItemPosY = y2;
            o->shownItemPosZ = z2;
            WorldCurve_FromCurved((V3 *)&o->shownItemPosX, (V3 *)&o->shownItemPosX);
        }
    }
}
}

namespace ns_022093bc {
extern "C" void PlayerActor_DigUpItemMessage(Obj *o) {
    void *l;
    struct {
        u32 pad;
        s32 a0, b0, a1, b1, a2, b2;
        Pair p0, p1, p2;
    } ab;
    u8 buf[0x24];
    V3 v0, v1, v2;
    if (o->animId == 0x49) {
        if (AnimFrameCtrl_isFinished((AnimFrameCtrl *)&o->bodyModel) != 0) Unk_020102ec_startAnimOnce(o, 0x4f, 3, 0);
        return;
    }
    DigUpItemMsgWork *r5 = (DigUpItemMsgWork *)&o->actionWork;
    u8 *r6 = &r5->talkStep;
    s32 lvl = (u32)(o->bodyModel.curFrame << 4) >> 16;
    l = gCommManager;
    if (CommManager_isLocalSlot(l, o->sessionSlot) != 0) {
        if (AnimFrameCtrl_hasPassedFrame((AnimFrameCtrl *)&o->bodyModel, 0x13) != 0) Camera_SetMode4();
    }
    if (lvl < 0x19) return;
    if (Unk_02006d14_turnToCamera(o, 0x400) == 0) return;
    if (AnimFrameCtrl_isFinished((AnimFrameCtrl *)&o->bodyModel) == 0) return;
    if (CommManager_isLocalSlot(l, o->sessionSlot) == 0) {
        Unk_02006d14_clearActionFlag(o, 0x12);
        o->actionPriority = Unk_02007694_getActionDonePriority(o, o->action);
        return;
    }
    switch (*r6) {
    case 0: {
        if (TalkRequest_AddPlayerMessage() == 0) break;
        *r6 = 1;
        Character_attachTalkRequest(o, o);
        Unk_02006d14_setActionFlag(o, 0x11);
        void *q = PlayerData_GetCurrent();
        MsgRequest &s = *o;
        MsgRequest_setFileName(&s, (void *)"obj_etc_player");
        if (Unk_ov003_022099d0_R(&o->actionItem, 0x136a, 0x136a)) {
            if (PlayerData_testFlag(q, 0x27) == 0) {
                o->msgIndex = 0x21;
                PlayerData_setFlag(q, 0x27);
                goto l54;
            }
        }
        if (Unk_ov003_022099d0_R(&o->actionItem, 0x137b, 0x137b)) {
            if (PlayerData_testFlag(q, 0x28) == 0) {
                o->msgIndex = 0x23;
                PlayerData_setFlag(q, 0x28);
                goto l54;
            }
        }
        o->msgIndex = 1;
        func_02062650(buf, &o->actionItem);
        TalkWindowState_setNamedSlot(o->window, 0, buf, 7);
        func_0206260c(buf);
    l54:
        o->window->nextState = 1;
        Bgm_ReleasePriority(0x12);
        Bgm_RequestSilence(0xc, 0, 1);
        Bgm_Request(0xd, 0x39, 0x7f, 1);
        o->msgStep = 0xa;
        break;
    }
    case 1:
        if (o->window != 0) {
            if (o->window->state != 0) *r6 = 2;
        }
        break;
    case 2:
        if (Pocket_FindEmpty() == -1) {
            *r6 = 3;
            o->msgStep = 2;
            break;
        }
        if (o->window == 0) break;
        if (o->window->state != 0) break;
        Character_detachTalkRequest(o, o);
        Unk_02006d14_clearActionFlag(o, 0x11);
        TalkRequest_FinishPlayerMessage();
        ab.a0 = 0;
        ab.b0 = 0;
        v0.x = r5->digPos.x;
        v0.y = r5->digPos.y;
        v0.z = r5->digPos.z;
        FieldPos_ToUnit(&ab.a0, &ab.b0, &v0);
        ab.p0.x = ab.a0;
        ab.p0.y = ab.b0;
        PlayerActor_RequestDugItemStore(o, &ab.p0, 0, 6, -1);
        Camera_SetModeDefault();
        break;
    case 3:
        if (o->msgStep >= 0xf) {
            *r6 = 4;
            break;
        }
        if (o->window == 0) break;
        if (o->window->state != 0) break;
        Character_detachTalkRequest(o, o);
        Unk_02006d14_clearActionFlag(o, 0x11);
        ab.a1 = 0;
        ab.b1 = 0;
        v1.x = r5->digPos.x;
        v1.y = r5->digPos.y;
        v1.z = r5->digPos.z;
        FieldPos_ToUnit(&ab.a1, &ab.b1, &v1);
        ab.p1.x = ab.a1;
        ab.p1.y = ab.b1;
        PlayerActor_RequestDugItemStore(o, &ab.p1, 1, 6, -1);
        Camera_SetModeDefault();
        break;
    case 4:
        if (o->window == 0) break;
        if (o->window->state != 0) break;
        if (MenuCtrl_IsFinished() == 0) break;
        Character_detachTalkRequest(o, o);
        Unk_02006d14_clearActionFlag(o, 0x11);
        TalkRequest_FinishPlayerMessage();
        *r6 = 5;
        break;
    case 5:
        if (o->fieldQuery != -1) break;
        ab.a2 = 0;
        ab.b2 = 0;
        v2.x = r5->digPos.x;
        v2.y = r5->digPos.y;
        v2.z = r5->digPos.z;
        FieldPos_ToUnit(&ab.a2, &ab.b2, &v2);
        u32 hh = o->actionItem;
        ab.p2.x = ab.a2;
        ab.p2.y = ab.b2;
        PlayerActor_RequestBuryItem(o, 2, &ab.p2, hh, 6, -1);
        Camera_SetModeDefault();
        break;
    }
}
}

namespace ns_022093bc {
extern "C" void PlayerActor_MainDigUpItem(Obj *o) {
    PlayerActor_DigUpItemUpdate(o);
    if (CommManager_isLocalSlot(gCommManager, o->sessionSlot) != 0) {
        if ((u32)(o->bodyModel.curFrame << 4) >> 16 >= 0x19) Unk_020102ec_moveWithCollision(o);
    } else {
        V3 v;
        V3 *pv = &((DigUpItemMsgWork *)&o->actionWork)->digPos;
        v.x = pv->x;
        v.y = pv->y;
        v.z = pv->z;
        Unk_02006d14_netSyncNearPoint(o, &v);
    }
    Unk_020102ec_updateBodyCollider(o);
    PlayerActor_DigUpItemMessage(o);
}
}

namespace ns_022093bc {
extern "C" s32 PlayerActor_RequestDugItemStore(Obj *o, Pair *p, u32 c, u32 d, s32 e) {
    Msg m;
    u8 *pl = (u8 *)m.unk_0c_b;
    _ZN19PlayerActionRequest6assignEiis(&m, 0x60, d, *(s16 *)&e);
    pl[0] = p->x;
    pl[1] = p->y;
    pl[2] = c;
    s32 r = PlayerActor_pushRequest(o, &m);
    return r;
}
}

namespace ns_022093bc {
extern "C" void PlayerActor_DugItemStoreSetNetData(Sub *s, u8 a, u8 b, u8 c) {
    s->unk_00 = a;
    s->unk_01 = b;
    s->unk_02 = c;
}
}

namespace ns_022093bc {
extern "C" void PlayerActor_DugItemStoreGetNetData(Sub *s, u8 *a, u8 *b, u8 *c) {
    *a = s->unk_00;
    *b = s->unk_01;
    *c = s->unk_02;
}
}

namespace ns_022093bc {
extern "C" void PlayerActor_SetupDugItemStore(Obj *o, Msg *m) {
    u8 *q = m->unk_0c_b;
    DugItemStoreWork *r = (DugItemStoreWork *)&o->actionWork;
    u8 t2 = q[2];
    u8 t0 = m->unk_0c_b[0];
    u8 t1 = q[1];
    r->step = t2;
    r->digUnitX = t0;
    r->digUnitZ = t1;
    PlayerActor_DugItemStoreSetNetData((Sub *)&o->netData, t0, t1, t2);
    Unk_020102ec_startAnimOnce(o, 0x50, 3, 0);
    Unk_02006d14_playSe(o, 0x4f);
}
}

namespace ns_022093bc {
extern "C" void PlayerActor_NetDugItemStore(Obj *o, s32 a) {
    u8 b[3];
    PlayerActor_DugItemStoreGetNetData((Sub *)&o->netData, &b[0], &b[1], &b[2]);
    Pair p;
    p.x = b[0];
    p.y = b[1];
    PlayerActor_RequestDugItemStore(o, &p, b[2], 6, a);
}
}

namespace ns_022093bc {
extern "C" void PlayerActor_DugItemStoreShrink(Obj *o) {
    s32 r4;
    Unk_020102ec_advanceAnim(o);
    if (o->animId == 0x50) {
        s32 t = (s32)(((u32)(o->bodyModel.curFrame >> 12) << 16) >> 4);
        r4 = 0x1000 - t / 6;
        if (r4 < 0) {
            r4 = 0;
            Unk_02006d14_clearActionFlag(o, 0xd);
        }
    } else {
        r4 = 0;
    }
    o->shownItemScaleX = r4;
    o->shownItemScaleY = r4;
    o->shownItemScaleZ = r4;
    Unk_02006d14_updateShownItemPos(o, r4);
}
}

namespace ns_022093bc {
extern "C" void PlayerActor_DugItemStoreUpdate(Obj *o) {
    DugItemStoreWork *g = (DugItemStoreWork *)&o->actionWork;
    u8 *st = &g->step;
    switch (g->step) {
    case 0:
        if (AnimFrameCtrl_isFinished((AnimFrameCtrl *)&o->bodyModel) == 0) break;
        o->actionPriority = Unk_02007694_getActionDonePriority(o, o->action);
        PlayerActor_requestWait(o, 3, 1, -1);
        if (CommManager_isLocalSlot(gCommManager, o->sessionSlot) == 0) break;
        Pocket_AddFoundItem(&o->actionItem);
        break;
    case 1:
        if (o->animId == 0x50) {
            if (AnimFrameCtrl_isFinished((AnimFrameCtrl *)&o->bodyModel) == 0) break;
            Unk_020102ec_startAnim(o, 0x6c, 3, 3);
        }
        if (CommManager_isLocalSlot(gCommManager, o->sessionSlot) != 0) {
            s32 s = o->msgStep;
            if (s == 5) {
                if (MenuCtrl_OpenPocketsFullDug(o->actionItem) != 0) o->msgStep = 6;
            } else if (s == 6) {
                if (MenuCtrl_IsFinished() == 0) break;
                o->msgStep = 0xf;
                if (MenuCtrl_IsResultOk() == 0) goto l76c;
                Unk_02006d14_clearActionFlag(o, 0xd);
                if (Unk_02006d14_testActionFlag(o, 0x11) != 0) {
                    Unk_02006d14_clearActionFlag(o, 0x11);
                    Character_detachTalkRequest(o, o);
                }
                TalkRequest_FinishPlayerMessage();
                o->actionPriority = Unk_02007694_getActionDonePriority(o, o->action);
                PlayerActor_requestWait(o, 3, 1, -1);
            } else if (s >= 0xf) {
            l76c:
                if (Unk_02006d14_testActionFlag(o, 0x11) != 0) {
                    Unk_02006d14_clearActionFlag(o, 0x11);
                    Character_detachTalkRequest(o, o);
                }
                TalkRequest_FinishPlayerMessage();
                *st = *st + 1;
            }
        } else {
            o->actionPriority = Unk_02007694_getActionDonePriority(o, o->action);
            Unk_02006d14_clearActionFlag(o, 0xd);
        }
        break;
    case 2:
        if (o->fieldQuery != -1) break;
        Pair p;
        u32 pb = g->digUnitZ;
        u32 v = o->actionItem;
        u32 pa = g->digUnitX;
        p.x = pa;
        p.y = pb;
        PlayerActor_RequestBuryItem(o, 2, &p, v, 6, -1);
        Unk_02006d14_clearActionFlag(o, 0xd);
        break;
    }
}
}

namespace ns_022093bc {
extern "C" void PlayerActor_MainDugItemStore(Obj *o) {
    PlayerActor_DugItemStoreShrink(o);
    Unk_020102ec_updateBodyCollider(o);
    PlayerActor_DugItemStoreUpdate(o);
}
}

namespace ns_022093bc {
extern "C" s32 PlayerActor_RequestBuryItem(Obj *o, u32 k, Pair *p, u32 v, s32 a, s16 b) {
    Msg m;
    Pay *pl = (PlayerBuryItemArgs *)m.unk_0c_b;
    _ZN19PlayerActionRequest6assignEiis(&m, 0x61, a, b);
    pl->h = v;
    pl->b4 = k;
    pl->b2 = p->x;
    pl->b3 = p->y;
    s32 r = PlayerActor_pushRequest(o, &m);
    return r;
}
}

namespace ns_022093bc {
extern "C" void PlayerActor_BuryItemSetNetData(Sub *s, u32 v, u8 a, u8 b, u8 c) {
    NetBuf_WriteU16(s, v);
    s->unk_02 = a;
    s->unk_03 = b;
    s->unk_04 = c;
}
}

namespace ns_022093bc {
extern "C" void PlayerActor_SetupBuryItem(Obj *o, Msg *m) {
    u32 h;
    Pay *pl = (PlayerBuryItemArgs *)m->unk_0c_b;
    BuryItemWork *r = (BuryItemWork *)&o->actionWork;
    u8 k = pl->b4;
    u32 x = pl->b2;
    u32 z = pl->b3;
    V3 v;
    FieldPos_FromUnitCenter(&v, x, z);
    h = (*(PlayerBuryItemArgs *)m->unk_0c_b).h;
    if (k == 2) {
        if (CommManager_isLocalSlot(gCommManager, o->sessionSlot) != 0) {
            o->fieldQuery = FieldAction_RequestToolAtPendingForAid(o->sessionSlot, 2, 0, o->actionItem);
        }
    } else if (o->animId == 0x6c) {
        k = 3;
    }
    r->buryItem = h;
    r->holeUnitX = x;
    r->holeUnitZ = z;
    r->fillMode = k;
    r->answerOk = 0;
    r->faceAngle = Math_Atan2(v.x - o->position.x, v.z - o->position.z);
    PlayerActor_BuryItemSetNetData((Sub *)&o->netData, h, (u8)x, (u8)z, k);
    Unk_020102ec_startAnimOnce(o, 0x49, 7, 0);
    Unk_02006d14_clearActionFlag(o, 0xd);
}
}

namespace ns_022093bc {
extern "C" void PlayerActor_NetBuryItem() {
}
}

namespace ns_022093bc {
extern "C" void PlayerActor_BuryItemTurn(Obj *o) {
    Unk_02006d14_turnToward(o, ((BuryItemWork *)&o->actionWork)->faceAngle);
}
}

namespace ns_022093bc {
extern "C" void PlayerActor_BuryItemCheckEnd(Obj *o) {
    BuryItemWork *r = (BuryItemWork *)&o->actionWork;
    if (CommManager_isLocalSlot(gCommManager, o->sessionSlot) == 0) {
        o->actionPriority = Unk_02007694_getActionDonePriority(o, o->action);
        return;
    }
    if (o->fieldAnswer == 1) r->answerOk = 1;
    if (AnimFrameCtrl_isFinished((AnimFrameCtrl *)&o->bodyModel) != 0 || o->animId == 0x4a) {
        if (AnimFrameCtrl_isFinished((AnimFrameCtrl *)&o->bodyModel) != 0) Unk_020102ec_startAnim(o, 0x4a, 3, 0);
        if (r->fillMode == 2 && r->answerOk == 0) return;
        o->actionPriority = Unk_02007694_getActionDonePriority(o, o->action);
        Pair p;
        u32 pb = r->holeUnitZ;
        u32 pa = r->holeUnitX;
        p.x = pa;
        p.y = pb;
        PlayerActor_RequestFillHole(o, r->fillMode, &p, r->buryItem, 6, -1);
    }
}
}

namespace ns_022093bc {
extern "C" void PlayerActor_MainBuryItem(Obj *o) {
    PlayerActor_BuryItemTurn(o);
    Unk_020102ec_advanceAnim(o);
    Unk_020102ec_updateBodyCollider(o);
    PlayerActor_BuryItemCheckEnd(o);
}
}

namespace ns_022093bc {
extern "C" s32 PlayerActor_RequestFillHole(Obj *o, u32 k, Pair *p, u32 v, s32 a, s16 b) {
    Msg m;
    Pay *pl = (PlayerBuryItemArgs *)m.unk_0c_b;
    _ZN19PlayerActionRequest6assignEiis(&m, 0x62, a, b);
    pl->b4 = k;
    pl->b2 = p->x;
    pl->b3 = p->y;
    pl->h = v;
    s32 r = PlayerActor_pushRequest(o, &m);
    return r;
}
}

namespace ns_02208a58 {
extern "C" void PlayerActor_SetupFillHole(Obj *o, Msg *a) {
    V3 v;
    u8 *q = (u8 *)a->unk_0c_b;
    Rec *r4 = (Rec *)&o->actionWork;
    u32 b = q[4];
    FieldPos_FromUnitCenter(&v, q[2], q[3]);
    *(u16 *)&((Rec *)&o->actionWork)->unk_00 = a->unk_0c_h;
    r4->fillMode = b;
    r4->holePos.x = v.x;
    r4->holePos.y = v.y;
    r4->holePos.z = v.z;
    r4->faceAngle = Math_Atan2(v.x - o->position.x, v.z - o->position.z);
    switch (o->animId) {
    case 0x4a:
        Unk_020102ec_startAnimOnce(o, 0x51, 3, 0);
        break;
    case 0x49:
        if (AnimFrameCtrl_isFinished((AnimFrameCtrl *)&o->bodyModel)) {
            Unk_020102ec_startAnimOnce(o, 0x51, 3, 0);
        }
        break;
    default:
        Unk_020102ec_startAnimOnce(o, 0x49, 3, 0);
        break;
    }
    Unk_02006d14_clearActionFlag(o, 0xd);
    Unk_02006d14_setActionFlag(o, 0x1c);
}
}

namespace ns_02208a58 {
extern "C" void PlayerActor_NetFillHole() {}
}

namespace ns_02208a58 {
extern "C" void PlayerActor_EndFillHole(Obj *o) {
    volatile V3 v;
    V3 w;
    V3 x;
    void *g = gCommManager;
    if (!CommManager_isLocalSlot(g, o->sessionSlot)) {
        if (Unk_02006d14_testActionFlag(o, 0x1c)) {
            Rec *r = (Rec *)&o->actionWork;
            v.x = r->holePos.x;
            v.y = r->holePos.y;
            v.z = r->holePos.z;
            if (CommManager_isLocalSlot(g, o->sessionSlot)) {
                w.x = v.x;
                w.y = v.y;
                w.z = v.z;
                FieldItemFx_StartFillHole(o->sessionSlot, &w);
            } else {
                x.x = v.x;
                x.y = v.y;
                x.z = v.z;
                FieldItemFx_StartFillHoleWithItem(o->sessionSlot, &x);
            }
            Unk_02006d14_clearActionFlag(o, 0x1c);
        }
    }
}
}

namespace ns_02208a58 {
extern "C" void PlayerActor_FillHoleTurn(Obj *o) {
    Unk_02006d14_turnToward(o, ((Rec *)&o->actionWork)->faceAngle);
}
}

namespace ns_02208a58 {
extern "C" void PlayerActor_FillHoleUpdate(Obj *o) {
    V3 v;
    V3 w;
    V3 x;
    s16 h;
    if (o->animId != 0x49) {
        Rec *r = (Rec *)&o->actionWork;
        v.x = r->holePos.x;
        v.y = r->holePos.y;
        v.z = r->holePos.z;
        h = o->rotY;
        s32 k = ((Unk_ov003_02208a58_Bits *)&o->bodyModel.curFrame)->mid;
        switch (k) {
        case 1:
            Effect_Create(9, &v, &h, 0);
            break;
        case 5:
            if (CommManager_isLocalSlot(gCommManager, o->sessionSlot)) {
                w.x = v.x;
                w.y = v.y;
                w.z = v.z;
                FieldItemFx_StartFillHole(o->sessionSlot, &w);
            } else {
                u16 *p = BlockMap_GetItemPtrAtPos(gSceneBlockMap, &v, 0);
                BOOL f = FALSE;
                if (*p >= 0xfc && *p <= 0xfd) f = TRUE;
                if (f) {
                    x.x = v.x;
                    x.y = v.y;
                    x.z = v.z;
                    FieldItemFx_StartFillHoleWithItem(o->sessionSlot, &x);
                }
            }
            Unk_02006d14_clearActionFlag(o, 0x1c);
            break;
        case 7:
            Unk_02006d14_playSe(o, 0x843);
            Unk_02006d14_setActionFlag(o, 9);
            break;
        case 0x15:
            Effect_Create(0xa, &v, 0, 0);
            break;
        }
    }
    Unk_020102ec_advanceAnim(o);
}
}

namespace ns_02208a58 {
extern "C" void PlayerActor_FillHoleCheckEnd(Obj *o) {
    if (AnimFrameCtrl_isFinished((AnimFrameCtrl *)&o->bodyModel)) {
        Rec *r5 = (Rec *)&o->actionWork;
        if (o->animId == 0x49) {
            Unk_020102ec_startAnimOnce(o, 0x51, 3, 0);
        } else {
            o->actionPriority = Unk_02007694_getActionDonePriority(o, o->action);
            u32 b = r5->fillMode;
            if (b == 1) {
                Unk_02007694_requestAct05(o, 3, 5, -1);
            } else if (CommManager_isLocalSlot(gCommManager, o->sessionSlot) && b == 3) {
                if (Unk_02006d14_testActionFlag(o, 0x11)) {
                    Unk_02006d14_clearActionFlag(o, 0x11);
                    Character_detachTalkRequest(o, o);
                }
                Unk_02007694_requestWaitMenu(o, 3, 1, -1);
            } else {
                PlayerActor_requestWait(o, 3, 1, -1);
            }
        }
    }
}
}

namespace ns_02208a58 {
extern "C" void PlayerActor_MainFillHole(Obj *o) {
    V3 v;
    PlayerActor_FillHoleTurn(o);
    PlayerActor_FillHoleUpdate(o);
    Rec *r = (Rec *)&o->actionWork;
    v.x = r->holePos.x;
    v.y = r->holePos.y;
    v.z = r->holePos.z;
    Unk_02006d14_netSyncNearPoint(o, &v);
    Unk_020102ec_updateBodyCollider(o);
    PlayerActor_FillHoleCheckEnd(o);
}
}

namespace ns_02208a58 {
extern "C" s32 PlayerActor_RequestWateringCan(Obj *o, s32 a, s16 b) {
    Msg m;
    _ZN19PlayerActionRequest6assignEiis(&m, 0x63, a, b);
    s32 r = PlayerActor_pushRequest(o, &m);
    return r;
}
}

namespace ns_02208a58 {
extern "C" void PlayerActor_WateringCanSetNetData(u8 *p, u32 v) {
    *p = v;
}
}

namespace ns_02208a58 {
extern "C" void PlayerActor_WateringCanGetNetData(u8 *p, u8 *out) {
    *out = *p;
}
}

namespace ns_02208a58 {
extern "C" void PlayerActor_SetupWateringCan(Obj *o) {
    Unk_020102ec_startAnimOnce(o, 0x61, 3, 0);
    ((Rec *)&o->actionWork)->unk_00 = -1;
}
}

namespace ns_02208a58 {
extern "C" s32 PlayerActor_NetWateringCan(Obj *o, s16 b) {
    return PlayerActor_RequestWateringCan(o, 6, b);
}
}

namespace ns_02208a58 {
extern "C" void PlayerActor_EndWateringCan(Obj *o) {
    V3 t;
    if (((Rec *)&o->actionWork)->unk_00 != -1) {
        Effect_End(((Rec *)&o->actionWork)->unk_00);
    }
    PlayerActor_GetFrontPoint(&t, o);
    sWateringActive = 0;
    sWateringPos.x = t.x;
    sWateringPos.y = t.y;
    sWateringPos.z = t.z;
}
}

namespace ns_02208a58 {
extern "C" void PlayerActor_WateringCanUpdate(Obj *o) {
    V3 v;
    V3 t;
    V3 t2;
    Unk_020102ec_advanceAnim(o);
    s32 k = ((Unk_ov003_02208a58_Bits *)&o->bodyModel.curFrame)->mid;
    s32 *h = &((Rec *)&o->actionWork)->unk_00;
    if (k >= 5 && k <= 0x23) {
        s32 z = o->heldItemJointMtx.m[11];
        s32 y = o->heldItemJointMtx.m[10];
        v.x = o->heldItemJointMtx.m[9];
        v.y = y;
        v.z = z;
        WorldCurve_FromCurved(&v, &v);
        if (*h == -1) {
            *h = Effect_Create(0x26, &v, &o->rotY, 0);
            Unk_02006d14_playSe(o, 0x854);
            PlayerActor_GetFrontPoint(&t, o);
            sWateringActive = 1;
            sWateringPos.x = t.x;
            sWateringPos.y = t.y;
            sWateringPos.z = t.z;
        } else {
            Effect_SetPosition(*h, &v, 0);
        }
        switch (k) {
        case 0x14:
            PlayerActor_GetFrontPoint(&t2, o);
            v.x = t2.x;
            v.y = t2.y;
            v.z = t2.z;
            Unk_02006d14_startFieldQuery(o, &v, 1, 5);
            break;
        case 0x23:
            if (*h != -1) {
                Effect_End(*h);
                *h = -1;
            }
            break;
        }
    }
}
}

namespace ns_02208a58 {
extern "C" void PlayerActor_WateringCanCheckEnd(Obj *o) {
    if (AnimFrameCtrl_isFinished((AnimFrameCtrl *)&o->bodyModel)) {
        o->actionPriority = Unk_02007694_getActionDonePriority(o, o->action);
        PlayerActor_requestWait(o, 3, 1, -1);
    }
    u8 *p6 = o->netData.bytes;
    PlayerActor_WateringCanSetNetData(p6, 0);
    if (((Unk_ov003_02208a58_Bits *)&o->bodyModel.curFrame)->mid >= 0x21 && PlayerActor_ResumeWalkOrIdle(o)) {
        s32 *p4 = &((Rec *)&o->actionWork)->unk_00;
        PlayerActor_WateringCanSetNetData(p6, 1);
        if (((Rec *)&o->actionWork)->unk_00 != -1) {
            Effect_End(((Rec *)&o->actionWork)->unk_00);
            *p4 = -1;
        }
    }
}
}

namespace ns_02208a58 {
extern "C" void PlayerActor_WateringCanCheckEndRemote(Obj *o) {
    u8 b;
    s32 out;
    o->actionPriority = Unk_02007694_getActionDonePriority(o, o->action);
    u8 *p6 = o->netData.bytes;
    PlayerActor_WateringCanGetNetData(p6, &b);
    if (b != 0 && PlayerActor_GetSlotAction(&out, -1, o->sessionSlot) && out == 0x63) {
        PlayerActor_RequestWateringCan(o, 6, -1);
        s32 *p4 = &((Rec *)&o->actionWork)->unk_00;
        PlayerActor_WateringCanSetNetData(p6, 1);
        if (((Rec *)&o->actionWork)->unk_00 != -1) {
            Effect_End(((Rec *)&o->actionWork)->unk_00);
            *p4 = -1;
        }
    } else {
        if (AnimFrameCtrl_isFinished((AnimFrameCtrl *)&o->bodyModel)) {
            PlayerActor_requestWait(o, 3, 1, -1);
        }
    }
}
}

namespace ns_02208a58 {
extern "C" void PlayerActor_MainWateringCan(Obj *o) {
    PlayerActor_WateringCanUpdate(o);
    Unk_020102ec_updateBodyCollider(o);
    Unk_020102ec_submitSceneCollider(o);
    if (CommManager_isLocalSlot(gCommManager, o->sessionSlot)) {
        PlayerActor_WateringCanCheckEnd(o);
    } else {
        PlayerActor_WateringCanCheckEndRemote(o);
    }
}
}

namespace ns_02208a58 {
extern "C" s32 PlayerActor_RequestSlingshot(Obj *o, s32 a, s16 b) {
    Msg m;
    _ZN19PlayerActionRequest6assignEiis(&m, 0x64, a, b);
    s32 r = PlayerActor_pushRequest(o, &m);
    return r;
}
}

namespace ns_02208a58 {
extern "C" void PlayerActor_SetupSlingshot(Obj *o) {
    if (CommManager_isLocalSlot(gCommManager, o->sessionSlot) && !TalkRequest_AddSlingshot()) {
        o->actionPriority = Unk_02007694_getActionDonePriority(o, o->action);
        PlayerActor_requestWait(o, 3, 1, -1);
    } else {
        Sky_OnSlingshotFired(o->sessionSlot);
        Unk_020102ec_startAnimOnce(o, 0x5f, 3, 0);
        HeldItemModel_PlayAnim((u8 *)&o->heldItemModel, 0x22, 3, 1);
    }
}
}

namespace ns_02208a58 {
extern "C" s32 PlayerActor_NetSlingshot(Obj *o, s16 b) {
    return PlayerActor_RequestSlingshot(o, 6, b);
}
}

namespace ns_02208a58 {
extern "C" void PlayerActor_SlingshotUpdate(Obj *o) {
    V3 v;
    V3 w;
    Unk_02006d14_turnAwayFromCamera(o, 0x400);
    Unk_020102ec_advanceAnim(o);
    if (o->animId == 0x5f) {
        v.x = o->bodyPos.x;
        v.y = o->bodyPos.y;
        v.z = o->bodyPos.z;
        v.y += 0xb00;
        v.z += 0x300;
        if (((Unk_ov003_02208a58_Bits *)&o->bodyModel.curFrame)->mid < 0xb) {
            Unk_02006d14_playSeAt(o, 0x851, &v);
        } else if (AnimFrameCtrl_hasPassedFrame((AnimFrameCtrl *)&o->bodyModel, 0xb)) {
            FishBobber_setState((u8 *)&o->heldItemModel.bobber, 9);
            w.x = v.x;
            w.y = v.y;
            w.z = v.z;
            FishBobber_setPos((u8 *)&o->heldItemModel.bobber, &w);
            Unk_02006d14_playSe(o, 0x852);
            Unk_02006d14_playSe(o, 0x853);
            Unk_02006d14_setActionFlag(o, 9);
        }
    }
}
}

namespace ns_02208a58 {
extern "C" void PlayerActor_SlingshotCheckEnd(Obj *o) {
    if (AnimFrameCtrl_isFinished((AnimFrameCtrl *)&o->bodyModel)) {
        Unk_020102ec_startAnim(o, 0x60, 3, 3);
        if (!CommManager_isLocalSlot(gCommManager, o->sessionSlot)) {
            o->actionPriority = Unk_02007694_getActionDonePriority(o, o->action);
        }
    }
}
}

namespace ns_02208a58 {
extern "C" void PlayerActor_MainSlingshot(Obj *o) {
    PlayerActor_SlingshotUpdate(o);
    Unk_020102ec_updateBodyCollider(o);
    PlayerActor_SlingshotCheckEnd(o);
}
}

namespace ns_02208a58 {
extern "C" s32 PlayerActor_RequestSlingshotWatch(Obj *o, s32 a, s16 b) {
    Msg m;
    _ZN19PlayerActionRequest6assignEiis(&m, 0x65, a, b);
    s32 r = PlayerActor_pushRequest(o, &m);
    return r;
}
}

namespace ns_02208a58 {
extern "C" void PlayerActor_SetupSlingshotWatch(Obj *o) {
    Unk_020102ec_startAnim(o, 0, 3, 0);
}
}

namespace ns_02208a58 {
extern "C" void PlayerActor_NetSlingshotWatch() {}
}

namespace ns_02208a58 {
extern "C" void PlayerActor_MainSlingshotWatch(Obj *o) {
    Unk_020102ec_advanceAnim(o);
    Unk_020102ec_updateBodyCollider(o);
    Unk_020102ec_submitSceneCollider(o);
}
}

namespace ns_02208a58 {
extern "C" void PlayerActor_Act66SetArgs(u8 *d, Pair v, u32 c) {
    d[0] = v.a;
    d[1] = v.b;
    d[2] = c;
}
}

namespace ns_02208a58 {
extern "C" s32 PlayerActor_RequestAct66(Obj *o, Pair *p, u32 c, s32 b, s16 d) {
    Msg m;
    _ZN19PlayerActionRequest6assignEiis(&m, 0x66, b, d);
    PlayerActor_Act66SetArgs((u8 *)m.unk_0c_b, *p, c);
    s32 r = PlayerActor_pushRequest(o, &m);
    return r;
}
}

namespace ns_02208a58 {
extern "C" void PlayerActor_Act66SetWork(u8 *r, u32 a, u32 b, V3 *v) {
    r[0xf] = a;
    r[0xe] = 0;
    *(u16 *)(r + 0xc) = b;
    ((V3 *)r)->x = v->x;
    ((V3 *)r)->y = v->y;
    ((V3 *)r)->z = v->z;
}
}

namespace ns_02208a58 {
extern "C" void PlayerActor_Act66SetNetData(u8 *p, Pair *v) {
    p[0] = v->a;
    p[1] = v->b;
}
}

namespace ns_02208a58 {
extern "C" void PlayerActor_Act66GetNetData(u8 *p, Pair *out) {
    out->a = p[0];
    out->b = p[1];
}
}

namespace ns_02208108 {
extern "C" void PlayerActor_SetupAct66(Obj *o, u8 *m) {
    u8 *q = m + 0xc;
    RecA *r = (RecA *)((u8 *)o + 0x7d0);
    s32 a = m[0xc];
    s32 b = q[1];
    s32 c = q[2];
    Pair p;
    VD d;
    V3 pos;
    FieldPos_FromUnitCenter(&pos, a, b);
    d.x = pos.x - o->position.x;
    d.z = pos.z - o->position.z;
    s32 ang = Math_Atan2(d.x, d.z);
    PlayerActor_Act66SetWork(r, c, ang, pos);
    p.a = a;
    p.b = b;
    PlayerActor_Act66SetNetData(o->netData.bytes, &p);
    Unk_020102ec_startAnim(o, 0x64, 3, 0);
    if (r->unk_0f == 1) {
        Unk_02006d14_setActionFlag(o, 0x1c);
    }
}
}

namespace ns_02208108 {
extern "C" void PlayerActor_NetAct66(Obj *o, s32 a) {
    if (o->action == 0x66) {
        o->netSeq = a;
    } else {
        Pair p;
        p.a = 0;
        p.b = 0;
        PlayerActor_Act66GetNetData(o->netData.bytes, &p);
        PlayerActor_RequestAct66(o, p, 0, 6, a);
    }
}
}

namespace ns_02208108 {
extern "C" void PlayerActor_EndAct66(Obj *o, s32 a) {
    if (CommManager_isLocalSlot(gCommManager, o->sessionSlot) == 0) {
        if (a == 2) {
            Unk_02006d14_clearActionFlag(o, 0x1c);
        } else if (a != 0x67) {
            if (Unk_02006d14_testActionFlag(o, 0x1c)) {
                V3 *p = (V3 *)((u8 *)o + 0x7d0);
                FieldItemFx_StartHoleShrink(o->sessionSlot, *p);
                Unk_02006d14_clearActionFlag(o, 0x1c);
            }
        } else {
            Unk_02006d14_clearActionFlag(o, 0x1c);
        }
    } else {
        Unk_02006d14_clearActionFlag(o, 0x1c);
    }
}
}

namespace ns_02208108 {
extern "C" void PlayerActor_Act66Turn(Obj *o) {
    s16 h = o->rotY;
    PlayerActor_TurnAngle(&h, *(s16 *)((u8 *)o + 0x7dc));
    Unk_020102ec_setAngleY(o, &h);
}
}

namespace ns_02208108 {
extern "C" void PlayerActor_Act66CheckEnd(Obj *o) {
    RecC *r = (RecC *)((u8 *)o + 0x7d0);
    void *g = gCommManager;
    if (CommManager_isLocalSlot(g, o->sessionSlot) != 0) {
        if (r->answer == 0) {
            if (o->fieldAnswer == 1) {
                r->answer = 1;
            } else if (o->fieldAnswer == 2) {
                r->answer = 2;
            }
        }
    }
    if (r->waitFrames < 2) {
        r->waitFrames++;
    } else {
        if (CommManager_isLocalSlot(g, o->sessionSlot) == 0) {
            o->actionPriority = (s32)Unk_02007694_getActionDonePriority(o, o->action);
        }
        switch (r->answer) {
        case 0:
            break;
        case 1: {
            V3 v;
            v.x = r->unk_00;
            v.y = r->unk_04;
            v.z = r->unk_08;
            PlayerActor_RequestAct67(o, &v, 6, -1);
            break;
        }
        case 2:
            o->actionPriority = (s32)Unk_02007694_getActionDonePriority(o, o->action);
            PlayerActor_requestWait(o, 3, 1, -1);
            break;
        }
    }
}
}

namespace ns_02208108 {
extern "C" void PlayerActor_MainAct66(Obj *o) {
    RecC *r = (RecC *)((u8 *)o + 0x7d0);
    Unk_020102ec_advanceAnim(o);
    V3 v;
    v.x = o->actionWork;
    v.y = r->unk_04;
    v.z = r->unk_08;
    if (Unk_02006d14_netSyncNearPoint(o, &v)) {
        PlayerActor_Act66Turn(o);
    }
    Unk_020102ec_updateBodyCollider(o);
    PlayerActor_Act66CheckEnd(o);
}
}

namespace ns_02208108 {
extern "C" void PlayerActor_Act67SetArgs(V3 *d, V3 v) {
    *d = v;
}
}

namespace ns_02208108 {
extern "C" s32 PlayerActor_RequestAct67(Obj *o, V3 *v, s32 a, s16 b) {
    Msg m;
    _ZN19PlayerActionRequest6assignEiis(&m, 0x67, a, b);
    V3 t;
    FieldPos_SnapToUnitCenter(&t, (s32)v);
    PlayerActor_Act67SetArgs((V3 *)m.unk_0c_b, t);
    return PlayerActor_pushRequest(o, &m);
}
}

namespace ns_02208108 {
extern "C" void PlayerActor_Act67SetWork(RecC *r, s32 a, V3 v) {
    *(u16 *)r = a;
    *(V3 *)((u8 *)r + 4) = v;
}
}

namespace ns_02208108 {
extern "C" void PlayerActor_SetupAct67(Obj *o, u8 *m) {
    VD d;
    u8 *q = m + 0xc;
    V3D l(*(s32 *)(m + 0xc), *(s32 *)(q + 4), *(s32 *)(q + 8));
    d.x = l.x - o->position.x;
    d.z = l.z - o->position.z;
    s32 ang = Math_Atan2(d.x, d.z);
    PlayerActor_Act67SetWork((RecC *)((u8 *)o + 0x7d0), ang, l);
    Unk_020102ec_startAnimOnce(o, 0x65, 3, 0);
    FieldItemFx_StartHoleShrink(o->sessionSlot, l);
    Unk_02006d14_clearActionFlag(o, 0x1c);
    Unk_02006d14_playSe(o, 0x7da);
    Unk_02006d14_setActionFlag(o, 9);
}
}

namespace ns_02208108 {
extern "C" void PlayerActor_NetAct67(Obj *o) {
}
}

namespace ns_02208108 {
extern "C" void PlayerActor_Act67Effect(Obj *o) {
    Unk_020102ec_advanceAnim(o);
    if (o->animId == 0x65) {
        if (AnimFrameCtrl_hasPassedFrame((AnimFrameCtrl *)&o->bodyModel, 3) || AnimFrameCtrl_hasPassedFrame((AnimFrameCtrl *)&o->bodyModel, 0xd)) {
            Effect_Create(0x23, (V3 *)&o->position, &o->rotY, 0);
        }
    }
}
}

namespace ns_02208108 {
extern "C" void PlayerActor_Act67Turn(Obj *o) {
    s16 h = o->rotY;
    PlayerActor_TurnAngle(&h, *(s16 *)((u8 *)o + 0x7d0));
    Unk_020102ec_setAngleY(o, &h);
}
}

namespace ns_02208108 {
extern "C" void PlayerActor_Act67CheckEnd(Obj *o) {
    if (AnimFrameCtrl_isFinished((AnimFrameCtrl *)&o->bodyModel)) {
        o->actionPriority = (s32)Unk_02007694_getActionDonePriority(o, o->action);
        PlayerActor_requestWait(o, 3, 1, -1);
    }
    if (((Unk_ov003_02208190_Bits *)&o->bodyModel.curFrame)->mid >= 0x16) {
        PlayerActor_ResumeWalkOrIdle(o);
    }
}
}

namespace ns_02208108 {
extern "C" void PlayerActor_Act67CheckEndRemote(Obj *o) {
    o->actionPriority = (s32)Unk_02007694_getActionDonePriority(o, o->action);
    if (AnimFrameCtrl_isFinished((AnimFrameCtrl *)&o->bodyModel)) {
        PlayerActor_requestWait(o, 3, 1, -1);
    }
}
}

namespace ns_02208108 {
extern "C" void PlayerActor_MainAct67(Obj *o) {
    RecC *r = (RecC *)((u8 *)o + 0x7d0);
    PlayerActor_Act67Effect(o);
    V3 v;
    v.x = r->unk_04;
    v.y = r->unk_08;
    v.z = *(s32 *)((u8 *)r + 0xc);
    if (Unk_02006d14_netSyncNearPoint(o, &v)) {
        PlayerActor_Act67Turn(o);
    }
    Unk_020102ec_updateBodyCollider(o);
    if (CommManager_isLocalSlot(gCommManager, o->sessionSlot)) {
        PlayerActor_Act67CheckEnd(o);
    } else {
        PlayerActor_Act67CheckEndRemote(o);
    }
}
}

namespace ns_02208108 {
extern "C" void PlayerActor_TreeShakeSetArgs(void *p, s32 a, s32 b, u8 c, u8 d) {
    u8 *q = (u8 *)p;
    *(s32 *)q = a;
    *(s32 *)(q + 4) = b;
    q[8] = c;
    q[9] = d;
}
}

namespace ns_02208108 {
extern "C" s32 PlayerActor_RequestTreeShake(Obj *o, s32 x, s32 z, bool a, bool b, s32 c, s32 d) {
    Msg m;
    _ZN19PlayerActionRequest6assignEiis(&m, 0x68, c, *(s16 *)&d);
    PlayerActor_TreeShakeSetArgs(m.unk_0c_b, x, z, a, b);
    return PlayerActor_pushRequest(o, &m);
}
}

namespace ns_02208108 {
extern "C" void PlayerActor_TreeShakeSetWork(RecA *r, s32 a, s32 x, s32 z, u8 b, u8 c) {
    r->faceAngle = a;
    r->treePosX = x;
    r->treePosZ = z;
    r->unk_0b = b;
    r->doRelease = c;
    r->shakeFrames = 0;
}
}

namespace ns_02208108 {
extern "C" void PlayerActor_TreeShakeSetNetData(u8 *p, s32 a, s32 b, u8 c) {
    NetBuf_PackPair20(p, a, b);
    p[5] = c;
}
}

namespace ns_02208108 {
extern "C" void PlayerActor_TreeShakeGetNetData(u8 *p, s32 *a, s32 *b, u8 *c) {
    NetBuf_UnpackPair20(p, a, b);
    *c = p[5];
}
}

namespace ns_02208108 {
extern "C" void PlayerActor_SetupTreeShake(Obj *o, u8 *m) {
    u8 *q = m + 0xc;
    u8 b0 = q[8];
    u8 b1 = q[9];
    VD d;
    V3D v(*(s32 *)(m + 0xc), o->position.y, *(s32 *)(q + 4));
    d.x = v.x - o->position.x;
    d.z = v.z - o->position.z;
    s32 ang = Math_Atan2(d.x, d.z);
    PlayerActor_TreeShakeSetWork((RecA *)((u8 *)o + 0x7d0), ang, v.x, v.z, b0, b1);
    PlayerActor_TreeShakeSetNetData(o->netData.bytes, v.x, v.z, b0 | (b1 << 4));
    if (b1 != 0) {
        Unk_020102ec_startAnimOnce(o, 0x66, 3, 0);
    } else {
        Unk_020102ec_startAnim(o, 0x66, 3, 0);
    }
    Unk_02006d14_setActionFlag(o, 9);
}
}

namespace ns_02208108 {
extern "C" void PlayerActor_NetTreeShake(Obj *o, s32 a) {
    if (o->action == 0x68) {
        o->netSeq = a;
    } else {
        s32 x, z;
        u8 f;
        PlayerActor_TreeShakeGetNetData(o->netData.bytes, &x, &z, &f);
        bool t0 = f != 0;
        bool t1 = (f >> 4) != 0;
        PlayerActor_RequestTreeShake(o, x, z, t0, t1, 6, a);
    }
}
}

namespace ns_02208108 {
extern "C" void PlayerActor_EndTreeShake(Obj *o) {
    if (CommManager_isLocalSlot(gCommManager, o->sessionSlot) == 0) {
        RecA *r = (RecA *)((u8 *)o + 0x7d0);
        if (r->shakeFrames < 5) {
            V3 v(r->treePosX, 0, r->treePosZ);
            Pair p;
            p.a = 0;
            p.b = 0;
            FieldPos_ToUnit(&p.a, &p.b, &v);
            Tree_RequestShake(o->sessionSlot, p, 2);
        }
    }
}
}

namespace ns_02208108 {
extern "C" void PlayerActor_TreeShakeTurn(Obj *o) {
    s16 h = o->rotY;
    PlayerActor_TurnAngle(&h, *(s16 *)((u8 *)o + 0x7d8));
    Unk_020102ec_setAngleY(o, &h);
}
}

namespace ns_02208108 {
extern "C" void PlayerActor_TreeShakeCheckEnd(Obj *o) {
    RecA *r = (RecA *)((u8 *)o + 0x7d0);
    if (r->doRelease != 0) {
        if (AnimFrameCtrl_isFinished((AnimFrameCtrl *)&o->bodyModel)) {
            PlayerActor_RequestTreeShakeRelease(o, r->treePosX, r->treePosZ, r->unk_0b, 1, 6, -1);
        }
    } else {
        s32 t = o->fieldAnswer;
        if (t == 1) {
            r->doRelease = 1;
            o->bodyModel.playMode = 1;
        } else if (t == 2) {
            o->actionPriority = (s32)Unk_02007694_getActionDonePriority(o, o->action);
            PlayerActor_requestWait(o, 3, 1, -1);
        }
    }
}
}

namespace ns_02208108 {
extern "C" void PlayerActor_TreeShakeCheckEndRemote(Obj *o) {
    RecA *r = (RecA *)((u8 *)o + 0x7d0);
    o->actionPriority = (s32)Unk_02007694_getActionDonePriority(o, o->action);
    if (r->doRelease != 0) {
        if (AnimFrameCtrl_isFinished((AnimFrameCtrl *)&o->bodyModel)) {
            PlayerActor_RequestTreeShakeRelease(o, r->treePosX, r->treePosZ, r->unk_0b, 1, 6, -1);
        }
    }
}
}

namespace ns_02208108 {
extern "C" void PlayerActor_MainTreeShake(Obj *o) {
    RecA *r = (RecA *)((u8 *)o + 0x7d0);
    V3 v(r->treePosX, 0, r->treePosZ);
    Pair p;
    p.a = 0;
    p.b = 0;
    FieldPos_ToUnit(&p.a, &p.b, &v);
    if (r->shakeFrames > 5) {
        Tree_KeepShaking(o->sessionSlot, p);
    } else {
        r->shakeFrames++;
        if (r->shakeFrames == 5) {
            Tree_RequestShake(o->sessionSlot, p, 2);
        }
    }
    Unk_020102ec_advanceAnim(o);
    if (CommManager_isLocalSlot(gCommManager, o->sessionSlot)) {
        PlayerActor_TreeShakeTurn(o);
        Unk_020102ec_updateBodyCollider(o);
        PlayerActor_TreeShakeCheckEnd(o);
    } else {
        if (Unk_02006d14_netFollowTransform(o)) {
            PlayerActor_TreeShakeTurn(o);
        }
        Unk_020102ec_updateBodyCollider(o);
        PlayerActor_TreeShakeCheckEndRemote(o);
    }
}
}

namespace ns_02208108 {
extern "C" void PlayerActor_TreeShakeReleaseSetArgs(void *p, s32 a, s32 b, u8 c, u8 d) {
    u8 *q = (u8 *)p;
    *(s32 *)q = a;
    *(s32 *)(q + 4) = b;
    q[8] = c;
    q[9] = d;
}
}

namespace ns_02208108 {
extern "C" s32 PlayerActor_RequestTreeShakeRelease(Obj *o, s32 x, s32 z, u8 a, u8 b, s32 c, s16 d) {
    Msg m;
    _ZN19PlayerActionRequest6assignEiis(&m, 0x69, c, d);
    PlayerActor_TreeShakeReleaseSetArgs(m.unk_0c_b, x, z, a, b);
    return PlayerActor_pushRequest(o, &m);
}
}

namespace ns_02208108 {
extern "C" void PlayerActor_TreeShakeReleaseSetWork(void *p, s16 a, s32 b, s32 c, u8 d, u8 e) {
    u8 *q = (u8 *)p;
    q[0] = 0;
    *(s16 *)(q + 2) = a;
    *(s32 *)(q + 4) = b;
    *(s32 *)(q + 8) = c;
    q[0xc] = d;
    q[0xd] = e;
}
}

namespace ns_022077c8 {
extern "C" void PlayerActor_SetupTreeShakeRelease(Obj *o, Msg *m) {
    s32 o1, o2;
    VecFx32CtorDtor d;
    V3 t;
    V3 *r0 = (VecFx32 *)m->unk_0c_b;
    u8 r4 = *((u8 *)r0 + 8);
    u8 r6 = *((u8 *)r0 + 9);
    s32 r2 = *(s32 *)((u8 *)r0 + 4);
    s32 y = o->position.y;
    t.x = (*(VecFx32 *)m->unk_0c_b).x;
    t.y = y;
    t.z = r2;
    d.x = t.x - o->position.x;
    d.z = r2 - o->position.z;
    s32 r7 = Math_Atan2(d.x, d.z);
    o1 = 0;
    o2 = 0;
    FieldPos_ToUnit(&o1, &o2, &t);
    PlayerActor_TreeShakeReleaseSetWork((u8 *)o + 0x7d0, r7, o1, o2, r4, r6);
    Unk_020102ec_startAnimOnce(o, 0x67, 3, 0);
}
}

namespace ns_022077c8 {
extern "C" void PlayerActor_NetTreeShakeRelease() {
}
}

namespace ns_022077c8 {
extern "C" void PlayerActor_TreeShakeReleaseUpdate(Obj *o) {
    Pair p;
    Unk_020102ec_advanceAnim(o);
    if (AnimFrameCtrl_hasPassedFrame((AnimFrameCtrl *)&o->bodyModel, 5)) {
        s32 *r0 = &o->actionWork;
        s32 y = r0[2];
        s32 x = r0[1];
        p.x = x;
        p.y = y;
        Tree_RequestShake(o->sessionSlot, &p, 3);
        Unk_02006d14_clearActionFlag(o, 0x12);
        Unk_02006d14_setActionFlag(o, 9);
    }
}
}

namespace ns_022077c8 {
extern "C" void PlayerActor_TreeShakeReleaseTurn(Obj *o) {
    s16 v = o->rotY;
    PlayerActor_TurnAngle(&v, *(s16 *)((u8 *)o + 0x7d2));
    Unk_020102ec_setAngleY(o, &v);
}
}

namespace ns_022077c8 {
extern "C" void PlayerActor_TreeShakeReleaseCheckEnd(Obj *o) {
    u8 r4 = *((u8 *)o + 0x7dc);
    if (AnimFrameCtrl_isFinished((AnimFrameCtrl *)&o->bodyModel)) {
        o->actionPriority = Unk_02007694_getActionDonePriority(o, o->action);
        if (r4 != 0) {
            Unk_02008040_requestAct77(o, o->rotY, 6, -1);
        } else {
            PlayerActor_requestWait(o, 3, 1, -1);
        }
    }
}
}

namespace ns_022077c8 {
extern "C" void PlayerActor_MainTreeShakeRelease(Obj *o) {
    Pair p;
    s32 *r4 = &o->actionWork;
    PlayerActor_TreeShakeReleaseUpdate(o);
    if (CommManager_isLocalSlot(gCommManager, o->sessionSlot)) {
        PlayerActor_TreeShakeReleaseTurn(o);
        Unk_020102ec_updateBodyCollider(o);
    } else {
        s32 y = r4[2];
        s32 x = r4[1];
        p.x = x;
        p.y = y;
        if (Unk_02006d14_netSyncNearUnit(o, &p)) {
            PlayerActor_TreeShakeReleaseTurn(o);
        }
        Unk_020102ec_updateBodyCollider(o);
    }
    PlayerActor_TreeShakeReleaseCheckEnd(o);
}
}

namespace ns_022077c8 {
extern "C" void PlayerActor_MailboxOpenSetArgs(V3 *d, V3 v) {
    d->x = v.x;
    d->y = v.y;
    d->z = v.z;
}
}

namespace ns_022077c8 {
extern "C" s32 PlayerActor_RequestMailboxOpen(Obj *o, V3 v, s32 a, s16 b) {
    Msg m;
    _ZN19PlayerActionRequest6assignEiis(&m, 0x6a, a, b);
    PlayerActor_MailboxOpenSetArgs((VecFx32 *)m.unk_0c_b, v);
    s32 r = PlayerActor_pushRequest(o, &m);
    return r;
}
}

namespace ns_022077c8 {
extern "C" void PlayerActor_MailboxOpenSetWork(V3 *d, V3 v) {
    d->x = v.x;
    d->y = v.y;
    d->z = v.z;
}
}

namespace ns_022077c8 {
extern "C" void PlayerActor_MailboxOpenSetNetData(void *a, V3 *v) {
    NetBuf_PackTriple20(a, v->x, v->y, v->z, 0);
}
}

namespace ns_022077c8 {
extern "C" void PlayerActor_MailboxOpenGetNetData(void *a, V3 *v) {
    s32 t;
    NetBuf_UnpackTriple20(a, &v->x, &v->y, &v->z, &t);
}
}

namespace ns_022077c8 {
extern "C" void PlayerActor_SetupMailboxOpen(Obj *o, Msg *m) {
    V3 v;
    Unk_020102ec_startAnimOnce(o, 0x7a, 3, 0);
    V3 *pv = (VecFx32 *)m->unk_0c_b;
    v.x = pv->x;
    v.y = pv->y;
    v.z = pv->z;
    PlayerActor_MailboxOpenSetWork((V3 *)&o->actionWork, v);
    PlayerActor_MailboxOpenSetNetData(o->netData.bytes, &v);
}
}

namespace ns_022077c8 {
extern "C" void PlayerActor_NetMailboxOpen(Obj *o, s16 a) {
    V3 v;
    PlayerActor_MailboxOpenGetNetData(o->netData.bytes, &v);
    PlayerActor_RequestMailboxOpen(o, v, 6, a);
}
}

namespace ns_022077c8 {
extern "C" void PlayerActor_MailboxOpenMove(Obj *o) {
    s32 *r2 = &o->actionWork;
    PlayerActor_StepTowardPose(o, r2[0], r2[2], -0x8000);
}
}

namespace ns_022077c8 {
extern "C" s32 PlayerActor_MailboxOpenCheckEnd(Obj *o) {
    if (AnimFrameCtrl_isFinished((AnimFrameCtrl *)&o->bodyModel)) {
        PlayerActor_RequestMailboxWait(o, 6, -1);
    }
}
}

namespace ns_022077c8 {
extern "C" s32 PlayerActor_MainMailboxOpen(Obj *o) {
    PlayerActor_MailboxOpenMove(o);
    Unk_020102ec_advanceAnim(o);
    Unk_020102ec_updateBodyCollider(o);
    PlayerActor_MailboxOpenCheckEnd(o);
}
}

namespace ns_022077c8 {
extern "C" s32 PlayerActor_RequestMailboxWait(Obj *o, s32 a, s16 b) {
    Msg m;
    _ZN19PlayerActionRequest6assignEiis(&m, 0x6b, a, b);
    s32 r = PlayerActor_pushRequest(o, &m);
    return r;
}
}

namespace ns_022077c8 {
extern "C" void PlayerActor_SetupMailboxWait(Obj *o) {
    if (o->animId != 0x7a) {
        Unk_020102ec_startAnimOnce(o, 0x38, 3, 0);
    }
    u32 t = ((Unk_ov003_022077c8_Bits *)&o->bodyModel.numFrames)->mid - 1;
    *(u32 *)(Unk_ov003_022077c8_Bits *)&o->bodyModel.curFrame = (t << 16) >> 4;
}
}

namespace ns_022077c8 {
extern "C" s32 PlayerActor_NetMailboxWait(Obj *o, s16 a) {
    return PlayerActor_RequestMailboxWait(o, 6, a);
}
}

namespace ns_022077c8 {
extern "C" void PlayerActor_MainMailboxWait(Obj *o) {
    Unk_020102ec_advanceAnim(o);
    Unk_020102ec_updateBodyCollider(o);
}
}

namespace ns_022077c8 {
extern "C" s32 PlayerActor_RequestMailboxClose(Obj *o, s32 a, s16 b) {
    Msg m;
    _ZN19PlayerActionRequest6assignEiis(&m, 0x6c, a, b);
    s32 r = PlayerActor_pushRequest(o, &m);
    return r;
}
}

namespace ns_022077c8 {
extern "C" void PlayerActor_SetupMailboxClose(Obj *o) {
    if (o->animId != 0x7a) {
        Unk_020102ec_startAnimOnce(o, 0x7a, 3, 0);
    }
    u32 v = ((Unk_ov003_022077c8_Bits *)&o->bodyModel.numFrames)->mid;
    AnimFrameCtrl_setup((AnimFrameCtrl *)&o->bodyModel, v, 3, 0x1000, (u16)(v - 1));
}
}

namespace ns_022077c8 {
extern "C" s32 PlayerActor_NetMailboxClose(Obj *o, s16 a) {
    return PlayerActor_RequestMailboxClose(o, 6, a);
}
}

namespace ns_022077c8 {
extern "C" void PlayerActor_MailboxCloseUpdate(Obj *o) {
    Unk_020102ec_advanceAnim(o);
    if (AnimFrameCtrl_isFinished((AnimFrameCtrl *)&o->bodyModel)) {
        Unk_020102ec_startAnim(o, 0, 3, 3);
        if (CommManager_isLocalSlot(gCommManager, o->sessionSlot) == 0) {
            o->actionPriority = Unk_02007694_getActionDonePriority(o, o->action);
        }
    }
}
}

namespace ns_022077c8 {
extern "C" s32 PlayerActor_MainMailboxClose(Obj *o) {
    PlayerActor_MailboxCloseUpdate(o);
    Unk_020102ec_updateBodyCollider(o);
}
}

namespace ns_022077c8 {
extern "C" s32 PlayerActor_RequestFaint(Obj *o, u32 a, s32 b, s16 c) {
    Msg m;
    _ZN19PlayerActionRequest6assignEiis(&m, 0x6d, b, c);
    *(u8 *)m.unk_0c_b = a;
    s32 r = PlayerActor_pushRequest(o, &m);
    return r;
}
}

namespace ns_022077c8 {
extern "C" void PlayerActor_SetupFaint(Obj *o, Msg *m) {
    u8 b = *(u8 *)m->unk_0c_b;
    s32 t = Unk_02006d14_getHeldToolKind(o);
    if (t == 3 || t == 4 || t == 10) {
        Unk_020102ec_startAnimOnce(o, 0x69, 3, 6);
        if (t == 3) {
            HeldItemModel_PlayAnim((u8 *)&o->heldItemModel, 0x14, 3, 1);
        } else if (t == 4) {
            HeldItemModel_PlayAnim((u8 *)&o->heldItemModel, 2, 9, 1);
        }
    } else {
        Unk_020102ec_startAnimOnce(o, 0x68, 3, 6);
    }
    TalkRequest_AddLeaveRoom();
    s32 *r4 = &o->actionWork;
    *r4 = Effect_Create(0x34, (u8 *)&o->headTopPos, 0, 0);
    ((u8 *)r4)[4] = b;
    if (b >= 2) {
        Snd_PlaySe(0x51);
        if (b == 2) {
            Unk_02006d14_playSe(o, 0x839);
        } else {
            Unk_02006d14_playSe(o, 0x838);
        }
        Bgm_RequestSilence(0xc, 0, 0);
    }
    Unk_02006d14_playSe(o, 0x816);
}
}

namespace ns_022077c8 {
extern "C" s32 PlayerActor_NetFaint(Obj *o, s16 a) {
    return PlayerActor_RequestFaint(o, 0, 7, a);
}
}

namespace ns_022077c8 {
extern "C" void PlayerActor_FaintEffect(Obj *o) {
    s32 *r4;
    Unk_020102ec_advanceAnim(o);
    r4 = &o->actionWork;
    if (*r4 == -1) {
        *r4 = Effect_Create(0x34, (u8 *)&o->headTopPos, 0, 0);
    } else {
        Effect_SetPosition(*r4, (u8 *)&o->headTopPos, 0, 0);
    }
}
}

namespace ns_022077c8 {
extern "C" void PlayerActor_FaintWarp(Obj *o) {
    FaintWork *r4 = (FaintWork *)((u8 *)o + 0x7d0);
    V3 v;
    s32 r6;
    if (AnimFrameCtrl_hasPassedFrame((AnimFrameCtrl *)&o->bodyModel, 0x2e)) {
        if (r4->faintKind >= 2) {
            Bgm_ReleasePriority(0xc);
            FaintBgm_play(data_021c1b3c + 0x2e4);
        }
    } else if (AnimFrameCtrl_hasPassedFrame((AnimFrameCtrl *)&o->bodyModel, 0x2f)) {
        r6 = TownBlockMap_Get();
        if (CommManager_isLocalSlot(gCommManager, o->sessionSlot)) {
            if (r4->faintKind == 0) {
                if (Town_FindPlayerHouse(r6, &v, 0, 0)) {
                    SceneWarp_RequestAt(Scene_GetWarpRequest(), 0, (V3 *)&o->position, 0x1b800000, 0, 2, 2);
                }
            } else if (o->sessionSlot == 0) {
                if (Town_FindPlayerHouse(r6, &v, 0, 0)) {
                    v.z += 0x2000;
                    SceneWarp_RequestAt(Scene_GetWarpRequest(), 0, &v, 0x1b800000, 0, 2, 2);
                }
            } else {
                if (Town_FindGateHouse(r6, &v, 0, 0)) {
                    SceneWarp_RequestAt(Scene_GetWarpRequest(), 0, &v, 0x1b800000, 0, 2, 2);
                }
            }
        }
    }
}
}

namespace ns_022077c8 {
extern "C" void PlayerActor_MainFaint(Obj *o) {
    PlayerActor_FaintEffect(o);
    Unk_020102ec_updateBodyCollider(o);
    Unk_ov003_022079c4_Impl::PlayerActor_FaintWarp(o);
}
}

namespace ns_022077c8 {
extern "C" s32 PlayerActor_RequestAct6E(Obj *o, s32 a, s16 b) {
    Msg m;
    _ZN19PlayerActionRequest6assignEiis(&m, 0x6e, a, b);
    s32 r = PlayerActor_pushRequest(o, &m);
    return r;
}
}

namespace ns_022077c8 {
extern "C" void PlayerActor_SetupAct6E(Obj *o) {
    s16 v;
    *(u8 *)&o->actionWork = 0;
    v = -0x8000;
    Unk_020102ec_setAngleY(o, &v);
    Unk_02006d14_clearActionFlag(o, 0);
    Unk_020102ec_startAnimOnce(o, 0x6a, 0, 0);
    Unk_02006d14_playSe(o, 0x818);
}
}

namespace ns_022077c8 {
extern "C" s32 PlayerActor_NetAct6E(Obj *o, s16 a) {
    return PlayerActor_RequestAct6E(o, 7, a);
}
}

namespace ns_022077c8 {
extern "C" void PlayerActor_Act6EUpdateAnim(Obj *o) {
    if (Unk_ov003_022078e0_IsTwo(gScreenTransition)) {
        Unk_020102ec_advanceAnim(o);
        if (o->animId == 0x6a) {
            u32 m = ((Unk_ov003_022077c8_Bits *)&o->bodyModel.curFrame)->mid;
            if (m == 0x13 || m == 0x19 || m == 0x1e) {
                Unk_02006d14_playFootstepSe(o);
            }
        } else {
            Unk_02006d14_updateFootstepFx(o);
        }
    }
}
}

namespace ns_022077c8 {
extern "C" void PlayerActor_Act6ECheckEnd(Obj *o) {
    u8 *r4 = (u8 *)o + 0x7d0;
    u16 v[2];
    s32 r;
    if (AnimFrameCtrl_isFinished((AnimFrameCtrl *)&o->bodyModel)) {
        *r4 = 1;
        Unk_020102ec_startAnim(o, 1, 3, 0);
    }
    if (*r4 != 0) {
        if (Unk_02006d14_turnToCamera(o, 0x59a)) {
            FaintBgm_fadeOut(data_021c1b3c + 0x2e4);
            Unk_02006d14_nudgeForward(o);
            TalkRequest_FinishSceneEntry();
            o->actionPriority = Unk_02007694_getActionDonePriority(o, o->action);
            PlayerActor_GetHeldItem(v, o);
            if (Item_IsFurniture(v)) {
                v[1] = 0xfff1;
                s32 a = Item_GetFurnitureIndex(v);
                if (a == Item_GetFurnitureIndex(&v[1])) {
                    r = 1;
                } else {
                    r = 0;
                }
            } else {
                if (v[0] == 0xfff1) {
                    r = 1;
                } else {
                    r = 0;
                }
            }
            if (r == 0) {
                PlayerActor_RequestStowItem(o, 2, 2, 0, 0, 0, 6, -1);
            } else {
                PlayerActor_requestWait(o, 3, 1, -1);
                Unk_02006d14_setActionFlag(o, 0);
            }
        }
    }
}
}

namespace ns_022077c8 {
extern "C" void PlayerActor_MainAct6E(Obj *o) {
    PlayerActor_Act6EUpdateAnim(o);
    Unk_020102ec_updateBodyCollider(o);
    Unk_ov003_022077c8_Impl::PlayerActor_Act6ECheckEnd(o);
}
}

namespace ns_02206e94 {
extern "C" s32 PlayerActor_RequestTrip(Obj *o, s32 a, s32 b) {
    Msg m;
    _ZN19PlayerActionRequest6assignEiis(&m, 0x71, a, b);
    s32 r = PlayerActor_pushRequest(o, &m);
    return r;
}
}

namespace ns_02206e94 {
extern "C" void PlayerActor_SetupTrip(Obj *o) {
    Rec *r = (Rec *)&o->actionWork;
    s32 st = Unk_02006d14_getHeldToolKind(o);
    ((Rec *)&o->actionWork)->unk_00 = st;
    switch (st) {
    case 4:
        HeldItemModel_PlayAnim((u8 *)&o->heldItemModel, 7, 2, 1);
        Unk_020102ec_startAnimOnce(o, 0x8d, 2, 0);
        break;
    case 3:
        HeldItemModel_PlayAnim((u8 *)&o->heldItemModel, 0x1d, 2, 1);
        Unk_020102ec_startAnimOnce(o, 0x8d, 2, 0);
        break;
    case 10:
        Unk_020102ec_startAnimOnce(o, 0x8d, 2, 0);
        break;
    default:
        Unk_020102ec_startAnimOnce(o, 0x8b, 2, 0);
        break;
    }
    r->unk_04_b = 0;
    Unk_02006d14_setActionFlag(o, 9);
    Unk_02006d14_playSe(o, 0x7db);
}
}

namespace ns_02206e94 {
extern "C" s32 PlayerActor_NetTrip(Obj *o, s32 a) {
    return PlayerActor_RequestTrip(o, 6, a);
}
}

namespace ns_02206e94 {
extern "C" void PlayerActor_TripEffects(Obj *o) {
    u16 hh[2];
    V3 vb;
    V3 va;
    V3 out1;
    V3 out2;
    TwoLayerAnimModel_updateLayers((u8 *)&o->bodyModel);
    hh[0] = o->rotY;
    if (((Rec *)&o->actionWork)->unk_04_b == 0) {
        if (AnimFrameCtrl_hasPassedFrame((AnimFrameCtrl *)&o->bodyModel, 0xa) != 0) {
            PlayerActor_GetHeldItem(&hh[1], o);
            BOOL ok = FALSE;
            u32 ra = ((volatile u16 *)hh)[1];
            u32 rb = ((volatile u16 *)hh)[1];
            if (rb < 0x137c || ra > 0x137c) {
            } else {
                ok = TRUE;
            }
            if (ok) {
                s32 t = o->toolHandMtx.m[9];
                if (t == 0 && o->toolHandMtx.m[10] == 0 && o->toolHandMtx.m[11] == 0) {
                    V3 *pv = (V3 *)&o->position;
                    va.x = o->position.x;
                    va.y = pv->y;
                    va.z = pv->z;
                } else {
                    va.x = t;
                    va.y = o->toolHandMtx.m[10];
                    va.z = o->toolHandMtx.m[11];
                    WorldCurve_FromCurved(&va, &va);
                }
                Effect_Create(0x32, &va, 0, 0);
                PlayerActor_SetHoldableItem(0, o->sessionSlot);
            }
        }
        if (AnimFrameCtrl_hasPassedFrame((AnimFrameCtrl *)&o->bodyModel, 7) != 0) {
            PlayerActor_OffsetByAngle(&out1, o, (V3 *)&o->position, &hh[0], (u32)data_ov003_02230ad0);
            vb.x = out1.x;
            vb.y = out1.y;
            vb.z = out1.z;
            Effect_Create(0x39, &vb, (s32)&hh[0], 0);
        }
        if (AnimFrameCtrl_hasPassedFrame((AnimFrameCtrl *)&o->bodyModel, 9) != 0) {
            PlayerActor_OffsetByAngle(&out2, o, (V3 *)&o->position, &hh[0], (u32)data_ov003_02230ad8);
            vb.x = out2.x;
            vb.y = out2.y;
            vb.z = out2.z;
            Effect_Create(0x37, &vb, (s32)&hh[0], 0);
        }
    }
}
}

namespace ns_02206e94 {
extern "C" void PlayerActor_TripCheckEnd(Obj *o) {
    if (((Rec *)&o->actionWork)->unk_04_b == 1) {
        if (AnimFrameCtrl_isFinished((AnimFrameCtrl *)&o->bodyModel) != 0) {
            o->actionPriority = Unk_02007694_getActionDonePriority(o, o->action);
            PlayerActor_requestWait(o, 3, 1, -1);
            o->tripCooldown = 0x3c;
        }
    }
}
}

namespace ns_02206e94 {
extern "C" void PlayerActor_TripUpdate(Obj *o) {
    Rec *r = (Rec *)&o->actionWork;
    if (r->unk_04_b == 0) {
        s32 t = PlayerActor_DecreaseClamped(o->speed, 0, 0x7b);
        Unk_020102ec_setSpeed(o, &t);
        if (o->speed == 0) {
            if (AnimFrameCtrl_isFinished((AnimFrameCtrl *)&o->bodyModel) != 0) {
                switch (r->unk_00) {
                case 4:
                    HeldItemModel_PlayAnim((u8 *)&o->heldItemModel, 8, 3, 0);
                    Unk_020102ec_startAnimOnce(o, 0x8e, 3, 0);
                    break;
                case 3:
                    HeldItemModel_PlayAnim((u8 *)&o->heldItemModel, 0x1e, 3, 0);
                    Unk_020102ec_startAnimOnce(o, 0x8e, 3, 0);
                    break;
                case 10:
                    Unk_020102ec_startAnimOnce(o, 0x8e, 3, 0);
                    break;
                default:
                    Unk_020102ec_startAnimOnce(o, 0x8c, 3, 0);
                    break;
                }
                r->unk_04_b = 1;
                if (CommManager_isLocalSlot(gCommManager, o->sessionSlot) != 0) {
                    void *p = PlayerData_GetCurrent();
                    if (p != 0) {
                        if (PlayerData_testFlag(p, 0x17) != 0) {
                            PlayerData_setFlag(p, 0x1a);
                        }
                    }
                }
            }
        }
    }
}
}

namespace ns_02206e94 {
extern "C" void PlayerActor_MainTrip(Obj *o) {
    PlayerActor_TripUpdate(o);
    PlayerActor_TripEffects(o);
    Unk_020102ec_moveWithCollision(o);
    Unk_020102ec_updateBodyCollider(o);
    ns_0220743c::PlayerActor_TripCheckEnd(o);
}
}

namespace ns_02206e94 {
extern "C" s32 PlayerActor_RequestAct72(Obj *o, s32 a, s32 b) {
    Msg m;
    _ZN19PlayerActionRequest6assignEiis(&m, 0x72, a, b);
    s32 r = PlayerActor_pushRequest(o, &m);
    return r;
}
}

namespace ns_02206e94 {
extern "C" s32 PlayerActor_SetupAct72(Obj *o) {
    Unk_020102ec_startAnimOnce(o, 0x9c, 3, 0);
    if (CommManager_isLocalSlot(gCommManager, o->sessionSlot) != 0) {
        Sky_WishOnShootingStar();
    }
}
}

namespace ns_02206e94 {
extern "C" s32 PlayerActor_NetAct72(Obj *o, s32 a) {
    return PlayerActor_RequestAct72(o, 6, a);
}
}

namespace ns_02206e94 {
extern "C" void PlayerActor_Act72Decelerate(Obj *o) {
    if (o->speed != 0) {
        s32 t = PlayerActor_DecreaseClamped(o->speed, 0, 0x171);
        Unk_020102ec_setSpeed(o, &t);
    }
}
}

namespace ns_02206e94 {
extern "C" void PlayerActor_Act72CheckEnd(Obj *o) {
    Unk_02006d14_turnToCamera(o, 0x59a);
    if (AnimFrameCtrl_isFinished((AnimFrameCtrl *)&o->bodyModel) != 0) {
        o->actionPriority = Unk_02007694_getActionDonePriority(o, o->action);
        PlayerActor_requestWait(o, 3, 1, -1);
    }
    if (CommManager_isLocalSlot(gCommManager, o->sessionSlot) != 0) {
        if (((Unk_ov003_02206e94_Bits *)&o->bodyModel.curFrame)->mid >= 0x1a) {
            PlayerActor_ResumeWalkOrIdle(o);
        }
    }
}
}

namespace ns_02206e94 {
extern "C" void PlayerActor_MainAct72(Obj *o) {
    Unk_020102ec_advanceAnim(o);
    Unk_020102ec_moveWithCollision(o);
    Unk_020102ec_updateBodyCollider(o);
    PlayerActor_Act72Decelerate(o);
    ns_022072fc::PlayerActor_Act72CheckEnd(o);
}
}

namespace ns_02206e94 {
extern "C" s32 PlayerActor_RequestPitfallFall(Obj *o, s32 *p, s32 b, s32 c) {
    Msg m;
    Unk_ov003_022072b8_P &q = *(Unk_ov003_022072b8_P *)m.unk_0c_b;
    _ZN19PlayerActionRequest6assignEiis(&m, 0x73, b, c);
    q.a = p[0];
    q.b = p[1];
    s32 r = PlayerActor_pushRequest(o, &m);
    return r;
}
}

namespace ns_02206e94 {
extern "C" void PlayerActor_PitfallFallSetNetData(u8 *p, u8 a, u8 b) {
    p[0] = a;
    p[1] = b;
}
}

namespace ns_02206e94 {
extern "C" void PlayerActor_PitfallFallGetNetData(u8 *s, u8 *a, u8 *b) {
    *a = s[0];
    *b = s[1];
}
}

namespace ns_02206e94 {
extern "C" s32 PlayerActor_SetupPitfallFall(Obj *o, u8 *a) {
    Unk_ov003_022072b8_P *q = (Unk_ov003_022072b8_P *)(a + 0xc);
    V3 v;
    Rec *r = (Rec *)&o->actionWork;
    s32 c0 = q->a;
    s32 c1 = q->b;
    FieldPos_FromUnitCenter(&v, c0, c1);
    ((Rec *)&o->actionWork)->unk_00 = v.x;
    r->unk_04 = v.z;
    r->unk_08 = -1;
    Unk_020102ec_startAnim(o, 0x90, 3, 0);
    if (Unk_02006d14_getHeldToolKind(o) == 4) {
        HeldItemModel_PlayAnim((u8 *)&o->heldItemModel, 0xf, 3, 0);
    }
    PlayerActor_PitfallFallSetNetData(o->netData.bytes, c0, c1);
    Unk_02006d14_playSe(o, 0x7ee);
}
}

namespace ns_02206e94 {
extern "C" s32 PlayerActor_NetPitfallFall(Obj *o, s32 a) {
    u8 b[2];
    s32 p[2];
    PlayerActor_PitfallFallGetNetData(o->netData.bytes, &b[0], &b[1]);
    p[0] = b[0];
    p[1] = b[1];
    return PlayerActor_RequestPitfallFall(o, p, 6, a);
}
}

namespace ns_02206e94 {
extern "C" void PlayerActor_EndPitfallFall(Obj *o, s32 a) {
    Rec *r = (Rec *)&o->actionWork;
    VecFx32CtorDtor v;
    s32 z = r->unk_04;
    s32 y = o->position.y;
    s32 x = r->unk_00;
    v.x = x;
    v.y = y;
    v.z = z;
    V3 *pw = (V3 *)&o->position;
    pw->x = v.x;
    pw->y = v.y;
    pw->z = v.z;
    if (Unk_02006d14_testActionFlag(o, 0x12) != 0) {
        if (a == 0x74 || a == 0x75) {
            V3 t;
            V3 *pv = (V3 *)&o->position;
            t.x = o->position.x;
            t.y = pv->y;
            t.z = pv->z;
            FieldItemFx_StartPitfallHole(o->sessionSlot, &t);
        }
        Unk_02006d14_clearActionFlag(o, 0x12);
    }
    if (a != 0x74 && a != 0x75) {
        V3 t;
        V3 *pv = (V3 *)&o->position;
        t.x = o->position.x;
        t.y = pv->y;
        t.z = pv->z;
        FieldItemFx_StartPitfallClose(o->sessionSlot, &t);
    }
    if (a != 0x74) {
        s32 h = r->unk_08;
        if (h != -1) {
            Effect_End(h);
        }
    }
}
}

namespace ns_02206e94 {
extern "C" s32 PlayerActor_PitfallFallEffect(Obj *o) {
    Unk_020102ec_advanceAnim(o);
    s32 *p = (s32 *)&o->actionWorkRaw[8]; // TripPitfallWork.unk_08
    s32 z = 0;
    if (*p == -1) {
        *p = Effect_Create(0x4c, (u8 *)&o->headTopPos, z, z);
    } else {
        Effect_SetPosition(*p, (u8 *)&o->headTopPos, z, z);
    }
    Unk_02006d14_playSeAt(o, 0x8a, (V3 *)&o->position);
}
}

namespace ns_02206e94 {
extern "C" void PlayerActor_PitfallFallUpdate(Obj *o) {
    Rec *r = (Rec *)&o->actionWork;
    if (o->animId == 0x90) {
        volatile V3 v;
        s32 z = r->unk_04;
        s32 x = r->unk_00;
        v.x = x;
        v.y = 0;
        v.z = z;
        PlayerActor_StepTowardPose(o, x, z, o->rotY);
        V3 &pv = (*(V3 *)&o->position);
        s32 pz = pv.z;
        s32 px = pv.x;
        if (px == v.x && pz == v.z) {
            o->bodyModel.playMode = 1;
        } else {
            goto end;
        }
    }
    if (AnimFrameCtrl_isFinished((AnimFrameCtrl *)&o->bodyModel) != 0) {
        if (o->animId == 0x91) {
            PlayerActor_RequestPitfallStruggle(o, r->unk_08, 6, -1);
            Unk_02006d14_setActionFlag(o, 9);
        } else {
            struct { V3 pad; V3 b; } l;
            Unk_020102ec_startAnimOnce(o, 0x91, 3, 0);
            V3 *pv = (V3 *)&o->position;
            l.b.x = o->position.x;
            l.b.y = pv->y;
            l.b.z = pv->z;
            GroundInfoBase x;
            GroundInfo_initAtPos(&x, &l.b, 0, 0);
            V3 c;
            if (x.attr == 0x13) {
                Effect_PlayById(0x8f, &l.b, 0, 0);
            } else {
                Effect_PlayById(0x8e, &l.b, 0, 0);
            }
            Unk_02006d14_playSe(o, 0x7e8);
            Unk_02006d14_setActionFlag(o, 9);
            c.x = l.b.x;
            c.y = l.b.y;
            c.z = l.b.z;
            FieldItemFx_StartPitfallHole(o->sessionSlot, &c);
            Unk_02006d14_clearActionFlag(o, 0x12);
            if (Unk_02006d14_getHeldToolKind(o) == 4) {
                HeldItemModel_PlayAnim((u8 *)&o->heldItemModel, 0x10, 3, 1);
            }
            GroundInfo_Destruct(&x);
        }
    }
end:;
}
}

namespace ns_02206e94 {
extern "C" void PlayerActor_MainPitfallFall(Obj *o) {
    PlayerActor_PitfallFallEffect(o);
    ns_02206fc4::PlayerActor_PitfallFallUpdate(o);
}
}

namespace ns_02206e94 {
extern "C" s32 PlayerActor_RequestPitfallStruggle(Obj *o, s32 a, s32 b, s32 c) {
    Msg m;
    _ZN19PlayerActionRequest6assignEiis(&m, 0x74, b, c);
    (*(VecFx32 *)m.unk_0c_b).x = a;
    s32 r = PlayerActor_pushRequest(o, &m);
    return r;
}
}

namespace ns_02206e94 {
extern "C" void PlayerActor_SetupPitfallStruggle(Obj *o, s32 *a) {
    s32 t;
    Unk_020102ec_startAnim(o, 0x92, 3, 0);
    o->bodyModel.frameStep = 0x800;
    t = a[3];
    Rec *r = (Rec *)&o->actionWork;
    r->unk_04 = 0x800;
    r->unk_08 = 0x800;
    r->unk_0c = 0;
    r->unk_10 = 0;
    ((Rec *)&o->actionWork)->unk_00 = PlayerActor_getInputMagnitude(o);
    r->inputAngle = PlayerActor_getInputAngleRaw(o);
    r->effectHandle = t;
    Unk_02006d14_clearActionFlag(o, 9);
    if (Unk_02006d14_getHeldToolKind(o) == 4) {
        HeldItemModel_PlayAnim((u8 *)&o->heldItemModel, 0x11, 3, 0);
        HeldItemModel_SetAnimSpeed((u8 *)&o->heldItemModel, 0x800);
    }
}
}

namespace ns_02206e94 {
extern "C" s32 PlayerActor_NetPitfallStruggle(Obj *o, s32 a) {
    s32 st = o->action;
    if (st != 0x73) {
        if (st == 0x74) {
            o->netSeq = a;
        } else {
            PlayerActor_RequestPitfallStruggle(o, -1, 6, a);
        }
    }
}
}

namespace ns_02206e94 {
extern "C" void PlayerActor_EndPitfallStruggle(Obj *o, s32 a) {
    if (((Rec *)&o->actionWork)->effectHandle != -1) {
        Effect_End(((Rec *)&o->actionWork)->effectHandle);
    }
    if (a != 0x75) {
        V3 v;
        V3 *pv = (V3 *)&o->position;
        v.x = o->position.x;
        v.y = pv->y;
        v.z = pv->z;
        FieldItemFx_StartPitfallClose(o->sessionSlot, &v);
    }
}
}

namespace ns_02206574 {
extern "C" void PlayerActor_PitfallStruggleUpdate(Obj *o) {
    PitfallStruggleWork *r6 = (PitfallStruggleWork *)&o->actionWork;
    s32 *r4 = &r6->f4;
    if (r6->fc >= 10) {
        *r4 = *r4 + 0x1333;
    } else {
        *r4 = *r4 - 0x4cd;
    }
    s32 v = *r4;
    if (v > 0x2400) {
        *r4 = 0x2400;
    } else if (v < r6->f8) {
        *r4 = r6->f8;
    }
    o->bodyModel.frameStep = *r4;
    if (Unk_02006d14_getHeldToolKind(o) == 4) {
        HeldItemModel_SetAnimSpeed((u8 *)&o->heldItemModel, *r4);
    }
    Unk_020102ec_advanceAnim(o);
    s32 *r4b = &r6->f18;
    s32 z = 0;
    if (r6->f18 == -1) {
        *r4b = Effect_Create(0x4c, (V3 *)(u8 *)&o->headTopPos, (void *)z, z);
    } else {
        Effect_SetPosition(r6->f18, (u8 *)&o->headTopPos, (void *)z, z);
    }
    Unk_02006d14_playSeAt(o, 0x8a, &o->position);
}
}

namespace ns_02206574 {
extern "C" void PlayerActor_PitfallStruggleInput(Obj *o) {
    if (CommManager_isLocalSlot(gCommManager, o->sessionSlot)) {
        PitfallStruggleWork *p = (PitfallStruggleWork *)&o->actionWork;
        s32 *q = &p->f10;
        s32 r4 = p->f0;
        s32 h = p->f14;
        s32 sp10;
        V3 a, b, c, d;
        b.y = 0;
        a.y = 0;
        s32 idx = (h >> 4) * 2;
        a.x = func_01ffcb0c(data_02135f44[idx], r4);
        a.z = func_01ffcb0c(data_02135f44[idx + 1], r4);
        s32 s4 = PlayerActor_getInputMagnitude(o);
        s32 s8 = PlayerActor_getInputAngleRaw(o);
        s32 i2 = ((u16)s8 >> 4) * 2;
        b.x = func_01ffcb0c(data_02135f44[i2], s4);
        b.z = func_01ffcb0c(data_02135f44[i2 + 1], s4);
        ((PitfallStruggleWork *)&o->actionWork)->f0 = s4;
        p->f14 = s8;
        r4 = 0;
        Vec_Sub(&d, &a, &b);
        c.x = d.x;
        c.y = d.y;
        c.z = d.z;
        if (VEC_Mag(&c) >= 0x59a) {
            r4 = FX_Div(func_01ffcb0c(VEC_Mag(&c), 0x6400), 0x59a);
        }
        s32 t = 0;
        u32 k = gPad.b;
        if (k & 1) t += 0x14;
        if (k & 2) t += 0x14;
        if (k & 0x400) t += 0x14;
        if (k & 0x800) t += 0x14;
        if (k & 0x200) t += 0x14;
        if (k & 0x100) t += 0x14;
        if (k & 8) t += 0x14;
        if (k & 4) t += 0x14;
        r4 += t << 12;
        if (r4 == 0) {
            r4 += 0x2000;
        }
        *q = *q + r4;
        p->fc = r4 >> 12;
        if (*q < 0) {
            *q = 0;
        }
        if (r4 != 0) {
            if (s4 != 0 || t != 0) {
                Unk_02006d14_playSe(o, 0x7ef);
            }
            p->f8 = FX_Div(func_01ffcb0c(func_01ffcb0c(0x1c00, *q), 0xa66), 0x190000) + 0x800;
        }
        if (Unk_02006d14_testActionFlag(o, 0xb) != 0 || p->f10 >= 0x190000) {
            PlayerActor_RequestPitfallClimbOut(o, 6, -1);
        }
    }
}
}

namespace ns_02206574 {
extern "C" void PlayerActor_MainPitfallStruggle(Obj *o) {
    Unk_ov003_02206be8_Ns::PlayerActor_PitfallStruggleUpdate(o);
    Unk_020102ec_updateBodyCollider(o);
    Unk_ov003_02206be8_Ns::PlayerActor_PitfallStruggleInput(o);
}
}

namespace ns_02206574 {
extern "C" s32 PlayerActor_RequestPitfallClimbOut(Obj *o, s32 a, s32 b) {
    Msg m;
    _ZN19PlayerActionRequest6assignEiis(&m, 0x75, a, b);
    s32 r = PlayerActor_pushRequest(o, &m);
    return r;
}
}

namespace ns_02206574 {
extern "C" void PlayerActor_SetupPitfallClimbOut(Obj *o) {
    V3 pos;
    u32 buf[0x10];
    V3 pos2;
    s32 st = Unk_02006d14_getHeldToolKind(o);
    if (st == 10 || (u32)(st - 3) <= 1) {
        Unk_020102ec_startAnimOnce(o, 0x94, 3, 0);
        if (Unk_02006d14_getHeldToolKind(o) == 4) {
            HeldItemModel_PlayAnim((u8 *)&o->heldItemModel, 0x12, 3, 1);
        }
    } else {
        Unk_020102ec_startAnimOnce(o, 0x93, 3, 0);
    }
    V3 *pv = (V3 *)&o->position;
    pos.x = o->position.x;
    pos.y = pv->y;
    pos.z = pv->z;
    GroundInfo_initAtPos(buf, &pos, 0, 0);
    if (buf[0x34 / 4] == 0x13) {
        Effect_PlayById(0x91, &pos, 0, 0);
    } else {
        Effect_PlayById(0x90, &pos, 0, 0);
    }
    Unk_02006d14_setActionFlag(o, 9);
    pv = (V3 *)&o->position;
    pos2.x = o->position.x;
    pos2.y = pv->y;
    pos2.z = pv->z;
    FieldItemFx_StartPitfallClose(o->sessionSlot, &pos2);
    Unk_02006d14_playSe(o, 0x7e9);
    GroundInfo_Destruct(buf);
}
}

namespace ns_02206574 {
extern "C" s32 PlayerActor_NetPitfallClimbOut(Obj *o, s32 a) {
    return PlayerActor_RequestPitfallClimbOut(o, 6, a);
}
}

namespace ns_02206574 {
extern "C" s32 PlayerActor_PitfallClimbOutCheckEnd(Obj *o) {
    if (AnimFrameCtrl_isFinished((AnimFrameCtrl *)&o->bodyModel)) {
        o->actionPriority = Unk_02007694_getActionDonePriority(o, o->action);
        u16 k = 3;
        if (Unk_02006d14_getHeldToolKind(o) == 4) {
            k *= (u32)k;
        }
        PlayerActor_requestWait(o, k, 1, -1);
    }
}
}

namespace ns_02206574 {
extern "C" void PlayerActor_MainPitfallClimbOut(Obj *o) {
    Unk_020102ec_advanceAnim(o);
    Unk_020102ec_updateBodyCollider(o);
    PlayerActor_PitfallClimbOutCheckEnd(o);
}
}

namespace ns_02206574 {
extern "C" s32 PlayerActor_RequestBeeSting(Obj *o, s32 a, s32 b) {
    Msg m;
    _ZN19PlayerActionRequest6assignEiis(&m, 0x78, a, b);
    if (PlayerActor_pushRequest(o, &m)) {
        Unk_02006d14_setActionFlag(o, 7);
        return TRUE;
    }
    return FALSE;
}
}

namespace ns_02206574 {
extern "C" void PlayerActor_SetupBeeSting(Obj *o) {
    Unk_020102ec_startAnimOnce(o, 0x71, 3, 0);
    *(u8 *)&o->actionWork = 0;
    if (Unk_02006d14_getHeldToolKind(o) == 3) {
        HeldItemModel_PlayAnim((u8 *)&o->heldItemModel, 0x13, 3, 0);
    }
    Unk_02006d14_clearActionFlag(o, 0x1a);
    Bgm_Release(0x3f);
    Bgm_RequestSilence(0x19, 0xf, 0);
}
}

namespace ns_02206574 {
extern "C" void PlayerActor_NetBeeSting() {
}
}

extern "C" s32 data_ov003_02230af0 = 0xccd;
extern "C" s32 sFishEscapeSpeed = -0x419;
extern "C" s32 data_ov003_02230ae8 = 0x10cd;
extern "C" s32 sFishCastFarDist = 0x6000;
extern "C" s32 data_ov003_02230ae0 = 0x2000;
extern "C" s32 data_ov003_02230adc = 0x2d9a;
extern "C" s32 data_ov003_02230ad8 = 0x800;
extern "C" s32 data_ov003_02230ad4 = 0x2d9a;
extern "C" s32 data_ov003_02230ad0 = 0x1000;
extern "C" s32 sFishCastNearDist = 0x5000;
extern "C" s32 data_ov003_02230ac8 = 1;
extern "C" s32 data_ov003_02230ac4 = 1;
extern "C" s32 data_ov003_02230ac0 = 1;
extern "C" const s32 sFieldFrontDist = 0x2000;

namespace ns_02206574 {
extern "C" void PlayerActor_BeeStingUpdate(Obj *o) {
    Unk_ov003_022067c4_Pad pad;

    switch (o->animId) {
    case 0x71:
        if (AnimFrameCtrl_isFinished((AnimFrameCtrl *)&o->bodyModel)) {
            Unk_020102ec_startAnimOnce(o, 0x72, 0, 0);
        }
        break;
    case 0x72:
        Unk_02006d14_turnAwayFromCamera(o, 0x3ae);
        if (AnimFrameCtrl_isFinished((AnimFrameCtrl *)&o->bodyModel)) {
            Unk_020102ec_startAnimOnce(o, 0x73, 0, 0);
        }
        break;
    case 0x73:
        if (AnimFrameCtrl_isFinished((AnimFrameCtrl *)&o->bodyModel)) {
            Unk_02006d14_playSe(o, 0x817);
            Unk_020102ec_startAnimOnce(o, 0x74, 0, 0);
            s32 r5 = PlayerData_GetCurrent();
            if (r5) {
                PlayerData_SetStungFace(r5, 1);
                u8 *q = PlayerData_getFaceType(r5) + 0x10;
                PlayerFaceTexRef_load((u8 *)&o->faceTex, q);
                if (PlayerData_testFlag(r5, 0x17)) {
                    PlayerData_setFlag(r5, 0x19);
                }
            }
        }
        break;
    case 0x74:
        if (AnimFrameCtrl_isFinished((AnimFrameCtrl *)&o->bodyModel)) {
            Unk_020102ec_startAnimOnce(o, 0x75, 0, 0);
        }
        break;
    case 0x75: {
        u8 *p = (u8 *)&o->actionWork;
        s16 prev = o->rotY;
        Unk_02006d14_turnToCamera(o, 0x59a);
        if (prev != 0) {
            if (o->rotY == 0) {
                Bgm_ReleasePriority(0x19);
                Bgm_Request(0xd, 0x40, 0x7f, 1);
            }
        }
        switch (*p) {
        case 0:
            *p = 1;
            Character_attachTalkRequest(o, o);
            Unk_02006d14_setActionFlag(o, 0x11);
            MsgRequest_setFileName(&(TalkMsgRequest &)*o, "obj_etc_player");
            o->msgIndex = 0x14;
            o->window->nextState = 1;
            Camera_SetMode4();
        case 1:
            if (o->window) {
                if (o->window->state) {
                    *p = 2;
                }
            }
            break;
        case 2:
            if (o->window) {
                if (o->window->state == 0) {
                    Character_detachTalkRequest(o, o);
                    Unk_02006d14_clearActionFlag(o, 0x11);
                    TalkRequest_FinishPlayerMessage();
                    o->actionPriority = Unk_02007694_getActionDonePriority(o, o->action);
                    PlayerActor_requestWait(o, 3, 1, -1);
                    Unk_02006d14_clearActionFlag(o, 7);
                    Camera_SetModeDefault();
                    Bgm_Release(0x40);
                    Bgm_RequestSilence(0xc, 0xf, 5);
                }
            }
            break;
        }
        break;
    }
    }
}
}

namespace ns_02206574 {
extern "C" void PlayerActor_MainBeeSting(Obj *o) {
    Unk_020102ec_advanceAnim(o);
    Unk_020102ec_updateBodyCollider(o);
    PlayerActor_BeeStingUpdate(o);
}
}

namespace ns_02206574 {
extern "C" s32 PlayerActor_RequestAct80(Obj *o, s32 a, s32 b) {
    Msg m;
    _ZN19PlayerActionRequest6assignEiis(&m, 0x80, a, b);
    s32 r = PlayerActor_pushRequest(o, &m);
    return r;
}
}

namespace ns_02206574 {
extern "C" void PlayerActor_SetupAct80(Obj *o) {
    Unk_020102ec_startAnimOnce(o, 0x7b, 3, 0);
}
}

namespace ns_02206574 {
extern "C" s32 PlayerActor_NetAct80(Obj *o, s32 a) {
    return PlayerActor_RequestAct80(o, 6, a);
}
}

namespace ns_02206574 {
extern "C" void PlayerActor_EndAct80(Obj *o) {
    if (CommManager_isLocalSlot(gCommManager, o->sessionSlot)) {
        u16 *r = PlayerData_getHeldItem(PlayerData_GetBySessionSlot(o->sessionSlot));
        if (r) {
            Unk_02006d14_netSendClothesChange(o, 3, *r);
        }
    }
}
}

namespace ns_02206574 {
extern "C" s32 PlayerActor_Act80Update(Obj *o) {
    Unk_020102ec_advanceAnim(o);
    if (AnimFrameCtrl_hasPassedFrame((AnimFrameCtrl *)&o->bodyModel, 0xd)) {
        u16 t[2];
        s32 r = PlayerData_GetBySessionSlot(o->sessionSlot);
        t[0] = 0xfff1;
        PlayerData_setHeldItem(r, &t[0]);
        t[1] = 0xfff1;
        HeldItemModel_SetItem((u8 *)&o->heldItemModel, &t[1], 0);
        Unk_02006d14_playSe(o, 0x850);
        V3 v;
        s32 tz = o->toolHandMtx.m[11];
        s32 ty = o->toolHandMtx.m[10];
        s32 tx = o->toolHandMtx.m[9];
        v.x = tx;
        v.y = ty;
        v.z = tz;
        WorldCurve_FromCurved(&v, &v);
        Effect_Create(0x24, &v, &o->rotY, 0);
        Unk_02006d14_setActionFlag(o, 9);
    }
}
}

namespace ns_02206574 {
extern "C" s32 PlayerActor_Act80CheckEnd(Obj *o) {
    if (AnimFrameCtrl_isFinished((AnimFrameCtrl *)&o->bodyModel)) {
        u16 t = 0x137d;
        o->actionPriority = Unk_02007694_getActionDonePriority(o, o->action);
        if (CommManager_isLocalSlot(gCommManager, o->sessionSlot)) {
            s32 r4 = Pocket_FindItem(&t);
            if (r4 != -1) {
                Unk_02006d14_clearActionFlag(o, 0);
                PlayerActor_SetHoldableItem(0x15, o->sessionSlot);
                Pocket_RemoveItem(r4);
                PlayerActor_RequestStowItem(o, 2, 2, 0, 0, 0, 6, -1);
                return;
            }
        }
        PlayerActor_requestWait(o, 3, 1, -1);
    }
}
}

namespace ns_02206574 {
extern "C" void PlayerActor_MainAct80(Obj *o) {
    PlayerActor_Act80Update(o);
    Unk_020102ec_moveWithCollision(o);
    Unk_020102ec_updateBodyCollider(o);
    PlayerActor_Act80CheckEnd(o);
}
}

namespace ns_02206574 {
extern "C" s32 PlayerActor_RequestFirework(Obj *o, s32 a, s32 b) {
    Msg m;
    _ZN19PlayerActionRequest6assignEiis(&m, 0x81, a, b);
    s32 r = PlayerActor_pushRequest(o, &m);
    return r;
}
}

namespace ns_02205c28 {
extern "C" void PlayerActor_SetupFirework(Obj *o) {
    s32 *r2 = &o->actionWork;
    *r2 = -1;
    ((u8 *)r2)[4] = 0;
    ((u8 *)r2)[5] = 0x14;
    Unk_020102ec_startAnim(o, 0x7c, 9, 0);
    HeldItemModel_PlayAnim((u8 *)&o->heldItemModel, 0x28, 0, 1);
    if (CommManager_isLocalSlot(gCommManager, o->sessionSlot)) {
        Camera_SetMode4();
        BgmVolumeMixer_startFireworkDuck(data_021c1b3c + 0x1c4);
    }
}
}

namespace ns_02205c28 {
extern "C" s32 PlayerActor_NetFirework(Obj *o, s32 a) {
    return PlayerActor_RequestFirework(o, 6, a);
}
}

namespace ns_02205c28 {
extern "C" void PlayerActor_EndFirework(Obj *o) {
    if (CommManager_isLocalSlot(gCommManager, o->sessionSlot)) {
        u16 *r = PlayerData_getHeldItem(PlayerData_GetBySessionSlot(o->sessionSlot));
        if (r) {
            Unk_02006d14_netSendClothesChange(o, 3, *r);
        }
        Camera_SetModeDefault();
        BgmVolumeMixer_endFireworkDuck(data_021c1b3c + 0x1c4);
    }
    if (o->actionWork != -1) {
        Effect_End(o->actionWork);
    }
    V3 v;
    PlayerActor_GetFrontPoint(&v, o);
    sWateringActive = 0;
    sWateringPos.x = v.x;
    sWateringPos.y = v.y;
    sWateringPos.z = v.z;
}
}

namespace ns_02205c28 {
extern "C" void PlayerActor_FireworkUpdate(Obj *o) {
    Unk_020102ec_advanceAnim(o);
    s32 *r6 = &o->actionWork;
    u8 *r4 = (u8 *)r6 + 4;
    VecFx32Ctor v(o->heldItemJointMtx.m[9], o->heldItemJointMtx.m[10], o->heldItemJointMtx.m[11]);
    WorldCurve_FromCurved((V3 *)&v, (V3 *)&v);
    s32 z = 0;
    s32 m1 = ~z;
    if (o->actionWork == m1) {
        u16 t[2];
        (*r4)++;
        s32 cnt = *r4;
        if (cnt > 9) {
            if (cnt == 10) {
                V3 w;
                PlayerActor_GetHeldItem(&t[0], o);
                if (t[0] == 0x137f) {
                    Unk_02006d14_playSe(o, 0x85a);
                } else {
                    Unk_02006d14_playSe(o, 0x859);
                }
                PlayerActor_GetFrontPoint(&w, o);
                sWateringActive = 1;
                sWateringPos.x = w.x;
                sWateringPos.y = w.y;
                sWateringPos.z = w.z;
            }
            PlayerActor_GetHeldItem(&t[1], o);
            if (t[1] == 0x137f) {
                *r6 = Effect_Create(0x35, (V3 *)&v, &o->rotY, z);
            } else {
                *r6 = Effect_Create(0x36, (V3 *)&v, &o->rotY, z);
            }
        }
    } else {
        Effect_SetPosition(o->actionWork, (V3 *)&v, &o->rotY, 0);
    }
}
}

namespace ns_02205c28 {
extern "C" void PlayerActor_FireworkCheckEnd(Obj *o) {
    if (AnimFrameCtrl_isFinished(HeldItemModel_GetModel((u8 *)&o->heldItemModel) + 0x9c)) {
        u8 *q = (u8 *)&o->actionWork;
        u8 *r1 = q + 4;
        if (*r1 != 0) {
            *r1 = *r1 - 1;
        }
        if (*r1 == 0) {
            u8 *r2 = q + 5;
            if (*r2 != 0) {
                *r2 = *r2 - 1;
            }
            if (*r2 == 0) {
                u16 t[2];
                s32 r = PlayerData_GetBySessionSlot(o->sessionSlot);
                t[0] = 0xfff1;
                PlayerData_setHeldItem(r, &t[0]);
                t[1] = 0xfff1;
                HeldItemModel_SetItem((u8 *)&o->heldItemModel, &t[1], 0);
                o->actionPriority = Unk_02007694_getActionDonePriority(o, o->action);
                PlayerActor_requestWait(o, 9, 1, -1);
            }
        }
    }
}
}

namespace ns_02205c28 {
extern "C" void PlayerActor_MainFirework(Obj *o) {
    ovcall::PlayerActor_FireworkUpdate(o);
    Unk_020102ec_moveWithCollision(o);
    Unk_020102ec_updateBodyCollider(o);
    ovcall::PlayerActor_FireworkCheckEnd(o);
}
}

namespace ns_02205c28 {
extern "C" s32 PlayerActor_RequestAct82(Obj *o, s32 a, s32 b) {
    Msg m;
    _ZN19PlayerActionRequest6assignEiis(&m, 0x82, a, b);
    s32 r = PlayerActor_pushRequest(o, &m);
    return r;
}
}

namespace ns_02205c28 {
extern "C" void PlayerActor_SetupAct82(Obj *o) {
    o->actionWork = -1;
    Unk_020102ec_startAnimOnce(o, 0x7d, 3, 0);
    HeldItemModel_PlayAnim((u8 *)&o->heldItemModel, 0x2a, 0, 0);
    Unk_02006d14_playSe(o, 0x85d);
}
}

namespace ns_02205c28 {
extern "C" s32 PlayerActor_NetAct82(Obj *o, s32 a) {
    return PlayerActor_RequestAct82(o, 6, a);
}
}

namespace ns_02205c28 {
extern "C" void PlayerActor_EndAct82(Obj *o) {
    if (CommManager_isLocalSlot(gCommManager, o->sessionSlot)) {
        u16 *r = PlayerData_getHeldItem(PlayerData_GetBySessionSlot(o->sessionSlot));
        if (r) {
            Unk_02006d14_netSendClothesChange(o, 3, *r);
        }
    }
    if (o->actionWork != -1) {
        Effect_End(o->actionWork);
    }
}
}

namespace ns_02205c28 {
extern "C" void PlayerActor_Act82Update(Obj *o) {
    Unk_020102ec_advanceAnim(o);
    s32 f = ((Unk_ov003_02205c90_Bits *)&o->bodyModel.curFrame)->f;
    if (f >= 0xe && f <= 0x18) {
        s32 *r4 = &o->actionWork;
        VecFx32Ctor v(o->toolHandMtx.m[9], o->toolHandMtx.m[10], o->toolHandMtx.m[11]);
        WorldCurve_FromCurved((V3 *)&v, (V3 *)&v);
        if (o->actionWork == -1) {
            *r4 = Effect_Create(0x31, (V3 *)&v, &o->rotY, 0);
        } else {
            Effect_SetPosition(o->actionWork, (V3 *)&v, &o->rotY, 0);
        }
    }
    if (AnimFrameCtrl_hasPassedFrame((AnimFrameCtrl *)&o->bodyModel, 0x18)) {
        u16 t[2];
        s32 r = PlayerData_GetBySessionSlot(o->sessionSlot);
        t[0] = 0xfff1;
        PlayerData_setHeldItem(r, &t[0]);
        t[1] = 0xfff1;
        HeldItemModel_SetItem((u8 *)&o->heldItemModel, &t[1], 0);
    }
}
}

namespace ns_02205c28 {
extern "C" void PlayerActor_Act82CheckEnd(Obj *o) {
    if (AnimFrameCtrl_isFinished((AnimFrameCtrl *)&o->bodyModel)) {
        o->actionPriority = Unk_02007694_getActionDonePriority(o, o->action);
        PlayerActor_requestWait(o, 3, 1, -1);
    }
    if (CommManager_isLocalSlot(gCommManager, o->sessionSlot)) {
        u32 f = ((Unk_ov003_02205c90_Bits *)&o->bodyModel.curFrame)->f;
        if (f >= 0x18) {
            PlayerActor_ResumeWalkOrIdle(o);
        }
    }
}
}

namespace ns_02205c28 {
extern "C" void PlayerActor_MainAct82(Obj *o) {
    ovcall::PlayerActor_Act82Update(o);
    Unk_020102ec_moveWithCollision(o);
    Unk_020102ec_updateBodyCollider(o);
    ovcall::PlayerActor_Act82CheckEnd(o);
}
}

namespace ns_02205c28 {
extern "C" s32 PlayerActor_RequestThrowBottle(Obj *o, s32 a, s32 b) {
    Msg m;
    _ZN19PlayerActionRequest6assignEiis(&m, 0x89, a, b);
    s32 r = PlayerActor_pushRequest(o, &m);
    return r;
}
}

namespace ns_02205c28 {
extern "C" void PlayerActor_SetupThrowBottle(Obj *o) {
    Unk_020102ec_startAnimOnce(o, 0x8f, 0, 0);
    Unk_02006d14_playSe(o, 0x4f);
}
}

namespace ns_02205c28 {
extern "C" s32 PlayerActor_NetThrowBottle(Obj *o, s32 a) {
    return PlayerActor_RequestThrowBottle(o, 6, a);
}
}

namespace ns_02205c28 {
extern "C" void PlayerActor_ThrowBottleShowItem(Obj *o) {
    Unk_020102ec_advanceAnim(o);
    if (o->animId == 0x8f) {
        s32 f = ((Unk_ov003_02205c90_Bits *)&o->bodyModel.curFrame)->f;
        if (f >= 6 && f <= 0x19) {
            Unk_02006d14_setActionFlag(o, 0xd);
            o->getHeldItemPos((VecFx32 *)(u8 *)&o->shownItemPosX);
            o->shownItem = 0x1520;
            s32 v = (f - 6) * 0x333;
            if (f >= 0xb) {
                v = 0x1000;
            }
            o->shownItemScaleX = v;
            o->shownItemScaleY = v;
            o->shownItemScaleZ = v;
            if (f == 0x19) {
                Unk_02006d14_clearActionFlag(o, 0xd);
                BottleThrow_Start(o->sessionSlot);
            }
        }
    }
}
}

namespace ns_02205c28 {
extern "C" void PlayerActor_ThrowBottleLook(Obj *o) {
    if (AnimFrameCtrl_isFinished((AnimFrameCtrl *)&o->bodyModel)) {
        Unk_020102ec_startAnim(o, 0, 3, 3);
    } else if (o->animId == 0) {
        if (BottleThrow_IsActive(o->sessionSlot) == 0) {
            PlayerActor_SetHeadTilt(0, 0, 4);
            o->actionPriority = Unk_02007694_getActionDonePriority(o, o->action);
            Unk_02007694_requestAct05(o, 3, 5, -1);
        } else {
            V3 a, b;
            V3 *q = BottleThrow_GetPos(o->sessionSlot);
            a.x = q->x;
            a.y = q->y;
            a.z = q->z;
            V3 *pv = (V3 *)&o->position;
            b.x = pv->x;
            b.y = pv->y;
            b.z = pv->z;
            s32 yaw = Math_Atan2(a.x - b.x, a.z - b.z);
            s32 h = Math_Atan2(a.y - b.y, Vec_DistXZ(&a, &b));
            if (h > 0) {
                h = 0;
            }
            PlayerActor_SetHeadTilt(h, 0, 4);
            s16 tmp = o->rotY;
            PlayerActor_TurnAngle(&tmp, yaw);
            Unk_020102ec_setAngleY(o, &tmp);
        }
    }
}
}

namespace ns_02205c28 {
extern "C" void PlayerActor_MainThrowBottle(Obj *o) {
    ovcall::PlayerActor_ThrowBottleShowItem(o);
    Unk_020102ec_updateBodyCollider(o);
    ovcall::PlayerActor_ThrowBottleLook(o);
}
}

namespace ns_02205c28 {
extern "C" s32 PlayerActor_RequestFishRelease(Obj *o, u8 *p, u32 c, s32 id, s32 e) {
    Msg m;
    _ZN19PlayerActionRequest6assignEiis(&m, 0x8f, id, *(s16 *)&e);
    u8 v0 = *(volatile u8 *)p;
    Unk_ov003_02205e58_Pair &q = (*(Unk_ov003_02205e58_Pair *)m.unk_0c_b);
    q.a = v0;
    q.b = c;
    s32 r = PlayerActor_pushRequest(o, &m);
    return r;
}
}

namespace ns_02205c28 {
extern "C" void PlayerActor_FishReleaseSetNetData(u8 *p, u32 a, u32 b) {
    p[0] = a;
    p[1] = b;
}
}

namespace ns_02205c28 {
extern "C" void PlayerActor_FishReleaseGetNetData(u8 *src, u8 *a, u8 *b) {
    *a = src[0];
    *b = src[1];
}
}

namespace ns_02205c28 {
extern "C" void PlayerActor_SetupFishRelease(Obj *o, Msg *r) {
    u8 x, y;
    u8 *p;
    Unk_ov003_02205e58_Pair *q = (Unk_ov003_02205e58_Pair *)r->unk_0c_b;
    p = (u8 *)&o->actionWork;
    x = q->a;
    y = q->b;
    if (y == 0) {
        Unk_020102ec_startAnim(o, 0, 3, 3);
    }
    p[0] = x;
    p[1] = y;
    PlayerActor_FishReleaseSetNetData(o->netData.bytes, x, y);
}
}

namespace ns_02205c28 {
extern "C" s32 PlayerActor_NetFishRelease(Obj *o, s32 a) {
    u8 buf[2];
    PlayerActor_FishReleaseGetNetData(o->netData.bytes, &buf[0], &buf[1]);
    return PlayerActor_RequestFishRelease(o, &buf[0], buf[1], 6, a);
}
}

namespace ns_02205c28 {
extern "C" void PlayerActor_FishReleaseLook(Obj *o) {
    u8 *p = (u8 *)&o->actionWork;
    if (p[0] != 0) {
        s32 t = o->sessionSlot;
        if (FishCatch_IsActive(t)) {
            V3 a, b;
            V3 *q = FishCatch_GetPos(t);
            a.x = q->x;
            a.y = q->y;
            a.z = q->z;
            V3 *pv = (V3 *)&o->position;
            b.x = pv->x;
            b.y = pv->y;
            b.z = pv->z;
            b.y = b.y + 0x1b33;
            s32 yaw = Math_Atan2(a.x - b.x, a.z - b.z);
            s32 h = Math_Atan2(a.y - b.y, Vec_DistXZ(&a, &b));
            if (h >= 0x1800) {
                h = 0x1800;
            } else if (h <= -0x1000) {
                h = -0x1000;
            }
            s32 d = (s16)(yaw - o->rotY);
            if ((u16)(d + 0x2aaa) >= 0x5554) {
                PlayerActor_SetHeadTilt(0, 0, o->sessionSlot);
            } else {
                PlayerActor_ApproachAngle(&o->headPitch, h, 0x400, 0x1770000, 0xc0000);
                PlayerActor_ApproachAngle(&o->headYaw, d, 0x400, 0x1770000, 0xc0000);
            }
        } else {
            PlayerActor_SetHeadTilt(0, 0, o->sessionSlot);
            o->actionPriority = Unk_02007694_getActionDonePriority(o, o->action);
            if (p[1] != 0) {
                Unk_02007694_requestAct05(o, 3, 5, -1);
            } else {
                PlayerActor_requestWait(o, 3, 1, -1);
            }
        }
    }
}
}

namespace ns_02205c28 {
extern "C" void PlayerActor_MainFishRelease(Obj *o) {
    Unk_020102ec_advanceAnim(o);
    if (Unk_02006d14_netFollowTransform(o)) {
        Unk_020102ec_moveWithCollision(o);
    }
    Unk_020102ec_updateBodyCollider(o);
    ovcall::PlayerActor_FishReleaseLook(o);
}
}

namespace ns_02205c28 {
extern "C" s32 PlayerActor_ResumeWalkOrIdle(Obj *o) {
    if (Unk_02006d14_getTargetWalkSpeed(o) > 0) {
        o->actionPriority = Unk_02007694_getActionDonePriority(o, o->action);
        PlayerActor_requestWalk(o, 0, 1, -1);
    } else {
        Unk_02006d14_tryInteract(o);
    }
}
}

namespace ns_022052f4 {
extern "C" BOOL PlayerActor_FieldInteractFront(Obj *o, s32 *pa) {
    V3 v;
    if (o->inputMode == 1) {
        V3 t;
        PlayerActor_OffsetByAngle(&t, o, (V3 *)&o->position, &o->rotY, sFieldFrontDist);
        v.x = t.x;
        v.y = t.y;
        v.z = t.z;
        if (Unk_02006d14_isPosInReach(o, &v, 0xd) && Unk_02006d14_startFieldQuery(o, &v, 2, *pa) && Unk_02006d14_requestByFieldAnswer(o, &v, 0)) return TRUE;
    } else {
        v.x = o->targetPos.x;
        v.y = o->targetPos.y;
        v.z = o->targetPos.z;
        if (Unk_02006d14_isPosInReach(o, &v, 0xd) && Unk_02006d14_startFieldQuery(o, &v, 2, *pa) && Unk_02006d14_requestByFieldAnswer(o, &v, 0)) return TRUE;
    }
    return FALSE;
}
}

namespace ns_022052f4 {
extern "C" s32 PlayerActor_AxeClassifyTarget(Obj *o, u8 *pa, u8 *pb, s32 *out) {
    s32 r = 1;
    s32 a, b, t;
    V3 pos;
    if (*pa != 0 && PlayerActor_CheckToolHitActor(o)) return 4;
    PlayerActor_GetFrontPoint(&pos, o);
    FieldPos_ToUnit(&a, &b, &pos);
    if (out != NULL) {
        out[0] = a;
        out[1] = b;
    }
    s32 res = Ground_GetHeightAt(&pos, &t, 0x19);
    if (t == 4) goto aac;
    if (t != 6) goto b42;
    if (gSceneBlockMap != NULL) {
        u16 *p = BlockMap_GetItemPtrAtPos(gSceneBlockMap, &pos, 0);
        BOOL f3 = TRUE, f2 = TRUE, f1 = TRUE, f0 = FALSE;
        u32 v = *p;
        if (v >= 0x2b && v <= 0x2e) f0 = TRUE;
        if (!f0) { if (v < 0xff || v > 0x102) f1 = FALSE; }
        if (!f1) { if (v < 0x62 || v > 0x65) f2 = FALSE; }
        if (!f2) { if (v < 0xd0 || v > 0xd3) f3 = FALSE; }
        if (f3) return 1;
    }
aac:
    if (*pa != 0) {
        if (res < 0x1000) return 1;
        V2 q;
        q.x = 0;
        q.y = 0;
        q.x = a;
        q.y = b;
        switch (Unk_02006d14_startUnitItemQuery(o, &q, 1, *pb)) {
        case 0: return 5;
        case 1: return 0;
        case 2: return 4;
        }
    }
    if (o->fieldAnswer == 1) {
        switch (o->fieldAnswerKind) {
        case 6: r = 2; break;
        case 7: r = 3; break;
        case 12:
        case 13: r = 4; break;
        case 14: r = 6; break;
        }
    } else if (o->fieldAnswer == 2) {
        r = 5;
    } else {
        r = 0;
    }
    goto done;
b42:
    if (res >= 0x1000) r = 4;
done:
    return r;
}
}

namespace ns_022052f4 {
extern "C" s32 PlayerActor_ShovelClassifyTarget(Obj *o, V3 *p, u8 *f) {
    s32 a, b;
    FieldPos_ToUnit(&a, &b, p);
    if (*f != 0) {
        if (PlayerActor_CheckToolHitActor(o)) return 2;
        V2 q;
        q.x = 0;
        q.y = 0;
        q.x = a;
        q.y = b;
        switch (Unk_02006d14_startUnitItemQuery(o, &q, 2, 3)) {
        case 0: return 7;
        case 1: return 0;
        case 2: return 2;
        }
    }
    if (o->fieldAnswer == 2) return 7;
    if (o->fieldAnswer == 0) return 0;
    switch (o->fieldAnswerKind) {
    case 23: return 1;
    case 12:
    case 13: return 2;
    case 14: return 8;
    case 19:
    case 20: return 6;
    case 9:
    case 21: return 5;
    case 10:
    case 22: return 9;
    case 11: return 4;
    case 8:
    default: return 3;
    }
}
}

namespace ns_022052f4 {
extern "C" BOOL PlayerActor_FishFindCastTarget(Obj *o, V3 *out, V3 *tgt) {
    s16 ang;
    V3 t1, t0;
    if (Vec_Equal(tgt, (V3 *)&o->position)) {
        ang = o->rotY;
    } else {
        ang = Math_Atan2(tgt->x - o->position.x, tgt->z - o->position.z);
    }
    PlayerActor_OffsetByAngle(&t0, o, (V3 *)&o->position, &ang, sFishCastFarDist);
    out->x = t0.x;
    out->y = t0.y;
    out->z = t0.z;
    BOOL r4 = Ground_IsWaterAt(out);
    PlayerActor_OffsetByAngle(&t1, o, (V3 *)&o->position, &ang, sFishCastNearDist);
    if (r4 && Ground_IsWaterAt(&t1)) return TRUE;
    return FALSE;
}
}

namespace ns_022052f4 {
extern "C" void PlayerActor_FieldCheckUnitAhead(Obj *o) {
    V2 p;
    V3 out;
    p.x = 0;
    p.y = 0;
    PlayerActor_OffsetByAngle(&out, o, (V3 *)&o->position, &o->rotY, data_ov003_02230ae8);
    FieldPos_ToUnit(&p.x, &p.y, &out);
    BOOL same = FALSE;
    s32 x = p.x;
    if (*(volatile s32 *)&p.x == o->aheadUnitX && p.y == o->aheadUnitZ) same = TRUE;
    if (same) {
        o->aheadUnitX = x;
        o->aheadUnitZ = p.y;
    } else {
        o->aheadUnitX = x;
        o->aheadUnitZ = p.y;
        s32 x0 = *(volatile s32 *)&p.x, y = p.y, hx = x0 >> 4, hy = y >> 4;
        u16 *c = BlockMap_GetItemPtr(gSceneBlockMap, hx, hy, x0 - (hx << 4), y - (hy << 4), 0);
        if (c != NULL) {
            if (Unk_ov003_02205744_Chk(c)) {
                V2 q;
                q.x = p.x;
                q.y = p.y;
                Tree_RequestShake(o->sessionSlot, &q, 1);
            }
        }
    }
}
}

namespace ns_022052f4 {
extern "C" void PlayerActor_FieldRunStep(Obj *o) {
    V2 p;
    p.x = 0;
    p.y = 0;
    if (o->speed > 0x53f) {
        FieldPos_ToUnit(&p.x, &p.y, (V3 *)&o->position);
        BOOL same = FALSE;
        s32 x = p.x;
        if (*(volatile s32 *)&p.x == o->runUnitX && p.y == o->runUnitZ) same = TRUE;
        if (same) {
            o->runUnitX = x;
            o->runUnitZ = p.y;
        } else {
            o->runUnitX = x;
            o->runUnitZ = p.y;
            V2 q;
            q.x = p.x;
            q.y = p.y;
            Flower_Trample(&q);
        }
    }
}
}

namespace ns_022052f4 {
extern "C" void PlayerActor_FieldCheckStepUnit(Obj *o) {
    if (Unk_02006d14_testActionFlag(o, 0xb)) return;
    if (Unk_02006d14_testActionFlag(o, 0x16)) return;
    if (!PlayerActor_isLocomotionAction(o, o->action)) return;
    if (o->fieldQuery != -1) return;
    V2 p;
    p.x = 0;
    p.y = 0;
    FieldPos_ToUnit(&p.x, &p.y, (V3 *)&o->position);
    s32 t = Unk_02006d14_getHeldToolKind(o);
    s32 k = 0;
    switch (t) {
    case 1: k = 2; break;
    case 2: k = 1; break;
    case 4: k = 3; break;
    case 5: k = 4; break;
    }
    V2 q;
    q.x = p.x;
    q.y = p.y;
    o->fieldQuery = FieldAction_RequestPitfall(o->sessionSlot, &q, k);
    if (o->fieldQuery != -1) {
        if (Unk_02006d14_getFieldAnswerKind(o) == 0x19) {
            PlayerActor_clearRequests(o);
            Unk_02006d14_setActionFlag(o, 0x16);
            Unk_02006d14_setActionFlag(o, 0x13);
            o->pitfallUnitX = p.x;
            o->pitfallUnitZ = p.y;
        }
    }
}
}

namespace ns_022052f4 {
extern "C" void PlayerActor_FieldPollPitfall(Obj *o) {
    if (Unk_02006d14_testActionFlag(o, 0x16)) {
        switch (o->fieldAnswer) {
        case 1: {
            s32 v[2];
            v[0] = o->pitfallUnitX;
            v[1] = o->pitfallUnitZ;
            PlayerActor_RequestPitfallFall(o, v, 6, -1);
            Unk_02006d14_clearActionFlag(o, 0x16);
            Unk_02006d14_clearActionFlag(o, 0x13);
            break;
        }
        case 2:
            Unk_02006d14_clearActionFlag(o, 0x16);
            Unk_02006d14_clearActionFlag(o, 0x13);
            break;
        }
    }
}
}

namespace ns_022052f4 {
extern "C" void PlayerActor_FieldUpdateTan(Obj *o) {
    struct L {
        u16 w0;
        u16 s2;
        u16 s4;
        u16 s6;
        u32 t[2];
    } l;
    BOOL night;
    u16 *cnt;
    u8 *fl;
    s32 tm;
    u32 A, B, C;
    if (o->drawStep == 0) return;
    night = FALSE;
    if (Unk_02006d14_isGuestInSession(o)) night = TRUE;
    cnt = PlayerSession_GetTanTimer();
    if (*cnt == 0) *cnt = 1;
    fl = PlayerSession_GetSessionFlags();
    tm = PlayerActor_GetPlayerData(o);
    l.t[0] = 0;
    l.t[1] = 0;
    Clock_GetDateTime(l.t);
    if ((*fl & 1) != 0) {
        if (PlayerActor_CompareLastPlayDateNow(o) != 1) return;
        if (night) {
            *fl = *fl & 0xfe;
        } else {
            *fl = *fl & 0xee;
        }
    }
    u8 *tb = (u8 *)&l;
    A = tb[0xd];
    B = tb[0xc];
    C = tb[0xb];
    if (B != 8) {
        if (B == 7 && C >= 0x10) {
        } else if (B != 9 || C > 0xf) {
            return;
        }
    }
    u8 hh = ((u8 *)&l)[0xa];
    if (hh < 0xa || hh >= 0x11) return;
    if (Weather_GetCurrent() >= 3) return;
    PlayerActor_GetHeldItem(&l.s2, o);
    if (Unk_ov003_022052f4_RngV(&l.s2, 0x1380, 0x139f)) return;
    PlayerActor_GetHeldItem(&l.s4, o);
    if (Unk_ov003_022052f4_RngV(&l.s4, 0x13a0, 0x13a7)) return;
    *cnt = *cnt - 1;
    if (*cnt != 0) return;
    l.w0 = (l.w0 & ~0x7f) | (A &= 0x7f);
    l.w0 = (l.w0 & ~0x780) | ((B &= 0xf) << 7);
    l.w0 = (l.w0 & ~0xf800) | ((C &= 0x1f) << 11);
    u32 n = (u8)(PlayerActor_GetTan(o) + 1);
    if (n > 7) n = 7;
    PlayerData_setTan(tm, n);
    PlayerActor_SetLastPlayDate(o, tm, &l);
    *cnt = 0x4650;
    *fl = *fl & 0xfb;
    *fl = *fl | 3;
    Unk_02006d14_netSendTan(o);
}
}

namespace ns_022052f4 {
extern "C" BOOL PlayerActor_CheckToolHitActor(Obj *o) {
    u16 buf[2];
    s32 k;
    u32 id;
    o->toolHitKind = 0;
    if (o->subCollider.isHit == 0) return FALSE;
    o->toolHitKind = 1;
    k = o->subCollider.hitTargetKind;
    id = o->subCollider.hitTargetIndex;
    PlayerActor_GetHeldItem(buf, o);
    switch (k) {
    case 2:
    case 3: {
        NpcActor *it = NpcRegistry_FindByKind(k, id);
        if (it != NULL) {
            BOOL f = Unk_ov003_022052f4_Rng(buf, 0x1376, 0x1376);
            if (f || Unk_ov003_022052f4_Rng(buf, 0x1377, 0x1377)) {
                if (it->onToolHit(buf) == 1) {
                    o->toolHitKind = 4;
                    break;
                }
            } else {
                o->toolHitActor = it;
            }
            o->toolHitKind = 2;
        }
        break;
    }
    case 0x11:
    case 0x12: {
        void *it = Snowball_FindByParam(id);
        if (it != NULL) {
            BOOL f = Unk_ov003_022052f4_Rng(buf, 0x1376, 0x1376);
            if (!f && !Unk_ov003_022052f4_Rng(buf, 0x1377, 0x1377)) o->toolHitActor = (Actor *)it;
            o->toolHitKind = 3;
        }
        break;
    }
    }
    return TRUE;
}
}

namespace ns_02204d90 {
extern "C" BOOL PlayerActor_FieldUseTool(PlayerActor *self) {
    s32 mode = Unk_02006d14_getHeldToolKind(self);
    u16 ang;
    s32 xy[2];
    struct {
        Unk_ov003_02204f3c_Pad pad;
        VecFx32 t, s, z, va, vb, vc;
    } l;
    if (self->actionPressed) {
        l.z.x = 0;
        l.z.y = 0;
        l.z.z = 0;
        if (PlayerActor_FieldStartToolAction(self, mode, &l.z.x)) {
            return TRUE;
        }
    }
    if (!Unk_02006d14_isPosInReach(self, &self->targetPos.x, mode)) {
        if (self->toolTargetKind == 1 || self->hasTargetPos) {
            if (Unk_02006d14_interactAt(self, mode)) {
                return TRUE;
            }
        }
        goto fail;
    }
    switch (self->toolTargetKind) {
    case 1:
        if (self->toolTargetKind != 0) {
            if (PlayerActor_FieldInteractFront(self, &mode)) {
                return TRUE;
            }
        }
        if (mode == 2 || mode == 1 || mode == 10 || mode == 0) {
            if (self->toolTargetKind != 0) {
                if (mode == 10) {
                    l.va.x = self->targetPos.x;
                    l.va.y = self->targetPos.y;
                    l.va.z = self->targetPos.z;
                    if (PlayerActor_FieldStartToolAction(self, 0, &l.va.x)) {
                        return TRUE;
                    }
                } else {
                    l.vb.x = self->targetPos.x;
                    l.vb.y = self->targetPos.y;
                    l.vb.z = self->targetPos.z;
                    if (PlayerActor_FieldStartToolAction(self, mode, &l.vb.x)) {
                        return TRUE;
                    }
                }
            }
        }
        break;
    case 2:
        if (mode == 4) {
            l.z.x = 0;
            l.z.y = 0;
            l.z.z = 0;
            if (PlayerActor_FieldStartToolAction(self, mode, &l.z.x)) {
                return TRUE;
            }
        }
        break;
    }
    if (self->inputMode == 2 && mode == 5) {
        FieldPos_ToUnit(&xy[0], &xy[1], &self->targetPos.x);
        s32 hx, hy, x, y;
        x = *(volatile s32 *)&xy[0];
        y = *(volatile s32 *)&xy[1];
        hx = x >> 4;
        hy = y >> 4;
        u16 *cell = (u16 *)BlockMap_GetItemPtr(gSceneBlockMap, hx, hy, x - (hx << 4), y - (hy << 4), 0);
        if (cell) {
            BOOL f8 = TRUE, f7 = TRUE, f6 = TRUE, f5 = TRUE, f4 = TRUE, f3 = TRUE, f2 = TRUE, f1 = FALSE;
            u32 v = *cell;
            if (v <= 5) {
                f1 = TRUE;
            }
            if (!f1) {
                if (v < 6 || v > 0xb) {
                    f2 = FALSE;
                }
            }
            if (!f2) {
                if (v < 0xc || v > 0x11) {
                    f3 = FALSE;
                }
            }
            if (!f3) {
                if (!((v >= 0x12 && v <= 0x19) || v == 0x1c)) {
                    f4 = FALSE;
                }
            }
            if (!f4) {
                if (!((v >= 0x8a && v <= 0x8f) || (v >= 0x90 && v <= 0x95) || (v >= 0x96 && v <= 0x9b) || (v >= 0x9c && v <= 0xa3) || v == 0xa5)) {
                    f5 = FALSE;
                }
            }
            if (!f5) {
                if (v != 0x1a) {
                    f6 = FALSE;
                }
            }
            if (!f6) {
                if (v != 0xa4) {
                    f7 = FALSE;
                }
            }
            if (!f7) {
                if (v != 0x1d) {
                    f8 = FALSE;
                }
            }
            if (!f8) {
                if (!((v >= 0x6e && v <= 0x73) || (v >= 0x74 && v <= 0x79) || (v >= 0x7a && v <= 0x7f) || (v >= 0x80 && v <= 0x87) || v == 0x88 || v == 0x89)) {
                    goto after_tile;
                }
            }
            l.z.x = 0;
            l.z.y = 0;
            l.z.z = 0;
            if (PlayerActor_FieldStartToolAction(self, mode, &l.z.x)) {
                return TRUE;
            }
        }
    }
after_tile:
    if (self->hasTargetPos) {
        if (Unk_02006d14_interactAt(self, mode)) {
            return TRUE;
        }
    }
    if (self->inputMode == 2) {
        switch (mode) {
        case 1: {
            ang = Math_Atan2(self->targetPos.x - self->bodyPos.x, self->targetPos.z - self->bodyPos.z);
            PlayerActor_OffsetByAngle(&l.t, self, &self->position.x, &ang, sFieldFrontDist);
            if (Unk_02006d14_isPosInReach(self, &l.t.x, mode)) {
                s32 *pa = &self->targetPos.x;
                s32 *pb = &self->targetPos.y;
                s32 *pc = &self->targetPos.z;
                l.s.x = *pa;
                l.s.y = *pb;
                l.s.z = *pc;
                *pa = l.t.x;
                *pb = l.t.y;
                *pc = l.t.z;
                l.z.x = 0;
                l.z.y = 0;
                l.z.z = 0;
                if (PlayerActor_FieldStartToolAction(self, mode, &l.z.x)) {
                    self->targetPos.x = l.s.x;
                    self->targetPos.y = l.s.y;
                    self->targetPos.z = l.s.z;
                    return TRUE;
                }
                self->targetPos.x = l.s.x;
                self->targetPos.y = l.s.y;
                self->targetPos.z = l.s.z;
            }
            break;
        }
        case 5:
            l.z.x = 0;
            l.z.y = 0;
            l.z.z = 0;
            if (PlayerActor_FieldStartToolAction(self, mode, &l.z.x)) {
                return TRUE;
            }
            break;
        case 3:
            if (Ground_IsWaterAt(&self->targetPos.x)) {
                l.vc.x = self->targetPos.x;
                l.vc.y = self->targetPos.y;
                l.vc.z = self->targetPos.z;
                if (PlayerActor_FieldStartToolAction(self, mode, &l.vc.x)) {
                    return TRUE;
                }
            }
            break;
        }
    }
fail:
    if (mode == 0) {
        if (self->actionPressed) {
            if (Sky_IsShootingStarVisible()) {
                PlayerActor_RequestAct72(self, 6, -1);
                return TRUE;
            }
        }
    }
    return FALSE;
}
}

namespace ns_02204d90 {
extern "C" BOOL PlayerActor_FieldStartToolAction(PlayerActor *self, s32 mode, s32 *pos) {
    VecFx32 a, z, c, z2, t1, t2;
    switch (mode) {
    case 2:
        PlayerActor_RequestAxeSwing(self, 6, -1);
        return TRUE;
    case 1:
        PlayerActor_RequestShovelReady(self, 6, -1);
        return TRUE;
    case 4:
        PlayerActor_RequestBugNetSwing(self, 6, -1);
        return TRUE;
    case 3:
        z.x = 0;
        z.y = 0;
        z.z = 0;
        if (Vec_Equal(pos, &z.x)) {
            s32 *pv = &self->position.x;
            pos[0] = pv[0];
            pos[1] = pv[1];
            pos[2] = pv[2];
        }
        if (PlayerActor_FishFindCastTarget(self, &a.x, pos)) {
            c.x = a.x;
            c.y = a.y;
            c.z = a.z;
            PlayerActor_RequestFishCast(self, &c.x, 6, -1);
        } else {
            PlayerActor_RequestFishCastFail(self, 6, -1);
        }
        return TRUE;
    case 5:
        PlayerActor_RequestWateringCan(self, 6, -1);
        return TRUE;
    case 6:
        PlayerActor_RequestSlingshot(self, 6, -1);
        return TRUE;
    case 7:
        PlayerActor_RequestAct82(self, 6, -1);
        return TRUE;
    case 8:
        PlayerActor_RequestAct80(self, 6, -1);
        return TRUE;
    case 9:
        PlayerActor_RequestFirework(self, 6, -1);
        return TRUE;
    case 0:
    case 10:
        z2.x = 0;
        z2.y = 0;
        z2.z = 0;
        if (Vec_Equal(pos, &z2.x)) {
            PlayerActor_GetFrontUnitCenter(&t1, (PlayerActor *)self);
            pos[0] = t1.x;
            pos[1] = t1.y;
            pos[2] = t1.z;
        }
        PlayerActor_GetFrontUnitCenter(&t2, self);
        a.x = t2.x;
        a.y = t2.y;
        a.z = t2.z;
        if (Vec_DistXZ(&self->position.x, pos) < 0x2334) {
            if (Unk_02006d14_startFieldQuery(self, &a.x, 1, 0)) {
                BOOL f;
                if (Unk_02006d14_getFieldAnswerKind(self) == 1) {
                    f = FALSE;
                } else {
                    f = TRUE;
                }
                s32 zero = 0;
                PlayerActor_RequestTreeShake(self, a.x, a.z, f, zero, 6, ~zero);
                return TRUE;
            }
        }
        if (mode == 10) {
            PlayerActor_RequestUmbrellaSpin(self, 6, -1);
            return TRUE;
        }
    }
    return FALSE;
}
}

namespace ns_02204d90 {
extern "C" BOOL PlayerActor_FieldInteractAt(PlayerActor *self, s32 a) {
    VecFx32 v;
    if (PlayerActor_FieldInteractFront(self, &a)) {
        return TRUE;
    }
    if (self->inputMode == 1) {
        VecFx32 t;
        PlayerActor_OffsetByAngle(&t, self, &self->position.x, (u16 *)&self->rotY, data_ov003_02230af0);
        v.x = t.x;
        v.y = t.y;
        v.z = t.z;
    } else {
        v.x = self->targetPos.x;
        v.y = self->targetPos.y;
        v.z = self->targetPos.z;
        if (!Unk_02006d14_isPosInReach(self, &v.x, 0xc)) {
            return FALSE;
        }
    }
    if (Unk_02006d14_startFieldQuery(self, &v.x, 0, a)) {
        if (Unk_02006d14_requestByFieldAnswer(self, &v.x, 0)) {
            return TRUE;
        }
    }
    return FALSE;
}
}

