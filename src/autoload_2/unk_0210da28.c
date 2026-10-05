#include "nitro/fs.h"
// mwcc-flags: -nothumb -O4,p
// NitroSystem (NNS) sound library tail: sound-archive stream player (NNS_SndArcStrm*: thread, job queue,
// stream contexts), capture effects (NNS_SndCapture*) and the NNSiSndFader helpers.
// autoload_2 0x0210da28-0x0210ec0c (the rest of output_effect.c is unk_0210ec0c.c). ARM, mwcc 1.2/base, -O4,p.
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

// stream context (NNSSndArcStrm), 0x160 bytes, 4 of them (data_021fc650)
typedef struct Ctx {
    u8 strm[0x5c];          // 0x00 NNSSndStrm
    FSFile file;            // 0x5c
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
extern u8 data_021fbf60[0x200];
extern EffCtl data_0213bf10;
extern s32 data_0213bf28[];
extern s16 data_02139fb4[];

// externs: functions
extern void *NNS_FndGetNextListObject(NNSFndList *, void *);
extern void NNS_FndRemoveListObject(NNSFndList *, void *);
extern void NNS_FndAppendListObject(NNSFndList *, void *);
extern void NNS_FndInitList(NNSFndList *, u16);
extern u32 OS_DisableInterrupts(void);
extern void OS_RestoreInterrupts(u32);
extern void OS_LockMutex(void *);
extern void OS_UnlockMutex(void *);
extern void OS_InitMutex(void *);
extern void OS_CreateThread(void *, void *, void *, void *, u32, u32);
extern void OS_WakeupThreadDirect(void *);
extern void OS_WakeupThread(void *);
extern void MI_CpuFill8(u32, u32, u32);
extern void MIi_CpuClear16(u32, void *, u32);
extern void MIi_CpuCopyFast();
extern void DC_FlushRange(void *, u32);
extern void SND_SetSurroundDecay(u32);
extern void FS_CancelFile(void *);
extern void FS_CloseFile(void *);
extern void FS_InitFile(void *);
extern BOOL FS_OpenFileFast(void *, FSFileID);
extern void NNS_SndStrmSetChannelPan(Ctx *, s32, s32);
extern void NNS_SndStrmSetVolume(Ctx *, s32);
extern void NNS_SndStrmStop(Ctx *);
extern void NNS_SndStrmStart(Ctx *);
extern BOOL NNS_SndStrmSetup();
extern void NNS_SndStrmFreeChannel(Ctx *);
extern BOOL NNS_SndStrmAllocChannel();
extern void NNS_SndStrmInit(Ctx *);
extern void NNS_SndCaptureStartEffect();
extern FSFileID func_0210b48c(void);
extern s32 NNS_SndArcReadFile();
extern u32 NNS_SndArcGetFileOffset();
extern u8 *NNS_SndArcGetStrmPlayerInfo();
extern SInfo *NNS_SndArcGetStrmInfo();
extern void *NNS_SndHeapAlloc();
extern void StrmThreadProc();

// in-unit prototypes
void RequestNextStrm(Ctx *);
void StrmDataCallback(s32, s32, u32 *, u32, s32, Ctx *);
void StrmBufDisposeCallback(void *, u32, Ctx *);
void FreeCommandBuffer(Job *);
Job *AllocCommandBuffer(void);
Job *PopCommandBuffer(NNSFndList *);
void RemoveCommandByPlayer(NNSFndList *, Ctx *);
void CreateStrmThread(ThreadInfo *, u32);
void FreeChannel(Ctx *);
BOOL AllocChannel();
void ShutdownPlayer__sndarc_stream(Ctx *);
void ForceStopStrm__sndarc_stream(Ctx *);
void StopStrm(Ctx *, s32);
BOOL PrepareStrmCore();
void FreePlayer(Ctx *);
Ctx *AllocPlayer(Ctx **, s32, s32);
void NNS_SndStrmHandleRelease(Ctx **);
void NNS_SndArcStrmStartPrepared(Ctx **);
BOOL NNS_SndArcStrmPrepare(Ctx **, s32, s32);
BOOL SetupStrmPlayers(void *);
void OutputEffectHeadphone();
void OutputEffectMono();
void OutputEffectSurround();
void OutputEffectNormal(void);
void OutputEffectCallback();
void NNS_SndCaptureChangeOutputEffect(s32);
BOOL NNSi_SndFaderIsFinished(Fader *);
void NNSi_SndFaderInit(Fader *);
s32 NNSi_SndFaderGet(Fader *);
void NNSi_SndFaderSet(Fader *, s32, s32);
void NNSi_SndFaderUpdate(Fader *);

// HeadphoneProc (NitroSystem output_effect.c, capture effect 2): each channel gets the other one mixed in 24 samples
// late at a quarter of its level, clamped to s16 (Cut_S32toS16). The `register` local is the library's own.
static inline s16 Cut_S32toS16(s32 val)
{
    if (val < (s16)-0x8000)
        val = (s16)-0x8000;
    else if (val > (s16)0x7fff)
        val = (s16)0x7fff;
    return (s16)val;
}

void OutputEffectHeadphone(void *bufferL_p, void *bufferR_p, u32 len, EffCtl *info)
{
    s16 *lp = (s16 *)bufferL_p;
    s16 *rp = (s16 *)bufferR_p;
    const unsigned long samples = len >> 1;
    int i;
    s32 l;
    s32 r;
    int offset;
    unsigned long rest_samples;

    offset = 0;
    while (samples > 24 + offset) {
        for (i = 0; i < 24; i++) {
            const register int x = i + offset;

            l = lp[x] + info->u.e[i].a;
            r = rp[x] + info->u.e[i].b;

            lp[x] = Cut_S32toS16(l);
            rp[x] = Cut_S32toS16(r);
            info->u.e[i].a = (r + 1) >> 2;
            info->u.e[i].b = (l + 1) >> 2;
        }
        offset += 24;
    }

    rest_samples = samples - offset;
    for (i = 0; i < rest_samples; i++) {
        const int x = i + offset;

        l = lp[x] + info->u.e[i].a;
        r = rp[x] + info->u.e[i].b;
        lp[x] = Cut_S32toS16(l);
        rp[x] = Cut_S32toS16(r);
    }

    for (i = 0; i < 24 - rest_samples; i++) {
        info->u.e[i].a = info->u.e[i + rest_samples].a;
        info->u.e[i].b = info->u.e[i + rest_samples].b;
    }

    for (i = 0; i < rest_samples; i++) {
        const long x = (long)(i + 24 - rest_samples);

        info->u.e[x].a = (rp[i + offset] + 1) >> 2;
        info->u.e[x].b = (lp[i + offset] + 1) >> 2;
    }
}

// NNSi_SndCaptureEffect mono-mix-like (capture effect 3: average of both channels)
void OutputEffectMono(s16 *l, s16 *r, u32 len)
{
    u32 n = len >> 1;
    u32 i;
    for (i = 0; i < n; i++) {
        l[i] = (l[i] + r[i] + 1) >> 1;
    }
    MIi_CpuCopyFast(l, r, len);
}

// NNS_SndArcStrmInit-like (thread priority, heap)
void NNS_SndArcStrmInit(u32 prio, void *heap)
{
    s32 i;
    Ctx *c;
    if (data_021fbda8 != 0) {
        SetupStrmPlayers(heap);
        return;
    }
    data_021fbda8 = 1;
    NNS_FndInitList(&data_021fbdb4, 0);
    for (i = 0; i < 8; i++) {
        NNS_FndAppendListObject(&data_021fbdb4, &data_021fbdd8[i]);
    }
    OS_InitMutex(data_021fbdc0);
    data_021fbdb0 = data_021fbf60;
    c = data_021fc650;
    for (i = 0; i < 4; i++, c++) {
        c->fl.a = 0;
        FS_InitFile(&c->file);
        NNS_SndStrmInit(c);
        c->v148 = i;
        c->nch = 0;
        c->buf = 0;
        c->bufSize = 0;
        c->users = 0;
    }
    SetupStrmPlayers(heap);
    CreateStrmThread(&data_021fc160, prio);
}

// NNSi_SndArcStrmSetupBuffers-like (read channel tables, allocate stream buffers from heap)
BOOL SetupStrmPlayers(void *heap)
{
    s32 i;
    u32 size;
    Ctx *c;
    s32 j;
    u8 *info;
    void *mem;
    c = data_021fc650;
    for (i = 0; i < 4; i++, c++) {
        info = NNS_SndArcGetStrmPlayerInfo(i);
        if (info == 0) continue;
        c->nch = info[0];
        for (j = 0; j < info[0]; j++) {
            c->chIdx[j] = (info + j)[1];
        }
        if (heap != 0) {
            size = c->nch << 11;
            mem = NNS_SndHeapAlloc(heap, size, StrmBufDisposeCallback, c, 0);
            if (mem == 0) return 0;
            ForceStopStrm__sndarc_stream(c);
            c->buf = mem;
            c->bufSize = size;
        }
    }
    return 1;
}

// NNS_SndArcStrmPrepare-like (lookup stream info then start impl)
BOOL NNS_SndArcStrmPrepare(Ctx **h, s32 strmNo, s32 len)
{
    SInfo *info = NNS_SndArcGetStrmInfo(strmNo);
    if (info == 0) return 0;
    return PrepareStrmCore(h, info, info->b6, info->b5, strmNo, len, 0, 0, 0, 0);
}

// NNS_SndArcStrmStartPlay flag-like
void NNS_SndArcStrmStartPrepared(Ctx **h)
{
    Ctx *c = *h;
    if (c != 0) c->fl.c = 1;
}

// NNS_SndArcStrmStart-like (handle, strmNo, len)
BOOL NNS_SndArcStrmStart(Ctx **h, s32 a, s32 b)
{
    if (NNS_SndArcStrmPrepare(h, a, b) == 0) return 0;
    NNS_SndArcStrmStartPrepared(h);
    return 1;
}

// NNS_SndArcStrmStop-like (handle, fade frames)
void NNS_SndArcStrmStop(Ctx **h, s32 frames)
{
    Ctx *c = *h;
    if (c == 0) return;
    StopStrm(c, frames);
}

// NNS_SndArcStrmSetVolume-like (volume, fade frames)
void NNS_SndArcStrmMoveVolume(Ctx **h, s32 vol, s32 frames)
{
    Ctx *c = *h;
    if (c == 0) return;
    if (c->fl.d != 0) return;
    NNSi_SndFaderSet(&c->fader, vol << 8, frames);
}

// NNS_SndArcStrmInitHandle-like
void NNS_SndStrmHandleInit(Ctx **h)
{
    *h = 0;
}

// NNSi_SndArcStrmHandleDetach-like
void NNS_SndStrmHandleRelease(Ctx **h)
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
void NNSi_SndArcStrmMain(void)
{
    s32 i;
    s32 v;
    s32 a;
    Ctx *c;
    c = data_021fc650;
    for (i = 0; i < 4; i++, c++) {
        if (c->fl.a == 0) continue;
        if (c->v114 == 0) {
            ForceStopStrm__sndarc_stream(c);
            continue;
        }
        if (c->fl.c != 0 && c->v118 != 0) {
            NNS_SndStrmStart(c);
            c->fl.b = 1;
            c->fl.c = 0;
        }
        if (c->fl.b == 0) continue;
        NNSi_SndFaderUpdate(&c->fader);
        a = data_02139fb4[c->v154];
        v = data_02139fb4[NNSi_SndFaderGet(&c->fader) >> 8];
        v = v + a;
        if (v != c->vol) {
            NNS_SndStrmSetVolume(c, v);
            c->vol = v;
        }
        if (c->fl.d != 0) {
            if (NNSi_SndFaderIsFinished(&c->fader) != 0) ForceStopStrm__sndarc_stream(c);
        }
    }
}

// NNSi_SndArcStrmAcquire-like (take context idx with priority)
Ctx *AllocPlayer(Ctx **h, s32 idx, s32 prio)
{
    Ctx *c;
    if (*h != 0) NNS_SndStrmHandleRelease(h);
    c = &data_021fc650[idx];
    if (c->buf == 0) return 0;
    if (c->fl.a) {
        if (prio < c->prio) return 0;
        ForceStopStrm__sndarc_stream(c);
    }
    c->prio = prio;
    c->fl.a = 1;
    c->handle = h;
    *h = c;
    return c;
}

// NNSi_SndArcStrmReset-like (detach handle, clear flags)
void FreePlayer(Ctx *c)
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
BOOL PrepareStrmCore(Ctx **h, SInfo *info, s32 idx, s32 prio, s32 v144, u32 len, s32 v134, s32 v138, void *cb, void *cbArg)
{
    Ctx *c;
    s32 fmt;
    s32 n;
    FSFileID fid;

    c = AllocPlayer(h, idx, prio);
    if (c == 0) return 0;
    if (NNS_SndArcReadFile(info->file, HDR(c), 0x40, 0) != 0x40) {
        FreePlayer(c);
        return 0;
    }
    fid = func_0210b48c();
    if (FS_OpenFileFast(&c->file, fid) == 0) {
        FreePlayer(c);
        return 0;
    }
    c->a4 = NNS_SndArcGetFileOffset(info->file);
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
    NNSi_SndFaderInit(&c->fader);
    NNSi_SndFaderSet(&c->fader, 0x7f00, 1);
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
    if (AllocChannel(c, n, c->chIdx) == 0) {
        FS_CloseFile(&c->file);
        FreePlayer(c);
        return 0;
    }
    if (NNS_SndStrmSetup(c, fmt, c->buf, (c->bufSize * n) / c->nch, c->c6, 4, StrmDataCallback, c) == 0) {
        FreeChannel(c);
        FS_CloseFile(&c->file);
        FreePlayer(c);
        return 0;
    }
    if (n == 2) {
        NNS_SndStrmSetChannelPan(c, 0, 0);
        NNS_SndStrmSetChannelPan(c, 1, 0x7f);
    }
    return 1;
}

// NNS_SndArcStrmStop(handle, fadeFrames)-like core
void StopStrm(Ctx *c, s32 frames)
{
    if (c->fl.b == 0) {
        ForceStopStrm__sndarc_stream(c);
        return;
    }
    if (frames == 0) {
        ForceStopStrm__sndarc_stream(c);
        return;
    }
    NNSi_SndFaderSet(&c->fader, 0, frames);
    c->fl.d = 1;
    c->prio = 0;
}

// NNS_SndArcStrmStop-like (immediate)
void ForceStopStrm__sndarc_stream(Ctx *c)
{
    OS_LockMutex(data_021fc62c);
    if (data_021fbdac != 0) OS_LockMutex(&data_021fbdac->mutex);
    if (c->fl.b) NNS_SndStrmStop(c);
    if (c->fl.a) FS_CancelFile(&c->file);
    ShutdownPlayer__sndarc_stream(c);
    OS_UnlockMutex(data_021fc62c);
    if (data_021fbdac != 0) OS_UnlockMutex(&data_021fbdac->mutex);
}

// NNSi_SndArcStrmClose-like
void ShutdownPlayer__sndarc_stream(Ctx *c)
{
    if (c->fl.a == 0) return;
    FreeChannel(c);
    FS_CloseFile(&c->file);
    RemoveCommandByPlayer(&data_021fc644, c);
    {
        ThreadInfo *p = data_021fbdac;
        if (p != 0) RemoveCommandByPlayer(&p->list, c);
    }
    FreePlayer(c);
}

// NNSi_SndArcStrmChannelAlloc-like
BOOL AllocChannel(Ctx *c, s32 n, u8 *x)
{
    if (c->users == 0) {
        if (NNS_SndStrmAllocChannel(c, n, x) == 0) return 0;
    }
    c->users = c->users + 1;
    return 1;
}

// NNSi_SndArcStrmChannelRelease-like
void FreeChannel(Ctx *c)
{
    if (c->users == 0) return;
    c->users = c->users - 1;
    if (c->users != 0) return;
    NNS_SndStrmFreeChannel(c);
}

// NNS_SndArcStrmThread create-like (OS_CreateThread + job list, mutex, queue)
void CreateStrmThread(ThreadInfo *t, u32 prio)
{
    OS_CreateThread(t, StrmThreadProc, t, (u8 *)t + 0x4c0, 0x400, prio);
    NNS_FndInitList(&t->list, 0);
    OS_InitMutex(&t->mutex);
    t->queue[1] = 0;
    t->queue[0] = t->queue[1];
    OS_WakeupThreadDirect(t);
}

// NNSi_SndArcStrmJobCancel-like (drop all jobs of a stream)
void RemoveCommandByPlayer(NNSFndList *list, Ctx *c)
{
    u32 irq;
    Job *job;
    Job *next;
    irq = OS_DisableInterrupts();
    for (job = NNS_FndGetNextListObject(list, 0); job != 0; job = next) {
        next = NNS_FndGetNextListObject(list, job);
        if (job->owner == c) {
            NNS_FndRemoveListObject(list, job);
            FreeCommandBuffer(job);
        }
    }
    OS_RestoreInterrupts(irq);
}

// NNSi_SndArcStrmJobPop-like (first job of a thread list)
Job *PopCommandBuffer(NNSFndList *list)
{
    u32 irq;
    Job *job;
    irq = OS_DisableInterrupts();
    job = NNS_FndGetNextListObject(list, 0);
    if (job != 0) {
        NNS_FndRemoveListObject(list, job);
        job->owner->pending = job->owner->pending - 1;
    }
    OS_RestoreInterrupts(irq);
    return job;
}

// NNSi_SndArcStrmJobAlloc-like (job from the free list)
Job *AllocCommandBuffer(void)
{
    u32 irq;
    Job *job;
    irq = OS_DisableInterrupts();
    job = NNS_FndGetNextListObject(&data_021fbdb4, 0);
    if (job != 0) NNS_FndRemoveListObject(&data_021fbdb4, job);
    OS_RestoreInterrupts(irq);
    return job;
}

// NNSi_SndArcStrmJobFree-like (job back to the free list)
void FreeCommandBuffer(Job *job)
{
    u32 irq = OS_DisableInterrupts();
    NNS_FndAppendListObject(&data_021fbdb4, job);
    OS_RestoreInterrupts(irq);
}

// NNSi_SndArcStrmHeapDestroyCallback-like (snd heap block destroy callback)
void StrmBufDisposeCallback(void *mem, u32 size, Ctx *c)
{
    if (mem != c->buf) return;
    OS_LockMutex(data_021fc62c);
    if (data_021fbdac != 0) OS_LockMutex(&data_021fbdac->mutex);
    ForceStopStrm__sndarc_stream(c);
    c->buf = 0;
    c->bufSize = 0;
    c->nch = 0;
    if (c->users > 0) {
        NNS_SndStrmFreeChannel(c);
        c->users = 0;
    }
    OS_UnlockMutex(data_021fc62c);
    if (data_021fbdac != 0) OS_UnlockMutex(&data_021fbdac->mutex);
}

// NNSi_SndArcStrmCallback-like: NNSSndStrm block callback (queues a load job for the stream thread)
void StrmDataCallback(s32 ch, s32 n, u32 *bufs, u32 size, s32 unused, Ctx *c)
{
    Job *job;
    ThreadInfo *t;
    s32 i;

    if (c->pending >= 2) {
        for (job = NNS_FndGetNextListObject(&data_021fc644, 0); job != 0; job = NNS_FndGetNextListObject(&data_021fc644, job)) {
            if (job->owner == c) break;
        }
        for (i = 0; i < job->n; i++) {
            MI_CpuFill8(job->buf[i], 0, job->size);
        }
        NNS_FndRemoveListObject(&data_021fc644, job);
        c->pending = c->pending - 1;
        FreeCommandBuffer(job);
    }
    job = AllocCommandBuffer();
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
    NNS_FndAppendListObject(&t->list, job);
    OS_WakeupThread(&t->queue);
}

// NNSi_SndArcStrmLoadNext-like: stream thread helper, asks the user callback for the next stream and re-reads its header
void RequestNextStrm(Ctx *c)
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
    info = NNS_SndArcGetStrmInfo(out.p);
    if (info == 0) return;
    oldType = c->type;
    oldRate = c->rate;
    c->a4 = NNS_SndArcGetFileOffset(info->file);
    NNS_SndArcReadFile(info->file, HDR(c), 0x40, 0);
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

// ---- file-scope objects (autoload_3 .bss 0x021fbda8-0x021fcbd0). data_021fc62c / data_021fc644 are the mutex and the
// command list inside data_021fc160 (interior labels). This definition order gives the original order after mwcc's
// size sort.
s32 data_021fbda8;
void *data_021fbdb0;
ThreadInfo *data_021fbdac;
NNSFndList data_021fbdb4;
u8 data_021fbdc0[0x18];
Job data_021fbdd8[8];
u8 data_021fbf60[0x200] __attribute__((aligned(32)));
ThreadInfo data_021fc160;
Ctx data_021fc650[4];
