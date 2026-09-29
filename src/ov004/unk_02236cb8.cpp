#include "types.h"
#include "Unk_020d8c7c.h"

struct Unk_02002f14_Node {
    void *unk_00;
    void *unk_04;
    void *unk_08;
};

extern "C" {
extern u8 data_0213c874[];
void func_020e79a0(void *list, void *node);
}

// Library actor base. Its constructor is out of line (func_02002f14) but its destructor is inline in this overlay.
class Unk_020d5d84 : public Unk_020d8c7c {
public:
    Unk_020d5d84();
    virtual BOOL vfunc_04();
    virtual void vfunc_08();
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_14();
    virtual BOOL vfunc_1c();
    virtual BOOL vfunc_20();
    virtual BOOL vfunc_28();
    virtual BOOL vfunc_2c();
    virtual ~Unk_020d5d84() { func_020e79a0(data_0213c874, &unk_50); }

    /* 0x50 */ Unk_02002f14_Node unk_50;
    /* 0x5c */ s32 unk_5c;
    /* 0x60 */ s32 unk_60;
    /* 0x64 */ s32 unk_64;
    /* 0x68 */ s32 unk_68;
    /* 0x6c */ s32 unk_6c;
    /* 0x70 */ s32 unk_70;
    /* 0x74 */ u8 unk_74[0x18];
    /* 0x8c */ s16 unk_8c;
    /* 0x8e */ s16 unk_8e;
    /* 0x90 */ s16 unk_90;
    /* 0x92 */ s16 unk_92;
    /* 0x94 */ u16 unk_94;
    /* 0x96 */ s16 unk_96;
    /* 0x98 */ s32 unk_98;
    /* 0x9c */ s32 unk_9c;
    /* 0xa0 */ s32 unk_a0;
    /* 0xa4 */ s32 unk_a4;
    /* 0xa8 */ s32 unk_a8;
    /* 0xac */ s32 unk_ac;
    /* 0xb0 */ u32 unk_b0;
    /* 0xb4 */ s32 unk_b4;
    /* 0xb8 */ s32 unk_b8;
    /* 0xbc */ s32 unk_bc;
    /* 0xc0 */ u32 unk_c0;
    /* 0xc4 */ s32 unk_c4;
    /* 0xc8 */ s32 unk_c8;
    /* 0xcc */ s32 unk_cc;
    /* 0xd0 */ u16 unk_d0;
};

// Library base of the sub-object at +0xdc of Unk_ov004_0224ebec (used only via extern "C" ctor/dtor)
struct Unk_020e0d1c_Dummy {
    u8 unk_00[0x4c];
};

struct Unk_ov004_0223717c_Grid {
    /* 0x00 */ u8 pad_00[0xc];
    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ s32 unk_10;
};

struct Unk_ov004_0223717c_Vec {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
};

struct Unk_ov004_02237440_Out {
    u8 unk_00;
    u8 unk_01;
    u8 unk_02;
    u8 unk_03;
};

struct Unk_ov004_022375b8_Ent {
    u8 unk_00;
    u8 unk_01;
    u16 unk_02;
};

struct Unk_ov004_022375b8_Rec {
    /* 0x000 */ u8 pad_00[0x18];
    /* 0x018 */ s32 unk_18;
    /* 0x01c */ s32 unk_1c;
    /* 0x020 */ u8 pad_20[4];
    /* 0x024 */ u8 unk_24[0xb0 - 0x24];
    /* 0x0b0 */ u8 unk_b0[0x168 - 0xb0];
    /* 0x168 */ u16 unk_168;
    /* 0x16a */ u8 pad_16a[0x172 - 0x16a];
    /* 0x172 */ u16 unk_172;
    /* 0x174 */ u8 pad_174[0x180 - 0x174];
    /* 0x180 */ u8 pad_180[0x192 - 0x180];
    /* 0x192 */ u16 unk_192;
    /* 0x194 */ u8 pad_194[2];
    /* 0x196 */ s8 unk_196;
    /* 0x197 */ u8 pad_197;
    /* 0x198 */ s32 unk_198;
    /* 0x19c */ u8 pad_19c[0x284 - 0x19c];
    /* 0x284 */ u16 unk_284[2];
    /* 0x288 */ u8 unk_288[0x2d4 - 0x288];
    /* 0x2d4 */ s32 unk_2d4;
};

