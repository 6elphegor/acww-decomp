// mwcc-version: 1.2/sp2
#include "types.h"
#include "Unk_020d8c7c.h"

struct Unk_ov004_02224ee4_Vec {
    s32 x, y, z;
};

struct Unk_0203e5d0_Node {
    /* 0x00 */ u32 unk_00;
    /* 0x04 */ Unk_0203e5d0_Node *unk_04;
    /* 0x08 */ u32 unk_08;
    /* 0x0c */ void *unk_0c;
};

class Unk_020d5d84 : public Unk_020d8c7c {
public:
    Unk_020d5d84();
    virtual BOOL vfunc_04();
    virtual void vfunc_08();
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_14();
    virtual BOOL vfunc_1c();
    virtual ~Unk_020d5d84();

    /* 0x50 */ u8 unk_50[0xc];
    /* 0x5c */ s32 unk_5c[3];
    /* 0x68 */ u8 pad_68[0xd4 - 0x68];
};

class Unk_020d9670 : public Unk_020d5d84 {
public:
    Unk_020d9670();
    virtual ~Unk_020d9670();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_1c();
    virtual BOOL vfunc_48(void *a);
    virtual void vfunc_4c(u32 a, u8 b);
    virtual void *vfunc_50();
    virtual BOOL vfunc_54(void *a);
    virtual BOOL vfunc_58(void *a);
    virtual BOOL vfunc_5c();

    void func_0203e624(u32 a);

    /* 0xd4 */ Unk_0203e5d0_Node unk_d4;
    /* 0xe4 */ s32 unk_e4;
    /* 0xe8 */ u16 unk_e8;
    /* 0xea */ u8 unk_ea;
    /* 0xeb */ u8 pad_eb;
};

// ---- model resource sub-object at +0xec (see src/main/unk_02054190.cpp)
class Unk_02055704 {
public:
    Unk_02055704();
    virtual ~Unk_02055704();
    u8 pad_04[0x94];
};

class Unk_020dbd34 : public Unk_02055704 {
public:
    Unk_020dbd34();
    virtual ~Unk_020dbd34();
    u32 unk_98;
};

class Unk_020dbe7c {
public:
    virtual ~Unk_020dbe7c();
    inline Unk_020dbe7c() : unk_a4(0), unk_a8(0), unk_ac(0x1000) {}
    u32 unk_a0;
    s32 unk_a4;
    s32 unk_a8;
    s32 unk_ac;
    u32 unk_b0;

    s32 func_02056654();
    s32 func_020565e8(s32 a);
};

class Unk_020dbd54 : public Unk_020dbd34, public Unk_020dbe7c {
public:
    Unk_020dbd54();
    virtual ~Unk_020dbd54();
    void *unk_b4;

    s32 func_02054710();
    s32 func_020547cc(void *q);
    void func_020547e4();
    BOOL func_02054800(void *x);
    // declared in Unk_0205454c in src/main, but it is called on this object
    void func_02054720(s32 a, s32 b, s32 c, u16 d, u16 e);
};

// ---- helper objects at +0x1a4, +0x248, +0x250 (their other methods live in ov004_054)
class Unk_ov004_02224ee4 {
public:
    Unk_ov004_02224ee4();
    ~Unk_ov004_02224ee4();
    void func_ov004_02224ee4();
    s32 func_ov004_02224d8c(u32 i);
    void func_ov004_02224d9c();
    void func_ov004_02224dbc(const char *s);
    void *func_ov004_02224d68();

    u32 unk_00;
    u32 unk_04;
    u32 unk_08[13];
    u32 unk_3c[13];
    u32 unk_70[13];
};

class Unk_ov004_02224d60 {
public:
    Unk_ov004_02224d60();
    ~Unk_ov004_02224d60();
    void func_ov004_02224d08();
    void func_ov004_02224d10(const char *s);
    u32 func_ov004_02224d04();

    u32 unk_00;
    u8 unk_04;
};

class Unk_ov004_02224cf4 {
public:
    Unk_ov004_02224cf4();
    ~Unk_ov004_02224cf4();
    void func_ov004_02224ca4(s32 v);
    void func_ov004_02224cb8();
    void func_ov004_02224cc0(Unk_ov004_02224ee4_Vec *v);
    void func_ov004_02224cdc();

    u32 unk_00[0x10];
};

// ---- second base at +0x290 (see src/main/unk_02065f14.cpp)
class Unk_020e2a30 {
public:
    Unk_020e2a30();
    virtual ~Unk_020e2a30();
    virtual void vfunc_08();
    /* 0x04 */ char unk_04[0x1a];
    /* 0x1e */ u8 unk_1e;
};

