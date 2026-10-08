#include "nitro/fs.h"
#include "nnsys/snd_arc.h"
// NNS sound library (NitroSystem snd): the end of capture.c (capture thread, main, init, effects), autoload_2
// 0x0210b1b0-0x0210b448, with the file's bss (autoload_3 0x021fb774-0x021fbd68). The file begins in unk_0210a9c4.c
// (0x0210aadc-0x0210b1b0, with NNSi_SndCaptureStart). The rest of the former unit (sound archive,
// sound heap) is unk_0210b448.c. ARM, mwcc 1.2/base, -O4,p.
// mwcc-flags: -nothumb -O4,p
#include "sys/OSThread.h"
#include "proto/autoload_2/unk_0210a9c4.h"
#include "proto/autoload_2/unk_0210b1b0.h"
#include "proto/autoload_2/unk_0210b448.h"
#include "proto/autoload_2/unk_02119434.h"
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef int s32;
typedef int BOOL;
typedef struct NNSFndLink { void *prev; void *next; } NNSFndLink;
typedef struct NNSFndList { void *head; void *tail; u16 num; u16 offset; } NNSFndList;
typedef void (*CapCb)(void *, void *, u32, s32, void *);
typedef struct Cap {
    s32 active;             // 0x00
    s32 mode;               // 0x04
    s32 fmt;                // 0x08
    u8 *bufL;               // 0x0c
    u8 *bufR;               // 0x10
    u32 size;               // 0x14
    u32 blkSize;            // 0x18
    s32 blkIdx;             // 0x1c
    u32 chMask;             // 0x20
    u32 startCh;            // 0x24
    u32 capMask;            // 0x28
    s32 alarm;              // 0x2c
    s32 nBlocks;            // 0x30
    CapCb cb;               // 0x34
    void *cbArg;            // 0x38
    u32 fader[4];           // 0x3c
    s32 faderOn;            // 0x4c
    s32 vol;                // 0x50
} Cap;
typedef struct FatEnt { u32 off; u32 size; u32 ptr; u32 fc; } FatEnt;
typedef struct Fat { u32 w0; u32 w4; u32 count; FatEnt e[1]; } Fat;
typedef NNSSndArc Arc;  // (include/nnsys/snd_arc.h)
typedef struct InfoTbl { u32 count; u32 ent[1]; } InfoTbl;
typedef struct SndHeap { void *heap; NNSFndList list; } SndHeap;
typedef struct SndHeapBlk {
    NNSFndLink link;        // 0x00
    u32 size;               // 0x08
    void (*cb)(void *, u32, void *, u32);   // 0x0c
    void *arg0;             // 0x10
    u32 arg1;               // 0x14
    u8 pad[8];
} SndHeapBlk;

extern Cap data_021fb7b4;
extern void NNS_FndInitList(NNSFndList *, u16);
extern void DC_FlushRange(void *, u32);
extern void MIi_CpuClear32(u32, void *, u32);
extern u32 SND_GetCurrentCommandTag(void);
extern u32 SND_WaitForCommandProc(u32);
extern u32 SND_FlushCommand(u32);
extern u32 data_027e038c;
extern s32 data_027e0390;
static u64 sCaptureThreadStack[128]; // the capture thread's stack (0x021fb968-0x021fbd68)
extern u32 data_021fb774[]; // OSMessageQueue
extern void SND_SetChannelVolume(u32, u32, u32);
extern void *data_021fb794[8]; // OSMessage[8]
extern u32 data_021fb8a8[]; // OSThread
extern void NNSi_SndFaderUpdate(void *);
extern u32 NNSi_SndFaderIsFinished(void *);
extern s32 NNSi_SndFaderGet(void *);
extern void OS_InitMessageQueue(void *, void *, s32);
extern void OS_CreateThread(void *, void *, void *, void *, u32, u32);
extern void OS_WakeupThreadDirect(void *);
extern BOOL NNSi_SndCaptureStart(s32 mode, void *bufL, void *bufR, u32 len, s32 fmt, s32 a5, s32 a6, BOOL loop, int rate, int vol, int pan1, int pan2, int nBlocks, CapCb cb, void *cbArg);
extern Arc *data_021fbd68;
extern BOOL FS_SeekFile(void *, u32, u32);
extern s32 FS_ReadFile(void *, void *, u32);
extern u8 *NNSi_SndSeqArcGetSeqInfo(void *, u32);
extern void *NNS_SndHeapAlloc(SndHeap *, u32, void (*)(void *, u32, void *, u32), void *, u32);
extern void MIi_CpuCopy32(void *, void *, u32);
extern BOOL FS_ConvertPathToFileID();
extern BOOL FS_OpenFileFast(void *, FSFileID);
extern void *NNS_FndAllocFromFrmHeapEx(void *, u32, u32);
extern void NNS_FndAppendListObject(NNSFndList *, void *);
extern void InitHeapSection(NNSFndList *);
extern BOOL NNS_SndArcSetup(Arc *, void *, BOOL);
extern void *NNS_SndArcGetSeqArcInfo(s32);
extern void *NNS_SndArcGetFileAddress(u32);
extern void SymbolDisposeCallback(void *, u32, void *, u32);
extern void FatDisposeCallback(void *, u32, void *, u32);
extern void InfoDisposeCallback(void *, u32, void *, u32);
extern void *NNS_FndGetPrevListObject(NNSFndList *, void *);
extern void NNS_FndRemoveListObject(NNSFndList *, void *);
extern void NNS_FndAppendListObject(NNSFndList *, void *);
extern BOOL NNS_FndFreeByStateToFrmHeap(void *, u32);
extern BOOL NNS_FndRecordStateForFrmHeap(void *, u32);
extern void NNS_FndFreeToFrmHeap(void *, u32);
extern void NNS_FndDestroyFrmHeap(void *);
extern void *NNS_FndCreateFrmHeapEx(void *, u32, u16);
extern void NNS_SndHeapClear(SndHeap *);
extern BOOL NewSection(SndHeap *);
extern BOOL InitHeap(SndHeap *, void *);void InfoDisposeCallback(void *mem, u32 size, void *arg0, u32 arg1)
{
    ((Arc *)arg0)->info = 0;
}

