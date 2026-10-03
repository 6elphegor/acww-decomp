// mwcc-version: 1.2/base
// ov004 TU31: 0x0222c9bc-0x02233074 (.text), see notes.txt
#include "types.h"
#include "Unk_020d8c7c.h"

// ---------------------------------------------------------------------------------------------------------------
// Calls into other modules: the old stand-in names are #defined to the real symbols (mangled method names).
#define func_02000c8c _ZN12Unk_02000c8cD1Ev
#define func_02003c30 _ZN12Unk_02003c3013func_02003c30Ev
#define func_02003c50 _ZN12Unk_02003c4013func_02003c50EPv
#define func_02003c70 _ZN12Unk_02003c4013func_02003c70EP16Unk_02003a6c_Vec
#define func_02003cbc _ZN12Unk_02003c3013func_02003cbcEv
#define func_02033914 _ZN12Unk_0203389c13func_02033914Ei
#define func_020339bc _ZN12Unk_0203398c13func_020339bcEP16Unk_0203389c_Vecii
#define func_0205436c _ZN12Unk_0205454c13func_0205436cEiiiitt
#define func_0205439c _ZN12Unk_0205454c13func_0205439cEv
#define func_020543b4 _ZN12Unk_0205454c13func_020543b4EPS_
#define func_02054420 _ZN12Unk_0205454c13func_02054420EPS_
#define func_020544d8 _ZN12Unk_0205454cD1Ev
#define func_02054514 _ZN12Unk_0205454cC1Ev
#define func_020546ec _ZN12Unk_020dbd5413func_020546ecEv
#define func_02054710 _ZN12Unk_020dbd5413func_02054710Ev
#define func_02054720 _ZN12Unk_0205454c13func_02054720Eiiitt
#define func_020547cc _ZN12Unk_020dbd5413func_020547ccEPv
#define func_02054800 _ZN12Unk_020dbd5413func_02054800EPv
#define func_02054b14 _ZN12Unk_020dbd3413func_02054b14Ev
#define func_02054b38 _ZN12Unk_020dbd3413func_02054b38EPv
#define func_02055488 _ZN12Unk_020dbe3413func_02055488Eii
#define func_020555ec _ZN12Unk_020dbe3413func_020555ecEP16Unk_020553f8_Resj
#define func_020565e8 _ZN12Unk_020dbe7c13func_020565e8Ei
#define func_02070358 _ZN12Unk_0206fe8013func_02070358EPt
#define func_02088c64 _ZN12Unk_020e0d1c13func_02088c64EP4Vec3iijjjhi
#define func_02089040 _ZN12Unk_020e0d0813func_02089040Ev
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
#define func_0209c0b4 _ZN12Unk_0209c0ac13func_0209c0b4Ev
#define func_0209c0c8 _ZN12Unk_0209c0ac13func_0209c0c8Ev
#define func_0209c0d0 _ZN12Unk_0209c0ac13func_0209c0d0EP12Unk_0209c2f4PKc
#define func_0209c128 _ZN12Unk_0209c0acD1Ev
#define func_0209c140 _ZN12Unk_0209c0acC1Ev
#define func_0209c15c _ZN12Unk_0209c15c13func_0209c15cEv
#define func_0209c1a4 _ZN12Unk_0209c15c13func_0209c1a4EjPvS0_jPFS0_jjEPFvvE
#define func_0209c224 _ZN12Unk_0209c15c13func_0209c224EPt
#define func_0209c25c _ZN12Unk_0209c15c13func_0209c25cEPt
#define func_0209c2d8 _ZN12Unk_0209c15cD1Ev
#define func_0209c2dc _ZN12Unk_0209c15cC1Ev
#define func_0209c348 _ZN12Unk_0209c2f413func_0209c348Ev
#define func_020b68ec _ZN12Unk_020b696013func_020b68ecEP12Unk_020b6e10P4Vec3iiisih
#define func_020b6928 _ZN12Unk_020b696013func_020b6928EP12Unk_020b6e10
#define func_020b6df4 _ZN12Unk_020b6e10D2Ev
#define func_020b6e10 _ZN12Unk_020b6e10C2Ev
#define func_02133150 _s32_div_f

typedef Unk_020d8c7c Unk_ov004_Base;

// ---------------------------------------------------------------------------------------------------------------
struct V3 {
    s32 x, y, z;
};

struct Mtx {
    s64 v[6];
};

struct Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

// one 0x11-byte record of the actor table (data_ov004_022402ec[56])
struct Rec {
    u8 unk_00;
    u8 unk_01;
    u8 unk_02;
    u8 unk_03;
    u8 unk_04;
    u8 unk_05;
    u8 unk_06;
    u8 unk_07;
    u8 unk_08;
    u8 unk_09;
    u8 unk_0a;
    u8 unk_0b;
    u8 unk_0c;
    u8 unk_0d;
    u8 unk_0e;
    u8 unk_0f;
    u8 unk_10;
};

// library object with a destructor (two of these are static: data_ov004_02251d84 / d9c)
struct Unk_02000c8c {
    s32 x, y, z;
    Unk_02000c8c(s32 a, s32 b, s32 c) : x(a), y(b), z(c) {}
    ~Unk_02000c8c();
};

// ---- library sub-object with two inline vtable stores (0x0213b91c, 0x0213b954)
class Unk_0213b91c {
public:
    Unk_0213b91c() {}
    virtual void vfunc_00();
    u8 unk_04[8];
    u16 unk_0c;
    u8 unk_0e;
    u8 pad_0f;
};

class Unk_0213b954 : public Unk_0213b91c {
public:
    Unk_0213b954() {}
    virtual void vfunc_00();
};

// ---- collision sub-object chain (main: Unk_020e0d08 <- Unk_020e0d1c), derived class in this overlay
class Unk_020e0d08 {
public:
    Unk_020e0d08();
    ~Unk_020e0d08();
    virtual void *vfunc_00() = 0;
    virtual u32 vfunc_04() = 0;
    virtual void vfunc_08(u32 a, u32 b, u32 c);

    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08;
    /* 0x0c */ u8 unk_0c;
    /* 0x0d */ u8 unk_0d;
    /* 0x0e */ u8 unk_0e;
    /* 0x0f */ u8 unk_0f;
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ s32 unk_14;
    /* 0x18 */ s32 unk_18;
    /* 0x1c */ u32 unk_1c;
    /* 0x20 */ u32 unk_20;
    /* 0x24 */ s32 unk_24;
    /* 0x28 */ u32 unk_28;
    /* 0x2c */ u32 unk_2c;
    /* 0x30 */ s32 unk_30;
    /* 0x34 */ s32 unk_34;
    /* 0x38 */ Unk_020e0d08 *unk_38;
    /* 0x3c */ u8 unk_3c;
};

class Unk_020e0d1c : public Unk_020e0d08 {
public:
    Unk_020e0d1c();
    ~Unk_020e0d1c();
    virtual void *vfunc_00();
    virtual u32 vfunc_04();
    /* 0x40 */ V3 unk_40;
};

class Unk_ov004_0224e774;

// ---------------------------------------------------------------------------------------------------------------
// The "Ent" family: state actors. Root = vtable 0x0224e774 (0x1fc bytes of common state).
class Unk_ov004_0224e774 {
public:
    Unk_ov004_0224e774();
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual ~Unk_ov004_0224e774();

    /* 0x004 */ u8 unk_04[0x13 - 4];
    /* 0x013 */ u8 unk_13;
    /* 0x014 */ s32 unk_14;
    /* 0x018 */ u8 pad_18[4];
    /* 0x01c */ s32 unk_1c;
    /* 0x020 */ u8 pad_20[0x40 - 0x20];
    /* 0x040 */ u8 unk_40;
    /* 0x041 */ u8 pad_41[0x50 - 0x41];
    /* 0x050 */ Unk_ov004_0224e774 *unk_50;
    /* 0x054 */ u32 unk_54[4];
    /* 0x064 */ u8 unk_64[0xc8 - 0x64];
    /* 0x0c8 */ Mtx unk_c8;
    /* 0x0f8 */ u8 pad_f8[0x100 - 0xf8];
    /* 0x100 */ u32 unk_100;
    /* 0x104 */ Bits unk_104;
    /* 0x108 */ s32 unk_108;
    /* 0x10c */ u8 pad_10c[4];
    /* 0x110 */ s32 unk_110;
    /* 0x114 */ u8 pad_114[0x158 - 0x114];
    /* 0x158 */ s32 unk_158;
    /* 0x15c */ s32 unk_15c;
    /* 0x160 */ s32 unk_160;
    /* 0x164 */ u8 unk_164;
    /* 0x165 */ u8 pad_165;
    /* 0x166 */ u8 unk_166[2];
    /* 0x168 */ u8 unk_168[0x1a8 - 0x168];
    /* 0x1a8 */ V3 unk_1a8;
    /* 0x1b4 */ V3 unk_1b4;
    union {
        /* 0x1c0 */ s16 unk_1c0;
        u16 unk_1c0u;
    };
    /* 0x1c2 */ s16 unk_1c2;
    /* 0x1c4 */ s16 unk_1c4;
    /* 0x1c6 */ u8 unk_1c6;
    /* 0x1c7 */ u8 unk_1c7;
    /* 0x1c8 */ u8 unk_1c8;
    /* 0x1c9 */ u8 unk_1c9;
    /* 0x1ca */ s8 unk_1ca;
    /* 0x1cb */ u8 pad_1cb;
    /* 0x1cc */ s32 unk_1cc;
    /* 0x1d0 */ V3 unk_1d0[2];
    /* 0x1e8 */ u8 unk_1e8;
    /* 0x1e9 */ u8 unk_1e9;
    /* 0x1ea */ u8 unk_1ea;
    /* 0x1eb */ u8 unk_1eb;
    /* 0x1ec */ s16 unk_1ec;
    /* 0x1ee */ u8 unk_1ee;
    /* 0x1ef */ u8 unk_1ef;
    /* 0x1f0 */ u8 unk_1f0;
    /* 0x1f1 */ u8 unk_1f1;
    /* 0x1f2 */ u8 pad_1f2[2];
    /* 0x1f4 */ u32 unk_1f4[2];
};

// vtable 0x0224e864: common base of most state actors (0x258 bytes)
class Unk_ov004_0224e864 : public Unk_ov004_0224e774 {
public:
    Unk_ov004_0224e864();
    virtual ~Unk_ov004_0224e864();
    virtual void vfunc_00();
    virtual void vfunc_04();

    /* 0x1fc */ u8 unk_1fc;
    /* 0x1fd */ u8 unk_1fd;
    /* 0x1fe */ s8 unk_1fe;
    /* 0x1ff */ u8 pad_1ff;
    /* 0x200 */ s16 unk_200;
    /* 0x202 */ u8 unk_202;
    /* 0x203 */ u8 unk_203;
    /* 0x204 */ u8 unk_204;
    /* 0x205 */ u8 unk_205;
    /* 0x206 */ u8 unk_206;
    /* 0x207 */ u8 unk_207;
    /* 0x208 */ u8 pad_208[4];
    /* 0x20c */ s32 unk_20c;
    /* 0x210 */ s32 unk_210;
    /* 0x214 */ s32 unk_214;
    /* 0x218 */ s32 unk_218;
    /* 0x21c */ s32 unk_21c;
    /* 0x220 */ u16 unk_220;
    /* 0x222 */ u8 pad_222[2];
    /* 0x224 */ s32 unk_224;
    /* 0x228 */ s32 unk_228;
    /* 0x22c */ u8 pad_22c[2];
    /* 0x22e */ u8 unk_22e;
    /* 0x22f */ u8 unk_22f;
    /* 0x230 */ u16 unk_230;
    /* 0x232 */ u8 pad_232[0x238 - 0x232];
    /* 0x238 */ u8 unk_238;
    /* 0x239 */ u8 pad_239[3];
    /* 0x23c */ s32 unk_23c;
    /* 0x240 */ u8 pad_240[0x24c - 0x240];
    /* 0x24c */ s16 unk_24c;
    /* 0x24e */ u8 unk_24e;
    /* 0x24f */ u8 pad_24f;
    /* 0x250 */ s16 unk_250;
    /* 0x252 */ u8 unk_252;
    /* 0x253 */ u8 unk_253;
    /* 0x254 */ u8 unk_254;
    /* 0x255 */ u8 unk_255;
    union {
        /* 0x256 */ u8 unk_256;
        s8 unk_256s;
    };
    /* 0x257 */ u8 unk_257;
};

class Unk_ov004_0224e72c : public Unk_ov004_0224e864 {
public:
    Unk_ov004_0224e72c();
    virtual ~Unk_ov004_0224e72c();
    virtual void vfunc_00();
    virtual void vfunc_04();
};

class Unk_ov004_0224e84c : public Unk_ov004_0224e774 {
public:
    Unk_ov004_0224e84c();
    virtual ~Unk_ov004_0224e84c();
    virtual void vfunc_00();
    virtual void vfunc_04();
    /* 0x1fc */ s32 unk_1fc;
    /* 0x200 */ s32 unk_200;
    /* 0x204 */ s32 unk_204;
    /* 0x208 */ s16 unk_208;
    /* 0x20a */ u8 pad_20a[2];
    /* 0x20c */ s32 unk_20c;
    union {
        /* 0x210 */ s32 unk_210;
        u8 unk_210b;
    };
    /* 0x214 */ u8 pad_214[4];
    /* 0x218 */ s32 unk_218;
    /* 0x21c */ u8 unk_21c;
    /* 0x21d */ u8 pad_21d[3];
};

class Unk_ov004_0224e7bc : public Unk_ov004_0224e864 {
public:
    Unk_ov004_0224e7bc();
    virtual ~Unk_ov004_0224e7bc();
    virtual void vfunc_00();
    virtual void vfunc_04();
    /* 0x258 */ s32 unk_258[3];
    /* 0x264 */ V3 unk_264;
    /* 0x270 */ u8 unk_270;
    /* 0x271 */ u8 pad_271[3];
    /* 0x274 */ s32 unk_274;
};

// vtable 0x0224e6e8: 0x50-byte collision sub-object of every actor
class Unk_ov004_0224e6e8 : public Unk_020e0d1c {
public:
    Unk_ov004_0224e6e8();
    ~Unk_ov004_0224e6e8();
    virtual void vfunc_08(u32 a, u32 b, u32 c);
    /* 0x4c */ Unk_ov004_0224e774 *unk_4c;
};

// vtables 0x0224e714 / 0x0224e75c: 0x25c bytes
class Unk_ov004_0224e714 : public Unk_ov004_0224e864 {
public:
    Unk_ov004_0224e714();
    virtual ~Unk_ov004_0224e714();
    virtual void vfunc_00();
    virtual void vfunc_04();
    /* 0x258 */ u8 unk_258;
    /* 0x259 */ u8 unk_259;
};

class Unk_ov004_0224e834 : public Unk_ov004_0224e774 {
public:
    Unk_ov004_0224e834();
    virtual ~Unk_ov004_0224e834();
    virtual void vfunc_00();
    virtual void vfunc_04();
    /* 0x1fc */ Unk_0213b954 unk_1fc;
    /* 0x20c */ s32 unk_20c;
    /* 0x210 */ u8 unk_210;
    /* 0x211 */ u8 unk_211;
    /* 0x212 */ u8 pad_212[2];
};

// state actors derived from the root directly
class Unk_ov004_0224e7ec : public Unk_ov004_0224e774 {
public:
    Unk_ov004_0224e7ec();
    virtual ~Unk_ov004_0224e7ec();
    virtual void vfunc_00();
};

class Unk_ov004_0224e7a4 : public Unk_ov004_0224e864 {
public:
    Unk_ov004_0224e7a4();
    virtual ~Unk_ov004_0224e7a4();
    virtual void vfunc_00();
    virtual void vfunc_04();
    /* 0x258 */ s32 unk_258[3];
    /* 0x264 */ u8 unk_264;
    /* 0x265 */ u8 pad_265[3];
    /* 0x268 */ s32 unk_268;
};

class Unk_ov004_0224e78c : public Unk_ov004_0224e864 {
public:
    Unk_ov004_0224e78c();
    virtual ~Unk_ov004_0224e78c();
    virtual void vfunc_00();
    virtual void vfunc_04();
    /* 0x258 */ u8 unk_258;
};

class Unk_ov004_0224e75c : public Unk_ov004_0224e864 {
public:
    Unk_ov004_0224e75c();
    virtual ~Unk_ov004_0224e75c();
    virtual void vfunc_00();
    virtual void vfunc_04();
    /* 0x258 */ u8 unk_258;
    /* 0x259 */ u8 unk_259;
};

class Unk_ov004_0224e744 : public Unk_ov004_0224e864 {
public:
    Unk_ov004_0224e744();
    virtual ~Unk_ov004_0224e744();
    virtual void vfunc_00();
    virtual void vfunc_04();
};

// element of the 5-entry array in the manager (0x64 bytes)
struct Unk_ov004_02232624_Elem {
    Unk_ov004_0224e6e8 unk_00;
    u32 unk_50[5];
};

// vtable 0x0224e87c: the scene object (0x810 bytes)
class Unk_ov004_0224e87c : public Unk_020d8c7c {
public:
    Unk_ov004_0224e87c();
    virtual ~Unk_ov004_0224e87c();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_24();

    /* 0x050 */ Unk_ov004_02232624_Elem unk_50[5];
    /* 0x244 */ Unk_ov004_0224e6e8 unk_244;
    /* 0x294 */ u32 unk_294[5];
    /* 0x2a8 */ u32 unk_2a8[0x550 / 4];
    /* 0x7f8 */ u32 unk_7f8[6];

    typedef void (Unk_ov004_0224e87c::*Fn)(Unk_ov004_0224e774 **, s32);
};

// vtable 0x0224e6fc: 0x27c bytes
class Unk_ov004_0224e6fc : public Unk_ov004_0224e864 {
public:
    Unk_ov004_0224e6fc();
    virtual ~Unk_ov004_0224e6fc();
    virtual void vfunc_00();
    virtual void vfunc_04();
    /* 0x258 */ s32 unk_258[3];
    /* 0x264 */ s32 unk_264;
    /* 0x268 */ s32 unk_268;
    /* 0x26c */ s32 unk_26c;
    /* 0x270 */ s32 unk_270;
    /* 0x274 */ u32 unk_274;
    /* 0x278 */ u32 unk_278;
};

class Unk_ov004_0224e81c : public Unk_ov004_0224e864 {
public:
    Unk_ov004_0224e81c();
    virtual ~Unk_ov004_0224e81c();
    virtual void vfunc_00();
    virtual void vfunc_04();
};

class Unk_ov004_0224e804 : public Unk_ov004_0224e774 {
public:
    Unk_ov004_0224e804();
    virtual ~Unk_ov004_0224e804();
    virtual void vfunc_00();
    virtual void vfunc_04();
    /* 0x1fc */ u8 pad_1fc[4];
    /* 0x200 */ s32 unk_200;
    union {
        /* 0x204 */ s32 unk_204;
        u8 unk_204b[4];
    };
    /* 0x208 */ s32 unk_208;
    /* 0x20c */ u8 unk_20c;
    /* 0x20d */ u8 unk_20d;
    /* 0x20e */ u8 unk_20e;
    /* 0x20f */ u8 pad_20f;
};

class Unk_ov004_0224e7d4 : public Unk_ov004_0224e864 {
public:
    Unk_ov004_0224e7d4();
    virtual ~Unk_ov004_0224e7d4();
    virtual void vfunc_00();
    virtual void vfunc_04();
    /* 0x258 */ s32 unk_258;
    /* 0x25c */ s32 unk_25c;
    /* 0x260 */ s32 unk_260;
    /* 0x264 */ u8 unk_264;
    /* 0x265 */ u8 pad_265[3];
    /* 0x268 */ s32 unk_268;
    /* 0x26c */ V3 unk_26c;
    /* 0x278 */ s32 unk_278;
    /* 0x27c */ s32 unk_27c;
    /* 0x280 */ u8 unk_280;
    /* 0x281 */ u8 unk_281;
    /* 0x282 */ u16 unk_282;
    /* 0x284 */ u8 unk_284;
    /* 0x285 */ u8 pad_285[3];
    /* 0x288 */ s32 unk_288;
};




















// 0x94-byte element of the TU30 array (its ctor/dtor are referenced by TU30's static initialiser)
struct Unk_020f440c_Obj {
    u8 pad[0x48];
};

class Unk_ov004_0222c9d0 {
public:
    Unk_ov004_0222c9d0();
    ~Unk_ov004_0222c9d0();

    /* 0x00 */ u32 pad_00[4];
    /* 0x10 */ u32 unk_10;
    /* 0x14 */ u32 unk_14;
    /* 0x18 */ u32 pad_18[(0x4c - 0x18) / 4];
    /* 0x4c */ u8 unk_4c[0x48];
};

typedef Unk_ov004_0224e774 R;
typedef Unk_ov004_0224e864 E864;
typedef Unk_ov004_0224e87c Mgr;
typedef Unk_ov004_0224e6fc E6fc;
typedef Unk_ov004_0224e714 E714;
typedef Unk_ov004_0224e75c E75c;
typedef Unk_ov004_0224e78c E78c;
typedef Unk_ov004_0224e7a4 E7a4;
typedef Unk_ov004_0224e7bc E7bc;
typedef Unk_ov004_0224e7d4 E7d4;
typedef Unk_ov004_0224e72c E72c;
typedef Unk_ov004_0224e744 E744;
typedef Unk_ov004_0224e81c E81c;
typedef Unk_ov004_0224e7ec E7ec;
typedef Unk_ov004_0224e804 E804;
typedef Unk_ov004_0224e834 E834;
typedef Unk_ov004_0224e84c E84c;
typedef void (E864::*Fn)();
typedef void (E804::*Fn804)();
typedef void (Mgr::*MgrFn)(R **, s32);

struct Unk_ov004_0222ef04_Own {
    u8 pad_00[0x2c];
    void *unk_2c;
};

struct Unk_ov004_0222ef04_Cb {
    u8 pad_00[4];
    Unk_ov004_0222ef04_Own *unk_04;
    u8 pad_08[0x24 - 8];
    void *unk_24;
    u8 pad_28[0x92 - 0x28];
    u8 unk_92;
};

typedef Unk_ov004_0222ef04_Cb Cb;

struct Unk_ov004_0222fd7c_W {
    u8 pad[0x258];
    s32 w[6];
};

struct Unk_ov004_022303b4_P {
    u8 pad_00[0x5c];
    V3 unk_5c;
    u8 pad_68[0x98 - 0x68];
    s32 unk_98;
};

typedef Unk_ov004_022303b4_P P;

struct PairFn {
    Fn a;
    Fn b;
};

struct Unk_ov004_SceneEntry {
    void *fn;
    u16 a;
    u16 b;
};


