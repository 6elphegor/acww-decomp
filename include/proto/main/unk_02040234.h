#ifndef PROTO_PROTO_MAIN_UNK_02040234_H
#define PROTO_PROTO_MAIN_UNK_02040234_H

// Prototypes of the functions defined in src/main/unk_02040234.cpp (generated: tools/host_protos.py)

#include "types.h"
#include "game/EventWeekSlots.h"
#include "sys/ClockDateTime.h"
#ifdef __cplusplus
#include "types.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif
#ifndef PROTO_LOCAL_EventWeekSlots_Update
void EventWeekSlots_Update(void);
#endif
#ifndef PROTO_LOCAL_EventWeekSlots_UpdateToday
void EventWeekSlots_UpdateToday(void);
#endif
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_EventWeekSlots_PlaceVisitors
void EventWeekSlots_PlaceVisitors(EventWeekSlots *s, s32 *arr, s32 *cnt, u8 *a, ClockDateTime *pd);
#endif
#ifndef PROTO_LOCAL_EventWeekSlots_PlacePete
void EventWeekSlots_PlacePete(EventWeekSlots *s, s32 *arr, s32 *cnt, ClockDateTime *pd);
#endif
#ifndef PROTO_LOCAL_EventWeekSlots_PlaceRedd
void EventWeekSlots_PlaceRedd(EventWeekSlots *s, s32 *arr, s32 *cnt, ClockDateTime *pd);
#endif
#ifndef PROTO_LOCAL_EventWeekSlots_UpdateWeek
void EventWeekSlots_UpdateWeek(EventWeekSlots *s, s32 flag);
#endif
#ifndef PROTO_LOCAL_EventWeekSlots_FindId
s32 EventWeekSlots_FindId(EventWeekSlots *s, u32 id);
#endif
}
#endif

#endif
