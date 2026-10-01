// mwcc-version: 1.2/sp2
// ov003 TU11 (actor 02231aa8): .text 0x02216430-0x022165d0
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
//   ov003  _ZThn236_N18Unk_ov009_0225e29c8vfunc_88Ev     -> _ZN12Unk_020ddcf09vfunc_s14Ev             (0x0221445c, TU04's thunk)
//          Slot 0x14 of the secondary vtable is the thunk of ov009::vfunc_88, defined once in TU04.  Every other unit of the
//          family only REFERENCES it: the unit names the slot vfunc_s14 (no override, so the compiler emits no local copy of the
//          thunk) and the vtable relocation names _ZN12Unk_020ddcf09vfunc_s14Ev, which the alias above puts at 0x0221445c.
//          TU04 itself (and TU05, whose class overrides vfunc_88) must instead name the slot `vfunc_88` as in the
//          previous model, so that the compiler emits the thunk there.
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
    virtual void vfunc_s14();
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

class Unk_020dbe34 {
public:
    void func_020554a0(s32 a, s32 b, s32 c, s32 d, s32 e);
};

class Unk_020b1ddc {
public:
    void func_020b1e74();
    void func_020b1ddc();
};

extern "C" {
s32 _ZN12Unk_02056fd813func_02056fccEi(void *self, s32 i);
}
#define func_02056fcc _ZN12Unk_02056fd813func_02056fccEi

struct Unk_ov003_0221655c_Owner {
    u8 pad_00[0x2c];
    Unk_ov009_0225e29c *unk_2c;
};

struct Unk_ov003_0221655c_Src {
    u8 *unk_00;
    Unk_ov003_0221655c_Owner *unk_04;
};

extern "C" void func_ov003_0221655c(Unk_ov003_0221655c_Src *a);
extern "C" void func_ov003_0221657c();

class Unk_ov003_02231aa8 : public Unk_ov009_0225e29c {
public:
    Unk_ov003_02231aa8();
    virtual ~Unk_ov003_02231aa8();

    virtual void vfunc_60(u32 a, void *p);
    virtual BOOL vfunc_70();
    virtual BOOL vfunc_98();

    /* 0x2b0 */ s8 unk_2b0;
    /* 0x2b1 */ s8 unk_2b1;
    /* 0x2b2 */ u8 pad_2b2[2];
};

struct Unk_ov003_SceneEntry {
    void (*factory)();
    u16 id;
    u16 size;
    u32 zero;
    u32 a, b, c;
};

extern "C" Unk_ov003_SceneEntry data_ov003_02231a88 = { func_ov003_0221657c, 0x1e, 0x24, 0, 0xc8000, 0x12c000, 0x258000 };

extern "C" void func_ov003_0221657c() {
    new Unk_ov003_02231aa8();
}

extern "C" void func_ov003_0221655c(Unk_ov003_0221655c_Src *a) {
    Unk_ov009_0225e29c *o = a->unk_04->unk_2c;
    if (o) {
        o->vfunc_60(a->unk_00[1], a);
    }
}

Unk_ov003_02231aa8::Unk_ov003_02231aa8() {
    unk_2b1 = -1;
    unk_2b0 = unk_2b1;
}

Unk_ov003_02231aa8::~Unk_ov003_02231aa8() {
}

BOOL Unk_ov003_02231aa8::vfunc_70() {
    unk_2b0 = func_02056fcc(unk_194, (s32) "kh_j");
    unk_2b1 = func_02056fcc(unk_194, (s32) "km_j");
    if (unk_2b0 != -1 && unk_2b1 != -1) {
        ((Unk_020dbe34 *)unk_138)->func_020554a0((s32)func_ov003_0221655c, 6, 2, (s32)this, 0);
    }
    return TRUE;
}

void Unk_ov003_02231aa8::vfunc_60(u32 a, void *p) {
    if ((s32)a == unk_2b0) {
        ((Unk_020b1ddc *)p)->func_020b1e74();
    } else if ((s32)a == unk_2b1) {
        ((Unk_020b1ddc *)p)->func_020b1ddc();
    }
}

BOOL Unk_ov003_02231aa8::vfunc_98() {
    return TRUE;
}

