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



// object at +0x98 (polymorphic, vtable slot 0x0c called)
class Unk_ov135_098 {
public:
    Unk_ov135_098();
    virtual ~Unk_ov135_098();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    void func_ov002_02202844();
    u32 unk_04[0x60 / 4];
};

// object at +0xfc
class Unk_ov135_0fc {
public:
    Unk_ov135_0fc();
    BOOL func_ov002_02203110(s32 a);
    void func_ov002_02203900();
    void func_ov002_02203920();
    void func_ov002_022034c4(s32 a);
    void func_ov002_022036a4(s32 a);
    u32 unk_00[0x164 / 4];
};

// object at +0x260 (ov134 library object)
class Unk_ov135_260 {
public:
    Unk_ov135_260();
    u32 func_ov134_02292c54(u8 a, u8 b);
    BOOL func_ov134_02293a3c();
    BOOL func_ov134_02293a5c();
    void func_ov134_02293b30(u8 a, u8 b);
    BOOL func_ov134_02293b90(u8 a, u8 b);
    s32 func_ov134_0229360c(u8 a, u8 b);
    void func_ov134_02293c48(s32 a, s32 b);
    void func_ov134_022946fc();
    void func_ov134_022947e8();
    void func_ov134_022947b8(s32 a);
    void func_ov134_022948e4();
    void func_ov134_022949a8();
    void func_ov134_022949ec();
    void func_ov134_02294a28();
    void func_ov134_02294a34(s32 a, s32 b, s32 c, s32 d);
    u32 unk_00[(0x2824 - 0x260) / 4];
};

class Unk_ov135_022964b0;
typedef void (Unk_ov135_022964b0::*Unk_ov135_022964b0_Fn)();

static inline BOOL Unk_ov135_Both() {
    if (data_021f4770 != 0 && data_021f4774 != 0) {
        return TRUE;
    }
    return FALSE;
}

// Vtable 0x022964b0, size 0x2824 (scene overlay on Unk_ov002_022044e4)
class Unk_ov135_022964b0 : public Unk_ov002_022044e4 {
public:
    Unk_ov135_022964b0() : unk_98(), unk_fc(), unk_260() {}
    virtual ~Unk_ov135_022964b0();

    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_24();
    virtual BOOL vfunc_4c();
    virtual BOOL vfunc_50();
    virtual BOOL vfunc_54();
    virtual BOOL vfunc_58();
    virtual BOOL vfunc_5c();

    // callees in other groups
    void func_ov135_02295404(s32 a);
    BOOL func_ov135_02295414(u32 mask);
    void func_ov135_02295718();
    void func_ov135_0229576c();
    void func_ov135_02295798();
    void func_ov135_022957c4(s32 a);
    void func_ov135_022957f4();
    void func_ov135_0229581c();
    void func_ov135_022958bc();
    void func_ov135_022958dc();

    void func_ov135_02295c90();
    void func_ov135_02295c54();
    void func_ov135_02295bd8();
    void func_ov135_02295b40();
    void func_ov135_02295ae8();
    void func_ov135_02295aa0();
    void func_ov135_02295a78();
    void func_ov135_022959f4();
    void func_ov135_022959d0();
    void func_ov135_0229596c();
    void func_ov135_0229594c();
    void func_ov135_02295910();

    // in range
    void func_ov135_02295ccc();
    void func_ov135_02295d64();
    void func_ov135_02295d88();
    void func_ov135_02295ddc();
    void func_ov135_02295e90();
    void func_ov135_02295eb0();
    void func_ov135_02295ed0();
    void func_ov135_02295f1c();
    void func_ov135_02295f2c();
    void func_ov135_02295f48();
    void func_ov135_02295f50();
    void func_ov135_02295f68();
    void func_ov135_02295f88();
    void func_ov135_02295fc8();
    void func_ov135_02295fe8();
    void func_ov135_02296018();
    void func_ov135_02296050();
    void func_ov135_02296078();
    void func_ov135_02296108();

    /* 0x91 */ u8 unk_91;
    /* 0x92 */ u16 unk_92;
    /* 0x94 */ u8 unk_94;
    /* 0x95 */ u8 unk_95;
    /* 0x96 */ u8 unk_96[2];
    /* 0x98 */ Unk_ov135_098 unk_98;
    /* 0xfc */ Unk_ov135_0fc unk_fc;
    /* 0x260 */ Unk_ov135_260 unk_260;
};


