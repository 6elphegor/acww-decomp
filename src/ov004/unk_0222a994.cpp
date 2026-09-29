#include "types.h"
#include "Unk_020d8c7c.h"

// ---------------------------------------------------------------- helper / library classes
struct Unk_ov004_0222a994_Ctx {
    u8 pad[0xb4];
    s32 *unk_b4;
};

struct Unk_ov004_0222a994_Vec {
    s32 x, y, z;
};

struct Unk_ov004_0222a994_Pad {
    s32 v[2];
    Unk_ov004_0222a994_Pad() {}
    ~Unk_ov004_0222a994_Pad() {}
};

class Unk_ov004_0224e488 : public Unk_020d8c7c {
public:
    virtual ~Unk_ov004_0224e488();
    virtual void vfunc_48(s32 a, Unk_ov004_0222a994_Ctx *b);

    /* 0x50 */ u8 pad_50[0x3520 - 0x50];
    /* 0x3520 */ s8 unk_3520;
    /* 0x3521 */ s8 unk_3521;
    /* 0x3522 */ s8 unk_3522;
    /* 0x3523 */ s8 unk_3523;
    /* 0x3524 */ u8 pad_3524[4];
    /* 0x3528 */ s32 unk_3528;
    /* 0x352c */ s32 unk_352c;
    /* 0x3530 */ s32 unk_3530;
};

struct Unk_0203c2cc {
    Unk_0203c2cc();
    u8 pad[0x20f0 - 0x2c];
};

class Unk_020e45e0 {
public:
    Unk_020e45e0();
    virtual BOOL vfunc_00();
    BOOL func_020b8840(void *a, void *b, void *c, u32 d, u32 e);
    void func_020b8930();
    u8 pad_04[0x24];
};

class Unk_02056b74 {
public:
    Unk_02056b74();
    ~Unk_02056b74();
    void func_02056a78(u8 *a, s32 b, s32 c);
    void func_02056ab0(u8 *a, const char *b, const char *c);
    void func_02056b28(u8 *a, const char *b);
};

class Unk_02056fd8 {
public:
    s32 func_02057110(const char *name);
};

struct Unk_020d8cf4 {
    Unk_020d8cf4();
    ~Unk_020d8cf4();
    virtual void vfunc_00();
    BOOL func_020318cc();
    BOOL func_02031908(s32 a, s32 b, s32 c, void *p, s32 s, void *q);
    u8 pad_04[0x98];
};

class Unk_020dbe4c {
public:
    Unk_020dbe4c();
    virtual ~Unk_020dbe4c();
    u8 pad_04[0x14];
};

struct Unk_020b6a0c {
    Unk_020b6a0c();
    ~Unk_020b6a0c();
    u8 pad[0x20];
};

extern "C" {
u32 func_020b50e8(void);
s32 func_020b52f8(void);
s32 func_020b52d0(void);
s32 func_020b5254(void);
u32 func_020b5328(void);
void func_0200402c(s32 a);
void func_020b1e74(void *p);
void func_020b1ddc(void *p);
u32 func_020b50b4(void);
u32 func_020b6860(u32 o, void *obj, void *v, s32 a, s32 b, s32 c, s32 d);
u32 func_020b6890(u32 o, void *obj);
BOOL func_0204b2d4(u16 *p);
u32 func_0204b25c(u16 *p);
u32 func_0204b6f8(u16 *p);
u32 func_0204b688(u16 *p);
u32 func_020716cc(void);
u8 *func_020716e8(u32 a, u32 b, u32 c);
void func_0203411c(u32 a, u16 *p);
void func_0203414c(u32 a, u16 *p);
BOOL func_0203c23c(void *o, u16 *p);
void *func_0203c234(void *o);
void func_0203c2cc(void *o);
BOOL func_020b8cf8(void *o, u16 *p);
void *func_020b8cf0(void *o);
void *func_0206052c(void *self, u32 idx);
void func_020607e0(void *o, u16 *p, u32 k);
extern u8 data_021e58a8[];
extern const char *data_ov004_0224e440;
extern const char *data_ov004_0224e444;
extern u16 data_ov004_022513ac;
extern u32 data_ov004_022513b0;
extern u32 data_020c8cc0;
}

