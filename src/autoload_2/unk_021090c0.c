// mwcc-flags: -nothumb -O4,p
// NitroSystem (NNS) g3d texture SRT matrices (0x021090c0-0x021093f4) and the NNS sound library:
// snd.c (NNS_SndInit/NNS_SndMain), sound players (NNSSndPlayer / NNSSndHandle / sequence player alloc),
// channel/alarm masks and the stream player (NNSSndStrm). autoload_2 0x021090c0-0x0210a9c4.
// ARM, mwcc 1.2/base, -O4,p.
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed char s8;
typedef short s16;
typedef int s32;
typedef long long s64;
typedef int BOOL;

typedef struct NNSFndLink { void *prev; void *next; } NNSFndLink;
typedef struct NNSFndList { void *head; void *tail; u16 num; u16 offset; } NNSFndList;
#include "sys/PMCbInfo.h"

typedef struct Seq Seq;
typedef struct Handle { Seq *seq; } Handle;

typedef struct Player {
    NNSFndList seqList;     // 0x00 (link at seq+0x0c)
    NNSFndList heapList;    // 0x0c (link at the start of a HeapBlk)
    u32 playable;           // 0x18
    u32 bank;               // 0x1c
    u8 vol;                 // 0x20
    u8 pad[3];
} Player;

typedef struct HeapBlk {
    NNSFndLink link;        // 0x00
    void *heap;             // 0x08
    Seq *seq;               // 0x0c
    s32 playerNo;           // 0x10
} HeapBlk;

struct Seq {
    Handle *handle;         // 0x00
    Player *player;         // 0x04
    HeapBlk *heap;          // 0x08
    NNSFndLink plink;       // 0x0c
    NNSFndLink glink;       // 0x14
    u32 fader[4];           // 0x1c
    u8 status;              // 0x2c
    u8 started;             // 0x2d
    u8 f2e;                 // 0x2e
    u8 pending;             // 0x2f
    u32 tag;                // 0x30
    u16 cmd;                // 0x34
    u16 f36;
    u16 a38;                // 0x38
    u16 a3a;                // 0x3a
    u8 id;                  // 0x3c
    u8 prio;                // 0x3d
    s16 vol;                // 0x3e
    u8 v40;                 // 0x40
    u8 v41;                 // 0x41
    u8 pad42[2];
};

typedef struct StrmEnt { u32 buf; u32 pos; } StrmEnt;
typedef void (*StrmCb)(s32, s32, u32 *, u32, s32, void *);

typedef struct Strm {
    NNSFndLink link;        // 0x00
    PMCbInfo pm0;           // 0x08
    PMCbInfo pm1;           // 0x14
    s32 fmt;                // 0x20
    struct { s32 setup : 1; s32 started : 1; } f;   // 0x24
    u32 blockSize;          // 0x28
    s32 blkCount;           // 0x2c
    StrmCb cb;              // 0x30
    void *arg;              // 0x34
    s32 blk;                // 0x38
    u32 timer;              // 0x3c
    s32 alarm;              // 0x40
    u32 chMask;             // 0x44
    s32 chCount;            // 0x48
    u8 chIdx[16];           // 0x4c
} Strm;

typedef struct SndBuf { u8 b[0x11e0]; } SndBuf;

// externs: data
extern s8 data_021f89d0;
extern u32 data_021f89d4;
extern u32 data_021f89d8;
extern u32 data_021f89dc;
extern PMCbInfo data_021f89e0;
extern PMCbInfo data_021f89ec;
extern SndBuf data_021f8a00[];
extern u32 data_021fadc0;
extern u32 data_021fadc4;
extern u32 data_021fadc8;
extern NNSFndList data_021fadcc;
extern NNSFndList data_021fadd8;
extern Seq data_021fade4[];
extern Player data_021fb224[];
extern NNSFndList data_021fb6a8;
extern u32 data_021fb6b4[];
extern StrmEnt data_021fb6f4[];
extern s16 data_02139fb4[];

