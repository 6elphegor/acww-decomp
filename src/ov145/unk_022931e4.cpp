#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef vfunc_08
#undef vfunc_14

extern "C" {
extern u8 data_ov145_02293820[];
extern u8 data_ov145_02293860[];
extern u8 data_ov145_022937c0[];
void func_020ed188(void *p);
s32 func_020ed174();
void func_020b87d0(void *p);
void func_020020b8(u32 x);
void func_ov092_02291c5c();
void func_ov092_02291ce4(s32 a, s32 b, s32 c);
void func_020021a0(u32 x);
void func_0206fca8();
void func_0206fcc8();
void func_020b8800(void *p);

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
    BOOL func_ov002_022008fc(s32 a);
    void func_ov002_02200874(s32 a, s32 b);
    void func_ov002_022008c4(s32 a, s32 b, s32 c, s32 d);
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




class Unk_ov145_020b8800 {
public:
    Unk_ov145_020b8800() { func_020b8800(this); }
    u32 unk_00[0x24 / 4];
};

class Unk_ov145_0206fcc8 {
public:
    Unk_ov145_0206fcc8();
    ~Unk_ov145_0206fcc8();
    u32 unk_00[0x40 / 4];
};

class Unk_ov145_02202658 {
public:
    Unk_ov145_02202658();
    virtual ~Unk_ov145_02202658();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    void func_ov002_02202844();
    u32 unk_04[0x60 / 4];
};

class Unk_ov145_02202f88 {
public:
    Unk_ov145_02202f88();
    virtual ~Unk_ov145_02202f88();
    virtual u32 vfunc_08();
    void func_ov002_02202f0c();
    u32 unk_04[0x44 / 4];
};

class Unk_ov145_02203994 {
public:
    Unk_ov145_02203994();
    void func_ov002_02203510(s32 a);
    void func_ov002_022036a4(s32 a);
    void func_ov002_02203900();
    u32 unk_00[0x164 / 4];
};

class Unk_ov145_022937c0;
typedef void (Unk_ov145_022937c0::*Unk_ov145_022937c0_Fn)();

// Vtable 0x022937c0, size 0x2188
class Unk_ov145_022937c0 : public Unk_ov002_022044e4 {
public:
    Unk_ov145_022937c0() : unk_c8(), unk_12c(), unk_174(), unk_2d8(), unk_758() {}
    virtual ~Unk_ov145_022937c0();

    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_24();
    virtual BOOL vfunc_4c();
    virtual BOOL vfunc_50();
    virtual BOOL vfunc_54();
    virtual BOOL vfunc_58();
    virtual BOOL vfunc_5c();

    // other groups
    void func_ov145_02292018(u32 m);
    BOOL func_ov145_02292028(u32 m);
    void func_ov145_0229232c(s32 a);
    void func_ov145_02292764();
    void func_ov145_02292988();
    void func_ov145_022929ac();
    void func_ov145_022929d0();
    void func_ov145_022929f4();
    void func_ov145_02292af4();
    void func_ov145_02292cd0();
    void func_ov145_02293038();
    void func_ov145_02293088();
    void func_ov145_02293138();
    void func_ov145_02293170();
    void func_ov145_02293198();
    // state-table targets (0x8d), other groups
    void func_ov145_02292f70();
    void func_ov145_02292f3c();
    void func_ov145_02292f08();
    void func_ov145_02292ea4();
    void func_ov145_02292e58();
    void func_ov145_02292e18();
    void func_ov145_02292df0();
    void func_ov145_02292dbc();
    void func_ov145_02292d98();
    void func_ov145_02292d30();
    // this group
    void func_ov145_022931e4();
    void func_ov145_022931ec();
    void func_ov145_02293204();
    void func_ov145_02293244();
    void func_ov145_022932a8();
    void func_ov145_022932e8();
    void func_ov145_02293318();
    void func_ov145_02293350();
    void func_ov145_02293378();
    void func_ov145_02293424();

    /* 0x0091 */ u8 unk_91[3];
    /* 0x0094 */ u32 unk_94;
    /* 0x0098 */ u32 unk_98;
    /* 0x009c */ u32 unk_9c;
    /* 0x00a0 */ u32 unk_a0;
    /* 0x00a4 */ s32 unk_a4;
    /* 0x00a8 */ u8 unk_a8[0xc];
    /* 0x00b4 */ s16 unk_b4;
    /* 0x00b6 */ u8 unk_b6[0xa];
    /* 0x00c0 */ u8 unk_c0;
    /* 0x00c1 */ u8 unk_c1;
    /* 0x00c2 */ u8 unk_c2[3];
    /* 0x00c5 */ u8 unk_c5;
    /* 0x00c6 */ u8 unk_c6;
    /* 0x00c7 */ u8 unk_c7;
    /* 0x00c8 */ Unk_ov145_02202658 unk_c8;
    /* 0x012c */ Unk_ov145_02202f88 unk_12c;
    /* 0x0174 */ Unk_ov145_02203994 unk_174;
    /* 0x02d8 */ Unk_ov145_0206fcc8 unk_2d8[0x12];
    /* 0x0758 */ Unk_ov145_020b8800 unk_758[3];
    /* 0x07c4 */ u8 unk_7c4[0x934 - 0x7c4];
    /* 0x0934 */ u16 unk_934[9];
    /* 0x0946 */ u8 unk_946[0x2188 - 0x946];
};

// ---- 0x022931e4 ----
void Unk_ov145_022937c0::func_ov145_022931e4() {
    func_ov145_02293170();
}

void Unk_ov145_022937c0::func_ov145_022931ec() {
    func_ov145_02293198();
    Unk_ov145_02202658 *p = &unk_c8;
    p->vfunc_0c();
}

void Unk_ov145_022937c0::func_ov145_02293204() {
    func_ov145_02292764();
    unk_174.func_ov002_02203900();
    func_020b87d0(&unk_758[0]);
    func_020b87d0(&unk_758[1]);
    func_020b87d0(&unk_758[2]);
}

void Unk_ov145_022937c0::func_ov145_02293244() {
    s32 i;
    unk_b4 = 0;
    unk_c0 = 0;
    for (i = 0; i < 9; i++) {
        unk_934[i] = 0xfff1;
    }
    unk_c5 = 3;
    unk_c6 = 0;
    func_ov145_022929f4();
    func_ov145_022929d0();
    func_ov145_022929ac();
    func_ov145_02292988();
    unk_12c.func_ov002_02202f0c();
}

void Unk_ov145_022937c0::func_ov145_022932a8() {
    func_ov002_02200840(6, 0, 0);
    func_ov002_02200840(4, 0, 0x18 - unk_9c);
    unk_94 = func_ov002_02200920();
    func_ov145_02292af4();
}

void Unk_ov145_022937c0::func_ov145_022932e8() {
    if (func_ov002_022008fc(0)) {
        func_020021a0(6);
        func_020021a0(4);
        func_ov002_02200a60(5);
    } else {
        func_ov145_022932a8();
    }
}

void Unk_ov145_022937c0::func_ov145_02293318() {
    func_ov092_02291ce4(func_020ed174(), 0x44, 1);
    func_ov002_022008c4(0xa, 0, 0, 0x28);
    func_ov145_022932a8();
    func_ov002_02200a50(3);
}

void Unk_ov145_022937c0::func_ov145_02293350() {
    if (func_ov002_02200908(0)) {
        func_ov002_02200a60(2);
        func_ov145_02292cd0();
    }
    func_ov145_022932a8();
}

void Unk_ov145_022937c0::func_ov145_02293378() {
    func_ov145_02293138();
    func_ov145_02293088();
    unk_c0 = 4;
    func_ov145_0229232c(3);
    unk_c1 = 3;
    func_ov145_02293038();
    func_ov002_022008e0(0xa, 4, 0, 0x28);
    func_020020b8(6);
    func_020020b8(4);
    func_ov145_022932a8();
    func_ov145_02292018(1);
    unk_174.func_ov002_02203510(0x65);
    func_ov002_02200a50(1);
}

BOOL Unk_ov145_022937c0::vfunc_5c() {
    func_020ed188(this);
    return TRUE;
}

BOOL Unk_ov145_022937c0::vfunc_58() { return TRUE; }

BOOL Unk_ov145_022937c0::vfunc_54() { return TRUE; }

BOOL Unk_ov145_022937c0::vfunc_50() {
    func_ov145_022931ec();
    func_ov145_02293424();
    func_ov145_022931e4();
    return TRUE;
}

void Unk_ov145_022937c0::func_ov145_02293424() {
    static Unk_ov145_022937c0_Fn tbl[10] = {
        &Unk_ov145_022937c0::func_ov145_02292f70,
        &Unk_ov145_022937c0::func_ov145_02292f3c,
        &Unk_ov145_022937c0::func_ov145_02292f08,
        &Unk_ov145_022937c0::func_ov145_02292ea4,
        &Unk_ov145_022937c0::func_ov145_02292e58,
        &Unk_ov145_022937c0::func_ov145_02292e18,
        &Unk_ov145_022937c0::func_ov145_02292df0,
        &Unk_ov145_022937c0::func_ov145_02292dbc,
        &Unk_ov145_022937c0::func_ov145_02292d98,
        &Unk_ov145_022937c0::func_ov145_02292d30};
    (this->*tbl[unk_8d])();
}

BOOL Unk_ov145_022937c0::vfunc_4c() {
    static Unk_ov145_022937c0_Fn tbl[4] = {
        &Unk_ov145_022937c0::func_ov145_02293378,
        &Unk_ov145_022937c0::func_ov145_02293350,
        &Unk_ov145_022937c0::func_ov145_02293318,
        &Unk_ov145_022937c0::func_ov145_022932e8};
    func_ov145_02293198();
    (this->*tbl[unk_8c])();
    func_ov145_02293170();
    return TRUE;
}

BOOL Unk_ov145_022937c0::vfunc_24() {
    s32 i;
    u8 *p;
    s32 y;
    if (func_0206ef00()) {
        unk_c8.func_ov002_02202844();
    }
    if (!func_ov145_02292028(1)) {
        return FALSE;
    }
    unk_174.func_ov002_022036a4(func_ov002_02200920());
    y = unk_94 + 0x60;
    if (unk_a4 > 0) {
        Unk_ov145_02202f88 *q = &unk_12c;
        q->vfunc_08();
        func_02087e70(1, data_ov145_02293820, 0x80, y, -1, 1, 0x1000, 0x1000, 0, -1, 0, 0);
    }
    p = data_ov145_02293860;
    for (i = 0; i < 4; i++) {
        s32 pal;
        if (i == unk_c1) {
            pal = 7;
        } else {
            pal = 5;
        }
        func_02087e70(1, p, 0x80, y, pal, 1, 0x1000, 0x1000, 0, -1, 0, 0);
        p += 0x10;
    }
    return TRUE;
}

BOOL Unk_ov145_022937c0::vfunc_0c() {
    func_020ed174();
    func_ov092_02291c5c();
    func_ov145_02293204();
    return TRUE;
}

BOOL Unk_ov145_022937c0::vfunc_00() {
    func_ov145_02293244();
    unk_8c = 0;
    func_ov002_02200a60(0);
    return TRUE;
}

extern "C" Unk_ov145_022937c0 *func_ov145_022936a8() { return new Unk_ov145_022937c0(); }

Unk_ov145_022937c0::~Unk_ov145_022937c0() {}
