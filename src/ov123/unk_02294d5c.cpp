#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef vfunc_08
#undef vfunc_14

extern "C" {
extern u8 data_ov123_02295828[];
extern u8 data_ov123_0229591c[];
extern u8 data_ov123_0229596c[];
extern u8 data_ov123_02295848[];
extern u8 data_ov123_0229590c[];
extern u8 data_ov123_02295900[];
void func_020ed188(void *p);
void func_020ed174();
void func_020020b8(u32 x);
void func_ov092_02291c5c();
void func_02087e70(u32 a, void *h, s32 x, s32 y, s32 s0, s32 s1, s32 s2, s32 s3, s32 s4, s32 s5, s32 s6, s32 s7);
s32 func_02088730(s32 mode, void *info, s32 x, s32 y, s32 pal, s32 pri, s32 rect);
void *func_0209750c();
void func_0209872c(void *p);
void func_02098714(void *p);
BOOL func_02094bb4();
BOOL func_02094b9c();
s32 func_0206ed50();
BOOL func_0206ef00();
void func_020b85f8(void *p);
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




class Unk_ov123_020b85f8 {
public:
    Unk_ov123_020b85f8() { func_020b85f8(this); }
    u32 unk_00[0x38 / 4];
};

class Unk_ov123_0206fcc8 {
public:
    Unk_ov123_0206fcc8();
    ~Unk_ov123_0206fcc8();
    u32 unk_00[0x40 / 4];
};

class Unk_ov123_02202658 {
public:
    Unk_ov123_02202658();
    virtual ~Unk_ov123_02202658();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    void func_ov002_02202844();
    u32 unk_04[0x60 / 4];
};

class Unk_ov123_02203994 {
public:
    Unk_ov123_02203994();
    void func_ov002_02203650();
    void func_ov002_02203900();
    void func_ov002_022036a4(s32 a);
    u32 unk_00[0x164 / 4];
};

class Unk_ov123_022959c4;
typedef void (Unk_ov123_022959c4::*Unk_ov123_022959c4_Fn)();

// Vtable 0x022959c4, size 0x5168
class Unk_ov123_022959c4 : public Unk_ov002_022044e4 {
public:
    Unk_ov123_022959c4() : unk_b8(), unk_f8(), unk_1a0(), unk_5004() {}
    virtual ~Unk_ov123_022959c4();

    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_24();
    virtual BOOL vfunc_4c();
    virtual BOOL vfunc_50();
    virtual BOOL vfunc_54();
    virtual BOOL vfunc_58();
    virtual BOOL vfunc_5c();

    // flag helpers (other groups)
    void func_ov123_02291ff0(u32 m);
    void func_ov123_02292000(u32 m);
    BOOL func_ov123_02292010(u32 m);
    void func_ov123_02292314();
    void func_ov123_02292844();
    void func_ov123_022928fc();
    void func_ov123_02292a88(u32 a, u32 b);
    void func_ov123_02293bac();
    void func_ov123_02293bd0();
    void func_ov123_02293ce0();
    void func_ov123_02293d08();
    void func_ov123_02293d68();
    void func_ov123_02293eac();
    void func_ov123_02294000();
    void func_ov123_02294804();
    void func_ov123_022947a0();
    void func_ov123_022948a8();
    void func_ov123_022948f4();
    void func_ov123_02294908();
    void func_ov123_0229492c();
    void func_ov123_02294934();
    void func_ov123_02294950();
    void func_ov123_02294984();
    void func_ov123_02294a20();
    void func_ov123_02292c34(s32 a);
    void func_ov123_02294d00();
    void func_ov123_02292010x();
    // state-table targets (0x8d)
    void func_ov123_02294740();
    void func_ov123_022946c4();
    void func_ov123_02294614();
    void func_ov123_02294518();
    void func_ov123_02294448();
    void func_ov123_02294360();
    void func_ov123_02294290();
    void func_ov123_02294240();
    void func_ov123_02294188();
    void func_ov123_0229415c();
    void func_ov123_02294120();
    void func_ov123_022940f8();
    void func_ov123_0229408c();
    // state-table targets (0x8c)
    void func_ov123_02294e14();
    void func_ov123_02294dec();
    void func_ov123_02294d5c();
    void func_ov123_02294d40();
    void func_ov123_02294cb0();
    void func_ov123_02294c80();
    void func_ov123_02294bec();
    void func_ov123_02294b5c();
    void func_ov123_02294b18();
    void func_ov123_02294abc();
    void func_ov123_02294a64();

    void func_ov123_02294ef0();

    /* 0x0091 */ u8 unk_91[3];
    /* 0x0094 */ u32 unk_94;
    /* 0x0098 */ u32 unk_98;
    /* 0x009c */ u32 unk_9c;
    /* 0x00a0 */ u8 unk_a0;
    /* 0x00a1 */ u8 unk_a1;
    /* 0x00a2 */ u8 unk_a2;
    /* 0x00a3 */ u8 unk_a3;
    /* 0x00a4 */ u8 unk_a4;
    /* 0x00a5 */ u8 unk_a5;
    /* 0x00a6 */ u8 unk_a6;
    /* 0x00a7 */ u8 unk_a7[3];
    /* 0x00aa */ u8 unk_aa;
    /* 0x00ab */ u8 unk_ab;
    /* 0x00ac */ u8 unk_ac;
    /* 0x00ad */ u8 unk_ad[2];
    /* 0x00af */ u8 unk_af;
    /* 0x00b0 */ u8 unk_b0;
    /* 0x00b1 */ u8 unk_b1[2];
    /* 0x00b3 */ u8 unk_b3;
    /* 0x00b4 */ u8 unk_b4[4];
    /* 0x00b8 */ Unk_ov123_0206fcc8 unk_b8[1];
    /* 0x00f8 */ Unk_ov123_020b85f8 unk_f8[3];
    /* 0x01a0 */ Unk_ov123_02202658 unk_1a0;
    /* 0x0204 */ u8 unk_204[0x5004 - 0x204];
    /* 0x5004 */ Unk_ov123_02203994 unk_5004;
};

// ---- 0x02294d5c ----
void Unk_ov123_022959c4::func_ov123_02294d5c() {
    if (!func_ov123_02292010(0x8000) && !func_ov123_02292010(0x10000)) {
        func_ov002_02200a50(4);
        func_ov123_02294d00();
        return;
    }
    void *p = func_0209750c();
    if (func_ov123_02292010(0x8000)) {
        func_0209872c(p);
        if (!func_02094bb4()) return;
        func_ov123_02291ff0(0x8000);
    }
    if (func_ov123_02292010(0x10000)) {
        func_02098714(p);
        if (!func_02094b9c()) return;
        func_ov123_02291ff0(0x8000);
    }
    func_ov002_02200a50(3);
}

void Unk_ov123_022959c4::func_ov123_02294dec() {
    if (func_ov002_02200908(0)) {
        func_ov002_02200a60(2);
        func_ov123_02294000();
    }
    func_ov123_02294a20();
}

void Unk_ov123_022959c4::func_ov123_02294e14() {
    func_ov123_022948a8();
    func_ov123_02294804();
    unk_a4 = 0x22;
    func_ov123_02292c34(0);
    func_ov123_022947a0();
    switch (func_0206ed50()) {
    case 2:
        func_ov123_02293eac();
        break;
    case 3:
        func_ov123_02293d68();
        break;
    }
    func_ov123_02293d08();
    func_ov123_02293bd0();
    func_ov123_02293ce0();
    func_ov123_02293bac();
    unk_5004.func_ov002_02203650();
    func_ov002_022008e0(0xb, 4, 0, 0x30);
    func_020020b8(6);
    func_020020b8(4);
    func_ov123_02292314();
    func_ov123_02294a20();
    func_ov123_02292000(1);
    func_ov002_02200a50(1);
}

BOOL Unk_ov123_022959c4::vfunc_5c() {
    func_020ed188(this);
    return TRUE;
}

BOOL Unk_ov123_022959c4::vfunc_58() { return TRUE; }

BOOL Unk_ov123_022959c4::vfunc_54() { return TRUE; }

BOOL Unk_ov123_022959c4::vfunc_50() {
    func_ov123_02294934();
    func_ov123_02294ef0();
    func_ov123_0229492c();
    return TRUE;
}

void Unk_ov123_022959c4::func_ov123_02294ef0() {
    static Unk_ov123_022959c4_Fn tbl[13] = {
        &Unk_ov123_022959c4::func_ov123_02294740,
        &Unk_ov123_022959c4::func_ov123_022946c4,
        &Unk_ov123_022959c4::func_ov123_02294614,
        &Unk_ov123_022959c4::func_ov123_02294518,
        &Unk_ov123_022959c4::func_ov123_02294448,
        &Unk_ov123_022959c4::func_ov123_02294360,
        &Unk_ov123_022959c4::func_ov123_02294290,
        &Unk_ov123_022959c4::func_ov123_02294240,
        &Unk_ov123_022959c4::func_ov123_02294188,
        &Unk_ov123_022959c4::func_ov123_0229415c,
        &Unk_ov123_022959c4::func_ov123_02294120,
        &Unk_ov123_022959c4::func_ov123_022940f8,
        &Unk_ov123_022959c4::func_ov123_0229408c};
    (this->*tbl[unk_8d])();
}

BOOL Unk_ov123_022959c4::vfunc_4c() {
    static Unk_ov123_022959c4_Fn tbl[12] = {
        &Unk_ov123_022959c4::func_ov123_02294e14,
        &Unk_ov123_022959c4::func_ov123_02294dec,
        &Unk_ov123_022959c4::func_ov123_02294d5c,
        &Unk_ov123_022959c4::func_ov123_02294d40,
        &Unk_ov123_022959c4::func_ov123_02294d00,
        &Unk_ov123_022959c4::func_ov123_02294cb0,
        &Unk_ov123_022959c4::func_ov123_02294c80,
        &Unk_ov123_022959c4::func_ov123_02294bec,
        &Unk_ov123_022959c4::func_ov123_02294b5c,
        &Unk_ov123_022959c4::func_ov123_02294b18,
        &Unk_ov123_022959c4::func_ov123_02294abc,
        &Unk_ov123_022959c4::func_ov123_02294a64};
    func_ov123_02294908();
    (this->*tbl[unk_8c])();
    func_ov123_022948f4();
    return TRUE;
}

BOOL Unk_ov123_022959c4::vfunc_24() {
    if (func_0206ef00()) {
        if (unk_ac == 2) {
            if (!func_ov123_02292010(0x100)) {
                func_ov123_02292a88(unk_af, unk_b0);
            }
        } else {
            unk_1a0.func_ov002_02202844();
        }
    }
    if (func_ov123_02292010(0x100)) {
        func_ov123_022928fc();
    }
    unk_5004.func_ov002_022036a4(func_ov002_02200920());
    if (func_ov123_02292010(1)) {
        s32 y = unk_98 + (unk_94 + 0x60);
        if (func_0206ef00()) {
            func_02088730(1, (void *)data_ov123_02295828, 0x80, y, -1, -1, 0);
            func_02087e70(1, (void *)data_ov123_0229591c, 0x80, y, -1, -1, 0x1000, 0x1000, 0, -1, 0, 0);
        }
        func_02087e70(1, (void *)data_ov123_0229596c, unk_a3 + 0x80, y, -1, 2, 0x1000, 0x1000, 0, -1, 0, 0);
        if (unk_a1 < 9) {
            func_02087e70(1, (void *)data_ov123_02295848, 0x80, y, -1, 2, 0x1000, 0x1000, 0, -1, 0, 0);
        } else {
            func_02087e70(1, (void *)data_ov123_0229590c, 0x80, y, -1, 2, 0x1000, 0x1000, 0, -1, 0, 0);
        }
        if (func_0206ef00()) {
            func_02087e70(1, (void *)((u32 *)data_ov123_02295900)[unk_ac], 0x80, y, -1, -1, 0x1000, 0x1000, 0, -1, 0, 0);
        }
    }
    return TRUE;
}

BOOL Unk_ov123_022959c4::vfunc_0c() {
    func_020ed174();
    func_ov092_02291c5c();
    func_ov123_02294950();
    return TRUE;
}

BOOL Unk_ov123_022959c4::vfunc_00() {
    func_ov123_02294984();
    unk_8c = 0;
    func_ov002_02200a60(0);
    return TRUE;
}

extern "C" Unk_ov123_022959c4 *func_ov123_022952d4() { return new Unk_ov123_022959c4(); }

Unk_ov123_022959c4::~Unk_ov123_022959c4() {}
