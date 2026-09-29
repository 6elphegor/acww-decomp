// mwcc-version: 1.2/sp2
#include "types.h"
#include "Unk_020d8c7c.h"

// ---------------------------------------------------------------- shared library-side classes
struct Unk_02002f14_Node {
    void *unk_00;
    void *unk_04;
    void *unk_08;
};

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
    virtual ~Unk_020d5d84();

    /* 0x50 */ Unk_02002f14_Node unk_50;
    /* 0x5c */ s32 unk_5c[3];
    /* 0x68 */ u8 pad_68[0x8e - 0x68];
    /* 0x8e */ s16 unk_8e;
    /* 0x90 */ u8 pad_90[0xd4 - 0x90];
};

struct Unk_0203e5d0_Node {
    u32 unk_00;
    Unk_0203e5d0_Node *unk_04;
    u32 unk_08;
    void *unk_0c;
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
    /* 0xea */ u16 pad_ea;
};

class Unk_020e2a30 {
public:
    Unk_020e2a30();
    virtual ~Unk_020e2a30();
    virtual void vfunc_s08();

    /* 0x04 */ char unk_04[0x1a];
    /* 0x1e */ u8 unk_1e;
};

// Secondary base at +0x290 of the class Unk_ov004_0224dd98 (ctor func_0206606c, dtor func_02065fd0).
class Unk_020ddcf0 : public Unk_020e2a30 {
public:
    Unk_020ddcf0();
    virtual ~Unk_020ddcf0();
    virtual void vfunc_s08();
    virtual void vfunc_s0c();
    // slots 0x10..0x18 are overridden by the derived class's own virtuals (same functions as its vtable slots 0x68..0x70)
    virtual void vfunc_68();
    virtual void vfunc_6c();
    virtual void vfunc_70();
    virtual void vfunc_s1c();

    u8 pad_20[0x24];
};

struct Unk_020d8cf4 {
    Unk_020d8cf4();
    ~Unk_020d8cf4();
    virtual void vfunc_00();
    u8 pad_04[0x94];
    u8 unk_98;
};

struct Unk_020b6e10 {
    Unk_020b6e10();
    ~Unk_020b6e10();
    u8 pad[0x2a8];
};

struct Unk_020b6960 {
    BOOL func_020b6928(Unk_020b6e10 *box);
};

struct Unk_ov004_022288c0_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

extern "C" {
Unk_020b6960 *func_020b50b4();
BOOL func_02056654(void *p);
void func_020547e4(void *p);
void func_020547cc(void *p, u32 a);
void func_02054710(void *p);
BOOL func_02054800(void *p, u32 a);
void func_02054720(void *p, u32 a, u32 b, u32 c, u32 d, u32 e);
s32 func_02063a9c(s32 a, s32 b, s32 c, s32 d, s32 e);
s32 func_020e780c(s32 a, s32 b);
s32 func_020e77cc(s32 a, s32 b, s32 c);
BOOL func_0206f11c();
s32 func_020e9650(s32 *a, s32 *b);
u32 func_ov004_02224d8c(void *p, u32 i);
void func_ov004_02224ca4(void *p, u32 v);
void func_ov004_02224c90(void *p, u32 v);
extern char data_ov004_0224de8c[];
extern u32 data_021c620c;
}

// ---------------------------------------------------------------- base class of the ov004 state actors (vtable 0x0224d4e8, size 0x290)
class Unk_ov004_0224d4e8 : public Unk_020d9670 {
public:
    Unk_ov004_0224d4e8();
    virtual ~Unk_ov004_0224d4e8();
    virtual BOOL vfunc_60(u32 idx);
    virtual BOOL vfunc_64();
    virtual void vfunc_68();
    virtual void vfunc_6c();
    virtual void vfunc_70();

    void func_ov004_02224f58(s32 a);
    void func_ov004_02224f60();
    void func_ov004_02224f90(char *s);
    s32 func_ov004_02224f3c();
    BOOL func_ov004_02224f20(s32 a);

    /* 0x0ec */ u8 unk_ec[0x9c];
    /* 0x188 */ u8 unk_188[0x10];
    /* 0x198 */ s32 unk_198;
    /* 0x19c */ u8 pad_19c[0x1a4 - 0x19c];
    /* 0x1a4 */ u8 unk_1a4[0x248 - 0x1a4];
    /* 0x248 */ u8 unk_248[4];
    /* 0x24c */ u8 unk_24c;
    /* 0x24d */ u8 pad_24d[3];
    /* 0x250 */ u8 unk_250[0x40];
};

