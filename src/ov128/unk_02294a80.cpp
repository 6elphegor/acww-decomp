#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef vfunc_08
#undef vfunc_14

extern "C" {
extern u8 data_021f4770;
extern u8 data_021f4774;
extern u8 data_021ef5f8;
extern u8 data_021ef5f4;
extern u8 data_021ef5f0;
extern u8 data_021ef5ec;
extern void *data_021f482c;
extern u8 *data_021c1b3c;
extern u8 data_ov128_02295458[];
extern u8 data_ov128_02295640[];

// ov127 plain-C helpers on the sub-object at +0x478
BOOL func_ov127_02292538(void *s);
void func_ov127_0229257c(void *s, s32 d);
void func_ov127_022925c8(void *s, s32 d, s32 e);
s32 func_ov127_022926e0(void *s, s32 x, s32 y);
void func_ov127_022927a8(void *s, s32 a, s32 b);
void func_ov127_0229281c(void *p);
void func_ov127_02292824(void *s);
void func_ov127_02292950(void *s);
void func_ov127_02292994(void *s, u32 v, u32 w);
void func_ov127_02292a0c(void *s, u32 v);
void func_ov127_02292a7c(void *s);

void func_020b0780(void *p);
void func_020b0788(void *p, s32 a);
void func_020b080c(void *p);
void func_0206fc44(void *p);
void func_ov004_02224844();
void func_02094960();
void func_02034f80(void *p);
void func_02034f98(void *p);
void func_0200261c(void *a, void *b, s32 c, s32 d, s32 e, s32 f);
void func_020015b8(s32 a);
void func_02002398(s32 a, s32 b);
void func_0200226c(u32 a, u32 b, u32 c, u32 d);
void func_0200151c(s32 a);
void func_0200152c(s32 a);
void func_020021b8(s32 a, s32 b, s32 c, s32 d, s32 e);
void func_020021a0(s32 a);
void func_020020b8(s32 a);
void func_02001710(s32 a, s32 b);
void *func_020ed174();
void func_020ed188(void *p);
void func_ov092_02291ce4(void *a, s32 b, s32 c);
void func_ov092_02291c5c();
BOOL func_0206ef00();
void func_ov128_02294c38();
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
    void func_ov002_022008c4(s32 a, s32 b, s32 mode, s32 dist);
    void func_ov002_022008e0(s32 a, s32 b, s32 mode, s32 dist);
    BOOL func_ov002_022008fc(s32 a);
    BOOL func_ov002_02200908(s32 a);
    s32 func_ov002_02200920();
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

// sub-object at +0x94 (ov002 class, ctor func_ov002_02203d50)
class Unk_ov128_02203d50 {
public:
    Unk_ov128_02203d50();
    void func_ov002_02203b30(s32 a, s32 b, s32 c);
    void func_ov002_02203c1c();
    void func_ov002_02203cc4(s32 a);
    void func_ov002_02203cf8(void *p, s32 a, s32 b);
    u32 unk_00[0x50 / 4];
};

// sub-object at +0xe4 (polymorphic, ctor func_ov002_02202658)
class Unk_ov128_02202658 {
public:
    Unk_ov128_02202658();
    virtual ~Unk_ov128_02202658();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    u32 unk_04[0x60 / 4];
};

// sub-object at +0x148 (ctor func_020b08b8)
class Unk_ov128_020b08b8 {
public:
    Unk_ov128_020b08b8();
    u32 unk_00[0x330 / 4];
};

// sub-object at +0x478 (ov127 state, ctor func_ov127_02292aac)
class Unk_ov128_ov127_02292aac {
public:
    Unk_ov128_ov127_02292aac();
    u32 unk_00[0x2838 / 4];
};

// sub-object at +0x2cb0 (ctor func_0206fcc8)
class Unk_ov128_0206fcc8 {
public:
    Unk_ov128_0206fcc8();
    u32 unk_00[0x40 / 4];
};

class Unk_ov128_022954e0;
typedef void (Unk_ov128_022954e0::*Unk_ov128_022954e0_Fn)();

static inline BOOL Unk_ov128_02294b44_Both() {
    if (data_021f4770 != 0 && data_021f4774 != 0) {
        return TRUE;
    }
    return FALSE;
}

// Vtable 0x022954e0, size 0x2d1c
class Unk_ov128_022954e0 : public Unk_ov002_022044e4 {
public:
    Unk_ov128_022954e0()
        : unk_94(), unk_e4(), unk_148(), unk_478(), unk_2cb0() {}
    virtual ~Unk_ov128_022954e0();

    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_24();
    virtual BOOL vfunc_4c();
    virtual BOOL vfunc_50();
    virtual BOOL vfunc_54();
    virtual BOOL vfunc_58();
    virtual BOOL vfunc_5c();

    // other groups (ov128_000)
    void func_ov128_02294194(u8 v);
    BOOL func_ov128_022941a4(s32 v);
    void func_ov128_022941bc();
    void func_ov128_02294244();
    void func_ov128_02294368();
    void func_ov128_02294420();
    void func_ov128_02294498();
    void func_ov128_022944d8(s32 v);
    void func_ov128_02294728();
    void func_ov128_02294754();
    void func_ov128_02294774();
    // state-table targets, 0x8d table (last entries in ov128_000)
    void func_ov128_022947b0();
    void func_ov128_022947cc();
    void func_ov128_022947f4();
    void func_ov128_02294824();
    void func_ov128_0229484c();
    void func_ov128_02294874();
    void func_ov128_022948c0();
    void func_ov128_02294930();

    // in range
    void func_ov128_02294a80();
    void func_ov128_02294af8();
    void func_ov128_02294b44();
    void func_ov128_02294bdc();
    void func_ov128_02294c70();
    void func_ov128_02294c8c();
    void func_ov128_02294cb8();
    void func_ov128_02294ccc();
    void func_ov128_02294cd4();
    void func_ov128_02294d44();
    void func_ov128_02294da0();
    void func_ov128_02294de8();
    void func_ov128_02294e0c();
    void func_ov128_02294e48();
    void func_ov128_02294e90();
    void func_ov128_02294ec8();
    void func_ov128_02294f54();

    /* 0x0091 */ u8 unk_91[3];
    /* 0x0094 */ Unk_ov128_02203d50 unk_94;
    /* 0x00e4 */ Unk_ov128_02202658 unk_e4;
    /* 0x0148 */ Unk_ov128_020b08b8 unk_148;
    /* 0x0478 */ Unk_ov128_ov127_02292aac unk_478;
    /* 0x2cb0 */ Unk_ov128_0206fcc8 unk_2cb0;
    /* 0x2cf0 */ s32 unk_2cf0;
    /* 0x2cf4 */ s32 unk_2cf4;
    /* 0x2cf8 */ s32 unk_2cf8;
    /* 0x2cfc */ u32 unk_2cfc[4];
    /* 0x2d0c */ u32 unk_2d0c;
    /* 0x2d10 */ u16 unk_2d10;
    /* 0x2d12 */ u8 unk_2d12;
    /* 0x2d13 */ u8 unk_2d13;
    /* 0x2d14 */ u8 unk_2d14;
    /* 0x2d15 */ u8 unk_2d15[7];
};

void Unk_ov128_022954e0::func_ov128_02294a80() {
    if (func_ov127_02292538(&unk_478)) {
        if (data_021f4770 != 0) {
            unk_2d13 = func_ov127_022926e0(&unk_478, data_021ef5f8, data_021ef5f4);
            if (unk_2d13 != 4) {
                func_ov127_022925c8(&unk_478, unk_2d13, 1);
                func_ov128_02294498();
                func_ov002_02200a58(1);
                return;
            }
        }
        func_ov002_02200a58(0);
    }
    func_ov128_02294498();
}

void Unk_ov128_022954e0::func_ov128_02294af8() {
    if (data_021f4770 == 0) {
        func_ov002_02200a58(2);
        func_ov127_0229257c(&unk_478, unk_2d13);
        func_ov128_02294498();
    } else {
        func_ov127_022925c8(&unk_478, unk_2d13, 1);
        func_ov128_02294498();
    }
}

void Unk_ov128_022954e0::func_ov128_02294b44() {
    if (func_ov002_02200a14(0)) {
        func_ov128_02294774();
    } else if (Unk_ov128_02294b44_Both()) {
        s32 x = data_021ef5f0;
        s32 y = data_021ef5ec;
        unk_2d13 = func_ov127_022926e0(&unk_478, x, y);
        if (unk_2d13 != 4) {
            func_ov127_022925c8(&unk_478, unk_2d13, 1);
            func_ov128_02294498();
            func_ov002_02200a58(1);
        } else if (x >= 0xc0 && y > 0xab) {
            func_ov128_02294728();
        }
    }
}

void Unk_ov128_022954e0::func_ov128_02294bdc() {
    func_ov127_02292a0c(&unk_478, 3);
    func_ov127_02292994(&unk_478, 6, 0);
    func_020b0788(&unk_148, 3);
    func_ov127_02292950(&unk_478);
    unk_94.func_ov002_02203cf8(data_ov128_02295458, 6, 2);
    unk_94.func_ov002_02203cc4(0x69);
    func_ov128_02294498();
}

extern "C" void func_ov128_02294c38() {
    func_020015b8(0);
    func_02002398(3, 2);
    func_0200226c(3, 1, 0, 0);
    func_02002398(6, 1);
    func_0200226c(6, 0, 0, 0);
}

void Unk_ov128_022954e0::func_ov128_02294cb8() {
    func_ov128_02294244();
    func_ov128_02294c70();
}

void Unk_ov128_022954e0::func_ov128_02294c70() {
    func_ov127_02292824(&unk_478);
    func_ov128_022941bc();
}

BOOL Unk_ov128_022954e0::vfunc_50() {
    func_ov128_02294ccc();
    func_ov128_02294f54();
    func_ov128_02294cb8();
    return TRUE;
}

void Unk_ov128_022954e0::func_ov128_02294ccc() { func_ov128_02294c8c(); }

void Unk_ov128_022954e0::func_ov128_02294c8c() {
    func_0206fc44(&unk_2cb0);
    func_020b080c(&unk_148);
    unk_94.func_ov002_02203c1c();
}

void Unk_ov128_022954e0::func_ov128_02294cd4() {
    func_020b0780(&unk_148);
    func_ov127_0229281c(&unk_478);
    unk_94.func_ov002_02203c1c();
    func_0206fc44(&unk_2cb0);
    func_02094960();
    func_02034f80(data_021c1b3c + 0x2f0);
    func_0200261c(data_ov128_02295640, data_021f482c, 3, 0, 0x10, 0x10);
}

void Unk_ov128_022954e0::func_ov128_02294d44() {
    unk_2d10 = 0;
    func_ov127_02292a7c(&unk_478);
    unk_2cf0 = 0x80;
    unk_2cf4 = 0x60;
    unk_2d14 = 1;
    func_ov128_02294420();
    func_ov004_02224844();
    func_02034f98(data_021c1b3c + 0x2f0);
}

void Unk_ov128_022954e0::func_ov128_02294da0() {
    s32 a = func_ov002_02200920() - 0x40;
    if (a < 0) {
        a = 0;
    }
    s32 b = func_ov002_02200920() - 0x30;
    if (b <= 0) {
        func_0200151c(2);
    } else {
        func_0200152c(2);
        func_020021b8(3, 0, a, 0xff, b);
    }
}

void Unk_ov128_022954e0::func_ov128_02294de8() {
    func_ov002_02200840(6, 0, 0);
    unk_2cf8 = func_ov002_02200920();
}

void Unk_ov128_022954e0::func_ov128_02294e0c() {
    if (func_ov002_022008fc(0)) {
        func_020021a0(3);
        func_020021a0(6);
        func_0200151c(2);
        func_ov002_02200a60(5);
    } else {
        func_ov128_02294da0();
        func_ov128_02294de8();
    }
}

void Unk_ov128_022954e0::func_ov128_02294e48() {
    func_ov092_02291ce4(func_020ed174(), 0x44, 1);
    func_ov002_022008c4(9, 0, 0, 0x30);
    func_02001710(0x1e, 1);
    func_ov128_02294da0();
    func_ov128_02294de8();
    func_ov002_02200a50(3);
}

void Unk_ov128_022954e0::func_ov128_02294e90() {
    if (func_ov002_02200908(0)) {
        func_ov002_02200a60(2);
        func_ov128_02294754();
        func_ov128_02294194(4);
    } else {
        func_ov128_02294da0();
    }
    func_ov128_02294de8();
}

void Unk_ov128_022954e0::func_ov128_02294ec8() {
    ::func_ov128_02294c38();
    func_ov128_02294bdc();
    func_ov002_022008e0(9, 4, 0, 0x30);
    func_020020b8(3);
    func_020020b8(6);
    func_ov128_02294194(1);
    func_02001710(0x1e, 1);
    func_ov128_02294da0();
    func_ov128_02294de8();
    func_ov002_02200a50(1);
}

BOOL Unk_ov128_022954e0::vfunc_5c() {
    func_020ed188(this);
    return TRUE;
}

BOOL Unk_ov128_022954e0::vfunc_58() { return TRUE; }

BOOL Unk_ov128_022954e0::vfunc_54() { return TRUE; }

void Unk_ov128_022954e0::func_ov128_02294f54() {
    static Unk_ov128_022954e0_Fn tbl[11] = {
        &Unk_ov128_022954e0::func_ov128_02294b44,
        &Unk_ov128_022954e0::func_ov128_02294af8,
        &Unk_ov128_022954e0::func_ov128_02294a80,
        &Unk_ov128_022954e0::func_ov128_02294930,
        &Unk_ov128_022954e0::func_ov128_022948c0,
        &Unk_ov128_022954e0::func_ov128_02294874,
        &Unk_ov128_022954e0::func_ov128_0229484c,
        &Unk_ov128_022954e0::func_ov128_02294824,
        &Unk_ov128_022954e0::func_ov128_022947f4,
        &Unk_ov128_022954e0::func_ov128_022947cc,
        &Unk_ov128_022954e0::func_ov128_022947b0};
    (this->*tbl[unk_8d])();
}

BOOL Unk_ov128_022954e0::vfunc_4c() {
    static Unk_ov128_022954e0_Fn tbl[4] = {
        &Unk_ov128_022954e0::func_ov128_02294ec8,
        &Unk_ov128_022954e0::func_ov128_02294e90,
        &Unk_ov128_022954e0::func_ov128_02294e48,
        &Unk_ov128_022954e0::func_ov128_02294e0c};
    func_ov128_02294c8c();
    (this->*tbl[unk_8c])();
    func_ov128_02294c70();
    return TRUE;
}

BOOL Unk_ov128_022954e0::vfunc_24() {
    func_0206ef00();
    func_ov128_02294368();
    if (func_ov128_022941a4(1)) {
        unk_94.func_ov002_02203b30(0, unk_2cf8 >> 2, 1);
        func_ov127_022927a8(&unk_478, unk_2cf8, 6);
    }
    if (func_ov128_022941a4(1)) {
        func_ov128_022944d8(unk_2cf8);
    }
    return TRUE;
}

BOOL Unk_ov128_022954e0::vfunc_0c() {
    func_020ed174();
    func_ov092_02291c5c();
    func_ov128_02294cd4();
    return TRUE;
}

BOOL Unk_ov128_022954e0::vfunc_00() {
    func_ov128_02294d44();
    unk_8c = 0;
    func_ov002_02200a60(0);
    return TRUE;
}

extern "C" Unk_ov128_022954e0 *func_ov128_0229516c() { return new Unk_ov128_022954e0(); }

Unk_ov128_022954e0::~Unk_ov128_022954e0() {}
