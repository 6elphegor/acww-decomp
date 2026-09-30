#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef vfunc_08
#undef vfunc_14

extern "C" {
extern u8 data_021e58a8[];
extern u16 data_021f47d8[];
extern u8 data_021f4770[];
extern u8 data_021f4774[];
extern u8 data_021ef5f0[];
extern u8 data_021ef5ec[];

void func_0200402c(u32 id);
void func_020015b8(s32 a);
void func_02002398(s32 a, s32 b);
void func_0200226c(s32 a, s32 b, s32 c, s32 d);
void func_020021a0(s32 a);
void func_020020b8(s32 a);
void *func_0209750c();
void *_ZN12Unk_02097ff413func_02098320Ev();
void *_ZN12Unk_0209865c13func_02098750Ev(void *p);
s32 func_0206ed50();
void func_0206ecf8(s32 a);
s32 func_0206ef0c();
s32 func_0206ef00();
void func_0206e8dc();
void func_02097410(void *p, s32 v);
s32 func_02097414(void *p);
void func_02097a48(void *p, s32 v, s32 w);
s32 _ZN12Unk_02097d1c13func_02097d1cEi(void *p, s32 v);
s32 func_02097ce4(void *p, s32 v, s32 w);
void *func_020ed174();
void func_020ed188(void *p);

void _ZN12Unk_0206022c13func_02060370Ei(void *self, s32 v);
s32 _ZN12Unk_0206022c13func_02060388Ev(void *self);
s32 _ZN12Unk_020e100c13func_0208d534Ev(void *self);
s32 _ZN12Unk_020e100c13func_0208d4fcEv(void *self);
void func_ov002_02203920(void *self);
void _ZN18Unk_ov092_02291ec819func_ov092_02291ce4Eii(void *self, s32 a, s32 b);
void _ZN18Unk_ov092_02291ec819func_ov092_02291c5cEv(void *self);

// ov130 (library overlay) plain functions; first argument is the Unk_ov130_02292360 object
s32 func_ov130_022927a4(void *self);
s32 func_ov130_022927a0(void *self);
s32 func_ov130_0229279c(void *self);
void func_ov130_022927a8(void *self, s32 a, s32 b, s32 c);
void func_ov130_022927b0(void *self, s32 a);
s32 func_ov130_02292aec(void *self);
s32 func_ov130_02292b00(void *self);
s32 func_ov130_02292b10(void *self);
void func_ov130_02292c14(void *self);
void func_ov130_02292bec(void *self);
s32 func_ov130_02292a48(void *self);
s32 func_ov130_02292a38(void *self);
s32 func_ov130_02292a6c(void *self, s32 a);
s32 func_ov130_02292758(void *self);
s32 func_ov130_02292c40(void *self, u32 a, u32 b);
void func_ov130_02292c1c(void *self);
}

class Unk_ov002_02202d98 {
public:
    void func_ov002_02202844();
    void func_ov002_02202af0();
    void func_ov002_02202a78();
    void func_ov002_022029e8(s32 a, s32 b, s32 c, s32 d);
    void func_ov002_02202a40(s32 a, s32 b);
    s32 func_ov002_022028f0();
};

class Unk_ov002_0220464c {
public:
    void func_ov002_02202b68();
    void func_ov002_02202ca0();
    void func_ov002_02202c40();
    void func_ov002_02202d00(s32 v);
};

class Unk_ov002_02204614 {
public:
    Unk_ov002_02204614();
    virtual ~Unk_ov002_02204614();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    u32 unk_04[0x60 / 4];
};

class Unk_ov002_02202fac {
public:
    void func_ov002_022030ac(u8 v);
    void func_ov002_02202fe4(s32 v);
    void func_ov002_02202fc8(s32 v);
    s32 func_ov002_02203110(s32 v);
    s32 func_ov002_02202fac(s32 v);
    s32 func_ov002_0220308c();
    s32 func_ov002_0220306c();
    s32 func_ov002_022030f4(s32 v);
    s32 func_ov002_022030b8(s32 v);
};

