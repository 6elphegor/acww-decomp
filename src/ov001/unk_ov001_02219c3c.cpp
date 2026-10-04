// mwcc-flags: -O4,p
#include "types.h"
#include "ui/Unk_ov001_0221a40c.h"

#pragma thumb off

extern "C" const u8 sWfcConnSelectSlotCells[4];
extern "C" const s8 data_ov001_0222a160[8];
extern "C" const u16 sWfcConnSelectButtonPos[12];
extern "C" const u16 sWfcConnSelectRects[28];
extern "C" const u16 sWfcConnSelectCursorPos[28];
extern "C" {
u8 sWfcConnSelectCursor;
void *sWfcConnSelect;
}

namespace F0221a40c {

struct WfcConnSelectWork {
    u32 paletteFile;
    u32 slotButtons[3];
    u32 eraseButtons[3];
    u8 lastColumn;
    u8 exitAction;
    u8 pad_1e[2];
};


extern "C" {
extern WfcConnSelectWork *sWfcConnSelect;
extern u8 sWfcConnSelectCursor;
extern const s8 data_ov001_0222a160[];
extern const u16 sWfcConnSelectButtonPos[];
extern const u8 sWfcConnSelectSlotCells[];

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

void WfcConnSelect_Enter() {
    sWfcConnSelect = (WfcConnSelectWork *)WfcHeap_AllocClear(0x20, 4);
    sWfcConnSelect->exitAction = 0;
    WfcConnSelect_LoadBg();
    WfcHighlight_Set(1);
    WfcUtil_ShowTopMessage(0x7b, -1, 0);
    WfcUtil_ShowStepIndicator(0);
    WfcConnSelect_CreateSlotButtons();
    WfcConnSelect_DrawCursor();
    WfcUtil_SetScene((void *)WfcConnSelect_FadeIn);
}

void WfcConnSelect_LoadBg() {
    char buf[22] = "char/ybBgStep11.ncl.l";
    WfcUtil_LoadFileTo((void *)"char/ybObjWay.ncl.l", (void *)GX_LoadOBJPltt);
    WfcUtil_LoadFileTo((void *)"char/jbBgStep1.ncg.l", (void *)GX_LoadBG2Char);
    WfcUtil_LoadFileTo((void *)"char/jbBgStep1.ncl.l", (void *)GX_LoadBGPltt);
    WfcUtil_LoadFileTo((void *)"char/jb2Ap.nsc.l", (void *)GX_LoadBG2Scr);
    sWfcConnSelect->paletteFile = WfcFs_LoadFile(WfcUtil_LocalizePath(&buf), 0, 4);
    WfcGx_ShowPlanes(1, 0x10);
    BGCNT(0x4001008, 3);
    BGCNT(0x400100a, 3);
    BGCNT(0x400000a, 3);
    BGCNT(0x400000c, 3);
}

#define P168 ((const Unk_ov001_0221a8a8_P *)sWfcConnSelectButtonPos)

void WfcConnSelect_CreateSlotButtons() {
    u32 z[2];
    u32 a;
    s32 i;
    z[0] = 0;
    z[1] = 0;
    for (i = 0; i < 3; i++) {
        a = WfcConfig_GetSlotStatus(i);
        if (a == 0xff) {
            a = 3;
        } else {
            sWfcConnSelect->eraseButtons[i] = WfcObj_Create(z[0], 0x11, 1);
            WfcObj_SetPos(sWfcConnSelect->eraseButtons[i], -1, P168[i + 3].x, P168[i + 3].y);
            WfcObj_SetPriority(sWfcConnSelect->eraseButtons[i], -1, 3);
        }
        sWfcConnSelect->slotButtons[i] = WfcObj_Create(z[1], sWfcConnSelectSlotCells[a], 1);
        WfcObj_SetPos(sWfcConnSelect->slotButtons[i], -1, P168[i].x, P168[i].y);
        WfcObj_SetPriority(sWfcConnSelect->slotButtons[i], -1, 3);
    }
}

void WfcConnSelect_FadeIn() {
    WfcFade_Start(2, 1, 1, 8);
    WfcFade_Start(2, 0, 0x14, 8);
    WfcGx_ShowPlanes(1, 1);
    WfcGx_ShowPlanes(0, 0x14);
    WfcUtil_SetScene((void *)WfcConnSelect_WaitFadeIn);
}

void WfcConnSelect_WaitFadeIn() {
    if (WfcFade_IsBusy(1)) return;
    if (WfcFade_IsBusy(0)) return;
    WfcUtil_OpenButtonBar(0);
    WfcUtil_SetScene((void *)WfcConnSelect_WaitButtonBar);
}

void WfcConnSelect_WaitButtonBar() {
    if (WfcButtonBar_GetResult() == -2) return;
    if (WfcHeader_IsAnimating() == 1) return;
    WfcButtonBar_EnableInput();
    WfcUtil_SetScene((void *)WfcConnSelect_Update);
}

void WfcConnSelect_Update() {
    WfcConnSelect_HandleInput();
    WfcConnSelect_Idle();
    WfcConnSelect_HandleSelection();
}

void WfcConnSelect_HandleInput() {
    u32 i;
    u8 *p;
    p = (u8 *)sWfcConnSelectRects;
    for (i = 0; i < 7; p += 8, i++) {
        if (WfcInput_IsTouchPressedIn(p)) {
            WfcButtonBar_SetResult(1);
            sWfcConnSelectCursor = i;
            WfcConnSelect_DrawCursor();
            return;
        }
    }
    if (WfcInput_IsKeyPressed(1)) {
        WfcButtonBar_SetResult(1);
        return;
    }
    if (WfcInput_IsKeyPressed(2)) {
        WfcButtonBar_SetResult(0);
        return;
    }
    if (WfcInput_IsKeyRepeat(0x40)) {
        WfcConnSelect_MoveCursor(1);
        return;
    }
    if (WfcInput_IsKeyRepeat(0x80)) {
        WfcConnSelect_MoveCursor(3);
        return;
    }
    if (WfcInput_IsKeyRepeat(0x20)) {
        WfcConnSelect_MoveCursor(0);
        return;
    }
    if (WfcInput_IsKeyRepeat(0x10) == 0) return;
    WfcConnSelect_MoveCursor(2);
}

void WfcConnSelect_Idle() {}

s32 WfcConnSelect_HandleSelection() {
    s32 r = WfcButtonBar_GetResult();
    switch (r) {
    case 0:
        switch (WfcUtil_GetStartMode()) {
        case 0:
            WfcSound_Play(7);
            sWfcConnSelect->exitAction = 2;
            break;
        case 1:
            WfcButtonBar_DisableInput();
            WfcUtil_SetScene((void *)WfcUtil_QuitFadeOut);
            return;
        }
        break;
    case 1: {
        u32 t;
        sWfcConnSelect->exitAction = 1;
        t = sWfcConnSelectCursor;
        if (t >= 4) {
            u32 k = t - 4;
            if (WfcConfig_GetSlotStatus(k) == 0xff) {
                WfcSound_Play(9);
                WfcButtonBar_ForceResult(-1);
                return;
            }
            WfcSound_Play(6);
            WfcDialog_Open(0x98, 0, 1, data_ov001_0222a160[WfcUtil_GetLanguage()], k + 1);
            WfcConnSelect_PressEraseButton();
            WfcButtonBar_DisableInput();
            WfcUtil_SetScene((void *)WfcConnSelect_EraseDialog);
            return;
        }
        if (t <= 2) {
            WfcConfig_BeginEdit(t);
        }
        WfcSound_Play(6);
        WfcConnSelect_HighlightSelection();
        break;
    }
    default:
        return;
    }
    WfcUtil_SetScene((void *)WfcConnSelect_StartExit);
}

void WfcConnSelect_StartExit() {
    if (sWfcConnSelect->exitAction == 2) {
        WfcHeader_StartSlideOut();
    }
    WfcButtonBar_DisableInput();
    WfcFade_StartWait(8);
    WfcUtil_SetScene((void *)WfcConnSelect_FadeOut);
}

void WfcConnSelect_FadeOut() {
    if (WfcFade_IsBusy(1)) return;
    if (sWfcConnSelect->exitAction == 1) {
        if (sWfcConnSelectCursor == 3 || WfcConfig_GetEdit()[0xe7] != 0xff) {
            WfcButtonBar_Close();
        }
    }
    WfcFade_Start(3, 1, 1, 8);
    WfcFade_Start(3, 0, 0x14, 8);
    WfcUtil_SetScene((void *)WfcConnSelect_Exit);
}

}
}

