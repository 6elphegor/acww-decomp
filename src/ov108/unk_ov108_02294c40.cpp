#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef vfunc_08
#undef vfunc_14

extern "C" {
extern u8 data_021ef5f0;
extern u8 data_021ef5ec;
BOOL func_0206ef00();
void func_02089ad8(void *p, s32 x, s32 y);
void func_0208d538(void *p, s32 v);
void func_02065e70(void *a, void *b);
void func_ov002_022006b0(void *p);
void func_ov002_022006b8(void *p);
void func_ov002_022006e4(void *p, u32 v);
s32 func_ov002_02201498(void *p, u32 v);
s32 func_ov002_022014a4(void *p);
u8 func_ov002_02201a70(void *p);
void func_ov002_022016e4(void *p, u32 v);
void func_ov002_02201700(void *p, u32 a, u32 b);
void func_ov002_0220160c(void *p, void *q, u32 v);
void func_ov002_02202200(void *p, void *q, s32 v);
void func_ov002_0220229c(void *p, s32 a, s32 b);
void func_ov002_02202098(void *p, u32 v);
void func_ov002_02202064(void *p, u32 v);
void func_ov002_02202d00(void *p, u32 v);
void func_ov002_02202b68(void *p);
void func_ov002_02202a78(void *p);
void func_ov002_02202a40(void *p, s32 a, s32 b);
void func_ov002_02202a18(void *p, s32 a, s32 b, u32 c);
void func_ov002_022029e8(void *p, s32 a, s32 b, u32 c, u32 d);
void func_ov002_02202ca0(void *p);
void func_ov002_02202c40(void *p);
s32 func_ov002_02202710(void *p);
s32 func_ov002_02202708(void *p);
s32 func_ov002_022028c8(void *p);
s32 func_ov002_022028a0(void *p);
BOOL func_ov002_0220125c(void *pad);
BOOL func_ov002_0220126c(void *pad);
BOOL func_ov002_0220127c(void *pad);
BOOL func_ov002_0220128c(void *pad);
void *func_ov094_0229433c(void *p, u32 v);
void func_ov094_022942f4(void *p, u32 v);
void func_ov094_0229405c(void *p, s32 a, s32 b, void *c);
void func_ov094_02294420(void *p, void *q, s32 a);
}

class Unk_ov108_sub_02065cc8 {
public:
    ~Unk_ov108_sub_02065cc8();
    u32 unk_00[0xf4 / 4];
};

class Unk_ov108_sub_02203968 {
public:
    ~Unk_ov108_sub_02203968();
    u32 unk_00[0x164 / 4];
};

class Unk_ov108_sub_022043e8 {
public:
    ~Unk_ov108_sub_022043e8();
    u32 unk_00[0x108 / 4];
};

class Unk_ov108_sub_02202454 {
public:
    ~Unk_ov108_sub_02202454();
    u32 unk_00[0x2f4 / 4];
    u8 unk_2f4[0xc];
};

class Unk_ov108_sub_02202640 {
public:
    virtual ~Unk_ov108_sub_02202640();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    u32 unk_04[0x60 / 4];
};

class Unk_ov108_sub_022027c4 {
public:
    ~Unk_ov108_sub_022027c4();
    u32 unk_00[0x18 / 4];
};

class Unk_ov108_sub_022007e8 {
public:
    ~Unk_ov108_sub_022007e8();
    u32 unk_00[0xc0 / 4];
};

class Unk_ov108_sub_02292d50 {
public:
    ~Unk_ov108_sub_02292d50();
    u32 unk_00[0x160 / 4];
};

class Unk_ov108_sub_0229469c {
public:
    ~Unk_ov108_sub_0229469c();
    u32 unk_00[0x28 / 4];
};

class Unk_ov108_sub_02293a60 {
public:
    ~Unk_ov108_sub_02293a60();
    u32 unk_00[0xa60 / 4];
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

// Vtable 0x02296b58
class Unk_ov108_02296b58 : public Unk_ov002_022044e4 {
public:
    virtual ~Unk_ov108_02296b58();

