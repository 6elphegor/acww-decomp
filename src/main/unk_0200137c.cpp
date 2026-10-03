#include "types.h"

typedef volatile u16 vu16;
typedef volatile u32 vu32;

struct Unk_02000fc0_Col {
    u16 unk_00;
    u16 unk_02;
};

struct Unk_02000fc0_Node {
    u8 pad_00[0x68];
    Unk_02000fc0_Node *unk_68;
    u32 unk_6c;
};

struct Unk_02000fc0_Cfg {
    u8 pad_00[0x0c];
    u16 unk_0c;
};

struct Unk_02000fc0_Ptr {
    u8 pad_00[8];
    Unk_02000fc0_Cfg *unk_08;
};

struct Unk_02000fc0_Ctx {
    u8 pad_00[0x38];
    u32 unk_38;
};

struct Unk_02000fc0_Thr {
    u8 pad_00[0x6c];
    u32 unk_6c;
    u8 pad_70[0x20];
    u32 unk_90;
    u32 unk_94;
    u32 unk_98;
};

extern "C" {
extern u8 sCrashScreenState;
}

extern "C" {
extern u32 sCrashPrevKeys;
}

extern "C" {
extern u32 sCrashPC;
}

extern "C" {
extern u32 sCrashScreenMain;
}

extern "C" {
extern u32 sCrashTimeMs;
}

extern "C" {
extern u32 sCrashSP;
}

extern "C" {
extern u32 sCrashScreenSub;
}

extern "C" {
extern u32 *sCrashContext;
}

extern "C" {
extern const char *sPanicMessage;
}

extern "C" {
extern u32 sPanicLine;
}

extern "C" {
extern u32 sPanicFile;
}

extern "C" {
extern u32 gTaskPhase;
}

extern "C" {
extern u32 gRootHeap;
}

extern "C" {
extern u32 gCurrentHeap;
}

extern "C" {
extern u32 gProcHeap;
}

extern "C" {
extern Unk_02000fc0_Ptr *gTaskCurrentNode;
}

extern "C" {
extern u16 gProcCreateProfile;
}

extern "C" {
extern u8 gProcCreateStep;
}

extern "C" {
extern Unk_02000fc0_Thr *data_021fcc2c[3];
}

extern "C" {
extern u32 data_021fce88;
}

extern "C" {
extern char data_02135f44[];
}

extern "C" {
extern char sCrashFmtTimeMs[], sCrashFmtLoopProc[], sCrashFmtProfStep[], sCrashFmtRegister[], sCrashFmtSpsr[], sCrashFmtCp15[],
    sCrashFmtSp[], sCrashFmtPc4[], sCrashFmtPanicPos[], sCrashFmtThread[], sCrashFmtStackRange[], sCrashFmtIrqStackErr[],
    sCrashFmtStackErr[], sCrashFmtStackPtr[], sCrashFmtWord[], sCrashEmptyStr[], gBuildTime[], sCrashRegNames[];
}

extern "C" {
extern u16 sCrashFontChars[], sCrashFontPalette[];
}

extern "C" {
void CrashScreen_Frame(void);
}

extern "C" {
void CrashScreen_Fill(u32 a, u32 b, u32 c);
}

extern "C" {
void CrashScreen_WaitVBlank(void);
}

extern "C" {
void CrashScreen_InitDisplay(void);
}

extern "C" {
void CrashScreen_Clear(void);
}

extern "C" {
void CrashScreen_DrawMain(void);
}

extern "C" {
void CrashScreen_DrawStack(void);
}

extern "C" {
BOOL CrashScreen_IsValidAddress(u32 addr, u32 len);
}

extern "C" {
void CrashScreen_DumpWords(u8 *dst, u32 src, u32 size);
}

extern "C" {
void Fatal_PanicV(const char *a, u32 b, const char *c, void *d);
}

extern "C" {
u64 OS_GetTick(void);
}

extern "C" {
u32 OS_GetProcMode(void);
}

extern "C" {
void OS_DisableInterrupts(void);
}

extern "C" {
void Gfx_ResetDisplayRegs(void);
}

extern "C" {
void GX_SetBankForBG(u32 a);
}

extern "C" {
void GX_SetBankForSubBG(u32 a);
}

extern "C" {
void GX_LoadBG1Char(void *a, u32 b, u32 c);
}

extern "C" {
void GXS_LoadBG1Char(void *a, u32 b, u32 c);
}

extern "C" {
void GX_LoadBGPltt(void *a, u32 b, u32 c);
}

extern "C" {
void GXS_LoadBGPltt(void *a, u32 b, u32 c);
}

extern "C" {
u32 G2_GetBG1ScrPtr(void);
}

extern "C" {
u32 G2S_GetBG1ScrPtr(void);
}

extern "C" {
void GX_DispOn(void);
}

extern "C" {
void MIi_CpuClearFast(u32 a);
}

extern "C" {
void DebugText_Printf(Unk_02000fc0_Col *c, u8 *dst, const char *fmt, ...);
}

extern "C" {
void DebugText_Print(Unk_02000fc0_Col *c, u8 *dst, const char *fmt);
}

extern "C" {
u32 Task_GetPhaseName(u32 a);
}

extern "C" {
u32 func_021122b0(void);
}

extern "C" {
u32 func_02113438(Unk_02000fc0_Node *a);
}

extern "C" {
void func_020e8b38(u32 a);
}

extern "C" {
void BlockMap_DebugStub(void);
}

extern "C" {
u8 *OS_GetDTCMAddress(void);
}

extern "C" {
void G2x_SetBlendBrightnessExt_(u32 a, u32 b, u32 c, u32 d, u32 e, u32 f);
}

extern "C" {
void OS_VSNPrintf(const char *a, u32 b, const char *c, void *d);
}

extern "C" {
s32 Fatal_Trap(void);
}

extern "C" {
u32 func_02132ef8(u64 a, u64 b);
}

struct Unk_0200153c {
    s32 unk_00, unk_04, unk_08, unk_0c;
    u8 unk_10, unk_11;
    u16 unk_12;
    u8 unk_14, unk_15, unk_16, unk_17, unk_18, unk_19, unk_1a, unk_1b, unk_1c, unk_1d, unk_1e, unk_1f;
};

struct Unk_02001608 {
    u8 unk_00, unk_01, unk_02, unk_03, unk_04, unk_05, unk_06, unk_07, unk_08, unk_09, unk_0a, unk_0b, unk_0c, unk_0d,
        unk_0e, unk_0f, unk_10, unk_11, unk_12, unk_13;
    s8 unk_14;
    u8 unk_15;
    u8 pad_16[2];
};

struct Unk_02001804 {
    u16 unk_00, unk_02, unk_04, unk_06;
    s32 unk_08[4];
    s32 unk_18, unk_1c, unk_20, unk_24;
    s32 unk_28[4];
    s32 unk_38, unk_3c, unk_40, unk_44;
    u16 unk_48, unk_4a, unk_4c, unk_4e;
    s32 unk_50[4];
    s32 unk_60, unk_64, unk_68, unk_6c;
};

