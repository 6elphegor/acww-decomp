// mwcc-flags: -nothumb -O4,p
// NitroSystem (NNS) code, expheap.c helpers, frmheap.c: autoload_2 0x02100d44-0x02101008. ARM code, mwcc 1.2/base, -O4,p.
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

extern u32 func_02127b40(s32);          // abs
extern void func_02115e64(u32, void *, u32);   // MIi_CpuClear32(data, dest, size)
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
        func_02115e64(zero, (void *)dst, size);
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
void *func_02100bb0(ExpHead *e, MBlock *free, u32 mblock, u32 size, u16 dir);
void *AllocFromHead(HeapHead *h, u32 size, s32 alignment);
void *AllocFromTail(HeapHead *h, u32 size, s32 alignment);
HeapHead *InitExpHeap(u32 start, u32 end, u16 opt);
void NNSi_FndInitHeapHead(HeapHead *heap, u32 sig, u32 start, u32 end, u16 opt);
void SetFirstObject(NNSFndList *list, void *obj);
void NNS_FndPrependListObject(NNSFndList *list, void *obj);
void *func_021011ec(FrmHead *f, u32 size, u32 alignment);
void *func_02101170(FrmHead *f, u32 size, u32 alignment);
void FreeHead(HeapHead *h);
void FreeTail(HeapHead *h);
void FreeHead(HeapHead *h);
void FreeTail(HeapHead *h);
HeapHead *func_0210126c(u32 start, u32 end, u16 opt);


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

void func_0210169c(void);
void func_021017c4(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4);
u32 func_02101508(u32 szByte, BOOL is4x4, BOOL opt);
s32 func_02101500();

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
u32 func_021005a4(u32 memBlock);
void func_021005ac(HeapHead *heap, void (*visitor)(void *, HeapHead *, u32), u32 param);
u16 func_02100600(HeapHead *heap);
u16 func_02100608(HeapHead *heap, u16 id);
u32 func_02100618(HeapHead *heap, s32 alignment);
u32 NNS_FndGetTotalFreeSizeForExpHeap(HeapHead *heap);
void func_021006c8(HeapHead *heap, u32 mem);
u32 func_02100708(HeapHead *heap, u32 memBlock, u32 size);
void *NNS_FndAllocFromExpHeapEx(HeapHead *heap, u32 size, s32 alignment);
void func_021008d4(HeapHead *heap);
HeapHead *NNS_FndCreateExpHeapEx(u32 start, u32 size, u16 opt);
BOOL RecycleRegion(ExpHead *e, Region *rgn);
void *AllocFromTail(HeapHead *heap, u32 size, s32 alignment);
void *AllocFromHead(HeapHead *heap, u32 size, s32 alignment);
void *func_02100bb0(ExpHead *e, MBlock *freeBlk, u32 mblock, u32 size, u16 dir);
HeapHead *InitExpHeap(u32 start, u32 end, u16 opt);
MBlock *InitMBlock(Region *rgn, u16 sig);
MBlock *InsertMBlock(void *listp, MBlock *blk, MBlock *prev);
MBlock *RemoveMBlock(void *listp, MBlock *blk);
void GetRegionOfMBlock(Region *rgn, MBlock *blk);
u32 func_02100e7c(HeapHead *heap, u32 mem, u32 size);
u32 func_02100f20(HeapHead *heap);
BOOL NNS_FndFreeByStateToFrmHeap(HeapHead *heap, u32 tag);
BOOL func_02100fb0(HeapHead *heap, u32 tag);
u32 func_02101008(HeapHead *heap, s32 alignment);
void func_02101048(HeapHead *heap, u32 mode);
void *func_02101088(HeapHead *heap, u32 size, s32 alignment);
void func_021010d0(HeapHead *heap);
HeapHead *func_021010dc(u32 start, u32 size, u16 opt);
void FreeTail(HeapHead *heap);
void FreeHead(HeapHead *heap);
void *func_02101170(FrmHead *f, u32 size, u32 alignment);
void *func_021011ec(FrmHead *f, u32 size, u32 alignment);
HeapHead *func_0210126c(u32 start, u32 end, u16 opt);
u32 func_021012bc(const char *path);
BOOL func_02101310(void *arc);
BOOL func_02101340(u32 *arc, const char *name, u32 *narc);
BOOL func_0210149c(u32 *narc);
s32 func_021014e0();
s32 func_021014e8();
s32 func_021014f0();
s32 func_021014f8();
s32 func_02101500();
u32 func_02101508(u32 szByte, BOOL is4x4, BOOL opt);
void func_0210169c(void);
void func_0210171c(u32 mode, BOOL setFuncs);
void func_021017c4(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4);

