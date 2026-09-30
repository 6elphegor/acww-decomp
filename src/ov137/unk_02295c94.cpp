#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef vfunc_08
#undef vfunc_14

extern u8 data_021f4770;
extern u8 data_021f4774;
extern u8 data_021ef5f0;
extern u8 data_021ef5ec;

extern "C" {
s32 func_020ed174();
void func_020ed188(void *p);
void func_020015b8(s32 a);
void func_02002398(s32 a, s32 b);
void func_0200226c(s32 a, s32 b, s32 c, s32 d);
void func_020021a0(s32 a);
void func_020020b8(s32 a);
void func_0206e814();
s32 func_0206ed50();
BOOL func_0206ef00();
void func_ov092_02291c5c();
void func_ov092_02291ce4(s32 a, s32 b, s32 c);
}

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
    void func_ov002_02200a68();
    BOOL func_ov002_02200a14(s32 a);
    void func_ov002_022008c4(s32 a, s32 b, s32 mode, s32 dist);
    BOOL func_ov002_022008fc(s32 a);

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



// object at +0x94 (polymorphic, vtable slot 0x0c called)
class Unk_ov137_094 {
public:
    Unk_ov137_094();
    virtual ~Unk_ov137_094();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    void func_ov002_02202844();
    u32 unk_04[0x60 / 4];
};

// object at +0xf8
class Unk_ov137_0f8 {
public:
    Unk_ov137_0f8();
    BOOL func_ov002_02203110(s32 a);
    void func_ov002_02203900();
    void func_ov002_02203920();
    void func_ov002_02203510(s32 a);
    void func_ov002_022036a4(s32 a);
    u32 unk_00[0x164 / 4];
};

// object at +0x25c (ov134 library object)
class Unk_ov137_25c {
public:
    Unk_ov137_25c();
    s32 func_ov134_02293564(u8 a, u8 b);
    void func_ov134_02293c48(s32 a, s32 b);
    void func_ov134_022946fc();
    void func_ov134_022947e8();
    void func_ov134_022947b8(s32 a);
    void func_ov134_022948e4();
    void func_ov134_022949a8();
    void func_ov134_022949ec();
    void func_ov134_02294a34(s32 a, s32 b, s32 c, s32 d);
    u32 unk_00[(0x2820 - 0x25c) / 4];
    u16 unk_2820;
    u8 unk_2822;
    u8 unk_2823;
};

class Unk_ov137_022962e0;
typedef void (Unk_ov137_022962e0::*Unk_ov137_022962e0_Fn)();

static inline BOOL Unk_ov137_Both() {
    if (data_021f4770 != 0 && data_021f4774 != 0) {
        return TRUE;
    }
    return FALSE;
}

// Vtable 0x022962e0, size 0x2824 (scene overlay on Unk_ov002_022044e4)
class Unk_ov137_022962e0 : public Unk_ov002_022044e4 {
public:
    Unk_ov137_022962e0() : unk_94(), unk_f8(), unk_25c() {}
    virtual ~Unk_ov137_022962e0();

    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_24();
    virtual BOOL vfunc_4c();
    virtual BOOL vfunc_50();
    virtual BOOL vfunc_54();
    virtual BOOL vfunc_58();
    virtual BOOL vfunc_5c();

    // callees in other groups
    void func_ov137_02295404(s32 a);
    BOOL func_ov137_02295414(u32 mask);
    void func_ov137_022957a0(s32 a);
    void func_ov137_022957cc();
    void func_ov137_02295818();
    void func_ov137_02295838();
    void func_ov137_022958ac();
    void func_ov137_022958cc();
    void func_ov137_0229586c();
    void func_ov137_02295930();
    void func_ov137_02295958();
    void func_ov137_022959c0();
    void func_ov137_022959e8();
    void func_ov137_02295a30();
    void func_ov137_02295a88();
    void func_ov137_02295b20();
    void func_ov137_02295b84();
    void func_ov137_02295bc0();
    void func_ov137_02295bfc();

    // in range
    void func_ov137_02295c94();
    void func_ov137_02295d10();
    void func_ov137_02295d30();
    void func_ov137_02295d50();
    void func_ov137_02295d9c();
    void func_ov137_02295dac();
    void func_ov137_02295dc8();
    void func_ov137_02295dd0();
    void func_ov137_02295de8();
    void func_ov137_02295e08();
    void func_ov137_02295e40();
    void func_ov137_02295e60();
    void func_ov137_02295e90();
    void func_ov137_02295ec8();
    void func_ov137_02295ef0();
    void func_ov137_02295f80();

    /* 0x91 */ u8 unk_91[3];
    /* 0x94 */ Unk_ov137_094 unk_94;
    /* 0xf8 */ Unk_ov137_0f8 unk_f8;
    /* 0x25c */ Unk_ov137_25c unk_25c;
};

void Unk_ov137_022962e0::func_ov137_02295c94() {
    if (func_ov002_02200a14(1)) {
        func_ov137_02295838();
    } else {
        if (Unk_ov137_Both()) {
            if (unk_f8.func_ov002_02203110(6)) {
                func_ov137_022957cc();
            } else {
                s32 r = unk_25c.func_ov134_02293564(data_021ef5f0, data_021ef5ec);
                if (r != 6) {
                    func_ov137_022957a0(r);
                }
            }
        }
    }
}

void Unk_ov137_022962e0::func_ov137_02295d10() {
    unk_25c.func_ov134_022946fc();
    unk_f8.func_ov002_02203920();
}

void Unk_ov137_022962e0::func_ov137_02295d30() {
    unk_25c.func_ov134_022947e8();
    unk_25c.func_ov134_022947b8(0x6d);
}

