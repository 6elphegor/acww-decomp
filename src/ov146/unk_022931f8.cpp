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
extern void *data_021f482c;
extern u8 data_ov146_022940e0[];
extern u8 data_ov146_022940f4[];
extern u8 data_ov146_02294108[];
extern u8 data_ov146_0229411c[];
extern u8 data_ov146_0229412c[];
extern u8 data_ov146_0229413c[];
extern u8 data_ov146_02294150[];
extern u8 data_ov146_02294164[];
extern u8 data_ov146_02293e98[];
extern u8 data_ov146_02293f50[];
extern u8 data_ov146_02293f70[];
extern u8 data_ov146_02293fb0[];
extern u8 data_ov146_02293fe0[];
extern u8 data_ov146_02294018[];
extern u8 data_ov146_02293e18[];
extern u8 data_ov146_02293e78[];
extern u8 data_ov146_02293e20[];
extern u8 data_ov146_02293e48[];
extern u8 data_ov146_02293f90[];
extern u8 data_ov146_02293ed0[];
extern u8 data_ov146_02293ef0[];
extern u8 data_ov146_02293f10[];
extern u8 data_ov146_02293f30[];

void func_02115e48(void *dst, void *src, u32 n);
void func_0200402c(u32 a);
void func_0206ee80(void *p, s32 a, s32 b, s32 c, s32 d, s32 e);
void func_0200261c(void *a, void *b, s32 c, s32 d, s32 e, s32 f);
void func_020026c4(void *a, void *b, s32 c, s32 d, s32 e, s32 f);
void func_02002654(void *a, void *b, s32 c);
void func_020641b4(void *a, void *b, s32 c);
void func_020015b8(s32 a);
void func_02002398(s32 a, s32 b);
void func_0200226c(s32 a, s32 b, s32 c, s32 d);
void func_020021a0(u32 x);
void func_020020b8(u32 x);
void func_020ed188(void *p);
s32 func_020ed174();
void func_ov092_02291ce4(s32 a, s32 b, s32 c);
BOOL func_0206ef00();
BOOL func_0208d4fc(void *p);
void func_02089ad8(void *p, s32 a, s32 b);
void func_02089ae8(void *p);
void func_02087e70(u32 a, void *h, s32 x, s32 y, s32 s0, s32 s1, s32 s2, s32 s3, s32 s4, s32 s5, s32 s6, s32 s7);

BOOL func_ov002_022028f0(void *p);
void func_ov002_02202a40(void *p, s32 a, s32 b);
void func_ov002_02202844(void *p);
void func_ov002_02202ed0(void *p);
void func_ov002_02202f00(void *p);
void func_ov002_02202f0c(void *p);
void func_ov002_022039d8(void *p);
void func_ov002_022039f8(void *p, s32 a, s32 b, s32 c);
}

// Vtable 0x022044e4 (declaration copied from src/ov002/unk_ov002_02200680.cpp)
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
    s32 func_ov002_022009c8();
    BOOL func_ov002_022009d4();
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

// Sub-objects (polymorphic; slots 08/0c are called from this group)
class Unk_ov146_02202640 {
public:
    virtual ~Unk_ov146_02202640();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    u32 unk_04[0x60 / 4];
};

class Unk_ov146_02202f70 {
public:
    virtual ~Unk_ov146_02202f70();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    u32 unk_04[0x44 / 4];
};

class Unk_ov146_02203a80 {
public:
    virtual ~Unk_ov146_02203a80();
    virtual void vfunc_08();
    u32 unk_04[0xb8 / 4];
};

class Unk_ov146_0206fca8 {
public:
    Unk_ov146_0206fca8();
    ~Unk_ov146_0206fca8();
    u32 unk_00[0x40 / 4];
};

class Unk_ov146_02294080;
typedef void (Unk_ov146_02294080::*Unk_ov146_02294080_Fn)();

// Vtable 0x02294080
class Unk_ov146_02294080 : public Unk_ov002_022044e4 {
public:
    virtual ~Unk_ov146_02294080();

    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_24();
    virtual BOOL vfunc_4c();
    virtual BOOL vfunc_50();
    virtual BOOL vfunc_54();
    virtual BOOL vfunc_58();
    virtual BOOL vfunc_5c();