    void func_ov108_02294d7c(u32 mask);
    void func_ov108_02294d8c(u32 mask);
    BOOL func_ov108_02294d9c(u32 mask);
    BOOL func_ov108_02294db0(void *pad, u32 x);
    void func_ov108_02294e18(void *pad, u32 x);
    void func_ov108_02294ec4(u32 idx, u32 x);
    void func_ov108_02294f28();
    void func_ov108_02294f58(u32 x);
    void func_ov108_02294fc8();
    void func_ov108_02294fec(u32 v);
    void func_ov108_02295038(u32 v);
    void func_ov108_02295074();
    void func_ov108_02295094();
    void func_ov108_022950b4();
    void func_ov108_022950e8();
    void func_ov108_02295134();
    void func_ov108_02295198();
    void func_ov108_022951ec();
    void func_ov108_02295254();
    s32 func_ov108_02295278();
    s32 func_ov108_02295288();
    void func_ov108_022952d0();
    void func_ov108_02295324(u32 a);
    void func_ov108_02295364(u32 a);
    void func_ov108_02295388(u32 a);
    void func_ov108_022953d8();
    void func_ov108_02295400();
    void func_ov108_0229542c();
    void func_ov108_02295458();
    void func_ov108_02295498();
    void func_ov108_022954ec();

    // out-of-range callees (declarations only)
    s32 func_ov108_02295830(u32 idx);
    s32 func_ov108_022956e0(u32 idx);
    s32 func_ov108_022956a4(u32 idx);
    s32 func_ov108_0229581c(u32 idx);
    s32 func_ov108_02295614(u32 idx);
    void func_ov108_02295878();
    void func_ov108_02295a0c();
    void func_ov108_0229571c(u32 idx);
    void func_ov108_02295750(u32 a, void *p);

