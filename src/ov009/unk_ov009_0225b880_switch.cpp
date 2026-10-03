// mwcc-version: 1.2/base
#include "types.h"

// Library base class chain (header Unk_020d8c7c.h rebuilt so that the vtable names the real symbols:
// slot 08 is Unk_020d9670::func_0203e678(int)).
class Unk_020d8c7c_Base {
public:
    static void *operator new(unsigned long size);
    static void operator delete(void *ptr);

    Unk_020d8c7c_Base();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual void func_0203e678(s32 v);
    virtual BOOL vfunc_0c();
    virtual BOOL func_ov009_0225d978();
    virtual BOOL vfunc_14();
    virtual BOOL vfunc_18();
    virtual BOOL func_ov009_0225db04();
    virtual BOOL vfunc_20(u32 a);
    virtual BOOL vfunc_24();
    virtual BOOL func_ov009_0225d9e4();
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

struct Unk_ov009_0225b880_Vec3 {
    s32 x, y, z;
};

// Returned through a hidden pointer by vfunc_b4 (func_ov009_0225b884)
struct Unk_ov009_0225da90_Vec3 {
    s32 x, y, z;
    Unk_ov009_0225da90_Vec3() {}
};

struct Unk_ov009_0225cb4c_V3 : Unk_ov009_0225b880_Vec3 {
    Unk_ov009_0225cb4c_V3(s32 a, s32 b, s32 c) {
        x = a;
        y = b;
        z = c;
    }
    Unk_ov009_0225cb4c_V3() {}
};

class Unk_020d5d84 : public Unk_020d8c7c {
public:
    Unk_020d5d84();
    virtual BOOL vfunc_04();
    virtual BOOL func_ov009_0225d978();
    virtual BOOL vfunc_14();
    virtual BOOL func_ov009_0225db04();
    virtual BOOL vfunc_20(u32 a);
    virtual BOOL func_ov009_0225d9e4();
    virtual BOOL vfunc_2c();
    virtual ~Unk_020d5d84();

    /* 0x50 */ u8 unk_50[0xc];
    /* 0x5c */ s32 unk_5c[3];
    /* 0x68 */ u8 pad_68[0x8e - 0x68];
    /* 0x8e */ s16 unk_8e;
    /* 0x90 */ u8 pad_90[0xc4 - 0x90];
    /* 0xc4 */ s32 unk_c4;
    /* 0xc8 */ s32 unk_c8;
    /* 0xcc */ s32 unk_cc;
    /* 0xd0 */ s16 unk_d0;
    /* 0xd2 */ u16 pad_d2;
};

struct Unk_0203e5d0_Node {
    /* 0x00 */ u32 unk_00;
    /* 0x04 */ Unk_0203e5d0_Node *unk_04;
    /* 0x08 */ u32 unk_08;
    /* 0x0c */ void *unk_0c;
};

class Unk_020d9670 : public Unk_020d5d84 {
public:
    Unk_020d9670();
    virtual ~Unk_020d9670();
    virtual void func_0203e678(s32 v);
    virtual BOOL vfunc_04();
    virtual BOOL func_ov009_0225d978();
    virtual BOOL func_ov009_0225db04();
    virtual BOOL vfunc_48(Unk_020d9670 *a);
    virtual void vfunc_4c(u32 a, u8 b);
    virtual Unk_ov009_0225b880_Vec3 *func_ov009_0225bea4();
    virtual BOOL vfunc_54(void *a);
    virtual BOOL vfunc_58(void *a);
    virtual BOOL vfunc_5c();

    void func_0203e42c();
    void func_0203e468(s32 v);

    /* 0xd4 */ Unk_0203e5d0_Node unk_d4;
    /* 0xe4 */ s32 unk_e4;
    /* 0xe8 */ u16 unk_e8;
    /* 0xea */ u16 pad_ea;
};

struct Unk_ov009_0225b880_Target {
    /* 0x00 */ u32 unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08;
};

// Real class of the secondary base's first part (vtable 0x020e2a30 in main)
class Unk_020e2a30 {
public:
    Unk_020e2a30();
    virtual ~Unk_020e2a30();
    virtual void vfunc_08();
    void func_020a710c(const char *src);

