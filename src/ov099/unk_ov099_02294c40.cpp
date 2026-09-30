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

// Vtable 0x02296b00
class Unk_ov099_02296b00 : public Unk_ov002_022044e4 {
public:
    virtual ~Unk_ov099_02296b00();

    void func_ov099_02294d4c(u32 mask);
    void func_ov099_02294d5c(u32 mask);
    BOOL func_ov099_02294d6c(u32 mask);
    BOOL func_ov099_02294d84(void *pad);
    void func_ov099_02294dcc(void *pad);
    void func_ov099_02294ea0(u32 idx);
    void func_ov099_02294ef4();
    void func_ov099_02294f30();
    void func_ov099_02294f60();
    s32 func_ov099_02294fbc();
    void func_ov099_02294fe0(u32 v);
    void func_ov099_0229502c(u32 v);
    void func_ov099_02295068();
    void func_ov099_02295088();
    void func_ov099_022950a8();
    void func_ov099_022950c8();
    void func_ov099_022950fc();
    void func_ov099_02295148();
    void func_ov099_0229519c();
    void func_ov099_02295214();
    s32 func_ov099_02295238();
    s32 func_ov099_02295248();
    void func_ov099_02295290();
    void func_ov099_022952cc(u32 idx);
    void func_ov099_0229530c(u32 idx);
    void func_ov099_02295340(u32 idx);
    void func_ov099_022953b8();
    void func_ov099_022953e8();
    void func_ov099_0229541c();
    void func_ov099_02295454();
    void func_ov099_02295490();
    void func_ov099_022954f4();

    // out-of-range callees (declarations only)
    s32 func_ov099_022958d4(u32 idx);
    BOOL func_ov099_022959f0(u32 idx);
    BOOL func_ov099_022959e0(u32 idx);
    s32 func_ov099_022959c4(u32 idx);
    s32 func_ov099_02295830(u32 idx);
    s32 func_ov099_022957dc(u32 idx);
    BOOL func_ov099_02295734(u32 idx);
    void func_ov099_022958e8(u32 idx, u32 a, u32 b);
    s32 func_ov099_02295bb0();

    /* 0x91 */ u8 unk_91[3];
    /* 0x94 */ u32 unk_94;
    /* 0x98 */ u8 unk_98[0x34];
    /* 0xcc */ Unk_ov099_sub_02293a60 unk_cc;
    /* 0xb2c */ Unk_ov099_sub_0229469c unk_b2c;
    /* 0xb54 */ Unk_ov099_sub_02292d50 unk_b54;
    /* 0xcb4 */ u32 unk_cb4[0x1480 / 4];
    /* 0x2134 */ Unk_ov099_sub_022007e8 unk_2134;
    /* 0x21f4 */ Unk_ov099_sub_022027c4 unk_21f4;
    /* 0x220c */ Unk_ov099_sub_02202640 unk_220c;
    /* 0x2270 */ Unk_ov099_sub_02202454 unk_2270;
    /* 0x2570 */ Unk_ov099_sub_022043e8 unk_2570;
    /* 0x2678 */ u32 unk_2678;
    /* 0x267c */ u32 unk_267c;
    /* 0x2680 */ s32 unk_2680;
    /* 0x2684 */ s32 unk_2684;
    /* 0x2688 */ s32 unk_2688;
    /* 0x268c */ s32 unk_268c;
    /* 0x2690 */ Unk_ov099_sub_02065cc8 unk_2690;
    /* 0x2784 */ u16 unk_2784;
    /* 0x2786 */ u8 unk_2786;
    /* 0x2787 */ u8 unk_2787;
    /* 0x2788 */ u8 unk_2788;
    /* 0x2789 */ u8 unk_2789;
    /* 0x278a */ u8 unk_278a;
    /* 0x278b */ u8 unk_278b;
    /* 0x278c */ u8 unk_278c;
    /* 0x278d */ u8 unk_278d;
    /* 0x278e */ u8 unk_278e;
    /* 0x278f */ u8 unk_278f;
    /* 0x2790 */ u8 unk_2790;
};

// ---------------------------------------------------------------------------------------------

Unk_ov099_02296b00::~Unk_ov099_02296b00() {}

void Unk_ov099_02296b00::func_ov099_02294d4c(u32 mask) { unk_2678 = unk_2678 & ~mask; }

void Unk_ov099_02296b00::func_ov099_02294d5c(u32 mask) { unk_2678 = unk_2678 | mask; }

