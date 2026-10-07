#ifndef PROTO_PROTO_OV095_UNK_02292360_H
#define PROTO_PROTO_OV095_UNK_02292360_H

// Prototypes of the functions defined in src/ov095/unk_02292360.cpp (generated: tools/host_protos.py)

#include "types.h"
#ifdef __cplusplus
#include "menu/Keyboard.h"
#include "types.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif
#ifndef PROTO_LOCAL_Keyboard_PlayCopySe
void Keyboard_PlayCopySe();
#endif
#ifndef PROTO_LOCAL_Keyboard_PlayPasteSe
void Keyboard_PlayPasteSe();
#endif
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_Keyboard_IsSlotDisabled
BOOL Keyboard_IsSlotDisabled(Keyboard *s, s32 i);
#endif
#ifndef PROTO_LOCAL_Keyboard_DisableKey
void Keyboard_DisableKey(Keyboard *s, s32 i);
#endif
#ifndef PROTO_LOCAL_Keyboard_EnableKey
void Keyboard_EnableKey(Keyboard *s, s32 i);
#endif
#ifndef PROTO_LOCAL_Keyboard_IsKeyDisabled
BOOL Keyboard_IsKeyDisabled(Keyboard *s, s32 a);
#endif
#ifndef PROTO_LOCAL_Keyboard_IsMenuTabKey
BOOL Keyboard_IsMenuTabKey(Keyboard *s, s32 a);
#endif
#ifndef PROTO_LOCAL_Keyboard_IsOnMenuTabKey
BOOL Keyboard_IsOnMenuTabKey(Keyboard *s, s32 a);
#endif
#ifndef PROTO_LOCAL_Keyboard_IsOnButtonKey
BOOL Keyboard_IsOnButtonKey(Keyboard *s, s32 a);
#endif
#ifndef PROTO_LOCAL_Keyboard_IsFull
BOOL Keyboard_IsFull(Keyboard *s);
#endif
#ifndef PROTO_LOCAL_Keyboard_IsTooWide
BOOL Keyboard_IsTooWide(Keyboard *s);
#endif
#ifndef PROTO_LOCAL_Keyboard_ResetKeyPalettes
void Keyboard_ResetKeyPalettes(Keyboard *s);
#endif
#ifndef PROTO_LOCAL_Keyboard_ClearHighlight
void Keyboard_ClearHighlight(Keyboard *s);
#endif
#ifndef PROTO_LOCAL_Keyboard_UpdateShiftKey
void Keyboard_UpdateShiftKey(Keyboard *s);
#endif
#ifndef PROTO_LOCAL_Keyboard_SetPage0KeyPalette
void Keyboard_SetPage0KeyPalette(Keyboard *s, s32 a, s32 b);
#endif
#ifndef PROTO_LOCAL_Keyboard_SetPage1KeyPalette
void Keyboard_SetPage1KeyPalette(Keyboard *s, s32 a, s32 b);
#endif
#ifndef PROTO_LOCAL_Keyboard_SetPage2KeyPalette
void Keyboard_SetPage2KeyPalette(Keyboard *s, s32 a, s32 b);
#endif
#ifndef PROTO_LOCAL_Keyboard_SetPage3KeyPalette
void Keyboard_SetPage3KeyPalette(Keyboard *s, s32 a, s32 b);
#endif
#ifndef PROTO_LOCAL_Keyboard_SetCopyPastePalette
s32 Keyboard_SetCopyPastePalette(Keyboard *s, s32 a, s32 b);
#endif
#ifndef PROTO_LOCAL_Keyboard_SetKeyPalette
void Keyboard_SetKeyPalette(Keyboard *s, s32 a, s32 b);
#endif
#ifndef PROTO_LOCAL_Keyboard_HighlightKey
void Keyboard_HighlightKey(Keyboard *s, s32 a);
#endif
#ifndef PROTO_LOCAL_Keyboard_TouchPage1Key
s32 Keyboard_TouchPage1Key(Keyboard *s, u32 a, u32 b);
#endif
#ifndef PROTO_LOCAL_Keyboard_TouchPage2Key
s32 Keyboard_TouchPage2Key(Keyboard *s, u32 a, u32 b);
#endif
#ifndef PROTO_LOCAL_Keyboard_TouchPage3Key
s32 Keyboard_TouchPage3Key(Keyboard *s, u32 a, u32 b);
#endif
#ifndef PROTO_LOCAL_Keyboard_TouchCopyPasteKey
s32 Keyboard_TouchCopyPasteKey(Keyboard *s, u32 a, u32 b);
#endif
#ifndef PROTO_LOCAL_Keyboard_TouchKey
s32 Keyboard_TouchKey(Keyboard *s, s32 a, u32 b);
#endif
#ifndef PROTO_LOCAL_Keyboard_GetPressedKey
s32 Keyboard_GetPressedKey(Keyboard *s);
#endif
#ifndef PROTO_LOCAL_Keyboard_GetSpecialKeyCode
s32 Keyboard_GetSpecialKeyCode(Keyboard *s, s32 a);
#endif
#ifndef PROTO_LOCAL_Keyboard_GetKeyCodePage0Special
s32 Keyboard_GetKeyCodePage0Special(Keyboard *s, s32 a);
#endif
#ifndef PROTO_LOCAL_Keyboard_GetKeyCodePage0A
s32 Keyboard_GetKeyCodePage0A(Keyboard *s, s32 a);
#endif
#ifndef PROTO_LOCAL_Keyboard_GetKeyCodePage0B
s32 Keyboard_GetKeyCodePage0B(Keyboard *s, s32 a);
#endif
#ifndef PROTO_LOCAL_Keyboard_GetKeyCodePage1Lower
s32 Keyboard_GetKeyCodePage1Lower(Keyboard *s, s32 a);
#endif
#ifndef PROTO_LOCAL_Keyboard_GetKeyCodePage1Upper
s32 Keyboard_GetKeyCodePage1Upper(Keyboard *s, s32 a);
#endif
#ifndef PROTO_LOCAL_Keyboard_GetKeyCodePage1Alt
s32 Keyboard_GetKeyCodePage1Alt(Keyboard *s, s32 a);
#endif
#ifndef PROTO_LOCAL_Keyboard_GetKeyCodePage2
s32 Keyboard_GetKeyCodePage2(Keyboard *s, s32 a);
#endif
#ifndef PROTO_LOCAL_Keyboard_GetKeyCodePage3
s32 Keyboard_GetKeyCodePage3(Keyboard *s, s32 a);
#endif
#ifndef PROTO_LOCAL_Keyboard_GetKeyCode
s32 Keyboard_GetKeyCode(Keyboard *s, s32 a, u32 b);
#endif
#ifndef PROTO_LOCAL_Keyboard_RestoreLastPage
void Keyboard_RestoreLastPage(Keyboard *s, s32 a);
#endif
#ifndef PROTO_LOCAL_Keyboard_SetMode
void Keyboard_SetMode(Keyboard *s, s32 mode, s32 a, s32 c);
#endif
#ifndef PROTO_LOCAL_Keyboard_Reload
void Keyboard_Reload(Keyboard *s, s32 a);
#endif
#ifndef PROTO_LOCAL_Keyboard_SelectPageByCode
void Keyboard_SelectPageByCode(Keyboard *s, s32 a, s32 b);
#endif
#ifndef PROTO_LOCAL_Keyboard_ToggleCapsLock
void Keyboard_ToggleCapsLock(Keyboard *s, s32 a);
#endif
#ifndef PROTO_LOCAL_Keyboard_ToggleOneShotShift
void Keyboard_ToggleOneShotShift(Keyboard *s, s32 a);
#endif
#ifndef PROTO_LOCAL_Keyboard_EndOneShotShift
void Keyboard_EndOneShotShift(Keyboard *s, s32 a);
#endif
#ifndef PROTO_LOCAL_Keyboard_Init
void Keyboard_Init(Keyboard *s, s32 a);
#endif
#ifndef PROTO_LOCAL_Keyboard_Shutdown
void Keyboard_Shutdown(Keyboard *s);
#endif
#ifndef PROTO_LOCAL_Keyboard_SetAltWriteLayout
void Keyboard_SetAltWriteLayout(Keyboard *s);
#endif
#ifndef PROTO_LOCAL_Keyboard_LoadLetterChars
void Keyboard_LoadLetterChars(Keyboard *s, s32 a);
#endif
#ifndef PROTO_LOCAL_Keyboard_LoadScreenFile
void Keyboard_LoadScreenFile(Keyboard *s, s32 a);
#endif
#ifndef PROTO_LOCAL_Keyboard_LoadScreenNow
void Keyboard_LoadScreenNow(Keyboard *s, s32 a);
#endif
#ifndef PROTO_LOCAL_Keyboard_EndFrame
void Keyboard_EndFrame(Keyboard *s, s32 a);
#endif
#ifndef PROTO_LOCAL_Keyboard_MarkScreenDirty
void Keyboard_MarkScreenDirty(Keyboard *s);
#endif
#ifndef PROTO_LOCAL_Keyboard_UpdatePressedKey
s32 Keyboard_UpdatePressedKey(Keyboard *s);
#endif
#ifndef PROTO_LOCAL_Keyboard_StartKeyRepeat
void Keyboard_StartKeyRepeat(Keyboard *s);
#endif
#ifndef PROTO_LOCAL_Keyboard_TickKeyRepeat
BOOL Keyboard_TickKeyRepeat(Keyboard *s);
#endif
#ifndef PROTO_LOCAL_Keyboard_DisableModifierKeys
void Keyboard_DisableModifierKeys(Keyboard *s);
#endif
#ifndef PROTO_LOCAL_Keyboard_UpdateModifierKeys
void Keyboard_UpdateModifierKeys(Keyboard *s, s32 a);
#endif
#ifndef PROTO_LOCAL_Keyboard_IsControlCode
BOOL Keyboard_IsControlCode(Keyboard *s, s32 a);
#endif
#ifndef PROTO_LOCAL_Keyboard_CanInsert
BOOL Keyboard_CanInsert(Keyboard *s, u8 *a, void *b, s32 c, s32 d, s32 e);
#endif
#ifndef PROTO_LOCAL_Keyboard_InsertAt
BOOL Keyboard_InsertAt(Keyboard *s, u8 *a, s32 b, s32 c, s32 d, s32 e);
#endif
#ifndef PROTO_LOCAL_Keyboard_InsertChar
BOOL Keyboard_InsertChar(Keyboard *s, u8 *a, s32 b, u8 *p, s32 c, s32 d, s32 e, s32 f);
#endif
#ifndef PROTO_LOCAL_Keyboard_InsertCharMultiline
BOOL Keyboard_InsertCharMultiline(Keyboard *s, void *p1, s32 p2, u8 *p3, s32 a4, s32 a5, s32 a6, s32 a7, s32 a8, s32 a9);
#endif
#ifndef PROTO_LOCAL_Keyboard_DeleteRange
s32 Keyboard_DeleteRange(void *s, u8 *buf, s32 a, s32 b, s32 n);
#endif
#ifndef PROTO_LOCAL_Keyboard_ReplaceCharBeforeCursor
BOOL Keyboard_ReplaceCharBeforeCursor(Keyboard *s, u8 *buf, s32 c, s32 n);
#endif
#ifndef PROTO_LOCAL_Keyboard_ModifyCharKey103
s32 Keyboard_ModifyCharKey103(Keyboard *s, s32 a);
#endif
#ifndef PROTO_LOCAL_Keyboard_ModifyCharKey104
s32 Keyboard_ModifyCharKey104(Keyboard *s, s32 a);
#endif
#ifndef PROTO_LOCAL_Keyboard_ModifyCharKey105
s32 Keyboard_ModifyCharKey105(Keyboard *s, s32 a);
#endif
#ifndef PROTO_LOCAL_Keyboard_HitTestText
u8 Keyboard_HitTestText(void *s, u8 *str, s32 a, s32 b, u8 limit0, u8 *out);
#endif
#ifndef PROTO_LOCAL_Keyboard_HandleModeKey
s32 Keyboard_HandleModeKey(Keyboard *s, s32 a, s32 b);
#endif
#ifndef PROTO_LOCAL_Keyboard_ResetTypedRun
void Keyboard_ResetTypedRun(Keyboard *s);
#endif
#ifndef PROTO_LOCAL_Keyboard_ShrinkTypedRun
void Keyboard_ShrinkTypedRun(Keyboard *s);
#endif
#ifndef PROTO_LOCAL_Keyboard_GetTypedRunLength
u8 Keyboard_GetTypedRunLength(Keyboard *s);
#endif
#ifndef PROTO_LOCAL_Keyboard_BeginPaste
void Keyboard_BeginPaste(Keyboard *s);
#endif
#ifndef PROTO_LOCAL_Keyboard_EndPaste
void Keyboard_EndPaste(Keyboard *s);
#endif
#ifndef PROTO_LOCAL_Keyboard_LoadObjGfx
void Keyboard_LoadObjGfx(Keyboard *s);
#endif
#ifndef PROTO_LOCAL_Keyboard_LoadEmotionIcons
void Keyboard_LoadEmotionIcons(Keyboard *s);
#endif
#ifndef PROTO_LOCAL_Keyboard_Draw
s32 Keyboard_Draw(Keyboard *s, s32 x, s32 y, s32 z);
#endif
#ifndef PROTO_LOCAL_Keyboard_DrawPageKeys
s32 Keyboard_DrawPageKeys(Keyboard *s, s32 x, s32 y);
#endif
#ifndef PROTO_LOCAL_Keyboard_GetPageCells
void *Keyboard_GetPageCells(Keyboard *s);
#endif
#ifndef PROTO_LOCAL_Keyboard_DrawEmotionKeys
void Keyboard_DrawEmotionKeys(Keyboard *s, s32 x, s32 y);
#endif
#ifndef PROTO_LOCAL_Keyboard_DrawSendKey
void Keyboard_DrawSendKey(void *s, s32 x, s32 y, s32 z, s32 w);
#endif
#ifndef PROTO_LOCAL_Keyboard_TouchSendKey
BOOL Keyboard_TouchSendKey();
#endif
#ifndef PROTO_LOCAL_Keyboard_TouchPageTab
BOOL Keyboard_TouchPageTab(Keyboard *s);
#endif
#ifndef PROTO_LOCAL_Keyboard_TouchEmotionKey
BOOL Keyboard_TouchEmotionKey(Keyboard *s);
#endif
#ifndef PROTO_LOCAL_Keyboard_ClearSelectedEmotion
void Keyboard_ClearSelectedEmotion(Keyboard *s);
#endif
#ifndef PROTO_LOCAL_Keyboard_SelectEmotionByCode
void Keyboard_SelectEmotionByCode(Keyboard *s, s32 v);
#endif
#ifndef PROTO_LOCAL_Keyboard_GetSelectedEmotion
s32 Keyboard_GetSelectedEmotion(Keyboard *s);
#endif
#ifndef PROTO_LOCAL_Keyboard_DrawCaret
void Keyboard_DrawCaret(void *s, s32 x, s32 y, s32 z);
#endif
#ifndef PROTO_LOCAL_Keyboard_DrawCopyPasteKeysChat
void Keyboard_DrawCopyPasteKeysChat(Keyboard *s, s32 x, s32 y);
#endif
#ifndef PROTO_LOCAL_Keyboard_DrawCopyPasteKeys
void Keyboard_DrawCopyPasteKeys(Keyboard *s, s32 x, s32 y);
#endif
#ifndef PROTO_LOCAL_Keyboard_DrawLengthGauge
s32 Keyboard_DrawLengthGauge(void *s, s32 x, s32 y, s32 idx);
#endif
#ifndef PROTO_LOCAL_Keyboard_DrawLengthGaugeAt
s32 Keyboard_DrawLengthGaugeAt(void *s, s32 x, s32 y, s32 idx);
#endif
#ifndef PROTO_LOCAL_Keyboard_GetTabKeyX
s32 Keyboard_GetTabKeyX(Keyboard *s, s32 a);
#endif
#ifndef PROTO_LOCAL_Keyboard_CalcTabRowKeyPos
s32 Keyboard_CalcTabRowKeyPos(Keyboard *s);
#endif
#ifndef PROTO_LOCAL_Keyboard_GetEmotionKeyX
s32 Keyboard_GetEmotionKeyX(Keyboard *s, s32 a);
#endif
#ifndef PROTO_LOCAL_Keyboard_CalcChatKeyPos
s32 Keyboard_CalcChatKeyPos(Keyboard *s);
#endif
#ifndef PROTO_LOCAL_Keyboard_CalcWriteButtonPos
s32 Keyboard_CalcWriteButtonPos(Keyboard *s);
#endif
#ifndef PROTO_LOCAL_Keyboard_CalcNameEntryButtonPos
s32 Keyboard_CalcNameEntryButtonPos(Keyboard *s);
#endif
#ifndef PROTO_LOCAL_Keyboard_CalcExtraKeyPos
s32 Keyboard_CalcExtraKeyPos(Keyboard *s);
#endif
#ifndef PROTO_LOCAL_Keyboard_CalcCursorPosPage0
void Keyboard_CalcCursorPosPage0(Keyboard *s);
#endif
#ifndef PROTO_LOCAL_Keyboard_CalcCursorPosPage1
void Keyboard_CalcCursorPosPage1(Keyboard *s);
#endif
#ifndef PROTO_LOCAL_Keyboard_CalcCursorPosPage2
void Keyboard_CalcCursorPosPage2(Keyboard *s);
#endif
#ifndef PROTO_LOCAL_Keyboard_CalcCursorPosPage3
void Keyboard_CalcCursorPosPage3(Keyboard *s);
#endif
#ifndef PROTO_LOCAL_Keyboard_UpdateCursorPos
void Keyboard_UpdateCursorPos(Keyboard *s);
#endif
#ifndef PROTO_LOCAL_Keyboard_MoveDownToMainButton
void Keyboard_MoveDownToMainButton(Keyboard *s);
#endif
#ifndef PROTO_LOCAL_Keyboard_MoveDownToButtons
void Keyboard_MoveDownToButtons(Keyboard *s);
#endif
#ifndef PROTO_LOCAL_Keyboard_MoveOnPage1
void Keyboard_MoveOnPage1(Keyboard *s, void *p);
#endif
#ifndef PROTO_LOCAL_Keyboard_MoveOnPage2
void Keyboard_MoveOnPage2(Keyboard *s, void *p);
#endif
#ifndef PROTO_LOCAL_Keyboard_MoveOnPage3
void Keyboard_MoveOnPage3(Keyboard *s, void *p);
#endif
#ifndef PROTO_LOCAL_Keyboard_MoveAboveTabRow
void Keyboard_MoveAboveTabRow(Keyboard *s);
#endif
#ifndef PROTO_LOCAL_Keyboard_SelectTabRowNearX
void Keyboard_SelectTabRowNearX(Keyboard *s, s32 a);
#endif
#ifndef PROTO_LOCAL_Keyboard_GoToTabRow
void Keyboard_GoToTabRow(Keyboard *s);
#endif
#ifndef PROTO_LOCAL_Keyboard_EnterKeysAtX
void Keyboard_EnterKeysAtX(Keyboard *s, s32 a);
#endif
#ifndef PROTO_LOCAL_Keyboard_EnterTabRowAtX2
void Keyboard_EnterTabRowAtX2(Keyboard *s, s32 a);
#endif
#ifndef PROTO_LOCAL_Keyboard_SelectMenuTabKey
void Keyboard_SelectMenuTabKey(Keyboard *s, s32 a);
#endif
#ifndef PROTO_LOCAL_Keyboard_SelectSendKey
void Keyboard_SelectSendKey(Keyboard *s);
#endif
#ifndef PROTO_LOCAL_Keyboard_EnterTabRowAtX
void Keyboard_EnterTabRowAtX(Keyboard *s, s32 a);
#endif
#ifndef PROTO_LOCAL_Keyboard_MoveOnTabRow
BOOL Keyboard_MoveOnTabRow(Keyboard *s, void *p);
#endif
#ifndef PROTO_LOCAL_Keyboard_MoveOnChatKeys
BOOL Keyboard_MoveOnChatKeys(Keyboard *s, void *p);
#endif
#ifndef PROTO_LOCAL_Keyboard_MoveOnWriteButtons
BOOL Keyboard_MoveOnWriteButtons(Keyboard *s, void *p);
#endif
#ifndef PROTO_LOCAL_Keyboard_MoveOnNameEntryButtons
BOOL Keyboard_MoveOnNameEntryButtons(Keyboard *s, void *p);
#endif
#ifndef PROTO_LOCAL_Keyboard_MoveOnExtraKeys
BOOL Keyboard_MoveOnExtraKeys(Keyboard *s, void *p);
#endif
#ifndef PROTO_LOCAL_Keyboard_GetCursorX
s32 Keyboard_GetCursorX(Keyboard *s);
#endif
#ifndef PROTO_LOCAL_Keyboard_GetCursorY
s32 Keyboard_GetCursorY(Keyboard *s);
#endif
#ifndef PROTO_LOCAL_Keyboard_SetTextFieldPos
void Keyboard_SetTextFieldPos(Keyboard *s, s32 a, s32 b);
#endif
#ifndef PROTO_LOCAL_Keyboard_ResetCursor
void Keyboard_ResetCursor(Keyboard *s);
#endif
#ifndef PROTO_LOCAL_Keyboard_MoveCursor
s32 Keyboard_MoveCursor(Keyboard *s, void *p);
#endif
#ifndef PROTO_LOCAL_Keyboard_PressCursorKey
s32 Keyboard_PressCursorKey(Keyboard *s);
#endif
#ifndef PROTO_LOCAL_Keyboard_PlayCharSe
void Keyboard_PlayCharSe(Keyboard *s, s32 a);
#endif
#ifndef PROTO_LOCAL_Keyboard_TestFlags
BOOL Keyboard_TestFlags(Keyboard *s, u32 m);
#endif
#ifndef PROTO_LOCAL_Keyboard_SetFlags
void Keyboard_SetFlags(Keyboard *s, u32 m);
#endif
#ifndef PROTO_LOCAL_Keyboard_ClearFlags
void Keyboard_ClearFlags(Keyboard *s, u32 m);
#endif
}
#endif

#endif
