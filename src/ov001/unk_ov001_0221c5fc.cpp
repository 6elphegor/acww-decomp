// mwcc-flags: -O4,p
#include "types.h"

#pragma thumb off

struct Unk_ov001_0221ccb4_S { u8 pad_00[4]; u8 nickName[0x14]; u16 nickNameLength; u8 pad_1a[0x3a]; };

extern "C" {
s32 GX_LoadBG2Scr();
s32 GX_LoadBG2Char();
s32 GX_LoadBGPltt();
s32 OS_GetOwnerInfo(void *);
void MIi_CpuClear16(u16, void *, u32);
void MIi_CpuCopy16(void *, void *, u32);
s32 WfcUtil_LoadFileTo(void *, void *);
s32 WfcHighlight_Set(s32);
s32 WfcUtil_ShowBottomMessage(s32);
s32 WfcUtil_ShowTopMessage(s32, s32, s32);
s32 WfcUtil_ShowStepIndicator(s32);
s32 WfcSound_Play(s32);
s32 WfcSound_Stop();
s32 WfcUtil_SetScene(void *);
s32 WfcUtil_SetScreenFlags(s32, s32);
s32 WfcFade_IsBusy(s32);
s32 WfcButtonBar_IsClosed();
s32 WfcText_DestroyBgCanvas(s32);
s32 WfcUtil_HideTopMessage();
s32 WfcGx_HidePlanes(s32, s32);
s32 WfcGx_ShowPlanes(s32, s32);
s32 WfcFade_Start(s32, s32, s32, s32);
s32 WfcFade_StartWait(s32);
s32 WfcButtonBar_Close();
s32 WfcButtonBar_DisableInput();
s32 WfcButtonBar_GetResult();
s32 WfcButtonBar_EnableInput();
s32 WfcInput_IsKeyPressed(s32);
s32 WfcButtonBar_SetResult(s32);
s32 WfcUtil_OpenButtonBar(s32);
s32 WfcDialog_IsOpen();
s32 WfcDialog_GetResult();
s32 WfcDialog_Close();
s32 WfcUsbScan_SetCallback(s32);
s32 WfcUsbScan_Stop();
s32 WfcBusyIcon_Delete();
s32 WfcDialog_Open(s32, s32, s32, s32, s32);
s32 WfcUtil_ShowBottomMessageNum(void *, s32);
s32 WfcBusyIcon_Create(s32);
s32 WfcUsbScan_Start(void *);
s32 WfcConnSelect_Enter();

void WfcUsbWait_WaitGrantedClosed();
void WfcUsbWait_GrantedDialog();
void WfcUsbWait_WaitNotFoundClosed();
void WfcUsbWait_NotFoundDialog();
void WfcUsbWait_OnScanResult(u32);
void WfcUsbWait_Exit();
void WfcUsbWait_FadeOut();
void WfcUsbWait_StartExit();
void WfcUsbWait_HandleResult();
void WfcUsbWait_Idle();
s32 WfcUsbWait_HandleInput();
void WfcUsbWait_Update();
void WfcUsbWait_WaitButtonBar();
void WfcUsbWait_WaitFadeIn();
void WfcUsbWait_FadeIn();
void WfcUsbWait_LoadBg();
void WfcUsbWait_Enter();
s32 WfcUsbWait_IsLidClosed();
void WfcUsbDone_Enter();
void WfcUsbIntro_Enter();
}

extern "C" u8 sWfcUsbWaitResult = 0;

extern "C" s32 WfcUsbWait_IsLidClosed() {
    s32 t = *(u16 *)0x27fffa8 & 0x8000;
    return (t >> 15) ? TRUE : FALSE;
}

extern "C" void WfcUsbWait_Enter() {
    volatile u16 z;
    u8 b[0x16];
    Unk_ov001_0221ccb4_S s;
    sWfcUsbWaitResult = 0;
    WfcUsbWait_LoadBg();
    WfcHighlight_Set(8);
    WfcUtil_ShowStepIndicator(2);
    OS_GetOwnerInfo(&s);
    z = 0;
    MIi_CpuClear16(z, b, 0x16);
    MIi_CpuCopy16(s.nickName, b, s.nickNameLength << 1);
    WfcUtil_ShowBottomMessageNum(b, 0x6d);
    WfcBusyIcon_Create(0);
    WfcUsbScan_Start((void *)WfcUsbWait_OnScanResult);
    WfcSound_Play(0xb);
    WfcUtil_SetScene((void *)WfcUsbWait_FadeIn);
}