    void func_ov146_02292010(u32 m);
    void func_ov146_02292020(u32 m);
    BOOL func_ov146_02292030(u32 m);
    void func_ov146_02292044();
    void func_ov146_02292188();
    BOOL func_ov146_0229221c(u32 pad);
    BOOL func_ov146_0229240c(u32 k);
    void func_ov146_02292518();
    BOOL func_ov146_02292540();
    void func_ov146_02292568();
    void func_ov146_022925f4();
    void func_ov146_02292604(s32 v, BOOL c);
    BOOL func_ov146_0229267c(s32 x, s32 y);
    BOOL func_ov146_022926c4();
    void func_ov146_022927ac(s32 v);
    void func_ov146_022927e8();
    BOOL func_ov146_0229285c(s32 idx);
    BOOL func_ov146_022928bc();
    void func_ov146_02292970();
    void func_ov146_02292aa0();
    void func_ov146_02292b24();
    void func_ov146_02292c3c();
    void func_ov146_02292e04();
    s32 func_ov146_02292e68();
    void func_ov146_02292e94();
    void func_ov146_02292f38();
    u32 func_ov146_02292fa0();
    void func_ov146_02292f7c();
    u32 func_ov146_02292fec();
    void func_ov146_022930a8();
    void func_ov146_022930e0();
    void func_ov146_02293128();
    void func_ov146_02293148();
    void func_ov146_02293164();
    void func_ov146_0229317c();
    void func_ov146_022931a8();

    // this group
    void func_ov146_022931f8();
    void func_ov146_02293230();
    void func_ov146_0229325c();
    void func_ov146_022932a0();
    void func_ov146_022932f0();
    void func_ov146_02293354();
    void func_ov146_02293388();
    void func_ov146_022933bc();
    void func_ov146_022934cc();
    void func_ov146_0229352c();
    void func_ov146_022935e4();
    void func_ov146_0229361c();
    void func_ov146_022936a4();
    void func_ov146_022936c8();
    void func_ov146_022936d0();
    void func_ov146_022936ec();
    void func_ov146_02293700();
    void func_ov146_022937bc();
    void func_ov146_022937fc();
    void func_ov146_0229382c();
    void func_ov146_02293864();
    void func_ov146_02293894();
    void func_ov146_02293930();

    /* 0x091 */ u8 unk_91[3];
    /* 0x094 */ s32 unk_94;
    /* 0x098 */ s32 unk_98;
    /* 0x09c */ s32 unk_9c;
    /* 0x0a0 */ s32 unk_a0;
    /* 0x0a4 */ s32 unk_a4;
    /* 0x0a8 */ s32 unk_a8;
    /* 0x0ac */ u16 unk_ac;
    /* 0x0ae */ s16 unk_ae;
    /* 0x0b0 */ u8 unk_b0;
    /* 0x0b1 */ u8 unk_b1;
    /* 0x0b2 */ u8 unk_b2;
    /* 0x0b3 */ u8 unk_b3[3];
    /* 0x0b6 */ u8 unk_b6;
    /* 0x0b7 */ u8 unk_b7[4];
    /* 0x0bb */ u8 unk_bb;
    /* 0x0bc */ u8 unk_bc[7];
    /* 0x0c3 */ u8 unk_c3[7];
    /* 0x0ca */ u8 unk_ca[0xea - 0xca];
    /* 0x0ea */ u8 unk_ea[0x20];
    /* 0x10a */ u8 unk_10a[0x20];
    /* 0x12a */ u8 unk_12a[0x13c - 0x12a];
    /* 0x13c */ u8 unk_13c[0x38a - 0x13c];
    /* 0x38a */ u8 unk_38a[0xb8a - 0x38a];
    /* 0xb8a */ u8 unk_b8a[0x800];
    /* 0x138a */ u16 unk_138a[16];
    /* 0x13aa */ u16 unk_13aa[16];
    /* 0x13ca */ u8 unk_13ca[2];
    /* 0x13cc */ Unk_ov146_02202640 unk_13cc;
    /* 0x1430 */ Unk_ov146_0206fca8 unk_1430[0x14];
    /* 0x1930 */ u8 unk_1930[0x48];
    /* 0x1978 */ Unk_ov146_02203a80 unk_1978;
    /* 0x1a34 */ Unk_ov146_02202f70 unk_1a34;
};

static inline BOOL Unk_ov146_022933bc_Both() {
    if (data_021f4770 != 0 && data_021f4774 != 0) {
        return TRUE;
    }
    return FALSE;
}

