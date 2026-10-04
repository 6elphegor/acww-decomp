// mwcc-version: 1.2/sp2
#include "types.h"
#include "game/Unk_0202f2ac_V3.h"
#include "actor/CharacterListNode.h"
#include "game/Unk_ov009_0225b880_Vec3.h"
#include "game/Vec3.h"
#include "snd/BgmSceneFade.h"
#include "game/StrBSizeData.h"
#include "town/BuildingResources.h"
#include "game/Unk_02031e10_Vec.h"
#include "gfx/Mtx43.h"
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
#include "talk/TalkWindowState.h"
#include "snd/BuildingSeEmitter.h"
#include "town/BuildingActor.h"
#include "game/TriangleTrigger.h"
#include "town/BuildingCollider.h"
#include "game/TouchPickTriangle.h"
#include "game/CollisionTriangle.h"
#include "gfx/DebugColor.h"
#include "actor/ActorProfile.h"




















// ---- main-module helper classes (declarations only)






class BuildingActor;
struct Unk_ov009_0225cc24_Obj;















typedef void (BuildingActor::*Unk_ov009_0225c290_Fn)();
typedef BOOL (BuildingActor::*Unk_ov009_0225c360_Fn)();

// Real (mangled) symbols of the other modules, reached as plain functions with the object first.
#define func_02002d9c _ZN5Actor7preDrawEv
#define func_02002dd0 _ZN5Actor11postExecuteEv
#define func_0203e638 _ZN9Character10preExecuteEv
#define func_0203e650 _ZN9Character9preDeleteEv
#define Character_setCharId _ZN9Character9setCharIdEj
#define SndSeEmitter_callStop _ZN12SndSeEmitter8callStopEv
#define SndSeEmitter_callUpdateRelative _ZN12SndSeEmitter18callUpdateRelativeEP16Unk_02003a6c_Vec
#define SndSeEmitter_callInit _ZN12SndSeEmitter8callInitEv
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
#define Model_setResource _ZN5Model11setResourceEP12NNSG3dResMdlj
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
s32 BuildingInfo_GetFlickeringLights(void *self);
s32 BuildingInfo_GetInteriorScene(void *self);
s32 BuildingInfo_GetEntranceType(void *self);

void Snd_SeEmitterPlayHeld(void *, u32, u32, u32);
void Snd_SeEmitterPlayOneShot(void *, u32, u32, u32);
void SndSeEmitter_callStop(void *);
void SndSeEmitter_callUpdateRelative(void *, void *);
void SndSeEmitter_callInit(void *);
s32 BuildingLights_isLit(void *);
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
s32 Str_SPrintf(char *buf, const char *fmt, ...);
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
void *Building_GetFirstAnm(void *unused);
void *Building_GetFirstMdl(void *unused);
void Building_InitModelCallback(NNSG3dRS *o);
void Building_ModelCallback(struct NNSG3dRS *a);
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




extern "C" void BuildingActor_Create() {
    BuildingActor *p = new BuildingActor();
}

extern "C" void Building_LocalToWorld(void *p, s32 a, s32 b) {
    Unk_ov009_0225b880_Vec3 v;
    MTX_MultVec43(a, b, &v);
    WorldCurve_FromCurved(p, &v);
}

BuildingResources::BuildingResources() {
    u32 i;
    bmd0 = 0;
    bmd1 = 0;
    tex = 0;
    lightTex = 0;
    shadowTable = 0;
    bca0 = 0;
    bca1 = 0;
    bca2 = 0;
    solidCenterX = 0;
    solidCenterZ = 0;
    solidSizeX = 0;
    solidSizeZ = 0;
    for (i = 0; i < 4; i++) {
        btaAnims[i] = 0;
    }
}

BuildingResources::~BuildingResources() {}


extern "C" {
DebugColor data_ov009_0225e4fc(31, 20, 20, 31);
DebugColor data_ov009_0225e4e0(20, 20, 31, 31);
DebugColor data_ov009_0225e4f4(31, 31, 20, 31);
DebugColor data_ov009_0225e4f0(20, 31, 20, 31);
DebugColor data_ov009_0225e500(20, 31, 31, 31);
DebugColor data_ov009_0225e4f8(20, 24, 24, 31);
BuildingResources sBuildingResources[0x22];
}

extern "C" BOOL BuildingResources_IsLoaded(BuildingResources *e) {
    if (e->bmd0 != 0 || e->bmd1 != 0 || e->tex != 0 || e->lightTex != 0 || e->shadowTable != 0 || e->bca0 != 0 ||
        e->bca1 != 0 || e->bca2 != 0) {
        return TRUE;
    }
    return FALSE;
}

void BuildingActor::onJointCalcPost(u32 a, void *b) {
}

extern "C" void Building_ModelCallback(NNSG3dRS *a) {
    BuildingActor *o = (BuildingActor *)a->pRenderObj->ptrUser;
    if (o != NULL) {
        o->onJointCalcPost(a->c[1], a);
    }
}

extern "C" void Building_InitModelCallback(NNSG3dRS *o) {
    o->cbVecFunc[6] = (void *)Building_ModelCallback;
    o->cbVecTiming[6] = 2;
}

extern "C" void *Building_GetFirstMdl(void *unused) {
    u8 *p = (u8 *)NNS_G3dGetMdlSet();
    return p + *(s32 *)(p + *(u16 *)(p + 0xe) + 0xc);
}

extern "C" void *Building_GetFirstAnm(void *unused) {
    void *p = func_021065dc();
    return (void *)func_021065f8(p, 0);
}

BuildingActor::BuildingActor() {
    itemId = 0xfff1;
    func_020548d0(model);
    func_020b2034(lights);
    func_ov009_0225b94c(seEmitter);
    ModelSlotHandle_Init(modelSlot);
}

BuildingActor::~BuildingActor() {
    ModelSlotHandle_Destroy(modelSlot);
    func_ov009_0225b934(seEmitter);
    func_020b200c(lights);
    func_020548a0(model);
}

BOOL BuildingActor::initBuilding() { return TRUE; }

BOOL BuildingActor::onCreate() {
    Mtx43 b1;
    Mtx43 b2;
    struct {
        s32 v[12];
    } m;
    Unk_ov009_0225b880_Vec3 v;
    BuildingList_Add(this);
    gridX = position.x >> 13;
    gridZ = position.z >> 13;
    Character_setCharId(this, (u16)(((gridZ & 0xff) << 8) | (gridX & 0xff)));
    itemId = *(u32 *)((u8 *)this + 8);
    buildingIndex = itemId & 0xfff;
    char *a = getArcPath();
    char *bb = getTexPath();
    char *c = getLightTexPath();
    setupModel(a, bb, c);
    initEntryArea();
    setupAnims();
    updateBaseMatrix(&b1);
    Model_setInitCallback(model, (void *)Building_InitModelCallback, this);
    b2 = b1;
    createShadows(&b2);
    s32 ang = WorldCurve_Apply(&v, &position.x);
    Mtx43_SetTranslate(&m, v.x, v.y, v.z);
    Mtx43_RotateX(&m, ang);
    createColliders((Mtx43 *)&m);
    BuildingResources *r = getResources();
    BuildingLights_bind(lights, (void *)(r ? r->bmd0 : 0), 1);
    setInteractionRange(0);
    if (getDoorPos(&entryPos, (s16 *)0)) {
        entryPos.z -= 0x4000;
    }
    BOOL res = initBuilding();
    setEntryState(0);
    return res;
}

