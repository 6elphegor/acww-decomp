// mwcc-flags: -nothumb -O4,p
// NitroSystem (NNS) code, frmheap.c, archive helpers: autoload_2 0x02101048-0x02101508. ARM code, mwcc 1.2/base, -O4,p.
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef int s32;
typedef int BOOL;

typedef struct NNSFndLink { void *prev; void *next; } NNSFndLink;
typedef struct NNSFndList { void *head; void *tail; u16 num; u16 offset; } NNSFndList;
typedef struct Region { u32 start; u32 end; } Region;

typedef struct MBlock {
    u16 sig;
    union {
        u16 raw;
        struct { u16 groupID : 8; u16 alignment : 7; u16 allocDir : 1; } f;
    } attr;
    u32 size;
    struct MBlock *prev;
    struct MBlock *next;
} MBlock;

typedef struct FrmState { u32 tag; u32 head; u32 tail; struct FrmState *prev; } FrmState;

typedef struct FrmHead {
    u32 head;               // 0x24
    u32 tail;               // 0x28
    FrmState *state;        // 0x2c
} FrmHead;

typedef struct HeapHead {
    u32 sig;                // 0x00
    NNSFndLink link;        // 0x04
    NNSFndList childList;   // 0x0c
    u32 start;              // 0x18
    u32 end;                // 0x1c
    union {                 // 0x20
        u32 raw;
        struct { u32 optFlag : 8; u32 pad : 24; } f;
    } attr;
    union {                 // 0x24
        struct {            // expheap
            MBlock *freeHead, *freeTail;   // 0x24
            MBlock *usedHead, *usedTail;   // 0x2c
            u16 groupID;                   // 0x34
            union { u16 raw; struct { u16 allocMode : 1; u16 pad : 15; } f; } feature;  // 0x36
        } exp;
        FrmHead frm;        // frmheap
    } u;
} HeapHead;
// the expheap/frmheap "head" parts as seen by functions that receive heap + 0x24
typedef struct ExpHead {
    MBlock *freeHead, *freeTail;
    MBlock *usedHead, *usedTail;
    u16 groupID;
    union { u16 raw; struct { u16 allocMode : 1; u16 pad : 15; } f; } feature;
} ExpHead;

extern u32 abs(s32);          // abs
extern void MIi_CpuClear32(u32, void *, u32);   // MIi_CpuClear32(data, dest, size)
extern u32 data_021f5ca0;               // sRootListInitialized
extern NNSFndList data_021f5ca4;        // sRootList


#define HH(e) ((HeapHead *)((u8 *)(e) - 0x24))
#define EXP(h) ((ExpHead *)&(h)->u)

static inline u16 GetOptFlag(HeapHead *h) { return (u16)(h->attr.raw & 0xff); }
static inline u16 GetAllocMode(ExpHead *e) { return (u16)(e->feature.raw & 1); }
static inline void SetAllocDir(MBlock *b, u16 d) {
    b->attr.raw &= ~0x8000;
    b->attr.raw |= (d & 1) << 15;
}
static inline void SetAlignment(MBlock *b, u16 a) {
    b->attr.raw &= ~0x7f00;
    b->attr.raw |= (a & 0x7f) << 8;
}
static inline void SetGroupID(MBlock *b, u32 g) {
    b->attr.raw &= ~0xff;
    b->attr.raw |= (u8)g;
}
static inline void SetGroupIDFrom(MBlock *b, ExpHead *e) {
    b->attr.raw &= ~0xff;
    b->attr.raw |= e->groupID & 0xff;
}
static inline u32 GetMBlockEnd(MBlock *b) { return b->size + ((u32)b + 16); }
static inline u32 RoundUp(u32 v, u32 a) { return (v + (a - 1)) & ~(a - 1); }
static inline void ClearMem(HeapHead *h, u32 dst, u32 size) {
    if (GetOptFlag(h) & 1) {
        volatile u32 zero = 0;
        MIi_CpuClear32(zero, (void *)dst, size);
    }
}

