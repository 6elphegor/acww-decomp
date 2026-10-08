#ifndef PROTO_PROTO_MAIN_UNK_02004558_H
#define PROTO_PROTO_MAIN_UNK_02004558_H

// Prototypes of the functions defined in src/main/unk_02004558.cpp (generated: tools/host_protos.py)

#include "types.h"
#include "player/PlayerPickUpFanfareArgs.h"
#include "player/Unk_02006d14_Pair.h"
#ifdef __cplusplus
#include "actor/ActorProfile.h"
#include "actor/Character.h"
#include "gfx/NNSG3dRS.h"
#include "gfx/VecFx32.h"
#include "player/PlayerAct30Args.h"
#include "player/PlayerActor.h"
#include "player/PlayerPickUpArgs.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif
#ifndef PROTO_LOCAL_PlayerActor_Create
void *PlayerActor_Create();
#endif
#ifndef PROTO_LOCAL_PlayerActor_CheckSceneExit
void PlayerActor_CheckSceneExit(s32 a);
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
#ifndef PROTO_LOCAL_PlayerActor_GetShirt
void PlayerActor_GetShirt(u16 *out, void *p);
#endif
#ifndef PROTO_LOCAL_PlayerActor_CompareLastPlayDate
s32 PlayerActor_CompareLastPlayDate(void *o, void *a, u8 *b);
#endif
#ifndef PROTO_LOCAL_PlayerActor_SetArgsWait
void PlayerActor_SetArgsWait(u16 *p, u32 v);
#endif
#ifndef PROTO_LOCAL_PlayerActor_SetArgsWalk
void PlayerActor_SetArgsWalk(u8 *p, u32 v);
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
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_PlayerActor_StepTowardPoseFast
void PlayerActor_StepTowardPoseFast(PlayerActor *o, s32 a, s32 b, s32 c);
#endif
#ifndef PROTO_LOCAL_PlayerActor_StepTowardXZ
void PlayerActor_StepTowardXZ(PlayerActor *o, s32 a, s32 b);
#endif
#ifndef PROTO_LOCAL_PlayerActor_OffsetByAngle
void PlayerActor_OffsetByAngle(VecFx32 *out, void *o, const VecFx32 *in, const s16 *ang, const s32 *p);
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
void PlayerActor_SetArgsAct30(PlayerAct30Args* p, u32 a, u32 b, u32 c, Character *d);
#endif
#ifndef PROTO_LOCAL_PlayerActor_JointCbPost
void PlayerActor_JointCbPost(NNSG3dRS *p);
#endif
#ifndef PROTO_LOCAL_PlayerActor_JointCbStart
void PlayerActor_JointCbStart(NNSG3dRS *p);
#endif
#ifndef PROTO_LOCAL_sPlayerActorProfile
extern ActorProfile sPlayerActorProfile;
#endif
}
#endif

#endif
