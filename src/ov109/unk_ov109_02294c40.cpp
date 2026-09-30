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
void func_0206ecf8(u32 v);
void func_0206ed2c(u32 v);
BOOL func_020600f4(s32 v);
void func_0206009c(s32 v);
void func_0208d538(void *p, u32 v);
void func_02089ad8(void *p, s32 x, s32 y);
void func_ov002_02202a18(void *p, s32 a, s32 b, u32 c);
void func_ov002_022029e8(void *p, s32 a, s32 b, u32 c, u32 d);
s32 func_ov002_022014a4(void *p);
s32 func_ov002_02201498(void *p, u32 i);
u32 func_ov002_02201a70(void *p);
void func_ov002_022006b0(void *p);
void func_ov002_022006b8(void *p);
void func_ov094_0229313c(void *p, u32 a, u32 b);
void func_ov094_02293638(void *p, void *q, s32 r);
s32 func_ov094_0229359c(void *p, s32 v);
void func_ov094_022943f8(void *p);
void func_ov094_022935dc(void *p);
s32 func_ov094_02293504(void *p, s32 v);
s32 func_ov094_0229352c(void *p, s32 v);
}

class Unk_ov109_sub_02203968 {
public:
    ~Unk_ov109_sub_02203968();
    u32 unk_00[0x164 / 4];
};

class Unk_ov109_sub_022043e8 {
public:
    ~Unk_ov109_sub_022043e8();
    u32 unk_00[0x108 / 4];
};

class Unk_ov109_sub_02202454 {
public:
    ~Unk_ov109_sub_02202454();
    u32 unk_00[0x2f4 / 4];
    u8 unk_2f4[0xc];
};

class Unk_ov109_sub_02202640 {
public:
    virtual ~Unk_ov109_sub_02202640();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    u32 unk_04[0x60 / 4];
};

class Unk_ov109_sub_022027c4 {
public:
    ~Unk_ov109_sub_022027c4();
    u32 unk_00[0x18 / 4];
};

class Unk_ov109_sub_022007e8 {
public:
    ~Unk_ov109_sub_022007e8();
    u32 unk_00[0xc0 / 4];
};

class Unk_ov109_sub_02292d50 {
public:
    ~Unk_ov109_sub_02292d50();
    u32 unk_00[0x160 / 4];
};

class Unk_ov109_sub_0229469c {
public:
    ~Unk_ov109_sub_0229469c();
    u32 unk_00[0x28 / 4];
};

class Unk_ov109_sub_02293a60 {
public:
    ~Unk_ov109_sub_02293a60();
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

// Vtable 0x02296698
class Unk_ov109_02296698 : public Unk_ov002_022044e4 {
public:
    virtual ~Unk_ov109_02296698();

    void func_ov109_02294d4c(u32 mask);
    void func_ov109_02294d5c(u32 mask);
    BOOL func_ov109_02294d6c(u32 mask);
    BOOL func_ov109_02294d84(void *pad);
    void func_ov109_02294df0(void *pad);
    void func_ov109_02294ed8(u32 idx, u32 x);
    void func_ov109_02294f30();
    void func_ov109_02294f58();
    void func_ov109_02294f8c();
    void func_ov109_02294fb4();
    void func_ov109_02294ff4();
    void func_ov109_02295024(u32 x);
    void func_ov109_02295094();
    void func_ov109_022950f8();
    void func_ov109_02295118();
    void func_ov109_02295138();
    void func_ov109_0229516c();
    void func_ov109_022951b8();
    void func_ov109_0229521c();
    void func_ov109_02295270();
    void func_ov109_022952e8();
    s32 func_ov109_0229530c();
    s32 func_ov109_0229531c();
    void func_ov109_02295364();
    void func_ov109_022953b8();
    void func_ov109_022953f4();
    void func_ov109_02295448();
    void func_ov109_022954b0(u32 idx);
    void func_ov109_022954f0();
    s32 func_ov109_0229550c(u32 idx);
    s32 func_ov109_0229553c(u32 idx);

    // out-of-range callees (declarations only)
    BOOL func_ov109_02295774(u32 idx);
    s32 func_ov109_0229565c(u32 idx);
    s32 func_ov109_02295694(u32 idx);
    s32 func_ov109_02295758(u32 idx);
    BOOL func_ov109_02295570(u32 idx);
    void func_ov109_0229578c(u32 v);
    void func_ov109_022956cc(u32 idx, u32 a, u32 b);
    void func_ov109_0229585c();

