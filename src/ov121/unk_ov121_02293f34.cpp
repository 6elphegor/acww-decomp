#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef vfunc_08
#undef vfunc_14

struct Unk_ov121_022943ec_G {
    u8 unk_00[0x64];
    u32 unk_64;
};

extern "C" {
BOOL func_0206e61c();
void func_0206e63c();
BOOL func_0206ef0c();
void func_0200402c(s32 a);
void func_020021a0(s32 a);
void func_020020b8(s32 a);
void func_0200261c(void *a, void *b, s32 c, s32 d, s32 e, s32 f);
void func_020026c4(void *a, void *b, s32 c, s32 d, s32 e, s32 f);
void func_02001f74(s32 a, void *b, s32 c, s32 d, s32 e);
void func_02002438(void *a, s32 b, s32 c, s32 d, s32 e);
void func_02002580(void *a, s32 b, s32 c, s32 d, s32 e);
void func_02002398(s32 a, s32 b);
void func_0200226c(s32 a, s32 b, s32 c, s32 d);
void *func_020e8618(void *a, s32 b);
void func_020e85fc(void *a, void *b);
void func_0209750c();
s32 func_020986d4();
s32 func_02071c68(s32 a, s32 b);
s32 func_02071e58();
s32 func_02071e04();
s32 func_02072040();
void func_02115e48(s32 a, void *b, s32 c);
void func_020641b4(void *a, void *b, s32 c);
BOOL func_020b52f8();
BOOL func_02072e44(void *p);
BOOL func_020b86c0(void *a, void *b, s32 c, s32 d, s32 e);
void func_020b87d0(void *a);
s32 func_020ed174();
void func_020ed188();
void func_ov090_02291d8c(s32 a, u8 b);
s32 func_ov090_02291aa0();

extern u8 data_021f4770;
extern u8 data_021f4774;
extern u8 data_021ef5f0;
extern u8 data_021ef5ec;
extern u8 data_020e416c;
extern u16 data_021f47d8[];
extern u32 *data_021f482c;
extern u8 data_ov121_02294dc8[];
extern u8 data_ov121_02294de0[];
extern u8 data_ov121_02294df8[];
extern u8 data_ov121_02294e10[];
extern u8 data_ov121_02294e28[];
extern Unk_ov121_022943ec_G *data_020cbb18;
}

class Unk_ov121_sub_02200800 {
public:
    Unk_ov121_sub_02200800();
    virtual ~Unk_ov121_sub_02200800();
    virtual void vfunc_08();
    void func_ov002_022006a4(s32 a);
    void func_ov002_022006b8();
    void func_ov002_022006c0();
    void func_ov002_022006e4(s32 a);
    BOOL func_ov002_0220071c();
    u32 unk_04[(0xc0 - 4) / 4];
};

class Unk_ov121_sub_02202640 {
public:
    Unk_ov121_sub_02202640();
    virtual ~Unk_ov121_sub_02202640();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    void func_ov002_02202844();
    u32 unk_04[0x60 / 4];
};

class Unk_ov121_sub_022043e8 {
public:
    Unk_ov121_sub_022043e8();
    u32 unk_00[0x108 / 4];
};

class Unk_ov121_sub_02202454 {
public:
    Unk_ov121_sub_02202454();
    void func_ov002_02201b04();
    void func_ov002_02201b28();
    void func_ov002_02201b58();
    s32 func_ov002_022014c0(u32 a, u32 b);
    void func_ov002_02201aa0(s32 a, s32 b);
    void func_ov002_02202144();
    void func_ov002_02202310(s32 a, s32 b, s32 c);
    u8 unk_00[0x300];
};

class Unk_ov121_sub_020b85f8 {
public:
    Unk_ov121_sub_020b85f8();
    u32 unk_00[0x38 / 4];
};

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

// Vtable 0x02294d68, size 0x107c
class Unk_ov121_02294d68 : public Unk_ov002_022044e4 {
public:
    Unk_ov121_02294d68() : unk_2d8(), unk_398(), unk_3fc(), unk_504(), unk_804() {}
    virtual ~Unk_ov121_02294d68();

    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_24();
    virtual BOOL vfunc_4c();
    virtual BOOL vfunc_50();
    virtual BOOL vfunc_54();
    virtual BOOL vfunc_58();
    virtual BOOL vfunc_5c();

