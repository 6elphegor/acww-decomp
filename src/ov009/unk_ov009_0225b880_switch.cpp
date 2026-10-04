// mwcc-version: 1.2/base
#include "types.h"
#include "game/Unk_0202f2ac_V3.h"
#include "actor/CharacterListNode.h"
#include "game/Unk_ov009_0225b880_Vec3.h"
#include "game/Vec3.h"
#include "snd/BgmSceneFade.h"
#include "game/StrBSizeData.h"
#include "town/BuildingResources.h"
#include "game/Unk_02031e10_Vec.h"
#include "gfx/Unk_ov009_0225bc88_Blk.h"
#include "town/Unk_ov009_0225b880.h"
#include "game/Unk_ov009_0225cb4c_V3.h"
#include "game/TouchPicker.h"
#include "sys/ProcBase.h"
#include "talk/MsgRequest.h"
#include "gfx/ObjShadowStrip.h"
#include "town/BuildingShadowTable.h"
#include "actor/Actor.h"
#include "actor/Character.h"
#include "snd/BgmManager.h"
#include "snd/SndSeEmitter.h"
#include "snd/Unk_0213b9c4.h"
#include "talk/TalkMsgRequest.h"
#include "snd/BuildingSeEmitter.h"
#include "town/BuildingActor.h"
#include "game/TriangleTrigger.h"
#include "town/BuildingCollider.h"
#include "game/TouchPickTriangle.h"
#include "game/CollisionTriangle.h"




















// ---- main-module helper classes (declarations only)






class BuildingActor;
struct Unk_ov009_0225cc24_Obj;










struct Unk_ov009_0225df84_Obj;
struct Unk_ov009_0225df94_Target;





typedef void (BuildingActor::*Unk_ov009_0225c290_Fn)();
typedef BOOL (BuildingActor::*Unk_ov009_0225c360_Fn)();

// Real (mangled) symbols of the other modules, reached as plain functions with the object first.
#define func_02002d9c _ZN5Actor7preDrawEv
#define func_02002dd0 _ZN5Actor11postExecuteEv
#define func_0203e638 _ZN9Character10preExecuteEv
#define func_0203e650 _ZN9Character9preDeleteEv
#define Character_setCharId _ZN9Character9setCharIdEj
#define Unk_02003c30_callSeStop _ZN12Unk_02003c3010callSeStopEv
#define Unk_02003c40_callSeUpdateRelative _ZN12Unk_02003c4020callSeUpdateRelativeEP16Unk_02003a6c_Vec
#define Unk_02003c30_callSeInit _ZN12Unk_02003c3010callSeInitEv
#define TriangleTrigger_getCenter _ZN15TriangleTrigger9getCenterEv
#define AnimModel_attachAnim _ZN9AnimModel10attachAnimEv
#define BlendAnimModel_initAnim _ZN14BlendAnimModel8initAnimEiiitt
#define AnimModel_drawAnimated _ZN9AnimModel12drawAnimatedEPv
#define AnimModel_stepAnim _ZN9AnimModel8stepAnimEv
#define AnimModel_allocAnmObj _ZN9AnimModel11allocAnmObjEPv
#define func_020548a0 _ZN9AnimModelD1Ev
#define func_020548d0 _ZN9AnimModelC1Ev
#define Model_setInitCallback _ZN5Model15setInitCallbackEii
#define Model_clearResource _ZN5Model13clearResourceEv
#define Model_setResource _ZN5Model11setResourceEP16Unk_020553f8_Resj
#define AnimFrameCtrl_hasPassedFrame _ZN13AnimFrameCtrl14hasPassedFrameEi
#define AnimFrameCtrl_isFinished _ZN13AnimFrameCtrl10isFinishedEv
#define TalkAutoAdvance_start _ZN15TalkAutoAdvance5startEi
#define BuildingLights_isLit _ZN14BuildingLights5isLitEv
#define BuildingLights_setLit _ZN14BuildingLights6setLitEiii
#define BuildingLights_updateLights _ZN14BuildingLights12updateLightsEP3Ctx
#define BuildingLights_bind _ZN14BuildingLights4bindEP3Ctxi
#define func_020b200c _ZN14BuildingLightsD2Ev
#define func_020b2034 _ZN14BuildingLightsC2Ev
#define func_ov009_0225b934 _ZN12Unk_0213b9c4D1Ev
#define func_ov009_0225b94c _ZN17BuildingSeEmitterC1Ev

