// mwcc-version: 1.2/base
// The 14 functions of the translation unit 0x02004558-0x0201106c that only mwcc 1.2/base compiles
// to the original code (see unk_02004558.cpp; same declarations, nothing else is defined here).
#include "types.h"
#include "gfx/VecFx32.h"
#include "net/CommManager.h"
#include "talk/TalkWindowState.h"
#include "gfx/NNSG3dRS.h"
#include "player/PendingFieldActionFx.h"
#include "player/Unk_02005f50_Area.h"
#include "player/FieldActionFxEvent.h"
#include "player/Unk_02006d14_Pair.h"
#include "player/Unk_02006d14_V3.h"
#include "player/Unk_02006d14_Trip.h"
#include "player/PlayerPickUpWork.h"
#include "player/Unk_02006d14_Ptr.h"
#include "player/PlayerInitWork.h"
#include "player/PlayerActionRequestBase.h"
#include "game/Unk_0200f6d4_V2.h"
#include "player/Unk_0200d64c_Xyz.h"
#include "player/Unk_0200f070_V3.h"
#include "player/Unk_020107c8_Blk.h"
#include "player/PlayerNetActionArgs.h"
#include "player/PlayerU16ArgsRequest.h"
#include "player/PlayerAct76Args.h"
#include "player/PlayerTurnToWork.h"
#include "player/Unk_020092c8_Loc.h"
#include "player/PlayerChangeHeldItemWork.h"
#include "player/PlayerAct32Locals.h"
#include "player/PlayerAct30Args.h"
#include "player/PlayerPickUpFanfareArgs.h"
#include "talk/TalkMsgRequest.h"
#include "snd/SndSeEmitterKind99.h"
#include "snd/SndSeEmitterKind1.h"
#include "talk/MsgRequest.h"
#include "player/PlayerActionWork.h"
#include "actor/Character.h"
#include "actor/Actor.h"
#include "gfx/MatTexVramTask.h"
#include "player/PM_020076f0.h"
#include "player/PM_020063a0.h"
#include "player/PlayerWalkToRequest.h"
#include "gfx/MatTexPatAnim.h"
#include "sys/ProcBase.h"
#include "player/Unk_02007694.h"
#include "player/PlayerWalkToWork.h"
#include "player/PlayerAct76Request.h"
#include "player/Unk_02005e7c.h"
#include "player/PlayerAct30Request.h"
#include "player/PlayerPickUpReachRequest.h"
#include "player/PlayerWalkToArgs.h"
#include "player/PlayerActionRequest.h"
#include "player/PMRaw.h"
#include "snd/SndSeEmitter.h"
#include "actor/BlinkTimer.h"
#include "player/PlayerGlassesModelRef.h"
#include "player/PlayerFaceTexRef.h"
#include "player/PlayerBodyWorkRef.h"
#include "player/PlayerBodyModelRef.h"
#include "actor/CharaFaceAnimWorkRef.h"
#include "actor/CharaFaceAnimRef.h"
#include "actor/CharaClothTexRef.h"
#include "player/PlayerPaletteRef.h"
#include "player/Unk_0200bc78_Vec.h"
#include "player/AnimSlotRef.h"
#include "game/Unk_0203d820_Ptr.h"
#include "gfx/Mtx43.h"
#include "player/Unk_021c1b3c.h"
#include "player/PlayerWalkWork.h"
#include "player/PlayerHead.h"
#include "player/PlayerChangeClothesArgs.h"
#include "player/PlayerAct10Args.h"
#include "player/Unk_0200b908_Obj.h"
#include "player/PlayerNoArgsRequest.h"
#include "player/PlayerPickUpReachArgs.h"
#include "player/PlayerPickUpArgs.h"

class PlayerActor;
class Unk_02007694;
class PlayerActor;
struct PlayerActionRequest;
struct Unk_02006d14_Pair;
struct Unk_0200b750_Pair;
struct PlayerActionRequest;
struct Unk_0200f6d4_V2;
struct Unk_020107c8_Blk;


// ---- member-function-pointer constants as named objects (see notes.txt)
typedef void (*PMF)();

// ---- library base class chain of the object (declarations only; vtables and code are in other units)






// ---- sound emitters of PlayerActor (snd/SndSeEmitterKind1.h, snd/SndSeEmitterKind99.h). SndSeEmitterKind1 has no key
// function: this unit emits its link-once vtable and D1 0x02004b48 / D0 0x02010fa4, so the destructor that the header
// declares out of line is defined inline here.
inline SndSeEmitterKind1::~SndSeEmitterKind1() {}










#include "player/PlayerActor.h"
#include "gfx/AnimFrameCtrl.h"
#include "gfx/Camera.h"
#include "gfx/Model.h"
#include "gfx/TwoLayerAnimModel.h"
#include "item/ItemName.h"
#include "player/FishBobber.h"
#include "player/PlayerData.h"
#include "talk/ChoiceList.h"
#define PROTO_LOCAL_HeldItemModel_GetJointMtx  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_PlayerGlassesModelRef_GetModelId  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_PlayerHead_GetModelId  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_TouchPickResult_GetTarget  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_WorldCurve_FromCurved  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_gScreenTransition  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_gSndMgr  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_sHouseRoachActiveCount  // declared below: the shared prototype conflicts with the calls here
#include "proto/autoload_2/unk_020e7fd4.h"
#include "proto/autoload_2/unk_020e8558.h"
#include "proto/autoload_2/unk_020e9a08.h"
#include "proto/autoload_2/unk_020ef150.h"
#include "proto/autoload_2/unk_02128030.h"
#include "proto/itcm/unk_01ffb4e8.h"
#include "proto/main/unk_020039ec.h"
#include "proto/main/unk_02004558_extra.h"
#include "proto/main/unk_0201106c.h"
#include "proto/main/unk_020119cc.h"
#include "proto/main/unk_0202e840.h"
#include "proto/main/unk_02034438.h"
#include "proto/main/unk_0203c638.h"
#include "proto/main/unk_0203cbc0.h"
#include "proto/main/unk_0203ecec.h"
#include "proto/main/unk_020571f4.h"
#include "proto/main/unk_0205b7b0.h"
#include "proto/main/unk_0205c66c.h"
#include "proto/main/unk_0205c91c.h"
#include "proto/main/unk_0205d480.h"
#include "proto/main/unk_0205d7d8.h"
#include "proto/main/unk_0205dfa4.h"
#include "proto/main/unk_0205edfc.h"
#include "proto/main/unk_0205ef08.h"
#include "proto/main/unk_02063904.h"
#include "proto/main/unk_0206d988.h"
#include "proto/main/unk_0206e54c.h"
#include "proto/main/unk_0206fc44.h"
#include "proto/main/unk_020742f4.h"
#include "proto/main/unk_020815f8.h"
#include "proto/main/unk_0208eeac.h"
#include "proto/main/unk_02090268.h"
#include "proto/main/unk_02093ff0.h"
#include "proto/main/unk_020943dc.h"
#include "proto/main/unk_02094810.h"
#include "proto/main/unk_02095cdc.h"
#include "proto/main/unk_02097444.h"
#include "proto/main/unk_02097d1c.h"
#include "proto/main/unk_02098e90.h"
#include "proto/main/unk_0209c37c.h"
#include "proto/main/unk_0209c4a8.h"
#include "proto/main/unk_020abbcc.h"
#include "proto/main/unk_020af258.h"
#include "proto/main/unk_020b0a80.h"
#include "proto/main/unk_020b0e60.h"
#include "proto/main/unk_020b5e5c.h"
#include "proto/main/unk_020b7190.h"
#include "proto/main/unk_020b7d10.h"
#include "proto/ov003/unk_ov003_02204ce8.h"
#include "proto/ov003/unk_ov003_02225800.h"
#include "proto/ov004/unk_ov004_0222bed0.h"
#include "proto/ov004/unk_ov004_02233074.h"



























// ---- unk_020044dc.cpp
namespace nA {
extern "C" {

#define SndMgr_update _ZN6SndMgr6updateEv
void SndMgr_update(void *a);
#define SndMgr_init _ZN6SndMgr4initEjjj
void SndMgr_init(void *a, void *b, u32 c, void *d, s32 e);
BOOL _ZN11PlayerActor8doCreateEv(void *self);
void _ZN11PlayerActor9doExecuteEv(void *self);
BOOL _ZN11CommManager8isOnlineEv(void *p);
BOOL _ZN11CommManager11isLocalSlotEj(void *p, s32 v);
void _ZN12SndSeEmitter8callStopEv(void *p);
void _ZN14MatTexVramTask6cancelEv(void *p);
void _ZN13MatTexPatAnim7releaseEv(void *p);
void _ZN11CachedModel7releaseEv(void *p);
void _ZN9AnimModel15detachJointAnimEv(void *p);
void _ZN16CharaClothTexRef7releaseEv(void *p);
s32 Field_DrawItemModel(u16 a, void *b, void *c, s32 d, s32 e, s32 f);
extern u8 gSndMgr[];
extern u8 data_020d5e20[];
extern s32 gCamera;
extern s32 gCameraDistance;
extern u8 gFieldSceneKind;
extern void *gCommManager;
void _ZN6ItemIdD1Ev();
BOOL _ZN11PlayerActor14testActionFlagEj(void *, s32 id);
void _ZN11PlayerActor15clearActionFlagEj(void *, s32 id);
union PM_02004ce8 {
    PMRaw raw;
    void (PlayerActor::*fn)();
};
}
}

// ---- unk_02004e0c.cpp
namespace nB {
extern "C" {

void WorldCurve_FromCurved(VecFx32 *dst, VecFx32 *src);
void MTX_RotX33_(s32 *out, s32 a, s32 b);
void MTX_RotY33_(s32 *out, s32 a, s32 b);
void _ZN5Model8setAlphaEj(void *obj, u8 v);
void _ZN17TwoLayerAnimModel11drawLayeredEj(void *obj, u32 v);
void Model_GetJointWorldMtx(void *obj, Mtx43 *out, u32 idx);
s32 PlayerHead_GetModelId(void *obj, u32 v);
s32 PlayerGlassesModelRef_GetModelId(void *obj);
Mtx43 HeldItemModel_GetJointMtx(void *obj, u32 mode);
void PlayerActor_CheckSceneExit(s32 a);
BOOL _ZN11CommManager11isLocalSlotEj(void *a, s32 b);
s32 Ground_GetDefaultY(s32 a);
void _ZN12SndSeEmitter18callUpdateRelativeEP7VecFx32(void *a, void *b);
void _ZN12SndSeEmitter21callUpdateRelativeAltEP7VecFx32(void *a, void *b);
void _ZN17TwoLayerAnimModel21onJointCalcPostLayer2EP8NNSG3dRS(void *a, NNSG3dRS *b);
void JointCb_CalcCpuMatrix(void *a, NNSG3dRS *b, u32 c);
void JointCb_UseRestTranslation(NNSG3dRS *a, u32 b);
void _ZN17TwoLayerAnimModel20onJointCalcPreLayer2EP8NNSG3dRS(void *a, NNSG3dRS *b);
void PlayerActor_JointCbStart(NNSG3dRS *p);
void PlayerActor_JointCbPost(NNSG3dRS *p);
void PlayerActor_JointCbPre(NNSG3dRS *p);
void PlayerActor_FieldUpdateTan(void *);
void PlayerActor_FieldPollPitfall(void *);
void PlayerActor_FieldCheckStepUnit(void *);
void PlayerActor_FieldRunStep(void *);
void PlayerActor_FieldCheckUnitAhead(void *);
extern u8 gFieldSceneKind;
extern s16 data_02135f44[];
extern void *gCommManager;
extern s16 data_02135f44[];
enum Unk_020d6df4_State { Unk_020d6df4_State_0 = 0 };
void PlayerActor_JointCbStart(NNSG3dRS *p);
void PlayerActor_JointCbPre(NNSG3dRS *p);
void PlayerActor_JointCbPost(NNSG3dRS *p);
BOOL _ZN11PlayerActor14testActionFlagEj(void *, u32 n);
s32 _ZN11PlayerActor15getHeldToolKindEv(void *);
s32 _ZN11PlayerActor15getJointGroundYEi(void *, s32 x);
void _ZN11PlayerActor16pollFaceItemLoadEv(void *);
void _ZN11PlayerActor11pollHatLoadEv(void *);
void _ZN11PlayerActor9readInputEv(void *);
BOOL _ZN11PlayerActor17getInputMagnitudeEv(void *);
void _ZN12Unk_02005e7c15followNetActionEv(void *);
void _ZN12Unk_02005e7c15processRequestsEv(void *);
void _ZN11PlayerActor15updateFaceAnimsEv(void *);
void PlayerActor_LevelTiltForAction(void *, s32 a, u32 b);
void _ZN12Unk_02005e7c13syncInputModeEj(void *, s32 a);
void _ZN12Unk_0200769421calcModelMatrixCurvedEv(void *);
void _ZN11PlayerActor19applyFaceItemChangeEv(void *);
void _ZN11PlayerActor14applyHatChangeEv(void *);
void _ZN11PlayerActor14pollStoreQueryEv(void *);
s32 _ZN11PlayerActor14pollFieldQueryEv(void *);
void _ZN11PlayerActor14updateHeadLookEv(void *);
union PM_02005294 {
    PMRaw raw;
    void (PlayerActor::*fn)();
};
}
}

// ---- unk_02005e7c.cpp
namespace nC {
extern "C" {

extern u8 data_020c64c8[];
extern u8 data_020c6434[];
extern u8 sPlayerActionLevelsTilt[];
void PlayerActor_LevelTiltForAction(void *p, u32 i, s32 force);
s32 FieldActionFx_Take(void *out, s32 v);
void FieldPos_FromUnitCenter(VecFx32 *out, s32 x, s32 y);
void FieldPos_ToUnit(s32 *x, s32 *y, VecFx32 *v);
s32 _ZN11PlayerActor14testActionFlagEj(void *p, s32 v);
void _ZN11PlayerActor15clearActionFlagEj(void *p, s32 v);
s32 _ZN11PlayerActor13setActionFlagEj(void *p, s32 v);
s32 _ZN11PlayerActor18isLocomotionActionEj(void *p, s32 v);
void *_ZN11PlayerActor10getRequestEi(void *p, s32 i);
s32 _ZN11PlayerActor13loadInputModeEv();
s32 _ZN11PlayerActor12approachRotXEi(void *p, s32 v);
s32 _ZN11PlayerActor15requestPickUpAtEP4Vec2ihis(void *p, void *v, s32 a, s32 b, s32 c, s32 d);
s32 _ZN11PlayerActor22requestPickUpFanfareAtEP17Unk_02006d14_Pairhjs(void *p, void *v, s32 a, s32 b, s32 c);
s32 _ZN11PlayerActor11requestWaitEjjj(void *p, s32 a, s32 b, s32 c);
void MI_CpuCopy8(void *dst, void *src, s32 n);
void PlayerActor_RequestTreeShake(void *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f);
void PlayerActor_RequestPluck(void *p, void *v, s32 a, s32 b);
void PlayerActor_RequestAxeBreak(void *p, s32 a, void *v, s32 b, s32 c);
void PlayerActor_RequestAxeChop(void *p, s32 a, s32 b, void *v, s32 c, s32 d);
void PlayerActor_RequestDig(void *p, s32 a, void *v, s32 b, s32 c);
void PlayerActor_RequestDigUpItem(void *p, void *v, s32 a, s32 b, s32 c);
void PlayerActor_RequestFillHole(void *p, s32 a, void *v, s32 b, s32 c, s32 d);
void PlayerActor_RequestAct66(void *p, void *v, s32 a, s32 b, s32 c);
void PlayerActor_RequestShovelStrike(void *p, s32 a, void *v, s32 b, s32 c);
void PlayerActor_RequestAxeStrike(void *p, s32 a, s32 b, void *v, s32 c, s32 d);
void PlayerActor_LevelTiltForAction(void *p, u32 i, s32 force);
s32 _ZN11PlayerActor12changeActionEP19PlayerActionRequest(void *, void *p);
}
}

