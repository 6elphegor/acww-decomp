#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef vfunc_08
#undef vfunc_14

extern "C" {
void func_020ed174();
void func_020ed188(void *p);
void func_020020b8(u32 x);
void func_ov092_02291c5c();
void func_0208e288(void *p, s32 a, s32 b);
BOOL func_0206ef00();
}

class Unk_ov103_02296da0;

class Unk_ov103_020b85f8 {
public:
    Unk_ov103_020b85f8();
    u32 unk_00[0x38 / 4];
};

class Unk_ov103_02293a80 {
public:
    Unk_ov103_02293a80();
    void func_ov094_022932d0(s32 a, s32 b);
    u32 unk_00[0xa60 / 4];
};

class Unk_ov103_022946a8 {
public:
    Unk_ov103_022946a8();
    void func_ov094_022941a0(s32 a, s32 b);
    u32 unk_00[0x28 / 4];
};

class Unk_ov103_02292d6c {
public:
    Unk_ov103_02292d6c();
    void func_ov094_0229277c(s32 a);
    u32 unk_00[0x15e0 / 4];
};

class Unk_ov103_02200800 {
public:
    Unk_ov103_02200800();
    virtual ~Unk_ov103_02200800();
    virtual void vfunc_08();
    u32 unk_04[(0xc0 - 4) / 4];
};

class Unk_ov103_022027d0 {
public:
    Unk_ov103_022027d0();
    u32 unk_00[0x18 / 4];
};

class Unk_ov103_02202658 {
public:
    Unk_ov103_02202658();
    void func_ov002_02202844();
    u32 unk_00[0x64 / 4];
};

class Unk_ov103_022024a0 {
public:
    Unk_ov103_022024a0();
    void func_ov002_02201b28();
    u32 unk_00[0x300 / 4];
};

class Unk_ov103_02204400 {
public:
    Unk_ov103_02204400();
    u32 unk_00[0x108 / 4];
};

class Unk_0206d0a0 {
public:
    Unk_0206d0a0();
    u32 unk_00[0x210 / 4];
};

class Unk_ov002_02204738 {
public:
    Unk_ov002_02204738();
    virtual ~Unk_ov002_02204738();
    virtual void vfunc_08();
    u32 unk_04[(0x70 - 4) / 4];
};

class Unk_020dd458 {
public:
    Unk_020dd458();
    virtual ~Unk_020dd458();
    u32 unk_04[(0xf4 - 4) / 4];
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

    void func_ov002_02200840(s32 a, s32 b, s32 c);
    void func_ov002_02200850(s32 a);
    void func_ov002_022008e0(s32 a, s32 b, s32 c, s32 d);
    BOOL func_ov002_02200908(s32 a);
    s32 func_ov002_02200920();
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

typedef void (Unk_ov103_02296da0::*Unk_ov103_02296da0_Fn)();

class Unk_ov103_02296da0 : public Unk_ov002_022044e4 {
public:
    Unk_ov103_02296da0()
        : unk_94(), unk_cc(), unk_b2c(), unk_b54(), unk_2134(), unk_21f4(), unk_220c(), unk_2270(), unk_2570(), unk_2678(), unk_2888(), unk_2910(), unk_2a04() {}
    virtual ~Unk_ov103_02296da0();

    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_24();
    virtual BOOL vfunc_4c();
    virtual BOOL vfunc_50();
    virtual BOOL vfunc_54();
    virtual BOOL vfunc_58();
    virtual BOOL vfunc_5c();

    // out-of-range callees (declarations only)
    void func_ov103_02294d94(u32 mask);
    BOOL func_ov103_02294db4(u32 mask);
    void func_ov103_022954c0();
    void func_ov103_02296360();
    void func_ov103_02296374();
    void func_ov103_02296394();
    void func_ov103_022963cc();
    void func_ov103_022963fc();
    void func_ov103_02296404();
    void func_ov103_02296420();
    void func_ov103_0229645c();

    // state functions (table targets)
    void func_ov103_022964e0();
    void func_ov103_02296528();
    void func_ov103_02296564();
    void func_ov103_022965b4();
    void func_ov103_0229663c();
    void func_ov103_022966ac();
    void func_ov103_02296720();
    void func_ov103_0229675c();
    void func_ov103_022962ec();
    void func_ov103_0229627c();
    void func_ov103_022961e4();
    void func_ov103_022961b0();
    void func_ov103_02296124();
    void func_ov103_02296040();
    void func_ov103_02295fa4();
    void func_ov103_02295f10();
    void func_ov103_02295ef0();
    void func_ov103_02295e74();
    void func_ov103_02295e24();
    void func_ov103_02295dd8();
    void func_ov103_02295db8();
    void func_ov103_02295d90();
    void func_ov103_02295d60();
    void func_ov103_02295d30();
    void func_ov103_02295cdc();
    void func_ov103_02295c94();
    void func_ov103_02295c50();
    void func_ov103_02295c18();
    void func_ov103_02295bdc();
    void func_ov103_02295b98();
    void func_ov103_02295b78();
    void func_ov103_02295b40();
    void func_ov103_02295ad8();

    // in range
    void func_ov103_022967d0();
    void func_ov103_02296820();