// ---------------------------------------------------------------- class B (object at G+0x128)
class Unk_ov004_0222b15c {
public:
    Unk_ov004_0222b15c();
    ~Unk_ov004_0222b15c();
    void func_ov004_0222b15c();
    BOOL func_ov004_0222b168(u16 *q, Unk_02056fd8 *a, s32 key);
    void func_ov004_0222b2fc(u16 *q, s32 key);
    u16 *func_ov004_0222b388();
    u16 *func_ov004_0222b38c();

    /* 0x0000 */ u16 unk_00;
    /* 0x0002 */ u16 unk_02;
    /* 0x0004 */ Unk_020e45e0 unk_04;
    /* 0x002c */ u8 unk_2c[0x10f0 - 0x2c];
    /* 0x10f0 */ s32 unk_10f0;
    /* 0x10f4 */ Unk_02056b74 unk_10f4;
    /* 0x10f8 */ u8 pad_10f8[4];
    /* 0x10fc */ u8 *unk_10fc;
};

// ---------------------------------------------------------------- class A (object at G+0x1228)
class Unk_ov004_0222aed0 {
public:
    Unk_ov004_0222aed0();
    ~Unk_ov004_0222aed0();
    void func_ov004_0222aed0();
    BOOL func_ov004_0222aedc(u16 *q, Unk_02056fd8 *a, s32 key);
    void func_ov004_0222b070(u16 *q, u32 key);
    BOOL func_ov004_0222b0a4(u16 v, Unk_02056fd8 *a, s32 key);
    BOOL func_ov004_0222b0bc(u8 *buf, u8 *p);
    u32 func_ov004_0222b0f0();
    u16 *func_ov004_0222b0fc();
    u16 *func_ov004_0222b100();

    /* 0x0000 */ u16 unk_00;
    /* 0x0002 */ u16 unk_02;
    /* 0x0004 */ Unk_020e45e0 unk_04;
    /* 0x002c */ Unk_0203c2cc unk_2c;
    /* 0x20f0 */ s32 unk_20f0;
    /* 0x20f4 */ Unk_02056b74 unk_20f4;
    /* 0x20f8 */ u8 pad_20f8[4];
    /* 0x20fc */ u8 *unk_20fc;
};

struct Unk_ov004_022513bc_Obj {
    /* 0x000 */ u8 pad_000[0xac];
    /* 0x0ac */ Unk_02056fd8 *unk_ac;
    /* 0x0b0 */ u8 pad_0b0[0x128 - 0xb0];
    /* 0x128 */ Unk_ov004_0222b15c unk_128;
    /* 0x1228 */ Unk_ov004_0222aed0 unk_1228;
};

extern "C" Unk_ov004_022513bc_Obj *data_ov004_022513bc;
extern "C" Unk_ov004_0222a994_Vec data_ov004_022513f0;

// ---------------------------------------------------------------- class Y (billboard/effect handle, base Unk_020b6a0c)
class Unk_ov004_0222ac38 : public Unk_020b6a0c {
public:
    Unk_ov004_0222ac38();
    ~Unk_ov004_0222ac38();
    void func_ov004_0222ac34();
    void func_ov004_0222ac38();
    void func_ov004_0222ac54();

    /* 0x20 */ u8 unk_20;
};

// ---------------------------------------------------------------- class Z (two 0x9c-byte elements)
class Unk_ov004_0222ae38 {
public:
    Unk_ov004_0222ae38();
    ~Unk_ov004_0222ae38();
    void func_ov004_0222acdc();
    void func_ov004_0222acf4();
    BOOL func_ov004_0222ad78();
    BOOL func_ov004_0222ad9c();

    Unk_020d8cf4 unk_00[2];
};

// ---------------------------------------------------------------- class X (vtable 0x0224e478)
class Unk_ov004_0224e478 : public Unk_020dbe4c {
public:
    Unk_ov004_0224e478();
    virtual ~Unk_ov004_0224e478();
};

static inline BOOL Unk_ov004_0222aacc_R1(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) r = TRUE;
    return r;
}

// ---- functions ----
void Unk_ov004_0224e488::vfunc_48(s32 a, Unk_ov004_0222a994_Ctx *b) {
    Unk_ov004_0222a994_Pad pad;
    if (unk_3520 == a) {
        func_020b1e74(b);
        Unk_ov004_0222a994_Vec *pv = (Unk_ov004_0222a994_Vec *)(b->unk_b4 + 0x13);
        Unk_ov004_0222a994_Vec v;
        v.y = pv->y;
        v.z = pv->z;
        v.x = pv->x;
        unk_3528 = v.x;
        unk_352c = v.y;
        unk_3530 = v.z;
    } else if (unk_3521 == a) {
        func_020b1ddc(b);
    } else if (unk_3523 == a) {
        if (b != 0) {
            s32 *p = b->unk_b4;
            s32 z = p[0x15];
            s32 x = p[0x13];
            data_ov004_022513f0.x = x;
            data_ov004_022513f0.y = 0x3700;
            data_ov004_022513f0.z = z;
        }
    }
}