#define A1B8 ((const u8 *)sWfcConnSelectCursorPos)

namespace F02219a98 {

struct Unk_ov001_0222deb4_G {
    void *paletteFile;
    void *slotButtons[3];
    void *eraseButtons[3];
    u8 lastColumn;
    u8 exitAction;
};

struct Unk_ov001_02219c3c_Q { u8 b[4]; };

extern "C" {
extern u8 data_ov001_0222b1fc[];
extern u8 data_ov001_0222b214[];
extern u8 data_ov001_0222b22c[];
extern u8 data_ov001_0222b240[];
extern u8 data_ov001_0222b244[];
extern char data_ov001_0222b260[];
extern u16 sWfcApSearchTimer;
extern u8 sWfcApSearchResult;
extern u8 sWfcConnSelectCursor;
extern Unk_ov001_0222deb4_G *sWfcConnSelect;
extern const u8 sWfcConnSelectSlotCells[];
extern const u16 sWfcConnSelectButtonPos[];

extern void GX_LoadBG2Char();
extern void GX_LoadBGPltt();
extern void GX_LoadBG2Scr();
extern void GX_LoadOBJPltt();
extern void WfcFade_Start(s32, s32, s32, s32);
extern void WfcGx_ShowPlanes(s32, s32);
extern void WfcGx_HidePlanes(s32, s32);
extern void WfcUtil_SetScene(void *);
extern s32 WfcUtil_LoadFileTo(void *, void *);
extern void WfcUtil_ShowTopMessage(s32, s32, s32);
extern void WfcHighlight_SetConnection();
extern void WfcUtil_ShowStepIndicator(s32);
extern void WfcUtil_ShowBottomMessage(s32);
extern void WfcBusyIcon_Create(s32);
extern void WfcApScan_Alloc();
extern void WfcApScan_Start();
extern void WfcSound_Play(s32);
extern void WfcUtil_RequestPaletteLine(void *, s32, s32);
extern s32 WfcConfig_GetSlotStatus();
extern s32 WfcObj_SetModePalette(void *, s32, s32, s32);
extern s32 WfcDialog_IsOpen();
extern void WfcButtonBar_EnableInput();
extern s32 WfcDialog_GetResult();
extern void WfcDialog_Close();
extern void WfcConfig_EraseSlot(s32);
extern void *WfcObj_GetOam(void *, s32);
extern void WfcCell_Copy(s32, s32, void *);
extern void WfcObj_SetPos(void *, s32, s32, s32);
extern void WfcObj_SetPriority(void *, s32, s32);
extern void WfcObj_Free(void *);
extern void WfcCursor_ShowCorners(s32, s32, s32, s32);
extern void WfcCursor_ShowPair(s32, s32, s32, s32);
extern s32 WfcFade_IsBusy(s32);
extern s32 WfcHeader_IsSlideOutDone();
extern s32 WfcButtonBar_IsClosed();
extern void WfcCursor_Clear();
extern void WfcUtil_HideTopMessage();
extern void WfcFs_FreeFile(void *);
extern void WfcUtil_SetScreenFlags(s32, s32);
extern void WfcUtil_SetEditParams(s32, s32);
extern u8 *WfcConfig_GetEdit();
extern void WfcManualSetup_SetMode(s32);
extern void WfcHeap_FreeAndClear(void *);
extern void WfcTopMenu_Enter();
extern void WfcSetupMethod_Enter();
extern void WfcManualSetup_Enter();
extern void WfcUsbIntro_Enter();
extern void WfcConnSelect_Update();

void WfcApSearch_WaitFadeIn();
void WfcApSearch_FadeIn();
void WfcApSearch_LoadBg();
void WfcApSearch_Enter();
void WfcConnSelect_HighlightSelection();
void WfcConnSelect_WaitDialogClosed();
void WfcConnSelect_EraseDialog();
void WfcConnSelect_PressEraseButton();
void WfcConnSelect_MoveCursor(u32 a);
void WfcConnSelect_DrawCursor();
void WfcConnSelect_Exit();

#define REGSET(a, v) do { u32 t = *(volatile u16 *)(a); t &= ~3; t |= (v); *(volatile u16 *)(a) = t; } while (0)

void WfcConnSelect_Exit() {
    s32 i;
    if (WfcFade_IsBusy(1) != 0) return;
    if (WfcFade_IsBusy(0) != 0) return;
    if (WfcHeader_IsSlideOutDone() == 0) return;
    if (WfcButtonBar_IsClosed() == 0) return;
    for (i = 0; (u32)i < 3; i++) {
        if (sWfcConnSelect->slotButtons[i] != 0) WfcObj_Free(sWfcConnSelect->slotButtons[i]);
    }
    for (i = 0; (u32)i < 3; i++) {
        if (sWfcConnSelect->eraseButtons[i] != 0) WfcObj_Free(sWfcConnSelect->eraseButtons[i]);
    }
    WfcCursor_Clear();
    WfcUtil_HideTopMessage();
    WfcFs_FreeFile(sWfcConnSelect->paletteFile);
    WfcUtil_LoadFileTo(data_ov001_0222b260, (void *)GX_LoadOBJPltt);
    WfcGx_HidePlanes(1, 1);
    WfcGx_HidePlanes(0, 0x14);
    if (sWfcConnSelect->exitAction == 2) {
        WfcUtil_SetScreenFlags(0, 0);
        WfcUtil_SetScene((void *)WfcTopMenu_Enter);
    } else {
        switch (sWfcConnSelectCursor) {
        case 0: case 1: case 2:
            WfcUtil_SetScreenFlags(2, 0);
            if (WfcConfig_GetEdit()[0xe7] == 0xff) {
                WfcUtil_SetScene((void *)WfcSetupMethod_Enter);
            } else {
                WfcUtil_SetEditParams(0, 0);
                WfcManualSetup_SetMode(0);
                WfcUtil_SetScene((void *)WfcManualSetup_Enter);
            }
            break;
        case 3:
            WfcUtil_SetScreenFlags(2, 1);
            WfcUtil_SetScene((void *)WfcUsbIntro_Enter);
            break;
        }
    }
    WfcHeap_FreeAndClear(&sWfcConnSelect);
}

void WfcConnSelect_DrawCursor() {
    u32 i = sWfcConnSelectCursor;
    if (i < 4) {
        WfcCursor_ShowCorners(*(u16 *)(A1B8 + (i << 3)), *(u16 *)(A1B8 + 4 + (i << 3)), *(u16 *)(A1B8 + 2 + (i << 3)), *(u16 *)(A1B8 + 6 + (i << 3)));
    } else {
        WfcCursor_ShowPair(0, *(u16 *)(A1B8 + (i << 3)), *(u16 *)(A1B8 + 4 + (i << 3)), *(u16 *)(A1B8 + 2 + (i << 3)));
    }
}

void WfcConnSelect_MoveCursor(u32 a) {
    u32 f = 1;
    switch (sWfcConnSelectCursor) {
    case 0:
        sWfcConnSelect->lastColumn = 0;
        if (a == 0) sWfcConnSelectCursor = 2;
        else if (a == 2) sWfcConnSelectCursor = 1;
        else if (a == 1) sWfcConnSelectCursor = 3;
        else sWfcConnSelectCursor = 4;
        break;
    case 1:
        sWfcConnSelect->lastColumn = 1;
        if (a == 0) sWfcConnSelectCursor = 0;
        else if (a == 2) sWfcConnSelectCursor = 2;
        else if (a == 1) sWfcConnSelectCursor = 3;
        else sWfcConnSelectCursor = 5;
        break;
    case 2:
        sWfcConnSelect->lastColumn = 2;
        if (a == 0) sWfcConnSelectCursor = 1;
        else if (a == 2) sWfcConnSelectCursor = 0;
        else if (a == 1) sWfcConnSelectCursor = 3;
        else sWfcConnSelectCursor = 6;
        break;
    case 3: {
        u32 t = sWfcConnSelect->lastColumn;
        u32 t4 = t + 4;
        if (a == 1) sWfcConnSelectCursor = t4;
        else if (a == 3) sWfcConnSelectCursor = t;
        else f = 0;
        break;
    }
    case 4:
        sWfcConnSelect->lastColumn = 0;
        if (a == 0) sWfcConnSelectCursor = 6;
        else if (a == 2) sWfcConnSelectCursor = 5;
        else if (a == 1) sWfcConnSelectCursor = 0;
        else sWfcConnSelectCursor = 3;
        break;
    case 5:
        sWfcConnSelect->lastColumn = 1;
        if (a == 0) sWfcConnSelectCursor = 4;
        else if (a == 2) sWfcConnSelectCursor = 6;
        else if (a == 1) sWfcConnSelectCursor = 1;
        else sWfcConnSelectCursor = 3;
        break;
    case 6:
        sWfcConnSelect->lastColumn = 2;
        if (a == 0) sWfcConnSelectCursor = 5;
        else if (a == 2) sWfcConnSelectCursor = 4;
        else if (a == 1) sWfcConnSelectCursor = 2;
        else sWfcConnSelectCursor = 3;
        break;
    }
    if (f == 0) return;
    WfcSound_Play(8);
    WfcConnSelect_DrawCursor();
}

void WfcConnSelect_PressEraseButton() {
    s32 i = sWfcConnSelectCursor - 4;
    WfcCell_Copy(0, 0x32, WfcObj_GetOam(sWfcConnSelect->eraseButtons[i], 0));
    WfcObj_SetPos(sWfcConnSelect->eraseButtons[i], -1, sWfcConnSelectButtonPos[(i + 3) * 2], (sWfcConnSelectButtonPos + 1)[(i + 3) * 2]);
    WfcObj_SetPriority(sWfcConnSelect->eraseButtons[i], -1, 3);
}

void WfcConnSelect_EraseDialog() {
    s32 i = sWfcConnSelectCursor - 4;
    s32 r = WfcDialog_GetResult();
    switch (r) {
    case 1:
        WfcSound_Play(14);
        WfcConfig_EraseSlot(i);
        WfcCell_Copy(0, sWfcConnSelectSlotCells[3], WfcObj_GetOam(sWfcConnSelect->slotButtons[i], 0));
        WfcObj_SetPos(sWfcConnSelect->slotButtons[i], -1, ((u16 (*)[2])sWfcConnSelectButtonPos)[i][0], ((u16 (*)[2])(sWfcConnSelectButtonPos + 1))[i][0]);
        WfcObj_SetPriority(sWfcConnSelect->slotButtons[i], -1, 3);
        WfcObj_Free(sWfcConnSelect->eraseButtons[i]);
        sWfcConnSelect->eraseButtons[i] = 0;
        break;
    case 0:
        WfcSound_Play(7);
        WfcCell_Copy(0, 0x11, WfcObj_GetOam(sWfcConnSelect->eraseButtons[i], 0));
        WfcObj_SetPos(sWfcConnSelect->eraseButtons[i], -1, sWfcConnSelectButtonPos[(i + 3) * 2], (sWfcConnSelectButtonPos + 1)[(i + 3) * 2]);
        WfcObj_SetPriority(sWfcConnSelect->eraseButtons[i], -1, 3);
        break;
    default:
        return;
    }
    WfcDialog_Close();
    WfcUtil_SetScene((void *)WfcConnSelect_WaitDialogClosed);
}

void WfcConnSelect_WaitDialogClosed() {
    if (WfcDialog_IsOpen() != 0) return;
    WfcButtonBar_EnableInput();
    WfcUtil_SetScene((void *)WfcConnSelect_Update);
}

void WfcConnSelect_HighlightSelection() {
    Unk_ov001_02219c3c_Q b = *(Unk_ov001_02219c3c_Q *)data_ov001_0222b240;
    Unk_ov001_02219c3c_Q c = *(Unk_ov001_02219c3c_Q *)data_ov001_0222b244;
    if (sWfcConnSelectCursor > 3) return;
    u32 v = b.b[sWfcConnSelectCursor];
    WfcUtil_RequestPaletteLine(sWfcConnSelect->paletteFile, v, v);
    if (sWfcConnSelectCursor == 3) return;
    s32 r = WfcConfig_GetSlotStatus();
    if (r > 2) r = 3;
    WfcObj_SetModePalette(sWfcConnSelect->slotButtons[sWfcConnSelectCursor], -1, 0, c.b[r]);
}

}
}
// Declarations for data defined further down (definition order sets the data layout)
extern "C" u8 data_ov001_0222b244[4];
extern "C" const s8 data_ov001_0222a160[8];
extern "C" const u16 sWfcConnSelectButtonPos[12];
extern "C" const u8 sWfcConnSelectSlotCells[4];
extern "C" const u16 sWfcConnSelectRects[28];
extern "C" const u16 sWfcConnSelectCursorPos[28];
extern "C" u8 data_ov001_0222b240[4];
extern "C" char data_ov001_0222b260[22];