// externs: functions
extern void *NNS_FndGetNextListObject(NNSFndList *, void *);
extern void NNS_FndRemoveListObject(NNSFndList *, void *);
extern void NNS_FndInsertListObject(NNSFndList *, void *, void *);
extern void NNS_FndAppendListObject(NNSFndList *, void *);
extern void NNS_FndInitList(NNSFndList *, u16);
extern void FX_DivAsync(s32, s32);
extern s32 FX_GetDivResult(void);
extern u32 OS_DisableInterrupts(void);
extern void OS_RestoreInterrupts(u32);
extern void func_01ff9f5c(void);
extern u32 _u32_div_f();
extern void NNSi_SndCaptureEndSleep(void);
extern void NNSi_SndCaptureBeginSleep(void);
extern void NNSi_SndCaptureMain(void);
extern void NNSi_SndCaptureInit(void);
extern void NNS_SndHeapClear(void *);
extern void *NNS_SndHeapAlloc();
extern void *NNS_SndHeapCreate(void *, u32);
extern void NNS_SndHeapDestroy(void *);
extern void NNSi_SndArcStrmMain(void);
extern u32 NNSi_SndFaderIsFinished(void *);
extern void NNSi_SndFaderUpdate(void *);
extern s32 NNSi_SndFaderGet(void *);
extern void NNSi_SndFaderSet(void *, s32, s32);
extern void NNSi_SndFaderInit(void *);
extern void DC_InvalidateRange(void *, u32);
extern void SND_ReadDriverInfo(void *);
extern void SND_SetupChannelPcm();
extern void SND_SetChannelPan(u32, u32);
extern void SND_SetChannelVolume(u32, u32, u32);
extern void SND_UnlockChannel(u32, u32);
extern void SND_LockChannel(u32, u32);
extern void SND_SetTrackMute();
extern void SND_SetupAlarm();
extern void SND_StopTimer(u32, u32, u32, u32);
extern void SND_StartTimer(u32, u32, u32, u32);
extern void SND_SetTrackAllocatableChannel();
extern void SND_SetTrackPan();
extern void SND_SetTrackPitch();
extern void func_02116b54();
extern void SND_SetPlayerGlobalVariable();
extern void SND_SetPlayerLocalVariable();
extern void SND_SetPlayerChannelPriority();
extern void SND_SetPlayerVolume(u32, s32);
extern void SND_SetPlayerTempoRatio();
extern void SND_StartPreparedSeq(u32);
extern void SND_PrepareSeq();
extern void SND_StopSeq(u32);
extern void SND_Init(void);
extern u32 SND_IsFinishedCommandTag(u32);
extern u32 SND_GetCurrentCommandTag(void);
extern u32 SND_WaitForCommandProc(u32);
extern u32 SND_FlushCommand(u32);
extern u32 SND_RecvCommandReply(u32);
extern u32 SND_ReadTrackInfo();
extern u32 func_0211777c();
extern s32 func_02117844(s32);
extern s32 func_02117884();
extern u32 SND_GetPlayerStatus(void);
extern s32 SND_CalcChannelVolume(s32);
extern void SND_SetMasterVolume(u32);
extern void PM_DeletePostSleepCallback(void *);
extern void PM_DeletePreSleepCallback(void *);
extern void PM_AppendPostSleepCallback(void *);
extern void PM_PrependPreSleepCallback(void *);

// in-unit prototypes
void SetPlayerPriority(Seq *, u8);
void InsertPrioList(Seq *);
void InsertPlayerList(NNSFndList *, Seq *);
void ShutdownPlayer(Seq *);
void ForceStopSeq(Seq *);
Seq *AllocSeqPlayer(s32);
void NNS_SndHandleReleaseSeq(Handle *);
void StrmCallback(Strm *, s32);
void ShutdownStrm(Strm *);
void func_0210a630(Strm *);
void NNS_SndStrmStop(Strm *);
void NNS_SndFreeAlarm(s32);
s32 NNS_SndAllocAlarm(void);
void NNSi_SndPlayerStopSeq(Seq *, s32);
void InitPlayer(Seq *);
void PlayerHeapDisposeCallback(HeapBlk *);
void NNSi_SndPlayerMain(void);
void NNSi_SndPlayerInit(void);
void NNSi_SndInitResourceMgr(void);
u32 BeginSleep(void);
u32 NNS_SndReadDriverChannelInfo(u32, u32);
u32 NNSi_SndReadDriverTrackInfo(u32, u32, u32);
void EndSleep(void);

typedef struct TexSrt {
    u8 pad[0x18];
    s32 sx;     // 0x18
    s32 sy;     // 0x1c
    s16 sn;     // 0x20
    s16 cs;     // 0x22
    s32 tx;     // 0x24
    s32 ty;     // 0x28
    u16 w;      // 0x2c
    u16 h;      // 0x2e
} TexSrt;
#define FXM(a, b) ((s32)(((s64)(a) * (b)) >> 12))