struct Unk_020017a4 {
    u16 unk_00, unk_02, unk_04, unk_06, unk_08, unk_0a, unk_0c, unk_0e;
};

struct Unk_02001844 {
    u8 unk_00, unk_01, unk_02, unk_03, unk_04;
};

struct Unk_02001858 {
    s32 unk_00, unk_04, unk_08, unk_0c, unk_10, unk_14, unk_18, unk_1c;
};

struct Unk_02001874 {
    u16 unk_00, unk_02;
};

extern "C" {
u32 GXS_SetGraphicsMode(u32 a);
}

extern "C" {
u32 GX_SetGraphicsMode(u32 a, u32 b, u32 c);
}

extern "C" {
void G3X_SetHOffset(u32 a);
}

extern "C" {
void G2x_SetBGyAffine_(u32 reg, void* mtx, s32 a, s32 b, s32 c, s32 d);
}

extern "C" {
void G2x_SetBlendBrightnessExt_(u32 reg, u32 a, u32 b, u32 c, u32 d, u32 e);
}

extern "C" {
void G2x_SetBlendAlpha_(u32 reg, u32 a, s32 b, u32 c, u32 d);
}

extern "C" {
void G2x_SetBlendBrightness_(u32 reg, u32 a, s32 b);
}

extern "C" {
void GX_LoadBGPltt(void *p, u32 a, u32 b);
}

extern "C" {
void GXS_LoadBGPltt(void *p, u32 a, u32 b);
}

extern "C" {
void MI_CpuCopy8(const void *src, void *dst, u32 size);
}

extern "C" {
void *File_LoadAlloc(u32 a, u32 b, s32 c, s32 *out);
}

extern "C" {
void Heap_Free(u32 a, void *b);
}

extern "C" {
void DC_FlushRange(void *p, u32 size);
}

extern "C" {
void GX_LoadBG2Char(void *a, u32 b, u32 c);
}

extern "C" {
void GX_LoadBG3Char(void *a, u32 b, u32 c);
}

extern "C" {
void GXS_LoadBG0Char(void *a, u32 b, u32 c);
}

extern "C" {
void GXS_LoadBG2Char(void *a, u32 b, u32 c);
}

extern "C" {
void GXS_LoadBG3Char(void *a, u32 b, u32 c);
}

extern "C" {
void GX_LoadOBJ(void *a, u32 b, u32 c);
}

extern "C" {
void GXS_LoadOBJ(void *a, u32 b, u32 c);
}

extern "C" {
void GX_LoadBG1Scr(void *a, u32 b, u32 c);
}

extern "C" {
void GX_LoadBG2Scr(void *a, u32 b, u32 c);
}

extern "C" {
void GX_LoadBG3Scr(void *a, u32 b, u32 c);
}

extern "C" {
void GXS_LoadBG0Scr(void *a, u32 b, u32 c);
}

extern "C" {
void GXS_LoadBG1Scr(void *a, u32 b, u32 c);
}

extern "C" {
void GXS_LoadBG2Scr(void *a, u32 b, u32 c);
}

extern "C" {
void GXS_LoadBG3Scr(void *a, u32 b, u32 c);
}

extern "C" {
void GX_LoadOBJPltt(void *a, u32 b, u32 c);
}

extern "C" {
void GXS_LoadOBJPltt(void *a, u32 b, u32 c);
}

u8 sGfx2dBackdropColor[4];
Unk_02001804 sGfx2dBgScroll;
u8 sGfx2dSubBg3Mtx[0x10];
Unk_0200153c sGfx2dDispCtrl;
Unk_02001608 sGfx2dWindowBlend;

