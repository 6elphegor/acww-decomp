// mwcc-flags: -O4,p
#include "types.h"

#pragma thumb off

struct Unk_ov001_0222449c_Ent {
    u32 w0;
    u16 w4;
    u16 w6;
};

struct Unk_ov001_0222449c {
    u32 unk_00;
    u32 unk_04;
    Unk_ov001_0222449c_Ent *oams;
    u8 numOams;
};

struct Unk_ov001_02224670_Entry {
    u32 attr01;
    u16 attr2;
    u16 unk_06;
};

struct WfcObjGroup {
    WfcObjGroup *prev;
    WfcObjGroup *next;
    Unk_ov001_02224670_Entry *oams;
    u8 numOams;
};

struct WfcPool {
    u16 capacity;
    u8 head;
    u8 top;
    void *entries[1];
};

struct Unk_ov001_0222df34 {
    u8 pad_000[0x200];
    WfcObjGroup headNode;
    WfcObjGroup tailNode;
    void *list;
    WfcPool *nodePool;
};

extern "C" {
Unk_ov001_0222df34 *sWfcObj;
}

extern "C" {
s32 OS_DisableIrqMask(s32);
void OS_EnableIrqMask(s32);
void Fatal_Trap();
void WfcPool_Put(WfcPool *, void *);
WfcObjGroup *WfcPool_Get(WfcPool *);
void WfcPool_Destroy(void *, ...);
WfcPool *WfcPool_CreateFrom(s32, u8 *, u32);
void WfcHeap_FreeAndClear(void *);
void *WfcHeap_AllocClear(u32, u32);
void WfcList_PushFront(void *, void *);
void WfcList_PushBack(void *, void *);
void WfcList_InsertBefore(void *, void *);
void WfcList_Remove(void *);
void WfcList_Destroy(void *, ...);
void *WfcList_Create();
Unk_ov001_02224670_Entry *WfcOam_GetEntry(s32, s32);
void WfcObj_GetPos(Unk_ov001_0222449c *self, s32 idx, u32 *o1, u32 *o2);
void WfcObj_SetPriority(Unk_ov001_0222449c *self, s32 idx, s32 v);
void WfcObj_SetPos(Unk_ov001_0222449c *self, s32 idx, s32 x, s32 y);
void WfcObj_SetModePalette(WfcObjGroup *p, s32 idx, u32 a, u32 b);
void WfcObj_SetAffineMode(WfcObjGroup *p, s32 idx, u32 v, u32 x);
u32 WfcObj_GetCount(WfcObjGroup *p);
Unk_ov001_02224670_Entry *WfcObj_GetOam(WfcObjGroup *p, s32 i);
void WfcObj_Free(WfcObjGroup *p);
WfcObjGroup *WfcObj_Alloc(s32 which, s32 n, s32 flag);
void WfcObj_Shutdown();
void WfcObj_Init();
}

// NitroSDK-style OAM position accessors (attr01: y in bits 0-7, x in bits 16-24)
static inline void Unk_ov001_02224558_GetPos(const Unk_ov001_0222449c_Ent *e, u32 *x, u32 *y) {
    *x = (e->w0 & 0x1ff0000) >> 16;
    *y = (e->w0 & 0xff) >> 0;
}

static inline void Unk_ov001_02224558_SetPos(Unk_ov001_0222449c_Ent *e, s32 x, s32 y) {
    e->w0 = (e->w0 & 0xfe00ff00) | (y & 0xff) | ((x & 0x1ff) << 16);
}

void WfcObj_Init() {
    sWfcObj = (Unk_ov001_0222df34 *)WfcHeap_AllocClear(0x450, 4);
    s32 i = 0;
    s32 off = i;
    for (; i < 2; off += 0x228, i++) {
        ((Unk_ov001_0222df34 *)((u8 *)sWfcObj + off))->nodePool = WfcPool_CreateFrom(0x20, (u8 *)sWfcObj + off, 0x10);
        ((Unk_ov001_0222df34 *)((u8 *)sWfcObj + off))->list = WfcList_Create();
        ((Unk_ov001_0222df34 *)((u8 *)sWfcObj + off))->headNode.oams = WfcOam_GetEntry(i, 0x40);
        ((Unk_ov001_0222df34 *)((u8 *)sWfcObj + off))->tailNode.oams = WfcOam_GetEntry(i, 0x7f) + 1;
        WfcList_PushFront(((Unk_ov001_0222df34 *)((u8 *)sWfcObj + off))->list, (u8 *)sWfcObj + off + 0x200);
        WfcList_PushBack(((Unk_ov001_0222df34 *)((u8 *)sWfcObj + off))->list, (u8 *)sWfcObj + off + 0x210);
    }
}

void WfcObj_Shutdown() {
    s32 i = 0;
    s32 off = i;
    for (; i < 2; i++) {
        WfcList_Destroy(*(void **)((u8 *)sWfcObj + off + 0x220));
        WfcPool_Destroy(*(void **)((u8 *)sWfcObj + off + 0x224));
        off += 0x228;
    }
    WfcHeap_FreeAndClear(&sWfcObj);
}