extern "C" {
extern char sBuildingDefaultMsgFile[];
extern char data_ov009_0225e3e8[];
extern char data_ov009_0225e3ec[];
extern char data_ov009_0225e3fc[];
extern char data_ov009_0225e40c[];
extern char data_ov009_0225e41c[];
extern char data_ov009_0225e42c[];
extern char data_ov009_0225e43c[];
extern char data_ov009_0225e44c[];
extern char data_ov009_0225e45c[];
extern char sBuildingLightTexPathFmt[];
extern char sBuildingTexPathFmt[];
extern char sBuildingArcPathFmt[];
extern char sBuildingArcPath[];
extern char sBuildingTexPath[];
extern char sBuildingLightTexPath[];
extern BuildingResources sBuildingResources[];
extern u32 gCamera;
extern Unk_ov009_0225b880_Vec3 gCameraLookAt;
extern u8 data_020d0a7c[];
extern void *gFieldStructureHeap;
extern void *gCurrentHeap;
extern BgmManager *data_021c1b3c;

void _ZN9Character17detachTalkRequestEi(void *self, MsgRequest *a);
void _ZN9Character17attachTalkRequestEi(void *self, MsgRequest *a);
void *func_ov009_0225b934(void *self);
void _ZN12SndSeEmitterD2Ev(void *self);
extern u8 data_0213b9c4[];
void func_ov009_0225b94c(void *self);
void _ZN17BuildingSeEmitter11setPositionEP23Unk_ov009_0225b880_Vec3(void *self, Unk_ov009_0225b880_Vec3 *v, u32 extra);
StrBSizeData *StrBSize_Get(u16 *p);

void BuildingInfo_Copy(void *self, const u8 *src);
void BuildingInfo_Destroy(void *self);
s32 BuildingInfo_GetViewRangeBack(void *self);
s32 BuildingInfo_GetViewRangeFront(void *self);
s32 BuildingInfo_GetViewRangeX(void *self);
s32 BuildingInfo_GetUnk05(void *self);
s32 BuildingInfo_GetInteriorScene(void *self);
s32 BuildingInfo_GetEntranceType(void *self);

void Snd_SeEmitterPlayHeld(void *, u32, u32, u32);
void Snd_SeEmitterPlayOneShot(void *, u32, u32, u32);
void Unk_02003c30_callSeStop(void *);
void Unk_02003c40_callSeUpdateRelative(void *, void *);
void Unk_02003c30_callSeInit(void *);
void BuildingLights_isLit(void *);
void AnimModel_drawAnimated(void *, u32);
s32 Math_Atan2(s32, s32);
s32 func_01ffcb0c(s32, s32);
void func_01ffd070(Unk_ov009_0225b880_Vec3 *, void *, Unk_ov009_0225b880_Vec3 *);
void *TriangleTrigger_getCenter(void *);
BOOL Item_IsFurniture(u16 *);
s32 Item_GetFurnitureIndex(u16 *);
void TalkAutoAdvance_start(void *, u32);
void BuildingOccupancy_Leave(u32, u32);
void HouseVisitor_ClearPresent();
void *Scene_GetWarpRequest();
void Scene_ResetTownReturnPos();
s32 Math_AngleDiffAbs(s32, s32);
s32 Vec_DistXZ(void *, void *);
s32 *PlayerActor_GetBodyPos(u32);
BOOL PlayerActor_LocalRequestDoorEnter(u32, s32 *, s32 *, s32);
BOOL PlayerActor_IsStowFinished();
void PlayerActor_RequestStowThenAct10(u32);
BOOL PlayerActor_IsEnteringDoor();
void Camera_SetMode3();
void TalkRequest_SetTargetDone(void *);
BOOL PlayerActor_LocalRequestDoorApproach(s32 *, s32 *, s16 *);
s32 Scene_GetCurrent();
s32 SceneWarp_RequestExit(void *, s32);
s32 Ground_GetDefaultY(u32);
void Scene_SetTownReturnPos(void *, s32, Unk_ov009_0225b880_Vec3 *, u32, s32, u32, u32);
void Building_SetLastEntranceType();

s32 BuildingOccupancy_GetAnswer(u32);
void BuildingOccupancy_RequestEnter(u32);
BOOL Item_IsNookShop(u16 *);
void AnimModel_stepAnim(void *);
BOOL AnimFrameCtrl_isFinished(void *);
BOOL AnimFrameCtrl_hasPassedFrame(void *, s32);
void BlendAnimModel_initAnim(void *, void *, s32, s32, s32, s32);
void Melody_PlayAt(void *, s32);
s32 PlayerActor_TestSlotFlag(s32, s32);
BOOL TalkRequestFlags_IsResetti();
void TalkRequest_AddPlayerTalk6(void *, s32);
TouchPicker *Scene_GetTouchPicker();
s32 TouchPick_GetTappedObject(void *, s32 *, u8 *);
void *PlayerActor_GetActor(u32);
BOOL BuildingState_Set(u32, u32);

void *Heap_Alloc(void *heap, u32 size);
u32 BuildingList_IndexOf(void *p);
void Field_SetDoorExitMode(u32 a);
BOOL PlayerActor_LocalRequestDoorExit();
s32 TriangleTrigger_Unregister(void *node);
void TriangleTrigger_Register(void *node);
s32 WorldCurve_ToCurved(void *out, void *in);
void Mtx43_SetTranslate(void *m, s32 a, s32 b, s32 c);
void Mtx43_RotateX(void *m, s32 a);
BOOL PlayerActor_IsInterruptibleByMenu();
s32 func_020639e8(char *buf, const char *fmt, ...);
void *File_LoadAlloc(void *a, void *heap, s32 c, s32 d);
BOOL File_Exists(void *p);
s32 func_02101340(void *buf, char *name, void *data);
void *func_021012bc(void *name);
void func_02101310(void *buf);
void *func_02106654();
void *func_02106670(void *p, s32 a);
void *func_02106690();
void *func_021066ac(void *p, s32 a);
void *NNS_G3dGetTex(void *p);
void Mem_Free(void *p);
BOOL Gfx3d_LoadTex(void *p, u32 a);
BOOL Gfx3d_LoadTexAndPltt(void *p, u32 a);
void *Gfx3d_CopyTex(void *p, void *g);

u16 Item_MakeBuilding(u32 x);
s32 BuildingState_Get(u32);
s32 Field_GetStructureTexSuffix();
void FieldStructureMgr_GetPlayerHouseTex();
s32 PlayerHouseTex_Get();
void BuildingList_Remove(void *);
void BuildingList_Add(void *);
BOOL Model_setResource(void *, void *, s32);
void AnimModel_allocAnmObj(void *, void *);
void AnimModel_attachAnim(void *);
void Model_clearResource(void *);
void Model_setInitCallback(void *, void *, void *);
void func_020548a0(void *);
void ModelSlotHandle_Destroy(void *);
void Clock_GetMinuteHour(void *);
void BuildingLights_setLit(void *, s32, s32, s32);
void BuildingLights_updateLights(void *, void *);
void BuildingLights_bind(void *, void *, s32);
void func_020b200c(void *);
void CharInteractSync_ReleaseLock();
void NookShop_SetVisitState(u32);
BOOL func_02002d9c(void *);
s32 func_02002dd0(void *, u32);
BOOL func_0203e638(void *);
BOOL func_0203e650(void *);
void Character_setCharId(void *, u32);
BOOL Camera_IsBlockingFocusView(void *, s32, s32);
s32 WorldCurve_Apply(void *, void *);
void NNS_G3dBindMdlPltt(void *, s32);
void NNS_G3dBindMdlTex(void *, s32);

void func_020548d0(void *);
void func_020b2034(void *);
void ModelSlotHandle_Init(void *);
void *func_021065dc();
u32 func_021065f8(void *, u32);
void *NNS_G3dGetMdlSet();
void MTX_MultVec43(s32, s32, Unk_ov009_0225b880_Vec3 *);
void WorldCurve_FromCurved(void *, Unk_ov009_0225b880_Vec3 *);
void __cxa_vec_cleanup(void *, s32, s32, void (*)(BuildingResources *));

void Building_LocalToWorld(void *p, s32 a, s32 b);
BOOL _ZN13BuildingActor13setEntryStateEi(void *self, s32 a);
BOOL Building_IsNight();
void BuildingActor_Create();
BOOL BuildingResources_IsLoaded(BuildingResources *e);
void *func_ov009_0225df58(void *unused);
void *func_ov009_0225df6c(void *unused);
void Building_InitModelCallback(Unk_ov009_0225df84_Obj *o);
void Building_ModelCallback(struct Unk_ov009_0225df94_Arg *a);
}

