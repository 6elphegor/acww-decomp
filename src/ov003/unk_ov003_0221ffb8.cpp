// mwcc-version: 1.2/base
#include "types.h"
#include "gfx/VecFx32.h"
#include "Unk_020d8c7c.h"
#include "field/BottleThrow.h"
#include "gfx/ModelSlotPool.h"
#include "gfx/ModelAnim.h"
#include "game/GroundInfo.h"
#include "actor/Character.h"
#include "gfx/AnimModel.h"
#include "gfx/PooledModel.h"
#include "sys/ProcProfile.h"
#include "town/TownBlockCell.h"
#include "gfx/NNSG3dResMatData.h"
#include "town/Unk_0204e858_Grid.h"
#include "player/FishBobber.h"
#include "field/FishShadow.h"

// TU23 of ov003 (fish actors, scene classes 0223498c / 02234a94): 0x0221ffb8-0x02224e68, static initialiser 0x354 bytes.
// Merged from ten unit files; the per-file aliases (E_f3, Obj_f6 .. Obj_f9, Rec_f7, Self_f5, ...) are typedefs of
// FishShadow / FishCatch / FieldFishManager / BottleThrow.

#define SndEnvChannel_callRelease _ZN13SndEnvChannel11callReleaseEv
#define SndEnvChannel_callRequest _ZN13SndEnvChannel11callRequestEPv
#define SndEnvChannel_callUpdateRelative _ZN13SndEnvChannel18callUpdateRelativeEP7VecFx32
#define SndEnvChannel_callReset _ZN13SndEnvChannel9callResetEv
#define SndSeEmitter_callStop _ZN12SndSeEmitter8callStopEv
#define SndSeEmitter_callUpdateRelative _ZN12SndSeEmitter18callUpdateRelativeEP7VecFx32
#define SndSeEmitter_callInit _ZN12SndSeEmitter8callInitEv
#define func_0203239c _ZN14CollisionStateD1Ev
#define func_020323b0 _ZN14CollisionStateC1Ev
#define GroundInfo_initAtPos _ZN10GroundInfo9initAtPosEP7VecFx32ii
#define MapBlockAcre_hasPond _ZN12MapBlockAcre7hasPondEv
#define AnimModel_detachJointAnim _ZN9AnimModel15detachJointAnimEv
#define AnimModel_attachAnim _ZN9AnimModel10attachAnimEv
#define BlendAnimModel_initAnim _ZN14BlendAnimModel8initAnimEiiitt
#define AnimModel_drawAnimated _ZN9AnimModel12drawAnimatedEPv
#define AnimModel_stepAnim _ZN9AnimModel8stepAnimEv
#define AnimModel_allocAnmObj _ZN9AnimModel11allocAnmObjEPv
#define func_020548a0 _ZN9AnimModelD1Ev
#define func_020548d0 _ZN9AnimModelC1Ev
#define CachedModel_release _ZN11CachedModel7releaseEv
#define CachedModel_loadCached _ZN11CachedModel10loadCachedEPvS0_
#define func_02054e24 _ZN11CachedModelD1Ev
#define func_02054e3c _ZN11CachedModelC1Ev
#define Model_getRenderObj _ZN5Model12getRenderObjEv
#define Model_setResource _ZN5Model11setResourceEP12NNSG3dResMdlj
#define ModelAnim_addToRenderObj _ZN9ModelAnim14addToRenderObjEj
#define ModelAnim_init _ZN9ModelAnim4initEiiit
#define ModelAnim_allocMatAnm _ZN9ModelAnim11allocMatAnmEjPv
#define func_02055c38 _ZN9ModelAnimD2Ev
#define func_02055cac _ZN9ModelAnimC2Ev
#define AnimFrameCtrl_hasPassedFrame _ZN13AnimFrameCtrl14hasPassedFrameEi
#define AnimFrameCtrl_step _ZN13AnimFrameCtrl4stepEv
#define FishBobber_setState _ZN10FishBobber8setStateEi
#define FishBobber_nudge _ZN10FishBobber5nudgeEv
#define FishBobber_setFish _ZN10FishBobber7setFishEPv
#define CommManager_endRecord _ZN11CommManager9endRecordEjj
#define CommManager_writeRecord _ZN11CommManager11writeRecordEPhj
#define CommManager_beginRecord _ZN11CommManager11beginRecordEv
#define CommManager_isMyAid _ZN11CommManager7isMyAidEj
#define CommManager_isOnline _ZN11CommManager8isOnlineEv
#define PooledModel_getModel _ZN11PooledModel8getModelEv
#define PooledModel_unload _ZN11PooledModel6unloadEv
#define PooledModel_reset _ZN11PooledModel5resetEv
#define PooledModel_loadFromSlot _ZN11PooledModel12loadFromSlotEP9ModelSlotPKc
#define func_0209c128 _ZN11PooledModelD1Ev
#define func_0209c140 _ZN11PooledModelC1Ev
#define ModelSlotPool_destroy _ZN13ModelSlotPool7destroyEv
#define ModelSlotPool_init _ZN13ModelSlotPool4initEjPvS0_jPFS0_jjEPFvvE
#define ModelSlotPool_release _ZN13ModelSlotPool7releaseEPt
#define ModelSlotPool_acquire _ZN13ModelSlotPool7acquireEPt
#define ModelSlot_getHeap _ZN9ModelSlot7getHeapEv
#define func_02133150 _s32_div_f
#define func_021355f0 __cxa_vec_cleanup


static inline BOOL Unk_ov003_022203f8_Chk(void *s, s32 v) {
    if ((u32)(v - 0x34) <= 2) {
        return TRUE;
    }
    return FALSE;
}

// ---- from file 3
typedef VecFx32Ctor V3_f3;

// owner object (passed in r0 by the state functions); only fields used here
// 0x24c-byte entry, table at ((E_f3 *)(sFishShadows))
struct Unk_ov003_022210a4_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};


class FieldFishManager;
typedef FieldFishManager O_f3;

typedef FishShadow E_f3;



// ---- from file 4
// A caught fish being lifted / displayed (0xa4 bytes, sFishCatches[4]; FishCatch_* state functions).
struct FishCatch {
    FishCatch();
    ~FishCatch();
    /* 0x00 */ u8 seEmitter[0x40]; // SndSeEmitter (built by the constructor)
    /* 0x40 */ s32 state;
    /* 0x44 */ s32 displayHandle;
    /* 0x48 */ s32 mode;
    /* 0x4c */ s32 gravity;
    /* 0x50 */ s32 ySpeed;
    /* 0x54 */ VecFx32 position;
    /* 0x60 */ VecFx32 arcPointA;
    /* 0x6c */ VecFx32 arcPointB;
    /* 0x78 */ s8 shadowIndex;
    /* 0x79 */ u8 pad_79[3];
    /* 0x7c */ s32 moveFrame;
    /* 0x80 */ u8 isLanded;
    /* 0x81 */ u8 pad_81[3];
    /* 0x84 */ VecFx32 scale;
    /* 0x90 */ s32 fishId;
    /* 0x94 */ u8 swimAwayPending;
    /* 0x95 */ u8 pad_95;
    /* 0x96 */ s16 rotX;
    /* 0x98 */ s16 rotY;
    /* 0x9a */ s16 rotZ;
    /* 0x9c */ s32 effectHandle;
    /* 0xa0 */ u8 storedSent;
    /* 0xa1 */ u8 pad_a1[3];
};



class FieldFishManager : public GameProc {
public:
    FieldFishManager();
    virtual ~FieldFishManager();
    virtual BOOL onCreate();
    virtual BOOL onDelete();
    virtual BOOL onExecute();
    virtual BOOL onDraw();

    /* 0x50 */ ModelSlotPool shadowModelPool;
    /* 0x68 */ ModelSlotPool finModelPool;
    /* 0x80 */ s32 shadowAnimFile;
    /* 0x84 */ u8 spawnAttempted;
    /* 0x85 */ u8 pad_85[3];
};

typedef void (FieldFishManager::*Unk_ov003_0222144c_Fn_f4)(void *, void *);

struct FishShadowStateEntry {
    Unk_ov003_0222144c_Fn_f4 enter;
    Unk_ov003_0222144c_Fn_f4 exec;
};



// ---- from file 5
typedef VecFx32 V3_f5;

typedef Mtx43 T48_f5;

typedef Character Ent_f5;

typedef FishCatch Self_f5;

#define CP(d, s) do { (d).x = (s).x; (d).y = (s).y; (d).z = (s).z; } while (0)

static inline BOOL Unk_ov003_02222490_Bit(u32 f, u32 m) {
    return (f & m) ? TRUE : FALSE;
}

// ---- from file 6
typedef VecFx32 V3_f6;

typedef FishCatch Ent_f6;



typedef void (FishCatch::*Fn_f6)(void *);

struct FishCatchStateEntry {
    Fn_f6 f;
};

typedef FishShadow Obj_f6;


static inline BOOL R74(volatile u16 *p)
{
    u32 a = *p;
    u32 b = *p;
    BOOL r = FALSE;
    if (b >= 0x1374 && a <= 0x1374) {
        r = TRUE;
    }
    return r;
}

#define COPY() \
    do { \
        self->position.x = self->prevPosition.x; \
        self->position.y = self->prevPosition.y; \
        self->position.z = self->prevPosition.z; \
    } while (0)

// ---- from file 7
typedef VecFx32 V3_f7;


typedef FishCatch Rec_f7;

typedef FishShadow Obj_f7;



// ---- from file 8
typedef VecFx32 V3_f8;


typedef s32 (FishShadow::*Fn_f8)();

struct FishBiteStateEntry {
    Fn_f8 f;
};


typedef FishShadow Obj_f8;




typedef VecFx32Copy V3_f9;

typedef VecFx32CopyDtor V3d_f9;

typedef void (FishShadow::*Fn_f9)();

struct FishMoveStateEntry {
    Fn_f9 f;
};

struct FishAiStateEntry {
    Fn_f9 appear;
    Fn_f9 think;
};

typedef FishShadow Obj_f9;


typedef BottleThrow E_f9;

class BottleThrowStateOwner;

typedef void (BottleThrowStateOwner::*StFn_f9)(E_f9 *);

struct BottleThrowStateEntry {
    StFn_f9 f;
};



// ---- from file 10

typedef VecFx32 V3_f10;


static inline BOOL Unk_ov003_02224bc4_Bit(u32 f, u32 m)
{
    if ((f & m) != 0) return TRUE;
    return FALSE;
}




class FishFinMatAnim : public ModelAnim {
public:
    virtual ~FishFinMatAnim() {}
};

// ================= canonical classes of the objects built by the static initialiser =================
extern "C" {
#define SndSeEmitter_ctor _ZN12SndSeEmitterC1Ev
void SndSeEmitter_ctor(void *p);
#define SndSeEmitter_dtor _ZN12SndSeEmitterD1Ev
void SndSeEmitter_dtor(void *p);
void ModelSlotHandle_Init(void *p);
void ModelSlotHandle_Destroy(void *p);
void _ZN14CollisionStateC1Ev(void *p);
void _ZN14CollisionStateD1Ev(void *p);
void _ZN11CachedModelC1Ev(void *p);
void _ZN11CachedModelD1Ev(void *p);
void _ZN9AnimModelC1Ev(void *p);
void _ZN9AnimModelD1Ev(void *p);
void _ZN11PooledModelC1Ev(void *p);
void _ZN11PooledModelD1Ev(void *p);
void _ZN11PooledModel5resetEv(void *p);
}

// empty global object at sBottleThrowStateOwner (out-of-line empty constructor and destructor)
class BottleThrowStateOwner {
public:
    BottleThrowStateOwner();
    ~BottleThrowStateOwner();
};




class FishFinModel {
public:
    FishFinModel();
    ~FishFinModel();
    /* 0x000 */ u32 attachState;
    /* 0x004 */ ModelSlotHandle modelSlot;
    /* 0x006 */ u8 pad_06[2];
    /* 0x008 */ PooledModel pooledModel;
    /* 0x048 */ VecFx32Ctor position;
    /* 0x054 */ s16 rotY;
    /* 0x056 */ u8 pad_56[2];
    /* 0x058 */ AnimModel model;
    /* 0x110 */ u8 pad_110[0xc];
    /* 0x11c */ FishFinMatAnim matAnim;
};

extern "C" {
extern s32 data_020c7c1c;
extern u8 data_020ca314[];
extern u8 data_020ca315[];
extern u8 data_020ca316[];
extern void * gCommManager;
extern s16 data_02135f44[];
extern u8 data_0213b91c[];
extern u8 data_0213b954[];
extern u32 gCamera;
extern VecFx32 gCameraLookAt;
extern void * gSceneBlockMap;
extern u8 gTouchHeld;
extern u8 data_021f47e0[];
extern void * gCurrentHeap;
extern u8 sFishShadowPoolName[];
extern u8 sFishFinPoolName[];
extern u8 data_ov003_02234a94[];

s32 Math_AngleXZ(void *a, void *b);
void Snd_SeEmitterPlayOneShot(void *o, s32 a, s32 b, s32 c);
void SndSeEmitter_callUpdateRelative(void *self, void *v);
s32 Collision_Move(void *a, void *b, void *c, s32 d, s32 e, s32 f, s32 g);
s32 Ground_GetWaterKind(s32 x, s32 y);
u32 MapBlock_GetAttr(void *c);
void FieldPos_ToUnit(s32 *a, s32 *b, void *c);
void FishDisplay_PostRequest(u32 i, s32 a, s32 b, s32 c, s32 d);
void AnimModel_attachAnim(void *o);
void BlendAnimModel_initAnim(void *o, s32 a, s32 b, s32 c, s32 d, s32 e);
BOOL AnimModel_allocAnmObj(void *o, void *t);
s32 FishBobber_setState(void *p, s32 a);
void FishBobber_setFish(void *e, void *o);
void *FishBobber_GetFloating();
u32 Random_GlobalBelow(u32 n);
void *File_LoadAlloc(void *a, void *b, s32 c, s32 d);
void CommManager_endRecord(void *g, s32 a, s32 b);
void CommManager_writeRecord(void *g, void *buf, s32 n);
void CommManager_beginRecord(void *g);
BOOL CommManager_isMyAid(void *g, s32 a);
BOOL CommManager_isOnline(void *g);
void Effect_SetPosition(s32 h, void *v, s32 a, s32 b);
void Effect_End(s32 h);
s32 Effect_Create(s32 a, void *v, s32 b, s32 c);
void PlayerActor_GetSlotHeldItem(u16 *out, s32 a);
void *PlayerActor_GetBodyPos(s32 a);
void *PlayerActor_GetCharacter(s32 n);
void *PlayerActor_GetActor(s32 n);
void ModelSlotPool_release(void *p, void *q);
void *ModelSlotPool_acquire(void *p, void *q);
s32 ModelSlot_getHeap(void *a);
s64 Vec_DistSqXZ(void *a, s32 b);
s32 Vec_DistXZ(void *a, void *b);
s32 func_021065dc(s32 a);
s32 func_02133150(s32 a, s32 b);
s32 func_01ffcb0c(s32 a, s32 b);
s32 SndEnvChannel_callRelease(void *p);
void SndEnvChannel_callRequest(void *, s32);
void SndEnvChannel_callUpdateRelative(void *self, VecFx32 *v);
void SndEnvChannel_callReset(void *self);
s32 SndSeEmitter_callStop(void *p);
void SndSeEmitter_callInit(void *self);
BOOL Ground_FindWaterAhead(V3_f7 *out, void *pos, s32 ang, s32 a, s32 b, s32 c);
s32 Ground_IsPond(s32 x, s32 y);
void func_0203239c(void *p);
void func_020323b0(void *p);
void GroundInfo_Destruct(void *o);
void GroundInfo_initAtPos(void *o, void *p, s32 a, s32 b);
s32 MapBlockAcre_hasPond(void *c);
void WorldCurve_FromCurved(V3_f5 *a, V3_f5 *b);
s32 WorldCurve_Apply(V3_f3 *v);
s32 FieldAction_FindDropUnit(s32 a, s32 *p, s32 c);
void FieldPos_FromUnitCenter(void *a, s32 x, s32 y);
void FieldPos_SnapToUnitCenter(void *a, void *b);
void FieldUnit_FromBlockUnit(s32 *a, s32 *b, s32 c, s32 d, s32 e, s32 f);
BOOL FishTable_PickNow(s32 *a, s32 *b, s32 c);
BOOL FishDisplay_HasPassedFrame(void *o, s32 a);
void FishDisplay_Release(s32 h);
void FishDisplay_SetEntry(s32 h, s32 a, V3_f5 *p, V3_f5 *q, s32 r, s32 s, s32 t, s32 u, s32 v, s32 w);
s32 FishDisplay_Acquire();
s32 FishDisplay_GetRequestPos(VecFx32 *v, s32 *p, u8 i);
u32 FishDisplay_GetRequestFish(u8 i);
u32 FishDisplay_GetRequestKind(u8 i);
void AnimModel_detachJointAnim(void *p);
s32 AnimModel_drawAnimated(void *p, V3_f3 *v);
s32 AnimModel_stepAnim(void *p);
void func_020548a0(void *p);
void func_020548d0(void *p);
void CachedModel_release(void *p);
BOOL CachedModel_loadCached(void *a, s32 b, void *c);
void func_02054e24(void *p);
void func_02054e3c(void *p);
void *Model_getRenderObj(void *a);
void Model_setResource(void *a, void *b, s32 c);
void ModelAnim_addToRenderObj(void *a, void *b);
void ModelAnim_init(void *a, s32 b, s32 c, s32 d, s32 e);
BOOL ModelAnim_allocMatAnm(void *a, void *b, void *c);
void func_02055c38(void *p);
void func_02055cac(void *p);
BOOL AnimFrameCtrl_hasPassedFrame(void *o, s32 a);
s32 AnimFrameCtrl_step(void *p);
void FishFinHeap_Destroy();
void FishFinHeap_Create();
void FishShadowHeap_Destroy();
void FishShadowHeap_Create();
BOOL Fishing_StepArc(V3_f5 *a, s32 b, s32 *c, s32 *d, s32 e);
void Fishing_CalcArcSpeed(V3_f5 *a, V3_f5 *b, s32 *c, s32 *d, s32 e);
void FishBobber_nudge(void *);
void NetBuf_PackPair20(void *, s32, s32);
void PlayerActor_GetHandMtx(T48_f5 *out, u32 a);
void *PooledModel_getModel(void *a);
void PooledModel_unload(void *p);
void PooledModel_reset(void *p);
BOOL PooledModel_loadFromSlot(void *a, void *b, void *c);
void func_0209c128(void *p);
void func_0209c140(void *p);
s32 ModelSlotPool_destroy(void *p);
void ModelSlotPool_init(void *p, s32 n, s32 a, s32 b, s32 c, void *d, void *e, void *f);
void ModelSlotHandle_Destroy(void *p);
void ModelSlotHandle_Init(void *p);
s32 Weather_GetFallingPrecip();
BOOL Math_CountDownU16(void *a);
s32 Math_AngleDiffAbs(s32, s32);
s32 Math_Atan2(s32 x, s32 z);
s32 Mtx43_SetTranslate(void *m, s32 x, s32 y, s32 z);
s32 Mtx43_RotateY(void *m, s32 a);
s32 Mtx43_RotateX(void *m, s32 a);
s32 Mem_Free(s32 a);
void SndSeEmitter_dtor(void *p);
void SndSeEmitter_ctor(void *p);
s32 func_021065f8(s32 a, s32 b);
s32 func_02106654();
s32 func_02106670(s32 a, s32 b);
s32 MI_CpuCopy8(const void *src, void *dst, u32 n);
void func_021355f0(void *p, u32 n, u32 size, void *dtor);
void PlayerActor_ApplyHoldOffset(T48_f5 *t, V3_f5 *d);
s32 PlayerActor_TestSlotFlag9(s32 a);
void Field_DrawItemModel(s32 o, V3_f9 *a, V3_f9 *b, s32 c, s16 d, s16 e);

// own functions
BOOL FishFinModel_Load(u8 *self, void *a);
u8 *FishShadow_GetActive(s32 i);
s32 FishShadow_GetFishId(s32 id);
BOOL FishShadow_GetPos(u32 *out, s32 id);
void FieldWater_ApplyFlow(s32 *p, s32 b);
BOOL FieldFish_IsPlayerRunning(s32 idx);
BOOL FieldFish_IsPlayerNear(void *self, s32 b, s32 idx);
BOOL FishShadow_TrySpawn(void *self, FishShadow *e, s32 flag);
BOOL FieldFish_CollectHabitatBlocks(void *self, u8 *out, s32 *cnt, s32 mode);
BOOL FieldFish_PickSpawnUnit(void *self, s32 *ox, s32 *oz, s32 *a3, s32 *a4, s32 mode, s32 flag, FishShadow *e);
BOOL FishShadow_CanSpawnFish(void *self, FishShadow *e, s32 id);
BOOL FieldFish_IsRainOrSnow(void *self);
void FishShadow_TickRespawnTimer(FishShadow *self);
BOOL FieldFish_IsInBox(s32 *a, s32 *b, s32 c, s32 d, s32 e);
BOOL FieldFish_HasPassed(s32 *a, s32 *b, s32 *c);
BOOL FieldFish_HasPassed1D(s32 a, s32 b, s32 c);
s32 FieldFish_RandRange(s32 a, u16 b);
s32 FieldFish_RandRangeSigned(s32 a, u16 b);
BOOL FishCatch_GetReelTarget(VecFx32 *out, s32 idx);
BOOL FishCatch_StartRelease(s32 idx, u16 id0, VecFx32 *pos);
void FishShadow_SetAnimSpeed(u8 *self, s32 v);
BOOL FishShadow_LoadModel(u8 *self, void *p, s32 q);
void FishShadow_ExecAppear(O_f3 *o, E_f3 *e);
void FishShadow_EnterOutOfView(void);
void FishShadow_ExecOutOfView(O_f3 *o, E_f3 *e, s32 idx);
void FishShadow_EnterSwim(void);
void FishShadow_ExecSwim(O_f3 *o, E_f3 *e, s32 x);
void FishShadow_UpdateFin(O_f3 *o, E_f3 *e);
void FieldFish_SetModelMatrix(O_f3 *a, void *b, void *dstv, s32 ang);
BOOL func_ov003_0222101c(O_f3 *o);
void FieldFishManager_UpdatePlayers(O_f3 *o);
BOOL func_ov003_02220eec(void);
BOOL func_ov003_02220ed0(O_f3 *o);
void FieldFishManager_FreeShadows(O_f3 *o);
void FieldFishManager_FreeCatches(s32 a);
void FieldFishManager_ResetBottles(s32 a);
BOOL FieldFish_ScareAround(s32 a, s32 b);
void FishShadow_UpdateVisibility(O_f3 *o, E_f3 *e, s32 idx);
void FishShadow_UpdateFade(O_f3 *o, E_f3 *e, s32 idx);
BOOL FishShadow_CheckPlayerScare(s32 a, E_f3 *e);
BOOL FieldFish_IsPlayerApproaching(s32 a, s32 b, E_f3 *e);
BOOL FishShadow_TryFlee(E_f3 *e, s32 a);
BOOL FishShadow_StartFlee(E_f3 *e, s32 a);
void FishShadow_CheckOffscreen(O_f3 *o, E_f3 *e, s32 idx);
void FishCatch_PollRemote(void *a);
void FishCatch_StartRemoteHook(void *a, s32 idx);
BOOL FishCatch_EndRemote(void *a, u8 idx);
BOOL FishCatch_StartRemoteReel(void *a, u8 idx, u32 v, VecFx32 *p);
BOOL FishCatch_StartRemoteLift(void *a, u8 idx);
u8 *func_ov003_022219dc(u8 *a);
u8 *func_ov003_02221998(u8 *a);
u8 *func_ov003_02221980(u8 *a);
u8 *func_ov003_0222193c(u8 *a);
u8 *func_ov003_02221904(u8 *a);
void FishCroak_Init(u8 *p);
void FishCroak_Destroy(void *p);
FishCatch *func_ov003_02221884(FishCatch *a);
u8 *func_ov003_02221874(u8 *a);
BOOL FishShadow_SetAppearing(void *a, s32 idx);
void FishShadow_Despawn(void *a, s32 idx);
BOOL FishFinModel_Attach(u8 *a);
void FishFinModel_Release(u8 *a);
BOOL func_ov003_02221524(u8 *a);
void FishShadow_Run(void *a, u8 *b, void *c);
void FishShadow_ChangeState(void *a, s32 idx, u8 *b, void *c);
void FishShadow_EnterSpawn();
void FishShadow_ExecSpawn(u8 *a, u8 *b, s32 c);
void FishShadow_EnterWaitInView();
void FishShadow_ExecWaitInView(u8 *a, u8 *b, s32 c);
void FishShadow_EnterAppear();
BOOL FishCatch_StateStart(Self_f5 *self, u32 a);
BOOL FishCatch_SetupLine(Self_f5 *self, u32 a);
BOOL FishCatch_StateHold(Self_f5 *self, u32 a);
BOOL FishCatch_StateUpdate(Self_f5 *self, u32 a);
BOOL FishCatch_UpdateLocalReel(Self_f5 *self, u32 a);
BOOL FishCatch_UpdateRemoteReel(Self_f5 *self, u32 a);
BOOL FishCatch_StateEnd(Self_f5 *self, s32 a);
BOOL FishCatch_DetachShadow(Self_f5 *self);
void FishCatch_Reset(Self_f5 *self, s32 a);
s32 FishCatch_StartSwimAway(Self_f5 *self, s32 a);
void FishCatch_UpdateArc(Self_f5 *self, BOOL flag);
BOOL FieldFish_StepParabola(V3_f5 *p, V3_f5 *a, V3_f5 *b, s32 n, s32 k, s32 m);
BOOL FishCatch_UpdateSwimAway(Self_f5 *self, V3_f5 *p);
void FishCatch_GetLineEnd(Self_f5 *self, Ent_f5 *ent, V3_f5 *out);
BOOL FishShadow_CanSeeBobber(void *self, s32 a1, s32 a2, s32 a3);
void FieldFish_StartCastSplash();
BOOL FieldFish_IsCastSplashActive();
void FieldFish_TickCastSplash();
BOOL FishShadow_Land(Obj_f6 *self, u32 k);
BOOL FishShadow_LoseBobber(Obj_f6 *self);
s32 FishShadow_GetEdgeColumn(Obj_f6 *self);
BOOL FishShadow_IsSeaNorth(Obj_f6 *self);
s32 FishShadow_CheckWaterBounds(Obj_f6 *self);
BOOL FishShadow_IsProbeOutOfWater(Obj_f6 *self);
void FishShadow_GetProbeGroundKinds(Obj_f6 *self, s32 *o1, s32 *o2, s32 *o3);
void FishCroak_Update(FishCroak *s, Obj_f6 *o);
void FishCroak_Idle(FishCroak *s, Obj_f6 *o);
void FishCroak_Listen(FishCroak *s, Obj_f6 *o);
void FishCroak_Croak(FishCroak *s, Obj_f6 *o);
s32 FishCroak_Clear(FishCroak *s);
s32 FishShadow_ResetCroak(Obj_f6 *self);
void FishCatch_Update(FishCatch *self, void *arg);
s32 FishCatch_StateIdle();
BOOL FishShadow_BiteHooked(Obj_f7 *o);
BOOL FishShadow_BiteFlee(Obj_f7 *o);
void FishShadow_OnRodPulled(Obj_f7 *o);
BOOL FishShadow_TryHook(Obj_f7 *o);
s32 FishShadow_CheckReelResult(Obj_f7 *o);
BOOL FishCatch_IsLandedForShadow(Obj_f7 *o);
BOOL FishCatch_EndForShadow(Obj_f7 *o);
void Fish_GetDisplayScale(V3_f7 *out, s32 idx);
BOOL FishCatch_SetDisplayPosScale(Obj_f7 *o, V3_f7 *a, V3_f7 *b);
BOOL FishCatch_StartLift(s32 idx, s32 flag);
BOOL FishCatch_IsActive(s32 idx);
V3_f7 *FishCatch_GetPos(s32 idx);
BOOL FishCatch_NetSendStored(s32 idx);
BOOL FishCatch_IsDisplayReady(Rec_f7 *self, u32 a);
void FishCatch_SetModelAngles(Rec_f7 *self, s32 a, s32 t);
BOOL FishShadow_FleeFromPlayer(Obj_f7 *self);
BOOL FishShadow_TryNoticeBobber(Obj_f7 *self);
void FishShadow_MoveFlee(Obj_f8 *self);
void FishShadow_AppearAttached();
void FishShadow_ThinkBobber(Obj_f8 *self);
s32 FishShadow_BiteIdle(Obj_f8 *self);
s32 FishShadow_BiteApproach(Obj_f8 *self);
s32 FishShadow_BiteInspect(Obj_f8 *self);
s32 FishShadow_BiteNibble(Obj_f8 *self);
s32 FishShadow_BiteTug(Obj_f8 *self);
s32 BottleThrow_GetSeCue(s32 i);
s32 BottleThrow_IsOffscreen(E_f9 *e);
void BottleThrow_Run(BottleThrowStateOwner *self, E_f9 *e);
void BottleThrow_StateIdle();
void BottleThrow_StateFly(void *self, E_f9 *e);
void BottleThrow_StateDrift(void *self, E_f9 *e);
void FieldFish_AddSinX(s32 *p, s32 a, s32 ang);
void FieldFish_AddCosZ(s32 *p, s32 a, s32 ang);
void FieldFish_MoveXZ(s32 *p, s32 a, s32 ang);
void FishShadow_RunAppearAi(Obj_f9 *o);
void FishShadow_RunAi(Obj_f9 *o);
void FishShadow_AppearFree(Obj_f9 *o);
void FishShadow_ThinkFree(Obj_f9 *o);
void FishShadow_MoveStart(Obj_f9 *o);
void FishShadow_MoveAccelerate(Obj_f9 *o);
void FishShadow_MoveCruise(Obj_f9 *o);
void FishShadow_MoveDecelerate(Obj_f9 *o);
void FishShadow_MoveRest(Obj_f9 *o);
void func_ov003_02224e44();
void func_ov003_02224e24();
void func_ov003_02224e04();
void FieldFishManager_Create();
void func_ov003_02224dc8();
void func_ov003_02224dc4();
BottleThrow *func_ov003_02224d90(BottleThrow *p);
void *func_ov003_02224d80(void *p);
void BottleThrow_SetTarget(V3_f10 *v, s32 i);
BOOL BottleThrow_IsActive(s32 i);
s32 BottleThrow_Start(s32 i);
V3_f10 *BottleThrow_GetPos(s32 i);
}

