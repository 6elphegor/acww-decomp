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
s32 WfcUtil_ShowBottomMessage(u32 a);
s32 WfcUtil_OpenButtonBar(u32 a);
void WfcUtil_LoadFileTo(void *a, void *b);
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
s32 WfcTransferCancelled_Enter();
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

u8 sWfcTransferSendResult;

#pragma thumb off

#define C668(f) WfcUtil_SetScene((void *)f)
#define BGCNT_SET(a) *(volatile u16 *)(a) = (*(volatile u16 *)(a) & ~3) | 3

static inline void Unk_ov001_0220f62c_Bg() {
    BGCNT_SET(0x4001008);
    BGCNT_SET(0x400100a);
    BGCNT_SET(0x4000008);
    BGCNT_SET(0x400000a);
    BGCNT_SET(0x400000c);
}

s32 WfcTransferDone_Enter() {
    WfcTransferDone_SetupBg();
    WfcUtil_ShowBottomMessage(0x61);
    C668(WfcTransferDone_FadeIn);
}

void WfcTransferDone_SetupBg() {
    BGCNT_SET(0x4001008);
    BGCNT_SET(0x400100a);
    BGCNT_SET(0x4000008);
    BGCNT_SET(0x400000a);
    BGCNT_SET(0x400000c);
}

s32 WfcTransferDone_FadeIn() {
    WfcFade_Start(2, 0, 0x15, 8);
    WfcGx_ShowPlanes(0, 0x15);
    C668(WfcTransferDone_WaitFadeIn);
}

s32 WfcTransferDone_WaitFadeIn() {
    if (WfcFade_IsBusy(0) != 0) return;
    WfcUtil_OpenButtonBar(5);
    C668(WfcTransferDone_WaitButtonBar);
}

s32 WfcTransferDone_WaitButtonBar() {
    if (WfcButtonBar_GetResult() == -2) return;
    WfcButtonBar_EnableInput();
    C668(WfcTransferDone_Update);
}

s32 WfcTransferDone_Update() {
    WfcTransferDone_HandleInput();
    WfcTransferDone_Idle();
    WfcTransferDone_HandleResult();
}

s32 WfcTransferDone_HandleInput() {
    if (WfcInput_IsKeyPressed(1) == 0) return;
    WfcButtonBar_SetResult(0);
}

void WfcTransferDone_Idle() {}

s32 WfcTransferDone_HandleResult() {
    if (WfcButtonBar_GetResult() != 0) return;
    WfcSound_Play(6);
    C668(WfcTransferDone_StartExit);
}

s32 WfcTransferDone_StartExit() {
    WfcButtonBar_DisableInput();
    WfcFade_StartWait(8);
    C668(WfcTransferDone_FadeOut);
}

s32 WfcTransferDone_FadeOut() {
    if (WfcFade_IsBusy(1) != 0) return;
    WfcFade_Start(3, 1, 0x3f, 0x40);
    WfcFade_Start(3, 0, 0x3f, 0x40);
    C668(WfcTransferDone_PowerOff);
}

s32 WfcTransferDone_PowerOff() {
    if (WfcFade_IsBusy(1) != 0) return;
    if (WfcFade_IsBusy(0) != 0) return;
    OS_SpinWait(0x1000000);
    PM_ForceToPowerOff();
}

s32 WfcTransferSend_Enter() {
    WfcTransferSend_LoadBg();
    WfcUtil_ShowBottomMessage(0x60);
    WfcBusyIcon_Create(0);
    WfcLinkIcon_Create(1);
    WfcSound_Play(0xb);
    C668(WfcTransferSend_FadeIn);
}

void WfcTransferSend_LoadBg() {
    WfcUtil_LoadFileTo((void *)"char/yb5Multi.nsc.l", GX_LoadBG2Scr);
    Unk_ov001_0220f62c_Bg();
}

s32 WfcTransferSend_FadeIn() {
    WfcFade_Start(2, 0, 0x15, 8);
    WfcGx_ShowPlanes(0, 0x15);
    C668(WfcTransferSend_WaitFadeIn);
}

s32 WfcTransferSend_WaitFadeIn() {
    if (WfcFade_IsBusy(0) != 0) return;
    WfcTransfer_SetCallback((void *)WfcTransferSend_OnResult);
    C668(WfcTransferSend_Update);
}

void WfcTransferSend_Update() {
    WfcTransferSend_Nop1();
    WfcTransferSend_Nop2();
}

void WfcTransferSend_Nop1() {}

void WfcTransferSend_Nop2() {}

s32 WfcTransferSend_FadeOut() {
    WfcFade_Start(3, 0, 0x15, 8);
    C668(WfcTransferSend_Exit);
}

s32 WfcTransferSend_Exit() {
    if (WfcFade_IsBusy(0) != 0) return;
    if (WfcTransfer_IsFinished() == 0) return;
    WfcLinkIcon_Delete();
    WfcBusyIcon_Delete();
    WfcText_DestroyBgCanvas(0);
    WfcGx_HidePlanes(0, 0x15);
    WfcUtil_SetScreenFlags(0, 1);
    if (sWfcTransferSendResult == 0) {
        C668(WfcTransferFailed_Enter);
    } else if (sWfcTransferSendResult == 2) {
        C668(WfcTransferCancelled_Enter);
    } else {
        C668(WfcTransferDone_Enter);
    }
}

s32 WfcTransferSend_OnResult(s32 a) {
    if (a == 2) {
        WfcConfig_EraseAll();
        sWfcTransferSendResult = 1;
        WfcSound_Stop();
        WfcSound_Play(0x10);
    } else if (a == 3) {
        sWfcTransferSendResult = 2;
        WfcSound_Stop();
        WfcSound_Play(0x12);
    } else {
        sWfcTransferSendResult = 0;
        WfcSound_Stop();
        WfcSound_Play(0x12);
    }
    WfcTransfer_SetCallback(0);
    WfcTransfer_RequestEnd();
    C668(WfcTransferSend_FadeOut);
}
}
