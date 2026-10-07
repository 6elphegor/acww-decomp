#ifndef PROTO_PROTO_OV096_UNK_02294C40_H
#define PROTO_PROTO_OV096_UNK_02294C40_H

// Prototypes of the functions defined in src/ov096/unk_02294c40.cpp (generated: tools/host_protos.py)

#include "types.h"
#ifdef __cplusplus
#include "menu/PocketMenu.h"
#include "types.h"
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_PocketMenu_Create
PocketMenu *PocketMenu_Create();
#endif
#ifndef PROTO_LOCAL__ZN10PocketMenu9mainAct1BEv
void _ZN10PocketMenu9mainAct1BEv(PocketMenu *s);
#endif
#ifndef PROTO_LOCAL__ZN10PocketMenu9mainAct1CEv
void _ZN10PocketMenu9mainAct1CEv(PocketMenu *s);
#endif
#ifndef PROTO_LOCAL__ZN10PocketMenu9mainAct1DEv
void _ZN10PocketMenu9mainAct1DEv(PocketMenu *s);
#endif
#ifndef PROTO_LOCAL_PocketMenu_TickOptionDecide
s32 PocketMenu_TickOptionDecide(PocketMenu *s);
#endif
#ifndef PROTO_LOCAL__ZN10PocketMenu9mainAct1EEv
void _ZN10PocketMenu9mainAct1EEv(PocketMenu *s);
#endif
#ifndef PROTO_LOCAL__ZN10PocketMenu9mainAct1FEv
void _ZN10PocketMenu9mainAct1FEv(PocketMenu *s);
#endif
#ifndef PROTO_LOCAL__ZN10PocketMenu9mainAct20Ev
void _ZN10PocketMenu9mainAct20Ev(PocketMenu *s);
#endif
#ifndef PROTO_LOCAL__ZN10PocketMenu9mainAct21Ev
void _ZN10PocketMenu9mainAct21Ev(PocketMenu *s);
#endif
#ifndef PROTO_LOCAL__ZN10PocketMenu9mainAct22Ev
void _ZN10PocketMenu9mainAct22Ev(PocketMenu *s);
#endif
#ifndef PROTO_LOCAL__ZN10PocketMenu9mainAct23Ev
void _ZN10PocketMenu9mainAct23Ev(PocketMenu *s);
#endif
#ifndef PROTO_LOCAL__ZN10PocketMenu9mainAct24Ev
void _ZN10PocketMenu9mainAct24Ev(PocketMenu *s);
#endif
#ifndef PROTO_LOCAL__ZN10PocketMenu9mainAct25Ev
void _ZN10PocketMenu9mainAct25Ev(PocketMenu *s);
#endif
#ifndef PROTO_LOCAL__ZN10PocketMenu9mainAct26Ev
void _ZN10PocketMenu9mainAct26Ev(PocketMenu *s);
#endif
#ifndef PROTO_LOCAL__ZN10PocketMenu9mainAct27Ev
void _ZN10PocketMenu9mainAct27Ev(PocketMenu *s);
#endif
#ifndef PROTO_LOCAL__ZN10PocketMenu9mainAct2AEv
void _ZN10PocketMenu9mainAct2AEv(PocketMenu *s);
#endif
#ifndef PROTO_LOCAL__ZN10PocketMenu9mainAct2BEv
void _ZN10PocketMenu9mainAct2BEv(PocketMenu *s);
#endif
#ifndef PROTO_LOCAL__ZN10PocketMenu9mainAct2FEv
void _ZN10PocketMenu9mainAct2FEv(PocketMenu *s);
#endif
#ifndef PROTO_LOCAL__ZN10PocketMenu9mainAct31Ev
void _ZN10PocketMenu9mainAct31Ev(PocketMenu *s);
#endif
#ifndef PROTO_LOCAL__ZN10PocketMenu9mainAct32Ev
void _ZN10PocketMenu9mainAct32Ev(PocketMenu *s);
#endif
#ifndef PROTO_LOCAL__ZN10PocketMenu9mainAct28Ev
void _ZN10PocketMenu9mainAct28Ev(PocketMenu *s);
#endif
#ifndef PROTO_LOCAL__ZN10PocketMenu9mainAct29Ev
void _ZN10PocketMenu9mainAct29Ev(PocketMenu *s);
#endif
#ifndef PROTO_LOCAL_PocketMenu_EnterTouchIdle
void PocketMenu_EnterTouchIdle(PocketMenu *s);
#endif
#ifndef PROTO_LOCAL_PocketMenu_EnterButtonIdle
void PocketMenu_EnterButtonIdle(PocketMenu *s);
#endif
#ifndef PROTO_LOCAL_PocketMenu_ReturnToIdle
void PocketMenu_ReturnToIdle(PocketMenu *s);
#endif
#ifndef PROTO_LOCAL_PocketMenu_EnterAddresseeTouch
void PocketMenu_EnterAddresseeTouch(PocketMenu *s);
#endif
#ifndef PROTO_LOCAL_PocketMenu_EnterAddresseeButtons
void PocketMenu_EnterAddresseeButtons(PocketMenu *s);
#endif
#ifndef PROTO_LOCAL_PocketMenu_EnterAddresseeInput
void PocketMenu_EnterAddresseeInput(PocketMenu *s);
#endif
#ifndef PROTO_LOCAL_PocketMenu_PrepareTouchOptions
void PocketMenu_PrepareTouchOptions(PocketMenu *s);
#endif
#ifndef PROTO_LOCAL_PocketMenu_BeginTouchOnTarget
void PocketMenu_BeginTouchOnTarget(PocketMenu *s, u32 a);
#endif
#ifndef PROTO_LOCAL_PocketMenu_StartTouchDrag
void PocketMenu_StartTouchDrag(PocketMenu *s, u32 a);
#endif
#ifndef PROTO_LOCAL_PocketMenu_StartButtonDrag
void PocketMenu_StartButtonDrag(PocketMenu *s, u32 a);
#endif
#ifndef PROTO_LOCAL_PocketMenu_FlyHandTo
void PocketMenu_FlyHandTo(PocketMenu *s, u32 a, u32 b);
#endif
#ifndef PROTO_LOCAL_PocketMenu_FlyItemTo
void PocketMenu_FlyItemTo(PocketMenu *s, u32 a, u32 b, u32 c, u8 d);
#endif
#ifndef PROTO_LOCAL_PocketMenu_ShowMessage
void PocketMenu_ShowMessage(PocketMenu *s, u32 a, u32 b, u32 c);
#endif
#ifndef PROTO_LOCAL_PocketMenu_StartRemoveBlink
void PocketMenu_StartRemoveBlink(PocketMenu *s);
#endif
#ifndef PROTO_LOCAL_PocketMenu_CancelVramTasks
void PocketMenu_CancelVramTasks(PocketMenu *s);
#endif
#ifndef PROTO_LOCAL_PocketMenu_IsPocketTarget
u32 PocketMenu_IsPocketTarget(PocketMenu *s, u32 id);
#endif
#ifndef PROTO_LOCAL_PocketMenu_IsLetterTarget
u32 PocketMenu_IsLetterTarget(PocketMenu *s, u32 id);
#endif
#ifndef PROTO_LOCAL_PocketMenu_IsTabTarget
u32 PocketMenu_IsTabTarget(PocketMenu *s, u32 id);
#endif
#ifndef PROTO_LOCAL_PocketMenu_IsSpecialTarget
u32 PocketMenu_IsSpecialTarget(PocketMenu *s, u32 id);
#endif
#ifndef PROTO_LOCAL_PocketMenu_MoveCursorToTab
void PocketMenu_MoveCursorToTab(PocketMenu *s);
#endif
#ifndef PROTO_LOCAL_PocketMenu_TargetToGridIndex
u32 PocketMenu_TargetToGridIndex(PocketMenu *s, u32 id);
#endif
#ifndef PROTO_LOCAL_PocketMenu_PocketIndexToTarget
u32 PocketMenu_PocketIndexToTarget(PocketMenu *s, u32 id);
#endif
#ifndef PROTO_LOCAL_PocketMenu_HitPocket
u32 PocketMenu_HitPocket(PocketMenu *s, s32 a, s32 b, s32 c);
#endif
#ifndef PROTO_LOCAL_PocketMenu_DropItemAt
s32 PocketMenu_DropItemAt(PocketMenu *s, u32 id);
#endif
#ifndef PROTO_LOCAL_PocketMenu_SetSlotItem
void PocketMenu_SetSlotItem(PocketMenu *s, u32 id, u32 a, u32 b);
#endif
#ifndef PROTO_LOCAL_PocketMenu_ClearSlotItem
void PocketMenu_ClearSlotItem(PocketMenu *s, u32 id);
#endif
#ifndef PROTO_LOCAL_PocketMenu_ClearLetter
void PocketMenu_ClearLetter(PocketMenu *s, u32 id);
#endif
#ifndef PROTO_LOCAL_PocketMenu_FindEmptyPocket
u32 PocketMenu_FindEmptyPocket(PocketMenu *s);
#endif
#ifndef PROTO_LOCAL_PocketMenu_TargetToLetterIndex
u32 PocketMenu_TargetToLetterIndex(PocketMenu *s, u32 id);
#endif
#ifndef PROTO_LOCAL_PocketMenu_LetterIndexToTarget
u32 PocketMenu_LetterIndexToTarget(PocketMenu *s, u32 id);
#endif
#ifndef PROTO_LOCAL_PocketMenu_HitLetter
u32 PocketMenu_HitLetter(PocketMenu *s, s32 a, s32 b, s32 c);
#endif
#ifndef PROTO_LOCAL_PocketMenu_DropLetterAt
s32 PocketMenu_DropLetterAt(PocketMenu *s, u32 id);
#endif
#ifndef PROTO_LOCAL_PocketMenu_SetLetter
void PocketMenu_SetLetter(PocketMenu *s, u32 id, void *p);
#endif
#ifndef PROTO_LOCAL_PocketMenu_HitShirtBox
BOOL PocketMenu_HitShirtBox(PocketMenu *s, s32 x, s32 y);
#endif
#ifndef PROTO_LOCAL_PocketMenu_HitSpecialTarget
s32 PocketMenu_HitSpecialTarget(PocketMenu *s, s32 x, s32 y);
#endif
#ifndef PROTO_LOCAL_PocketMenu_HitPlayer
BOOL PocketMenu_HitPlayer(PocketMenu *s, s32 x, s32 y);
#endif
#ifndef PROTO_LOCAL_PocketMenu_HitWalletIcon
BOOL PocketMenu_HitWalletIcon(PocketMenu *s, s32 x, s32 y);
#endif
#ifndef PROTO_LOCAL_PocketMenu_HitWalletAmount
s32 PocketMenu_HitWalletAmount(PocketMenu *s, s32 x, s32 y);
#endif
#ifndef PROTO_LOCAL_PocketMenu_GetTargetX
s32 PocketMenu_GetTargetX(PocketMenu *s, u32 id);
#endif
#ifndef PROTO_LOCAL_PocketMenu_GetTargetY
s32 PocketMenu_GetTargetY(PocketMenu *s, u32 id);
#endif
#ifndef PROTO_LOCAL_PocketMenu_IsSlotDisabled
s32 PocketMenu_IsSlotDisabled(PocketMenu *s, u32 id);
#endif
#ifndef PROTO_LOCAL_PocketMenu_IsSlotEmpty
s32 PocketMenu_IsSlotEmpty(PocketMenu *s, u32 id);
#endif
#ifndef PROTO_LOCAL_PocketMenu_GetItem
u32 PocketMenu_GetItem(PocketMenu *s, u32 id);
#endif
#ifndef PROTO_LOCAL_PocketMenu_GetItemFlags
s32 PocketMenu_GetItemFlags(PocketMenu *s, u32 id);
#endif
#ifndef PROTO_LOCAL_PocketMenu_GetLetter
void *PocketMenu_GetLetter(PocketMenu *s, u32 id);
#endif
#ifndef PROTO_LOCAL_PocketMenu_GetPlayerSlot
u32 PocketMenu_GetPlayerSlot();
#endif
}
#endif

#endif
