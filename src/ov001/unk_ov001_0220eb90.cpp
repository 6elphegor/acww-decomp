// mwcc-flags: -O4,p
#include "types.h"

#pragma thumb off

struct Unk_ov001_0220ebc4_Pos { u16 v0; u16 v2; u16 v4; u16 v6; };
struct Unk_ov001_0220f164_Reg { u32 w0; u16 h4; };
struct Unk_ov001_0220f164_Cp { u8 v[0x16]; };
struct Unk_ov001_0220f164_Cq { u8 v[0x17]; };
struct Unk_ov001_0220f164_Buf { u8 a[0x16]; u8 b[0x17]; u64 t; u32 pad[4]; };
extern "C" const u16 data_ov001_02229fc4[2];
extern "C" const Unk_ov001_0220ebc4_Pos data_ov001_02229fc8[3];
extern "C" const u8 data_ov001_02229fe0[24];
extern "C" const u8 data_ov001_02229fc0[3];
#define data_ov001_02229fe2 (data_ov001_02229fe0 + 2)
#define data_ov001_02229fe4 (data_ov001_02229fe0 + 4)
#define data_ov001_02229fe6 (data_ov001_02229fe0 + 6)

extern "C" {
u8 sWfcOptionsChosen;
void *sWfcOptionsPalette;
u8 sWfcOptionsSel;
Unk_ov001_0220f164_Reg *sWfcOptionsSprite;
}

#define BGCNT(a) (*(volatile u16 *)(a) = (*(volatile u16 *)(a) & ~3) | 3)

extern "C" {
void GX_LoadBG2Scr(void);
void GX_LoadBG2Char(void);
s32 WfcUtil_LoadFileTo(void *, void *);
void *WfcUtil_LocalizePath(void *);
void WfcCursor_ShowCorners(u32, u32, u32, u32);
s32 WfcFade_IsBusy(s32);
s32 WfcHighlight_Set(s32);
s32 WfcUtil_ShowTopMessage(s32, s32, s32);
void WfcSysInfo_DrawInfo();
void WfcUtil_SetScene(void *);
s32 WfcUtil_RequestPaletteLine(void *, u32, u32);
s32 FX_ModS32(s32, s32);
void WfcSound_Play(s32);
s32 WfcButtonBar_IsClosed();
void WfcOam_FreeEntry(void *);
void WfcCursor_Clear();
void WfcUtil_HideTopMessage();
void WfcFs_FreeFile(void *);
void WfcGx_HidePlanes(s32, s32);
void WfcGx_ShowPlanes(s32, s32);
void WfcUtil_SetScreenFlags(s32, s32);
void WfcTopMenu_Enter();
void WfcErase_Enter();
void WfcTransferIntro_Enter();
void WfcButtonBar_Close();
void WfcFade_Start(s32, s32, s32, s32);
void WfcButtonBar_DisableInput();
void WfcFade_StartWait(s32);
s32 WfcButtonBar_GetResult();
void func_020ff0bc(void *);
void WfcButtonBar_ForceResult(s32);
void WfcOptions_HighlightSelection();
s32 WfcInput_IsTouchPressedIn(void *);
void WfcButtonBar_SetResult(s32);
s32 WfcInput_IsKeyPressed(s32);
s32 WfcInput_IsKeyRepeat(s32);
void WfcButtonBar_EnableInput();
void WfcUtil_OpenButtonBar(s32);
void *WfcFs_LoadFile(void *, s32, s32);
void MI_CpuCopy8(void *, void *, s32);
void DC_FlushRange(void *, s32);
void GX_LoadBGPltt(void *, s32, s32);
Unk_ov001_0220f164_Reg *WfcObj_CreateSingle(s32, s32);
s32 WfcTop_LoadScreen(s32);
void WfcSysInfo_FadeIn();
void WfcSysInfo_Enter();
void WfcOptions_Exit();
void WfcOptions_FadeOut();
void WfcOptions_StartExit();
void WfcOptions_HandleResult();
void WfcOptions_Update();
void WfcOptions_WaitButtonBar();
void WfcOptions_WaitFadeIn();
void WfcOptions_FadeIn();
void WfcOptions_MoveCursor(s32);
void WfcOptions_Idle();
void WfcOptions_HandleInput();
void WfcOptions_LoadBg();
void WfcOptions_Enter();
}

