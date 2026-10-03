// mwcc-flags: -O4,p
#include "types.h"

extern "C" {
extern u8 GX_LoadBG2Scr[];
s32 WfcButtonBar_DisableInput();
s32 WfcButtonBar_EnableInput();
s32 WfcButtonBar_IsClosed();
s32 WfcButtonBar_SetResult(u32 a);
s32 WfcButtonBar_GetResult();
s32 WfcButtonBar_Close();
s32 WfcUtil_HideTopMessage();
s32 WfcUtil_ShowTopMessage(u32 a, s32 b, u32 c);
s32 WfcUtil_ShowBottomMessage(u32 a);
s32 WfcUtil_OpenButtonBar(u32 a);
s32 WfcUtil_LoadFileTo(void *a, void *b);
s32 WfcHighlight_Set(u32 a);
s32 WfcUtil_SetScreenFlags(u32 a, u32 b);
s32 WfcUtil_SetScene(void *p);
s32 WfcTransfer_IsFinished();
s32 WfcOptions_Enter();
void WfcTransferIntro_Exit();
void WfcTransferIntro_FadeOut();
void WfcTransferIntro_StartExit();
void WfcTransferIntro_HandleResult();
void WfcTransferIntro_Idle();
void WfcTransferIntro_HandleInput();
void WfcTransferIntro_Update();
void WfcTransferIntro_WaitButtonBar();
void WfcTransferIntro_WaitFadeIn();
void WfcTransferIntro_FadeIn();
void WfcTransferIntro_LoadBg();
void WfcTransferIntro_Enter();
void WfcTransferCancelled_WaitTimer();
void WfcTransferCancelled_Exit();
void WfcTransferCancelled_FadeOut();
void WfcTransferCancelled_Idle();
void WfcTransferCancelled_Update();
void WfcTransferCancelled_WaitFadeIn();
void WfcTransferCancelled_FadeIn();
void WfcTransferCancelled_LoadBg();
void WfcTransferCancelled_Enter();
void WfcTransferFailed_Exit();
void WfcTransferFailed_FadeOut();
void WfcTransferFailed_StartExit();
void WfcTransferFailed_HandleResult();
void WfcTransferFailed_Idle();
void WfcTransferFailed_HandleInput();
void WfcTransferFailed_Update();
void WfcTransferFailed_WaitButtonBar();
void WfcTransferFailed_WaitFadeIn();
void WfcTransferFailed_FadeIn();
s32 WfcTransferWait_Enter();
s32 WfcSound_Play(u32 a);
s32 WfcFade_StartWait(u32 a);
s32 WfcFade_Start(u32 a, u32 b, u32 c, u32 d);
s32 WfcFade_IsBusy(u32 a);
s32 WfcText_DestroyBgCanvas(u32 a);
s32 WfcGx_HidePlanes(u32 a, u32 b);
s32 WfcGx_ShowPlanes(u32 a, u32 b);
s32 WfcInput_IsKeyPressed(u32 a);

u8 sWfcTransferCancelledTimer;

#pragma thumb off


void WfcTransferCancelled_Enter() {
    sWfcTransferCancelledTimer = 0;
    WfcTransferCancelled_LoadBg();
    WfcUtil_ShowBottomMessage(0x63);
    WfcUtil_SetScene((void *)WfcTransferCancelled_FadeIn);
}

void WfcTransferCancelled_LoadBg() {
    WfcUtil_LoadFileTo((void *)"char/yb5Multi.nsc.l", (void *)GX_LoadBG2Scr);
    volatile u16 *r1 = (volatile u16 *)0x4001008;
    volatile u16 *r2 = (volatile u16 *)0x400100a;
    volatile u16 *r3 = (volatile u16 *)0x400000a;
    volatile u16 *r4 = (volatile u16 *)0x400000c;
    *r1 = (*r1 & ~3) | 3;
    *r2 = (*r2 & ~3) | 3;
    *r3 = (*r3 & ~3) | 3;
    *r4 = (*r4 & ~3) | 3;
}

void WfcTransferCancelled_FadeIn() {
    WfcFade_Start(2, 0, 0x15, 8);
    WfcGx_ShowPlanes(0, 0x15);
    WfcUtil_SetScene((void *)WfcTransferCancelled_WaitFadeIn);
}

void WfcTransferCancelled_WaitFadeIn() {
    if (WfcFade_IsBusy(0) != 0) return;
    if (WfcTransfer_IsFinished() == 0) return;
    WfcUtil_SetScene((void *)WfcTransferCancelled_Update);
}

void WfcTransferCancelled_Update() {
    WfcTransferCancelled_WaitTimer();
    WfcTransferCancelled_Idle();
}

void WfcTransferCancelled_Idle() {
}

void WfcTransferCancelled_FadeOut() {
    WfcFade_Start(3, 1, 1, 8);
    WfcFade_Start(3, 0, 0x15, 8);
    WfcUtil_SetScene((void *)WfcTransferCancelled_Exit);
}

void WfcTransferCancelled_Exit() {
    if (WfcFade_IsBusy(1) != 0) return;
    if (WfcFade_IsBusy(0) != 0) return;
    WfcText_DestroyBgCanvas(0);
    WfcUtil_HideTopMessage();
    WfcGx_HidePlanes(1, 1);
    WfcGx_HidePlanes(0, 0x15);
    WfcUtil_SetScreenFlags(0, 1);
    WfcUtil_SetScene((void *)WfcOptions_Enter);
}

void WfcTransferCancelled_WaitTimer() {
    sWfcTransferCancelledTimer = sWfcTransferCancelledTimer + 1;
    if (sWfcTransferCancelledTimer < 0x78) return;
    WfcUtil_SetScene((void *)WfcTransferCancelled_FadeOut);
}
}
