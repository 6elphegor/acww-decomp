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
class Unk_ov138_098 {
public:
    Unk_ov138_098();
    virtual ~Unk_ov138_098();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    void func_ov002_02202844();
    u32 unk_04[0x60 / 4];
};

// object at +0xfc
class Unk_ov138_0fc {
public:
    Unk_ov138_0fc();
    BOOL func_ov002_02203110(s32 a);
    void func_ov002_02203900();
    void func_ov002_02203920();
    void func_ov002_022034c4(s32 a);
    void func_ov002_022036a4(s32 a);
    u32 unk_00[0x164 / 4];
};

// object at +0x260 (ov134 library object)
class Unk_ov138_260 {
public:
    Unk_ov138_260();
    s32 func_ov134_022935b8(u8 a, u8 b);
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

class Unk_ov138_02296380;
typedef void (Unk_ov138_02296380::*Unk_ov138_02296380_Fn)();

static inline BOOL Unk_ov138_Both() {
    if (data_021f4770 != 0 && data_021f4774 != 0) {
        return TRUE;
    }
    return FALSE;
}

// Vtable 0x02296380, size 0x2824 (scene overlay on Unk_ov002_022044e4)
class Unk_ov138_02296380 : public Unk_ov002_022044e4 {
public:
    Unk_ov138_02296380() : unk_98(), unk_fc(), unk_260() {}
    virtual ~Unk_ov138_02296380();

    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_24();
    virtual BOOL vfunc_4c();
    virtual BOOL vfunc_50();
    virtual BOOL vfunc_54();
    virtual BOOL vfunc_58();
    virtual BOOL vfunc_5c();

    // callees in other groups
    void func_ov138_02295404(s32 a);
    BOOL func_ov138_02295414(u32 mask);
    void func_ov138_022957c4(s32 a);
    void func_ov138_022957f0();
    void func_ov138_02295818();
    void func_ov138_02295860();
    void func_ov138_02295880();
    void func_ov138_022958b4();
    void func_ov138_022958f0();
    void func_ov138_02295910();
    void func_ov138_02295974();
    void func_ov138_02295998();
    void func_ov138_02295a1c();
    void func_ov138_02295a44();
    void func_ov138_02295a8c();
    void func_ov138_02295ae4();
    void func_ov138_02295b7c();
    void func_ov138_02295bf8();
    void func_ov138_02295c34();
    void func_ov138_02295c70();

    // in range
    void func_ov138_02295d08();
    void func_ov138_02295d9c();
    void func_ov138_02295dbc();
    void func_ov138_02295ddc();
    void func_ov138_02295e28();
    void func_ov138_02295e38();
    void func_ov138_02295e54();
    void func_ov138_02295e5c();
    void func_ov138_02295e74();
    void func_ov138_02295e94();
    void func_ov138_02295ecc();
    void func_ov138_02295eec();
    void func_ov138_02295f1c();
    void func_ov138_02295f54();
    void func_ov138_02295f7c();
    void func_ov138_0229600c();
    void func_ov138_0229611c();

