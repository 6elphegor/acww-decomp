// mwcc-flags: -nothumb -O4,p
// NitroSystem (NNS) sound library tail: sound-archive stream player (NNS_SndArcStrm*: thread, job queue,
// stream contexts), capture effects (NNS_SndCapture*) and the NNSiSndFader helpers.
// autoload_2 0x0210da28-0x0210f0c4. ARM, mwcc 1.2/base, -O4,p.
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef unsigned long long u64;
typedef signed char s8;
typedef short s16;
typedef int s32;
typedef long long s64;
typedef int BOOL;

typedef struct NNSFndLink { void *prev; void *next; } NNSFndLink;
typedef struct NNSFndList { void *head; void *tail; u16 num; u16 offset; } NNSFndList;

// NNSiSndFader
typedef struct Fader {
    s32 start;      // 0x00
    s32 end;        // 0x04
    s32 cnt;        // 0x08
    s32 frames;     // 0x0c
} Fader;

#define HDR(c) ((u8 *)(c) + 0xa8)
typedef struct FSFileID { void *arc; u32 id; } FSFileID;

// stream context (NNSSndArcStrm), 0x160 bytes, 4 of them (data_021fc650)
typedef struct Ctx {
    u8 strm[0x5c];          // 0x00 NNSSndStrm
    u8 file[0x48];          // 0x5c FSFile
    u32 a4;                 // 0xa4
    u8 pad_a8[0x18];        // 0xa8 .. 0xe8: 64-byte stream header buffer (type etc. are bytes of it)
    u8 type;                // 0xc0
    u8 c1;
    u8 c2;                  // 0xc2
    u8 c3;
    u16 rate;               // 0xc4
    u16 c6;                 // 0xc6
    u8 pad_c8[4];
    u32 cc;                 // 0xcc
    u8 pad_d0[0x18];
    Fader fader;            // 0xe8
    u8 pad_f8[0x18];
    struct {
        s32 a : 1;
        s32 b : 1;
        s32 c : 1;
        s32 d : 1;
        s32 e : 1;
        s32 f : 1;
        s32 g : 1;
    } fl;                   // 0x110
    s32 v114;
    s32 v118;
    s32 pending;            // 0x11c
    s32 users;              // 0x120
    u8 nch;                 // 0x124
    u8 pad125;
    u8 chIdx[6];            // 0x126
    void *buf;              // 0x12c
    u32 bufSize;            // 0x130
    s32 v134;
    s32 v138;
    void *cb;               // 0x13c
    void *cbArg;            // 0x140
    s32 v144;
    s32 v148;
    struct Ctx **handle;    // 0x14c
    s32 prio;               // 0x150
    s32 v154;
    s32 vol;                // 0x158
    u32 v15c;               // 0x15c
} Ctx;

typedef struct Job {
    NNSFndLink link;        // 0x00
    Ctx *owner;             // 0x08
    s32 tag;                // 0x0c
    s32 n;                  // 0x10
    u32 buf[6];             // 0x14
    u32 size;               // 0x2c
} Job;

typedef struct ThreadInfo {
    u8 thread[0x4c0];
    u32 queue[3];           // 0x4c0
    u8 mutex[0x18];         // 0x4cc
    NNSFndList list;        // 0x4e4
} ThreadInfo;

typedef struct SInfo {
    void *file;             // 0
    u8 b4;
    u8 b5;
    u8 b6;
    u8 b7;
} SInfo;

typedef struct EffCtl {
    s32 type;               // 0x00
    void (*fn)();           // 0x04
    void (*pre)();          // 0x08
    void *preArg;           // 0x0c
    void (*post)();         // 0x10
    void *postArg;          // 0x14
    union {
        struct { s32 a; s32 b; } e[24];
        s32 w[48];
    } u;                    // 0x18
} EffCtl;

typedef struct ArcTbl {
    u8 pad[0x1c];
    u32 count;              // 0x1c
    struct { u32 a; u32 b; u32 c; } ent[1];   // 0x20
} ArcTbl;

// externs: data (bss in autoload_3)
extern Ctx data_021fc650[4];
extern ThreadInfo data_021fc160;
extern ThreadInfo *data_021fbdac;
extern u8 data_021fc62c[0x18];
extern NNSFndList data_021fc644;
extern s32 data_021fbda8;
extern NNSFndList data_021fbdb4;
extern u8 data_021fbdc0[0x18];
extern Job data_021fbdd8[8];
extern void *data_021fbdb0;
extern u8 data_021fbf60[];
extern EffCtl data_0213bf10;
extern s32 data_0213bf28[];
extern s16 data_02139fb4[];

