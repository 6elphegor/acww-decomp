// mwcc-flags: -str reuse
#include "types.h"

// Library base class (same as Unk_020d8c7c.h, but vfunc_08 takes the s32 the vtable symbol names).
class Unk_020d8c7c_Base {
public:
    static void *operator new(unsigned long size);
    static void operator delete(void *ptr);

    Unk_020d8c7c_Base();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual void vfunc_08(s32 v);
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_14();
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_1c();
    virtual BOOL vfunc_20();
    virtual BOOL vfunc_24();
    virtual BOOL vfunc_28();
    virtual BOOL vfunc_2c();
    virtual BOOL vfunc_30();
    virtual BOOL vfunc_34();
    virtual BOOL vfunc_38();
    virtual BOOL vfunc_3c();
    virtual ~Unk_020d8c7c_Base();
};

struct Unk_0201bc1c;

// Grid (unk_0204e858.cpp): cells are 0x28 bytes
struct Unk_02071a58_Grid {
    u8 *cells;
    u32 w, h;
};

struct Unk_ov072_02272234_Ent {
    const char *unk_00;
    u8 unk_04;
};

struct Unk_ov072_022715bc_Out {
    const char *unk_00;
    u8 unk_04;
};

struct Unk_ov072_02271a58_Obj {
    u32 v[2];
};

class Unk_ov072_022724c8;
class Unk_ov072_02272438;

struct Unk_ov072_022718d0_Ent {
    void (Unk_ov072_02272438::*f)();
    u8 flag;
};

struct Unk_ov072_ColorCtor {
    u8 a, b, c, d;
    Unk_ov072_ColorCtor(u8 a, u8 b, u8 c, u8 d) : a(a), b(b), c(c), d(d) {}
};

struct Unk_020aa3b8 {
    s32 func_020aa514();
};

extern "C" {
extern u8 data_021e58a6;
extern u8 data_021f4880[];
extern u32 data_020c6d1c;
extern u16 data_020c6cc8;

BOOL _ZN12Unk_0208623813func_02086244Ev(void *self);
s32 _ZN12Unk_0208623813func_02086274Ev(void *self);
void _ZN12Unk_0208623813func_02086258Ev(void *self);
void _ZN12Unk_0208623813func_02086238Ev(void *self);
BOOL func_0202e1cc(s32 a, s32 b);
void func_0203d67c(void *p);
void func_0203ffa4(s32 a);
void _ZN12Unk_0201442013func_02014ce4EPtjjj(void *p, u16 *q, s32 a, s32 b, s32 c);
void _ZN12Unk_020d771013func_02014e60EPtjjj(void *p, u16 *q, s32 a, s32 b, s32 c);
s32 _ZN12Unk_02015b8c13func_02015e48Ej(void *self, u32 a);
void _ZN12Unk_0201ad2013func_0201ad34Ei(void *self, s32 a);
s32 func_02098eb0(u16 *p);
void func_02099064(s32 a);
void func_02099014(u16 *p, s32 a);
u32 func_02063b8c(u32 n);
void _ZN12Unk_0206338013func_0206338cEii(Unk_ov072_02271a58_Obj *o, s32 a, s32 b);
void func_02063388(Unk_ov072_02271a58_Obj *o);
void func_02062f94(u16 *out, Unk_ov072_02271a58_Obj *o, s32 a, s32 b, s32 c, s32 d, s32 e);
void *func_0204da0c();
void *func_02037558(void *cell, s32 a, s32 b, s32 c);
void func_02037590(void *cell, u16 *h, s32 a, s32 b, s32 c);
BOOL _ZN12Unk_0204e2f013func_0204e440Eiiii(void *self, s32 x, s32 y, s32 z, s32 w);
void func_0204edf8(s32 *a, s32 *b, s32 c, s32 d, s32 e, s32 f);
u16 *func_0204ebd8(void *g, s32 hx, s32 hy, s32 lx, s32 ly, s32 layer);
BOOL func_0204bd14(void *p);
BOOL func_0204b08c(void *p);
void MI_CpuFill8(void *dst, s32 v, s32 n);
BOOL _ZN12Unk_020d77a413func_0201bcbcEPS_(void *p, void *q);
BOOL _ZN12Unk_02013b1013func_02014220Ev(void *self);
void _ZN12Unk_02013b1013func_020141b4Essh(void *self, u32 a, u32 b, u32 c);
void _ZN12Unk_0201985813func_020196b4Ejiiissiitt(void *self, u32 a, u32 b, u32 c, u32 s0, u32 s1, u32 s2, u32 s3, u32 s4, u32 s5, u32 s6);
void _ZN12Unk_02013b1013func_02014198Ehh(void *self, u32 a, u32 b);
void _ZN12Unk_0201a33413func_0201a6c0EhiiP17Unk_0201a334_Vec3iih(void *self, u32 a, u32 b, u32 c, u32 *d, u32 e, u32 f, u32 g);
void func_ov072_02271a58();
BOOL func_ov072_02271b70(u8 *cnt, s32 *pe, void *g);
BOOL func_ov072_02271ca4(s32 *a, s32 *b, void *g);
}