    /* 0x91 */ u8 unk_91;
    /* 0x92 */ u16 unk_92;
    /* 0x94 */ u8 unk_94;
    /* 0x95 */ u8 unk_95;
    /* 0x96 */ u8 unk_96[2];
    /* 0x98 */ Unk_ov138_098 unk_98;
    /* 0xfc */ Unk_ov138_0fc unk_fc;
    /* 0x260 */ Unk_ov138_260 unk_260;
};

void Unk_ov138_02296380::func_ov138_02295d08() {
    if (func_ov002_02200a14(1)) {
        func_ov138_02295880();
    } else {
        if (Unk_ov138_Both()) {
            if (unk_fc.func_ov002_02203110(6)) {
                func_ov138_02295818();
            } else if (unk_fc.func_ov002_02203110(7)) {
                func_ov138_022957f0();
            } else {
                s32 r = unk_260.func_ov134_022935b8(data_021ef5f0, data_021ef5ec);
                if (r != 6) {
                    func_ov138_022957c4(r);
                }
            }
        }
    }
}

void Unk_ov138_02296380::func_ov138_02295d9c() {
    unk_260.func_ov134_022946fc();
    unk_fc.func_ov002_02203920();
}

void Unk_ov138_02296380::func_ov138_02295dbc() {
    unk_260.func_ov134_022947e8();
    unk_260.func_ov134_022947b8(0x6c);
}

void Unk_ov138_02296380::func_ov138_02295ddc() {
    func_020015b8(0);
    func_02002398(6, 2);
    func_0200226c(6, 0, 0, 0);
    func_02002398(4, 1);
    func_0200226c(4, 0, 0, 0);
    func_02002398(3, 1);
    func_0200226c(3, 0, 0, 0);
}

void Unk_ov138_02296380::func_ov138_02295e54() {
    func_ov138_02295e28();
}

void Unk_ov138_02296380::func_ov138_02295e28() {
    unk_260.func_ov134_022948e4();
}

void Unk_ov138_02296380::func_ov138_02295e38() {
    unk_fc.func_ov002_02203900();
    unk_260.func_ov134_022949a8();
}

void Unk_ov138_02296380::func_ov138_02295e5c() {
    func_ov138_02295e38();
    unk_98.vfunc_0c();
}

void Unk_ov138_02296380::func_ov138_02295e74() {
    unk_260.func_ov134_022949ec();
    unk_fc.func_ov002_02203900();
}

void Unk_ov138_02296380::func_ov138_02295e94() {
    unk_260.func_ov134_02294a34(3, 6, 4, 3);
    unk_260.func_ov134_02294a28();
    unk_95 = 0;
    unk_92 = 0;
}

void Unk_ov138_02296380::func_ov138_02295ecc() {
    func_ov002_02200840(6, 0, 0);
    func_ov002_02200840(4, 0, 0);
}

void Unk_ov138_02296380::func_ov138_02295eec() {
    if (func_ov002_022008fc(0)) {
        func_020021a0(6);
        func_020021a0(4);
        func_ov002_02200a60(5);
    } else {
        func_ov138_02295ecc();
    }
}

void Unk_ov138_02296380::func_ov138_02295f1c() {
    func_ov092_02291ce4(func_020ed174(), 0x44, 1);
    func_ov002_022008c4(10, 0, 0, 0x30);
    func_ov138_02295ecc();
    func_ov002_02200a50(3);
}

void Unk_ov138_02296380::func_ov138_02295f54() {
    if (func_ov002_02200908(0)) {
        func_ov002_02200a60(2);
        func_ov138_02295860();
    }
    func_ov138_02295ecc();
}

void Unk_ov138_02296380::func_ov138_02295f7c() {
    func_ov138_02295ddc();
    func_ov138_02295dbc();
    func_ov138_02295d9c();
    func_ov002_022008e0(10, 4, 0, 0x30);
    func_020020b8(6);
    func_020020b8(4);
    func_ov138_02295ecc();
    func_ov138_02295404(1);
    unk_fc.func_ov002_022034c4(0x65);
    func_ov002_02200a50(1);
}

BOOL Unk_ov138_02296380::vfunc_5c() {
    func_020ed188(this);
    return TRUE;
}

BOOL Unk_ov138_02296380::vfunc_58() { return TRUE; }

BOOL Unk_ov138_02296380::vfunc_54() { return TRUE; }

BOOL Unk_ov138_02296380::vfunc_50() {
    func_ov138_02295e5c();
    func_ov138_0229600c();
    func_ov138_02295e54();
    return TRUE;
}

void Unk_ov138_02296380::func_ov138_0229600c() {
    static Unk_ov138_02296380_Fn tbl[14] = {
        &Unk_ov138_02296380::func_ov138_02295d08,
        &Unk_ov138_02296380::func_ov138_02295c70,
        &Unk_ov138_02296380::func_ov138_02295c34,
        &Unk_ov138_02296380::func_ov138_02295bf8,
        &Unk_ov138_02296380::func_ov138_02295b7c,
        &Unk_ov138_02296380::func_ov138_02295ae4,
        &Unk_ov138_02296380::func_ov138_02295a8c,
        &Unk_ov138_02296380::func_ov138_02295a44,
        &Unk_ov138_02296380::func_ov138_02295a1c,
        &Unk_ov138_02296380::func_ov138_02295998,
        &Unk_ov138_02296380::func_ov138_02295974,
        &Unk_ov138_02296380::func_ov138_02295910,
        &Unk_ov138_02296380::func_ov138_022958f0,
        &Unk_ov138_02296380::func_ov138_022958b4};
    (this->*tbl[unk_8d])();
}

BOOL Unk_ov138_02296380::vfunc_4c() {
    static Unk_ov138_02296380_Fn tbl[4] = {
        &Unk_ov138_02296380::func_ov138_02295f7c,
        &Unk_ov138_02296380::func_ov138_02295f54,
        &Unk_ov138_02296380::func_ov138_02295f1c,
        &Unk_ov138_02296380::func_ov138_02295eec};
    func_ov138_02295e38();
    (this->*tbl[unk_8c])();
    func_ov138_02295e28();
    return TRUE;
}

BOOL Unk_ov138_02296380::vfunc_24() {
    if (func_0206ef00()) {
        unk_98.func_ov002_02202844();
    }
    if (!func_ov138_02295414(1)) {
        return FALSE;
    }
    s32 r = func_ov002_02200920();
    unk_260.func_ov134_02293c48(0, r);
    s32 r2 = func_ov002_02200920();
    unk_fc.func_ov002_022036a4(r2);
    return TRUE;
}

BOOL Unk_ov138_02296380::vfunc_0c() {
    func_020ed174();
    func_ov092_02291c5c();
    func_ov138_02295e74();
    return TRUE;
}

BOOL Unk_ov138_02296380::vfunc_00() {
    func_ov138_02295e94();
    unk_8c = 0;
    func_ov002_02200a60(0);
    return TRUE;
}

extern "C" Unk_ov138_02296380 *func_ov138_02296240() { return new Unk_ov138_02296380(); }
