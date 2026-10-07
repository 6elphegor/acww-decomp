#ifndef PROTO_PROTO_OV130_UNK_OV130_02292360_H
#define PROTO_PROTO_OV130_UNK_OV130_02292360_H

// Prototypes of the functions defined in src/ov130/unk_ov130_02292360.cpp (generated: tools/host_protos.py)

#include "types.h"
struct Ov130S;
#ifdef __cplusplus
#include "types.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif
#ifndef PROTO_LOCAL_NumberPad_PlayCancelSe
void NumberPad_PlayCancelSe();
#endif
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_NumberPad_LoadBgGraphics
void NumberPad_LoadBgGraphics(s32 x);
#endif
#ifndef PROTO_LOCAL_NumberPad_LoadObjGraphics
void NumberPad_LoadObjGraphics(s32 n);
#endif
#ifndef PROTO_LOCAL_NumberPad_HitTestKey
u32 NumberPad_HitTestKey(Ov130S *s, s32 x, s32 y);
#endif
#ifndef PROTO_LOCAL_NumberPad_TickKeyRepeat
BOOL NumberPad_TickKeyRepeat(Ov130S *s);
#endif
#ifndef PROTO_LOCAL_NumberPad_SetKeyPalette
void NumberPad_SetKeyPalette(Ov130S *s, u32 idx, s32 n);
#endif
#ifndef PROTO_LOCAL_NumberPad_HighlightKey
void NumberPad_HighlightKey(Ov130S *s, u32 idx);
#endif
#ifndef PROTO_LOCAL_NumberPad_UnhighlightKey
void NumberPad_UnhighlightKey(Ov130S *s, u32 idx);
#endif
#ifndef PROTO_LOCAL_NumberPad_GetCursorX
u32 NumberPad_GetCursorX(Ov130S *s);
#endif
#ifndef PROTO_LOCAL_NumberPad_GetCursorY
u32 NumberPad_GetCursorY(Ov130S *s);
#endif
#ifndef PROTO_LOCAL_NumberPad_IsCursorOnButton
BOOL NumberPad_IsCursorOnButton(Ov130S *s);
#endif
#ifndef PROTO_LOCAL_NumberPad_MoveCursor
BOOL NumberPad_MoveCursor(Ov130S *s, u32 p);
#endif
#ifndef PROTO_LOCAL_NumberPad_PressCursorKey
BOOL NumberPad_PressCursorKey(Ov130S *s);
#endif
#ifndef PROTO_LOCAL_NumberPad_IsCursorOnOk
BOOL NumberPad_IsCursorOnOk(Ov130S *s);
#endif
#ifndef PROTO_LOCAL_NumberPad_Draw
void NumberPad_Draw(Ov130S *s, s32 y);
#endif
#ifndef PROTO_LOCAL_NumberPad_SetAmounts
void NumberPad_SetAmounts(Ov130S *s, s32 a, s32 b, s32 c);
#endif
#ifndef PROTO_LOCAL_NumberPad_GetValue
s32 NumberPad_GetValue(Ov130S *s);
#endif
#ifndef PROTO_LOCAL_NumberPad_GetTopAmount
s32 NumberPad_GetTopAmount(Ov130S *s);
#endif
#ifndef PROTO_LOCAL_NumberPad_GetBottomAmount
s32 NumberPad_GetBottomAmount(Ov130S *s);
#endif
#ifndef PROTO_LOCAL_NumberPad_PlayKeySe
void NumberPad_PlayKeySe(u32 idx);
#endif
#ifndef PROTO_LOCAL_NumberPad_ClearValue
BOOL NumberPad_ClearValue(Ov130S *s);
#endif
#ifndef PROTO_LOCAL_NumberPad_FillLargeDigits
void NumberPad_FillLargeDigits(Ov130S *s, s32 idx, s32 x, s32 y, s32 n);
#endif
#ifndef PROTO_LOCAL_NumberPad_PrintLargeNumber
void NumberPad_PrintLargeNumber(Ov130S *s, s32 val, s32 x, s32 y, s32 n);
#endif
#ifndef PROTO_LOCAL_NumberPad_PutLargeDigit
void NumberPad_PutLargeDigit(Ov130S *s, s32 idx, s32 x, s32 y);
#endif
#ifndef PROTO_LOCAL_NumberPad_FillSmallDigits
void NumberPad_FillSmallDigits(Ov130S *s, s32 idx, s32 x, s32 y, s32 n);
#endif
#ifndef PROTO_LOCAL_NumberPad_PrintSmallNumber
void NumberPad_PrintSmallNumber(Ov130S *s, s32 val, s32 x, s32 y, s32 n);
#endif
#ifndef PROTO_LOCAL_NumberPad_PutSmallDigit
void NumberPad_PutSmallDigit(Ov130S *s, s32 idx, s32 x, s32 y);
#endif
#ifndef PROTO_LOCAL_NumberPad_TestFlags
BOOL NumberPad_TestFlags(Ov130S *s, u32 m);
#endif
#ifndef PROTO_LOCAL_NumberPad_SetFlags
void NumberPad_SetFlags(Ov130S *s, u32 m);
#endif
#ifndef PROTO_LOCAL_NumberPad_ClearFlags
void NumberPad_ClearFlags(Ov130S *s, u32 m);
#endif
}
#endif

#endif
