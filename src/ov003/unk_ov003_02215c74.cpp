// mwcc-version: 1.2/sp2
// ov003 TU10 (actor 022318e8): .text 0x02215c74-0x02216430
#include "types.h"

// shared_actor.h.txt -- declarations shared by the ov003 actor units (class family of ov009 Unk_ov009_0225e29c).
// Written by the agent that owns ov003 TU06/07/09/10/11/12 (all 1.2/sp2).  Paste unchanged after `#include "types.h"`
// (do NOT include Unk_020d8c7c.h: the chain below is an own copy whose slot names are the real symbol names).
//
// Vtable of every actor (original vtable symbol minus 8 bytes, 0x150 bytes):
//   primary slots 0x00..0xb8 (0xbc bytes), then 8 bytes secondary header, then the secondary vtable of Unk_020ddcf0
//   (D1, D0, 08..74).  Primary slot -> symbol:
//     00 ov009::vfunc_00      04 Unk_020d9670::vfunc_04   08 Unk_020d9670::func_0203e678(s32)   0c Base::vfunc_0c
//     10 ov009::vfunc_10      14 Unk_020d5d84::vfunc_14   18 Base::vfunc_18
//     1c ov009::vfunc_1c   (symbols.txt names it vfunc_24, ALIAS NEEDED)   20 ov009::vfunc_20(u32) (symbols: vfunc_28Ej, ALIAS)
//     24 Base::vfunc_24       28 ov009::vfunc_28 (symbols: vfunc_30Ev, ALIAS)   2c Unk_020d5d84::vfunc_2c   30..3c Base
//     40 D1 44 D0   48 ov009::vfunc_48(Unk_020d9670*)   4c ov009::vfunc_4c(u32,u8)   50 ov009::vfunc_50
//     54/58/5c Unk_020d9670   60 ov009::vfunc_60(u32,void*)   64/68 ov009   6c ov009::vfunc_6c(s32)   70 ov009::vfunc_70
//     74 ov009::func_ov009_0225ca98   78..b0 ov009::vfunc_78..b0   b4 / b8 ov009::vfunc_b4/b8 (symbols: func_ov009_0225b884 /
//     func_ov009_0225b880, ALIAS)
// Aliases (zero-size labels, tools/pipeline/alias.py) the coordinator must add; <existing> -> <new>:
//   ov009  _ZN18Unk_ov009_0225e29c8vfunc_24Ev           -> _ZN18Unk_ov009_0225e29c8vfunc_1cEv        (0x0225db04)
//   ov009  _ZN18Unk_ov009_0225e29c8vfunc_28Ej           -> _ZN18Unk_ov009_0225e29c8vfunc_20Ej        (0x0225da90)
//   ov009  _ZN18Unk_ov009_0225e29c8vfunc_30Ev           -> _ZN18Unk_ov009_0225e29c8vfunc_28Ev        (0x0225d9e4)
//   ov009  func_ov009_0225b884                           -> _ZN18Unk_ov009_0225e29c8vfunc_b4Ev        (0x0225b884)
//   ov009  func_ov009_0225b880                           -> _ZN18Unk_ov009_0225e29c8vfunc_b8Ev        (0x0225b880)
//   main   Unk_020ddcf0 slots, one label each (the unit names them vfunc_sXX so that overrides in the primary chain
//          cannot override them): _ZN12Unk_020ddcf09vfunc_sXXEv for XX = 08 0c 10 18 1c 20 24 28 2c 30 34 3c 40 44 48 4c 50 54 58
//          5c 60 64 68 6c 70 74 (existing name _ZN12Unk_020ddcf08vfunc_XXEv) and _ZN12Unk_020ddcf09vfunc_s38Ej (existing
//          _ZN12Unk_020ddcf08vfunc_38Ej).
//   ov003  0x0221445c is _ZThn236_N18Unk_ov009_0225e29c8vfunc_88Ev, the thunk of ov009::vfunc_88 in slot 0x14 of the secondary
//          vtable.  Every unit of the family names that slot vfunc_88, so each emits the thunk as a link-once function and
//          the linker keeps the copy of the first unit in link order (unk_ov003_022141bc.cpp), as in the original.
//          (No alias: the old label _ZN12Unk_020ddcf09vfunc_s14Ev is gone.)
// Notes:
//  * The ctor of a derived class calls Unk_ov009_0225e29c::Unk_ov009_0225e29c() (ov009 symbol C2 0x0225deec).
//  * Names a derived class must not reuse for its own members: unk_130 .. unk_2a4 below.

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

