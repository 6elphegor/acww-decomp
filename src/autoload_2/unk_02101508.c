// mwcc-flags: -nothumb -O4,p
// NitroSystem (NNS) foundation library: list.c, heap.c, expheap.c, frmheap.c, an archive helper and the
// graphics-foundation VRAM manager (gfd). UNMATCHED functions of N001 (best C; see the .diff files). ARM code, mwcc 1.2/base, -O4,p.
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
void *AllocFromHead__ExpHeap(HeapHead *h, u32 size, s32 alignment);
void *AllocFromTail__ExpHeap(HeapHead *h, u32 size, s32 alignment);
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
extern u32 strlen(const char *s);                 // strlen
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
void *AllocFromTail__ExpHeap(HeapHead *heap, u32 size, s32 alignment);
void *AllocFromHead__ExpHeap(HeapHead *heap, u32 size, s32 alignment);
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
void NNS_GfdResetFrmTexVramState(void);
void NNS_GfdInitFrmTexVramManager(u32 mode, BOOL setFuncs);
void NNSi_GfdSetTexNrmSearchArray(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4);

static inline u32 Capacity(const GfdMan *m) { return m->end - m->start; }
static inline GfdMan *GetIdxRegion(const GfdMan *m) {
    switch (m->kind) {
    case 0: return &data_0213bc54;
    case 3: return &data_0213bc6c;
    default: return 0;
    }
}
static inline u32 AllocHead(GfdMan *m, u32 sz) {
    u32 a = m->start;
    m->start += sz;
    return a;
}
static inline u32 AllocTail(GfdMan *m, u32 sz) {
    m->end -= sz;
    return m->end;
}
static inline BOOL Alloc4x4(u32 sz, u32 *addr) {
    s32 i;
    for (i = 0; i < 2; i++) {
        GfdMan *m = data_0213bc20[i];
        if (m->enabled && Capacity(m) >= sz) {
            GfdMan *o = GetIdxRegion(m);
            if (o->enabled && Capacity(o) >= sz / 2) {
                u32 a = AllocHead(m, sz);
                (void)AllocHead(o, sz / 2);
                *addr = a + m->base;
                return 1;
            }
        }
    }
    return 0;
}
static inline BOOL AllocNrm(u32 sz, u32 *addr) {
    s32 i;
    for (i = 0; i < 5; i++) {
        GfdMan *m = data_0213bc28[i];
        if (m->enabled && Capacity(m) >= sz) {
            m->end -= sz;
            *addr = m->end + m->base;
            return 1;
        }
    }
    return 0;
}
u32 NNS_GfdAllocFrmTexVram(u32 szByte, BOOL is4x4, u32 opt) {
    u32 addr;
    BOOL result;
    u32 sz;
    if (szByte == 0) sz = 16;
    else sz = (szByte + 15) & ~15;
    if (sz >= 0x7fff0) return 0;
    if (is4x4) {
        result = Alloc4x4(sz, &addr);
    } else {
        result = AllocNrm(sz, &addr);
    }
    if (result) return ((addr >> 3) & 0xffff) | ((sz >> 4) << 16) | (is4x4 << 31);
    return 0;
}

// ---- file-scope objects (.data 0x0213bc20-0x0213bcb4, autoload_3 .bss 0x021f5cb0-0x021f5cb4): the frame texture VRAM
// manager's slot regions and the region lists by texture kind (also used by unk_0210169c.c). This definition order gives
// the original order after mwcc's size sort.
extern GfdMan data_0213bc84, data_0213bc9c;
GfdMan data_0213bc84 = {0xffffffff, 0xffffffff, 0, 0, 3, 0xffff, 262144};
GfdMan data_0213bc6c = {0xffffffff, 0xffffffff, 0, 1, 2, 0xffff, 196608};
GfdMan data_0213bc3c[1] = {{0xffffffff, 0xffffffff, 0, 0, 0, 0xffff, 0}};
GfdMan data_0213bc54 = {0xffffffff, 0xffffffff, 0, 1, 1, 0xffff, 131072};
GfdMan data_0213bc9c = {0xffffffff, 0xffffffff, 0, 0, 4, 0xffff, 393216};
GfdMan *data_0213bc28[5] = {&data_0213bc9c, &data_0213bc84, data_0213bc3c, &data_0213bc6c, &data_0213bc54};
GfdMan *data_0213bc20[2] = {data_0213bc3c, &data_0213bc84};
u16 data_021f5cb0;
