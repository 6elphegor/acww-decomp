// mwcc-flags: -O4,p
#include "types.h"

#pragma thumb off

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

struct Unk_ov001_02224b9c_T {
    u16 unk_00;
    u16 unk_02;
    u32 unk_04;
};

struct Unk_ov001_0222df40 {
    s32 unk_00;
    s16 unk_04;
    u16 unk_06;
    u8 unk_08;
    u8 unk_09;
};

extern "C" {
extern Unk_ov001_0222df34 *data_ov001_0222df34;
extern Unk_ov001_02224b9c_T *data_ov001_0222df38[];
extern Unk_ov001_0222df40 *data_ov001_0222df40;
extern u8 data_ov001_0222b880[];
extern u8 data_ov001_0222b884[];

s32 func_01ff80e0(s32);
s32 func_01ff8128(s32);
s32 func_01ffc2c4(s32, s32);
s32 func_01ffc31c(s32, s32);
void func_02110a1c(u32, s32);
void func_02115e48(void *, void *, u32);
void func_02115e64(s32, void *, u32);
void func_02115e78(void *, void *, u32);
void func_0206d49c();
void func_ov001_02224038(void *);
void *func_ov001_02224074(u32, void *, u32);
void func_ov001_02225d58(void *);
void *func_ov001_02225db0(u32, u32);
void *func_ov001_02225dd8(u32, u32);
void func_ov001_022266b0(void *, void *);
void func_ov001_022266c0(void *, void *);
void func_ov001_022266d0(void *, void *);
void func_ov001_02226710(void *);
void func_ov001_02226754(void *, ...);
void *func_ov001_02226778();
Unk_ov001_02224670_Entry *func_ov001_022267b0(s32, s32);
Unk_ov001_02224670 *func_ov001_02226814(s32, void *);
s32 func_ov001_02226fdc(s32, s32);
s32 func_ov001_02227094(s32, void *, void *, s32);
Unk_ov001_02224ca0 *func_ov001_02224dc8(s32);
Unk_ov001_02224ca0 *func_ov001_02224d84(s32, u8 *, u32);
Unk_ov001_02224670_Entry *func_ov001_022247d4(Unk_ov001_02224670 *, s32);
void func_ov001_02224d60(void *, ...);
Unk_ov001_02224670 *func_ov001_02224870(s32, s32, s32);
void func_ov001_02224b9c(s32, s32, void *);
void func_ov001_02224cfc(Unk_ov001_02224ca0 *, void *);
Unk_ov001_02224670 *func_ov001_02224ca0(Unk_ov001_02224ca0 *);
void func_ov001_02224e00(s32, Unk_ov001_0222df40 *);

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

u32 func_ov001_022247cc(Unk_ov001_02224670 *p) {
    return p->unk_0c;
}

Unk_ov001_02224670_Entry *func_ov001_022247d4(Unk_ov001_02224670 *p, s32 i) {
    return p->unk_08 + i;
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

Unk_ov001_02224670 *func_ov001_02224870(s32 which, s32 n, s32 flag) {
    Unk_ov001_02224670 *r;
    Unk_ov001_02224670 *node;
    s32 irq;
    r = func_ov001_02224ca0(data_ov001_0222df34[which].unk_224);
    irq = func_01ff80e0(1);
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
        if (node == &data_ov001_0222df34[which].unk_210) func_0206d49c();
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
        if (node == &data_ov001_0222df34[which].unk_200) func_0206d49c();
    }
    func_01ff8128(irq);
    r->unk_0c = n;
    return r;
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

Unk_ov001_02224670 *func_ov001_02224b14(s32 which, s32 idx, s32 flag) {
    Unk_ov001_02224670 *r = func_ov001_02224870(which, data_ov001_0222df38[which][idx].unk_00, flag);
    func_ov001_02224b9c(which, idx, func_ov001_022247d4(r, 0));
    return r;
}

Unk_ov001_02224670 *func_ov001_02224b60(s32 which, s32 idx) {
    u32 buf[2];
    Unk_ov001_02224670 *r = func_ov001_02226814(which, buf);
    func_ov001_02224b9c(which, idx, r);
    return r;
}

void func_ov001_02224b9c(s32 which, s32 idx, void *dst) {
    Unk_ov001_02224b9c_T *tbl = data_ov001_0222df38[which];
    u8 buf[8];
    volatile s32 z;
    u32 off = tbl[idx].unk_04;
    u32 cnt = tbl[idx].unk_00;
    u8 *src = (u8 *)tbl + off;
    s32 i;
    z = 0;
    func_02115e64(z, buf, 8);
    for (i = 0; i < (s32)cnt; i++) {
        func_02115e48(src, buf, 6);
        func_02115e78(buf, dst, 8);
        src += 6;
        dst = (u8 *)dst + 8;
    }
}

void func_ov001_02224c40(s32 which) {
    func_ov001_02224038(data_ov001_0222df38[which]);
    data_ov001_0222df38[which] = 0;
}

void func_ov001_02224c6c(s32 which, u32 path) {
    u32 buf[2];
    data_ov001_0222df38[which] = (Unk_ov001_02224b9c_T *)func_ov001_02224074(path, buf, 4);
}

Unk_ov001_02224670 *func_ov001_02224ca0(Unk_ov001_02224ca0 *r) {
    Unk_ov001_02224670 *res = 0;
    s32 irq = func_01ff80e0(1);
    u32 t = r->unk_03;
    u32 h = r->unk_02;
    if (h != t) {
        r->unk_03 = func_01ffc2c4(t + r->unk_00 - 1, r->unk_00);
        res = (Unk_ov001_02224670 *)r->unk_04[r->unk_03];
    }
    func_01ff8128(irq);
    return res;
}

void func_ov001_02224cfc(Unk_ov001_02224ca0 *r, void *v) {
    s32 irq = func_01ff80e0(1);
    u32 n = func_01ffc2c4(r->unk_03 + 1, r->unk_00);
    if (n == r->unk_02) func_0206d49c();
    r->unk_04[r->unk_03] = v;
    r->unk_03 = n;
    func_01ff8128(irq);
}

void func_ov001_02224d60(void *a, ...) {
    func_ov001_02225d58(&a);
}

Unk_ov001_02224ca0 *func_ov001_02224d84(s32 count, u8 *base, u32 stride) {
    Unk_ov001_02224ca0 *r = func_ov001_02224dc8(count);
    s32 i;
    for (i = 0; i < count; i++) {
        r->unk_04[i] = base;
        base += stride;
    }
    r->unk_03 = count;
    return r;
}

Unk_ov001_02224ca0 *func_ov001_02224dc8(s32 count) {
    Unk_ov001_02224ca0 *r = (Unk_ov001_02224ca0 *)func_ov001_02225dd8((count + 1) * 4 + 8, 4);
    r->unk_00 = count + 1;
    r->unk_02 = 0;
    r->unk_03 = 0;
    return r;
}

void func_ov001_02224e00(s32 a, Unk_ov001_0222df40 *st) {
    st->unk_04 = st->unk_04 + 1;
    if (st->unk_04 < st->unk_06) return;
    st->unk_09 = 0;
    func_ov001_02226fdc(1, a);
}

s32 func_ov001_02224e4c(u32 v) {
    Unk_ov001_0222df40 *s = data_ov001_0222df40;
    if (s->unk_09 != 0) return 0;
    s->unk_00 = func_ov001_02227094(1, (void *)func_ov001_02224e00, s, 200);
    s->unk_04 = 0;
    s->unk_06 = v;
    s->unk_09 = 1;
    return 1;
}

void func_ov001_02224eb8(s32 a, Unk_ov001_0222df40 *st) {
    s8 lo[4];
    s8 hi[4];
    lo[0] = data_ov001_0222b884[0];
    lo[1] = data_ov001_0222b884[1];
    lo[2] = data_ov001_0222b884[2];
    lo[3] = data_ov001_0222b884[3];
    hi[0] = data_ov001_0222b880[0];
    hi[1] = data_ov001_0222b880[1];
    hi[2] = data_ov001_0222b880[2];
    hi[3] = data_ov001_0222b880[3];
    st->unk_04 = st->unk_04 + 1;
    s32 r = func_01ffc31c(st->unk_04 << 4, st->unk_06);
    u32 f = ((u8 *)lo)[st->unk_08];
    if (f & 1) r = 0x10 - r;
    if (f & 0x10) r = -r;
    if (st == data_ov001_0222df40) func_02110a1c(0x4001050, r);
    else func_02110a1c(0x4000050, r);
    if (st->unk_04 < st->unk_06) return;
    if (st == data_ov001_0222df40) func_02110a1c(0x4001050, hi[st->unk_08]);
    else func_02110a1c(0x4000050, hi[st->unk_08]);
    st->unk_09 = 0;
    func_ov001_02226fdc(1, a);
}

}