void NNSi_FndFinalizeHeap(HeapHead *heap);
NNSFndList *FindListContainHeap(HeapHead *heap);
HeapHead *FindContainHeap(NNSFndList *list, HeapHead *mem);
void NNS_FndInitList(NNSFndList *list, u16 offset);
void NNS_FndRemoveListObject(NNSFndList *list, void *obj);
void NNS_FndAppendListObject(NNSFndList *list, void *obj);
void *NNS_FndGetNextListObject(NNSFndList *list, void *obj);
MBlock *InitMBlock(Region *r, u16 sig);
MBlock *InsertMBlock(void *list, MBlock *blk, MBlock *prev);
MBlock *RemoveMBlock(void *list, MBlock *blk);
void GetRegionOfMBlock(Region *r, MBlock *blk);
BOOL RecycleRegion(ExpHead *e, Region *r);
void *AllocUsedBlockFromFreeBlock(ExpHead *e, MBlock *free, u32 mblock, u32 size, u16 dir);
void *AllocFromHead(HeapHead *h, u32 size, s32 alignment);
void *AllocFromTail(HeapHead *h, u32 size, s32 alignment);
HeapHead *InitExpHeap(u32 start, u32 end, u16 opt);
void NNSi_FndInitHeapHead(HeapHead *heap, u32 sig, u32 start, u32 end, u16 opt);
void SetFirstObject(NNSFndList *list, void *obj);
void NNS_FndPrependListObject(NNSFndList *list, void *obj);
void *AllocFromHead__FrameHeap(FrmHead *f, u32 size, u32 alignment);
void *AllocFromTail__FrameHeap(FrmHead *f, u32 size, u32 alignment);
void FreeHead(HeapHead *h);
void FreeTail(HeapHead *h);
void FreeHead(HeapHead *h);
void FreeTail(HeapHead *h);
HeapHead *InitFrameHeap(u32 start, u32 end, u16 opt);


#define FRM(h) (&(h)->u.frm)

extern void FS_InitFile(void *file);                   // FS_InitFile
extern BOOL FS_OpenFile(void *file, const char *path); // FS_OpenFile
extern void FS_CloseFile(void *file);                   // FS_CloseFile
extern BOOL FS_UnloadArchive(void *arc);
extern void FS_ReleaseArchiveName(void *arc);                    // FS_ReleaseArchiveName
extern void FS_InitArchive(void *arc);                    // FS_InitArchive
extern u32 func_0212a438(const char *s);                 // strlen
extern BOOL FS_RegisterArchiveName(void *arc, const char *name, u32 len);   // FS_RegisterArchiveName
extern BOOL FS_LoadArchive(void *arc, u32 base, u32 fat, u32 fatSize, u32 fnt, u32 fntSize, u32 rd, u32 wr);   // FS_LoadArchive

BOOL func_0210149c(u32 *narc);

typedef struct GfdMan {
    u32 start;      // 0x00
    u32 end;        // 0x04
    u32 enabled;    // 0x08
    u32 flag;       // 0x0c
    u16 kind;       // 0x10
    u16 pad;
    u32 base;       // 0x14
} GfdMan;

extern GfdMan data_0213bc3c[];
extern GfdMan data_0213bc54;
extern GfdMan data_0213bc6c;
extern GfdMan *data_0213bc20[];     // 2 entries: 4x4 compressed textures
extern GfdMan *data_0213bc28[];     // 5 entries: normal textures
extern u16 data_021f5cb0;
extern s32 (*data_0213bc10)();
extern s32 (*data_0213bc14)();

void NNS_GfdResetFrmTexVramState(void);
void NNSi_GfdSetTexNrmSearchArray(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4);
u32 NNS_GfdAllocFrmTexVram(u32 szByte, BOOL is4x4, BOOL opt);
s32 NNS_GfdFreeFrmTexVram();

