#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef vfunc_08
#undef vfunc_14

extern "C" {
void func_020ed174();
void func_ov090_02291d2c();
void func_0206fca8(void *p);
void func_020b8800(void *p);
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

class Unk_ov116_0206fcc8 {
public:
    Unk_ov116_0206fcc8();
    ~Unk_ov116_0206fcc8();
    u32 unk_00[0x40 / 4];
};

class Unk_ov116_02202658 {
public:
    Unk_ov116_02202658();
    virtual ~Unk_ov116_02202658();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    void func_ov002_02202844();
    u32 unk_04[0x60 / 4];
};

// sub-object at +0xf8 (ov114 class, size 0x129c)
class Unk_ov116_ov114_022964d8 {
public:
    Unk_ov116_ov114_022964d8();
    void func_ov114_02295fec(u32 a);
    void func_ov114_02296078(u32 a);
    void func_ov114_022956a4(u32 a);
    void func_ov114_0229600c();
    u32 unk_00[0x129c / 4];
};

class Unk_ov116_02297378;
typedef void (Unk_ov116_02297378::*Unk_ov116_02297378_Fn)();

// Vtable 0x02297378, size 0x13e0
class Unk_ov116_02297378 : public Unk_ov002_022044e4 {
public:
    Unk_ov116_02297378() : unk_94(), unk_f8(), unk_1394() {}
    virtual ~Unk_ov116_02297378();

    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_24();
    virtual BOOL vfunc_4c();

    BOOL func_ov116_02296878(u32 mask);
    void func_ov116_02296df4();
    void func_ov116_02296de8();
    void func_ov116_02296e2c();
    void func_ov116_02296e44();

    // state-table targets (0x8c table)
    void func_ov116_02296f3c();
    void func_ov116_02296f14();
    void func_ov116_02296edc();
    void func_ov116_02296ea4();

    /* 0x0091 */ u8 unk_91[3];
    /* 0x0094 */ Unk_ov116_02202658 unk_94;
    /* 0x00f8 */ Unk_ov116_ov114_022964d8 unk_f8;
    /* 0x1394 */ Unk_ov116_0206fcc8 unk_1394[1];
    /* 0x13d4 */ u32 unk_13d4;
    /* 0x13d8 */ u16 unk_13d8;
    /* 0x13da */ u16 unk_13da;
    /* 0x13dc */ u32 unk_13dc;
};

BOOL Unk_ov116_02297378::vfunc_4c() {
    static Unk_ov116_02297378_Fn tbl[4] = {
        &Unk_ov116_02297378::func_ov116_02296f3c,
        &Unk_ov116_02297378::func_ov116_02296f14,
        &Unk_ov116_02297378::func_ov116_02296edc,
        &Unk_ov116_02297378::func_ov116_02296ea4};
    func_ov116_02296df4();
    (this->*tbl[unk_8c])();
    func_ov116_02296de8();
    return TRUE;
}

BOOL Unk_ov116_02297378::vfunc_24() {
    if (!func_ov116_02296878(1)) {
        return TRUE;
    }
    unk_f8.func_ov114_02295fec(unk_13d4);
    if (func_0206ef00()) {
        unk_94.func_ov002_02202844();
    }
    unk_f8.func_ov114_02296078(unk_13d4);
    unk_f8.func_ov114_022956a4(unk_13d4);
    unk_f8.func_ov114_0229600c();
    return TRUE;
}

BOOL Unk_ov116_02297378::vfunc_0c() {
    func_020ed174();
    func_ov090_02291d2c();
    func_ov116_02296e2c();
    return TRUE;
}

BOOL Unk_ov116_02297378::vfunc_00() {
    func_ov116_02296e44();
    func_ov002_02200a50(0);
    func_ov002_02200a60(1);
    return TRUE;
}

extern "C" Unk_ov116_02297378 *func_ov116_022972a0() { return new Unk_ov116_02297378(); }

Unk_ov116_02297378::~Unk_ov116_02297378() {}
