#include "types.h"
#include "Unk_020d8c7c.h"

struct Unk_ov004_0222b510_Grid {
    u8 *unk_00;
    u8 *unk_04;
    u8 *unk_08;
};

struct Unk_ov004_0222b45c_Cell {
    u8 pad_00[0x20];
    u8 *unk_20;
};

struct Unk_ov004_0222b45c_Res {
    u8 pad_00[8];
    u32 unk_08;
    u8 pad_0c[8];
    u32 unk_14;
    u32 unk_18;
    u32 unk_1c;
    u32 unk_20;
};

struct Unk_ov004_0222b3e8_Ent {
    u8 pad[0xc];
    u32 flags;
};

struct Unk_ov004_0222b430_Mtx {
    s32 v[12];
};

struct Unk_ov004_0222b954_Pair {
    volatile u16 a;
    volatile u16 b;
};

struct Unk_ov004_0222b9a4_Vec {
    s32 x, y, z;
};

struct Unk_02056b74 {
    u8 *unk_00;
    s8 unk_04;

    Unk_02056b74();
    ~Unk_02056b74();
    BOOL func_02056b28(u8 *hdr, const char *name);
};

struct Unk_020e45e0 {
    Unk_020e45e0();
    u32 pad[10];
};

struct Unk_ov004_0222b3a8_Mid {
    Unk_ov004_0222b3a8_Mid();
    u32 pad[(0x10f0 - 0x2c) / 4];
};

struct Unk_ov004_0222b3a8_Elem {
    ~Unk_ov004_0222b3a8_Elem();
    u32 pad_00[2];
    u32 unk_08;
    u32 pad_0c[3];
    u32 *unk_18;
    u32 pad_1c;
};

struct Unk_ov004_0222bb2c_M50 {
    ~Unk_ov004_0222bb2c_M50();
    u32 pad[0x5c / 4];
};

struct Unk_ov004_0222bb2c_M1228 {
    ~Unk_ov004_0222bb2c_M1228();
    u32 pad[0x2100 / 4];
};

struct Unk_ov004_0222bb2c_M3328 {
    ~Unk_ov004_0222bb2c_M3328();
    u32 pad[0x138 / 4];
};

struct Unk_ov004_0222bb2c_M3460 {
    ~Unk_ov004_0222bb2c_M3460();
    u32 pad[0x9c / 4];
};

struct Unk_ov004_0222bb2c_M34fc {
    ~Unk_ov004_0222bb2c_M34fc();
    u32 pad[0x24 / 4];
};

struct Unk_ov004_0222bb2c_M3534 {
    u32 pad[3];
};

