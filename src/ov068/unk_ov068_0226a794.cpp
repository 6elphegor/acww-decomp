// mwcc-version: 1.2/sp2
#include "types.h"

struct Unk_ov068_0226acf8_Vec {
    s32 x, y, z;
};

struct Unk_ov068_0226b12c_Vec3 {
    s32 x, y, z;
    Unk_ov068_0226b12c_Vec3() {}
    Unk_ov068_0226b12c_Vec3(const Unk_ov068_0226b12c_Vec3 &o) {
        x = o.x;
        y = o.y;
        z = o.z;
    }
};

class Unk_020d8c7c_Base {
public:
    static void *operator new(unsigned long size);
    static void operator delete(void *ptr);

    Unk_020d8c7c_Base();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual void func_0203e678(s32 v);
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_14();
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_1c();
    virtual void vfunc_20(u32 a);
    virtual BOOL vfunc_24();
    virtual BOOL vfunc_28();
    virtual BOOL vfunc_2c();
    virtual BOOL vfunc_30();
    virtual BOOL vfunc_34();
    virtual BOOL vfunc_38();
    virtual BOOL vfunc_3c();
    virtual ~Unk_020d8c7c_Base();
};

class Unk_020d8c7c : public Unk_020d8c7c_Base {
public:
    Unk_020d8c7c() {}
    virtual ~Unk_020d8c7c() {}

    /* 0x04 */ u8 unk_04[0x4c];
};

struct Unk_ov003_Vec {
    s32 x, y, z;
};

class Unk_020d5d84 : public Unk_020d8c7c {
public:
    Unk_020d5d84();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_14();
    virtual BOOL vfunc_1c();
    virtual void vfunc_20(u32 a);
    virtual BOOL vfunc_28();
    virtual BOOL vfunc_2c();
    virtual ~Unk_020d5d84();

    /* 0x50 */ u8 unk_50[0xc];
    /* 0x5c */ s32 unk_5c[3];
    /* 0x68 */ u8 pad_68[0xd4 - 0x68];
};

class Unk_020d9670 : public Unk_020d5d84 {
public:
    Unk_020d9670();
    virtual ~Unk_020d9670();
    virtual void func_0203e678(s32 v);
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_1c();
    virtual BOOL vfunc_48(Unk_020d9670 *a);
    virtual void vfunc_4c(u32 a, u8 b);
    virtual Unk_ov003_Vec *vfunc_50();
    virtual BOOL vfunc_54(void *a);
    virtual BOOL vfunc_58(void *a);
    virtual BOOL vfunc_5c();

    void func_0203e624(u32 a);

    /* 0xd4 */ u8 unk_d4[0x10];
    /* 0xe4 */ s32 unk_e4;
    /* 0xe8 */ u16 unk_e8;
    /* 0xea */ u8 unk_ea;
    /* 0xeb */ u8 pad_eb;
};

// Secondary base at +0xec (vtable main 0x020ddcf0 chain).  Slots are named vfunc_sXX (see aliases above) except 0x14.
class Unk_020e2a30 {
public:
    Unk_020e2a30();
    virtual ~Unk_020e2a30();
    virtual void vfunc_s08();

    void func_020a710c(const char *src);

    /* 0x04 */ char unk_04[0x1a];
    /* 0x1e */ u8 unk_1e;
};

struct Unk_020660f8 {
    u8 pad_00[0x14];
    s32 unk_14;
};

class Unk_020ddcf0 : public Unk_020e2a30 {
public:
    Unk_020ddcf0();
    virtual ~Unk_020ddcf0();
    virtual void vfunc_s08();
    virtual void vfunc_s0c();
    virtual void vfunc_s10();
    virtual void vfunc_88();
    virtual void vfunc_s18();
    virtual void vfunc_s1c();
    virtual void vfunc_s20();
    virtual void vfunc_s24();
    virtual void vfunc_s28();
    virtual void vfunc_s2c();
    virtual void vfunc_s30();
    virtual void vfunc_s34();
    virtual void vfunc_s38(u32 a);
    virtual void vfunc_s3c();
    virtual void vfunc_s40();
    virtual void vfunc_s44();
    virtual void vfunc_s48();
    virtual void vfunc_s4c();
    virtual void vfunc_s50();
    virtual void vfunc_s54();
    virtual void vfunc_s58();
    virtual void vfunc_s5c();
    virtual void vfunc_s60();
    virtual void vfunc_s64();
    virtual void vfunc_s68();
    virtual s32 vfunc_s6c();
    virtual void vfunc_s70();
    virtual void vfunc_s74();

    void func_02065f90(u8 *a, u32 b);

    u8 pad_20[0x1c];
    /* 0x3c */ Unk_020660f8 *unk_3c;
    /* 0x40 */ u8 unk_40;
    u8 pad_41[3];
};

struct Unk_ov068_0226b5a4_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

struct Unk_ov003_Blk {
    s64 v[6];
};

struct Unk_ov003_Flags {
    u8 f0 : 1;
    u8 f1 : 1;
    u8 rest : 6;
};

class Unk_020b1ddc;