// ---- 0x022931f8 ----
void Unk_ov146_02294080::func_ov146_022931f8() {
    if (func_0208d4fc(&unk_13cc)) {
        if (!func_ov146_0229240c(unk_b2)) {
            func_ov002_02200a58(3);
            func_ov146_02292e68();
        }
    }
}

void Unk_ov146_02294080::func_ov146_02293230() {
    if (!func_ov002_022028f0(&unk_13cc)) {
        func_ov002_02200a58(unk_b3[0]);
        func_ov146_02293930();
    }
}

void Unk_ov146_02294080::func_ov146_0229325c() {
    u32 a;
    u32 b;
    if (func_ov146_02292540()) {
        func_ov002_02200a58(3);
        func_ov146_02292e68();
    }
    a = func_ov146_02292fec();
    b = func_ov146_02292fa0();
    func_ov002_02202a40(&unk_13cc, a, b);
}

void Unk_ov146_02294080::func_ov146_022932a0() {
    u32 a;
    u32 b;
    if (data_021f47d8[0] & 1) {
        func_ov146_02292568();
        a = func_ov146_02292fec();
        b = func_ov146_02292fa0();
        func_ov002_02202a40(&unk_13cc, a, b);
    } else {
        func_ov146_022925f4();
        func_ov002_02200a58(5);
    }
}

void Unk_ov146_02294080::func_ov146_022932f0() {
    if (func_ov002_022009d4()) {
        func_ov146_02293164();
    } else if (func_ov146_0229221c(func_ov002_022009c8())) {
        func_ov146_02292f38();
    } else {
        u32 k = data_021f47d8[1];
        if (k & 1) {
            func_ov146_02292e94();
        } else if (k & 2) {
            func_ov146_02292f7c();
            func_ov146_022930a8();
        }
    }
}

void Unk_ov146_02294080::func_ov146_02293354() {
    if (data_021f4770 != 0) {
        func_ov146_02292604(data_021ef5ec, 1);
    } else {
        func_ov146_022925f4();
        func_ov002_02200a58(0);
    }
}

void Unk_ov146_02294080::func_ov146_02293388() {
    if (data_021f4770 != 0) {
        func_ov146_02292604(data_021ef5ec, 0);
    } else {
        func_ov146_022925f4();
        func_ov002_02200a58(0);
    }
}

void Unk_ov146_02294080::func_ov146_022933bc() {
    s32 x;
    s32 y;
    if (func_ov002_02200a14(1)) {
        func_ov146_02293148();
        return;
    }
    if (Unk_ov146_022933bc_Both()) {
        x = data_021ef5f0;
        y = data_021ef5ec;
        if (y >= 0xa9 && y <= 0xbc && x >= 0x39) {
            if (x < 0x75) {
                func_ov146_022930a8();
                return;
            }
            if (x >= 0x8b && x < 0xc7 && unk_b0 == 8) {
                func_ov146_022930e0();
                return;
            }
        }
        if (x >= 0x18 && x <= 0xe0 && y >= 0x38 && y < 0x98) {
            s32 idx = unk_ae + ((y - (0x38 - (unk_a8 & 0xf))) >> 4);
            if (idx < 0x20) {
                x = unk_ea[idx];
                if (func_ov146_0229285c(x)) {
                    if (unk_bb != x) {
                        unk_bb = x;
                        func_0200402c(0x29);
                    }
                }
            }
        } else if (func_ov146_0229267c(x, y)) {
            func_ov002_02200a58(1);
        } else if (x >= 0xe6 && x <= 0xee && y >= 0x38 && y <= 0x88) {
            func_ov002_02202f00(&unk_1a34);
            func_ov002_02200a58(2);
        }
    }
}

void Unk_ov146_02294080::func_ov146_022934cc() {
    void *p = data_021f482c;
    func_0200261c(data_ov146_022940e0, p, 8, 0x80, 0x80, 0xff);
    func_0200261c(data_ov146_022940f4, p, 8, 0x160, 0x160, 0x1ff);
    func_020026c4(data_ov146_02294108, p, 8, 4, 4, 0xd);
}

void Unk_ov146_02294080::func_ov146_0229352c() {
    void *p = data_021f482c;
    func_0200261c(data_ov146_0229411c, p, 6, 0x11, 0x11, 0x5c);
    func_020026c4(data_ov146_0229412c, p, 6, 1, 1, 8);
    func_020641b4(data_ov146_0229413c, unk_138a, 0x20);
    func_02115e48(unk_138a, unk_13aa, 0x20);
    func_02002654(data_ov146_02294150, p, 6);
    func_020641b4(data_ov146_02294164, unk_38a, 0x800);
    func_0206ee80(unk_38a, 5, 7, 0xe, 0x14, 7);
    func_0206ee80(unk_38a, 0x10, 7, 0x17, 0x14, 7);
}