// ---------------------------------------------------------------------------------------------------------------
// constructors of the state actors (called by the allocation switches)
#define func_02232864 _ZN18Unk_ov004_0224e6fcC1Ev
#define func_022328b4 _ZN18Unk_ov004_0224e714C1Ev
#define func_02232930 _ZN18Unk_ov004_0224e75cC1Ev
#define func_02232a08 _ZN18Unk_ov004_0224e84cC1Ev
#define func_02232b54 _ZN18Unk_ov004_0224e804C1Ev
#define func_02232bb0 _ZN18Unk_ov004_0224e834C1Ev
#define func_02232d8c _ZN18Unk_ov004_0224e864C1Ev
#define func_ov004_02232ce4 _ZN18Unk_ov004_0224e7d4C1Ev
#define func_ov004_02232c88 _ZN18Unk_ov004_0224e744C1Ev
#define func_ov004_02232c24 _ZN18Unk_ov004_0224e72cC1Ev
#define func_ov004_02232adc _ZN18Unk_ov004_0224e7bcC1Ev
#define func_ov004_02232a64 _ZN18Unk_ov004_0224e7a4C1Ev
#define func_ov004_0223299c _ZN18Unk_ov004_0224e78cC1Ev
#define func_ov004_02232864 _ZN18Unk_ov004_0224e6fcC1Ev
#define func_ov004_02232808 _ZN18Unk_ov004_0224e81cC1Ev
#define func_ov004_022327b8 _ZN18Unk_ov004_0224e7ecC1Ev
#define func_ov004_02232d8c _ZN18Unk_ov004_0224e864C1Ev

#define func_ov004_02232608 _ZN18Unk_ov004_0224e6e8C1Ev
#define func_ov004_022325f0 _ZN18Unk_ov004_0224e6e8D1Ev

extern "C" {
void func_ov004_02232608(void *);
void func_ov004_022325f0(void *);
void func_02232864(void *);
void func_022328b4(void *);
void func_02232930(void *);
void func_02232a08(void *);
void func_02232b54(void *);
void func_02232bb0(void *);
void func_02232d8c(void *);
void func_ov004_02232ce4(void *);
void func_ov004_02232c88(void *);
void func_ov004_02232c24(void *);
void func_ov004_02232adc(void *);
void func_ov004_02232a64(void *);
void func_ov004_0223299c(void *);
void func_ov004_02232864(void *);
void func_ov004_02232808(void *);
void func_ov004_022327b8(void *);
void func_ov004_02232d8c(void *);
}

extern "C" {
void *__cxa_vec_ctor(void *, s32, s32, void *, void *);
void *__cxa_vec_cleanup(void *, s32, s32, void *);

extern s16 data_02135f44[];
extern u8 data_021c7c88[];
extern u8 data_021ed0a0[];
extern u8 data_021ef5cc;
extern u8 data_021ef5d0;
extern Mtx data_021f47e0;
extern void *data_021f482c;
extern V3 data_ov004_022513f0;

void MTX_MultVec43(V3 *, void *, V3 *);
s32 FX_Div(s32, s32);
s32 func_01ffcb0c(s32, s32);
void *func_02000c98(void *);
void func_02000c8c(void *);
s32 func_02002bdc(void *, void *);
void func_02003c30(void *);
void func_02003c50(void *, s32);
void func_02003c70(void *, V3 *);
void func_02003cbc(void *);
s32 func_02003ff4(s32, s32);
void func_02004008(u32 a);
BOOL func_020308b4(void *p, s32 a, void *c, s32 w, s32 h);
s32 func_02033914(void *o, s32 f);
void func_02033988(void *o);
void *func_020339bc(void *o, void *v, s32 a, s32 b);
void func_0205436c(void *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f);
s32 func_0205439c(void *);
s32 func_020543b4(void *, void *);
s32 func_02054420(void *, void *);
void func_020544d8(void *);
void func_02054514(void *);
void func_020546ec(void *p);
s32 func_02054710(void *);
s32 func_02054720(void *, s32, s32, s32, s32, s32);
s32 func_020547cc(void *, V3 *);
s32 func_02054800(void *, s32);
void func_02054b14(void *p);
s32 func_02054b38(void *, s32);
void func_02055488(void *self, void *fn, void *arg);
s32 func_020555ec(void *, s32, s32);
BOOL func_020565e8(void *p, s32 v);
void func_0205bf68(void);
void func_0205bf84(void);
s32 func_020639e8(char *, char *, ...);
s32 func_02063b8c(s32 n);
s32 func_020641ec(char *, s32, s32, s32);
s32 func_02070358(void *, u16 *);
void func_02088c64(void *self, void *pos, s32 w, s32 h, u32 a, u32 b, u32 c, u8 t, s32 d);
void func_02089040(void *a);
P *func_020947f0(s32 n);
P *func_02095204(s32 n);
s32 func_0209c0ac(void *);
void func_0209c0b4(void *p);
void func_0209c0c8(void *p);
s32 func_0209c0d0(void *, s32, char *);
void func_0209c128(void *);
void func_0209c140(void *);
s32 func_0209c15c(void *);
void func_0209c1a4(void *p, s32 n, s32 a, s32 b, s32 c, void *d, void *e, void *f);
void func_0209c224(void *p, void *q);
s32 func_0209c25c(void *, void *);
void func_0209c2d8(void *p);
void func_0209c2dc(void *p);
s32 func_0209c348(s32);
void func_0209c364(u16 *);
void func_0209c370(u16 *);
void *func_020b50b4(void);
s32 func_020b6080(void *, void *, void *, void *);
void func_020b68ec(void *t, void *a, void *b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h);
s32 func_020b6928(void *, void *);
void func_020b6df4(void *p);
void func_020b6e10(void *p);
s32 func_020e759c(void *p, s32 a, s32 b);
s32 func_020e769c(void *p, s32 a, s32 b);
s32 func_020e7754(void *p, s32 a, s32 b, s32 c);
s32 func_020e7fa8(void *p);
void func_020e8388(void *m, s32 a, s32 b, s32 c);
void func_020e8404(void *, s32);
void func_020e8434(void *, s32);
void func_020e8558(void *p);
void func_020e85fc(void *, void *);
void *func_020e8608(void *heap, u32 size);
s64 func_020e9600(void *, void *);
s32 func_020e96a4(void *a, void *b);
void func_020f43fc(void *p);
void func_020f440c(void *p);
s32 func_021065dc(u32 a);
s32 func_021065f8(s32 a, s32 b);
s32 func_02133150(s32 a, s32 b);
}

static inline BOOL Unk_ov004_0222ee2c_Both() {
    if (data_021ef5d0 && data_021ef5cc) {
        return TRUE;
    }
    return FALSE;
}

static inline s32 Unk_ov004_0222d460_Clamp(s32 a) {
    s32 t = a < 0 ? -a : a;
    if (t > 0x8f) {
        s32 s;
        if (a > 0) {
            s = 1;
        } else {
            s = -1;
        }
        a = s * 0x8f;
    }
    return a;
}

extern "C" void func_ov004_02233058();
extern "C" Unk_ov004_0224e7bc::Unk_ov004_0224e7bc();
extern "C" Unk_ov004_0224e7bc::~Unk_ov004_0224e7bc();
extern "C" Unk_ov004_0224e7a4::Unk_ov004_0224e7a4();
extern "C" Unk_ov004_0224e7a4::~Unk_ov004_0224e7a4();
extern "C" Unk_ov004_0224e84c::Unk_ov004_0224e84c();
extern "C" Unk_ov004_0224e84c::~Unk_ov004_0224e84c();
extern "C" Unk_ov004_0224e78c::Unk_ov004_0224e78c();
extern "C" Unk_ov004_0224e78c::~Unk_ov004_0224e78c();
extern "C" Unk_ov004_0224e75c::Unk_ov004_0224e75c();
extern "C" Unk_ov004_0224e75c::~Unk_ov004_0224e75c();
extern "C" Unk_ov004_0224e714::Unk_ov004_0224e714();
extern "C" Unk_ov004_0224e714::~Unk_ov004_0224e714();
extern "C" Unk_ov004_0224e6fc::Unk_ov004_0224e6fc();
extern "C" Unk_ov004_0224e6fc::~Unk_ov004_0224e6fc();
extern "C" Unk_ov004_0224e81c::Unk_ov004_0224e81c();
extern "C" Unk_ov004_0224e81c::~Unk_ov004_0224e81c();
extern "C" Unk_ov004_0224e7ec::Unk_ov004_0224e7ec();
extern "C" Unk_ov004_0224e7ec::~Unk_ov004_0224e7ec();
extern "C" Unk_ov004_0224e87c::Unk_ov004_0224e87c();
extern "C" Unk_ov004_0224e87c::~Unk_ov004_0224e87c();
extern "C" Unk_ov004_0224e6e8::Unk_ov004_0224e6e8();
extern "C" /*EXTERN_C_CLOSE*/

Unk_ov004_0224e6e8::~Unk_ov004_0224e6e8();
extern "C" void func_ov004_022325c8(s32 *p, s32 a, u32 ang);
extern "C" void func_ov004_0223259c(s32 *p, s32 a, u32 ang);
extern "C" void func_ov004_0223257c(V3 *p, s32 a, s16 ang);
extern "C" void func_ov004_02232548(E864 *o);
extern "C" void func_ov004_022323b4(E864 *o);
extern "C" void func_ov004_0223230c(E864 *o, s32 f, u32 a, u32 b);
extern "C" void func_ov004_02232270(E864 *o, u32 a);
extern "C" s32 func_ov004_02232220(E864 *o);
extern "C" void func_ov004_022321e8(E864 *o, s32 i);
extern "C" void func_ov004_022321cc(E864 *o);
extern "C" void func_ov004_022321b4(E864 *o);
extern "C" void func_ov004_02232158(E864 *o, s32 a, s32 b, s32 c);
extern "C" void func_ov004_02232130(E864 *o);
extern "C" void func_ov004_022320c8(E864 *o);
extern "C" void func_ov004_02232068(E864 *o);
extern "C" void func_ov004_02231f98(E864 *o, s32 lim, s32 b);
extern "C" void func_ov004_02231eec(E864 *o, s32 a);
extern "C" void func_ov004_02231e8c(E864 *o, s32 m, s32 lim, u32 mode);
extern "C" s32 func_ov004_02231e74(s32 a, s32 b);
extern "C" s16 func_ov004_02231e3c(s32 a, s32 b);
extern "C" s32 func_ov004_02231e28(s32 a, s32 b);
extern "C" BOOL func_ov004_02231dec(void *obj, void *a, void *b, s32 max);
extern "C" BOOL func_ov004_02231d54(s32 *p, s32 v);
extern "C" BOOL func_ov004_02231d1c(V3 *pos);
extern "C" BOOL func_ov004_02231c68(E864 *o);
extern "C" void _ZN18Unk_ov004_0224e7d48vfunc_00Ev(E7d4 *o);
extern "C" void _ZN18Unk_ov004_0224e7d48vfunc_04Ev(E7d4 *o);
extern "C" void func_ov004_022319ac(s16 *out, u8 *flag, s32 *cnt, s32 max, s32 mul);
extern "C" void func_ov004_0223197c(E7d4 *o);
extern "C" void func_ov004_02231938(E7d4 *o);
extern "C" void func_ov004_022318dc(E7d4 *o);
extern "C" void func_ov004_02231878(E7d4 *o);
extern "C" void func_ov004_02231838(E7d4 *o);
extern "C" void func_ov004_022317d0(E7d4 *o);
extern "C" void func_ov004_02231750(E7d4 *o);
extern "C" void func_ov004_022316e0(E7d4 *o);
extern "C" void func_ov004_02231600(R *o, V3 *out);
extern "C" void _ZN18Unk_ov004_0224e7448vfunc_00Ev(E744 *o);
extern "C" void _ZN18Unk_ov004_0224e7448vfunc_04Ev(E744 *o);
extern "C" void func_ov004_02231420(E744 *o, s32 a, s32 b);
extern "C" void _ZN18Unk_ov004_0224e72c8vfunc_00Ev(E72c *o);
extern "C" void _ZN18Unk_ov004_0224e72c8vfunc_04Ev(E72c *o);
extern "C" void func_ov004_022311cc(E72c *o, s32 a, s32 b);
extern "C" void _ZN18Unk_ov004_0224e8348vfunc_00Ev(E834 *o);
extern "C" void _ZN18Unk_ov004_0224e8348vfunc_04Ev(E834 *o);
extern "C" void func_ov004_02231060(E834 *o);
extern "C" void func_ov004_02230fd0(E834 *o);
extern "C" void _ZN18Unk_ov004_0224e8048vfunc_00Ev(E804 *e);
extern "C" void _ZN18Unk_ov004_0224e8048vfunc_04Ev(E804 *e);
extern "C" void func_ov004_02230ecc(E804 *e);
extern "C" void func_ov004_02230e88(E804 *e);
extern "C" void func_ov004_02230e50(E804 *e);
extern "C" void func_ov004_02230e10(E804 *e);
extern "C" void func_ov004_02230ddc(E804 *e);
extern "C" void _ZN18Unk_ov004_0224e7bc8vfunc_00Ev(E7bc *e);
extern "C" void _ZN18Unk_ov004_0224e7bc8vfunc_04Ev(E7bc *e);
extern "C" void _ZN18Unk_ov004_0224e7a48vfunc_00Ev(E7a4 *e);
extern "C" void _ZN18Unk_ov004_0224e7a48vfunc_04Ev(E7a4 *e);
extern "C" void _ZN18Unk_ov004_0224e78c8vfunc_00Ev(E78c *e);
extern "C" void _ZN18Unk_ov004_0224e78c8vfunc_04Ev(E78c *e);
extern "C" void _ZN18Unk_ov004_0224e75c8vfunc_00Ev(E75c *e);
extern "C" void _ZN18Unk_ov004_0224e75c8vfunc_04Ev(E75c *o);
extern "C" void func_ov004_022304f4(E75c *o);
extern "C" void func_ov004_022303b4(E75c *o);
extern "C" void func_ov004_022302b4(E75c *o);
extern "C" void func_ov004_02230238(E75c *o);
extern "C" void func_ov004_022301fc(E75c *o);
extern "C" void func_ov004_022301b4(E75c *o);
extern "C" void func_ov004_0223015c(E75c *o);
extern "C" void _ZN18Unk_ov004_0224e7148vfunc_00Ev(E714 *o);
extern "C" void _ZN18Unk_ov004_0224e7148vfunc_04Ev(E714 *o);
extern "C" void func_ov004_02230034(E714 *o);
extern "C" void func_ov004_0222fff8(E714 *o);
extern "C" void func_ov004_0222fe1c(E714 *o);
extern "C" void _ZN18Unk_ov004_0224e6fc8vfunc_00Ev(E6fc *o);
extern "C" void _ZN18Unk_ov004_0224e6fc8vfunc_04Ev(E6fc *o);
extern "C" void func_ov004_0222fbe0(E6fc *o);
extern "C" void func_ov004_0222fafc(E6fc *o);
extern "C" void func_ov004_0222fabc(E6fc *o);
extern "C" void func_ov004_0222fa5c(E6fc *o);
extern "C" void func_ov004_0222f968(E6fc *o, s32 f);
extern "C" void func_ov004_0222f8fc(E6fc *o);
extern "C" void _ZN18Unk_ov004_0224e84c8vfunc_00Ev(E84c *o);
extern "C" void _ZN18Unk_ov004_0224e84c8vfunc_04Ev(E84c *o);
extern "C" void func_ov004_0222f7d4(E84c *o);
extern "C" void func_ov004_0222f6c4(E84c *o);
extern "C" void func_ov004_0222f5e4(E84c *o);
extern "C" void _ZN18Unk_ov004_0224e81c8vfunc_00Ev(E81c *o);
extern "C" void _ZN18Unk_ov004_0224e81c8vfunc_04Ev(E81c *o);
extern "C" void func_ov004_0222f284(E864 *e);
extern "C" void _ZN18Unk_ov004_0224e7ec8vfunc_00Ev(E7ec *e);
extern "C" void func_ov004_0222f1d0(E864 *e);
extern "C" void func_ov004_0222f0e4(E864 *e);
extern "C" void func_ov004_0222f090(E864 *e);
extern "C" void func_ov004_0222ef5c(E864 *e);
extern "C" void func_ov004_0222ef40(Cb *c);
extern "C" void func_ov004_0222ef24(Cb *c);
extern "C" void func_ov004_0222ef04(Cb *c);
extern "C" BOOL func_ov004_0222ee2c(E864 *e, V3 *out);
extern "C" BOOL func_ov004_0222ede0(E864 *e);
extern "C" void func_ov004_0222ed24(E864 *e, V3 *p);
extern "C" void _ZN18Unk_ov004_0224e8648vfunc_00Ev(E864 *e);
extern "C" void _ZN18Unk_ov004_0224e8648vfunc_04Ev(E864 *e);
extern "C" void func_ov004_0222eb8c(E864 *e);
extern "C" void func_ov004_0222eb30(E864 *e);
extern "C" void func_ov004_0222ead8(E864 *e);
extern "C" void func_ov004_0222ea74(E864 *e);
extern "C" void func_ov004_0222ea40(E864 *e);
extern "C" void func_ov004_0222e9ac(E864 *e);
extern "C" void func_ov004_0222e9a8();
extern "C" void func_ov004_0222e8d8(E864 *e);
extern "C" void func_ov004_0222e874(E864 *e);
extern "C" void func_ov004_0222e820(R *e);
extern "C" void func_ov004_0222e7a4(R *e);
extern "C" void func_ov004_0222e61c(E864 *e);
extern "C" void func_ov004_0222e4f0(R *e);
extern "C" void func_ov004_0222e48c(R *e);
extern "C" s32 func_ov004_0222e3e0(R *a, R **b);
extern "C" void func_ov004_0222e390(R *a, R **b);
extern "C" void func_ov004_0222e2f4(E864 *e);
extern "C" void func_ov004_0222e288(E864 *e, s32 lo);
extern "C" void func_ov004_0222e238(R *e);
extern "C" void func_ov004_0222e0f0(void *unused, R **pp, R **q);
extern "C" void func_ov004_0222e060(R *self);
extern "C" void func_ov004_0222dfbc(E864 *self);
extern "C" void func_ov004_0222dea8(E864 *self);
extern "C" BOOL func_ov004_0222de34(Mgr *self, s32 i);
extern "C" void func_ov004_0222dd3c(Mgr *self, s32 i);
extern "C" BOOL _ZN18Unk_ov004_0224e87c8vfunc_00Ev(Mgr *self);
extern "C" BOOL func_ov004_0222d874(Mgr *self);
extern "C" s32 func_ov004_0222d62c(Mgr *o);
extern "C" s32 func_ov004_0222d5a8(Mgr *o, R **p, s32 idx, s32 n);
extern "C" void func_ov004_0222d564(Mgr *o, R **p, s32 i);
extern "C" void func_ov004_0222d560();
extern "C" s32 func_ov004_0222d558(Mgr *o, R **p, s32 i);
extern "C" void func_ov004_0222d460(Mgr *o, R **p, s32 x);
extern "C" s32 _ZN18Unk_ov004_0224e87c8vfunc_18Ev(Mgr *o);
extern "C" void func_ov004_0222d314(Mgr *o, s32 n);
extern "C" s32 func_ov004_0222d1d8(Mgr *o, R **p, s32 idx);
extern "C" void func_ov004_0222d180(Mgr *o, R **p);
extern "C" s32 _ZN18Unk_ov004_0224e87c8vfunc_24Ev(Mgr *o);
extern "C" s32 _ZN18Unk_ov004_0224e87c8vfunc_0cEv(Mgr *o);
extern "C" void func_ov004_0222cf38(Mgr *o);
extern "C" void func_ov004_0222cde0(Mgr *self);
extern "C" void func_ov004_0222ca24(void *self, R **ctx, s32 type);
extern "C" void func_ov004_0222c9ec(void *self, s32 *p, s32 a, s32 b, s32 c, s32 d);

extern "C" {
extern const Rec data_ov004_022402ec[56];
extern u8 data_ov004_0224e5f0;
extern u8 data_ov004_0224e5f4;
extern void *data_ov004_0224e5f8[2];
extern void *data_ov004_0224e600[2];
extern void *data_ov004_0224e608[2];
extern void *data_ov004_0224e610[2];
extern void *data_ov004_0224e618[2];
extern void *data_ov004_0224e620[2];
extern void *data_ov004_0224e628[2];
extern void *data_ov004_0224e630[2];
extern void *data_ov004_0224e638[2];
extern void *data_ov004_0224e640[2];
extern void *data_ov004_0224e648[2];
extern void *data_ov004_0224e650[2];
extern void *data_ov004_0224e658[2];
extern void *data_ov004_0224e660[2];
extern void *data_ov004_0224e668[2];
extern void *data_ov004_0224e670[2];
extern void *data_ov004_0224e678[2];
extern void *data_ov004_0224e680[2];
extern void *data_ov004_0224e688[2];
extern void *data_ov004_0224e690[2];
extern void *data_ov004_0224e698[2];
extern void *data_ov004_0224e6a0[2];
extern void *data_ov004_0224e6a8[2];
extern void *data_ov004_0224e6b0[2];
extern void *data_ov004_0224e6b8[2];
extern Unk_ov004_SceneEntry data_ov004_0224e6c0;
extern void *data_ov004_0224e6c8[2];
extern void *data_ov004_0224e6d0[2];
extern void *data_ov004_0224e6d8[2];
extern u8 data_ov004_02251d60;
extern u8 data_ov004_02251d64;
extern E834 *data_ov004_02251d6c;
extern E7d4 *data_ov004_02251d74;
extern E7bc *data_ov004_02251d78;
extern R *data_ov004_02251e94[0x38];
extern Unk_02000c8c data_ov004_02251d9c;
extern Unk_02000c8c data_ov004_02251d84;
extern PairFn data_ov004_02251de4[2];
extern Fn data_ov004_02251e5c[7];
extern Fn data_ov004_02251e2c[6];
extern Fn804 data_ov004_02251e04[5];
extern Fn data_ov004_02251db4[3];
extern MgrFn data_ov004_02251dcc[3];
}

