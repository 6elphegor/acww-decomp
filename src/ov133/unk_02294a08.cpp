#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef vfunc_08
#undef vfunc_14

extern "C" {
extern u8 data_ov133_02295230[];
extern u8 data_ov133_0229531c[];
extern u8 data_ov133_02295330[];
void *func_020ed174();
void func_020ed188(void *p);
void func_020b8800(void *p);
void func_020b87d0(void *p);
void func_0206fca8(void *p);
void func_0206f9fc(void *p, s32 a);
void func_0206fb9c(void *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f);
void func_0206fab4(void *p, s32 a, s32 b);
void func_020641b4(void *a, void *b, s32 c);
void func_02002398(s32 a, s32 b);
void func_0200226c(s32 a, s32 b, s32 c, s32 d);
void func_020021a0(s32 a);
void func_020020b8(s32 a);
void func_02003f3c(s32 a);
void *func_0209750c();
void *func_0209888c(void *p);
s32 func_0209411c(void *p);
BOOL func_0206e61c();
void func_0206e63c();
BOOL func_0206ef00();
s32 func_0206ed50();
s32 func_02076cf4();
void func_02087e70(u32 a, void *h, s32 x, s32 y, s32 s0, s32 s1, s32 s2, s32 s3, s32 s4, s32 s5, s32 s6, s32 s7);
void func_ov130_02292db8(s32 a);
void func_ov130_0229304c(s32 a);
void func_ov130_022929d4(s32 a);
void func_ov090_02291d8c(void *p, u8 b);
s32 func_ov090_02291d2c();
void func_ov090_02291a90(void *p);
void func_ov092_02291c5c();
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
    void func_ov002_0220085c(s32 a, s32 b);
    void func_ov002_02200874(s32 a, s32 b);
    void func_ov002_022008c4(s32 a, s32 b, s32 mode, s32 dist);
    void func_ov002_022008e0(s32 a, s32 b, s32 mode, s32 dist);
    BOOL func_ov002_022008fc(s32 a);
    BOOL func_ov002_02200908(s32 a);
    s32 func_ov002_02200920();
    void func_ov002_02200a50(u8 v);
    void func_ov002_02200a58(u8 v);
    void func_ov002_02200a60(u8 v);
    void func_ov002_02200a68();

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

// sub-object at +0x1300 (ctor func_ov002_02204400)
class Unk_ov133_02204400 {
public:
    Unk_ov133_02204400();
    u32 unk_00[0x108 / 4];
};

// sub-object at +0x154 (ctor func_ov002_02203994)
class Unk_ov133_02203994 {
public:
    Unk_ov133_02203994();
    void func_ov002_022034c4(s32 a);
    void func_ov002_022036a4(s32 a);
    void func_ov002_02203900();
    void func_ov002_02203920();
    u32 unk_00[0x164 / 4];
};

// sub-object at +0xf0 (polymorphic, ctor func_ov002_02202658)
class Unk_ov133_02202658 {
public:
    Unk_ov133_02202658();
    virtual ~Unk_ov133_02202658();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    void func_ov002_02202844();
    u32 unk_04[0x60 / 4];
};

class Unk_ov133_020b8800 {
public:
    Unk_ov133_020b8800();
    u32 unk_00[0x24 / 4];
};

class Unk_ov133_0206fcc8 {
public:
    Unk_ov133_0206fcc8();
    ~Unk_ov133_0206fcc8();
    u32 unk_00[0x40 / 4];
};

class Unk_ov133_022952bc;
typedef void (Unk_ov133_022952bc::*Unk_ov133_022952bc_Fn)();

// Vtable 0x022952bc, size 0x1408
class Unk_ov133_022952bc : public Unk_ov002_022044e4 {
public:
    Unk_ov133_022952bc()
        : unk_b0(), unk_f0(), unk_154(), unk_2b8(), unk_1300() {}
    virtual ~Unk_ov133_022952bc();

    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_24();
    virtual BOOL vfunc_4c();
    virtual BOOL vfunc_50();
    virtual BOOL vfunc_54();
    virtual BOOL vfunc_58();
    virtual BOOL vfunc_5c();

    // other groups
    void func_ov133_02293760(s32 a);
    void func_ov133_02293770(s32 a);
    BOOL func_ov133_02293780(s32 a);
    void func_ov133_02293794(u8 a);
    void func_ov133_022938cc();
    void func_ov133_02293ca4();
    void func_ov133_02294110();
    void func_ov133_022943f4();
    void *func_ov133_0229450c();
    void func_ov133_02294538();
    void func_ov133_02294588();
    // 0x8d table targets (other groups)
    void func_ov133_02294940();
    void func_ov133_0229490c();
    void func_ov133_022948dc();
    void func_ov133_02294808();
    void func_ov133_022947e0();
    void func_ov133_022947b0();
    void func_ov133_0229478c();
    void func_ov133_0229474c();
    void func_ov133_022946e8();
    void func_ov133_022946a4();
    void func_ov133_02294638();
    void func_ov133_02294614();
    void func_ov133_022945dc();

    // in range
    void func_ov133_02294a08();
    void func_ov133_02294a5c();
    void func_ov133_02294ab0();
    void func_ov133_02294ae4();
    void func_ov133_02294aec();
    void func_ov133_02294b04();
    void func_ov133_02294b0c();
    void func_ov133_02294b90();
    void func_ov133_02294bc4();
    void func_ov133_02294c10();
    void func_ov133_02294c64();
    void func_ov133_02294cb0();
    void func_ov133_02294cf4();
    void func_ov133_02294d50();
    BOOL func_ov133_02294d88(u32 v);
    void func_ov133_02294dd4();

    /* 0x0091 */ u8 unk_91[3];
    /* 0x0094 */ s32 unk_94;
    /* 0x0098 */ u16 unk_98;
    /* 0x009a */ u8 unk_9a;
    /* 0x009b */ u8 unk_9b;
    /* 0x009c */ u8 unk_9c;
    /* 0x009d */ u8 unk_9d;
    /* 0x009e */ u8 unk_9e;
    /* 0x009f */ u8 unk_9f;
    /* 0x00a0 */ u8 unk_a0;
    /* 0x00a1 */ u8 unk_a1;
    /* 0x00a2 */ u8 unk_a2[0xe];
    /* 0x00b0 */ Unk_ov133_0206fcc8 unk_b0[1];
    /* 0x00f0 */ Unk_ov133_02202658 unk_f0;
    /* 0x0154 */ Unk_ov133_02203994 unk_154;
    /* 0x02b8 */ Unk_ov133_020b8800 unk_2b8[2];
    /* 0x0300 */ u8 unk_300[0x1000];
    /* 0x1300 */ Unk_ov133_02204400 unk_1300;
};

void Unk_ov133_022952bc::func_ov133_02294a08() {
    func_ov130_02292db8(7);
    void *p = func_ov133_0229450c();
    func_0206f9fc(p, 0xd7);
    func_0206fb9c(p, 8, 0x14c, 0xe, 0xf, 0, 0);
    func_0206fab4(p, 1, 0);
    unk_154.func_ov002_02203920();
}

void Unk_ov133_022952bc::func_ov133_02294a5c() {
    func_ov130_0229304c(4);
    func_020641b4(data_ov133_0229531c, &unk_300[0xb00 - 0x300], 0x800);
    func_020641b4(data_ov133_02295330, &unk_300[0], 0x800);
    func_ov133_02293ca4();
    func_ov133_02293770(2);
    func_ov133_02293770(4);
}

void Unk_ov133_022952bc::func_ov133_02294ab0() {
    func_02002398(4, 2);
    func_02002398(6, 2);
    func_0200226c(4, 0, 0, 0);
    func_0200226c(6, 0, 0, 0);
}

void Unk_ov133_022952bc::func_ov133_02294ae4() { func_ov133_02294b04(); }

void Unk_ov133_022952bc::func_ov133_02294aec() {
    func_ov133_02294b0c();
    unk_f0.vfunc_0c();
}

void Unk_ov133_022952bc::func_ov133_02294b04() { func_ov133_022938cc(); }

void Unk_ov133_022952bc::func_ov133_02294b0c() {
    func_020b87d0(&unk_2b8[0]);
    func_020b87d0(&unk_2b8[1]);
    func_ov133_02294538();
    unk_154.func_ov002_02203900();
    if (unk_9e != 0) {
        unk_9e = *(volatile u8 *)&unk_9e - 1;
        if (unk_9e == 0) {
            if (unk_9d != 0) {
                unk_9e = 1;
            } else {
                func_ov133_02293794(unk_a0);
            }
        }
    }
    unk_a1 = unk_a1 + 1;
}

void Unk_ov133_022952bc::func_ov133_02294b90() {
    func_020b87d0(&unk_2b8[0]);
    func_020b87d0(&unk_2b8[1]);
    func_ov133_02294538();
    unk_154.func_ov002_02203900();
}

void Unk_ov133_022952bc::func_ov133_02294bc4() {
    unk_9a = 0;
    unk_98 = 0;
    unk_9c = 0xb;
    unk_9e = 0;
    unk_9d = 0;
    void *p = func_0209750c();
    if (p != 0) {
        if (func_0209411c(func_0209888c(p)) == 0) {
            func_02003f3c(0);
            return;
        }
    }
    func_02003f3c(1);
}

void Unk_ov133_022952bc::func_ov133_02294c10() {
    if (func_ov002_022008fc(0)) {
        func_020021a0(4);
        func_020021a0(6);
        func_ov133_02293760(1);
        func_ov002_02200a60(5);
    } else {
        func_ov002_02200840(4, 0, 0);
        func_ov002_02200840(6, 0, 0);
        unk_94 = func_ov002_02200920();
    }
}

void Unk_ov133_022952bc::func_ov133_02294c64() {
    func_ov133_022943f4();
    func_ov002_022008c4(0xa, 0, 0, 0x30);
    func_ov002_02200840(4, 0, 0);
    func_ov002_02200840(6, 0, 0);
    func_ov002_02200a50(4);
    unk_94 = func_ov002_02200920();
}

void Unk_ov133_022952bc::func_ov133_02294cb0() {
    if (func_ov002_02200908(0)) {
        func_ov002_02200a60(2);
        func_ov133_02294588();
    }
    func_ov002_02200840(4, 0, 0);
    func_ov002_02200840(6, 0, 0);
    unk_94 = func_ov002_02200920();
}

void Unk_ov133_022952bc::func_ov133_02294cf4() {
    func_ov002_022008e0(0xa, 0, 0, 0x30);
    func_020020b8(4);
    func_ov002_02200840(4, 0, 0);
    func_020020b8(6);
    func_ov002_02200840(6, 0, 0);
    func_ov133_02293770(1);
    unk_94 = func_ov002_02200920();
    func_ov002_02200a50(2);
}

void Unk_ov133_022952bc::func_ov133_02294d50() {
    func_ov133_02294ab0();
    func_ov133_02294a5c();
    func_ov133_02294a08();
    func_ov002_02200a50(1);
    unk_154.func_ov002_022034c4(0x65);
    func_ov133_02294cf4();
}

BOOL Unk_ov133_022952bc::func_ov133_02294d88(u32 v) {
    func_ov090_02291d8c(func_020ed174(), v);
    return TRUE;
}

void Unk_ov133_022952bc::func_ov133_02294dd4() {
    static Unk_ov133_022952bc_Fn tbl[13] = {
        &Unk_ov133_022952bc::func_ov133_02294940,
        &Unk_ov133_022952bc::func_ov133_0229490c,
        &Unk_ov133_022952bc::func_ov133_022948dc,
        &Unk_ov133_022952bc::func_ov133_02294808,
        &Unk_ov133_022952bc::func_ov133_022947e0,
        &Unk_ov133_022952bc::func_ov133_022947b0,
        &Unk_ov133_022952bc::func_ov133_0229478c,
        &Unk_ov133_022952bc::func_ov133_0229474c,
        &Unk_ov133_022952bc::func_ov133_022946e8,
        &Unk_ov133_022952bc::func_ov133_022946a4,
        &Unk_ov133_022952bc::func_ov133_02294638,
        &Unk_ov133_022952bc::func_ov133_02294614,
        &Unk_ov133_022952bc::func_ov133_022945dc};
    func_0206e63c();
    if (func_0206e61c()) {
        switch (unk_8d) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 7:
        case 8:
        case 9:
            func_ov133_022943f4();
            func_ov002_02200a50(3);
            func_ov133_02294d88(7);
            if (func_0206ed50() == 0xe) {
                func_ov133_02294110();
                func_02076cf4();
            }
            func_ov002_02200a60(1);
            break;
        case 4:
        case 5:
        case 6:
            break;
        }
    }
    (this->*tbl[unk_8d])();
}