// ================= TU23 data definitions: types =================
struct FishBiteWindow {
    u8 b[4];
    s32 v;
};

struct FishRodParams {
    u8 *p;
    void *q;
};

struct FishSizeClassParams {
    u8 a0, a1, a2, a3;
    u8 b0, b1, b2, b3;
    u16 c0;
    u16 c1;
    u16 d;
    u8 shadowScaleX, shadowScaleZ;
    u16 g;
    u16 h;
};

// ================= objects defined by this unit, in creation order (see notes) =================
extern "C" {
FishShadow sFishShadows[6];
FishFinModel sFishFinModel;
FishCatch sFishCatches[4];
void *data_ov003_02257a7c = (void *)gSceneBlockMap;
BottleThrowStateOwner sBottleThrowStateOwner;
BottleThrow sBottleThrows[4];
extern void *data_ov003_022348a0[2];
extern void *data_ov003_02234868[2];
extern void *data_ov003_022348a8[2];
BottleThrowStateEntry sBottleThrowStates[3] = {
    {*(StFn_f9 *)data_ov003_022348a0},
    {*(StFn_f9 *)data_ov003_02234868},
    {*(StFn_f9 *)data_ov003_022348a8},
};
extern u8 data_ov003_022348b0[16];
extern u8 data_ov003_022348b0[16];
extern u8 data_ov003_022348b0[16];
extern u8 data_ov003_022348b0[16];
extern u8 data_ov003_022348b0[16];
extern u8 data_ov003_022348b0[16];
extern u8 data_ov003_022348b0[16];
extern u8 data_ov003_022348b0[16];
extern u8 data_ov003_022348b0[16];
extern u8 data_ov003_022348b0[16];
extern u8 data_ov003_022348b0[16];
extern u8 data_ov003_022348b0[16];
extern u8 data_ov003_022348b0[16];
extern u8 data_ov003_022348b0[16];
extern u8 data_ov003_022348b0[16];
extern u8 data_ov003_022348b0[16];
FishSizeClassParams sFishSizeClassParams[8] = {
    {0x3c, 0x40, 0xa, 0x14, 0x28, 0x64, 0x14, 0xa, 0x5, 0x3e, 0x5d, data_ov003_022348b0[0], data_ov003_022348b0[1], 0xdc, 0x8c},
    {0x3c, 0x42, 0xf, 0x1e, 0x28, 0x64, 0x14, 0xa, 0x5, 0x48, 0x69, data_ov003_022348b0[2], data_ov003_022348b0[3], 0xe6, 0x82},
    {0x46, 0x48, 0x14, 0x28, 0x28, 0x64, 0x14, 0xa, 0x5, 0x50, 0x85, data_ov003_022348b0[4], data_ov003_022348b0[5], 0xf0, 0x82},
    {0x55, 0x56, 0x19, 0x32, 0x28, 0x64, 0x14, 0xa, 0x5, 0x55, 0x96, data_ov003_022348b0[6], data_ov003_022348b0[7], 0xff, 0x78},
    {0x6e, 0x70, 0x1e, 0x3c, 0x28, 0x64, 0x14, 0xa, 0x5, 0x5c, 0xb7, data_ov003_022348b0[8], data_ov003_022348b0[9], 0x109, 0x78},
    {0x7d, 0x80, 0x23, 0x46, 0x28, 0x64, 0x14, 0xa, 0x5, 0x64, 0xc3, data_ov003_022348b0[10], data_ov003_022348b0[11], 0x113, 0x78},
    {0x96, 0x9a, 0x28, 0x50, 0x28, 0x64, 0x14, 0xa, 0x5, 0x6e, 0xd5, data_ov003_022348b0[12], data_ov003_022348b0[13], 0x11d, 0x78},
    {0x55, 0x56, 0x19, 0x32, 0x28, 0x64, 0x14, 0xa, 0x5, 0x5d, 0x9b, data_ov003_022348b0[14], data_ov003_022348b0[15], 0xff, 0x78},
};
extern void *data_ov003_022347b0[2];
extern void *data_ov003_02234890[2];
extern void *data_ov003_02234888[2];
extern void *data_ov003_02234880[2];
extern void *data_ov003_02234878[2];
FishCatchStateEntry sFishCatchStates[5] = {
    {*(Fn_f6 *)data_ov003_022347b0},
    {*(Fn_f6 *)data_ov003_02234890},
    {*(Fn_f6 *)data_ov003_02234888},
    {*(Fn_f6 *)data_ov003_02234880},
    {*(Fn_f6 *)data_ov003_02234878},
};
extern char sFishShadowAnimPathStr[];
char *sFishShadowAnimPath = sFishShadowAnimPathStr;
extern char sFishFinTexAnimPathStr[];
char *sFishFinTexAnimPath = sFishFinTexAnimPathStr;
void *data_ov003_02234820[2] = {(void *)FishShadow_BiteIdle, 0};
void *data_ov003_022347b0[2] = {(void *)FishCatch_StateIdle, 0};
extern void *data_ov003_02234838[2];
extern void *data_ov003_02234840[2];
extern void *data_ov003_02234808[2];
extern void *data_ov003_02234800[2];
FishAiStateEntry sFishShadowAiTable[2] = {
    {*(Fn_f9 *)data_ov003_02234838, *(Fn_f9 *)data_ov003_02234840},
    {*(Fn_f9 *)data_ov003_02234808, *(Fn_f9 *)data_ov003_02234800},
};
s32 sBottleDriftSpeed = 0x11f;
extern void *data_ov003_022347f0[2];
extern void *data_ov003_022347e8[2];
extern void *data_ov003_022347e0[2];
extern void *data_ov003_022347b8[2];
extern void *data_ov003_022347c8[2];
extern void *data_ov003_022347d0[2];
FishMoveStateEntry sFishShadowMoveStates[6] = {
    {*(Fn_f9 *)data_ov003_022347f0},
    {*(Fn_f9 *)data_ov003_022347e8},
    {*(Fn_f9 *)data_ov003_022347e0},
    {*(Fn_f9 *)data_ov003_022347b8},
    {*(Fn_f9 *)data_ov003_022347c8},
    {*(Fn_f9 *)data_ov003_022347d0},
};
void *data_ov003_02234830[2] = {(void *)FishShadow_BiteApproach, 0};
void *data_ov003_02234838[2] = {(void *)FishShadow_AppearFree, 0};
void *data_ov003_02234898[2] = {(void *)FishShadow_BiteTug, 0};
void *data_ov003_022348a0[2] = {(void *)BottleThrow_StateIdle, 0};
void *data_ov003_022348a8[2] = {(void *)BottleThrow_StateDrift, 0};
extern void *data_ov003_02234858[2];
extern void *data_ov003_022347a0[2];
extern void *data_ov003_02234810[2];
extern void *data_ov003_022347f8[2];
FishBiteStateEntry sFishBiteStates[8] = {
    {*(Fn_f8 *)data_ov003_02234820},
    {*(Fn_f8 *)data_ov003_02234830},
    {*(Fn_f8 *)data_ov003_02234858},
    {*(Fn_f8 *)data_ov003_022347a0},
    {*(Fn_f8 *)data_ov003_02234898},
    {*(Fn_f8 *)data_ov003_02234810},
    {*(Fn_f8 *)data_ov003_022347f8},
};
void *data_ov003_022347a0[2] = {(void *)FishShadow_BiteNibble, 0};
s32 sBottleSinkStep = 0x14;
void *data_ov003_02234888[2] = {(void *)FishCatch_StateHold, 0};
char sFishShadowAnimPathStr[] = "/fish/03/fish_shadow.nsbca";
extern u16 sFishSightFishingRod[10];
extern FishBiteWindow sFishBiteWindowFishingRod;
extern u16 sFishSightGoldenRod[10];
extern FishBiteWindow sFishBiteWindowGoldenRod;
FishRodParams sFishRodParams[2] = {
    {(u8 *)sFishSightFishingRod, (void *)&sFishBiteWindowFishingRod},
    {(u8 *)sFishSightGoldenRod, (void *)&sFishBiteWindowGoldenRod},
};
void *data_ov003_02234870[2] = {(void *)FishShadow_EnterWaitInView, 0};
void *data_ov003_022347c8[2] = {(void *)FishShadow_MoveRest, 0};
ProcProfile sFieldFishManagerProfile = {(void *(*)())FieldFishManager_Create, 0xc1, 7};
void *data_ov003_02234858[2] = {(void *)FishShadow_BiteInspect, 0};
void *data_ov003_02234850[2] = {(void *)FishShadow_EnterSwim, 0};
char sFishFinAnimPathStr[] = "/fish/03/fish_hire.nsbca";
u16 sFishSightGoldenRod[10] = {0x16, 0x2000, 0x16, 0x2aa8, 0x1a, 0x3556, 0x1e, 0x4000, 0x22, 0x5550};
void *data_ov003_02234798[2] = {(void *)FishShadow_ExecOutOfView, 0};
void *data_ov003_022347b8[2] = {(void *)FishShadow_MoveDecelerate, 0};
FishBiteWindow sFishBiteWindowGoldenRod = {{9, 0xb, 0xd, 0x11}, 0x2a};
FishBiteWindow sFishBiteWindowFishingRod = {{8, 0xa, 0xb, 0xe}, 0x20};
u16 sFishCastSplashTimer;
char sFishShadowModelPathStr[] = "/fish/03/fish_shadow.nsbmd";
void *data_ov003_02234790[2] = {(void *)FishShadow_ExecAppear, 0};
void *data_ov003_02234800[2] = {(void *)FishShadow_ThinkBobber, 0};
void *data_ov003_022347f8[2] = {(void *)FishShadow_BiteFlee, 0};
void *data_ov003_02234890[2] = {(void *)FishCatch_StateStart, 0};
void *data_ov003_022347e8[2] = {(void *)FishShadow_MoveAccelerate, 0};
void *data_ov003_022347e0[2] = {(void *)FishShadow_MoveCruise, 0};
void *data_ov003_022347d8[2] = {(void *)FishShadow_ExecSpawn, 0};
void *data_ov003_022347d0[2] = {(void *)FishShadow_MoveFlee, 0};
void *data_ov003_02234880[2] = {(void *)FishCatch_StateUpdate, 0};
s32 sFishPullJitter;
void *data_ov003_02234808[2] = {(void *)FishShadow_AppearAttached, 0};
char *sFishFinAnimPath = sFishFinAnimPathStr;
char sFishFinTexAnimPathStr[] = "/fish/03/fish_hire.nsbta";
void *data_ov003_02234828[2] = {(void *)FishShadow_EnterAppear, 0};
void *data_ov003_022347a8[2] = {(void *)FishShadow_ExecWaitInView, 0};
void *data_ov003_022347c0[2] = {(void *)FishShadow_EnterSpawn, 0};
char *sFishShadowModelPath = sFishShadowModelPathStr;
void *data_ov003_022347f0[2] = {(void *)FishShadow_MoveStart, 0};
u16 sFishSightFishingRod[10] = {0x14, 0x1554, 0x14, 0x1c72, 0x16, 0x238e, 0x19, 0x2aa8, 0x1e, 0x4000};
char sFishFinModelPathStr[] = "/fish/03/fish_hire.nsbmd";
void *data_ov003_02234818[2] = {(void *)FishShadow_ExecSwim, 0};
void *data_ov003_02234848[2] = {(void *)FishShadow_EnterOutOfView, 0};
FishShadowStateEntry sFishShadowStates[5] = {
    {*(Unk_ov003_0222144c_Fn_f4 *)data_ov003_022347c0, *(Unk_ov003_0222144c_Fn_f4 *)data_ov003_022347d8},
    {*(Unk_ov003_0222144c_Fn_f4 *)data_ov003_02234870, *(Unk_ov003_0222144c_Fn_f4 *)data_ov003_022347a8},
    {*(Unk_ov003_0222144c_Fn_f4 *)data_ov003_02234828, *(Unk_ov003_0222144c_Fn_f4 *)data_ov003_02234790},
    {*(Unk_ov003_0222144c_Fn_f4 *)data_ov003_02234850, *(Unk_ov003_0222144c_Fn_f4 *)data_ov003_02234818},
    {*(Unk_ov003_0222144c_Fn_f4 *)data_ov003_02234848, *(Unk_ov003_0222144c_Fn_f4 *)data_ov003_02234798},
};
char *sFishFinModelPath = sFishFinModelPathStr;
u8 data_ov003_022348b0[16] = {0x1b, 0x21, 0x25, 0x35, 0x2f, 0x41, 0x39, 0x55, 0x3e, 0x5f, 0x48, 0x6b, 0x5e, 0x87, 0x23, 0x55};
void *data_ov003_02234878[2] = {(void *)FishCatch_StateEnd, 0};
void *data_ov003_02234840[2] = {(void *)FishShadow_ThinkFree, 0};
void *data_ov003_02234810[2] = {(void *)FishShadow_BiteHooked, 0};
void *data_ov003_02234868[2] = {(void *)BottleThrow_StateFly, 0};
}