// ---- unk_02006d14.cpp
namespace nD {
extern "C" {

typedef void (PlayerActor::*Unk_02006d14_Fn)(PlayerActionRequest*, u32);
extern CommManager* gCommManager;
extern u32 data_020c6a18[];
BOOL _ZN11CommManager12isSlotActiveEi(CommManager* p, u32 v);
BOOL _ZN11CommManager11isLocalSlotEj(CommManager* p, u32 v);
s32 _ZN11CommManager10getSendSeqEv(CommManager* p);
void _ZN12Unk_020076949endActionEj(void *, u32 a);
void _ZN12Unk_0200769415clearActionWorkEv(void *);
void _ZN12Unk_0200769421stopMovementForActionEj(void *, u32 id);
void _ZN12Unk_0200769417updateBgCheckWorkEjj(void *, u32 id, u32 v);
void _ZN12Unk_0200769418resetRotXForActionEj(void *, u32 id);
void _ZN11PlayerActor15setBodyColliderEPj(void *, u32* id);
void _ZN12Unk_02005e7c18setShadowForActionEj(void *, u32 id);
u32 _ZN12Unk_0200769417getActionPriorityEj(void *, u32 id);
void _ZN11PlayerActor13setActionFlagEj(void *, u32 id);
void _ZN11PlayerActor15clearActionFlagEj(void *, u32 id);
union PM_02006d14 {
    PMRaw raw;
    Unk_02006d14_Fn fn;
};
}
}

// ---- unk_02007694.cpp
namespace nE {
extern "C" {

void MI_CpuFill8(void *p, u32 v, u32 n);
void _ZN14CollisionState9beginStepEv(void *p);
void _ZN11PlayerActor7setRotXEt(Unk_02007694 *o, u32 a);
void WorldCurve_FromCurved(VecFx32 *out, VecFx32 *in);
s32 FX_Div(s32 a, s32 b);
void MTX_MultVec43(VecFx32 *v, Mtx43 *m, VecFx32 *out);
void Math_ApproachS32(void *p, s32 a, s32 b, s32 c, s32 d);
BOOL _ZN13AnimFrameCtrl10isFinishedEv(void *p);
void TalkRequest_FinishPlayerMessage();
extern u8 sPlayerActionResetsRotX[];
extern u8 sPlayerActionStopsMovement[];
extern u8 sPlayerActionDonePriority[];
extern u8 sPlayerActionPriority[];
extern u8 sPlayerActionKeepsBgCheckWork[];
void PlayerActor_CalcHeldUpItemPos(VecFx32 *out, Unk_02007694 *obj, s32 n);
void _ZN11PlayerActor15clearActionFlagEj(void *, u32 a);
void _ZN5Actor15calcModelMatrixEPv(void *, Mtx43 *out);
void _ZN11PlayerActor17moveWithCollisionEv(void *);
void _ZN11PlayerActor11advanceAnimEv(void *);
void _ZN11PlayerActor18updateBodyColliderEv(void *);
void _ZN11PlayerActor19submitSceneColliderEv(void *);
void _ZN11PlayerActor11requestWaitEjjj(void *, u32 a, u32 b, u32 c);
void _ZN11PlayerActor9startAnimEijt(void *, u32 a, u32 b, u32 c);
void _ZN11PlayerActor17resetHeldToolAnimEv(void *);
void _ZN19PlayerActionRequest6assignEiis(void *, u32 a, u32 b, u32 c);
u32 _ZN11PlayerActor11pushRequestEP19PlayerActionRequest(void *, PlayerActionRequest *p);
void _ZN12Unk_0200769412requestAct05Etjj(void *, u32 a, u32 b, u32 c);
void _ZN11PlayerActor13startAnimOnceEijt(void *, u32 a, u32 b, u32 c);
BOOL _ZN11PlayerActor12turnToCameraEi(void *, u32 a);
void _ZN11PlayerActor6playSeEj(void *, u32 a);
void _ZN11PlayerActor13setActionFlagEj(void *, u32 a);
}
}

// ---- unk_02008040.cpp
namespace nF {
extern "C" {

extern void *gCommManager;
extern char sPlayerActorErrorMsgFile[];
extern char sPlayerActorMsgFile[];
extern char sPlayerActorGetInsectMsgFile[];
extern char sPlayerActorGetFishMsgFile[];
extern char gSndMgr[];
extern u8 gFieldSceneKind;
BOOL _ZN11CommManager11isLocalSlotEj(void *, s32);
void _ZN11PlayerActor11advanceAnimEv(PlayerActor *);
void _ZN11PlayerActor18updateBodyColliderEv(PlayerActor *);
void _ZN11PlayerActor18netFollowTransformEv(PlayerActor *);
void PlayerActor_CalcHeldUpItemPos(VecFx32 *, PlayerActor *, u32);
s32 _ZN11PlayerActor13startAnimOnceEijt(PlayerActor *, u32, u32, u32);
s32 _ZN11PlayerActor9startAnimEijt(PlayerActor *, u32, u32, u32);
s32 _ZN11PlayerActor11requestWaitEjjj(PlayerActor *, u32, u32, s32);
s32 _ZN12Unk_0200769421getActionDonePriorityEj(PlayerActor *, s32);
void _ZN11PlayerActor11calcHandMtxEv(PlayerActor *);
void PlayerActor_ApplyHoldOffset(void *, void *);
void Fish_GetDisplayScale(void *, s32);
void FishCatch_SetDisplayPosScale(void *, void *, void *);
void PlayerActor_RequestFishShowCatch(PlayerActor *, u32, u32, s32);
void PlayerActor_RequestInsectShowCatch(PlayerActor *, u32, u32, u32, u32, s32);
void PlayerActor_RequestStowItem(PlayerActor *, u32, u32, u32, u32, u32, u32, s32);
void WorldCurve_FromCurved(void *, void *);
void PlayerActor_GetHeldItem(void *, PlayerActor *);
BOOL Item_IsFurniture(void *);
u32 Item_GetFurnitureIndex(void *);
BOOL _ZN11PlayerActor20getHeldHoldableIndexEv(PlayerActor *);
void TalkRequest_FinishSceneEntry();
void _ZN11PlayerActor6playSeEj(PlayerActor *, u32);
void _ZN11PlayerActor13setActionFlagEj(PlayerActor *, u32);
void _ZN11PlayerActor15clearActionFlagEj(PlayerActor *, u32);
void _ZN11PlayerActor12turnToCameraEi(PlayerActor *, u32);
void *_ZN19PlayerActionRequestC1Ev(void *);
void _ZN19PlayerActionRequest6assignEiis(void *, u32, u32, u32);
BOOL _ZN11PlayerActor11pushRequestEP19PlayerActionRequest(PlayerActor *, void *);
void *_ZN19PlayerActionRequestD1Ev(void *);
BOOL TalkRequest_AddPlayerMessage();
void TalkRequest_FinishPlayerMessage();
void _ZN9Character17attachTalkRequestEi(PlayerActor *, MsgRequest *);
void _ZN9Character17detachTalkRequestEi(PlayerActor *, MsgRequest *);
void Camera_SetMode4();
void Camera_SetModeDefault();
BOOL _ZN13AnimFrameCtrl14hasPassedFrameEi(void *, u32);
BOOL _ZN13AnimFrameCtrl10isFinishedEv(void *);
void PlayerActor_ApproachAngle(void *, s32, u32, u32, u32);
void _ZN11PlayerActor9setAngleYEPs(PlayerActor *, void *);
static inline BOOL Unk_02008858_IsZero(u8 v) {
    return v == 0 ? TRUE : FALSE;
}
}
}

// ---- unk_02008cc0.cpp
namespace nG {
extern "C" {

inline s32 Unk_0200905c_abs(s32 x) { return x < 0 ? -x : x; }
extern void *gCommManager;
extern u32 sPlayerAct76Anims[];
extern u16 data_020c61c0[];
extern s16 data_02135f44[];
extern u8 gFieldSceneKind;
void TalkRequest_FinishSceneEntry();
s32 _ZN11PlayerActor13startAnimOnceEijt(PlayerActor *, u32, u32, u32);
s32 _ZN11PlayerActor15getHeldToolKindEv(PlayerActor *);
BOOL _ZN11CommManager11isLocalSlotEj(void *, s32);
void *_ZN19PlayerActionRequestC1Ev(void *);
void _ZN19PlayerActionRequest6assignEiis(void *, u32, u32, u32);
void *_ZN19PlayerActionRequestD1Ev(void *);
void _ZN11PlayerActor11advanceAnimEv(PlayerActor *);
void _ZN11PlayerActor18updateBodyColliderEv(PlayerActor *);
void _ZN11PlayerActor12requestAct10Esji(PlayerActor *, u32, u32, s32);
void _ZN12Unk_0200769412requestAct05Etjj(PlayerActor *, u32, u32, s32);
s32 _ZN11PlayerActor11requestWaitEjjj(PlayerActor *, u32, u32, s32);
void TalkRequest_FinishLeaveRoom();
void PlayerActor_TurnAngle(void *, s32);
void _ZN11PlayerActor9setAngleYEPs(PlayerActor *, void *);
void _ZN11PlayerActor17moveWithCollisionEv(PlayerActor *);
s32 Ground_GetDefaultY(u32);
s32 FX_Div(s32, s32);
s32 func_01ffcb0c(s32, s32);
void _ZN11PlayerActor10switchAnimEijt(PlayerActor *, u32, u32, u32);
void _ZN17TwoLayerAnimModel12updateLayersEv(void *);
void _ZN11PlayerActor16updateFootstepFxEv(PlayerActor *);
s32 Scene_GetCurrent();
void PlayerActor_ApproachCoord(void *, s32);
s32 Vec_MagXZ(void *);
s32 Vec_DistXZ(void *, void *);
s32 PlayerActor_Decelerate(s32 v, s32 min);
s32 PlayerActor_Accelerate(s32, s32);
s32 Math_Atan2(s32, s32);
void _ZN11PlayerActor8setSpeedEPj(PlayerActor *, void *);
BOOL _ZN11PlayerActor16isGuestInSessionEv(PlayerActor *);
void *PlayerActor_GetPlayerData(PlayerActor *);
void Clock_GetDateTime(void *);
void DateTime_SubDays(void *, s32);
void _ZN10PlayerData15setLastPlayDateE17Unk_0209865c_Bits(void *, Unk_020092c8_Bits);
void _ZN11PlayerActor18netFollowTransformEv(PlayerActor *);
void _ZN11PlayerActor12turnToCameraEi(PlayerActor *, u32);
void _ZN11PlayerActor17applyHeldItemPoseEiPv(PlayerActor *, u32, u32);
BOOL _ZN13AnimFrameCtrl10isFinishedEv(void *);
u16 *_ZN10PlayerData11getHeldItemEv();
void _ZN11PlayerActor20netSendClothesChangeEjj(PlayerActor *, u32, u32);
void _ZN11PlayerActor12requestAct10Esji(PlayerActor *, u32, u32, s32);
BOOL _ZN11PlayerActor11pushRequestEP19PlayerActionRequest(void *, void *msg);
void _ZN11PlayerActor15clearActionFlagEj(void *, u32 id);
BOOL _ZN11PlayerActor14testActionFlagEj(void *, u32 id);
s32 _ZN11PlayerActor9startAnimEijt(void *, u32 a, u32 b, u32 c);
void _ZN11PlayerActor13setActionFlagEj(void *, u32 id);
s32 _ZN12Unk_0200769421getActionDonePriorityEj(void *, s32 v);
}
}

// ---- unk_020095f8.cpp
namespace nH {
extern "C" {

extern u8 gFieldSceneKind;
extern CommManager* gCommManager;
extern s16 data_02135f44[];
extern u32 data_020d5e4c[];
s32 func_01ffcb0c(s32 a, s32 b);
s32 _s32_div_f(s32 a, s32 b);
s32 Math_Atan2(s32 a, s32 b);
s32 Math_AngleDiffAbs(s32 a, s32 b);
BOOL _ZN11CommManager11isLocalSlotEj(CommManager* p, u32 v);
void _ZN10PlayerData11setHeldItemEPt(void* p, void* q);
BOOL _ZN13AnimFrameCtrl10isFinishedEv(void* p);
BOOL _ZN13AnimFrameCtrl14hasPassedFrameEi(void* p, u32 v);
void _ZN17TwoLayerAnimModel12updateLayersEv(void* p);
void _ZN19PlayerActionRequestC1Ev(PlayerAct30Request* p);
void _ZN19PlayerActionRequest6assignEiis(PlayerAct30Request* p, u32 a, u32 b, u32 c);
void _ZN19PlayerActionRequestD1Ev(PlayerAct30Request* p);
void PlayerActor_GetHeldItem(u16* out, void* p);
void _ZN11PlayerActor9setAngleYEPs(void* p, void* q);
s32 _ZN11PlayerActor8setSpeedEPj(void* p, void* q);
s32 PlayerActor_Accelerate(s32 a, s32 b);
void PlayerActor_TurnAngle(void* out, s32 a);
void PlayerActor_SetArgsAct30(PlayerAct30Args* p, u32 a, u32 b, u32 c, u32 d);
void PlayerActor_InitAct32Work(u32* p);
void PlayerActor_NetReadChangeHeldItem(void* p, u16* out);
void PlayerActor_NetWriteChangeHeldItem(void* p, u32 v);
void PlayerActor_NetReadChangeHeldItem(void* p, u16* out);
void PlayerActor_NetWriteChangeHeldItem(void* p, u32 v);
void PlayerActor_InitAct32Work(u32* p);
void PlayerActor_SetArgsAct30(PlayerAct30Args* p, u32 a, u32 b, u32 c, u32 d);
static inline BOOL Unk_02009624_Check()
{
    if (gFieldSceneKind == 0) {
        return TRUE;
    }
    return FALSE;
}
void* PlayerActor_GetPlayerData(void *);
s32 _ZN11PlayerActor13startAnimOnceEijt(void *, u32 a, u32 b, u32 c);
void _ZN11PlayerActor6playSeEj(void *, u32 a);
s32 _ZN11PlayerActor11pushRequestEP19PlayerActionRequest(void *, PlayerAct30Request* p);
void _ZN11PlayerActor11advanceAnimEv(void *);
void _ZN11PlayerActor18updateBodyColliderEv(void *);
u32 _ZN12Unk_0200769421getActionDonePriorityEj(void *, u32 a);
void _ZN11PlayerActor12requestAct10Esji(void *, u32 a, u32 b, s32 c);
void _ZN11PlayerActor17moveWithCollisionEv(void *);
void _ZN11PlayerActor15moveNoCollisionEv(void *);
void _ZN11PlayerActor16updateFootstepFxEv(void *);
s32 _ZN11PlayerActor18getRemoteTransformEPhPiS1_Pt(void *, s16* a, VecFx32* b, s32* c, s16* d);
s32 _ZN11PlayerActor9startAnimEijt(void *, u32 a, u32 b, u32 c);
void _ZN11PlayerActor17pickUpUpdateStoreEPhh(void *, u8* p, u32 a);
void _ZN11PlayerActor15netSyncNearUnitEPi(void *, u32* p);
void _ZN11PlayerActor20pickUpRemoteCheckEndEv(void *);
void _ZN11PlayerActor15clearActionFlagEj(void *, u32 a);
void _ZN11PlayerActor18updateShownItemPosEjz(void *, u32 a);
}
}

