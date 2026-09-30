#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef vfunc_08
#undef vfunc_14

extern "C" {
void *func_020ed174(void *p);
void func_020ed188(void *p);
void func_020020b8(u32 x);
void func_020021a0(u32 x);
void func_02002398(u32 a, u32 b);
void func_0200226c(u32 a, u32 b, u32 c, u32 d);
void func_ov092_02291c5c();
void func_ov092_02291ce4(void *a, s32 b, s32 c);
BOOL func_0206ef00();
void func_0206e63c();
BOOL func_0206e61c();
}

class Unk_ov109_02296698;

class Unk_ov109_020b85f8 {
public:
    Unk_ov109_020b85f8();
    u32 unk_00[0x38 / 4];
};

class Unk_ov109_02293a80 {
public:
    Unk_ov109_02293a80();
    void func_ov094_022937a0();
    void func_ov094_02293998();
    void func_ov094_022939a0();
    void func_ov094_022939c0(s32 a);
    void func_ov094_022932d0(s32 a, s32 b);
    u32 unk_00[0xa60 / 4];
};

class Unk_ov109_022946a8 {
public:
    Unk_ov109_022946a8();
    void func_ov094_0229462c();
    void func_ov094_02294644(s32 a);
    void func_ov094_02293d2c();
    void func_ov094_022941f8(s32 a);
    void func_ov094_022941a0(s32 a, s32 b);
    u32 unk_00[0x28 / 4];
};

class Unk_ov109_02292d6c {
public:
    Unk_ov109_02292d6c();
    void func_ov094_02292a80();
    void func_ov094_02292aa4();
    void func_ov094_02292acc();
    void func_ov094_02292ae0();
    void func_ov094_02292d1c(s32 a);
    void func_ov094_02292d30(s32 a);
    void func_ov094_0229277c(s32 a);
    u32 unk_00[0x15e0 / 4];
};

class Unk_ov109_02200800 {
public:
    Unk_ov109_02200800();
    virtual ~Unk_ov109_02200800();
    virtual void vfunc_08();
    BOOL func_ov002_0220071c();
    void func_ov002_022006e4(s32 a);
    u32 unk_04[(0xc0 - 4) / 4];
};

class Unk_ov109_022027d0 {
public:
    Unk_ov109_022027d0();
    void func_ov002_022027a4();
    u32 unk_00[0x18 / 4];
};

class Unk_ov109_02202658 {
public:
    Unk_ov109_02202658();
    virtual ~Unk_ov109_02202658();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    void func_ov002_02202844();
    u32 unk_04[(0x64 - 4) / 4];
};

class Unk_ov109_022024a0 {
public:
    Unk_ov109_022024a0();
    void func_ov002_02201b04();
    void func_ov002_02201b28();
    void func_ov002_02201b58();
    void func_ov002_02202310(s32 a, s32 b, s32 c);
    u32 unk_00[0x300 / 4];
};

class Unk_ov109_02204400 {
public:
    Unk_ov109_02204400();
    u32 unk_00[0x108 / 4];
};

class Unk_ov109_02203994 {
public:
    Unk_ov109_02203994();
    void func_ov002_02203900();
    void func_ov002_02203920();
    void func_ov002_02203510(s32 a);
    void func_ov002_022036a4(s32 a);
    u32 unk_00[0x164 / 4];
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
    void func_ov002_022008c4(s32 a, s32 b, s32 c, s32 d);
    void func_ov002_022008e0(s32 a, s32 b, s32 c, s32 d);
    BOOL func_ov002_022008fc(s32 a);
    BOOL func_ov002_02200908(s32 a);
    s32 func_ov002_02200914();
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

typedef void (Unk_ov109_02296698::*Unk_ov109_02296698_Fn)();

// Vtable 0x02296698
class Unk_ov109_02296698 : public Unk_ov002_022044e4 {
public:
    Unk_ov109_02296698()
        : unk_94(), unk_cc(), unk_b2c(), unk_b54(), unk_2134(), unk_21f4(), unk_220c(), unk_2270(), unk_2570(), unk_2678() {}
    virtual ~Unk_ov109_02296698();

    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_24();
    virtual BOOL vfunc_4c();
    virtual BOOL vfunc_50();
    virtual BOOL vfunc_54();
    virtual BOOL vfunc_58();
    virtual BOOL vfunc_5c();