// ov009 actor base (vtable 0x0225e29c, size 0x2b0).  Return types of the virtuals are those the derived units need.
class Unk_ov009_0225e29c : public Unk_020d9670, public Unk_020ddcf0 {
public:
    Unk_ov009_0225e29c();
    virtual ~Unk_ov009_0225e29c();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_1c();
    virtual void vfunc_20(u32 a);
    virtual BOOL vfunc_28();
    virtual BOOL vfunc_48(Unk_020d9670 *a);
    virtual void vfunc_4c(u32 a, u8 b);
    virtual Unk_ov003_Vec *vfunc_50();
    virtual void vfunc_60(u32 a, void *p);
    virtual s32 vfunc_64();
    virtual s32 vfunc_68();
    virtual s32 vfunc_6c(s32 a);
    virtual BOOL vfunc_70();
    virtual void func_ov009_0225ca98();
    virtual void vfunc_78();
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();
    virtual void vfunc_88();
    virtual BOOL vfunc_8c();
    virtual BOOL vfunc_90();
    virtual BOOL vfunc_94();
    virtual BOOL vfunc_98();
    virtual BOOL vfunc_9c();
    virtual s32 vfunc_a0();
    virtual char *vfunc_a4();
    virtual char *vfunc_a8();
    virtual char *vfunc_ac();
    virtual BOOL vfunc_b0();
    virtual Unk_ov068_0226b12c_Vec3 vfunc_b4();
    virtual BOOL vfunc_b8();

    s32 func_ov009_0225d6b8(u32 a);
    s32 func_ov009_0225d6d8();

    /* 0x130 */ u8 unk_130;
    /* 0x131 */ u8 pad_131;
    /* 0x132 */ u16 unk_132;
    /* 0x134 */ u8 pad_134[4];
    /* 0x138 */ u8 unk_138[0x1d4 - 0x138];
    /* 0x1d4 */ u8 unk_1d4[8];
    /* 0x1dc */ Unk_ov068_0226b5a4_Bits unk_1dc;
    /* 0x1e0 */ u8 pad_1e0[0x1f0 - 0x1e0];
    /* 0x1f0 */ u8 unk_1f0[0x234 - 0x1f0];
    /* 0x234 */ u8 unk_234[0x278 - 0x234];
    /* 0x278 */ u8 pad_278[0x28e - 0x278];
    /* 0x28e */ u8 unk_28e[0x2b0 - 0x28e];
};

// Overlay 68 concrete actor (vtable 0x02270110, secondary vtable 0x022701d4), size 0x2e4
class Unk_ov068_02270110 : public Unk_ov009_0225e29c {
public:
    Unk_ov068_02270110();
    virtual ~Unk_ov068_02270110();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_24();
    virtual void vfunc_60(u32 a, void *b);
    virtual BOOL vfunc_70();
    virtual void vfunc_88();
    virtual BOOL vfunc_b0();
    virtual Unk_ov068_0226b12c_Vec3 vfunc_b4();
    virtual s32 vfunc_s6c();

    // update states
    void func_ov068_0226aa74();
    void func_ov068_0226aad4();
    void func_ov068_0226ab60();
    void func_ov068_0226abc8();
    void func_ov068_0226ac3c();
    void func_ov068_0226acf8();
    void func_ov068_0226ada0();
    void func_ov068_0226adc4();
    void func_ov068_0226ae74();
    void func_ov068_0226aef0();
    void func_ov068_0226af10();
    void func_ov068_0226b060();
    void func_ov068_0226b088();
    void func_ov068_0226b12c();
    void func_ov068_0226b1ec();
    void func_ov068_0226b268();
    void func_ov068_0226b2bc();
    // enter states
    BOOL func_ov068_0226aac4();
    BOOL func_ov068_0226ab1c();
    BOOL func_ov068_0226aba4();
    BOOL func_ov068_0226abf8();
    BOOL func_ov068_0226acc4();
    BOOL func_ov068_0226ad74();
    BOOL func_ov068_0226adac();
    BOOL func_ov068_0226ae64();
    BOOL func_ov068_0226aebc();
    BOOL func_ov068_0226af0c();
    BOOL func_ov068_0226b014();
    BOOL func_ov068_0226b084();
    BOOL func_ov068_0226b094();
    BOOL func_ov068_0226b190();
    BOOL func_ov068_0226b234();
    BOOL func_ov068_0226b284();
    BOOL func_ov068_0226b2c0();

    void func_ov068_0226b2f4();
    BOOL func_ov068_0226b43c(s32 idx);
    void func_ov068_0226b594();
    void func_ov068_0226b5a4();
    void func_ov068_0226b5f0();
    void func_ov068_0226b614();
    void func_ov068_0226b624();
    void func_ov068_0226b670();
    s32 func_ov068_0226b694();
    Unk_ov068_0226b12c_Vec3 func_ov068_0226b6dc();
    s32 func_ov068_0226b788();

    /* 0x2b0 */ s32 unk_2b0;
    /* 0x2b4 */ s32 unk_2b4;
    /* 0x2b8 */ s32 unk_2b8;
    /* 0x2bc */ Unk_ov068_0226acf8_Vec unk_2bc;
    /* 0x2c8 */ Unk_ov068_0226b12c_Vec3 unk_2c8;
    /* 0x2d4 */ u16 unk_2d4;
    /* 0x2d6 */ u8 unk_2d6;
    /* 0x2d7 */ u8 unk_2d7;
    /* 0x2d8 */ u8 unk_2d8;
    /* 0x2d9 */ u8 unk_2d9;
    /* 0x2da */ u8 unk_2da;
    /* 0x2db */ u8 pad_2db;
    /* 0x2dc */ s32 unk_2dc;
    /* 0x2e0 */ s32 unk_2e0;
};

struct Unk_ov068_0226b724_Obj {
    /* 0x00 */ u8 pad_00[0x4c];
    /* 0x4c */ Unk_ov068_0226b12c_Vec3 unk_4c;
};

struct Unk_ov068_0226b724_Arg {
    /* 0x00 */ u8 pad_00[0xb4];
    /* 0xb4 */ Unk_ov068_0226b724_Obj *unk_b4;
};

struct Unk_ov068_0226a940_Bits {
    u16 a : 7;
    u16 b : 4;
    u16 c : 5;
};

struct Unk_ov068_0226a940_Words {
    u32 a, b;
};

struct Unk_ov068_0226a940_Loc {
    u16 pad;
    u16 h;
};

