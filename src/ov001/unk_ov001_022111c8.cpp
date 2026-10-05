// mwcc-flags: -O4,p
#include "types.h"

#pragma thumb off

extern "C" {
u8 sWfcAossSetupSucceeded;
u16 sWfcAossSetupTimer;
u32 sWfcAossSetupUiTask;
}


namespace F02211030 {


extern "C" {
extern u8 data_ov001_0222ae3c[];
extern u8 data_ov001_0222ae50[];
extern u8 data_ov001_0222ae68[];
extern u8 data_ov001_0222ae80[];
extern volatile u8 sWfcTransferWaitResult;
extern volatile u8 sWfcAossSetupSucceeded;
extern volatile u16 sWfcAossSetupTimer;
extern u32 sWfcAossSetupUiTask;
extern volatile u8 sWfcAossDoneTimer;

s32 WfcFade_IsBusy(s32);
s32 WfcUtil_OpenButtonBar(s32);
s32 WfcUtil_SetScene(void *);
s32 WfcFade_Start(s32, s32, s32, s32);
s32 WfcGx_ShowPlanes(s32, s32);
s32 WfcUtil_LoadFileTo(void *, void *);
s32 WfcTransfer_Start(void *);
s32 WfcUtil_ShowBottomMessage(s32);
s32 WfcBusyIcon_Create(s32);
s32 WfcSound_Play(s32);
s32 WfcSound_Stop();
s32 WfcDialog_IsOpen();
s32 WfcDialog_GetResult();
s32 WfcDialog_Close();
s32 WfcInput_Update();
s32 WfcTask_RunList(s32);
s32 WfcButtonBar_IsClosed();
s32 WfcAoss_End(s32);
s32 WfcBusyIcon_Delete();
s32 WfcText_DestroyBgCanvas(s32);
s32 WfcUtil_HideTopMessage();
s32 WfcGx_HidePlanes(s32, s32);
s32 WfcUtil_SetScreenFlags(s32, s32);
s32 WfcUtil_SetEditParams(s32, s32);
s32 WfcButtonBar_Close();
s32 WfcButtonBar_DisableInput();
s32 WfcTask_Delete(s32, s32);
s32 WfcButtonBar_GetResult();
s32 WfcDialog_Open(s32, s32, s32, s32, s32);
s32 WfcInput_IsKeyHeld(s32);
s32 WfcButtonBar_SetResult(s32);
s32 WfcAoss_Run();
s32 WfcTask_Add(s32, void *, s32, s32);
s32 WfcHighlight_SetConnection();
s32 WfcUtil_ShowTopMessage(s32, s32, s32);
s32 WfcUtil_ShowStepIndicator(s32);
s32 WfcFade_StartWait(s32);
s32 WfcAoss_Begin();
void WfcTransferWait_WaitButtonBar();
void WfcTransferWait_OnTransferEvent();
void WfcSetupMethod_Enter();
void WfcAossDone_Enter();
void WfcTestConfirm_Enter();
void WfcAossDone_FadeOut();
void GX_LoadBG2Char();
void GX_LoadBGPltt();
void GX_LoadBG2Scr();

void WfcTransferWait_WaitFadeIn();
void WfcTransferWait_FadeIn();
void WfcTransferWait_LoadBg();
void WfcTransferWait_Enter();
BOOL WfcTransferWait_IsLidClosed();
void WfcAossSetup_Cancel();
void WfcAossSetup_WaitAfterSuccess();
void WfcAossSetup_WaitDialogClosed();
void WfcAossSetup_WaitErrorDialog();
void WfcAossSetup_UiTask();
void WfcAossSetup_Exit();
void WfcAossSetup_FadeOut();
void WfcAossSetup_StartExit();
void WfcAossSetup_HandleResult();
void WfcAossSetup_Idle();
void WfcAossSetup_HandleInput();
void WfcAossSetup_RunAoss();
void WfcAossSetup_StartAoss();
void WfcAossSetup_WaitFadeIn();
void WfcAossSetup_FadeIn();
void WfcAossSetup_LoadBg();
void WfcAossSetup_Enter();
BOOL WfcAossSetup_IsLidClosed();
void WfcAossDone_WaitTimer();
void WfcAossDone_Exit();

void WfcAossSetup_Cancel();
void WfcAossSetup_WaitAfterSuccess();
void WfcAossSetup_WaitDialogClosed();
void WfcAossSetup_WaitErrorDialog();
void WfcAossSetup_UiTask();
void WfcAossSetup_Exit();
void WfcAossSetup_FadeOut();
void WfcAossSetup_StartExit();
void WfcAossSetup_HandleResult();
void WfcAossSetup_Idle();
void WfcAossSetup_HandleInput();
void WfcAossSetup_RunAoss();
void WfcAossSetup_StartAoss();
void WfcAossSetup_WaitFadeIn();
void WfcAossSetup_FadeIn();
void WfcAossSetup_LoadBg();
void WfcAossSetup_Enter();
BOOL WfcAossSetup_IsLidClosed();
BOOL WfcAossSetup_IsLidClosed() {
    s32 t = (s32)(*(volatile u16 *)0x27fffa8 & 0x8000) >> 15;
    if (t != 0) return TRUE;
    return FALSE;
}

void WfcAossSetup_Enter() {
    sWfcAossSetupTimer = 0;
    WfcAossSetup_LoadBg();
    WfcHighlight_SetConnection();
    WfcUtil_ShowTopMessage(0x82, -1, 0);
    WfcUtil_ShowStepIndicator(2);
    WfcUtil_ShowBottomMessage(0x67);
    WfcBusyIcon_Create(0);
    WfcAoss_Begin();
    WfcSound_Play(0xb);
    WfcUtil_SetScene((void *)WfcAossSetup_FadeIn);
}

void WfcAossSetup_LoadBg() {
    WfcUtil_LoadFileTo((void *)"char/jbBgStep3.ncg.l", (void *)GX_LoadBG2Char);
    WfcUtil_LoadFileTo((void *)"char/ybBgStep3.ncl.l", (void *)GX_LoadBGPltt);
    WfcUtil_LoadFileTo((void *)"char/xb4Multi.nsc.l", (void *)GX_LoadBG2Scr);
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

void WfcAossSetup_FadeIn() {
    WfcFade_Start(2, 1, 1, 8);
    WfcFade_Start(2, 0, 0x15, 8);
    WfcGx_ShowPlanes(1, 1);
    WfcGx_ShowPlanes(0, 0x15);
    WfcUtil_SetScene((void *)WfcAossSetup_WaitFadeIn);
}

void WfcAossSetup_WaitFadeIn() {
    if (WfcFade_IsBusy(1) != 0) return;
    if (WfcFade_IsBusy(0) != 0) return;
    WfcUtil_OpenButtonBar(1);
    WfcUtil_SetScene((void *)WfcAossSetup_StartAoss);
}

void WfcAossSetup_StartAoss() {
    if (WfcButtonBar_GetResult() == -2) return;
    sWfcAossSetupUiTask = WfcTask_Add(1, (void *)WfcAossSetup_UiTask, 0, 0x78);
    WfcUtil_SetScene((void *)WfcAossSetup_RunAoss);
}

void WfcAossSetup_RunAoss() {
    WfcAossSetup_HandleInput();
    WfcAossSetup_Idle();
    WfcAossSetup_HandleResult();
    s32 r = WfcAoss_Run();
    switch (r) {
    case 0: return;
    case 1: {
        u32 t = sWfcAossSetupUiTask;
        sWfcAossSetupSucceeded = 1;
        WfcTask_Delete(1, t);
        sWfcAossSetupUiTask = 0;
        WfcUtil_SetScene((void *)WfcAossSetup_WaitAfterSuccess);
        break;
    }
    case 2: {
        WfcSound_Stop();
        WfcDialog_Open(0x40, 1, 1, -1, 0);
        WfcSound_Play(9);
        WfcButtonBar_DisableInput();
        WfcTask_Delete(1, sWfcAossSetupUiTask);
        sWfcAossSetupUiTask = 0;
        WfcUtil_SetScene((void *)WfcAossSetup_WaitErrorDialog);
        break;
    }
    }
}

void WfcAossSetup_HandleInput() {
    if (WfcInput_IsKeyHeld(2) != 0) {
        WfcButtonBar_SetResult(0);
        return;
    }
    if (WfcAossSetup_IsLidClosed() == 0) return;
    WfcButtonBar_SetResult(0);
}

void WfcAossSetup_Idle() {
}

void WfcAossSetup_HandleResult() {
    if (WfcButtonBar_GetResult() != 0) return;
    WfcButtonBar_DisableInput();
    WfcUtil_SetScene((void *)WfcAossSetup_Cancel);
}

void WfcAossSetup_StartExit() {
    WfcButtonBar_DisableInput();
    if (sWfcAossSetupUiTask != 0) {
        WfcTask_Delete(1, sWfcAossSetupUiTask);
    }
    WfcFade_StartWait(8);
    WfcUtil_SetScene((void *)WfcAossSetup_FadeOut);
}

void WfcAossSetup_FadeOut() {
    if (WfcFade_IsBusy(1) != 0) return;
    WfcButtonBar_Close();
    if (sWfcAossSetupSucceeded == 0) {
        WfcFade_Start(3, 1, 1, 8);
    }
    WfcFade_Start(3, 0, 0x15, 8);
    WfcUtil_SetScene((void *)WfcAossSetup_Exit);
}

void WfcAossSetup_Exit() {
    if (WfcFade_IsBusy(0) != 0) return;
    if (sWfcAossSetupSucceeded == 0) {
        if (WfcFade_IsBusy(1) != 0) return;
    }
    if (WfcButtonBar_IsClosed() == 0) return;
    WfcAoss_End(sWfcAossSetupSucceeded != 0 ? 1 : 0);
    WfcBusyIcon_Delete();
    WfcText_DestroyBgCanvas(0);
    if (sWfcAossSetupSucceeded == 0) {
        WfcUtil_HideTopMessage();
        WfcGx_HidePlanes(1, 1);
    }
    WfcGx_HidePlanes(0, 0x15);
    if (sWfcAossSetupSucceeded == 0) {
        WfcUtil_SetScreenFlags(2, 1);
        WfcUtil_SetScene((void *)WfcSetupMethod_Enter);
        return;
    }
    WfcUtil_SetScreenFlags(0, 0);
    WfcUtil_SetScene((void *)WfcAossDone_Enter);
}

void WfcAossSetup_UiTask() {
    WfcInput_Update();
    WfcTask_RunList(0);
    WfcAossSetup_HandleInput();
    WfcAossSetup_HandleResult();
}

void WfcAossSetup_WaitErrorDialog() {
    if (WfcDialog_GetResult() != 0) return;
    WfcSound_Play(6);
    WfcDialog_Close();
    WfcUtil_SetScene((void *)WfcAossSetup_WaitDialogClosed);
}

void WfcAossSetup_WaitDialogClosed() {
    if (WfcDialog_IsOpen() != 0) return;
    WfcUtil_SetScene((void *)WfcAossSetup_StartExit);
}

void WfcAossSetup_WaitAfterSuccess() {
    WfcAossSetup_HandleInput();
    WfcAossSetup_Idle();
    WfcAossSetup_HandleResult();
    sWfcAossSetupTimer = sWfcAossSetupTimer + 1;
    if (sWfcAossSetupTimer < 0x438) return;
    WfcSound_Stop();
    WfcUtil_SetScene((void *)WfcAossSetup_StartExit);
}

void WfcAossSetup_Cancel() {
    WfcSound_Stop();
    WfcSound_Play(7);
    sWfcAossSetupSucceeded = 0;
    WfcUtil_SetScene((void *)WfcAossSetup_StartExit);
}

}
}