void Unk_ov146_02294080::func_ov146_022935e4() {
    func_020015b8(0);
    func_02002398(6, 1);
    func_0200226c(6, 0, 0, 0);
    func_02002398(4, 2);
    func_0200226c(4, 0, 0, 0);
}

// thunk: defined before its target so it stays a tail branch
void Unk_ov146_02294080::func_ov146_022936c8() { func_ov146_0229361c(); }

void Unk_ov146_02294080::func_ov146_0229361c() {
    if (!func_ov146_02292030(0x40)) {
        func_ov146_02292970();
        if (func_ov146_022928bc()) {
            func_ov146_02292020(4);
        }
        if (func_ov146_0229285c(unk_bb)) {
            unk_b0 = 8;
        } else {
            unk_b0 = 9;
        }
    }
    func_ov146_022926c4();
    if (func_ov146_02292030(4)) {
        func_ov146_02292c3c();
        func_ov146_02292010(4);
    }
    func_ov146_02292044();
    func_ov146_022927e8();
    func_ov002_02202ed0(&unk_1a34);
}

void Unk_ov146_02294080::func_ov146_022936a4() {
    func_ov146_02292e04();
    func_ov146_02292188();
    unk_1a34.vfunc_0c();
}

void Unk_ov146_02294080::func_ov146_022936d0() {
    func_ov146_022936a4();
    unk_13cc.vfunc_0c();
}

void Unk_ov146_02294080::func_ov146_022936ec() {
    func_ov146_02292e04();
    func_ov146_02292188();
}

void Unk_ov146_02294080::func_ov146_02293700() {
    s32 i;
    s32 j;
    unk_ac = 0;
    unk_b2 = 3;
    unk_b0 = 9;
    unk_b1 = 8;
    func_ov002_022039d8(&unk_1978);
    func_ov002_022039f8(&unk_1978, 0x7f, 0x90, 0x10);
    func_02089ae8(&unk_1978);
    unk_b3[2] = 0;
    func_ov002_02202f0c(&unk_1a34);
    for (i = 0; i < 7; i++) {
        unk_bc[i] = 0x21;
        unk_c3[i] = 0xff;
    }
    for (j = 0; j < 0x20; j++) {
        unk_ea[j] = 0x20;
        unk_10a[j] = 0;
    }
    func_ov146_02292aa0();
    unk_b6 = 0x21;
    unk_b7[0] = 10;
    unk_b7[1] = 0;
    unk_b7[2] = 10;
    unk_bb = 0x20;
}

void Unk_ov146_02294080::func_ov146_022937bc() {
    func_ov002_02200840(6, 0, 0);
    func_ov002_02200840(4, 0, 0x38 - unk_a4);
    unk_94 = func_ov002_02200920();
    func_ov146_02292518();
}

void Unk_ov146_02294080::func_ov146_022937fc() {
    if (func_ov002_022008fc(0)) {
        func_020021a0(6);
        func_020021a0(4);
        func_ov002_02200a60(5);
    } else {
        func_ov146_022937bc();
    }
}

void Unk_ov146_02294080::func_ov146_0229382c() {
    func_ov092_02291ce4(func_020ed174(), 0x44, 1);
    func_ov002_022008c4(0xa, 0, 0, 0x28);
    func_ov146_022937bc();
    func_ov002_02200a50(3);
}

void Unk_ov146_02294080::func_ov146_02293864() {
    if (func_ov002_02200908(0)) {
        func_ov002_02200a60(2);
        func_ov146_02293128();
    } else {
        func_ov146_02292b24();
    }
    func_ov146_022937bc();
}

void Unk_ov146_02294080::func_ov146_02293894() {
    func_ov146_022935e4();
    func_ov146_0229352c();
    func_ov146_022928bc();
    func_ov146_022927ac(0);
    unk_a8 = 0;
    func_ov146_022934cc();
    func_ov002_022008e0(0xa, 4, 0, 0x28);
    func_020020b8(6);
    func_020020b8(4);
    func_ov146_022937bc();
    func_ov146_02292020(1);
    func_ov002_02200a50(1);
}

BOOL Unk_ov146_02294080::vfunc_5c() {
    func_020ed188(this);
    return TRUE;
}