// prototypes
extern "C" s32 Gfx2d_GetLayerBgIndex(u32 n);
extern "C" s32 Gfx2d_GetLayerPlaneMask(u32 n);
extern "C" s32 Gfx2d_GetLayerBlendMask(u32 n);
extern "C" s32 Gfx2d_LoadPaletteFile(u32 p0, u32 p1, u32 p2, s32 p3, u8 e, u8 f);
extern "C" s32 Gfx2d_LoadPaletteFileSlot(u32 p0, u32 p1, u32 p2, s32 p3, u8 e);
extern "C" s32 Gfx2d_LoadScreenFile(u32 p0, u32 p1, u32 p2);
extern "C" s32 Gfx2d_LoadCharFile(u32 p0, u32 p1, u32 p2, s32 p3, s32 e, s32 f);
extern "C" s32 Gfx2d_LoadCharFile8bpp(u32 p0, u32 p1, u32 p2, s32 p3, s32 a, s32 b);
extern "C" s32 Gfx2d_LoadPaletteRange(u8 *dst, u32 n, s32 a, s32 b, u8 c);
extern "C" s32 Gfx2d_LoadScreen(u8 *dst, u32 n, s32 size, s32 x);
extern "C" s32 Gfx2d_LoadCharRange(u8 *dst, u32 n, s32 a, s32 b, s32 c);
extern "C" void Gfx2d_SetLayerPriority(u32 n, u32 v);
extern "C" void Gfx2d_SetLayerControl(u32 n, u32 a, u32 b, u32 c);
extern "C" void Gfx2d_SetLayerOffset(u32 n, u32 a, u32 b);
extern "C" void Gfx2d_SetWindowRect(u32 n, u32 a, u32 b, u32 c, u32 d);
extern "C" void Gfx2d_ResetLayer(u32 n);
extern "C" void Gfx2d_HideLayer(u32 n);
extern "C" void Gfx2d_ShowLayer(u32 n);
extern "C" void Gfx2d_LinearToTiles4bppBytes(u8 *src, u8 *dst, s32 w, s32 h);
extern "C" void Gfx2d_TilesInRow32ToLinear(u32 *src, u32 *dst, s32 x, s32 w, s32 h);
extern "C" void Gfx2d_LinearToTilesInRow32(u32 *src, u32 *dst, s32 x, s32 w, s32 h);
extern "C" void Gfx2d_LinearToTiles4bpp(u32 *src, u32 *dst, s32 w, s32 h);
extern "C" void Gfx2d_TilesToLinear4bpp(u32 *src, u32 *dst, s32 w, s32 h);
extern "C" void Gfx2d_LoadBackdropColor(void);
extern "C" void Gfx2d_ResetState();
extern "C" void Gfx2d_BeginFrame();
extern "C" void Gfx2d_ApplyDisplayControl();
extern "C" void Gfx2d_FlushRegisters();
extern "C" void Gfx2d_InitBgOffset(Unk_02001874* p);
extern "C" void Gfx2d_InitBgAffine(Unk_02001858* p);
extern "C" void Gfx2d_InitWindowRect(Unk_02001844* p);
extern "C" void Gfx2d_SetMainBg1Offset(u32 a, u32 b);
extern "C" void Gfx2d_SetMainBg2Offset(s32 a, s32 b);
extern "C" void Gfx2d_SetMainBg3Offset(s32 a, s32 b);
extern "C" void Gfx2d_SetSubBg0Offset(u32 a, u32 b);
extern "C" void Gfx2d_SetSubBg1Offset(u32 a, u32 b);
extern "C" void Gfx2d_SetSubBg2Offset(s32 a, s32 b);
extern "C" void Gfx2d_SetSubBg3Offset(s32 a, s32 b);
extern "C" void Gfx2d_SetMainWin0Planes(u32 a);
extern "C" void Gfx2d_SetMainWin1Planes(u32 a);
extern "C" void Gfx2d_SetSubWin0Planes(u32 a, BOOL b);
extern "C" void Gfx2d_SetSubWin1Planes(u32 a, BOOL b);
extern "C" void Gfx2d_MarkSubWin0PlanesDirty(BOOL a);
extern "C" void Gfx2d_MarkSubWin1PlanesDirty(BOOL a);
extern "C" void Gfx2d_SetMainWinOutPlanes(u32 a);
extern "C" void Gfx2d_RemoveMainWinOutPlanes(u32 a);
extern "C" void Gfx2d_SetSubWinOutPlanes(u32 a);
extern "C" void Gfx2d_SetMainObjWinPlanes(u32 a);
extern "C" void Gfx2d_SetSubObjWinPlanes(u32 a);
extern "C" void Gfx2d_SetMainWin0Rect(u32 a, u32 b, u32 c, u32 d);
extern "C" void Gfx2d_SetMainWin1Rect(u32 a, u32 b, u32 c, u32 d);
extern "C" void Gfx2d_SetSubWin0Rect(u32 a, u32 b, u32 c, u32 d);
extern "C" void Gfx2d_SetSubWin1Rect(u32 a, u32 b, u32 c, u32 d);
extern "C" void Gfx2d_SetMainBgModeState(u32 a);
extern "C" void Gfx2d_SetSubBgModeState(u32 a);
extern "C" void Gfx2d_SetMainBgMode(u32 a);
extern "C" void Gfx2d_SetSubBgMode(u32 a);
extern "C" u32 Gfx2d_GetMainWindows();
extern "C" void Gfx2d_SetMainWindows(u32 a);
extern "C" void Gfx2d_EnableMainWindows(u32 a);
extern "C" void Gfx2d_DisableMainWindows(u32 a);
extern "C" u32 Gfx2d_GetSubWindows();
extern "C" void Gfx2d_SetSubWindows(u32 a);
extern "C" void Gfx2d_EnableSubWindows(u32 a);
extern "C" void Gfx2d_DisableSubWindows(u32 a);
extern "C" u8 Gfx2d_GetMainPlanes(void);
extern "C" void Gfx2d_SetMainPlanes(u8 a);
extern "C" void Gfx2d_ShowMainPlanes(u8 a);
extern "C" void Gfx2d_HideMainPlanes(u8 a);
extern "C" u8 Gfx2d_GetSubPlanes(void);
extern "C" void Gfx2d_SetSubPlanes(u8 a);
extern "C" void Gfx2d_ShowSubPlanes(u8 a);
extern "C" void Gfx2d_HideSubPlanes(u8 a);
extern "C" void Gfx2d_SetBrightness(u32 a);
extern "C" void Gfx2d_BeginSubObjWinBrightness(void);
extern "C" void Gfx2d_EndSubObjWinBrightness(void);
extern "C" void Gfx2d_SetSubBrightnessAllPlanes(void);
extern "C" void Gfx2d_ExcludeSubBrightnessPlanes(u8 a);
extern "C" void Gfx2d_SetSubBrightness(u8 a);
extern "C" void Gfx2d_SetSubAlphaBlend(u8 a, u8 b, u8 c);
extern "C" void Gfx2d_ResetSubBlend(void);
extern "C" void Gfx2d_SetMainAlphaBlend(u8 a, u8 b, u8 c);
extern "C" void Gfx2d_ResetMainBlend(void);

extern "C" s32 Gfx2d_GetLayerBgIndex(u32 n) {
    switch (n) {
    case 3: return 0;
    case 0: case 4: return 1;
    case 1: case 5: return 2;
    case 2: case 6: return 3;
    case 7: case 8: return 4;
    default: return 0;
    }
}

extern "C" s32 Gfx2d_GetLayerPlaneMask(u32 n) {
    switch (n) {
    case 3: return 1;
    case 0: case 4: return 2;
    case 1: case 5: return 4;
    case 2: case 6: return 8;
    case 7: case 8: return 0x10;
    default: return 1;
    }
}

extern "C" s32 Gfx2d_GetLayerBlendMask(u32 n) {
    switch (n) {
    case 3: return 1;
    case 0: case 4: return 2;
    case 1: case 5: return 4;
    case 2: case 6: return 8;
    case 7: case 8: return 0x10;
    default: return 1;
    }
}

extern "C" s32 Gfx2d_LoadPaletteFile(u32 p0, u32 p1, u32 p2, s32 p3, u8 e, u8 f) {
    u8 *buf = (u8 *)File_LoadAlloc(p0, p1, -4, 0);
    s32 r = Gfx2d_LoadPaletteRange(buf, p2, p3, e, f);
    Heap_Free(p1, buf);
    return r;
}

extern "C" s32 Gfx2d_LoadPaletteFileSlot(u32 p0, u32 p1, u32 p2, s32 p3, u8 e) {
    s32 out;
    u8 *buf = (u8 *)File_LoadAlloc(p0, p1, -4, &out);
    u8 *q = buf;
    q += p3 * 32;
    s32 r = Gfx2d_LoadPaletteRange(q, p2, e, e, e);
    Heap_Free(p1, buf);
    return r;
}

extern "C" s32 Gfx2d_LoadScreenFile(u32 p0, u32 p1, u32 p2) {
    s32 out;
    u8 *buf = (u8 *)File_LoadAlloc(p0, p1, -4, &out);
    s32 r = Gfx2d_LoadScreen(buf, p2, out, 0);
    Heap_Free(p1, buf);
    return r;
}

extern "C" s32 Gfx2d_LoadCharFile(u32 p0, u32 p1, u32 p2, s32 p3, s32 e, s32 f) {
    s32 out;
    u8 *buf = (u8 *)File_LoadAlloc(p0, p1, -4, &out);
    s32 r = Gfx2d_LoadCharRange(buf, p2, p3, e, f);
    Heap_Free(p1, buf);
    return r;
}

extern "C" s32 Gfx2d_LoadCharFile8bpp(u32 p0, u32 p1, u32 p2, s32 p3, s32 a, s32 b) {
    return Gfx2d_LoadCharFile(p0, p1, p2, p3 << 1, a << 1, (b << 1) + 1);
}

extern "C" s32 Gfx2d_LoadPaletteRange(u8 *dst, u32 n, s32 a, s32 b, u8 c) {
    u8 *p = dst + (b - a) * 32;
    s32 off, len;
    len = (c - b + 1) * 32;
    off = b * 32;
    DC_FlushRange(p, len);
    if (n == 7) {
        GX_LoadOBJPltt(p, off, len);
    } else if (n == 8) {
        GXS_LoadOBJPltt(p, off, len);
    } else if (n <= 2) {
        if (off == 0) {
            off = 2;
            len -= 2;
            p += 2;
        }
        GX_LoadBGPltt(p, off, len);
    } else if (n <= 6) {
        if (off == 0) {
            off = 2;
            len -= 2;
            p += 2;
        }
        GXS_LoadBGPltt(p, off, len);
    }
    return 1;
}

