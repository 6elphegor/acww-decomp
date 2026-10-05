// mwcc-flags: -O4,p
#include "types.h"

#pragma thumb off

extern "C" {
u8 sWfcTransferWaitResult;
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

void WfcTransferWait_WaitFadeIn();
void WfcTransferWait_FadeIn();
void WfcTransferWait_LoadBg();
void WfcTransferWait_Enter();
BOOL WfcTransferWait_IsLidClosed();
BOOL WfcTransferWait_IsLidClosed() {
    s32 t = (s32)(*(volatile u16 *)0x27fffa8 & 0x8000) >> 15;
    if (t != 0) return TRUE;
    return FALSE;
}

void WfcTransferWait_Enter() {
    WfcTransfer_Start((void *)WfcTransferWait_OnTransferEvent);
    sWfcTransferWaitResult = 0;
    WfcTransferWait_LoadBg();
    WfcUtil_ShowBottomMessage(0x5e);
    WfcBusyIcon_Create(0);
    WfcSound_Play(0xb);
    WfcUtil_SetScene((void *)WfcTransferWait_FadeIn);
}

void WfcTransferWait_LoadBg() {
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

void WfcTransferWait_FadeIn() {
    WfcFade_Start(2, 0, 0x15, 8);
    WfcGx_ShowPlanes(0, 0x15);
    WfcUtil_SetScene((void *)WfcTransferWait_WaitFadeIn);
}

void WfcTransferWait_WaitFadeIn() {
    if (WfcFade_IsBusy(0) != 0) return;
    WfcUtil_OpenButtonBar(1);
    WfcUtil_SetScene((void *)WfcTransferWait_WaitButtonBar);
}

}
}

