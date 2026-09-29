#include "types.h"

struct Map {
    u8 *data;
    u32 w;
    u32 h;
};

struct Pal {
    u8 pad[0x18];
    u8 count;
};

struct Ctx;

extern "C" {
Map *func_0204da0c(void);
BOOL func_0204b2d4(void);
s32 func_0204b25c(const u16 *p);
BOOL func_0204d9ec(Map *m, s32 x, s32 y, s32 z);
void func_0204d9fc(Map *m, u16 *p, s32 x, s32 y);
u32 func_0204ec50(Map *m, s32 x, s32 y);
void func_0204edf8(s32 *ox, s32 *oy, s32 x, s32 y, s32 a, s32 b);
u16 *func_02037558(u8 *cell, s32 a, s32 b, s32 c);
s32 func_02057110(Ctx *c, const char *name);
void func_020639e8(char *buf, const char *fmt, ...);
void func_0209cf18(u8 *out);
u32 func_02133150(u32 a, u32 b);
s32 func_01ffc5a4(s32 a, s32 b);
s32 func_01ffcb0c(s32 a, s32 b);
void func_01ffb4d0(void *m, s32 sn, s32 cs);
void func_01ffb56c(void *a, void *b, void *out);
void func_0210622c(Pal *p, s32 a, s32 b);
void func_0210612c(Pal *p, s32 i, u16 c);
void func_02106054(Ctx *c, s32 i, u8 v);
void func_02106174(Ctx *c, s32 i, u16 v);
void func_020e761c(void *p, s32 a, s32 b);
void func_020b2530(void *p);
void func_020b24d4(void *p);
extern s16 data_02135f44[];
extern u8 data_021ee30c[0x22];
extern u8 data_021ee290;
extern s32 data_021ee2ac;
extern s32 data_021f4768;
extern s32 data_021ee2a4;
extern s32 data_020e3db4;
extern char data_021ee2c4[];
extern u32 data_027e0148[];
extern const char data_020e3dd8[];
extern const char data_020e3de0[];
extern const char data_020e3dec[];
extern u32 data_020d09e8[];
}

inline BOOL InRange(const u16 &v)
{
    BOOL r = FALSE;
    if (v >= 0x5000 && v <= 0x5021) {
        r = TRUE;
    }
    return r;
}
inline BOOL InRangeV(u16 v)
{
    BOOL r = FALSE;
    if (v >= 0x5000 && v <= 0x5021) {
        r = TRUE;
    }
    return r;
}
inline BOOL InRange32(const u32 &v)
{
    BOOL r = FALSE;
    if (v >= 0x5000 && v <= 0x5021) {
        r = TRUE;
    }
    return r;
}

