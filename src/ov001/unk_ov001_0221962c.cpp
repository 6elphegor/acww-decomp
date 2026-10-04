// mwcc-flags: -O4,p
#include "types.h"

#pragma thumb off

struct Unk_ov001_022198a4_E { u8 pad_00[0x28]; u8 security; u8 pad_29[0x1]; };

extern "C" {
s32 WfcFade_IsBusy(s32);
s32 WfcButtonBar_IsClosed();
void WfcBusyIcon_Delete();
void WfcText_DestroyBgCanvas(s32);
void WfcUtil_HideTopMessage();
void WfcGx_HidePlanes(s32, s32);
void WfcGx_ShowPlanes(s32, s32);
void WfcUtil_SetScreenFlags(s32, s32);
void WfcUtil_SetScene(void *);
void WfcButtonBar_Close();
void WfcFade_Start(s32, s32, s32, s32);
void WfcButtonBar_DisableInput();
void WfcFade_StartWait(s32);
s32 WfcButtonBar_GetResult();
void WfcSound_Stop();
void WfcSound_Play(s32);
s32 WfcInput_IsKeyPressed(s32);
void WfcButtonBar_SetResult(s32);
void WfcButtonBar_EnableInput();
void WfcUtil_OpenButtonBar(s32);
s32 WfcUtil_LoadFileTo(void *, void *);
void GX_LoadBG2Char();
void GX_LoadBGPltt();
void GX_LoadBG2Scr();
void WfcHighlight_SetConnection();
void WfcUtil_ShowTopMessage(s32, s32, s32);
void WfcUtil_ShowStepIndicator(s32);
void WfcUtil_ShowBottomMessage(s32);
void WfcBusyIcon_Create(s32);
s32 WfcDialog_IsOpen();
s32 WfcDialog_GetResult();
void WfcDialog_Close();
s32 WfcApScan_Stop();
void WfcApScan_Free();
u8 *WfcConfig_GetEdit();
void WfcConfig_BeginEdit(s32);
void WfcUtil_SetEditParams(s32, s32);
s32 WfcApScan_GetResults(void *);
void WfcDialog_Open(s32, s32, s32, s32, s32);
void WfcSetupMethod_Enter();
void WfcApList_Enter();
void WfcApScan_Alloc();
void WfcApScan_Start();

void WfcApSearch_WaitFadeIn();
void WfcApSearch_FadeIn();
void WfcApSearch_LoadBg();
void WfcApSearch_Enter();
void WfcApSearch_WaitDialogClosed();
void WfcApSearch_ResultDialog();
void WfcApSearch_Exit();
void WfcApSearch_FadeOut();
void WfcApSearch_StartExit();
void WfcApSearch_HandleResult();
void WfcApSearch_Idle();
void WfcApSearch_HandleInput();
void WfcApSearch_CheckResults();
void WfcApSearch_Update();
void WfcApSearch_WaitButtonBar();
}

extern "C" u8 sWfcApSearchResult = 0;
extern "C" volatile u16 sWfcApSearchTimer = 0;

#define REGSET(a, v) do { u32 t = *(volatile u16 *)(a); t &= ~3; t |= (v); *(volatile u16 *)(a) = t; } while (0)

extern "C" void WfcApSearch_Enter() {
    sWfcApSearchTimer = 0;
    sWfcApSearchResult = 0;
    WfcApSearch_LoadBg();
    WfcUtil_ShowTopMessage(0x7f, -1, 0);
    WfcHighlight_SetConnection();
    WfcUtil_ShowStepIndicator(2);
    WfcUtil_ShowBottomMessage(0x7f);
    WfcBusyIcon_Create(0);
    WfcApScan_Alloc();
    WfcApScan_Start();
    WfcSound_Play(10);
    WfcUtil_SetScene((void *)WfcApSearch_FadeIn);
}

extern "C" void WfcApSearch_LoadBg() {
    WfcUtil_LoadFileTo((void *)"char/jbBgStep3.ncg.l", (void *)GX_LoadBG2Char);
    WfcUtil_LoadFileTo((void *)"char/ybBgStep3.ncl.l", (void *)GX_LoadBGPltt);
    WfcUtil_LoadFileTo((void *)"char/xb4Multi.nsc.l", (void *)GX_LoadBG2Scr);
    REGSET(0x4001008, 3);
    REGSET(0x400100a, 3);
    REGSET(0x4000008, 3);
    REGSET(0x400000a, 3);
    REGSET(0x400000c, 3);
}

extern "C" void WfcApSearch_FadeIn() {
    WfcFade_Start(2, 1, 1, 8);
    WfcFade_Start(2, 0, 0x15, 8);
    WfcGx_ShowPlanes(1, 1);
    WfcGx_ShowPlanes(0, 0x15);
    WfcUtil_SetScene((void *)WfcApSearch_WaitFadeIn);
}

