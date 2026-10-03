// mwcc-flags: -O4,p
#include "types.h"

#pragma thumb off

extern "C" const s8 data_ov001_0222a1f0[8];
extern "C" const s8 sWfcSetupMethodNav[32];
extern "C" const u16 sWfcSetupMethodRects[32];
extern "C" const u16 sWfcSetupMethodCursorPos[32];
extern "C" {
s8 sWfcSetupMethodColumn;
u8 sWfcSetupMethodChosen;
s8 sWfcSetupMethodCursor;
void *sWfcSetupMethodPalette;
}

namespace F0221ae34 {

#define R258 ((const u16 (*)[16])sWfcSetupMethodCursorPos)
#define R25A ((const u16 (*)[16])((const u16 *)sWfcSetupMethodCursorPos + 1))
#define R25C ((const u16 (*)[16])((const u16 *)sWfcSetupMethodCursorPos + 2))
#define R25E ((const u16 (*)[16])((const u16 *)sWfcSetupMethodCursorPos + 3))
extern "C" char data_ov001_0222b2ec[];
extern "C" char data_ov001_0222b304[];
extern "C" const s8 data_ov001_0222a1f0[];

struct Unk_ov001_0221b220_A22 { u8 b[22]; };
struct Unk_ov001_0221b6f8_A12 { u8 b[12]; };

extern "C" {
extern u8 sWfcSetupMethodChosen;
extern u8 sWfcConnTestSucceeded;
extern s8 sWfcSetupMethodCursor;
extern s8 sWfcSetupMethodColumn;
extern void *sWfcSetupMethodPalette;

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

void WfcSetupMethod_FadeOut();
void WfcSetupMethod_StartExit();
void WfcSetupMethod_HandleResult();
void WfcSetupMethod_Idle();
void WfcSetupMethod_HandleInput();
void WfcSetupMethod_Update();
void WfcSetupMethod_WaitButtonBar();
void WfcSetupMethod_WaitFadeIn();
void WfcSetupMethod_FadeIn();
void WfcSetupMethod_LoadBg();
void WfcSetupMethod_Enter();

void WfcSetupMethod_Enter() {
    u8 *o = WfcConfig_GetEdit();
    s32 t = sWfcSetupMethodColumn;
    sWfcSetupMethodChosen = 0;
    if (t == 0) sWfcSetupMethodColumn = 1;
    if (WfcUtil_GetLanguage() != 0) {
        if (sWfcSetupMethodCursor == 2) sWfcSetupMethodCursor = 0;
        if (sWfcSetupMethodColumn == 2) sWfcSetupMethodColumn = 1;
    }
    WfcSetupMethod_LoadBg();
    WfcHighlight_SetConnection();
    WfcUtil_ShowTopMessage(0x7e, data_ov001_0222a1f0[WfcUtil_GetLanguage()], o[0xf4] + 1);
    WfcUtil_ShowStepIndicator(1);
    WfcCursor_ShowCorners(R258[WfcUtil_TestOptionFlag(1)][sWfcSetupMethodCursor * 4],
                        R25C[WfcUtil_TestOptionFlag(1)][sWfcSetupMethodCursor * 4],
                        R25A[WfcUtil_TestOptionFlag(1)][sWfcSetupMethodCursor * 4],
                        R25E[WfcUtil_TestOptionFlag(1)][sWfcSetupMethodCursor * 4]);
    WfcUtil_SetScene((void *)WfcSetupMethod_FadeIn);
}

void WfcSetupMethod_LoadBg() {
    char l[22] = "char/ybBgStep21.ncl.l";
    WfcUtil_LoadFileTo(data_ov001_0222b2ec, (void *)GX_LoadBG2Char);
    WfcUtil_LoadFileTo(data_ov001_0222b304, (void *)GX_LoadBGPltt);
    WfcUtil_LoadFileTo((void *)"char/jb3Way.nsc.l", (void *)GX_LoadBG2Scr);
    sWfcSetupMethodPalette = WfcFs_LoadFile(WfcUtil_LocalizePath(l), 0, 4);
    REGSET(0x4001008, 3);
    REGSET(0x400100a, 3);
    REGSET(0x400000a, 3);
    REGSET(0x400000c, 3);
}

void WfcSetupMethod_FadeIn() {
    WfcFade_Start(2, 1, 1, 8);
    WfcFade_Start(2, 0, 0x14, 8);
    WfcGx_ShowPlanes(1, 1);
    WfcGx_ShowPlanes(0, 0x14);
    WfcUtil_SetScene((void *)WfcSetupMethod_WaitFadeIn);
}

void WfcSetupMethod_WaitFadeIn() {
    if (WfcFade_IsBusy(1) != 0) return;
    if (WfcFade_IsBusy(0) != 0) return;
    WfcUtil_OpenButtonBar(0);
    WfcUtil_SetScene((void *)WfcSetupMethod_WaitButtonBar);
}

void WfcSetupMethod_WaitButtonBar() {
    if (WfcButtonBar_GetResult() == -2) return;
    WfcButtonBar_EnableInput();
    WfcUtil_SetScene((void *)WfcSetupMethod_Update);
}

void WfcSetupMethod_Update() {
    WfcSetupMethod_HandleInput();
    WfcSetupMethod_Idle();
    WfcSetupMethod_HandleResult();
}

void WfcSetupMethod_HandleInput() {
    u32 i;
    u32 off;
    for (i = 0, off = 0; i < 4; i++, off += 8) {
        if (WfcInput_IsTouchPressedIn((u8 *)sWfcSetupMethodRects + (WfcUtil_TestOptionFlag(1) << 5) + off) != 0) {
            WfcButtonBar_SetResult(1);
            sWfcSetupMethodCursor = i;
            WfcCursor_ShowCorners(R258[WfcUtil_TestOptionFlag(1)][sWfcSetupMethodCursor * 4],
                                R25C[WfcUtil_TestOptionFlag(1)][sWfcSetupMethodCursor * 4],
                                R25A[WfcUtil_TestOptionFlag(1)][sWfcSetupMethodCursor * 4],
                                R25E[WfcUtil_TestOptionFlag(1)][sWfcSetupMethodCursor * 4]);
            return;
        }
    }
    if (WfcInput_IsKeyPressed(1) != 0) {
        WfcButtonBar_SetResult(1);
        return;
    }
    if (WfcInput_IsKeyPressed(2) != 0) {
        WfcButtonBar_SetResult(0);
        return;
    }
    if (WfcInput_IsKeyRepeat(0x40) != 0) {
        WfcSetupMethod_MoveCursor(1);
        return;
    }
    if (WfcInput_IsKeyRepeat(0x80) != 0) {
        WfcSetupMethod_MoveCursor(3);
        return;
    }
    if (WfcInput_IsKeyRepeat(0x20) != 0) {
        WfcSetupMethod_MoveCursor(0);
        return;
    }
    if (WfcInput_IsKeyRepeat(0x10) != 0) {
        WfcSetupMethod_MoveCursor(2);
    }
}

void WfcSetupMethod_Idle() {
}

void WfcSetupMethod_HandleResult() {
    switch (WfcButtonBar_GetResult()) {
    case 0:
        WfcSound_Play(7);
        break;
    case 1:
        WfcSound_Play(6);
        WfcSetupMethod_HighlightOption();
        sWfcSetupMethodChosen = 1;
        break;
    default:
        return;
    }
    WfcUtil_SetScene((void *)WfcSetupMethod_StartExit);
}

void WfcSetupMethod_StartExit() {
    WfcButtonBar_DisableInput();
    WfcFade_StartWait(8);
    WfcUtil_SetScene((void *)WfcSetupMethod_FadeOut);
}

void WfcSetupMethod_FadeOut() {
    if (WfcFade_IsBusy(1) != 0) return;
    if (sWfcSetupMethodChosen != 0) WfcButtonBar_Close();
    WfcFade_Start(3, 1, 1, 8);
    WfcFade_Start(3, 0, 0x14, 8);
    WfcUtil_SetScene((void *)WfcSetupMethod_Exit);
}

}
}