//@ 0x2224dcc
extern "C" void FieldFishManager_Create()
{
    new FieldFishManager;
}


//@ 0x2224dc8
BottleThrowStateOwner::BottleThrowStateOwner() {}


//@ 0x2224dc4
BottleThrowStateOwner::~BottleThrowStateOwner() {}


//@ 0x2224d90
BottleThrow::BottleThrow()
{
    BottleThrow *p = this;
    _ZN14CollisionStateC1Ev(p);
    p->state = 0;
    p->position.x = 0x1000;
    p->position.y = 0x1000;
    p->position.z = 0x1000;
    p->startPos.x = 0x1000;
    p->startPos.y = 0x1000;
    p->startPos.z = 0x1000;
    p->targetPos.x = 0x1000;
    p->targetPos.y = 0x1000;
    p->targetPos.z = 0x1000;
    p->stateTimer = 0;
}


//@ 0x2224d80
BottleThrow::~BottleThrow()
{
    _ZN14CollisionStateD1Ev(this);
}


//@ 0x2224d58
extern "C" void BottleThrow_SetTarget(V3_f10 *v, s32 i)
{
    if (i >= 0 && i < 4) {
        BottleThrow *e = &sBottleThrows[i];
        V3_f10 *pv = &e->targetPos;
        pv->x = v->x;
        pv->y = v->y;
        pv->z = v->z;
    }
}


//@ 0x2224d14
extern "C" BOOL BottleThrow_IsActive(s32 i)
{
    if (i < 0 || i >= 4) {
        return FALSE;
    }
    BottleThrow *e = &sBottleThrows[i];
    u32 st = e->state;
    if (st == 0) goto zero;
    if (st == 2) {
        if (e->stateTimer > 0x64) goto zero;
    }
    if (((s32 (*)(BottleThrow *))BottleThrow_IsOffscreen)(e) == 0) goto one;
zero:
    return FALSE;
one:
    return TRUE;
}


//@ 0x2224bc4
extern "C" s32 BottleThrow_Start(s32 i)
{
    BottleThrow *e;
    Character *p;
    void *s;
    V3_f10 t;
    if (i < 0 || i >= 4) {
        return 0;
    }
    e = &sBottleThrows[i];
    if (e->state != 0) {
        return 1;
    }
    p = ((Character * (*)(s32))PlayerActor_GetCharacter)(i);
    if (p == 0) {
        return 0;
    }
    s = gCommManager;
    if (CommManager_isOnline(s)) {
        if (CommManager_isMyAid(s, i)) {
            e->isLocal = 1;
        } else {
            e->isLocal = 0;
        }
        u32 f = p->actorFlags;
        if (Unk_ov003_02224bc4_Bit(f, 4) && Unk_ov003_02224bc4_Bit(f, 2)) {
            { V3_f10 *ps = (V3_f10 *)&p->position; V3_f10 *pd = &e->startPos; pd->x = ps->x; pd->y = ps->y; pd->z = ps->z; }
        } else if (p->getHeldItemPos((VecFx32 *)&t)) {
            { V3_f10 *pd = &e->startPos; pd->x = t.x; pd->y = t.y; pd->z = t.z; }
        } else {
            { V3_f10 *ps = (V3_f10 *)&p->position; V3_f10 *pd = &e->startPos; pd->x = ps->x; pd->y = ps->y; pd->z = ps->z; }
        }
    } else {
        e->isLocal = 1;
        if (p->getHeldItemPos((VecFx32 *)&t)) {
            { V3_f10 *pd = &e->startPos; pd->x = t.x; pd->y = t.y; pd->z = t.z; }
        } else {
            { V3_f10 *ps = (V3_f10 *)&p->position; V3_f10 *pd = &e->startPos; pd->x = ps->x; pd->y = ps->y; pd->z = ps->z; }
        }
    }
    e->state = 1;
    { V3_f10 *pd = &e->position; pd->x = t.x; pd->y = t.y; pd->z = t.z; }
    e->stateTimer = 0;
    e->targetPos.y = -0x3800;
    return 2;
}


//@ 0x2224ba4
extern "C" V3_f10 *BottleThrow_GetPos(s32 i)
{
    if (i < 0 || i >= 4) {
        return &(*(V3_f10 *)((u8 *)&sBottleThrows[0].position));
    }
    return &sBottleThrows[i].position;
}


//@ 0x2224b6c
extern "C" s32 BottleThrow_GetSeCue(s32 i)
{
    s32 r = 0;
    if (i < 0 || i >= 4) {
        return 0;
    }
    E_f9 *e = &((E_f9 *)(sBottleThrows))[i];
    if (e->state == 1) {
        if (e->stateTimer == 0) {
            r = 1;
        } else if (e->stateTimer == 0xf) {
            r = 2;
        }
    }
    return r;
}


//@ 0x2224b1c
extern "C" s32 BottleThrow_IsOffscreen(E_f9 *e)
{
    s32 r = 0;
    if (gCamera == 0) {
        return 1;
    }
    V3_f9 v = (*(V3_f9 *)&gCameraLookAt);
    if (((s32 (*)(V3_f9 *, V3_f9 *, s32, s32, s32))FieldFish_IsInBox)((V3_f9 *)&e->position, &v, 0x8000, 0x6000, 0x6000) == 0) {
        r = 1;
    }
    return r;
}


//@ 0x2224ae0
extern "C" void BottleThrow_Run(BottleThrowStateOwner *self, E_f9 *e)
{
    if (sBottleThrowStates[e->state].f) {
        (self->*sBottleThrowStates[e->state].f)(e);
    }
}


//@ 0x2224adc
extern "C" void BottleThrow_StateIdle()
{
}


//@ 0x2224990
extern "C" void BottleThrow_StateFly(void *self, E_f9 *e)
{
    V3_f9 *pos = (V3_f9 *)&e->position;
    s32 *cnt = &e->stateTimer;
    V3d_f9 *pa = (V3d_f9 *)&e->startPos;
    V3d_f9 a(*pa);
    V3d_f9 *pb = (V3d_f9 *)&e->targetPos;
    V3d_f9 b(*pb);
    V3_f9 c30(*pos);
    V3_f9 c3c(*(V3_f9 *)&a);
    V3_f9 c48(*(V3_f9 *)&b);
    if (((s32 (*)(V3_f9 *, V3_f9 *, V3_f9 *))FieldFish_HasPassed)(&c30, &c3c, &c48) != 0) {
        e->state = 2;
        *cnt = 0;
        if (e->isLocal != 0) {
            ((void (*)(void *, s32))FieldFish_ScareAround)(pos, 0x2800);
        }
    } else {
        V3_f9 x1(*(V3_f9 *)&a);
        V3_f9 x2(*(V3_f9 *)&b);
        s32 ok = ((s32 (*)(V3_f9 *, V3_f9 *, V3_f9 *, s32, s32, s32))FieldFish_StepParabola)(pos, &x1, &x2, *cnt, 0x14cd, 0xf) == 0 ? 1 : 0;
        if (ok != 0) {
            e->state = 2;
            *cnt = 0;
            if (e->isLocal != 0) {
                ((void (*)(void *, s32))FieldFish_ScareAround)(pos, 0x2800);
            }
        }
        s32 t = (*cnt * 0x199a) >> 5;
        if (t > 0x199a) t = 0x199a;
        ((void (*)(void *, void *, void *, s32, s32, s32, s32))Collision_Move)(e, pos, pos, Math_AngleXZ(&e->targetPos, &e->startPos), t, 0, 0xb);
        V3_f9 t6c(*pos);
        V3_f9 b78(0x1000, 0x1000, 0x1000);
        Field_DrawItemModel(0x1520, &t6c, &b78, 0, 0, 0);
        *cnt = *cnt + 1;
    }
}


//@ 0x222489c
extern "C" void BottleThrow_StateDrift(void *self, E_f9 *e)
{
    V3_f9 *pos = (V3_f9 *)&e->position;
    s32 *cnt = &e->stateTimer;
    V3_f9 a1, b, a2;
    s32 t;
    if (e->stateTimer < 0x64) {
        a1.x = pos->x;
        a1.y = pos->y;
        a1.z = pos->z;
        b.x = 0x1000;
        b.y = 0x1000;
        b.z = 0x1000;
        Field_DrawItemModel(0x1520, &a1, &b, 0, 0, 0);
        if (BottleThrow_IsOffscreen(e) != 0) {
            *cnt = 0x64;
        }
    } else if ((e->stateTimer & 1) != 0) {
        a2.x = pos->x;
        a2.y = pos->y;
        a2.z = pos->z;
        b.x = 0x1000;
        b.y = 0x1000;
        b.z = 0x1000;
        Field_DrawItemModel(0x1520, &a2, &b, 0, 0, 0);
    }
    ((void (*)(void *, s32))FieldWater_ApplyFlow)(pos, sBottleDriftSpeed);
    pos->y = pos->y - sBottleSinkStep;
    t = (*cnt * 0x199a) >> 5;
    if (t > 0x199a) t = 0x199a;
    ((void (*)(void *, void *, void *, s32, s32, s32, s32))Collision_Move)(e, pos, pos, Math_AngleXZ(&e->targetPos, &e->startPos), t, 0, 0xb);
    *cnt = *cnt + 1;
    if (*cnt >= 0x78) {
        e->state = 0;
        V3_f9 *v = (V3_f9 *)&e->targetPos;
        e->targetPos.x = 0x1000;
        v->y = 0x1000;
        v->z = 0x1000;
    }
}


//@ 0x2224874
extern "C" void FieldFish_AddSinX(s32 *p, s32 a, s32 ang)
{
    *p += func_01ffcb0c(a, data_02135f44[((u16)ang >> 4) * 2]);
}


//@ 0x2224848
extern "C" void FieldFish_AddCosZ(s32 *p, s32 a, s32 ang)
{
    *p += func_01ffcb0c(a, data_02135f44[((u16)ang >> 4) * 2 + 1]);
}


//@ 0x2224828
extern "C" void FieldFish_MoveXZ(s32 *p, s32 a, s32 ang)
{
    FieldFish_AddSinX(p, a, ang);
    FieldFish_AddCosZ(p + 2, a, ang);
}


//@ 0x22247f0
extern "C" void FishShadow_RunAppearAi(Obj_f9 *o)
{
    (o->*sFishShadowAiTable[o->aiMode].appear)();
}


//@ 0x22247b8
extern "C" void FishShadow_RunAi(Obj_f9 *o)
{
    (o->*sFishShadowAiTable[o->aiMode].think)();
}


//@ 0x22246f0
extern "C" void FishShadow_AppearFree(Obj_f9 *o)
{
    s32 r;
    o->position.x = o->spawnPos;
    o->position.y = o->spawnPosY;
    o->position.z = o->spawnPosZ;
    (o->*sFishShadowMoveStates[o->moveState].f)();
    r = ((s32 (*)(void *))FishShadow_CheckWaterBounds)(o);
    if (r != 0 && r != 5) {
        if (o->spawnState == 0) {
            o->rotY = o->rotY + 0x2aa8;
        } else {
            o->rotY = FieldFish_RandRangeSigned(0, 0xaaa);
        }
        o->appearCount = 0;
    } else {
        o->appearCount = o->appearCount + 1;
    }
    o->stateTimer = o->stateTimer + 2;
}


//@ 0x22244bc
extern "C" void FishShadow_ThinkFree(Obj_f9 *o)
{
    s32 r;
    s32 x, y;
    if (o->fishId == 0xb) {
        ((void (*)(void *, void *))FishCroak_Update)(&o->croak, o);
    }
    (o->*sFishShadowMoveStates[o->moveState].f)();
    if (o->moveState == 5) {
        r = 0;
    } else {
        r = ((s32 (*)(void *))FishShadow_CheckWaterBounds)(o);
    }
    switch (r) {
    case 0:
        o->appearCount = 0;
        break;
    case 1:
    case 3:
        if (o->turnDir != 0) {
            o->rotY = o->rotY + 0x222;
        } else {
            o->rotY = o->rotY - 0x222;
        }
        break;
    case 2:
    case 4:
        if (o->moveState == 1) {
            if (o->turnDir != 0) {
                o->rotY = o->rotY + 0x222;
            } else {
                o->rotY = o->rotY - 0x222;
            }
        }
        break;
    case 6:
        if (o->moveState != 4) {
            s32 t = *(volatile s16 *)&o->rotY;
            if (t < 0x3556 || t > 0x4aaa) {
                o->rotY = o->rotY - 0x555;
            }
        }
        break;
    case 7:
        if (o->moveState != 4) {
            s32 t = *(volatile s16 *)&o->rotY;
            if (t > -0x3556 || t < -0x4aaa) {
                o->rotY = o->rotY + 0x555;
            }
        }
        break;
    case 5:
        if ((u8)(o->moveState + 0xff) <= 1) {
            s32 t = *(volatile s16 *)&o->rotY;
            if (t < 0) t = -t;
            if (t < 0x7556) {
                if (o->turnDir != 0) {
                    o->rotY = o->rotY + 0x555;
                } else {
                    o->rotY = o->rotY - 0x555;
                }
            }
        }
        break;
    }
    o->stateTimer = o->stateTimer + 1;
    if (o->biteState != 7 && o->moveState != 5) {
        if (((s32 (*)(void *))FishShadow_TryNoticeBobber)(o) != 0) {
            o->stateTimer = 0;
            o->biteState = 0;
        }
    } else {
        o->biteState = 0;
        switch (o->habitat) {
        case 0:
        case 1:
        case 2:
        case 3:
            FieldPos_ToUnit(&x, &y, &o->position);
            if (Ground_GetWaterKind(x, y) == 1) {
                ((s32 (*)(void *, void *))FishShadow_TryFlee)(o, &o->prevPosition);
            }
            break;
        case 4:
            break;
        case 5:
        case 6:
            FieldPos_ToUnit(&x, &y, &o->position);
            if (Ground_GetWaterKind(x, y) == 2) {
                ((s32 (*)(void *, void *))FishShadow_TryFlee)(o, &o->prevPosition);
            }
            break;
        }
    }
}


//@ 0x222443c
extern "C" void FishShadow_MoveStart(Obj_f9 *o)
{
    o->rotY = o->rotY + (s16)FieldFish_RandRangeSigned(0, 0x2aa8);
    o->stateTimer = 0;
    o->cruiseTimer = (u8)FieldFish_RandRange(1, 3);
    o->wobblePhase = FieldFish_RandRangeSigned(0xaaa, 0x2000);
    o->turnDir = FieldFish_RandRangeSigned(0, 2) != 0 ? 1 : 0;
    o->moveState = 1;
}


//@ 0x2224364
extern "C" void FishShadow_MoveAccelerate(Obj_f9 *o)
{
    s32 t;
    s32 a, b, x, q, z, c, d;
    t = o->stateTimer << 3;
    o->wobblePhase = o->wobblePhase + 0x2000;
    a = data_02135f44[((u16)o->wobblePhase >> 4) * 2];
    b = data_02135f44[((u16)o->rotY >> 4) * 2];
    q = t >> 2;
    x = func_01ffcb0c(t, b) + func_01ffcb0c(q, a);
    c = data_02135f44[((u16)o->wobblePhase >> 4) * 2];
    d = data_02135f44[((u16)o->rotY >> 4) * 2 + 1];
    z = func_01ffcb0c(t, d) + func_01ffcb0c(q, c);
    o->position.x += x;
    o->position.z += z;
    if (o->stateTimer >= 10) {
        ((void (*)(void *, s32))FishShadow_SetAnimSpeed)(o, 0x20);
    } else {
        ((void (*)(void *, s32))FishShadow_SetAnimSpeed)(o, 0x10);
    }
    if (t > 0x19a) {
        o->moveState = 2;
    }
}


//@ 0x2224310
extern "C" void FishShadow_MoveCruise(Obj_f9 *o)
{
    FieldFish_MoveXZ((s32 *)&o->position, 0x19a, o->rotY);
    ((void (*)(void *, s32))FishShadow_SetAnimSpeed)(o, 0x20);
    o->cruiseTimer--;
    if (o->cruiseTimer == 0) {
        o->stateTimer = 0;
        o->moveState = 3;
    }
}


//@ 0x22242ac
extern "C" void FishShadow_MoveDecelerate(Obj_f9 *o)
{
    s32 t = 0x19a - (o->stateTimer << 3);
    FieldFish_MoveXZ((s32 *)&o->position, t, o->rotY);
    if (o->stateTimer >= 10) {
        ((void (*)(void *, s32))FishShadow_SetAnimSpeed)(o, 3);
    } else {
        ((void (*)(void *, s32))FishShadow_SetAnimSpeed)(o, 0x10);
    }
    if (t <= 0) {
        o->stateTimer = 0;
        o->moveState = 4;
    }
}


//@ 0x222426c
extern "C" void FishShadow_MoveRest(Obj_f9 *o)
{
    ((void (*)(void *, s32))FishShadow_SetAnimSpeed)(o, 10);
    ((void (*)(void *, s32))FieldWater_ApplyFlow)(&o->position, 0x40);
    if (FieldFish_RandRange(0, 0x64) == 1 || o->stateTimer > 0x64) {
        o->moveState = 0;
    }
}


//@ 0x2224148
extern "C" void FishShadow_MoveFlee(Obj_f8 *self)
{
    s32 a, x, y, sq;
    s32 t, s142, s138;
    u16 *pf;
    a = self->stateTimer << 7;
    if (a > 0x215) {
        a = 0x215;
    }
    pf = (u16 *)&self->wobblePhase;
    *pf = (s16)*pf + 0x2000;
    s142 = data_02135f44[(*pf >> 4) * 2];
    s138 = *(volatile s16 *)&data_02135f44[((u16)self->rotY >> 4) * 2];
    sq = a >> 5;
    t = func_01ffcb0c(a, s138);
    x = t + func_01ffcb0c(sq, s142);
    s142 = data_02135f44[((u16)self->wobblePhase >> 4) * 2];
    s138 = *(volatile s16 *)&data_02135f44[(((u16)self->rotY >> 4) * 2) + 1];
    t = func_01ffcb0c(a, s138);
    y = t + func_01ffcb0c(sq, s142);
    self->position.x += x;
    self->position.z += y;
    if (self->hasFin) {
        if (self->stateTimer >= 10) {
            ((void (*)(void *, s32))FishShadow_SetAnimSpeed)(self, 3);
        } else if (self->stateTimer >= 5) {
            ((void (*)(void *, s32))FishShadow_SetAnimSpeed)(self, 0x10);
        } else {
            ((void (*)(void *, s32))FishShadow_SetAnimSpeed)(self, 0x20);
        }
    } else {
        ((void (*)(void *, s32))FishShadow_SetAnimSpeed)(self, 0x20);
    }
    {
        V3_f8 v;
        v.x = self->position.x;
        v.y = self->position.y;
        v.z = self->position.z;
        v.y = data_020c7c1c;
        ((void (*)(s32, V3_f8 *, s32, s32))Effect_SetPosition)(self->effectHandle, &v, 0, 0);
    }
}


//@ 0x2224144
extern "C" void FishShadow_AppearAttached()
{
}


//@ 0x22240f4
extern "C" void FishShadow_ThinkBobber(Obj_f8 *self)
{
    if ((self->*sFishBiteStates[self->biteState].f)() == 0) {
        ((s32 (*)(Obj_f8 *))FishShadow_FleeFromPlayer)(self);
    }
    self->stateTimer = self->stateTimer + 1;
}


//@ 0x22240d4
extern "C" s32 FishShadow_BiteIdle(Obj_f8 *self)
{
    if (self->bobber == 0) {
        return 0;
    }
    self->biteState = 1;
    return 1;
}


//@ 0x2223f78
extern "C" s32 FishShadow_BiteApproach(Obj_f8 *self)
{
    u8 *p = (u8 *)self->bobber;
    s32 dv, s;
    if (p == 0) {
        return 0;
    }
    p = (u8 *)((u32)p + 8);
    dv = ((s32)((u8 *)(sFishSizeClassParams))[self->sizeClass * 0x14] << 12) / 100;
    s = self->biteStepTimer << 4;
    if (s >= 0x100) {
        s = 0x100;
    }
    self->rotY = Math_AngleXZ(&self->position, p);
    ((s32 (*)(void *, s32, s32))FieldFish_MoveXZ)(&self->position, s, (s16)self->rotY);
    ((void (*)(void *, s32))FishShadow_SetAnimSpeed)(self, 0x18);
    if (((s32 (*)(void *, void *, s32, s32, s32))FieldFish_IsInBox)(&self->position, p, dv, dv, dv)) {
        s32 r = ((s32 (*)(s32, s32))FieldFish_RandRange)(0, 100);
        s32 lim = 0x5f;
        s32 a, b;
        FieldPos_ToUnit(&a, &b, p);
        switch (self->habitat) {
        case 0:
        case 1:
        case 2:
        case 3:
            if (Ground_GetWaterKind(a, b) == 1) {
                lim = 0x64;
            }
            break;
        case 4:
            break;
        case 5:
        case 6:
            if (Ground_GetWaterKind(a, b) == 2) {
                lim = 0x64;
            }
            break;
        }
        if (r <= lim) {
            self->biteDelay = ((s32 (*)(s32, s32))FieldFish_RandRange)(4, 0xb4);
            self->stateTimer = 0;
            self->biteStepTimer = 0;
            self->biteStep = 3;
            self->biteState = 3;
            self->rotY = Math_AngleXZ(&self->position, p);
        } else {
            self->biteStepTimer = 0;
            self->biteStep = 0;
            self->biteState = 2;
            self->rotY = Math_AngleXZ(&self->position, p);
        }
    }
    self->biteStepTimer = self->biteStepTimer + 1;
    return 1;
}


