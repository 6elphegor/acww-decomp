// mwcc-flags: -O4,p
#include "types.h"

extern "C" {
extern u8 GX_LoadBG2Scr[];
void MIi_CpuClear16(u32 a, void *b, u32 c);
void MIi_CpuCopy16(void *a, void *b, u32 c);
s32 WfcBusyIcon_Delete();
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
s32 WfcUtil_LoadFileTo(void *a, void *b);
s32 WfcHighlight_Set(u32 a);
s32 WfcUtil_SetScreenFlags(u32 a, u32 b);
s32 WfcUtil_SetScene(void *p);
s32 WfcTransfer_StartSend();
s32 WfcTransfer_SetCallback(void *a);
s32 WfcTransfer_IsFinished();
s32 WfcTransfer_RequestEnd();
s32 WfcOptions_Enter();
void WfcTransferSend_Enter();
void WfcTransferIntro_Exit();
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
void WfcTransferCancelled_Enter();
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
void WfcTransferFailed_LoadBg();
void WfcTransferFailed_Enter();
void WfcTransferConfirm_OnTransferError();
void WfcTransferConfirm_Exit();
void WfcTransferConfirm_StartSendOrEnd();
void WfcTransferConfirm_WaitDialogClosed();
void WfcTransferConfirm_Nop2();
void WfcTransferConfirm_Nop1();
void WfcTransferConfirm_HandleResult();
void WfcTransferConfirm_WaitDialogOpen();
void WfcTransferConfirm_OpenDialog();
void WfcTransferConfirm_FadeIn();
void WfcTransferConfirm_LoadBg();
void WfcTransferConfirm_Enter();
void WfcTransferWait_OnTransferEvent(s32 a);
void WfcTransferWait_Exit();
void WfcTransferWait_FadeOut();
void WfcTransferWait_StartExit();
void WfcTransferWait_HandleResult();
void WfcTransferWait_Idle();
void WfcTransferWait_HandleInput();
void WfcTransferWait_Update();
void WfcTransferWait_WaitButtonBar();
s32 WfcTransferWait_Enter();
s32 WfcTransferWait_IsLidClosed();
s32 WfcSound_Stop();
s32 WfcSound_Play(u32 a);
s32 WfcDialog_IsOpen();
s32 WfcDialog_GetResult();
s32 WfcDialog_Close();
s32 WfcDialog_Open(u32 a, u32 b, u32 c, s32 d, u32 e);
s32 WfcFade_StartWait(u32 a);
s32 WfcFade_Start(u32 a, u32 b, u32 c, u32 d);
s32 WfcFade_IsBusy(u32 a);
s32 WfcText_RequestTransfer(void *);
s32 WfcText_DrawTextRect(void *, u32, u32, u32, u32, s32, u32, void *);
s32 WfcText_DestroyBgCanvas(u32 a);
s32 WfcGx_HidePlanes(u32 a, u32 b);
s32 WfcGx_ShowPlanes(u32 a, u32 b);
s32 WfcInput_IsKeyPressed(u32 a);

u8 sWfcTransferFailedTopShown;
u8 sWfcTransferFailedRetry;

#pragma thumb off


void WfcTransferFailed_Enter() {
    WfcTransferFailed_LoadBg();
    WfcUtil_ShowBottomMessage(0x62);
    sWfcTransferFailedTopShown = WfcUtil_ShowTopMessage(0x8d, -1, 0);
    WfcUtil_SetScene((void *)WfcTransferFailed_FadeIn);
}

void WfcTransferFailed_LoadBg() {
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

void WfcTransferFailed_FadeIn() {
    WfcFade_Start(2, 0, 0x15, 8);
    WfcGx_ShowPlanes(0, 0x15);
    if (sWfcTransferFailedTopShown != 0) {
        WfcFade_Start(2, 1, 1, 8);
        WfcGx_ShowPlanes(1, 1);
    }
    WfcUtil_SetScene((void *)WfcTransferFailed_WaitFadeIn);
}

void WfcTransferFailed_WaitFadeIn() {
    if (WfcFade_IsBusy(1) != 0) return;
    if (WfcFade_IsBusy(0) != 0) return;
    WfcUtil_OpenButtonBar(3);
    WfcUtil_SetScene((void *)WfcTransferFailed_WaitButtonBar);
}

void WfcTransferFailed_WaitButtonBar() {
    if (WfcButtonBar_GetResult() == -2) return;
    if (WfcTransfer_IsFinished() == 0) return;
    WfcButtonBar_EnableInput();
    WfcUtil_SetScene((void *)WfcTransferFailed_Update);
}

void WfcTransferFailed_Update() {
    WfcTransferFailed_HandleInput();
    WfcTransferFailed_Idle();
    WfcTransferFailed_HandleResult();
}

void WfcTransferFailed_HandleInput() {
    if (WfcInput_IsKeyPressed(1) != 0) {
        WfcButtonBar_SetResult(1);
    }
    if (WfcInput_IsKeyPressed(2) == 0) return;
    WfcButtonBar_SetResult(0);
}

void WfcTransferFailed_Idle() {
}

void WfcTransferFailed_HandleResult() {
    s32 r = WfcButtonBar_GetResult();
    if (r != 0) {
        if (r != 1) return;
        sWfcTransferFailedRetry = 1;
        WfcSound_Play(6);
    } else {
        sWfcTransferFailedRetry = 0;
        WfcSound_Play(7);
    }
    WfcUtil_SetScene((void *)WfcTransferFailed_StartExit);
}

void WfcTransferFailed_StartExit() {
    WfcButtonBar_DisableInput();
    WfcFade_StartWait(8);
    WfcUtil_SetScene((void *)WfcTransferFailed_FadeOut);
}

void WfcTransferFailed_FadeOut() {
    if (WfcFade_IsBusy(1) != 0) return;
    WfcButtonBar_Close();
    if (sWfcTransferFailedRetry == 0) {
        WfcFade_Start(3, 1, 1, 8);
    }
    WfcFade_Start(3, 0, 0x15, 8);
    WfcUtil_SetScene((void *)WfcTransferFailed_Exit);
}

void WfcTransferFailed_Exit() {
    if (WfcFade_IsBusy(1) != 0) return;
    if (WfcFade_IsBusy(0) != 0) return;
    if (WfcButtonBar_IsClosed() == 0) return;
    WfcText_DestroyBgCanvas(0);
    if (sWfcTransferFailedRetry == 0) {
        WfcUtil_HideTopMessage();
        WfcGx_HidePlanes(1, 1);
    }
    WfcGx_HidePlanes(0, 0x15);
    if (sWfcTransferFailedRetry == 0) {
        WfcUtil_SetScreenFlags(0, 1);
        WfcUtil_SetScene((void *)WfcOptions_Enter);
    } else {
        WfcUtil_SetScreenFlags(0, 1);
        WfcUtil_SetScene((void *)WfcTransferWait_Enter);
    }
}
}