extern "C" void WfcUsbWait_LoadBg() {
    WfcUtil_LoadFileTo((void *)"char/jbBgStep3.ncg.l", (void *)GX_LoadBG2Char);
    WfcUtil_LoadFileTo((void *)"char/ybBgStep3.ncl.l", (void *)GX_LoadBGPltt);
    WfcUtil_LoadFileTo((void *)"char/jb4Usb.nsc.l", (void *)GX_LoadBG2Scr);
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

extern "C" void WfcUsbWait_FadeIn() {
    WfcFade_Start(2, 0, 0x15, 8);
    WfcGx_ShowPlanes(0, 0x15);
    WfcUtil_SetScene((void *)WfcUsbWait_WaitFadeIn);
}

extern "C" void WfcUsbWait_WaitFadeIn() {
    if (WfcFade_IsBusy(0) != 0) return;
    WfcUtil_OpenButtonBar(2);
    WfcUtil_SetScene((void *)WfcUsbWait_WaitButtonBar);
}

extern "C" void WfcUsbWait_WaitButtonBar() {
    if (WfcButtonBar_GetResult() == -2) return;
    WfcButtonBar_EnableInput();
    WfcUtil_SetScene((void *)WfcUsbWait_Update);
}

extern "C" void WfcUsbWait_Update() {
    WfcUsbWait_HandleInput();
    WfcUsbWait_Idle();
    WfcUsbWait_HandleResult();
}

extern "C" s32 WfcUsbWait_HandleInput() {
    if (WfcInput_IsKeyPressed(2) != 0) {
        WfcButtonBar_SetResult(0);
        return;
    }
    if (WfcUsbWait_IsLidClosed() == 0) return;
    WfcButtonBar_SetResult(0);
}

extern "C" void WfcUsbWait_Idle() {}

extern "C" void WfcUsbWait_HandleResult() {
    if (sWfcUsbWaitResult != 0) return;
    if (WfcButtonBar_GetResult() != 0) return;
    sWfcUsbWaitResult = 2;
    WfcSound_Stop();
    WfcSound_Play(7);
    WfcUtil_SetScene((void *)WfcUsbWait_StartExit);
}

extern "C" void WfcUsbWait_StartExit() {
    WfcButtonBar_DisableInput();
    WfcFade_StartWait(8);
    WfcUtil_SetScene((void *)WfcUsbWait_FadeOut);
}

extern "C" void WfcUsbWait_FadeOut() {
    if (WfcFade_IsBusy(1) != 0) return;
    WfcButtonBar_Close();
    if ((u8)(sWfcUsbWaitResult + 0xfe) <= 1) WfcFade_Start(3, 1, 1, 8);
    WfcFade_Start(3, 0, 0x15, 8);
    WfcUtil_SetScene((void *)WfcUsbWait_Exit);
}

extern "C" void WfcUsbWait_Exit() {
    if (WfcFade_IsBusy(0) != 0) return;
    if (sWfcUsbWaitResult == 2) {
        if (WfcFade_IsBusy(1) != 0) return;
    }
    if (WfcButtonBar_IsClosed() == 0) return;
    WfcUsbScan_Stop();
    WfcBusyIcon_Delete();
    WfcText_DestroyBgCanvas(0);
    if ((u8)(sWfcUsbWaitResult + 0xfe) <= 1) {
        WfcUtil_HideTopMessage();
        WfcGx_HidePlanes(1, 1);
    }
    WfcGx_HidePlanes(0, 0x15);
    if (sWfcUsbWaitResult == 2) {
        WfcUtil_SetScreenFlags(2, 1);
        WfcUtil_SetScene((void *)WfcConnSelect_Enter);
    } else if (sWfcUsbWaitResult == 3) {
        WfcUtil_SetScreenFlags(2, 1);
        WfcUtil_SetScene((void *)WfcUsbIntro_Enter);
    } else {
        WfcUtil_SetScreenFlags(0, 0);
        WfcUtil_SetScene((void *)WfcUsbDone_Enter);
    }
}

extern "C" void WfcUsbWait_OnScanResult(u32 a) {
    if (sWfcUsbWaitResult != 0) return;
    switch (a) {
    case 0:
        sWfcUsbWaitResult = 3;
        WfcSound_Stop();
        WfcSound_Play(0x12);
        WfcDialog_Open(0x45, 1, 1, -1, 0);
        WfcButtonBar_DisableInput();
        WfcUtil_SetScene((void *)WfcUsbWait_NotFoundDialog);
        break;
    case 1:
        sWfcUsbWaitResult = 1;
        WfcSound_Stop();
        WfcUtil_SetScene((void *)WfcUsbWait_StartExit);
        break;
    case 2:
        WfcSound_Stop();
        WfcUsbScan_SetCallback(0);
        WfcDialog_Open(0x47, 0, 1, -1, 0);
        WfcButtonBar_DisableInput();
        WfcUtil_SetScene((void *)WfcUsbWait_GrantedDialog);
        break;
    case 3:
        sWfcUsbWaitResult = 2;
        WfcSound_Stop();
        WfcSound_Play(9);
        WfcUtil_SetScene((void *)WfcUsbWait_StartExit);
        break;
    }
}

extern "C" void WfcUsbWait_NotFoundDialog() {
    if (WfcDialog_GetResult() != 0) return;
    WfcSound_Play(6);
    WfcDialog_Close();
    WfcUtil_SetScene((void *)WfcUsbWait_WaitNotFoundClosed);
}

extern "C" void WfcUsbWait_WaitNotFoundClosed() {
    if (WfcDialog_IsOpen() != 0) return;
    WfcUtil_SetScene((void *)WfcUsbWait_StartExit);
}

extern "C" void WfcUsbWait_GrantedDialog() {
    s32 r = WfcDialog_GetResult();
    if (r != 0) {
        if (r != 1) return;
        sWfcUsbWaitResult = 3;
        WfcSound_Play(6);
    } else {
        sWfcUsbWaitResult = 1;
        WfcSound_Play(7);
    }
    WfcDialog_Close();
    WfcUtil_SetScene((void *)WfcUsbWait_WaitGrantedClosed);
}

extern "C" void WfcUsbWait_WaitGrantedClosed() {
    if (WfcDialog_IsOpen() != 0) return;
    if (sWfcUsbWaitResult == 1) {
        WfcUtil_SetScene((void *)WfcUsbWait_StartExit);
        return;
    }
    WfcSound_Play(0xb);
    WfcButtonBar_EnableInput();
    sWfcUsbWaitResult = 0;
    WfcUsbScan_SetCallback((s32)WfcUsbWait_OnScanResult);
    WfcUtil_SetScene((void *)WfcUsbWait_Update);
}
