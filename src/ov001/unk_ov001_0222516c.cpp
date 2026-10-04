// mwcc-flags: -O4,p
#include "types.h"

#pragma thumb off

struct WfcTextCanvas {
    u8 pad_00[0x18];
    void (*unk_18)(WfcTextCanvas *, s32);
    u8 pad_1c[4];
    WfcTextCanvas *charCanvas;
    void *font;
    s32 hSpace;
    s32 vSpace;
    void *charBuffer;
    u16 charName;
    u8 areaWidth;
    u8 areaHeight;
};

struct Unk_ov001_0222df44_Sub {
    u8 pad_00[0x20];
    WfcTextCanvas *charCanvas;
    void *font;
    s32 hSpace;
    s32 vSpace;
    void *charBuffer;
    u32 transferTask;
};

struct Unk_ov001_0222df44_S {
    u8 fonts[0x718];
    Unk_ov001_0222df44_Sub bgCanvases[2];
    void *objCanvasPool;
    void *fontFiles[2];
    u8 mainBgDirty;
    u8 subBgDirty;
};

extern "C" {
extern const u16 sWfcTextBgCharBase[2];
extern const u16 sWfcTextBgSize[4];
#define data_ov001_0222a45a (sWfcTextBgSize + 1)
extern const u16 gWfcScreenRect[4];
extern void *sWfcFontPaths[2];
extern char data_ov001_0222b894[];
extern char data_ov001_0222b8a4[];

u32 WfcTask_Add(u32, void *, void *, u32);
void *WfcHeap_AllocClear(u32, u32);
void *WfcHeap_Alloc(u32, u32);
void WfcHeap_FreeAndClear(void *);
void *WfcObj_GetOam(void *, u32);
void WfcObj_SetAffineMode(void *, s32, u32, u32);
void WfcObj_SetModePalette(void *, s32, u32, u32);
void WfcObj_SetPriority(void *, s32, s32);
void NNS_G2dArrangeOBJ1D(void *, u32, u32, s32, s32, s32, u32, s32);
void NNSi_G2dTextCanvasDrawTextRect(void *, s32, s32, s32, s32, s32, s32, s32);
u32 NNS_G2dFontFindGlyphIndex(void *, u32);
void *NNS_G2dFontGetCharWidthsFromIndex(void *, u32);
void NNS_G2dCharCanvasDrawChar(s32, void *, s32, s32, s32, u16);
void NNSi_G2dTextCanvasDrawText(void *, s32, s32, s32, s32, s32);
void WfcTask_Delete(u32, u32);
void *G2_GetBG0CharPtr();
void MIi_CpuClear16(u32, void *, u32);
void DC_FlushRange(void *, u32);
void GX_LoadBG0Char(void *, u32, u32);
void GXS_LoadBG0Char(void *, u32, u32);
void NNS_G2dCharCanvasInitForBG(void *, void *, u32, u32, u32);
void *G2S_GetBG0ScrPtr();
void *G2_GetBG0ScrPtr();
void NNS_G2dMapScrToCharText(void *, u32, u32, s32, s32, s32, u32, s32);
void WfcVram_FreeObjChar(void *);
void WfcPool_Put(void *, void *);
void *WfcPool_Get(void *);
void *WfcVram_AllocObjChar(u32, u32, u32, s32 *);
void *NNSi_G2dCalcRequiredOBJ(u32, u32);
void NNS_G2dCharCanvasInitForOBJ1D(void *, u32, u32, u32, u32);
void WfcFs_FreeFile(void *);
void WfcPool_Destroy(void *);
void *WfcPool_CreateFrom(u32, void *, u32);
void *WfcFs_LoadFile(void *, u32, u32);
void NNS_G2dFontInitUTF16(void *, void *);
void WfcText_RequestTransfer(void *o);
void WfcText_ArrangeObj(WfcTextCanvas *o, s32 a1, s32 a2, void *h, s32 a4);
void WfcText_Clear(WfcTextCanvas *o, s32 a);
void WfcText_DrawTextRect(WfcTextCanvas *o, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g);
void WfcText_DrawMonospace(s32 a0, s32 a1, s32 a2, s32 a3, s32 w, u16 *p, s32 idx);
void WfcText_DrawChar(s32 a0, s32 a1, s32 a2, s32 a3, u16 a4, s32 idx);
void WfcText_DrawText(WfcTextCanvas *o, s32 a, s32 b, s32 c, s32 d, s32 e);
void WfcText_DestroyBgCanvas(u32 idx);
void WfcText_ReleaseBgCanvas(Unk_ov001_0222df44_Sub *o);
void WfcText_BgTransferTask(u32 task, u8 *flag);
WfcTextCanvas *WfcText_CreateBgCanvas(u32 idx, u32 slot);
void WfcText_DestroyObjCanvas(Unk_ov001_0222df44_Sub *o);
WfcTextCanvas *WfcText_CreateObjCanvas(u32 mode, u32 w, u32 h, u32 a3, u32 *out, u32 slot);
void WfcText_Shutdown();
void WfcText_Init();
Unk_ov001_0222df44_S *sWfcText;
}

