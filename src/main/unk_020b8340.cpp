#include "types.h"

extern "C" {
void func_020e79a0(void *list, void *node);
BOOL PrioList_Insert(void *list, void *node);
void PrioList_Init(void *list);
}

// Two-word list head, cleared by __sinit (inline constructor).
class Unk_021ef630 {
public:
    void *head;
    void *tail;

    Unk_021ef630() : head(0), tail(0) {}
};

extern Unk_021ef630 sVramQueue2d;
extern Unk_021ef630 sVramQueueTex;

// Five-word command record (fields depend on the mode it was set up for).
struct BgTransfer {
    u32 buf;
    u8 layer;
    u32 loadArg0;
    u32 loadArg1;
    u32 loadArg2;

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
    u32 dstAddr;
    u32 src;
    u32 size;
};

extern "C" {
u8 BgTransfer_GetPaletteRangeCost(BgTransfer *p);
u8 BgTransfer_GetPaletteCost(BgTransfer *p);
u8 BgTransfer_GetScreenCost(BgTransfer *p);
}

class Unk_020b83b0 {
public:
    u32 unk_04;
    u32 next;
    u8 priority;

    Unk_020b83b0() : unk_04(0), next(0), priority(0xff) {}
};

class VramTask : public Unk_020b83b0 {
public:
    u8 state;
    u8 kind;
    u8 cost;

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
    BgTransfer unk_24;

    BgVramTaskPair();
    virtual BOOL execute();
    virtual void clear();
    BOOL requestCharsAndPalette(u32 a, u8 b, u32 c, u32 d, u32 e, u32 f, u8 g);
    BOOL requestCharPair(u32 a, u32 b, u8 c, u32 d, u32 e, u32 f, u32 g);
};

class Unk_020b8340_Task {
public:
    virtual BOOL vfunc_00();

    /* 0x04 */ u8 unk_04[9];
    /* 0x0d */ u8 state;
    /* 0x0e */ u8 kind;
    /* 0x0f */ u8 cost;
};

BOOL BgVramTaskPair::requestCharPair(u32 a, u32 b, u8 c, u32 d, u32 e, u32 f, u32 g) {
    prepare();
    kind = 8;
    xfer.setChars(a, c, d, d, e);
    cost = xfer.getCharCost();
    unk_24.setChars(b, c, f, f, g);
    cost += unk_24.getCharCost();
    priority = 4;
    if (VramQueue2d_Enqueue(this)) {
        return TRUE;
    }
    clear();
    return FALSE;
}

BOOL BgVramTaskPair::requestCharsAndPalette(u32 a, u8 b, u32 c, u32 d, u32 e, u32 f, u8 g) {
    prepare();
    kind = 9;
    xfer.setChars(a, b, c, d, e);
    cost = xfer.getCharCost();
    unk_24.setPalette(f, b, g);
    cost += BgTransfer_GetPaletteCost(&unk_24);
    priority = 4;
    if (VramQueue2d_Enqueue(this)) {
        return TRUE;
    }
    clear();
    return FALSE;
}

extern "C" void VramQueueTex_Init(void) {
    PrioList_Init(&sVramQueueTex);
}

BOOL VramTask::enqueueTex(void) {
    return PrioList_Insert(&sVramQueueTex, (Unk_020b83b0 *)this);
}

void VramTask::dequeueTex(void) {
    func_020e79a0(&sVramQueueTex, (Unk_020b83b0 *)this);
}

static inline Unk_020b8340_Task *Unk_020b8340_First(void **l) {
    Unk_020b8340_Task *t = (Unk_020b8340_Task *)*l;
    if (t != 0) t = (Unk_020b8340_Task *)((u8 *)t - 4);
    return t;
}

extern "C" void VramQueueTex_Run(void) {
    Unk_020b8340_Task *r5;
    for (r5 = Unk_020b8340_First((void **)&sVramQueueTex); r5 != 0; r5 = Unk_020b8340_First((void **)&sVramQueueTex)) {
        if (*(u16 *)0x4000006 + r5->cost > 0xd4) break;
        BOOL ready = (r5->state == 1) ? TRUE : FALSE;
        if (ready) {
            if (r5->vfunc_00() != 0) {
                r5->state = 2;
            }
        }
        if (r5 != 0) r5 = (Unk_020b8340_Task *)((u8 *)r5 + 4);
        func_020e79a0(&sVramQueueTex, r5);
    }
    volatile u16 *vc = (volatile u16 *)0x4000006;
    if (*vc <= 0xd5) {
        u16 t = *vc;
    }
}

extern "C" void VramQueue2d_Init(void) {
    PrioList_Init(&sVramQueue2d);
}

extern "C" BOOL VramQueue2d_Enqueue(VramTask *p) {
    u8 *n = (u8 *)p;
    if (n != 0) n = n + 4;
    return PrioList_Insert(&sVramQueue2d, n);
}

extern "C" void VramQueue2d_Dequeue(VramTask *p) {
    u8 *n = (u8 *)p;
    if (n != 0) n = n + 4;
    func_020e79a0(&sVramQueue2d, n);
}

extern "C" void VramQueue2d_Run(void) {
    Unk_020b8340_Task *r5;
    for (r5 = Unk_020b8340_First((void **)&sVramQueue2d); r5 != 0; r5 = Unk_020b8340_First((void **)&sVramQueue2d)) {
        if (*(u16 *)0x4000006 + r5->cost > 0x104) break;
        BOOL ready = (r5->state == 1) ? TRUE : FALSE;
        if (ready) {
            if (r5->vfunc_00() != 0) {
                r5->state = 2;
            }
        }
        if (r5 != 0) r5 = (Unk_020b8340_Task *)((u8 *)r5 + 4);
        func_020e79a0(&sVramQueue2d, r5);
    }
}

Unk_021ef630 sVramQueueTex;
Unk_021ef630 sVramQueue2d;
