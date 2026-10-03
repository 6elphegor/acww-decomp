#include "types.h"

class BgmSceneFade {
public:
    void onFadeIn();
    void onFadeOut();
};

struct Unk_02041104_Ent {
    void (*unk_00[4])();
};

struct Unk_021c3cc0 {
    u8 unk_00;
    u8 unk_01;
    u8 unk_02[2];
    s32 unk_04;
    s32 unk_08;
    s32 unk_0c;
    s32 unk_10;
};

extern "C" {
void ScreenFade_Begin();
void ScreenFade_End();
void ScreenFade_Update();
void ScreenFade_VBlank();
void IrisWipe_Begin();
void IrisWipe_End();
void IrisWipe_Update();
void IrisWipe_SwapTables();
void CutTransition_Begin();
void CutTransition_End();
void CutTransition_Update();
void CutTransition_VBlank();
}

extern const Unk_02041104_Ent sTransitionTypeTable[4];
const Unk_02041104_Ent sTransitionTypeTable[4] = {
    { { ScreenFade_Begin, ScreenFade_End, ScreenFade_Update, ScreenFade_VBlank } },
    { { ScreenFade_Begin, ScreenFade_End, ScreenFade_Update, ScreenFade_VBlank } },
    { { IrisWipe_Begin, IrisWipe_End, IrisWipe_Update, IrisWipe_SwapTables } },
    { { CutTransition_Begin, CutTransition_End, CutTransition_Update, CutTransition_VBlank } },
};

u8 data_021c3cb4;
u8 data_021c3cb8;
u16 *data_021c3cbc;
Unk_021c3cc0 gScreenTransition;
u8 sIrisWipeHBlankTask[0x1c];
u16 data_021c3cf0[0x60];
u16 data_021c3db0[0x60];

extern u32 data_021c1b3c;
extern volatile u32 gTownEval[];

extern "C" {
void MIi_CpuClear16(u32 v, u32 dst, u32 size);
}
static inline void Unk_02041104_Fill(u16 v, u32 dst, u32 size) {
    volatile u16 t = v;
    MIi_CpuClear16(t, dst, size);
}
extern "C" {
u32 G2_GetBG2ScrPtr();
u32 G2_GetBG2CharPtr();
u32 G2S_GetBG2ScrPtr();
u32 G2S_GetBG2CharPtr();
void Gfx2d_ShowMainPlanes(u32);
void Gfx2d_ShowSubPlanes(u32);
void Gfx2d_HideMainPlanes(u32);
void Gfx2d_HideSubPlanes(u32);
void func_0203d4c4(u32);
void func_0203d4c8(u32);
void Gfx2d_SetMainPlanes(u32);
void Gfx2d_SetSubPlanes(u32);
void Gfx2d_SetBrightness(s32);
s32 CommCaution_ArePlanesHidden();
s32 func_020e759c(void *, u32, s32);
s32 FX_Div(s32, s32);
void TransitionCommIcon_RequestHide(u32);
void TransitionCommIcon_RequestShow(u32);
void Snd_FadeOutScene();
s32 FX_Sqrt(s32);
void Gfx2d_DisableMainWindows(u32);
void Gfx2d_DisableSubWindows(u32);
void HBlank_Remove(void *);
s32 HBlank_Add(void *, void *, void *, u32);
void Gfx2d_EnableMainWindows(u32);
void Gfx2d_EnableSubWindows(u32);
void Gfx2d_SetMainWin0Planes(u32);
void Gfx2d_SetSubWin0Planes(u32, u32);
void Gfx2d_SetMainWinOutPlanes(u32);
void Gfx2d_SetSubWinOutPlanes(u32);
void Gfx2d_SetMainWin0Rect(u32, u32, u32, u32);
void Gfx2d_SetSubWin0Rect(u32, u32, u32, u32);
void ScreenTransition_ShowCover();
void ScreenTransition_OnHidden();
void ScreenTransition_HideCover();
void IrisWipe_SetupLayers();
void IrisWipe_VBlankRegs();
void IrisWipe_HBlank();
}

extern "C" void ScreenFade_Begin() {
    Unk_021c3cc0 *s = &gScreenTransition;
    if (s->unk_00 == 3) {
        s->unk_0c = 0;
    } else if (s->unk_01 == 0) {
        s->unk_0c = -16;
    } else {
        s->unk_0c = 16;
    }
    Gfx2d_SetBrightness(s->unk_0c);
}

extern "C" void ScreenFade_End() {}

extern "C" void ScreenFade_Update() {
    Unk_021c3cc0 *s = &gScreenTransition;
    if (s->unk_01 == 0) {
        s->unk_0c = -(s->unk_04 << 4) >> 12;
    } else {
        s->unk_0c = (s->unk_04 << 4) >> 12;
    }
}

extern "C" void ScreenFade_VBlank() {
    Gfx2d_SetBrightness(gScreenTransition.unk_0c);
}

