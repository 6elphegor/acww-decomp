#include "types.h"
#include "sys/Unk_02000fc0_Col.h"
#include "sys/Unk_02000fc0_Node.h"
#include "sys/Unk_02000fc0_Cfg.h"
#include "sys/QNode.h"
#include "sys/Unk_02000fc0_Thr.h"

typedef volatile u16 vu16;
typedef volatile u32 vu32;







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
extern QNode *gTaskCurrentNode;
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

struct Gfx2dDispCtrl {
    s32 subBg3CenterX, subBg3CenterY, subBg3OffsetX, subBg3OffsetY;
    u8 affineMask, offsetDirty;
    u16 windowDirty;
    u8 mainPlanes, subPlanes, mainBgMode, subBgMode, mainWindows, subWindows, mainWinOutPlanes, subWinOutPlanes, mainObjWinPlanes, subObjWinPlanes, mainWin0Left, mainWin0Top;
};

struct Gfx2dWindowBlend {
    u8 mainWin0Right, mainWin0Bottom, mainWin0Planes, mainWin1Left, mainWin1Top, mainWin1Right, mainWin1Bottom, mainWin1Planes, subWin0Left, subWin0Top, subWin0Right, subWin0Bottom, subWin0Planes, subWin1Left,
        subWin1Top, subWin1Right, subWin1Bottom, subWin1Planes, blendRequest, blendPlane1;
    s8 blendPlane2;
    u8 blendEv1;
    u8 pad_16[2];
};

struct Gfx2dBgScroll {
    u16 mainBg0OffsetX, mainBg0OffsetY, mainBg1OffsetX, mainBg1OffsetY;
    s32 mainBg2Mtx[4];
    s32 mainBg2CenterX, mainBg2CenterY, mainBg2OffsetX, mainBg2OffsetY;
    s32 mainBg3Mtx[4];
    s32 mainBg3CenterX, mainBg3CenterY, mainBg3OffsetX, mainBg3OffsetY;
    u16 subBg0OffsetX, subBg0OffsetY, subBg1OffsetX, subBg1OffsetY;
    s32 subBg2Mtx[4];
    s32 subBg2CenterX, subBg2CenterY, subBg2OffsetX, subBg2OffsetY;
};

struct Gfx2dWindowRect {
    u8 left, top, right, bottom, planes;
};

struct Gfx2dAffine {
    s32 mtx00, mtx01, mtx10, mtx11, centerX, centerY, offsetX, offsetY;
};

struct Gfx2dOffset {
    u16 x, y;
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
Gfx2dBgScroll sGfx2dBgScroll;
u8 sGfx2dSubBg3Mtx[0x10];
Gfx2dDispCtrl sGfx2dDispCtrl;
Gfx2dWindowBlend sGfx2dWindowBlend;

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
extern "C" void Gfx2d_InitBgOffset(Gfx2dOffset* p);
extern "C" void Gfx2d_InitBgAffine(Gfx2dAffine* p);
extern "C" void Gfx2d_InitWindowRect(Gfx2dWindowRect* p);
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
    sGfx2dDispCtrl.mainPlanes = 0;
    sGfx2dDispCtrl.subPlanes = 0;
    sGfx2dDispCtrl.mainWindows = 0;
    sGfx2dDispCtrl.subWindows = 0;
    sGfx2dDispCtrl.mainWinOutPlanes = 0;
    sGfx2dDispCtrl.subWinOutPlanes = 0;
    sGfx2dDispCtrl.mainObjWinPlanes = 0;
    sGfx2dDispCtrl.subObjWinPlanes = 0;
    sGfx2dDispCtrl.mainBgMode = 0;
    sGfx2dDispCtrl.subBgMode = 1;
    Gfx2d_InitBgOffset((Gfx2dOffset*)&sGfx2dBgScroll);
    Gfx2d_InitBgOffset((Gfx2dOffset *)&sGfx2dBgScroll.mainBg1OffsetX);
    Gfx2d_InitBgAffine((Gfx2dAffine *)&sGfx2dBgScroll.mainBg2Mtx);
    Gfx2d_InitBgAffine((Gfx2dAffine *)&sGfx2dBgScroll.mainBg3Mtx);
    Gfx2d_InitBgOffset((Gfx2dOffset *)&sGfx2dBgScroll.subBg0OffsetX);
    Gfx2d_InitBgOffset((Gfx2dOffset *)&sGfx2dBgScroll.subBg1OffsetX);
    Gfx2d_InitBgAffine((Gfx2dAffine *)&sGfx2dBgScroll.subBg2Mtx);
    Gfx2d_InitBgAffine((Gfx2dAffine *)sGfx2dSubBg3Mtx);
    Gfx2d_InitWindowRect((Gfx2dWindowRect *)&sGfx2dDispCtrl.mainWin0Left);
    Gfx2d_InitWindowRect((Gfx2dWindowRect *)&sGfx2dWindowBlend.mainWin1Left);
    Gfx2d_InitWindowRect((Gfx2dWindowRect *)&sGfx2dWindowBlend.subWin0Left);
    Gfx2d_InitWindowRect((Gfx2dWindowRect *)&sGfx2dWindowBlend.subWin1Left);
    sGfx2dDispCtrl.affineMask = 0;
    sGfx2dDispCtrl.offsetDirty = 0xff;
    sGfx2dDispCtrl.windowDirty = 0xff;
    sGfx2dWindowBlend.blendRequest = 0;
    sGfx2dWindowBlend.blendPlane2 = 0;
    Gfx2d_SetSubBgModeState(0);
    Gfx2d_SetMainBgModeState(1);
}