extern "C" u16 *func_ov004_0222aa1c() {
    Unk_ov004_022513bc_Obj *g = data_ov004_022513bc;
    if (g != 0) {
        return g->unk_128.func_ov004_0222b388();
    }
    return &data_ov004_022513ac;
}

extern "C" u16 *func_ov004_0222aa48() {
    Unk_ov004_022513bc_Obj *g = data_ov004_022513bc;
    if (g != 0) {
        return g->unk_128.func_ov004_0222b38c();
    }
    return &data_ov004_022513ac;
}

extern "C" u16 *func_ov004_0222aa74() {
    Unk_ov004_022513bc_Obj *g = data_ov004_022513bc;
    if (g != 0) {
        return g->unk_1228.func_ov004_0222b0fc();
    }
    return &data_ov004_022513ac;
}

extern "C" u16 *func_ov004_0222aaa0() {
    Unk_ov004_022513bc_Obj *g = data_ov004_022513bc;
    if (g != 0) {
        return g->unk_1228.func_ov004_0222b100();
    }
    return &data_ov004_022513ac;
}

extern "C" u16 *func_ov004_0222aacc(u16 *p, s32 key, u32 flag) {
    BOOL r = Unk_ov004_0222aacc_R1(p, 0x1144, 0x1187);
    if (r != FALSE || (*p >= 0x1188 && *p <= 0x11a7)) {
        Unk_ov004_022513bc_Obj *g = data_ov004_022513bc;
        if (g != 0) {
            if (g->unk_1228.func_ov004_0222aedc(p, g->unk_ac, key) != 0) {
                if (flag != 0) {
                    if (func_020b5254() != 0) func_0200402c(0x50);
                }
                BOOL r2 = Unk_ov004_0222aacc_R1(data_ov004_022513bc->unk_1228.func_ov004_0222b0fc(), 0x1144, 0x1187);
                if (r2 != FALSE) return data_ov004_022513bc->unk_1228.func_ov004_0222b0fc();
                return &data_ov004_022513ac;
            }
        }
    }
    return &data_ov004_022513ac;
}

extern "C" u16 *func_ov004_0222ab80(u16 *p, s32 key, u32 flag) {
    BOOL r = Unk_ov004_0222aacc_R1(p, 0x1100, 0x1143);
    if (r != FALSE || (*p >= 0x1188 && *p <= 0x11a7)) {
        Unk_ov004_022513bc_Obj *g = data_ov004_022513bc;
        if (g != 0) {
            if (g->unk_128.func_ov004_0222b168(p, g->unk_ac, key) != 0) {
                if (flag != 0) {
                    if (func_020b5254() != 0) func_0200402c(0x50);
                }
                BOOL r2 = Unk_ov004_0222aacc_R1(data_ov004_022513bc->unk_128.func_ov004_0222b388(), 0x1100, 0x1143);
                if (r2 != FALSE) return data_ov004_022513bc->unk_128.func_ov004_0222b388();
                return &data_ov004_022513ac;
            }
        }
    }
    return &data_ov004_022513ac;
}

void Unk_ov004_0222ac38::func_ov004_0222ac38() {
    if (unk_20 != 0) {
        func_020b6890(func_020b50b4(), this);
    }
}

struct Unk_ov004_0222ac54_V {
    s32 x, y, z;
};

void Unk_ov004_0222ac38::func_ov004_0222ac54() {
    Unk_ov004_0222ac54_V v;
    if (func_020b50e8() == 0x22) {
        unk_20 = 1;
    }
    if (unk_20 != 0) {
        v.x = 0x108f6;
        v.y = 0;
        v.z = 0x1351e;
        func_020b6860(func_020b50b4(), this, &v, 0xf33, 0x6000, 0x16, 0xff);
    }
}

Unk_ov004_0222ac38::~Unk_ov004_0222ac38() {
}

Unk_ov004_0222ac38::Unk_ov004_0222ac38() {
    unk_20 = 0;
}

void Unk_ov004_0222ae38::func_ov004_0222acdc() {
    if (func_020b50e8() == 0xa) {
        unk_00[0].func_020318cc();
    }
}