extern "C" s32 Gfx2d_LoadScreen(u8 *dst, u32 n, s32 size, s32 x) {
    DC_FlushRange(dst, size);
    switch (n) {
    case 0: GX_LoadBG1Scr(dst, x, size); break;
    case 1: GX_LoadBG2Scr(dst, x, size); break;
    case 2: GX_LoadBG3Scr(dst, x, size); break;
    case 3: GXS_LoadBG0Scr(dst, x, size); break;
    case 4: GXS_LoadBG1Scr(dst, x, size); break;
    case 5: GXS_LoadBG2Scr(dst, x, size); break;
    case 6: GXS_LoadBG3Scr(dst, x, size); break;
    }
    return 1;
}

extern "C" s32 Gfx2d_LoadCharRange(u8 *dst, u32 n, s32 a, s32 b, s32 c) {
    u8 *p = dst + (b - a) * 32;
    s32 off, len;
    len = (*(volatile s32 *)&c - b + 1) * 32;
    off = b * 32;
    DC_FlushRange(p, len);
    switch (n) {
    case 0: GX_LoadBG1Char(p, off, len); break;
    case 1: GX_LoadBG2Char(p, off, len); break;
    case 2: GX_LoadBG3Char(p, off, len); break;
    case 3: GXS_LoadBG0Char(p, off, len); break;
    case 4: GXS_LoadBG1Char(p, off, len); break;
    case 5: GXS_LoadBG2Char(p, off, len); break;
    case 6: GXS_LoadBG3Char(p, off, len); break;
    case 7: GX_LoadOBJ(p, off, len); break;
    case 8: GXS_LoadOBJ(p, off, len); break;
    }
    return 1;
}

extern "C" void Gfx2d_SetLayerPriority(u32 n, u32 v) {
    switch (n) {
    case 0: *(vu16 *)0x0400000a = (*(vu16 *)0x0400000a & ~3) | v; break;
    case 1: *(vu16 *)0x0400000c = (*(vu16 *)0x0400000c & ~3) | v; break;
    case 2: *(vu16 *)0x0400000e = (*(vu16 *)0x0400000e & ~3) | v; break;
    case 3: *(vu16 *)0x04001008 = (*(vu16 *)0x04001008 & ~3) | v; break;
    case 4: *(vu16 *)0x0400100a = (*(vu16 *)0x0400100a & ~3) | v; break;
    case 5: *(vu16 *)0x0400100c = (*(vu16 *)0x0400100c & ~3) | v; break;
    case 6: *(vu16 *)0x0400100e = (*(vu16 *)0x0400100e & ~3) | v; break;
    }
}

extern "C" void Gfx2d_SetLayerControl(u32 n, u32 a, u32 b, u32 c) {
    switch (n) {
    case 0: *(vu16 *)0x0400000a = (c << 2) | ((b << 7) | ((*(vu16 *)0x0400000a & 0x43) | (a << 14)) | 0x500); break;
    case 1: *(vu16 *)0x0400000c = (c << 2) | ((b << 7) | ((*(vu16 *)0x0400000c & 0x43) | (a << 14)) | 0x600); break;
    case 2: *(vu16 *)0x0400000e = (c << 2) | ((b << 7) | ((*(vu16 *)0x0400000e & 0x43) | (a << 14)) | 0x700); break;
    case 3: *(vu16 *)0x04001008 = (c << 2) | ((b << 7) | ((*(vu16 *)0x04001008 & 0x43) | (a << 14)) | 0xc00); break;
    case 4: *(vu16 *)0x0400100a = (c << 2) | ((b << 7) | ((*(vu16 *)0x0400100a & 0x43) | (a << 14)) | 0xd00); break;
    case 5: *(vu16 *)0x0400100c = (c << 2) | ((b << 7) | ((*(vu16 *)0x0400100c & 0x43) | (a << 14)) | 0xe00); break;
    case 6: *(vu16 *)0x0400100e = (c << 2) | ((b << 7) | ((*(vu16 *)0x0400100e & 0x43) | (a << 14)) | 0xf00); break;
    }
}

extern "C" void Gfx2d_SetLayerOffset(u32 n, u32 a, u32 b) {
    switch (n) {
    case 0: Gfx2d_SetMainBg1Offset(a, b); break;
    case 1: Gfx2d_SetMainBg2Offset(a, b); break;
    case 2: Gfx2d_SetMainBg3Offset(a, b); break;
    case 3: Gfx2d_SetSubBg0Offset(a, b); break;
    case 4: Gfx2d_SetSubBg1Offset(a, b); break;
    case 5: Gfx2d_SetSubBg2Offset(a, b); break;
    case 6: Gfx2d_SetSubBg3Offset(a, b); break;
    }
}

extern "C" void Gfx2d_SetWindowRect(u32 n, u32 a, u32 b, u32 c, u32 d) {
    switch (n) {
    case 0: Gfx2d_SetMainWin0Rect(a, b, c, d); break;
    case 1: Gfx2d_SetMainWin1Rect(a, b, c, d); break;
    case 2: Gfx2d_SetSubWin0Rect(a, b, c, d); break;
    case 3: Gfx2d_SetSubWin1Rect(a, b, c, d); break;
    }
}

extern "C" void Gfx2d_ResetLayer(u32 n) {
    Gfx2d_HideLayer(n);
    Gfx2d_SetLayerOffset(n, 0, 0);
}

extern "C" void Gfx2d_HideLayer(u32 n) {
    switch (n) {
    case 0: Gfx2d_HideMainPlanes(2); break;
    case 1: Gfx2d_HideMainPlanes(4); break;
    case 2: Gfx2d_HideMainPlanes(8); break;
    case 7: Gfx2d_HideMainPlanes(0x10); break;
    case 3: Gfx2d_HideSubPlanes(1); break;
    case 4: Gfx2d_HideSubPlanes(2); break;
    case 5: Gfx2d_HideSubPlanes(4); break;
    case 6: Gfx2d_HideSubPlanes(8); break;
    case 8: Gfx2d_HideSubPlanes(0x10); break;
    }
}

extern "C" void Gfx2d_ShowLayer(u32 n) {
    switch (n) {
    case 0: Gfx2d_ShowMainPlanes(2); break;
    case 1: Gfx2d_ShowMainPlanes(4); break;
    case 2: Gfx2d_ShowMainPlanes(8); break;
    case 7: Gfx2d_ShowMainPlanes(0x10); break;
    case 3: Gfx2d_ShowSubPlanes(1); break;
    case 4: Gfx2d_ShowSubPlanes(2); break;
    case 5: Gfx2d_ShowSubPlanes(4); break;
    case 6: Gfx2d_ShowSubPlanes(8); break;
    case 8: Gfx2d_ShowSubPlanes(0x10); break;
    }
}