extern "C" void Gfx2d_BeginFrame() {}

extern "C" void Gfx2d_ApplyDisplayControl() {
    GX_SetGraphicsMode(1, sGfx2dDispCtrl.mainBgMode, 1);
    GXS_SetGraphicsMode(sGfx2dDispCtrl.subBgMode);
    *(volatile u32*)0x4000000 = (*(volatile u32*)0x4000000 & 0xffffe0ff) | (sGfx2dDispCtrl.mainPlanes << 8);
    *(volatile u32*)0x4001000 = (*(volatile u32*)0x4001000 & 0xffffe0ff) | (sGfx2dDispCtrl.subPlanes << 8);
    *(volatile u32*)0x4000000 = (*(volatile u32*)0x4000000 & 0xffff1fff) | (sGfx2dDispCtrl.mainWindows << 13);
    *(volatile u32*)0x4001000 = (*(volatile u32*)0x4001000 & 0xffff1fff) | (sGfx2dDispCtrl.subWindows << 13);
    *(volatile u16*)0x400004a = (*(volatile u16*)0x400004a & ~0x3f) | sGfx2dDispCtrl.mainWinOutPlanes | 0x20;
    *(volatile u16*)0x400104a = (*(volatile u16*)0x400104a & ~0x3f) | sGfx2dDispCtrl.subWinOutPlanes | 0x20;
    *(volatile u16*)0x400004a = (*(volatile u16*)0x400004a & 0xffffc0ff) | (sGfx2dDispCtrl.mainObjWinPlanes << 8);
    *(volatile u16*)0x400104a = (*(volatile u16*)0x400104a & 0xffffc0ff) | (sGfx2dDispCtrl.subObjWinPlanes << 8);
}

