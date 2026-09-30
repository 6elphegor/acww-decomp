#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef vfunc_08
#undef vfunc_14

extern "C" {
extern u8 data_ov113_022936a0[];
extern u8 data_ov113_022936c0[];
void func_020ed174();
void func_020b8800(void *p);
void func_0206fca8(void *p);
void func_020ed188(void *p);
void func_020020b8(u32 x);
void func_ov092_02291c5c();
void func_020ed174();
void func_02087e70(u32 a, void *h, s32 x, s32 y, s32 s0, s32 s1, s32 s2, s32 s3, s32 s4, s32 s5, s32 s6, s32 s7);
s32 func_02088730(s32 mode, void *info, s32 x, s32 y, s32 pal, s32 pri, s32 *rect);
void func_02110a64(u32 a, u32 b, u32 c, u32 d, u32 e, u32 f);
void func_ov092_02291c5c();
BOOL func_0206e61c();
void func_0206e63c();
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
    void func_ov002_022008a8(s32 a, s32 b, s32 mode, s32 dist);
    s32 func_ov002_02200914();
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



class Unk_ov113_020b8800 {
public:
    Unk_ov113_020b8800();
    u32 unk_00[0x24 / 4];
};

class Unk_ov113_0206fcc8 {
public:
    Unk_ov113_0206fcc8();
    ~Unk_ov113_0206fcc8();
    u32 unk_00[0x40 / 4];
};

class Unk_ov113_02202658 {
public:
    Unk_ov113_02202658();
    virtual ~Unk_ov113_02202658();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    void func_ov002_02202844();
    u32 unk_04[0x60 / 4];
};

class Unk_ov113_02293640;
typedef void (Unk_ov113_02293640::*Unk_ov113_02293640_Fn)();

// Vtable 0x02293640, size 0x29cc
class Unk_ov113_02293640 : public Unk_ov002_022044e4 {
public:
    Unk_ov113_02293640() : unk_26a0(), unk_26e8(), unk_27e8(), unk_2968() {}
    virtual ~Unk_ov113_02293640();

    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_24();
    virtual BOOL vfunc_4c();
    virtual BOOL vfunc_50();
    virtual BOOL vfunc_54();
    virtual BOOL vfunc_58();
    virtual BOOL vfunc_5c();

    // callees in other groups
    void func_ov113_02292d78();
    void func_ov113_02292d10();
    void func_ov113_022927b0();
    BOOL func_ov113_02292764(u32 mask);
    void func_ov113_02292340();
    void func_ov113_02292464();
    void func_ov113_02292e48();
    void func_ov113_02292ddc();
    void func_ov113_02292de4();
    void func_ov113_02292d9c();
    void func_ov113_02292e50();
    void func_ov113_02292ec0();
    // state-table targets (0x8c)
    void func_ov113_02293198();
    void func_ov113_02293168();
    void func_ov113_02293120();
    void func_ov113_022930f0();
    void func_ov113_022930a4();
    void func_ov113_0229300c();
    void func_ov113_02292fdc();
    void func_ov113_02292f50();
    void func_ov113_02292ef0();
    // state-table targets (0x8d)
    void func_ov113_02292cc0();
    void func_ov113_02292c04();
    void func_ov113_02292be0();
    void func_ov113_02292b94();
    void func_ov113_02292b6c();

    void func_ov113_02293480(s32 a, s32 *p);

    /* 0x0091 */ u8 unk_91[3];
    /* 0x0094 */ u32 unk_94;
    /* 0x0098 */ u8 unk_98[2];
    /* 0x009a */ u8 unk_9a;
    /* 0x009b */ u8 unk_9b;
    /* 0x009c */ u8 unk_9c;
    /* 0x009d */ u8 unk_9d;
    /* 0x009e */ u8 unk_9e;
    /* 0x009f */ u8 unk_9f[0x26a0 - 0x9f];
    /* 0x26a0 */ Unk_ov113_020b8800 unk_26a0[2];
    /* 0x26e8 */ Unk_ov113_0206fcc8 unk_26e8[4];
    /* 0x27e8 */ Unk_ov113_0206fcc8 unk_27e8[6];
    /* 0x2968 */ Unk_ov113_02202658 unk_2968;
};

void Unk_ov113_02293640::func_ov113_02293198() {
    func_ov113_02292d78();
    func_ov113_02292d10();
    func_ov002_022008a8(8, 6, 0, 0x30);
    func_020020b8(2);
    func_ov002_02200840(2, 0, 0);
    func_ov002_02200a50(1);
    func_ov113_022927b0();
}

BOOL Unk_ov113_02293640::vfunc_5c() {
    func_020ed188(this);
    return TRUE;
}

BOOL Unk_ov113_02293640::vfunc_58() { return TRUE; }

BOOL Unk_ov113_02293640::vfunc_54() { return TRUE; }

BOOL Unk_ov113_02293640::vfunc_50() {
    func_0206e63c();
    if (func_0206e61c()) {
        if (unk_8d == 0) goto st;
        if (unk_8d == 1) {
        st:
            unk_9b = 3;
            func_ov113_02292340();
            func_ov113_02292464();
            return TRUE;
        }
    }
    func_ov113_02292e48();
    static Unk_ov113_02293640_Fn tbl[5] = {
        &Unk_ov113_02293640::func_ov113_02292cc0,
        &Unk_ov113_02293640::func_ov113_02292c04,
        &Unk_ov113_02293640::func_ov113_02292be0,
        &Unk_ov113_02293640::func_ov113_02292b94,
        &Unk_ov113_02293640::func_ov113_02292b6c};
    (this->*tbl[unk_8d])();
    func_ov113_02292ddc();
    return TRUE;
}

BOOL Unk_ov113_02293640::vfunc_4c() {
    static Unk_ov113_02293640_Fn tbl[9] = {
        &Unk_ov113_02293640::func_ov113_02293198,
        &Unk_ov113_02293640::func_ov113_02293168,
        &Unk_ov113_02293640::func_ov113_02293120,
        &Unk_ov113_02293640::func_ov113_022930f0,
        &Unk_ov113_02293640::func_ov113_022930a4,
        &Unk_ov113_02293640::func_ov113_0229300c,
        &Unk_ov113_02293640::func_ov113_02292fdc,
        &Unk_ov113_02293640::func_ov113_02292f50,
        &Unk_ov113_02293640::func_ov113_02292ef0};
    func_ov113_02292de4();
    (this->*tbl[unk_8c])();
    func_ov113_02292d9c();
    return TRUE;
}

BOOL Unk_ov113_02293640::vfunc_24() {
    if (!func_ov113_02292764(8)) {
        return TRUE;
    }
    if (func_0206ef00()) {
        unk_2968.func_ov002_02202844();
    }
    s32 x = 0x80;
    s32 y = unk_94 + 0x60;
    s32 p0 = 10;
    s32 p1 = 10;
    if (func_ov113_02292764(2)) {
        p0 = 11;
    } else if (func_ov113_02292764(4)) {
        p1 = 11;
    }
    func_02087e70(0, (void *)data_ov113_022936a0, 0x80, y, p0, 1, 0x1000, 0x1000, 0, -1, 0, 0);
    func_02087e70(0, (void *)data_ov113_022936c0, 0x80, y, p1, 1, 0x1000, 0x1000, 0, -1, 0, 0);
    x += unk_9e;
    if (func_ov113_02292764(0x100)) {
        x += func_ov002_02200914();
    }
    func_ov113_02293480(x, (s32 *)y);
    return TRUE;
}

void Unk_ov113_02293640::func_ov113_02293480(s32 a, s32 *p) {
    u8 i;
    s32 z = 0;
    for (i = 0; i < unk_9d; i++) {
        func_02088730(z, (void *)(data_ov113_022936a0 + (i + 8) * 8), a, (s32)p, i == unk_9a ? 11 : 10, 1, (s32 *)z);
    }
}

BOOL Unk_ov113_02293640::vfunc_0c() {
    func_020ed174();
    func_ov092_02291c5c();
    func_ov113_02292e50();
    return TRUE;
}

BOOL Unk_ov113_02293640::vfunc_00() {
    func_02110a64(0x4000050, 0x1f, 0x20, 0x10, 0x10, 0);
    func_ov113_02292ec0();
    func_ov002_02200a50(0);
    func_ov002_02200a60(1);
    return TRUE;
}

extern "C" Unk_ov113_02293640 *func_ov113_02293530() { return new Unk_ov113_02293640(); }

Unk_ov113_02293640::~Unk_ov113_02293640() {}