class Unk_020e1c64 {
public:
    Unk_020e1c64();
    virtual ~Unk_020e1c64();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();
    u8 pad_04[0x1c];
};

class Unk_0200e2c0 {
public:
    Unk_0200e2c0();
    ~Unk_0200e2c0();
    u8 pad_00[0x20];
};

class Unk_ov068_0226a794 {
public:
    /* 0x00 */ u8 pad_00[0x5c];
    /* 0x5c */ s32 unk_5c;
    /* 0x60 */ u8 pad_60[4];
    /* 0x64 */ s32 unk_64;
    /* 0x68 */ u8 pad_68[0x8e - 0x68];
    /* 0x8e */ s16 unk_8e;
    /* 0x90 */ u8 pad_90[0x2cc - 0x90];
    /* 0x2cc */ u8 unk_2cc[0x7ec - 0x2cc];
    /* 0x7ec */ u32 unk_7ec;
    /* 0x7f0 */ u8 pad_7f0[0x7f8 - 0x7f0];
    /* 0x7f8 */ u32 unk_7f8;

    void func_ov068_0226a794();
    void func_ov068_0226a7a8();
    void func_ov068_0226a7e4();
    void func_ov068_0226a80c();
    void func_ov068_0226a838();
    void func_ov068_0226a83c();
    s32 func_ov068_0226a858(s32 a, s32 b);
};

class Unk_ov068_0226a890 {
public:
    /* 0x00 */ u8 pad_00[0x5c];
    /* 0x5c */ s32 unk_5c;
    /* 0x60 */ u8 pad_60[4];
    /* 0x64 */ s32 unk_64;
    /* 0x68 */ u8 pad_68[0x8e - 0x68];
    /* 0x8e */ s16 unk_8e;
    /* 0x90 */ u8 pad_90[0x2cc - 0x90];
    /* 0x2cc */ u8 unk_2cc[0x7ec - 0x2cc];
    /* 0x7ec */ u32 unk_7ec;
    /* 0x7f0 */ u8 pad_7f0[0x7f8 - 0x7f0];
    /* 0x7f8 */ u32 unk_7f8;

    void func_ov068_0226a890();
    void func_ov068_0226a8a4();
    void func_ov068_0226a8e8();
    void func_ov068_0226a910();
    void func_ov068_0226a93c();
    void func_ov068_0226a940();
    s32 func_ov068_0226a9cc(s32 a, s32 b);
};

struct Unk_ov068_02270110_Color {
    u8 a, b, c, d;
    Unk_ov068_02270110_Color(u8 a_, u8 b_, u8 c_, u8 d_) {
        a = a_;
        b = b_;
        c = c_;
        d = d_;
    }
};

extern "C" {
extern s16 data_ov068_02271088;
extern u8 data_021d7350[];
s32 _ZN12Unk_020dbe7c13func_02056654Ev(void *);
s32 _ZN12Unk_020dbe7c13func_020565e8Ei(void *, s32);
u32 _ZN12Unk_0200769413func_02007c08Ej(void *, u32);
void _ZN12Unk_020d6df413func_0200cf04Ejj(void *, s32, s32);
void _ZN12Unk_02006d1413func_0200bd60Esji(void *, s32, s32, s32);
void *func_020952c8();
void _ZN12Unk_020102ec13func_02010914Ev(void *);
void _ZN12Unk_02006d1413func_0200f258Ev(void *);
void _ZN12Unk_020102ec13func_02010358Eijt(void *, s32, s32, s32);
void _ZN12Unk_02006d1413func_0200ec1cEj(void *);
void *func_02010d20(void *);
void func_0209d498(void *);
void func_0209d164(void *, s32);
void func_0200f17c(void *, void *, void *);
void *func_02095774(s32);
void func_0203d984();
void *func_020b4934();
void func_020b4f58(void *, s32, s32, s32);
void *func_0209750c();
void *_ZN12Unk_0209865c13func_02098a58Ev(void *);
void *func_020974f8();
void _ZN12Unk_0209da4413func_0209df30Ei(void *, void *);
void _ZN18Unk_ov009_0225b89419func_ov009_0225b894Ej(void *, s32);
void _ZN18Unk_ov009_0225b89419func_ov009_0225b8b0Ej(void *, s32);
void _ZN12Unk_020dbd5413func_020547e4Ev(void *);
void _ZN12Unk_0205454c13func_02054720Eiiitt(void *, s32, s32, s32, s32, s32);
void func_02094574(s32, s32, s32);
void *func_02095204(s32);
s32 func_020e780c(s32, s32);
void *func_ov003_02218b40(s32);
s32 _ZN18Unk_ov009_0225e29c19func_ov009_0225ba60Ev(void *);
s32 func_02094b0c(void *, s32, s32);
s32 _ZN18Unk_ov009_0225e29c19func_ov009_0225b9b8Ev(void *);
void func_0203d990();
void func_ov003_02218d6c(s32);
s32 _ZN18Unk_ov009_0225e29c19func_ov009_0225bbdcEP23Unk_ov009_0225b880_Vec3Ps(void *, void *, void *);
void func_020b4bbc(void *, s32);
void *func_020b50e8(void *);
void func_020b49c4(void *, void *, void *, s32, s32, s32, s32);
void _ZN18Unk_ov009_0225e29c19func_ov009_0225ba1cEv(void *);
s32 _ZN18Unk_ov009_0225e29c19func_ov009_0225b980Ev(void *);
s32 _ZN18Unk_ov009_0225e29c19func_ov009_0225b974Ev(void *);
s32 func_ov003_02212430(s32, void *, void *, s32);
s32 func_020951b8(s32);
u32 *func_02067918(s32);
void _ZN12Unk_020660f813func_02067958Ev(void *, u32);
s32 _ZN12Unk_0209865c13func_0209888cEv(...);
s32 _ZN12Unk_020940a013func_0209411cEv(...);
void _ZN12Unk_020660f813func_02067978EP12Unk_020ddcf0(void *, void *);
void func_02094030(void *);
void func_020814ec(void *, void *);
void func_02094018(void *);
void func_02094f20();
void func_02094ae8(s32, s32);
void func_020902f8(s32);
void func_020902d4(s32, void *, s32, s32);
s32 func_02090330(s32, void *, s32, s32);
Unk_ov068_0226b12c_Vec3 *func_020947f0(s32);
void func_020e9960(Unk_ov068_0226b12c_Vec3 *, Unk_ov068_0226b12c_Vec3 *, Unk_ov068_0226b12c_Vec3 *);
void func_01ffd070(Unk_ov068_0226b12c_Vec3 *, void *, Unk_ov068_0226b12c_Vec3 *);
s32 func_020e7b98(s32, s32);
s32 FX_Div(s32, s32);
void func_020b0f18();
void func_020b0f3c();
void func_02094f64(s32);
BOOL func_020b0f0c();
BOOL func_020b0f30();
void func_020b49b4();
void _ZN12Unk_0209865c13func_02098738EPt(void *, u16 *);
BOOL func_ov068_0226aa3c();
void _ZN12Unk_0200e2c013func_0200e2c0Eiis(void *, s32, s32, s32);
s32 func_ov068_0226aa04();
s32 _ZN12Unk_020d6df413func_0200e248EP12Unk_0200e2c0(void *, void *);
}