BOOL BuildingActor::preExecute() {
    if (!func_0203e638(this)) {
        return FALSE;
    }
    ((BuildingSeEmitter *)seEmitter)->activate();
    u16 *p = getItemId();
    if (Unk_ov009_0225d858_Is(p, 0x501d)) {
        s32 t = BuildingState_Get(itemId);
        if (doorState != t) {
            setDoorState(t);
        }
    }
    updateOffscreen();
    if (Scene_GetCurrent() != 0x2c) {
        updateEntryState();
    }
    updateDoorState();
    if (Scene_GetCurrent() != 0x2c) {
        submitColliders();
    }
    BOOL on = areLightsOn();
    s32 b = hasFlickeringLights();
    BuildingLights_setLit(lights, on, 1, b);
    BuildingLights_updateLights(lights, modelRes);
    updateDoorExit();
    return TRUE;
}

BOOL BuildingActor::postExecute(u32 a) {
    Unk_ov009_0225da90_Vec3 v = getSoundPos();
    u16 *pp = getItemId();
    _ZN17BuildingSeEmitter11setPositionEP23Unk_ov009_0225b880_Vec3(seEmitter, (Unk_ov009_0225b880_Vec3 *)&v, *pp);
    if (colliderFlags & 2) {
        colliderFlags |= 8;
    } else {
        colliderFlags &= ~8;
    }
    colliderFlags &= ~2;
    colliderFlags &= ~4;
    func_02002dd0(this, a);
}

BOOL BuildingActor::preDraw() {
    if (!func_02002d9c(this)) {
        return FALSE;
    }
    if ((colliderFlags & 1) == 0) {
        u16 *p = getItemId();
        BOOL r = Unk_ov009_0225d858_Is(p, 0x500b);
        if (r || !Camera_IsBlockingFocusView(&solidCenterX, solidSizeX, solidSizeZ)) {
            if (needsMatrixUpdate()) {
                updateMatrix();
            }
            return TRUE;
        }
    }
    return FALSE;
}

BOOL BuildingActor::preDelete() {
    if (!func_0203e650(this)) {
        return FALSE;
    }
    ((BuildingSeEmitter *)seEmitter)->deactivate();
    destroyShadows();
    destroyColliders();
    Model_clearResource(model);
    BuildingList_Remove(this);
    if (entryFlags.f0) {
        CharInteractSync_ReleaseLock();
        if (Item_IsNookShop(&itemId)) {
            NookShop_SetVisitState(1);
        }
    }
    return TRUE;
}

void BuildingActor::initEntryArea() {
    BuildingResources *r = getResources();
    if (r != NULL) {
        s32 z = position.z + r->solidCenterZ;
        s32 y = position.y;
        s32 x = position.x + r->solidCenterX;
        solidCenterX = x;
        solidCenterY = y;
        solidCenterZ = z;
        solidSizeX = r->solidSizeX;
        solidSizeZ = r->solidSizeZ;
    }
}

void BuildingActor::setupAnims() {
    if (getDoorInAnim() != 0 || getDoorOutAnim() != 0) {
        AnimModel_allocAnmObj(model, gFieldStructureHeap);
        BlendAnimModel_initAnim(model, (void *)getDoorInAnim(), 0, 0x1000, 0, 0);
        AnimModel_attachAnim(model);
    }
    if (getEntranceType() != 0) {
        u16 *p = getItemId();
        if (Unk_ov009_0225d858_Is(p, 0x501d)) {
            setDoorState(BuildingState_Get(itemId));
        } else {
            setDoorState(0);
        }
    }
}

s32 BuildingActor::getViewRangeX() {
    u32 v;
    BOOL in = FALSE;
    v = itemId;
    if (v >= 0x5000 && v <= 0x5021) {
        in = TRUE;
    }
    if (in) {
        v = v & 0xfff;
    } else {
        v = -1;
    }
    BuildingInfo t;
    BuildingInfo_Copy(&t, v < 0x22 ? data_020d0a7c + v * 10 : data_020d0a7c);
    s32 r = BuildingInfo_GetViewRangeX(&t) << 13;
    BuildingInfo_Destroy(&t);
    return r;
}

s32 BuildingActor::getViewRangeBack() {
    u32 v;
    BOOL in = FALSE;
    v = itemId;
    if (v >= 0x5000 && v <= 0x5021) {
        in = TRUE;
    }
    if (in) {
        v = v & 0xfff;
    } else {
        v = -1;
    }
    BuildingInfo t;
    BuildingInfo_Copy(&t, v < 0x22 ? data_020d0a7c + v * 10 : data_020d0a7c);
    s32 r = BuildingInfo_GetViewRangeBack(&t) << 13;
    BuildingInfo_Destroy(&t);
    return r;
}

s32 BuildingActor::getViewRangeFront() {
    u32 v;
    BOOL in = FALSE;
    v = itemId;
    if (v >= 0x5000 && v <= 0x5021) {
        in = TRUE;
    }
    if (in) {
        v = v & 0xfff;
    } else {
        v = -1;
    }
    BuildingInfo t;
    BuildingInfo_Copy(&t, v < 0x22 ? data_020d0a7c + v * 10 : data_020d0a7c);
    s32 r = BuildingInfo_GetViewRangeFront(&t) << 13;
    BuildingInfo_Destroy(&t);
    return r;
}

s32 BuildingActor::getDoorInAnim() {
    BuildingResources *r = getResources();
    if (r != NULL) {
        return r->bca0;
    }
    return 0;
}

s32 BuildingActor::getDoorOutAnim() {
    BuildingResources *r = getResources();
    if (r != NULL) {
        return r->bca1;
    }
    return 0;
}

s32 BuildingActor::getBca2Anim() {
    BuildingResources *r = getResources();
    if (r != NULL) {
        return r->bca2;
    }
    return 0;
}

void *BuildingActor::getBtaAnim(u32 idx) {
    if (idx < 4) {
        BuildingResources *r = getResources();
        if (r != NULL) {
            return (void *)r->btaAnims[idx];
        }
    }
    return 0;
}

s32 BuildingActor::getEntranceType() {
    u32 v;
    BOOL in = FALSE;
    v = itemId;
    if (v >= 0x5000 && v <= 0x5021) {
        in = TRUE;
    }
    if (in) {
        v = v & 0xfff;
    } else {
        v = -1;
    }
    BuildingInfo t;
    BuildingInfo_Copy(&t, v < 0x22 ? data_020d0a7c + v * 10 : data_020d0a7c);
    s32 r = BuildingInfo_GetEntranceType(&t);
    BuildingInfo_Destroy(&t);
    return r;
}

