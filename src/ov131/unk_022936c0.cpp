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
void *func_02098320();
void *func_02098750(void *p);
s32 func_0206ed50();
void func_0206ecf8(s32 a);
s32 func_0206ef0c();
s32 func_0206ef00();
void func_0206e8dc();
void func_02097410(void *p, s32 v);
s32 func_02097414(void *p);
void func_02097a48(void *p, s32 v, s32 w);
s32 func_02097d1c(void *p, s32 v);
s32 func_02097ce4(void *p, s32 v, s32 w);
void func_02060370(void *p, s32 v);
s32 func_02060388(void *p);
s32 func_0208d534(void *p);
s32 func_0208d4fc(void *p);
void *func_020ed174();
}

class Unk_ov131_sub_02203968 {
public:
    ~Unk_ov131_sub_02203968();
    void func_ov002_022034c4(u32 v);
    void func_ov002_022030ac(u32 v);
    void func_ov002_02202fe4(u32 v);
    void func_ov002_02202fc8(u32 v);
    s32 func_ov002_02203110(u32 v);
    s32 func_ov002_02202fac_(u32 v);
    s32 func_ov002_0220308c();
    s32 func_ov002_0220306c();
    s32 func_ov002_022030f4(s32 v);
    s32 func_ov002_022030b8(s32 v);
    void func_ov002_02203920();
    void func_ov002_02203900();
    u32 unk_00[0x164 / 4];
};

class Unk_ov131_sub_02202640 {
public:
    virtual ~Unk_ov131_sub_02202640();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    void func_ov002_02202af0();
    void func_ov002_02202b68();
    void func_ov002_02202a78();
    void func_ov002_022029e8(s32 a, s32 b, s32 c, s32 d);
    void func_ov002_02202ca0();
    void func_ov002_02202c40();
    void func_ov002_02202d00(u32 v);
    void func_ov002_02202a40(s32 a, s32 b);
    s32 func_ov002_022028f0();
    u32 unk_04[0x60 / 4];
};

class Unk_ov130_02293164 {
public:
    ~Unk_ov130_02293164();
    s32 func_ov130_022927a4();
    s32 func_ov130_022927a0();
    s32 func_ov130_0229279c();
    void func_ov130_022927a8(s32 a, s32 b, s32 c);
    s32 func_ov130_02292aec();
    s32 func_ov130_02292b00();
    s32 func_ov130_02292b10();
    void func_ov130_02292c14();
    void func_ov130_02292bec();
    s32 func_ov130_02292a48();
    s32 func_ov130_02292a38();
    s32 func_ov130_02292a6c(s32 a);
    s32 func_ov130_02292758();
    s32 func_ov130_02292c40(u32 a, u32 b);
    void func_ov130_02292c1c();
    void func_ov130_02292d68();
    s32 func_ov130_02292e90();
    void func_ov130_02292c7c();
    s32 func_ov130_02292cf4();
    s32 func_ov130_02292d40();
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
    void func_ov002_02200980();
    void func_ov002_02200840(s32 a, s32 b, s32 c);
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

extern "C" {
void func_ov092_02291ce4(void *p, s32 a, s32 b);
}

static inline BOOL func_ov131_Both() {
    if (data_021f4770[0] != 0 && data_021f4774[0] != 0) {
        return TRUE;
    }
    return FALSE;
}

// Vtable 0x022942f0
class Unk_ov131_022942f0 : public Unk_ov002_022044e4 {
public:
    virtual ~Unk_ov131_022942f0();

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

    // out-of-range callee (ov131_001)
    void func_ov131_02294044();