// prototypes
void *NNS_FndGetPrevListObject(NNSFndList *list, void *obj);
void *NNS_FndGetNextListObject(NNSFndList *list, void *obj);
void NNS_FndRemoveListObject(NNSFndList *list, void *obj);
void NNS_FndInsertListObject(NNSFndList *list, void *target, void *obj);
void NNS_FndPrependListObject(NNSFndList *list, void *obj);
void NNS_FndAppendListObject(NNSFndList *list, void *obj);
void SetFirstObject(NNSFndList *list, void *obj);
void NNS_FndInitList(NNSFndList *list, u16 offset);
void NNSi_FndFinalizeHeap(HeapHead *heap);
void NNSi_FndInitHeapHead(HeapHead *heap, u32 sig, u32 start, u32 end, u16 opt);
NNSFndList *FindListContainHeap(HeapHead *heap);
HeapHead *FindContainHeap(NNSFndList *list, HeapHead *mem);
u32 NNS_FndGetSizeForMBlockExpHeap(u32 memBlock);
void NNS_FndVisitAllocatedForExpHeap(HeapHead *heap, void (*visitor)(void *, HeapHead *, u32), u32 param);
u16 NNS_FndGetGroupIDForExpHeap(HeapHead *heap);
u16 NNS_FndSetGroupIDForExpHeap(HeapHead *heap, u16 id);
u32 NNS_FndGetAllocatableSizeForExpHeapEx(HeapHead *heap, s32 alignment);
u32 NNS_FndGetTotalFreeSizeForExpHeap(HeapHead *heap);
void NNS_FndFreeToExpHeap(HeapHead *heap, u32 mem);
u32 NNS_FndResizeForMBlockExpHeap(HeapHead *heap, u32 memBlock, u32 size);
void *NNS_FndAllocFromExpHeapEx(HeapHead *heap, u32 size, s32 alignment);
void NNS_FndDestroyExpHeap(HeapHead *heap);
HeapHead *NNS_FndCreateExpHeapEx(u32 start, u32 size, u16 opt);
BOOL RecycleRegion(ExpHead *e, Region *rgn);
void *AllocFromTail(HeapHead *heap, u32 size, s32 alignment);
void *AllocFromHead(HeapHead *heap, u32 size, s32 alignment);
void *AllocUsedBlockFromFreeBlock(ExpHead *e, MBlock *freeBlk, u32 mblock, u32 size, u16 dir);
HeapHead *InitExpHeap(u32 start, u32 end, u16 opt);
MBlock *InitMBlock(Region *rgn, u16 sig);
MBlock *InsertMBlock(void *listp, MBlock *blk, MBlock *prev);
MBlock *RemoveMBlock(void *listp, MBlock *blk);
void GetRegionOfMBlock(Region *rgn, MBlock *blk);
u32 NNS_FndResizeForMBlockFrmHeap(HeapHead *heap, u32 mem, u32 size);
u32 NNS_FndAdjustFrmHeap(HeapHead *heap);
BOOL NNS_FndFreeByStateToFrmHeap(HeapHead *heap, u32 tag);
BOOL NNS_FndRecordStateForFrmHeap(HeapHead *heap, u32 tag);
u32 NNS_FndGetAllocatableSizeForFrmHeapEx(HeapHead *heap, s32 alignment);
void NNS_FndFreeToFrmHeap(HeapHead *heap, u32 mode);
void *NNS_FndAllocFromFrmHeapEx(HeapHead *heap, u32 size, s32 alignment);
void NNS_FndDestroyFrmHeap(HeapHead *heap);
HeapHead *NNS_FndCreateFrmHeapEx(u32 start, u32 size, u16 opt);
void FreeTail(HeapHead *heap);
void FreeHead(HeapHead *heap);
void *AllocFromTail__FrameHeap(FrmHead *f, u32 size, u32 alignment);
void *AllocFromHead__FrameHeap(FrmHead *f, u32 size, u32 alignment);
HeapHead *InitFrameHeap(u32 start, u32 end, u16 opt);
u32 NNS_FndGetArchiveFileByName(const char *path);
BOOL NNS_FndUnmountArchive(void *arc);
BOOL NNS_FndMountArchive(u32 *arc, const char *name, u32 *narc);
BOOL func_0210149c(u32 *narc);
s32 FreeTexVram_();
s32 AllocTexVram_();
s32 FreePlttVram_();
s32 AllocPlttVram_();
s32 NNS_GfdFreeFrmTexVram();
u32 NNS_GfdAllocFrmTexVram(u32 szByte, BOOL is4x4, BOOL opt);
void NNS_GfdResetFrmTexVramState(void);
void NNS_GfdInitFrmTexVramManager(u32 mode, BOOL setFuncs);
void NNSi_GfdSetTexNrmSearchArray(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4);

s32 NNS_GfdFreeFrmTexVram() { return 0; }

s32 AllocPlttVram_() { return 0; }

s32 FreePlttVram_() { return -1; }

s32 AllocTexVram_() { return 0; }

// NNS_Gfd dummy functions
s32 FreeTexVram_() { return -1; }

// NNS: check NARC header ("NARC", byte order 0xfffe, version 0x0100)
BOOL func_0210149c(u32 *narc) {
    if (narc[0] != 0x4352414e) return 0;
    if (*(u16 *)(narc + 1) != 0xfffe) return 0;
    return *(u16 *)((u8 *)narc + 6) == 0x100;
}

// NNS_FndMountArchive
BOOL NNS_FndMountArchive(u32 *arc, const char *name, u32 *narc) {
    u8 *fat;
    u8 *fnt;
    u8 *img;
    int i;
    u32 *chunk;
    u32 base;
    int count;
    img = fnt = fat = 0;
    if (func_0210149c(narc) == 0) return (BOOL)(u32)fat;
    chunk = (u32 *)((u8 *)narc + *(u16 *)((u8 *)narc + 12));
    count = *(u16 *)((u8 *)narc + 14);
    for (i = 0; i < count; i++) {
        switch (chunk[0]) {
        case 0x464e5442: fnt = (u8 *)chunk; break;
        case 0x46415442: fat = (u8 *)chunk; break;
        case 0x46494d47: img = (u8 *)chunk; break;
        }
        chunk = (u32 *)((u8 *)chunk + chunk[1]);
    }
    FS_InitArchive(arc);
    arc[23] = (u32)narc;
    arc[24] = (u32)fat;
    base = (u32)img + 8;
    arc[25] = base;
    if (FS_RegisterArchiveName(arc, name, func_0212a438(name)) == 0) return 0;
    if (FS_LoadArchive(arc, base, (u32)fat + 12 - base, ((u32 *)fat)[1] - 12, (u32)fnt + 8 - base, ((u32 *)fnt)[1] - 8, 0, 0) != 0) return 1;
    FS_ReleaseArchiveName(arc);
    return 0;
}

