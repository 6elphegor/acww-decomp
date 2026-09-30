// mwcc-flags: -O4,p
#include "types.h"

struct Unk_ov001_0222df2c {
    u8 pad_000[0x204];
    u32 unk_204;
    u8 pad_208[0x648 - 0x208];
    u16 unk_648;
    u16 unk_64a;
    u8 unk_64c[0xa50 - 0x64c];
    u8 unk_a50[0x40];
    u8 unk_a90;
    u8 unk_a91;
    u8 unk_a92;
    u8 unk_a93;
    u8 pad_a94[4];
    u32 unk_a98;
    u32 unk_a9c;
    u8 pad_aa0[4];
    u32 unk_aa4;
    u8 pad_aa8[4];
    u8 unk_aac;
    u8 pad_aad[7];
    u32 unk_ab4;
    u32 unk_ab8;
    u32 unk_abc;
    u32 unk_ac0;
    u32 unk_ac4;
    u32 unk_ac8;
    u8 unk_acc;
    u8 pad_acd[0x33];
    u8 unk_b00[1];
};

struct Unk_ov001_0222df30_Obj {
    u8 pad[0x28];
};

struct Unk_ov001_0222df30 {
    void *unk_00;
    u8 unk_04[0x80];
    void *unk_84;
    u8 unk_88[0x5c];
    u16 unk_e4;
};

struct Unk_ov001_02224074_Obj {
    u8 pad_00[0x24];
    u32 unk_24;
    u32 unk_28;
    u8 pad_2c[0x1c];
};

struct Unk_ov001_022242e8_Obj {
    u8 pad_00[0x48];
};

struct Unk_ov001_022242e8_Obj2 {
    u8 pad_00[0x80];
};

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