static inline BOOL Unk_ov009_0225d0d8_Match(u16 *p, u32 v) {
    BOOL r;
    if (Item_IsFurniture(p)) {
        u16 t;
        t = v;
        s32 a = Item_GetFurnitureIndex(p);
        s32 b = Item_GetFurnitureIndex(&t);
        if (a == b) {
            r = TRUE;
        } else {
            r = FALSE;
        }
    } else {
        if (*p == v) {
            r = TRUE;
        } else {
            r = FALSE;
        }
    }
    return r;
}

static inline BOOL Unk_ov009_0225cc24_IsNine(u16 v) {
    if (v == 9) {
        return TRUE;
    }
    return FALSE;
}

static inline BOOL Unk_ov009_0225d858_Is(u16 *p, u32 v) {
    if (Item_IsFurniture(p)) {
        u16 t = v;
        s32 a = Item_GetFurnitureIndex(p);
        s32 b = Item_GetFurnitureIndex(&t);
        if (a == b) {
            return TRUE;
        }
        return FALSE;
    }
    if (*p == v) {
        return TRUE;
    }
    return FALSE;
}




void BuildingActor::onInteractionEvent(u32 a, u8 b) {
    switch (a) {
    case 6:
        BuildingOccupancy_Leave(itemId, 0);
        HouseVisitor_ClearPresent();
        Scene_GetWarpRequest();
        Scene_ResetTownReturnPos();
        exitDelay = 1;
        break;
    case 0:
    case 1:
        setEntryState(1);
        break;
    case 8:
        setEntryState(0);
        break;
    }
}
