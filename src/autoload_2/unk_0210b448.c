#include "nitro/fs.h"
// NNS sound library (NitroSystem snd): sound archive access (NNSSndArc: SDAT header, FAT, INFO/SYMB blocks,
// load from file via FS) and the sound heap (NNSSndHeap, a frame heap with save/load-state levels and free
// callbacks), autoload_2 0x0210b448-0x0210c084, with the current archive pointer (autoload_3 .bss 0x021fbd68). The end
// of capture.c before it is unk_0210b1b0.c. ARM, mwcc 1.2/base, -O4,p.
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
extern u32 data_021fb774;
extern void SND_SetChannelVolume(u32, u32, u32);
extern u32 data_021fb794;
extern u32 data_021fb8a8;
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
extern BOOL InitHeap(SndHeap *, void *);// NNS_SndHeapCreate
SndHeap *NNS_SndHeapCreate(u32 start, u32 size)
{
    u32 end = start + size;
    SndHeap *h = (SndHeap *)((start + 3) & ~3);
    void *heap;
    u32 avail;
    if ((u32)h > end) {
        return 0;
    }
    avail = end - (u32)h;
    if (avail < 16) {
        return 0;
    }
    heap = NNS_FndCreateFrmHeapEx((u32)h + 16, avail - 16, 0);
    if (heap == 0) {
        return 0;
    }
    if (InitHeap(h, heap) != 0) {
        return h;
    }
    NNS_FndDestroyFrmHeap(heap);
    return 0;
}

// NNS_SndHeapDestroy
void NNS_SndHeapDestroy(SndHeap *h)
{
    NNS_SndHeapClear(h);
    NNS_FndDestroyFrmHeap(h->heap);
}

// NNS_SndHeapClear
void NNS_SndHeapClear(SndHeap *h)
{
    NNSFndList *lv;
    SndHeapBlk *b;
    BOOL called = 0;
    lv = NNS_FndGetPrevListObject(&h->list, 0);
    if (lv != 0) {
        do {
            b = NNS_FndGetPrevListObject(lv, 0);
            while (b != 0) {
                if (b->cb != 0) {
                    b->cb((void *)((u8 *)b + 32), b->size, b->arg0, b->arg1);
                    called = 1;
                }
                b = NNS_FndGetPrevListObject(lv, b);
            }
            NNS_FndRemoveListObject(&h->list, lv);
            lv = NNS_FndGetPrevListObject(&h->list, 0);
        } while (lv != 0);
    }
    NNS_FndFreeToFrmHeap(h->heap, 3);
    if (called) {
        EraseSync();
    }
    NewSection(h);
}

// NNS_SndHeapAlloc
void *NNS_SndHeapAlloc(SndHeap *h, u32 size, void (*cb)(void *, u32, void *, u32), void *a, u32 b)
{
    SndHeapBlk *blk = NNS_FndAllocFromFrmHeapEx(h->heap, ((size + 31) & ~31) + 32, 32);
    NNSFndList *lv;
    if (blk == 0) {
        return 0;
    }
    lv = NNS_FndGetPrevListObject(&h->list, 0);
    blk->size = size;
    blk->cb = cb;
    blk->arg0 = a;
    blk->arg1 = b;
    NNS_FndAppendListObject(lv, blk);
    return (u8 *)blk + 32;
}

// NNS_SndHeapSaveState
s32 NNS_SndHeapSaveState(SndHeap *h)
{
    if (NNS_FndRecordStateForFrmHeap(h->heap, h->list.num) == 0) {
        return -1;
    }
    if (NewSection(h) != 0) {
        return h->list.num - 1;
    }
    NNS_FndFreeByStateToFrmHeap(h->heap, 0);
    return -1;
}

// NNS_SndHeapLoadState
void NNS_SndHeapLoadState(SndHeap *h, s32 level)
{
    NNSFndList *lv;
    SndHeapBlk *b = 0;
    BOOL called = 0;
    if (level == 0) {
        NNS_SndHeapClear(h);
        return;
    }
    if (level < h->list.num) {
        do {
            lv = NNS_FndGetPrevListObject(&h->list, 0);
            b = NNS_FndGetPrevListObject(lv, b);
            while (b != 0) {
                if (b->cb != 0) {
                    b->cb((void *)((u8 *)b + 32), b->size, b->arg0, b->arg1);
                    called = 1;
                }
                b = NNS_FndGetPrevListObject(lv, b);
            }
            NNS_FndRemoveListObject(&h->list, lv);
        } while (level < h->list.num);
    }
    NNS_FndFreeByStateToFrmHeap(h->heap, level);
    if (called) {
        EraseSync();
    }
    NNS_FndRecordStateForFrmHeap(h->heap, h->list.num);
    NewSection(h);
}

