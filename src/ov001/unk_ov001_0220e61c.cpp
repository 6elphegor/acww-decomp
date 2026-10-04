// mwcc-flags: -O4,p
#include "types.h"

#pragma thumb off

extern "C" u16 data_ov001_0222acd8[30] = {'%', '0', '2', 'X', '-', '%', '0', '2', 'X', '-', '%', '0', '2', 'X', '-', '%', '0', '2', 'X', '-', '%', '0', '2', 'X', '-', '%', '0', '2', 'X', 0};
extern "C" u16 data_ov001_0222ad14[40] = {'%', '0', '4', 'd', '-', '%', '0', '4', 'd', '-', '%', '0', '4', 'd', '-', '%', '0', '4', 'd', 0, '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', 0};
#define data_ov001_0222ad3c (data_ov001_0222ad14 + 20)
extern "C" const u16 data_ov001_02229fb0[4] = {0x0008, 0x0040, 0x00f0, 0x001c};
extern "C" const u16 data_ov001_02229fb8[4] = {0x0008, 0x0078, 0x00f0, 0x001c};

struct WfcSysInfoStackPad {
    u32 v[3];
    WfcSysInfoStackPad() {}
    ~WfcSysInfoStackPad() {}
};

#define BGCNT(a) (*(volatile u16 *)(a) = (*(volatile u16 *)(a) & ~3) | 3)

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
void DWCi_BM_GetWiFiInfo(void *);
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
void WfcSysInfo_LoadBg();
void WfcSysInfo_Enter();
void GX_LoadBG2Char(void);
void *WfcUtil_LocalizePath(void *);
void WfcCursor_ShowCorners(u32, u32, u32, u32);
void WfcSysInfo_DrawInfo();
s32 WfcUtil_RequestPaletteLine(void *, u32, u32);
s32 FX_ModS32(s32, s32);
void WfcOam_FreeEntry(void *);
void WfcCursor_Clear();
void WfcFs_FreeFile(void *);
void WfcTopMenu_Enter();
void WfcTransferIntro_Enter();
void WfcButtonBar_ForceResult(s32);
void WfcOptions_HighlightSelection();
s32 WfcInput_IsTouchPressedIn(void *);
s32 WfcInput_IsKeyRepeat(s32);
void *WfcFs_LoadFile(void *, s32, s32);
void MI_CpuCopy8(void *, void *, s32);
void DC_FlushRange(void *, s32);
void GX_LoadBGPltt(void *, s32, s32);
s32 WfcTop_LoadScreen(s32);
void WfcSysInfo_Enter();
void WfcOptions_Exit();
void WfcOptions_FadeOut();
void WfcOptions_StartExit();
void WfcOptions_HandleResult();
void WfcOptions_Update();
void WfcOptions_WaitButtonBar();
void WfcOptions_WaitFadeIn();
void WfcOptions_FadeIn();
}

extern "C" void WfcSysInfo_Enter() {
    WfcSysInfo_LoadBg();
    WfcHighlight_Set(0x11);
    WfcUtil_ShowTopMessage(0x89, -1, 0);
    WfcSysInfo_DrawInfo();
    WfcUtil_SetScene((void *)WfcSysInfo_FadeIn);
}

extern "C" void WfcSysInfo_LoadBg() {
    WfcUtil_LoadFileTo((void *)"char/jb5Info.nsc.l", (void *)GX_LoadBG2Scr);
    BGCNT(0x4001008);
    BGCNT(0x400100a);
    BGCNT(0x4000008);
    BGCNT(0x400000a);
    BGCNT(0x400000c);
}