    /* 0x91 */ u8 unk_91[0x3b];
    /* 0xcc */ Unk_ov109_sub_02293a60 unk_cc;
    /* 0xb2c */ Unk_ov109_sub_0229469c unk_b2c;
    /* 0xb54 */ Unk_ov109_sub_02292d50 unk_b54;
    /* 0xcb4 */ u32 unk_cb4[0x1480 / 4];
    /* 0x2134 */ Unk_ov109_sub_022007e8 unk_2134;
    /* 0x21f4 */ Unk_ov109_sub_022027c4 unk_21f4;
    /* 0x220c */ Unk_ov109_sub_02202640 unk_220c;
    /* 0x2270 */ Unk_ov109_sub_02202454 unk_2270;
    /* 0x2570 */ Unk_ov109_sub_022043e8 unk_2570;
    /* 0x2678 */ Unk_ov109_sub_02203968 unk_2678;
    /* 0x27dc */ u32 unk_27dc;
    /* 0x27e0 */ u8 unk_27e0[0xc];
    /* 0x27ec */ u32 unk_27ec;
    /* 0x27f0 */ u32 unk_27f0;
    /* 0x27f4 */ u8 unk_27f4[3];
    /* 0x27f7 */ u8 unk_27f7;
    /* 0x27f8 */ u8 unk_27f8;
    /* 0x27f9 */ u8 unk_27f9;
    /* 0x27fa */ u8 unk_27fa;
    /* 0x27fb */ u8 unk_27fb;
    /* 0x27fc */ u8 unk_27fc;
    /* 0x27fd */ u8 unk_27fd;
    /* 0x27fe */ u8 unk_27fe;
    /* 0x27ff */ u8 unk_27ff;
    /* 0x2800 */ u8 unk_2800;
};

// ---------------------------------------------------------------------------------------------

Unk_ov109_02296698::~Unk_ov109_02296698() {}

void Unk_ov109_02296698::func_ov109_02294d4c(u32 mask) { unk_27dc = unk_27dc & ~mask; }

void Unk_ov109_02296698::func_ov109_02294d5c(u32 mask) { unk_27dc = unk_27dc | mask; }

BOOL Unk_ov109_02296698::func_ov109_02294d6c(u32 mask) {
    if (unk_27dc & mask) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov109_02296698::func_ov109_02294d84(void *pad) {
    u8 old = unk_27fb;
    func_ov109_02294d4c(0x18);
    if (pad == 0) {
        return FALSE;
    }
    if (func_ov109_02295774(unk_27fb)) {
        func_ov109_02294df0(pad);
    } else if (unk_27fb == 0xf) {
        if (func_ov002_0220128c(pad)) {
            unk_27fb = 0xe;
            func_ov002_02202c40(&unk_220c);
        }
    }
    if (old != unk_27fb) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov109_02296698::func_ov109_02294df0(void *pad) {
    s32 r4 = unk_27fb;
    s32 r6 = 0;
    for (; r4 >= 5; r4 -= 5, r6++) {
    }
    if (func_ov002_0220126c(pad)) {
        if (func_ov002_0220128c(pad) && r6 != 0) {
        } else if (r4 == 0) {
            unk_27fb = unk_27fb + 4;
            func_ov109_02294d5c(8);
        } else {
            unk_27fb = unk_27fb - 1;
        }
    } else if (func_ov002_0220125c(pad)) {
        if (!func_ov002_0220127c(pad)) {
            if (r4 == 4) {
                unk_27fb = unk_27fb - 4;
                func_ov109_02294d5c(0x10);
            } else {
                unk_27fb = unk_27fb + 1;
            }
        }
    }
    if (!func_ov109_02294d6c(0x18)) {
        if (func_ov002_0220128c(pad)) {
            if (r6 > 0) {
                unk_27fb = unk_27fb - 5;
            }
        } else if (func_ov002_0220127c(pad)) {
            if (r6 < 2) {
                unk_27fb = unk_27fb + 5;
            } else {
                unk_27fb = 0xf;
                func_ov002_02202ca0(&unk_220c);
            }
        }
    }
}

void Unk_ov109_02296698::func_ov109_02294ed8(u32 idx, u32 x) {
    unk_27fc = idx;
    func_ov002_022016e4(&unk_2270.unk_2f4, 1);
    if (func_ov109_02295774(idx)) {
        func_ov109_02294f30();
        func_ov109_022952e8();
        if (x == 0) {
            func_ov002_022006e4(&unk_2134, 1);
        }
        func_ov109_02295024(x);
    }
}

void Unk_ov109_02296698::func_ov109_02294f30() {
    func_ov002_02201700(&unk_2270.unk_2f4, 0x73, 0);
    func_ov002_02201700(&unk_2270.unk_2f4, 2, 1);
}

void Unk_ov109_02296698::func_ov109_02294f58() {
    func_0206ecf8(0);
    unk_8c = 3;
    func_ov002_02200a60(1);
    func_ov002_022006e4(&unk_2134, 1);
    func_ov109_022952e8();
}

void Unk_ov109_02296698::func_ov109_02294f8c() {
    func_ov002_022030ac(&unk_2678, 9);
    func_ov002_02200a58(0xf);
    func_0200402c(0x28);
}

void Unk_ov109_02296698::func_ov109_02294fb4() {
    func_0206ed2c(unk_27fc);
    func_0206ecf8(1);
    unk_8c = 3;
    func_ov002_02200a60(1);
    func_ov002_022006e4(&unk_2134, 1);
    func_ov109_022952e8();
}

void Unk_ov109_02296698::func_ov109_02294ff4() {
    unk_27ff = 1;
    func_ov109_02295138();
    func_ov002_02202064(&unk_2270, 0);
    func_ov002_02200a58(0xd);
}

void Unk_ov109_02296698::func_ov109_02295024(u32 x) {
    func_ov002_0220160c(&unk_2270, &unk_2270.unk_2f4, 0);
    s32 a = func_ov109_02295694(unk_27fc);
    s32 b = func_ov109_0229565c(unk_27fc);
    if (x != 0) {
        func_ov002_02202200(&unk_2270, &unk_2134, b);
    } else {
        func_ov002_0220229c(&unk_2270, a, b);
    }
    func_ov002_02202098(&unk_2270, 0);
    func_ov002_02200a58(0xb);
}

void Unk_ov109_02296698::func_ov109_02295094() {
    switch (unk_27ff) {
    case 0: {
        s32 r5 = func_ov109_0229553c(unk_27fc);
        if (func_020600f4(r5)) {
            func_ov109_0229578c(0x11);
        } else {
            func_0206009c(r5);
            func_ov109_022956cc(unk_27fc, 0xfff1, 0);
            func_ov109_02294fb4();
        }
        break;
    }
    case 1:
    default:
        func_ov109_0229585c();
        break;
    }
}

void Unk_ov109_02296698::func_ov109_022950f8() {
    func_ov002_02202b68(&unk_220c);
    func_ov002_02200a58(9);
}

void Unk_ov109_02296698::func_ov109_02295118() {
    func_ov002_02202a78(&unk_220c);
    unk_220c.vfunc_0c();
}

void Unk_ov109_02296698::func_ov109_02295138() {
    s32 a = func_ov109_0229531c();
    s32 b = func_ov109_0229530c();
    func_ov002_02202a40(&unk_220c, a, b);
    func_ov002_02202d00(&unk_220c, 1);
}

void Unk_ov109_02296698::func_ov109_0229516c() {
    unk_2800 = 0;
    s32 a = func_ov002_022014a4(&unk_2270);
    s32 b = func_ov002_02201498(&unk_2270, unk_2800);
    func_ov002_02202a40(&unk_220c, a, b);
    func_ov002_02202d00(&unk_220c, 7);
}

void Unk_ov109_02296698::func_ov109_022951b8() {
    unk_27ff = 1;
    unk_2800 = func_ov002_02201a70(&unk_2270);
    s32 a = func_ov002_022014a4(&unk_2270);
    s32 b = func_ov002_02201498(&unk_2270, unk_2800);
    func_ov002_02202a40(&unk_220c, a, b);
    func_0208d538(&unk_220c, 8);
    func_ov002_02200a58(0xc);
}

void Unk_ov109_02296698::func_ov109_0229521c() {
    s32 a = func_ov002_022014a4(&unk_2270);
    s32 b = func_ov002_02201498(&unk_2270, unk_2800);
    func_ov002_02202a18(&unk_220c, a, b, 2);
    unk_27fe = unk_8d;
    func_ov002_02200a58(8);
}

void Unk_ov109_02296698::func_ov109_02295270() {
    if (func_ov109_02294d6c(4)) {
        s32 a = func_ov109_0229531c();
        s32 b = func_ov109_0229530c();
        func_ov002_02202a40(&unk_220c, a, b);
        func_ov109_02294d4c(4);
    } else {
        s32 a = func_ov109_0229531c();
        s32 b = func_ov109_0229530c();
        func_ov002_022029e8(&unk_220c, a, b, 3, 1);
        unk_27fe = unk_8d;
        func_ov002_02200a58(8);
    }
}

void Unk_ov109_02296698::func_ov109_022952e8() {
    func_ov002_02202d00(&unk_220c, 0);
    unk_220c.vfunc_0c();
}

s32 Unk_ov109_02296698::func_ov109_0229530c() { return func_ov109_0229565c(unk_27fb); }

s32 Unk_ov109_02296698::func_ov109_0229531c() {
    s32 r = func_ov109_02295694(unk_27fb);
    if (func_ov109_02294d6c(0x10)) {
        r += 0x100;
    } else if (func_ov109_02294d6c(8)) {
        r -= 0x100;
    }
    return r + 8;
}

void Unk_ov109_02296698::func_ov109_02295364() {
    s32 a = func_ov109_0229531c();
    s32 b = func_ov109_0229530c();
    func_ov002_02202a40(&unk_220c, a, b);
    if (unk_27fb == 0xf) {
        func_ov002_02202d00(&unk_220c, 7);
    } else {
        func_ov002_02202d00(&unk_220c, 1);
    }
    func_ov109_02295118();
}

void Unk_ov109_02296698::func_ov109_022953b8() {
    if (!func_ov109_02294d6c(0x20)) {
        if (unk_27f7 != 0) {
            if (unk_27f7 == 1) {
                func_ov094_0229313c(&unk_cc, unk_27ec, unk_27f0);
            }
        }
    }
}

void Unk_ov109_02296698::func_ov109_022953f4() {
    if (func_ov109_02295774(unk_27fb)) {
        if (func_ov109_02295570(unk_27fb)) {
            func_ov002_022006b0(&unk_2134);
        } else {
            unk_27f9 = unk_27fb;
            func_ov002_022006b8(&unk_2134);
        }
    } else {
        func_ov002_022006b0(&unk_2134);
    }
}

void Unk_ov109_02296698::func_ov109_02295448() {
    s32 x = func_ov109_02295694(unk_27f9) - 0x6d;
    s32 y = func_ov109_0229565c(unk_27f9) - 0x78;
    if (func_0206ef00()) {
        y -= 8;
    }
    func_02089ad8(&unk_2134, x, y);
    if (func_ov109_02295774(unk_27f9)) {
        s32 r = func_ov109_02295758(unk_27f9);
        func_ov094_02293638(&unk_cc, &unk_2134, r);
    }
}

void Unk_ov109_02296698::func_ov109_022954b0(u32 idx) {
    if (func_ov109_02295774(idx)) {
        s32 r = func_ov109_02295758(idx);
        func_ov094_0229359c(&unk_cc, r);
        func_ov094_022943f8(&unk_b2c);
    } else {
        func_ov109_022954f0();
    }
}

void Unk_ov109_02296698::func_ov109_022954f0() {
    func_ov094_022935dc(&unk_cc);
    func_ov094_022943f8(&unk_b2c);
}

s32 Unk_ov109_02296698::func_ov109_0229550c(u32 idx) {
    if (func_ov109_02295774(idx)) {
        s32 r = func_ov109_02295758(idx);
        return func_ov094_02293504(&unk_cc, r);
    }
    return 0xf1;
}

s32 Unk_ov109_02296698::func_ov109_0229553c(u32 idx) {
    if (func_ov109_02295774(idx)) {
        s32 r = func_ov109_02295758(idx);
        return func_ov094_0229352c(&unk_cc, r);
    }
    return 0xfff1;
}