BOOL BuildingActor::areLightsOn() {
    if (Building_IsNight() && isOpen()) {
        return TRUE;
    }
    return FALSE;
}

BOOL BuildingActor::isOpen() { return TRUE; }

extern "C" BOOL Building_IsNight() {
    struct {
        u8 v[4];
    } t;
    Clock_GetMinuteHour(&t);
    u32 b = t.v[1];
    if (b >= 6 && b < 0x12) {
        return FALSE;
    }
    return TRUE;
}

char *BuildingActor::getArcPath() {
    u32 i = buildingIndex;
    Str_SPrintf(sBuildingArcPath, sBuildingArcPathFmt, i, i, Field_GetStructureTexSuffix());
    return sBuildingArcPath;
}

char *BuildingActor::getTexPath() {
    u32 i = buildingIndex;
    Str_SPrintf(sBuildingTexPath, sBuildingTexPathFmt, i, i, Field_GetStructureTexSuffix());
    return sBuildingTexPath;
}

char *BuildingActor::getLightTexPath() {
    volatile u16 v = Item_MakeBuilding(buildingIndex);
    switch (v) {
    case 0x500a:
    case 0x5011:
    case 0x501c:
    case 0x501d:
        return 0;
    }
    u32 i = buildingIndex;
    Str_SPrintf(sBuildingLightTexPath, sBuildingLightTexPathFmt, i, i, Field_GetStructureTexSuffix());
    return sBuildingLightTexPath;
}

BOOL BuildingActor::setupModel(char *a, char *b, char *c) {
    if (shadows != 0 || modelRes != 0) {
        return TRUE;
    }
    loadResources(a, b, c);
    BuildingResources *r = getResources();
    if (r != NULL && r->bmd0 != 0) {
        if (Model_setResource(model, (void *)r->bmd0, 0)) {
            FieldStructureMgr_GetPlayerHouseTex();
            s32 x = PlayerHouseTex_Get();
            NNS_G3dBindMdlPltt((void *)r->bmd0, x);
            if (r->tex) {
                NNS_G3dBindMdlTex((void *)r->bmd0, r->tex);
            }
            if (r->lightTex) {
                NNS_G3dBindMdlTex((void *)r->bmd0, r->lightTex);
                NNS_G3dBindMdlPltt((void *)r->bmd0, r->lightTex);
            }
            return TRUE;
        }
        return FALSE;
    }
    return TRUE;
}

BOOL BuildingActor::loadResources(char *a, char *b, char *c) {
    BOOL result = FALSE;
    BuildingResources *e = getResources();
    if (BuildingResources_IsLoaded(e)) {
        return TRUE;
    }
    StrBSizeData *h = StrBSize_Get(&itemId);
    if (h != NULL) {
        h->getSolidBounds(&e->solidCenterX, &e->solidCenterZ, &e->solidSizeX, &e->solidSizeZ);
    }
    if (a != NULL) {
        void *data = File_LoadAlloc(a, gFieldStructureHeap, 4, 0);
        if (data != NULL) {
            char b1[0x1e];
            char b2[0x1e];
            Unk_ov009_0225d2a4_Obj obj;
            s32 z1, z2;
            u32 i;
            if (func_02101340(&obj, data_ov009_0225e3e8, data)) {
                void *t;
                t = func_021012bc(data_ov009_0225e3ec);
                if (t) {
                    e->bca0 = (s32)Building_GetFirstAnm(t);
                }
                t = func_021012bc(data_ov009_0225e3fc);
                if (t) {
                    e->bca1 = (s32)Building_GetFirstAnm(t);
                }
                t = func_021012bc(data_ov009_0225e40c);
                if (t) {
                    e->bca2 = (s32)Building_GetFirstAnm(t);
                }
                i = 0;
                z1 = i;
                for (; i < 4; i++) {
                    Str_SPrintf(b1, data_ov009_0225e41c, i);
                    if (func_021012bc(b1)) {
                        e->btaAnims[i] = (s32)func_02106670(func_02106654(), z1);
                    }
                }
                i = 0;
                z2 = i;
                for (; i < 4; i++) {
                    Str_SPrintf(b2, data_ov009_0225e42c, i);
                    if (func_021012bc(b2)) {
                        e->btpAnims[i] = (s32)func_021066ac(func_02106690(), z2);
                    }
                }
                e->bmd0 = (s32)Building_GetFirstMdl(func_021012bc(data_ov009_0225e43c));
                t = func_021012bc(data_ov009_0225e44c);
                if (t) {
                    e->bmd1 = (s32)Building_GetFirstMdl(t);
                }
                e->shadowTable = (BuildingShadowTable *)func_021012bc(data_ov009_0225e45c);
                func_02101310(&obj);
            }
            result = TRUE;
        }
    }
    if (b != NULL) {
        if (File_Exists(b)) {
            void *r5 = File_LoadAlloc(b, gCurrentHeap, -4, 0);
            if (r5 != NULL) {
                e->tex = (s32)NNS_G3dGetTex(r5);
                if (Gfx3d_LoadTex((void *)e->tex, 0)) {
                    e->tex = (s32)Gfx3d_CopyTex((void *)e->tex, gFieldStructureHeap);
                }
                Mem_Free(r5);
            }
        }
    }
    if (c != NULL) {
        if (File_Exists(c)) {
            void *r5 = File_LoadAlloc(c, gCurrentHeap, -4, 0);
            if (r5 != NULL) {
                e->lightTex = (s32)NNS_G3dGetTex(r5);
                if (Gfx3d_LoadTexAndPltt((void *)e->lightTex, 0)) {
                    e->lightTex = (s32)Gfx3d_CopyTex((void *)e->lightTex, gFieldStructureHeap);
                }
                Mem_Free(r5);
            }
        }
    }
    return result;
}

void BuildingActor::makeCurvedMatrix(Mtx43 *out) {
    Mtx43 m;
    Mtx43_SetTranslate(&m, drawPos.x, drawPos.y, drawPos.z);
    Mtx43_RotateX(&m, (s16)drawTilt);
    *out = m;
}

// tiny callees defined last so they stay out of line
BuildingResources *BuildingActor::getResources() {
    if (buildingIndex < 0x22) {
        return &sBuildingResources[buildingIndex];
    }
    return NULL;
}