struct Unk_020660f8 {
    u32 unk_00;
    u32 unk_04;
    void func_02067a84(u8 *a, void *b);
};

class Unk_020d7714 {
public:
    Unk_020d7714();
    virtual ~Unk_020d7714();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void vfunc_10();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_1c();
    virtual void vfunc_20();
    virtual void vfunc_24();
    virtual void vfunc_28();
    virtual void vfunc_2c();
    virtual void vfunc_30();
    virtual void vfunc_34();
    virtual void vfunc_38(u32 v);
    virtual void vfunc_3c();
    virtual void vfunc_40();
    virtual void vfunc_44();
    virtual void vfunc_48();
    virtual void vfunc_50();
    virtual void vfunc_54();
    virtual void vfunc_58();
    virtual void vfunc_5c();
    virtual void vfunc_60();
    virtual void vfunc_64_alt();
    virtual void vfunc_64();
    virtual void vfunc_68();
    virtual void vfunc_6c();
    virtual void vfunc_70();
    virtual void vfunc_74();
    virtual void vfunc_78(Unk_ov072_022715bc_Out *out);
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_88();
    void func_02015958(s32 a, u32 b, s32 c, s32 d, s32 e);
    void *func_02015aac();
    void func_02015ab0(u32 p);
    Unk_020aa3b8 *func_02015a5c();
    u8 pad_04[0x1a];
    u8 unk_1e;
    u8 pad_1f[0x3c - 0x1f];
    Unk_020660f8 *unk_3c;
    u8 pad_40[0xac - 0x40];
};

class Unk_020ddcf0 : public Unk_020d7714 {
public:
    virtual void vfunc_0c();
    virtual void vfunc_10();
    virtual void vfunc_1c();
    virtual void vfunc_20();
    virtual void vfunc_24();
    virtual void vfunc_28();
    virtual void vfunc_2c();
    virtual void vfunc_30();
    virtual void vfunc_64();
    virtual void vfunc_68();
    virtual void vfunc_70();
    virtual void vfunc_74();
};

class Unk_020d7710 : public Unk_020ddcf0 {
public:
    void func_02014f38(u32 a);
    s32 func_02014f74();
    virtual void vfunc_50();
    virtual void vfunc_54();
    virtual void vfunc_58();
    virtual void vfunc_5c();
    virtual void vfunc_60();
    virtual void vfunc_64_alt();
    virtual void vfunc_88();
};

class Unk_020d8b38 : public Unk_020d7710 {
public:
    Unk_020d8b38();
    virtual ~Unk_020d8b38();
};

// Sub-object at +0x658 (vtable 0x02272438)
class Unk_ov072_02272438 : public Unk_020d8b38 {
public:
    Unk_ov072_02272438();
    virtual ~Unk_ov072_02272438();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_78(Unk_ov072_022715bc_Out *out);
    virtual void vfunc_80();
    virtual void vfunc_88();

    void func_ov072_02271714(Unk_ov072_022724c8 *owner);
    void func_ov072_02271788();
    void func_ov072_022718c0(s32 s);

    /* 0xac */ s32 unk_ac;
    /* 0xb0 */ u8 unk_b0;
    /* 0xb4 */ s32 unk_b4;
    /* 0xb8 */ Unk_ov072_022724c8 *unk_b8;
};

#define MEMBER(name, size) \
    struct name { \
        u8 unk_00[size]; \
        name(); \
        ~name(); \
    }
