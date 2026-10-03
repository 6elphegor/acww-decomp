// mwcc-flags: -O4,p
#include "types.h"

#pragma thumb off

extern "C" {
s32 WfcFade_IsBusy(s32);
s32 WfcButtonBar_IsClosed();
void WfcBusyIcon_Delete();
void WfcText_DestroyBgCanvas(s32);
void WfcUtil_HideTopMessage();
void WfcGx_HidePlanes(s32, s32);
void WfcGx_ShowPlanes(s32, s32);
void WfcSimpleStart_End();
void WfcSimpleStart_Begin();
s32 WfcSimpleStart_GetState();
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
void OS_Sleep(s32);
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
void WfcDialog_Open(s32, s32, s32, s32, s32);
void WfcSetupMethod_Enter();
void WfcSimpleStartWait_Enter();

void WfcSimpleStartInit_WaitDialogClosed();
void WfcSimpleStartInit_FailDialog();
void WfcSimpleStartInit_CheckStatus();
void WfcSimpleStartInit_Exit();
void WfcSimpleStartInit_FadeOut();
void WfcSimpleStartInit_StartExit();
void WfcSimpleStartInit_HandleResult();
void WfcSimpleStartInit_Idle();
void WfcSimpleStartInit_HandleInput();
void WfcSimpleStartInit_Update();
void WfcSimpleStartInit_WaitButtonBar();
void WfcSimpleStartInit_WaitFadeIn();
void WfcSimpleStartInit_FadeIn();
void WfcSimpleStartInit_LoadBg();
void WfcSimpleStartInit_Enter();
s32 WfcSimpleStartInit_IsLidClosed();
}

extern "C" u8 sWfcSimpleStartInitReady = 0;

#define BGCNT(a, v) (*(volatile u16 *)(a) = (*(volatile u16 *)(a) & ~3) | (v))

extern "C" s32 WfcSimpleStartInit_IsLidClosed() {
    s32 v = *(volatile u16 *)0x27fffa8 & 0x8000;
    v >>= 15;
    if (v != 0) return TRUE;
    return FALSE;
}

extern "C" void WfcSimpleStartInit_Enter() {
    sWfcSimpleStartInitReady = 0;
    WfcSimpleStartInit_LoadBg();
    WfcHighlight_SetConnection();
    WfcUtil_ShowTopMessage(0x83, -1, 0);
    WfcUtil_ShowStepIndicator(2);
    WfcUtil_ShowBottomMessage(0x69);
    WfcBusyIcon_Create(0);
    WfcSound_Play(0xb);
    WfcUtil_SetScene((void *)WfcSimpleStartInit_FadeIn);
}

extern "C" void WfcSimpleStartInit_LoadBg() {
    WfcUtil_LoadFileTo((void *)"char/jbBgStep3.ncg.l", (void *)GX_LoadBG2Char);
    WfcUtil_LoadFileTo((void *)"char/ybBgStep3.ncl.l", (void *)GX_LoadBGPltt);
    WfcUtil_LoadFileTo((void *)"char/xb4Multi.nsc.l", (void *)GX_LoadBG2Scr);
    BGCNT(0x4001008, 3);
    BGCNT(0x400100a, 3);
    BGCNT(0x4000008, 3);
    BGCNT(0x400000a, 3);
    BGCNT(0x400000c, 3);
}

extern "C" void WfcSimpleStartInit_FadeIn() {
    WfcFade_Start(2, 1, 1, 8);
    WfcFade_Start(2, 0, 0x15, 8);
    WfcGx_ShowPlanes(1, 1);
    WfcGx_ShowPlanes(0, 0x15);
    WfcUtil_SetScene((void *)WfcSimpleStartInit_WaitFadeIn);
}

extern "C" void WfcSimpleStartInit_WaitFadeIn() {
    if (WfcFade_IsBusy(1)) return;
    if (WfcFade_IsBusy(0)) return;
    WfcSimpleStart_Begin();
    WfcUtil_OpenButtonBar(1);
    WfcUtil_SetScene((void *)WfcSimpleStartInit_WaitButtonBar);
}