extern "C" void WfcApSearch_WaitFadeIn() {
    if (WfcFade_IsBusy(1)) return;
    if (WfcFade_IsBusy(0)) return;
    WfcUtil_OpenButtonBar(1);
    WfcUtil_SetScene((void *)WfcApSearch_WaitButtonBar);
}

extern "C" void WfcApSearch_WaitButtonBar() {
    if (WfcButtonBar_GetResult() == -2) return;
    WfcButtonBar_EnableInput();
    WfcUtil_SetScene((void *)WfcApSearch_Update);
}

extern "C" void WfcApSearch_Update() {
    WfcApSearch_HandleInput();
    WfcApSearch_Idle();
    WfcApSearch_HandleResult();
    WfcApSearch_CheckResults();
}

extern "C" void WfcApSearch_CheckResults() {
    Unk_ov001_022198a4_E *buf;
    s32 n, i;
    sWfcApSearchTimer = sWfcApSearchTimer + 1;
    if (sWfcApSearchTimer < 0x12c) return;
    WfcSound_Stop();
    n = WfcApScan_GetResults(&buf);
    if (n == 0) {
        sWfcApSearchResult = 2;
        WfcDialog_Open(0x43, 1, 1, -1, 0);
        WfcSound_Play(0x12);
        WfcButtonBar_DisableInput();
        WfcUtil_SetScene((void *)WfcApSearch_ResultDialog);
        return;
    }
    for (i = 0; i < n; i++) {
        if (buf[i].security != 2) break;
    }
    if (i == n) {
        sWfcApSearchResult = 3;
        WfcDialog_Open(0x42, 1, 1, -1, 0);
        WfcSound_Play(0x12);
        WfcButtonBar_DisableInput();
        WfcUtil_SetScene((void *)WfcApSearch_ResultDialog);
        return;
    }
    sWfcApSearchResult = 1;
    WfcSound_Play(0xf);
    WfcUtil_SetScene((void *)WfcApSearch_StartExit);
}

extern "C" void WfcApSearch_HandleInput() {
    if (WfcInput_IsKeyPressed(2) == 0) return;
    WfcSound_Stop();
    WfcButtonBar_SetResult(0);
}

extern "C" void WfcApSearch_Idle() {}

extern "C" void WfcApSearch_HandleResult() {
    if (WfcButtonBar_GetResult()) return;
    WfcSound_Stop();
    WfcSound_Play(7);
    WfcUtil_SetScene((void *)WfcApSearch_StartExit);
}

extern "C" void WfcApSearch_StartExit() {
    WfcButtonBar_DisableInput();
    WfcFade_StartWait(8);
    WfcUtil_SetScene((void *)WfcApSearch_FadeOut);
}

extern "C" void WfcApSearch_FadeOut() {
    if (WfcFade_IsBusy(1)) return;
    WfcButtonBar_Close();
    WfcFade_Start(3, 1, 1, 8);
    WfcFade_Start(3, 0, 0x15, 8);
    WfcUtil_SetScene((void *)WfcApSearch_Exit);
}

extern "C" void WfcApSearch_Exit() {
    if (WfcFade_IsBusy(1)) return;
    if (WfcFade_IsBusy(0)) return;
    if (WfcButtonBar_IsClosed() == 0) return;
    while (WfcApScan_Stop() == 0) {}
    WfcBusyIcon_Delete();
    WfcText_DestroyBgCanvas(0);
    WfcUtil_HideTopMessage();
    WfcGx_HidePlanes(1, 1);
    WfcGx_HidePlanes(0, 0x15);
    if (sWfcApSearchResult != 1) {
        WfcApScan_Free();
        WfcConfig_BeginEdit(WfcConfig_GetEdit()[0xf4]);
        WfcUtil_SetScreenFlags(2, 1);
        WfcUtil_SetScene((void *)WfcSetupMethod_Enter);
        return;
    }
    WfcUtil_SetScreenFlags(0, 1);
    WfcUtil_SetEditParams(0, 0);
    WfcUtil_SetScene((void *)WfcApList_Enter);
}

extern "C" void WfcApSearch_ResultDialog() {
    if (WfcDialog_GetResult()) return;
    WfcSound_Play(6);
    WfcDialog_Close();
    WfcUtil_SetScene((void *)WfcApSearch_WaitDialogClosed);
}

extern "C" void WfcApSearch_WaitDialogClosed() {
    if (WfcDialog_IsOpen()) return;
    WfcUtil_SetScene((void *)WfcApSearch_StartExit);
}