struct Unk_020dbd74 {
    u8 pad_00[0xa4];
    s32 unk_a4;
    u8 pad_a8[0x2a0 - 0xec - 0xa8];
    Unk_020dbd74();
    ~Unk_020dbd74();
};
MEMBER(Unk_0201ad3c, 0xc);
MEMBER(Unk_02019dd8, 0x334 - 0x2ac);
MEMBER(Unk_02016350, 0x1c);
struct Unk_0201accc {
    u8 unk_00[0x3a8 - 0x350];
    Unk_0201accc();
    ~Unk_0201accc();
};
struct Unk_0201a8bc { u8 unk_00[2]; Unk_0201a8bc(); };
struct Unk_0201ad18 {
    u8 unk_00[6];
    Unk_0201ad18();
};
struct Unk_0201a794 {
    u8 unk_00[0x418 - 0x3b0];
    Unk_0201a794();
    ~Unk_0201a794();
};
MEMBER(Unk_0201a194, 8);
MEMBER(Unk_0201a13c, 0x49c - 0x420);
MEMBER(Unk_02032238, 0x30);
struct Unk_02088d00 {
    u8 pad_00[0x1c];
    u32 unk_1c;
    u8 pad_20[0x514 - 0x4cc - 0x20];
    Unk_02088d00();
    ~Unk_02088d00();
};
struct Unk_020135e4 {
    u8 pad_00[8];
    u8 unk_08;
    u8 pad_09[2];
    u8 unk_0b;
    Unk_020135e4();
    ~Unk_020135e4();
};
struct Unk_02019858 {
    Unk_02019858();
    ~Unk_02019858();
    BOOL func_02019790();
    s32 func_020197a8();
    void func_020195c8(s32 a, s32 b, u32 c, u16 d, u16 e);
    void func_02019638(s32 a, u8 b, u16 c);
    u8 unk_00[0x618 - 0x564];
};
struct Unk_02014254 {
    Unk_02014254();
    ~Unk_02014254();
    u8 unk_00[0x28];
};
struct Unk_020e06dc { u8 unk_00[8]; Unk_020e06dc(); };

struct Unk_020f4080 {
    u8 unk_00[0x558 - 0x514];
    Unk_020f4080();
    ~Unk_020f4080();
};

class Unk_020d5d84 : public Unk_020d8c7c_Base {
public:
    virtual BOOL vfunc_14();
    virtual BOOL vfunc_20();
    virtual BOOL vfunc_28();
    virtual BOOL vfunc_2c();
};

struct Unk_020d77a4_Vec3;

class Unk_020d9670 : public Unk_020d5d84 {
public:
    Unk_020d9670();
    virtual ~Unk_020d9670();
    virtual BOOL vfunc_1c();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(s32 v);
    virtual void vfunc_50();
    virtual void vfunc_54(void *p);
    virtual void vfunc_58(void *p);
    u8 pad_04[0x58];
    s32 unk_5c, unk_60, unk_64;
    u8 pad_68[0x8e - 0x68];
    s16 unk_8e;
    u8 pad_90[4];
    s16 unk_94;
    u8 pad_96[2];
    s32 unk_98;
    u8 pad_9c[0xea - 0x9c];
};

class Unk_020d77a4 : public Unk_020d9670 {
public:
    Unk_020d77a4() : unk_ea(0xfff1) {}
    virtual ~Unk_020d77a4();
    virtual void vfunc_08(s32 v);
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_24();
    virtual BOOL vfunc_30();
    virtual void vfunc_5c(Unk_020d77a4_Vec3 *v);
    virtual void vfunc_60();
    virtual void vfunc_64();
    virtual BOOL vfunc_68();
    virtual u8 *vfunc_6c();
    virtual u8 *vfunc_70();
    virtual void vfunc_74(u32 v);
    virtual void vfunc_78();
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();
    virtual void vfunc_88();
    virtual void vfunc_8c();
    virtual void vfunc_90();
    virtual void vfunc_94();
    virtual void vfunc_98();
    virtual void vfunc_9c();
    virtual void vfunc_a0();
    virtual void vfunc_a4();
    virtual s32 vfunc_a8();

    void func_0201bc28(Unk_0201bc1c *p);
    void *func_0201bc4c(u32 v);
    u32 func_0201bc70(u32 n);

    u16 unk_ea;
    Unk_020dbd74 unk_ec;
    Unk_0201ad3c unk_2a0;
    Unk_02019dd8 unk_2ac;
    Unk_02016350 unk_334;
    Unk_0201accc unk_350;
    Unk_0201a8bc unk_3a8;
    Unk_0201ad18 unk_3aa;
    Unk_0201a794 unk_3b0;
    Unk_0201a194 unk_418;
    Unk_0201a13c unk_420;
    Unk_02032238 unk_49c;
    Unk_02088d00 unk_4cc;
    Unk_020f4080 unk_514;
    Unk_020135e4 unk_558;
    Unk_02019858 unk_564;
    Unk_02014254 unk_618;
};

class Unk_020d8bc8 : public Unk_020d77a4 {
public:
    Unk_020d8bc8() {}
    virtual ~Unk_020d8bc8();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_10();
    virtual void vfunc_74(u32 v);
    virtual void vfunc_78();
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();
    virtual s32 vfunc_a8();

    Unk_020e06dc unk_640;
    s32 unk_648;
    s32 unk_64c;
    u8 unk_650;
};

class Unk_ov072_022724c8 : public Unk_020d8bc8 {
public:
    Unk_ov072_022724c8() {}
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(s32 a);
    virtual BOOL vfunc_68();
    virtual u8 *vfunc_6c();
    virtual u8 *vfunc_70();

