// mwcc-flags: -nothumb -O4,p
// NitroSystem (NNS) sound library, stream player (NNSSndStrm), first part: autoload_2 0x0210a478-0x0210a9c4,
// autoload_3 .bss 0x021fb6a4-0x021fb774. ARM, mwcc 1.2/base, -O4,p.
// The former unit 0x021090c0-0x0210a9c4 is split into its source files (by their bss: each file's bss is sorted by
// size on its own): snd main (0x021093f4), resource manager (0x021096d4), player (0x02109830), stream (0x0210a478,
// continued in unk_0210a9c4.c); its first part, the end of the XSI texture-SRT file, is in unk_02108d44.c. Every
// part keeps the common declarations.
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
extern void AlarmCallback__stream(void);
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
    SND_SetupAlarm(st->alarm, period, period, AlarmCallback__stream, st);
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

// ---- file-scope objects (autoload_3 .bss 0x021fb6a4-0x021fb774; this definition order gives the original order after
// mwcc's size sort)
StrmEnt data_021fb6f4[16];
u32 data_021fb6b4[16];
NNSFndList data_021fb6a8;
s32 data_021fb6a4;