extern "C" void WfcSysInfo_DrawInfo() {
    void *obj = WfcText_CreateBgCanvas(0, 0);
    u8 dt[8];
    u64 tick;
    WfcSysInfoStackPad pad;
    u32 d[4];
    char buf[0x2c];
    OS_GetMacAddress(dt);
    func_0212c234(buf, 0x14, data_ov001_0222acd8, dt[0], dt[1], dt[2], dt[3], dt[4], dt[5]);
    WfcText_DrawTextRect(obj, data_ov001_02229fb0[0], data_ov001_02229fb0[1], data_ov001_02229fb0[2], data_ov001_02229fb0[3], 2, 0x480, buf);
    DWCi_BM_GetWiFiInfo(&tick);
    u64 t = tick;
    if (t != 0) {
        s32 i;
        d[3] = (u32)((t % 10) * 1000);
        t = t / 10;
        for (i = 0; i < 3; i++) {
            d[2 - i] = (u32)(t % 10000);
            t = t / 10000;
        }
        func_0212c234(buf, 0x14, data_ov001_0222ad14, d[0], d[1], d[2], d[3]);
    } else {
        func_0212c234(buf, 0x14, data_ov001_0222ad3c);
    }
    WfcText_DrawTextRect(obj, data_ov001_02229fb8[0], data_ov001_02229fb8[1], data_ov001_02229fb8[2], data_ov001_02229fb8[3], 2, 0x480, buf);
    WfcText_RequestTransfer(obj);
}

extern "C" void WfcSysInfo_FadeIn() {
    WfcFade_Start(2, 1, 1, 8);
    WfcFade_Start(2, 0, 0x15, 8);
    WfcGx_ShowPlanes(1, 1);
    WfcGx_ShowPlanes(0, 0x15);
    WfcUtil_SetScene((void *)WfcSysInfo_WaitFadeIn);
}

extern "C" void WfcSysInfo_WaitFadeIn() {
    if (WfcFade_IsBusy(1) != 0) return;
    if (WfcFade_IsBusy(0) != 0) return;
    WfcUtil_OpenButtonBar(2);
    WfcUtil_SetScene((void *)WfcSysInfo_WaitButtonBar);
}

extern "C" void WfcSysInfo_WaitButtonBar() {
    if (WfcButtonBar_GetResult() == -2) return;
    WfcButtonBar_EnableInput();
    WfcUtil_SetScene((void *)WfcSysInfo_Update);
}

extern "C" void WfcSysInfo_Update() {
    WfcSysInfo_HandleInput();
    WfcSysInfo_Idle();
    WfcSysInfo_HandleResult();
}

extern "C" void WfcSysInfo_HandleInput() {
    if (WfcInput_IsKeyPressed(2) != 0) {
        WfcButtonBar_SetResult(0);
    }
}

extern "C" void WfcSysInfo_Idle() {}

extern "C" void WfcSysInfo_HandleResult() {
    if (WfcButtonBar_GetResult() != 0) return;
    WfcSound_Play(7);
    WfcUtil_SetScene((void *)WfcSysInfo_StartExit);
}

extern "C" void WfcSysInfo_StartExit() {
    WfcButtonBar_DisableInput();
    WfcFade_StartWait(8);
    WfcUtil_SetScene((void *)WfcSysInfo_FadeOut);
}

extern "C" void WfcSysInfo_FadeOut() {
    if (WfcFade_IsBusy(1) != 0) return;
    WfcButtonBar_Close();
    WfcFade_Start(3, 1, 1, 8);
    WfcFade_Start(3, 0, 0x15, 8);
    WfcUtil_SetScene((void *)WfcSysInfo_Exit);
}

extern "C" void WfcSysInfo_Exit() {
    if (WfcFade_IsBusy(1) != 0) return;
    if (WfcFade_IsBusy(0) != 0) return;
    if (WfcButtonBar_IsClosed() == 0) return;
    WfcText_DestroyBgCanvas(0);
    WfcUtil_HideTopMessage();
    WfcGx_HidePlanes(1, 1);
    WfcGx_HidePlanes(0, 0x15);
    WfcUtil_SetScreenFlags(0, 1);
    WfcUtil_SetScene((void *)WfcOptions_Enter);
}