// The library base of the actor whose ctor/dtor are func_02055cac / func_02055c38
class Unk_020dbe4c {
public:
    Unk_020dbe4c();
    virtual ~Unk_020dbe4c();
};

class Unk_ov004_0224ebec;

class Unk_020cbb18 {
public:
    BOOL func_02072e44();
};

class Unk_0206022c {
public:
    u8 func_020603bc();
    void func_020603b0(u8 v);
};

extern "C" {
extern Unk_020cbb18 *data_020cbb18;
extern u8 data_021e58a8[];
extern Unk_ov004_0223717c_Grid *data_021c47c4;
extern u32 data_021f482c;
extern u8 data_0213b91c[];
extern u8 data_0213b954[];
extern u8 data_ov004_0224eb64[];
extern u8 data_ov004_0224ec34[];
extern Unk_ov004_022375b8_Ent data_ov004_0224ecc8[];
extern volatile u8 data_ov004_022523c8;
extern volatile u8 data_ov004_022523cc;
extern void *data_ov004_022523d0;
extern void *data_ov004_022523d4;
extern Unk_ov004_0224ebec *data_ov004_022523d8[3];
extern Unk_ov004_022375b8_Rec data_ov004_022523f4[];

BOOL func_020b52f8();
void func_02054c2c(void *p, u32 a, void *b);
void *func_020e8698(u32 a, u32 b);
void func_020ed1e4(void *a, void *b);
void func_02054800(void *p, void *q);
void *func_020641d8(void *p);
void func_020e877c(void *p);
void func_020e8634();
void *func_02106788(void *p);
void *func_021067a4(void *p, u32 q);
void func_02054720(void *p, void *a, s32 b, s32 c, u16 d, u16 e);
void func_02054710(void *p);
void func_02003cbc(void *p);
void func_02088c34(void *p);
void func_020548a0(void *p);
void func_0203239c(void *p);
void func_020323b0(void *p);
void func_020548d0(void *p);
void func_02088c4c(void *p);
void func_02000c8c();
void func_02000c98();
void func_02135714(void *p, u32 n, u32 size, void *ctor, void *dtor);
void func_021355f0(void *p, u32 n, u32 size, void *dtor);
void func_02002f14();
void *func_02081708(u32 i);
u8 func_020603bc(void *p);
void func_020603b0(void *p, u32 v);
void *func_02002cf8(u32 a, u32 b, void *c, void *d, void *e);
BOOL func_02072e44(void *p);
void *func_0204b25c(void *p);
BOOL func_0204b2d4();
BOOL func_0204e474(void *g, s32 x, s32 y);
u16 *func_0204ebd8(void *g, s32 hx, s32 hy, s32 lx, s32 ly, u32 layer);
void func_0204ed8c(void *p);
u32 func_02063b8c(u32 n);
void *func_02095204(u32 a);
s32 func_020e9650(void *a, void *b);
void func_020ed188(void *p);
void func_0209cf18(void *p);
void func_0209c2d8(void *p);
void func_0209c2dc(void *p);
void func_02088bb0();
void func_02088bc8();
void func_020e8558(void *p);
void func_020546c8(void *p);
void func_020546ec(void *p);
void func_02003c30(void *p);
void func_0209c0b4(void *p);
void func_0209c224(void *p, void *q);

BOOL func_ov004_02236fb8(void *self);
BOOL func_ov004_02236fe0(void *owner);
void func_ov004_02236ee8();
void func_ov004_022373ec();
}

// vtable 0x0224ebec, size 0x268
class Unk_ov004_0224ebec : public Unk_020d5d84 {
public:
    Unk_ov004_0224ebec();
    virtual ~Unk_ov004_0224ebec();

    BOOL func_02236cb8();
    void func_02236d9c(s32 v);
    s32 func_02236da8();