// ---- unk_02009f68.cpp
namespace nI {
extern "C" {

static inline BOOL Unk_0200a114_IsZero(u8* p)
{
    if (*p == 0) return TRUE;
    return FALSE;
}
void PlayerActor_NetReadPickUpFanfareStow(PlayerNetPickUpFanfareStowArgs* src, Unk_02006d14_Pair* out, u8* b);
void PlayerActor_NetWritePickUpFanfareStow(PlayerNetPickUpFanfareStowArgs* dst, Unk_02006d14_Pair* p, u8 b);
void PlayerActor_SetArgsPickUpFanfareStow(PlayerPickUpFanfareStowArgs* dst, Unk_02006d14_Pair* p, u8 b);
void PlayerActor_NetReadPickUpFanfare(PlayerNetPickUpFanfareArgs* s, Unk_02006d14_Pair* out, u16* h, u8* b);
void PlayerActor_NetWritePickUpFanfare(PlayerNetPickUpFanfareArgs* s, Unk_02006d14_Pair* p, u16 h, u8 b);
void PlayerActor_SetArgsPickUpFanfare(PlayerPickUpFanfareArgs* s, Unk_02006d14_Pair* p, u16 h, u8 b);
extern CommManager* gCommManager;
extern u8 gFieldSceneKind[];
extern u8 sPlayerActorErrorMsgFile[];
extern u8 sPlayerActorMsgFile[];
extern void* gSceneBlockMap;
BOOL _ZN11CommManager11isLocalSlotEj(CommManager* p, u32 v);
void _ZN19PlayerActionRequestC1Ev(PlayerActionRequestHead* o);
void _ZN19PlayerActionRequest6assignEiis(PlayerActionRequestHead* o, u32 a, u32 b, s16 c);
void _ZN19PlayerActionRequestD1Ev(PlayerActionRequestHead* o);
void PendingUnit_CommitAt(Unk_02006d14_Pair* p, u32 v);
void PendingUnit_ApplyAt(Unk_02006d14_Pair* p, u32 v);
BOOL _ZN13AnimFrameCtrl14hasPassedFrameEi(void* p, u32 v);
BOOL _ZN13AnimFrameCtrl10isFinishedEv(void* p);
void _ZN10MsgRequest11setFileNameEPKc(void* p, void* q);
void FieldPos_FromUnitCenter(void* p, u32 a, u32 b);
BOOL Item_IsFurniture(u16* p);
s32 Item_GetFurnitureIndex(u16* p);
void* BlockMap_GetItemPtrAtPos(void* a, void* b, u32 c);
BOOL TalkRequest_AddPlayerMessage();
BOOL TalkRequest_IsPlayerMessage();
void TalkRequest_FinishPlayerMessage();
void Camera_SetMode4();
void Camera_SetModeDefault();
s32 FieldAction_RequestPlaceAtPendingForAid(u32 a, u32 b);
void PlayerActor_NetReadPickUpFanfareStow(PlayerNetPickUpFanfareStowArgs* src, Unk_02006d14_Pair* out, u8* b);
void PlayerActor_NetWritePickUpFanfareStow(PlayerNetPickUpFanfareStowArgs* dst, Unk_02006d14_Pair* p, u8 b);
void PlayerActor_SetArgsPickUpFanfareStow(PlayerPickUpFanfareStowArgs* dst, Unk_02006d14_Pair* p, u8 b);
void PlayerActor_NetReadPickUpFanfare(PlayerNetPickUpFanfareArgs* s, Unk_02006d14_Pair* out, u16* h, u8* b);
void PlayerActor_NetWritePickUpFanfare(PlayerNetPickUpFanfareArgs* s, Unk_02006d14_Pair* p, u16 h, u8 b);
void PlayerActor_SetArgsPickUpFanfare(PlayerPickUpFanfareArgs* s, Unk_02006d14_Pair* p, u16 h, u8 b);
void _ZN11PlayerActor6playSeEj(void *, u32 id);
void _ZN11PlayerActor13startAnimOnceEijt(void *, u32 a, u32 b, u32 c);
s32 _ZN11PlayerActor15getHeldToolKindEv(void *);
s32 _ZN11PlayerActor11pushRequestEP19PlayerActionRequest(void *, PlayerActionRequestHead* o);
void _ZN11PlayerActor11advanceAnimEv(void *);
void _ZN11PlayerActor18updateBodyColliderEv(void *);
void _ZN11PlayerActor15netSyncNearUnitEPi(void *, Unk_02006d14_Pair* p);
void _ZN11PlayerActor13setActionFlagEj(void *, u32 id);
void _ZN11PlayerActor15clearActionFlagEj(void *, u32 id);
u8 _ZN12Unk_0200769421getActionDonePriorityEj(void *, u32 id);
void _ZN9Character17attachTalkRequestEi(void *, MsgRequest *p);
void _ZN9Character17detachTalkRequestEi(void *, MsgRequest *p);
void _ZN11PlayerActor11calcHandMtxEv(void *);
void _ZN11PlayerActor18updateShownItemPosEjz(void *, u32 v);
void _ZN11PlayerActor12turnToCameraEi(void *, u32 v);
BOOL _ZN11PlayerActor14testActionFlagEj(void *, u32 id);
void _ZN11PlayerActor16pickUpUpdateAnimEP19PlayerActionRequestj(void *);
void _ZN11PlayerActor19submitSceneColliderEv(void *);
void _ZN11PlayerActor16pickUpUpdateItemEv(void *);
void _ZN11PlayerActor9startAnimEijt(void *, u32 a, u32 b, u32 c);
void _ZN11PlayerActor11requestWaitEjjj(void *, u32 a, u32 b, s32 c);
}
}

// ---- unk_0200abc8.cpp
namespace nJ {
extern "C" {

extern void* gCommManager;
extern u8 sPlayerActorMsgFile[];
extern u8 sPlayerActorErrorMsgFile[];
BOOL _ZN11CommManager11isLocalSlotEj(void* p, u32 v);
BOOL TalkRequest_AddPlayerMessage();
void TalkRequest_FinishPlayerMessage();
void FieldPos_FromUnitCenter(void* p, u32 a, u32 b);
u16* BlockMap_GetItemPtrAtPos(void* p, void* q, u32 z);
BOOL _ZN10PlayerData8testFlagEj(void* p, u32 v);
void _ZN10PlayerData7setFlagEj(void* p, u32 v);
void PendingUnit_CommitAt(Vec2* p, u32 z);
void PendingUnit_ApplyAt(Vec2* p, u32 z);
void VillagerTrend_NotifyUnk6(void* p);
extern void* gSceneBlockMap;
BOOL Item_IsFurniture(void* p);
u32 Item_GetFurnitureIndex(void* p);
void _ZN9Character17attachTalkRequestEi(PlayerActor *a, MsgRequest *b);
void _ZN9Character17detachTalkRequestEi(PlayerActor *a, MsgRequest *b);
void _ZN10MsgRequest11setFileNameEPKc(void* p, void* q);
s32 _s32_div_f(s32 a, s32 b);
u32 _ZN13AnimFrameCtrl14hasPassedFrameEi(void* p, u32 id);
void _ZN19PlayerActionRequestC1Ev(void* p);
void _ZN19PlayerActionRequest6assignEiis(void* p, u32 a, s32 b, s16 c);
s32 _ZN11PlayerActor11pushRequestEP19PlayerActionRequest(void* self, void* p);
void _ZN19PlayerActionRequestD1Ev(void* p);
void PlayerActor_NetWritePickUp(PlayerNetPickUpArgs* dst, Vec2* pos, s8 a, u16 b, u8 c);
void PlayerActor_NetReadPickUp(PlayerNetPickUpArgs* src, Vec2* pos, s8* a, u16* b, u8* c);
void PlayerActor_NetWritePickUp(PlayerNetPickUpArgs* dst, Vec2* pos, s8 a, u16 b, u8 c);
void PlayerActor_SetArgsPickUp(PlayerPickUpArgs* out, Vec2* pos, s32 a, s32 b, u8 c);
static inline BOOL Unk_0200add8_R1(u16* p, u32 lo, u32 hi) { BOOL r = FALSE; if (*p >= lo && *p <= hi) r = TRUE; return r; }
static inline BOOL Unk_0200add8_InRange(u32 c, u32 lo, u32 hi) { BOOL r = FALSE; if (c >= lo && c <= hi) r = TRUE; return r; }
static inline BOOL Unk_0200add8_IsFFF1(u16* p, u16* t) {
    BOOL r;
    if (Item_IsFurniture(p)) {
        *t = 0xfff1;
        r = Item_GetFurnitureIndex(p) == Item_GetFurnitureIndex(t) ? TRUE : FALSE;
    } else {
        r = *p == 0xfff1 ? TRUE : FALSE;
    }
    return r;
}
void _ZN11PlayerActor11advanceAnimEv(void *);
void _ZN11PlayerActor6playSeEj(void *, u32 id);
void _ZN11PlayerActor15clearActionFlagEj(void *, u32 id);
void _ZN11PlayerActor21pickUpReachWaitAnswerEv(void *);
void _ZN11PlayerActor18updateBodyColliderEv(void *);
void _ZN11PlayerActor15netSyncNearUnitEPi(void *, Vec2* pos);
u32 _ZN12Unk_0200769421getActionDonePriorityEj(void *, u32 id);
void _ZN11PlayerActor22requestPickUpFanfareAtEP17Unk_02006d14_Pairhjs(void *, Vec2* pos, u32 a, u32 b, s32 c);
void _ZN11PlayerActor11requestWaitEjjj(void *, u32 a, u32 b, s32 c);
void _ZN11PlayerActor13setActionFlagEj(void *, u32 id);
void _ZN11PlayerActor11calcHandMtxEv(void *);
void _ZN11PlayerActor18updateShownItemPosEjz(void *, u32 a);
void _ZN11PlayerActor13startAnimOnceEijt(void *, u32 a, u32 b, u32 c);
s32 _ZN11PlayerActor15getHeldToolKindEv(void *);
}
}

// ---- unk_0200b510.cpp
namespace nK {
extern "C" {

static inline void func_0200bc78_sub(VecFx32Ctor *o, VecFx32Ctor *a, VecFx32Ctor *b) {
    o->x = a->x - b->x;
    o->z = a->z - b->z;
}
extern u8 gFieldSceneKind;
extern void *gSceneBlockMap;
extern void *gCommManager;
extern u8 data_020c61d0[];
extern u16 gPad[];
BOOL Scene_InHouseRoom();
void FieldPos_FromUnitCenter(void *, u32, u32);
u16 *BlockMap_GetItemPtrAtPos(void *, void *, u32);
void *_ZN19PlayerActionRequestC1Ev(void *);
void _ZN19PlayerActionRequest6assignEiis(void *, u32, u32, s32);
void *_ZN19PlayerActionRequestD1Ev(void *);
BOOL _ZN13AnimFrameCtrl10isFinishedEv(void *);
BOOL _ZN13AnimFrameCtrl14hasPassedFrameEi(void *, u32);
void _ZN12NpcEmotionFx6updateEPvsit(void *, void *, s32, u32, u32);
void _ZN12NpcEmotionFx10startEntryEP15NpcEmotionPhasei(void *, void *, u32);
void _ZN12NpcEmotionFx4stopEv(void *);
BOOL _ZN11CommManager11isLocalSlotEj(void *, s32);
void *TalkRequest_GetTalkTarget();
s32 Math_Atan2(s32, s32);
void PlayerActor_TurnAngle(void *, s32);
void _ZN11PlayerActor11advanceAnimEv(void *);
s32 _ZN11PlayerActor15requestPickUpAtEP4Vec2ihis(void *, Unk_0200b750_Pair pr, s32 a, s32 b, u32 c, s32 d);
void _ZN11PlayerActor15clearActionFlagEj(void *, u32 id);
s32 _ZN11PlayerActor9startAnimEijt(void *, u32 a, u32 b, u32 c);
s32 _ZN11PlayerActor13startAnimOnceEijt(void *, u32 a, u32 b, u32 c);
s32 _ZN11PlayerActor15getHeldToolKindEv(void *);
BOOL _ZN11PlayerActor11pushRequestEP19PlayerActionRequest(void *, void *msg);
void _ZN11PlayerActor18updateBodyColliderEv(void *);
void _ZN11PlayerActor6playSeEj(void *, u32 id);
s32 _ZN11PlayerActor18netFollowTransformEv(void *);
s32 _ZN12Unk_0200769412requestAct05Etjj(void *, u32 a, u32 b, s32 c);
s32 _ZN11PlayerActor8playAnimEijhijti(void *, u32 a, u32 b, u32 c, u32 d, u32 e, u32 f, u32 g);
s32 _ZN12Unk_0200769421getActionDonePriorityEj(void *, s32 v);
void _ZN11PlayerActor17moveWithCollisionEv(void *);
BOOL _ZN11PlayerActor14testActionFlagEj(void *, u32 id);
void _ZN11PlayerActor9setAngleYEPs(void *, void *p);
void _ZN11PlayerActor17resetHeldToolAnimEv(void *);
s32 _ZN12Unk_0200769420changeClothesEffectsEv(void *);
void _ZN12Unk_0200769418changeClothesApplyEv(void *);
void _ZN12Unk_0200769417changeClothesSpinEv(void *);
}
}

// ---- unk_0200be2c.cpp
namespace nL {
extern "C" {

BOOL _ZN13AnimFrameCtrl14hasPassedFrameEi(void *p, u32 a);
u32 _ZN10PlayerData11getFaceTypeEv(void *p);
void _ZN16PlayerFaceTexRef4loadEj(void *p, u32 a);
void VillagerStates_ClearUnk1dBit0();
BOOL _ZN11CommManager11isLocalSlotEj(u32 a, u32 b);
void PlayerActor_TurnAngle(void *p, s32 a);
void PlayerActor_GetHat(u16 *out, Unk_02007694 *o);
s32 PlayerActor_DecelerateSkid(s32 a, u32 b);
s32 func_01ffcb0c(s32 a, s32 b);
u32 _ZN10PlayerData10getFortuneEv(void *p);
s32 Math_AngleDiffAbs(s32 a, s32 b);
void PlayerActor_RequestTrip(Unk_02007694 *o, u32 a, s32 b);
extern u32 gCommManager;
extern u8 gFieldSceneKind;
extern s16 data_02135f44[];
extern u8 data_020d5e3c[];
extern u8 data_020d5e44[];
void _ZN11PlayerActor9setAngleYEPs(void *, s16 *p);
void _ZN11PlayerActor15clearActionFlagEj(void *, u32 a);
void _ZN11PlayerActor13setActionFlagEj(void *, u32 a);
void _ZN11PlayerActor19setMouthAnimForBodyEPiPh(void *, void *a, u8 *b);
u32 PlayerActor_GetHairStyle(void *);
u32 PlayerActor_GetHairColor(void *);
BOOL _ZN11PlayerActor16requestHatChangeEPthhh(void *, u16 *a, u32 b, u32 c, u32 d);
BOOL _ZN11PlayerActor21requestFaceItemChangeEPt(void *, u16 *a);
void _ZN11PlayerActor15setShirtTextureEPv(void *, u16 *p);
BOOL _ZN11PlayerActor21requestShirtTexUploadEv(void *);
void _ZN11PlayerActor11advanceAnimEv(void *);
void PlayerActor_NetSendFaceChange(void *);
void _ZN11PlayerActor20netSendClothesChangeEjj(void *, u32 a, u32 b);
void _ZN11PlayerActor13startAnimOnceEijt(void *, u32 a, u32 b, u32 c);
void _ZN11PlayerActor6playSeEj(void *, u32 a);
void _ZN19PlayerActionRequest6assignEiis(void *, u32 a, u32 b, u32 c);
u32 _ZN11PlayerActor11pushRequestEP19PlayerActionRequest(void *, PlayerActionRequest *p);
BOOL _ZN11PlayerActor18netFollowTransformEv(void *);
void _ZN11PlayerActor17moveWithCollisionEv(void *);
void _ZN11PlayerActor18updateBodyColliderEv(void *);
void _ZN11PlayerActor9startAnimEijt(void *, u32 a, u32 b, u32 c);
void _ZN11PlayerActor17resetHeldToolAnimEv(void *);
void _ZN11PlayerActor19submitSceneColliderEv(void *);
u8 _ZN12Unk_0200769421getActionDonePriorityEj(void *, u32 a);
void _ZN11PlayerActor11requestWaitEjjj(void *, u32 a, u32 b, s32 c);
void _ZN11PlayerActor8setSpeedEPj(void *, s32 *p);
void _ZN11PlayerActor15walkUpdateSpeedEv(void *);
void _ZN11PlayerActor8walkMoveEv(void *);
void _ZN11PlayerActor14walkUpdateLeanEv(void *);
u8 _ZN11PlayerActor13walkFollowNetEv(void *);
void _ZN11PlayerActor15moveNoCollisionEv(void *);
void _ZN11PlayerActor21netUpdateBodyColliderEv(void *);
s32 _ZN11PlayerActor17getInputMagnitudeEv(void *);
u16 _ZN11PlayerActor13getInputAngleEv(void *);
void _ZN11PlayerActor11tryInteractEv(void *);
}
}