class Unk_ov002_022046cc : public Unk_ov002_02202fac {
public:
    Unk_ov002_022046cc();
    ~Unk_ov002_022046cc();
    void func_ov002_022034c4(u8 v);
    void func_ov002_022036a4(s32 a);
    void func_ov002_02203900();
    u32 unk_00[0x164 / 4];
};

class Unk_ov130_02292360 {
public:
    Unk_ov130_02292360();
    ~Unk_ov130_02292360();
    void func_ov130_02292c7c();
    void func_ov130_02292cf4();
    void func_ov130_02292d40();
    void func_ov130_02292d68();
    s32 func_ov130_02292e90();
    void func_ov130_022930ac(u32 a, u32 b, u32 c);
    u32 unk_00[0x11b4 / 4];
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

    void func_ov002_02200a50(u8 v);
    void func_ov002_02200a58(u8 v);
    void func_ov002_02200a60(u8 v);
    s32 func_ov002_02200a14(s32 v);
    s32 func_ov002_022008fc(s32 v);
    s32 func_ov002_02200908(s32 v);
    s32 func_ov002_022009d4();
    s32 func_ov002_022009c8();
    s32 func_ov002_02200920();
    void func_ov002_02200980();
    void func_ov002_02200840(s32 a, s32 b, s32 c);
    void func_ov002_02200850(s32 a);
    void func_ov002_022008c4(s32 a, s32 b, s32 c, s32 d);
    void func_ov002_022008e0(s32 a, s32 b, s32 c, s32 d);

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

static inline BOOL func_ov131_Both() {
    if (data_021f4770[0] != 0 && data_021f4774[0] != 0) {
        return TRUE;
    }
    return FALSE;
}

class Unk_ov131_022942f0;
typedef void (Unk_ov131_022942f0::*Unk_ov131_022942f0_Fn)();

// Vtable 0x022942f0, size 0x1414
class Unk_ov131_022942f0 : public Unk_ov002_022044e4 {
public:
    Unk_ov131_022942f0() : unk_94(), unk_f8(), unk_25c() {}

    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_24();
    virtual BOOL vfunc_4c();
    virtual BOOL vfunc_50();
    virtual BOOL vfunc_54();
    virtual BOOL vfunc_58();
    virtual BOOL vfunc_5c();

    void func_ov131_02293734(u32 mask);
    BOOL func_ov131_02293744(u32 mask);
    void func_ov131_0229375c();
    void func_ov131_0229380c();
    void func_ov131_022938e4();
    void func_ov131_0229390c();
    void func_ov131_02293924();
    void func_ov131_02293940(s32 a, s32 b);
    void func_ov131_02293974();
    void func_ov131_022939bc();
    s32 func_ov131_022939d8();
    s32 func_ov131_022939e8();
    void func_ov131_022939f8();
    void func_ov131_02293a4c();
    BOOL func_ov131_02293a7c();
    void func_ov131_02293ad0();
    void func_ov131_02293af0();
    void func_ov131_02293b0c();
    void func_ov131_02293b24();
    void func_ov131_02293b88();
    void func_ov131_02293bc8();
    void func_ov131_02293bf0();
    void func_ov131_02293c4c();
    void func_ov131_02293c74();
    void func_ov131_02293d04();
    void func_ov131_02293d38();
    void func_ov131_02293dd4();
    s32 func_ov131_02293df4();
    void func_ov131_02293e04();
    void func_ov131_02293e3c();
    void func_ov131_02293e74();
    void func_ov131_02293e90();
    void func_ov131_02293e98();
    void func_ov131_02293eb0();
    void func_ov131_02293ecc();
    void func_ov131_02293f04();
    void func_ov131_02293f24();
    void func_ov131_02293f54();
    void func_ov131_02293f8c();
    void func_ov131_02293fb4();
    void func_ov131_02294044();

