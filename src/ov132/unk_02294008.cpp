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

class Unk_ov132_02202658 {
public:
    Unk_ov132_02202658();
    virtual ~Unk_ov132_02202658();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    void func_ov002_02202844();
    u32 unk_04[0x60 / 4];
};

class Unk_ov132_02203994 {
public:
    Unk_ov132_02203994();
    void func_ov002_022036a4(s32 a);
    void func_ov002_02203510(s32 a);
    u32 unk_00[0x108 / 4];
};

// 0x40-byte objects (ctor func_0206fcc8, dtor func_0206fca8)
class Unk_ov132_0206fca8 {
public:
    Unk_ov132_0206fca8();
    ~Unk_ov132_0206fca8();
    u32 unk_00[0x40 / 4];
};

// 0x24-byte objects (ctor func_020b8800)
class Unk_ov132_020b8800 {
public:
    Unk_ov132_020b8800();
    u32 unk_00[0x24 / 4];
};

class Unk_ov132_02204400 {
public:
    Unk_ov132_02204400();
    u32 unk_00[0x108 / 4];
};

class Unk_ov132_02294390;
typedef void (Unk_ov132_02294390::*Unk_ov132_02294390_Fn)();

// Vtable 0x02294390, size 0x1434
class Unk_ov132_02294390 : public Unk_ov002_022044e4 {
public:
    Unk_ov132_02294390() : unk_94(), unk_f8(), unk_25c(), unk_2dc(), unk_324() {}
    virtual ~Unk_ov132_02294390();

    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_24();
    virtual BOOL vfunc_4c();
    virtual BOOL vfunc_50();
    virtual BOOL vfunc_54();
    virtual BOOL vfunc_58();
    virtual BOOL vfunc_5c();

    // callees in other groups
    void func_ov132_02293b04();
    void func_ov132_02293f78();
    void func_ov132_02293760(s32 a);
    BOOL func_ov132_02293770(s32 a);
    void func_ov132_02293ec0();
    void func_ov132_02293dd8();
    void func_ov132_02293dcc();
    void func_ov132_02293f1c();
    void func_ov132_02293f14();
    void func_ov132_02293efc();
    void func_ov132_02293ef8();
    void func_ov132_02293f34();
    void func_ov132_02293f64();
    // state-table targets (0x8d table)
    void func_ov132_02293d40();
    void func_ov132_02293ca4();
    void func_ov132_02293c7c();
    void func_ov132_02293c3c();
    void func_ov132_02293c14();
    void func_ov132_02293bb0();
    void func_ov132_02293b84();
    void func_ov132_02293b58();
    // state-table targets (0x8c table)
    void func_ov132_02293f98();
    void func_ov132_02293fc8();

    // in range
    void func_ov132_02294008();
    void func_ov132_02294030();
    void func_ov132_022940c0();

    /* 0x0091 */ u8 unk_91[3];
    /* 0x0094 */ Unk_ov132_02202658 unk_94;
    /* 0x00f8 */ Unk_ov132_02203994 unk_f8;
    /* 0x0200 */ u8 unk_200[0x5c];
    /* 0x025c */ Unk_ov132_0206fca8 unk_25c[2];
    /* 0x02dc */ Unk_ov132_020b8800 unk_2dc[2];
    /* 0x0324 */ Unk_ov132_02204400 unk_324;
    /* 0x042c */ u32 unk_42c[0x1008 / 4];
};

BOOL Unk_ov132_02294390::vfunc_5c() {
    func_020ed188(this);
    return TRUE;
}

BOOL Unk_ov132_02294390::vfunc_58() { return TRUE; }

BOOL Unk_ov132_02294390::vfunc_54() { return TRUE; }

BOOL Unk_ov132_02294390::vfunc_50() {
    func_ov132_02293f1c();
    func_ov132_022940c0();
    func_ov132_02293f14();
    return TRUE;
}

void Unk_ov132_02294390::func_ov132_02294008() {
    if (func_ov002_02200908(0)) {
        func_ov002_02200a60(2);
        func_ov132_02293b04();
    }
    func_ov132_02293f78();
}

void Unk_ov132_02294390::func_ov132_02294030() {
    func_ov132_02293ec0();
    func_ov132_02293dd8();
    func_ov132_02293dcc();
    func_ov002_022008e0(10, 4, 0, 0x30);
    func_020020b8(6);
    func_020020b8(4);
    func_ov132_02293f78();
    func_ov132_02293760(1);
    unk_f8.func_ov002_02203510(0x65);
    func_ov002_02200a50(1);
}

void Unk_ov132_02294390::func_ov132_022940c0() {
    static Unk_ov132_02294390_Fn tbl[8] = {
        &Unk_ov132_02294390::func_ov132_02293d40,
        &Unk_ov132_02294390::func_ov132_02293ca4,
        &Unk_ov132_02294390::func_ov132_02293c7c,
        &Unk_ov132_02294390::func_ov132_02293c3c,
        &Unk_ov132_02294390::func_ov132_02293c14,
        &Unk_ov132_02294390::func_ov132_02293bb0,
        &Unk_ov132_02294390::func_ov132_02293b84,
        &Unk_ov132_02294390::func_ov132_02293b58};
    (this->*tbl[unk_8d])();
}

BOOL Unk_ov132_02294390::vfunc_4c() {
    static Unk_ov132_02294390_Fn tbl[4] = {
        &Unk_ov132_02294390::func_ov132_02294030,
        &Unk_ov132_02294390::func_ov132_02294008,
        &Unk_ov132_02294390::func_ov132_02293fc8,
        &Unk_ov132_02294390::func_ov132_02293f98};
    func_ov132_02293efc();
    (this->*tbl[unk_8c])();
    func_ov132_02293ef8();
    return TRUE;
}

BOOL Unk_ov132_02294390::vfunc_24() {
    if (func_0206ef00()) {
        unk_94.func_ov002_02202844();
    }
    if (!func_ov132_02293770(1)) {
        return FALSE;
    }
    unk_f8.func_ov002_022036a4(func_ov002_02200920());
    return TRUE;
}

BOOL Unk_ov132_02294390::vfunc_0c() {
    func_020ed174();
    func_ov092_02291c5c();
    func_ov132_02293f34();
    return TRUE;
}

BOOL Unk_ov132_02294390::vfunc_00() {
    func_ov132_02293f64();
    unk_8c = 0;
    func_ov002_02200a60(0);
    return TRUE;
}

extern "C" Unk_ov132_02294390 *func_ov132_02294288() { return new Unk_ov132_02294390(); }

Unk_ov132_02294390::~Unk_ov132_02294390() {}
