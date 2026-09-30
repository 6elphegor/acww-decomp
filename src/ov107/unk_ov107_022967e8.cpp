#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef vfunc_08
#undef vfunc_14

extern "C" {
s32 func_020ed174(...);
void func_020ed188(void *p);
void func_020020b8(u32 x);
void func_ov092_02291ce4(s32 a, s32 b, s32 c);
BOOL func_0206ef00();
void func_ov092_02291c5c();
}

class Unk_ov107_02296e78;


class Unk_ov107_020b85f8 {
public:
    Unk_ov107_020b85f8();
    u32 unk_00[0x38 / 4];
};

class Unk_ov107_02293a80 {
public:
    Unk_ov107_02293a80();
    void func_ov094_022932d0(s32 a, s32 b);
    void func_ov094_022937a0();
    u32 unk_00[0xa60 / 4];
};

class Unk_ov107_022946a8 {
public:
    Unk_ov107_022946a8();
    void func_ov094_022941a0(s32 a, s32 b);
    void func_ov094_02293d2c();
    void func_ov094_022941f8(s32 a);
    u32 unk_00[0x28 / 4];
};

class Unk_ov107_02292d6c {
public:
    Unk_ov107_02292d6c();
    void func_ov094_0229277c(s32 a);
    u32 unk_00[0x15e0 / 4];
};

class Unk_ov107_02200800 {
public:
    Unk_ov107_02200800();
    virtual ~Unk_ov107_02200800();
    virtual void vfunc_08();
    void func_ov002_022006e4(s32 a);
    u32 unk_04[(0xc0 - 4) / 4];
};

class Unk_ov107_022027d0 {
public:
    Unk_ov107_022027d0();
    u32 unk_00[0x18 / 4];
};

class Unk_ov107_02202658 {
public:
    Unk_ov107_02202658();
    void func_ov002_02202844();
    u32 unk_00[0x64 / 4];
};

class Unk_ov107_022024a0 {
public:
    Unk_ov107_022024a0();
    void func_ov002_02201b28();
    u32 unk_00[0x300 / 4];
};

class Unk_ov107_02204400 {
public:
    Unk_ov107_02204400();
    u32 unk_00[0x108 / 4];
};



class Unk_ov107_02203994 {
public:
    Unk_ov107_02203994();
    void func_ov002_022036a4(s32 a);
    void func_ov002_02203510(s32 a);
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


typedef void (Unk_ov107_02296e78::*Unk_ov107_02296e78_Fn)();

// Vtable 0x02296e78
class Unk_ov107_02296e78 : public Unk_ov002_022044e4 {
public:
    Unk_ov107_02296e78()
        : unk_cc(0), unk_d0(0), unk_d4(), unk_10c(), unk_b6c(), unk_b94(), unk_2174(), unk_2234(), unk_224c(), unk_22b0(), unk_25b0(), unk_26b8() {}
    virtual ~Unk_ov107_02296e78();

    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_24();
    virtual BOOL vfunc_4c();
    virtual BOOL vfunc_50();
    virtual BOOL vfunc_54();
    virtual BOOL vfunc_58();
    virtual BOOL vfunc_5c();

    // out-of-range callees (declarations only)
    void func_ov107_02295950();
    void func_ov107_02295f40();
    void func_ov107_02295ce4();
    void func_ov107_02295a18();
    void func_ov107_02294d64(u32 v);
    BOOL func_ov107_02294d74(u32 mask);
    void func_ov107_022965e4();
    void func_ov107_0229661c();
    void func_ov107_02296608();
    void func_ov107_022966bc();
    void func_ov107_022966b4();
    void func_ov107_02296674();
    void func_ov107_0229663c();
    void func_ov107_022966d8();
    void func_ov107_02296718();