    /* 0x0094 */ Unk_ov103_020b85f8 unk_94[1];
    /* 0x00cc */ Unk_ov103_02293a80 unk_cc;
    /* 0x0b2c */ Unk_ov103_022946a8 unk_b2c;
    /* 0x0b54 */ Unk_ov103_02292d6c unk_b54;
    /* 0x2134 */ Unk_ov103_02200800 unk_2134;
    /* 0x21f4 */ Unk_ov103_022027d0 unk_21f4;
    /* 0x220c */ Unk_ov103_02202658 unk_220c;
    /* 0x2270 */ Unk_ov103_022024a0 unk_2270;
    /* 0x2570 */ Unk_ov103_02204400 unk_2570;
    /* 0x2678 */ Unk_0206d0a0 unk_2678;
    /* 0x2888 */ Unk_ov002_02204738 unk_2888;
    /* 0x28f8 */ u32 unk_28f8;
    /* 0x28fc */ s32 unk_28fc;
    /* 0x2900 */ s32 unk_2900;
    /* 0x2904 */ s32 unk_2904;
    /* 0x2908 */ s32 unk_2908;
    /* 0x290c */ s32 unk_290c;
    /* 0x2910 */ Unk_020dd458 unk_2910;
    /* 0x2a04 */ Unk_020dd458 unk_2a04;
    /* 0x2af8 */ u8 unk_2af8[12];
};

void Unk_ov103_02296da0::func_ov103_022967d0() {
    func_ov103_02296374();
    func_ov103_02296360();
    func_ov002_02200a50(1);
}

BOOL Unk_ov103_02296da0::vfunc_5c() {
    func_020ed188(this);
    return TRUE;
}

BOOL Unk_ov103_02296da0::vfunc_58() { return TRUE; }

BOOL Unk_ov103_02296da0::vfunc_54() { return TRUE; }

BOOL Unk_ov103_02296da0::vfunc_50() {
    func_ov103_02296404();
    func_ov103_02296820();
    func_ov103_022963fc();
    return TRUE;
}

void Unk_ov103_02296da0::func_ov103_02296820() {
    static Unk_ov103_02296da0_Fn tbl[25] = {
        &Unk_ov103_02296da0::func_ov103_022962ec, &Unk_ov103_02296da0::func_ov103_0229627c,
        &Unk_ov103_02296da0::func_ov103_022961e4, &Unk_ov103_02296da0::func_ov103_022961b0,
        &Unk_ov103_02296da0::func_ov103_02296124, &Unk_ov103_02296da0::func_ov103_02296040,
        &Unk_ov103_02296da0::func_ov103_02295fa4, &Unk_ov103_02296da0::func_ov103_02295f10,
        &Unk_ov103_02296da0::func_ov103_02295ef0, &Unk_ov103_02296da0::func_ov103_02295e74,
        &Unk_ov103_02296da0::func_ov103_02295e24, &Unk_ov103_02296da0::func_ov103_02295dd8,
        &Unk_ov103_02296da0::func_ov103_02295db8, &Unk_ov103_02296da0::func_ov103_02295d90,
        &Unk_ov103_02296da0::func_ov103_02295d60, &Unk_ov103_02296da0::func_ov103_02295d30,
        &Unk_ov103_02296da0::func_ov103_02295cdc, &Unk_ov103_02296da0::func_ov103_02295c94,
        &Unk_ov103_02296da0::func_ov103_02295c50, &Unk_ov103_02296da0::func_ov103_02295c18,
        &Unk_ov103_02296da0::func_ov103_02295bdc, &Unk_ov103_02296da0::func_ov103_02295b98,
        &Unk_ov103_02296da0::func_ov103_02295b78, &Unk_ov103_02296da0::func_ov103_02295b40,
        &Unk_ov103_02296da0::func_ov103_02295ad8};
    (this->*tbl[unk_8d])();
}

BOOL Unk_ov103_02296da0::vfunc_4c() {
    static Unk_ov103_02296da0_Fn tbl[9] = {
        &Unk_ov103_02296da0::func_ov103_022967d0, &Unk_ov103_02296da0::func_ov103_0229675c,
        &Unk_ov103_02296da0::func_ov103_02296720, &Unk_ov103_02296da0::func_ov103_022966ac,
        &Unk_ov103_02296da0::func_ov103_0229663c, &Unk_ov103_02296da0::func_ov103_022965b4,
        &Unk_ov103_02296da0::func_ov103_02296564, &Unk_ov103_02296da0::func_ov103_02296528,
        &Unk_ov103_02296da0::func_ov103_022964e0};
    func_ov103_022963cc();
    (this->*tbl[unk_8c])();
    func_ov103_02296394();
    return TRUE;
}

BOOL Unk_ov103_02296da0::vfunc_24() {
    unk_2270.func_ov002_02201b28();
    if (!func_ov103_02294db4(1)) {
        return TRUE;
    }
    unk_2134.vfunc_08();
    if (func_0206ef00()) {
        unk_220c.func_ov002_02202844();
    }
    func_ov103_022954c0();
    if (func_ov103_02294db4(2)) {
        unk_cc.func_ov094_022932d0(0, unk_28fc);
        unk_b2c.func_ov094_022941a0(0, unk_28fc);
        unk_b54.func_ov094_0229277c(unk_28fc);
    }
    if (func_ov103_02294db4(0x80)) {
        s32 r = func_ov002_02200920();
        func_0208e288(&unk_2888, 0, r);
        unk_2888.vfunc_08();
    }
    return TRUE;
}

BOOL Unk_ov103_02296da0::vfunc_0c() {
    func_020ed174();
    func_ov092_02291c5c();
    func_ov103_02296420();
    return TRUE;
}

BOOL Unk_ov103_02296da0::vfunc_00() {
    func_ov103_0229645c();
    func_ov002_02200a50(0);
    func_ov002_02200a60(0);
    return TRUE;
}

extern "C" Unk_ov103_02296da0 *func_ov103_02296ba4() { return new Unk_ov103_02296da0(); }

Unk_ov103_02296da0::~Unk_ov103_02296da0() {}