// ---------------------------------------------------------------- Unk_ov004_0224dd98
class Unk_ov004_0224dd98 : public Unk_ov004_0224d4e8, public Unk_020ddcf0 {
public:
    Unk_ov004_0224dd98();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_24();
    virtual ~Unk_ov004_0224dd98();
    virtual BOOL vfunc_48(void *a);
    virtual void vfunc_4c(u32 a, u8 b);
    virtual BOOL vfunc_60(u32 idx);
    virtual void vfunc_68();
    virtual void vfunc_6c();
    virtual void vfunc_70();

    void func_ov004_02227e3c();
    void func_ov004_02227e4c();
    void func_ov004_02228008();
    BOOL func_ov004_02227ee0();
    BOOL func_ov004_02227f14();
    BOOL func_ov004_02227f4c();
    BOOL func_ov004_02227f90();
    BOOL func_ov004_02227fb8();
    BOOL func_ov004_02228004();

    BOOL func_ov004_022280b0(s32 m);
    void func_ov004_02228168();
    BOOL func_ov004_02228198();
    void func_ov004_022281e0();
    BOOL func_ov004_022281e4();
    void func_ov004_0222821c();
    BOOL func_ov004_0222824c();
    void func_ov004_02228294();
    BOOL func_ov004_02228298();
    void func_ov004_022282d0();

    /* 0x2d4 */ Unk_020d8cf4 unk_2d4;
    /* 0x370 */ Unk_020b6e10 unk_370;
    /* 0x618 */ s32 unk_618;
};

extern "C" {
extern Unk_ov004_0224dd98 *data_ov004_02250e50;
}

// ---------------------------------------------------------------- Unk_ov004_0224def8
class Unk_ov004_0224def8 : public Unk_ov004_0224d4e8 {
public:
    virtual BOOL vfunc_60(u32 idx);

    void func_ov004_022287a4();
    BOOL func_ov004_02228800();
    void func_ov004_02228818();
    BOOL func_ov004_02228870();
    void func_ov004_02228874();
    BOOL func_ov004_0222889c();
    void func_ov004_022288b8();
    BOOL func_ov004_022288bc();
    void func_ov004_022288c0();

    /* 0x290 */ u8 pad_290[0x334 - 0x290];
    /* 0x334 */ Unk_ov004_022288c0_Bits unk_334;
    /* 0x338 */ u8 pad_338[4];
    /* 0x33c */ s32 unk_33c;
    /* 0x340 */ u8 pad_340[0x428 - 0x340];
    /* 0x428 */ s32 unk_428;
    /* 0x42c */ u8 pad_42c[0x43c - 0x42c];
    /* 0x43c */ s32 unk_43c;
};

extern "C" {
extern Unk_ov004_0224def8 *data_ov004_02250f18;
}

typedef void (Unk_ov004_0224dd98::*Unk_ov004_02228168_Fn)();
typedef BOOL (Unk_ov004_0224dd98::*Unk_ov004_022280b0_Fn)();
typedef void (Unk_ov004_0224def8::*Unk_ov004_022288c0_Fn)();
typedef BOOL (Unk_ov004_0224def8::*Unk_ov004_0222894c_Fn)();

// ================================================================ Unk_ov004_0224dd98
BOOL Unk_ov004_0224dd98::func_ov004_022280b0(s32 m) {
    static Unk_ov004_022280b0_Fn tbl[6] = {
        (Unk_ov004_022280b0_Fn)&Unk_ov004_0224dd98::func_ov004_02228004,
        (Unk_ov004_022280b0_Fn)&Unk_ov004_0224dd98::func_ov004_02227fb8,
        (Unk_ov004_022280b0_Fn)&Unk_ov004_0224dd98::func_ov004_02227f90,
        (Unk_ov004_022280b0_Fn)&Unk_ov004_0224dd98::func_ov004_02227f4c,
        (Unk_ov004_022280b0_Fn)&Unk_ov004_0224dd98::func_ov004_02227f14,
        (Unk_ov004_022280b0_Fn)&Unk_ov004_0224dd98::func_ov004_02227ee0,
    };
    if (m < 6) {
        if ((this->*tbl[m])()) {
            unk_618 = m;
            return TRUE;
        }
    }
    return FALSE;
}

void Unk_ov004_0224dd98::func_ov004_02228168() {
    if (func_02056654(unk_188)) {
        vfunc_60(0);
    } else {
        func_020547e4(unk_ec);
    }
}

