#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef vfunc_08
#undef vfunc_14

extern "C" {
void func_020ed174();
void func_020ed188(void *p);
void func_020020b8(u32 x);
void func_ov092_02291c5c();
BOOL func_0206ef00();
}

class Unk_ov100_02297778;

class Unk_ov100_020b85f8 {
public:
    Unk_ov100_020b85f8();
    u32 unk_00[0x38 / 4];
};

class Unk_ov100_02293a80 {
public:
    Unk_ov100_02293a80();
    void func_ov094_0229324c(s32 a, s32 b);
    void func_ov094_02293764(void *p);
    void func_ov094_022937a0();
    void func_ov094_022932d0(s32 a, s32 b);
    u32 unk_00[0xa60 / 4];
};

class Unk_ov100_022946a8 {
public:
    Unk_ov100_022946a8();
    void func_ov094_02293d2c();
    void func_ov094_022941a0(s32 a, s32 b);
    void func_ov094_022941f8(s32 a);
    u32 unk_00[0x28 / 4];
};

class Unk_ov100_02292d6c {
public:
    Unk_ov100_02292d6c();
    void func_ov094_0229277c(s32 a);
    u32 unk_00[0x15e0 / 4];
};

class Unk_ov100_02200800 {
public:
    Unk_ov100_02200800();
    virtual ~Unk_ov100_02200800();
    virtual void vfunc_08();
    u32 unk_04[(0xc0 - 4) / 4];
};

class Unk_ov100_022027d0 {
public:
    Unk_ov100_022027d0();
    u32 unk_00[0x18 / 4];
};

class Unk_ov100_02202658 {
public:
    Unk_ov100_02202658();
    void func_ov002_02202844();
    u32 unk_00[0x64 / 4];
};

class Unk_ov100_022024a0 {
public:
    Unk_ov100_022024a0();
    u32 unk_00[0x300 / 4];
};

class Unk_ov100_02204400 {
public:
    Unk_ov100_02204400();
    u32 unk_00[0x108 / 4];
};

class Unk_ov100_0206fcc8 {
public:
    Unk_ov100_0206fcc8();
    ~Unk_ov100_0206fcc8();
    u32 unk_00[0x40 / 4];
};

// Vtable 0x022044e4 (declaration copied from src/ov002/unk_ov002_02200680.cpp; sub-objects opaque)
class Unk_ov002_022044e4 : public Unk_020d8c7c {
public:
    Unk_ov002_022044e4();
    virtual ~Unk_ov002_022044e4();
    static void *operator new(unsigned long size);
    static void operator delete(void *p);

    virtual BOOL vfunc_04();
    virtual void vfunc_08(s32 a);
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_14(s32 a);
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_1c();
    virtual BOOL vfunc_20();
    virtual BOOL vfunc_48();
    virtual BOOL vfunc_4c();
    virtual BOOL vfunc_50();
    virtual BOOL vfunc_54();
    virtual BOOL vfunc_58();
    virtual BOOL vfunc_5c();

    void func_ov002_02200840(s32 a, s32 b, s32 c);
    void func_ov002_02200850(s32 a);
    void func_ov002_022008e0(s32 a, s32 b, s32 c, s32 d);
    BOOL func_ov002_02200908(s32 a);
    s32 func_ov002_02200920();
    void func_ov002_02200a50(u8 v);
    void func_ov002_02200a58(u8 v);
    void func_ov002_02200a60(u8 v);

    /* 0x50 */ u8 unk_50[0x14];
    /* 0x64 */ u32 unk_64;
    /* 0x68 */ u32 unk_68;
    /* 0x6c */ Unk_ov002_022044e4 *unk_6c;
    /* 0x70 */ u8 unk_70[0x1c];
    /* 0x8c */ u8 unk_8c;
    /* 0x8d */ u8 unk_8d;
    /* 0x8e */ u8 unk_8e;
    /* 0x8f */ u8 unk_8f;
    /* 0x90 */ u8 unk_90;
};

typedef void (Unk_ov100_02297778::*Unk_ov100_02297778_Fn)();

// Vtable 0x02297778 (same layout as ov100_000's declaration, plus sub-object ctors)
class Unk_ov100_02297778 : public Unk_ov002_022044e4 {
public:
    Unk_ov100_02297778()
        : unk_94(), unk_cc(), unk_b2c(), unk_b54(), unk_2134(), unk_21f4(), unk_220c(), unk_2270(), unk_2570(), unk_2678() {}
    virtual ~Unk_ov100_02297778();

    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_24();
    virtual BOOL vfunc_4c();
    virtual BOOL vfunc_50();
    virtual BOOL vfunc_54();
    virtual BOOL vfunc_58();
    virtual BOOL vfunc_5c();