namespace F02210708 {

extern "C" {
extern u8 sWfcTransferFailedTopShown;
extern u8 sWfcTransferConfirmError;
extern u8 sWfcTransferConfirmAccepted;
extern u8 sWfcTransferWaitResult;
extern u8 data_ov001_0222ae14[];
extern u8 data_ov001_0222ae28[];
extern u16 data_ov001_02229ff8[];
extern u8 GX_LoadBG2Scr[];

s32 WfcUtil_LoadFileTo(void *a, void *b);
s32 WfcUtil_ShowBottomMessage(u32 a);
s32 WfcUtil_ShowTopMessage(u32 a, s32 b, u32 c);
s32 WfcUtil_SetScene(void *p);
s32 WfcUtil_SetScreenFlags(u32 a, u32 b);
s32 WfcText_DestroyBgCanvas(u32 a);
s32 WfcGx_HidePlanes(u32 a, u32 b);
s32 WfcGx_ShowPlanes(u32 a, u32 b);
s32 WfcUtil_HideTopMessage();
s32 WfcTransfer_IsFinished();
s32 WfcTransfer_StartSend();
s32 WfcTransfer_RequestEnd();
s32 WfcTransfer_SetCallback(void *a);
s32 WfcFade_IsBusy(u32 a);
s32 WfcDialog_IsOpen();
s32 WfcFade_Start(u32 a, u32 b, u32 c, u32 d);
s32 WfcDialog_GetResult();
s32 WfcDialog_Close();
s32 WfcDialog_Open(u32 a, u32 b, u32 c, s32 d, u32 e);
s32 WfcSound_Play(u32 a);
s32 WfcSound_Stop();
void *WfcTransfer_GetChildUser();
void *WfcText_CreateBgCanvas(s32 a, s32 b);
s32 WfcText_DrawTextRect(void *, u32, u32, u32, u32, s32, u32, void *);
s32 WfcText_RequestTransfer(void *);
s32 WfcButtonBar_IsClosed();
s32 WfcBusyIcon_Delete();
s32 WfcButtonBar_Close();
s32 WfcButtonBar_DisableInput();
s32 WfcFade_StartWait(u32 a);
s32 WfcButtonBar_GetResult();
s32 WfcInput_IsKeyPressed(u32 a);
s32 WfcButtonBar_SetResult(u32 a);
s32 WfcTransferWait_IsLidClosed();
void MIi_CpuClear16(u32 a, void *b, u32 c);
void MIi_CpuCopy16(void *a, void *b, u32 c);

void WfcTransferFailed_FadeIn();
void WfcOptions_Enter();
void WfcTransferSend_Enter();

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


void WfcTransferWait_OnTransferEvent(s32 a);
void WfcTransferWait_Exit();
void WfcTransferWait_FadeOut();
void WfcTransferWait_StartExit();
void WfcTransferWait_HandleResult();
void WfcTransferWait_Idle();
void WfcTransferWait_HandleInput();
void WfcTransferWait_Update();
void WfcTransferWait_WaitButtonBar();
void WfcTransferWait_WaitButtonBar() {
    if (WfcButtonBar_GetResult() == -2) return;
    WfcUtil_SetScene((void *)WfcTransferWait_Update);
}

void WfcTransferWait_Update() {
    WfcTransferWait_HandleInput();
    WfcTransferWait_Idle();
    WfcTransferWait_HandleResult();
}

void WfcTransferWait_HandleInput() {
    if (WfcInput_IsKeyPressed(2)) {
        WfcButtonBar_SetResult(0);
        return;
    }
    if (WfcTransferWait_IsLidClosed() == 0) return;
    WfcButtonBar_SetResult(0);
}

void WfcTransferWait_Idle() {
}

void WfcTransferWait_HandleResult() {
    if (WfcButtonBar_GetResult()) return;
    WfcSound_Stop();
    WfcSound_Play(7);
    WfcUtil_SetScene((void *)WfcTransferWait_StartExit);
}

void WfcTransferWait_StartExit() {
    if (sWfcTransferWaitResult == 0) {
        WfcTransfer_RequestEnd();
    }
    WfcButtonBar_DisableInput();
    WfcFade_StartWait(8);
    WfcUtil_SetScene((void *)WfcTransferWait_FadeOut);
}

void WfcTransferWait_FadeOut() {
    if (WfcFade_IsBusy(1)) return;
    if (sWfcTransferWaitResult == 0) {
        if (WfcTransfer_IsFinished() == 0) return;
    }
    WfcButtonBar_Close();
    if (sWfcTransferWaitResult == 0) {
        WfcFade_Start(3, 1, 1, 8);
    }
    WfcFade_Start(3, 0, 0x15, 8);
    WfcUtil_SetScene((void *)WfcTransferWait_Exit);
}

void WfcTransferWait_Exit() {
    if (WfcFade_IsBusy(0)) return;
    if (sWfcTransferWaitResult == 0) {
        if (WfcFade_IsBusy(1)) return;
    }
    if (WfcButtonBar_IsClosed() == 0) return;
    if (sWfcTransferWaitResult == 0) {
        if (WfcTransfer_IsFinished() == 0) return;
    }
    WfcBusyIcon_Delete();
    WfcText_DestroyBgCanvas(0);
    if (sWfcTransferWaitResult == 0) {
        WfcUtil_HideTopMessage();
        WfcGx_HidePlanes(1, 1);
    }
    WfcGx_HidePlanes(0, 0x15);
    if (sWfcTransferWaitResult == 0) {
        WfcUtil_SetScreenFlags(0, 1);
        WfcUtil_SetScene((void *)WfcOptions_Enter);
    } else if (sWfcTransferWaitResult == 2) {
        WfcUtil_SetScreenFlags(0, 1);
        WfcUtil_SetScene((void *)WfcTransferFailed_Enter);
    } else {
        WfcUtil_SetScreenFlags(0, 1);
        WfcUtil_SetScene((void *)WfcTransferConfirm_Enter);
    }
}

void WfcTransferWait_OnTransferEvent(s32 a) {
    WfcSound_Stop();
    if (a == 0) {
        sWfcTransferWaitResult = 1;
        WfcSound_Play(0x10);
    } else {
        sWfcTransferWaitResult = 2;
        WfcSound_Play(0x12);
    }
    WfcTransfer_SetCallback(0);
    WfcUtil_SetScene((void *)WfcTransferWait_StartExit);
}

}
}
