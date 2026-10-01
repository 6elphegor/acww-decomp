// mwcc-version: 1.2/base
// ov004 TU05: .text 0x02213b90-0x02214948 (class Unk_ov004_0224bda0). The switch function
// Unk_ov004_0224bda0::func_ov004_02214494 needs mwcc 1.2/base and is in the _switch file (object order).
#include "types.h"
#include "Unk_020d8c7c.h"

struct Unk_ov004_022091fc_Vec {
    s32 x, y, z;
    Unk_ov004_022091fc_Vec() {}
    ~Unk_ov004_022091fc_Vec() {}
};

class Unk_020d5d84 : public Unk_020d8c7c {
public:
    virtual BOOL vfunc_04();
    virtual void vfunc_08();
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_14();
    virtual BOOL vfunc_1c();
    virtual BOOL vfunc_20();
    virtual BOOL vfunc_28();
    virtual BOOL vfunc_2c();

    /* 0x50 */ u8 unk_50[0xc];
    /* 0x5c */ s32 unk_5c[3];
    /* 0x68 */ u8 pad_68[0x8e - 0x68];
    /* 0x8e */ s16 unk_8e;
    /* 0x90 */ u8 pad_90[0xd4 - 0x90];
};

class Unk_020d9670 : public Unk_020d5d84 {
public:
    Unk_020d9670();
    virtual ~Unk_020d9670();
    virtual BOOL vfunc_04();
    virtual void vfunc_08();
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_1c();
    virtual BOOL vfunc_48(void *a);
    virtual void vfunc_4c(u32 a, u8 b);
    virtual Unk_ov004_022091fc_Vec *vfunc_50();
    virtual BOOL vfunc_54(void *a);
    virtual BOOL vfunc_58(void *a);
    virtual BOOL vfunc_5c();

    /* 0xd4 */ u8 unk_d4[0x10];
    /* 0xe4 */ s32 unk_e4;
    /* 0xe8 */ u16 unk_e8;
    /* 0xea */ u16 pad_ea;
};

struct Unk_020660f8 {
    /* 0x0000 */ u32 unk_00;
    /* 0x0004 */ s32 unk_04;
    /* 0x0008 */ s32 unk_08;
};

// Secondary base at +0xec (vtable main 0x020ddcf0). Unk_ov004_0224bda0 overrides its slots 0x10, 0x14 and 0x18 with
// the functions its own vtable has at 0x60, 0x64 and 0x68, so those three slots carry the names vfunc_60/64/68 here
// (the thunks are _ZThn236_N18Unk_ov004_0224bda08vfunc_60Ev ...). Every other slot is named vfunc_sXX: main has a
// label _ZN12Unk_020ddcf09vfunc_sXXEv for each, and the names cannot be overridden by the primary chain by accident.
class Unk_020e2a30 {
public:
    Unk_020e2a30();
    virtual ~Unk_020e2a30();
    virtual void vfunc_s08();
    void func_020a710c(const char *src);

    /* 0x04 */ char unk_04[0x1a];
    /* 0x1e */ u8 unk_1e;
};

class Unk_020ddcf0 : public Unk_020e2a30 {
public:
    Unk_020ddcf0();
    virtual ~Unk_020ddcf0();
    virtual void vfunc_s08();
    virtual void vfunc_s0c();
    virtual void vfunc_60();
    virtual BOOL vfunc_64();
    virtual BOOL vfunc_68();
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
    virtual void vfunc_s6c();
    virtual void vfunc_s70();
    virtual void vfunc_s74();

    u8 pad_20[0x1c];
    /* 0x3c */ Unk_020660f8 *unk_3c;
    /* 0x40 */ u8 unk_40;
    u8 pad_41[3];
};

// Member at +0x134: the original constructs it with the base-object constructor (C2), which a member declaration
// cannot do, so it is raw storage plus explicit calls through the real symbol names (as in TU04).
struct Unk_020b6a94 {
    u8 pad[0x1c];
};

class Unk_020dd324 {
public:
    Unk_020dd324(u16 *p);
    ~Unk_020dd324();
    u32 pad[9];
};

class Unk_020e1c64 {
public:
    Unk_020e1c64();
    ~Unk_020e1c64();
    u32 pad[7];
};

struct Unk_ov004_022142fc_Actor {
    u8 pad_00[0x5c];
    u8 unk_5c[0xc];
    u8 pad_68[0x8e - 0x68];
    s16 unk_8e;
};