// externs: functions
extern void *func_02100248(NNSFndList *, void *);
extern void func_02100260(NNSFndList *, void *);
extern void func_021003b0(NNSFndList *, void *);
extern void func_02100444(NNSFndList *, u16);
extern u32 func_01ffa2ec(void);
extern void func_01ffa3d4(u32);
extern void func_02114480(void *);
extern void func_02114410(void *);
extern void func_0211450c(void *);
extern void func_02113a70(void *, void *, void *, void *, u32, u32);
extern void func_0211366c(void *);
extern void func_021136a0(void *);
extern void func_02115fb4(u32, u32, u32);
extern void func_02115e30(u32, void *, u32);
extern void func_02115ef4();
extern void func_021145cc(void *, u32);
extern void func_021166b4(u32);
extern void func_021198c4(void *);
extern void func_021199e0(void *);
extern void func_02119d78(void *);
extern BOOL func_02119a78(void *, FSFileID);
extern void func_0210a6b0(Ctx *, s32, s32);
extern void func_0210a6f4(Ctx *, s32);
extern void func_0210a768(Ctx *);
extern void func_0210a798(Ctx *);
extern BOOL func_0210a7f4();
extern void func_0210a9c4(Ctx *);
extern BOOL func_0210a9f4();
extern void func_0210aa58(Ctx *);
extern void func_0210b364();
extern FSFileID func_0210b48c(void);
extern s32 func_0210b4ac();
extern u32 func_0210b558();
extern u8 *func_0210b5e4();
extern SInfo *func_0210b6ac();
extern void *func_0210be9c();
extern void func_0210d10c();

// in-unit prototypes
void func_0210da28(Ctx *);
void func_0210db74(s32, s32, u32 *, u32, s32, Ctx *);
void func_0210dcc0(void *, u32, Ctx *);
void func_0210dd6c(Job *);
Job *func_0210dda4(void);
Job *func_0210ddf0(NNSFndList *);
void func_0210de44(NNSFndList *, Ctx *);
void func_0210deb8(ThreadInfo *, u32);
void func_0210df2c(Ctx *);
BOOL func_0210df74();
void func_0210dfb4(Ctx *);
void func_0210e024(Ctx *);
void func_0210e0c4(Ctx *, s32);
BOOL func_0210e128();
void func_0210e400(Ctx *);
Ctx *func_0210e43c(Ctx **, s32, s32);
void func_0210e694(Ctx **);
void func_0210e760(Ctx **);
BOOL func_0210e778(Ctx **, s32, s32);
BOOL func_0210e7e0(void *);
void func_0210ea0c();
void func_0210e9c0();
void func_0210ec0c();
void func_0210edb0(void);
void func_0210edb4();
void func_0210ee4c(s32);
BOOL func_0210efdc(Fader *);
void func_0210f078(Fader *);
s32 func_0210f00c(Fader *);
void func_0210f048(Fader *, s32, s32);
void func_0210eff4(Fader *);

// NNSi_SndCaptureEffect mono-mix-like (capture effect 3: average of both channels)
void func_0210e9c0(s16 *l, s16 *r, u32 len)
{
    u32 n = len >> 1;
    u32 i;
    for (i = 0; i < n; i++) {
        l[i] = (l[i] + r[i] + 1) >> 1;
    }
    func_02115ef4(l, r, len);
}

// NNS_SndArcStrmInit-like (thread priority, heap)
void func_0210e8bc(u32 prio, void *heap)
{
    s32 i;
    Ctx *c;
    if (data_021fbda8 != 0) {
        func_0210e7e0(heap);
        return;
    }
    data_021fbda8 = 1;
    func_02100444(&data_021fbdb4, 0);
    for (i = 0; i < 8; i++) {
        func_021003b0(&data_021fbdb4, &data_021fbdd8[i]);
    }
    func_0211450c(data_021fbdc0);
    data_021fbdb0 = data_021fbf60;
    c = data_021fc650;
    for (i = 0; i < 4; i++, c++) {
        c->fl.a = 0;
        func_02119d78(c->file);
        func_0210aa58(c);
        c->v148 = i;
        c->nch = 0;
        c->buf = 0;
        c->bufSize = 0;
        c->users = 0;
    }
    func_0210e7e0(heap);
    func_0210deb8(&data_021fc160, prio);
}