extern "C" void IrisWipe_HBlank() {
    volatile u16 *r = (volatile u16 *)0x4000000;
    u32 line = r[3];
    if ((s32)line < 0xc0) {
        if ((s32)line >= 0x60) line = 0xbf - line;
        u16 v = data_021c3cbc[line];
        if (*(volatile u16 *)0x4000004 & 2) {
            *(volatile u16 *)((u8 *)r + 0x40) = v;
            *(volatile u16 *)((u8 *)r + 0x1040) = v;
        }
    }
}

extern "C" void IrisWipe_VBlankRegs() {
    *(volatile u16 *)0x4000040 = *data_021c3cbc;
    *(volatile u16 *)0x4001040 = *data_021c3cbc;
    *(volatile u16 *)0x4000044 = 0xc0;
    *(volatile u16 *)0x4001044 = 0xc0;
}

extern "C" void IrisWipe_SetupLayers() {
    volatile u16 *r;
    func_0203d4c8(0);
    Gfx2d_EnableMainWindows(1);
    Gfx2d_EnableSubWindows(1);
    Gfx2d_SetMainWin0Planes(0x1b);
    Gfx2d_SetSubWin0Planes(0x1b, 1);
    Gfx2d_SetMainWinOutPlanes(4);
    Gfx2d_SetSubWinOutPlanes(4);
    if (gScreenTransition.unk_04 == 0) {
        Gfx2d_SetMainWin0Rect(0, 0, 0xff, 0xc0);
        Gfx2d_SetSubWin0Rect(0, 0, 0xff, 0xc0);
    } else {
        Gfx2d_SetMainWin0Rect(0, 0, 0, 0);
        Gfx2d_SetSubWin0Rect(0, 0, 0, 0);
    }
    r = (volatile u16 *)0x400000c;
    *r &= ~3;
    *r = (*r & 0x43) | 0x600;
    Unk_02041104_Fill(0, G2_GetBG2ScrPtr(), 0x800);
    Unk_02041104_Fill(0x1111, G2_GetBG2CharPtr(), 0x20);
    Unk_02041104_Fill(0x8000, 0x5000000, 4);
    Gfx2d_ShowMainPlanes(4);
    r = (volatile u16 *)0x400100c;
    *r &= ~3;
    *r = (*r & 0x43) | 0xe04;
    Unk_02041104_Fill(0, G2S_GetBG2ScrPtr(), 0x800);
    Unk_02041104_Fill(0x1111, G2S_GetBG2CharPtr(), 0x20);
    Unk_02041104_Fill(0x8000, 0x5000400, 4);
    Gfx2d_ShowSubPlanes(4);
}

extern "C" void IrisWipe_Begin() {
    volatile u16 z = 0;
    MIi_CpuClear16(z, (u32)data_021c3cf0, 0x180);
    data_021c3cbc = data_021c3cf0;
    IrisWipe_SetupLayers();
    if (HBlank_Add(sIrisWipeHBlankTask, (void *)IrisWipe_HBlank, (void *)IrisWipe_VBlankRegs, 0) != 0) {
        data_021c3cb4 |= 1;
    }
    if (gScreenTransition.unk_04 == 0x1000) Gfx2d_SetBrightness(0);
}

extern "C" void IrisWipe_End() {
    Gfx2d_DisableMainWindows(1);
    Gfx2d_DisableSubWindows(1);
    if (data_021c3cb4 & 1) {
        HBlank_Remove(sIrisWipeHBlankTask);
        data_021c3cb4 &= ~1;
    }
    Gfx2d_HideMainPlanes(4);
    Gfx2d_HideSubPlanes(4);
    func_0203d4c4(0);
}

extern "C" void IrisWipe_Update() {
    u16 *p;
    u16 t;
    Unk_021c3cc0 *s = &gScreenTransition;
    if (data_021c3cb4 & 2) p = data_021c3cf0; else p = data_021c3db0;
    s32 v = s->unk_04;
    if (v == 0) {
        volatile u16 c = 0xff;
        MIi_CpuClear16(c, (u32)p, 0xc0);
    } else if (v == 0x1000) {
        volatile u16 c = 0x8080;
        MIi_CpuClear16(c, (u32)data_021c3cf0, 0x180);
    } else {
        s32 h = ((0x1000 - v) * 160) >> 12;
        s32 h2 = (h * h) << 12;
        for (s32 i = 0; i < 0x60; p++, i++) {
            s32 d = 0x60 - i;
            if (d > h) {
                *p = 0x8080;
            } else {
                s32 r = FX_Sqrt(h2 - ((d * d) << 12));
                if (r < 0x80000) {
                    s32 x = (0x80 - (r >> 12)) & 0xffff;
                    *p = ((x << 8) & 0xff00) | ((0x100 - x) & 0xff);
                } else {
                    *p = 0xff;
                }
            }
        }
    }
}

extern "C" void IrisWipe_SwapTables() {
    u32 v = data_021c3cb4;
    if (v & 2) {
        data_021c3cbc = data_021c3cf0;
        v &= ~2;
        data_021c3cb4 = v;
    } else {
        data_021c3cbc = data_021c3db0;
        v |= 2;
        data_021c3cb4 = v;
    }
}

