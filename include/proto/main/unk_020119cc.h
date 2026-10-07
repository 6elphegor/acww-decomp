#ifndef PROTO_PROTO_MAIN_UNK_020119CC_H
#define PROTO_PROTO_MAIN_UNK_020119CC_H

// Prototypes of the functions defined in src/main/unk_020119cc.cpp (generated: tools/host_protos.py)

#include "types.h"
struct BlockMap;
struct NpcEmotionEntry;
struct RouteGridPos;
#ifdef __cplusplus
#include "actor/NpcActor.h"
#include "gfx/VecFx32.h"
#include "npc/NpcActionCtrl.h"
#include "npc/NpcLookAt.h"
#include "types.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif
#ifndef PROTO_LOCAL_NpcActor_UpdateMovement
void NpcActor_UpdateMovement(void *a, void *b);
#endif
#ifndef PROTO_LOCAL__ZN11NpcTalkCtrlC1Ev
void _ZN11NpcTalkCtrlC1Ev(void);
#endif
#ifndef PROTO_LOCAL_NpcTalkCtrl_Destroy
void NpcTalkCtrl_Destroy(void);
#endif
#ifndef PROTO_LOCAL_VillagerRoute_Destruct
void VillagerRoute_Destruct();
#endif
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_NpcActor_IsFrontAngle
BOOL NpcActor_IsFrontAngle(s32 x);
#endif
#ifndef PROTO_LOCAL_NpcActor_CanPlayerPay
BOOL NpcActor_CanPlayerPay(void *self, s32 v);
#endif
#ifndef PROTO_LOCAL_NpcActor_ChargePlayer
void NpcActor_ChargePlayer(void *self, s32 v);
#endif
#ifndef PROTO_LOCAL_NpcActor_CheckPayoutFits
s32 NpcActor_CheckPayoutFits(void *self, s32 v, s32 w);
#endif
#ifndef PROTO_LOCAL_NpcActor_PayPlayer
void NpcActor_PayPlayer(void *self, s32 v);
#endif
#ifndef PROTO_LOCAL_Npc_RotateOffsetXZ
void Npc_RotateOffsetXZ(VecFx32 *out, VecFx32 *base, VecFx32 *off, u32 ang);
#endif
#ifndef PROTO_LOCAL_Npc_IsPosBlocked
BOOL Npc_IsPosBlocked(VecFx32 *pos);
#endif
#ifndef PROTO_LOCAL_NpcLookAt_GetHeadPos
s32 NpcLookAt_GetHeadPos(NpcLookAt *self, VecFx32 *out);
#endif
#ifndef PROTO_LOCAL_NpcLookAt_IsWithin
BOOL NpcLookAt_IsWithin(s32 a, s32 b);
#endif
#ifndef PROTO_LOCAL_NpcFace_PickTalkMouth
s32 NpcFace_PickTalkMouth();
#endif
#ifndef PROTO_LOCAL_NpcAction_PackMove
void NpcAction_PackMove(u8 *out, u32 a, u32 b, u32 c, u32 s0, s16 s1, u16 s2);
#endif
#ifndef PROTO_LOCAL_NpcAction_UnpackMove
void NpcAction_UnpackMove(u32 a, u32 b, u32 c, u32 d, void *s0, u16 *s1, u8 *out);
#endif
#ifndef PROTO_LOCAL_NpcAction_PackTurn
void NpcAction_PackTurn(u8 *out, u16 a, u16 b, u32 c);
#endif
#ifndef PROTO_LOCAL_NpcAction_UnpackTurn
void NpcAction_UnpackTurn(void *a, void *b, u16 *c, u8 *d);
#endif
#ifndef PROTO_LOCAL_NpcAction_PackAnim
void NpcAction_PackAnim(u8 *p, u32 a, u32 b, u32 c, u16 d);
#endif
#ifndef PROTO_LOCAL_NpcAction_UnpackAnim
void NpcAction_UnpackAnim(u32 *a, u8 *b, u16 *c, u16 *d, u8 *src);
#endif
#ifndef PROTO_LOCAL_NpcAction_PackItem
void NpcAction_PackItem(void *unused, void *p, u16 *v);
#endif
#ifndef PROTO_LOCAL_NpcAction_UnpackItem
void NpcAction_UnpackItem(u16 *out, void *in);
#endif
#ifndef PROTO_LOCAL_Emotion_GetEntry
NpcEmotionEntry *Emotion_GetEntry(u32 i);
#endif
#ifndef PROTO_LOCAL__ZN13NpcActionCtrl11act0EStep01EP12Unk_02006d14
void _ZN13NpcActionCtrl11act0EStep01EP12Unk_02006d14(NpcActionCtrl *s, NpcActor *c);
#endif
#ifndef PROTO_LOCAL__ZN13NpcActionCtrl11act0EStep02EP12Unk_02006d14
void _ZN13NpcActionCtrl11act0EStep02EP12Unk_02006d14(NpcActionCtrl *s, NpcActor *c);
#endif
#ifndef PROTO_LOCAL__ZN13NpcActionCtrl11act0EStep03EP12Unk_02006d14
void _ZN13NpcActionCtrl11act0EStep03EP12Unk_02006d14(NpcActionCtrl *s, NpcActor *c);
#endif
#ifndef PROTO_LOCAL__ZN13NpcActionCtrl11act0EStep04EP12Unk_02006d14
void _ZN13NpcActionCtrl11act0EStep04EP12Unk_02006d14(NpcActionCtrl *s, NpcActor *c);
#endif
#ifndef PROTO_LOCAL__ZN13NpcActionCtrl11act0EStep05EP12Unk_02006d14
void _ZN13NpcActionCtrl11act0EStep05EP12Unk_02006d14(NpcActionCtrl *s, NpcActor *c);
#endif
#ifndef PROTO_LOCAL__ZN13NpcActionCtrl15waitItemAnimEndEP12Unk_02006d14Ptjj
BOOL _ZN13NpcActionCtrl15waitItemAnimEndEP12Unk_02006d14Ptjj(NpcActionCtrl *s, NpcActor *c, void *p, u32 a, u8 b);
#endif
#ifndef PROTO_LOCAL__ZN13NpcActionCtrl11act0EStep06EP12Unk_02006d14
void _ZN13NpcActionCtrl11act0EStep06EP12Unk_02006d14(NpcActionCtrl *s, NpcActor *c);
#endif
#ifndef PROTO_LOCAL__ZN13NpcActionCtrl11act0EStep07EP12Unk_02006d14
void _ZN13NpcActionCtrl11act0EStep07EP12Unk_02006d14(NpcActionCtrl *s, NpcActor *c);
#endif
#ifndef PROTO_LOCAL__ZN13NpcActionCtrl11act0EStep08EP12Unk_02006d14
void _ZN13NpcActionCtrl11act0EStep08EP12Unk_02006d14(NpcActionCtrl *s, NpcActor *c);
#endif
#ifndef PROTO_LOCAL__ZN13NpcActionCtrl11act0EStep09EP12Unk_02006d14
void _ZN13NpcActionCtrl11act0EStep09EP12Unk_02006d14(NpcActionCtrl *s, NpcActor *c);
#endif
#ifndef PROTO_LOCAL__ZN13NpcActionCtrl11act0EStep10EP12Unk_02006d14
void _ZN13NpcActionCtrl11act0EStep10EP12Unk_02006d14(NpcActionCtrl *s, NpcActor *c);
#endif
#ifndef PROTO_LOCAL__ZN13NpcActionCtrl11act0EStep11EP12Unk_02006d14
void _ZN13NpcActionCtrl11act0EStep11EP12Unk_02006d14(NpcActionCtrl *s, NpcActor *c);
#endif
#ifndef PROTO_LOCAL__ZN13NpcActionCtrl11act0EStep12EP12Unk_02006d14
void _ZN13NpcActionCtrl11act0EStep12EP12Unk_02006d14(NpcActionCtrl *s, NpcActor *c);
#endif
#ifndef PROTO_LOCAL__ZN13NpcActionCtrl11act0EStep13EP12Unk_02006d14
void _ZN13NpcActionCtrl11act0EStep13EP12Unk_02006d14(NpcActionCtrl *s, NpcActor *c);
#endif
#ifndef PROTO_LOCAL__ZN13NpcActionCtrl11act0EStep14EP12Unk_02006d14
void _ZN13NpcActionCtrl11act0EStep14EP12Unk_02006d14(NpcActionCtrl *s, NpcActor *c);
#endif
#ifndef PROTO_LOCAL__ZN13NpcActionCtrl11act0EStep15EP12Unk_02006d14
void _ZN13NpcActionCtrl11act0EStep15EP12Unk_02006d14(NpcActionCtrl *s, NpcActor *c);
#endif
#ifndef PROTO_LOCAL__ZN13NpcActionCtrl11act0EStep16EP12Unk_02006d14
void _ZN13NpcActionCtrl11act0EStep16EP12Unk_02006d14(NpcActionCtrl *s, NpcActor *c);
#endif
#ifndef PROTO_LOCAL__ZN13NpcActionCtrl11act0EStep17EP12Unk_02006d14
void _ZN13NpcActionCtrl11act0EStep17EP12Unk_02006d14(NpcActionCtrl *s, NpcActor *c);
#endif
#ifndef PROTO_LOCAL__ZN13NpcActionCtrl11act0EStep18EP12Unk_02006d14
void _ZN13NpcActionCtrl11act0EStep18EP12Unk_02006d14(NpcActionCtrl *s, NpcActor *c);
#endif
#ifndef PROTO_LOCAL__ZN13NpcActionCtrl11act0EStep19EP12Unk_02006d14
void _ZN13NpcActionCtrl11act0EStep19EP12Unk_02006d14(NpcActionCtrl *s, NpcActor *c);
#endif
#ifndef PROTO_LOCAL_TalkRequest_GetPlayerId
s32 TalkRequest_GetPlayerId(void);
#endif
#ifndef PROTO_LOCAL__ZN13VillagerRoute11scanForPathEP7VecFx32P12RouteGridPosP5VecXZiS3_iP8BlockMap
BOOL _ZN13VillagerRoute11scanForPathEP7VecFx32P12RouteGridPosP5VecXZiS3_iP8BlockMap(void* unused, void* p1, u32* pos, u32* step, s32 n, u32* bound, s32 flag, void* q);
#endif
#ifndef PROTO_LOCAL_VillagerRoute_PickPathUnitInBlock
void VillagerRoute_PickPathUnitInBlock(RouteGridPos *out, s32 unused, RouteGridPos *p, BlockMap *obj);
#endif
#ifndef PROTO_LOCAL_VillagerRoute_PickAttr200Target
void VillagerRoute_PickAttr200Target(Vec2 *out, void *self);
#endif
#ifndef PROTO_LOCAL_VillagerRoute_PickOtherHouseDoor
void VillagerRoute_PickOtherHouseDoor(Vec2 *out, void *self, u32 unused, NpcActor *obj);
#endif
#ifndef PROTO_LOCAL_VillagerRoute_PickOtherHouseBlock
void VillagerRoute_PickOtherHouseBlock(Vec2 *out, void *self, u32 unused, NpcActor *obj);
#endif
#ifndef PROTO_LOCAL_VillagerRoute_PickOwnHouseDoor
void VillagerRoute_PickOwnHouseDoor(Vec2 *out, void *self, u32 unused, NpcActor *obj);
#endif
#ifndef PROTO_LOCAL_VillagerRoute_PickOwnHouseBlock
void VillagerRoute_PickOwnHouseBlock(Vec2 *out, void *self, u32 unused, NpcActor *obj);
#endif
#ifndef PROTO_LOCAL_VillagerRoute_PickRandomBlock
void VillagerRoute_PickRandomBlock(Vec2 *out, void *self);
#endif
#ifndef PROTO_LOCAL_VillagerRoute_PickCoastBlock
void VillagerRoute_PickCoastBlock(Vec2 *out, void *self, VecFx32 *v);
#endif
}
#endif

#endif