extern "C" void WfcOptions_Enter() {
    sWfcOptionsChosen = 0;
    WfcOptions_LoadBg();
    WfcHighlight_Set(0x10);
    WfcTop_LoadScreen(3);
    WfcUtil_ShowTopMessage(0x88, -1, 0);
    sWfcOptionsSprite = WfcObj_CreateSingle(0, 0x5b);
    sWfcOptionsSprite->w0 = (sWfcOptionsSprite->w0 & 0xfe00ff00) | (data_ov001_02229fc4[1] & 0xff) | ((data_ov001_02229fc4[0] & 0x1ff) << 16);
    sWfcOptionsSprite->h4 = (sWfcOptionsSprite->h4 & ~0xc00) | 0xc00;
    WfcCursor_ShowCorners(*(const u16 *)(data_ov001_02229fe0 + (sWfcOptionsSel << 3)), *(const u16 *)(data_ov001_02229fe4 + (sWfcOptionsSel << 3)), *(const u16 *)(data_ov001_02229fe2 + (sWfcOptionsSel << 3)), *(const u16 *)(data_ov001_02229fe6 + (sWfcOptionsSel << 3)));
    WfcUtil_SetScene((void *)WfcOptions_FadeIn);
}

extern "C" void WfcOptions_LoadBg() {
    Unk_ov001_0220f164_Buf buf;
    u8 *d, *s;
    s32 i;
    u8 *e;
    u8 *src;
    src = (u8 *)"char/ybBgOption.ncl.l";
    *(Unk_ov001_0220f164_Cp *)buf.a = *(Unk_ov001_0220f164_Cp *)src;
    *(Unk_ov001_0220f164_Cq *)buf.b = *(Unk_ov001_0220f164_Cq *)"char/ybBgOption1.ncl.l";
    WfcUtil_LoadFileTo((void *)"char/jbBgOption.ncg.l", (void *)GX_LoadBG2Char);
    WfcUtil_LoadFileTo((void *)"char/jb5OptMenu.nsc.l", (void *)GX_LoadBG2Scr);
    sWfcOptionsPalette = WfcFs_LoadFile(WfcUtil_LocalizePath(buf.b), 0, 4);
    e = (u8 *)WfcFs_LoadFile(WfcUtil_LocalizePath(buf.a), 0, 4);
    func_020ff0bc(&buf.t);
    if (buf.t == 0) {
        d = e + 0xc0;
        s = e + 0x40;
        for (i = 0; i < 2; i++) {
            MI_CpuCopy8(d, s, 0x20);
            d += 0x20;
            s += 0x20;
        }
    }
    DC_FlushRange(e, 0x200);
    GX_LoadBGPltt(e, 0, 0x200);
    WfcFs_FreeFile(e);
    BGCNT(0x4001008);
    BGCNT(0x400100a);
    BGCNT(0x400000a);
    BGCNT(0x400000c);
}

extern "C" void WfcOptions_FadeIn() {
    WfcFade_Start(2, 1, 1, 8);
    WfcFade_Start(2, 0, 0x14, 8);
    WfcGx_ShowPlanes(1, 1);
    WfcGx_ShowPlanes(0, 0x14);
    WfcUtil_SetScene((void *)WfcOptions_WaitFadeIn);
}

extern "C" void WfcOptions_WaitFadeIn() {
    if (WfcFade_IsBusy(1) != 0) return;
    if (WfcFade_IsBusy(0) != 0) return;
    WfcUtil_OpenButtonBar(0);
    WfcUtil_SetScene((void *)WfcOptions_WaitButtonBar);
}

extern "C" void WfcOptions_WaitButtonBar() {
    if (WfcButtonBar_GetResult() == -2) return;
    WfcButtonBar_EnableInput();
    WfcUtil_SetScene((void *)WfcOptions_Update);
}

extern "C" void WfcOptions_Update() {
    WfcOptions_HandleInput();
    WfcOptions_Idle();
    WfcOptions_HandleResult();
}

extern "C" void WfcOptions_HandleInput() {
    u32 i;
    const Unk_ov001_0220ebc4_Pos *q = data_ov001_02229fc8;
    for (i = 0; i < 3; i++, q++) {
        if (WfcInput_IsTouchPressedIn((void *)q) != 0) {
            WfcButtonBar_SetResult(1);
            sWfcOptionsSel = i;
            WfcCursor_ShowCorners(*(const u16 *)(data_ov001_02229fe0 + (sWfcOptionsSel << 3)), *(const u16 *)(data_ov001_02229fe4 + (sWfcOptionsSel << 3)), *(const u16 *)(data_ov001_02229fe2 + (sWfcOptionsSel << 3)), *(const u16 *)(data_ov001_02229fe6 + (sWfcOptionsSel << 3)));
            return;
        }
    }
    if (WfcInput_IsKeyPressed(1) != 0) {
        WfcButtonBar_SetResult(1);
    } else if (WfcInput_IsKeyPressed(2) != 0) {
        WfcButtonBar_SetResult(0);
    } else if (WfcInput_IsKeyRepeat(0x40) != 0) {
        WfcOptions_MoveCursor(1);
    } else if (WfcInput_IsKeyRepeat(0x80) != 0) {
        WfcOptions_MoveCursor(3);
    }
}