// ---- unk_0200c778.cpp
namespace nM {
extern "C" {

extern s16 data_02135f44[];
extern u8 gFieldSceneKind;
extern u8 gScreenTransition;
extern u8 sHouseRoachActiveCount;
extern CommManager *gCommManager;
extern u8 *data_021c1b3c;
s32 FX_Div(s32 a, s32 b);
s32 func_01ffcb0c(s32 a, s32 b);
s32 FX_Sqrt(s32 a);
s32 Vec_DistXZ(void *a, void *b);
void _ZN17TwoLayerAnimModel12updateLayersEv(void *p);
BOOL _ZN11CommManager11isLocalSlotEj(void *p, s32 v);
BOOL Scene_GetCurrent();
s32 Scene_InHouseRoom();
s32 Scene_InUnk6To8();
s32 Scene_InTown();
s32 Scene_NoPlayerInUnsharedScene();
void _ZN12NpcEmotionFx5resetEv(void *p);
void _ZN12SndSeEmitter8callInitEv(void *p);
s32 Ground_GetHeightAt(void *p, s32 a, s32 b);
void TalkRequest_FinishSceneEntry();
void _ZN8FaintBgm12startSilenceEv(void *p);
s32 PlayerActor_Accelerate(s32 a, s32 b);
s32 PlayerActor_Decelerate(s32 a, s32 b);
void PlayerActor_TurnAngle(void *p, s32 a);
void PlayerActor_TurnAngleSlow(void *p, s32 a);
void PlayerActor_ApproachCoord(void *p, s32 a);
void FishShadow_RunAi(void *t, s32 a, s32 b, s32 c);
void PlayerActor_RequestDoorExit(void *t, s32 a, s32 b);
void PlayerActor_RequestFaint(void *t, s32 a, s32 b, s32 c);
void PlayerActor_RequestAct3C(void *t, s32 a, s32 b);
void PlayerActor_RequestAct6E(void *t, s32 a, s32 b);
void PlayerActor_RequestAct43(void *t, s32 a, s32 b);
void PlayerActor_RequestAct44(void *t, s32 a, s32 b);
void PlayerActor_RequestSit(void *t, s32 a, s32 b, s32 c);
void PlayerActor_RequestDoorWalkIn(void *t, void *a, s32 b, s32 c);
void PlayerActor_RequestExitWalkIn(void *t, void *a, s32 b, s32 c);
void PlayerActor_SetArgsWalk(u8 *p, u32 v);
void PlayerActor_SetArgsWait(u16 *p, u32 v);
void PlayerActor_SetArgsWalk(u8 *p, u32 v);
void PlayerActor_SetArgsWait(u16 *p, u32 v);
void PlayerActor_LevelTiltForAction(void *, s32 a, u32 b);
void _ZN11PlayerActor12approachRotXEi(void *, s32 a);
void _ZN11PlayerActor9setAngleYEPs(void *, void *p);
void _ZN11PlayerActor8setSpeedEPj(void *, void *p);
void _ZN11PlayerActor10switchAnimEijt(void *, u32 a, u32 b, u32 c);
void _ZN11PlayerActor16updateFootstepFxEv(void *);
BOOL _ZN11PlayerActor18getRemoteTransformEPhPiS1_Pt(void *, u8 *a, s32 *x, s32 *z, s16 *b);
BOOL PlayerActor_CalcNetFollowAngle(void *, s32 dx, s32 dz, s32 d2, s32 b, s16 *out);
s32 _ZN11PlayerActor18getTargetWalkSpeedEv(void *);
s32 _ZN11PlayerActor13getInputAngleEv(void *);
void _ZN11PlayerActor9startAnimEijt(void *, u32 a, u32 b, u32 c);
s32 _ZN11PlayerActor15getHeldToolKindEv(void *);
void _ZN19PlayerActionRequest6assignEiis(void *, u32 a, u32 b, u32 c);
BOOL _ZN11PlayerActor11pushRequestEP19PlayerActionRequest(void *, PlayerActionRequest *m);
void _ZN11PlayerActor17moveWithCollisionEv(void *);
void _ZN11PlayerActor11advanceAnimEv(void *);
void _ZN11PlayerActor18updateBodyColliderEv(void *);
void _ZN11PlayerActor19submitSceneColliderEv(void *);
void _ZN11PlayerActor21netUpdateBodyColliderEv(void *);
void _ZN11PlayerActor12requestAct77Esjj(void *, s32 a, s32 b, s32 c);
BOOL _ZN11PlayerActor11tryInteractEv(void *);
BOOL _ZN11PlayerActor16checkLidAndErrorEv(void *);
void _ZN11PlayerActor17resetHeldToolAnimEv(void *);
void _ZN11PlayerActor15clearActionFlagEj(void *, s32 id);
s32 _ZN11PlayerActor16finishModelSetupEv(void *);
s32 _ZN12Unk_0200769421getActionDonePriorityEj(void *, s32 a);
void _ZN11PlayerActor13setActionFlagEj(void *, s32 id);
s32 PlayerActor_IsWaitingForSlots(void *);
BOOL _ZN11PlayerActor14testActionFlagEj(void *, s32 id);
void _ZN11PlayerActor12requestAct10Esji(void *, u32 a, u32 b, s32 c);
void _ZN11PlayerActor17offsetSpawnBySlotEv(void *);
}
}

// ---- unk_0200d2b4.cpp
namespace nN {
extern "C" {

void _ZN11CachedModel11setFromFileEPv(void *p, void *v);
void _ZN11CachedModel16allocJointRecordEPv(void *p, void *v);
void _ZN17TwoLayerAnimModel15allocLayerAnimsEj(void *p, void *v);
void _ZN9AnimModel10attachAnimEv(void *p);
void _ZN5Model11setCallbackEiiiii(void *p, void (*f)(void *), u32 a, u32 b, void *c, u32 d);
void _ZN13MatTexPatAnim10applyFrameEv(void *p);
void PlayerActor_JointCbPre(void *p);
BOOL _ZN11CommManager11isLocalSlotEj(void *a, s32 b);
s32 Scene_GetCurrent();
u16 *_ZN10PlayerData11getHeldItemEv();
BOOL Item_IsFurniture(u16 *p);
s32 Item_GetFurnitureIndex(u16 *p);
s32 Scene_NoPlayerInUnsharedScene();
void TalkRequest_FinishSceneEntry();
BOOL TalkRequestFlags_IsResetti();
u8 *Scene_GetTouchPicker();
s32 TouchPick_GetGroundPos(u8 *obj, VecFx32Ctor *out);
BOOL TouchPickResult_GetTarget(u8 *obj, VecFx32Ctor *out, s32 *a, u8 *b);
u16 *BlockMap_GetItemPtrAtPos(void *a, VecFx32Ctor *b, u32 c);
void FieldPos_ToUnit(s32 *x, s32 *y, VecFx32Ctor *v);
void FieldPos_SnapToUnitCenter(VecFx32Ctor *a, VecFx32Ctor *b);
BOOL Camera_ProjectCurvedToScreen(s32 *a, s32 *b, VecFx32Ctor *p);
s32 Vec_MagXZ(VecFx32Ctor *v);
s32 Math_Atan2(s32 a, s32 b);
s32 func_01ffcb0c(s32 a, s32 b);
s32 FX_Div(s32 a, s32 b);
s32 FX_Sqrt(s32 a);
extern Unk_0200d64c_Keys gPad;
extern u8 gScreenTransition;
extern s32 gGfxMainOnTop;
extern void *gSceneBlockMap;
extern u8 data_020d5e50[];
extern u8 data_020d5e34[];
extern u8 data_020d5e48[];
extern s16 data_02135f44[];
extern u8 data_020c6190[];
extern u8 data_020c61b8[];
extern void *gCommManager;
extern void *gCamera;
static inline BOOL Unk_0200d64c_InRange(u16 h) {
    if (h >= 0xfc && h <= 0xfd) {
        return TRUE;
    }
    return FALSE;
}
static inline BOOL Unk_0200d64c_IsTwo() {
    return gScreenTransition == 2;
}
static inline BOOL Unk_0200d64c_Both() {
    return gTouchPrevHeld && gTouchPrevChanged;
}
void _ZN11PlayerActor13initFaceAnimsEv(void *);
void _ZN11PlayerActor9startAnimEijt(void *, u32 a, u32 b, u32 c);
BOOL _ZN11PlayerActor14testActionFlagEj(void *, s32 id);
void _ZN11PlayerActor9setAngleYEPs(void *, u16 *p);
void _ZN19PlayerActionRequest6assignEiis(void *, u32 a, u32 b, u32 c);
u32 _ZN11PlayerActor11pushRequestEP19PlayerActionRequest(void *, PlayerActionRequest *p);
VecFx32Ctor PlayerActor_OffsetByAngle(void *, VecFx32Ctor *a, s16 *b, void *c);
BOOL PlayerActor_IsWaitingForSlots(void *);
void _ZN11PlayerActor15clearActionFlagEj(void *, s32 id);
BOOL _ZN11PlayerActor15getHeldToolKindEv(void *);
}
}

// ---- unk_0200dde0.cpp
namespace nO {
extern "C" {

void _ZN20CharaFaceAnimWorkRef6assignEj(void *, u32);
void _ZN16CharaFaceAnimRef6assignEj(void *, u32);
void _ZN16PlayerFaceTexRef6assignEj(void *, u32);
void _ZN16PlayerFaceTexRef4loadEj(void *, s32);
void _ZN10FishBobber11setOwnerAidEi(void *, s32);
void _ZN12Unk_02005e7c15processRequestsEv(void *);
void _ZN16CharaClothTexRef6assignEj(void *, u32);
s32 NNS_G3dGetTex(s32 a);
s32 func_01ffcb0c(s32 a, s32 b);
s32 Math_Atan2(s32 a, s32 b);
s32 Item_IsFurniture(u16 *p);
s32 Item_GetFurnitureIndex(u16 *p);
void PlayerActor_GetHeldItem(u16 *out, void *obj);
void PlayerActor_GetFaceItem(u16 *out, void *obj);
void PlayerActor_GetHat(u16 *out, void *obj);
void PlayerActor_GetShirt(u16 *out, void *obj);
extern u8 data_020c6194[], data_020c6198[], data_020c619c[], data_020c61a0[], data_020c61a4[], data_020c61a8[], data_020c61ac[], data_020c61b0[], data_020c61b4[];
extern u8 gFieldSceneKind;
extern u8 sPlayerActionIsLocomotion[];
extern Unk_021c1b3c *data_021c1b3c;
extern u8 gTalkMsgIndexEnd;
extern char sPlayerClothTexName[], sPlayerSkinPalName[];
BOOL PlayerActor_CalcNetFollowAngle(s32 unused, s32 a, s32 b, s32 c, s16 d, s16 *out);
void _ZN9Character9setCharIdEj(void *, u32 v);
s32 PlayerActor_GetHairColor(void *);
void _ZN11PlayerActor20applySkinHairPaletteEii(void *, s32 a, s32 b);
s32 _ZN11PlayerActor7calcTanEj(void *, s32 v);
s32 PlayerActor_GetFaceTexIndex(void *);
s32 PlayerActor_GetPlayerData(void *);
void _ZN11PlayerActor11requestInitEjjj(void *, s32 a, s32 b, s32 c);
BOOL _ZN11PlayerActor13setActionFlagEj(void *, s32 v);
BOOL _ZN11PlayerActor21requestFaceItemChangeEPt(void *, u16 *v);
BOOL _ZN11PlayerActor19applyFaceItemChangeEv(void *);
s32 PlayerActor_GetHairStyle(void *);
BOOL _ZN11PlayerActor16requestHatChangeEPthhh(void *, u16 *a, s32 b, s32 c, s32 d);
BOOL PlayerActor_GetGender(void *);
void _ZN11PlayerActor15setShirtTextureEPv(void *, void *v);
void _ZN11PlayerActor17bindTextureByNameEPvS0_S0_S0_(void *, s32 a, s32 b, const char *c, const char *d);
void _ZN11PlayerActor17bindPaletteByNameEPvS0_S0_S0_(void *, s32 a, s32 b, const char *c, const char *d);
BOOL _ZN11PlayerActor20getHeldHoldableIndexEv(void *);
}
}

// ---- unk_0200e758.cpp
namespace nP {
extern "C" {

extern CommManager *gCommManager;
extern u8 sPlayerActionTalkable[];
extern s16 data_02135f44[];
extern u32 data_020d5e40;
s32 Scene_GetPrevious();
s32 Scene_GetCurrent();
BOOL _ZN11CommManager12isSlotActiveEi(CommManager *g, s32 i);
BOOL _ZN11CommManager8isOnlineEv(CommManager *g);
BOOL _ZN11CommManager11isLocalSlotEj(CommManager *g, s32 i);
s32 _ZN5Actor15calcModelMatrixEPv(PlayerActor *p, void *buf);
s32 _ZN5Model8setAlphaEj(void *p, s32 v);
s32 _ZN17TwoLayerAnimModel11drawLayeredEj(void *p, s32 v);
s32 Model_GetJointWorldMtx(void *p, void *q, s32 v);
s32 Math_Atan2(s32 a, s32 b);
s32 Math_AngleDiffAbs(s32 a, s32 b);
s32 Vec_DistXZ(VecFx32 *a, VecFx32 *b);
s32 func_01ffcb0c(s32 a, s32 b);
void PlayerActor_OffsetByAngle(VecFx32 *out, PlayerActor *p, VecFx32 *v, s16 *ang, u32 arg);
s32 _ZN11PlayerActor18updateBodyColliderEv(PlayerActor *p);
s32 PlayerActor_ApproachAngle(s16 *p, s32 a, s32 b, s32 c, s32 d);
s32 PlayerActor_GetTan(PlayerActor *p);
s32 _ZN11CommManager11beginRecordEv(CommManager *g);
s32 _ZN11CommManager11writeRecordEPhj(CommManager *g, void *p, s32 n);
s32 _ZN11CommManager9endRecordEjj(CommManager *g, s32 a, s32 b);
s32 WorldCurve_FromCurved(VecFx32 *v);
s32 FieldPos_FromUnitCenter(VecFx32 *out, s32 x, s32 z);
s32 Math_ApproachS32(s32 *p, s32 a, s32 b, s32 c, s32 d);
void PlayerActor_CalcHandItemPos(VecFx32 *out, PlayerActor *p, void *args);
void PlayerActor_StepTowardPoseFast(PlayerActor *p, s32 a, s32 b, s32 c);
BOOL _ZN11PlayerActor18getRemoteTransformEPhPiS1_Pt(PlayerActor *p, u8 *b, s32 *x, s32 *z, s16 *ang);
BOOL PlayerActor_IsWaitingForSlots();
void PlayerActor_NetSendFaceChange();
static inline BOOL Unk_0200ec54_Bit(u32 f, u32 m)
{
    return (f & m) != 0 ? TRUE : FALSE;
}
s32 _ZN11PlayerActor15getHeldToolKindEv(void *);
}
}

