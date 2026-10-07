#ifndef PROTO_PROTO_MAIN_UNK_02004558_H
#define PROTO_PROTO_MAIN_UNK_02004558_H

// Prototypes of the functions defined in src/main/unk_02004558.cpp (generated: tools/host_protos.py)

#include "types.h"
#include "player/PlayerAct30Args.h"
#include "player/PlayerPickUpArgs.h"
#include "player/PlayerPickUpFanfareArgs.h"
#include "player/Unk_02006d14_Pair.h"
#include "player/Unk_0200f070_V3.h"
#ifdef __cplusplus
#include "gfx/VecFx32.h"
#include "player/PlayerActor.h"
#include "player/Unk_02007694.h"
#include "types.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif
#ifndef PROTO_LOCAL_PlayerActor_Create
void *PlayerActor_Create();
#endif
#ifndef PROTO_LOCAL_PlayerActor_GetPlayerData
void *PlayerActor_GetPlayerData(void *p);
#endif
#ifndef PROTO_LOCAL_PlayerActor_NetSendFaceChange
void PlayerActor_NetSendFaceChange();
#endif
#ifndef PROTO_LOCAL__ZN6ItemIdD1Ev
void _ZN6ItemIdD1Ev();
#endif
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_PlayerActor_CheckSceneExit
void PlayerActor_CheckSceneExit(s32 a);
#endif
#ifndef PROTO_LOCAL_PlayerActor_ApproachValue
void PlayerActor_ApproachValue(s32 *p, s32 target, s32 rate, s32 maxstep, s32 minstep);
#endif
#ifndef PROTO_LOCAL_PlayerActor_ApproachCoord
void PlayerActor_ApproachCoord(s32 *p, s32 target);
#endif
#ifndef PROTO_LOCAL_PlayerActor_ApproachAngle
s32 PlayerActor_ApproachAngle(s16 *p, s32 target, s32 rate, s32 maxstep, s32 minstep);
#endif
#ifndef PROTO_LOCAL_PlayerActor_TurnAngle
s32 PlayerActor_TurnAngle(s16 *p, s32 target);
#endif
#ifndef PROTO_LOCAL_PlayerActor_TurnAngleSlow
s32 PlayerActor_TurnAngleSlow(s16 *p, s32 target);
#endif
#ifndef PROTO_LOCAL_PlayerActor_Accelerate
s32 PlayerActor_Accelerate(s32 a, s32 b);
#endif
#ifndef PROTO_LOCAL_PlayerActor_DecreaseClamped
s32 PlayerActor_DecreaseClamped(s32 a, s32 b, s32 c);
#endif
#ifndef PROTO_LOCAL_PlayerActor_Decelerate
s32 PlayerActor_Decelerate(s32 a, s32 b);
#endif
#ifndef PROTO_LOCAL_PlayerActor_DecelerateSkid
s32 PlayerActor_DecelerateSkid(s32 a, s32 b);
#endif
#ifndef PROTO_LOCAL_PlayerActor_GetGender
BOOL PlayerActor_GetGender(void *p);
#endif
#ifndef PROTO_LOCAL_PlayerActor_GetShirt
void PlayerActor_GetShirt(u16 *out, void *p);
#endif
#ifndef PROTO_LOCAL_PlayerActor_GetHat
void PlayerActor_GetHat(u16 *out, void *p);
#endif
#ifndef PROTO_LOCAL_PlayerActor_GetHairStyle
s32 PlayerActor_GetHairStyle(void *p);
#endif
#ifndef PROTO_LOCAL_PlayerActor_GetHairColor
s32 PlayerActor_GetHairColor(void *p);
#endif
#ifndef PROTO_LOCAL_PlayerActor_GetTan
s32 PlayerActor_GetTan(void *p);
#endif
#ifndef PROTO_LOCAL_PlayerActor_GetFaceItem
void PlayerActor_GetFaceItem(u16 *out, u32 x);
#endif
#ifndef PROTO_LOCAL_PlayerActor_GetFaceAltFlag
u32 PlayerActor_GetFaceAltFlag(u32 x);
#endif
#ifndef PROTO_LOCAL_PlayerActor_GetFaceTexIndex
u32 PlayerActor_GetFaceTexIndex(u32 x);
#endif
#ifndef PROTO_LOCAL_PlayerActor_GetHeldItem
void PlayerActor_GetHeldItem(u16 *out, u32 x);
#endif
#ifndef PROTO_LOCAL_PlayerActor_StepTowardPose
void PlayerActor_StepTowardPose(PlayerActor *o, s32 a, s32 b, s32 c);
#endif
#ifndef PROTO_LOCAL_PlayerActor_StepTowardPoseFast
void PlayerActor_StepTowardPoseFast(PlayerActor *o, s32 a, s32 b, s32 c);
#endif
#ifndef PROTO_LOCAL_PlayerActor_StepTowardXZ
void PlayerActor_StepTowardXZ(PlayerActor *o, s32 a, s32 b);
#endif
#ifndef PROTO_LOCAL_PlayerActor_GetFrontUnitCenter
void PlayerActor_GetFrontUnitCenter(PlayerActor *a, PlayerActor *b);
#endif
#ifndef PROTO_LOCAL_PlayerActor_GetFrontPoint
void PlayerActor_GetFrontPoint(VecFx32 *out, PlayerActor *o);
#endif
#ifndef PROTO_LOCAL_PlayerActor_OffsetByAngle
void PlayerActor_OffsetByAngle(VecFx32 *out, void *o, VecFx32 *in, u16 *ang, s32 *p);
#endif
#ifndef PROTO_LOCAL_PlayerActor_CompareLastPlayDateNow
s32 PlayerActor_CompareLastPlayDateNow(void *o);
#endif
#ifndef PROTO_LOCAL_PlayerActor_CompareLastPlayDate
s32 PlayerActor_CompareLastPlayDate(void *o, void *a, u8 *b);
#endif
#ifndef PROTO_LOCAL_PlayerActor_SetLastPlayDate
void PlayerActor_SetLastPlayDate(PlayerActor *o, s32 a, Unk_0200f17c_Date *d);
#endif
#ifndef PROTO_LOCAL_PlayerActor_CalcHandItemPos
void PlayerActor_CalcHandItemPos(VecFx32 *dst, PlayerActor *o, s32 *p);
#endif
#ifndef PROTO_LOCAL_PlayerActor_IsWaitingForSlots
BOOL PlayerActor_IsWaitingForSlots();
#endif
#ifndef PROTO_LOCAL_PlayerActor_CalcNetFollowAngle
BOOL PlayerActor_CalcNetFollowAngle(s32 unused, s32 a, s32 b, s32 c, s16 d, s16 *out);
#endif
#ifndef PROTO_LOCAL_PlayerActor_SetArgsWait
void PlayerActor_SetArgsWait(u16 *p, u32 v);
#endif
#ifndef PROTO_LOCAL_PlayerActor_SetArgsWalk
void PlayerActor_SetArgsWalk(u8 *p, u32 v);
#endif
#ifndef PROTO_LOCAL_PlayerActor_SetArgsPickUp
void PlayerActor_SetArgsPickUp(PlayerPickUpArgs* out, Vec2* pos, s32 a, s32 b, u8 c);
#endif
#ifndef PROTO_LOCAL_PlayerActor_NetWritePickUp
void PlayerActor_NetWritePickUp(PlayerNetPickUpArgs* dst, Vec2* pos, s8 a, u16 b, u8 c);
#endif
#ifndef PROTO_LOCAL_PlayerActor_NetReadPickUp
void PlayerActor_NetReadPickUp(PlayerNetPickUpArgs* src, Vec2* pos, s8* a, u16* b, u8* c);
#endif
#ifndef PROTO_LOCAL_PlayerActor_SetArgsPickUpFanfare
void PlayerActor_SetArgsPickUpFanfare(PlayerPickUpFanfareArgs* s, Unk_02006d14_Pair* p, u16 h, u8 b);
#endif
#ifndef PROTO_LOCAL_PlayerActor_NetWritePickUpFanfare
void PlayerActor_NetWritePickUpFanfare(PlayerNetPickUpFanfareArgs* s, Unk_02006d14_Pair* p, u16 h, u8 b);
#endif
#ifndef PROTO_LOCAL_PlayerActor_NetReadPickUpFanfare
void PlayerActor_NetReadPickUpFanfare(PlayerNetPickUpFanfareArgs* s, Unk_02006d14_Pair* out, u16* h, u8* b);
#endif
#ifndef PROTO_LOCAL_PlayerActor_SetArgsPickUpFanfareStow
void PlayerActor_SetArgsPickUpFanfareStow(PlayerPickUpFanfareStowArgs* dst, Unk_02006d14_Pair* p, u8 b);
#endif
#ifndef PROTO_LOCAL_PlayerActor_NetWritePickUpFanfareStow
void PlayerActor_NetWritePickUpFanfareStow(PlayerNetPickUpFanfareStowArgs* dst, Unk_02006d14_Pair* p, u8 b);
#endif
#ifndef PROTO_LOCAL_PlayerActor_NetReadPickUpFanfareStow
void PlayerActor_NetReadPickUpFanfareStow(PlayerNetPickUpFanfareStowArgs* src, Unk_02006d14_Pair* out, u8* b);
#endif
#ifndef PROTO_LOCAL_PlayerActor_SetArgsAct30
void PlayerActor_SetArgsAct30(PlayerAct30Args* p, u32 a, u32 b, u32 c, u32 d);
#endif
#ifndef PROTO_LOCAL_PlayerActor_InitAct32Work
void PlayerActor_InitAct32Work(u32* p);
#endif
#ifndef PROTO_LOCAL_PlayerActor_NetWriteChangeHeldItem
void PlayerActor_NetWriteChangeHeldItem(void* p, u32 v);
#endif
#ifndef PROTO_LOCAL_PlayerActor_NetReadChangeHeldItem
void PlayerActor_NetReadChangeHeldItem(void* p, u16* out);
#endif
#ifndef PROTO_LOCAL_PlayerActor_CalcHeldUpItemPos
void PlayerActor_CalcHeldUpItemPos(VecFx32 *out, Unk_02007694 *obj, s32 n);
#endif
#ifndef PROTO_LOCAL_PlayerActor_LevelTiltForAction
void PlayerActor_LevelTiltForAction(void *p, u32 i, s32 force);
#endif
}
#endif

#endif
