// NNS sound library (NitroSystem snd): sound archive access (NNSSndArc: SDAT header, FAT, INFO/SYMB blocks,
// load from file via FS), the sound heap (NNSSndHeap, a frame heap with save/load-state levels and free
// callbacks) and the capture/reverb start (NNS_SndCaptureStartReverb). autoload_2 0x0210b1b0-0x0210c084.
// ARM, mwcc 1.2/base, -O4,p.
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
typedef struct FSFileID { u32 arc; u32 id; } FSFileID;
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
    u8 file[0x48];          // 0x34 FSFile
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
extern void func_02115e64(u32, void *, u32);
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
extern s32 func_0210f00c(void *);
extern void func_0210ad4c(void);
extern void func_0210aadc(void *);
extern void OS_InitMessageQueue(void *, void *, s32);
extern void func_02113a70(void *, void *, void *, void *, u32, u32);
extern void OS_WakeupThreadDirect(void *);
extern void func_0210b31c(void);
extern BOOL func_0210ae48(s32 mode, u32 bufL, u32 bufR, u32 len, s32 fmt, u32 a5, u32 a6, s32 loop, s32 rate, s32 vol, u32 pan1, u32 pan2, s32 nBlocks, CapCb cb, s32 cbArg);
extern Arc *data_021fbd68;
extern BOOL FS_SeekFile(void *, u32, u32);
extern s32 func_021198b4(void *, void *, u32);
extern u8 *NNSi_SndSeqArcGetSeqInfo(void *, u32);
extern void *func_0210be9c(SndHeap *, u32, void (*)(void *, u32, void *, u32), void *, u32);
extern void MIi_CpuCopy32(void *, void *, u32);
extern BOOL FS_ConvertPathToFileID();
extern void FS_InitFile(void *);
extern BOOL FS_OpenFileFast(void *, FSFileID);
extern void *func_02101088(void *, u32, u32);
extern void NNS_FndAppendListObject(NNSFndList *, void *);
extern void func_0210bd3c(NNSFndList *);
extern BOOL func_0210b9e4(Arc *, void *, BOOL);
extern void *NNS_SndArcGetSeqArcInfo(s32);
extern u32 NNS_SndArcGetFileAddress(u32);
extern void func_0210b424(void *, u32, void *, u32);
extern void func_0210b430(void *, u32, void *, u32);
extern void func_0210b43c(void *, u32, void *, u32);
extern void *NNS_FndGetPrevListObject(NNSFndList *, void *);
extern void NNS_FndRemoveListObject(NNSFndList *, void *);
extern void NNS_FndAppendListObject(NNSFndList *, void *);
extern BOOL NNS_FndFreeByStateToFrmHeap(void *, u32);
extern BOOL func_02100fb0(void *, u32);
extern void func_02101048(void *, u32);
extern void func_021010d0(void *);
extern void *func_021010dc(u32, u32, u16);
extern void func_0210bf0c(SndHeap *);
extern void func_0210bc88(void);
extern BOOL func_0210bcac(SndHeap *);
extern BOOL func_0210bcfc(SndHeap *, void *);

// NNS_SndHeapCreate
SndHeap *func_0210bfe8(u32 start, u32 size)
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
    heap = func_021010dc((u32)h + 16, avail - 16, 0);
    if (heap == 0) {
        return 0;
    }
    if (func_0210bcfc(h, heap) != 0) {
        return h;
    }
    func_021010d0(heap);
    return 0;
}

// NNS_SndHeapDestroy
void func_0210bfcc(SndHeap *h)
{
    func_0210bf0c(h);
    func_021010d0(h->heap);
}

// NNS_SndHeapClear
void func_0210bf0c(SndHeap *h)
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
    func_02101048(h->heap, 3);
    if (called) {
        func_0210bc88();
    }
    func_0210bcac(h);
}