extern "C" void Gfx2d_FlushRegisters() {
    if (sGfx2dDispCtrl.offsetDirty != 0) {
        if (sGfx2dDispCtrl.offsetDirty & 1) {
            if ((*(volatile u32*)0x4000000 & 8) == 0) {
                *(volatile u32*)0x4000010 = (sGfx2dBgScroll.mainBg0OffsetX & 0x1ff) | ((sGfx2dBgScroll.mainBg0OffsetY << 16) & 0x1ff0000);
            } else {
                G3X_SetHOffset(sGfx2dBgScroll.mainBg0OffsetX);
            }
        }
        if (sGfx2dDispCtrl.offsetDirty & 2) {
            *(volatile u32*)0x4000014 = (sGfx2dBgScroll.mainBg1OffsetX & 0x1ff) | ((sGfx2dBgScroll.mainBg1OffsetY << 16) & 0x1ff0000);
        }
        if (sGfx2dDispCtrl.offsetDirty & 4) {
            if (sGfx2dDispCtrl.affineMask & 1) {
                G2x_SetBGyAffine_(0x4000020, (Gfx2dAffine *)&sGfx2dBgScroll.mainBg2Mtx, sGfx2dBgScroll.mainBg2CenterX, sGfx2dBgScroll.mainBg2CenterY,
                              sGfx2dBgScroll.mainBg2OffsetX, sGfx2dBgScroll.mainBg2OffsetY);
            } else {
                *(volatile u32*)0x4000018 = (sGfx2dBgScroll.mainBg2OffsetX & 0x1ff) | ((sGfx2dBgScroll.mainBg2OffsetY << 16) & 0x1ff0000);
            }
        }
        if (sGfx2dDispCtrl.offsetDirty & 8) {
            if (sGfx2dDispCtrl.affineMask & 2) {
                G2x_SetBGyAffine_(0x4000030, (Gfx2dAffine *)&sGfx2dBgScroll.mainBg3Mtx, sGfx2dBgScroll.mainBg3CenterX, sGfx2dBgScroll.mainBg3CenterY,
                              sGfx2dBgScroll.mainBg3OffsetX, sGfx2dBgScroll.mainBg3OffsetY);
            } else {
                *(volatile u32*)0x400001c = (sGfx2dBgScroll.mainBg3OffsetX & 0x1ff) | ((sGfx2dBgScroll.mainBg3OffsetY << 16) & 0x1ff0000);
            }
        }
        if (sGfx2dDispCtrl.offsetDirty & 0x10) {
            *(volatile u32*)0x4001010 = (sGfx2dBgScroll.subBg0OffsetX & 0x1ff) | ((sGfx2dBgScroll.subBg0OffsetY << 16) & 0x1ff0000);
        }
        if (sGfx2dDispCtrl.offsetDirty & 0x20) {
            *(volatile u32*)0x4001014 = (sGfx2dBgScroll.subBg1OffsetX & 0x1ff) | ((sGfx2dBgScroll.subBg1OffsetY << 16) & 0x1ff0000);
        }
        if (sGfx2dDispCtrl.offsetDirty & 0x40) {
            if (sGfx2dDispCtrl.affineMask & 4) {
                G2x_SetBGyAffine_(0x4001020, (Gfx2dAffine *)&sGfx2dBgScroll.subBg2Mtx, sGfx2dBgScroll.subBg2CenterX, sGfx2dBgScroll.subBg2CenterY,
                              sGfx2dBgScroll.subBg2OffsetX, sGfx2dBgScroll.subBg2OffsetY);
            } else {
                *(volatile u32*)0x4001018 = (sGfx2dBgScroll.subBg2OffsetX & 0x1ff) | ((sGfx2dBgScroll.subBg2OffsetY << 16) & 0x1ff0000);
            }
        }
        if (sGfx2dDispCtrl.offsetDirty & 0x80) {
            if (sGfx2dDispCtrl.affineMask & 8) {
                G2x_SetBGyAffine_(0x4001030, (Gfx2dAffine *)sGfx2dSubBg3Mtx, sGfx2dDispCtrl.subBg3CenterX, sGfx2dDispCtrl.subBg3CenterY,
                              sGfx2dDispCtrl.subBg3OffsetX, sGfx2dDispCtrl.subBg3OffsetY);
            } else {
                *(volatile u32*)0x400101c = (sGfx2dDispCtrl.subBg3OffsetX & 0x1ff) | ((sGfx2dDispCtrl.subBg3OffsetY << 16) & 0x1ff0000);
            }
        }
        sGfx2dDispCtrl.offsetDirty = 0;
    }
    if (sGfx2dDispCtrl.windowDirty != 0) {
        if (sGfx2dDispCtrl.windowDirty & 0x1) {
            *(volatile u16*)0x4000048 = (*(volatile u16*)0x4000048 & ~0x3f) | sGfx2dWindowBlend.mainWin0Planes | 0x20;
        }
        if (sGfx2dDispCtrl.windowDirty & 0x2) {
            *(volatile u16*)0x4000048 = (*(volatile u16*)0x4000048 & 0xffffc0ff) | (sGfx2dWindowBlend.mainWin1Planes << 8) | 0x2000;
        }
        if (sGfx2dDispCtrl.windowDirty & 0x4) {
            *(volatile u16*)0x4001048 = (*(volatile u16*)0x4001048 & ~0x3f) | sGfx2dWindowBlend.subWin0Planes | 0x20;
        }
        if (sGfx2dDispCtrl.windowDirty & 0x100) {
            *(volatile u16*)0x4001048 = (*(volatile u16*)0x4001048 & ~0x3f) | sGfx2dWindowBlend.subWin0Planes;
        }
        if (sGfx2dDispCtrl.windowDirty & 0x8) {
            *(volatile u16*)0x4001048 = (*(volatile u16*)0x4001048 & 0xffffc0ff) | (sGfx2dWindowBlend.subWin1Planes << 8) | 0x2000;
        }
        if (sGfx2dDispCtrl.windowDirty & 0x200) {
            *(volatile u16*)0x4001048 = (*(volatile u16*)0x4001048 & 0xffffc0ff) | (sGfx2dWindowBlend.subWin1Planes << 8);
        }
        if (sGfx2dDispCtrl.windowDirty & 0x10) {
            u32 d = sGfx2dWindowBlend.mainWin0Bottom;
            u32 b = sGfx2dDispCtrl.mainWin0Top;
            u32 a = sGfx2dDispCtrl.mainWin0Left;
            *(volatile u16*)0x4000040 = ((a << 8) & 0xff00) | (sGfx2dWindowBlend.mainWin0Right & 0xff);
            *(volatile u16*)0x4000044 = ((b << 8) & 0xff00) | (d & 0xff);
        }
        if (sGfx2dDispCtrl.windowDirty & 0x20) {
            u32 d = sGfx2dWindowBlend.mainWin1Bottom;
            u32 b = sGfx2dWindowBlend.mainWin1Top;
            u32 a = sGfx2dWindowBlend.mainWin1Left;
            *(volatile u16*)0x4000042 = ((a << 8) & 0xff00) | (sGfx2dWindowBlend.mainWin1Right & 0xff);
            *(volatile u16*)0x4000046 = ((b << 8) & 0xff00) | (d & 0xff);
        }
        if (sGfx2dDispCtrl.windowDirty & 0x40) {
            u32 d = sGfx2dWindowBlend.subWin0Bottom;
            u32 b = sGfx2dWindowBlend.subWin0Top;
            u32 a = sGfx2dWindowBlend.subWin0Left;
            *(volatile u16*)0x4001040 = ((a << 8) & 0xff00) | (sGfx2dWindowBlend.subWin0Right & 0xff);
            *(volatile u16*)0x4001044 = ((b << 8) & 0xff00) | (d & 0xff);
        }
        if (sGfx2dDispCtrl.windowDirty & 0x80) {
            u32 d = sGfx2dWindowBlend.subWin1Bottom;
            u32 b = sGfx2dWindowBlend.subWin1Top;
            u32 a = sGfx2dWindowBlend.subWin1Left;
            *(volatile u16*)0x4001042 = ((a << 8) & 0xff00) | (sGfx2dWindowBlend.subWin1Right & 0xff);
            *(volatile u16*)0x4001046 = ((b << 8) & 0xff00) | (d & 0xff);
        }
        sGfx2dDispCtrl.windowDirty = 0;
    }
    u32 t = sGfx2dWindowBlend.blendRequest;
    if (t & 0x20) {
        G2x_SetBlendBrightnessExt_(0x4000050, 0x1f, 0x20, 0x10, 0x10, 0);
    } else if (t & 0x10) {
        G2x_SetBlendAlpha_(0x4000050, sGfx2dWindowBlend.blendPlane1, sGfx2dWindowBlend.blendPlane2, sGfx2dWindowBlend.blendEv1,
                      0x10 - sGfx2dWindowBlend.blendEv1);
    } else if (t & 0x2) {
        G2x_SetBlendBrightnessExt_(0x4001050, 0x1f, 0x20, 0x10, 0x10, 0);
    } else if (t & 0x8) {
        G2x_SetBlendAlpha_(0x4001050, sGfx2dWindowBlend.blendPlane1, sGfx2dWindowBlend.blendPlane2, sGfx2dWindowBlend.blendEv1,
                      0x10 - sGfx2dWindowBlend.blendEv1);
    } else if (t != 0) {
        G2x_SetBlendBrightness_(0x4001050, sGfx2dWindowBlend.blendPlane1, sGfx2dWindowBlend.blendPlane2);
    }
    sGfx2dWindowBlend.blendRequest = 0;
}