extern "C" const u16 sWfcTextBgCharBase[2] = {0x0000, 0x0180};
extern "C" const u16 sWfcTextBgSize[4] = {0x0020, 0x0018, 0x0020, 0x000c};
extern "C" const u16 gWfcScreenRect[4] = {0x0000, 0x0000, 0x0100, 0x00c0};
extern "C" void *sWfcFontPaths[2] = {data_ov001_0222b894, data_ov001_0222b8a4};
extern "C" char data_ov001_0222b894[] = "msg/lc_m.NFTR.l";
extern "C" char data_ov001_0222b8a4[] = "msg/lc_s.NFTR.l";

void WfcText_Init() {
    Unk_ov001_0222df44_S *g = (Unk_ov001_0222df44_S *)WfcHeap_Alloc(0x798, 4);
    sWfcText = g;
    void *pool = WfcPool_CreateFrom(0x20, &g->fonts[0x18], 0x38);
    sWfcText->objCanvasPool = pool;
    s32 i;
    for (i = 0; i < 2; i++) {
        void *hh = WfcFs_LoadFile(sWfcFontPaths[i], 0, 4);
        sWfcText->fontFiles[i] = hh;
        Unk_ov001_0222df44_S *q = sWfcText;
        NNS_G2dFontInitUTF16(&q->fonts[i * 0xc], q->fontFiles[i]);
    }
}

void WfcText_Shutdown() {
    s32 i;
    for (i = 0; i < 2; i++) {
        WfcFs_FreeFile(sWfcText->fontFiles[i]);
    }
    WfcPool_Destroy(sWfcText->objCanvasPool);
    WfcHeap_FreeAndClear(&sWfcText);
}

WfcTextCanvas *WfcText_CreateObjCanvas(u32 mode, u32 w, u32 h, u32 a3, u32 *out, u32 slot) {
    WfcTextCanvas *e = (WfcTextCanvas *)WfcPool_Get(sWfcText->objCanvasPool);
    e->areaWidth = w;
    e->areaHeight = h;
    s32 t;
    e->charBuffer = WfcVram_AllocObjChar(mode, w * h, a3, &t);
    e->charName = t;
    *out = (u32)NNSi_G2dCalcRequiredOBJ(w, h);
    u32 tt = t;
    u32 base = mode == 1 ? 0x6600000 : 0x6400000;
    NNS_G2dCharCanvasInitForOBJ1D(e, base + (tt << 7), w, h, 4);
    e->unk_18(e, 0);
    void *ent = &sWfcText->fonts[slot * 0xc];
    e->charCanvas = e;
    e->font = ent;
    e->hSpace = 1;
    e->vSpace = 1;
    return e;
}

void WfcText_DestroyObjCanvas(Unk_ov001_0222df44_Sub *o) {
    WfcVram_FreeObjChar(o->charBuffer);
    WfcPool_Put(sWfcText->objCanvasPool, o);
}

WfcTextCanvas *WfcText_CreateBgCanvas(u32 idx, u32 slot) {
    Unk_ov001_0222df44_Sub *o;
    u32 h;
    u32 w;
    h = data_ov001_0222a45a[idx * 2];
    w = sWfcTextBgSize[idx * 2];
    o = &sWfcText->bgCanvases[idx];
    o->charBuffer = WfcHeap_Alloc((w * h) << 5, 0x20);
    if (idx == 1) {
        volatile u16 *reg = (volatile u16 *)0x4001008;
        *reg = *reg & ~0x40;
        *reg = (*reg & 0x43) | 0xc00;
    } else {
        volatile u16 *reg = (volatile u16 *)0x4000008;
        *reg = *reg & ~0x40;
        *reg = (*reg & 0x43) | 0xc00;
    }
    NNS_G2dCharCanvasInitForBG(o, o->charBuffer, w, h, 4);
    void *ent = &sWfcText->fonts[slot * 0xc];
    o->charCanvas = (WfcTextCanvas *)o;
    o->font = ent;
    o->hSpace = 1;
    o->vSpace = 1;
    void *r;
    if (idx == 1) {
        r = G2S_GetBG0ScrPtr();
    } else {
        r = G2_GetBG0ScrPtr();
    }
    NNS_G2dMapScrToCharText(r, w, h, 0, 0, 0x20, sWfcTextBgCharBase[idx], 0xf);
    WfcText_Clear((WfcTextCanvas *)o, 0);
    o->transferTask = WfcTask_Add(1, (void *)WfcText_BgTransferTask, (u8 *)&sWfcText->mainBgDirty + idx, 0xc8);
    return (WfcTextCanvas *)o;
}

