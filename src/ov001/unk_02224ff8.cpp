// mwcc-flags: -O4,p
#include "types.h"

#pragma thumb off

struct Unk_ov001_02224ff8_Slot {
    u32 unk_00;
    u16 unk_04;
    u16 unk_06;
    u8 unk_08;
    u8 unk_09;
    u8 pad_0a[2];
};

struct Unk_ov001_02224ff8_Four {
    u8 v[4];
};

struct Unk_ov001_0222558c_Gfx {
    u8 pad_00[0x18];
    void (*unk_18)(Unk_ov001_0222558c_Gfx *, s32);
    u8 pad_1c[4];
    Unk_ov001_0222558c_Gfx *unk_20;
    void *unk_24;
    s32 unk_28;
    s32 unk_2c;
    void *unk_30;
    u16 unk_34;
    u8 unk_36;
    u8 unk_37;
};

struct Unk_ov001_0222df44_Sub {
    u8 pad_00[0x20];
    Unk_ov001_0222558c_Gfx *unk_20;
    void *unk_24;
    s32 unk_28;
    s32 unk_2c;
    void *unk_30;
    u32 unk_34;
};

struct Unk_ov001_0222df44_S {
    u8 unk_000[0x718];
    Unk_ov001_0222df44_Sub unk_718[2];
    void *unk_788;
    void *unk_78c[2];
    u8 unk_794;
    u8 unk_795;
};

