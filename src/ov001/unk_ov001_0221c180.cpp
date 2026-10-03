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
s32 WfcUtil_ShowTopMessage(s32, s32, s32);
s32 WfcUtil_ShowStepIndicator(s32);
s32 WfcSound_Play(s32);
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

void WfcUsbIntro_Exit();
void WfcUsbIntro_FadeOut();
void WfcUsbIntro_StartExit();
void WfcUsbIntro_HandleResult();
void WfcUsbIntro_Idle();
void WfcUsbIntro_HandleInput();
void WfcUsbIntro_Update();
void WfcUsbIntro_WaitButtonBar();
void WfcUsbIntro_WaitFadeIn();
void WfcUsbIntro_FadeIn();
void WfcUsbIntro_LoadBg();
void WfcUsbIntro_Enter();
void WfcConnSelect_Enter();
void WfcUsbWait_Enter();
}

extern "C" u8 sWfcUsbIntroOk = 0;

extern "C" void WfcUsbIntro_Enter() {
    sWfcUsbIntroOk = 0;
    WfcUsbIntro_LoadBg();
    WfcHighlight_Set(8);
    WfcUtil_ShowTopMessage(0x85, -1, 0);
    WfcUtil_ShowStepIndicator(1);
    WfcUtil_ShowBottomMessage(0x6c);
    WfcUtil_SetScene((void *)WfcUsbIntro_FadeIn);
}

extern "C" void WfcUsbIntro_LoadBg() {
    WfcUtil_LoadFileTo((void *)"char/jbBgStep2.ncg.l", (void *)GX_LoadBG2Char);
    WfcUtil_LoadFileTo((void *)"char/ybBgStep2.ncl.l", (void *)GX_LoadBGPltt);
    WfcUtil_LoadFileTo((void *)"char/xb3Multi.nsc.l", (void *)GX_LoadBG2Scr);
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

extern "C" void WfcUsbIntro_FadeIn() {
    WfcFade_Start(2, 1, 1, 8);
    WfcFade_Start(2, 0, 0x15, 8);
    WfcGx_ShowPlanes(1, 1);
    WfcGx_ShowPlanes(0, 0x15);
    WfcUtil_SetScene((void *)WfcUsbIntro_WaitFadeIn);
}

extern "C" void WfcUsbIntro_WaitFadeIn() {
    if (WfcFade_IsBusy(1) != 0) return;
    if (WfcFade_IsBusy(0) != 0) return;
    WfcUtil_OpenButtonBar(6);
    WfcUtil_SetScene((void *)WfcUsbIntro_WaitButtonBar);
}

extern "C" void WfcUsbIntro_WaitButtonBar() {
    if (WfcButtonBar_GetResult() == -2) return;
    WfcButtonBar_EnableInput();
    WfcUtil_SetScene((void *)WfcUsbIntro_Update);
}

extern "C" void WfcUsbIntro_Update() {
    WfcUsbIntro_HandleInput();
    WfcUsbIntro_Idle();
    WfcUsbIntro_HandleResult();
}

extern "C" void WfcUsbIntro_HandleInput() {
    if (WfcInput_IsKeyPressed(1) != 0) {
        WfcButtonBar_SetResult(1);
    }
    if (WfcInput_IsKeyPressed(2) != 0) {
        WfcButtonBar_SetResult(0);
    }
}

extern "C" void WfcUsbIntro_Idle() {
}

extern "C" void WfcUsbIntro_HandleResult() {
    switch (WfcButtonBar_GetResult()) {
    case 0:
        WfcSound_Play(7);
        break;
    case 1:
        WfcSound_Play(6);
        sWfcUsbIntroOk = 1;
        break;
    default:
        return;
    }
    WfcUtil_SetScene((void *)WfcUsbIntro_StartExit);
}

extern "C" void WfcUsbIntro_StartExit() {
    WfcButtonBar_DisableInput();
    WfcFade_StartWait(8);
    WfcUtil_SetScene((void *)WfcUsbIntro_FadeOut);
}

extern "C" void WfcUsbIntro_FadeOut() {
    if (WfcFade_IsBusy(1) != 0) return;
    WfcButtonBar_Close();
    if (sWfcUsbIntroOk == 0) {
        WfcFade_Start(3, 1, 1, 8);
    }
    WfcFade_Start(3, 0, 0x15, 8);
    WfcUtil_SetScene((void *)WfcUsbIntro_Exit);
}

extern "C" void WfcUsbIntro_Exit() {
    if (WfcFade_IsBusy(0) != 0) return;
    if (sWfcUsbIntroOk == 0) {
        if (WfcFade_IsBusy(1) != 0) return;
    }
    if (WfcButtonBar_IsClosed() == 0) return;
    WfcText_DestroyBgCanvas(0);
    if (sWfcUsbIntroOk == 0) {
        WfcUtil_HideTopMessage();
        WfcGx_HidePlanes(1, 1);
    }
    WfcGx_HidePlanes(0, 0x15);
    if (sWfcUsbIntroOk == 0) {
        WfcUtil_SetScreenFlags(2, 1);
        WfcUtil_SetScene((void *)WfcConnSelect_Enter);
    } else {
        WfcUtil_SetScreenFlags(2, 1);
        WfcUtil_SetScene((void *)WfcUsbWait_Enter);
    }
}