    /* 0x91 */ u8 unk_91[3];
    /* 0x94 */ u32 unk_94;
    /* 0x98 */ u32 unk_98;
    /* 0x9c */ s32 unk_9c;
    /* 0xa0 */ s32 unk_a0;
    /* 0xa4 */ s32 unk_a4;
    /* 0xa8 */ s32 unk_a8;
    /* 0xac */ Unk_ov108_sub_02065cc8 unk_ac;
    /* 0x1a0 */ Unk_ov108_sub_02065cc8 unk_1a0;
    /* 0x294 */ u8 unk_294;
    /* 0x295 */ u8 unk_295;
    /* 0x296 */ u8 unk_296;
    /* 0x297 */ u8 unk_297;
    /* 0x298 */ u8 unk_298;
    /* 0x299 */ u8 unk_299;
    /* 0x29a */ u8 unk_29a;
    /* 0x29b */ u8 unk_29b;
    /* 0x29c */ u8 unk_29c;
    /* 0x29d */ u8 unk_29d;
    /* 0x29e */ u8 unk_29e[0x3a];
    /* 0x2d8 */ Unk_ov108_sub_02293a60 unk_2d8;
    /* 0xd38 */ Unk_ov108_sub_0229469c unk_d38;
    /* 0xd60 */ Unk_ov108_sub_02292d50 unk_d60;
    /* 0xec0 */ u32 unk_ec0[0x1480 / 4];
    /* 0x2340 */ Unk_ov108_sub_022007e8 unk_2340;
    /* 0x2400 */ Unk_ov108_sub_022027c4 unk_2400;
    /* 0x2418 */ Unk_ov108_sub_02202640 unk_2418;
    /* 0x247c */ Unk_ov108_sub_02202454 unk_247c;
    /* 0x277c */ Unk_ov108_sub_022043e8 unk_277c;
    /* 0x2884 */ Unk_ov108_sub_02203968 unk_2884;
};

// ---------------------------------------------------------------------------------------------

Unk_ov108_02296b58::~Unk_ov108_02296b58() {}

void Unk_ov108_02296b58::func_ov108_02294d7c(u32 mask) { unk_94 = unk_94 & ~mask; }

void Unk_ov108_02296b58::func_ov108_02294d8c(u32 mask) { unk_94 = unk_94 | mask; }

BOOL Unk_ov108_02296b58::func_ov108_02294d9c(u32 mask) {
    if (unk_94 & mask) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov108_02296b58::func_ov108_02294db0(void *pad, u32 x) {
    u8 old = unk_298;
    func_ov108_02294d7c(0x30);
    if (pad == 0) {
        return FALSE;
    }
    if (func_ov108_02295830(unk_298)) {
        func_ov108_02294e18(pad, x);
    } else if (unk_298 == 0x15) {
        if (func_ov002_0220128c(pad)) {
            unk_298 = 0x13;
        }
    }
    if (old != unk_298) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov108_02296b58::func_ov108_02294e18(void *pad, u32 x) {
    s32 r4 = unk_298 - 0xb;
    s32 r6 = r4 >> 1;
    if (func_ov002_0220126c(pad)) {
        if ((r4 & 1) > 0) {
            unk_298 = unk_298 - 1;
        }
    } else if (func_ov002_0220125c(pad)) {
        if ((r4 & 1) < 1) {
            unk_298 = unk_298 + 1;
        }
    }
    if (func_ov108_02295830(unk_298)) {
        if (!func_ov108_02294d9c(0x30)) {
            if (func_ov002_0220128c(pad)) {
                if (r6 > 0) {
                    unk_298 = unk_298 - 2;
                }
            } else if (func_ov002_0220127c(pad)) {
                if (r6 < 4) {
                    unk_298 = unk_298 + 2;
                } else {
                    unk_298 = 0x15;
                }
            }
        }
    }
}

void Unk_ov108_02296b58::func_ov108_02294ec4(u32 idx, u32 x) {
    unk_299 = idx;
    func_ov002_022016e4(&unk_247c.unk_2f4, 1);
    func_ov108_0229571c(idx);
    func_ov002_02201700(&unk_247c.unk_2f4, 0xd, 0);
    func_ov002_02201700(&unk_247c.unk_2f4, 2, 1);
    func_ov108_02295254();
    if (x == 0) {
        func_ov002_022006e4(&unk_2340, 1);
    }
    func_ov108_02294f58(x);
}

void Unk_ov108_02296b58::func_ov108_02294f28() {
    unk_29c = 1;
    func_ov108_022950b4();
    func_ov002_02202064(&unk_247c, 0);
    func_ov002_02200a58(0x15);
}

void Unk_ov108_02296b58::func_ov108_02294f58(u32 x) {
    func_ov002_0220160c(&unk_247c, &unk_247c.unk_2f4, 0);
    s32 a = func_ov108_022956e0(unk_299);
    s32 b = func_ov108_022956a4(unk_299);
    if (x != 0) {
        func_ov002_02202200(&unk_247c, &unk_2340, b);
    } else {
        func_ov002_0220229c(&unk_247c, a, b);
    }
    func_ov002_02202098(&unk_247c, 0);
    func_ov002_02200a58(0x13);
}

void Unk_ov108_02296b58::func_ov108_02294fc8() {
    switch (unk_29c) {
    case 0:
        func_ov108_02295878();
        break;
    case 1:
    default:
        func_ov108_02295a0c();
        break;
    }
}

void Unk_ov108_02296b58::func_ov108_02294fec(u32 v) {
    func_ov002_022006e4(&unk_2340, 1);
    unk_29b = unk_8d;
    unk_29a = v;
    func_ov002_02202d00(&unk_2418, 6);
    func_ov002_02200a58(0x10);
}

void Unk_ov108_02296b58::func_ov108_02295038(u32 v) {
    func_ov002_022006e4(&unk_2340, 1);
    unk_29a = v;
    func_ov002_02202d00(&unk_2418, 5);
    func_ov002_02200a58(0xf);
}

void Unk_ov108_02296b58::func_ov108_02295074() {
    func_ov002_02202b68(&unk_2418);
    func_ov002_02200a58(0xb);
}

void Unk_ov108_02296b58::func_ov108_02295094() {
    func_ov002_02202a78(&unk_2418);
    unk_2418.vfunc_0c();
}

void Unk_ov108_02296b58::func_ov108_022950b4() {
    s32 a = func_ov108_02295288();
    s32 b = func_ov108_02295278();
    func_ov002_02202a40(&unk_2418, a, b);
    func_ov002_02202d00(&unk_2418, 1);
}

void Unk_ov108_02296b58::func_ov108_022950e8() {
    unk_29d = 0;
    s32 a = func_ov002_022014a4(&unk_247c);
    s32 b = func_ov002_02201498(&unk_247c, unk_29d);
    func_ov002_02202a40(&unk_2418, a, b);
    func_ov002_02202d00(&unk_2418, 7);
}

void Unk_ov108_02296b58::func_ov108_02295134() {
    unk_29c = 1;
    unk_29d = func_ov002_02201a70(&unk_247c);
    s32 a = func_ov002_022014a4(&unk_247c);
    s32 b = func_ov002_02201498(&unk_247c, unk_29d);
    func_ov002_02202a40(&unk_2418, a, b);
    func_0208d538(&unk_2418, 8);
    func_ov002_02200a58(0x14);
}

void Unk_ov108_02296b58::func_ov108_02295198() {
    s32 a = func_ov002_022014a4(&unk_247c);
    s32 b = func_ov002_02201498(&unk_247c, unk_29d);
    func_ov002_02202a18(&unk_2418, a, b, 2);
    unk_29b = unk_8d;
    func_ov002_02200a58(0xa);
}

void Unk_ov108_02296b58::func_ov108_022951ec() {
    if (unk_298 == 0x15) {
        func_ov002_02202ca0(&unk_2418);
    } else {
        func_ov002_02202c40(&unk_2418);
    }
    s32 a = func_ov108_02295288();
    s32 b = func_ov108_02295278();
    func_ov002_022029e8(&unk_2418, a, b, 3, 1);
    unk_29b = unk_8d;
    func_ov002_02200a58(0xa);
}

void Unk_ov108_02296b58::func_ov108_02295254() {
    func_ov002_02202d00(&unk_2418, 0);
    unk_2418.vfunc_0c();
}

s32 Unk_ov108_02296b58::func_ov108_02295278() { return func_ov108_022956a4(unk_298); }

s32 Unk_ov108_02296b58::func_ov108_02295288() {
    s32 r = func_ov108_022956e0(unk_298);
    if (func_ov108_02294d9c(0x20)) {
        r += 0x100;
    } else if (func_ov108_02294d9c(0x10)) {
        r -= 0x100;
    }
    return r + 8;
}

void Unk_ov108_02296b58::func_ov108_022952d0() {
    s32 a = func_ov108_02295288();
    s32 b = func_ov108_02295278();
    func_ov002_02202a40(&unk_2418, a, b);
    if (unk_298 == 0x15) {
        func_ov002_02202d00(&unk_2418, 7);
    } else {
        func_ov002_02202d00(&unk_2418, 1);
    }
    func_ov108_02295094();
}

void Unk_ov108_02296b58::func_ov108_02295324(u32 a) {
    if (unk_294 == 1) {
        func_02065e70(&unk_1a0, &unk_ac);
        func_ov108_02295388(a);
        func_ov108_02295750(a, &unk_1a0);
    }
}

void Unk_ov108_02296b58::func_ov108_02295364(u32 a) {
    if (unk_294 == 1) {
        func_ov108_02295750(a, &unk_ac);
    }
    unk_294 = 0;
}

void Unk_ov108_02296b58::func_ov108_02295388(u32 a) {
    if (func_ov108_02295830(a)) {
        s32 r4 = func_ov108_0229581c(a);
        unk_294 = 1;
        func_02065e70(&unk_ac, func_ov094_0229433c(&unk_d38, r4));
        func_ov094_022942f4(&unk_d38, r4);
    }
}

void Unk_ov108_02296b58::func_ov108_022953d8() {
    unk_a4 = func_ov002_02202710(&unk_2400);
    unk_a8 = func_ov002_02202708(&unk_2400);
}

void Unk_ov108_02296b58::func_ov108_02295400() {
    unk_a4 = func_ov002_022028c8(&unk_2418) - 2;
    unk_a8 = func_ov002_022028a0(&unk_2418) - 4;
}

void Unk_ov108_02296b58::func_ov108_0229542c() {
    unk_a4 = unk_9c + data_021ef5f0;
    unk_a8 = unk_a0 + data_021ef5ec;
}

void Unk_ov108_02296b58::func_ov108_02295458() {
    if (!func_ov108_02294d9c(0x40)) {
        if (unk_294 != 0) {
            if (unk_294 == 1) {
                func_ov094_0229405c(&unk_d38, unk_a4, unk_a8, &unk_ac);
            }
        }
    }
}

void Unk_ov108_02296b58::func_ov108_02295498() {
    if (func_ov108_02295830(unk_298)) {
        if (func_ov108_02295614(unk_298)) {
            func_ov002_022006b0(&unk_2340);
        } else {
            unk_296 = unk_298;
            func_ov002_022006b8(&unk_2340);
        }
    } else {
        func_ov002_022006b0(&unk_2340);
    }
}

void Unk_ov108_02296b58::func_ov108_022954ec() {
    s32 a = func_ov108_022956e0(unk_296) - 0x6d;
    s32 b = func_ov108_022956a4(unk_296) - 0x78;
    if (func_0206ef00()) {
        b -= 8;
    }
    func_02089ad8(&unk_2340, a, b);
    if (func_ov108_02295830(unk_296)) {
        s32 c = func_ov108_0229581c(unk_296);
        func_ov094_02294420(&unk_d38, &unk_2340, c);
    }
}
