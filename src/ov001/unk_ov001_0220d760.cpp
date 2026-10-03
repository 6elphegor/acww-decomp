// mwcc-flags: -O4,p
#include "types.h"

#pragma thumb off

extern "C" const u8 data_ov001_02229f90[16] = {0x08, 0x00, 0x20, 0x00, 0xac, 0x00, 0xa0, 0x00, 0xb4, 0x00, 0x20, 0x00, 0xf8, 0x00, 0xa0, 0x00};
extern "C" const u16 data_ov001_02229fa0[2][4] = {{0x0006, 0x001e, 0x009e, 0x0092}, {0x00b2, 0x001e, 0x00ea, 0x0092}};
#define data_ov001_02229fa2 ((const u16 (*)[4])((const u8 *)data_ov001_02229fa0 + 2))
#define data_ov001_02229fa4 ((const u16 (*)[4])((const u8 *)data_ov001_02229fa0 + 4))
#define data_ov001_02229fa6 ((const u16 (*)[4])((const u8 *)data_ov001_02229fa0 + 6))
extern "C" {
volatile u8 sWfcTopMenuSel;
u32 *sWfcTopMenuPalette;
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
void WfcUtil_QuitFadeOut();
void WfcOptions_Enter();
void WfcErased_Enter();
void WfcConnSelect_Enter();
void GX_LoadBG2Char();
void GX_LoadBGPltt();
void GX_LoadBG2Scr();

s32 WfcTopMenu_HighlightSelection();
void WfcTopMenu_MoveCursor(s32);
void WfcTopMenu_Exit();
void WfcTopMenu_FadeOut();
void WfcTopMenu_StartExit();
void WfcTopMenu_HandleResult();
void WfcTopMenu_Idle();
void WfcTopMenu_HandleInput();
void WfcTopMenu_Update();
void WfcTopMenu_WaitButtonBar();
void WfcTopMenu_WaitFadeIn();
void WfcTopMenu_FadeIn();
void WfcTopMenu_LoadBg();
void WfcTopMenu_Enter();
}

extern "C" void WfcTopMenu_Enter() {
    WfcTopMenu_LoadBg();
    WfcHighlight_Set(0);
    WfcUtil_ShowTopMessage(0x7a, -1, 0);
    WfcTop_LoadScreen(4);
    u32 i = sWfcTopMenuSel;
    WfcCursor_ShowCorners(data_ov001_02229fa0[i][0], data_ov001_02229fa4[i][0], data_ov001_02229fa2[i][0], data_ov001_02229fa6[i][0]);
    WfcUtil_SetScene((void *)WfcTopMenu_FadeIn);
}

extern "C" void WfcTopMenu_LoadBg() {
    char l[22] = "char/ybBgStep11.ncl.l";
    WfcUtil_LoadFileTo((void *)"char/jbBgStep1.ncg.l", (void *)GX_LoadBG2Char);
    WfcUtil_LoadFileTo((void *)"char/jbBgStep1.ncl.l", (void *)GX_LoadBGPltt);
    WfcUtil_LoadFileTo((void *)"char/jb2Menu.nsc.l", (void *)GX_LoadBG2Scr);
    sWfcTopMenuPalette = WfcFs_LoadFile(WfcUtil_LocalizePath(l), 0, 4);
    *(volatile u16 *)0x4001008 = (*(volatile u16 *)0x4001008 & ~3) | 3;
    *(volatile u16 *)0x400100a = (*(volatile u16 *)0x400100a & ~3) | 3;
    *(volatile u16 *)0x400000a = (*(volatile u16 *)0x400000a & ~3) | 3;
    *(volatile u16 *)0x400000c = (*(volatile u16 *)0x400000c & ~3) | 3;
}

extern "C" void WfcTopMenu_FadeIn() {
    WfcFade_Start(2, 1, 1, 8);
    WfcFade_Start(2, 0, 0x14, 8);
    WfcGx_ShowPlanes(1, 1);
    WfcGx_ShowPlanes(0, 0x14);
    WfcUtil_SetScene((void *)WfcTopMenu_WaitFadeIn);
}

extern "C" void WfcTopMenu_WaitFadeIn() {
    if (WfcFade_IsBusy(1) != 0) return;
    if (WfcFade_IsBusy(0) != 0) return;
    WfcUtil_OpenButtonBar(0);
    WfcUtil_SetScene((void *)WfcTopMenu_WaitButtonBar);
}

