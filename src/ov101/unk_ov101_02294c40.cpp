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
u32 func_0206ea6c();
void func_0206ecf8(u32 v);
void func_0206ed2c(u32 v);
void func_0208d538(void *p, u32 v);
u32 func_ov002_02201a70(void *p);
void func_ov002_02202200(void *p, void *q, s32 a);
void func_ov002_02202b68(void *p);
void func_ov002_02202c40(void *p);
void func_ov002_02202ca0(void *p);
void func_02089ad8(void *p, s32 x, s32 y);
void func_ov002_022006b0(void *p);
void func_ov002_022006b8(void *p);
void func_ov002_022006e4(void *p, u32 v);
s32 func_ov002_02201498(void *p, u32 v);
void func_ov002_022016e4(void *p, u32 v);
void func_ov002_02201700(void *p, u32 a, u32 b);
void func_ov002_0220160c(void *p, void *q, u32 v);
void func_ov002_0220229c(void *p, s32 a, s32 b);
void func_ov002_02202098(void *p, u32 v);
void func_ov002_02202064(void *p, u32 v);
void func_ov002_02202d00(void *p, u32 v);
void func_ov002_02202a78(void *p);
void func_ov002_02202a40(void *p, s32 a, s32 b);
void func_ov002_02202a18(void *p, s32 a, s32 b, u32 c);
void func_ov002_022029e8(void *p, s32 a, s32 b, u32 c, u32 d);
s32 func_ov002_022014a4(void *p);
s32 func_ov002_02202710(void *p);
s32 func_ov002_02202708(void *p);
s32 func_ov002_022028c8(void *p);
s32 func_ov002_022028a0(void *p);
BOOL func_ov002_0220125c(void *pad);
BOOL func_ov002_0220126c(void *pad);
BOOL func_ov002_0220127c(void *pad);
BOOL func_ov002_0220128c(void *pad);
u16 func_ov094_0229352c(void *p, u32 idx);
u8 func_ov094_02293504(void *p, u32 idx);
void func_ov094_022934d8(void *p, u32 idx);
void func_ov094_0229341c(void *p, u32 a, u32 b);
void func_ov094_0229313c(void *p, s32 a, s32 b);
void func_ov094_02293638(void *p, void *q, s32 a);
void func_ov094_02294420(void *p, void *q, s32 a);
}

class Unk_ov099_sub_02065cc8 {
public:
    ~Unk_ov099_sub_02065cc8();
    u32 unk_00[0xf4 / 4];
};

class Unk_ov099_sub_022043e8 {
public:
    ~Unk_ov099_sub_022043e8();
    u32 unk_00[0x108 / 4];
};

class Unk_ov099_sub_02202454 {
public:
    ~Unk_ov099_sub_02202454();
    u32 unk_00[0x2f4 / 4];
    u8 unk_2f4[0xc];
};

class Unk_ov099_sub_02202640 {
public:
    virtual ~Unk_ov099_sub_02202640();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    u32 unk_04[0x60 / 4];
};

class Unk_ov099_sub_022027c4 {
public:
    ~Unk_ov099_sub_022027c4();
    u32 unk_00[0x18 / 4];
};

class Unk_ov099_sub_022007e8 {
public:
    ~Unk_ov099_sub_022007e8();
    u32 unk_00[0xc0 / 4];
};

class Unk_ov099_sub_02292d50 {
public:
    ~Unk_ov099_sub_02292d50();
    u32 unk_00[0x160 / 4];
};

class Unk_ov099_sub_0229469c {
public:
    ~Unk_ov099_sub_0229469c();
    u32 unk_00[0x28 / 4];
};

class Unk_ov099_sub_02293a60 {
public:
    ~Unk_ov099_sub_02293a60();
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

// Vtable 0x02296b38
class Unk_ov101_02296b38 : public Unk_ov002_022044e4 {
public:
    virtual ~Unk_ov101_02296b38();

