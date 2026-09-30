#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef vfunc_08
#undef vfunc_14

extern "C" {
BOOL func_0206ef00();
s32 func_02065578(s32 v);
u32 func_020655d0(s32 v);
void func_0200402c(s32 v);
void func_0208e13c(void *p, s32 v);
void *func_020ed174(void *p);
void func_ov092_02291ce4(void *p, u32 a, u32 b);
void func_ov002_022006e4(void *p, u32 v);
void func_ov002_022016e4(void *p, u32 v);
void func_ov002_02201700(void *p, u32 a, u32 b);
void func_ov002_0220160c(void *p, void *q, u32 v);
void func_ov002_02202200(void *p, void *q, s32 v);
void func_ov002_0220229c(void *p, s32 a, s32 b);
void func_ov002_02202098(void *p, u32 v);
void func_ov002_02202064(void *p, u32 v);
void func_ov002_02202d00(void *p, u32 v);
void func_ov002_02202af0(void *p);
void func_ov002_02202b68(void *p);
void func_ov002_02202a78(void *p);
void func_ov002_02202a40(void *p, s32 a, s32 b);
void func_ov002_02202c40(void *p);
void func_ov002_02202ca0(void *p);
void func_ov002_022030ac(void *p, s32 v);
BOOL func_ov002_0220125c(void *pad);
BOOL func_ov002_0220126c(void *pad);
BOOL func_ov002_0220127c(void *pad);
BOOL func_ov002_0220128c(void *pad);
void func_ov094_02293c58(void *p);
}

class Unk_ov106_sub_02065cc8 {
public:
    ~Unk_ov106_sub_02065cc8();
    u32 unk_00[0xf4 / 4];
};

class Unk_ov106_sub_02203968 {
public:
    ~Unk_ov106_sub_02203968();
    u32 unk_00[0x164 / 4];
};

class Unk_ov106_sub_02203df0 {
public:
    ~Unk_ov106_sub_02203df0();
    u32 unk_00[0x70 / 4];
};

class Unk_ov106_sub_0206d40c {
public:
    ~Unk_ov106_sub_0206d40c();
    u32 unk_00[0x210 / 4];
};

class Unk_ov106_sub_022043e8 {
public:
    ~Unk_ov106_sub_022043e8();
    u32 unk_00[0x108 / 4];
};

class Unk_ov106_sub_02202454 {
public:
    ~Unk_ov106_sub_02202454();
    u32 unk_00[0x2f4 / 4];
    u8 unk_2f4[0xc];
};

class Unk_ov106_sub_02202640 {
public:
    virtual ~Unk_ov106_sub_02202640();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    u32 unk_04[0x60 / 4];
};

class Unk_ov106_sub_022027c4 {
public:
    ~Unk_ov106_sub_022027c4();
    u32 unk_00[0x18 / 4];
};

class Unk_ov106_sub_022007e8 {
public:
    ~Unk_ov106_sub_022007e8();
    u32 unk_00[0xc0 / 4];
};

class Unk_ov106_sub_02292d50 {
public:
    ~Unk_ov106_sub_02292d50();
    u32 unk_00[0x160 / 4];
};

class Unk_ov106_sub_0229469c {
public:
    ~Unk_ov106_sub_0229469c();
    u32 unk_00[0x28 / 4];
};

class Unk_ov106_sub_02293a60 {
public:
    ~Unk_ov106_sub_02293a60();
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

// Vtable 0x02298180
class Unk_ov106_02298180 : public Unk_ov002_022044e4 {
public:
    virtual ~Unk_ov106_02298180();

    void func_ov106_02294dfc(u32 mask);
    void func_ov106_02294e0c(u32 mask);
    BOOL func_ov106_02294e1c(u32 mask);
    void func_ov106_02294e30();
    void func_ov106_02294e58();
    void func_ov106_02294e60();
    void func_ov106_02294ed0();
    void func_ov106_02294f10();
    void func_ov106_02294f34();
    BOOL func_ov106_02294f58(void *pad, u32 x);
    void func_ov106_02294fdc(void *pad);
    void func_ov106_02295004(void *pad, u32 x);
    void func_ov106_022950f0(void *pad, u32 x);
    void func_ov106_02295200();
    void func_ov106_02295250(u32 idx, u32 x);
    void func_ov106_02295320();
    void func_ov106_0229534c(u32 x);
    void func_ov106_022953c8();
    void func_ov106_02295410(u32 v);
    void func_ov106_02295458(u32 v);
    void func_ov106_02295494();
    void func_ov106_022954b4();
    void func_ov106_022954d4();
    void func_ov106_022954f4();
    void func_ov106_02295514();