struct Unk_ov068_SceneEntry {
    void *(*factory)();
    u16 unk_04;
    u16 unk_06;
    u32 unk_08;
    u32 unk_0c;
    u32 unk_10;
    u32 unk_14;
};

extern "C" void func_ov068_0226b91c();

extern "C" Unk_ov068_02270110_Color data_ov068_02271090(0x1f, 0x14, 0x14, 0x1f);
extern "C" Unk_ov068_02270110_Color data_ov068_02271098(0x14, 0x14, 0x1f, 0x1f);
extern "C" Unk_ov068_02270110_Color data_ov068_022710a4(0x1f, 0x1f, 0x14, 0x1f);
extern "C" Unk_ov068_02270110_Color data_ov068_022710a0(0x14, 0x1f, 0x14, 0x1f);
extern "C" Unk_ov068_02270110_Color data_ov068_02271094(0x14, 0x1f, 0x1f, 0x1f);
extern "C" Unk_ov068_02270110_Color data_ov068_0227109c(0x14, 0x18, 0x18, 0x1f);
extern "C" Unk_ov068_SceneEntry data_ov068_022700f0 = {(void *(*)())func_ov068_0226b91c, 0x23, 0x29, 0, 0xc8000, 0x12c000, 0x258000};

extern "C" void func_ov068_0226b91c() {
    new Unk_ov068_02270110();
}

Unk_ov068_02270110::Unk_ov068_02270110() {
}

Unk_ov068_02270110::~Unk_ov068_02270110() {
}

BOOL Unk_ov068_02270110::vfunc_70() {
    void *p = func_0209750c();
    unk_2c8.x = unk_5c[0];
    unk_2c8.y = unk_5c[1];
    unk_2c8.z = unk_5c[2];
    if (func_020b0f0c()) {
        unk_2da = 1;
        func_020b4934();
        func_020b49b4();
        func_ov068_0226b43c(1);
    } else if (func_020b0f30()) {
        unk_2da = 1;
        if (p) {
            u16 t = 0xfff1;
            _ZN12Unk_0209865c13func_02098738EPt(p, &t);
        }
        func_020b4934();
        func_020b49b4();
        func_ov068_0226b43c(0xa);
    } else {
        func_ov068_0226b43c(0);
    }
    return TRUE;
}

BOOL Unk_ov068_02270110::vfunc_18() {
    func_ov068_0226b2f4();
    if (unk_2b0) {
        func_02094f64(1);
    }
    return TRUE;
}

BOOL Unk_ov068_02270110::vfunc_24() {
    return TRUE;
}

BOOL Unk_ov068_02270110::vfunc_0c() {
    if (unk_2b0) {
        func_0203d984();
    }
    if (unk_2da) {
        unk_2da = 0;
        func_020b0f18();
        func_020b0f3c();
    }
    return TRUE;
}

Unk_ov068_0226b12c_Vec3 Unk_ov068_02270110::vfunc_b4() {
    return unk_2c8;
}

s32 Unk_ov068_02270110::func_ov068_0226b788() {
    return func_ov009_0225d6d8();
}

