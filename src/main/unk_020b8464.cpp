#include "types.h"

extern "C" {
// Other files
void func_020e79a0(void *mgr, void *node);
BOOL func_020652ec(void *mgr, void *node);
void func_02065328(void *mgr);
void func_02002580(u32 a, u32 b, u32 c, u32 d, u32 e);
void func_020024f0(u32 a, u32 b, u32 c, u32 d);
void func_02002438(u32 a, u32 b, u32 c, u32 d, u32 e);
u32 func_02057110(void *res, u32 idx);
u32 func_020570b0(void *p, u32 x);
u32 func_02057048(void *p, u32 x);
u32 func_0205714c(void *p);
u32 func_02056fd8(void *p, u32 x);
u32 func_0205713c(void *p);
u32 func_02057120(void *p);
void func_021145cc(void *p, u32 x);
void func_02103c40(void *p, u32 x);
void func_02103bc0(void *p, u32 x);
void func_02111ff0(void);
void func_02111f7c(u32 a, u32 b, u32 c);
void func_02111f24(void);
void func_0211220c(void);
void func_021120a8(u32 a, u32 b, u32 c);
void func_02112038(void);
void func_0210629c();
void func_020639e8(void *dst, const void *fmt, ...);
BOOL func_020641b4(void *a, void *b, s32 c);
extern u8 data_021ef638[];
extern u8 data_020e461c[];
}

// Five-word command record (fields depend on the mode it was set up for).
struct Unk_020b8b40 {
    u32 unk_00;
    u8 unk_04;
    u32 unk_08;
    u32 unk_0c;
    u32 unk_10;

    u8 func_020b8b40(void);
    void func_020b8b44(void);
    void func_020b8b68(u32 a, u8 b, u32 c, u8 d);
    u8 func_020b8b7c(void);
    void func_020b8b80(void);
    void func_020b8ba0(u32 a, u8 b, u32 c);
    u8 func_020b8ba8(void);
    void func_020b8bac(void);
    void func_020b8bc4(u32 a, u8 b, u32 c, u32 d);
    u8 func_020b8bd0(void);
    void func_020b8be0(void);
    void func_020b8bfc(u32 a, u8 b, u32 c, u32 d, u32 e);
    void func_020b8c0c(void);
};

// Three-word record used by three modes.
struct Unk_020b8c1c {
    u32 unk_00;
    u32 unk_04;
    u32 unk_08;

    u8 func_020b8c1c(void);
    u8 func_020b8c2c(void);
    u8 func_020b8c30(void);
    void func_020b8c40(void);
    void func_020b8c64(void);
    void func_020b8c88(void);
    void func_020b8cac(u32 a, u32 b, u32 c);
    void func_020b8cb4(void);
};

class Unk_020b83b0 {
public:
    u32 unk_04;
    u32 unk_08;
    u8 unk_0c;

    Unk_020b83b0() : unk_04(0), unk_08(0), unk_0c(0xff) {}
};

class Unk_020e4618 : public Unk_020b83b0 {
public:
    u8 unk_0d;
    u8 unk_0e;
    u8 unk_0f;

    Unk_020e4618();
    virtual BOOL vfunc_00() = 0;
    void func_020b83b0(void);
    BOOL func_020b83c8(void);
    void func_020b8464(void);
    BOOL func_020b847c(void);
    void func_020b8cc0(void);
};

class Unk_020e45e0 : public Unk_020e4618 {
public:
    Unk_020b8c1c unk_10;
    Unk_020b8c1c unk_1c;

    Unk_020e45e0();
    virtual BOOL vfunc_00();
    BOOL func_020b8840(void *a, u32 b, void *c, u32 d, u32 e);
    void func_020b88f8(void);
    void func_020b8930(void);
    void func_020b8944(void);
};

class Unk_020e45ec : public Unk_020e4618 {
public:
    Unk_020b8c1c unk_10;

