// mwcc-version: 1.2/base
// ov004 TU33: .text 0x02235fd0-0x02237440 (actor 0224ebec "bug" scene object + scene objects 0224eb9c)
#include "types.h"
#include "Unk_020d8c7c.h"

// main / runtime symbols by their real names
#define func_02000c8c _ZN12Unk_02000c8cD1Ev
#define func_02002cf8 _ZN12Unk_020d5d8413func_02002cf8EPvS0_S0_S0_S0_
#define func_02003c30 _ZN12Unk_02003c3013func_02003c30Ev
#define func_02003c40 _ZN12Unk_02003c4013func_02003c40EPv
#define func_02003c50 _ZN12Unk_02003c4013func_02003c50EPv
#define func_02003c70 _ZN12Unk_02003c4013func_02003c70EP16Unk_02003a6c_Vec
#define func_02003cbc _ZN12Unk_02003c3013func_02003cbcEv
#define func_02031c10 _ZN12Unk_020d8cf4D2Ev
#define func_02031c48 _ZN12Unk_020d8cf4C1Ev
#define func_0203239c _ZN12Unk_02032238D1Ev
#define func_020323b0 _ZN12Unk_02032238C1Ev
#define func_02033914 _ZN12Unk_0203389c13func_02033914Ei
#define func_020339bc _ZN12Unk_0203398c13func_020339bcEP16Unk_0203389c_Vecii
#define func_0204e474 _ZN12Unk_0204e2f013func_0204e474Eii
#define func_02054710 _ZN12Unk_020dbd5413func_02054710Ev
#define func_02054720 _ZN12Unk_0205454c13func_02054720Eiiitt
#define func_020547a4 _ZN12Unk_020dbd5413func_020547a4Ei
#define func_020547cc _ZN12Unk_020dbd5413func_020547ccEPv
#define func_020547e4 _ZN12Unk_020dbd5413func_020547e4Ev
#define func_02054800 _ZN12Unk_020dbd5413func_02054800EPv
#define func_020548a0 _ZN12Unk_020dbd54D1Ev
#define func_020548d0 _ZN12Unk_020dbd54C1Ev
#define func_02054b14 _ZN12Unk_020dbd3413func_02054b14Ev
#define func_02054c2c _ZN12Unk_020dbd3413func_02054c2cEPvS0_
#define func_020553f8 _ZN12Unk_020dbe3413func_020553f8Ej
#define func_02055440 _ZN12Unk_020dbe3413func_02055440Ej
#define func_02088bf8 _ZN12Unk_020e0d3013func_02088bf8EPvP4Vec3iijjjhi
#define func_02088c34 _ZN12Unk_020e0d30D2Ev
#define func_02088c4c _ZN12Unk_020e0d30C1Ev
#define func_02088d38 _ZN12Unk_020e0d0813func_02088d38Ej
#define func_02089040 _ZN12Unk_020e0d0813func_02089040Ev
#define func_021355f0 __cxa_vec_cleanup
#define func_02135714 __cxa_vec_ctor

#pragma opt_loop_invariants off

struct Unk_02002f14_Node {
    void *unk_00;
    void *unk_04;
    void *unk_08;
};

struct Unk_ov004_02236320_V3 {
    s32 x, y, z;
};

struct Unk_ov004_02236320_Mtx {
    s64 v[6];
};

struct Unk_ov004_02236320_Ent {
    u8 pad_00[0x5c];
    Unk_ov004_02236320_V3 unk_5c;
    u8 pad_68[0x98 - 0x68];
    s32 unk_98;
};

struct Unk_02002cb0_Vec {
    s32 x, y, z;
};

struct Unk_ov004_02236320_O1 {
    u32 a[4];
    u8 f;
    u8 pad[3];
    u32 b[7];
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
void func_02031c48(void *p);
void func_02031c10(void *p);
extern u8 data_0213c874[];
void func_020e79a0(void *list, void *node);
}