void BuildingActor::updateDoorExit() {
    if (exitDelay >= 1) {
        if (exitDelay == 3) {
            if (PlayerActor_IsInterruptibleByMenu()) {
                switch (getEntranceType()) {
                case 2:
                    Field_SetDoorExitMode(1);
                    data_021c1b3c->sceneFade.setFadeDelay(1);
                    if (PlayerActor_LocalRequestDoorExit()) {
                        exitDelay = 0;
                        return;
                    }
                    break;
                case 3:
                    Field_SetDoorExitMode(0);
                    data_021c1b3c->sceneFade.setFadeDelay(2);
                    if (PlayerActor_LocalRequestDoorExit()) {
                        exitDelay = 0;
                        return;
                    }
                    break;
                case 1:
                    Field_SetDoorExitMode(0);
                    if (Unk_ov009_0225d0d8_Match(&itemId, 0x5012) || Unk_ov009_0225d0d8_Match(&itemId, 0x5013)) {
                        data_021c1b3c->sceneFade.setFadeDelay(4);
                    } else {
                        data_021c1b3c->sceneFade.setFadeDelay(3);
                    }
                    if (PlayerActor_LocalRequestDoorExit()) {
                        exitDelay = 0;
                        return;
                    }
                    break;
                default:
                    exitDelay = 0;
                    return;
                }
            }
        }
        if (exitDelay < 3) {
            exitDelay++;
        }
    }
}

void BuildingActor::updateBaseMatrix(Mtx43 *out) {
    Mtx43 blk;
    if (!calcCustomBaseMatrix(&blk)) {
        drawTilt = WorldCurve_ToCurved(&drawPos, &position);
        makeCurvedMatrix(&blk);
    }
    baseMatrix = blk;
    if (out != NULL) {
        *out = blk;
    }
}

void BuildingActor::createShadows(Mtx43 *m) {
    BuildingResources *e = getResources();
    if (e != NULL) {
        if (e->shadowTable != NULL) {
            void *heap = gFieldStructureHeap;
            u32 n = e->shadowTable->getCount();
            shadows = (ObjShadowStrip *)Heap_Alloc(heap, n * 0x34);
            ObjShadowStrip *p = shadows;
            u32 i;
            s32 zero;
            i = 0;
            zero = i;
            for (; i < n; p++, i++) {
                if (p != NULL) {
                    p = p->func_020ac1e0();
                }
                BuildingShadowEntry *it = e->shadowTable->getEntry(i);
                Unk_ov009_0225cb4c_V3 v(it->offsetX, zero, it->offsetZ);
                Unk_ov009_0225b880_Vec3 out;
                Building_LocalToWorld(&out, (s32)&v, (s32)m);
                p->build((Vec3 *)&out, it->size, it->shift, it->texIndex, it->texLeft, it->texRight, (s32)heap);
            }
        }
    }
}

void BuildingActor::updateShadows(Mtx43 *m) {
    BuildingResources *e = getResources();
    if (e != NULL) {
        ObjShadowStrip *p = shadows;
        if (p != NULL) {
            s32 i = 0;
            s32 zero = i;
            for (; (u32)i < e->shadowTable->getCount(); p++, i++) {
                BuildingShadowEntry *it = e->shadowTable->getEntry(i);
                Unk_ov009_0225cb4c_V3 v(it->offsetX, zero, it->offsetZ);
                Unk_ov009_0225b880_Vec3 out;
                Building_LocalToWorld(&out, (s32)&v, (s32)m);
                p->draw((Vec3 *)&out);
            }
        }
    }
}

void BuildingActor::destroyShadows() {
    BuildingResources *e = getResources();
    if (e != NULL) {
        if (shadows != NULL) {
            u32 i;
            for (i = 0; i < e->shadowTable->getCount(); i++) {
            }
            shadows = NULL;
        }
    }
}

void BuildingActor::createColliders(Mtx43 *m) {
    colliderCount = 0;
    StrBSizeData *h = StrBSize_Get(&itemId);
    if (h != NULL) {
        colliderCount = h->getTriangleCount();
        if (colliderCount != 0) {
            BuildingCollider *e4;
            TouchPickTriangle *e6;
            u8 k;
            u32 i;
            Unk_ov009_0225b880_Vec3 a, b, c;
            Unk_ov009_0225b880_Vec3 wa, wb, wc;
            Unk_ov009_0225b880_Vec3 la, lb, lc;
            collisionShapes = (TouchPickTriangle *)Heap_Alloc(gFieldStructureHeap, colliderCount * 0x44);
            colliders = (BuildingCollider *)Heap_Alloc(gFieldStructureHeap, colliderCount * 0x54);
            e4 = colliders;
            e6 = collisionShapes;
            k = BuildingList_IndexOf(this);
            for (i = 0; i < colliderCount; e4++, e6++, i++) {
                if (h->getTriangle(&a.x, &b.x, &c.x, i)) {
                    Building_LocalToWorld(&wa, (s32)&a, (s32)m);
                    Building_LocalToWorld(&wb, (s32)&b, (s32)m);
                    Building_LocalToWorld(&wc, (s32)&c, (s32)m);
                    func_01ffd070(&la, &position, &a);
                    func_01ffd070(&lb, &position, &b);
                    func_01ffd070(&lc, &position, &c);
                    e6 = new (e6) TouchPickTriangle;
                    Scene_GetTouchPicker()->addTriangle(e6, (Vec3 *)&wa, (Vec3 *)&wb, (Vec3 *)&wc, 7, k);
                    e4 = new (e4) BuildingCollider;
                    e4->building = this;
                    e4->entranceType = getEntranceType();
                    e4->setupTrigger((Unk_02031e10_Vec *)&la, (Unk_02031e10_Vec *)&lb, (Unk_02031e10_Vec *)&lc, 0x3000);
                    TriangleTrigger_Register(e4);
                }
            }
        }
    }
}

void BuildingActor::submitColliders() {
    if ((colliderFlags & 1) == 0) {
        TouchPickTriangle *p = collisionShapes;
        if (p != NULL) {
            for (; p < collisionShapes + colliderCount; p++) {
                Scene_GetTouchPicker()->pushTriangle(p);
            }
        }
    }
}

// ---------------------------------------------------------------- actor
void BuildingActor::destroyColliders() {
    if (collisionShapes != NULL) {
        collisionShapes = NULL;
    }
    BuildingCollider *p = colliders;
    if (p != NULL) {
        for (; p < colliders + colliderCount; p += 2) {
            TriangleTrigger_Unregister(p);
            p->building = NULL;
        }
        colliders = NULL;
    }
    colliderCount = 0;
}

u32 BuildingShadowTable::getCount() {
    return count;
}

BuildingShadowEntry *BuildingShadowTable::getEntry(u32 i) {
    return &entries[i];
}

BuildingCollider::BuildingCollider() {}

void BuildingCollider::onActorNear(Unk_ov009_0225b880_Vec3 *a, Unk_ov009_0225cc24_Obj *o, s32 off) {
    if (isPlayerAtDoor(a, off, o)) {
        building->colliderFlags |= 2;
        if (o->speed >= 0x200) {
            building->colliderFlags |= 4;
        }
    }
}