void FatDisposeCallback(void *mem, u32 size, void *arg0, u32 arg1)
{
    ((Arc *)arg0)->fat = 0;
}

void SymbolDisposeCallback(void *mem, u32 size, void *arg0, u32 arg1)
{
    ((Arc *)arg0)->symb = 0;
}

// NNS_SndCaptureStartReverb
BOOL NNS_SndCaptureStartEffect(void *buf, u32 size, s32 fmt, s32 rate, s32 nBlocks, CapCb cb, void *cbArg)
{
    volatile u32 zero;
    NNS_SndCaptureStopEffect();
    if (data_021fb7b4.active != 0) {
        return 0;
    }
    zero = 0;
    MIi_CpuClear32(zero, buf, size);
    DC_FlushRange(buf, size);
    return NNSi_SndCaptureStart(1, buf, (u8 *)buf + (size >> 1), size >> 1, fmt, 0, 0, 1, rate, 127, 0, 127,
                         nBlocks, cb, cbArg);
}

// NNS_SndCaptureStopReverb-like: stop if the running capture is mode 1
void NNS_SndCaptureStopEffect(void)
{
    if (data_021fb7b4.active == 0) {
        return;
    }
    if (data_021fb7b4.mode != 1) {
        return;
    }
    NNSi_SndCaptureStop();
}

// NNS_SndCaptureInit(threadPrio)
void NNS_SndCaptureCreateThread(u32 prio)
{
    if (data_027e038c != 0) {
        return;
    }
    data_027e0390 = 0;
    OS_InitMessageQueue(data_021fb774, data_021fb794, 8);
    OS_CreateThread(data_021fb8a8, (void *)CaptureThread, 0, sCaptureThreadStack + 128, 1024, prio);
    data_027e038c = 1;
    OS_WakeupThreadDirect(data_021fb8a8);
}

// NNS_SndCaptureInit state reset
void NNSi_SndCaptureInit(void)
{
    data_027e038c = 0;
    data_021fb7b4.active = 0;
}

// NNS_SndCaptureUpdate (fade the effect volume)
void NNSi_SndCaptureMain(void)
{
    Cap *c = &data_021fb7b4;
    s32 vol;
    void *f;
    if (c->active == 0) {
        return;
    }
    if (c->mode != 0) {
        return;
    }
    f = &c->fader[0];
    NNSi_SndFaderUpdate(f);
    if (c->faderOn != 0 && NNSi_SndFaderIsFinished(f) != 0) {
        NNSi_SndCaptureStop();
        return;
    }
    vol = NNSi_SndFaderGet(f) >> 8;
    if (vol == c->vol) {
        return;
    }
    SND_SetChannelVolume(c->startCh, vol, 0);
    c->vol = vol;
}

// ---- file-scope objects (autoload_3 .bss 0x021fb774-0x021fbd68; this definition order gives the original order after
// mwcc's size sort)
u32 data_021fb774[(2 * sizeof(OSThreadQueue) + sizeof(void *) + 3 * 4 + 7) / 4] __attribute__((aligned(8)));  // OSMessageQueue
void *data_021fb794[8]; // OSMessage[8]
Cap data_021fb7b4;
// CapMsg[8] (used by unk_0210a9c4.c: { Cap *cap; u32 size, off; u8 *l, *r; }, 20 bytes on the DS)
struct CapMsgStorage { void *cap; u32 size; u32 off; void *l; void *r; } data_021fb808[8];
u32 data_021fb8a8[sizeof(OSThread) / 4] __attribute__((aligned(8)));  // OSThread
static u64 sCaptureThreadStack[128];
