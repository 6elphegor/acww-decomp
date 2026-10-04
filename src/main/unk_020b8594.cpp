#include "types.h"
#include "sys/PrioListNode.h"
#include "gfx/BgTransfer.h"
#include "gfx/TexTransfer.h"
#include "gfx/VramTask.h"
#include "gfx/MatTexVramTask.h"

extern "C" {
// Other files
void Gfx2d_LoadPaletteRange(u32 a, u32 b, u32 c, u32 d, u32 e);
void Gfx2d_LoadScreen(u32 a, u32 b, u32 c, u32 d);
void Gfx2d_LoadCharRange(u32 a, u32 b, u32 c, u32 d, u32 e);
u32 _ZN12G3dResAccess10findMatIdxEi(void *res, u32 idx);
u32 _ZN12G3dResAccess10getTexDataEi(void *p, u32 x);
u32 _ZN12G3dResAccess11getPlttDataEi(void *p, u32 x);
u32 _ZN10G3dMatData10getTexSizeEv(void *p);
u32 _ZN12G3dResAccess11getPlttSizeEi(void *p, u32 x);
u32 _ZN10G3dMatData10getTexAddrEv(void *p);
u32 _ZN10G3dMatData11getPlttAddrEv(void *p);
void DC_FlushRange(void *p, u32 x);
void NNS_G3dTexLoad(void *p, u32 x);
void NNS_G3dPlttLoad(void *p, u32 x);
void GX_BeginLoadTexPltt(void);
void GX_LoadTexPltt(u32 a, u32 b, u32 c);
void GX_EndLoadTexPltt(void);
void GX_BeginLoadTex(void);
void GX_LoadTex(u32 a, u32 b, u32 c);
void GX_EndLoadTex(void);
}



extern "C" {
u8 BgTransfer_GetPaletteRangeCost(BgTransfer *p);
u8 BgTransfer_GetPaletteCost(BgTransfer *p);
u8 BgTransfer_GetScreenCost(BgTransfer *p);
u8 TexTransfer_GetPlttCost(TexTransfer *p);
}



extern "C" {
void VramQueue2d_Dequeue(VramTask *p);
BOOL VramQueue2d_Enqueue(VramTask *p);
}


class TexVramTask : public VramTask {
public:
    TexTransfer xfer;

    TexVramTask();
    virtual BOOL execute();
    BOOL requestMatTex(void *a, u32 b, u32 c);
    void cancel(void);
    void prepare(void);
    BOOL requestTexResource(u32 *a, u8 b);
    BOOL requestPltt(u32 a, u32 b, u32 c, u8 d);
    BOOL requestTex(u32 a, u32 b, u32 c, u8 d);
    void clear(void);
};

class BgVramTask : public VramTask {
public:
    BgTransfer xfer;

    BgVramTask();
    virtual BOOL execute();
    virtual void clear();
    BOOL requestPaletteRange(u32 a, u8 b, u32 c, u8 d);
    BOOL requestPalette(u32 a, u8 b, u32 c);
    BOOL requestScreen(u32 a, u8 b, u32 c, u32 d);
    BOOL requestChars(u32 a, u8 b, u32 c, u32 d, u32 e);
    void prepare(void);
    void cancel(void);
};

class BgVramTaskPair : public BgVramTask {
public:
    BgTransfer xfer2;

    BgVramTaskPair();
    virtual BOOL execute();
    virtual void clear();
    BOOL requestCharsAndPalette(u32 a, u8 b, u32 c, u32 d, u32 e, u32 f, u8 g);
    BOOL requestCharPair(u32 a, u32 b, u8 c, u32 d, u32 e, u32 f, u32 g);
};

void VramTask::resetState(void) {
    state = 0;
    kind = 0xa;
    cost = 1;
}

void TexTransfer::clear(void) {
    dstAddr = 0;
    src = 0;
    size = 0;
}

void TexTransfer::set(u32 a, u32 b, u32 c) {
    dstAddr = a;
    src = b;
    size = c;
}

void TexTransfer::loadTex(void) {
    DC_FlushRange((void *)src, size);
    GX_BeginLoadTex();
    GX_LoadTex(src, dstAddr, size);
    GX_EndLoadTex();
}

void TexTransfer::loadTexPltt(void) {
    DC_FlushRange((void *)src, size);
    GX_BeginLoadTexPltt();
    GX_LoadTexPltt(src, dstAddr, size);
    GX_EndLoadTexPltt();
}

void TexTransfer::loadTexResource(void) {
    u32 *p = (u32 *)src;
    DC_FlushRange(p, p[1]);
    NNS_G3dTexLoad(p, 1);
    NNS_G3dPlttLoad(p, 1);
}

