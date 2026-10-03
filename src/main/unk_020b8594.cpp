#include "types.h"

extern "C" {
// Other files
void func_02002580(u32 a, u32 b, u32 c, u32 d, u32 e);
void func_020024f0(u32 a, u32 b, u32 c, u32 d);
void func_02002438(u32 a, u32 b, u32 c, u32 d, u32 e);
u32 _ZN12Unk_02056fd813func_02057110Ei(void *res, u32 idx);
u32 _ZN12Unk_02056fd813func_020570b0Ei(void *p, u32 x);
u32 _ZN12Unk_02056fd813func_02057048Ei(void *p, u32 x);
u32 _ZN12Unk_0205712013func_0205714cEv(void *p);
u32 _ZN12Unk_02056fd813func_02056fd8Ei(void *p, u32 x);
u32 _ZN12Unk_0205712013func_0205713cEv(void *p);
u32 _ZN12Unk_0205712013func_02057120Ev(void *p);
void DC_FlushRange(void *p, u32 x);
void NNS_G3dTexLoad(void *p, u32 x);
void NNS_G3dPlttLoad(void *p, u32 x);
void GX_BeginLoadTexPltt(void);
void GX_LoadTexPltt(u32 a, u32 b, u32 c);
void GX_EndLoadTexPltt(void);
void GX_BeginLoadTex(void);
void GX_LoadTex(u32 a, u32 b, u32 c);
void GX_EndLoadTex(void);
}

// Five-word command record (fields depend on the mode it was set up for).
struct Unk_020b8b40 {
    u32 unk_00;
    u8 unk_04;
    u32 unk_08;
    u32 unk_0c;
    u32 unk_10;

    void func_020b8b44(void);
    void func_020b8b68(u32 a, u8 b, u32 c, u8 d);
    void func_020b8b80(void);
    void func_020b8ba0(u32 a, u8 b, u32 c);
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
    u8 func_020b8c30(void);
    void func_020b8c40(void);
    void func_020b8c64(void);
    void func_020b8c88(void);
    void func_020b8cac(u32 a, u32 b, u32 c);
    void func_020b8cb4(void);
};

extern "C" {
u8 func_020b8b40(Unk_020b8b40 *p);
u8 func_020b8b7c(Unk_020b8b40 *p);
u8 func_020b8ba8(Unk_020b8b40 *p);
u8 func_020b8c2c(Unk_020b8c1c *p);
}

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
    void func_020b8464(void);
    BOOL func_020b847c(void);
    void func_020b8cc0(void);
};

extern "C" {
void func_020b83b0(Unk_020e4618 *p);
BOOL func_020b83c8(Unk_020e4618 *p);
}