    // in range
    void func_ov109_02295ea8();
    void func_ov109_02295ecc();
    void func_ov109_02295ee0();
    void func_ov109_02295f00();
    void func_ov109_02295f38();
    void func_ov109_02295f74();
    void func_ov109_02295f7c();
    void func_ov109_02295f98();
    void func_ov109_02295fd4();
    void func_ov109_02296050();
    void func_ov109_022960a0();
    void func_ov109_02296120();
    void func_ov109_02296160();
    void func_ov109_022961f0();
    void func_ov109_02296274();

    // out-of-range callees (declarations only)
    void func_ov109_02294d4c(u32 mask);
    void func_ov109_02294d5c(u32 mask);
    BOOL func_ov109_02294d6c(u32 mask);
    void func_ov109_02294f58();
    void func_ov109_02294f8c();
    void func_ov109_022952e8();
    void func_ov109_022953b8();
    void func_ov109_02295448();
    void func_ov109_022955d0();
    void func_ov109_02295780();
    void func_ov109_0229585c();
    // state function table targets (other groups)
    void func_ov109_022958d4();
    void func_ov109_02295938();
    void func_ov109_02295968();
    void func_ov109_02295988();
    void func_ov109_022959d8();
    void func_ov109_02295a14();
    void func_ov109_02295a3c();
    void func_ov109_02295a74();
    void func_ov109_02295ab8();
    void func_ov109_02295b08();
    void func_ov109_02295b94();
    void func_ov109_02295c70();
    void func_ov109_02295d18();
    void func_ov109_02295d60();
    void func_ov109_02295d90();
    void func_ov109_02295e28();