void Unk_ov135_022964b0::func_ov135_02295ccc() {
    if (func_ov002_02200a14(1)) {
        func_ov135_02295718();
    } else {
        if (Unk_ov135_Both()) {
            switch (unk_260.func_ov134_02292c54(data_021ef5f0, data_021ef5ec)) {
            case 0:
                func_ov135_02295798();
                break;
            case 1:
                func_ov135_0229576c();
                break;
            case 3:
                func_ov002_02200a58(4);
                break;
            case 2:
                func_ov002_02200a58(5);
                break;
            }
        }
    }
}

void Unk_ov135_022964b0::func_ov135_02295d64() {
    if (unk_260.func_ov134_02293a3c()) {
        func_ov002_02200a58(0);
    }
}

void Unk_ov135_022964b0::func_ov135_02295d88() {
    if (data_021f4770 == 0) {
        if (unk_260.func_ov134_02293a5c()) {
            func_ov002_02200a58(2);
        } else {
            func_ov002_02200a58(0);
        }
    } else {
        unk_260.func_ov134_02293b30(data_021ef5f0, data_021ef5ec);
    }
}

void Unk_ov135_022964b0::func_ov135_02295ddc() {
    if (func_ov002_02200a14(1)) {
        func_ov135_022958dc();
    } else {
        if (Unk_ov135_Both()) {
            if (unk_fc.func_ov002_02203110(6)) {
                func_ov135_0229581c();
            } else if (unk_fc.func_ov002_02203110(7)) {
                func_ov135_022957f4();
            } else {
                u8 a = data_021ef5f0;
                u8 b = data_021ef5ec;
                if (unk_260.func_ov134_02293b90(b ? a : a, b)) {
                    func_0206e814();
                    func_ov002_02200a58(1);
                }
                s32 r = unk_260.func_ov134_0229360c(a, b);
                if (r != 6) {
                    func_ov135_022957c4(r);
                }
            }
        }
    }
}

void Unk_ov135_022964b0::func_ov135_02295e90() {
    unk_260.func_ov134_022946fc();
    unk_fc.func_ov002_02203920();
}

void Unk_ov135_022964b0::func_ov135_02295eb0() {
    unk_260.func_ov134_022947e8();
    unk_260.func_ov134_022947b8(0x6b);
}

void Unk_ov135_022964b0::func_ov135_02295ed0() {
    func_020015b8(0);
    func_02002398(6, 2);
    func_0200226c(6, 0, 0, 0);
    func_02002398(4, 1);
    func_0200226c(4, 0, 0, 0);
    func_02002398(3, 1);
    func_0200226c(3, 0, 0, 0);
}

void Unk_ov135_022964b0::func_ov135_02295f48() {
    func_ov135_02295f1c();
}

void Unk_ov135_022964b0::func_ov135_02295f1c() {
    unk_260.func_ov134_022948e4();
}

void Unk_ov135_022964b0::func_ov135_02295f2c() {
    unk_fc.func_ov002_02203900();
    unk_260.func_ov134_022949a8();
}

void Unk_ov135_022964b0::func_ov135_02295f50() {
    func_ov135_02295f2c();
    unk_98.vfunc_0c();
}

void Unk_ov135_022964b0::func_ov135_02295f68() {
    unk_260.func_ov134_022949ec();
    unk_fc.func_ov002_02203900();
}

void Unk_ov135_022964b0::func_ov135_02295f88() {
    unk_260.func_ov134_02294a34(0, 6, 4, 3);
    if (func_0206ed50() == 0x33) {
        unk_260.func_ov134_02294a28();
    }
    unk_95 = 0;
    unk_92 = 0;
}

void Unk_ov135_022964b0::func_ov135_02295fc8() {
    func_ov002_02200840(6, 0, 0);
    func_ov002_02200840(4, 0, 0);
}

void Unk_ov135_022964b0::func_ov135_02295fe8() {
    if (func_ov002_022008fc(0)) {
        func_020021a0(6);
        func_020021a0(4);
        func_ov002_02200a60(5);
    } else {
        func_ov135_02295fc8();
    }
}