    void func_ov101_02294d4c(u32 mask);
    void func_ov101_02294d5c(u32 mask);
    BOOL func_ov101_02294d6c(u32 mask);
    BOOL func_ov101_02294d80(void *pad);
    void func_ov101_02294df0(void *pad);
    void func_ov101_02294eec(u32 idx, u32 v);
    void func_ov101_02294f40();
    void func_ov101_02294f6c();
    void func_ov101_02294fa0();
    void func_ov101_02294fdc();
    void func_ov101_02295008(u32 v);
    s32 func_ov101_02295078();
    void func_ov101_0229509c(u32 v);
    void func_ov101_022950e4(u32 v);
    void func_ov101_02295120();
    void func_ov101_02295140();
    void func_ov101_02295160();
    void func_ov101_02295194();
    void func_ov101_022951e0();
    void func_ov101_02295240();
    void func_ov101_02295290();
    void func_ov101_02295304();
    s32 func_ov101_02295328();
    s32 func_ov101_02295338();
    void func_ov101_0229537c();
    void func_ov101_022953cc(u32 idx);
    void func_ov101_02295404(u32 idx);
    void func_ov101_02295430(u32 idx);
    void func_ov101_02295498();
    void func_ov101_022954c0();
    void func_ov101_022954ec();
    void func_ov101_02295518();

    // out-of-range callees (declarations only)
    s32 func_ov101_02295a40();
    s32 func_ov101_02295790(u32 idx);
    s32 func_ov101_022957c8(u32 idx);
    BOOL func_ov101_022956e0(u32 idx);
    BOOL func_ov101_022958f8(u32 idx);
    s32 func_ov101_022958dc(u32 idx);
    void func_ov101_02295800(u32 idx, u32 a, u32 b);

