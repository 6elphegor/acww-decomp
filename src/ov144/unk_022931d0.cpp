#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef vfunc_08
#undef vfunc_14

extern "C" {
extern u16 data_021f47d8[];
extern u8 data_021f4770;
extern u8 data_021f4774;
extern u8 data_021ef5ec;
extern u8 data_021ef5f0;
extern u32 data_021f482c;
extern char data_ov144_02293e18[];
extern char data_ov144_02293e2c[];
extern char data_ov144_02293e40[];
extern char data_ov144_02293e54[];
extern char data_ov144_02293e68[];
extern char data_ov144_02293e7c[];
extern char data_ov144_02293e90[];
void func_020ed188(void *p);
s32 func_020ed174();
void func_020020b8(u32 x);
void func_020021a0(u32 x);
void func_ov092_02291ce4(s32 a, s32 b, s32 c);
void func_02060044(u32 a);
void func_0208d644(void *p);
BOOL func_0208d534(void *p);
BOOL func_0208d4fc(void *p);
BOOL func_ov002_022028f0(void *p);
void func_ov002_02202a40(void *p, s32 a, s32 b);
BOOL func_ov002_02204234(void *p, s32 a);
BOOL func_ov002_0220308c(void *p);
s32 func_ov002_0220306c(void *p);
s32 func_ov002_022030f4(void *p, s32 a);
s32 func_ov002_022030b8(void *p, s32 a);
void func_ov002_02202f00(void *p);
void func_ov002_02202ed0(void *p);
void func_ov002_02202f0c(void *p);
void func_ov002_02203920(void *p);
void func_ov002_02203900(void *p);
void func_ov002_02203510(void *p, s32 a);
void func_020b87d0(void *p);
void func_0200261c(const char *s, u32 a, s32 b, s32 c, s32 d, s32 e);
void func_020026c4(const char *s, u32 a, s32 b, s32 c, s32 d, s32 e);
void func_020641b4(const char *s, void *d, s32 n);
void func_020015b8(s32 a);
void func_02002398(s32 a, s32 b);
void func_0200226c(s32 a, s32 b, s32 c, s32 d);
void func_0206e63c();
BOOL func_0206e61c();
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
    BOOL func_ov002_022008fc(s32 a);
    void func_ov002_02200874(s32 a, s32 b);
    void func_ov002_022008c4(s32 a, s32 b, s32 c, s32 d);
    void func_ov002_02200850(s32 a);
    void func_ov002_022008a8(s32 a, s32 b, s32 mode, s32 dist);
    s32 func_ov002_02200914();
    void func_ov002_022008e0(s32 a, s32 b, s32 c, s32 d);
    BOOL func_ov002_02200908(s32 a);
    s32 func_ov002_02200920();
    void func_ov002_02200a50(u8 v);
    void func_ov002_02200a58(u8 v);
    void func_ov002_02200a60(u8 v);
    void func_ov002_02200a68();
    BOOL func_ov002_02200a14(s32 a);
    BOOL func_ov002_022009d4();
    s32 func_ov002_022009c8();

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

class Unk_ov144_02202f88 {
public:
    virtual ~Unk_ov144_02202f88();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    u32 unk_04[0x44 / 4];
};

class Unk_ov144_02202658 {
public:
    virtual ~Unk_ov144_02202658();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    u32 unk_04[0x60 / 4];
};

class Unk_ov144_02293db8;
typedef void (Unk_ov144_02293db8::*Unk_ov144_02293db8_Fn)();

// Vtable 0x02293db8, size 0x1f04
class Unk_ov144_02293db8 : public Unk_ov002_022044e4 {
public:
    virtual ~Unk_ov144_02293db8();

    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_24();
    virtual BOOL vfunc_4c();
    virtual BOOL vfunc_50();
    virtual BOOL vfunc_54();
    virtual BOOL vfunc_58();
    virtual BOOL vfunc_5c();

    // other groups
    BOOL func_ov144_02292040(s32 a);
    void func_ov144_02292030(s32 a);
    BOOL func_ov144_02292094(s32 a);
    s32 func_ov144_022923f0(s32 a, s32 b);
    BOOL func_ov144_02292484(s32 a);
    void func_ov144_02292508(s32 a);
    void func_ov144_0229253c();
    void func_ov144_02292684();
    void func_ov144_0229282c(s32 a);
    void func_ov144_02292868();
    void func_ov144_02292894();
    void func_ov144_02292a00();
    void func_ov144_02292a64();
    void func_ov144_02292a88();
    void func_ov144_02292aa0();
    void func_ov144_02292aec();
    void func_ov144_02292b3c();
    s32 func_ov144_02292b58();
    s32 func_ov144_02292bc8();
    void func_ov144_02292c5c();
    void func_ov144_02292ce8();
    void func_ov144_02292d38();
    void func_ov144_02292d9c();
    BOOL func_ov144_02292dc4();
    void func_ov144_02292dec();
    void func_ov144_02292e78();
    void func_ov144_02292e88(s32 a, s32 b);
    BOOL func_ov144_02292f00(s32 a, s32 b);
    void func_ov144_02293144();
    void func_ov144_02293174();
    void func_ov144_02293194();
    // state-table targets (0x8d), this group
    void func_ov144_02293534();
    void func_ov144_022934cc();
    void func_ov144_02293500();
    void func_ov144_02293468();
    void func_ov144_0229341c();
    void func_ov144_022933dc();
    void func_ov144_022933b4();
    void func_ov144_02293380();
    void func_ov144_0229335c();
    void func_ov144_022932f4();
    void func_ov144_02293240();
    void func_ov144_02293214();
    void func_ov144_022931e8();
    // state-table (0x8c) targets, other groups
    void func_ov144_02293880();
    void func_ov144_02293850();
    void func_ov144_022938fc();
    void func_ov144_022938d4();
    // this group
    void func_ov144_022931d0();
    void func_ov144_022935ec();
    void func_ov144_0229363c();
    void func_ov144_022936d0();
    void func_ov144_0229371c();
    void func_ov144_0229373c();
    void func_ov144_0229377c();
    void func_ov144_02293784();
    void func_ov144_0229379c();
    void func_ov144_022937d0();
    void func_ov144_02293810();
    void func_ov144_022939d8();

    /* 0x0091 */ u8 unk_91[3];
    /* 0x0094 */ u32 unk_94;
    /* 0x0098 */ u32 unk_98;
    /* 0x009c */ s32 unk_9c;
    /* 0x00a0 */ s32 unk_a0;
    /* 0x00a4 */ s32 unk_a4;
    /* 0x00a8 */ s32 unk_a8;
    /* 0x00ac */ u32 unk_ac;
    /* 0x00b0 */ s32 unk_b0;
    /* 0x00b4 */ s16 unk_b4;
    /* 0x00b6 */ u16 unk_b6;
    /* 0x00b8 */ s16 unk_b8;
    /* 0x00ba */ s16 unk_ba;
    /* 0x00bc */ s16 unk_bc;
    /* 0x00be */ u8 unk_be;
    /* 0x00bf */ u8 unk_bf;
    /* 0x00c0 */ u8 unk_c0;
    /* 0x00c1 */ u8 unk_c1;
    /* 0x00c2 */ u8 unk_c2[2];
    /* 0x00c4 */ Unk_ov144_02202658 unk_c4;
    /* 0x0128 */ Unk_ov144_02202f88 unk_128;
    /* 0x0170 */ u32 unk_170[0x164 / 4];
    /* 0x02d4 */ u32 unk_2d4[0x240 / 4];
    /* 0x0514 */ u32 unk_514[0x24 / 4];
    /* 0x0538 */ u32 unk_538[0x24 / 4];
    /* 0x055c */ u32 unk_55c[0x108 / 4];
    /* 0x0664 */ u16 unk_664[0x8c / 2];
    /* 0x06f0 */ u16 unk_6f0[9];
    /* 0x0702 */ u8 unk_702[0x1000];
    /* 0x1702 */ u8 unk_1702[0x802];
};

static inline BOOL Unk_ov144_022934cc_Both() {
    if (data_021f4770 != 0 && data_021f4774 != 0) return TRUE;
    return FALSE;
}

#define C Unk_ov144_02293db8

void C::func_ov144_022931d0() {
    func_ov144_02292b3c();
    func_ov002_02200a58(0);
}

void C::func_ov144_022931e8() {
    if (func_ov002_02204234(&unk_55c, 1)) {
        func_ov144_02293174();
        func_0208d644(&unk_c4);
    }
}

void C::func_ov144_02293214() {
    if (unk_c0 != 0) {
        unk_c0 = *(volatile u8 *)&unk_c0 - 1;
    } else {
        func_ov144_02292b3c();
        func_ov002_02200a60(1);
    }
}

void C::func_ov144_02293240() {
    if (unk_c0 != 0) {
        unk_c0 = *(volatile u8 *)&unk_c0 - 1;
    } else {
        func_02060044(unk_664[unk_ba]);
        s32 p = *(volatile s16 *)&unk_ba;
        s32 q = *(volatile s16 *)&unk_bc;
        if (p < q) {
            unk_bc = q - 1;
        }
        func_ov144_02292508(-1);
        func_ov144_02292ce8();
        unk_a4 = (unk_b8 - 8) << 4;
        if (unk_a4 < 0) {
            unk_a4 = 0;
        }
        s32 t = unk_a4;
        if (unk_9c > t) {
            unk_9c = t;
        }
        func_ov144_0229282c(unk_9c);
        unk_a0 = unk_9c;
        func_ov144_02292d38();
        func_ov144_02293174();
    }
}

void C::func_ov144_022932f4() {
    if (func_ov002_0220308c(&unk_170)) {
        if (func_0208d534(&unk_c4)) {
            s32 a = func_ov002_0220306c(&unk_170);
            s32 b = func_ov002_022030f4(&unk_170, -1);
            s32 c = func_ov002_022030b8(&unk_170, -1);
            func_ov002_02202a40(&unk_c4, a + b, a + c);
        }
    } else {
        func_ov144_02292b3c();
        func_ov002_02200a60(1);
    }
}

void C::func_ov144_0229335c() {
    if (func_0208d4fc(&unk_c4)) {
        func_ov144_02292aa0();
        func_ov002_02200a58(unk_be);
    }
}

void C::func_ov144_02293380() {
    if (func_0208d4fc(&unk_c4)) {
        if (!func_ov144_02292484(unk_c1)) {
            func_ov002_02200a58(3);
            func_ov144_02292a64();
        }
    }
}

void C::func_ov144_022933b4() {
    if (!func_ov002_022028f0(&unk_c4)) {
        func_ov002_02200a58(unk_be);
        func_ov144_022939d8();
    }
}

void C::func_ov144_022933dc() {
    if (func_ov144_02292dc4()) {
        func_ov002_02200a58(3);
        func_ov144_02292a64();
    }
    s32 a = func_ov144_02292bc8();
    s32 b = func_ov144_02292b58();
    func_ov002_02202a40(&unk_c4, a, b);
}

void C::func_ov144_0229341c() {
    if (data_021f47d8[0] & 1) {
        func_ov144_02292dec();
        s32 a = func_ov144_02292bc8();
        s32 b = func_ov144_02292b58();
        func_ov002_02202a40(&unk_c4, a, b);
    } else {
        func_ov144_02292e78();
        func_ov002_02200a58(5);
    }
}

void C::func_ov144_02293468() {
    if (func_ov002_022009d4()) {
        func_ov144_022931d0();
    } else if (func_ov144_02292094(func_ov002_022009c8())) {
        func_ov144_02292aec();
    } else {
        u32 t = data_021f47d8[1];
        if (t & 1) {
            func_ov144_02292a88();
        } else if (t & 2) {
            func_ov144_02292b3c();
            func_ov144_02293144();
        }
    }
}

void C::func_ov144_022934cc() {
    if (data_021f4770 != 0) {
        func_ov144_02292e88(data_021ef5ec, 1);
    } else {
        func_ov144_02292e78();
        func_ov002_02200a58(0);
    }
}

void C::func_ov144_02293500() {
    if (data_021f4770 != 0) {
        func_ov144_02292e88(data_021ef5ec, 0);
    } else {
        func_ov144_02292e78();
        func_ov002_02200a58(0);
    }
}

void C::func_ov144_02293534() {
    if (func_ov002_02200a14(1)) {
        func_ov144_02293194();
        return;
    }
    if (Unk_ov144_022934cc_Both()) {
        s32 x = data_021ef5f0;
        s32 y = data_021ef5ec;
        s32 r = func_ov144_022923f0(x, y);
        if (r != 0xe) {
            func_ov144_02292484(r);
            return;
        }
        if (unk_a4 > 0) {
            if (func_ov144_02292f00(x, y)) {
                func_ov002_02200a58(1);
            } else if (x >= 0xcf && x <= 0xdf && y >= 0x1d && y <= 0x93) {
                func_ov002_02202f00(&unk_128);
                unk_b0 = unk_a8;
                func_ov002_02200a58(2);
            }
        }
    }
}

void C::func_ov144_022935ec() {
    func_ov002_02203920(&unk_170);
    u32 h = data_021f482c;
    func_0200261c(data_ov144_02293e18, h, 8, 0xc0, 0xc0, 0x120);
    func_020026c4(data_ov144_02293e2c, h, 8, 4, 4, 5);
}

void C::func_ov144_0229363c() {
    u32 h = data_021f482c;
    func_0200261c(data_ov144_02293e40, h, 6, 0x11, 0x11, 0x98);
    func_0200261c(data_ov144_02293e54, h, 6, 0x26e, 0x26e, 0x27e);
    func_020026c4(data_ov144_02293e68, h, 6, 1, 1, 0xa);
    func_020641b4(data_ov144_02293e7c, unk_702, 0x800);
    func_020641b4(data_ov144_02293e90, unk_1702, 0x800);
    func_ov144_0229253c();
}

void C::func_ov144_022936d0() {
    func_020015b8(0);
    func_02002398(6, 1);
    func_0200226c(6, 0, 0, 0);
    func_02002398(4, 2);
    func_0200226c(4, 0, 0, 0);
    func_02002398(3, 2);
    func_0200226c(3, 0, 0, 0);
}

void C::func_ov144_0229371c() {
    func_ov144_02292684();
    func_ov144_02292894();
    func_ov002_02202ed0(&unk_128);
}

void C::func_ov144_0229373c() {
    func_ov144_02292a00();
    func_ov002_02203900(&unk_170);
    func_020b87d0(&unk_514);
    func_020b87d0(&unk_538);
    unk_128.vfunc_0c();
}

void C::func_ov144_0229377c() {
    func_ov144_0229371c();
}

void C::func_ov144_02293784() {
    func_ov144_0229373c();
    unk_c4.vfunc_0c();
}

void C::func_ov144_0229379c() {
    func_ov144_02292a00();
    func_ov002_02203900(&unk_170);
    func_020b87d0(&unk_514);
    func_020b87d0(&unk_538);
}

void C::func_ov144_022937d0() {
    s32 i = 0;
    unk_b4 = i;
    for (; i < 9; i++) {
        unk_6f0[i] = 0xfff1;
    }
    func_ov144_02292ce8();
    func_ov144_02292c5c();
    func_ov002_02202f0c(&unk_128);
}

void C::func_ov144_02293810() {
    func_ov002_02200840(6, 0, 0);
    func_ov002_02200840(4, 0, 0x18 - unk_9c);
    unk_94 = func_ov002_02200920();
    func_ov144_02292d9c();
}

void C::func_ov144_02293850() {
    if (func_ov002_022008fc(0)) {
        func_020021a0(6);
        func_020021a0(4);
        func_ov002_02200a60(5);
    } else {
        func_ov144_02293810();
    }
}

void C::func_ov144_02293880() {
    s32 t = func_020ed174();
    if (func_ov144_02292040(0x20)) {
        func_ov092_02291ce4(t, 0x23, 1);
    } else {
        func_ov092_02291ce4(t, 0x44, 1);
    }
    func_ov002_022008c4(0xa, 0, 0, 0x18);
    func_ov144_02293810();
    func_ov002_02200a50(3);
}

void C::func_ov144_022938d4() {
    if (func_ov002_02200908(0)) {
        func_ov002_02200a60(2);
        func_ov144_02293174();
    }
    func_ov144_02293810();
}

void C::func_ov144_022938fc() {
    func_ov144_022936d0();
    func_ov144_0229363c();
    func_ov144_02292868();
    func_ov144_022935ec();
    func_ov002_022008e0(0xa, 4, 0, 0x18);
    func_020020b8(6);
    func_020020b8(4);
    func_ov144_02293810();
    func_ov144_02292030(1);
    func_ov002_02203510(&unk_170, 0x65);
    func_ov002_02200a50(1);
}

BOOL C::vfunc_5c() {
    func_020ed188(this);
    return TRUE;
}

BOOL C::vfunc_58() { return TRUE; }

BOOL C::vfunc_54() { return TRUE; }

BOOL C::vfunc_50() {
    func_0206e63c();
    if (func_0206e61c()) {
        switch (unk_8d) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
            func_ov144_02292b3c();
            func_ov144_02293144();
            func_ov002_02200a60(1);
        }
    }
    func_ov144_02293784();
    func_ov144_022939d8();
    func_ov144_0229377c();
    return TRUE;
}

void C::func_ov144_022939d8() {
    static Unk_ov144_02293db8_Fn tbl[13] = {
        &C::func_ov144_02293534,
        &C::func_ov144_02293500,
        &C::func_ov144_022934cc,
        &C::func_ov144_02293468,
        &C::func_ov144_0229341c,
        &C::func_ov144_022933dc,
        &C::func_ov144_022933b4,
        &C::func_ov144_02293380,
        &C::func_ov144_0229335c,
        &C::func_ov144_022932f4,
        &C::func_ov144_02293240,
        &C::func_ov144_02293214,
        &C::func_ov144_022931e8};
    (this->*tbl[unk_8d])();
}

#undef C
