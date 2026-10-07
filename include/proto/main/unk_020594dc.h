#ifndef PROTO_PROTO_MAIN_UNK_020594DC_H
#define PROTO_PROTO_MAIN_UNK_020594DC_H

// Prototypes of the functions defined in src/main/unk_020594dc.cpp (generated: tools/host_protos.py)

#include "types.h"
#include "gfx/HBlankTask.h"
#ifdef __cplusplus
#include "types.h"
class RoomScoreEvaluator;
class RoomScoreSourceCallView;
#endif

#ifdef __cplusplus
extern "C" {
#endif
#ifndef PROTO_LOCAL_HappyRoomDate_Construct
void HappyRoomDate_Construct();
#endif
#ifndef PROTO_LOCAL_HappyRoomDate_Destruct
void HappyRoomDate_Destruct();
#endif
#ifndef PROTO_LOCAL_FengShui_UpdateHouse
void FengShui_UpdateHouse();
#endif
#ifndef PROTO_LOCAL_RoomScoreEvaluator_Destruct
void RoomScoreEvaluator_Destruct();
#endif
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_HBlank_Replace
BOOL HBlank_Replace(HBlankTask *t, s32 a, void (*b)());
#endif
#ifndef PROTO_LOCAL_HappyRoomDate_SetToday
void HappyRoomDate_SetToday(u8 *out);
#endif
#ifndef PROTO_LOCAL_HappyRoomDate_Reset
void HappyRoomDate_Reset(u8 *out);
#endif
#ifndef PROTO_LOCAL_HappyRoomDate_IsNewWeek
s32 HappyRoomDate_IsNewWeek(u8 *out);
#endif
#ifndef PROTO_LOCAL_HappyRoomDate_SetEvalDay
void HappyRoomDate_SetEvalDay(u8 *out);
#endif
#ifndef PROTO_LOCAL_FengShui_GetTotal
u32 FengShui_GetTotal();
#endif
#ifndef PROTO_LOCAL_FengShui_GetWestTotal
u8 FengShui_GetWestTotal();
#endif
#ifndef PROTO_LOCAL_FengShui_GetSouthTotal
u8 FengShui_GetSouthTotal();
#endif
#ifndef PROTO_LOCAL_FengShui_GetEastTotal
u8 FengShui_GetEastTotal();
#endif
#ifndef PROTO_LOCAL_HappyRoom_CalcLuckyBonus
u32 HappyRoom_CalcLuckyBonus(u32 *p);
#endif
#ifndef PROTO_LOCAL_RoomScoreEvaluator_Construct
void RoomScoreEvaluator_Construct(RoomScoreEvaluator *p);
#endif
#ifndef PROTO_LOCAL_HappyRoom_RateMainRoom
u32 HappyRoom_RateMainRoom(RoomScoreEvaluator *p, s32 *out);
#endif
#ifndef PROTO_LOCAL_HappyRoom_EvaluateHouse
void HappyRoom_EvaluateHouse(s32 a);
#endif
#ifndef PROTO_LOCAL_HappyRoom_EvaluateVillagerRoom
s32 HappyRoom_EvaluateVillagerRoom(s32 a, s32 b, s32 *c, s32 *d, s32 *e, s32 *f);
#endif
#ifndef PROTO_LOCAL_HappyRoom_Evaluate
s32 HappyRoom_Evaluate(RoomScoreEvaluator *p, u16 *flags, s32 *pa, s32 *pb, s32 *pc, RoomScoreSourceCallView *source, s32 count, s32 base, u8 flag);
#endif
#ifndef PROTO_LOCAL_HappyRoom_SendScoreLetters
BOOL HappyRoom_SendScoreLetters(void *self, s32 a, s32 b, s32 c, s32 n);
#endif
#ifndef PROTO_LOCAL_HappyRoom_SendPrizeLetter
void HappyRoom_SendPrizeLetter(void *self, s32 n);
#endif
#ifndef PROTO_LOCAL_RoomMap_GetFloorBounds
BOOL RoomMap_GetFloorBounds(s32 *a, s32 *b, s32 *c, s32 *d, void *grid);
#endif
#ifndef PROTO_LOCAL_HappyRoom_SendWelcomeLetter
BOOL HappyRoom_SendWelcomeLetter();
#endif
#ifndef PROTO_LOCAL_Villager_SendLetterWithPaper
BOOL Villager_SendLetterWithPaper(const void *r0, u8 r1, s32 r2, s32 r3, u16 *p, s32 v);
#endif
#ifndef PROTO_LOCAL_Villager_SendBirthdayNoticeLetter
BOOL Villager_SendBirthdayNoticeLetter(s32 a, s32 b);
#endif
#ifndef PROTO_LOCAL_Villager_SendHouseVisitLetter
s32 Villager_SendHouseVisitLetter(u32 a, s32 b, s32 c);
#endif
}
#endif

#endif
