// mwcc-flags: -O4,p
#include "types.h"

extern "C" {
extern u8 GX_LoadBG2Scr[];
void MIi_CpuClear16(u32 a, void *b, u32 c);
void MIi_CpuCopy16(void *a, void *b, u32 c);
s32 WfcBusyIcon_Delete();
s32 WfcButtonBar_DisableInput();
s32 WfcButtonBar_IsClosed();
s32 WfcButtonBar_SetResult(u32 a);
s32 WfcButtonBar_GetResult();
s32 WfcButtonBar_Close();
s32 WfcUtil_HideTopMessage();
s32 WfcUtil_ShowTopMessage(u32 a, s32 b, u32 c);
s32 WfcUtil_ShowBottomMessage(u32 a);
s32 WfcUtil_LoadFileTo(void *a, void *b);
s32 WfcUtil_SetScreenFlags(u32 a, u32 b);
s32 WfcUtil_SetScene(void *p);
void *WfcTransfer_GetChildUser();
s32 WfcTransfer_StartSend();
s32 WfcTransfer_SetCallback(void *a);
s32 WfcTransfer_IsFinished();
s32 WfcTransfer_RequestEnd();
void WfcOptions_Enter();
void WfcTransferSend_Enter();
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
void *WfcText_CreateBgCanvas(s32 a, s32 b);
s32 WfcGx_HidePlanes(u32 a, u32 b);
s32 WfcGx_ShowPlanes(u32 a, u32 b);
s32 WfcInput_IsKeyPressed(u32 a);

u8 sWfcTransferConfirmAccepted;
u8 sWfcTransferConfirmError;
extern const u16 data_ov001_02229ff8[4];
const u16 data_ov001_02229ff8[4] = {0x8, 0x35, 0xf8, 0x51};

#pragma thumb off


void WfcTransferConfirm_Enter() {
    u8 *p = (u8 *)WfcTransfer_GetChildUser();
    void *w = WfcText_CreateBgCanvas(0, 0);
    sWfcTransferConfirmAccepted = 0;
    sWfcTransferConfirmError = 0;
    WfcTransferConfirm_LoadBg();
    volatile u16 v = 0;
    u16 buf[11];
    MIi_CpuClear16(v, buf, 0x16);
    MIi_CpuCopy16(p + 2, buf, p[1] * 2);
    const u16 *h = data_ov001_02229ff8;
    WfcText_DrawTextRect(w, h[0], h[1], h[2] - h[0], h[3] - h[1], 2, 0x480, buf);
    WfcText_RequestTransfer(w);
    WfcTransfer_SetCallback((void *)WfcTransferConfirm_OnTransferError);
    WfcUtil_SetScene((void *)WfcTransferConfirm_FadeIn);
}

void WfcTransferConfirm_LoadBg() {
    WfcUtil_LoadFileTo((void *)"char/jb5Move.nsc.l", (void *)GX_LoadBG2Scr);
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

void WfcTransferConfirm_FadeIn() {
    WfcFade_Start(2, 0, 0x15, 8);
    WfcGx_ShowPlanes(0, 0x15);
    WfcUtil_SetScene((void *)WfcTransferConfirm_OpenDialog);
}

void WfcTransferConfirm_OpenDialog() {
    if (WfcFade_IsBusy(0)) return;
    WfcDialog_Open(0x5f, 4, 0, -1, 0);
    WfcUtil_SetScene((void *)WfcTransferConfirm_WaitDialogOpen);
}

void WfcTransferConfirm_WaitDialogOpen() {
    if (WfcDialog_GetResult() == -2) return;
    WfcUtil_SetScene((void *)WfcTransferConfirm_HandleResult);
}

void WfcTransferConfirm_HandleResult() {
    WfcTransferConfirm_Nop1();
    WfcTransferConfirm_Nop2();
    switch (WfcDialog_GetResult()) {
    case 0:
        sWfcTransferConfirmAccepted = 0;
        WfcSound_Play(7);
        break;
    case 1:
        sWfcTransferConfirmAccepted = 1;
        WfcSound_Play(0xe);
        break;
    default:
        return;
    }
    WfcTransfer_SetCallback(0);
    WfcDialog_Close();
    WfcUtil_SetScene((void *)WfcTransferConfirm_WaitDialogClosed);
}

void WfcTransferConfirm_Nop1() {
}

void WfcTransferConfirm_Nop2() {
}

void WfcTransferConfirm_WaitDialogClosed() {
    if (WfcDialog_IsOpen()) return;
    if (sWfcTransferConfirmAccepted == 0) {
        WfcFade_Start(3, 1, 1, 8);
    }
    WfcFade_Start(3, 0, 0x15, 8);
    WfcUtil_SetScene((void *)WfcTransferConfirm_StartSendOrEnd);
}

void WfcTransferConfirm_StartSendOrEnd() {
    if (WfcFade_IsBusy(1)) return;
    if (WfcFade_IsBusy(0)) return;
    if (sWfcTransferConfirmError == 0 && sWfcTransferConfirmAccepted == 1) {
        WfcTransfer_StartSend();
    } else {
        WfcTransfer_RequestEnd();
    }
    WfcUtil_SetScene((void *)WfcTransferConfirm_Exit);
}

void WfcTransferConfirm_Exit() {
    if (sWfcTransferConfirmError != 0 || sWfcTransferConfirmAccepted == 0) {
        if (WfcTransfer_IsFinished() == 0) return;
    }
    WfcText_DestroyBgCanvas(0);
    WfcGx_HidePlanes(0, 0x15);
    if (sWfcTransferConfirmAccepted == 0) {
        WfcUtil_HideTopMessage();
        WfcGx_HidePlanes(1, 1);
    }
    WfcUtil_SetScreenFlags(0, 1);
    if (sWfcTransferConfirmError != 0) {
        WfcUtil_SetScene((void *)WfcTransferFailed_Enter);
    } else if (sWfcTransferConfirmAccepted == 0) {
        WfcGx_HidePlanes(1, 1);
        WfcUtil_SetScene((void *)WfcOptions_Enter);
    } else {
        WfcUtil_SetScene((void *)WfcTransferSend_Enter);
    }
}

void WfcTransferConfirm_OnTransferError() {
    sWfcTransferConfirmError = 1;
}
}