// ---- unk_0200f070.cpp
namespace nQ {
extern "C" {

extern s16 data_02135f44[];
extern s32 sPlayerFrontPointDist;
extern void *gCommManager;
extern void *gSceneBlockMap;
extern u32 data_020c6210[];
s32 func_01ffcb0c(s32 a, s32 b);
void MTX_MultVec43(VecFx32 *v, Mtx43 *m, VecFx32 *out);
void WorldCurve_FromCurved(VecFx32 *dst, VecFx32 *src);
BOOL _ZN11CommManager11isLocalSlotEj(void *a, s32 b);
BOOL _ZN11PlayerActor14testActionFlagEj(PlayerActor *o, s32 id);
void _ZN11PlayerActor19requestErrorMessageEhjj(PlayerActor *o, s32 a, s32 b, s32 c);
void _ZN11PlayerActor16requestLidClosedEjj(PlayerActor *o, s32 a, s32 b);
void _ZN10PlayerData15setLastPlayDateE17Unk_0209865c_Bits(s32 a, Unk_0200f17c_Date d);
s32 PlayerActor_GetTan(PlayerActor *o);
BOOL _ZN11PlayerActor16isGuestInSessionEv(PlayerActor *o);
Unk_0200f17c_Date *PlayerSession_GetLastPlayDate();
void PlayerActor_GetPlayerData(void *o);
void Clock_GetDateTime(void *p);
void MI_CpuCopy8(void *a, void *b, s32 n);
s32 DateTime_Compare(void *a, void *b, s32 n);
BOOL _ZN13AnimFrameCtrl14hasPassedFrameEi(void *o, s32 id);
void PlayerActor_OffsetByAngle(VecFx32 *out, void *o, VecFx32 *in, u16 *ang, s32 *p);
void PlayerActor_GetFrontPoint(VecFx32 *out, PlayerActor *o);
void PlayerActor_StepTowardXZ(PlayerActor *o, s32 a, s32 b);
void FieldPos_SnapToUnitCenter(void *a, VecFx32 *v);
BOOL PlayerActor_ApproachAngle(s16 *a, s32 b, s32 c, s32 d, s32 e);
s32 _ZN11PlayerActor9setAngleYEPs(void *o, s16 *a);
void PlayerActor_TurnAngle(s16 *a, s32 b);
s32 PlayerActor_ApproachCoord(void *a, s32 b);
s32 PlayerActor_ApproachValue(void *a, s32 b, s32 c, s32 d, s32 e);
void PlayerActor_GetHeldItem(Unk_0200f660_S *s, PlayerActor *o);
BOOL Item_IsFurniture(Unk_0200f660_S *s);
s32 Item_GetFurnitureIndex(u16 *p);
s32 ItemInfo_GetHoldableIndex(Unk_0200f660_S *s);
s32 _ZN11PlayerActor18getFieldAnswerKindEv(PlayerActor *o);
void FieldPos_ToUnit(s32 *a, s32 *b, s32 c);
void PlayerActor_RequestPickUpItem(PlayerActor *o, Unk_0200f6d4_V2 v, s32 a, s32 b, s32 c);
void _ZN11PlayerActor18requestPickUpReachE17Unk_0200b750_Pairijs(PlayerActor *o, Unk_0200f6d4_V2 v, s32 a, s32 b, s32 c);
void PlayerActor_RequestPluckReach(PlayerActor *o, Unk_0200f6d4_V2 v, s32 a, s32 b);
void PlayerActor_RequestAct66(PlayerActor *o, Unk_0200f6d4_V2 v, s32 a, s32 b, s32 c);
void *BlockMap_GetItemPtr(void *m, s32 a, s32 b, s32 c, s32 d, s32 e);
s32 FieldAction_RequestToolForAid(void *o, Unk_0200f6d4_V2 v, s32 a, s32 b, s32 c);
s32 FieldAction_RequestPickUpForAid(void *o, Unk_0200f6d4_V2 v, s32 a);
s32 FieldAction_RequestFillHoleForAid(void *o, Unk_0200f6d4_V2 v, s32 a);
s32 FieldAction_PollResult(s32 a);
s32 FieldAction_PollDrop(s32 a);
void FieldAction_Release(s32 a);
void *FieldAction_Get(s32 a);
static inline void Unk_0200f070_Set(VecFx32 *r, s32 x, s32 y, s32 z)
{
    r->x = x;
    r->y = y;
    r->z = z;
}
void PlayerActor_CalcHandItemPos(VecFx32 *dst, PlayerActor *o, s32 *p);
void PlayerActor_SetLastPlayDate(PlayerActor *o, s32 a, Unk_0200f17c_Date *d);
s32 PlayerActor_CompareLastPlayDate(void *o, void *a, u8 *b);
s32 PlayerActor_CompareLastPlayDateNow(void *o);
void PlayerActor_OffsetByAngle(VecFx32 *out, void *o, VecFx32 *in, u16 *ang, s32 *p);
void PlayerActor_GetFrontPoint(VecFx32 *out, PlayerActor *o);
void PlayerActor_GetFrontUnitCenter(PlayerActor *a, PlayerActor *b);
void PlayerActor_StepTowardXZ(PlayerActor *o, s32 a, s32 b);
void PlayerActor_StepTowardPoseFast(PlayerActor *o, s32 a, s32 b, s32 c);
void PlayerActor_StepTowardPose(PlayerActor *o, s32 a, s32 b, s32 c);
namespace Unk_0200f7a0_NS {
extern "C" s32 FieldAction_RequestToolForAid(void *o, Unk_0200f6d4_V2 *v, s32 a, s32 b, s32 c);
}
s32 _ZN11PlayerActor10turnTowardEi(void *, s32 a);
}
}

// ---- unk_0200f9bc.cpp
namespace nR {
extern "C" {

inline BOOL Unk_0200f9d4_IsOne(u8 v) { return v == 1 ? TRUE : FALSE; }
inline BOOL Unk_020102a0_IsZero(u8 v) { return v == 0 ? TRUE : FALSE; }
extern u8 gFieldSceneKind;
extern u32 sPlayerReachDist[];
extern u32 data_020cb35c;
extern u32 data_020cb360;
extern u8 sPlayerSkinPalName[], sPlayerEyeTexName[], sPlayerMouthTexName[], sPlayerHairPalName[], sPlayerShirtTexName[], data_020d5e38[];
void *FieldAction_Get(u32 p);
s32 PlayerActor_RoomInteractAt(void *, s32, s32);
s32 PlayerActor_RoomUseTool(void *);
s32 Vec_DistXZ(void *);
s32 Math_Atan2(s32, s32);
s32 Math_AngleDiffAbs(s32, s32);
s32 NNS_G3dGetTex(void *);
void *_ZN16PlayerFaceTexRef9getBufferEv(void *);
void _ZN11CachedModel7releaseEv(void *);
void _ZN11CachedModel11setFromFileEPv(void *, void *);
s32 PlayerHead_GetModelId(void *, s32);
void _ZN13MatTexPatAnim7releaseEv(void *);
void _ZN20CharaFaceAnimWorkRef7getHeapEv(void *);
#define Heap_freeAll _ZN4Heap7freeAllEv
void Heap_freeAll();
void *_ZN16CharaFaceAnimRef16getEyeAnimBufferEv(void *);
void *_ZN16CharaFaceAnimRef18getMouthAnimBufferEv(void *);
void _ZN13MatTexPatAnim7setAnimEPvS0_jhS0_(void *, void *, u32, u32, u32, u32);
s32 PlayerGlassesModelRef_GetModelId(void *);
BOOL Item_IsFlowerAltItem(u16 *);
s32 Item_GetFlowerAltOrdinal(u16 *);
BOOL TalkRequestFlags_IsResetti(void *);
void TalkRequest_AddTalk(void *, void *);
BOOL Character_FindInteractionTarget(void *);
BOOL _ZN9Character16checkInteractionEPS_(void *, void *);
void PlayerActor_OffsetByAngle(VecFx32 *, void *, void *, void *, void *);
void _ZN14MatTexVramTask7requestEPvjS0_jj(void *, u32, void *, u32, u32, u32);
void _ZN16CharaClothTexRef8loadItemEPtiii(void *, s32, void *, u32, u32);
s32 func_01ffcb0c(s32, s32);
BOOL _ZN13ActorCollider12isHitByGroupEj(void *, s32);
BOOL _ZN13ActorCollider17isPushedFromAngleEi(void *, s32);
s32 func_021065dc();
s32 func_021065f8(s32, s32);
void _ZN17TwoLayerAnimModel10playLayer2Ejjjjjji(void *, s32, s32, u32, u32, u32, u32, u32);
void _ZN17TwoLayerAnimModel20assignJointsToLayer2Ejj(void *, s32, s32);
void _ZN17TwoLayerAnimModel23releaseJointsFromLayer2Ejj(void *, s32, s32);
void _ZN17TwoLayerAnimModel18playLayer2FromBaseEjj(void *, s32, s32);
void PlayerActor_GetHeldItem(u16 *, void *);
inline BOOL Unk_02010154_In(u16 *p) { BOOL r = FALSE; u16 v = *p; if (*p >= 0x1380 && v <= 0x139f) r = TRUE; return r; }
BOOL _ZN11PlayerActor14testActionFlagEj(void *, s32 n);
void * PlayerActor_GetGender(void *);
void * PlayerActor_GetPlayerData(void *);
void * _ZN11PlayerActor7calcTanEj(void *, s32 n);
void _ZN11PlayerActor13initFaceAnimsEv(void *);
BOOL _ZN11PlayerActor17isInteractPressedEv(void *);
s32 PlayerActor_GetFaceTexIndex(void *);
BOOL PlayerActor_GetFaceAltFlag(void *);
s32 _ZN11PlayerActor17getInputMagnitudeEv(void *);
}
}

// ---- unk_020102ec.cpp
namespace nS {
extern "C" {

s32 _ZN11PlayerActor19setMouthAnimForBodyEPiPh(PlayerActor *a, s32 *b, u8 *c);
extern void *gCommManager;
extern u8 sPlayerActionColliderFlag2[];
extern u16 sPlayerAnimResIndex[];
BOOL _ZN11CommManager11isLocalSlotEj(void *a, u32 b);
BOOL Scene_InUnk6To8(void);
u32 Scene_GetCurrent(void);
u32 Scene_GetTouchPicker(void);
void _ZN11TouchPicker11addCylinderEP17TouchPickCylinderP7VecFx32S3_S3_ih(u32 a, void *b, void *c, u32 d, u32 e, u32 f, u32 g);
u32 func_021065dc(u32 a);
u32 func_021065f8(u32 a, u32 b);
void BlendAnimModel_Play(void *a, u32 b, u32 c, u32 d, s32 e, u32 f, u32 g);
void _ZN17TwoLayerAnimModel12updateLayersEv(void *a);
void _ZN11PlayerActor17applyHeldItemPoseEiPv(PlayerActor *a, s32 b, u32 c);
void _ZN16CharaFaceAnimRef8loadAnimEiii(void *a, s32 b, u32 c, u32 d);
s32 _ZN16CharaFaceAnimRef18getMouthAnimBufferEv(void *a);
s32 _ZN16CharaFaceAnimRef16getEyeAnimBufferEv(void *a);
void _ZN13MatTexPatAnim7setAnimEPvS0_jhS0_(void *a, s32 b, u32 c, u32 d, u32 e, u32 f);
s32 _ZN13MatTexPatAnim6updateEv(void *a);
s32 _ZN16PlayerFaceTexRef9getBufferEv(void *a);
s32 _ZN20CharaFaceAnimWorkRef7getHeapEv(void *a);
void _ZN13MatTexPatAnim4initEPvS0_jS0_(void *a, s32 b, s32 c, u32 d, s32 e);
void _ZN13ActorCollider6submitEv(void *a);
void _ZN19ActorPlacedCollider15setupForActorAtEPvP7VecFx32iijjjhi(void *a, void *b, u32 c, u32 d, u32 e, u32 f, u32 g, u32 h, u32 i, u32 j);
u32 Ground_GetDefaultY(u32 a);
BOOL _ZN13AnimFrameCtrl14hasPassedFrameEi(void *a, u32 b);
BOOL _ZN11PlayerActor18getRemoteTransformEPhPiS1_Pt(PlayerActor *a, PlayerNetApproachLocals *b, u32 *c, u32 *d, s16 *e);
BOOL PlayerActor_TurnAngleSlow(s16 *a, s32 b);
void PlayerActor_ApproachCoord(void *a, u32 b);
void _ZN5Actor13applyVelocityEP13ActorCollider(PlayerActor *a, void *b);
void _ZN14CollisionStateC1Ev(void *a);
void _ZN14CollisionStateD1Ev(void *a);
void Collision_Move(void *a, void *b, void *c, s32 d, u32 e, void *f, u32 g);
void _ZN5Actor12calcVelocityEv(PlayerActor *a);
void PlayerActor_TurnAngle(void *a);
u32 PlayerActor_GetPlayerData(u32 a);
u32 PlayerActor_GetTan(u32 a);
BOOL _ZN11PlayerActor16isGuestInSessionEv(u32 a);
s32 PlayerActor_CompareLastPlayDate(u32 a, void *b, void *c);
void PlayerActor_SetLastPlayDate(u32 a, u32 b, void *c);
s32 DateTime_DiffDays(void *a, void *b);
void _ZN10PlayerData6setTanEh(u32 a, u32 b);
void _ZN11PlayerActor10netSendTanEv(u32 a);
u16 *_ZN10PlayerData11getHeldItemEv(void);
u32 _ZN10PlayerData11getFaceTypeEv(u32 a);
u16 *_ZN10PlayerData11getFaceItemEv(void);
void PlayerActor_GetHeldItem(u16 *out, u32 x);
u32 PlayerActor_GetFaceTexIndex(u32 x);
u32 PlayerActor_GetFaceAltFlag(u32 x);
void PlayerActor_GetFaceItem(u16 *out, u32 x);
u8 _ZN12Unk_0200769416keepsBgCheckWorkEj(void *, u32 a);
}
}

// ---- unk_02010c74.cpp
namespace nT {
extern "C" {

s32 _ZN10PlayerData6getTanEv(void *p);
s32 _ZN10PlayerData12getHairColorEv(void *p);
s32 _ZN10PlayerData12getHairStyleEv(void *p);
u16 *_ZN10PlayerData6getHatEv(void *p);
u16 *_ZN10PlayerData8getShirtEv(void *p);
s32 _ZN10PlayerData11getPlayerIdEv(void *p);
s32 _ZN8PlayerId9getGenderEv(void);
s32 func_01ffcb0c(s32 a, s32 b);
void *PlayerActor_GetPlayerData(void *p);
s32 PlayerActor_DecreaseClamped(s32 a, s32 b, s32 c);
s32 PlayerActor_ApproachAngle(s16 *p, s32 target, s32 rate, s32 maxstep, s32 minstep);
void PlayerActor_ApproachValue(s32 *p, s32 target, s32 rate, s32 maxstep, s32 minstep);
BOOL _ZN11CommManager11isLocalSlotEj(void *p, s32 v);
s32 Ground_GetExitAtPos(void);
void *Scene_GetWarpRequest(void);
BOOL SceneExit_GetDoor(void *a, s32 b, s32 *c, s32 *d);
BOOL Scene_InUnk6To8(void);
void TalkRequest_FinishSceneEntry(void);
void TalkRequest_AddLeaveRoom(void);
void TalkRequest_AddSceneExit(s32 a, s32 b);
extern void *gCommManager;
s32 PlayerActor_GetTan(void *p);
s32 PlayerActor_GetHairColor(void *p);
s32 PlayerActor_GetHairStyle(void *p);
void PlayerActor_GetHat(u16 *out, void *p);
void PlayerActor_GetShirt(u16 *out, void *p);
BOOL PlayerActor_GetGender(void *p);
void *PlayerActor_GetPlayerData(void *p);
s32 PlayerActor_DecelerateSkid(s32 a, s32 b);
s32 PlayerActor_Decelerate(s32 a, s32 b);
s32 PlayerActor_DecreaseClamped(s32 a, s32 b, s32 c);
s32 PlayerActor_Accelerate(s32 a, s32 b);
s32 PlayerActor_TurnAngleSlow(s16 *p, s32 target);
s32 PlayerActor_TurnAngle(s16 *p, s32 target);
s32 PlayerActor_ApproachAngle(s16 *p, s32 target, s32 rate, s32 maxstep, s32 minstep);
void PlayerActor_ApproachCoord(s32 *p, s32 target);
void PlayerActor_ApproachValue(s32 *p, s32 target, s32 rate, s32 maxstep, s32 minstep);
void PlayerActor_CheckSceneExit(s32 a);
void DC_FlushRange(void *p, u32 size);
void GX_LoadOBJ(void *p, u32 src, u32 size);
void GXS_LoadOBJ(void *p, u32 src, u32 size);
void GX_LoadOBJPltt(void *p, u32 src, u32 size);
void GXS_LoadOBJPltt(void *p, u32 src, u32 size);
BOOL FS_OpenFile(void *self, const void *path);
BOOL FS_SeekFile(void *self, u32 off, s32 z);
s32 FS_ReadFile(void *self, void *dst, u32 size);
BOOL FS_CloseFile(void *self);
extern u8 sHudObjCharPathTen2[];
void *PlayerActor_Create();
}
}



void PlayerActor::nudgeForward() {
    using namespace nP;
    switch (Math_AngleToDir4(((PlayerActor *)this)->rotY)) {
    case 2: ((PlayerActor *)this)->position.z -= 1; break;
    case 0: ((PlayerActor *)this)->position.z += 1; break;
    case 3: ((PlayerActor *)this)->position.x -= 1; break;
    case 1: ((PlayerActor *)this)->position.x += 1; break;
    }
}

void PlayerActor::offsetSpawnBySlot() {
    using namespace nP;
    s32 r = Math_AngleToDir4(((PlayerActor *)this)->rotY);
    s32 step = ((PlayerActor *)this)->sessionSlot;
    switch (r) {
    case 2: ((PlayerActor *)this)->position.z -= step; break;
    case 0: ((PlayerActor *)this)->position.z += step; break;
    case 3: ((PlayerActor *)this)->position.x -= step; break;
    case 1: ((PlayerActor *)this)->position.x += step; break;
    }
}

