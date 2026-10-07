#ifndef PROTO_PROTO_OV134_UNK_OV134_02291F60_H
#define PROTO_PROTO_OV134_UNK_OV134_02291F60_H

// Prototypes of the functions defined in src/ov134/unk_ov134_02291f60.cpp (generated: tools/host_protos.py)

#include "types.h"
#ifdef __cplusplus
#include "menu/DateTimePicker.h"
#include "types.h"
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_DateTimePicker_UpdateHandDrag
void DateTimePicker_UpdateHandDrag(DateTimePicker *self, s32 x, s32 y);
#endif
#ifndef PROTO_LOCAL_DateTimePicker_EndHandDrag
BOOL DateTimePicker_EndHandDrag(DateTimePicker *self);
#endif
#ifndef PROTO_LOCAL_DateTimePicker_UpdateHandAnim
BOOL DateTimePicker_UpdateHandAnim(DateTimePicker *self);
#endif
#ifndef PROTO_LOCAL_DateTimePicker_DragMinuteHand
void DateTimePicker_DragMinuteHand(DateTimePicker *self, s32 x, s32 y);
#endif
#ifndef PROTO_LOCAL_DateTimePicker_DragHourHand
void DateTimePicker_DragHourHand(DateTimePicker *self, s32 x, s32 y);
#endif
#ifndef PROTO_LOCAL_DateTimePicker_SetHands
void DateTimePicker_SetHands(DateTimePicker *self, u8 a, u8 b);
#endif
#ifndef PROTO_LOCAL_DateTimePicker_SyncHands
void DateTimePicker_SyncHands(DateTimePicker *self);
#endif
#ifndef PROTO_LOCAL_DateTimePicker_SetHandsFromMinutes
void DateTimePicker_SetHandsFromMinutes(DateTimePicker *self);
#endif
#ifndef PROTO_LOCAL_DateTimePicker_AngleAt
s32 DateTimePicker_AngleAt(void *self, s32 x, s32 y);
#endif
#ifndef PROTO_LOCAL_DateTimePicker_AngleDeltaAt
s32 DateTimePicker_AngleDeltaAt(DateTimePicker *self, s32 x, s32 y, s32 t);
#endif
#ifndef PROTO_LOCAL_DateTimePicker_AngleDiff
s32 DateTimePicker_AngleDiff(void *self, s32 a, s32 b);
#endif
#ifndef PROTO_LOCAL_DateTimePicker_IsInClockFace
BOOL DateTimePicker_IsInClockFace(void *self, s32 x, s32 y, s32 r);
#endif
#ifndef PROTO_LOCAL_DateTimePicker_AddMinutes
void DateTimePicker_AddMinutes(DateTimePicker *self, s32 delta);
#endif
#ifndef PROTO_LOCAL_DateTimePicker_Approach
BOOL DateTimePicker_Approach(void *self, s32 *p, s32 target, s32 maxstep, s32 minstep);
#endif
#ifndef PROTO_LOCAL_DateTimePicker_StepHandAnim
BOOL DateTimePicker_StepHandAnim(DateTimePicker *self);
#endif
#ifndef PROTO_LOCAL_DateTimePicker_HitTestField
s32 DateTimePicker_HitTestField(DateTimePicker *self, s32 x, s32 y);
#endif
#ifndef PROTO_LOCAL_DateTimePicker_HitTestDateField
s32 DateTimePicker_HitTestDateField(DateTimePicker *self, s32 x, s32 y);
#endif
#ifndef PROTO_LOCAL_DateTimePicker_HitTestMonthDayField
s32 DateTimePicker_HitTestMonthDayField(DateTimePicker *self, s32 x, s32 y);
#endif
#ifndef PROTO_LOCAL_DateTimePicker_HitTestTimeField
s32 DateTimePicker_HitTestTimeField(DateTimePicker *self, s32 x, s32 y);
#endif
#ifndef PROTO_LOCAL_DateTimePicker_GetFieldLeft
s32 DateTimePicker_GetFieldLeft(DateTimePicker *self, s32 i);
#endif
#ifndef PROTO_LOCAL_DateTimePicker_GetFieldTop
s32 DateTimePicker_GetFieldTop(DateTimePicker *self, s32 i);
#endif
#ifndef PROTO_LOCAL_DateTimePicker_GetFieldWidth
s32 DateTimePicker_GetFieldWidth(DateTimePicker *self, s32 i);
#endif
#ifndef PROTO_LOCAL_DateTimePicker_GetFieldRight
s32 DateTimePicker_GetFieldRight(DateTimePicker *self, s32 i);
#endif
#ifndef PROTO_LOCAL_DateTimePicker_GetFieldBottom
s32 DateTimePicker_GetFieldBottom(DateTimePicker *self, s32 i);
#endif
#ifndef PROTO_LOCAL_DateTimePicker_SetFieldPalette
void DateTimePicker_SetFieldPalette(DateTimePicker *self, s32 idx, s32 x);
#endif
#ifndef PROTO_LOCAL_DateTimePicker_SetDropButtonPalette
void DateTimePicker_SetDropButtonPalette(DateTimePicker *self, s32 a, s32 b);
#endif
#ifndef PROTO_LOCAL_DateTimePicker_ResetFieldPalettes
void DateTimePicker_ResetFieldPalettes(DateTimePicker *self);
#endif
#ifndef PROTO_LOCAL_DateTimePicker_TickFieldFlash
void DateTimePicker_TickFieldFlash(DateTimePicker *self);
#endif
#ifndef PROTO_LOCAL_DateTimePicker_GetCursorField
u8 DateTimePicker_GetCursorField(DateTimePicker *self);
#endif
#ifndef PROTO_LOCAL_DateTimePicker_SetCursorField
void DateTimePicker_SetCursorField(DateTimePicker *self, u8 v);
#endif
#ifndef PROTO_LOCAL_DateTimePicker_AdvanceCursorField
void DateTimePicker_AdvanceCursorField(DateTimePicker *self);
#endif
#ifndef PROTO_LOCAL_DateTimePicker_OpenList
void DateTimePicker_OpenList(DateTimePicker *self, s32 idx);
#endif
#ifndef PROTO_LOCAL_DateTimePicker_UpdateListOpen
s32 DateTimePicker_UpdateListOpen(DateTimePicker *self);
#endif
#ifndef PROTO_LOCAL_DateTimePicker_HitTestRow
s32 DateTimePicker_HitTestRow(DateTimePicker *self, s32 x, s32 y);
#endif
#ifndef PROTO_LOCAL_DateTimePicker_DecideList
void DateTimePicker_DecideList(DateTimePicker *self);
#endif
#ifndef PROTO_LOCAL_DateTimePicker_CancelList
void DateTimePicker_CancelList(DateTimePicker *self);
#endif
#ifndef PROTO_LOCAL_DateTimePicker_UpdateListClose
s32 DateTimePicker_UpdateListClose(DateTimePicker *self);
#endif
#ifndef PROTO_LOCAL_DateTimePicker_HitTestList
s32 DateTimePicker_HitTestList(DateTimePicker *self, s32 x, s32 y);
#endif
#ifndef PROTO_LOCAL_DateTimePicker_SetListScroll
void DateTimePicker_SetListScroll(DateTimePicker *self, s32 a);
#endif
#ifndef PROTO_LOCAL_DateTimePicker_ApplyListScroll
void DateTimePicker_ApplyListScroll(DateTimePicker *self);
#endif
#ifndef PROTO_LOCAL_DateTimePicker_RedrawList
void DateTimePicker_RedrawList(DateTimePicker *self);
#endif
#ifndef PROTO_LOCAL_DateTimePicker_AnimOpenWindow
void DateTimePicker_AnimOpenWindow(DateTimePicker *self);
#endif
#ifndef PROTO_LOCAL_DateTimePicker_AnimCloseWindow
void DateTimePicker_AnimCloseWindow(DateTimePicker *self);
#endif
}
#endif

#endif