// NNS_SndHeapAlloc
void *func_0210be9c(SndHeap *h, u32 size, void (*cb)(void *, u32, void *, u32), void *a, u32 b)
{
    SndHeapBlk *blk = func_02101088(h->heap, ((size + 31) & ~31) + 32, 32);
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
s32 func_0210be44(SndHeap *h)
{
    if (func_02100fb0(h->heap, h->list.num) == 0) {
        return -1;
    }
    if (func_0210bcac(h) != 0) {
        return h->list.num - 1;
    }
    NNS_FndFreeByStateToFrmHeap(h->heap, 0);
    return -1;
}

// NNS_SndHeapLoadState
void func_0210bd58(SndHeap *h, s32 level)
{
    NNSFndList *lv;
    SndHeapBlk *b = 0;
    BOOL called = 0;
    if (level == 0) {
        func_0210bf0c(h);
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
        func_0210bc88();
    }
    func_02100fb0(h->heap, h->list.num);
    func_0210bcac(h);
}

// NNS_SndHeapGetCurrentLevel
s32 func_0210bd4c(SndHeap *h)
{
    return h->list.num - 1;
}

void func_0210bd3c(NNSFndList *l)
{
    NNS_FndInitList(l, 0);
}

// NNS_SndHeapCreate
BOOL func_0210bcfc(SndHeap *h, void *heap)
{
    NNS_FndInitList(&h->list, 12);
    h->heap = heap;
    return func_0210bcac(h) != 0;
}

// NNS_SndHeapCreateLevel (push a state)
BOOL func_0210bcac(SndHeap *h)
{
    NNSFndList *lv = func_02101088(h->heap, 20, 4);
    if (lv == 0) {
        return 0;
    }
    func_0210bd3c(lv);
    NNS_FndAppendListObject(&h->list, lv);
    return 1;
}

// flush the SND command queue and wait
void func_0210bc88(void)
{
    u32 tag = SND_GetCurrentCommandTag();
    SND_FlushCommand(1);
    SND_WaitForCommandProc(tag);
}

// NNS_SndArcInitWithFile
void func_0210bc00(Arc *arc, void *path, void *heap, BOOL loadSymb)
{
    arc->info = 0;
    arc->fat = 0;
    arc->symb = 0;
    if (FS_ConvertPathToFileID(&arc->id, path) == 0) {
        return;
    }
    FS_InitFile(&arc->file[0]);
    if (FS_OpenFileFast(&arc->file[0], arc->id) == 0) {
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
    if (FS_SeekFile(&arc->file[0], 0, 0) == 0) {
        return 0;
    }
    if (func_021198b4(&arc->file[0], arc, 0x30) != 0x30) {
        return 0;
    }
    if (heap != 0 && 1) {
        arc->info = func_0210be9c(heap, arc->infoSize, func_0210b43c, arc, 0);
        if (arc->info == 0) {
            return 0;
        }
        if (FS_SeekFile(&arc->file[0], arc->infoOff, 0) == 0) {
            return 0;
        }
        n = func_021198b4(&arc->file[0], arc->info, arc->infoSize);
        if (n != arc->infoSize) {
            return 0;
        }
        arc->fat = func_0210be9c(heap, arc->fatSize, func_0210b430, arc, 0);
        if (arc->fat == 0) {
            return 0;
        }
        if (FS_SeekFile(&arc->file[0], arc->fatOff, 0) == 0) {
            return 0;
        }
        n = func_021198b4(&arc->file[0], arc->fat, arc->fatSize);
        if (n != arc->fatSize) {
            return 0;
        }
        if (loadSymb != 0 && arc->symbSize != 0) {
            arc->symb = func_0210be9c(heap, arc->symbSize, func_0210b424, arc, 0);
            if (arc->symb == 0) {
                return 0;
            }
            if (FS_SeekFile(&arc->file[0], arc->symbOff, 0) == 0) {
                return 0;
            }
            n = func_021198b4(&arc->file[0], arc->symb, arc->symbSize);
        if (n != arc->symbSize) {
                return 0;
            }
        }
    }
    return 1;
}

// NNS_SndArcInitOnMemory
void func_0210b918(Arc *arc, u8 *base)
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
Arc *func_0210b8f0(void)
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
void *func_0210b6ac(s32 idx)
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
void *func_0210b648(s32 idx)
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
s32 func_0210b4ac(u32 idx, void *buf, u32 len, u32 offset)
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
    if (FS_SeekFile(&arc->file[0], e->off + offset, 0) == 0) {
        return -1;
    }
    return func_021198b4(&arc->file[0], buf, len);
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

void func_0210b43c(void *mem, u32 size, void *arg0, u32 arg1)
{
    ((Arc *)arg0)->info = 0;
}

void func_0210b430(void *mem, u32 size, void *arg0, u32 arg1)
{
    ((Arc *)arg0)->fat = 0;
}

void func_0210b424(void *mem, u32 size, void *arg0, u32 arg1)
{
    ((Arc *)arg0)->symb = 0;
}

// NNS_SndCaptureStartReverb
BOOL func_0210b364(void *buf, u32 size, s32 fmt, s32 rate, s32 nBlocks, CapCb cb, s32 cbArg)
{
    volatile u32 zero;
    func_0210b31c();
    if (data_021fb7b4.active != 0) {
        return 0;
    }
    zero = 0;
    func_02115e64(zero, buf, size);
    DC_FlushRange(buf, size);
    return func_0210ae48(1, (u32)buf, (u32)buf + (size >> 1), size >> 1, fmt, 0, 0, 1, rate, 127, 0, 127,
                         nBlocks, cb, cbArg);
}

// NNS_SndCaptureStopReverb-like: stop if the running capture is mode 1
void func_0210b31c(void)
{
    if (data_021fb7b4.active == 0) {
        return;
    }
    if (data_021fb7b4.mode != 1) {
        return;
    }
    func_0210ad4c();
}

// NNS_SndCaptureInit(threadPrio)
void func_0210b280(u32 prio)
{
    if (data_027e038c != 0) {
        return;
    }
    data_027e0390 = 0;
    OS_InitMessageQueue(&data_021fb774, &data_021fb794, 8);
    func_02113a70(&data_021fb8a8, (void *)func_0210aadc, 0, &data_021fbd68, 1024, prio);
    data_027e038c = 1;
    OS_WakeupThreadDirect(&data_021fb8a8);
}

// NNS_SndCaptureInit state reset
void func_0210b260(void)
{
    data_027e038c = 0;
    data_021fb7b4.active = 0;
}

// NNS_SndCaptureUpdate (fade the effect volume)
void func_0210b1b0(void)
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
        func_0210ad4c();
        return;
    }
    vol = func_0210f00c(f) >> 8;
    if (vol == c->vol) {
        return;
    }
    SND_SetChannelVolume(c->startCh, vol, 0);
    c->vol = vol;
}