void PlayerActor::onMessageEnd(u32 attr) {
    using namespace nO;
    u8 buf[12];
    if (((PlayerActor *)this)->msgStep >= 0xf) return;
    switch (((PlayerActor *)this)->msgStep) {
    case 0:
        buf[0] = 0x3d;
        (((PlayerActor *)this)->window)->setNextMessage(&buf[0], (void *)(0));
        break;
    case 4:
        buf[1] = 0x3e;
        (((PlayerActor *)this)->window)->setNextMessage(&buf[1], (void *)(0));
        break;
    case 2:
        buf[2] = 3;
        (((PlayerActor *)this)->window)->setNextMessage(&buf[2], (void *)(0));
        break;
    case 1:
        buf[3] = 0x3c;
        (((PlayerActor *)this)->window)->setNextMessage(&buf[3], (void *)(0));
        ((PlayerActor *)this)->msgStep = 9;
        break;
    case 5:
    case 6:
        data_021c1b3c->unk_248 = 0xb;
        break;
    case 13: {
        u32 obj[9];
        buf[4] = 0x3f;
        (((PlayerActor *)this)->window)->setNextMessage(&buf[4], (void *)(0));
        *(u16 *)&buf[6] = ((PlayerActor *)this)->actionWorkRaw[8] + 0x12b0;
        new (obj) ItemName((u16 *)&buf[6]);
        (((PlayerActor *)this)->window)->setNamedSlot(0, obj, 7);
        ((ItemName *)(obj))->ItemName::~ItemName();
        ((PlayerActor *)this)->msgStep = 8;
        break;
    }
    case 14: {
        u32 obj[9];
        buf[5] = 0x3f;
        (((PlayerActor *)this)->window)->setNextMessage(&buf[5], (void *)(0));
        ((PlayerActor *)this)->msgStep = 8;
        *(u16 *)&buf[8] = ((PlayerActor *)this)->actionWorkRaw[3] + 0x12e8;
        new (obj) ItemName((u16 *)&buf[8]);
        (((PlayerActor *)this)->window)->setNamedSlot(0, obj, 7);
        ((ItemName *)(obj))->ItemName::~ItemName();
        break;
    }
    }
}

void PlayerActor::onChoice(u32 attr) {
    using namespace nO;
    s32 st = ((PlayerActor *)this)->msgStep;
    if (st >= 0xf) return;
    switch (st) {
    case 0:
    case 2:
    case 3:
    case 4: {
        s32 r5;
        u8 b;
        r5 = ((ChoiceList *)((((PlayerActor *)this)->window)->getChoiceList()))->getResult();
        b = gTalkMsgIndexEnd;
        (((PlayerActor *)this)->window)->setNextMessage(&b, (void *)(0));
        if (r5 == 0) {
            ((PlayerActor *)this)->msgStep = 5;
        } else {
            switch (((PlayerActor *)this)->msgStep) {
            case 0:
            case 4:
                ((PlayerActor *)this)->msgStep = 9;
                break;
            case 2:
                ((PlayerActor *)this)->msgStep = 0xb;
                break;
            default:
                ((PlayerActor *)this)->msgStep = 0xf;
                break;
            }
        }
        break;
    }
    }
}

void PlayerActor::onWindowClose() {
    using namespace nO;
    s32 st = ((PlayerActor *)this)->msgStep;
    s32 r5;
    if (st >= 0xf) return;
    r5 = 6;
    switch (st) {
    case 11:
        r5 = 0x23;
    case 10:
        Bgm_Release(0x39);
        Bgm_RequestSilence(0xc, r5, r5 + 5);
        ((PlayerActor *)this)->msgStep = 0xf;
        break;
    case 7: {
        u16 v[2];
        u16 r6 = *(u16 *)((PlayerActor *)this)->actionWorkRaw;
        BOOL ok;
        Bgm_Release(r6);
        PlayerActor_GetHeldItem(v, ((PlayerActor *)this));
        if (Item_IsFurniture(v)) {
            v[1] = 0xfff1;
            s32 r7 = Item_GetFurnitureIndex(v);
            if (r7 == Item_GetFurnitureIndex(&v[1])) ok = TRUE; else ok = FALSE;
        } else {
            if (v[0] == 0xfff1) ok = TRUE; else ok = FALSE;
        }
        if (!ok && !_ZN11PlayerActor20getHeldHoldableIndexEv(this)) {
            BOOL b = (gFieldSceneKind == 0);
            if (b) r5 += 0x15;
        }
        if ((u16)(r6 + 0xffc4) <= 1) {
            Bgm_RequestSilence(5, r5, r5 + 5);
        } else {
            Bgm_RequestSilence(0xc, r5, r5 + 5);
        }
        ((PlayerActor *)this)->msgStep = 0xf;
        break;
    }
    case 5:
    case 8: {
        u32 arg;
        r5 = 0xc;
        if (((PlayerActor *)this)->action == 0x57) {
            arg = *(u16 *)&((PlayerActor *)this)->actionWorkRaw[4];
            if (arg == 0x3b) r5 = 5;
        } else if (((PlayerActor *)this)->action == 0x54) {
            arg = *(u16 *)((PlayerActor *)this)->actionWorkRaw;
            if (arg == 0x3a) r5 = 5;
        } else if (((PlayerActor *)this)->action == 0x1c) {
            break;
        } else if (((PlayerActor *)this)->action == 0x19) {
            break;
        } else if (((PlayerActor *)this)->action == 0x5f) {
            arg = 0x39;
        } else {
            break;
        }
        Bgm_Release(arg);
        Bgm_RequestSilence(r5, 0x14, 0x19);
        if (((PlayerActor *)this)->msgStep != 5) ((PlayerActor *)this)->msgStep = 0xf;
        break;
    }
    case 9: {
        u32 arg;
        if (((PlayerActor *)this)->action == 0x57) {
            arg = *(u16 *)&((PlayerActor *)this)->actionWorkRaw[4];
            r5 += 0x1e;
        } else {
            arg = *(u16 *)((PlayerActor *)this)->actionWorkRaw;
        }
        Bgm_Release(arg);
        Bgm_RequestSilence(0xc, r5, r5 + 5);
        ((PlayerActor *)this)->msgStep = 0xf;
        break;
    }
    case 12:
        Bgm_Release(0x42);
        Bgm_RequestSilence(0xc, r5, 0xb);
        ((PlayerActor *)this)->msgStep = 0xf;
        break;
    }
}

void PlayerActor::readInput() {
    using namespace nN;
    s32 flag = 0;
    s32 mode = ((PlayerActor *)this)->inputMode;
    s32 v4 = 0;
    s32 v8 = 0;
    s32 vc = 0;
    s32 v10 = ((PlayerActor *)this)->actionHeld;
    s32 v14 = 0;
    s32 sp18, sp1c;
    u32 sp20;
    s32 sp24, sp28, sp2c;
    u8 sp30;
    s32 sp34;
    s32 ax, ay, bx, by;
    s32 sp48, sp4c, len;
    VecFx32Ctor p50;
    VecFx32Ctor r5c = PlayerActor_OffsetByAngle(this, (VecFx32Ctor *)&((PlayerActor *)this)->position, &((PlayerActor *)this)->rotY, data_020d5e50);
    VecFx32Ctor p68;
    VecFx32Ctor pv[4];
    BOOL got = FALSE;
    ((PlayerActor *)this)->actionPressed = 0;
    ((PlayerActor *)this)->toolTargetKind = 0;
    ((PlayerActor *)this)->touchTargetId = 0xff;
    if (Unk_0200d64c_IsTwo()) {
    if (((PlayerActor *)(this))->testActionFlag(0xb) || ((PlayerActor *)(this))->testActionFlag(0x1b)) {
        ((PlayerActor *)this)->inputMagnitude = 0;
        ((PlayerActor *)this)->inputRun = 0;
        ((PlayerActor *)this)->interactPressed = 0;
        ((PlayerActor *)this)->interactTarget = 0;
        ((PlayerActor *)this)->actionHeld = 0;
        ((PlayerActor *)this)->hasTargetPos = 0;
        *(VecFx32Ctor *)&((PlayerActor *)this)->targetPos = r5c;
        if (((PlayerActor *)(this))->testActionFlag(0x1b)) {
            if (Scene_NoPlayerInUnsharedScene() == 1) {
                if (!PlayerActor_IsWaitingForSlots(this)) {
                    ((PlayerActor *)(this))->clearActionFlag(0x1b);
                    FieldInfoBalloon_ClearNetMsg();
                    if (((CommManager *)gCommManager)->myAid == 0) {
                        if ((u8)(Net_GetMode() + 0xfd) <= 1) {
                            Net_WifiHostKeepAlive();
                        }
                    }
                    if (((PlayerActor *)this)->action == 2 || ((PlayerActor *)this)->action == 0x83 || ((PlayerActor *)this)->action == 0x28 || ((PlayerActor *)this)->action == 8) {
                        TalkRequest_FinishSceneEntry();
                    }
                }
            }
        }
    } else {
    if (gGfxMainOnTop == 0) {
        vc = TouchPick_GetGroundPos(Scene_GetTouchPicker(), &p50);
        if (TouchPickResult_GetTarget(Scene_GetTouchPicker(), &p68, &sp34, &sp30)) {
            got = TRUE;
            {
                switch (sp34) {
                case 0:
                    break;
                case 1:
                    if (Unk_0200d64c_Both()) {
                        flag = 1;
                        r5c = p50;
                    }
                    break;
                case 2: case 3: case 6: case 7: case 9: case 11: case 12: case 13: case 14: case 15: case 16: case 17:
                    if (Unk_0200d64c_Both()) {
                        v4 = 1;
                        v8 = TouchPick_GetTargetObject(Scene_GetTouchPicker(), 0, 0);
                        r5c = p50;
                    }
                    break;
                case 5:
                    if (Unk_0200d64c_Both()) {
                        ((PlayerActor *)this)->toolTargetKind = 1;
                        if (((PlayerActor *)(this))->getHeldToolKind() != 1) {
                            r5c = *(VecFx32Ctor *)&((PlayerActor *)this)->toolTargetPos = p68;
                        } else {
                            u16 *hp = BlockMap_GetItemPtrAtPos(gSceneBlockMap, &p68, 0);
                            BOOL is = FALSE;
                            u16 h = *hp;
                            if (h < 0xfc || h > 0xfd) {
                            } else {
                                is = TRUE;
                            }
                            if (is) {
                                ax = 0; ay = 0; bx = 0; by = 0;
                                FieldPos_ToUnit(&ax, &ay, (VecFx32Ctor *)&((PlayerActor *)this)->position);
                                FieldPos_ToUnit(&bx, &by, &p50);
                                if (ax != bx || ay != by) {
                                    r5c = *(VecFx32Ctor *)&((PlayerActor *)this)->toolTargetPos = p50;
                                } else {
                                    r5c = *(VecFx32Ctor *)&((PlayerActor *)this)->toolTargetPos = p68;
                                }
                            } else {
                                r5c = *(VecFx32Ctor *)&((PlayerActor *)this)->toolTargetPos = p68;
                            }
                        }
                    }
                    break;
                case 4:
                    if (Unk_0200d64c_Both()) {
                        ((PlayerActor *)this)->toolTargetKind = 2;
                        r5c = *(VecFx32Ctor *)&((PlayerActor *)this)->toolTargetPos = p68;
                    }
                    break;
                case 8:
                case 10:
                    if (Unk_0200d64c_Both()) {
                        v14 = 1;
                        FieldPos_SnapToUnitCenter(&p68, &p68);
                        r5c = p68;
                    }
                    ((PlayerActor *)this)->touchTargetId = sp30;
                    break;
                }
            }
        }
    }
    if (flag != 0 || (Stub_ReturnFalse() && vc == 0)) {
        ((PlayerActor *)this)->inputMagnitude = 0;
        ((PlayerActor *)this)->inputRun = 0;
        v10 = 1;
        ((PlayerActor *)this)->actionPressed = 1;
        r5c = PlayerActor_OffsetByAngle(this, (VecFx32Ctor *)&((PlayerActor *)this)->position, &((PlayerActor *)this)->rotY, data_020d5e34);
        mode = 2;
    } else {
        s32 fast = 0;
        ((PlayerActor *)this)->actionPressed = fast;
        if (((PlayerActor *)this)->inputMode == 2) {
            if (vc) mode = 2; else mode = 1;
        } else if (gPad.a & 0x2ff3) {
            mode = 1;
        } else if (vc) {
            mode = 2;
        }
        if (mode == 2) {
            if (((PlayerActor *)this)->action >= 0x1d && ((PlayerActor *)this)->action <= 0x23) {
                sp20 = (u32)gCamera;
                pv[1].x = ((PlayerActor *)this)->bodyPos.x;
                pv[1].y = ((PlayerActor *)this)->bodyPos.y;
                pv[1].z = ((PlayerActor *)this)->bodyPos.z;
                sp24 = ((u16)(s16)(0x4000 - ((Camera *)((void*)sp20))->getPitch()) >> 4) * 2;
                sp2c = FX_Div(func_01ffcb0c(0x1266, data_02135f44[sp24]), data_02135f44[sp24 + 1]);
                sp28 = ((u16)((Camera *)((void*)sp20))->getYaw() >> 4) * 2;
                pv[2].x = pv[1].x - func_01ffcb0c(sp2c, data_02135f44[sp28]);
                s32 t = func_01ffcb0c(sp2c, data_02135f44[sp28 + 1]);
                pv[2].z = pv[1].z - t;
                pv[0].x = p50.x - pv[2].x;
                pv[0].z = p50.z - pv[2].z;
                len = Vec_MagXZ(&pv[0]);
            } else {
                pv[0].x = p50.x - ((PlayerActor *)this)->bodyPos.x;
                pv[0].z = p50.z - ((PlayerActor *)this)->bodyPos.z;
                Camera_ProjectCurvedToScreen(&sp48, &sp4c, (VecFx32Ctor *)&((PlayerActor *)this)->bodyPos);
                sp48 += 0x80;
                sp4c += 0x60;
                pv[3].x = ((u8)gTouchX - sp48) << 8;
                pv[3].y = 0;
                pv[3].z = ((u8)gTouchY - sp4c) << 8;
                len = Vec_MagXZ(&pv[3]);
            }
            s32 res = func_01ffcb0c(len, 0x4f4);
            if (res >= 0x1000) {
                res = 0x1000;
            } else if (res <= 0x19a) {
                res = 0;
            } else {
                s32 t = FX_Sqrt(FX_Div((res + 0x39a) << 12, 0x139a) >> 12);
                sp18 = t << 12;
                for (sp1c = 0; sp1c < 3; sp1c++) {
                    t = func_01ffcb0c(t, sp18) >> 12;
                }
                res = t;
                if (res > 0x1000) {
                    res = 0x1000;
                } else if (res < 0) {
                    res = 0;
                }
            }
            ((PlayerActor *)this)->inputMagnitude = res;
            if (res > 0xc32) {
                fast = 1;
            }
            if (res > 0) {
                ((PlayerActor *)this)->inputAngle = Math_Atan2(pv[0].x, pv[0].z);
            }
            if (!got) {
                if (Unk_0200d64c_Both()) {
                    v14 = 1;
                    r5c = p50;
                }
            }
        } else {
            s32 keymask;
            if (TalkRequestFlags_IsResetti() || ((PlayerActor *)(this))->testActionFlag(0x13)) {
                keymask = 0x2fff;
            } else {
                keymask = 0x2ff3;
            }
            u32 keys = gPad.a;
            if (keymask & keys) {
                mode = 1;
            } else {
                mode = ((PlayerActor *)this)->inputMode;
            }
            if ((keys & 2) || (keys & 0x100) || (keys & 0x200)) {
                fast = 1;
            } else {
                fast = 0;
            }
            u32 kb = *(volatile u16 *)&gPad.b;
            v4 = 1;
            if (!(kb & 1)) {
                v4 = 0;
            }
            ((PlayerActor *)this)->actionPressed = v4;
            if (gPad.a & 1) {
                v10 = 1;
            } else {
                v10 = 0;
                if (gPad.b & 2) {
                    v14 = 1;
                    r5c = PlayerActor_OffsetByAngle(this, (VecFx32Ctor *)&((PlayerActor *)this)->position, &((PlayerActor *)this)->rotY, data_020d5e48);
                }
            }
            keys = gPad.a;
            if ((keys & 0x80) || (keys & 0x40) || (keys & 0x10) || (keys & 0x20)) {
                if (fast) {
                    ((PlayerActor *)this)->inputMagnitude = 0x1000;
                } else {
                    ((PlayerActor *)this)->inputMagnitude = 0xc32;
                }
                ((PlayerActor *)this)->inputAngle = gPad.c;
            } else {
                ((PlayerActor *)this)->inputMagnitude = 0;
            }
        }
        ((PlayerActor *)this)->inputRun = fast;
    }
    ((PlayerActor *)this)->interactPressed = v4;
    ((PlayerActor *)this)->interactTarget = (Character *)v8;
    ((PlayerActor *)this)->actionHeld = v10;
    ((PlayerActor *)this)->hasTargetPos = v14;
    *(VecFx32Ctor *)&((PlayerActor *)this)->targetPos = r5c;
    ((PlayerActor *)this)->inputMode = mode;
    }
    }
}