    /* 0x91 */ u8 unk_91[3];
    /* 0x94 */ u32 unk_94;
    /* 0x98 */ u32 unk_98;
    /* 0x9c */ s32 unk_9c;
    /* 0xa0 */ s32 unk_a0;
    /* 0xa4 */ s32 unk_a4;
    /* 0xa8 */ s32 unk_a8;
    /* 0xac */ u16 unk_ac;
    /* 0xae */ u8 unk_ae;
    /* 0xaf */ u8 unk_af;
    /* 0xb0 */ u8 unk_b0;
    /* 0xb1 */ u8 unk_b1;
    /* 0xb2 */ u8 unk_b2;
    /* 0xb3 */ u8 unk_b3;
    /* 0xb4 */ u8 unk_b4;
    /* 0xb5 */ u8 unk_b5;
    /* 0xb6 */ u8 unk_b6;
    /* 0xb7 */ u8 unk_b7;
    /* 0xb8 */ u8 unk_b8;
    /* 0xb9 */ u8 unk_b9[0xf4 - 0xb9];
    /* 0xf4 */ Unk_ov099_sub_02293a60 unk_f4;
    /* 0xb54 */ Unk_ov099_sub_0229469c unk_b54;
    /* 0xb7c */ Unk_ov099_sub_02292d50 unk_b7c;
    /* 0xcdc */ u32 unk_cdc[0x1480 / 4];
    /* 0x215c */ Unk_ov099_sub_022007e8 unk_215c;
    /* 0x221c */ Unk_ov099_sub_022027c4 unk_221c;
    /* 0x2234 */ Unk_ov099_sub_02202640 unk_2234;
    /* 0x2298 */ Unk_ov099_sub_02202454 unk_2298;
    /* 0x2598 */ Unk_ov099_sub_022043e8 unk_2598;
    /* 0x26a0 */ Unk_ov099_sub_02065cc8 unk_26a0;
};

// ---------------------------------------------------------------------------------------------

Unk_ov101_02296b38::~Unk_ov101_02296b38() {}

void Unk_ov101_02296b38::func_ov101_02294d4c(u32 mask) { unk_94 = unk_94 & ~mask; }

void Unk_ov101_02296b38::func_ov101_02294d5c(u32 mask) { unk_94 = unk_94 | mask; }

BOOL Unk_ov101_02296b38::func_ov101_02294d6c(u32 mask) {
    if (unk_94 & mask) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov101_02296b38::func_ov101_02294d80(void *pad) {
    u8 old = unk_b3;
    func_ov101_02294d4c(0x18);
    if (pad == 0) {
        return FALSE;
    }
    if (func_ov101_022958f8(unk_b3)) {
        func_ov101_02294df0(pad);
    } else if (unk_b3 == 0xf) {
        if (func_ov002_0220128c(pad)) {
            unk_b3 = 0xe;
            func_ov002_02202c40(&unk_2234);
        }
    }
    if (old != unk_b3) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov101_02296b38::func_ov101_02294df0(void *pad) {
    s32 col = unk_b3;
    s32 row = 0;
    while (col >= 5) {
        col -= 5;
        row++;
    }
    if (func_ov002_0220126c(pad)) {
        if (!func_ov002_0220128c(pad) || row == 0) {
            if (col == 0) {
                unk_b3 = unk_b3 + 4;
                func_ov101_02294d5c(8);
            } else {
                unk_b3 = unk_b3 - 1;
            }
        }
    } else if (func_ov002_0220125c(pad)) {
        if (!func_ov002_0220127c(pad)) {
            if (col == 4) {
                unk_b3 = unk_b3 - 4;
                func_ov101_02294d5c(0x10);
            } else {
                unk_b3 = unk_b3 + 1;
            }
        }
    }
    if (!func_ov101_02294d6c(0x18)) {
        if (func_ov002_0220128c(pad)) {
            if (row > 0) {
                unk_b3 = unk_b3 - 5;
            }
        } else if (func_ov002_0220127c(pad)) {
            if (row < 2) {
                unk_b3 = unk_b3 + 5;
            } else {
                unk_b3 = 0xf;
                func_ov002_02202ca0(&unk_2234);
            }
        }
    }
}

void Unk_ov101_02296b38::func_ov101_02294eec(u32 idx, u32 v) {
    unk_b4 = idx;
    func_ov002_022016e4(&unk_2298.unk_2f4, 1);
    if (func_ov101_022958f8(idx)) {
        func_ov101_02294f40();
        func_ov101_02295304();
        if (v == 0) {
            func_ov002_022006e4(&unk_215c, 1);
        }
        func_ov101_02295008(v);
    }
}

void Unk_ov101_02296b38::func_ov101_02294f40() {
    func_ov002_02201700(&unk_2298.unk_2f4, func_0206ea6c(), 0);
    func_ov002_02201700(&unk_2298.unk_2f4, 2, 1);
}

void Unk_ov101_02296b38::func_ov101_02294f6c() {
    func_0206ecf8(0);
    unk_8c = 3;
    func_ov002_02200a60(1);
    func_ov002_022006e4(&unk_215c, 1);
    func_ov101_02295304();
}

void Unk_ov101_02296b38::func_ov101_02294fa0() {
    func_0206ed2c(unk_b4);
    func_0206ecf8(1);
    unk_8c = 3;
    func_ov002_02200a60(1);
    func_ov002_022006e4(&unk_215c, 1);
    func_ov101_02295304();
}

void Unk_ov101_02296b38::func_ov101_02294fdc() {
    unk_b7 = 1;
    func_ov101_02295160();
    func_ov002_02202064(&unk_2298, 0);
    func_ov002_02200a58(0x15);
}

void Unk_ov101_02296b38::func_ov101_02295008(u32 v) {
    func_ov002_0220160c(&unk_2298, &unk_2298.unk_2f4, 0);
    s32 a = func_ov101_022957c8(unk_b4);
    s32 b = func_ov101_02295790(unk_b4);
    if (v) {
        func_ov002_02202200(&unk_2298, &unk_215c, b);
    } else {
        func_ov002_0220229c(&unk_2298, a, b);
    }
    func_ov002_02202098(&unk_2298, 0);
    func_ov002_02200a58(0x13);
}

void Unk_ov101_02296b38::func_ov101_0229509c(u32 v) {
    func_ov002_022006e4(&unk_215c, 1);
    unk_b6 = unk_8d;
    unk_b5 = v;
    func_ov002_02202d00(&unk_2234, 6);
    func_ov002_02200a58(0x10);
}

void Unk_ov101_02296b38::func_ov101_022950e4(u32 v) {
    func_ov002_022006e4(&unk_215c, 1);
    unk_b5 = v;
    func_ov002_02202d00(&unk_2234, 5);
    func_ov002_02200a58(0xf);
}

void Unk_ov101_02296b38::func_ov101_02295120() {
    func_ov002_02202b68(&unk_2234);
    func_ov002_02200a58(0xb);
}

void Unk_ov101_02296b38::func_ov101_02295140() {
    func_ov002_02202a78(&unk_2234);
    unk_2234.vfunc_0c();
}

void Unk_ov101_02296b38::func_ov101_02295160() {
    s32 a = func_ov101_02295338();
    s32 b = func_ov101_02295328();
    func_ov002_02202a40(&unk_2234, a, b);
    func_ov002_02202d00(&unk_2234, 1);
}

void Unk_ov101_02296b38::func_ov101_02295194() {
    unk_b8 = 0;
    s32 a = func_ov002_022014a4(&unk_2298);
    s32 b = func_ov002_02201498(&unk_2298, unk_b8);
    func_ov002_02202a40(&unk_2234, a, b);
    func_ov002_02202d00(&unk_2234, 7);
}

void Unk_ov101_02296b38::func_ov101_022951e0() {
    unk_b7 = 1;
    unk_b8 = func_ov002_02201a70(&unk_2298);
    s32 a = func_ov002_022014a4(&unk_2298);
    s32 b = func_ov002_02201498(&unk_2298, unk_b8);
    func_ov002_02202a40(&unk_2234, a, b);
    func_0208d538(&unk_2234, 8);
    func_ov002_02200a58(0x14);
}

void Unk_ov101_02296b38::func_ov101_02295240() {
    s32 a = func_ov002_022014a4(&unk_2298);
    s32 b = func_ov002_02201498(&unk_2298, unk_b8);
    func_ov002_02202a18(&unk_2234, a, b, 2);
    unk_b6 = unk_8d;
    func_ov002_02200a58(0xa);
}

void Unk_ov101_02296b38::func_ov101_02295290() {
    if (func_ov101_02294d6c(4)) {
        s32 a = func_ov101_02295338();
        s32 b = func_ov101_02295328();
        func_ov002_02202a40(&unk_2234, a, b);
        func_ov101_02294d4c(4);
    } else {
        s32 a = func_ov101_02295338();
        s32 b = func_ov101_02295328();
        func_ov002_022029e8(&unk_2234, a, b, 3, 1);
        unk_b6 = unk_8d;
        func_ov002_02200a58(0xa);
    }
}

void Unk_ov101_02296b38::func_ov101_02295304() {
    func_ov002_02202d00(&unk_2234, 0);
    unk_2234.vfunc_0c();
}

s32 Unk_ov101_02296b38::func_ov101_02295328() { return func_ov101_02295790(unk_b3); }

s32 Unk_ov101_02296b38::func_ov101_02295338() {
    s32 r = func_ov101_022957c8(unk_b3);
    if (func_ov101_02294d6c(0x10)) {
        r += 0x100;
    } else if (func_ov101_02294d6c(8)) {
        r -= 0x100;
    }
    return r + 8;
}

void Unk_ov101_02296b38::func_ov101_0229537c() {
    s32 a = func_ov101_02295338();
    s32 b = func_ov101_02295328();
    func_ov002_02202a40(&unk_2234, a, b);
    if (unk_b3 == 0xf) {
        func_ov002_02202d00(&unk_2234, 7);
    } else {
        func_ov002_02202d00(&unk_2234, 1);
    }
    func_ov101_02295140();
}

void Unk_ov101_02296b38::func_ov101_022953cc(u32 idx) {
    if (unk_af == 1) {
        u16 a = unk_ac;
        u8 b = unk_ae;
        func_ov101_02295430(idx);
        func_ov101_02295800(idx, a, b);
    }
}

void Unk_ov101_02296b38::func_ov101_02295404(u32 idx) {
    if (unk_af == 1) {
        func_ov101_02295800(idx, unk_ac, unk_ae);
    }
    unk_af = 0;
}

void Unk_ov101_02296b38::func_ov101_02295430(u32 idx) {
    if (func_ov101_022958f8(idx)) {
        s32 r4 = func_ov101_022958dc(idx);
        unk_af = 1;
        unk_ac = func_ov094_0229352c(&unk_f4, r4);
        unk_ae = func_ov094_02293504(&unk_f4, r4);
        func_ov094_022934d8(&unk_f4, r4);
        func_ov094_0229341c(&unk_f4, unk_ac, unk_ae);
    }
}

void Unk_ov101_02296b38::func_ov101_02295498() {
    unk_a4 = func_ov002_02202710(&unk_221c);
    unk_a8 = func_ov002_02202708(&unk_221c);
}

void Unk_ov101_02296b38::func_ov101_022954c0() {
    unk_a4 = func_ov002_022028c8(&unk_2234) - 2;
    unk_a8 = func_ov002_022028a0(&unk_2234) - 4;
}

void Unk_ov101_02296b38::func_ov101_022954ec() {
    unk_a4 = unk_9c + data_021ef5f0;
    unk_a8 = unk_a0 + data_021ef5ec;
}

void Unk_ov101_02296b38::func_ov101_02295518() {
    if (func_ov101_022958f8(unk_b3)) {
        if (func_ov101_022956e0(unk_b3)) {
            func_ov002_022006b0(&unk_215c);
        } else {
            unk_b1 = unk_b3;
            func_ov002_022006b8(&unk_215c);
        }
    } else {
        func_ov002_022006b0(&unk_215c);
    }
}

s32 Unk_ov101_02296b38::func_ov101_02295078() {
    switch (unk_b7) {
    case 0:
        func_ov101_02294fa0();
        break;
    case 1:
    default:
        func_ov101_02295a40();
        break;
    }
}
