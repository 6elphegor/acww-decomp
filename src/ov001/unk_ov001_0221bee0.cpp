// mwcc-flags: -O4,p
#include "types.h"

#pragma thumb off

extern "C" {
s32 GX_LoadBG2Scr();
s32 GX_LoadBG2Char();
s32 GX_LoadBGPltt();
s32 WfcUtil_LoadFileTo(void *, void *);
s32 WfcHighlight_Set(s32);
s32 WfcUtil_ShowBottomMessage(s32);
s32 WfcSound_Play(s32);
s32 WfcUtil_SetScene(void *);
s32 WfcUtil_SetScreenFlags(s32, s32);
s32 WfcUtil_SetEditParams(s32, s32);
s32 WfcFade_IsBusy(s32);
s32 WfcText_DestroyBgCanvas(s32);
s32 WfcUtil_HideTopMessage();
s32 WfcGx_HidePlanes(s32, s32);
s32 WfcGx_ShowPlanes(s32, s32);
s32 WfcFade_Start(s32, s32, s32, s32);

void WfcUsbDone_CountDown();
void WfcUsbDone_Exit();
void WfcUsbDone_FadeOut();
s32 WfcUsbDone_Idle();
void WfcUsbDone_Update();
void WfcUsbDone_WaitFadeIn();
void WfcUsbDone_FadeIn();
void WfcUsbDone_LoadBg();
void WfcUsbDone_Enter();
void WfcTestConfirm_Enter();
}

extern "C" u8 sWfcUsbDoneTimer = 0;

extern "C" void WfcUsbDone_Enter() {
    sWfcUsbDoneTimer = 0;
    WfcUsbDone_LoadBg();
    WfcHighlight_Set(8);
    WfcUtil_ShowBottomMessage(0x6f);
    WfcSound_Play(0x10);
    WfcUtil_SetScene((void *)WfcUsbDone_FadeIn);
}

extern "C" void WfcUsbDone_LoadBg() {
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

extern "C" void WfcUsbDone_FadeIn() {
    WfcFade_Start(2, 0, 0x15, 8);
    WfcGx_ShowPlanes(0, 0x15);
    WfcUtil_SetScene((void *)WfcUsbDone_WaitFadeIn);
}

extern "C" void WfcUsbDone_WaitFadeIn() {
    if (WfcFade_IsBusy(0) != 0) return;
    WfcUtil_SetScene((void *)WfcUsbDone_Update);
}

extern "C" void WfcUsbDone_Update() {
    WfcUsbDone_CountDown();
    WfcUsbDone_Idle();
}

extern "C" s32 WfcUsbDone_Idle() {
}

extern "C" void WfcUsbDone_FadeOut() {
    WfcFade_Start(3, 1, 1, 8);
    WfcFade_Start(3, 0, 0x15, 8);
    WfcUtil_SetScene((void *)WfcUsbDone_Exit);
}

extern "C" void WfcUsbDone_Exit() {
    if (WfcFade_IsBusy(1) != 0) return;
    if (WfcFade_IsBusy(0) != 0) return;
    WfcText_DestroyBgCanvas(0);
    WfcUtil_HideTopMessage();
    WfcGx_HidePlanes(1, 1);
    WfcGx_HidePlanes(0, 0x15);
    WfcUtil_SetScreenFlags(0, 0);
    WfcUtil_SetEditParams(0, 2);
    WfcUtil_SetScene((void *)WfcTestConfirm_Enter);
}

extern "C" void WfcUsbDone_CountDown() {
    sWfcUsbDoneTimer++;
    if (sWfcUsbDoneTimer < 0x78) return;
    WfcUtil_SetScene((void *)WfcUsbDone_FadeOut);
}