//@ 0x2223dd8
extern "C" s32 FishShadow_BiteInspect(Obj_f8 *self)
{
    u8 *p = (u8 *)self->bobber;
    u8 *q;
    if (p == 0) {
        return 0;
    }
    q = p + 8;
    switch (self->biteStep) {
    case 0: {
        s32 s, dv;
        dv = ((s32)((u8 *)(sFishSizeClassParams))[self->sizeClass * 0x14] << 12) / 100;
        s = self->biteStepTimer << 4;
        if (s >= 0x100) {
            s = 0x100;
        }
        self->rotY = Math_AngleXZ(&self->position, q);
        ((s32 (*)(void *, s32, s32))FieldFish_MoveXZ)(&self->position, s, (s16)self->rotY);
        if (((s32 (*)(void *, void *, s32, s32, s32))FieldFish_IsInBox)(&self->position, q, dv, dv, dv)) {
            self->biteStepTimer = 0;
            FishBobber_nudge(p);
            self->biteStep = 1;
        }
        break;
    }
    case 1: {
        s32 lim = ((s32 (*)(s32, s32))FieldFish_RandRange)(10, 15);
        if (((s32 (*)(s32, s32))FieldFish_RandRange)(0, 100) < 0x32) {
            self->rotY = Math_AngleXZ(q, &self->position);
        } else {
            self->rotY = Math_AngleXZ(&self->position, q);
        }
        ((s32 (*)(void *, s32, s32))FieldFish_MoveXZ)(&self->position, 0x100, (s16)self->rotY);
        self->rotY = Math_AngleXZ(&self->position, q);
        if (self->biteStepTimer > lim) {
            self->biteStepTimer = 0;
            self->rotY = (s16)self->rotY + (s16)(FieldFish_RandRangeSigned(1, 2) * 0x1554);
            self->biteStep = 2;
        }
        break;
    }
    case 2: {
        s32 dv = ((s32)*(u16 *)(((u8 *)((u8 *)&sFishSizeClassParams[0].d)) + self->sizeClass * 0x14) << 12) / 100;
        ((s32 (*)(void *, s32, s32))FieldFish_MoveXZ)(&self->position, 0x14c, (s16)self->rotY);
        if (((s32 (*)(void *, void *, s32, s32, s32))FieldFish_IsInBox)(&self->position, q, dv, dv, dv) == 0) {
            if (((s32 (*)(Obj_f8 *))FishShadow_LoseBobber)(self) == 0) {
                ((s32 (*)(Obj_f8 *))FishShadow_FleeFromPlayer)(self);
            }
        }
        break;
    }
    }
    ((void (*)(void *, s32))FishShadow_SetAnimSpeed)(self, 0x18);
    self->biteStepTimer = self->biteStepTimer + 1;
    return 1;
}


//@ 0x2223b64
extern "C" s32 FishShadow_BiteNibble(Obj_f8 *self)
{
    BOOL r = FALSE;
    u8 *p = (u8 *)self->bobber;
    u8 *q;
    s32 base;
    s32 dv, sq, ang;
    if (p == 0) {
        return r;
    }
    q = p + 8;
    if (self->stateTimer >= self->biteDelay) {
        s32 dv = ((s32)((u8 *)(sFishSizeClassParams))[self->sizeClass * 0x14] << 12) / 100;
        if (((s32 (*)(void *, void *, s32, s32, s32))FieldFish_IsInBox)(&self->position, q, dv, dv, dv)) {
            self->stateTimer = r;
            ((s32 (*)(void *, u32))FishBobber_setState)(p, 5);
            Snd_SeEmitterPlayOneShot(self, 0x84f, 0x7f, r);
            {
                s32 t = self->fishId;
                if (t != 0x38 && t != 0x39 && t != 0x3a) {
                    goto plain;
                }
                {
                    s32 arr[2];
                    arr[1] = arr[0] = 0;
                    if (FieldAction_FindDropUnit(0x10, arr, 0)) {
                        self->biteState = 4;
                        self->biteStep = 6;
                        r = TRUE;
                    }
                }
                goto done;
            plain:
                self->biteState = 4;
                self->biteStep = 6;
                r = TRUE;
            done:;
            }
            return r;
        }
    }
    base = (u32)((u8 *)(sFishSizeClassParams))[self->sizeClass * 0x14] << 12;
    switch (self->biteStep) {
    case 3: {
        dv = base / 100;
        s32 s = self->biteStepTimer << 4;
        s64 d;
        if (s >= 0x100) {
            s = 0x100;
        }
        ((s32 (*)(void *, s32, s32))FieldFish_MoveXZ)(&self->position, s, Math_AngleXZ(&self->position, q));
        d = ((s64 (*)(void *, void *))Vec_DistSqXZ)(&self->position, q);
        if ((s64)func_01ffcb0c(dv, dv) >= d) {
            self->biteStepTimer = 0;
            FishBobber_nudge(p);
            self->biteStep = 4;
        }
        ((void (*)(void *, s32))FishShadow_SetAnimSpeed)(self, 0x18);
        break;
    }
    case 4: {
        s32 lim = ((s32 (*)(s32, s32))FieldFish_RandRange)(10, 0x14);
        if (((s32 (*)(s32, s32))FieldFish_RandRange)(0, 100) < 0x32) {
            ang = Math_AngleXZ(q, &self->position);
        } else {
            ang = Math_AngleXZ(&self->position, q);
            if (((s32 (*)(s32, s32))FieldFish_RandRange)(0, 100) < 5) {
                FishBobber_nudge(p);
            }
        }
        ((s32 (*)(void *, s32, s32))FieldFish_MoveXZ)(&self->position, 0x100, ang);
        if (self->biteStepTimer > lim) {
            self->biteStepTimer = 0;
            self->biteStep = 5;
        }
        break;
    }
    case 5: {
        s32 dv = ((s32)*(u16 *)(((u8 *)((u8 *)&sFishSizeClassParams[0].d)) + self->sizeClass * 0x14) << 12) / 100;
        s32 s = 0x100 - (self->biteStepTimer << 4);
        if (s < 0) {
            s = 0;
        }
        ((s32 (*)(void *, s32, s32))FieldFish_MoveXZ)(&self->position, s, Math_AngleXZ(q, &self->position));
        if (s == 0 || ((s32 (*)(void *, void *, s32, s32, s32))FieldFish_IsInBox)(&self->position, q, dv, dv, dv) == 0) {
            self->biteStepTimer = 0;
            self->biteStep = 3;
        }
        ((void (*)(void *, s32))FishShadow_SetAnimSpeed)(self, 0x10);
        break;
    }
    }
    {
        sq = base >> 9;
        s64 d = ((s64 (*)(void *, void *))Vec_DistSqXZ)(&self->position, q);
        if (d >= (s64)func_01ffcb0c(sq, sq)) {
            self->rotY = Math_AngleXZ(&self->position, q);
        }
    }
    self->biteStepTimer = self->biteStepTimer + 1;
    return 1;
}


//@ 0x2223924
extern "C" s32 FishShadow_BiteTug(Obj_f8 *self)
{
    u8 *p = (u8 *)self->bobber;
    u8 *q;
    s32 idx;
    if (p == 0) {
        return 0;
    }
    if (self->playerIdx == -1) {
        return 0;
    }
    q = p + 8;
    ((void (*)(void *, s32))FishShadow_SetAnimSpeed)(self, 0x18);
    {
        u16 out[2];
        BOOL ok;
        u16 a, b;
        PlayerActor_GetSlotHeldItem(out, self->playerIdx);
        ok = FALSE;
        {
            volatile u16 *pv = &out[0];
            a = *pv;
            b = *pv;
        }
        if (b >= 0x1374 && a <= 0x1374) {
            ok = TRUE;
        }
        if (ok) {
            idx = 0;
        } else if (a >= 0x1375 && a <= 0x1375) {
            idx = 1;
        } else {
            return 0;
        }
    }
    {
        s32 cur = self->stateTimer;
        u8 *lim = ((FishRodParams *)((u8 *)&sFishRodParams[0].q))[idx].p;
        if (cur >= lim[data_020ca316[self->fishId * 6]]) {
            self->stateTimer = 0;
            ((s32 (*)(void *, u32))FishBobber_setState)(p, 4);
            return 0;
        }
    }
    switch (self->biteStep - 6) {
    case 0: {
        s32 dv = ((s32)((u8 *)(sFishSizeClassParams))[self->sizeClass * 0x14] << 12) / 100;
        s32 ang = Math_AngleXZ(&self->position, q);
        ((s32 (*)(void *, s32, s32))FieldFish_MoveXZ)(&self->position, 0x180, ang);
        ((s32 (*)(void *, s32, s32))FieldFish_MoveXZ)(&self->position, 0xc0, (s16)(ang + 0x4000));
        if (((s32 (*)(void *, void *, s32, s32, s32))FieldFish_IsInBox)(&self->position, q, dv, dv, dv)) {
            self->biteStep = 8;
        } else {
            self->biteStep = 7;
        }
        break;
    }
    case 1: {
        s32 dv = ((s32)((u8 *)(sFishSizeClassParams))[self->sizeClass * 0x14] << 12) / 100;
        s32 ang = Math_AngleXZ(&self->position, q);
        ((s32 (*)(void *, s32, s32))FieldFish_MoveXZ)(&self->position, 0x180, ang);
        ((s32 (*)(void *, s32, s32))FieldFish_MoveXZ)(&self->position, 0xc0, (s16)(ang - 0x4000));
        if (((s32 (*)(void *, void *, s32, s32, s32))FieldFish_IsInBox)(&self->position, q, dv, dv, dv)) {
            self->biteStep = 8;
        } else {
            self->biteStep = 6;
        }
        break;
    }
    case 2: {
        s32 dv = ((s32)((u8 *)((u8 *)&sFishSizeClassParams[0].a1))[self->sizeClass * 0x14] << 12) / 100;
        s32 r;
        s32 ang = Math_AngleXZ(q, &self->position);
        ((s32 (*)(void *, s32, s32))FieldFish_MoveXZ)(&self->position, 0x180, ang);
        r = ((s32 (*)(s32, s32))FieldFish_RandRange)(0, 100);
        if (((s32 (*)(void *, void *, s32, s32, s32))FieldFish_IsInBox)(&self->position, q, dv, dv, dv) == 0) {
            if (r >= 0x46) {
                self->biteStep = 6;
            } else {
                self->biteStep = 9;
            }
        }
        break;
    }
    case 3:
        if (((s32 (*)(s32, s32))FieldFish_RandRange)(0, 100) <= 0x32) {
            self->biteStep = 7;
        }
        break;
    }
    self->rotY = Math_AngleXZ(&self->position, q);
    return 1;
}


//@ 0x22237dc
extern "C" BOOL FishShadow_BiteHooked(Obj_f7 *o) {
    FishBobber *e = o->bobber;
    if (e == NULL) {
        return FALSE;
    }
    s32 step;
    s32 ang;
    if (o->sizeClass >= 3) {
        step = 0x1000;
    } else {
        step = 0x1249;
    }
    if (o->pullDir != 0) {
        if (AnimFrameCtrl_hasPassedFrame(o->animFrameCtrl, 4)) {
            o->animFrame = 0x3000;
        }
        o->rotY = o->rotY + step;
        ang = (s16)(o->rotY - 0x4000);
    } else {
        if (AnimFrameCtrl_hasPassedFrame(o->animFrameCtrl, 0xb)) {
            o->animFrame = 0xa000;
        }
        o->rotY = o->rotY - step;
        ang = (s16)(o->rotY + 0x4000);
    }
    s32 d = FieldFish_RandRangeSigned(3, 10);
    s32 s = sFishPullJitter + d;
    sFishPullJitter = s;
    if (s < -12) {
        sFishPullJitter = -12;
    } else if (s > 0x14) {
        sFishPullJitter = 0x14;
    }
    s32 d2 = FieldFish_RandRangeSigned(0, 0xf);
    s32 sum = sFishPullJitter + d2 + *(u16 *)&((u8 *)((u8 *)&sFishSizeClassParams[0].c1))[o->sizeClass * 0x14];
    s32 sc = func_02133150(sum << 12, 100);
    V3_f7 v;
    V3_f7 *ps = (V3_f7 *)&e->pos;
    v.x = e->pos.x;
    v.y = ps->y;
    v.z = ps->z;
    o->position.x = v.x;
    o->position.z = v.z;
    ((s32 (*)(void *, s32, s32))FieldFish_MoveXZ)(&o->position, sc, ang);
    void *m = PlayerActor_GetBodyPos(4);
    if (m != NULL) {
        s32 a2 = Math_AngleXZ(m, &v);
        ((s32 (*)(void *, s32, s32))FieldFish_MoveXZ)(&o->position, 0xa00, a2);
    }
    return TRUE;
}


//@ 0x2223730
extern "C" BOOL FishShadow_BiteFlee(Obj_f7 *o) {
    ((void (*)(void *, s32))FishShadow_SetAnimSpeed)(o, 0x1c);
    s32 c = o->stateTimer;
    s32 v = (c + 10) * 25;
    if (v >= 0x180) {
        v = 0x180;
    }
    if (o->hasFin != 0) {
        if (c >= 0x14) {
            ((void (*)(void *, s32))FishShadow_SetAnimSpeed)(o, 3);
        } else if (c >= 0xf) {
            ((void (*)(void *, s32))FishShadow_SetAnimSpeed)(o, 0x10);
        } else {
            ((void (*)(void *, s32))FishShadow_SetAnimSpeed)(o, 0x20);
        }
    }
    ((s32 (*)(void *, s32, s32))FieldFish_MoveXZ)(&o->position, v, o->rotY);
    V3_f7 t;
    t.x = o->position.x;
    t.y = o->position.y;
    t.z = o->position.z;
    t.y = data_020c7c1c;
    ((void (*)(s32, V3_f7 *, s32, s32))Effect_SetPosition)(o->effectHandle, &t, 0, 0);
    return TRUE;
}


//@ 0x22236dc
extern "C" void FishShadow_OnRodPulled(Obj_f7 *o) {
    if (o->aiMode == 1) {
        switch (o->biteState) {
        case 3:
        case 4:
        case 5:
            FishShadow_FleeFromPlayer(o);
            break;
        case 6:
            break;
        default:
            if (((BOOL (*)(Obj_f7 *))FishShadow_LoseBobber)(o) == 0) {
                FishShadow_FleeFromPlayer(o);
            }
            break;
        }
    }
}


//@ 0x2223554
extern "C" BOOL FishShadow_TryHook(Obj_f7 *o) {
    BOOL r = FALSE;
    if (o == NULL) {
        return r;
    }
    FishBobber *e = o->bobber;
    if (e == NULL) {
        FishShadow_FleeFromPlayer(o);
        return r;
    }
    switch (o->biteState) {
    case 4: {
        u16 buf[1];
        PlayerActor_GetSlotHeldItem(buf, o->playerIdx);
        u32 k = 0;
        u32 a = *(volatile u16 *)buf;
        u32 b = *(volatile u16 *)buf;
        s32 m;
        if (b >= 0x1374 && a <= 0x1374) {
            k = 1;
        }
        if (k) {
            m = 0;
        } else if (a >= 0x1375 && a <= 0x1375) {
            m = 1;
        } else {
            FishShadow_FleeFromPlayer(o);
            return FALSE;
        }
        if (gTouchHeld == 0) {
            s32 cur = o->stateTimer;
            u8 *tbl = ((u8 * *)((u8 *)&sFishRodParams[0].q))[m * 2];
            if (cur > tbl[data_020ca316[o->fishId * 6]] - 1) {
                FishShadow_FleeFromPlayer(o);
                return FALSE;
            }
        }
        o->biteState = 5;
        o->biteStep = 10;
        o->stateTimer = 0;
        ((void (*)(FishBobber *, s32))FishBobber_setState)(e, 6);
        o->pullDir = FieldFish_RandRange(0, 2) != 0;
        o->reelGoal = FieldFish_RandRange(((u8 *)((u8 *)&sFishSizeClassParams[0].a2))[o->sizeClass * 0x14], ((u8 *)((u8 *)&sFishSizeClassParams[0].a3))[o->sizeClass * 0x14]);
        V3_f7 *ps = (V3_f7 *)&e->pos;
        V3_f7 *pd = (V3_f7 *)&o->hookPos;
        pd->x = e->pos.x;
        pd->y = ps->y;
        pd->z = ps->z;
        if (o->pullDir != 0) {
            o->rotY = o->rotY - 0x4000;
        } else {
            o->rotY = o->rotY + 0x4000;
        }
        r = TRUE;
        break;
    }
    case 3:
        FishShadow_FleeFromPlayer(o);
        break;
    case 6:
        break;
    default:
        if (((BOOL (*)(Obj_f7 *))FishShadow_LoseBobber)(o) == 0) {
            FishShadow_FleeFromPlayer(o);
        }
        break;
    }
    return r;
}


//@ 0x22234fc
extern "C" s32 FishShadow_CheckReelResult(Obj_f7 *o) {
    s32 r = 0;
    if (o == NULL) {
        return r;
    }
    if (o->biteState != 5) {
        return r;
    }
    if (o->stateTimer >= o->reelGoal) {
        if (((BOOL (*)(Obj_f7 *, u32))FishShadow_Land)(o, o->slotIndex)) {
            r = 2;
        } else {
            FishShadow_FleeFromPlayer(o);
            r = 1;
        }
    }
    return r;
}


//@ 0x22234c4
extern "C" BOOL FishCatch_IsLandedForShadow(Obj_f7 *o) {
    BOOL r = FALSE;
    if (o == NULL) {
        return r;
    }
    s32 i = o->playerIdx;
    if (i == -1) {
        return r;
    }
    Rec_f7 *p = &((Rec_f7 *)(sFishCatches))[i];
    if (p->isLanded != 0) {
        r = TRUE;
    }
    return r;
}


//@ 0x2223498
extern "C" BOOL FishCatch_EndForShadow(Obj_f7 *o) {
    if (o == NULL) {
        return FALSE;
    }
    s32 i = o->playerIdx;
    BOOL r = FALSE;
    if (i != -1) {
        Rec_f7 *p = &((Rec_f7 *)(sFishCatches))[i];
        p->state = 4;
        r = TRUE;
    }
    return r;
}


//@ 0x2223450
extern "C" void Fish_GetDisplayScale(V3_f7 *out, s32 idx) {
    if (idx < 0 || idx >= 0x3b) {
        out->x = 0x1000;
        out->y = 0x1000;
        out->z = 0x1000;
    } else {
        s32 v = func_02133150(((u8 *)((u8 *)&sFishSizeClassParams[0].h))[data_020ca314[idx * 6] * 0x14] << 12, 100);
        out->x = v;
        out->y = v;
        out->z = v;
    }
}


//@ 0x2223400
extern "C" BOOL FishCatch_SetDisplayPosScale(Obj_f7 *o, V3_f7 *a, V3_f7 *b) {
    if (o == NULL) {
        return FALSE;
    }
    s32 i = o->playerIdx;
    if (i == -1) {
        return FALSE;
    }
    Rec_f7 *r = &((Rec_f7 *)(sFishCatches))[i];
    V3_f7 *pd = &r->position;
    pd->x = a->x;
    pd->y = a->y;
    pd->z = a->z;
    pd = &r->scale;
    pd->x = b->x;
    pd->y = b->y;
    pd->z = b->z;
    return TRUE;
}


//@ 0x2223310
extern "C" BOOL FishCatch_StartLift(s32 idx, s32 flag) {
    s32 t;
    s32 ang;
    V3_f7 *pos;
    if (idx < 0 || idx > 3) {
        return FALSE;
    }
    u8 *ob = (u8 *)PlayerActor_GetActor(idx);
    if (ob == NULL) {
        return FALSE;
    }
    pos = (V3_f7 *)(ob + 0x5c);
    Rec_f7 *rec = &((Rec_f7 *)(sFishCatches))[idx];
    t = rec->fishId;
    if ((u32)(t - 0x38) <= 2) {
        if (flag != 0) {
            return TRUE;
        }
        rec->state = 4;
        return TRUE;
    }
    V3_f7 *q = &rec->arcPointA;
    ang = Math_AngleXZ(&rec->arcPointB, q);
    V3_f7 tmp;
    if (Ground_FindWaterAhead(&tmp, pos, ang, 0x7800, 0x2000, 0xc)) {
        q->x = tmp.x;
        q->y = tmp.y;
        q->z = tmp.z;
    }
    FishCatch_SetModelAngles(rec, ang, t);
    if (flag != 0) {
        rec->state = 1;
    }
    rec->mode = 3;
    void *g = gCommManager;
    if (CommManager_isOnline(g)) {
        if (CommManager_isMyAid(g, idx)) {
            u8 b = 2;
            g = gCommManager;
            CommManager_beginRecord(g);
            CommManager_writeRecord(g, &b, 1);
            CommManager_endRecord(g, 0x2a, 4);
        }
    }
    return TRUE;
}


//@ 0x22232e8
extern "C" BOOL FishCatch_IsActive(s32 idx) {
    if (idx < 0 || idx >= 4) {
        return TRUE;
    }
    Rec_f7 *p = &((Rec_f7 *)(sFishCatches))[idx];
    if (p->state != 0) {
        return TRUE;
    }
    return FALSE;
}