class Unk_020ddcf0 : public Unk_020e2a30 {
public:
    Unk_020ddcf0();
    virtual ~Unk_020ddcf0();
    virtual void vfunc_08();

    u8 pad_20[0x1c];
    /* 0x3c */ u32 unk_3c;
    /* 0x40 */ u8 unk_40;
};

struct Unk_020d8cf4 {
    virtual void vfunc_00();
    u8 pad_04[0x94];
    u8 unk_98;

    Unk_020d8cf4();
    ~Unk_020d8cf4();
};

class Unk_ov004_0224d618;

extern "C" {
extern char data_ov004_0224d594[];
extern char data_ov004_0224d5a4[];
extern char data_ov004_0224d700[];
extern char data_ov004_0224d71c[];
extern Unk_ov004_0224d618 *volatile data_ov004_02250be4;
extern u32 data_ov004_02250bec;
extern u32 data_ov004_02250be8;
extern void *data_021c620c;

s32 func_020639e8(char *buf, const char *fmt, ...);
s32 func_0209c3e0(u32 v);
s32 func_0209c3f4(u32 v);
s32 func_0209c41c(void *o, u32 v);
void func_02002dd0(void *o, u32 v);
void func_020555ec(void *m, void *r, u32 z);
void func_021039ec(void *a, u32 b);
void func_02103830(void *a, u32 b);
s32 func_020318cc(void *p);
void func_02031908(void *p, s32 a, s32 b, s32 c, void *d, s32 e, s32 f);
void func_020566bc(void *p);
void func_020e7820(void *a, s32 b, s32 c, s32 d);
void func_0200402c(s32 a);
void func_ov004_02225cd4(void *o, u32 v);
}

class Unk_ov004_0224d4e8 : public Unk_020d9670 {
public:
    Unk_ov004_0224d4e8();
    virtual ~Unk_ov004_0224d4e8();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_1c();
    virtual BOOL vfunc_60(u32 v);
    virtual void vfunc_64(Unk_ov004_02224ee4_Vec *out);

    void func_ov004_02224f58(u32 v);
    s32 func_ov004_02224f20();
    s32 func_ov004_02224f3c();
    void func_ov004_02224f60();
    void func_ov004_02224f90(char *name);
    void func_ov004_02224fc8(char *a, char *b);
    void func_ov004_022250cc(u32 a);

    /* 0xec */ Unk_020dbd54 unk_ec;
    /* 0x1a4 */ Unk_ov004_02224ee4 unk_1a4;
    /* 0x248 */ Unk_ov004_02224d60 unk_248;
    /* 0x250 */ Unk_ov004_02224cf4 unk_250;
};

class Unk_ov004_0224d618 : public Unk_ov004_0224d4e8, public Unk_020ddcf0 {
public:
    Unk_ov004_0224d618();
    virtual ~Unk_ov004_0224d618();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_24();
    virtual BOOL vfunc_60(u32 v);
    virtual void vfunc_64(Unk_ov004_02224ee4_Vec *out);

    void func_ov004_022252bc();
    void func_ov004_022252cc();
    void func_ov004_022252fc();
    void func_ov004_02225380();
    void func_ov004_022253fc();
    void func_ov004_02225488();
    void func_ov004_022254c4();
    BOOL func_ov004_0222532c();
    BOOL func_ov004_022253c4();
    BOOL func_ov004_02225440();
    BOOL func_ov004_0222548c();

    /* 0x2d4 */ Unk_020d8cf4 unk_2d4;
    /* 0x370 */ u8 unk_370;
};

// A state method of a class derived from Unk_ov004_0224d618 (object is larger than 0x374 bytes)
class Unk_ov004_022257e4_Ext : public Unk_ov004_0224d618 {
public:
    void func_ov004_022257e4();

    u8 pad_374[0x494 - 0x374];
    u32 unk_494;
};

typedef Unk_ov004_0224d4e8 M;
typedef Unk_ov004_0224d618 D;
typedef Unk_ov004_02224ee4 A;
typedef Unk_ov004_02224d60 B;
typedef Unk_ov004_02224ee4_Vec Vec;

extern "C" void func_ov004_02224ff4(char *name, Unk_020dbd54 *m, A *a, B *b);
extern "C" void func_ov004_02225034(char *a, char *b, Unk_020dbd54 *m, A *aa, B *bb);
extern "C" void func_ov004_02224f7c(A *a, B *b);

// 02224ee4 is the first function
Unk_ov004_02224ee4::Unk_ov004_02224ee4() {
    func_ov004_02224ee4();
}