    Unk_020e45ec();
    virtual BOOL vfunc_00();
    BOOL func_020b8984(void *a, u32 b, u32 c);
    void func_020b89c8(void);
    void func_020b89dc(void);
    BOOL func_020b89f0(u32 *a, u8 b);
    BOOL func_020b8a34(u32 a, u32 b, u32 c, u8 d);
    BOOL func_020b8a84(u32 a, u32 b, u32 c, u8 d);
    void func_020b8b08(void);
};

class Unk_020e45f8 : public Unk_020e4618 {
public:
    Unk_020b8b40 unk_10;

    Unk_020e45f8();
    virtual BOOL vfunc_00();
    virtual void vfunc_04();
    BOOL func_020b8618(u32 a, u8 b, u32 c, u8 d);
    BOOL func_020b8670(u32 a, u8 b, u32 c);
    BOOL func_020b86c0(u32 a, u8 b, u32 c, u32 d);
    BOOL func_020b8714(u32 a, u8 b, u32 c, u32 d, u32 e);
    void func_020b876c(void);
    void func_020b87d0(void);
};

class Unk_020e4608 : public Unk_020e45f8 {
public:
    Unk_020b8b40 unk_24;

    Unk_020e4608();
    virtual BOOL vfunc_00();
    virtual void vfunc_04();
    BOOL func_020b84a4(u32 a, u8 b, u32 c, u32 d, u32 e, u32 f, u8 g);
    BOOL func_020b851c(u32 a, u32 b, u8 c, u32 d, u32 e, u32 f, u32 g);
};

// ---- Unk_020e4618 ----
void Unk_020e4618::func_020b8464(void) {
    func_020e79a0(data_021ef638, (Unk_020b83b0 *)this);
}

BOOL Unk_020e4618::func_020b847c(void) {
    return func_020652ec(data_021ef638, (Unk_020b83b0 *)this);
}

extern "C" void func_020b8494(void) {
    func_02065328(data_021ef638);
}

void Unk_020e4618::func_020b8cc0(void) {
    unk_0d = 0;
    unk_0e = 0xa;
    unk_0f = 1;
}

Unk_020e4618::Unk_020e4618() {
    unk_0d = 0;
    unk_0e = 0xa;
    unk_0f = 1;
}

extern "C" void func_020b8cf0() {
    func_0210629c();
}

// ---- Unk_020e4608 ----
BOOL Unk_020e4608::func_020b84a4(u32 a, u8 b, u32 c, u32 d, u32 e, u32 f, u8 g) {
    func_020b876c();
    unk_0e = 9;
    unk_10.func_020b8bfc(a, b, c, d, e);
    unk_0f = unk_10.func_020b8bd0();
    unk_24.func_020b8ba0(f, b, g);
    unk_0f += unk_24.func_020b8b7c();
    unk_0c = 4;
    if (func_020b83c8()) {
        return TRUE;
    }
    vfunc_04();
    return FALSE;
}

BOOL Unk_020e4608::func_020b851c(u32 a, u32 b, u8 c, u32 d, u32 e, u32 f, u32 g) {
    func_020b876c();
    unk_0e = 8;
    unk_10.func_020b8bfc(a, c, d, d, e);
    unk_0f = unk_10.func_020b8bd0();
    unk_24.func_020b8bfc(b, c, f, f, g);
    unk_0f += unk_24.func_020b8bd0();
    unk_0c = 4;
    if (func_020b83c8()) {
        return TRUE;
    }
    vfunc_04();
    return FALSE;
}

BOOL Unk_020e4608::vfunc_00() {
    if (Unk_020e45f8::vfunc_00()) {
        return TRUE;
    }
    switch (unk_0e) {
    case 8:
        unk_10.func_020b8be0();
        unk_24.func_020b8be0();
        break;
    case 9:
        unk_10.func_020b8be0();
        unk_24.func_020b8b80();
        break;
    default:
        return FALSE;
    }
    return TRUE;
}

