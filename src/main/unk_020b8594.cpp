#include "types.h"

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

// Five-word command record (fields depend on the mode it was set up for).
struct BgTransfer {
    u32 unk_00;
    u8 unk_04;
    u32 unk_08;
    u32 unk_0c;
    u32 unk_10;

    void loadPaletteRange(void);
    void setPaletteRange(u32 a, u8 b, u32 c, u8 d);
    void loadPalette(void);
    void setPalette(u32 a, u8 b, u32 c);
    void loadScreen(void);
    void setScreen(u32 a, u8 b, u32 c, u32 d);
    u8 getCharCost(void);
    void loadChars(void);
    void setChars(u32 a, u8 b, u32 c, u32 d, u32 e);
    void clear(void);
};

// Three-word record used by three modes.
struct TexTransfer {
    u32 unk_00;
    u32 unk_04;
    u32 unk_08;

    u8 getResCost(void);
    u8 getTexCost(void);
    void loadTexResource(void);
    void loadTexPltt(void);
    void loadTex(void);
    void set(u32 a, u32 b, u32 c);
    void clear(void);
};

extern "C" {
u8 BgTransfer_GetPaletteRangeCost(BgTransfer *p);
u8 BgTransfer_GetPaletteCost(BgTransfer *p);
u8 BgTransfer_GetScreenCost(BgTransfer *p);
u8 TexTransfer_GetPlttCost(TexTransfer *p);
}

class Unk_020b83b0 {
public:
    u32 unk_04;
    u32 unk_08;
    u8 unk_0c;

    Unk_020b83b0() : unk_04(0), unk_08(0), unk_0c(0xff) {}
};

class VramTask : public Unk_020b83b0 {
public:
    u8 unk_0d;
    u8 unk_0e;
    u8 unk_0f;

    VramTask();
    virtual BOOL execute() = 0;
    void dequeueTex(void);
    BOOL enqueueTex(void);
    void resetState(void);
};

extern "C" {
void VramQueue2d_Dequeue(VramTask *p);
BOOL VramQueue2d_Enqueue(VramTask *p);
}

class MatTexVramTask: public VramTask {
public:
    TexTransfer unk_10;
    TexTransfer unk_1c;

    MatTexVramTask();
    virtual BOOL execute();
    BOOL request(void *a, u32 b, void *c, u32 d, u32 e);
    void prepare(void);
    void cancel(void);
    void clear(void);
};

class TexVramTask : public VramTask {
public:
    TexTransfer unk_10;

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
    BgTransfer unk_10;

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
    BgTransfer unk_24;

    BgVramTaskPair();
    virtual BOOL execute();
    virtual void clear();
    BOOL requestCharsAndPalette(u32 a, u8 b, u32 c, u32 d, u32 e, u32 f, u8 g);
    BOOL requestCharPair(u32 a, u32 b, u8 c, u32 d, u32 e, u32 f, u32 g);
};

void VramTask::resetState(void) {
    unk_0d = 0;
    unk_0e = 0xa;
    unk_0f = 1;
}

void TexTransfer::clear(void) {
    unk_00 = 0;
    unk_04 = 0;
    unk_08 = 0;
}

void TexTransfer::set(u32 a, u32 b, u32 c) {
    unk_00 = a;
    unk_04 = b;
    unk_08 = c;
}

void TexTransfer::loadTex(void) {
    DC_FlushRange((void *)unk_04, unk_08);
    GX_BeginLoadTex();
    GX_LoadTex(unk_04, unk_00, unk_08);
    GX_EndLoadTex();
}

void TexTransfer::loadTexPltt(void) {
    DC_FlushRange((void *)unk_04, unk_08);
    GX_BeginLoadTexPltt();
    GX_LoadTexPltt(unk_04, unk_00, unk_08);
    GX_EndLoadTexPltt();
}

void TexTransfer::loadTexResource(void) {
    u32 *p = (u32 *)unk_04;
    DC_FlushRange(p, p[1]);
    NNS_G3dTexLoad(p, 1);
    NNS_G3dPlttLoad(p, 1);
}