struct Unk_ov004_02236950_Obj {
    u8 unk_00[0x9c];
    Unk_ov004_02236950_Obj() { func_02031c48(this); }
};

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

    void func_02002b84(void *out);
    void func_02002bf4(Unk_02002cb0_Vec *v);

    /* 0x50 */ Unk_02002f14_Node unk_50;
    /* 0x5c */ Unk_ov004_02236320_V3 unk_5c;
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

#define F08(o) (*(u32 *)((u8 *)(o) + 8))

// vtable 0x0224ebe4, size 0x268
class Unk_ov004_0224ebec : public Unk_020d5d84 {
public:
    Unk_ov004_0224ebec();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_24();
    virtual ~Unk_ov004_0224ebec();

    Unk_ov004_02236320_Ent *func_02236320();
    void func_0223638c(s32 dist, s32 delta);
    u8 func_022364d0();
    void func_02236630(u32 sel);
    BOOL func_02236694();
    BOOL func_022366cc();
    BOOL func_02236758();
    BOOL func_022367dc();
    BOOL func_02236838();
    void func_02236910();
    void func_02236950();
    void func_02236bb8();
    BOOL func_02236004();
    void func_022361f4();
    void func_02236244();
    BOOL func_02236cb8();
    void func_02236d9c(s32 v);
    s32 func_02236da8();

    /* 0xd4 */ s32 unk_d4;
    /* 0xd8 */ s32 unk_d8;
    /* 0xdc */ u32 unk_dc[12];
    /* 0x10c */ s32 unk_10c;
    /* 0x110 */ s32 unk_110;
    /* 0x114 */ u32 unk_114[3];
    /* 0x120 */ u8 unk_120[0x5c];
    /* 0x17c */ u32 unk_17c;
    /* 0x180 */ u8 pad_180[4];
    /* 0x184 */ Unk_ov004_02236320_Mtx unk_184;
    /* 0x1b4 */ u8 unk_1b4[0x24];
    /* 0x1d8 */ u8 unk_1d8[0x3c];
    /* 0x214 */ u8 unk_214;
    /* 0x215 */ u8 pad_215[0x228 - 0x215];
    /* 0x228 */ s16 unk_228;
    /* 0x22a */ u8 unk_22a;
    /* 0x22b */ u8 pad_22b;
    /* 0x22c */ s16 unk_22c;
    /* 0x22e */ s16 unk_22e;
    /* 0x230 */ Unk_ov004_02236320_V3 unk_230[2];
    /* 0x248 */ Unk_ov004_02236320_V3 unk_248[2];
    /* 0x260 */ s8 unk_260;
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
    virtual ~Unk_ov004_0224eb9c();
};