extern "C" void WfcOptions_Idle() {}

extern "C" void WfcOptions_HandleResult() {
    u64 t[2];
    switch (WfcButtonBar_GetResult()) {
    case 0:
        WfcSound_Play(7);
        break;
    case 1:
        func_020ff0bc(&t[0]);
        if (sWfcOptionsSel != 0 && t[0] == 0) {
            WfcSound_Play(9);
            WfcButtonBar_ForceResult(-1);
            return;
        }
        WfcSound_Play(6);
        WfcOptions_HighlightSelection();
        sWfcOptionsChosen = 1;
        break;
    default:
        return;
    }
    WfcUtil_SetScene((void *)WfcOptions_StartExit);
}

extern "C" void WfcOptions_StartExit() {
    WfcButtonBar_DisableInput();
    WfcFade_StartWait(8);
    WfcUtil_SetScene((void *)WfcOptions_FadeOut);
}

extern "C" void WfcOptions_FadeOut() {
    if (WfcFade_IsBusy(1) != 0) return;
    if (sWfcOptionsChosen != 0) {
        WfcButtonBar_Close();
    }
    WfcFade_Start(3, 1, 1, 8);
    WfcFade_Start(3, 0, 0x14, 8);
    WfcUtil_SetScene((void *)WfcOptions_Exit);
}// Declarations for data defined further down (definition order sets the data layout)

extern "C" const u16 data_ov001_02229fc4[2] = {0x00e0, 0x0084};

extern "C" const Unk_ov001_0220ebc4_Pos data_ov001_02229fc8[3] = {{0x0008, 0x0024, 0x00f8, 0x0044}, {0x0008, 0x0050, 0x00f8, 0x0070}, {0x0008, 0x007c, 0x00f8, 0x009c}};

extern "C" const u8 data_ov001_02229fe0[24] = {0x06, 0x00, 0x22, 0x00, 0xea, 0x00, 0x36, 0x00, 0x06, 0x00, 0x4e, 0x00, 0xea, 0x00, 0x62, 0x00, 0x06, 0x00, 0x7a, 0x00, 0xea, 0x00, 0x8e, 0x00};

extern "C" void WfcOptions_Exit() {
    if (WfcFade_IsBusy(1) != 0) return;
    if (WfcFade_IsBusy(0) != 0) return;
    if (WfcButtonBar_IsClosed() == 0) return;
    WfcOam_FreeEntry(sWfcOptionsSprite);
    WfcCursor_Clear();
    WfcUtil_HideTopMessage();
    WfcFs_FreeFile(sWfcOptionsPalette);
    WfcGx_HidePlanes(1, 1);
    WfcGx_HidePlanes(0, 0x14);
    if (sWfcOptionsChosen == 0) {
        WfcUtil_SetScreenFlags(0, 0);
        WfcUtil_SetScene((void *)WfcTopMenu_Enter);
        return;
    }
    switch (sWfcOptionsSel) {
    case 0:
        WfcUtil_SetScreenFlags(0, 1);
        WfcUtil_SetScene((void *)WfcSysInfo_Enter);
        return;
    case 1:
        WfcUtil_SetScreenFlags(0, 1);
        WfcUtil_SetScene((void *)WfcErase_Enter);
        return;
    case 2:
        WfcUtil_SetScreenFlags(0, 1);
        WfcUtil_SetScene((void *)WfcTransferIntro_Enter);
        return;
    }
}

extern "C" void WfcOptions_MoveCursor(s32 a) {
    if (a == 1) {
        sWfcOptionsSel = FX_ModS32(sWfcOptionsSel + 2, 3);
    } else {
        sWfcOptionsSel = FX_ModS32(sWfcOptionsSel + 1, 3);
    }
    WfcSound_Play(8);
    WfcCursor_ShowCorners(*(const u16 *)(data_ov001_02229fe0 + (sWfcOptionsSel << 3)), *(const u16 *)(data_ov001_02229fe4 + (sWfcOptionsSel << 3)), *(const u16 *)(data_ov001_02229fe2 + (sWfcOptionsSel << 3)), *(const u16 *)(data_ov001_02229fe6 + (sWfcOptionsSel << 3)));
}

extern "C" void WfcOptions_HighlightSelection() {
    u32 b = data_ov001_02229fc0[sWfcOptionsSel];
    WfcUtil_RequestPaletteLine(sWfcOptionsPalette, b, b);
}

extern "C" const u8 data_ov001_02229fc0[3] = {1, 2, 3};

