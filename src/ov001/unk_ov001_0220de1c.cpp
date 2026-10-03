// mwcc-flags: -O4,p
#include "types.h"

#pragma thumb off

extern "C" {
volatile u8 sWfcEraseConfirmed;
}

extern "C" {
s32 WfcUtil_RequestPaletteLine(u32 *, u32, u32);
s32 WfcSound_Play(s32);
s32 WfcCursor_ShowCorners(u32, u32, u32, u32);
s32 WfcFade_IsBusy(s32);
s32 WfcCursor_Clear();
s32 WfcUtil_HideTopMessage();
s32 WfcFs_FreeFile(u32 *);
s32 WfcGx_HidePlanes(s32, s32);
s32 WfcGx_ShowPlanes(s32, s32);
s32 WfcUtil_SetScreenFlags(s32, s32);
s32 WfcUtil_SetScene(void *);
s32 WfcFade_Start(s32, s32, s32, s32);
s32 WfcButtonBar_DisableInput();
s32 WfcFade_StartWait(s32);
s32 WfcButtonBar_GetResult();
s32 WfcInput_IsTouchPressedIn(void *);
s32 WfcButtonBar_SetResult(s32);
s32 WfcInput_IsKeyPressed(s32);
s32 WfcInput_IsKeyRepeat(s32);
s32 WfcButtonBar_EnableInput();
s32 WfcUtil_OpenButtonBar(s32);
s32 WfcUtil_LoadFileTo(void *, void *);
s32 WfcUtil_LocalizePath(void *);
u32 *WfcFs_LoadFile(s32, s32, s32);
s32 WfcHighlight_Set(s32);
s32 WfcUtil_ShowTopMessage(s32, s32, s32);
s32 WfcTop_LoadScreen(s32);
s32 WfcDialog_IsOpen();
s32 WfcDialog_GetResult();
s32 WfcDialog_Close();
s32 WfcText_DestroyBgCanvas(s32);
s32 WfcButtonBar_Close();
s32 WfcButtonBar_IsClosed();
s32 WfcDialog_Open(s32, s32, s32, s32, s32);
void WfcUtil_QuitFadeOut();
void WfcOptions_Enter();
void WfcErased_Enter();
void WfcConnSelect_Enter();
void GX_LoadBG2Char();
void GX_LoadBGPltt();
void GX_LoadBG2Scr();
void WfcTopMenu_Exit();
void WfcTopMenu_FadeOut();
void WfcTopMenu_StartExit();
void WfcTopMenu_Update();
void WfcTopMenu_WaitButtonBar();
void WfcTopMenu_WaitFadeIn();
void WfcTopMenu_FadeIn();
void WfcTopMenu_Enter();
void WfcErase_WaitDialogClosed();
void WfcErase_WaitConfirmDialog();
void WfcErase_Exit();
void WfcErase_FadeOut();
void WfcErase_StartExit();
void WfcTopMenu_HandleInput();
void WfcTopMenu_Idle();
void WfcTopMenu_HandleResult();
void WfcTopMenu_LoadBg();
void WfcErase_HandleResult();
void WfcUtil_ShowBottomMessage(s32);
void OS_SpinWait(u32);
void PM_ForceToPowerOff();
void WfcConfig_EraseAll();
void *WfcText_CreateBgCanvas(s32, s32);
void OS_GetMacAddress(void *);
void func_0212c234(void *, s32, void *, ...);
void WfcText_DrawTextRect(void *, u32, u32, u32, u32, s32, u32, void *);
void func_020ff0bc(u64 *);
void WfcText_RequestTransfer(void *);
void WfcErase_Idle();
void WfcErase_HandleInput();
void WfcErase_Update();
void WfcErase_WaitButtonBar();
void WfcErase_WaitFadeIn();
void WfcErase_FadeIn();
void WfcErase_LoadBg();
void WfcErase_Enter();
void WfcErased_PowerOff();
void WfcErased_FadeOut();
void WfcErased_StartExit();
void WfcErased_HandleResult();
void WfcErased_Idle();
void WfcErased_HandleInput();
void WfcErased_Update();
void WfcErased_WaitButtonBar();
void WfcErased_WaitFadeIn();
void WfcErased_FadeIn();
void WfcErased_LoadBg();
void WfcSysInfo_Exit();
void WfcSysInfo_FadeOut();
void WfcSysInfo_StartExit();
void WfcSysInfo_HandleResult();
void WfcSysInfo_Idle();
void WfcSysInfo_HandleInput();
void WfcSysInfo_Update();
void WfcSysInfo_WaitButtonBar();
void WfcSysInfo_WaitFadeIn();
void WfcSysInfo_FadeIn();
}

extern "C" void WfcErase_Enter() {
    sWfcEraseConfirmed = 0;
    WfcErase_LoadBg();
    WfcHighlight_Set(0x12);
    WfcUtil_ShowTopMessage(0x8c, -1, 0);
    WfcUtil_ShowBottomMessage(0x55);
    WfcUtil_SetScene((void *)WfcErase_FadeIn);
}

