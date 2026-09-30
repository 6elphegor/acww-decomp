#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef vfunc_08
#undef vfunc_14

extern "C" {
s32 func_020ed174(void *p);
void func_020ed188(void *p);
void func_020b8800(void *p);
void func_0206fca8(void *p);
void func_ov092_02291ce4(s32 a, s32 b, s32 c);
void func_ov092_02291c5c();
void func_02087e70(u32 a, void *h, s32 x, s32 y, s32 s0, s32 s1, s32 s2, s32 s3, s32 s4, s32 s5, s32 s6, s32 s7);
void func_0208dae8(void *p, s32 a, s32 b);
extern u8 data_ov120_02294f78[];
extern u8 data_ov120_02294f98[];
extern u8 data_ov120_02294fb8[];
}

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

class Unk_ov120_020b8800 {
public:
    Unk_ov120_020b8800();
    u32 unk_00[0x24 / 4];
};

class Unk_ov120_0206fcc8 {
public:
    Unk_ov120_0206fcc8();
    ~Unk_ov120_0206fcc8();
    u32 unk_00[0x40 / 4];
};

// sub-object at +0x438 (ctor func_ov002_02202f88), 0x48 bytes, polymorphic
class Unk_ov120_02202f88 {
public:
    Unk_ov120_02202f88();
    virtual ~Unk_ov120_02202f88();
    virtual void vfunc_08();
    u32 unk_04[0x44 / 4];
};

// sub-object at +0x480 (ctor func_ov002_02202658), 0x64 bytes
class Unk_ov120_02202658 {
public:
    Unk_ov120_02202658();
    virtual ~Unk_ov120_02202658();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    void func_ov002_02202844();
    u32 unk_04[0x60 / 4];
};

// 3-byte record, ctor func_ov120_02292de4, dtor func_ov120_02292de0
class Unk_ov120_02292de0 {
public:
    Unk_ov120_02292de0();
    ~Unk_ov120_02292de0();
    u8 unk_00;
    u8 unk_01;
    u8 unk_02;
};

class Unk_ov120_02295010;
typedef void (Unk_ov120_02295010::*Unk_ov120_02295010_Fn)();

// Vtable 0x02295010, size 0x2534
class Unk_ov120_02295010 : public Unk_ov002_022044e4 {
public:
    Unk_ov120_02295010()
        : unk_b0(), unk_f8(), unk_438(), unk_480(), unk_24fe(), unk_2507() {}
    virtual ~Unk_ov120_02295010();

    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_24();
    virtual BOOL vfunc_4c();
    virtual BOOL vfunc_50();
    virtual BOOL vfunc_54();
    virtual BOOL vfunc_58();
    virtual BOOL vfunc_5c();

    // callees in other groups
    BOOL func_ov120_02292e08(u32 mask);
    void func_ov120_02293a2c(u32 a, u32 b, u32 c, s32 d, s32 e);
    void func_ov120_02293bec();
    void func_ov120_02293f08();
    void func_ov120_0229439c();
    void func_ov120_02294428();
    void func_ov120_022944d8();
    void func_ov120_0229450c();
    void func_ov120_02294514();
    void func_ov120_02294540();
    void func_ov120_0229460c();
    void func_ov120_02294614();
    void func_ov120_02294634();

    // state-table targets
    void func_ov120_0229489c();
    void func_ov120_02294708();
    void func_ov120_02294768();
    void func_ov120_022947bc();
    void func_ov120_02294024();
    void func_ov120_02294078();
    void func_ov120_022940a4();
    void func_ov120_022940dc();
    void func_ov120_02294100();
    void func_ov120_02294144();
    void func_ov120_0229418c();
    void func_ov120_022941b8();
    void func_ov120_02294290();
    void func_ov120_022942c0();

    // in range
    void func_ov120_02294958();
    void func_ov120_02294974();
    void func_ov120_0229498c();
    BOOL func_ov120_022949a8();
    void func_ov120_02294a04();

    /* 0x91 */ u8 unk_91[3];
    /* 0x94 */ u32 unk_94;
    /* 0x98 */ u16 unk_98;
    /* 0x9a */ u16 unk_9a;
    /* 0x9c */ u16 unk_9c;
    /* 0x9e */ u8 unk_9e;
    /* 0x9f */ u8 unk_9f;
    /* 0xa0 */ u8 unk_a0[3];
    /* 0xa3 */ u8 unk_a3;
    /* 0xa4 */ u8 unk_a4;
    /* 0xa5 */ u8 unk_a5[3];
    /* 0xa8 */ u8 unk_a8;
    /* 0xa9 */ u8 unk_a9[3];
    /* 0xac */ u8 unk_ac;
    /* 0xad */ u8 unk_ad[2];
    /* 0xaf */ u8 unk_af;
    /* 0xb0 */ Unk_ov120_020b8800 unk_b0[2];
    /* 0xf8 */ Unk_ov120_0206fcc8 unk_f8[13];
    /* 0x438 */ Unk_ov120_02202f88 unk_438;
    /* 0x480 */ Unk_ov120_02202658 unk_480;
    /* 0x4e4 */ u8 unk_4e4[0x201a];
    /* 0x24fe */ Unk_ov120_02292de0 unk_24fe[3];
    /* 0x2507 */ Unk_ov120_02292de0 unk_2507[14];
};

void Unk_ov120_02295010::func_ov120_02294958() {
    func_ov120_02293bec();
    func_ov120_02293f08();
    func_ov002_02200a50(3);
}

