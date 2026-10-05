// mwcc-flags: -O4,p
#include "types.h"

#pragma thumb off

extern "C" {

s32 OS_Sleep(s32);
s32 GX_LoadBG2Scr();
s32 WfcSimpleStartWait_LoadBg();
s32 WfcHighlight_SetConnection();
s32 WfcUtil_ShowBottomMessage(s32);
s32 WfcBusyIcon_Create(s32);
s32 WfcUtil_SetScene(void *);
s32 WfcUtil_SetScreenFlags(s32, s32);
s32 WfcUtil_SetEditParams(s32, s32);
s32 WfcDialog_IsOpen();
s32 WfcDialog_GetResult();
s32 WfcDialog_Close();
s32 WfcSound_Play(s32);
s32 WfcSound_Stop();
s32 WfcSimpleStart_GetState();
s32 WfcSimpleStart_ApplyResult();
s32 WfcSimpleStart_End();
s32 WfcDialog_Open(s32, s32, s32, s32, s32);
s32 WfcButtonBar_DisableInput();
s32 WfcFade_IsBusy(s32);
s32 WfcButtonBar_IsClosed();
s32 WfcBusyIcon_Delete();
s32 WfcText_DestroyBgCanvas(s32);
s32 WfcUtil_HideTopMessage();
s32 WfcGx_HidePlanes(s32, s32);
s32 WfcGx_ShowPlanes(s32, s32);
s32 WfcFade_Start(s32, s32, s32, s32);
s32 WfcFade_StartWait(s32);
s32 WfcButtonBar_Close();
s32 WfcButtonBar_GetResult();
s32 WfcInput_IsKeyPressed(s32);
s32 WfcButtonBar_SetResult(s32);
s32 WfcButtonBar_EnableInput();
s32 WfcUtil_OpenButtonBar(s32);
s32 WfcUtil_LoadFileTo(void *, void *);
s32 WfcSetupMethod_Enter();
s32 WfcSimpleStartDone_Enter();
void WfcSimpleStartRecv_StartExit();
void WfcSimpleStartRecv_WaitDialogClosed();
void WfcSimpleStartRecv_FailDialog();
void WfcSimpleStartRecv_FadeOut();
void WfcSimpleStartRecv_Exit();
void WfcSimpleStartRecv_Update();
void WfcSimpleStartRecv_WaitFadeIn();
void WfcSimpleStartRecv_WaitButtonBar();
void WfcSimpleStartRecv_FadeIn();
void WfcSimpleStartRecv_CheckStatus();
void WfcSimpleStartRecv_HandleInput();
void WfcSimpleStartRecv_Idle();
void WfcSimpleStartRecv_HandleResult();
BOOL WfcSimpleStartRecv_IsLidClosed();
void WfcSimpleStartRecv_LoadBg();

}

extern "C" u8 sWfcSimpleStartRecvDone = 0;

extern "C" BOOL WfcSimpleStartRecv_IsLidClosed() {
    s32 t = (s32)(*(volatile u16 *)0x27fffa8 & 0x8000) >> 15;
    if (t != 0) return TRUE;
    return FALSE;
}

extern "C" void WfcSimpleStartRecv_Enter() {
    sWfcSimpleStartRecvDone = 0;
    WfcSimpleStartRecv_LoadBg();
    WfcHighlight_SetConnection();
    WfcUtil_ShowBottomMessage(0x71);
    WfcBusyIcon_Create(2);
    WfcUtil_SetScene((void *)WfcSimpleStartRecv_FadeIn);
}