    // out-of-range callees (declarations only)
    void func_ov100_02294d70(u32 mask);
    BOOL func_ov100_02294d80(u32 mask);
    void func_ov100_02295950();
    void func_ov100_02295c90();
    void func_ov100_02296cc8();
    void func_ov100_02296cd8();
    void func_ov100_02296db4();
    void func_ov100_02296dc8();
    void func_ov100_02296dfc();
    void func_ov100_02296e34();
    void func_ov100_02296e68();
    void func_ov100_02296e70();
    void func_ov100_02296e8c();
    void func_ov100_02296ec0();

    // state functions (table targets)
    void func_ov100_022963e8();
    void func_ov100_02296428();
    void func_ov100_02296460();
    void func_ov100_02296480();
    void func_ov100_022964c4();
    void func_ov100_02296500();
    void func_ov100_0229653c();
    void func_ov100_02296590();
    void func_ov100_022965d8();
    void func_ov100_02296630();
    void func_ov100_02296660();
    void func_ov100_02296690();
    void func_ov100_022966b8();
    void func_ov100_022966f8();
    void func_ov100_02296748();
    void func_ov100_02296798();
    void func_ov100_02296814();
    void func_ov100_022968d8();
    void func_ov100_02296a58();
    void func_ov100_02296b58();
    void func_ov100_02296be4();
    void func_ov100_02296c3c();
    void func_ov100_02296fbc();
    void func_ov100_0229700c();
    void func_ov100_02297078();
    void func_ov100_022970ec();

    // in range
    void func_ov100_02297128();
    void func_ov100_022971ac();
    void func_ov100_0229723c();
    void func_ov100_0229728c();

    /* 0x0094 */ Unk_ov100_020b85f8 unk_94[1];
    /* 0x00cc */ Unk_ov100_02293a80 unk_cc;
    /* 0x0b2c */ Unk_ov100_022946a8 unk_b2c;
    /* 0x0b54 */ Unk_ov100_02292d6c unk_b54;
    /* 0x2134 */ Unk_ov100_02200800 unk_2134;
    /* 0x21f4 */ Unk_ov100_022027d0 unk_21f4;
    /* 0x220c */ Unk_ov100_02202658 unk_220c;
    /* 0x2270 */ Unk_ov100_022024a0 unk_2270;
    /* 0x2570 */ Unk_ov100_02204400 unk_2570;
    /* 0x2678 */ Unk_ov100_0206fcc8 unk_2678[2];
    /* 0x26f8 */ u32 unk_26f8;
    /* 0x26fc */ s32 unk_26fc;
    /* 0x2700 */ s32 unk_2700;
    /* 0x2704 */ u8 unk_2704[0x10];
    /* 0x2714 */ u16 unk_2714[15];
    /* 0x2732 */ u16 unk_2732[15];
    /* 0x2750 */ u8 unk_2750[2];
    /* 0x2752 */ s16 unk_2752;
    /* 0x2754 */ u8 unk_2754[5];
    /* 0x2759 */ u8 unk_2759;
    /* 0x275a */ u8 unk_275a;
    /* 0x275b */ u8 unk_275b;
    /* 0x275c */ u8 unk_275c;
    /* 0x275d */ u8 unk_275d;
    /* 0x275e */ u8 unk_275e;
    /* 0x275f */ u8 unk_275f;
    /* 0x2760 */ u8 unk_2760;
};

void Unk_ov100_02297778::func_ov100_02297128() {
    BOOL b = func_ov002_02200908(0);
    func_ov002_02200840(6, 0, 0);
    unk_26fc = func_ov002_02200920();
    if (b) {
        func_ov100_02296cd8();
        func_ov002_022008e0(2, 0, 1, 0x30);
        func_ov002_02200850(0x80);
        func_ov100_02294d70(0x80);
        func_020020b8(4);
        func_ov002_02200840(4, 0, 0);
        unk_2700 = func_ov002_02200920();
        func_ov002_02200a50(3);
    }
}