struct Unk_ov004_0222acf4_S {
    u32 x, y, z;
    Unk_ov004_0222acf4_S(u32 a, u32 b, u32 c) {
        x = a;
        y = b;
        z = c;
    }
    ~Unk_ov004_0222acf4_S();
};

void Unk_ov004_0222ae38::func_ov004_0222acf4() {
    if (func_020b50e8() == 0xa) {
        static Unk_ov004_0222acf4_S s(0xe000, 0, data_020c8cc0 + 0x1000);
        unk_00[0].func_02031908(0x8000, 0x2000, 0x1000, &s, 0, 0);
    }
}

extern "C" BOOL func_ov004_0222ae18();

BOOL Unk_ov004_0222ae38::func_ov004_0222ad78() {
    if (func_ov004_0222ae18() != 0) {
        unk_00[0].func_020318cc();
        unk_00[1].func_020318cc();
    }
    return TRUE;
}

struct Unk_ov004_0222ad9c_V {
    s32 x, y, z;
};

BOOL Unk_ov004_0222ae38::func_ov004_0222ad9c() {
    if (func_ov004_0222ae18() != 0) {
        Unk_ov004_0222ad9c_V a;
        Unk_ov004_0222ad9c_V b;
        a.x = 0xd000;
        a.y = 0;
        a.z = 0x1c000;
        b.x = 0x13000;
        b.y = 0;
        b.z = 0x1c000;
        BOOL r0 = unk_00[0].func_02031908(0x2000, 0, 0x4000, &a, 0, 0);
        BOOL r1 = unk_00[1].func_02031908(0x2000, 0, 0x4000, &b, 0, 0);
        if (r0 != 0 && r1 != 0) return TRUE;
        return FALSE;
    }
    return FALSE;
}

extern "C" BOOL func_ov004_0222ae18() {
    if (func_020b52f8() != 0 || func_020b52d0() != 0) return TRUE;
    return FALSE;
}

Unk_ov004_0222ae38::~Unk_ov004_0222ae38() {
}

Unk_ov004_0222ae38::Unk_ov004_0222ae38() {
}

struct Unk_ov004_0222ae7c_Obj {
    u8 pad[0x18];
    u32 unk_18;
};

extern "C" u32 func_ov004_0222ae7c(Unk_ov004_0222ae7c_Obj *o) {
    return o->unk_18;
}

Unk_ov004_0224e478::~Unk_ov004_0224e478() {
}

Unk_ov004_0224e478::Unk_ov004_0224e478() {
}

void Unk_ov004_0222ac38::func_ov004_0222ac34() {
}

// ---- class A ----
BOOL Unk_ov004_0222aed0::func_ov004_0222b0a4(u16 v, Unk_02056fd8 *a, s32 key) {
    u16 t = v;
    return func_ov004_0222aedc(&t, a, key);
}

BOOL Unk_ov004_0222aed0::func_ov004_0222aedc(u16 *q, Unk_02056fd8 *a, s32 key) {
    BOOL same;
    if (a->func_02057110(data_ov004_0224e440) == -1) return FALSE;
    if (func_0204b2d4(&unk_02) != 0) {
        u32 x = func_0204b25c(&unk_02);
        u32 y = func_0204b25c(q);
        if (x == y) same = TRUE;
        else same = FALSE;
    } else {
        if (unk_02 == *q) same = TRUE;
        else same = FALSE;
    }
    if (same != FALSE && unk_20f0 == key) {
        goto done;
    }
    {
        BOOL in = FALSE;
        u16 v = *q;
        if (v >= 0x1144 && v <= 0x1187) in = TRUE;
        if (in != FALSE) {
            if (func_0203c23c(&unk_2c, q) == 0) goto fail;
            if (func_020b5254() == 0) {
                unk_20f4.func_02056ab0(unk_20fc, "dummy_floor", "dummy_floor_pl");
            }
            void *r = func_0203c234(&unk_2c);
            if (unk_04.func_020b8840(a, (void *)data_ov004_0224e440, r, 0, 0) == 0) goto fail;
            unk_00 = unk_02;
            unk_02 = *q;
            func_ov004_0222b070(&unk_02, key);
            func_0203411c(func_020b50e8(), &unk_02);
            return TRUE;
        } else if (v >= 0x1188 && v <= 0x11a7) {
            u32 t7 = func_0204b6f8(q);
            u32 t8 = func_0204b688(q);
            u32 h = func_020716cc();
            u8 *idx = func_020716e8(h, (u8)t7, (u8)t8);
            unk_20f4.func_02056a78(idx, 0, 0);
            unk_00 = unk_02;
            unk_02 = *q;
            unk_20f0 = key;
            func_ov004_0222b070(&unk_02, key);
            func_0203411c(func_020b50e8(), &unk_02);
            return TRUE;
        }
    }
fail:
    return FALSE;
done:
    unk_00 = unk_02;
    unk_02 = *q;
    unk_20f0 = key;
    func_ov004_0222b070(&unk_02, key);
    func_0203411c(func_020b50e8(), &unk_02);
    return TRUE;
}