// NNS_SndStrmSetup
BOOL NNS_SndStrmSetup(Strm *st, s32 fmt, u32 buf, u32 size, s32 timer, s32 interval, StrmCb cb, void *arg)
{
    s32 i;
    u32 q;
    u32 period;
    u32 t;
    u32 e;
    if (st->f.setup) {
        NNS_SndStrmStop(st);
    }
    q = _u32_div_f(size, st->chCount * (interval << 5));
    st->blockSize = (q * interval) << 5;
    t = st->blockSize;
    if (fmt == 1) {
        t >>= 1;
    }
    period = _u32_div_f(timer * t, interval);
    st->alarm = NNS_SndAllocAlarm();
    if (st->alarm < 0) {
        return 0;
    }
    for (i = 0; i < st->chCount; i++) {
        u32 ch = st->chIdx[i];
        data_021fb6f4[ch].buf = st->blockSize * i + buf;
        data_021fb6f4[ch].pos = 0;
        SND_SetupChannelPcm(ch, fmt, data_021fb6f4[ch].buf, 1, 0, st->blockSize >> 2, 127, 0, timer << 5, 64);
    }
    SND_SetupAlarm(st->alarm, period, period, func_01ff9f5c, st);
    NNS_FndAppendListObject(&data_021fb6a8, st);
    st->fmt = fmt;
    st->blkCount = interval;
    st->cb = cb;
    st->arg = arg;
    st->blk = 0;
    st->timer = 0;
    st->f.setup = 1;
    e = OS_DisableInterrupts();
    st->blkCount = 1;
    StrmCallback(st, 0);
    st->blkCount = interval;
    OS_RestoreInterrupts(e);
    return 1;
}

// NNS_SndStrmStart (start the stream timer; register the PM sleep callbacks)
void NNS_SndStrmStart(Strm *st)
{
    SND_StartTimer(st->chMask, 0, 1 << st->alarm, 0);
    if (st->f.started) {
        return;
    }
    PM_PrependPreSleepCallback(&st->pm0);
    PM_AppendPostSleepCallback(&st->pm1);
    st->f.started = 1;
}

// NNS_SndStrmStop-like: free the stream if it is set up
void NNS_SndStrmStop(Strm *st)
{
    if (!st->f.setup) {
        return;
    }
    func_0210a630(st);
}

// NNS_SndStrmSetPlayPosition-like: per-channel pan/vol update from the position table
void NNS_SndStrmSetVolume(Strm *st, u32 timer)
{
    u32 ch;
    s32 i;
    st->timer = timer;
    i = 0;
    if (st->chCount <= 0) {
        return;
    }
    do {
        s32 v;
        ch = st->chIdx[i];
        v = SND_CalcChannelVolume(st->timer + data_021fb6f4[ch].pos);
        SND_SetChannelVolume(1 << ch, v & 0xff, v >> 8);
        i++;
    } while (i < st->chCount);
}

// NNS_SndStrmSetChannelVolume (ch, vol)
void func_0210a6b0(Strm *st, s32 ch, u32 v)
{
    if (ch > st->chCount - 1) {
        return;
    }
    SND_SetChannelPan(1 << st->chIdx[ch], v);
}

// NNSi_SndStrmFree: stop timer, remove PM callbacks, drop from list
void func_0210a630(Strm *st)
{
    u32 t;
    if (st->f.started) {
        SND_StopTimer(st->chMask, 0, 1 << st->alarm, 0);
        PM_DeletePreSleepCallback(&st->pm0);
        PM_DeletePostSleepCallback(&st->pm1);
        st->f.started = 0;
        t = SND_GetCurrentCommandTag();
        SND_FlushCommand(1);
        SND_WaitForCommandProc(t);
    }
    ShutdownStrm(st);
}

// NNSi_SndStrmRelease: free alarm, remove from stream list
void ShutdownStrm(Strm *st)
{
    NNS_SndFreeAlarm(st->alarm);
    NNS_FndRemoveListObject(&data_021fb6a8, st);
    st->f.setup = 0;
}

// NNSi_SndStrmCallback: fill the next block through the user callback
void StrmCallback(Strm *st, s32 flag)
{
    u32 q = _u32_div_f(st->blockSize, st->blkCount);
    u32 off = q * st->blk;
    s32 i;
    for (i = 0; i < st->chCount; i++) {
        u32 b = data_021fb6f4[st->chIdx[i]].buf;
        data_021fb6b4[i] = b + off;
    }
    st->cb(flag, st->chCount, data_021fb6b4, q, st->fmt, st->arg);
    st->blk = st->blk + 1;
    if (st->blk >= st->blkCount) {
        st->blk = 0;
    }
}

// NNS_SndStrmPause-like: stop timer and wait for the SND command
void BeginSleep__stream(Strm *st)
{
    u32 t;
    if (!st->f.started) {
        return;
    }
    SND_StopTimer(st->chMask, 0, 1 << st->alarm, 0);
    t = SND_GetCurrentCommandTag();
    SND_FlushCommand(1);
    SND_WaitForCommandProc(t);
}

// NNS_SndStrmStop: drain to a block boundary then stop the SND timer
void EndSleep__stream(Strm *st)
{
    u32 e;
    if (!st->f.started) {
        return;
    }
    while (st->blk != 0) {
        e = OS_DisableInterrupts();
        StrmCallback(st, 1);
        OS_RestoreInterrupts(e);
    }
    SND_StartTimer(st->chMask, 0, 1 << st->alarm, 0);
}