extern "C" {
void *data_ov004_0224e638[2] = {(void *)func_ov004_0222d560, 0};
Unk_02000c8c data_ov004_02251d9c(0x11000, 0, 0x15000);
void *data_ov004_0224e600[2] = {(void *)func_ov004_0222f1d0, 0};
const Rec data_ov004_022402ec[56] = {
    {0x00, 0x01, 0x38, 0x28, 0xd8, 0x14, 0x19, 0x3d, 0x0a, 0x03, 0x1e, 0x05, 0x78, 0x1a, 0x7c, 0x98, 0x0c},
    {0x00, 0x01, 0x24, 0x28, 0xe0, 0x19, 0x21, 0x3d, 0x14, 0x03, 0x1e, 0x05, 0x78, 0x14, 0x7a, 0xc0, 0x0c},
    {0x01, 0x01, 0x48, 0x38, 0xc8, 0x0c, 0x08, 0x48, 0x28, 0x0a, 0x78, 0x14, 0x78, 0x14, 0x6e, 0xb5, 0x14},
    {0x01, 0x01, 0x2c, 0x48, 0xb8, 0x10, 0x08, 0x52, 0x14, 0x05, 0xb4, 0x14, 0x78, 0x14, 0x66, 0xa5, 0x18},
    {0x02, 0x03, 0x40, 0x5c, 0xa8, 0x21, 0x10, 0x52, 0x1e, 0x05, 0xb4, 0x1e, 0x78, 0x0a, 0x64, 0x88, 0x28},
    {0x03, 0x03, 0x5c, 0x74, 0x90, 0x21, 0x10, 0x5c, 0x1e, 0x05, 0xe6, 0x3c, 0x64, 0x14, 0x58, 0x70, 0x34},
    {0x03, 0x03, 0x5c, 0x74, 0xa8, 0x21, 0x10, 0x5c, 0x1e, 0x05, 0xe6, 0x3c, 0x64, 0x14, 0x64, 0x88, 0x34},
    {0x00, 0x01, 0x34, 0x2c, 0xd4, 0x14, 0x19, 0x33, 0x14, 0x05, 0x28, 0x05, 0x96, 0x14, 0x7d, 0x6d, 0x18},
    {0x00, 0x01, 0x34, 0x2c, 0xe0, 0x14, 0x19, 0x33, 0x14, 0x05, 0x28, 0x05, 0x96, 0x14, 0x7d, 0x6d, 0x18},
    {0x00, 0x01, 0x14, 0x1c, 0xec, 0x21, 0x29, 0x48, 0x0a, 0x03, 0x14, 0x02, 0x96, 0x14, 0x7d, 0xc0, 0x08},
    {0x00, 0x01, 0x10, 0x38, 0x5c, 0x00, 0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 0x30},
    {0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00},
    {0x00, 0x01, 0x24, 0x28, 0x80, 0x0c, 0x10, 0x29, 0x1e, 0x05, 0x3c, 0x0a, 0xb4, 0x14, 0x4d, 0x80, 0x18},
    {0x00, 0x01, 0x1c, 0x3c, 0x74, 0x19, 0x19, 0x3d, 0x1e, 0x05, 0x3c, 0x0a, 0xa0, 0x14, 0x80, 0x6b, 0x1c},
    {0x02, 0x03, 0x4c, 0x64, 0x6c, 0x19, 0x19, 0x48, 0x14, 0x05, 0xe6, 0x3c, 0x78, 0x0a, 0x40, 0x6b, 0x30},
    {0x07, 0x01, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00},
    {0x03, 0x03, 0x58, 0x7c, 0x70, 0x1d, 0x29, 0x66, 0x1e, 0x0a, 0xc8, 0x32, 0x96, 0x0f, 0x50, 0x6d, 0x38},
    {0x01, 0x01, 0x4c, 0x34, 0xe0, 0xa4, 0x29, 0x52, 0x1e, 0x05, 0x64, 0x0a, 0x96, 0x12, 0x76, 0xba, 0x0c},
    {0x01, 0x01, 0x4c, 0x48, 0xdc, 0x52, 0x21, 0x48, 0x28, 0x05, 0x5a, 0x0a, 0x78, 0x0f, 0x75, 0xad, 0x18},
    {0x02, 0x03, 0x54, 0x5c, 0xc8, 0x1d, 0x19, 0x5c, 0x28, 0x05, 0xb4, 0x05, 0x78, 0x07, 0x6a, 0xa0, 0x2c},
    {0x00, 0x01, 0x18, 0x28, 0xec, 0x4a, 0x19, 0x5c, 0x0a, 0x03, 0x28, 0x05, 0x78, 0x07, 0x80, 0xc6, 0x0c},
    {0x01, 0x01, 0x30, 0x3c, 0xe0, 0x1d, 0x10, 0x5c, 0x1e, 0x05, 0x5a, 0x0a, 0x64, 0x07, 0x7b, 0xba, 0x14},
    {0x01, 0x01, 0x34, 0x4c, 0xcc, 0x52, 0x10, 0x61, 0x14, 0x05, 0x3c, 0x05, 0x64, 0x0a, 0x6d, 0xa0, 0x18},
    {0x02, 0x03, 0x3c, 0x58, 0xc0, 0x21, 0x10, 0x5c, 0x28, 0x05, 0x78, 0x0a, 0x96, 0x0a, 0x6a, 0x9a, 0x24},
    {0x03, 0x03, 0x54, 0x70, 0xb4, 0x29, 0x10, 0x5c, 0x1e, 0x05, 0x78, 0x14, 0x96, 0x0a, 0x60, 0x8d, 0x30},
    {0x04, 0x03, 0x84, 0xb0, 0x7c, 0x21, 0x08, 0x52, 0x14, 0x03, 0xe6, 0x3c, 0x78, 0x0a, 0x40, 0x6b, 0x3c},
    {0x03, 0x03, 0x6c, 0x8c, 0x90, 0x21, 0x10, 0x5c, 0x14, 0x05, 0xb4, 0x1e, 0xaa, 0x07, 0x5a, 0x86, 0x34},
    {0x04, 0x03, 0x80, 0xb8, 0x80, 0x14, 0x08, 0x66, 0x14, 0x05, 0xe6, 0x28, 0xaa, 0x07, 0x4d, 0x66, 0x3c},
    {0x00, 0x01, 0x20, 0x20, 0xec, 0x29, 0x10, 0x33, 0x1e, 0x03, 0x14, 0x05, 0x96, 0x14, 0x7e, 0xda, 0x0c},
    {0x00, 0x01, 0x58, 0x24, 0xd4, 0x10, 0x08, 0x33, 0x28, 0x05, 0x3c, 0x05, 0x96, 0x0a, 0x6d, 0xb3, 0x10},
    {0x01, 0x01, 0x4c, 0x3c, 0x9c, 0xf6, 0x21, 0x66, 0x0a, 0x03, 0x1e, 0x03, 0xb4, 0x14, 0x76, 0x80, 0x14},
    {0x03, 0x03, 0x4c, 0x70, 0xb8, 0x14, 0x08, 0x5c, 0x0a, 0x03, 0xdc, 0x14, 0xb4, 0x0a, 0x60, 0xa6, 0x28},
    {0x03, 0x03, 0x6c, 0x90, 0x78, 0x14, 0x10, 0x52, 0x0a, 0x03, 0xb4, 0x14, 0x96, 0x0a, 0x46, 0x66, 0x30},
    {0x05, 0x03, 0x60, 0xcc, 0x74, 0x0c, 0x10, 0x48, 0x0a, 0x03, 0xdc, 0x14, 0x96, 0x0a, 0x40, 0x6d, 0x34},
    {0x05, 0x03, 0x90, 0xd8, 0x64, 0x10, 0x10, 0x3d, 0x0a, 0x03, 0xdc, 0x28, 0x96, 0x07, 0x3a, 0x60, 0x40},
    {0x00, 0x01, 0x30, 0x08, 0xe0, 0x01, 0x02, 0x0f, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 0x14},
    {0x00, 0x01, 0x50, 0x38, 0xcc, 0x01, 0x02, 0x18, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 0x38},
    {0x00, 0x01, 0x58, 0x14, 0xb0, 0x03, 0x06, 0x14, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 0x08},
    {0x00, 0x01, 0x38, 0x28, 0x6c, 0x52, 0x08, 0x1f, 0x04, 0x01, 0x50, 0x05, 0xa0, 0x14, 0x5a, 0x61, 0x10},
    {0x01, 0x01, 0x58, 0x48, 0x68, 0x08, 0x21, 0x48, 0x3c, 0x05, 0x64, 0x05, 0x96, 0x0a, 0x3d, 0x3a, 0x2c},
    {0x01, 0x04, 0x80, 0x50, 0x88, 0x08, 0x10, 0x3d, 0x1e, 0x05, 0x78, 0x05, 0xa0, 0x14, 0x66, 0x40, 0x38},
    {0x02, 0x01, 0x50, 0x54, 0xb4, 0x29, 0x08, 0x66, 0x64, 0x05, 0x28, 0x05, 0x78, 0x07, 0x66, 0xa6, 0x18},
    {0x02, 0x03, 0x64, 0x60, 0xc8, 0x25, 0x19, 0x66, 0x32, 0x05, 0x50, 0x05, 0xa0, 0x0a, 0x73, 0x9a, 0x24},
    {0x03, 0x03, 0x6c, 0x94, 0xac, 0x21, 0x19, 0x71, 0x28, 0x05, 0xa0, 0x05, 0x78, 0x07, 0x66, 0x8d, 0x30},
    {0x02, 0x03, 0x80, 0x7c, 0x8c, 0x1d, 0x10, 0x5c, 0x50, 0x05, 0xb4, 0x0a, 0x96, 0x0a, 0x53, 0x66, 0x2c},
    {0x02, 0x01, 0x18, 0x60, 0x10, 0x21, 0x10, 0x48, 0x3c, 0x0a, 0xa0, 0x0a, 0xb4, 0x14, 0x0d, 0x0c, 0x38},
    {0x03, 0x01, 0x18, 0x78, 0x10, 0x31, 0x08, 0x3d, 0x3c, 0x05, 0xc8, 0x14, 0xb4, 0x14, 0x0d, 0x0c, 0x48},
    {0x01, 0x02, 0x30, 0x68, 0xc4, 0x52, 0x02, 0x29, 0x14, 0x05, 0x0a, 0x03, 0xb4, 0x1f, 0x6d, 0xb3, 0x28},
    {0x02, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00},
    {0x02, 0x03, 0x74, 0x5c, 0x68, 0x7b, 0x08, 0x48, 0x3c, 0x05, 0xb4, 0x14, 0xb4, 0x1a, 0x3a, 0x33, 0x28},
    {0x05, 0x03, 0x7c, 0xb4, 0xa0, 0x52, 0x08, 0x9a, 0x50, 0x14, 0x50, 0x0a, 0x78, 0x04, 0x5a, 0x8d, 0x40},
    {0x05, 0x03, 0x64, 0xbc, 0xc0, 0x7b, 0x08, 0xa4, 0x3c, 0x14, 0x50, 0x0a, 0x78, 0x04, 0x6d, 0xb3, 0x3c},
    {0x06, 0x01, 0x00, 0x00, 0x44, 0x14, 0x08, 0x29, 0xb4, 0x3c, 0x14, 0x03, 0x01, 0x08, 0x33, 0x20, 0x00},
    {0x06, 0x03, 0x00, 0x00, 0x38, 0x7b, 0x08, 0x66, 0x32, 0x05, 0x50, 0x05, 0x01, 0x08, 0x33, 0x0d, 0x00},
    {0x06, 0x03, 0x00, 0x00, 0xa4, 0xf6, 0x04, 0x85, 0x50, 0x0a, 0x32, 0x05, 0x01, 0x1f, 0x6a, 0x73, 0x00},
    {0x03, 0x03, 0x74, 0xac, 0x7c, 0x19, 0x08, 0x52, 0x28, 0x05, 0xdc, 0x14, 0xa0, 0x09, 0x4d, 0x5a, 0x40},
};
void *data_ov004_0224e610[2] = {(void *)func_ov004_0222f090, 0};
void *data_ov004_0224e6d0[2] = {(void *)func_ov004_0222eb8c, 0};
Unk_02000c8c data_ov004_02251d84(0x11000, 0, 0x7000);
void *data_ov004_0224e670[2] = {(void *)func_ov004_0222d460, 0};
void *data_ov004_0224e668[2] = {(void *)func_ov004_022304f4, 0};
void *data_ov004_0224e680[2] = {(void *)func_ov004_0222e874, 0};
void *data_ov004_0224e6a0[2] = {(void *)func_ov004_02230e88, 0};
void *data_ov004_0224e5f8[2] = {(void *)func_ov004_02230ddc, 0};
}

extern "C" void func_ov004_02233058() {
    new Unk_ov004_0224e87c;
}

Unk_ov004_0224e774::Unk_ov004_0224e774() {
    func_ov004_02232608(unk_04);
    func_02054514(unk_64);
    func_0209c370((u16 *)unk_166);
    func_0209c140(unk_168);
    __cxa_vec_ctor(unk_1d0, 2, 0xc, func_02000c98, func_02000c8c);
    unk_15c = -1;
    unk_160 = 0;
    func_0209c0c8(unk_168);
    unk_1c6 = 0;
    unk_1c7 = 1;
    unk_1f1 = 0;
    unk_1c4 = 0;
    for (s32 i = 0; i < 4; i++) unk_54[i] = 0;
}

Unk_ov004_0224e774::~Unk_ov004_0224e774() {
    __cxa_vec_cleanup(unk_1d0, 2, 0xc, func_02000c8c);
    func_0209c128(unk_168);
    func_0209c364((u16 *)unk_166);
    func_020544d8(unk_64);
    func_ov004_022325f0(unk_04);
}

Unk_ov004_0224e864::Unk_ov004_0224e864() {
    unk_1ee = 2;
    unk_1fe = 2;
    unk_200 = 3;
    unk_1fc = 0;
    unk_21c = 0;
    unk_220 = 0;
    unk_1ca = 0;
    unk_224 = 0x28;
    unk_22e = 0;
    unk_1cc = 0x3000;
    unk_228 = 0x1000;
    unk_1ef = 0;
    unk_254 = 0;
}

Unk_ov004_0224e864::~Unk_ov004_0224e864() {}

Unk_ov004_0224e7d4::Unk_ov004_0224e7d4() {
    unk_255 = 1;
    unk_21c = 0;
    unk_20c = 0x41;
    unk_278 = 0x14;
    unk_27c = 0xccd;
    unk_284 = 0;
}

Unk_ov004_0224e7d4::~Unk_ov004_0224e7d4() {}

Unk_ov004_0224e744::Unk_ov004_0224e744() {
    unk_238 = 0;
}

Unk_ov004_0224e744::~Unk_ov004_0224e744() {}

Unk_ov004_0224e72c::Unk_ov004_0224e72c() {
    unk_255 = 0;
    unk_256 = 0;
}

Unk_ov004_0224e72c::~Unk_ov004_0224e72c() {}

Unk_ov004_0224e834::Unk_ov004_0224e834() {
    unk_211 = 2;
}

Unk_ov004_0224e834::~Unk_ov004_0224e834() {}

Unk_ov004_0224e804::Unk_ov004_0224e804() {
    unk_20e = 0;
}

Unk_ov004_0224e804::~Unk_ov004_0224e804() {}

extern "C" Unk_ov004_0224e7bc::Unk_ov004_0224e7bc() {
    unk_255 = 1;
    unk_21c = 0;
    unk_20c = 0x41;
    unk_270 = 0;
}

extern "C" Unk_ov004_0224e7bc::~Unk_ov004_0224e7bc() {
}

extern "C" Unk_ov004_0224e7a4::Unk_ov004_0224e7a4() {
    unk_255 = 1;
    unk_21c = 0;
    unk_20c = 0xa3;
    unk_264 = 0;
}

extern "C" Unk_ov004_0224e7a4::~Unk_ov004_0224e7a4() {
}

extern "C" Unk_ov004_0224e84c::Unk_ov004_0224e84c() {
    *(u8 *)&unk_21c = 2;
}

extern "C" Unk_ov004_0224e84c::~Unk_ov004_0224e84c() {
}

extern "C" Unk_ov004_0224e78c::Unk_ov004_0224e78c() {
    unk_255 = 0;
    unk_256 = 0;
    unk_258 = 0;
}

extern "C" Unk_ov004_0224e78c::~Unk_ov004_0224e78c() {
}

extern "C" Unk_ov004_0224e75c::Unk_ov004_0224e75c() {
    unk_255 = 0;
    unk_257 = 0;
    unk_259 = 0;
}

extern "C" Unk_ov004_0224e75c::~Unk_ov004_0224e75c() {
}

extern "C" Unk_ov004_0224e714::Unk_ov004_0224e714() {
    unk_258 = 0;
    unk_257 = 0;
    unk_255 = 0;
    unk_256 = 1;
    unk_259 = 0;
}

extern "C" Unk_ov004_0224e714::~Unk_ov004_0224e714() {
}

extern "C" Unk_ov004_0224e6fc::Unk_ov004_0224e6fc() {
}

extern "C" Unk_ov004_0224e6fc::~Unk_ov004_0224e6fc() {
}

extern "C" Unk_ov004_0224e81c::Unk_ov004_0224e81c() {
    unk_255 = 0;
}

extern "C" Unk_ov004_0224e81c::~Unk_ov004_0224e81c() {
}

extern "C" Unk_ov004_0224e7ec::Unk_ov004_0224e7ec() {
}

extern "C" Unk_ov004_0224e7ec::~Unk_ov004_0224e7ec() {
}

extern "C" Unk_ov004_0224e87c::Unk_ov004_0224e87c() {
    __cxa_vec_ctor(unk_2a8, 2, 0x2a8, (void *)func_020b6e10, (void *)func_020b6df4);
    func_0209c2dc(unk_7f8);
}

extern "C" Unk_ov004_0224e87c::~Unk_ov004_0224e87c() {
    func_0209c2d8(unk_7f8);
    __cxa_vec_cleanup(unk_2a8, 2, 0x2a8, (void *)func_020b6df4);
}

extern "C" Unk_ov004_0224e6e8::Unk_ov004_0224e6e8() {
    unk_4c = 0;
}

extern "C" /*EXTERN_C_CLOSE*/

Unk_ov004_0224e6e8::~Unk_ov004_0224e6e8() {
}

extern "C" void func_ov004_022325c8(s32 *p, s32 a, u32 ang) {
    s32 idx = ((u16)ang >> 4) * 2;
    *p += func_01ffcb0c(a, data_02135f44[idx]);
}

extern "C" void func_ov004_0223259c(s32 *p, s32 a, u32 ang) {
    s32 idx = ((u16)ang >> 4) * 2;
    *p += func_01ffcb0c(a, data_02135f44[idx + 1]);
}

extern "C" void func_ov004_0223257c(V3 *p, s32 a, s16 ang) {
    func_ov004_022325c8((s32 *)p, a, ang);
    func_ov004_0223259c((s32 *)p + 2, a, ang);
}

extern "C" void func_ov004_02232548(E864 *o) {
    if (func_ov004_02231c68(o)) {
        func_ov004_022323b4(o);
    } else {
        o->unk_1fc = 0;
        o->unk_1fd = 0;
        func_ov004_02232220(o);
    }
}

extern "C" void func_ov004_022323b4(E864 *o) {
    if (o->unk_1ee != 1) {
        if (o->unk_1fd == 0) {
            if (func_ov004_02231e28(0, 100) < 0x4b) {
                o->unk_1fd = 1;
            } else {
                o->unk_1fd = 2;
                return;
            }
        } else {
            if (o->unk_1eb >= 4) {
                o->unk_1fd = 1;
                o->unk_1fc = 0;
                o->unk_1eb = 0;
            }
        }
        if (o->unk_1fd == 1) {
            if (o->unk_1ee == 5) {
                o->unk_1ee = 4;
            }
            if (o->unk_1fc == 0) {
                V3 l;
                l.x = o->unk_1a8.x;
                l.y = o->unk_1a8.y;
                l.z = o->unk_1a8.z;
                func_ov004_0223257c(&l, ((s32)data_ov004_022402ec[o->unk_15c].unk_03 << 12) >> 7, o->unk_1c0);
                s32 r = func_ov004_02231d54((s32 *)&l, o->unk_1c0);
                func_ov004_0223230c(o, r, 2, 6);
                o->unk_1fc = 1;
                o->unk_250 = 0;
                o->unk_250 = o->unk_250 + o->unk_200;
            }
            if (o->unk_200 * o->unk_250 < 0) {
                if (func_ov004_02232220(o)) {
                    o->unk_1fd = 2;
                } else if (o->unk_1c6 == 0) {
                    o->unk_1fd = 2;
                } else if (o->unk_1c6 == 1) {
                    if (o->unk_22e == 0) {
                        o->unk_1fd = 2;
                    }
                }
            } else {
                o->unk_22f = 0;
                o->unk_1c0 = o->unk_1c0 + o->unk_200;
                o->unk_250 = o->unk_250 + o->unk_200;
                func_ov004_02232270(o, (u16)o->unk_1fe);
                if (o->unk_1ee == 4) {
                    o->unk_158 = 0;
                }
            }
        } else if (o->unk_1fd == 2) {
            func_ov004_02232220(o);
        }
    }
}

extern "C" void func_ov004_0223230c(E864 *o, s32 f, u32 a, u32 b) {
    s32 t = func_ov004_02231e28((u16)a, (u16)b);
    o->unk_200 = t * 0xb6;
    if (f != 0) {
        s32 idx = (u16)o->unk_1c0 >> 4;
        if (func_01ffcb0c(data_02135f44[idx * 2], data_02135f44[idx * 2 + 1]) >= 0) {
            o->unk_200 *= -1;
            o->unk_1fe = 10;
        } else {
            o->unk_1fe = 3;
        }
    } else {
        s32 idx = (u16)o->unk_1c0 >> 4;
        if (func_01ffcb0c(data_02135f44[idx * 2], data_02135f44[idx * 2 + 1]) >= 0) {
            o->unk_1fe = 3;
        } else {
            o->unk_200 *= -1;
            o->unk_1fe = 10;
        }
    }
}

extern "C" void func_ov004_02232270(E864 *o, u32 a) {
    if (o->unk_1c6 != 0) {
        if (o->unk_22e != 0) {
            if (func_020565e8(&o->unk_100, a)) {
                o->unk_108 = (u32)((a - 1) << 16) >> 4;
            }
        } else {
            if (func_020565e8(&o->unk_100, (u16)(o->unk_104.mid - 1))) {
                if (a == 10) {
                    func_ov004_022321e8(o, 2);
                } else {
                    func_ov004_022321e8(o, 1);
                }
                o->unk_22e = 1;
            }
        }
    } else {
        if (func_020565e8(&o->unk_100, a)) {
            o->unk_108 = (u32)((a - 1) << 16) >> 4;
        }
    }
}

extern "C" s32 func_ov004_02232220(E864 *o) {
    BOOL r = FALSE;
    if (o->unk_1c6 != 0) {
        if (o->unk_22e != 0) {
            if (func_020565e8(&o->unk_100, o->unk_104.mid)) {
                func_ov004_022321cc(o);
                r = TRUE;
            }
        }
    }
    return r;
}

extern "C" void func_ov004_022321e8(E864 *o, s32 i) {
    s32 t = func_021065dc(o->unk_54[i]);
    s32 r = func_021065f8(t, 0);
    func_0205436c(o->unk_64, r, 2, 0, 0x1000, 0, 0);
}

extern "C" void func_ov004_022321cc(E864 *o)
{
    func_ov004_022321e8(o, 0);
    o->unk_22e = 0;
}

extern "C" void func_ov004_022321b4(E864 *o)
{
    func_ov004_022321cc(o);
    o->unk_1fd = 2;
}

extern "C" void func_ov004_02232158(E864 *o, s32 a, s32 b, s32 c)
{
    s32 *p = &o->unk_1a8.y;
    s32 t = *p;
    s32 m = a * o->unk_1ca;
    *p = t + m;
    if (*p > b) {
        func_020e759c(p, o->unk_1cc, a);
    } else if (*p < c) {
        func_020e759c(p, o->unk_228, a);
    }
}