struct Unk_ov004_022146ec_Bits {
    u16 a : 2;
    u16 b : 6;
    u16 c : 8;
};

struct Unk_ov004_022146ec_Actor {
    u8 pad_00[0x5c];
    s32 pos[3];
    u8 pad_68[0x8e - 0x68];
    u16 ang;
};

struct Unk_ov004_022146ec_Sing {
    u8 pad_00[0x64];
    u32 unk_64;
};

class Unk_ov004_0224bda0;
class Unk_020b6960;

// Functions of other modules, under their real (mangled) symbol names; the object is the first argument.
#define func_02002cf8 _ZN12Unk_020d5d8413func_02002cf8EPvS0_S0_S0_S0_
#define func_0203e47c _ZN12Unk_020d967013func_0203e47cEi
#define func_0203e488 _ZN12Unk_020d967013func_0203e488Ei
#define func_0203e624 _ZN12Unk_020d967013func_0203e624Ej
#define func_020b68a8 _ZN12Unk_020b696013func_020b68a8EP12Unk_020b6a94P4Vec3S3_ih
#define func_02070358 _ZN12Unk_0206fe8013func_02070358EPt
#define func_02070370 _ZN12Unk_0206fe8013func_02070370EPt
#define func_020700a4 _ZN12Unk_0206fe8013func_020700a4EiPt
#define func_020679b4 _ZN12Unk_020660f813func_020679b4Ev
#define func_020679c0 _ZN12Unk_020660f813func_020679c0Ei
#define func_020679ec _ZN12Unk_020660f813func_020679ecEiPvj
#define func_02067a3c _ZN12Unk_020660f813func_02067a3cEiPv
#define func_02067a84 _ZN12Unk_020660f813func_02067a84EPhPv
#define func_020aa514 _ZN12Unk_020aa3b813func_020aa514Ev
#define func_020aa608 _ZN12Unk_020aa3b813func_020aa608Ev
#define func_020aa638 _ZN12Unk_020aa3b813func_020aa638EiPKhiS1_PKci
#define func_020aa680 _ZN12Unk_020aa3b813func_020aa680Eii

extern "C" {
extern u8 data_021edb5c;
extern char data_021edb60[];
extern u8 data_021f4880[];
extern s16 data_02135f44[];
extern Unk_ov004_022146ec_Sing *data_020cbb18;
extern Unk_020660f8 data_021ed0a0;

void _ZN12Unk_020b6a94C2Ev(Unk_020b6a94 *self);
void _ZN12Unk_020b6a94D1Ev(Unk_020b6a94 *self);
s32 func_02002cf8(s32 a, s32 b, void *c, void *d, void *e);
void func_0203e47c(void *self, Unk_020ddcf0 *sec);
void func_0203e488(void *self, Unk_020ddcf0 *sec);
void func_0203e624(void *self, u32 a);
s32 func_020b68a8(Unk_020b6960 *self, Unk_020b6a94 *o, void *a, u32 b, u32 c, u32 d);
s32 func_02070358(void *self, u16 *p);
s32 func_02070370(void *self, u16 *p);
s32 func_020700a4(void *self, Unk_020e1c64 *a, u16 *p);
void *func_020679b4(void *self);
void func_020679c0(void *self, s32 a);
void func_020679ec(void *self, s32 a, Unk_020dd324 *b, u32 c);
void func_02067a3c(void *self, s32 a, Unk_020e1c64 *b);
void func_02067a84(void *self, u8 *a, void *b);
BOOL func_020aa514(void *self);
void func_020aa608(void *self);
void func_020aa638(void *self, s32 a, const u8 *b, s32 c, const char *d, s32 e, s32 f);
void func_020aa680(void *self, s32 a, s32 b);
s32 func_0203d67c(void *self);
s32 func_0203d704(void *self, s32 a);
void func_020ed188(void *self);
void *func_020e8574(u32 size);
void func_020e8558(void *p);
s32 func_020e9650(void *a, void *b);
s32 func_020e780c(s32 a, s32 b);
Unk_020b6960 *func_020b50b4(void);
s32 func_020b50e8(void);
Unk_ov004_022146ec_Actor *func_020951ec(u32);
void func_01ffd070(void *, void *, void *);
}

