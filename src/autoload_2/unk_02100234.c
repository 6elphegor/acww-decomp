#include "proto/autoload_2/unk_02100234.h"
#include "proto/autoload_2/unk_02101048.h"
#include "proto/autoload_2/unk_0210169c.h"
#include "proto/autoload_2/unk_02119020.h"
#include "proto/autoload_2/unk_02119434.h"
#include "uptr.h"
// mwcc-flags: -nothumb -O4,p
// NitroSystem (NNS) code, list.c, heap.c, expheap.c (first part): autoload_2 0x02100234-0x02100708. ARM code, mwcc 1.2/base, -O4,p.
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef int s32;
typedef int BOOL;

typedef struct NNSFndLink { void *prev; void *next; } NNSFndLink;
typedef struct NNSFndList { void *head; void *tail; u16 num; u16 offset; } NNSFndList;
typedef struct Region { uptr start; uptr end; } Region;

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

typedef struct FrmState { u32 tag; uptr head; uptr tail; struct FrmState *prev; } FrmState;

typedef struct FrmHead {
    uptr head;              // 0x24
    uptr tail;              // 0x28
    FrmState *state;        // 0x2c
} FrmHead;

typedef struct HeapHead {
    u32 sig;                // 0x00
    NNSFndLink link;        // 0x04
    NNSFndList childList;   // 0x0c
    uptr start;             // 0x18
    uptr end;               // 0x1c
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

extern s32 abs(s32 x);        // src/autoload_2/unk_0212703c.c
extern void MIi_CpuClear32(u32, void *, u32);   // MIi_CpuClear32(data, dest, size)
extern u32 data_021f5ca0;               // sRootListInitialized
extern NNSFndList data_021f5ca4;        // sRootList


#define HH(e) ((HeapHead *)((u8 *)(e) - __builtin_offsetof(HeapHead, u)))  // from its ExpHead / FrmHead part
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
void *AllocUsedBlockFromFreeBlock(ExpHead *e, MBlock *free, void *mblock, u32 size, u16 dir);
void *AllocFromHead__ExpHeap(HeapHead *h, u32 size, s32 alignment);
void *AllocFromTail__ExpHeap(HeapHead *h, u32 size, s32 alignment);
HeapHead *InitExpHeap(void *start, void *end, u16 opt);
void NNSi_FndInitHeapHead(HeapHead *heap, u32 sig, void *start, void *end, u16 opt);
void SetFirstObject(NNSFndList *list, void *obj);
void NNS_FndPrependListObject(NNSFndList *list, void *obj);
void *AllocFromHead__FrameHeap(FrmHead *f, u32 size, u32 alignment);
void *AllocFromTail__FrameHeap(FrmHead *f, u32 size, u32 alignment);
void FreeHead(HeapHead *h);
void FreeTail(HeapHead *h);
void FreeHead(HeapHead *h);
void FreeTail(HeapHead *h);
HeapHead *InitFrameHeap(void *start, void *end, u16 opt);


#define FRM(h) (&(h)->u.frm)

extern BOOL FS_OpenFile(void *file, const char *path); // FS_OpenFile
extern void FS_CloseFile(void *file);                   // FS_CloseFile
extern BOOL FS_UnloadArchive(void *arc);
extern u32 strlen(const char *s);                 // strlen
extern BOOL FS_RegisterArchiveName(void *arc, const char *name, u32 len);   // FS_RegisterArchiveName
extern BOOL FS_LoadArchive(void *arc, uptr base, u32 fat, u32 fatSize, u32 fnt, u32 fntSize, void *rd, void *wr);   // FS_LoadArchive

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

extern GfdMan data_0213bc3c[5];   // the regions by kind (0x0213bc3c-0x0213bcb4)
extern GfdMan *data_0213bc20[];     // 2 entries: 4x4 compressed textures
extern GfdMan *data_0213bc28[];     // 5 entries: normal textures
extern u16 data_021f5cb0;

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
void NNSi_FndInitHeapHead(HeapHead *heap, u32 sig, void *start, void *end, u16 opt);
NNSFndList *FindListContainHeap(HeapHead *heap);
HeapHead *FindContainHeap(NNSFndList *list, HeapHead *mem);
u32 NNS_FndGetSizeForMBlockExpHeap(const void *memBlock);
void NNS_FndVisitAllocatedForExpHeap(HeapHead *heap, void (*visitor)(void *, HeapHead *, u32), u32 param);
u16 NNS_FndGetGroupIDForExpHeap(HeapHead *heap);
u16 NNS_FndSetGroupIDForExpHeap(HeapHead *heap, u16 id);
u32 NNS_FndGetAllocatableSizeForExpHeapEx(HeapHead *heap, s32 alignment);
u32 NNS_FndGetTotalFreeSizeForExpHeap(HeapHead *heap);
void NNS_FndFreeToExpHeap(HeapHead *heap, void *mem);
u32 NNS_FndResizeForMBlockExpHeap(HeapHead *heap, void *memBlock, u32 size);
void *NNS_FndAllocFromExpHeapEx(HeapHead *heap, u32 size, s32 alignment);
void NNS_FndDestroyExpHeap(HeapHead *heap);
HeapHead *NNS_FndCreateExpHeapEx(void *start, u32 size, u16 opt);
BOOL RecycleRegion(ExpHead *e, Region *rgn);
void *AllocFromTail__ExpHeap(HeapHead *heap, u32 size, s32 alignment);
void *AllocFromHead__ExpHeap(HeapHead *heap, u32 size, s32 alignment);
void *AllocUsedBlockFromFreeBlock(ExpHead *e, MBlock *freeBlk, void *mblock, u32 size, u16 dir);
HeapHead *InitExpHeap(void *start, void *end, u16 opt);
MBlock *InitMBlock(Region *rgn, u16 sig);
MBlock *InsertMBlock(void *listp, MBlock *blk, MBlock *prev);
MBlock *RemoveMBlock(void *listp, MBlock *blk);
void GetRegionOfMBlock(Region *rgn, MBlock *blk);
u32 NNS_FndResizeForMBlockFrmHeap(HeapHead *heap, void *mem, u32 size);
u32 NNS_FndAdjustFrmHeap(HeapHead *heap);
BOOL NNS_FndFreeByStateToFrmHeap(HeapHead *heap, u32 tag);
BOOL NNS_FndRecordStateForFrmHeap(HeapHead *heap, u32 tag);
u32 NNS_FndGetAllocatableSizeForFrmHeapEx(HeapHead *heap, s32 alignment);
void NNS_FndFreeToFrmHeap(HeapHead *heap, u32 mode);
void *NNS_FndAllocFromFrmHeapEx(HeapHead *heap, u32 size, s32 alignment);
void NNS_FndDestroyFrmHeap(HeapHead *heap);
HeapHead *NNS_FndCreateFrmHeapEx(void *start, u32 size, u16 opt);
void FreeTail(HeapHead *heap);
void FreeHead(HeapHead *heap);
void *AllocFromTail__FrameHeap(FrmHead *f, u32 size, u32 alignment);
void *AllocFromHead__FrameHeap(FrmHead *f, u32 size, u32 alignment);
HeapHead *InitFrameHeap(void *start, void *end, u16 opt);
BOOL NNS_FndUnmountArchive(void *arc);
BOOL NNS_FndMountArchive(u32 *arc, const char *name, u32 *narc);
BOOL func_0210149c(u32 *narc);
s32 FreeTexVram_();
s32 AllocTexVram_();
s32 FreePlttVram_();
s32 AllocPlttVram_();
s32 NNS_GfdFreeFrmTexVram();
u32 NNS_GfdAllocFrmTexVram(u32 szByte, BOOL is4x4, BOOL opt);
void NNS_GfdInitFrmTexVramManager(u32 mode, BOOL setFuncs);
void NNSi_GfdSetTexNrmSearchArray(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4);

// NNS_FndFreeToExpHeap
void NNS_FndFreeToExpHeap(HeapHead *heap, void *mem) {
    ExpHead *e = EXP(heap);
    MBlock *b = (MBlock *)((u8 *)mem - sizeof(MBlock));
    Region region;
    GetRegionOfMBlock(&region, b);
    RemoveMBlock(&e->usedHead, b);
    RecycleRegion(e, &region);
}

// NNS_FndGetTotalFreeSizeForExpHeap
u32 NNS_FndGetTotalFreeSizeForExpHeap(HeapHead *heap) {
    u32 sum = 0;
    MBlock *b;
    for (b = heap->u.exp.freeHead; b != 0; b = b->next) sum += b->size;
    return sum;
}

// NNS_FndGetAllocatableSizeForExpHeapEx
u32 NNS_FndGetAllocatableSizeForExpHeapEx(HeapHead *heap, s32 alignment) {
    u32 maxSize;
    u32 offsetMin;
    MBlock *b;
    alignment = abs(alignment);
    {
        maxSize = 0;
        offsetMin = -1;
        for (b = heap->u.exp.freeHead; b != 0; b = b->next) {
            uptr mblock = (uptr)(b + 1);
            uptr start = (alignment - 1 + mblock) & ~(uptr)(alignment - 1);
            uptr end = b->size + mblock;
            if (start < end) {
                u32 sz = end - start;
                u32 off = start - mblock;
                if (maxSize < sz || (maxSize == sz && offsetMin > off)) {
                    maxSize = sz;
                    offsetMin = off;
                }
            }
        }
    }
    return maxSize;
}

// NNS_FndSetGroupIDForExpHeap
u16 NNS_FndSetGroupIDForExpHeap(HeapHead *heap, u16 id) {
    ExpHead *e = EXP(heap);
    u16 old = e->groupID;
    e->groupID = id;
    return old;
}

// NNS_FndGetGroupIDForExpHeap
u16 NNS_FndGetGroupIDForExpHeap(HeapHead *heap) {
    return heap->u.exp.groupID;
}

// NNS_FndVisitAllocatedForExpHeap
void NNS_FndVisitAllocatedForExpHeap(HeapHead *heap, void (*visitor)(void *, HeapHead *, u32), u32 param) {
    MBlock *b;
    MBlock *next;
    for (b = heap->u.exp.usedHead; b != 0; b = next) {
        next = b->next;
        visitor((u8 *)b + sizeof(MBlock), heap, param);
    }
}

// NNS_FndGetSizeForMBlockExpHeap
u32 NNS_FndGetSizeForMBlockExpHeap(const void *memBlock) {
    return ((const MBlock *)((const u8 *)memBlock - sizeof(MBlock)))->size;
}

// NNSi_FndFindContainHeap
HeapHead *FindContainHeap(NNSFndList *list, HeapHead *mem) {
    HeapHead *child = 0;
    while ((child = NNS_FndGetNextListObject(list, child)) != 0) {
        if (child->start <= (uptr)mem && (uptr)mem < child->end) {
            HeapHead *r = FindContainHeap(&child->childList, mem);
            if (r == 0) r = child;
            return r;
        }
    }
    return 0;
}

// NNSi_FndFindListContainHeap
NNSFndList *FindListContainHeap(HeapHead *heap) {
    NNSFndList *list = &data_021f5ca4;
    HeapHead *parent = FindContainHeap(list, heap);
    if (parent != 0) list = &parent->childList;
    return list;
}

// NNSi_FndInitHeapHead
void NNSi_FndInitHeapHead(HeapHead *heap, u32 sig, void *start, void *end, u16 opt) {
    heap->sig = sig;
    heap->start = (uptr)start;
    heap->end = (uptr)end;
    heap->attr.raw = 0;
    heap->attr.raw &= ~0xff;
    heap->attr.raw |= opt & 0xff;
    NNS_FndInitList(&heap->childList, __builtin_offsetof(HeapHead, link));
    if (data_021f5ca0 == 0) {
        NNS_FndInitList(&data_021f5ca4, __builtin_offsetof(HeapHead, link));
        data_021f5ca0 = 1;
    }
    NNS_FndAppendListObject(FindListContainHeap(heap), heap);
}

// NNSi_FndFinalizeHeap
void NNSi_FndFinalizeHeap(HeapHead *heap) {
    NNS_FndRemoveListObject(FindListContainHeap(heap), heap);
}

// NNS_FndInitList
void NNS_FndInitList(NNSFndList *list, u16 offset) {
    list->head = 0;
    list->tail = 0;
    list->num = 0;
    list->offset = offset;
}

// NNSi_FndInitListFirst (append to empty list)
void SetFirstObject(NNSFndList *list, void *obj) {
    NNSFndLink *ol = (NNSFndLink *)((u8 *)obj + list->offset);
    ol->next = 0;
    ol->prev = 0;
    list->head = obj;
    list->tail = obj;
    list->num++;
}

// NNS_FndAppendListObject
void NNS_FndAppendListObject(NNSFndList *list, void *obj) {
    NNSFndLink *ol;
    if (list->head == 0) {
        SetFirstObject(list, obj);
        return;
    }
    ol = (NNSFndLink *)((u8 *)obj + list->offset);
    ol->prev = list->tail;
    ol->next = 0;
    ((NNSFndLink *)((u8 *)list->tail + list->offset))->next = obj;
    list->tail = obj;
    list->num++;
}

// NNS_FndPrependListObject
void NNS_FndPrependListObject(NNSFndList *list, void *obj) {
    NNSFndLink *ol;
    if (list->head == 0) {
        SetFirstObject(list, obj);
        return;
    }
    ol = (NNSFndLink *)((u8 *)obj + list->offset);
    ol->prev = 0;
    ol->next = list->head;
    ((NNSFndLink *)((u8 *)list->head + list->offset))->prev = obj;
    list->head = obj;
    list->num++;
}

// NNS_FndInsertListObject
void NNS_FndInsertListObject(NNSFndList *list, void *target, void *obj) {
    if (target == 0) {
        NNS_FndAppendListObject(list, obj);
        return;
    }
    if (target == list->head) {
        NNS_FndPrependListObject(list, obj);
        return;
    }
    {
        u16 off = list->offset;
        NNSFndLink *ol = (NNSFndLink *)((u8 *)obj + off);
        void *prev = ((NNSFndLink *)((u8 *)target + off))->prev;
        ol->prev = prev;
        ol->next = target;
        ((NNSFndLink *)((u8 *)prev + off))->next = obj;
        ((NNSFndLink *)((u8 *)target + list->offset))->prev = obj;
        list->num++;
    }
}

// NNS_FndRemoveListObject
void NNS_FndRemoveListObject(NNSFndList *list, void *obj) {
    NNSFndLink *l = (NNSFndLink *)((u8 *)obj + list->offset);
    if (l->prev == 0) list->head = l->next;
    else ((NNSFndLink *)((u8 *)l->prev + list->offset))->next = l->next;
    if (l->next == 0) list->tail = l->prev;
    else ((NNSFndLink *)((u8 *)l->next + list->offset))->prev = l->prev;
    l->prev = 0;
    l->next = 0;
    list->num--;
}

// NNS_FndGetNextListObject
void *NNS_FndGetNextListObject(NNSFndList *list, void *obj) {
    if (obj == 0) return list->head;
    return ((NNSFndLink *)((u8 *)obj + list->offset))->next;
}

// NNS_FndGetPrevListObject
void *NNS_FndGetPrevListObject(NNSFndList *list, void *obj) {
    if (obj == 0) return list->tail;
    return ((NNSFndLink *)((u8 *)obj + list->offset))->prev;
}

// ---- file-scope objects (autoload_3 .bss 0x021f5ca0-0x021f5cb0)
u32 data_021f5ca0;               // sRootListInitialized
NNSFndList data_021f5ca4;        // sRootList
