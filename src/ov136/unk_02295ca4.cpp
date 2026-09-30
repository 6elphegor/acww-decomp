#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef vfunc_08
#undef vfunc_14

extern "C" {
extern u8 data_021f4770;
extern u8 data_021f4774;
extern u8 data_021ef5f0;
extern u8 data_021ef5ec;

BOOL func_0206ef00();
BOOL func_0206ef0c();
void func_0206e8cc(void *p);
void func_0206ecf8(u32 v);
void func_020015b8(u32 a);
void func_02002398(u32 a, u32 b);
void func_0200226c(u32 n, u32 a, u32 b, u32 c);
void func_020020b8(s32 a);
void func_020021a0(s32 a);
void *func_020ed174();
void func_020ed188();
void func_ov092_02291ce4(void *a, s32 b, s32 c);
void func_ov092_02291c5c();
}

// Sub-object at +0x94 (size 0x64)
class Unk_ov002_02202658 {
public:
    Unk_ov002_02202658();
    virtual ~Unk_ov002_02202658();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    void func_ov002_02202844();
    u32 unk_04[0x60 / 4];
};

// Sub-object at +0xf8 (size 0x164)
class Unk_ov002_02203994 {
public:
    Unk_ov002_02203994();
    ~Unk_ov002_02203994();
    BOOL func_ov002_02203110(s32 a);
    void func_ov002_022030ac(u8 v);
    void func_ov002_02203510(s32 a);
    void func_ov002_022036a4(s32 a);
    void func_ov002_02203900();
    void func_ov002_02203920();
    u32 unk_00[0x164 / 4];
};

// Sub-object at +0x25c (class Unk_ov134_02291f60 elsewhere; opaque here)
class Unk_ov136_ov134_02294bd0 {
public:
    Unk_ov136_ov134_02294bd0();
    ~Unk_ov136_ov134_02294bd0();
    BOOL func_ov134_02293a3c();
    BOOL func_ov134_02293a5c();
    void func_ov134_02293b30(u8 a, u8 b);
    BOOL func_ov134_02293b90(u8 a, u8 b);
    s32 func_ov134_02293510(u8 a, u8 b);
    void func_ov134_02293024(u32 a);
    void func_ov134_02293c48(s32 a, s32 b);
    void func_ov134_022946fc();
    void func_ov134_022947b8(s32 a);
    void func_ov134_022947e8();
    void func_ov134_022948d8(void *out);
    void func_ov134_022948e4();
    void func_ov134_022949a8();
    void func_ov134_022949ec();
    void func_ov134_02294a34(s32 a, s32 b, s32 c, s32 d);
    u8 unk_00[0x25c4];
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
    s32 func_ov002_02200920();
    void func_ov002_02200980();
    BOOL func_ov002_02200a14(s32 a);
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

class Unk_ov136_022963b0;
typedef void (Unk_ov136_022963b0::*Unk_ov136_022963b0_Fn)();

class Unk_ov136_022963b0 : public Unk_ov002_022044e4 {
public:
    Unk_ov136_022963b0() : unk_94(), unk_f8(), unk_25c() {}
    virtual ~Unk_ov136_022963b0();

    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_24();
    virtual BOOL vfunc_4c();
    virtual BOOL vfunc_50();
    virtual BOOL vfunc_54();
    virtual BOOL vfunc_58();
    virtual BOOL vfunc_5c();

    // in range
    void func_ov136_02295ca4();
    void func_ov136_02295cc8();
    void func_ov136_02295d1c();
    void func_ov136_02295db4();
    void func_ov136_02295dd4();
    void func_ov136_02295df4();
    void func_ov136_02295e40();
    void func_ov136_02295e50();
    void func_ov136_02295e6c();
    void func_ov136_02295e74();
    void func_ov136_02295e8c();
    void func_ov136_02295eac();
    void func_ov136_02295ee4();
    void func_ov136_02295f04();
    void func_ov136_02295f34();
    void func_ov136_02295f6c();
    void func_ov136_02295f94();
    void func_ov136_02296024();