extern "C" {
extern u8 data_ov004_0224e450[];
extern u8 data_ov004_0224e510[];
extern u8 data_ov004_0224e518[];
extern u8 data_ov004_0224e520[];
extern u8 data_ov004_0224e528[];
extern u8 data_ov004_022513b4[];
extern u32 data_ov004_022513b8;
extern u32 data_ov004_022513bc;
extern u8 data_021e58a8[];
extern u8 data_021dfd8c[];
extern u8 data_021f47e0[];
extern Unk_ov004_0222b510_Grid *data_021c47c4;
extern u32 data_021c620c;
extern u32 data_021ce63c;
extern void __cxa_vec_cleanup(void *p, u32 n, u32 sz, void *dtor);

s32 func_020b52f8();
s32 func_020b5328();
void *func_0206052c(void *self, s32 a);
s32 func_02060808(void *self, u16 *a, u32 b);
void func_020e8388(void *m, s32 a, s32 b, s32 c);
u32 func_02064f60();
s32 func_02055600(void *self, u32 a, u32 b);
s32 func_02054800(void *self, u32 a);
s32 func_02054720(void *self, u32 a, s32 b, s32 c, s32 d, s32 e);
s32 func_02054710(void *self);
s32 func_02055bcc(void *self, void *a, u32 b);
s32 func_02055b38(void *self, u32 a, s32 b, s32 c, s32 d);
u32 func_020554c0(void *self);
s32 func_02055a9c(void *self, u32 a);
s32 func_ov004_0222b0bc(void *self, void *a, u32 b);
s32 func_ov004_0222b168(void *self, u16 *a, void *b, s32 c);
s32 func_ov004_0222b0a4(void *self, u32 a, void *b, s32 c);
s32 func_ov004_0222aedc(void *self, u16 *a, void *b, s32 c);
void func_ov004_0222b610(void *self, u16 *a, s32 *b, u16 *c, s32 *d);
s32 func_020b50e8();
s32 func_020b530c(s32 r);
s32 func_020b533c(s32 r);
s32 func_020b51b8(s32 r);
s32 func_020b51e8(s32 r);
s32 func_020b5268(s32 r);
s32 func_020b5298(s32 r);
u16 *func_02060850(void *self, s32 *i);
u16 *func_02060834(void *self, s32 *i);
void *func_0207bf60(void *self, s32 i);
u32 func_0207e3ac(void *self);
u32 func_0207e3a0(void *self);
u16 *func_02034134(s32 r);
u16 *func_02034104(s32 r);
void *func_0203398c(void *self, s32 a, s32 b, s32 c, s32 d);
s32 func_02033914(void *self, s32 a);
void func_02033988(void *self);
void func_ov004_0222b15c(void *self);
void func_ov004_0222ac34(void *self);
void func_ov004_0222acdc(void *self);
void func_ov004_0222aed0(void *self);
void func_ov004_0222ad78(void *self);
void func_020555dc(void *self);
void func_02003c30(void *self);
void func_ov004_0222ad9c(void *self);
void func_ov004_0222acf4(void *self);
void func_ov004_0222ac54(void *self);
void func_ov004_0222a644(void *self);
void func_020547cc(void *self, s32 a);
void func_020ac40c();
void func_020abe28();
u16 func_ov004_0222a560(void *self);
void func_02106174(void *a, s32 b, u32 c);
s32 func_02054584(void *self);
void func_020547e4(void *self);
s32 func_ov004_0222ae7c(void *self);
void func_020566bc(void *self);
s32 func_ov004_02234ba8(s32 a);
void func_02003c50(void *self, u32 a);
void func_02003c70(void *self, Unk_ov004_0222b9a4_Vec *v);
void func_ov004_0222ac38(void *self);
s32 func_02056fcc(void *self, void *s);
s32 func_02057110(void *self, void *s);
void func_02055488(void *self, void *fn, void *obj);
void func_02003cbc(void *self);
void func_ov004_0222acb4(void *self);
void func_02031c10(void *self);
void func_ov004_0222ae38(void *self);
void func_ov004_0222b104(void *self);
void func_020548a0(void *self);
void func_ov004_0222aea0();
void func_ov004_0222a500();
}

class Unk_ov004_0222b3a8 {
public:
    Unk_ov004_0222b3a8();
    ~Unk_ov004_0222b3a8();

    void func_ov004_0222b330(u16 v, void *a, s32 b);
    BOOL func_ov004_0222b348(u8 *a, u32 b);
    u32 func_ov004_0222b37c();
    void func_ov004_0222b388();
    u16 *func_ov004_0222b38c();

    /* 0x0000 */ u16 unk_00;
    /* 0x0002 */ u16 unk_02;
    /* 0x0004 */ Unk_020e45e0 unk_04;
    /* 0x002c */ Unk_ov004_0222b3a8_Mid unk_2c;
    /* 0x10f0 */ u32 unk_10f0;
    /* 0x10f4 */ Unk_02056b74 unk_10f4;
    /* 0x10fc */ u32 unk_10fc;
};

class Unk_ov004_0224e488 : public Unk_020d8c7c {
public:
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_24();
    virtual ~Unk_ov004_0224e488();
    virtual void vfunc_48();
    virtual void vfunc_4c();

    void func_ov004_0222b3e8(u8 *p);
    void func_ov004_0222b430();
    void func_ov004_0222b45c();
    void func_ov004_0222b510();
    void func_ov004_0222b8a4();