extern "C" void CutTransition_Begin() {
    Gfx2d_SetBrightness(0);
}

extern "C" void CutTransition_End() {}

extern "C" void CutTransition_Update() {}

extern "C" void CutTransition_VBlank() {}

extern "C" void ScreenTransition_Init() {
    gScreenTransition.unk_00 = 0;
    gScreenTransition.unk_01 = 0;
    gScreenTransition.unk_0c = -16;
    gScreenTransition.unk_04 = 0x1000;
    gScreenTransition.unk_08 = 0;
    data_021c3cbc = 0;
    data_021c3cb4 = 0;
}

extern "C" BOOL ScreenTransition_StartFadeOut(u32 a, u32 b) {
    u32 old = gScreenTransition.unk_01;
    BOOL ok;
    if (gScreenTransition.unk_00 == 2) ok = TRUE; else ok = FALSE;
    if (!ok && data_021c3cb8 == 0) return FALSE;
    gScreenTransition.unk_00 = 3;
    data_021c3cb8 = 0;
    void (*fn)() = sTransitionTypeTable[old].unk_00[1];
    if (fn) fn();
    gScreenTransition.unk_01 = a;
    gScreenTransition.unk_04 = 0;
    fn = sTransitionTypeTable[a].unk_00[0];
    if (fn) {
        fn();
        ((BgmSceneFade *)(data_021c1b3c + 0x2d0))->onFadeOut();
        TransitionCommIcon_RequestShow(a);
        if (a == 2) Snd_FadeOutScene();
    }
    if (b == 0 || a == 3) {
        gScreenTransition.unk_08 = 0x1000;
    } else {
        gScreenTransition.unk_08 = FX_Div(0x1000, b << 12);
    }
    return TRUE;
}

extern "C" BOOL ScreenTransition_StartFadeIn(u32 a, u32 b, u32 c) {
    BOOL ok;
    if (gScreenTransition.unk_00 == 0) ok = TRUE; else ok = FALSE;
    if (!ok) return FALSE;
    ScreenTransition_HideCover();
    gScreenTransition.unk_00 = 1;
    gScreenTransition.unk_01 = a;
    gScreenTransition.unk_04 = 0x1000;
    void (*fn)() = sTransitionTypeTable[a].unk_00[0];
    if (fn) fn();
    if (b == 0 || a == 3) {
        gScreenTransition.unk_08 = -0x1000;
    } else {
        gScreenTransition.unk_08 = FX_Div(-0x1000, b << 12);
    }
    if (c == 0) {
        ((BgmSceneFade *)(data_021c1b3c + 0x2d0))->onFadeIn();
        TransitionCommIcon_RequestHide(a);
    }
    return TRUE;
}

extern "C" void ScreenTransition_Update() {
    if (CommCaution_ArePlanesHidden() != 0) return;
    u32 idx = gScreenTransition.unk_01;
    u32 st = gScreenTransition.unk_00;
    if (st == 0 || st == 2) return;
    s32 v = gScreenTransition.unk_08;
    if (v != 0) {
        u32 a = v >= 0 ? 0x1000 : 0;
        if (v < 0) v = -v;
        if (func_020e759c(&gScreenTransition.unk_04, a, v) != 0) {
            gScreenTransition.unk_08 = 0;
        }
    }
    void (*fn)() = sTransitionTypeTable[idx].unk_00[2];
    if (fn) fn();
}

extern "C" void ScreenTransition_VBlank() {
    if (CommCaution_ArePlanesHidden() != 0) return;
    Unk_021c3cc0 *s = &gScreenTransition;
    u32 idx = s->unk_01;
    u32 st = s->unk_00;
    if (st == 2 || st == 0) return;
    void (*fn)() = sTransitionTypeTable[idx].unk_00[3];
    if (fn) fn();
    if (gScreenTransition.unk_00 == 1) {
        if (gScreenTransition.unk_08 != 0) return;
        gScreenTransition.unk_00 = 2;
        fn = sTransitionTypeTable[idx].unk_00[1];
        if (fn) fn();
    } else if (gScreenTransition.unk_00 == 3) {
        if (gScreenTransition.unk_08 != 0) return;
        gScreenTransition.unk_00 = 0;
        fn = sTransitionTypeTable[idx].unk_00[1];
        if (fn) fn();
        ScreenTransition_OnHidden();
    }
}

extern "C" void ScreenTransition_OnHidden() {
    func_0203d4c8(0);
    Gfx2d_SetMainPlanes(0x10);
    Gfx2d_SetSubPlanes(0);
    ScreenTransition_ShowCover();
    Gfx2d_SetBrightness(-16);
}

extern "C" void ScreenTransition_HideCover() {
    Gfx2d_HideMainPlanes(4);
    Gfx2d_HideSubPlanes(4);
    func_0203d4c4(0);
}