extern "C" {
extern Unk_ov001_0222df2c *data_ov001_0222df2c;
extern Unk_ov001_0222df30 *data_ov001_0222df30;
extern u8 data_ov001_0222b854[];
extern u8 data_ov001_0222b858[];
extern u8 data_ov001_0222b860[];
extern u8 data_ov001_0222b878[];
extern u8 data_ov001_0222a450[];

void func_ov001_02221278();
void func_ov001_02221e48();
void func_ov001_02222334(u32);
void func_ov001_02221854(void *);
void func_ov001_02223100();
u32 func_ov001_0221e014();
void func_ov001_02225d58(void *);
void func_ov001_02224cfc(void *, void *);
void func_ov001_02224ca0(void *);
void *func_ov001_02225dd8(s32, s32);
void *func_ov001_02225db0(s32, s32);
void *func_ov001_02224d84(s32, void *, s32);

u64 func_01ffa6b4();
u32 func_0211f410();
void func_02116048(u32, void *, s32);
void func_02124c40();
void func_020fefb0(void *);
s32 func_0212a438(void *);
s32 func_02128930(void *, void *, s32);
void func_02119d78(void *);
s32 func_02119a28(void *, void *);
void func_0206d49c();
void func_021198b4(void *, void *, s32);
void func_021199e0(void *);
void func_02116190(void *, void *);
s32 func_02118be8(void *, s32);
void func_0211e130(s32, void *, s32, s32, void *, void *, s32);
void func_0211d6c0(u32);
void func_0211d6a0(u32);
void func_021197f4(void *);
void func_02118d94(void *);
void func_02118f58(void *);
void func_02119098(void *);
void func_02112428(u32);
u32 func_021123d0();
void func_02119240(void *);
s32 func_02119130(void *, void *, s32);
void func_02118c68(void *, void *, s32);
s32 func_02119020(void *, u32, u32, u32, u32, u32, void *, void *);
void *func_02118e2c(void *, void *, void *);
void func_021130d0(void *, void *, void *);

#pragma thumb off

BOOL func_ov001_02223c60() {
    Unk_ov001_0222df2c *s = data_ov001_0222df2c;
    if (s->unk_a90 != 5) {
        return FALSE;
    }
    s->unk_a90 = 6;
    func_ov001_02221278();
    return TRUE;
}

void func_ov001_02223d10();

BOOL func_ov001_02223ca8() {
    u32 st = data_ov001_0222df2c->unk_a90;
    if (st == 1 || st == 0x1a || st == 0x1d) {
        func_ov001_02223d10();
        func_ov001_02221e48();
        data_ov001_0222df2c->unk_a90 = 2;
        return TRUE;
    }
    return FALSE;
}

void func_ov001_02223d10() {
    func_ov001_02222334(data_ov001_0222df2c->unk_ac8);
    data_ov001_0222df2c->unk_a90 = 1;
    data_ov001_0222df2c->unk_648 = func_0211f410();
    func_02116048(data_ov001_0222df2c->unk_aa4, data_ov001_0222df2c->unk_a50, 0x40);
    data_ov001_0222df2c->unk_a93 = 0;
    data_ov001_0222df2c->unk_204 = 0;
    data_ov001_0222df2c->unk_648 = data_ov001_0222df2c->unk_648 + 1;
}

BOOL func_ov001_02223d9c() {
    Unk_ov001_0222df2c *s = data_ov001_0222df2c;
    u32 st = s->unk_a90;
    if (st == 1 || st == 0x14 || st == 0x17 || st == 0x1a || st == 0x1d) {
        s->unk_a90 = 0x22;
        data_ov001_0222df2c->unk_aac = 0;
        return TRUE;
    }
    if (st == 4 || st == 5 || st == 6 || st == 0xd) {
        if (st == 4) {
            if (s->unk_a98 < 6) {
                return FALSE;
            }
        }
        func_02124c40();
        data_ov001_0222df2c->unk_a90 = 0x10;
        data_ov001_0222df2c->unk_aac = 2;
        return TRUE;
    }
    if ((u8)(st + 0xf7) <= 1) {
        s->unk_a90 = 0x20;
        return TRUE;
    }
    if (st == 0xc) {
        s->unk_a90 = 0x22;
        return TRUE;
    }
    BOOL r = FALSE;
    if (st == 2) {
        r = FALSE;
    } else {
        r = st - st;
    }
    return r;
}

void func_ov001_02223ecc(Unk_ov001_0222df2c *self, u32 *a) {
    data_ov001_0222df2c = self;
    func_ov001_02221854(self->unk_b00);
    data_ov001_0222df2c->unk_648 = 0;
    data_ov001_0222df2c->unk_64a = 0;
    data_ov001_0222df2c->unk_a90 = 1;
    data_ov001_0222df2c->unk_a91 = 1;
    data_ov001_0222df2c->unk_a9c = 0;
    func_ov001_02223100();
    data_ov001_0222df2c->unk_ab4 = a[0];
    data_ov001_0222df2c->unk_ab8 = a[1];
    data_ov001_0222df2c->unk_abc = a[2];
    data_ov001_0222df2c->unk_ac0 = a[3];
    data_ov001_0222df2c->unk_ac4 = a[4];
    data_ov001_0222df2c->unk_ac8 = a[5];
    data_ov001_0222df2c->unk_a92 = *(u8 *)&a[6];
    data_ov001_0222df2c->unk_acc = 2;
    func_01ffa6b4();
    func_020fefb0(data_ov001_0222df2c->unk_64c);
    func_01ffa6b4();
    data_ov001_0222df2c->unk_aa4 = func_ov001_0221e014();
}

BOOL func_ov001_02223fc4(void *a, void *b, s32 n) {
    s32 la = func_0212a438(a);
    s32 lb = func_0212a438(b);
    if (la < n || lb < n) {
        return FALSE;
    }
    return func_02128930((u8 *)a + (la - n), (u8 *)b + (lb - n), n) == 0;
}

void func_ov001_02224038(void *p, ...) {
    func_ov001_02225d58(&p);
    func_ov001_02224cfc(data_ov001_0222df30->unk_84, p);
}

void *func_ov001_02224074(void *name, u32 *outSize, s32 c) {
    void *p;
    Unk_ov001_02224074_Obj o;
    s32 r6;
    u32 n;
    func_ov001_02224ca0(data_ov001_0222df30->unk_84);
    func_02119d78(&o);
    if (func_02119a28(&o, name) == 0) {
        func_0206d49c();
    }
    n = o.unk_28 - o.unk_24;
    if (outSize != 0) {
        *outSize = n;
    }
    if (func_ov001_02223fc4(name, data_ov001_0222b854, 2) != 0) {
        r6 = -4;
    } else {
        r6 = c;
    }
    p = func_ov001_02225dd8(n, r6);
    func_021198b4(&o, p, n);
    func_021199e0(&o);
    if (r6 > 0) {
        return p;
    }
    u32 v = *(u32 *)p >> 8;
    if (outSize != 0) {
        *outSize = v;
    }
    void *q = func_ov001_02225dd8(v, c);
    func_02116190(p, q);
    func_ov001_02225d58(&p);
    return q;
}

BOOL func_ov001_02224170() {
    return TRUE;
}

s32 func_ov001_02224178(void *a) {
    return func_02118be8(a, 0);
}

s32 func_ov001_02224188(u8 *self, s32 x, s32 y, s32 z) {
    func_0211e130(-1, (void *)(y + *(s32 *)(self + 0x28)), x, z, (void *)func_ov001_02224178, self, 1);
    return 6;
}

s32 func_ov001_022241d0(void *self, s32 code) {
    switch (code) {
    case 9:
        func_0211d6c0(data_ov001_0222df30->unk_e4);
        return 0;
    case 10:
        func_0211d6a0(data_ov001_0222df30->unk_e4);
        return 0;
    case 1:
        return 4;
    default:
        return 8;
    }
}

void func_ov001_02224258() {
    func_021197f4(data_ov001_0222b858);
    func_02118d94(data_ov001_0222df30->unk_88);
    func_02118f58(data_ov001_0222df30->unk_88);
    func_02119098(data_ov001_0222df30->unk_88);
    func_02112428(data_ov001_0222df30->unk_e4);
    data_ov001_0222df30->unk_e4 = 0;
    func_ov001_02225d58(data_ov001_0222df30);
    data_ov001_0222df30->unk_00 = 0;
    func_ov001_02225d58(&data_ov001_0222df30);
}

void func_ov001_022242e8() {
    u32 a[2];
    u32 b[2];
    Unk_ov001_022242e8_Obj o;
    Unk_ov001_022242e8_Obj2 o2;
    u32 r4;
    data_ov001_0222df30 = (Unk_ov001_0222df30 *)func_ov001_02225db0(0xe8, 4);
    func_02119d78(&o);
    if (func_02119a28(&o, data_ov001_0222b860) == 0) {
        func_0206d49c();
    }
    data_ov001_0222df30->unk_e4 = func_021123d0();
    r4 = *(u32 *)((u8 *)&o + 0x24);
    func_021198b4(&o, a, 8);
    func_021198b4(&o, b, 8);
    func_021199e0(&o);
    func_02119240(data_ov001_0222df30->unk_88);
    if (func_02119130(data_ov001_0222df30->unk_88, data_ov001_0222a450, 3) == 0) {
        func_0206d49c();
    }
    func_02118c68(data_ov001_0222df30->unk_88, (void *)func_ov001_022241d0, 0x602);
    if (func_02119020(data_ov001_0222df30->unk_88, r4, b[0], b[1], a[0], a[1], (void *)func_ov001_02224188, (void *)func_ov001_02224170) == 0) {
        func_0206d49c();
    }
    void *r4b = func_02118e2c(data_ov001_0222df30->unk_88, 0, 0);
    data_ov001_0222df30->unk_00 = func_ov001_02225dd8((s32)r4b, 4);
    func_02118e2c(data_ov001_0222df30->unk_88, data_ov001_0222df30->unk_00, r4b);
    data_ov001_0222df30->unk_84 = func_ov001_02224d84(0x20, data_ov001_0222df30->unk_04, 4);
    func_021130d0(&o2, data_ov001_0222b878, data_ov001_0222a450);
    func_021197f4(&o2);
}

void func_ov001_0222449c(Unk_ov001_0222449c *self, s32 idx, u32 *o1, u32 *o2) {
    Unk_ov001_0222449c_Ent *p = self->unk_08;
    *o1 = (p[idx].w0 & 0x1ff0000) >> 16;
    *o2 = p[idx].w0 & 0xff;
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

#define W0(i) (p[i].w0)
void func_ov001_02224558(Unk_ov001_0222449c *self, s32 idx, s32 x, s32 y) {
    volatile Unk_ov001_0222449c_Ent *p = self->unk_08;
    volatile u32 ox, oy, ex, ey;
    s32 i;
    if (idx >= 0) {
        u32 a = W0(idx);
        a = a & 0xfe00ff00;
        u32 b = (u8)y;
        u32 c = x & 0x1ff;
        W0(idx) = a | b | (c << 16);
    } else {
        ox = (W0(0) & 0x1ff0000) >> 16;
        oy = W0(0) & 0xff;
        W0(0) = (W0(0) & 0xfe00ff00) | (u8)y | ((x & 0x1ff) << 16);
        u32 lx = ox;
        u32 ly = oy;
        s32 dy = y - ly;
        s32 dx = x - lx;
        for (i = 1; i < self->unk_0c; i++) {
            u32 t = W0(i) & 0x1ff0000;
            ex = t >> 16;
            u32 ty = W0(i) & 0xff;
            ey = ty;
            W0(i) = (W0(i) & 0xfe00ff00) | (u8)(ty + dy) | (((dx + (t >> 16)) & 0x1ff) << 16);
        }
    }
}
#undef W0

#pragma thumb reset
}