// NNSi_SndArcStrmSetupBuffers-like (read channel tables, allocate stream buffers from heap)
BOOL func_0210e7e0(void *heap)
{
    s32 i;
    u32 size;
    Ctx *c;
    s32 j;
    u8 *info;
    void *mem;
    c = data_021fc650;
    for (i = 0; i < 4; i++, c++) {
        info = func_0210b5e4(i);
        if (info == 0) continue;
        c->nch = info[0];
        for (j = 0; j < info[0]; j++) {
            c->chIdx[j] = (info + j)[1];
        }
        if (heap != 0) {
            size = c->nch << 11;
            mem = func_0210be9c(heap, size, func_0210dcc0, c, 0);
            if (mem == 0) return 0;
            func_0210e024(c);
            c->buf = mem;
            c->bufSize = size;
        }
    }
    return 1;
}

// NNS_SndArcStrmPrepare-like (lookup stream info then start impl)
BOOL func_0210e778(Ctx **h, s32 strmNo, s32 len)
{
    SInfo *info = func_0210b6ac(strmNo);
    if (info == 0) return 0;
    return func_0210e128(h, info, info->b6, info->b5, strmNo, len, 0, 0, 0, 0);
}

// NNS_SndArcStrmStartPlay flag-like
void func_0210e760(Ctx **h)
{
    Ctx *c = *h;
    if (c != 0) c->fl.c = 1;
}

// NNS_SndArcStrmStart-like (handle, strmNo, len)
BOOL func_0210e730(Ctx **h, s32 a, s32 b)
{
    if (func_0210e778(h, a, b) == 0) return 0;
    func_0210e760(h);
    return 1;
}

// NNS_SndArcStrmStop-like (handle, fade frames)
void func_0210e704(Ctx **h, s32 frames)
{
    Ctx *c = *h;
    if (c == 0) return;
    func_0210e0c4(c, frames);
}

// NNS_SndArcStrmSetVolume-like (volume, fade frames)
void func_0210e6b8(Ctx **h, s32 vol, s32 frames)
{
    Ctx *c = *h;
    if (c == 0) return;
    if (c->fl.d != 0) return;
    func_0210f048(&c->fader, vol << 8, frames);
}

// NNS_SndArcStrmInitHandle-like
void func_0210e6ac(Ctx **h)
{
    *h = 0;
}

// NNSi_SndArcStrmHandleDetach-like
void func_0210e694(Ctx **h)
{
    Ctx *c = *h;
    if (c != 0) {
        c->handle = 0;
        *h = 0;
    }
}

// NNS_SndArcStrmGetLoopTime-like (ms)
u32 func_0210e648(Ctx **h)
{
    Ctx *c = *h;
    if (c == 0) return 0;
    return (u64)c->v15c * (u64)1000 / (u64)c->rate;
}

// NNS_SndArcStrmGetTotalTime-like (ms)
u32 func_0210e5fc(Ctx **h)
{
    Ctx *c = *h;
    if (c == 0) return 0;
    return (u64)c->cc * (u64)1000 / (u64)c->rate;
}

// NNS_SndArcStrmMain-like (per-frame update of the 4 contexts: start, fade, volume)
void func_0210e4e4(void)
{
    s32 i;
    s32 v;
    s32 a;
    Ctx *c;
    c = data_021fc650;
    for (i = 0; i < 4; i++, c++) {
        if (c->fl.a == 0) continue;
        if (c->v114 == 0) {
            func_0210e024(c);
            continue;
        }
        if (c->fl.c != 0 && c->v118 != 0) {
            func_0210a798(c);
            c->fl.b = 1;
            c->fl.c = 0;
        }
        if (c->fl.b == 0) continue;
        func_0210eff4(&c->fader);
        a = data_02139fb4[c->v154];
        v = data_02139fb4[func_0210f00c(&c->fader) >> 8];
        v = v + a;
        if (v != c->vol) {
            func_0210a6f4(c, v);
            c->vol = v;
        }
        if (c->fl.d != 0) {
            if (func_0210efdc(&c->fader) != 0) func_0210e024(c);
        }
    }
}

// NNSi_SndArcStrmAcquire-like (take context idx with priority)
Ctx *func_0210e43c(Ctx **h, s32 idx, s32 prio)
{
    Ctx *c;
    if (*h != 0) func_0210e694(h);
    c = &data_021fc650[idx];
    if (c->buf == 0) return 0;
    if (c->fl.a) {
        if (prio < c->prio) return 0;
        func_0210e024(c);
    }
    c->prio = prio;
    c->fl.a = 1;
    c->handle = h;
    *h = c;
    return c;
}

// NNSi_SndArcStrmReset-like (detach handle, clear flags)
void func_0210e400(Ctx *c)
{
    Ctx **h = c->handle;
    if (h != 0) {
        *h = 0;
        c->handle = 0;
    }
    c->fl.a = 0;
    c->fl.c = 0;
    c->fl.b = 0;
}