void Unk_ov135_022964b0::func_ov135_02296018() {
    func_ov092_02291ce4(func_020ed174(), 0x44, 1);
    func_ov002_022008c4(10, 0, 0, 0x30);
    func_ov135_02295fc8();
    func_ov002_02200a50(3);
}

void Unk_ov135_022964b0::func_ov135_02296050() {
    if (func_ov002_02200908(0)) {
        func_ov002_02200a60(2);
        func_ov135_022958bc();
    }
    func_ov135_02295fc8();
}

void Unk_ov135_022964b0::func_ov135_02296078() {
    func_ov135_02295ed0();
    func_ov135_02295eb0();
    func_ov135_02295e90();
    func_ov002_022008e0(10, 4, 0, 0x30);
    func_020020b8(6);
    func_020020b8(4);
    func_ov135_02295fc8();
    func_ov135_02295404(1);
    unk_fc.func_ov002_022034c4(0x65);
    func_ov002_02200a50(1);
}

BOOL Unk_ov135_022964b0::vfunc_5c() {
    func_020ed188(this);
    return TRUE;
}

BOOL Unk_ov135_022964b0::vfunc_58() { return TRUE; }

BOOL Unk_ov135_022964b0::vfunc_54() { return TRUE; }

BOOL Unk_ov135_022964b0::vfunc_50() {
    func_ov135_02295f50();
    func_ov135_02296108();
    func_ov135_02295f48();
    return TRUE;
}

void Unk_ov135_022964b0::func_ov135_02296108() {
    static Unk_ov135_022964b0_Fn tbl[16] = {
        &Unk_ov135_022964b0::func_ov135_02295ddc,
        &Unk_ov135_022964b0::func_ov135_02295d88,
        &Unk_ov135_022964b0::func_ov135_02295d64,
        &Unk_ov135_022964b0::func_ov135_02295ccc,
        &Unk_ov135_022964b0::func_ov135_02295c90,
        &Unk_ov135_022964b0::func_ov135_02295c54,
        &Unk_ov135_022964b0::func_ov135_02295bd8,
        &Unk_ov135_022964b0::func_ov135_02295b40,
        &Unk_ov135_022964b0::func_ov135_02295ae8,
        &Unk_ov135_022964b0::func_ov135_02295aa0,
        &Unk_ov135_022964b0::func_ov135_02295a78,
        &Unk_ov135_022964b0::func_ov135_022959f4,
        &Unk_ov135_022964b0::func_ov135_022959d0,
        &Unk_ov135_022964b0::func_ov135_0229596c,
        &Unk_ov135_022964b0::func_ov135_0229594c,
        &Unk_ov135_022964b0::func_ov135_02295910};
    (this->*tbl[unk_8d])();
}

BOOL Unk_ov135_022964b0::vfunc_4c() {
    static Unk_ov135_022964b0_Fn tbl[4] = {
        &Unk_ov135_022964b0::func_ov135_02296078,
        &Unk_ov135_022964b0::func_ov135_02296050,
        &Unk_ov135_022964b0::func_ov135_02296018,
        &Unk_ov135_022964b0::func_ov135_02295fe8};
    func_ov135_02295f2c();
    (this->*tbl[unk_8c])();
    func_ov135_02295f1c();
    return TRUE;
}

BOOL Unk_ov135_022964b0::vfunc_24() {
    if (func_0206ef00()) {
        unk_98.func_ov002_02202844();
    }
    if (!func_ov135_02295414(1)) {
        return FALSE;
    }
    s32 r = func_ov002_02200920();
    unk_260.func_ov134_02293c48(0, r);
    s32 r2 = func_ov002_02200920();
    unk_fc.func_ov002_022036a4(r2);
    return TRUE;
}

BOOL Unk_ov135_022964b0::vfunc_0c() {
    func_020ed174();
    func_ov092_02291c5c();
    func_ov135_02295f68();
    return TRUE;
}

BOOL Unk_ov135_022964b0::vfunc_00() {
    func_ov135_02295f88();
    unk_8c = 0;
    func_ov002_02200a60(0);
    return TRUE;
}

extern "C" Unk_ov135_022964b0 *func_ov135_02296358() { return new Unk_ov135_022964b0(); }