// NNS_FndRecordStateFrmHeap
BOOL func_02100fb0(HeapHead *heap, u32 tag) {
    u32 oldHead;
    FrmHead *f = FRM(heap);
    FrmState *st;
    oldHead = f->head;
    st = (FrmState *)func_021011ec(f, 16, 4);
    if (st == 0) return 0;
    st->tag = tag;
    st->head = oldHead;
    st->tail = f->tail;
    st->prev = f->state;
    f->state = st;
    return 1;
}

// NNS_FndFreeByStateFrmHeap
BOOL NNS_FndFreeByStateToFrmHeap(HeapHead *heap, u32 tag) {
    FrmState *st;
    FrmHead *f = FRM(heap);
    st = f->state;
    if (tag != 0) {
        for (; st != 0; st = st->prev) {
            if (st->tag == tag) break;
        }
    }
    if (st == 0) return 0;
    f->head = st->head;
    f->tail = st->tail;
    f->state = st->prev;
    return 1;
}

// NNS_FndAdjustFrmHeap
u32 func_02100f20(HeapHead *heap) {
    FrmHead *f = FRM(heap);
    if (heap->end - f->tail != 0) return 0;
    heap->end = f->head;
    f->tail = heap->end;
    return heap->end - (u32)heap;
}

// NNS_FndResizeForMBlockFrmHeap (guess)
u32 func_02100e7c(HeapHead *heap, u32 mem, u32 size) {
    FrmHead *f = FRM(heap);
    u32 oldHead;
    u32 newHead;
    u32 oldSize;
    if (size == 0) size = 1;
    size = (size + 3) & ~3;
    oldHead = f->head;
    newHead = size + mem;
    oldSize = oldHead - mem;
    if (size == oldSize) return size;
    if (size > oldSize) {
        if ((s32)(newHead - f->tail) > 0) return 0;
        ClearMem(heap, oldHead, size - oldSize);
    }
    f->head = newHead;
    return size;
}

// GetRegionOfMBlock
void GetRegionOfMBlock(Region *rgn, MBlock *blk) {
    rgn->start = (u32)blk - (u16)((blk->attr.raw >> 8) & 0x7f);
    rgn->end = blk->size + ((u32)blk + 16);
}

// RemoveMBlock
MBlock *RemoveMBlock(void *listp, MBlock *blk) {
    MBlock **list = (MBlock **)listp;
    MBlock *prev = blk->prev;
    MBlock *next = blk->next;
    if (prev != 0) prev->next = next;
    else list[0] = next;
    if (next != 0) next->prev = prev;
    else list[1] = prev;
    return prev;
}

// InsertMBlock
MBlock *InsertMBlock(void *listp, MBlock *blk, MBlock *prev) {
    MBlock **list = (MBlock **)listp;
    MBlock *next;
    blk->prev = prev;
    if (prev != 0) {
        next = prev->next;
        prev->next = blk;
    } else {
        next = list[0];
        list[0] = blk;
    }
    blk->next = next;
    if (next != 0) next->prev = blk;
    else list[1] = blk;
    return blk;
}

// InitFreeMBlock
MBlock *InitMBlock(Region *rgn, u16 sig) {
    MBlock *b = (MBlock *)rgn->start;
    b->sig = sig;
    b->attr.raw = 0;
    b->size = rgn->end - ((u32)b + 16);
    b->prev = 0;
    b->next = 0;
    return b;
}

// expheap: create (NNS_FndCreateExpHeapEx tail)
HeapHead *InitExpHeap(u32 start, u32 end, u16 opt) {
    HeapHead *heap = (HeapHead *)start;
    ExpHead *e = EXP(heap);
    Region rgn;
    MBlock *b;
    NNSi_FndInitHeapHead(heap, 0x45585048, (u32)(e + 1), end, opt);
    e->groupID = 0;
    e->feature.raw = 0;
    e->feature.f.allocMode = 0;
    rgn.start = heap->start;
    rgn.end = heap->end;
    b = InitMBlock(&rgn, 0x4652);
    e->freeHead = b;
    e->freeTail = b;
    e->usedHead = 0;
    e->usedTail = 0;
    return heap;
}