class Unk_020e45e0: public Unk_020e4618 {
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

void Unk_020e4618::func_020b8cc0(void) {
    unk_0d = 0;
    unk_0e = 0xa;
    unk_0f = 1;
}

void Unk_020b8c1c::func_020b8cb4(void) {
    unk_00 = 0;
    unk_04 = 0;
    unk_08 = 0;
}

void Unk_020b8c1c::func_020b8cac(u32 a, u32 b, u32 c) {
    unk_00 = a;
    unk_04 = b;
    unk_08 = c;
}

void Unk_020b8c1c::func_020b8c88(void) {
    DC_FlushRange((void *)unk_04, unk_08);
    GX_BeginLoadTex();
    GX_LoadTex(unk_04, unk_00, unk_08);
    GX_EndLoadTex();
}

void Unk_020b8c1c::func_020b8c64(void) {
    DC_FlushRange((void *)unk_04, unk_08);
    GX_BeginLoadTexPltt();
    GX_LoadTexPltt(unk_04, unk_00, unk_08);
    GX_EndLoadTexPltt();
}

void Unk_020b8c1c::func_020b8c40(void) {
    u32 *p = (u32 *)unk_04;
    DC_FlushRange(p, p[1]);
    NNS_G3dTexLoad(p, 1);
    NNS_G3dPlttLoad(p, 1);
}

u8 Unk_020b8c1c::func_020b8c30(void) {
    u8 t = unk_08 >> 11;
    return t + 1;
}

extern "C" u8 func_020b8c2c(Unk_020b8c1c *p) {
    return 1;
}

// ---- Unk_020b8c1c ----
u8 Unk_020b8c1c::func_020b8c1c(void) {
    u8 t = unk_08 >> 11;
    return t + 1;
}

void Unk_020b8b40::func_020b8c0c(void) {
    unk_00 = 0;
    unk_04 = 0xff;
    unk_08 = 0;
    unk_0c = 0;
    unk_10 = 0;
}

void Unk_020b8b40::func_020b8bfc(u32 a, u8 b, u32 c, u32 d, u32 e) {
    unk_00 = a;
    unk_04 = b;
    unk_08 = c;
    unk_0c = d;
    unk_10 = e;
}

void Unk_020b8b40::func_020b8be0(void) {
    func_02002438(unk_00, unk_04, unk_08, unk_0c, unk_10);
}

u8 Unk_020b8b40::func_020b8bd0(void) {
    return ((unk_10 - unk_0c) + 0x3f) >> 6;
}

void Unk_020b8b40::func_020b8bc4(u32 a, u8 b, u32 c, u32 d) {
    unk_00 = a;
    unk_04 = b;
    unk_08 = c;
    unk_0c = d;
}

void Unk_020b8b40::func_020b8bac(void) {
    func_020024f0(unk_00, unk_04, unk_08, unk_0c);
}

extern "C" u8 func_020b8ba8(Unk_020b8b40 *p) {
    return 1;
}

void Unk_020b8b40::func_020b8ba0(u32 a, u8 b, u32 c) {
    unk_00 = a;
    unk_04 = b;
    unk_08 = c;
}

void Unk_020b8b40::func_020b8b80(void) {
    u32 t = (u8)unk_08;
    func_02002580(unk_00, unk_04, t, t, t);
}

extern "C" u8 func_020b8b7c(Unk_020b8b40 *p) {
    return 1;
}

void Unk_020b8b40::func_020b8b68(u32 a, u8 b, u32 c, u8 d) {
    unk_00 = a;
    unk_04 = b;
    unk_08 = c;
    unk_0c = d;
}

// ---- Unk_020b8b40 ----
void Unk_020b8b40::func_020b8b44(void) {
    func_02002580(unk_00, unk_04, (u8)unk_08, (u8)unk_08, (u8)unk_0c);
}

extern "C" u8 func_020b8b40(Unk_020b8b40 *p) {
    return 1;
}

Unk_020e45ec::Unk_020e45ec() {
    unk_10.func_020b8cb4();
}

void Unk_020e45ec::func_020b8b08(void) {
    func_020b8cc0();
    unk_10.func_020b8cb4();
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

BOOL Unk_020e45ec::func_020b8a34(u32 a, u32 b, u32 c, u8 d) {
    func_020b89dc();
    unk_0e = 2;
    unk_10.func_020b8cac(b, a, c);
    unk_0f = func_020b8c2c(&unk_10);
    unk_0c = d;
    if (func_020b847c()) {
        return TRUE;
    }
    func_020b8b08();
    return FALSE;
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

void Unk_020e45ec::func_020b89dc(void) {
    func_020b89c8();
    unk_0d = 1;
}

void Unk_020e45ec::func_020b89c8(void) {
    func_020b8464();
    func_020b8b08();
}

// ---- Unk_020e45ec ----
BOOL Unk_020e45ec::func_020b8984(void *a, u32 b, u32 c) {
    u8 *base = (u8 *)a + *(u32 *)((u8 *)a + 8);
    u8 *tbl = base + 4;
    u16 off = *(u16 *)(base + 0xa);
    u8 *ent = tbl + off;
    ent += *(u16 *)ent * b;
    u8 *rec = base + *(u32 *)(ent + 4);
    u32 v1 = _ZN12Unk_0205712013func_0205714cEv(rec);
    u32 v2 = _ZN12Unk_0205712013func_0205713cEv(rec);
    return func_020b8a84(c, v2, v1, 2);
}

Unk_020e45e0::Unk_020e45e0() {
    unk_10.func_020b8cb4();
    unk_1c.func_020b8cb4();
}

void Unk_020e45e0::func_020b8944(void) {
    unk_10.func_020b8cb4();
    unk_1c.func_020b8cb4();
}

void Unk_020e45e0::func_020b8930(void) {
    func_020b8464();
    func_020b8944();
}

BOOL Unk_020e45e0::vfunc_00() {
    if (unk_0e == 3) {
        unk_10.func_020b8c88();
        unk_1c.func_020b8c64();
    }
    return TRUE;
}

void Unk_020e45e0::func_020b88f8(void) {
    func_020b8930();
    unk_0d = 1;
}

// ---- Unk_020e45e0 ----
BOOL Unk_020e45e0::func_020b8840(void *a, u32 b, void *c, u32 d, u32 e) {
    func_020b88f8();
    u8 *base = (u8 *)a + *(u32 *)((u8 *)a + 8);
    u32 idx = _ZN12Unk_02056fd813func_02057110Ei(a, b);
    u8 *tbl = base + 4;
    u16 off = *(u16 *)(base + 0xa);
    u8 *ent = tbl + off;
    ent += *(u16 *)ent * idx;
    u8 *rec = base + *(u32 *)(ent + 4);
    u32 v1 = _ZN12Unk_02056fd813func_020570b0Ei(c, d);
    u32 v2 = _ZN12Unk_02056fd813func_02057048Ei(c, e);
    u32 v3 = _ZN12Unk_0205712013func_0205714cEv(rec);
    u32 v4 = _ZN12Unk_02056fd813func_02056fd8Ei(c, e);
    unk_0e = 3;
    unk_10.func_020b8cac(_ZN12Unk_0205712013func_0205713cEv(rec), v1, v3);
    unk_1c.func_020b8cac(_ZN12Unk_0205712013func_02057120Ev(rec), v2, v4);
    unk_0f = unk_10.func_020b8c30() + func_020b8c2c(&unk_1c);
    unk_0c = 0;
    if (func_020b847c()) {
        return TRUE;
    }
    func_020b8944();
    return FALSE;
}

Unk_020e45f8::Unk_020e45f8() {
    unk_10.func_020b8c0c();
}

void Unk_020e45f8::vfunc_04() {
    func_020b8cc0();
    unk_10.func_020b8c0c();
}

void Unk_020e45f8::func_020b87d0(void) {
    func_020b83b0(this);
    vfunc_04();
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

void Unk_020e45f8::func_020b876c(void) {
    func_020b87d0();
    unk_0d = 1;
}

BOOL Unk_020e45f8::func_020b8714(u32 a, u8 b, u32 c, u32 d, u32 e) {
    func_020b876c();
    unk_0e = 4;
    unk_10.func_020b8bfc(a, b, c, d, e);
    unk_0f = unk_10.func_020b8bd0();
    unk_0c = 4;
    if (func_020b83c8(this)) {
        return TRUE;
    }
    vfunc_04();
    return FALSE;
}

BOOL Unk_020e45f8::func_020b86c0(u32 a, u8 b, u32 c, u32 d) {
    func_020b876c();
    unk_0e = 5;
    unk_10.func_020b8bc4(a, b, c, d);
    unk_0f = func_020b8ba8(&unk_10);
    unk_0c = 4;
    if (func_020b83c8(this)) {
        return TRUE;
    }
    vfunc_04();
    return FALSE;
}

BOOL Unk_020e45f8::func_020b8670(u32 a, u8 b, u32 c) {
    func_020b876c();
    unk_0e = 6;
    unk_10.func_020b8ba0(a, b, c);
    unk_0f = func_020b8b7c(&unk_10);
    unk_0c = 4;
    if (func_020b83c8(this)) {
        return TRUE;
    }
    vfunc_04();
    return FALSE;
}

// ---- Unk_020e45f8 ----
BOOL Unk_020e45f8::func_020b8618(u32 a, u8 b, u32 c, u8 d) {
    func_020b876c();
    unk_0e = 7;
    unk_10.func_020b8b68(a, b, c, d);
    unk_0f = func_020b8b40(&unk_10);
    unk_0c = 4;
    if (func_020b83c8(this)) {
        return TRUE;
    }
    vfunc_04();
    return FALSE;
}

Unk_020e4608::Unk_020e4608() {
    unk_24.func_020b8c0c();
}

void Unk_020e4608::vfunc_04() {
    Unk_020e45f8::vfunc_04();
    unk_24.func_020b8c0c();
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