#undef R258
#undef R25A
#undef R25C
#undef R25E

namespace F0221a40c {

#define R258 ((const Unk_ov001_0221abb4_R *)sWfcSetupMethodCursorPos)
#define R25A ((const Unk_ov001_0221abb4_R *)((const u16 *)sWfcSetupMethodCursorPos + 1))
#define R25C ((const Unk_ov001_0221abb4_R *)((const u16 *)sWfcSetupMethodCursorPos + 2))
#define R25E ((const Unk_ov001_0221abb4_R *)((const u16 *)sWfcSetupMethodCursorPos + 3))

struct Unk_ov001_0221a40c_G {
    u32 unk_00;
    u32 unk_04[3];
    u32 unk_10[3];
    u8 unk_1c;
    u8 unk_1d;
    u8 pad_1e[2];
};

struct Unk_ov001_0221abb4_R { u16 v[16]; };
struct Unk_ov001_0221ab50_B { u8 b[4]; };
struct Unk_ov001_0221a8a8_P { u16 x, y; };
struct Unk_ov001_0221a9c8_B { u8 b[22]; };

extern "C" {
extern s8 sWfcSetupMethodCursor;
extern s8 sWfcSetupMethodColumn;
extern u8 sWfcSetupMethodChosen;
extern void *sWfcSetupMethodPalette;
extern u8 data_ov001_0222b2d0[];
extern const s8 sWfcSetupMethodNav[];

s32 WfcFade_IsBusy(s32);
s32 WfcButtonBar_GetResult();
void WfcButtonBar_Close();
u8 *WfcConfig_GetEdit();
void WfcFade_Start(s32, s32, s32, s32);
void WfcUtil_SetScene(void *);
void WfcButtonBar_DisableInput();
void WfcFade_StartWait(s32);
void WfcHeader_StartSlideOut();
s32 WfcUtil_GetStartMode();
void WfcSound_Play(s32);
u32 WfcConfig_GetSlotStatus(u32);
void WfcButtonBar_ForceResult(s32);
s32 WfcUtil_GetLanguage();
void WfcDialog_Open(s32, s32, s32, s32, s32);
void WfcConnSelect_PressEraseButton();
void WfcConfig_BeginEdit(s32);
void WfcConnSelect_HighlightSelection();
s32 WfcInput_IsTouchPressedIn(void *);
void WfcButtonBar_SetResult(s32);
void WfcConnSelect_DrawCursor();
s32 WfcInput_IsKeyPressed(s32);
s32 WfcInput_IsKeyRepeat(s32);
void WfcConnSelect_MoveCursor(s32);
s32 WfcHeader_IsAnimating();
void WfcButtonBar_EnableInput();
void WfcUtil_OpenButtonBar(s32);
void WfcGx_ShowPlanes(s32, s32);
u32 WfcObj_Create(u32, u32, u32);
void WfcObj_SetPos(u32, s32, u32, u32);
void WfcObj_SetPriority(u32, s32, s32);
s32 WfcUtil_LoadFileTo(void *, void *);
void GX_LoadBG2Char();
void GX_LoadBGPltt();
void GX_LoadBG2Scr();
void GX_LoadOBJPltt();
void *WfcUtil_LocalizePath(void *);
u32 WfcFs_LoadFile(void *, s32, s32);
u32 WfcHeap_AllocClear(s32, s32);
void WfcHighlight_Set(s32);
void WfcUtil_ShowTopMessage(s32, s32, s32);
void WfcUtil_ShowStepIndicator(s32);
void WfcUtil_RequestPaletteLine(void *, u32, u32);
u32 WfcUtil_TestOptionFlag(s32);
void WfcCursor_ShowCorners(u32, u32, u32, u32);
s32 WfcButtonBar_IsClosed();
void WfcCursor_Clear();
void WfcUtil_HideTopMessage();
void WfcFs_FreeFile(void *);
void WfcGx_HidePlanes(s32, s32);
void WfcUtil_SetScreenFlags(s32, s32);
void WfcUtil_SetEditParams(s32, s32);
void WfcManualSetup_SetMode(s32);
void WfcApSearch_Enter();
void WfcAossSetup_Enter();
void WfcSimpleStartInit_Enter();
void WfcManualSetup_Enter();
void WfcConnSelect_Exit();
void WfcUtil_QuitFadeOut();
void WfcConnSelect_EraseDialog();

void WfcConnSelect_FadeOut();
void WfcConnSelect_StartExit();
s32 WfcConnSelect_HandleSelection();
void WfcConnSelect_Idle();
void WfcConnSelect_HandleInput();
void WfcConnSelect_Update();
void WfcConnSelect_WaitButtonBar();
void WfcConnSelect_WaitFadeIn();
void WfcConnSelect_FadeIn();
void WfcConnSelect_CreateSlotButtons();
void WfcConnSelect_LoadBg();
void WfcConnSelect_Enter();
void WfcSetupMethod_HighlightOption();
void WfcSetupMethod_MoveCursor(s32);
void WfcSetupMethod_Exit();

#define BGCNT(a, v) (*(volatile u16 *)(a) = (*(volatile u16 *)(a) & ~3) | (v))

void WfcSetupMethod_MoveCursor(s32 p);

void WfcSetupMethod_Exit() {
    if (WfcFade_IsBusy(1)) return;
    if (WfcFade_IsBusy(0)) return;
    if (WfcButtonBar_IsClosed() == 0) return;
    WfcCursor_Clear();
    WfcUtil_HideTopMessage();
    WfcFs_FreeFile(sWfcSetupMethodPalette);
    WfcGx_HidePlanes(1, 1);
    WfcGx_HidePlanes(0, 0x14);
    if (sWfcSetupMethodChosen == 0) {
        WfcUtil_SetScreenFlags(2, 0);
        WfcUtil_SetScene((void *)WfcConnSelect_Enter);
        return;
    }
    switch (sWfcSetupMethodCursor) {
    case 0:
        WfcUtil_SetScreenFlags(2, 1);
        WfcUtil_SetScene((void *)WfcApSearch_Enter);
        return;
    case 1:
        WfcUtil_SetScreenFlags(2, 1);
        WfcUtil_SetScene((void *)WfcAossSetup_Enter);
        return;
    case 2:
        WfcUtil_SetScreenFlags(2, 1);
        WfcUtil_SetScene((void *)WfcSimpleStartInit_Enter);
        return;
    case 3:
        WfcUtil_SetScreenFlags(2, 0);
        WfcUtil_SetEditParams(0, 0);
        WfcManualSetup_SetMode(1);
        WfcUtil_SetScene((void *)WfcManualSetup_Enter);
        break;
    }
}

void WfcSetupMethod_MoveCursor(s32 p) {
    s32 s = sWfcSetupMethodCursor;
    s32 c = WfcUtil_TestOptionFlag(1);
    const s8 *row = sWfcSetupMethodNav + c * 16;
    row += s * 4;
    s32 v = *(s8 *)((u32)p + (u32)row);
    if (v == -1) return;
    if (v == 0) {
        sWfcSetupMethodColumn = s;
    }
    if (v == -2) {
        sWfcSetupMethodCursor = sWfcSetupMethodColumn;
    } else {
        sWfcSetupMethodCursor = v;
    }
    WfcSound_Play(8);
    // the four index calls sit directly in the argument expressions (no locals), and the selector global is re-read
    WfcCursor_ShowCorners(R258[WfcUtil_TestOptionFlag(1)].v[sWfcSetupMethodCursor * 4],
                        R25C[WfcUtil_TestOptionFlag(1)].v[sWfcSetupMethodCursor * 4],
                        R25A[WfcUtil_TestOptionFlag(1)].v[sWfcSetupMethodCursor * 4],
                        R25E[WfcUtil_TestOptionFlag(1)].v[sWfcSetupMethodCursor * 4]);
}

void WfcSetupMethod_HighlightOption() {
    Unk_ov001_0221ab50_B l = *(Unk_ov001_0221ab50_B *)data_ov001_0222b2d0;
    u32 v = l.b[sWfcSetupMethodCursor];
    WfcUtil_RequestPaletteLine(sWfcSetupMethodPalette, v, v);
}

}
}
// Declarations for data defined further down (definition order sets the data layout)
extern "C" const s8 data_ov001_0222a1f0[8];
extern "C" u8 data_ov001_0222b2d0[4];
extern "C" const s8 sWfcSetupMethodNav[32];
extern "C" const u16 sWfcSetupMethodRects[32];
extern "C" const u16 sWfcSetupMethodCursorPos[32];
extern "C" char data_ov001_0222b2ec[24];
extern "C" char data_ov001_0222b304[24];