void Unk_ov120_02295010::func_ov120_02294974() {
    func_ov120_0229439c();
    func_ov002_02200a50(2);
}

void Unk_ov120_02295010::func_ov120_0229498c() {
    func_ov120_022944d8();
    func_ov120_02294428();
    func_ov002_02200a50(1);
}

BOOL Unk_ov120_02295010::func_ov120_022949a8() {
    func_ov092_02291ce4(func_020ed174(this), 0x44, 1);
    unk_8c = 5;
    func_ov002_02200a60(1);
    return TRUE;
}

BOOL Unk_ov120_02295010::vfunc_5c() {
    func_020ed188(this);
    return TRUE;
}

BOOL Unk_ov120_02295010::vfunc_58() { return TRUE; }

BOOL Unk_ov120_02295010::vfunc_54() { return TRUE; }

BOOL Unk_ov120_02295010::vfunc_50() {
    func_ov120_02294514();
    func_ov120_02294a04();
    func_ov120_0229450c();
    return TRUE;
}

void Unk_ov120_02295010::func_ov120_02294a04() {
    static Unk_ov120_02295010_Fn tbl[10] = {
        &Unk_ov120_02295010::func_ov120_022942c0,
        &Unk_ov120_02295010::func_ov120_02294290,
        &Unk_ov120_02295010::func_ov120_022941b8,
        &Unk_ov120_02295010::func_ov120_0229418c,
        &Unk_ov120_02295010::func_ov120_02294144,
        &Unk_ov120_02295010::func_ov120_02294100,
        &Unk_ov120_02295010::func_ov120_022940dc,
        &Unk_ov120_02295010::func_ov120_022940a4,
        &Unk_ov120_02295010::func_ov120_02294078,
        &Unk_ov120_02295010::func_ov120_02294024};
    (this->*tbl[unk_8d])();
}

BOOL Unk_ov120_02295010::vfunc_4c() {
    static Unk_ov120_02295010_Fn tbl[7] = {
        &Unk_ov120_02295010::func_ov120_0229498c,
        &Unk_ov120_02295010::func_ov120_02294974,
        &Unk_ov120_02295010::func_ov120_02294958,
        &Unk_ov120_02295010::func_ov120_0229489c,
        &Unk_ov120_02295010::func_ov120_022947bc,
        &Unk_ov120_02295010::func_ov120_02294768,
        &Unk_ov120_02295010::func_ov120_02294708};
    func_ov120_0229460c();
    (this->*tbl[unk_8c])();
    func_ov120_02294540();
    return TRUE;
}

BOOL Unk_ov120_02295010::vfunc_24() {
    u32 h = unk_94 + 0x60;
    if (func_ov120_02292e08(4)) {
        if (func_ov120_02292e08(8)) {
            func_0208dae8(&unk_438, 0x67, unk_94 - 0x12 + unk_a4);
        }
        unk_480.func_ov002_02202844();
        func_02087e70(1, data_ov120_02294fb8, 0x80, h, -1, 2, 0x1000, 0x1000, 0, -1, 0, 0);
        s32 a, b;
        if (func_ov120_02292e08(1)) {
            b = 0xc;
            a = 0xd;
        } else {
            b = 0xb;
            a = 0xe;
        }
        func_02087e70(1, data_ov120_02294f78, 0x80, h, a, 2, 0x1000, 0x1000, 0, -1, 0, 0);
        func_02087e70(1, data_ov120_02294f98, 0x80, h, b, 2, 0x1000, 0x1000, 0, -1, 0, 0);
        u32 t = unk_ac;
        if (t != 0xe) {
            u8 *e = (u8 *)this + t * 3;
            if (e[0x2509] != 0xc) {
                func_ov120_02293a2c(e[0x2507], unk_94 + e[0x2508], 0xb, 0, -1);
            }
        }
        unk_af = (unk_af + 1) & 0xf;
        if ((unk_af & 0xc) != 0) {
            func_ov120_02293a2c(unk_9e, unk_9f + unk_94, 0xa, 0, -1);
        }
        for (s32 i = 0; i < 3; i++) {
            u8 *e = (u8 *)this + i * 3;
            u32 c = e[0x2500];
            if (c != 0xc) {
                func_ov120_02293a2c(e[0x24fe], unk_94 + e[0x24ff], (u8)(c & 0x7f), (c & 0x80) ? 1 : 0, -1);
            }
        }
        for (s32 i = 0; i < 14; i++) {
            u8 *e = (u8 *)this + i * 3;
            u8 *q = e + 0x2509;
            if (*q != 0xc) {
                s32 v;
                if (i == unk_a8 && !func_ov120_02292e08(0x100)) {
                    v = 8;
                } else {
                    v = -1;
                }
                func_ov120_02293a2c(e[0x2507], unk_94 + e[0x2508], *q, 0, v);
            }
        }
        if (func_ov120_02292e08(8)) {
            unk_438.vfunc_08();
        }
    }
    return TRUE;
}

BOOL Unk_ov120_02295010::vfunc_0c() {
    func_020ed174(this);
    func_ov092_02291c5c();
    func_ov120_02294614();
    return TRUE;
}

BOOL Unk_ov120_02295010::vfunc_00() {
    func_ov120_02294634();
    func_ov002_02200a50(0);
    func_ov002_02200a60(1);
    return TRUE;
}

extern "C" Unk_ov120_02295010 *func_ov120_02294e1c() { return new Unk_ov120_02295010(); }

// out-of-range (func_ov120_02292d00 group); needed here only to emit the vtable
Unk_ov120_02295010::~Unk_ov120_02295010() {}