extern "C" void Gfx2d_LinearToTiles4bppBytes(u8 *src, u8 *dst, s32 w, s32 h) {
    s32 k, col, row, j, base, p, q;
    k = 0;
    base = 0;
    for (row = 0; row < h; row++) {
        p = base;
        for (col = 0; col < w; col++) {
            q = p;
            for (j = 0; j < 8; j++) {
                MI_CpuCopy8(src + q, dst + k, 4);
                k += 4;
                q += w * 4;
            }
            p += 4;
        }
        base += w << 5;
    }
}

extern "C" void Gfx2d_TilesInRow32ToLinear(u32 *src, u32 *dst, s32 x, s32 w, s32 h) {
    s32 k, row, s, j, c, base, idx;
    k = 0; base = x * 8;
    for (row = 0; row < h; row++) {
        s = base;
        for (j = 0; j < 8; j++) {
            idx = s;
            for (c = 0; c < w; c++) {
                dst[k] = src[idx];
                k++;
                idx += 8;
            }
            s++;
        }
        base += 0x100;
    }
}

extern "C" void Gfx2d_LinearToTilesInRow32(u32 *src, u32 *dst, s32 x, s32 w, s32 h) {
    s32 k, row, s, j, c, base, idx;
    k = 0;
    base = x * 8;
    for (row = 0; row < h; row++) {
        s = base;
        for (j = 0; j < 8; j++) {
            idx = s;
            for (c = 0; c < w; c++) {
                dst[idx] = src[k];
                k++;
                idx += 8;
            }
            s++;
        }
        base += 0x100;
    }
}

extern "C" void Gfx2d_LinearToTiles4bpp(u32 *src, u32 *dst, s32 w, s32 h) {
    s32 k, row, s, j, c, base, idx;
    k = 0; base = 0;
    for (row = 0; row < h; row++) {
        s = base;
        for (j = 0; j < 8; j++) {
            idx = s;
            for (c = 0; c < w; c++) {
                dst[idx] = src[k];
                k++;
                idx += 8;
            }
            s++;
        }
        base += w * 8;
    }
}

extern "C" void Gfx2d_TilesToLinear4bpp(u32 *src, u32 *dst, s32 w, s32 h) {
    s32 k, row, s, j, c, base, idx;
    k = 0; base = 0;
    for (row = 0; row < h; row++) {
        s = base;
        for (j = 0; j < 8; j++) {
            idx = s;
            for (c = 0; c < w; c++) {
                u32 t = src[idx];
                dst[k] = t;
                k++;
                idx += 8;
            }
            s++;
        }
        base += w * 8;
    }
}

extern "C" void Gfx2d_LoadBackdropColor(void) {
    GX_LoadBGPltt(sGfx2dBackdropColor, 0, 2);
    GXS_LoadBGPltt(sGfx2dBackdropColor, 0, 2);
}

extern "C" void Gfx2d_ResetState() {
    sGfx2dDispCtrl.unk_14 = 0;
    sGfx2dDispCtrl.unk_15 = 0;
    sGfx2dDispCtrl.unk_18 = 0;
    sGfx2dDispCtrl.unk_19 = 0;
    sGfx2dDispCtrl.unk_1a = 0;
    sGfx2dDispCtrl.unk_1b = 0;
    sGfx2dDispCtrl.unk_1c = 0;
    sGfx2dDispCtrl.unk_1d = 0;
    sGfx2dDispCtrl.unk_16 = 0;
    sGfx2dDispCtrl.unk_17 = 1;
    Gfx2d_InitBgOffset((Unk_02001874*)&sGfx2dBgScroll);
    Gfx2d_InitBgOffset((Unk_02001874 *)&sGfx2dBgScroll.unk_04);
    Gfx2d_InitBgAffine((Unk_02001858 *)&sGfx2dBgScroll.unk_08);
    Gfx2d_InitBgAffine((Unk_02001858 *)&sGfx2dBgScroll.unk_28);
    Gfx2d_InitBgOffset((Unk_02001874 *)&sGfx2dBgScroll.unk_48);
    Gfx2d_InitBgOffset((Unk_02001874 *)&sGfx2dBgScroll.unk_4c);
    Gfx2d_InitBgAffine((Unk_02001858 *)&sGfx2dBgScroll.unk_50);
    Gfx2d_InitBgAffine((Unk_02001858 *)sGfx2dSubBg3Mtx);
    Gfx2d_InitWindowRect((Unk_02001844 *)&sGfx2dDispCtrl.unk_1e);
    Gfx2d_InitWindowRect((Unk_02001844 *)&sGfx2dWindowBlend.unk_03);
    Gfx2d_InitWindowRect((Unk_02001844 *)&sGfx2dWindowBlend.unk_08);
    Gfx2d_InitWindowRect((Unk_02001844 *)&sGfx2dWindowBlend.unk_0d);
    sGfx2dDispCtrl.unk_10 = 0;
    sGfx2dDispCtrl.unk_11 = 0xff;
    sGfx2dDispCtrl.unk_12 = 0xff;
    sGfx2dWindowBlend.unk_12 = 0;
    sGfx2dWindowBlend.unk_14 = 0;
    Gfx2d_SetSubBgModeState(0);
    Gfx2d_SetMainBgModeState(1);
}

extern "C" void Gfx2d_BeginFrame() {}

extern "C" void Gfx2d_ApplyDisplayControl() {
    GX_SetGraphicsMode(1, sGfx2dDispCtrl.unk_16, 1);
    GXS_SetGraphicsMode(sGfx2dDispCtrl.unk_17);
    *(volatile u32*)0x4000000 = (*(volatile u32*)0x4000000 & 0xffffe0ff) | (sGfx2dDispCtrl.unk_14 << 8);
    *(volatile u32*)0x4001000 = (*(volatile u32*)0x4001000 & 0xffffe0ff) | (sGfx2dDispCtrl.unk_15 << 8);
    *(volatile u32*)0x4000000 = (*(volatile u32*)0x4000000 & 0xffff1fff) | (sGfx2dDispCtrl.unk_18 << 13);
    *(volatile u32*)0x4001000 = (*(volatile u32*)0x4001000 & 0xffff1fff) | (sGfx2dDispCtrl.unk_19 << 13);
    *(volatile u16*)0x400004a = (*(volatile u16*)0x400004a & ~0x3f) | sGfx2dDispCtrl.unk_1a | 0x20;
    *(volatile u16*)0x400104a = (*(volatile u16*)0x400104a & ~0x3f) | sGfx2dDispCtrl.unk_1b | 0x20;
    *(volatile u16*)0x400004a = (*(volatile u16*)0x400004a & 0xffffc0ff) | (sGfx2dDispCtrl.unk_1c << 8);
    *(volatile u16*)0x400104a = (*(volatile u16*)0x400104a & 0xffffc0ff) | (sGfx2dDispCtrl.unk_1d << 8);
}

