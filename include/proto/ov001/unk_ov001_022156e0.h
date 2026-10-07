#ifndef PROTO_PROTO_OV001_UNK_OV001_022156E0_H
#define PROTO_PROTO_OV001_UNK_OV001_022156E0_H

// Prototypes of the functions defined in src/ov001/unk_ov001_022156e0.cpp (generated: tools/host_protos.py)

#include "types.h"
#ifdef __cplusplus
#include "types.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif
#ifndef PROTO_LOCAL_WfcManualSetup_Enter
void WfcManualSetup_Enter();
#endif
#ifndef PROTO_LOCAL_WfcManualSetup_LoadBg
void WfcManualSetup_LoadBg();
#endif
#ifndef PROTO_LOCAL_WfcManualSetup_ResetCursor
void WfcManualSetup_ResetCursor();
#endif
#ifndef PROTO_LOCAL_WfcManualSetup_FadeIn
void WfcManualSetup_FadeIn();
#endif
#ifndef PROTO_LOCAL_WfcManualSetup_WaitFadeIn
void WfcManualSetup_WaitFadeIn();
#endif
#ifndef PROTO_LOCAL_WfcManualSetup_Update
void WfcManualSetup_Update();
#endif
#ifndef PROTO_LOCAL_WfcManualSetup_HandleKeys
void WfcManualSetup_HandleKeys();
#endif
#ifndef PROTO_LOCAL_WfcManualSetup_HandleScrollBar
void WfcManualSetup_HandleScrollBar();
#endif
#ifndef PROTO_LOCAL_WfcManualSetup_StartExit
void WfcManualSetup_StartExit();
#endif
#ifndef PROTO_LOCAL_WfcManualSetup_FadeOut
void WfcManualSetup_FadeOut();
#endif
#ifndef PROTO_LOCAL_WfcManualSetup_Exit
void WfcManualSetup_Exit();
#endif
#ifndef PROTO_LOCAL_WfcManualSetup_Redraw
void WfcManualSetup_Redraw();
#endif
#ifndef PROTO_LOCAL_WfcManualSetup_PlaceObjs
void WfcManualSetup_PlaceObjs();
#endif
#ifndef PROTO_LOCAL_WfcManualSetup_ScrollBgTask
void WfcManualSetup_ScrollBgTask();
#endif
#ifndef PROTO_LOCAL_WfcManualSetup_DrawCursor
void WfcManualSetup_DrawCursor();
#endif
#ifndef PROTO_LOCAL_WfcManualSetup_UpdateCursorItem
void WfcManualSetup_UpdateCursorItem();
#endif
#ifndef PROTO_LOCAL_WfcManualSetup_HighlightButton
void WfcManualSetup_HighlightButton();
#endif
#ifndef PROTO_LOCAL_WfcManualSetup_ToggleFlashTask
void WfcManualSetup_ToggleFlashTask();
#endif
#ifndef PROTO_LOCAL_WfcManualSetup_FlashToggle
void WfcManualSetup_FlashToggle();
#endif
#ifndef PROTO_LOCAL_WfcManualSetup_InvalidDialog
void WfcManualSetup_InvalidDialog();
#endif
#ifndef PROTO_LOCAL_WfcManualSetup_WaitDialogClosed
void WfcManualSetup_WaitDialogClosed();
#endif
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_WfcManualSetup_HandleTouch
BOOL WfcManualSetup_HandleTouch();
#endif
#ifndef PROTO_LOCAL_WfcManualSetup_SelectItem
void WfcManualSetup_SelectItem(u32 a);
#endif
#ifndef PROTO_LOCAL_WfcManualSetup_SetAutoIp
void WfcManualSetup_SetAutoIp(u32 a);
#endif
#ifndef PROTO_LOCAL_WfcManualSetup_SetAutoDns
void WfcManualSetup_SetAutoDns(u32 a);
#endif
#ifndef PROTO_LOCAL_WfcManualSetup_DrawRowValue
void WfcManualSetup_DrawRowValue(s32 idx, s32 arg);
#endif
#ifndef PROTO_LOCAL_WfcManualSetup_DrawRowButtons
void WfcManualSetup_DrawRowButtons(s32 idx, s32 arg);
#endif
#ifndef PROTO_LOCAL_WfcManualSetup_IsItemEnabled
s32 WfcManualSetup_IsItemEnabled(s32 idx);
#endif
#ifndef PROTO_LOCAL_WfcManualSetup_SetRowButton
void WfcManualSetup_SetRowButton(s32 a, s32 b, s32 c);
#endif
#ifndef PROTO_LOCAL_WfcManualSetup_DrawString
void WfcManualSetup_DrawString(u8 *a, s32 b);
#endif
#ifndef PROTO_LOCAL_WfcManualSetup_DrawAddress
void WfcManualSetup_DrawAddress(u8 *a, s32 b);
#endif
#ifndef PROTO_LOCAL_WfcManualSetup_HitTest
s32 WfcManualSetup_HitTest();
#endif
#ifndef PROTO_LOCAL_WfcManualSetup_GetScreenRow
s32 WfcManualSetup_GetScreenRow(s32 a);
#endif
#ifndef PROTO_LOCAL_WfcManualSetup_GetListRow
s32 WfcManualSetup_GetListRow(s32 a);
#endif
#ifndef PROTO_LOCAL_WfcManualSetup_ScrollUpTask
void WfcManualSetup_ScrollUpTask(s32 a);
#endif
#ifndef PROTO_LOCAL_WfcManualSetup_ScrollDownTask
void WfcManualSetup_ScrollDownTask(s32 a);
#endif
#ifndef PROTO_LOCAL_WfcManualSetup_SetCursor
void WfcManualSetup_SetCursor(u32 a);
#endif
#ifndef PROTO_LOCAL_WfcManualSetup_MoveCursor
void WfcManualSetup_MoveCursor(s32 a);
#endif
#ifndef PROTO_LOCAL_WfcManualSetup_ValidateSettings
BOOL WfcManualSetup_ValidateSettings();
#endif
#ifndef PROTO_LOCAL_WfcManualSetup_SetMode
void WfcManualSetup_SetMode(u32 v);
#endif
}
#endif

#endif
