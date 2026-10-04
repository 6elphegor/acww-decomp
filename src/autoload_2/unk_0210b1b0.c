#include "nitro/fs.h"
// NNS sound library (NitroSystem snd): the end of capture.c (capture thread, main, init, effects), autoload_2
// 0x0210b1b0-0x0210b448, with the file's bss (autoload_3 0x021fb774-0x021fbd68). The file begins in unk_0210a9c4.c
// (0x0210aadc..) and NNSi_SndCaptureStart (0x0210ae48) is not built yet. The rest of the former unit (sound archive,
// sound heap) is unk_0210b448.c. ARM, mwcc 1.2/base, -O4,p.
// mwcc-flags: -nothumb -O4,p
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef int s32;
typedef int BOOL;
typedef struct NNSFndLink { void *prev; void *next; } NNSFndLink;
typedef struct NNSFndList { void *head; void *tail; u16 num; u16 offset; } NNSFndList;
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
typedef struct FatEnt { u32 off; u32 size; u32 ptr; u32 fc; } FatEnt;
typedef struct Fat { u32 w0; u32 w4; u32 count; FatEnt e[1]; } Fat;
typedef struct Arc {
    u8 sig[4];              // 0x00 'SDAT'
    u32 magic;              // 0x04
    u32 fileSize;           // 0x08
    u16 hdrSize;            // 0x0c
    u16 nBlocks;            // 0x0e
    u32 symbOff;            // 0x10
    u32 symbSize;           // 0x14
    u32 infoOff;            // 0x18
    u32 infoSize;           // 0x1c
    u32 fatOff;             // 0x20
    u32 fatSize;            // 0x24
    u32 fileOff;            // 0x28
    u32 fileBlkSize;        // 0x2c
    s32 fromFile;           // 0x30
    FSFile file;            // 0x34
    FSFileID id;            // 0x7c
    Fat *fat;               // 0x84
    u8 *symb;               // 0x88
    u8 *info;               // 0x8c
} Arc;
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
extern u32 data_021fb774[8]; // OSMessageQueue
extern void SND_SetChannelVolume(u32, u32, u32);
extern u32 data_021fb794[8]; // OSMessage[8]
extern u32 data_021fb8a8[0x30]; // OSThread
extern void NNSi_SndFaderUpdate(void *);
extern u32 NNSi_SndFaderIsFinished(void *);
extern s32 NNSi_SndFaderGet(void *);
extern void NNSi_SndCaptureStop(void);
extern void func_0210aadc(void *);
extern void OS_InitMessageQueue(void *, void *, s32);
extern void OS_CreateThread(void *, void *, void *, void *, u32, u32);
extern void OS_WakeupThreadDirect(void *);
extern void NNS_SndCaptureStopEffect(void);
extern BOOL NNSi_SndCaptureStart(s32 mode, u32 bufL, u32 bufR, u32 len, s32 fmt, u32 a5, u32 a6, s32 loop, s32 rate, s32 vol, u32 pan1, u32 pan2, s32 nBlocks, CapCb cb, s32 cbArg);
extern Arc *data_021fbd68;
extern BOOL FS_SeekFile(void *, u32, u32);
extern s32 FS_ReadFile(void *, void *, u32);
extern u8 *NNSi_SndSeqArcGetSeqInfo(void *, u32);
extern void *NNS_SndHeapAlloc(SndHeap *, u32, void (*)(void *, u32, void *, u32), void *, u32);
extern void MIi_CpuCopy32(void *, void *, u32);
extern BOOL FS_ConvertPathToFileID();
extern void FS_InitFile(void *);
extern BOOL FS_OpenFileFast(void *, FSFileID);
extern void *NNS_FndAllocFromFrmHeapEx(void *, u32, u32);
extern void NNS_FndAppendListObject(NNSFndList *, void *);
extern void InitHeapSection(NNSFndList *);
extern BOOL func_0210b9e4(Arc *, void *, BOOL);
extern void *NNS_SndArcGetSeqArcInfo(s32);
extern u32 NNS_SndArcGetFileAddress(u32);
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
extern void *NNS_FndCreateFrmHeapEx(u32, u32, u16);
extern void NNS_SndHeapClear(SndHeap *);
extern void EraseSync(void);
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
BOOL NNS_SndCaptureStartEffect(void *buf, u32 size, s32 fmt, s32 rate, s32 nBlocks, CapCb cb, s32 cbArg)
{
    volatile u32 zero;
    NNS_SndCaptureStopEffect();
    if (data_021fb7b4.active != 0) {
        return 0;
    }
    zero = 0;
    MIi_CpuClear32(zero, buf, size);
    DC_FlushRange(buf, size);
    return NNSi_SndCaptureStart(1, (u32)buf, (u32)buf + (size >> 1), size >> 1, fmt, 0, 0, 1, rate, 127, 0, 127,
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
void func_0210b280(u32 prio)
{
    if (data_027e038c != 0) {
        return;
    }
    data_027e0390 = 0;
    OS_InitMessageQueue(data_021fb774, data_021fb794, 8);
    OS_CreateThread(data_021fb8a8, (void *)func_0210aadc, 0, sCaptureThreadStack + 128, 1024, prio);
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
u32 data_021fb774[8]; // OSMessageQueue
u32 data_021fb794[8]; // OSMessage[8]
Cap data_021fb7b4;
u32 data_021fb808[40]; // CapMsg[8] (used by unk_0210a9c4.c)
u32 data_021fb8a8[0x30]; // OSThread
static u64 sCaptureThreadStack[128];