u8 TexTransfer::getTexCost(void) {
    u8 t = unk_08 >> 11;
    return t + 1;
}

extern "C" u8 TexTransfer_GetPlttCost(TexTransfer *p) {
    return 1;
}

// ---- TexTransfer ----
u8 TexTransfer::getResCost(void) {
    u8 t = unk_08 >> 11;
    return t + 1;
}

void BgTransfer::clear(void) {
    unk_00 = 0;
    unk_04 = 0xff;
    unk_08 = 0;
    unk_0c = 0;
    unk_10 = 0;
}

void BgTransfer::setChars(u32 a, u8 b, u32 c, u32 d, u32 e) {
    unk_00 = a;
    unk_04 = b;
    unk_08 = c;
    unk_0c = d;
    unk_10 = e;
}

void BgTransfer::loadChars(void) {
    Gfx2d_LoadCharRange(unk_00, unk_04, unk_08, unk_0c, unk_10);
}

u8 BgTransfer::getCharCost(void) {
    return ((unk_10 - unk_0c) + 0x3f) >> 6;
}

void BgTransfer::setScreen(u32 a, u8 b, u32 c, u32 d) {
    unk_00 = a;
    unk_04 = b;
    unk_08 = c;
    unk_0c = d;
}

void BgTransfer::loadScreen(void) {
    Gfx2d_LoadScreen(unk_00, unk_04, unk_08, unk_0c);
}

extern "C" u8 BgTransfer_GetScreenCost(BgTransfer *p) {
    return 1;
}

void BgTransfer::setPalette(u32 a, u8 b, u32 c) {
    unk_00 = a;
    unk_04 = b;
    unk_08 = c;
}

void BgTransfer::loadPalette(void) {
    u32 t = (u8)unk_08;
    Gfx2d_LoadPaletteRange(unk_00, unk_04, t, t, t);
}

extern "C" u8 BgTransfer_GetPaletteCost(BgTransfer *p) {
    return 1;
}

void BgTransfer::setPaletteRange(u32 a, u8 b, u32 c, u8 d) {
    unk_00 = a;
    unk_04 = b;
    unk_08 = c;
    unk_0c = d;
}

// ---- BgTransfer ----
void BgTransfer::loadPaletteRange(void) {
    Gfx2d_LoadPaletteRange(unk_00, unk_04, (u8)unk_08, (u8)unk_08, (u8)unk_0c);
}

extern "C" u8 BgTransfer_GetPaletteRangeCost(BgTransfer *p) {
    return 1;
}

TexVramTask::TexVramTask() {
    unk_10.clear();
}

void TexVramTask::clear(void) {
    resetState();
    unk_10.clear();
}

BOOL TexVramTask::execute() {
    switch (unk_0e) {
    case 0:
        unk_10.loadTexResource();
        break;
    case 1:
        unk_10.loadTex();
        break;
    case 2:
        unk_10.loadTexPltt();
        break;
    }
    return TRUE;
}

BOOL TexVramTask::requestTex(u32 a, u32 b, u32 c, u8 d) {
    prepare();
    unk_0e = 1;
    unk_10.set(b, a, c);
    unk_0f = unk_10.getTexCost();
    unk_0c = d;
    if (enqueueTex()) {
        return TRUE;
    }
    clear();
    return FALSE;
}

BOOL TexVramTask::requestPltt(u32 a, u32 b, u32 c, u8 d) {
    prepare();
    unk_0e = 2;
    unk_10.set(b, a, c);
    unk_0f = TexTransfer_GetPlttCost(&unk_10);
    unk_0c = d;
    if (enqueueTex()) {
        return TRUE;
    }
    clear();
    return FALSE;
}

BOOL TexVramTask::requestTexResource(u32 *a, u8 b) {
    prepare();
    unk_0e = 0;
    unk_10.set(0, (u32)a, a[1]);
    unk_0f = unk_10.getResCost();
    unk_0c = b;
    if (enqueueTex()) {
        return TRUE;
    }
    clear();
    return FALSE;
}

