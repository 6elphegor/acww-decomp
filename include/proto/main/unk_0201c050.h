#ifndef PROTO_PROTO_MAIN_UNK_0201C050_H
#define PROTO_PROTO_MAIN_UNK_0201C050_H

// Prototypes of the functions defined in src/main/unk_0201c050.cpp (generated: tools/host_protos.py)

#include "types.h"
#include "save/DramaPart.h"
#include "sys/ClockDateTime.h"
struct FishSpawnTable;
struct TalkChoiceTable;
struct Unk_0202c92c_Ent;
#ifndef __cplusplus
typedef struct FishSpawnTable FishSpawnTable;
typedef struct TalkChoiceTable TalkChoiceTable;
typedef struct Unk_0202c92c_Ent Unk_0202c92c_Ent;
#endif
#ifdef __cplusplus
#include "actor/VillagerActor.h"
#include "gfx/NNSG3dRS.h"
#include "gfx/VecFx32.h"
#include "item/LetterView.h"
#include "npc/ErrandRecord.h"
#include "talk/ActorTalkRequest.h"
#include "talk/MsgString.h"
#include "talk/VillagerTalk.h"
#include "talk/VillagerTalkRequestStartTopics.h"
class PlayerData;
#endif

#ifdef __cplusplus
extern "C" {
#endif
#ifndef PROTO_LOCAL_Talk_CheckAndSetPlayerFlag
BOOL Talk_CheckAndSetPlayerFlag(u32 a, BOOL flag);
#endif
#ifndef PROTO_LOCAL_Talk_IsDramaPending
BOOL Talk_IsDramaPending(void *unused, Unk_020874e8_Bits *p, u32 mode);
#endif
#ifndef PROTO_LOCAL_Talk_AdvanceDrama
void Talk_AdvanceDrama(void *unused, Unk_020874e8_Bits *part);
#endif
#ifndef PROTO_LOCAL_Talk_IsInOwnTown
BOOL Talk_IsInOwnTown();
#endif
#ifndef PROTO_LOCAL_Talk_SelectTopicMessage
void Talk_SelectTopicMessage(void *self, void *buf, void *out, s32 a3, u8 s0, const char *s1, u8 s2, s32 s3, u8 s4);
#endif
#ifndef PROTO_LOCAL_Talk_FindFlaggedPocketItem
s32 Talk_FindFlaggedPocketItem(void *p, u16 *q);
#endif
#ifndef PROTO_LOCAL_Talk_PickWeightedIndex
s32 Talk_PickWeightedIndex(u8 *p, s32 n);
#endif
#ifndef PROTO_LOCAL_Talk_PickRandomTradeItem
void Talk_PickRandomTradeItem(u16 *out);
#endif
#ifndef PROTO_LOCAL_InsectPick_GetMissingHabitats
void InsectPick_GetMissingHabitats(s32 *out, s32 *cnt);
#endif
#ifndef PROTO_LOCAL_Talk_ArrayContains
s32 Talk_ArrayContains(s32 v, s32 *arr, s32 n);
#endif
#ifndef PROTO_LOCAL_InsectPick_CountInSlot
s32 InsectPick_CountInSlot(s32 c, u8 *p, s32 n, s32 *arr, s32 cnt);
#endif
#ifndef PROTO_LOCAL_InsectPick_PickInSlot
s32 InsectPick_PickInSlot(u16 *a, s32 *b, s32 c, u8 *p, s32 n, s32 *arr, s32 cnt);
#endif
#ifndef PROTO_LOCAL_InsectPick_PickForMonthAnyHour
s32 InsectPick_PickForMonthAnyHour(u16 *a, s32 lo, s32 hi, u8 kind);
#endif
#ifndef PROTO_LOCAL_InsectPick_PickForMonth
s32 InsectPick_PickForMonth(u16 *a, s32 lo, s32 hi, s32 d, s32 e, u8 kind);
#endif
#ifndef PROTO_LOCAL_InsectPick_PickWeightedRarity
s32 InsectPick_PickWeightedRarity(u16 *a, s32 *idxOut, s32 *b, s32 *c, ClockDateTime *now);
#endif
#ifndef PROTO_LOCAL_InsectPick_PickNow
void InsectPick_PickNow(u16 *p);
#endif
#ifndef PROTO_LOCAL_InsectPick_IsAvailable
s32 InsectPick_IsAvailable(u16 *p, s32 lo, s32 hi, s32 id);
#endif
#ifndef PROTO_LOCAL_FishPick_PickForDate
s32 FishPick_PickForDate(u16 *a, s32 lo, s32 hi, s32 d, u8 e, u8 x, u8 y);
#endif
#ifndef PROTO_LOCAL_FishPick_PickForDateAnyHour
s32 FishPick_PickForDateAnyHour(u16 *a, s32 b, s32 c, s32 d, u8 e);
#endif
#ifndef PROTO_LOCAL_FishPick_PickNow
void FishPick_PickNow(u16 *p);
#endif
#ifndef PROTO_LOCAL_FishPick_IsAvailable
s32 FishPick_IsAvailable(u16 *p, s32 lo, s32 hi, s32 id, u8 e);
#endif
#ifndef PROTO_LOCAL_InsectPick_GetHintVariant
s32 InsectPick_GetHintVariant(s32 v);
#endif
#ifndef PROTO_LOCAL_Talk_FindInS8Array
s32 Talk_FindInS8Array(s32 key, const s8 *arr, s32 n);
#endif
#ifndef PROTO_LOCAL_Talk_PickPocketItemForPlan
void Talk_PickPocketItemForPlan(u16 *out, s32 idx);
#endif
#ifndef PROTO_LOCAL_Talk_RoundBells
s32 Talk_RoundBells(s32 x);
#endif
#ifndef PROTO_LOCAL_Talk_IsInsectItem
BOOL Talk_IsInsectItem(u16 *p);
#endif
#ifndef PROTO_LOCAL_Talk_FilterPickInsect
BOOL Talk_FilterPickInsect(u16 *p, s32 v);
#endif
#ifndef PROTO_LOCAL_Talk_IsFishItem
BOOL Talk_IsFishItem(u16 *p);
#endif
#ifndef PROTO_LOCAL_Talk_FilterPickFish
BOOL Talk_FilterPickFish(u16 *p, s32 v);
#endif
#ifndef PROTO_LOCAL_Talk_IsNonFossilFurniture
BOOL Talk_IsNonFossilFurniture(u16 *p);
#endif
#ifndef PROTO_LOCAL_Talk_FilterPickNonFossilFurniture
BOOL Talk_FilterPickNonFossilFurniture(u16 *p, s32 x);
#endif
#ifndef PROTO_LOCAL_Talk_IsShirtItem
BOOL Talk_IsShirtItem(u16 *p);
#endif
#ifndef PROTO_LOCAL_Talk_FilterPickShirt
BOOL Talk_FilterPickShirt(u16 *p, s32 x);
#endif
#ifndef PROTO_LOCAL_Talk_IsFossilItem
BOOL Talk_IsFossilItem(u16 *p);
#endif
#ifndef PROTO_LOCAL_Talk_FilterPickFossil
BOOL Talk_FilterPickFossil(u16 *p, s32 x);
#endif
#ifndef PROTO_LOCAL_Talk_GetPocketMaskForItem
u32 Talk_GetPocketMaskForItem(u16 *p);
#endif
#ifndef PROTO_LOCAL_Talk_FilterPickDeliveryShirt
BOOL Talk_FilterPickDeliveryShirt(u16 *p, s32 v);
#endif
#ifndef PROTO_LOCAL_Talk_GetMoneyItem
void Talk_GetMoneyItem(u16 *out, u32 arg);
#endif
#ifndef PROTO_LOCAL_VillagerRequest_PickInsectStep0
void VillagerRequest_PickInsectStep0(u16 *p, ClockDateTime *d);
#endif
#ifndef PROTO_LOCAL_VillagerRequest_PickInsectStep1
void VillagerRequest_PickInsectStep1(u16 *p, ClockDateTime *d);
#endif
#ifndef PROTO_LOCAL_VillagerRequest_PickInsectStep3
void VillagerRequest_PickInsectStep3(u16 *p, ClockDateTime *d);
#endif
#ifndef PROTO_LOCAL_VillagerRequest_PickInsectStep4
void VillagerRequest_PickInsectStep4(u16 *p, ClockDateTime *d);
#endif
#ifndef PROTO_LOCAL_VillagerRequest_PickInsectForStep
void VillagerRequest_PickInsectForStep(u16 *p, void *unused, u32 idx);
#endif
#ifndef PROTO_LOCAL_VillagerRequest_PickFishStep0
void VillagerRequest_PickFishStep0(u16 *p, ClockDateTime *d);
#endif
#ifndef PROTO_LOCAL_VillagerRequest_PickFishStep1
void VillagerRequest_PickFishStep1(u16 *p, ClockDateTime *d);
#endif
#ifndef PROTO_LOCAL_VillagerRequest_PickFishStep3
void VillagerRequest_PickFishStep3(u16 *p, ClockDateTime *d);
#endif
#ifndef PROTO_LOCAL_VillagerRequest_PickFishStep4
void VillagerRequest_PickFishStep4(u16 *out, ClockDateTime *d);
#endif
#ifndef PROTO_LOCAL_VillagerRequest_PickFishForStep
void VillagerRequest_PickFishForStep(u16 *out, void *unused, u32 idx);
#endif
#ifndef PROTO_LOCAL_VillagerRequest_PickShirtFromGroups
void VillagerRequest_PickShirtFromGroups(u16 *out, u32 mask, s32 cnt, void *x, u8 a, u16 *b);
#endif
#ifndef PROTO_LOCAL_VillagerRequest_PickShirtOtherGroup
void VillagerRequest_PickShirtOtherGroup(u16 *out, u8 *p, u16 *arg);
#endif
#ifndef PROTO_LOCAL_VillagerRequest_PickShirtOfGroup
void VillagerRequest_PickShirtOfGroup(u16 *out, u8 *p, u16 *arg);
#endif
#ifndef PROTO_LOCAL_VillagerRequest_PickShirtOfGroupForPlayer
void VillagerRequest_PickShirtOfGroupForPlayer(u16 *out, u8 *p, u16 *arg);
#endif
#ifndef PROTO_LOCAL_Item_GetFossilPartIndexInGroup
s32 Item_GetFossilPartIndexInGroup(u16 *p, s32 v);
#endif
#ifndef PROTO_LOCAL_Item_GetFossilPartIndex
s32 Item_GetFossilPartIndex(u16 *p);
#endif
#ifndef PROTO_LOCAL_Talk_IsArbeitItem
BOOL Talk_IsArbeitItem(u16 *p, s32 flags);
#endif
#ifndef PROTO_LOCAL_Talk_GetFishHintTimeVariant
s32 Talk_GetFishHintTimeVariant(s32 v);
#endif
#ifndef PROTO_LOCAL_Talk_PickRandomMemory
void *Talk_PickRandomMemory(void *ctx, void **arr, s32 n, BOOL (*cb)(void *, void *));
#endif
#ifndef PROTO_LOCAL_Talk_GetDaysSinceMemoryTime
s32 Talk_GetDaysSinceMemoryTime(void *item);
#endif
#ifndef PROTO_LOCAL_Talk_IsMemoryLikedAndOld
BOOL Talk_IsMemoryLikedAndOld(void *ctx, void *item);
#endif
#ifndef PROTO_LOCAL_Talk_IsMemoryDislikedAndOld
BOOL Talk_IsMemoryDislikedAndOld(void *ctx, void *item);
#endif
#ifndef PROTO_LOCAL_Talk_IsMemoryLetterSender
s32 Talk_IsMemoryLetterSender(void *ctx, void *item);
#endif
#ifndef PROTO_LOCAL_Talk_IsMemoryLetterSenderFromVillagerTown
BOOL Talk_IsMemoryLetterSenderFromVillagerTown(void *ctx, void *item);
#endif
#ifndef PROTO_LOCAL_Talk_MemoryHasCompliment
BOOL Talk_MemoryHasCompliment(void *ctx, void *item);
#endif
#ifndef PROTO_LOCAL_Talk_IsMemoryLetterSenderResident
BOOL Talk_IsMemoryLetterSenderResident(void *ctx, void *item);
#endif
#ifndef PROTO_LOCAL_Talk_MemoryHasTime
BOOL Talk_MemoryHasTime(void *ctx, void *item);
#endif
#ifndef PROTO_LOCAL_Talk_MemoryAny
BOOL Talk_MemoryAny(void *ctx, void *item);
#endif
#ifndef PROTO_LOCAL_Talk_MemoryHasReceivedItem
BOOL Talk_MemoryHasReceivedItem(void *ctx, void *item);
#endif
#ifndef PROTO_LOCAL_Talk_GetTourneyHourBlock
u32 Talk_GetTourneyHourBlock(u32 x);
#endif
#ifndef PROTO_LOCAL_Talk_IsAcornItem
BOOL Talk_IsAcornItem(u16 *p);
#endif
#ifndef PROTO_LOCAL_Talk_AcornPickerFilter
BOOL Talk_AcornPickerFilter(u16 *p, s32 a);
#endif
#ifndef PROTO_LOCAL_VillagerMood_Construct
void *VillagerMood_Construct(void *p);
#endif
#ifndef PROTO_LOCAL_VillagerMood_Destruct
void *VillagerMood_Destruct(void *p);
#endif
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_TalkChoiceList_SetIndices
void TalkChoiceList_SetIndices(ActorTalkRequest *a, u8 *src, s32 n, s32 m);
#endif
#ifndef PROTO_LOCAL_Npc_GetStateHeldItem
void Npc_GetStateHeldItem(u16 *out, VillagerTalk *obj);
#endif
#ifndef PROTO_LOCAL_VillagerTalk_EnsureMemory
void VillagerTalk_EnsureMemory(VillagerTalk *self, void **pa, s32 *pb, void *c, void *d);
#endif
#ifndef PROTO_LOCAL_Talk_FindLetterState7or8
LetterView *Talk_FindLetterState7or8(void *p);
#endif
#ifndef PROTO_LOCAL_Talk_PickItemFromSpecs
void Talk_PickItemFromSpecs(u16 *out, const u32 *tbl, s32 idx, PlayerData *player);
#endif
#ifndef PROTO_LOCAL_Talk_PickErrandItem
void Talk_PickErrandItem(u16 *out, PlayerData *player);
#endif
#ifndef PROTO_LOCAL_Talk_PickClothingItem
void Talk_PickClothingItem(u16 *out, PlayerData *player);
#endif
#ifndef PROTO_LOCAL_InsectPick_PickForHours
s32 InsectPick_PickForHours(u16 *a, s32 *b, s32 *c, s32 d, Unk_0202c92c_Ent *tbl, s32 *arr, s32 cnt, u8 lo, u8 hi);
#endif
#ifndef PROTO_LOCAL_InsectPick_PickAnyHour
s32 InsectPick_PickAnyHour(u16 *a, s32 *b, s32 *c, s32 d, Unk_0202c92c_Ent *tbl, s32 *arr, s32 cnt);
#endif
#ifndef PROTO_LOCAL_FishPick_PickForHours
s32 FishPick_PickForHours(u16 *a, s32 *b, s32 *c, s32 key, FishSpawnTable *g, u8 lo0, u8 hi0);
#endif
#ifndef PROTO_LOCAL_FishPick_PickAnyHour
s32 FishPick_PickAnyHour(u16 *a, s32 *b, s32 *c, s32 d, FishSpawnTable *e);
#endif
#ifndef PROTO_LOCAL_FishPick_PickWeightedRarity
s32 FishPick_PickWeightedRarity(u16 *a, s32 *outb, s32 *c, s32 *d, FishSpawnTable *e);
#endif
#ifndef PROTO_LOCAL_Talk_FindNearbyInsectOfKinds
s32 Talk_FindNearbyInsectOfKinds(VecFx32Ctor *a, const s8 *b, s32 c, VecFx32 *d, s32 e);
#endif
#ifndef PROTO_LOCAL_Talk_IsCatchPlanDue
s32 Talk_IsCatchPlanDue(VillagerActor *a, PlanErrand *b, ClockDateTimeWords *y, u32 flag);
#endif
#ifndef PROTO_LOCAL_Talk_UpdateInsectCatchPlan
void Talk_UpdateInsectCatchPlan(VillagerActor *a, PlanErrand *b, u8 *arr, void *c, u8 flag, ClockDateTimeWords *rec);
#endif
#ifndef PROTO_LOCAL_Talk_MakeRandomNickname
BOOL Talk_MakeRandomNickname(MsgString *a, MsgString *b, u32 c);
#endif
#ifndef PROTO_LOCAL_Talk_GetWantedFossilPocketMask
u32 Talk_GetWantedFossilPocketMask(PlanErrand *h);
#endif
#ifndef PROTO_LOCAL_VillagerRequest_PickShirtForStep
void VillagerRequest_PickShirtForStep(u16 *out, VillagerTalkRequestStartTopics *self, u32 idx);
#endif
#ifndef PROTO_LOCAL_VillagerRequest_PickRandomFossil
void VillagerRequest_PickRandomFossil(u16 *out, PlanErrand *, void *);
#endif
#ifndef PROTO_LOCAL_VillagerRequest_PickFossilOfGroup
void VillagerRequest_PickFossilOfGroup(u16 *out, PlanErrand *a, void *b);
#endif
#ifndef PROTO_LOCAL_VillagerRequest_PickFossilForStep
void VillagerRequest_PickFossilForStep(u16 *out, VillagerTalkRequestStartTopics *self, u32 idx);
#endif
#ifndef PROTO_LOCAL_TalkChoiceTable_Init
void TalkChoiceTable_Init(void *a, TalkChoiceTable *t);
#endif
#ifndef PROTO_LOCAL_TalkChoiceTable_Set
void TalkChoiceTable_Set(void *a, TalkChoiceTable *t, u32 i, u8 lo, u8 hi, VillagerTalkTopicFns *val);
#endif
#ifndef PROTO_LOCAL_TalkChoiceTable_SetRange
void TalkChoiceTable_SetRange(void *a, TalkChoiceTable *t, u32 i, const u8 *r, VillagerTalkTopicFns *val);
#endif
#ifndef PROTO_LOCAL_NpcActor_JointCalcLayer3Cb
void NpcActor_JointCalcLayer3Cb(NNSG3dRS *p);
#endif
}
#endif

#endif
