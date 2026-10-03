// mwcc-flags: -O4,p
#include "types.h"

#pragma thumb off

extern "C" {
s32 GX_LoadBG2Scr();
s32 WfcHighlight_SetConnection();
s32 WfcUtil_ShowBottomMessage(s32);
s32 WfcUtil_SetScene(void *);
s32 WfcUtil_SetScreenFlags(s32, s32);
s32 WfcUtil_SetEditParams(s32, s32);
s32 WfcSound_Play(s32);
s32 WfcFade_IsBusy(s32);
s32 WfcText_DestroyBgCanvas(s32);
s32 WfcUtil_HideTopMessage();
s32 WfcGx_HidePlanes(s32, s32);
s32 WfcGx_ShowPlanes(s32, s32);
s32 WfcFade_Start(s32, s32, s32, s32);
s32 WfcUtil_LoadFileTo(void *, void *);
s32 WfcTestConfirm_Enter();
void WfcSimpleStartDone_FadeOut();
void WfcSimpleStartDone_Exit();
void WfcSimpleStartDone_Update();
void WfcSimpleStartDone_Idle();
void WfcSimpleStartDone_CountDown();
void WfcSimpleStartDone_WaitFadeIn();
void WfcSimpleStartDone_FadeIn();
void WfcSimpleStartDone_LoadBg();
void WfcSimpleStartDone_Enter();
}

extern "C" u8 sWfcSimpleStartDoneTimer = 0;

extern "C" void WfcSimpleStartDone_Enter() {
    sWfcSimpleStartDoneTimer = 0;
    WfcSimpleStartDone_LoadBg();
    WfcHighlight_SetConnection();
    WfcUtil_ShowBottomMessage(0x6b);
    WfcSound_Play(0x10);
    WfcUtil_SetScene((void *)WfcSimpleStartDone_FadeIn);
}

extern "C" void WfcSimpleStartDone_LoadBg() {
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

extern "C" void WfcSimpleStartDone_FadeIn() {
    WfcFade_Start(2, 0, 0x15, 8);
    WfcGx_ShowPlanes(0, 0x15);
    WfcUtil_SetScene((void *)WfcSimpleStartDone_WaitFadeIn);
}

extern "C" void WfcSimpleStartDone_WaitFadeIn() {
    if (WfcFade_IsBusy(0) != 0) return;
    WfcUtil_SetScene((void *)WfcSimpleStartDone_Update);
}

extern "C" void WfcSimpleStartDone_Update() {
    WfcSimpleStartDone_CountDown();
    WfcSimpleStartDone_Idle();
}

extern "C" void WfcSimpleStartDone_Idle() {
}

extern "C" void WfcSimpleStartDone_FadeOut() {
    WfcFade_Start(3, 1, 1, 8);
    WfcFade_Start(3, 0, 0x15, 8);
    WfcUtil_SetScene((void *)WfcSimpleStartDone_Exit);
}

extern "C" void WfcSimpleStartDone_Exit() {
    if (WfcFade_IsBusy(1) != 0) return;
    if (WfcFade_IsBusy(0) != 0) return;
    WfcText_DestroyBgCanvas(0);
    WfcUtil_HideTopMessage();
    WfcGx_HidePlanes(1, 1);
    WfcGx_HidePlanes(0, 0x15);
    WfcUtil_SetScreenFlags(0, 0);
    WfcUtil_SetEditParams(0, 1);
    WfcUtil_SetScene((void *)WfcTestConfirm_Enter);
}

extern "C" void WfcSimpleStartDone_CountDown() {
    sWfcSimpleStartDoneTimer++;
    if (sWfcSimpleStartDoneTimer < 0x78) return;
    WfcUtil_SetScene((void *)WfcSimpleStartDone_FadeOut);
}

