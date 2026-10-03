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
Unk_ov001_0222df34 *data_ov001_0222df34;
}

extern "C" {
s32 OS_DisableIrqMask(s32);
void OS_EnableIrqMask(s32);
void Fatal_Trap();
void func_ov001_02224cfc(Unk_ov001_02224ca0 *, void *);
Unk_ov001_02224670 *func_ov001_02224ca0(Unk_ov001_02224ca0 *);
void func_ov001_02224d60(void *, ...);
Unk_ov001_02224ca0 *func_ov001_02224d84(s32, u8 *, u32);
void func_ov001_02225d58(void *);
void *func_ov001_02225db0(u32, u32);
void func_ov001_022266b0(void *, void *);
void func_ov001_022266c0(void *, void *);
void func_ov001_022266d0(void *, void *);
void func_ov001_02226710(void *);
void func_ov001_02226754(void *, ...);
void *func_ov001_02226778();
Unk_ov001_02224670_Entry *func_ov001_022267b0(s32, s32);
void func_ov001_0222449c(Unk_ov001_0222449c *self, s32 idx, u32 *o1, u32 *o2);
void func_ov001_022244d8(Unk_ov001_0222449c *self, s32 idx, s32 v);
void func_ov001_02224558(Unk_ov001_0222449c *self, s32 idx, s32 x, s32 y);
void func_ov001_02224670(Unk_ov001_02224670 *p, s32 idx, u32 a, u32 b);
void func_ov001_02224704(Unk_ov001_02224670 *p, s32 idx, u32 v, u32 x);
u32 func_ov001_022247cc(Unk_ov001_02224670 *p);
Unk_ov001_02224670_Entry *func_ov001_022247d4(Unk_ov001_02224670 *p, s32 i);
void func_ov001_022247e0(Unk_ov001_02224670 *p);
Unk_ov001_02224670 *func_ov001_02224870(s32 which, s32 n, s32 flag);
void func_ov001_022249e8();
void func_ov001_02224a3c();
}

// NitroSDK-style OAM position accessors (attr01: y in bits 0-7, x in bits 16-24)
static inline void Unk_ov001_02224558_GetPos(const Unk_ov001_0222449c_Ent *e, u32 *x, u32 *y) {
    *x = (e->w0 & 0x1ff0000) >> 16;
    *y = (e->w0 & 0xff) >> 0;
}

static inline void Unk_ov001_02224558_SetPos(Unk_ov001_0222449c_Ent *e, s32 x, s32 y) {
    e->w0 = (e->w0 & 0xfe00ff00) | (y & 0xff) | ((x & 0x1ff) << 16);
}

void func_ov001_02224a3c() {
    data_ov001_0222df34 = (Unk_ov001_0222df34 *)func_ov001_02225db0(0x450, 4);
    s32 i = 0;
    s32 off = i;
    for (; i < 2; off += 0x228, i++) {
        ((Unk_ov001_0222df34 *)((u8 *)data_ov001_0222df34 + off))->unk_224 = func_ov001_02224d84(0x20, (u8 *)data_ov001_0222df34 + off, 0x10);
        ((Unk_ov001_0222df34 *)((u8 *)data_ov001_0222df34 + off))->unk_220 = func_ov001_02226778();
        ((Unk_ov001_0222df34 *)((u8 *)data_ov001_0222df34 + off))->unk_200.unk_08 = func_ov001_022267b0(i, 0x40);
        ((Unk_ov001_0222df34 *)((u8 *)data_ov001_0222df34 + off))->unk_210.unk_08 = func_ov001_022267b0(i, 0x7f) + 1;
        func_ov001_022266b0(((Unk_ov001_0222df34 *)((u8 *)data_ov001_0222df34 + off))->unk_220, (u8 *)data_ov001_0222df34 + off + 0x200);
        func_ov001_022266c0(((Unk_ov001_0222df34 *)((u8 *)data_ov001_0222df34 + off))->unk_220, (u8 *)data_ov001_0222df34 + off + 0x210);
    }
}

void func_ov001_022249e8() {
    s32 i = 0;
    s32 off = i;
    for (; i < 2; i++) {
        func_ov001_02226754(*(void **)((u8 *)data_ov001_0222df34 + off + 0x220));
        func_ov001_02224d60(*(void **)((u8 *)data_ov001_0222df34 + off + 0x224));
        off += 0x228;
    }
    func_ov001_02225d58(&data_ov001_0222df34);
}

Unk_ov001_02224670 *func_ov001_02224870(s32 which, s32 n, s32 flag) {
    Unk_ov001_02224670 *r;
    Unk_ov001_02224670 *node;
    s32 irq;
    r = func_ov001_02224ca0(data_ov001_0222df34[which].unk_224);
    irq = OS_DisableIrqMask(1);
    if (flag != 0) {
        for (node = &data_ov001_0222df34[which].unk_200; node != &data_ov001_0222df34[which].unk_210; node = node->unk_04) {
            Unk_ov001_02224670 *next = node->unk_04;
            Unk_ov001_02224670_Entry *end = node->unk_08 + node->unk_0c;
            if (end + n <= next->unk_08) {
                r->unk_08 = end;
                func_ov001_022266d0(next, r);
                break;
            }
        }
        if (node == &data_ov001_0222df34[which].unk_210) Fatal_Trap();
    } else {
        for (node = &data_ov001_0222df34[which].unk_210; node != &data_ov001_0222df34[which].unk_200; node = node->unk_00) {
            Unk_ov001_02224670 *prev = node->unk_00;
            Unk_ov001_02224670_Entry *start = node->unk_08 - n;
            if (start >= prev->unk_08 + prev->unk_0c) {
                r->unk_08 = start;
                func_ov001_022266d0(node, r);
                break;
            }
        }
        if (node == &data_ov001_0222df34[which].unk_200) Fatal_Trap();
    }
    OS_EnableIrqMask(irq);
    r->unk_0c = n;
    return r;
}

void func_ov001_022247e0(Unk_ov001_02224670 *p) {
    s32 t = 0;
    Unk_ov001_02224670_Entry *e = p->unk_08;
    s32 i;
    for (i = t; i < p->unk_0c; i++, e++) {
        e->unk_00 = (e->unk_00 & 0xc1fffcff) | 0x200;
    }
    func_ov001_02226710(p);
    Unk_ov001_0222df34 *g = data_ov001_0222df34;
    if ((u32)p >= (u32)g + 0x228) t = 1;
    func_ov001_02224cfc(g[t].unk_224, p);
}

Unk_ov001_02224670_Entry *func_ov001_022247d4(Unk_ov001_02224670 *p, s32 i) {
    return p->unk_08 + i;
}

u32 func_ov001_022247cc(Unk_ov001_02224670 *p) {
    return p->unk_0c;
}

void func_ov001_02224704(Unk_ov001_02224670 *p, s32 idx, u32 v, u32 x) {
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

void func_ov001_02224670(Unk_ov001_02224670 *p, s32 idx, u32 a, u32 b) {
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

void func_ov001_02224558(Unk_ov001_0222449c *self, s32 idx, s32 x, s32 y) {
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

void func_ov001_022244d8(Unk_ov001_0222449c *self, s32 idx, s32 v) {
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

void func_ov001_0222449c(Unk_ov001_0222449c *self, s32 idx, u32 *o1, u32 *o2) {
    Unk_ov001_0222449c_Ent *p = self->unk_08;
    *o1 = (p[idx].w0 & 0x1ff0000) >> 16;
    *o2 = p[idx].w0 & 0xff;
}