BOOL Unk_ov004_0224dd98::func_ov004_02228198() {
    func_02054720(unk_ec, func_ov004_02224d8c(unk_1a4, 1), 1, 0x1000, 0, 0);
    func_ov004_02224ca4(unk_250, 0x4d7);
    return TRUE;
}

void Unk_ov004_0224dd98::func_ov004_022281e0() {}

BOOL Unk_ov004_0224dd98::func_ov004_022281e4() {
    func_02054720(unk_ec, func_ov004_02224d8c(unk_1a4, 1), 1, 0x1000, 0, 0);
    return TRUE;
}

void Unk_ov004_0224dd98::func_ov004_0222821c() {
    if (func_02056654(unk_188)) {
        vfunc_60(2);
    } else {
        func_020547e4(unk_ec);
    }
}

BOOL Unk_ov004_0224dd98::func_ov004_0222824c() {
    func_02054720(unk_ec, func_ov004_02224d8c(unk_1a4, 0), 1, 0x1000, 0, 0);
    func_ov004_02224ca4(unk_250, 0x4d6);
    return TRUE;
}

void Unk_ov004_0224dd98::func_ov004_02228294() {}

BOOL Unk_ov004_0224dd98::func_ov004_02228298() {
    func_02054720(unk_ec, func_ov004_02224d8c(unk_1a4, 0), 1, 0x1000, 0, 0);
    return TRUE;
}

void Unk_ov004_0224dd98::func_ov004_022282d0() {
    static Unk_ov004_02228168_Fn tbl[4] = {
        &Unk_ov004_0224dd98::func_ov004_02228294,
        &Unk_ov004_0224dd98::func_ov004_0222821c,
        &Unk_ov004_0224dd98::func_ov004_022281e0,
        &Unk_ov004_0224dd98::func_ov004_02228168,
    };
    u32 i = unk_24c;
    if (i < 4) {
        (this->*tbl[i])();
    }
}

BOOL Unk_ov004_0224dd98::vfunc_60(u32 idx) {
    static Unk_ov004_022280b0_Fn tbl[4] = {
        (Unk_ov004_022280b0_Fn)&Unk_ov004_0224dd98::func_ov004_02228298,
        (Unk_ov004_022280b0_Fn)&Unk_ov004_0224dd98::func_ov004_0222824c,
        (Unk_ov004_022280b0_Fn)&Unk_ov004_0224dd98::func_ov004_022281e4,
        (Unk_ov004_022280b0_Fn)&Unk_ov004_0224dd98::func_ov004_02228198,
    };
    if (idx < 4) {
        if ((this->*tbl[idx])()) {
            if (func_ov004_02224f20(idx)) {
                unk_24c = idx;
                return TRUE;
            }
        }
    }
    return FALSE;
}

void Unk_ov004_0224dd98::vfunc_4c(u32 a, u8 b) {
    switch (a) {
    case 0:
        func_ov004_022280b0(1);
        break;
    case 8:
        func_ov004_022280b0(0);
        break;
    }
}

BOOL Unk_ov004_0224dd98::vfunc_48(void *a) {
    Unk_020d9670 *o = (Unk_020d9670 *)a;
    if (o) {
        if (func_020e9650(o->unk_5c, unk_5c) < 0x299a) {
            if (func_020e780c((s16)(unk_8e + 0x8000), o->unk_8e) < 0x1200) {
                return TRUE;
            }
        }
    }
    return FALSE;
}

BOOL Unk_ov004_0224dd98::vfunc_0c() {
    func_ov004_02227e3c();
    func_ov004_02224f60();
    data_ov004_02250e50 = 0;
    return TRUE;
}

BOOL Unk_ov004_0224dd98::vfunc_24() {
    func_020547cc(unk_ec, 0);
    return TRUE;
}

BOOL Unk_ov004_0224dd98::vfunc_18() {
    func_ov004_022282d0();
    func_ov004_02228008();
    func_020b50b4()->func_020b6928(&unk_370);
    return TRUE;
}

BOOL Unk_ov004_0224dd98::vfunc_00() {
    data_ov004_02250e50 = this;
    func_ov004_02224f58(0);
    func_ov004_02224f90(data_ov004_0224de8c);
    func_ov004_02227e4c();
    if (func_ov004_02224d8c(unk_1a4, 0)) {
        if (func_02054800(unk_ec, data_021c620c)) {
            func_02054720(unk_ec, func_ov004_02224d8c(unk_1a4, 0), 1, 0x1000, 0, 0);
            func_02054710(unk_ec);
        }
    }
    func_ov004_022280b0(0);
    vfunc_60(func_ov004_02224f3c());
    return TRUE;
}