// ---------------------------------------------------------------- element
BOOL BuildingCollider::isPlayerAtDoor(Unk_ov009_0225b880_Vec3 *v, s32 off, Unk_ov009_0225cc24_Obj *o) {
    s16 ang;
    Unk_ov009_0225b880_Vec3 p;
    Unk_ov009_0225b880_Vec3 a;
    Unk_ov009_0225b880_Vec3 b;
    Unk_ov009_0225b880_Vec3 c;
    if (o != NULL) {
        if (building != NULL) {
            if (Unk_ov009_0225cc24_IsNine(o->profile)) {
                if (PlayerActor_GetActor(4) == o) {
                    s32 d = distanceTo((Unk_0202f2ac_V3 *)v);
                    if (d >= 0) {
                        if (d <= off + 0x666) {
                            if (building->getDoorPos(&p, &ang)) {
                                if (Math_AngleDiffAbs(ang, o->rotY) <= 0x1100) {
                                    a.x = v->x;
                                    a.y = v->y;
                                    a.z = v->z;
                                    a.y = a.y + off;
                                    b.x = a.x;
                                    b.y = a.y;
                                    b.z = a.z;
                                    b.x = b.x - func_01ffcb0c(normal.x, 0x2000);
                                    b.z = b.z - func_01ffcb0c(normal.z, 0x2000);
                                    if (intersectLine((Unk_0202f2ac_V3 *)&c, (Unk_0202f2ac_V3 *)&a, (Unk_0202f2ac_V3 *)&b)) {
                                        return TRUE;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return FALSE;
}

// ---------------------------------------------------------------- vfunc_6c
s32 BuildingActor::setDoorState(s32 a) {
    static BOOL (BuildingActor::*tbl[7])() = {
        &BuildingActor::enterDoorIdle, &BuildingActor::enterDoorOpenIn,
        &BuildingActor::enterDoorOpenOut, &BuildingActor::enterDoorSlideOpen,
        &BuildingActor::enterDoorSlideClose, &BuildingActor::enterDoorNoAnimIn,
        &BuildingActor::enterDoorNoAnimOut,
    };
    if ((u32)a < 7) {
        if ((this->*tbl[a])()) {
            if (BuildingState_Set(itemId, a)) {
                doorState = a;
                return TRUE;
            }
        }
    }
    return FALSE;
}

void BuildingActor::updateDoorState() {
    static Unk_ov009_0225c290_Fn tbl[7] = {
        &BuildingActor::execDoorIdle, &BuildingActor::execDoorOpenIn,
        &BuildingActor::execDoorOpenOut, &BuildingActor::execDoorSlideOpen,
        &BuildingActor::execDoorSlideClose, &BuildingActor::execDoorNoAnimIn,
        &BuildingActor::execDoorNoAnimOut
    };
    if (doorState < 7) {
        (this->*tbl[doorState])();
    }
}

BOOL BuildingActor::enterDoorIdle() {
    switch (getEntranceType()) {
    case 1:
    case 2: {
        void *r = (void *)getDoorInAnim();
        if (r == 0) {
            return FALSE;
        }
        BlendAnimModel_initAnim(model, r, 0, 0x1000, 0, 0);
        break;
    }
    }
    return TRUE;
}

void BuildingActor::execDoorIdle() {
    if (PlayerActor_TestSlotFlag(0x13, 4) == 0 && TalkRequestFlags_IsResetti() == 0) {
        s32 st = getEntranceType();
        s32 f = 0;
        if (st == 1 || st == 3) {
            if ((colliderFlags & 4) != 0) {
                if (isOpen() == 0) {
                    clearTalkStartMode();
                    closedTalk = 1;
                } else {
                    clearTalkStartMode();
                    closedTalk = 0;
                }
                TalkRequest_AddPlayerTalk6(this, 0);
                f = 1;
            }
        }
        if ((colliderFlags & 2) != 0 && f == 0) {
            s32 a = TouchPick_GetTappedObject(Scene_GetTouchPicker(), 0, 0);
            s32 b = (s32)PlayerActor_GetActor(4);
            if (b != 0 && b == a) {
                if (isOpen() == 0) {
                    clearTalkStartMode();
                    closedTalk = 1;
                } else {
                    clearTalkStartMode();
                    closedTalk = 0;
                }
                TalkRequest_AddPlayerTalk6(this, 0);
            }
        }
    }
}

BOOL BuildingActor::enterDoorOpenIn() {
    void *r = (void *)getDoorInAnim();
    if (r != 0) {
        BlendAnimModel_initAnim(model, r, 1, 0x1000, 0, 0);
        ((BuildingSeEmitter *)seEmitter)->playSe(0x7d1);
        ((BuildingSeEmitter *)seEmitter)->playSe(0x7d2);
        if (playsDoorMelody()) {
            s32 m = 0;
            u16 v[3];
            BOOL ok;
            if (Item_IsFurniture(&itemId)) {
                v[0] = 0x500d;
                if (Item_GetFurnitureIndex(&itemId) == Item_GetFurnitureIndex(&v[0])) {
                    ok = TRUE;
                } else {
                    ok = FALSE;
                }
            } else {
                if (itemId == 0x500d) {
                    ok = TRUE;
                } else {
                    ok = FALSE;
                }
            }
            if (ok) {
                m = 1;
            } else {
                if (Item_IsFurniture(&itemId)) {
                    v[1] = 0x5000;
                    if (Item_GetFurnitureIndex(&itemId) == Item_GetFurnitureIndex(&v[1])) {
                        ok = TRUE;
                    } else {
                        ok = FALSE;
                    }
                } else {
                    if (itemId == 0x5000) {
                        ok = TRUE;
                    } else {
                        ok = FALSE;
                    }
                }
                if (ok) {
                    m = 2;
                } else {
                    if (Item_IsFurniture(&itemId)) {
                        v[2] = 0x500c;
                        if (Item_GetFurnitureIndex(&itemId) == Item_GetFurnitureIndex(&v[2])) {
                            ok = TRUE;
                        } else {
                            ok = FALSE;
                        }
                    } else {
                        if (itemId == 0x500c) {
                            ok = TRUE;
                        } else {
                            ok = FALSE;
                        }
                    }
                    if (ok) {
                        m = 3;
                    }
                }
            }
            Unk_ov009_0225da90_Vec3 msg = getSoundPos();
            Melody_PlayAt(&msg, m);
        }
        return TRUE;
    }
    return FALSE;
}

void BuildingActor::execDoorOpenIn() {
    AnimModel_stepAnim(model);
    if (AnimFrameCtrl_isFinished(doorAnimCtrl)) {
        setDoorState(0);
    } else if (AnimFrameCtrl_hasPassedFrame(doorAnimCtrl, 0x14)) {
        ((BuildingSeEmitter *)seEmitter)->playSe(0x7d3);
    } else if (AnimFrameCtrl_hasPassedFrame(doorAnimCtrl, 0x1e)) {
        ((BuildingSeEmitter *)seEmitter)->playSe(0x7d4);
    }
}

BOOL BuildingActor::enterDoorOpenOut() {
    void *r = (void *)getDoorOutAnim();
    if (r != 0) {
        BlendAnimModel_initAnim(model, r, 1, 0x1000, 0, 0);
        ((BuildingSeEmitter *)seEmitter)->playSe(0x7d1);
        ((BuildingSeEmitter *)seEmitter)->playSe(0x7d2);
        if (playsDoorMelody()) {
            s32 m = 0;
            u16 v[3];
            BOOL ok;
            if (Item_IsFurniture(&itemId)) {
                v[0] = 0x500d;
                if (Item_GetFurnitureIndex(&itemId) == Item_GetFurnitureIndex(&v[0])) {
                    ok = TRUE;
                } else {
                    ok = FALSE;
                }
            } else {
                if (itemId == 0x500d) {
                    ok = TRUE;
                } else {
                    ok = FALSE;
                }
            }
            if (ok) {
                m = 1;
            } else {
                if (Item_IsFurniture(&itemId)) {
                    v[1] = 0x5000;
                    if (Item_GetFurnitureIndex(&itemId) == Item_GetFurnitureIndex(&v[1])) {
                        ok = TRUE;
                    } else {
                        ok = FALSE;
                    }
                } else {
                    if (itemId == 0x5000) {
                        ok = TRUE;
                    } else {
                        ok = FALSE;
                    }
                }
                if (ok) {
                    m = 2;
                } else {
                    if (Item_IsFurniture(&itemId)) {
                        v[2] = 0x500c;
                        if (Item_GetFurnitureIndex(&itemId) == Item_GetFurnitureIndex(&v[2])) {
                            ok = TRUE;
                        } else {
                            ok = FALSE;
                        }
                    } else {
                        if (itemId == 0x500c) {
                            ok = TRUE;
                        } else {
                            ok = FALSE;
                        }
                    }
                    if (ok) {
                        m = 3;
                    }
                }
            }
            Unk_ov009_0225da90_Vec3 msg = getSoundPos();
            Melody_PlayAt(&msg, m);
        }
        return TRUE;
    }
    return FALSE;
}

void BuildingActor::execDoorOpenOut() {
    AnimModel_stepAnim(model);
    if (AnimFrameCtrl_isFinished(doorAnimCtrl)) {
        setDoorState(0);
    } else if (AnimFrameCtrl_hasPassedFrame(doorAnimCtrl, 0x12)) {
        ((BuildingSeEmitter *)seEmitter)->playSe(0x7d3);
    } else if (AnimFrameCtrl_hasPassedFrame(doorAnimCtrl, 0x18)) {
        ((BuildingSeEmitter *)seEmitter)->playSe(0x7d4);
    }
}

BOOL BuildingActor::enterDoorSlideOpen() {
    void *r = (void *)getDoorInAnim();
    if (r) {
        BlendAnimModel_initAnim(model, r, 1, 0x1000, 0, 0);
        if (Item_IsNookShop(&itemId)) {
            ((BuildingSeEmitter *)seEmitter)->playSe(0x806);
        } else {
            ((BuildingSeEmitter *)seEmitter)->playSe(0x808);
        }
        return TRUE;
    }
    return FALSE;
}

void BuildingActor::execDoorSlideOpen() {
    AnimModel_stepAnim(model);
    if (AnimFrameCtrl_isFinished(doorAnimCtrl)) {
        setDoorState(4);
    }
}

BOOL BuildingActor::enterDoorSlideClose() {
    doorCloseSeDelay = 0x1a;
    void *r = (void *)getDoorOutAnim();
    if (r) {
        BlendAnimModel_initAnim(model, r, 1, 0x1000, 0, 0);
        return TRUE;
    }
    return FALSE;
}

void BuildingActor::execDoorSlideClose() {
    if (doorCloseSeDelay != 0) {
        doorCloseSeDelay--;
        if (doorCloseSeDelay == 0) {
            if (Item_IsNookShop(&itemId)) {
                ((BuildingSeEmitter *)seEmitter)->playSe(0x807);
            } else {
                ((BuildingSeEmitter *)seEmitter)->playSe(0x809);
            }
        }
    }
    if (doorCloseSeDelay == 0) {
        AnimModel_stepAnim(model);
        if (AnimFrameCtrl_isFinished(doorAnimCtrl)) {
            setDoorState(0);
        }
    }
}

BOOL BuildingActor::enterDoorNoAnimIn() { return TRUE; }

void BuildingActor::execDoorNoAnimIn() { setDoorState(0); }

BOOL BuildingActor::enterDoorNoAnimOut() { return TRUE; }

void BuildingActor::execDoorNoAnimOut() { setDoorState(0); }

BOOL BuildingActor::setEntryState(s32 a) {
    static Unk_ov009_0225c360_Fn tbl[9] = {
        &BuildingActor::enterEntryIdle, &BuildingActor::enterEntryCheck,
        &BuildingActor::enterEntryTalkOpen, &BuildingActor::enterEntryTalk,
        &BuildingActor::enterEntry04, &BuildingActor::enterEntry05,
        &BuildingActor::enterEntryWarp, &BuildingActor::enterEntry07,
        &BuildingActor::enterEntry08
    };
    if (a < 9) {
        if ((this->*tbl[a])()) {
            entryState = a;
            return TRUE;
        }
    }
    return FALSE;
}

void BuildingActor::updateEntryState() {
    static Unk_ov009_0225c290_Fn tbl[9] = {
        &BuildingActor::execEntryIdle, (Unk_ov009_0225c290_Fn)&BuildingActor::execEntryCheck,
        &BuildingActor::execEntryTalkOpen, &BuildingActor::execEntryTalk,
        &BuildingActor::execEntry04, &BuildingActor::execEntry05,
        &BuildingActor::execEntryWarp, &BuildingActor::execEntry07,
        &BuildingActor::execEntry08
    };
    if (entryState < 9) {
        (this->*tbl[entryState])();
    }
}

BOOL BuildingActor::enterEntryIdle() { return TRUE; }

void BuildingActor::execEntryIdle() {}

BOOL BuildingActor::enterEntryCheck() {
    if (closedTalk == 0) {
        BuildingOccupancy_RequestEnter(itemId);
    }
    entryFlags.f1 = 0;
    visitRefused = 0;
    return TRUE;
}

BOOL BuildingActor::execEntryCheck() {
    if (closedTalk == 0) {
        s32 r = BuildingOccupancy_GetAnswer(itemId);
        if (r != 0) {
            s32 v = (r == 2) ? 1 : 0;
            u8 *p = (u8 *)&entryFlags;
            *p = (*p & ~2) | ((v & 1) << 1);
            visitRefused = (r == 3) ? 1 : 0;
            if (entryFlags.f1 != 0 || visitRefused != 0) {
                setEntryState(2);
            } else if (getEntranceType() == 1) {
                setEntryState(7);
            } else {
                setEntryState(4);
            }
        }
    } else {
        setEntryState(2);
    }
}

BOOL BuildingActor::enterEntryTalkOpen() {
    _ZN9Character17attachTalkRequestEi(this, this);
    window->nextState = 1;
    setupTalkMsg();
    return TRUE;
}

void BuildingActor::execEntryTalkOpen() {
    if (window != NULL && window->state != 0) {
        onTalkOpened();
        setEntryState(3);
    }
}

BOOL BuildingActor::enterEntryTalk() { return TRUE; }

void BuildingActor::execEntryTalk() {
    if (window != NULL && window->state == 0) {
        onTalkEnded();
        _ZN9Character17detachTalkRequestEi(this, this);
        TalkRequest_SetTargetDone(this);
    } else {
        updateTalk();
    }
}

BOOL BuildingActor::enterEntry04() {
    PlayerActor_RequestStowThenAct10(0);
    return TRUE;
}

void BuildingActor::execEntry04() {
    if (PlayerActor_IsStowFinished()) {
        setEntryState(5);
    }
}

BOOL BuildingActor::enterEntry05() {
    s16 ang;
    s32 p4;
    Unk_ov009_0225b880_Vec3 v;
    if (getDoorPos(&v, &ang)) {
        p4 = v.x;
        if (alignsPlayerToDoor() == 0) {
            s32 *q = PlayerActor_GetBodyPos(4);
            if (q != NULL) {
                p4 = *q;
            }
        }
        if (usesDoorApproach()) {
            if (PlayerActor_LocalRequestDoorApproach(&p4, &v.z, &ang)) {
                return TRUE;
            }
        } else {
            BOOL m = getEntranceType() == 2 ? TRUE : FALSE;
            if (PlayerActor_LocalRequestDoorEnter(m, &p4, &v.z, ang)) {
                return TRUE;
            }
        }
    }
    return FALSE;
}

void BuildingActor::execEntry05() {
    if (PlayerActor_IsEnteringDoor()) {
        switch (getEntranceType()) {
        case 2:
            Camera_SetMode3();
            setEntryState(6);
            break;
        case 3:
            Camera_SetMode3();
            setEntryState(6);
            break;
        }
    }
}

BOOL BuildingActor::enterEntryWarp() {
    warpTimer = 0;
    return TRUE;
}

void BuildingActor::execEntryWarp() {
    warpTimer = warpTimer + 1;
    getEntranceType();
    u32 lim = 0x14;
    if (getEntranceType() == 1) {
        lim += 0xc;
    }
    if (warpTimer >= lim) {
        s32 r = getInteriorScene();
        s16 ang;
        Unk_ov009_0225b880_Vec3 v;
        if (getDoorPos(&v, &ang)) {
            if (SceneWarp_RequestExit(Scene_GetWarpRequest(), r)) {
                v.y = Ground_GetDefaultY(0);
                v.z = v.z + 0x1000;
                void *o = Scene_GetWarpRequest();
                s32 k = Scene_GetCurrent();
                Scene_SetTownReturnPos(o, k, &v, 0xf000000, (s16)(ang + 0x8000), gridX, gridZ);
                getEntranceType();
                Building_SetLastEntranceType();
                entryFlags.f0 = 1;
            }
        }
    }
}

BOOL BuildingActor::enterEntry07() {
    PlayerActor_RequestStowThenAct10(0);
    return TRUE;
}

void BuildingActor::execEntry07() {
    if (PlayerActor_IsStowFinished()) {
        setEntryState(8);
    }
}

BOOL BuildingActor::enterEntry08() { return TRUE; }

void BuildingActor::execEntry08() {
    s16 ang;
    s32 p4;
    Unk_ov009_0225b880_Vec3 v;
    if (getDoorPos(&v, &ang)) {
        p4 = v.x;
        if (alignsPlayerToDoor() == 0) {
            s32 *q = PlayerActor_GetBodyPos(4);
            if (q != NULL) {
                p4 = *q;
            }
        }
        if (PlayerActor_LocalRequestDoorEnter(2, &p4, &v.z, ang)) {
            setEntryState(6);
        }
    }
}

VecFx32 *BuildingActor::getInteractionPos() { return (VecFx32 *)&entryPos; }

BOOL BuildingActor::acceptsInteraction(void *other) {
    Character *a = (Character *)other;
    if (a == NULL) {
        return FALSE;
    }
    s32 d = Math_AngleDiffAbs((s16)(rotY + 0x8000), a->rotY);
    if (d <= 0x1000) {
        if (getEntranceType() != 0) {
            if ((colliderFlags & 8) != 0 && getEntranceType() == 2) {
                if (isOpen() == 0) {
                    clearTalkStartMode();
                    closedTalk = 1;
                    return TRUE;
                }
                clearTalkStartMode();
                closedTalk = 0;
                return TRUE;
            }
        } else if (isOpen() == 0) {
            s32 r = Vec_DistXZ(a->getInteractionPos(), getInteractionPos());
            clearTalkStartMode();
            closedTalk = 1;
            if (r >= 0x3000) {
                return FALSE;
            }
            return TRUE;
        }
    }
    return FALSE;
}


void BuildingActor::onMessageEnd(u32) {
    BOOL ok;
    if (Item_IsFurniture(&itemId)) {
        u16 v = 0x500a;
        if (Item_GetFurnitureIndex(&itemId) == Item_GetFurnitureIndex(&v)) {
            ok = TRUE;
        } else {
            ok = FALSE;
        }
    } else {
        if (itemId == 0x500a) {
            ok = TRUE;
        } else {
            ok = FALSE;
        }
    }
    if (!ok) {
        TalkAutoAdvance_start(window, 0x64);
    }
}

void BuildingActor::setupTalkMsg() {
    Unk_ov009_0225bce0_Pad pad;
    setFileName((const char *)sBuildingDefaultMsgFile);
    msgIndex = 0;
}

void BuildingActor::onTalkOpened() {}

void BuildingActor::updateTalk() {}

void BuildingActor::onTalkEnded() {}

void BuildingActor::updateMatrix() {
    if (modelRes != NULL) {
        updateBaseMatrix(0);
        AnimModel_drawAnimated(model, 0);
        Mtx43 t = baseMatrix;
        updateShadows(&t);
    }
}

BOOL BuildingActor::getDoorPos(Unk_ov009_0225b880_Vec3 *out, s16 *ang) {
    if (colliders != NULL && colliderCount != 0) {
        s32 a = Math_Atan2(colliders->normal.x, colliders->normal.z);
        s32 t0 = func_01ffcb0c(0x1000, colliders->normal.z);
        Unk_ov009_0225b880_Vec3 v;
        v.x = func_01ffcb0c(0x1000, colliders->normal.x);
        v.y = 0;
        v.z = t0;
        if (ang != NULL) {
            *ang = a + 0x8000;
        }
        if (out != NULL) {
            Unk_ov009_0225b880_Vec3 r;
            func_01ffd070(&r, TriangleTrigger_getCenter(colliders), &v);
            out->x = r.x;
            out->y = r.y;
            out->z = r.z;
            out->y = 0x200;
            out->z = out->z - 0x200;
        }
        return TRUE;
    }
    out->x = position.x;
    out->y = position.y;
    out->z = position.z;
    return FALSE;
}

s32 BuildingActor::getInteriorScene(){
    u32 v;
    BOOL in = FALSE;
    v = itemId;
    if (v >= 0x5000 && v <= 0x5021) {
        in = TRUE;
    }
    if (in) {
        v = v & 0xfff;
    } else {
        v = -1;
    }
    BuildingInfo t;
    BuildingInfo_Copy(&t, v < 0x22 ? data_020d0a7c + v * 10 : data_020d0a7c);
    s32 r = BuildingInfo_GetInteriorScene(&t);
    BuildingInfo_Destroy(&t);
    return r;
}

s32 BuildingActor::hasFlickeringLights(){
    u32 v;
    BOOL in = FALSE;
    v = itemId;
    if (v >= 0x5000 && v <= 0x5021) {
        in = TRUE;
    }
    if (in) {
        v = v & 0xfff;
    } else {
        v = -1;
    }
    BuildingInfo t;
    BuildingInfo_Copy(&t, v < 0x22 ? data_020d0a7c + v * 10 : data_020d0a7c);
    s32 r = BuildingInfo_GetFlickeringLights(&t);
    BuildingInfo_Destroy(&t);
    return r;
}

BOOL BuildingActor::usesDoorApproach() { return FALSE; }

BOOL BuildingActor::needsMatrixUpdate() { return TRUE; }

BOOL BuildingActor::alignsPlayerToDoor() { return TRUE; }

BOOL BuildingActor::playsDoorMelody() { return FALSE; }

BOOL BuildingActor::isOffscreen() {
    if (gCamera != 0) {
        Unk_ov009_0225b880_Vec3 *g = &gCameraLookAt;
        s32 dx = position.x - g->x;
        if (dx < 0) {
            dx = -dx;
        }
        s32 dz = position.z - g->z;
        if (dx > getViewRangeX() || dz > getViewRangeFront() || dz < -getViewRangeBack()) {
            return TRUE;
        }
        return FALSE;
    }
    return TRUE;
}

void BuildingActor::updateOffscreen() {
    colliderFlags = colliderFlags & ~1;
    if (isOffscreen()) {
        colliderFlags = colliderFlags | 1;
    }
}

BOOL BuildingActor::isDoorIdle() {
    if (doorState == 0) {
        return TRUE;
    }
    return FALSE;
}

BOOL BuildingActor::openDoorForEntry() {
    switch (getEntranceType()) {
    case 2:
        return setDoorState(1);
    case 3:
        return setDoorState(5);
    case 1:
        return setDoorState(3);
    default:
        return FALSE;
    }
}

BOOL BuildingActor::tryOpenDoorForEntry() {
    if (entryState == 0) {
        return openDoorForEntry();
    }
    return FALSE;
}

BOOL BuildingActor::openDoorForExit() {
    switch (getEntranceType()) {
    case 2:
        return setDoorState(2);
    case 3:
        return setDoorState(6);
    case 1:
        return setDoorState(3);
    default:
        return FALSE;
    }
}

BOOL BuildingActor::tryOpenDoorForExit() {
    if (entryState == 0) {
        return openDoorForExit();
    }
    return FALSE;
}

u16 *BuildingActor::getItemId() { return &itemId; }

u32 BuildingActor::getGridX() { return gridX; }

u32 BuildingActor::getGridZ() { return gridZ; }

s32 BuildingActor::callIsLit() { return BuildingLights_isLit(lights); }


BuildingSeEmitter::BuildingSeEmitter() {
    emitter.b40 = 0;
}

extern "C" void *_ZN12Unk_0213b9c4D1Ev(void *p) {
    *(void **)p = data_0213b9c4;
    _ZN12SndSeEmitterD2Ev(p);
    return p;
}

void BuildingSeEmitter::activate() {
    if (emitter.b40 == 0) {
        SndSeEmitter_callInit(this);
        emitter.b40 = 1;
    }
}

void BuildingSeEmitter::setPosition(Unk_ov009_0225b880_Vec3 *v) {
    if (emitter.b40 != 0) {
        Unk_ov009_0225b880_Vec3 t;
        t.x = v->x;
        t.y = v->y;
        t.z = v->z;
        SndSeEmitter_callUpdateRelative(this, &t);
    }
}

void BuildingSeEmitter::deactivate() {
    if (emitter.b40 != 0) {
        SndSeEmitter_callStop(this);
        emitter.b40 = 0;
    }
}

void BuildingSeEmitter::playSe(u32 a) {
    if (emitter.b40 != 0) {
        Snd_SeEmitterPlayOneShot(this, a, 0x7f, 0);
    }
}

void BuildingSeEmitter::playSeHeld(u32 a) {
    if (emitter.b40 != 0) {
        Snd_SeEmitterPlayHeld(this, a, 0x7f, 0);
    }
}

Unk_ov009_0225da90_Vec3 BuildingActor::getSoundPos() {
    Unk_ov009_0225da90_Vec3 r;
    r.x = position.x;
    r.y = position.y;
    r.z = position.z;
    return r;
}

// Slots b4 / b8 of the vtable (were free functions BuildingActor::getSoundPos / BuildingActor::calcCustomBaseMatrix)
BOOL BuildingActor::calcCustomBaseMatrix(Mtx43 *out) { return 0; }

// ---------------------------------------------------------------- data

extern "C" ActorProfile sBuildingActorProfile = {(void *(*)())BuildingActor_Create, 0x1a, 0x20, 0, 0xc8000, 0x12c000, 0x258000};
extern "C" char sBuildingDefaultMsgFile[16] = "obj_etc_error";
extern "C" char data_ov009_0225e3e8[4] = "STR";
extern "C" char data_ov009_0225e3ec[16] = "STR:a/bca/bca0";
extern "C" char data_ov009_0225e3fc[16] = "STR:a/bca/bca1";
extern "C" char data_ov009_0225e40c[16] = "STR:a/bca/bca2";
extern "C" char data_ov009_0225e41c[16] = "STR:a/bta/bta%d";
extern "C" char data_ov009_0225e42c[16] = "STR:a/btp/btp%d";
extern "C" char data_ov009_0225e43c[16] = "STR:a/bmd/bmd0";
extern "C" char data_ov009_0225e44c[16] = "STR:a/bmd/bmd1";
extern "C" char data_ov009_0225e45c[24] = "STR:a/bshadow/bshadow0";
extern "C" char sBuildingLightTexPathFmt[32] = "/str/arc/%d/str%d%c_lt.nsbtx";
extern "C" char sBuildingTexPathFmt[28] = "/str/arc/%d/str%d%c.nsbtx";
extern "C" char sBuildingArcPathFmt[24] = "/str/arc/%d/str%d%c.arc";
extern "C" char sBuildingArcPath[32] = {0};
extern "C" char sBuildingTexPath[32] = {0};
extern "C" char sBuildingLightTexPath[32] = {0};