    // out-of-range callees (declarations only)
    s32 func_ov106_02295840(u32 idx);
    s32 func_ov106_02295c28(u32 idx);
    s32 func_ov106_02295be0(u32 idx);
    s32 func_ov106_02295cc4(u32 idx);
    BOOL func_ov106_02295e58(u32 idx);
    BOOL func_ov106_02295e48(u32 idx);
    BOOL func_ov106_02295e3c(u32 idx);
    void func_ov106_02295708();
    s32 func_ov106_0229572c();
    s32 func_ov106_0229573c();
    void func_ov106_022961f0();

    /* 0x91 */ u8 unk_91[3];
    /* 0x94 */ u32 unk_94;
    /* 0x98 */ u8 unk_98[0x14];
    /* 0xac */ s32 unk_ac;
    /* 0xb0 */ s32 unk_b0;
    /* 0xb4 */ u8 unk_b4[3];
    /* 0xb7 */ u8 unk_b7;
    /* 0xb8 */ u8 unk_b8;
    /* 0xb9 */ u8 unk_b9;
    /* 0xba */ u8 unk_ba;
    /* 0xbb */ u8 unk_bb;
    /* 0xbc */ u8 unk_bc;
    /* 0xbd */ u8 unk_bd[0x3b];
    /* 0xf8 */ Unk_ov106_sub_02293a60 unk_f8;
    /* 0xb58 */ Unk_ov106_sub_0229469c unk_b58;
    /* 0xb80 */ Unk_ov106_sub_02292d50 unk_b80;
    /* 0xce0 */ u32 unk_ce0[0x1480 / 4];
    /* 0x2160 */ Unk_ov106_sub_022007e8 unk_2160;
    /* 0x2220 */ Unk_ov106_sub_022027c4 unk_2220;
    /* 0x2238 */ Unk_ov106_sub_02202640 unk_2238;
    /* 0x229c */ Unk_ov106_sub_02202454 unk_229c;
    /* 0x259c */ Unk_ov106_sub_022043e8 unk_259c;
    /* 0x26a4 */ Unk_ov106_sub_0206d40c unk_26a4;
    /* 0x28b4 */ Unk_ov106_sub_02203df0 unk_28b4;
    /* 0x2924 */ Unk_ov106_sub_02065cc8 unk_2924[10];
    /* 0x32ac */ Unk_ov106_sub_02065cc8 unk_32ac[10];
    /* 0x3c34 */ Unk_ov106_sub_02203968 unk_3c34;
    /* 0x3d98 */ Unk_ov106_sub_02065cc8 unk_3d98;
    /* 0x3e8c */ Unk_ov106_sub_02065cc8 unk_3e8c;
};

// ---------------------------------------------------------------------------------------------

Unk_ov106_02298180::~Unk_ov106_02298180() {}

void Unk_ov106_02298180::func_ov106_02294dfc(u32 mask) { unk_94 = unk_94 & ~mask; }

void Unk_ov106_02298180::func_ov106_02294e0c(u32 mask) { unk_94 = unk_94 | mask; }

BOOL Unk_ov106_02298180::func_ov106_02294e1c(u32 mask) {
    if (unk_94 & mask) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov106_02298180::func_ov106_02294e30() {
    func_0200402c(0x27);
    func_ov002_022030ac(&unk_3c34, 9);
    func_ov002_02200a58(0x23);
}

void Unk_ov106_02298180::func_ov106_02294e58() { func_ov106_02295200(); }

void Unk_ov106_02298180::func_ov106_02294e60() {
    u8 idx = unk_b9;
    func_ov106_02295840(idx);
    unk_ac = func_ov106_02295c28(idx);
    unk_b0 = func_ov106_02295be0(idx);
    if (func_0206ef00()) {
        unk_ac = unk_ac - 2;
        unk_b0 = unk_b0 - 2;
    }
    func_ov002_02200a58(0x26);
    func_ov094_02293c58(&unk_b58);
}

void Unk_ov106_02298180::func_ov106_02294ed0() {
    func_ov106_02294f10();
    func_ov106_02294e0c(0x8000);
    func_ov106_02295708();
    func_ov002_02200a50(9);
    func_ov002_02200a60(1);
    func_ov092_02291ce4(func_020ed174(this), 0x44, 1);
}

void Unk_ov106_02298180::func_ov106_02294f10() {
    func_ov002_02200a58(0x22);
    func_0208e13c(&unk_28b4, 2);
    func_0200402c(0x29);
}

void Unk_ov106_02298180::func_ov106_02294f34() {
    func_ov002_02200a50(4);
    func_ov002_02200a60(1);
    func_ov106_02294e0c(0x100);
}

BOOL Unk_ov106_02298180::func_ov106_02294f58(void *pad, u32 x) {
    u8 old = unk_b8;
    func_ov106_02294dfc(0x30);
    if (pad == 0) {
        return FALSE;
    }
    if (func_ov106_02295e58(unk_b8)) {
        func_ov106_022950f0(pad, x);
    } else if (func_ov106_02295e48(unk_b8)) {
        func_ov106_02295004(pad, x);
    } else if (func_ov106_02295e3c(unk_b8)) {
        func_ov106_02294fdc(pad);
    }
    if (old != unk_b8) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov106_02298180::func_ov106_02294fdc(void *pad) {
    if (func_ov002_0220128c(pad)) {
        func_ov002_02202c40(&unk_2238);
        unk_b8 = 0x13;
    }
}

void Unk_ov106_02298180::func_ov106_02295004(void *pad, u32 x) {
    s32 r6 = unk_b8 - 0x15;
    s32 r4 = 0;
    for (; r6 >= 2; r4++, r6 -= 2) {
    }
    if (func_ov002_0220126c(pad)) {
        if (r6 > 0) {
            unk_b8 = unk_b8 - 1;
        } else {
            unk_b8 = r4 * 2 + 0xc;
            func_ov106_02294e0c(0x10);
            return;
        }
    } else if (func_ov002_0220125c(pad)) {
        if (r6 < 1) {
            unk_b8 = unk_b8 + 1;
        } else {
            unk_b8 = r4 * 2 + 0xb;
            return;
        }
    }
    if (func_ov106_02295e48(unk_b8)) {
        if (!func_ov106_02294e1c(0x30)) {
            if (func_ov002_0220128c(pad)) {
                if (r4 > 0) {
                    unk_b8 = unk_b8 - 2;
                }
            } else if (func_ov002_0220127c(pad)) {
                if (r4 < 4) {
                    unk_b8 = unk_b8 + 2;
                } else if (x == 0) {
                    unk_b8 = 0x1f;
                    func_ov002_02202ca0(&unk_2238);
                }
            }
        }
    }
}

void Unk_ov106_02298180::func_ov106_022950f0(void *pad, u32 x) {
    s32 r6 = unk_b8 - 0xb;
    s32 r4 = r6 >> 1;
    if (func_ov002_0220126c(pad)) {
        if ((r6 & 1) > 0) {
            unk_b8 = unk_b8 - 1;
        } else {
            if (x != 1 || !func_ov106_02295e58(unk_b7)) {
                unk_b8 = r4 * 2 + 0x16;
                return;
            }
        }
    } else if (func_ov002_0220125c(pad)) {
        if ((r6 & 1) < 1) {
            unk_b8 = unk_b8 + 1;
        } else {
            if (x != 1 || !func_ov106_02295e58(unk_b7)) {
                unk_b8 = r4 * 2 + 0x15;
                func_ov106_02294e0c(0x20);
                return;
            }
        }
    }
    if (func_ov106_02295e58(unk_b8)) {
        if (!func_ov106_02294e1c(0x30)) {
            if (func_ov002_0220128c(pad)) {
                if (r4 > 0) {
                    unk_b8 = unk_b8 - 2;
                }
            } else if (func_ov002_0220127c(pad)) {
                if (r4 < 4) {
                    unk_b8 = unk_b8 + 2;
                } else if (x == 0) {
                    unk_b8 = 0x1f;
                    func_ov002_02202ca0(&unk_2238);
                }
            }
        }
    }
}

void Unk_ov106_02298180::func_ov106_02295200() {
    func_ov106_02294e0c(0x10000);
    func_ov002_022016e4(&unk_229c.unk_2f4, 4);
    func_ov002_02201700(&unk_229c.unk_2f4, 0x1a, 4);
    func_ov002_02201700(&unk_229c.unk_2f4, 0x15, 2);
    func_ov002_02201700(&unk_229c.unk_2f4, 0x19, 4);
    func_ov106_0229534c(0);
}

void Unk_ov106_02298180::func_ov106_02295250(u32 idx, u32 x) {
    func_ov106_02294dfc(0x10000);
    unk_b9 = idx;
    func_ov002_022016e4(&unk_229c.unk_2f4, 4);
    s32 r7 = func_ov106_02295cc4(idx);
    if (func_0206ef00()) {
        func_ov002_02201700(&unk_229c.unk_2f4, 0, 0);
    }
    s32 r5 = func_02065578(r7);
    if (r5 != 0) {
        if (r5 == 7) {
            func_ov002_02201700(&unk_229c.unk_2f4, 0x17, 1);
        } else {
            func_ov002_02201700(&unk_229c.unk_2f4, 0x14, 1);
        }
    }
    if (func_020655d0(r7) == 0xfff1) {
        if (r5 == 3 || r5 == 6 || r5 == 1 || r5 == 4) {
            func_ov002_02201700(&unk_229c.unk_2f4, 0x15, 3);
        }
    }
    func_ov002_02201700(&unk_229c.unk_2f4, 2, 4);
    func_ov106_02295708();
    if (x == 0) {
        func_ov002_022006e4(&unk_2160, 1);
    }
    func_ov106_0229534c(x);
}

void Unk_ov106_02298180::func_ov106_02295320() {
    unk_bc = 4;
    func_ov106_02295514();
    func_ov002_02202064(&unk_229c, 0);
    func_ov002_02200a58(0x18);
}

void Unk_ov106_02298180::func_ov106_0229534c(u32 x) {
    func_ov002_0220160c(&unk_229c, &unk_229c.unk_2f4, func_ov106_02294e1c(0x10000));
    s32 a = func_ov106_02295c28(unk_b9);
    s32 b = func_ov106_02295be0(unk_b9);
    if (x != 0) {
        func_ov002_02202200(&unk_229c, &unk_2160, b);
    } else {
        func_ov002_0220229c(&unk_229c, a, b);
    }
    func_ov002_02202098(&unk_229c, 0);
    func_ov002_02200a58(0x16);
}

void Unk_ov106_02298180::func_ov106_022953c8() {
    switch (unk_bc) {
    case 0:
        func_ov106_02295494();
        break;
    case 1:
        func_ov106_02294f34();
        break;
    case 2:
        func_ov106_02294e60();
        break;
    case 3:
        func_ov106_02294e58();
        break;
    case 4:
    default:
        func_ov106_022961f0();
        break;
    }
}

void Unk_ov106_02298180::func_ov106_02295410(u32 v) {
    func_ov002_022006e4(&unk_2160, 1);
    unk_bb = unk_8d;
    unk_ba = v;
    func_ov002_02202d00(&unk_2238, 6);
    func_ov002_02200a58(0x13);
}

void Unk_ov106_02298180::func_ov106_02295458(u32 v) {
    func_ov002_022006e4(&unk_2160, 1);
    unk_ba = v;
    func_ov002_02202d00(&unk_2238, 5);
    func_ov002_02200a58(0x12);
}

void Unk_ov106_02298180::func_ov106_02295494() {
    func_ov002_02202d00(&unk_2238, 4);
    func_ov002_02200a58(0x10);
}

void Unk_ov106_02298180::func_ov106_022954b4() {
    func_ov002_02202af0(&unk_2238);
    func_ov002_02200a58(0xf);
}

void Unk_ov106_02298180::func_ov106_022954d4() {
    func_ov002_02202b68(&unk_2238);
    func_ov002_02200a58(0xe);
}

void Unk_ov106_02298180::func_ov106_022954f4() {
    func_ov002_02202a78(&unk_2238);
    unk_2238.vfunc_0c();
}

void Unk_ov106_02298180::func_ov106_02295514() {
    s32 a = func_ov106_0229573c();
    s32 b = func_ov106_0229572c();
    func_ov002_02202a40(&unk_2238, a, b);
    func_ov002_02202d00(&unk_2238, 1);
}