//@ 0x22232c8
extern "C" V3_f7 *FishCatch_GetPos(s32 idx) {
    if (idx < 0 || idx >= 4) {
        return &(*(V3_f7 *)((u8 *)&sFishCatches[0].position));
    }
    return &((Rec_f7 *)(sFishCatches))[idx].position;
}


//@ 0x2223258
extern "C" BOOL FishCatch_NetSendStored(s32 idx) {
    BOOL r = FALSE;
    if (idx < 0 || idx >= 4) {
        return FALSE;
    }
    Rec_f7 *p = &((Rec_f7 *)(sFishCatches))[idx];
    if (p->state != 3 && p->state != 2) {
        return r;
    }
    if (p->storedSent == 0) {
        u8 b = 1;
        void *g = gCommManager;
        CommManager_beginRecord(g);
        CommManager_writeRecord(g, &b, 1);
        CommManager_endRecord(g, 0x2a, 4);
        r = TRUE;
        p->storedSent = r;
    }
    return r;
}


//@ 0x222323c
extern "C" BOOL FishCatch_IsDisplayReady(Rec_f7 *self, u32 a) {
    BOOL r = FALSE;
    if (FishDisplay_HasPassedFrame((void *)self->displayHandle, 1)) {
        r = TRUE;
    }
    return r;
}


//@ 0x222316c
extern "C" void FishCatch_SetModelAngles(Rec_f7 *self, s32 a, s32 t) {
    s16 *p96 = &self->rotX;
    s16 *p98 = &self->rotY;
    s16 *p9a = &self->rotZ;
    switch (t) {
    case 0xa:
    case 0xb:
    case 0x2d:
    case 0x2e:
    case 0x2f:
    case 0x30:
        *p9a = *p9a + 0x7fff;
        *p98 = -a;
        *p96 = *p96 + 0x4000;
        break;
    case 0xf:
        *p9a = *p9a + 0x6000;
        *p98 = a;
        *p96 = *p96 + 0x4000;
        break;
    case 0x23:
    case 0x24:
    case 0x25:
        *p98 = a;
        break;
    case 0x35:
    case 0x36:
        *p96 = *p96 + 0x4000;
        *p98 = a;
        break;
    default:
        *p9a = *p9a + 0x4000;
        *p96 = a;
        *p96 = *p96 + 0x4000;
        break;
    }
}


//@ 0x2223134
extern "C" BOOL FishShadow_FleeFromPlayer(Obj_f7 *self) {
    BOOL r = FALSE;
    if (self == NULL) {
        return r;
    }
    void *p = PlayerActor_GetBodyPos(4);
    if (p == NULL) {
        return r;
    }
    if (((BOOL (*)(Obj_f7 *, void *))FishShadow_StartFlee)(self, p)) {
        r = TRUE;
    }
    return r;
}


//@ 0x2222fe4
extern "C" BOOL FishShadow_TryNoticeBobber(Obj_f7 *self) {
    s32 res = 0;
    FishBobber *e = ((FishBobber * (*)(void))FishBobber_GetFloating)();
    s32 who;
    Obj_f7 *p;
    s32 ok;
    s32 i;
    if (e == NULL) {
        return FALSE;
    }
    void *g = gCommManager;
    if (CommManager_isOnline(g)) {
        s32 t = e->ownerAid;
        if (t < 0) {
            return FALSE;
        }
        who = ((s32 *)g)[0x64 / 4];
        if (t != who) {
            return FALSE;
        }
    } else {
        who = 0;
    }
    p = ((Obj_f7 *)(sFishShadows));
    ok = 1;
    for (i = 0; i < 6; p++, i++) {
        if (self != p && who == p->playerIdx) {
            ok = 0;
            break;
        }
    }
    if (ok != 0) {
        V3_f7 v8;
        V3_f7 v14;
        V3_f7 *p120 = (V3_f7 *)&self->position;
        v14.x = p120->x;
        v14.y = p120->y;
        v14.z = p120->z;
        if (((BOOL (*)(V3_f7 *, s32, s32, s32))FishShadow_CanSeeBobber)(&v14, self->rotY, who, self->fishId)) {
            s32 sc = func_02133150(((u8 *)(sFishSizeClassParams))[self->sizeClass * 0x14] << 12, 100);
            V3_f7 *pv = (V3_f7 *)&e->pos;
            v8.x = e->pos.x;
            v8.y = pv->y;
            v8.z = pv->z;
            if (FieldFish_IsCastSplashActive() && ((BOOL (*)(V3_f7 *, V3_f7 *, s32, s32, s32))FieldFish_IsInBox)((V3_f7 *)&self->position, &v8, sc, sc, sc)) {
                if (self->moveState != 2) {
                    self->moveState = 2;
                }
                s32 r = FieldFish_RandRangeSigned(0x5000, 0x7fff);
                self->rotY = self->rotY + (s16)r;
                self->cruiseTimer = 0x14;
            } else {
                self->playerIdx = (s8)who;
                self->bobber = e;
                ((void (*)(FishBobber *, void *))FishBobber_setFish)(e, self);
                res = 1;
                self->aiMode = 1;
            }
        }
        FieldFish_TickCastSplash();
    }
    return res;
}


//@ 0x2222f28
extern "C" BOOL FishShadow_CanSeeBobber(void *self, s32 a1, s32 a2, s32 a3)
{
    volatile BOOL result = FALSE;
    u8 *p, *p2;
    u32 vw;
    volatile u16 *pp;
    BOOL k;
    u32 a, b;
    s32 idx;
    s32 off;
    s32 val;
    FishRodParams *t;

    p = (u8 *)FishBobber_GetFloating();
    if (p == 0) {
        return FALSE;
    }
    PlayerActor_GetSlotHeldItem((u16 *)&vw, a2);
    k = FALSE;
    pp = (volatile u16 *)&vw;
    a = *pp;
    b = *pp;
    if (b >= 0x1374 && a <= 0x1374) {
        k = TRUE;
    }
    if (k) {
        idx = 0;
    } else if (a >= 0x1375 && a <= 0x1375) {
        idx = 1;
    } else {
        return FALSE;
    }
    p2 = p + 8;
    a3 = data_020ca315[a3 * 6] * 4;
    off = a3;
    t = &((FishRodParams *)(sFishRodParams))[idx];
    val = (t->p[off] << 12) / 10;
    if (((s32 (*)(void *, void *, s32, s32, s32))FieldFish_IsInBox)(self, p2, val, val, val)) {
        s32 lim = *(s16 *)(t->p + off + 2);
        if (Math_AngleDiffAbs(Math_AngleXZ(self, p2), a1) <= lim) {
            result = TRUE;
        }
    }
    return result;
}


//@ 0x2222f1c
extern "C" void FieldFish_StartCastSplash()
{
    sFishCastSplashTimer = 10;
}


//@ 0x2222f08
extern "C" BOOL FieldFish_IsCastSplashActive()
{
    if (sFishCastSplashTimer != 0) {
        return TRUE;
    }
    return FALSE;
}


//@ 0x2222ef4
extern "C" void FieldFish_TickCastSplash()
{
    if (sFishCastSplashTimer != 0) {
        sFishCastSplashTimer--;
    }
}


//@ 0x2222d9c
extern "C" BOOL FishShadow_Land(Obj_f6 *self, u32 k)
{
    s32 idx;
    Ent_f6 *e;
    V3_f6 *pv;
    V3_f6 loc;
    u8 buf[7];
    u8 tmp[5];
    void *s;
    u32 sel;
    s32 h;
    V3_f6 *q;
    BOOL z;

    self->alpha = 1;
    idx = self->playerIdx;
    z = FALSE;
    if (idx == -1) {
        return z;
    }
    e = (Ent_f6 *)((u8 *)((Ent_f6 *)(sFishCatches)) + idx * 0xa4);
    e->state = 1;
    e->mode = 1;
    pv = (V3_f6 *)&self->position;
    q = &e->arcPointA;
    q->x = pv->x;
    q->y = pv->y;
    q->z = pv->z;
    e->shadowIndex = k;
    h = self->fishId;
    e->fishId = h;
    sel = self->sizeClass;
    loc.x = pv->x;
    loc.y = pv->y;
    loc.z = pv->z;
    switch (sel) {
    case 0:
        ((s32 (*)(s32, V3_f6 *, s32, s32))Effect_Create)(0x12, &loc, z, z);
        break;
    case 1:
        ((s32 (*)(s32, V3_f6 *, s32, s32))Effect_Create)(0x13, &loc, z, z);
        break;
    case 2:
        ((s32 (*)(s32, V3_f6 *, s32, s32))Effect_Create)(0x14, &loc, z, z);
        break;
    case 3:
        ((s32 (*)(s32, V3_f6 *, s32, s32))Effect_Create)(0x15, &loc, z, z);
        break;
    case 4:
        ((s32 (*)(s32, V3_f6 *, s32, s32))Effect_Create)(0x16, &loc, z, z);
        break;
    case 5:
        ((s32 (*)(s32, V3_f6 *, s32, s32))Effect_Create)(0x17, &loc, z, z);
        break;
    case 6:
        ((s32 (*)(s32, V3_f6 *, s32, s32))Effect_Create)(0x19, &loc, z, z);
        break;
    case 7:
        ((s32 (*)(s32, V3_f6 *, s32, s32))Effect_Create)(0x18, &loc, z, z);
        break;
    }
    buf[0] = 0;
    buf[1] = h;
    NetBuf_PackPair20(tmp, self->position.x, self->position.z);
    MI_CpuCopy8(tmp, &buf[2], 5);
    s = gCommManager;
    CommManager_beginRecord(s);
    CommManager_writeRecord(s, buf, 7);
    CommManager_endRecord(s, 0x2a, 4);
    return TRUE;
}


//@ 0x2222d48
extern "C" BOOL FishShadow_LoseBobber(Obj_f6 *self)
{
    void *p = self->bobber;
    if (p == 0) {
        return FALSE;
    }
    self->biteStepTimer = 0;
    self->playerIdx = -1;
    ((void (*)(void *, s32))FishBobber_setFish)(p, 0);
    self->bobber = 0;
    self->aiMode = 0;
    self->biteState = 7;
    self->stateTimer = 0;
    return TRUE;
}


//@ 0x2222d28
extern "C" s32 FishShadow_GetEdgeColumn(Obj_f6 *self)
{
    s32 r = 2;
    s32 t = self->position.x >> 17;
    if (t == 0) {
        r = 0;
    } else if (t == 5) {
        r = 1;
    }
    return r;
}


//@ 0x2222ce0
extern "C" BOOL FishShadow_IsSeaNorth(Obj_f6 *self)
{
    BOOL r = FALSE;
    s32 x, y;
    V3_f6 p;
    V3_f6 *pv = (V3_f6 *)&self->position;
    p.x = pv->x;
    p.y = pv->y;
    p.z = pv->z;
    p.z = p.z - 0x2000;
    ((void (*)(s32 *, s32 *, V3_f6 *))FieldPos_ToUnit)(&x, &y, &p);
    if (Ground_GetWaterKind(x, y) == 1) {
        r = TRUE;
    }
    return r;
}


//@ 0x2222b1c
extern "C" s32 FishShadow_CheckWaterBounds(Obj_f6 *self)
{
    s32 r = 0;
    s32 x, y;
    ((void (*)(s32 *, s32 *, V3_f6 *))FieldPos_ToUnit)(&x, &y, (V3_f6 *)&self->position);
    switch (self->habitat) {
    case 0:
    case 1:
    case 2:
    case 3:
        if (FishShadow_IsProbeOutOfWater(self)) {
            COPY();
            r = 1;
        } else if (Ground_GetWaterKind(x, y) == 1) {
            COPY();
            r = 3;
        }
        break;
    case 4:
        goto dflt;
    case 5:
    case 6: {
        s32 t = FishShadow_GetEdgeColumn(self);
        if (t == 0) {
            r = 6;
        } else if (t == 1) {
            r = 7;
        } else if (FishShadow_IsProbeOutOfWater(self)) {
            COPY();
            r = 2;
        } else if (Ground_GetWaterKind(x, y) != 1) {
            COPY();
            r = 4;
        } else if (FishShadow_IsSeaNorth(self)) {
            r = 5;
        }
        break;
    }
    default:
    dflt:
        if (Ground_GetWaterKind(x, y) == 2) {
            if (FishShadow_IsProbeOutOfWater(self)) {
                COPY();
                r = 1;
            }
        } else if (Ground_GetWaterKind(x, y) == 1) {
            s32 t = FishShadow_GetEdgeColumn(self);
            if (t == 0) {
                r = 6;
            } else if (t == 1) {
                r = 7;
            } else if (FishShadow_IsProbeOutOfWater(self)) {
                COPY();
                r = 2;
            } else if (FishShadow_IsSeaNorth(self)) {
                r = 5;
            }
        } else {
            COPY();
            r = 1;
        }
        break;
    }
    return r;
}


//@ 0x2222a38
extern "C" BOOL FishShadow_IsProbeOutOfWater(Obj_f6 *self)
{
    BOOL r = TRUE;
    s32 a, b, c;
    FishShadow_GetProbeGroundKinds(self, &a, &b, &c);
    switch (self->habitat) {
    case 0:
    case 1:
    case 2:
    case 3:
        if ((a >= 0xb && a <= 0x12) || a == 7 || a == 0x14) {
            if ((b >= 0xb && b <= 0x12) || b == 7 || b == 0x14) {
                if ((c >= 0xb && c <= 0x12) || c == 7 || c == 0x14) {
                    r = FALSE;
                }
            }
        }
        break;
    case 4:
        goto dflt;
    case 5:
    case 6:
        if (a == 8 || a == 0x17) {
            if (b == 8 || b == 0x17) {
                if (c == 8 || c == 0x17) {
                    r = FALSE;
                }
            }
        }
        break;
    default:
    dflt:
        if ((a >= 0xb && a <= 0x12) || a == 8 || a == 7 || a == 0x14) {
            if ((b >= 0xb && b <= 0x12) || b == 8 || b == 7 || b == 0x14) {
                if ((c >= 0xb && c <= 0x12) || c == 8 || c == 7 || c == 0x14) {
                    r = FALSE;
                }
            }
        }
        break;
    }
    return r;
}


//@ 0x22228dc
extern "C" void FishShadow_GetProbeGroundKinds(Obj_f6 *self, s32 *o1, s32 *o2, s32 *o3)
{
    V3_f6 v0, v1, v2;
    GroundInfo g0, g1, g2;
    s16 ang;
    s32 r;
    s32 z0, z1, z2;
    s32 i0, i1, i2;

    ang = self->rotY;
    i0 = ((u16)(s16)(ang + 0x2000) >> 4) * 2;
    r = *(u16 *)(((u8 *)((u8 *)&sFishSizeClassParams[0].g)) + self->sizeClass * 0x14);
    z0 = self->position.z + (r * data_02135f44[i0 + 1]) / 100;
    v0.x = self->position.x + (r * data_02135f44[i0]) / 100;
    v0.y = -0x1333;
    v0.z = z0;
    i1 = ((u16)(s16)(ang - 0x2000) >> 4) * 2;
    z1 = self->position.z + (r * data_02135f44[i1 + 1]) / 100;
    v1.x = self->position.x + (r * data_02135f44[i1]) / 100;
    v1.y = -0x1333;
    v1.z = z1;
    i2 = ((u16)self->rotY >> 4) * 2;
    z2 = self->position.z + (r * data_02135f44[i2 + 1]) / 100;
    v2.x = self->position.x + (r * data_02135f44[i2]) / 100;
    v2.y = -0x1333;
    v2.z = z2;
    GroundInfo_initAtPos(&g0, &v0, 0, 0);
    GroundInfo_initAtPos(&g1, &v1, 0, 0);
    GroundInfo_initAtPos(&g2, &v2, 0, 0);
    *o1 = g0.attr;
    *o2 = g1.attr;
    *o3 = g2.attr;
}


//@ 0x22228b0
extern "C" void FishCroak_Update(FishCroak *s, Obj_f6 *o)
{
    switch (s->b3) {
    case 0:
        FishCroak_Idle(s, o);
        break;
    case 1:
        FishCroak_Listen(s, o);
        break;
    case 2:
        FishCroak_Croak(s, o);
        break;
    }
}


//@ 0x222285c
extern "C" void FishCroak_Idle(FishCroak *s, Obj_f6 *o)
{
    s32 t;
    if (s->b0 != 0) {
        s->b0 = s->b0 - 3;
        if (s->b0 < 0xa) {
            s->b0 = 0;
        }
    }
    if (s->b2 != 0) {
        s->b2 = s->b2 - 1;
    }
    t = ((s32 (*)(s32))PlayerActor_GetBodyPos)(0);
    if (t != 0) {
        if (((s32 (*)(s32, void *))Vec_DistXZ)(t, &o->position) < 0x8000) {
            s->b3 = 1;
        }
    }
}


//@ 0x22227dc
extern "C" void FishCroak_Listen(FishCroak *s, Obj_f6 *o)
{
    s32 t;
    if (s->b2 != 0) {
        s->b2 = s->b2 - 1;
    }
    t = ((s32 (*)(s32))PlayerActor_GetBodyPos)(0);
    if (t != 0) {
        if (((s32 (*)(s32, void *))Vec_DistXZ)(t, &o->position) >= 0x8000) {
            s->b3 = 0;
            return;
        }
    }
    if (((s32 (*)(s32))FieldFish_IsPlayerRunning)(0)) {
        s->b0 = s->b0 + 1;
        if (s->b0 >= 0xc8) {
            s->b0 = 0xc8;
        }
    } else {
        if (s->b0 != 0) {
            s->b0 = s->b0 - 1;
        }
        if (s->b0 <= 0x96) {
            if (s->b2 == 0) {
                s->b1 = ((s32 (*)(s32, s32))FieldFish_RandRange)(0x3c, 0x8c);
                s->b3 = 2;
            }
        }
    }
}


//@ 0x2222770
extern "C" void FishCroak_Croak(FishCroak *s, Obj_f6 *o)
{
    if (s->b1 != 0) {
        s->b1 = s->b1 - 1;
        SndEnvChannel_callRequest(o->envChannel, 0x82f);
    } else {
        s->b2 = ((s32 (*)(s32, s32))FieldFish_RandRange)(0x14, 0x50);
        s->b3 = 1;
    }
    if (((s32 (*)(s32))FieldFish_IsPlayerRunning)(0)) {
        s->b2 = ((s32 (*)(s32, s32))FieldFish_RandRange)(0x14, 0x28);
        s->b3 = 1;
        s->b1 = 0;
        s->b0 = s->b0 + 1;
        if (s->b0 >= 0xc8) {
            s->b0 = 0xc8;
        }
    } else if (s->b0 != 0) {
        s->b0 = s->b0 - 1;
    }
}


//@ 0x2222764
extern "C" s32 FishCroak_Clear(FishCroak *s)
{
    s->b0 = 0;
    s->b1 = 0;
    s->b2 = 0;
    s->b3 = 0;
}


//@ 0x2222754
extern "C" s32 FishShadow_ResetCroak(Obj_f6 *self)
{
    return FishCroak_Clear(&self->croak);
}


//@ 0x2222658
extern "C" void FishCatch_Update(FishCatch *self, void *arg)
{
    V3_f6 a, b;
    if (((s32 (*)(void *))BottleThrow_IsActive)(arg)) {
        V3_f6 *p = ((V3_f6 * (*)(void *))BottleThrow_GetPos)(arg);
        a.x = p->x;
        a.y = p->y;
        a.z = p->z;
        b = a;
        ((void (*)(void *, V3_f6 *))SndSeEmitter_callUpdateRelative)(self, &a);
        if (((s32 (*)(void *))BottleThrow_GetSeCue)(arg) == 1) {
            Snd_SeEmitterPlayOneShot(self, 0x7e0, 0x7f, 0);
        } else if (((s32 (*)(void *))BottleThrow_GetSeCue)(arg) == 2) {
            Snd_SeEmitterPlayOneShot(self, 0x7e1, 0x7f, 0);
            b.y = data_020c7c1c;
            ((s32 (*)(s32, V3_f6 *, s32, s32))Effect_Create)(0x15, &b, 0, 0);
        }
    } else {
        a.x = self->position.x;
        a.y = self->position.y;
        a.z = self->position.z;
        ((void (*)(void *, V3_f6 *))SndSeEmitter_callUpdateRelative)(self, &a);
    }
    if (sFishCatchStates[self->state].f) {
        (self->*sFishCatchStates[self->state].f)(arg);
    }
    {
        void *s = gCommManager;
        if (((s32 (*)(void *))CommManager_isOnline)(s)) {
            if (((s32 (*)(void *, void *))CommManager_isMyAid)(s, arg) == 0) {
                if (self->state == 4) {
                    ((s32 (*)(void *, s32, s32, s32, s32))FishDisplay_PostRequest)(arg, 8, -1, 0, 0);
                }
            }
        }
    }
}


//@ 0x2222654
extern "C" s32 FishCatch_StateIdle()
{
    return 1;
}


//@ 0x22225b4
extern "C" BOOL FishCatch_StateStart(Self_f5 *self, u32 a) {
    if (self->displayHandle != -1) {
        return FALSE;
    }
    self->displayHandle = FishDisplay_Acquire();
    if (self->mode != 5) {
        ((void (*)(V3_f5 *, s32))Fish_GetDisplayScale)(&self->scale, self->fishId);
    }
    if (self->mode == 1) {
        if (!FishCatch_SetupLine(self, a)) {
            return FALSE;
        }
    } else if (self->mode == 2) {
        if (!FishCatch_SetupLine(self, a)) {
            return FALSE;
        }
        Ent_f5 *e = ((Ent_f5 * (*)(u32))PlayerActor_GetActor)(a);
        if (e != NULL) {
            u32 f = e->actorFlags;
            if (Unk_ov003_02222490_Bit(f, 4) && Unk_ov003_02222490_Bit(f, 2)) {
                self->state = 2;
                return TRUE;
            }
        }
    }
    self->state = 3;
    return TRUE;
}