extern "C" void Gfx2d_FlushRegisters() {
    if (sGfx2dDispCtrl.unk_11 != 0) {
        if (sGfx2dDispCtrl.unk_11 & 1) {
            if ((*(volatile u32*)0x4000000 & 8) == 0) {
                *(volatile u32*)0x4000010 = (sGfx2dBgScroll.unk_00 & 0x1ff) | ((sGfx2dBgScroll.unk_02 << 16) & 0x1ff0000);
            } else {
                G3X_SetHOffset(sGfx2dBgScroll.unk_00);
            }
        }
        if (sGfx2dDispCtrl.unk_11 & 2) {
            *(volatile u32*)0x4000014 = (sGfx2dBgScroll.unk_04 & 0x1ff) | ((sGfx2dBgScroll.unk_06 << 16) & 0x1ff0000);
        }
        if (sGfx2dDispCtrl.unk_11 & 4) {
            if (sGfx2dDispCtrl.unk_10 & 1) {
                G2x_SetBGyAffine_(0x4000020, (Unk_02001858 *)&sGfx2dBgScroll.unk_08, sGfx2dBgScroll.unk_18, sGfx2dBgScroll.unk_1c,
                              sGfx2dBgScroll.unk_20, sGfx2dBgScroll.unk_24);
            } else {
                *(volatile u32*)0x4000018 = (sGfx2dBgScroll.unk_20 & 0x1ff) | ((sGfx2dBgScroll.unk_24 << 16) & 0x1ff0000);
            }
        }
        if (sGfx2dDispCtrl.unk_11 & 8) {
            if (sGfx2dDispCtrl.unk_10 & 2) {
                G2x_SetBGyAffine_(0x4000030, (Unk_02001858 *)&sGfx2dBgScroll.unk_28, sGfx2dBgScroll.unk_38, sGfx2dBgScroll.unk_3c,
                              sGfx2dBgScroll.unk_40, sGfx2dBgScroll.unk_44);
            } else {
                *(volatile u32*)0x400001c = (sGfx2dBgScroll.unk_40 & 0x1ff) | ((sGfx2dBgScroll.unk_44 << 16) & 0x1ff0000);
            }
        }
        if (sGfx2dDispCtrl.unk_11 & 0x10) {
            *(volatile u32*)0x4001010 = (sGfx2dBgScroll.unk_48 & 0x1ff) | ((sGfx2dBgScroll.unk_4a << 16) & 0x1ff0000);
        }
        if (sGfx2dDispCtrl.unk_11 & 0x20) {
            *(volatile u32*)0x4001014 = (sGfx2dBgScroll.unk_4c & 0x1ff) | ((sGfx2dBgScroll.unk_4e << 16) & 0x1ff0000);
        }
        if (sGfx2dDispCtrl.unk_11 & 0x40) {
            if (sGfx2dDispCtrl.unk_10 & 4) {
                G2x_SetBGyAffine_(0x4001020, (Unk_02001858 *)&sGfx2dBgScroll.unk_50, sGfx2dBgScroll.unk_60, sGfx2dBgScroll.unk_64,
                              sGfx2dBgScroll.unk_68, sGfx2dBgScroll.unk_6c);
            } else {
                *(volatile u32*)0x4001018 = (sGfx2dBgScroll.unk_68 & 0x1ff) | ((sGfx2dBgScroll.unk_6c << 16) & 0x1ff0000);
            }
        }
        if (sGfx2dDispCtrl.unk_11 & 0x80) {
            if (sGfx2dDispCtrl.unk_10 & 8) {
                G2x_SetBGyAffine_(0x4001030, (Unk_02001858 *)sGfx2dSubBg3Mtx, sGfx2dDispCtrl.unk_00, sGfx2dDispCtrl.unk_04,
                              sGfx2dDispCtrl.unk_08, sGfx2dDispCtrl.unk_0c);
            } else {
                *(volatile u32*)0x400101c = (sGfx2dDispCtrl.unk_08 & 0x1ff) | ((sGfx2dDispCtrl.unk_0c << 16) & 0x1ff0000);
            }
        }
        sGfx2dDispCtrl.unk_11 = 0;
    }
    if (sGfx2dDispCtrl.unk_12 != 0) {
        if (sGfx2dDispCtrl.unk_12 & 0x1) {
            *(volatile u16*)0x4000048 = (*(volatile u16*)0x4000048 & ~0x3f) | sGfx2dWindowBlend.unk_02 | 0x20;
        }
        if (sGfx2dDispCtrl.unk_12 & 0x2) {
            *(volatile u16*)0x4000048 = (*(volatile u16*)0x4000048 & 0xffffc0ff) | (sGfx2dWindowBlend.unk_07 << 8) | 0x2000;
        }
        if (sGfx2dDispCtrl.unk_12 & 0x4) {
            *(volatile u16*)0x4001048 = (*(volatile u16*)0x4001048 & ~0x3f) | sGfx2dWindowBlend.unk_0c | 0x20;
        }
        if (sGfx2dDispCtrl.unk_12 & 0x100) {
            *(volatile u16*)0x4001048 = (*(volatile u16*)0x4001048 & ~0x3f) | sGfx2dWindowBlend.unk_0c;
        }
        if (sGfx2dDispCtrl.unk_12 & 0x8) {
            *(volatile u16*)0x4001048 = (*(volatile u16*)0x4001048 & 0xffffc0ff) | (sGfx2dWindowBlend.unk_11 << 8) | 0x2000;
        }
        if (sGfx2dDispCtrl.unk_12 & 0x200) {
            *(volatile u16*)0x4001048 = (*(volatile u16*)0x4001048 & 0xffffc0ff) | (sGfx2dWindowBlend.unk_11 << 8);
        }
        if (sGfx2dDispCtrl.unk_12 & 0x10) {
            u32 d = sGfx2dWindowBlend.unk_01;
            u32 b = sGfx2dDispCtrl.unk_1f;
            u32 a = sGfx2dDispCtrl.unk_1e;
            *(volatile u16*)0x4000040 = ((a << 8) & 0xff00) | (sGfx2dWindowBlend.unk_00 & 0xff);
            *(volatile u16*)0x4000044 = ((b << 8) & 0xff00) | (d & 0xff);
        }
        if (sGfx2dDispCtrl.unk_12 & 0x20) {
            u32 d = sGfx2dWindowBlend.unk_06;
            u32 b = sGfx2dWindowBlend.unk_04;
            u32 a = sGfx2dWindowBlend.unk_03;
            *(volatile u16*)0x4000042 = ((a << 8) & 0xff00) | (sGfx2dWindowBlend.unk_05 & 0xff);
            *(volatile u16*)0x4000046 = ((b << 8) & 0xff00) | (d & 0xff);
        }
        if (sGfx2dDispCtrl.unk_12 & 0x40) {
            u32 d = sGfx2dWindowBlend.unk_0b;
            u32 b = sGfx2dWindowBlend.unk_09;
            u32 a = sGfx2dWindowBlend.unk_08;
            *(volatile u16*)0x4001040 = ((a << 8) & 0xff00) | (sGfx2dWindowBlend.unk_0a & 0xff);
            *(volatile u16*)0x4001044 = ((b << 8) & 0xff00) | (d & 0xff);
        }
        if (sGfx2dDispCtrl.unk_12 & 0x80) {
            u32 d = sGfx2dWindowBlend.unk_10;
            u32 b = sGfx2dWindowBlend.unk_0e;
            u32 a = sGfx2dWindowBlend.unk_0d;
            *(volatile u16*)0x4001042 = ((a << 8) & 0xff00) | (sGfx2dWindowBlend.unk_0f & 0xff);
            *(volatile u16*)0x4001046 = ((b << 8) & 0xff00) | (d & 0xff);
        }
        sGfx2dDispCtrl.unk_12 = 0;
    }
    u32 t = sGfx2dWindowBlend.unk_12;
    if (t & 0x20) {
        G2x_SetBlendBrightnessExt_(0x4000050, 0x1f, 0x20, 0x10, 0x10, 0);
    } else if (t & 0x10) {
        G2x_SetBlendAlpha_(0x4000050, sGfx2dWindowBlend.unk_13, sGfx2dWindowBlend.unk_14, sGfx2dWindowBlend.unk_15,
                      0x10 - sGfx2dWindowBlend.unk_15);
    } else if (t & 0x2) {
        G2x_SetBlendBrightnessExt_(0x4001050, 0x1f, 0x20, 0x10, 0x10, 0);
    } else if (t & 0x8) {
        G2x_SetBlendAlpha_(0x4001050, sGfx2dWindowBlend.unk_13, sGfx2dWindowBlend.unk_14, sGfx2dWindowBlend.unk_15,
                      0x10 - sGfx2dWindowBlend.unk_15);
    } else if (t != 0) {
        G2x_SetBlendBrightness_(0x4001050, sGfx2dWindowBlend.unk_13, sGfx2dWindowBlend.unk_14);
    }
    sGfx2dWindowBlend.unk_12 = 0;
}

