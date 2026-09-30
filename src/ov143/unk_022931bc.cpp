#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef vfunc_08
#undef vfunc_14

struct Unk_ov143_0229334c_E {
    u32 w0;
    u32 w1;
    u32 w2;
    u32 w3;
    u32 w4;
    struct {
        u16 lo : 10;
        u16 hi : 6;
    } w5;
};

extern "C" {
extern void *data_021f482c;
extern u8 data_021cb410[];
extern u8 data_021ed2f8[];
extern u8 data_ov143_02293be0[];
extern u8 data_ov143_02293bf4[];
extern u8 data_ov143_02293c0c[];
extern u8 data_ov143_02293c20[];
extern u8 data_ov143_02293c34[];
extern u8 data_ov143_02293c48[];
extern u8 data_ov143_02293c60[];
extern Unk_ov143_0229334c_E data_ov143_02293a00;
extern Unk_ov143_0229334c_E data_ov143_022939e8;
extern u8 data_ov143_02293980[];

void func_020015b8(s32 a);
void func_020020b8(s32 a);
void func_020021a0(s32 a);
void func_0200226c(s32 a, s32 b, s32 c, s32 d);
void func_02002398(s32 a, s32 b);
void func_020024f0(void *a, s32 b, s32 c, s32 d);
void func_0200261c(void *name, void *h, s32 a, s32 b, s32 c, s32 d);
void func_02002654(void *name, void *h, s32 a);
void func_020026c4(void *name, void *h, s32 a, s32 b, s32 c, s32 d);
void func_020641b4(void *a, void *b, u32 c);
void func_0206db0c(void *a, void *b);
BOOL func_0206ef00();
void func_02087e70(u32 a, void *h, s32 x, s32 y, s32 s0, s32 s1, s32 s2, s32 s3, s32 s4, s32 s5, s32 s6, s32 s7);
s32 func_020ed174();
void func_020ed188(void *p);
void func_ov092_02291c5c();
void func_ov092_02291ce4(s32 a, s32 b, s32 c);
}

// helper class at +0xe74 (ctor func_020b8800, size 0x24)
class Unk_ov143_sub_020b8800 {
public:
    Unk_ov143_sub_020b8800();
    void func_020b87d0();
    u32 unk_00[0x24 / 4];
};

// 0x40-byte element (Unk_020e0488) with out-of-line ctor func_0206fcc8 / dtor func_0206fca8
class Unk_ov143_sub_020e0488 {
public:
    Unk_ov143_sub_020e0488();
    ~Unk_ov143_sub_020e0488();
    void func_0206fc44();
    void func_0206f9fc(u32 id);
    void func_0206fb9c(u32 id, u32 a, u32 b, u32 x, u32 y, u32 flag);
    void func_0206fab4(s32 a, s32 b);
    u32 unk_00[0x40 / 4];
};

// sub-object at +0x110 (ctor func_ov002_02203994, dtor func_ov002_02203968), 0x164 bytes
class Unk_ov143_sub_02203968 {
public:
    Unk_ov143_sub_02203968();
    ~Unk_ov143_sub_02203968();
    void func_ov002_0220301c();
    void func_ov002_02203044();
    void func_ov002_02203274(u32 a);
    void func_ov002_02203590();
    void func_ov002_022036a4(s32 a);
    void func_ov002_02203900();
    void func_ov002_02203920();
    u32 unk_00[0x164 / 4];
};

// sub-object at +0xac (ctor func_ov002_02202658, virtual dtor func_ov002_02202640), 0x64 bytes
class Unk_ov143_sub_02202640 {
public:
    Unk_ov143_sub_02202640();
    virtual ~Unk_ov143_sub_02202640();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    void func_ov002_02202844();
    u32 unk_04[0x60 / 4];
};