void Unk_ov004_0222aed0::func_ov004_0222aed0() {
    unk_04.func_020b8930();
}

void Unk_ov004_0222aed0::func_ov004_0222b070(u16 *q, u32 key) {
    if (func_020b52f8() != 0) {
        u32 t = func_020b5328();
        void *o = func_0206052c(data_021e58a8, t);
        if (o != 0) {
            func_020607e0(o, q, key);
        }
    }
}

BOOL Unk_ov004_0222aed0::func_ov004_0222b0bc(u8 *buf, u8 *p) {
    if (p != 0) {
        unk_20f4.func_02056b28(buf, "m_dummy_floor");
        unk_20fc = p;
        return TRUE;
    }
    return FALSE;
}

u32 Unk_ov004_0222aed0::func_ov004_0222b0f0() {
    return unk_20f0;
}

u16 *Unk_ov004_0222aed0::func_ov004_0222b0fc() {
    return &unk_00;
}

u16 *Unk_ov004_0222aed0::func_ov004_0222b100() {
    return &unk_02;
}

Unk_ov004_0222aed0::~Unk_ov004_0222aed0() {
}

Unk_ov004_0222aed0::Unk_ov004_0222aed0() : unk_00(0xfff1), unk_02(0xfff1) {
    unk_00 = 0xfff1;
    unk_02 = 0xfff1;
    unk_20f0 = 0;
}

// ---- class B ----
void Unk_ov004_0222b15c::func_ov004_0222b15c() {
    unk_04.func_020b8930();
}

BOOL Unk_ov004_0222b15c::func_ov004_0222b168(u16 *q, Unk_02056fd8 *a, s32 key) {
    BOOL same;
    if (a->func_02057110(data_ov004_0224e444) == -1) return FALSE;
    if (func_0204b2d4(&unk_02) != 0) {
        u32 x = func_0204b25c(&unk_02);
        u32 y = func_0204b25c(q);
        if (x == y) same = TRUE;
        else same = FALSE;
    } else {
        if (unk_02 == *q) same = TRUE;
        else same = FALSE;
    }
    if (same != FALSE && unk_10f0 == key) {
        goto done;
    }
    {
        BOOL in = FALSE;
        u16 v = *q;
        if (v >= 0x1100 && v <= 0x1143) in = TRUE;
        if (in != FALSE) {
            if (func_020b8cf8(&unk_2c, q) == 0) goto fail;
            if (func_020b5254() == 0) {
                unk_10f4.func_02056ab0(unk_10fc, "dummy_wall", "dummy_wall_pl");
            }
            void *r = func_020b8cf0(&unk_2c);
            if (unk_04.func_020b8840(a, (void *)data_ov004_0224e444, r, 0, 0) == 0) goto fail;
            unk_00 = unk_02;
            unk_02 = *q;
            func_ov004_0222b2fc(&unk_02, key);
            func_0203414c(func_020b50e8(), &unk_02);
            return TRUE;
        } else if (v >= 0x1188 && v <= 0x11a7) {
            u32 t7 = func_0204b6f8(q);
            u32 t8 = func_0204b688(q);
            u32 h = func_020716cc();
            u8 *idx = func_020716e8(h, (u8)t7, (u8)t8);
            unk_10f4.func_02056a78(idx, 0, 0);
            unk_00 = unk_02;
            unk_02 = *q;
            unk_10f0 = key;
            func_ov004_0222b2fc(&unk_02, key);
            func_0203414c(func_020b50e8(), &unk_02);
            return TRUE;
        }
    }
fail:
    return FALSE;
done:
    unk_00 = unk_02;
    unk_02 = *q;
    unk_10f0 = key;
    func_ov004_0222b2fc(&unk_02, key);
    func_0203414c(func_020b50e8(), &unk_02);
    return TRUE;
}