extern "C" void func_ov004_02232130(E864 *o)
{
    func_ov004_02232158(o, o->unk_224, o->unk_1cc, o->unk_228);
}

extern "C" void func_ov004_022320c8(E864 *o)
{
    s32 k = o->unk_15c;
    if (k == 0x2d || k == 0x2e) {
        func_ov004_02232158(o, o->unk_224, o->unk_1cc, o->unk_228);
    } else if (o->unk_1e8 == k) {
        func_ov004_02232158(o, o->unk_224, o->unk_1cc, o->unk_228);
    } else {
        func_ov004_02232158(o, 0x7b, 0x5000, o->unk_228);
    }
}

extern "C" void func_ov004_02232068(E864 *o)
{
    u32 t = o->unk_1ee;
    if ((u8)(t + 0xff) > 1) {
        if (t == 3) {
            func_020e7754(&o->unk_1c4, (s16)(o->unk_1ca * -6825), 3, 0x222);
        } else if (t == 5) {
            func_020e7754(&o->unk_1c4, 0, 3, 0x222);
        }
    }
}

extern "C" void func_ov004_02231f98(E864 *o, s32 lim, s32 b)
{
    if ((u8)(o->unk_1ee + 0xff) > 1) {
        s32 t = -o->unk_23c * o->unk_1ca;
        s32 s = (o->unk_20c * b) >> 12;
        s32 n, c;
        t = t * s;
        o->unk_1c4 = t;
        n = -lim;
        c = o->unk_1c4;
        if (c <= n) {
            o->unk_1c4 = n;
        } else if (c >= lim) {
            o->unk_1c4 = lim;
        }
        if (o->unk_24e != 0) {
            if (o->unk_1c4 != 0) {
                o->unk_23c--;
            }
        } else {
            o->unk_23c++;
            if (o->unk_1ee == 5) {
                o->unk_24e = 1;
            } else {
                t = o->unk_1ca;
                if (t == 1 && o->unk_1a8.y == o->unk_1cc) goto set;
                if (t == -1 && o->unk_1a8.y == o->unk_228) {
                set:
                    o->unk_24e = 1;
                }
            }
        }
    }
}

extern "C" void func_ov004_02231eec(E864 *o, s32 a)
{
    if ((u8)(o->unk_1ee + 0xff) > 1) {
        if (o->unk_24e != 0) {
            if (o->unk_1c4 != 0) {
                func_020e7754(&o->unk_1c4, 0, 3, 0x186);
            }
        } else {
            s32 d;
            func_020e7754(&o->unk_1c4, (s16)(-a * o->unk_1ca), 4, 0x186);
            if (o->unk_1ee == 5) {
                o->unk_24e = 1;
            } else {
                d = o->unk_1ca;
                if (d == 1 && o->unk_1a8.y == o->unk_1cc) goto set;
                if (d == -1 && o->unk_1a8.y == o->unk_228) {
                set:
                    o->unk_24e = 1;
                }
            }
        }
    }
}

extern "C" void func_ov004_02231e8c(E864 *o, s32 m, s32 lim, u32 mode)
{
    s32 *p = &o->unk_1a8.y;
    if (mode == 0 || mode == 2) {
        m = m * o->unk_21c;
        if (m >= lim) {
            m = lim;
        }
    } else if (mode == 1 || mode == 3) {
        m = lim - m * o->unk_21c;
        if (m <= 0) {
            m = 0;
        }
    }
    if (mode <= 1) {
        *p = *p + m;
    } else if ((u8)(mode + 0xfe) <= 1) {
        *p = *p - m;
    }
}

extern "C" s32 func_ov004_02231e74(s32 a, s32 b)
{
    s32 r = func_ov004_02231e28(a, b);
    if (r == 0) {
        r = 1;
    }
    return r << 12;
}

extern "C" s16 func_ov004_02231e3c(s32 a, s32 b)
{
    s32 sign;
    s32 r;
    if (func_020e7fa8(data_021c7c88) > 0) {
        sign = 1;
    } else {
        sign = -1;
    }
    r = func_ov004_02231e28(b, a);
    return (s8)sign * r * 0xb6;
}

extern "C" s32 func_ov004_02231e28(s32 a, s32 b)
{
    return a + func_02063b8c(b - a);
}

extern "C" BOOL func_ov004_02231dec(void *obj, void *a, void *b, s32 max)
{
    BOOL r = TRUE;
    if (func_020e96a4(a, b) > max) {
        func_020e769c(obj, func_02002bdc(a, b), 0x38e);
        r = FALSE;
    }
    return r;
}

extern "C" BOOL func_ov004_02231d54(s32 *p, s32 v)
{
    BOOL r = FALSE;
    s32 sgn = 2;
    s32 k[1];
    volatile s32 b, a;
    V3 q;
    s32 i;
    k[0] = sgn;
    if (v < 0) {
        sgn *= -1;
    }
    if (v < 0) {
        v = -v;
    }
    if (v > 0x4000) {
        k[0] *= -1;
    }
    for (i = 0; i < 0x32; i++) {
        a = p[2];
        b = p[1];
        q.x = p[0] + ((sgn * i) << 12) / 10;
        q.y = b;
        q.z = a;
        if (func_ov004_02231d1c(&q) == 0) {
            r = TRUE;
            break;
        }
        s32 z = p[2] + ((k[0] * i) << 12) / 10;
        s32 y = p[1];
        s32 x = p[0];
        q.x = x;
        q.y = y;
        q.z = z;
        if (func_ov004_02231d1c(&q) == 0) {
            break;
        }
    }
    return r;
}

extern "C" BOOL func_ov004_02231d1c(V3 *pos)
{
    u32 buf[16];
    BOOL r = FALSE;
    func_020339bc(buf, pos, r, r);
    if (func_02033914(buf, r) == 0x800) {
        r = TRUE;
    }
    func_02033988(buf);
    return r;
}

extern "C" BOOL func_ov004_02231c68(E864 *o)
{
    BOOL r = FALSE;
    V3 v;
    s32 x;
    v.x = o->unk_1a8.x;
    v.y = o->unk_1a8.y;
    v.z = o->unk_1a8.z;
    func_ov004_0223257c(&v, (data_ov004_022402ec[o->unk_15c].unk_03 << 12) >> 7, o->unk_1c0);
    x = 0x400;
    if (o->unk_1fc != 0) {
        x = 0x1000;
    }
    if (o->unk_15c == 0x19 || o->unk_15c < 0x11) {
        if (func_020308b4(&v.x, x, &data_ov004_02251d9c, 0xfc00, 0x3c00) != 0) {
            r = TRUE;
        }
    } else {
        if (func_020308b4(&v.x, x, &data_ov004_02251d84, 0xfc00, 0x3c00) != 0) {
            r = TRUE;
        }
    }
    return r;
}

extern "C" void _ZN18Unk_ov004_0224e7d48vfunc_00Ev(E7d4 *o)
{
    s32 *p = &o->unk_15c;
    o->unk_50 = o;
    o->unk_1e8 = *p;
    o->unk_1e9 = *p;
    o->unk_1c8 = 0;
    o->unk_210 = 0x5e;
    o->unk_214 = 1;
    o->unk_218 = 1;
    o->unk_230 = 0x96;
    o->unk_204 = data_ov004_022402ec[*p].unk_08;
    o->unk_205 = data_ov004_022402ec[*p].unk_09;
    o->unk_206 = data_ov004_022402ec[*p].unk_0a;
    o->unk_207 = data_ov004_022402ec[*p].unk_0b;
    data_ov004_02251d74 = o;
}

extern "C" void _ZN18Unk_ov004_0224e7d48vfunc_04Ev(E7d4 *o)
{
    u8 a = o->unk_1e8;
    u8 *p = &o->unk_252;
    if (*p != a && a != o->unk_15c) {
        *p = a;
        o->unk_280 = 4;
        o->unk_278 = 0xcd;
        o->unk_281 = 1;
    }
    if (o->unk_281 == 0) {
        (o->*data_ov004_02251e5c[o->unk_1ee])();
    } else {
        func_ov004_0223197c(o);
    }
    func_ov004_022319ac(&o->unk_1c4, &o->unk_284, (s32 *)&o->unk_288, 0x2aac, 0x12c);
    switch (o->unk_255) {
    case 1: {
        s32 r = func_ov004_02231e28(0, 250);
        s32 v;
        if (r <= 1 || (v = o->unk_1a8.y) >= 0x2b33) {
            if (func_020565e8(&o->unk_100, 1) != 0) {
                o->unk_21c = 0;
                o->unk_255 = 2;
            }
        } else {
            if (v == o->unk_1b4.y) {
                o->unk_21c = 0;
                o->unk_255 = 0;
            }
        }
        o->unk_110 = 0x666;
        break;
    }
    case 0:
        if (func_ov004_02231e28(0, 100) <= 10) {
            o->unk_21c = 0;
            o->unk_255 = 1;
        }
        o->unk_110 = 0x800;
        break;
    case 2: {
        s32 r = func_ov004_02231e28(0, 250);
        if (r <= 1 || o->unk_1a8.y <= 0x800) {
            o->unk_21c = 0;
            o->unk_255 = 1;
        }
        o->unk_110 = 0x4cd;
        break;
    }
    }
    if (o->unk_1ee != 2) {
        func_ov004_0222e2f4(o);
    }
    func_ov004_02231e8c(o, 8, 0x28, o->unk_255);
    o->unk_21c++;
    o->unk_158++;
    func_ov004_02231838(o);
    func_ov004_02231600(o, &o->unk_26c);
}

extern "C" void func_ov004_022319ac(s16 *out, u8 *flag, s32 *cnt, s32 max, s32 mul)
{
    s32 t;
    if (*flag != 0) {
        *cnt = *cnt + 1;
    } else {
        *cnt = *cnt - 1;
    }
    t = (s16)(*cnt * mul);
    if (t >= max) {
        t = max;
        *flag = 0;
    } else if (t <= 0) {
        t = 0;
        *flag = 1;
    }
    *out = t;
}

extern "C" void func_ov004_0223197c(E7d4 *o)
{
    switch (o->unk_281) {
    case 1:
        func_ov004_02231938(o);
        break;
    case 2:
        func_ov004_022318dc(o);
        break;
    case 3:
        func_ov004_02231878(o);
        break;
    }
}

extern "C" void func_ov004_02231938(E7d4 *o)
{
    R *p = data_ov004_02251e94[o->unk_1e8];
    if (p != NULL) {
        o->unk_282 = p->unk_1c0 + 0x4000;
    }
    o->unk_281 = 2;
    o->unk_158 = 0;
}

extern "C" void func_ov004_022318dc(E7d4 *o)
{
    s32 t = o->unk_158 * 2;
    if (t > 0x7b) {
        t = 0x7b;
        o->unk_281 = 3;
        o->unk_158 = 0;
    }
    func_020e769c(&o->unk_1c0, o->unk_1ec, 0x2d8);
    func_ov004_0223257c(&o->unk_1a8, t, o->unk_1c0);
}

extern "C" void func_ov004_02231878(E7d4 *o) {
    s32 t = 0x7b - o->unk_158 * 2;
    if (t < 0) {
        t = 0;
        o->unk_281 = 0;
        o->unk_158 = 0;
        o->unk_1ee = 2;
    }
    func_020e769c(&o->unk_1c0, o->unk_1ec, 0x2d8);
    func_ov004_0223257c(&o->unk_1a8, t, o->unk_1c0);
}

extern "C" void func_ov004_02231838(E7d4 *o) {
    switch (o->unk_264) {
    case 0:
        func_ov004_022317d0(o);
        break;
    case 1:
        func_ov004_02231750(o);
        break;
    case 2:
        func_ov004_022316e0(o);
        break;
    }
    o->unk_268++;
}

extern "C" void func_ov004_022317d0(E7d4 *o) {
    o->unk_264 = 1;
    o->unk_268 = 0;
    if (o->unk_280) {
        func_020e759c(&o->unk_278, 0x14, 0x29);
        func_020e759c(&o->unk_27c, 0xccd, 0xcd);
        o->unk_280--;
    } else {
        o->unk_278 = 0x14;
        o->unk_27c = 0xccd;
    }
}

extern "C" void func_ov004_02231750(E7d4 *o) {
    o->unk_258 = o->unk_27c + o->unk_278 * o->unk_268;
    if (o->unk_258 >= 0x1000) {
        o->unk_258 = 0x1000;
        o->unk_25c = 0x1000;
        o->unk_260 = 0x1000;
        o->unk_264 = 2;
        o->unk_268 = 0;
        if (o->unk_280 == 4) {
            o->unk_27c = 0x99a;
        }
    } else {
        o->unk_25c = o->unk_258;
        o->unk_260 = o->unk_258;
    }
}

extern "C" void func_ov004_022316e0(E7d4 *o) {
    s32 t = o->unk_278 * o->unk_268;
    o->unk_258 = 0x1000 - t;
    if (o->unk_258 < o->unk_27c) {
        o->unk_258 = o->unk_27c;
        o->unk_25c = o->unk_27c;
        o->unk_260 = o->unk_27c;
        o->unk_264 = 0;
        o->unk_268 = 0;
    } else {
        o->unk_25c = o->unk_258;
        o->unk_260 = o->unk_258;
    }
}

extern "C" void func_ov004_02231600(R *o, V3 *out) {
    s32 t = o->unk_15c;
    static s32 k1 = (data_ov004_022402ec[t].unk_02 << 12) >> 7;
    static s32 k2 = (data_ov004_022402ec[t].unk_03 << 12) >> 7;
    V3 l[4];
    l[0].x = 0;
    l[0].y = k1;
    l[0].z = 0;
    l[1].x = 0;
    l[1].y = 0;
    l[1].z = k2;
    data_021f47e0 = o->unk_c8;
    MTX_MultVec43(&l[0], &data_021f47e0, &l[2]);
    MTX_MultVec43(&l[1], &data_021f47e0, &l[3]);
    V3 *p = &o->unk_1a8;
    out->x = (p->x + l[2].x) >> 1;
    out->z = (p->z + l[2].z) >> 1;
    if (l[3].y < p->y) {
        out->y = l[3].y;
    } else {
        out->y = p->y;
    }
}

extern "C" void _ZN18Unk_ov004_0224e7448vfunc_00Ev(E744 *o) {
    o->unk_50 = o;
    o->unk_1c8 = 2;
    func_02055488(&o->unk_64, (void *)func_ov004_0222ef04, o);
    s32 *t = &o->unk_15c;
    o->unk_1e8 = *t;
    o->unk_1e9 = *t;
    func_ov004_0222dea8(o);
}

extern "C" void _ZN18Unk_ov004_0224e7448vfunc_04Ev(E744 *o) {
    func_ov004_02231420(o, -2, 0x24);
    if (o->unk_1ee != 2 && o->unk_1ee != 6) {
        func_ov004_022320c8(o);
    }
    func_ov004_0222e288(o, 0x333);
    o->unk_158++;
    func_ov004_0222ede0(o);
}

extern "C" void func_ov004_02231420(E744 *o, s32 a, s32 b) {
    if (o->unk_1a8.x <= (a + 2) << 12) {
        o->unk_1fc = 1;
        if (func_020e769c(&o->unk_1c0, 0x4000, 0x38e)) {
            o->unk_1a8.x += 0x19a;
        }
        o->unk_1a8.y = ((data_ov004_022402ec[o->unk_15c].unk_04 << 12) >> 6);
        func_ov004_0223257c(&o->unk_1a8, 0x19a, o->unk_1c0);
        o->unk_110 = 0x1000;
        func_ov004_02232270(o, 3);
        return;
    }
    if (o->unk_1a8.x >= (b - 2) << 12) {
        o->unk_1fc = 1;
        if (func_020e769c(&o->unk_1c0, -0x4000, 0x38e)) {
            o->unk_1a8.x -= 0x19a;
        }
        o->unk_1a8.y = ((data_ov004_022402ec[o->unk_15c].unk_04 << 12) >> 6);
        func_ov004_0223257c(&o->unk_1a8, 0x19a, o->unk_1c0);
        o->unk_110 = 0x1000;
        func_ov004_02232270(o, 10);
        return;
    }
    func_ov004_0222dfbc(o);
    func_ov004_0222e61c(o);
    (o->*data_ov004_02251e2c[o->unk_1ee])();
    func_ov004_0222e2f4(o);
    func_ov004_0222e820(o);
    func_ov004_02232220(o);
    func_ov004_0222e288(o, 0x333);
}

extern "C" void _ZN18Unk_ov004_0224e72c8vfunc_00Ev(E72c *o) {
    s32 *t = &o->unk_15c;
    o->unk_1e8 = *t;
    o->unk_1c7 = 0;
    if ((u32)(*t - 0x35) <= 1) {
        func_02055488(&o->unk_64, (void *)func_ov004_0222ef04, o);
    }
    s32 r;
    if (func_ov004_02231e28(0, 2) > 0) {
        r = 1;
    } else {
        r = -1;
    }
    o->unk_1c0 = r << 14;
    func_ov004_0222dea8(o);
}

extern "C" void _ZN18Unk_ov004_0224e72c8vfunc_04Ev(E72c *o) {
    s32 t = o->unk_15c;
    if ((u32)(t - 0x35) <= 1) {
        func_ov004_022311cc(o, 2, 0x20);
    } else if (t == 0x34) {
        func_ov004_022311cc(o, -4, 0x26);
    }
    if (o->unk_1ee != 2 && o->unk_1ee != 6) {
        func_ov004_02232130(o);
        t = o->unk_15c;
        if ((u32)(t - 0x35) <= 1) {
            func_ov004_02231f98(o, 0x924, 0x28a);
        } else if (t == 0x34) {
            func_ov004_02231f98(o, 0x71c, 0x28a);
        }
    }
    o->unk_158++;
}

extern "C" void func_ov004_022311cc(E72c *o, s32 a, s32 b) {
    if (o->unk_1a8.x <= (a + 2) << 12) {
        if (func_020e769c(&o->unk_1c0, 0x4000, 0x444)) {
            o->unk_1a8.x += 0x133;
        }
        func_ov004_0223257c(&o->unk_1a8, 0x133, o->unk_1c0);
        o->unk_110 = 0x1000;
        o->unk_1fe = 3;
        func_ov004_02232270(o, (u16)o->unk_1fe);
        return;
    }
    if (o->unk_1a8.x >= (b - 2) << 12) {
        if (func_020e769c(&o->unk_1c0, -0x4000, 0x444)) {
            o->unk_1a8.x -= 0x133;
        }
        func_ov004_0223257c(&o->unk_1a8, 0x133, o->unk_1c0);
        o->unk_110 = 0x1000;
        o->unk_1fe = 10;
        func_ov004_02232270(o, (u16)o->unk_1fe);
        return;
    }
    if (o->unk_1fe == 3) {
        func_020e769c(&o->unk_1c0, 0x4000, 0x444);
    } else if (o->unk_1fe == 10) {
        func_020e769c(&o->unk_1c0, -0x4000, 0x444);
    }
    (o->*data_ov004_02251e5c[o->unk_1ee])();
    if ((u32)(o->unk_15c - 0x35) <= 1) {
        func_020e759c(&o->unk_1a8.z, 0x10800, 0xcd);
    } else if (o->unk_15c == 0x34) {
        func_020e759c(&o->unk_1a8.z, 0x10000, 0xcd);
    }
    func_ov004_02232220(o);
    func_ov004_0222e288(o, 0x333);
}

extern "C" void _ZN18Unk_ov004_0224e8348vfunc_00Ev(E834 *o) {
    o->unk_1c7 = 0;
    o->unk_1a8.x = 0x14500;
    o->unk_1a8.y = 0x3700;
    o->unk_1a8.z = 0x15400;
    o->unk_1c0 = 0;
    data_ov004_02251d6c = o;
    func_02003cbc(&o->unk_1fc);
}

extern "C" void _ZN18Unk_ov004_0224e8348vfunc_04Ev(E834 *o) {
    V3 l[2];
    l[0] = data_ov004_022513f0;
    o->unk_1a8 = l[0];
    l[1] = o->unk_1a8;
    func_02003c70(&o->unk_1fc, &l[1]);
    switch (o->unk_211) {
    case 2:
        func_ov004_02231060(o);
        break;
    case 4:
        func_ov004_02230fd0(o);
        break;
    case 6:
        if (o->unk_158 >= o->unk_1fc.unk_0c) {
            o->unk_211 = 2;
            o->unk_158 = 0;
        }
        break;
    }
    o->unk_158++;
}

extern "C" void func_ov004_02231060(E834 *o) {
    o->unk_1fc.unk_0c = func_ov004_02231e28(0x28, 0xc8);
    o->unk_20c = (func_ov004_02231e28(0x32, 0x4b) << 12) / 100;
    o->unk_110 = o->unk_20c;
    o->unk_1fc.unk_0e = func_ov004_02231e28(1, 7);
    o->unk_210 = 0;
    o->unk_158 = 0;
    o->unk_211 = 4;
}

extern "C" void func_ov004_02230fd0(E834 *o) {
    if (func_020565e8(&o->unk_100, 1)) {
        func_02003c50(&o->unk_1fc, 0x832);
        o->unk_210++;
    }
    if (o->unk_210 >= o->unk_1fc.unk_0e) {
        if (func_020565e8(&o->unk_100, (u16)(o->unk_104.mid - 1))) {
            o->unk_211 = 6;
            o->unk_158 = 0;
            o->unk_108 = 0;
            o->unk_110 = 0;
        }
    }
}

extern "C" void _ZN18Unk_ov004_0224e8048vfunc_00Ev(E804 *e) {
    e->unk_1c7 = 0;
    e->unk_1a8.x = 0;
    e->unk_1a8.y = 0;
    e->unk_1a8.z = 0;
    e->unk_1c0 = 0;
}

extern "C" void _ZN18Unk_ov004_0224e8048vfunc_04Ev(E804 *e) {
    (e->*data_ov004_02251e04[e->unk_20e])();
    e->unk_158++;
}

extern "C" void func_ov004_02230ecc(E804 *e) {
    e->unk_208 = (func_ov004_02231e28(0xb, 0xf) << 12) / 10;
    e->unk_200 = (func_ov004_02231e28(0x14, 0x32) << 12) / 1000;
    e->unk_204 = (func_ov004_02231e28(0xa, 0x1e) << 12) / 1000;
    e->unk_20c = func_ov004_02231e28(1, 0x96);
    e->unk_20d = func_ov004_02231e28(0xa, 0x78);
    e->unk_158 = 0;
    e->unk_110 = 0;
    e->unk_20e = 1;
}

extern "C" void func_ov004_02230e88(E804 *e) {
    s32 t = e->unk_200 * e->unk_158 * 5;
    s32 m = e->unk_208;
    if (t >= m) {
        t = m;
        e->unk_20e = 2;
        e->unk_158 = 0;
    }
    e->unk_110 = t;
}