// Vtable 0x022044e4 (declaration copied from ov143_000; sub-objects opaque)
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
    void func_ov002_0220085c(u32 a, u32 b);
    void func_ov002_02200840(s32 a, s32 b, s32 c);
    void func_ov002_02200874(s32 a, s32 b);
    void func_ov002_022008c4(s32 a, s32 b, s32 mode, s32 dist);
    void func_ov002_022008e0(s32 a, s32 b, s32 c, s32 d);
    BOOL func_ov002_022008fc(s32 a);
    BOOL func_ov002_02200908(s32 a);
    s32 func_ov002_02200920();

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

// Vtable 0x02293b80 (melody / tune editor menu)
class Unk_ov143_02293b80;
typedef void (Unk_ov143_02293b80::*Unk_ov143_02293b80_Fn)();

class Unk_ov143_02293b80 : public Unk_ov002_022044e4 {
public:
    Unk_ov143_02293b80() : unk_ac(), unk_110(), unk_274(), unk_e74() {}
    virtual ~Unk_ov143_02293b80();

    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_24();
    virtual BOOL vfunc_4c();
    virtual BOOL vfunc_50();
    virtual BOOL vfunc_54();
    virtual BOOL vfunc_58();
    virtual BOOL vfunc_5c();

    // ov143_000 range (declarations only)
    void func_ov143_02291ff0(u32 mask);
    void func_ov143_02292000(u32 mask);
    BOOL func_ov143_02292010(u32 mask);
    void func_ov143_02292040();
    void func_ov143_022920ac();
    void func_ov143_022921c0(s32 x, s32 y);
    void func_ov143_022923f8();
    void func_ov143_02292590();

    // ov143_001 range (declarations only)
    BOOL func_ov143_02292b2c();
    void func_ov143_02292c44();
    void func_ov143_02292ca0();
    void func_ov143_02292cf4();
    void func_ov143_02292d34();
    void func_ov143_02292df8();
    void func_ov143_02292ea0();
    void func_ov143_02292f0c();
    void func_ov143_02292f30();
    void func_ov143_02292f64();
    void func_ov143_02292f8c();
    void func_ov143_0229303c();
    void func_ov143_022930b8();
    void func_ov143_0229312c();

    // this range
    void func_ov143_022931bc();
    void func_ov143_02293228();
    void func_ov143_0229329c();
    void func_ov143_022932d4();
    void func_ov143_022932dc();
    void func_ov143_02293304();
    void func_ov143_0229330c();
    void func_ov143_02293324();
    void func_ov143_0229334c();
    void func_ov143_022933b4();
    void func_ov143_022933d8();
    void func_ov143_0229340c();
    void func_ov143_02293430();
    void func_ov143_0229346c();
    void func_ov143_02293498();
    void func_ov143_022934c8();
    void func_ov143_02293500();
    void func_ov143_02293528();
    void func_ov143_022935d0();

    /* 0x91 */ u8 unk_91[3];
    /* 0x94 */ s32 unk_94;
    /* 0x98 */ u16 unk_98;
    /* 0x9a */ s16 unk_9a;
    /* 0x9c */ u8 unk_9c[3];
    /* 0x9f */ u8 unk_9f;
    /* 0xa0 */ u8 *unk_a0;
    /* 0xa4 */ u8 unk_a4;
    /* 0xa5 */ u8 unk_a5;
    /* 0xa6 */ u8 unk_a6[2];
    /* 0xa8 */ u32 unk_a8;
    /* 0xac */ Unk_ov143_sub_02202640 unk_ac;
    /* 0x110 */ Unk_ov143_sub_02203968 unk_110;
    /* 0x274 */ Unk_ov143_sub_020e0488 unk_274[16];
    /* 0x674 */ u8 unk_674[0x800];
    /* 0xe74 */ Unk_ov143_sub_020b8800 unk_e74[1];
};

// ---------------------------------------------------------------------------------------------