extern "C" void Gfx2d_InitBgOffset(Gfx2dOffset* p) {
    p->x = 0;
    p->y = 0;
}

extern "C" void Gfx2d_InitBgAffine(Gfx2dAffine* p) {
    p->mtx00 = 0x1000;
    p->mtx01 = 0;
    p->mtx10 = 0;
    p->mtx11 = 0x1000;
    p->centerX = 0;
    p->centerY = 0;
    p->offsetX = 0;
    p->offsetY = 0;
}

extern "C" void Gfx2d_InitWindowRect(Gfx2dWindowRect* p) {
    p->left = 0;
    p->top = 0;
    p->right = 0xff;
    p->bottom = 0xc0;
    p->planes = 0;
}

extern "C" void Gfx2d_SetMainBg1Offset(u32 a, u32 b) {
    sGfx2dDispCtrl.offsetDirty |= 0x2;
    sGfx2dBgScroll.mainBg1OffsetX = a;
    sGfx2dBgScroll.mainBg1OffsetY = b;
}

extern "C" void Gfx2d_SetMainBg2Offset(s32 a, s32 b) {
    sGfx2dDispCtrl.offsetDirty |= 0x4;
    sGfx2dBgScroll.mainBg2OffsetX = a;
    sGfx2dBgScroll.mainBg2OffsetY = b;
}