    /* 0x04 */ char unk_04[0x1a];
    /* 0x1e */ u8 unk_1e;
};

// Secondary base at +0xec (vtable 0x020ddcf0 in main)
class Unk_020ddcf0 : public Unk_020e2a30 {
public:
    Unk_020ddcf0();
    virtual ~Unk_020ddcf0();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void vfunc_10();
    virtual void vfunc_88();
    virtual void vfunc_18();
    virtual void vfunc_1c();
    virtual void vfunc_20();
    virtual void vfunc_24();
    virtual void vfunc_28();
    virtual void vfunc_2c();
    virtual void vfunc_30();
    virtual void vfunc_34();
    virtual void vfunc_38(u32 a);
    virtual void vfunc_3c();
    virtual void vfunc_40();
    virtual void vfunc_44();
    virtual void vfunc_48();
    virtual void vfunc_4c();
    virtual void vfunc_50();
    virtual void vfunc_54();
    virtual void vfunc_58();
    virtual void vfunc_5c();
    virtual void vfunc_60();
    virtual void vfunc_64();
    virtual void vfunc_68();
    virtual void vfunc_6c();
    virtual void vfunc_70();
    virtual void vfunc_74();

    /* 0x1f */ u8 pad_1f[0x3c - 0x1f];
    /* 0x3c */ Unk_ov009_0225b880_Target *unk_3c;
    /* 0x40 */ u8 pad_40[2];
    /* 0x42 */ u16 unk_42;
};

struct Unk_ov009_0225bc88_Blk {
    s64 v[6];
};

struct Unk_ov009_0225bf3c_Flags {
    u8 f0 : 1;
    u8 f1 : 1;
    u8 rest : 6;
};

struct Unk_ov009_0225c644_Msg {
    u32 v[4];
    Unk_ov009_0225c644_Msg() {}
};


struct Unk_ov009_0225bb0c_Tmp {
    u32 pad[4];
};

struct Vec3 {
    s32 x, y, z;
};
struct Unk_0202f2ac_V3 {
    s32 x, y, z;
};
struct Unk_02031e10_Vec {
    s32 x, y, z;
};

struct Unk_ov009_0225e4e0_Col {
    u8 r, g, b, a;
    Unk_ov009_0225e4e0_Col(u8 r_, u8 g_, u8 b_, u8 a_) {
        r = r_;
        g = g_;
        b = b_;
        a = a_;
    }
};

// Scratch object of vfunc_78 (its empty ctor/dtor are inlined; mwcc still emits one unreferenced weak dtor)
struct Unk_ov009_0225bce0_Pad {
    s32 v[2];
    Unk_ov009_0225bce0_Pad() {}
    ~Unk_ov009_0225bce0_Pad() {}
};

// ---- main-module helper classes (declarations only)
struct Unk_020e44d4 {
    Unk_020e44d4();
    static void *operator new(unsigned long, void *p) { return p; }
    u8 pad[0x44];
};

struct Unk_020b6960 {
    BOOL func_020b6818(Unk_020e44d4 *o, Vec3 *a, Vec3 *b, Vec3 *c, s32 d, u8 e);
    BOOL func_020b6848(Unk_020e44d4 *o);
};

struct Unk_020b28ac {
    void func_020b28ac(s32 *a, s32 *b, s32 *c, s32 *d);
    BOOL func_020b2958(s32 *a, s32 *b, s32 *c, u32 i);
    u32 func_020b29e4();
};

class Unk_020abea8 {
public:
    void func_020abed4(Vec3 *pos);
    BOOL func_020ac0c4(Vec3 *pos, s32 size, s32 shift, s32 idx, s32 a, s32 b, s32 heap);
    Unk_020abea8 *func_020ac1e0();