// NNS_SndHeapGetCurrentLevel
s32 func_0210bd4c(SndHeap *h)
{
    return h->list.num - 1;
}

void InitHeapSection(NNSFndList *l)
{
    NNS_FndInitList(l, 0);
}

// NNS_SndHeapCreate
BOOL InitHeap(SndHeap *h, void *heap)
{
    NNS_FndInitList(&h->list, 12);
    h->heap = heap;
    return NewSection(h) != 0;
}

// NNS_SndHeapCreateLevel (push a state)
BOOL NewSection(SndHeap *h)
{
    NNSFndList *lv = NNS_FndAllocFromFrmHeapEx(h->heap, 20, 4);
    if (lv == 0) {
        return 0;
    }
    InitHeapSection(lv);
    NNS_FndAppendListObject(&h->list, lv);
    return 1;
}

// flush the SND command queue and wait
void EraseSync(void)
{
    u32 tag = SND_GetCurrentCommandTag();
    SND_FlushCommand(1);
    SND_WaitForCommandProc(tag);
}

// NNS_SndArcInitWithFile
void NNS_SndArcInit(Arc *arc, void *path, void *heap, BOOL loadSymb)
{
    arc->info = 0;
    arc->fat = 0;
    arc->symb = 0;
    if (FS_ConvertPathToFileID(&arc->id, path) == 0) {
        return;
    }
    FS_InitFile(&arc->file);
    if (FS_OpenFileFast(&arc->file, arc->id) == 0) {
        return;
    }
    arc->fromFile = 1;
    if (func_0210b9e4(arc, heap, loadSymb)) {
        data_021fbd68 = arc;
    }
}

// NNS_SndArcLoadTables (from file)
BOOL func_0210b9e4(Arc *arc, void *heap, BOOL loadSymb)
{
    s32 n;
    if (FS_SeekFile(&arc->file, 0, 0) == 0) {
        return 0;
    }
    if (FS_ReadFile(&arc->file, arc, 0x30) != 0x30) {
        return 0;
    }
    if (heap != 0 && 1) {
        arc->info = NNS_SndHeapAlloc(heap, arc->infoSize, InfoDisposeCallback, arc, 0);
        if (arc->info == 0) {
            return 0;
        }
        if (FS_SeekFile(&arc->file, arc->infoOff, 0) == 0) {
            return 0;
        }
        n = FS_ReadFile(&arc->file, arc->info, arc->infoSize);
        if (n != arc->infoSize) {
            return 0;
        }
        arc->fat = NNS_SndHeapAlloc(heap, arc->fatSize, FatDisposeCallback, arc, 0);
        if (arc->fat == 0) {
            return 0;
        }
        if (FS_SeekFile(&arc->file, arc->fatOff, 0) == 0) {
            return 0;
        }
        n = FS_ReadFile(&arc->file, arc->fat, arc->fatSize);
        if (n != arc->fatSize) {
            return 0;
        }
        if (loadSymb != 0 && arc->symbSize != 0) {
            arc->symb = NNS_SndHeapAlloc(heap, arc->symbSize, SymbolDisposeCallback, arc, 0);
            if (arc->symb == 0) {
                return 0;
            }
            if (FS_SeekFile(&arc->file, arc->symbOff, 0) == 0) {
                return 0;
            }
            n = FS_ReadFile(&arc->file, arc->symb, arc->symbSize);
        if (n != arc->symbSize) {
                return 0;
            }
        }
    }
    return 1;
}

// NNS_SndArcInitOnMemory
void NNS_SndArcInitOnMemory(Arc *arc, u8 *base)
{
    u32 i;
    FatEnt *e;
    MIi_CpuCopy32(base, arc, 0x30);
    arc->info = (arc->infoOff == 0) ? 0 : base + arc->infoOff;
    arc->fat = (arc->fatOff == 0) ? 0 : (Fat *)(base + arc->fatOff);
    arc->symb = (arc->symbOff == 0) ? 0 : base + arc->symbOff;
    for (i = 0; i < arc->fat->count; i++) {
        e = &arc->fat->e[i];
        e->ptr = (e->off == 0) ? 0 : (u32)base + e->off;
    }
    arc->fromFile = 0;
    data_021fbd68 = arc;
}