void Unk_ov143_02293b80::func_ov143_022931bc() {
    unk_110.func_ov002_02203920();
    void *h = data_021f482c;
    func_0200261c(data_ov143_02293be0, h, 8, 0xc0, 0xc0, 0xff);
    func_0200261c(data_ov143_02293bf4, h, 8, 0x140, 0x140, 0x1bf);
    func_020026c4(data_ov143_02293c0c, h, 8, 4, 4, 0xd);
}

void Unk_ov143_02293b80::func_ov143_02293228() {
    void *h = data_021f482c;
    func_0200261c(data_ov143_02293c20, h, 6, 0x11, 0x11, 0x9c);
    func_020026c4(data_ov143_02293c34, h, 6, 1, 1, 6);
    func_02002654(data_ov143_02293c48, h, 6);
    func_020641b4(data_ov143_02293c60, unk_674, 0x800);
    func_020024f0(unk_674, 4, 0x800, 0);
}

void Unk_ov143_02293b80::func_ov143_0229329c() {
    func_020015b8(0);
    func_02002398(6, 2);
    func_0200226c(6, 0, 0, 0);
    func_02002398(4, 2);
    func_0200226c(4, 0, 0, 0);
}

void Unk_ov143_02293b80::func_ov143_02293304() { func_ov143_022932d4(); }

void Unk_ov143_02293b80::func_ov143_022932d4() { func_ov143_02292590(); }

void Unk_ov143_02293b80::func_ov143_022932dc() {
    unk_e74[0].func_020b87d0();
    func_ov143_022923f8();
    unk_110.func_ov002_02203900();
}

void Unk_ov143_02293b80::func_ov143_0229330c() {
    func_ov143_022932dc();
    unk_ac.vfunc_0c();
}

void Unk_ov143_02293b80::func_ov143_02293324() {
    unk_e74[0].func_020b87d0();
    func_ov143_022923f8();
    unk_110.func_ov002_02203900();
}

void Unk_ov143_02293b80::func_ov143_0229334c() {
    unk_98 = 0;
    unk_a0 = data_021cb410;
    func_0206db0c(data_021ed2f8, unk_a0);
    data_ov143_02293a00.w5.lo = data_ov143_022939e8.w5.lo + 4;
    unk_9a = -1;
    unk_a4 = 0;
}

void Unk_ov143_02293b80::func_ov143_022933b4() {
    if (func_ov002_02200908(-1)) {
        func_ov143_02292ca0();
        func_ov002_02200a60(2);
    }
}

void Unk_ov143_02293b80::func_ov143_022933d8() {
    if (func_ov002_022008fc(-1)) {
        func_ov002_02200a50(7);
        func_ov002_02200874(0, 0);
        unk_110.func_ov002_02203590();
    }
}

void Unk_ov143_02293b80::func_ov143_0229340c() {
    if (func_ov002_02200908(-1)) {
        func_ov143_02292c44();
        func_ov002_02200a60(2);
    }
}

void Unk_ov143_02293b80::func_ov143_02293430() {
    if (func_ov002_022008fc(-1)) {
        func_ov002_02200a50(5);
        func_ov002_02200874(0, 0);
        unk_110.func_ov002_02203274(0x8d);
        func_ov143_02292040();
    }
}

void Unk_ov143_02293b80::func_ov143_0229346c() {
    func_ov002_02200840(6, 0, 0);
    func_ov002_02200840(4, 0, 0);
    unk_94 = func_ov002_02200920();
}

void Unk_ov143_02293b80::func_ov143_02293498() {
    if (func_ov002_022008fc(0)) {
        func_020021a0(6);
        func_020021a0(4);
        func_ov002_02200a60(5);
    } else {
        func_ov143_0229346c();
    }
}

void Unk_ov143_02293b80::func_ov143_022934c8() {
    func_ov092_02291ce4(func_020ed174(), 0x44, 1);
    func_ov002_022008c4(10, 0, 0, 0x18);
    func_ov143_0229346c();
    func_ov002_02200a50(3);
}