    BOOL func_ov072_02271964();
    BOOL func_ov072_02271968();
    BOOL func_ov072_022719d0();
    BOOL func_ov072_02271de4();
    BOOL func_ov072_02271ed8();
    BOOL func_ov072_02271f68();
    BOOL func_ov072_02271f6c();
    void func_ov072_02271fe8(s32 s);

    s32 unk_654;
    Unk_ov072_02272438 unk_658;
    u8 unk_714;
    u8 pad_715[0x718 - 0x715];
    s32 unk_718;
    s32 unk_71c;
};

struct Unk_ov072_02271fe8_Ent {
    BOOL (Unk_ov072_022724c8::*enter)();
    BOOL (Unk_ov072_022724c8::*exit)();
};

struct Unk_ov072_SceneEntry {
    Unk_ov072_022724c8 *(*factory)();
    u16 a, b;
    s32 c, d, e, f;
};

extern "C" {
extern u8 data_ov072_022723c0[12];
extern u8 data_ov072_022723cc[23];
extern u8 data_ov072_02272414[27];
extern const Unk_ov072_02272234_Ent data_ov072_02272234[8];
extern Unk_ov072_022718d0_Ent data_ov072_022723e4[2];
extern Unk_ov072_02271fe8_Ent data_ov072_02272598[4];
s32 func_ov072_02271fd8(void *self, s32 *p);
Unk_ov072_022724c8 *func_ov072_0227211c();
}

Unk_ov072_ColorCtor data_ov072_02272590(31, 20, 20, 31);
Unk_ov072_ColorCtor data_ov072_02272580(20, 20, 31, 31);
Unk_ov072_ColorCtor data_ov072_0227258c(31, 31, 20, 31);
Unk_ov072_ColorCtor data_ov072_02272594(20, 31, 20, 31);
Unk_ov072_ColorCtor data_ov072_02272584(20, 31, 31, 31);
Unk_ov072_ColorCtor data_ov072_02272588(20, 24, 24, 31);

extern "C" {
u8 data_ov072_022723c0[12] = {'s', 'p', '_', 'n', 'p', 'c', '_', 'g', 'u', 'l', 'l', 0};
u8 data_ov072_02272414[27] = {'n', 'p', 'c', '_', 's', 'p', '/', 'm', 'o', 'd', 'e', 'l', '/', 's', 'e', 'g', '_', 't', 'e', 'x', '.', 'n', 's', 'b', 't', 'x', 0};
u8 data_ov072_022723cc[23] = {'n', 'p', 'c', '_', 's', 'p', '/', 'm', 'o', 'd', 'e', 'l', '/', 's', 'e', 'g', '.', 'n', 's', 'b', 'm', 'd', 0};
}

Unk_ov072_022718d0_Ent data_ov072_022723e4[2] = {
    {NULL, 0},
    {&Unk_ov072_02272438::func_ov072_02271788, 1},
};

Unk_ov072_02271fe8_Ent data_ov072_02272598[4] = {
    {&Unk_ov072_022724c8::func_ov072_02271f6c, &Unk_ov072_022724c8::func_ov072_02271f68},
    {&Unk_ov072_022724c8::func_ov072_02271ed8, &Unk_ov072_022724c8::func_ov072_02271de4},
    {&Unk_ov072_022724c8::func_ov072_022719d0, &Unk_ov072_022724c8::func_ov072_02271968},
    {NULL, &Unk_ov072_022724c8::func_ov072_02271964},
};

extern "C" Unk_ov072_SceneEntry data_ov072_022723fc = {func_ov072_0227211c, 0x60, 0x67, 2, 0x5000, 0x5000, 0x3e800};
extern "C" {
const Unk_ov072_02272234_Ent data_ov072_02272234[8] = {
    {(const char *)data_ov072_022723c0, 0},
    {(const char *)data_ov072_022723c0, 5},
    {(const char *)data_ov072_022723c0, 0x1e},
    {(const char *)data_ov072_022723c0, 0xd},
    {(const char *)data_ov072_022723c0, 0x12},
    {(const char *)data_ov072_022723c0, 0x13},
    {(const char *)data_ov072_022723c0, 0x14},
    {(const char *)data_ov072_022723c0, 0x15},
};
}

static inline void *Unk_ov072_02271a58_Cell(Unk_02071a58_Grid *g, u32 x, u32 y) {
    if (x < g->w && y < g->h && g->cells != NULL) {
        return g->cells + (y * g->w + x) * 0x28;
    }
    return NULL;
}

static inline BOOL Unk_ov072_02271ca4_R(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) {
        r = TRUE;
    }
    return r;
}

