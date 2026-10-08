// mwcc-flags: -O4,p
#include "types.h"
#define PROTO_LOCAL_WfcTransferDone_Enter  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_WfcTransferDone_FadeIn  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_WfcTransferDone_StartExit  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_WfcTransferSend_Enter  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_WfcTransferSend_FadeIn  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_WfcTransferSend_FadeOut  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_WfcTransferSend_OnResult  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_WfcUtil_SetScene  // declared below: the shared prototype conflicts with the calls here
#include "proto/ov001/unk_ov001_02207904.h"
#include "proto/ov001/unk_ov001_02207b3c.h"
#include "proto/ov001/unk_ov001_02208244.h"
#include "proto/ov001/unk_ov001_02208388.h"
#include "proto/ov001/unk_ov001_02208a24.h"
#include "proto/ov001/unk_ov001_0220c594.h"
#include "proto/ov001/unk_ov001_0220cd24.h"
#include "proto/ov001/unk_ov001_0220eb90.h"
#include "proto/ov001/unk_ov001_0220f3fc.h"
#include "proto/ov001/unk_ov001_0220f9e4.h"
#include "proto/ov001/unk_ov001_02210110.h"
#include "proto/ov001/unk_ov001_02210390.h"
#include "proto/ov001/unk_ov001_02210cc0.h"
#include "proto/ov001/unk_ov001_0221e930.h"
#include "proto/ov001/unk_ov001_02224ca0.h"
#include "proto/ov001/unk_ov001_0222516c.h"

extern "C" {
extern u8 GX_LoadBG2Scr[];
s32 OS_SpinWait(u32 a);
s32 PM_ForceToPowerOff();
void WfcUtil_LoadFileTo(void *a, void *b);
s32 WfcUtil_SetScene(void *p);
s32 WfcTransferSend_OnResult(s32 a);
s32 WfcTransferSend_FadeOut();
s32 WfcTransferSend_FadeIn();
s32 WfcTransferSend_Enter();
s32 WfcTransferDone_StartExit();
s32 WfcTransferDone_FadeIn();
s32 WfcTransferDone_Enter();
s32 WfcConfig_EraseAll();
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
    return C668(WfcTransferDone_FadeIn);
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
    return C668(WfcTransferDone_WaitFadeIn);
}

void WfcTransferDone_WaitFadeIn() {
    if (WfcFade_IsBusy(0) != 0) return;
    WfcUtil_OpenButtonBar(5);
    C668(WfcTransferDone_WaitButtonBar);
}

void WfcTransferDone_WaitButtonBar() {
    if (WfcButtonBar_GetResult() == -2) return;
    WfcButtonBar_EnableInput();
    C668(WfcTransferDone_Update);
}

void WfcTransferDone_Update() {
    WfcTransferDone_HandleInput();
    WfcTransferDone_Idle();
    WfcTransferDone_HandleResult();
}

void WfcTransferDone_HandleInput() {
    if (WfcInput_IsKeyPressed(1) == 0) return;
    WfcButtonBar_SetResult(0);
}

void WfcTransferDone_Idle() {}

void WfcTransferDone_HandleResult() {
    if (WfcButtonBar_GetResult() != 0) return;
    WfcSound_Play(6);
    C668(WfcTransferDone_StartExit);
}

s32 WfcTransferDone_StartExit() {
    WfcButtonBar_DisableInput();
    WfcFade_StartWait(8);
    return C668(WfcTransferDone_FadeOut);
}

void WfcTransferDone_FadeOut() {
    if (WfcFade_IsBusy(1) != 0) return;
    WfcFade_Start(3, 1, 0x3f, 0x40);
    WfcFade_Start(3, 0, 0x3f, 0x40);
    C668(WfcTransferDone_PowerOff);
}

void WfcTransferDone_PowerOff() {
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
    return C668(WfcTransferSend_FadeIn);
}

void WfcTransferSend_LoadBg() {
    WfcUtil_LoadFileTo((void *)"char/yb5Multi.nsc.l", GX_LoadBG2Scr);
    Unk_ov001_0220f62c_Bg();
}

s32 WfcTransferSend_FadeIn() {
    WfcFade_Start(2, 0, 0x15, 8);
    WfcGx_ShowPlanes(0, 0x15);
    return C668(WfcTransferSend_WaitFadeIn);
}

void WfcTransferSend_WaitFadeIn() {
    if (WfcFade_IsBusy(0) != 0) return;
    WfcTransfer_SetCallback((WfcTransferCallback)WfcTransferSend_OnResult);
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
    return C668(WfcTransferSend_Exit);
}

void WfcTransferSend_Exit() {
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
    return C668(WfcTransferSend_FadeOut);
}
}
