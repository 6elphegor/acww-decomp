// mwcc-flags: -O4,p
#include "types.h"

#pragma thumb off

extern "C" {
u8 sWfcTestSuccessTimer;
}



extern "C" {

s32 GX_LoadBG2Char();
s32 GX_LoadBGPltt();
s32 GX_LoadBG2Scr();
s32 WfcUtil_LoadFileTo(void *, void *);
s32 WfcUtil_GetEditParams(s32, s32 *);
s32 WfcUtil_GetStartMode();
s32 WfcUtil_ShowTopMessage(s32, s32, s32);
s32 WfcUtil_ShowStepIndicator(s32);
s32 WfcHighlight_SetConnection();
s32 WfcUtil_ShowBottomMessage(s32);
s32 WfcBusyIcon_Create(s32);
void WfcConnTest_Start();
s32 WfcLinkIcon_Create(s32);
s32 WfcSound_Play(s32);
s32 WfcUtil_SetScene(void *);
s32 WfcUtil_SetScreenFlags(s32, s32);
s32 WfcUtil_SetEditParams(s32, s32);
void WfcConnTest_FadeIn();
s32 WfcUtil_QuitFadeOut();
s32 WfcManualSetup_Enter();
s32 WfcTopMenu_Enter();
s32 WfcHeader_StartSlideOut();
s32 WfcFade_IsBusy(s32);
s32 WfcHeader_IsSlideOutDone();
s32 WfcText_DestroyBgCanvas(s32);
s32 WfcUtil_HideTopMessage();
s32 WfcGx_HidePlanes(s32, s32);
s32 WfcGx_ShowPlanes(s32, s32);
s32 WfcFade_Start(s32, s32, s32, s32);
s32 WfcDialog_IsOpen();
s32 WfcDialog_GetResult();
s32 WfcDialog_Close();
s32 WfcDialog_Open(s32, s32, s32, s32, s32);
s32 WfcApScan_Free();
s32 WfcConfig_CommitEdit();

void WfcConnTest_Enter();
void WfcTestSuccess_CountDown();
void WfcTestSuccess_Exit();
void WfcTestSuccess_FadeOut();
s32 WfcTestSuccess_Idle();
void WfcTestSuccess_Update();
void WfcTestSuccess_WaitFadeIn();
void WfcTestSuccess_FadeIn();
void WfcTestSuccess_LoadBg();
void WfcTestConfirm_Exit();
void WfcTestConfirm_FadeOut();
void func_ov001_0221bca8();
void func_ov001_0221bcac();
void WfcTestConfirm_WaitDialog();
void WfcTestConfirm_ShowDialog();
void WfcTestConfirm_FadeIn();
void WfcTestConfirm_LoadBg();
void WfcTestConfirm_Enter();
void WfcUsbDone_CountDown();
void WfcUsbDone_Exit();
void WfcUsbDone_FadeOut();
s32 WfcUsbDone_Idle();
void WfcUsbDone_Update();
void WfcUsbDone_WaitFadeIn();

void WfcTestSuccess_Enter();

void WfcTestSuccess_Enter() {
    sWfcTestSuccessTimer = 0;
    WfcTestSuccess_LoadBg();
    WfcUtil_ShowBottomMessage(0x77);
    WfcUtil_SetScene((void *)WfcTestSuccess_FadeIn);
}

void WfcTestSuccess_LoadBg() {
    WfcUtil_LoadFileTo((void *)"char/xb4Multi.nsc.l", (void *)GX_LoadBG2Scr);
    volatile u16 *r1 = (volatile u16 *)0x4001008;
    volatile u16 *r2 = (volatile u16 *)0x400100a;
    volatile u16 *r3 = (volatile u16 *)0x400000a;
    volatile u16 *r4 = (volatile u16 *)0x400000c;
    *r1 = (*r1 & ~3) | 3;
    *r2 = (*r2 & ~3) | 3;
    *r3 = (*r3 & ~3) | 3;
    *r4 = (*r4 & ~3) | 3;
}

void WfcTestSuccess_FadeIn() {
    WfcFade_Start(2, 0, 0x15, 8);
    WfcGx_ShowPlanes(0, 0x15);
    WfcUtil_SetScene((void *)WfcTestSuccess_WaitFadeIn);
}

void WfcTestSuccess_WaitFadeIn() {
    if (WfcFade_IsBusy(0) != 0) return;
    WfcUtil_SetScene((void *)WfcTestSuccess_Update);
}

void WfcTestSuccess_Update() {
    WfcTestSuccess_CountDown();
    WfcTestSuccess_Idle();
}

s32 WfcTestSuccess_Idle() {
}

void WfcTestSuccess_FadeOut() {
    s32 x;
    WfcUtil_GetEditParams(0, &x);
    if (x != 0) WfcHeader_StartSlideOut();
    WfcFade_Start(3, 1, 1, 8);
    WfcFade_Start(3, 0, 0x15, 8);
    WfcUtil_SetScene((void *)WfcTestSuccess_Exit);
}

void WfcTestSuccess_Exit() {
    s32 x;
    if (WfcFade_IsBusy(1) != 0) return;
    if (WfcFade_IsBusy(0) != 0) return;
    if (WfcHeader_IsSlideOutDone() == 0) return;
    WfcText_DestroyBgCanvas(0);
    WfcUtil_HideTopMessage();
    WfcGx_HidePlanes(1, 1);
    WfcGx_HidePlanes(0, 0x15);
    WfcUtil_SetScreenFlags(2, 1);
    WfcUtil_GetEditParams(0, &x);
    if (x == 0) {
        WfcUtil_SetEditParams(0, 0);
        WfcUtil_SetScene((void *)WfcManualSetup_Enter);
    } else {
        WfcUtil_SetScene((void *)WfcTopMenu_Enter);
    }
}

void WfcTestSuccess_CountDown() {
    s32 x;
    s32 r;
    sWfcTestSuccessTimer++;
    if (sWfcTestSuccessTimer < 0xb4) return;
    WfcUtil_GetEditParams(0, &x);
    r = WfcUtil_GetStartMode();
    switch (r) {
    case 0:
        break;
    case 1:
        if (x != 0) {
            WfcUtil_SetScene((void *)WfcUtil_QuitFadeOut);
            return;
        }
        break;
    }
    WfcUtil_SetScene((void *)WfcTestSuccess_FadeOut);
}

}