extern "C" {
extern Unk_020cbb18 *data_020cbb18;
extern u8 data_021e58a8[];
extern Unk_ov004_0223717c_Grid *data_021c47c4;
extern u32 data_021f482c;
extern u8 data_0213b91c[];
extern u8 data_0213b954[];
extern s16 data_02135f44[];
Unk_ov004_0224eb9c *func_ov004_02237428();
Unk_ov004_0224ebec *func_ov004_0223740c();

BOOL func_020b52f8();
s32 func_020b5328();
void func_02054c2c(void *p, u32 a, void *b);
void *func_020e8698(u32 a, u32 b);
void func_020ed1e4(void *a, void *b);
void func_02054800(void *p, void *q);
void *func_020641d8(const char *p);
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
void *func_02081708(u32 i);
BOOL func_0204e474(void *g, s32 x, s32 y);
u16 *func_0204ebd8(void *g, s32 hx, s32 hy, s32 lx, s32 ly, u32 layer);
void func_0204ed8c(void *p, s32 x, s32 y);
void *func_0204b25c(void *p);
BOOL func_0204b2d4();
s32 func_02063b8c(s32 n);
void *func_02095204(u32 a);
s32 func_020e9650(void *a, void *b);
void func_020ed188(void *p);
void *func_02002cf8(u32 a, u32 b, void *c, void *d, void *e);
void func_0209cf18(void *p);
s32 func_020339bc(void *o, void *v, s32 a, s32 b);
void func_02033988(void *o);
s32 func_02033914(void *o, s32 a);
void func_020309d4(void *a, void *b, void *c, s32 d, u32 e, void *f, u32 g);
s32 func_01ffcb0c(s32 a, s32 b);
s32 FX_Div(s32 a, s32 b);
s32 func_02031908(void *p, s32 a, s32 b, s32 c, void *d, s32 e, s32 f);
s32 func_020318cc(void *p);
void func_02003c30(void *p);
void func_02003c40(void *p, u32 id);
void func_02003c50(void *p, u32 id);
s32 func_02003c70(void *p, void *v);
void func_02054b14(void *p);
void func_02055440(void *p, s32 a);
void NNSi_G3dModifyPolygonAttrMask(u32 a, u32 b, u32 c);
void func_020553f8(void *p, u32 v);
void func_020547cc(void *p, u32 v);
void func_020547e4(void *p);
void func_020547a4(void *p);
void func_020abc10(void *p, s32 a, s32 b, s32 c);
BOOL func_02088d38(void *p, u32 mask);
u32 func_0203ef38(void *a, void *b);
void func_020902b0(u32 a, void *v, s32 b, s32 c);
s32 func_02002bdc(void *a, void *b);
s32 func_02088bf8(void *a, void *b, void *c, u32 d, u32 e, u32 f, u32 g, u32 h, u32 i, u32 j);
s32 func_02089040(void *a);

void func_ov004_02236db4(void *self);
BOOL func_ov004_02236fb8(void *self);
BOOL func_ov004_02236fe0(void *owner);
}

struct Unk_ov004_0224eb5c_Entry {
    void *(*factory)();
    u16 unk_04;
    u16 unk_06;
};

struct Unk_ov004_0224eb7c_Entry {
    void *(*factory)();
    u16 unk_04;
    u16 unk_06;
    u32 unk_08;
    u32 unk_0c;
    u32 unk_10;
    u32 unk_14;
};

extern "C" Unk_ov004_0224eb5c_Entry data_ov004_0224eb5c;
extern "C" char data_ov004_0224eb64[0x18];
extern "C" Unk_ov004_0224eb7c_Entry data_ov004_0224eb7c;
extern "C" s8 data_ov004_022523c4;
extern "C" volatile u8 data_ov004_022523c8;
extern "C" void *data_ov004_022523d0;
extern "C" Unk_ov004_02236320_Ent *data_ov004_022523d4;
extern "C" volatile u8 data_ov004_022523cc;
extern "C" Unk_ov004_0224ebec *data_ov004_022523d8[3];

extern "C" Unk_ov004_0224eb9c *func_ov004_02237428() {
    return new Unk_ov004_0224eb9c();
}

extern "C" Unk_ov004_0224ebec *func_ov004_0223740c() {
    return new Unk_ov004_0224ebec();
}

Unk_ov004_0224eb9c::Unk_ov004_0224eb9c() {
}

Unk_ov004_0224eb9c::~Unk_ov004_0224eb9c() {
}

