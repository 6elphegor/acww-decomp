#ifndef PROTO_PROTO_OV094_UNK_OV094_02293B90_H
#define PROTO_PROTO_OV094_UNK_OV094_02293B90_H

// Prototypes of the functions defined in src/ov094/unk_ov094_02293b90.cpp (generated: tools/host_protos.py)

#include "types.h"
#ifdef __cplusplus
#include "menu/InventoryItemGrid.h"
#include "menu/LetterGrid.h"
#include "types.h"
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_LetterGrid_DrawSlot
void LetterGrid_DrawSlot(InventoryItemGrid *o, s32 a1, s32 idx, s32 x, s32 y0);
#endif
#ifndef PROTO_LOCAL_LetterGrid_GetSlotX
s32 LetterGrid_GetSlotX(void *o, s32 i);
#endif
#ifndef PROTO_LOCAL_LetterGrid_GetSlotY
s32 LetterGrid_GetSlotY(void *o, s32 i);
#endif
#ifndef PROTO_LOCAL_LetterGrid_IsSlotEmpty
BOOL LetterGrid_IsSlotEmpty(LetterGrid *o, s32 i);
#endif
#ifndef PROTO_LOCAL_LetterGrid_LoadPocketLetters
void LetterGrid_LoadPocketLetters(LetterGrid *o);
#endif
#ifndef PROTO_LOCAL_LetterGrid_SetLetters2D
void LetterGrid_SetLetters2D(void *o, u8 *p);
#endif
#ifndef PROTO_LOCAL_LetterGrid_SetLetters0A
void LetterGrid_SetLetters0A(void *o, u8 *p);
#endif
#ifndef PROTO_LOCAL_LetterGrid_SetLetters23
void LetterGrid_SetLetters23(void *o, u8 *p);
#endif
#ifndef PROTO_LOCAL_LetterGrid_SetLetterArray
void LetterGrid_SetLetterArray(LetterGrid *o, u8 *p, s32 m, s32 n);
#endif
#ifndef PROTO_LOCAL_LetterGrid_GetIconIndex
s32 LetterGrid_GetIconIndex(void *o, s32 h);
#endif
#ifndef PROTO_LOCAL_LetterGrid_StartPopAnim
void LetterGrid_StartPopAnim(LetterGrid *o);
#endif
#ifndef PROTO_LOCAL_LetterGrid_ResetScale
void LetterGrid_ResetScale(LetterGrid *o);
#endif
#ifndef PROTO_LOCAL_LetterGrid_UpdatePopAnim
BOOL LetterGrid_UpdatePopAnim(LetterGrid *o);
#endif
#ifndef PROTO_LOCAL_LetterGrid_GetPopScale
u8 LetterGrid_GetPopScale(LetterGrid *o);
#endif
#ifndef PROTO_LOCAL_LetterGrid_ClearBits
void LetterGrid_ClearBits(u32 *bits);
#endif
#ifndef PROTO_LOCAL_LetterGrid_SetBit
void LetterGrid_SetBit(u32 *bits, s32 i);
#endif
#ifndef PROTO_LOCAL_LetterGrid_ClearBit
void LetterGrid_ClearBit(u32 *bits, s32 i);
#endif
#ifndef PROTO_LOCAL_LetterGrid_TestBit
BOOL LetterGrid_TestBit(u32 *bits, s32 i);
#endif
}
#endif

#endif