extern "C" const s8 data_ov001_0222a1f0[8] = {3, -1, -1, -1, -1, -1, 0, 0};

extern "C" u8 data_ov001_0222b2d0[4] = {1, 2, 3, 4};

extern "C" const s8 sWfcSetupMethodNav[32] = {-1, -2, -1, -2, 3, 0, 3, 0, -1, -1, -1, -1, 1, 0, 1, 0, -1, -2, -1, -2, 3, 0, 2, 0, 1, 0, 3, 0, 2, 0, 1, 0};

extern "C" const u16 sWfcSetupMethodCursorPos[32] = {6, 0x1e, 0xea, 0x4e, 6, 0x62, 0x70, 0x92, 0, 0, 0, 0, 0x80, 0x62, 0xea, 0x92, 6, 0x1e, 0xea, 0x4e, 6, 0x62, 0x56, 0x92, 0x66, 0x62, 0xb6, 0x92, 0xc6, 0x62, 0xea, 0x92};

extern "C" const u16 sWfcSetupMethodRects[32] = {8, 0x20, 0xf8, 0x5c, 8, 0x64, 0x7e, 0xa0, 0, 0, 0, 0, 0x83, 0x64, 0xf8, 0xa0, 8, 0x20, 0xf8, 0x5c, 8, 0x64, 0x64, 0xa0, 0x68, 0x64, 0xc4, 0xa0, 0xc8, 0x64, 0xf8, 0xa0};

extern "C" char data_ov001_0222b304[24] = "char/ybBgStep2.ncl.l";

extern "C" char data_ov001_0222b2ec[24] = "char/jbBgStep2.ncg.l";