extern "C" void func_ov004_02230e50(E804 *e) {
    if (e->unk_158 >= e->unk_20c) {
        e->unk_20e = 3;
        e->unk_158 = 0;
    }
    e->unk_110 = e->unk_208;
}

extern "C" void func_ov004_02230e10(E804 *e) {
    s32 t = e->unk_208 - e->unk_204 * e->unk_158;
    if (t <= 0) {
        t = 0;
        e->unk_20e = 4;
        e->unk_158 = 0;
    }
    e->unk_110 = t;
}

extern "C" void func_ov004_02230ddc(E804 *e) {
    e->unk_110 = 0;
    if (e->unk_158 >= e->unk_20d) {
        e->unk_20e = 0;
        e->unk_158 = 0;
    }
}

extern "C" void _ZN18Unk_ov004_0224e7bc8vfunc_00Ev(E7bc *e) {
    s32 *p = &e->unk_15c;
    e->unk_1e8 = *p;
    e->unk_1e9 = *p;
    e->unk_1c8 = 0;
    e->unk_210 = 0x3a;
    e->unk_214 = 1;
    e->unk_218 = 1;
    e->unk_230 = 0x1e;
    e->unk_258[0] = 0x6000;
    e->unk_258[1] = 0;
    e->unk_258[2] = 0x14a00;
    e->unk_204 = data_ov004_022402ec[*p].unk_08;
    e->unk_205 = data_ov004_022402ec[*p].unk_09;
    e->unk_206 = data_ov004_022402ec[*p].unk_0a;
    e->unk_207 = data_ov004_022402ec[*p].unk_0b;
    data_ov004_02251d78 = e;
}

extern "C" void _ZN18Unk_ov004_0224e7bc8vfunc_04Ev(E7bc *e) {
    if ((u8)(e->unk_1ee + 0xfd) <= 1) {
        func_ov004_02231dec(&e->unk_1c0, &e->unk_1a8, &e->unk_258, 0x1000);
    }
    (e->*data_ov004_02251e5c[e->unk_1ee])();
    func_ov004_022319ac(&e->unk_1c4, &e->unk_270, &e->unk_274, 0x2aac, 0x12c);
    switch (e->unk_255) {
    case 1: {
        s32 r = func_ov004_02231e28(0, 0x64);
        if (r <= 1 || e->unk_1a8.y >= 0x2b33) {
            if (func_020565e8(&e->unk_100, 1)) {
                e->unk_21c = 0;
                e->unk_255 = 2;
            }
        } else {
            r = func_ov004_02231e28(0, 0x64);
            if (r <= 0x1e) {
                e->unk_21c = 0;
                e->unk_255 = 0;
            } else if (e->unk_1a8.y == e->unk_1b4.y) {
                e->unk_21c = 0;
                e->unk_255 = 0;
            }
        }
        e->unk_110 = 0xe66;
        break;
    }
    case 0: {
        s32 r = func_ov004_02231e28(0, 0x64);
        if (r <= 0x1e) {
            e->unk_21c = 0;
            e->unk_255 = 1;
        }
        e->unk_110 = 0x1000;
        break;
    }
    case 2: {
        s32 r = func_ov004_02231e28(0, 0x64);
        if (r <= 1 || e->unk_1a8.y <= 0x800) {
            e->unk_21c = 0;
            e->unk_255 = 1;
        }
        e->unk_110 = 0x666;
        break;
    }
    }
    if (e->unk_1ee != 2) {
        func_ov004_0222e2f4(e);
    }
    func_ov004_02231e8c(e, 8, 0x14, e->unk_255);
    e->unk_21c++;
    e->unk_158++;
    func_ov004_0222ede0(e);
    func_ov004_02231600(e, &e->unk_264);
}

extern "C" void _ZN18Unk_ov004_0224e7a48vfunc_00Ev(E7a4 *e) {
    s32 *p = &e->unk_15c;
    e->unk_1e8 = *p;
    e->unk_1e9 = *p;
    e->unk_1c8 = 0;
    e->unk_210 = 0x51;
    e->unk_214 = 2;
    e->unk_218 = 2;
    e->unk_230 = 0x3c;
    e->unk_258[0] = 0x7000;
    e->unk_258[1] = 0;
    e->unk_258[2] = 0x14a00;
    e->unk_204 = data_ov004_022402ec[*p].unk_08;
    e->unk_205 = data_ov004_022402ec[*p].unk_09;
    e->unk_206 = data_ov004_022402ec[*p].unk_0a;
    e->unk_207 = data_ov004_022402ec[*p].unk_0b;
}

extern "C" void _ZN18Unk_ov004_0224e7a48vfunc_04Ev(E7a4 *e) {
    func_ov004_02231dec(&e->unk_1c0, &e->unk_1a8, &e->unk_258, 0x1000);
    switch (e->unk_255) {
    case 1: {
        s32 r = func_ov004_02231e28(0, 0x64);
        if (r <= 8 || e->unk_1a8.y >= 0x2000) {
            e->unk_21c = 0;
            e->unk_255 = 2;
        } else if (e->unk_1a8.y == e->unk_1b4.y) {
            e->unk_21c = 0;
            e->unk_255 = 0;
        }
        e->unk_110 = 0xb33;
        break;
    }
    case 0: {
        s32 r = func_ov004_02231e28(0, 0x64);
        if (r <= 10) {
            e->unk_21c = 0;
            e->unk_255 = 1;
        }
        e->unk_110 = 0x1000;
        break;
    }
    case 2: {
        s32 r = func_ov004_02231e28(0, 0x64);
        if (r <= 3 || e->unk_1a8.y <= 0x1000) {
            e->unk_21c = 0;
            e->unk_255 = 1;
        }
        e->unk_110 = 0x666;
        break;
    }
    }
    (e->*data_ov004_02251e5c[e->unk_1ee])();
    func_ov004_022319ac(&e->unk_1c4, &e->unk_264, &e->unk_268, 0x11c6, 0x96);
    if (e->unk_1ee != 2) {
        func_ov004_0222e2f4(e);
    }
    func_ov004_02231e8c(e, 8, 0x51, e->unk_255);
    e->unk_21c++;
    e->unk_158++;
    func_ov004_0222ede0(e);
}

extern "C" void _ZN18Unk_ov004_0224e78c8vfunc_00Ev(E78c *e) {
    e->unk_50 = e;
    e->unk_1e8 = e->unk_15c;
    e->unk_1e9 = e->unk_15c;
    e->unk_1c8 = 1;
    func_ov004_0222dea8(e);
    func_02055488(&e->unk_64, (void *)func_ov004_0222ef04, e);
}

extern "C" void _ZN18Unk_ov004_0224e78c8vfunc_04Ev(E78c *e) {
    u32 v;
    s32 t;
    func_ov004_0222dfbc(e);
    (e->*data_ov004_02251e5c[e->unk_1ee])();
    v = (u16)(e->unk_104.mid - 1);
    if (e->unk_110 > 0x1000) {
        v = (u16)(e->unk_104.mid - 2);
    }
    switch (e->unk_256) {
    case 0:
        if (e->unk_40 != 0) {
            e->unk_255 = 1;
        }
        if (e->unk_255 != 0) {
            if (func_020565e8(&e->unk_100, v)) {
                e->unk_256 = 1;
                t = e->unk_210;
                e->unk_210 = t << 1;
                func_ov004_022321e8(e, 1);
                e->unk_255 = 0;
            }
        }
        break;
    case 1:
        if (func_020565e8(&e->unk_100, v)) {
            e->unk_257 = func_ov004_02231e28(0x3c, 0x50);
            e->unk_258 = 0;
            e->unk_256 = 2;
            func_ov004_022321e8(e, 2);
        }
        break;
    case 2: {
        u32 b = e->unk_258;
        if (b > e->unk_257) {
            if (func_020565e8(&e->unk_100, v)) {
                e->unk_256 = 3;
                e->unk_210 = e->unk_210 >> 1;
                func_ov004_022321e8(e, 3);
            }
        } else {
            e->unk_258 = b + 1;
        }
        break;
    }
    case 3:
        if (func_020565e8(&e->unk_100, v)) {
            e->unk_256 = 0;
            func_ov004_022321e8(e, 0);
        }
        break;
    }
    if (e->unk_1ee != 2 && e->unk_1ee != 6) {
        func_ov004_022320c8(e);
        func_ov004_02231eec(e, 0x1554);
        func_ov004_0222e2f4(e);
    }
    func_ov004_0222e288(e, 0x666);
    func_ov004_0222e238(e);
    func_ov004_0222e61c(e);
    func_ov004_0222e7a4(e);
    e->unk_158++;
    if (func_ov004_0222ede0(e)) {
        if (e->unk_256 == 0) {
            e->unk_255 = 1;
        } else {
            e->unk_258 = 0;
        }
    }
}

extern "C" void _ZN18Unk_ov004_0224e75c8vfunc_00Ev(E75c *e) {
    e->unk_1e8 = e->unk_15c;
    e->unk_1c7 = 0;
    func_ov004_0222dea8(e);
}

extern "C" void _ZN18Unk_ov004_0224e75c8vfunc_04Ev(E75c *o) {
    (o->*data_ov004_02251db4[o->unk_255])();
    s32 t = (data_ov004_022402ec[30].unk_03 << 12) >> 7;
    o->unk_256 = func_020308b4(&o->unk_1a8, t, &data_ov004_02251d84, 0x11c00, 0x5c00);
    s32 g = func_02133150(o->unk_164 << 12, 10);
    func_02088c64(o->unk_04, &o->unk_1a8, t, (data_ov004_022402ec[30].unk_02 << 12) >> 7, 0x100, 0x140, 0, 0xff, g);
    func_02089040(o->unk_04);
    o->unk_1b4.x = o->unk_1a8.x;
    o->unk_1b4.y = o->unk_1a8.y;
    o->unk_1b4.z = o->unk_1a8.z;
    o->unk_158 = o->unk_158 + 1;
}

extern "C" void func_ov004_022304f4(E75c *o) {
    (o->*data_ov004_02251e5c[o->unk_1ee])();
    func_ov004_02232548(o);
    if (o->unk_1ee != 2 && o->unk_1ee != 6) {
        func_ov004_02232130(o);
        func_ov004_02231f98(o, 0x1554, 0x384);
        func_ov004_0222e2f4(o);
    }
    func_ov004_0222e288(o, 0x666);
    P *p = func_02095204(4);
    if (p != 0) {
        V3 v;
        V3 *pv = &p->unk_5c;
        v.x = p->unk_5c.x;
        v.y = pv->y;
        v.z = pv->z;
        if (func_020e9600(&v, &o->unk_1a8) < 0x10000) {
            o->unk_259++;
            if (o->unk_259 > 0xa) {
                if (p->unk_98 != 0) {
                    o->unk_255 = 1;
                    o->unk_158 = 0;
                    o->unk_259 = 0;
                }
            }
        } else {
            o->unk_259 = 0;
        }
    }
}

extern "C" void func_ov004_022303b4(E75c *o) {
    V3 v;
    P *p = func_02095204(4);
    if (p == 0) {
        o->unk_255 = 0;
        return;
    }
    V3 *pv = &p->unk_5c;
    v.x = p->unk_5c.x;
    v.y = pv->y;
    v.z = pv->z;
    func_020e769c(&o->unk_1c0, func_02002bdc(&o->unk_1a8, (s32 *)&v), 0x222);
    func_ov004_0223257c(&o->unk_1a8, o->unk_210, o->unk_1c0);
    if (p->unk_98 != 0) {
        if (o->unk_1c4 != 0) func_020e769c(&o->unk_1c4, 0, 0x222);
        if (o->unk_1a8.y != 0x199a) func_020e759c(&o->unk_1a8.y, 0x199a, o->unk_224);
        o->unk_259 = 0;
    } else {
        func_ov004_02230238(o);
        o->unk_259++;
        if (o->unk_259 >= 0x46) {
            o->unk_255 = 0;
            o->unk_1ee = 2;
            o->unk_158 = 0;
            o->unk_259 = 0;
            return;
        }
    }
    long long d = func_020e9600(&v, &o->unk_1a8);
    if (d < 0x4000) {
        if ((u8)o->unk_256s != 0) {
            o->unk_255 = 2;
            o->unk_158 = 0;
        }
    } else if (0x10000 < d) {
        o->unk_255 = 0;
        o->unk_158 = 0;
    }
    o->unk_110 = 0x1000;
}

extern "C" void func_ov004_022302b4(E75c *o) {
    P *p = func_020947f0(4);
    if (p == 0) {
        o->unk_255 = 0;
        return;
    }
    if (o->unk_1c4 != 0) func_020e769c(&o->unk_1c4, 0, 0x16c);
    if (o->unk_1a8.y != 0x199a) func_020e759c(&o->unk_1a8.y, 0x199a, o->unk_224);
    switch (o->unk_257) {
    case 1:
        func_ov004_022301b4(o);
        break;
    case 2:
        func_ov004_0223015c(o);
        break;
    case 0:
        func_ov004_022301fc(o);
        break;
    }
    func_020e769c(&o->unk_1c0, func_02002bdc(&o->unk_1a8, (s32 *)p), 0x222);
    long long d = func_020e9600(p, &o->unk_1a8);
    if (0x10000 < d) {
        o->unk_255 = 0;
        o->unk_158 = 0;
    } else if (0x4000 < d) {
        o->unk_255 = 1;
        o->unk_158 = 0;
    }
    o->unk_110 = 0x1000;
}

extern "C" void func_ov004_02230238(E75c *o) {
    o->unk_1a8.y = o->unk_1a8.y + o->unk_224 * o->unk_1ca;
    if (func_ov004_02231e28(0, 100) < 15) o->unk_1ca *= -1;
    if (o->unk_1a8.y > o->unk_1cc) {
        o->unk_1ca = -1;
        o->unk_1a8.y = o->unk_1cc;
    } else if (o->unk_1a8.y < o->unk_228) {
        o->unk_1ca = 1;
        o->unk_1a8.y = o->unk_228;
    }
}

extern "C" void func_ov004_022301fc(E75c *o) {
    if (func_ov004_02231e28(0, 100) < 15) {
        o->unk_257 = 1;
        o->unk_258 = func_ov004_02231e28(8, 0xd);
        o->unk_158 = 0;
    }
}

extern "C" void func_ov004_022301b4(E75c *o) {
    func_ov004_0223257c(&o->unk_1a8, 0x266, o->unk_1c0);
    s16 t = func_ov004_02231e3c(0x168, 0);
    func_ov004_0223257c(&o->unk_1a8, 0x52, t);
    o->unk_257 = 2;
}

extern "C" void func_ov004_0223015c(E75c *o) {
    func_ov004_0223257c(&o->unk_1a8, 0xcd, -o->unk_1c0);
    if (o->unk_158 % 4 == 1) o->unk_257 = 1;
    if (o->unk_158 >= o->unk_258) o->unk_257 = 0;
}

extern "C" void _ZN18Unk_ov004_0224e7148vfunc_00Ev(E714 *o) {
    o->unk_1e8 = o->unk_15c;
    func_02055488(&o->unk_64, (void *)func_ov004_0222ef04, o);
    func_ov004_0222dea8(o);
}

extern "C" void _ZN18Unk_ov004_0224e7148vfunc_04Ev(E714 *o) {
    switch (o->unk_255) {
    case 0:
        func_ov004_02230034(o);
        break;
    case 1:
        func_ov004_0222fff8(o);
        break;
    }
    func_ov004_0222e288(o, 0x333);
    o->unk_158 = o->unk_158 + 1;
    func_ov004_0222ede0(o);
}

extern "C" void func_ov004_02230034(E714 *o) {
    if (o->unk_1ee == 2) {
        if (o->unk_259 != 0) {
            if (func_ov004_02231e28(0, 100) < 15) {
                o->unk_255 = 1;
                return;
            }
            o->unk_259 = 0;
        } else {
            if (func_ov004_02231e28(0, 100) < 0x46) {
                o->unk_255 = 1;
                return;
            }
        }
    }
    (o->*data_ov004_02251e5c[o->unk_1ee])();
    func_ov004_02232548(o);
    if (o->unk_1ee != 2 && o->unk_1ee != 6) {
        func_ov004_02232130(o);
        func_ov004_02231f98(o, 0x1554, 0x3e8);
        func_ov004_0222e2f4(o);
    }
}

extern "C" void func_ov004_0222fff8(E714 *o) {
    (o->*data_ov004_02251e5c[o->unk_1ee])();
    func_ov004_0222fe1c(o);
}

extern "C" void func_ov004_0222fe1c(E714 *o) {
    switch (o->unk_1ee) {
    case 0:
    case 2:
        break;
    case 3:
        o->unk_23c = o->unk_23c + 1;
        break;
    case 5:
        o->unk_23c = o->unk_23c - 1;
        break;
    case 4:
        if (o->unk_258 == 0) o->unk_158 = 0;
        break;
    case 1: {
        o->unk_1a8.y -= o->unk_224 * 2;
        if (o->unk_1a8.y < o->unk_228) o->unk_1a8.y = o->unk_228;
        return;
    }
    }
    {
        s32 a = -o->unk_23c;
        a *= o->unk_256s;
        s32 b = o->unk_20c * 1000;
        b >>= 12;
        o->unk_1c4 = a * b;
    }
    {
        s32 v = o->unk_1c4;
        if (v <= -0x1554) o->unk_1c4 = -0x1554;
        else if (v >= 0x1554) o->unk_1c4 = 0x1554;
    }
    o->unk_1a8.y += o->unk_224 * o->unk_256s;
    switch (o->unk_258) {
    case 0:
        if (o->unk_1a8.y > 0x299a) {
            if (o->unk_1ee == 4) {
                o->unk_257++;
                if (o->unk_257 >= 0x14) {
                    o->unk_1ee = 5;
                    o->unk_258 = 1;
                    o->unk_257 = 0;
                }
            }
        }
        break;
    case 1:
        o->unk_1a8.y = o->unk_1a8.y - func_01ffcb0c(0x1800, o->unk_224 * o->unk_256s);
        if (o->unk_1ee == 6) {
            if (o->unk_1a8.y < o->unk_1cc) {
                o->unk_256s = 1;
                o->unk_255 = 0;
                o->unk_258 = 0;
                o->unk_259 = 1;
            } else {
                o->unk_1ee = 2;
                o->unk_256s = -1;
                o->unk_258 = 2;
            }
        }
        break;
    case 2:
        if (o->unk_1a8.y < o->unk_1cc) {
            if (o->unk_1ee == 2) {
                o->unk_256s = 1;
                o->unk_255 = 0;
                o->unk_258 = 0;
                o->unk_259 = 1;
            }
        }
        break;
    }
    {
        s32 t = o->unk_1a8.y;
        if (t > 0x299a) o->unk_1a8.y = 0x299a;
        else if (t < o->unk_228) o->unk_1a8.y = o->unk_228;
    }
}

extern "C" void _ZN18Unk_ov004_0224e6fc8vfunc_00Ev(E6fc *o) {
    o->unk_50 = o;
    s32 *p = &o->unk_15c;
    o->unk_1e8 = *p;
    o->unk_1e9 = *p;
    Unk_ov004_0222fd7c_W *w = (Unk_ov004_0222fd7c_W *)o;
    if (*p == 0x26) {
        w->w[0] = 0x9e00;
        w->w[1] = 0x1000;
        w->w[2] = 0x14700;
        w->w[3] = 0xa100;
        w->w[4] = 0xb00;
        w->w[5] = 0x14a00;
    } else if (*p == 0xc) {
        w->w[0] = 0x15900;
        w->w[1] = 0x1000;
        w->w[2] = 0x13900;
    }
    func_ov004_0222dea8(o);
}

extern "C" void _ZN18Unk_ov004_0224e6fc8vfunc_04Ev(E6fc *o) {
    if (o->unk_15c == 0x26) {
        func_ov004_0222fbe0(o);
    } else if (o->unk_15c == 0xc) {
        func_ov004_0222fafc(o);
    }
    func_ov004_0222e288(o, 0x666);
    o->unk_158++;
}

extern "C" void func_ov004_0222fbe0(E6fc *o) {
    if (func_020e96a4(&o->unk_1a8, o->unk_258) <= 0x1000) {
        o->unk_255 = 1;
    } else {
        o->unk_255 = 0;
    }
    if (o->unk_256 == 0) {
        if (o->unk_1ee != 2 && o->unk_1ee != 6) {
            func_ov004_022320c8(o);
            func_ov004_02231eec(o, 0x1554);
        }
        (o->*data_ov004_02251e5c[o->unk_1ee])();
        func_ov004_0222e2f4(o);
        if (func_ov004_02231dec(&o->unk_1c0, &o->unk_1a8, o->unk_258, 0x1000)) {
            if (o->unk_278 >= o->unk_274) {
                o->unk_278 = 0;
                o->unk_256 = 1;
                o->unk_274 = func_ov004_02231e28(200, 0x140);
            }
            {
                u8 a = o->unk_1e8;
                u8 *p = &o->unk_252;
                if (*p != a) {
                    if (a != o->unk_15c) {
                        *p = a;
                        o->unk_256 = 2;
                    }
                }
            }
        } else {
            u8 a = o->unk_1e8;
            u8 *p = &o->unk_252;
            if (*p != a) {
                if (a != o->unk_15c) {
                    *p = a;
                    if (o->unk_1ee != 1) {
                        func_ov004_0222ed24(o, &data_ov004_02251e94[o->unk_1e8]->unk_1a8);
                    }
                }
            }
        }
        o->unk_278++;
    } else {
        func_ov004_0222fa5c(o);
    }
    func_ov004_0222fabc(o);
}

extern "C" void func_ov004_0222fafc(E6fc *o) {
    if (o->unk_1ee != 2 && o->unk_1ee != 6) {
        func_ov004_02232130(o);
        func_ov004_02232068(o);
    }
    (o->*data_ov004_02251e5c[o->unk_1ee])();
    func_ov004_0222e2f4(o);
    if (func_ov004_02231dec(&o->unk_1c0, &o->unk_1a8, o->unk_258, 0x1000)) {
        func_ov004_02232548(o);
    } else {
        if (*(u8 *)&o->unk_1fc != 0) {
            o->unk_1ee = 2;
            *(u8 *)&o->unk_1fc = 0;
        }
    }
    {
        u8 a = o->unk_1e8;
        u8 *p = &o->unk_252;
        if (*p != a) {
            if (a != o->unk_15c) {
                *p = a;
                if (o->unk_1ee != 1) {
                    func_ov004_0222ed24(o, &data_ov004_02251e94[o->unk_1e8]->unk_1a8);
                }
            }
        }
    }
    func_ov004_0222ede0(o);
}

extern "C" void func_ov004_0222fabc(E6fc *o) {
    u32 buf[4];
    if (func_ov004_0222ee2c(o, (V3 *)buf)) {
        if (o->unk_255 != 0) {
            if (o->unk_256 != 3) {
                o->unk_256 = 2;
            }
        } else {
            func_ov004_0222ed24(o, (V3 *)buf);
        }
    }
}