BOOL Unk_ov068_02270110::vfunc_b0() {
    if (unk_2b0) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov068_02270110::vfunc_60(u32 a, void *b) {
    if (a == 0) {
        Unk_ov068_0226b724_Obj *o = ((Unk_ov068_0226b724_Arg *)b)->unk_b4;
        Unk_ov068_0226b12c_Vec3 v;
        Unk_ov068_0226b12c_Vec3 out;
        Unk_ov068_0226b12c_Vec3 *pv = &o->unk_4c;
        v.x = pv->x;
        v.y = pv->y;
        v.z = pv->z;
        func_01ffd070(&out, &unk_5c, &v);
        unk_2c8.x = out.x;
        unk_2c8.y = out.y;
        unk_2c8.z = out.z;
    }
}

s32 Unk_ov068_02270110::vfunc_s6c() {
    return 0;
}

void Unk_ov068_02270110::vfunc_88() {
}

Unk_ov068_0226b12c_Vec3 Unk_ov068_02270110::func_ov068_0226b6dc() {
    Unk_ov068_0226b12c_Vec3 r;
    r.x = unk_2c8.x;
    r.y = unk_2c8.y;
    r.z = unk_2c8.z;
    r.x += FX_Div(0x19000, 0x64000) - 0xf6;
    return r;
}

s32 Unk_ov068_02270110::func_ov068_0226b694() {
    if (func_020947f0(4)) {
        Unk_ov068_0226b12c_Vec3 a;
        Unk_ov068_0226b12c_Vec3 c;
        Unk_ov068_0226b12c_Vec3 *p = func_020947f0(4);
        a.x = p->x;
        a.y = p->y;
        a.z = p->z;
        Unk_ov068_0226b12c_Vec3 b = func_ov068_0226b6dc();
        func_020e9960(&c, &b, &a);
        return func_020e7b98(c.x, c.z);
    }
    return 0;
}

void Unk_ov068_02270110::func_ov068_0226b670() {
    unk_2dc = func_02090330(0x41, &unk_2c8, 0, 0);
}

void Unk_ov068_02270110::func_ov068_0226b624() {
    u32 v = unk_1dc.mid;
    if (v >= 0x2d && v <= 0x31) {
        if (v == 0x2d) {
            func_ov068_0226b670();
        }
        func_020902d4(unk_2dc, &unk_2c8, 0, 0);
        if (v == 0x31) {
            func_ov068_0226b614();
        }
    }
}

void Unk_ov068_02270110::func_ov068_0226b614() {
    func_020902f8(unk_2dc);
}

void Unk_ov068_02270110::func_ov068_0226b5f0() {
    unk_2e0 = func_02090330(0x42, &unk_2c8, 0, 0);
}

void Unk_ov068_02270110::func_ov068_0226b5a4() {
    u32 v = unk_1dc.mid;
    if (v >= 0x25 && v <= 0x32) {
        if (v == 0x25) {
            func_ov068_0226b5f0();
        }
        func_020902d4(unk_2e0, &unk_2c8, 0, 0);
        if (v == 0x32) {
            func_ov068_0226b594();
        }
    }
}

void Unk_ov068_02270110::func_ov068_0226b594() {
    func_020902f8(unk_2e0);
}

BOOL Unk_ov068_02270110::func_ov068_0226b43c(s32 idx) {
    static BOOL (Unk_ov068_02270110::*tbl[17])() = {
        &Unk_ov068_02270110::func_ov068_0226b2c0, &Unk_ov068_02270110::func_ov068_0226b284,
        &Unk_ov068_02270110::func_ov068_0226b234, &Unk_ov068_02270110::func_ov068_0226b190,
        &Unk_ov068_02270110::func_ov068_0226b094, &Unk_ov068_02270110::func_ov068_0226b084,
        &Unk_ov068_02270110::func_ov068_0226b014, &Unk_ov068_02270110::func_ov068_0226af0c,
        &Unk_ov068_02270110::func_ov068_0226aebc, &Unk_ov068_02270110::func_ov068_0226ae64,
        &Unk_ov068_02270110::func_ov068_0226adac, &Unk_ov068_02270110::func_ov068_0226ad74,
        &Unk_ov068_02270110::func_ov068_0226acc4, &Unk_ov068_02270110::func_ov068_0226abf8,
        &Unk_ov068_02270110::func_ov068_0226aba4, &Unk_ov068_02270110::func_ov068_0226ab1c,
        &Unk_ov068_02270110::func_ov068_0226aac4,
    };
    if (idx < 0x11) {
        if ((this->*tbl[idx])()) {
            unk_2b0 = idx;
            return TRUE;
        }
    }
    return FALSE;
}

void Unk_ov068_02270110::func_ov068_0226b2f4() {
    static void (Unk_ov068_02270110::*tbl[17])() = {
        &Unk_ov068_02270110::func_ov068_0226b2bc, &Unk_ov068_02270110::func_ov068_0226b268,
        &Unk_ov068_02270110::func_ov068_0226b1ec, &Unk_ov068_02270110::func_ov068_0226b12c,
        &Unk_ov068_02270110::func_ov068_0226b088, &Unk_ov068_02270110::func_ov068_0226b060,
        &Unk_ov068_02270110::func_ov068_0226af10, &Unk_ov068_02270110::func_ov068_0226aef0,
        &Unk_ov068_02270110::func_ov068_0226ae74, &Unk_ov068_02270110::func_ov068_0226adc4,
        &Unk_ov068_02270110::func_ov068_0226ada0, &Unk_ov068_02270110::func_ov068_0226acf8,
        &Unk_ov068_02270110::func_ov068_0226ac3c, &Unk_ov068_02270110::func_ov068_0226abc8,
        &Unk_ov068_02270110::func_ov068_0226ab60, &Unk_ov068_02270110::func_ov068_0226aad4,
        &Unk_ov068_02270110::func_ov068_0226aa74,
    };
    if (unk_2b0 < 0x11) {
        (this->*tbl[unk_2b0])();
    }
}

extern "C" {
s16 data_ov068_02271088;
}

BOOL Unk_ov068_02270110::func_ov068_0226b2c0() {
    _ZN12Unk_0205454c13func_02054720Eiiitt(unk_138, vfunc_64(), 1, 0x1000, 0, 0);
    return TRUE;
}

void Unk_ov068_02270110::func_ov068_0226b2bc() {
}

BOOL Unk_ov068_02270110::func_ov068_0226b284() {
    _ZN12Unk_0205454c13func_02054720Eiiitt(unk_138, vfunc_64(), 1, 0x1000, 0, 0);
    func_0203d990();
    return TRUE;
}

void Unk_ov068_02270110::func_ov068_0226b268() {
    if (func_02095204(4)) {
        func_ov068_0226b43c(2);
    }
}

BOOL Unk_ov068_02270110::func_ov068_0226b234() {
    _ZN12Unk_0205454c13func_02054720Eiiitt(unk_138, vfunc_64(), 1, 0x1000, 0, 0);
    return TRUE;
}

void Unk_ov068_02270110::func_ov068_0226b1ec() {
    _ZN18Unk_ov009_0225b89419func_ov009_0225b894Ej(unk_234, 0x888);
    if (_ZN12Unk_020dbe7c13func_02056654Ev(unk_1d4)) {
        func_ov068_0226b43c(3);
    }
    func_ov068_0226b624();
    _ZN12Unk_020dbd5413func_020547e4Ev(unk_138);
}

BOOL Unk_ov068_02270110::func_ov068_0226b190() {
    unk_2d9 = 0;
    if (func_ov068_0226aa3c()) {
        _ZN12Unk_0205454c13func_02054720Eiiitt(unk_138, vfunc_68(), 1, 0x1000, 0, 0);
        _ZN18Unk_ov009_0225b89419func_ov009_0225b8b0Ej(unk_234, 0x88a);
        return TRUE;
    }
    return FALSE;
}

void Unk_ov068_02270110::func_ov068_0226b12c() {
    if (_ZN12Unk_020dbe7c13func_02056654Ev(unk_1d4)) {
        switch (unk_2d9) {
        case 0x12:
            func_02094f20();
            func_02094ae8(func_ov068_0226b694(), 4);
            break;
        case 0x1c:
            func_ov068_0226b43c(4);
            break;
        }
        if (unk_2d9 < 0xc8) {
            unk_2d9++;
        }
    } else {
        _ZN12Unk_020dbd5413func_020547e4Ev(unk_138);
    }
}

BOOL Unk_ov068_02270110::func_ov068_0226b094() {
    u32 *rec = func_02067918(0);
    this->Unk_020ddcf0::vfunc_s08();
    this->func_020a710c("sp_etc_sequence4");
    BOOL r;
    if (func_0209750c() != 0 && (_ZN12Unk_0209865c13func_0209888cEv(), _ZN12Unk_020940a013func_0209411cEv() == 1)) {
        r = TRUE;
    } else {
        r = FALSE;
    }
    unk_1e = r;
    _ZN12Unk_020660f813func_02067978EP12Unk_020ddcf0(rec, (Unk_020ddcf0 *)this);
    rec[2] = 1;
    Unk_ov068_0226a940_Loc l;
    Unk_020e1c64 o;
    l.h = 0xd014;
    func_020814ec(&o, &l.h);
    Unk_020e1c64 *po = (Unk_020e1c64 *)(u8 *)&o;
    this->func_02065f90(po->vfunc_0c(), 0);
    return TRUE;
}

void Unk_ov068_02270110::func_ov068_0226b088() {
    func_ov068_0226b43c(5);
}

BOOL Unk_ov068_02270110::func_ov068_0226b084() {
    return TRUE;
}

void Unk_ov068_02270110::func_ov068_0226b060() {
    u32 *r = func_02067918(0);
    u32 t = r[1];
    if (t == 0) {
        _ZN12Unk_020660f813func_02067958Ev(r, t);
        func_ov068_0226b43c(6);
    }
}

BOOL Unk_ov068_02270110::func_ov068_0226b014() {
    s32 r1 = func_ov068_0226b788();
    _ZN12Unk_0205454c13func_02054720Eiiitt(unk_138, r1, 1, 0x1000, 0, 0);
    _ZN18Unk_ov009_0225b89419func_ov009_0225b8b0Ej(unk_234, 0x88b);
    unk_2d8 = 0;
    return TRUE;
}

void Unk_ov068_02270110::func_ov068_0226af10() {
    _ZN18Unk_ov009_0225b89419func_ov009_0225b894Ej(unk_234, 0x889);
    func_ov068_0226b5a4();
    if (_ZN12Unk_020dbe7c13func_02056654Ev(unk_1d4) != 0) {
        func_ov068_0226b43c(7);
    } else {
        _ZN12Unk_020dbd5413func_020547e4Ev(unk_138);
        u8 *o = (u8 *)func_02095204(4);
        if (o != 0) {
            s32 r4 = *(s16 *)(o + 0x8e);
            if (func_020e780c(r4, func_ov068_0226b694()) < 0x1200) {
                func_02094574(0, (s16)(func_ov068_0226b694() - r4), 4);
            } else {
                if (unk_2d8 < 0xc8) {
                    unk_2d8 = unk_2d8 + 1;
                }
                if (unk_2d8 == 0x10) {
                    void *q = func_ov003_02218b40(0x5000);
                    if (q != 0) {
                        s32 l0[1];
                        s32 l1[3];
                        if (_ZN18Unk_ov009_0225e29c19func_ov009_0225bbdcEP23Unk_ov009_0225b880_Vec3Ps(q, l1, l0) != 0) {
                            unk_2bc.x = l1[0];
                            unk_2bc.y = l1[1];
                            s32 *p = &unk_2bc.z;
                            *p = l1[2];
                            *p = *p + 0x200;
                            func_02094574(0, 0, 4);
                            func_02094b0c(&unk_2bc, 0x400, 4);
                        }
                    }
                }
            }
        }
    }
}

BOOL Unk_ov068_02270110::func_ov068_0226af0c() {
    return TRUE;
}

void Unk_ov068_02270110::func_ov068_0226aef0() {
    if (func_020951b8(4) == 0) {
        func_ov068_0226b43c(8);
    }
}

BOOL Unk_ov068_02270110::func_ov068_0226aebc() {
    if (func_ov003_02212430(1, &unk_2bc, &unk_2bc.z, -0x8000) != 0) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov068_02270110::func_ov068_0226ae74() {
    void *q = func_ov003_02218b40(0x5000);
    if (q != 0) {
        _ZN18Unk_ov009_0225e29c19func_ov009_0225ba1cEv(q);
        unk_2b4 = _ZN18Unk_ov009_0225e29c19func_ov009_0225b980Ev(q);
        unk_2b8 = _ZN18Unk_ov009_0225e29c19func_ov009_0225b974Ev(q);
        func_ov068_0226b43c(9);
    }
}

BOOL Unk_ov068_02270110::func_ov068_0226ae64() {
    unk_2d4 = 0x14;
    return TRUE;
}

void Unk_ov068_02270110::func_ov068_0226adc4() {
    Unk_ov068_0226acf8_Vec v;
    s16 sv;
    if (unk_2d4 != 0) {
        unk_2d4 = unk_2d4 - 1;
    }
    if (unk_2d4 == 0) {
        void *q = func_ov003_02218b40(0x5000);
        if (q != 0) {
            if (_ZN18Unk_ov009_0225e29c19func_ov009_0225bbdcEP23Unk_ov009_0225b880_Vec3Ps(q, &v, &sv) != 0) {
                func_020b4bbc(func_020b4934(), 9);
                v.z = v.z + 0x1000;
                void *r4 = func_020b4934();
                void *r1 = func_020b50e8(r4);
                func_020b49c4(r4, r1, &v, 0xf000000, (s16)(sv + 0x8000), unk_2b4, unk_2b8);
                func_0203d984();
            }
        }
    }
}

BOOL Unk_ov068_02270110::func_ov068_0226adac() {
    func_0203d990();
    func_ov003_02218d6c(1);
    return TRUE;
}

void Unk_ov068_02270110::func_ov068_0226ada0() {
    func_ov068_0226b43c(0xb);
}

BOOL Unk_ov068_02270110::func_ov068_0226ad74() {
    void *q = func_ov003_02218b40(0x5000);
    if (q != 0) {
        unk_2d7 = 0x10;
        return _ZN18Unk_ov009_0225e29c19func_ov009_0225b9b8Ev(q);
    }
    return TRUE;
}

void Unk_ov068_02270110::func_ov068_0226acf8() {
    void *q = func_ov003_02218b40(0x5000);
    if (q != 0) {
        if (_ZN18Unk_ov009_0225e29c19func_ov009_0225ba60Ev(q) != 0) {
            u8 *o = (u8 *)func_02095204(4);
            if (o != 0) {
                if (unk_2d7 == 0) {
                    Unk_ov068_0226acf8_Vec v;
                    Unk_ov068_0226acf8_Vec *pv = (Unk_ov068_0226acf8_Vec *)(o + 0x5c);
                    v.x = pv->x;
                    v.y = pv->y;
                    v.z = pv->z;
                    v.z = v.z + 0x4000;
                    if (func_02094b0c(&v, 0x400, 4) != 0) {
                        func_ov068_0226b43c(0xc);
                    }
                }
            }
            if (unk_2d7 != 0) {
                unk_2d7 = unk_2d7 - 1;
            }
        }
    }
}

BOOL Unk_ov068_02270110::func_ov068_0226acc4() {
    s32 r1 = vfunc_64();
    _ZN12Unk_0205454c13func_02054720Eiiitt(unk_138, r1, 1, 0x1000, 0, 0);
    return TRUE;
}

void Unk_ov068_02270110::func_ov068_0226ac3c() {
    _ZN18Unk_ov009_0225b89419func_ov009_0225b894Ej(unk_234, 0x888);
    if (_ZN12Unk_020dbe7c13func_02056654Ev(unk_1d4) != 0) {
        func_ov068_0226b43c(0xd);
    }
    func_ov068_0226b624();
    _ZN12Unk_020dbd5413func_020547e4Ev(unk_138);
    u8 *o = (u8 *)func_02095204(4);
    if (o != 0) {
        s32 r4 = *(s16 *)(o + 0x8e);
        if (func_020e780c(r4, func_ov068_0226b694()) < 0x1200) {
            func_02094574(0, (s16)(func_ov068_0226b694() - r4), 4);
        }
    }
}

BOOL Unk_ov068_02270110::func_ov068_0226abf8() {
    s32 r1 = vfunc_68();
    _ZN12Unk_0205454c13func_02054720Eiiitt(unk_138, r1, 1, 0x1000, 0, 0);
    _ZN18Unk_ov009_0225b89419func_ov009_0225b8b0Ej(unk_234, 0x88a);
    return TRUE;
}

void Unk_ov068_02270110::func_ov068_0226abc8() {
    if (_ZN12Unk_020dbe7c13func_02056654Ev(unk_1d4) != 0) {
        func_ov068_0226b43c(0xe);
    }
    _ZN12Unk_020dbd5413func_020547e4Ev(unk_138);
}

BOOL Unk_ov068_02270110::func_ov068_0226aba4() {
    unk_2d6 = 0x1e;
    if (func_ov068_0226aa04() != 0) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov068_02270110::func_ov068_0226ab60() {
    if (unk_2d6 == 0) {
        func_ov068_0226b43c(0xf);
    }
    if (unk_2d6 != 0) {
        func_02094574(0, 0, 4);
        unk_2d6 = unk_2d6 - 1;
    }
    _ZN12Unk_020dbd5413func_020547e4Ev(unk_138);
}

BOOL Unk_ov068_02270110::func_ov068_0226ab1c() {
    s32 r1 = func_ov068_0226b788();
    _ZN12Unk_0205454c13func_02054720Eiiitt(unk_138, r1, 1, 0x1000, 0, 0);
    _ZN18Unk_ov009_0225b89419func_ov009_0225b8b0Ej(unk_234, 0x88b);
    return TRUE;
}

void Unk_ov068_02270110::func_ov068_0226aad4() {
    _ZN18Unk_ov009_0225b89419func_ov009_0225b894Ej(unk_234, 0x889);
    if (_ZN12Unk_020dbe7c13func_02056654Ev(unk_1d4) != 0) {
        func_ov068_0226b43c(0x10);
    }
    func_ov068_0226b5a4();
    _ZN12Unk_020dbd5413func_020547e4Ev(unk_138);
}

BOOL Unk_ov068_02270110::func_ov068_0226aac4() {
    data_ov068_02271088 = 0x41;
    return TRUE;
}

void Unk_ov068_02270110::func_ov068_0226aa74() {
    if (data_ov068_02271088 == 0) {
        func_0203d984();
        func_020b4f58(func_020b4934(), 0x2c, 2, 2);
        _ZN12Unk_0209865c13func_02098a58Ev(func_0209750c());
        _ZN12Unk_0209da4413func_0209df30Ei(data_021d7350, func_020974f8());
    }
    if (data_ov068_02271088 >= 0) {
        data_ov068_02271088 = data_ov068_02271088 - 1;
    }
}

extern "C" s32 func_ov068_0226aa3c() {
    Unk_ov068_0226a890 *p = (Unk_ov068_0226a890 *)func_02095774(4);
    if (p != 0) {
        p->unk_7f8 = _ZN12Unk_0200769413func_02007c08Ej(p, p->unk_7ec);
        return p->func_ov068_0226a9cc(6, -1);
    }
    return 0;
}

extern "C" s32 func_ov068_0226aa04() {
    Unk_ov068_0226a794 *p = (Unk_ov068_0226a794 *)func_02095774(4);
    if (p != 0) {
        p->unk_7f8 = _ZN12Unk_0200769413func_02007c08Ej(p, p->unk_7ec);
        return p->func_ov068_0226a858(6, -1);
    }
    return 0;
}

s32 Unk_ov068_0226a890::func_ov068_0226a9cc(s32 a, s32 b) {
    Unk_0200e2c0 m;
    _ZN12Unk_0200e2c013func_0200e2c0Eiis(&m, 0x87, a, b);
    return _ZN12Unk_020d6df413func_0200e248EP12Unk_0200e2c0(this, &m);
}

void Unk_ov068_0226a890::func_ov068_0226a940() {
    Unk_ov068_0226a940_Loc l;
    Unk_ov068_0226a940_Words w;
    _ZN12Unk_020102ec13func_02010358Eijt(this, 0x82, 0, 0);
    unk_8e = 0;
    _ZN12Unk_02006d1413func_0200ec1cEj(this);
    void *r4 = func_02010d20(this);
    if (r4 != 0) {
        Unk_ov068_0226a940_Bits bits;
        w.a = 0;
        w.b = 0;
        func_0209d498(&w);
        func_0209d164(&w, 1);
        bits.a = ((u8 *)&w)[5];
        bits.b = ((u8 *)&w)[4];
        bits.c = ((u8 *)&w)[3];
        func_0200f17c(this, r4, &bits);
    }
}

void Unk_ov068_0226a890::func_ov068_0226a93c() {
}

void Unk_ov068_0226a890::func_ov068_0226a910() {
    unk_5c = unk_5c + 0x1c00;
    unk_64 = unk_64 - 0x2c00;
    unk_8e = unk_8e + 0x8000;
}

void Unk_ov068_0226a890::func_ov068_0226a8e8() {
    _ZN12Unk_020102ec13func_02010914Ev(this);
    if (_ZN12Unk_020dbe7c13func_020565e8Ei(unk_2cc, 0x16) != 0) {
        _ZN12Unk_02006d1413func_0200f258Ev(this);
    }
}

void Unk_ov068_0226a890::func_ov068_0226a8a4() {
    if (_ZN12Unk_020dbe7c13func_02056654Ev(unk_2cc) != 0) {
        unk_7f8 = _ZN12Unk_0200769413func_02007c08Ej(this, unk_7ec);
        _ZN12Unk_02006d1413func_0200bd60Esji(this, 0, 5, -1);
        *(u8 *)func_020952c8() = 0;
    }
}

void Unk_ov068_0226a890::func_ov068_0226a890() {
    func_ov068_0226a8e8();
    func_ov068_0226a8a4();
}

s32 Unk_ov068_0226a794::func_ov068_0226a858(s32 a, s32 b) {
    Unk_0200e2c0 m;
    _ZN12Unk_0200e2c013func_0200e2c0Eiis(&m, 0x88, a, b);
    return _ZN12Unk_020d6df413func_0200e248EP12Unk_0200e2c0(this, &m);
}

void Unk_ov068_0226a794::func_ov068_0226a83c() {
    _ZN12Unk_020102ec13func_02010358Eijt(this, 0x83, 3, 0);
    unk_8e = 0;
}

void Unk_ov068_0226a794::func_ov068_0226a838() {
}

void Unk_ov068_0226a794::func_ov068_0226a80c() {
    unk_5c = unk_5c - 0x1c00;
    unk_64 = unk_64 + 0x2c00;
    unk_8e = unk_8e + 0x8000;
}

void Unk_ov068_0226a794::func_ov068_0226a7e4() {
    _ZN12Unk_020102ec13func_02010914Ev(this);
    if (_ZN12Unk_020dbe7c13func_020565e8Ei(unk_2cc, 8) != 0) {
        _ZN12Unk_02006d1413func_0200f258Ev(this);
    }
}

void Unk_ov068_0226a794::func_ov068_0226a7a8() {
    if (_ZN12Unk_020dbe7c13func_02056654Ev(unk_2cc) != 0) {
        unk_7f8 = _ZN12Unk_0200769413func_02007c08Ej(this, unk_7ec);
        _ZN12Unk_020d6df413func_0200cf04Ejj(this, 9, -1);
    }
}

void Unk_ov068_0226a794::func_ov068_0226a794() {
    func_ov068_0226a7e4();
    func_ov068_0226a7a8();
}