void Unk_02007694::endChangeClothes(u32 a) {
    using namespace nL;
    PlayerChangeClothesWork *p = &((Unk_02007694 *)this)->actionWork;
    if (p->isApplied == 0) {
        switch (p->changeKind) {
        case 0:
            changeClothesShirt();
            break;
        case 1:
            changeClothesFaceItem();
            break;
        case 2:
            changeClothesHat();
            break;
        case 3: {
            void *r = PlayerData_GetBySessionSlot(((Unk_02007694 *)this)->sessionSlot);
            if (r != NULL) {
                PlayerData_SetStungFace(r, 0);
                ((PlayerFaceTexRef *)(&((Unk_02007694 *)this)->faceTex[0]))->load(((PlayerData *)(r))->getFaceType());
                ((PlayerActor *)(this))->replayAnim();
                VillagerStates_ClearUnk1dBit0();
            }
            break;
        }
        }
    }
    if (_ZN11CommManager11isLocalSlotEj(gCommManager, ((Unk_02007694 *)this)->sessionSlot)) {
        u32 i;
        switch (p->changeKind) {
        case 0:
            i = 0;
            break;
        case 1:
            i = 1;
            break;
        case 2:
            i = 2;
            break;
        case 3:
            PlayerActor_NetSendFaceChange(this);
            return;
        default:
            return;
        }
        ((PlayerActor *)(this))->netSendClothesChange(i, p->unk_00);
    }
}

void Unk_02007694::changeClothesApply() {
    using namespace nL;
    ((PlayerActor *)(this))->clearActionFlag(0xf);
    if (((AnimFrameCtrl *)(&((Unk_02007694 *)this)->bodyAnimCtrl[0]))->hasPassedFrame(8)) {
        ((PlayerActor *)(this))->setActionFlag(0xf);
        switch (((Unk_02007694 *)this)->actionWork.changeKind) {
        case 0:
            changeClothesShirt();
            break;
        case 1:
            changeClothesFaceItem();
            break;
        case 2:
            changeClothesHat();
            break;
        case 3: {
            void *r = PlayerData_GetBySessionSlot(((Unk_02007694 *)this)->sessionSlot);
            if (r != NULL) {
                PlayerData_SetStungFace(r, 0);
                ((PlayerFaceTexRef *)(&((Unk_02007694 *)this)->faceTex[0]))->load(((PlayerData *)(r))->getFaceType());
                u8 buf[2];
                buf[0] = ((Unk_02007694 *)this)->bodyAnimPlayMode;
                ((PlayerActor *)(this))->setEyeAnimForBody((s32 *)(data_020d5e3c), &buf[0]);
                buf[1] = ((Unk_02007694 *)this)->bodyAnimPlayMode;
                ((PlayerActor *)(this))->setMouthAnimForBody((s32 *)(data_020d5e44), &buf[1]);
                VillagerStates_ClearUnk1dBit0();
            }
            break;
        }
        }
    }
}

void PlayerActor::pickUpReachUpdate() {
    using namespace nJ;
    PlayerPickUpWork* s = (PlayerPickUpWork *)((PlayerActor *)this)->actionWorkRaw;
    u8* st = &s->unk_04.b.unk_04;
    struct { u32 pad; Vec2 p[2]; } l;
    switch (*st) {
    case 1: {
        u8 a = s->unk_04.b.unk_05;
        u8 b = s->unk_04.b.unk_06;
        s32 v;
        u8 flag;
        if (((CommManager *)(gCommManager))->isLocalSlot(((PlayerActor *)this)->sessionSlot)) {
            v = ((PlayerActor *)this)->fieldAnswerKind;
        } else {
            v = s->unk_04.b.unk_07;
        }
        flag = 1;
        switch (v) {
        case 3:
            flag = 0;
        case 4: {
            l.p[0].x = a;
            l.p[0].y = b;
            requestPickUpAt(&l.p[0], -1, flag, 6, -1);
            break;
        }
        case 0x15:
            flag = 0;
        case 0x16: {
            l.p[1].x = a;
            l.p[1].y = b;
            ((PlayerActor *)(this))->requestPickUpFanfareAt((Unk_02006d14_Pair *)(void *)(&l.p[1]), flag, 6, -1);
            break;
        }
        }
        break;
    }
    case 2:
        ((PlayerActor *)this)->actionPriority = _ZN12Unk_0200769421getActionDonePriorityEj(this, ((PlayerActor *)this)->action);
        ((PlayerActor *)(this))->requestWait(3, 1, -1);
        break;
    case 3:
        if (TalkRequest_AddPlayerMessage()) {
            *st = 4;
            ((Character *)(void *)(((PlayerActor *)this)))->attachTalkRequest((s32)(((PlayerActor *)this)));
            ((PlayerActor *)(this))->setActionFlag(0x11);
            _ZN10MsgRequest11setFileNameEPKc((u8*)((PlayerActor *)this) + 0xec, &sPlayerActorMsgFile);
            ((PlayerActor *)this)->msgIndex = 0;
            ((PlayerActor *)this)->window->nextState = 1;
        }
        break;
    case 4:
        if (((PlayerActor *)this)->window != NULL) {
            if (((PlayerActor *)this)->window->state != 0) {
                *st = 5;
            }
        }
        break;
    case 5:
        if (((PlayerActor *)this)->window != NULL) {
            if (((PlayerActor *)this)->window->state == 0) {
                ((Character *)(void *)(((PlayerActor *)this)))->detachTalkRequest((s32)(((PlayerActor *)this)));
                ((PlayerActor *)(this))->clearActionFlag(0x11);
                TalkRequest_FinishPlayerMessage();
                *st = 6;
            }
        }
        break;
    case 6:
        ((PlayerActor *)this)->actionPriority = _ZN12Unk_0200769421getActionDonePriorityEj(this, ((PlayerActor *)this)->action);
        ((PlayerActor *)(this))->requestWait(3, 1, -1);
        ((PlayerActor *)(this))->clearActionFlag(0xd);
        break;
    case 7:
        if (TalkRequest_AddPlayerMessage()) {
            *st = 8;
            ((Character *)(void *)(((PlayerActor *)this)))->attachTalkRequest((s32)(((PlayerActor *)this)));
            ((PlayerActor *)(this))->setActionFlag(0x11);
            _ZN10MsgRequest11setFileNameEPKc((u8*)((PlayerActor *)this) + 0xec, &sPlayerActorErrorMsgFile);
            ((PlayerActor *)this)->msgIndex = 1;
            ((PlayerActor *)this)->window->nextState = 1;
        }
        break;
    case 8:
        if (((PlayerActor *)this)->window != NULL) {
            if (((PlayerActor *)this)->window->state != 0) {
                *st = 9;
            }
        }
        break;
    case 9:
        if (((PlayerActor *)this)->window != NULL) {
            if (((PlayerActor *)this)->window->state == 0) {
                ((Character *)(void *)(((PlayerActor *)this)))->detachTalkRequest((s32)(((PlayerActor *)this)));
                ((PlayerActor *)(this))->clearActionFlag(0x11);
                TalkRequest_FinishPlayerMessage();
                ((PlayerActor *)this)->actionPriority = _ZN12Unk_0200769421getActionDonePriorityEj(this, ((PlayerActor *)this)->action);
                ((PlayerActor *)(this))->requestWait(3, 1, -1);
            }
        }
        break;
    }
}

void PlayerActor::pickUpUpdateStore(u8* state, u8 flag) {
    using namespace nI;
    switch (*state) {
    case 0:
        if (!((AnimFrameCtrl *)(&(AnimFrameCtrl &)((PlayerActor *)this)->bodyModel))->isFinished()) break;
        if (((PlayerActor *)this)->actionItem == 0x1520) {
            if (BottleLetter_Open()) {
                *state = 6;
                break;
            }
            if (!TalkRequest_AddPlayerMessage()) break;
            ((PlayerActor *)(this))->startAnim(0x6c, 0, 0);
            s32 r = ((PlayerActor *)(this))->getHeldToolKind();
            if (r == 4) {
                HeldItemModel_PlayAnim(&((PlayerActor *)this)->heldItemModel, 0, 9, 0);
            } else if (r == 3) {
                HeldItemModel_PlayAnim(&((PlayerActor *)this)->heldItemModel, 0x13, 3, 0);
            }
            *state = 7;
            ((Character *)(this))->attachTalkRequest((s32)(((PlayerActor *)this)));
            ((PlayerActor *)(this))->setActionFlag(0x11);
            _ZN10MsgRequest11setFileNameEPKc((u8*)((PlayerActor *)this) + 0xec, sPlayerActorErrorMsgFile);
            ((PlayerActor *)this)->msgIndex = 0x12;
            ((PlayerActor *)this)->window->nextState = 1;
        } else if (flag) {
            if (!TalkRequest_IsPlayerMessage() && !TalkRequest_AddPlayerMessage()) break;
            ((PlayerActor *)(this))->startAnim(0x6c, 0, 0);
            s32 r = ((PlayerActor *)(this))->getHeldToolKind();
            if (r == 4) {
                HeldItemModel_PlayAnim(&((PlayerActor *)this)->heldItemModel, 0, 9, 0);
            } else if (r == 3) {
                HeldItemModel_PlayAnim(&((PlayerActor *)this)->heldItemModel, 0x13, 3, 0);
            }
            *state = 1;
            ((Character *)(this))->attachTalkRequest((s32)(((PlayerActor *)this)));
            ((PlayerActor *)(this))->setActionFlag(0x11);
            _ZN10MsgRequest11setFileNameEPKc((u8*)((PlayerActor *)this) + 0xec, sPlayerActorMsgFile);
            ((PlayerActor *)this)->msgIndex = 2;
            ((PlayerActor *)this)->window->nextState = 1;
        } else {
            u16 v[2];
            v[1] = ((PlayerActor *)this)->actionItem;
            Pocket_AddFoundItem(&v[1]);
            *state = 6;
        }
        break;
    case 1:
        if (!((PlayerActor *)this)->window) break;
        if (!((PlayerActor *)this)->window->state) break;
        *state = 2;
        ((PlayerActor *)this)->msgStep = 3;
        break;
    case 2:
        if (((PlayerActor *)this)->msgStep >= 15) {
            *state = 3;
        } else {
            if (!((PlayerActor *)this)->window) break;
            if (((PlayerActor *)this)->window->state) break;
            if (((PlayerActor *)this)->msgStep == 5) {
                if (!MenuCtrl_OpenPocketsFullPickUp(((PlayerActor *)this)->actionItem)) break;
                ((PlayerActor *)this)->msgStep = 6;
                break;
            } else if (((PlayerActor *)this)->msgStep != 6) {
                break;
            }
            if (!MenuCtrl_IsFinished()) break;
            ((PlayerActor *)this)->msgStep = 15;
            ((PlayerActor *)this)->bodyModel.frameStep = 0x1000;
            if (MenuCtrl_IsResultOk()) {
                *state = 6;
                ((Character *)(this))->detachTalkRequest((s32)(((PlayerActor *)this)));
                ((PlayerActor *)(this))->clearActionFlag(0x11);
                TalkRequest_FinishPlayerMessage();
                break;
            }
            *state = 3;
        }
    case 3:
        if (((PlayerActor *)this)->dropQuery != -1) break;
        ((PlayerActor *)this)->dropQuery = FieldAction_RequestPlaceAtPendingForAid(((PlayerActor *)this)->sessionSlot, ((PlayerActor *)this)->actionItem);
        if (((PlayerActor *)this)->dropQuery == -1) break;
        ((PlayerActor *)(this))->startAnim(0, 6, 6);
        *state = 4;
        if (((PlayerActor *)(this))->getHeldToolKind() != 4) break;
        HeldItemModel_PlayAnim(&((PlayerActor *)this)->heldItemModel, 0, 9, 0);
        break;
    case 4:
        if (((PlayerActor *)this)->dropQuery != -1) break;
        *state = 5;
    case 5:
        if (!((PlayerActor *)this)->window) break;
        if (((PlayerActor *)this)->window->state) break;
        ((Character *)(this))->detachTalkRequest((s32)(((PlayerActor *)this)));
        ((PlayerActor *)(this))->clearActionFlag(0x11);
        TalkRequest_FinishPlayerMessage();
        *state = 6;
        ((PlayerActor *)(this))->startAnim(0, 6, 6);
        if (((PlayerActor *)(this))->getHeldToolKind() == 4) {
            HeldItemModel_PlayAnim(&((PlayerActor *)this)->heldItemModel, 0, 9, 0);
        }
        break;
    case 6:
        ((PlayerActor *)this)->actionPriority = _ZN12Unk_0200769421getActionDonePriorityEj(this, ((PlayerActor *)this)->action);
        ((PlayerActor *)(this))->requestWait(3, 1, -1);
        ((PlayerActor *)(this))->clearActionFlag(0xd);
        ((PlayerActor *)this)->msgStep = 15;
        break;
    case 7:
        if (!((PlayerActor *)this)->window) break;
        if (!((PlayerActor *)this)->window->state) break;
        *state = 8;
        break;
    case 8:
        if (!((PlayerActor *)this)->window) break;
        if (((PlayerActor *)this)->window->state) break;
        *state = 3;
        if (((PlayerActor *)this)->dropQuery != -1) break;
        ((PlayerActor *)this)->dropQuery = FieldAction_RequestPlaceAtPendingForAid(((PlayerActor *)this)->sessionSlot, ((PlayerActor *)this)->actionItem);
        if (((PlayerActor *)this)->dropQuery == -1) break;
        *state = 5;
        ((PlayerActor *)(this))->startAnim(0, 6, 6);
        if (((PlayerActor *)(this))->getHeldToolKind() == 4) {
            HeldItemModel_PlayAnim(&((PlayerActor *)this)->heldItemModel, 0, 9, 0);
        }
        break;
    }
}

void PlayerActor::setupAct76(PlayerActionRequest *item, u32 old) {
    using namespace nG;
    u8 *p = &((PlayerActionRequest *)item)->unk_0c_b[0];
    u8 a = p[0];
    u8 b = p[1];
    u8 c = p[2];
    PlayerActionWork *s;
    if ((u8)(a + 254) <= 1) TalkRequest_FinishSceneEntry();
    s = (PlayerActionWork *)((PlayerActor *)this)->actionWorkRaw;
    s->unk_02 = a;
    if (a == 0) {
        if (old != 0x57) s->unk_03 = 3;
        else s->unk_03 = 0;
    } else {
        s->unk_03 = 0;
    }
    s->unk_04 = 0;
    s->unk_05 = b;
    s->unk_06 = c;
    ((PlayerActor *)this)->netData.writeAct76Net(a, b, c);
    (((PlayerActor *)this))->startAnimOnce(sPlayerAct76Anims[a], 3, 0);
    ((PlayerActor *)this)->pendingAct76Kind = 0;
    s32 r = _ZN11PlayerActor15getHeldToolKindEv(((PlayerActor *)this));
    if (r != 3) {
        if (r == 4) HeldItemModel_PlayAnim(&((PlayerActor *)this)->heldItemModel, 9, 3, 1);
    } else {
        HeldItemModel_PlayAnim(&((PlayerActor *)this)->heldItemModel, 0x1f, 3, 1);
    }
    if (((CommManager *)(gCommManager))->isLocalSlot(((PlayerActor *)this)->sessionSlot)) {
        u32 t = 0xd;
        switch (a) {
        case 0:
        case 1:
            t = 6;
            break;
        case 2:
        case 3:
            t = 6;
            Bgm_ReleasePriority(0x12);
            Bgm_RequestSilence(5, 0, 1);
            ((PlayerActor *)this)->msgStep = 7;
            break;
        default:
            Bgm_RequestSilence(0xc, 0, 1);
            ((PlayerActor *)this)->msgStep = 7;
            break;
        }
        u16 hv = data_020c61c0[a];
        s->unk_00 = hv;
        Bgm_Request(t, hv, 0x7f, 1);
    }
}