// NNS_FndUnmountArchive
BOOL NNS_FndUnmountArchive(void *arc) {
    if (FS_UnloadArchive(arc) == 0) return 0;
    FS_ReleaseArchiveName(arc);
    return 1;
}

// ROM address of a file (arc base + file top)
u32 NNS_FndGetArchiveFileByName(const char *path) {
    u32 file[19];
    u32 result = 0;
    FS_InitFile(file);
    if (FS_OpenFile(file, path)) {
        result = ((u32 *)file[2])[25] + file[9];
        FS_CloseFile(file);
    }
    return result;
}

// frmheap: create (NNS_FndCreateFrmHeapEx tail)
HeapHead *InitFrameHeap(u32 start, u32 end, u16 opt) {
    HeapHead *heap = (HeapHead *)start;
    FrmHead *f = FRM(heap);
    NNSi_FndInitHeapHead(heap, 0x46524d48, (u32)(f + 1), end, opt);
    f->head = heap->start;
    f->tail = heap->end;
    f->state = 0;
    return heap;
}

// frmheap: AllocFromHead
void *AllocFromHead__FrameHeap(FrmHead *f, u32 size, u32 alignment) {
    u32 head = f->head;
    u32 start = (alignment - 1 + head) & ~(alignment - 1);
    u32 newHead = size + start;
    if (newHead > f->tail) return 0;
    {
        u32 len = newHead - head;
        ClearMem(HH(f), head, len);
    }
    f->head = newHead;
    return (void *)start;
}

// frmheap: AllocFromTail
void *AllocFromTail__FrameHeap(FrmHead *f, u32 size, u32 alignment) {
    u32 tail = f->tail;
    u32 newTail = (tail - size) & ~(alignment - 1);
    if (newTail < f->head) return 0;
    {
        u32 len = tail - newTail;
        ClearMem(HH(f), newTail, len);
    }
    f->tail = newTail;
    return (void *)newTail;
}

// frmheap: free head side
void FreeHead(HeapHead *heap) {
    FrmHead *f = FRM(heap);
    f->head = heap->start;
    f->state = 0;
}

// frmheap: free tail side
void FreeTail(HeapHead *heap) {
    FrmState *st;
    FrmHead *f = FRM(heap);
    st = f->state;
    for (; st != 0; st = st->prev) st->tail = heap->end;
    f->tail = heap->end;
}

// NNS_FndCreateFrmHeapEx
HeapHead *NNS_FndCreateFrmHeapEx(u32 start, u32 size, u16 opt) {
    u32 end = (size + start) & ~3;
    start = (start + 3) & ~3;
    if (start > end || end - start < 0x30) return 0;
    return InitFrameHeap(start, end, opt);
}

// NNS_FndDestroyFrmHeap
void NNS_FndDestroyFrmHeap(HeapHead *heap) {
    NNSi_FndFinalizeHeap(heap);
}

// NNS_FndAllocFromFrmHeapEx
void *NNS_FndAllocFromFrmHeapEx(HeapHead *heap, u32 size, s32 alignment) {
    FrmHead *f = FRM(heap);
    if (size == 0) size = 1;
    size = (size + 3) & ~3;
    if (alignment >= 0) return AllocFromHead__FrameHeap(f, size, alignment);
    return AllocFromTail__FrameHeap(f, size, -alignment);
}

// NNS_FndFreeToFrmHeap
void NNS_FndFreeToFrmHeap(HeapHead *heap, u32 mode) {
    if (mode & 1) FreeHead(heap);
    if (mode & 2) FreeTail(heap);
}

// ---- file-scope objects (.data 0x0213bc10-0x0213bc20): the default texture / palette VRAM manager functions
// (NNS_GfdDefaultFuncAllocTexVram, ...FreeTexVram, ...AllocPlttVram, ...FreePlttVram), set to the dummies above. This
// definition order gives the original order after mwcc's size sort.
s32 (*data_0213bc18)() = AllocPlttVram_;
s32 (*data_0213bc14)() = FreeTexVram_;
s32 (*data_0213bc10)() = AllocTexVram_;
s32 (*data_0213bc1c)() = FreePlttVram_;