// NNS_SndArcSetCurrent
Arc *NNS_SndArcSetCurrent(Arc *arc)
{
    Arc *old = data_021fbd68;
    data_021fbd68 = arc;
    return old;
}

// NNS_SndArcGetCurrent
Arc *NNS_SndArcGetCurrent(void)
{
    return data_021fbd68;
}

// NNS_SndArcGetSeqArcSeq
void *func_0210b8a0(u32 seqArc, u32 idx)
{
    u32 *info = (u32 *)NNS_SndArcGetSeqArcInfo(seqArc);
    u8 *data;
    if (info == 0) {
        return 0;
    }
    data = (u8 *)NNS_SndArcGetFileAddress(*info);
    if (data == 0) {
        return 0;
    }
    data = NNSi_SndSeqArcGetSeqInfo(data, idx);
    return (data == 0) ? 0 : data + 4;
}

// NNS_SndArc info record (0x8)
void *NNS_SndArcGetSeqInfo(s32 idx)
{
    Arc *arc = data_021fbd68;
    u8 *info = arc->info;
    u32 off = *(u32 *)(info + 0x8);
    InfoTbl *tbl;
    u32 e;
    u8 *base;
    if (off == 0) {
        tbl = 0;
    } else {
        tbl = (InfoTbl *)(info + off);
    }
    if (tbl == 0) {
        return 0;
    }
    if (idx < 0) {
        return 0;
    }
    if ((u32)idx >= tbl->count) {
        return 0;
    }
    e = tbl->ent[idx];
    base = arc->info;
    return (e == 0) ? 0 : base + e;
}

// NNS_SndArc info record (0xc)
void *NNS_SndArcGetSeqArcInfo(s32 idx)
{
    Arc *arc = data_021fbd68;
    u8 *info = arc->info;
    u32 off = *(u32 *)(info + 0xc);
    InfoTbl *tbl;
    u32 e;
    u8 *base;
    if (off == 0) {
        tbl = 0;
    } else {
        tbl = (InfoTbl *)(info + off);
    }
    if (tbl == 0) {
        return 0;
    }
    if (idx < 0) {
        return 0;
    }
    if ((u32)idx >= tbl->count) {
        return 0;
    }
    e = tbl->ent[idx];
    base = arc->info;
    return (e == 0) ? 0 : base + e;
}

// NNS_SndArc info record (0x10)
void *NNS_SndArcGetBankInfo(s32 idx)
{
    Arc *arc = data_021fbd68;
    u8 *info = arc->info;
    u32 off = *(u32 *)(info + 0x10);
    InfoTbl *tbl;
    u32 e;
    u8 *base;
    if (off == 0) {
        tbl = 0;
    } else {
        tbl = (InfoTbl *)(info + off);
    }
    if (tbl == 0) {
        return 0;
    }
    if (idx < 0) {
        return 0;
    }
    if ((u32)idx >= tbl->count) {
        return 0;
    }
    e = tbl->ent[idx];
    base = arc->info;
    return (e == 0) ? 0 : base + e;
}

// NNS_SndArc info record (0x14)
void *NNS_SndArcGetWaveArcInfo(s32 idx)
{
    Arc *arc = data_021fbd68;
    u8 *info = arc->info;
    u32 off = *(u32 *)(info + 0x14);
    InfoTbl *tbl;
    u32 e;
    u8 *base;
    if (off == 0) {
        tbl = 0;
    } else {
        tbl = (InfoTbl *)(info + off);
    }
    if (tbl == 0) {
        return 0;
    }
    if (idx < 0) {
        return 0;
    }
    if ((u32)idx >= tbl->count) {
        return 0;
    }
    e = tbl->ent[idx];
    base = arc->info;
    return (e == 0) ? 0 : base + e;
}