extern "C" void func_ov004_0222fa5c(E6fc *o) {
    switch (o->unk_256) {
    case 1: {
        func_ov004_0222f968(o, 0);
        u8 a = o->unk_1e8;
        u8 *p = &o->unk_252;
        if (*p != a) {
            if (a != o->unk_15c) {
                *p = a;
                o->unk_256 = 2;
            }
        }
        break;
    }
    case 2:
        func_ov004_0222f968(o, 1);
        break;
    case 3:
        func_ov004_0222f8fc(o);
        break;
    }
}

extern "C" void func_ov004_0222f968(E6fc *o, s32 f) {
    if (o->unk_255 == 0) {
        o->unk_252 = o->unk_15c;
        o->unk_256 = 0;
        return;
    }
    if (o->unk_1a8.y > o->unk_268) {
        if (f != 0) {
            func_020e759c(&o->unk_1a8.y, o->unk_268, o->unk_224 << 2);
        } else {
            func_020e759c(&o->unk_1a8.y, o->unk_268, o->unk_224);
        }
    }
    if (func_020e96a4(&o->unk_1a8, &o->unk_264) <= 0x800) {
        if (o->unk_1a8.y <= o->unk_268) {
            o->unk_256 = 3;
            o->unk_158 = 0;
            o->unk_270 = func_ov004_02231e28(0x3c, 0x78);
        }
    } else {
        o->unk_1c0 = func_02002bdc(&o->unk_1a8, &o->unk_264);
        if (f != 0) {
            func_ov004_0223257c(&o->unk_1a8, o->unk_210 << 1, o->unk_1c0);
        } else {
            func_ov004_0223257c(&o->unk_1a8, o->unk_210 >> 1, o->unk_1c0);
        }
    }
}

extern "C" void func_ov004_0222f8fc(E6fc *o) {
    func_020e759c(&o->unk_1a8, o->unk_264, o->unk_210);
    func_020e759c(&o->unk_1a8.z, o->unk_26c, o->unk_210);
    if (o->unk_158 > o->unk_270) {
        o->unk_256 = 0;
        o->unk_158 = 0;
        o->unk_1ee = 2;
    }
}

extern "C" void _ZN18Unk_ov004_0224e84c8vfunc_00Ev(E84c *o) {
    o->unk_1fc = 0xc800;
    o->unk_200 = 0;
    o->unk_204 = 0x14a00;
}

extern "C" void _ZN18Unk_ov004_0224e84c8vfunc_04Ev(E84c *o) {
    switch (o->unk_21c) {
    case 2:
        func_ov004_0222f7d4(o);
        break;
    case 4:
        func_ov004_0222f6c4(o);
        break;
    case 5:
        func_ov004_0222f5e4(o);
        break;
    case 6:
        if (o->unk_158 >= *(u16 *)((u8 *)o + 0x212)) {
            o->unk_158 = 0;
            o->unk_21c = 2;
        }
        break;
    }
    o->unk_158++;
}

extern "C" void func_ov004_0222f7d4(E84c *o) {
    o->unk_1c0 += func_ov004_02231e3c(0x5a, 0);
    *(u8 *)&o->unk_210 = func_ov004_02231e28(0x14, 0x78);
    *(u16 *)((u8 *)o + 0x212) = func_ov004_02231e28(0x3c, 0xf0);
    o->unk_20c = func_ov004_02231e74(2, 4) / 100;
    o->unk_158 = 0;
    o->unk_1a8.y = 0x700;
    o->unk_110 = o->unk_218 = 0x1000;
    o->unk_21c = 4;
}

extern "C" void func_ov004_0222f6c4(E84c *o) {
    s32 r;
    func_ov004_02231dec(&o->unk_1c0, &o->unk_1a8, &o->unk_1fc, 0x1600);
    r = o->unk_20c;
    o->unk_1a8.x += func_01ffcb0c(r, data_02135f44[((u16)o->unk_1c0 >> 4) * 2]);
    o->unk_1a8.z += func_01ffcb0c(r, data_02135f44[((u16)o->unk_1c0 >> 4) * 2 + 1]);
    o->unk_208 += 0x2000;
    r = r * 7 / 10;
    o->unk_1a8.x += func_01ffcb0c(r, data_02135f44[((u16)o->unk_208 >> 4) * 2]);
    o->unk_1a8.z += func_01ffcb0c(r, data_02135f44[((u16)o->unk_208 >> 4) * 2]);
    if (o->unk_158 >= *(u8 *)&o->unk_210) {
        o->unk_158 = 0;
        o->unk_21c = 5;
        o->unk_218 >>= 1;
        o->unk_110 = o->unk_218;
    }
}

extern "C" void func_ov004_0222f5e4(E84c *o) {
    s32 t = o->unk_20c;
    s32 r = t - (o->unk_158 << 3);
    if (r < 0) {
        r = 0;
        o->unk_158 = r;
        o->unk_110 = r;
        o->unk_21c = 6;
    }
    o->unk_1a8.x += func_01ffcb0c(r, data_02135f44[((u16)o->unk_1c0 >> 4) * 2]);
    o->unk_1a8.z += func_01ffcb0c(r, data_02135f44[((u16)o->unk_1c0 >> 4) * 2 + 1]);
    o->unk_208 += 0x2000;
    r = r * 7 / 10;
    o->unk_1a8.x += func_01ffcb0c(r, data_02135f44[((u16)o->unk_208 >> 4) * 2]);
    o->unk_1a8.z += func_01ffcb0c(r, data_02135f44[((u16)o->unk_208 >> 4) * 2]);
}

extern "C" void _ZN18Unk_ov004_0224e81c8vfunc_00Ev(E81c *o) {
    o->unk_50 = o;
    o->unk_1e8 = o->unk_15c;
    o->unk_1e9 = o->unk_15c;
    o->unk_1c8 = 1;
    func_ov004_0222dea8(o);
    func_02055488((u8 *)o + 0x64, (void *)func_ov004_0222ef04, o);
}

extern "C" void _ZN18Unk_ov004_0224e81c8vfunc_04Ev(E81c *o) {
    if (o->unk_256 == 0) {
        if (func_020565e8(&o->unk_100, (u16)(o->unk_104.mid - 1))) {
            o->unk_256 = 1;
            func_ov004_022321e8(o, 1);
        }
    }
    if (o->unk_1ee == 2) {
        o->unk_255 = 0;
        if (func_020565e8(&o->unk_100, (u16)(o->unk_104.mid - 1))) {
            o->unk_256 = 0;
            func_ov004_022321e8(o, 0);
            o->unk_255 = 1;
        }
    } else if (o->unk_1ee != 2) {
        if (o->unk_255 == 0) {
            o->unk_255 = 1;
        }
    }
    if (o->unk_255 != 0) {
        (o->*data_ov004_02251e5c[o->unk_1ee])();
        func_ov004_0222f284(o);
        if (o->unk_1ee == 4) {
            func_ov004_022320c8(o);
            func_ov004_02231eec(o, 0x1554);
        }
    }
    if (o->unk_1ee != 6 && o->unk_1ee != 5) {
        func_ov004_0222e2f4(o);
    }
    if (o->unk_256 == 0) {
        func_ov004_0222e288(o, 0xccd);
    } else {
        func_ov004_0222e288(o, 0x666);
    }
    func_ov004_0222e238(o);
    func_ov004_0222e61c(o);
    func_ov004_0222e7a4(o);
    o->unk_158++;
    if (func_ov004_0222ede0(o)) {
        o->unk_256 = 0;
        func_ov004_022321e8(o, 0);
        o->unk_255 = 1;
    }
}

extern "C" void func_ov004_0222f284(E864 *e) {
    s32 c = func_01ffcb0c(0x1800, (s32)(data_ov004_022402ec[e->unk_15c].unk_03 << 12) >> 7);
    s32 a = e->unk_1a8.z + c;
    s32 b = e->unk_1a8.z - c;
    s32 t = e->unk_1a8.x;
    if (t < 0x4000 || t > 0x1e000) goto end;
    if (e->unk_1ee == 1) {
        e->unk_1fc = 0;
        e->unk_1fd = 0;
        goto end;
    }
    {
        s32 w = e->unk_1c0;
        if (w < 0) w = -w;
        w = (s16)w;
        if (a >= 0x15dc2 && e->unk_1fc != 0) goto go;
        if (a <= 0x11000 && e->unk_1fc != 0) goto go;
        if (a >= 0x15dc2 && w < 0x4000 && e->unk_1fc == 0) goto go;
        if (b > 0x11000 || w <= 0x4000 || e->unk_1fc != 0) goto fail2;
    }
go:
    if (e->unk_1f1 != 0) goto fail1;
    if (e->unk_1fd == 0) {
        if (func_ov004_02231e28(0, 0x64) < 0x4b) {
            e->unk_1fd = 1;
        } else {
            e->unk_1fd = 2;
            goto end;
        }
    } else {
        if (e->unk_1eb >= 2) {
            e->unk_1fd = 1;
            e->unk_1fc = 0;
            e->unk_1eb = 0;
        }
    }
    if (e->unk_1fd == 1) {
        if (e->unk_1fc == 0) {
            func_ov004_0223230c(e, 0, 1, 4);
            e->unk_1fc = 1;
            if (e->unk_1a8.x >= 0xb000 && e->unk_1a8.x <= 0x17000) {
                if (func_ov004_02231e28(0, 0x64) < 0x14) {
                    { s16 k = -1; e->unk_200 *= k; }
                }
            }
        }
        e->unk_22f = 0;
        e->unk_1c0 = e->unk_1c0 + e->unk_200;
        if (e->unk_1ee == 5) {
            e->unk_1ee = 4;
            e->unk_158 = 0;
        }
    }
    goto end;
fail1:
    e->unk_1fc = 0;
    e->unk_1fd = 0;
    goto end;
fail2:
    e->unk_1fc = 0;
    e->unk_1fd = 0;
end:;
}

extern "C" void _ZN18Unk_ov004_0224e7ec8vfunc_00Ev(E7ec *e) {
    e->unk_1c7 = 0;
    e->unk_1a8.x = 0x16f00;
    e->unk_1a8.y = 0xfffff400;
    e->unk_1a8.z = 0x13300;
    e->unk_1c0 = 0;
}

extern "C" void func_ov004_0222f1d0(E864 *e) {
    e->unk_50 = e;
    s32 s = e->unk_15c;
    if ((u32)(s - 0x2d) <= 1) {
        e->unk_1c8 = 0;
    } else if (s == 0x37) {
        e->unk_1c8 = 2;
    } else {
        e->unk_1c8 = 1;
    }
    s32 *p = &e->unk_15c;
    e->unk_1e8 = *p;
    e->unk_1e9 = *p;
    func_ov004_0222dea8(e);
    if (e->unk_1c6) {
        func_02055488((u8 *)e + 0x64, (void *)func_ov004_0222ef04, e);
    }
}

extern "C" void func_ov004_0222f0e4(E864 *e) {
    func_ov004_0222dfbc(e);
    (e->*data_ov004_02251e5c[e->unk_1ee])();
    {
        s32 s = e->unk_15c;
        if (s != 0x2e && s != 0x2d) {
            if (s == 0x29 || s == 0x37 || s == 0x2b) {
                func_ov004_0222e820(e);
            }
            func_ov004_0222e7a4(e);
            func_ov004_0222e61c(e);
        } else {
            if (e->unk_1a8.z > 0x13dc2) {
                e->unk_1a8.z = 0x13dc2;
            }
        }
    }
    if (e->unk_1ee != 2 && e->unk_1ee != 6) {
        if (e->unk_15c == 0x2b || e->unk_15c == 0x37) {
            func_ov004_022320c8(e);
            func_ov004_02231eec(e, 0x71c);
        } else {
            func_ov004_022320c8(e);
            func_ov004_02231eec(e, 0xe38);
        }
        func_ov004_0222e2f4(e);
    }
    func_ov004_0222e288(e, 0x333);
    func_ov004_0222e238(e);
    e->unk_158++;
    func_ov004_0222ede0(e);
}

extern "C" void func_ov004_0222f090(E864 *e) {
    if (data_ov004_022402ec[e->unk_15c].unk_00 == 0) {
        e->unk_50 = e;
    }
    e->unk_1e8 = e->unk_15c;
    func_ov004_0222dea8(e);
    if (e->unk_1c6) {
        func_02055488((u8 *)e + 0x64, (void *)func_ov004_0222ef04, e);
    }
}

extern "C" void func_ov004_0222ef5c(E864 *e) {
    (e->*data_ov004_02251e5c[e->unk_1ee])();
    if (data_ov004_022402ec[e->unk_15c].unk_00 == 0) {
        u8 *p1 = &e->unk_1e8;
        u8 b = *p1;
        if (e->unk_252 != b && b != e->unk_15c) {
            e->unk_252 = b;
            if (e->unk_1ee != 1) {
                func_ov004_0222ed24(e, (V3 *)((u8 *)data_ov004_02251e94[*p1] + 0x1a8));
            }
        }
    }
    func_ov004_02232548(e);
    u8 m = e->unk_1ee;
    if (m == 5) {
        if (e->unk_20c < 0xcd) goto skip;
    }
    if (m == 6) goto skip;
    func_ov004_02232130(e);
    {
        s32 s = e->unk_15c;
        if (s == 0x1d) {
            func_ov004_02231f98(e, 0xe38, 0x4b0);
        } else {
            u32 k = data_ov004_022402ec[s].unk_00;
            if (k == 0) {
                func_ov004_02232068(e);
            } else if (k >= 4) {
                func_ov004_02231f98(e, 0x71c, 0x384);
            } else {
                func_ov004_02231f98(e, 0x1554, 0x384);
            }
        }
    }
    func_ov004_0222e2f4(e);
skip:
    func_ov004_0222e288(e, 0x333);
    e->unk_158++;
    func_ov004_0222ede0(e);
}

extern "C" void func_ov004_0222ef40(Cb *c) {
    void *m = c->unk_04->unk_2c;
    if (m) {
        func_02054420((u8 *)m + 0x64, c);
    }
}

extern "C" void func_ov004_0222ef24(Cb *c) {
    void *m = c->unk_04->unk_2c;
    if (m) {
        func_020543b4((u8 *)m + 0x64, c);
    }
}

extern "C" void func_ov004_0222ef04(Cb *c) {
    c->unk_24 = (void *)func_ov004_0222ef40;
    c->unk_92 = 1;
    c->unk_24 = (void *)func_ov004_0222ef24;
    c->unk_92 = 2;
}

extern "C" BOOL func_ov004_0222ee2c(E864 *e, V3 *out) {
    BOOL r = FALSE;
    u8 b;
    s32 t;
    V3 v;
    if (func_020b6080(func_020b50b4(), &v, &t, &b)) {
        if (!Unk_ov004_0222ee2c_Both()) {
            if (t == 0x13) {
                if (b == 0) {
                    if (func_020e9600(&e->unk_1a8, &v) <= 0x9000) {
                        s32 d = e->unk_1a8.y - v.y;
                        if (d < 0) d = -d;
                        if (d <= 0x3000) {
                            out->x = v.x;
                            out->y = v.y;
                            out->z = v.z;
                            r = TRUE;
                        }
                    }
                } else if (b == 1) {
                    if (func_020e9600(&e->unk_1a8, &v) <= 0x9000) {
                        s32 d = e->unk_1a8.y - v.y;
                        if (d < 0) d = -d;
                        if (d <= 0x3000) {
                            out->x = v.x;
                            out->y = v.y;
                            out->z = v.z;
                            r = TRUE;
                        }
                    }
                }
            }
        }
    }
    return r;
}

extern "C" BOOL func_ov004_0222ede0(E864 *e) {
    BOOL r = FALSE;
    if (e->unk_253 != 0) {
        if (e->unk_1ee != 1) {
            e->unk_253 = r;
        }
        return FALSE;
    }
    V3 v;
    if (func_ov004_0222ee2c(e, &v)) {
        func_ov004_0222ed24(e, &v);
        r = TRUE;
        e->unk_253 = r;
    }
    return r;
}

extern "C" void func_ov004_0222ed24(E864 *e, V3 *p) {
    if (e->unk_253 == 0) {
        e->unk_1c4 = 0;
        e->unk_1ee = 1;
        e->unk_158 = 0;
        if ((u8)(e->unk_164 + 0xfc) <= 1) {
            if (e->unk_254 >= 0x7d) {
                e->unk_24c = func_02002bdc(p, &e->unk_1a8);
            } else if (e->unk_1c0 >= 0) {
                e->unk_24c = func_ov004_02231e28(0x38e4, 0x471c);
            } else {
                e->unk_24c = -func_ov004_02231e28(0x38e4, 0x471c);
            }
        } else {
            e->unk_24c = func_02002bdc(p, &e->unk_1a8);
        }
        if (e->unk_1fd == 1) {
            func_ov004_022321b4(e);
        }
    }
}

extern "C" void _ZN18Unk_ov004_0224e8648vfunc_00Ev(E864 *e) {
    (e->*data_ov004_02251de4[data_ov004_02251d60].a)();
}

extern "C" void _ZN18Unk_ov004_0224e8648vfunc_04Ev(E864 *e) {
    (e->*data_ov004_02251de4[data_ov004_02251d60].b)();
}

extern "C" void func_ov004_0222eb8c(E864 *e) {
    e->unk_20c = 0;
    if (e->unk_1fd == 2) {
        e->unk_1c2 = e->unk_1c2 + func_ov004_02231e3c(0xb4, 0x96);
        e->unk_1eb++;
    } else {
        e->unk_1c2 = e->unk_1c2 + func_ov004_02231e3c(e->unk_230, 0);
        e->unk_1eb = 0;
    }
    e->unk_158 = 0;
    e->unk_202 = func_ov004_02231e28(e->unk_205, e->unk_204);
    e->unk_203 = func_ov004_02231e28(e->unk_207, e->unk_206);
    e->unk_23c = 0;
    if (e->unk_1e8 == e->unk_15c) {
        s32 v = e->unk_1a8.y;
        if (v >= e->unk_1cc) {
            e->unk_1ca = -1;
        } else if (v <= e->unk_228) {
            e->unk_1ca = 1;
        } else {
            s32 t = func_ov004_02231e28(0, 2);
            e->unk_1ca = t > 0 ? 1 : -1;
        }
    }
    e->unk_24e = 0;
    e->unk_1ee = 3;
    e->unk_22f = 1;
}

extern "C" void func_ov004_0222eb30(E864 *e) {
    s32 *p = &e->unk_20c;
    *p = e->unk_214 * e->unk_158;
    func_ov004_0223257c(&e->unk_1a8, *p, e->unk_1c0);
    if (e->unk_20c >= e->unk_210) {
        e->unk_158 = 0;
        e->unk_1ee = 4;
    }
}

extern "C" void func_ov004_0222ead8(E864 *e) {
    s32 *p = &e->unk_20c;
    *p = e->unk_210;
    func_ov004_0223257c(&e->unk_1a8, *p, e->unk_1c0);
    if (e->unk_158 >= e->unk_202) {
        e->unk_158 = 0;
        e->unk_1ee = 5;
    }
}

extern "C" void func_ov004_0222ea74(E864 *e) {
    s32 t = e->unk_210;
    s32 *p = &e->unk_20c;
    *p = t - e->unk_218 * e->unk_158;
    func_ov004_0223257c(&e->unk_1a8, *p, e->unk_1c0);
    if (e->unk_20c <= 0) {
        e->unk_20c = 0;
        e->unk_158 = 0;
        e->unk_1ee = 6;
    }
}

extern "C" void func_ov004_0222ea40(E864 *e) {
    e->unk_20c = 0;
    if (e->unk_158 >= e->unk_203) {
        e->unk_158 = 0;
        e->unk_1ee = 2;
    }
}

extern "C" void func_ov004_0222e9ac(E864 *e) {
    if (e->unk_158 <= 0x28) {
        if ((u8)(e->unk_164 + 0xfc) <= 1) {
            func_020e7754(&e->unk_1c0, e->unk_24c, 3, 0xaaa);
        } else {
            func_020e7754(&e->unk_1c0, e->unk_24c, 2, 0x4000);
        }
        s32 *p = &e->unk_20c;
        *p = e->unk_210;
        func_ov004_0223257c(&e->unk_1a8, *p, e->unk_1c0);
    } else {
        e->unk_253 = 0;
        e->unk_1ee = 2;
    }
}

extern "C" void func_ov004_0222e9a8() {}

extern "C" void func_ov004_0222e8d8(E864 *e) {
    e->unk_158 = 1;
    e->unk_202 = func_ov004_02231e28(e->unk_205, e->unk_204);
    e->unk_203 = 0;
    e->unk_23c = 0;
    if (e->unk_1f1 != 0) {
        e->unk_1c2 += func_ov004_02231e3c(0x1e, 0xf);
    }
    if (e->unk_1e8 == e->unk_15c) {
        if (e->unk_1a8.y >= e->unk_1cc) {
            e->unk_1ca = -1;
        } else if (e->unk_1a8.y <= e->unk_228) {
            e->unk_1ca = 1;
        } else {
            e->unk_1ca = func_ov004_02231e28(0, 2) > 0 ? 1 : -1;
        }
    }
    e->unk_1ee = 3;
}

extern "C" void func_ov004_0222e874(E864 *e) {
    s32 t = e->unk_210;
    s32 *p = &e->unk_20c;
    *p = t - e->unk_218 * e->unk_158;
    func_ov004_0223257c(&e->unk_1a8, *p, e->unk_1c0);
    if (e->unk_20c <= 0xf6) {
        e->unk_20c = 0xf6;
        e->unk_158 = 3;
        e->unk_1ee = 2;
    }
}

extern "C" void func_ov004_0222e820(R *e) {
    s32 v = e->unk_1c0;
    s32 t;
    if (v < 0) t = -v; else t = v;
    if (t > 0x5554) {
        if (v >= 0) {
            e->unk_1c0 = 0x5554;
            return;
        }
        e->unk_1c0 = -0x5554;
        return;
    } else if (t < 0x2aac) {
        if (v >= 0) {
            e->unk_1c0 = 0x2aac;
            return;
        }
        e->unk_1c0 = -0x2aac;
    }
}

extern "C" void func_ov004_0222e7a4(R *e) {
    s32 lo, hi;
    if (e->unk_1c8 == 1) {
        lo = 0;
        hi = 0x22;
    } else {
        lo = -2;
        hi = 0x24;
    }
    s32 x = e->unk_1a8.x >> 12;
    if (x <= lo) {
        e->unk_1c0 = 0x4000;
        e->unk_1a8.y = (data_ov004_022402ec[e->unk_15c].unk_04 << 12) >> 6;
    } else if (x >= hi) {
        e->unk_1c0 = -0x4000;
        e->unk_1a8.y = (data_ov004_022402ec[e->unk_15c].unk_04 << 12) >> 6;
    }
}