//@ 0x2222504
extern "C" BOOL FishCatch_SetupLine(Self_f5 *self, u32 a) {
    struct {
        VecFx32Ctor dead;
        T48_f5 t;
        V3_f5 d, w;
        T48_f5 blk;
        V3_f5 y, z;
    } l;
    if (a >= 4) {
        self->state = 4;
        return FALSE;
    }
    if (((Ent_f5 * (*)(u32))PlayerActor_GetCharacter)(a) == NULL) {
        self->state = 4;
        return FALSE;
    }
    PlayerActor_GetHandMtx(&l.blk, a);
    l.t = l.blk;
    l.d.x = 0x800;
    l.d.y = 0;
    l.d.z = 0;
    PlayerActor_ApplyHoldOffset(&l.t, &l.d);
    l.w.x = ((V3_f5 *)((u8 *)&l.t + 0x24))->x;
    l.w.y = ((V3_f5 *)((u8 *)&l.t + 0x24))->y;
    l.w.z = ((V3_f5 *)((u8 *)&l.t + 0x24))->z;
    WorldCurve_FromCurved(&l.w, &l.w);
    CP(l.dead, l.w);
    CP(l.y, l.w);
    CP(l.z, self->arcPointA);
    Fishing_CalcArcSpeed(&l.y, &l.z, &self->gravity, &self->ySpeed, 3);
    CP(self->position, self->arcPointA);
    return TRUE;
}


//@ 0x2222490
extern "C" BOOL FishCatch_StateHold(Self_f5 *self, u32 a) {
    BOOL r = FALSE;
    struct Pad {
        s32 v[3];
        Pad() {}
        ~Pad() {}
    } pad;
    Ent_f5 *e = ((Ent_f5 * (*)(u32))PlayerActor_GetCharacter)(a);
    if (e == NULL) {
        self->state = 4;
        return r;
    }
    u32 f = e->actorFlags;
    if (Unk_ov003_02222490_Bit(f, 4) && Unk_ov003_02222490_Bit(f, 2)) {
        V3_f5 v;
        V3_f5 *pv = (V3_f5 *)&e->position;
        v.x = pv->x;
        v.y = pv->y;
        v.z = pv->z;
        CP(self->position, v);
        CP(self->arcPointB, v);
    } else {
        r = TRUE;
        self->isLanded = r;
        self->state = 3;
    }
    return r;
}


//@ 0x22223e8
extern "C" BOOL FishCatch_StateUpdate(Self_f5 *self, u32 a) {
    s32 r5 = 0x1e;
    BOOL r6 = FALSE;
    switch (self->mode) {
    case 0:
        break;
    case 1:
        FishCatch_UpdateLocalReel(self, a);
        r6 = TRUE;
        break;
    case 2:
        FishCatch_UpdateRemoteReel(self, a);
        r6 = TRUE;
        break;
    case 3:
        FishCatch_UpdateArc(self, TRUE);
        break;
    case 4:
        FishCatch_UpdateArc(self, r6);
        break;
    case 5: {
        Ent_f5 *e = ((Ent_f5 * (*)(u32))PlayerActor_GetActor)(a);
        if (e == NULL) {
            self->state = 4;
            return r6;
        }
        FishCatch_UpdateSwimAway(self, (V3_f5 *)&e->position);
        r5 = r5 - self->moveFrame;
        if (r5 < 1) {
            r5 = 1;
        }
        break;
    }
    }
    FishDisplay_SetEntry(self->displayHandle, self->fishId, &self->position, &self->scale, self->rotX, self->rotY, self->rotZ, 1, r6, r5);
    return TRUE;
}


//@ 0x2222368
extern "C" BOOL FishCatch_UpdateLocalReel(Self_f5 *self, u32 a) {
    BOOL r = FALSE;
    if (self->isLanded == 0) {
        Ent_f5 *e = ((Ent_f5 * (*)(u32))PlayerActor_GetCharacter)(a);
        if (e == NULL) {
            self->state = 4;
            return r;
        }
        V3_f5 t;
        FishCatch_GetLineEnd(self, e, &t);
        r = TRUE;
        V3_f5 u;
        CP(u, t);
        if (Fishing_StepArc(&u, self->gravity, &self->position.x, &self->ySpeed, r)) {
            self->isLanded = r;
            CP(self->arcPointB, t);
        }
    } else if (self->storedSent == 0) {
        ((void (*)(Self_f5 *, u32))FishCatch_IsDisplayReady)(self, a);
        r = TRUE;
    }
    return r;
}


//@ 0x22222a0
extern "C" BOOL FishCatch_UpdateRemoteReel(Self_f5 *self, u32 a) {
    BOOL r;
    struct {
        V3_f5 t;
        T48_f5 tt;
        V3_f5 w, u;
        T48_f5 blk;
    } l;
    Ent_f5 *e = ((Ent_f5 * (*)(u32))PlayerActor_GetCharacter)(a);
    if (e == NULL) {
        self->state = 4;
        return FALSE;
    }
    if (self->isLanded == 0) {
        FishCatch_GetLineEnd(self, e, &l.t);
        r = TRUE;
        CP(l.u, l.t);
        if (Fishing_StepArc(&l.u, self->gravity, &self->position.x, &self->ySpeed, r)) {
            self->isLanded = r;
            CP(self->arcPointB, l.t);
        }
    } else {
        ((void (*)(Self_f5 *, u32))FishCatch_IsDisplayReady)(self, a);
        PlayerActor_GetHandMtx(&l.blk, a);
        l.tt = l.blk;
        PlayerActor_ApplyHoldOffset(&l.tt, 0);
        l.w.x = ((V3_f5 *)((u8 *)&l.tt + 0x24))->x;
        l.w.y = ((V3_f5 *)((u8 *)&l.tt + 0x24))->y;
        l.w.z = ((V3_f5 *)((u8 *)&l.tt + 0x24))->z;
        WorldCurve_FromCurved(&l.w, &l.w);
        CP(self->position, l.w);
        CP(self->arcPointB, l.w);
        r = TRUE;
    }
    return r;
}


//@ 0x2222274
extern "C" BOOL FishCatch_StateEnd(Self_f5 *self, s32 a) {
    if (self->mode == 1 || self->mode == 3) {
        FishCatch_DetachShadow(self);
    }
    FishCatch_Reset(self, a);
    return TRUE;
}


//@ 0x2222224
extern "C" BOOL FishCatch_DetachShadow(Self_f5 *self) {
    BOOL r = FALSE;
    s32 i = self->shadowIndex;
    if (i != -1) {
        FishShadow *p = &((FishShadow *)(sFishShadows))[i];
        if (p->bobber != 0) {
            p->bobber = (FishBobber *)r;
        }
        p->playerIdx = -1;
        p->aiMode = 0;
        p->biteState = 0;
        r = TRUE;
    }
    return r;
}


//@ 0x22221a0
extern "C" void FishCatch_Reset(Self_f5 *self, s32 a) {
    FishDisplay_Release(self->displayHandle);
    self->displayHandle = -1;
    self->state = 0;
    self->shadowIndex = -1;
    self->isLanded = 0;
    self->storedSent = 0;
    self->moveFrame = 0;
    self->scale.x = 0x1333;
    self->scale.y = 0x1333;
    self->scale.z = 0x1333;
    self->rotX = 0;
    self->rotY = 0;
    self->rotZ = 0;
    Effect_End(self->effectHandle);
    self->effectHandle = -1;
    if (self->swimAwayPending) {
        FishCatch_StartSwimAway(self, a);
    }
}


//@ 0x2221f40
extern "C" s32 FishCatch_StartSwimAway(Self_f5 *self, s32 a) {
    self->state = 1;
    self->swimAwayPending = 0;
    s32 k = self->fishId * 6;
    s32 t = data_020ca314[k];
    s32 r = t * 0x14;
    self->scale.x = (((u8 *)((u8 *)&sFishSizeClassParams[0].shadowScaleX))[r] << 12) / 100;
    self->scale.y = 0x1000;
    self->scale.z = (((u8 *)((u8 *)&sFishSizeClassParams[0].shadowScaleZ))[r] << 12) / 100;
    self->position.y = data_020c7c1c;
    self->fishId = 0x3b;
    V3_f5 v;
    v.x = self->position.x;
    v.y = self->position.y;
    v.z = self->position.z;
    s32 *h = &self->effectHandle;
    switch (t) {
    case 0:
        ((s32 (*)(s32, V3_f5 *, s32, s32))Effect_Create)(0x12, &v, 0, 0);
        *h = ((s32 (*)(s32, V3_f5 *, s32, s32))Effect_Create)(0x1a, &v, 0, 0);
        Snd_SeEmitterPlayOneShot(self, 0x7e2, 0x7f, 0);
        break;
    case 1:
        ((s32 (*)(s32, V3_f5 *, s32, s32))Effect_Create)(0x13, &v, 0, 0);
        *h = ((s32 (*)(s32, V3_f5 *, s32, s32))Effect_Create)(0x1b, &v, 0, 0);
        Snd_SeEmitterPlayOneShot(self, 0x7e2, 0x7f, 0);
        break;
    case 2:
        ((s32 (*)(s32, V3_f5 *, s32, s32))Effect_Create)(0x14, &v, 0, 0);
        *h = ((s32 (*)(s32, V3_f5 *, s32, s32))Effect_Create)(0x1c, &v, 0, 0);
        Snd_SeEmitterPlayOneShot(self, 0x7e2, 0x7f, 0);
        break;
    case 3:
        ((s32 (*)(s32, V3_f5 *, s32, s32))Effect_Create)(0x15, &v, 0, 0);
        *h = ((s32 (*)(s32, V3_f5 *, s32, s32))Effect_Create)(0x1d, &v, 0, 0);
        Snd_SeEmitterPlayOneShot(self, 0x7e3, 0x7f, 0);
        break;
    case 4:
        ((s32 (*)(s32, V3_f5 *, s32, s32))Effect_Create)(0x16, &v, 0, 0);
        *h = ((s32 (*)(s32, V3_f5 *, s32, s32))Effect_Create)(0x1e, &v, 0, 0);
        Snd_SeEmitterPlayOneShot(self, 0x7e3, 0x7f, 0);
        break;
    case 5:
        ((s32 (*)(s32, V3_f5 *, s32, s32))Effect_Create)(0x17, &v, 0, 0);
        *h = ((s32 (*)(s32, V3_f5 *, s32, s32))Effect_Create)(0x1f, &v, 0, 0);
        Snd_SeEmitterPlayOneShot(self, 0x7e4, 0x7f, 0);
        break;
    case 6:
        ((s32 (*)(s32, V3_f5 *, s32, s32))Effect_Create)(0x19, &v, 0, 0);
        *h = ((s32 (*)(s32, V3_f5 *, s32, s32))Effect_Create)(0x21, &v, 0, 0);
        Snd_SeEmitterPlayOneShot(self, 0x7e4, 0x7f, 0);
        break;
    case 7:
        ((s32 (*)(s32, V3_f5 *, s32, s32))Effect_Create)(0x18, &v, 0, 0);
        *h = ((s32 (*)(s32, V3_f5 *, s32, s32))Effect_Create)(0x20, &v, 0, 0);
        Snd_SeEmitterPlayOneShot(self, 0x7e3, 0x7f, 0);
        break;
    }
    self->mode = 5;
    void *g = gCommManager;
    if (CommManager_isOnline(g)) {
        if (CommManager_isMyAid(g, a)) {
            ((s32 (*)(void *, s32))FieldFish_ScareAround)(&v, ((*(u8 * *)(sFishRodParams))[data_020ca315[k] * 4] << 12) / 10);
        }
    } else {
        ((s32 (*)(void *, s32))FieldFish_ScareAround)(&v, ((*(u8 * *)(sFishRodParams))[data_020ca315[k] * 4] << 12) / 10);
    }
}


//@ 0x2221e64
extern "C" void FishCatch_UpdateArc(Self_f5 *self, BOOL flag) {
    struct {
        V3_f5 a, b, c, a2, b2, a3, b3;
    } l;
    s32 n;
    if (flag) {
        CP(l.a, self->arcPointB);
        CP(l.b, self->arcPointA);
        l.b.y = l.b.y - 0x1800;
        n = 0x14;
    } else {
        CP(l.a, self->arcPointA);
        CP(l.b, self->arcPointB);
        l.b.y = l.b.y - l.a.y;
        n = 0x14;
    }
    CP(l.c, self->position);
    CP(l.a2, l.a);
    CP(l.b2, l.b);
    if (((BOOL (*)(V3_f5 *, V3_f5 *, V3_f5 *))FieldFish_HasPassed)(&l.c, &l.a2, &l.b2)) {
        self->state = 4;
        self->swimAwayPending = 1;
    } else {
        CP(l.a3, l.a);
        CP(l.b3, l.b);
        if (!FieldFish_StepParabola(&self->position, &l.a3, &l.b3, self->moveFrame, 0x14cd, n)) {
            self->state = 4;
            self->swimAwayPending = 1;
        }
        self->moveFrame = self->moveFrame + 1;
    }
}


//@ 0x2221dd8
extern "C" BOOL FieldFish_StepParabola(V3_f5 *p, V3_f5 *a, V3_f5 *b, s32 n, s32 k, s32 m) {
    s32 mm, y, ang;
    volatile s32 t, d;
    if (m <= n) {
        return FALSE;
    }
    y = b->y;
    mm = m * m;
    t = ((k - (y >> 1)) << 3) / mm;
    d = Vec_DistXZ(a, b);
    ang = ((s32 (*)(V3_f5 *, V3_f5 *))Math_AngleXZ)(a, b);
    s32 nn = n * n;
    p->y = a->y + (n * ((y + ((mm * t) >> 1)) / m) - ((nn * t) >> 1));
    ((s32 (*)(void *, s32, s32))FieldFish_MoveXZ)(p, d / m, ang);
    return TRUE;
}


//@ 0x2221d60
extern "C" BOOL FishCatch_UpdateSwimAway(Self_f5 *self, V3_f5 *p) {
    s32 c = self->moveFrame;
    s32 t = (c + 2) << 7;
    if (c == 0) {
        self->rotY = ((s32 (*)(V3_f5 *, V3_f5 *))Math_AngleXZ)(p, &self->position);
    } else if (c >= 0x1e) {
        self->state = 4;
    }
    if (t > 0x214) {
        t = 0x214;
    }
    ((s32 (*)(void *, s32, s32))FieldFish_MoveXZ)(&self->position, t, self->rotY);
    self->moveFrame = self->moveFrame + 1;
    V3_f5 v;
    v.x = self->position.x;
    v.y = self->position.y;
    v.z = self->position.z;
    v.y = data_020c7c1c;
    ((void (*)(s32, V3_f5 *, s32, s32))Effect_SetPosition)(self->effectHandle, &v, 0, 0);
    return TRUE;
}


//@ 0x2221cec
extern "C" void FishCatch_GetLineEnd(Self_f5 *self, Ent_f5 *ent, V3_f5 *out) {
    if (ent->getHeldItemPos((VecFx32 *)out) == 0) {
        V3_f5 *pv = (V3_f5 *)&ent->position;
        out->x = pv->x;
        out->y = pv->y;
        out->z = pv->z;
    } else {
        s32 ang = Math_Atan2(self->position.x - out->x, self->position.z - out->z);
        s32 idx = ((u16)ang >> 4) * 2;
        out->x += func_01ffcb0c(0x4cd, data_02135f44[idx]);
        out->z += func_01ffcb0c(0x4cd, data_02135f44[idx + 1]);
    }
}


//@ 0x2221bfc
extern "C" void FishCatch_PollRemote(void *a) {
    s32 i = 0;
    void *net = gCommManager;
    volatile s32 zero = 0;
    s32 m1 = -1;
    s32 z = 0;
    for (; i < 4; i++) {
        if (CommManager_isMyAid(net, i) == 0) {
            u32 t = FishDisplay_GetRequestKind(i);
            if (t == 9) {
                t = 1;
            }
            switch (t) {
            case 0:
                FishCatch_StartRemoteHook(a, i);
                break;
            case 6:
                sFishCatches[i].isLanded = 1;
                FishCatch_StartRemoteHook(a, i);
                break;
            case 1:
                if (FishCatch_EndRemote(a, i)) {
                    ((void (*)(u8, s32, s32, s32, s32))FishDisplay_PostRequest)(i, 8, m1, z, z);
                } else {
                    sFishCatches[i].state = 4;
                }
                break;
            case 2:
                if (FishCatch_StartRemoteLift(a, i)) {
                    ((void (*)(u8, s32, s32, s32, s32))FishDisplay_PostRequest)(i, 8, m1, zero, zero);
                } else {
                    sFishCatches[i].state = 4;
                }
                break;
            case 3:
            case 4:
            case 5:
            case 7:
            case 8:
            case 9:
                break;
            }
        }
    }
}


//@ 0x2221b94
extern "C" void FishCatch_StartRemoteHook(void *a, s32 idx) {
    u32 r = FishDisplay_GetRequestFish(idx);
    VecFx32 v;
    v.y = -0x1333;
    if (FishDisplay_GetRequestPos(&v, &v.z, idx)) {
        if (FishCatch_StartRemoteReel(a, idx, r, &v)) {
            ((void (*)(u8, s32, s32, s32, s32))FishDisplay_PostRequest)(idx, 3, -1, 0, 0);
        } else {
            FishCatch *e = sFishCatches + idx;
            e->state = 4;
        }
    }
}


//@ 0x2221b78
extern "C" BOOL FishCatch_EndRemote(void *a, u8 idx) {
    if (idx >= 4) {
        return FALSE;
    }
    FishCatch *e = sFishCatches + idx;
    e->state = 4;
    return TRUE;
}


//@ 0x2221b34
extern "C" BOOL FishCatch_StartRemoteReel(void *a, u8 idx, u32 v, VecFx32 *p) {
    if (idx >= 4) {
        return FALSE;
    }
    FishCatch *e = &sFishCatches[idx];
    if (e->state != 0) {
        return FALSE;
    }
    VecFx32 *d = &e->arcPointA;
    d->x = p->x;
    d->y = p->y;
    d->z = p->z;
    s32 *p90 = &e->fishId;
    *p90 = v;
    e->state = 1;
    e->mode = 2;
    return TRUE;
}


//@ 0x2221ab0
extern "C" BOOL FishCatch_StartRemoteLift(void *a, u8 idx) {
    if (idx >= 4) {
        return FALSE;
    }
    FishCatch *e = &sFishCatches[idx];
    volatile VecFx32 v;
    VecFx32 *pv = &e->arcPointA;
    v.x = pv->x;
    v.y = pv->y;
    v.z = pv->z;
    s32 st = e->state;
    if (st == 3) {
        if (((s32 (*)(s32, s32))FishCatch_StartLift)(idx, 0) == 0) {
            e->state = 4;
            return FALSE;
        }
    } else if (st == 0) {
        if (((s32 (*)(s32, s32))FishCatch_StartLift)(idx, 1) == 0) {
            e->state = 4;
            return FALSE;
        }
    } else if (st == 2) {
        e->state = 3;
        if (((s32 (*)(s32, s32))FishCatch_StartLift)(idx, 0) == 0) {
            e->state = 4;
            return FALSE;
        }
    }
    return TRUE;
}


//@ 0x22219dc
FishShadow::FishShadow()
{
    u8 *a = (u8 *)this;
    SndSeEmitter_ctor(a);
    *(volatile u8 **)(a + 0x40) = data_0213b91c;
    *(volatile u8 **)(a + 0x40) = data_0213b954;
    _ZN14CollisionStateC1Ev(a + 0x4c);
    ModelSlotHandle_Init(a + 0x7c);
    _ZN11CachedModelC1Ev(a + 0x84);
    _ZN9AnimModelC1Ev(a + 0x144);
    *(u32 *)(a + 0x208) = 0;
    *(u32 *)(a + 0x20c) = 0;
    FishCroak_Init(a + 0x248);
    *(s8 *)(a + 0x7e) = -1;
    *(s32 *)(a + 0x244) = -1;
    *(s32 *)(a + 0x80) = 0;
    a[0x1fc] = 2;
    a[0x201] = 0;
    *(s32 *)(a + 0x204) = -1;
    *(s8 *)(a + 0x227) = -1;
    *(s32 *)(a + 0x22c) = 0;
    a[0x224] = 0;
    a[0x23c] = 0;
    *(s32 *)(a + 0x120) = 0x1000;
    *(s32 *)(a + 0x124) = 0x1000;
    *(s32 *)(a + 0x128) = 0x1000;
}


//@ 0x2221998
FishShadow::~FishShadow()
{
    u8 *a = (u8 *)this;
    FishCroak_Destroy(a + 0x248);
    _ZN9AnimModelD1Ev(a + 0x144);
    _ZN11CachedModelD1Ev(a + 0x84);
    ModelSlotHandle_Destroy(a + 0x7c);
    _ZN14CollisionStateD1Ev(a + 0x4c);
    SndSeEmitter_dtor(a);
}


//@ 0x222193c
FishFinModel::FishFinModel()
{
    attachState = 0;
    _ZN11PooledModel5resetEv(&pooledModel);
}


//@ 0x2221904
FishFinModel::~FishFinModel()
{
}