extern "C" {
BOOL func_020b1b8c(u16 id);
void func_020b1c18(u16 id);

BOOL func_020b1b0c(void) { return func_020b1b8c(0x501e); }
void func_020b1b1c(void) { func_020b1c18(0x501e); }
BOOL func_020b1b2c(void) { return func_020b1b8c(0x5021); }
void func_020b1b3c(void) { func_020b1c18(0x5021); }
BOOL func_020b1b4c(void) { return func_020b1b8c(0x5013); }
void func_020b1b5c(void) { func_020b1c18(0x5013); }
BOOL func_020b1b6c(void) { return func_020b1b8c(0x5012); }
void func_020b1b7c(void) { func_020b1c18(0x5012); }

u16 *func_020b1c8c(s32 *outX, s32 *outY);

BOOL func_020b1b8c(u16 id)
{
    u16 t[2];
    t[0] = id;
    if (InRangeV(t[0])) {
        s32 x, y;
        u16 *p = func_020b1c8c(&x, &y);
        if (p) {
            BOOL eq;
            if (func_0204b2d4()) {
                t[1] = id;
                eq = func_0204b25c(p) == func_0204b25c(&t[1]);
            } else {
                eq = *p == id;
            }
            if (eq) {
                Map *m = func_0204da0c();
                if (m) {
                    return func_0204d9ec(m, x, y, 0);
                }
            }
        }
    }
    return FALSE;
}

void func_020b1c18(u16 id)
{
    u16 t[1];
    t[0] = id;
    if (InRangeV(t[0])) {
        s32 x, y;
        u16 *p = func_020b1c8c(&x, &y);
        if (p) {
            Map *m = func_0204da0c();
            if (m) {
                if (InRange(*p)) {
                    func_0204d9ec(m, x, y, 0);
                }
                func_0204d9fc(m, t, x, y);
            }
        }
    }
}

u16 *func_020b1c8c(s32 *outX, s32 *outY)
{
    s32 x, y;
    Map *m = func_0204da0c();
    s32 found = 0;
    *outX = 0;
    *outY = 0;
    if (m) {
        s32 w = m->w;
        s32 h = m->h;
        for (y = 0; y < h; y++) {
            for (x = 0; x < w; x++) {
                if (func_0204ec50(m, x, y) & 0x200) {
                    found = 1;
                    break;
                }
            }
            if (found) {
                break;
            }
        }
        if (found) {
            u8 *cell;
            func_0204edf8(outX, outY, x, y, 10, 9);
            if ((u32)x < m->w && (u32)y < m->h && m->data) {
                cell = m->data + (x + y * m->w) * 0x28;
            } else {
                cell = NULL;
            }
            if (cell) {
                return func_02037558(cell, 10, 9, 0);
            }
        }
    }
    return NULL;
}

BOOL func_020b1d3c(u32 id, u8 val)
{
    if (InRange32(id)) {
        u32 idx;
        if (InRange32(id)) {
            idx = id & 0xfff;
        } else {
            idx = -1;
        }
        if (idx < 0x22) {
            data_021ee30c[idx] = val;
            return TRUE;
        }
    }
    return FALSE;
}

u8 func_020b1d80(u32 id)
{
    if (InRange32(id)) {
        u32 idx;
        if (InRange32(id)) {
            idx = id & 0xfff;
        } else {
            idx = -1;
        }
        if (idx < 0x22) {
            return data_021ee30c[idx];
        }
    }
    return 0;
}

void func_020b1dc0(void)
{
    u32 i;
    u8 v = 0;
    for (i = 0; i < 0x22; i++) {
        data_021ee30c[i] = v;
    }
    data_021ee290 = v;
}
}

struct Mtx33 {
    s32 m[9];
};

struct Obj_b4 {
    u32 flags;
    u8 pad[0x24];
    Mtx33 mtx;
};

class Unk_020b1ddc {
public:
    void func_020b1ddc();
    void func_020b1e74();

    u8 pad[0xb4];
    Obj_b4 *unk_b4;
};

void Unk_020b1ddc::func_020b1ddc()
{
    Mtx33 tmp;
    u8 t[2];
    Mtx33 *m = &unk_b4->mtx;
    func_0209cf18(t);
    s32 rem = t[0] % 0x3c;
    s32 a = -(func_01ffc5a4(rem << 12, 0x3c000) * 0xffff >> 12);
    s32 idx = (u16)(s16)a >> 4;
    func_01ffb4d0(&tmp, data_02135f44[idx * 2], data_02135f44[idx * 2 + 1]);
    if (unk_b4->flags & 2) {
        *m = tmp;
    } else {
        func_01ffb56c(m, &tmp, m);
    }
    unk_b4->flags &= ~2;
}

void Unk_020b1ddc::func_020b1e74()
{
    Mtx33 tmp;
    u8 t[2];
    Mtx33 *m = &unk_b4->mtx;
    func_0209cf18(t);
    if (data_021ee2ac != data_021f4768) {
        s32 rem = t[1] % 0xc;
        s32 a = (s16)-(func_01ffc5a4(rem << 12, 0xc000) * 0xffff >> 12);
        s32 b = (func_01ffc5a4(t[0] << 12, 0x3c000) * 0x1555 << 4) >> 16;
        s32 idx = (u16)(s16)(a - b) >> 4;
        data_021ee2a4 = data_02135f44[idx * 2];
        data_020e3db4 = data_02135f44[idx * 2 + 1];
        data_021ee2ac = data_021f4768;
    }
    func_01ffb4d0(&tmp, data_021ee2a4, data_020e3db4);
    if (unk_b4->flags & 2) {
        *m = tmp;
    } else {
        func_01ffb56c(m, &tmp, m);
    }
    unk_b4->flags &= ~2;
}