extern "C" void Gfx2d_InitBgOffset(Unk_02001874* p) {
    p->unk_00 = 0;
    p->unk_02 = 0;
}

extern "C" void Gfx2d_InitBgAffine(Unk_02001858* p) {
    p->unk_00 = 0x1000;
    p->unk_04 = 0;
    p->unk_08 = 0;
    p->unk_0c = 0x1000;
    p->unk_10 = 0;
    p->unk_14 = 0;
    p->unk_18 = 0;
    p->unk_1c = 0;
}

extern "C" void Gfx2d_InitWindowRect(Unk_02001844* p) {
    p->unk_00 = 0;
    p->unk_01 = 0;
    p->unk_02 = 0xff;
    p->unk_03 = 0xc0;
    p->unk_04 = 0;
}

extern "C" void Gfx2d_SetMainBg1Offset(u32 a, u32 b) {
    sGfx2dDispCtrl.unk_11 |= 0x2;
    sGfx2dBgScroll.unk_04 = a;
    sGfx2dBgScroll.unk_06 = b;
}

extern "C" void Gfx2d_SetMainBg2Offset(s32 a, s32 b) {
    sGfx2dDispCtrl.unk_11 |= 0x4;
    sGfx2dBgScroll.unk_20 = a;
    sGfx2dBgScroll.unk_24 = b;
}

extern "C" void Gfx2d_SetMainBg3Offset(s32 a, s32 b) {
    sGfx2dDispCtrl.unk_11 |= 0x8;
    sGfx2dBgScroll.unk_40 = a;
    sGfx2dBgScroll.unk_44 = b;
}

extern "C" void Gfx2d_SetSubBg0Offset(u32 a, u32 b) {
    sGfx2dDispCtrl.unk_11 |= 0x10;
    sGfx2dBgScroll.unk_48 = a;
    sGfx2dBgScroll.unk_4a = b;
}

extern "C" void Gfx2d_SetSubBg1Offset(u32 a, u32 b) {
    sGfx2dDispCtrl.unk_11 |= 0x20;
    sGfx2dBgScroll.unk_4c = a;
    sGfx2dBgScroll.unk_4e = b;
}

extern "C" void Gfx2d_SetSubBg2Offset(s32 a, s32 b) {
    sGfx2dDispCtrl.unk_11 |= 0x40;
    sGfx2dBgScroll.unk_68 = a;
    sGfx2dBgScroll.unk_6c = b;
}

extern "C" void Gfx2d_SetSubBg3Offset(s32 a, s32 b) {
    sGfx2dDispCtrl.unk_11 |= 0x80;
    sGfx2dDispCtrl.unk_08 = a;
    sGfx2dDispCtrl.unk_0c = b;
}

extern "C" void Gfx2d_SetMainWin0Planes(u32 a) {
    sGfx2dWindowBlend.unk_02 = a;
    sGfx2dDispCtrl.unk_12 |= 0x1;
}

extern "C" void Gfx2d_SetMainWin1Planes(u32 a) {
    sGfx2dWindowBlend.unk_07 = a;
    sGfx2dDispCtrl.unk_12 |= 0x2;
}

extern "C" void Gfx2d_SetSubWin0Planes(u32 a, BOOL b) {
    sGfx2dWindowBlend.unk_0c = a;
    Gfx2d_MarkSubWin0PlanesDirty(b);
}

extern "C" void Gfx2d_SetSubWin1Planes(u32 a, BOOL b) {
    sGfx2dWindowBlend.unk_11 = a;
    Gfx2d_MarkSubWin1PlanesDirty(b);
}

extern "C" void Gfx2d_MarkSubWin0PlanesDirty(BOOL a) {
    u32 v;
    if (a) {
        v = 0x4;
    } else {
        v = 0x100;
    }
    sGfx2dDispCtrl.unk_12 |= v;
}

extern "C" void Gfx2d_MarkSubWin1PlanesDirty(BOOL a) {
    u32 v;
    if (a) {
        v = 0x8;
    } else {
        v = 0x200;
    }
    sGfx2dDispCtrl.unk_12 |= v;
}

extern "C" void Gfx2d_SetMainWinOutPlanes(u32 a) { sGfx2dDispCtrl.unk_1a = a; }

extern "C" void Gfx2d_RemoveMainWinOutPlanes(u32 a) { sGfx2dDispCtrl.unk_1a &= ~a; }

extern "C" void Gfx2d_SetSubWinOutPlanes(u32 a) { sGfx2dDispCtrl.unk_1b = a; }

extern "C" void Gfx2d_SetMainObjWinPlanes(u32 a) { sGfx2dDispCtrl.unk_1c = a; }

extern "C" void Gfx2d_SetSubObjWinPlanes(u32 a) { sGfx2dDispCtrl.unk_1d = a; }

extern "C" void Gfx2d_SetMainWin0Rect(u32 a, u32 b, u32 c, u32 d) {
    sGfx2dDispCtrl.unk_1e = a;
    sGfx2dDispCtrl.unk_1f = b;
    sGfx2dWindowBlend.unk_00 = c;
    sGfx2dWindowBlend.unk_01 = d;
    sGfx2dDispCtrl.unk_12 |= 0x10;
}