class Unk_ov004_0224bda0 : public Unk_020d9670, public Unk_020ddcf0 {
public:
    Unk_ov004_0224bda0();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_24();
    virtual ~Unk_ov004_0224bda0();
    virtual BOOL vfunc_48(void *a);
    virtual void vfunc_4c(u32 a, u8 b);
    virtual void vfunc_60();
    virtual BOOL vfunc_64();
    virtual BOOL vfunc_68();

    void func_ov004_02213c58();
    BOOL func_ov004_02213c7c();
    void func_ov004_02213d18();
    BOOL func_ov004_02213d48();
    void func_ov004_02213d4c();
    BOOL func_ov004_02213d70();
    void func_ov004_02213e74();
    BOOL func_ov004_02213ea4();
    void func_ov004_02213ea8();
    BOOL func_ov004_02213f34(s32 idx);
    BOOL func_ov004_02214350();
    void func_ov004_02214364();
    u32 func_ov004_022143b8();
    BOOL func_ov004_02214404();
    BOOL func_ov004_0221444c();
    BOOL func_ov004_02214494();
    BOOL func_ov004_022145bc();
    BOOL func_ov004_02214608();

    /* 0x130 */ s32 unk_130;
    /* 0x134 */ Unk_020b6a94 unk_134;
    /* 0x150 */ u8 unk_150;
    /* 0x151 */ u8 unk_151;
    /* 0x152 */ u8 pad_152[2];
    /* 0x154 */ s32 unk_154;
    /* 0x158 */ u32 unk_158;
    /* 0x15c */ s16 unk_15c;
    /* 0x15e */ u8 pad_15e[2];
    /* 0x160 */ u16 *unk_160;
    /* 0x164 */ u32 unk_164;
    /* 0x168 */ u8 unk_168;
};

typedef void (Unk_ov004_0224bda0::*Unk_ov004_02213ea8_Fn)();
typedef BOOL (Unk_ov004_0224bda0::*Unk_ov004_02213f34_Fn)();

struct Unk_ov004_SceneEntry {
    Unk_ov004_0224bda0 *(*factory)();
    u16 id;
    u16 size;
    u32 zero;
    u32 a, b, c;
};

struct Unk_ov004_Quad {
    u8 a, b, c, d;
    Unk_ov004_Quad(u8 a_, u8 b_, u8 c_, u8 d_) {
        a = a_;
        b = b_;
        c = c_;
        d = d_;
    }
};

extern "C" {
extern s16 data_ov004_0224bd3c;
extern char data_ov004_0224be8c[];
extern u8 data_ov004_022502c4;
extern u8 data_ov004_022502c8;
extern u32 data_ov004_022502d4;
extern u8 *data_ov004_022502d8;
extern u32 data_ov004_022502e8;
extern u32 data_ov004_022502f8;
extern Unk_ov004_0224bda0 *data_ov004_0225033c[0x20];
Unk_ov004_0224bda0 *func_ov004_022148a0(void);
void func_ov004_0221465c(void);
}

// Only this function: it needs mwcc 1.2/base (the rest of the unit is in the main file, built with 1.2/sp2).
BOOL Unk_ov004_0224bda0::func_ov004_02214494() {
    if (func_ov004_02214350() == 0) {
        u16 **p = &unk_160;
        *p = (u16 *)func_020e8574(unk_164 * 2);
        if (*p) {
            u32 i;
            switch (unk_158) {
            case 0:
                for (i = 0; i < unk_164; i++) {
                    u32 v = data_ov004_022502d8[i];
                    u16 r;
                    if (v < 0x38) r = v + 0x12b0; else r = 0x12b0;
                    unk_160[i] = r;
                }
                return TRUE;
            case 1:
                for (i = 0; i < unk_164; i++) {
                    u32 v = data_ov004_022502d8[i];
                    u16 r;
                    if (v < 0x38) r = v + 0x12e8; else r = 0x12e8;
                    unk_160[i] = r;
                }
                return TRUE;
            case 2:
                for (i = 0; i < unk_164; i++) {
                    u32 v = data_ov004_022502d8[i];
                    u32 r;
                    if (v < 0x14) r = v * 4 + 0x3894; else r = 0x3894;
                    unk_160[i] = r;
                }
                return TRUE;
            case 3:
                for (i = 0; i < unk_164; i++) {
                    u32 v = data_ov004_022502d8[i];
                    u32 r;
                    if (v < 0x34) r = v * 4 + 0x450c; else r = 0x450c;
                    unk_160[i] = r;
                }
                return TRUE;
            default:
                return FALSE;
            }
        }
        return FALSE;
    }
    return TRUE;
}
