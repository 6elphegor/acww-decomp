// mwcc-flags: -O4,p
#include "types.h"

#pragma thumb off

extern "C" {
s32 WfcInput_IsKeyPressed(s32);
void WfcButtonBar_SetResult(s32);
void WfcErase_HandleResult();
s32 WfcButtonBar_GetResult();
void WfcButtonBar_EnableInput();
void WfcUtil_SetScene(void *);
s32 WfcFade_IsBusy(s32);
void WfcUtil_OpenButtonBar(s32);
void WfcFade_Start(s32, s32, s32, s32);
void WfcGx_ShowPlanes(s32, s32);
s32 WfcUtil_LoadFileTo(void *, void *);
void GX_LoadBG2Scr();
s32 WfcHighlight_Set(s32);
void WfcUtil_ShowTopMessage(s32, s32, s32);
void WfcUtil_ShowBottomMessage(s32);
void OS_SpinWait(u32);
void PM_ForceToPowerOff();
void WfcButtonBar_DisableInput();
void WfcFade_StartWait(s32);
void WfcSound_Play(s32);
void WfcConfig_EraseAll();
s32 WfcButtonBar_IsClosed();
void WfcText_DestroyBgCanvas(s32);
void WfcUtil_HideTopMessage();
void WfcGx_HidePlanes(s32, s32);
void WfcUtil_SetScreenFlags(s32, s32);
void WfcOptions_Enter();
void WfcButtonBar_Close();
void *WfcText_CreateBgCanvas(s32, s32);
void OS_GetMacAddress(void *);
void func_0212c234(void *, s32, void *, ...);
void WfcText_DrawTextRect(void *, u32, u32, u32, u32, s32, u32, void *);
void DWCi_BM_GetWiFiInfo(u64 *);
void WfcText_RequestTransfer(void *);
void WfcErase_Idle();
void WfcErase_HandleInput();
void WfcErase_Update();
void WfcErase_WaitButtonBar();
void WfcErase_WaitFadeIn();
void WfcErase_FadeIn();
void WfcErase_LoadBg();
void WfcErase_Enter();
void WfcErased_PowerOff();
void WfcErased_FadeOut();
void WfcErased_StartExit();
void WfcErased_HandleResult();
void WfcErased_Idle();
void WfcErased_HandleInput();
void WfcErased_Update();
void WfcErased_WaitButtonBar();
void WfcErased_WaitFadeIn();
void WfcErased_FadeIn();
void WfcErased_LoadBg();
void WfcErased_Enter();
void WfcSysInfo_Exit();
void WfcSysInfo_FadeOut();
void WfcSysInfo_StartExit();
void WfcSysInfo_HandleResult();
void WfcSysInfo_Idle();
void WfcSysInfo_HandleInput();
void WfcSysInfo_Update();
void WfcSysInfo_WaitButtonBar();
void WfcSysInfo_WaitFadeIn();
void WfcSysInfo_FadeIn();
}

extern "C" void WfcErased_Enter() {
    WfcErased_LoadBg();
    WfcUtil_ShowBottomMessage(0x57);
    WfcConfig_EraseAll();
    WfcUtil_SetScene((void *)WfcErased_FadeIn);
}

extern "C" void WfcErased_LoadBg() {
    WfcUtil_LoadFileTo((void *)"char/yb5Multi.nsc.l", (void *)GX_LoadBG2Scr);
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

extern "C" void WfcErased_FadeIn() {
    WfcFade_Start(2, 0, 0x15, 8);
    WfcGx_ShowPlanes(0, 0x15);
    WfcUtil_SetScene((void *)WfcErased_WaitFadeIn);
}

extern "C" void WfcErased_WaitFadeIn() {
    if (WfcFade_IsBusy(0) != 0) return;
    WfcUtil_OpenButtonBar(5);
    WfcUtil_SetScene((void *)WfcErased_WaitButtonBar);
}

extern "C" void WfcErased_WaitButtonBar() {
    if (WfcButtonBar_GetResult() == -2) return;
    WfcButtonBar_EnableInput();
    WfcUtil_SetScene((void *)WfcErased_Update);
}

extern "C" void WfcErased_Update() {
    WfcErased_HandleInput();
    WfcErased_Idle();
    WfcErased_HandleResult();
}

extern "C" void WfcErased_HandleInput() {
    if (WfcInput_IsKeyPressed(1) != 0) {
        WfcButtonBar_SetResult(0);
    }
}

extern "C" void WfcErased_Idle() {}

extern "C" void WfcErased_HandleResult() {
    if (WfcButtonBar_GetResult() != 0) return;
    WfcSound_Play(6);
    WfcUtil_SetScene((void *)WfcErased_StartExit);
}

extern "C" void WfcErased_StartExit() {
    WfcButtonBar_DisableInput();
    WfcFade_StartWait(8);
    WfcUtil_SetScene((void *)WfcErased_FadeOut);
}

extern "C" void WfcErased_FadeOut() {
    if (WfcFade_IsBusy(1) != 0) return;
    WfcFade_Start(3, 1, 0x3f, 0x40);
    WfcFade_Start(3, 0, 0x3f, 0x40);
    WfcUtil_SetScene((void *)WfcErased_PowerOff);
}

extern "C" void WfcErased_PowerOff() {
    if (WfcFade_IsBusy(1) != 0) return;
    if (WfcFade_IsBusy(0) != 0) return;
    OS_SpinWait(0x1000000);
    PM_ForceToPowerOff();
}