    u8 pad[0x34];
};

struct Unk_020d8e14 {
    void func_0203535c(s32 a);
};

struct Unk_02034518 {
    u8 pad_00[0x2d0];
    Unk_020d8e14 unk_2d0;
};

class Unk_ov009_0225e29c;
struct Unk_ov009_0225cc24_Obj;

class Unk_020d8ccc {
public:
    Unk_020d8ccc();
    virtual s32 vfunc_00(Unk_0202f2ac_V3 *a, Unk_0202f2ac_V3 *b, s32 c);
    virtual void vfunc_04(Unk_0202f2ac_V3 *a, Unk_0202f2ac_V3 *b, s32 c);
    virtual void vfunc_08(Unk_0202f2ac_V3 *a, Unk_0202f2ac_V3 *b, s32 c);
    virtual void vfunc_0c(Unk_0202f2ac_V3 *a, Unk_0202f2ac_V3 *b, s32 c);
    virtual void vfunc_10(Unk_ov009_0225b880_Vec3 *a, Unk_ov009_0225cc24_Obj *o, s32 off);
    s32 func_0202f274(Unk_0202f2ac_V3 *p);
    BOOL func_0202f050(Unk_0202f2ac_V3 *out, Unk_0202f2ac_V3 *p, Unk_0202f2ac_V3 *q);

    s32 unk_04[9];
    s32 unk_28, unk_2c, unk_30, unk_34;
};

class Unk_020d8d74 : public Unk_020d8ccc {
public:
    Unk_020d8d74();
    void func_02031e10(Unk_02031e10_Vec *a, Unk_02031e10_Vec *b, Unk_02031e10_Vec *c, s32 d);

    Unk_020d8d74 *unk_38;
    s32 unk_3c, unk_40, unk_44;
    s32 unk_48;
};

// ov009 element (vtable 0x0225e280, size 0x54), one per ground-collision triangle
class Unk_ov009_0225e280 : public Unk_020d8d74 {
public:
    Unk_ov009_0225e280();
    virtual void vfunc_10(Unk_ov009_0225b880_Vec3 *a, Unk_ov009_0225cc24_Obj *o, s32 off);
    BOOL func_ov009_0225cc24(Unk_ov009_0225b880_Vec3 *v, s32 off, Unk_ov009_0225cc24_Obj *o);
    static void *operator new(unsigned long, void *p) { return p; }

    /* 0x4c */ Unk_ov009_0225e29c *unk_4c;
    /* 0x50 */ s32 unk_50;
};

struct Unk_ov009_0225cc24_Obj {
    /* 0x00 */ u8 pad_00[0xc];
    /* 0x0c */ u16 unk_0c;
    /* 0x0e */ u8 pad_0e[0x8e - 0xe];
    /* 0x8e */ s16 unk_8e;
    /* 0x90 */ u8 pad_90[0x98 - 0x90];
    /* 0x98 */ s32 unk_98;
};

struct Unk_ov009_0225cd48_Item {
    /* 0x00 */ u32 unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08;
    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ s32 unk_14;
    /* 0x18 */ s32 unk_18;
};

struct Unk_ov009_0225cd48_Tbl {
    Unk_ov009_0225cd48_Item *func_ov009_0225cd48(u32 i);
    u32 func_ov009_0225cd54();

    /* 0x00 */ u32 unk_00;
    /* 0x04 */ Unk_ov009_0225cd48_Item unk_04[1];
};

// 0x50-byte record of the static array data_ov009_0225e674 (0x22 entries)
struct Unk_ov009_0225d244_Entry {
    Unk_ov009_0225d244_Entry();
    ~Unk_ov009_0225d244_Entry();

