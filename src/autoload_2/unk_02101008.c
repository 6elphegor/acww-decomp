#include "uptr.h"
#include "proto/autoload_2/unk_02101008.h"
#include "proto/autoload_2/unk_02101048.h"
#include "proto/autoload_2/unk_0210169c.h"
#include "proto/autoload_2/unk_02119020.h"
#include "proto/autoload_2/unk_02119434.h"
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

extern s32 abs(s32 x); // src/autoload_2/unk_0212703c.c

static inline uptr RoundUp(uptr v, uptr a) { return (v + (a - 1)) & ~(a - 1); }

// (the frame heap keeps its head and tail as addresses: uptr in every copy of HeapHead, these units' shared layout)
u32 NNS_FndGetAllocatableSizeForFrmHeapEx(HeapHead *heap, s32 alignment) {
    alignment = abs(alignment);
    {
        const FrmHead *f = &heap->u.frm;
        uptr block = RoundUp(f->head, alignment);
        if (block > f->tail) return 0;
        return (u32)(f->tail - block);
    }
}