// Secondary base at +0xec (vtable main 0x020ddcf0 chain).  Slots are named vfunc_sXX (see aliases above) except 0x14 (vfunc_88).
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
    // Slot 0x14 has the name of Unk_ov009_0225e29c::vfunc_88, which overrides it: the vtable then names the shared
    // thunk _ZThn236_N18Unk_ov009_0225e29c8vfunc_88Ev (0x0221445c).  The compiler also emits a link-once copy of the
    // thunk in this unit; the linker keeps the first one (unk_ov003_022141bc.cpp) and drops this one.
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
    virtual void vfunc_s6c();
    virtual void vfunc_s70();
    virtual void vfunc_s74();

    void func_02065f90(u8 *a, u32 b);

    u8 pad_20[0x1c];
    /* 0x3c */ Unk_020660f8 *unk_3c;
    /* 0x40 */ u8 unk_40;
    u8 pad_41[3];
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
    virtual void vfunc_b4();
    virtual BOOL vfunc_b8();

    s32 func_ov009_0225d6b8(u32 a);
    void func_ov009_0225d244();
    void func_ov009_0225bc88();

    /* 0x130 */ u8 unk_130;
    /* 0x131 */ u8 pad_131;
    /* 0x132 */ u16 unk_132;
    /* 0x134 */ u8 pad_134[4];
    /* 0x138 */ u8 unk_138[0x194 - 0x138];
    /* 0x194 */ void *unk_194;
    /* 0x198 */ u8 pad_198[4];
    /* 0x19c */ Unk_ov003_Blk unk_19c;
    /* 0x1cc */ u8 pad_1cc[0x1f0 - 0x1cc];
    /* 0x1f0 */ u8 unk_1f0[0x228 - 0x1f0];
    /* 0x228 */ u32 unk_228;
    /* 0x22c */ u32 unk_22c;
    /* 0x230 */ u8 unk_230;
    /* 0x231 */ u8 unk_231;
    /* 0x232 */ Unk_ov003_Flags unk_232;
    /* 0x233 */ u8 unk_233;
    /* 0x234 */ u8 pad_234[0x278 - 0x234];
    /* 0x278 */ u32 unk_278;
    /* 0x27c */ u8 unk_27c;
    /* 0x27d */ u8 pad_27d;
    /* 0x27e */ u16 unk_27e;
    /* 0x280 */ u8 pad_280[0x288 - 0x280];
    /* 0x288 */ void *unk_288;
    /* 0x28c */ u8 unk_28c;
    /* 0x28d */ u8 pad_28d[0x2a4 - 0x28d];
    /* 0x2a4 */ Unk_ov003_Vec unk_2a4;
    /* 0x2b0 */
};

// ---- main-module helper classes ----
class Unk_020dbe7c {
public:
    virtual ~Unk_020dbe7c();
    inline Unk_020dbe7c() : unk_08(0), unk_0c(0), unk_10(0x1000) {}
    void func_020566bc();

    u32 unk_04;
    u32 unk_08;
    u32 unk_0c;
    u32 unk_10;
    u32 unk_14;
};

class Unk_020dbe4c : public Unk_020dbe7c {
public:
    Unk_020dbe4c();
    virtual ~Unk_020dbe4c();
    void func_02055a9c(u32 a);
    void func_02055ae4(s32 a, s32 b, s32 c, s32 e, u16 f);
    BOOL func_02055bcc(u32 a, void *c);

    u32 unk_18;
    u32 unk_1c;
};

class Unk_020dbd54 {
public:
    Unk_020dbd54();
    virtual ~Unk_020dbd54();
    s32 func_020547cc(void *q);

    u8 pad_04[0x5c - 4];
    void *unk_5c;
    u8 pad_60[0xb8 - 0x60];
};

class Unk_020e1c64 {
public:
    Unk_020e1c64();
    ~Unk_020e1c64();
    u32 pad[8];
};

