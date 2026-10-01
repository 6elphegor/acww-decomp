// mwcc-version: 1.2/base
// mwcc-flags: -str reuse
// TU02 of ov003 (player free functions, 0x02204ce8-0x02212830): 25 unit files merged. Every original file is a namespace
// (the file-local Obj/V3/Rec/Msg typedefs and the extern "C" declarations differ per file); functions are emitted in
// descending address order, each in its own namespace block.
#include "types.h"
#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "Unk_020d8c7c.h"
#undef vfunc_14
#undef vfunc_08

// calls into other modules (the old extern "C" declarations keep their local signatures; the call compiles like the method call)
#define func_02007c08 _ZN12Unk_0200769413func_02007c08Ej
#define func_02007d30 _ZN12Unk_0200769413func_02007d30Ejjj
#define func_020085f0 _ZN12Unk_0200804013func_020085f0Ejj
#define func_02008770 _ZN12Unk_0200804013func_02008770Esjj
#define func_02008e50 _ZN12Unk_02006d1413func_02008e50Ehhhjs
#define func_0200bc78 _ZN12Unk_02006d1413func_0200bc78Ev
#define func_0200bd60 _ZN12Unk_02006d1413func_0200bd60Esji
#define func_0200c358 _ZN12Unk_0200769413func_0200c358Etjj
#define func_0200cb50 _ZN12Unk_020d6df413func_0200cb50Ejjj
#define func_0200ce98 _ZN12Unk_020d6df413func_0200ce98Ejjj
#define func_0200d634 _ZN12Unk_020d6df413func_0200d634Ev
#define func_0200d640 _ZN12Unk_020d6df413func_0200d640Ev
#define func_0200e1ac _ZN12Unk_020d6df413func_0200e1acEv
#define func_0200e208 _ZN12Unk_020d6df413func_0200e208Ev
#define func_0200e248 _ZN12Unk_020d6df413func_0200e248EP12Unk_0200e2c0
#define func_0200e3c0 _ZN12Unk_020d6df413func_0200e3c0Ej
#define func_0200e7c0 _ZN12Unk_02006d1413func_0200e7c0Ev
#define func_0200e7f4 _ZN12Unk_02006d1413func_0200e7f4Ev
#define func_0200ead0 _ZN12Unk_02006d1413func_0200ead0Ev
#define func_0200eb58 _ZN12Unk_02006d1413func_0200eb58Ejj
#define func_0200ec1c _ZN12Unk_02006d1413func_0200ec1cEj
#define func_0200ec30 _ZN12Unk_02006d1413func_0200ec30Ej
#define func_0200ec44 _ZN12Unk_02006d1413func_0200ec44Ej
#define func_0200ec54 _ZN12Unk_02006d1413func_0200ec54EjP17Unk_02006d14_Vec3
#define func_0200ecdc _ZN12Unk_02006d1413func_0200ecdcEj
#define func_0200ed9c _ZN12Unk_02006d1413func_0200ed9cEv
#define func_0200ede8 _ZN12Unk_02006d1413func_0200ede8EP17Unk_02006d14_Vec3
#define func_0200eee4 _ZN12Unk_02006d1413func_0200eee4EPi
#define func_0200ef08 _ZN12Unk_02006d1413func_0200ef08Ev
#define func_0200f004 _ZN12Unk_02006d1413func_0200f004Ejz
#define func_0200f258 _ZN12Unk_02006d1413func_0200f258Ev
#define func_0200f32c _ZN12Unk_02006d1413func_0200f32cEv
#define func_0200f478 _ZN12Unk_02006d1413func_0200f478Ei
#define func_0200f4c0 _ZN12Unk_02006d1413func_0200f4c0Ei
#define func_0200f504 _ZN12Unk_02006d1413func_0200f504Ei
#define func_0200f5b0 _ZN12Unk_02006d1413func_0200f5b0Ev
#define func_0200f660 _ZN12Unk_02006d1413func_0200f660Ev
#define func_0200f6d4 _ZN12Unk_02006d1413func_0200f6d4Eii
#define func_0200f7a0 _ZN12Unk_02006d1413func_0200f7a0EP15Unk_0200f6d4_V2ii
#define func_0200f8f8 _ZN12Unk_02006d1413func_0200f8f8Eiii
#define func_0200f9bc _ZN12Unk_02006d1413func_0200f9bcEv
#define func_0200f9d4 _ZN12Unk_02006d1413func_0200f9d4Ei
#define func_0200fa2c _ZN12Unk_02006d1413func_0200fa2cEPij
#define func_0200ff08 _ZN12Unk_02006d1413func_0200ff08Ev
#define func_020100d0 _ZN12Unk_02006d1413func_020100d0Ev
#define func_02010284 _ZN12Unk_02006d1413func_02010284EiPv
#define func_02010358 _ZN12Unk_020102ec13func_02010358Eijt
#define func_020103b4 _ZN12Unk_020102ec13func_020103b4Eijt
#define func_0201065c _ZN12Unk_020102ec13func_0201065cEv
#define func_0201071c _ZN12Unk_020102ec13func_0201071cEv
#define func_02010740 _ZN12Unk_020102ec13func_02010740Ejjj
#define func_02010914 _ZN12Unk_020102ec13func_02010914Ev
#define func_020109c4 _ZN12Unk_020102ec13func_020109c4Ev
#define func_02010a34 _ZN12Unk_020102ec13func_02010a34EPj
#define func_02010a58 _ZN12Unk_020102ec13func_02010a58EPs
#define func_020339bc _ZN12Unk_0203398c13func_020339bcEP16Unk_0203389c_Vecii
#define func_020351bc _ZN12Unk_020d8df413func_020351bcEv
#define func_02035214 _ZN12Unk_020d8df413func_02035214Ev
#define func_02035b94 _ZN12Unk_0203575813func_02035b94Ev
#define func_02035b9c _ZN12Unk_0203575813func_02035b9cEv
#define func_02035ba4 _ZN12Unk_0203575813func_02035ba4Ev
#define func_02035bac _ZN12Unk_0203575813func_02035bacEv
#define func_0203e47c _ZN12Unk_020d967013func_0203e47cEi
#define func_0203e488 _ZN12Unk_020d967013func_0203e488Ei
#define func_02053f20 _ZN12Unk_020dbda413func_02053f20Ev
#define func_020565e8 _ZN12Unk_020dbe7c13func_020565e8Ei
#define func_02056654 _ZN12Unk_020dbe7c13func_02056654Ev
#define func_0205668c _ZN12Unk_020dbe7c13func_0205668cEihit
#define func_0205d354 _ZN12Unk_0205d34013func_0205d354Ej
#define func_0205f92c _ZN12Unk_0205f8d413func_0205f92cEi
#define func_0205fae8 _ZN12Unk_0205f8d413func_0205fae8EP16Unk_0205f8d4_Vec
#define func_0205faf8 _ZN12Unk_0205f8d413func_0205faf8EP16Unk_0205f8d4_Vec
#define func_0205fb08 _ZN12Unk_0205f8d413func_0205fb08Ev
#define func_0205fb20 _ZN12Unk_0205f8d413func_0205fb20Ev
#define func_0205fb34 _ZN12Unk_0205f8d413func_0205fb34Ev
#define func_0205fb70 _ZN12Unk_0205f8d413func_0205fb70Ev
#define func_0205fb88 _ZN12Unk_0205f8d413func_0205fb88Ev
#define func_0205fbb8 _ZN12Unk_0205f8d413func_0205fbb8Ev
#define func_0205fbbc _ZN12Unk_0205f8d413func_0205fbbcEPv
#define func_0206260c _ZN12Unk_020dd324D1Ev
#define func_02062650 _ZN12Unk_020dd324C1EPt
#define func_020679ec _ZN12Unk_020660f813func_020679ecEiPvj
#define func_020729bc _ZN12Unk_020cbb1813func_020729bcEj
#define func_02089040 _ZN12Unk_020e0d0813func_02089040Ev
#define func_0208c0f4 _ZN12Unk_020e0f1013func_0208c0f4Ev
#define func_0208c114 _ZN12Unk_020e0f1013func_0208c114Ev
#define func_02097ff4 _ZN12Unk_02097ff413func_02097ff4Ej
#define func_0209801c _ZN12Unk_02097ff413func_0209801cEj
#define func_02098044 _ZN12Unk_02097ff413func_02098044Ej
#define func_02098738 _ZN12Unk_0209865c13func_02098738EPt
#define func_02098744 _ZN12Unk_0209865c13func_02098744Ev
#define func_020987d0 _ZN12Unk_0209865c13func_020987d0Eh
#define func_02098868 _ZN12Unk_0209865c13func_02098868Ev
#define func_020a710c _ZN12Unk_020e2a3013func_020a710cEPKc

// the real message class (main 0x0200e2c0 func/ctor 0x0200e2e0/dtor 0x0200e2d0). The 21 files that use it each saw it with a different layout of the
// payload at +0x0c: those views (hoisted below with their member types) are members of one union.
struct Unk_ov003_02205e58_Pair {
    u8 a, b;
};
class Unk_ov003_02205e58_MsgV {
public:
    u8 pad_00[0xc];
    Unk_ov003_02205e58_Pair unk_0c;
    u8 pad_0e[0x1c - 0xe];
};
class Unk_ov003_02206574_MsgV {
public:
    u8 pad_00[0x1c];
};
struct Unk_ov003_02206e94_V3 {
    s32 x, y, z;
};
class Unk_ov003_02206e94_MsgV {
public:
    u8 pad_00[0xc];
    Unk_ov003_02206e94_V3 unk_0c;
    u8 pad_18[4];
};
struct Unk_ov003_022077c8_V3 {
    s32 x, y, z;
};
class Unk_0200e2c0V {
public:
    u8 pad_00[0xc];
    Unk_ov003_022077c8_V3 unk_0c;
    u8 pad_18[4];
};
class Unk_ov003_02208190_MsgV {
public:
    u8 pad_00[0xc];
    u8 unk_0c[0x10];
};
struct Unk_ov003_02208a58_V3 {
    s32 x, y, z;
};
class Unk_ov003_02208a58_MsgV {
public:
    u8 pad_00[0xc];
    Unk_ov003_02208a58_V3 unk_0c;
    u8 pad_18[4];
};
struct Unk_ov003_022093bc_Pay {
    u16 h;
    u8 b2;
    u8 b3;
    u8 b4;
    u8 pad_05[7];
};
class Unk_ov003_022093bc_MsgV {
public:
    u8 pad_00[0xc];
    Unk_ov003_022093bc_Pay unk_0c;
    u8 pad_18[4];
};
struct Unk_ov003_02209d50_V3 {
    s32 x, y, z;
    Unk_ov003_02209d50_V3() {}
    Unk_ov003_02209d50_V3(const Unk_ov003_02209d50_V3 &o) { x = o.x; y = o.y; z = o.z; }
};
struct Unk_ov003_02209d50_Pay {
    Unk_ov003_02209d50_V3 v;
    u16 a;
    u8 b;
};
class Unk_ov003_02209d50_MsgV {
public:
    u8 pad_00[0xc];
    Unk_ov003_02209d50_Pay unk_0c;
};
class Unk_ov003_0220a684_MsgV {
public:
    u8 pad_00[0xc];
    u32 unk_0c[4];
    u8 pad_1c[0x1c - 0x1c];
};
class Unk_ov003_0220b0f0_MsgV {
public:
    u8 pad_00[0xc];
    u8 unk_0c[0x10];
};
struct Unk_ov003_0220bc84_Pair {
    u8 a, b;
};
class Unk_ov003_0220bc84_MsgV {
public:
    u8 pad_00[0xc];
    Unk_ov003_0220bc84_Pair unk_0c;
    u8 pad_0e[0x1c - 0xe];
};
struct Unk_ov003_0220c4ac_Rec {
    u8 a, b, c;
};
class Unk_ov003_0220c4ac_MsgV {
public:
    u8 pad_00[0xc];
    Unk_ov003_0220c4ac_Rec unk_0c;
    u8 pad_0f[0x1c - 0xf];
};
class Unk_ov003_0220cd4c_MsgV {
public:
    u8 pad_00[0xc];
    u32 unk_0c;
    u8 pad_10[8];
};
class Unk_ov003_0220d6f4_MsgV {
public:
    u8 pad_00[0xc];
    u8 unk_0c[0x10];
};
struct Unk_ov003_0220e030_P2 {
    s32 x, z;
};
class Unk_ov003_0220e030_MsgV {
public:
    u8 pad_00[0xc];
    Unk_ov003_0220e030_P2 unk_0c;
    u8 pad_14[8];
};
struct Unk_ov003_0220e970_Rec {
    u8 b0, b1, b2, b3;
};
class Unk_ov003_0220e970_MsgV {
public:
    u8 pad_00[0xc];
    Unk_ov003_0220e970_Rec unk_0c;
    u8 pad_10[0xc];
};
class Unk_ov003_0220f314_MsgV {
public:
    u8 pad_00[0xc];
    u8 unk_0c[0xc];
    u8 pad_18[4];
};
struct Unk_ov003_0220fc88_RecA {
    s32 st;
    s32 a;
    s32 b;
    s16 h;
    u8 bits;
    u8 pad_0f;
};
class Unk_ov003_0220fc88_MsgV {
public:
    u8 pad_00[0xc];
    Unk_ov003_0220fc88_RecA unk_0c;
};
class Unk_ov003_02210628_MsgV {
public:
    u8 pad_00[0xc];
    u8 unk_0c[0x10];
};
struct Unk_ov003_02210ef0_Rec {
    s32 a, b;
    s16 c;
    u8 d, e;
};
class Unk_ov003_02210ef0_MsgV {
public:
    u8 pad_00[0xc];
    Unk_ov003_02210ef0_Rec unk_0c;
    u8 pad_18[0x1c - 0x18];
};
class Unk_ov003_02211818_MsgV {
public:
    u8 pad_00[0xc];
    u8 unk_0c[0x10];
};

class Unk_0200e2c0 {
public:
    Unk_0200e2c0();
    ~Unk_0200e2c0();
    union {
        u8 raw[0x1c];
        Unk_ov003_02205e58_MsgV v_02205c28;
        Unk_ov003_02206574_MsgV v_02206574;
        Unk_ov003_02206e94_MsgV v_02206e94;
        Unk_0200e2c0V v_022077c8;
        Unk_ov003_02208190_MsgV v_02208108;
        Unk_ov003_02208a58_MsgV v_02208a58;
        Unk_ov003_022093bc_MsgV v_022093bc;
        Unk_ov003_02209d50_MsgV v_02209d50;
        Unk_ov003_0220a684_MsgV v_0220a680;
        Unk_ov003_0220b0f0_MsgV v_0220b0f0;
        Unk_ov003_0220bc84_MsgV v_0220ba90;
        Unk_ov003_0220c4ac_MsgV v_0220c448;
        Unk_ov003_0220cd4c_MsgV v_0220cd4c;
        Unk_ov003_0220d6f4_MsgV v_0220d6f4;
        Unk_ov003_0220e030_MsgV v_0220e030;
        Unk_ov003_0220e970_MsgV v_0220e970;
        Unk_ov003_0220f314_MsgV v_0220f314;
        Unk_ov003_0220fc88_MsgV v_0220fc88;
        Unk_ov003_02210628_MsgV v_022105bc;
        Unk_ov003_02210ef0_MsgV v_02210ef0;
        Unk_ov003_02211818_MsgV v_02211818;
    };
};


namespace ns_02204d90 {
// ---------------------------------------------------------------- free functions on the big player object
struct Unk_ov003_02204ce8_Vec {
    s32 x, y, z;
};

class Unk_02006d14 {
public:

    u8 pad_00[0x5c];
    /* 0x5c */ s32 unk_5c[3];
    u8 pad_68[0x8e - 0x68];
    /* 0x8e */ u16 unk_8e;
    u8 pad_90[0x13c - 0x90];
    /* 0x13c */ u8 unk_13c;
    u8 pad_13d[3];
    /* 0x140 */ s32 unk_140;
    /* 0x144 */ u8 unk_144;
    u8 pad_145[0x154 - 0x145];
    /* 0x154 */ s32 unk_154;
    /* 0x158 */ s32 unk_158;
    /* 0x15c */ s32 unk_15c;
    u8 pad_160[0x16c - 0x160];
    /* 0x16c */ s32 unk_16c;
    u8 pad_170[0x6f0 - 0x170];
    /* 0x6f0 */ s32 unk_6f0;
    u8 pad_6f4[4];
    /* 0x6f8 */ s32 unk_6f8;
};

extern "C" {
s32 func_020e9650(s32 *a, s32 *b);
extern s32 data_ov003_02230af0[];
extern s32 data_ov003_0222efb4[];
extern void *data_021c47c4;
BOOL func_ov003_02205b68(Unk_02006d14 *self, s32 *p);
s32 func_ov003_02205894(Unk_02006d14 *self, s32 *out, s32 *in);
void func_ov003_0220fc00(Unk_02006d14 *self, s32 a, s32 b);
void func_ov003_0220b620(Unk_02006d14 *self, s32 a, s32 b);
void func_ov003_0220d00c(Unk_02006d14 *self, s32 a, s32 b);
void func_ov003_0220e8cc(Unk_02006d14 *self, s32 *v, s32 a, s32 b);
void func_ov003_0220e6b0(Unk_02006d14 *self, s32 a, s32 b);
void func_ov003_02209030(Unk_02006d14 *self, s32 a, s32 b);
void func_ov003_02208d18(Unk_02006d14 *self, s32 a, s32 b);
void func_ov003_0220627c(Unk_02006d14 *self, s32 a, s32 b);
void func_ov003_02206770(Unk_02006d14 *self, s32 a, s32 b);
void func_ov003_02206574(Unk_02006d14 *self, s32 a, s32 b);
void func_ov003_022084f4(Unk_02006d14 *self, s32 x, s32 z, s32 f, s32 a, s32 b, s32 c);
void func_ov003_0220fe1c(Unk_02006d14 *self, s32 a, s32 b);
void func_ov003_02207404(Unk_02006d14 *self, s32 a, s32 b);
void func_0200f3ec(Unk_ov003_02204ce8_Vec *out, Unk_02006d14 *o, s32 *in, u16 *ang, s32 *p);
void func_0200f45c(Unk_ov003_02204ce8_Vec *out, Unk_02006d14 *o);
BOOL func_020e972c(s32 *a, s32 *b);
s32 func_020e7b98(s32 a, s32 b);
BOOL func_02030d60(s32 *p);
BOOL func_020b8e14();
void func_0204ee10(s32 *a, s32 *b, s32 *c);
void *func_0204ebd8(void *m, s32 a, s32 b, s32 c, s32 d, s32 e);
}

struct Unk_ov003_02204f3c_Pad {
    s32 v[3];
    Unk_ov003_02204f3c_Pad() {}
    ~Unk_ov003_02204f3c_Pad() {}
};
extern "C" s32 func_0200f5b0(Unk_02006d14 *self);
extern "C" BOOL func_0200fa2c(Unk_02006d14 *self, s32 *p, s32 m);
extern "C" BOOL func_0200f9d4(Unk_02006d14 *self, s32 m);
extern "C" BOOL func_0200f8f8(Unk_02006d14 *self, s32 *p, s32 a, s32 b);
extern "C" BOOL func_0200f6d4(Unk_02006d14 *self, s32 *p, s32 a);
extern "C" s32 func_0200f9bc(Unk_02006d14 *self);


// forward declarations (functions are emitted in descending address order)
extern "C" BOOL func_ov003_02204d90(Unk_02006d14 *self, s32 mode, s32 *pos);
extern "C" BOOL func_ov003_02204f3c(Unk_02006d14 *self);
extern "C" BOOL func_ov003_02204ce8(Unk_02006d14 *self, s32 a);
}

namespace ns_022052f4 {
struct Unk_ov003_022052f4_V3 {
    s32 x, y, z;
};

struct Unk_ov003_022052f4_V2 {
    s32 x, y;
    Unk_ov003_022052f4_V2() {}
    Unk_ov003_022052f4_V2(const Unk_ov003_022052f4_V2 &o) { x = o.x; y = o.y; }
};

struct Unk_ov003_022052f4_Date {
    u16 a : 7;
    u16 b : 4;
    u16 c : 5;
};

struct Unk_ov003_022052f4_Item {
    virtual void v00();
    virtual void v04();
    virtual void v08();
    virtual void v0c();
    virtual void v10();
    virtual void v14();
    virtual void v18();
    virtual void v1c();
    virtual void v20();
    virtual void v24();
    virtual void v28();
    virtual void v2c();
    virtual void v30();
    virtual void v34();
    virtual void v38();
    virtual void v3c();
    virtual void v40();
    virtual void v44();
    virtual void v48();
    virtual void v4c();
    virtual void v50();
    virtual void v54();
    virtual void v58();
    virtual void v5c();
    virtual s32 vfunc_60(u16 *p);
};

struct Unk_ov003_022052f4_Obj {
    u8 pad_00[0x5c];
    Unk_ov003_022052f4_V3 unk_5c;
    u8 pad_68[0x8e - 0x68];
    s16 unk_8e;
    u8 pad_90[0x98 - 0x90];
    s32 unk_98;
    u8 pad_9c[0x154 - 0x9c];
    s32 unk_154;
    s32 unk_158;
    s32 unk_15c;
    u8 pad_160[4];
    Unk_ov003_022052f4_Item *unk_164;
    u8 unk_168;
    u8 pad_169[3];
    s32 unk_16c;
    u8 pad_170[0x1ce - 0x170];
    u8 unk_1ce;
    u8 unk_1cf;
    u8 pad_1d0[0x1fc - 0x1d0];
    u8 unk_1fc;
    u8 pad_1fd[0x7ec - 0x1fd];
    s32 unk_7ec;
    u8 pad_7f0[4];
    s32 unk_7f4;
    u8 pad_7f8[4];
    s32 unk_7fc;
    u8 pad_800[8];
    s32 unk_808;
    u8 pad_80c[4];
    s32 unk_810;
    s32 unk_814;
    u8 pad_818[0x8cc - 0x818];
    s32 unk_8cc;
    s32 unk_8d0;
    s32 unk_8d4;
    s32 unk_8d8;
    s32 unk_8dc;
    s32 unk_8e0;
};

typedef Unk_ov003_022052f4_Obj Obj;
typedef Unk_ov003_022052f4_V3 V3;
typedef Unk_ov003_022052f4_V2 V2;
typedef Unk_ov003_022052f4_Date Date;
typedef Unk_ov003_022052f4_Item Item;

extern "C" {
extern void *data_021c47c4;
extern u8 data_ov003_02230ae8[];
extern u8 data_ov003_02230ae4[];
extern u8 data_ov003_02230acc[];
extern u8 data_ov003_0222efb4[];

void func_02010a7c(u16 *out, Obj *o);
Item *func_020816cc(u32 a, u32 b);
Item *func_ov003_0222ebb0(u32 a);
BOOL func_0200e7c0(Obj *o);
u16 *func_020952d0();
u8 *func_020952c8();
s32 func_02010d20(Obj *o);
void func_0209d498(void *p);
s32 func_0200f23c(Obj *o);
s32 func_020b8fd8();
s32 func_02010c74(Obj *o);
void func_020987d0(u32 a, u32 b);
void func_0200f17c(Obj *o, s32 a, void *d);
void func_0200ead0(Obj *o);
BOOL func_0200ec44(Obj *o, u32 id);
s32 func_0200ec1c(Obj *o, u32 id);
void func_0200ec30(Obj *o, u32 id);
s32 func_ov003_022072b8(Obj *o, s32 *p, s32 a, s32 b);
BOOL func_0200e3c0(Obj *o, s32 a);
void func_0204ee10(s32 *a, s32 *b, V3 *v);
s32 func_0200f5b0(Obj *o);
s32 func_02042f44(s32 a, V2 *p, s32 k);
s32 func_0200f9bc(Obj *o);
void func_0200e208(Obj *o);
s32 func_02043f20(V2 *p);
void func_0200f3ec(V3 *out, Obj *o, V3 *pos, s16 *ang, void *arg);
u16 *func_0204ebd8(void *grid, s32 hx, s32 hy, s32 lx, s32 ly, u32 layer);
void func_ov003_0221cd34(s32 a, V2 *p, s32 b);
s32 func_020e972c(V3 *a, V3 *b);
s32 func_020e7b98(s32 a, s32 b);
BOOL func_02030d60(V3 *v);
s32 func_0200f7a0(Obj *o, V2 *p, s32 a, s32 b);
void func_0200f43c(V3 *out, Obj *o);
s32 func_0203081c(V3 *v, s32 *out, s32 a);
u16 *func_0204eba0(void *grid, V3 *v, u32 a);
s32 func_0200fa2c(Obj *o, V3 *v, u32 a);
s32 func_0200f8f8(Obj *o, V3 *v, s32 a, s32 b);
s32 func_0200f6d4(Obj *o, V3 *v, s32 a);

BOOL func_ov003_022052f4(Obj *o);
void func_ov003_022053e4(Obj *o);
void func_ov003_02205574(Obj *o);
void func_ov003_022055e4(Obj *o);
void func_ov003_022056c8(Obj *o);
void func_ov003_02205744(Obj *o);
BOOL func_ov003_02205894(Obj *o, V3 *out, V3 *tgt);
s32 func_ov003_02205928(Obj *o, V3 *p, u8 *f);
s32 func_ov003_02205a00(Obj *o, u8 *pa, u8 *pb, s32 *out);
BOOL func_ov003_02205b68(Obj *o, s32 *pa);
}

static inline BOOL Unk_ov003_022052f4_Rng(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) r = TRUE;
    return r;
}

static inline BOOL Unk_ov003_022052f4_RngV(volatile u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    u32 a = *p;
    u32 b = *p;
    if (b >= lo && a <= hi) r = TRUE;
    return r;
}

static inline BOOL Unk_ov003_02205744_Chk(u16 *p) {
    BOOL f8 = TRUE, f7 = TRUE, f6 = TRUE, f5 = TRUE, f4 = TRUE, f3 = TRUE, f2 = TRUE, f1 = TRUE, f0 = FALSE;
    u32 v = *p;
    if (v >= 0x26 && v <= 0x2a) f0 = TRUE;
    if (!f0) { if (v < 0x5d || v > 0x61) f1 = FALSE; }
    if (!f1) { if (v < 0x2f || v > 0x56) f2 = FALSE; }
    if (!f2) { if (v < 0x57 || v > 0x5b) f3 = FALSE; }
    if (!f3) { if (v < 0x66 || v > 0x68) f4 = FALSE; }
    if (!f4) { if (v != 0x69) f5 = FALSE; }
    if (!f5) { if (v < 0x6a || v > 0x6c) f6 = FALSE; }
    if (!f6) { if (v != 0x6d) f7 = FALSE; }
    if (!f7) { if (v < 0xc8 || v > 0xcf) f8 = FALSE; }
    return f8;
}

// forward declarations (functions are emitted in descending address order)
extern "C" BOOL func_ov003_022052f4(Obj *o);
extern "C" void func_ov003_022053e4(Obj *o);
extern "C" void func_ov003_02205574(Obj *o);
extern "C" void func_ov003_022055e4(Obj *o);
extern "C" void func_ov003_022056c8(Obj *o);
extern "C" void func_ov003_02205744(Obj *o);
extern "C" BOOL func_ov003_02205894(Obj *o, V3 *out, V3 *tgt);
extern "C" s32 func_ov003_02205928(Obj *o, V3 *p, u8 *f);
extern "C" s32 func_ov003_02205a00(Obj *o, u8 *pa, u8 *pb, s32 *out);
extern "C" BOOL func_ov003_02205b68(Obj *o, s32 *pa);
}

namespace ns_02205c28 {
struct Unk_ov003_02205c28_V3 {
    s32 x, y, z;
};

class Unk_020d5d84 : public Unk_020d8c7c {
public:
    virtual BOOL vfunc_04();
    virtual void vfunc_08(s32 a);
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_14(s32 a);
    virtual BOOL vfunc_1c();
    virtual BOOL vfunc_20();
    virtual BOOL vfunc_28();
    virtual BOOL vfunc_2c();

    /* 0x50 */ u8 unk_50[0xc];
    /* 0x5c */ Unk_ov003_02205c28_V3 unk_5c;
    /* 0x68 */ u8 pad_68[0x8e - 0x68];
    /* 0x8e */ s16 unk_8e;
    /* 0x90 */ u8 pad_90[0xd4 - 0x90];
};

class Unk_020d9670 : public Unk_020d5d84 {
public:
    Unk_020d9670();
    virtual ~Unk_020d9670();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_1c();
    virtual BOOL vfunc_48(void *a);
    virtual void vfunc_4c(u32 a, u8 b);
    virtual void *vfunc_50();
    virtual BOOL vfunc_54(void *a);
    virtual BOOL vfunc_58(void *a);
    virtual BOOL vfunc_5c(void *a);

    /* 0xd4 */ u8 unk_d4[0x10];
    /* 0xe4 */ s32 unk_e4;
    /* 0xe8 */ u16 unk_e8;
    /* 0xea */ u16 pad_ea;
};

struct Unk_ov003_02206120_V3 {
    s32 x, y, z;
    Unk_ov003_02206120_V3(s32 a, s32 b, s32 c) {
        x = a;
        y = b;
        z = c;
    }
};

struct Unk_ov003_02205c90_Bits {
    u32 a : 12;
    u32 f : 16;
    u32 b : 4;
};

struct Unk_ov003_02205e04_Rec {
    u8 pad_00[0xc];
    Unk_ov003_02205e58_Pair unk_0c;
};

static inline void Unk_ov003_02205e58_Set(Unk_ov003_02205e58_Pair *q, u32 a, u32 b) {
    q->a = a;
    q->b = b;
}

class Unk_ov003_02205c28_Obj : public Unk_020d9670 {
public:
    /* 0x0ec */ u8 pad_ec[0x2cc - 0xec];
    /* 0x2cc */ u8 unk_2cc[8];
    /* 0x2d4 */ Unk_ov003_02205c90_Bits unk_2d4;
    /* 0x2d8 */ u8 pad_2d8[0x458 - 0x2d8];
    /* 0x458 */ u16 unk_458;
    /* 0x45a */ u16 unk_45a;
    /* 0x45c */ u8 pad_45c[0x59c - 0x45c];
    /* 0x59c */ u8 unk_59c[0x628 - 0x59c];
    /* 0x628 */ Unk_ov003_02205c28_V3 unk_628;
    /* 0x634 */ u8 pad_634[0x688 - 0x634];
    /* 0x688 */ Unk_ov003_02205c28_V3 unk_688;
    /* 0x694 */ u8 pad_694[0x700 - 0x694];
    /* 0x700 */ s32 unk_700;
    /* 0x704 */ u8 pad_704[0x7d0 - 0x704];
    /* 0x7d0 */ s32 unk_7d0;
    /* 0x7d4 */ u8 unk_7d4;
    /* 0x7d5 */ u8 unk_7d5;
    /* 0x7d6 */ u8 pad_7d6[0x7ec - 0x7d6];
    /* 0x7ec */ s32 unk_7ec;
    /* 0x7f0 */ u8 pad_7f0[0x7f8 - 0x7f0];
    /* 0x7f8 */ s32 unk_7f8;
    /* 0x7fc */ s32 unk_7fc;
    /* 0x800 */ u8 pad_800[0x81e - 0x800];
    /* 0x81e */ u16 unk_81e;
    /* 0x820 */ u8 unk_820[0x82c - 0x820];
    /* 0x82c */ s32 unk_82c;
    /* 0x830 */ s32 unk_830;
    /* 0x834 */ s32 unk_834;
    /* 0x838 */ u8 pad_838[0x8ec - 0x838];
    /* 0x8ec */ u8 unk_8ec[2];
};

typedef Unk_ov003_02205c28_Obj Obj;
typedef Unk_ov003_02205c28_V3 V3;
typedef Unk_ov003_02205e04_Rec Rec;
typedef Unk_0200e2c0 Msg;
extern "C" void _ZN12Unk_0200e2c013func_0200e2c0Eiis(Msg *self, u32 a, u32 b, u32 c);

extern "C" {
extern void *data_020cbb18;
extern u8 *data_021c1b3c;
extern u8 data_ov003_02258f00;
extern V3 data_ov003_02258f18;

s32 func_020100d0(Obj *o);
s32 func_02007c08(Obj *o, s32 a);
void func_0200cb50(Obj *o, s32 a, s32 b, s32 c);
void func_0200c358(Obj *o, s32 a, s32 b, s32 c);
void func_0200ce98(Obj *o, s32 a, s32 b, s32 c);
void func_0200ff08(Obj *o);
void func_02010914(Obj *o);
s32 func_0200ef08(Obj *o);
void func_020109c4(Obj *o);
void func_0201071c(Obj *o);
void func_020103b4(Obj *o, s32 a, u32 b, u32 c);
void func_02010358(Obj *o, s32 a, u32 b, u32 c);
void func_0200ec30(Obj *o, u32 a);
void func_0200ec1c(Obj *o, u32 a);
void func_0200ecdc(Obj *o, u32 a);
void func_0200eb58(Obj *o, u32 a, u32 b);
s32 func_02056654(void *p);
s32 func_020565e8(void *p, s32 a);
s32 func_020729bc(void *g, s32 a);
s32 func_020e7b98(s32 a, s32 b);
s32 func_020e9650(void *a, void *b);
void func_02010d98(void *a, s32 b);
void func_02010a58(Obj *o, s16 *a);
void func_02010a7c(u16 *out, Obj *o);
void func_02010dbc(void *p, s32 a, s32 b, s32 c, s32 d);
void func_02094574(s32 a, s32 b, s32 c);
void func_0203ee38(V3 *a, V3 *b);
s32 func_02090330(s32 a, V3 *v, void *p, s32 b);
void func_020902d4(s32 a, V3 *v, void *p, s32 b);
void func_020902f8(s32 a);
s32 func_02097520(s32 a);
void func_02098738(s32 a, u16 *p);
u16 *func_02098744(s32 a);
void func_0205e24c(void *p, u16 *a, s32 b);
void func_0205e1a0(void *p, s32 a, s32 b, s32 c);
u8 *func_0205dfa4(void *p);
void func_0200f43c(V3 *out, Obj *o);
void func_0203a844();
void func_0203a598();
void func_02035b94(void *p);
void func_02035b9c(void *p);
s32 func_0200e248(Obj *o, Msg *m);

V3 *func_ov003_022232c8(s32 a);
s32 func_ov003_022232e8(s32 a);
s32 func_ov003_02224d14(s32 a);
V3 *func_ov003_02224ba4(s32 a);
void func_ov003_02224bc4(s32 a);

s32 func_ov003_02205c28(Obj *o);
namespace ovcall {
s32 func_ov003_02205c90(Obj *o);
s32 func_ov003_02205f98(Obj *o);
s32 func_ov003_02205eb8(Obj *o);
s32 func_ov003_02206120(Obj *o);
s32 func_ov003_022060b4(Obj *o);
s32 func_ov003_022062d4(Obj *o);
s32 func_ov003_02206378(Obj *o);
}
void func_ov003_02205c90(Obj *o);
void func_ov003_02205e44(u8 *src, u8 *a, u8 *b);
void func_ov003_02205e50(u8 *p, u32 a, u32 b);
s32 func_ov003_02205e58(Obj *o, u8 *p, u32 c, s32 id, s32 e);
void func_ov003_02205f98(Obj *o);
void func_ov003_02205eb8(Obj *o);
s32 func_ov003_0220605c(Obj *o, s32 a, s32 b);
void func_ov003_02206120(Obj *o);
void func_ov003_022060b4(Obj *o);
s32 func_ov003_0220627c(Obj *o, s32 a, s32 b);
void func_ov003_02206378(Obj *o);
void func_ov003_022062d4(Obj *o);
s32 func_ov003_02206574(Obj *o, s32 a, s32 b);
}

// forward declarations (functions are emitted in descending address order)
extern "C" s32 func_ov003_02205c28(Obj *o);
extern "C" void func_ov003_02205c64(Obj *o);
extern "C" void func_ov003_02205c90(Obj *o);
extern "C" s32 func_ov003_02205dd0(Obj *o, s32 a);
extern "C" void func_ov003_02205e04(Obj *o, Rec *r);
extern "C" void func_ov003_02205e44(u8 *src, u8 *a, u8 *b);
extern "C" void func_ov003_02205e50(u8 *p, u32 a, u32 b);
extern "C" s32 func_ov003_02205e58(Obj *o, u8 *p, u32 c, s32 id, s32 e);
extern "C" void func_ov003_02205e9c(Obj *o);
extern "C" void func_ov003_02205eb8(Obj *o);
extern "C" void func_ov003_02205f98(Obj *o);
extern "C" s32 func_ov003_02206034(Obj *o, s32 a);
extern "C" void func_ov003_02206040(Obj *o);
extern "C" s32 func_ov003_0220605c(Obj *o, s32 a, s32 b);
extern "C" void func_ov003_02206094(Obj *o);
extern "C" void func_ov003_022060b4(Obj *o);
extern "C" void func_ov003_02206120(Obj *o);
extern "C" void func_ov003_022061e0(Obj *o);
extern "C" s32 func_ov003_02206234(Obj *o, s32 a);
extern "C" void func_ov003_02206240(Obj *o);
extern "C" s32 func_ov003_0220627c(Obj *o, s32 a, s32 b);
extern "C" void func_ov003_022062b4(Obj *o);
extern "C" void func_ov003_022062d4(Obj *o);
extern "C" void func_ov003_02206378(Obj *o);
extern "C" void func_ov003_0220646c(Obj *o);
extern "C" s32 func_ov003_02206500(Obj *o, s32 a);
extern "C" void func_ov003_0220650c(Obj *o);
}

namespace ns_02206574 {
struct Unk_ov003_02206574_V3 {
    s32 x, y, z;
};

class Unk_020d5d84 : public Unk_020d8c7c {
public:
    virtual BOOL vfunc_04();
    virtual void vfunc_08(s32 a);
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_14(s32 a);
    virtual BOOL vfunc_1c();
    virtual BOOL vfunc_20();
    virtual BOOL vfunc_28();
    virtual BOOL vfunc_2c();

    /* 0x50 */ u8 unk_50[0xc];
    /* 0x5c */ Unk_ov003_02206574_V3 unk_5c;
    /* 0x68 */ u8 pad_68[0x8e - 0x68];
    /* 0x8e */ s16 unk_8e;
    /* 0x90 */ u8 pad_90[0xd4 - 0x90];
};

class Unk_020d9670 : public Unk_020d5d84 {
public:
    Unk_020d9670();
    virtual ~Unk_020d9670();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_1c();
    virtual BOOL vfunc_48(void *a);
    virtual void vfunc_4c(u32 a, u8 b);
    virtual void *vfunc_50();
    virtual BOOL vfunc_54(void *a);
    virtual BOOL vfunc_58(void *a);
    virtual BOOL vfunc_5c(void *a);

    /* 0xd4 */ u8 unk_d4[0x10];
    /* 0xe4 */ s32 unk_e4;
    /* 0xe8 */ u16 unk_e8;
    /* 0xea */ u16 pad_ea;
};

struct Unk_ov003_022067c4_Shared {
    /* 0x00 */ u32 unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08;
};

class Unk_020ddcf0 {
public:
    Unk_020ddcf0();
    virtual ~Unk_020ddcf0();
    virtual void vfunc_s08();
    virtual void vfunc_s0c();
    virtual void vfunc_s10();
    virtual void vfunc_s14();
    virtual void vfunc_s18();
    virtual void vfunc_s1c();

    void func_020a710c(const char *src);

    /* 0x04 */ char unk_04[0x1a];
    /* 0x1e */ u8 unk_1e;
    /* 0x1f */ u8 pad_1f[0x3c - 0x1f];
    /* 0x3c */ Unk_ov003_022067c4_Shared *unk_3c;
    /* 0x40 */ u8 pad_40[4];
};

struct Unk_ov003_02206c04_St {
    /* 0x00 */ s32 f0;
    /* 0x04 */ s32 f4;
    /* 0x08 */ s32 f8;
    /* 0x0c */ s32 fc;
    /* 0x10 */ s32 f10;
    /* 0x14 */ u16 f14;
    /* 0x16 */ u16 pad_16;
    /* 0x18 */ s32 f18;
};

struct Unk_ov003_022067c4_Pad {
    s32 v[2];
    Unk_ov003_022067c4_Pad() {}
    ~Unk_ov003_022067c4_Pad() {}
};

enum Unk_ov003_02206a84_Three { Unk_ov003_02206a84_THREE = 3 };

class Unk_ov003_02206574_Obj : public Unk_020d9670, public Unk_020ddcf0 {
public:
    /* 0x130 */ u8 pad_130[0x2cc - 0x130];
    /* 0x2cc */ u8 unk_2cc[8];
    /* 0x2d4 */ u8 pad_2d4[0x2dc - 0x2d4];
    /* 0x2dc */ s32 unk_2dc;
    /* 0x2e0 */ u8 pad_2e0[0x59c - 0x2e0];
    /* 0x59c */ u8 unk_59c[0x688 - 0x59c];
    /* 0x688 */ Unk_ov003_02206574_V3 unk_688;
    /* 0x694 */ u8 pad_694[0x6dc - 0x694];
    /* 0x6dc */ u8 unk_6dc[0x700 - 0x6dc];
    /* 0x700 */ s32 unk_700;
    /* 0x704 */ u8 pad_704[5];
    /* 0x709 */ u8 unk_709[0x7d0 - 0x709];
    /* 0x7d0 */ Unk_ov003_02206c04_St unk_7d0;
    /* 0x7ec */ s32 unk_7ec;
    /* 0x7f0 */ u8 pad_7f0[0x7f8 - 0x7f0];
    /* 0x7f8 */ s32 unk_7f8;
    /* 0x7fc */ s32 unk_7fc;
};

typedef Unk_ov003_02206574_Obj Obj;
typedef Unk_ov003_02206574_V3 V3;
typedef Unk_0200e2c0 Msg;
extern "C" void _ZN12Unk_0200e2c013func_0200e2c0Eiis(Msg *self, u32 a, u32 b, u32 c);

extern "C" {
extern void *data_020cbb18;
extern s16 data_02135f44[];
struct Unk_ov003_02206c04_Keys { u16 a; u16 b; s16 c; };
extern Unk_ov003_02206c04_Keys data_021f47d8;

s32 func_02007c08(Obj *o, s32 a);
void func_0200ce98(Obj *o, s32 a, s32 b, s32 c);
void func_02010914(Obj *o);
void func_020109c4(Obj *o);
void func_0201071c(Obj *o);
void func_02010358(Obj *o, s32 a, u32 b, u32 c);
void func_0200ec30(Obj *o, u32 a);
void func_0200ec1c(Obj *o, u32 a);
void func_0200ecdc(Obj *o, u32 a);
void func_0200eb58(Obj *o, u32 a, u32 b);
s32 func_0200ec44(Obj *o, u32 a);
s32 func_0200ec54(Obj *o, u32 a, void *v);
void func_0200f478(Obj *o, u32 a);
s32 func_0200f4c0(Obj *o, u32 a);
s32 func_0200f5b0(Obj *o);
s32 func_0200d640(Obj *o);
s32 func_0200d634(Obj *o);
s32 func_02056654(void *p);
s32 func_020565e8(void *p, s32 a);
s32 func_020729bc(void *g, s32 a);
s32 func_02097520(s32 a);
void func_02098738(s32 a, u16 *p);
u16 *func_02098744(s32 a);
s32 func_02098eb0(u16 *p);
void func_020946f0(s32 a, s32 b);
void func_02099064(s32 a);
void func_0205e24c(void *p, u16 *a, s32 b);
void func_0205e1a0(void *p, s32 a, s32 b, s32 c);
void func_0205e184(void *p, s32 a);
void func_0205d354(void *p, void *q);
void func_0203ee38(V3 *a, V3 *b);
s32 func_02090330(s32 a, V3 *v, void *p, s32 b);
void func_020902d4(s32 a, void *v, void *p, s32 b);
void func_020902b0(s32 a, V3 *v, s32 b, s32 c);
s32 func_0209750c();
void func_0209875c(s32 a, s32 b);
u8 *func_02098868(s32 a);
s32 func_02098044(s32 a, s32 b);
void func_0209801c(s32 a, s32 b);
void func_0203e47c(void *self, Unk_020ddcf0 *sec);
void func_0203e488(void *self, Unk_020ddcf0 *sec);
void func_0203a598();
void func_0203a844();
void func_0203d7f8();
void func_02034d70(s32 a);
void func_02034d84(s32 a);
s32 func_02034dd0(s32 a, s32 b, s32 c);
void func_02034e10(s32 a, s32 b, s32 c, s32 d);
void func_020339bc(void *out, V3 *v, s32 a, s32 b);
void func_02033988(void *p);
s32 func_0200e248(Obj *o, Msg *m);
s32 func_01ffcb0c(s32 a, s32 b);
s32 func_01ffc5a4(s32 a, s32 b);
s32 func_01ffc854(V3 *v);
void func_020e9960(V3 *out, V3 *a, V3 *b);
s32 func_ov003_0221950c(s32 a, V3 *v);
s32 func_ov003_02210628(Obj *o, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g);

s32 func_ov003_02206574(Obj *o, s32 a, s32 b);
s32 func_ov003_022065cc(Obj *o);
s32 func_ov003_02206670(Obj *o);
s32 func_ov003_02206770(Obj *o, s32 a, s32 b);
void func_ov003_022067c4(Obj *o);
s32 func_ov003_02206a84(Obj *o);
s32 func_ov003_02206bb0(Obj *o, s32 a, s32 b);
void func_ov003_02206c04(Obj *o);
void func_ov003_02206de8(Obj *o);
}

namespace Unk_ov003_02206be8_Ns {
extern "C" s32 func_ov003_02206c04(Obj *o);
extern "C" s32 func_ov003_02206de8(Obj *o);
}
extern "C" void func_020a710c(void *self, const char *s);


// forward declarations (functions are emitted in descending address order)
extern "C" s32 func_ov003_02206574(Obj *o, s32 a, s32 b);
extern "C" void func_ov003_022065ac(Obj *o);
extern "C" s32 func_ov003_022065cc(Obj *o);
extern "C" s32 func_ov003_02206670(Obj *o);
extern "C" void func_ov003_02206710(Obj *o);
extern "C" s32 func_ov003_02206750(Obj *o, s32 a);
extern "C" void func_ov003_0220675c(Obj *o);
extern "C" s32 func_ov003_02206770(Obj *o, s32 a, s32 b);
extern "C" void func_ov003_022067a8(Obj *o);
extern "C" void func_ov003_022067c4(Obj *o);
extern "C" void func_ov003_022069c4();
extern "C" void func_ov003_022069c8(Obj *o);
extern "C" s32 func_ov003_02206a1c(Obj *o, s32 a, s32 b);
extern "C" void func_ov003_02206a68(Obj *o);
extern "C" s32 func_ov003_02206a84(Obj *o);
extern "C" s32 func_ov003_02206adc(Obj *o, s32 a);
extern "C" void func_ov003_02206ae8(Obj *o);
extern "C" s32 func_ov003_02206bb0(Obj *o, s32 a, s32 b);
extern "C" void func_ov003_02206be8(Obj *o);
extern "C" void func_ov003_02206c04(Obj *o);
extern "C" void func_ov003_02206de8(Obj *o);
}

namespace ns_02206e94 {
struct Unk_ov003_02206e94_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

struct Unk_ov003_02206e94_Rec {
    s32 unk_00;
    union {
        s32 unk_04;
        u8 unk_04_b;
    };
    s32 unk_08;
    s32 unk_0c;
    s32 unk_10;
    s16 unk_14;
    s32 unk_18;
};

struct Unk_ov003_02206e94_Obj {
    u8 pad_00[0x5c];
    Unk_ov003_02206e94_V3 unk_5c;
    u8 pad_68[0x8e - 0x68];
    s16 unk_8e;
    u8 pad_90[0x98 - 0x90];
    s32 unk_98;
    u8 pad_9c[0x230 - 0x9c];
    u8 unk_230[0x2cc - 0x230];
    u8 unk_2cc[8];
    Unk_ov003_02206e94_Bits unk_2d4;
    u8 pad_2d8[4];
    s32 unk_2dc;
    u8 unk_2e0;
    u8 pad_2e1[0x59c - 0x2e1];
    u8 unk_59c[0x688 - 0x59c];
    s32 unk_688;
    s32 unk_68c;
    s32 unk_690;
    u8 pad_694[0x6dc - 0x694];
    u8 unk_6dc[0x700 - 0x6dc];
    s32 unk_700;
    u8 pad_704[0x7d0 - 0x704];
    Unk_ov003_02206e94_Rec unk_7d0;
    s32 unk_7ec;
    u8 pad_7f0[0x7f8 - 0x7f0];
    s32 unk_7f8;
    s32 unk_7fc;
    u8 pad_800[0x8e4 - 0x800];
    u8 unk_8e4;
    u8 pad_8e5[0x8ec - 0x8e5];
    u8 unk_8ec[4];
    u8 pad_8f0[0xc80 - 0x8f0];
    u16 unk_c80;
};

typedef Unk_ov003_02206e94_Obj Obj;
typedef Unk_ov003_02206e94_V3 V3;
typedef Unk_0200e2c0 Msg;
extern "C" void _ZN12Unk_0200e2c013func_0200e2c0Eiis(Msg *self, u32 a, u32 b, u32 c);
typedef Unk_ov003_02206e94_Rec Rec;

class Unk_ov003_02206fd8_X {
public:
    // ctor func_020339bc(V3 *, s32, s32), dtor func_02033988 are called explicitly
    u8 pad_00[0x34];
    s32 unk_34;
    u8 pad_38[0x40 - 0x38];
};

extern "C" void func_020339bc(Unk_ov003_02206fd8_X *self, V3 *v, s32 a, s32 b);
extern "C" void func_02033988(Unk_ov003_02206fd8_X *self);

extern "C" {
extern void *data_020cbb18;
extern u8 data_ov003_02230ad0[];
extern u8 data_ov003_02230ad8[];

void func_020902f8(s32 a);
s32 func_020902d4(s32 a, void *b, s32 c, s32 d);
s32 func_02090330(s32 a, void *b, s32 c, s32 d);
void func_020902b0(s32 a, V3 *b, s32 c, s32 d);
void func_020946f0(s32 a, s32 b);
s32 func_020103b4(Obj *o, s32 a, u32 b, u32 c);
s32 func_02010358(Obj *o, s32 a, u32 b, u32 c);
s32 func_0200d640(Obj *o);
s32 func_0200d634(Obj *o);
s32 func_0200ec1c(Obj *o, u32 a);
s32 func_0200ec30(Obj *o, u32 a);
s32 func_0200ec44(Obj *o, u32 a);
s32 func_0200ec54(Obj *o, u32 a, void *b);
s32 func_0200ecdc(Obj *o, u32 a);
s32 func_0200f5b0(Obj *o);
s32 func_0200f594(Obj *o, s32 x, s32 z, s16 a);
s32 func_0200f4c0(Obj *o, u32 a);
s32 func_0200f3ec(V3 *out, Obj *o, void *pos, void *ang, u32 arg);
s32 func_0200ce98(Obj *o, s32 a, s32 b, s32 c);
s32 func_02007c08(Obj *o, s32 a);
void func_0205e1a0(void *p, s32 a, s32 b, s32 c);
void func_0205e184(void *p, s32 a);
s32 func_02056654(void *p);
s32 func_020565e8(void *p, s32 a);
void func_02053f20(void *p);
s32 func_02010914(Obj *o);
s32 func_020109c4(Obj *o);
s32 func_0201071c(Obj *o);
s32 func_02010d5c(s32 a, s32 b, s32 c);
void func_02010a34(Obj *o, s32 *a);
void func_02010a7c(u16 *a, Obj *o);
s32 func_020729bc(void *g, u32 a);
s32 func_020b8df0();
void *func_0209750c();
s32 func_02098044(void *p, s32 a);
s32 func_0209801c(void *p, s32 a);
void func_0203ee38(V3 *a, V3 *b);
void func_0204ed8c(V3 *out, u32 a, u32 b);
s32 func_0200e248(Obj *o, Msg *m);

s32 func_ov003_0221950c(s32 a, V3 *v);
s32 func_ov003_02219bf0(s32 a, V3 *v);
void func_ov003_02205c28(Obj *o);

void func_ov003_02206e94(Obj *o, s32 a);
s32 func_ov003_02206edc(Obj *o, s32 a);
void func_ov003_02206f0c(Obj *o, s32 *a);
s32 func_ov003_02206f88(Obj *o, s32 a, s32 b, s32 c);
void func_ov003_02206fc4(Obj *o);
void func_ov003_02206fd8(Obj *o);
s32 func_ov003_022070fc(Obj *o);
void func_ov003_0220714c(Obj *o, s32 a);
s32 func_ov003_022071ec(Obj *o, s32 a);
s32 func_ov003_02207224(Obj *o, u8 *a);
void func_ov003_022072a4(u8 *s, u8 *a, u8 *b);
void func_ov003_022072b0(u8 *p, u8 a, u8 b);
s32 func_ov003_022072b8(Obj *o, s32 *p, s32 b, s32 c);
void func_ov003_022072fc(Obj *o);
void func_ov003_02207324(Obj *o);
void func_ov003_0220739c(Obj *o);
s32 func_ov003_022073c8(Obj *o, s32 a);
s32 func_ov003_022073d4(Obj *o);
s32 func_ov003_02207404(Obj *o, s32 a, s32 b);
void func_ov003_0220743c(Obj *o);
void func_ov003_02207464(Obj *o);
void func_ov003_02207550(Obj *o);
void func_ov003_022075a4(Obj *o);
s32 func_ov003_022076e8(Obj *o, s32 a);
void func_ov003_022076f4(Obj *o);
s32 func_ov003_02207790(Obj *o, s32 a, s32 b);
}

namespace ns_02206fc4 {
extern "C" s32 func_ov003_02206fd8(Obj *o);
}

static inline BOOL Eq2(V3 *p, volatile V3 *v) {
    s32 z = p->z;
    s32 x = p->x;
    return x == v->x && z == v->z;
}

struct Unk_ov003_0220714c_T {
    s32 x, y, z;
    Unk_ov003_0220714c_T() {}
    ~Unk_ov003_0220714c_T() {}
};

struct Unk_ov003_022072b8_P {
    u8 a, b;
};

namespace ns_022072fc {
extern "C" s32 func_ov003_02207324(Obj *o);
}

namespace ns_0220743c {
extern "C" s32 func_ov003_02207550(Obj *o);
}

static inline BOOL Range(volatile u16 *p, u32 lo, u32 hi) {
    u32 a = *p;
    u32 b = *p;
    BOOL r = FALSE;
    if (b >= lo && a <= hi) r = TRUE;
    return r;
}

// forward declarations (functions are emitted in descending address order)
extern "C" void func_ov003_02206e94(Obj *o, s32 a);
extern "C" s32 func_ov003_02206edc(Obj *o, s32 a);
extern "C" void func_ov003_02206f0c(Obj *o, s32 *a);
extern "C" s32 func_ov003_02206f88(Obj *o, s32 a, s32 b, s32 c);
extern "C" void func_ov003_02206fc4(Obj *o);
extern "C" void func_ov003_02206fd8(Obj *o);
extern "C" s32 func_ov003_022070fc(Obj *o);
extern "C" void func_ov003_0220714c(Obj *o, s32 a);
extern "C" s32 func_ov003_022071ec(Obj *o, s32 a);
extern "C" s32 func_ov003_02207224(Obj *o, u8 *a);
extern "C" void func_ov003_022072a4(u8 *s, u8 *a, u8 *b);
extern "C" void func_ov003_022072b0(u8 *p, u8 a, u8 b);
extern "C" s32 func_ov003_022072b8(Obj *o, s32 *p, s32 b, s32 c);
extern "C" void func_ov003_022072fc(Obj *o);
extern "C" void func_ov003_02207324(Obj *o);
extern "C" void func_ov003_0220739c(Obj *o);
extern "C" s32 func_ov003_022073c8(Obj *o, s32 a);
extern "C" s32 func_ov003_022073d4(Obj *o);
extern "C" s32 func_ov003_02207404(Obj *o, s32 a, s32 b);
extern "C" void func_ov003_0220743c(Obj *o);
extern "C" void func_ov003_02207464(Obj *o);
extern "C" void func_ov003_02207550(Obj *o);
extern "C" void func_ov003_022075a4(Obj *o);
extern "C" s32 func_ov003_022076e8(Obj *o, s32 a);
extern "C" void func_ov003_022076f4(Obj *o);
extern "C" s32 func_ov003_02207790(Obj *o, s32 a, s32 b);
}

namespace ns_022077c8 {
struct Unk_ov003_022077c8_Pair {
    s32 a, b;
};

struct Unk_ov003_022077c8_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

struct Unk_ov003_022077c8_Obj {
    u8 pad_00[0x5c];
    Unk_ov003_022077c8_V3 unk_5c;
    u8 pad_68[0x8e - 0x68];
    s16 unk_8e;
    u8 pad_90[0x2cc - 0x90];
    u32 unk_2cc;
    Unk_ov003_022077c8_Bits unk_2d0;
    Unk_ov003_022077c8_Bits unk_2d4;
    u8 pad_2d8[0x59c - 0x2d8];
    u8 unk_59c[0x6dc - 0x59c];
    u8 unk_6dc[0x700 - 0x6dc];
    s32 unk_700;
    u8 pad_704[0x7d0 - 0x704];
    s32 unk_7d0;
    s32 unk_7d4;
    s32 unk_7d8;
    u8 pad_7dc[0x7ec - 0x7dc];
    s32 unk_7ec;
    u8 pad_7f0[0x7f8 - 0x7f0];
    s32 unk_7f8;
    u32 unk_7fc;
    u8 pad_800[0x8ec - 0x800];
    u8 unk_8ec[0x10];
};

struct Unk_ov003_022077c8_Rec {
    s32 unk_00;
    u8 unk_04;
    u8 pad_05[3];
    s32 unk_08;
};

typedef Unk_ov003_022077c8_Obj Obj;
typedef Unk_ov003_022077c8_V3 V3;
typedef Unk_ov003_022077c8_Pair Pair;
typedef Unk_0200e2c0 Msg;
extern "C" void _ZN12Unk_0200e2c013func_0200e2c0Eiis(Msg *self, s32 a, s32 b, s16 c);

extern "C" {
extern void *data_020cbb18;
extern u8 *data_021c1b3c;
extern u8 data_021c3cc0;

void func_02010358(Obj *o, s32 a, u32 b, u32 c);
void func_020103b4(Obj *o, s32 a, u32 b, u32 c);
void func_02010914(Obj *o);
void func_0201071c(Obj *o);
void func_02010a58(Obj *o, s16 *a);
void func_02010a7c(u16 *out, Obj *o);
void func_02010d98(void *out, s32 a);
void func_0200ec1c(Obj *o, u32 a);
void func_0200ec30(Obj *o, u32 a);
void func_0200ecdc(Obj *o, u32 a);
void func_0200ce98(Obj *o, s32 a, s32 b, s32 c);
s32 func_02007c08(Obj *o, s32 a);
s32 func_0200f5b0(Obj *o);
s32 func_0200f4c0(Obj *o, s32 a);
void func_0200ed9c(Obj *o);
void func_0200f258(Obj *o);
void func_0200f32c(Obj *o);
s32 func_0200eee4(Obj *o, Pair *p);
s32 func_0200e248(Obj *o, Msg *m);
void func_0200f594(Obj *o, s32 a, s32 b, s32 c);
s32 func_02008770(Obj *o, s16 v, u32 a, u32 b);
s32 func_020565e8(void *a, s32 b);
s32 func_02056654(void *a);
void func_0205668c(void *p, u32 a, s32 b, s32 c, u32 d);
void func_0205e1a0(void *a, u32 b, u32 c, u32 d);
void func_020351bc(void *a);
void func_02035214(void *a);
void func_02034d70(s32 a);
void func_02034dd0(s32 a, s32 b, s32 c);
void func_0200402c(s32 a);
s32 func_0203d76c();
void func_0203da7c();
s32 func_020729bc(void *g, u32 a);
s32 func_0204b25c(u16 *p);
s32 func_0204b2d4(u16 *p);
void func_0204ee10(s32 *x, s32 *y, V3 *v);
s32 func_0204da0c();
s32 func_0204d700(s32 o, V3 *v, s32 *a, s32 *b);
s32 func_0204d684(s32 o, V3 *v, s32 *a, s32 *b);
s32 func_020b4934();
void func_020b4f18(s32 a, s32 b, void *c, s32 d, s32 e, s32 f, s32 g);
s32 func_02090330(s32 a, void *b, void *c, s32 d);
s32 func_020902d4(s32 h, void *a, void *b, s32 c);
void func_020769dc(void *p, s32 *out, s32 *x, s32 *y, s32 *z);
void func_02076a04(void *p, s32 a, s32 x, s32 y, s32 z);
s32 func_020e7b98(s32 a, s32 b);
void func_ov003_02210628(Obj *o, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g);
void func_ov003_0221cd34(u32 a, Pair *p, s32 b);
void func_ov003_02208108(void *r, s32 a, s32 b, s32 c, u32 d, u32 e);

void func_ov003_022077e4(Obj *o);
void func_ov003_022078e0(Obj *o);
s32 func_ov003_0220798c(Obj *o, s32 a, s16 b);
void func_ov003_022079e0(Obj *o);
void func_ov003_02207aec(Obj *o);
s32 func_ov003_02207c08(Obj *o, u32 a, s32 b, s16 c);
void func_ov003_02207c58(Obj *o);
s32 func_ov003_02207d08(Obj *o, s32 a, s16 b);
s32 func_ov003_02207d9c(Obj *o, s32 a, s16 b);
void func_ov003_02207e1c(Obj *o);
s32 func_ov003_02207df4(Obj *o);
void func_ov003_02207eb4(void *a, V3 *v);
void func_ov003_02207ecc(void *a, V3 *v);
void func_ov003_02207ee8(V3 *d, V3 v);
s32 func_ov003_02207efc(Obj *o, V3 v, s32 a, s16 b);
void func_ov003_02207f40(V3 *d, V3 v);
void func_ov003_02207fbc(Obj *o);
void func_ov003_0220801c(Obj *o);
void func_ov003_02208048(Obj *o);
}

namespace Unk_ov003_022077c8_Impl {
extern "C" s32 func_ov003_022077e4(Obj *o);
}

static inline BOOL Unk_ov003_022078e0_IsTwo(u8 v) {
    if (v == 2) return TRUE;
    return FALSE;
}

namespace Unk_ov003_022079c4_Impl {
extern "C" s32 func_ov003_022079e0(Obj *o);
}

struct Unk_ov003_022080a0_V3 {
    s32 x, y, z;
    Unk_ov003_022080a0_V3() {}
    ~Unk_ov003_022080a0_V3() {}
};

// forward declarations (functions are emitted in descending address order)
extern "C" void func_ov003_022077c8(Obj *o);
extern "C" void func_ov003_022077e4(Obj *o);
extern "C" void func_ov003_022078e0(Obj *o);
extern "C" s32 func_ov003_02207938(Obj *o, s16 a);
extern "C" void func_ov003_02207944(Obj *o);
extern "C" s32 func_ov003_0220798c(Obj *o, s32 a, s16 b);
extern "C" void func_ov003_022079c4(Obj *o);
extern "C" void func_ov003_022079e0(Obj *o);
extern "C" void func_ov003_02207aec(Obj *o);
extern "C" s32 func_ov003_02207b30(Obj *o, s16 a);
extern "C" void func_ov003_02207b44(Obj *o, Msg *m);
extern "C" s32 func_ov003_02207c08(Obj *o, u32 a, s32 b, s16 c);
extern "C" s32 func_ov003_02207c44(Obj *o);
extern "C" void func_ov003_02207c58(Obj *o);
extern "C" s32 func_ov003_02207cb0(Obj *o, s16 a);
extern "C" void func_ov003_02207cbc(Obj *o);
extern "C" s32 func_ov003_02207d08(Obj *o, s32 a, s16 b);
extern "C" void func_ov003_02207d40(Obj *o);
extern "C" s32 func_ov003_02207d54(Obj *o, s16 a);
extern "C" void func_ov003_02207d60(Obj *o);
extern "C" s32 func_ov003_02207d9c(Obj *o, s32 a, s16 b);
extern "C" s32 func_ov003_02207dd4(Obj *o);
extern "C" s32 func_ov003_02207df4(Obj *o);
extern "C" void func_ov003_02207e1c(Obj *o);
extern "C" void func_ov003_02207e3c(Obj *o, s16 a);
extern "C" void func_ov003_02207e6c(Obj *o, Msg *m);
extern "C" void func_ov003_02207eb4(void *a, V3 *v);
extern "C" void func_ov003_02207ecc(void *a, V3 *v);
extern "C" void func_ov003_02207ee8(V3 *d, V3 v);
extern "C" s32 func_ov003_02207efc(Obj *o, V3 v, s32 a, s16 b);
extern "C" void func_ov003_02207f40(V3 *d, V3 v);
extern "C" void func_ov003_02207f54(Obj *o);
extern "C" void func_ov003_02207fbc(Obj *o);
extern "C" void func_ov003_0220801c(Obj *o);
extern "C" void func_ov003_02208048(Obj *o);
extern "C" void func_ov003_0220809c();
extern "C" void func_ov003_022080a0(Obj *o, Msg *m);
}

namespace ns_02208108 {
struct Unk_ov003_02208190_V3 {
    s32 x, y, z;
    Unk_ov003_02208190_V3() {}
    Unk_ov003_02208190_V3(s32 a, s32 b, s32 c) { x = a; y = b; z = c; }
    Unk_ov003_02208190_V3(const Unk_ov003_02208190_V3 &o) { x = o.x; y = o.y; z = o.z; }
};

struct Unk_ov003_02208190_Pair {
    s32 a, b;
    Unk_ov003_02208190_Pair() {}
    Unk_ov003_02208190_Pair(const Unk_ov003_02208190_Pair &o) { a = o.a; b = o.b; }
};

struct Unk_ov003_02208190_RecA {
    s32 unk_00;
    s32 unk_04;
    u16 unk_08;
    u8 unk_0a;
    u8 unk_0b;
    u8 unk_0c;
    u8 unk_0d;
    u8 unk_0e;
    u8 unk_0f;
};

struct Unk_ov003_02208190_RecC {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    u8 unk_0c;
    u8 unk_0d;
    u8 unk_0e;
    u8 unk_0f;
};

struct Unk_ov003_02208190_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

struct Unk_ov003_02208190_V3D : Unk_ov003_02208190_V3 {
    Unk_ov003_02208190_V3D(s32 a, s32 b, s32 c) : Unk_ov003_02208190_V3(a, b, c) {}
    ~Unk_ov003_02208190_V3D() {}
};

struct Unk_ov003_02208190_VV {
    volatile s32 x, y, z;
    Unk_ov003_02208190_VV(s32 a, s32 b, s32 c) { x = a; y = b; z = c; }
};

struct Unk_ov003_02208190_VD : Unk_ov003_02208190_V3 {
    Unk_ov003_02208190_VD() {}
    ~Unk_ov003_02208190_VD() {}
};

typedef Unk_ov003_02208190_V3 V3;
typedef Unk_ov003_02208190_VV VV;
typedef Unk_ov003_02208190_VD VD;
typedef Unk_ov003_02208190_V3D V3D;
typedef Unk_ov003_02208190_Pair Pair;
typedef Unk_ov003_02208190_RecA RecA;
typedef Unk_ov003_02208190_RecC RecC;

struct Unk_ov003_02208190_Obj {
    u8 pad_00[0x5c];
    V3 unk_5c;
    u8 pad_68[0x8e - 0x68];
    s16 unk_8e;
    u8 pad_90[0x2cc - 0x90];
    u8 unk_2cc[8];
    Unk_ov003_02208190_Bits unk_2d4;
    u8 pad_2d8[0x2e0 - 0x2d8];
    u8 unk_2e0;
    u8 pad_2e1[0x700 - 0x2e1];
    s32 unk_700;
    u8 pad_704[0x7d0 - 0x704];
    s32 unk_7d0;
    u8 pad_7d4[0x7ec - 0x7d4];
    s32 unk_7ec;
    s32 unk_7f0;
    s32 unk_7f4;
    s32 unk_7f8;
    s32 unk_7fc;
    u8 pad_800[0x814 - 0x800];
    s32 unk_814;
    u8 pad_818[0x8ec - 0x818];
    u8 unk_8ec[0x10];
    u8 pad_8fc[0xc80 - 0x8fc];
    u16 unk_c80;
};

typedef Unk_0200e2c0 Msg;
extern "C" void _ZN12Unk_0200e2c013func_0200e2c0Eiis(Msg *self, s32 a, s32 b, s16 c);
typedef Unk_ov003_02208190_Obj Obj;

extern "C" {
extern void *data_020cbb18;

s32 func_0200e248(Obj *o, Msg *m);
void *func_02007c08(Obj *o, s32 a);
s32 func_02056654(void *p);
s32 func_020565e8(void *p, s32 a);
s32 func_0200ce98(Obj *o, s32 a, s32 b, s32 c);
s32 func_020729bc(void *g, s32 a);
void func_02010914(Obj *o);
void func_0201071c(Obj *o);
s32 func_0200ef08(Obj *o);
s32 func_0200ede8(Obj *o, V3 *v);
void func_02010d98(void *a, s32 b);
void func_02010a58(Obj *o, s16 *a);
void func_02010358(Obj *o, s32 a, s32 b, s32 c);
void func_020103b4(Obj *o, s32 a, s32 b, s32 c);
void func_0200ec1c(Obj *o, s32 a);
s32 func_0200ec44(Obj *o, s32 a);
void func_0200ec30(Obj *o, s32 a);
void func_0200ecdc(Obj *o, s32 a);
void func_0204ee10(s32 *a, s32 *b, V3 *v);
void func_0204edd8(V3 *out, s32 a);
void func_0204ed8c(V3 *out, s32 a, s32 b);
void func_02090330(s32 a, void *b, void *c, s32 d);
void func_02076a2c(void *a, s32 *b, s32 *c);
void func_02076a6c(void *a, s32 b, s32 c);
s32 func_020e7b98(s32 a, s32 b);

void func_ov003_0221bf88(s32 a, Pair p);
void func_ov003_0221cd34(s32 a, Pair p, s32 b);
void func_ov003_0221977c(s32 a, V3 v);
void func_ov003_02205c28(Obj *o);
void func_ov003_02208a58(void *a, Pair *p);
void func_ov003_02208a64(void *a, Pair *p);
void func_ov003_02208a70(RecA *r, u32 a, s32 ang, V3 v);
void func_ov003_02208a88(Obj *o, Pair p, s32 a, s32 b, s32 c);

void func_ov003_02208108(void *p, s16 a, s32 b, s32 c, u8 d, u8 e);
s32 func_ov003_0220812c(Obj *o, s32 x, s32 z, u8 a, u8 b, s32 c, s16 d);
void func_ov003_0220817c(void *p, s32 a, s32 b, u8 c, u8 d);
void func_ov003_02208190(Obj *o);
void func_ov003_02208248(Obj *o);
void func_ov003_022082a4(Obj *o);
void func_ov003_0220832c(Obj *o);
void func_ov003_02208358(Obj *o);
void func_ov003_022083bc(Obj *o, s32 a);
void func_ov003_02208420(Obj *o, u8 *m);
void func_ov003_022084a8(u8 *p, s32 *a, s32 *b, u8 *c);
void func_ov003_022084c0(u8 *p, s32 a, s32 b, u8 c);
void func_ov003_022084d8(RecA *r, s32 a, s32 x, s32 z, u8 b, u8 c);
s32 func_ov003_022084f4(Obj *o, s32 x, s32 z, bool a, bool b, s32 c, s32 d);
void func_ov003_02208544(void *p, s32 a, s32 b, u8 c, u8 d);
void func_ov003_02208558(Obj *o);
void func_ov003_022085bc(Obj *o);
void func_ov003_022085f8(Obj *o);
void func_ov003_0220864c(Obj *o);
void func_ov003_02208678(Obj *o);
void func_ov003_022086c4(Obj *o);
void func_ov003_022086c8(Obj *o, u8 *m);
void func_ov003_02208754(RecC *r, s32 a, V3 v);
s32 func_ov003_02208764(Obj *o, V3 *v, s32 a, s16 b);
void func_ov003_022087b8(V3 *d, V3 v);
void func_ov003_022087c8(Obj *o);
void func_ov003_02208810(Obj *o);
void func_ov003_022088d8(Obj *o);
void func_ov003_02208904(Obj *o, s32 a);
void func_ov003_02208984(Obj *o, s32 a);
void func_ov003_022089d4(Obj *o, u8 *m);
}

// forward declarations (functions are emitted in descending address order)
extern "C" void func_ov003_02208108(void *p, s16 a, s32 b, s32 c, u8 d, u8 e);
extern "C" s32 func_ov003_0220812c(Obj *o, s32 x, s32 z, u8 a, u8 b, s32 c, s16 d);
extern "C" void func_ov003_0220817c(void *p, s32 a, s32 b, u8 c, u8 d);
extern "C" void func_ov003_02208190(Obj *o);
extern "C" void func_ov003_02208248(Obj *o);
extern "C" void func_ov003_022082a4(Obj *o);
extern "C" void func_ov003_0220832c(Obj *o);
extern "C" void func_ov003_02208358(Obj *o);
extern "C" void func_ov003_022083bc(Obj *o, s32 a);
extern "C" void func_ov003_02208420(Obj *o, u8 *m);
extern "C" void func_ov003_022084a8(u8 *p, s32 *a, s32 *b, u8 *c);
extern "C" void func_ov003_022084c0(u8 *p, s32 a, s32 b, u8 c);
extern "C" void func_ov003_022084d8(RecA *r, s32 a, s32 x, s32 z, u8 b, u8 c);
extern "C" s32 func_ov003_022084f4(Obj *o, s32 x, s32 z, bool a, bool b, s32 c, s32 d);
extern "C" void func_ov003_02208544(void *p, s32 a, s32 b, u8 c, u8 d);
extern "C" void func_ov003_02208558(Obj *o);
extern "C" void func_ov003_022085bc(Obj *o);
extern "C" void func_ov003_022085f8(Obj *o);
extern "C" void func_ov003_0220864c(Obj *o);
extern "C" void func_ov003_02208678(Obj *o);
extern "C" void func_ov003_022086c4(Obj *o);
extern "C" void func_ov003_022086c8(Obj *o, u8 *m);
extern "C" void func_ov003_02208754(RecC *r, s32 a, V3 v);
extern "C" s32 func_ov003_02208764(Obj *o, V3 *v, s32 a, s16 b);
extern "C" void func_ov003_022087b8(V3 *d, V3 v);
extern "C" void func_ov003_022087c8(Obj *o);
extern "C" void func_ov003_02208810(Obj *o);
extern "C" void func_ov003_022088d8(Obj *o);
extern "C" void func_ov003_02208904(Obj *o, s32 a);
extern "C" void func_ov003_02208984(Obj *o, s32 a);
extern "C" void func_ov003_022089d4(Obj *o, u8 *m);
}

namespace ns_02208a58 {
struct Unk_ov003_02208a58_Pair {
    s32 a, b;
    Unk_ov003_02208a58_Pair(const Unk_ov003_02208a58_Pair &o) {
        a = o.a;
        b = o.b;
    }
};

struct Unk_ov003_02208a58_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

struct Unk_ov003_02208a58_Rec {
    s32 unk_00;
    Unk_ov003_02208a58_V3 unk_04;
    s16 unk_10;
    u8 unk_12;
    u8 pad_13;
};

struct Unk_ov003_02208a58_Sec {
    virtual void vfunc_00();
};

struct Unk_ov003_02208a58_P0 {
    virtual void vfunc_00();
    u8 pad_04[0x5c - 4];
    Unk_ov003_02208a58_V3 unk_5c;
    u8 pad_68[0x8e - 0x68];
    s16 unk_8e;
    u8 pad_90[0xec - 0x90];
};

struct Unk_ov003_02208a58_Obj : Unk_ov003_02208a58_P0, Unk_ov003_02208a58_Sec {
    u8 pad_f0[0x2cc - 0xf0];
    u8 unk_2cc[8];
    Unk_ov003_02208a58_Bits unk_2d4;
    u8 pad_2d8[0x59c - 0x2d8];
    u8 unk_59c[0x28];
    u8 unk_5c4[0x64];
    Unk_ov003_02208a58_V3 unk_628;
    u8 pad_634[0x6f0 - 0x634];
    Unk_ov003_02208a58_V3 unk_6f0;
    s32 unk_6fc;
    s32 unk_700;
    u8 pad_704[0x7d0 - 0x704];
    Unk_ov003_02208a58_Rec unk_7d0;
    u8 pad_7e4[0x7ec - 0x7e4];
    s32 unk_7ec;
    u8 pad_7f0[0x7f8 - 0x7f0];
    s32 unk_7f8;
    u32 unk_7fc;
    u8 pad_800[0x8ec - 0x800];
    u8 unk_8ec;
};

typedef Unk_ov003_02208a58_Obj Obj;
typedef Unk_ov003_02208a58_V3 V3;
typedef Unk_ov003_02208a58_Pair Pair;
typedef Unk_ov003_02208a58_Rec Rec;
typedef Unk_0200e2c0 Msg;
extern "C" void _ZN12Unk_0200e2c013func_0200e2c0Eiis(Msg *self, s32 a, s32 b, s16 c);

extern "C" {
extern void *data_020cbb18;
extern void *data_021c47c4;
extern u8 data_ov003_02258f00;
extern V3 data_ov003_02258f18;

void func_02010914(Obj *o);
void func_0201071c(Obj *o);
void func_0201065c(Obj *o);
void func_020103b4(Obj *o, s32 a, u32 b, u32 c);
void func_02010358(Obj *o, s32 a, u32 b, u32 c);
s32 func_02056654(void *p);
s32 func_020729bc(void *g, u32 a);
s32 func_02007c08(Obj *o, s32 a);
void func_0200f478(Obj *o, s32 a);
void func_0200ec54(Obj *o, s32 a, V3 *v);
s32 func_020565e8(void *p, u32 a);
void func_0205f92c(void *p, u32 a);
void func_0205fae8(void *p, V3 *v);
void func_0200ecdc(Obj *o, u32 a);
void func_0200ec30(Obj *o, u32 a);
s32 func_0200ec44(Obj *o, u32 a);
void func_0200ec1c(Obj *o, u32 a);
s32 func_0203d7c4();
void func_0200ce98(Obj *o, s32 a, s32 b, s32 c);
void func_02007d30(Obj *o, s32 a, s32 b, s32 c);
void func_0200c358(Obj *o, s32 a, s32 b, s32 c);
void func_020b8e60(s32 h);
void func_0205e1a0(void *p, u32 a, u32 b, u32 c);
s32 func_02095574(s32 *out, s32 a, u32 b);
s32 func_ov003_02205c28(Obj *o);
void func_0203ee38(V3 *a, V3 *b);
s32 func_02090330(u32 id, V3 *v, s16 *h, u32 z);
void func_020902d4(s32 h, V3 *v, u32 z);
void func_020902f8(s32 h);
void func_0200f43c(V3 *out, Obj *o);
s32 func_0200f8f8(Obj *o, V3 *v, s32 a, s32 b);
void func_0200ede8(Obj *o, V3 *v);
void func_0200f504(Obj *o, s32 a);
s32 func_020e7b98(s32 a, s32 b);
void func_0204ed8c(V3 *out, u32 a, u32 b);
u16 *func_0204eba0(void *grid, V3 *v, u32 a);
void func_ov003_02219b84(s32 h, V3 *v);
void func_ov003_02219b18(s32 h, V3 *v);
void func_0203e47c(Obj *o, Unk_ov003_02208a58_Sec *s);
s32 func_0200e248(Obj *o, Msg *m);

void func_ov003_02208ad8(u8 *d, Pair v, u32 c);
void func_ov003_02208bc0(Obj *o);
void func_ov003_02208b6c(Obj *o);
s32 func_ov003_02208d18(Obj *o, s32 a, s16 b);
void func_ov003_02208ec8(Obj *o);
void func_ov003_02208e38(Obj *o);
void func_ov003_02208d90(Obj *o);
void func_ov003_02209024(u8 *p, u8 *out);
void func_ov003_0220902c(u8 *p, u32 v);
s32 func_ov003_02209030(Obj *o, s32 a, s16 b);
void func_ov003_02209274(Obj *o);
void func_ov003_02209170(Obj *o);
void func_ov003_022090a8(Obj *o);
}

struct Unk_ov003_02209314_Arg {
    u8 pad_00[0xc];
    u16 unk_0c;
    u8 unk_0e;
    u8 unk_0f;
    u8 unk_10;
};

// forward declarations (functions are emitted in descending address order)
extern "C" void func_ov003_02208a58(u8 *p, Pair *out);
extern "C" void func_ov003_02208a64(u8 *p, Pair *v);
extern "C" void func_ov003_02208a70(u8 *r, u32 a, u32 b, V3 *v);
extern "C" s32 func_ov003_02208a88(Obj *o, Pair *p, u32 c, s32 b, s16 d);
extern "C" void func_ov003_02208ad8(u8 *d, Pair v, u32 c);
extern "C" void func_ov003_02208ae4(Obj *o);
extern "C" void func_ov003_02208b00();
extern "C" void func_ov003_02208b04(Obj *o);
extern "C" s32 func_ov003_02208b18(Obj *o, s32 a, s16 b);
extern "C" void func_ov003_02208b50(Obj *o);
extern "C" void func_ov003_02208b6c(Obj *o);
extern "C" void func_ov003_02208bc0(Obj *o);
extern "C" s32 func_ov003_02208c94(Obj *o, s16 b);
extern "C" void func_ov003_02208ca0(Obj *o);
extern "C" s32 func_ov003_02208d18(Obj *o, s32 a, s16 b);
extern "C" void func_ov003_02208d50(Obj *o);
extern "C" void func_ov003_02208d90(Obj *o);
extern "C" void func_ov003_02208e38(Obj *o);
extern "C" void func_ov003_02208ec8(Obj *o);
extern "C" void func_ov003_02208fb0(Obj *o);
extern "C" s32 func_ov003_02208ff8(Obj *o, s16 b);
extern "C" void func_ov003_02209004(Obj *o);
extern "C" void func_ov003_02209024(u8 *p, u8 *out);
extern "C" void func_ov003_0220902c(u8 *p, u32 v);
extern "C" s32 func_ov003_02209030(Obj *o, s32 a, s16 b);
extern "C" void func_ov003_02209068(Obj *o);
extern "C" void func_ov003_022090a8(Obj *o);
extern "C" void func_ov003_02209170(Obj *o);
extern "C" void func_ov003_02209274(Obj *o);
extern "C" void func_ov003_02209284(Obj *o);
extern "C" void func_ov003_02209310();
extern "C" void func_ov003_02209314(Obj *o, Unk_ov003_02209314_Arg *a);
}

namespace ns_022093bc {
struct Unk_ov003_022093bc_V3 {
    s32 x, y, z;
};

struct Unk_ov003_022093bc_Pair {
    s32 a, b;
};

// view A of the 0x7d0 record
struct Unk_ov003_022093bc_RecA {
    u16 unk_00;
    s16 unk_02;
    u8 unk_04;
    u8 unk_05;
    u8 unk_06;
    u8 unk_07;
};

// view B
struct Unk_ov003_022093bc_RecB {
    u8 unk_00;
    u8 unk_01;
    u8 unk_02;
};

// view C
struct Unk_ov003_022093bc_RecC {
    Unk_ov003_022093bc_V3 unk_00;
    u8 unk_0c;
};

struct Unk_ov003_022093bc_Sub {
    u8 unk_00;
    u8 unk_01;
    u8 unk_02;
    u8 unk_03;
    u8 unk_04;
};

struct Unk_ov003_022093bc_Ptr {
    u32 unk_00;
    u32 unk_04;
    s32 unk_08;
};

class Unk_020e2a30 {
public:
    Unk_020e2a30();
    virtual ~Unk_020e2a30();
};

class Unk_ov003_022093bc_Prim {
public:
    virtual void vfunc_00();
    u8 pad_04[0x58];
    /* 0x5c */ Unk_ov003_022093bc_V3 unk_5c;
    u8 pad_68[0xec - 0x68];
};

struct Unk_ov003_022093bc_Msg3 {
    u8 pad_00[0xc];
    u8 b0;
    u8 b1;
    u8 b2;
};

typedef Unk_ov003_022093bc_V3 V3;
typedef Unk_ov003_022093bc_Pair Pair;
typedef Unk_0200e2c0 Msg;
extern "C" void _ZN12Unk_0200e2c013func_0200e2c0Eiis(Msg *self, s32 a, s32 b, s16 c);
typedef Unk_ov003_022093bc_Pay Pay;
typedef Unk_ov003_022093bc_Sub Sub;
typedef Unk_ov003_022093bc_Ptr Ptr;

struct Unk_ov003_022093bc_Obj : public Unk_ov003_022093bc_Prim, public Unk_020e2a30 {
    /* 0x0f0 */ u8 pad_f0[0x10a - 0xf0];
    /* 0x10a */ u8 unk_10a;
    u8 pad_10b[0x128 - 0x10b];
    /* 0x128 */ Ptr *unk_128;
    u8 pad_12c[0x2cc - 0x12c];
    /* 0x2cc */ u32 unk_2cc[2];
    /* 0x2d4 */ s32 unk_2d4;
    /* 0x2d8 */ u8 pad_2d8[0x700 - 0x2d8];
    /* 0x700 */ s32 unk_700;
    /* 0x704 */ u8 pad_704[0x7d0 - 0x704];
    /* 0x7d0 */ union {
        Unk_ov003_022093bc_RecA a;
        Unk_ov003_022093bc_RecB b;
        Unk_ov003_022093bc_RecC c;
    } unk_7d0;
    u8 pad_7e0[0x7ec - 0x7e0];
    /* 0x7ec */ s32 unk_7ec;
    u8 pad_7f0[0x7f8 - 0x7f0];
    /* 0x7f8 */ s32 unk_7f8;
    /* 0x7fc */ u32 unk_7fc;
    u8 pad_800[0x808 - 0x800];
    /* 0x808 */ s32 unk_808;
    u8 pad_80c[0x814 - 0x80c];
    /* 0x814 */ s32 unk_814;
    /* 0x818 */ s32 unk_818;
    /* 0x81c */ u16 unk_81c;
    u8 pad_81e[0x82c - 0x81e];
    /* 0x82c */ s32 unk_82c;
    /* 0x830 */ s32 unk_830;
    /* 0x834 */ s32 unk_834;
    u8 pad_838[0x8ec - 0x838];
    /* 0x8ec */ Sub unk_8ec;
};
typedef Unk_ov003_022093bc_Obj Obj;

extern "C" {
extern void *data_020cbb18;

s32 func_0200e248(Obj *o, Msg *m);
s32 func_020729bc(void *g, u32 a);
void func_02007c08_dummy();
s32 func_02007c08(Obj *o, s32 a);
s32 func_02056654(void *p);
s32 func_020565e8(void *p, s32 a);
void func_020103b4(Obj *o, s32 a, u32 b, u32 c);
void func_02010358(Obj *o, s32 a, u32 b, u32 c);
void func_02010914(Obj *o);
void func_0201071c(Obj *o);
void func_020109c4(Obj *o);
void func_0200ec1c(Obj *o, u32 a);
void func_0200ec30(Obj *o, u32 a);
s32 func_0200ec44(Obj *o, u32 a);
void func_0200ecdc(Obj *o, u32 a);
void func_0200ce98(Obj *o, s32 a, s32 b, s32 c);
void func_0200f504(Obj *o, s32 a);
void func_0200f004(Obj *o, s32 a);
s32 func_0200f4c0(Obj *o, s32 a);
void func_0200ede8(Obj *o, V3 *v);
void func_0204ed8c(V3 *out, u32 a, u32 b);
void func_0204ee10(s32 *a, s32 *b, V3 *v);
s32 func_020e7b98(s32 a, s32 b);
void func_02076964(void *p, u32 v);
void func_02099124(void *p);
s32 func_0206e75c(u32 v);
s32 func_0206ec6c();
s32 func_0206ed18();
void func_0203d7f8();
s32 func_0203d820();
void func_0203a598();
void func_0203a844();
void func_0203e47c(Obj *o, Unk_020e2a30 *s);
void func_0203e488(Obj *o, Unk_020e2a30 *s);
void *func_0209750c();
void func_020a710c(void *p, void *s);
s32 func_02098044(void *p, s32 a);
void func_0209801c(void *p, s32 a);
void func_02062650(void *b, void *s);
void func_0206260c(void *b);
void func_020679ec(void *a, s32 b, void *c, s32 d);
void func_02034d70(s32 a);
void func_02034dd0(s32 a, s32 b, s32 c);
void func_02034e10(s32 a, s32 b, s32 c, s32 d);
s32 func_02098ffc();
s32 func_02043380(u32 a, s32 b, s32 c, u32 d);

void func_ov003_02209d50(Obj *o);
s32 func_ov003_022093bc(Obj *o, u32 k, Pair *p, u32 v, s32 a, s16 b);
void func_ov003_02209408(Obj *o);
void func_ov003_02209428(Obj *o);
void func_ov003_022094ec(Obj *o);
void func_ov003_022094fc();
void func_ov003_02209500(Obj *o, Msg *m);
void func_ov003_022095cc(Sub *s, u32 v, u8 a, u8 b, u8 c);
s32 func_ov003_022095e8(Obj *o, u32 k, Pair *p, u32 v, s32 a, s16 b);
void func_ov003_02209634(Obj *o);
void func_ov003_02209650(Obj *o);
void func_ov003_02209810(Obj *o);
void func_ov003_0220987c(Obj *o, s32 a);
void func_ov003_022098bc(Obj *o, Unk_ov003_022093bc_Msg3 *m);
void func_ov003_02209900(Sub *s, u8 *a, u8 *b, u8 *c);
void func_ov003_02209914(Sub *s, u8 a, u8 b, u8 c);
s32 func_ov003_0220991c(Obj *o, Pair *p, u32 c, u32 d, s32 e);
void func_ov003_02209964(Obj *o);
void func_ov003_022099d0(Obj *o);
}

static inline BOOL Unk_ov003_022099d0_R(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) r = TRUE;
    return r;
}

// forward declarations (functions are emitted in descending address order)
extern "C" s32 func_ov003_022093bc(Obj *o, u32 k, Pair *p, u32 v, s32 a, s16 b);
extern "C" void func_ov003_02209408(Obj *o);
extern "C" void func_ov003_02209428(Obj *o);
extern "C" void func_ov003_022094ec(Obj *o);
extern "C" void func_ov003_022094fc();
extern "C" void func_ov003_02209500(Obj *o, Msg *m);
extern "C" void func_ov003_022095cc(Sub *s, u32 v, u8 a, u8 b, u8 c);
extern "C" s32 func_ov003_022095e8(Obj *o, u32 k, Pair *p, u32 v, s32 a, s16 b);
extern "C" void func_ov003_02209634(Obj *o);
extern "C" void func_ov003_02209650(Obj *o);
extern "C" void func_ov003_02209810(Obj *o);
extern "C" void func_ov003_0220987c(Obj *o, s32 a);
extern "C" void func_ov003_022098bc(Obj *o, Unk_ov003_022093bc_Msg3 *m);
extern "C" void func_ov003_02209900(Sub *s, u8 *a, u8 *b, u8 *c);
extern "C" void func_ov003_02209914(Sub *s, u8 a, u8 b, u8 c);
extern "C" s32 func_ov003_0220991c(Obj *o, Pair *p, u32 c, u32 d, s32 e);
extern "C" void func_ov003_02209964(Obj *o);
extern "C" void func_ov003_022099d0(Obj *o);
}

namespace ns_02209d50 {
struct Unk_ov003_02209d50_V3D : Unk_ov003_02209d50_V3 {
    Unk_ov003_02209d50_V3D() {}
    ~Unk_ov003_02209d50_V3D() {}
};

struct Unk_ov003_02209d50_P3 {
    s32 x, y, z;
};

struct Unk_ov003_02209d50_V2 {
    s32 x, y;
    Unk_ov003_02209d50_V2() {}
    Unk_ov003_02209d50_V2(const Unk_ov003_02209d50_V2 &o) { x = o.x; y = o.y; }
};

struct Unk_ov003_02209d50_Blk {
    s32 v[12];
};

struct Unk_ov003_02209d50_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

struct Unk_ov003_02209d50_Rec {
    Unk_ov003_02209d50_V3 unk_00;
    u8 unk_0c;
    u8 unk_0d;
};

struct Unk_ov003_02209d50_Rec2 {
    s32 unk_00;
    Unk_ov003_02209d50_V3 unk_04;
};

struct Unk_ov003_02209d50_Obj {
    u8 pad_00[0x5c];
    Unk_ov003_02209d50_V3 unk_5c;
    u8 pad_68[0x8e - 0x68];
    s16 unk_8e;
    u8 pad_90[0xc4 - 0x90];
    Unk_ov003_02209d50_V3 unk_c4;
    s16 unk_d0;
    u8 pad_d2[0x294 - 0xd2];
    Unk_ov003_02209d50_Blk unk_294;
    u8 pad_2c4[0x2cc - 0x2c4];
    u8 unk_2cc[4];
    Unk_ov003_02209d50_Bits unk_2d0;
    Unk_ov003_02209d50_Bits unk_2d4;
    u8 pad_2d8[0x628 - 0x2d8];
    Unk_ov003_02209d50_V3 unk_628;
    u8 pad_634[0x694 - 0x634];
    Unk_ov003_02209d50_Blk unk_694;
    u8 pad_6c4[0x700 - 0x6c4];
    s32 unk_700;
    u8 pad_704[0x7d0 - 0x704];
    Unk_ov003_02209d50_Rec unk_7d0;
    u8 pad_7e0[0x7ec - 0x7e0];
    s32 unk_7ec;
    u8 pad_7f0[0x7f8 - 0x7f0];
    s32 unk_7f8;
    s32 unk_7fc;
    u8 pad_800[0x818 - 0x800];
    s32 unk_818;
    u16 unk_81c;
    u16 unk_81e;
    Unk_ov003_02209d50_V3 unk_820;
    s32 unk_82c;
    s32 unk_830;
    s32 unk_834;
    u8 pad_838[0x8ec - 0x838];
    u8 unk_8ec[0x10];
};

typedef Unk_ov003_02209d50_Obj Obj;
typedef Unk_ov003_02209d50_V3 V3;
typedef Unk_ov003_02209d50_V2 V2;
typedef Unk_ov003_02209d50_V3D V3D;
typedef Unk_ov003_02209d50_Blk Blk;
typedef Unk_ov003_02209d50_Bits Bits;
typedef Unk_ov003_02209d50_Rec Rec;
typedef Unk_ov003_02209d50_Rec2 Rec2;
typedef Unk_0200e2c0 Msg;
extern "C" void _ZN12Unk_0200e2c013func_0200e2c0Eiis(Msg *self, u32 a, u32 b, u32 c);
typedef Unk_ov003_02209d50_Pay Pay;

extern "C" {
extern void *data_020cbb18;
extern void *data_021c47c4;

s32 func_02010914(Obj *o);
void func_02090330(s32 a, V3 *b, s16 *c, s32 d);
void func_0200ecdc(Obj *o, u32 a);
void func_0200ec30(Obj *o, u32 a);
s32 func_0200ec1c(Obj *o, u32 a);
BOOL func_0200ec44(Obj *o, u32 a);
void func_0204ee10(s32 *a, s32 *b, V3 *v);
void func_02030504(s32 a, s32 b);
void func_ov003_02219c5c(s32 a, V3 v, u32 b);
void func_ov003_02219908(s32 a, V3 v, s16 b);
void func_0200e7f4(Obj *o);
void func_0200f004(Obj *o, s32 a);
void func_0203ee38(void *a, void *b);
s32 func_020729bc(void *g, s32 a);
void func_02010358(Obj *o, s32 a, s32 b, s32 c);
BOOL func_0204b2d4(u16 *p);
s32 func_0204b25c(u16 *p);
s32 func_02076964(void *p, u32 a);
u16 func_0207694c(void *p);
void func_0204ed8c(V3 *out, s32 x, s32 y);
u16 *func_0204ebd8(void *grid, s32 hx, s32 hy, s32 lx, s32 ly, u32 layer);
void func_02034dd0(s32 a, s32 b, s32 c);
void func_020787f8(V3 *v);
s32 func_0200e248(Obj *o, Msg *m);
void func_020109c4(Obj *o);
void func_0200ede8(Obj *o, V3 *v);
void func_0201071c(Obj *o);
BOOL func_02056654(void *p);
s32 func_02007c08(Obj *o, s32 a);
void func_0200ce98(Obj *o, s32 a, s32 b, s32 c);

void func_ov003_02209d50(Obj *o);
void func_ov003_02209ef4(Obj *o, s32 p);
void func_ov003_02209f68(Obj *o, s32 a);
void func_ov003_02209fc8(Obj *o, Msg *m);
void func_ov003_0220a27c(u8 *p, s32 *xy, u16 *a, u8 *b);
void func_ov003_0220a29c(u8 *p, V2 v, u16 a, u8 b);
s32 func_ov003_0220a2bc(Obj *o, V3 v, u16 a, u8 b, s32 c, s32 d);
s32 func_ov003_0220a344(Obj *o, V3 v, u8 x, s32 c, s32 e);
void func_ov003_0220a39c(Pay *d, V3 v, u16 a, u8 b);
void func_ov003_0220a3b4(Obj *o);
void func_ov003_0220a410(Obj *o);
void func_ov003_0220a484(Obj *o);
void func_ov003_0220a5e4(Obj *o);
}

static inline BOOL Unk_ov003_02209fc8_Eq(u16 *p) {
    if (func_0204b2d4(p)) {
        u16 w = 0xfff1;
        if (func_0204b25c(p) == func_0204b25c(&w)) return TRUE;
        return FALSE;
    }
    if (*p == 0xfff1) return TRUE;
    return FALSE;
}

static inline BOOL Unk_ov003_02209fc8_Rng(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) r = TRUE;
    return r;
}

namespace Unk_ov003_02209ef4_P {
extern "C" void func_ov003_02219c5c(s32 a, V3 *v, u32 b);
}

static inline BOOL Unk_ov003_02209fc8_IsNone(u16 *p) {
    return Unk_ov003_02209fc8_Eq(p);
}
// An object with an (empty) inline constructor and destructor keeps its stack slot although no code touches it;
// the original frame has such an unused u16 slot between loc and the first inline temporary.
struct Unk_ov003_02209fc8_ItE { u16 v; Unk_ov003_02209fc8_ItE() {} ~Unk_ov003_02209fc8_ItE() {} };

// forward declarations (functions are emitted in descending address order)
extern "C" void func_ov003_02209d50(Obj *o);
extern "C" void func_ov003_02209ef4(Obj *o, s32 p);
extern "C" void func_ov003_02209f68(Obj *o, s32 a);
extern "C" void func_ov003_02209fc8(Obj *o, Msg *m);
extern "C" void func_ov003_0220a27c(u8 *p, s32 *xy, u16 *a, u8 *b);
extern "C" void func_ov003_0220a29c(u8 *p, V2 v, u16 a, u8 b);
extern "C" s32 func_ov003_0220a2bc(Obj *o, V3 v, u16 a, u8 b, s32 c, s32 d);
extern "C" s32 func_ov003_0220a344(Obj *o, V3 v, u8 x, s32 c, s32 e);
extern "C" void func_ov003_0220a39c(Pay *d, V3 v, u16 a, u8 b);
extern "C" void func_ov003_0220a3b4(Obj *o);
extern "C" void func_ov003_0220a410(Obj *o);
extern "C" void func_ov003_0220a484(Obj *o);
extern "C" void func_ov003_0220a5e4(Obj *o);
}

namespace ns_0220a680 {
struct Unk_ov003_0220a684_V3 {
    s32 x, y, z;
    Unk_ov003_0220a684_V3() {}
    Unk_ov003_0220a684_V3(const Unk_ov003_0220a684_V3 &o) { x = o.x; y = o.y; z = o.z; }
    ~Unk_ov003_0220a684_V3() {}
};

struct Unk_ov003_0220a684_Pair {
    s32 a, b;
    Unk_ov003_0220a684_Pair() {}
    Unk_ov003_0220a684_Pair(s32 x, s32 y) { a = x; b = y; }
    Unk_ov003_0220a684_Pair(const Unk_ov003_0220a684_Pair &o) { a = o.a; b = o.b; }
};

struct Unk_ov003_0220a684_Rec {
    u8 a, b, c, pad_03;
    Unk_ov003_0220a684_V3 pos;
    u8 pad_10[0x1c - 0x10];
};

struct Unk_ov003_0220a684_P3 {
    u8 id;
    u8 pad_01[3];
    Unk_ov003_0220a684_V3 pos;
    Unk_ov003_0220a684_V3 GetPos() { return pos; }
};

struct Unk_ov003_0220a684_B3 {
    u8 a, b, c;
};

class Unk_ov003_0220a684_Item {
public:
    virtual void v00();
    virtual void v04();
    virtual void v08();
    virtual void v0c();
    virtual void v10();
    virtual void v14();
    virtual void v18();
    virtual void v1c();
    virtual void v20();
    virtual void v24();
    virtual void v28();
    virtual void v2c();
    virtual void v30();
    virtual void v34();
    virtual void v38();
    virtual void v3c();
    virtual void v40();
    virtual void v44();
    virtual void v48();
    virtual void v4c();
    virtual void v50();
    virtual void v54();
    virtual void v58();
    virtual void v5c();
    virtual s32 vfunc_60(u16 *p);
};

class Unk_020d5d84 : public Unk_020d8c7c {
public:
    virtual BOOL vfunc_04();
    virtual void vfunc_08(s32 a);
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_14(s32 a);
    virtual BOOL vfunc_1c();
    virtual BOOL vfunc_20();
    virtual BOOL vfunc_28();
    virtual BOOL vfunc_2c();

    /* 0x50 */ u8 unk_50[0xc];
    /* 0x5c */ Unk_ov003_0220a684_V3 unk_5c;
    /* 0x68 */ u8 pad_68[0x8e - 0x68];
    /* 0x8e */ s16 unk_8e;
    /* 0x90 */ u8 pad_90[8];
    /* 0x98 */ s32 unk_98;
    /* 0x9c */ u8 pad_9c[0xd4 - 0x9c];
};

class Unk_020d9670 : public Unk_020d5d84 {
public:
    Unk_020d9670();
    virtual ~Unk_020d9670();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_1c();
    virtual BOOL vfunc_48(void *a);
    virtual void vfunc_4c(u32 a, u8 b);
    virtual void *vfunc_50();
    virtual BOOL vfunc_54(void *a);
    virtual BOOL vfunc_58(void *a);
    virtual BOOL vfunc_5c(void *a);

    /* 0xd4 */ u8 unk_d4[0x10];
    /* 0xe4 */ s32 unk_e4;
    /* 0xe8 */ u16 unk_e8;
    /* 0xea */ u16 pad_ea;
};

struct Unk_ov003_0220a684_Shared {
    /* 0x00 */ u32 unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08;
};

class Unk_020ddcf0 {
public:
    Unk_020ddcf0();
    virtual ~Unk_020ddcf0();
    virtual void vfunc_s08();
    virtual void vfunc_s0c();
    virtual void vfunc_s10();
    virtual void vfunc_s14();
    virtual void vfunc_s18();
    virtual void vfunc_s1c();

    void func_020a710c(const char *src);

    /* 0x04 */ char unk_04[0x1a];
    /* 0x1e */ u8 unk_1e;
    /* 0x1f */ u8 pad_1f[0x3c - 0x1f];
    /* 0x3c */ Unk_ov003_0220a684_Shared *unk_3c;
    /* 0x40 */ u8 pad_40[4];
};

class Unk_ov003_0220a684_Obj : public Unk_020d9670, public Unk_020ddcf0 {
public:
    /* 0x130 */ u8 pad_130[0x164 - 0x130];
    /* 0x164 */ Unk_ov003_0220a684_Item *unk_164;
    /* 0x168 */ u8 unk_168;
    /* 0x169 */ u8 pad_169[0x2cc - 0x169];
    /* 0x2cc */ u8 unk_2cc[8];
    /* 0x2d4 */ u8 pad_2d4[0x700 - 0x2d4];
    /* 0x700 */ s32 unk_700;
    /* 0x704 */ u8 pad_704[0x7d0 - 0x704];
    /* 0x7d0 */ Unk_ov003_0220a684_Rec unk_7d0;
    /* 0x7ec */ s32 unk_7ec;
    /* 0x7f0 */ u8 pad_7f0[0x7f8 - 0x7f0];
    /* 0x7f8 */ s32 unk_7f8;
    /* 0x7fc */ s32 unk_7fc;
    /* 0x800 */ u8 pad_800[8];
    /* 0x808 */ s32 unk_808;
    /* 0x80c */ u8 pad_80c[0x8ec - 0x80c];
    /* 0x8ec */ u8 unk_8ec[4];
};

typedef Unk_ov003_0220a684_Obj Obj;
typedef Unk_ov003_0220a684_V3 V3;
typedef Unk_ov003_0220a684_Pair Pair;
typedef Unk_ov003_0220a684_Rec Rec;
typedef Unk_ov003_0220a684_P3 P3;
typedef Unk_ov003_0220a684_B3 B3;
typedef Unk_ov003_0220a684_Item Item;
typedef Unk_0200e2c0 Msg;
extern "C" void _ZN12Unk_0200e2c013func_0200e2c0Eiis(Msg *self, u32 a, u32 b, s16 c);

extern "C" {
extern void *data_020cbb18;
extern void *data_021c47c4;
extern s16 data_02135f44[];

s32 func_02010358(Obj *o, s32 a, u32 b, u32 c);
s32 func_0200ec30(Obj *o, u32 a);
s32 func_0200ec1c(Obj *o, u32 a);
s32 func_0200ec44(Obj *o, u32 a);
s32 func_0200ecdc(Obj *o, u32 a);
s32 func_0200e248(Obj *o, Msg *m);
s32 func_020109c4(Obj *o);
s32 func_0201071c(Obj *o);
s32 func_02010914(Obj *o);
s32 func_02010a34(Obj *o, s32 *a);
void func_02010a7c(u16 *out, Obj *o);
s32 func_02010d50(s32 a, s32 b);
s32 func_02010d5c(s32 a, s32 b, s32 c);
s32 func_02056654(void *p);
s32 func_020565e8(void *p, s32 a);
s32 func_02007c08(Obj *o, s32 a);
s32 func_0200ce98(Obj *o, s32 a, s32 b, s32 c);
s32 func_020729bc(void *g, s32 a);
s32 func_0200ef08(Obj *o);
void func_0200f45c(V3 *out, Obj *o);
void func_0204ee10(s32 *a, s32 *b, V3 *v);
void func_0204ed8c(V3 *out, u32 a, u32 b);
u16 *func_0204ebd8(void *grid, s32 hx, s32 hy, s32 lx, s32 ly, u32 layer);
s32 func_01ffcb0c(s32 a, s32 b);
s32 func_02090330(s32 a, V3 *v, s16 *ang, ...);

s32 func_ov003_0221cb54(Pair *p);
void func_ov003_0221cd34(s32 a, Pair p, s32 b);
s32 func_ov003_022135c4(void *p, s32 a);
s32 func_ov003_02205928(Obj *o, V3 *p, u8 *f);
s32 func_ov003_0220a344(Obj *o, V3 v, s32 a, s32 b, s32 c);
s32 func_ov003_022093bc(Obj *o, s32 a, Pair p, s32 b, s32 c, s32 d);

void func_ov003_0220a680(Obj *o);
s32 func_ov003_0220a684(Obj *o, Msg *m);
void func_ov003_0220a700(Rec *r, u32 id, V3 v);
s32 func_ov003_0220a710(Obj *o, u32 id, V3 v, s32 b, s16 c);
void func_ov003_0220a764(P3 *p, u32 id, V3 v);
void func_ov003_0220a774(Obj *o);
void func_ov003_0220a7bc(Obj *o);
void func_ov003_0220a7fc(Obj *o);
void func_ov003_0220ab20(Obj *o);
void func_ov003_0220ab80(Obj *o, s32 x);
void func_ov003_0220abd4(Obj *o, Msg *m);
void func_ov003_0220ac38(u8 *s, u8 *a, u8 *b, u8 *c, u8 *d);
void func_ov003_0220ac54(u8 *d, u8 a, u8 b, u8 c, u8 e);
void func_ov003_0220ac68(Rec *r, Pair p, u8 c);
s32 func_ov003_0220ac74(Obj *o, u32 id, Pair p, s32 b, s32 c);
void func_ov003_0220acc4(B3 *d, Pair p, u32 c);
void func_ov003_0220acd0(Obj *o);
void func_ov003_0220ad10(Obj *o);
s32 func_ov003_0220ad50(Obj *o, s16 x);
void func_ov003_0220ad5c(Obj *o);
s32 func_ov003_0220ad70(Obj *o, u32 a, s16 b);
void func_ov003_0220ada8(Obj *o);
void func_ov003_0220adc4(Obj *o);
void func_ov003_0220ae04(Obj *o);
s32 func_ov003_0220ae34(Obj *o, s16 x);
void func_ov003_0220ae40(Obj *o);
s32 func_ov003_0220ae54(Obj *o, u32 a, s16 b);
void func_ov003_0220ae8c(Obj *o);
s32 func_ov003_0220af3c(Obj *o, V3 *v, u8 f);
void func_ov003_0220b0f0(Obj *o);
}

static inline BOOL Unk_ov003_0220a7fc_Chk(u16 *p) {
    BOOL f9 = TRUE, f8 = TRUE, f7 = TRUE, f6 = TRUE, f5 = TRUE, f4 = TRUE, f3 = TRUE, f2 = TRUE, f1 = FALSE;
    u32 v = *p;
    if (v >= 0x26 && v <= 0x2a) f1 = TRUE;
    if (!f1) {
        if (!(v >= 0x5d && v <= 0x61)) f2 = FALSE;
    }
    if (!f2) {
        if (!(v >= 0x2f && v <= 0x56)) f3 = FALSE;
    }
    if (!f3) {
        if (!(v >= 0x57 && v <= 0x5b)) f4 = FALSE;
    }
    if (!f4) {
        if (!(v >= 0x66 && v <= 0x68)) f5 = FALSE;
    }
    if (!f5) {
        if (v != 0x69) f6 = FALSE;
    }
    if (!f6) {
        if (!(v >= 0x6a && v <= 0x6c)) f7 = FALSE;
    }
    if (!f7) {
        if (v != 0x6d) f8 = FALSE;
    }
    if (!f8) {
        if (!(v >= 0xc8 && v <= 0xcf)) f9 = FALSE;
    }
    return f9;
}

// forward declarations (functions are emitted in descending address order)
extern "C" void func_ov003_0220a680(Obj *o);
extern "C" s32 func_ov003_0220a684(Obj *o, Msg *m);
extern "C" void func_ov003_0220a700(Rec *r, u32 id, V3 v);
extern "C" s32 func_ov003_0220a710(Obj *o, u32 id, V3 v, s32 b, s16 c);
extern "C" void func_ov003_0220a764(P3 *p, u32 id, V3 v);
extern "C" void func_ov003_0220a774(Obj *o);
extern "C" void func_ov003_0220a7bc(Obj *o);
extern "C" void func_ov003_0220a7fc(Obj *o);
extern "C" void func_ov003_0220ab20(Obj *o);
extern "C" void func_ov003_0220ab80(Obj *o, s32 x);
extern "C" void func_ov003_0220abd4(Obj *o, Msg *m);
extern "C" void func_ov003_0220ac38(u8 *s, u8 *a, u8 *b, u8 *c, u8 *d);
extern "C" void func_ov003_0220ac54(u8 *d, u8 a, u8 b, u8 c, u8 e);
extern "C" void func_ov003_0220ac68(Rec *r, Pair p, u8 c);
extern "C" s32 func_ov003_0220ac74(Obj *o, u32 id, Pair p, s32 b, s32 c);
extern "C" void func_ov003_0220acc4(B3 *d, Pair p, u32 c);
extern "C" void func_ov003_0220acd0(Obj *o);
extern "C" void func_ov003_0220ad10(Obj *o);
extern "C" s32 func_ov003_0220ad50(Obj *o, s16 x);
extern "C" void func_ov003_0220ad5c(Obj *o);
extern "C" s32 func_ov003_0220ad70(Obj *o, u32 a, s16 b);
extern "C" void func_ov003_0220ada8(Obj *o);
extern "C" void func_ov003_0220adc4(Obj *o);
extern "C" void func_ov003_0220ae04(Obj *o);
extern "C" s32 func_ov003_0220ae34(Obj *o, s16 x);
extern "C" void func_ov003_0220ae40(Obj *o);
extern "C" s32 func_ov003_0220ae54(Obj *o, u32 a, s16 b);
extern "C" void func_ov003_0220ae8c(Obj *o);
extern "C" s32 func_ov003_0220af3c(Obj *o, V3 *v, u8 f);
}

namespace ns_0220b0f0 {
struct Unk_ov003_0220b0f0_V3 {
    s32 x, y, z;
};

struct Unk_ov003_0220b0f0_Pair {
    s32 a, b;
    Unk_ov003_0220b0f0_Pair() {}
    Unk_ov003_0220b0f0_Pair(const Unk_ov003_0220b0f0_Pair &o) {
        a = o.a;
        b = o.b;
    }
};

struct Unk_ov003_0220b0f0_V3C : Unk_ov003_0220b0f0_V3 {
    Unk_ov003_0220b0f0_V3C() {}
    Unk_ov003_0220b0f0_V3C(const Unk_ov003_0220b0f0_V3C &o) {
        x = o.x;
        y = o.y;
        z = o.z;
    }
};

struct Unk_ov003_0220b0f0_B3 {
    u8 a, b, c;
};

struct Unk_ov003_0220b0f0_RecB {
    u8 pad_00[0xc];
    Unk_ov003_0220b0f0_B3 unk_0c;
};

struct Unk_ov003_0220b0f0_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

struct Unk_ov003_0220b0f0_S30 {
    s32 v[12];
};

struct Unk_ov003_0220b0f0_Rec {
    Unk_ov003_0220b0f0_V3 unk_00;
    s16 unk_0c;
    u8 unk_0e;
    u8 unk_0f;
};

struct Unk_ov003_0220b0f0_Sec {
    virtual void vfunc_00();
};

struct Unk_ov003_0220b0f0_P0 {
    virtual void vfunc_00();
    u8 pad_04[0x5c - 4];
    Unk_ov003_0220b0f0_V3 unk_5c;
    u8 pad_68[0x8e - 0x68];
    s16 unk_8e;
    u8 pad_90[0x98 - 0x90];
    s32 unk_98;
    u8 pad_9c[0xec - 0x9c];
};

struct Unk_ov003_0220b0f0_Obj : Unk_ov003_0220b0f0_P0, Unk_ov003_0220b0f0_Sec {
    u8 pad_f0[0x140 - 0xf0];
    s32 unk_140;
    u8 unk_144;
    u8 pad_145[3];
    s32 unk_148;
    u8 pad_14c[4];
    s32 unk_150;
    s32 unk_154;
    u8 pad_158[4];
    s32 unk_15c;
    u8 pad_160[0x2cc - 0x160];
    u8 unk_2cc[8];
    Unk_ov003_0220b0f0_Bits unk_2d4;
    u8 pad_2d8[0x458 - 0x2d8];
    s16 unk_458;
    s16 unk_45a;
    u8 pad_45c[0x59c - 0x45c];
    u8 unk_59c[0x28];
    u8 pad_5c4[0x694 - 0x5c4];
    Unk_ov003_0220b0f0_S30 unk_694;
    u8 pad_6c4[0x6f0 - 0x6c4];
    s32 unk_6f0;
    u8 pad_6f4[4];
    s32 unk_6f8;
    u8 pad_6fc[4];
    s32 unk_700;
    u8 pad_704[0x7d0 - 0x704];
    Unk_ov003_0220b0f0_Rec unk_7d0;
    u8 pad_7e0[0x7ec - 0x7e0];
    s32 unk_7ec;
    u8 pad_7f0[0x7f8 - 0x7f0];
    s32 unk_7f8;
    s32 unk_7fc;
    u8 pad_800[0x808 - 0x800];
    s32 unk_808;
    u8 pad_80c[0x818 - 0x80c];
    s32 unk_818;
    u8 pad_81c[0x8ec - 0x81c];
    u8 unk_8ec[2];
};

typedef Unk_ov003_0220b0f0_Obj Obj;
typedef Unk_ov003_0220b0f0_V3 V3;
typedef Unk_ov003_0220b0f0_V3C V3C;
typedef Unk_ov003_0220b0f0_RecB RecB;
typedef Unk_ov003_0220b0f0_Pair Pair;
typedef Unk_ov003_0220b0f0_Rec Rec;
typedef Unk_0200e2c0 Msg;
extern "C" void _ZN12Unk_0200e2c013func_0200e2c0Eiis(Msg *self, s32 a, s32 b, s16 c);
typedef Unk_ov003_0220b0f0_S30 S30;
typedef Unk_ov003_0220b0f0_Sec Sec;

extern "C" {
extern void *data_020cbb18;

void func_02010914(Obj *o);
void func_0201071c(Obj *o);
s32 func_0200ef08(Obj *o);
void func_020109c4(Obj *o);
void func_020103b4(Obj *o, s32 a, u32 b, u32 c);
void func_02010358(Obj *o, s32 a, u32 b, u32 c);
s32 func_02056654(void *p);
s32 func_020729bc(void *g, s32 a);
s32 func_02007c08(Obj *o, s32 a);
void func_0200ce98(Obj *o, s32 a, s32 b, s32 c);
s32 func_0200ec44(Obj *o, u32 a);
void func_0200ec1c(Obj *o, u32 a);
s32 func_020e7b98(s32 a, s32 b);
s32 func_020e9650(void *a, void *b);
void func_0204ed8c(V3 *out, u32 a, u32 b);
void func_0204ee10(s32 *a, s32 *b, V3 *v);
void func_0204edd8(V3 *out, V3 *in);
void func_02010740(Obj *o, V3 *v, s32 a, s32 b);
s32 func_02089040(void *p);
s32 func_02010d5c(s32 a, s32 b, s32 c);
void func_02010a34(Obj *o, s32 *a);
s32 func_02090330(u32 id, V3 *v, s16 *h, u32 z);
void func_0200f45c(V3 *out, Obj *o);
void func_0200f504(Obj *o, s32 a);
s32 func_0200f3ec(V3 *out, Obj *o, void *pos, void *ang, void *arg);
s32 func_0200e248(Obj *o, Msg *m);
void func_0205e1a0(void *p, u32 a, u32 b, u32 c);
void func_02010dbc(void *p, s32 a, s32 b, s32 c, s32 d);
void func_0203ef38(V3 *a, V3 *b);
void func_02099124(s16 *p);
s32 func_0206e7d4(u32 a);
s32 func_0206ec6c();
s32 func_0206ed18();
void func_0203e47c(Obj *o, Sec *s);
void func_0203d7f8();
s32 func_02063b8c(s32 a);

s32 func_ov003_0220af3c(Obj *o, V3C v, s32 a);
void func_ov003_02212034(S30 *p, s32 a);
void func_ov003_02227074(u8 id, s32 a);
void func_ov003_0222746c(u8 id, s32 a);
s32 func_ov003_02227434(u8 id);
V3 *func_ov003_02227320(u8 id);
void func_ov003_022261ec(u8 id, s16 *a, S30 *p, s32 f);
void func_ov003_0220bb60(u8 *p, s32 a);
void func_ov003_0220bb6c(u8 *p, s32 a);
s32 func_ov003_0220bb3c(u8 *p);
s32 func_ov003_0220bb30(u8 *p);

s32 func_ov003_0220b1f8(Obj *o, Pair p, s32 id, s16 e);
void func_ov003_0220b240(u8 *d, Pair v);
void func_ov003_0220b1d4(u8 *p, Pair *out);
void func_ov003_0220b1e0(u8 *p, Pair *v);
void func_ov003_0220b1ec(u8 *p, Pair *v);
void func_ov003_0220b41c(Obj *o);
void func_ov003_0220b330(Obj *o);
void func_ov003_0220b3dc(Obj *o);
void func_ov003_0220b2f4(Obj *o);
void func_ov003_0220b5a0(u8 *src, u8 *a, u8 *b, u8 *c);
void func_ov003_0220b5b4(u8 *p, u8 a, u8 b, u32 c);
void func_ov003_0220b5bc(Rec *r, V3C v, s32 c, u32 d);
s32 func_ov003_0220b5d8(Obj *o, u8 *a, u8 *b, u8 *c, s32 id, s32 e);
void func_ov003_0220b6cc(u8 *p, u8 a, u8 b, u32 c);
namespace ovcall {
s32 func_ov003_0220b6f4(Obj *o);
}
void func_ov003_0220b6f4(Obj *o);
}

static inline BOOL Unk_ov003_0220b330_IsZero(s32 v) {
    return v == 0 ? TRUE : FALSE;
}

// forward declarations (functions are emitted in descending address order)
extern "C" void func_ov003_0220b0f0(Obj *o);
extern "C" s32 func_ov003_0220b130(Obj *o, s16 a);
extern "C" void func_ov003_0220b168(Obj *o, RecB *r);
extern "C" void func_ov003_0220b1d4(u8 *p, Pair *out);
extern "C" void func_ov003_0220b1e0(u8 *p, Pair *v);
extern "C" void func_ov003_0220b1ec(u8 *p, Pair *v);
extern "C" s32 func_ov003_0220b1f8(Obj *o, Pair p, s32 id, s16 e);
extern "C" void func_ov003_0220b240(u8 *d, Pair v);
extern "C" void func_ov003_0220b24c(Obj *o);
extern "C" void func_ov003_0220b2f4(Obj *o);
extern "C" void func_ov003_0220b330(Obj *o);
extern "C" void func_ov003_0220b3dc(Obj *o);
extern "C" void func_ov003_0220b41c(Obj *o);
extern "C" s32 func_ov003_0220b488(Obj *o, s32 a);
extern "C" void func_ov003_0220b4c4(Obj *o, RecB *r);
extern "C" void func_ov003_0220b5a0(u8 *src, u8 *a, u8 *b, u8 *c);
extern "C" void func_ov003_0220b5b4(u8 *p, u8 a, u8 b, u32 c);
extern "C" void func_ov003_0220b5bc(Rec *r, V3C v, s32 c, u32 d);
extern "C" s32 func_ov003_0220b5d8(Obj *o, u8 *a, u8 *b, u8 *c, s32 id, s32 e);
extern "C" s32 func_ov003_0220b620(Obj *o, s32 a, s16 b);
extern "C" void func_ov003_0220b6cc(u8 *p, u8 a, u8 b, u32 c);
extern "C" void func_ov003_0220b6d4(Obj *o);
extern "C" void func_ov003_0220b6f4(Obj *o);
}

namespace ns_0220ba90 {
struct Unk_ov003_0220bc84_V3 {
    s32 x, y, z;
};

struct Unk_ov003_0220bc84_T48 {
    s32 v[12];
};

class Unk_020d5d84 : public Unk_020d8c7c {
public:
    virtual BOOL vfunc_04();
    virtual void vfunc_08(s32 a);
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_14(s32 a);
    virtual BOOL vfunc_1c();
    virtual BOOL vfunc_20();
    virtual BOOL vfunc_28();
    virtual BOOL vfunc_2c();

    /* 0x50 */ u8 unk_50[0xc];
    /* 0x5c */ Unk_ov003_0220bc84_V3 unk_5c;
    /* 0x68 */ u8 pad_68[0x8e - 0x68];
    /* 0x8e */ s16 unk_8e;
    /* 0x90 */ u8 pad_90[0xc4 - 0x90];
    /* 0xc4 */ Unk_ov003_0220bc84_V3 unk_c4;
    /* 0xd0 */ s16 unk_d0;
    /* 0xd2 */ u8 pad_d2[0xd4 - 0xd2];
};

class Unk_020d9670 : public Unk_020d5d84 {
public:
    Unk_020d9670();
    virtual ~Unk_020d9670();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_1c();
    virtual BOOL vfunc_48(void *a);
    virtual void vfunc_4c(u32 a, u8 b);
    virtual void *vfunc_50();
    virtual BOOL vfunc_54(void *a);
    virtual BOOL vfunc_58(void *a);
    virtual BOOL vfunc_5c(void *a);

    /* 0xd4 */ u8 unk_d4[0x10];
    /* 0xe4 */ s32 unk_e4;
    /* 0xe8 */ u16 unk_e8;
    /* 0xea */ u16 pad_ea;
};

class Unk_020e2a30 {
public:
    virtual void vfunc_00();
};

struct Unk_ov003_0220bc84_Bits {
    u32 a : 12;
    u32 f : 16;
    u32 b : 4;
};

struct Unk_ov003_0220bc84_Rec {
    u8 pad_00[0xc];
    Unk_ov003_0220bc84_Pair unk_0c;
    u8 unk_0e;
};

struct Unk_ov003_0220bc84_H {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
};

struct Unk_ov003_0220bc84_State {
    /* 0x0 */ s32 unk_00;
    /* 0x4 */ u16 unk_04;
    /* 0x6 */ u8 unk_06;
    /* 0x7 */ u8 unk_07;
    /* 0x8 */ u8 unk_08;
    /* 0x9 */ u8 unk_09;
    /* 0xa */ u8 unk_0a;
};

class Unk_ov003_0220bc84_Obj : public Unk_020d9670, public Unk_020e2a30 {
public:
    /* 0x0f0 */ u8 pad_f0[0x10a - 0xf0];
    /* 0x10a */ u8 unk_10a;
    /* 0x10b */ u8 pad_10b[0x128 - 0x10b];
    /* 0x128 */ Unk_ov003_0220bc84_H *unk_128;
    /* 0x12c */ u8 pad_12c[0x294 - 0x12c];
    /* 0x294 */ Unk_ov003_0220bc84_T48 unk_294;
    /* 0x2c4 */ u8 pad_2c4[0x2d0 - 0x2c4];
    /* 0x2d0 */ Unk_ov003_0220bc84_Bits unk_2d0;
    /* 0x2d4 */ Unk_ov003_0220bc84_Bits unk_2d4;
    /* 0x2d8 */ u8 pad_2d8[0x458 - 0x2d8];
    /* 0x458 */ s16 unk_458;
    /* 0x45a */ s16 unk_45a;
    /* 0x45c */ u8 pad_45c[0x59c - 0x45c];
    /* 0x59c */ u8 unk_59c[0x688 - 0x59c];
    /* 0x688 */ Unk_ov003_0220bc84_V3 unk_688;
    /* 0x694 */ Unk_ov003_0220bc84_T48 unk_694;
    /* 0x6c4 */ u8 pad_6c4[0x700 - 0x6c4];
    /* 0x700 */ s32 unk_700;
    /* 0x704 */ u8 pad_704[0x7d0 - 0x704];
    /* 0x7d0 */ Unk_ov003_0220bc84_State unk_7d0;
    /* 0x7db */ u8 pad_7dc[0x7ec - 0x7dc];
    /* 0x7ec */ s32 unk_7ec;
    /* 0x7f0 */ u8 pad_7f0[0x7f8 - 0x7f0];
    /* 0x7f8 */ s32 unk_7f8;
    /* 0x7fc */ s32 unk_7fc;
    /* 0x800 */ u8 pad_800[0x818 - 0x800];
    /* 0x818 */ s32 unk_818;
    /* 0x81c */ u8 pad_81c[0x8ec - 0x81c];
    /* 0x8ec */ u8 unk_8ec[8];
};

typedef Unk_ov003_0220bc84_Obj Obj;
typedef Unk_ov003_0220bc84_V3 V3;
typedef Unk_ov003_0220bc84_T48 T48;
typedef Unk_ov003_0220bc84_Rec Rec;
typedef Unk_0200e2c0 Msg;
extern "C" void _ZN12Unk_0200e2c013func_0200e2c0Eiis(Msg *self, u32 a, u32 b, u32 c);
typedef Unk_ov003_0220bc84_State State;

extern "C" {
extern void *data_020cbb18;

void func_02010914(Obj *o);
s32 func_0200ef08(Obj *o);
void func_0201071c(Obj *o);
void func_0200e7f4(Obj *o);
void func_0200f4c0(Obj *o, s32 a);
s32 func_020729bc(void *g, s32 a);
s32 func_02007c08(Obj *o, s32 a);
void func_020103b4(Obj *o, s32 a, u32 b, u32 c);
void func_02010358(Obj *o, s32 a, u32 b, u32 c);
void func_0205e1a0(void *p, s32 a, s32 b, s32 c);
void func_0200ecdc(Obj *o, u32 a);
void func_0200ec30(Obj *o, u32 a);
void func_0200ec1c(Obj *o, u32 a);
s32 func_0200ec44(Obj *o, u32 a);
s32 func_0200e248(Obj *o, Msg *m);
void func_0200ce98(Obj *o, s32 a, s32 b, s32 c);
void func_0200c358(Obj *o, s32 a, s32 b, s32 c);
void func_02008e50(Obj *o, s32 a, s32 b, s32 c, s32 d, s32 e);
void func_02010dbc(void *p, s32 a, s32 b, s32 c, s32 d);
void func_0203ee38(V3 *a, V3 *b);
s32 func_02090330(s32 a, V3 *v, void *p, s32 b);
void func_020902d4(s32 a, V3 *v, void *p, s32 b);
void func_020902f8(s32 a);
s16 func_020e7b98(s32 a, s32 b);
s32 func_020e9650(void *a, void *b);
s32 func_02063b8c(s32 a);
s32 func_0203d820();
void func_0203e488(Obj *o, Unk_020e2a30 *b);
void func_0203e47c(Obj *o, Unk_020e2a30 *b);
void func_020a710c(void *p, void *q);
void func_0203c2d0(s16 *p);
void func_0203a598();
void func_0203a844();
void func_0203d7f8();
s32 func_0203c31c();
s32 func_02098ffc();
s32 func_020429d0(s32 a, s32 *p);
void func_02034d84(s32 a);
void func_02034d70(s32 a);
void func_02034dd0(s32 a, s32 b, s32 c);
void func_02034e10(s32 a, s32 b, s32 c, s32 d);
void func_0208a578();
void func_0208c0f4();
void func_0207881c(void *p);
u32 func_020769ac(u8 *p);
void func_020769c4(u8 *p, u32 a);

void func_ov003_02226fac(u32 a);
void func_ov003_02212034(T48 *t, V3 *d);
void func_ov003_02227248(u32 a, u32 b);
s32 func_ov003_0222746c(u32 a, s32 b);
s32 func_ov003_02227434(u32 a);
V3 *func_ov003_02227320(u8 a);
void func_ov003_022261ec(u32 a, s16 *p, T48 *t, s32 b);
u32 func_ov003_0220c454(u8 *p);
s32 func_ov003_0220c448(u8 *p);
void func_ov003_0220c47c(u8 *p, s32 a);
void func_ov003_0220c488(u8 *p, u32 a);
void func_ov003_0220c458(u8 *p, u8 *a, u8 *b, u8 *c, u8 *d, u32 *e);
void func_ov003_0220c48c(u8 *p, u32 a, u32 b, u32 c, u32 d, s32 e);
void func_ov003_0220c4ac(Obj *o, u32 a, u32 b, u32 c, s32 d, s32 e);

void func_ov003_0220ba90(Obj *o);
s32 func_ov003_0220baa4(Obj *o, s32 a);
void func_ov003_0220badc(Obj *o, Rec *r);
u32 func_ov003_0220bb30(u8 *p);
u32 func_ov003_0220bb3c(u8 *p);
void func_ov003_0220bb40(u8 *p, u8 *a, u8 *b, u16 *c);
void func_ov003_0220bb60(u8 *p, u32 a);
void func_ov003_0220bb6c(u8 *p, u32 a);
void func_ov003_0220bb70(u8 *p, u32 a, u32 b, u32 c);
s32 func_ov003_0220bb90(Obj *o, u32 a, u32 b, s32 id, s32 e);
void func_ov003_0220bbd4(Obj *o);
namespace ovcall {
void func_ov003_0220bc84(Obj *o);
}
void func_ov003_0220bc84(Obj *o);
void func_ov003_0220c2dc(Obj *o);
void func_ov003_0220c30c(Obj *o, s32 a);
void func_ov003_0220c350(Obj *o, Rec *r);
}

// forward declarations (functions are emitted in descending address order)
extern "C" void func_ov003_0220ba90(Obj *o);
extern "C" s32 func_ov003_0220baa4(Obj *o, s32 a);
extern "C" void func_ov003_0220badc(Obj *o, Rec *r);
extern "C" u32 func_ov003_0220bb30(u8 *p);
extern "C" u32 func_ov003_0220bb3c(u8 *p);
extern "C" void func_ov003_0220bb40(u8 *p, u8 *a, u8 *b, u16 *c);
extern "C" void func_ov003_0220bb60(u8 *p, u32 a);
extern "C" void func_ov003_0220bb6c(u8 *p, u32 a);
extern "C" void func_ov003_0220bb70(u8 *p, u32 a, u32 b, u32 c);
extern "C" s32 func_ov003_0220bb90(Obj *o, u32 a, u32 b, s32 id, s32 e);
extern "C" void func_ov003_0220bbd4(Obj *o);
extern "C" void func_ov003_0220bc84(Obj *o);
extern "C" void func_ov003_0220c2dc(Obj *o);
extern "C" void func_ov003_0220c30c(Obj *o, s32 a);
extern "C" void func_ov003_0220c350(Obj *o, Rec *r);
}

namespace ns_0220c448 {
struct Unk_ov003_0220c448_V3 {
    s32 x, y, z;
    Unk_ov003_0220c448_V3() {}
    Unk_ov003_0220c448_V3(s32 a, s32 b, s32 c) {
        x = a;
        y = b;
        z = c;
    }
};

struct Unk_ov003_0220c448_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

struct Unk_ov003_0220c448_Blk {
    s32 v[12];
};

struct Unk_ov003_0220c448_Pair {
    s32 a, b;
};

struct Unk_ov003_0220c448_Obj {
    u8 pad_00[0x5c];
    Unk_ov003_0220c448_V3 unk_5c;
    u8 pad_68[0x8e - 0x68];
    u16 unk_8e;
    u8 pad_90[0x98 - 0x90];
    s32 unk_98;
    u8 pad_9c[0x168 - 0x9c];
    u8 unk_168;
    u8 pad_169[0x2cc - 0x169];
    u8 unk_2cc[8];
    Unk_ov003_0220c448_Bits unk_2d4;
    u8 pad_2d8[4];
    s32 unk_2dc;
    u8 pad_2e0[0x59c - 0x2e0];
    u8 unk_59c[0x604 - 0x59c];
    Unk_ov003_0220c448_Blk unk_604;
    u8 pad_634[0x688 - 0x634];
    s32 unk_688;
    s32 unk_68c;
    s32 unk_690;
    u8 pad_694[0x7d0 - 0x694];
    u8 unk_7d0;
    u8 pad_7d1[3];
    u8 unk_7d4;
    u8 pad_7d5[3];
    Unk_ov003_0220c448_V3 unk_7d8;
    u8 pad_7e4[0x7ec - 0x7e4];
    s32 unk_7ec;
    u8 pad_7f0[0x7f8 - 0x7f0];
    s32 unk_7f8;
    s32 unk_7fc;
};

class Unk_ov003_0220c768_A {
public:
    // ctor func_02032228, dtor func_02032218 are called explicitly
    u8 pad_00[0x14];
};

class Unk_ov003_0220c768_B {
public:
    // ctor func_020339bc(void *, s32, s32), dtor func_02033988 are called explicitly
    u8 pad_00[0x30];
    s32 unk_30;
    u8 pad_34[0x40 - 0x34];
};

extern "C" void func_020339bc(Unk_ov003_0220c768_B *self, void *v, s32 a, s32 b);
extern "C" void func_02033988(Unk_ov003_0220c768_B *self);

typedef Unk_ov003_0220c448_Obj Obj;
typedef Unk_ov003_0220c448_V3 V3;
typedef Unk_0200e2c0 Msg;
extern "C" void _ZN12Unk_0200e2c013func_0200e2c0Eiis(Msg *self, u32 a, u32 b, u32 c);
typedef Unk_ov003_0220c4ac_Rec Rec;

extern "C" {
extern void *data_020cbb18;
extern void *data_021c47c4;
extern u8 data_ov003_02230ad4[];
extern u8 data_ov003_02230adc[];
extern u8 data_ov003_02230ae0[];
extern s16 data_02135f44[];

u32 func_020769ac(void *p);
void func_020769c4(void *p, s32 a);
s32 func_0200e248(Obj *o, Msg *m);
s32 func_020729bc(void *g, s32 a);
s32 func_02056654(void *p);
s32 func_020565e8(void *p, s32 a);
void func_020109c4(Obj *o);
void func_0201071c(Obj *o);
s32 func_0200ef08(Obj *o);
void func_0203ee38(V3 *a, V3 *b);
u8 *func_0205dfa4(void *p);
s32 func_02007c08(Obj *o, s32 a);
s32 func_0200ce98(Obj *o, s32 a, s32 b, s32 c);
s32 func_02010d5c(s32 a, s32 b, s32 c);
void func_02010a34(Obj *o, s32 *a);
s32 func_02090330(s32 a, void *b, void *c, s32 d);
void func_02032228(void *p);
void func_02032218(void *p);
s32 func_02030908(void *p, V3 *a, V3 *b, s32 c);
s32 func_0200ec30(Obj *o, u32 a);
s32 func_0200ecdc(Obj *o, u32 a);
void func_0205e1a0(void *p, s32 a, s32 b, s32 c);
void func_0204ee10(s32 *a, s32 *b, V3 *c);
void func_02043f04(void *p);
s32 func_0200f3ec(V3 *out, Obj *o, void *pos, void *ang, void *arg);
s32 func_0203081c(V3 *a, s32 *b, s32 c);
void func_0204edd8(V3 *a, V3 *b);
u16 *func_0204eba0(void *grid, V3 *v, u32 a);
s32 func_020e7b98(s32 a, s32 b);
s32 func_020e780c(s32 a, s32 b);
s32 func_01ffcb0c(s32 a, s32 b);

s32 func_ov003_02226ee8(s32 a, u32 b);
s32 func_ov003_02226fac(s32 a);
s32 func_ov003_022052f4(Obj *o);
void func_ov003_0220cf68(Obj *o);
void func_ov003_0220cd4c(Obj *o);
void func_ov003_0220cf78(Obj *o);
void func_ov003_0220cf30(Obj *o);

void func_ov003_0220c698(Obj *o);
void func_ov003_0220c5b8(Obj *o);
void func_ov003_0220c6e0(Obj *o);
s32 func_ov003_0220c888(Obj *o);
s32 func_ov003_0220c768(Obj *o, V3 *a, V3 *b, V3 *c);
s32 func_ov003_0220c4ac(Obj *o, u32 a, u32 b, u32 c, s32 d, s16 e);
void func_ov003_0220cbc8(Obj *o, V3 *a, V3 *b, V3 *c);
s32 func_ov003_0220c93c(Obj *o, V3 *a, V3 *b, u8 *c);
}

// forward declarations (functions are emitted in descending address order)
extern "C" u32 func_ov003_0220c448(void *p);
extern "C" u32 func_ov003_0220c454(u8 *p);
extern "C" void func_ov003_0220c458(u8 *p, u8 *a, u8 *b, u8 *c, u8 *d, u16 *e);
extern "C" void func_ov003_0220c47c(void *p, s32 a);
extern "C" void func_ov003_0220c488(u8 *p, u32 a);
extern "C" void func_ov003_0220c48c(u8 *p, u32 a, u32 b, u32 c, u8 d, s16 e);
extern "C" s32 func_ov003_0220c4ac(Obj *o, u32 a, u32 b, u32 c, s32 d, s16 e);
extern "C" void func_ov003_0220c4f0(Obj *o);
extern "C" void func_ov003_0220c5b8(Obj *o);
extern "C" void func_ov003_0220c698(Obj *o);
extern "C" void func_ov003_0220c6e0(Obj *o);
extern "C" s32 func_ov003_0220c768(Obj *o, V3 *a, V3 *b, V3 *c);
extern "C" s32 func_ov003_0220c888(Obj *o);
extern "C" s32 func_ov003_0220c93c(Obj *o, V3 *a, V3 *b, u8 *c);
extern "C" s32 func_ov003_0220ca70(Obj *o, u8 *a, V3 *b, u8 *c);
extern "C" void func_ov003_0220cbc8(Obj *o, V3 *a, V3 *b, V3 *out);
}

namespace ns_0220cd4c {
struct Unk_ov003_0220cd4c_V3 {
    s32 x, y, z;
    Unk_ov003_0220cd4c_V3() {}
    Unk_ov003_0220cd4c_V3(s32 a, s32 b, s32 c) {
        x = a;
        y = b;
        z = c;
    }
};

struct Unk_ov003_0220cd4c_P3 {
    s32 x, y, z;
};

struct Unk_ov003_0220cd4c_Blk {
    s32 v[12];
};

struct Unk_ov003_0220cd4c_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

struct Unk_ov003_0220cd4c_Rec {
    u8 unk_00;
    u8 pad_01;
    s16 unk_02;
    u8 unk_04;
};

struct Unk_ov003_0220cd4c_Sec {
    virtual void vfunc_00();
};

struct Unk_ov003_0220cd4c_P0 {
    virtual void vfunc_00();
    u8 pad_04[0x8e - 4];
    s16 unk_8e;
    u8 pad_90[0xc4 - 0x90];
    Unk_ov003_0220cd4c_V3 unk_c4;
    s16 unk_d0;
    u8 pad_d2[0xec - 0xd2];
};

struct Unk_ov003_0220cd4c_Obj : Unk_ov003_0220cd4c_P0, Unk_ov003_0220cd4c_Sec {
    u8 pad_f0[0x140 - 0xf0];
    s32 unk_140;
    u8 pad_144[4];
    s32 unk_148;
    u8 pad_14c[4];
    s32 unk_150;
    u8 pad_154[0x294 - 0x154];
    Unk_ov003_0220cd4c_Blk unk_294;
    u8 pad_2c4[0x2cc - 0x2c4];
    u8 unk_2cc[8];
    Unk_ov003_0220cd4c_Bits unk_2d4;
    u8 pad_2d8[4];
    s32 unk_2dc;
    u8 pad_2e0[0x59c - 0x2e0];
    u8 unk_59c[0x28];
    u8 unk_5c4[0x64];
    u8 pad_628[0x688 - 0x628];
    s32 unk_688;
    s32 unk_68c;
    s32 unk_690;
    Unk_ov003_0220cd4c_Blk unk_694;
    u8 pad_6c4[0x6f0 - 0x6c4];
    s32 unk_6f0;
    u8 pad_6f4[4];
    s32 unk_6f8;
    u8 pad_6fc[4];
    s32 unk_700;
    u8 pad_704[0x7d0 - 0x704];
    Unk_ov003_0220cd4c_Rec unk_7d0;
    u8 pad_7d6[0x7ec - 0x7d6];
    s32 unk_7ec;
    u8 pad_7f0[0x7f8 - 0x7f0];
    s32 unk_7f8;
    u32 unk_7fc;
    u8 pad_800[0x80c - 0x800];
    s32 unk_80c;
    u8 pad_810[0x818 - 0x810];
    s32 unk_818;
    u8 pad_81c[0x8ec - 0x81c];
    u8 unk_8ec;
};

struct Unk_ov003_0220d114_Ent {
    u8 v[20];
};

struct Unk_ov003_0220d114_Act {
    u8 pad_00[0x7e];
    s8 unk_7e;
    u8 pad_7f[0x1ff - 0x7f];
    u8 unk_1ff;
};

typedef Unk_ov003_0220cd4c_Obj Obj;
typedef Unk_ov003_0220cd4c_V3 V3;
typedef Unk_ov003_0220cd4c_Blk Blk;
typedef Unk_0200e2c0 Msg;
extern "C" void _ZN12Unk_0200e2c013func_0200e2c0Eiis(Msg *self, s32 a, s32 b, s32 c);
typedef Unk_ov003_0220d114_Act Act;

extern "C" {
extern void *data_020cbb18;
// 0x022349e6 is byte 0x12 of the record table data_ov003_022349d4 (unit unk_ov003_0221ffb8)
extern u8 data_ov003_022349d4[];
#define data_ov003_022349e6 (data_ov003_022349d4 + 0x12)
extern u8 data_ov003_02230ac4[];
extern u8 data_ov003_02230ac8[];

s32 func_02056654(void *p);
void func_0203ee38(V3 *a, V3 *b);
void func_02010a7c(u16 *out, Obj *o);
s32 func_02088a20(V3 *a, V3 *b, s32 c, u8 *d, s32 e);
void func_ov003_02227e08(V3 *v, u32 a);
u32 func_ov003_02227e40(u32 a);
s32 func_ov003_0220ca70(Obj *o, u8 *a, V3 *v, u8 *b);
s32 func_ov003_0220cbc8(Obj *o, V3 *a, V3 *b, V3 *c);
s32 func_ov003_0220c768(Obj *o, V3 *a, V3 *b, V3 *c);
s32 func_ov003_02226d54(u32 a);
void func_0200ecdc(Obj *o, u32 a);
s32 func_020e7b98(s32 a, s32 b);
s32 func_020e780c(s32 a, s32 b);
void func_0200f43c(V3 *out, Obj *o);
void func_02010740(Obj *o, V3 *v, s32 a, s32 b);
void func_02089040(void *p);
void func_0200f504(Obj *o, s32 a);
void func_02010914(Obj *o);
void func_02010358(Obj *o, s32 a, u32 b, u32 c);
s32 func_0205e1a0(void *p, u32 a, u32 b, u32 c);
s32 func_0200e248(Obj *o, Msg *m);
void func_0200ef08(Obj *o);
void func_0201071c(Obj *o);
s32 func_020729bc(void *g, u32 a);
s32 func_02007c08(Obj *o, s32 a);
void func_020103b4(Obj *o, s32 a, u32 b, u32 c);
Act *func_0205fbb8(void *p);
void func_0205fbbc(void *p, u32 a);
void func_0205fb20(void *p);
void func_0205fb08(void *p);
void func_ov003_02212034(Blk *b, u32 a);
void func_ov003_02223400(Act *a, V3 *b, V3 *c);
void func_ov003_02223450(V3 *v, s32 a);
void func_ov003_02223258(u32 a);
void func_0200ce98(Obj *o, s32 a, s32 b, s32 c);
void func_02099124(void *p);
s32 func_0206e7a4(u32 a, Act *b);
s32 func_0206ec6c();
s32 func_0206ed18();
s32 func_0200ec44(Obj *o, u32 a);
void func_0200ec1c(Obj *o, u32 a);
void func_0203e47c(Obj *o, Unk_ov003_0220cd4c_Sec *s);
void func_0203d7f8();
s32 func_0206e750();
s32 func_02042bbc(u32 a, u32 b);
void func_ov003_02205e58(Obj *o, void *d, u32 a, u32 b, s32 c);
void func_0200e7f4(Obj *o);
void func_0200f4c0(Obj *o, s32 a);

void func_ov003_0220cd4c(Obj *o);
void func_ov003_0220cf30(Obj *o);
void func_ov003_0220cf68(Obj *o);
void func_ov003_0220cf78(Obj *o);
s32 func_ov003_0220cfc0(Obj *o, s16 b);
void func_ov003_0220cfcc(Obj *o, u8 *b);
s32 func_ov003_0220d00c(Obj *o, s32 a, s32 b);
void func_ov003_0220d084(Obj *o);
void func_ov003_0220d0c4(Obj *o);
void func_ov003_0220d114(Obj *o);
s32 func_ov003_0220d568(Obj *o, s16 a);
void func_ov003_0220d590(Obj *o, u8 *b);
u32 func_ov003_0220d5c4(u8 *p);
void func_ov003_0220d5c8(u8 *p, u32 v);
s32 func_ov003_0220d5cc(Obj *o, u32 a, s32 b, s32 c);
void func_ov003_0220d608(Obj *o);
void func_ov003_0220d6f4(Obj *o);
}

static inline BOOL Rng(volatile u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    u32 b = *p;
    u32 a = *p;
    if (a >= lo && b <= hi) r = TRUE;
    return r;
}

// forward declarations (functions are emitted in descending address order)
extern "C" void func_ov003_0220cd4c(Obj *o);
extern "C" void func_ov003_0220cf30(Obj *o);
extern "C" void func_ov003_0220cf68(Obj *o);
extern "C" void func_ov003_0220cf78(Obj *o);
extern "C" s32 func_ov003_0220cfc0(Obj *o, s16 b);
extern "C" void func_ov003_0220cfcc(Obj *o, u8 *b);
extern "C" s32 func_ov003_0220d00c(Obj *o, s32 a, s32 b);
extern "C" void func_ov003_0220d084(Obj *o);
extern "C" void func_ov003_0220d0c4(Obj *o);
extern "C" void func_ov003_0220d114(Obj *o);
extern "C" s32 func_ov003_0220d568(Obj *o, s16 a);
extern "C" void func_ov003_0220d590(Obj *o, u8 *b);
extern "C" s32 func_ov003_0220d5cc(Obj *o, u32 a, s32 b, s32 c);
extern "C" void func_ov003_0220d608(Obj *o);
extern "C" u32 func_ov003_0220d5c4(u8 *p);
extern "C" void func_ov003_0220d5c8(u8 *p, u32 v);
}

namespace ns_0220d6f4 {
struct Unk_ov003_0220d6f4_V3 {
    s32 x, y, z;
    Unk_ov003_0220d6f4_V3() {}
};

struct Unk_ov003_0220d6f4_Blk {
    s32 v[12];
};

struct Unk_ov003_0220d6f4_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

struct Unk_ov003_0220d6f4_Rec {
    s16 unk_00;
    u8 unk_02;
    u8 unk_03;
    u8 unk_04;
    u8 unk_05;
};

struct Unk_ov003_0220d6f4_Net {
    u32 pad_00;
    s32 unk_04;
    s32 unk_08;
};

struct Unk_ov003_0220d6f4_Sec {
    virtual void vfunc_00();
};

struct Unk_ov003_0220d6f4_P0 {
    virtual void vfunc_00();
    u8 pad_04[0x8e - 4];
    s16 unk_8e;
    u8 pad_90[0x98 - 0x90];
    s32 unk_98;
    u8 pad_9c[0xec - 0x9c];
};

struct Unk_ov003_0220d6f4_Obj : Unk_ov003_0220d6f4_P0, Unk_ov003_0220d6f4_Sec {
    u8 pad_f0[0x10a - 0xf0];
    u8 unk_10a;
    u8 pad_10b[0x128 - 0x10b];
    Unk_ov003_0220d6f4_Net *unk_128;
    u8 pad_12c[0x2cc - 0x12c];
    u8 unk_2cc[4];
    Unk_ov003_0220d6f4_Bits unk_2d0;
    Unk_ov003_0220d6f4_Bits unk_2d4;
    u8 pad_2d8[0x59c - 0x2d8];
    u8 unk_59c[0x28];
    u8 unk_5c4[0x64];
    u8 pad_628[0x694 - 0x628];
    Unk_ov003_0220d6f4_Blk unk_694;
    u8 pad_6c4[0x700 - 0x6c4];
    s32 unk_700;
    u8 pad_704[0x7d0 - 0x704];
    Unk_ov003_0220d6f4_Rec unk_7d0;
    u8 pad_7d6[0x7ec - 0x7d6];
    s32 unk_7ec;
    u8 pad_7f0[0x7f8 - 0x7f0];
    s32 unk_7f8;
    u32 unk_7fc;
    u8 pad_800[0x80c - 0x800];
    s32 unk_80c;
    u8 pad_810[0x818 - 0x810];
    s32 unk_818;
    u16 unk_81c;
    u16 unk_81e;
    u8 pad_820[0x8c0 - 0x820];
    s32 unk_8c0;
    s32 unk_8c4;
    s32 unk_8c8;
    u8 pad_8cc[0x8ec - 0x8cc];
    u8 unk_8ec;
};

struct Unk_ov003_0220d6f4_Act {
    u8 pad_00[0x7e];
    s8 unk_7e;
};

typedef Unk_ov003_0220d6f4_Obj Obj;
typedef Unk_ov003_0220d6f4_V3 V3;
typedef Unk_ov003_0220d6f4_Blk Blk;
typedef Unk_0200e2c0 Msg;
extern "C" void _ZN12Unk_0200e2c013func_0200e2c0Eiis(Msg *self, s32 a, s32 b, s16 c);
typedef Unk_ov003_0220d6f4_Act Act;
typedef Unk_ov003_0220d6f4_Sec Sec;
typedef Unk_ov003_0220d6f4_Rec Rec;

extern "C" {
extern void *data_020cbb18;
extern u8 data_ov003_02230ac0[];
extern u8 data_ov003_02230aec[];

void func_0200f4c0(Obj *o, s32 a);
Act *func_0205fbb8(void *p);
void func_ov003_02223450(V3 *v, s32 a);
void func_ov003_02212034(Blk *b, V3 *v);
void func_0203ee38(V3 *a, V3 *b);
void func_ov003_02223400(Act *a, V3 *b, V3 *c);
s32 func_020565e8(void *p, u32 a);
void func_0203a598();
s32 func_0203d820();
void func_0203e488(Obj *o, Sec *s);
void func_0200ec30(Obj *o, u32 a);
void func_020a710c(Sec *s, void *d);
void func_0203c2d0(u16 *p);
void func_02034d70(u32 a);
void func_02034dd0(u32 a, u32 b, u32 c);
void func_02034e10(u32 a, u32 b, u32 c, u32 d);
s32 func_0203c338();
s32 func_02098ffc();
s32 func_020429d0(u32 a, u32 *b);
void func_0203e47c(Obj *o, Sec *s);
void func_0200ec1c(Obj *o, u32 a);
void func_0203d7f8();
s32 func_ov003_0220d5cc(Obj *o, u32 a, s32 b, s32 c);
void func_0203a844();
s32 func_02042bbc(u32 a, u32 b);
void func_0205fb08(void *p);
s32 func_02007c08(Obj *o, s32 a);
void func_ov003_02205e58(Obj *o, void *d, u32 a, u32 b, s32 c);
void func_02008e50(Obj *o, u32 a, u32 b, u32 c, u32 d, s32 e);
s32 func_020729bc(void *g, u32 a);
void func_02078840(void *p);
void func_0208a578();
void func_0208c114();
void func_02010358(Obj *o, s32 a, u32 b, u32 c);
void func_0205e1a0(void *p, u32 a, u32 b, u32 c);
s32 func_0200e248(Obj *o, Msg *m);
void func_02010914(Obj *o);
s32 func_0200ef08(Obj *o);
void func_0201071c(Obj *o);
s32 func_02056654(void *p);
s32 func_0205fb34(void *p);
void func_0200ecdc(Obj *o, u32 a);
void func_020109c4(Obj *o);
s32 func_02010d5c(s32 a, s32 b, s32 c);
void func_02010a34(Obj *o, s32 *a);
void func_0200ce98(Obj *o, s32 a, s32 b, s32 c);
void func_020085f0(Obj *o, s32 a, s32 b);
void func_ov003_0220e030(u8 *p, u32 v);

void func_ov003_0220dc00(u8 *p, u8 *out);
void func_ov003_0220dc08(u8 *p, u32 v);
s32 func_ov003_0220dc0c(Obj *o, u32 a, s32 b, s16 c);
void func_ov003_0220dc80(Obj *o);
s32 func_ov003_0220dd28(Obj *o, s32 a, s16 b);
void func_ov003_0220ddb4(Obj *o);
s32 func_ov003_0220de60(Obj *o, s32 a, s16 b);
void func_ov003_0220deb8(Obj *o);
void func_ov003_0220dfe0(u8 *p, u8 *out);
void func_ov003_0220dfe8(u8 *p, u32 v);
void func_ov003_0220dfec(u8 *p, u32 v);
s32 func_ov003_0220dff0(Obj *o, u32 a, s32 b, s16 c);

void func_ov003_0220d6f4(Obj *o);
void func_ov003_0220db30(Obj *o, s16 a);
void func_ov003_0220db5c(Obj *o, u8 *p);
void func_ov003_0220dc48(Obj *o);
s32 func_ov003_0220dcb8(Obj *o, s16 a);
void func_ov003_0220dcc4(Obj *o);
void func_ov003_0220dd60(Obj *o);
s32 func_ov003_0220de20(Obj *o, s16 a);
void func_ov003_0220de2c(Obj *o);
void func_ov003_0220de98(Obj *o);
void func_ov003_0220df10(Obj *o, s16 a);
void func_ov003_0220df3c(Obj *o, u8 *p);
}

static inline BOOL Rng(volatile u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    u32 a = *p;
    u32 b = *p;
    if (a >= lo && b <= hi) r = TRUE;
    return r;
}

// forward declarations (functions are emitted in descending address order)
extern "C" void func_ov003_0220d6f4(Obj *o);
extern "C" void func_ov003_0220db30(Obj *o, s16 a);
extern "C" void func_ov003_0220db5c(Obj *o, u8 *p);
extern "C" void func_ov003_0220dc00(u8 *p, u8 *out);
extern "C" void func_ov003_0220dc08(u8 *p, u32 v);
extern "C" s32 func_ov003_0220dc0c(Obj *o, u32 a, s32 b, s16 c);
extern "C" void func_ov003_0220dc48(Obj *o);
extern "C" void func_ov003_0220dc80(Obj *o);
extern "C" s32 func_ov003_0220dcb8(Obj *o, s16 a);
extern "C" void func_ov003_0220dcc4(Obj *o);
extern "C" s32 func_ov003_0220dd28(Obj *o, s32 a, s16 b);
extern "C" void func_ov003_0220dd60(Obj *o);
extern "C" void func_ov003_0220ddb4(Obj *o);
extern "C" s32 func_ov003_0220de20(Obj *o, s16 a);
extern "C" void func_ov003_0220de2c(Obj *o);
extern "C" s32 func_ov003_0220de60(Obj *o, s32 a, s16 b);
extern "C" void func_ov003_0220de98(Obj *o);
extern "C" void func_ov003_0220deb8(Obj *o);
extern "C" void func_ov003_0220df10(Obj *o, s16 a);
extern "C" void func_ov003_0220df3c(Obj *o, u8 *p);
extern "C" void func_ov003_0220dfe0(u8 *p, u8 *out);
extern "C" void func_ov003_0220dfe8(u8 *p, u32 v);
extern "C" void func_ov003_0220dfec(u8 *p, u32 v);
extern "C" s32 func_ov003_0220dff0(Obj *o, u32 a, s32 b, s16 c);
}

namespace ns_0220e030 {
struct Unk_ov003_0220e030_V3 {
    s32 x, y, z;
    Unk_ov003_0220e030_V3() {}
    Unk_ov003_0220e030_V3(s32 a, s32 b, s32 c) {
        x = a;
        y = b;
        z = c;
    }
};

struct Unk_ov003_0220e030_Arg {
    u8 pad_00[0xc];
    Unk_ov003_0220e030_P2 unk_0c;
};

struct Unk_ov003_0220e030_Sec {
    virtual void vfunc_00();
};

struct Unk_ov003_0220e030_P0 {
    virtual void vfunc_00();
    u8 pad_04[0x5c - 4];
    s32 unk_5c;
    s32 unk_60;
    s32 unk_64;
    u8 pad_68[0x8e - 0x68];
    s16 unk_8e;
    u8 pad_90[0x98 - 0x90];
    s32 unk_98;
    u8 pad_9c[0xec - 0x9c];
};

struct Unk_ov003_0220e030_Obj : Unk_ov003_0220e030_P0, Unk_ov003_0220e030_Sec {
    u8 pad_f0[0x13c - 0xf0];
    u8 unk_13c;
    u8 pad_13d[0x2cc - 0x13d];
    u8 unk_2cc[8];
    u8 pad_2d4[0x59c - 0x2d4];
    u8 unk_59c[0x28];
    u8 unk_5c4[4];
    s32 unk_5c8;
    Unk_ov003_0220e030_V3 unk_5cc;
    u8 pad_5d8[0x5fc - 0x5d8];
    u8 unk_5fc;
    u8 pad_5fd[0x7d0 - 0x5fd];
    s16 unk_7d0;
    u8 pad_7d2[0x7ec - 0x7d2];
    s32 unk_7ec;
    u8 pad_7f0[0x7f8 - 0x7f0];
    s32 unk_7f8;
    u32 unk_7fc;
    u8 pad_800[0x8c0 - 0x800];
    Unk_ov003_0220e030_V3 unk_8c0;
    u8 pad_8cc[0x8ec - 0x8cc];
    u8 unk_8ec[4];
    u8 pad_8f0[0xc80 - 0x8f0];
    u16 unk_c80;
};

typedef Unk_ov003_0220e030_Obj Obj;
typedef Unk_ov003_0220e030_V3 V3;
typedef Unk_0200e2c0 Msg;
extern "C" void _ZN12Unk_0200e2c013func_0200e2c0Eiis(Msg *self, s32 a, s32 b, s16 c);
typedef Unk_ov003_0220e030_P2 P2;
typedef Unk_ov003_0220e030_Arg Arg;

extern "C" {
extern void *data_020cbb18;
extern u8 *data_021c1b3c;

s32 func_02010914(Obj *o);
s32 func_0200ef08(Obj *o);
s32 func_0201071c(Obj *o);
s32 func_020109c4(Obj *o);
s32 func_020729bc(void *g, u32 a);
s32 func_0205fb70(void *p);
s32 func_0205fb88(void *p);
s32 func_0205fbb8(void *p);
s32 func_0205df98(void *p);
s32 func_0200ec54(Obj *o, u32 a, void *b);
s32 func_0200ecdc(Obj *o, u32 a);
s32 func_0200ec44(Obj *o, u32 a);
s32 func_0200e248(Obj *o, Msg *m);
s32 func_02034d70(u32 a);
s32 func_02034dd0(u32 a, u32 b, u32 c);
s32 func_02010358(Obj *o, s32 a, u32 b, u32 c);
s32 func_020103b4(Obj *o, s32 a, u32 b, u32 c);
s32 func_0205e1a0(void *p, u32 a, u32 b, u32 c);
s32 func_02007c08(Obj *o, s32 a);
s32 func_02035bac(void *p);
s32 func_02035ba4(void *p);
s32 func_020e7b98(s32 a, s32 b);
s32 func_02010d98(u16 *a, s32 b);
s32 func_02010a58(Obj *o, u16 *a);
s32 func_0205fae8(void *p, V3 *v);
s32 func_0205faf8(void *p, V3 *v);
s32 func_0205f92c(void *p, u32 a);
s32 func_020b50b4();
s32 func_020b60b0(s32 a, s32 b);
s32 func_02010d5c(s32 a, s32 b, s32 c);
s32 func_02010a34(Obj *o, s32 *a);
s32 func_02056654(void *p);
s32 func_020565e8(void *p, u32 a);
s32 func_0200ce98(Obj *o, s32 a, s32 b, s32 c);
s32 func_0200f504(Obj *o, s32 a);
s32 func_0203a584();
s32 func_020769dc(void *p, s32 *a, s32 *b, s32 *c, u8 *d);
s32 func_02076a04(void *p, s32 a, s32 b, s32 c, u32 d);
s32 func_02076a2c(void *p, s32 *a, s32 *b);
s32 func_02076a6c(void *p, s32 a, s32 b);
s32 func_ov003_0220de60(Obj *o, s32 a, s32 b);
s32 func_ov003_0220dd28(Obj *o, s32 a, s32 b);
s32 func_ov003_0220dff0(Obj *o, s32 a, s32 b, s32 c);
s32 func_ov003_022236dc();
s32 func_ov003_02220db0(void *p, s32 a);
s32 func_ov003_0220e9a4(Obj *o);

void func_ov003_0220e030(u8 *p, u32 v);
s32 func_ov003_0220e034(Obj *o);
s32 func_ov003_0220e054(Obj *o);
s32 func_ov003_0220e0d8(Obj *o, s16 a);
s32 func_ov003_0220e0e4(Obj *o);
s32 func_ov003_0220e12c(Obj *o, s32 a, s16 b);
s32 func_ov003_0220e164(Obj *o);
s32 func_ov003_0220e1c0(Obj *o);
void func_ov003_0220e260(Obj *o);
s32 func_ov003_0220e2e4(Obj *o);
void func_ov003_0220e324(Obj *o);
s32 func_ov003_0220e43c(Obj *o, s32 a);
s32 func_ov003_0220e490(Obj *o, s16 a);
s32 func_ov003_0220e4bc(Obj *o);
void func_ov003_0220e55c(void *p, V3 *v, u8 *out);
s32 func_ov003_0220e574(void *p, V3 *v, u8 c);
s32 func_ov003_0220e58c(Obj *o, s32 a, s16 b);
s32 func_ov003_0220e5c4(Obj *o);
s32 func_ov003_0220e610(Obj *o);
s32 func_ov003_0220e650(Obj *o);
s32 func_ov003_0220e67c(Obj *o, s16 a);
s32 func_ov003_0220e688(Obj *o);
s32 func_ov003_0220e6b0(Obj *o, s32 a, s16 b);
s32 func_ov003_0220e6e8(Obj *o);
s32 func_ov003_0220e784(Obj *o);
s32 func_ov003_0220e7c8(Obj *o);
s32 func_ov003_0220e7d8(Obj *o);
s32 func_ov003_0220e804(Obj *o, s16 a);
s32 func_ov003_0220e844(Obj *o, Arg *a);
s32 func_ov003_0220e8bc(void *p, s32 *a, s32 *b);
s32 func_ov003_0220e8c4(void *p, s32 a, s32 b);
s32 func_ov003_0220e8cc(Obj *o, V3 *v, s32 a, s16 b);
void func_ov003_0220e918(P2 *d, V3 *s);
s32 func_ov003_0220e924(Obj *o);
}

// forward declarations (functions are emitted in descending address order)
extern "C" void func_ov003_0220e030(u8 *p, u32 v);
extern "C" s32 func_ov003_0220e034(Obj *o);
extern "C" s32 func_ov003_0220e054(Obj *o);
extern "C" s32 func_ov003_0220e0d8(Obj *o, s16 a);
extern "C" s32 func_ov003_0220e0e4(Obj *o);
extern "C" s32 func_ov003_0220e12c(Obj *o, s32 a, s16 b);
extern "C" s32 func_ov003_0220e164(Obj *o);
extern "C" s32 func_ov003_0220e1c0(Obj *o);
extern "C" void func_ov003_0220e260(Obj *o);
extern "C" s32 func_ov003_0220e2e4(Obj *o);
extern "C" void func_ov003_0220e324(Obj *o);
extern "C" s32 func_ov003_0220e43c(Obj *o, s32 a);
extern "C" s32 func_ov003_0220e490(Obj *o, s16 a);
extern "C" s32 func_ov003_0220e4bc(Obj *o);
extern "C" void func_ov003_0220e55c(void *p, V3 *v, u8 *out);
extern "C" s32 func_ov003_0220e574(void *p, V3 *v, u8 c);
extern "C" s32 func_ov003_0220e58c(Obj *o, s32 a, s16 b);
extern "C" s32 func_ov003_0220e5c4(Obj *o);
extern "C" s32 func_ov003_0220e610(Obj *o);
extern "C" s32 func_ov003_0220e650(Obj *o);
extern "C" s32 func_ov003_0220e67c(Obj *o, s16 a);
extern "C" s32 func_ov003_0220e688(Obj *o);
extern "C" s32 func_ov003_0220e6b0(Obj *o, s32 a, s16 b);
extern "C" s32 func_ov003_0220e6e8(Obj *o);
extern "C" s32 func_ov003_0220e784(Obj *o);
extern "C" s32 func_ov003_0220e7c8(Obj *o);
extern "C" s32 func_ov003_0220e7d8(Obj *o);
extern "C" s32 func_ov003_0220e804(Obj *o, s16 a);
extern "C" s32 func_ov003_0220e844(Obj *o, Arg *a);
extern "C" s32 func_ov003_0220e8bc(void *p, s32 *a, s32 *b);
extern "C" s32 func_ov003_0220e8c4(void *p, s32 a, s32 b);
extern "C" s32 func_ov003_0220e8cc(Obj *o, V3 *v, s32 a, s16 b);
extern "C" void func_ov003_0220e918(P2 *d, V3 *s);
extern "C" s32 func_ov003_0220e924(Obj *o);
}

namespace ns_0220e970 {
struct Unk_ov003_0220e970_V3 {
    s32 x, y, z;
};

struct Unk_ov003_0220e970_P2 {
    s32 x, z;
};

struct Unk_ov003_0220e970_Pv {
    s32 x, z;
    Unk_ov003_0220e970_Pv() {}
    Unk_ov003_0220e970_Pv(s32 a, s32 b) {
        x = a;
        z = b;
    }
    Unk_ov003_0220e970_Pv(const Unk_ov003_0220e970_Pv &o) {
        x = o.x;
        z = o.z;
    }
};

struct Unk_ov003_0220e970_Arg {
    u8 pad_00[0xc];
    Unk_ov003_0220e970_Rec unk_0c;
};

struct Unk_ov003_0220e970_Mtx {
    s32 m[9];
    Unk_ov003_0220e970_V3 v;
};

struct Unk_ov003_0220e970_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

struct Unk_ov003_0220e970_Sec {
    virtual void vfunc_00();
};

class Unk_ov003_0220e970_Q {
public:
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void vfunc_10();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_1c();
    virtual void vfunc_20();
    virtual void vfunc_24();
    virtual void vfunc_28();
    virtual void vfunc_2c();
    virtual void vfunc_30();
    virtual void vfunc_34();
    virtual void vfunc_38();
    virtual void vfunc_3c();
    virtual void vfunc_40();
    virtual void vfunc_44();
    virtual void vfunc_48();
    virtual void vfunc_4c();
    virtual void vfunc_50();
    virtual void vfunc_54();
    virtual void vfunc_58();
    virtual void vfunc_5c();
    virtual void vfunc_60(u16 *p);
};

struct Unk_ov003_0220e970_S128 {
    u8 pad_00[4];
    s32 unk_04;
    s32 unk_08;
};

struct Unk_ov003_0220e970_P0 {
    virtual void vfunc_00();
    u8 pad_04[0x5c - 4];
    Unk_ov003_0220e970_V3 unk_5c;
    u8 pad_68[0x8e - 0x68];
    s16 unk_8e;
    u8 pad_90[0x98 - 0x90];
    s32 unk_98;
    u8 pad_9c[0xec - 0x9c];
};

struct Unk_ov003_0220e970_Obj : Unk_ov003_0220e970_P0, Unk_ov003_0220e970_Sec {
    u8 pad_f0[0x10a - 0xf0];
    u8 unk_10a;
    u8 pad_10b[0x128 - 0x10b];
    Unk_ov003_0220e970_S128 *unk_128;
    u8 pad_12c[0x164 - 0x12c];
    Unk_ov003_0220e970_Q *unk_164;
    u8 unk_168;
    u8 pad_169[0x2cc - 0x169];
    u8 unk_2cc[8];
    Unk_ov003_0220e970_Bits unk_2d4;
    u8 pad_2d8[0x664 - 0x2d8];
    Unk_ov003_0220e970_Mtx unk_664;
    u8 pad_694[0x7d0 - 0x694];
    Unk_ov003_0220e970_Rec unk_7d0;
    u8 pad_7d4[0x7ec - 0x7d4];
    s32 unk_7ec;
    u8 pad_7f0[0x7f8 - 0x7f0];
    s32 unk_7f8;
    u32 unk_7fc;
    u8 pad_800[0x818 - 0x800];
    s32 unk_818;
    u8 pad_81c[0x8ec - 0x81c];
    u8 unk_8ec[4];
};

typedef Unk_ov003_0220e970_Obj Obj;
typedef Unk_ov003_0220e970_V3 V3;
typedef Unk_0200e2c0 Msg;
extern "C" void _ZN12Unk_0200e2c013func_0200e2c0Eiis(Msg *self, s32 a, s32 b, s16 c);
typedef Unk_ov003_0220e970_P2 P2;
typedef Unk_ov003_0220e970_Pv Pv;
typedef Unk_ov003_0220e970_Rec Rec;
typedef Unk_ov003_0220e970_Arg Arg;
typedef Unk_ov003_0220e970_Mtx Mtx;
typedef Unk_ov003_0220e970_Sec Sec;
typedef Unk_ov003_0220e970_Q Q;

extern "C" {
extern void *data_020cbb18;
extern s16 data_02135f44[];

s32 func_020729bc(void *g, u32 a);
s32 func_020946f0(s32 a, u32 b);
s32 func_0200ec30(Obj *o, u32 a);
s32 func_0200ec1c(Obj *o, u32 a);
s32 func_0200ec44(Obj *o, u32 a);
s32 func_0200ecdc(Obj *o, u32 a);
s32 func_0200eb58(Obj *o, u32 a, u32 b);
s32 func_0203e47c(Obj *o, Sec *s);
s32 func_0203e488(Obj *o, Sec *s);
s32 func_020a710c(Sec *s, void *d);
s32 func_0203d7f8();
s32 func_0203d820();
s32 func_02007c08(Obj *o, s32 a);
s32 func_02008770(Obj *o, s32 a, s32 b, s32 c);
s32 func_0200ce98(Obj *o, s32 a, s32 b, s32 c);
s32 func_0203a844();
s32 func_0203a598();
s32 func_02034d70(u32 a);
s32 func_02034dd0(u32 a, u32 b, u32 c);
s32 func_02034e10(u32 a, u32 b, u32 c, u32 d);
s32 func_020103b4(Obj *o, s32 a, u32 b, u32 c);
s32 func_02010358(Obj *o, s32 a, u32 b, u32 c);
s32 func_02010914(Obj *o);
s32 func_020109c4(Obj *o);
s32 func_0201071c(Obj *o);
s32 func_0201065c(Obj *o);
s32 func_02056654(void *p);
s32 func_020565e8(void *p, u32 a);
s32 func_02045570(P2 *p, s32 a);
s32 func_0203ee38(V3 *a, V3 *b);
s32 func_020902b0(s32 a, V3 *b, s32 c, s32 d);
s32 func_02090330(s32 a, V3 *v, void *p, s32 b);
void func_01ffb898(V3 *a, Mtx *m, V3 *out);
s32 func_01ffcb0c(s32 a, s32 b);
s32 func_0200f4c0(Obj *o, s32 a);
s32 func_0200f660(Obj *o);
s32 func_02097520(u32 a);
u16 *func_02098744(s32 a);
s32 func_02010d50(s32 a, s32 b);
s32 func_02010a34(Obj *o, s32 *a);
s32 func_02010a7c(u16 *out, Obj *o);
s32 func_0204ed8c(V3 *v, s32 a, s32 b);
s32 func_ov003_0221cbe4(u32 a, P2 *p, s32 b);
s32 func_ov003_0221cb54(P2 *p);
s32 func_ov003_022135c4(Q *q, s32 a);
s32 func_ov003_02205c28(Obj *o);
s32 func_ov003_0220f314(Obj *o);
s32 func_0200e248(Obj *o, Msg *m);

s32 func_ov003_0220e970(Obj *o);
void func_ov003_0220e9a4(Obj *o);
s32 func_ov003_0220ea4c(Obj *o, s16 a);
s32 func_ov003_0220ea58(Obj *o);
void func_ov003_0220eae8(Rec *r);
s32 func_ov003_0220eaf0(Obj *o, s32 a, s16 b);
s32 func_ov003_0220eb28(Obj *o);
void func_ov003_0220eb48(Obj *o);
void func_ov003_0220eb98(Obj *o);
void func_ov003_0220ecb8(Obj *o);
void func_ov003_0220ed24(Obj *o, s16 a);
s32 func_ov003_0220ed5c(Obj *o, Arg *a);
void func_ov003_0220edc4(u8 *src, u8 *dst);
void func_ov003_0220edcc(u8 *p, u32 v);
void func_ov003_0220edd0(Rec *r, u32 c, Pv p);
s32 func_ov003_0220eddc(Obj *o, u32 a, Pv p, s32 c, s16 e);
void func_ov003_0220ee2c(Rec *r, u32 c, Pv p);
s32 func_ov003_0220ee38(Obj *o);
void func_ov003_0220ee58(Obj *o);
s32 func_ov003_0220eeec(Obj *o);
s32 func_ov003_0220efb0(Obj *o);
s32 func_ov003_0220efd8(Obj *o);
void func_ov003_0220f00c(Obj *o);
s32 func_ov003_0220f010(Obj *o, Arg *a);
void func_ov003_0220f054(Rec *r, u32 a, u32 b, Pv p);
s32 func_ov003_0220f064(Obj *o, u32 a, u32 b, Pv p, s32 c, s16 d);
void func_ov003_0220f0b4(Rec *r, u32 a, u32 b, Pv p);
s32 func_ov003_0220f0c4(Obj *o);
s32 func_ov003_0220f10c(Obj *o);
void func_ov003_0220f14c(Obj *o);
}

// forward declarations (functions are emitted in descending address order)
extern "C" s32 func_ov003_0220e970(Obj *o);
extern "C" void func_ov003_0220e9a4(Obj *o);
extern "C" s32 func_ov003_0220ea4c(Obj *o, s16 a);
extern "C" s32 func_ov003_0220ea58(Obj *o);
extern "C" s32 func_ov003_0220eaf0(Obj *o, s32 a, s16 b);
extern "C" s32 func_ov003_0220eb28(Obj *o);
extern "C" void func_ov003_0220eb48(Obj *o);
extern "C" void func_ov003_0220eb98(Obj *o);
extern "C" void func_ov003_0220ecb8(Obj *o);
extern "C" void func_ov003_0220ed24(Obj *o, s16 a);
extern "C" s32 func_ov003_0220ed5c(Obj *o, Arg *a);
extern "C" s32 func_ov003_0220eddc(Obj *o, u32 a, Pv p, s32 c, s16 e);
extern "C" s32 func_ov003_0220ee38(Obj *o);
extern "C" void func_ov003_0220ee58(Obj *o);
extern "C" s32 func_ov003_0220eeec(Obj *o);
extern "C" s32 func_ov003_0220efb0(Obj *o);
extern "C" s32 func_ov003_0220efd8(Obj *o);
extern "C" s32 func_ov003_0220f010(Obj *o, Arg *a);
extern "C" s32 func_ov003_0220f064(Obj *o, u32 a, u32 b, Pv p, s32 c, s16 d);
extern "C" s32 func_ov003_0220f0c4(Obj *o);
extern "C" s32 func_ov003_0220f10c(Obj *o);
extern "C" void func_ov003_0220f14c(Obj *o);
extern "C" void func_ov003_0220eae8(Rec *r);
extern "C" void func_ov003_0220edc4(u8 *src, u8 *dst);
extern "C" void func_ov003_0220edcc(u8 *p, u32 v);
extern "C" void func_ov003_0220edd0(Rec *r, u32 c, Pv p);
extern "C" void func_ov003_0220ee2c(Rec *r, u32 c, Pv p);
extern "C" void func_ov003_0220f00c(Obj *o);
extern "C" void func_ov003_0220f054(Rec *r, u32 a, u32 b, Pv p);
extern "C" void func_ov003_0220f0b4(Rec *r, u32 a, u32 b, Pv p);
}

namespace ns_0220f314 {
struct Unk_ov003_0220f314_V3 {
    s32 x, y, z;
    Unk_ov003_0220f314_V3() {}
};

struct Unk_ov003_0220f314_P2 {
    s32 x, z;
    u8 flag;
};

struct Unk_ov003_0220f314_Arg {
    u8 pad_00[0xc];
    Unk_ov003_0220f314_P2 unk_0c;
};

struct Unk_ov003_0220f314_Arg4 {
    u8 pad_00[0xc];
    u8 b[4];
};

struct Unk_ov003_0220f314_Pair {
    s32 a, b;
};

struct Unk_ov003_0220f314_Sec {
    virtual void vfunc_00();
};

struct Unk_ov003_0220f314_P0 {
    virtual void vfunc_00();
    u8 pad_04[0x5c - 4];
    s32 unk_5c;
    s32 unk_60;
    s32 unk_64;
    u8 pad_68[0x8e - 0x68];
    s16 unk_8e;
    u8 pad_90[0x98 - 0x90];
    s32 unk_98;
    u8 pad_9c[0xec - 0x9c];
};

struct Unk_ov003_0220f314_Rec7d0 {
    Unk_ov003_0220f314_V3 v;
    s16 h;
};

struct Unk_ov003_0220f314_Obj : Unk_ov003_0220f314_P0, Unk_ov003_0220f314_Sec {
    u8 pad_f0[0x140 - 0xf0];
    s32 unk_140;
    u8 unk_144;
    u8 pad_145[3];
    s32 unk_148;
    s32 unk_14c;
    s32 unk_150;
    s32 unk_154;
    s32 unk_158;
    s32 unk_15c;
    u8 pad_160[0x168 - 0x160];
    u8 unk_168;
    u8 pad_169[0x1c0 - 0x169];
    u8 unk_1c0[4];
    u8 pad_1c4[0x2cc - 0x1c4];
    u8 unk_2cc[8];
    u8 pad_2d4[0x6f0 - 0x2d4];
    s32 unk_6f0;
    s32 unk_6f4;
    s32 unk_6f8;
    u8 pad_6fc[0x7d0 - 0x6fc];
    Unk_ov003_0220f314_Rec7d0 unk_7d0;
    u8 pad_7e0[0x7ec - 0x7e0];
    s32 unk_7ec;
    u8 pad_7f0[0x7f8 - 0x7f0];
    s32 unk_7f8;
    u32 unk_7fc;
    u8 pad_800[0x8ec - 0x800];
    u8 unk_8ec[8];
};

typedef Unk_ov003_0220f314_Obj Obj;
typedef Unk_ov003_0220f314_V3 V3;
typedef Unk_0200e2c0 Msg;
extern "C" void _ZN12Unk_0200e2c013func_0200e2c0Eiis(Msg *self, s32 a, s32 b, s16 c);
typedef Unk_ov003_0220f314_P2 P2;
typedef Unk_ov003_0220f314_Arg Arg;
typedef Unk_ov003_0220f314_Arg4 Arg4;
typedef Unk_ov003_0220f314_Pair Pair;

extern "C" {
extern void *data_020cbb18;

s32 func_02010914(Obj *o);
s32 func_0200ef08(Obj *o);
s32 func_0201071c(Obj *o);
s32 func_020109c4(Obj *o);
s32 func_020729bc(void *g, u32 a);
s32 func_0200ec44(Obj *o, u32 a);
s32 func_0200ecdc(Obj *o, u32 a);
s32 func_0200e248(Obj *o, Msg *m);
s32 func_02010358(Obj *o, s32 a, u32 b, u32 c);
s32 func_020103b4(Obj *o, s32 a, u32 b, u32 c);
s32 func_02007c08(Obj *o, s32 a);
s32 func_020e7b98(s32 a, s32 b);
s32 func_02010d50(s32 a, s32 b);
s32 func_02010d5c(s32 a, s32 b, s32 c);
s32 func_02010a34(Obj *o, s32 *a);
s32 func_02056654(void *p);
s32 func_020565e8(void *p, u32 a);
s32 func_0200ce98(Obj *o, s32 a, s32 b, s32 c);
s32 func_0200f504(Obj *o, s32 a);
s32 func_02076a2c(void *p, s32 *a, s32 *b);
s32 func_02076a6c(void *p, s32 a, s32 b);
s32 func_0200f660(Obj *o);
void func_0200f43c(V3 *out, Obj *o);
void func_0200f45c(V3 *out, Obj *o);
void func_02010740(Obj *o, V3 *v, s32 a, s32 b);
void func_02089040(void *p);
s32 func_02090330(s32 a, void *b, void *c, s32 d);
s32 func_02063b8c(s32 a);
s32 func_0203081c(V3 *a, s32 *b, s32 c);
void func_0200ec1c(Obj *o, u32 a);
void func_0200ec30(Obj *o, u32 a);
s32 func_ov003_02205a00(Obj *o, u8 *pa, u8 *pb, s32 *out);
s32 func_ov003_0220eddc(Obj *o, s32 a, s32 *b, s32 c, s32 d);
s32 func_ov003_0220f064(Obj *o, s32 a, s32 b, s32 *c, s32 d, s32 e);
s32 func_ov003_0220f14c(Obj *o);

s32 func_ov003_0220f314(Obj *o);
s32 func_ov003_0220f33c(Obj *o);
void func_ov003_0220f370(Obj *o, s32 a);
s32 func_ov003_0220f3cc(Obj *o, Arg4 *a);
void func_ov003_0220f43c(u8 *s, u8 *a, u8 *b, u8 *c, u8 *d, u8 *e);
void func_ov003_0220f45c(u8 *d, u8 a, u8 b, u8 c, u8 e, u8 f);
void func_ov003_0220f474(u8 *d, u32 x, u32 y, s32 *s);
s32 func_ov003_0220f484(Obj *o, u32 a, u32 b, s32 *c, s32 d, s32 e);
void func_ov003_0220f4d4(u8 *d, u32 x, u32 y, s32 *s);
s32 func_ov003_0220f4e4(Obj *o);
s32 func_ov003_0220f500(Obj *o);
s32 func_ov003_0220f540(Obj *o);
s32 func_ov003_0220f570(Obj *o, s16 b);
s32 func_ov003_0220f57c(Obj *o);
s32 func_ov003_0220f590(Obj *o, s32 a, s16 b);
s32 func_ov003_0220f5c8(Obj *o);
s32 func_ov003_0220f668(Obj *o, u8 a, ...);
s32 func_ov003_0220f828(Obj *o);
s32 func_ov003_0220f860(Obj *o, s16 b);
s32 func_ov003_0220f86c(Obj *o);
s32 func_ov003_0220f880(Obj *o, s32 a, s16 b);
void func_ov003_0220f8b8(Obj *o);
s32 func_ov003_0220f97c(Obj *o);
s32 func_ov003_0220f9b8(Obj *o);
s32 func_ov003_0220f9ec(Obj *o);
s32 func_ov003_0220fa2c(Obj *o);
s32 func_ov003_0220fa3c(Obj *o, s32 a);
s32 func_ov003_0220fa70(Obj *o, Arg *a);
void func_ov003_0220fb78(void *p, s32 *a, s32 *b, u8 *c);
s32 func_ov003_0220fb90(void *p, s32 a, s32 b, u8 c);
void func_ov003_0220fba8(u8 *d, V3 *v, s32 a);
s32 func_ov003_0220fbb8(Obj *o, s32 *a, s32 *b, u8 *c, s32 d, s32 e);
s32 func_ov003_0220fc00(Obj *o, s32 a, s16 b);
void func_ov003_0220fc88(u8 *d, s32 a, s32 b, u32 c);
}

static inline BOOL Unk_ov003_0220fa70_Ge(s32 v) {
    if (v >= 0x1000) {
        return TRUE;
    }
    return FALSE;
}

// forward declarations (functions are emitted in descending address order)
extern "C" s32 func_ov003_0220f314(Obj *o);
extern "C" s32 func_ov003_0220f33c(Obj *o);
extern "C" void func_ov003_0220f370(Obj *o, s32 a);
extern "C" s32 func_ov003_0220f3cc(Obj *o, Arg4 *a);
extern "C" s32 func_ov003_0220f484(Obj *o, u32 a, u32 b, s32 *c, s32 d, s32 e);
extern "C" s32 func_ov003_0220f4e4(Obj *o);
extern "C" s32 func_ov003_0220f500(Obj *o);
extern "C" s32 func_ov003_0220f540(Obj *o);
extern "C" s32 func_ov003_0220f570(Obj *o, s16 b);
extern "C" s32 func_ov003_0220f57c(Obj *o);
extern "C" s32 func_ov003_0220f590(Obj *o, s32 a, s16 b);
extern "C" s32 func_ov003_0220f5c8(Obj *o);
extern "C" s32 func_ov003_0220f668(Obj *o, u8 a, ...);
extern "C" s32 func_ov003_0220f828(Obj *o);
extern "C" s32 func_ov003_0220f860(Obj *o, s16 b);
extern "C" s32 func_ov003_0220f86c(Obj *o);
extern "C" s32 func_ov003_0220f880(Obj *o, s32 a, s16 b);
extern "C" void func_ov003_0220f8b8(Obj *o);
extern "C" s32 func_ov003_0220f97c(Obj *o);
extern "C" s32 func_ov003_0220f9b8(Obj *o);
extern "C" s32 func_ov003_0220f9ec(Obj *o);
extern "C" s32 func_ov003_0220fa2c(Obj *o);
extern "C" s32 func_ov003_0220fa3c(Obj *o, s32 a);
extern "C" s32 func_ov003_0220fa70(Obj *o, Arg *a);
extern "C" void func_ov003_0220fb78(void *p, s32 *a, s32 *b, u8 *c);
extern "C" s32 func_ov003_0220fb90(void *p, s32 a, s32 b, u8 c);
extern "C" s32 func_ov003_0220fbb8(Obj *o, s32 *a, s32 *b, u8 *c, s32 d, s32 e);
extern "C" s32 func_ov003_0220fc00(Obj *o, s32 a, s16 b);
extern "C" void func_ov003_0220f43c(u8 *s, u8 *a, u8 *b, u8 *c, u8 *d, u8 *e);
extern "C" void func_ov003_0220f45c(u8 *d, u8 a, u8 b, u8 c, u8 e, u8 f);
extern "C" void func_ov003_0220f4d4(u8 *d, u32 x, u32 y, s32 *s);
extern "C" void func_ov003_0220fba8(u8 *d, V3 *v, s32 a);
extern "C" void func_ov003_0220f474(u8 *d, u32 x, u32 y, s32 *s);
}

namespace ns_0220fc88 {
struct Unk_ov003_0220fc88_V3 {
    s32 x, y, z;
    Unk_ov003_0220fc88_V3() {}
    Unk_ov003_0220fc88_V3(s32 a, s32 b, s32 c) {
        x = a;
        y = b;
        z = c;
    }
};

struct Unk_ov003_0220fc88_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

struct Unk_ov003_0220fc88_Bf {
    u8 a : 2;
    u8 b : 2;
    u8 c : 4;
};

struct Unk_ov003_0220fc88_RecB {
    s32 st;
    s32 a;
    s32 b;
    s32 timer;
    s16 h;
    u8 bits;
    u8 pad_13;
};

struct Unk_ov003_0220fc88_Arg {
    u8 pad_00[0xc];
    Unk_ov003_0220fc88_RecA unk_0c;
    Unk_ov003_0220fc88_Arg(const Unk_ov003_0220fc88_Arg &o) {}
};

struct Unk_ov003_0220fc88_H {
    u16 a;
    u16 b;
};

struct Unk_ov003_0220fc88_Sec {
    virtual void vfunc_00();
};

struct Unk_ov003_0220fc88_P0 {
    virtual void vfunc_00();
    u8 pad_04[0x8e - 4];
    s16 unk_8e;
    u8 pad_90[0xec - 0x90];
};

struct Unk_ov003_0220fc88_Obj : Unk_ov003_0220fc88_P0, Unk_ov003_0220fc88_Sec {
    u8 pad_f0[0x2cc - 0xf0];
    u8 unk_2cc[4];
    Unk_ov003_0220fc88_Bits unk_2d0;
    Unk_ov003_0220fc88_Bits unk_2d4;
    u8 pad_2d8[0x59c - 0x2d8];
    u8 unk_59c[4];
    s32 unk_5a0;
    u8 pad_5a4[0x628 - 0x5a4];
    Unk_ov003_0220fc88_V3 unk_628;
    u8 pad_634[0x7d0 - 0x634];
    Unk_ov003_0220fc88_RecB unk_7d0;
    u8 pad_7e4[0x7ec - 0x7e4];
    s32 unk_7ec;
    u8 pad_7f0[0x7f8 - 0x7f0];
    s32 unk_7f8;
    u32 unk_7fc;
    u8 pad_800[0x8ec - 0x800];
    u8 unk_8ec[4];
};

struct Unk_ov003_0220fc88_Sub {
    u8 pad_00[0x9c];
    u8 unk_9c[4];
    Unk_ov003_0220fc88_Bits unk_a0;
};

typedef Unk_ov003_0220fc88_Obj Obj;
typedef Unk_ov003_0220fc88_V3 V3;
typedef Unk_ov003_0220fc88_RecA RecA;
typedef Unk_ov003_0220fc88_RecB RecB;
typedef Unk_0200e2c0 Msg;
extern "C" void _ZN12Unk_0200e2c013func_0200e2c0Eiis(Msg *self, s32 a, s32 b, s16 c);
typedef Unk_ov003_0220fc88_Arg Arg;
typedef Unk_ov003_0220fc88_H H;
typedef Unk_ov003_0220fc88_Sub Sub;

extern "C" {
extern void *data_020cbb18;

s32 func_02010914(Obj *o);
s32 func_020109c4(Obj *o);
s32 func_0200ef08(Obj *o);
s32 func_0201071c(Obj *o);
s32 func_0201065c(Obj *o);
s32 func_020729bc(void *g, u32 a);
s32 func_02056654(void *p);
s32 func_020565e8(void *p, u32 a);
s32 func_02007c08(Obj *o, s32 a);
s32 func_0200ce98(Obj *o, s32 a, s32 b, s32 c);
s32 func_0200bd60(Obj *o, s32 a, s32 b, s32 c);
s32 func_0203ee38(V3 *a, V3 *b);
s32 func_02090330(u32 id, V3 *v, s16 *h, u32 z);
s32 func_020902d4(s32 h, V3 *v, s16 *p);
s32 func_020902f8(s32 h);
s32 func_02010358(Obj *o, s32 a, u32 b, u32 c);
s32 func_0200ecdc(Obj *o, u32 a);
s32 func_0200ec30(Obj *o, u32 a);
s32 func_0200ec1c(Obj *o, u32 a);
s32 func_0200e248(Obj *o, Msg *m);
s32 func_0203d76c();
s32 func_0205e1a0(void *p, u32 a, u32 b, u32 c);
s32 func_0205668c(void *p, u32 a, s32 b, s32 c, u32 d);
Sub *func_0205dfa4(void *p);
s32 func_02010a7c(H *h, Obj *o);
s32 func_02010d20(Obj *o);
s32 func_02098738(s32 r, void *p);
s32 func_02010284(Obj *o, s32 a, s32 b);
s32 func_02076a2c(void *p, s32 *a, s32 *b);
s32 func_020769ac(void *p);
s32 func_02076a6c(void *p, s32 a, s32 b);
s32 func_020769c4(void *p, s32 a);
s32 func_ov003_02205c28(Obj *o);
s32 func_ov003_0221129c(Obj *o, s32 a, s32 b, s32 c, s32 d, s32 e);
s32 func_ov003_02211098(Obj *o, u32 a, s32 b, s32 c, s32 d, s32 e, s32 f);
s32 func_ov003_022105bc(void *p, u8 *a, s32 *b, s32 *c, s16 *d);
s32 func_ov003_02210628(Obj *o, s32 id, u8 low, s32 x, s32 y, s16 h, s32 a, s32 b);
s32 func_ov003_02210608(void *p, s32 st, u32 bits, s32 x, s32 y, s32 h, s32 v);
s32 func_ov003_022105e0(void *p, u32 bits, s32 x, s32 y, s32 h);

void func_ov003_0220fc88(s32 *p, s32 a, s32 b, u32 c);
s32 func_ov003_0220fc90(Obj *o);
void func_ov003_0220fcd8(Obj *o);
s32 func_ov003_0220fd44(Obj *o);
void func_ov003_0220fdac(Obj *o);
s32 func_ov003_0220fdcc(Obj *o, s16 b);
s32 func_ov003_0220fdd8(Obj *o);
void func_ov003_0220fe0c(u8 *p);
s32 func_ov003_0220fe1c(Obj *o, s32 a, s16 b);
s32 func_ov003_0220fe54(Obj *o);
void func_ov003_0220fe70(Obj *o);
void func_ov003_0220ff5c(Obj *o);
s32 func_ov003_0220ffd4(Obj *o, s32 a);
s32 func_ov003_02210044(Obj *o, Arg a);
s32 func_ov003_0221019c(u8 *p, u8 *a, s32 *b, s32 *c, s16 *d);
s32 func_ov003_022101c0(u8 *p, u32 id, s32 x, s32 y, s32 h);
s32 func_ov003_022101e8(RecA *p, s32 st, u32 bits, s32 x, s32 y, s32 h);
s32 func_ov003_02210204(Obj *o, s32 id, u8 low, s32 x, s32 y, s16 h, s32 a, s32 b);
s32 func_ov003_02210260(RecA *p, s32 st, u32 bits, s32 x, s32 y, s32 h);
s32 func_ov003_0221027c(Obj *o);
void func_ov003_02210298(Obj *o);
s32 func_ov003_02210404(Obj *o);
s32 func_ov003_02210438(Obj *o, s32 a);
s32 func_ov003_022104a8(Obj *o, Arg a);
}

// forward declarations (functions are emitted in descending address order)
extern "C" void func_ov003_0220fc88(s32 *p, s32 a, s32 b, u32 c);
extern "C" s32 func_ov003_0220fc90(Obj *o);
extern "C" void func_ov003_0220fcd8(Obj *o);
extern "C" s32 func_ov003_0220fd44(Obj *o);
extern "C" void func_ov003_0220fdac(Obj *o);
extern "C" s32 func_ov003_0220fdcc(Obj *o, s16 b);
extern "C" s32 func_ov003_0220fdd8(Obj *o);
extern "C" void func_ov003_0220fe0c(u8 *p);
extern "C" s32 func_ov003_0220fe1c(Obj *o, s32 a, s16 b);
extern "C" s32 func_ov003_0220fe54(Obj *o);
extern "C" void func_ov003_0220fe70(Obj *o);
extern "C" void func_ov003_0220ff5c(Obj *o);
extern "C" s32 func_ov003_0220ffd4(Obj *o, s32 a);
extern "C" s32 func_ov003_02210044(Obj *o, Arg a);
extern "C" s32 func_ov003_0221019c(u8 *p, u8 *a, s32 *b, s32 *c, s16 *d);
extern "C" s32 func_ov003_022101c0(u8 *p, u32 id, s32 x, s32 y, s32 h);
extern "C" s32 func_ov003_022101e8(RecA *p, s32 st, u32 bits, s32 x, s32 y, s32 h);
extern "C" s32 func_ov003_02210204(Obj *o, s32 id, u8 low, s32 x, s32 y, s16 h, s32 a, s32 b);
extern "C" s32 func_ov003_02210260(RecA *p, s32 st, u32 bits, s32 x, s32 y, s32 h);
extern "C" s32 func_ov003_0221027c(Obj *o);
extern "C" void func_ov003_02210298(Obj *o);
extern "C" s32 func_ov003_02210404(Obj *o);
extern "C" s32 func_ov003_02210438(Obj *o, s32 a);
extern "C" s32 func_ov003_022104a8(Obj *o, Arg a);
}

namespace ns_022105bc {
struct Unk_ov003_022105bc_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

struct Unk_ov003_02210628_Pay {
    s32 a;
    s32 c;
    s32 d;
    s16 e;
    u8 b;
};

struct Unk_ov003_02210608_Rec {
    s32 a;
    s32 c;
    s32 d;
    s32 f;
    s16 e;
    u8 b;
};

struct Unk_ov003_02210bdc_Rec {
    u8 a;
    u8 b;
};

struct Unk_ov003_02210eb4_Rec {
    s32 a;
    s32 b;
    s16 c;
    u8 pad_0a;
    u8 cnt;
};

struct Unk_ov003_022105bc_Obj {
    u8 pad_00[0x5c];
    u8 unk_5c[0x2cc - 0x5c];
    u8 unk_2cc[8];
    Unk_ov003_022105bc_Bits unk_2d4;
    u8 pad_2d8[0x700 - 0x2d8];
    s32 unk_700;
    u8 pad_704[0x7d0 - 0x704];
    u8 unk_7d0;
    u8 unk_7d1;
    u8 pad_7d2[0x7ec - 0x7d2];
    s32 unk_7ec;
    u8 pad_7f0[4];
    s32 unk_7f4;
    s32 unk_7f8;
    s32 unk_7fc;
    u8 pad_800[0x8ec - 0x800];
    u8 unk_8ec[2];
    u8 pad_8ee[0xc80 - 0x8ee];
    u16 unk_c80;
};

typedef Unk_ov003_022105bc_Obj Obj;
typedef Unk_ov003_022105bc_Bits Bits;
typedef Unk_0200e2c0 Msg;
extern "C" void _ZN12Unk_0200e2c013func_0200e2c0Eiis(Msg *self, s32 a, s32 b, s32 c);
typedef Unk_ov003_02210628_Pay Pay;
typedef Unk_ov003_02210608_Rec Rec;
typedef Unk_ov003_02210bdc_Rec Rec2;
typedef Unk_ov003_02210eb4_Rec Rec3;

extern "C" {
extern void *data_020cbb18;

s32 func_02076a2c(void *p, u32 a, u32 b);
s32 func_02076a6c(void *p, u32 a, u32 b);
u32 func_020769ac(void *p);
void func_020769c4(void *p, s32 a);
void func_02010a7c(u16 *out, Obj *o);
s32 func_0200ec1c(Obj *o, u32 a);
s32 func_0200ec30(Obj *o, u32 a);
s32 func_0200ec44(Obj *o, u32 a);
s32 func_0200e248(Obj *o, Msg *m);
s32 func_02010358(Obj *o, s32 a, s32 b, s32 c);
s32 func_020103b4(Obj *o, s32 a, s32 b, s32 c);
s32 func_020729bc(void *g, s32 a);
s32 func_02056654(void *p);
s32 func_0200ed9c(Obj *o);
s32 func_02007c08(Obj *o, s32 a);
s32 func_0204b25c(u16 *p);
s32 func_0204b2d4(u16 *p);
s32 func_020b0f30();
s32 func_0200ce98(Obj *o, s32 a, s32 b, s32 c);
s32 func_02008e50(Obj *o, s32 a, s32 b, s32 c, s32 d, s32 e);
s32 func_0203d76c();
void *func_020850e0();
s32 func_020851bc(void *p, s32 a);
s32 func_02085188(void *p, s32 a);
void *func_0209750c();
s32 func_02097ff4(void *p, s32 a);
s32 func_02041b68();
s32 func_02034dd0(s32 a, s32 b, s32 c);
s32 func_020b50e8();
s32 func_02098044(void *p, s32 a);
s32 func_020b50dc();
s32 func_020b530c(s32 a);
u32 func_020b1614(void *p);
s32 func_02010914(Obj *o);
s32 func_0201071c(Obj *o);
s32 func_0200f258(Obj *o);
s32 func_0200f594(Obj *o, s32 a, s32 b, s32 c);

void func_ov003_022106e8(Pay *p, s32 a, u32 b, s32 c, s32 d, s16 e);
s32 func_ov003_02210204(Obj *o, s32 a, s32 b, s32 c, s32 d, s16 e, s32 f, s16 g);
s32 func_ov003_02218d78();
s32 func_ov003_02218d34(void *p);
void func_ov003_02210cfc(u8 *p, u8 *a, u8 *b);
void func_ov003_02210d08(u8 *p, u32 a, u32 b);
s32 func_ov003_02210d10(Obj *o, u32 a, u32 b, s32 c, s16 d);
s32 func_ov003_02210dc0(Obj *o, s32 a, s32 b);
s32 func_ov003_022107a8(Obj *o, s32 a, s32 b);
void func_ov003_02210ad4(Obj *o);
void func_ov003_022107fc(Obj *o);
s32 func_ov003_02210eb4(Obj *o);
void func_ov003_02210e40(Obj *o);
s32 func_ov003_02210e18(Obj *o);
}

namespace Unk_ov003_022107e0_Ns {
extern "C" s32 func_ov003_022107fc(Obj *o);
}

namespace Unk_ov003_02210b94_Ns {
extern "C" s32 func_ov003_02210d10(Obj *o, u32 a, u32 b, s32 c, s32 d);
}

static inline BOOL Unk_ov003_022107fc_Eq(u16 *p, u16 *k) {
    if (func_0204b2d4(p)) {
        *k = 0xfff1;
        s32 a = func_0204b25c(p);
        if (a == func_0204b25c(k)) return TRUE;
        return FALSE;
    }
    if (*p == 0xfff1) return TRUE;
    return FALSE;
}

// forward declarations (functions are emitted in descending address order)
extern "C" void func_ov003_022105bc(u8 *p, u8 *a, u32 b, u32 c, u16 *d);
extern "C" void func_ov003_022105e0(u8 *p, u32 a, u32 b, u32 c, s16 d);
extern "C" void func_ov003_02210608(Rec *p, s32 a, u32 b, s32 c, s32 d, s16 e, s32 f);
extern "C" s32 func_ov003_02210628(Obj *o, s32 a, s32 b, s32 c, s32 d, s16 e, s32 f, s16 g);
extern "C" void func_ov003_022106e8(Pay *p, s32 a, u32 b, s32 c, s32 d, s16 e);
extern "C" void func_ov003_02210704();
extern "C" s32 func_ov003_02210708(Obj *o, s32 a);
extern "C" s32 func_ov003_02210720(Obj *o, s32 a);
extern "C" void func_ov003_0221072c(Obj *o);
extern "C" s32 func_ov003_022107a8(Obj *o, s32 a, s32 b);
extern "C" void func_ov003_022107e0(Obj *o);
extern "C" void func_ov003_022107fc(Obj *o);
extern "C" void func_ov003_02210ad4(Obj *o);
extern "C" void func_ov003_02210b94(Obj *o, s32 a);
extern "C" s32 func_ov003_02210bdc(Obj *o, Msg *m);
extern "C" void func_ov003_02210cfc(u8 *p, u8 *a, u8 *b);
extern "C" void func_ov003_02210d08(u8 *p, u32 a, u32 b);
extern "C" s32 func_ov003_02210d10(Obj *o, u32 a, u32 b, s32 c, s16 d);
extern "C" s32 func_ov003_02210d54(Obj *o, s32 a, s32 b);
extern "C" void func_ov003_02210d94();
extern "C" s32 func_ov003_02210d98(Obj *o, s32 a);
extern "C" void func_ov003_02210da4(Obj *o);
extern "C" s32 func_ov003_02210dc0(Obj *o, s32 a, s32 b);
extern "C" s32 func_ov003_02210df8(Obj *o);
extern "C" s32 func_ov003_02210e18(Obj *o);
extern "C" void func_ov003_02210e40(Obj *o);
extern "C" s32 func_ov003_02210eb4(Obj *o);
}

namespace ns_02210ef0 {
struct Unk_ov003_02210ef0_V3 {
    s32 x, y, z;
    Unk_ov003_02210ef0_V3() {}
    Unk_ov003_02210ef0_V3(s32 a, s32 b, s32 c) {
        x = a;
        y = b;
        z = c;
    }
};

struct Unk_ov003_02210ef0_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

struct Unk_ov003_02210ef0_Pair {
    s32 a, b;
    Unk_ov003_02210ef0_Pair() {}
    Unk_ov003_02210ef0_Pair(s32 x, s32 y) {
        a = x;
        b = y;
    }
};

struct Unk_ov003_02210ef0_Rec2 {
    u8 a, b;
};

struct Unk_ov003_02210ef0_Obj {
    u8 pad_00[0x5c];
    Unk_ov003_02210ef0_V3 unk_5c;
    u8 pad_68[0x8e - 0x68];
    s16 unk_8e;
    u8 pad_90[0x2cc - 0x90];
    u8 unk_2cc[8];
    Unk_ov003_02210ef0_Bits unk_2d4;
    u8 pad_2d8[0x59c - 0x2d8];
    u8 unk_59c[0x7d0 - 0x59c];
    Unk_ov003_02210ef0_Rec unk_7d0;
    u8 unk_7dc;
    u8 pad_7dd[0x7ec - 0x7dd];
    s32 unk_7ec;
    u8 pad_7f0[0x7f8 - 0x7f0];
    s32 unk_7f8;
    s32 unk_7fc;
    u8 pad_800[0x814 - 0x800];
    s32 unk_814;
    u8 pad_818[0x81c - 0x818];
    u16 unk_81c;
    u16 unk_81e;
    u8 pad_820[0x8ec - 0x820];
    u8 unk_8ec[0xc];
    u8 pad_8f8[0xc80 - 0x8f8];
    u16 unk_c80;
};

namespace Unk_ov003_02210f7c_Ns {
extern "C" void func_ov003_0221107c(struct Unk_ov003_02210ef0_Rec *p, u32 a, s32 b, s32 c, s16 d, u32 e);
}

typedef Unk_ov003_02210ef0_Obj Obj;
typedef Unk_ov003_02210ef0_V3 V3;
typedef Unk_0200e2c0 Msg;
extern "C" void _ZN12Unk_0200e2c013func_0200e2c0Eiis(Msg *self, u32 a, u32 b, u32 c);
typedef Unk_ov003_02210ef0_Rec Rec;
typedef Unk_ov003_02210ef0_Pair Pair;

extern "C" {
extern void *data_020cbb18;
extern void *data_021c47c4;

s32 func_02095670(u8 *a, s32 *b, s32 *c, s32 d, s32 e);
void func_02076a2c(void *p, s32 *a, s32 *b);
void func_02076a6c(void *p, s32 a, s32 b);
u32 func_020769ac(void *p);
void func_020769c4(void *p, s32 a);
s32 func_0200e248(Obj *o, Msg *m);
s32 func_0200ec30(Obj *o, u32 a);
s32 func_0200ec1c(Obj *o, u32 a);
s32 func_0200ec44(Obj *o, u32 a);
s32 func_0200ecdc(Obj *o, u32 a);
s32 func_02010358(Obj *o, u32 a, u32 b, u32 c);
s32 func_020103b4(Obj *o, u32 a, u32 b);
s32 func_020729bc(void *g, s32 a);
s32 func_02056654(void *p);
s32 func_020565e8(void *p, s32 a);
void func_02010914(Obj *o);
void func_0201071c(Obj *o);
s32 func_0201065c(Obj *o);
s32 func_0200f594(Obj *o, s32 a, s32 b, s32 c);
s32 func_0200f5b0(Obj *o);
s32 func_0200ede8(Obj *o, V3 *v);
s32 func_0200eee4(Obj *o, Pair *p);
s32 func_02007c08(Obj *o, s32 a);
s32 func_0200ce98(Obj *o, s32 a, s32 b, s32 c);
void func_0204ee10(s32 *a, s32 *b, V3 *c);
s32 func_02090330(s32 a, V3 *b, s16 *c, s32 d);
s32 func_0209028c(s32 a, V3 *b, s32 c, s32 d);
void func_01ffca8c(V3 *a, V3 *b, V3 *c);
s32 func_0204407c(u16 *a, Pair *b, s32 c, s32 d);
void func_02045570(Pair *a, s32 b);
void func_0204ed8c(V3 *a, u32 b, u32 c);
void func_0205e1a0(void *p, s32 a, s32 b, s32 c);
u16 *func_0204eba0(void *grid, V3 *v, u32 a);
s32 func_ov003_02218d50(void *p, s32 a);
s32 func_ov003_02205c28(Obj *o);
void func_ov003_02211878(void *p, Pair *q);
s32 func_ov003_02211890(Obj *o, Pair *q, s32 a, s32 b);

void func_ov003_02211030(u8 *p, u8 *a, s32 *b, s32 *c, u16 *e);
void func_ov003_02211054(u8 *p, u32 a, s32 b, s32 c, s16 e);
void func_ov003_0221107c(Rec *p, u32 a, s32 b, s32 c, s16 d, u8 e);
s32 func_ov003_02211098(Obj *o, u8 a, s32 b, s32 c, s16 d, s32 e, s32 f);
void func_ov003_022110e8(Rec *p, u32 a, s32 b, s32 c, s16 d);
void func_ov003_022111a0(Obj *o);
void func_ov003_02211164(Obj *o);
void func_ov003_02211120(Obj *o);
void func_ov003_0221125c(u8 *p, s32 *a, s32 *b, s16 *c);
void func_ov003_02211278(u8 *p, s32 a, s32 b, s16 c);
void func_ov003_02211294(Rec *p, s32 a, s32 b, s16 c);
s32 func_ov003_0221129c(Obj *o, s32 a, s32 b, s16 c, s32 d, s32 e);
void func_ov003_022112e4(Rec *p, s32 a, s32 b, s16 c);
void func_ov003_02211594(Obj *o);
void func_ov003_0221132c(Obj *o);
s32 func_ov003_022113a4(Obj *o);
s32 func_ov003_02211674(Obj *o, s32 *p, s32 a, s32 b);
void func_ov003_02211798(Obj *o);
void func_ov003_02211710(Obj *o);
}

// forward declarations (functions are emitted in descending address order)
extern "C" void func_ov003_02210ef0(Obj *o, s32 x);
extern "C" void func_ov003_02210f7c(Obj *o, Msg *m);
extern "C" void func_ov003_02211030(u8 *p, u8 *a, s32 *b, s32 *c, u16 *e);
extern "C" void func_ov003_02211054(u8 *p, u32 a, s32 b, s32 c, s16 e);
extern "C" void func_ov003_0221107c(Rec *p, u32 a, s32 b, s32 c, s16 d, u8 e);
extern "C" s32 func_ov003_02211098(Obj *o, u8 a, s32 b, s32 c, s16 d, s32 e, s32 f);
extern "C" void func_ov003_022110e8(Rec *p, u32 a, s32 b, s32 c, s16 d);
extern "C" void func_ov003_02211100(Obj *o);
extern "C" void func_ov003_02211120(Obj *o);
extern "C" void func_ov003_02211164(Obj *o);
extern "C" void func_ov003_022111a0(Obj *o);
extern "C" void func_ov003_022111bc(Obj *o, s32 x);
extern "C" void func_ov003_02211210(Obj *o, Msg *m);
extern "C" void func_ov003_0221125c(u8 *p, s32 *a, s32 *b, s16 *c);
extern "C" void func_ov003_02211278(u8 *p, s32 a, s32 b, s16 c);
extern "C" void func_ov003_02211294(Rec *p, s32 a, s32 b, s16 c);
extern "C" s32 func_ov003_0221129c(Obj *o, s32 a, s32 b, s16 c, s32 d, s32 e);
extern "C" void func_ov003_022112e4(Rec *p, s32 a, s32 b, s16 c);
extern "C" void func_ov003_022112ec(Obj *o);
extern "C" void func_ov003_0221132c(Obj *o);
extern "C" s32 func_ov003_022113a4(Obj *o);
extern "C" void func_ov003_02211594(Obj *o);
extern "C" void func_ov003_022115bc(Obj *o);
extern "C" void func_ov003_022115f0();
extern "C" void func_ov003_022115f4(Obj *o, Msg *m);
extern "C" s32 func_ov003_02211674(Obj *o, s32 *p, s32 a, s32 b);
extern "C" void func_ov003_022116b8(Obj *o);
extern "C" void func_ov003_02211710(Obj *o);
extern "C" void func_ov003_02211798(Obj *o);
extern "C" void func_ov003_022117c8(Obj *o, s32 x);
}

namespace ns_02211818 {
struct Unk_ov003_02211818_V3 {
    s32 x, y, z;
    Unk_ov003_02211818_V3() {}
};

struct Unk_ov003_02211818_Blk {
    s32 v[12];
};

struct Unk_ov003_02211818_Pair {
    s32 a, b;
};

struct Unk_ov003_02211818_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

struct Unk_ov003_02211818_Rec {
    u16 unk_00;
    u8 pad_02[2];
    s32 unk_04;
    void *unk_08;
    u8 unk_0c;
    u8 unk_0d;
};

struct Unk_ov003_02211818_Obj {
    u8 pad_00[0xc4];
    Unk_ov003_02211818_V3 unk_c4;
    s16 unk_d0;
    u8 pad_d2[0x294 - 0xd2];
    Unk_ov003_02211818_Blk unk_294;
    u8 pad_2c4[0x2cc - 0x2c4];
    u8 unk_2cc[4];
    Unk_ov003_02211818_Bits unk_2d0;
    Unk_ov003_02211818_Bits unk_2d4;
    u8 pad_2d8[0x59c - 0x2d8];
    u8 unk_59c[0x28];
    u8 unk_5c4[0x64];
    u8 pad_628[0x694 - 0x628];
    Unk_ov003_02211818_Blk unk_694;
    u8 pad_6c4[0x700 - 0x6c4];
    s32 unk_700;
    u8 pad_704[0x7d0 - 0x704];
    Unk_ov003_02211818_Rec unk_7d0;
    u8 pad_7e0[0x7ec - 0x7e0];
    s32 unk_7ec;
    u8 pad_7f0[0x7fc - 0x7f0];
    u32 unk_7fc;
    u8 pad_800[0x8ec - 0x800];
    u8 unk_8ec[4];
};

typedef Unk_ov003_02211818_Obj Obj;
typedef Unk_ov003_02211818_V3 V3;
typedef Unk_ov003_02211818_Blk Blk;
typedef Unk_0200e2c0 Msg;
extern "C" void _ZN12Unk_0200e2c013func_0200e2c0Eiis(Msg *self, s32 a, s32 b, s16 c);
typedef Unk_ov003_02211818_Rec Rec;
typedef Unk_ov003_02211818_Pair Pair;

struct Unk_ov003_02211818_T {
    u16 a;
    s16 b, c, d;
};

extern "C" {
extern void *data_020cbb18;

s32 func_0200e248(Obj *o, Msg *m);
void func_02010358(Obj *o, s32 a, u32 b, u32 c);
void func_020103b4(Obj *o, s32 a, u32 b, u32 c);
void func_0205e1a0(void *p, u32 a, u32 b, u32 c);
s32 func_0200f5b0(Obj *o);
s32 func_020729bc(void *g, u32 a);
void func_0200bc78(Obj *o);
s32 func_0200ef08(Obj *o);
void func_0201071c(Obj *o);
void func_02010914(Obj *o);
s32 func_02056654(void *p);
s32 func_020565e8(void *p, u32 a);
void func_0200ecdc(Obj *o, u32 a);
void func_0200e7f4(Obj *o);
void func_020109c4(Obj *o);
void func_0200f4c0(Obj *o, s32 a);
void func_020902f8(s32 a);
void func_020902d4(s32 a, V3 *b, u32 c, u32 d);
s32 func_02090268(s32 a, V3 *b, u32 c, u32 d);
void func_0203ee38(V3 *a, V3 *b);
void func_ov003_02223450(V3 *v, s32 a);
void func_ov003_022261ec(u8 id, s16 *a, Blk *p, s32 f);
void func_ov003_02227074(u8 a, s32 b);
void func_ov003_02227248(u8 a, u8 b);
s32 func_0204f3e4(void *a, s32 b, V3 *c, V3 *d, s32 e, s32 f, s32 g, s32 h, s32 i, s32 j);
void func_0204f3b4(void *a);
void *func_0204f49c();
void func_0200c358(Obj *o, s32 a, s32 b, s32 c);
s32 func_02133150(s32 a, s32 b);
s32 func_02132a4c(s32 a);
float func_02132594(float a, float b);
void func_01ffb898(V3 *a, Blk *b, V3 *c);
s32 func_01ffcb0c(s32 a, s32 b);
void func_020947c0(u16 *p, u32 a);
Obj *func_02095774(u32 a);
void *func_020947f0(u32 a);
u16 func_0207694c(u8 *p);
void func_02076964(u8 *p, s32 a);

void func_ov003_02211878(u8 *p, Pair *o);
void func_ov003_02211884(u8 *p, Pair *s);
void func_ov003_022118d8(u8 *p, Pair *s);
void func_ov003_02211920(Obj *o);
s32 func_ov003_02211978(Obj *o, u32 p, s32 a, s16 b);
void func_ov003_022119b8(u8 *p, u32 v);
void func_ov003_02211a7c(Obj *o);
void func_ov003_02211b8c(Obj *o);
void func_ov003_02212034(Blk *b, V3 *v);
u8 func_ov003_02211f74(u8 *p);
void func_ov003_02211f78(u8 *p, u32 v);
void func_ov003_02211f7c(u8 *p, u16 *out);
void func_ov003_02211f8c(u8 *p, s32 a);
s32 func_ov003_02211f94(Obj *o, u32 a, s32 b, s16 c);
}

static inline s32 Idx(volatile u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    u32 b = *p;
    u32 a = *p;
    if (a >= lo && b <= hi) r = TRUE;
    if (r) return b - lo;
    return -1;
}

// forward declarations (functions are emitted in descending address order)
extern "C" void func_ov003_02211878(u8 *p, Pair *o);
extern "C" void func_ov003_02211818(Obj *o, u8 *m);
extern "C" void func_ov003_02211884(u8 *p, Pair *s);
extern "C" s32 func_ov003_02211890(Obj *o, Pair *p, s32 a, s16 b);
extern "C" void func_ov003_022118d8(u8 *p, Pair *s);
extern "C" void func_ov003_022118e4(Obj *o);
extern "C" void func_ov003_02211920(Obj *o);
extern "C" s32 func_ov003_0221194c(Obj *o, s16 a);
extern "C" void func_ov003_02211960(Obj *o, u8 *m);
extern "C" s32 func_ov003_02211978(Obj *o, u32 p, s32 a, s16 b);
extern "C" void func_ov003_022119b8(u8 *p, u32 v);
extern "C" void func_ov003_022119bc(Obj *o);
extern "C" void func_ov003_02211a7c(Obj *o);
extern "C" void func_ov003_02211b8c(Obj *o);
extern "C" void func_ov003_02211e04(Obj *o);
extern "C" s32 func_ov003_02211e48(Obj *o, s16 a);
extern "C" void func_ov003_02211e74(Obj *o, u8 *m);
extern "C" u8 func_ov003_02211f74(u8 *p);
extern "C" void func_ov003_02211f78(u8 *p, u32 v);
extern "C" void func_ov003_02211f7c(u8 *p, u16 *out);
extern "C" void func_ov003_02211f8c(u8 *p, s32 a);
extern "C" s32 func_ov003_02211f94(Obj *o, u32 a, s32 b, s16 c);
extern "C" BOOL func_ov003_02211fd0();
extern "C" void func_ov003_02212014();
extern "C" void func_ov003_02212034(Blk *b, V3 *v);
extern "C" void *func_ov003_022120ac(u32 a);
extern "C" BOOL func_ov003_022120e4();
extern "C" s32 func_ov003_0221211c(u32 a);
}

namespace ns_02212140 {
// ---------------------------------------------------------------- shared declarations
struct Unk_ov003_02212140_V3 {
    s32 x, y, z;
    Unk_ov003_02212140_V3() {}
};

struct Unk_ov003_02212140_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

struct Unk_ov003_02212140_Pair {
    s32 a, b;
};

struct Unk_ov003_02212140_Obj {
    u8 pad_00[0x5c];
    s32 unk_5c;
    u8 pad_60[4];
    s32 unk_64;
    u8 pad_68[0x2d4 - 0x68];
    Unk_ov003_02212140_Bits unk_2d4;
    u8 pad_2d8[0x700 - 0x2d8];
    s32 unk_700;
    u8 pad_704[0x7d0 - 0x704];
    u8 unk_7d0[0x10];
    u8 pad_7e0[0x7ec - 0x7e0];
    s32 unk_7ec;
    u8 pad_7f0[0x7f8 - 0x7f0];
    s32 unk_7f8;
    u8 pad_7fc[0x81c - 0x7fc];
    u16 unk_81c;
};

struct Unk_ov003_02212140_V3D : Unk_ov003_02212140_V3 {
    Unk_ov003_02212140_V3D() {}
    ~Unk_ov003_02212140_V3D() {}
};

typedef Unk_ov003_02212140_Obj Obj;
typedef Unk_ov003_02212140_V3 V3;
typedef Unk_ov003_02212140_V3D V3D;
typedef Unk_ov003_02212140_Pair Pair;

struct Unk_ov003_02212190_Gs {
    u8 pad_00[0x68];
    s32 unk_68;
};

enum Unk_ov003_0221227c_Limit { UNK_ov003_0221227c_5 = 5 };

extern "C" {
extern Unk_ov003_02212190_Gs *data_020cbb18;

Obj *func_02095774(s32 id);
void func_0203d79c();
s32 func_02007c08(Obj *o, s32 a);
s32 func_0200ce98(Obj *o, s32 a, s32 b, s32 c);
void func_02094574(s32 a, s32 b, s32 c);
s32 func_020729bc(Unk_ov003_02212190_Gs *g, s32 a);
s32 func_ov003_02208b18(Obj *o, s32 a, s32 b);
s32 func_ov003_0220605c(Obj *o, s32 a, s32 b);
s32 func_ov003_02211978(Obj *o, s32 a, s32 b, s32 c);
s32 func_0203d878();
s32 func_0200ec44(Obj *o, s32 a);
s32 func_0200e1ac(Obj *o);
s32 func_ov003_0220dff0(Obj *o, s32 a, s32 b, s32 c);
s32 func_0203d820();
s32 func_ov003_02206a1c(Obj *o, s32 a, s32 b);
s32 func_020e7b98(s32 a, s32 b);
s32 func_02008770(Obj *o, s32 v, s32 a, s32 b);
s32 func_ov003_02207c08(Obj *o, u8 a, s32 b, s32 c);
s32 func_0200ec1c(Obj *o, s32 a);
void func_02034d84(s32 a);
s32 func_ov003_02207d9c(Obj *o, s32 a, s32 b);
s32 func_ov003_02207d08(Obj *o, s32 a, s32 b);
s32 func_ov003_02207efc(Obj *o, V3 v, s32 a, s32 b);
s32 func_ov003_02210d54(Obj *o, s32 a, s32 b);
s32 func_0200f660();
s32 func_ov003_02210628(Obj *o, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g);
s32 func_0200ec30(Obj *o, s32 a);
s32 func_ov003_02211098(Obj *o, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f);
s32 func_ov003_0221129c(Obj *o, s32 a, s32 b, s32 c, s32 d, s32 e);
s32 func_ov003_02205e58(Obj *o, u8 *p, u32 c, s32 id, s32 e);
s32 func_ov003_0220c4ac(Obj *o, s32 a, s32 b, s32 c, s32 d, s32 e);
void func_0204ee10(s32 *a, s32 *b, V3 *c);
s32 func_ov003_022095e8(Obj *o, s32 a, Pair *p, u32 b, s32 c, s32 d);
s32 func_0200f45c(V3 *v, Obj *o);
void func_0204ed8c(V3 *a, u32 b, u32 c);
void func_02095180(s32 a, s32 b);
}

static inline u16 Unk_ov003_022125ac_A(u32 x) {
    if (x < 0x38) {
        return x + 0x12e8;
    }
    return 0x12e8;
}

static inline u16 Unk_ov003_022125ac_B(u32 x) {
    if (x < 0x38) {
        return x + 0x12b0;
    }
    return 0x12b0;
}

static inline BOOL Unk_ov003_022125ac_R(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) {
        r = TRUE;
    }
    return r;
}

extern "C" s32 func_ov003_022127e0(V3 *a, V3 *b);

// forward declarations (functions are emitted in descending address order)
extern "C" s32 func_ov003_02212140();
extern "C" s32 func_ov003_02212190(s32 a, s32 b);
extern "C" s32 func_ov003_0221220c();
extern "C" s32 func_ov003_02212240();
extern "C" s32 func_ov003_0221227c();
extern "C" s32 func_ov003_022122fc(V3 *p);
extern "C" s32 func_ov003_02212338(s32 a);
extern "C" s32 func_ov003_022123a4(s32 a);
extern "C" s32 func_ov003_022123e0(V3 *p);
extern "C" s32 func_ov003_0221240c();
extern "C" s32 func_ov003_02212430(u32 a, s32 *b, s32 *c, s32 d);
extern "C" s32 func_ov003_0221249c(s32 *a, s32 *b, s16 *c);
extern "C" s32 func_ov003_02212504(u8 a, s32 b, s32 c, s32 d);
extern "C" s32 func_ov003_0221255c(V3 *p, u16 *b);
extern "C" u16 func_ov003_022125ac();
extern "C" s32 func_ov003_0221264c();
extern "C" s32 func_ov003_02212680(V3 *a);
extern "C" s32 func_ov003_022126d0(V3 *a, s32 b);
extern "C" s32 func_ov003_02212758(V3 *a, s32 b);
extern "C" s32 func_ov003_022127e0(V3 *a, V3 *b);
extern "C" void func_ov003_02212824(s32 a);
}

namespace ns_02212140 {
extern "C" void func_ov003_02212824(s32 a) {
    func_02095180(9, a);
}
}

namespace ns_02212140 {
extern "C" s32 func_ov003_022127e0(V3 *a, V3 *b) {
    s32 p[2], q[2];
    p[0] = 0;
    p[1] = 0;
    q[0] = 0;
    q[1] = 0;
    func_0204ee10(&p[0], &p[1], b);
    func_0204ee10(&q[0], &q[1], a);
    if (p[0] == q[0] && p[1] == q[1]) {
        return TRUE;
    }
    return FALSE;
}
}

namespace ns_02212140 {
extern "C" s32 func_ov003_02212758(V3 *a, s32 b) {
    Obj *o = func_02095774(b);
    if (o) {
        u32 t = o->unk_2d4.mid;
        s32 r = 0;
        V3D v;
        v.x = r;
        v.y = r;
        v.z = r;
        if (o->unk_7ec == 0x5e) {
            s32 *p = (s32 *)(o->unk_7d0);
            v.x = p[1];
            v.y = p[2];
            v.z = p[3];
            s32 st = o->unk_700;
            if (st == 0x4e) {
                r = 0x16 - t;
            } else if (st == 0x4b) {
                r = 9 - t;
            }
        }
        if (r > 0) {
            V3D w;
            w.x = v.x;
            w.y = v.y;
            w.z = v.z;
            if (func_ov003_022127e0(a, &w)) {
                return r;
            }
        }
    }
    return 0;
}
}

namespace ns_02212140 {
extern "C" s32 func_ov003_022126d0(V3 *a, s32 b) {
    Obj *o = func_02095774(b);
    if (o) {
        u32 t = o->unk_2d4.mid;
        s32 r = 0;
        V3D v;
        v.x = r;
        v.y = r;
        v.z = r;
        s32 st = o->unk_7ec;
        if (st == 0x49) {
            u8 *q = o->unk_7d0;
            func_0204ed8c(&v, q[0], q[1]);
            r = 8 - t;
        } else if (st == 0x5d) {
            u8 *q = o->unk_7d0;
            func_0204ed8c(&v, q[0], q[1]);
            r = 5 - t;
        }
        if (r > 0) {
            V3D w;
            w.x = v.x;
            w.y = v.y;
            w.z = v.z;
            if (func_ov003_022127e0(a, &w)) {
                return r;
            }
        }
    }
    return 0;
}
}

namespace ns_02212140 {
extern "C" s32 func_ov003_02212680(V3 *a) {
    Obj *o = func_02095774(4);
    if (o) {
        u32 t = o->unk_2d4.mid;
        s32 st = o->unk_700;
        if ((st == 0x67 && t == 5) || (st == 0x44 && t == 8)) {
            V3D v;
            func_0200f45c(&v, o);
            return func_ov003_022127e0(a, &v);
        }
    }
    return 0;
}
}

namespace ns_02212140 {
extern "C" s32 func_ov003_0221264c() {
    Obj *o = func_02095774(4);
    if (o) {
        if (o->unk_7ec == 6) {
            if (o->unk_7d0[0xd] == 1) {
                return TRUE;
            }
        }
    }
    return FALSE;
}
}

namespace ns_02212140 {
extern "C" u16 func_ov003_022125ac() {
    Obj *o = func_02095774(4);
    u16 r = 0xfff1;
    if (o) {
        switch (o->unk_7ec) {
        case 0x57: {
            u8 *q = o->unk_7d0;
            if (q[6] == 0) {
                r = Unk_ov003_022125ac_B(q[8]);
            }
            break;
        }
        case 0x54: {
            u8 *q = o->unk_7d0;
            if (q[4] == 0) {
                u32 x = q[3];
                if (x < 0x38) {
                    r = Unk_ov003_022125ac_A(x);
                }
            }
            break;
        }
        case 0x5f:
            if (Unk_ov003_022125ac_R(&o->unk_81c, 0x1549, 0x1549)) {
                r = o->unk_81c;
            }
            break;
        }
    }
    return r;
}
}

namespace ns_02212140 {
extern "C" s32 func_ov003_0221255c(V3 *p, u16 *b) {
    Obj *o = func_02095774(4);
    if (o) {
        s32 x = 0;
        s32 y = 0;
        func_0204ee10(&x, &y, p);
        Pair pr;
        u32 t = *b;
        pr.a = x;
        pr.b = y;
        return func_ov003_022095e8(o, 1, &pr, t, 6, -1);
    }
    return 0;
}
}

namespace ns_02212140 {
extern "C" s32 func_ov003_02212504(u8 a, s32 b, s32 c, s32 d) {
    Obj *o = func_02095774(4);
    if (o) {
        if (a) {
            return func_ov003_02205e58(o, &a, o->unk_7ec == 5 ? 1 : 0, 6, -1);
        }
        return func_ov003_0220c4ac(o, 1, 0, 0, 6, -1);
    }
    return 0;
}
}

namespace ns_02212140 {
extern "C" s32 func_ov003_0221249c(s32 *a, s32 *b, s16 *c) {
    Obj *o = func_02095774(4);
    if (o) {
        if (func_0200f660()) {
            return func_ov003_02210628(o, 0x38, 0, *a, *b, *c, 6, -1);
        }
        func_0200ec30(o, 1);
        return func_ov003_0221129c(o, *a, *b, *c, 6, -1);
    }
    return 0;
}
}

namespace ns_02212140 {
extern "C" s32 func_ov003_02212430(u32 a, s32 *b, s32 *c, s32 d) {
    Obj *o = func_02095774(4);
    if (o) {
        if (func_0200f660()) {
            return func_ov003_02210628(o, 0x39, ((u32)a << 26) >> 24, *b, *c, d, 6, -1);
        }
        func_0200ec30(o, 1);
        return func_ov003_02211098(o, a, *b, *c, d, 6, -1);
    }
    return 0;
}
}

namespace ns_02212140 {
extern "C" s32 func_ov003_0221240c() {
    Obj *o = func_02095774(4);
    if (o) {
        return func_ov003_02210d54(o, 6, -1);
    }
    return 0;
}
}

namespace ns_02212140 {
extern "C" s32 func_ov003_022123e0(V3 *p) {
    Obj *o = func_02095774(4);
    if (o) {
        return func_ov003_02207efc(o, *p, 6, -1);
    }
    return 0;
}
}

namespace ns_02212140 {
extern "C" s32 func_ov003_022123a4(s32 a) {
    Obj *o = func_02095774(4);
    if (o) {
        switch (a) {
        case 1:
            return func_ov003_02207d9c(o, 6, -1);
        case 2:
            return func_ov003_02207d08(o, 6, -1);
        default:
            return 0;
        }
    }
    return 0;
}
}

namespace ns_02212140 {
extern "C" s32 func_ov003_02212338(s32 a) {
    Obj *o = func_02095774(4);
    if (o) {
        Unk_ov003_0221227c_Limit k = UNK_ov003_0221227c_5;
        if (k <= func_0200e1ac(o)) {
            return 0;
        }
        if (o->unk_7ec == 0x78) {
            return 0;
        }
        if (func_ov003_02207c08(o, a + 2, 7, -1)) {
            if (func_0200ec44(o, 0x1a)) {
                func_0200ec1c(o, 0x1a);
                func_02034d84(0x3f);
            }
            return 1;
        }
    }
    return 0;
}
}

namespace ns_02212140 {
extern "C" s32 func_ov003_022122fc(V3 *p) {
    Obj *o = func_02095774(4);
    if (o) {
        return func_02008770(o, func_020e7b98(p->x - o->unk_5c, p->z - o->unk_64), 6, -1);
    }
    return 0;
}
}

namespace ns_02212140 {
extern "C" s32 func_ov003_0221227c() {
    if (func_0203d878()) {
        return 0;
    }
    Obj *o = func_02095774(4);
    if (o) {
        if (func_0200ec44(o, 0xb)) {
            return 0;
        }
        Unk_ov003_0221227c_Limit k = UNK_ov003_0221227c_5;
        if (k <= func_0200e1ac(o)) {
            s32 st = o->unk_7ec;
            if (st != 0x4f) {
                return 0;
            }
            if (st == 0x4f) {
                func_ov003_0220dff0(o, 0, 6, -1);
                return 0;
            }
        }
        if (!func_0203d820()) {
            return 0;
        }
        return func_ov003_02206a1c(o, 5, -1);
    }
    return 0;
}
}

namespace ns_02212140 {
extern "C" s32 func_ov003_02212240() {
    Obj *o = func_02095774(4);
    if (o) {
        o->unk_7f8 = func_02007c08(o, o->unk_7ec);
        return func_ov003_02211978(o, 3, 5, -1);
    }
    return 0;
}
}

namespace ns_02212140 {
extern "C" s32 func_ov003_0221220c() {
    Obj *o = func_02095774(4);
    if (o) {
        if (o->unk_7ec == 0x89) {
            return 0;
        }
        return func_ov003_0220605c(o, 6, -1);
    }
    return 0;
}
}

namespace ns_02212140 {
extern "C" s32 func_ov003_02212190(s32 a, s32 b) {
    Obj *o = func_02095774(b);
    if (b == 4) {
        b = data_020cbb18->unk_68;
    }
    if (o) {
        if (func_020729bc(data_020cbb18, b)) {
            o->unk_7f8 = func_02007c08(o, o->unk_7ec);
            switch (a) {
            case 0:
                func_0203d79c();
                func_0200ce98(o, 3, 1, -1);
                break;
            case 1:
                func_ov003_02208b18(o, 6, -1);
                break;
            }
        }
        return TRUE;
    }
    return FALSE;
}
}

namespace ns_02212140 {
// ---------------------------------------------------------------- free functions on the big player object
extern "C" s32 func_ov003_02212140() {
    Obj *o = func_02095774(4);
    if (o) {
        func_0203d79c();
        if (o->unk_7ec != 0x77) {
            o->unk_7f8 = func_02007c08(o, o->unk_7ec);
            func_0200ce98(o, 3, 1, -1);
        }
        func_02094574(0, 0, 4);
        return TRUE;
    }
    return FALSE;
}
}

namespace ns_02211818 {
extern "C" s32 func_ov003_0221211c(u32 a) {
    Obj *p = func_02095774(4);
    if (p) {
        return func_ov003_02211f94(p, a, 5, -1);
    }
    return 0;
}
}

namespace ns_02211818 {
extern "C" BOOL func_ov003_022120e4() {
    Obj *p = func_02095774(4);
    if (p) {
        if (p->unk_7ec == 6) {
            Rec *r = &p->unk_7d0;
            if (r->unk_0d == 1) {
                r->unk_0d = 2;
                return TRUE;
            }
        }
    }
    return FALSE;
}
}

namespace ns_02211818 {
extern "C" void *func_ov003_022120ac(u32 a) {
    Obj *p = func_02095774(a);
    if (p != 0 && func_0200f5b0(p) == 3) {
        s32 *q = (s32 *)((u8 *)p + 0x5c4);
        if (q[1] > 1) return q + 2;
    }
    return func_020947f0(a);
}
}

namespace ns_02211818 {
extern "C" void func_ov003_02212034(Blk *b, V3 *v) {
    s32 r7 = b->v[9];
    s32 s0 = b->v[10];
    s32 s4 = b->v[11];
    Blk c;
    V3 vv;
    V3 out;
    b->v[9] = b->v[10] = b->v[11] = 0;
    c = *b;
    if (v == 0) {
        vv.x = 0x4cd;
        vv.y = 0;
        vv.z = 0;
    } else {
        vv.x = v->x;
        vv.y = v->y;
        vv.z = v->z;
    }
    func_01ffb898(&vv, &c, &out);
    b->v[9] = out.x + r7;
    b->v[10] = out.y + s0;
    b->v[11] = out.z + s4;
}
}

namespace ns_02211818 {
extern "C" void func_ov003_02212014() {
    Obj *o = func_02095774(4);
    if (o) {
        func_02010358(o, 0x99, 3, 0);
    }
}
}

namespace ns_02211818 {
extern "C" BOOL func_ov003_02211fd0() {
    u16 t;
    func_020947c0(&t, 4);
    BOOL f = FALSE;
    volatile u16 *p = &t;
    u32 b = *p;
    u32 a = *p;
    if (a >= 0x1376 && b <= 0x1376) f = TRUE;
    if (f || (b >= 0x1377 && b <= 0x1377)) return TRUE;
    return FALSE;
}
}

namespace ns_02211818 {
extern "C" s32 func_ov003_02211f94(Obj *o, u32 a, s32 b, s16 c) {
    Msg m;
    _ZN12Unk_0200e2c013func_0200e2c0Eiis(&m, 6, b, c);
    *(u16 *)((u8 *)&m + 0xc) = a;
    s32 r = func_0200e248(o, &m);
    return r;
}
}

namespace ns_02211818 {
extern "C" void func_ov003_02211f8c(u8 *p, s32 a) {
    func_02076964(p, a);
}
}

namespace ns_02211818 {
extern "C" void func_ov003_02211f7c(u8 *p, u16 *out) {
    *out = func_0207694c(p);
}
}

namespace ns_02211818 {
extern "C" void func_ov003_02211f78(u8 *p, u32 v) {
    p[2] = v;
}
}

namespace ns_02211818 {
extern "C" u8 func_ov003_02211f74(u8 *p) {
    return p[2];
}
}

namespace ns_02211818 {
extern "C" void func_ov003_02211e74(Obj *o, u8 *m) {
    Rec *r4 = &o->unk_7d0;
    volatile u16 t;
    u16 r7 = *(u16 *)(m + 0xc);
    u32 id;
    u8 *r6;
    t = r7;
    r4->unk_00 = r7;
    r4->unk_04 = -1;
    r4->unk_08 = 0;
    {
        BOOL z = FALSE;
        volatile u16 *pt = &t;
        u32 b = *pt;
        u32 a = *pt;
        if (a >= 0x12e8 && b <= 0x131f) z = TRUE;
        r4->unk_0c = z;
    }
    r4->unk_0d = 0;
    if (r4->unk_0c == 0) {
        s32 i = Idx(&t, 0x12b0, 0x12e7);
        func_ov003_02227248(i, o->unk_7fc);
        id = 0x9f;
    } else {
        r4->unk_08 = func_0204f49c();
        id = 0x9e;
    }
    func_02010358(o, id, 3, 3);
    func_0200ecdc(o, 0x4f);
    r6 = o->unk_8ec;
    if (func_020729bc(data_020cbb18, o->unk_7fc)) {
        func_ov003_02211f8c(r6, r7);
        func_ov003_02211f78(r6, 0);
    } else if (func_ov003_02211f74(r6) >= 1) {
        r4->unk_0d = 1;
        *(u32 *)&o->unk_2d4 = ((u32)(o->unk_2d0.mid - 1) << 16) >> 4;
    }
}
}

namespace ns_02211818 {
extern "C" s32 func_ov003_02211e48(Obj *o, s16 a) {
    u16 t;
    func_ov003_02211f7c(o->unk_8ec, &t);
    return func_ov003_02211f94(o, t, 5, a);
}
}

namespace ns_02211818 {
extern "C" void func_ov003_02211e04(Obj *o) {
    Rec *r4 = &o->unk_7d0;
    if (r4->unk_04 > -1) {
        func_020902f8(r4->unk_04);
    }
    if (r4->unk_0c == 0) {
        func_ov003_02227074(o->unk_7fc, 1);
    } else {
        func_0204f3b4(r4->unk_08);
    }
}
}

namespace ns_02211818 {
extern "C" void func_ov003_02211b8c(Obj *o) {
    Rec *r6 = &o->unk_7d0;
    Unk_ov003_02211818_T t;
    Blk b;
    V3 v50;
    V3 v5c;
    V3 v68;
    s32 *r7;
    s16 sc;
    s32 m;
    t.a = r6->unk_00;
    r7 = &r6->unk_04;
    func_0200f4c0(o, 0x400);
    b = o->unk_694;
    v50.x = 0x4cd;
    v50.y = 0;
    v50.z = 0;
    m = o->unk_2d4.mid;
    if (o->unk_700 != 0xa0 && (s32)m >= 0x10) {
        s32 q = (m - 15) * 0x19a / 12;
        v50.x = v50.x + q * 2;
        v50.y = v50.y + q;
        v50.z = v50.z - q;
    }
    func_ov003_02212034(&b, &v50);
    if (*r7 > -1) {
        v5c.x = b.v[9];
        v5c.y = b.v[10];
        v5c.z = b.v[11];
        func_0203ee38(&v5c, &v5c);
        func_020902d4(*r7, &v5c, 0, 0);
    } else if (*r7 == -1) {
        *r7 = -2;
        if (r6->unk_0c == 0) {
            s32 i = Idx(&t.a, 0x12b0, 0x12e7);
            if (i == 0x18 || i == 0x30 || (u32)(i - 0x32) <= 1) {
                v5c.x = b.v[9];
                v5c.y = b.v[10];
                v5c.z = b.v[11];
                func_0203ee38(&v5c, &v5c);
                *r7 = func_02090268(0x5a, &v5c, 0, 0);
            }
        }
    }
    if (o->unk_700 != 0xa0) {
        if (m <= 10) {
            sc = 0;
        } else if (m < 0x10) {
            sc = (s16)((m - 10) * 0x11);
        } else {
            sc = 0x64;
        }
    } else {
        if (m < 6) {
            sc = (s16)(0x64 - m * 0x11);
        } else {
            sc = 0;
        }
    }
    if (r6->unk_0c == 0) {
        t.b = sc;
        t.c = sc;
        t.d = sc;
        func_ov003_022261ec(o->unk_7fc, &t.b, &b, 0);
    } else {
        float f = (float)sc / 100.0f;
        float g;
        if (f > 0) {
            g = 0.5f + 4096.0f * f;
        } else {
            g = 4096.0f * f - 0.5f;
        }
        s32 k = (s32)g;
        s32 i = Idx(&t.a, 0x12e8, 0x131f);
        func_ov003_02223450(&v68, i);
        v68.x = func_01ffcb0c(v68.x, k);
        v68.y = func_01ffcb0c(v68.y, k);
        v68.z = func_01ffcb0c(v68.z, k);
        v5c.x = b.v[9];
        v5c.y = b.v[10];
        v5c.z = b.v[11];
        func_0203ee38(&v5c, &v5c);
        i = Idx(&t.a, 0x12e8, 0x131f);
        func_0204f3e4(r6->unk_08, i, &v5c, &v68, 0, 0, 0, 1, 1, 0x1f);
    }
}
}

namespace ns_02211818 {
extern "C" void func_ov003_02211a7c(Obj *o) {
    Rec *r0 = &o->unk_7d0;
    u8 *r6 = o->unk_8ec;
    u8 *r5 = &r0->unk_0d;
    switch (*r5) {
    case 0:
        if (func_020565e8(o->unk_2cc, 10)) {
            func_0200ecdc(o, 0x63);
        } else if (func_020565e8(o->unk_2cc, 0x19)) {
            func_0200ecdc(o, 0x7f2);
        }
        if (func_02056654(o->unk_2cc)) {
            *r5 = 1;
            func_ov003_02211f78(r6, 1);
        }
        break;
    case 1:
        if (func_020729bc(data_020cbb18, o->unk_7fc) == 0) {
            if (func_ov003_02211f74(r6) >= 2) {
                *r5 = 2;
            }
        }
        break;
    case 2:
        if (r0->unk_04 > -1) {
            func_020902f8(r0->unk_04);
        }
        if (func_020729bc(data_020cbb18, o->unk_7fc)) {
            func_ov003_02211f78(r6, 2);
        }
        func_02010358(o, 0xa0, 3, 0);
        func_0200ecdc(o, 0x7f1);
        *r5 = 3;
        break;
    case 3:
        if (func_02056654(o->unk_2cc)) {
            func_0200c358(o, 3, 5, -1);
        }
        break;
    }
}
}

namespace ns_02211818 {
extern "C" void func_ov003_022119bc(Obj *o) {
    func_02010914(o);
    volatile V3 v;
    V3 *pv = &o->unk_c4;
    v.x = o->unk_c4.x;
    v.y = pv->y;
    v.z = pv->z;
    s32 d0 = o->unk_d0;
    Blk b1 = o->unk_294;
    Blk b2 = o->unk_694;
    func_0200e7f4(o);
    func_ov003_02211b8c(o);
    o->unk_c4.x = v.x;
    o->unk_c4.y = v.y;
    o->unk_c4.z = v.z;
    o->unk_d0 = d0;
    o->unk_294 = b1;
    o->unk_694 = b2;
    if (func_0200ef08(o)) {
        func_020109c4(o);
    }
    func_0201071c(o);
    func_ov003_02211a7c(o);
}
}

namespace ns_02211818 {
extern "C" void func_ov003_022119b8(u8 *p, u32 v) {
    *(u16 *)p = v;
}
}

namespace ns_02211818 {
extern "C" s32 func_ov003_02211978(Obj *o, u32 p, s32 a, s16 b) {
    Msg m;
    _ZN12Unk_0200e2c013func_0200e2c0Eiis(&m, 0x11, a, b);
    func_ov003_022119b8(m.v_02211818.unk_0c, p);
    s32 r = func_0200e248(o, &m);
    return r;
}
}

namespace ns_02211818 {
extern "C" void func_ov003_02211960(Obj *o, u8 *m) {
    func_02010358(o, 0x9a, *(u16 *)(m + 0xc), 0);
}
}

namespace ns_02211818 {
extern "C" s32 func_ov003_0221194c(Obj *o, s16 a) {
    return func_ov003_02211978(o, 3, 5, a);
}
}

namespace ns_02211818 {
extern "C" void func_ov003_02211920(Obj *o) {
    func_02010914(o);
    if (func_02056654(o->unk_2cc)) {
        func_020103b4(o, 0, 3, 0);
    }
}
}

namespace ns_02211818 {
extern "C" void func_ov003_022118e4(Obj *o) {
    func_ov003_02211920(o);
    if (func_020729bc(data_020cbb18, o->unk_7fc)) {
        func_0200bc78(o);
    } else {
        func_0200ef08(o);
    }
    func_0201071c(o);
}
}

namespace ns_02211818 {
extern "C" void func_ov003_022118d8(u8 *p, Pair *s) {
    p[0] = s->a;
    p[1] = s->b;
}
}

namespace ns_02211818 {
extern "C" s32 func_ov003_02211890(Obj *o, Pair *p, s32 a, s16 b) {
    Pair t;
    Msg m;
    _ZN12Unk_0200e2c013func_0200e2c0Eiis(&m, 0x16, a, b);
    t.a = p->a;
    t.b = p->b;
    func_ov003_022118d8(m.v_02211818.unk_0c, &t);
    s32 r = func_0200e248(o, &m);
    return r;
}
}

namespace ns_02211818 {
extern "C" void func_ov003_02211884(u8 *p, Pair *s) {
    p[0] = s->a;
    p[1] = s->b;
}
}

namespace ns_02211818 {
extern "C" void func_ov003_02211878(u8 *p, Pair *o) {
    o->a = p[0];
    o->b = p[1];
}
}

namespace ns_02211818 {
extern "C" void func_ov003_02211818(Obj *o, u8 *m) {
    Pair s;
    u8 *q = m + 0xc;
    u32 a = q[0];
    u32 b = q[1];
    u8 *r = (u8 *)&o->unk_7d0;
    r[0] = a;
    r[1] = b;
    r[2] = 0;
    s.a = a;
    s.b = b;
    func_ov003_02211884(o->unk_8ec, &s);
    func_020103b4(o, 0x15, 3, 0);
    if (func_0200f5b0(o) == 4) {
        func_0205e1a0(o->unk_59c, 0xb, 3, 0);
    }
}
}

namespace ns_02210ef0 {
extern "C" void func_ov003_022117c8(Obj *o, s32 x) {
    if (o->unk_7ec == 0x16) {
        o->unk_c80 = x;
    } else {
        Pair p(0, 0);
        func_ov003_02211878(o->unk_8ec, &p);
        Pair q = p;
        func_ov003_02211890(o, &q, 6, x);
    }
}
}

namespace ns_02210ef0 {
extern "C" void func_ov003_02211798(Obj *o) {
    u8 *r = (u8 *)&o->unk_7d0;
    if (r[2] == 0) {
        s32 t = o->unk_814;
        if (t == 2) {
            r[2] = 2;
        } else if (t == 1) {
            r[2] = 1;
        }
    }
    func_02010914(o);
}
}

namespace ns_02210ef0 {
extern "C" void func_ov003_02211710(Obj *o) {
    if (func_020729bc(data_020cbb18, o->unk_7fc) == 0) {
        o->unk_7f8 = func_02007c08(o, o->unk_7ec);
    }
    u8 *r = (u8 *)&o->unk_7d0;
    switch (r[2]) {
    case 0:
        break;
    case 1: {
        s32 y = r[1];
        s32 x = r[0];
        Pair q(x, y);
        func_ov003_02211674(o, (s32 *)&q, 6, -1);
        break;
    }
    case 2:
        o->unk_7f8 = func_02007c08(o, o->unk_7ec);
        func_0200ce98(o, 3, 1, -1);
        break;
    }
}
}

namespace ns_02210ef0 {
extern "C" void func_ov003_022116b8(Obj *o) {
    if (func_020729bc(data_020cbb18, o->unk_7fc)) {
        func_ov003_02211798(o);
    } else {
        func_02010914(o);
        u8 *r = (u8 *)&o->unk_7d0;
        s32 y = r[1];
        s32 x = r[0];
        Pair q(x, y);
        func_0200eee4(o, &q);
    }
    func_0201071c(o);
    func_ov003_02211710(o);
}
}

namespace ns_02210ef0 {
extern "C" s32 func_ov003_02211674(Obj *o, s32 *p, s32 a, s32 b) {
    Msg m;
    Unk_ov003_02210ef0_Rec2 &q = *(Unk_ov003_02210ef0_Rec2 *)&m.v_02210ef0.unk_0c;
    _ZN12Unk_0200e2c013func_0200e2c0Eiis(&m, 0x17, a, b);
    q.a = p[0];
    q.b = p[1];
    s32 r = func_0200e248(o, &m);
    return r;
}
}

namespace ns_02210ef0 {
extern "C" void func_ov003_022115f4(Obj *o, Msg *m) {
    u8 *p = (u8 *)m + 0xc;
    V3 v;
    func_0204ed8c(&v, p[0], p[1]);
    V3 *pv = (V3 *)&o->unk_7d0;
    *pv = v;
    ((u8 *)pv)[12] = 0;
    func_02010358(o, 0x14, 3, 0);
    if (func_0200f5b0(o) == 4) {
        func_0205e1a0(o->unk_59c, 0xe, 3, 0);
    }
    u16 *g = func_0204eba0(data_021c47c4, &v, 0);
    o->unk_81e = *g;
    o->unk_81c = o->unk_81e;
}
}

namespace ns_02210ef0 {
extern "C" void func_ov003_022115f0() {
}
}

namespace ns_02210ef0 {
extern "C" void func_ov003_022115bc(Obj *o) {
    if (func_020729bc(data_020cbb18, o->unk_7fc) == 0) {
        if (func_0200ec44(o, 0x1c)) {
            func_ov003_022113a4(o);
        }
    }
}
}

namespace ns_02210ef0 {
extern "C" void func_ov003_02211594(Obj *o) {
    func_02010914(o);
    if (func_020565e8(o->unk_2cc, 0xa)) {
        func_ov003_022113a4(o);
    }
}
}

namespace ns_02210ef0 {
extern "C" s32 func_ov003_022113a4(Obj *o) {
    s16 ang;
    u16 t2;
    Pair ab;
    V3 *pv = (V3 *)&o->unk_7d0;
    V3 v = *pv;
    ab.a = 0;
    ab.b = 0;
    func_0204ee10(&ab.a, &ab.b, &v);
    ang = o->unk_8e;
    switch (o->unk_81c) {
    case 0x1f:
        func_02090330(0x2e, &v, &ang, 0);
        break;
    case 0x20:
        func_02090330(0x2f, &v, &ang, 0);
        break;
    case 0x21: {
        V3 t(0, 0, -0x800);
        func_01ffca8c(&v, &t, &v);
        func_02090330(0x2d, &v, &ang, 0);
        break;
    }
    case 0x22: {
        V3 t(-0x800, 0, 0);
        func_01ffca8c(&v, &t, &v);
        func_02090330(0x2d, &v, &ang, 0);
        break;
    }
    case 0x23: {
        V3 t(0x800, 0, 0xc00);
        func_01ffca8c(&v, &t, &v);
        func_02090330(0x2d, &v, &ang, 0);
        break;
    }
    case 0x24: {
        V3 t(-0x800, 0, 0);
        func_01ffca8c(&v, &t, &v);
        func_02090330(0x2d, &v, &ang, 0);
        break;
    }
    default: {
        u32 w = o->unk_81c;
        if ((w >= 0x6e && w <= 0x73) || (w >= 0x74 && w <= 0x79) || (w >= 0x7a && w <= 0x7f) ||
            (w >= 0x80 && w <= 0x87) || w == 0x88 || w == 0x89 || (w >= 0x8a && w <= 0x8f) ||
            (w >= 0x90 && w <= 0x95) || (w >= 0x96 && w <= 0x9b) || (w >= 0x9c && w <= 0xa3)) {
            goto hit;
        }
        if (w != 0xa5 && w != 0xa4) {
            break;
        }
    hit:
        func_0209028c(0x54, &v, 0, 0);
        t2 = o->unk_81c;
        Pair c(ab.a, ab.b);
        func_0204407c(&t2, &c, o->unk_8e, 2);
        func_0200ecdc(o, 0x7d8);
        break;
    }
    }
    switch (o->unk_81c) {
    case 0x1f:
    case 0x20:
        func_0200ecdc(o, 0x7d8);
        break;
    case 0x21:
    case 0x22:
    case 0x23:
    case 0x24:
        func_0200ecdc(o, 0x7ec);
        break;
    }
    Pair d(ab.a, ab.b);
    func_02045570(&d, 0);
    func_0200ec1c(o, 0x1c);
}
}

namespace ns_02210ef0 {
extern "C" void func_ov003_0221132c(Obj *o) {
    if (func_02056654(o->unk_2cc)) {
        o->unk_7f8 = func_02007c08(o, o->unk_7ec);
        func_0200ce98(o, 3, 1, -1);
    }
    if (o->unk_2d4.mid >= 0xe) {
        if (func_020729bc(data_020cbb18, o->unk_7fc)) {
            func_ov003_02205c28(o);
        } else {
            func_0200ec1c(o, 0x12);
        }
    }
}
}

namespace ns_02210ef0 {
extern "C" void func_ov003_022112ec(Obj *o) {
    func_ov003_02211594(o);
    V3 *pv = (V3 *)&o->unk_7d0;
    V3 v = *pv;
    func_0200ede8(o, &v);
    func_0201071c(o);
    func_0201065c(o);
    func_ov003_0221132c(o);
}
}

namespace ns_02210ef0 {
extern "C" void func_ov003_022112e4(Rec *p, s32 a, s32 b, s16 c) {
    p->a = a;
    p->b = b;
    p->c = c;
}
}

namespace ns_02210ef0 {
extern "C" s32 func_ov003_0221129c(Obj *o, s32 a, s32 b, s16 c, s32 d, s32 e) {
    Msg m;
    _ZN12Unk_0200e2c013func_0200e2c0Eiis(&m, 0x38, d, *(s16 *)&e);
    func_ov003_022112e4(&m.v_02210ef0.unk_0c, a, b, c);
    s32 r = func_0200e248(o, &m);
    return r;
}
}

namespace ns_02210ef0 {
extern "C" void func_ov003_02211294(Rec *p, s32 a, s32 b, s16 c) {
    p->a = a;
    p->b = b;
    p->c = c;
}
}

namespace ns_02210ef0 {
extern "C" void func_ov003_02211278(u8 *p, s32 a, s32 b, s16 c) {
    func_02076a6c(p, a, b);
    func_020769c4(p + 5, c);
}
}

namespace ns_02210ef0 {
extern "C" void func_ov003_0221125c(u8 *p, s32 *a, s32 *b, s16 *c) {
    func_02076a2c(p, a, b);
    *c = func_020769ac(p + 5);
}
}

namespace ns_02210ef0 {
extern "C" void func_ov003_02211210(Obj *o, Msg *m) {
    u8 *p = (u8 *)m + 0xc;
    func_02010358(o, 0x37, 3, 0);
    s32 a = *(s32 *)p;
    s32 b = *(s32 *)(p + 4);
    s16 c = *(s16 *)(p + 8);
    func_ov003_02211294(&o->unk_7d0, a, b, c);
    func_ov003_02211278(o->unk_8ec, a, b, c);
}
}

namespace ns_02210ef0 {
extern "C" void func_ov003_022111bc(Obj *o, s32 x) {
    s16 ang;
    V3 pos;
    func_ov003_0221125c(o->unk_8ec, &pos.x, &pos.z, &ang);
    pos.y = o->unk_5c.y;
    V3 *pv = &o->unk_5c;
    *pv = pos;
    o->unk_8e = ang;
    func_ov003_0221129c(o, pos.x, pos.z, ang, 6, x);
}
}

namespace ns_02210ef0 {
extern "C" void func_ov003_022111a0(Obj *o) {
    Rec *r = &o->unk_7d0;
    func_0200f594(o, r->a, r->b, r->c);
}
}

namespace ns_02210ef0 {
extern "C" void func_ov003_02211164(Obj *o) {
    func_02010914(o);
    if (func_020565e8(o->unk_2cc, 8) || func_020565e8(o->unk_2cc, 0xd)) {
        func_0200ecdc(o, 0x7d5);
    }
}
}

namespace ns_02210ef0 {
extern "C" void func_ov003_02211120(Obj *o) {
    if (func_02056654(o->unk_2cc)) {
        Rec *r = &o->unk_7d0;
        func_ov003_02211098(o, 1, r->a, r->b, r->c, 6, -1);
    }
}
}

namespace ns_02210ef0 {
extern "C" void func_ov003_02211100(Obj *o) {
    func_ov003_022111a0(o);
    func_ov003_02211164(o);
    func_0201071c(o);
    func_ov003_02211120(o);
}
}

namespace ns_02210ef0 {
extern "C" void func_ov003_022110e8(Rec *p, u32 a, s32 b, s32 c, s16 d) {
    p->d = a;
    p->a = b;
    p->b = c;
    p->c = d;
}
}

namespace ns_02210ef0 {
extern "C" s32 func_ov003_02211098(Obj *o, u8 a, s32 b, s32 c, s16 d, s32 e, s32 f) {
    Msg m;
    _ZN12Unk_0200e2c013func_0200e2c0Eiis(&m, 0x39, e, *(s16 *)&f);
    func_ov003_022110e8(&m.v_02210ef0.unk_0c, a, b, c, d);
    s32 r = func_0200e248(o, &m);
    return r;
}
}

namespace ns_02210ef0 {
extern "C" void func_ov003_0221107c(Rec *p, u32 a, s32 b, s32 c, s16 d, u8 e) {
    p->d = a;
    p->a = b;
    p->b = c;
    p->c = d;
    p->e = e;
}
}

namespace ns_02210ef0 {
extern "C" void func_ov003_02211054(u8 *p, u32 a, s32 b, s32 c, s16 e) {
    p[7] = a;
    func_02076a6c(p, b, c);
    func_020769c4(p + 5, e);
}
}

namespace ns_02210ef0 {
extern "C" void func_ov003_02211030(u8 *p, u8 *a, s32 *b, s32 *c, u16 *e) {
    *a = p[7];
    func_02076a2c(p, b, c);
    *e = func_020769ac(p + 5);
}
}

namespace ns_02210ef0 {
extern "C" void func_ov003_02210f7c(Obj *o, Msg *m) {
    func_0200ec30(o, 4);
    u8 *p = (u8 *)m + 0xc;
    Rec *r = &o->unk_7d0;
    s32 z = 0;
    s32 k = z;
    switch (p[0xa]) {
    case 0:
        func_02010358(o, 0x33, 3, 0);
        break;
    case 1:
        func_02010358(o, 0x32, 3, 0);
        break;
    case 2:
        k = 0xc;
        func_020103b4(o, z, 3);
        break;
    }
    u32 id = p[0xa];
    Pair t = *(Pair *)p;
    s16 ang = *(s16 *)(p + 8);
    Unk_ov003_02210f7c_Ns::func_ov003_0221107c(r, id, t.a, t.b, ang, k);
    func_ov003_02211054(o->unk_8ec, id, t.a, t.b, ang);
    s32 b = func_020729bc(data_020cbb18, o->unk_7fc) ? 1 : 0;
    func_ov003_02218d50(&o->unk_5c, b);
}
}

namespace ns_02210ef0 {
extern "C" void func_ov003_02210ef0(Obj *o, s32 x) {
    if ((u32)(o->unk_7ec - 0x38) <= 2) {
        o->unk_c80 = x;
    } else {
        u8 a;
        u8 f;
        s16 ang;
        s32 o1, o2;
        V3 pos;
        func_ov003_02211030(o->unk_8ec, &a, &pos.x, &pos.z, (u16 *)&ang);
        pos.y = o->unk_5c.y;
        if (func_02095670(&f, &o1, &o2, -1, o->unk_7fc)) {
            o->unk_5c.x = o1;
            o->unk_5c.z = o2;
        }
        o->unk_8e = ang;
        func_ov003_02211098(o, a, pos.x, pos.z, ang, 6, x);
    }
}
}

namespace ns_022105bc {
extern "C" s32 func_ov003_02210eb4(Obj *o) {
    Rec3 *r = (Rec3 *)&o->unk_7d0;
    u8 *p = &r->cnt;
    if (r->cnt) {
        *p = r->cnt - 1;
        if (*p == 0) {
            func_02010358(o, 0x33, 3, 0);
        }
    } else {
        func_0200f594(o, r->a, r->b, r->c);
    }
}
}

namespace ns_022105bc {
extern "C" void func_ov003_02210e40(Obj *o) {
    func_02010914(o);
    if (o->unk_700 == 0x32) {
        s32 m = o->unk_2d4.mid;
        if (m > 0x16) goto r_hi;
        if (m >= 0x16) goto hit;
        if (m > 0xc) goto done;
        if (m < 8) goto done;
        switch (m) {
        case 8: goto hit;
        case 0xc: goto hit;
        }
        goto done;
    r_hi:
        if (m > 0x1b) goto r34;
        switch (m) {
        case 0x1b: goto hit;
        }
        goto done;
    r34:
        if (m != 0x22) goto done;
    hit:
        func_0200f258(o);
    done:;
    } else if (o->unk_700 == 0x33) {
        switch ((s32)o->unk_2d4.mid) {
        case 9:
        case 0x11:
        case 0x1a:
            func_0200f258(o);
            break;
        }
    }
}
}

namespace ns_022105bc {
extern "C" s32 func_ov003_02210e18(Obj *o) {
    if (func_02056654(o->unk_2cc)) {
        func_ov003_02210dc0(o, 6, -1);
    }
}
}

namespace ns_022105bc {
extern "C" s32 func_ov003_02210df8(Obj *o) {
    func_ov003_02210eb4(o);
    func_ov003_02210e40(o);
    func_0201071c(o);
    func_ov003_02210e18(o);
}
}

namespace ns_022105bc {
extern "C" s32 func_ov003_02210dc0(Obj *o, s32 a, s32 b) {
    Msg m;
    _ZN12Unk_0200e2c013func_0200e2c0Eiis(&m, 0x3a, a, b);
    s32 r = func_0200e248(o, &m);
    return r;
}
}

namespace ns_022105bc {
extern "C" void func_ov003_02210da4(Obj *o) {
    func_0200ec1c(o, 0);
    o->unk_7f4 = 0;
}
}

namespace ns_022105bc {
extern "C" s32 func_ov003_02210d98(Obj *o, s32 a) {
    return func_ov003_02210dc0(o, 6, a);
}
}

namespace ns_022105bc {
extern "C" void func_ov003_02210d94() {}
}

namespace ns_022105bc {
extern "C" s32 func_ov003_02210d54(Obj *o, s32 a, s32 b) {
    Msg m;
    Rec2 &q = *(Rec2 *)m.v_022105bc.unk_0c;
    _ZN12Unk_0200e2c013func_0200e2c0Eiis(&m, 0x3b, a, b);
    q.a = 0;
    q.b = 0;
    s32 r = func_0200e248(o, &m);
    return r;
}
}

namespace ns_022105bc {
extern "C" s32 func_ov003_02210d10(Obj *o, u32 a, u32 b, s32 c, s16 d) {
    Msg m;
    _ZN12Unk_0200e2c013func_0200e2c0Eiis(&m, 0x3b, c, d);
    Rec2 &q = *(Rec2 *)m.v_022105bc.unk_0c;
    q.a = a;
    q.b = b;
    s32 r = func_0200e248(o, &m);
    return r;
}
}

namespace ns_022105bc {
extern "C" void func_ov003_02210d08(u8 *p, u32 a, u32 b) {
    p[0] = a;
    p[1] = b;
}
}

namespace ns_022105bc {
extern "C" void func_ov003_02210cfc(u8 *p, u8 *a, u8 *b) {
    *a = p[0];
    *b = p[1];
}
}

namespace ns_022105bc {
extern "C" s32 func_ov003_02210bdc(Obj *o, Msg *m) {
    func_0200ec1c(o, 0);
    u8 *p = (u8 *)m + 0xc;
    Rec2 *rec = (Rec2 *)&o->unk_7d0;
    s32 t = 0;
    void *g = data_020cbb18;
    s32 n;
    if (func_020729bc(g, o->unk_7fc)) {
        n = func_ov003_02218d78();
    } else {
        n = p[0];
    }
    if (func_020729bc(g, o->unk_7fc)) {
        void *q = func_0209750c();
        if (func_020b50e8() == 0 && q != 0 && func_02098044(q, 0x23) != 0 &&
            (func_020b530c(func_020b50dc()) != 0 || func_020b50dc() == 6)) {
            t = 1;
        } else if (func_020851bc(func_020850e0(), 0) != 0) {
            t = 2;
        } else if (func_020851bc(func_020850e0(), 5) != 0) {
            t = 3;
        }
    } else {
        t = p[1];
    }
    u32 u;
    if (n != 0) {
        func_02010358(o, 0x34, 0, 0);
        u = 0;
        o->unk_7f4 = 1;
    } else {
        u = (u8)func_020b1614(o->unk_5c);
        if (u <= 1) {
            func_02010358(o, 0x35, 0, 0);
        } else {
            func_020103b4(o, 0x36, 0, 0);
        }
        o->unk_7f4 = 1;
    }
    rec->b = u;
    rec->a = t;
    func_ov003_02210d08(o->unk_8ec, n, t);
    func_ov003_02218d34(o->unk_5c);
}
}

namespace ns_022105bc {
extern "C" void func_ov003_02210b94(Obj *o, s32 a) {
    if (o->unk_7ec == 0x3b) {
        o->unk_c80 = a;
    } else {
        Rec2 r;
        func_ov003_02210cfc(o->unk_8ec, &r.a, &r.b);
        Unk_ov003_02210b94_Ns::func_ov003_02210d10(o, r.a, r.b, 6, a);
    }
}
}

namespace ns_022105bc {
extern "C" void func_ov003_02210ad4(Obj *o) {
    u8 *p = &o->unk_7d1;
    func_02010914(o);
    u32 c = o->unk_7d1;
    if (c) {
        *p = c - 1;
        if (*p == 0) {
            if (o->unk_700 == 0x36) {
                func_02010358(o, 0x35, 5, 0);
            }
        }
    } else {
        if (o->unk_700 == 0x34) {
            s32 m = o->unk_2d4.mid;
            if (m > 0x1c) goto r_hi;
            if (m >= 0x1c) goto hit;
            if (m > 0x11) goto l23;
            if (m < 0xd) goto done;
            switch (m) {
            case 0xd: goto hit;
            case 0x11: goto hit;
            }
            goto done;
        l23:
            switch (m) {
            case 0x17: goto hit;
            }
            goto done;
        r_hi:
            if (m > 0x25) goto r40;
            switch (m) {
            case 0x25: goto hit;
            }
            goto done;
        r40:
            if (m != 0x28) goto done;
        hit:
            func_0200f258(o);
        done:;
        } else if (o->unk_700 == 0x35) {
            switch ((s32)o->unk_2d4.mid) {
            case 4:
            case 9:
            case 0xe:
            case 0x14:
                func_0200f258(o);
                break;
            }
        }
    }
}
}

namespace ns_022105bc {
extern "C" void func_ov003_022107fc(Obj *o) {
    u16 v[8];
    if (!func_02056654(o->unk_2cc)) return;
    func_0200ed9c(o);
    o->unk_7f8 = func_02007c08(o, o->unk_7ec);
    u8 *pst = &o->unk_7d0;
    u8 st = *pst;
    func_02010a7c(v, o);
    if (st <= 1) {
        BOOL r = FALSE;
        volatile u16 *pv = &v[0];
        u32 x = *pv;
        u32 y = *pv;
        if (y < 0x1380 || x > 0x139f) {
        } else {
            r = TRUE;
        }
        if (r != 0 || (x >= 0x13a0 && x <= 0x13a7)) {
            func_0200ec1c(o, 0x1d);
        }
    }
    switch (*pst) {
    case 0: {
        BOOL r = Unk_ov003_022107fc_Eq(v, &v[5]);
        if (r == 0 && func_020b0f30() == 0 && func_0200ec44(o, 0x1d) == 0) {
            func_ov003_02210628(o, 2, 2, 0, 0, 0, 6, -1);
            return;
        }
        if (func_020729bc(data_020cbb18, o->unk_7fc)) {
            if (Unk_ov003_022107fc_Eq(v, &v[2])) {
                func_0200ec30(o, 0);
            }
        }
    }
    case 1:
        if (Unk_ov003_022107fc_Eq(v, &v[3])) {
            func_0200ec30(o, 0);
        }
        func_0203d76c();
        func_0200ec1c(o, 0x1d);
        func_0200ce98(o, 3, 1, -1);
        break;
    case 2: {
        void *g = data_020cbb18;
        if (func_020729bc(g, o->unk_7fc)) {
            func_02085188(func_020850e0(), 0);
        }
        if (func_020b0f30() == 0) {
            func_02008e50(o, 2, 0, 0, 6, -1);
            return;
        }
        func_0203d76c();
        if (func_020729bc(g, o->unk_7fc)) {
            goto x;
        } else {
            func_02010a7c(&v[1], o);
            if (Unk_ov003_022107fc_Eq(&v[1], &v[4])) {
            x:
                func_0200ec30(o, 0);
            }
        }
        func_0200ec1c(o, 0x1d);
        func_0200ce98(o, 3, 1, -1);
        break;
    }
    case 3:
        if (func_020729bc(data_020cbb18, o->unk_7fc)) {
            func_02085188(func_020850e0(), 5);
            func_02097ff4(func_0209750c(), 1);
            func_02041b68();
        }
        func_02008e50(o, 3, 0, 0, 6, -1);
        break;
    }
}
}

namespace ns_022105bc {
extern "C" void func_ov003_022107e0(Obj *o) {
    func_ov003_02210ad4(o);
    func_0201071c(o);
    Unk_ov003_022107e0_Ns::func_ov003_022107fc(o);
}
}

namespace ns_022105bc {
extern "C" s32 func_ov003_022107a8(Obj *o, s32 a, s32 b) {
    Msg m;
    _ZN12Unk_0200e2c013func_0200e2c0Eiis(&m, 0x3c, a, b);
    s32 r = func_0200e248(o, &m);
    return r;
}
}

namespace ns_022105bc {
extern "C" void func_ov003_0221072c(Obj *o) {
    func_0200ec1c(o, 0);
    if (func_ov003_02218d78()) {
        func_02010358(o, 0x34, 0, 0);
    } else {
        func_02010358(o, 0x35, 0, 0);
    }
    o->unk_7f4 = 0;
    if (func_020851bc(func_020850e0(), 0) != 0 || func_020851bc(func_020850e0(), 5) != 0) {
        if (func_020729bc(data_020cbb18, o->unk_7fc)) {
            func_02034dd0(0x12, 0xf, 0);
        }
    }
}
}

namespace ns_022105bc {
extern "C" s32 func_ov003_02210720(Obj *o, s32 a) {
    return func_ov003_022107a8(o, 1, a);
}
}

namespace ns_022105bc {
extern "C" s32 func_ov003_02210708(Obj *o, s32 a) {
    if (a != 0x3b && a != 0x3d) {
        func_0200ec30(o, 0);
    }
}
}

namespace ns_022105bc {
extern "C" void func_ov003_02210704() {}
}

namespace ns_022105bc {
extern "C" void func_ov003_022106e8(Pay *p, s32 a, u32 b, s32 c, s32 d, s16 e) {
    p->a = a;
    p->b = b;
    p->c = c;
    p->d = d;
    p->e = e;
}
}

namespace ns_022105bc {
extern "C" s32 func_ov003_02210628(Obj *o, s32 a, s32 b, s32 c, s32 d, s16 e, s32 f, s16 g) {
    u16 v[2];
    func_02010a7c(v, o);
    {
        BOOL r = FALSE;
        volatile u16 *pv = &v[0];
        u32 x = *pv;
        u32 y = *pv;
        if (y < 0x1380 || x > 0x139f) {
        } else {
            r = TRUE;
        }
        if (r != 0 || (x >= 0x13a0 && x <= 0x13a7)) {
            return func_ov003_02210204(o, a, b, c, d, e, f, g);
        }
    }
    Msg m;
    _ZN12Unk_0200e2c013func_0200e2c0Eiis(&m, 0x3d, f, g);
    func_ov003_022106e8((Pay *)&m.v_022105bc.unk_0c, a, b, c, d, e);
    func_0200ec1c(o, 1);
    s32 r = func_0200e248(o, &m);
    return r;
}
}

namespace ns_022105bc {
extern "C" void func_ov003_02210608(Rec *p, s32 a, u32 b, s32 c, s32 d, s16 e, s32 f) {
    p->a = a;
    p->b = b;
    p->c = c;
    p->d = d;
    p->e = e;
    p->f = f;
}
}

namespace ns_022105bc {
extern "C" void func_ov003_022105e0(u8 *p, u32 a, u32 b, u32 c, s16 d) {
    p[7] = a;
    func_02076a6c(p, b, c);
    func_020769c4(p + 5, d);
}
}

namespace ns_022105bc {
extern "C" void func_ov003_022105bc(u8 *p, u8 *a, u32 b, u32 c, u16 *d) {
    *a = p[7];
    func_02076a2c(p, b, c);
    *d = func_020769ac(p + 5);
}
}

namespace ns_0220fc88 {
extern "C" s32 func_ov003_022104a8(Obj *o, Arg a) {
    RecA *r = &a.unk_0c;
    H hh;
    RecA *p7d0 = (RecA *)&o->unk_7d0;
    func_02010a7c(&hh, o);
    s32 q = func_02010d20(o);
    hh.b = 0xfff1;
    func_02098738(q, &hh.b);
    func_02010358(o, 0x6b, 3, 0);
    func_02098738(q, &hh);
    s32 v;
    if ((r->bits & 3) == 2) {
        func_0200ec30(o, 0);
        v = 0;
        u32 mid = o->unk_2d0.mid;
        func_0205668c(o->unk_2cc, mid, 3, 0x1000, (u16)(mid - 1));
    } else {
        v = 0x1000;
    }
    s32 st = r->st;
    u8 bits = r->bits;
    s32 x = r->a;
    s32 y = r->b;
    s32 h2 = r->h;
    func_ov003_02210608(p7d0, st, bits, x, y, h2, v);
    u8 *p8 = o->unk_8ec;
    switch (st) {
    case 0x38:
        break;
    case 0x39:
        bits |= 0x10;
        break;
    case 0x10:
        bits |= 0x20;
        break;
    case 2:
        bits |= 0x30;
        break;
    }
    func_ov003_022105e0(p8, bits, x, y, h2);
    func_0200ecdc(o, 0x4f);
}
}

namespace ns_0220fc88 {
extern "C" s32 func_ov003_02210438(Obj *o, s32 a) {
    u8 b;
    s16 h;
    s32 x, y;
    func_ov003_022105bc(o->unk_8ec, &b, &x, &y, &h);
    s32 id;
    switch (b & 0xf0) {
    case 0:
        id = 0x38;
        break;
    case 0x10:
        id = 0x39;
        break;
    case 0x20:
        id = 0x10;
        break;
    default:
        id = 2;
        break;
    }
    func_ov003_02210628(o, id, (u8)(b & 0xf), x, y, h, 6, a);
}
}

namespace ns_0220fc88 {
extern "C" s32 func_ov003_02210404(Obj *o) {
    if ((o->unk_7d0.bits & 3) == 2) {
        o->unk_5a0 = 0x1000;
    } else {
        o->unk_5a0 = 0;
        func_0200ec1c(o, 0);
    }
}
}

namespace ns_0220fc88 {
extern "C" void func_ov003_02210298(Obj *o) {
    RecB *r = &o->unk_7d0;
    s32 *t = &r->timer;
    s32 target;
    if ((r->bits & 3) == 2) {
        target = 0x1000;
        if (o->unk_2d4.mid < 8) {
            if (func_020565e8(o->unk_2cc, 7)) {
                func_02010284(o, 0, 7);
            }
            if (*t != 0x1000) {
                *t += 0x249;
                if (*t > 0x1000) *t = 0x1000;
            }
        }
    } else {
        target = 0;
        if (*t != 0) {
            *t -= 0x249;
            if (*t < 0) *t = target;
        }
    }
    o->unk_5a0 = r->timer;
    if (func_02056654(o->unk_2cc) && target == *t) {
        func_0200ec30(o, 1);
        switch (r->st) {
        case 0x38:
            func_0200ec1c(o, 0);
            func_ov003_0221129c(o, r->a, r->b, r->h, 6, -1);
            break;
        case 0x39:
            func_0200ec1c(o, 0);
            func_ov003_02211098(o, (u8)((r->bits & 0xc) >> 2), r->a, r->b, r->h, 6, -1);
            break;
        case 0x10:
            func_0200ec1c(o, 0);
            o->unk_7f8 = func_02007c08(o, o->unk_7ec);
            func_0200bd60(o, 3, 5, -1);
            break;
        case 2:
            func_0203d76c();
            o->unk_7f8 = func_02007c08(o, o->unk_7ec);
            func_0200ce98(o, 3, 1, -1);
            break;
        }
    }
}
}

namespace ns_0220fc88 {
extern "C" s32 func_ov003_0221027c(Obj *o) {
    func_02010914(o);
    func_0201071c(o);
    func_ov003_02210298(o);
}
}

namespace ns_0220fc88 {
extern "C" s32 func_ov003_02210260(RecA *p, s32 st, u32 bits, s32 x, s32 y, s32 h) {
    p->st = st;
    p->bits = bits;
    p->a = x;
    p->b = y;
    p->h = *(s16 *)&h;
}
}

namespace ns_0220fc88 {
extern "C" s32 func_ov003_02210204(Obj *o, s32 id, u8 low, s32 x, s32 y, s16 h, s32 a, s32 b) {
    Msg m;
    _ZN12Unk_0200e2c013func_0200e2c0Eiis(&m, 0x3e, a, *(s16 *)&b);
    func_ov003_02210260(&m.v_0220fc88.unk_0c, id, low, x, y, h);
    func_0200ec1c(o, 1);
    s32 r = func_0200e248(o, &m);
    return r;
}
}

namespace ns_0220fc88 {
extern "C" s32 func_ov003_022101e8(RecA *p, s32 st, u32 bits, s32 x, s32 y, s32 h) {
    p->st = st;
    p->bits = bits;
    p->a = x;
    p->b = y;
    p->h = *(s16 *)&h;
}
}

namespace ns_0220fc88 {
extern "C" s32 func_ov003_022101c0(u8 *p, u32 id, s32 x, s32 y, s32 h) {
    p[7] = id;
    func_02076a6c(p, x, y);
    func_020769c4(p + 5, *(s16 *)&h);
}
}

namespace ns_0220fc88 {
extern "C" s32 func_ov003_0221019c(u8 *p, u8 *a, s32 *b, s32 *c, s16 *d) {
    *a = p[7];
    func_02076a2c(p, b, c);
    *d = func_020769ac(p + 5);
}
}

namespace ns_0220fc88 {
extern "C" s32 func_ov003_02210044(Obj *o, Arg a) {
    RecA *r = &a.unk_0c;
    u8 bits = r->bits;
    RecA *p7d0 = (RecA *)&o->unk_7d0;
    func_0205e1a0(o->unk_59c, 0x24, 3, 1);
    s32 x, y, st;
    s16 h;
    if ((bits & 3) != 2) {
        func_02010358(o, 0x62, 3, 0);
        u32 mid = o->unk_2d0.mid;
        func_0205668c(o->unk_2cc, mid, 3, 0x1000, (u16)(mid - 1));
        Sub *s = func_0205dfa4(o->unk_59c);
        u32 mid2 = s->unk_a0.mid;
        func_0205668c(s->unk_9c, mid2, 3, 0x1000, (u16)(mid2 - 1));
        func_0200ecdc(o, 0x858);
    } else {
        H hh;
        func_02010a7c(&hh, o);
        s32 q = func_02010d20(o);
        hh.b = 0xfff1;
        func_02098738(q, &hh.b);
        func_02010358(o, 0x62, 3, 0);
        func_02098738(q, &hh);
        func_0200ec1c(o, 0);
    }
    st = r->st;
    x = r->a;
    y = r->b;
    h = r->h;
    func_ov003_022101e8(p7d0, st, bits, x, y, h);
    u8 *p8 = o->unk_8ec;
    switch (st) {
    case 0x38:
        break;
    case 0x39:
        bits |= 0x10;
        break;
    case 0x10:
        bits |= 0x20;
        break;
    case 2:
        bits |= 0x30;
        break;
    }
    func_ov003_022101c0(p8, bits, x, y, h);
    func_0200ecdc(o, 0x4f);
}
}

namespace ns_0220fc88 {
extern "C" s32 func_ov003_0220ffd4(Obj *o, s32 a) {
    u8 b;
    s16 h;
    s32 x, y;
    func_ov003_0221019c(o->unk_8ec, &b, &x, &y, &h);
    s32 id;
    switch (b & 0xf0) {
    case 0:
        id = 0x38;
        break;
    case 0x10:
        id = 0x39;
        break;
    case 0x20:
        id = 0x10;
        break;
    default:
        id = 2;
        break;
    }
    func_ov003_02210204(o, id, (u8)(b & 0xf), x, y, h, 6, a);
}
}

namespace ns_0220fc88 {
extern "C" void func_ov003_0220ff5c(Obj *o) {
    func_02010914(o);
    RecA *r = (RecA *)&o->unk_7d0;
    if ((r->bits & 3) != 2) {
        if (o->unk_2d4.mid < 6) {
            if (func_020565e8(o->unk_2cc, 5)) {
                func_0200ec1c(o, 0);
            }
        }
    } else {
        if (o->unk_2d4.mid < 8) {
            if (func_020565e8(o->unk_2cc, 7)) {
                func_0200ec30(o, 0);
                func_0200ecdc(o, 0x857);
            }
        }
    }
}
}

namespace ns_0220fc88 {
extern "C" void func_ov003_0220fe70(Obj *o) {
    RecA *r = (RecA *)&o->unk_7d0;
    if (func_02056654(o->unk_2cc)) {
        func_0200ec30(o, 1);
        switch (r->st) {
        case 0x38:
            func_0200ec1c(o, 0);
            func_ov003_0221129c(o, r->a, r->b, r->h, 6, -1);
            break;
        case 0x39:
            func_0200ec1c(o, 0);
            func_ov003_02211098(o, (u8)((r->bits & 0xc) >> 2), r->a, r->b, r->h, 6, -1);
            break;
        case 0x10:
            func_0200ec1c(o, 0);
            o->unk_7f8 = func_02007c08(o, o->unk_7ec);
            func_0200bd60(o, 3, 5, -1);
            break;
        case 2:
            func_0203d76c();
            o->unk_7f8 = func_02007c08(o, o->unk_7ec);
            func_0200ce98(o, 3, 1, -1);
            break;
        }
    }
}
}

namespace ns_0220fc88 {
extern "C" s32 func_ov003_0220fe54(Obj *o) {
    func_ov003_0220ff5c(o);
    func_0201071c(o);
    func_ov003_0220fe70(o);
}
}

namespace ns_0220fc88 {
extern "C" s32 func_ov003_0220fe1c(Obj *o, s32 a, s16 b) {
    Msg m;
    _ZN12Unk_0200e2c013func_0200e2c0Eiis(&m, 0x45, a, b);
    s32 r = func_0200e248(o, &m);
    return r;
}
}

namespace ns_0220fc88 {
extern "C" void func_ov003_0220fe0c(u8 *p) {
    *(u16 *)p = 0;
    *(u16 *)(p + 2) = 0x20;
    *(s32 *)(p + 4) = -1;
}
}

namespace ns_0220fc88 {
extern "C" s32 func_ov003_0220fdd8(Obj *o) {
    func_02010358(o, 0x63, 3, 0);
    func_ov003_0220fe0c((u8 *)&o->unk_7d0);
    func_0200ecdc(o, 0x856);
    func_0200ec30(o, 9);
}
}

namespace ns_0220fc88 {
extern "C" s32 func_ov003_0220fdcc(Obj *o, s16 b) {
    return func_ov003_0220fe1c(o, 6, b);
}
}

namespace ns_0220fc88 {
extern "C" void func_ov003_0220fdac(Obj *o) {
    s32 h = o->unk_7d0.a;
    if (h != -1) {
        func_020902f8(h);
    }
}
}

namespace ns_0220fc88 {
extern "C" s32 func_ov003_0220fd44(Obj *o) {
    func_02010914(o);
    s32 *p = &o->unk_7d0.a;
    V3 v(o->unk_628.x, o->unk_628.y, o->unk_628.z);
    func_0203ee38(&v, &v);
    if (o->unk_7d0.a == -1) {
        *p = func_02090330(0x33, &v, &o->unk_8e, 0);
    } else {
        func_020902d4(o->unk_7d0.a, &v, &o->unk_8e);
    }
}
}

namespace ns_0220fc88 {
extern "C" void func_ov003_0220fcd8(Obj *o) {
    if (func_02056654(o->unk_2cc)) {
        o->unk_7f8 = func_02007c08(o, o->unk_7ec);
        func_0200ce98(o, 3, 1, -1);
    }
    u32 m = o->unk_2d4.mid;
    if (m >= 0xe) {
        if (func_020729bc(data_020cbb18, o->unk_7fc)) {
            func_ov003_02205c28(o);
        }
    }
}
}

namespace ns_0220fc88 {
extern "C" s32 func_ov003_0220fc90(Obj *o) {
    func_ov003_0220fd44(o);
    if (func_020729bc(data_020cbb18, o->unk_7fc)) {
        func_020109c4(o);
    } else {
        func_0200ef08(o);
    }
    func_0201071c(o);
    func_0201065c(o);
    func_ov003_0220fcd8(o);
}
}

namespace ns_0220fc88 {
extern "C" void func_ov003_0220fc88(s32 *p, s32 a, s32 b, u32 c) {
    p[0] = a;
    p[1] = b;
    *(u8 *)&p[2] = c;
}
}

namespace ns_0220f314 {
extern "C" s32 func_ov003_0220fc00(Obj *o, s32 a, s16 b) {
    Msg m;
    u8 *p = m.v_0220f314.unk_0c;
    _ZN12Unk_0200e2c013func_0200e2c0Eiis(&m, 0x46, a, b);
    if (o->unk_144) {
        func_ov003_0220fc88(p, o->unk_154, o->unk_15c, 1);
    } else {
        func_ov003_0220fc88(p, o->unk_148, o->unk_150, o->unk_140 != 0 ? 1 : 0);
    }
    s32 r = func_0200e248(o, &m);
    return r;
}
}

namespace ns_0220f314 {
extern "C" s32 func_ov003_0220fbb8(Obj *o, s32 *a, s32 *b, u8 *c, s32 d, s32 e) {
    Msg m;
    _ZN12Unk_0200e2c013func_0200e2c0Eiis(&m, 0x46, d, *(s16 *)&e);
    func_ov003_0220fc88(m.v_0220f314.unk_0c, *a, *b, *c);
    s32 r = func_0200e248(o, &m);
    return r;
}
}

namespace ns_0220f314 {
extern "C" void func_ov003_0220fba8(u8 *d, V3 *v, s32 a) {
    Unk_ov003_0220f314_Rec7d0 *r = (Unk_ov003_0220f314_Rec7d0 *)d;
    r->v.x = v->x;
    r->v.y = v->y;
    r->v.z = v->z;
    r->h = a;
}
}

namespace ns_0220f314 {
extern "C" s32 func_ov003_0220fb90(void *p, s32 a, s32 b, u8 c) {
    func_02076a6c(p, a, b);
    ((u8 *)p)[5] = c;
}
}

namespace ns_0220f314 {
extern "C" void func_ov003_0220fb78(void *p, s32 *a, s32 *b, u8 *c) {
    func_02076a2c(p, a, b);
    u32 t = ((u8 *)p)[5];
    *c = t;
}
}

namespace ns_0220f314 {
extern "C" s32 func_ov003_0220fa70(Obj *o, Arg *a) {
    struct {
        s32 out;
        V3 v, A, B, C, D;
    } l;
    P2 *q = &a->unk_0c;
    u8 *rec = (u8 *)&o->unk_7d0;
    s32 x = a->unk_0c.x;
    s32 z = q->z;
    u8 flag = q->flag;
    func_ov003_0220fb90(o->unk_8ec, x, z, flag);
    func_02010358(o, 0x42, 3, 0);
    if (flag != 0) {
        l.v.x = x;
        l.v.z = z;
    } else {
        func_0200f43c(&l.A, o);
        if (Unk_ov003_0220fa70_Ge(func_0203081c(&l.A, &l.out, 0x19))) {
            func_0200f45c(&l.B, o);
            l.v.x = l.B.x;
            l.v.y = l.B.y;
            l.v.z = l.B.z;
        } else {
            func_0200f43c(&l.C, o);
            l.v.x = l.C.x;
            l.v.y = l.C.y;
            l.v.z = l.C.z;
        }
    }
    s32 ang = func_020e7b98(l.v.x - o->unk_6f0, l.v.z - o->unk_6f8);
    l.D.x = l.v.x;
    l.D.y = l.v.y;
    l.D.z = l.v.z;
    func_ov003_0220fba8(rec, &l.D, ang);
    if (func_020729bc(data_020cbb18, o->unk_7fc)) {
        func_0200ec1c(o, 0x14);
        if (func_0200f660(o) != 0xb) {
            if (!func_02063b8c(8)) {
                func_0200ec30(o, 0x14);
            }
        }
    }
}
}

namespace ns_0220f314 {
extern "C" s32 func_ov003_0220fa3c(Obj *o, s32 a) {
    u8 c;
    s32 x, z;
    func_ov003_0220fb78(o->unk_8ec, &x, &z, &c);
    return func_ov003_0220fbb8(o, &x, &z, &c, 6, a);
}
}

namespace ns_0220f314 {
extern "C" s32 func_ov003_0220fa2c(Obj *o) {
    return func_0200f504(o, o->unk_7d0.h);
}
}

namespace ns_0220f314 {
extern "C" s32 func_ov003_0220f9ec(Obj *o) {
    V3 t;
    V3 *pv = &o->unk_7d0.v;
    t.x = pv->x;
    t.y = pv->y;
    t.z = pv->z;
    func_02010740(o, &t, 0xf33, 0x1000);
    func_02089040(o->unk_1c0);
}
}

namespace ns_0220f314 {
extern "C" s32 func_ov003_0220f9b8(Obj *o) {
    if (func_02056654(o->unk_2cc)) {
        if (func_ov003_0220f668(o, 1) == 0) {
            func_ov003_0220f880(o, 6, -1);
        }
    }
}
}

namespace ns_0220f314 {
extern "C" s32 func_ov003_0220f97c(Obj *o) {
    o->unk_7f8 = func_02007c08(o, o->unk_7ec);
    if (func_02056654(o->unk_2cc)) {
        func_ov003_0220f880(o, 6, -1);
    }
}
}

namespace ns_0220f314 {
extern "C" void func_ov003_0220f8b8(Obj *o) {
    s32 old = o->unk_98;
    if (func_020729bc(data_020cbb18, o->unk_7fc)) {
        s32 t;
        func_ov003_0220fa2c(o);
        func_02010914(o);
        func_020109c4(o);
        func_0201071c(o);
        t = func_02010d5c(o->unk_98, 0, 0x171);
        func_02010a34(o, &t);
        func_ov003_0220f9b8(o);
        func_ov003_0220f9ec(o);
    } else {
        s32 t2;
        func_02010914(o);
        if (func_0200ef08(o)) {
            func_020109c4(o);
        }
        func_0201071c(o);
        t2 = func_02010d5c(o->unk_98, 0, 0x171);
        func_02010a34(o, &t2);
        func_ov003_0220f97c(o);
    }
    if (old != 0 && o->unk_98 == 0) {
        func_02090330(0x2c, &o->unk_5c, &o->unk_8e, 0);
    }
}
}

namespace ns_0220f314 {
extern "C" s32 func_ov003_0220f880(Obj *o, s32 a, s16 b) {
    Msg m;
    _ZN12Unk_0200e2c013func_0200e2c0Eiis(&m, 0x47, a, b);
    s32 r = func_0200e248(o, &m);
    return r;
}
}

namespace ns_0220f314 {
extern "C" s32 func_ov003_0220f86c(Obj *o) {
    func_020103b4(o, 0x43, 3, 0);
}
}

namespace ns_0220f314 {
extern "C" s32 func_ov003_0220f860(Obj *o, s16 b) {
    return func_ov003_0220f880(o, 6, b);
}
}

namespace ns_0220f314 {
extern "C" s32 func_ov003_0220f828(Obj *o) {
    V3 v;
    func_0200f43c(&v, o);
    func_02010740(o, &v, 0xf33, 0x1000);
    func_02089040(o->unk_1c0);
}
}

namespace ns_0220f314 {
extern "C" s32 func_ov003_0220f668(Obj *o, u8 a, ...) {
    u8 k;
    s32 v[2];
    s32 r;
    Pair t0, t1, t2, t3, t4, t5;
    if (o->unk_98 != 0) {
        return -1;
    }
    r = func_0200f660(o);
    k = 0;
    if (r != 0xb) {
        if (func_0200ec44(o, 0x14)) {
            if (r != 0xa) {
                k = 1;
            } else {
                k = 2;
            }
        }
    }
    v[0] = 0;
    v[1] = 0;
    r = func_ov003_02205a00(o, &a, &k, v);
    if (!func_020729bc(data_020cbb18, o->unk_7fc)) {
        k = 0;
    }
    switch (r) {
    case 1:
        func_ov003_0220f590(o, 6, -1);
        break;
    case 2:
    case 3:
        if (k == 2) {
            t0.a = v[0];
            t0.b = v[1];
            func_ov003_0220eddc(o, 1, &t0.a, 6, -1);
        } else {
            t1.a = v[0];
            t1.b = v[1];
            BOOL f1 = k ? 1 : 0;
            BOOL f2 = r == 3 ? 1 : 0;
            func_ov003_0220f064(o, f1, f2, &t1.a, 6, -1);
        }
        break;
    case 4:
        if (k == 2) {
            t2.a = v[0];
            t2.b = v[1];
            func_ov003_0220eddc(o, 0, &t2.a, 6, -1);
        } else {
            t3.a = v[0];
            t3.b = v[1];
            func_ov003_0220f484(o, k ? 1 : 0, 0, &t3.a, 6, -1);
        }
        break;
    case 5:
        o->unk_7f8 = func_02007c08(o, o->unk_7ec);
        func_0200ce98(o, 3, 1, -1);
        break;
    case 6:
        if (k == 2) {
            t4.a = v[0];
            t4.b = v[1];
            func_ov003_0220eddc(o, 1, &t4.a, 6, -1);
        } else {
            t5.a = v[0];
            t5.b = v[1];
            func_ov003_0220f484(o, k ? 1 : 0, 1, &t5.a, 6, -1);
        }
        break;
    }
    return r;
}
}

namespace ns_0220f314 {
extern "C" s32 func_ov003_0220f5c8(Obj *o) {
    func_02010914(o);
    if (func_020729bc(data_020cbb18, o->unk_7fc)) {
        s32 t;
        func_020109c4(o);
        func_0201071c(o);
        t = func_02010d50(o->unk_98, 0);
        func_02010a34(o, &t);
        func_ov003_0220f668(o, 0);
    } else {
        s32 t2;
        if (func_0200ef08(o)) {
            func_020109c4(o);
        }
        func_0201071c(o);
        t2 = func_02010d50(o->unk_98, 0);
        func_02010a34(o, &t2);
        o->unk_7f8 = func_02007c08(o, o->unk_7ec);
    }
    func_ov003_0220f828(o);
}
}

namespace ns_0220f314 {
extern "C" s32 func_ov003_0220f590(Obj *o, s32 a, s16 b) {
    Msg m;
    _ZN12Unk_0200e2c013func_0200e2c0Eiis(&m, 0x48, a, b);
    s32 r = func_0200e248(o, &m);
    return r;
}
}

namespace ns_0220f314 {
extern "C" s32 func_ov003_0220f57c(Obj *o) {
    func_02010358(o, 0x46, 3, 0);
}
}

namespace ns_0220f314 {
extern "C" s32 func_ov003_0220f570(Obj *o, s16 b) {
    return func_ov003_0220f590(o, 6, b);
}
}

namespace ns_0220f314 {
extern "C" s32 func_ov003_0220f540(Obj *o) {
    if (func_020565e8(o->unk_2cc, 6)) {
        func_0200ecdc(o, 0x83d);
    }
    func_02010914(o);
}
}

namespace ns_0220f314 {
extern "C" s32 func_ov003_0220f500(Obj *o) {
    if (func_02056654(o->unk_2cc)) {
        o->unk_7f8 = func_02007c08(o, o->unk_7ec);
        func_0200ce98(o, 3, 1, -1);
    }
}
}

namespace ns_0220f314 {
extern "C" s32 func_ov003_0220f4e4(Obj *o) {
    func_ov003_0220f540(o);
    func_0201071c(o);
    func_ov003_0220f500(o);
}
}

namespace ns_0220f314 {
extern "C" void func_ov003_0220f4d4(u8 *d, u32 x, u32 y, s32 *s) {
    d[2] = x;
    d[3] = y;
    d[0] = s[0];
    d[1] = s[1];
}
}

namespace ns_0220f314 {
extern "C" s32 func_ov003_0220f484(Obj *o, u32 a, u32 b, s32 *c, s32 d, s32 e) {
    Msg m;
    Pair t;
    _ZN12Unk_0200e2c013func_0200e2c0Eiis(&m, 0x49, d, *(s16 *)&e);
    t.a = c[0];
    t.b = c[1];
    func_ov003_0220f4d4(m.v_0220f314.unk_0c, a, b, &t.a);
    s32 r = func_0200e248(o, &m);
    return r;
}
}

namespace ns_0220f314 {
extern "C" void func_ov003_0220f474(u8 *d, u32 x, u32 y, s32 *s) {
    d[2] = x;
    d[3] = y;
    d[0] = s[0];
    d[1] = s[1];
}
}

namespace ns_0220f314 {
extern "C" void func_ov003_0220f45c(u8 *d, u8 a, u8 b, u8 c, u8 e, u8 f) {
    d[0] = a;
    d[1] = b;
    d[2] = c;
    d[3] = e;
    d[4] = f;
}
}

namespace ns_0220f314 {
extern "C" void func_ov003_0220f43c(u8 *s, u8 *a, u8 *b, u8 *c, u8 *d, u8 *e) {
    *a = s[0];
    *b = s[1];
    *c = s[2];
    *d = s[3];
    *e = s[4];
}
}

namespace ns_0220f314 {
extern "C" s32 func_ov003_0220f3cc(Obj *o, Arg4 *a) {
    u8 *q = a->b;
    u8 b2 = q[2];
    u8 b3 = q[3];
    u32 b0 = a->b[0];
    u32 b1 = q[1];
    Pair t;
    t.a = b0;
    t.b = b1;
    func_ov003_0220f474((u8 *)&o->unk_7d0, b2, b3, &t.a);
    func_ov003_0220f45c(o->unk_8ec, b2, b3, o->unk_168, b0, b1);
    func_02010358(o, 0x45, 3, 0);
    if (b3) {
        func_0200ec30(o, 0x1c);
    }
}
}

namespace ns_0220f314 {
extern "C" void func_ov003_0220f370(Obj *o, s32 a) {
    struct {
        u8 a, b, c, d, e;
    } l;
    Pair t;
    func_ov003_0220f43c(o->unk_8ec, &l.a, &l.b, &l.c, &l.d, &l.e);
    o->unk_168 = l.c;
    if (l.b == 0) {
        t.a = l.d;
        t.b = l.e;
        func_ov003_0220f484(o, l.a, 0, &t.a, 6, a);
    }
}
}

namespace ns_0220f314 {
extern "C" s32 func_ov003_0220f33c(Obj *o) {
    if (!func_020729bc(data_020cbb18, o->unk_7fc)) {
        if (func_0200ec44(o, 0x1c)) {
            func_ov003_0220f14c(o);
        }
    }
}
}

namespace ns_0220f314 {
extern "C" s32 func_ov003_0220f314(Obj *o) {
    func_02010914(o);
    if (func_020565e8(o->unk_2cc, 8)) {
        func_ov003_0220f14c(o);
    }
}
}

namespace ns_0220e970 {
extern "C" void func_ov003_0220f14c(Obj *o) {
    s16 ang;
    u16 buf;
    s32 t = -0x333;
    func_02010a34(o, &t);
    Rec *r = &o->unk_7d0;
    s32 n = func_0200f660(o);
    if (r->b2) {
        n++;
        if (n == 7) {
            func_0200ecdc(o, 0x83e);
        } else if (n == 9) {
            func_0200ecdc(o, 0x83f);
        }
    }
    func_020946f0(n, o->unk_7fc);
    func_0200ec30(o, 9);
    if (r->b3) {
        P2 q;
        s32 y = r->b1;
        s32 x = r->b0;
        q.x = x;
        q.z = y;
        func_ov003_0221cb54(&q);
        func_0200ec1c(o, 0x12);
        func_0200ec1c(o, 0x1c);
    }
    switch (o->unk_168) {
    case 0: {
        V3 v;
        V3 *pv = &o->unk_5c;
        v.x = pv->x;
        v.y = pv->y;
        v.z = pv->z;
        ang = o->unk_8e;
        s32 idx = ((u16)ang >> 4) * 2;
        s32 s, dz, c, dx;
        c = data_02135f44[idx];
        s = data_02135f44[idx + 1];
        dz = func_01ffcb0c(s, 0xccd) - func_01ffcb0c(c, -0x800);
        dx = func_01ffcb0c(c, 0xccd) + func_01ffcb0c(s, -0x800);
        v.x += dx;
        v.z += dz;
        v.y += 0xccd;
        ang += 0x2000;
        func_02090330(4, &v, &ang, 0);
        func_0200ecdc(o, 0x83c);
        break;
    }
    case 1:
        func_0200ecdc(o, 0x7df);
        break;
    case 2:
        func_0200ecdc(o, 0x7df);
        if (o->unk_164) {
            func_02010a7c(&buf, o);
            o->unk_164->vfunc_60(&buf);
        }
        break;
    case 3:
        if (func_020729bc(data_020cbb18, o->unk_7fc)) {
            if (func_ov003_022135c4(o->unk_164, 1) == 0) {
                func_0200ecdc(o, 0x7df);
            }
        } else {
            func_0200ecdc(o, 0x7df);
        }
        break;
    }
    o->unk_164 = 0;
    o->unk_168 = 0;
}
}

namespace ns_0220e970 {
extern "C" s32 func_ov003_0220f10c(Obj *o) {
    if (func_02056654(o->unk_2cc)) {
        o->unk_7f8 = func_02007c08(o, o->unk_7ec);
        func_0200ce98(o, 3, 1, -1);
    }
}
}

namespace ns_0220e970 {
extern "C" s32 func_ov003_0220f0c4(Obj *o) {
    func_ov003_0220f314(o);
    func_020109c4(o);
    func_0201071c(o);
    s32 *p = &o->unk_98;
    s32 v = *p;
    if (v < 0) v = -v;
    s32 t = func_02010d50(v, 0) * -1;
    func_02010a34(o, &t);
    func_ov003_0220f10c(o);
}
}

namespace ns_0220e970 {
extern "C" void func_ov003_0220f0b4(Rec *r, u32 a, u32 b, Pv p) {
    r->b2 = a;
    r->b3 = b;
    r->b0 = p.x;
    r->b1 = p.z;
}
}

namespace ns_0220e970 {
extern "C" s32 func_ov003_0220f064(Obj *o, u32 a, u32 b, Pv p, s32 c, s16 d) {
    Msg m;
    _ZN12Unk_0200e2c013func_0200e2c0Eiis(&m, 0x4a, c, d);
    func_ov003_0220f0b4(&m.v_0220e970.unk_0c, a, b, p);
    s32 r = func_0200e248(o, &m);
    return r;
}
}

namespace ns_0220e970 {
extern "C" void func_ov003_0220f054(Rec *r, u32 a, u32 b, Pv p) {
    r->b2 = a;
    r->b3 = b;
    r->b0 = p.x;
    r->b1 = p.z;
}
}

namespace ns_0220e970 {
extern "C" s32 func_ov003_0220f010(Obj *o, Arg *a) {
    Rec &r = a->unk_0c;
    u32 c = r.b2;
    u32 d = r.b3;
    func_ov003_0220f054(&o->unk_7d0, c, d, Pv(r.b0, r.b1));
    func_02010358(o, 0x44, 3, 0);
    func_0200ec30(o, 0x1c);
}
}

namespace ns_0220e970 {
extern "C" void func_ov003_0220f00c(Obj *o) {
}
}

namespace ns_0220e970 {
extern "C" s32 func_ov003_0220efd8(Obj *o) {
    if (!func_020729bc(data_020cbb18, o->unk_7fc)) {
        if (func_0200ec44(o, 0x1c)) {
            func_ov003_0220eeec(o);
        }
    }
}
}

namespace ns_0220e970 {
extern "C" s32 func_ov003_0220efb0(Obj *o) {
    func_02010914(o);
    if (func_020565e8(o->unk_2cc, 8)) {
        func_ov003_0220eeec(o);
    }
}
}

namespace ns_0220e970 {
extern "C" s32 func_ov003_0220eeec(Obj *o) {
    Rec *r = &o->unk_7d0;
    s32 n = func_0200f660(o);
    if (r->b2) {
        n++;
        if (n == 7) {
            func_0200ecdc(o, 0x83e);
        } else if (n == 9) {
            func_0200ecdc(o, 0x83f);
        }
    }
    func_020946f0(n, o->unk_7fc);
    func_0200ec30(o, 9);
    func_0200ecdc(o, 0x83b);
    u32 x = r->b0;
    u32 y = r->b1;
    u16 v;
    V3 pos;
    func_0204ed8c(&pos, r->b0, r->b1);
    v = o->unk_8e + 0x2000;
    func_02090330(2, &pos, &v, 0);
    if (pos.x >= o->unk_5c.x) {
        P2 a;
        a.x = x;
        a.z = y;
        func_ov003_0221cbe4(o->unk_7fc, &a, 5);
    } else {
        P2 b;
        b.x = x;
        b.z = y;
        func_ov003_0221cbe4(o->unk_7fc, &b, 4);
    }
    func_0200ec1c(o, 0x1c);
}
}

namespace ns_0220e970 {
extern "C" void func_ov003_0220ee58(Obj *o) {
    u32 b3 = o->unk_7d0.b3;
    if (func_02056654(o->unk_2cc)) {
        o->unk_7f8 = func_02007c08(o, o->unk_7ec);
        if (b3) {
            func_02008770(o, o->unk_8e, 6, -1);
        } else {
            func_0200ce98(o, 3, 1, -1);
        }
    }
    if (b3 == 0) {
        if (func_020729bc(data_020cbb18, o->unk_7fc)) {
            if (o->unk_2d4.mid > 8) {
                func_ov003_02205c28(o);
            }
        }
    }
}
}

namespace ns_0220e970 {
extern "C" s32 func_ov003_0220ee38(Obj *o) {
    func_ov003_0220efb0(o);
    func_0201071c(o);
    func_0201065c(o);
    func_ov003_0220ee58(o);
}
}

namespace ns_0220e970 {
extern "C" void func_ov003_0220ee2c(Rec *r, u32 c, Pv p) {
    r->b2 = c;
    r->b0 = p.x;
    r->b1 = p.z;
}
}

namespace ns_0220e970 {
extern "C" s32 func_ov003_0220eddc(Obj *o, u32 a, Pv p, s32 c, s16 e) {
    Msg m;
    _ZN12Unk_0200e2c013func_0200e2c0Eiis(&m, 0x4b, c, e);
    func_ov003_0220ee2c(&m.v_0220e970.unk_0c, a, p);
    s32 r = func_0200e248(o, &m);
    return r;
}
}

namespace ns_0220e970 {
extern "C" void func_ov003_0220edd0(Rec *r, u32 c, Pv p) {
    r->b2 = c;
    r->b0 = p.x;
    r->b1 = p.z;
}
}

namespace ns_0220e970 {
extern "C" void func_ov003_0220edcc(u8 *p, u32 v) {
    *p = v;
}
}

namespace ns_0220e970 {
extern "C" void func_ov003_0220edc4(u8 *src, u8 *dst) {
    *dst = *src;
}
}

namespace ns_0220e970 {
extern "C" s32 func_ov003_0220ed5c(Obj *o, Arg *a) {
    Rec *r = &a->unk_0c;
    u32 c = r->b2;
    func_ov003_0220edd0(&o->unk_7d0, c, Pv(r->b0, r->b1));
    func_ov003_0220edcc(o->unk_8ec, c);
    func_02010358(o, 0x47, 3, 0);
    if (func_020729bc(data_020cbb18, o->unk_7fc)) {
        func_02034dd0(0x12, 0xf, 0);
    }
}
}

namespace ns_0220e970 {
extern "C" void func_ov003_0220ed24(Obj *o, s16 a) {
    u8 t;
    func_ov003_0220edc4(o->unk_8ec, &t);
    if (t == 0) {
        func_ov003_0220eddc(o, 0, Pv(0, 0), 6, a);
    }
}
}

namespace ns_0220e970 {
extern "C" void func_ov003_0220ecb8(Obj *o) {
    if (func_020729bc(data_020cbb18, o->unk_7fc)) {
        u16 *r = func_02098744(func_02097520(o->unk_7fc));
        if (r) {
            func_0200eb58(o, 3, *r);
        }
    } else {
        Rec *r = &o->unk_7d0;
        if (r->b2) {
            P2 q;
            s32 y = r->b1;
            s32 x = r->b0;
            q.x = x;
            q.z = y;
            func_02045570(&q, 0);
            func_0200ec1c(o, 0x12);
        }
    }
}
}

namespace ns_0220e970 {
extern "C" void func_ov003_0220eb98(Obj *o) {
    func_02010914(o);
    if (o->unk_2d4.mid >= 8) {
        if (func_020565e8(o->unk_2cc, 8)) {
            Rec *r = &o->unk_7d0;
            if (r->b2) {
                P2 q;
                s32 y = r->b1;
                s32 x = r->b0;
                q.x = x;
                q.z = y;
                func_02045570(&q, 0);
                func_0200ec1c(o, 0x12);
                r->b2 = 0;
            }
            func_0200ecdc(o, 0x840);
            func_0200ec1c(o, 0);
            func_0200ec30(o, 9);
            Mtx t = o->unk_664;
            V3 pos;
            pos.x = t.v.x;
            pos.y = t.v.y;
            pos.z = t.v.z;
            func_0203ee38(&pos, &pos);
            func_020902b0(0x8c, &pos, 0, 0);
            pos.x = t.v.x;
            pos.y = t.v.y;
            pos.z = t.v.z;
            t.v.x = t.v.y = t.v.z = 0;
            Mtx t2 = t;
            V3 v;
            V3 out;
            v.x = v.y = 0;
            v.z = 0xab8;
            func_01ffb898(&v, &t2, &out);
            pos.x = pos.x + out.x;
            pos.y = pos.y + out.y;
            pos.z = pos.z + out.z;
            func_0203ee38(&pos, &pos);
            func_020902b0(0x8b, &pos, 0, 0);
        }
        func_0200f4c0(o, 0x200);
    }
}
}

namespace ns_0220e970 {
extern "C" void func_ov003_0220eb48(Obj *o) {
    if (o->unk_8e == 0) {
        if (func_02056654(o->unk_2cc)) {
            if (!func_020729bc(data_020cbb18, o->unk_7fc) || func_0203d820()) {
                func_ov003_0220eaf0(o, 6, -1);
            }
        }
    }
}
}

namespace ns_0220e970 {
extern "C" s32 func_ov003_0220eb28(Obj *o) {
    func_ov003_0220eb98(o);
    func_020109c4(o);
    func_0201071c(o);
    func_ov003_0220eb48(o);
}
}

namespace ns_0220e970 {
extern "C" s32 func_ov003_0220eaf0(Obj *o, s32 a, s16 b) {
    Msg m;
    _ZN12Unk_0200e2c013func_0200e2c0Eiis(&m, 0x4c, a, b);
    s32 r = func_0200e248(o, &m);
    return r;
}
}

namespace ns_0220e970 {
extern "C" void func_ov003_0220eae8(Rec *r) {
    r->b0 = 0;
}
}

namespace ns_0220e970 {
extern "C" s32 func_ov003_0220ea58(Obj *o) {
    struct Pad { s32 v[2]; Pad() {} ~Pad() {} } pad;
    func_020103b4(o, 0x48, 3, 0);
    func_ov003_0220eae8(&o->unk_7d0);
    if (func_020729bc(data_020cbb18, o->unk_7fc)) {
        func_0203e488(o, o);
        Sec &s = *o;
        func_020a710c(&s, (void *)"obj_etc_player");
        o->unk_10a = 10;
        o->unk_128->unk_08 = 1;
        func_0203a598();
        func_02034d70(0x12);
        func_02034dd0(0xc, 0, 1);
        func_02034e10(0xd, 0x42, 0x7f, 1);
    }
}
}

namespace ns_0220e970 {
extern "C" s32 func_ov003_0220ea4c(Obj *o, s16 a) {
    return func_ov003_0220eaf0(o, 6, a);
}
}

namespace ns_0220e970 {
extern "C" void func_ov003_0220e9a4(Obj *o) {
    Rec *p = &o->unk_7d0;
    switch (p->b0) {
    case 0:
        if (o->unk_128) {
            if (o->unk_128->unk_04) {
                p->b0 = 1;
                o->unk_818 = 12;
            }
        }
        break;
    case 1:
        if (o->unk_128) {
            if (!o->unk_128->unk_04) {
                func_0203e47c(o, o);
                func_0200ec1c(o, 0x11);
                func_0203d7f8();
                o->unk_7f8 = func_02007c08(o, o->unk_7ec);
                func_020946f0(0, o->unk_7fc);
                func_0200ec30(o, 0);
                func_0200ce98(o, 3, 1, -1);
                func_0203a844();
            }
        }
        break;
    }
}
}

namespace ns_0220e970 {
extern "C" s32 func_ov003_0220e970(Obj *o) {
    if (!func_020729bc(data_020cbb18, o->unk_7fc)) {
        func_020946f0(0, o->unk_7fc);
        func_0200ec30(o, 0);
    }
}
}

namespace ns_0220e030 {
extern "C" s32 func_ov003_0220e924(Obj *o) {
    func_02010914(o);
    func_0201071c(o);
    if (func_020729bc(data_020cbb18, o->unk_7fc)) {
        func_ov003_0220e9a4(o);
    } else {
        o->unk_7f8 = func_02007c08(o, o->unk_7ec);
    }
}
}

namespace ns_0220e030 {
extern "C" void func_ov003_0220e918(P2 *d, V3 *s) {
    d->x = s->x;
    d->z = s->z;
}
}

namespace ns_0220e030 {
extern "C" s32 func_ov003_0220e8cc(Obj *o, V3 *v, s32 a, s16 b) {
    Msg m;
    V3 t;
    _ZN12Unk_0200e2c013func_0200e2c0Eiis(&m, 0x4d, a, b);
    t.x = v->x;
    t.y = v->y;
    t.z = v->z;
    func_ov003_0220e918(&m.v_0220e030.unk_0c, &t);
    s32 r = func_0200e248(o, &m);
    return r;
}
}

namespace ns_0220e030 {
extern "C" s32 func_ov003_0220e8c4(void *p, s32 a, s32 b) {
    return func_02076a6c(p, a, b);
}
}

namespace ns_0220e030 {
extern "C" s32 func_ov003_0220e8bc(void *p, s32 *a, s32 *b) {
    return func_02076a2c(p, a, b);
}
}

namespace ns_0220e030 {
extern "C" s32 func_ov003_0220e844(Obj *o, Arg *a) {
    func_02010358(o, 0x52, 3, 0);
    func_0205e1a0(o->unk_59c, 0x15, 3, 0);
    P2 &q = a->unk_0c;
    struct { V3 t1, t2; } l;
    s32 z = q.z;
    s32 x = q.x;
    l.t1.x = x; l.t1.y = 0; l.t1.z = z;
    l.t2.x = x; l.t2.y = 0; l.t2.z = z;
    func_0205faf8(o->unk_5c4, &l.t2);
    func_ov003_0220e8c4(o->unk_8ec, l.t1.x, l.t1.z);
    o->unk_7d0 = func_020e7b98(l.t1.x - o->unk_5c, l.t1.z - o->unk_64);
}
}

namespace ns_0220e030 {
extern "C" s32 func_ov003_0220e804(Obj *o, s16 a) {
    s32 x, z;
    struct { V3 v1, v2; } l;
    func_ov003_0220e8bc(o->unk_8ec, &x, &z);
    s32 y = o->unk_60;
    l.v1.x = x;
    l.v1.y = y;
    l.v1.z = z;
    l.v2.x = x;
    l.v2.y = y;
    l.v2.z = z;
    return func_ov003_0220e8cc(o, &l.v2, 6, a);
}
}

namespace ns_0220e030 {
extern "C" s32 func_ov003_0220e7d8(Obj *o) {
    func_02010914(o);
    if (func_020565e8(o->unk_2cc, 0x11)) {
        func_0200ecdc(o, 0x849);
    }
}
}

namespace ns_0220e030 {
extern "C" s32 func_ov003_0220e7c8(Obj *o) {
    return func_0200f504(o, o->unk_7d0);
}
}

namespace ns_0220e030 {
extern "C" s32 func_ov003_0220e784(Obj *o) {
    if (func_02056654(o->unk_2cc)) {
        func_ov003_0220e58c(o, 6, -1);
        if (func_020729bc(data_020cbb18, o->unk_7fc)) {
            func_0203a584();
        }
    }
}
}

namespace ns_0220e030 {
extern "C" s32 func_ov003_0220e6e8(Obj *o) {
    if (func_020729bc(data_020cbb18, o->unk_7fc)) {
        s32 t;
        func_ov003_0220e7c8(o);
        func_ov003_0220e7d8(o);
        func_020109c4(o);
        func_0201071c(o);
        t = func_02010d5c(o->unk_98, 0, 0x171);
        func_02010a34(o, &t);
        func_ov003_0220e784(o);
    } else {
        s32 t2;
        func_ov003_0220e7d8(o);
        if (func_0200ef08(o)) {
            func_020109c4(o);
        }
        func_0201071c(o);
        t2 = func_02010d5c(o->unk_98, 0, 0x171);
        func_02010a34(o, &t2);
        func_ov003_0220e784(o);
    }
}
}

namespace ns_0220e030 {
extern "C" s32 func_ov003_0220e6b0(Obj *o, s32 a, s16 b) {
    Msg m;
    _ZN12Unk_0200e2c013func_0200e2c0Eiis(&m, 0x4e, a, b);
    s32 r = func_0200e248(o, &m);
    return r;
}
}

namespace ns_0220e030 {
extern "C" s32 func_ov003_0220e688(Obj *o) {
    func_02010358(o, 0x53, 3, 0);
    func_0205e1a0(o->unk_59c, 0x16, 3, 0);
}
}

namespace ns_0220e030 {
extern "C" s32 func_ov003_0220e67c(Obj *o, s16 a) {
    return func_ov003_0220e6b0(o, 6, a);
}
}

namespace ns_0220e030 {
extern "C" s32 func_ov003_0220e650(Obj *o) {
    func_02010914(o);
    if (func_020565e8(o->unk_2cc, 0xc)) {
        func_0200ecdc(o, 0x84a);
    }
}
}

namespace ns_0220e030 {
extern "C" s32 func_ov003_0220e610(Obj *o) {
    if (func_02056654(o->unk_2cc)) {
        o->unk_7f8 = func_02007c08(o, o->unk_7ec);
        func_0200ce98(o, 3, 1, -1);
    }
}
}

namespace ns_0220e030 {
extern "C" s32 func_ov003_0220e5c4(Obj *o) {
    func_ov003_0220e650(o);
    if (func_0200ef08(o)) {
        func_020109c4(o);
    }
    func_0201071c(o);
    s32 t = func_02010d5c(o->unk_98, 0, 0x171);
    func_02010a34(o, &t);
    func_ov003_0220e610(o);
}
}

namespace ns_0220e030 {
extern "C" s32 func_ov003_0220e58c(Obj *o, s32 a, s16 b) {
    Msg m;
    _ZN12Unk_0200e2c013func_0200e2c0Eiis(&m, 0x4f, a, b);
    s32 r = func_0200e248(o, &m);
    return r;
}
}

namespace ns_0220e030 {
extern "C" s32 func_ov003_0220e574(void *p, V3 *v, u8 c) {
    return func_02076a04(p, v->x, v->y, v->z, c);
}
}

namespace ns_0220e030 {
extern "C" void func_ov003_0220e55c(void *p, V3 *v, u8 *out) {
    func_020769dc(p, &v->x, &v->y, &v->z, out);
}
}

namespace ns_0220e030 {
extern "C" s32 func_ov003_0220e4bc(Obj *o) {
    u8 kind;
    V3 pos;
    V3 cur;
    u8 *p = o->unk_8ec;
    func_020103b4(o, 0x54, 3, 0);
    void *g = data_020cbb18;
    if (!func_020729bc(g, o->unk_7fc)) {
        func_ov003_0220e55c(p, &pos, &kind);
        if (kind == 3) {
            cur.x = pos.x;
            cur.y = pos.y;
            cur.z = pos.z;
            func_0205fae8(o->unk_5c4, &cur);
        }
    }
    func_0205e1a0(o->unk_59c, 0x17, 3, 0);
    if (func_020729bc(g, o->unk_7fc)) {
        func_ov003_0220e574(p, &o->unk_5cc, o->unk_5c8);
    }
}
}

namespace ns_0220e030 {
extern "C" s32 func_ov003_0220e490(Obj *o, s16 a) {
    s32 st = o->unk_7ec;
    if (st != 0x4d) {
        if (st == 0x4f) {
            o->unk_c80 = a;
        } else {
            func_ov003_0220e58c(o, 6, a);
        }
    }
}
}

namespace ns_0220e030 {
extern "C" s32 func_ov003_0220e43c(Obj *o, s32 a) {
    if (func_020729bc(data_020cbb18, o->unk_7fc)) {
        func_02035ba4(data_021c1b3c + 0x1c4);
    } else if (a != 0x50 && a != 0x51) {
        func_0205f92c(o->unk_5c4, 1);
    }
}
}

namespace ns_0220e030 {
extern "C" void func_ov003_0220e324(Obj *o) {
    u8 kind;
    V3 pos;
    struct { V3 cur, t2, t3; } l;
    u8 *p = o->unk_8ec;
    if (func_020729bc(data_020cbb18, o->unk_7fc)) {
        func_ov003_0220e574(p, &o->unk_5cc, o->unk_5c8);
    } else {
        func_ov003_0220e55c(p, &pos, &kind);
        u8 k = kind;
        s32 st = o->unk_5c8;
        if (st == 4) goto case4;
        if (st == 3) goto end;
        if (k == 4) {
            func_0205f92c(o->unk_5c4, k);
            l.t2 = pos;
            func_0205fae8(o->unk_5c4, &l.t2);
        } else if (st >= 6) {
            func_0205f92c(o->unk_5c4, 0);
        }
        goto end;
    case4: {
        V3 *pc = &o->unk_5cc;
        l.cur = *pc;
        s32 dx = l.cur.x - pos.x;
        s32 dz = l.cur.z - pos.z;
        if (dx * dx + dz * dz >= 0x400000) {
            l.t3 = pos;
            func_0205fae8(o->unk_5c4, &l.t3);
        }
        if (k == 5) {
            func_0205f92c(o->unk_5c4, k);
            func_0200ecdc(o, 0x84f);
            o->unk_8c0.x = pos.x;
            o->unk_8c0.y = pos.y;
            o->unk_8c0.z = pos.z;
        }
    }
    end:;
    }
}
}

namespace ns_0220e030 {
extern "C" s32 func_ov003_0220e2e4(Obj *o) {
    u16 t;
    V3 *p = &o->unk_5cc;
    s32 a = func_020e7b98(p->x - o->unk_5c, p->z - o->unk_64);
    t = o->unk_8e;
    func_02010d98(&t, a);
    func_02010a58(o, &t);
}
}

namespace ns_0220e030 {
extern "C" void func_ov003_0220e260(Obj *o) {
    if (func_0205df98(o->unk_59c) && o->unk_5fc) {
        func_0200ecdc(o, 0x84b);
        V3 *p = &o->unk_5cc;
        o->unk_8c0.x = p->x;
        o->unk_8c0.y = p->y;
        o->unk_8c0.z = p->z;
        if (func_020729bc(data_020cbb18, o->unk_7fc)) {
            func_02035bac(data_021c1b3c + 0x1c4);
        }
    }
}
}

namespace ns_0220e030 {
extern "C" s32 func_ov003_0220e1c0(Obj *o) {
    func_ov003_0220e260(o);
    if (func_0205df98(o->unk_59c)) {
        if (func_0200ec44(o, 0xb)) {
            if (func_0205fbb8(o->unk_5c4)) {
                func_ov003_022236dc();
            } else {
                func_ov003_02220db0(&o->unk_5cc, 0x1000);
            }
            func_ov003_0220dff0(o, 0, 6, -1);
        } else {
            if (o->unk_13c != 0 || func_020b60b0(func_020b50b4(), 0)) {
                if (func_0205fb88(o->unk_5c4)) {
                    func_ov003_0220e12c(o, 6, -1);
                } else {
                    func_ov003_0220dff0(o, 0, 6, -1);
                }
            }
        }
    }
}
}

namespace ns_0220e030 {
extern "C" s32 func_ov003_0220e164(Obj *o) {
    func_02010914(o);
    func_ov003_0220e324(o);
    func_0200ef08(o);
    func_ov003_0220e2e4(o);
    func_0201071c(o);
    if (func_020729bc(data_020cbb18, o->unk_7fc)) {
        func_ov003_0220e1c0(o);
    } else {
        o->unk_7f8 = func_02007c08(o, o->unk_7ec);
    }
}
}

namespace ns_0220e030 {
extern "C" s32 func_ov003_0220e12c(Obj *o, s32 a, s16 b) {
    Msg m;
    _ZN12Unk_0200e2c013func_0200e2c0Eiis(&m, 0x50, a, b);
    s32 r = func_0200e248(o, &m);
    return r;
}
}

namespace ns_0220e030 {
extern "C" s32 func_ov003_0220e0e4(Obj *o) {
    func_020103b4(o, 0x55, 3, 0);
    func_0205e1a0(o->unk_59c, 0x18, 3, 0);
    if (func_020729bc(data_020cbb18, o->unk_7fc)) {
        func_02034dd0(0x12, 0, 0);
    }
}
}

namespace ns_0220e030 {
extern "C" s32 func_ov003_0220e0d8(Obj *o, s16 a) {
    return func_ov003_0220e12c(o, 6, a);
}
}

namespace ns_0220e030 {
extern "C" s32 func_ov003_0220e054(Obj *o) {
    V3 *p = &o->unk_5cc;
    volatile s32 pad;
    if (func_020729bc(data_020cbb18, o->unk_7fc)) {
        switch (func_0205fb70(o->unk_5c4)) {
        case 0:
            func_0200ec54(o, 0x7f6, p);
            break;
        case 1:
            func_ov003_0220de60(o, 6, -1);
            func_02034d70(0x12);
            break;
        case 2:
            func_ov003_0220dd28(o, 6, -1);
            break;
        }
    } else {
        func_0200ec54(o, 0x7f6, p);
    }
}
}

namespace ns_0220e030 {
extern "C" s32 func_ov003_0220e034(Obj *o) {
    func_02010914(o);
    func_0200ef08(o);
    func_0201071c(o);
    func_ov003_0220e054(o);
}
}

namespace ns_0220e030 {
extern "C" void func_ov003_0220e030(u8 *p, u32 v) {
    *p = v;
}
}

namespace ns_0220d6f4 {
extern "C" s32 func_ov003_0220dff0(Obj *o, u32 a, s32 b, s16 c) {
    Msg m;
    _ZN12Unk_0200e2c013func_0200e2c0Eiis(&m, 0x51, b, c);
    func_ov003_0220e030(m.v_0220d6f4.unk_0c, a);
    s32 r = func_0200e248(o, &m);
    return r;
}
}

namespace ns_0220d6f4 {
extern "C" void func_ov003_0220dfec(u8 *p, u32 v) {
    *p = v;
}
}

namespace ns_0220d6f4 {
extern "C" void func_ov003_0220dfe8(u8 *p, u32 v) {
    *p = v;
}
}

namespace ns_0220d6f4 {
extern "C" void func_ov003_0220dfe0(u8 *p, u8 *out) {
    *out = *p;
}
}

namespace ns_0220d6f4 {
extern "C" void func_ov003_0220df3c(Obj *o, u8 *p) {
    u32 b = p[0xc];
    func_ov003_0220dfec((u8 *)&o->unk_7d0, b);
    func_ov003_0220dfe8(&o->unk_8ec, b);
    func_02010358(o, 0x56, 3, 0);
    func_0205e1a0(o->unk_59c, 0x19, 3, 0);
    func_0200ecdc(o, 0x84c);
    func_0200ecdc(o, 0x84e);
    s32 *q = (s32 *)(o->unk_5c4 + 8);
    o->unk_8c0 = q[0];
    o->unk_8c4 = q[1];
    o->unk_8c8 = q[2];
    if (func_020729bc(data_020cbb18, o->unk_7fc)) func_0203a844();
}
}

namespace ns_0220d6f4 {
extern "C" void func_ov003_0220df10(Obj *o, s16 a) {
    u8 t;
    func_ov003_0220dfe0(&o->unk_8ec, &t);
    func_ov003_0220dff0(o, t, 6, a);
}
}

namespace ns_0220d6f4 {
extern "C" void func_ov003_0220deb8(Obj *o) {
    if (func_02056654(o->unk_2cc)) {
        o->unk_7f8 = func_02007c08(o, o->unk_7ec);
        if (*(u8 *)&o->unk_7d0) {
            func_020085f0(o, 5, -1);
        } else {
            func_0200ce98(o, 3, 1, -1);
        }
    }
}
}

namespace ns_0220d6f4 {
extern "C" void func_ov003_0220de98(Obj *o) {
    func_02010914(o);
    func_0200ef08(o);
    func_0201071c(o);
    func_ov003_0220deb8(o);
}
}

namespace ns_0220d6f4 {
extern "C" s32 func_ov003_0220de60(Obj *o, s32 a, s16 b) {
    Msg m;
    _ZN12Unk_0200e2c013func_0200e2c0Eiis(&m, 0x52, a, b);
    s32 r = func_0200e248(o, &m);
    return r;
}
}

namespace ns_0220d6f4 {
extern "C" void func_ov003_0220de2c(Obj *o) {
    func_02010a34(o, (s32 *)data_ov003_02230aec);
    func_02010358(o, 0x57, 3, 0);
    func_0205e1a0(o->unk_59c, 0x1a, 3, 0);
}
}

namespace ns_0220d6f4 {
extern "C" s32 func_ov003_0220de20(Obj *o, s16 a) {
    return func_ov003_0220de60(o, 6, a);
}
}

namespace ns_0220d6f4 {
extern "C" void func_ov003_0220ddb4(Obj *o) {
    if (func_02056654(o->unk_2cc)) {
        if (func_020729bc(data_020cbb18, o->unk_7fc)) func_0203a844();
        o->unk_7f8 = func_02007c08(o, o->unk_7ec);
        func_0200ce98(o, 3, 1, -1);
        func_0205e1a0(o->unk_59c, 0x13, 3, 0);
    }
}
}

namespace ns_0220d6f4 {
extern "C" void func_ov003_0220dd60(Obj *o) {
    s32 t;
    func_02010914(o);
    if (func_0200ef08(o)) func_020109c4(o);
    func_0201071c(o);
    s32 v = o->unk_98;
    if (v < 0) v = -v;
    t = func_02010d5c(v, 0, 0xc5) * -1;
    func_02010a34(o, &t);
    func_ov003_0220ddb4(o);
}
}

namespace ns_0220d6f4 {
extern "C" s32 func_ov003_0220dd28(Obj *o, s32 a, s16 b) {
    Msg m;
    _ZN12Unk_0200e2c013func_0200e2c0Eiis(&m, 0x53, a, b);
    s32 r = func_0200e248(o, &m);
    return r;
}
}

namespace ns_0220d6f4 {
extern "C" void func_ov003_0220dcc4(Obj *o) {
    func_02010358(o, 0x58, 3, 0);
    func_0205e1a0(o->unk_59c, 0x1b, 3, 1);
    func_0200ecdc(o, 0x84c);
    func_0200ecdc(o, 0x84e);
    s32 *p = (s32 *)(o->unk_5c4 + 8);
    o->unk_8c0 = p[0];
    o->unk_8c4 = p[1];
    o->unk_8c8 = p[2];
}
}

namespace ns_0220d6f4 {
extern "C" s32 func_ov003_0220dcb8(Obj *o, s16 a) {
    return func_ov003_0220dd28(o, 6, a);
}
}

namespace ns_0220d6f4 {
extern "C" void func_ov003_0220dc80(Obj *o) {
    if (func_02056654(o->unk_2cc)) {
        if (func_0205fb34(o->unk_5c4)) func_ov003_0220dc0c(o, 0, 6, -1);
    }
}
}

namespace ns_0220d6f4 {
extern "C" void func_ov003_0220dc48(Obj *o) {
    func_02010914(o);
    func_0200ef08(o);
    func_0201071c(o);
    if (func_020729bc(data_020cbb18, o->unk_7fc)) func_ov003_0220dc80(o);
}
}

namespace ns_0220d6f4 {
extern "C" s32 func_ov003_0220dc0c(Obj *o, u32 a, s32 b, s16 c) {
    Msg m;
    _ZN12Unk_0200e2c013func_0200e2c0Eiis(&m, 0x54, b, c);
    m.v_0220d6f4.unk_0c[0] = a;
    s32 r = func_0200e248(o, &m);
    return r;
}
}

namespace ns_0220d6f4 {
extern "C" void func_ov003_0220dc08(u8 *p, u32 v) {
    *p = v;
}
}

namespace ns_0220d6f4 {
extern "C" void func_ov003_0220dc00(u8 *p, u8 *out) {
    *out = *p;
}
}

namespace ns_0220d6f4 {
extern "C" void func_ov003_0220db5c(Obj *o, u8 *p) {
    u32 b = p[0xc];
    Rec *r = &o->unk_7d0;
    r->unk_04 = b;
    r->unk_00 = 0x39;
    r->unk_05 = func_0203c338();
    if (b == 0) {
        if (func_020729bc(data_020cbb18, o->unk_7fc)) {
            Act *a = func_0205fbb8(o->unk_5c4);
            s8 v = a->unk_7e;
            r->unk_03 = v;
            if (v < 0x38) {
                func_02078840((u8 *)o + 0x5c);
                func_0208a578();
                func_0208c114();
            }
        }
        r->unk_02 = 0;
        func_02010358(o, 0x59, 3, 0);
        func_0205e1a0(o->unk_59c, 0x1c, 3, 1);
    } else {
        r->unk_02 = 2;
        r->unk_00 = 0x3a;
        o->unk_818 = 8;
    }
    func_ov003_0220dc08(&o->unk_8ec, b);
}
}

namespace ns_0220d6f4 {
extern "C" void func_ov003_0220db30(Obj *o, s16 a) {
    u8 t;
    func_ov003_0220dc00(&o->unk_8ec, &t);
    func_ov003_0220dc0c(o, t, 6, a);
}
}

namespace ns_0220d6f4 {
extern "C" void func_ov003_0220d6f4(Obj *o) {
    Rec *r6;
    u8 *r5;
    Act *a;
    struct {
        u16 pad0;
        u16 t;
        u32 pad1;
    } tmp;
    u32 buf[2];
    Blk b;
    V3 v48;
    V3 v54;
    V3 v60;
    V3 v6c;
    V3 v78;
    func_0200f4c0(o, 0x400);
    r6 = &o->unk_7d0;
    a = func_0205fbb8(o->unk_5c4);
    if (a) {
        b = o->unk_694;
        func_ov003_02223450(&v54, a->unk_7e);
        v48.x = 0x4cd;
        v48.y = 0;
        v48.z = 0;
        u32 m = o->unk_2d4.mid;
        if (r6->unk_04 != 0) {
            v48.x = 0x800;
            v48.y = 0x19a;
            v48.z = -0x19a;
        } else if ((s32)m >= 0x10) {
            s32 q = (s32)((m - 15) * 0x19a) / (s32)(o->unk_2d0.mid - 0x10);
            v48.x = v48.x + q * 2;
            v48.y = v48.y + q;
            v48.z = v48.z - q;
        }
        func_ov003_02212034(&b, &v48);
        v60.x = b.v[9];
        v60.y = b.v[10];
        v60.z = b.v[11];
        func_0203ee38(&v60, &v60);
        v6c.x = v60.x;
        v6c.y = v60.y;
        v6c.z = v60.z;
        v78.x = v54.x;
        v78.y = v54.y;
        v78.z = v54.z;
        func_ov003_02223400(a, &v6c, &v78);
    }
    r5 = &r6->unk_02;
    if (o->unk_700 == 0x59) {
        if (func_020565e8(o->unk_2cc, 3)) func_0203a598();
    }
    if (o->unk_2d4.mid < 0x11 && *r5 < 5 && r6->unk_04 == 0) return;
    switch (*r5) {
    case 0:
        if (func_0203d820()) {
            *r5 = 1;
            func_0203e488(o, o);
            func_0200ec30(o, 0x11);
            Sec &s = *o;
            func_020a710c(&s, (void *)"obj_etc_getfish");
            u32 v = r6->unk_03;
            o->unk_10a = v;
            tmp.t = v + 0x12e8;
            func_0203c2d0(&tmp.t);
            o->unk_81c = o->unk_81e = tmp.t;
            o->unk_128->unk_08 = 1;
            func_02034d70(0x12);
            func_02034dd0(0xc, 0, 4);
            func_02034e10(0xd, 0x39, 0x7f, 1);
        }
    case 1:
        if (o->unk_128 == 0) return;
        if (o->unk_128->unk_04 == 0) return;
        if (func_0203c338() && r6->unk_05 == 0) {
            *r5 = 5;
            o->unk_818 = 0xe;
        } else {
            *r5 = 2;
            o->unk_818 = 8;
        }
        return;
    case 2: {
        s32 c = func_02098ffc();
        if (c == -1) {
            buf[0] = 0;
            buf[1] = 0;
            if (func_020429d0(0x10, buf)) {
                *r5 = 3;
                BOOL in = FALSE;
                u32 h = o->unk_81c;
                if (h >= 0x1320 && h <= 0x1322) in = TRUE;
                if (in) {
                    o->unk_818 = 4;
                } else {
                    o->unk_818 = 0;
                }
            } else {
                *r5 = 4;
                o->unk_818 = 1;
            }
        } else {
            if (o->unk_128 == 0) return;
            if (o->unk_128->unk_04 != 0) return;
            func_0203e47c(o, o);
            func_0200ec1c(o, 0x11);
            func_0203d7f8();
            func_ov003_0220d5cc(o, 0, 6, -1);
            func_0203a844();
        }
        return;
    }
    case 3:
        if (o->unk_818 >= 0xf) {
            BOOL in = FALSE;
            u32 h = o->unk_81c;
            if (h >= 0x1320 && h <= 0x1322) in = TRUE;
            if (in) {
                *r5 = 6;
                if (o->unk_80c != -1) return;
                o->unk_80c = func_02042bbc(o->unk_7fc, o->unk_81c);
                if (o->unk_80c == -1) return;
                *r5 = 4;
            } else {
                *r5 = 4;
            }
        } else {
            if (o->unk_128 == 0) return;
            if (o->unk_128->unk_04 != 0) return;
            func_0203e47c(o, o);
            func_0200ec1c(o, 0x11);
            func_ov003_0220d5cc(o, 1, 6, -1);
            func_0203a844();
        }
        return;
    case 4:
        if (o->unk_128 == 0) return;
        if (o->unk_128->unk_04 != 0) return;
        func_0205fb08(o->unk_5c4);
        func_0203e47c(o, o);
        func_0200ec1c(o, 0x11);
        func_0203d7f8();
        o->unk_7f8 = func_02007c08(o, o->unk_7ec);
        func_ov003_02205e58(o, data_ov003_02230ac0, 0, 6, -1);
        func_0203a844();
        return;
    case 5:
        if (o->unk_128 == 0) return;
        if (o->unk_128->unk_04 != 0) return;
        func_0203e47c(o, o);
        func_0200ec1c(o, 0x11);
        func_0203d7f8();
        func_02008e50(o, 1, r6->unk_03, 0, 6, -1);
        return;
    case 6:
        if (o->unk_80c != -1) return;
        o->unk_80c = func_02042bbc(o->unk_7fc, o->unk_81c);
        if (o->unk_80c == -1) return;
        *r5 = 4;
        return;
    }
}
}

namespace ns_0220cd4c {
extern "C" void func_ov003_0220d608(Obj *o) {
    func_02010914(o);
    volatile Unk_ov003_0220cd4c_P3 sv;
    V3 *pv = &o->unk_c4;
    sv.x = pv->x;
    sv.y = pv->y;
    sv.z = pv->z;
    s16 h = o->unk_d0;
    Blk b0 = o->unk_294;
    Blk b1 = o->unk_694;
    func_0200e7f4(o);
    func_0200ef08(o);
    func_0201071c(o);
    if (func_020729bc(data_020cbb18, o->unk_7fc)) {
        func_ov003_0220d6f4(o);
    } else {
        o->unk_7f8 = func_02007c08(o, o->unk_7ec);
        func_0200f4c0(o, 0x400);
    }
    o->unk_c4.x = sv.x;
    o->unk_c4.y = sv.y;
    o->unk_c4.z = sv.z;
    o->unk_d0 = h;
    o->unk_294 = b0;
    o->unk_694 = b1;
}
}

namespace ns_0220cd4c {
extern "C" s32 func_ov003_0220d5cc(Obj *o, u32 a, s32 b, s32 c) {
    Msg m;
    _ZN12Unk_0200e2c013func_0200e2c0Eiis(&m, 0x55, b, c);
    *(u8 *)((u8 *)&m + 0xc) = a;
    s32 r = func_0200e248(o, &m);
    return r;
}
}

namespace ns_0220cd4c {
extern "C" void func_ov003_0220d5c8(u8 *p, u32 v) {
    *p = v;
}
}

namespace ns_0220cd4c {
extern "C" u32 func_ov003_0220d5c4(u8 *p) {
    return *p;
}
}

namespace ns_0220cd4c {
extern "C" void func_ov003_0220d590(Obj *o, u8 *b) {
    u8 v = b[0xc];
    o->unk_7d0.unk_00 = v;
    func_ov003_0220d5c8(&o->unk_8ec, v);
    func_02010358(o, 0x5a, 3, 3);
    func_0200ecdc(o, 0x4f);
}
}

namespace ns_0220cd4c {
extern "C" s32 func_ov003_0220d568(Obj *o, s16 a) {
    return func_ov003_0220d5cc(o, func_ov003_0220d5c4(&o->unk_8ec), 6, a);
}
}

namespace ns_0220cd4c {
extern "C" void func_ov003_0220d114(Obj *o) {
    u16 v[4];
    V3 vf;
    Blk bl;
    V3 v48;
    Act *p5 = func_0205fbb8(o->unk_5c4);
    s32 f;
    if (o->unk_700 == 0x5a) {
        f = *(s32 *)&o->unk_2d4 >> 12;
        if ((u16)f < 6) {
            if (p5) {
                s32 k = (s32)((u32)data_ov003_022349e6[p5->unk_1ff * 20] << 12) / 100;
                f = (s16)(k - k * (u16)f / 6);
            } else {
                f = (s16)(0x1000 - (u16)f * 0x2ab);
            }
        } else {
            f = 0;
        }
    } else {
        f = 0;
    }
    vf.x = f;
    vf.y = f;
    vf.z = f;
    bl = o->unk_694;
    func_ov003_02212034(&bl, 0);
    v48.x = ((V3 *)&bl.v[9])->x;
    v48.y = ((V3 *)&bl.v[9])->y;
    v48.z = ((V3 *)&bl.v[9])->z;
    v[0] = 0xfff1;
    if (p5) {
        V3 a, b;
        func_0203ee38(&v48, &v48);
        a.x = v48.x;
        a.y = v48.y;
        a.z = v48.z;
        b.x = vf.x;
        b.y = vf.y;
        b.z = vf.z;
        func_ov003_02223400(p5, &a, &b);
        v[0] = p5->unk_7e + 0x12e8;
        if (f == 0) func_ov003_02223258(o->unk_7fc);
    }
    u8 *r6 = &o->unk_7d0.unk_00;
    u8 *r7 = &o->unk_8ec;
    switch (*r6) {
    case 0:
        if (!func_02056654(o->unk_2cc)) return;
        o->unk_7f8 = func_02007c08(o, o->unk_7ec);
        func_0200ce98(o, 6, 1, -1);
        if (func_020729bc(data_020cbb18, o->unk_7fc)) {
            v[3] = v[0];
            func_02099124(&v[3]);
        }
        func_0205fb20(o->unk_5c4);
        break;
    case 1:
        if (o->unk_700 == 0x5a) {
            if (!func_02056654(o->unk_2cc)) return;
            func_020103b4(o, 0x6c, 6, 6);
            func_0205e1a0(o->unk_59c, 0x13, 6, 0);
        }
        if (func_020729bc(data_020cbb18, o->unk_7fc)) {
            if (o->unk_818 == 5) {
                if (!func_0206e7a4(v[0], p5)) return;
                o->unk_818 = 6;
            } else if (o->unk_818 == 6) {
                if (!func_0206ec6c()) return;
                o->unk_818 = 0xf;
                if (func_0206ed18()) {
                    func_0205fbbc(o->unk_5c4, 0);
                    if (func_0200ec44(o, 0x11)) {
                        func_0200ec1c(o, 0x11);
                        func_0203e47c(o, o);
                    }
                    func_0203d7f8();
                    v[1] = func_0206e750();
                    o->unk_7f8 = func_02007c08(o, o->unk_7ec);
                    if (Rng(&v[1], 0x12e8, 0x131f)) {
                        func_ov003_02205e58(o, data_ov003_02230ac4, 0, 6, -1);
                    } else {
                        func_0200ce98(o, 6, 1, -1);
                        *r6 = 2;
                    }
                    return;
                }
                goto l378;
            } else if (o->unk_818 >= 0xf) {
            l378:
                if (Rng(&v[0], 0x1320, 0x1322)) {
                    *r6 = 3;
                    if (o->unk_80c == -1) {
                        o->unk_80c = func_02042bbc(o->unk_7fc, v[0]);
                        if (o->unk_80c != -1) *r6 = 2;
                    }
                } else {
                    if (p5) {
                        V3 a, b;
                        func_ov003_02223450(&vf, p5->unk_7e);
                        a.x = v48.x;
                        a.y = v48.y;
                        a.z = v48.z;
                        b.x = vf.x;
                        b.y = vf.y;
                        b.z = vf.z;
                        func_ov003_02223400(p5, &a, &b);
                    }
                    func_ov003_02205e58(o, data_ov003_02230ac8, 0, 6, -1);
                    func_ov003_0220d5c8(r7, 2);
                }
                func_0205fb08(o->unk_5c4);
                if (func_0200ec44(o, 0x11)) {
                    func_0200ec1c(o, 0x11);
                    func_0203e47c(o, o);
                }
                func_0203d7f8();
            }
        } else {
            o->unk_7f8 = func_02007c08(o, o->unk_7ec);
            if (func_ov003_0220d5c4(r7) == 2) {
                if (p5) {
                    V3 a, b;
                    func_ov003_02223450(&vf, p5->unk_7e);
                    a.x = v48.x;
                    a.y = v48.y;
                    a.z = v48.z;
                    b.x = vf.x;
                    b.y = vf.y;
                    b.z = vf.z;
                    func_ov003_02223400(p5, &a, &b);
                }
                func_0205fb08(o->unk_5c4);
                *r6 = 2;
                func_020103b4(o, 0, 6, 6);
            }
        }
        break;
    case 2:
        o->unk_7f8 = func_02007c08(o, o->unk_7ec);
        func_0200ce98(o, 6, 1, -1);
        break;
    case 3:
        if (o->unk_80c == -1) {
            o->unk_80c = func_02042bbc(o->unk_7fc, v[0]);
            if (o->unk_80c != -1) *r6 = 2;
        }
        break;
    }
}
}

namespace ns_0220cd4c {
extern "C" void func_ov003_0220d0c4(Obj *o) {
    if (func_02056654(o->unk_2cc)) {
        o->unk_7f8 = func_02007c08(o, o->unk_7ec);
        func_020103b4(o, 0x6c, 6, 6);
        func_0205e1a0(o->unk_59c, 0x13, 6, 0);
    }
}
}

namespace ns_0220cd4c {
extern "C" void func_ov003_0220d084(Obj *o) {
    func_02010914(o);
    func_0200ef08(o);
    func_0201071c(o);
    if (func_020729bc(data_020cbb18, o->unk_7fc)) {
        func_ov003_0220d114(o);
    } else {
        func_ov003_0220d0c4(o);
    }
}
}

namespace ns_0220cd4c {
extern "C" s32 func_ov003_0220d00c(Obj *o, s32 a, s32 b) {
    Msg m;
    u16 *p = (u16 *)&m.v_0220cd4c.unk_0c;
    _ZN12Unk_0200e2c013func_0200e2c0Eiis(&m, 0x56, a, b);
    if (o->unk_140 == 2) {
        *p = func_020e7b98(o->unk_148 - o->unk_6f0, o->unk_150 - o->unk_6f8);
    } else {
        *p = o->unk_8e;
    }
    s32 r = func_0200e248(o, &m);
    return r;
}
}

namespace ns_0220cd4c {
extern "C" void func_ov003_0220cfcc(Obj *o, u8 *b) {
    Unk_ov003_0220cd4c_Rec *r = &o->unk_7d0;
    u32 z = 0;
    r->unk_00 = z;
    r->unk_02 = *(s16 *)(b + 0xc);
    r->unk_04 = 0xff;
    func_02010358(o, 0x5b, 3, z);
    func_0205e1a0(o->unk_59c, 3, 3, 0);
}
}

namespace ns_0220cd4c {
extern "C" s32 func_ov003_0220cfc0(Obj *o, s16 b) {
    return func_ov003_0220d00c(o, 6, b);
}
}

namespace ns_0220cd4c {
extern "C" void func_ov003_0220cf78(Obj *o) {
    BOOL r;
    if (func_02056654(o->unk_2cc))
        r = TRUE;
    else
        r = FALSE;
    func_02010914(o);
    if (r == 0) {
        if (func_02056654(o->unk_2cc)) func_0200ecdc(o, 0x848);
    }
}
}

namespace ns_0220cd4c {
extern "C" void func_ov003_0220cf68(Obj *o) {
    func_0200f504(o, *(s16 *)((u8 *)o + 0x7d2));
}
}

namespace ns_0220cd4c {
extern "C" void func_ov003_0220cf30(Obj *o) {
    V3 v;
    func_0200f43c(&v, o);
    func_02010740(o, &v, 0x99a, 0x1000);
    func_02089040((u8 *)o + 0x1c0);
}
}

namespace ns_0220cd4c {
extern "C" void func_ov003_0220cd4c(Obj *o) {
    struct {
        u8 a, b, c, pad;
        volatile u16 w;
    } st;
    V3 v0c, v18, v24, v30, v3c;
    volatile Unk_ov003_0220cd4c_P3 v48;
    V3 v54;
    Unk_ov003_0220cd4c_Rec *r5;
    if (o->unk_2dc == 0) return;
    if (func_02056654(o->unk_2cc)) return;
    if (o->unk_2d4.mid < 3) return;
    st.a = 0;
    st.b = 0;
    v0c = V3(o->unk_688, o->unk_68c, o->unk_690);
    func_0203ee38(&v0c, &v0c);
    v18.x = v0c.x;
    v18.y = v0c.y;
    v18.z = v0c.z;
    func_ov003_0220cbc8(o, &v18, &v24, &v30);
    r5 = &o->unk_7d0;
    if (r5->unk_00 == 0 && o->unk_2d4.mid < 6) {
        func_02010a7c((u16 *)&st.w, o);
        s32 id;
        if (Rng(&st.w, 0x1376, 0x1376))
            id = 0xa00;
        else
            id = 0xd1f;
        if (func_02088a20(&v18, &v24, id, &st.c, 0)) {
            st.a = 1;
            func_ov003_02227e08(&v3c, st.c);
            st.b = func_ov003_02227e40(st.c);
            if (st.b != 0) v3c.z += 0x100;
        }
    }
    switch (func_ov003_0220ca70(o, &st.a, &v3c, &st.b)) {
    case 1:
        if (func_ov003_02226d54(st.c) == 0) return;
        r5->unk_00 = 1;
        r5->unk_04 = st.c;
        func_0200ecdc(o, 0x847);
        return;
    case 2:
        return;
    case 3:
        if (r5->unk_00 != 0) return;
        r5->unk_00 = 1;
        r5->unk_04 = 0xff;
        func_0200ecdc(o, 0x847);
        return;
    case 0:
    default:
        break;
    }
    v54.x = v0c.x;
    v54.y = v0c.y;
    v54.z = v0c.z;
    s32 r = func_ov003_0220c768(o, &v54, &v24, &v30);
    if (st.a == 0) return;
    s32 ang;
    if (r) {
        s32 dx = v3c.x - v30.x;
        v48.x = dx;
        s32 dz = v3c.z - v30.z;
        v48.z = dz;
        ang = func_020e7b98(dx, dz);
    } else {
        ang = 0x7fff;
    }
    if (func_020e780c(ang, 0) > 0x4000) {
        if (func_ov003_02226d54(st.c) == 0) return;
        r5->unk_00 = 1;
        r5->unk_04 = st.c;
        func_0200ecdc(o, 0x847);
    }
}
}

namespace ns_0220c448 {
extern "C" void func_ov003_0220cbc8(Obj *o, V3 *a, V3 *b, V3 *out) {
    V3 *pos = &o->unk_5c;
    b->x = pos->x;
    b->y = pos->y;
    b->z = pos->z;
    s32 idx = (o->unk_8e >> 4) * 2;
    s32 sn = data_02135f44[idx];
    s32 cs = data_02135f44[idx + 1];
    switch (o->unk_2d4.mid) {
    case 3:
        func_0200ecdc(o, 0x845);
        a->y += 0x1dd3;
        b->x += func_01ffcb0c(sn, 0x1e66);
        b->y += 0x24cd;
        b->z += func_01ffcb0c(cs, 0x1e66);
        break;
    case 4:
        a->x = pos->x;
        a->y = pos->y;
        a->z = pos->z;
        a->x += func_01ffcb0c(sn, 0x1e66);
        a->y += 0x24cd;
        a->z += func_01ffcb0c(cs, 0x1e66);
        b->x += func_01ffcb0c(sn, 0x2a66);
        b->z += func_01ffcb0c(cs, 0x2a66);
        break;
    case 5:
        a->x = pos->x;
        a->y = pos->y;
        a->z = pos->z;
        a->x += func_01ffcb0c(sn, 0x2a66);
        a->z += func_01ffcb0c(cs, 0x2a66);
        b->x += func_01ffcb0c(sn, 0x2800);
        b->y -= 0x666;
        b->z += func_01ffcb0c(cs, 0x2800);
        break;
    }
    Unk_ov003_0220c448_Blk l = o->unk_604;
    V3 t(l.v[9], l.v[10], l.v[11]);
    func_0203ee38(&t, &t);
    *out = t;
}
}

namespace ns_0220c448 {
extern "C" s32 func_ov003_0220ca70(Obj *o, u8 *a, V3 *b, u8 *c) {
    V3 v;
    s32 t;
    if (func_020565e8(o->unk_2cc, 4)) {
        if (func_ov003_022052f4(o)) {
            func_0200ec30(o, 9);
            func_0200ecdc(o, 0x846);
            o->unk_2dc = 0;
            func_0205e1a0(o->unk_59c, 4, 3, 1);
            if (o->unk_168 == 4) {
                return 3;
            }
            if (a[0] != 0) {
                return 1;
            }
            return 2;
        }
        func_0200f3ec(&v, o, &o->unk_5c, &o->unk_8e, data_ov003_02230adc);
        func_0204edd8(&v, &v);
        if (func_0203081c(&v, &t, 0x19) >= 0x400) {
            func_0200ec30(o, 9);
            func_0200ecdc(o, 0x846);
            o->unk_2dc = 0;
            func_0205e1a0(o->unk_59c, 4, 3, 1);
            if (a[0] != 0) {
                if (func_ov003_0220c93c(o, &v, b, c)) {
                    return 1;
                }
                return 2;
            }
            return 2;
        }
    } else if (func_020565e8(o->unk_2cc, 3)) {
        if (a[0] != 0) {
            V3 w;
            s32 u;
            func_0200f3ec(&w, o, &o->unk_5c, &o->unk_8e, data_ov003_02230ae0);
            func_0204edd8(&w, &w);
            if (func_0203081c(&w, &u, 0x19) >= 0x400) {
                if (func_ov003_0220c93c(o, &w, b, c)) {
                    return 1;
                }
                return 2;
            }
        }
    }
    return 0;
}
}

namespace ns_0220c448 {
extern "C" s32 func_ov003_0220c93c(Obj *o, V3 *a, V3 *b, u8 *c) {
    volatile V3 base;
    V3 *pv = &o->unk_5c;
    base.x = pv->x;
    base.y = pv->y;
    base.z = pv->z;
    u16 *cell = func_0204eba0(data_021c47c4, a, 0);
    if (cell) {
        if (*cell == 0x1b || *cell == 0x89) {
            return 1;
        }
    }
    if (c[0] == 0) {
        s32 a4 = func_020e7b98(b->x - base.x, b->z - base.z);
        s32 a5 = func_020e7b98(a->x - base.x, a->z - base.z);
        s32 t1 = (s16)func_020e780c(a4, 0);
        s32 t2 = (s16)func_020e780c(a5, 0);
        if (t1 == t2) {
            s32 z = b->z;
            s32 bz = base.z;
            if ((bz >= z && z > a->z) || (bz <= z && z < a->z)) {
                return 1;
            }
            return 0;
        }
        if ((t1 >= 0x4000 && t2 > t1) || (t2 < 0x4000 && t2 <= t1)) {
            return 1;
        }
        s32 dx = a->x - base.x;
        s32 dz = a->z - base.z;
        s32 d2 = dx * dx + dz * dz;
        s16 k = data_02135f44[(((u16)(s16)(t1 - t2)) >> 4) * 2 + 1];
        s32 q = func_01ffcb0c(d2, k);
        q = func_01ffcb0c(q, k);
        if (d2 - q < 0x900000) {
            return 0;
        }
        return 1;
    } else {
        s32 z = b->z;
        s32 bz = base.z;
        if ((bz >= z && z > a->z) || (bz <= z && z < a->z)) {
            return 1;
        }
        return 0;
    }
}
}

namespace ns_0220c448 {
extern "C" s32 func_ov003_0220c888(Obj *o) {
    V3 v;
    s32 t;
    if (func_020565e8(o->unk_2cc, 4)) {
        if (func_ov003_022052f4(o)) {
            func_0200ec30(o, 9);
            func_0200ecdc(o, 0x846);
            o->unk_2dc = 0;
            func_0205e1a0(o->unk_59c, 4, 3, 1);
            return 1;
        }
        func_0200f3ec(&v, o, &o->unk_5c, &o->unk_8e, data_ov003_02230ad4);
        if (func_0203081c(&v, &t, 0x19) >= 0x400) {
            func_0200ec30(o, 9);
            func_0200ecdc(o, 0x846);
            o->unk_2dc = 0;
            func_0205e1a0(o->unk_59c, 4, 3, 1);
            return 1;
        }
    }
    return 0;
}
}

namespace ns_0220c448 {
extern "C" s32 func_ov003_0220c768(Obj *o, V3 *a, V3 *b, V3 *c) {
    Unk_ov003_0220c768_A l;
    func_02032228(&l);
    s32 x, y;
    if (func_02030908(&l, c, a, 0x1b)) {
    L_ok:
        func_0200ec30(o, 9);
        func_0200ecdc(o, 0x846);
        o->unk_2dc = 0;
        func_0205e1a0(o->unk_59c, 4, 3, 1);
        if (func_020565e8(o->unk_2cc, 5)) {
            Unk_ov003_0220c448_Pair p;
            x = 0;
            y = 0;
            func_0204ee10(&x, &y, c);
            p.a = x;
            p.b = y;
            func_02043f04(&p);
        }
        if (o->unk_2d4.mid <= 4) {
            func_02032218(&l);
            return 1;
        }
    } else {
        if (func_020565e8(o->unk_2cc, 5) == 0) {
            goto end0;
        }
        if (func_020729bc(data_020cbb18, o->unk_7fc) == 0) {
            Unk_ov003_0220c768_B q;
            func_020339bc(&q, b, 0, 0);
            if (q.unk_30 == 0) {
                *c = *b;
                func_02033988(&q);
                goto L_ok;
            }
            func_02033988(&q);
        }
        func_02090330(0xb, b, 0, 0);
        func_0200ec30(o, 9);
        func_0205e1a0(o->unk_59c, 4, 3, 1);
    }
end0:
    func_02032218(&l);
    return 0;
}
}

namespace ns_0220c448 {
extern "C" void func_ov003_0220c6e0(Obj *o) {
    if (o->unk_2dc != 0 && o->unk_2d4.mid >= 3) {
        if (func_ov003_0220c888(o) == 0) {
            V3 a(o->unk_688, o->unk_68c, o->unk_690);
            V3 b, c, d, e;
            func_0203ee38(&a, &a);
            b = a;
            func_ov003_0220cbc8(o, &b, &c, &d);
            e = a;
            func_ov003_0220c768(o, &e, &c, &d);
        }
    }
}
}

namespace ns_0220c448 {
extern "C" void func_ov003_0220c698(Obj *o) {
    if (o->unk_98 != 0) {
        s32 t = func_02010d5c(o->unk_98, 0, 0x171);
        func_02010a34(o, &t);
        if (o->unk_98 == 0) {
            func_02090330(0x2b, &o->unk_5c, &o->unk_8e, 0);
        }
    }
}
}

namespace ns_0220c448 {
extern "C" void func_ov003_0220c5b8(Obj *o) {
    if (func_02056654(o->unk_2cc) == 0 && o->unk_2dc != 0) {
        return;
    }
    u8 *p = &o->unk_7d0;
    if (p[0] != 0) {
        u32 id = p[4];
        if (id == 0xff) {
            func_ov003_0220c4ac(o, 0, id, 0x30, 6, -1);
        } else {
            s32 r = func_ov003_02226ee8(id, (u8)o->unk_7fc);
            if (r == 0) {
                u32 t = (u8)func_ov003_02226fac(id);
                func_ov003_0220c4ac(o, 0, id, t, 6, -1);
            } else if (r == 1) {
                p[0] = 0;
            }
        }
    } else {
        if (func_02056654(func_0205dfa4(o->unk_59c) + 0x9c)) {
            o->unk_7f8 = func_02007c08(o, o->unk_7ec);
            if (func_020729bc(data_020cbb18, o->unk_7fc)) {
                func_0200ce98(o, 9, 1, -1);
            }
        }
    }
}
}

namespace ns_0220c448 {
extern "C" void func_ov003_0220c4f0(Obj *o) {
    if (func_020729bc(data_020cbb18, o->unk_7fc)) {
        func_ov003_0220cf68(o);
        func_ov003_0220cd4c(o);
        func_ov003_0220cf78(o);
        func_020109c4(o);
        func_0201071c(o);
        func_ov003_0220c698(o);
        func_ov003_0220c5b8(o);
        func_ov003_0220cf30(o);
    } else {
        func_ov003_0220c6e0(o);
        func_ov003_0220cf78(o);
        if (func_0200ef08(o)) {
            func_020109c4(o);
        }
        func_0201071c(o);
        func_ov003_0220c698(o);
        func_ov003_0220c5b8(o);
        func_ov003_0220cf30(o);
    }
    u8 *p = &o->unk_7d0;
    V3 a, b(o->unk_604.v[9], o->unk_604.v[10], o->unk_604.v[11]);
    func_0203ee38(&a, &b);
    *(V3 *)(p + 8) = a;
}
}

namespace ns_0220c448 {
extern "C" s32 func_ov003_0220c4ac(Obj *o, u32 a, u32 b, u32 c, s32 d, s16 e) {
    Msg m;
    _ZN12Unk_0200e2c013func_0200e2c0Eiis(&m, 0x57, d, e);
    Rec &q = m.v_0220c448.unk_0c;
    q.c = a;
    q.a = b;
    q.b = c;
    s32 r = func_0200e248(o, &m);
    return r;
}
}

namespace ns_0220c448 {
extern "C" void func_ov003_0220c48c(u8 *p, u32 a, u32 b, u32 c, u8 d, s16 e) {
    p[0] = a;
    p[1] = b;
    p[2] = c;
    p[3] = d;
    func_ov003_0220c47c(p, e);
}
}

namespace ns_0220c448 {
extern "C" void func_ov003_0220c488(u8 *p, u32 a) {
    p[0] = a;
}
}

namespace ns_0220c448 {
extern "C" void func_ov003_0220c47c(void *p, s32 a) {
    func_020769c4((u8 *)p + 4, a);
}
}

namespace ns_0220c448 {
extern "C" void func_ov003_0220c458(u8 *p, u8 *a, u8 *b, u8 *c, u8 *d, u16 *e) {
    *a = p[0];
    *b = p[1];
    *c = p[2];
    *d = p[3];
    *e = func_ov003_0220c448(p);
}
}

namespace ns_0220c448 {
extern "C" u32 func_ov003_0220c454(u8 *p) {
    return p[0];
}
}

namespace ns_0220c448 {
extern "C" u32 func_ov003_0220c448(void *p) {
    return func_020769ac((u8 *)p + 4);
}
}

namespace ns_0220ba90 {
extern "C" void func_ov003_0220c350(Obj *o, Rec *r) {
    u8 *q = &r->unk_0c.a;
    u32 a = q[0];
    u32 b = q[1];
    u32 c = q[2];
    if (c == 0) {
        func_02010358(o, 0x5c, 3, 0);
        func_0205e1a0(o->unk_59c, 5, 3, 1);
    }
    State *rec = &o->unk_7d0;
    rec->unk_07 = a;
    rec->unk_08 = b;
    rec->unk_06 = c;
    rec->unk_04 = 0x39;
    rec->unk_0a = func_0203c31c();
    if (c != 0) {
        if (c == 3) {
            rec->unk_09 = 3;
            rec->unk_04 = 0x3b;
            o->unk_818 = 8;
        } else {
            if (o->unk_700 == 0x6c) {
                rec->unk_06 = 2;
                func_020103b4(o, 0, 3, 3);
            }
            rec->unk_09 = 7;
        }
    } else {
        if (func_020729bc(data_020cbb18, o->unk_7fc)) {
            func_02034dd0(0x12, 0, 0);
            func_0208a578();
            func_0208c0f4();
            func_0207881c(&o->unk_5c);
        }
        rec->unk_09 = 0;
    }
    rec->unk_00 = -1;
    if (func_020729bc(data_020cbb18, o->unk_7fc)) {
        func_ov003_0220c48c(o->unk_8ec, rec->unk_09, a, b, c, 0);
    }
}
}

namespace ns_0220ba90 {
extern "C" void func_ov003_0220c30c(Obj *o, s32 a) {
    u8 buf[4];
    u32 e;
    func_ov003_0220c458(o->unk_8ec, &buf[0], &buf[1], &buf[2], &buf[3], &e);
    func_ov003_0220c4ac(o, buf[3], buf[1], buf[2], 6, a);
}
}

namespace ns_0220ba90 {
extern "C" void func_ov003_0220c2dc(Obj *o) {
    if (o->unk_7d0.unk_00 != -1) {
        func_020902f8(o->unk_7d0.unk_00);
    }
    o->unk_458 = 0;
    o->unk_45a = 0;
}
}

namespace ns_0220ba90 {
extern "C" void func_ov003_0220bc84(Obj *o) {
    struct {
        s16 v[5];
        s32 pr[2];
    } L2;
    T48 t;
    V3 vv;
    T48 t2;
    V3 d;
    V3 w;
    V3 pos;
    State *rec;
    u8 *sub;
    u32 mode;
    u8 *p7;
    u8 b8;
    void *g;
    rec = &o->unk_7d0;
    sub = o->unk_8ec;
    mode = rec->unk_06;
    u8 *st = &rec->unk_09;
    p7 = &rec->unk_07;
    b8 = rec->unk_08;
    if (mode == 0) {
        func_0200f4c0(o, 0x400);
    }
    s32 r7 = o->unk_7fc;
    if (*st == 0) {
        if (func_020729bc(data_020cbb18, r7)) {
            *st = 1;
        } else {
            *st = 9;
            if (*p7 != 0xff) {
                func_ov003_02226fac(*p7);
            }
        }
        u32 bt = b8;
        if (bt == 0x18 || bt == 0x30 || (u8)(bt + 0xce) <= 1) {
            t = o->unk_694;
            func_ov003_02212034(&t, 0);
            vv.x = ((V3 *)((u8 *)&t + 0x24))->x;
            vv.y = ((V3 *)((u8 *)&t + 0x24))->y;
            vv.z = ((V3 *)((u8 *)&t + 0x24))->z;
            func_0203ee38(&vv, &vv);
            rec->unk_00 = func_02090330(0x25, &vv, 0, 0);
        }
        func_ov003_02227248(b8, (u8)r7);
    }
    t2 = o->unk_694;
    d.x = 0x4cd;
    d.y = 0;
    d.z = 0;
    if (o->unk_700 != 0x5c) {
        d.x = d.x + 0x333;
        d.y = d.y + 0x19a;
        d.z = d.z - 0x19a;
    } else {
        s32 f = o->unk_2d4.f;
        if (f >= 0x24) {
            s32 num = (f - 0x23) * 0x19a;
            s32 den = o->unk_2d0.f - 0x24;
            s32 e = num / den;
            d.x = d.x + e * 2;
            d.y = d.y + e;
            d.z = d.z - e;
        }
    }
    func_ov003_02212034(&t2, &d);
    if (rec->unk_00 != -1) {
        w.x = ((V3 *)((u8 *)&t2 + 0x24))->x;
        w.y = ((V3 *)((u8 *)&t2 + 0x24))->y;
        w.z = ((V3 *)((u8 *)&t2 + 0x24))->z;
        func_0203ee38(&w, &w);
        func_020902d4(rec->unk_00, &w, 0, 0);
    }
    L2.v[2] = 0;
    L2.v[3] = 0;
    L2.v[4] = 0;
    u32 fr = o->unk_2d4.f;
    if (fr < 0x17 && o->unk_700 == 0x5c) {
        goto tail;
    }
    g = data_020cbb18;
    if (!func_020729bc(g, o->unk_7fc)) {
        o->unk_7f8 = func_02007c08(o, o->unk_7ec);
        if (*st < 6 || *st == 9) {
            if (func_ov003_0220c454(sub) == 6) {
                func_ov003_0222746c((u8)r7, func_ov003_0220c448(sub));
                func_020103b4(o, 0, 3, 3);
                *st = 7;
            }
        }
    }
    L2.v[2] = 0x64;
    L2.v[3] = 0x64;
    L2.v[4] = 0x64;
    if (o->unk_700 == 0x5c) {
        u32 f2 = o->unk_2d4.f;
        if (f2 <= 0x21) {
            s16 t = (f2 - 0x17) * 10;
            if (t >= 0x64) {
                t = 0x64;
            }
            L2.v[2] = t;
            L2.v[3] = t;
            L2.v[4] = t;
        }
    }
    switch (*st) {
    case 0:
        break;
    case 1: {
        if (func_0203d820() == 0) {
            break;
        }
        *st = 2;
        Unk_020e2a30 *sec = o;
        func_0203e488(o, sec);
        func_0200ec30(o, 0x11);
        Unk_020e2a30 &sr = *o;
        func_020a710c(&sr, (void *)"obj_etc_getinsect");
        o->unk_10a = b8;
        L2.v[1] = b8 + 0x12b0;
        func_0203c2d0(&L2.v[1]);
        o->unk_128->unk_08 = 1;
        func_0203a598();
        if (func_0200ec44(o, 0x1a)) {
            func_02034d84(0x3f);
            func_0200ec1c(o, 0x1a);
        }
        func_02034d70(0x12);
        func_02034dd0(0xc, 0, 0xe);
        func_02034e10(0xd, 0x39, 0x7f, 1);
        break;
    }
    case 2: {
        Unk_ov003_0220bc84_H *h = o->unk_128;
        if (h == 0) {
            break;
        }
        if (h->unk_04 == 0) {
            break;
        }
        if (func_0203c31c() != 0 && rec->unk_0a == 0) {
            *st = 8;
            o->unk_818 = 0xd;
            break;
        }
        *st = 3;
        o->unk_818 = 8;
        break;
    }
    case 3: {
        if (func_02098ffc() == -1) {
            L2.pr[0] = 0;
            L2.pr[1] = 0;
            if (func_020429d0(0x10, L2.pr)) {
                *st = 4;
                o->unk_818 = 0;
            } else {
                *st = 5;
                o->unk_818 = 1;
            }
            return;
        }
        Unk_ov003_0220bc84_H *h = o->unk_128;
        if (h == 0) {
            break;
        }
        if (h->unk_04 != 0) {
            break;
        }
        Unk_020e2a30 *sec = o;
        func_0203e47c(o, sec);
        func_0200ec1c(o, 0x11);
        func_0203d7f8();
        func_ov003_0220bb90(o, b8, 0, 6, -1);
        func_0203a844();
        break;
    }
    case 4: {
        if (o->unk_818 >= 0xf) {
            *st = 5;
            break;
        }
        Unk_ov003_0220bc84_H *h = o->unk_128;
        if (h == 0) {
            break;
        }
        if (h->unk_04 != 0) {
            break;
        }
        Unk_020e2a30 *sec = o;
        func_0203e47c(o, sec);
        func_0200ec1c(o, 0x11);
        func_ov003_0220bb90(o, b8, 1, 6, -1);
        func_0203a844();
        break;
    }
    case 5: {
        Unk_ov003_0220bc84_H *h = o->unk_128;
        if (h == 0) {
            break;
        }
        if (h->unk_04 != 0) {
            break;
        }
        if (rec->unk_00 != -1) {
            func_020902f8(rec->unk_00);
        }
        s16 ang = func_02063b8c(0x2aaa) - 0x1555;
        func_ov003_0222746c((u8)r7, ang);
        func_ov003_0220c47c(sub, ang);
        Unk_020e2a30 *sec = o;
        func_0203e47c(o, sec);
        func_0200ec1c(o, 0x11);
        func_0203d7f8();
        func_020103b4(o, 0, 3, 3);
        *st = 6;
        func_ov003_0220c488(sub, 6);
        func_0203a844();
        return;
    }
    case 6: {
        if (func_ov003_02227434((u8)r7) != 3) {
            if (o->unk_458 == 0 && o->unk_45a == 0) {
                o->unk_7f8 = func_02007c08(o, o->unk_7ec);
                switch (mode) {
                case 2:
                    if (func_020729bc(g, o->unk_7fc)) {
                        if (func_0200ec44(o, 0x11)) {
                            func_0200ec1c(o, 0x11);
                            Unk_020e2a30 *sec = o;
                            func_0203e47c(o, sec);
                        }
                        func_0203d7f8();
                    }
                case 0:
                case 3:
                    func_0200ce98(o, 3, 1, -1);
                    return;
                case 1:
                    func_0200c358(o, 3, 5, -1);
                    return;
                }
                return;
            }
            func_02010dbc(&o->unk_458, 0, 0x400, 0x1770000, 0xc0000);
            func_02010dbc(&o->unk_45a, 0, 0x400, 0x1770000, 0xc0000);
            return;
        } else {
            V3 *q = func_ov003_02227320(r7);
            V3 *pv = &o->unk_5c;
            pos.x = o->unk_5c.x;
            pos.y = pv->y;
            pos.z = pv->z;
            pos.y = pos.y + 0x1b33;
            s16 yaw = func_020e7b98(q->x - pos.x, q->z - pos.z);
            s32 h = func_020e7b98(q->y - pos.y, func_020e9650(q, &pos));
            if (h >= 0x1800) {
                h = 0x1800;
            }
            yaw -= o->unk_8e;
            func_02010dbc(&o->unk_458, h, 0x400, 0x1770000, 0xc0000);
            func_02010dbc(&o->unk_45a, yaw, 0x400, 0x1770000, 0xc0000);
            return;
        }
    }
    case 7: {
        s32 r = func_ov003_02227434((u8)r7);
        if (r == 3 || r == 0) {
            *st = 6;
        }
        return;
    }
    case 8: {
        Unk_ov003_0220bc84_H *h = o->unk_128;
        if (h == 0) {
            break;
        }
        if (h->unk_04 != 0) {
            break;
        }
        Unk_020e2a30 *sec = o;
        func_0203e47c(o, sec);
        func_0200ec1c(o, 0x11);
        func_0203d7f8();
        func_02008e50(o, 0, b8, *p7, 6, -1);
        return;
    }
    }
tail:
    func_ov003_022261ec((u8)r7, &L2.v[2], &t2, 0);
}
}

namespace ns_0220ba90 {
extern "C" void func_ov003_0220bbd4(Obj *o) {
    func_02010914(o);
    volatile V3 sv;
    V3 *pv = &o->unk_c4;
    sv.x = o->unk_c4.x;
    sv.y = pv->y;
    sv.z = pv->z;
    s16 d0 = o->unk_d0;
    T48 a = o->unk_294;
    T48 b = o->unk_694;
    func_0200e7f4(o);
    func_0200ef08(o);
    func_0201071c(o);
    ovcall::func_ov003_0220bc84(o);
    o->unk_c4.x = sv.x;
    o->unk_c4.y = sv.y;
    o->unk_c4.z = sv.z;
    o->unk_d0 = d0;
    o->unk_294 = a;
    o->unk_694 = b;
}
}

namespace ns_0220ba90 {
extern "C" s32 func_ov003_0220bb90(Obj *o, u32 a, u32 b, s32 id, s32 e) {
    Msg m;
    _ZN12Unk_0200e2c013func_0200e2c0Eiis(&m, 0x58, id, *(s16 *)&e);
    Unk_ov003_0220bc84_Pair &q = m.v_0220ba90.unk_0c;
    q.a = a;
    q.b = b;
    s32 r = func_0200e248(o, &m);
    return r;
}
}

namespace ns_0220ba90 {
extern "C" void func_ov003_0220bb70(u8 *p, u32 a, u32 b, u32 c) {
    p[0] = a;
    func_ov003_0220bb6c(p, b);
    func_ov003_0220bb60(p, c);
}
}

namespace ns_0220ba90 {
extern "C" void func_ov003_0220bb6c(u8 *p, u32 a) {
    p[1] = a;
}
}

namespace ns_0220ba90 {
extern "C" void func_ov003_0220bb60(u8 *p, u32 a) {
    func_020769c4(p + 2, a);
}
}

namespace ns_0220ba90 {
extern "C" void func_ov003_0220bb40(u8 *p, u8 *a, u8 *b, u16 *c) {
    *a = p[0];
    *b = func_ov003_0220bb3c(p);
    *c = func_ov003_0220bb30(p);
}
}

namespace ns_0220ba90 {
extern "C" u32 func_ov003_0220bb3c(u8 *p) {
    return p[1];
}
}

namespace ns_0220ba90 {
extern "C" u32 func_ov003_0220bb30(u8 *p) {
    return func_020769ac(p + 2);
}
}

namespace ns_0220ba90 {
extern "C" void func_ov003_0220badc(Obj *o, Rec *r) {
    u8 x, y;
    Unk_ov003_0220bc84_Pair *q = &r->unk_0c;
    u8 *p = (u8 *)&o->unk_7d0;
    x = q->a;
    y = q->b;
    p[0] = x;
    p[1] = y;
    func_ov003_0220bb70(o->unk_8ec, x, y, 0);
    func_02010358(o, 0x5d, 3, 0);
    func_0205e1a0(o->unk_59c, 6, 3, 1);
    func_0200ecdc(o, 0x4f);
}
}

namespace ns_0220ba90 {
extern "C" s32 func_ov003_0220baa4(Obj *o, s32 a) {
    u8 buf[4];
    func_ov003_0220bb40(o->unk_8ec, &buf[0], &buf[1], (u16 *)&buf[2]);
    return func_ov003_0220bb90(o, buf[0], buf[1], 6, a);
}
}

namespace ns_0220ba90 {
extern "C" void func_ov003_0220ba90(Obj *o) {
    o->unk_458 = 0;
    o->unk_45a = 0;
}
}

namespace ns_0220b0f0 {
extern "C" void func_ov003_0220b6f4(Obj *o) {
    s32 flag = 0;
    s16 w[4];
    V3 pos;
    S30 cp;
    u32 code;
    s32 v;
    s16 h;
    u32 id;
    V3 *pv = &o->unk_5c;
    pos.x = pv->x;
    pos.y = pv->y;
    pos.z = pv->z;
    id = o->unk_7fc;
    if (o->unk_700 == 0x5d) {
        u32 m = o->unk_2d4.mid;
        if (m < 6) {
            h = 0x64 - m * 16;
        } else {
            h = 0;
        }
    } else {
        h = 0;
    }
    w[1] = h;
    w[2] = h;
    w[3] = h;
    cp = o->unk_694;
    func_ov003_02212034(&cp, 0);
    u8 *rec = (u8 *)&o->unk_7d0;
    u8 *p6 = o->unk_8ec;
    u8 *st = rec + 1;
    code = (u16)(rec[0] + 0x12b0);
    switch (rec[1]) {
    case 0:
        if (func_02056654(o->unk_2cc) == 0) {
            goto tail;
        }
        func_ov003_02227074(o->unk_7fc, 1);
        o->unk_7f8 = func_02007c08(o, o->unk_7ec);
        func_0200ce98(o, 6, 1, -1);
        if (func_020729bc(data_020cbb18, o->unk_7fc)) {
            w[0] = code;
            func_02099124(w);
        }
        flag = 1;
        goto tail;
    case 1:
        if (o->unk_700 == 0x5d) {
            if (func_02056654(o->unk_2cc) == 0) {
                goto tail;
            }
            func_020103b4(o, 0x6c, 3, 3);
            func_0205e1a0(o->unk_59c, 0, 3, 0);
        }
        pos.x -= 0x400;
        pos.y += 0x1b34;
        pos.z += 0x1400;
        func_0203ef38(&pos, &pos);
        cp.v[9] = pos.x;
        cp.v[10] = pos.y;
        cp.v[11] = pos.z;
        if (func_020729bc(data_020cbb18, o->unk_7fc)) {
            s32 s = o->unk_818;
            if (s == 5) {
                if (func_0206e7d4(code) == 0) {
                    goto tail;
                }
                o->unk_818 = 6;
                goto tail;
            } else if (s == 6) {
                if (func_0206ec6c() == 0) {
                    goto tail;
                }
                o->unk_818 = 0xf;
                if (func_0206ed18() != 0) {
                    if (func_0200ec44(o, 0x11)) {
                        func_0200ec1c(o, 0x11);
                        func_0203e47c(o, o);
                    }
                    func_0203d7f8();
                    o->unk_7f8 = func_02007c08(o, o->unk_7ec);
                    func_0200ce98(o, 6, 1, -1);
                    return;
                }
            } else if (s < 0xf) {
                goto tail;
            }
            v = (s16)(func_02063b8c(0x2aaa) - 0x1555);
            func_ov003_0222746c(id, v);
            func_ov003_0220bb60(p6, v);
            if (func_0200ec44(o, 0x11)) {
                func_0200ec1c(o, 0x11);
                func_0203e47c(o, o);
            }
            func_0203d7f8();
            *st = 2;
            func_ov003_0220bb6c(p6, 2);
            func_020103b4(o, 0, 4, 4);
            return;
        } else {
            o->unk_7f8 = func_02007c08(o, o->unk_7ec);
            if (func_ov003_0220bb3c(p6) == 2) {
                func_ov003_0222746c(id, func_ov003_0220bb30(p6));
                *st = 2;
                func_020103b4(o, 0, 4, 4);
            }
            return;
        }
    case 2:
        if (func_ov003_02227434(id) != 3) {
            if (o->unk_458 == 0 && o->unk_45a == 0) {
                o->unk_7f8 = func_02007c08(o, o->unk_7ec);
                func_0200ce98(o, 6, 1, -1);
            } else {
                func_02010dbc(&o->unk_458, 0, 0x400, 0x1770000, 0xc0000);
                func_02010dbc(&o->unk_45a, 0, 0x400, 0x1770000, 0xc0000);
            }
            return;
        } else {
            V3 *q = func_ov003_02227320(id);
            V3 p3;
            V3 *pv2 = &o->unk_5c;
            p3.x = pv2->x;
            p3.y = pv2->y;
            p3.z = pv2->z;
            p3.y += 0x1b33;
            s32 yaw = func_020e7b98(q->x - p3.x, q->z - p3.z);
            s32 hh = func_020e7b98(q->y - p3.y, func_020e9650(q, &p3));
            o->unk_45a = yaw;
            if (hh >= 0x1800) {
                hh = 0x1800;
            }
            o->unk_458 = hh;
            return;
        }
    default:
    tail:
        func_ov003_022261ec(id, &w[1], &cp, flag);
    }
}
}

namespace ns_0220b0f0 {
extern "C" void func_ov003_0220b6d4(Obj *o) {
    func_02010914(o);
    func_0200ef08(o);
    func_0201071c(o);
    ovcall::func_ov003_0220b6f4(o);
}
}

namespace ns_0220b0f0 {
extern "C" void func_ov003_0220b6cc(u8 *p, u8 a, u8 b, u32 c) {
    p[0] = a;
    p[1] = b;
    p[2] = c;
}
}

namespace ns_0220b0f0 {
extern "C" s32 func_ov003_0220b620(Obj *o, s32 a, s16 b) {
    Msg m;
    u8 *d = (u8 *)&m.v_0220b0f0.unk_0c;
    V3 v;
    s32 f;
    _ZN12Unk_0200e2c013func_0200e2c0Eiis(&m, 0x59, a, b);
    if (o->unk_144 != 0) {
        s32 z = o->unk_15c;
        v.x = o->unk_154;
        v.y = 0;
        v.z = z;
        f = 1;
    } else {
        s32 z = o->unk_150;
        v.x = o->unk_148;
        f = 0;
        v.y = 0;
        v.z = z;
        if (o->unk_140 != 0) {
            f = 1;
        }
    }
    s32 x = 0;
    s32 y = 0;
    func_0204ee10(&x, &y, &v);
    func_ov003_0220b6cc(d, x, y, f);
    s32 r = func_0200e248(o, &m);
    return r;
}
}

namespace ns_0220b0f0 {
extern "C" s32 func_ov003_0220b5d8(Obj *o, u8 *a, u8 *b, u8 *c, s32 id, s32 e) {
    Msg m;
    _ZN12Unk_0200e2c013func_0200e2c0Eiis(&m, 0x59, id, *(s16 *)&e);
    func_ov003_0220b6cc((u8 *)&m.v_0220b0f0.unk_0c, *a, *b, *c);
    s32 r = func_0200e248(o, &m);
    return r;
}
}

namespace ns_0220b0f0 {
extern "C" void func_ov003_0220b5bc(Rec *r, V3C v, s32 c, u32 d) {
    r->unk_00.x = v.x;
    r->unk_00.y = v.y;
    r->unk_00.z = v.z;
    r->unk_0c = c;
    r->unk_0e = d;
    r->unk_0f = 0;
}
}

namespace ns_0220b0f0 {
extern "C" void func_ov003_0220b5b4(u8 *p, u8 a, u8 b, u32 c) {
    p[0] = a;
    p[1] = b;
    p[2] = c;
}
}

namespace ns_0220b0f0 {
extern "C" void func_ov003_0220b5a0(u8 *src, u8 *a, u8 *b, u8 *c) {
    *a = src[0];
    *b = src[1];
    *c = src[2];
}
}

namespace ns_0220b0f0 {
extern "C" void func_ov003_0220b4c4(Obj *o, RecB *r) {
    Unk_ov003_0220b0f0_B3 *q = &r->unk_0c;
    Rec *rp = &o->unk_7d0;
    u32 a = q->a;
    u32 b = q->b;
    u32 c = q->c;
    V3 pos;
    V3 out;
    V3C t;
    s32 acc;
    func_ov003_0220b5b4(o->unk_8ec, a, b, c);
    func_02010358(o, 0x49, 3, 0);
    func_0204ed8c(&pos, a, b);
    if (c == 0) {
        s32 d = o->unk_98;
        acc = 0x2000;
        while (d != 0) {
            d -= 0x171;
            if (d > 0) {
                acc += d;
            } else {
                d = 0;
            }
        }
        func_0200f3ec(&out, o, &o->unk_5c, &o->unk_8e, &acc);
        pos.x = out.x;
        pos.y = out.y;
        pos.z = out.z;
        func_0204edd8(&pos, &pos);
    }
    s32 h = func_020e7b98(pos.x - o->unk_6f0, pos.z - o->unk_6f8);
    t.x = pos.x;
    t.y = pos.y;
    t.z = pos.z;
    func_ov003_0220b5bc(rp, t, h, c);
}
}

namespace ns_0220b0f0 {
extern "C" s32 func_ov003_0220b488(Obj *o, s32 a) {
    u8 b[3];
    func_ov003_0220b5a0(o->unk_8ec, &b[0], &b[1], &b[2]);
    return func_ov003_0220b5d8(o, &b[0], &b[1], &b[2], 6, a);
}
}

namespace ns_0220b0f0 {
extern "C" void func_ov003_0220b41c(Obj *o) {
    Rec *r4 = &o->unk_7d0;
    s32 h;
    if (o->unk_98 == 0 && r4->unk_0e == 0) {
        V3 t;
        func_0200f45c(&t, o);
        h = func_020e7b98(t.x - o->unk_6f0, t.z - o->unk_6f8);
        r4->unk_0c = h;
        r4->unk_0e = 1;
        r4->unk_00.x = t.x;
        r4->unk_00.y = t.y;
        r4->unk_00.z = t.z;
    } else {
        h = r4->unk_0c;
    }
    func_0200f504(o, h);
}
}

namespace ns_0220b0f0 {
extern "C" void func_ov003_0220b3dc(Obj *o) {
    V3 v;
    Rec *r = &o->unk_7d0;
    v.x = r->unk_00.x;
    v.y = r->unk_00.y;
    v.z = r->unk_00.z;
    func_02010740(o, &v, 0xf33, 0x1000);
    func_02089040((u8 *)o + 0x1c0);
}
}

namespace ns_0220b0f0 {
extern "C" void func_ov003_0220b330(Obj *o) {
    Rec *r4 = &o->unk_7d0;
    if (func_02056654(o->unk_2cc) != 0 || o->unk_700 == 0x4a) {
        if (o->unk_700 == 0x49) {
            func_020103b4(o, 0x4a, 3, 0);
        }
        if (o->unk_98 == 0) {
            if (r4->unk_0c == o->unk_8e) {
                V3C a;
                a.x = r4->unk_00.x;
                a.y = r4->unk_00.y;
                a.z = r4->unk_00.z;
                if (Unk_ov003_0220b330_IsZero(func_ov003_0220af3c(o, a, 1))) {
                    s32 x = 0;
                    s32 y = 0;
                    Pair w;
                    func_0204ee10(&x, &y, &a);
                    w.a = x;
                    w.b = y;
                    func_ov003_0220b1f8(o, w, 6, -1);
                }
            }
        }
    }
}
}

namespace ns_0220b0f0 {
extern "C" void func_ov003_0220b2f4(Obj *o) {
    o->unk_7f8 = func_02007c08(o, o->unk_7ec);
    if (func_02056654(o->unk_2cc)) {
        func_020103b4(o, 0x4a, 3, 0);
    }
}
}

namespace ns_0220b0f0 {
extern "C" void func_ov003_0220b24c(Obj *o) {
    s32 r4 = o->unk_98;
    s32 t = func_02010d5c(r4, 0, 0x171);
    func_02010a34(o, &t);
    if (func_020729bc(data_020cbb18, o->unk_7fc)) {
        func_ov003_0220b41c(o);
        func_02010914(o);
        func_020109c4(o);
        func_0201071c(o);
        func_ov003_0220b330(o);
        func_ov003_0220b3dc(o);
    } else {
        func_02010914(o);
        if (func_0200ef08(o)) {
            func_020109c4(o);
        }
        func_0201071c(o);
        func_ov003_0220b2f4(o);
    }
    if (r4 != 0 && o->unk_98 == 0) {
        func_02090330(0x2a, &o->unk_5c, &o->unk_8e, 0);
    }
}
}

namespace ns_0220b0f0 {
extern "C" void func_ov003_0220b240(u8 *d, Pair v) {
    d[0] = v.a;
    d[1] = v.b;
}
}

namespace ns_0220b0f0 {
extern "C" s32 func_ov003_0220b1f8(Obj *o, Pair p, s32 id, s16 e) {
    Msg m;
    _ZN12Unk_0200e2c013func_0200e2c0Eiis(&m, 0x5a, id, e);
    func_ov003_0220b240((u8 *)&m.v_0220b0f0.unk_0c, p);
    s32 r = func_0200e248(o, &m);
    return r;
}
}

namespace ns_0220b0f0 {
extern "C" void func_ov003_0220b1ec(u8 *p, Pair *v) {
    p[0] = v->a;
    p[1] = v->b;
}
}

namespace ns_0220b0f0 {
extern "C" void func_ov003_0220b1e0(u8 *p, Pair *v) {
    p[0] = v->a;
    p[1] = v->b;
}
}

namespace ns_0220b0f0 {
extern "C" void func_ov003_0220b1d4(u8 *p, Pair *out) {
    out->a = p[0];
    out->b = p[1];
}
}

namespace ns_0220b0f0 {
extern "C" void func_ov003_0220b168(Obj *o, RecB *r) {
    Pair w;
    Pair w2;
    Unk_ov003_0220b0f0_B3 *q = &r->unk_0c;
    u32 b = q->b;
    u8 *p = (u8 *)&o->unk_7d0;
    u32 a = q->a;
    w.a = a;
    w.b = b;
    func_ov003_0220b1ec(p, &w);
    if (o->unk_808 == -1) {
        p[2] = 0;
    } else {
        p[2] = 1;
    }
    w2.a = a;
    w2.b = b;
    func_ov003_0220b1e0(o->unk_8ec, &w2);
    if (o->unk_700 == 0x4a) {
        func_020103b4(o, 0x4a, 3, 0);
    }
}
}

namespace ns_0220b0f0 {
extern "C" s32 func_ov003_0220b130(Obj *o, s16 a) {
    Pair v;
    v.a = 0;
    v.b = 0;
    func_ov003_0220b1d4(o->unk_8ec, &v);
    return func_ov003_0220b1f8(o, v, 6, a);
}
}

namespace ns_0220b0f0 {
extern "C" void func_ov003_0220b0f0(Obj *o) {
    V3 v;
    u8 *p = (u8 *)&o->unk_7d0;
    func_0204ed8c(&v, p[0], p[1]);
    func_02010740(o, &v, 0xf33, 0x1000);
    func_02089040((u8 *)o + 0x1c0);
}
}

namespace ns_0220a680 {
extern "C" s32 func_ov003_0220af3c(Obj *o, V3 *v, u8 f) {
    Pair xy;
    V3 pos;
    s32 r6;
    u32 r7;
    Rec *r5;
    if (o->unk_98 != 0) return -1;
    r7 = 0;
    r5 = &o->unk_7d0;
    if (f != 0) {
        pos.x = v->x;
        pos.y = v->y;
        pos.z = v->z;
    } else {
        func_0204ed8c(&pos, r5->a, r5->b);
        if (r5->c == 0) {
            r7 = 1;
            f = 1;
        }
    }
    r6 = func_ov003_02205928(o, &pos, &f);
    xy.a = 0;
    xy.b = 0;
    func_0204ee10(&xy.a, &xy.b, &pos);
    if (r7 != 0) {
        if (o->unk_808 != -1) r5->c = 1;
    }
    switch (r6) {
    case 0:
        break;
    case 1:
        func_ov003_0220ae54(o, 6, -1);
        break;
    case 2:
        func_ov003_0220ac74(o, 0, xy, 6, -1);
        break;
    case 3:
        func_ov003_0220a710(o, 0, pos, 6, -1);
        break;
    case 4:
        func_ov003_0220a710(o, 1, pos, 6, -1);
        break;
    case 5:
        func_ov003_0220a344(o, pos, 0, 6, -1);
        break;
    case 6: {
        Pair xy2;
        xy2.a = 0;
        xy2.b = 0;
        func_0204ee10(&xy2.a, &xy2.b, &pos);
        func_ov003_022093bc(o, 0, xy2, 0xfff1, 6, -1);
        break;
    }
    case 7:
        func_ov003_0220ad70(o, 6, -1);
        break;
    case 8:
        func_ov003_0220ac74(o, 1, xy, 6, -1);
        break;
    case 9:
        func_ov003_0220a344(o, pos, 1, 6, -1);
        break;
    }
    return r6;
}
}

namespace ns_0220a680 {
extern "C" void func_ov003_0220ae8c(Obj *o) {
    s32 r4 = o->unk_98;
    s32 t = func_02010d50(r4, 0);
    func_02010a34(o, &t);
    func_02010914(o);
    if (func_020729bc(data_020cbb18, o->unk_7fc)) {
        V3 v;
        func_020109c4(o);
        func_0201071c(o);
        v.x = 0;
        v.y = 0;
        v.z = 0;
        func_ov003_0220af3c(o, &v, 0);
    } else {
        if (func_0200ef08(o)) func_020109c4(o);
        func_0201071c(o);
        o->unk_7f8 = func_02007c08(o, o->unk_7ec);
    }
    func_ov003_0220b0f0(o);
    if (r4 != 0) {
        if (o->unk_98 == 0) {
            func_02090330(0x2a, &o->unk_5c, &o->unk_8e, 0);
        }
    }
}
}

namespace ns_0220a680 {
extern "C" s32 func_ov003_0220ae54(Obj *o, u32 a, s16 b) {
    Msg m;
    _ZN12Unk_0200e2c013func_0200e2c0Eiis(&m, 0x5b, a, b);
    s32 r = func_0200e248(o, &m);
    return r;
}
}

namespace ns_0220a680 {
extern "C" void func_ov003_0220ae40(Obj *o) {
    func_02010358(o, 0x4d, 3, 0);
}
}

namespace ns_0220a680 {
extern "C" s32 func_ov003_0220ae34(Obj *o, s16 x) {
    return func_ov003_0220ae54(o, 6, x);
}
}

namespace ns_0220a680 {
extern "C" void func_ov003_0220ae04(Obj *o) {
    if (func_020565e8(o->unk_2cc, 5)) {
        func_0200ecdc(o, 0x842);
    }
    func_02010914(o);
}
}

namespace ns_0220a680 {
extern "C" void func_ov003_0220adc4(Obj *o) {
    if (func_02056654(o->unk_2cc)) {
        o->unk_7f8 = func_02007c08(o, o->unk_7ec);
        func_0200ce98(o, 3, 1, -1);
    }
}
}

namespace ns_0220a680 {
extern "C" void func_ov003_0220ada8(Obj *o) {
    func_ov003_0220ae04(o);
    func_0201071c(o);
    func_ov003_0220adc4(o);
}
}

namespace ns_0220a680 {
extern "C" s32 func_ov003_0220ad70(Obj *o, u32 a, s16 b) {
    Msg m;
    _ZN12Unk_0200e2c013func_0200e2c0Eiis(&m, 0x5c, a, b);
    s32 r = func_0200e248(o, &m);
    return r;
}
}

namespace ns_0220a680 {
extern "C" void func_ov003_0220ad5c(Obj *o) {
    func_02010358(o, 0x5e, 3, 0);
}
}

namespace ns_0220a680 {
extern "C" s32 func_ov003_0220ad50(Obj *o, s16 x) {
    return func_ov003_0220ad70(o, 6, x);
}
}

namespace ns_0220a680 {
extern "C" void func_ov003_0220ad10(Obj *o) {
    if (func_02056654(o->unk_2cc)) {
        o->unk_7f8 = func_02007c08(o, o->unk_7ec);
        func_0200ce98(o, 3, 1, -1);
    }
}
}

namespace ns_0220a680 {
extern "C" void func_ov003_0220acd0(Obj *o) {
    func_02010914(o);
    func_020109c4(o);
    func_0201071c(o);
    s32 t = func_02010d5c(o->unk_98, 0, 0x171);
    func_02010a34(o, &t);
    func_ov003_0220ad10(o);
}
}

namespace ns_0220a680 {
extern "C" void func_ov003_0220acc4(B3 *d, Pair p, u32 c) {
    d->a = p.a;
    d->b = p.b;
    d->c = c;
}
}

namespace ns_0220a680 {
extern "C" s32 func_ov003_0220ac74(Obj *o, u32 id, Pair p, s32 b, s32 c) {
    Msg m;
    _ZN12Unk_0200e2c013func_0200e2c0Eiis(&m, 0x5d, b, *(s16 *)&c);
    func_ov003_0220acc4((B3 *)&m.v_0220a680.unk_0c, p, id);
    s32 r = func_0200e248(o, &m);
    return r;
}
}

namespace ns_0220a680 {
extern "C" void func_ov003_0220ac68(Rec *r, Pair p, u8 c) {
    r->a = p.a;
    r->b = p.b;
    r->c = c;
}
}

namespace ns_0220a680 {
extern "C" void func_ov003_0220ac54(u8 *d, u8 a, u8 b, u8 c, u8 e) {
    d[0] = a;
    d[1] = b;
    d[2] = c;
    d[3] = e;
}
}

namespace ns_0220a680 {
extern "C" void func_ov003_0220ac38(u8 *s, u8 *a, u8 *b, u8 *c, u8 *d) {
    *a = s[0];
    *b = s[1];
    *c = s[2];
    *d = s[3];
}
}

namespace ns_0220a680 {
extern "C" void func_ov003_0220abd4(Obj *o, Msg *m) {
    B3 *q = (B3 *)&m->v_0220a680.unk_0c;
    u8 c = q->c;
    s32 a = q->a;
    s32 b = q->b;
    Pair p;
    p.a = a;
    p.b = b;
    func_ov003_0220ac68(&o->unk_7d0, p, c);
    func_ov003_0220ac54(o->unk_8ec, c, a, b, o->unk_168);
    func_02010358(o, 0x4c, 3, 0);
    if (c != 0) {
        func_0200ec30(o, 0x1c);
    }
}
}

namespace ns_0220a680 {
extern "C" void func_ov003_0220ab80(Obj *o, s32 x) {
    u8 b[4];
    func_ov003_0220ac38(o->unk_8ec, &b[0], &b[1], &b[2], &b[3]);
    o->unk_168 = b[3];
    if (b[0] == 0) {
        Pair p;
        p.a = b[1];
        p.b = b[2];
        func_ov003_0220ac74(o, 0, p, 6, x);
    }
}
}

namespace ns_0220a680 {
extern "C" void func_ov003_0220ab20(Obj *o) {
    if (func_020729bc(data_020cbb18, o->unk_7fc) == 0) {
        if (func_0200ec44(o, 0x1c)) {
            Rec *r = &o->unk_7d0;
            if (r->c != 0) {
                Pair p;
                u32 b = r->b;
                u32 a = r->a;
                p.a = a;
                p.b = b;
                func_ov003_0221cb54(&p);
                func_0200ec1c(o, 0x12);
                func_0200ec1c(o, 0x1c);
            }
        }
    }
}
}

namespace ns_0220a680 {
extern "C" void func_ov003_0220a7fc(Obj *o) {
    s16 h[2];
    s32 xy[2];
    V3 pos;
    u16 *p;
    s32 k;
    func_02010914(o);
    if (func_020565e8(o->unk_2cc, 5)) {
        Rec *rc = &o->unk_7d0;
        if (rc->c != 0) {
            Pair pa;
            u32 b = rc->b;
            u32 a = rc->a;
            pa.a = a;
            pa.b = b;
            func_ov003_0221cb54(&pa);
            func_0200ec1c(o, 0x12);
            func_0200ec1c(o, 0x1c);
        }
        s32 t = -0x333;
        func_02010a34(o, &t);
        func_0200f45c(&pos, o);
        xy[0] = 0;
        xy[1] = 0;
        func_0204ee10(&xy[0], &xy[1], &pos);
        s32 x, y, hx, hy;
        x = *(volatile s32 *)&xy[0];
        y = *(volatile s32 *)&xy[1];
        hx = x >> 4;
        hy = y >> 4;
        p = func_0204ebd8(data_021c47c4, hx, hy, x - (hx << 4), y - (hy << 4), 0);
        if (p != NULL) {
            if (Unk_ov003_0220a7fc_Chk(p)) {
                func_ov003_0221cd34(o->unk_7fc, Pair(xy[0], xy[1]), 1);
            }
        }
        func_0200ec30(o, 9);
        k = 0xf;
        if (p != NULL) k = (s32)(*p & 0xf000) >> 12;
        switch (o->unk_168) {
        case 0:
            if (p != NULL) {
                if (k <= 4) {
                    BOOL r3 = TRUE;
                    BOOL r2 = FALSE;
                    u32 v = *p;
                    if (v >= 0xe3 && v <= 0xe7) r2 = r3;
                    if (!r2) {
                        if (!(v >= 0xe8 && v <= 0xfb)) r3 = FALSE;
                    }
                    if (!r3) {
                        if (v >= 0x26 && v <= 0x2a) goto l_a9dc;
                        if (v >= 0x5d && v <= 0x61) goto l_a9dc;
                        if (v >= 0x2f && v <= 0x56) goto l_a9dc;
                        if (v >= 0x57 && v <= 0x5b) goto l_a9dc;
                        if (v >= 0x66 && v <= 0x68) goto l_a9dc;
                        if (v == 0x69) goto l_a9dc;
                        if (v >= 0x6a && v <= 0x6c) goto l_a9dc;
                        if (v == 0x6d) goto l_a9dc;
                        if (!(v >= 0xc8 && v <= 0xcf)) goto l_a9e6;
                    }
                }
            l_a9dc:
                if (k == 0xa) goto l_a9e6;
                if ((u32)(k - 0xd) > 1) goto l_a9f0;
            l_a9e6:
                func_0200ecdc(o, 0x7df);
                break;
            }
        l_a9f0:
            func_0200ecdc(o, 0x844);
            {
                V3 *pv = &o->unk_5c;
                pos.x = pv->x;
                pos.y = pv->y;
                pos.z = pv->z;
                *(s16 *)&h[0] = o->unk_8e;
                s32 r5, r6, r7, dz, dx;
                s32 idx = ((u16)h[0] >> 4) * 2;
                s32 sn = data_02135f44[idx];
                s32 cs = data_02135f44[idx + 1];
                r5 = func_01ffcb0c(cs, 0xccd);
                r5 -= func_01ffcb0c(sn, 0x800);
                r6 = func_01ffcb0c(sn, 0xccd);
                dx = r6 + func_01ffcb0c(cs, 0x800);
                pos.x = pos.x + dx;
                pos.z += r5;
                h[0] = (s16)(h[0] - 0x2000);
                func_02090330(5, &pos, &h[0], 0);
            }
            break;
        case 1:
            func_0200ecdc(o, 0x7df);
            break;
        case 2:
            func_0200ecdc(o, 0x7df);
            if (o->unk_164 != NULL) {
                func_02010a7c((u16 *)&h[1], o);
                o->unk_164->vfunc_60((u16 *)&h[1]);
            }
            break;
        case 3:
            if (func_020729bc(data_020cbb18, o->unk_7fc)) {
                if (func_ov003_022135c4(o->unk_164, 1) == 0) {
                    func_0200ecdc(o, 0x7df);
                }
            } else {
                func_0200ecdc(o, 0x7df);
            }
            break;
        }
        o->unk_164 = NULL;
        o->unk_168 = 0;
    }
}
}

namespace ns_0220a680 {
extern "C" void func_ov003_0220a7bc(Obj *o) {
    if (func_02056654(o->unk_2cc)) {
        o->unk_7f8 = func_02007c08(o, o->unk_7ec);
        func_0200ce98(o, 3, 1, -1);
    }
}
}

namespace ns_0220a680 {
extern "C" void func_ov003_0220a774(Obj *o) {
    func_ov003_0220a7fc(o);
    func_020109c4(o);
    func_0201071c(o);
    s32 v = o->unk_98;
    if (v < 0) v = -v;
    s32 t = func_02010d50(v, 0) * -1;
    func_02010a34(o, &t);
    func_ov003_0220a7bc(o);
}
}

namespace ns_0220a680 {
extern "C" void func_ov003_0220a764(P3 *p, u32 id, V3 v) {
    p->id = id;
    p->pos.x = v.x;
    p->pos.y = v.y;
    p->pos.z = v.z;
}
}

namespace ns_0220a680 {
extern "C" s32 func_ov003_0220a710(Obj *o, u32 id, V3 v, s32 b, s16 c) {
    Msg m;
    _ZN12Unk_0200e2c013func_0200e2c0Eiis(&m, 0x5e, b, c);
    func_ov003_0220a764((P3 *)&m.v_0220a680.unk_0c, id, v);
    s32 r = func_0200e248(o, &m);
    return r;
}
}

namespace ns_0220a680 {
extern "C" void func_ov003_0220a700(Rec *r, u32 id, V3 v) {
    r->a = id;
    r->pos.x = v.x;
    r->pos.y = v.y;
    r->pos.z = v.z;
}
}

namespace ns_0220a680 {
extern "C" s32 func_ov003_0220a684(Obj *o, Msg *m) {
    P3 *p = (P3 *)&m->v_0220a680.unk_0c;
    u32 id = p->id;
    V3 t = p->pos;
    Rec *r = &o->unk_7d0;
    func_ov003_0220a700(r, id, t);
    if ((u32)(o->unk_700 - 0x49) <= 1) {
        if (r->a != 0) {
            func_02010358(o, 0x4e, 3, 0);
        } else {
            func_02010358(o, 0x4b, 3, 0);
        }
    } else {
        func_02010358(o, 0x49, 3, 0);
    }
    func_0200ec30(o, 0x1c);
}
}

namespace ns_0220a680 {
extern "C" void func_ov003_0220a680(Obj *o) {
}
}

namespace ns_02209d50 {
extern "C" void func_ov003_0220a5e4(Obj *o) {
    if (!func_020729bc(data_020cbb18, o->unk_7fc)) {
        if (func_0200ec44(o, 0x1c)) {
            Rec2 *r = (Rec2 *)&o->unk_7d0;
            V3D p;
            p.x = r->unk_04.x;
            p.y = r->unk_04.y;
            p.z = r->unk_04.z;
            if (o->unk_700 == 0x4b) {
                func_ov003_02219c5c(o->unk_7fc, p, 0);
            } else {
                func_ov003_02219908(o->unk_7fc, p, o->unk_8e);
                func_ov003_02219c5c(o->unk_7fc, p, 0);
            }
            func_0200ec1c(o, 0x1c);
        }
    }
}
}

namespace ns_02209d50 {
extern "C" void func_ov003_0220a484(Obj *o) {
    s16 h;
    V3D p;
    s32 a, b;
    if (o->unk_700 != 0x49) {
        Rec2 *r = (Rec2 *)&o->unk_7d0;
        p.x = r->unk_04.x;
        p.y = r->unk_04.y;
        p.z = r->unk_04.z;
        h = o->unk_8e;
        if (o->unk_700 == 0x4b) {
            switch (o->unk_2d4.mid) {
            case 2:
                func_02090330(6, &p, 0, 0);
                break;
            case 5:
                func_0200ecdc(o, 0x841);
                func_0200ec30(o, 9);
                break;
            case 7: {
                func_02090330(7, &p, &h, 0);
                func_ov003_02219c5c(o->unk_7fc, p, 0);
                func_0200ec1c(o, 0x1c);
                func_0204ee10(&a, &b, &p);
                func_02030504(a, b);
                break;
            }
            }
        } else {
            switch ((s32)o->unk_2d4.mid) {
            case 5:
                func_0200ecdc(o, 0x85b);
                func_0200ec30(o, 9);
                break;
            case 12:
                func_02090330(6, &p, 0, 0);
                break;
            case 18:
                func_02090330(8, &p, &h, 0);
                break;
            case 21: {
                func_ov003_02219908(o->unk_7fc, p, o->unk_8e);
                func_ov003_02219c5c(o->unk_7fc, p, 0);
                func_0200ecdc(o, 0x85c);
                func_0200ec1c(o, 0x1c);
                break;
            }
            }
        }
    }
    func_02010914(o);
}
}

namespace ns_02209d50 {
extern "C" void func_ov003_0220a410(Obj *o) {
    if (func_02056654(o->unk_2cc)) {
        if (o->unk_700 == 0x49) {
            if (*(u8 *)&o->unk_7d0 != 0) {
                func_02010358(o, 0x4e, 3, 0);
            } else {
                func_02010358(o, 0x4b, 3, 0);
            }
        } else {
            o->unk_7f8 = func_02007c08(o, o->unk_7ec);
            func_0200ce98(o, 3, 1, -1);
        }
    }
}
}

namespace ns_02209d50 {
extern "C" void func_ov003_0220a3b4(Obj *o) {
    V3 v;
    func_ov003_0220a484(o);
    if (func_020729bc(data_020cbb18, o->unk_7fc)) {
        func_020109c4(o);
    } else {
        Rec2 *r = (Rec2 *)&o->unk_7d0;
        v = r->unk_04;
        func_0200ede8(o, &v);
    }
    func_0201071c(o);
    func_ov003_0220a410(o);
}
}

namespace ns_02209d50 {
extern "C" void func_ov003_0220a39c(Pay *d, V3 v, u16 a, u8 b) {
    d->v.x = v.x;
    d->v.y = v.y;
    d->v.z = v.z;
    d->a = a;
    d->b = b;
}
}

namespace ns_02209d50 {
extern "C" s32 func_ov003_0220a344(Obj *o, V3 v, u8 x, s32 c, s32 e) {
    Msg m;
    _ZN12Unk_0200e2c013func_0200e2c0Eiis(&m, 0x5f, c, *(s16 *)&e);
    func_ov003_0220a39c(&m.v_02209d50.unk_0c, v, 0xfff1, x);
    s32 r = func_0200e248(o, &m);
    return r;
}
}

namespace ns_02209d50 {
extern "C" s32 func_ov003_0220a2bc(Obj *o, V3 v, u16 a, u8 b, s32 c, s32 d) {
    Msg m;
    _ZN12Unk_0200e2c013func_0200e2c0Eiis(&m, 0x5f, c, *(s16 *)&d);
    func_ov003_0220a39c(&m.v_02209d50.unk_0c, v, a, b);
    if (!func_020729bc(data_020cbb18, o->unk_7fc)) {
        o->unk_81c = o->unk_81e = 0xfff1;
    }
    s32 r = func_0200e248(o, &m);
    return r;
}
}

namespace ns_02209d50 {
extern "C" void func_ov003_0220a29c(u8 *p, V2 v, u16 a, u8 b) {
    p[2] = v.x;
    p[3] = v.y;
    func_02076964(p, a);
    p[4] = b;
}
}

namespace ns_02209d50 {
extern "C" void func_ov003_0220a27c(u8 *p, s32 *xy, u16 *a, u8 *b) {
    xy[0] = p[2];
    xy[1] = p[3];
    *a = func_0207694c(p);
    *b = p[4];
}
}

namespace ns_02209d50 {
extern "C" void func_ov003_02209fc8(Obj *o, Msg *m) {
    Pay *pl = &m->v_02209d50.unk_0c;
    V3 v = pl->v;
    u16 loc = pl->a;
    u8 b = pl->b;
    Unk_ov003_02209fc8_ItE dx;

    Rec *r = &o->unk_7d0;
    r->unk_0c = 0;
    r->unk_00 = v;
    r->unk_0d = b;
    s32 st = o->unk_700;
    if (st == 0x49 || st == 0x4a || !Unk_ov003_02209fc8_IsNone(&loc)) {
        func_02010358(o, 0x4f, 3, 0);
    } else {
        func_02010358(o, 0x49, 3, 0);
    }
    s32 z2 = o->unk_628.z;
    s32 y2 = o->unk_628.y;
    s32 x2 = o->unk_628.x;
    o->unk_820.x = x2;
    o->unk_820.y = y2;
    o->unk_820.z = z2;
    func_0203ee38(&o->unk_820, &o->unk_820);
    o->unk_82c = 0x1000;
    o->unk_830 = 0x1000;
    o->unk_834 = 0x1000;
    func_0200ec1c(o, 0xd);
    s32 xy[2];
    xy[0] = 0;
    xy[1] = 0;
    func_0204ee10(&xy[0], &xy[1], &v);
    u16 t = o->unk_81c;
    V2 pr;
    pr.x = xy[0];
    pr.y = xy[1];
    func_ov003_0220a29c(o->unk_8ec, pr, t, b);
    s32 px = *(volatile s32 *)&xy[0];
    s32 py = *(volatile s32 *)&xy[1];
    s32 hx = px >> 4;
    s32 hy = py >> 4;
    u16 *cell = func_0204ebd8(data_021c47c4, hx, hy, px - (hx << 4), py - (hy << 4), 0);
    if (!Unk_ov003_02209fc8_IsNone(&loc)) {
        o->unk_81c = o->unk_81e = loc;
        if (Unk_ov003_02209fc8_Rng(cell, 0xfc, 0xfd)) {
            *(u32 *)&o->unk_2d4 = (u32)((o->unk_2d0.mid - 1) << 16) >> 4;
            func_0200ec30(o, 0xd);
        }
    } else {
        if (Unk_ov003_02209fc8_Eq(&o->unk_81c) || !func_020729bc(data_020cbb18, o->unk_7fc)) {
            if (cell == 0) {
                o->unk_81c = o->unk_81e = 0xfff1;
            } else {
                o->unk_81c = o->unk_81e = *cell;
            }
        }
    }
    if (func_020729bc(data_020cbb18, o->unk_7fc)) {
        func_02034dd0(0x12, 0xf, 0);
        if (Unk_ov003_02209fc8_Rng(&o->unk_81c, 0x1549, 0x1549)) func_020787f8(&o->unk_5c);
    }
    o->unk_818 = 7;
    func_0200ec30(o, 0x1c);
}
}

namespace ns_02209d50 {
extern "C" void func_ov003_02209f68(Obj *o, s32 a) {
    s32 xy[2];
    V3 v;
    u16 h;
    u8 b;
    if (o->unk_7ec == 0) {
        xy[0] = 0;
        xy[1] = 0;
        func_ov003_0220a27c(o->unk_8ec, xy, &h, &b);
        func_0204ed8c(&v, xy[0], xy[1]);
        V3 w = v;
        func_ov003_0220a2bc(o, w, h, b, 6, a);
    }
}
}

namespace ns_02209d50 {
extern "C" void func_ov003_02209ef4(Obj *o, s32 p) {
    if (!func_020729bc(data_020cbb18, o->unk_7fc)) {
        if (func_0200ec44(o, 0x1c)) {
            Rec *r = &o->unk_7d0;
            V3 v;
            v = r->unk_00;
            Unk_ov003_02209ef4_P::func_ov003_02219c5c(o->unk_7fc, &v, r->unk_0d);
            func_0200ec1c(o, 0x1c);
            func_0200ec1c(o, 9);
        }
        if (p != 0x60 && p != 0x61) func_0200ec1c(o, 0xd);
    }
}
}

namespace ns_02209d50 {
extern "C" void func_ov003_02209d50(Obj *o) {
    s32 a, b;
    V3 p;
    volatile Unk_ov003_02209d50_P3 sv;
    Blk b0;
    Blk b1;
    func_02010914(o);
    if (o->unk_700 != 0x49) {
        Rec *r = &o->unk_7d0;
        p = r->unk_00;
        switch (o->unk_2d4.mid) {
        case 5:
            func_02090330(6, &p, 0, 0);
            break;
        case 6:
            func_0200ecdc(o, 0x841);
            func_0200ec30(o, 9);
            break;
        case 12: {
            func_02090330(8, &p, 0, 0);
            func_0204ee10(&a, &b, &p);
            func_02030504(a, b);
            func_ov003_02219c5c(o->unk_7fc, p, r->unk_0d);
            func_0200ec30(o, 0xd);
            func_0200ec1c(o, 0x1c);
            break;
        }
        }
        if (o->unk_2d4.mid >= 0x18) {
            func_0200ec1c(o, 9);
            V3 *pv = &o->unk_c4;
            sv.x = pv->x;
            sv.y = pv->y;
            sv.z = pv->z;
            s16 h = o->unk_d0;
            b0 = o->unk_294;
            b1 = o->unk_694;
            func_0200e7f4(o);
            func_0200f004(o, 0x1000);
            o->unk_c4.x = sv.x;
            o->unk_c4.y = sv.y;
            o->unk_c4.z = sv.z;
            o->unk_d0 = h;
            o->unk_294 = b0;
            o->unk_694 = b1;
        } else {
            s32 z2 = o->unk_628.z;
            s32 y2 = o->unk_628.y;
            s32 x2 = o->unk_628.x;
            o->unk_820.x = x2;
            o->unk_820.y = y2;
            o->unk_820.z = z2;
            func_0203ee38(&o->unk_820, &o->unk_820);
        }
    }
}
}

namespace ns_022093bc {
extern "C" void func_ov003_022099d0(Obj *o) {
    void *l;
    struct {
        u32 pad;
        s32 a0, b0, a1, b1, a2, b2;
        Pair p0, p1, p2;
    } ab;
    u8 buf[0x24];
    V3 v0, v1, v2;
    if (o->unk_700 == 0x49) {
        if (func_02056654(o->unk_2cc) != 0) func_02010358(o, 0x4f, 3, 0);
        return;
    }
    Unk_ov003_022093bc_RecC *r5 = &o->unk_7d0.c;
    u8 *r6 = &r5->unk_0c;
    s32 lvl = (u32)(o->unk_2d4 << 4) >> 16;
    l = data_020cbb18;
    if (func_020729bc(l, o->unk_7fc) != 0) {
        if (func_020565e8(o->unk_2cc, 0x13) != 0) func_0203a598();
    }
    if (lvl < 0x19) return;
    if (func_0200f4c0(o, 0x400) == 0) return;
    if (func_02056654(o->unk_2cc) == 0) return;
    if (func_020729bc(l, o->unk_7fc) == 0) {
        func_0200ec1c(o, 0x12);
        o->unk_7f8 = func_02007c08(o, o->unk_7ec);
        return;
    }
    switch (*r6) {
    case 0: {
        if (func_0203d820() == 0) break;
        *r6 = 1;
        func_0203e488(o, o);
        func_0200ec30(o, 0x11);
        void *q = func_0209750c();
        Unk_020e2a30 &s = *o;
        func_020a710c(&s, (void *)"obj_etc_player");
        if (Unk_ov003_022099d0_R(&o->unk_81c, 0x136a, 0x136a)) {
            if (func_02098044(q, 0x27) == 0) {
                o->unk_10a = 0x21;
                func_0209801c(q, 0x27);
                goto l54;
            }
        }
        if (Unk_ov003_022099d0_R(&o->unk_81c, 0x137b, 0x137b)) {
            if (func_02098044(q, 0x28) == 0) {
                o->unk_10a = 0x23;
                func_0209801c(q, 0x28);
                goto l54;
            }
        }
        o->unk_10a = 1;
        func_02062650(buf, &o->unk_81c);
        func_020679ec(o->unk_128, 0, buf, 7);
        func_0206260c(buf);
    l54:
        o->unk_128->unk_08 = 1;
        func_02034d70(0x12);
        func_02034dd0(0xc, 0, 1);
        func_02034e10(0xd, 0x39, 0x7f, 1);
        o->unk_818 = 0xa;
        break;
    }
    case 1:
        if (o->unk_128 != 0) {
            if (o->unk_128->unk_04 != 0) *r6 = 2;
        }
        break;
    case 2:
        if (func_02098ffc() == -1) {
            *r6 = 3;
            o->unk_818 = 2;
            break;
        }
        if (o->unk_128 == 0) break;
        if (o->unk_128->unk_04 != 0) break;
        func_0203e47c(o, o);
        func_0200ec1c(o, 0x11);
        func_0203d7f8();
        ab.a0 = 0;
        ab.b0 = 0;
        v0.x = r5->unk_00.x;
        v0.y = r5->unk_00.y;
        v0.z = r5->unk_00.z;
        func_0204ee10(&ab.a0, &ab.b0, &v0);
        ab.p0.a = ab.a0;
        ab.p0.b = ab.b0;
        func_ov003_0220991c(o, &ab.p0, 0, 6, -1);
        func_0203a844();
        break;
    case 3:
        if (o->unk_818 >= 0xf) {
            *r6 = 4;
            break;
        }
        if (o->unk_128 == 0) break;
        if (o->unk_128->unk_04 != 0) break;
        func_0203e47c(o, o);
        func_0200ec1c(o, 0x11);
        ab.a1 = 0;
        ab.b1 = 0;
        v1.x = r5->unk_00.x;
        v1.y = r5->unk_00.y;
        v1.z = r5->unk_00.z;
        func_0204ee10(&ab.a1, &ab.b1, &v1);
        ab.p1.a = ab.a1;
        ab.p1.b = ab.b1;
        func_ov003_0220991c(o, &ab.p1, 1, 6, -1);
        func_0203a844();
        break;
    case 4:
        if (o->unk_128 == 0) break;
        if (o->unk_128->unk_04 != 0) break;
        if (func_0206ec6c() == 0) break;
        func_0203e47c(o, o);
        func_0200ec1c(o, 0x11);
        func_0203d7f8();
        *r6 = 5;
        break;
    case 5:
        if (o->unk_808 != -1) break;
        ab.a2 = 0;
        ab.b2 = 0;
        v2.x = r5->unk_00.x;
        v2.y = r5->unk_00.y;
        v2.z = r5->unk_00.z;
        func_0204ee10(&ab.a2, &ab.b2, &v2);
        u32 hh = o->unk_81c;
        ab.p2.a = ab.a2;
        ab.p2.b = ab.b2;
        func_ov003_022095e8(o, 2, &ab.p2, hh, 6, -1);
        func_0203a844();
        break;
    }
}
}

namespace ns_022093bc {
extern "C" void func_ov003_02209964(Obj *o) {
    func_ov003_02209d50(o);
    if (func_020729bc(data_020cbb18, o->unk_7fc) != 0) {
        if ((u32)(o->unk_2d4 << 4) >> 16 >= 0x19) func_020109c4(o);
    } else {
        V3 v;
        V3 *pv = &o->unk_7d0.c.unk_00;
        v.x = pv->x;
        v.y = pv->y;
        v.z = pv->z;
        func_0200ede8(o, &v);
    }
    func_0201071c(o);
    func_ov003_022099d0(o);
}
}

namespace ns_022093bc {
extern "C" s32 func_ov003_0220991c(Obj *o, Pair *p, u32 c, u32 d, s32 e) {
    Msg m;
    u8 *pl = (u8 *)&m.v_022093bc.unk_0c;
    _ZN12Unk_0200e2c013func_0200e2c0Eiis(&m, 0x60, d, *(s16 *)&e);
    pl[0] = p->a;
    pl[1] = p->b;
    pl[2] = c;
    s32 r = func_0200e248(o, &m);
    return r;
}
}

namespace ns_022093bc {
extern "C" void func_ov003_02209914(Sub *s, u8 a, u8 b, u8 c) {
    s->unk_00 = a;
    s->unk_01 = b;
    s->unk_02 = c;
}
}

namespace ns_022093bc {
extern "C" void func_ov003_02209900(Sub *s, u8 *a, u8 *b, u8 *c) {
    *a = s->unk_00;
    *b = s->unk_01;
    *c = s->unk_02;
}
}

namespace ns_022093bc {
extern "C" void func_ov003_022098bc(Obj *o, Unk_ov003_022093bc_Msg3 *m) {
    u8 *q = &m->b0;
    Unk_ov003_022093bc_RecB *r = &o->unk_7d0.b;
    u8 t2 = q[2];
    u8 t0 = m->b0;
    u8 t1 = q[1];
    r->unk_02 = t2;
    r->unk_00 = t0;
    r->unk_01 = t1;
    func_ov003_02209914(&o->unk_8ec, t0, t1, t2);
    func_02010358(o, 0x50, 3, 0);
    func_0200ecdc(o, 0x4f);
}
}

namespace ns_022093bc {
extern "C" void func_ov003_0220987c(Obj *o, s32 a) {
    u8 b[3];
    func_ov003_02209900(&o->unk_8ec, &b[0], &b[1], &b[2]);
    Pair p;
    p.a = b[0];
    p.b = b[1];
    func_ov003_0220991c(o, &p, b[2], 6, a);
}
}

namespace ns_022093bc {
extern "C" void func_ov003_02209810(Obj *o) {
    s32 r4;
    func_02010914(o);
    if (o->unk_700 == 0x50) {
        s32 t = (s32)(((u32)(o->unk_2d4 >> 12) << 16) >> 4);
        r4 = 0x1000 - t / 6;
        if (r4 < 0) {
            r4 = 0;
            func_0200ec1c(o, 0xd);
        }
    } else {
        r4 = 0;
    }
    o->unk_82c = r4;
    o->unk_830 = r4;
    o->unk_834 = r4;
    func_0200f004(o, r4);
}
}

namespace ns_022093bc {
extern "C" void func_ov003_02209650(Obj *o) {
    Unk_ov003_022093bc_RecB *g = &o->unk_7d0.b;
    u8 *st = &g->unk_02;
    switch (g->unk_02) {
    case 0:
        if (func_02056654(o->unk_2cc) == 0) break;
        o->unk_7f8 = func_02007c08(o, o->unk_7ec);
        func_0200ce98(o, 3, 1, -1);
        if (func_020729bc(data_020cbb18, o->unk_7fc) == 0) break;
        func_02099124(&o->unk_81c);
        break;
    case 1:
        if (o->unk_700 == 0x50) {
            if (func_02056654(o->unk_2cc) == 0) break;
            func_020103b4(o, 0x6c, 3, 3);
        }
        if (func_020729bc(data_020cbb18, o->unk_7fc) != 0) {
            s32 s = o->unk_818;
            if (s == 5) {
                if (func_0206e75c(o->unk_81c) != 0) o->unk_818 = 6;
            } else if (s == 6) {
                if (func_0206ec6c() == 0) break;
                o->unk_818 = 0xf;
                if (func_0206ed18() == 0) goto l76c;
                func_0200ec1c(o, 0xd);
                if (func_0200ec44(o, 0x11) != 0) {
                    func_0200ec1c(o, 0x11);
                    func_0203e47c(o, o);
                }
                func_0203d7f8();
                o->unk_7f8 = func_02007c08(o, o->unk_7ec);
                func_0200ce98(o, 3, 1, -1);
            } else if (s >= 0xf) {
            l76c:
                if (func_0200ec44(o, 0x11) != 0) {
                    func_0200ec1c(o, 0x11);
                    func_0203e47c(o, o);
                }
                func_0203d7f8();
                *st = *st + 1;
            }
        } else {
            o->unk_7f8 = func_02007c08(o, o->unk_7ec);
            func_0200ec1c(o, 0xd);
        }
        break;
    case 2:
        if (o->unk_808 != -1) break;
        Pair p;
        u32 pb = g->unk_01;
        u32 v = o->unk_81c;
        u32 pa = g->unk_00;
        p.a = pa;
        p.b = pb;
        func_ov003_022095e8(o, 2, &p, v, 6, -1);
        func_0200ec1c(o, 0xd);
        break;
    }
}
}

namespace ns_022093bc {
extern "C" void func_ov003_02209634(Obj *o) {
    func_ov003_02209810(o);
    func_0201071c(o);
    func_ov003_02209650(o);
}
}

namespace ns_022093bc {
extern "C" s32 func_ov003_022095e8(Obj *o, u32 k, Pair *p, u32 v, s32 a, s16 b) {
    Msg m;
    Pay *pl = &m.v_022093bc.unk_0c;
    _ZN12Unk_0200e2c013func_0200e2c0Eiis(&m, 0x61, a, b);
    pl->h = v;
    pl->b4 = k;
    pl->b2 = p->a;
    pl->b3 = p->b;
    s32 r = func_0200e248(o, &m);
    return r;
}
}

namespace ns_022093bc {
extern "C" void func_ov003_022095cc(Sub *s, u32 v, u8 a, u8 b, u8 c) {
    func_02076964(s, v);
    s->unk_02 = a;
    s->unk_03 = b;
    s->unk_04 = c;
}
}

namespace ns_022093bc {
extern "C" void func_ov003_02209500(Obj *o, Msg *m) {
    u32 h;
    Pay *pl = &m->v_022093bc.unk_0c;
    Unk_ov003_022093bc_RecA *r = &o->unk_7d0.a;
    u8 k = pl->b4;
    u32 x = pl->b2;
    u32 z = pl->b3;
    V3 v;
    func_0204ed8c(&v, x, z);
    h = m->v_022093bc.unk_0c.h;
    if (k == 2) {
        if (func_020729bc(data_020cbb18, o->unk_7fc) != 0) {
            o->unk_808 = func_02043380(o->unk_7fc, 2, 0, o->unk_81c);
        }
    } else if (o->unk_700 == 0x6c) {
        k = 3;
    }
    r->unk_00 = h;
    r->unk_05 = x;
    r->unk_06 = z;
    r->unk_04 = k;
    r->unk_07 = 0;
    r->unk_02 = func_020e7b98(v.x - o->unk_5c.x, v.z - o->unk_5c.z);
    func_ov003_022095cc(&o->unk_8ec, h, (u8)x, (u8)z, k);
    func_02010358(o, 0x49, 7, 0);
    func_0200ec1c(o, 0xd);
}
}

namespace ns_022093bc {
extern "C" void func_ov003_022094fc() {
}
}

namespace ns_022093bc {
extern "C" void func_ov003_022094ec(Obj *o) {
    func_0200f504(o, o->unk_7d0.a.unk_02);
}
}

namespace ns_022093bc {
extern "C" void func_ov003_02209428(Obj *o) {
    Unk_ov003_022093bc_RecA *r = &o->unk_7d0.a;
    if (func_020729bc(data_020cbb18, o->unk_7fc) == 0) {
        o->unk_7f8 = func_02007c08(o, o->unk_7ec);
        return;
    }
    if (o->unk_814 == 1) r->unk_07 = 1;
    if (func_02056654(o->unk_2cc) != 0 || o->unk_700 == 0x4a) {
        if (func_02056654(o->unk_2cc) != 0) func_020103b4(o, 0x4a, 3, 0);
        if (r->unk_04 == 2 && r->unk_07 == 0) return;
        o->unk_7f8 = func_02007c08(o, o->unk_7ec);
        Pair p;
        u32 pb = r->unk_06;
        u32 pa = r->unk_05;
        p.a = pa;
        p.b = pb;
        func_ov003_022093bc(o, r->unk_04, &p, r->unk_00, 6, -1);
    }
}
}

namespace ns_022093bc {
extern "C" void func_ov003_02209408(Obj *o) {
    func_ov003_022094ec(o);
    func_02010914(o);
    func_0201071c(o);
    func_ov003_02209428(o);
}
}

namespace ns_022093bc {
extern "C" s32 func_ov003_022093bc(Obj *o, u32 k, Pair *p, u32 v, s32 a, s16 b) {
    Msg m;
    Pay *pl = &m.v_022093bc.unk_0c;
    _ZN12Unk_0200e2c013func_0200e2c0Eiis(&m, 0x62, a, b);
    pl->b4 = k;
    pl->b2 = p->a;
    pl->b3 = p->b;
    pl->h = v;
    s32 r = func_0200e248(o, &m);
    return r;
}
}

namespace ns_02208a58 {
extern "C" void func_ov003_02209314(Obj *o, Unk_ov003_02209314_Arg *a) {
    V3 v;
    u8 *q = (u8 *)&a->unk_0c;
    Rec *r4 = &o->unk_7d0;
    u32 b = q[4];
    func_0204ed8c(&v, q[2], q[3]);
    *(u16 *)&o->unk_7d0.unk_00 = a->unk_0c;
    r4->unk_12 = b;
    r4->unk_04.x = v.x;
    r4->unk_04.y = v.y;
    r4->unk_04.z = v.z;
    r4->unk_10 = func_020e7b98(v.x - o->unk_5c.x, v.z - o->unk_5c.z);
    switch (o->unk_700) {
    case 0x4a:
        func_02010358(o, 0x51, 3, 0);
        break;
    case 0x49:
        if (func_02056654(o->unk_2cc)) {
            func_02010358(o, 0x51, 3, 0);
        }
        break;
    default:
        func_02010358(o, 0x49, 3, 0);
        break;
    }
    func_0200ec1c(o, 0xd);
    func_0200ec30(o, 0x1c);
}
}

namespace ns_02208a58 {
extern "C" void func_ov003_02209310() {}
}

namespace ns_02208a58 {
extern "C" void func_ov003_02209284(Obj *o) {
    volatile V3 v;
    V3 w;
    V3 x;
    void *g = data_020cbb18;
    if (!func_020729bc(g, o->unk_7fc)) {
        if (func_0200ec44(o, 0x1c)) {
            Rec *r = &o->unk_7d0;
            v.x = r->unk_04.x;
            v.y = r->unk_04.y;
            v.z = r->unk_04.z;
            if (func_020729bc(g, o->unk_7fc)) {
                w.x = v.x;
                w.y = v.y;
                w.z = v.z;
                func_ov003_02219b84(o->unk_7fc, &w);
            } else {
                x.x = v.x;
                x.y = v.y;
                x.z = v.z;
                func_ov003_02219b18(o->unk_7fc, &x);
            }
            func_0200ec1c(o, 0x1c);
        }
    }
}
}

namespace ns_02208a58 {
extern "C" void func_ov003_02209274(Obj *o) {
    func_0200f504(o, o->unk_7d0.unk_10);
}
}

namespace ns_02208a58 {
extern "C" void func_ov003_02209170(Obj *o) {
    V3 v;
    V3 w;
    V3 x;
    s16 h;
    if (o->unk_700 != 0x49) {
        Rec *r = &o->unk_7d0;
        v.x = r->unk_04.x;
        v.y = r->unk_04.y;
        v.z = r->unk_04.z;
        h = o->unk_8e;
        s32 k = o->unk_2d4.mid;
        switch (k) {
        case 1:
            func_02090330(9, &v, &h, 0);
            break;
        case 5:
            if (func_020729bc(data_020cbb18, o->unk_7fc)) {
                w.x = v.x;
                w.y = v.y;
                w.z = v.z;
                func_ov003_02219b84(o->unk_7fc, &w);
            } else {
                u16 *p = func_0204eba0(data_021c47c4, &v, 0);
                BOOL f = FALSE;
                if (*p >= 0xfc && *p <= 0xfd) f = TRUE;
                if (f) {
                    x.x = v.x;
                    x.y = v.y;
                    x.z = v.z;
                    func_ov003_02219b18(o->unk_7fc, &x);
                }
            }
            func_0200ec1c(o, 0x1c);
            break;
        case 7:
            func_0200ecdc(o, 0x843);
            func_0200ec30(o, 9);
            break;
        case 0x15:
            func_02090330(0xa, &v, 0, 0);
            break;
        }
    }
    func_02010914(o);
}
}

namespace ns_02208a58 {
extern "C" void func_ov003_022090a8(Obj *o) {
    if (func_02056654(o->unk_2cc)) {
        Rec *r5 = &o->unk_7d0;
        if (o->unk_700 == 0x49) {
            func_02010358(o, 0x51, 3, 0);
        } else {
            o->unk_7f8 = func_02007c08(o, o->unk_7ec);
            u32 b = r5->unk_12;
            if (b == 1) {
                func_0200c358(o, 3, 5, -1);
            } else if (func_020729bc(data_020cbb18, o->unk_7fc) && b == 3) {
                if (func_0200ec44(o, 0x11)) {
                    func_0200ec1c(o, 0x11);
                    func_0203e47c(o, o);
                }
                func_02007d30(o, 3, 1, -1);
            } else {
                func_0200ce98(o, 3, 1, -1);
            }
        }
    }
}
}

namespace ns_02208a58 {
extern "C" void func_ov003_02209068(Obj *o) {
    V3 v;
    func_ov003_02209274(o);
    func_ov003_02209170(o);
    Rec *r = &o->unk_7d0;
    v.x = r->unk_04.x;
    v.y = r->unk_04.y;
    v.z = r->unk_04.z;
    func_0200ede8(o, &v);
    func_0201071c(o);
    func_ov003_022090a8(o);
}
}

namespace ns_02208a58 {
extern "C" s32 func_ov003_02209030(Obj *o, s32 a, s16 b) {
    Msg m;
    _ZN12Unk_0200e2c013func_0200e2c0Eiis(&m, 0x63, a, b);
    s32 r = func_0200e248(o, &m);
    return r;
}
}

namespace ns_02208a58 {
extern "C" void func_ov003_0220902c(u8 *p, u32 v) {
    *p = v;
}
}

namespace ns_02208a58 {
extern "C" void func_ov003_02209024(u8 *p, u8 *out) {
    *out = *p;
}
}

namespace ns_02208a58 {
extern "C" void func_ov003_02209004(Obj *o) {
    func_02010358(o, 0x61, 3, 0);
    o->unk_7d0.unk_00 = -1;
}
}

namespace ns_02208a58 {
extern "C" s32 func_ov003_02208ff8(Obj *o, s16 b) {
    return func_ov003_02209030(o, 6, b);
}
}

namespace ns_02208a58 {
extern "C" void func_ov003_02208fb0(Obj *o) {
    V3 t;
    if (o->unk_7d0.unk_00 != -1) {
        func_020902f8(o->unk_7d0.unk_00);
    }
    func_0200f43c(&t, o);
    data_ov003_02258f00 = 0;
    data_ov003_02258f18.x = t.x;
    data_ov003_02258f18.y = t.y;
    data_ov003_02258f18.z = t.z;
}
}

namespace ns_02208a58 {
extern "C" void func_ov003_02208ec8(Obj *o) {
    V3 v;
    V3 t;
    V3 t2;
    func_02010914(o);
    s32 k = o->unk_2d4.mid;
    s32 *h = &o->unk_7d0.unk_00;
    if (k >= 5 && k <= 0x23) {
        s32 z = o->unk_628.z;
        s32 y = o->unk_628.y;
        v.x = o->unk_628.x;
        v.y = y;
        v.z = z;
        func_0203ee38(&v, &v);
        if (*h == -1) {
            *h = func_02090330(0x26, &v, &o->unk_8e, 0);
            func_0200ecdc(o, 0x854);
            func_0200f43c(&t, o);
            data_ov003_02258f00 = 1;
            data_ov003_02258f18.x = t.x;
            data_ov003_02258f18.y = t.y;
            data_ov003_02258f18.z = t.z;
        } else {
            func_020902d4(*h, &v, 0);
        }
        switch (k) {
        case 0x14:
            func_0200f43c(&t2, o);
            v.x = t2.x;
            v.y = t2.y;
            v.z = t2.z;
            func_0200f8f8(o, &v, 1, 5);
            break;
        case 0x23:
            if (*h != -1) {
                func_020902f8(*h);
                *h = -1;
            }
            break;
        }
    }
}
}

namespace ns_02208a58 {
extern "C" void func_ov003_02208e38(Obj *o) {
    if (func_02056654(o->unk_2cc)) {
        o->unk_7f8 = func_02007c08(o, o->unk_7ec);
        func_0200ce98(o, 3, 1, -1);
    }
    u8 *p6 = &o->unk_8ec;
    func_ov003_0220902c(p6, 0);
    if (o->unk_2d4.mid >= 0x21 && func_ov003_02205c28(o)) {
        s32 *p4 = &o->unk_7d0.unk_00;
        func_ov003_0220902c(p6, 1);
        if (o->unk_7d0.unk_00 != -1) {
            func_020902f8(o->unk_7d0.unk_00);
            *p4 = -1;
        }
    }
}
}

namespace ns_02208a58 {
extern "C" void func_ov003_02208d90(Obj *o) {
    u8 b;
    s32 out;
    o->unk_7f8 = func_02007c08(o, o->unk_7ec);
    u8 *p6 = &o->unk_8ec;
    func_ov003_02209024(p6, &b);
    if (b != 0 && func_02095574(&out, -1, o->unk_7fc) && out == 0x63) {
        func_ov003_02209030(o, 6, -1);
        s32 *p4 = &o->unk_7d0.unk_00;
        func_ov003_0220902c(p6, 1);
        if (o->unk_7d0.unk_00 != -1) {
            func_020902f8(o->unk_7d0.unk_00);
            *p4 = -1;
        }
    } else {
        if (func_02056654(o->unk_2cc)) {
            func_0200ce98(o, 3, 1, -1);
        }
    }
}
}

namespace ns_02208a58 {
extern "C" void func_ov003_02208d50(Obj *o) {
    func_ov003_02208ec8(o);
    func_0201071c(o);
    func_0201065c(o);
    if (func_020729bc(data_020cbb18, o->unk_7fc)) {
        func_ov003_02208e38(o);
    } else {
        func_ov003_02208d90(o);
    }
}
}

namespace ns_02208a58 {
extern "C" s32 func_ov003_02208d18(Obj *o, s32 a, s16 b) {
    Msg m;
    _ZN12Unk_0200e2c013func_0200e2c0Eiis(&m, 0x64, a, b);
    s32 r = func_0200e248(o, &m);
    return r;
}
}

namespace ns_02208a58 {
extern "C" void func_ov003_02208ca0(Obj *o) {
    if (func_020729bc(data_020cbb18, o->unk_7fc) && !func_0203d7c4()) {
        o->unk_7f8 = func_02007c08(o, o->unk_7ec);
        func_0200ce98(o, 3, 1, -1);
    } else {
        func_020b8e60(o->unk_7fc);
        func_02010358(o, 0x5f, 3, 0);
        func_0205e1a0(o->unk_59c, 0x22, 3, 1);
    }
}
}

namespace ns_02208a58 {
extern "C" s32 func_ov003_02208c94(Obj *o, s16 b) {
    return func_ov003_02208d18(o, 6, b);
}
}

namespace ns_02208a58 {
extern "C" void func_ov003_02208bc0(Obj *o) {
    V3 v;
    V3 w;
    func_0200f478(o, 0x400);
    func_02010914(o);
    if (o->unk_700 == 0x5f) {
        v.x = o->unk_6f0.x;
        v.y = o->unk_6f0.y;
        v.z = o->unk_6f0.z;
        v.y += 0xb00;
        v.z += 0x300;
        if (o->unk_2d4.mid < 0xb) {
            func_0200ec54(o, 0x851, &v);
        } else if (func_020565e8(o->unk_2cc, 0xb)) {
            func_0205f92c(o->unk_5c4, 9);
            w.x = v.x;
            w.y = v.y;
            w.z = v.z;
            func_0205fae8(o->unk_5c4, &w);
            func_0200ecdc(o, 0x852);
            func_0200ecdc(o, 0x853);
            func_0200ec30(o, 9);
        }
    }
}
}

namespace ns_02208a58 {
extern "C" void func_ov003_02208b6c(Obj *o) {
    if (func_02056654(o->unk_2cc)) {
        func_020103b4(o, 0x60, 3, 3);
        if (!func_020729bc(data_020cbb18, o->unk_7fc)) {
            o->unk_7f8 = func_02007c08(o, o->unk_7ec);
        }
    }
}
}

namespace ns_02208a58 {
extern "C" void func_ov003_02208b50(Obj *o) {
    func_ov003_02208bc0(o);
    func_0201071c(o);
    func_ov003_02208b6c(o);
}
}

namespace ns_02208a58 {
extern "C" s32 func_ov003_02208b18(Obj *o, s32 a, s16 b) {
    Msg m;
    _ZN12Unk_0200e2c013func_0200e2c0Eiis(&m, 0x65, a, b);
    s32 r = func_0200e248(o, &m);
    return r;
}
}

namespace ns_02208a58 {
extern "C" void func_ov003_02208b04(Obj *o) {
    func_020103b4(o, 0, 3, 0);
}
}

namespace ns_02208a58 {
extern "C" void func_ov003_02208b00() {}
}

namespace ns_02208a58 {
extern "C" void func_ov003_02208ae4(Obj *o) {
    func_02010914(o);
    func_0201071c(o);
    func_0201065c(o);
}
}

namespace ns_02208a58 {
extern "C" void func_ov003_02208ad8(u8 *d, Pair v, u32 c) {
    d[0] = v.a;
    d[1] = v.b;
    d[2] = c;
}
}

namespace ns_02208a58 {
extern "C" s32 func_ov003_02208a88(Obj *o, Pair *p, u32 c, s32 b, s16 d) {
    Msg m;
    _ZN12Unk_0200e2c013func_0200e2c0Eiis(&m, 0x66, b, d);
    func_ov003_02208ad8((u8 *)&m.v_02208a58.unk_0c, *p, c);
    s32 r = func_0200e248(o, &m);
    return r;
}
}

namespace ns_02208a58 {
extern "C" void func_ov003_02208a70(u8 *r, u32 a, u32 b, V3 *v) {
    r[0xf] = a;
    r[0xe] = 0;
    *(u16 *)(r + 0xc) = b;
    ((V3 *)r)->x = v->x;
    ((V3 *)r)->y = v->y;
    ((V3 *)r)->z = v->z;
}
}

namespace ns_02208a58 {
extern "C" void func_ov003_02208a64(u8 *p, Pair *v) {
    p[0] = v->a;
    p[1] = v->b;
}
}

namespace ns_02208a58 {
extern "C" void func_ov003_02208a58(u8 *p, Pair *out) {
    out->a = p[0];
    out->b = p[1];
}
}

namespace ns_02208108 {
extern "C" void func_ov003_022089d4(Obj *o, u8 *m) {
    u8 *q = m + 0xc;
    RecA *r = (RecA *)((u8 *)o + 0x7d0);
    s32 a = m[0xc];
    s32 b = q[1];
    s32 c = q[2];
    Pair p;
    VD d;
    V3 pos;
    func_0204ed8c(&pos, a, b);
    d.x = pos.x - o->unk_5c.x;
    d.z = pos.z - o->unk_5c.z;
    s32 ang = func_020e7b98(d.x, d.z);
    func_ov003_02208a70(r, c, ang, pos);
    p.a = a;
    p.b = b;
    func_ov003_02208a64(o->unk_8ec, &p);
    func_020103b4(o, 0x64, 3, 0);
    if (r->unk_0f == 1) {
        func_0200ec30(o, 0x1c);
    }
}
}

namespace ns_02208108 {
extern "C" void func_ov003_02208984(Obj *o, s32 a) {
    if (o->unk_7ec == 0x66) {
        o->unk_c80 = a;
    } else {
        Pair p;
        p.a = 0;
        p.b = 0;
        func_ov003_02208a58(o->unk_8ec, &p);
        func_ov003_02208a88(o, p, 0, 6, a);
    }
}
}

namespace ns_02208108 {
extern "C" void func_ov003_02208904(Obj *o, s32 a) {
    if (func_020729bc(data_020cbb18, o->unk_7fc) == 0) {
        if (a == 2) {
            func_0200ec1c(o, 0x1c);
        } else if (a != 0x67) {
            if (func_0200ec44(o, 0x1c)) {
                V3 *p = (V3 *)((u8 *)o + 0x7d0);
                func_ov003_0221977c(o->unk_7fc, *p);
                func_0200ec1c(o, 0x1c);
            }
        } else {
            func_0200ec1c(o, 0x1c);
        }
    } else {
        func_0200ec1c(o, 0x1c);
    }
}
}

namespace ns_02208108 {
extern "C" void func_ov003_022088d8(Obj *o) {
    s16 h = o->unk_8e;
    func_02010d98(&h, *(s16 *)((u8 *)o + 0x7dc));
    func_02010a58(o, &h);
}
}

namespace ns_02208108 {
extern "C" void func_ov003_02208810(Obj *o) {
    RecC *r = (RecC *)((u8 *)o + 0x7d0);
    void *g = data_020cbb18;
    if (func_020729bc(g, o->unk_7fc) != 0) {
        if (r->unk_0f == 0) {
            if (o->unk_814 == 1) {
                r->unk_0f = 1;
            } else if (o->unk_814 == 2) {
                r->unk_0f = 2;
            }
        }
    }
    if (r->unk_0e < 2) {
        r->unk_0e++;
    } else {
        if (func_020729bc(g, o->unk_7fc) == 0) {
            o->unk_7f8 = (s32)func_02007c08(o, o->unk_7ec);
        }
        switch (r->unk_0f) {
        case 0:
            break;
        case 1: {
            V3 v;
            v.x = r->unk_00;
            v.y = r->unk_04;
            v.z = r->unk_08;
            func_ov003_02208764(o, &v, 6, -1);
            break;
        }
        case 2:
            o->unk_7f8 = (s32)func_02007c08(o, o->unk_7ec);
            func_0200ce98(o, 3, 1, -1);
            break;
        }
    }
}
}

namespace ns_02208108 {
extern "C" void func_ov003_022087c8(Obj *o) {
    RecC *r = (RecC *)((u8 *)o + 0x7d0);
    func_02010914(o);
    V3 v;
    v.x = o->unk_7d0;
    v.y = r->unk_04;
    v.z = r->unk_08;
    if (func_0200ede8(o, &v)) {
        func_ov003_022088d8(o);
    }
    func_0201071c(o);
    func_ov003_02208810(o);
}
}

namespace ns_02208108 {
extern "C" void func_ov003_022087b8(V3 *d, V3 v) {
    *d = v;
}
}

namespace ns_02208108 {
extern "C" s32 func_ov003_02208764(Obj *o, V3 *v, s32 a, s16 b) {
    Msg m;
    _ZN12Unk_0200e2c013func_0200e2c0Eiis(&m, 0x67, a, b);
    V3 t;
    func_0204edd8(&t, (s32)v);
    func_ov003_022087b8((V3 *)m.v_02208108.unk_0c, t);
    return func_0200e248(o, &m);
}
}

namespace ns_02208108 {
extern "C" void func_ov003_02208754(RecC *r, s32 a, V3 v) {
    *(u16 *)r = a;
    *(V3 *)((u8 *)r + 4) = v;
}
}

namespace ns_02208108 {
extern "C" void func_ov003_022086c8(Obj *o, u8 *m) {
    VD d;
    u8 *q = m + 0xc;
    V3D l(*(s32 *)(m + 0xc), *(s32 *)(q + 4), *(s32 *)(q + 8));
    d.x = l.x - o->unk_5c.x;
    d.z = l.z - o->unk_5c.z;
    s32 ang = func_020e7b98(d.x, d.z);
    func_ov003_02208754((RecC *)((u8 *)o + 0x7d0), ang, l);
    func_02010358(o, 0x65, 3, 0);
    func_ov003_0221977c(o->unk_7fc, l);
    func_0200ec1c(o, 0x1c);
    func_0200ecdc(o, 0x7da);
    func_0200ec30(o, 9);
}
}

namespace ns_02208108 {
extern "C" void func_ov003_022086c4(Obj *o) {
}
}

namespace ns_02208108 {
extern "C" void func_ov003_02208678(Obj *o) {
    func_02010914(o);
    if (o->unk_700 == 0x65) {
        if (func_020565e8(o->unk_2cc, 3) || func_020565e8(o->unk_2cc, 0xd)) {
            func_02090330(0x23, &o->unk_5c, &o->unk_8e, 0);
        }
    }
}
}

namespace ns_02208108 {
extern "C" void func_ov003_0220864c(Obj *o) {
    s16 h = o->unk_8e;
    func_02010d98(&h, *(s16 *)((u8 *)o + 0x7d0));
    func_02010a58(o, &h);
}
}

namespace ns_02208108 {
extern "C" void func_ov003_022085f8(Obj *o) {
    if (func_02056654(o->unk_2cc)) {
        o->unk_7f8 = (s32)func_02007c08(o, o->unk_7ec);
        func_0200ce98(o, 3, 1, -1);
    }
    if (o->unk_2d4.mid >= 0x16) {
        func_ov003_02205c28(o);
    }
}
}

namespace ns_02208108 {
extern "C" void func_ov003_022085bc(Obj *o) {
    o->unk_7f8 = (s32)func_02007c08(o, o->unk_7ec);
    if (func_02056654(o->unk_2cc)) {
        func_0200ce98(o, 3, 1, -1);
    }
}
}

namespace ns_02208108 {
extern "C" void func_ov003_02208558(Obj *o) {
    RecC *r = (RecC *)((u8 *)o + 0x7d0);
    func_ov003_02208678(o);
    V3 v;
    v.x = r->unk_04;
    v.y = r->unk_08;
    v.z = *(s32 *)((u8 *)r + 0xc);
    if (func_0200ede8(o, &v)) {
        func_ov003_0220864c(o);
    }
    func_0201071c(o);
    if (func_020729bc(data_020cbb18, o->unk_7fc)) {
        func_ov003_022085f8(o);
    } else {
        func_ov003_022085bc(o);
    }
}
}

namespace ns_02208108 {
extern "C" void func_ov003_02208544(void *p, s32 a, s32 b, u8 c, u8 d) {
    u8 *q = (u8 *)p;
    *(s32 *)q = a;
    *(s32 *)(q + 4) = b;
    q[8] = c;
    q[9] = d;
}
}

namespace ns_02208108 {
extern "C" s32 func_ov003_022084f4(Obj *o, s32 x, s32 z, bool a, bool b, s32 c, s32 d) {
    Msg m;
    _ZN12Unk_0200e2c013func_0200e2c0Eiis(&m, 0x68, c, *(s16 *)&d);
    func_ov003_02208544(m.v_02208108.unk_0c, x, z, a, b);
    return func_0200e248(o, &m);
}
}

namespace ns_02208108 {
extern "C" void func_ov003_022084d8(RecA *r, s32 a, s32 x, s32 z, u8 b, u8 c) {
    r->unk_08 = a;
    r->unk_00 = x;
    r->unk_04 = z;
    r->unk_0b = b;
    r->unk_0c = c;
    r->unk_0a = 0;
}
}

namespace ns_02208108 {
extern "C" void func_ov003_022084c0(u8 *p, s32 a, s32 b, u8 c) {
    func_02076a6c(p, a, b);
    p[5] = c;
}
}

namespace ns_02208108 {
extern "C" void func_ov003_022084a8(u8 *p, s32 *a, s32 *b, u8 *c) {
    func_02076a2c(p, a, b);
    *c = p[5];
}
}

namespace ns_02208108 {
extern "C" void func_ov003_02208420(Obj *o, u8 *m) {
    u8 *q = m + 0xc;
    u8 b0 = q[8];
    u8 b1 = q[9];
    VD d;
    V3D v(*(s32 *)(m + 0xc), o->unk_5c.y, *(s32 *)(q + 4));
    d.x = v.x - o->unk_5c.x;
    d.z = v.z - o->unk_5c.z;
    s32 ang = func_020e7b98(d.x, d.z);
    func_ov003_022084d8((RecA *)((u8 *)o + 0x7d0), ang, v.x, v.z, b0, b1);
    func_ov003_022084c0(o->unk_8ec, v.x, v.z, b0 | (b1 << 4));
    if (b1 != 0) {
        func_02010358(o, 0x66, 3, 0);
    } else {
        func_020103b4(o, 0x66, 3, 0);
    }
    func_0200ec30(o, 9);
}
}

namespace ns_02208108 {
extern "C" void func_ov003_022083bc(Obj *o, s32 a) {
    if (o->unk_7ec == 0x68) {
        o->unk_c80 = a;
    } else {
        s32 x, z;
        u8 f;
        func_ov003_022084a8(o->unk_8ec, &x, &z, &f);
        bool t0 = f != 0;
        bool t1 = (f >> 4) != 0;
        func_ov003_022084f4(o, x, z, t0, t1, 6, a);
    }
}
}

namespace ns_02208108 {
extern "C" void func_ov003_02208358(Obj *o) {
    if (func_020729bc(data_020cbb18, o->unk_7fc) == 0) {
        RecA *r = (RecA *)((u8 *)o + 0x7d0);
        if (r->unk_0a < 5) {
            V3 v(r->unk_00, 0, r->unk_04);
            Pair p;
            p.a = 0;
            p.b = 0;
            func_0204ee10(&p.a, &p.b, &v);
            func_ov003_0221cd34(o->unk_7fc, p, 2);
        }
    }
}
}

namespace ns_02208108 {
extern "C" void func_ov003_0220832c(Obj *o) {
    s16 h = o->unk_8e;
    func_02010d98(&h, *(s16 *)((u8 *)o + 0x7d8));
    func_02010a58(o, &h);
}
}

namespace ns_02208108 {
extern "C" void func_ov003_022082a4(Obj *o) {
    RecA *r = (RecA *)((u8 *)o + 0x7d0);
    if (r->unk_0c != 0) {
        if (func_02056654(o->unk_2cc)) {
            func_ov003_0220812c(o, r->unk_00, r->unk_04, r->unk_0b, 1, 6, -1);
        }
    } else {
        s32 t = o->unk_814;
        if (t == 1) {
            r->unk_0c = 1;
            o->unk_2e0 = 1;
        } else if (t == 2) {
            o->unk_7f8 = (s32)func_02007c08(o, o->unk_7ec);
            func_0200ce98(o, 3, 1, -1);
        }
    }
}
}

namespace ns_02208108 {
extern "C" void func_ov003_02208248(Obj *o) {
    RecA *r = (RecA *)((u8 *)o + 0x7d0);
    o->unk_7f8 = (s32)func_02007c08(o, o->unk_7ec);
    if (r->unk_0c != 0) {
        if (func_02056654(o->unk_2cc)) {
            func_ov003_0220812c(o, r->unk_00, r->unk_04, r->unk_0b, 1, 6, -1);
        }
    }
}
}

namespace ns_02208108 {
extern "C" void func_ov003_02208190(Obj *o) {
    RecA *r = (RecA *)((u8 *)o + 0x7d0);
    V3 v(r->unk_00, 0, r->unk_04);
    Pair p;
    p.a = 0;
    p.b = 0;
    func_0204ee10(&p.a, &p.b, &v);
    if (r->unk_0a > 5) {
        func_ov003_0221bf88(o->unk_7fc, p);
    } else {
        r->unk_0a++;
        if (r->unk_0a == 5) {
            func_ov003_0221cd34(o->unk_7fc, p, 2);
        }
    }
    func_02010914(o);
    if (func_020729bc(data_020cbb18, o->unk_7fc)) {
        func_ov003_0220832c(o);
        func_0201071c(o);
        func_ov003_022082a4(o);
    } else {
        if (func_0200ef08(o)) {
            func_ov003_0220832c(o);
        }
        func_0201071c(o);
        func_ov003_02208248(o);
    }
}
}

namespace ns_02208108 {
extern "C" void func_ov003_0220817c(void *p, s32 a, s32 b, u8 c, u8 d) {
    u8 *q = (u8 *)p;
    *(s32 *)q = a;
    *(s32 *)(q + 4) = b;
    q[8] = c;
    q[9] = d;
}
}

namespace ns_02208108 {
extern "C" s32 func_ov003_0220812c(Obj *o, s32 x, s32 z, u8 a, u8 b, s32 c, s16 d) {
    Msg m;
    _ZN12Unk_0200e2c013func_0200e2c0Eiis(&m, 0x69, c, d);
    func_ov003_0220817c(m.v_02208108.unk_0c, x, z, a, b);
    return func_0200e248(o, &m);
}
}

namespace ns_02208108 {
extern "C" void func_ov003_02208108(void *p, s16 a, s32 b, s32 c, u8 d, u8 e) {
    u8 *q = (u8 *)p;
    q[0] = 0;
    *(s16 *)(q + 2) = a;
    *(s32 *)(q + 4) = b;
    *(s32 *)(q + 8) = c;
    q[0xc] = d;
    q[0xd] = e;
}
}

namespace ns_022077c8 {
extern "C" void func_ov003_022080a0(Obj *o, Msg *m) {
    s32 o1, o2;
    Unk_ov003_022080a0_V3 d;
    V3 t;
    V3 *r0 = &m->v_022077c8.unk_0c;
    u8 r4 = *((u8 *)r0 + 8);
    u8 r6 = *((u8 *)r0 + 9);
    s32 r2 = *(s32 *)((u8 *)r0 + 4);
    s32 y = o->unk_5c.y;
    t.x = m->v_022077c8.unk_0c.x;
    t.y = y;
    t.z = r2;
    d.x = t.x - o->unk_5c.x;
    d.z = r2 - o->unk_5c.z;
    s32 r7 = func_020e7b98(d.x, d.z);
    o1 = 0;
    o2 = 0;
    func_0204ee10(&o1, &o2, &t);
    func_ov003_02208108((u8 *)o + 0x7d0, r7, o1, o2, r4, r6);
    func_02010358(o, 0x67, 3, 0);
}
}

namespace ns_022077c8 {
extern "C" void func_ov003_0220809c() {
}
}

namespace ns_022077c8 {
extern "C" void func_ov003_02208048(Obj *o) {
    Pair p;
    func_02010914(o);
    if (func_020565e8(&o->unk_2cc, 5)) {
        s32 *r0 = &o->unk_7d0;
        s32 y = r0[2];
        s32 x = r0[1];
        p.a = x;
        p.b = y;
        func_ov003_0221cd34(o->unk_7fc, &p, 3);
        func_0200ec1c(o, 0x12);
        func_0200ec30(o, 9);
    }
}
}

namespace ns_022077c8 {
extern "C" void func_ov003_0220801c(Obj *o) {
    s16 v = o->unk_8e;
    func_02010d98(&v, *(s16 *)((u8 *)o + 0x7d2));
    func_02010a58(o, &v);
}
}

namespace ns_022077c8 {
extern "C" void func_ov003_02207fbc(Obj *o) {
    u8 r4 = *((u8 *)o + 0x7dc);
    if (func_02056654(&o->unk_2cc)) {
        o->unk_7f8 = func_02007c08(o, o->unk_7ec);
        if (r4 != 0) {
            func_02008770(o, o->unk_8e, 6, -1);
        } else {
            func_0200ce98(o, 3, 1, -1);
        }
    }
}
}

namespace ns_022077c8 {
extern "C" void func_ov003_02207f54(Obj *o) {
    Pair p;
    s32 *r4 = &o->unk_7d0;
    func_ov003_02208048(o);
    if (func_020729bc(data_020cbb18, o->unk_7fc)) {
        func_ov003_0220801c(o);
        func_0201071c(o);
    } else {
        s32 y = r4[2];
        s32 x = r4[1];
        p.a = x;
        p.b = y;
        if (func_0200eee4(o, &p)) {
            func_ov003_0220801c(o);
        }
        func_0201071c(o);
    }
    func_ov003_02207fbc(o);
}
}

namespace ns_022077c8 {
extern "C" void func_ov003_02207f40(V3 *d, V3 v) {
    d->x = v.x;
    d->y = v.y;
    d->z = v.z;
}
}

namespace ns_022077c8 {
extern "C" s32 func_ov003_02207efc(Obj *o, V3 v, s32 a, s16 b) {
    Msg m;
    _ZN12Unk_0200e2c013func_0200e2c0Eiis(&m, 0x6a, a, b);
    func_ov003_02207f40(&m.v_022077c8.unk_0c, v);
    s32 r = func_0200e248(o, &m);
    return r;
}
}

namespace ns_022077c8 {
extern "C" void func_ov003_02207ee8(V3 *d, V3 v) {
    d->x = v.x;
    d->y = v.y;
    d->z = v.z;
}
}

namespace ns_022077c8 {
extern "C" void func_ov003_02207ecc(void *a, V3 *v) {
    func_02076a04(a, v->x, v->y, v->z, 0);
}
}

namespace ns_022077c8 {
extern "C" void func_ov003_02207eb4(void *a, V3 *v) {
    s32 t;
    func_020769dc(a, &v->x, &v->y, &v->z, &t);
}
}

namespace ns_022077c8 {
extern "C" void func_ov003_02207e6c(Obj *o, Msg *m) {
    V3 v;
    func_02010358(o, 0x7a, 3, 0);
    V3 *pv = &m->v_022077c8.unk_0c;
    v.x = pv->x;
    v.y = pv->y;
    v.z = pv->z;
    func_ov003_02207ee8((V3 *)&o->unk_7d0, v);
    func_ov003_02207ecc(o->unk_8ec, &v);
}
}

namespace ns_022077c8 {
extern "C" void func_ov003_02207e3c(Obj *o, s16 a) {
    V3 v;
    func_ov003_02207eb4(o->unk_8ec, &v);
    func_ov003_02207efc(o, v, 6, a);
}
}

namespace ns_022077c8 {
extern "C" void func_ov003_02207e1c(Obj *o) {
    s32 *r2 = &o->unk_7d0;
    func_0200f594(o, r2[0], r2[2], -0x8000);
}
}

namespace ns_022077c8 {
extern "C" s32 func_ov003_02207df4(Obj *o) {
    if (func_02056654(&o->unk_2cc)) {
        func_ov003_02207d9c(o, 6, -1);
    }
}
}

namespace ns_022077c8 {
extern "C" s32 func_ov003_02207dd4(Obj *o) {
    func_ov003_02207e1c(o);
    func_02010914(o);
    func_0201071c(o);
    func_ov003_02207df4(o);
}
}

namespace ns_022077c8 {
extern "C" s32 func_ov003_02207d9c(Obj *o, s32 a, s16 b) {
    Msg m;
    _ZN12Unk_0200e2c013func_0200e2c0Eiis(&m, 0x6b, a, b);
    s32 r = func_0200e248(o, &m);
    return r;
}
}

namespace ns_022077c8 {
extern "C" void func_ov003_02207d60(Obj *o) {
    if (o->unk_700 != 0x7a) {
        func_02010358(o, 0x38, 3, 0);
    }
    u32 t = o->unk_2d0.mid - 1;
    *(u32 *)&o->unk_2d4 = (t << 16) >> 4;
}
}

namespace ns_022077c8 {
extern "C" s32 func_ov003_02207d54(Obj *o, s16 a) {
    return func_ov003_02207d9c(o, 6, a);
}
}

namespace ns_022077c8 {
extern "C" void func_ov003_02207d40(Obj *o) {
    func_02010914(o);
    func_0201071c(o);
}
}

namespace ns_022077c8 {
extern "C" s32 func_ov003_02207d08(Obj *o, s32 a, s16 b) {
    Msg m;
    _ZN12Unk_0200e2c013func_0200e2c0Eiis(&m, 0x6c, a, b);
    s32 r = func_0200e248(o, &m);
    return r;
}
}

namespace ns_022077c8 {
extern "C" void func_ov003_02207cbc(Obj *o) {
    if (o->unk_700 != 0x7a) {
        func_02010358(o, 0x7a, 3, 0);
    }
    u32 v = o->unk_2d0.mid;
    func_0205668c(&o->unk_2cc, v, 3, 0x1000, (u16)(v - 1));
}
}

namespace ns_022077c8 {
extern "C" s32 func_ov003_02207cb0(Obj *o, s16 a) {
    return func_ov003_02207d08(o, 6, a);
}
}

namespace ns_022077c8 {
extern "C" void func_ov003_02207c58(Obj *o) {
    func_02010914(o);
    if (func_02056654(&o->unk_2cc)) {
        func_020103b4(o, 0, 3, 3);
        if (func_020729bc(data_020cbb18, o->unk_7fc) == 0) {
            o->unk_7f8 = func_02007c08(o, o->unk_7ec);
        }
    }
}
}

namespace ns_022077c8 {
extern "C" s32 func_ov003_02207c44(Obj *o) {
    func_ov003_02207c58(o);
    func_0201071c(o);
}
}

namespace ns_022077c8 {
extern "C" s32 func_ov003_02207c08(Obj *o, u32 a, s32 b, s16 c) {
    Msg m;
    _ZN12Unk_0200e2c013func_0200e2c0Eiis(&m, 0x6d, b, c);
    *(u8 *)&m.v_022077c8.unk_0c = a;
    s32 r = func_0200e248(o, &m);
    return r;
}
}

namespace ns_022077c8 {
extern "C" void func_ov003_02207b44(Obj *o, Msg *m) {
    u8 b = *(u8 *)&m->v_022077c8.unk_0c;
    s32 t = func_0200f5b0(o);
    if (t == 3 || t == 4 || t == 10) {
        func_02010358(o, 0x69, 3, 6);
        if (t == 3) {
            func_0205e1a0(o->unk_59c, 0x14, 3, 1);
        } else if (t == 4) {
            func_0205e1a0(o->unk_59c, 2, 9, 1);
        }
    } else {
        func_02010358(o, 0x68, 3, 6);
    }
    func_0203da7c();
    s32 *r4 = &o->unk_7d0;
    *r4 = func_02090330(0x34, o->unk_6dc, 0, 0);
    ((u8 *)r4)[4] = b;
    if (b >= 2) {
        func_0200402c(0x51);
        if (b == 2) {
            func_0200ecdc(o, 0x839);
        } else {
            func_0200ecdc(o, 0x838);
        }
        func_02034dd0(0xc, 0, 0);
    }
    func_0200ecdc(o, 0x816);
}
}

namespace ns_022077c8 {
extern "C" s32 func_ov003_02207b30(Obj *o, s16 a) {
    return func_ov003_02207c08(o, 0, 7, a);
}
}

namespace ns_022077c8 {
extern "C" void func_ov003_02207aec(Obj *o) {
    s32 *r4;
    func_02010914(o);
    r4 = &o->unk_7d0;
    if (*r4 == -1) {
        *r4 = func_02090330(0x34, o->unk_6dc, 0, 0);
    } else {
        func_020902d4(*r4, o->unk_6dc, 0, 0);
    }
}
}

namespace ns_022077c8 {
extern "C" void func_ov003_022079e0(Obj *o) {
    Unk_ov003_022077c8_Rec *r4 = (Unk_ov003_022077c8_Rec *)((u8 *)o + 0x7d0);
    V3 v;
    s32 r6;
    if (func_020565e8(&o->unk_2cc, 0x2e)) {
        if (r4->unk_04 >= 2) {
            func_02034d70(0xc);
            func_02035214(data_021c1b3c + 0x2e4);
        }
    } else if (func_020565e8(&o->unk_2cc, 0x2f)) {
        r6 = func_0204da0c();
        if (func_020729bc(data_020cbb18, o->unk_7fc)) {
            if (r4->unk_04 == 0) {
                if (func_0204d700(r6, &v, 0, 0)) {
                    func_020b4f18(func_020b4934(), 0, &o->unk_5c, 0x1b800000, 0, 2, 2);
                }
            } else if (o->unk_7fc == 0) {
                if (func_0204d700(r6, &v, 0, 0)) {
                    v.z += 0x2000;
                    func_020b4f18(func_020b4934(), 0, &v, 0x1b800000, 0, 2, 2);
                }
            } else {
                if (func_0204d684(r6, &v, 0, 0)) {
                    func_020b4f18(func_020b4934(), 0, &v, 0x1b800000, 0, 2, 2);
                }
            }
        }
    }
}
}

namespace ns_022077c8 {
extern "C" void func_ov003_022079c4(Obj *o) {
    func_ov003_02207aec(o);
    func_0201071c(o);
    Unk_ov003_022079c4_Impl::func_ov003_022079e0(o);
}
}

namespace ns_022077c8 {
extern "C" s32 func_ov003_0220798c(Obj *o, s32 a, s16 b) {
    Msg m;
    _ZN12Unk_0200e2c013func_0200e2c0Eiis(&m, 0x6e, a, b);
    s32 r = func_0200e248(o, &m);
    return r;
}
}

namespace ns_022077c8 {
extern "C" void func_ov003_02207944(Obj *o) {
    s16 v;
    *(u8 *)&o->unk_7d0 = 0;
    v = -0x8000;
    func_02010a58(o, &v);
    func_0200ec1c(o, 0);
    func_02010358(o, 0x6a, 0, 0);
    func_0200ecdc(o, 0x818);
}
}

namespace ns_022077c8 {
extern "C" s32 func_ov003_02207938(Obj *o, s16 a) {
    return func_ov003_0220798c(o, 7, a);
}
}

namespace ns_022077c8 {
extern "C" void func_ov003_022078e0(Obj *o) {
    if (Unk_ov003_022078e0_IsTwo(data_021c3cc0)) {
        func_02010914(o);
        if (o->unk_700 == 0x6a) {
            u32 m = o->unk_2d4.mid;
            if (m == 0x13 || m == 0x19 || m == 0x1e) {
                func_0200f258(o);
            }
        } else {
            func_0200f32c(o);
        }
    }
}
}

namespace ns_022077c8 {
extern "C" void func_ov003_022077e4(Obj *o) {
    u8 *r4 = (u8 *)o + 0x7d0;
    u16 v[2];
    s32 r;
    if (func_02056654(&o->unk_2cc)) {
        *r4 = 1;
        func_020103b4(o, 1, 3, 0);
    }
    if (*r4 != 0) {
        if (func_0200f4c0(o, 0x59a)) {
            func_020351bc(data_021c1b3c + 0x2e4);
            func_0200ed9c(o);
            func_0203d76c();
            o->unk_7f8 = func_02007c08(o, o->unk_7ec);
            func_02010a7c(v, o);
            if (func_0204b2d4(v)) {
                v[1] = 0xfff1;
                s32 a = func_0204b25c(v);
                if (a == func_0204b25c(&v[1])) {
                    r = 1;
                } else {
                    r = 0;
                }
            } else {
                if (v[0] == 0xfff1) {
                    r = 1;
                } else {
                    r = 0;
                }
            }
            if (r == 0) {
                func_ov003_02210628(o, 2, 2, 0, 0, 0, 6, -1);
            } else {
                func_0200ce98(o, 3, 1, -1);
                func_0200ec30(o, 0);
            }
        }
    }
}
}

namespace ns_022077c8 {
extern "C" void func_ov003_022077c8(Obj *o) {
    func_ov003_022078e0(o);
    func_0201071c(o);
    Unk_ov003_022077c8_Impl::func_ov003_022077e4(o);
}
}

namespace ns_02206e94 {
extern "C" s32 func_ov003_02207790(Obj *o, s32 a, s32 b) {
    Msg m;
    _ZN12Unk_0200e2c013func_0200e2c0Eiis(&m, 0x71, a, b);
    s32 r = func_0200e248(o, &m);
    return r;
}
}

namespace ns_02206e94 {
extern "C" void func_ov003_022076f4(Obj *o) {
    Rec *r = &o->unk_7d0;
    s32 st = func_0200f5b0(o);
    o->unk_7d0.unk_00 = st;
    switch (st) {
    case 4:
        func_0205e1a0(o->unk_59c, 7, 2, 1);
        func_02010358(o, 0x8d, 2, 0);
        break;
    case 3:
        func_0205e1a0(o->unk_59c, 0x1d, 2, 1);
        func_02010358(o, 0x8d, 2, 0);
        break;
    case 10:
        func_02010358(o, 0x8d, 2, 0);
        break;
    default:
        func_02010358(o, 0x8b, 2, 0);
        break;
    }
    r->unk_04_b = 0;
    func_0200ec30(o, 9);
    func_0200ecdc(o, 0x7db);
}
}

namespace ns_02206e94 {
extern "C" s32 func_ov003_022076e8(Obj *o, s32 a) {
    return func_ov003_02207790(o, 6, a);
}
}

namespace ns_02206e94 {
extern "C" void func_ov003_022075a4(Obj *o) {
    u16 hh[2];
    V3 vb;
    V3 va;
    V3 out1;
    V3 out2;
    func_02053f20(o->unk_230);
    hh[0] = o->unk_8e;
    if (o->unk_7d0.unk_04_b == 0) {
        if (func_020565e8(o->unk_2cc, 0xa) != 0) {
            func_02010a7c(&hh[1], o);
            BOOL ok = FALSE;
            u32 ra = ((volatile u16 *)hh)[1];
            u32 rb = ((volatile u16 *)hh)[1];
            if (rb < 0x137c || ra > 0x137c) {
            } else {
                ok = TRUE;
            }
            if (ok) {
                s32 t = o->unk_688;
                if (t == 0 && o->unk_68c == 0 && o->unk_690 == 0) {
                    V3 *pv = &o->unk_5c;
                    va.x = o->unk_5c.x;
                    va.y = pv->y;
                    va.z = pv->z;
                } else {
                    va.x = t;
                    va.y = o->unk_68c;
                    va.z = o->unk_690;
                    func_0203ee38(&va, &va);
                }
                func_02090330(0x32, &va, 0, 0);
                func_020946f0(0, o->unk_7fc);
            }
        }
        if (func_020565e8(o->unk_2cc, 7) != 0) {
            func_0200f3ec(&out1, o, &o->unk_5c, &hh[0], (u32)data_ov003_02230ad0);
            vb.x = out1.x;
            vb.y = out1.y;
            vb.z = out1.z;
            func_02090330(0x39, &vb, (s32)&hh[0], 0);
        }
        if (func_020565e8(o->unk_2cc, 9) != 0) {
            func_0200f3ec(&out2, o, &o->unk_5c, &hh[0], (u32)data_ov003_02230ad8);
            vb.x = out2.x;
            vb.y = out2.y;
            vb.z = out2.z;
            func_02090330(0x37, &vb, (s32)&hh[0], 0);
        }
    }
}
}

namespace ns_02206e94 {
extern "C" void func_ov003_02207550(Obj *o) {
    if (o->unk_7d0.unk_04_b == 1) {
        if (func_02056654(o->unk_2cc) != 0) {
            o->unk_7f8 = func_02007c08(o, o->unk_7ec);
            func_0200ce98(o, 3, 1, -1);
            o->unk_8e4 = 0x3c;
        }
    }
}
}

namespace ns_02206e94 {
extern "C" void func_ov003_02207464(Obj *o) {
    Rec *r = &o->unk_7d0;
    if (r->unk_04_b == 0) {
        s32 t = func_02010d5c(o->unk_98, 0, 0x7b);
        func_02010a34(o, &t);
        if (o->unk_98 == 0) {
            if (func_02056654(o->unk_2cc) != 0) {
                switch (r->unk_00) {
                case 4:
                    func_0205e1a0(o->unk_59c, 8, 3, 0);
                    func_02010358(o, 0x8e, 3, 0);
                    break;
                case 3:
                    func_0205e1a0(o->unk_59c, 0x1e, 3, 0);
                    func_02010358(o, 0x8e, 3, 0);
                    break;
                case 10:
                    func_02010358(o, 0x8e, 3, 0);
                    break;
                default:
                    func_02010358(o, 0x8c, 3, 0);
                    break;
                }
                r->unk_04_b = 1;
                if (func_020729bc(data_020cbb18, o->unk_7fc) != 0) {
                    void *p = func_0209750c();
                    if (p != 0) {
                        if (func_02098044(p, 0x17) != 0) {
                            func_0209801c(p, 0x1a);
                        }
                    }
                }
            }
        }
    }
}
}

namespace ns_02206e94 {
extern "C" void func_ov003_0220743c(Obj *o) {
    func_ov003_02207464(o);
    func_ov003_022075a4(o);
    func_020109c4(o);
    func_0201071c(o);
    ns_0220743c::func_ov003_02207550(o);
}
}

namespace ns_02206e94 {
extern "C" s32 func_ov003_02207404(Obj *o, s32 a, s32 b) {
    Msg m;
    _ZN12Unk_0200e2c013func_0200e2c0Eiis(&m, 0x72, a, b);
    s32 r = func_0200e248(o, &m);
    return r;
}
}

namespace ns_02206e94 {
extern "C" s32 func_ov003_022073d4(Obj *o) {
    func_02010358(o, 0x9c, 3, 0);
    if (func_020729bc(data_020cbb18, o->unk_7fc) != 0) {
        func_020b8df0();
    }
}
}

namespace ns_02206e94 {
extern "C" s32 func_ov003_022073c8(Obj *o, s32 a) {
    return func_ov003_02207404(o, 6, a);
}
}

namespace ns_02206e94 {
extern "C" void func_ov003_0220739c(Obj *o) {
    if (o->unk_98 != 0) {
        s32 t = func_02010d5c(o->unk_98, 0, 0x171);
        func_02010a34(o, &t);
    }
}
}

namespace ns_02206e94 {
extern "C" void func_ov003_02207324(Obj *o) {
    func_0200f4c0(o, 0x59a);
    if (func_02056654(o->unk_2cc) != 0) {
        o->unk_7f8 = func_02007c08(o, o->unk_7ec);
        func_0200ce98(o, 3, 1, -1);
    }
    if (func_020729bc(data_020cbb18, o->unk_7fc) != 0) {
        if (o->unk_2d4.mid >= 0x1a) {
            func_ov003_02205c28(o);
        }
    }
}
}

namespace ns_02206e94 {
extern "C" void func_ov003_022072fc(Obj *o) {
    func_02010914(o);
    func_020109c4(o);
    func_0201071c(o);
    func_ov003_0220739c(o);
    ns_022072fc::func_ov003_02207324(o);
}
}

namespace ns_02206e94 {
extern "C" s32 func_ov003_022072b8(Obj *o, s32 *p, s32 b, s32 c) {
    Msg m;
    Unk_ov003_022072b8_P &q = *(Unk_ov003_022072b8_P *)&m.v_02206e94.unk_0c;
    _ZN12Unk_0200e2c013func_0200e2c0Eiis(&m, 0x73, b, c);
    q.a = p[0];
    q.b = p[1];
    s32 r = func_0200e248(o, &m);
    return r;
}
}

namespace ns_02206e94 {
extern "C" void func_ov003_022072b0(u8 *p, u8 a, u8 b) {
    p[0] = a;
    p[1] = b;
}
}

namespace ns_02206e94 {
extern "C" void func_ov003_022072a4(u8 *s, u8 *a, u8 *b) {
    *a = s[0];
    *b = s[1];
}
}

namespace ns_02206e94 {
extern "C" s32 func_ov003_02207224(Obj *o, u8 *a) {
    Unk_ov003_022072b8_P *q = (Unk_ov003_022072b8_P *)(a + 0xc);
    V3 v;
    Rec *r = &o->unk_7d0;
    s32 c0 = q->a;
    s32 c1 = q->b;
    func_0204ed8c(&v, c0, c1);
    o->unk_7d0.unk_00 = v.x;
    r->unk_04 = v.z;
    r->unk_08 = -1;
    func_020103b4(o, 0x90, 3, 0);
    if (func_0200f5b0(o) == 4) {
        func_0205e1a0(o->unk_59c, 0xf, 3, 0);
    }
    func_ov003_022072b0(o->unk_8ec, c0, c1);
    func_0200ecdc(o, 0x7ee);
}
}

namespace ns_02206e94 {
extern "C" s32 func_ov003_022071ec(Obj *o, s32 a) {
    u8 b[2];
    s32 p[2];
    func_ov003_022072a4(o->unk_8ec, &b[0], &b[1]);
    p[0] = b[0];
    p[1] = b[1];
    return func_ov003_022072b8(o, p, 6, a);
}
}

namespace ns_02206e94 {
extern "C" void func_ov003_0220714c(Obj *o, s32 a) {
    Rec *r = &o->unk_7d0;
    Unk_ov003_0220714c_T v;
    s32 z = r->unk_04;
    s32 y = o->unk_5c.y;
    s32 x = r->unk_00;
    v.x = x;
    v.y = y;
    v.z = z;
    V3 *pw = &o->unk_5c;
    pw->x = v.x;
    pw->y = v.y;
    pw->z = v.z;
    if (func_0200ec44(o, 0x12) != 0) {
        if (a == 0x74 || a == 0x75) {
            V3 t;
            V3 *pv = &o->unk_5c;
            t.x = o->unk_5c.x;
            t.y = pv->y;
            t.z = pv->z;
            func_ov003_02219bf0(o->unk_7fc, &t);
        }
        func_0200ec1c(o, 0x12);
    }
    if (a != 0x74 && a != 0x75) {
        V3 t;
        V3 *pv = &o->unk_5c;
        t.x = o->unk_5c.x;
        t.y = pv->y;
        t.z = pv->z;
        func_ov003_0221950c(o->unk_7fc, &t);
    }
    if (a != 0x74) {
        s32 h = r->unk_08;
        if (h != -1) {
            func_020902f8(h);
        }
    }
}
}

namespace ns_02206e94 {
extern "C" s32 func_ov003_022070fc(Obj *o) {
    func_02010914(o);
    s32 *p = (s32 *)&o->unk_7d0.unk_08;
    s32 z = 0;
    if (*p == -1) {
        *p = func_02090330(0x4c, o->unk_6dc, z, z);
    } else {
        func_020902d4(*p, o->unk_6dc, z, z);
    }
    func_0200ec54(o, 0x8a, &o->unk_5c);
}
}

namespace ns_02206e94 {
extern "C" void func_ov003_02206fd8(Obj *o) {
    Rec *r = &o->unk_7d0;
    if (o->unk_700 == 0x90) {
        volatile V3 v;
        s32 z = r->unk_04;
        s32 x = r->unk_00;
        v.x = x;
        v.y = 0;
        v.z = z;
        func_0200f594(o, x, z, o->unk_8e);
        V3 &pv = o->unk_5c;
        s32 pz = pv.z;
        s32 px = pv.x;
        if (px == v.x && pz == v.z) {
            o->unk_2e0 = 1;
        } else {
            goto end;
        }
    }
    if (func_02056654(o->unk_2cc) != 0) {
        if (o->unk_700 == 0x91) {
            func_ov003_02206f88(o, r->unk_08, 6, -1);
            func_0200ec30(o, 9);
        } else {
            struct { V3 pad; V3 b; } l;
            func_02010358(o, 0x91, 3, 0);
            V3 *pv = &o->unk_5c;
            l.b.x = o->unk_5c.x;
            l.b.y = pv->y;
            l.b.z = pv->z;
            Unk_ov003_02206fd8_X x;
            func_020339bc(&x, &l.b, 0, 0);
            V3 c;
            if (x.unk_34 == 0x13) {
                func_020902b0(0x8f, &l.b, 0, 0);
            } else {
                func_020902b0(0x8e, &l.b, 0, 0);
            }
            func_0200ecdc(o, 0x7e8);
            func_0200ec30(o, 9);
            c.x = l.b.x;
            c.y = l.b.y;
            c.z = l.b.z;
            func_ov003_02219bf0(o->unk_7fc, &c);
            func_0200ec1c(o, 0x12);
            if (func_0200f5b0(o) == 4) {
                func_0205e1a0(o->unk_59c, 0x10, 3, 1);
            }
            func_02033988(&x);
        }
    }
end:;
}
}

namespace ns_02206e94 {
extern "C" void func_ov003_02206fc4(Obj *o) {
    func_ov003_022070fc(o);
    ns_02206fc4::func_ov003_02206fd8(o);
}
}

namespace ns_02206e94 {
extern "C" s32 func_ov003_02206f88(Obj *o, s32 a, s32 b, s32 c) {
    Msg m;
    _ZN12Unk_0200e2c013func_0200e2c0Eiis(&m, 0x74, b, c);
    m.v_02206e94.unk_0c.x = a;
    s32 r = func_0200e248(o, &m);
    return r;
}
}

namespace ns_02206e94 {
extern "C" void func_ov003_02206f0c(Obj *o, s32 *a) {
    s32 t;
    func_020103b4(o, 0x92, 3, 0);
    o->unk_2dc = 0x800;
    t = a[3];
    Rec *r = &o->unk_7d0;
    r->unk_04 = 0x800;
    r->unk_08 = 0x800;
    r->unk_0c = 0;
    r->unk_10 = 0;
    o->unk_7d0.unk_00 = func_0200d640(o);
    r->unk_14 = func_0200d634(o);
    r->unk_18 = t;
    func_0200ec1c(o, 9);
    if (func_0200f5b0(o) == 4) {
        func_0205e1a0(o->unk_59c, 0x11, 3, 0);
        func_0205e184(o->unk_59c, 0x800);
    }
}
}

namespace ns_02206e94 {
extern "C" s32 func_ov003_02206edc(Obj *o, s32 a) {
    s32 st = o->unk_7ec;
    if (st != 0x73) {
        if (st == 0x74) {
            o->unk_c80 = a;
        } else {
            func_ov003_02206f88(o, -1, 6, a);
        }
    }
}
}

namespace ns_02206e94 {
extern "C" void func_ov003_02206e94(Obj *o, s32 a) {
    if (o->unk_7d0.unk_18 != -1) {
        func_020902f8(o->unk_7d0.unk_18);
    }
    if (a != 0x75) {
        V3 v;
        V3 *pv = &o->unk_5c;
        v.x = o->unk_5c.x;
        v.y = pv->y;
        v.z = pv->z;
        func_ov003_0221950c(o->unk_7fc, &v);
    }
}
}

namespace ns_02206574 {
extern "C" void func_ov003_02206de8(Obj *o) {
    Unk_ov003_02206c04_St *r6 = &o->unk_7d0;
    s32 *r4 = &r6->f4;
    if (r6->fc >= 10) {
        *r4 = *r4 + 0x1333;
    } else {
        *r4 = *r4 - 0x4cd;
    }
    s32 v = *r4;
    if (v > 0x2400) {
        *r4 = 0x2400;
    } else if (v < r6->f8) {
        *r4 = r6->f8;
    }
    o->unk_2dc = *r4;
    if (func_0200f5b0(o) == 4) {
        func_0205e184(o->unk_59c, *r4);
    }
    func_02010914(o);
    s32 *r4b = &r6->f18;
    s32 z = 0;
    if (r6->f18 == -1) {
        *r4b = func_02090330(0x4c, (V3 *)o->unk_6dc, (void *)z, z);
    } else {
        func_020902d4(r6->f18, o->unk_6dc, (void *)z, z);
    }
    func_0200ec54(o, 0x8a, &o->unk_5c);
}
}

namespace ns_02206574 {
extern "C" void func_ov003_02206c04(Obj *o) {
    if (func_020729bc(data_020cbb18, o->unk_7fc)) {
        Unk_ov003_02206c04_St *p = &o->unk_7d0;
        s32 *q = &p->f10;
        s32 r4 = p->f0;
        s32 h = p->f14;
        s32 sp10;
        V3 a, b, c, d;
        b.y = 0;
        a.y = 0;
        s32 idx = (h >> 4) * 2;
        a.x = func_01ffcb0c(data_02135f44[idx], r4);
        a.z = func_01ffcb0c(data_02135f44[idx + 1], r4);
        s32 s4 = func_0200d640(o);
        s32 s8 = func_0200d634(o);
        s32 i2 = ((u16)s8 >> 4) * 2;
        b.x = func_01ffcb0c(data_02135f44[i2], s4);
        b.z = func_01ffcb0c(data_02135f44[i2 + 1], s4);
        o->unk_7d0.f0 = s4;
        p->f14 = s8;
        r4 = 0;
        func_020e9960(&d, &a, &b);
        c.x = d.x;
        c.y = d.y;
        c.z = d.z;
        if (func_01ffc854(&c) >= 0x59a) {
            r4 = func_01ffc5a4(func_01ffcb0c(func_01ffc854(&c), 0x6400), 0x59a);
        }
        s32 t = 0;
        u32 k = data_021f47d8.b;
        if (k & 1) t += 0x14;
        if (k & 2) t += 0x14;
        if (k & 0x400) t += 0x14;
        if (k & 0x800) t += 0x14;
        if (k & 0x200) t += 0x14;
        if (k & 0x100) t += 0x14;
        if (k & 8) t += 0x14;
        if (k & 4) t += 0x14;
        r4 += t << 12;
        if (r4 == 0) {
            r4 += 0x2000;
        }
        *q = *q + r4;
        p->fc = r4 >> 12;
        if (*q < 0) {
            *q = 0;
        }
        if (r4 != 0) {
            if (s4 != 0 || t != 0) {
                func_0200ecdc(o, 0x7ef);
            }
            p->f8 = func_01ffc5a4(func_01ffcb0c(func_01ffcb0c(0x1c00, *q), 0xa66), 0x190000) + 0x800;
        }
        if (func_0200ec44(o, 0xb) != 0 || p->f10 >= 0x190000) {
            func_ov003_02206bb0(o, 6, -1);
        }
    }
}
}

namespace ns_02206574 {
extern "C" void func_ov003_02206be8(Obj *o) {
    Unk_ov003_02206be8_Ns::func_ov003_02206de8(o);
    func_0201071c(o);
    Unk_ov003_02206be8_Ns::func_ov003_02206c04(o);
}
}

namespace ns_02206574 {
extern "C" s32 func_ov003_02206bb0(Obj *o, s32 a, s32 b) {
    Msg m;
    _ZN12Unk_0200e2c013func_0200e2c0Eiis(&m, 0x75, a, b);
    s32 r = func_0200e248(o, &m);
    return r;
}
}

namespace ns_02206574 {
extern "C" void func_ov003_02206ae8(Obj *o) {
    V3 pos;
    u32 buf[0x10];
    V3 pos2;
    s32 st = func_0200f5b0(o);
    if (st == 10 || (u32)(st - 3) <= 1) {
        func_02010358(o, 0x94, 3, 0);
        if (func_0200f5b0(o) == 4) {
            func_0205e1a0(o->unk_59c, 0x12, 3, 1);
        }
    } else {
        func_02010358(o, 0x93, 3, 0);
    }
    V3 *pv = &o->unk_5c;
    pos.x = o->unk_5c.x;
    pos.y = pv->y;
    pos.z = pv->z;
    func_020339bc(buf, &pos, 0, 0);
    if (buf[0x34 / 4] == 0x13) {
        func_020902b0(0x91, &pos, 0, 0);
    } else {
        func_020902b0(0x90, &pos, 0, 0);
    }
    func_0200ec30(o, 9);
    pv = &o->unk_5c;
    pos2.x = o->unk_5c.x;
    pos2.y = pv->y;
    pos2.z = pv->z;
    func_ov003_0221950c(o->unk_7fc, &pos2);
    func_0200ecdc(o, 0x7e9);
    func_02033988(buf);
}
}

namespace ns_02206574 {
extern "C" s32 func_ov003_02206adc(Obj *o, s32 a) {
    return func_ov003_02206bb0(o, 6, a);
}
}

namespace ns_02206574 {
extern "C" s32 func_ov003_02206a84(Obj *o) {
    if (func_02056654(o->unk_2cc)) {
        o->unk_7f8 = func_02007c08(o, o->unk_7ec);
        u16 k = 3;
        if (func_0200f5b0(o) == 4) {
            k *= (u32)k;
        }
        func_0200ce98(o, k, 1, -1);
    }
}
}

namespace ns_02206574 {
extern "C" void func_ov003_02206a68(Obj *o) {
    func_02010914(o);
    func_0201071c(o);
    func_ov003_02206a84(o);
}
}

namespace ns_02206574 {
extern "C" s32 func_ov003_02206a1c(Obj *o, s32 a, s32 b) {
    Msg m;
    _ZN12Unk_0200e2c013func_0200e2c0Eiis(&m, 0x78, a, b);
    if (func_0200e248(o, &m)) {
        func_0200ec30(o, 7);
        return TRUE;
    }
    return FALSE;
}
}

namespace ns_02206574 {
extern "C" void func_ov003_022069c8(Obj *o) {
    func_02010358(o, 0x71, 3, 0);
    *(u8 *)&o->unk_7d0 = 0;
    if (func_0200f5b0(o) == 3) {
        func_0205e1a0(o->unk_59c, 0x13, 3, 0);
    }
    func_0200ec1c(o, 0x1a);
    func_02034d84(0x3f);
    func_02034dd0(0x19, 0xf, 0);
}
}

namespace ns_02206574 {
extern "C" void func_ov003_022069c4() {
}
}

extern "C" s32 data_ov003_02230af0 = 0xccd;
extern "C" s32 data_ov003_02230aec = -0x419;
extern "C" s32 data_ov003_02230ae8 = 0x10cd;
extern "C" s32 data_ov003_02230ae4 = 0x6000;
extern "C" s32 data_ov003_02230ae0 = 0x2000;
extern "C" s32 data_ov003_02230adc = 0x2d9a;
extern "C" s32 data_ov003_02230ad8 = 0x800;
extern "C" s32 data_ov003_02230ad4 = 0x2d9a;
extern "C" s32 data_ov003_02230ad0 = 0x1000;
extern "C" s32 data_ov003_02230acc = 0x5000;
extern "C" s32 data_ov003_02230ac8 = 1;
extern "C" s32 data_ov003_02230ac4 = 1;
extern "C" s32 data_ov003_02230ac0 = 1;
extern "C" const s32 data_ov003_0222efb4 = 0x2000;

namespace ns_02206574 {
extern "C" void func_ov003_022067c4(Obj *o) {
    Unk_ov003_022067c4_Pad pad;

    switch (o->unk_700) {
    case 0x71:
        if (func_02056654(o->unk_2cc)) {
            func_02010358(o, 0x72, 0, 0);
        }
        break;
    case 0x72:
        func_0200f478(o, 0x3ae);
        if (func_02056654(o->unk_2cc)) {
            func_02010358(o, 0x73, 0, 0);
        }
        break;
    case 0x73:
        if (func_02056654(o->unk_2cc)) {
            func_0200ecdc(o, 0x817);
            func_02010358(o, 0x74, 0, 0);
            s32 r5 = func_0209750c();
            if (r5) {
                func_0209875c(r5, 1);
                u8 *q = func_02098868(r5) + 0x10;
                func_0205d354(o->unk_709, q);
                if (func_02098044(r5, 0x17)) {
                    func_0209801c(r5, 0x19);
                }
            }
        }
        break;
    case 0x74:
        if (func_02056654(o->unk_2cc)) {
            func_02010358(o, 0x75, 0, 0);
        }
        break;
    case 0x75: {
        u8 *p = (u8 *)&o->unk_7d0;
        s16 prev = o->unk_8e;
        func_0200f4c0(o, 0x59a);
        if (prev != 0) {
            if (o->unk_8e == 0) {
                func_02034d70(0x19);
                func_02034e10(0xd, 0x40, 0x7f, 1);
            }
        }
        switch (*p) {
        case 0:
            *p = 1;
            func_0203e488(o, o);
            func_0200ec30(o, 0x11);
            func_020a710c(&(Unk_020ddcf0 &)*o, "obj_etc_player");
            o->unk_1e = 0x14;
            o->unk_3c->unk_08 = 1;
            func_0203a598();
        case 1:
            if (o->unk_3c) {
                if (o->unk_3c->unk_04) {
                    *p = 2;
                }
            }
            break;
        case 2:
            if (o->unk_3c) {
                if (o->unk_3c->unk_04 == 0) {
                    func_0203e47c(o, o);
                    func_0200ec1c(o, 0x11);
                    func_0203d7f8();
                    o->unk_7f8 = func_02007c08(o, o->unk_7ec);
                    func_0200ce98(o, 3, 1, -1);
                    func_0200ec1c(o, 7);
                    func_0203a844();
                    func_02034d84(0x40);
                    func_02034dd0(0xc, 0xf, 5);
                }
            }
            break;
        }
        break;
    }
    }
}
}

namespace ns_02206574 {
extern "C" void func_ov003_022067a8(Obj *o) {
    func_02010914(o);
    func_0201071c(o);
    func_ov003_022067c4(o);
}
}

namespace ns_02206574 {
extern "C" s32 func_ov003_02206770(Obj *o, s32 a, s32 b) {
    Msg m;
    _ZN12Unk_0200e2c013func_0200e2c0Eiis(&m, 0x80, a, b);
    s32 r = func_0200e248(o, &m);
    return r;
}
}

namespace ns_02206574 {
extern "C" void func_ov003_0220675c(Obj *o) {
    func_02010358(o, 0x7b, 3, 0);
}
}

namespace ns_02206574 {
extern "C" s32 func_ov003_02206750(Obj *o, s32 a) {
    return func_ov003_02206770(o, 6, a);
}
}

namespace ns_02206574 {
extern "C" void func_ov003_02206710(Obj *o) {
    if (func_020729bc(data_020cbb18, o->unk_7fc)) {
        u16 *r = func_02098744(func_02097520(o->unk_7fc));
        if (r) {
            func_0200eb58(o, 3, *r);
        }
    }
}
}

namespace ns_02206574 {
extern "C" s32 func_ov003_02206670(Obj *o) {
    func_02010914(o);
    if (func_020565e8(o->unk_2cc, 0xd)) {
        u16 t[2];
        s32 r = func_02097520(o->unk_7fc);
        t[0] = 0xfff1;
        func_02098738(r, &t[0]);
        t[1] = 0xfff1;
        func_0205e24c(o->unk_59c, &t[1], 0);
        func_0200ecdc(o, 0x850);
        V3 v;
        s32 tz = o->unk_688.z;
        s32 ty = o->unk_688.y;
        s32 tx = o->unk_688.x;
        v.x = tx;
        v.y = ty;
        v.z = tz;
        func_0203ee38(&v, &v);
        func_02090330(0x24, &v, &o->unk_8e, 0);
        func_0200ec30(o, 9);
    }
}
}

namespace ns_02206574 {
extern "C" s32 func_ov003_022065cc(Obj *o) {
    if (func_02056654(o->unk_2cc)) {
        u16 t = 0x137d;
        o->unk_7f8 = func_02007c08(o, o->unk_7ec);
        if (func_020729bc(data_020cbb18, o->unk_7fc)) {
            s32 r4 = func_02098eb0(&t);
            if (r4 != -1) {
                func_0200ec1c(o, 0);
                func_020946f0(0x15, o->unk_7fc);
                func_02099064(r4);
                func_ov003_02210628(o, 2, 2, 0, 0, 0, 6, -1);
                return;
            }
        }
        func_0200ce98(o, 3, 1, -1);
    }
}
}

namespace ns_02206574 {
extern "C" void func_ov003_022065ac(Obj *o) {
    func_ov003_02206670(o);
    func_020109c4(o);
    func_0201071c(o);
    func_ov003_022065cc(o);
}
}

namespace ns_02206574 {
extern "C" s32 func_ov003_02206574(Obj *o, s32 a, s32 b) {
    Msg m;
    _ZN12Unk_0200e2c013func_0200e2c0Eiis(&m, 0x81, a, b);
    s32 r = func_0200e248(o, &m);
    return r;
}
}

namespace ns_02205c28 {
extern "C" void func_ov003_0220650c(Obj *o) {
    s32 *r2 = &o->unk_7d0;
    *r2 = -1;
    ((u8 *)r2)[4] = 0;
    ((u8 *)r2)[5] = 0x14;
    func_020103b4(o, 0x7c, 9, 0);
    func_0205e1a0(o->unk_59c, 0x28, 0, 1);
    if (func_020729bc(data_020cbb18, o->unk_7fc)) {
        func_0203a598();
        func_02035b9c(data_021c1b3c + 0x1c4);
    }
}
}

namespace ns_02205c28 {
extern "C" s32 func_ov003_02206500(Obj *o, s32 a) {
    return func_ov003_02206574(o, 6, a);
}
}

namespace ns_02205c28 {
extern "C" void func_ov003_0220646c(Obj *o) {
    if (func_020729bc(data_020cbb18, o->unk_7fc)) {
        u16 *r = func_02098744(func_02097520(o->unk_7fc));
        if (r) {
            func_0200eb58(o, 3, *r);
        }
        func_0203a844();
        func_02035b94(data_021c1b3c + 0x1c4);
    }
    if (o->unk_7d0 != -1) {
        func_020902f8(o->unk_7d0);
    }
    V3 v;
    func_0200f43c(&v, o);
    data_ov003_02258f00 = 0;
    data_ov003_02258f18.x = v.x;
    data_ov003_02258f18.y = v.y;
    data_ov003_02258f18.z = v.z;
}
}

namespace ns_02205c28 {
extern "C" void func_ov003_02206378(Obj *o) {
    func_02010914(o);
    s32 *r6 = &o->unk_7d0;
    u8 *r4 = (u8 *)r6 + 4;
    Unk_ov003_02206120_V3 v(o->unk_628.x, o->unk_628.y, o->unk_628.z);
    func_0203ee38((V3 *)&v, (V3 *)&v);
    s32 z = 0;
    s32 m1 = ~z;
    if (o->unk_7d0 == m1) {
        u16 t[2];
        (*r4)++;
        s32 cnt = *r4;
        if (cnt > 9) {
            if (cnt == 10) {
                V3 w;
                func_02010a7c(&t[0], o);
                if (t[0] == 0x137f) {
                    func_0200ecdc(o, 0x85a);
                } else {
                    func_0200ecdc(o, 0x859);
                }
                func_0200f43c(&w, o);
                data_ov003_02258f00 = 1;
                data_ov003_02258f18.x = w.x;
                data_ov003_02258f18.y = w.y;
                data_ov003_02258f18.z = w.z;
            }
            func_02010a7c(&t[1], o);
            if (t[1] == 0x137f) {
                *r6 = func_02090330(0x35, (V3 *)&v, &o->unk_8e, z);
            } else {
                *r6 = func_02090330(0x36, (V3 *)&v, &o->unk_8e, z);
            }
        }
    } else {
        func_020902d4(o->unk_7d0, (V3 *)&v, &o->unk_8e, 0);
    }
}
}

namespace ns_02205c28 {
extern "C" void func_ov003_022062d4(Obj *o) {
    if (func_02056654(func_0205dfa4(o->unk_59c) + 0x9c)) {
        u8 *q = (u8 *)&o->unk_7d0;
        u8 *r1 = q + 4;
        if (*r1 != 0) {
            *r1 = *r1 - 1;
        }
        if (*r1 == 0) {
            u8 *r2 = q + 5;
            if (*r2 != 0) {
                *r2 = *r2 - 1;
            }
            if (*r2 == 0) {
                u16 t[2];
                s32 r = func_02097520(o->unk_7fc);
                t[0] = 0xfff1;
                func_02098738(r, &t[0]);
                t[1] = 0xfff1;
                func_0205e24c(o->unk_59c, &t[1], 0);
                o->unk_7f8 = func_02007c08(o, o->unk_7ec);
                func_0200ce98(o, 9, 1, -1);
            }
        }
    }
}
}

namespace ns_02205c28 {
extern "C" void func_ov003_022062b4(Obj *o) {
    ovcall::func_ov003_02206378(o);
    func_020109c4(o);
    func_0201071c(o);
    ovcall::func_ov003_022062d4(o);
}
}

namespace ns_02205c28 {
extern "C" s32 func_ov003_0220627c(Obj *o, s32 a, s32 b) {
    Msg m;
    _ZN12Unk_0200e2c013func_0200e2c0Eiis(&m, 0x82, a, b);
    s32 r = func_0200e248(o, &m);
    return r;
}
}

namespace ns_02205c28 {
extern "C" void func_ov003_02206240(Obj *o) {
    o->unk_7d0 = -1;
    func_02010358(o, 0x7d, 3, 0);
    func_0205e1a0(o->unk_59c, 0x2a, 0, 0);
    func_0200ecdc(o, 0x85d);
}
}

namespace ns_02205c28 {
extern "C" s32 func_ov003_02206234(Obj *o, s32 a) {
    return func_ov003_0220627c(o, 6, a);
}
}

namespace ns_02205c28 {
extern "C" void func_ov003_022061e0(Obj *o) {
    if (func_020729bc(data_020cbb18, o->unk_7fc)) {
        u16 *r = func_02098744(func_02097520(o->unk_7fc));
        if (r) {
            func_0200eb58(o, 3, *r);
        }
    }
    if (o->unk_7d0 != -1) {
        func_020902f8(o->unk_7d0);
    }
}
}

namespace ns_02205c28 {
extern "C" void func_ov003_02206120(Obj *o) {
    func_02010914(o);
    s32 f = o->unk_2d4.f;
    if (f >= 0xe && f <= 0x18) {
        s32 *r4 = &o->unk_7d0;
        Unk_ov003_02206120_V3 v(o->unk_688.x, o->unk_688.y, o->unk_688.z);
        func_0203ee38((V3 *)&v, (V3 *)&v);
        if (o->unk_7d0 == -1) {
            *r4 = func_02090330(0x31, (V3 *)&v, &o->unk_8e, 0);
        } else {
            func_020902d4(o->unk_7d0, (V3 *)&v, &o->unk_8e, 0);
        }
    }
    if (func_020565e8(o->unk_2cc, 0x18)) {
        u16 t[2];
        s32 r = func_02097520(o->unk_7fc);
        t[0] = 0xfff1;
        func_02098738(r, &t[0]);
        t[1] = 0xfff1;
        func_0205e24c(o->unk_59c, &t[1], 0);
    }
}
}

namespace ns_02205c28 {
extern "C" void func_ov003_022060b4(Obj *o) {
    if (func_02056654(o->unk_2cc)) {
        o->unk_7f8 = func_02007c08(o, o->unk_7ec);
        func_0200ce98(o, 3, 1, -1);
    }
    if (func_020729bc(data_020cbb18, o->unk_7fc)) {
        u32 f = o->unk_2d4.f;
        if (f >= 0x18) {
            func_ov003_02205c28(o);
        }
    }
}
}

namespace ns_02205c28 {
extern "C" void func_ov003_02206094(Obj *o) {
    ovcall::func_ov003_02206120(o);
    func_020109c4(o);
    func_0201071c(o);
    ovcall::func_ov003_022060b4(o);
}
}

namespace ns_02205c28 {
extern "C" s32 func_ov003_0220605c(Obj *o, s32 a, s32 b) {
    Msg m;
    _ZN12Unk_0200e2c013func_0200e2c0Eiis(&m, 0x89, a, b);
    s32 r = func_0200e248(o, &m);
    return r;
}
}

namespace ns_02205c28 {
extern "C" void func_ov003_02206040(Obj *o) {
    func_02010358(o, 0x8f, 0, 0);
    func_0200ecdc(o, 0x4f);
}
}

namespace ns_02205c28 {
extern "C" s32 func_ov003_02206034(Obj *o, s32 a) {
    return func_ov003_0220605c(o, 6, a);
}
}

namespace ns_02205c28 {
extern "C" void func_ov003_02205f98(Obj *o) {
    func_02010914(o);
    if (o->unk_700 == 0x8f) {
        s32 f = o->unk_2d4.f;
        if (f >= 6 && f <= 0x19) {
            func_0200ec30(o, 0xd);
            o->vfunc_5c(o->unk_820);
            o->unk_81e = 0x1520;
            s32 v = (f - 6) * 0x333;
            if (f >= 0xb) {
                v = 0x1000;
            }
            o->unk_82c = v;
            o->unk_830 = v;
            o->unk_834 = v;
            if (f == 0x19) {
                func_0200ec1c(o, 0xd);
                func_ov003_02224bc4(o->unk_7fc);
            }
        }
    }
}
}

namespace ns_02205c28 {
extern "C" void func_ov003_02205eb8(Obj *o) {
    if (func_02056654(o->unk_2cc)) {
        func_020103b4(o, 0, 3, 3);
    } else if (o->unk_700 == 0) {
        if (func_ov003_02224d14(o->unk_7fc) == 0) {
            func_02094574(0, 0, 4);
            o->unk_7f8 = func_02007c08(o, o->unk_7ec);
            func_0200c358(o, 3, 5, -1);
        } else {
            V3 a, b;
            V3 *q = func_ov003_02224ba4(o->unk_7fc);
            a.x = q->x;
            a.y = q->y;
            a.z = q->z;
            V3 *pv = &o->unk_5c;
            b.x = pv->x;
            b.y = pv->y;
            b.z = pv->z;
            s32 yaw = func_020e7b98(a.x - b.x, a.z - b.z);
            s32 h = func_020e7b98(a.y - b.y, func_020e9650(&a, &b));
            if (h > 0) {
                h = 0;
            }
            func_02094574(h, 0, 4);
            s16 tmp = o->unk_8e;
            func_02010d98(&tmp, yaw);
            func_02010a58(o, &tmp);
        }
    }
}
}

namespace ns_02205c28 {
extern "C" void func_ov003_02205e9c(Obj *o) {
    ovcall::func_ov003_02205f98(o);
    func_0201071c(o);
    ovcall::func_ov003_02205eb8(o);
}
}

namespace ns_02205c28 {
extern "C" s32 func_ov003_02205e58(Obj *o, u8 *p, u32 c, s32 id, s32 e) {
    Msg m;
    _ZN12Unk_0200e2c013func_0200e2c0Eiis(&m, 0x8f, id, *(s16 *)&e);
    u8 v0 = *(volatile u8 *)p;
    Unk_ov003_02205e58_Pair &q = m.v_02205c28.unk_0c;
    q.a = v0;
    q.b = c;
    s32 r = func_0200e248(o, &m);
    return r;
}
}

namespace ns_02205c28 {
extern "C" void func_ov003_02205e50(u8 *p, u32 a, u32 b) {
    p[0] = a;
    p[1] = b;
}
}

namespace ns_02205c28 {
extern "C" void func_ov003_02205e44(u8 *src, u8 *a, u8 *b) {
    *a = src[0];
    *b = src[1];
}
}

namespace ns_02205c28 {
extern "C" void func_ov003_02205e04(Obj *o, Rec *r) {
    u8 x, y;
    u8 *p;
    Unk_ov003_02205e58_Pair *q = &r->unk_0c;
    p = (u8 *)&o->unk_7d0;
    x = q->a;
    y = q->b;
    if (y == 0) {
        func_020103b4(o, 0, 3, 3);
    }
    p[0] = x;
    p[1] = y;
    func_ov003_02205e50(o->unk_8ec, x, y);
}
}

namespace ns_02205c28 {
extern "C" s32 func_ov003_02205dd0(Obj *o, s32 a) {
    u8 buf[2];
    func_ov003_02205e44(o->unk_8ec, &buf[0], &buf[1]);
    return func_ov003_02205e58(o, &buf[0], buf[1], 6, a);
}
}

namespace ns_02205c28 {
extern "C" void func_ov003_02205c90(Obj *o) {
    u8 *p = (u8 *)&o->unk_7d0;
    if (p[0] != 0) {
        s32 t = o->unk_7fc;
        if (func_ov003_022232e8(t)) {
            V3 a, b;
            V3 *q = func_ov003_022232c8(t);
            a.x = q->x;
            a.y = q->y;
            a.z = q->z;
            V3 *pv = &o->unk_5c;
            b.x = pv->x;
            b.y = pv->y;
            b.z = pv->z;
            b.y = b.y + 0x1b33;
            s32 yaw = func_020e7b98(a.x - b.x, a.z - b.z);
            s32 h = func_020e7b98(a.y - b.y, func_020e9650(&a, &b));
            if (h >= 0x1800) {
                h = 0x1800;
            } else if (h <= -0x1000) {
                h = -0x1000;
            }
            s32 d = (s16)(yaw - o->unk_8e);
            if ((u16)(d + 0x2aaa) >= 0x5554) {
                func_02094574(0, 0, o->unk_7fc);
            } else {
                func_02010dbc(&o->unk_458, h, 0x400, 0x1770000, 0xc0000);
                func_02010dbc(&o->unk_45a, d, 0x400, 0x1770000, 0xc0000);
            }
        } else {
            func_02094574(0, 0, o->unk_7fc);
            o->unk_7f8 = func_02007c08(o, o->unk_7ec);
            if (p[1] != 0) {
                func_0200c358(o, 3, 5, -1);
            } else {
                func_0200ce98(o, 3, 1, -1);
            }
        }
    }
}
}

namespace ns_02205c28 {
extern "C" void func_ov003_02205c64(Obj *o) {
    func_02010914(o);
    if (func_0200ef08(o)) {
        func_020109c4(o);
    }
    func_0201071c(o);
    ovcall::func_ov003_02205c90(o);
}
}

namespace ns_02205c28 {
extern "C" s32 func_ov003_02205c28(Obj *o) {
    if (func_020100d0(o) > 0) {
        o->unk_7f8 = func_02007c08(o, o->unk_7ec);
        func_0200cb50(o, 0, 1, -1);
    } else {
        func_0200ff08(o);
    }
}
}

namespace ns_022052f4 {
extern "C" BOOL func_ov003_02205b68(Obj *o, s32 *pa) {
    V3 v;
    if (o->unk_16c == 1) {
        V3 t;
        func_0200f3ec(&t, o, &o->unk_5c, &o->unk_8e, data_ov003_0222efb4);
        v.x = t.x;
        v.y = t.y;
        v.z = t.z;
        if (func_0200fa2c(o, &v, 0xd) && func_0200f8f8(o, &v, 2, *pa) && func_0200f6d4(o, &v, 0)) return TRUE;
    } else {
        v.x = o->unk_154;
        v.y = o->unk_158;
        v.z = o->unk_15c;
        if (func_0200fa2c(o, &v, 0xd) && func_0200f8f8(o, &v, 2, *pa) && func_0200f6d4(o, &v, 0)) return TRUE;
    }
    return FALSE;
}
}

namespace ns_022052f4 {
extern "C" s32 func_ov003_02205a00(Obj *o, u8 *pa, u8 *pb, s32 *out) {
    s32 r = 1;
    s32 a, b, t;
    V3 pos;
    if (*pa != 0 && func_ov003_022052f4(o)) return 4;
    func_0200f43c(&pos, o);
    func_0204ee10(&a, &b, &pos);
    if (out != NULL) {
        out[0] = a;
        out[1] = b;
    }
    s32 res = func_0203081c(&pos, &t, 0x19);
    if (t == 4) goto aac;
    if (t != 6) goto b42;
    if (data_021c47c4 != NULL) {
        u16 *p = func_0204eba0(data_021c47c4, &pos, 0);
        BOOL f3 = TRUE, f2 = TRUE, f1 = TRUE, f0 = FALSE;
        u32 v = *p;
        if (v >= 0x2b && v <= 0x2e) f0 = TRUE;
        if (!f0) { if (v < 0xff || v > 0x102) f1 = FALSE; }
        if (!f1) { if (v < 0x62 || v > 0x65) f2 = FALSE; }
        if (!f2) { if (v < 0xd0 || v > 0xd3) f3 = FALSE; }
        if (f3) return 1;
    }
aac:
    if (*pa != 0) {
        if (res < 0x1000) return 1;
        V2 q;
        q.x = 0;
        q.y = 0;
        q.x = a;
        q.y = b;
        switch (func_0200f7a0(o, &q, 1, *pb)) {
        case 0: return 5;
        case 1: return 0;
        case 2: return 4;
        }
    }
    if (o->unk_814 == 1) {
        switch (o->unk_810) {
        case 6: r = 2; break;
        case 7: r = 3; break;
        case 12:
        case 13: r = 4; break;
        case 14: r = 6; break;
        }
    } else if (o->unk_814 == 2) {
        r = 5;
    } else {
        r = 0;
    }
    goto done;
b42:
    if (res >= 0x1000) r = 4;
done:
    return r;
}
}

namespace ns_022052f4 {
extern "C" s32 func_ov003_02205928(Obj *o, V3 *p, u8 *f) {
    s32 a, b;
    func_0204ee10(&a, &b, p);
    if (*f != 0) {
        if (func_ov003_022052f4(o)) return 2;
        V2 q;
        q.x = 0;
        q.y = 0;
        q.x = a;
        q.y = b;
        switch (func_0200f7a0(o, &q, 2, 3)) {
        case 0: return 7;
        case 1: return 0;
        case 2: return 2;
        }
    }
    if (o->unk_814 == 2) return 7;
    if (o->unk_814 == 0) return 0;
    switch (o->unk_810) {
    case 23: return 1;
    case 12:
    case 13: return 2;
    case 14: return 8;
    case 19:
    case 20: return 6;
    case 9:
    case 21: return 5;
    case 10:
    case 22: return 9;
    case 11: return 4;
    case 8:
    default: return 3;
    }
}
}

namespace ns_022052f4 {
extern "C" BOOL func_ov003_02205894(Obj *o, V3 *out, V3 *tgt) {
    s16 ang;
    V3 t1, t0;
    if (func_020e972c(tgt, &o->unk_5c)) {
        ang = o->unk_8e;
    } else {
        ang = func_020e7b98(tgt->x - o->unk_5c.x, tgt->z - o->unk_5c.z);
    }
    func_0200f3ec(&t0, o, &o->unk_5c, &ang, data_ov003_02230ae4);
    out->x = t0.x;
    out->y = t0.y;
    out->z = t0.z;
    BOOL r4 = func_02030d60(out);
    func_0200f3ec(&t1, o, &o->unk_5c, &ang, data_ov003_02230acc);
    if (r4 && func_02030d60(&t1)) return TRUE;
    return FALSE;
}
}

namespace ns_022052f4 {
extern "C" void func_ov003_02205744(Obj *o) {
    V2 p;
    V3 out;
    p.x = 0;
    p.y = 0;
    func_0200f3ec(&out, o, &o->unk_5c, &o->unk_8e, data_ov003_02230ae8);
    func_0204ee10(&p.x, &p.y, &out);
    BOOL same = FALSE;
    s32 x = p.x;
    if (*(volatile s32 *)&p.x == o->unk_8cc && p.y == o->unk_8d0) same = TRUE;
    if (same) {
        o->unk_8cc = x;
        o->unk_8d0 = p.y;
    } else {
        o->unk_8cc = x;
        o->unk_8d0 = p.y;
        s32 x0 = *(volatile s32 *)&p.x, y = p.y, hx = x0 >> 4, hy = y >> 4;
        u16 *c = func_0204ebd8(data_021c47c4, hx, hy, x0 - (hx << 4), y - (hy << 4), 0);
        if (c != NULL) {
            if (Unk_ov003_02205744_Chk(c)) {
                V2 q;
                q.x = p.x;
                q.y = p.y;
                func_ov003_0221cd34(o->unk_7fc, &q, 1);
            }
        }
    }
}
}

namespace ns_022052f4 {
extern "C" void func_ov003_022056c8(Obj *o) {
    V2 p;
    p.x = 0;
    p.y = 0;
    if (o->unk_98 > 0x53f) {
        func_0204ee10(&p.x, &p.y, &o->unk_5c);
        BOOL same = FALSE;
        s32 x = p.x;
        if (*(volatile s32 *)&p.x == o->unk_8d4 && p.y == o->unk_8d8) same = TRUE;
        if (same) {
            o->unk_8d4 = x;
            o->unk_8d8 = p.y;
        } else {
            o->unk_8d4 = x;
            o->unk_8d8 = p.y;
            V2 q;
            q.x = p.x;
            q.y = p.y;
            func_02043f20(&q);
        }
    }
}
}

namespace ns_022052f4 {
extern "C" void func_ov003_022055e4(Obj *o) {
    if (func_0200ec44(o, 0xb)) return;
    if (func_0200ec44(o, 0x16)) return;
    if (!func_0200e3c0(o, o->unk_7ec)) return;
    if (o->unk_808 != -1) return;
    V2 p;
    p.x = 0;
    p.y = 0;
    func_0204ee10(&p.x, &p.y, &o->unk_5c);
    s32 t = func_0200f5b0(o);
    s32 k = 0;
    switch (t) {
    case 1: k = 2; break;
    case 2: k = 1; break;
    case 4: k = 3; break;
    case 5: k = 4; break;
    }
    V2 q;
    q.x = p.x;
    q.y = p.y;
    o->unk_808 = func_02042f44(o->unk_7fc, &q, k);
    if (o->unk_808 != -1) {
        if (func_0200f9bc(o) == 0x19) {
            func_0200e208(o);
            func_0200ec30(o, 0x16);
            func_0200ec30(o, 0x13);
            o->unk_8dc = p.x;
            o->unk_8e0 = p.y;
        }
    }
}
}

namespace ns_022052f4 {
extern "C" void func_ov003_02205574(Obj *o) {
    if (func_0200ec44(o, 0x16)) {
        switch (o->unk_814) {
        case 1: {
            s32 v[2];
            v[0] = o->unk_8dc;
            v[1] = o->unk_8e0;
            func_ov003_022072b8(o, v, 6, -1);
            func_0200ec1c(o, 0x16);
            func_0200ec1c(o, 0x13);
            break;
        }
        case 2:
            func_0200ec1c(o, 0x16);
            func_0200ec1c(o, 0x13);
            break;
        }
    }
}
}

namespace ns_022052f4 {
extern "C" void func_ov003_022053e4(Obj *o) {
    struct L {
        u16 w0;
        u16 s2;
        u16 s4;
        u16 s6;
        u32 t[2];
    } l;
    BOOL night;
    u16 *cnt;
    u8 *fl;
    s32 tm;
    u32 A, B, C;
    if (o->unk_7f4 == 0) return;
    night = FALSE;
    if (func_0200e7c0(o)) night = TRUE;
    cnt = func_020952d0();
    if (*cnt == 0) *cnt = 1;
    fl = func_020952c8();
    tm = func_02010d20(o);
    l.t[0] = 0;
    l.t[1] = 0;
    func_0209d498(l.t);
    if ((*fl & 1) != 0) {
        if (func_0200f23c(o) != 1) return;
        if (night) {
            *fl = *fl & 0xfe;
        } else {
            *fl = *fl & 0xee;
        }
    }
    u8 *tb = (u8 *)&l;
    A = tb[0xd];
    B = tb[0xc];
    C = tb[0xb];
    if (B != 8) {
        if (B == 7 && C >= 0x10) {
        } else if (B != 9 || C > 0xf) {
            return;
        }
    }
    u8 hh = ((u8 *)&l)[0xa];
    if (hh < 0xa || hh >= 0x11) return;
    if (func_020b8fd8() >= 3) return;
    func_02010a7c(&l.s2, o);
    if (Unk_ov003_022052f4_RngV(&l.s2, 0x1380, 0x139f)) return;
    func_02010a7c(&l.s4, o);
    if (Unk_ov003_022052f4_RngV(&l.s4, 0x13a0, 0x13a7)) return;
    *cnt = *cnt - 1;
    if (*cnt != 0) return;
    l.w0 = (l.w0 & ~0x7f) | (A &= 0x7f);
    l.w0 = (l.w0 & ~0x780) | ((B &= 0xf) << 7);
    l.w0 = (l.w0 & ~0xf800) | ((C &= 0x1f) << 11);
    u32 n = (u8)(func_02010c74(o) + 1);
    if (n > 7) n = 7;
    func_020987d0(tm, n);
    func_0200f17c(o, tm, &l);
    *cnt = 0x4650;
    *fl = *fl & 0xfb;
    *fl = *fl | 3;
    func_0200ead0(o);
}
}

namespace ns_022052f4 {
extern "C" BOOL func_ov003_022052f4(Obj *o) {
    u16 buf[2];
    s32 k;
    u32 id;
    o->unk_168 = 0;
    if (o->unk_1fc == 0) return FALSE;
    o->unk_168 = 1;
    k = o->unk_1ce;
    id = o->unk_1cf;
    func_02010a7c(buf, o);
    switch (k) {
    case 2:
    case 3: {
        Item *it = func_020816cc(k, id);
        if (it != NULL) {
            BOOL f = Unk_ov003_022052f4_Rng(buf, 0x1376, 0x1376);
            if (f || Unk_ov003_022052f4_Rng(buf, 0x1377, 0x1377)) {
                if (it->vfunc_60(buf) == 1) {
                    o->unk_168 = 4;
                    break;
                }
            } else {
                o->unk_164 = it;
            }
            o->unk_168 = 2;
        }
        break;
    }
    case 0x11:
    case 0x12: {
        Item *it = func_ov003_0222ebb0(id);
        if (it != NULL) {
            BOOL f = Unk_ov003_022052f4_Rng(buf, 0x1376, 0x1376);
            if (!f && !Unk_ov003_022052f4_Rng(buf, 0x1377, 0x1377)) o->unk_164 = it;
            o->unk_168 = 3;
        }
        break;
    }
    }
    return TRUE;
}
}

namespace ns_02204d90 {
extern "C" BOOL func_ov003_02204f3c(Unk_02006d14 *self) {
    s32 mode = func_0200f5b0(self);
    u16 ang;
    s32 xy[2];
    struct {
        Unk_ov003_02204f3c_Pad pad;
        Unk_ov003_02204ce8_Vec t, s, z, va, vb, vc;
    } l;
    if (self->unk_13c) {
        l.z.x = 0;
        l.z.y = 0;
        l.z.z = 0;
        if (func_ov003_02204d90(self, mode, &l.z.x)) {
            return TRUE;
        }
    }
    if (!func_0200fa2c(self, &self->unk_154, mode)) {
        if (self->unk_140 == 1 || self->unk_144) {
            if (func_0200f9d4(self, mode)) {
                return TRUE;
            }
        }
        goto fail;
    }
    switch (self->unk_140) {
    case 1:
        if (self->unk_140 != 0) {
            if (func_ov003_02205b68(self, &mode)) {
                return TRUE;
            }
        }
        if (mode == 2 || mode == 1 || mode == 10 || mode == 0) {
            if (self->unk_140 != 0) {
                if (mode == 10) {
                    l.va.x = self->unk_154;
                    l.va.y = self->unk_158;
                    l.va.z = self->unk_15c;
                    if (func_ov003_02204d90(self, 0, &l.va.x)) {
                        return TRUE;
                    }
                } else {
                    l.vb.x = self->unk_154;
                    l.vb.y = self->unk_158;
                    l.vb.z = self->unk_15c;
                    if (func_ov003_02204d90(self, mode, &l.vb.x)) {
                        return TRUE;
                    }
                }
            }
        }
        break;
    case 2:
        if (mode == 4) {
            l.z.x = 0;
            l.z.y = 0;
            l.z.z = 0;
            if (func_ov003_02204d90(self, mode, &l.z.x)) {
                return TRUE;
            }
        }
        break;
    }
    if (self->unk_16c == 2 && mode == 5) {
        func_0204ee10(&xy[0], &xy[1], &self->unk_154);
        s32 hx, hy, x, y;
        x = *(volatile s32 *)&xy[0];
        y = *(volatile s32 *)&xy[1];
        hx = x >> 4;
        hy = y >> 4;
        u16 *cell = (u16 *)func_0204ebd8(data_021c47c4, hx, hy, x - (hx << 4), y - (hy << 4), 0);
        if (cell) {
            BOOL f8 = TRUE, f7 = TRUE, f6 = TRUE, f5 = TRUE, f4 = TRUE, f3 = TRUE, f2 = TRUE, f1 = FALSE;
            u32 v = *cell;
            if (v <= 5) {
                f1 = TRUE;
            }
            if (!f1) {
                if (v < 6 || v > 0xb) {
                    f2 = FALSE;
                }
            }
            if (!f2) {
                if (v < 0xc || v > 0x11) {
                    f3 = FALSE;
                }
            }
            if (!f3) {
                if (!((v >= 0x12 && v <= 0x19) || v == 0x1c)) {
                    f4 = FALSE;
                }
            }
            if (!f4) {
                if (!((v >= 0x8a && v <= 0x8f) || (v >= 0x90 && v <= 0x95) || (v >= 0x96 && v <= 0x9b) || (v >= 0x9c && v <= 0xa3) || v == 0xa5)) {
                    f5 = FALSE;
                }
            }
            if (!f5) {
                if (v != 0x1a) {
                    f6 = FALSE;
                }
            }
            if (!f6) {
                if (v != 0xa4) {
                    f7 = FALSE;
                }
            }
            if (!f7) {
                if (v != 0x1d) {
                    f8 = FALSE;
                }
            }
            if (!f8) {
                if (!((v >= 0x6e && v <= 0x73) || (v >= 0x74 && v <= 0x79) || (v >= 0x7a && v <= 0x7f) || (v >= 0x80 && v <= 0x87) || v == 0x88 || v == 0x89)) {
                    goto after_tile;
                }
            }
            l.z.x = 0;
            l.z.y = 0;
            l.z.z = 0;
            if (func_ov003_02204d90(self, mode, &l.z.x)) {
                return TRUE;
            }
        }
    }
after_tile:
    if (self->unk_144) {
        if (func_0200f9d4(self, mode)) {
            return TRUE;
        }
    }
    if (self->unk_16c == 2) {
        switch (mode) {
        case 1: {
            ang = func_020e7b98(self->unk_154 - self->unk_6f0, self->unk_15c - self->unk_6f8);
            func_0200f3ec(&l.t, self, self->unk_5c, &ang, data_ov003_0222efb4);
            if (func_0200fa2c(self, &l.t.x, mode)) {
                s32 *pa = &self->unk_154;
                s32 *pb = &self->unk_158;
                s32 *pc = &self->unk_15c;
                l.s.x = *pa;
                l.s.y = *pb;
                l.s.z = *pc;
                *pa = l.t.x;
                *pb = l.t.y;
                *pc = l.t.z;
                l.z.x = 0;
                l.z.y = 0;
                l.z.z = 0;
                if (func_ov003_02204d90(self, mode, &l.z.x)) {
                    self->unk_154 = l.s.x;
                    self->unk_158 = l.s.y;
                    self->unk_15c = l.s.z;
                    return TRUE;
                }
                self->unk_154 = l.s.x;
                self->unk_158 = l.s.y;
                self->unk_15c = l.s.z;
            }
            break;
        }
        case 5:
            l.z.x = 0;
            l.z.y = 0;
            l.z.z = 0;
            if (func_ov003_02204d90(self, mode, &l.z.x)) {
                return TRUE;
            }
            break;
        case 3:
            if (func_02030d60(&self->unk_154)) {
                l.vc.x = self->unk_154;
                l.vc.y = self->unk_158;
                l.vc.z = self->unk_15c;
                if (func_ov003_02204d90(self, mode, &l.vc.x)) {
                    return TRUE;
                }
            }
            break;
        }
    }
fail:
    if (mode == 0) {
        if (self->unk_13c) {
            if (func_020b8e14()) {
                func_ov003_02207404(self, 6, -1);
                return TRUE;
            }
        }
    }
    return FALSE;
}
}

namespace ns_02204d90 {
extern "C" BOOL func_ov003_02204d90(Unk_02006d14 *self, s32 mode, s32 *pos) {
    Unk_ov003_02204ce8_Vec a, z, c, z2, t1, t2;
    switch (mode) {
    case 2:
        func_ov003_0220fc00(self, 6, -1);
        return TRUE;
    case 1:
        func_ov003_0220b620(self, 6, -1);
        return TRUE;
    case 4:
        func_ov003_0220d00c(self, 6, -1);
        return TRUE;
    case 3:
        z.x = 0;
        z.y = 0;
        z.z = 0;
        if (func_020e972c(pos, &z.x)) {
            s32 *pv = self->unk_5c;
            pos[0] = pv[0];
            pos[1] = pv[1];
            pos[2] = pv[2];
        }
        if (func_ov003_02205894(self, &a.x, pos)) {
            c.x = a.x;
            c.y = a.y;
            c.z = a.z;
            func_ov003_0220e8cc(self, &c.x, 6, -1);
        } else {
            func_ov003_0220e6b0(self, 6, -1);
        }
        return TRUE;
    case 5:
        func_ov003_02209030(self, 6, -1);
        return TRUE;
    case 6:
        func_ov003_02208d18(self, 6, -1);
        return TRUE;
    case 7:
        func_ov003_0220627c(self, 6, -1);
        return TRUE;
    case 8:
        func_ov003_02206770(self, 6, -1);
        return TRUE;
    case 9:
        func_ov003_02206574(self, 6, -1);
        return TRUE;
    case 0:
    case 10:
        z2.x = 0;
        z2.y = 0;
        z2.z = 0;
        if (func_020e972c(pos, &z2.x)) {
            func_0200f45c(&t1, (Unk_02006d14 *)self);
            pos[0] = t1.x;
            pos[1] = t1.y;
            pos[2] = t1.z;
        }
        func_0200f45c(&t2, self);
        a.x = t2.x;
        a.y = t2.y;
        a.z = t2.z;
        if (func_020e9650(self->unk_5c, pos) < 0x2334) {
            if (func_0200f8f8(self, &a.x, 1, 0)) {
                BOOL f;
                if (func_0200f9bc(self) == 1) {
                    f = FALSE;
                } else {
                    f = TRUE;
                }
                s32 zero = 0;
                func_ov003_022084f4(self, a.x, a.z, f, zero, 6, ~zero);
                return TRUE;
            }
        }
        if (mode == 10) {
            func_ov003_0220fe1c(self, 6, -1);
            return TRUE;
        }
    }
    return FALSE;
}
}

namespace ns_02204d90 {
extern "C" BOOL func_ov003_02204ce8(Unk_02006d14 *self, s32 a) {
    Unk_ov003_02204ce8_Vec v;
    if (func_ov003_02205b68(self, &a)) {
        return TRUE;
    }
    if (self->unk_16c == 1) {
        Unk_ov003_02204ce8_Vec t;
        func_0200f3ec(&t, self, self->unk_5c, &self->unk_8e, data_ov003_02230af0);
        v.x = t.x;
        v.y = t.y;
        v.z = t.z;
    } else {
        v.x = self->unk_154;
        v.y = self->unk_158;
        v.z = self->unk_15c;
        if (!func_0200fa2c(self, &v.x, 0xc)) {
            return FALSE;
        }
    }
    if (func_0200f8f8(self, &v.x, 0, a)) {
        if (func_0200f6d4(self, &v.x, 0)) {
            return TRUE;
        }
    }
    return FALSE;
}
}

