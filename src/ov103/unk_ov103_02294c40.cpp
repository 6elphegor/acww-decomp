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
s32 func_02065578(s32 v);
u32 func_020655d0(s32 v);
void func_02065e70(void *dst, void *src);
void func_0208e13c(void *p, s32 v);
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
void func_ov002_02202af0(void *p);
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
s32 func_ov094_0229433c(void *p, s32 a);
void func_ov094_022942f4(void *p, s32 a);
void func_ov094_0229405c(void *p, s32 a, s32 b, void *q);
}

class Unk_ov103_sub_02203df0 {
public:
    ~Unk_ov103_sub_02203df0();
    u32 unk_00[0x70 / 4];
};

class Unk_ov103_sub_0206d40c {
public:
    ~Unk_ov103_sub_0206d40c();
    u32 unk_00[0x210 / 4];
};

class Unk_ov103_sub_02065cc8 {
public:
    ~Unk_ov103_sub_02065cc8();
    u32 unk_00[0xf4 / 4];
};

class Unk_ov103_sub_022043e8 {
public:
    ~Unk_ov103_sub_022043e8();
    u32 unk_00[0x108 / 4];
};

class Unk_ov103_sub_02202454 {
public:
    ~Unk_ov103_sub_02202454();
    u32 unk_00[0x2f4 / 4];
    u8 unk_2f4[0xc];
};

class Unk_ov103_sub_02202640 {
public:
    virtual ~Unk_ov103_sub_02202640();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    u32 unk_04[0x60 / 4];
};

class Unk_ov103_sub_022027c4 {
public:
    ~Unk_ov103_sub_022027c4();
    u32 unk_00[0x18 / 4];
};

class Unk_ov103_sub_022007e8 {
public:
    ~Unk_ov103_sub_022007e8();
    u32 unk_00[0xc0 / 4];
};

class Unk_ov103_sub_02292d50 {
public:
    ~Unk_ov103_sub_02292d50();
    u32 unk_00[0x160 / 4];
};

class Unk_ov103_sub_0229469c {
public:
    ~Unk_ov103_sub_0229469c();
    u32 unk_00[0x28 / 4];
};

class Unk_ov103_sub_02293a60 {
public:
    ~Unk_ov103_sub_02293a60();
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

// Vtable 0x02296da0
class Unk_ov103_02296da0 : public Unk_ov002_022044e4 {
public:
    virtual ~Unk_ov103_02296da0();

    void func_ov103_02294d94(u32 mask);
    void func_ov103_02294da4(u32 mask);
    BOOL func_ov103_02294db4(u32 mask);
    void func_ov103_02294dcc();
    void func_ov103_02294dec();
    BOOL func_ov103_02294e10(void *pad, u32 x);
    void func_ov103_02294e60(void *pad, u32 x);
    void func_ov103_02294f04(u32 idx);
    void func_ov103_02294fbc();
    void func_ov103_02294fec();
    s32 func_ov103_02295048();
    void func_ov103_02295078(u32 v);
    void func_ov103_022950c4(u32 v);
    void func_ov103_02295100();
    void func_ov103_02295120();
    void func_ov103_02295140();
    void func_ov103_02295160();
    void func_ov103_02295194();
    void func_ov103_022951e0();
    void func_ov103_02295234();
    void func_ov103_022952ac();
    s32 func_ov103_022952d0();
    s32 func_ov103_022952e0();
    void func_ov103_02295328();
    void func_ov103_02295364(u32 idx);
    void func_ov103_022953a8(u32 idx);
    void func_ov103_022953d0(u32 idx);
    void func_ov103_02295424();
    void func_ov103_02295454();
    void func_ov103_02295488();
    void func_ov103_022954c0();
    void func_ov103_02295508();

    // out-of-range callees (declarations only)
    BOOL func_ov103_022958bc(u32 idx);
    s32 func_ov103_022958a8(u32 idx);
    BOOL func_ov103_022956c8(u32 idx);
    s32 func_ov103_02295740(u32 idx);
    s32 func_ov103_02295774(u32 idx);
    s32 func_ov103_022957a8(u32 idx);
    s32 func_ov103_022957dc(u32 idx, void *p);
    s32 func_ov103_02295a60();