    /* 0x0d4 */ s32 unk_d4;
    /* 0x0d8 */ s32 unk_d8;
    /* 0x0dc */ u8 unk_dc[0x10c - 0xdc];
    /* 0x10c */ s32 unk_10c;
    /* 0x110 */ s32 unk_110;
    /* 0x114 */ u32 unk_114[3];
    /* 0x120 */ u8 unk_120[0x1d8 - 0x120];
    /* 0x1d8 */ u8 unk_1d8[0x228 - 0x1d8];
    /* 0x228 */ s16 unk_228;
    /* 0x22a */ u8 unk_22a;
    /* 0x22b */ u8 pad_22b[0x22e - 0x22b];
    /* 0x22e */ u16 unk_22e;
    /* 0x230 */ u8 unk_230[0x18];
    /* 0x248 */ u8 unk_248[0x18];
    /* 0x260 */ u8 unk_260;
    /* 0x261 */ u8 pad_261;
    /* 0x262 */ u8 unk_262;
    /* 0x263 */ u8 unk_263;
    /* 0x264 */ s32 unk_264;
};

// vtable 0x0224eb9c, size 0x50
class Unk_ov004_0224eb9c : public Unk_020d8c7c {
public:
    Unk_ov004_0224eb9c();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_18();
    virtual ~Unk_ov004_0224eb9c() {}
};

// vtable 0x0224ec70
class Unk_ov004_0224ec70 : public Unk_020dbe4c {
public:
    Unk_ov004_0224ec70();
    virtual ~Unk_ov004_0224ec70();
};

// vtable 0x0224ec80
class Unk_ov004_0224ec80 : public Unk_020d8c7c {
public:
    Unk_ov004_0224ec80();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_24();
    virtual ~Unk_ov004_0224ec80();

    void func_022375b8(s32 idx);

    /* 0x050 */ u8 unk_50[0x130];
    /* 0x180 */ u8 unk_180[0x18];
    /* 0x198 */ s32 unk_198;
    /* 0x19c */ s32 unk_19c;
};

// ---------------------------------------------------------------------------------------------------------------------

BOOL Unk_ov004_0224ebec::func_02236cb8() {
    func_02054c2c(unk_120, 0x474f4b49, data_ov004_0224eb64);
    void *h = func_020e8698(0x5000, data_021f482c);
    func_020ed1e4(this, h);
    func_02054800(unk_120, 0);
    void *t = func_020641d8(data_ov004_0224ec34);
    func_020e877c(h);
    func_020e8634();
    void *r = func_021067a4(func_02106788(t), 0);
    func_02054720(unk_120, r, 0, 0x1000, 0, 0);
    func_02054710(unk_120);
    func_02003cbc(unk_114);
    s16 *q = &unk_92;
    q[1] = unk_8e;
    unk_228 = q[1];
    unk_9c = -819;
    unk_98 = unk_d4;
    unk_22a = 0;
    unk_263 = 0;
    unk_264 = 0;
    return TRUE;
}

extern "C" void func_ov004_02236db4() {
    u8 i;
    for (i = 0; i < 8; i++) {
        void *r = func_02081708(i);
        if (r) data_ov004_022523d4 = r;
    }
}

Unk_ov004_0224ebec::~Unk_ov004_0224ebec() {
    func_021355f0(unk_248, 2, 12, (void *)func_02000c8c);
    func_021355f0(unk_230, 2, 12, (void *)func_02000c8c);
    func_02088c34(unk_1d8);
    func_020548a0(unk_120);
    func_0203239c(unk_dc);
}

Unk_ov004_0224ebec::Unk_ov004_0224ebec() {
    volatile u32 *p = unk_114;
    unk_d4 = 0x614;
    unk_d8 = 0x6b8;
    func_020323b0(unk_dc);
    *p = (u32)data_0213b91c;
    *p = (u32)data_0213b954;
    func_020548d0(unk_120);
    func_02088c4c(unk_1d8);
    func_02135714(unk_230, 2, 12, (void *)func_02000c98, (void *)func_02000c8c);
    func_02135714(unk_248, 2, 12, (void *)func_02000c98, (void *)func_02000c8c);
    unk_110 = 1;
    unk_260 = 0;
    unk_262 = 0;
    unk_22e = 0;
    unk_10c = 3;
}