void Unk_ov143_02293b80::func_ov143_02293500() {
    if (func_ov002_02200908(0)) {
        func_ov002_02200a60(2);
        func_ov143_02292ca0();
    }
    func_ov143_0229346c();
}

void Unk_ov143_02293b80::func_ov143_02293528() {
    func_ov143_0229329c();
    func_ov143_02293228();
    func_ov143_022931bc();
    func_ov143_022920ac();
    func_ov002_022008e0(10, 4, 0, 0x18);
    func_020020b8(6);
    func_020020b8(4);
    func_ov143_0229346c();
    func_ov143_02292000(1);
    unk_110.func_ov002_02203590();
    func_ov002_02200a50(1);
}

BOOL Unk_ov143_02293b80::vfunc_5c() {
    if (func_ov143_02292b2c() == 0) return TRUE;
    func_020ed188(this);
    return TRUE;
}

BOOL Unk_ov143_02293b80::vfunc_58() { return TRUE; }

BOOL Unk_ov143_02293b80::vfunc_54() { return TRUE; }

BOOL Unk_ov143_02293b80::vfunc_50() {
    func_ov143_0229330c();
    func_ov143_022935d0();
    func_ov143_02293304();
    return TRUE;
}

void Unk_ov143_02293b80::func_ov143_022935d0() {
    static Unk_ov143_02293b80_Fn tbl[11] = {
        &Unk_ov143_02293b80::func_ov143_0229312c, &Unk_ov143_02293b80::func_ov143_022930b8,
        &Unk_ov143_02293b80::func_ov143_0229303c, &Unk_ov143_02293b80::func_ov143_02292f8c,
        &Unk_ov143_02293b80::func_ov143_02292f64, &Unk_ov143_02293b80::func_ov143_02292f30,
        &Unk_ov143_02293b80::func_ov143_02292f0c, &Unk_ov143_02293b80::func_ov143_02292ea0,
        &Unk_ov143_02293b80::func_ov143_02292df8, &Unk_ov143_02293b80::func_ov143_02292d34,
        &Unk_ov143_02293b80::func_ov143_02292cf4};
    (this->*tbl[unk_8d])();
}

BOOL Unk_ov143_02293b80::vfunc_4c() {
    static Unk_ov143_02293b80_Fn tbl[8] = {
        &Unk_ov143_02293b80::func_ov143_02293528, &Unk_ov143_02293b80::func_ov143_02293500,
        &Unk_ov143_02293b80::func_ov143_022934c8, &Unk_ov143_02293b80::func_ov143_02293498,
        &Unk_ov143_02293b80::func_ov143_02293430, &Unk_ov143_02293b80::func_ov143_0229340c,
        &Unk_ov143_02293b80::func_ov143_022933d8, &Unk_ov143_02293b80::func_ov143_022933b4};
    func_ov143_022932dc();
    (this->*tbl[unk_8c])();
    func_ov143_022932d4();
    return TRUE;
}

BOOL Unk_ov143_02293b80::vfunc_24() {
    if (func_0206ef00()) {
        unk_ac.func_ov002_02202844();
    }
    if (!func_ov143_02292010(1)) return FALSE;
    unk_110.func_ov002_022036a4(func_ov002_02200920());
    s32 y = unk_94 + 0x60;
    func_02087e70(1, data_ov143_02293980, 0x80, y, -1, 2, 0x1000, 0x1000, 0, -1, 0, 0);
    func_ov143_022921c0(0x80, y);
    return TRUE;
}

BOOL Unk_ov143_02293b80::vfunc_0c() {
    func_020ed174();
    func_ov092_02291c5c();
    func_ov143_02293324();
    return TRUE;
}

BOOL Unk_ov143_02293b80::vfunc_00() {
    func_ov143_0229334c();
    unk_8c = 0;
    func_ov002_02200a60(0);
    return TRUE;
}

extern "C" Unk_ov143_02293b80 *func_ov143_02293844() { return new Unk_ov143_02293b80(); }