extern "C" void WfcSimpleStartInit_WaitButtonBar() {
    if (WfcButtonBar_GetResult() == -2) return;
    WfcButtonBar_EnableInput();
    WfcUtil_SetScene((void *)WfcSimpleStartInit_Update);
}

extern "C" void WfcSimpleStartInit_Update() {
    OS_Sleep(10);
    WfcSimpleStartInit_CheckStatus();
    WfcSimpleStartInit_HandleInput();
    WfcSimpleStartInit_Idle();
    WfcSimpleStartInit_HandleResult();
}

extern "C" void WfcSimpleStartInit_HandleInput() {
    if (WfcInput_IsKeyPressed(2)) {
        WfcButtonBar_SetResult(0);
        return;
    }
    if (WfcSimpleStartInit_IsLidClosed() == 0) return;
    WfcButtonBar_SetResult(0);
}

extern "C" void WfcSimpleStartInit_Idle() {}

extern "C" void WfcSimpleStartInit_HandleResult() {
    if (WfcButtonBar_GetResult()) return;
    WfcSound_Stop();
    WfcSound_Play(7);
    WfcUtil_SetScene((void *)WfcSimpleStartInit_StartExit);
}

extern "C" void WfcSimpleStartInit_StartExit() {
    WfcButtonBar_DisableInput();
    WfcFade_StartWait(8);
    WfcUtil_SetScene((void *)WfcSimpleStartInit_FadeOut);
}

extern "C" void WfcSimpleStartInit_FadeOut() {
    if (WfcFade_IsBusy(1)) return;
    if (sWfcSimpleStartInitReady == 0) {
        WfcButtonBar_Close();
    }
    if (sWfcSimpleStartInitReady == 0) {
        WfcFade_Start(3, 1, 1, 8);
    }
    WfcFade_Start(3, 0, 0x14, 8);
    WfcUtil_SetScene((void *)WfcSimpleStartInit_Exit);
}

extern "C" void WfcSimpleStartInit_Exit() {
    if (WfcFade_IsBusy(0)) return;
    if (sWfcSimpleStartInitReady == 0) {
        if (WfcFade_IsBusy(1)) return;
    }
    if (WfcButtonBar_IsClosed() == 0) return;
    WfcBusyIcon_Delete();
    WfcText_DestroyBgCanvas(0);
    if (sWfcSimpleStartInitReady == 0) {
        WfcUtil_HideTopMessage();
        WfcGx_HidePlanes(1, 1);
    }
    WfcGx_HidePlanes(0, 0x15);
    if (sWfcSimpleStartInitReady == 0) {
        WfcSimpleStart_End();
        WfcUtil_SetScreenFlags(2, 1);
        WfcUtil_SetScene((void *)WfcSetupMethod_Enter);
        return;
    }
    WfcUtil_SetScreenFlags(0, 0);
    WfcUtil_SetScene((void *)WfcSimpleStartWait_Enter);
}

extern "C" void WfcSimpleStartInit_CheckStatus() {
    switch (WfcSimpleStart_GetState()) {
    case 1:
        sWfcSimpleStartInitReady = 1;
        WfcUtil_SetScene((void *)WfcSimpleStartInit_StartExit);
        break;
    case 4:
        sWfcSimpleStartInitReady = 0;
        WfcSound_Stop();
        WfcSound_Play(9);
        WfcDialog_Open(0x41, 1, 1, -1, 0);
        WfcButtonBar_DisableInput();
        WfcUtil_SetScene((void *)WfcSimpleStartInit_FailDialog);
        break;
    }
}

extern "C" void WfcSimpleStartInit_FailDialog() {
    if (WfcDialog_GetResult() != 0) return;
    WfcSound_Play(6);
    WfcDialog_Close();
    WfcUtil_SetScene((void *)WfcSimpleStartInit_WaitDialogClosed);
}

extern "C" void WfcSimpleStartInit_WaitDialogClosed() {
    if (WfcDialog_IsOpen() != 0) return;
    WfcUtil_SetScene((void *)WfcSimpleStartInit_StartExit);
}