static inline BOOL Unk_ov072_02271ca4_Chk(u16 *p) {
    BOOL f9 = TRUE, f8 = TRUE, f7 = TRUE, f6 = TRUE, f5 = TRUE, f4 = TRUE, f3 = TRUE, f2 = TRUE, f1 = FALSE;
    u32 v = *p;
    if (v >= 0x26 && v <= 0x2a) {
        f1 = TRUE;
    }
    if (!f1) {
        if (v < 0x5d || v > 0x61) {
            f2 = FALSE;
        }
    }
    if (!f2) {
        if (v < 0x2f || v > 0x56) {
            f3 = FALSE;
        }
    }
    if (!f3) {
        if (v < 0x57 || v > 0x5b) {
            f4 = FALSE;
        }
    }
    if (!f4) {
        if (v < 0x66 || v > 0x68) {
            f5 = FALSE;
        }
    }
    if (!f5) {
        if (v != 0x69) {
            f6 = FALSE;
        }
    }
    if (!f6) {
        if (v < 0x6a || v > 0x6c) {
            f7 = FALSE;
        }
    }
    if (!f7) {
        if (v != 0x6d) {
            f8 = FALSE;
        }
    }
    if (!f8) {
        if (v < 0xc8 || v > 0xcf) {
            f9 = FALSE;
        }
    }
    return f9;
}

extern "C" Unk_ov072_022724c8 *func_ov072_0227211c() {
    return new Unk_ov072_022724c8();
}

BOOL Unk_ov072_022724c8::vfunc_04() {
    if (!Unk_020d8bc8::vfunc_04()) {
        return FALSE;
    }
    func_0201bc28((Unk_0201bc1c *)&unk_658);
    unk_658.func_ov072_02271714(this);
    return TRUE;
}

BOOL Unk_ov072_022724c8::vfunc_00() {
    if (!Unk_020d8bc8::vfunc_00()) {
        return FALSE;
    }
    u8 *const g = &data_021e58a6;
    if (_ZN12Unk_0208623813func_02086244Ev(g)) {
        if (_ZN12Unk_0208623813func_02086274Ev(g) >= 5) {
            unk_714 = 1;
        }
        func_ov072_02271fe8(1);
    } else {
        func_ov072_02271fe8(0);
    }
    unk_4cc.unk_1c |= 2;
    return TRUE;
}

u8 *Unk_ov072_022724c8::vfunc_6c() {
    return data_ov072_02272414;
}

u8 *Unk_ov072_022724c8::vfunc_70() {
    return data_ov072_022723cc;
}

BOOL Unk_ov072_022724c8::vfunc_68() {
    BOOL result = FALSE;
    if (data_ov072_02272598[unk_654].exit != NULL) {
        result = (this->*data_ov072_02272598[unk_654].exit)();
    }
    return result;
}

void Unk_ov072_022724c8::func_ov072_02271fe8(s32 s) {
    BOOL ok = TRUE;
    if (data_ov072_02272598[s].enter != NULL) {
        ok = (this->*data_ov072_02272598[s].enter)();
    }
    if (ok) {
        unk_654 = s;
    }
}

extern "C" s32 func_ov072_02271fd8(void *self, s32 *p) {
    if (*p != 0) {
        *p = *p - 1;
    }
    return *p;
}

BOOL Unk_ov072_022724c8::func_ov072_02271f6c() {
    _ZN12Unk_0201a33413func_0201a6c0EhiiP17Unk_0201a334_Vec3iih(&unk_3b0, 0, 0, 0, (u32 *)data_021f4880, 4, data_020c6d1c, 1);
    unk_564.func_020195c8(1, 0xef, 1, data_020c6cc8, 0);
    _ZN12Unk_0201ad2013func_0201ad34Ei(&unk_2a0, 0xef);
    return TRUE;
}

BOOL Unk_ov072_022724c8::func_ov072_02271f68() {
    return TRUE;
}