#pragma opt_loop_invariants off
extern "C" BOOL func_ov004_02236fe0(void *owner) {
    u8 cnt = 0;
    Unk_ov004_0223717c_Grid *g = data_021c47c4;
    u32 rows[32];
    s32 x;
    s32 y;
    s32 hx;
    s32 hy;
    u32 *row;
    u16 *cell;
    BOOL ok;
    u8 i;
    Unk_ov004_0223717c_Vec loc;
    u32 *row2;
    u8 k;
    s32 x2;
    s32 y2;
    u32 t;
    s32 w;
    u32 b;
    for (y = 0; y < g->unk_10; y++) {
        row = &rows[y];
        rows[y] = 0;
        x = 0;
        goto xt0;
    xl0:
        if (g == 0) goto xn0;
        if (func_0204e474(g, x, y) == 0) goto xn0;
        hx = x >> 4;
        hy = y >> 4;
        cell = func_0204ebd8(g, hx, hy, x - (hx << 4), y - (hy << 4), 0);
        if (cell == 0) goto xn0;
        if (func_0204b2d4() != 0) {
            u16 tmp = 0xfff1;
            void *a = func_0204b25c(cell);
            void *bb = func_0204b25c(&tmp);
            ok = (a == bb) ? TRUE : FALSE;
        } else {
            if (*cell == 0xfff1) ok = TRUE;
            else ok = FALSE;
        }
        if (ok) {
            cnt = (u8)(cnt + 1);
            *row = *row | (1 << x);
        }
    xn0:
        x++;
    xt0:
        if (x < g->unk_0c) goto xl0;
    }
    for (i = 0; i < 3 && data_ov004_022523c8 < data_ov004_022523cc; i++) {
        if (cnt == 0) break;
        loc.unk_00 = 0;
        loc.unk_04 = 0;
        loc.unk_08 = 0;
        t = cnt;
        cnt = (u8)(t - 1);
        k = (u8)(func_02063b8c(t) + 1);
        y2 = 0;
        goto yt1;
    yl1:
        x2 = 0;
        row2 = &rows[y2];
        w = g->unk_0c;
        goto xt1;
    xl1:
        b = *row2;
        b = b >> x2;
        b = b & 1;
        if (b) k = (u8)(k - 1);
        if (k == 0) {
            *row2 -= 1 << x2;
            func_0204ed8c(&loc);
            loc.unk_04 = 0x200;
            y2 = g->unk_10;
            goto yn1;
        }
        x2++;
    xt1:
        if (x2 < w) goto xl1;
    yn1:
        y2++;
    yt1:
        if (y2 < g->unk_10) goto yl1;
        data_ov004_022523d8[i] = (Unk_ov004_0224ebec *)func_02002cf8(0xc0, 0x1f, &loc, 0, owner);
        data_ov004_022523c8 = data_ov004_022523c8 + 1;
    }
    return TRUE;
}

extern "C" BOOL func_ov004_0223717c(u32 a, u32 b) {
    BOOL r = FALSE;
    if (data_020cbb18->func_02072e44()) return r;
    u32 c = data_ov004_022523c8;
    if (c < 3) {
        s32 d = data_ov004_022523cc - c;
        if (d > 0) {
            s32 i;
            for (i = 0; i < 3; i++) {
                Unk_ov004_0224ebec **s = &data_ov004_022523d8[i];
                if (*s == 0) {
                    *s = (Unk_ov004_0224ebec *)func_02002cf8(0xc0, 0, (void *)a, (void *)b, data_ov004_022523d0);
                    data_ov004_022523c8 = data_ov004_022523c8 + 1;
                    r = TRUE;
                    break;
                }
            }
        }
    }
    return r;
}

BOOL Unk_ov004_0224eb9c::vfunc_00() {
    if (!func_020b52f8() || data_020cbb18->func_02072e44()) return TRUE;
    data_ov004_022523d0 = this;
    if (!func_ov004_02236fb8(this)) return TRUE;
    func_ov004_02236fe0(this);
    return TRUE;
}

