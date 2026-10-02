// NNS sound library (NitroSystem snd): tail of the stream player (NNSSndStrm channel alloc/free/init) and the
// sound capture module (capture thread, alarm callback, reset/stop/pause). autoload_2 0x0210a9c4-0x0210ae48.
// ARM, mwcc 1.2/base, -O4,p.
// mwcc-flags: -nothumb -O4,p
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef int s32;
typedef int BOOL;
typedef struct NNSFndLink { void *prev; void *next; } NNSFndLink;
typedef struct NNSFndList { void *head; void *tail; u16 num; u16 offset; } NNSFndList;
typedef struct PMCbInfo { void (*cb)(void *); void *arg; void *next; } PMCbInfo;
typedef struct Strm {
    NNSFndLink link;        // 0x00
    PMCbInfo pm0;           // 0x08
    PMCbInfo pm1;           // 0x14
    s32 fmt;                // 0x20
    struct { s32 setup : 1; s32 started : 1; } f;   // 0x24
    u32 blockSize;          // 0x28
    s32 blkCount;           // 0x2c
    void *cb;               // 0x30
    void *arg;              // 0x34
    s32 blk;                // 0x38
    u32 timer;              // 0x3c
    s32 alarm;              // 0x40
    u32 chMask;             // 0x44
    s32 chCount;            // 0x48
    u8 chIdx[16];           // 0x4c
} Strm;
typedef void (*CapCb)(void *, void *, u32, s32, s32);
typedef struct Cap {
    s32 active;             // 0x00
    s32 mode;               // 0x04
    s32 fmt;                // 0x08
    u32 bufL;               // 0x0c
    u32 bufR;               // 0x10
    u32 size;               // 0x14
    u32 blkSize;            // 0x18
    s32 blkIdx;             // 0x1c
    u32 chMask;             // 0x20
    u32 startCh;            // 0x24
    u32 capMask;            // 0x28
    s32 alarm;              // 0x2c
    s32 nBlocks;            // 0x30
    CapCb cb;               // 0x34
    s32 cbArg;              // 0x38
    u32 fader[4];           // 0x3c
    s32 faderOn;            // 0x4c
    s32 vol;                // 0x50
} Cap;
typedef struct CapMsg { Cap *cap; u32 size; u32 off; u32 l; u32 r; } CapMsg;

extern s32 data_021fb6a4;
extern NNSFndList data_021fb6a8;
extern Cap data_021fb7b4;
extern void func_02100444(NNSFndList *, u16);
extern void func_0210a4f0(void *);
extern void func_0210a478(void *);
extern void func_0210ab48(Cap *);
extern void func_021097a4(u32);
extern u32 func_021097dc(u32);
extern s32 func_02114188();
extern s32 func_02114234();
extern void func_02114594(void *, u32);
extern void func_021145cc(void *, u32);
extern void func_02115e64(u32, void *, u32);
extern void func_02116a9c(u32, u32, u32, u32);
extern void func_02116a2c(u32, u32, u32, u32);
extern u32 func_02116f58(void);
extern u32 func_02116f98(u32);
extern u32 func_02117028(u32);
extern void func_02109764(u32);
extern void func_02109700(s32);
extern void func_02116774(u32, u32, u32, u32);
extern u32 data_027e038c;
extern s32 data_027e0390;
extern CapMsg data_021fb808[];
extern u32 data_021fb774;
extern void func_0210ad4c(void);
extern void func_0210aadc(void *);

// NNS_SndCaptureStop
void func_0210ad4c(void)
{
    BOOL hasAlarm;
    u32 tag;
    Cap *c = &data_021fb7b4;
    if (c->active == 0) {
        return;
    }
    hasAlarm = c->alarm >= 0;
    func_02116a2c(c->startCh, c->capMask,
                  hasAlarm ? 1 << c->alarm : 0, 0);
    if (hasAlarm) {
        tag = func_02116f58();
        func_02117028(1);
        func_02116f98(tag);
        do {
        } while (func_02114188(&data_021fb774, 0, 0) != 0);
    }
    if (c->capMask != 0) {
        func_02109764(c->capMask);
    }
    if (c->chMask != 0) {
        func_021097a4(c->chMask);
    }
    if (hasAlarm) {
        func_02109700(c->alarm);
    }
    if (c->mode == 1) {
        func_02116774(0, 0, 0, 0);
    }
    c->active = 0;
}