extern "C" void WfcErase_LoadBg() {
    WfcUtil_LoadFileTo((void *)"char/yb5Multi.nsc.l", (void *)GX_LoadBG2Scr);
    volatile u16 *r1 = (volatile u16 *)0x4001008;
    volatile u16 *r2 = (volatile u16 *)0x400100a;
    volatile u16 *r3 = (volatile u16 *)0x4000008;
    volatile u16 *r4 = (volatile u16 *)0x400000a;
    volatile u16 *r5 = (volatile u16 *)0x400000c;
    *r1 = (*r1 & ~3) | 3;
    *r2 = (*r2 & ~3) | 3;
    *r3 = (*r3 & ~3) | 3;
    *r4 = (*r4 & ~3) | 3;
    *r5 = (*r5 & ~3) | 3;
}

extern "C" void WfcErase_FadeIn() {
    WfcFade_Start(2, 1, 1, 8);
    WfcFade_Start(2, 0, 0x15, 8);
    WfcGx_ShowPlanes(1, 1);
    WfcGx_ShowPlanes(0, 0x15);
    WfcUtil_SetScene((void *)WfcErase_WaitFadeIn);
}

extern "C" void WfcErase_WaitFadeIn() {
    if (WfcFade_IsBusy(1) != 0) return;
    if (WfcFade_IsBusy(0) != 0) return;
    WfcUtil_OpenButtonBar(3);
    WfcUtil_SetScene((void *)WfcErase_WaitButtonBar);
}

extern "C" void WfcErase_WaitButtonBar() {
    if (WfcButtonBar_GetResult() == -2) return;
    WfcButtonBar_EnableInput();
    WfcUtil_SetScene((void *)WfcErase_Update);
}

extern "C" void WfcErase_Update() {
    WfcErase_HandleInput();
    WfcErase_Idle();
    WfcErase_HandleResult();
}

extern "C" void WfcErase_HandleInput() {
    if (WfcInput_IsKeyPressed(1) != 0) {
        WfcButtonBar_SetResult(1);
    }
    if (WfcInput_IsKeyPressed(2) != 0) {
        WfcButtonBar_SetResult(0);
    }
}

extern "C" void WfcErase_Idle() {}

extern "C" void WfcErase_HandleResult() {
    switch (WfcButtonBar_GetResult()) {
    case 0:
        WfcSound_Play(7);
        WfcUtil_SetScene((void *)WfcErase_StartExit);
        break;
    case 1:
        WfcSound_Play(6);
        WfcDialog_Open(0x56, 0, 1, -1, 0);
        WfcButtonBar_DisableInput();
        WfcUtil_SetScene((void *)WfcErase_WaitConfirmDialog);
        break;
    }
}

extern "C" void WfcErase_StartExit() {
    WfcButtonBar_DisableInput();
    WfcFade_StartWait(8);
    WfcUtil_SetScene((void *)WfcErase_FadeOut);
}

extern "C" void WfcErase_FadeOut() {
    if (WfcFade_IsBusy(1) != 0) return;
    WfcButtonBar_Close();
    if (sWfcEraseConfirmed == 0) {
        WfcFade_Start(3, 1, 1, 8);
    }
    WfcFade_Start(3, 0, 0x15, 8);
    WfcUtil_SetScene((void *)WfcErase_Exit);
}

extern "C" void WfcErase_Exit() {
    if (WfcFade_IsBusy(0) != 0) return;
    if (sWfcEraseConfirmed == 0) {
        if (WfcFade_IsBusy(1) != 0) return;
    }
    if (WfcButtonBar_IsClosed() == 0) return;
    WfcText_DestroyBgCanvas(0);
    if (sWfcEraseConfirmed == 0) {
        WfcUtil_HideTopMessage();
        WfcGx_HidePlanes(1, 1);
    }
    WfcGx_HidePlanes(0, 0x15);
    if (sWfcEraseConfirmed == 0) {
        WfcUtil_SetScreenFlags(0, 1);
        WfcUtil_SetScene((void *)WfcOptions_Enter);
    } else {
        WfcUtil_SetScreenFlags(0, 1);
        WfcUtil_SetScene((void *)WfcErased_Enter);
    }
}

extern "C" void WfcErase_WaitConfirmDialog() {
    s32 r = WfcDialog_GetResult();
    if (r != 0) {
        if (r != 1) return;
        WfcSound_Play(0xe);
        sWfcEraseConfirmed = 1;
    } else {
        WfcSound_Play(7);
    }
    WfcDialog_Close();
    WfcUtil_SetScene((void *)WfcErase_WaitDialogClosed);
}

extern "C" void WfcErase_WaitDialogClosed() {
    if (WfcDialog_IsOpen() != 0) return;
    WfcUtil_SetScene((void *)WfcErase_StartExit);
}

