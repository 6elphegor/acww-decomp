#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef vfunc_08
#undef vfunc_14

extern "C" {
void func_020ed174();
void func_020ed188(void *p);
void func_ov092_02291c5c();
BOOL func_0206ef00();
}

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
    void func_ov002_02200a68();

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

class Unk_ov131_02202658 {
public:
    Unk_ov131_02202658();
    virtual ~Unk_ov131_02202658();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    void func_ov002_02202844();
    u32 unk_04[0x60 / 4];
};

class Unk_ov131_02203994 {
public:
    Unk_ov131_02203994();
    void func_ov002_022036a4(s32 a);
    u32 unk_00[0x108 / 4];
};

class Unk_ov131_ov130_02293180 {
public:
    Unk_ov131_ov130_02293180();
    void func_ov130_022927b0(s32 a);
    u32 unk_00[0x11b8 / 4];
};

class Unk_ov131_022942f0;
typedef void (Unk_ov131_022942f0::*Unk_ov131_022942f0_Fn)();

// Vtable 0x022942f0, size 0x1414
class Unk_ov131_022942f0 : public Unk_ov002_022044e4 {
public:
    Unk_ov131_022942f0() : unk_94(), unk_f8(), unk_25c() {}
    virtual ~Unk_ov131_022942f0();

    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_24();
    virtual BOOL vfunc_4c();
    virtual BOOL vfunc_50();
    virtual BOOL vfunc_54();
    virtual BOOL vfunc_58();
    virtual BOOL vfunc_5c();

    // callees in other groups
    void func_ov131_02293e98();
    void func_ov131_02293e90();
    void func_ov131_02293e74();
    void func_ov131_02293e3c();
    void func_ov131_02293eb0();
    void func_ov131_02293ecc();
    BOOL func_ov131_02293744(s32 a);
    // state-table targets (0x8d table)
    void func_ov131_02293d38();
    void func_ov131_02293d04();
    void func_ov131_02293c74();
    void func_ov131_02293c4c();
    void func_ov131_02293bf0();
    void func_ov131_02293bc8();
    void func_ov131_02293b88();
    void func_ov131_02293b24();
    // state-table targets (0x8c table)
    void func_ov131_02293fb4();
    void func_ov131_02293f8c();
    void func_ov131_02293f54();
    void func_ov131_02293f24();

    // in range
    void func_ov131_02294044();

    /* 0x0091 */ u8 unk_91[3];
    /* 0x0094 */ Unk_ov131_02202658 unk_94;
    /* 0x00f8 */ Unk_ov131_02203994 unk_f8;
    /* 0x0200 */ u8 unk_200[0x5c];
    /* 0x025c */ Unk_ov131_ov130_02293180 unk_25c;
};

BOOL Unk_ov131_022942f0::vfunc_5c() {
    func_020ed188(this);
    return TRUE;
}

BOOL Unk_ov131_022942f0::vfunc_58() { return TRUE; }

BOOL Unk_ov131_022942f0::vfunc_54() { return TRUE; }

BOOL Unk_ov131_022942f0::vfunc_50() {
    func_ov131_02293e98();
    func_ov131_02294044();
    func_ov131_02293e90();
    return TRUE;
}

void Unk_ov131_022942f0::func_ov131_02294044() {
    static Unk_ov131_022942f0_Fn tbl[8] = {
        &Unk_ov131_022942f0::func_ov131_02293d38,
        &Unk_ov131_022942f0::func_ov131_02293d04,
        &Unk_ov131_022942f0::func_ov131_02293c74,
        &Unk_ov131_022942f0::func_ov131_02293c4c,
        &Unk_ov131_022942f0::func_ov131_02293bf0,
        &Unk_ov131_022942f0::func_ov131_02293bc8,
        &Unk_ov131_022942f0::func_ov131_02293b88,
        &Unk_ov131_022942f0::func_ov131_02293b24};
    (this->*tbl[unk_8d])();
}

BOOL Unk_ov131_022942f0::vfunc_4c() {
    static Unk_ov131_022942f0_Fn tbl[4] = {
        &Unk_ov131_022942f0::func_ov131_02293fb4,
        &Unk_ov131_022942f0::func_ov131_02293f8c,
        &Unk_ov131_022942f0::func_ov131_02293f54,
        &Unk_ov131_022942f0::func_ov131_02293f24};
    func_ov131_02293e74();
    (this->*tbl[unk_8c])();
    func_ov131_02293e3c();
    return TRUE;
}

BOOL Unk_ov131_022942f0::vfunc_24() {
    if (func_0206ef00()) {
        unk_94.func_ov002_02202844();
    }
    if (!func_ov131_02293744(1)) {
        return FALSE;
    }
    unk_f8.func_ov002_022036a4(func_ov002_02200920());
    unk_25c.func_ov130_022927b0(func_ov002_02200920());
    return TRUE;
}

BOOL Unk_ov131_022942f0::vfunc_0c() {
    func_020ed174();
    func_ov092_02291c5c();
    func_ov131_02293eb0();
    return TRUE;
}

BOOL Unk_ov131_022942f0::vfunc_00() {
    func_ov131_02293ecc();
    unk_8c = 0;
    func_ov002_02200a60(0);
    return TRUE;
}

extern "C" Unk_ov131_022942f0 *func_ov131_02294220() { return new Unk_ov131_022942f0(); }

Unk_ov131_022942f0::~Unk_ov131_022942f0() {}