// NNS_SndPlayerSetVolume(playerNo, vol)
void NNS_SndPlayerSetPlayerVolume(s32 i, u8 v)
{
    data_021fb224[i].vol = v;
}

// NNS_SndPlayerSetPlayableSeqCount(playerNo, n)
void NNS_SndPlayerSetPlayableSeqCount(s32 i, u32 v)
{
    data_021fb224[i].playable = (u16)v;
}

// NNS_SndPlayerSetBank-like (playerNo, bank)
void NNS_SndPlayerSetAllocatableChannel(s32 i, u32 v)
{
    data_021fb224[i].bank = v;
}

// NNS_SndPlayerCreateHeap
BOOL NNS_SndPlayerCreateHeap(s32 playerNo, void *heap, u32 size)
{
    HeapBlk *b;
    void *h;
    b = NNS_SndHeapAlloc(heap, size + 20, PlayerHeapDisposeCallback, 0, 0);
    if (b == 0) {
        return 0;
    }
    b->seq = 0;
    b->playerNo = playerNo;
    b->heap = 0;
    h = NNS_SndHeapCreate((u8 *)b + 20, size);
    if (h == 0) {
        return 0;
    }
    b->heap = h;
    NNS_FndAppendListObject(&data_021fb224[playerNo].heapList, b);
    return 1;
}

// NNS_SndHandleStop(handle, fadeFrames)
void NNS_SndPlayerStopSeq(Handle *h, s32 frames)
{
    NNSi_SndPlayerStopSeq(h->seq, frames);
}

// NNS_SndPlayerStopSeq(playerNo, fadeFrames)
void NNS_SndPlayerStopSeqByPlayerNo(s32 playerNo, s32 frames)
{
    s32 i;
    Seq *s;
    Player *p;
    p = &data_021fb224[playerNo];
    s = data_021fade4;
    for (i = 0; i < 16; i++, s++) {
        if (s->status != 0 && s->player == p) {
            NNSi_SndPlayerStopSeq(s, frames);
        }
    }
}

// NNS_SndPlayerStopSeqBySeqNo-like (a, b, fadeFrames)
void NNS_SndPlayerStopSeqBySeqNo(u32 a, u32 b, s32 c)
{
    s32 i;
    Seq *s = data_021fade4;
    for (i = 0; i < 16; i++, s++) {
        if (s->status != 0 && s->cmd == 2 && s->a38 == a && s->a3a == b) {
            NNSi_SndPlayerStopSeq(s, c);
        }
    }
}

// NNS_SndHandleInit
void NNS_SndHandleInit(Handle *h)
{
    h->seq = 0;
}

// NNS_SndHandleReleaseSeq
void NNS_SndHandleReleaseSeq(Handle *h)
{
    Seq *s = h->seq;
    if (s != 0) {
        s->handle = 0;
        h->seq = 0;
    }
}

// NNS_SndHandleSetTrackVolume-like (v41)
void NNS_SndPlayerSetVolume(Handle *h, u8 v)
{
    Seq *s = h->seq;
    if (s != 0) {
        s->v41 = v;
    }
}

// NNS_SndHandleSetVolume-like (v40)
void NNS_SndPlayerSetInitialVolume(Handle *h, u8 v)
{
    Seq *s = h->seq;
    if (s != 0) {
        s->v40 = v;
    }
}

// NNS_SndHandleSetMasterVolume-like (fader target, frames)
void NNS_SndPlayerMoveVolume(Handle *h, s32 v, s32 frames)
{
    Seq *s = h->seq;
    if (s == 0) {
        return;
    }
    if (s->status == 2) {
        return;
    }
    NNSi_SndFaderSet(s->fader, v << 8, frames);
}

// NNS_SndHandleSetPriority
void func_0210a1e8(Handle *h, u8 prio)
{
    if (h->seq == 0) {
        return;
    }
    SetPlayerPriority(h->seq, prio);
}

// NNS_SndHandleSetTempoRatio-like
void NNS_SndPlayerSetChannelPriority(Handle *h, u32 b)
{
    if (h->seq == 0) {
        return;
    }
    SND_SetPlayerChannelPriority(h->seq->id, b);
}

// NNS_SndHandleSetTrackPitch-like
void func_0210a188(Handle *h, u32 b, u32 c)
{
    if (h->seq == 0) {
        return;
    }
    SND_SetTrackMute(h->seq->id, b, c);
}

// NNS_SndHandleSetTrackPan-like (volume table lookup)
void func_0210a148(Handle *h, u32 b, s32 c)
{
    if (h->seq == 0) {
        return;
    }
    func_02116b54(h->seq->id, b, data_02139fb4[c]);
}

