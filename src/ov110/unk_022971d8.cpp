#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef vfunc_08
#undef vfunc_14

extern "C" {
void func_020ed174();
void func_0206e63c();
BOOL func_0206e61c();
s32 func_0206ed50();
void func_020ed188(void *p);
void func_020020b8(u32 x);
void func_ov092_02291c5c();
BOOL func_0206ef00();
}

class Unk_ov110_02297778;

class Unk_ov110_020b85f8 {
public:
    Unk_ov110_020b85f8();
    u32 unk_00[0x38 / 4];
};

class Unk_ov110_02293a80 {
public:
    Unk_ov110_02293a80();
    void func_ov094_0229324c(s32 a, s32 b);
    void func_ov094_02293764(void *p);
    void func_ov094_022937a0();
    void func_ov094_022932d0(s32 a, s32 b);
    u32 unk_00[0xa60 / 4];
};

class Unk_ov110_022946a8 {
public:
    Unk_ov110_022946a8();
    void func_ov094_02293d2c();
    void func_ov094_022941a0(s32 a, s32 b);
    void func_ov094_022941f8(s32 a);
    u32 unk_00[0x28 / 4];
};

class Unk_ov110_02292d6c {
public:
    Unk_ov110_02292d6c();
    void func_ov094_0229277c(s32 a);
    u32 unk_00[0x15e0 / 4];
};

class Unk_ov110_02200800 {
public:
    void func_ov002_022006e4(s32 a);
    Unk_ov110_02200800();
    virtual ~Unk_ov110_02200800();
    virtual void vfunc_08();
    u32 unk_04[(0xc0 - 4) / 4];
};

class Unk_ov110_022027d0 {
public:
    Unk_ov110_022027d0();
    u32 unk_00[0x18 / 4];
};

class Unk_ov110_02202658 {
public:
    Unk_ov110_02202658();
    void func_ov002_02202844();
    u32 unk_00[0x64 / 4];
};

class Unk_ov110_022024a0 {
public:
    Unk_ov110_022024a0();
    u32 unk_00[0x300 / 4];
};

class Unk_ov110_02204400 {
public:
    Unk_ov110_02204400();
    u32 unk_00[0x108 / 4];
};

class Unk_ov110_0206fcc8 {
public:
    Unk_ov110_0206fcc8();
    ~Unk_ov110_0206fcc8();
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

typedef void (Unk_ov110_02297778::*Unk_ov110_02297778_Fn)();

// Vtable 0x02297778
class Unk_ov110_02297778 : public Unk_ov002_022044e4 {
public:
    Unk_ov110_02297778()
        : unk_100(), unk_138(), unk_b98(), unk_bc0(), unk_21a0(), unk_2260(), unk_2278(), unk_22dc(), unk_25dc(), unk_26e4() {}
    virtual ~Unk_ov110_02297778();

    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_24();
    virtual BOOL vfunc_4c();
    virtual BOOL vfunc_50();
    virtual BOOL vfunc_54();
    virtual BOOL vfunc_58();
    virtual BOOL vfunc_5c();

    // out-of-range callees (declarations only)
    BOOL func_ov110_02294d88(u32 mask);
    void func_ov110_02294e78(s32 a);
    void func_ov110_022956a0();
    void func_ov110_022958cc();
    void func_ov110_02296d70();
    void func_ov110_02296d84();
    void func_ov110_02296db8();
    void func_ov110_02296df0();
    void func_ov110_02296e28();
    void func_ov110_02296e30();
    void func_ov110_02296e4c();
    void func_ov110_02296e84();

    // state functions (table targets)
    void func_ov110_02296c0c();
    void func_ov110_02296bb8();
    void func_ov110_02296b1c();
    void func_ov110_022969ec();
    void func_ov110_02296874();
    void func_ov110_02296780();
    void func_ov110_02296700();
    void func_ov110_022966b4();
    void func_ov110_02296664();
    void func_ov110_02296630();
    void func_ov110_02296608();
    void func_ov110_022965d8();
    void func_ov110_022965ac();
    void func_ov110_02296558();
    void func_ov110_02296510();
    void func_ov110_022964c0();
    void func_ov110_02296488();
    void func_ov110_0229644c();
    void func_ov110_02296408();
    void func_ov110_022963e8();
    void func_ov110_022963b4();
    void func_ov110_02296370();
    void func_ov110_0229714c();
    void func_ov110_022970cc();
    void func_ov110_02297094();
    void func_ov110_02297024();
    void func_ov110_02296fbc();
    void func_ov110_02296f70();

    // in range
    void func_ov110_022971d8();
    BOOL func_ov110_0229726c();
    void func_ov110_0229728c();