// NNSi_SndArcStrmStartImpl-like: open the stream file, set up the context and NNSSndStrm
BOOL func_0210e128(Ctx **h, SInfo *info, s32 idx, s32 prio, s32 v144, u32 len, s32 v134, s32 v138, void *cb, void *cbArg)
{
    Ctx *c;
    s32 fmt;
    s32 n;
    FSFileID fid;

    c = func_0210e43c(h, idx, prio);
    if (c == 0) return 0;
    if (func_0210b4ac(info->file, HDR(c), 0x40, 0) != 0x40) {
        func_0210e400(c);
        return 0;
    }
    fid = func_0210b48c();
    if (func_02119a78(c->file, fid) == 0) {
        func_0210e400(c);
        return 0;
    }
    c->a4 = func_0210b558(info->file);
    c->v15c = (c->rate * len) / 1000;
    if (c->v15c != 0 && c->type == 2) {
        c->fl.e = 1;
    } else {
        c->fl.e = 0;
    }
    c->v114 = 4;
    c->fl.f = 0;
    c->fl.b = 0;
    c->v118 = 0;
    c->fl.c = 0;
    c->fl.d = 0;
    c->pending = 0;
    c->v134 = v134;
    c->v138 = v138;
    c->cb = cb;
    c->cbArg = cbArg;
    c->v144 = v144;
    c->vol = 0;
    c->v154 = info->b4;
    func_0210f078(&c->fader);
    func_0210f048(&c->fader, 0x7f00, 1);
    switch (c->type) {
    case 0:
        fmt = 0;
        break;
    case 1:
    case 2:
        fmt = 1;
        break;
    }
    n = c->c2;
    if (info->b7 & 1) n = 2;
    if (n > c->nch) n = c->nch;
    c->fl.g = (n == 1);
    if (func_0210df74(c, n, c->chIdx) == 0) {
        func_021199e0(c->file);
        func_0210e400(c);
        return 0;
    }
    if (func_0210a7f4(c, fmt, c->buf, (c->bufSize * n) / c->nch, c->c6, 4, func_0210db74, c) == 0) {
        func_0210df2c(c);
        func_021199e0(c->file);
        func_0210e400(c);
        return 0;
    }
    if (n == 2) {
        func_0210a6b0(c, 0, 0);
        func_0210a6b0(c, 1, 0x7f);
    }
    return 1;
}

// NNS_SndArcStrmStop(handle, fadeFrames)-like core
void func_0210e0c4(Ctx *c, s32 frames)
{
    if (c->fl.b == 0) {
        func_0210e024(c);
        return;
    }
    if (frames == 0) {
        func_0210e024(c);
        return;
    }
    func_0210f048(&c->fader, 0, frames);
    c->fl.d = 1;
    c->prio = 0;
}

// NNS_SndArcStrmStop-like (immediate)
void func_0210e024(Ctx *c)
{
    func_02114480(data_021fc62c);
    if (data_021fbdac != 0) func_02114480(&data_021fbdac->mutex);
    if (c->fl.b) func_0210a768(c);
    if (c->fl.a) func_021198c4(c->file);
    func_0210dfb4(c);
    func_02114410(data_021fc62c);
    if (data_021fbdac != 0) func_02114410(&data_021fbdac->mutex);
}

// NNSi_SndArcStrmClose-like
void func_0210dfb4(Ctx *c)
{
    if (c->fl.a == 0) return;
    func_0210df2c(c);
    func_021199e0(c->file);
    func_0210de44(&data_021fc644, c);
    {
        ThreadInfo *p = data_021fbdac;
        if (p != 0) func_0210de44(&p->list, c);
    }
    func_0210e400(c);
}

// NNSi_SndArcStrmChannelAlloc-like
BOOL func_0210df74(Ctx *c, s32 n, u8 *x)
{
    if (c->users == 0) {
        if (func_0210a9f4(c, n, x) == 0) return 0;
    }
    c->users = c->users + 1;
    return 1;
}

// NNSi_SndArcStrmChannelRelease-like
void func_0210df2c(Ctx *c)
{
    if (c->users == 0) return;
    c->users = c->users - 1;
    if (c->users != 0) return;
    func_0210a9c4(c);
}

// NNS_SndArcStrmThread create-like (OS_CreateThread + job list, mutex, queue)
void func_0210deb8(ThreadInfo *t, u32 prio)
{
    func_02113a70(t, func_0210d10c, t, (u8 *)t + 0x4c0, 0x400, prio);
    func_02100444(&t->list, 0);
    func_0211450c(&t->mutex);
    t->queue[1] = 0;
    t->queue[0] = t->queue[1];
    func_0211366c(t);
}