extern "C" void Gfx2d_SetMainWin1Rect(u32 a, u32 b, u32 c, u32 d) {
    sGfx2dWindowBlend.unk_03 = a;
    sGfx2dWindowBlend.unk_04 = b;
    sGfx2dWindowBlend.unk_05 = c;
    sGfx2dWindowBlend.unk_06 = d;
    sGfx2dDispCtrl.unk_12 |= 0x20;
}

extern "C" void Gfx2d_SetSubWin0Rect(u32 a, u32 b, u32 c, u32 d) {
    sGfx2dWindowBlend.unk_08 = a;
    sGfx2dWindowBlend.unk_09 = b;
    sGfx2dWindowBlend.unk_0a = c;
    sGfx2dWindowBlend.unk_0b = d;
    sGfx2dDispCtrl.unk_12 |= 0x40;
}

extern "C" void Gfx2d_SetSubWin1Rect(u32 a, u32 b, u32 c, u32 d) {
    sGfx2dWindowBlend.unk_0d = a;
    sGfx2dWindowBlend.unk_0e = b;
    sGfx2dWindowBlend.unk_0f = c;
    sGfx2dWindowBlend.unk_10 = d;
    sGfx2dDispCtrl.unk_12 |= 0x80;
}

extern "C" void Gfx2d_SetMainBgModeState(u32 a) {
    sGfx2dDispCtrl.unk_16 = a;
    sGfx2dDispCtrl.unk_10 = (sGfx2dDispCtrl.unk_10 & ~0x3) | ((0xf78u >> (a * 2)) & 0x3);
}

extern "C" void Gfx2d_SetSubBgModeState(u32 a) {
    sGfx2dDispCtrl.unk_17 = a;
    sGfx2dDispCtrl.unk_10 = (sGfx2dDispCtrl.unk_10 & ~0xc) | ((0x3de0u >> (a * 2)) & 0xc);
}

extern "C" void Gfx2d_SetMainBgMode(u32 a) {
    Gfx2d_SetMainBgModeState(a);
    GX_SetGraphicsMode(1, a, 1);
}

extern "C" void Gfx2d_SetSubBgMode(u32 a) {
    Gfx2d_SetSubBgModeState(a);
    GXS_SetGraphicsMode(a);
}

extern "C" u32 Gfx2d_GetMainWindows() { return sGfx2dDispCtrl.unk_18; }

extern "C" void Gfx2d_SetMainWindows(u32 a) { sGfx2dDispCtrl.unk_18 = a; }

extern "C" void Gfx2d_EnableMainWindows(u32 a) { sGfx2dDispCtrl.unk_18 |= a; }

extern "C" void Gfx2d_DisableMainWindows(u32 a) { sGfx2dDispCtrl.unk_18 &= ~a; }

extern "C" u32 Gfx2d_GetSubWindows() { return sGfx2dDispCtrl.unk_19; }

extern "C" void Gfx2d_SetSubWindows(u32 a) { sGfx2dDispCtrl.unk_19 = a; }

extern "C" void Gfx2d_EnableSubWindows(u32 a) { sGfx2dDispCtrl.unk_19 |= a; }

extern "C" void Gfx2d_DisableSubWindows(u32 a) { sGfx2dDispCtrl.unk_19 &= ~a; }

extern "C" u8 Gfx2d_GetMainPlanes(void) { return sGfx2dDispCtrl.unk_14; }

extern "C" void Gfx2d_SetMainPlanes(u8 a) { sGfx2dDispCtrl.unk_14 = a; }

extern "C" void Gfx2d_ShowMainPlanes(u8 a) { sGfx2dDispCtrl.unk_14 |= a; }

extern "C" void Gfx2d_HideMainPlanes(u8 a) { sGfx2dDispCtrl.unk_14 &= ~a; }

extern "C" u8 Gfx2d_GetSubPlanes(void) { return sGfx2dDispCtrl.unk_15; }

extern "C" void Gfx2d_SetSubPlanes(u8 a) { sGfx2dDispCtrl.unk_15 = a; }

extern "C" void Gfx2d_ShowSubPlanes(u8 a) { sGfx2dDispCtrl.unk_15 |= a; }

extern "C" void Gfx2d_HideSubPlanes(u8 a) { sGfx2dDispCtrl.unk_15 &= ~a; }

extern "C" void Gfx2d_SetBrightness(u32 a) {
    if (a != 0) {
        G2x_SetBlendBrightness_(0x4000050, 0x3f, a);
        G2x_SetBlendBrightness_(0x4001050, 0x3f, a);
    } else {
        G2x_SetBlendBrightnessExt_(0x4000050, 0x1f, 0x20, 0x10, 0x10, a);
        G2x_SetBlendBrightnessExt_(0x4001050, 0x1f, 0x20, 0x10, 0x10, a);
    }
}

extern "C" void Gfx2d_BeginSubObjWinBrightness(void) {
    Gfx2d_SetSubBrightnessAllPlanes();
    Gfx2d_SetSubWinOutPlanes(0x1f);
    Gfx2d_SetSubObjWinPlanes(0x10);
    Gfx2d_EnableSubWindows(4);
    sGfx2dWindowBlend.unk_12 |= 1;
}

extern "C" void Gfx2d_EndSubObjWinBrightness(void) {
    Gfx2d_DisableSubWindows(4);
    sGfx2dWindowBlend.unk_12 |= 2;
}

extern "C" void Gfx2d_SetSubBrightnessAllPlanes(void) {
    sGfx2dWindowBlend.unk_13 = 0x1f;
    sGfx2dWindowBlend.unk_12 |= 4;
}

extern "C" void Gfx2d_ExcludeSubBrightnessPlanes(u8 a) {
    sGfx2dWindowBlend.unk_13 &= ~a;
    sGfx2dWindowBlend.unk_12 |= 4;
}

extern "C" void Gfx2d_SetSubBrightness(u8 a) {
    sGfx2dWindowBlend.unk_14 = a;
    sGfx2dWindowBlend.unk_12 |= 4;
}

extern "C" void Gfx2d_SetSubAlphaBlend(u8 a, u8 b, u8 c) {
    sGfx2dWindowBlend.unk_13 = a;
    sGfx2dWindowBlend.unk_14 = b;
    sGfx2dWindowBlend.unk_15 = c;
    sGfx2dWindowBlend.unk_12 |= 8;
}

extern "C" void Gfx2d_ResetSubBlend(void) { sGfx2dWindowBlend.unk_12 |= 2; }

extern "C" void Gfx2d_SetMainAlphaBlend(u8 a, u8 b, u8 c) {
    sGfx2dWindowBlend.unk_13 = a;
    sGfx2dWindowBlend.unk_14 = b;
    sGfx2dWindowBlend.unk_15 = c;
    sGfx2dWindowBlend.unk_12 |= 0x10;
}

extern "C" void Gfx2d_ResetMainBlend(void) { sGfx2dWindowBlend.unk_12 |= 0x20; }