u8 TexTransfer::getTexCost(void) {
    u8 t = size >> 11;
    return t + 1;
}

extern "C" u8 TexTransfer_GetPlttCost(TexTransfer *p) {
    return 1;
}

// ---- TexTransfer ----
u8 TexTransfer::getResCost(void) {
    u8 t = size >> 11;
    return t + 1;
}

void BgTransfer::clear(void) {
    buf = 0;
    layer = 0xff;
    loadArg0 = 0;
    loadArg1 = 0;
    loadArg2 = 0;
}

void BgTransfer::setChars(u32 a, u8 b, u32 c, u32 d, u32 e) {
    buf = a;
    layer = b;
    loadArg0 = c;
    loadArg1 = d;
    loadArg2 = e;
}

void BgTransfer::loadChars(void) {
    Gfx2d_LoadCharRange(buf, layer, loadArg0, loadArg1, loadArg2);
}

u8 BgTransfer::getCharCost(void) {
    return ((loadArg2 - loadArg1) + 0x3f) >> 6;
}

void BgTransfer::setScreen(u32 a, u8 b, u32 c, u32 d) {
    buf = a;
    layer = b;
    loadArg0 = c;
    loadArg1 = d;
}

void BgTransfer::loadScreen(void) {
    Gfx2d_LoadScreen(buf, layer, loadArg0, loadArg1);
}

extern "C" u8 BgTransfer_GetScreenCost(BgTransfer *p) {
    return 1;
}

void BgTransfer::setPalette(u32 a, u8 b, u32 c) {
    buf = a;
    layer = b;
    loadArg0 = c;
}

void BgTransfer::loadPalette(void) {
    u32 t = (u8)loadArg0;
    Gfx2d_LoadPaletteRange(buf, layer, t, t, t);
}

extern "C" u8 BgTransfer_GetPaletteCost(BgTransfer *p) {
    return 1;
}

void BgTransfer::setPaletteRange(u32 a, u8 b, u32 c, u8 d) {
    buf = a;
    layer = b;
    loadArg0 = c;
    loadArg1 = d;
}

// ---- BgTransfer ----
void BgTransfer::loadPaletteRange(void) {
    Gfx2d_LoadPaletteRange(buf, layer, (u8)loadArg0, (u8)loadArg0, (u8)loadArg1);
}

extern "C" u8 BgTransfer_GetPaletteRangeCost(BgTransfer *p) {
    return 1;
}

TexVramTask::TexVramTask() {
    xfer.clear();
}

void TexVramTask::clear(void) {
    resetState();
    xfer.clear();
}

BOOL TexVramTask::execute() {
    switch (kind) {
    case 0:
        xfer.loadTexResource();
        break;
    case 1:
        xfer.loadTex();
        break;
    case 2:
        xfer.loadTexPltt();
        break;
    }
    return TRUE;
}

BOOL TexVramTask::requestTex(u32 a, u32 b, u32 c, u8 d) {
    prepare();
    kind = 1;
    xfer.set(b, a, c);
    cost = xfer.getTexCost();
    priority = d;
    if (enqueueTex()) {
        return TRUE;
    }
    clear();
    return FALSE;
}

BOOL TexVramTask::requestPltt(u32 a, u32 b, u32 c, u8 d) {
    prepare();
    kind = 2;
    xfer.set(b, a, c);
    cost = TexTransfer_GetPlttCost(&xfer);
    priority = d;
    if (enqueueTex()) {
        return TRUE;
    }
    clear();
    return FALSE;
}

BOOL TexVramTask::requestTexResource(u32 *a, u8 b) {
    prepare();
    kind = 0;
    xfer.set(0, (u32)a, a[1]);
    cost = xfer.getResCost();
    priority = b;
    if (enqueueTex()) {
        return TRUE;
    }
    clear();
    return FALSE;
}

void TexVramTask::prepare(void) {
    cancel();
    state = 1;
}

void TexVramTask::cancel(void) {
    dequeueTex();
    clear();
}

// ---- TexVramTask ----
BOOL TexVramTask::requestMatTex(void *a, u32 b, u32 c) {
    u8 *base = (u8 *)a + *(u32 *)((u8 *)a + 8);
    u8 *tbl = base + 4;
    u16 off = *(u16 *)(base + 0xa);
    u8 *ent = tbl + off;
    ent += *(u16 *)ent * b;
    u8 *rec = base + *(u32 *)(ent + 4);
    u32 v1 = _ZN10G3dMatData10getTexSizeEv(rec);
    u32 v2 = _ZN10G3dMatData10getTexAddrEv(rec);
    return requestTex(c, v2, v1, 2);
}

