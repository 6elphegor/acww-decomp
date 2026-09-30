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

class Unk_ov099_02296b00;

class Unk_ov099_020b85f8 {
public:
    Unk_ov099_020b85f8();
    u32 unk_00[0x38 / 4];
};

class Unk_ov099_02293a80 {
public:
    Unk_ov099_02293a80();
    void func_ov094_02293998();
    void func_ov094_022939a0();
    void func_ov094_022932d0(s32 a, s32 b);
    u32 unk_00[0xa60 / 4];
};

class Unk_ov099_022946a8 {
public:
    Unk_ov099_022946a8();
    void func_ov094_0229462c();
    void func_ov094_022941a0(s32 a, s32 b);
    u32 unk_00[0x28 / 4];
};

class Unk_ov099_02292d6c {
public:
    Unk_ov099_02292d6c();
    void func_ov094_02292a80();
    void func_ov094_02292aa4();
    void func_ov094_02292acc();
    void func_ov094_0229277c(s32 a);
    u32 unk_00[0x15e0 / 4];
};

class Unk_ov099_02200800 {
public:
    Unk_ov099_02200800();
    virtual ~Unk_ov099_02200800();
    virtual void vfunc_08();
    BOOL func_ov002_0220071c();
    u32 unk_04[(0xc0 - 4) / 4];
};

class Unk_ov099_022027d0 {
public:
    Unk_ov099_022027d0();
    u32 unk_00[0x18 / 4];
};

class Unk_ov099_02202658 {
public:
    Unk_ov099_02202658();
    void func_ov002_02202844();
    u32 unk_00[0x64 / 4];
};

class Unk_ov099_022024a0 {
public:
    Unk_ov099_022024a0();
    void func_ov002_02201b04();
    void func_ov002_02201b28();
    void func_ov002_02201b58();
    u32 unk_00[0x300 / 4];
};

class Unk_ov099_02204400 {
public:
    Unk_ov099_02204400();
    u32 unk_00[0x120 / 4];
};

class Unk_ov099_02065cd4 {
public:
    Unk_ov099_02065cd4();
    u32 unk_00[0x104 / 4];
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

typedef void (Unk_ov099_02296b00::*Unk_ov099_02296b00_Fn)();

class Unk_ov099_02296b00 : public Unk_ov002_022044e4 {
public:
    Unk_ov099_02296b00()
        : unk_94(), unk_cc(), unk_b2c(), unk_b54(), unk_2134(), unk_21f4(), unk_220c(), unk_2270(), unk_2570(), unk_2690() {}
    virtual ~Unk_ov099_02296b00();

    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_24();
    virtual BOOL vfunc_4c();
    virtual BOOL vfunc_50();
    virtual BOOL vfunc_54();
    virtual BOOL vfunc_58();
    virtual BOOL vfunc_5c();

    BOOL func_ov099_02294d6c(s32 a);
    void func_ov099_02295454();
    void func_ov099_022954f4();
    void func_ov099_022959fc();
    void func_ov099_02296378();
    void func_ov099_02296398();
    void func_ov099_022963d0();
    void func_ov099_02296424();
    void func_ov099_02296454();
    void func_ov099_022964f4();
    void func_ov099_02296544();
    void func_ov099_022965a8();
    void func_ov099_022965e4();
    void func_ov099_02296654();

    /* 0x0094 */ Unk_ov099_020b85f8 unk_94[1];
    /* 0x00cc */ Unk_ov099_02293a80 unk_cc;
    /* 0x0b2c */ Unk_ov099_022946a8 unk_b2c;
    /* 0x0b54 */ Unk_ov099_02292d6c unk_b54;
    /* 0x2134 */ Unk_ov099_02200800 unk_2134;
    /* 0x21f4 */ Unk_ov099_022027d0 unk_21f4;
    /* 0x220c */ Unk_ov099_02202658 unk_220c;
    /* 0x2270 */ Unk_ov099_022024a0 unk_2270;
    /* 0x2570 */ Unk_ov099_02204400 unk_2570;
    /* 0x2690 */ Unk_ov099_02065cd4 unk_2690;
};

BOOL Unk_ov099_02296b00::vfunc_4c() {
    static Unk_ov099_02296b00_Fn tbl[5] = {
        &Unk_ov099_02296b00::func_ov099_02296654, &Unk_ov099_02296b00::func_ov099_022965e4,
        &Unk_ov099_02296b00::func_ov099_022965a8, &Unk_ov099_02296b00::func_ov099_02296544,
        &Unk_ov099_02296b00::func_ov099_022964f4};
    func_ov099_022963d0();
    (this->*tbl[unk_8c])();
    func_ov099_02296398();
    return TRUE;
}

BOOL Unk_ov099_02296b00::vfunc_24() {
    unk_2270.func_ov002_02201b28();
    if (!func_ov099_02294d6c(1)) {
        return TRUE;
    }
    unk_2134.vfunc_08();
    if (func_0206ef00()) {
        unk_220c.func_ov002_02202844();
    }
    func_ov099_02295454();
    if (func_ov099_02294d6c(2)) {
        unk_cc.func_ov094_022932d0(0, *(s32 *)((u8 *)this + 0x267c));
        unk_b2c.func_ov094_022941a0(0, *(s32 *)((u8 *)this + 0x267c));
        unk_b54.func_ov094_0229277c(*(s32 *)((u8 *)this + 0x267c));
    }
    return TRUE;
}

BOOL Unk_ov099_02296b00::vfunc_0c() {
    func_020ed174();
    func_ov092_02291c5c();
    func_ov099_02296424();
    return TRUE;
}

BOOL Unk_ov099_02296b00::vfunc_00() {
    func_ov099_02296454();
    func_ov002_02200a50(0);
    func_ov002_02200a60(0);
    return TRUE;
}

extern "C" Unk_ov099_02296b00 *func_ov099_02296978() { return new Unk_ov099_02296b00(); }

Unk_ov099_02296b00::~Unk_ov099_02296b00() {}