void Unk_ov100_02297778::func_ov100_022971ac() {
    func_ov100_02296cc8();
    unk_cc.func_ov094_022937a0();
    unk_cc.func_ov094_02293764(unk_2714);
    func_ov100_02295c90();
    unk_b2c.func_ov094_02293d2c();
    unk_b2c.func_ov094_022941f8(0xf);
    func_ov002_022008e0(8, 0, 0, 0x30);
    func_020020b8(6);
    func_ov002_02200840(6, 0, 0);
    func_ov002_02200a50(2);
    func_ov100_02294d70(1);
    func_ov100_02294d70(2);
    unk_26fc = func_ov002_02200920();
}

void Unk_ov100_02297778::func_ov100_0229723c() {
    func_ov100_02296dc8();
    func_ov100_02296db4();
    func_ov002_02200a50(1);
}

BOOL Unk_ov100_02297778::vfunc_5c() {
    func_020ed188(this);
    return TRUE;
}

BOOL Unk_ov100_02297778::vfunc_58() { return TRUE; }

BOOL Unk_ov100_02297778::vfunc_54() { return TRUE; }

BOOL Unk_ov100_02297778::vfunc_50() {
    func_ov100_02296e70();
    func_ov100_0229728c();
    func_ov100_02296e68();
    return TRUE;
}

void Unk_ov100_02297778::func_ov100_0229728c() {
    static Unk_ov100_02297778_Fn tbl[22] = {
        &Unk_ov100_02297778::func_ov100_02296c3c, &Unk_ov100_02297778::func_ov100_02296be4,
        &Unk_ov100_02297778::func_ov100_02296b58, &Unk_ov100_02297778::func_ov100_02296a58,
        &Unk_ov100_02297778::func_ov100_022968d8, &Unk_ov100_02297778::func_ov100_02296814,
        &Unk_ov100_02297778::func_ov100_02296798, &Unk_ov100_02297778::func_ov100_02296748,
        &Unk_ov100_02297778::func_ov100_022966f8, &Unk_ov100_02297778::func_ov100_022966b8,
        &Unk_ov100_02297778::func_ov100_02296690, &Unk_ov100_02297778::func_ov100_02296660,
        &Unk_ov100_02297778::func_ov100_02296630, &Unk_ov100_02297778::func_ov100_022965d8,
        &Unk_ov100_02297778::func_ov100_02296590, &Unk_ov100_02297778::func_ov100_0229653c,
        &Unk_ov100_02297778::func_ov100_02296500, &Unk_ov100_02297778::func_ov100_022964c4,
        &Unk_ov100_02297778::func_ov100_02296480, &Unk_ov100_02297778::func_ov100_02296460,
        &Unk_ov100_02297778::func_ov100_02296428, &Unk_ov100_02297778::func_ov100_022963e8};
    (this->*tbl[unk_8d])();
}

BOOL Unk_ov100_02297778::vfunc_4c() {
    static Unk_ov100_02297778_Fn tbl[7] = {
        &Unk_ov100_02297778::func_ov100_0229723c, &Unk_ov100_02297778::func_ov100_022971ac,
        &Unk_ov100_02297778::func_ov100_02297128, &Unk_ov100_02297778::func_ov100_022970ec,
        &Unk_ov100_02297778::func_ov100_02297078, &Unk_ov100_02297778::func_ov100_0229700c,
        &Unk_ov100_02297778::func_ov100_02296fbc};
    func_ov100_02296e34();
    (this->*tbl[unk_8c])();
    func_ov100_02296dfc();
    return TRUE;
}

BOOL Unk_ov100_02297778::vfunc_24() {
    if (!func_ov100_02294d80(1)) {
        return TRUE;
    }
    unk_2134.vfunc_08();
    if (func_0206ef00()) {
        unk_220c.func_ov002_02202844();
    }
    func_ov100_02295950();
    if (func_ov100_02294d80(0x80)) {
        unk_cc.func_ov094_0229324c(0, unk_2700);
    }
    if (func_ov100_02294d80(2)) {
        unk_cc.func_ov094_022932d0(0, unk_26fc);
        unk_b2c.func_ov094_022941a0(0, unk_26fc);
        unk_b54.func_ov094_0229277c(unk_26fc);
    }
    return TRUE;
}

BOOL Unk_ov100_02297778::vfunc_0c() {
    func_020ed174();
    func_ov092_02291c5c();
    func_ov100_02296e8c();
    return TRUE;
}

BOOL Unk_ov100_02297778::vfunc_00() {
    func_ov100_02296ec0();
    func_ov002_02200a50(0);
    func_ov002_02200a60(0);
    return TRUE;
}

extern "C" Unk_ov100_02297778 *func_ov100_022975ac() { return new Unk_ov100_02297778(); }

Unk_ov100_02297778::~Unk_ov100_02297778() {}
