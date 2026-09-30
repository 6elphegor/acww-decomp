#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef vfunc_08
#undef vfunc_14

extern "C" {
void func_020ed174();
void func_ov092_02291c5c();
BOOL func_0206ef00();
}

class Unk_ov102_02297520;

class Unk_ov102_020b85f8 {
public:
    Unk_ov102_020b85f8();
    u32 unk_00[0x38 / 4];
};

class Unk_ov102_02293a80 {
public:
    Unk_ov102_02293a80();
    void func_ov094_0229324c(s32 a, s32 b);
    void func_ov094_022932d0(s32 a, s32 b);
    u32 unk_00[0xa60 / 4];
};

class Unk_ov102_022946a8 {
public:
    Unk_ov102_022946a8();
    void func_ov094_022941a0(s32 a, s32 b);
    u32 unk_00[0x28 / 4];
};

class Unk_ov102_02292d6c {
public:
    Unk_ov102_02292d6c();
    void func_ov094_0229277c(s32 a);
    u32 unk_00[0x15e0 / 4];
};

class Unk_ov102_02200800 {
public:
    Unk_ov102_02200800();
    virtual ~Unk_ov102_02200800();
    virtual void vfunc_08();
    BOOL func_ov002_0220071c();
    u32 unk_04[(0xc0 - 4) / 4];
};

class Unk_ov102_022027d0 {
public:
    Unk_ov102_022027d0();
    u32 unk_00[0x18 / 4];
};

class Unk_ov102_02202658 {
public:
    Unk_ov102_02202658();
    void func_ov002_02202844();
    u32 unk_00[0x64 / 4];
};

class Unk_ov102_022024a0 {
public:
    Unk_ov102_022024a0();
    u32 unk_00[0x300 / 4];
};

class Unk_ov102_02204400 {
public:
    Unk_ov102_02204400();
    u32 unk_00[0x108 / 4];
};

class Unk_ov102_0206fca8 {
public:
    Unk_ov102_0206fca8();
    ~Unk_ov102_0206fca8();
    u32 unk_00[0x40 / 4];
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
    void func_ov002_0220088c(s32 a, s32 b, s32 mode, s32 dist);
    void func_ov002_022008a8(s32 a, s32 b, s32 mode, s32 dist);
    BOOL func_ov002_022008fc(s32 a);
    BOOL func_ov002_02200908(s32 a);
    s32 func_ov002_02200920();
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

typedef void (Unk_ov102_02297520::*Unk_ov102_02297520_Fn)();

class Unk_ov102_02297520 : public Unk_ov002_022044e4 {
public:
    Unk_ov102_02297520()
        : unk_94(), unk_cc(), unk_b2c(), unk_b54(), unk_2134(), unk_21f4(), unk_220c(), unk_2270(), unk_2378() {}
    virtual ~Unk_ov102_02297520();

    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_24();
    virtual BOOL vfunc_4c();

    BOOL func_ov102_02294d68(s32 a);
    void func_ov102_02294e7c();
    void func_ov102_02295878();
    void func_ov102_02296b44();
    void func_ov102_02296b70();
    void func_ov102_02296bc8();
    void func_ov102_02296bf0();
    void func_ov102_02296c84();
    void func_ov102_02296c8c();
    void func_ov102_02296ce4();
    void func_ov102_02296d0c();
    void func_ov102_02296d5c();
    void func_ov102_02296dc8();
    void func_ov102_02296e40();
    void func_ov102_02296ed0();
    void func_ov102_02296f18();
    void func_ov102_02296f98();

    /* 0x0094 */ Unk_ov102_020b85f8 unk_94[1];
    /* 0x00cc */ Unk_ov102_02293a80 unk_cc;
    /* 0x0b2c */ Unk_ov102_022946a8 unk_b2c;
    /* 0x0b54 */ Unk_ov102_02292d6c unk_b54;
    /* 0x2134 */ Unk_ov102_02200800 unk_2134;
    /* 0x21f4 */ Unk_ov102_022027d0 unk_21f4;
    /* 0x220c */ Unk_ov102_02202658 unk_220c;
    /* 0x2270 */ Unk_ov102_02204400 unk_2270;
    /* 0x2378 */ Unk_ov102_0206fca8 unk_2378[2];
    /* 0x23f8 */ u32 unk_23f8;
    /* 0x23fc */ s32 unk_23fc;
    /* 0x2400 */ s32 unk_2400;
    /* 0x2404 */ u32 unk_2404[(0x24d8 - 0x2404) / 4];
};

BOOL Unk_ov102_02297520::vfunc_4c() {
    static Unk_ov102_02297520_Fn tbl[10] = {
        &Unk_ov102_02297520::func_ov102_02296f98, &Unk_ov102_02297520::func_ov102_02296f18,
        &Unk_ov102_02297520::func_ov102_02296ed0, &Unk_ov102_02297520::func_ov102_02296e40,
        &Unk_ov102_02297520::func_ov102_02296dc8, &Unk_ov102_02297520::func_ov102_02296d5c,
        &Unk_ov102_02297520::func_ov102_02296d0c, &Unk_ov102_02297520::func_ov102_02296ce4,
        &Unk_ov102_02297520::func_ov102_02296c8c, &Unk_ov102_02297520::func_ov102_02296c84};
    func_ov102_02296b70();
    (this->*tbl[unk_8c])();
    func_ov102_02296b44();
    return TRUE;
}

BOOL Unk_ov102_02297520::vfunc_24() {
    if (!func_ov102_02294d68(1)) {
        return TRUE;
    }
    unk_2134.vfunc_08();
    if (func_0206ef00()) {
        unk_220c.func_ov002_02202844();
    }
    func_ov102_02295878();
    if (func_ov102_02294d68(0x80)) {
        unk_cc.func_ov094_0229324c(0, unk_2400);
        func_ov102_02294e7c();
    }
    if (func_ov102_02294d68(2)) {
        unk_cc.func_ov094_022932d0(0, unk_23fc);
        unk_b2c.func_ov094_022941a0(0, unk_23fc);
        unk_b54.func_ov094_0229277c(unk_23fc);
    }
    return TRUE;
}

BOOL Unk_ov102_02297520::vfunc_0c() {
    func_020ed174();
    func_ov092_02291c5c();
    func_ov102_02296bc8();
    return TRUE;
}

BOOL Unk_ov102_02297520::vfunc_00() {
    func_ov102_02296bf0();
    func_ov002_02200a50(0);
    func_ov002_02200a60(0);
    return TRUE;
}

extern "C" Unk_ov102_02297520 *func_ov102_02297370() { return new Unk_ov102_02297520(); }

Unk_ov102_02297520::~Unk_ov102_02297520() {}