    /* 0x0050 */ Unk_ov004_0222bb2c_M50 unk_50;
    /* 0x00ac */ u8 *unk_ac;
    /* 0x00b0 */ u32 unk_b0;
    /* 0x00b4 */ Unk_ov004_0222b430_Mtx unk_b4;
    /* 0x00e4 */ u32 pad_e4[(0x108 - 0xe4) / 4];
    /* 0x0108 */ Unk_ov004_0222b3a8_Elem unk_108[1];
    /* 0x0128 */ Unk_ov004_0222b3a8 unk_128;
    /* 0x1228 */ Unk_ov004_0222bb2c_M1228 unk_1228;
    /* 0x3328 */ Unk_ov004_0222bb2c_M3328 unk_3328;
    /* 0x3460 */ Unk_ov004_0222bb2c_M3460 unk_3460;
    /* 0x34fc */ Unk_ov004_0222bb2c_M34fc unk_34fc;
    /* 0x3520 */ u8 unk_3520;
    /* 0x3521 */ u8 unk_3521;
    /* 0x3522 */ u8 unk_3522;
    /* 0x3523 */ u8 unk_3523;
    /* 0x3524 */ u32 pad_3524;
    /* 0x3528 */ Unk_ov004_0222b9a4_Vec unk_3528;
    /* 0x3534 */ Unk_ov004_0222bb2c_M3534 unk_3534;
    /* 0x3540 */ s8 unk_3540;
};

extern "C" void func_ov004_0222b2fc(void *self, u16 *a, u32 b) {
    if (func_020b52f8()) {
        void *r = func_0206052c(data_021e58a8, func_020b5328());
        if (r != NULL) {
            func_02060808(r, a, b);
        }
    }
}

void Unk_ov004_0222b3a8::func_ov004_0222b330(u16 v, void *a, s32 b) {
    u16 t = v;
    func_ov004_0222b168(this, &t, a, b);
}

BOOL Unk_ov004_0222b3a8::func_ov004_0222b348(u8 *a, u32 b) {
    if (b != 0) {
        unk_10f4.func_02056b28(a, (const char *)data_ov004_0224e450);
        unk_10fc = b;
        return TRUE;
    }
    return FALSE;
}

u32 Unk_ov004_0222b3a8::func_ov004_0222b37c() {
    return unk_10f0;
}

void Unk_ov004_0222b3a8::func_ov004_0222b388() {
}

u16 *Unk_ov004_0222b3a8::func_ov004_0222b38c() {
    return &unk_02;
}

Unk_ov004_0222b3a8::~Unk_ov004_0222b3a8() {
}

Unk_ov004_0222b3a8::Unk_ov004_0222b3a8() : unk_00(0xfff1), unk_02(0xfff1) {
    unk_00 = 0xfff1;
    unk_02 = 0xfff1;
    unk_10f0 = 0;
}

void Unk_ov004_0224e488::func_ov004_0222b3e8(u8 *p) {
    u32 n = p[0x18];
    u8 *q = p + *(u32 *)(p + 8);
    u32 i;
    for (i = 0; i < n; i++) {
        u8 *a = q + 4;
        u32 off = *(u16 *)(q + 0xa);
        u8 *t = a + off;
        u32 stride = *(u16 *)t;
        u8 *e = q + *(u32 *)(t + stride * i + 4);
        Unk_ov004_0222b3e8_Ent *en = (Unk_ov004_0222b3e8_Ent *)e;
        if ((en->flags & 0xf) != 0) {
            en->flags &= ~0xf;
            en->flags |= func_02064f60();
        }
    }
}

void Unk_ov004_0224e488::func_ov004_0222b430() {
    func_020e8388(data_021f47e0, 0, 0, 0);
    unk_b4 = *(Unk_ov004_0222b430_Mtx *)data_021f47e0;
}

void Unk_ov004_0224e488::func_ov004_0222b45c() {
    Unk_ov004_0222b510_Grid *g = data_021c47c4;
    Unk_ov004_0222b45c_Cell *c;
    if (g->unk_04 > (u8 *)0 && g->unk_08 > (u8 *)0 && g->unk_00 != NULL) {
        c = (Unk_ov004_0222b45c_Cell *)g->unk_00;
    } else {
        c = NULL;
    }
    Unk_ov004_0222b45c_Res *r = (Unk_ov004_0222b45c_Res *)c->unk_20;
    func_02055600(&unk_50, r->unk_08, r->unk_20);
    if (r->unk_14 != 0) {
        if (func_02054800(&unk_50, data_021c620c)) {
            func_02054720(&unk_50, r->unk_14, 0, 0x1000, 0, 0);
            func_02054710(&unk_50);
        }
    }
    if (r->unk_1c != 0) {
        if (func_02055bcc(unk_108, unk_ac, data_021c620c)) {
            func_02055b38(unk_108, r->unk_1c, 0, 0x1000, 0);
            func_02055a9c(unk_108, func_020554c0(&unk_50));
        }
    }
}

