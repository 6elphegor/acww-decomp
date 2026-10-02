// mwcc-flags: -nothumb -O4,p
// NitroSystem (NNS) code, expheap.c (AllocFromTail/Head): autoload_2 0x02100a24-0x02100bb0. ARM code, mwcc 1.2/base, -O4,p.
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

void func_0210045c(HeapHead *heap);
NNSFndList *func_02100508(HeapHead *heap);
HeapHead *func_02100534(NNSFndList *list, HeapHead *mem);
void func_02100444(NNSFndList *list, u16 offset);
void func_02100260(NNSFndList *list, void *obj);
void func_021003b0(NNSFndList *list, void *obj);
void *func_02100248(NNSFndList *list, void *obj);
MBlock *func_02100dc8(Region *r, u16 sig);
MBlock *func_02100df8(void *list, MBlock *blk, MBlock *prev);
MBlock *func_02100e28(void *list, MBlock *blk);
void func_02100e50(Region *r, MBlock *blk);
BOOL func_0210092c(ExpHead *e, Region *r);
void *func_02100bb0(ExpHead *e, MBlock *free, u32 mblock, u32 size, u16 dir);
void *func_02100ae8(HeapHead *h, u32 size, s32 alignment);
void *func_02100a24(HeapHead *h, u32 size, s32 alignment);
HeapHead *func_02100d44(u32 start, u32 end, u16 opt);
void func_02100478(HeapHead *heap, u32 sig, u32 start, u32 end, u16 opt);
void func_02100418(NNSFndList *list, void *obj);
void func_0210034c(NNSFndList *list, void *obj);
void *func_021011ec(FrmHead *f, u32 size, u32 alignment);
void *func_02101170(FrmHead *f, u32 size, u32 alignment);
void func_02101158(HeapHead *h);
void func_02101128(HeapHead *h);
void func_02101158(HeapHead *h);
void func_02101128(HeapHead *h);
HeapHead *func_0210126c(u32 start, u32 end, u16 opt);


#define FRM(h) (&(h)->u.frm)

extern void func_02119d78(void *file);                   // FS_InitFile
extern BOOL func_02119a28(void *file, const char *path); // FS_OpenFile
extern void func_021199e0(void *file);                   // FS_CloseFile
extern BOOL func_02118f58(void *arc);
extern void func_02119098(void *arc);                    // FS_ReleaseArchiveName
extern void func_02119240(void *arc);                    // FS_InitArchive
extern u32 func_0212a438(const char *s);                 // strlen
extern BOOL func_02119130(void *arc, const char *name, u32 len);   // FS_RegisterArchiveName
extern BOOL func_02119020(void *arc, u32 base, u32 fat, u32 fatSize, u32 fnt, u32 fntSize, u32 rd, u32 wr);   // FS_LoadArchive

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
void *func_02100234(NNSFndList *list, void *obj);
void *func_02100248(NNSFndList *list, void *obj);
void func_02100260(NNSFndList *list, void *obj);
void func_021002cc(NNSFndList *list, void *target, void *obj);
void func_0210034c(NNSFndList *list, void *obj);
void func_021003b0(NNSFndList *list, void *obj);
void func_02100418(NNSFndList *list, void *obj);
void func_02100444(NNSFndList *list, u16 offset);
void func_0210045c(HeapHead *heap);
void func_02100478(HeapHead *heap, u32 sig, u32 start, u32 end, u16 opt);
NNSFndList *func_02100508(HeapHead *heap);
HeapHead *func_02100534(NNSFndList *list, HeapHead *mem);
u32 func_021005a4(u32 memBlock);
void func_021005ac(HeapHead *heap, void (*visitor)(void *, HeapHead *, u32), u32 param);
u16 func_02100600(HeapHead *heap);
u16 func_02100608(HeapHead *heap, u16 id);
u32 func_02100618(HeapHead *heap, s32 alignment);
u32 func_021006a0(HeapHead *heap);
void func_021006c8(HeapHead *heap, u32 mem);
u32 func_02100708(HeapHead *heap, u32 memBlock, u32 size);
void *func_02100890(HeapHead *heap, u32 size, s32 alignment);
void func_021008d4(HeapHead *heap);
HeapHead *func_021008e0(u32 start, u32 size, u16 opt);
BOOL func_0210092c(ExpHead *e, Region *rgn);
void *func_02100a24(HeapHead *heap, u32 size, s32 alignment);
void *func_02100ae8(HeapHead *heap, u32 size, s32 alignment);
void *func_02100bb0(ExpHead *e, MBlock *freeBlk, u32 mblock, u32 size, u16 dir);
HeapHead *func_02100d44(u32 start, u32 end, u16 opt);
MBlock *func_02100dc8(Region *rgn, u16 sig);
MBlock *func_02100df8(void *listp, MBlock *blk, MBlock *prev);
MBlock *func_02100e28(void *listp, MBlock *blk);
void func_02100e50(Region *rgn, MBlock *blk);
u32 func_02100e7c(HeapHead *heap, u32 mem, u32 size);
u32 func_02100f20(HeapHead *heap);
BOOL func_02100f54(HeapHead *heap, u32 tag);
BOOL func_02100fb0(HeapHead *heap, u32 tag);
u32 func_02101008(HeapHead *heap, s32 alignment);
void func_02101048(HeapHead *heap, u32 mode);
void *func_02101088(HeapHead *heap, u32 size, s32 alignment);
void func_021010d0(HeapHead *heap);
HeapHead *func_021010dc(u32 start, u32 size, u16 opt);
void func_02101128(HeapHead *heap);
void func_02101158(HeapHead *heap);
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

// expheap: AllocFromHead
void *func_02100ae8(HeapHead *heap, u32 size, s32 alignment) {
    ExpHead *e = EXP(heap);
    BOOL allocFirst = (GetAllocMode(e) == 0);
    MBlock *found;
    MBlock *b;
    u32 foundSize;
    u32 foundAddr;
    found = 0;
    b = e->freeHead;
    foundAddr = 0;
    foundSize = -1;
    for (; b != 0; b = b->next) {
        u32 mblock = (u32)b + 16;
        u32 req = (alignment - 1 + mblock) & ~(alignment - 1);
        u32 off = req - mblock;
        if (b->size >= size + off && foundSize > b->size) {
            found = b;
            foundSize = b->size;
            foundAddr = req;
            if (allocFirst || b->size == size) break;
        }
    }
    if (found == 0) return 0;
    return func_02100bb0(e, found, foundAddr, size, 0);
}

// expheap: AllocFromTail
void *func_02100a24(HeapHead *heap, u32 size, s32 alignment) {
    ExpHead *e = EXP(heap);
    BOOL allocFirst;
    MBlock *found;
    MBlock *b;
    u32 foundSize;
    u32 foundAddr;
    foundSize = -1;
    allocFirst = (GetAllocMode(e) == 0);
    found = 0;
    b = e->freeTail;
    foundAddr = 0;
    for (; b != 0; b = b->prev) {
        u32 mblock = (u32)b + 16;
        u32 req = (b->size + mblock - size) & ~(alignment - 1);
        if ((s32)(req - mblock) >= 0 && foundSize > b->size) {
            found = b;
            foundSize = b->size;
            foundAddr = req;
            if (allocFirst || b->size == size) break;
        }
    }
    if (found == 0) return 0;
    return func_02100bb0(e, found, foundAddr, size, 1);
}
