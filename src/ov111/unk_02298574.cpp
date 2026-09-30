#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef vfunc_08
#undef vfunc_14

extern "C" {
void func_020ed174();
void func_ov090_02291d2c();
void func_020b8800(void *p);
void func_0206fca8(void *p);
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


class Unk_ov111_02298ac0;

class Unk_ov111_020b8800 {
public:
    Unk_ov111_020b8800();
    u32 unk_00[0x24 / 4];
};

class Unk_ov111_0206fcc8 {
public:
    Unk_ov111_0206fcc8();
    ~Unk_ov111_0206fcc8();
    u32 unk_00[0x40 / 4];
};

// sub-object at +0xac of the scene (ov095 menu/state struct; methods from ov095)
class Unk_ov111_ov095_02293944 {
public:
    Unk_ov111_ov095_02293944() : unk_22f4(), unk_233c() {}
    void func_ov095_02293944();
    u32 unk_00[0x22f4 / 4];
    /* 0x22f4 */ Unk_ov111_020b8800 unk_22f4[2];
    /* 0x233c */ Unk_ov111_0206fcc8 unk_233c[2];
};

class Unk_ov111_02039b04 {
public:
    Unk_ov111_02039b04();
    u32 unk_00[0x34 / 4];
};

class Unk_ov111_020a791c {
public:
    Unk_ov111_020a791c();
    virtual ~Unk_ov111_020a791c();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    u32 unk_04[0x2c / 4];
};

// vtable 0x02298a30: [D1, D0, vfunc_08, vfunc_0c] text-buffer-like class, inline ctor (base ctor func_020a791c)
class Unk_ov111_02298a30 : public Unk_ov111_020a791c {
public:
    Unk_ov111_02298a30() {}
    virtual ~Unk_ov111_02298a30();
    virtual void vfunc_08();
    virtual void vfunc_0c();
};

class Unk_ov111_02202658 {
public:
    Unk_ov111_02202658();
    virtual ~Unk_ov111_02202658();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    void func_ov002_02202844();
    u32 unk_04[0x60 / 4];
};

class Unk_ov111_02204400 {
public:
    Unk_ov111_02204400();
    u32 unk_00[0x108 / 4];
};

class Unk_ov111_02298a48;
typedef void (Unk_ov111_02298a48::*Unk_ov111_02298a48_Fn)();

// Vtable 0x02298a48, size 0x3e58
class Unk_ov111_02298a48 : public Unk_ov002_022044e4 {
public:
    Unk_ov111_02298a48()
        : unk_ac(), unk_3c68(), unk_3c9c(), unk_3ccc(), unk_3d30() {}
    virtual ~Unk_ov111_02298a48();

    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_24();
    virtual BOOL vfunc_4c();
    virtual BOOL vfunc_50();
    virtual BOOL vfunc_54();
    virtual BOOL vfunc_58();
    virtual BOOL vfunc_5c();

    // callees in other groups
    BOOL func_ov111_022984b0();
    BOOL func_ov111_02296978(u32 mask);
    void func_ov111_02296a24();
    void func_ov111_022977f8();
    void func_ov111_02297814();
    void func_ov111_02297978();
    void func_ov111_022979a0();

    // state-table targets (0x8c tables)
    void func_ov111_02298394();
    void func_ov111_02298364();
    void func_ov111_02298310();
    void func_ov111_022982e0();
    void func_ov111_022982b0();
    void func_ov111_02298280();
    // state-table targets (0x8d table)
    void func_ov111_022981b0();
    void func_ov111_0229815c();
    void func_ov111_0229811c();
    void func_ov111_02298030();
    void func_ov111_02298004();
    void func_ov111_02297f84();
    void func_ov111_02297f20();
    void func_ov111_02297f00();
    void func_ov111_02297eb4();
    void func_ov111_02297d4c();
    void func_ov111_02297cd0();
    void func_ov111_02297ca0();
    void func_ov111_02297c70();
    void func_ov111_02297b0c();
    void func_ov111_02297a34();
    void func_ov111_02297a0c();

    // in range
    void func_ov111_02298574();
    void func_ov111_022985ac();
    void func_ov111_02298620();

    /* 0x0091 */ u8 unk_91[0x11];
    /* 0x00a2 */ u8 unk_a2;
    /* 0x00a3 */ u8 unk_a3[9];
    /* 0x00ac */ Unk_ov111_ov095_02293944 unk_ac;
    /* 0x2468 */ u32 unk_2468[0x1800 / 4];
    /* 0x3c68 */ Unk_ov111_02039b04 unk_3c68;
    /* 0x3c9c */ Unk_ov111_02298a30 unk_3c9c;
    /* 0x3ccc */ Unk_ov111_02202658 unk_3ccc;
    /* 0x3d30 */ Unk_ov111_02204400 unk_3d30;
    /* 0x3e38 */ u32 unk_3e38[0x20 / 4];
};

void Unk_ov111_02298a48::func_ov111_02298574() {
    if (unk_a2 != 0) {
        unk_a2 = *(volatile u8 *)&unk_a2 - 1;
        if (unk_a2 == 0) {
            unk_ac.func_ov095_02293944();
        }
    }
    func_ov111_02296a24();
}

void Unk_ov111_02298a48::func_ov111_022985ac() {
    unk_3ccc.vfunc_0c();
}

BOOL Unk_ov111_02298a48::vfunc_18() {
    func_ov111_022977f8();
    func_ov002_02200a68();
    return TRUE;
}

BOOL Unk_ov111_02298a48::vfunc_5c() {
    func_020ed188(this);
    return TRUE;
}

BOOL Unk_ov111_02298a48::vfunc_58() { return TRUE; }

BOOL Unk_ov111_02298a48::vfunc_54() { return TRUE; }

BOOL Unk_ov111_02298a48::vfunc_50() {
    if (func_ov111_022984b0()) {
        return TRUE;
    }
    func_ov111_022985ac();
    func_ov111_02298620();
    func_ov111_02298574();
    return TRUE;
}

void Unk_ov111_02298a48::func_ov111_02298620() {
    static Unk_ov111_02298a48_Fn tbl[16] = {
        &Unk_ov111_02298a48::func_ov111_022981b0,
        &Unk_ov111_02298a48::func_ov111_0229815c,
        &Unk_ov111_02298a48::func_ov111_0229811c,
        &Unk_ov111_02298a48::func_ov111_02298030,
        &Unk_ov111_02298a48::func_ov111_02298004,
        &Unk_ov111_02298a48::func_ov111_02297f84,
        &Unk_ov111_02298a48::func_ov111_02297f20,
        &Unk_ov111_02298a48::func_ov111_02297f00,
        &Unk_ov111_02298a48::func_ov111_02297eb4,
        &Unk_ov111_02298a48::func_ov111_02297d4c,
        &Unk_ov111_02298a48::func_ov111_02297cd0,
        &Unk_ov111_02298a48::func_ov111_02297ca0,
        &Unk_ov111_02298a48::func_ov111_02297c70,
        &Unk_ov111_02298a48::func_ov111_02297b0c,
        &Unk_ov111_02298a48::func_ov111_02297a34,
        &Unk_ov111_02298a48::func_ov111_02297a0c};
    (this->*tbl[unk_8d])();
}

BOOL Unk_ov111_02298a48::vfunc_4c() {
    static Unk_ov111_02298a48_Fn tbl[6] = {
        &Unk_ov111_02298a48::func_ov111_02298394,
        &Unk_ov111_02298a48::func_ov111_02298364,
        &Unk_ov111_02298a48::func_ov111_02298310,
        &Unk_ov111_02298a48::func_ov111_022982e0,
        &Unk_ov111_02298a48::func_ov111_022982b0,
        &Unk_ov111_02298a48::func_ov111_02298280};
    (this->*tbl[unk_8c])();
    return TRUE;
}

BOOL Unk_ov111_02298a48::vfunc_24() {
    if (func_ov111_02296978(4)) {
        if (func_0206ef00()) {
            unk_3ccc.func_ov002_02202844();
        }
        func_ov111_02297814();
    }
    return TRUE;
}

BOOL Unk_ov111_02298a48::vfunc_0c() {
    func_020ed174();
    func_ov090_02291d2c();
    func_ov111_02297978();
    return TRUE;
}

BOOL Unk_ov111_02298a48::vfunc_00() {
    func_ov111_022979a0();
    func_ov002_02200a50(0);
    func_ov002_02200a60(1);
    return TRUE;
}

extern "C" Unk_ov111_02298a48 *func_ov111_0229885c() { return new Unk_ov111_02298a48(); }

Unk_ov111_02298a48::~Unk_ov111_02298a48() {}
