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
extern void NNS_FndInitList(NNSFndList *, u16);
extern void BeginSleep__stream(void *);
extern void EndSleep__stream(void *);
extern void AlarmCallback(Cap *);
extern void NNS_SndUnlockChannel(u32);
extern u32 NNS_SndLockChannel(u32);
extern s32 OS_ReceiveMessage();
extern s32 OS_SendMessage();
extern void DC_InvalidateRange(void *, u32);
extern void DC_FlushRange(void *, u32);
extern void MIi_CpuClear32(u32, void *, u32);
extern void SND_StartTimer(u32, u32, u32, u32);
extern void SND_StopTimer(u32, u32, u32, u32);
extern u32 SND_GetCurrentCommandTag(void);
extern u32 SND_WaitForCommandProc(u32);
extern u32 SND_FlushCommand(u32);
extern void NNS_SndUnlockCapture(u32);
extern void NNS_SndFreeAlarm(s32);
extern void SND_SetOutputSelector(u32, u32, u32, u32);
extern u32 data_027e038c;
extern s32 data_027e0390;
extern CapMsg data_021fb808[];
extern u32 data_021fb774;
extern void NNSi_SndCaptureStop(void);
extern void func_0210aadc(void *);

// NNS_SndCaptureStop
void NNSi_SndCaptureStop(void)
{
    BOOL hasAlarm;
    u32 tag;
    Cap *c = &data_021fb7b4;
    if (c->active == 0) {
        return;
    }
    hasAlarm = c->alarm >= 0;
    SND_StopTimer(c->startCh, c->capMask,
                  hasAlarm ? 1 << c->alarm : 0, 0);
    if (hasAlarm) {
        tag = SND_GetCurrentCommandTag();
        SND_FlushCommand(1);
        SND_WaitForCommandProc(tag);
        do {
        } while (OS_ReceiveMessage(&data_021fb774, 0, 0) != 0);
    }
    if (c->capMask != 0) {
        NNS_SndUnlockCapture(c->capMask);
    }
    if (c->chMask != 0) {
        NNS_SndUnlockChannel(c->chMask);
    }
    if (hasAlarm) {
        NNS_SndFreeAlarm(c->alarm);
    }
    if (c->mode == 1) {
        SND_SetOutputSelector(0, 0, 0, 0);
    }
    c->active = 0;
}

// NNS_SndCapturePause
void NNSi_SndCaptureBeginSleep(void)
{
    Cap *c = &data_021fb7b4;
    u32 tag;
    if (c->active == 0) {
        return;
    }
    SND_StopTimer(c->startCh, c->capMask,
                  (c->alarm >= 0) ? 1 << c->alarm : 0, 0);
    tag = SND_GetCurrentCommandTag();
    SND_FlushCommand(1);
    SND_WaitForCommandProc(tag);
}

// NNS_SndCaptureStartEffect restart / clear
void NNSi_SndCaptureEndSleep(void)
{
    Cap *c = &data_021fb7b4;
    volatile u32 zero1;
    volatile u32 zero2;
    if (c->active == 0) {
        return;
    }
    c->blkIdx = 0;
    zero1 = 0;
    MIi_CpuClear32(zero1, (void *)c->bufL, c->size);
    zero2 = 0;
    MIi_CpuClear32(zero2, (void *)c->bufR, c->size);
    DC_FlushRange((void *)c->bufL, c->size);
    DC_FlushRange((void *)c->bufR, c->size);
    SND_StartTimer(c->startCh, c->capMask, (c->alarm >= 0) ? 1 << c->alarm : 0, 0);
}

// capture alarm callback
void AlarmCallback(Cap *cap)
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
        OS_SendMessage(&data_021fb774, m, 0);
        data_027e0390++;
        if (data_027e0390 >= 8) {
            data_027e0390 = 0;
        }
    } else {
        DC_InvalidateRange((void *)l, size);
        DC_InvalidateRange((void *)r, size);
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
        OS_ReceiveMessage(&data_021fb774, &m, 1);
        msg = (CapMsg *)m;
        DC_InvalidateRange((void *)msg->l, msg->size);
        DC_InvalidateRange((void *)msg->r, msg->size);
        msg->cap->cb((void *)msg->l, (void *)msg->r, msg->size, msg->cap->fmt, msg->cap->cbArg);
    }
}

// NNS_SndStrmInit
void NNS_SndStrmInit(Strm *st)
{
    if (data_021fb6a4 == 0) {
        NNS_FndInitList(&data_021fb6a8, 0);
        data_021fb6a4 = 1;
    }
    st->pm0.cb = (void (*)(void *))BeginSleep__stream;
    st->pm0.arg = st;
    st->pm1.cb = (void (*)(void *))EndSleep__stream;
    st->pm1.arg = st;
    st->chMask = 0;
    st->chCount = 0;
    st->f.setup = 0;
    st->f.started = 0;
}

// NNS_SndStrmAllocChannel
BOOL NNS_SndStrmAllocChannel(Strm *st, s32 n, u8 *ch)
{
    u32 mask = 0;
    s32 i;
    for (i = 0; i < n; i++) {
        st->chIdx[i] = ch[i];
        mask |= 1 << ch[i];
    }
    if (NNS_SndLockChannel(mask) == 0) {
        return 0;
    }
    st->chCount = n;
    st->chMask = mask;
    return 1;
}

// NNS_SndStrmFreeChannel
void NNS_SndStrmFreeChannel(Strm *st)
{
    if (st->chMask == 0) {
        return;
    }
    NNS_SndUnlockChannel(st->chMask);
    st->chMask = 0;
    st->chCount = 0;
}