void Unk_020e4608::vfunc_04() {
    Unk_020e45f8::vfunc_04();
    unk_24.func_020b8c0c();
}

Unk_020e4608::Unk_020e4608() {
    unk_24.func_020b8c0c();
}

// ---- Unk_020e45f8 ----
BOOL Unk_020e45f8::func_020b8618(u32 a, u8 b, u32 c, u8 d) {
    func_020b876c();
    unk_0e = 7;
    unk_10.func_020b8b68(a, b, c, d);
    unk_0f = unk_10.func_020b8b40();
    unk_0c = 4;
    if (func_020b83c8()) {
        return TRUE;
    }
    vfunc_04();
    return FALSE;
}

BOOL Unk_020e45f8::func_020b8670(u32 a, u8 b, u32 c) {
    func_020b876c();
    unk_0e = 6;
    unk_10.func_020b8ba0(a, b, c);
    unk_0f = unk_10.func_020b8b7c();
    unk_0c = 4;
    if (func_020b83c8()) {
        return TRUE;
    }
    vfunc_04();
    return FALSE;
}

BOOL Unk_020e45f8::func_020b86c0(u32 a, u8 b, u32 c, u32 d) {
    func_020b876c();
    unk_0e = 5;
    unk_10.func_020b8bc4(a, b, c, d);
    unk_0f = unk_10.func_020b8ba8();
    unk_0c = 4;
    if (func_020b83c8()) {
        return TRUE;
    }
    vfunc_04();
    return FALSE;
}

BOOL Unk_020e45f8::func_020b8714(u32 a, u8 b, u32 c, u32 d, u32 e) {
    func_020b876c();
    unk_0e = 4;
    unk_10.func_020b8bfc(a, b, c, d, e);
    unk_0f = unk_10.func_020b8bd0();
    unk_0c = 4;
    if (func_020b83c8()) {
        return TRUE;
    }
    vfunc_04();
    return FALSE;
}

void Unk_020e45f8::func_020b876c(void) {
    func_020b87d0();
    unk_0d = 1;
}

BOOL Unk_020e45f8::vfunc_00() {
    switch (unk_0e) {
    case 4:
        unk_10.func_020b8be0();
        break;
    case 5:
        unk_10.func_020b8bac();
        break;
    case 6:
        unk_10.func_020b8b80();
        break;
    case 7:
        unk_10.func_020b8b44();
        break;
    default:
        return FALSE;
    }
    return TRUE;
}

void Unk_020e45f8::func_020b87d0(void) {
    func_020b83b0();
    vfunc_04();
}

void Unk_020e45f8::vfunc_04() {
    func_020b8cc0();
    unk_10.func_020b8c0c();
}

Unk_020e45f8::Unk_020e45f8() {
    unk_10.func_020b8c0c();
}

// ---- Unk_020e45e0 ----
BOOL Unk_020e45e0::func_020b8840(void *a, u32 b, void *c, u32 d, u32 e) {
    func_020b88f8();
    u8 *base = (u8 *)a + *(u32 *)((u8 *)a + 8);
    u32 idx = func_02057110(a, b);
    u8 *tbl = base + 4;
    u16 off = *(u16 *)(base + 0xa);
    u8 *ent = tbl + off;
    ent += *(u16 *)ent * idx;
    u8 *rec = base + *(u32 *)(ent + 4);
    u32 v1 = func_020570b0(c, d);
    u32 v2 = func_02057048(c, e);
    u32 v3 = func_0205714c(rec);
    u32 v4 = func_02056fd8(c, e);
    unk_0e = 3;
    unk_10.func_020b8cac(func_0205713c(rec), v1, v3);
    unk_1c.func_020b8cac(func_02057120(rec), v2, v4);
    unk_0f = unk_10.func_020b8c30() + unk_1c.func_020b8c2c();
    unk_0c = 0;
    if (func_020b847c()) {
        return TRUE;
    }
    func_020b8944();
    return FALSE;
}