BOOL Unk_ov099_02296b00::func_ov099_02294d6c(u32 mask) {
    if (unk_2678 & mask) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov099_02296b00::func_ov099_02294d84(void *pad) {
    u8 old = unk_278b;
    func_ov099_02294d4c(0x30);
    if (pad == 0) {
        return FALSE;
    }
    if (func_ov099_022959f0(unk_278b)) {
        func_ov099_02294dcc(pad);
    }
    if (old != unk_278b) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov099_02296b00::func_ov099_02294dcc(void *pad) {
    s32 col = unk_278b;
    s32 row = 0;
    while (col >= 5) {
        col -= 5;
        row++;
    }
    if (func_ov002_0220126c(pad)) {
        if (!func_ov002_0220128c(pad) || row == 0) {
            if (col == 0) {
                unk_278b = unk_278b + 4;
                func_ov099_02294d5c(0x10);
            } else {
                unk_278b = unk_278b - 1;
            }
        }
    } else if (func_ov002_0220125c(pad)) {
        if (!func_ov002_0220127c(pad)) {
            if (col == 4) {
                unk_278b = unk_278b - 4;
                func_ov099_02294d5c(0x20);
            } else {
                unk_278b = unk_278b + 1;
            }
        }
    }
    if (!func_ov099_02294d6c(0x30)) {
        if (func_ov002_0220128c(pad)) {
            if (row > 0) {
                unk_278b = unk_278b - 5;
            }
        } else if (func_ov002_0220127c(pad)) {
            if (row < 2) {
                unk_278b = unk_278b + 5;
            }
        }
    }
}

void Unk_ov099_02296b00::func_ov099_02294ea0(u32 idx) {
    unk_278c = idx;
    func_ov002_022016e4(&unk_2270.unk_2f4, 1);
    if (func_ov099_022959f0(idx)) {
        func_ov099_02294ef4();
        func_ov099_02295214();
        func_ov002_022006e4(&unk_2134, 1);
        func_ov099_02294f60();
    }
}

void Unk_ov099_02296b00::func_ov099_02294ef4() {
    if (func_0206ef00()) {
        func_ov002_02201700(&unk_2270.unk_2f4, 0, 0);
    }
    func_ov002_02201700(&unk_2270.unk_2f4, 1, 1);
    func_ov002_02201700(&unk_2270.unk_2f4, 2, 1);
}

void Unk_ov099_02296b00::func_ov099_02294f30() {
    unk_278f = 1;
    func_ov099_022950c8();
    func_ov002_02202064(&unk_2270, 0);
    func_ov002_02200a58(0x13);
}

void Unk_ov099_02296b00::func_ov099_02294f60() {
    func_ov002_0220160c(&unk_2270, &unk_2270.unk_2f4, 0);
    s32 a = func_ov099_02295830(unk_278c);
    s32 b = func_ov099_022957dc(unk_278c);
    func_ov002_0220229c(&unk_2270, a, b);
    func_ov002_02202098(&unk_2270, 0);
    func_ov002_02200a58(0x11);
}

s32 Unk_ov099_02296b00::func_ov099_02294fbc() {
    switch (unk_278f) {
    case 0:
        func_ov099_02295068();
        break;
    case 1:
    default:
        func_ov099_02295bb0();
        break;
    }
}

void Unk_ov099_02296b00::func_ov099_02294fe0(u32 v) {
    func_ov002_022006e4(&unk_2134, 1);
    unk_278e = unk_8d;
    unk_278d = v;
    func_ov002_02202d00(&unk_220c, 6);
    func_ov002_02200a58(0xe);
}

void Unk_ov099_02296b00::func_ov099_0229502c(u32 v) {
    func_ov002_022006e4(&unk_2134, 1);
    unk_278d = v;
    func_ov002_02202d00(&unk_220c, 5);
    func_ov002_02200a58(0xd);
}

void Unk_ov099_02296b00::func_ov099_02295068() {
    func_ov002_02202d00(&unk_220c, 4);
    func_ov002_02200a58(0xb);
}

void Unk_ov099_02296b00::func_ov099_02295088() {
    func_ov002_02202af0(&unk_220c);
    func_ov002_02200a58(0xa);
}

void Unk_ov099_02296b00::func_ov099_022950a8() {
    func_ov002_02202a78(&unk_220c);
    unk_220c.vfunc_0c();
}

void Unk_ov099_02296b00::func_ov099_022950c8() {
    s32 a = func_ov099_02295248();
    s32 b = func_ov099_02295238();
    func_ov002_02202a40(&unk_220c, a, b);
    func_ov002_02202d00(&unk_220c, 1);
}

void Unk_ov099_02296b00::func_ov099_022950fc() {
    unk_2790 = 0;
    s32 a = func_ov002_022014a4(&unk_2270);
    s32 b = func_ov002_02201498(&unk_2270, unk_2790);
    func_ov002_02202a40(&unk_220c, a, b);
    func_ov002_02202d00(&unk_220c, 7);
}

void Unk_ov099_02296b00::func_ov099_02295148() {
    s32 a = func_ov002_022014a4(&unk_2270);
    s32 b = func_ov002_02201498(&unk_2270, unk_2790);
    func_ov002_02202a18(&unk_220c, a, b, 2);
    unk_278e = unk_8d;
    func_ov002_02200a58(8);
}

void Unk_ov099_02296b00::func_ov099_0229519c() {
    if (func_ov099_02294d6c(8)) {
        s32 a = func_ov099_02295248();
        s32 b = func_ov099_02295238();
        func_ov002_02202a40(&unk_220c, a, b);
        func_ov099_02294d4c(8);
    } else {
        s32 a = func_ov099_02295248();
        s32 b = func_ov099_02295238();
        func_ov002_022029e8(&unk_220c, a, b, 3, 1);
        unk_278e = unk_8d;
        func_ov002_02200a58(8);
    }
}

void Unk_ov099_02296b00::func_ov099_02295214() {
    func_ov002_02202d00(&unk_220c, 0);
    unk_220c.vfunc_0c();
}

s32 Unk_ov099_02296b00::func_ov099_02295238() { return func_ov099_022957dc(unk_278b); }

s32 Unk_ov099_02296b00::func_ov099_02295248() {
    s32 r = func_ov099_02295830(unk_278b);
    if (func_ov099_02294d6c(0x20)) {
        r += 0x100;
    } else if (func_ov099_02294d6c(0x10)) {
        r -= 0x100;
    }
    return r + 8;
}

void Unk_ov099_02296b00::func_ov099_02295290() {
    s32 a = func_ov099_02295248();
    s32 b = func_ov099_02295238();
    func_ov002_02202a40(&unk_220c, a, b);
    func_ov002_02202d00(&unk_220c, 1);
    func_ov099_022950a8();
}

void Unk_ov099_02296b00::func_ov099_022952cc(u32 idx) {
    if (unk_2787 == 1) {
    } else if (unk_2787 == 2) {
        u16 a = unk_2784;
        u8 b = unk_2786;
        func_ov099_02295340(idx);
        func_ov099_022958e8(idx, a, b);
    }
}

void Unk_ov099_02296b00::func_ov099_0229530c(u32 idx) {
    if (unk_2787 == 1) {
    } else if (unk_2787 == 2) {
        func_ov099_022958e8(idx, unk_2784, unk_2786);
    }
    unk_2787 = 0;
}

void Unk_ov099_02296b00::func_ov099_02295340(u32 idx) {
    if (func_ov099_022959f0(idx)) {
        s32 r4 = func_ov099_022959c4(idx);
        unk_2787 = 2;
        unk_2784 = func_ov094_0229352c(&unk_cc, r4);
        unk_2786 = func_ov094_02293504(&unk_cc, r4);
        func_ov094_022934d8(&unk_cc, r4);
        func_ov094_0229341c(&unk_cc, unk_2784, unk_2786);
    } else {
        if (func_ov099_022959e0(idx) != 0) {
            return;
        }
    }
}

void Unk_ov099_02296b00::func_ov099_022953b8() {
    unk_2688 = func_ov002_02202710(&unk_21f4);
    unk_268c = func_ov002_02202708(&unk_21f4);
}

void Unk_ov099_02296b00::func_ov099_022953e8() {
    unk_2688 = func_ov002_022028c8(&unk_220c) - 2;
    unk_268c = func_ov002_022028a0(&unk_220c) - 4;
}

void Unk_ov099_02296b00::func_ov099_0229541c() {
    unk_2688 = unk_2680 + data_021ef5f0;
    unk_268c = unk_2684 + data_021ef5ec;
}

void Unk_ov099_02296b00::func_ov099_02295454() {
    if (!func_ov099_02294d6c(0x40)) {
        switch (unk_2787) {
        case 0:
            break;
        case 2:
            func_ov094_0229313c(&unk_cc, unk_2688, unk_268c);
            break;
        }
    }
}

void Unk_ov099_02296b00::func_ov099_02295490() {
    if (func_ov099_022959f0(unk_278b) || func_ov099_022959e0(unk_278b)) {
        if (func_ov099_02295734(unk_278b)) {
            func_ov002_022006b0(&unk_2134);
        } else {
            unk_2789 = unk_278b;
            func_ov002_022006b8(&unk_2134);
        }
    } else {
        func_ov002_022006b0(&unk_2134);
    }
}

void Unk_ov099_02296b00::func_ov099_022954f4() {
    s32 x = func_ov099_02295830(unk_2789) - 0x6d;
    s32 y = func_ov099_022957dc(unk_2789) - 0x78;
    if (func_0206ef00()) {
        y -= 8;
    }
    func_02089ad8(&unk_2134, x, y);
    if (func_ov099_022959f0(unk_2789)) {
        s32 r = func_ov099_022959c4(unk_2789);
        func_ov094_02293638(&unk_cc, &unk_2134, r);
    } else if (func_ov099_022959e0(unk_2789)) {
        s32 r = func_ov099_022958d4(unk_2789);
        func_ov094_02294420(&unk_b2c, &unk_2134, r);
    }
}