// NNS_SndHandleSetTrackModDepth-like
void NNS_SndPlayerSetTrackPitch(Handle *h, u32 b, u32 c)
{
    if (h->seq == 0) {
        return;
    }
    SND_SetTrackPitch(h->seq->id, b, c);
}

// NNS_SndHandleSetTrackPitchBend-like
void NNS_SndPlayerSetTrackPan(Handle *h, u32 b, u32 c)
{
    if (h->seq == 0) {
        return;
    }
    SND_SetTrackPan(h->seq->id, b, c);
}

// NNS_SndHandleSetTempo-like
void func_0210a0b8(Handle *h, u32 b)
{
    if (h->seq == 0) {
        return;
    }
    SND_SetPlayerTempoRatio(h->seq->id, b);
}

// NNS_SndHandleSetSeqNoState (state 1)
void NNS_SndPlayerSetSeqNo(Handle *h, u16 a)
{
    Seq *s = h->seq;
    if (s != 0) {
        s->cmd = 1;
        h->seq->a38 = a;
    }
}

// NNS_SndHandleSetSeqNoState (state 2)
void NNS_SndPlayerSetSeqArcNo(Handle *h, u16 a, u16 b)
{
    Seq *s = h->seq;
    if (s == 0) {
        return;
    }
    s->cmd = 2;
    h->seq->a38 = a;
    h->seq->a3a = b;
}

// NNS_SndHandleReadVariable-like
BOOL func_0210a024(Handle *h, s32 b, s16 *out)
{
    Seq *s = h->seq;
    if (s == 0) {
        return 0;
    }
    if (s->started == 0) {
        *out = -1;
        return 1;
    }
    *out = func_02117884(s->id, b);
    return 1;
}

// NNS_SndReadGlobalVariable-like
BOOL func_0210a008(s32 a, u16 *out)
{
    *out = func_02117844(a);
    return 1;
}

// NNS_SndHandleSetTrackMute
BOOL func_02109fd0(Handle *h, u32 b, u32 c)
{
    if (h->seq == 0) {
        return 0;
    }
    SND_SetPlayerLocalVariable(h->seq->id, b, c);
    return 1;
}

// NNS_SndSetGlobalVariable-like
BOOL func_02109fb4(u32 a, u32 b)
{
    SND_SetPlayerGlobalVariable(a, b);
    return 1;
}

// NNS_SndHandleGetChannelInfo-like
u32 func_02109f80(Handle *h, u32 b)
{
    if (h->seq == 0) {
        return 0;
    }
    return NNS_SndReadDriverChannelInfo(h->seq->id, b);
}

// NNS_SndHandleGetTrackInfo-like
u32 func_02109f4c(Handle *h, u32 b, u32 c)
{
    if (h->seq == 0) {
        return 0;
    }
    return NNSi_SndReadDriverTrackInfo(h->seq->id, b, c);
}

// NNSi_SndPlayerInit: init seq player lists/free list and 32 players
void NNSi_SndPlayerInit(void)
{
    s32 i;
    Seq *s;
    Player *p;
    NNS_FndInitList(&data_021fadd8, 20);
    NNS_FndInitList(&data_021fadcc, 20);
    s = data_021fade4;
    for (i = 0; i < 16; i++, s++) {
        s->status = 0;
        s->id = i;
        NNS_FndAppendListObject(&data_021fadcc, s);
    }
    p = data_021fb224;
    for (i = 0; i < 32; i++, p++) {
        NNS_FndInitList(&p->seqList, 12);
        NNS_FndInitList(&p->heapList, 0);
        p->vol = 127;
        p->playable = 1;
        p->bank = 0;
    }
}

// NNSi_SndPlayerMain: per-frame seq player update (volume, fade, release)
void NNSi_SndPlayerMain(void)
{
    u32 mask = SND_GetPlayerStatus();
    Seq *s = NNS_FndGetNextListObject(&data_021fadd8, 0);
    Seq *next;
    s32 vol;
    s32 a, b, c, d;
    if (s == 0) {
        return;
    }
    do {
        next = NNS_FndGetNextListObject(&data_021fadd8, s);
        if (s->started == 0) {
            if (SND_IsFinishedCommandTag(s->tag) != 0) {
                s->started = 1;
            }
        }
        if (s->started != 0 && (mask & (1 << s->id)) == 0) {
            ShutdownPlayer(s);
        } else {
            NNSi_SndFaderUpdate(s->fader);
            a = data_02139fb4[s->v41];
            b = data_02139fb4[s->v40];
            c = data_02139fb4[s->player->vol];
            d = data_02139fb4[NNSi_SndFaderGet(s->fader) >> 8];
            vol = d + (c + (b + a));
            if (vol < -723) {
                vol = -723;
            } else if (vol > 0) {
                vol = 0;
            }
            if (vol != s->vol) {
                SND_SetPlayerVolume(s->id, vol);
                s->vol = vol;
            }
            if (s->status == 2) {
                if (NNSi_SndFaderIsFinished(s->fader) != 0) {
                    ForceStopSeq(s);
                }
            }
            if (s->pending != 0) {
                SND_StartPreparedSeq(s->id);
                s->pending = 0;
            }
        }
        s = next;
    } while (s != 0);
}