    /* 0x91 */ u8 unk_91[3];
    /* 0x94 */ u32 unk_94;
    /* 0x98 */ u8 unk_98[0x34];
    /* 0xcc */ Unk_ov103_sub_02293a60 unk_cc;
    /* 0xb2c */ Unk_ov103_sub_0229469c unk_b2c;
    /* 0xb54 */ Unk_ov103_sub_02292d50 unk_b54;
    /* 0xcb4 */ u32 unk_cb4[0x1480 / 4];
    /* 0x2134 */ Unk_ov103_sub_022007e8 unk_2134;
    /* 0x21f4 */ Unk_ov103_sub_022027c4 unk_21f4;
    /* 0x220c */ Unk_ov103_sub_02202640 unk_220c;
    /* 0x2270 */ Unk_ov103_sub_02202454 unk_2270;
    /* 0x2570 */ Unk_ov103_sub_022043e8 unk_2570;
    /* 0x2678 */ Unk_ov103_sub_0206d40c unk_2678;
    /* 0x2888 */ Unk_ov103_sub_02203df0 unk_2888;
    /* 0x28f8 */ u32 unk_28f8;
    /* 0x28fc */ u32 unk_28fc;
    /* 0x2900 */ s32 unk_2900;
    /* 0x2904 */ s32 unk_2904;
    /* 0x2908 */ s32 unk_2908;
    /* 0x290c */ s32 unk_290c;
    /* 0x2910 */ Unk_ov103_sub_02065cc8 unk_2910;
    /* 0x2a04 */ Unk_ov103_sub_02065cc8 unk_2a04;
    /* 0x2af8 */ u8 unk_2af8;
    /* 0x2af9 */ u8 unk_2af9;
    /* 0x2afa */ u8 unk_2afa;
    /* 0x2afb */ u8 unk_2afb;
    /* 0x2afc */ u8 unk_2afc;
    /* 0x2afd */ u8 unk_2afd;
    /* 0x2afe */ u8 unk_2afe;
    /* 0x2aff */ u8 unk_2aff;
    /* 0x2b00 */ u8 unk_2b00;
    /* 0x2b01 */ u8 unk_2b01;
};

// ---------------------------------------------------------------------------------------------

Unk_ov103_02296da0::~Unk_ov103_02296da0() {}

void Unk_ov103_02296da0::func_ov103_02294d94(u32 mask) { unk_28f8 = unk_28f8 & ~mask; }

void Unk_ov103_02296da0::func_ov103_02294da4(u32 mask) { unk_28f8 = unk_28f8 | mask; }

BOOL Unk_ov103_02296da0::func_ov103_02294db4(u32 mask) {
    if (unk_28f8 & mask) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov103_02296da0::func_ov103_02294dcc() {
    func_ov002_02200a58(0x18);
    func_0208e13c(&unk_2888, 2);
}

void Unk_ov103_02296da0::func_ov103_02294dec() {
    func_ov002_02200a50(3);
    func_ov002_02200a60(1);
    func_ov103_02294da4(0x100);
}

BOOL Unk_ov103_02296da0::func_ov103_02294e10(void *pad, u32 x) {
    u8 old = unk_2afc;
    func_ov103_02294d94(0x30);
    if (pad == 0) {
        return FALSE;
    }
    if (func_ov103_022958bc(unk_2afc)) {
        func_ov103_02294e60(pad, x);
    }
    if (old != unk_2afc) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov103_02296da0::func_ov103_02294e60(void *pad, u32 x) {
    s32 col = unk_2afc - 0xb;
    s32 row = col >> 1;
    if (func_ov002_0220126c(pad)) {
        if ((col & 1) > 0) {
            unk_2afc = unk_2afc - 1;
        }
    } else if (func_ov002_0220125c(pad)) {
        if ((col & 1) < 1) {
            unk_2afc = unk_2afc + 1;
        }
    }
    if (func_ov103_022958bc(unk_2afc)) {
        if (!func_ov103_02294db4(0x30)) {
            if (func_ov002_0220128c(pad)) {
                if (row > 0) {
                    unk_2afc = unk_2afc - 2;
                }
            } else if (func_ov002_0220127c(pad)) {
                if (row < 4) {
                    unk_2afc = unk_2afc + 2;
                }
            }
        }
    }
}

void Unk_ov103_02296da0::func_ov103_02294f04(u32 idx) {
    unk_2afd = idx;
    func_ov002_022016e4(&unk_2270.unk_2f4, 3);
    s32 r6 = func_ov103_022957a8(idx);
    if (func_0206ef00()) {
        func_ov002_02201700(&unk_2270.unk_2f4, 0, 0);
    }
    s32 r4 = func_02065578(r6);
    if (r4 != 0) {
        if (r4 == 7) {
            func_ov002_02201700(&unk_2270.unk_2f4, 0x17, 1);
        } else {
            func_ov002_02201700(&unk_2270.unk_2f4, 0x14, 1);
        }
    }
    if (func_020655d0(r6) != 0xfff1 && r4 == 3 || r4 == 6 || r4 == 1) {
        func_ov002_02201700(&unk_2270.unk_2f4, 0x15, 2);
    }
    func_ov002_02201700(&unk_2270.unk_2f4, 2, 3);
    func_ov103_022952ac();
    func_ov002_022006e4(&unk_2134, 1);
    func_ov103_02294fec();
}

void Unk_ov103_02296da0::func_ov103_02294fbc() {
    unk_2b00 = 3;
    func_ov103_02295160();
    func_ov002_02202064(&unk_2270, 0);
    func_ov002_02200a58(0x16);
}

void Unk_ov103_02296da0::func_ov103_02294fec() {
    func_ov002_0220160c(&unk_2270, &unk_2270.unk_2f4, 0);
    s32 a = func_ov103_02295774(unk_2afd);
    s32 b = func_ov103_02295740(unk_2afd);
    func_ov002_0220229c(&unk_2270, a, b);
    func_ov002_02202098(&unk_2270, 0);
    func_ov002_02200a58(0x14);
}

s32 Unk_ov103_02296da0::func_ov103_02295048() {
    switch (unk_2b00) {
    case 0:
        func_ov103_02295100();
        break;
    case 1:
        func_ov103_02294dec();
        break;
    case 3:
    default:
        func_ov103_02295a60();
        break;
    }
}

void Unk_ov103_02296da0::func_ov103_02295078(u32 v) {
    func_ov002_022006e4(&unk_2134, 1);
    unk_2aff = unk_8d;
    unk_2afe = v;
    func_ov002_02202d00(&unk_220c, 6);
    func_ov002_02200a58(0x11);
}

void Unk_ov103_02296da0::func_ov103_022950c4(u32 v) {
    func_ov002_022006e4(&unk_2134, 1);
    unk_2afe = v;
    func_ov002_02202d00(&unk_220c, 5);
    func_ov002_02200a58(0x10);
}

void Unk_ov103_02296da0::func_ov103_02295100() {
    func_ov002_02202d00(&unk_220c, 4);
    func_ov002_02200a58(0xe);
}

void Unk_ov103_02296da0::func_ov103_02295120() {
    func_ov002_02202af0(&unk_220c);
    func_ov002_02200a58(0xd);
}

void Unk_ov103_02296da0::func_ov103_02295140() {
    func_ov002_02202a78(&unk_220c);
    unk_220c.vfunc_0c();
}

void Unk_ov103_02296da0::func_ov103_02295160() {
    s32 a = func_ov103_022952e0();
    s32 b = func_ov103_022952d0();
    func_ov002_02202a40(&unk_220c, a, b);
    func_ov002_02202d00(&unk_220c, 1);
}

void Unk_ov103_02296da0::func_ov103_02295194() {
    unk_2b01 = 0;
    s32 a = func_ov002_022014a4(&unk_2270);
    s32 b = func_ov002_02201498(&unk_2270, unk_2b01);
    func_ov002_02202a40(&unk_220c, a, b);
    func_ov002_02202d00(&unk_220c, 7);
}

void Unk_ov103_02296da0::func_ov103_022951e0() {
    s32 a = func_ov002_022014a4(&unk_2270);
    s32 b = func_ov002_02201498(&unk_2270, unk_2b01);
    func_ov002_02202a18(&unk_220c, a, b, 2);
    unk_2aff = unk_8d;
    func_ov002_02200a58(0xb);
}

void Unk_ov103_02296da0::func_ov103_02295234() {
    if (func_ov103_02294db4(8)) {
        s32 a = func_ov103_022952e0();
        s32 b = func_ov103_022952d0();
        func_ov002_02202a40(&unk_220c, a, b);
        func_ov103_02294d94(8);
    } else {
        s32 a = func_ov103_022952e0();
        s32 b = func_ov103_022952d0();
        func_ov002_022029e8(&unk_220c, a, b, 3, 1);
        unk_2aff = unk_8d;
        func_ov002_02200a58(0xb);
    }
}

void Unk_ov103_02296da0::func_ov103_022952ac() {
    func_ov002_02202d00(&unk_220c, 0);
    unk_220c.vfunc_0c();
}

s32 Unk_ov103_02296da0::func_ov103_022952d0() { return func_ov103_02295740(unk_2afc); }

s32 Unk_ov103_02296da0::func_ov103_022952e0() {
    s32 r = func_ov103_02295774(unk_2afc);
    if (func_ov103_02294db4(0x20)) {
        r += 0x100;
    } else if (func_ov103_02294db4(0x10)) {
        r -= 0x100;
    }
    return r + 8;
}

void Unk_ov103_02296da0::func_ov103_02295328() {
    s32 a = func_ov103_022952e0();
    s32 b = func_ov103_022952d0();
    func_ov002_02202a40(&unk_220c, a, b);
    func_ov002_02202d00(&unk_220c, 1);
    func_ov103_02295140();
}

void Unk_ov103_02296da0::func_ov103_02295364(u32 idx) {
    if (unk_2af8 == 1) {
        func_02065e70(&unk_2a04, &unk_2910);
        func_ov103_022953d0(idx);
        func_ov103_022957dc(idx, &unk_2a04);
    }
}

void Unk_ov103_02296da0::func_ov103_022953a8(u32 idx) {
    if (unk_2af8 == 1) {
        func_ov103_022957dc(idx, &unk_2910);
    }
    unk_2af8 = 0;
}

void Unk_ov103_02296da0::func_ov103_022953d0(u32 idx) {
    if (func_ov103_022958bc(idx)) {
        s32 r4 = func_ov103_022958a8(idx);
        unk_2af8 = 1;
        s32 r = func_ov094_0229433c(&unk_b2c, r4);
        func_02065e70(&unk_2910, (void *)r);
        func_ov094_022942f4(&unk_b2c, r4);
    }
}

void Unk_ov103_02296da0::func_ov103_02295424() {
    unk_2908 = func_ov002_02202710(&unk_21f4);
    unk_290c = func_ov002_02202708(&unk_21f4);
}

void Unk_ov103_02296da0::func_ov103_02295454() {
    unk_2908 = func_ov002_022028c8(&unk_220c) - 2;
    unk_290c = func_ov002_022028a0(&unk_220c) - 4;
}

void Unk_ov103_02296da0::func_ov103_02295488() {
    unk_2908 = unk_2900 + data_021ef5f0;
    unk_290c = unk_2904 + data_021ef5ec;
}

void Unk_ov103_02296da0::func_ov103_022954c0() {
    if (!func_ov103_02294db4(0x40)) {
        switch (unk_2af8) {
        case 0:
            break;
        case 1:
            func_ov094_0229405c(&unk_b2c, unk_2908, unk_290c, &unk_2910);
            break;
        }
    }
}

void Unk_ov103_02296da0::func_ov103_02295508() {
    if (func_ov103_022958bc(unk_2afc)) {
        if (func_ov103_022956c8(unk_2afc)) {
            func_ov002_022006b0(&unk_2134);
        } else {
            unk_2afa = unk_2afc;
            func_ov002_022006b8(&unk_2134);
        }
    } else {
        func_ov002_022006b0(&unk_2134);
    }
}