BOOL Unk_ov146_02294080::vfunc_58() { return TRUE; }

BOOL Unk_ov146_02294080::vfunc_54() { return TRUE; }

BOOL Unk_ov146_02294080::vfunc_50() {
    func_ov146_022936d0();
    func_ov146_02293930();
    func_ov146_022936c8();
    return TRUE;
}

void Unk_ov146_02294080::func_ov146_02293930() {
    static Unk_ov146_02294080_Fn tbl[10] = {
        &Unk_ov146_02294080::func_ov146_022933bc,
        &Unk_ov146_02294080::func_ov146_02293388,
        &Unk_ov146_02294080::func_ov146_02293354,
        &Unk_ov146_02294080::func_ov146_022932f0,
        &Unk_ov146_02294080::func_ov146_022932a0,
        &Unk_ov146_02294080::func_ov146_0229325c,
        &Unk_ov146_02294080::func_ov146_02293230,
        &Unk_ov146_02294080::func_ov146_022931f8,
        &Unk_ov146_02294080::func_ov146_022931a8,
        &Unk_ov146_02294080::func_ov146_0229317c};
    (this->*tbl[unk_8d])();
}

BOOL Unk_ov146_02294080::vfunc_4c() {
    static Unk_ov146_02294080_Fn tbl[4] = {
        &Unk_ov146_02294080::func_ov146_02293894,
        &Unk_ov146_02294080::func_ov146_02293864,
        &Unk_ov146_02294080::func_ov146_0229382c,
        &Unk_ov146_02294080::func_ov146_022937fc};
    func_ov146_022936a4();
    (this->*tbl[unk_8c])();
    func_ov146_0229361c();
    return TRUE;
}

BOOL Unk_ov146_02294080::vfunc_24() {
    s32 i;
    s32 y;
    s32 y2;
    s32 idx;
    if (func_0206ef00()) {
        func_ov002_02202844(&unk_13cc);
    }
    if (!func_ov146_02292030(1)) {
        return FALSE;
    }
    unk_1a34.vfunc_08();
    func_02089ad8(&unk_1978, 0, unk_94);
    unk_1978.vfunc_08();
    y = unk_94 + 0x60;
    y2 = y - (unk_a4 & 0xf);
    for (i = 0; i < 7; y2 += 0x10, i++) {
        idx = i + unk_ae;
        if (idx < 0x20 && unk_bb < 0x20 && unk_bb == unk_ea[idx]) {
            func_02087e70(1, data_ov146_02293fe0, 0x80, y2, -1, 2, 0x1000, 0x1000, 0, -1, 0, 0);
        } else {
            func_02087e70(1, data_ov146_02293fb0, 0x80, y2, -1, 2, 0x1000, 0x1000, 0, -1, 0, 0);
        }
        idx = i + unk_ae;
        if (idx < 0x20) {
            void *tb[5] = {0, data_ov146_02293e18, data_ov146_02293e78, data_ov146_02293e20, data_ov146_02293e48};
            void *h = tb[unk_ca[idx]];
            if (h != 0) {
                func_02087e70(1, h, 0x80, y2, -1, 2, 0x1000, 0x1000, 0, -1, 0, 0);
            }
        }
    }
    func_02087e70(1, data_ov146_02294018, 0x80, y, -1, 1, 0x1000, 0x1000, 0, -1, 0, 0);
    func_02087e70(1, data_ov146_02293f70, 0x80, y, unk_b1, 1, 0x1000, 0x1000, 0, -1, 0, 0);
    func_02087e70(1, data_ov146_02293f50, 0x80, y, unk_b0, 1, 0x1000, 0x1000, 0, -1, 0, 0);
    func_02087e70(1, data_ov146_02293e98, 0x80, y, -1, 1, 0x1000, 0x1000, 0, -1, 0, 0);
    void *tc[5] = {data_ov146_02293f90, data_ov146_02293ed0, data_ov146_02293ef0, data_ov146_02293f10, data_ov146_02293f30};
    if (unk_b7[0] != 0) {
        unk_b7[0] = *(volatile u8 *)&unk_b7[0] - 1;
    } else {
        unk_b7[1] = unk_b7[1] + 1;
        if (unk_b7[1] >= 5) {
            unk_b7[1] = 0;
        }
        unk_b7[0] = 10;
    }
    func_02087e70(1, tc[unk_b7[1]], 0x80, y, -1, 1, 0x1000, 0x1000, 0, -1, 0, 0);
    return TRUE;
}