// NNSi_SndPlayerAllocSeqPlayer(handle, playerNo, prio)
Seq *NNSi_SndPlayerAllocSeqPlayer(Handle *h, s32 playerNo, s32 prio)
{
    Player *p = &data_021fb224[playerNo];
    Seq *s = h->seq;
    if (s != 0) {
        NNS_SndHandleReleaseSeq(h);
    }
    if (p->seqList.num >= p->playable) {
        Seq *o = NNS_FndGetNextListObject(&p->seqList, 0);
        if (o == 0) {
            return 0;
        }
        if (prio < o->prio) {
            return 0;
        }
        ForceStopSeq(o);
    }
    s = AllocSeqPlayer(prio);
    if (s == 0) {
        return 0;
    }
    InsertPlayerList(&p->seqList, s);
    s->handle = h;
    h->seq = s;
    return s;
}

// tail to ShutdownPlayer
void NNSi_SndPlayerFreeSeqPlayer(Seq *s)
{
    ShutdownPlayer(s);
}

// NNSi_SndPlayerStartSeq (SND_StartSeq command)
void NNSi_SndPlayerStartSeq(Seq *s)
{
    Player *p = s->player;
    SND_PrepareSeq(s->id);
    if (p->bank != 0) {
        SND_SetTrackAllocatableChannel(s->id, 0xffff, p->bank);
    }
    InitPlayer(s);
    s->tag = SND_GetCurrentCommandTag();
    s->pending = 1;
    s->status = 1;
}

// NNSi_SndPlayerStopSeq(seq, fadeFrames)
void NNSi_SndPlayerStopSeq(Seq *s, s32 frames)
{
    if (s == 0) {
        return;
    }
    if (s->status == 0) {
        return;
    }
    if (frames == 0) {
        ForceStopSeq(s);
        return;
    }
    NNSi_SndFaderSet(s->fader, 0, frames);
    SetPlayerPriority(s, 0);
    s->status = 2;
}

// NNSi_SndPlayerAllocHeap(playerNo, seq)
void *NNSi_SndPlayerAllocHeap(s32 playerNo, Seq *seq)
{
    Player *p = &data_021fb224[playerNo];
    HeapBlk *b = NNS_FndGetNextListObject(&p->heapList, 0);
    if (b == 0) {
        return 0;
    }
    NNS_FndRemoveListObject(&p->heapList, b);
    b->seq = seq;
    seq->heap = b;
    NNS_SndHeapClear(b->heap);
    return b->heap;
}

// NNSi_SndSeqPlayerInit
void InitPlayer(Seq *s)
{
    s->f2e = 0;
    s->started = 0;
    s->pending = 0;
    s->cmd = 0;
    s->vol = 0;
    s->v40 = 127;
    s->v41 = 127;
    NNSi_SndFaderInit(s->fader);
    NNSi_SndFaderSet(s->fader, 0x7f00, 1);
}

// insert seq into a player list sorted by priority
void InsertPlayerList(NNSFndList *l, Seq *s)
{
    Seq *o = NNS_FndGetNextListObject(l, 0);
    while (o != 0) {
        if (s->prio < o->prio) {
            break;
        }
        o = NNS_FndGetNextListObject(l, o);
    }
    NNS_FndInsertListObject(l, o, s);
    s->player = (Player *)l;
}

// insert seq into the global priority list
void InsertPrioList(Seq *s)
{
    Seq *o = NNS_FndGetNextListObject(&data_021fadd8, 0);
    while (o != 0) {
        if (s->prio < o->prio) {
            break;
        }
        o = NNS_FndGetNextListObject(&data_021fadd8, o);
    }
    NNS_FndInsertListObject(&data_021fadd8, o, s);
}

// force-stop and free a seq player
void ForceStopSeq(Seq *s)
{
    if (s->status == 2) {
        SND_SetPlayerVolume(s->id, -723);
    }
    SND_StopSeq(s->id);
    ShutdownPlayer(s);
}

// allocate a seq player (steal the lowest priority if none is free)
Seq *AllocSeqPlayer(s32 prio)
{
    Seq *s = NNS_FndGetNextListObject(&data_021fadcc, 0);
    if (s == 0) {
        s = NNS_FndGetNextListObject(&data_021fadd8, 0);
        if (prio < s->prio) {
            return 0;
        }
        ForceStopSeq(s);
    }
    NNS_FndRemoveListObject(&data_021fadcc, s);
    s->prio = prio;
    InsertPrioList(s);
    return s;
}