Unk_ov004_0224dd98::~Unk_ov004_0224dd98() {}

Unk_ov004_0224dd98::Unk_ov004_0224dd98() {}

extern "C" Unk_ov004_0224dd98 *func_ov004_02228658() {
    return new Unk_ov004_0224dd98;
}

// ================================================================ Unk_ov004_0224def8
void Unk_ov004_0224def8::func_ov004_022287a4() {
    s32 r = 0x1000 - func_02063a9c(unk_43c, 0, 0x28000, 0xa000, 0xa000);
    unk_198 = r;
    unk_428 = r;
    unk_43c += 0x1000;
    if (r == 0) {
        vfunc_60(0);
    }
}

BOOL Unk_ov004_0224def8::func_ov004_02228800() {
    unk_33c = 0;
    unk_43c = 0;
    return TRUE;
}

void Unk_ov004_0224def8::func_ov004_02228818() {
    u32 t = unk_334.mid;
    u32 q = (u16)(t / 0x38);
    if (func_020e77cc((u16)(t - q * 0x38), 0x11, 0x34)) {
        if (!func_0206f11c()) {
            func_ov004_02224c90(unk_250, 0x85e);
        }
    }
}

BOOL Unk_ov004_0224def8::func_ov004_02228870() {
    return TRUE;
}

void Unk_ov004_0224def8::func_ov004_02228874() {
    unk_198 = 0x1000;
    unk_428 = 0x1000;
    vfunc_60(2);
}

BOOL Unk_ov004_0224def8::func_ov004_0222889c() {
    unk_33c = 0x1000;
    unk_43c = 0;
    return TRUE;
}

void Unk_ov004_0224def8::func_ov004_022288b8() {}

BOOL Unk_ov004_0224def8::func_ov004_022288bc() {
    return TRUE;
}

void Unk_ov004_0224def8::func_ov004_022288c0() {
    static Unk_ov004_022288c0_Fn tbl[4] = {
        &Unk_ov004_0224def8::func_ov004_022288b8,
        &Unk_ov004_0224def8::func_ov004_02228874,
        &Unk_ov004_0224def8::func_ov004_02228818,
        &Unk_ov004_0224def8::func_ov004_022287a4,
    };
    u32 i = unk_24c;
    if (i < 4) {
        (this->*tbl[i])();
    }
}

BOOL Unk_ov004_0224def8::vfunc_60(u32 idx) {
    static Unk_ov004_0222894c_Fn tbl[4] = {
        (Unk_ov004_0222894c_Fn)&Unk_ov004_0224def8::func_ov004_022288bc,
        (Unk_ov004_0222894c_Fn)&Unk_ov004_0224def8::func_ov004_0222889c,
        (Unk_ov004_0222894c_Fn)&Unk_ov004_0224def8::func_ov004_02228870,
        (Unk_ov004_0222894c_Fn)&Unk_ov004_0224def8::func_ov004_02228800,
    };
    if (idx < 4) {
        if ((this->*tbl[idx])()) {
            unk_24c = idx;
            return TRUE;
        }
    }
    return FALSE;
}

// ================================================================ free functions
extern "C" u32 func_ov004_02228700() {
    Unk_ov004_0224def8 *g = data_ov004_02250f18;
    if (g) {
        return g->unk_334.mid;
    }
    return 0;
}

extern "C" void func_ov004_02228720(u32 x) {
    Unk_ov004_0224def8 *g = data_ov004_02250f18;
    if (g) {
        *(u32 *)&g->unk_334 = x << 12;
    }
}

extern "C" BOOL func_ov004_02228738() {
    Unk_ov004_0224def8 *g = data_ov004_02250f18;
    if (g) {
        u32 t = g->unk_24c;
        if (t == 3 || t == 0) {
            return TRUE;
        }
    }
    return FALSE;
}

extern "C" BOOL func_ov004_0222875c() {
    Unk_ov004_0224def8 *g = data_ov004_02250f18;
    if (g) {
        return g->vfunc_60(3);
    }
    return 0;
}

extern "C" BOOL func_ov004_02228780() {
    Unk_ov004_0224def8 *g = data_ov004_02250f18;
    if (g) {
        return g->vfunc_60(1);
    }
    return 0;
}

extern "C" Unk_ov004_0224dd98 *func_ov004_0222864c() {
    return data_ov004_02250e50;
}