    // other groups
    void func_ov121_02292ba4();
    void func_ov121_02292d18();
    void func_ov121_02292e40();
    void func_ov121_02292ecc();
    void func_ov121_02292efc();
    void func_ov121_022925d0();
    void func_ov121_022923fc(u32 a);
    void func_ov121_0229240c(u32 a);
    BOOL func_ov121_0229241c(u32 a);
    u32 func_ov121_02293540(s32 a);
    BOOL func_ov121_022935c0();
    BOOL func_ov121_02293728();
    BOOL func_ov121_0229376c(u32 a);
    void func_ov121_02293780(u32 a);
    u32 func_ov121_02293794();
    u32 func_ov121_022937d8();
    void func_ov121_02293884(u32 a);
    void func_ov121_022938c0(u32 a, u32 b);
    void func_ov121_02293978();
    void func_ov121_02293998();

    // this group
    void func_ov121_02293f34();
    void func_ov121_0229400c();
    void func_ov121_022940b0();
    void func_ov121_02294124();
    void func_ov121_02294194();
    void func_ov121_02294280();
    void func_ov121_02294308();
    void func_ov121_02294328();
    void func_ov121_02294394();
    void func_ov121_02294398();
    void func_ov121_022943a0();
    void func_ov121_022943bc();
    BOOL func_ov121_022943ec();
    void func_ov121_02294420();
    BOOL func_ov121_02294630(s32 a);
    BOOL func_ov121_02294688();
    void func_ov121_02294780();
    void func_ov121_02294514();
    void func_ov121_02294550();
    void func_ov121_02294590();
    void func_ov121_022945c8();

    // other groups (state handlers)
    void func_ov121_02293e44();
    void func_ov121_02293dcc();
    void func_ov121_02293da0();
    void func_ov121_02293d64();
    void func_ov121_02293d3c();
    void func_ov121_02293d00();
    void func_ov121_02293cdc();
    void func_ov121_02293c64();
    void func_ov121_02293bd4();
    void func_ov121_02293b44();
    void func_ov121_02293b08();
    void func_ov121_02293ac4();
    void func_ov121_02293aa4();
    void func_ov121_02293a7c();
    void func_ov121_02293a5c();
    void func_ov121_02293a38();
    void func_ov121_022939e0();

    /* 0x91 */ u8 unk_91[3];
    /* 0x94 */ u8 *unk_94;
    /* 0x98 */ u8 unk_98[4];
    /* 0x9c */ u32 unk_9c;
    /* 0xa0 */ u8 unk_a0[2];
    /* 0xa2 */ u16 unk_a2;
    /* 0xa4 */ u8 unk_a4[8];
    /* 0xac */ u8 unk_ac;
    /* 0xad */ u8 unk_ad;
    /* 0xae */ u8 unk_ae;
    /* 0xaf */ u8 unk_af;
    /* 0xb0 */ u8 unk_b0;
    /* 0xb1 */ u8 unk_b1;
    /* 0xb2 */ u8 unk_b2;
    /* 0xb3 */ u8 unk_b3[0x2d8 - 0xb3];
    /* 0x2d8 */ Unk_ov121_sub_02200800 unk_2d8;
    /* 0x398 */ Unk_ov121_sub_02202640 unk_398;
    /* 0x3fc */ Unk_ov121_sub_022043e8 unk_3fc;
    /* 0x504 */ Unk_ov121_sub_02202454 unk_504;
    /* 0x804 */ Unk_ov121_sub_020b85f8 unk_804[2];
    /* 0x874 */ u8 unk_874[0x1074 - 0x874];
    /* 0x1074 */ u8 unk_1074[8];
};

typedef void (Unk_ov121_02294d68::*Unk_ov121_02294d68_Fn)();