#define func_02002cf8 _ZN12Unk_020d5d8413func_02002cf8EPvS0_S0_S0_S0_
#define func_02002fc8 _ZN12Unk_02002fc813func_02002fc8Ej
#define func_02067a3c _ZN12Unk_020660f813func_02067a3cEiPv
#define func_02072e88 _ZN12Unk_020cbb1813func_02072e88Ei
#define func_0207fc1c _ZN12Unk_0207fb8013func_0207fc1cEv
#define func_020805c4 _ZN12Unk_0208086013func_020805c4Ev
extern "C" {
extern u8 data_021dfd8c[];
extern void *data_020cbb18;
extern void *data_021c6204;
extern const u8 data_ov003_0222eff8[];
extern const u8 data_ov003_0222eff0[];
extern char data_ov003_02235330[];
extern char data_ov003_02235308[];
extern char data_ov003_022352d4[];
extern u32 data_ov003_022352e8[];

BOOL func_ov009_0225d600(void *p);
void *func_0207bf60(void *p, s32 i);
s32 func_0207e274(void *p);
s32 func_0207e278(void *p);
void func_020a5e74(s32 i, u8 *a, u8 *b, u8 *c);
s32 func_020b51e8(u32 a);
s32 func_02003098(void *);

s32 func_020639e8(char *buf, const char *fmt, ...);
void func_01ffd070(Unk_ov003_Vec *out, void *a, void *b);
void func_021039ec(void *a, s32 b);
void _ZN12Unk_020d5d8413func_02002cf8EPvS0_S0_S0_S0_(s32 a, s32 b, void *c, s32 d, void *e);
void _ZN12Unk_02002fc813func_02002fc8Ej(void *self, void *x);
void _ZN12Unk_020660f813func_02067a3cEiPv(void *self, s32 a, void *q);
BOOL _ZN12Unk_020cbb1813func_02072e88Ei(void *self, s32 i);
void *_ZN12Unk_0207fb8013func_0207fc1cEv(void *self);
void *_ZN12Unk_0208086013func_020805c4Ev(void *self);
void *_ZN12Unk_020dbe3413func_020554c0Ev(void *self);
BOOL _ZN12Unk_020dbe3413func_020555ecEP16Unk_020553f8_Resj(void *self, void *res, u32 b);
void _ZN12Unk_020e1c64C1Ev(void *p);
void _ZN12Unk_020e1c64D1Ev(void *p);
void func_02103830(void *a, s32 b);

s32 func_ov003_02218d8c();
s32 func_ov003_02218978(s32 a);
s32 func_ov003_0221897c(s32 a);
void *func_ov003_02218d84();
BOOL func_ov003_02218868(void *p);
void *func_ov003_02218870(void *p, s32 i);
s32 func_ov003_02218880(void *p);
s32 func_ov003_0221886c(void *p);
s32 func_ov003_0221898c(s32 a, s32 b);
s32 func_ov003_02218980(s32 a, s32 b);
s32 func_ov003_02218da8();
void func_ov003_022163dc();
}

static inline s32 Unk_ov003_02215c7c_Idx(Unk_ov009_0225e29c *o) {
    BOOL r = FALSE;
    u16 v = o->unk_132;
    if (v < 0x5001 || v > 0x5008) {
    } else {
        r = TRUE;
    }
    if (r) {
        return v - 0x5001;
    }
    return -1;
}

struct Unk_ov003_02215fc0_Rec {
    u8 f : 5;
};

// 12-byte vector with a trivial destructor (main 0x02000c8c = _ZN12Unk_02000c8cD1Ev)
struct Unk_02000c8c {
    s32 x, y, z;
    Unk_02000c8c(s32 a, s32 b, s32 c) {
        x = a;
        y = b;
        z = c;
    }
    ~Unk_02000c8c();
};

// ============================================================ class Unk_ov003_022318e8
class Unk_ov003_022318e8 : public Unk_ov009_0225e29c {
public:
    Unk_ov003_022318e8();
    virtual ~Unk_ov003_022318e8();

    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_24();
    virtual s32 vfunc_64();
    virtual s32 vfunc_68();
    virtual BOOL vfunc_70();
    virtual void vfunc_78();
    virtual BOOL vfunc_8c();
    virtual BOOL vfunc_90();
    virtual BOOL vfunc_98();
    virtual BOOL vfunc_9c();
    virtual char *vfunc_a4();
    virtual char *vfunc_a8();
    virtual char *vfunc_ac();

    char *func_ov003_02215f98();
    u8 func_ov003_02215fc0();
    s32 func_ov003_02216018();

    /* 0x2b0 */ Unk_020dbd54 unk_2b0;
    /* 0x368 */ Unk_020dbe4c unk_368;
};

struct Unk_ov003_SceneEntry {
    void (*factory)();
    u16 id;
    u16 size;
    u32 zero;
    u32 a, b, c;
};
extern "C" {
char data_ov003_022352d4[0x14];
u32 data_ov003_022352e8[8];
char data_ov003_02235308[0x28];
char data_ov003_02235330[0x28];
}