void Unk_020e45e0::func_020b88f8(void) {
    func_020b8930();
    unk_0d = 1;
}

BOOL Unk_020e45e0::vfunc_00() {
    if (unk_0e == 3) {
        unk_10.func_020b8c88();
        unk_1c.func_020b8c64();
    }
    return TRUE;
}

void Unk_020e45e0::func_020b8930(void) {
    func_020b8464();
    func_020b8944();
}

void Unk_020e45e0::func_020b8944(void) {
    unk_10.func_020b8cb4();
    unk_1c.func_020b8cb4();
}

Unk_020e45e0::Unk_020e45e0() {
    unk_10.func_020b8cb4();
    unk_1c.func_020b8cb4();
}

// ---- Unk_020e45ec ----
BOOL Unk_020e45ec::func_020b8984(void *a, u32 b, u32 c) {
    u8 *base = (u8 *)a + *(u32 *)((u8 *)a + 8);
    u8 *tbl = base + 4;
    u16 off = *(u16 *)(base + 0xa);
    u8 *ent = tbl + off;
    ent += *(u16 *)ent * b;
    u8 *rec = base + *(u32 *)(ent + 4);
    u32 v1 = func_0205714c(rec);
    u32 v2 = func_0205713c(rec);
    return func_020b8a84(c, v2, v1, 2);
}

void Unk_020e45ec::func_020b89c8(void) {
    func_020b8464();
    func_020b8b08();
}

void Unk_020e45ec::func_020b89dc(void) {
    func_020b89c8();
    unk_0d = 1;
}

BOOL Unk_020e45ec::func_020b89f0(u32 *a, u8 b) {
    func_020b89dc();
    unk_0e = 0;
    unk_10.func_020b8cac(0, (u32)a, a[1]);
    unk_0f = unk_10.func_020b8c1c();
    unk_0c = b;
    if (func_020b847c()) {
        return TRUE;
    }
    func_020b8b08();
    return FALSE;
}

BOOL Unk_020e45ec::func_020b8a34(u32 a, u32 b, u32 c, u8 d) {
    func_020b89dc();
    unk_0e = 2;
    unk_10.func_020b8cac(b, a, c);
    unk_0f = unk_10.func_020b8c2c();
    unk_0c = d;
    if (func_020b847c()) {
        return TRUE;
    }
    func_020b8b08();
    return FALSE;
}

BOOL Unk_020e45ec::func_020b8a84(u32 a, u32 b, u32 c, u8 d) {
    func_020b89dc();
    unk_0e = 1;
    unk_10.func_020b8cac(b, a, c);
    unk_0f = unk_10.func_020b8c30();
    unk_0c = d;
    if (func_020b847c()) {
        return TRUE;
    }
    func_020b8b08();
    return FALSE;
}

BOOL Unk_020e45ec::vfunc_00() {
    switch (unk_0e) {
    case 0:
        unk_10.func_020b8c40();
        break;
    case 1:
        unk_10.func_020b8c88();
        break;
    case 2:
        unk_10.func_020b8c64();
        break;
    }
    return TRUE;
}

void Unk_020e45ec::func_020b8b08(void) {
    func_020b8cc0();
    unk_10.func_020b8cb4();
}

Unk_020e45ec::Unk_020e45ec() {
    unk_10.func_020b8cb4();
}

// ---- Unk_020b8b40 ----
void Unk_020b8b40::func_020b8b44(void) {
    func_02002580(unk_00, unk_04, (u8)unk_08, (u8)unk_08, (u8)unk_0c);
}

void Unk_020b8b40::func_020b8b68(u32 a, u8 b, u32 c, u8 d) {
    unk_00 = a;
    unk_04 = b;
    unk_08 = c;
    unk_0c = d;
}

void Unk_020b8b40::func_020b8b80(void) {
    u32 t = (u8)unk_08;
    func_02002580(unk_00, unk_04, t, t, t);
}