static inline BOOL Unk_ov121_02293f34_Both() {
    if (data_021f4770 != 0 && data_021f4774 != 0) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov121_02294d68::func_ov121_02293f34() {
    if (func_0206e61c()) {
        func_ov121_02292efc();
        return;
    }
    if (func_ov002_02200a14(1)) {
        func_ov121_02292ba4();
        func_ov002_02200a58(0xc);
        unk_b1 = unk_af;
        return;
    }
    if (Unk_ov121_02293f34_Both()) {
        s32 r6 = unk_504.func_ov002_022014c0(data_021ef5f0, data_021ef5ec);
        if (r6 >= 0) {
            s32 r5 = 1;
            unk_b2 = func_ov121_02293540(r6);
            switch (unk_b2) {
            case 0:
            case 1:
            case 2:
            case 3:
                func_0200402c(0x50);
                break;
            case 4:
            case 5:
                break;
            case 6:
                r5 = 0;
                break;
            }
            unk_504.func_ov002_02201aa0(r6, r5);
            func_ov002_02200a58(0xf);
        }
    }
}

void Unk_ov121_02294d68::func_ov121_0229400c() {
    func_ov121_022923fc(8);
    if (func_0206e61c()) {
        func_ov121_022923fc(4);
        func_ov121_02293884(0x18);
        func_ov002_02200a58(0);
    } else if (data_021f4770 == 0) {
        func_ov121_022923fc(4);
        func_ov121_02293884(0x18);
        if (func_ov121_022935c0() == 0) {
            func_ov002_02200a58(0);
        }
    } else {
        unk_af = func_ov121_02293794();
        u32 v = unk_af;
        if (v >= 9 && v <= 0xf) {
            func_ov121_02293884(v);
            func_ov121_0229240c(8);
            return;
        }
        if (v <= 7) goto b;
        if (v == 8) {
b:
            func_ov121_0229240c(8);
        }
        func_ov121_02293884(0x18);
    }
}

void Unk_ov121_02294d68::func_ov121_022940b0() {
    if (data_021f4770 == 0) {
        func_ov002_02200a58(0);
        unk_2d8.func_ov002_022006a4(0x3c);
    } else if (func_ov121_02293728()) {
        unk_ae = unk_ad;
        func_ov121_0229240c(4);
        unk_af = 0x18;
        func_ov002_02200a58(2);
        unk_2d8.func_ov002_022006e4(1);
        func_0200402c(0xd);
    } else {
        unk_2d8.func_ov002_022006c0();
    }
}

void Unk_ov121_02294d68::func_ov121_02294124() {
    if (func_ov002_02200a14(1)) {
        func_ov121_02293998();
    } else if (Unk_ov121_02293f34_Both()) {
        u32 r4 = func_ov121_022937d8();
        if (r4 != 0x18) {
            func_ov002_02200a58(1);
            unk_ad = r4;
            unk_2d8.func_ov002_022006b8();
            func_0200402c(0xc);
        }
    }
}

void Unk_ov121_02294d68::func_ov121_02294194() {
    u32 *r6;
    void *r5;
    u32 n;
    u32 i;
    s32 v;
    u32 k;
    r6 = data_021f482c;
    func_0200261c(data_ov121_02294dc8, r6, 8, 0x140, 0x140, 0x17f);
    r5 = func_020e8618(r6, 0x1000);
    func_0209750c();
    v = func_020986d4();
    i = 0;
    k = 4;
    do {
        func_02071c68(v, i);
        func_02001f74(func_02071e58(), r5, i << 2, k, k);
        i = (u8)(i + 1);
    } while (i < 8);
    func_02002438(r5, 8, 0xc0, 0xc0, 0x13f);
    func_020e85fc(r6, r5);
    void *r7 = func_020e8618(r6, 0x120);
    i = 0;
    n = i;
    do {
        func_02071c68(v, n);
        func_02071e04();
        func_02115e48(func_02072040(), (u8 *)r7 + i * 2, 0x20);
        i += 0x10;
        n = (u8)(n + 1);
    } while (n < 8);
    func_020641b4(data_ov121_02294de0, (u8 *)r7 + i * 2, 0x20);
    func_02002580(r7, 8, 4, 4, 0xc);
    func_020e85fc(r6, r7);
}

void Unk_ov121_02294d68::func_ov121_02294280() {
    u32 *r4 = data_021f482c;
    func_020026c4(data_ov121_02294df8, r4, 6, 1, 1, 7);
    func_0200261c(data_ov121_02294e10, r4, 6, 0x10, 0x10, 0xc5);
    func_020641b4(data_ov121_02294e28, &unk_874[0], 0x800);
    u32 i = 9;
    do {
        if (func_ov121_0229376c(i)) {
            func_ov121_022938c0(i, 7);
        }
        i = (u8)(i + 1);
    } while (i <= 0xf);
    func_ov121_0229240c(2);
}

void Unk_ov121_02294d68::func_ov121_02294308() {
    func_02002398(6, 2);
    func_0200226c(6, 0, 0, 0);
}

void Unk_ov121_02294d68::func_ov121_02294328() {
    func_ov121_022925d0();
    if (func_ov121_0229241c(2)) {
        if (func_020b86c0(&unk_804[0], &unk_874[0], 6, 0x800, 0)) {
            func_ov121_022923fc(2);
        }
    }
    if (unk_2d8.func_ov002_0220071c()) {
        func_ov121_02292e40();
    }
    unk_504.func_ov002_02201b58();
}

void Unk_ov121_02294d68::func_ov121_02294394() {}

void Unk_ov121_02294d68::func_ov121_02294398() {
    func_ov121_02294328();
}

void Unk_ov121_02294d68::func_ov121_022943a0() {
    func_ov121_02294394();
    unk_398.vfunc_0c();
}

void Unk_ov121_02294d68::func_ov121_022943bc() {
    unk_504.func_ov002_02201b04();
    func_020b87d0(&unk_804[0]);
    func_020b87d0(&unk_804[1]);
}

BOOL Unk_ov121_02294d68::func_ov121_022943ec() {
    if (func_020b52f8()) {
        Unk_ov121_022943ec_G *g = data_020cbb18;
        if (func_02072e44(g) && g->unk_64 != 0) {
            return FALSE;
        }
        return TRUE;
    }
    return FALSE;
}

void Unk_ov121_02294d68::func_ov121_02294420() {
    u32 i = 0;
    do {
        unk_1074[i] = i;
        i = (u8)(i + 1);
    } while (i < 8);
    u32 z = 0;
    unk_a2 = z;
    unk_9c = z;
    if (data_020e416c == 0) {
        z = 1;
    }
    if (z != 0) {
        unk_ac = 0;
        func_ov121_02293780(9);
        func_ov121_02293780(0xa);
        func_ov121_02293780(0xb);
        Unk_ov121_022943ec_G *g = data_020cbb18;
        if (func_02072e44(g) && g->unk_64 != 0) {
            func_ov121_02293780(0xf);
        }
    } else if (func_ov121_022943ec()) {
        unk_ac = 1;
        func_ov121_02293780(0xf);
    } else {
        unk_ac = 2;
        func_ov121_02293780(9);
        func_ov121_02293780(0xa);
        func_ov121_02293780(0xb);
        func_ov121_02293780(0xe);
        func_ov121_02293780(0xf);
    }
    unk_504.func_ov002_02202310(3, 1, 0);
    unk_b0 = 0x18;
    unk_b1 = 0;
}

BOOL Unk_ov121_02294d68::func_ov121_02294630(s32 a) {
    s32 r = func_020ed174();
    s32 m = -1;
    if (a == m) goto fail;
    if (a == 1) goto fail;
    func_ov090_02291d8c(r, (u8)a);
    unk_8c = 2;
    func_ov002_02200a60(1);
    unk_2d8.func_ov002_022006e4(1);
    if (a != 7) {
        func_ov121_02292ecc();
    }
    return TRUE;
fail:
    return FALSE;
}

BOOL Unk_ov121_02294d68::func_ov121_02294688() {
    func_0206e63c();
    if (func_0206e61c()) {
        switch (unk_8d) {
        case 0:
        case 1:
        case 4:
        case 7:
        case 8:
            return func_ov121_02294630(7);
        case 2:
        case 3:
        case 5:
        case 6:
            break;
        }
    }
    if (unk_8d != 0 && unk_8d != 4) {
        return FALSE;
    }
    s32 r5 = -1;
    if (func_0206ef0c()) {
        r5 = func_ov090_02291aa0();
    } else {
        u32 v = data_021f47d8[1];
        if ((v & 0x800) != 0) {
            r5 = 0;
        } else if ((v & 0x400) != 0) {
            r5 = 5;
        } else if ((v & 4) != 0) {
            r5 = 4;
        }
    }
    return func_ov121_02294630(r5);
}

BOOL Unk_ov121_02294d68::vfunc_5c() {
    func_020ed188();
    return TRUE;
}

BOOL Unk_ov121_02294d68::vfunc_58() {
    return TRUE;
}

BOOL Unk_ov121_02294d68::vfunc_54() {
    return TRUE;
}

BOOL Unk_ov121_02294d68::vfunc_50() {
    if (func_ov121_02294688()) {
        return TRUE;
    }
    func_ov121_022943a0();
    func_ov121_02294780();
    func_ov121_02294398();
    return TRUE;
}

void Unk_ov121_02294d68::func_ov121_02294780() {
    static Unk_ov121_02294d68_Fn tbl[21] = {
        &Unk_ov121_02294d68::func_ov121_02294124, &Unk_ov121_02294d68::func_ov121_022940b0,
        &Unk_ov121_02294d68::func_ov121_0229400c, &Unk_ov121_02294d68::func_ov121_02293f34,
        &Unk_ov121_02294d68::func_ov121_02293e44, &Unk_ov121_02294d68::func_ov121_02293dcc,
        &Unk_ov121_02294d68::func_ov121_02293da0, &Unk_ov121_02294d68::func_ov121_02293d64,
        &Unk_ov121_02294d68::func_ov121_02293d3c, &Unk_ov121_02294d68::func_ov121_02293d00,
        &Unk_ov121_02294d68::func_ov121_02293cdc, &Unk_ov121_02294d68::func_ov121_02293c64,
        &Unk_ov121_02294d68::func_ov121_02293bd4, &Unk_ov121_02294d68::func_ov121_02293b44,
        &Unk_ov121_02294d68::func_ov121_02293b08, &Unk_ov121_02294d68::func_ov121_02293ac4,
        &Unk_ov121_02294d68::func_ov121_02293aa4, &Unk_ov121_02294d68::func_ov121_02293a7c,
        &Unk_ov121_02294d68::func_ov121_02293a5c, &Unk_ov121_02294d68::func_ov121_02293a38,
        &Unk_ov121_02294d68::func_ov121_022939e0};
    (this->*tbl[unk_8d])();
}

void Unk_ov121_02294d68::func_ov121_02294514() {
    if (func_ov002_022008fc(0)) {
        func_020021a0(6);
        func_ov002_02200a60(5);
    } else {
        func_ov002_02200840(6, 0, 0);
        unk_94 = (u8 *)func_ov002_02200920();
    }
}

void Unk_ov121_02294d68::func_ov121_02294550() {
    func_ov121_02292d18();
    func_ov002_022008c4(8, 0, 0, 0x30);
    func_ov002_02200a50(3);
    func_ov002_02200840(6, 0, 0);
    unk_94 = (u8 *)func_ov002_02200920();
}

void Unk_ov121_02294d68::func_ov121_02294590() {
    if (func_ov002_02200908(0)) {
        func_ov002_02200a60(2);
        func_ov121_02293978();
    }
    func_ov002_02200840(6, 0, 0);
    unk_94 = (u8 *)func_ov002_02200920();
}

void Unk_ov121_02294d68::func_ov121_022945c8() {
    func_ov121_02294308();
    func_ov121_02294280();
    func_ov121_02294194();
    unk_504.func_ov002_02202144();
    func_ov002_022008e0(8, 0, 0, 0x30);
    func_020020b8(6);
    func_ov002_02200a50(1);
    func_ov121_0229240c(1);
    func_ov002_02200840(6, 0, 0);
    unk_94 = (u8 *)func_ov002_02200920();
}