void PlayerActor::act76Update() {
    using namespace nF;
    u8 *p, *st;
    u8 kind, sub;
    s32 lim;
    void *g;
    u16 t[8];
    Mtx43 blk;
    VecFx32 v1, v2, v3, v4, v5;
    BOOL r;

    (this)->turnToCamera(0x400);
    p = &actionWorkRaw[0];
    kind = p[2];
    sub = p[5];
    st = p + 3;
    blk = itemHandMtx;
    switch (kind) {
    case 0:
        if (*st == 3) {
            *st = 0;
            Insect_FinishCatch(p[6]);
            HeldInsect_Start(sub, (u8)sessionSlot);
        }
        if (sub == 9) {
            v1.x = 0x119a;
            v1.y = 0x4cd;
            v1.z = -0x4cd;
        } else {
            v1.x = 0xb33;
            v1.y = 0x19a;
            v1.z = -0x19a;
        }
        PlayerActor_ApplyHoldOffset(&blk, &v1);
        t[5] = 0x64;
        t[6] = 0x64;
        t[7] = 0x64;
        v1 = *(VecFx32 *)&blk.m[9];
        WorldCurve_FromCurved(&v1, &v1);
        HeldInsect_SetHandMatrix((u8)sessionSlot, &t[5], &blk, 0);
        break;
    case 1:
        void *o = ((FishBobber *)(&heldItemModel.bobber))->getFish();
        if (o != NULL) {
            v1.x = 0xb33;
            v1.y = 0x19a;
            v1.z = -0x19a;
            PlayerActor_ApplyHoldOffset(&blk, &v1);
            v2 = *(VecFx32 *)&blk.m[9];
            WorldCurve_FromCurved(&v2, &v2);
            Fish_GetDisplayScale(&v3, *((s8 *)o + 0x7e));
            v4 = v2;
            v5 = v3;
            FishCatch_SetDisplayPosScale(o, &v4, &v5);
        }
        break;
    }
    switch (animId) {
    case 0x87:
        if (!((AnimFrameCtrl *)(&(AnimFrameCtrl &)bodyModel))->isFinished()) {
            return;
        }
        (this)->startAnimOnce(0x88, 0, 0);
        HeldItemModel_PlayAnim(&heldItemModel, 0xa, 0, 1);
        return;
    case 0x89:
        if (!((AnimFrameCtrl *)(&(AnimFrameCtrl &)bodyModel))->isFinished()) {
            return;
        }
        (this)->startAnimOnce(0x8a, 0, 0);
        HeldItemModel_PlayAnim(&heldItemModel, 0x20, 0, 1);
        return;
    case 0x86:
        lim = 0x19;
        if (((CommManager *)(gCommManager))->isLocalSlot(sessionSlot)) {
            if (((AnimFrameCtrl *)(&(AnimFrameCtrl &)bodyModel))->hasPassedFrame(0xc)) {
                Camera_SetMode4();
            }
        }
        break;
    default:
        lim = 5;
        break;
    }
    if ((s32)(((u32)bodyModel.curFrame << 4) >> 16) < lim) {
        return;
    }
    g = gCommManager;
    if (!((CommManager *)(g))->isLocalSlot(sessionSlot)) {
        actionPriority = ((Unk_02007694 *)(void *)(this))->getActionDonePriority(action);
        return;
    }
    switch (*st) {
    case 0:
        if (TalkRequest_AddPlayerMessage()) {
            *st = 1;
            ((Character *)(void *)(this))->attachTalkRequest((s32)(this));
            (this)->setActionFlag(0x11);
            switch (kind) {
            case 0:
                setFileName(sPlayerActorGetInsectMsgFile);
                msgIndex = 0x40;
                break;
            case 1:
                setFileName(sPlayerActorGetFishMsgFile);
                msgIndex = 0x40;
                break;
            case 2:
                setFileName(sPlayerActorMsgFile);
                msgIndex = 0x28;
                break;
            case 3:
                setFileName(sPlayerActorMsgFile);
                msgIndex = 0x29;
                break;
            case 7:
                setFileName(sPlayerActorMsgFile);
                msgIndex = 0x22;
                break;
            default:
                setFileName(sPlayerActorMsgFile);
                msgIndex = kind + 0x1a;
                break;
            }
            window->nextState = 1;
        }
    case 1:
        if (window != NULL) {
            if (window->state != 0) {
                *st = 2;
            }
        }
        break;
    case 2:
        if (kind < 2) {
            if (window == NULL) {
                break;
            }
            if (window->nextMsgIndex != 0xfe) {
                break;
            }
            if (kind == 1) {
                PlayerActor_RequestFishShowCatch(this, 1, 6, -1);
            } else {
                PlayerActor_RequestInsectShowCatch(this, 3, sub, sub, 6, -1);
            }
            break;
        }
        if (window == NULL) {
            break;
        }
        if (window->state != 0) {
            break;
        }
        ((Character *)(void *)(this))->detachTalkRequest((s32)(this));
        (this)->clearActionFlag(0x11);
        TalkRequest_FinishPlayerMessage();
        if (((CommManager *)(g))->isLocalSlot(sessionSlot)) {
            Camera_SetModeDefault();
        }
        actionPriority = ((Unk_02007694 *)(void *)(this))->getActionDonePriority(action);
        PlayerActor_GetHeldItem(&t[3], this);
        if (Item_IsFurniture(&t[3])) {
            t[4] = 0xfff1;
            r = Item_GetFurnitureIndex(&t[3]) == Item_GetFurnitureIndex(&t[4]) ? TRUE : FALSE;
        } else {
            r = t[3] == 0xfff1 ? TRUE : FALSE;
        }
        if (!r && !(this)->getHeldHoldableIndex() && Unk_02008858_IsZero(gFieldSceneKind)) {
            PlayerActor_RequestStowItem(this, 2, 2, 0, 0, 0, 6, -1);
            break;
        }
        if (Unk_02008858_IsZero(gFieldSceneKind)) {
            TalkRequest_FinishSceneEntry();
            (this)->setActionFlag(0);
        }
        (this)->requestWait(3, 1, -1);
        break;
    }
}

void Unk_02005e7c::handleNetEvent() {
    using namespace nC;
    FieldActionFxEvent pkt;
    volatile u16 pos;
    s32 ux, uy;
    s32 ux2, uy2;
    u8 sub;
    Unk_02005f50_Area *pa;
    s32 flag;
    u8 type;
    s32 x, y;
    s32 v34[2], v2122[2], v5[2], v6a[2], v6b[2], v19[2], v20[2], v14a[2], v14b[2], v14c[2];
    VecFx32 w, q1, q8, q11, q10, q20;

    if (!FieldActionFx_Take(&pkt, sessionSlot) && !pendingEvent.set) {
        return;
    }
    ux = 0;
    uy = 0;
    if (pendingEvent.set) {
        pendingEvent.set = 0;
        x = pendingEventUnitX;
        y = pendingEventUnitZ;
        type = pendingEvent.type;
        sub = pendingEvent.sub;
    } else {
        pos = pkt.pos;
        y = pos;
        x = y >> 8;
        y &= 0xff;
        type = pkt.type;
        sub = pkt.sub;
    }
    FieldPos_FromUnitCenter(&w, x, y);
    switch (type) {
    case 17:
        if (action != 0) {
            break;
        }
        netPickUpDelay = 2;
        
    case 1: case 2: case 3: case 4: case 5: case 6: case 7: case 8: case 9: case 10: case 11:
    case 14: case 19: case 20: case 21: case 22:
        if (((PlayerActor *)(this))->testActionFlag(10) == 0) {
            pendingEvent.set = 1;
            pendingEventUnitX = x;
            pendingEventUnitZ = y;
            pendingEvent.type = type;
            pendingEvent.sub = sub;
            return;
        }
        ((PlayerActor *)(this))->clearRequests();
        break;
    case 12: case 13: case 15: case 16: case 18: case 23: case 24: case 25: case 26:
        return;
    }
    switch (type) {
    case 1:
    case 2: {
        if (action == 0x68) {
            pa = (Unk_02005f50_Area *)actionWork;
            s32 t = pa->a[1]; q1.x = pa->a[0]; q1.y = 0; q1.z = t;
            FieldPos_ToUnit(&ux, &uy, &q1);
            if (ux == x && uy == y) {
                pa->e[0] = 1;
                bodyAnimPlayMode = 1;
                return;
            }
        }
        PlayerActor_RequestTreeShake(this, w.x, w.z, type != 1, 1, 6, -1);
        break;
    }
    case 3:
    case 4:
    case 21:
    case 22:
        if (action == 0x18) {
            u8 *p = actionWork;
            ux = p[5];
            uy = p[5];
            if (ux == x && uy == y) {
                p[4] = 1;
                p[7] = type;
                return;
            }
        }
        flag = 1;
        switch (type) {
        case 3:
            flag = 0;
        case 4: {
            v34[0] = x; v34[1] = y;
            ((PlayerActor *)(this))->requestPickUpAt((Vec2 *)(v34), -1, flag, 6, -1);
            break;
        }
        case 21:
            flag = 0;
        case 22: {
            v2122[0] = x; v2122[1] = y;
            ((PlayerActor *)(this))->requestPickUpFanfareAt((Unk_02006d14_Pair *)(v2122), flag, 6, -1);
            break;
        }
        }
        break;
    case 5:
        if (action == 0x16) {
            u8 *p = actionWork;
            ux = p[0];
            uy = p[1];
            if (ux == x && uy == y) {
                p[2] = 1;
                return;
            }
        }
        {
            v5[0] = x; v5[1] = y;
            PlayerActor_RequestPluck(this, v5, 6, -1);
        }
        break;
    case 6:
    case 7:
        if (sub == 2) {
            v6a[0] = x; v6a[1] = y;
            PlayerActor_RequestAxeBreak(this, 1, v6a, 6, -1);
        } else {
            v6b[0] = x; v6b[1] = y;
            PlayerActor_RequestAxeChop(this, sub != 0, type != 6, v6b, 6, -1);
        }
        break;
    case 8: {
        q8 = w;
        PlayerActor_RequestDig(this, 0, &q8, 6, -1);
        break;
    }
    case 11: {
        q11 = w;
        PlayerActor_RequestDig(this, 1, &q11, 6, -1);
        break;
    }
    case 9:
        flag = 0;
    case 10: {
        q10 = w;
        PlayerActor_RequestDigUpItem(this, &q10, flag, 6, -1);
        break;
    }
    case 19: {
        v19[0] = x; v19[1] = y;
        PlayerActor_RequestFillHole(this, 0, v19, 0xfff1, 6, -1);
        break;
    }
    case 20:
        if (action == 0x66) {
            pa = (Unk_02005f50_Area *)actionWork;
            ux2 = 0;
            uy2 = 0;
            q20.x = pa->a[0]; q20.y = pa->a[1]; q20.z = pa->a[2];
            FieldPos_ToUnit(&ux2, &uy2, &q20);
            if (ux2 == x && uy2 == y) {
                ((PlayerActor *)(this))->setActionFlag(0x1c);
                pa->e[3] = 1;
                return;
            }
        }
        {
            v20[0] = x; v20[1] = y;
            PlayerActor_RequestAct66(this, v20, 1, 6, -1);
        }
        break;
    case 14:
        toolHitKind = 0;
        if (sub == 2) {
            v14a[0] = x; v14a[1] = y;
            PlayerActor_RequestAxeBreak(this, 1, v14a, 6, -1);
        } else if (sub == 3) {
            v14b[0] = x; v14b[1] = y;
            PlayerActor_RequestShovelStrike(this, 1, v14b, 6, -1);
        } else {
            v14c[0] = x; v14c[1] = y;
            PlayerActor_RequestAxeStrike(this, sub != 0, 1, v14c, 6, -1);
        }
        break;
    case 17:
        if (action == 0) {
            ((PlayerActor *)(this))->requestWait(3, 1, -1);
            ((PlayerActor *)(this))->clearActionFlag(0x1c);
        }
        break;
    case 0: case 12: case 13: case 15: case 16: case 18: case 23: case 24: case 25: case 26:
        break;
    }
}

void PlayerActor::drawReady() {
    using namespace nB;
    Mtx43 a;
    VecFx32 t;
    VecFx32 t2;
    VecFx32 v;
    data_021cb69c = *(Mtx43 *)((u8 *)((PlayerActor *)this) + 0x294);
    ((Model *)(&((PlayerActor *)this)->bodyModel))->setAlpha(((PlayerActor *)this)->alpha);
    ((TwoLayerAnimModel *)(&((PlayerActor *)this)->bodyModel))->drawLayered(0);
    Model_GetJointWorldMtx(&((PlayerActor *)this)->bodyModel, (Mtx43 *)((u8 *)((PlayerActor *)this) + 0x428 + 0), 0xf);
    Model_GetJointWorldMtx(&((PlayerActor *)this)->bodyModel, &((PlayerActor *)this)->toolHandMtx, 0xe);
    Model_GetJointWorldMtx(&((PlayerActor *)this)->bodyModel, &((PlayerActor *)this)->itemHandMtx, 0xb);
    Model_GetJointWorldMtx(&((PlayerActor *)this)->bodyModel, &a, 7);
    t.x = a.m[9];
    t.y = a.m[10];
    t.z = a.m[11];
    WorldCurve_FromCurved((VecFx32 *)&((PlayerActor *)this)->footPosA, &t);
    Model_GetJointWorldMtx(&((PlayerActor *)this)->bodyModel, &a, 4);
    t.x = a.m[9];
    t.y = a.m[10];
    t.z = a.m[11];
    WorldCurve_FromCurved((VecFx32 *)&((PlayerActor *)this)->footPosB, &t);
    Model_GetJointWorldMtx(&((PlayerActor *)this)->bodyModel, &a, 0x10);
    t.x = a.m[9];
    t.y = a.m[10];
    t.z = a.m[11];
    WorldCurve_FromCurved((VecFx32 *)&((PlayerActor *)this)->headTopPos, &t);
    *(Mtx43 *)&((PlayerActor *)this)->headModel0.mtx = ((PlayerActor *)this)->headMtx;
    ((Model *)(&((PlayerActor *)this)->headModel0))->setAlpha(((PlayerActor *)this)->alpha);
    ((Model *)(&((PlayerActor *)this)->headModel0))->drawScaled((s32 *)(0));
    if (PlayerHead_GetModelId(&((PlayerActor *)this)->headRef, 1) < 0x9e) {
        *(Mtx43 *)&((PlayerActor *)this)->headModel1.mtx = ((PlayerActor *)this)->headMtx;
        ((Model *)(&((PlayerActor *)this)->headModel1))->setAlpha(((PlayerActor *)this)->alpha);
        ((Model *)(&((PlayerActor *)this)->headModel1))->drawScaled((s32 *)(0));
    }
    if (PlayerGlassesModelRef_GetModelId(&((PlayerActor *)this)->faceItemRef) != 0x4b) {
        *(Mtx43 *)&((PlayerActor *)this)->faceItemModel.mtx = ((PlayerActor *)this)->headMtx;
        ((Model *)(&((PlayerActor *)this)->faceItemModel))->setAlpha(((PlayerActor *)this)->alpha);
        ((Model *)(&((PlayerActor *)this)->faceItemModel))->drawScaled((s32 *)(0));
    }
    if (((PlayerActor *)this)->shadowSize > 0) {
        Model_GetJointWorldMtx(&((PlayerActor *)this)->bodyModel, &a, 1);
        t2.x = a.m[9];
        t2.y = a.m[10];
        t2.z = a.m[11];
        WorldCurve_FromCurved(&v, &t2);
        CharaShadow_DrawPlayer(&v, ((PlayerActor *)this)->shadowSize);
    }
    if (((PlayerActor *)(this))->testActionFlag(0)) {
        HeldItemModel_Draw(&((PlayerActor *)this)->heldItemModel, &((PlayerActor *)this)->toolHandMtx);
        u32 mode;
        switch (((PlayerActor *)(this))->getHeldToolKind()) {
        case 4:
        case 10:
            mode = 2;
            break;
        case 1:
        case 5:
        case 9:
            mode = 1;
            break;
        default:
            mode = 0;
            break;
        }
        ((PlayerActor *)this)->heldItemJointMtx = HeldItemModel_GetJointMtx(&((PlayerActor *)this)->heldItemModel, mode);
        if (((PlayerActor *)(this))->getHeldToolKind() == 4) {
            ((PlayerActor *)this)->heldItemJointMtx2 = HeldItemModel_GetJointMtx(&((PlayerActor *)this)->heldItemModel, 3);
        }
    }
}