extern "C" void func_ov004_0222e61c(E864 *e) {
    if (e->unk_1ee != 1) {
        if (e->unk_40 != 0) {
            if (e->unk_1f1 == 0) {
                func_ov004_0222e48c(e);
                e->unk_1ca = 1;
            } else {
                u32 c5 = e->unk_1e8;
                if (e->unk_252 != c5) {
                    e->unk_252 = c5;
                    e->unk_254 = 0;
                } else {
                    u8 *c = &e->unk_254;
                    *c = *c + 1;
                    u32 n = *c;
                    if (n >= 0x7d) {
                        R *o = data_ov004_02251e94[e->unk_1e8];
                        if (!o) {
                            return;
                        } else {
                            u32 ra = data_ov004_022402ec[e->unk_15c].unk_03;
                            u32 rb = data_ov004_022402ec[o->unk_15c].unk_03;
                            if (ra <= rb) {
                                func_ov004_0222ed24(e, &o->unk_1a8);
                                e->unk_254 = 0;
                                return;
                            } else if (n >= 0x91) {
                                func_ov004_0222ed24(e, &o->unk_1a8);
                                e->unk_254 = 0;
                                return;
                            }
                        }
                    }
                }
                {
                    if (e->unk_1ee == 6 || (e->unk_1ee == 5 && e->unk_15c >= 0x23)) {
                        e->unk_1ee = 2;
                    }
                    u32 m = e->unk_1ea;
                    if ((m & 8) != 0 || (m & 0x10) != 0) {
                        if (e->unk_1ee != 4) {
                            u32 a = data_ov004_022402ec[e->unk_15c].unk_00;
                            u32 b = data_ov004_022402ec[e->unk_1e8].unk_00;
                            if (a <= b) {
                                e->unk_1ee = 4;
                                e->unk_158 = 0;
                            }
                        }
                    }
                    m = e->unk_1ea;
                    if (m >= 0x40) {
                        if (e->unk_1c9 == 0) {
                            func_ov004_0222e4f0(e);
                        }
                    } else if ((m & 0x20) != 0) {
                        e->unk_1ca = 1;
                        e->unk_1c9 = 1;
                    }
                    func_020e769c(&e->unk_1c0, e->unk_1ec, 0x38e);
                }
            }
        } else {
            func_ov004_0222e48c(e);
        }
    }
}

extern "C" void func_ov004_0222e4f0(R *e) {
    s32 a;
    R** slot;
    V3* v;
    R* o;
    s32 c;
    s32 b;
    slot = &data_ov004_02251e94[e->unk_1e8];
    o = *slot;
    if (o) {
        v = &o->unk_1a8;
        a = e->unk_1c0;
        if (a < 0) a = -a;
        b = o->unk_1c0;
        if (b < 0) c = -b; else c = b;
        if (a >= 0x4000 && c >= 0x4000) {
            if (e->unk_1a8.z > v->z) {
                e->unk_1ec = b + 0x8000;
            } else if (o->unk_1c9 == 0) {
                o->unk_1c9 = 1;
                (*slot)->unk_1e9 = e->unk_15c;
                (*slot)->unk_1ec = e->unk_1c0 + 0x8000;
            }
            func_ov004_0222e390(e, slot);
        } else if (a <= 0x4000 && c <= 0x4000) {
            if (e->unk_1a8.z < v->z) {
                e->unk_1ec = b + 0x8000;
            } else if (o->unk_1c9 == 0) {
                o->unk_1c9 = 1;
                (*slot)->unk_1e9 = e->unk_15c;
                (*slot)->unk_1ec = e->unk_1c0 + 0x8000;
            }
            func_ov004_0222e390(e, slot);
        } else {
            s32 r = func_02002bdc(v, &e->unk_1a8);
            s32 d = (s16)(r - e->unk_1c0);
            if (d < 0) {
                e->unk_1ec = r - 0x4000;
            } else {
                e->unk_1ec = r + 0x4000;
            }
        }
    }
}

extern "C" void func_ov004_0222e48c(R *e) {
    e->unk_1ea = 0;
    e->unk_1c9 = 0;
    e->unk_1ec = e->unk_1c0;
    u32 t = e->unk_1e8;
    if (t != (u32)e->unk_15c) {
        R *o = data_ov004_02251e94[t];
        if (o) {
            o->unk_1c9 = 0;
        }
        e->unk_1e8 = e->unk_15c;
        e->unk_1e9 = e->unk_15c;
    }
}

extern "C" s32 func_ov004_0222e3e0(R *a, R **b) {
    s32 r4 = (*b)->unk_1c0;
    s32 y, x;
    s32 t = (s16)(func_02002bdc(&a->unk_1a8, &(*b)->unk_1a8) - 0x4000);
    x = (s16)(a->unk_1c0 - t);
    y = (s16)(r4 - t);
    if (x * y < 0) {
        if (x < 0) x = -x;
        if (y < 0) y = -y;
        if ((x - 0x4000) * (y - 0x4000) < 0) return 0x40;
        return 0x80;
    } else if (x < 0) {
        if (x < 0) x = -x;
        if (y < 0) y = -y;
        if ((x - 0x4000) * (y - 0x4000) < 0) return 8;
        return 0x10;
    } else {
        if (x < 0) x = -x;
        if (y < 0) y = -y;
        if ((x - 0x4000) * (y - 0x4000) < 0) return 2;
        return 4;
    }
}

extern "C" void func_ov004_0222e390(R *a, R **b) {
    if (a->unk_1cc < (*b)->unk_1cc) {
        a->unk_1ca = -1;
        R *o = *b;
        if (o->unk_1c9 == 0) {
            o->unk_1ca = 1;
        }
    } else {
        a->unk_1ca = 1;
        R *o = *b;
        if (o->unk_1c9 == 0) {
            o->unk_1ca = -1;
        }
    }
}

extern "C" void func_ov004_0222e2f4(E864 *e) {
    if (e->unk_20c > 0x99a || e->unk_1ee != 5) {
        if (e->unk_1ee != 1) {
            if (e->unk_22f != 0) {
                BOOL r;
                if (data_ov004_022402ec[e->unk_15c].unk_00 >= 4) {
                    r = func_020e769c(&e->unk_1c0, e->unk_1c2, 0x88) ? TRUE : FALSE;
                } else {
                    r = func_020e769c(&e->unk_1c0, e->unk_1c2, 0x16c) ? TRUE : FALSE;
                }
                if (r) {
                    e->unk_22f = 0;
                }
            }
        }
    }
}

extern "C" void func_ov004_0222e288(E864 *e, s32 lo) {
    s32 v;
    u8 m = e->unk_1ee;
    if (m == 1) {
        v = 0x1800;
    } else {
        s32 t = e->unk_20c;
        if (m == 3) {
            t = t * 3;
        } else if (m == 5) {
            t = func_02133150(t, 3);
        }
        v = func_01ffcb0c(FX_Div(t, e->unk_210), 0x1800);
        if (v < lo) {
            v = lo;
        } else if (v > 0x1800) {
            v = 0x1800;
        }
    }
    e->unk_110 = v;
}

void Unk_ov004_0224e774::vfunc_00() {
}

void Unk_ov004_0224e774::vfunc_04() {
}

extern "C" void func_ov004_0222e238(R *e) {
    if (e->unk_1ee != 1) {
        s32 x = e->unk_1a8.x;
        if (x > 0x5000 && x < 0x1e000) {
        } else {
            func_ov004_0222e820(e);
            if (e->unk_1ee == 6) {
                e->unk_1ee = 2;
            }
        }
    }
}

void Unk_ov004_0224e6e8::vfunc_08(u32 a, u32 idx, u32 c) {
    R *q0 = unk_4c;
    if (q0) {
        R *p = q0;
        if (idx >= 0x38) {
            p->unk_1ea |= 0x20;
        } else {
            if (data_ov004_022402ec[idx].unk_00 != 0 || idx < 0x23) {
                R **q = &data_ov004_02251e94[idx];
                func_ov004_0222e0f0(this, &p, q);
                func_ov004_0222e0f0(this, q, &p);
            }
        }
    }
}

extern "C" void func_ov004_0222e0f0(void *unused, R **pp, R **q)
{
    (*pp)->unk_1f1++;
    R *o = *pp;
    u32 b;
    s32 a;
    a = o->unk_15c;
    b = o->unk_1e8;
    s32 c = (*q)->unk_15c;
    s32 r2 = func_ov004_0222e3e0(o, q);
    R *o2 = *pp;
    u32 r1 = o2->unk_1ea;
    o2->unk_1f4[c >> 5] |= 1 << (c & 31);
    if (b == a) {
        (*pp)->unk_1ea = r2 | r1;
        (*pp)->unk_1e8 = c;
        (*pp)->unk_1c9 = 0;
    } else {
        u32 rc = data_ov004_022402ec[c].unk_00;
        u32 rb = data_ov004_022402ec[b].unk_00;
        if (rb < rc) {
            (*pp)->unk_1ea = r2 | r1;
            (*pp)->unk_1e8 = c;
            (*pp)->unk_1c9 = 0;
        } else if (rb == rc) {
            if ((s32)r1 < r2) {
                (*pp)->unk_1ea = r2 | r1;
                (*pp)->unk_1e8 = c;
                (*pp)->unk_1c9 = 0;
            }
        }
    }
}

extern "C" void func_ov004_0222e060(R *self)
{
    s32 t0 = self->unk_15c;
    s32 c0 = self->unk_1e8;
    if (c0 != t0) {
        if ((self->unk_1f4[c0 >> 5] & (1 << (c0 & 31))) == 0) self->unk_1e8 = t0;
        u8 *p2 = &self->unk_1e9;
        s32 c1 = *p2;
        if ((self->unk_1f4[c1 >> 5] & (1 << (c1 & 31))) == 0) {
            *p2 = self->unk_15c;
            self->unk_1c9 = 0;
        }
    }
    self->unk_1f4[0] = 0;
    self->unk_1f4[1] = 0;
    self->unk_1f1 = 0;
    self->unk_1f0 = 0;
}

extern "C" void func_ov004_0222dfbc(E864 *self)
{
    if (self->unk_40 == 0 && self->unk_22f == 0 && self->unk_1f0 != 0) {
        s32 v = self->unk_1c0;
        if (v >= 0) {
            s32 a = v;
            if (a < 0) a = -a;
            if (a >= 0x4000) {
                func_020e769c(&self->unk_1c0, 0x471c, 0x222);
            } else {
                func_020e769c(&self->unk_1c0, 0x38e4, 0x222);
            }
        } else {
            s32 a = v;
            if (a < 0) a = -a;
            if (a <= -0x4000) {
                func_020e769c(&self->unk_1c0, -0x471c, 0x222);
            } else {
                func_020e769c(&self->unk_1c0, -0x38e4, 0x222);
            }
        }
    }
}

extern "C" void func_ov004_0222dea8(E864 *self)
{
    const Rec *t = data_ov004_022402ec;
    s32 *pi = &self->unk_15c;
    self->unk_210 = (s32)(t[*pi].unk_07 << 12) >> 10;
    self->unk_214 = (s32)(t[*pi].unk_05 << 12) >> 12;
    self->unk_218 = (s32)(t[*pi].unk_06 << 12) >> 13;
    self->unk_204 = t[*pi].unk_08;
    self->unk_205 = t[*pi].unk_09;
    self->unk_206 = t[*pi].unk_0a;
    self->unk_207 = t[*pi].unk_0b;
    self->unk_230 = t[*pi].unk_0c;
    self->unk_224 = (s32)(t[*pi].unk_0d << 12) >> 10;
    self->unk_1cc = ((s32)(t[*pi].unk_0e << 12) >> 5) - 0x1000;
    self->unk_228 = ((s32)(t[*pi].unk_0f << 12) >> 6) - 0x1000;
}

extern "C" BOOL func_ov004_0222de34(Mgr *self, s32 i)
{
    if (i < data_ov004_02251d64 || i >= data_ov004_0224e5f0) return FALSE;
    R **p = &data_ov004_02251e94[i];
    if (*p == NULL) return FALSE;
    (*p)->unk_15c = i;
    (*p)->unk_160 = 1;
    func_0209c25c((u8 *)self + 0x7f8, (u8 *)*p + 0x166);
    func_0209c0c8((u8 *)*p + 0x168);
    return TRUE;
}

extern "C" void func_ov004_0222dd3c(Mgr *self, s32 i)
{
    if (i >= data_ov004_02251d64 && i < data_ov004_0224e5f0) {
        R **p = &data_ov004_02251e94[i];
        s32 z = 0;
        s32 j;
        for (j = z; j < 4; j++) {
            if ((*p)->unk_54[j]) {
                func_020e8558((void *)(*p)->unk_54[j]);
                (*p)->unk_54[j] = z;
            }
        }
        (*p)->unk_160 = 0;
        func_020546ec((u8 *)*p + 0x64);
        func_02054b14((u8 *)*p + 0x64);
        func_0209c0b4((u8 *)*p + 0x168);
        func_0209c224((u8 *)self + 0x7f8, (u8 *)*p + 0x166);
        switch ((*p)->unk_15c) {
        case 0xb:
            if (data_ov004_02251d6c) {
                func_02003c30((u8 *)data_ov004_02251d6c + 0x1fc);
                data_ov004_02251d6c = 0;
            }
            break;
        case 0x24:
            if (data_ov004_02251d74) data_ov004_02251d74 = 0;
            break;
        case 0x23:
            if (data_ov004_02251d78) data_ov004_02251d78 = 0;
            break;
        }
        (*p)->unk_15c = -1;
    }
}

extern "C" BOOL _ZN18Unk_ov004_0224e87c8vfunc_00Ev(Mgr *self)
{
    func_0209c1a4((u8 *)self + 0x7f8, 0x38, 0x800, 0x80, 0xc00, (void *)func_0205bf84, (void *)func_0205bf68, 0);
    data_ov004_02251d60 = *(s32 *)&self->unk_04[4];
    if (data_ov004_02251d60 == 0) {
        self->unk_50[0].unk_50[0] = 0xc000;
        self->unk_50[0].unk_50[1] = 0x700;
        self->unk_50[0].unk_50[2] = 0x5600;
        self->unk_50[0].unk_50[3] = 0x1000;
        self->unk_50[0].unk_50[4] = 0x800;
        self->unk_50[1].unk_50[0] = 0x15200;
        self->unk_50[1].unk_50[1] = 0x700;
        self->unk_50[1].unk_50[2] = 0x6200;
        self->unk_50[1].unk_50[3] = 0x1000;
        self->unk_50[1].unk_50[4] = 0xd00;
        self->unk_50[2].unk_50[0] = 0x9c00;
        self->unk_50[2].unk_50[1] = 0x700;
        self->unk_50[2].unk_50[2] = 0x14b00;
        self->unk_50[2].unk_50[3] = 0xa00;
        self->unk_50[2].unk_50[4] = 0xa00;
        self->unk_50[3].unk_50[0] = 0x15900;
        self->unk_50[3].unk_50[1] = 0x700;
        self->unk_50[3].unk_50[2] = 0x13900;
        self->unk_50[3].unk_50[3] = 0x1000;
        self->unk_50[3].unk_50[4] = 0x800;
        *(u32 *)&self->unk_50[4].unk_50[0] = 0x14c00;
        self->unk_50[4].unk_50[1] = 0x700;
        self->unk_50[4].unk_50[2] = 0x14a00;
        self->unk_50[4].unk_50[3] = 0x700;
        self->unk_50[4].unk_50[4] = 0x700;
        data_ov004_0224e5f4 = 5;
        func_ov004_0222d874(self);
        func_020b68ec(func_020b50b4(), (u8 *)self + 0x2a8, &data_ov004_02251d9c, 0x11c00, 0x5c00, 0x3800, 0, 0x13, 0);
        func_020b68ec(func_020b50b4(), (u8 *)self + 0x550, &data_ov004_02251d84, 0x11c00, 0x5c00, 0x3800, 0, 0x13, 1);
    } else {
        self->unk_50[0].unk_50[0] = 0x8b00;
        self->unk_50[0].unk_50[1] = 0xfffff300;
        self->unk_50[0].unk_50[2] = 0x13e00;
        self->unk_50[0].unk_50[3] = 0x800;
        self->unk_50[0].unk_50[4] = 0x1200;
        self->unk_50[1].unk_50[0] = 0x9e00;
        self->unk_50[1].unk_50[1] = 0xfffff300;
        self->unk_50[1].unk_50[2] = 0x14700;
        self->unk_50[1].unk_50[3] = 0x1100;
        self->unk_50[1].unk_50[4] = 0x1500;
        self->unk_50[2].unk_50[0] = 0x12f00;
        self->unk_50[2].unk_50[1] = 0xfffff300;
        self->unk_50[2].unk_50[2] = 0x13d00;
        self->unk_50[2].unk_50[3] = 0xa00;
        self->unk_50[2].unk_50[4] = 0xd00;
        self->unk_50[3].unk_50[0] = 0x16e00;
        self->unk_50[3].unk_50[1] = 0xfffff300;
        self->unk_50[3].unk_50[2] = 0x13100;
        self->unk_50[3].unk_50[3] = 0x1200;
        self->unk_50[3].unk_50[4] = 0x1400;
        data_ov004_0224e5f4 = 4;
        self->unk_294[0] = 0x9e00;
        self->unk_294[1] = 0xfffff300;
        self->unk_294[2] = 0x14700;
        self->unk_294[3] = 0xc00;
        self->unk_294[4] = 0x2000;
        func_ov004_0222d62c(self);
        func_020b68ec(func_020b50b4(), (u8 *)self + 0x2a8, &data_ov004_02251d9c, 0x26000, 0x4dc3, 0x3800, 0, 0x13, 0);
    }
    func_02004008(0x4da);
    return TRUE;
}

extern "C" BOOL func_ov004_0222d874(Mgr *self)
{
    s32 i = 0;
    data_ov004_02251d64 = 0;
    data_ov004_0224e5f0 = 0x23;
    data_ov004_02251d9c.x = 0x11000;
    data_ov004_02251d9c.y = 0;
    data_ov004_02251d9c.z = 0x15000;
    void *heap = data_021f482c;
    R **tbl = data_ov004_02251e94;
    for (; i < data_ov004_0224e5f0; i++) {
        R **p;
        switch (i) {
        case 11:
            p = &tbl[i];
            tbl[i] = (R *)func_020e8608(heap, 0x214);
            if (tbl[i]) func_02232bb0(tbl[i]);
            break;
        case 15:
            p = &tbl[i];
            tbl[i] = (R *)func_020e8608(heap, 0x210);
            if (tbl[i]) func_02232b54(tbl[i]);
            break;
        case 12:
            p = &tbl[i];
            tbl[i] = (R *)func_020e8608(heap, 0x27c);
            if (tbl[i]) func_02232864(tbl[i]);
            break;
        case 10:
            p = &tbl[i];
            tbl[i] = (R *)func_020e8608(heap, 0x220);
            if (tbl[i]) func_02232a08(tbl[i]);
            break;
        case 0x1e:
            p = &tbl[i];
            tbl[i] = (R *)func_020e8608(heap, 0x25c);
            if (tbl[i]) func_02232930(tbl[i]);
            break;
        case 5:
        case 6:
            p = &tbl[i];
            tbl[i] = (R *)func_020e8608(heap, 0x25c);
            if (tbl[i]) func_022328b4(tbl[i]);
            break;
        default:
            p = &tbl[i];
            tbl[i] = (R *)func_020e8608(heap, 0x258);
            if (tbl[i]) func_02232d8c(tbl[i]);
            break;
        }
        R *e = *p;
        if (e == NULL) return FALSE;
        u32 t = data_ov004_022402ec[i].unk_01;
        if (t == 3) e->unk_1c6 = 1;
        if (!func_ov004_0222d5a8(self, p, i, t)) {
            func_ov004_0222dd3c(self, i);
            (*p)->unk_1c6 = 0;
            return FALSE;
        }
    }
    func_ov004_0222cf38(self);
    return TRUE;
}

extern "C" s32 func_ov004_0222d62c(Mgr *o) {
    s32 i = 0x23;
    R **p;
    void *heap;
    data_ov004_02251d64 = 0x23;
    data_ov004_0224e5f0 = 0x38;
    data_ov004_02251d9c.x = 0x11000;
    data_ov004_02251d9c.y = 0;
    data_ov004_02251d9c.z = 0x136e1;
    heap = data_021f482c;
    for (; i < data_ov004_0224e5f0; i++) {
        switch (i - 0x23) {
        case 1: {
            u32 off = i << 2;
            p = &data_ov004_02251e94[i];
            *(R **)((u8 *)data_ov004_02251e94 + off) = (R *)func_020e8608(heap, 0x28c);
            if (*(R **)((u8 *)data_ov004_02251e94 + off)) func_ov004_02232ce4(*(R **)((u8 *)data_ov004_02251e94 + off));
            break;
        }
        case 15:
        case 16: {
            u32 off = i << 2;
            p = &data_ov004_02251e94[i];
            *(R **)((u8 *)data_ov004_02251e94 + off) = (R *)func_020e8608(heap, 0x258);
            if (*(R **)((u8 *)data_ov004_02251e94 + off)) func_ov004_02232c88(*(R **)((u8 *)data_ov004_02251e94 + off));
            break;
        }
        case 17:
        case 18:
        case 19: {
            u32 off = i << 2;
            p = &data_ov004_02251e94[i];
            *(R **)((u8 *)data_ov004_02251e94 + off) = (R *)func_020e8608(heap, 0x258);
            if (*(R **)((u8 *)data_ov004_02251e94 + off)) func_ov004_02232c24(*(R **)((u8 *)data_ov004_02251e94 + off));
            break;
        }
        case 0: {
            u32 off = i << 2;
            p = &data_ov004_02251e94[i];
            *(R **)((u8 *)data_ov004_02251e94 + off) = (R *)func_020e8608(heap, 0x278);
            if (*(R **)((u8 *)data_ov004_02251e94 + off)) func_ov004_02232adc(*(R **)((u8 *)data_ov004_02251e94 + off));
            break;
        }
        case 2: {
            u32 off = i << 2;
            p = &data_ov004_02251e94[i];
            *(R **)((u8 *)data_ov004_02251e94 + off) = (R *)func_020e8608(heap, 0x26c);
            if (*(R **)((u8 *)data_ov004_02251e94 + off)) func_ov004_02232a64(*(R **)((u8 *)data_ov004_02251e94 + off));
            break;
        }
        case 5: {
            u32 off = i << 2;
            p = &data_ov004_02251e94[i];
            *(R **)((u8 *)data_ov004_02251e94 + off) = (R *)func_020e8608(heap, 0x25c);
            if (*(R **)((u8 *)data_ov004_02251e94 + off)) func_ov004_0223299c(*(R **)((u8 *)data_ov004_02251e94 + off));
            break;
        }
        case 3: {
            u32 off = i << 2;
            p = &data_ov004_02251e94[i];
            *(R **)((u8 *)data_ov004_02251e94 + off) = (R *)func_020e8608(heap, 0x27c);
            if (*(R **)((u8 *)data_ov004_02251e94 + off)) func_ov004_02232864(*(R **)((u8 *)data_ov004_02251e94 + off));
            break;
        }
        case 12: {
            u32 off = i << 2;
            p = &data_ov004_02251e94[i];
            *(R **)((u8 *)data_ov004_02251e94 + off) = (R *)func_020e8608(heap, 0x258);
            if (*(R **)((u8 *)data_ov004_02251e94 + off)) func_ov004_02232808(*(R **)((u8 *)data_ov004_02251e94 + off));
            break;
        }
        case 13: {
            u32 off = i << 2;
            p = &data_ov004_02251e94[i];
            *(R **)((u8 *)data_ov004_02251e94 + off) = (R *)func_020e8608(heap, 0x1fc);
            if (*(R **)((u8 *)data_ov004_02251e94 + off)) func_ov004_022327b8(*(R **)((u8 *)data_ov004_02251e94 + off));
            break;
        }
        case 4: case 6: case 7: case 8: case 9: case 10: case 11: case 14:
        default: {
            u32 off = i << 2;
            p = &data_ov004_02251e94[i];
            *(R **)((u8 *)data_ov004_02251e94 + off) = (R *)func_020e8608(heap, 0x258);
            if (*(R **)((u8 *)data_ov004_02251e94 + off)) func_ov004_02232d8c(*(R **)((u8 *)data_ov004_02251e94 + off));
            break;
        }
        }
        if (*p == 0) {
            return 0;
        }
        if (data_ov004_022402ec[i].unk_01 == 3) {
            (*p)->unk_1c6 = 1;
        }
        if (!func_ov004_0222d5a8(o, p, i, data_ov004_022402ec[i].unk_01)) {
            func_ov004_0222dd3c(o, i);
            (*p)->unk_1c6 = 0;
            return 0;
        }
    }
    func_ov004_0222cde0(o);
    return TRUE;
}