// NNS_SndArc info record (0x24)
void *NNS_SndArcGetStrmInfo(s32 idx)
{
    Arc *arc = data_021fbd68;
    u8 *info = arc->info;
    u32 off = *(u32 *)(info + 0x24);
    InfoTbl *tbl;
    u32 e;
    u8 *base;
    if (off == 0) {
        tbl = 0;
    } else {
        tbl = (InfoTbl *)(info + off);
    }
    if (tbl == 0) {
        return 0;
    }
    if (idx < 0) {
        return 0;
    }
    if ((u32)idx >= tbl->count) {
        return 0;
    }
    e = tbl->ent[idx];
    base = arc->info;
    return (e == 0) ? 0 : base + e;
}

// NNS_SndArc info record (0x18)
void *NNS_SndArcGetPlayerInfo(s32 idx)
{
    Arc *arc = data_021fbd68;
    u8 *info = arc->info;
    u32 off = *(u32 *)(info + 0x18);
    InfoTbl *tbl;
    u32 e;
    u8 *base;
    if (off == 0) {
        tbl = 0;
    } else {
        tbl = (InfoTbl *)(info + off);
    }
    if (tbl == 0) {
        return 0;
    }
    if (idx < 0) {
        return 0;
    }
    if ((u32)idx >= tbl->count) {
        return 0;
    }
    e = tbl->ent[idx];
    base = arc->info;
    return (e == 0) ? 0 : base + e;
}

// NNS_SndArc info record (0x20)
void *func_0210b5e4(s32 idx)
{
    Arc *arc = data_021fbd68;
    u8 *info = arc->info;
    u32 off = *(u32 *)(info + 0x20);
    InfoTbl *tbl;
    u32 e;
    u8 *base;
    if (off == 0) {
        tbl = 0;
    } else {
        tbl = (InfoTbl *)(info + off);
    }
    if (tbl == 0) {
        return 0;
    }
    if (idx < 0) {
        return 0;
    }
    if ((u32)idx >= tbl->count) {
        return 0;
    }
    e = tbl->ent[idx];
    base = arc->info;
    return (e == 0) ? 0 : base + e;
}

// NNS_SndArc info table 0x1c
void *NNS_SndArcGetGroupInfo(s32 idx)
{
    Arc *arc = data_021fbd68;
    u8 *info = arc->info;
    u32 off = *(u32 *)(info + 0x1c);
    InfoTbl *tbl;
    u32 e;
    u8 *base;
    if (off == 0) {
        tbl = 0;
    } else {
        tbl = (InfoTbl *)(info + off);
    }
    if (tbl == 0) {
        return 0;
    }
    if (idx < 0) {
        return 0;
    }
    if ((u32)idx >= tbl->count) {
        return 0;
    }
    e = tbl->ent[idx];
    base = arc->info;
    return (e == 0) ? 0 : base + e;
}

// NNS_SndArcGetFileOffset
u32 func_0210b558(u32 idx)
{
    Fat *fat = data_021fbd68->fat;
    if (idx >= fat->count) {
        return 0;
    }
    return fat->e[idx].off;
}

// NNS_SndArcGetFileSize
u32 NNS_SndArcGetFileSize(u32 idx)
{
    Fat *fat = data_021fbd68->fat;
    if (idx >= fat->count) {
        return 0;
    }
    return fat->e[idx].size;
}

// NNS_SndArcReadFile(fileId, buf, len, offset)
s32 NNS_SndArcReadFile(u32 idx, void *buf, u32 len, u32 offset)
{
    Arc *arc = data_021fbd68;
    Fat *fat = arc->fat;
    FatEnt *e;
    u32 rem;
    if (idx >= fat->count) {
        return -1;
    }
    e = &fat->e[idx];
    rem = e->size - offset;
    if (len > rem) {
        len = rem;
    }
    if (FS_SeekFile(&arc->file, e->off + offset, 0) == 0) {
        return -1;
    }
    return FS_ReadFile(&arc->file, buf, len);
}

// NNS_SndArcGetFileID
void func_0210b48c(FSFileID *out)
{
    *out = data_021fbd68->id;
}

// NNS_SndArcGetFilePtr
u32 NNS_SndArcGetFileAddress(u32 idx)
{
    Fat *fat = data_021fbd68->fat;
    if (idx >= fat->count) {
        return 0;
    }
    return fat->e[idx].ptr;
}

// NNS_SndArcSetFilePtr
void NNS_SndArcSetFileAddress(u32 idx, u32 v)
{
    data_021fbd68->fat->e[idx].ptr = v;
}

// ---- file-scope objects (autoload_3 .bss 0x021fbd68-0x021fbd6c)
Arc *data_021fbd68; // the current sound archive
