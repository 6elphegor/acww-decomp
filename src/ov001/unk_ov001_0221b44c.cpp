// mwcc-flags: -O4,p
#include "types.h"
#include "net/Unk_ov001_0221b6f8_A12.h"

#pragma thumb off

extern "C" void WfcConnTest_Free(s32 a, s32 b);
extern "C" void WfcConnTest_Alloc(s32 a, s32 b);
extern "C" const void *const sWfcConnTestParam[3];
extern "C" const void *const sWfcConnTestParam[3] = {(void *)WfcConnTest_Alloc, (void *)WfcConnTest_Free, (void *)0x103};
extern "C" {
u8 sWfcConnTestSucceeded;
}

namespace F0221b794 {


extern "C" {
extern u8 sWfcConnTestSucceeded;

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

void WfcConnTest_LoadBg();

void WfcConnTest_Enter() {
    s32 x;
    sWfcConnTestSucceeded = 0;
    WfcConnTest_LoadBg();
    WfcUtil_GetEditParams(0, &x);
    if (x == 0) WfcUtil_ShowTopMessage(0x7d, -1, 0);
    WfcUtil_ShowStepIndicator(2);
    if (x == 0) WfcHighlight_SetConnection();
    WfcUtil_ShowBottomMessage(0x76);
    WfcBusyIcon_Create(0);
    WfcConnTest_Start();
    WfcLinkIcon_Create(0);
    WfcSound_Play(0xc);
    WfcUtil_SetScene((void *)WfcConnTest_FadeIn);
}

void WfcConnTest_LoadBg() {
    WfcUtil_LoadFileTo((void *)"char/jbBgStep3.ncg.l", (void *)GX_LoadBG2Char);
    WfcUtil_LoadFileTo((void *)"char/ybBgStep3.ncl.l", (void *)GX_LoadBGPltt);
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

}
}

namespace F0221ae34 {


extern "C" {
extern u8 sWfcSetupMethodChosen;
extern u8 sWfcConnTestSucceeded;
extern s8 sWfcSetupMethodCursor;
extern s8 sWfcSetupMethodColumn;
extern void *sWfcSetupMethodPalette;
extern u8 sWfcSetupMethodRects[];
extern u16 sWfcSetupMethodCursorPos[][16];
extern u16 data_ov001_0222a25a[][16];
extern u16 data_ov001_0222a25c[][16];
extern u16 data_ov001_0222a25e[][16];
extern s8 data_ov001_0222a1f0[];
extern u8 data_ov001_0222b2d4[];
extern u8 data_ov001_0222b2ec[];

extern s32 WfcFade_IsBusy(s32);
extern void WfcButtonBar_Close();
extern void WfcFade_Start(s32, s32, s32, s32);
extern void WfcUtil_SetScene(void *);
extern void WfcSetupMethod_Exit();
extern void WfcButtonBar_DisableInput();
extern void WfcFade_StartWait(s32);
extern s32 WfcButtonBar_GetResult();
extern void WfcSound_Play(s32);
extern void WfcSetupMethod_HighlightOption();
extern u32 WfcUtil_TestOptionFlag(s32);
extern s32 WfcInput_IsTouchPressedIn(void *);
extern void WfcButtonBar_SetResult(s32);
extern void WfcCursor_ShowCorners(u32, u32, u32, u32);
extern s32 WfcInput_IsKeyPressed(s32);
extern s32 WfcInput_IsKeyRepeat(s32);
extern void WfcSetupMethod_MoveCursor(s32);
extern void WfcButtonBar_EnableInput();
extern void WfcUtil_OpenButtonBar(s32);
extern void WfcGx_ShowPlanes(s32, s32);
extern void WfcUtil_LoadFileTo(void *, void *);
extern u8 *WfcUtil_LocalizePath(void *);
extern void *WfcFs_LoadFile(void *, s32, s32);
extern void GX_LoadBG2Char();
extern void GX_LoadBGPltt();
extern void GX_LoadBG2Scr();
extern u8 *WfcConfig_GetEdit();
extern u8 *WfcConfig_Get();
extern s32 WfcUtil_GetLanguage();
extern void WfcHighlight_SetConnection();
extern void WfcUtil_ShowTopMessage(s32, s32, s32);
extern void WfcUtil_ShowStepIndicator(s32);
extern void WfcSetupMethod_FadeIn();
extern void WfcHeap_Free(s32);
extern void WfcHeap_Alloc(s32, s32);
extern s32 WifiAp_Process();
extern void WfcLinkIcon_Delete();
extern void WfcSound_Stop();
extern void WifiAp_GetStatus();
extern void WfcError_SetCode();
extern void WfcConnTest_FadeOut();
extern void WfcTask_RequestDelete(s32, s32);
extern s32 WifiAp_RequestCleanup();
extern void *func_020fe848();
extern void MI_CpuCopy8(void *, void *, s32);
extern void WfcBusyIcon_Delete();
extern void WfcText_DestroyBgCanvas(s32);
extern void WfcGx_HidePlanes(s32, s32);
extern void WfcUtil_SetScreenFlags(s32, s32);
extern void WfcError_Enter();
extern void WfcTestSuccess_Enter();
extern void WfcConnTest_Exit();
extern void WfcConnTest_WaitFadeOut();
extern void WfcConnTest_Idle();
extern void WfcConnTest_WaitFadeIn();
extern void WfcSetupMethod_WaitFadeIn();
extern void WfcSetupMethod_WaitButtonBar();
extern void WfcSetupMethod_Update();
extern void WfcSetupMethod_FadeOut();
extern void WfcSetupMethod_StartExit();
extern void WfcSetupMethod_HandleResult();
extern void WfcSetupMethod_Idle();
extern void WfcSetupMethod_HandleInput();
extern void func_ov001_0221b604();
extern void func_ov001_0221b608();
extern void func_ov001_0221b60c();
extern void WfcUtil_GetEditParams(s32, void *);
extern void MIi_CpuCopy32(void *, void *, s32);
extern s32 WifiAp_Init(void *);
extern void Fatal_Trap();
extern void WifiAp_SetApEntry(s32, void *);
extern void WfcTask_Add(s32, void *, s32, s32);
extern void WfcConnTest_PollTask(s32);


#define REGSET(a, v) do { u32 t = *(volatile u16 *)(a); t &= ~3; t |= (v); *(volatile u16 *)(a) = t; } while (0)

void WfcConnTest_Free(s32 a, s32 b);
void WfcConnTest_Alloc(s32 a, s32 b);
void WfcConnTest_PollTask(s32 a);
void WfcConnTest_Exit();
void WfcConnTest_WaitFadeOut();
void WfcConnTest_FadeOut();
void func_ov001_0221b604();
void func_ov001_0221b608();
void func_ov001_0221b60c();
void WfcConnTest_Idle();
void WfcConnTest_WaitFadeIn();
void WfcConnTest_FadeIn();
void WfcConnTest_Start();

void WfcConnTest_Start() {
    u32 l;
    Unk_ov001_0221b6f8_A12 m;
    u8 *o = WfcConfig_GetEdit();
    MIi_CpuCopy32((void *)sWfcConnTestParam, &m, 12);
    WfcUtil_GetEditParams(0, &l);
    if (l == 2) m.b[10] = 4;
    else m.b[10] = o[0xf4] + 1;
    if (WifiAp_Init(&m) == 0) Fatal_Trap();
    if (l == 0) WifiAp_SetApEntry(o[0xf4], o);
    WfcTask_Add(0, (void *)WfcConnTest_PollTask, 0, 0x78);
}

void WfcConnTest_FadeIn() {
    u32 l;
    WfcFade_Start(2, 0, 0x15, 8);
    WfcGx_ShowPlanes(0, 0x15);
    WfcUtil_GetEditParams(0, &l);
    if (l == 0) {
        WfcFade_Start(2, 1, 1, 8);
        WfcGx_ShowPlanes(1, 1);
    }
    WfcUtil_SetScene((void *)WfcConnTest_WaitFadeIn);
}

void WfcConnTest_WaitFadeIn() {
    if (WfcFade_IsBusy(1) != 0) return;
    if (WfcFade_IsBusy(0) != 0) return;
    WfcUtil_SetScene((void *)WfcConnTest_Idle);
}

void WfcConnTest_Idle() {
    func_ov001_0221b60c();
    func_ov001_0221b608();
    func_ov001_0221b604();
}

void func_ov001_0221b60c() {
}

void func_ov001_0221b608() {
}

void func_ov001_0221b604() {
}

void WfcConnTest_FadeOut() {
    WfcFade_Start(3, 0, 0x15, 8);
    WfcUtil_SetScene((void *)WfcConnTest_WaitFadeOut);
}

void WfcConnTest_WaitFadeOut() {
    if (WfcFade_IsBusy(0) != 0) return;
    WfcUtil_SetScene((void *)WfcConnTest_Exit);
}

void WfcConnTest_Exit() {
    u8 *o = WfcConfig_Get();
    if (WifiAp_RequestCleanup() == 0) return;
    MI_CpuCopy8(func_020fe848(), o + 0xf0, 0xe);
    MI_CpuCopy8(func_020fe848(), o + 0x1f0, 0xe);
    WfcBusyIcon_Delete();
    WfcText_DestroyBgCanvas(0);
    WfcGx_HidePlanes(0, 0x15);
    if (sWfcConnTestSucceeded == 0) {
        WfcUtil_SetScreenFlags(0, 1);
        WfcUtil_SetScene((void *)WfcError_Enter);
    } else {
        WfcUtil_SetScreenFlags(0, 1);
        WfcUtil_SetScene((void *)WfcTestSuccess_Enter);
    }
}

void WfcConnTest_PollTask(s32 a) {
    s32 r = WifiAp_Process();
    if (r == 0) return;
    WfcLinkIcon_Delete();
    WfcSound_Stop();
    if (r > 0) {
        sWfcConnTestSucceeded = 1;
        WfcSound_Play(0x11);
    } else {
        WifiAp_GetStatus();
        WfcError_SetCode();
        WfcSound_Play(0x12);
    }
    WfcUtil_SetScene((void *)WfcConnTest_FadeOut);
    WfcTask_RequestDelete(0, a);
}

void WfcConnTest_Alloc(s32 a, s32 b) {
    WfcHeap_Alloc(b, 0x20);
}

void WfcConnTest_Free(s32 a, s32 b) {
    WfcHeap_Free(b);
}

}
}