extern "C" s32 func_ov004_0222d5a8(Mgr *o, R **p, s32 idx, s32 n) {
    s32 k = idx / 10 + 10;
    s32 i = 0;
    s32 z = 0;
    char buf[0x1c];
    for (; i < n; i++) {
        if (idx < 10) {
            func_020639e8(buf, "/fish/%d/m_fish0%d%d.nsbca", k, idx, i);
        } else {
            func_020639e8(buf, "/fish/%d/m_fish%d%d.nsbca", k, idx, i);
        }
        (*p)->unk_54[i] = func_020641ec(buf, (s32)data_021f482c, 4, z);
        if ((*p)->unk_54[i] == 0) {
            return 0;
        }
    }
    return 1;
}

extern "C" void func_ov004_0222d564(Mgr *o, R **p, s32 i) {
    R *e = *p;
    u32 k = (u8)e->unk_160;
    if (k < 3) {
        (o->*data_ov004_02251dcc[k])(p, i);
    }
}

extern "C" void func_ov004_0222d560() {
}

extern "C" s32 func_ov004_0222d558(Mgr *o, R **p, s32 i) {
    return func_ov004_0222d1d8(o, p, i);
}

extern "C" void func_ov004_0222d460(Mgr *o, R **p, s32 x) {
    V3 *v = &(*p)->unk_1a8;
    if (data_ov004_02251d60 == 0) {
        s32 a = func_01ffcb0c((*p)->unk_14, 0x99a);
        s32 b = func_01ffcb0c((*p)->unk_1c, 0x99a);
        if ((*p)->unk_40 != 0) {
            s32 lv = (*p)->unk_13;
            if (lv >= 0x38) {
                a = Unk_ov004_0222d460_Clamp(a);
                b = Unk_ov004_0222d460_Clamp(b);
            }
            v->x = v->x + a;
            v->z = v->z + b;
        }
    } else if (data_ov004_02251d60 == 1) {
        s32 a = func_01ffcb0c((*p)->unk_14, 0x866);
        s32 b = func_01ffcb0c((*p)->unk_1c, 0x866);
        if ((*p)->unk_40 != 0) {
            v->x = v->x + a;
            v->z = v->z + b;
        }
    }
    (*p)->vfunc_04();
    func_ov004_0222e060(*p);
    func_ov004_0222ca24(o, p, x);
    func_ov004_0222d180(o, p);
    func_0205439c((u8 *)(*p) + 0x64);
}

extern "C" s32 _ZN18Unk_ov004_0224e87c8vfunc_18Ev(Mgr *o) {
    s32 i;
    R **p;
    if (data_ov004_02251d60 == 0) {
        func_020b6928(func_020b50b4(), (u8 *)o + 0x2a8);
        func_020b6928(func_020b50b4(), (u8 *)o + 0x550);
    } else if (data_ov004_02251d60 == 1) {
        func_020b6928(func_020b50b4(), (u8 *)o + 0x2a8);
    }
    i = data_ov004_0224e5f0 - 1;
    p = &data_ov004_02251e94[i];
    for (; i >= data_ov004_02251d64; p--, i--) {
        if (*p) {
            func_ov004_0222d564((Mgr *)o, p, i);
        }
    }
    func_ov004_0222d314(o, data_ov004_0224e5f4);
    return TRUE;
}

extern "C" void func_ov004_0222d314(Mgr *o, s32 n) {
    s32 i;
    u32 z = 0;
    for (i = 0; i < n; i++) {
        s32 off = i * 0x64;
        u8 *s = (u8 *)o + off;
        void *obj = (u8 *)o + 0x50 + off;
        func_02088c64(obj, (u8 *)o + 0xa0 + off, *(s32 *)(s + 0xac), *(s32 *)(s + 0xb0), 0x102, 0x140, z, 0xff, 0x1000);
        func_02089040(obj);
    }
    if (data_ov004_02251d60 == 1) {
        func_02088c64((u8 *)o + 0x244, (u8 *)o + 0x294, *(s32 *)((u8 *)o + 0x2a0), *(s32 *)((u8 *)o + 0x2a4), 0x202, 0x140, 0, 0xff, 0x1000);
        func_02089040((u8 *)o + 0x244);
    }
}

extern "C" s32 func_ov004_0222d1d8(Mgr *o, R **p, s32 idx) {
    s32 res = 0;
    s32 n = (*p)->unk_15c;
    s32 a = func_0209c25c((u8 *)o + 0x7f8, (*p)->unk_166);
    void *b = (*p)->unk_168;
    char buf[0x18];
    s32 k = n / 10 + 10;
    if (n < 10) {
        func_020639e8(buf, "/fish/%d/m_fish0%d.nsbmd", k, n);
    } else {
        func_020639e8(buf, "/fish/%d/m_fish%d.nsbmd", k, n);
    }
    if (func_0209c0d0(b, a, buf)) {
        void *q;
        s32 c, d;
        (*p)->unk_1c0 = func_ov004_02231e3c(0x168, 0);
        (*p)->unk_1c2 = (*p)->unk_1c0;
        (*p)->vfunc_00();
        q = (u8 *)(*p) + 0x64;
        func_020555ec(q, func_0209c0ac(b), 0);
        c = func_0209c348(a);
        if ((*p)->unk_54[0] == 0) {
            func_ov004_0222dd3c(o, idx);
            return 0;
        }
        d = func_021065f8(func_021065dc((*p)->unk_54[0]), 0);
        if (func_02054800(q, c)) {
            func_02054720(q, d, 0, 0x1000, 1, 0);
            func_02054710(q);
            func_02054b38(q, func_0209c348(a));
            (*p)->unk_160 = 2;
            (*p)->unk_1e8 = (*p)->unk_15c;
            func_ov004_0222d180(o, p);
            res = 1;
        }
    }
    return res;
}

extern "C" void func_ov004_0222d180(Mgr *o, R **p) {
    R *e = *p;
    V3 *v = &e->unk_1a8;
    func_020e8388(&data_021f47e0, v->x, v->y, v->z);
    func_020e8404(&data_021f47e0, (*p)->unk_1c0);
    func_020e8434(&data_021f47e0, (*p)->unk_1c4);
    e->unk_c8 = data_021f47e0;
}

extern "C" s32 _ZN18Unk_ov004_0224e87c8vfunc_24Ev(Mgr *o) {
    s32 i = data_ov004_02251d64;
    R **p = &data_ov004_02251e94[i];
    for (; i < data_ov004_0224e5f0; p++, i++) {
        if (*p) {
            if ((*p)->unk_160 == 2) {
                V3 v;
                switch ((*p)->unk_15c) {
                case 0xb:
                    v.x = 0x1000;
                    v.y = 0x1000;
                    v.z = 0x1000;
                    func_ov004_0222d180(o, p);
                    break;
                case 0x24:
                    if (data_ov004_02251d74) {
                        V3 *q = (V3 *)((u8 *)data_ov004_02251d74 + 0x258);
                        v.x = q->x;
                        v.y = q->y;
                        v.z = q->z;
                    } else {
                        v.x = 0x1000;
                        v.y = 0x1000;
                        v.z = 0x1000;
                    }
                    break;
                default:
                    v.x = 0x1000;
                    v.y = 0x1000;
                    v.z = 0x1000;
                    break;
                }
                func_020547cc((u8 *)(*p) + 0x64, &v);
            }
        }
    }
    return TRUE;
}

extern "C" s32 _ZN18Unk_ov004_0224e87c8vfunc_0cEv(Mgr *o) {
    s32 i = data_ov004_02251d64;
    R **p;
    for (; i < data_ov004_0224e5f0; i++) {
        p = &data_ov004_02251e94[i];
        if (data_ov004_02251e94[i]) {
            func_ov004_0222dd3c(o, i);
            func_020e85fc(data_021f482c, *p);
            *p = 0;
        }
    }
    func_0209c15c((u8 *)o + 0x7f8);
    func_02003ff4(0x4da, 1);
    return TRUE;
}

extern "C" void func_ov004_0222cf38(Mgr *o) {
    s32 i = data_ov004_02251d64;
    R **p = &data_ov004_02251e94[i];
    u16 id = 0xfff1;
    for (; i < data_ov004_0224e5f0; p++, i++) {
        V3 *v;
        id = (u32)i < 0x38 ? (u16)(i + 0x12e8) : 0x12e8;
        if (func_02070358(data_021ed0a0, &id)) {
            v = &(*p)->unk_1a8;
            if (i >= 0x11) {
                if (i != 0x19) {
                    v->x = func_ov004_02231e74(9, 0x1a);
                    v->z = func_ov004_02231e74(5, 0xa);
                } else {
                    v->x = func_ov004_02231e74(9, 0x1a);
                    v->z = func_ov004_02231e74(0x13, 0x18);
                }
            } else {
                switch (i) {
                case 0xa:
                    v->z = 0x14a00;
                    v->x = 0xc800;
                    break;
                case 0xc:
                    v->z = 0x13900;
                    v->x = 0x15900;
                    break;
                default:
                    v->x = func_ov004_02231e74(9, 0x1a);
                    v->z = func_ov004_02231e74(0x13, 0x18);
                    break;
                }
            }
            v->y = ((data_ov004_022402ec[i].unk_04 << 12) >> 6) - 0x1000;
            {
                R *e = *p;
                V3 *d = &e->unk_1b4;
                e->unk_1b4.x = v->x;
                d->y = v->y;
                d->z = v->z;
            }
            (*p)->unk_164 = data_ov004_022402ec[i].unk_00;
            func_ov004_0222de34(o, i);
        }
    }
}

extern "C" void func_ov004_0222cde0(Mgr *self) {
    s32 i = data_ov004_02251d64;
    R **pp = &data_ov004_02251e94[i];
    volatile u16 v = 0xfff1;
    for (; i < data_ov004_0224e5f0; pp++, i++) {
        u16 w;
        if ((u32)i < 0x38) {
            w = (u16)(i + 0x12e8);
        } else {
            w = 0x12e8;
        }
        v = w;
        if (func_02070358(data_021ed0a0, (u16 *)&v)) {
            s32 *e = (s32 *)((u8 *)*pp + 0x1a8);
            switch (i) {
            case 0x34:
            case 0x35:
            case 0x36:
                e[2] = 0x12000;
                if ((u32)(i - 0x35) <= 1) {
                    e[0] = func_ov004_02231e74(5, 0x1e);
                } else if (i == 0x34) {
                    e[0] = func_ov004_02231e74(5, 0x1e);
                }
                break;
            case 0x26:
                e[2] = 0x14700;
                e[0] = 0x9e00;
                break;
            case 0x23:
                e[2] = 0x14a00;
                e[0] = 0x6000;
                break;
            case 0x25:
                e[2] = 0x14a00;
                e[0] = 0x7000;
                break;
            default:
                e[2] = func_ov004_02231e74(0x12, 0x16);
                e[0] = func_ov004_02231e74(5, 0x1e);
                break;
            }
            e[1] = ((data_ov004_022402ec[i].unk_04 << 12) >> 6) - 0x1000;
            s32 *d = (s32 *)((u8 *)*pp + 0x1b4);
            d[0] = e[0];
            d[1] = e[1];
            d[2] = e[2];
            *((u8 *)*pp + 0x164) = data_ov004_022402ec[i].unk_00;
            func_ov004_0222de34(self, i);
        }
    }
}

extern "C" void func_ov004_0222ca24(void *self, R **ctx, s32 type) {
    R *o;
    R *o1;
    R *o2;
    R *o3;
    s32 w, len, base;
    V3 *v;
    V3 *e;
    s32 bx0, bz0, bx1, bz1, ax0, az0, ax1, az1;
    o1 = (*ctx);
    v = &o1->unk_1a8;
    V3 *q;
    V3 *ep;
    s32 off;
    s32 c164 = o1->unk_164;
    w = (data_ov004_022402ec[type].unk_03 << 12) >> 7;
    if (o1->unk_1c7 == 0) {
        return;
    }
    s32 h = (data_ov004_022402ec[type].unk_02 << 12) >> 7;
    if (data_ov004_02251d60 == 0) {
        func_02088c64(&o1->unk_04, v, w, h, 0x100, 0x140, 0x14, type, (c164 << 12) >> 3);
    } else if (data_ov004_02251d60 == 1) {
        if (type == 0x24) {
            u8 *g = (u8 *)data_ov004_02251d74;
            if (g != NULL) {
                func_02088c64(&o1->unk_04, g + 0x26c, w, h, 0x100, 0x340, 0x14, type, (c164 << 12) >> 3);
            }
        } else if (type == 0x23) {
            u8 *g = (u8 *)data_ov004_02251d78;
            if (g != NULL) {
                func_02088c64(&o1->unk_04, g + 0x264, w, h, 0x100, 0x340, 0x14, type, (c164 << 12) >> 3);
            }
        } else if (type == 0x26) {
            func_02088c64(&o1->unk_04, v, w, h, 0x100, 0x140, 0x14, type, (c164 << 12) >> 3);
        } else {
            func_02088c64(&o1->unk_04, v, w, h, 0x100, 0x340, 0x14, type, (c164 << 12) >> 3);
        }
    }
    func_02089040(&(*ctx)->unk_04);
    len = (data_ov004_022402ec[type].unk_10 << 12) >> 7;
    base = w - (len >> 1);
    s32 k;
    k = 0;
loop0:
    {
        o2 = (*ctx);
        q = &o2->unk_1a8;
        off = k * 12;
        V3 *arr = o2->unk_1d0;
        ep = (V3 *)((u8 *)arr + off);
        *(s32 *)((u8 *)arr + off) = o2->unk_1a8.x;
        ep->y = q->y;
        ep->z = q->z;
        if (k == 0) {
            o1 = (*ctx);
            *(s32 *)((u8 *)o1->unk_1d0 + off) += func_01ffcb0c(base, data_02135f44[(o1->unk_1c0u >> 4) * 2]);
            o2 = (*ctx);
            ((V3 *)((u8 *)o2->unk_1d0 + off))->z += func_01ffcb0c(base, data_02135f44[(o2->unk_1c0u >> 4) * 2 + 1]);
            o3 = (*ctx);
            ep = (V3 *)((u8 *)o3->unk_1d0 + off);
            bx0 = *(s32 *)((u8 *)o3->unk_1d0 + off);
            bz0 = ep->z;
            o = o3;
        } else {
            s32 t;
            o3 = (*ctx);
            t = (u16)(s16)((s16)o3->unk_1c0 + 0x8000);
            t = (t >> 4) * 2;
            *(s32 *)((u8 *)o3->unk_1d0 + off) += func_01ffcb0c(base, data_02135f44[t]);
            e = (V3 *)((u8 *)(*ctx)->unk_1d0 + off);
            e->z += func_01ffcb0c(base, data_02135f44[t + 1]);
            o = (*ctx);
            ep = (V3 *)((u8 *)o->unk_1d0 + off);
            bx1 = *(s32 *)((u8 *)o->unk_1d0 + off);
            bz1 = ep->z;
        }
        if (data_ov004_02251d60 == 0) {
            if (type < 0x11) {
                func_020308b4(ep, len, &data_ov004_02251d9c, 0x11c00, 0x5c00);
            } else if (type != 0x19) {
                func_020308b4(ep, len, &data_ov004_02251d84, 0x11c00, 0x5c00);
            } else {
                func_020308b4(ep, len, &data_ov004_02251d9c, 0x11c00, 0x5c00);
            }
        } else {
            switch (o->unk_1c8) {
            case 0:
                if (func_020308b4(ep, len, &data_ov004_02251d9c, 0x1a000, 0x4dc3)) {
                    (*ctx)->unk_1f0 = 1;
                }
                break;
            case 1:
                if (func_020308b4(ep, len, &data_ov004_02251d9c, 0x26000, 0x4dc3)) {
                    (*ctx)->unk_1f0 = 1;
                }
                break;
            case 2:
                if (func_020308b4(ep, len, &data_ov004_02251d9c, 0x2a000, 0x4dc3)) {
                    (*ctx)->unk_1f0 = 1;
                }
                break;
            }
        }
        if (k == 0) {
            o = (*ctx);
            ep = (V3 *)((u8 *)o->unk_1d0 + off);
            ax0 = *(s32 *)((u8 *)o->unk_1d0 + off);
            az0 = ep->z;
        } else {
            o = (*ctx);
            ep = (V3 *)((u8 *)o->unk_1d0 + off);
            ax1 = *(s32 *)((u8 *)o->unk_1d0 + off);
            az1 = ep->z;
        }
    }
    k++;
    if (k < 2) goto loop0;
    func_ov004_0222c9ec(self, &o->unk_1a8.x, bx0, ax0, bx1, ax1);
    func_ov004_0222c9ec(self, &(*ctx)->unk_1a8.z, bz0, az0, bz1, az1);
    V3 *dst = &(*ctx)->unk_1b4;
    dst->x = v->x;
    dst->y = v->y;
    dst->z = v->z;
}

extern "C" void func_ov004_0222c9ec(void *self, s32 *p, s32 a, s32 b, s32 c, s32 d) {
    s32 dx = b - a;
    s32 dy = d - c;
    s32 ax = dx < 0 ? -dx : dx;
    s32 ay = dy < 0 ? -dy : dy;
    if (ax >= ay) {
        *p += dx;
    } else {
        *p += dy;
    }
}

Unk_ov004_0222c9d0::Unk_ov004_0222c9d0() : unk_10(0), unk_14(0) {
    func_020f440c(unk_4c);
}

Unk_ov004_0222c9d0::~Unk_ov004_0222c9d0() {
    func_020f43fc(unk_4c);
}

extern "C" {
void *data_ov004_0224e6d8[2] = {(void *)func_ov004_0222ead8, 0};
PairFn data_ov004_02251de4[2] = {{*(Fn *)data_ov004_0224e610, *(Fn *)data_ov004_0224e618}, {*(Fn *)data_ov004_0224e600, *(Fn *)data_ov004_0224e688}};
void *data_ov004_0224e618[2] = {(void *)func_ov004_0222ef5c, 0};
void *data_ov004_0224e688[2] = {(void *)func_ov004_0222f0e4, 0};
void *data_ov004_0224e620[2] = {(void *)func_ov004_0222e9a8, 0};
void *data_ov004_0224e628[2] = {(void *)func_ov004_0222ea74, 0};
void *data_ov004_0224e648[2] = {(void *)func_ov004_0222e9ac, 0};
Fn data_ov004_02251e5c[7] = {*(Fn *)data_ov004_0224e620, *(Fn *)data_ov004_0224e648, *(Fn *)data_ov004_0224e6d0, *(Fn *)data_ov004_0224e630, *(Fn *)data_ov004_0224e6d8, *(Fn *)data_ov004_0224e628, *(Fn *)data_ov004_0224e660};
void *data_ov004_0224e630[2] = {(void *)func_ov004_0222eb30, 0};
R *data_ov004_02251e94[0x38];
void *data_ov004_0224e640[2] = {(void *)func_ov004_0222d558, 0};
void *data_ov004_0224e650[2] = {(void *)func_ov004_022302b4, 0};
void *data_ov004_0224e658[2] = {(void *)func_ov004_022303b4, 0};
void *data_ov004_0224e6c8[2] = {(void *)func_ov004_0222e9a8, 0};
Unk_ov004_SceneEntry data_ov004_0224e6c0 = {(void *)func_ov004_02233058, 0xc3, 0xc4};
void *data_ov004_0224e6b8[2] = {(void *)func_ov004_0222e8d8, 0};
E834 *data_ov004_02251d6c;
void *data_ov004_0224e690[2] = {(void *)func_ov004_0222e9ac, 0};
void *data_ov004_0224e6b0[2] = {(void *)func_ov004_02230ecc, 0};
void *data_ov004_0224e6a8[2] = {(void *)func_ov004_0222ead8, 0};
Fn data_ov004_02251e2c[6] = {*(Fn *)data_ov004_0224e6c8, *(Fn *)data_ov004_0224e690, *(Fn *)data_ov004_0224e6b8, *(Fn *)data_ov004_0224e698, *(Fn *)data_ov004_0224e6a8, *(Fn *)data_ov004_0224e680};
void *data_ov004_0224e698[2] = {(void *)func_ov004_0222eb30, 0};
void *data_ov004_0224e608[2] = {(void *)func_ov004_02230e50, 0};
void *data_ov004_0224e678[2] = {(void *)func_ov004_02230e10, 0};
E7bc *data_ov004_02251d78;
u8 data_ov004_02251d64;
void *data_ov004_0224e660[2] = {(void *)func_ov004_0222ea40, 0};
u8 data_ov004_02251d60;
E7d4 *data_ov004_02251d74;
Fn804 data_ov004_02251e04[5] = {*(Fn804 *)data_ov004_0224e6b0, *(Fn804 *)data_ov004_0224e6a0, *(Fn804 *)data_ov004_0224e608, *(Fn804 *)data_ov004_0224e678, *(Fn804 *)data_ov004_0224e5f8};
u8 data_ov004_0224e5f0 = 0x23;
Fn data_ov004_02251db4[3] = {*(Fn *)data_ov004_0224e668, *(Fn *)data_ov004_0224e658, *(Fn *)data_ov004_0224e650};
u8 data_ov004_0224e5f4 = 0x05;
MgrFn data_ov004_02251dcc[3] = {*(MgrFn *)data_ov004_0224e638, *(MgrFn *)data_ov004_0224e640, *(MgrFn *)data_ov004_0224e670};
}