// free a seq player
void ShutdownPlayer(Seq *s)
{
    Player *p;
    if (s->handle != 0) {
        s->handle->seq = 0;
        s->handle = 0;
    }
    p = s->player;
    NNS_FndRemoveListObject(&p->seqList, s);
    s->player = 0;
    if (s->heap != 0) {
        NNS_FndAppendListObject(&p->heapList, s->heap);
        s->heap->seq = 0;
        s->heap = 0;
    }
    NNS_FndRemoveListObject(&data_021fadd8, s);
    NNS_FndAppendListObject(&data_021fadcc, s);
    s->status = 0;
}

// player heap block free callback
void PlayerHeapDisposeCallback(HeapBlk *b)
{
    if (b->heap == 0) {
        return;
    }
    NNS_SndHeapDestroy(b->heap);
    if (b->seq != 0) {
        b->seq->heap = 0;
        return;
    }
    NNS_FndRemoveListObject(&data_021fb224[b->playerNo].heapList, b);
}

// set seq priority and reinsert it in the lists
void SetPlayerPriority(Seq *s, u8 prio)
{
    Player *p = s->player;
    if (p != 0) {
        NNS_FndRemoveListObject(&p->seqList, s);
        s->player = 0;
    }
    NNS_FndRemoveListObject(&data_021fadd8, s);
    s->prio = prio;
    if (p != 0) {
        InsertPlayerList(&p->seqList, s);
    }
    InsertPrioList(s);
}

// NNSi_SndLockChannel (mask)
BOOL NNS_SndLockChannel(u32 m)
{
    if (m == 0) {
        return 1;
    }
    if (m & data_021fadc8) {
        return 0;
    }
    SND_LockChannel(m, 0);
    data_021fadc8 |= m;
    return 1;
}

// NNSi_SndUnlockChannel (mask)
void NNS_SndUnlockChannel(u32 m)
{
    if (m == 0) {
        return;
    }
    SND_UnlockChannel(m, 0);
    data_021fadc8 &= ~m;
}

// reserve channel mask (flags in data_021fadc0)
BOOL NNS_SndLockCapture(u32 m)
{
    if (m & data_021fadc0) {
        return 0;
    }
    data_021fadc0 |= m;
    return 1;
}

// release channel mask
void NNS_SndUnlockCapture(u32 m)
{
    data_021fadc0 &= ~m;
}

// allocate an alarm number from the mask (-1 if none)
s32 NNS_SndAllocAlarm(void)
{
    s32 i;
    u32 bit = 1;
    for (i = 0; i < 8; i++, bit <<= 1) {
        if ((data_021fadc4 & bit) == 0) {
            data_021fadc4 |= bit;
            return i;
        }
    }
    return -1;
}

// free an alarm number
void NNS_SndFreeAlarm(s32 n)
{
    data_021fadc4 &= ~(1 << n);
}

// clear channel/alarm masks
void NNSi_SndInitResourceMgr(void)
{
    data_021fadc8 = 0;
    data_021fadc0 = 0;
    data_021fadc4 = 0;
}

// NNS_SndInit
// NNS_SndInit
void NNS_SndInit(void)
{
    if (data_021f89dc != 0) {
        return;
    }
    data_021f89dc = 1;
    SND_Init();
    data_021f89e0.cb = (void (*)(void *))BeginSleep;
    data_021f89e0.arg = 0;
    data_021f89ec.cb = (void (*)(void *))EndSleep;
    data_021f89ec.arg = 0;
    PM_PrependPreSleepCallback(&data_021f89e0);
    PM_AppendPostSleepCallback(&data_021f89ec);
    NNSi_SndInitResourceMgr();
    NNSi_SndCaptureInit();
    NNSi_SndPlayerInit();
    data_021f89d0 = -1;
    data_021f89d4 = 1;
}

// NNS_SndMain
// NNS_SndMain
void NNS_SndMain(void)
{
    s32 z = 0;
    while (SND_RecvCommandReply(z) != 0) {
    }
    NNSi_SndPlayerMain();
    NNSi_SndCaptureMain();
    NNSi_SndArcStrmMain();
    SND_FlushCommand(0);
}

// tail to SND_SetMasterVolume
void NNS_SndSetMasterVolume(u32 a)
{
    SND_SetMasterVolume(a);
}