extern "C" u8 data_ov001_0222b244[4] = {0xa, 9, 0xb, 6};

extern "C" const s8 data_ov001_0222a160[8] = {0x03, 0x2d, 0x27, 0x1d, 0x32, 0x30, 0, 0};

extern "C" const u16 sWfcConnSelectButtonPos[12] = {8, 0x30, 0x5a, 0x30, 0xac, 0x30, 0xc, 0x58, 0x5e, 0x58, 0xb0, 0x58};

extern "C" const u8 sWfcConnSelectSlotCells[4] = {0x13, 0x14, 0x12, 0x56};

extern "C" const u16 sWfcConnSelectCursorPos[28] = {6, 0x1e, 0x46, 0x48, 0x58, 0x1e, 0x98, 0x48, 0xaa, 0x1e, 0xea, 0x48, 6, 0x76, 0xea, 0x92, 9, 0x54, 0x43, 0x70, 0x5b, 0x54, 0x95, 0x70, 0xad, 0x54, 0xe7, 0x70};

extern "C" const u16 sWfcConnSelectRects[28] = {8, 0x20, 0x54, 0x56, 0x5a, 0x20, 0xa6, 0x56, 0xac, 0x20, 0xf8, 0x56, 8, 0x78, 0xf8, 0xa0, 8, 0x54, 0x54, 0x70, 0x5a, 0x54, 0xa6, 0x70, 0xac, 0x54, 0xf8, 0x70};

extern "C" u8 data_ov001_0222b240[4] = {3, 4, 5, 7};

extern "C" char data_ov001_0222b260[22] = "char/ybObjMain.ncl.l";

