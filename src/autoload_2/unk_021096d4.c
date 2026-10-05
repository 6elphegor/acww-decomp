// mwcc-flags: -nothumb -O4,p
// NitroSystem (NNS) sound library, resource manager (channel / capture locks, alarms), autoload_2
// 0x021096d4-0x02109830, autoload_3 .bss 0x021fadc0-0x021fadcc. ARM, mwcc 1.2/base, -O4,p.
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
extern void SND_SetTrackVolume();
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
extern u32 SND_ReadPlayerInfo();
extern s32 SND_GetPlayerGlobalVariable(s32);
extern s32 SND_GetPlayerLocalVariable();
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
void ForceStopStrm(Strm *);
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
u32 NNSi_SndReadDriverPlayerInfo(u32, u32);
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

// ---- file-scope objects (autoload_3 .bss 0x021fadc0-0x021fadcc; this definition order gives the original order after
// mwcc's size sort)
u32 data_021fadc8;
u32 data_021fadc0;
u32 data_021fadc4;
