// mwcc-flags: -O4,p
#include "types.h"
#include "proto/ov001/unk_ov001_02207904.h"
#include "proto/ov001/unk_ov001_02207b3c.h"
#include "proto/ov001/unk_ov001_02208244.h"
#include "proto/ov001/unk_ov001_02208388.h"
#include "proto/ov001/unk_ov001_02208890.h"
#include "proto/ov001/unk_ov001_0220c594.h"
#include "proto/ov001/unk_ov001_0220d1d8.h"
#include "proto/ov001/unk_ov001_02218300.h"
#include "proto/ov001/unk_ov001_02218844.h"
#include "proto/ov001/unk_ov001_0221ab50.h"
#include "proto/ov001/unk_ov001_0221e930.h"
#include "proto/ov001/unk_ov001_0221feac.h"
#include "proto/ov001/unk_ov001_02224ca0.h"
#include "proto/ov001/unk_ov001_0222516c.h"

#pragma thumb off

#define BGCNT(a, v) (*(volatile u16 *)(a) = (*(volatile u16 *)(a) & ~3) | (v))

extern "C" {
u8 sWfcSimpleStartWaitNext;
}

extern "C" {
s32 GX_LoadBG2Scr(void *, s32, u32);
s32 OS_Sleep(s32);
void WfcUtil_LoadFileTo(void *, void *);
s32 WfcGx_HidePlanes(s32, s32);
s32 WfcGx_ShowPlanes(s32, s32);
s32 WfcInput_IsKeyPressed(s32);
}

extern "C" BOOL WfcSimpleStartWait_IsLidClosed() {
    s32 t = (s32)(*(volatile u16 *)0x27fffa8 & 0x8000) >> 15;
    if (t != 0) return TRUE;
    return FALSE;
}

extern "C" void WfcSimpleStartWait_Enter() {
    sWfcSimpleStartWaitNext = 0;
    WfcSimpleStartWait_LoadBg();
    WfcHighlight_SetConnection();
    WfcUtil_ShowBottomMessage(0x6a);
    WfcBusyIcon_Create(1);
    WfcUtil_SetScene((void *)WfcSimpleStartWait_FadeIn);
}

extern "C" void WfcSimpleStartWait_LoadBg() {
    WfcUtil_LoadFileTo((void *)"char/xb4Multi.nsc.l", (void *)GX_LoadBG2Scr);
    BGCNT(0x4001008, 3);
    BGCNT(0x400100a, 3);
    BGCNT(0x4000008, 3);
    BGCNT(0x400000a, 3);
    BGCNT(0x400000c, 3);
}

extern "C" void WfcSimpleStartWait_FadeIn() {
    WfcFade_Start(2, 0, 0x15, 8);
    WfcGx_ShowPlanes(0, 0x15);
    WfcUtil_SetScene((void *)WfcSimpleStartWait_WaitFadeIn);
}

extern "C" void WfcSimpleStartWait_WaitFadeIn() {
    if (WfcFade_IsBusy(0)) return;
    WfcUtil_OpenButtonBar(1);
    WfcUtil_SetScene((void *)WfcSimpleStartWait_WaitButtonBar);
}

extern "C" void WfcSimpleStartWait_WaitButtonBar() {
    if (WfcButtonBar_GetResult() == -2) return;
    WfcButtonBar_EnableInput();
    WfcUtil_SetScene((void *)WfcSimpleStartWait_Update);
}

extern "C" void WfcSimpleStartWait_Update() {
    OS_Sleep(10);
    WfcSimpleStartWait_CheckStatus();
    WfcSimpleStartWait_HandleInput();
    WfcSimpleStartWait_Idle();
    WfcSimpleStartWait_HandleResult();
}

extern "C" void WfcSimpleStartWait_HandleInput() {
    if (WfcInput_IsKeyPressed(2)) {
        WfcButtonBar_SetResult(0);
        return;
    }
    if (WfcSimpleStartWait_IsLidClosed() == 0) return;
    WfcButtonBar_SetResult(0);
}

extern "C" void WfcSimpleStartWait_Idle() {}

extern "C" void WfcSimpleStartWait_HandleResult() {
    if (WfcButtonBar_GetResult()) return;
    WfcSound_Stop();
    WfcSound_Play(7);
    WfcUtil_SetScene((void *)WfcSimpleStartWait_StartExit);
}

extern "C" void WfcSimpleStartWait_StartExit() {
    WfcButtonBar_DisableInput();
    WfcFade_StartWait(8);
    WfcUtil_SetScene((void *)WfcSimpleStartWait_FadeOut);
}

extern "C" void WfcSimpleStartWait_FadeOut() {
    if (WfcFade_IsBusy(1)) return;
    if (sWfcSimpleStartWaitNext == 0) {
        WfcButtonBar_Close();
    }
    if (sWfcSimpleStartWaitNext == 0) {
        WfcFade_Start(3, 1, 1, 8);
    }
    WfcFade_Start(3, 0, 0x15, 8);
    WfcUtil_SetScene((void *)WfcSimpleStartWait_Exit);
}

extern "C" void WfcSimpleStartWait_Exit() {
    if (WfcFade_IsBusy(0)) return;
    if (sWfcSimpleStartWaitNext == 0) {
        if (WfcFade_IsBusy(1)) return;
    }
    if (WfcButtonBar_IsClosed() == 0) return;
    WfcBusyIcon_Delete();
    WfcText_DestroyBgCanvas(0);
    if (sWfcSimpleStartWaitNext == 0) {
        WfcUtil_HideTopMessage();
        WfcGx_HidePlanes(1, 1);
    }
    WfcGx_HidePlanes(0, 0x15);
    if (sWfcSimpleStartWaitNext == 0) {
        WfcSimpleStart_End();
        WfcUtil_SetScreenFlags(2, 1);
        WfcUtil_SetScene((void *)WfcSetupMethod_Enter);
        return;
    }
    WfcUtil_SetScreenFlags(0, 0);
    WfcUtil_SetScene((void *)WfcSimpleStartRecv_Enter);
}

extern "C" void WfcSimpleStartWait_CheckStatus() {
    switch (WfcSimpleStart_GetState()) {
    case 2:
        sWfcSimpleStartWaitNext = 1;
        WfcUtil_SetScene((void *)WfcSimpleStartWait_StartExit);
        break;
    case 4:
        sWfcSimpleStartWaitNext = 0;
        WfcSound_Stop();
        WfcSound_Play(9);
        WfcDialog_Open(0x41, 1, 1, -1, 0);
        WfcButtonBar_DisableInput();
        WfcUtil_SetScene((void *)WfcSimpleStartWait_FailDialog);
        break;
    }
}

extern "C" void WfcSimpleStartWait_FailDialog() {
    if (WfcDialog_GetResult()) return;
    WfcSound_Play(6);
    WfcDialog_Close();
    WfcUtil_SetScene((void *)WfcSimpleStartWait_WaitDialogClosed);
}

extern "C" void WfcSimpleStartWait_WaitDialogClosed() {
    if (WfcDialog_IsOpen()) return;
    WfcUtil_SetScene((void *)WfcSimpleStartWait_StartExit);
}