    /* 0x00 */ s32 unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08;
    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ s32 unk_14;
    /* 0x18 */ s32 unk_18;
    /* 0x1c */ Unk_ov009_0225cd48_Tbl *unk_1c;
    /* 0x20 */ s32 unk_20[4];
    /* 0x30 */ s32 unk_30[4];
    /* 0x40 */ s32 unk_40;
    /* 0x44 */ s32 unk_44;
    /* 0x48 */ s32 unk_48;
    /* 0x4c */ s32 unk_4c;
};

struct Unk_ov009_0225d2a4_Obj {
    u32 pad[0x6c / 4];
};

struct Unk_ov009_0225bbdc_Target {
    /* 0x00 */ u8 pad_00[0x28];
    /* 0x28 */ s32 unk_28;
    /* 0x2c */ s32 unk_2c;
    /* 0x30 */ s32 unk_30;
};

struct Unk_ov009_0225df84_Obj;
struct Unk_ov009_0225df94_Target;

// Sub-object at +0x234 (Unk_0213b9c4 + flag byte, 0x44 bytes); its destructor is emitted in this overlay.
class Unk_020f43c8 {
public:
    virtual ~Unk_020f43c8();
};

// Vtable 0x0213b9c4 (ctor func_020f3e50 in main); its destructor is emitted in this overlay.
class Unk_0213b9c4 : public Unk_020f43c8 {
public:
    Unk_0213b9c4();
    virtual ~Unk_0213b9c4();

    /* 0x04 */ u8 pad_04[0x3c];
};

class Unk_ov009_0225b894 {
public:
    Unk_ov009_0225b894();

    void func_ov009_0225b894(u32 a);
    void func_ov009_0225b8b0(u32 a);
    void func_ov009_0225b8cc();
    void func_ov009_0225b8ec(Unk_ov009_0225b880_Vec3 *v);
    void func_ov009_0225b914();

    /* 0x00 */ Unk_0213b9c4 unk_00;
    /* 0x40 */ u8 unk_40;
};

class Unk_ov009_0225e29c : public Unk_020d9670, public Unk_020ddcf0 {
public:
    Unk_ov009_0225e29c();
    virtual ~Unk_ov009_0225e29c();
    virtual BOOL vfunc_00();
    virtual BOOL func_ov009_0225d978();
    virtual BOOL func_ov009_0225db04();
    virtual BOOL vfunc_20(u32 a);
    virtual BOOL func_ov009_0225d9e4();
    virtual BOOL vfunc_48(Unk_020d9670 *a);
    virtual void vfunc_4c(u32 a, u8 b);
    virtual Unk_ov009_0225b880_Vec3 *func_ov009_0225bea4();
    virtual void vfunc_60(u32 a, void *b);
    virtual s32 func_ov009_0225d708();
    virtual s32 func_ov009_0225d6f0();
    virtual s32 vfunc_6c(s32 a);
    virtual BOOL func_ov009_0225dd58();
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
    virtual Unk_ov009_0225da90_Vec3 vfunc_b4();
    virtual BOOL vfunc_b8(Unk_ov009_0225bc88_Blk *out);

    s32 func_ov009_0225d650();
    s32 func_ov009_0225d7f0();
    s32 func_ov009_0225d720();
    s32 func_ov009_0225d788();
    BOOL func_ov009_0225c360(s32 a);
    BOOL func_ov009_0225c1ac();
    BOOL func_ov009_0225c248();
    void func_ov009_0225c288();
    BOOL func_ov009_0225c28c();
    void func_ov009_0225c290();
    void func_ov009_0225c440();
    BOOL func_ov009_0225c454();
    void func_ov009_0225c458();
    BOOL func_ov009_0225c46c();
    void func_ov009_0225c470();
    BOOL func_ov009_0225c4f4();
    void func_ov009_0225c538();
    BOOL func_ov009_0225c568();
    void func_ov009_0225c5d4();
    BOOL func_ov009_0225c644();
    void func_ov009_0225c7a8();
    BOOL func_ov009_0225c818();
    void func_ov009_0225c97c();
    BOOL func_ov009_0225ca50();

    void func_ov009_0225cd58();
    void func_ov009_0225cdb4();
    void func_ov009_0225ce04(Unk_ov009_0225bc88_Blk *m);
    void func_ov009_0225cf40();
    void func_ov009_0225cf78(Unk_ov009_0225bc88_Blk *m);
    void func_ov009_0225cfd8(Unk_ov009_0225bc88_Blk *m);
    void func_ov009_0225d078(Unk_ov009_0225bc88_Blk *out);
    void func_ov009_0225d0d8();
    Unk_ov009_0225d244_Entry *func_ov009_0225d244();
    void func_ov009_0225d264(Unk_ov009_0225bc88_Blk *out);
    BOOL func_ov009_0225d2a4(char *a, char *b, char *c);
    BOOL func_ov009_0225d498(char *a, char *b, char *c);
    void *func_ov009_0225d6b8(u32 idx);
    s32 func_ov009_0225d6d8();
    void func_ov009_0225d858();
    void func_ov009_0225d928();