Unk_ov004_02224ee4::~Unk_ov004_02224ee4() {
    func_ov004_02224ee4();
}

void A::func_ov004_02224ee4() {
    unk_00 = 0;
    unk_04 = 0;
    u32 i;
    for (i = 0; i < 13; i++) {
        unk_3c[i] = 0;
        unk_08[i] = 0;
        unk_70[i] = 0;
    }
}

s32 M::func_ov004_02224f20() {
    if (unk_ea != 0xff) {
        return func_0209c3e0(unk_ea);
    }
    return 0;
}

s32 M::func_ov004_02224f3c() {
    if (unk_ea != 0xff) {
        return func_0209c3f4(unk_ea);
    }
    return 0;
}

void M::func_ov004_02224f58(u32 v) {
    unk_ea = v;
}

void M::func_ov004_02224f60() {
    func_ov004_02224f7c(&unk_1a4, &unk_248);
}

extern "C" void func_ov004_02224f7c(A *a, B *b) {
    a->func_ov004_02224d9c();
    b->func_ov004_02224d08();
}

void M::func_ov004_02224f90(char *name) {
    char a[0x28];
    char b[0x28];
    func_020639e8(a, data_ov004_0224d594, name);
    func_020639e8(b, data_ov004_0224d5a4, name);
    func_ov004_02224fc8(a, b);
}

void M::func_ov004_02224fc8(char *a, char *b) {
    func_ov004_02225034(a, b, &unk_ec, &unk_1a4, &unk_248);
}

extern "C" void func_ov004_02224ff4(char *name, Unk_020dbd54 *m, A *a, B *b) {
    char x[0x28];
    char y[0x28];
    func_020639e8(x, data_ov004_0224d594, name);
    func_020639e8(y, data_ov004_0224d5a4, name);
    func_ov004_02225034(x, y, m, a, b);
}

extern "C" void func_ov004_02225034(char *a, char *b, Unk_020dbd54 *m, A *aa, B *bb) {
    aa->func_ov004_02224dbc(a);
    bb->func_ov004_02224d10(b);
    func_020555ec(m, aa->func_ov004_02224d68(), 0);
    void *p = aa->func_ov004_02224d68();
    func_021039ec(p, bb->func_ov004_02224d04());
    void *q = aa->func_ov004_02224d68();
    func_02103830(q, bb->func_ov004_02224d04());
}

BOOL M::vfunc_60(u32 v) {
    return TRUE;
}

void M::vfunc_64(Vec *out) {
    out->x = unk_5c[0];
    out->y = unk_5c[1];
    out->z = unk_5c[2];
}

BOOL M::vfunc_10() {
    if (Unk_020d9670::vfunc_10() == 0) {
        return FALSE;
    }
    unk_250.func_ov004_02224cb8();
    return TRUE;
}

void M::func_ov004_022250cc(u32 a) {
    Vec out;
    vfunc_64(&out);
    unk_250.func_ov004_02224cc0(&out);
    func_02002dd0(this, a);
}

BOOL M::vfunc_1c() {
    if (Unk_020d9670::vfunc_1c() == 0) {
        return FALSE;
    }
    if (unk_ea != 0xff) {
        s32 v = func_ov004_02224f3c();
        if (unk_248.unk_04 != v) {
            vfunc_60(v);
        }
    }
    return TRUE;
}

BOOL M::vfunc_04() {
    if (Unk_020d9670::vfunc_04() == 0) {
        return FALSE;
    }
    func_0203e624(0);
    unk_250.func_ov004_02224cdc();
    return TRUE;
}

Unk_ov004_0224d4e8::~Unk_ov004_0224d4e8() {
}

Unk_ov004_0224d4e8::Unk_ov004_0224d4e8() {
    unk_ea = 0xff;
}

extern "C" void func_ov004_02225290() {
    if (func_0209c41c(data_ov004_02250be4, 1) != 0) {
        data_ov004_02250be4->unk_370 = 1;
    }
}

void D::func_ov004_022252bc() {
    func_020318cc(&unk_2d4);
}

void D::func_ov004_022252cc() {
    func_02031908(&unk_2d4, 0x2000, 0x4000, 0x2000, unk_5c, 0, 0);
}

void D::func_ov004_022252fc() {
    if (unk_ec.func_02056654() != 0) {
        vfunc_60(0);
    } else {
        unk_ec.func_020547e4();
    }
}