void Unk_ov137_022962e0::func_ov137_02295d50() {
    func_020015b8(0);
    func_02002398(6, 2);
    func_0200226c(6, 0, 0, 0);
    func_02002398(4, 1);
    func_0200226c(4, 0, 0, 0);
    func_02002398(3, 1);
    func_0200226c(3, 0, 0, 0);
}

void Unk_ov137_022962e0::func_ov137_02295dc8() {
    func_ov137_02295d9c();
}

void Unk_ov137_022962e0::func_ov137_02295d9c() {
    unk_25c.func_ov134_022948e4();
}

void Unk_ov137_022962e0::func_ov137_02295dac() {
    unk_f8.func_ov002_02203900();
    unk_25c.func_ov134_022949a8();
}

void Unk_ov137_022962e0::func_ov137_02295dd0() {
    func_ov137_02295dac();
    unk_94.vfunc_0c();
}

void Unk_ov137_022962e0::func_ov137_02295de8() {
    unk_25c.func_ov134_022949ec();
    unk_f8.func_ov002_02203900();
}

void Unk_ov137_022962e0::func_ov137_02295e08() {
    unk_25c.func_ov134_02294a34(2, 6, 4, 3);
    unk_25c.unk_2823 = 0;
    unk_25c.unk_2820 = 0;
}

void Unk_ov137_022962e0::func_ov137_02295e40() {
    func_ov002_02200840(6, 0, 0);
    func_ov002_02200840(4, 0, 0);
}

void Unk_ov137_022962e0::func_ov137_02295e60() {
    if (func_ov002_022008fc(0)) {
        func_020021a0(6);
        func_020021a0(4);
        func_ov002_02200a60(5);
    } else {
        func_ov137_02295e40();
    }
}

void Unk_ov137_022962e0::func_ov137_02295e90() {
    func_ov092_02291ce4(func_020ed174(), 0x44, 1);
    func_ov002_022008c4(10, 0, 0, 0x30);
    func_ov137_02295e40();
    func_ov002_02200a50(3);
}

void Unk_ov137_022962e0::func_ov137_02295ec8() {
    if (func_ov002_02200908(0)) {
        func_ov002_02200a60(2);
        func_ov137_02295818();
    }
    func_ov137_02295e40();
}

void Unk_ov137_022962e0::func_ov137_02295ef0() {
    func_ov137_02295d50();
    func_ov137_02295d30();
    func_ov137_02295d10();
    func_ov002_022008e0(10, 4, 0, 0x30);
    func_020020b8(6);
    func_020020b8(4);
    func_ov137_02295e40();
    func_ov137_02295404(1);
    unk_f8.func_ov002_02203510(0x21);
    func_ov002_02200a50(1);
}

BOOL Unk_ov137_022962e0::vfunc_5c() {
    func_020ed188(this);
    return TRUE;
}

BOOL Unk_ov137_022962e0::vfunc_58() { return TRUE; }

BOOL Unk_ov137_022962e0::vfunc_54() { return TRUE; }

BOOL Unk_ov137_022962e0::vfunc_50() {
    func_ov137_02295dd0();
    func_ov137_02295f80();
    func_ov137_02295dc8();
    return TRUE;
}

void Unk_ov137_022962e0::func_ov137_02295f80() {
    static Unk_ov137_022962e0_Fn tbl[14] = {
        &Unk_ov137_022962e0::func_ov137_02295c94,
        &Unk_ov137_022962e0::func_ov137_02295bfc,
        &Unk_ov137_022962e0::func_ov137_02295bc0,
        &Unk_ov137_022962e0::func_ov137_02295b84,
        &Unk_ov137_022962e0::func_ov137_02295b20,
        &Unk_ov137_022962e0::func_ov137_02295a88,
        &Unk_ov137_022962e0::func_ov137_02295a30,
        &Unk_ov137_022962e0::func_ov137_022959e8,
        &Unk_ov137_022962e0::func_ov137_022959c0,
        &Unk_ov137_022962e0::func_ov137_02295958,
        &Unk_ov137_022962e0::func_ov137_02295930,
        &Unk_ov137_022962e0::func_ov137_022958cc,
        &Unk_ov137_022962e0::func_ov137_022958ac,
        &Unk_ov137_022962e0::func_ov137_0229586c};
    (this->*tbl[unk_8d])();
}

BOOL Unk_ov137_022962e0::vfunc_4c() {
    static Unk_ov137_022962e0_Fn tbl[4] = {
        &Unk_ov137_022962e0::func_ov137_02295ef0,
        &Unk_ov137_022962e0::func_ov137_02295ec8,
        &Unk_ov137_022962e0::func_ov137_02295e90,
        &Unk_ov137_022962e0::func_ov137_02295e60};
    func_ov137_02295dac();
    (this->*tbl[unk_8c])();
    func_ov137_02295d9c();
    return TRUE;
}

BOOL Unk_ov137_022962e0::vfunc_24() {
    if (func_0206ef00()) {
        unk_94.func_ov002_02202844();
    }
    if (!func_ov137_02295414(1)) {
        return FALSE;
    }
    s32 r = func_ov002_02200920();
    unk_25c.func_ov134_02293c48(0, r);
    s32 r2 = func_ov002_02200920();
    unk_f8.func_ov002_022036a4(r2);
    return TRUE;
}

BOOL Unk_ov137_022962e0::vfunc_0c() {
    func_020ed174();
    func_ov092_02291c5c();
    func_ov137_02295de8();
    return TRUE;
}

BOOL Unk_ov137_022962e0::vfunc_00() {
    func_ov137_02295e08();
    unk_8c = 0;
    func_ov002_02200a60(0);
    return TRUE;
}

extern "C" Unk_ov137_022962e0 *func_ov137_022961b4() { return new Unk_ov137_022962e0(); }