    /* 0x91 */ u8 unk_91[3];
    /* 0x94 */ Unk_ov002_02204614 unk_94;
    /* 0xf8 */ Unk_ov002_022046cc unk_f8;
    /* 0x25c */ Unk_ov130_02292360 unk_25c;
    /* 0x1410 */ u16 unk_1410;
    /* 0x1412 */ u8 unk_1412;
};

extern "C" Unk_ov131_022942f0 *func_ov131_02294220() { return new Unk_ov131_022942f0(); }

struct Unk_ov131_SceneEntry {
    Unk_ov131_022942f0 *(*create)();
    u16 a;
    u16 b;
};

// Scene registration entry read by main: factory, then two ids
extern "C" Unk_ov131_SceneEntry data_ov131_02294290 = {func_ov131_02294220, 0xb2, 0xb6};

BOOL Unk_ov131_022942f0::vfunc_00() {
    func_ov131_02293ecc();
    unk_8c = 0;
    func_ov002_02200a60(0);
    return TRUE;
}

BOOL Unk_ov131_022942f0::vfunc_0c() {
    _ZN18Unk_ov092_02291ec819func_ov092_02291c5cEv(func_020ed174());
    func_ov131_02293eb0();
    return TRUE;
}

BOOL Unk_ov131_022942f0::vfunc_24() {
    if (func_0206ef00()) {
        ((Unk_ov002_02202d98 *)&unk_94)->func_ov002_02202844();
    }
    if (!func_ov131_02293744(1)) {
        return FALSE;
    }
    unk_f8.func_ov002_022036a4(func_ov002_02200920());
    func_ov130_022927b0(&unk_25c, func_ov002_02200920());
    return TRUE;
}

BOOL Unk_ov131_022942f0::vfunc_4c() {
    static Unk_ov131_022942f0_Fn tbl[4] = {
        &Unk_ov131_022942f0::func_ov131_02293fb4,
        &Unk_ov131_022942f0::func_ov131_02293f8c,
        &Unk_ov131_022942f0::func_ov131_02293f54,
        &Unk_ov131_022942f0::func_ov131_02293f24};
    func_ov131_02293e74();
    (this->*tbl[unk_8c])();
    func_ov131_02293e3c();
    return TRUE;
}

void Unk_ov131_022942f0::func_ov131_02294044() {
    static Unk_ov131_022942f0_Fn tbl[8] = {
        &Unk_ov131_022942f0::func_ov131_02293d38,
        &Unk_ov131_022942f0::func_ov131_02293d04,
        &Unk_ov131_022942f0::func_ov131_02293c74,
        &Unk_ov131_022942f0::func_ov131_02293c4c,
        &Unk_ov131_022942f0::func_ov131_02293bf0,
        &Unk_ov131_022942f0::func_ov131_02293bc8,
        &Unk_ov131_022942f0::func_ov131_02293b88,
        &Unk_ov131_022942f0::func_ov131_02293b24};
    (this->*tbl[unk_8d])();
}

BOOL Unk_ov131_022942f0::vfunc_50() {
    func_ov131_02293e98();
    func_ov131_02294044();
    func_ov131_02293e90();
    return TRUE;
}

BOOL Unk_ov131_022942f0::vfunc_54() { return TRUE; }

BOOL Unk_ov131_022942f0::vfunc_58() { return TRUE; }

BOOL Unk_ov131_022942f0::vfunc_5c() {
    func_020ed188(this);
    return TRUE;
}

void Unk_ov131_022942f0::func_ov131_02293fb4() {
    func_ov131_02293e04();
    func_ov131_02293df4();
    func_ov131_02293dd4();
    func_ov002_022008e0(10, 4, 0, 0x30);
    func_020020b8(6);
    func_020020b8(4);
    func_ov131_02293f04();
    func_ov131_02293734(1);
    unk_f8.func_ov002_022034c4(0x65);
    func_ov002_02200a50(1);
}

void Unk_ov131_022942f0::func_ov131_02293f8c() {
    if (func_ov002_02200908(0)) {
        func_ov002_02200a60(2);
        func_ov131_02293ad0();
    }
    func_ov131_02293f04();
}

void Unk_ov131_022942f0::func_ov131_02293f54() {
    void *r = func_020ed174();
    _ZN18Unk_ov092_02291ec819func_ov092_02291ce4Eii(r, 0x44, 1);
    func_ov002_022008c4(10, 0, 0, 0x30);
    func_ov131_02293f04();
    func_ov002_02200a50(3);
}

void Unk_ov131_022942f0::func_ov131_02293f24() {
    if (func_ov002_022008fc(0)) {
        func_020021a0(6);
        func_020021a0(4);
        func_ov002_02200a60(5);
    } else {
        func_ov131_02293f04();
    }
}

void Unk_ov131_022942f0::func_ov131_02293f04() {
    func_ov002_02200840(6, 0, 0);
    func_ov002_02200840(4, 0, 0);
}

void Unk_ov131_022942f0::func_ov131_02293ecc() {
    unk_25c.func_ov130_022930ac((u8)(func_0206ed50() - 0x34), 6, 4);
    func_ov131_0229380c();
    unk_1410 = 0;
}

void Unk_ov131_022942f0::func_ov131_02293eb0() {
    unk_f8.func_ov002_02203900();
    unk_25c.func_ov130_02292d40();
}

void Unk_ov131_022942f0::func_ov131_02293e98() {
    func_ov131_02293e74();
    unk_94.vfunc_0c();
}

void Unk_ov131_022942f0::func_ov131_02293e90() { func_ov131_02293e3c(); }

void Unk_ov131_022942f0::func_ov131_02293e74() {
    unk_f8.func_ov002_02203900();
    unk_25c.func_ov130_02292cf4();
}

void Unk_ov131_022942f0::func_ov131_02293e3c() {
    unk_25c.func_ov130_02292c7c();
    if (func_ov130_022927a4(&unk_25c) == 0) {
        unk_f8.func_ov002_02202fe4(6);
    } else {
        unk_f8.func_ov002_02202fc8(6);
    }
}

void Unk_ov131_022942f0::func_ov131_02293e04() {
    func_020015b8(0);
    func_02002398(6, 2);
    func_0200226c(6, 0, 0, 0);
    func_02002398(4, 2);
    func_0200226c(4, 0, 0, 0);
}

s32 Unk_ov131_022942f0::func_ov131_02293df4() { return unk_25c.func_ov130_02292e90(); }

void Unk_ov131_022942f0::func_ov131_02293dd4() {
    unk_25c.func_ov130_02292d68();
    func_ov002_02203920(&unk_f8);
}

void Unk_ov131_022942f0::func_ov131_02293d38() {
    if (func_ov002_02200a14(1)) {
        func_ov131_02293af0();
    } else {
        if (func_ov131_Both()) {
            if (unk_f8.func_ov002_02203110(6)) {
                func_ov131_02293a7c();
            } else if (unk_f8.func_ov002_02203110(7)) {
                func_ov131_02293a4c();
            } else {
                if (func_ov130_02292c40(&unk_25c, data_021ef5f0[0], data_021ef5ec[0]) != 0xd) {
                    func_ov130_02292c1c(&unk_25c);
                    func_ov002_02200a58(1);
                }
            }
        }
    }
}

void Unk_ov131_022942f0::func_ov131_02293d04() {
    if (data_021f4770[0] == 0) {
        func_ov130_02292c14(&unk_25c);
        func_ov002_02200a58(0);
    } else {
        func_ov130_02292bec(&unk_25c);
    }
}

void Unk_ov131_022942f0::func_ov131_02293c74() {
    if (func_ov002_022009d4()) {
        func_ov131_02293b0c();
    } else if (func_ov130_02292a6c(&unk_25c, func_ov002_022009c8())) {
        func_ov131_02293974();
    } else {
        u32 k = data_021f47d8[1];
        if (k & 8) {
            if (func_ov131_02293a7c()) {
                func_ov131_022939bc();
            }
        } else if (k & 1) {
            func_ov131_0229390c();
        } else if (k & 2) {
            if (!func_ov130_02292758(&unk_25c)) {
                func_ov131_022939bc();
                func_ov131_02293a4c();
            }
        }
    }
}

void Unk_ov131_022942f0::func_ov131_02293c4c() {
    if (!((Unk_ov002_02202d98 *)&unk_94)->func_ov002_022028f0()) {
        func_ov002_02200a58(unk_1412);
        func_ov131_02294044();
    }
}

void Unk_ov131_022942f0::func_ov131_02293bf0() {
    if (_ZN12Unk_020e100c13func_0208d4fcEv(&unk_94)) {
        if (func_ov130_02292a48(&unk_25c)) {
            func_ov002_02200a58(6);
        } else if (func_ov130_02292a38(&unk_25c)) {
            if (!func_ov131_02293a7c()) {
                func_ov002_02200a58(2);
                func_ov131_022938e4();
            }
        } else {
            func_ov131_02293a4c();
        }
    }
}

void Unk_ov131_022942f0::func_ov131_02293bc8() {
    if (_ZN12Unk_020e100c13func_0208d4fcEv(&unk_94)) {
        func_ov131_02293924();
        func_ov002_02200a58(unk_1412);
    }
}

void Unk_ov131_022942f0::func_ov131_02293b88() {
    if ((data_021f47d8[0] & 1) == 0) {
        func_ov130_02292c14(&unk_25c);
        func_ov002_02200a58(2);
        func_ov131_022938e4();
    } else {
        func_ov130_02292bec(&unk_25c);
    }
}

void Unk_ov131_022942f0::func_ov131_02293b24() {
    if (unk_f8.func_ov002_0220308c()) {
        if (_ZN12Unk_020e100c13func_0208d534Ev(&unk_94)) {
            s32 a = unk_f8.func_ov002_0220306c();
            s32 b = unk_f8.func_ov002_022030f4(-1);
            s32 c = unk_f8.func_ov002_022030b8(-1);
            ((Unk_ov002_02202d98 *)&unk_94)->func_ov002_02202a40(a + b, a + c);
        }
    } else {
        func_ov131_022939bc();
        func_ov002_02200a60(1);
    }
}

void Unk_ov131_022942f0::func_ov131_02293b0c() {
    func_ov131_022939bc();
    func_ov002_02200a58(0);
}

void Unk_ov131_022942f0::func_ov131_02293af0() {
    func_ov131_022939f8();
    func_ov002_02200980();
    func_ov002_02200a58(2);
}

void Unk_ov131_022942f0::func_ov131_02293ad0() {
    if (func_0206ef0c()) {
        func_ov131_02293b0c();
    } else {
        func_ov131_02293af0();
    }
}

BOOL Unk_ov131_022942f0::func_ov131_02293a7c() {
    if (unk_f8.func_ov002_02202fac(6)) {
        return FALSE;
    }
    unk_f8.func_ov002_022030ac(6);
    func_ov002_02200a50(2);
    func_ov002_02200a58(7);
    func_0206ecf8(1);
    func_ov130_022927a4(&unk_25c);
    func_0206e8dc();
    func_ov131_0229375c();
    return TRUE;
}

void Unk_ov131_022942f0::func_ov131_02293a4c() {
    func_0200402c(0x2a);
    func_0206ecf8(0);
    unk_f8.func_ov002_022030ac(7);
    func_ov002_02200a50(2);
    func_ov002_02200a58(7);
}

void Unk_ov131_022942f0::func_ov131_022939f8() {
    s32 a = func_ov131_022939e8();
    s32 b = func_ov131_022939d8();
    ((Unk_ov002_02202d98 *)&unk_94)->func_ov002_02202a40(a, b);
    if (func_ov130_02292aec(&unk_25c)) {
        ((Unk_ov002_0220464c *)&unk_94)->func_ov002_02202d00(7);
    } else {
        ((Unk_ov002_0220464c *)&unk_94)->func_ov002_02202d00(1);
    }
    func_ov131_02293924();
}

s32 Unk_ov131_022942f0::func_ov131_022939e8() { return func_ov130_02292b10(&unk_25c); }

s32 Unk_ov131_022942f0::func_ov131_022939d8() { return func_ov130_02292b00(&unk_25c); }

void Unk_ov131_022942f0::func_ov131_022939bc() {
    ((Unk_ov002_0220464c *)&unk_94)->func_ov002_02202d00(0);
    unk_94.vfunc_0c();
}

void Unk_ov131_022942f0::func_ov131_02293974() {
    if (func_ov130_02292aec(&unk_25c)) {
        ((Unk_ov002_0220464c *)&unk_94)->func_ov002_02202ca0();
    } else {
        ((Unk_ov002_0220464c *)&unk_94)->func_ov002_02202c40();
    }
    s32 a = func_ov131_022939e8();
    s32 b = func_ov131_022939d8();
    func_ov131_02293940(a, b);
}

void Unk_ov131_022942f0::func_ov131_02293940(s32 a, s32 b) {
    ((Unk_ov002_02202d98 *)&unk_94)->func_ov002_022029e8(a, b, 3, 1);
    unk_1412 = unk_8d;
    func_ov002_02200a58(3);
}

void Unk_ov131_022942f0::func_ov131_02293924() {
    ((Unk_ov002_02202d98 *)&unk_94)->func_ov002_02202a78();
    unk_94.vfunc_0c();
}

void Unk_ov131_022942f0::func_ov131_0229390c() {
    ((Unk_ov002_0220464c *)&unk_94)->func_ov002_02202b68();
    func_ov002_02200a58(4);
}

void Unk_ov131_022942f0::func_ov131_022938e4() {
    ((Unk_ov002_02202d98 *)&unk_94)->func_ov002_02202af0();
    unk_1412 = unk_8d;
    func_ov002_02200a58(5);
}

void Unk_ov131_022942f0::func_ov131_0229380c() {
    s32 hi;
    s32 lo;
    s32 m = func_0206ed50();
    void *p = func_0209750c();
    void *q = _ZN12Unk_02097ff413func_02098320Ev();
    switch (m) {
    case 0x38:
        hi = 0x98967f;
        break;
    case 0x3a:
        hi = 99;
        break;
    case 0x36:
        hi = func_02097414(q);
        break;
    default:
        hi = _ZN12Unk_02097d1c13func_02097d1cEi(_ZN12Unk_0209865c13func_02098750Ev(p), 1);
        break;
    }
    lo = 0;
    void *g = data_021e58a8;
    switch (m) {
    case 0x34:
        lo = _ZN12Unk_0206022c13func_02060388Ev(g);
        break;
    case 0x35:
        lo = func_02097414(q);
        break;
    case 0x36:
        lo = _ZN12Unk_02097d1c13func_02097d1cEi(_ZN12Unk_0209865c13func_02098750Ev(p), 1);
        break;
    }
    volatile s32 mx = hi;
    switch (m) {
    case 0x34:
        if (lo < hi) {
            mx = lo;
        }
        break;
    case 0x35: {
        s32 t = 0x3b9ac9ff - lo;
        if (t < hi) {
            mx = t;
        }
        break;
    }
    case 0x36: {
        s32 t = func_02097ce4(_ZN12Unk_0209865c13func_02098750Ev(p), 1, 0);
        if (t < hi) {
            mx = t;
        }
        break;
    }
    }
    func_ov130_022927a8(&unk_25c, mx, hi, lo);
}

void Unk_ov131_022942f0::func_ov131_0229375c() {
    s32 a = func_ov130_022927a4(&unk_25c);
    s32 b = func_ov130_022927a0(&unk_25c);
    s32 c = func_ov130_0229279c(&unk_25c);
    void *p = func_0209750c();
    void *q = _ZN12Unk_02097ff413func_02098320Ev();
    s32 m = func_0206ed50();
    switch (m) {
    case 0x36:
        func_02097410(q, b - a);
        break;
    case 0x37:
    default:
        func_02097a48(_ZN12Unk_0209865c13func_02098750Ev(p), -a, 1);
        break;
    case 0x38:
    case 0x39:
    case 0x3a:
        break;
    }
    switch (m) {
    case 0x34:
        _ZN12Unk_0206022c13func_02060370Ei(data_021e58a8, c - a);
        break;
    case 0x35:
        func_02097410(q, c + a);
        break;
    case 0x36:
        func_02097a48(_ZN12Unk_0209865c13func_02098750Ev(p), a, 1);
        break;
    }
}

BOOL Unk_ov131_022942f0::func_ov131_02293744(u32 mask) {
    if (unk_1410 & mask) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov131_022942f0::func_ov131_02293734(u32 mask) { unk_1410 = unk_1410 | mask; }

// ---------------------------------------------------------------------------------------------