class B {
public:
    B();
    ~B();
    s32 func_020b22ac();
    BOOL func_020b22c4(BOOL on, s32 a, s32 b, u32 param);
    void func_020b231c();
    BOOL func_020b2374(BOOL on);

    /* 0x00 */ s32 unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ u32 unk_08;
    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ u16 unk_10;
    /* 0x12 */ u16 unk_12;
};

class X {
public:
    X();
    ~X();
    void func_020b223c(Ctx *c, s32 t);
    void func_020b2288(Ctx *c);
    /* 0x00 */ s8 unk_00;
};

class D {
public:
    D();
    ~D();
    void func_020b21ec(Ctx *c, s32 t);
    void func_020b2214(Ctx *c);
    /* 0x00 */ s8 unk_00;
};

class A {
public:
    A();
    ~A();
    virtual const char *vfunc_00(s32 i);
    void func_020b208c(Pal *p, s32 t);
    BOOL func_020b2134(s32 v);
    void func_020b2158(Ctx *c);

    /* 0x04 */ s8 unk_04[3];
    /* 0x08 */ B unk_08;
};

class Unk_020b1f64 : public B {
public:
    Unk_020b1f64();
    ~Unk_020b1f64();
    BOOL func_020b1f64();
    BOOL func_020b1f7c(BOOL on, s32 a, s32 b);
    void func_020b1f94(Ctx *c);
    void func_020b1fd4(Ctx *c, BOOL on);

    /* 0x14 */ X unk_14;
    /* 0x18 */ A unk_18;
    /* 0x34 */ D unk_34;
};

BOOL Unk_020b1f64::func_020b1f64() { return func_020b22ac() ? TRUE : FALSE; }

BOOL Unk_020b1f64::func_020b1f7c(BOOL on, s32 a, s32 b) { return func_020b22c4(on, a, b, 0x800); }

void Unk_020b1f64::func_020b1f94(Ctx *c)
{
    func_020b231c();
    s32 v = func_020b22ac();
    if (c) {
        unk_18.func_020b208c((Pal *)c, v);
        unk_34.func_020b21ec(c, v);
        unk_14.func_020b223c(c, v);
    }
}

void Unk_020b1f64::func_020b1fd4(Ctx *c, BOOL on)
{
    func_020b2374(on);
    if (c) {
        unk_14.func_020b2288(c);
        unk_18.func_020b2158(c);
        unk_34.func_020b2214(c);
    }
}

Unk_020b1f64::~Unk_020b1f64() {}
Unk_020b1f64::Unk_020b1f64() {}

const char *A::vfunc_00(s32 i)
{
    func_020639e8(data_021ee2c4, data_020e3dd8, i);
    return data_021ee2c4;
}

extern "C" u16 func_020b207c(void)
{
    return (u16)(data_027e0148[6] >> 16);
}

s32 func_020b22b0(s32 t, s32 lo, s32 hi) { return lo + func_01ffcb0c(t, hi - lo); }

void A::func_020b208c(Pal *p, s32 t)
{
    if (t != 0) {
        func_0210622c(p, 1, 0x400);
        u16 col = func_020b207c();
        s32 r7 = func_020b22b0(t, ((col >> 10) & 0x1f) << 12, 0x1f000);
        s32 g = func_020b22b0(t, (col & 0x1f) << 12, 0x1f000);
        s32 b = func_020b22b0(t, ((col >> 5) & 0x1f) << 12, 0x1f000);
        u16 c2 = (r7 >> 12) << 10 | ((g >> 12) | (b >> 12) << 5);
        for (s32 i = 0; i < p->count; i++) {
            func_0210612c(p, i, func_020b2134(i) ? c2 : col);
        }
    } else {
        func_0210622c(p, 0, 0x400);
    }
}

BOOL A::func_020b2134(s32 v)
{
    for (s8 *p = unk_04; p < unk_04 + 3; p++) {
        if (*p == v) {
            return TRUE;
        }
    }
    return FALSE;
}

