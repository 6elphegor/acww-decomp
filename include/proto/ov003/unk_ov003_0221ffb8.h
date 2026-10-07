#ifndef PROTO_PROTO_OV003_UNK_OV003_0221FFB8_H
#define PROTO_PROTO_OV003_UNK_OV003_0221FFB8_H

// Prototypes of the functions defined in src/ov003/unk_ov003_0221ffb8.cpp (generated: tools/host_protos.py)

#include "types.h"
#ifdef __cplusplus
#include "field/FishShadow.h"
#include "gfx/VecFx32.h"
#include "types.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif
#ifndef PROTO_LOCAL_FieldFishManager_Create
void *FieldFishManager_Create();
#endif
#ifndef PROTO_LOCAL_BottleThrow_StateIdle
void BottleThrow_StateIdle();
#endif
#ifndef PROTO_LOCAL_FishShadow_AppearAttached
void FishShadow_AppearAttached();
#endif
#ifndef PROTO_LOCAL_FieldFish_StartCastSplash
void FieldFish_StartCastSplash();
#endif
#ifndef PROTO_LOCAL_FieldFish_TickCastSplash
void FieldFish_TickCastSplash();
#endif
#ifndef PROTO_LOCAL_FishCatch_PollRemote
void FishCatch_PollRemote(void *a);
#endif
#ifndef PROTO_LOCAL_FishCroak_Destroy
void FishCroak_Destroy(void *p);
#endif
#ifndef PROTO_LOCAL_FishShadow_EnterSpawn
void FishShadow_EnterSpawn();
#endif
#ifndef PROTO_LOCAL_FishShadow_EnterWaitInView
void FishShadow_EnterWaitInView();
#endif
#ifndef PROTO_LOCAL_FishShadow_EnterAppear
void FishShadow_EnterAppear();
#endif
#ifndef PROTO_LOCAL_FishShadow_EnterOutOfView
void FishShadow_EnterOutOfView(void);
#endif
#ifndef PROTO_LOCAL_FishShadow_EnterSwim
void FishShadow_EnterSwim(void);
#endif
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_BottleThrow_IsActive
BOOL BottleThrow_IsActive(s32 i);
#endif
#ifndef PROTO_LOCAL_BottleThrow_Start
s32 BottleThrow_Start(s32 i);
#endif
#ifndef PROTO_LOCAL_BottleThrow_GetSeCue
s32 BottleThrow_GetSeCue(s32 i);
#endif
#ifndef PROTO_LOCAL_FieldFish_AddSinX
void FieldFish_AddSinX(s32 *p, s32 a, s32 ang);
#endif
#ifndef PROTO_LOCAL_FieldFish_AddCosZ
void FieldFish_AddCosZ(s32 *p, s32 a, s32 ang);
#endif
#ifndef PROTO_LOCAL_FieldFish_MoveXZ
void FieldFish_MoveXZ(s32 *p, s32 a, s32 ang);
#endif
#ifndef PROTO_LOCAL_FishCatch_StartLift
BOOL FishCatch_StartLift(s32 idx, s32 flag);
#endif
#ifndef PROTO_LOCAL_FishCatch_IsActive
BOOL FishCatch_IsActive(s32 idx);
#endif
#ifndef PROTO_LOCAL_FishCatch_NetSendStored
BOOL FishCatch_NetSendStored(s32 idx);
#endif
#ifndef PROTO_LOCAL_FishShadow_CanSeeBobber
BOOL FishShadow_CanSeeBobber(void *self, s32 a1, s32 a2, s32 a3);
#endif
#ifndef PROTO_LOCAL_FieldFish_IsCastSplashActive
BOOL FieldFish_IsCastSplashActive();
#endif
#ifndef PROTO_LOCAL_FishCroak_Clear
void FishCroak_Clear(FishCroak *s);
#endif
#ifndef PROTO_LOCAL_FishCatch_StateIdle
s32 FishCatch_StateIdle();
#endif
#ifndef PROTO_LOCAL_FishCatch_StartRemoteHook
void FishCatch_StartRemoteHook(void *a, s32 idx);
#endif
#ifndef PROTO_LOCAL_FishCatch_EndRemote
BOOL FishCatch_EndRemote(void *a, u8 idx);
#endif
#ifndef PROTO_LOCAL_FishCatch_StartRemoteReel
BOOL FishCatch_StartRemoteReel(void *a, u8 idx, u32 v, VecFx32 *p);
#endif
#ifndef PROTO_LOCAL_FishCatch_StartRemoteLift
BOOL FishCatch_StartRemoteLift(void *a, u8 idx);
#endif
#ifndef PROTO_LOCAL_FishCroak_Init
void FishCroak_Init(u8 *p);
#endif
#ifndef PROTO_LOCAL_FishShadow_SetAppearing
BOOL FishShadow_SetAppearing(void *a, s32 idx);
#endif
#ifndef PROTO_LOCAL_FishShadow_Despawn
void FishShadow_Despawn(void *a, s32 idx);
#endif
#ifndef PROTO_LOCAL_FishFinModel_Attach
BOOL FishFinModel_Attach(u8 *a);
#endif
#ifndef PROTO_LOCAL_FishFinModel_Release
void FishFinModel_Release(u8 *a);
#endif
#ifndef PROTO_LOCAL_FishShadow_Run
void FishShadow_Run(void *a, u8 *b, void *c);
#endif
#ifndef PROTO_LOCAL_FishShadow_ChangeState
void FishShadow_ChangeState(void *a, s32 idx, u8 *b, void *c);
#endif
#ifndef PROTO_LOCAL_FishShadow_ExecSpawn
void FishShadow_ExecSpawn(u8 *a, u8 *b, s32 c);
#endif
#ifndef PROTO_LOCAL_FishShadow_ExecWaitInView
void FishShadow_ExecWaitInView(u8 *a, u8 *b, s32 c);
#endif
#ifndef PROTO_LOCAL_FieldFishManager_FreeCatches
void FieldFishManager_FreeCatches(s32 a);
#endif
#ifndef PROTO_LOCAL_FieldFishManager_ResetBottles
void FieldFishManager_ResetBottles(s32 a);
#endif
#ifndef PROTO_LOCAL_FieldFish_ScareAround
BOOL FieldFish_ScareAround(s32 a, s32 b);
#endif
#ifndef PROTO_LOCAL_FieldWater_ApplyFlow
void FieldWater_ApplyFlow(s32 *p, s32 b);
#endif
#ifndef PROTO_LOCAL_FieldFish_IsPlayerRunning
BOOL FieldFish_IsPlayerRunning(s32 idx);
#endif
#ifndef PROTO_LOCAL_FieldFish_IsPlayerNear
BOOL FieldFish_IsPlayerNear(void *self, s32 b, s32 idx);
#endif
#ifndef PROTO_LOCAL_FishShadow_TrySpawn
BOOL FishShadow_TrySpawn(void *self, FishShadow *e, s32 flag);
#endif
#ifndef PROTO_LOCAL_FieldFish_CollectHabitatBlocks
BOOL FieldFish_CollectHabitatBlocks(void *self, u8 *out, s32 *cnt, s32 mode);
#endif
#ifndef PROTO_LOCAL_FieldFish_PickSpawnUnit
BOOL FieldFish_PickSpawnUnit(void *self, s32 *ox, s32 *oz, s32 *a3, s32 *a4, s32 mode, s32 flag, FishShadow *e);
#endif
#ifndef PROTO_LOCAL_FishShadow_CanSpawnFish
BOOL FishShadow_CanSpawnFish(void *self, FishShadow *e, s32 id);
#endif
#ifndef PROTO_LOCAL_FieldFish_IsRainOrSnow
BOOL FieldFish_IsRainOrSnow(void *self);
#endif
#ifndef PROTO_LOCAL_FishShadow_TickRespawnTimer
void FishShadow_TickRespawnTimer(FishShadow *self);
#endif
#ifndef PROTO_LOCAL_FieldFish_IsInBox
BOOL FieldFish_IsInBox(s32 *a, s32 *b, s32 c, s32 d, s32 e);
#endif
#ifndef PROTO_LOCAL_FieldFish_HasPassed
BOOL FieldFish_HasPassed(s32 *a, s32 *b, s32 *c);
#endif
#ifndef PROTO_LOCAL_FieldFish_HasPassed1D
BOOL FieldFish_HasPassed1D(s32 a, s32 b, s32 c);
#endif
#ifndef PROTO_LOCAL_FieldFish_RandRange
s32 FieldFish_RandRange(s32 a, u16 b);
#endif
#ifndef PROTO_LOCAL_FieldFish_RandRangeSigned
s32 FieldFish_RandRangeSigned(s32 a, u16 b);
#endif
#ifndef PROTO_LOCAL_FishCatch_GetReelTarget
BOOL FishCatch_GetReelTarget(VecFx32 *out, s32 idx);
#endif
#ifndef PROTO_LOCAL_FishCatch_StartRelease
BOOL FishCatch_StartRelease(s32 idx, u16 id0, VecFx32 *pos);
#endif
#ifndef PROTO_LOCAL_FishShadow_SetAnimSpeed
void FishShadow_SetAnimSpeed(u8 *self, s32 v);
#endif
#ifndef PROTO_LOCAL_FishShadow_LoadModel
BOOL FishShadow_LoadModel(u8 *self, void *p, s32 q);
#endif
#ifndef PROTO_LOCAL_FishFinModel_Load
BOOL FishFinModel_Load(u8 *self, void *a);
#endif
#ifndef PROTO_LOCAL_FishShadow_GetActive
u8 *FishShadow_GetActive(s32 i);
#endif
#ifndef PROTO_LOCAL_FishShadow_GetFishId
s32 FishShadow_GetFishId(s32 id);
#endif
#ifndef PROTO_LOCAL_FishShadow_GetPos
BOOL FishShadow_GetPos(u32 *out, s32 id);
#endif
}
#endif

#endif