static inline BOOL Unk_ov004_0222b510_Range(volatile u16 *p) {
    BOOL r = FALSE;
    u32 a = *p;
    u32 b = *p;
    if (b >= 0x1188 && a <= 0x11a7) {
        r = TRUE;
    }
    return r;
}

void Unk_ov004_0224e488::func_ov004_0222b510() {
    Unk_ov004_0222b510_Grid *g = data_021c47c4;
    Unk_ov004_0222b45c_Cell *c;
    if (g->unk_04 > (u8 *)0 && g->unk_08 > (u8 *)0 && g->unk_00 != NULL) {
        c = (Unk_ov004_0222b45c_Cell *)g->unk_00;
    } else {
        c = NULL;
    }
    Unk_ov004_0222b45c_Res *r = (Unk_ov004_0222b45c_Res *)c->unk_20;
    unk_128.func_ov004_0222b348(unk_ac, r->unk_20);
    func_ov004_0222b0bc(&unk_1228, unk_ac, r->unk_20);
    volatile u16 h[2];
    s32 w8;
    s32 w12;
    h[0] = 0xfff1;
    h[1] = 0xfff1;
    func_ov004_0222b610(this, (u16 *)&h[0], &w8, (u16 *)&h[1], &w12);
    if (Unk_ov004_0222b510_Range(&h[0])) {
        unk_128.func_ov004_0222b330(0x1124, unk_ac, w8);
    }
    if (Unk_ov004_0222b510_Range(&h[1])) {
        func_ov004_0222b0a4(&unk_1228, 0x1182, unk_ac, w12);
    }
    func_ov004_0222b168(&unk_128, (u16 *)&h[0], unk_ac, w8);
    func_ov004_0222aedc(&unk_1228, (u16 *)&h[1], unk_ac, w12);
}

void Unk_ov004_0224e488::func_ov004_0222b8a4() {
    u32 buf[0x44 / 4];
    s32 cnt = 0;
    s32 i;
    for (i = 0; i < 16; i++) {
        func_0203398c(buf, i, 10, 0, 0);
        if (func_02033914(buf, 0) == 0) {
            cnt++;
        }
        func_02033988(buf);
    }
    unk_3522 = cnt;
}

struct Unk_ov004_0222b610_Ent {
    u16 v;
    Unk_ov004_0222b610_Ent(u16 x) { v = x; }
    ~Unk_ov004_0222b610_Ent() {}
};

static inline BOOL Unk_ov004_0222b610_InA(u16 *p) {
    BOOL r = FALSE;
    if (*p >= 0x1100 && *p <= 0x1143) {
        r = TRUE;
    }
    return r;
}

static inline BOOL Unk_ov004_0222b610_InB(u16 *p) {
    BOOL r = FALSE;
    if (*p >= 0x1144 && *p <= 0x1187) {
        r = TRUE;
    }
    return r;
}