//@ 0x22218f8
extern "C" void FishCroak_Init(u8 *p) {
    p[0] = 0;
    p[1] = 0;
    p[2] = 0;
    p[3] = 0;
}


//@ 0x22218f4
extern "C" void FishCroak_Destroy(void *p) {
}


//@ 0x2221884
FishCatch::FishCatch()
{
    FishCatch *a = this;
    SndSeEmitter_ctor(a);
    a->state = 0;
    a->displayHandle = -1;
    a->mode = 0;
    a->shadowIndex = -1;
    a->isLanded = 0;
    a->moveFrame = 0;
    a->scale.x = 0x1333;
    a->scale.y = 0x1333;
    a->scale.z = 0x1333;
    a->swimAwayPending = 0;
    a->rotX = 0;
    a->rotY = 0;
    a->rotZ = 0;
    a->effectHandle = -1;
    a->storedSent = 0;
    a->position.x = 0x1000;
    a->position.y = 0x1000;
    a->position.z = 0x1000;
}


//@ 0x2221874
FishCatch::~FishCatch()
{
    SndSeEmitter_dtor(this);
}


//@ 0x222183c
FieldFishManager::FieldFishManager() {
    shadowAnimFile = 0;
}


//@ 0x22217d0
FieldFishManager::~FieldFishManager() {
}


//@ 0x22217ac
extern "C" BOOL FishShadow_SetAppearing(void *a, s32 idx) {
    BOOL r = FALSE;
    if (idx >= 0 && idx < 6) {
        FishShadow *s = ((FishShadow *)(sFishShadows)) + idx;
        s->state = 2;
        r = TRUE;
    }
    return r;
}


//@ 0x22216f8
extern "C" void FishShadow_Despawn(void *a, s32 idx) {
    if (idx >= 0 && idx < 6) {
        FishShadow *s = &((FishShadow *)(sFishShadows))[idx];
        s->state = 0;
        Effect_End(s->effectHandle);
        s->effectHandle = -1;
        if (s->spawnState == 0) {
            s->spawnState = 3;
        } else if (s->spawnState == 1) {
            s->spawnState = 4;
        }
        s32 *p208 = (s32 *)((u8 *)s + 0x208);
        p208[0] = idx;
        p208[1] = 0;
        if (s->bobber != 0) {
            FishCatch *ent = sFishCatches + s->playerIdx;
            if (ent->state != 1) {
                ((void (*)(void *, s32))FishBobber_setFish)(s->bobber, 0);
                s->bobber = 0;
                s->playerIdx = -1;
                s->aiMode = 0;
            }
            s->biteState = 0;
        }
    }
}


//@ 0x22216cc
extern "C" BOOL FishFinModel_Attach(u8 *a) {
    (*(u32 *)((u8 *)&sFishFinModel)) = 2;
    ((void (*)(void *, void *))ModelSlotPool_acquire)(a + 0x68, ((u8 *)((u8 *)&sFishFinModel.modelSlot.index)));
    PooledModel_reset(((u8 *)((u8 *)&sFishFinModel.pooledModel)));
    return TRUE;
}


//@ 0x2221684
extern "C" void FishFinModel_Release(u8 *a) {
    (*(u32 *)((u8 *)&sFishFinModel)) = 0;
    AnimModel_detachJointAnim(((u8 *)((u8 *)&sFishFinModel.model)));
    CachedModel_release(((u8 *)((u8 *)&sFishFinModel.model)));
    PooledModel_unload(((u8 *)((u8 *)&sFishFinModel.pooledModel)));
    ModelSlotPool_release(a + 0x68, ((u8 *)((u8 *)&sFishFinModel.modelSlot.index)));
    sFishFinModel.matAnim.anmObj = 0;
    sFishFinModel.matAnim.resMdl = 0;
}


//@ 0x2221524
BOOL FieldFishManager::onCreate() {
    u8 *a = (u8 *)this;
    ModelSlotPool_init(a + 0x50, 6, 0, 0, 0x800, (void *)FishShadowHeap_Create, (void *)FishShadowHeap_Destroy, (void *)"fish_sdw");
    ModelSlotPool_init(a + 0x68, 1, 0x400, 0x80, 0x800, (void *)FishFinHeap_Create, (void *)FishFinHeap_Destroy, (void *)"fish_fin");
    *(s32 *)(a + 0x80) = ((s32 (*)(u32, void *, s32, u32))File_LoadAlloc)((*(u32 *)((u8 *)&sFishShadowAnimPath)), gCurrentHeap, 4, 0);
    FishShadow *s = ((FishShadow *)(sFishShadows));
    s32 i = 0;
    s32 z = 0;
    do {
        ((void (*)(void *, s32, void *))FishShadow_LoadModel)(s, *(s32 *)(a + 0x80), a + 0x50);
        if (i < 3) {
            s->spawnState = 3;
        } else if (i < 6) {
            s->spawnState = 4;
        }
        s32 *p208 = &s->spawnBlock.x;
        p208[0] = i;
        p208[1] = z;
        *((u8 *)s + 0x211) = i;
        *(u16 *)((u8 *)s + 0x212) = i * 0x190 + 0x960;
        SndSeEmitter_callInit(s);
        SndEnvChannel_callReset((u8 *)s + 0x40);
        s++;
        i++;
    } while (i < 6);
    u8 *q = (u8 *)sFishCatches;
    s32 k = 0;
    void *net = gCommManager;
    for (; k < 4; k++) {
        if (CommManager_isOnline(net) && !CommManager_isMyAid(net, k) && FishDisplay_GetRequestKind(k) == 3) {
            ((void (*)(u8, s32, s32, s32, s32))FishDisplay_PostRequest)(k, 6, -1, z, z);
        }
        SndSeEmitter_callInit(q);
        q += 0xa4;
    }
    return TRUE;
}


//@ 0x2221498
extern "C" void FishShadow_Run(void *a, u8 *b, void *c) {
    VecFx32 v1;
    VecFx32 *pv = (VecFx32 *)(b + 0x120);
    v1.x = pv->x;
    v1.y = pv->y;
    v1.z = pv->z;
    ((void (*)(void *, VecFx32 *))SndSeEmitter_callUpdateRelative)(b, &v1);
    VecFx32 v2;
    pv = (VecFx32 *)(b + 0x120);
    v2.x = pv->x;
    v2.y = pv->y;
    v2.z = pv->z;
    SndEnvChannel_callUpdateRelative(b + 0x40, &v2);
    if (sFishShadowStates[*(s32 *)(b + 0x80)].exec) {
        (((FieldFishManager *)a)->*(sFishShadowStates[*(s32 *)(b + 0x80)].exec))(b, c);
    }
    ((void (*)(void *))FishShadow_TickRespawnTimer)(b);
}


//@ 0x222144c
extern "C" void FishShadow_ChangeState(void *a, s32 idx, u8 *b, void *c) {
    if (idx >= 0 && idx < 5) {
        *(s32 *)(b + 0x80) = idx;
        s32 i = *(volatile s32 *)(b + 0x80);
        FishShadowStateEntry *e = &sFishShadowStates[i];
        if (e->enter) {
            (((FieldFishManager *)a)->*(e->enter))(b, c);
        }
    }
}


//@ 0x2221448
extern "C" void FishShadow_EnterSpawn() {
}


//@ 0x22213d0
extern "C" void FishShadow_ExecSpawn(u8 *a, u8 *b, s32 c) {
    if (a[0x84] == 0) {
        u32 t = b[0x1fc];
        if (t == 3) {
            if (b[0x23c] == 0) {
                if (((s32 (*)(void *, void *, s32))FishShadow_TrySpawn)(a, b, 0) != 0) {
                    FishShadow_ChangeState(a, 1, b, (void *)c);
                }
                a[0x84] = 1;
            }
        } else if (t == 4) {
            if (b[0x23c] == 0) {
                if (((s32 (*)(void *, void *, s32))FishShadow_TrySpawn)(a, b, 1) != 0) {
                    FishShadow_ChangeState(a, 1, b, (void *)c);
                }
                a[0x84] = 1;
            }
        }
    }
}


//@ 0x22213cc
extern "C" void FishShadow_EnterWaitInView() {
}


//@ 0x2221364
extern "C" void FishShadow_ExecWaitInView(u8 *a, u8 *b, s32 c) {
    if ((*(void * *)&gCamera) != 0) {
        VecFx32 v;
        v = (*(VecFx32 *)&gCameraLookAt);
        if (((s32 (*)(void *, void *, s32, s32, s32))FieldFish_IsInBox)(b + 0x12c, &v, 0xa000, 0x10000, 0xa000)) {
            FishShadow_SetAppearing(a, c);
            if (b[0x7f] != 0) {
                FishFinModel_Attach(a);
            }
        }
    }
}


//@ 0x2221360
extern "C" void FishShadow_EnterAppear() {
}


//@ 0x2221294
extern "C" void FishShadow_ExecAppear(O_f3 *o, E_f3 *e) {
    s32 ang;
    V3_f3 *pv;
    if (e->hasFin != 0) {
        u8 *p = ((u8 *)((u8 *)&sFishFinModel));
        if (((s32 (*)(void *, void *))FishFinModel_Load)(p, (u8 *)o + 0x68) != 0) {
            ((s32 (*)(E_f3 *))FishShadow_RunAppearAi)(e);
            e->state = 3;
            e->alpha = 0x1f;
            pv = &e->position;
            ang = e->rotY;
            FieldFish_SetModelMatrix(o, pv, e->model, ang);
            p = p + 0x58;
            FieldFish_SetModelMatrix(o, pv, p, ang);
        }
    } else {
        ((s32 (*)(E_f3 *))FishShadow_RunAppearAi)(e);
        if (e->appearCount > 3 || e->moveState == 3) {
            e->state = 3;
            e->alpha = 0x1f;
            e->appearCount = 0;
            FieldFish_SetModelMatrix(o, &e->position, e->model, e->rotY);
            if (e->fishId == 11) {
                ((s32 (*)(E_f3 *))FishShadow_ResetCroak)(e);
            }
        }
    }
}


//@ 0x2221290
extern "C" void FishShadow_EnterOutOfView(void) {
}


//@ 0x22211fc
extern "C" void FishShadow_ExecOutOfView(O_f3 *o, E_f3 *e, s32 idx) {
    if ((*(void * *)&gCamera) != NULL) {
        V3_f3 v = (*(V3_f3 *)&gCameraLookAt);
        if (((s32 (*)(V3_f3 *, V3_f3 *, s32, s32, s32))FieldFish_IsInBox)(&e->position, &v, 0xa000, 0x10000, 0xa000) != 0) {
            e->state = 3;
            e->despawnTimer = -1;
        } else {
            s32 t = e->despawnTimer;
            s32 m = -1;
            if (t != m) {
                if (t == 0) {
                    if (e->hasFin != 0) {
                        ((s32 (*)(O_f3 *))FishFinModel_Release)(o);
                    }
                    ((s32 (*)(O_f3 *, s32))FishShadow_Despawn)(o, idx);
                } else {
                    e->despawnTimer = t - 1;
                }
            }
        }
    }
}


//@ 0x22211f8
extern "C" void FishShadow_EnterSwim(void) {
}


//@ 0x2221134
extern "C" void FishShadow_ExecSwim(O_f3 *o, E_f3 *e, s32 x) {
    ((s32 (*)(E_f3 *))FishShadow_RunAi)(e);
    V3_f3 *pb = &e->prevPosition;
    V3_f3 *pa = &e->position;
    s32 t = func_02133150(((u8 *)((u8 *)&sFishSizeClassParams[0].c0))[e->sizeClass * 0x14] << 12, 10);
    Collision_Move((u8 *)e + 0x4c, pa, pb, e->rotY, t, 0, 0xb);
    pb->x = e->position.x;
    pb->y = pa->y;
    pb->z = pa->z;
    V3_f3 v;
    v.x = e->position.x;
    v.y = pa->y;
    v.z = pa->z;
    v.y = -0x1333;
    FieldFish_SetModelMatrix(o, &v, e->model, e->rotY);
    if (e->hasFin != 0) {
        FishShadow_UpdateFin(o, e);
    } else {
        AnimModel_stepAnim(e->model);
    }
    FishShadow_UpdateVisibility(o, e, x);
}


//@ 0x22210a4
extern "C" void FishShadow_UpdateFin(O_f3 *o, E_f3 *e) {
    FishFinModel *p = (FishFinModel *)((u8 *)((u8 *)&sFishFinModel));
    V3_f3 *pv = &e->position;
    p->position.x = pv->x;
    p->position.y = pv->y;
    p->position.z = pv->z;
    s16 ang = e->rotY;
    p->rotY = ang;
    u8 *q = (u8 *)&p->model;
    *(s32 *)(q + 0xac) = e->animFrameStep;
    *(u32 *)(q + 0xa4) = (u32)(u16)(((Unk_ov003_022210a4_Bits *)&e->animFrame)->mid + 1) << 12;
    FieldFish_SetModelMatrix(o, pv, q, ang);
    AnimModel_stepAnim(e->model);
    AnimModel_stepAnim(q);
    FishFinMatAnim *r = &p->matAnim;
    AnimFrameCtrl_step(r);
    *(s32 *)r->anmObj = r->curFrame;
}


//@ 0x222105c
extern "C" void FieldFish_SetModelMatrix(O_f3 *a, void *b, void *dstv, s32 ang) {
    u8 *dst = (u8 *)dstv;
    V3_f3 v;
    s32 r = WorldCurve_Apply(&v);
    Mtx43_SetTranslate(data_021f47e0, v.x, v.y, v.z);
    Mtx43_RotateX(data_021f47e0, r);
    Mtx43_RotateY(data_021f47e0, ang);
    struct T { s32 v[12]; };
    *(T *)(dst + 0x64) = *(T *)data_021f47e0;
}


//@ 0x222101c
BOOL FieldFishManager::onExecute() {
    O_f3 *o = (O_f3 *)this;
    E_f3 *e = ((E_f3 *)(sFishShadows));
    s32 i;
    for (i = 0; i < 6; e = (E_f3 *)((u8 *)e + 0x24c), i++) {
        ((s32 (*)(O_f3 *, E_f3 *, s32))FishShadow_Run)(o, e, i);
    }
    o->spawnAttempted = 0;
    FieldFishManager_UpdatePlayers(o);
    return TRUE;
}


//@ 0x2220fc8
extern "C" void FieldFishManager_UpdatePlayers(O_f3 *o) {
    if (((s32 (*)(void *))CommManager_isOnline)(gCommManager) != 0) {
        ((s32 (*)(O_f3 *))FishCatch_PollRemote)(o);
    }
    s32 i;
    u8 *p = ((u8 *)(sFishCatches));
    u8 *q = ((u8 *)(sBottleThrows));
    for (i = 0; i < 4; i++) {
        ((s32 (*)(void *, u8))FishCatch_Update)(p, i);
        p += 0xa4;
        ((s32 (*)(void *, void *))BottleThrow_Run)(((u8 *)((u8 *)&sBottleThrowStateOwner)), q);
        q += 0x60;
    }
}


//@ 0x2220eec
BOOL FieldFishManager::onDraw() {
    E_f3 *e = ((E_f3 *)(sFishShadows));
    s32 i;
    for (i = 0; i < 6; i++) {
        if (e->state == 3) {
            FishSizeClassParams *rec = &((FishSizeClassParams *)(sFishSizeClassParams))[e->sizeClass];
            V3_f3 v;
            v.x = func_02133150(rec->shadowScaleX << 12, 100);
            v.y = 0x1000;
            v.z = func_02133150(rec->shadowScaleZ << 12, 100);
            u8 *p0 = (u8 *)e->modelResMdl;
            u8 *b = p0 + *(s32 *)(p0 + 8);
            u8 *c = b + *(u16 *)(b + 0xa);
            NNSG3dResMatData *q = (NNSG3dResMatData *)(b + *(s32 *)(c + 8));
            s32 n = e->alpha;
            if (q != NULL && n > 0) {
                q->polyAttr = q->polyAttr & 0xffe0ffff;
                q->polyAttr = q->polyAttr | ((n & 0x1f) << 16);
            }
            AnimModel_drawAnimated(e->model, &v);
            if (e->hasFin != 0) {
                V3_f3 v2;
                v2.x = func_02133150(rec->shadowScaleX << 12, 100);
                v2.y = 0x1000;
                v2.z = func_02133150(rec->shadowScaleZ << 12, 100);
                AnimModel_drawAnimated(((u8 *)((u8 *)&sFishFinModel.model)), &v2);
            }
        }
        e = (E_f3 *)((u8 *)e + 0x24c);
    }
    return TRUE;
}


//@ 0x2220ed0
BOOL FieldFishManager::onDelete() {
    O_f3 *o = (O_f3 *)this;
    FieldFishManager_FreeShadows(o);
    FieldFishManager_FreeCatches((s32)o);
    FieldFishManager_ResetBottles((s32)o);
    return TRUE;
}


//@ 0x2220e58
extern "C" void FieldFishManager_FreeShadows(O_f3 *o) {
    BOOL f = FALSE;
    E_f3 *e = ((E_f3 *)(sFishShadows));
    s32 i;
    for (i = 0; i < 6; i++) {
        if (e->hasFin != 0) {
            f = TRUE;
        }
        ((s32 (*)(O_f3 *, s32))FishShadow_Despawn)(o, i);
        ((s32 (*)(void *, void *))ModelSlotPool_release)((u8 *)o + 0x50, (u8 *)e + 0x7c);
        SndSeEmitter_callStop(e);
        SndEnvChannel_callRelease((u8 *)e + 0x40);
        e = (E_f3 *)((u8 *)e + 0x24c);
    }
    Mem_Free(o->shadowAnimFile);
    ModelSlotPool_destroy((u8 *)o + 0x50);
    if (f != FALSE) {
        ((s32 (*)(O_f3 *))FishFinModel_Release)(o);
    }
    ModelSlotPool_destroy((u8 *)o + 0x68);
}


//@ 0x2220e2c
extern "C" void FieldFishManager_FreeCatches(s32 a) {
    u8 *p = ((u8 *)(sFishCatches));
    s32 i;
    for (i = 0; i < 4; i++) {
        ((s32 (*)(void *, u8))FishCatch_StateEnd)(p, i);
        SndSeEmitter_callStop(p);
        p += 0xa4;
    }
}


//@ 0x2220e10
extern "C" void FieldFishManager_ResetBottles(s32 a) {
    u8 *p = ((u8 *)(sBottleThrows));
    s32 i;
    for (i = 0; i < 4; i++) {
        p[0x30] = 0;
        *(s32 *)(p + 0x58) = 0;
        p += 0x60;
    }
}


//@ 0x2220db0
extern "C" BOOL FieldFish_ScareAround(s32 a, s32 b) {
    s32 i;
    E_f3 *e;
    BOOL r = FALSE;
    e = ((E_f3 *)(sFishShadows));
    i = 0;
    for (; i < 6; i++) {
        V3_f3 *pv = &e->position;
        V3_f3 v = *pv;
        if (((s32 (*)(V3_f3 *, s32))Vec_DistXZ)(&v, a) <= b) {
            if (FishShadow_TryFlee(e, a) != 0) {
                r = TRUE;
            }
        }
        e = (E_f3 *)((u8 *)e + 0x24c);
    }
    return r;
}


//@ 0x2220d94
extern "C" void FishShadow_UpdateVisibility(O_f3 *o, E_f3 *e, s32 idx) {
    FishShadow_UpdateFade(o, e, idx);
    FishShadow_CheckOffscreen(o, e, idx);
}


//@ 0x2220d30
extern "C" void FishShadow_UpdateFade(O_f3 *o, E_f3 *e, s32 idx) {
    u32 t = e->alpha;
    if (t == 0x1f) {
        FishShadow_CheckPlayerScare((s32)o, e);
    } else if (t != 0x1f) {
        if (e->hasFin == 0) {
            e->alpha = t - 1;
        }
    }
    if (e->alpha <= 1) {
        e->alpha = 0x1f;
        if (((s32 (*)(E_f3 *))FishShadow_CheckReelResult)(e) == 2) {
            if (e->hasFin != 0) {
                ((s32 (*)(O_f3 *))FishFinModel_Release)(o);
            }
        }
        ((s32 (*)(O_f3 *, s32))FishShadow_Despawn)(o, idx);
    }
}


//@ 0x2220cf8
extern "C" BOOL FishShadow_CheckPlayerScare(s32 a, E_f3 *e) {
    BOOL r = FALSE;
    if (FieldFish_IsPlayerApproaching(a, 4, e) != 0) {
        s32 t = ((s32 (*)(s32))PlayerActor_GetBodyPos)(4);
        if (t == 0) {
            return r;
        }
        FishShadow_TryFlee(e, t);
        r = TRUE;
    }
    return r;
}


//@ 0x2220c98
extern "C" BOOL FieldFish_IsPlayerApproaching(s32 a, s32 b, E_f3 *e) {
    BOOL r = FALSE;
    if (((s32 (*)(s32, V3_f3 *, s32))FieldFish_IsPlayerNear)(a, &e->position, b) != 0) {
        if (PlayerActor_TestSlotFlag9(b) != 0) {
            r = TRUE;
        } else if (((s32 (*)(s32))FieldFish_IsPlayerRunning)(b) != 0) {
            u8 *pc = &e->scareDelay;
            u32 t = *pc;
            if (t != 0) {
                *pc = t - 1;
            } else {
                r = TRUE;
            }
        } else {
            e->scareDelay = 6;
        }
    } else {
        e->scareDelay = 6;
    }
    return r;
}