WfcObjGroup *WfcObj_Alloc(s32 which, s32 n, s32 flag) {
    WfcObjGroup *r;
    WfcObjGroup *node;
    s32 irq;
    r = WfcPool_Get(sWfcObj[which].nodePool);
    irq = OS_DisableIrqMask(1);
    if (flag != 0) {
        for (node = &sWfcObj[which].headNode; node != &sWfcObj[which].tailNode; node = node->next) {
            WfcObjGroup *next = node->next;
            Unk_ov001_02224670_Entry *end = node->oams + node->numOams;
            if (end + n <= next->oams) {
                r->oams = end;
                WfcList_InsertBefore(next, r);
                break;
            }
        }
        if (node == &sWfcObj[which].tailNode) Fatal_Trap();
    } else {
        for (node = &sWfcObj[which].tailNode; node != &sWfcObj[which].headNode; node = node->prev) {
            WfcObjGroup *prev = node->prev;
            Unk_ov001_02224670_Entry *start = node->oams - n;
            if (start >= prev->oams + prev->numOams) {
                r->oams = start;
                WfcList_InsertBefore(node, r);
                break;
            }
        }
        if (node == &sWfcObj[which].headNode) Fatal_Trap();
    }
    OS_EnableIrqMask(irq);
    r->numOams = n;
    return r;
}

void WfcObj_Free(WfcObjGroup *p) {
    s32 t = 0;
    Unk_ov001_02224670_Entry *e = p->oams;
    s32 i;
    for (i = t; i < p->numOams; i++, e++) {
        e->attr01 = (e->attr01 & 0xc1fffcff) | 0x200;
    }
    WfcList_Remove(p);
    Unk_ov001_0222df34 *g = sWfcObj;
    if ((u32)p >= (u32)g + 0x228) t = 1;
    WfcPool_Put(g[t].nodePool, p);
}

Unk_ov001_02224670_Entry *WfcObj_GetOam(WfcObjGroup *p, s32 i) {
    return p->oams + i;
}

u32 WfcObj_GetCount(WfcObjGroup *p) {
    return p->numOams;
}

void WfcObj_SetAffineMode(WfcObjGroup *p, s32 idx, u32 v, u32 x) {
    Unk_ov001_02224670_Entry *e = p->oams;
    if (idx >= 0) {
        if (v != 0x100 && v != 0x300) {
            u32 w = e[idx].attr01; w &= 0xc1fffcff; w |= v; e[idx].attr01 = w;
        } else {
            u32 w = e[idx].attr01; w &= 0xc1fffcff; w |= v; w |= x << 25; e[idx].attr01 = w;
        }
    } else {
        s32 i;
        for (i = 0; i < p->numOams; i++) {
            if (v != 0x100 && v != 0x300) {
                u32 w = e[i].attr01; w &= 0xc1fffcff; w |= v; e[i].attr01 = w;
            } else {
                u32 w = e[i].attr01; w &= 0xc1fffcff; w = (x << 25) | (w | v); e[i].attr01 = w;
            }
        }
    }
}

void WfcObj_SetModePalette(WfcObjGroup *p, s32 idx, u32 a, u32 b) {
    Unk_ov001_02224670_Entry *e = p->oams;
    if (idx >= 0) {
        e[idx].attr01 = (e[idx].attr01 & ~0xc00) | (a << 10);
        e[idx].attr2 = (e[idx].attr2 & ~0xf000) | (b << 12);
    } else {
        s32 i;
        for (i = 0; i < p->numOams; i++) {
            u32 w = e[i].attr01; w &= ~0xc00; w |= a << 10; e[i].attr01 = w;
            u32 h = e[i].attr2; h &= ~0xf000; h |= b << 12; e[i].attr2 = h;
        }
    }
}

void WfcObj_SetPos(Unk_ov001_0222449c *self, s32 idx, s32 x, s32 y) {
    Unk_ov001_0222449c_Ent *p = self->oams;
    if (idx >= 0) {
        Unk_ov001_02224558_SetPos(&p[idx], x, y);
    } else {
        s32 ox, oy;
        s32 i;
        // s32 locals passed through a (u32 *) cast stay in memory (not promoted to registers)
        Unk_ov001_02224558_GetPos(&p[0], (u32 *)&ox, (u32 *)&oy);
        Unk_ov001_02224558_SetPos(&p[0], x, y);
        s32 dx = x - ox;
        s32 dy = y - oy;
        for (i = 1; i < self->numOams; i++) {
            s32 ex, ey;
            Unk_ov001_02224558_GetPos(&p[i], (u32 *)&ex, (u32 *)&ey);
            Unk_ov001_02224558_SetPos(&p[i], ex + dx, ey + dy);
        }
    }
}

void WfcObj_SetPriority(Unk_ov001_0222449c *self, s32 idx, s32 v) {
    Unk_ov001_0222449c_Ent *p = self->oams;
    if (idx >= 0) {
        Unk_ov001_0222449c_Ent *e = &p[idx];
        e->w4 = (e->w4 & ~0xc00) | (v << 10);
    } else {
        s32 i;
        for (i = 0; i < self->numOams; i++) {
            u32 t = p[i].w4 & ~0xc00;
            p[i].w4 = t | (v << 10);
        }
    }
}

void WfcObj_GetPos(Unk_ov001_0222449c *self, s32 idx, u32 *o1, u32 *o2) {
    Unk_ov001_0222449c_Ent *p = self->oams;
    *o1 = (p[idx].w0 & 0x1ff0000) >> 16;
    *o2 = p[idx].w0 & 0xff;
}