extern "C" void func_ov003_022163dc() {
    new Unk_ov003_022318e8;
}

Unk_ov003_022318e8::Unk_ov003_022318e8() {
    for (u32 i = 0; i < 8; i++) {
        data_ov003_022352e8[i] = 0;
    }
}

Unk_ov003_022318e8::~Unk_ov003_022318e8() {
}// Declarations for data defined further down (definition order sets the data layout)
extern "C" const u8 data_ov003_0222eff0[8];
extern "C" Unk_ov003_SceneEntry data_ov003_022318c8;
extern "C" const u8 data_ov003_0222eff8[8];

extern "C" const u8 data_ov003_0222eff0[8] = { 0x0a, 0x0b, 0x0c, 0x08, 0x09, 0x0d, 0, 0 };
extern "C" const u8 data_ov003_0222eff8[8] = { 0x10, 0x11, 0x12, 0x0e, 0x0f, 0x13, 0, 0 };

extern "C" Unk_ov003_SceneEntry data_ov003_022318c8 = { func_ov003_022163dc, 0x1d, 0x23, 0, 0xc8000, 0x12c000, 0x258000 };

BOOL Unk_ov003_022318e8::vfunc_70() {
    s32 idx = Unk_ov003_02215c7c_Idx(this);
    static Unk_02000c8c v(-0x2000, 0x1000, 0x2000);
    Unk_ov003_Vec tmp;
    func_01ffd070(&tmp, &unk_5c, &v);
    func_02002cf8(0x18, idx, &tmp, 0, this);
    data_ov003_022352e8[idx] = (u32)this;
    s32 k = func_ov003_02215fc0();
    s32 r7 = func_ov003_0221898c(func_ov003_02218d8c(), k);
    s32 r4 = func_ov003_02218980(func_ov003_02218d8c(), k);
    void *g = unk_194;
    if (r7) {
        func_021039ec(g, r7);
    }
    if (r4) {
        func_021039ec(g, r4);
        func_02103830(g, r4);
    }
    if (func_ov003_02218868(func_ov003_02218d84())) {
        s32 q = func_ov003_02216018() >> 2;
        if (_ZN12Unk_020dbe3413func_020555ecEP16Unk_020553f8_Resj(&unk_2b0, func_ov003_02218870(func_ov003_02218d84(), q), 0)) {
            void *a = func_ov003_02218870(func_ov003_02218d84(), q);
            func_021039ec(a, func_ov003_02218880(func_ov003_02218d84()));
            void *b = func_ov003_02218870(func_ov003_02218d84(), q);
            func_02103830(b, func_ov003_02218880(func_ov003_02218d84()));
            if (unk_368.func_02055bcc((u32)unk_2b0.unk_5c, data_021c6204)) {
                s32 c = func_ov003_0221886c(func_ov003_02218d84());
                s32 d = func_ov003_02218880(func_ov003_02218d84());
                unk_368.func_02055ae4(c, d, 0, 0x1000, 0);
                unk_368.func_02055a9c((u32)_ZN12Unk_020dbe3413func_020554c0Ev(&unk_2b0));
                *(Unk_ov003_Blk *)((u8 *)this + 0x314) = unk_19c;
            }
        }
    }
    return TRUE;
}

BOOL Unk_ov003_022318e8::vfunc_18() {
    if (func_ov003_02218868(func_ov003_02218d84())) {
        *(Unk_ov003_Blk *)((u8 *)this + 0x314) = unk_19c;
        if ((unk_231 & 1) == 0) {
            unk_368.func_020566bc();
            **(u32 **)((u8 *)this + 0x380) = *(u32 *)((u8 *)this + 0x370);
        }
    }
    return TRUE;
}

BOOL Unk_ov003_022318e8::vfunc_24() {
    if (func_ov003_02218868(func_ov003_02218d84())) {
        unk_2b0.func_020547cc(0);
    }
    return TRUE;
}

BOOL Unk_ov003_022318e8::vfunc_0c() {
    s32 idx = Unk_ov003_02215c7c_Idx(this);
    data_ov003_022352e8[idx] = 0;
    return TRUE;
}

s32 Unk_ov003_022318e8::func_ov003_02216018() {
    u8 *g = data_021dfd8c;
    s32 idx = Unk_ov003_02215c7c_Idx(this);
    Unk_ov003_02215fc0_Rec *r = (Unk_ov003_02215fc0_Rec *)func_0207fc1c(func_0207bf60(g, idx));
    return r->f;
}