// NNSi_SndArcStrmJobCancel-like (drop all jobs of a stream)
void func_0210de44(NNSFndList *list, Ctx *c)
{
    u32 irq;
    Job *job;
    Job *next;
    irq = func_01ffa2ec();
    for (job = func_02100248(list, 0); job != 0; job = next) {
        next = func_02100248(list, job);
        if (job->owner == c) {
            func_02100260(list, job);
            func_0210dd6c(job);
        }
    }
    func_01ffa3d4(irq);
}

// NNSi_SndArcStrmJobPop-like (first job of a thread list)
Job *func_0210ddf0(NNSFndList *list)
{
    u32 irq;
    Job *job;
    irq = func_01ffa2ec();
    job = func_02100248(list, 0);
    if (job != 0) {
        func_02100260(list, job);
        job->owner->pending = job->owner->pending - 1;
    }
    func_01ffa3d4(irq);
    return job;
}

// NNSi_SndArcStrmJobAlloc-like (job from the free list)
Job *func_0210dda4(void)
{
    u32 irq;
    Job *job;
    irq = func_01ffa2ec();
    job = func_02100248(&data_021fbdb4, 0);
    if (job != 0) func_02100260(&data_021fbdb4, job);
    func_01ffa3d4(irq);
    return job;
}

// NNSi_SndArcStrmJobFree-like (job back to the free list)
void func_0210dd6c(Job *job)
{
    u32 irq = func_01ffa2ec();
    func_021003b0(&data_021fbdb4, job);
    func_01ffa3d4(irq);
}

// NNSi_SndArcStrmHeapDestroyCallback-like (snd heap block destroy callback)
void func_0210dcc0(void *mem, u32 size, Ctx *c)
{
    if (mem != c->buf) return;
    func_02114480(data_021fc62c);
    if (data_021fbdac != 0) func_02114480(&data_021fbdac->mutex);
    func_0210e024(c);
    c->buf = 0;
    c->bufSize = 0;
    c->nch = 0;
    if (c->users > 0) {
        func_0210a9c4(c);
        c->users = 0;
    }
    func_02114410(data_021fc62c);
    if (data_021fbdac != 0) func_02114410(&data_021fbdac->mutex);
}

// NNSi_SndArcStrmCallback-like: NNSSndStrm block callback (queues a load job for the stream thread)
void func_0210db74(s32 ch, s32 n, u32 *bufs, u32 size, s32 unused, Ctx *c)
{
    Job *job;
    ThreadInfo *t;
    s32 i;

    if (c->pending >= 2) {
        for (job = func_02100248(&data_021fc644, 0); job != 0; job = func_02100248(&data_021fc644, job)) {
            if (job->owner == c) break;
        }
        for (i = 0; i < job->n; i++) {
            func_02115fb4(job->buf[i], 0, job->size);
        }
        func_02100260(&data_021fc644, job);
        c->pending = c->pending - 1;
        func_0210dd6c(job);
    }
    job = func_0210dda4();
    job->owner = c;
    job->tag = ch;
    job->n = n;
    for (i = 0; i < n; i++) {
        job->buf[i] = bufs[i];
    }
    job->size = size;
    t = &data_021fc160;
    if (ch == 0) {
        if (data_021fbdac != 0) t = data_021fbdac;
    }
    c->pending = c->pending + 1;
    func_021003b0(&t->list, job);
    func_021136a0(&t->queue);
}

// NNSi_SndArcStrmLoadNext-like: stream thread helper, asks the user callback for the next stream and re-reads its header
void func_0210da28(Ctx *c)
{
    u8 oldType;
    u16 oldRate;
    SInfo *info;
    struct { u32 p; u32 n; } in, out;
    BOOL ok;

    in.p = c->v148;
    in.n = c->v144;
    out.p = c->v144;
    out.n = 0;
    ok = ((BOOL (*)())c->cb)(0, &in, &out, c->cbArg);
    if (ok == 0) return;
    info = func_0210b6ac(out.p);
    if (info == 0) return;
    oldType = c->type;
    oldRate = c->rate;
    c->a4 = func_0210b558(info->file);
    func_0210b4ac(info->file, HDR(c), 0x40, 0);
    if (oldRate != c->rate) return;
    if (oldType == 0 && c->type != 0) return;
    if (oldType != 0 && c->type == 0) return;
    c->v144 = out.p;
    c->v15c = (c->rate * out.n) / 1000;
    if (c->v15c != 0 && c->type == 2) {
        c->fl.e = 1;
    } else {
        c->fl.e = 0;
    }
    c->fl.f = 0;
}