extern "C" void WfcSimpleStartRecv_LoadBg() {
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

extern "C" void WfcSimpleStartRecv_FadeIn() {
    WfcFade_Start(2, 0, 0x15, 8);
    WfcGx_ShowPlanes(0, 0x15);
    WfcUtil_SetScene((void *)WfcSimpleStartRecv_WaitFadeIn);
}

extern "C" void WfcSimpleStartRecv_WaitFadeIn() {
    if (WfcFade_IsBusy(0) != 0) return;
    WfcUtil_OpenButtonBar(1);
    WfcUtil_SetScene((void *)WfcSimpleStartRecv_WaitButtonBar);
}

extern "C" void WfcSimpleStartRecv_WaitButtonBar() {
    if (WfcButtonBar_GetResult() == -2) return;
    WfcButtonBar_EnableInput();
    WfcUtil_SetScene((void *)WfcSimpleStartRecv_Update);
}

extern "C" void WfcSimpleStartRecv_Update() {
    OS_Sleep(10);
    WfcSimpleStartRecv_CheckStatus();
    WfcSimpleStartRecv_HandleInput();
    WfcSimpleStartRecv_Idle();
    WfcSimpleStartRecv_HandleResult();
}

extern "C" void WfcSimpleStartRecv_HandleInput() {
    if (WfcInput_IsKeyPressed(2) != 0) {
        WfcButtonBar_SetResult(0);
        return;
    }
    if (WfcSimpleStartRecv_IsLidClosed() == 0) return;
    WfcButtonBar_SetResult(0);
}

extern "C" void WfcSimpleStartRecv_Idle() {
}

extern "C" void WfcSimpleStartRecv_HandleResult() {
    if (WfcButtonBar_GetResult() != 0) return;
    WfcSound_Stop();
    WfcSound_Play(7);
    WfcUtil_SetScene((void *)WfcSimpleStartRecv_StartExit);
}

extern "C" void WfcSimpleStartRecv_StartExit() {
    WfcButtonBar_DisableInput();
    WfcFade_StartWait(8);
    WfcUtil_SetScene((void *)WfcSimpleStartRecv_FadeOut);
}

extern "C" void WfcSimpleStartRecv_FadeOut() {
    if (WfcFade_IsBusy(1) != 0) return;
    WfcButtonBar_Close();
    if (sWfcSimpleStartRecvDone == 0) {
        WfcFade_Start(3, 1, 1, 8);
    }
    WfcFade_Start(3, 0, 0x15, 8);
    WfcUtil_SetScene((void *)WfcSimpleStartRecv_Exit);
}

extern "C" void WfcSimpleStartRecv_Exit() {
    if (WfcFade_IsBusy(0) != 0) return;
    if (sWfcSimpleStartRecvDone == 0) {
        if (WfcFade_IsBusy(1) != 0) return;
    }
    if (WfcButtonBar_IsClosed() == 0) return;
    WfcBusyIcon_Delete();
    WfcText_DestroyBgCanvas(0);
    if (sWfcSimpleStartRecvDone == 0) {
        WfcUtil_HideTopMessage();
        WfcGx_HidePlanes(1, 1);
    }
    WfcSimpleStart_End();
    if (sWfcSimpleStartRecvDone == 0) {
        WfcUtil_SetScreenFlags(2, 1);
        WfcUtil_SetScene((void *)WfcSetupMethod_Enter);
    } else {
        WfcUtil_SetScreenFlags(0, 0);
        WfcUtil_SetScene((void *)WfcSimpleStartDone_Enter);
    }
}

extern "C" void WfcSimpleStartRecv_CheckStatus() {
    switch (WfcSimpleStart_GetState()) {
    case 3:
        sWfcSimpleStartRecvDone = 1;
        WfcSound_Stop();
        WfcSimpleStart_ApplyResult();
        WfcUtil_SetScene((void *)WfcSimpleStartRecv_StartExit);
        break;
    case 4:
        sWfcSimpleStartRecvDone = 0;
        WfcSound_Stop();
        WfcSound_Play(9);
        WfcDialog_Open(0x41, 1, 1, -1, 0);
        WfcButtonBar_DisableInput();
        WfcUtil_SetScene((void *)WfcSimpleStartRecv_FailDialog);
        break;
    case 5:
        sWfcSimpleStartRecvDone = 0;
        WfcSound_Stop();
        WfcSound_Play(0x12);
        WfcDialog_Open(0x42, 1, 1, -1, 0);
        WfcButtonBar_DisableInput();
        WfcUtil_SetScene((void *)WfcSimpleStartRecv_FailDialog);
        break;
    }
}

extern "C" void WfcSimpleStartRecv_FailDialog() {
    if (WfcDialog_GetResult() != 0) return;
    WfcSound_Play(6);
    WfcDialog_Close();
    WfcUtil_SetScene((void *)WfcSimpleStartRecv_WaitDialogClosed);
}

extern "C" void WfcSimpleStartRecv_WaitDialogClosed() {
    if (WfcDialog_IsOpen() != 0) return;
    WfcUtil_SetScene((void *)WfcSimpleStartRecv_StartExit);
}