    /* 0x91 */ u8 unk_91[3];
    /* 0x94 */ Unk_ov131_sub_02202640 unk_94;
    /* 0xf8 */ Unk_ov131_sub_02203968 unk_f8;
    /* 0x25c */ Unk_ov130_02293164 unk_25c;
    /* 0x1410 */ u16 unk_1410;
    /* 0x1412 */ u8 unk_1412;
};

// ---------------------------------------------------------------------------------------------

Unk_ov131_022942f0::~Unk_ov131_022942f0() {}

void Unk_ov131_022942f0::func_ov131_02293734(u32 mask) { unk_1410 = unk_1410 | mask; }

BOOL Unk_ov131_022942f0::func_ov131_02293744(u32 mask) {
    if (unk_1410 & mask) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov131_022942f0::func_ov131_0229375c() {
    s32 a = unk_25c.func_ov130_022927a4();
    s32 b = unk_25c.func_ov130_022927a0();
    s32 c = unk_25c.func_ov130_0229279c();
    void *p = func_0209750c();
    void *q = func_02098320();
    s32 m = func_0206ed50();
    switch (m) {
    case 0x36:
        func_02097410(q, b - a);
        break;
    case 0x37:
    default:
        func_02097a48(func_02098750(p), -a, 1);
        break;
    case 0x38:
    case 0x39:
    case 0x3a:
        break;
    }
    switch (m) {
    case 0x34:
        func_02060370(data_021e58a8, c - a);
        break;
    case 0x35:
        func_02097410(q, c + a);
        break;
    case 0x36:
        func_02097a48(func_02098750(p), a, 1);
        break;
    }
}

void Unk_ov131_022942f0::func_ov131_0229380c() {
    s32 hi;
    s32 lo;
    s32 m = func_0206ed50();
    void *p = func_0209750c();
    void *q = func_02098320();
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
        hi = func_02097d1c(func_02098750(p), 1);
        break;
    }
    lo = 0;
    void *g = data_021e58a8;
    switch (m) {
    case 0x34:
        lo = func_02060388(g);
        break;
    case 0x35:
        lo = func_02097414(q);
        break;
    case 0x36:
        lo = func_02097d1c(func_02098750(p), 1);
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
        s32 t = func_02097ce4(func_02098750(p), 1, 0);
        if (t < hi) {
            mx = t;
        }
        break;
    }
    }
    unk_25c.func_ov130_022927a8(mx, hi, lo);
}

void Unk_ov131_022942f0::func_ov131_022938e4() {
    unk_94.func_ov002_02202af0();
    unk_1412 = unk_8d;
    func_ov002_02200a58(5);
}

void Unk_ov131_022942f0::func_ov131_0229390c() {
    unk_94.func_ov002_02202b68();
    func_ov002_02200a58(4);
}

void Unk_ov131_022942f0::func_ov131_02293924() {
    unk_94.func_ov002_02202a78();
    unk_94.vfunc_0c();
}

void Unk_ov131_022942f0::func_ov131_02293940(s32 a, s32 b) {
    unk_94.func_ov002_022029e8(a, b, 3, 1);
    unk_1412 = unk_8d;
    func_ov002_02200a58(3);
}

void Unk_ov131_022942f0::func_ov131_02293974() {
    if (unk_25c.func_ov130_02292aec()) {
        unk_94.func_ov002_02202ca0();
    } else {
        unk_94.func_ov002_02202c40();
    }
    s32 a = func_ov131_022939e8();
    s32 b = func_ov131_022939d8();
    func_ov131_02293940(a, b);
}

void Unk_ov131_022942f0::func_ov131_022939bc() {
    unk_94.func_ov002_02202d00(0);
    unk_94.vfunc_0c();
}

s32 Unk_ov131_022942f0::func_ov131_022939d8() { return unk_25c.func_ov130_02292b00(); }

s32 Unk_ov131_022942f0::func_ov131_022939e8() { return unk_25c.func_ov130_02292b10(); }

void Unk_ov131_022942f0::func_ov131_022939f8() {
    s32 a = func_ov131_022939e8();
    s32 b = func_ov131_022939d8();
    unk_94.func_ov002_02202a40(a, b);
    if (unk_25c.func_ov130_02292aec()) {
        unk_94.func_ov002_02202d00(7);
    } else {
        unk_94.func_ov002_02202d00(1);
    }
    func_ov131_02293924();
}

void Unk_ov131_022942f0::func_ov131_02293a4c() {
    func_0200402c(0x2a);
    func_0206ecf8(0);
    unk_f8.func_ov002_022030ac(7);
    func_ov002_02200a50(2);
    func_ov002_02200a58(7);
}

BOOL Unk_ov131_022942f0::func_ov131_02293a7c() {
    if (unk_f8.func_ov002_02202fac_(6)) {
        return FALSE;
    }
    unk_f8.func_ov002_022030ac(6);
    func_ov002_02200a50(2);
    func_ov002_02200a58(7);
    func_0206ecf8(1);
    unk_25c.func_ov130_022927a4();
    func_0206e8dc();
    func_ov131_0229375c();
    return TRUE;
}

void Unk_ov131_022942f0::func_ov131_02293ad0() {
    if (func_0206ef0c()) {
        func_ov131_02293b0c();
    } else {
        func_ov131_02293af0();
    }
}

void Unk_ov131_022942f0::func_ov131_02293af0() {
    func_ov131_022939f8();
    func_ov002_02200980();
    func_ov002_02200a58(2);
}

void Unk_ov131_022942f0::func_ov131_02293b0c() {
    func_ov131_022939bc();
    func_ov002_02200a58(0);
}

void Unk_ov131_022942f0::func_ov131_02293b24() {
    if (unk_f8.func_ov002_0220308c()) {
        if (func_0208d534(&unk_94)) {
            s32 a = unk_f8.func_ov002_0220306c();
            s32 b = unk_f8.func_ov002_022030f4(-1);
            s32 c = unk_f8.func_ov002_022030b8(-1);
            unk_94.func_ov002_02202a40(a + b, a + c);
        }
    } else {
        func_ov131_022939bc();
        func_ov002_02200a60(1);
    }
}