extern "C" void Gfx2d_SetMainBg3Offset(s32 a, s32 b) {
    sGfx2dDispCtrl.offsetDirty |= 0x8;
    sGfx2dBgScroll.mainBg3OffsetX = a;
    sGfx2dBgScroll.mainBg3OffsetY = b;
}

extern "C" void Gfx2d_SetSubBg0Offset(u32 a, u32 b) {
    sGfx2dDispCtrl.offsetDirty |= 0x10;
    sGfx2dBgScroll.subBg0OffsetX = a;
    sGfx2dBgScroll.subBg0OffsetY = b;
}

extern "C" void Gfx2d_SetSubBg1Offset(u32 a, u32 b) {
    sGfx2dDispCtrl.offsetDirty |= 0x20;
    sGfx2dBgScroll.subBg1OffsetX = a;
    sGfx2dBgScroll.subBg1OffsetY = b;
}

extern "C" void Gfx2d_SetSubBg2Offset(s32 a, s32 b) {
    sGfx2dDispCtrl.offsetDirty |= 0x40;
    sGfx2dBgScroll.subBg2OffsetX = a;
    sGfx2dBgScroll.subBg2OffsetY = b;
}

extern "C" void Gfx2d_SetSubBg3Offset(s32 a, s32 b) {
    sGfx2dDispCtrl.offsetDirty |= 0x80;
    sGfx2dDispCtrl.subBg3OffsetX = a;
    sGfx2dDispCtrl.subBg3OffsetY = b;
}

extern "C" void Gfx2d_SetMainWin0Planes(u32 a) {
    sGfx2dWindowBlend.mainWin0Planes = a;
    sGfx2dDispCtrl.windowDirty |= 0x1;
}

extern "C" void Gfx2d_SetMainWin1Planes(u32 a) {
    sGfx2dWindowBlend.mainWin1Planes = a;
    sGfx2dDispCtrl.windowDirty |= 0x2;
}

extern "C" void Gfx2d_SetSubWin0Planes(u32 a, BOOL b) {
    sGfx2dWindowBlend.subWin0Planes = a;
    Gfx2d_MarkSubWin0PlanesDirty(b);
}