    // in other groups
    void func_ov136_02295404(u32 m);
    BOOL func_ov136_02295414(u32 m);
    void func_ov136_022955d4();
    void func_ov136_02295678();
    void func_ov136_022957a0(s32 a);
    void func_ov136_022957cc();
    void func_ov136_02295814();
    void func_ov136_02295834();
    void func_ov136_02295850();
    void func_ov136_02295868();
    void func_ov136_022958a8();
    void func_ov136_022958c8();
    void func_ov136_0229592c();
    void func_ov136_02295954();
    void func_ov136_022959d0();
    void func_ov136_022959f8();
    void func_ov136_02295a40();
    void func_ov136_02295a98();
    void func_ov136_02295b30();
    void func_ov136_02295b94();
    void func_ov136_02295bd0();
    void func_ov136_02295c0c();

    /* 0x091 */ u8 unk_91[3];
    /* 0x094 */ Unk_ov002_02202658 unk_94;
    /* 0x0f8 */ Unk_ov002_02203994 unk_f8;
    /* 0x25c */ Unk_ov136_ov134_02294bd0 unk_25c;
    /* 0x2820 */ u16 unk_2820;
    /* 0x2822 */ u8 unk_2822;
    /* 0x2823 */ u8 unk_2823;
};

// ---------------------------------------------------------------------------------------------

void Unk_ov136_022963b0::func_ov136_02295ca4() {
    if (unk_25c.func_ov134_02293a3c()) {
        func_ov002_02200a58(0);
    }
}

static inline BOOL Unk_ov136_02295d1c_Both() {
    if (data_021f4770 != 0 && data_021f4774 != 0) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov136_022963b0::func_ov136_02295cc8() {
    if (data_021f4770 == 0) {
        if (unk_25c.func_ov134_02293a5c()) {
            func_ov002_02200a58(2);
        } else {
            func_ov002_02200a58(0);
        }
    } else {
        unk_25c.func_ov134_02293b30(data_021ef5f0, data_021ef5ec);
    }
}

void Unk_ov136_022963b0::func_ov136_02295d1c() {
    if (func_ov002_02200a14(1)) {
        func_ov136_02295834();
    } else if (Unk_ov136_02295d1c_Both()) {
        if (unk_f8.func_ov002_02203110(6)) {
            func_ov136_022957cc();
        } else {
            u8 a = data_021ef5f0;
            u8 b = data_021ef5ec;
            if (unk_25c.func_ov134_02293b90(b ? a : a, b)) {
                func_ov002_02200a58(1);
            }
            s32 r = unk_25c.func_ov134_02293510(a, b);
            if (r != 6) {
                func_ov136_022957a0(r);
            }
        }
    }
}

void Unk_ov136_022963b0::func_ov136_02295db4() {
    unk_25c.func_ov134_022946fc();
    unk_f8.func_ov002_02203920();
}

void Unk_ov136_022963b0::func_ov136_02295dd4() {
    unk_25c.func_ov134_022947e8();
    unk_25c.func_ov134_022947b8(0x8b);
}

void Unk_ov136_022963b0::func_ov136_02295df4() {
    func_020015b8(0);
    func_02002398(6, 2);
    func_0200226c(6, 0, 0, 0);
    func_02002398(4, 1);
    func_0200226c(4, 0, 0, 0);
    func_02002398(3, 1);
    func_0200226c(3, 0, 0, 0);
}

void Unk_ov136_022963b0::func_ov136_02295e40() { unk_25c.func_ov134_022948e4(); }

void Unk_ov136_022963b0::func_ov136_02295e50() {
    unk_f8.func_ov002_02203900();
    unk_25c.func_ov134_022949a8();
}

void Unk_ov136_022963b0::func_ov136_02295e6c() { func_ov136_02295e40(); }

void Unk_ov136_022963b0::func_ov136_02295e74() {
    func_ov136_02295e50();
    unk_94.vfunc_0c();
}

void Unk_ov136_022963b0::func_ov136_02295e8c() {
    unk_25c.func_ov134_022949ec();
    unk_f8.func_ov002_02203900();
}

void Unk_ov136_022963b0::func_ov136_02295eac() {
    unk_25c.func_ov134_02294a34(1, 6, 4, 3);
    unk_2823 = 0;
    unk_2820 = 0;
}

void Unk_ov136_022963b0::func_ov136_02295ee4() {
    func_ov002_02200840(6, 0, 0);
    func_ov002_02200840(4, 0, 0);
}

void Unk_ov136_022963b0::func_ov136_02295f04() {
    if (func_ov002_022008fc(0)) {
        func_020021a0(6);
        func_020021a0(4);
        func_ov002_02200a60(5);
    } else {
        func_ov136_02295ee4();
    }
}

void Unk_ov136_022963b0::func_ov136_02295f34() {
    func_ov092_02291ce4(func_020ed174(), 0x44, 1);
    func_ov002_022008c4(0xa, 0, 0, 0x30);
    func_ov136_02295ee4();
    func_ov002_02200a50(3);
}

void Unk_ov136_022963b0::func_ov136_02295f6c() {
    if (func_ov002_02200908(0)) {
        func_ov002_02200a60(2);
        func_ov136_02295814();
    }
    func_ov136_02295ee4();
}

void Unk_ov136_022963b0::func_ov136_02295f94() {
    func_ov136_02295df4();
    func_ov136_02295dd4();
    func_ov136_02295db4();
    func_ov002_022008e0(0xa, 4, 0, 0x30);
    func_020020b8(6);
    func_020020b8(4);
    func_ov136_02295ee4();
    func_ov136_02295404(1);
    unk_f8.func_ov002_02203510(0x21);
    func_ov002_02200a50(1);
}

BOOL Unk_ov136_022963b0::vfunc_5c() {
    func_020ed188();
    return TRUE;
}

BOOL Unk_ov136_022963b0::vfunc_58() { return TRUE; }

BOOL Unk_ov136_022963b0::vfunc_54() { return TRUE; }

BOOL Unk_ov136_022963b0::vfunc_50() {
    func_ov136_02295e74();
    func_ov136_02296024();
    func_ov136_02295e6c();
    return TRUE;
}

void Unk_ov136_022963b0::func_ov136_02296024() {
    static Unk_ov136_022963b0_Fn tbl[16] = {
        &Unk_ov136_022963b0::func_ov136_02295d1c, &Unk_ov136_022963b0::func_ov136_02295cc8,
        &Unk_ov136_022963b0::func_ov136_02295ca4, &Unk_ov136_022963b0::func_ov136_02295c0c,
        &Unk_ov136_022963b0::func_ov136_02295bd0, &Unk_ov136_022963b0::func_ov136_02295b94,
        &Unk_ov136_022963b0::func_ov136_02295b30, &Unk_ov136_022963b0::func_ov136_02295a98,
        &Unk_ov136_022963b0::func_ov136_02295a40, &Unk_ov136_022963b0::func_ov136_022959f8,
        &Unk_ov136_022963b0::func_ov136_022959d0, &Unk_ov136_022963b0::func_ov136_02295954,
        &Unk_ov136_022963b0::func_ov136_0229592c, &Unk_ov136_022963b0::func_ov136_022958c8,
        &Unk_ov136_022963b0::func_ov136_022958a8, &Unk_ov136_022963b0::func_ov136_02295868};
    (this->*tbl[unk_8d])();
}

BOOL Unk_ov136_022963b0::vfunc_4c() {
    static Unk_ov136_022963b0_Fn tbl[4] = {
        &Unk_ov136_022963b0::func_ov136_02295f94, &Unk_ov136_022963b0::func_ov136_02295f6c,
        &Unk_ov136_022963b0::func_ov136_02295f34, &Unk_ov136_022963b0::func_ov136_02295f04};
    func_ov136_02295e50();
    (this->*tbl[unk_8c])();
    func_ov136_02295e40();
    return TRUE;
}

BOOL Unk_ov136_022963b0::vfunc_24() {
    if (func_0206ef00()) {
        unk_94.func_ov002_02202844();
    }
    if (!func_ov136_02295414(1)) {
        return FALSE;
    }
    s32 r = func_ov002_02200920();
    unk_25c.func_ov134_02293c48(0, r);
    unk_f8.func_ov002_022036a4(func_ov002_02200920());
    return TRUE;
}

BOOL Unk_ov136_022963b0::vfunc_0c() {
    func_020ed174();
    func_ov092_02291c5c();
    func_ov136_02295e8c();
    return TRUE;
}

BOOL Unk_ov136_022963b0::vfunc_00() {
    func_ov136_02295eac();
    unk_8c = 0;
    func_ov002_02200a60(0);
    return TRUE;
}

extern "C" Unk_ov136_022963b0 *func_ov136_02296274() { return new Unk_ov136_022963b0(); }