void WfcText_BgTransferTask(u32 task, u8 *flag) {
    if (*flag == 0) {
        return;
    }
    Unk_ov001_0222df44_S *g = sWfcText;
    if ((void *)flag == &g->mainBgDirty) {
        u32 sz = (sWfcTextBgSize[0] * sWfcTextBgSize[1]) << 5;
        DC_FlushRange(g->bgCanvases[0].charBuffer, sz);
        GX_LoadBG0Char(sWfcText->bgCanvases[0].charBuffer, sWfcTextBgCharBase[0] << 5, sz);
    } else {
        u32 sz = (sWfcTextBgSize[2] * sWfcTextBgSize[3]) << 5;
        DC_FlushRange(g->bgCanvases[1].charBuffer, sz);
        GXS_LoadBG0Char(sWfcText->bgCanvases[1].charBuffer, sWfcTextBgCharBase[1] << 5, sz);
    }
    *flag = 0;
}

void WfcText_ReleaseBgCanvas(Unk_ov001_0222df44_Sub *o) {
    WfcTask_Delete(1, o->transferTask);
    if ((void *)o == &sWfcText->bgCanvases[0]) {
        void *r = G2_GetBG0CharPtr();
        volatile u16 z = 0;
        MIi_CpuClear16(z, r, (sWfcTextBgSize[0] * sWfcTextBgSize[1]) << 5);
    } else {
        void *r = G2_GetBG0CharPtr();
        volatile u16 z = 0;
        MIi_CpuClear16(z, r, (sWfcTextBgSize[2] * sWfcTextBgSize[3]) << 5);
    }
    WfcHeap_FreeAndClear(&o->charBuffer);
}

void WfcText_DestroyBgCanvas(u32 idx) {
    WfcText_ReleaseBgCanvas(&sWfcText->bgCanvases[idx]);
}

void WfcText_DrawText(WfcTextCanvas *o, s32 a, s32 b, s32 c, s32 d, s32 e) {
    NNSi_G2dTextCanvasDrawText(&o->charCanvas, a, b, c, d, e);
}

void WfcText_DrawChar(s32 a0, s32 a1, s32 a2, s32 a3, u16 a4, s32 idx) {
    NNS_G2dCharCanvasDrawChar(a0, &sWfcText->fonts[idx * 0xc], a1, a2, a3, a4);
}

void WfcText_DrawMonospace(s32 a0, s32 a1, s32 a2, s32 a3, s32 w, u16 *p, s32 idx) {
    if (*p == 0) {
        return;
    }
    do {
        void *e = &sWfcText->fonts[idx * 0xc];
        u32 t = NNS_G2dFontFindGlyphIndex(e, *p);
        if (t == 0xffff) {
            t = ((u16 *)*(void **)e)[1];
        }
        s8 *r = (s8 *)NNS_G2dFontGetCharWidthsFromIndex(e, t);
        s32 v;
        if (*(u16 *)((u8 *)e + 8) != 0) {
            v = r[0] + ((u8 *)r)[1];
        } else {
            v = r[2];
        }
        WfcText_DrawChar(a0, a1 + ((w - v) >> 1), a2, a3, *p, idx);
        p++;
        a1 += w;
    } while (*p != 0);
}

void WfcText_DrawTextRect(WfcTextCanvas *o, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g) {
    NNSi_G2dTextCanvasDrawTextRect(&o->charCanvas, a, b, c, d, e, f, g);
}

void WfcText_Clear(WfcTextCanvas *o, s32 a) {
    o->unk_18(o, a);
}

void WfcText_ArrangeObj(WfcTextCanvas *o, s32 a1, s32 a2, void *h, s32 a4) {
    void *e = WfcObj_GetOam(h, 0);
    WfcObj_SetAffineMode(h, -1, 0, 0);
    WfcObj_SetModePalette(h, -1, 0, 0xf);
    WfcObj_SetPriority(h, -1, a4);
    NNS_G2dArrangeOBJ1D(e, o->areaWidth, o->areaHeight, a1, a2, 0, o->charName, 2);
}

void WfcText_RequestTransfer(void *o) {
    Unk_ov001_0222df44_S *g = sWfcText;
    if (o == &g->bgCanvases[0]) {
        g->mainBgDirty = 1;
    } else {
        g->subBgDirty = 1;
    }
}