u8 Unk_ov003_022318e8::func_ov003_02215fc0() {
    u8 *g = data_021dfd8c;
    s32 idx = Unk_ov003_02215c7c_Idx(this);
    Unk_ov003_02215fc0_Rec *r = (Unk_ov003_02215fc0_Rec *)func_0207fc1c(func_0207bf60(g, idx));
    return r->f & 3;
}

char *Unk_ov003_022318e8::func_ov003_02215f98() {
    s32 t = func_ov003_02216018();
    func_020639e8(data_ov003_022352d4, "obj_house%d_%d", t >> 2, t & 3);
    return data_ov003_022352d4;
}

char *Unk_ov003_022318e8::vfunc_a4() {
    s32 a = func_ov003_02216018();
    char *s = func_ov003_02215f98();
    s32 e = func_ov003_02218da8();
    func_020639e8(data_ov003_02235308, "/str/npcHs/%d/%s%c.arc", a >> 2, s, e);
    return data_ov003_02235308;
}

char *Unk_ov003_022318e8::vfunc_a8() {
    s32 a = func_ov003_02216018();
    char *s = func_ov003_02215f98();
    s32 e = func_ov003_02218da8();
    func_020639e8(data_ov003_02235330, "/str/npcHs/%d/%s%c.nsbtx", a >> 2, s, e);
    return data_ov003_02235330;
}

char *Unk_ov003_022318e8::vfunc_ac() {
    return 0;
}

s32 Unk_ov003_022318e8::vfunc_64() {
    return func_ov003_0221897c(func_ov003_02218d8c());
}

s32 Unk_ov003_022318e8::vfunc_68() {
    return func_ov003_02218978(func_ov003_02218d8c());
}

void Unk_ov003_022318e8::vfunc_78() {
    s32 idx = Unk_ov003_02215c7c_Idx(this);
    void *p = func_0207bf60(data_021dfd8c, idx);
    func_020a710c("obj_etc_closed");
    if (func_0207e274(p) == 0) {
        unk_1e = 6;
    } else if (unk_232.f1) {
        func_020a710c("obj_etc_error");
        unk_1e = 0;
    } else if (void *q = func_020805c4(p)) {
        if (unk_233 == 0) {
            unk_1e = data_ov003_0222eff8[func_02003098(q)];
        } else {
            unk_1e = data_ov003_0222eff0[func_02003098(q)];
        }
    }
    u32 l[9];
    _ZN12Unk_020e1c64C1Ev(&l[1]);
    func_02002fc8(func_020805c4(p), &l[1]);
    func_02067a3c(unk_3c, 0, &l[1]);
    _ZN12Unk_020e1c64D1Ev(&l[1]);
}

BOOL Unk_ov003_022318e8::vfunc_8c() {
    s32 idx = Unk_ov003_02215c7c_Idx(this);
    void *p = func_0207bf60(data_021dfd8c, idx);
    if (p) {
        if (func_0207e274(p) == 0) {
            return FALSE;
        }
        if (func_0207e278(p) == 0 || func_0207e278(p) == 3 || func_0207e278(p) == 4 || func_0207e278(p) == 5 ||
            func_0207e278(p) == 6 || func_0207e278(p) == 7) {
            return FALSE;
        }
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov003_022318e8::vfunc_9c() {
    s32 idx = Unk_ov003_02215c7c_Idx(this);
    if (func_ov009_0225d600(this)) {
        void *p = func_0207bf60(data_021dfd8c, idx);
        if (p) {
            if (func_0207e274(p) == 0) {
                return FALSE;
            }
            if (func_0207e278(p) == 0 || func_0207e278(p) == 3 || func_0207e278(p) == 4 || func_0207e278(p) == 5 ||
                func_0207e278(p) == 6 || func_0207e278(p) == 7) {
                return FALSE;
            }
            if (func_0207e278(p) == 2) {
                u8 a, b, c;
                u32 i = 0;
                void *g = data_020cbb18;
                for (; i < 4; i++) {
                    if (func_02072e88(g, i)) {
                        func_020a5e74(i, &a, &b, &c);
                        if (idx == func_020b51e8(a)) {
                            return TRUE;
                        }
                    }
                }
                return FALSE;
            }
        }
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov003_022318e8::vfunc_90() {
    return TRUE;
}

BOOL Unk_ov003_022318e8::vfunc_98() {
    return TRUE;
}