extern "C" void WfcTopMenu_WaitButtonBar() {
    if (WfcButtonBar_GetResult() == -2) return;
    WfcButtonBar_EnableInput();
    WfcUtil_SetScene((void *)WfcTopMenu_Update);
}

extern "C" void WfcTopMenu_Update() {
    WfcTopMenu_HandleInput();
    WfcTopMenu_Idle();
    WfcTopMenu_HandleResult();
}

extern "C" void WfcTopMenu_HandleInput() {
    u32 i = 0;
    const u8 *p = data_ov001_02229f90;
    do {
        if (WfcInput_IsTouchPressedIn((void *)p) != 0) {
            WfcButtonBar_SetResult(1);
            sWfcTopMenuSel = i;
            u32 k = sWfcTopMenuSel;
            WfcCursor_ShowCorners(data_ov001_02229fa0[k][0], data_ov001_02229fa4[k][0], data_ov001_02229fa2[k][0], data_ov001_02229fa6[k][0]);
            return;
        }
        i++;
        p += 8;
    } while (i < 2);
    if (WfcInput_IsKeyPressed(1) != 0) {
        WfcButtonBar_SetResult(1);
        return;
    }
    if (WfcInput_IsKeyPressed(2) != 0) {
        WfcButtonBar_SetResult(0);
        return;
    }
    if (WfcInput_IsKeyRepeat(0x40) != 0) {
        WfcTopMenu_MoveCursor(1);
        return;
    }
    if (WfcInput_IsKeyRepeat(0x80) != 0) {
        WfcTopMenu_MoveCursor(3);
        return;
    }
    if (WfcInput_IsKeyRepeat(0x20) != 0) {
        WfcTopMenu_MoveCursor(0);
        return;
    }
    if (WfcInput_IsKeyRepeat(0x10) == 0) return;
    WfcTopMenu_MoveCursor(2);
}

extern "C" void WfcTopMenu_Idle() {}

extern "C" void WfcTopMenu_HandleResult() {
    switch (WfcButtonBar_GetResult()) {
    case 0:
        WfcSound_Play(7);
        WfcUtil_SetScene((void *)WfcUtil_QuitFadeOut);
        break;
    case 1:
        WfcSound_Play(6);
        WfcTopMenu_HighlightSelection();
        WfcUtil_SetScene((void *)WfcTopMenu_StartExit);
        break;
    }
}

extern "C" void WfcTopMenu_StartExit() {
    WfcButtonBar_DisableInput();
    WfcFade_StartWait(8);
    WfcUtil_SetScene((void *)WfcTopMenu_FadeOut);
}

extern "C" void WfcTopMenu_FadeOut() {
    if (WfcFade_IsBusy(1) != 0) return;
    WfcFade_Start(3, 1, 1, 8);
    WfcFade_Start(3, 0, 0x14, 8);
    WfcUtil_SetScene((void *)WfcTopMenu_Exit);
}

extern "C" void WfcTopMenu_Exit() {
    if (WfcFade_IsBusy(1) != 0) return;
    if (WfcFade_IsBusy(0) != 0) return;
    WfcCursor_Clear();
    WfcUtil_HideTopMessage();
    WfcFs_FreeFile(sWfcTopMenuPalette);
    WfcGx_HidePlanes(1, 1);
    WfcGx_HidePlanes(0, 0x14);
    switch (sWfcTopMenuSel) {
    case 0:
        WfcUtil_SetScreenFlags(1, 0);
        WfcUtil_SetScene((void *)WfcConnSelect_Enter);
        break;
    case 1:
        WfcUtil_SetScreenFlags(0, 0);
        WfcUtil_SetScene((void *)WfcOptions_Enter);
        break;
    }
}

extern "C" void WfcTopMenu_MoveCursor(s32 a) {
    if (a == 1) return;
    if (a == 3) return;
    sWfcTopMenuSel = sWfcTopMenuSel ^ 1;
    WfcSound_Play(8);
    u32 i = sWfcTopMenuSel;
    WfcCursor_ShowCorners(data_ov001_02229fa0[i][0], data_ov001_02229fa4[i][0], data_ov001_02229fa2[i][0], data_ov001_02229fa6[i][0]);
}

extern "C" s32 WfcTopMenu_HighlightSelection() {
    u8 t[2] = {1, 2};
    u32 v = t[sWfcTopMenuSel];
    return WfcUtil_RequestPaletteLine(sWfcTopMenuPalette, v, v);
}