extern "C" void Gfx2d_SetSubWin1Planes(u32 a, BOOL b) {
    sGfx2dWindowBlend.subWin1Planes = a;
    Gfx2d_MarkSubWin1PlanesDirty(b);
}

extern "C" void Gfx2d_MarkSubWin0PlanesDirty(BOOL a) {
    u32 v;
    if (a) {
        v = 0x4;
    } else {
        v = 0x100;
    }
    sGfx2dDispCtrl.windowDirty |= v;
}

extern "C" void Gfx2d_MarkSubWin1PlanesDirty(BOOL a) {
    u32 v;
    if (a) {
        v = 0x8;
    } else {
        v = 0x200;
    }
    sGfx2dDispCtrl.windowDirty |= v;
}

extern "C" void Gfx2d_SetMainWinOutPlanes(u32 a) { sGfx2dDispCtrl.mainWinOutPlanes = a; }

extern "C" void Gfx2d_RemoveMainWinOutPlanes(u32 a) { sGfx2dDispCtrl.mainWinOutPlanes &= ~a; }

extern "C" void Gfx2d_SetSubWinOutPlanes(u32 a) { sGfx2dDispCtrl.subWinOutPlanes = a; }

extern "C" void Gfx2d_SetMainObjWinPlanes(u32 a) { sGfx2dDispCtrl.mainObjWinPlanes = a; }

extern "C" void Gfx2d_SetSubObjWinPlanes(u32 a) { sGfx2dDispCtrl.subObjWinPlanes = a; }

extern "C" void Gfx2d_SetMainWin0Rect(u32 a, u32 b, u32 c, u32 d) {
    sGfx2dDispCtrl.mainWin0Left = a;
    sGfx2dDispCtrl.mainWin0Top = b;
    sGfx2dWindowBlend.mainWin0Right = c;
    sGfx2dWindowBlend.mainWin0Bottom = d;
    sGfx2dDispCtrl.windowDirty |= 0x10;
}

extern "C" void Gfx2d_SetMainWin1Rect(u32 a, u32 b, u32 c, u32 d) {
    sGfx2dWindowBlend.mainWin1Left = a;
    sGfx2dWindowBlend.mainWin1Top = b;
    sGfx2dWindowBlend.mainWin1Right = c;
    sGfx2dWindowBlend.mainWin1Bottom = d;
    sGfx2dDispCtrl.windowDirty |= 0x20;
}

extern "C" void Gfx2d_SetSubWin0Rect(u32 a, u32 b, u32 c, u32 d) {
    sGfx2dWindowBlend.subWin0Left = a;
    sGfx2dWindowBlend.subWin0Top = b;
    sGfx2dWindowBlend.subWin0Right = c;
    sGfx2dWindowBlend.subWin0Bottom = d;
    sGfx2dDispCtrl.windowDirty |= 0x40;
}

extern "C" void Gfx2d_SetSubWin1Rect(u32 a, u32 b, u32 c, u32 d) {
    sGfx2dWindowBlend.subWin1Left = a;
    sGfx2dWindowBlend.subWin1Top = b;
    sGfx2dWindowBlend.subWin1Right = c;
    sGfx2dWindowBlend.subWin1Bottom = d;
    sGfx2dDispCtrl.windowDirty |= 0x80;
}

extern "C" void Gfx2d_SetMainBgModeState(u32 a) {
    sGfx2dDispCtrl.mainBgMode = a;
    sGfx2dDispCtrl.affineMask = (sGfx2dDispCtrl.affineMask & ~0x3) | ((0xf78u >> (a * 2)) & 0x3);
}

extern "C" void Gfx2d_SetSubBgModeState(u32 a) {
    sGfx2dDispCtrl.subBgMode = a;
    sGfx2dDispCtrl.affineMask = (sGfx2dDispCtrl.affineMask & ~0xc) | ((0x3de0u >> (a * 2)) & 0xc);
}

extern "C" void Gfx2d_SetMainBgMode(u32 a) {
    Gfx2d_SetMainBgModeState(a);
    GX_SetGraphicsMode(1, a, 1);
}