extern "C" {
extern Unk_ov001_02224ff8_Slot *data_ov001_0222df40;
extern Unk_ov001_0222df44_S *data_ov001_0222df44;
extern Unk_ov001_02224ff8_Four data_ov001_0222b888;
extern void *data_ov001_0222b88c[];
extern u16 data_ov001_0222a458[];
extern u16 data_ov001_0222a45a[];
extern u16 data_ov001_0222a454[];

s32 func_02110abc(void *, s32, s32);
u32 func_ov001_02227094(u32, void *, void *, u32);
void func_ov001_02224eb8(u32, void *);
void *func_ov001_02225db0(u32, u32);
void *func_ov001_02225dd8(u32, u32);
void func_ov001_02225d58(void *);
void *func_ov001_022247d4(void *, u32);
void func_ov001_02224704(void *, s32, u32, u32);
void func_ov001_02224670(void *, s32, u32, u32);
void func_ov001_022244d8(void *, s32, s32);
void func_02101de8(void *, u32, u32, s32, s32, s32, u32, s32);
void func_021031c4(void *, s32, s32, s32, s32, s32, s32, s32);
u32 func_02101c6c(void *, u32);
void *func_02101c08(void *, u32);
void func_02102388(s32, void *, s32, s32, s32, u16);
void func_02103278(void *, s32, s32, s32, s32, s32);
void func_ov001_02226fd0(u32, u32);
void *func_02110728();
void func_02115e30(u32, void *, u32);
void func_021145cc(void *, u32);
void func_021118cc(void *, u32, u32);
void func_02111864(void *, u32, u32);
void func_ov001_02225400(Unk_ov001_0222df44_Sub *);
void func_ov001_02225238(Unk_ov001_0222558c_Gfx *, s32);
void func_ov001_022254ac(u32, u8 *);
void func_02102340(void *, void *, u32, u32, u32);
void *func_021109c8();
void *func_021109e8();
void func_021021e8(void *, u32, u32, s32, s32, s32, u32, s32);
void func_ov001_02225360(s32, s32, s32, s32, u16, s32);
void func_ov001_02226994(void *);
void func_ov001_02224cfc(void *, void *);
void *func_ov001_02224ca0(void *);
void *func_ov001_022269e0(u32, u32, u32, s32 *);
void *func_0210211c(u32, u32);
void func_021022ac(void *, u32, u32, u32, u32);
void func_ov001_02224038(void *);
void func_ov001_02224d60(void *);
void *func_ov001_02224d84(u32, void *, u32);
void *func_ov001_02224074(void *, u32, u32);
void func_02101ccc(void *, void *);

u32 func_ov001_02224ff8(u32 idx, u32 mode, s32 val, u32 h) {
    Unk_ov001_02224ff8_Four arr = data_ov001_0222b888;
    Unk_ov001_02224ff8_Slot *p = mode == 1 ? data_ov001_0222df40 : (Unk_ov001_02224ff8_Slot *)((u8 *)data_ov001_0222df40 + 0xc);
    if (p->unk_09 != 0) {
        return 0;
    }
    if (mode == 1) {
        func_02110abc((void *)0x4001050, val, ((s8 *)arr.v)[idx]);
    } else {
        func_02110abc((void *)0x4000050, val, ((s8 *)arr.v)[idx]);
    }
    p->unk_00 = func_ov001_02227094(1, (void *)func_ov001_02224eb8, p, 0xc8);
    p->unk_04 = 0;
    p->unk_08 = idx;
    p->unk_06 = h;
    p->unk_09 = 1;
    return 1;
}

u8 func_ov001_022250e0(u32 mode) {
    Unk_ov001_02224ff8_Slot *p;
    if (mode == 1) {
        p = data_ov001_0222df40;
    } else {
        p = (Unk_ov001_02224ff8_Slot *)((u8 *)data_ov001_0222df40 + 0xc);
    }
    return p->unk_09;
}

void func_ov001_02225104() {
    func_ov001_02225d58(&data_ov001_0222df40);
}

void func_ov001_02225118() {
    data_ov001_0222df40 = (Unk_ov001_02224ff8_Slot *)func_ov001_02225db0(0x18, 4);
    func_02110abc((void *)0x4000050, 0x3f, 0x10);
    func_02110abc((void *)0x4001050, 0x3f, 0x10);
}

void func_ov001_0222516c(void *o) {
    Unk_ov001_0222df44_S *g = data_ov001_0222df44;
    if (o == &g->unk_718[0]) {
        g->unk_794 = 1;
    } else {
        g->unk_795 = 1;
    }
}

void func_ov001_0222519c(Unk_ov001_0222558c_Gfx *o, s32 a1, s32 a2, void *h, s32 a4) {
    void *e = func_ov001_022247d4(h, 0);
    func_ov001_02224704(h, -1, 0, 0);
    func_ov001_02224670(h, -1, 0, 0xf);
    func_ov001_022244d8(h, -1, a4);
    func_02101de8(e, o->unk_36, o->unk_37, a1, a2, 0, o->unk_34, 2);
}

void func_ov001_02225238(Unk_ov001_0222558c_Gfx *o, s32 a) {
    o->unk_18(o, a);
}

void func_ov001_02225254(Unk_ov001_0222558c_Gfx *o, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g) {
    func_021031c4(&o->unk_20, a, b, c, d, e, f, g);
}

void func_ov001_02225290(s32 a0, s32 a1, s32 a2, s32 a3, s32 w, u16 *p, s32 idx) {
    if (*p == 0) {
        return;
    }
    do {
        void *e = &data_ov001_0222df44->unk_000[idx * 0xc];
        u32 t = func_02101c6c(e, *p);
        if (t == 0xffff) {
            t = ((u16 *)*(void **)e)[1];
        }
        s8 *r = (s8 *)func_02101c08(e, t);
        s32 v;
        if (*(u16 *)((u8 *)e + 8) != 0) {
            v = r[0] + ((u8 *)r)[1];
        } else {
            v = r[2];
        }
        func_ov001_02225360(a0, a1 + ((w - v) >> 1), a2, a3, *p, idx);
        p++;
        a1 += w;
    } while (*p != 0);
}

void func_ov001_02225360(s32 a0, s32 a1, s32 a2, s32 a3, u16 a4, s32 idx) {
    func_02102388(a0, &data_ov001_0222df44->unk_000[idx * 0xc], a1, a2, a3, a4);
}

void func_ov001_022253a8(Unk_ov001_0222558c_Gfx *o, s32 a, s32 b, s32 c, s32 d, s32 e) {
    func_02103278(&o->unk_20, a, b, c, d, e);
}

void func_ov001_022253d4(u32 idx) {
    func_ov001_02225400(&data_ov001_0222df44->unk_718[idx]);
}

void func_ov001_02225400(Unk_ov001_0222df44_Sub *o) {
    func_ov001_02226fd0(1, o->unk_34);
    if ((void *)o == &data_ov001_0222df44->unk_718[0]) {
        void *r = func_02110728();
        volatile u16 z = 0;
        func_02115e30(z, r, (data_ov001_0222a458[0] * data_ov001_0222a458[1]) << 5);
    } else {
        void *r = func_02110728();
        volatile u16 z = 0;
        func_02115e30(z, r, (data_ov001_0222a458[2] * data_ov001_0222a458[3]) << 5);
    }
    func_ov001_02225d58(&o->unk_30);
}

void func_ov001_022254ac(u32 task, u8 *flag) {
    if (*flag == 0) {
        return;
    }
    Unk_ov001_0222df44_S *g = data_ov001_0222df44;
    if ((void *)flag == &g->unk_794) {
        u32 sz = (data_ov001_0222a458[0] * data_ov001_0222a458[1]) << 5;
        func_021145cc(g->unk_718[0].unk_30, sz);
        func_021118cc(data_ov001_0222df44->unk_718[0].unk_30, data_ov001_0222a454[0] << 5, sz);
    } else {
        u32 sz = (data_ov001_0222a458[2] * data_ov001_0222a458[3]) << 5;
        func_021145cc(g->unk_718[1].unk_30, sz);
        func_02111864(data_ov001_0222df44->unk_718[1].unk_30, data_ov001_0222a454[1] << 5, sz);
    }
    *flag = 0;
}

Unk_ov001_0222558c_Gfx *func_ov001_0222558c(u32 idx, u32 slot) {
    Unk_ov001_0222df44_Sub *o;
    u32 h;
    u32 w;
    h = data_ov001_0222a45a[idx * 2];
    w = data_ov001_0222a458[idx * 2];
    o = &data_ov001_0222df44->unk_718[idx];
    o->unk_30 = func_ov001_02225dd8((w * h) << 5, 0x20);
    if (idx == 1) {
        volatile u16 *reg = (volatile u16 *)0x4001008;
        *reg = *reg & ~0x40;
        *reg = (*reg & 0x43) | 0xc00;
    } else {
        volatile u16 *reg = (volatile u16 *)0x4000008;
        *reg = *reg & ~0x40;
        *reg = (*reg & 0x43) | 0xc00;
    }
    func_02102340(o, o->unk_30, w, h, 4);
    void *ent = &data_ov001_0222df44->unk_000[slot * 0xc];
    o->unk_20 = (Unk_ov001_0222558c_Gfx *)o;
    o->unk_24 = ent;
    o->unk_28 = 1;
    o->unk_2c = 1;
    void *r;
    if (idx == 1) {
        r = func_021109c8();
    } else {
        r = func_021109e8();
    }
    func_021021e8(r, w, h, 0, 0, 0x20, data_ov001_0222a454[idx], 0xf);
    func_ov001_02225238((Unk_ov001_0222558c_Gfx *)o, 0);
    o->unk_34 = func_ov001_02227094(1, (void *)func_ov001_022254ac, (u8 *)&data_ov001_0222df44->unk_794 + idx, 0xc8);
    return (Unk_ov001_0222558c_Gfx *)o;
}

void func_ov001_02225718(Unk_ov001_0222df44_Sub *o) {
    func_ov001_02226994(o->unk_30);
    func_ov001_02224cfc(data_ov001_0222df44->unk_788, o);
}

Unk_ov001_0222558c_Gfx *func_ov001_02225748(u32 mode, u32 w, u32 h, u32 a3, u32 *out, u32 slot) {
    Unk_ov001_0222558c_Gfx *e = (Unk_ov001_0222558c_Gfx *)func_ov001_02224ca0(data_ov001_0222df44->unk_788);
    e->unk_36 = w;
    e->unk_37 = h;
    s32 t;
    e->unk_30 = func_ov001_022269e0(mode, w * h, a3, &t);
    e->unk_34 = t;
    *out = (u32)func_0210211c(w, h);
    u32 tt = t;
    u32 base = mode == 1 ? 0x6600000 : 0x6400000;
    func_021022ac(e, base + (tt << 7), w, h, 4);
    e->unk_18(e, 0);
    void *ent = &data_ov001_0222df44->unk_000[slot * 0xc];
    e->unk_20 = e;
    e->unk_24 = ent;
    e->unk_28 = 1;
    e->unk_2c = 1;
    return e;
}

void func_ov001_02225828() {
    s32 i;
    for (i = 0; i < 2; i++) {
        func_ov001_02224038(data_ov001_0222df44->unk_78c[i]);
    }
    func_ov001_02224d60(data_ov001_0222df44->unk_788);
    func_ov001_02225d58(&data_ov001_0222df44);
}

void func_ov001_0222587c() {
    Unk_ov001_0222df44_S *g = (Unk_ov001_0222df44_S *)func_ov001_02225dd8(0x798, 4);
    data_ov001_0222df44 = g;
    void *pool = func_ov001_02224d84(0x20, &g->unk_000[0x18], 0x38);
    data_ov001_0222df44->unk_788 = pool;
    s32 i;
    for (i = 0; i < 2; i++) {
        void *hh = func_ov001_02224074(data_ov001_0222b88c[i], 0, 4);
        data_ov001_0222df44->unk_78c[i] = hh;
        Unk_ov001_0222df44_S *q = data_ov001_0222df44;
        func_02101ccc(&q->unk_000[i * 0xc], q->unk_78c[i]);
    }
}
}