void TexVramTask::prepare(void) {
    cancel();
    unk_0d = 1;
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
    unk_10.clear();
    unk_1c.clear();
}

void MatTexVramTask::clear(void) {
    unk_10.clear();
    unk_1c.clear();
}

void MatTexVramTask::cancel(void) {
    dequeueTex();
    clear();
}

BOOL MatTexVramTask::execute() {
    if (unk_0e == 3) {
        unk_10.loadTex();
        unk_1c.loadTexPltt();
    }
    return TRUE;
}

void MatTexVramTask::prepare(void) {
    cancel();
    unk_0d = 1;
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
    unk_0e = 3;
    unk_10.set(_ZN10G3dMatData10getTexAddrEv(rec), v1, v3);
    unk_1c.set(_ZN10G3dMatData11getPlttAddrEv(rec), v2, v4);
    unk_0f = unk_10.getTexCost() + TexTransfer_GetPlttCost(&unk_1c);
    unk_0c = 0;
    if (enqueueTex()) {
        return TRUE;
    }
    clear();
    return FALSE;
}

BgVramTask::BgVramTask() {
    unk_10.clear();
}

void BgVramTask::clear() {
    resetState();
    unk_10.clear();
}

void BgVramTask::cancel(void) {
    VramQueue2d_Dequeue(this);
    clear();
}

BOOL BgVramTask::execute() {
    switch (unk_0e) {
    case 4:
        unk_10.loadChars();
        break;
    case 5:
        unk_10.loadScreen();
        break;
    case 6:
        unk_10.loadPalette();
        break;
    case 7:
        unk_10.loadPaletteRange();
        break;
    default:
        return FALSE;
    }
    return TRUE;
}

void BgVramTask::prepare(void) {
    cancel();
    unk_0d = 1;
}

BOOL BgVramTask::requestChars(u32 a, u8 b, u32 c, u32 d, u32 e) {
    prepare();
    unk_0e = 4;
    unk_10.setChars(a, b, c, d, e);
    unk_0f = unk_10.getCharCost();
    unk_0c = 4;
    if (VramQueue2d_Enqueue(this)) {
        return TRUE;
    }
    clear();
    return FALSE;
}

BOOL BgVramTask::requestScreen(u32 a, u8 b, u32 c, u32 d) {
    prepare();
    unk_0e = 5;
    unk_10.setScreen(a, b, c, d);
    unk_0f = BgTransfer_GetScreenCost(&unk_10);
    unk_0c = 4;
    if (VramQueue2d_Enqueue(this)) {
        return TRUE;
    }
    clear();
    return FALSE;
}

BOOL BgVramTask::requestPalette(u32 a, u8 b, u32 c) {
    prepare();
    unk_0e = 6;
    unk_10.setPalette(a, b, c);
    unk_0f = BgTransfer_GetPaletteCost(&unk_10);
    unk_0c = 4;
    if (VramQueue2d_Enqueue(this)) {
        return TRUE;
    }
    clear();
    return FALSE;
}

// ---- BgVramTask ----
BOOL BgVramTask::requestPaletteRange(u32 a, u8 b, u32 c, u8 d) {
    prepare();
    unk_0e = 7;
    unk_10.setPaletteRange(a, b, c, d);
    unk_0f = BgTransfer_GetPaletteRangeCost(&unk_10);
    unk_0c = 4;
    if (VramQueue2d_Enqueue(this)) {
        return TRUE;
    }
    clear();
    return FALSE;
}

BgVramTaskPair::BgVramTaskPair() {
    unk_24.clear();
}

void BgVramTaskPair::clear() {
    BgVramTask::clear();
    unk_24.clear();
}

BOOL BgVramTaskPair::execute() {
    if (BgVramTask::execute()) {
        return TRUE;
    }
    switch (unk_0e) {
    case 8:
        unk_10.loadChars();
        unk_24.loadChars();
        break;
    case 9:
        unk_10.loadChars();
        unk_24.loadPalette();
        break;
    default:
        return FALSE;
    }
    return TRUE;
}

