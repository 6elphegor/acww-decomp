#include "types.h"
#include "sys/PrioListNode.h"
#include "sys/ListNode.h"
#include "gfx/BgTransfer.h"
#include "gfx/TexTransfer.h"
#include "gfx/VramTask.h"
#include "gfx/BgVramTask.h"

extern "C" {
void List_Remove(void *list, void *node);
BOOL PrioList_Insert(void *list, void *node);
void PrioList_Init(void *list);
}


extern List sVramQueue2d;
extern List sVramQueueTex;



extern "C" {
u8 BgTransfer_GetPaletteRangeCost(BgTransfer *p);
u8 BgTransfer_GetPaletteCost(BgTransfer *p);
u8 BgTransfer_GetScreenCost(BgTransfer *p);
}



extern "C" {
void VramQueue2d_Dequeue(VramTask *p);
BOOL VramQueue2d_Enqueue(VramTask *p);
}



BOOL BgVramTaskPair::requestCharPair(u32 a, u32 b, u8 c, u32 d, u32 e, u32 f, u32 g) {
    prepare();
    kind = 8;
    xfer.setChars(a, c, d, d, e);
    cost = xfer.getCharCost();
    xfer2.setChars(b, c, f, f, g);
    cost += xfer2.getCharCost();
    priority = 4;
    if (VramQueue2d_Enqueue(this)) {
        return TRUE;
    }
    clear();
    return FALSE;
}

BOOL BgVramTaskPair::requestCharsAndPalette(u32 a, u8 b, u32 c, u32 d, u32 e, u32 f, u8 g) {
    prepare();
    kind = 9;
    xfer.setChars(a, b, c, d, e);
    cost = xfer.getCharCost();
    xfer2.setPalette(f, b, g);
    cost += BgTransfer_GetPaletteCost(&xfer2);
    priority = 4;
    if (VramQueue2d_Enqueue(this)) {
        return TRUE;
    }
    clear();
    return FALSE;
}

extern "C" void VramQueueTex_Init(void) {
    PrioList_Init(&sVramQueueTex);
}

BOOL VramTask::enqueueTex(void) {
    return PrioList_Insert(&sVramQueueTex, (PrioListNode *)this);
}

void VramTask::dequeueTex(void) {
    List_Remove(&sVramQueueTex, (PrioListNode *)this);
}

static inline VramTask *Unk_020b8340_First(void **l) {
    VramTask *t = (VramTask *)*l;
    if (t != 0) t = (VramTask *)((u8 *)t - 4);
    return t;
}

extern "C" void VramQueueTex_Run(void) {
    VramTask *r5;
    for (r5 = Unk_020b8340_First((void **)&sVramQueueTex); r5 != 0; r5 = Unk_020b8340_First((void **)&sVramQueueTex)) {
        if (*(u16 *)0x4000006 + r5->cost > 0xd4) break;
        BOOL ready = (r5->state == 1) ? TRUE : FALSE;
        if (ready) {
            if (r5->execute() != 0) {
                r5->state = 2;
            }
        }
        if (r5 != 0) r5 = (VramTask *)((u8 *)r5 + 4);
        List_Remove(&sVramQueueTex, r5);
    }
    volatile u16 *vc = (volatile u16 *)0x4000006;
    if (*vc <= 0xd5) {
        u16 t = *vc;
    }
}

extern "C" void VramQueue2d_Init(void) {
    PrioList_Init(&sVramQueue2d);
}

extern "C" BOOL VramQueue2d_Enqueue(VramTask *p) {
    u8 *n = (u8 *)p;
    if (n != 0) n = n + 4;
    return PrioList_Insert(&sVramQueue2d, n);
}

extern "C" void VramQueue2d_Dequeue(VramTask *p) {
    u8 *n = (u8 *)p;
    if (n != 0) n = n + 4;
    List_Remove(&sVramQueue2d, n);
}

extern "C" void VramQueue2d_Run(void) {
    VramTask *r5;
    for (r5 = Unk_020b8340_First((void **)&sVramQueue2d); r5 != 0; r5 = Unk_020b8340_First((void **)&sVramQueue2d)) {
        if (*(u16 *)0x4000006 + r5->cost > 0x104) break;
        BOOL ready = (r5->state == 1) ? TRUE : FALSE;
        if (ready) {
            if (r5->execute() != 0) {
                r5->state = 2;
            }
        }
        if (r5 != 0) r5 = (VramTask *)((u8 *)r5 + 4);
        List_Remove(&sVramQueue2d, r5);
    }
}

List sVramQueueTex;
List sVramQueue2d;