    BOOL func_ov009_0225b998();
    BOOL func_ov009_0225b9b8();
    BOOL func_ov009_0225b9fc();
    BOOL func_ov009_0225ba1c();
    BOOL func_ov009_0225ba60();
    void func_ov009_0225ba74();
    BOOL func_ov009_0225baa4();
    void func_ov009_0225b964();
    u32 func_ov009_0225b974();
    u32 func_ov009_0225b980();
    u16 *func_ov009_0225b98c();
    s32 func_ov009_0225bb74();
    BOOL func_ov009_0225bbdc(Unk_ov009_0225b880_Vec3 *out, s16 *ang);
    void func_ov009_0225bc88();
    void func_ov009_0225beb0();
    BOOL func_ov009_0225bf08();
    void func_ov009_0225bf0c();
    BOOL func_ov009_0225bf28();
    void func_ov009_0225bf3c();
    BOOL func_ov009_0225c008();
    void func_ov009_0225c018();
    BOOL func_ov009_0225c054();
    void func_ov009_0225c0d8();
    BOOL func_ov009_0225c0f4();
    void func_ov009_0225c108();
    BOOL func_ov009_0225c14c();
    void func_ov009_0225c150();
    BOOL func_ov009_0225c17c();

    /* 0x130 */ u8 unk_130;
    /* 0x131 */ u8 pad_131;
    /* 0x132 */ u16 unk_132;
    /* 0x134 */ u32 unk_134;
    /* 0x138 */ u8 unk_138[0x194 - 0x138];
    /* 0x194 */ void *unk_194;
    /* 0x198 */ u8 pad_198[4];
    /* 0x19c */ Unk_ov009_0225bc88_Blk unk_19c;
    /* 0x1cc */ u8 pad_1cc[0x1d4 - 0x1cc];
    /* 0x1d4 */ u8 unk_1d4[0x1f0 - 0x1d4];
    /* 0x1f0 */ u8 unk_1f0[0x228 - 0x1f0];
    /* 0x228 */ u32 unk_228;
    /* 0x22c */ u32 unk_22c;
    /* 0x230 */ u8 unk_230;
    /* 0x231 */ u8 unk_231;
    /* 0x232 */ Unk_ov009_0225bf3c_Flags unk_232;
    /* 0x233 */ u8 unk_233;
    /* 0x234 */ u8 unk_234[0x44];
    /* 0x278 */ s32 unk_278;
    /* 0x27c */ u8 unk_27c;
    /* 0x27d */ u8 pad_27d;
    /* 0x27e */ u16 unk_27e;
    /* 0x280 */ Unk_020abea8 *unk_280;
    /* 0x284 */ Unk_020e44d4 *unk_284;
    /* 0x288 */ Unk_ov009_0225e280 *unk_288;
    /* 0x28c */ u8 unk_28c;
    /* 0x28d */ u8 pad_28d;
    /* 0x28e */ u8 unk_28e[2];
    /* 0x290 */ s32 unk_290;
    /* 0x294 */ s32 unk_294;
    /* 0x298 */ s32 unk_298;
    /* 0x29c */ s32 unk_29c;
    /* 0x2a0 */ s32 unk_2a0;
    /* 0x2a4 */ Unk_ov009_0225b880_Vec3 unk_2a4;
};

typedef void (Unk_ov009_0225e29c::*Unk_ov009_0225c290_Fn)();
typedef BOOL (Unk_ov009_0225e29c::*Unk_ov009_0225c360_Fn)();

// Real (mangled) symbols of the other modules, reached as plain functions with the object first.
#define func_02002d9c _ZN12Unk_020d5d848vfunc_28Ev
#define func_02002dd0 _ZN12Unk_020d5d848vfunc_20Ev
#define func_0203e638 _ZN12Unk_020d96708vfunc_1cEv
#define func_0203e650 _ZN12Unk_020d96708vfunc_10Ev
#define func_0203e624 _ZN12Unk_020d967013func_0203e624Ej
#define func_02003e50 _ZN12Unk_02003c3013func_02003e50Ev
#define func_02003e80 _ZN12Unk_02003c4013func_02003e80EP16Unk_02003a6c_Vec
#define func_02003ecc _ZN12Unk_02003c3013func_02003eccEv
#define func_02031ea0 _ZN12Unk_020d8d7413func_02031ea0Ev
#define func_02054710 _ZN12Unk_020dbd5413func_02054710Ev
#define func_02054720 _ZN12Unk_0205454c13func_02054720Eiiitt
#define func_020547cc _ZN12Unk_020dbd5413func_020547ccEPv
#define func_020547e4 _ZN12Unk_020dbd5413func_020547e4Ev
#define func_02054800 _ZN12Unk_020dbd5413func_02054800EPv
#define func_020548a0 _ZN12Unk_020dbd54D1Ev
#define func_020548d0 _ZN12Unk_020dbd54C1Ev
#define func_02055488 _ZN12Unk_020dbe3413func_02055488Eii
#define func_020555dc _ZN12Unk_020dbe3413func_020555dcEv
#define func_020555ec _ZN12Unk_020dbe3413func_020555ecEP16Unk_020553f8_Resj
#define func_020565e8 _ZN12Unk_020dbe7c13func_020565e8Ei
#define func_02056654 _ZN12Unk_020dbe7c13func_02056654Ev
#define func_02066cf8 _ZN12Unk_02066ce013func_02066cf8Ei
#define func_020b1f64 _ZN12Unk_020b1f6413func_020b1f64Ev
#define func_020b1f7c _ZN12Unk_020b1f6413func_020b1f7cEiii
#define func_020b1f94 _ZN12Unk_020b1f6413func_020b1f94EP3Ctx
#define func_020b1fd4 _ZN12Unk_020b1f6413func_020b1fd4EP3Ctxi
#define func_020b200c _ZN12Unk_020b1f64D2Ev
#define func_020b2034 _ZN12Unk_020b1f64C2Ev
#define func_ov009_0225b934 _ZN12Unk_0213b9c4D1Ev
#define func_ov009_0225b94c _ZN18Unk_ov009_0225b894C1Ev

extern "C" {
extern char data_ov009_0225e3d8[];
extern char data_ov009_0225e3e8[];
extern char data_ov009_0225e3ec[];
extern char data_ov009_0225e3fc[];
extern char data_ov009_0225e40c[];
extern char data_ov009_0225e41c[];
extern char data_ov009_0225e42c[];
extern char data_ov009_0225e43c[];
extern char data_ov009_0225e44c[];
extern char data_ov009_0225e45c[];
extern char data_ov009_0225e474[];
extern char data_ov009_0225e494[];
extern char data_ov009_0225e4b0[];
extern char data_ov009_0225e514[];
extern char data_ov009_0225e534[];
extern char data_ov009_0225e554[];
extern Unk_ov009_0225d244_Entry data_ov009_0225e674[];
extern u32 data_021c3070;
extern Unk_ov009_0225b880_Vec3 data_021c309c;
extern u8 data_020d0a7c[];
extern void *data_021c6204;
extern void *data_021f482c;
extern Unk_02034518 *data_021c1b3c;

void _ZN12Unk_020d967013func_0203e47cEi(void *self, Unk_020e2a30 *a);
void _ZN12Unk_020d967013func_0203e488Ei(void *self, Unk_020e2a30 *a);
void *func_ov009_0225b934(void *self);
void _ZN12Unk_020f43c8D2Ev(void *self);
extern u8 data_0213b9c4[];
void func_ov009_0225b94c(void *self);
void _ZN18Unk_ov009_0225b89419func_ov009_0225b8ecEP23Unk_ov009_0225b880_Vec3(void *self, Unk_ov009_0225b880_Vec3 *v, u32 extra);
Unk_020b28ac *func_020b27a4(u16 *p);

void func_020b16bc(void *self, const u8 *src);
void func_020b16b8(void *self);
s32 func_020b1694(void *self);
s32 func_020b1698(void *self);
s32 func_020b169c(void *self);
s32 func_020b16a0(void *self);
s32 func_020b16a4(void *self);
s32 func_020b16b0(void *self);

void func_02003e60(void *, u32, u32, u32);
void func_02003e70(void *, u32, u32, u32);
void func_02003e50(void *);
void func_02003e80(void *, void *);
void func_02003ecc(void *);
void func_020b1f64(void *);
void func_020547cc(void *, u32);
s32 func_020e7b98(s32, s32);
s32 func_01ffcb0c(s32, s32);
void func_01ffd070(Unk_ov009_0225b880_Vec3 *, void *, Unk_ov009_0225b880_Vec3 *);
void *func_02031ea0(void *);
BOOL func_0204b2d4(u16 *);
s32 func_0204b25c(u16 *);
void func_02066cf8(void *, u32);
void func_020b1040(u32, u32);
void func_020b101c();
void *func_020b4934();
void func_020b49b4();
s32 func_020e780c(s32, s32);
s32 func_020e9650(void *, void *);
s32 *func_020947f0(u32);
BOOL func_ov003_02212430(u32, s32 *, s32 *, s32);
BOOL func_020951d0();
void func_020949a0(u32);
BOOL func_020951c4();
void func_0203a5c4();
void func_0203d67c(void *);
BOOL func_ov003_0221249c(s32 *, s32 *, s16 *);
s32 func_020b50e8();
s32 func_020b4bbc(void *, s32);
s32 func_02030814(u32);
void func_020b49c4(void *, s32, Unk_ov009_0225b880_Vec3 *, u32, s32, u32, u32);
void func_020b0f00();

s32 func_020b10c4(u32);
void func_020b10e0(u32);
BOOL func_0204b1a0(u16 *);
void func_020547e4(void *);
BOOL func_02056654(void *);
BOOL func_020565e8(void *, s32);
void func_02054720(void *, void *, s32, s32, s32, s32);
void func_0206da9c(void *, s32);
s32 func_02095180(s32, s32);
BOOL func_0203d978();
void func_0203d704(void *, s32);
Unk_020b6960 *func_020b50b4();
s32 func_020b6014(void *, s32 *, u8 *);
void *func_02095204(u32);
BOOL func_020b1d3c(u32, u32);

void *func_020e8608(void *heap, u32 size);
u32 func_ov003_02218b1c(void *p);
void func_ov003_02218d6c(u32 a);
BOOL func_ov003_0221240c();
s32 func_02031da4(void *node);
void func_02031de0(void *node);
s32 func_0203ef38(void *out, void *in);
void func_020e8388(void *m, s32 a, s32 b, s32 c);
void func_020e8434(void *m, s32 a);
BOOL func_02094e3c();
s32 func_020639e8(char *buf, const char *fmt, ...);
void *func_020641ec(void *a, void *heap, s32 c, s32 d);
BOOL func_02063f18(void *p);
s32 func_02101340(void *buf, char *name, void *data);
void *func_021012bc(void *name);
void func_02101310(void *buf);
void *func_02106654();
void *func_02106670(void *p, s32 a);
void *func_02106690();
void *func_021066ac(void *p, s32 a);
void *NNS_G3dGetTex(void *p);
void func_020e8558(void *p);
BOOL func_020557a0(void *p, u32 a);
BOOL func_02055724(void *p, u32 a);
void *func_0205588c(void *p, void *g);

u16 func_0204b1cc(u32 x);
s32 func_020b1d80(u32);
s32 func_ov003_02218da8();
void func_ov003_02218d94();
s32 func_ov003_022187f8();
void func_ov003_02218c0c(void *);
void func_ov003_02218c34(void *);
BOOL func_020555ec(void *, void *, s32);
void func_02054800(void *, void *);
void func_02054710(void *);
void func_020555dc(void *);
void func_02055488(void *, void *, void *);
void func_020548a0(void *);
void func_0209c364(void *);
void func_0209cf18(void *);
void func_020b1f7c(void *, s32, s32, s32);
void func_020b1f94(void *, void *);
void func_020b1fd4(void *, void *, s32);
void func_020b200c(void *);
void func_0203e9d8();
void func_020ac790(u32);
BOOL func_02002d9c(void *);
s32 func_02002dd0(void *, u32);
BOOL func_0203e638(void *);
BOOL func_0203e650(void *);
void func_0203e624(void *, u32);
BOOL func_0203a4c4(void *, s32, s32);
s32 func_0203eeac(void *, void *);
void NNS_G3dBindMdlPltt(void *, s32);
void NNS_G3dBindMdlTex(void *, s32);

void func_020548d0(void *);
void func_020b2034(void *);
void func_0209c370(void *);
void *func_021065dc();
u32 func_021065f8(void *, u32);
void *NNS_G3dGetMdlSet();
void MTX_MultVec43(s32, s32, Unk_ov009_0225b880_Vec3 *);
void func_0203ee38(void *, Unk_ov009_0225b880_Vec3 *);
void __cxa_vec_cleanup(void *, s32, s32, void (*)(Unk_ov009_0225d244_Entry *));

void func_ov009_0225e020(void *p, s32 a, s32 b);
BOOL _ZN18Unk_ov009_0225e29c19func_ov009_0225c360Ei(void *self, s32 a);
BOOL func_ov009_0225d600();
void func_ov009_0225e040();
BOOL func_ov009_0225dfb8(Unk_ov009_0225d244_Entry *e);
void *func_ov009_0225df58(void *unused);
void *func_ov009_0225df6c(void *unused);
void func_ov009_0225df84(Unk_ov009_0225df84_Obj *o);
void func_ov009_0225df94(struct Unk_ov009_0225df94_Arg *a);
}

static inline BOOL Unk_ov009_0225d0d8_Match(u16 *p, u32 v) {
    BOOL r;
    if (func_0204b2d4(p)) {
        u16 t;
        t = v;
        s32 a = func_0204b25c(p);
        s32 b = func_0204b25c(&t);
        if (a == b) {
            r = TRUE;
        } else {
            r = FALSE;
        }
    } else {
        if (*p == v) {
            r = TRUE;
        } else {
            r = FALSE;
        }
    }
    return r;
}

static inline BOOL Unk_ov009_0225cc24_IsNine(u16 v) {
    if (v == 9) {
        return TRUE;
    }
    return FALSE;
}

static inline BOOL Unk_ov009_0225d858_Is(u16 *p, u32 v) {
    if (func_0204b2d4(p)) {
        u16 t = v;
        s32 a = func_0204b25c(p);
        s32 b = func_0204b25c(&t);
        if (a == b) {
            return TRUE;
        }
        return FALSE;
    }
    if (*p == v) {
        return TRUE;
    }
    return FALSE;
}

struct Unk_ov009_0225df94_Target {
    /* 0x00 */ u8 pad_00[0x2c];
    /* 0x2c */ Unk_ov009_0225e29c *unk_2c;
};

struct Unk_ov009_0225df94_Arg {
    /* 0x00 */ u8 *unk_00;
    /* 0x04 */ Unk_ov009_0225df94_Target *unk_04;
};

struct Unk_ov009_0225df84_Obj {
    /* 0x00 */ u8 pad_00[0x24];
    /* 0x24 */ void *unk_24;
    /* 0x28 */ u8 pad_28[0x92 - 0x28];
    /* 0x92 */ u8 unk_92;
};

void Unk_ov009_0225e29c::vfunc_4c(u32 a, u8 b) {
    switch (a) {
    case 6:
        func_020b1040(unk_132, 0);
        func_020b101c();
        func_020b4934();
        func_020b49b4();
        unk_230 = 1;
        break;
    case 0:
    case 1:
        func_ov009_0225c360(1);
        break;
    case 8:
        func_ov009_0225c360(0);
        break;
    }
}