BOOL Unk_ov072_022724c8::func_ov072_02271ed8() {
    _ZN12Unk_0201985813func_020196b4Ejiiissiitt(&unk_564, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    _ZN12Unk_0201a33413func_0201a6c0EhiiP17Unk_0201a334_Vec3iih(&unk_3b0, 1, 0, 0, (u32 *)data_021f4880, 4, data_020c6d1c, 1);
    if (unk_714 != 0) {
        unk_718 = 0x190;
        unk_718 += func_02063b8c(0x258);
    }
    return TRUE;
}

BOOL Unk_ov072_022724c8::func_ov072_02271de4() {
    if (unk_714 != 0) {
        if (func_ov072_02271fd8(this, &unk_71c) == 2) {
            unk_564.func_02019638(1, 0, data_020c6cc8);
            return TRUE;
        }
        if (unk_71c == 1) {
            _ZN12Unk_0201985813func_020196b4Ejiiissiitt(&unk_564, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
            return TRUE;
        }
        if (func_ov072_02271fd8(this, &unk_718) == 0) {
            switch (func_02063b8c(3)) {
            case 0:
                unk_564.func_02019638(1, 0xc, data_020c6cc8);
                break;
            case 1:
                unk_564.func_02019638(1, 0xd, data_020c6cc8);
                break;
            case 2:
                unk_564.func_02019638(1, 0xe, data_020c6cc8);
                break;
            }
            unk_718 = 0x190;
            unk_718 += func_02063b8c(0x258);
            unk_71c = 0x7a;
        }
    }
    return TRUE;
}

extern "C" BOOL func_ov072_02271ca4(s32 *a, s32 *b, void *g) {
    s32 x = 0, y = 0;
    s32 i;
    for (i = 1; i <= 2; i++) {
        s32 hx, hy, xx, yy;
        u16 *cell;
        func_0204edf8(&x, &y, a[0], a[1], b[0], b[1] + i);
        xx = *(volatile s32 *)&x;
        yy = *(volatile s32 *)&y;
        hx = xx >> 4;
        hy = yy >> 4;
        cell = func_0204ebd8(g, hx, hy, xx - (hx << 4), yy - (hy << 4), 0);
        if (cell == NULL) {
            goto fail;
        }
        if (Unk_ov072_02271ca4_R(cell, 0x5000, 0x5021)) {
            goto fail;
        }
        if (func_0204bd14(cell)) {
            goto fail;
        }
        if (func_0204b08c(cell)) {
            continue;
        }
        if (Unk_ov072_02271ca4_Chk(cell)) {
        fail:
            return FALSE;
        }
    }
    return TRUE;
}

extern "C" BOOL func_ov072_02271b70(u8 *cnt, s32 *pe, void *g0) {
    Unk_02071a58_Grid *g = (Unk_02071a58_Grid *)g0;
    u8 *t;
    s32 k, k2;
    void *cell;
    u16 h;
    volatile s32 v[4];
    k = func_02063b8c(*pe);
    v[0] = 0;
    v[1] = 0;
    v[2] = 0;
    v[3] = 0;
    for (v[1] = 1; v[1] < 5; v[1]++) {
        for (v[0] = 1; v[0] < 5; cnt++, v[0]++) {
            if (*cnt != 0) {
                if (k == 0) {
                    cell = Unk_ov072_02271a58_Cell(g, *(volatile s32 *)&v[0], *(volatile s32 *)&v[1]);
                    if (cell != NULL) {
                        t = (u8 *)func_02037558(cell, 0, 0, 0);
                        if (t != NULL) {
                            k2 = func_02063b8c(*cnt);
                            for (v[3] = 0; v[3] < 16; v[3]++) {
                                for (v[2] = 0; v[2] < 16; t += 2, v[2]++) {
                                    if (*(u16 *)t == 0xfff1) {
                                        if (_ZN12Unk_0204e2f013func_0204e440Eiiii(g, v[0], v[1], *(volatile s32 *)&v[2], v[3])) {
                                            if (func_ov072_02271ca4((s32 *)&v[0], (s32 *)&v[2], g)) {
                                                if (k2 == 0) {
                                                    h = 0x1568;
                                                    func_02037590(cell, &h, v[2], v[3], 0);
                                                    (*cnt)--;
                                                    if (*cnt == 0) {
                                                        (*pe)--;
                                                    }
                                                    return TRUE;
                                                }
                                                k2--;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                k--;
            }
        }
    }
    return FALSE;
}

extern "C" void func_ov072_02271a58() {
    Unk_02071a58_Grid *g = (Unk_02071a58_Grid *)func_0204da0c();
    s32 total, i;
    u8 *cnt, *t;
    s32 v[5];
    u8 arr[16];
    if (g != NULL) {
        total = 0;
        v[0] = total;
        v[1] = total;
        v[2] = total;
        v[3] = total;
        v[4] = total;
        cnt = arr;
        MI_CpuFill8(cnt, total, 16);
        for (v[1] = 1; v[1] < 5; v[1]++) {
            for (v[0] = 1; v[0] < 5; cnt++, v[0]++) {
                void *cell = Unk_ov072_02271a58_Cell(g, *(volatile s32 *)&v[0], *(volatile s32 *)&v[1]);
                if (cell != NULL) {
                    t = (u8 *)func_02037558(cell, 0, 0, 0);
                    if (t != NULL) {
                        for (v[3] = 0; v[3] < 16; v[3]++) {
                            for (v[2] = 0; v[2] < 16; t += 2, v[2]++) {
                                if (*(u16 *)t == 0xfff1) {
                                    if (_ZN12Unk_0204e2f013func_0204e440Eiiii(g, v[0], v[1], *(volatile s32 *)&v[2], v[3])) {
                                        if (func_ov072_02271ca4(&v[0], &v[2], g)) {
                                            (*cnt)++;
                                        }
                                    }
                                }
                            }
                        }
                        if (*cnt != 0) {
                            total += *cnt;
                            v[4]++;
                        }
                    }
                }
            }
        }
        if (total >= 5) {
            total = 5;
        }
        for (i = 0, t = arr; i < total; i++) {
            func_ov072_02271b70(t, &v[4], g);
            if (v[4] <= 0) {
                break;
            }
        }
    }
}

BOOL Unk_ov072_022724c8::func_ov072_022719d0() {
    unk_714 = 0;
    if (_ZN12Unk_0208623813func_02086244Ev(&data_021e58a6)) {
        if (unk_71c == 0) {
            void *p = unk_658.func_02015aac();
            s32 x = unk_8e;
            if (p != NULL) {
                x = _ZN12Unk_020d77a413func_0201bcbcEPS_(this, p);
            }
            _ZN12Unk_02013b1013func_020141b4Essh(&unk_618, 0, x, 0);
        } else {
            unk_564.func_02019638(1, 0, data_020c6cc8);
        }
    } else {
        _ZN12Unk_02013b1013func_02014198Ehh(&unk_618, 0, 0);
    }
    return TRUE;
}

BOOL Unk_ov072_022724c8::func_ov072_02271968() {
    if (unk_71c != 0) {
        void *p = unk_658.func_02015aac();
        s32 x = unk_8e;
        if (p != NULL) {
            x = _ZN12Unk_020d77a413func_0201bcbcEPS_(this, p);
        }
        _ZN12Unk_02013b1013func_020141b4Essh(&unk_618, 0, x, 0);
        unk_71c = 0;
    }
    if (_ZN12Unk_02013b1013func_02014220Ev(&unk_618) == 0) {
        func_0203d67c(this);
        func_ov072_02271fe8(3);
    }
    return TRUE;
}

BOOL Unk_ov072_022724c8::func_ov072_02271964() {
    return TRUE;
}

void Unk_ov072_02272438::vfunc_80() {
    if (data_ov072_022723e4[unk_ac].flag != 0) {
        if (data_ov072_022723e4[unk_ac].f) {
            (this->*data_ov072_022723e4[unk_ac].f)();
        }
    }
}

void Unk_ov072_02272438::vfunc_88() {
    if (data_ov072_022723e4[unk_ac].flag == 0) {
        if (data_ov072_022723e4[unk_ac].f) {
            (this->*data_ov072_022723e4[unk_ac].f)();
            func_ov072_022718c0(0);
        }
    }
}

void Unk_ov072_02272438::func_ov072_022718c0(s32 s) {
    unk_ac = s;
    unk_b0 = 0;
}

void Unk_ov072_02272438::func_ov072_02271788() {
    switch (unk_b0) {
    case 0:
        if (unk_3c->unk_04 == 5) {
            unk_b8->unk_564.func_020195c8(2, 0xd5, 1, data_020c6cc8, 0);
            _ZN12Unk_0201ad2013func_0201ad34Ei(&unk_b8->unk_2a0, 0);
            unk_b0 = unk_b0 + 1;
        }
        break;
    case 1:
        if (_ZN12Unk_02015b8c13func_02015e48Ej(&unk_b8->unk_334, 0) == 0xd5) {
            if (unk_b8->unk_564.func_02019790()) {
                _ZN12Unk_0201985813func_020196b4Ejiiissiitt(&unk_b8->unk_564, 3, 2, 0, 0, 0, unk_b8->func_0201bc70(4), 0, 0, data_020c6cc8, 0);
                unk_b0 = unk_b0 + 1;
            }
        }
        break;
    case 2:
        if (unk_b8->unk_564.func_020197a8() == 3) {
            if (unk_b8->unk_564.func_02019790()) {
                u8 b;
                _ZN12Unk_0208623813func_02086238Ev(&data_021e58a6);
                func_02014f74();
                func_0202e1cc(0x14, 1);
                b = func_02063b8c(5) + 5;
                unk_3c->func_02067a84(&b, data_ov072_022723c0);
                func_ov072_022718c0(0);
            }
        }
        break;
    }
}

Unk_ov072_02272438::Unk_ov072_02272438() {}

// Member (Unk_ov072_02272438) ctor/dtor
Unk_ov072_02272438::~Unk_ov072_02272438() {}

void Unk_ov072_02272438::func_ov072_02271714(Unk_ov072_022724c8 *owner) {
    vfunc_08();
    unk_b8 = owner;
    unk_b4 = 0;
}

void Unk_ov072_02272438::vfunc_78(Unk_ov072_022715bc_Out *out) {
    u16 h;
    s32 t;
    h = 0x1568;
    t = func_02098eb0(&h);
    if (func_0202e1cc(0x14, 0) == 0) {
        if (_ZN12Unk_0208623813func_02086244Ev(&data_021e58a6)) {
            unk_b4 = 2;
            func_0202e1cc(0x14, 1);
        } else {
            unk_b4 = 0;
        }
    } else if (_ZN12Unk_0208623813func_02086274Ev(&data_021e58a6) >= 5) {
        unk_b4 = 3;
    } else if (t < 0) {
        if (_ZN12Unk_0208623813func_02086274Ev(&data_021e58a6) == 0) {
            unk_b4 = 4;
        } else {
            s32 v;
            unk_b4 = 5;
            v = 5 - _ZN12Unk_0208623813func_02086274Ev(&data_021e58a6);
            if (v < 0) {
                v = 0;
            }
            func_02015958(v, 0, 2, 0, 0);
        }
    } else {
        s32 i;
        u16 h2;
        if (func_0202e1cc(0x15, 1)) {
            unk_b4 = 6;
        } else {
            unk_b4 = 7;
        }
        for (i = 1; i <= 15; i++) {
            func_02099064(t);
            if (_ZN12Unk_0208623813func_02086274Ev(&data_021e58a6) < 5) {
                _ZN12Unk_0208623813func_02086258Ev(&data_021e58a6);
            }
            h2 = 0x1568;
            t = func_02098eb0(&h2);
            if (t < 0) {
                break;
            }
        }
        func_02015958(i, 1, 2, 0, 0);
    }
    s32 s = unk_b4;
    if (s >= 0 && s < 8) {
        out->unk_00 = data_ov072_02272234[s].unk_00;
        if (unk_b4 == 0) {
            out->unk_04 = func_02063b8c(5);
        } else if (unk_b4 == 3) {
            out->unk_04 = func_02063b8c(5) + 13;
        } else {
            out->unk_04 = *(u8 *)((u8 *)data_ov072_02272234 + 4 + unk_b4 * 8);
        }
    }
}

void Unk_ov072_02272438::vfunc_14() {
    u8 b;
    u16 h0;
    u16 h1;
    u16 h2;
    Unk_ov072_02271a58_Obj o;
    u8 *const g = &data_021e58a6;
    h0 = 0xfff1;
    u8 *const m = data_ov072_022723c0;
    u32 r = 0xff;
    switch (unk_1e) {
    case 0:
        func_02014f38(0);
        func_ov072_022718c0(1);
        break;
    case 0xb:
        func_ov072_02271a58();
        break;
    case 0x14:
    case 0x15:
        h1 = 0x1568;
        _ZN12Unk_0201442013func_02014ce4EPtjjj(this, &h1, 0, 5, 0);
        r = 0x16;
        break;
    case 0x16:
        if (_ZN12Unk_0208623813func_02086274Ev(g) >= 5) {
            r = 0x17;
        } else {
            r = (u8)(_ZN12Unk_0208623813func_02086274Ev(g) + 0x19);
        }
        break;
    case 0x17:
        break;
    case 0x18:
        _ZN12Unk_0206338013func_0206338cEii(&o, 0, 0x13);
        func_02062f94(&h2, &o, 0, 0, 1, 1, 0);
        h0 = h2;
        func_02063388(&o);
        _ZN12Unk_020d771013func_02014e60EPtjjj(this, &h0, 0, 5, 0);
        func_02099014(&h0, 0);
        r = 0x19;
        break;
    case 0x19:
        func_0203ffa4(0x44);
        break;
    }
    if (r != 0xff) {
        b = r;
        unk_3c->func_02067a84(&b, m);
    }
}

void Unk_ov072_02272438::vfunc_18() {
    func_02015a5c()->func_020aa514();
}

BOOL Unk_ov072_022724c8::vfunc_48() {
    BOOL r = FALSE;
    if (_ZN12Unk_02013b1013func_02014220Ev(&unk_618) == 0) {
        r = TRUE;
    }
    return r;
}

void Unk_ov072_022724c8::vfunc_4c(s32 a) {
    switch (a) {
    case 0:
        unk_658.vfunc_08();
        unk_658.func_02015ab0((u32)func_0201bc4c(4));
        func_ov072_02271fe8(2);
        break;
    case 8:
        if (_ZN12Unk_0208623813func_02086244Ev(&data_021e58a6)) {
            func_ov072_02271fe8(1);
        } else {
            func_ov072_02271fe8(0);
        }
        break;
    }
}