    // state functions (table targets, other groups)
    void func_ov107_02294e38();
    void func_ov107_02294e84();
    void func_ov107_02294fb0();
    void func_ov107_02295130();
    void func_ov107_02295200();
    void func_ov107_02295fb0();
    void func_ov107_02295fc8();
    void func_ov107_02295ff0();
    void func_ov107_02296018();
    void func_ov107_022960a0();
    void func_ov107_022960d4();
    void func_ov107_022960f4();
    void func_ov107_02296144();
    void func_ov107_02296180();
    void func_ov107_022961a8();
    void func_ov107_022961e0();
    void func_ov107_02296224();
    void func_ov107_02296270();
    void func_ov107_022962e8();
    void func_ov107_022963c8();
    void func_ov107_02296460();
    void func_ov107_022964a8();
    void func_ov107_022964c4();
    void func_ov107_02296564();
    void func_ov107_0229679c();

    // in range
    void func_ov107_022967e8();
    void func_ov107_02296848();
    void func_ov107_02296884();
    void func_ov107_02296914();
    void func_ov107_02296964();

    /* 0x0094 */ u8 unk_94[4];
    /* 0x0098 */ s32 unk_98;
    /* 0x009c */ u8 unk_9c[0x30];
    /* 0x00cc */ s32 unk_cc;
    /* 0x00d0 */ s32 unk_d0;
    /* 0x00d4 */ Unk_ov107_020b85f8 unk_d4[1];
    /* 0x010c */ Unk_ov107_02293a80 unk_10c;
    /* 0x0b6c */ Unk_ov107_022946a8 unk_b6c;
    /* 0x0b94 */ Unk_ov107_02292d6c unk_b94;
    /* 0x2174 */ Unk_ov107_02200800 unk_2174;
    /* 0x2234 */ Unk_ov107_022027d0 unk_2234;
    /* 0x224c */ Unk_ov107_02202658 unk_224c;
    /* 0x22b0 */ Unk_ov107_022024a0 unk_22b0;
    /* 0x25b0 */ Unk_ov107_02204400 unk_25b0;
    /* 0x26b8 */ Unk_ov107_02203994 unk_26b8;
};

void Unk_ov107_02296e78::func_ov107_022967e8() {
    unk_2174.func_ov002_022006e4(1);
    func_ov107_02295950();
    func_ov092_02291ce4(func_020ed174(this), 0x44, 1);
    func_ov002_022008c4(8, 0, 0, 0x30);
    func_ov002_02200840(6, 0, -16);
    func_ov002_02200a50(4);
    unk_98 = func_ov002_02200920();
}

void Unk_ov107_02296e78::func_ov107_02296848() {
    if (func_ov002_02200908(0)) {
        func_ov002_02200a60(2);
        func_ov107_02295f40();
    }
    func_ov002_02200840(6, 0, -16);
    unk_98 = func_ov002_02200920();
}

void Unk_ov107_02296e78::func_ov107_02296884() {
    func_ov107_022965e4();
    unk_26b8.func_ov002_02203510(0x65);
    unk_10c.func_ov094_022937a0();
    func_ov107_02295ce4();
    unk_b6c.func_ov094_02293d2c();
    unk_b6c.func_ov094_022941f8(0xf);
    func_ov002_022008e0(8, 0, 0, 0x30);
    func_020020b8(6);
    func_ov002_02200840(6, 0, -16);
    func_ov002_02200a50(2);
    func_ov107_02294d64(1);
    func_ov107_02294d64(2);
    unk_98 = func_ov002_02200920();
}

void Unk_ov107_02296e78::func_ov107_02296914() {
    func_ov107_0229661c();
    func_ov107_02296608();
    func_ov002_02200a50(1);
}

BOOL Unk_ov107_02296e78::vfunc_5c() {
    func_020ed188(this);
    return TRUE;
}

BOOL Unk_ov107_02296e78::vfunc_58() { return TRUE; }

BOOL Unk_ov107_02296e78::vfunc_54() { return TRUE; }

BOOL Unk_ov107_02296e78::vfunc_50() {
    func_ov107_022966bc();
    func_ov107_02296964();
    func_ov107_022966b4();
    return TRUE;
}

void Unk_ov107_02296e78::func_ov107_02296964() {
    static Unk_ov107_02296e78_Fn tbl[24] = {
        &Unk_ov107_02296e78::func_ov107_02296564,
        &Unk_ov107_02296e78::func_ov107_022964c4,
        &Unk_ov107_02296e78::func_ov107_022964a8,
        &Unk_ov107_02296e78::func_ov107_02296460,
        &Unk_ov107_02296e78::func_ov107_022963c8,
        &Unk_ov107_02296e78::func_ov107_022962e8,
        &Unk_ov107_02296e78::func_ov107_02296270,
        &Unk_ov107_02296e78::func_ov107_02296224,
        &Unk_ov107_02296e78::func_ov107_022961e0,
        &Unk_ov107_02296e78::func_ov107_022961a8,
        &Unk_ov107_02296e78::func_ov107_02296180,
        &Unk_ov107_02296e78::func_ov107_02296144,
        &Unk_ov107_02296e78::func_ov107_022960f4,
        &Unk_ov107_02296e78::func_ov107_022960d4,
        &Unk_ov107_02296e78::func_ov107_022960a0,
        &Unk_ov107_02296e78::func_ov107_02296018,
        &Unk_ov107_02296e78::func_ov107_02295130,
        &Unk_ov107_02296e78::func_ov107_02294fb0,
        &Unk_ov107_02296e78::func_ov107_02295ff0,
        &Unk_ov107_02296e78::func_ov107_02295fc8,
        &Unk_ov107_02296e78::func_ov107_02295fb0,
        &Unk_ov107_02296e78::func_ov107_02295200,
        &Unk_ov107_02296e78::func_ov107_02294e84,
        &Unk_ov107_02296e78::func_ov107_02294e38};
    (this->*tbl[unk_8d])();
}

BOOL Unk_ov107_02296e78::vfunc_4c() {
    static Unk_ov107_02296e78_Fn tbl[5] = {
        &Unk_ov107_02296e78::func_ov107_02296914,
        &Unk_ov107_02296e78::func_ov107_02296884,
        &Unk_ov107_02296e78::func_ov107_02296848,
        &Unk_ov107_02296e78::func_ov107_022967e8,
        &Unk_ov107_02296e78::func_ov107_0229679c};
    func_ov107_02296674();
    (this->*tbl[unk_8c])();
    func_ov107_0229663c();
    return TRUE;
}

BOOL Unk_ov107_02296e78::vfunc_24() {
    unk_22b0.func_ov002_02201b28();
    if (!func_ov107_02294d74(1)) {
        return TRUE;
    }
    unk_2174.vfunc_08();
    if (func_0206ef00()) {
        unk_224c.func_ov002_02202844();
    }
    func_ov107_02295a18();
    if (func_ov107_02294d74(2)) {
        unk_26b8.func_ov002_022036a4(unk_98);
        s32 t = unk_98 - 0x10;
        unk_10c.func_ov094_022932d0(0, t);
        unk_b6c.func_ov094_022941a0(0, t);
        unk_b94.func_ov094_0229277c(t);
    }
    return TRUE;
}

BOOL Unk_ov107_02296e78::vfunc_0c() {
    func_020ed174();
    func_ov092_02291c5c();
    func_ov107_022966d8();
    return TRUE;
}

BOOL Unk_ov107_02296e78::vfunc_00() {
    func_ov107_02296718();
    func_ov002_02200a50(0);
    func_ov002_02200a60(0);
    return TRUE;
}

extern "C" Unk_ov107_02296e78 *func_ov107_02296c8c() { return new Unk_ov107_02296e78(); }

Unk_ov107_02296e78::~Unk_ov107_02296e78() {}