// NNS_SndUpdateDriverInfo-like (double-buffered SND_UpdateDriverInfo)
BOOL func_021094f8(void)
{
    if (data_021f89d4 == 0) {
        if (SND_IsFinishedCommandTag(data_021f89d8) == 0) {
            return 0;
        }
        if (data_021f89d0 < 0) {
            data_021f89d0 = 1;
        }
        SND_ReadDriverInfo(&data_021f8a00[data_021f89d0]);
        data_021f89d8 = SND_GetCurrentCommandTag();
        if (data_021f89d0 == 0) {
            data_021f89d0 = 1;
        } else {
            data_021f89d0 = 0;
        }
        DC_InvalidateRange(&data_021f8a00[data_021f89d0], sizeof(SndBuf));
        return 1;
    } else {
        SND_ReadDriverInfo(data_021f8a00);
        data_021f89d8 = SND_GetCurrentCommandTag();
        data_021f89d4 = 0;
        return 0;
    }
}

// read channel info from the current driver info buffer
u32 NNS_SndReadDriverChannelInfo(u32 a, u32 b)
{
    SndBuf *p;
    if (data_021f89d0 < 0) {
        p = 0;
    } else {
        p = &data_021f8a00[data_021f89d0];
    }
    if (p == 0) {
        return 0;
    }
    return func_0211777c(p, a, b);
}

// read track/player info from the current driver info buffer
u32 NNSi_SndReadDriverTrackInfo(u32 a, u32 b, u32 c)
{
    SndBuf *p;
    if (data_021f89d0 < 0) {
        p = 0;
    } else {
        p = &data_021f8a00[data_021f89d0];
    }
    if (p == 0) {
        return 0;
    }
    return SND_ReadTrackInfo(p, a, b, c);
}

// PM pre-sleep callback body: stop sound
u32 BeginSleep(void)
{
    u32 t;
    NNSi_SndCaptureBeginSleep();
    SND_StopTimer(0, 0, 0, 0);
    t = SND_GetCurrentCommandTag();
    SND_FlushCommand(1);
    return SND_WaitForCommandProc(t);
}

// PM post-sleep callback (tail to NNSi_SndCaptureEndSleep)
void EndSleep(void)
{
    NNSi_SndCaptureEndSleep();
}

// g3d texture SRT -> texture matrix (elements 0,1,4,5,12,13): scale + rotation + translation
void func_02109294(s32 *m, TexSrt *t)
{
    s32 h, w, sn, sy, cs, sx, x, y, e;
    s64 q, d;
    w = t->w << 12; h = t->h << 12;
    FX_DivAsync(h, w);
    cs = t->cs; sx = t->sx; sn = t->sn; sy = t->sy;
    m[0] = FXM(sx, cs);
    x = FXM(sx, sn);
    y = FXM(sy, cs);
    m[5] = y;
    m[1] = FXM(sy, sn) * FX_GetDivResult() >> 12;
    FX_DivAsync(w, h);
    q = ((s64)t->tx * t->cs + (s64)t->ty * t->sn) >> 12;
    d = ((s64)t->tx * t->sn - (s64)t->ty * t->cs) >> 12;
    e = y + (s32)(d * t->sy >> 12);
    m[12] = (t->w * (x - (s32)(q * t->sx >> 12))) << 4;
    m[13] = (-(s32)t->h * (e - 0x1000)) << 4;
    m[4] = (-x) * FX_GetDivResult() >> 12;
}

// rotation + translation
void texmtxCalc_flagS___xsi(s32 *m, TexSrt *t)
{
    s32 w = t->w << 12;
    s32 h = t->h << 12;
    s32 a, b;
    FX_DivAsync(h, w);
    m[0] = t->cs;
    m[5] = t->cs;
    m[1] = t->sn * FX_GetDivResult() >> 12;
    FX_DivAsync(w, h);
    a = (s32)(((s64)t->tx * t->cs + (s64)t->ty * t->sn) >> 12);
    b = (s32)(((s64)t->tx * t->sn - (s64)t->ty * t->cs) >> 12);
    m[12] = (t->w * (t->sn - a)) << 4;
    m[13] = (-(s32)t->h * (t->cs + b - 0x1000)) << 4;
    m[4] = (-t->sn) * FX_GetDivResult() >> 12;
}

// scale + translation
void texmtxCalc_flagR___xsi(s32 *m, TexSrt *t)
{
    s32 tx, ty;
    m[0] = t->sx; m[5] = t->sy; m[1] = 0;
    tx = -FXM(t->tx, t->sx); ty = FXM(-t->ty, t->sy);
    m[12] = (t->w * tx) << 4;
    m[13] = (-(s32)t->h * (t->sy + ty - 0x1000)) << 4;
    m[4] = 0;
}

// translation only
void texmtxCalc_flagRS___xsi(s32 *m, TexSrt *t)
{
    s32 tx, ty;
    m[0] = 0x1000; m[5] = 0x1000; m[1] = 0;
    tx = -t->tx; ty = -t->ty;
    m[12] = (t->w * tx) << 4;
    m[13] = (-(s32)t->h * ty) << 4;
    m[4] = 0;
}