//@ 0x2220c68
extern "C" BOOL FishShadow_TryFlee(E_f3 *e, s32 a) {
    BOOL r = FALSE;
    if (e == NULL) {
        return r;
    }
    if (e->aiMode == 1) {
        return r;
    }
    if (FishShadow_StartFlee(e, a) != 0) {
        r = TRUE;
    }
    return r;
}


//@ 0x2220b00
extern "C" BOOL FishShadow_StartFlee(E_f3 *e, s32 a) {
    if (e == NULL) {
        return FALSE;
    }
    if (e->moveState == 5 || e->biteState == 6 || e->state != 3) {
        return FALSE;
    }
    if (e->aiMode == 0) {
        e->moveState = 5;
    } else {
        e->biteState = 6;
    }
    e->alpha = 0x1e;
    e->stateTimer = 0;
    u16 *pa = (u16 *)&e->rotY;
    V3_f3 *pv = &e->position;
    V3_f3 v = *pv;
    if (e->hasFin != 0) {
        *pa = 0;
    } else {
        *pa = ((s32 (*)(s32, V3_f3 *))Math_AngleXZ)(a, &v);
    }
    u32 k = e->sizeClass;
    s32 *pr = &e->effectHandle;
    V3_f3 w = v;
    w.y = data_020c7c1c;
    switch (k) {
    case 0: *pr = ((s32 (*)(s32, V3_f3 *, s32, s32))Effect_Create)(0x1a, &w, 0, 0); break;
    case 1: *pr = ((s32 (*)(s32, V3_f3 *, s32, s32))Effect_Create)(0x1b, &w, 0, 0); break;
    case 2: *pr = ((s32 (*)(s32, V3_f3 *, s32, s32))Effect_Create)(0x1c, &w, 0, 0); break;
    case 3: *pr = ((s32 (*)(s32, V3_f3 *, s32, s32))Effect_Create)(0x1d, &w, 0, 0); break;
    case 4: *pr = ((s32 (*)(s32, V3_f3 *, s32, s32))Effect_Create)(0x1e, &w, 0, 0); break;
    case 5: *pr = ((s32 (*)(s32, V3_f3 *, s32, s32))Effect_Create)(0x1f, &w, 0, 0); break;
    case 6: *pr = ((s32 (*)(s32, V3_f3 *, s32, s32))Effect_Create)(0x21, &w, 0, 0); break;
    case 7: *pr = ((s32 (*)(s32, V3_f3 *, s32, s32))Effect_Create)(0x20, &w, 0, 0); break;
    }
    return TRUE;
}


//@ 0x2220a2c
extern "C" void FishShadow_CheckOffscreen(O_f3 *o, E_f3 *e, s32 idx) {
    if (e->aiMode == 0 || e->biteState == 6) {
        if ((*(void * *)&gCamera) != NULL) {
            V3_f3 v = (*(V3_f3 *)&gCameraLookAt);
            if (((s32 (*)(V3_f3 *, V3_f3 *, s32, s32, s32))FieldFish_IsInBox)(&e->position, &v, 0xa000, 0x10000, 0xa000) == 0) {
                if (e->moveState == 5 || e->biteState == 6) {
                    if (e->hasFin != 0) {
                        ((s32 (*)(O_f3 *))FishFinModel_Release)(o);
                    }
                    ((s32 (*)(O_f3 *, s32))FishShadow_Despawn)(o, idx);
                } else {
                    if ((u32)(e->habitat - 4) <= 2) {
                        if (((s32 (*)(E_f3 *))FishShadow_IsSeaNorth)(e) != 0) {
                            e->despawnTimer = 0x12c;
                        } else {
                            e->despawnTimer = 0x4b0;
                        }
                    } else {
                        e->despawnTimer = 0x4b0;
                    }
                    e->state = 4;
                }
            }
        }
    }
}


//@ 0x22209ec
extern "C" void FieldWater_ApplyFlow(s32 *p, s32 b) {
    GroundInfoBase buf;
    GroundInfo_initAtPos(&buf, p, 0, 0);
    p[0] += func_01ffcb0c(b, buf.flowDir);
    p[2] += func_01ffcb0c(b, buf.flowDirZ);
    GroundInfo_Destruct(&buf);
}


//@ 0x22209c8
extern "C" BOOL FieldFish_IsPlayerRunning(s32 idx) {
    BOOL r = FALSE;
    u8 *o = ((u8 * (*)(s32))PlayerActor_GetActor)(idx);
    if (o != NULL) {
        if (*(s32 *)(o + 0x98) > 0x548) {
            r = TRUE;
        }
    }
    return r;
}


//@ 0x2220994
extern "C" BOOL FieldFish_IsPlayerNear(void *self, s32 b, s32 idx) {
    u8 *o = ((u8 * (*)(s32))PlayerActor_GetActor)(idx);
    if (o == NULL) {
        return FALSE;
    }
    if (((long long (*)(void *, s32))Vec_DistSqXZ)(o + 0x5c, b) <= 0x135c3) {
        return TRUE;
    }
    return FALSE;
}


//@ 0x2220844
extern "C" BOOL FishShadow_TrySpawn(void *self, FishShadow *e, s32 flag) {
    BOOL r = FALSE;
    s32 a = -1, b = -1;
    Vec2 cd;
    cd.x = -1;
    cd.y = -1;
    s32 x, y;
    VecFx32 v;
    s32 fl;
    switch (flag) {
    case 0:
        fl = 0;
        break;
    default:
        fl = 1;
        break;
    }
    if (FishTable_PickNow(&x, &y, fl)) {
        if (FieldFish_PickSpawnUnit(self, &a, &b, &cd.x, &cd.y, y, flag, e)) {
            if (FishShadow_CanSpawnFish(self, e, x)) {
                FieldPos_FromUnitCenter(&v, a, b);
                v.y = 0xffffeccd;
                s32 t = x;
                e->fishId = t;
                e->hasFin = (u32)(t - 0x34) <= 2 ? 1 : 0;
                e->habitat = y;
                e->sizeClass = data_020ca314[x * 6];
                e->rotY = -0x8000;
                e->spawnPos = v.x;
                e->spawnPosY = v.y;
                e->spawnPosZ = v.z;
                e->spawnState = flag;
                r = TRUE;
                e->state = r;
                e->moveState = 0;
                VecFx32 *pv = (VecFx32 *)&e->prevPosition;
                *pv = v;
                s32 db = cd.y;
                Vec2 *pp = &e->spawnBlock;
                pp->x = cd.x;
                pp->y = db;
                e->despawnTimer = -1;
            }
        } else if (flag == 0) {
            e->spawnState = 3;
        } else if (flag == 1) {
            e->spawnState = 4;
        }
    } else if (flag == 0) {
        e->spawnState = 5;
    } else if (flag == 1) {
        e->spawnState = 6;
    }
    return r;
}


//@ 0x222069c
extern "C" BOOL FieldFish_CollectHabitatBlocks(void *self, u8 *out, s32 *cnt, s32 mode) {
    BOOL result = FALSE;
    Unk_0204e858_Grid *g = (*(Unk_0204e858_Grid * *)&gSceneBlockMap);
    if (g != NULL) {
        s32 x, y;
        for (x = 1; x < (s32)g->height - 1; x++) {
            for (y = 1; y < (s32)g->width - 1; y++) {
                TownBlockCell *c;
                if ((u32)x < g->width && (u32)y < g->height && g->blocks != NULL) {
                    c = &g->blocks[y * g->width + x];
                } else {
                    c = (TownBlockCell *)result;
                }
                if (c == NULL) {
                    continue;
                }
                switch (mode) {
                case 6:
                    if ((MapBlock_GetAttr(c) & 8) != 0) {
                        out[*cnt * 2] = x;
                        (&out[*cnt * 2])[1] = y;
                        (*cnt)++;
                    }
                    break;
                case 0:
                    if ((MapBlock_GetAttr(c) & 0x7f000) != 0) {
                        out[*cnt * 2] = x;
                        (&out[*cnt * 2])[1] = y;
                        (*cnt)++;
                    }
                    break;
                case 1:
                    if ((MapBlock_GetAttr(c) & 0x100) != 0) {
                        out[*cnt * 2] = x;
                        (&out[*cnt * 2])[1] = y;
                        (*cnt)++;
                    }
                    break;
                case 2:
                    if ((MapBlock_GetAttr(c) & 0x80000) != 0) {
                        out[*cnt * 2] = x;
                        (&out[*cnt * 2])[1] = y;
                        (*cnt)++;
                    }
                    break;
                case 3:
                    if (MapBlockAcre_hasPond(c) != 0) {
                        out[*cnt * 2] = x;
                        (&out[*cnt * 2])[1] = y;
                        (*cnt)++;
                    }
                    break;
                case 4: {
                    u32 t = MapBlock_GetAttr(c);
                    if ((t & 0x7f000) != 0 && (t & 8) != 0) {
                        out[*cnt * 2] = x;
                        (&out[*cnt * 2])[1] = y;
                        (*cnt)++;
                    }
                    break;
                }
                case 5:
                    if ((MapBlock_GetAttr(c) & 8) != 0) {
                        out[*cnt * 2] = x;
                        (&out[*cnt * 2])[1] = y;
                        (*cnt)++;
                    }
                    break;
                }
            }
        }
    }
    if (*cnt > 0) {
        result = TRUE;
    }
    return result;
}


//@ 0x2220460
extern "C" BOOL FieldFish_PickSpawnUnit(void *self, s32 *ox, s32 *oz, s32 *a3, s32 *a4, s32 mode, s32 flag, FishShadow *e) {
    s32 z = 0;
    s32 cnt = z;
    s32 sx, sz;
    u8 grid[0x20];
    VecFx32 v44;
    VecFx32 v50;
    VecFx32 v5c;
    u8 cand[0x204];
    s32 x, y;
    if (gCamera == 0) {
        return z;
    }
    v44 = gCameraLookAt;
    FieldPos_SnapToUnitCenter(&v50, &v44);
    if (FieldFish_CollectHabitatBlocks(self, grid, &cnt, mode) == 0) {
        return z;
    }
    s32 k = FieldFish_RandRange(z, (u16)cnt);
    s32 k2 = k * 2;
    *a3 = ((s8 *)grid)[k2];
    *a4 = ((s8 *)&grid[1])[k2];
    s32 ax = *a3;
    s32 az = *a4;
    if (flag == 0) {
        FishShadow *p;
        s32 i;
        p = sFishShadows;
        for (i = z; i < 3; p++, i++) {
            if ((void *)e != (void *)p) {
                Vec2 *q = &p->spawnBlock;
                if (ax == p->spawnBlock.x && az == q->y) {
                    return FALSE;
                }
            }
        }
    } else if (flag == 1) {
        FishShadow *p;
        s32 i;
        p = &sFishShadows[3];
        for (i = 3; i < 6; p++, i++) {
            if ((void *)e != (void *)p) {
                Vec2 *q = &p->spawnBlock;
                if (ax == p->spawnBlock.x && az == q->y) {
                    return FALSE;
                }
            }
        }
    }
    FieldUnit_FromBlockUnit(&sx, &sz, ax, az, 0, 0);
    s32 xlim = sx + 0x10;
    s32 zlim = sz + 0x10;
    for (x = sx; x < xlim; x++) {
        for (y = sz; y < zlim; y++) {
            switch (mode) {
            case 5:
            case 6:
                if (Ground_GetWaterKind(x, y) == 1) {
                    cand[z * 2] = x;
                    (&cand[z * 2])[1] = y;
                    z++;
                }
                break;
            case 0:
            case 1:
                if (Ground_GetWaterKind(x, y) == 2) {
                    cand[z * 2] = x;
                    (&cand[z * 2])[1] = y;
                    z++;
                }
                break;
            case 2:
                if (y < sz + 3) {
                    if (Ground_GetWaterKind(x, y) == 2) {
                        cand[z * 2] = x;
                        (&cand[z * 2])[1] = y;
                        z++;
                    }
                }
                break;
            case 3:
                if (Ground_IsPond(x, y) != 0) {
                    cand[z * 2] = x;
                    (&cand[z * 2])[1] = y;
                    z++;
                }
                break;
            case 4:
                if (Ground_GetWaterKind(x, y) == 2 || Ground_GetWaterKind(x, y) == 1) {
                    cand[z * 2] = x;
                    (&cand[z * 2])[1] = y;
                    z++;
                }
                break;
            }
        }
    }
    if (z == 0) {
        *ox = -1;
        *oz = -1;
        return FALSE;
    }
    s32 kk = (s16)FieldFish_RandRange(0, (u16)z) * 2;
    s8 *cq = (s8 *)&cand[1];
    s32 rx, ry;
    ry = cq[kk];
    rx = ((s8 *)cand)[kk];
    FieldPos_FromUnitCenter(&v5c, rx, ry);
    if (FieldFish_IsInBox((s32 *)&v5c, (s32 *)&v50, 0xa000, 0x10000, 0xa000)) {
        *ox = -1;
        *oz = -1;
        return FALSE;
    }
    *ox = rx;
    *oz = ry;
    return TRUE;
}


//@ 0x22203f8
extern "C" BOOL FishShadow_CanSpawnFish(void *self, FishShadow *e, s32 id) {
    BOOL ok = Unk_ov003_022203f8_Chk(self, id);
    if (ok) {
        if (((u8 * (*)(s32))PlayerActor_GetActor)(4) == NULL) {
            return FALSE;
        }
        s32 i;
        FishShadow *p;
        p = &sFishShadows[3];
        i = 3;
        for (; i < 6; p++, i++) {
            if ((void *)e != (void *)p && p->hasFin != 0) {
                return FALSE;
            }
        }
    } else if (id == 0x37) {
        if (FieldFish_IsRainOrSnow(self) == 0) {
            return FALSE;
        }
    }
    return TRUE;
}


//@ 0x22203e0
extern "C" BOOL FieldFish_IsRainOrSnow(void *self) {
    BOOL r = FALSE;
    u32 t = Weather_GetFallingPrecip() - 1;
    if (t <= 1) {
        r = TRUE;
    }
    return r;
}


//@ 0x2220388
extern "C" void FishShadow_TickRespawnTimer(FishShadow *self) {
    if (Math_CountDownU16(&self->respawnTimer) == 0) {
        if ((u32)self->state <= 1) {
            self->state = 0;
            u32 b = self->slotIndex;
            if (b < 3) {
                self->spawnState = 3;
            } else if (b < 6) {
                self->spawnState = 4;
            }
        }
        self->respawnTimer = 0x960;
    }
}


//@ 0x222034c
extern "C" BOOL FieldFish_IsInBox(s32 *a, s32 *b, s32 c, s32 d, s32 e) {
    BOOL r = FALSE;
    s32 dx = b[0] - a[0];
    if (dx < 0) {
        dx = -dx;
    }
    if (dx > c) {
        return FALSE;
    }
    s32 az = a[2];
    s32 bz = b[2];
    s32 dz = bz - az;
    if (dz >= 0) {
        if (dz <= d) {
            r = TRUE;
        }
    } else {
        if (az - bz <= e) {
            r = TRUE;
        }
    }
    return r;
}


//@ 0x222031c
extern "C" BOOL FieldFish_HasPassed(s32 *a, s32 *b, s32 *c) {
    if (FieldFish_HasPassed1D(a[0], b[0], c[0])) {
        if (FieldFish_HasPassed1D(a[2], b[2], c[2])) {
            return TRUE;
        }
    }
    return FALSE;
}


//@ 0x2220300
extern "C" BOOL FieldFish_HasPassed1D(s32 a, s32 b, s32 c) {
    BOOL r = FALSE;
    a = a - b;
    if (a < 0) {
        a = -a;
    }
    b = c - b;
    if (b < 0) {
        b = -b;
    }
    if (a >= b) {
        r = TRUE;
    }
    return r;
}


//@ 0x22202ec
extern "C" s32 FieldFish_RandRange(s32 a, u16 b) {
    return a + ((BOOL (*)(s32))Random_GlobalBelow)(b - a);
}


//@ 0x22202cc
extern "C" s32 FieldFish_RandRangeSigned(s32 a, u16 b) {
    s32 r = FieldFish_RandRange(a, b);
    if (((BOOL (*)(s32))Random_GlobalBelow)(2) == 0) {
        r *= -1;
    }
    return r;
}


//@ 0x2220290
extern "C" BOOL FishCatch_GetReelTarget(VecFx32 *out, s32 idx) {
    BOOL r = FALSE;
    if (idx < 0 || idx >= 4) {
        return FALSE;
    }
    FishCatch *rec = &((FishCatch *)(sFishCatches))[idx];
    if (rec->mode == 1) {
        VecFx32 *pv = &rec->arcPointA;
        *out = *pv;
        r = TRUE;
    }
    return r;
}


//@ 0x22201bc
extern "C" BOOL FishCatch_StartRelease(s32 idx, u16 id0, VecFx32 *pos) {
    volatile u16 id = id0;
    BOOL ok = FALSE;
    u32 v0 = id;
    u32 v1 = id;
    if (v1 >= 0x12e8 && v0 <= 0x131f) {
        ok = TRUE;
    }
    if (!ok) {
        return FALSE;
    }
    if (idx < 0 || idx >= 4) {
        return FALSE;
    }
    FishCatch *rec = &((FishCatch *)(sFishCatches))[idx];
    if (rec->state != 0) {
        return FALSE;
    }
    u8 *ob = ((u8 * (*)(s32))PlayerActor_GetActor)(idx);
    if (ob == NULL) {
        return FALSE;
    }
    VecFx32 v;
    VecFx32 *ps = (VecFx32 *)(ob + 0x5c);
    v = *ps;
    s32 r6 = (u16)id - 0x12e8;
    rec->fishId = r6;
    ((void (*)(void *, s32, s32))FishCatch_SetModelAngles)(rec, ((s32 (*)(VecFx32 *, VecFx32 *))Math_AngleXZ)(&v, pos), r6);
    VecFx32 *pd = &rec->arcPointA;
    *pd = v;
    pd = &rec->arcPointB;
    *pd = *pos;
    pd = &rec->position;
    *pd = v;
    rec->moveFrame = 0;
    rec->mode = 4;
    rec->state = 1;
    return TRUE;
}


//@ 0x22201ac
extern "C" void FishShadow_SetAnimSpeed(u8 *self, s32 v) {
    *(s32 *)(self + 0x1f0) = (v << 12) >> 4;
}


//@ 0x2220128
extern "C" BOOL FishShadow_LoadModel(u8 *self, void *p, s32 q) {
    BOOL r = FALSE;
    u8 *o = self + 0x144;
    CachedModel_loadCached(o, 0x66736477, (*(void * *)((u8 *)&sFishShadowModelPath)));
    if (p == NULL) {
        return r;
    }
    ((void (*)(s32, void *))ModelSlotPool_acquire)(q, self + 0x7c);
    s32 t = ((s32 (*)(void))ModelSlot_getHeap)();
    s32 u = func_021065f8(func_021065dc((s32)p), r);
    if (((BOOL (*)(void *, s32))AnimModel_allocAnmObj)(o, t)) {
        BlendAnimModel_initAnim(o, u, r, 0x1000, 1, r);
        AnimModel_attachAnim(o);
        r = TRUE;
    }
    return r;
}


//@ 0x2220030
extern "C" BOOL FishFinModel_Load(u8 *self, void *a)
{
    BOOL ok = FALSE;
    void *res = ModelSlotPool_acquire(a, self + 4);
    u8 *m = self + 8;
    if (PooledModel_loadFromSlot(m, res, (*(void * *)((u8 *)&sFishFinModelPath)))) {
        u8 *r4 = self + 0x58;
        Model_setResource(r4, PooledModel_getModel(m), 0);
        void *nm = ((void * (*)(void *))ModelSlot_getHeap)(res);
        File_LoadAlloc((*(void * *)((u8 *)&sFishFinAnimPath)), nm, 4, 0);
        s32 v = func_021065f8(((s32 (*)(void))func_021065dc)(), 0);
        if (AnimModel_allocAnmObj(r4, nm)) {
            BlendAnimModel_initAnim(r4, v, 0, 0x1000, 1, 0);
            AnimModel_attachAnim(r4);
        } else {
            return FALSE;
        }
        File_LoadAlloc((*(void * *)((u8 *)&sFishFinTexAnimPath)), nm, 4, 0);
        s32 w = func_02106670(func_02106654(), 0);
        if (ModelAnim_allocMatAnm(self + 0x11c, *(void **)(r4 + 0x5c), nm)) {
            ModelAnim_init(self + 0x11c, w, 0, 0x1000, 1);
            ModelAnim_addToRenderObj(self + 0x11c, Model_getRenderObj(r4));
        } else {
            return FALSE;
        }
        ok = TRUE;
    }
    return ok;
}


//@ 0x2220004
extern "C" u8 *FishShadow_GetActive(s32 i)
{
    if (i < 0 || i >= 6) {
        return NULL;
    }
    u8 *p = ((u8 *)(sFishShadows)) + i * 0x24c;
    if ((u32)(*(s32 *)(p + 0x80) - 3) > 1) {
        p = NULL;
    }
    return p;
}


//@ 0x221ffe8
extern "C" s32 FishShadow_GetFishId(s32 id)
{
    u8 *p = FishShadow_GetActive(id);
    if (p == NULL) {
        return -1;
    }
    return *(s8 *)(p + 0x7e);
}


//@ 0x221ffb8
extern "C" BOOL FishShadow_GetPos(u32 *out, s32 id)
{
    u8 *p = FishShadow_GetActive(id);
    if (p == NULL) {
        return FALSE;
    }
    u32 *q = (u32 *)(p + 0x120);
    out[0] = q[0];
    out[1] = q[1];
    out[2] = q[2];
    return TRUE;
}