extern "C" void Gfx2d_SetSubBgMode(u32 a) {
    Gfx2d_SetSubBgModeState(a);
    GXS_SetGraphicsMode(a);
}

extern "C" u32 Gfx2d_GetMainWindows() { return sGfx2dDispCtrl.mainWindows; }

extern "C" void Gfx2d_SetMainWindows(u32 a) { sGfx2dDispCtrl.mainWindows = a; }

extern "C" void Gfx2d_EnableMainWindows(u32 a) { sGfx2dDispCtrl.mainWindows |= a; }

extern "C" void Gfx2d_DisableMainWindows(u32 a) { sGfx2dDispCtrl.mainWindows &= ~a; }

extern "C" u32 Gfx2d_GetSubWindows() { return sGfx2dDispCtrl.subWindows; }

extern "C" void Gfx2d_SetSubWindows(u32 a) { sGfx2dDispCtrl.subWindows = a; }

extern "C" void Gfx2d_EnableSubWindows(u32 a) { sGfx2dDispCtrl.subWindows |= a; }

extern "C" void Gfx2d_DisableSubWindows(u32 a) { sGfx2dDispCtrl.subWindows &= ~a; }

extern "C" u8 Gfx2d_GetMainPlanes(void) { return sGfx2dDispCtrl.mainPlanes; }

extern "C" void Gfx2d_SetMainPlanes(u8 a) { sGfx2dDispCtrl.mainPlanes = a; }

extern "C" void Gfx2d_ShowMainPlanes(u8 a) { sGfx2dDispCtrl.mainPlanes |= a; }

extern "C" void Gfx2d_HideMainPlanes(u8 a) { sGfx2dDispCtrl.mainPlanes &= ~a; }

extern "C" u8 Gfx2d_GetSubPlanes(void) { return sGfx2dDispCtrl.subPlanes; }

extern "C" void Gfx2d_SetSubPlanes(u8 a) { sGfx2dDispCtrl.subPlanes = a; }

extern "C" void Gfx2d_ShowSubPlanes(u8 a) { sGfx2dDispCtrl.subPlanes |= a; }

extern "C" void Gfx2d_HideSubPlanes(u8 a) { sGfx2dDispCtrl.subPlanes &= ~a; }

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
    sGfx2dWindowBlend.blendRequest |= 1;
}

extern "C" void Gfx2d_EndSubObjWinBrightness(void) {
    Gfx2d_DisableSubWindows(4);
    sGfx2dWindowBlend.blendRequest |= 2;
}

extern "C" void Gfx2d_SetSubBrightnessAllPlanes(void) {
    sGfx2dWindowBlend.blendPlane1 = 0x1f;
    sGfx2dWindowBlend.blendRequest |= 4;
}

extern "C" void Gfx2d_ExcludeSubBrightnessPlanes(u8 a) {
    sGfx2dWindowBlend.blendPlane1 &= ~a;
    sGfx2dWindowBlend.blendRequest |= 4;
}

extern "C" void Gfx2d_SetSubBrightness(u8 a) {
    sGfx2dWindowBlend.blendPlane2 = a;
    sGfx2dWindowBlend.blendRequest |= 4;
}

extern "C" void Gfx2d_SetSubAlphaBlend(u8 a, u8 b, u8 c) {
    sGfx2dWindowBlend.blendPlane1 = a;
    sGfx2dWindowBlend.blendPlane2 = b;
    sGfx2dWindowBlend.blendEv1 = c;
    sGfx2dWindowBlend.blendRequest |= 8;
}

extern "C" void Gfx2d_ResetSubBlend(void) { sGfx2dWindowBlend.blendRequest |= 2; }

extern "C" void Gfx2d_SetMainAlphaBlend(u8 a, u8 b, u8 c) {
    sGfx2dWindowBlend.blendPlane1 = a;
    sGfx2dWindowBlend.blendPlane2 = b;
    sGfx2dWindowBlend.blendEv1 = c;
    sGfx2dWindowBlend.blendRequest |= 0x10;
}

extern "C" void Gfx2d_ResetMainBlend(void) { sGfx2dWindowBlend.blendRequest |= 0x20; }