    /* 0x0094 */ u8 unk_94[4];
    /* 0x0098 */ s32 unk_98;
    /* 0x009c */ s32 unk_9c;
    /* 0x00a0 */ u8 unk_a0[0x60];
    /* 0x0100 */ Unk_ov110_020b85f8 unk_100[1];
    /* 0x0138 */ Unk_ov110_02293a80 unk_138;
    /* 0x0b98 */ Unk_ov110_022946a8 unk_b98;
    /* 0x0bc0 */ Unk_ov110_02292d6c unk_bc0;
    /* 0x21a0 */ Unk_ov110_02200800 unk_21a0;
    /* 0x2260 */ Unk_ov110_022027d0 unk_2260;
    /* 0x2278 */ Unk_ov110_02202658 unk_2278;
    /* 0x22dc */ Unk_ov110_022024a0 unk_22dc;
    /* 0x25dc */ Unk_ov110_02204400 unk_25dc;
    /* 0x26e4 */ Unk_ov110_0206fcc8 unk_26e4[2];
};

void Unk_ov110_02297778::func_ov110_022971d8() {
    func_ov110_02296d84();
    func_ov110_02296d70();
    func_ov002_02200a50(1);
}

BOOL Unk_ov110_02297778::vfunc_5c() {
    func_020ed188(this);
    return TRUE;
}

BOOL Unk_ov110_02297778::vfunc_58() { return TRUE; }

BOOL Unk_ov110_02297778::vfunc_54() { return TRUE; }

BOOL Unk_ov110_02297778::vfunc_50() {
    func_0206e63c();
    if (func_ov110_0229726c()) {
        if (unk_8d == 0 || unk_8d == 1 || unk_8d == 4) {
            func_ov110_022956a0();
            unk_21a0.func_ov002_022006e4(0);
            func_ov110_02294e78(0);
            return TRUE;
        }
    }
    func_ov110_02296e30();
    func_ov110_0229728c();
    func_ov110_02296e28();
    return TRUE;
}

BOOL Unk_ov110_02297778::func_ov110_0229726c() {
    if (func_0206e61c() && func_0206ed50() == 0x20) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov110_02297778::func_ov110_0229728c() {
    static Unk_ov110_02297778_Fn tbl[22] = {
        &Unk_ov110_02297778::func_ov110_02296c0c, &Unk_ov110_02297778::func_ov110_02296bb8,
        &Unk_ov110_02297778::func_ov110_02296b1c, &Unk_ov110_02297778::func_ov110_022969ec,
        &Unk_ov110_02297778::func_ov110_02296874, &Unk_ov110_02297778::func_ov110_02296780,
        &Unk_ov110_02297778::func_ov110_02296700, &Unk_ov110_02297778::func_ov110_022966b4,
        &Unk_ov110_02297778::func_ov110_02296664, &Unk_ov110_02297778::func_ov110_02296630,
        &Unk_ov110_02297778::func_ov110_02296608, &Unk_ov110_02297778::func_ov110_022965d8,
        &Unk_ov110_02297778::func_ov110_022965ac, &Unk_ov110_02297778::func_ov110_02296558,
        &Unk_ov110_02297778::func_ov110_02296510, &Unk_ov110_02297778::func_ov110_022964c0,
        &Unk_ov110_02297778::func_ov110_02296488, &Unk_ov110_02297778::func_ov110_0229644c,
        &Unk_ov110_02297778::func_ov110_02296408, &Unk_ov110_02297778::func_ov110_022963e8,
        &Unk_ov110_02297778::func_ov110_022963b4, &Unk_ov110_02297778::func_ov110_02296370};
    (this->*tbl[unk_8d])();
}

BOOL Unk_ov110_02297778::vfunc_4c() {
    static Unk_ov110_02297778_Fn tbl[7] = {
        &Unk_ov110_02297778::func_ov110_022971d8,
        &Unk_ov110_02297778::func_ov110_0229714c,
        &Unk_ov110_02297778::func_ov110_022970cc,
        &Unk_ov110_02297778::func_ov110_02297094,
        &Unk_ov110_02297778::func_ov110_02297024,
        &Unk_ov110_02297778::func_ov110_02296fbc,
        &Unk_ov110_02297778::func_ov110_02296f70};
    func_ov110_02296df0();
    (this->*tbl[unk_8c])();
    func_ov110_02296db8();
    return TRUE;
}

BOOL Unk_ov110_02297778::vfunc_24() {
    if (!func_ov110_02294d88(1)) {
        return TRUE;
    }
    unk_21a0.vfunc_08();
    if (func_0206ef00()) {
        unk_2278.func_ov002_02202844();
    }
    func_ov110_022958cc();
    if (func_ov110_02294d88(0x80)) {
        unk_138.func_ov094_0229324c(0, unk_9c);
    }
    if (func_ov110_02294d88(2)) {
        unk_138.func_ov094_022932d0(0, unk_98);
        unk_b98.func_ov094_022941a0(0, unk_98);
        unk_bc0.func_ov094_0229277c(unk_98);
    }
    return TRUE;
}

BOOL Unk_ov110_02297778::vfunc_0c() {
    func_020ed174();
    func_ov092_02291c5c();
    func_ov110_02296e4c();
    return TRUE;
}

BOOL Unk_ov110_02297778::vfunc_00() {
    func_ov110_02296e84();
    func_ov002_02200a50(0);
    func_ov002_02200a60(0);
    return TRUE;
}

extern "C" Unk_ov110_02297778 *func_ov110_022975b0() { return new Unk_ov110_02297778(); }

Unk_ov110_02297778::~Unk_ov110_02297778() {}