BOOL Unk_ov004_0224eb9c::vfunc_18() {
    if (!func_020b52f8() || data_020cbb18->func_02072e44()) return TRUE;
    u8 mask = 0;
    s8 last = 0;
    s32 i = 0;
    for (i = 0; i < 3; i++) {
        Unk_ov004_0224ebec **s = &data_ov004_022523d8[i];
        if (*s != 0) {
            if (*(s32 *)((u8 *)data_ov004_022523d8[i] + 8) == 0xffff) {
                *(s32 *)((u8 *)*s + 8) = 0;
                (*s)->func_02236d9c(0);
                func_020ed188(*s);
                *s = 0;
                u32 c = data_ov004_022523c8;
                if (c != 0) {
                    data_ov004_022523c8 = c - 1;
                    data_ov004_022523cc = data_ov004_022523cc - 1;
                }
            } else if (data_ov004_022523d8[i]->func_02236da8() == 1) {
                mask = mask | (1 << i);
                last = last - 1;
            } else if ((*s)->func_02236da8() == 2) {
                mask = 0xff;
            }
        }
    }
    if (mask != 0xff && mask != 0) {
        void *p = func_02095204(4);
        s32 best = 0xfffffff;
        if (p != 0) {
            void *q = (u8 *)p + 0x5c;
            for (i = 0; i < 3; i++) {
                Unk_ov004_0224ebec *o = data_ov004_022523d8[i];
                if (o != 0 && ((mask >> i) & 1) != 0) {
                    if (last == -1) {
                        last = (s8)i;
                        break;
                    }
                    s32 d = func_020e9650(q, (u8 *)o + 0x5c);
                    if (best > d) {
                        best = d;
                        last = (s8)i;
                    }
                }
            }
        }
        data_ov004_022523d8[last]->func_02236d9c(2);
    }
    return TRUE;
}

BOOL Unk_ov004_0224eb9c::vfunc_0c() {
    if (!func_020b52f8() || data_020cbb18->func_02072e44()) return TRUE;
    ((Unk_0206022c *)data_021e58a8)->func_020603b0(data_ov004_022523cc);
    data_ov004_022523d0 = 0;
    return TRUE;
}

extern "C" Unk_ov004_0224ebec *func_ov004_0223740c() {
    return new Unk_ov004_0224ebec();
}

extern "C" Unk_ov004_0224eb9c *func_ov004_02237428() {
    return new Unk_ov004_0224eb9c();
}

extern "C" u32 func_ov004_02237440() {
    Unk_ov004_02237440_Out o;
    func_0209cf18(&o);
    u32 v = o.unk_01;
    if (v >= 4 && v <= 7) return 2;
    if (v >= 8 && v <= 0xf) return 4;
    if (v == 0x10) return 8;
    if ((u8)(v + 0xef) <= 1) return 0x10;
    if (v >= 0x13 && v <= 0x16) return 0x20;
    return 1;
}

Unk_ov004_0224eb9c::Unk_ov004_0224eb9c() {
}

Unk_ov004_0224ec70::~Unk_ov004_0224ec70() {
}

Unk_ov004_0224ec70::Unk_ov004_0224ec70() {
}

Unk_ov004_0224ec80::~Unk_ov004_0224ec80() {
    func_0209c2d8(unk_180);
    func_021355f0(unk_50, 4, 0x4c, (void *)func_02088bb0);
}

Unk_ov004_0224ec80::Unk_ov004_0224ec80() {
    func_02135714(unk_50, 4, 0x4c, (void *)func_02088bc8, (void *)func_02088bb0);
    func_0209c2dc(unk_180);
}

void Unk_ov004_0224ec80::func_022375b8(s32 idx) {
    if (idx >= 0 && idx < 0x20) {
        Unk_ov004_022375b8_Rec *r = &data_ov004_022523f4[idx];
        s32 t = r->unk_196;
        if (t == 0x38) {
            func_020e8558((void *)unk_19c);
            unk_19c = 0;
        } else if (t == 0x23) {
            func_020e8558((void *)unk_198);
            unk_198 = 0;
        }
        if (data_ov004_0224ecc8[t].unk_00 != 0) {
            func_020546c8(r->unk_b0);
        } else {
            func_020546ec(r->unk_b0);
        }
        r->unk_18 = 0;
        r->unk_1c = 0;
        func_02003c30(r->unk_24);
        r->unk_196 = -1;
        r->unk_192 = 0;
        r->unk_198 = 0;
        r->unk_168 = 0;
        r->unk_172 = 0x19;
        func_0209c0b4(r->unk_288);
        func_0209c224(unk_180, r->unk_284);
        r->unk_2d4 = 0;
    }
}

void Unk_ov004_0224ebec::func_02236d9c(s32 v) {
    unk_264 = v;
}

s32 Unk_ov004_0224ebec::func_02236da8() {
    return unk_264;
}

extern "C" BOOL func_ov004_02236fb8(void *self) {
    data_ov004_022523cc = func_020603bc(data_021e58a8);
    if (data_ov004_022523cc != 0) return TRUE;
    return FALSE;
}