MatTexVramTask::MatTexVramTask() {
    texXfer.clear();
    plttXfer.clear();
}

void MatTexVramTask::clear(void) {
    texXfer.clear();
    plttXfer.clear();
}

void MatTexVramTask::cancel(void) {
    dequeueTex();
    clear();
}

BOOL MatTexVramTask::execute() {
    if (kind == 3) {
        texXfer.loadTex();
        plttXfer.loadTexPltt();
    }
    return TRUE;
}

void MatTexVramTask::prepare(void) {
    cancel();
    state = 1;
}

// ---- MatTexVramTask ----
BOOL MatTexVramTask::request(void *a, u32 b, void *c, u32 d, u32 e) {
    prepare();
    u8 *base = (u8 *)a + *(u32 *)((u8 *)a + 8);
    u32 idx = _ZN12G3dResAccess10findMatIdxEi(a, b);
    u8 *tbl = base + 4;
    u16 off = *(u16 *)(base + 0xa);
    u8 *ent = tbl + off;
    ent += *(u16 *)ent * idx;
    u8 *rec = base + *(u32 *)(ent + 4);
    u32 v1 = _ZN12G3dResAccess10getTexDataEi(c, d);
    u32 v2 = _ZN12G3dResAccess11getPlttDataEi(c, e);
    u32 v3 = _ZN10G3dMatData10getTexSizeEv(rec);
    u32 v4 = _ZN12G3dResAccess11getPlttSizeEi(c, e);
    kind = 3;
    texXfer.set(_ZN10G3dMatData10getTexAddrEv(rec), v1, v3);
    plttXfer.set(_ZN10G3dMatData11getPlttAddrEv(rec), v2, v4);
    cost = texXfer.getTexCost() + TexTransfer_GetPlttCost(&plttXfer);
    priority = 0;
    if (enqueueTex()) {
        return TRUE;
    }
    clear();
    return FALSE;
}

BgVramTask::BgVramTask() {
    xfer.clear();
}

void BgVramTask::clear() {
    resetState();
    xfer.clear();
}

void BgVramTask::cancel(void) {
    VramQueue2d_Dequeue(this);
    clear();
}

BOOL BgVramTask::execute() {
    switch (kind) {
    case 4:
        xfer.loadChars();
        break;
    case 5:
        xfer.loadScreen();
        break;
    case 6:
        xfer.loadPalette();
        break;
    case 7:
        xfer.loadPaletteRange();
        break;
    default:
        return FALSE;
    }
    return TRUE;
}

void BgVramTask::prepare(void) {
    cancel();
    state = 1;
}

BOOL BgVramTask::requestChars(u32 a, u8 b, u32 c, u32 d, u32 e) {
    prepare();
    kind = 4;
    xfer.setChars(a, b, c, d, e);
    cost = xfer.getCharCost();
    priority = 4;
    if (VramQueue2d_Enqueue(this)) {
        return TRUE;
    }
    clear();
    return FALSE;
}

BOOL BgVramTask::requestScreen(u32 a, u8 b, u32 c, u32 d) {
    prepare();
    kind = 5;
    xfer.setScreen(a, b, c, d);
    cost = BgTransfer_GetScreenCost(&xfer);
    priority = 4;
    if (VramQueue2d_Enqueue(this)) {
        return TRUE;
    }
    clear();
    return FALSE;
}

BOOL BgVramTask::requestPalette(u32 a, u8 b, u32 c) {
    prepare();
    kind = 6;
    xfer.setPalette(a, b, c);
    cost = BgTransfer_GetPaletteCost(&xfer);
    priority = 4;
    if (VramQueue2d_Enqueue(this)) {
        return TRUE;
    }
    clear();
    return FALSE;
}

// ---- BgVramTask ----
BOOL BgVramTask::requestPaletteRange(u32 a, u8 b, u32 c, u8 d) {
    prepare();
    kind = 7;
    xfer.setPaletteRange(a, b, c, d);
    cost = BgTransfer_GetPaletteRangeCost(&xfer);
    priority = 4;
    if (VramQueue2d_Enqueue(this)) {
        return TRUE;
    }
    clear();
    return FALSE;
}

BgVramTaskPair::BgVramTaskPair() {
    xfer2.clear();
}

void BgVramTaskPair::clear() {
    BgVramTask::clear();
    xfer2.clear();
}

BOOL BgVramTaskPair::execute() {
    if (BgVramTask::execute()) {
        return TRUE;
    }
    switch (kind) {
    case 8:
        xfer.loadChars();
        xfer2.loadChars();
        break;
    case 9:
        xfer.loadChars();
        xfer2.loadPalette();
        break;
    default:
        return FALSE;
    }
    return TRUE;
}