BOOL Unk_ov133_022952bc::vfunc_24() {
    if (!func_ov133_02293780(1)) {
        return TRUE;
    }
    if (func_0206ef00()) {
        unk_f0.func_ov002_02202844();
    }
    unk_154.func_ov002_022036a4(unk_94);
    func_ov130_022929d4(unk_94);
    if (unk_a1 & 0x10) {
        func_02087e70(1, data_ov133_02295230, (unk_9f << 4) + 0x20, unk_94 + 0x40, -1, 1, 0x1000, 0x1000, 0, -1, 0, 0);
    }
    return TRUE;
}

BOOL Unk_ov133_022952bc::vfunc_5c() {
    func_020ed188(this);
    return TRUE;
}

BOOL Unk_ov133_022952bc::vfunc_58() { return TRUE; }

BOOL Unk_ov133_022952bc::vfunc_54() { return TRUE; }

BOOL Unk_ov133_022952bc::vfunc_50() {
    func_ov133_02294aec();
    func_ov133_02294dd4();
    func_ov133_02294ae4();
    return TRUE;
}

BOOL Unk_ov133_022952bc::vfunc_4c() {
    static Unk_ov133_022952bc_Fn tbl[5] = {
        &Unk_ov133_022952bc::func_ov133_02294d50,
        &Unk_ov133_022952bc::func_ov133_02294cf4,
        &Unk_ov133_022952bc::func_ov133_02294cb0,
        &Unk_ov133_022952bc::func_ov133_02294c64,
        &Unk_ov133_022952bc::func_ov133_02294c10};
    func_ov133_02294b0c();
    (this->*tbl[unk_8c])();
    func_ov133_02294b04();
    return TRUE;
}

BOOL Unk_ov133_022952bc::vfunc_0c() {
    void *p = func_020ed174();
    if (func_ov090_02291d2c() == 6) {
        func_ov090_02291a90(p);
    }
    func_ov133_02294b90();
    return TRUE;
}

BOOL Unk_ov133_022952bc::vfunc_00() {
    func_ov133_02294bc4();
    func_ov002_02200a50(0);
    func_ov002_02200a60(1);
    return TRUE;
}

extern "C" Unk_ov133_022952bc *func_ov133_022950bc() { return new Unk_ov133_022952bc(); }

Unk_ov133_022952bc::~Unk_ov133_022952bc() {}