void Unk_ov131_022942f0::func_ov131_02293b88() {
    if ((data_021f47d8[0] & 1) == 0) {
        unk_25c.func_ov130_02292c14();
        func_ov002_02200a58(2);
        func_ov131_022938e4();
    } else {
        unk_25c.func_ov130_02292bec();
    }
}

void Unk_ov131_022942f0::func_ov131_02293bc8() {
    if (func_0208d4fc(&unk_94)) {
        func_ov131_02293924();
        func_ov002_02200a58(unk_1412);
    }
}

void Unk_ov131_022942f0::func_ov131_02293bf0() {
    if (func_0208d4fc(&unk_94)) {
        if (unk_25c.func_ov130_02292a48()) {
            func_ov002_02200a58(6);
        } else if (unk_25c.func_ov130_02292a38()) {
            if (!func_ov131_02293a7c()) {
                func_ov002_02200a58(2);
                func_ov131_022938e4();
            }
        } else {
            func_ov131_02293a4c();
        }
    }
}

void Unk_ov131_022942f0::func_ov131_02293c4c() {
    if (!unk_94.func_ov002_022028f0()) {
        func_ov002_02200a58(unk_1412);
        func_ov131_02294044();
    }
}

void Unk_ov131_022942f0::func_ov131_02293c74() {
    if (func_ov002_022009d4()) {
        func_ov131_02293b0c();
    } else if (unk_25c.func_ov130_02292a6c(func_ov002_022009c8())) {
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
            if (!unk_25c.func_ov130_02292758()) {
                func_ov131_022939bc();
                func_ov131_02293a4c();
            }
        }
    }
}

void Unk_ov131_022942f0::func_ov131_02293d04() {
    if (data_021f4770[0] == 0) {
        unk_25c.func_ov130_02292c14();
        func_ov002_02200a58(0);
    } else {
        unk_25c.func_ov130_02292bec();
    }
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
                if (unk_25c.func_ov130_02292c40(data_021ef5f0[0], data_021ef5ec[0]) != 0xd) {
                    unk_25c.func_ov130_02292c1c();
                    func_ov002_02200a58(1);
                }
            }
        }
    }
}

void Unk_ov131_022942f0::func_ov131_02293dd4() {
    unk_25c.func_ov130_02292d68();
    unk_f8.func_ov002_02203920();
}

s32 Unk_ov131_022942f0::func_ov131_02293df4() { return unk_25c.func_ov130_02292e90(); }

void Unk_ov131_022942f0::func_ov131_02293e04() {
    func_020015b8(0);
    func_02002398(6, 2);
    func_0200226c(6, 0, 0, 0);
    func_02002398(4, 2);
    func_0200226c(4, 0, 0, 0);
}

void Unk_ov131_022942f0::func_ov131_02293e90() { func_ov131_02293e3c(); }

void Unk_ov131_022942f0::func_ov131_02293e3c() {
    unk_25c.func_ov130_02292c7c();
    if (unk_25c.func_ov130_022927a4() == 0) {
        unk_f8.func_ov002_02202fe4(6);
    } else {
        unk_f8.func_ov002_02202fc8(6);
    }
}

void Unk_ov131_022942f0::func_ov131_02293e74() {
    unk_f8.func_ov002_02203900();
    unk_25c.func_ov130_02292cf4();
}

void Unk_ov131_022942f0::func_ov131_02293e98() {
    func_ov131_02293e74();
    unk_94.vfunc_0c();
}

void Unk_ov131_022942f0::func_ov131_02293eb0() {
    unk_f8.func_ov002_02203900();
    unk_25c.func_ov130_02292d40();
}

void Unk_ov131_022942f0::func_ov131_02293ecc() {
    unk_25c.func_ov130_022930ac((u8)(func_0206ed50() - 0x34), 6, 4);
    func_ov131_0229380c();
    unk_1410 = 0;
}

void Unk_ov131_022942f0::func_ov131_02293f04() {
    func_ov002_02200840(6, 0, 0);
    func_ov002_02200840(4, 0, 0);
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

void Unk_ov131_022942f0::func_ov131_02293f54() {
    void *r = func_020ed174();
    func_ov092_02291ce4(r, 0x44, 1);
    func_ov002_022008c4(10, 0, 0, 0x30);
    func_ov131_02293f04();
    func_ov002_02200a50(3);
}

void Unk_ov131_022942f0::func_ov131_02293f8c() {
    if (func_ov002_02200908(0)) {
        func_ov002_02200a60(2);
        func_ov131_02293ad0();
    }
    func_ov131_02293f04();
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