void Unk_020b8b40::func_020b8ba0(u32 a, u8 b, u32 c) {
    unk_00 = a;
    unk_04 = b;
    unk_08 = c;
}

void Unk_020b8b40::func_020b8bac(void) {
    func_020024f0(unk_00, unk_04, unk_08, unk_0c);
}

void Unk_020b8b40::func_020b8bc4(u32 a, u8 b, u32 c, u32 d) {
    unk_00 = a;
    unk_04 = b;
    unk_08 = c;
    unk_0c = d;
}

u8 Unk_020b8b40::func_020b8bd0(void) {
    return ((unk_10 - unk_0c) + 0x3f) >> 6;
}

void Unk_020b8b40::func_020b8be0(void) {
    func_02002438(unk_00, unk_04, unk_08, unk_0c, unk_10);
}

void Unk_020b8b40::func_020b8bfc(u32 a, u8 b, u32 c, u32 d, u32 e) {
    unk_00 = a;
    unk_04 = b;
    unk_08 = c;
    unk_0c = d;
    unk_10 = e;
}

void Unk_020b8b40::func_020b8c0c(void) {
    unk_00 = 0;
    unk_04 = 0xff;
    unk_08 = 0;
    unk_0c = 0;
    unk_10 = 0;
}

// ---- Unk_020b8c1c ----
u8 Unk_020b8c1c::func_020b8c1c(void) {
    u8 t = unk_08 >> 11;
    return t + 1;
}

u8 Unk_020b8c1c::func_020b8c30(void) {
    u8 t = unk_08 >> 11;
    return t + 1;
}

void Unk_020b8c1c::func_020b8c40(void) {
    u32 *p = (u32 *)unk_04;
    func_021145cc(p, p[1]);
    func_02103c40(p, 1);
    func_02103bc0(p, 1);
}

void Unk_020b8c1c::func_020b8c64(void) {
    func_021145cc((void *)unk_04, unk_08);
    func_02111ff0();
    func_02111f7c(unk_04, unk_00, unk_08);
    func_02111f24();
}

void Unk_020b8c1c::func_020b8c88(void) {
    func_021145cc((void *)unk_04, unk_08);
    func_0211220c();
    func_021120a8(unk_04, unk_00, unk_08);
    func_02112038();
}

void Unk_020b8c1c::func_020b8cac(u32 a, u32 b, u32 c) {
    unk_00 = a;
    unk_04 = b;
    unk_08 = c;
}

void Unk_020b8c1c::func_020b8cb4(void) {
    unk_00 = 0;
    unk_04 = 0;
    unk_08 = 0;
}

u8 Unk_020b8b40::func_020b8b40(void) {
    return 1;
}

u8 Unk_020b8b40::func_020b8b7c(void) {
    return 1;
}

u8 Unk_020b8b40::func_020b8ba8(void) {
    return 1;
}

u8 Unk_020b8c1c::func_020b8c2c(void) {
    return 1;
}

struct Unk_020b8cf8_Default {
    u16 unk_00;
    Unk_020b8cf8_Default() : unk_00(0x1100) {}
    ~Unk_020b8cf8_Default();
};

extern "C" BOOL func_020b8cf8(void *dst, Unk_020b8cf8_Default *p) {
    s32 idx;
    BOOL ok = FALSE;
    u16 v = p->unk_00;
    if (v >= 0x1100 && v <= 0x1143) {
        ok = TRUE;
    }
    if (ok) {
        idx = v - 0x1100;
    } else {
        idx = -1;
    }
    if (idx != -1) {
        u8 buf[0x20];
        func_020639e8(buf, data_020e461c, idx);
        if (func_020641b4(buf, dst, -1)) {
            return TRUE;
        }
        return FALSE;
    }
    static Unk_020b8cf8_Default def;
    return func_020b8cf8(dst, &def);
}