BOOL D::func_ov004_0222532c() {
    s32 r = unk_1a4.func_ov004_02224d8c(2);
    unk_ec.func_02054720(r, 1, 0x1000, 0, 0);
    unk_250.func_ov004_02224ca4(0x4d9);
    unk_370 = 0;
    return TRUE;
}

void D::func_ov004_02225380() {
    if (unk_ec.func_02056654() != 0) {
        if (unk_370 == 0) {
            vfunc_60(3);
        } else {
            func_0209c41c(this, 3);
        }
    } else {
        unk_ec.func_020547e4();
    }
}

BOOL D::func_ov004_022253c4() {
    s32 r = unk_1a4.func_ov004_02224d8c(1);
    unk_ec.func_02054720(r, 1, 0x1000, 0, 0);
    return TRUE;
}

void D::func_ov004_022253fc() {
    if (unk_ec.func_02056654() != 0) {
        if (unk_370 == 0) {
            vfunc_60(2);
        } else {
            func_0209c41c(this, 2);
        }
    } else {
        unk_ec.func_020547e4();
    }
}

BOOL D::func_ov004_02225440() {
    s32 r = unk_1a4.func_ov004_02224d8c(0);
    unk_ec.func_02054720(r, 1, 0x1000, 0, 0);
    unk_250.func_ov004_02224ca4(0x4d8);
    return TRUE;
}

void D::func_ov004_02225488() {
}

BOOL D::func_ov004_0222548c() {
    s32 r = unk_1a4.func_ov004_02224d8c(0);
    unk_ec.func_02054720(r, 1, 0x1000, 0, 0);
    return TRUE;
}

void D::func_ov004_022254c4() {
    typedef void (D::*Fn)();
    static Fn tbl[4] = {&D::func_ov004_02225488, &D::func_ov004_022253fc, &D::func_ov004_02225380,
                        &D::func_ov004_022252fc};
    u32 i = unk_248.unk_04;
    if (i < 4) {
        (this->*tbl[i])();
    }
}

BOOL D::vfunc_60(u32 idx) {
    typedef BOOL (D::*Fn)();
    static Fn tbl[4] = {&D::func_ov004_0222548c, &D::func_ov004_02225440, &D::func_ov004_022253c4,
                        &D::func_ov004_0222532c};
    if (idx < 4) {
        if ((this->*tbl[idx])() != 0) {
            unk_248.unk_04 = idx;
            return TRUE;
        }
    }
    return FALSE;
}

struct Unk_ov004_022255ec_Pad {
    s32 v[4];
    Unk_ov004_022255ec_Pad() {}
    ~Unk_ov004_022255ec_Pad() {}
};

void D::vfunc_64(Vec *out) {
    Unk_ov004_022255ec_Pad pad;
    out->x = 0xc000;
    out->y = 0;
    out->z = 0x17000;
}

BOOL D::vfunc_0c() {
    func_ov004_022252bc();
    func_ov004_02224f60();
    data_ov004_02250be4 = 0;
    return TRUE;
}

BOOL D::vfunc_24() {
    unk_ec.func_020547cc(0);
    return TRUE;
}

BOOL D::vfunc_18() {
    func_ov004_022254c4();
    return TRUE;
}

BOOL D::vfunc_00() {
    data_ov004_02250be4 = this;
    unk_370 = 0;
    func_ov004_02224fc8(data_ov004_0224d700, data_ov004_0224d71c);
    func_ov004_022252cc();
    if (unk_1a4.func_ov004_02224d8c(0) != 0) {
        if (unk_ec.func_02054800(data_021c620c) != 0) {
            s32 r = unk_1a4.func_ov004_02224d8c(0);
            unk_ec.func_02054720(r, 1, 0x1000, 0, 0);
            unk_ec.func_02054710();
        }
    }
    return TRUE;
}

Unk_ov004_0224d618::~Unk_ov004_0224d618() {
}

Unk_ov004_0224d618::Unk_ov004_0224d618() {
}

extern "C" D *func_ov004_02225790() {
    return new D;
}

void Unk_ov004_022257e4_Ext::func_ov004_022257e4() {
    unk_ec.func_020547e4();
    func_020566bc((u8 *)this + 0x290);
    *(u32 *)*(u32 *)((u8 *)this + 0x2a8) = *(u32 *)((u8 *)this + 0x298);
    u32 t = unk_494;
    func_020e7820(&t, 0, 0x100, 0x1000);
    func_ov004_02225cd4(this, t);
    if (unk_ec.func_02056654() != 0) {
        vfunc_60(0);
    } else {
        if (unk_ec.func_020565e8(0x3a) != 0) {
            func_0200402c(0x4ee);
        }
    }
}