extern "C" void func_ov004_0222b610(void *self, u16 *a, s32 *b, u16 *c, s32 *d) {
    s32 r = func_020b50e8();
    *d = 0;
    *b = *d;
    if (func_020b530c(r)) {
        void *o = func_0206052c(data_021e58a8, func_020b533c(r));
        if (o != NULL) {
            *a = *func_02060850(o, b);
            *c = *func_02060834(o, d);
        }
    } else if (func_020b51b8(r)) {
        void *o = func_0207bf60(data_021dfd8c, func_020b51e8(r));
        if (o != NULL) {
            u32 t = func_0207e3ac(o);
            *a = t < 0x44 ? (u16)(t + 0x1100) : 0x1100;
            t = func_0207e3a0(o);
            *c = t < 0x44 ? (u16)(t + 0x1144) : 0x1144;
        }
    } else if (func_020b5268(r)) {
        s32 i = func_020b5298(r);
        u16 *p = func_02034134(r);
        if (Unk_ov004_0222b610_InA(p)) {
            *a = *p;
        } else {
            static Unk_ov004_0222b610_Ent t[6] = {
                Unk_ov004_0222b610_Ent(0x1140), Unk_ov004_0222b610_Ent(0x1141), Unk_ov004_0222b610_Ent(0x1142),
                Unk_ov004_0222b610_Ent(0x1143), Unk_ov004_0222b610_Ent(0x1143), Unk_ov004_0222b610_Ent(0x1143)
            };
            *a = t[i].v;
        }
        p = func_02034104(r);
        if (Unk_ov004_0222b610_InB(p)) {
            *c = *p;
        } else {
            static Unk_ov004_0222b610_Ent t[6] = {
                Unk_ov004_0222b610_Ent(0x1184), Unk_ov004_0222b610_Ent(0x1185), Unk_ov004_0222b610_Ent(0x1186),
                Unk_ov004_0222b610_Ent(0x1187), Unk_ov004_0222b610_Ent(0x1187), Unk_ov004_0222b610_Ent(0x1187)
            };
            *c = t[i].v;
        }
    }
}

BOOL Unk_ov004_0224e488::vfunc_0c() {
    func_ov004_0222b15c(&unk_128);
    func_ov004_0222ac34(&unk_34fc);
    func_ov004_0222acdc(&unk_3460);
    func_ov004_0222aed0(&unk_1228);
    func_ov004_0222ad78(&unk_3328);
    func_020555dc(&unk_50);
    data_ov004_022513bc = 0;
    func_02003c30(&unk_3534);
    return TRUE;
}

BOOL Unk_ov004_0224e488::vfunc_24() {
    func_020ac40c();
    func_020abe28();
    if (unk_3540 != -1) {
        Unk_ov004_0222b954_Pair t;
        t.a = func_ov004_0222a560(this);
        t.b = t.a;
        func_02106174(unk_ac, unk_3540, t.b);
    }
    func_020547cc(&unk_50, 0);
    return TRUE;
}

BOOL Unk_ov004_0224e488::vfunc_18() {
    if (func_02054584(&unk_50)) {
        func_020547e4(&unk_50);
    }
    Unk_ov004_0222b3a8_Elem *e = unk_108;
    if (func_ov004_0222ae7c(e)) {
        func_020566bc(e);
        *unk_108[0].unk_18 = unk_108[0].unk_08;
    }
    if (unk_3528.x != 0) {
        s32 id = func_ov004_02234ba8(unk_3528.x);
        if (id == 9 || id == 0x1d) {
            func_02003c50(&unk_3534, 0x4d1);
        }
    }
    Unk_ov004_0222b9a4_Vec v = unk_3528;
    func_02003c70(&unk_3534, &v);
    func_ov004_0222ac38(&unk_34fc);
    data_021ce63c = 0;
    return TRUE;
}

BOOL Unk_ov004_0224e488::vfunc_00() {
    data_ov004_022513bc = (u32)this;
    func_ov004_0222ad9c(&unk_3328);
    func_ov004_0222acf4(&unk_3460);
    func_ov004_0222ac54(&unk_34fc);
    func_ov004_0222b8a4();
    func_ov004_0222b45c();
    func_ov004_0222b3e8(unk_ac);
    func_ov004_0222b430();
    func_ov004_0222b510();
    unk_3520 = func_02056fcc(unk_ac, data_ov004_0224e510);
    unk_3521 = func_02056fcc(unk_ac, data_ov004_0224e518);
    unk_3523 = func_02056fcc(unk_ac, data_ov004_0224e520);
    unk_3540 = func_02057110(unk_ac, data_ov004_0224e528);
    func_02055488(&unk_50, (void *)func_ov004_0222a500, this);
    func_ov004_0222a644(this);
    func_02003cbc(&unk_3534);
    return TRUE;
}

Unk_ov004_0224e488::~Unk_ov004_0224e488() {
}