// NNS_SndCapturePause
void func_0210acec(void)
{
    Cap *c = &data_021fb7b4;
    u32 tag;
    if (c->active == 0) {
        return;
    }
    func_02116a2c(c->startCh, c->capMask,
                  (c->alarm >= 0) ? 1 << c->alarm : 0, 0);
    tag = func_02116f58();
    func_02117028(1);
    func_02116f98(tag);
}

// NNS_SndCaptureStartEffect restart / clear
void func_0210ac4c(void)
{
    Cap *c = &data_021fb7b4;
    volatile u32 zero1;
    volatile u32 zero2;
    if (c->active == 0) {
        return;
    }
    c->blkIdx = 0;
    zero1 = 0;
    func_02115e64(zero1, (void *)c->bufL, c->size);
    zero2 = 0;
    func_02115e64(zero2, (void *)c->bufR, c->size);
    func_021145cc((void *)c->bufL, c->size);
    func_021145cc((void *)c->bufR, c->size);
    func_02116a9c(c->startCh, c->capMask, (c->alarm >= 0) ? 1 << c->alarm : 0, 0);
}

// capture alarm callback
void func_0210ab48(Cap *cap)
{
    u32 l;
    u32 r;
    u32 size;
    u32 off;
    size = cap->blkSize;
    off = size * cap->blkIdx;
    l = cap->bufL + off;
    r = cap->bufR + off;
    if (data_027e038c != 0) {
        CapMsg *m = &data_021fb808[data_027e0390];
        m->cap = cap;
        m->size = size;
        m->off = off;
        m->l = l;
        m->r = r;
        func_02114234(&data_021fb774, m, 0);
        data_027e0390++;
        if (data_027e0390 >= 8) {
            data_027e0390 = 0;
        }
    } else {
        func_02114594((void *)l, size);
        func_02114594((void *)r, size);
        cap->cb((void *)l, (void *)r, size, cap->fmt, cap->cbArg);
    }
    cap->blkIdx++;
    if (cap->blkIdx >= cap->nBlocks) {
        cap->blkIdx = 0;
    }
}

// capture thread
void func_0210aadc(void *arg)
{
    void *m;
    CapMsg *msg;
    for (;;) {
        func_02114188(&data_021fb774, &m, 1);
        msg = (CapMsg *)m;
        func_02114594((void *)msg->l, msg->size);
        func_02114594((void *)msg->r, msg->size);
        msg->cap->cb((void *)msg->l, (void *)msg->r, msg->size, msg->cap->fmt, msg->cap->cbArg);
    }
}

// NNS_SndStrmInit
void func_0210aa58(Strm *st)
{
    if (data_021fb6a4 == 0) {
        func_02100444(&data_021fb6a8, 0);
        data_021fb6a4 = 1;
    }
    st->pm0.cb = (void (*)(void *))func_0210a4f0;
    st->pm0.arg = st;
    st->pm1.cb = (void (*)(void *))func_0210a478;
    st->pm1.arg = st;
    st->chMask = 0;
    st->chCount = 0;
    st->f.setup = 0;
    st->f.started = 0;
}

// NNS_SndStrmAllocChannel
BOOL func_0210a9f4(Strm *st, s32 n, u8 *ch)
{
    u32 mask = 0;
    s32 i;
    for (i = 0; i < n; i++) {
        st->chIdx[i] = ch[i];
        mask |= 1 << ch[i];
    }
    if (func_021097dc(mask) == 0) {
        return 0;
    }
    st->chCount = n;
    st->chMask = mask;
    return 1;
}

// NNS_SndStrmFreeChannel
void func_0210a9c4(Strm *st)
{
    if (st->chMask == 0) {
        return;
    }
    func_021097a4(st->chMask);
    st->chMask = 0;
    st->chCount = 0;
}
