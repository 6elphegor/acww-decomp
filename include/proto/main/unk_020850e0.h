#ifndef PROTO_PROTO_MAIN_UNK_020850E0_H
#define PROTO_PROTO_MAIN_UNK_020850E0_H

// Prototypes of the functions defined in src/main/unk_020850e0.cpp (generated: tools/host_protos.py)

#include "types.h"
struct Unk_02085490_Pt;
#ifdef __cplusplus
#include "save/ContestRecord.h"
#include "types.h"
class TownSessionState;
#endif

#ifdef __cplusplus
extern "C" {
#endif
#ifndef PROTO_LOCAL_ContestRecord_JudgeGardens
void ContestRecord_JudgeGardens(void *self);
#endif
#ifndef PROTO_LOCAL_TownSessionState_CheckTortimerReward
void TownSessionState_CheckTortimerReward(void *self);
#endif
#ifndef PROTO_LOCAL_TownSessionState_Get
void *TownSessionState_Get();
#endif
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_ContestRecord_SetItem
void ContestRecord_SetItem(ContestRecord *o, u16 *in);
#endif
#ifndef PROTO_LOCAL_ContestRecord_GetItem
void ContestRecord_GetItem(u16 *out, ContestRecord *o);
#endif
#ifndef PROTO_LOCAL_ContestRecord_BeginContestDay
void ContestRecord_BeginContestDay(u8 *self, u32 mode);
#endif
#ifndef PROTO_LOCAL_ContestRecord_BeginFestival
void ContestRecord_BeginFestival(u8 *self, u32 mode);
#endif
#ifndef PROTO_LOCAL_Contest_GetCatchSize
s32 Contest_GetCatchSize(u16 *p);
#endif
#ifndef PROTO_LOCAL_Contest_GetFlowerKind
s32 Contest_GetFlowerKind(u32 *out, u16 *p);
#endif
#ifndef PROTO_LOCAL_CountSetBits
s32 CountSetBits(u32 v);
#endif
#ifndef PROTO_LOCAL_ContestRecord_ScoreVillagerGarden
s32 ContestRecord_ScoreVillagerGarden(void *obj, void *grid);
#endif
#ifndef PROTO_LOCAL_Contest_IsNextToGroundAttr4
s32 Contest_IsNextToGroundAttr4(s32 *pos);
#endif
#ifndef PROTO_LOCAL_ContestRecord_ScorePlayerGarden
s32 ContestRecord_ScorePlayerGarden(void *self, void *grid);
#endif
#ifndef PROTO_LOCAL_TownSessionState_Reset
void TownSessionState_Reset(u8 *self);
#endif
#ifndef PROTO_LOCAL_TownSessionState_TestFlag
BOOL TownSessionState_TestFlag(u32 *w, u32 bit);
#endif
#ifndef PROTO_LOCAL_TownSessionState_SetFlag
void TownSessionState_SetFlag(void *self, u32 bit);
#endif
#ifndef PROTO_LOCAL_TownSessionState_ClearFlag
void TownSessionState_ClearFlag(u32 *w, u32 bit);
#endif
#ifndef PROTO_LOCAL_TownSessionState_GetClosingTime
void *TownSessionState_GetClosingTime(u8 *p);
#endif
#ifndef PROTO_LOCAL_TownSessionState_GetTravelState
void *TownSessionState_GetTravelState(u8 *p);
#endif
#ifndef PROTO_LOCAL_TownSessionState_GetResettiFlag
void *TownSessionState_GetResettiFlag(u8 *p);
#endif
#ifndef PROTO_LOCAL_TownSessionState_GetKatieState
void *TownSessionState_GetKatieState(u8 *p);
#endif
#ifndef PROTO_LOCAL_TownSessionState_GetPeteFall
void *TownSessionState_GetPeteFall(u8 *p);
#endif
#ifndef PROTO_LOCAL_TownSessionState_GetVisitorFlags
void *TownSessionState_GetVisitorFlags(u8 *p);
#endif
#ifndef PROTO_LOCAL_TownSessionState_GetVisitorPos
void *TownSessionState_GetVisitorPos(u8 *p);
#endif
}
#ifndef PROTO_LOCAL_sVillagerGardenOffsets
extern Unk_02085490_Pt sVillagerGardenOffsets[14];
#endif
#ifndef PROTO_LOCAL_sGardenNeighbourOffsets
extern Unk_02085490_Pt sGardenNeighbourOffsets[8];
#endif
#ifndef PROTO_LOCAL_gTownSessionState
extern TownSessionState gTownSessionState;
#endif
#endif

#endif