void A::func_020b2158(Ctx *c)
{
    for (u32 i = 0; i < 3; i++) {
        if (vfunc_00(i)) {
            s32 r = func_02057110(c, vfunc_00(i));
            if (r != -1) {
                unk_04[i] = r;
            } else {
                unk_04[i] = -1;
            }
        }
    }
}

A::~A() {}
A::A()
{
    for (u32 i = 0; i < 3; i++) {
        unk_04[i] = -1;
    }
}

void D::func_020b21ec(Ctx *c, s32 t)
{
    if (unk_00 != -1) {
        func_02106054(c, unk_00, (u8)((t * 0x1d >> 12) + 1));
    }
}

void D::func_020b2214(Ctx *c) { unk_00 = func_02057110(c, data_020e3de0); }
D::D() { unk_00 = -1; }
D::~D() { unk_00 = -1; }

void X::func_020b223c(Ctx *c, s32 t)
{
    if (unk_00 != -1) {
        func_02106174(c, unk_00, (u16)((u8)(t * 0xd >> 12) << 10 | ((u8)(t * 0x1f >> 12) | (u8)(t * 0x1b >> 12) << 5)));
    }
}

void X::func_020b2288(Ctx *c) { unk_00 = func_02057110(c, data_020e3dec); }
X::~X() {}
X::X() { unk_00 = -1; }

s32 B::func_020b22ac() { return unk_00; }

BOOL B::func_020b22c4(BOOL on, s32 a, s32 b, u32 param)
{
    unk_08 = param;
    if (on) {
        if (unk_04 == 0) {
            unk_04 = 0x1000;
            if (a == 0) {
                unk_00 = 0x1000;
                return FALSE;
            }
            if (b) {
                unk_0c = 1;
                unk_10 = 0;
                unk_12 = 5;
            }
            return TRUE;
        }
    } else {
        unk_0c = 0;
        if (unk_04 != 0) {
            unk_04 = 0;
            if (a == 0) {
                unk_00 = 0;
                return FALSE;
            }
            return TRUE;
        }
    }
    return FALSE;
}

void B::func_020b231c()
{
    if (unk_0c == 1) {
        if (unk_12 != 0) {
            unk_00 = 0;
            unk_12--;
        }
        if (unk_12 == 0) {
            if (unk_10 < 0xb) {
                unk_00 = data_020d09e8[unk_10];
                unk_10++;
            } else {
                unk_0c = 0;
                unk_10 = 0;
            }
        }
    } else if (unk_04 != unk_00) {
        func_020e761c(this, unk_04, unk_08);
    }
}

BOOL B::func_020b2374(BOOL on) { return func_020b22c4(on, 0, 0, 0x800); }
B::~B() {}
B::B()
{
    unk_00 = 0;
    unk_04 = 0;
    unk_0c = 0;
}

extern "C" void func_020b23a8(u8 *self)
{
    func_020b2530(self);
    func_020b24d4(self + 4);
    s32 j;
    s32 i;
    u8 *cell;
    Map *m;
    u16 *p;
    m = func_0204da0c();
    for (u32 y = 1; y <= 4; y++) {
        for (u32 x = 1; x <= 4; x++) {
            if (x < m->w && y < m->h && m->data) {
                cell = m->data + (x + y * m->w) * 0x28;
            } else {
                cell = NULL;
            }
            if (cell) {
                for (j = 0; j < 16; j++) {
                    for (i = 0; i < 16; i++) {
                        p = func_02037558(cell, i, j, 0);
                        if (p && InRange(*p)) {
                            s32 ox, oy;
                            func_0204edf8(&ox, &oy, x, y, i, j);
                            func_0204d9fc(m, p, ox, oy);
                        }
                    }
                }
            }
        }
    }
}

class Unk_020b23a0 {
public:
    u8 *func_020b23a0();
    void func_020b23a4();
};

u8 *Unk_020b23a0::func_020b23a0() { return (u8 *)this + 4; }
void Unk_020b23a0::func_020b23a4() {}
