#ifndef PROTO_PROTO_MAIN_UNK_02041E00_H
#define PROTO_PROTO_MAIN_UNK_02041E00_H

// Prototypes of the functions defined in src/main/unk_02041e00.cpp (generated: tools/host_protos.py)

#include "types.h"
#include "field/FieldAction.h"
#include "game/Unk_02042104_Date.h"
#include "town/TownBlockMap.h"
#include "town/TownUpdateThread.h"
struct FieldActionRequest;
struct FieldActionState;
struct TownEval;
struct TownEvalAcre;
#ifdef __cplusplus
#include "gfx/EffectSplEmitter.h"
#include "gfx/VecFx32.h"
#include "types.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif
#ifndef PROTO_LOCAL_Scene_SetUnitItem
void Scene_SetUnitItem(void *a, void *b, void *c, void *d);
#endif
#ifndef PROTO_LOCAL_Town_SpawnWeeds
void Town_SpawnWeeds(void *a, void *b);
#endif
#ifndef PROTO_LOCAL_Town_WitherRafflesia
void Town_WitherRafflesia(void *a, void *b);
#endif
#ifndef PROTO_LOCAL_Town_ClearObjectsFcFd
void Town_ClearObjectsFcFd(void *a);
#endif
#ifndef PROTO_LOCAL_Town_ClearObjectFcFdAtPos
void Town_ClearObjectFcFdAtPos(void *a, void *b);
#endif
#ifndef PROTO_LOCAL_Town_RefreshEventsOffline
void Town_RefreshEventsOffline();
#endif
#ifndef PROTO_LOCAL_Town_UpdateSeashellsOffline
void Town_UpdateSeashellsOffline(void *a);
#endif
#ifndef PROTO_LOCAL_Town_UpdateSeashellsOnline
void Town_UpdateSeashellsOnline(void *a);
#endif
#ifndef PROTO_LOCAL_Town_UpdateSeashells
void Town_UpdateSeashells(void *a);
#endif
#ifndef PROTO_LOCAL_Town_RefillSeashells
void Town_RefillSeashells(void *p, void *q);
#endif
#ifndef PROTO_LOCAL_Players_SpoilTurnips
void Players_SpoilTurnips();
#endif
#ifndef PROTO_LOCAL_Town_SpoilTurnips
void Town_SpoilTurnips(void *p);
#endif
#ifndef PROTO_LOCAL_HouseRooms_SpoilTurnips
void HouseRooms_SpoilTurnips(void *p);
#endif
#ifndef PROTO_LOCAL_RecycleBin_SpoilTurnips
void RecycleBin_SpoilTurnips(void *unused);
#endif
#ifndef PROTO_LOCAL_Turnips_SpoilAll
void Turnips_SpoilAll(void *p);
#endif
#ifndef PROTO_LOCAL_TownState_UpdateSeasonPeriod
void TownState_UpdateSeasonPeriod();
#endif
#ifndef PROTO_LOCAL_Town_CheckDayChange
void Town_CheckDayChange();
#endif
#ifndef PROTO_LOCAL_Town_RebuildLitCedarList
void Town_RebuildLitCedarList();
#endif
#ifndef PROTO_LOCAL_Town_OnLoad
void Town_OnLoad();
#endif
#ifndef PROTO_LOCAL_Town_InitNew
void Town_InitNew();
#endif
#ifndef PROTO_LOCAL_Field_OnEnter
void Field_OnEnter();
#endif
#ifndef PROTO_LOCAL_TownEval_GetAdvice
void *TownEval_GetAdvice();
#endif
#ifndef PROTO_LOCAL_Town_GetUpdater
void *Town_GetUpdater();
#endif
#ifndef PROTO_LOCAL_LitCedarList_Clear
void LitCedarList_Clear();
#endif
#ifndef PROTO_LOCAL_Town_RefreshDailyObjects
void Town_RefreshDailyObjects();
#endif
#ifndef PROTO_LOCAL_TownUpdater_MarkEventApplied
void TownUpdater_MarkEventApplied(void *p);
#endif
#ifndef PROTO_LOCAL_Field_ResetActions
void Field_ResetActions();
#endif
#ifndef PROTO_LOCAL_Field_UpdateActions
void Field_UpdateActions();
#endif
#ifndef PROTO_LOCAL_PendingUnits_Enable
void PendingUnits_Enable();
#endif
#ifndef PROTO_LOCAL_PendingUnits_Flush
void PendingUnits_Flush();
#endif
#ifndef PROTO_LOCAL_Town_SetBeesReleased
void Town_SetBeesReleased(void);
#endif
#ifndef PROTO_LOCAL_Town_ClearBeesReleased
void Town_ClearBeesReleased(void);
#endif
#ifndef PROTO_LOCAL_ChopCount_ClearAll
void ChopCount_ClearAll(void);
#endif
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_TownEval_RemoveObject
void TownEval_RemoveObject(TownEvalAcre *out, void *map, s32 x, s32 z, s32 n);
#endif
#ifndef PROTO_LOCAL_TownEval_EvaluateAndCleanAcre
void TownEval_EvaluateAndCleanAcre(TownEvalAcre *out, void *map, s32 x, s32 z);
#endif
#ifndef PROTO_LOCAL_TownEval_EvaluateAcre
void TownEval_EvaluateAcre(TownEvalAcre *out, void *map, s32 x, s32 z);
#endif
#ifndef PROTO_LOCAL_TownEval_GetScoreRank
s32 TownEval_GetScoreRank(s32 a, s32 v);
#endif
#ifndef PROTO_LOCAL_TownEval_EvaluateAndClean
void TownEval_EvaluateAndClean(TownEval *a, TownBlockMap *b, s32 w, s32 h);
#endif
#ifndef PROTO_LOCAL_TownEval_Evaluate
s32 TownEval_Evaluate(TownEval *a, TownBlockMap *b);
#endif
#ifndef PROTO_LOCAL_TownEval_GetTownRank
s32 TownEval_GetTownRank(void *a, s32 *p, s32 w, s32 h);
#endif
#ifndef PROTO_LOCAL_TownEval_EvaluateAcreAt
void TownEval_EvaluateAcreAt(u8 *a, void *b, s32 i, s32 j);
#endif
#ifndef PROTO_LOCAL_Area_PlaceItem
void Area_PlaceItem(void *a, s32 x, s32 y, u32 v, s32 flag);
#endif
#ifndef PROTO_LOCAL_BlockMap_PlaceItem
void BlockMap_PlaceItem(void *a, s32 x, s32 y, u32 v, s32 flag);
#endif
#ifndef PROTO_LOCAL_BlockMap_PlaceItemAt
void BlockMap_PlaceItemAt(void *a0, void *a1, s32 a2, s32 a3, s32 a4, s32 a5, u16 a6, s32 a7);
#endif
#ifndef PROTO_LOCAL_Town_WitherSapling
void Town_WitherSapling(void *a, u32 v, s32 x, s32 y);
#endif
#ifndef PROTO_LOCAL_Town_GrowTree
void Town_GrowTree(void *a, u16 *p, s32 x, s32 y);
#endif
#ifndef PROTO_LOCAL_Town_IsSaplingBlocker
BOOL Town_IsSaplingBlocker(u16 *p);
#endif
#ifndef PROTO_LOCAL_Town_IsSaplingBlockerOrRock
BOOL Town_IsSaplingBlockerOrRock(u16 *p);
#endif
#ifndef PROTO_LOCAL_Town_IsSaplingBlockerAt
BOOL Town_IsSaplingBlockerAt(void *a, s32 *pos);
#endif
#ifndef PROTO_LOCAL_Town_WitherSaplingAt
s32 Town_WitherSaplingAt(void *a, s32 *pos);
#endif
#ifndef PROTO_LOCAL_Flower_GetSpecies
s32 Flower_GetSpecies(u16 *p);
#endif
#ifndef PROTO_LOCAL_Flower_GetColor
s32 Flower_GetColor(u16 *p);
#endif
#ifndef PROTO_LOCAL_Flower_PickHybrid
u16 Flower_PickHybrid(u16 *a, u16 *b);
#endif
#ifndef PROTO_LOCAL_Town_UpdateFlowers
void Town_UpdateFlowers(u32 a, void *m);
#endif
#ifndef PROTO_LOCAL_Town_UpdateFlowersExtraDay
void Town_UpdateFlowersExtraDay(u32 a, void *m, s32 c);
#endif
#ifndef PROTO_LOCAL_Town_LimitSaplingsPerQuadrant
void Town_LimitSaplingsPerQuadrant(void *a, void *q, s32 w, s32 h);
#endif
#ifndef PROTO_LOCAL_Town_UpdateTrees
void Town_UpdateTrees(void *a, void *q, s32 c, s32 d);
#endif
#ifndef PROTO_LOCAL_Town_CanSpawnCloverAt
BOOL Town_CanSpawnCloverAt(void *p, s32 x, s32 y);
#endif
#ifndef PROTO_LOCAL_Town_IsGrass
BOOL Town_IsGrass(void *p, s32 x, s32 y);
#endif
#ifndef PROTO_LOCAL_Town_CanSpawnWeedAt
BOOL Town_CanSpawnWeedAt(void *p, s32 x, s32 y);
#endif
#ifndef PROTO_LOCAL_Town_IsPlantable
BOOL Town_IsPlantable(void *p, s32 x, s32 y);
#endif
#ifndef PROTO_LOCAL_Town_CanBuryAt
BOOL Town_CanBuryAt(void *p, s32 x, s32 y);
#endif
#ifndef PROTO_LOCAL_Town_GetSandAttr
s32 Town_GetSandAttr(void *p, s32 x, s32 y);
#endif
#ifndef PROTO_LOCAL_Town_IsSandAt
BOOL Town_IsSandAt(void *p, s32 x, s32 y);
#endif
#ifndef PROTO_LOCAL_Town_CollectFreeUnits
s32 Town_CollectFreeUnits(void *a, Vec2 *arr, void *c, s32 d, s32 e, s32 (*fn)(void *, s32, s32));
#endif
#ifndef PROTO_LOCAL_Town_PlaceAtRandomUnit
s32 Town_PlaceAtRandomUnit(void *a, void *b, s32 n, Vec2 *arr, u16 e, s32 g);
#endif
#ifndef PROTO_LOCAL_Town_SpawnItemInAcre
BOOL Town_SpawnItemInAcre(void *a, void *b, void *c, s32 d, u16 e, s32 (*f)(void *, s32, s32), s32 g);
#endif
#ifndef PROTO_LOCAL_Town_MakeSpecialTree
s32 Town_MakeSpecialTree(void *a, void *b, s32 x, s32 y, s32 e);
#endif
#ifndef PROTO_LOCAL_Town_SpawnBeeTrees
void Town_SpawnBeeTrees(void *a, void *b, s32 w, s32 h);
#endif
#ifndef PROTO_LOCAL_Town_SpawnFurnitureTrees
void Town_SpawnFurnitureTrees(void *a, void *b, s32 c, s32 d);
#endif
#ifndef PROTO_LOCAL_Town_SpawnBellTrees
void Town_SpawnBellTrees(void *a, void *b, s32 w, s32 h);
#endif
#ifndef PROTO_LOCAL_Town_SpawnSpecialTrees
void Town_SpawnSpecialTrees(void *a, void *b, s32 c, s32 d);
#endif
#ifndef PROTO_LOCAL_Pos_IsInList
BOOL Pos_IsInList(void *a, Vec2 *pos, Vec2 *arr, s32 n);
#endif
#ifndef PROTO_LOCAL_Town_SpawnFlowersAroundHouse
void Town_SpawnFlowersAroundHouse(void *a, void *b, Vec2 *pos, s32 d);
#endif
#ifndef PROTO_LOCAL_Town_SpawnVillagerHouseFlowers
void Town_SpawnVillagerHouseFlowers(void *a, void *b, s32 c, s32 d);
#endif
#ifndef PROTO_LOCAL_Town_UpdateVillagerHouseFlowers
void Town_UpdateVillagerHouseFlowers(void *a, void *b, void *c, s32 d);
#endif
#ifndef PROTO_LOCAL_Town_SpawnRandomFlower
void Town_SpawnRandomFlower(void *a, void *b, s32 c, s32 d);
#endif
#ifndef PROTO_LOCAL_Town_BreedFlowers
void Town_BreedFlowers(void *a, TownBlockMap *b, s32 c, s32 d);
#endif
#ifndef PROTO_LOCAL_Town_SpawnDandelion
void Town_SpawnDandelion(void *a, void *b, s32 c, s32 d);
#endif
#ifndef PROTO_LOCAL_Town_SpawnClover
void Town_SpawnClover(void *a, void *b, s32 c, s32 d);
#endif
#ifndef PROTO_LOCAL_Town_PickJacobsLadderAcre
void Town_PickJacobsLadderAcre(Vec2 *out, void *a, s32 c, s32 d);
#endif
#ifndef PROTO_LOCAL_Town_SpawnJacobsLadder
void Town_SpawnJacobsLadder(void *a, void *b, s32 c, s32 d);
#endif
#ifndef PROTO_LOCAL_Town_TrySpawnJacobsLadder
void Town_TrySpawnJacobsLadder(void *a, void *b, s32 c, s32 d);
#endif
#ifndef PROTO_LOCAL_Town_SpawnRafflesia
s32 Town_SpawnRafflesia(void *a, void *b, s32 c, s32 d);
#endif
#ifndef PROTO_LOCAL_Town_UpdateRafflesia
void Town_UpdateRafflesia(void *a, void *b, s32 c, s32 d);
#endif
#ifndef PROTO_LOCAL_Town_BuryFossils
void Town_BuryFossils(void *a, void *b, s32 c, s32 d);
#endif
#ifndef PROTO_LOCAL_Town_BuryPitfallSeed
void Town_BuryPitfallSeed(void *a, void *b, s32 c, s32 d);
#endif
#ifndef PROTO_LOCAL_Town_ConvertRockInAcre
BOOL Town_ConvertRockInAcre(void *a, void *b, TownEvalAcre *cell, s32 d, s32 e, s32 f);
#endif
#ifndef PROTO_LOCAL_Town_ConvertRandomRock
s32 Town_ConvertRandomRock(void *a, void *b, s32 c, s32 d, s32 e, s32 f);
#endif
#ifndef PROTO_LOCAL_Town_UpdateSpecialRocks
void Town_UpdateSpecialRocks(void *a, void *b, s32 c, s32 d);
#endif
#ifndef PROTO_LOCAL_Town_UpdateRedTurnips
void Town_UpdateRedTurnips(void *a, TownBlockMap *b, s32 c);
#endif
#ifndef PROTO_LOCAL_Town_SpawnCoconut
void Town_SpawnCoconut(void *a, void *b, s32 c);
#endif
#ifndef PROTO_LOCAL_Town_BuryGyroids
void Town_BuryGyroids(void *a, void *b, s32 c, s32 d, u8 e);
#endif
#ifndef PROTO_LOCAL_Town_UpgradeBuriedShovels
void Town_UpgradeBuriedShovels(void *a, void *b, s32 c, s32 d);
#endif
#ifndef PROTO_LOCAL_Town_CountEventDays
s32 Town_CountEventDays(void *a, s32 b, u8 *c, u8 *d, s32 e, s32 f, s32 g);
#endif
#ifndef PROTO_LOCAL_Item_RandomAcorn
u32 Item_RandomAcorn(void *a);
#endif
#ifndef PROTO_LOCAL_Town_DropAcornsInAcre
void Town_DropAcornsInAcre(void *a, void *b, s32 x, s32 z);
#endif
#ifndef PROTO_LOCAL_Town_DropAcorns
void Town_DropAcorns(void *a, void *b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h, s32 i);
#endif
#ifndef PROTO_LOCAL_Town_ApplyAcornEvent
void Town_ApplyAcornEvent(void *a, void *b, void *c, void *d, s32 e, s32 f, s32 g, s32 h, s32 i);
#endif
#ifndef PROTO_LOCAL_Town_ApplyVillagerFlowerEvent
void Town_ApplyVillagerFlowerEvent(void *a, void *b, void *c, void *d, s32 e, s32 f, s32 g);
#endif
#ifndef PROTO_LOCAL_Town_DecorateCedarsInAcre
void Town_DecorateCedarsInAcre(void *a, void *m, s32 x, s32 z);
#endif
#ifndef PROTO_LOCAL_Town_DecorateCedars
void Town_DecorateCedars(void *a, void *m, s32 n);
#endif
#ifndef PROTO_LOCAL_Town_UndecorateCedarsInAcre
void Town_UndecorateCedarsInAcre(void *a, void *m, s32 x, s32 z);
#endif
#ifndef PROTO_LOCAL_Town_UndecorateCedars
void Town_UndecorateCedars(void *a, void *b, s32 c);
#endif
#ifndef PROTO_LOCAL_Town_MarkEventApplied
void Town_MarkEventApplied(void *a, u32 b);
#endif
#ifndef PROTO_LOCAL_Town_ApplyDailyEvents
void Town_ApplyDailyEvents(void *a, void *b, void *c, s32 d, s32 e, s32 f, s32 g);
#endif
#ifndef PROTO_LOCAL_Town_PlaceVisitorStructures
void Town_PlaceVisitorStructures(u32 a, u32 b, u32 c);
#endif
#ifndef PROTO_LOCAL_Town_EndEventEffect
s32 Town_EndEventEffect(void *a, s32 id, void *p, s32 x, s32 y);
#endif
#ifndef PROTO_LOCAL_Town_CleanupExpiredEvents
void Town_CleanupExpiredEvents(void *a, void *p, s32 x, s32 y, void *d);
#endif
#ifndef PROTO_LOCAL_Town_RemoveVisitorStructures
void Town_RemoveVisitorStructures(void *a, s32 b);
#endif
#ifndef PROTO_LOCAL_Town_UpdateEvents
void Town_UpdateEvents(void *a, void *p, s32 x, s32 y, void *c, s32 f);
#endif
#ifndef PROTO_LOCAL_Town_RefreshEvents
void Town_RefreshEvents(void *a, s32 b);
#endif
#ifndef PROTO_LOCAL_Flower_GetWateredForm
u16 Flower_GetWateredForm(void *a, u16 *q, s32 flag);
#endif
#ifndef PROTO_LOCAL_Town_WaterAll
void Town_WaterAll(void *a, void *p, s32 w, s32 h);
#endif
#ifndef PROTO_LOCAL_Town_AdvanceDays
void Town_AdvanceDays(void *a, u8 *b, u8 *c, s32 n, u8 e, s32 f);
#endif
#ifndef PROTO_LOCAL_Item_RandomSeashell
u16 Item_RandomSeashell(void *a);
#endif
#ifndef PROTO_LOCAL_Town_SpawnSeashellsInAcre
void Town_SpawnSeashellsInAcre(void *a, void *b, s32 c);
#endif
#ifndef PROTO_LOCAL_Town_WashUpBottle
s32 Town_WashUpBottle(void *p);
#endif
#ifndef PROTO_LOCAL_Town_ApplyElapsedDays
void Town_ApplyElapsedDays(void *a, void *b, s32 c, s32 d, s32 e);
#endif
#ifndef PROTO_LOCAL_Town_UpdateDay
void Town_UpdateDay(s32 flag);
#endif
#ifndef PROTO_LOCAL_Town_IsClockBeforeLastUpdate
BOOL Town_IsClockBeforeLastUpdate();
#endif
#ifndef PROTO_LOCAL_Town_GetEnvironmentRank
s32 Town_GetEnvironmentRank();
#endif
#ifndef PROTO_LOCAL_Town_GetRafflesiaPos
BOOL Town_GetRafflesiaPos(void *out);
#endif
#ifndef PROTO_LOCAL_LitCedarList_Find
s32 LitCedarList_Find(s32 a, s32 b);
#endif
#ifndef PROTO_LOCAL_LitCedarList_Add
void LitCedarList_Add(s32 a, s32 b);
#endif
#ifndef PROTO_LOCAL_PendingUnit_Set
void PendingUnit_Set(PendingUnit *e, u8 aid, u16 pos, u16 a, u16 c, u8 k, u8 b, u8 c2, u8 d, u8 f, s8 g);
#endif
#ifndef PROTO_LOCAL_PendingUnit_Apply
s32 PendingUnit_Apply(PendingUnit *e);
#endif
#ifndef PROTO_LOCAL_PendingUnit_Reset
s32 PendingUnit_Reset(PendingUnit *e);
#endif
#ifndef PROTO_LOCAL_PendingUnit_SetIndex
void PendingUnit_SetIndex(s32 idx, u8 aid, Vec2 *pos, u16 a, u16 c, u8 k, u8 b, u8 c2, u8 d, u8 f, s8 g);
#endif
#ifndef PROTO_LOCAL_PendingUnit_CanAddAt
BOOL PendingUnit_CanAddAt(Vec2 *pos);
#endif
#ifndef PROTO_LOCAL_PendingUnit_Add
BOOL PendingUnit_Add(u8 aid, Vec2 *pos, u16 a, u16 c, u8 k, u8 b, u8 c2, u8 d, u8 f, s8 g);
#endif
#ifndef PROTO_LOCAL_PendingUnit_Reserve
BOOL PendingUnit_Reserve(u8 aid, Vec2 *pos, u16 a, u16 c, u8 k, u8 b, u8 c2, u8 d, u8 f, s8 g);
#endif
#ifndef PROTO_LOCAL_PendingUnit_Replace
void PendingUnit_Replace(u8 aid, Vec2 *pos, u16 a, u16 c, u8 k, u8 b, u8 c2, u8 d, u8 f, s8 g);
#endif
#ifndef PROTO_LOCAL_PendingUnit_ApplyAt
void PendingUnit_ApplyAt(Vec2 *pos, s32 flag);
#endif
#ifndef PROTO_LOCAL_PendingUnit_ApplyIndex
void PendingUnit_ApplyIndex(s32 i);
#endif
#ifndef PROTO_LOCAL_PendingUnit_ApplyAtIfAid
void PendingUnit_ApplyAtIfAid(Vec2 *pos, u32 v, s32 flag);
#endif
#ifndef PROTO_LOCAL_PendingUnit_CancelAt
void PendingUnit_CancelAt(Vec2 *pos, s32 flag);
#endif
#ifndef PROTO_LOCAL_PendingUnit_CommitAt
void PendingUnit_CommitAt(Vec2 *pos, s32 flag);
#endif
#ifndef PROTO_LOCAL_PendingUnit_ClearActiveOfAid
void PendingUnit_ClearActiveOfAid(u32 aid);
#endif
#ifndef PROTO_LOCAL_PendingUnit_IndexAt
s32 PendingUnit_IndexAt(Vec2 *pos, s32 flag);
#endif
#ifndef PROTO_LOCAL_PendingUnit_Find
s32 PendingUnit_Find(Vec2 *pos, s32 flag);
#endif
#ifndef PROTO_LOCAL_PendingUnit_FindByAid
s32 PendingUnit_FindByAid(s32 aid, Vec2 *pos, s32 flag);
#endif
#ifndef PROTO_LOCAL_PendingUnit_FindForAid
s32 PendingUnit_FindForAid(u32 a, Vec2 *p, s32 b);
#endif
#ifndef PROTO_LOCAL_PendingUnit_FindFree
s32 PendingUnit_FindFree();
#endif
#ifndef PROTO_LOCAL_PendingUnit_FindActiveOfAid
s32 PendingUnit_FindActiveOfAid(u32 a);
#endif
#ifndef PROTO_LOCAL_PendingUnit_FindBySlot
s32 PendingUnit_FindBySlot(u32 a, u32 b);
#endif
#ifndef PROTO_LOCAL_PendingUnit_Get
PendingUnit *PendingUnit_Get(u32 i);
#endif
#ifndef PROTO_LOCAL_PendingUnit_GetActivePosOfAid
u8 *PendingUnit_GetActivePosOfAid(u32 a);
#endif
#ifndef PROTO_LOCAL_PendingUnits_ClearAll
void PendingUnits_ClearAll(u8 *a);
#endif
#ifndef PROTO_LOCAL_Field_IsUnitClearOfOthers
BOOL Field_IsUnitClearOfOthers(Vec2 *p, s32 idx);
#endif
#ifndef PROTO_LOCAL_Field_IsUnitClearOfOthersForAid
BOOL Field_IsUnitClearOfOthersForAid(Vec2 *p, u32 x);
#endif
#ifndef PROTO_LOCAL_Field_IsUnitClearOfOthersLocal
BOOL Field_IsUnitClearOfOthersLocal(Vec2 *p);
#endif
#ifndef PROTO_LOCAL_FieldAction_CanReserveUnit
BOOL FieldAction_CanReserveUnit(u32 idx, Vec2 *p);
#endif
#ifndef PROTO_LOCAL_FieldAction_PreApplyOffline
BOOL FieldAction_PreApplyOffline(FieldActionRequestMsg *s, FieldActionRequest *e);
#endif
#ifndef PROTO_LOCAL_FieldAction_Submit
void FieldAction_Submit(u8 idx, u32 arg);
#endif
#ifndef PROTO_LOCAL_TreeDrop_FindUnit
BOOL TreeDrop_FindUnit(FieldActionResultMsg *a, Vec2 *p, u32 idx, void *obj);
#endif
#ifndef PROTO_LOCAL_Tree_GetDropItem
u32 Tree_GetDropItem(FieldActionResultMsg *a, u32 id);
#endif
#ifndef PROTO_LOCAL_TreeDrop_SpawnFruit
void TreeDrop_SpawnFruit(FieldActionResultMsg *o, u32 x, u32 code);
#endif
#ifndef PROTO_LOCAL_TreeDrop_SpawnSpecial
void TreeDrop_SpawnSpecial(FieldActionResultMsg *o, FieldActionRequestMsg *s, u32 x);
#endif
#ifndef PROTO_LOCAL_TreeDrop_Spawn
BOOL TreeDrop_Spawn(FieldActionResultMsg *o, FieldActionRequestMsg *s, u32 x);
#endif
#ifndef PROTO_LOCAL_FieldAction_HostProcess
void FieldAction_HostProcess(FieldActionRequestMsg *src, u8 flag, s32 t);
#endif
#ifndef PROTO_LOCAL_FieldAction_ApplyResultOffscreen
void FieldAction_ApplyResultOffscreen(FieldActionResultMsg *e, s32 m);
#endif
#ifndef PROTO_LOCAL_FieldAction_OnNetResult
void FieldAction_OnNetResult(FieldActionResultMsg *e, s32 t);
#endif
#ifndef PROTO_LOCAL_FlowerFx_SetParams
void FlowerFx_SetParams(FlowerFxParams *g, s32 a, s32 b, s32 c, u8 d, VecFx32 *v, s16 e);
#endif
#ifndef PROTO_LOCAL_FlowerFx_InitByColor
void FlowerFx_InitByColor(EffectSplEmitter *p);
#endif
#ifndef PROTO_LOCAL_FlowerFx_InitBySpecies
void FlowerFx_InitBySpecies(EffectSplEmitter *p);
#endif
#ifndef PROTO_LOCAL_Flower_SpawnPetalFx
void Flower_SpawnPetalFx(u16 *a, VecXZ *pos, s16 c, s32 d);
#endif
#ifndef PROTO_LOCAL_Flower_SpawnPetalFxAt
void Flower_SpawnPetalFxAt(u16 *a, VecXZ *p, s16 c, s32 d);
#endif
#ifndef PROTO_LOCAL_Weed_SpawnPullFx
void Weed_SpawnPullFx(u16 *a, VecXZ *p);
#endif
#ifndef PROTO_LOCAL_DeadTurnip_SpawnDigFx
void DeadTurnip_SpawnDigFx(VecXZ *p);
#endif
#ifndef PROTO_LOCAL_Flower_TrampleTile
void Flower_TrampleTile(void *m, VecXZ *p, s32 f);
#endif
#ifndef PROTO_LOCAL_Flower_TrampleAt
void Flower_TrampleAt(VecXZ *p, s32 f);
#endif
#ifndef PROTO_LOCAL_Flower_Trample
void Flower_Trample(VecXZ *p);
#endif
#ifndef PROTO_LOCAL_Flower_PlayTrampleFx
void Flower_PlayTrampleFx(VecXZ *p);
#endif
#ifndef PROTO_LOCAL_Field_AidOrLocal
s32 Field_AidOrLocal(s32 a);
#endif
#ifndef PROTO_LOCAL_Field_AidOrZero
s32 Field_AidOrZero(s32 a);
#endif
#ifndef PROTO_LOCAL_Field_IsLocalAid
s32 Field_IsLocalAid(s32 a);
#endif
#ifndef PROTO_LOCAL_FieldPlayer_GetHeldItem
u32 FieldPlayer_GetHeldItem(u32 slot);
#endif
#ifndef PROTO_LOCAL_FieldAction_TryMoneyTree
void FieldAction_TryMoneyTree(u16 *out, u8 *flag, u16 c);
#endif
#ifndef PROTO_LOCAL_Item_ToPlantedFieldId
BOOL Item_ToPlantedFieldId(u16 *out, u16 *out2, u16 c);
#endif
#ifndef PROTO_LOCAL_FieldAction_ResolveBuryItem
void FieldAction_ResolveBuryItem(void *a, u16 *p, u16 *q, u8 *r, u16 e);
#endif
#ifndef PROTO_LOCAL_Town_CanReleaseBees
BOOL Town_CanReleaseBees(void);
#endif
#ifndef PROTO_LOCAL_FieldAction_RequestToolAtPending
s32 FieldAction_RequestToolAtPending(s32 a, s32 b, s32 c, u16 d);
#endif
#ifndef PROTO_LOCAL_FieldAction_RequestToolAtPendingForAid
s32 FieldAction_RequestToolAtPendingForAid(s32 a, s32 b, s32 c, u16 d);
#endif
#ifndef PROTO_LOCAL_FieldAction_PollResult
s32 FieldAction_PollResult(s32 idx);
#endif
#ifndef PROTO_LOCAL_FieldAction_RequestAtFreeUnit
s32 FieldAction_RequestAtFreeUnit(s32 a, s32 b, u16 c);
#endif
#ifndef PROTO_LOCAL_FieldAction_RequestDrop
s32 FieldAction_RequestDrop(s32 a, u16 b);
#endif
#ifndef PROTO_LOCAL_FieldAction_RequestPlaceAtPending
s32 FieldAction_RequestPlaceAtPending(s32 a, u16 b);
#endif
#ifndef PROTO_LOCAL_FieldAction_RequestDropOrPlace
s32 FieldAction_RequestDropOrPlace(s32 a, u16 b);
#endif
#ifndef PROTO_LOCAL_FieldAction_RequestDropForAid
s32 FieldAction_RequestDropForAid(s32 a, u16 b);
#endif
#ifndef PROTO_LOCAL_FieldAction_RequestPlaceAtPendingForAid
s32 FieldAction_RequestPlaceAtPendingForAid(void *a, void *b);
#endif
#ifndef PROTO_LOCAL_FieldAction_CheckFreeUnit
u16 *FieldAction_CheckFreeUnit(u32 a, void *m, s32 x, s32 y, Vec2 *p);
#endif
#ifndef PROTO_LOCAL_FieldAction_FindDropUnit
s32 FieldAction_FindDropUnit(void *self, Vec2 *p, u8 *out);
#endif
#ifndef PROTO_LOCAL_FieldAction_PollDrop
s32 FieldAction_PollDrop(s32 idx);
#endif
#ifndef PROTO_LOCAL_FieldAction_Release
void FieldAction_Release(s32 i);
#endif
#ifndef PROTO_LOCAL_FieldAction_WaterFlowers
void FieldAction_WaterFlowers(void *self, Vec2 *p);
#endif
#ifndef PROTO_LOCAL_Field_ClearObjectFcFdAt
void Field_ClearObjectFcFdAt(s32 *p);
#endif
#ifndef PROTO_LOCAL_FieldAction_Get
FieldActionRequest *FieldAction_Get(s32 i);
#endif
#ifndef PROTO_LOCAL_FieldAction_Add
s32 FieldAction_Add(FieldActionRequest *e, u32 a1, s32 type, Vec2 *pos, u16 a5, u16 a6, u8 a7, u8 a8, s32 a9, s8 a10);
#endif
#ifndef PROTO_LOCAL_FieldAction_Clear
void FieldAction_Clear(FieldActionRequest *e, s32 i);
#endif
#ifndef PROTO_LOCAL_FieldActions_Init
void FieldActions_Init(u8 *p);
#endif
#ifndef PROTO_LOCAL_FieldActions_Update
void FieldActions_Update(u8 *p);
#endif
#ifndef PROTO_LOCAL_ChopCount_Get
s32 ChopCount_Get(FieldActionState *m, Vec2 *p);
#endif
#ifndef PROTO_LOCAL_ChopCount_Set
void ChopCount_Set(FieldActionState *m, Vec2 *p, u32 v);
#endif
#ifndef PROTO_LOCAL_TownBbs_UnpackUsedMask
s32 TownBbs_UnpackUsedMask(void *o, u8 *dst, u8 *src, s32 n);
#endif
#ifndef PROTO_LOCAL_TownBbs_PackUsedMask
void TownBbs_PackUsedMask(void *o, u8 *dst, u8 *src, s32 n);
#endif
#ifndef PROTO_LOCAL_TownBbs_PostRandomUnused
void TownBbs_PostRandomUnused(void *o, s32 n, const char *fmt, u8 *p, s32 len, Unk_02042104_Date *d);
#endif
#ifndef PROTO_LOCAL_TownBbs_PostSlogan
void TownBbs_PostSlogan(void *o, u8 *base, Unk_02042104_Date *d);
#endif
#ifndef PROTO_LOCAL_TownBbs_PostPelicanNotice
void TownBbs_PostPelicanNotice(void *o, u8 *base, Unk_02042104_Date *d);
#endif
}
#endif

#endif