BOOL Unk_ov004_0224eb9c::vfunc_0c() {
    if (!func_020b52f8() || data_020cbb18->func_02072e44()) return TRUE;
    ((Unk_0206022c *)data_021e58a8)->func_020603b0(data_ov004_022523cc);
    data_ov004_022523d0 = 0;
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

BOOL Unk_ov004_0224eb9c::vfunc_00() {
    if (!func_020b52f8() || data_020cbb18->func_02072e44()) return TRUE;
    data_ov004_022523d0 = this;
    if (!func_ov004_02236fb8(this)) return TRUE;
    func_ov004_02236fe0(this);
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

extern "C" BOOL func_ov004_02236fe0(void *owner) {
    s32 x2;
    s32 y2;
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
            func_0204ed8c(&loc, x2, y2);
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

extern "C" BOOL func_ov004_02236fb8(void *self) {
    data_ov004_022523cc = ((Unk_0206022c *)data_021e58a8)->func_020603bc();
    if (data_ov004_022523cc != 0) return TRUE;
    return FALSE;
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

Unk_ov004_0224ebec::~Unk_ov004_0224ebec() {
    func_021355f0(unk_248, 2, 12, (void *)func_02000c8c);
    func_021355f0(unk_230, 2, 12, (void *)func_02000c8c);
    func_02088c34(unk_1d8);
    func_020548a0(unk_120);
    func_0203239c(unk_dc);
}

extern "C" void func_ov004_02236db4(void *) {
    u8 i;
    for (i = 0; i < 8; i++) {
        void *r = func_02081708(i);
        if (r) data_ov004_022523d4 = (Unk_ov004_02236320_Ent *)r;
    }
}

s32 Unk_ov004_0224ebec::func_02236da8() {
    return unk_264;
}

void Unk_ov004_0224ebec::func_02236d9c(s32 v) {
    unk_264 = v;
}

BOOL Unk_ov004_0224ebec::func_02236cb8() {
    func_02054c2c(unk_120, 0x474f4b49, data_ov004_0224eb64);
    void *h = func_020e8698(0x5000, data_021f482c);
    func_020ed1e4(this, h);
    func_02054800(unk_120, 0);
    void *t = func_020641d8("/insect/51/bug52.nsbva");
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

void Unk_ov004_0224ebec::func_02236bb8() {
    Unk_ov004_02236320_V3 v;
    if (unk_10c != 2) {
        func_02236950();
    }
    switch (unk_10c) {
    case 0:
        func_02236244();
        break;
    case 1:
        unk_98 = unk_d4;
        if (unk_22c-- > 0) {
            break;
        }
        if (unk_22a != 0) {
            break;
        }
        unk_10c = 0;
        unk_22c = (func_02063b8c(10) + 3) * 20;
        break;
    case 2:
        func_020902b0(0x50, &unk_5c, 0, 0);
        F08(this) = F08(this) - 1;
        unk_110 = 2;
        func_02236630(2);
        break;
    case 3:
        if (func_02063b8c(100) > 0x32) {
            unk_10c = 0;
            unk_22c = (func_02063b8c(10) + 3) * 20;
        } else {
            unk_10c = 1;
            unk_22c = (func_02063b8c(4) + 3) * 20;
        }
        break;
    }
    Unk_ov004_02236320_V3 *pv = &unk_5c;
    v.x = unk_5c.x;
    v.y = pv->y;
    v.z = pv->z;
    func_02003c70(unk_114, &v);
}

void Unk_ov004_0224ebec::func_02236950() {
    s32 ang;
    Unk_ov004_02236320_V3 *p;
    Unk_ov004_02236950_Obj o0;
    Unk_ov004_02236950_Obj o1;
    Unk_ov004_02236950_Obj o2;
    Unk_ov004_02236950_Obj o3;
    u8 fr[4];
    u8 fm[4];
    Unk_ov004_02236320_V3 v[4];
    s32 z1;
    s32 z2;
    u32 n;
    u8 i;
    s32 t;
    p = (Unk_ov004_02236320_V3 *)this;
    p = (Unk_ov004_02236320_V3 *)((u8 *)p + 0x5c);
    n = 1;
    ang = unk_8e;
    t = FX_Div(0x1000, 0x2000);
    switch (func_020b5328()) {
    case 1:
    case 4:
        v[0].x = func_01ffcb0c(0x20000, t);
        v[0].z = func_01ffcb0c(0x39000, t);
        fm[0] = n;
        break;
    case 2:
        v[0].x = func_01ffcb0c(0x13000, t);
        v[0].z = func_01ffcb0c(0x35000, t);
        fm[0] = 0;
        break;
    case 3:
        v[0].x = func_01ffcb0c(0x2c000, t);
        v[0].z = func_01ffcb0c(0x37000, t);
        fm[0] = 0;
        break;
    case 0:
        n = 4;
        v[0].x = func_01ffcb0c(0xf000, t);
        v[0].z = func_01ffcb0c(0x34000, t);
        fm[0] = 0;
        v[1].x = func_01ffcb0c(0x31000, t);
        v[1].z = func_01ffcb0c(0x34000, t);
        fm[1] = 0;
        v[2].x = func_01ffcb0c(0x20000, t);
        v[2].z = func_01ffcb0c(0x39000, t);
        fm[2] = 1;
        v[3].x = func_01ffcb0c(0x20000, t);
        v[3].z = func_01ffcb0c(0x17000, t);
        fm[3] = 1;
        break;
    }
    z1 = 0;
    z2 = z1;
    for (i = 0; i < n; i++) {
        if (fm[i] != 0) {
            s32 a = func_01ffcb0c(0x4000, 0x1000);
            s32 b = func_01ffcb0c(0xa000, 0x1000);
            fr[i] = func_02031908((u8 *)&o0 + i * 0x9c, a, 0x1000, b, &v[i], z2, z2);
        } else {
            s32 a = func_01ffcb0c(0x4000, 0x1000);
            s32 b = func_01ffcb0c(0xa000, 0x1000);
            fr[i] = func_02031908((u8 *)&o0 + i * 0x9c, 0x1000, a, b, &v[i], z1, z1);
        }
    }
    if (unk_10c != 0) {
        func_02236004();
    }
    func_02002bf4((Unk_02002cb0_Vec *)&unk_1d8);
    func_020309d4(&unk_dc, p, &unk_68, ang, 0x666, this, 0xf);
    for (i = 0; i < n; i++) {
        if (fr[i] != 0) {
            func_020318cc((u8 *)&o0 + i * 0x9c);
        }
    }
    func_02031c10(&o3);
    func_02031c10(&o2);
    func_02031c10(&o1);
    func_02031c10(&o0);
}

void Unk_ov004_0224ebec::func_02236910() {
    Unk_ov004_02236320_V3 v;
    unk_98 = unk_d4;
    func_02236950();
    unk_5c.y = unk_6c;
    Unk_ov004_02236320_V3 *pv = &unk_5c;
    v.x = unk_5c.x;
    v.y = pv->y;
    v.z = pv->z;
    func_02003c70(unk_114, &v);
}

BOOL Unk_ov004_0224ebec::func_02236838() {
    u32 t;
    unk_263 = 0;
    t = F08(this);
    if (t >= 0x1f) {
        if (unk_110 == 1) {
            if (data_ov004_022523d4 == NULL) {
                func_ov004_02236db4(this);
            }
            func_02236758();
            func_022361f4();
            func_02236bb8();
            func_022367dc();
            if (unk_22a != 0) {
                func_020547e4(unk_120);
            }
        } else {
            F08(this) = t - 1;
        }
    } else {
        if (unk_110 == 1) {
            F08(this) = t + 2;
            func_02236910();
        } else {
            F08(this) = t - 1;
        }
    }
    if (F08(this) != 0) {
        Unk_ov004_02236320_Mtx buf;
        unk_d0 = func_0203ef38(&unk_c4, &unk_5c);
        func_02002b84(&buf);
        unk_184 = buf;
    } else {
        func_02236694();
    }
    if (unk_263 == 0) {
        func_02236d9c(0);
    }
    return TRUE;
}

BOOL Unk_ov004_0224ebec::func_022367dc() {
    if (unk_5c.y >= 0xc00) {
        unk_5c.y = unk_6c;
        if ((unk_dc[1] & 1) != 0) {
            u8 buf[0x40];
            unk_10c = 2;
            func_020339bc(buf, &unk_5c, 0, 0);
            unk_5c.y = func_02033914(buf, 1);
            func_02033988(buf);
            return TRUE;
        }
    }
    return FALSE;
}

BOOL Unk_ov004_0224ebec::func_02236758() {
    Unk_ov004_02236320_Ent *pl = (Unk_ov004_02236320_Ent *)func_02095204(4);
    if (unk_214 != 0) {
        if (unk_22a == 0) {
            if (pl != NULL) {
                if (pl->unk_98 > 0) {
                    if (func_02088d38(unk_1d8, 4) != 0) {
                        unk_10c = 2;
                        return TRUE;
                    }
                }
            }
            if (data_ov004_022523d4 != NULL) {
                if (data_ov004_022523d4->unk_98 > 0) {
                    if (func_02088d38(unk_1d8, 8) != 0) {
                        unk_10c = 2;
                        return TRUE;
                    }
                }
            }
        }
    }
    return FALSE;
}

BOOL Unk_ov004_0224ebec::func_022366cc() {
    if (unk_110 != 4) {
        Unk_ov004_02236320_V3 *pv = &unk_5c;
        if (F08(this) > 0x1f) {
            F08(this) = 0x1f;
        }
        func_02055440(unk_120, 3);
        NNSi_G3dModifyPolygonAttrMask(unk_17c, 1, 0x1f0000);
        func_020553f8(unk_120, (u8)F08(this));
        func_020547cc(unk_120, 0);
        if (F08(this) >= 0x1f && unk_110 == 1) {
            func_020abc10(pv, 0x400, 0x4000, 0x1000);
        }
    }
    return TRUE;
}

BOOL Unk_ov004_0224ebec::func_02236694() {
    func_02054b14(unk_120);
    unk_110 = 4;
    F08(this) = 0xffff;
    func_02003c30(unk_114);
    return TRUE;
}

void Unk_ov004_0224ebec::func_02236630(u32 sel) {
    switch (sel) {
    case 0:
        unk_263 = 1;
        if (func_02236da8() == 2) {
            func_02003c40(unk_114, 0x1d2);
        } else {
            func_02236d9c(1);
        }
        break;
    case 1:
        func_02003c50(unk_114, 0x1d3);
        break;
    default:
        func_02003c50(unk_114, 0x1d4);
        break;
    }
}

u8 Unk_ov004_0224ebec::func_022364d0() {
    u8 r6 = 0;
    Unk_ov004_02236320_V3 *r4r = &unk_230[0];
    Unk_ov004_02236320_O1 o1;
    u32 o2[16];
    u32 o3[16];
    volatile s32 t1;
    s16 t2;
    s16 t1v;
    s16 ang;
    func_020323b0(&o1);
    func_020339bc(o2, r4r, r6, r6);
    ang = unk_8e;
    if (unk_248[0].x == 0 || unk_248[0].z == 0) {
        unk_248[0].x = unk_230[0].x;
        unk_248[0].y = unk_230[0].y;
        unk_248[0].z = unk_230[0].z;
    }
    func_020309d4(&o1, r4r, &unk_248[0], ang, 0x19a, this, 0xf);
    t1 = (s16)(u16)((Unk_ov004_02236320_O1 *)(u32)&o1)->f;
    if (func_02033914(o2, 1) > 0x200 || r4r->y > 0x1000 || t1 > 0) {
        r6++;
    }
    func_020339bc(o3, r4r + 1, 0, 0);
    if (unk_248[1].x == 0 || unk_248[1].z == 0) {
        unk_248[1].x = unk_230[1].x;
        unk_248[1].y = unk_230[1].y;
        unk_248[1].z = unk_230[1].z;
    }
    func_020309d4(&o1, r4r + 1, &unk_248[1], ang, 0x19a, this, 0xf);
    t2 = (s16)(u16)((Unk_ov004_02236320_O1 *)(u32)&o1)->f;
    if (func_02033914(o3, 1) > 0x200 || r4r[1].y > 0x1000 || t2 > 0) {
        r6 += 2;
    }
    func_02033988(o3);
    func_02033988(o2);
    func_0203239c(&o1);
    return r6;
}

void Unk_ov004_0224ebec::func_0223638c(s32 dist, s32 delta) {
    Unk_ov004_02236320_V3 *pv = &unk_5c;
    s16 ang = unk_8e;
    u32 idx;
    unk_230[0].x = unk_5c.x;
    unk_230[0].y = pv->y;
    unk_230[0].z = pv->z;
    unk_230[1].x = unk_5c.x;
    unk_230[1].y = pv->y;
    unk_230[1].z = pv->z;
    unk_248[0].x = unk_230[0].x;
    unk_248[0].y = unk_230[0].y;
    unk_248[0].z = unk_230[0].z;
    unk_248[1].x = unk_230[1].x;
    unk_248[1].y = unk_230[1].y;
    unk_248[1].z = unk_230[1].z;
    idx = ((u16)(s16)(ang + delta) >> 4) * 2;
    unk_230[0].x += (dist * data_02135f44[idx]) / 100;
    unk_230[0].z += (dist * data_02135f44[idx + 1]) / 100;
    unk_230[0].y = 0x200;
    idx = ((u16)(s16)(ang - delta) >> 4) * 2;
    unk_230[1].x += (dist * data_02135f44[idx]) / 100;
    unk_230[1].z += (dist * data_02135f44[idx + 1]) / 100;
    unk_230[1].y = 0x200;
}

Unk_ov004_02236320_Ent *Unk_ov004_0224ebec::func_02236320() {
    s32 d4, d3, d2, d1;
    Unk_ov004_02236320_Ent *p;
    Unk_ov004_02236320_Ent *g;
    Unk_ov004_02236320_V3 *a;
    Unk_ov004_02236320_V3 *b;
    Unk_ov004_02236320_V3 *c;
    p = (Unk_ov004_02236320_Ent *)func_02095204(4);
    g = data_ov004_022523d4;
    if (g != NULL) {
        if (p != NULL) {
            a = &unk_5c;
            b = &p->unk_5c;
            c = &g->unk_5c;
            d1 = unk_5c.x - p->unk_5c.x;
            if (d1 < 0) d1 = -d1;
            d2 = a->z - b->z;
            if (d2 < 0) d2 = -d2;
            d3 = unk_5c.x - c->x;
            if (d3 < 0) d3 = -d3;
            d4 = a->z - c->z;
            if (d4 < 0) d4 = -d4;
            if (d1 + d2 > d3 + d4) goto retg;
            return p;
        }
        retg:
        return g;
    }
    return p;
}

void Unk_ov004_0224ebec::func_02236244() {
    u8 *self0 = (u8 *)&unk_5c;
    s32 res = 0;
    u8 i;
    s32 zero = 0;
    for (i = 0; i < 2; i++) {
        s32 o;
        if (i == 0) {
            o = (s32)func_02095204(4);
        } else {
            o = (s32)data_ov004_022523d4;
        }
        if (o != 0 && res == 0) {
            u8 *q = (u8 *)(o + 0x5c);
            unk_22c = unk_22c - 1;
            unk_98 = zero;
            if (unk_22c <= 0) {
                unk_10c = 1;
                unk_22c = (func_02063b8c(4) + 1) * 20;
                res = 1;
            } else if (*(s32 *)(o + 0x98) > 0) {
                s32 d = func_020e9650(self0, q);
                if (d < func_01ffcb0c(0x1000, 0x4000)) {
                    unk_22c = (func_02063b8c(4) + 2) * 20;
                    unk_10c = 1;
                    res = 2;
                }
            }
        }
    }
    if (res == 2) {
        Unk_ov004_02236320_Ent *t = func_02236320();
        if (t) {
            s16 *q92 = &unk_92;
            q92[1] = func_02002bdc(&t->unk_5c, self0);
            unk_8e = q92[1];
        }
    }
}

void Unk_ov004_0224ebec::func_022361f4() {
    func_02088bf8(unk_1d8, this, &unk_5c, 0x19a, 0x333, 0x81, 0xc, 0, 0xff, 0x1000);
    func_02089040(unk_1d8);
}

BOOL Unk_ov004_0224ebec::func_02236004() {
    s32 a = unk_8e;
    Unk_ov004_02236320_V3 *p6 = &unk_5c;
    s32 hit = 0;
    u8 i;
    func_0223638c(0x3c, 0xe38);
    unk_260 = func_022364d0();
    for (i = 0; i < 2; i++) {
        s32 o;
        if (i == 0) {
            o = (s32)func_02095204(4);
        } else {
            o = (s32)data_ov004_022523d4;
        }
        if (o != 0 && hit == 0) {
            Unk_ov004_02236320_V3 *q = (Unk_ov004_02236320_V3 *)(o + 0x5c);
            if (func_020e9650(p6, q) < 0x1800) {
                s32 d = func_02002bdc(p6, q);
                if ((d >= 0 && a >= 0) || (d <= 0 && a <= 0)) {
                    s32 t = d - a;
                    if (t < 0) {
                        t = -t;
                    }
                    if (t < 0x2aaa) {
                        unk_22e = unk_22e + 1;
                        unk_22a = 1;
                        hit = 1;
                        unk_98 = unk_d8;
                        func_02236630(1);
                    }
                }
            }
        }
    }
    s32 c = unk_22e;
    if (c > 0) {
        s32 k = c << 12;
        s32 r = func_01ffcb0c(0xcd, k);
        p6->y = func_01ffcb0c(0x99a - r, k);
        if (p6->y < 3) {
            p6->y = 3;
            unk_22e = 0;
            unk_22a = 0;
            func_020547a4(unk_120);
        } else {
            unk_22e = unk_22e + 1;
            func_020547e4(unk_120);
        }
    } else {
        s32 m = unk_260;
        if (m > 0) {
            if (m == 3) {
                if (unk_262 == 1 || unk_262 == 10) {
                    a = (s16)(a - 0xaaa);
                } else {
                    a = (s16)(a + 0xaaa);
                }
            } else if (m == 1 || unk_262 == 1) {
                a = (s16)(a - 0xaaa);
                unk_262 = 1;
            } else if (m == 2 || unk_262 == 2) {
                a = (s16)(a + 0xaaa);
                unk_262 = 2;
            }
        } else {
            if (data_ov004_022523c4 == 4) {
                a = (s16)(a + 0xaaa);
                data_ov004_022523c4 = -1;
            } else if (data_ov004_022523c4 == 2) {
                a = (s16)(a - 0xaaa);
            }
            data_ov004_022523c4 = data_ov004_022523c4 + 1;
            if (unk_262 < 10) {
                unk_262 = unk_262 * 10;
            }
        }
        func_02236630(m > 0 ? 0 : 0);
    }
    s16 *q92 = &unk_92;
    q92[1] = a;
    unk_8e = q92[1];
    return TRUE;
}

BOOL Unk_ov004_0224ebec::vfunc_24() {
    return func_022366cc();
}

// ---- 0224ebec methods (symbols.txt names 0x2235fd0-0x2236244 after the 0224eb9c class; renamed)

BOOL Unk_ov004_0224ebec::vfunc_00() {
    if (func_020b52f8()) {
        return func_02236cb8();
    }
    return 1;
}

BOOL Unk_ov004_0224ebec::vfunc_18() {
    return func_02236838();
}

BOOL Unk_ov004_0224ebec::vfunc_0c() {
    return func_02236694();
}

// Declarations for data defined further down (definition order sets the data layout)

extern "C" Unk_ov004_0224eb5c_Entry data_ov004_0224eb5c = {(void *(*)())func_ov004_02237428, 0xbf, 0xc2};

extern "C" char data_ov004_0224eb64[0x18] = "/insect/51/bug52.nsbmd";

extern "C" Unk_ov004_0224eb7c_Entry data_ov004_0224eb7c = {(void *(*)())func_ov004_0223740c, 0xc0, 0xc3, 2, 0x50000, 0x50000, 0x140000};

extern "C" s8 data_ov004_022523c4 = 0;

extern "C" volatile u8 data_ov004_022523c8 = 0;

extern "C" void *data_ov004_022523d0 = 0;

extern "C" Unk_ov004_02236320_Ent *data_ov004_022523d4 = 0;

extern "C" volatile u8 data_ov004_022523cc = 0;

extern "C" Unk_ov004_0224ebec *data_ov004_022523d8[3] = {0};
