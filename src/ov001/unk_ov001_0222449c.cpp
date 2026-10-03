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
    Unk_ov001_0222449c_Ent *unk_08;
    u8 unk_0c;
};

struct Unk_ov001_02224670_Entry {
    u32 unk_00;
    u16 unk_04;
    u16 unk_06;
};

struct Unk_ov001_02224670 {
    Unk_ov001_02224670 *unk_00;
    Unk_ov001_02224670 *unk_04;
    Unk_ov001_02224670_Entry *unk_08;
    u8 unk_0c;
};

struct Unk_ov001_02224ca0 {
    u16 unk_00;
    u8 unk_02;
    u8 unk_03;
    void *unk_04[1];
};

struct Unk_ov001_0222df34 {
    u8 pad_000[0x200];
    Unk_ov001_02224670 unk_200;
    Unk_ov001_02224670 unk_210;
    void *unk_220;
    Unk_ov001_02224ca0 *unk_224;
};

extern "C" {
Unk_ov001_0222df34 *sWfcObj;
}

extern "C" {
s32 OS_DisableIrqMask(s32);
void OS_EnableIrqMask(s32);
void Fatal_Trap();
void WfcPool_Put(Unk_ov001_02224ca0 *, void *);
Unk_ov001_02224670 *WfcPool_Get(Unk_ov001_02224ca0 *);
void WfcPool_Destroy(void *, ...);
Unk_ov001_02224ca0 *WfcPool_CreateFrom(s32, u8 *, u32);
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
void WfcObj_SetModePalette(Unk_ov001_02224670 *p, s32 idx, u32 a, u32 b);
void WfcObj_SetAffineMode(Unk_ov001_02224670 *p, s32 idx, u32 v, u32 x);
u32 WfcObj_GetCount(Unk_ov001_02224670 *p);
Unk_ov001_02224670_Entry *WfcObj_GetOam(Unk_ov001_02224670 *p, s32 i);
void WfcObj_Free(Unk_ov001_02224670 *p);
Unk_ov001_02224670 *WfcObj_Alloc(s32 which, s32 n, s32 flag);
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
        ((Unk_ov001_0222df34 *)((u8 *)sWfcObj + off))->unk_224 = WfcPool_CreateFrom(0x20, (u8 *)sWfcObj + off, 0x10);
        ((Unk_ov001_0222df34 *)((u8 *)sWfcObj + off))->unk_220 = WfcList_Create();
        ((Unk_ov001_0222df34 *)((u8 *)sWfcObj + off))->unk_200.unk_08 = WfcOam_GetEntry(i, 0x40);
        ((Unk_ov001_0222df34 *)((u8 *)sWfcObj + off))->unk_210.unk_08 = WfcOam_GetEntry(i, 0x7f) + 1;
        WfcList_PushFront(((Unk_ov001_0222df34 *)((u8 *)sWfcObj + off))->unk_220, (u8 *)sWfcObj + off + 0x200);
        WfcList_PushBack(((Unk_ov001_0222df34 *)((u8 *)sWfcObj + off))->unk_220, (u8 *)sWfcObj + off + 0x210);
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

Unk_ov001_02224670 *WfcObj_Alloc(s32 which, s32 n, s32 flag) {
    Unk_ov001_02224670 *r;
    Unk_ov001_02224670 *node;
    s32 irq;
    r = WfcPool_Get(sWfcObj[which].unk_224);
    irq = OS_DisableIrqMask(1);
    if (flag != 0) {
        for (node = &sWfcObj[which].unk_200; node != &sWfcObj[which].unk_210; node = node->unk_04) {
            Unk_ov001_02224670 *next = node->unk_04;
            Unk_ov001_02224670_Entry *end = node->unk_08 + node->unk_0c;
            if (end + n <= next->unk_08) {
                r->unk_08 = end;
                WfcList_InsertBefore(next, r);
                break;
            }
        }
        if (node == &sWfcObj[which].unk_210) Fatal_Trap();
    } else {
        for (node = &sWfcObj[which].unk_210; node != &sWfcObj[which].unk_200; node = node->unk_00) {
            Unk_ov001_02224670 *prev = node->unk_00;
            Unk_ov001_02224670_Entry *start = node->unk_08 - n;
            if (start >= prev->unk_08 + prev->unk_0c) {
                r->unk_08 = start;
                WfcList_InsertBefore(node, r);
                break;
            }
        }
        if (node == &sWfcObj[which].unk_200) Fatal_Trap();
    }
    OS_EnableIrqMask(irq);
    r->unk_0c = n;
    return r;
}

void WfcObj_Free(Unk_ov001_02224670 *p) {
    s32 t = 0;
    Unk_ov001_02224670_Entry *e = p->unk_08;
    s32 i;
    for (i = t; i < p->unk_0c; i++, e++) {
        e->unk_00 = (e->unk_00 & 0xc1fffcff) | 0x200;
    }
    WfcList_Remove(p);
    Unk_ov001_0222df34 *g = sWfcObj;
    if ((u32)p >= (u32)g + 0x228) t = 1;
    WfcPool_Put(g[t].unk_224, p);
}

Unk_ov001_02224670_Entry *WfcObj_GetOam(Unk_ov001_02224670 *p, s32 i) {
    return p->unk_08 + i;
}

u32 WfcObj_GetCount(Unk_ov001_02224670 *p) {
    return p->unk_0c;
}

void WfcObj_SetAffineMode(Unk_ov001_02224670 *p, s32 idx, u32 v, u32 x) {
    Unk_ov001_02224670_Entry *e = p->unk_08;
    if (idx >= 0) {
        if (v != 0x100 && v != 0x300) {
            u32 w = e[idx].unk_00; w &= 0xc1fffcff; w |= v; e[idx].unk_00 = w;
        } else {
            u32 w = e[idx].unk_00; w &= 0xc1fffcff; w |= v; w |= x << 25; e[idx].unk_00 = w;
        }
    } else {
        s32 i;
        for (i = 0; i < p->unk_0c; i++) {
            if (v != 0x100 && v != 0x300) {
                u32 w = e[i].unk_00; w &= 0xc1fffcff; w |= v; e[i].unk_00 = w;
            } else {
                u32 w = e[i].unk_00; w &= 0xc1fffcff; w = (x << 25) | (w | v); e[i].unk_00 = w;
            }
        }
    }
}

void WfcObj_SetModePalette(Unk_ov001_02224670 *p, s32 idx, u32 a, u32 b) {
    Unk_ov001_02224670_Entry *e = p->unk_08;
    if (idx >= 0) {
        e[idx].unk_00 = (e[idx].unk_00 & ~0xc00) | (a << 10);
        e[idx].unk_04 = (e[idx].unk_04 & ~0xf000) | (b << 12);
    } else {
        s32 i;
        for (i = 0; i < p->unk_0c; i++) {
            u32 w = e[i].unk_00; w &= ~0xc00; w |= a << 10; e[i].unk_00 = w;
            u32 h = e[i].unk_04; h &= ~0xf000; h |= b << 12; e[i].unk_04 = h;
        }
    }
}

void WfcObj_SetPos(Unk_ov001_0222449c *self, s32 idx, s32 x, s32 y) {
    Unk_ov001_0222449c_Ent *p = self->unk_08;
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
        for (i = 1; i < self->unk_0c; i++) {
            s32 ex, ey;
            Unk_ov001_02224558_GetPos(&p[i], (u32 *)&ex, (u32 *)&ey);
            Unk_ov001_02224558_SetPos(&p[i], ex + dx, ey + dy);
        }
    }
}

void WfcObj_SetPriority(Unk_ov001_0222449c *self, s32 idx, s32 v) {
    Unk_ov001_0222449c_Ent *p = self->unk_08;
    if (idx >= 0) {
        Unk_ov001_0222449c_Ent *e = &p[idx];
        e->w4 = (e->w4 & ~0xc00) | (v << 10);
    } else {
        s32 i;
        for (i = 0; i < self->unk_0c; i++) {
            u32 t = p[i].w4 & ~0xc00;
            p[i].w4 = t | (v << 10);
        }
    }
}

void WfcObj_GetPos(Unk_ov001_0222449c *self, s32 idx, u32 *o1, u32 *o2) {
    Unk_ov001_0222449c_Ent *p = self->unk_08;
    *o1 = (p[idx].w0 & 0x1ff0000) >> 16;
    *o2 = p[idx].w0 & 0xff;
}

