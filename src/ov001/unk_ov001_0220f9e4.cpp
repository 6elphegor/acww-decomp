// mwcc-flags: -O4,p
#include "types.h"

extern "C" {
extern u8 GX_LoadBG2Scr[];
s32 OS_SpinWait(u32 a);
s32 PM_ForceToPowerOff();
s32 WfcBusyIcon_Delete();
s32 WfcBusyIcon_Create(u32 a);
s32 WfcButtonBar_DisableInput();
s32 WfcButtonBar_EnableInput();
s32 WfcButtonBar_IsClosed();
s32 WfcButtonBar_SetResult(u32 a);
s32 WfcButtonBar_GetResult();
s32 WfcButtonBar_Close();
s32 WfcUtil_HideTopMessage();
s32 WfcUtil_ShowTopMessage(u32 a, s32 b, u32 c);
s32 WfcUtil_ShowBottomMessage(u32 a);
s32 WfcUtil_OpenButtonBar(u32 a);
void WfcUtil_LoadFileTo(void *a, void *b);
s32 WfcHighlight_Set(u32 a);
s32 WfcLinkIcon_Delete();
s32 WfcLinkIcon_Create(u32 a);
s32 WfcUtil_SetScreenFlags(u32 a, u32 b);
s32 WfcUtil_SetScene(void *p);
s32 WfcTransfer_SetCallback(void *a);
s32 WfcTransfer_IsFinished();
s32 WfcTransfer_RequestEnd();
s32 WfcOptions_Enter();
s32 WfcTransferSend_OnResult(s32 a);
s32 WfcTransferSend_Exit();
s32 WfcTransferSend_FadeOut();
void WfcTransferSend_Nop2();
void WfcTransferSend_Nop1();
void WfcTransferSend_Update();
s32 WfcTransferSend_WaitFadeIn();
s32 WfcTransferSend_FadeIn();
void WfcTransferSend_LoadBg();
s32 WfcTransferSend_Enter();
s32 WfcTransferDone_PowerOff();
s32 WfcTransferDone_FadeOut();
s32 WfcTransferDone_StartExit();
s32 WfcTransferDone_HandleResult();
void WfcTransferDone_Idle();
s32 WfcTransferDone_HandleInput();
s32 WfcTransferDone_Update();
s32 WfcTransferDone_WaitButtonBar();
s32 WfcTransferDone_WaitFadeIn();
s32 WfcTransferDone_FadeIn();
void WfcTransferDone_SetupBg();
s32 WfcTransferDone_Enter();
s32 WfcTransferNotice_Exit();
s32 WfcTransferNotice_FadeOut();
s32 WfcTransferNotice_StartExit();
s32 WfcTransferNotice_HandleResult();
void WfcTransferNotice_Idle();
s32 WfcTransferNotice_HandleInput();
s32 WfcTransferNotice_Update();
s32 WfcTransferNotice_WaitButtonBar();
s32 WfcTransferNotice_WaitFadeIn();
s32 WfcTransferNotice_FadeIn();
void WfcTransferNotice_SetupBg();
s32 WfcTransferNotice_Enter();
s32 WfcTransferIntro_Exit();
void WfcTransferIntro_FadeOut();
void WfcTransferIntro_StartExit();
void WfcTransferIntro_HandleResult();
void WfcTransferIntro_Idle();
void WfcTransferIntro_HandleInput();
void WfcTransferIntro_Update();
void WfcTransferIntro_WaitButtonBar();
void WfcTransferIntro_WaitFadeIn();
void WfcTransferIntro_FadeIn();
void WfcTransferIntro_LoadBg();
void WfcTransferIntro_Enter();
void WfcTransferCancelled_WaitTimer();
void WfcTransferCancelled_Exit();
void WfcTransferCancelled_FadeOut();
void WfcTransferCancelled_Idle();
void WfcTransferCancelled_Update();
void WfcTransferCancelled_WaitFadeIn();
void WfcTransferCancelled_FadeIn();
void WfcTransferCancelled_LoadBg();
s32 WfcTransferCancelled_Enter();
void WfcTransferFailed_Exit();
void WfcTransferFailed_FadeOut();
void WfcTransferFailed_StartExit();
void WfcTransferFailed_HandleResult();
void WfcTransferFailed_Idle();
void WfcTransferFailed_HandleInput();
void WfcTransferFailed_Update();
void WfcTransferFailed_WaitButtonBar();
void WfcTransferFailed_WaitFadeIn();
void WfcTransferFailed_FadeIn();
s32 WfcTransferFailed_Enter();
s32 WfcTransferWait_Enter();
s32 WfcConfig_EraseAll();
s32 WfcSound_Stop();
s32 WfcSound_Play(u32 a);
s32 WfcFade_StartWait(u32 a);
s32 WfcFade_Start(u32 a, u32 b, u32 c, u32 d);
s32 WfcFade_IsBusy(u32 a);
s32 WfcText_DestroyBgCanvas(u32 a);
s32 WfcGx_HidePlanes(u32 a, u32 b);
s32 WfcGx_ShowPlanes(u32 a, u32 b);
s32 WfcInput_IsKeyPressed(u32 a);

u8 sWfcTransferIntroAccepted;

#pragma thumb off

#define C668(f) WfcUtil_SetScene((void *)f)
#define BGCNT_SET(a) *(volatile u16 *)(a) = (*(volatile u16 *)(a) & ~3) | 3

void WfcTransferIntro_Enter() {
    sWfcTransferIntroAccepted = 0;
    WfcTransferIntro_LoadBg();
    WfcHighlight_Set(0x13);
    WfcUtil_ShowTopMessage(0x8d, -1, 0);
    WfcUtil_ShowBottomMessage(0x5d);
    WfcUtil_SetScene((void *)WfcTransferIntro_FadeIn);
}

void WfcTransferIntro_LoadBg() {
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

void WfcTransferIntro_FadeIn() {
    WfcFade_Start(2, 1, 1, 8);
    WfcFade_Start(2, 0, 0x15, 8);
    WfcGx_ShowPlanes(1, 1);
    WfcGx_ShowPlanes(0, 0x15);
    WfcUtil_SetScene((void *)WfcTransferIntro_WaitFadeIn);
}

void WfcTransferIntro_WaitFadeIn() {
    if (WfcFade_IsBusy(0) != 0) return;
    WfcUtil_OpenButtonBar(3);
    WfcUtil_SetScene((void *)WfcTransferIntro_WaitButtonBar);
}

void WfcTransferIntro_WaitButtonBar() {
    if (WfcButtonBar_GetResult() == -2) return;
    WfcButtonBar_EnableInput();
    WfcUtil_SetScene((void *)WfcTransferIntro_Update);
}

void WfcTransferIntro_Update() {
    WfcTransferIntro_HandleInput();
    WfcTransferIntro_Idle();
    WfcTransferIntro_HandleResult();
}

void WfcTransferIntro_HandleInput() {
    if (WfcInput_IsKeyPressed(1) != 0) {
        WfcButtonBar_SetResult(1);
    }
    if (WfcInput_IsKeyPressed(2) == 0) return;
    WfcButtonBar_SetResult(0);
}

void WfcTransferIntro_Idle() {
}

void WfcTransferIntro_HandleResult() {
    switch (WfcButtonBar_GetResult()) {
    case 0:
        WfcSound_Play(7);
        break;
    case 1:
        WfcSound_Play(6);
        sWfcTransferIntroAccepted = 1;
        break;
    default:
        return;
    }
    WfcUtil_SetScene((void *)WfcTransferIntro_StartExit);
}

void WfcTransferIntro_StartExit() {
    WfcButtonBar_DisableInput();
    WfcFade_StartWait(8);
    WfcUtil_SetScene((void *)WfcTransferIntro_FadeOut);
}

void WfcTransferIntro_FadeOut() {
    if (WfcFade_IsBusy(1) != 0) return;
    WfcButtonBar_Close();
    if (sWfcTransferIntroAccepted == 0) {
        WfcFade_Start(3, 1, 1, 8);
    }
    WfcFade_Start(3, 0, 0x15, 8);
    WfcUtil_SetScene((void *)WfcTransferIntro_Exit);
}

s32 WfcTransferIntro_Exit() {
    if (WfcFade_IsBusy(0) != 0) return;
    if (sWfcTransferIntroAccepted == 0) {
        if (WfcFade_IsBusy(1) != 0) return;
    }
    if (WfcButtonBar_IsClosed() == 0) return;
    WfcText_DestroyBgCanvas(0);
    if (sWfcTransferIntroAccepted == 0) {
        WfcUtil_HideTopMessage();
        WfcGx_HidePlanes(1, 1);
    }
    WfcGx_HidePlanes(0, 0x15);
    if (sWfcTransferIntroAccepted == 0) {
        WfcUtil_SetScreenFlags(0, 1);
        C668(WfcOptions_Enter);
    } else {
        WfcUtil_SetScreenFlags(0, 1);
        C668(WfcTransferNotice_Enter);
    }
}

s32 WfcTransferNotice_Enter() {
    WfcTransferNotice_SetupBg();
    WfcUtil_ShowBottomMessage(0x5c);
    C668(WfcTransferNotice_FadeIn);
}

void WfcTransferNotice_SetupBg() {
    BGCNT_SET(0x4001008);
    BGCNT_SET(0x400100a);
    BGCNT_SET(0x4000008);
    BGCNT_SET(0x400000a);
    BGCNT_SET(0x400000c);
}

s32 WfcTransferNotice_FadeIn() {
    WfcFade_Start(2, 0, 0x15, 8);
    WfcGx_ShowPlanes(0, 0x15);
    C668(WfcTransferNotice_WaitFadeIn);
}

s32 WfcTransferNotice_WaitFadeIn() {
    if (WfcFade_IsBusy(1) != 0) return;
    if (WfcFade_IsBusy(0) != 0) return;
    WfcUtil_OpenButtonBar(4);
    C668(WfcTransferNotice_WaitButtonBar);
}

s32 WfcTransferNotice_WaitButtonBar() {
    if (WfcButtonBar_GetResult() == -2) return;
    WfcButtonBar_EnableInput();
    C668(WfcTransferNotice_Update);
}

s32 WfcTransferNotice_Update() {
    WfcTransferNotice_HandleInput();
    WfcTransferNotice_Idle();
    WfcTransferNotice_HandleResult();
}

s32 WfcTransferNotice_HandleInput() {
    if (WfcInput_IsKeyPressed(1) == 0) return;
    WfcButtonBar_SetResult(0);
}

void WfcTransferNotice_Idle() {}

s32 WfcTransferNotice_HandleResult() {
    if (WfcButtonBar_GetResult() != 0) return;
    WfcSound_Play(6);
    C668(WfcTransferNotice_StartExit);
}

s32 WfcTransferNotice_StartExit() {
    WfcButtonBar_DisableInput();
    WfcFade_StartWait(8);
    C668(WfcTransferNotice_FadeOut);
}

s32 WfcTransferNotice_FadeOut() {
    if (WfcFade_IsBusy(1) != 0) return;
    WfcButtonBar_Close();
    WfcFade_Start(3, 0, 0x15, 8);
    C668(WfcTransferNotice_Exit);
}

s32 WfcTransferNotice_Exit() {
    if (WfcFade_IsBusy(0) != 0) return;
    if (WfcButtonBar_IsClosed() == 0) return;
    WfcText_DestroyBgCanvas(0);
    WfcGx_HidePlanes(0, 0x15);
    WfcUtil_SetScreenFlags(0, 1);
    C668(WfcTransferWait_Enter);
}
}