    /* 0x0091 */ u8 unk_91[3];
    /* 0x0094 */ Unk_ov109_020b85f8 unk_94[1];
    /* 0x00cc */ Unk_ov109_02293a80 unk_cc;
    /* 0x0b2c */ Unk_ov109_022946a8 unk_b2c;
    /* 0x0b54 */ Unk_ov109_02292d6c unk_b54;
    /* 0x2134 */ Unk_ov109_02200800 unk_2134;
    /* 0x21f4 */ Unk_ov109_022027d0 unk_21f4;
    /* 0x220c */ Unk_ov109_02202658 unk_220c;
    /* 0x2270 */ Unk_ov109_022024a0 unk_2270;
    /* 0x2570 */ Unk_ov109_02204400 unk_2570;
    /* 0x2678 */ Unk_ov109_02203994 unk_2678;
    /* 0x27dc */ u32 unk_27dc;
    /* 0x27e0 */ s32 unk_27e0;
    /* 0x27e4 */ u8 unk_27e4[0x13];
    /* 0x27f7 */ u8 unk_27f7;
    /* 0x27f8 */ u8 unk_27f8;
    /* 0x27f9 */ u8 unk_27f9;
    /* 0x27fa */ u8 unk_27fa;
    /* 0x27fb */ u8 unk_27fb;
    /* 0x27fc */ u8 unk_27fc[5];
    /* 0x2801 */ u8 unk_2801;
    /* 0x2802 */ u8 unk_2802[2];
};

void Unk_ov109_02296698::func_ov109_02295f74() { func_ov109_02295f00(); }

void Unk_ov109_02296698::func_ov109_02295ea8() {
    unk_b54.func_ov094_02292ae0();
    unk_2678.func_ov002_02203920();
}

void Unk_ov109_02296698::func_ov109_02295ecc() { unk_b54.func_ov094_02292d1c(0); }

void Unk_ov109_02296698::func_ov109_02295ee0() {
    func_02002398(6, 2);
    func_0200226c(6, 0, 0, 0);
}

void Unk_ov109_02296698::func_ov109_02295f00() {
    unk_2270.func_ov002_02201b58();
    unk_b54.func_ov094_02292aa4();
    if (unk_2134.func_ov002_0220071c()) {
        func_ov109_02295448();
    }
}

void Unk_ov109_02296698::func_ov109_02295f38() {
    func_ov109_02295780();
    unk_b54.func_ov094_02292acc();
    unk_cc.func_ov094_022939a0();
    unk_b2c.func_ov094_0229462c();
    unk_2678.func_ov002_02203900();
}

void Unk_ov109_02296698::func_ov109_02295f7c() {
    func_ov109_02295f38();
    unk_220c.vfunc_0c();
}

void Unk_ov109_02296698::func_ov109_02295f98() {
    func_ov109_02295780();
    unk_b54.func_ov094_02292a80();
    unk_cc.func_ov094_02293998();
    unk_2270.func_ov002_02201b04();
    unk_2678.func_ov002_02203900();
}

void Unk_ov109_02296698::func_ov109_02295fd4() {
    unk_27dc = 0;
    unk_cc.func_ov094_022939c0(2);
    unk_b2c.func_ov094_02294644(2);
    unk_b54.func_ov094_02292d30(6);
    unk_27f9 = 0x10;
    unk_21f4.func_ov002_022027a4();
    u32 z = 0;
    unk_27f7 = z;
    unk_27fb = z;
    unk_2270.func_ov002_02202310(3, 1, z);
    unk_2801 = 0;
}

void Unk_ov109_02296698::func_ov109_02296050() {
    if (func_ov002_022008fc(0)) {
        func_020021a0(6);
        func_ov002_02200a60(5);
        func_ov109_02294d4c(1);
        func_ov109_02294d4c(2);
    } else {
        func_ov002_02200840(6, 0, -0x10);
    }
    unk_27e0 = func_ov002_02200920();
}

void Unk_ov109_02296698::func_ov109_022960a0() {
    unk_2134.func_ov002_022006e4(1);
    func_ov109_022952e8();
    void *h = func_020ed174(this);
    if (func_ov109_02294d6c(0x40)) {
        func_ov092_02291ce4(h, 0x44, 1);
    } else {
        func_ov092_02291ce4(h, 0x40, 1);
    }
    func_ov002_022008c4(8, 0, 0, 0x30);
    func_ov002_02200840(6, 0, -0x10);
    func_ov002_02200a50(4);
    unk_27e0 = func_ov002_02200920();
}

void Unk_ov109_02296698::func_ov109_02296120() {
    if (func_ov002_02200908(0)) {
        func_ov002_02200a60(2);
        func_ov109_0229585c();
    }
    func_ov002_02200840(6, 0, -0x10);
    unk_27e0 = func_ov002_02200920();
}

void Unk_ov109_02296698::func_ov109_02296160() {
    func_ov109_02295ea8();
    unk_2678.func_ov002_02203510(0x65);
    unk_cc.func_ov094_022937a0();
    func_ov109_022955d0();
    unk_b2c.func_ov094_02293d2c();
    unk_b2c.func_ov094_022941f8(0xf);
    func_ov002_022008e0(8, 0, 0, 0x30);
    func_020020b8(6);
    func_ov002_02200840(6, 0, -0x10);
    func_ov002_02200a50(2);
    func_ov109_02294d5c(1);
    func_ov109_02294d5c(2);
    unk_27e0 = func_ov002_02200920();
}

void Unk_ov109_02296698::func_ov109_022961f0() {
    func_ov109_02295ee0();
    func_ov109_02295ecc();
    func_ov002_02200a50(1);
}

BOOL Unk_ov109_02296698::vfunc_5c() {
    func_020ed188(this);
    return TRUE;
}

BOOL Unk_ov109_02296698::vfunc_58() { return TRUE; }

BOOL Unk_ov109_02296698::vfunc_54() { return TRUE; }

BOOL Unk_ov109_02296698::vfunc_50() {
    func_0206e63c();
    if (func_0206e61c()) {
        u32 t = unk_8d;
        if (t != 0 && t != 1 && t != 5) {
        } else {
            func_ov109_02294f8c();
            func_ov109_02294f58();
            func_ov109_02294d5c(0x40);
        }
    }
    func_ov109_02295f7c();
    func_ov109_02296274();
    func_ov109_02295f74();
    return TRUE;
}

void Unk_ov109_02296698::func_ov109_02296274() {
    static Unk_ov109_02296698_Fn tbl[16] = {
        &Unk_ov109_02296698::func_ov109_02295e28,
        &Unk_ov109_02296698::func_ov109_02295d90,
        &Unk_ov109_02296698::func_ov109_02295d60,
        &Unk_ov109_02296698::func_ov109_02295d18,
        &Unk_ov109_02296698::func_ov109_02295c70,
        &Unk_ov109_02296698::func_ov109_02295b94,
        &Unk_ov109_02296698::func_ov109_02295b08,
        &Unk_ov109_02296698::func_ov109_02295ab8,
        &Unk_ov109_02296698::func_ov109_02295a74,
        &Unk_ov109_02296698::func_ov109_02295a3c,
        &Unk_ov109_02296698::func_ov109_02295a14,
        &Unk_ov109_02296698::func_ov109_022959d8,
        &Unk_ov109_02296698::func_ov109_02295988,
        &Unk_ov109_02296698::func_ov109_02295968,
        &Unk_ov109_02296698::func_ov109_02295938,
        &Unk_ov109_02296698::func_ov109_022958d4
    };
    (this->*tbl[unk_8d])();
}

BOOL Unk_ov109_02296698::vfunc_4c() {
    static Unk_ov109_02296698_Fn tbl[5] = {
        &Unk_ov109_02296698::func_ov109_022961f0,
        &Unk_ov109_02296698::func_ov109_02296160,
        &Unk_ov109_02296698::func_ov109_02296120,
        &Unk_ov109_02296698::func_ov109_022960a0,
        &Unk_ov109_02296698::func_ov109_02296050
    };
    func_ov109_02295f38();
    (this->*tbl[unk_8c])();
    func_ov109_02295f00();
    return TRUE;
}

BOOL Unk_ov109_02296698::vfunc_24() {
    unk_2270.func_ov002_02201b28();
    if (!func_ov109_02294d6c(1)) {
        return TRUE;
    }
    unk_2134.vfunc_08();
    if (func_0206ef00()) {
        unk_220c.func_ov002_02202844();
    }
    func_ov109_022953b8();
    if (func_ov109_02294d6c(2)) {
        unk_2678.func_ov002_022036a4(unk_27e0);
        s32 t = unk_27e0 - 0x10;
        unk_cc.func_ov094_022932d0(0, t);
        unk_b2c.func_ov094_022941a0(0, t);
        unk_b54.func_ov094_0229277c(t);
    }
    return TRUE;
}

BOOL Unk_ov109_02296698::vfunc_0c() {
    func_020ed174(this);
    func_ov092_02291c5c();
    func_ov109_02295f98();
    return TRUE;
}

BOOL Unk_ov109_02296698::vfunc_00() {
    func_ov109_02295fd4();
    func_ov002_02200a50(0);
    func_ov002_02200a60(0);
    return TRUE;
}

extern "C" Unk_ov109_02296698 *func_ov109_02296520() { return new Unk_ov109_02296698(); }

Unk_ov109_02296698::~Unk_ov109_02296698() {}
