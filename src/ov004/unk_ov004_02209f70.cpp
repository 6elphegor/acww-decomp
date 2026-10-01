// mwcc-version: 1.2/sp2
#include "types.h"
// ov004 translation unit 0x02209f70-0x022136d0 (34 classes derived from Unk_ov004_0224882c). Built by two compilers:
// this file's thunks need mwcc 1.2/sp2, Unk_ov004_0224b43c::vfunc_80 / vfunc_7c (in the _switch file) need 1.2/base;
// the functions and data objects are placed by address (config/usa/arm9/overlays/ov004/object_order.txt).
// Layout: library chain + TU02 helper classes, the base class with one anonymous-struct view of its fields per old
// source file (b<NN>_ prefixes), then one part per old source file. Each part keeps its own C prototypes in a
// namespace p<NN>, declared under the real symbol names.
// ================================================================ library chain and TU02 helper classes (from the linked TU02 unit)
struct Unk_020660f8 {
    /* 0x0000 */ u32 unk_00;
    /* 0x0004 */ s32 unk_04;
    /* 0x0008 */ s32 unk_08;
};

// ================================================================ plain value types
struct Vec3 {
    s32 x, y, z;
};

struct Unk_ov004_Mtx {
    s64 v[6];
};

typedef Vec3 Unk_ov004_Vec3;
struct Unk_ov004_02205d8c_Vec {
    s32 x, y, z;
};
struct Unk_0203e4f0_Vec {
    s32 x, y, z;
};
typedef Vec3 Unk_ov004_022077a4_Vec3;
typedef Vec3 Unk_ov004_02208284_V3;
typedef Unk_ov004_Mtx Unk_ov004_02208284_M;
typedef Unk_ov004_Mtx Unk_ov004_022077a4_Mtx;
typedef Unk_ov004_Mtx Unk_ov004_02205eb0_Mtx;

// main class 0x02000c8c (3 words, registered for destruction through __register_global_object)
struct Unk_02000c8c {
    s32 x, y, z;
    Unk_02000c8c() {}
    Unk_02000c8c(s32 a, s32 b, s32 c) {
        x = a;
        y = b;
        z = c;
    }
    ~Unk_02000c8c();
};

// ================================================================ library chain (as tu01, but slot 08/14 as this class overrides them)
class Unk_020d8c7c_Base {
public:
    static void *operator new(unsigned long size);
    static void operator delete(void *ptr);

    Unk_020d8c7c_Base();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual void vfunc_08(s32 a);
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_14(s32 a);
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_1c();
    virtual BOOL vfunc_20();
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

struct Unk_02002f14_Node {
    void *unk_00;
    void *unk_04;
    void *unk_08;
};

class Unk_020d5d84 : public Unk_020d8c7c {
public:
    Unk_020d5d84();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_14(s32 a);
    virtual BOOL vfunc_1c();
    virtual BOOL vfunc_20();
    virtual BOOL vfunc_28();
    virtual BOOL vfunc_2c();
    virtual ~Unk_020d5d84();

    /* 0x50 */ Unk_02002f14_Node unk_50;
    /* 0x5c */ s32 unk_5c[3];
    /* 0x68 */ u8 pad_68[0x8e - 0x68];
    /* 0x8e */ s16 unk_8e;
    /* 0x90 */ u8 pad_90[0xd4 - 0x90];
};

struct Unk_0203e5d0_Node {
    u32 unk_00;
    Unk_0203e5d0_Node *unk_04;
    u32 unk_08;
    void *unk_0c;
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
    virtual Unk_02000c8c *vfunc_50();
    virtual BOOL vfunc_54(void *a);
    virtual BOOL vfunc_58(void *a);
    virtual BOOL vfunc_5c();

    void func_0203e47c(s32 a);
    void func_0203e488(s32 a);

    /* 0xd4 */ Unk_0203e5d0_Node unk_d4;
    /* 0xe4 */ s32 unk_e4;
    /* 0xe8 */ u16 unk_e8;
    /* 0xea */ u16 pad_ea;
};

// ---------------------------------------------------------------- secondary base at +0xec (vtable 0x020ddcf0 in main)
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
    virtual void vfunc_s10();
    virtual void vfunc_14();
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

    u8 pad_20[0x1c];
    /* 0x3c */ Unk_020660f8 *unk_3c;
    /* 0x40 */ u8 unk_40;
};

// ================================================================ helper object types (members of / used by the 0224882c object)
struct Unk_ov004_02205c80_Obj {
    u8 pad_00[0x8e];
    s16 unk_8e;
    u8 pad_90[0x284 - 0x90];
    u8 unk_284;
    u8 pad_285[0x598 - 0x285];
    Unk_ov004_Mtx unk_598;
    u8 pad_5c8[0x768 - 0x5c8];
    s32 unk_768;
    u8 pad_76c[0x789 - 0x76c];
    u8 unk_789;
    u8 pad_78a[2];
    s32 unk_78c;
};

struct Unk_02056fd8 {
    s32 func_02057110(s32 a);
};

// ---- 0x02206520: list of up to 4 tile positions
struct Unk_ov004_02206520_Ent {
    s32 x, y;
    Unk_ov004_02206520_Ent() {
        x = 0;
        y = 0;
    }
};

struct Unk_ov004_02206520 {
    u32 unk_00;
    Unk_ov004_02206520_Ent unk_04[4];
    Unk_ov004_02206520_Ent *func_ov004_02206520(s32 i);
    u32 func_ov004_0220652c();
    BOOL func_ov004_02206530(u32 a, u32 b);
    void func_ov004_02206554();
    Unk_ov004_02206520();
};

struct Unk_ov004_0220650c {
    u32 unk_00;
    u32 unk_04[4];
    void func_ov004_0220650c();
};

// ---- 0x02205994: 4 ids + count (member at 0x760)
class Unk_ov004_02205994 {
public:
    u8 func_ov004_02205994();
    BOOL func_ov004_02205998(s32 v);
    void func_ov004_022059b0(u32 v);
    void func_ov004_022059b4(void *p, u32 v);

    /* 0x00 */ s8 unk_00[4];
    /* 0x04 */ u8 unk_04;
};

// ---- 0x02205bcc: model animation slot (base: main class B)
struct B {
    B();
    ~B();
    BOOL func_020b22c4(BOOL on, s32 a, s32 b, u32 param);
    BOOL func_020b2374(BOOL on);
    s32 unk_00;
    s32 unk_04;
    u32 unk_08;
    s32 unk_0c;
    u16 unk_10;
    u16 unk_12;
};

struct Unk_ov004_02205bcc : public B {
    Unk_ov004_02205bcc();
    ~Unk_ov004_02205bcc();
    BOOL func_ov004_02205bcc(BOOL on, s32 a, s32 b);
    BOOL func_ov004_02205be4(Unk_02056fd8 *res, s32 idx, BOOL on);
    s8 unk_14;
    Unk_02056fd8 *unk_18;
};

// ---- 0x02205b14: element view used by the 3-element container (same object as 0x02205bcc)
struct Unk_ov004_02205b14_Obj {
    u8 pad[0x18];
    u8 unk_18;
};

class Unk_ov004_02205b14 {
public:
    void func_ov004_02205b14();

    /* 0x00 */ u8 pad_00[0x14];
    /* 0x14 */ s8 unk_14;
    /* 0x15 */ u8 pad_15[3];
    /* 0x18 */ Unk_ov004_02205b14_Obj *unk_18;
};

class Unk_ov004_022059f4 {
public:
    Unk_ov004_022059f4();
    ~Unk_ov004_022059f4();
    void func_ov004_022059f4();
    u32 func_ov004_02205a1c(u32 a, u32 b, u32 c);
    u32 func_ov004_02205a64(u32 a, u32 b);

    /* 0x00 */ Unk_ov004_02205bcc unk_00[3];
    /* 0x54 */ u8 unk_54;
};

// ---- 0x02205c44 (member at 0x73c)
struct Unk_ov004_02205c44 {
    ~Unk_ov004_02205c44();
    void func_ov004_02205c44(u32 v, s32 flag);
    void func_ov004_02205c54(s32 flag);
    BOOL func_ov004_02205c6c();
    u8 func_ov004_02205c7c();
    void func_ov004_02205c80(Unk_ov004_02205c80_Obj *o);
    void func_ov004_02205cc4(Unk_ov004_02205c80_Obj *o);
    void func_ov004_02205cdc(Unk_ov004_02205c80_Obj *o);
    void func_ov004_02205d50();
    u8 unk_00;
    u8 unk_01;
};

// ---- 0x02205d5c (member at 0x73e)
struct Unk_ov004_02205d5c {
    ~Unk_ov004_02205d5c();
    void func_ov004_02205d5c(s32 a, s32 b);
    void func_ov004_02205d7c();
    s8 unk_00;
    s8 unk_01;
    u8 unk_02;
};

// ---- 0x02205e58 (member at 0x178)
struct Unk_ov004_02205e58 {
    ~Unk_ov004_02205e58();
    BOOL func_ov004_02205e20(s32 x, s32 y, s16 z);
    BOOL func_ov004_02205e58(s32 idx, Unk_ov004_02205d8c_Vec *pos, s32 ang);
    s32 func_ov004_02205e78();
    Unk_ov004_02205d8c_Vec *func_ov004_02205e80();
    s32 func_ov004_02205e84();
    BOOL func_ov004_02205e8c();
    void func_ov004_02205ea0();
    s16 unk_00;
    s16 unk_02;
    Unk_ov004_02205d8c_Vec unk_04;
};

// ---- 0x022062f4 (element of 0x022061b4)
struct Unk_ov004_022062f4 {
    Unk_ov004_022062f4();
    ~Unk_ov004_022062f4();
    BOOL func_ov004_022062c8(u16 *id, Unk_ov004_02205d8c_Vec *pos);
    u16 *func_ov004_022062f4();
    Unk_ov004_02205d8c_Vec *func_ov004_022062f8();
    void func_ov004_022062fc();
    BOOL func_ov004_02206310();
    void func_ov004_02206234(Unk_ov004_02205c80_Obj *o);
    u16 unk_00;
    u16 unk_02;
    Unk_ov004_02205d8c_Vec unk_04;
};

struct Unk_0203442c {
    Unk_0203442c() {
        unk_00 = 0xfff1;
    }
    ~Unk_0203442c();
    u16 unk_00;
};

// ---- 0x022061b4 (member at 0x188)
struct Unk_ov004_022061b4 {
    Unk_ov004_022061b4();
    ~Unk_ov004_022061b4();
    void func_ov004_02205eb0(Unk_ov004_02205c80_Obj *o);
    BOOL func_ov004_02205f58(Unk_ov004_02205c80_Obj *o);
    BOOL func_ov004_0220607c(Unk_ov004_02205c80_Obj *o);
    BOOL func_ov004_0220614c(u16 *id, Unk_ov004_02205d8c_Vec *pos);
    void func_ov004_02206190(Unk_ov004_02205c80_Obj *o);
    Unk_ov004_022062f4 *func_ov004_022061b4(u32 i);
    void func_ov004_022061c4();
    u32 unk_00;
    Unk_ov004_022062f4 unk_04[4];
};

// ---- 0x02206398 (member at 0x44 of 0x02206e38; 5 pairs of resource pointers)
struct Unk_ov004_02208a18_Rec {
    u32 unk_00;
    u16 unk_04;
};

struct Unk_ov004_02206398 {
    inline Unk_ov004_02206398() { func_ov004_02206418(); }
    ~Unk_ov004_02206398();
    s32 func_ov004_02206380();
    Unk_ov004_02208a18_Rec *func_ov004_02206398(u32 i);
    Unk_ov004_02208a18_Rec *func_ov004_022063a4(u32 i);
    Unk_ov004_02208a18_Rec *func_ov004_022063b0(u32 i);
    Unk_ov004_02208a18_Rec *func_ov004_022063bc(u32 i);
    Unk_ov004_02208a18_Rec *func_ov004_022063c8(u32 i);
    void func_ov004_022063d4(s32 v);
    void func_ov004_022063d8(void *v, u32 i);
    void func_ov004_022063e4(void *v, u32 i);
    void func_ov004_022063f0(void *v, u32 i);
    void func_ov004_022063fc(void *v, u32 i);
    void func_ov004_02206408(void *v, u32 i);
    void func_ov004_02206418();
    void *unk_00[2];
    void *unk_08[2];
    void *unk_10[2];
    void *unk_18[2];
    void *unk_20[2];
    s32 unk_28;
};

// ---- 0x02206434 (set of up to 4 neighbour objects)
struct Unk_ov004_02206434 {
    Unk_ov004_02206434();
    Unk_ov004_02206434(Unk_ov004_02206520 *l, s32 flag);
    BOOL func_ov004_02206434(Unk_ov004_02205c80_Obj *o);
    Unk_ov004_02205c80_Obj *func_ov004_02206474(u32 i);
    u32 func_ov004_02206480();
    void func_ov004_022064b4(Unk_ov004_02206520 *l, s32 flag);
    u32 unk_00;
    Unk_ov004_02205c80_Obj *unk_04[4];
};

// ---- 0x022487cc : Unk_020d8cf4 (member at 0x628)
class Unk_0202f048 {
public:
    s32 x, y;
    void func_0202f048(s32 a, s32 b);
    void func_0202efe4(Unk_0202f048 *a, Unk_0202f048 *b);
    s64 func_0202ef84(Unk_0202f048 *p);
    BOOL func_0202ef40();
};

class Unk_020d8ce4 {
public:
    virtual ~Unk_020d8ce4();
    Unk_0202f048 unk_04, unk_0c, unk_14;
    s32 unk_1c;
    BOOL func_0202ece8(Unk_0202f048 *out, Unk_0202f048 *a, Unk_0202f048 *b);
    s32 func_0202ebb0(Unk_0202f048 *p);
};

struct Unk_ov004_02206744_V3 {
    s32 x, y, z;
    Unk_ov004_02206744_V3() {}
};

struct Unk_ov004_02206570_Act {
    u8 pad_00[0x5c];
    Unk_ov004_02206744_V3 unk_5c;
    Unk_ov004_02206744_V3 unk_68;
    u8 pad_74[0x8e - 0x74];
    s16 unk_8e;
};

struct Unk_020d8cf4 {
    virtual void vfunc_00(Unk_020d8ce4 *a, Unk_ov004_02206570_Act *b, s32 c);
    u8 pad_04[0x98];
    Unk_020d8cf4();
    ~Unk_020d8cf4();
};

struct Unk_ov004_022487cc : Unk_020d8cf4 {
    void *unk_9c;
    Unk_ov004_022487cc();
    void vfunc_00(Unk_020d8ce4 *a, Unk_ov004_02206570_Act *b, s32 c);
    void func_ov004_02206570(Unk_ov004_02206570_Act *b);
    void func_ov004_022069a4();
    void func_ov004_022069ac(void *p);
};

// ---- 0x022069ec / 0x02206e38 (model loader, member at 0x6c8)
class Unk_020dbe24;

class Unk_020dbe04 {
public:
    u32 unk_04;
    u32 pad[10];
    u8 unk_30;
    u8 unk_31;
    u8 pad2[2];

    Unk_020dbe04();
    virtual ~Unk_020dbe04();
    u32 func_02055014(void *a, Unk_020dbe24 *b, void *c);
    void func_0205516c(void);
    void *func_0205500c(void);
};

struct Unk_ov004_02206be8_Blk {
    u32 pad[26];
};

struct Unk_ov004_022069ec {
    void *unk_00;
    void *unk_04;
    void *unk_08;
    void *unk_0c;
    Unk_020dbe04 unk_10;
    Unk_ov004_02206398 unk_44;
    u16 unk_70;
    u8 unk_72;

    void func_ov004_022069ec();
    void *func_ov004_02206a14();
    void *func_ov004_02206a2c();
    BOOL func_ov004_02206a44(void *obj, s32 a, s32 flag);
    BOOL func_ov004_02206b64(void *obj, s32 a, s32 flag);
    void func_ov004_02206bcc();
    Unk_ov004_02206398 *func_ov004_02206be4();
    BOOL func_ov004_02206be8(void *obj, s32 id);
    char *func_ov004_02206db4(s32 id);
    char *func_ov004_02206de0(s32 id);
    BOOL func_ov004_02206e0c();
};

struct Unk_ov004_02206e38 {
    Unk_ov004_02206e38();
    ~Unk_ov004_02206e38();
    u32 unk_00;
    u32 unk_04;
    u32 unk_08;
    u32 unk_0c;
    Unk_020dbe04 unk_10;
    Unk_ov004_02206398 unk_44;
    u16 unk_70;
    u8 unk_72;
};

// ---- 0x02248804 (array of 4 at 0x7c0)
class Unk_020dbe7c {
public:
    Unk_020dbe7c();
    virtual ~Unk_020dbe7c();
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
    u32 unk_18;
    u32 unk_1c;
};

class Unk_ov004_02248804 : public Unk_020dbe4c {
public:
    Unk_ov004_02248804();
    virtual ~Unk_ov004_02248804();
    u32 func_ov004_02206e74();
};

// ================================================================ Unk_ov004_0224882c
struct Unk_ov004_02208980_E {
    u8 pad_00[8];
    s32 unk_08;
    u8 pad_0c[12];
    s32 *unk_18;
    u8 pad_1c[4];
};

struct Unk_ov004_0224882c_Buf {
    s32 v[4];
};

struct Unk_ov004_02206ec8_Ctx {
    u8 pad_00[0xb8];
    u32 *unk_b8;
};

struct Unk_ov004_02207854_List {
    u32 count;
    s32 v[4][2];
};


// ================================================================ types used by the per-part views of the base object
struct Unk_ov004_0220a648_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

// ---- part 13
struct Unk_ov004_0220bc80_V3 {
    s32 x, y, z;
};

// ---- part 15
struct Unk_ov004_0220ce38_Slot {
    /* 0x00 */ u32 sub[2];
    /* 0x08 */ u32 unk_08;
    /* 0x0c */ u32 pad_0c[3];
    /* 0x18 */ u32 *unk_18;
    /* 0x1c */ u32 pad_1c;
};

// ---- part 24
struct Unk_ov004_02206e74 {
    u8 pad_00[0x10];
    u32 unk_10;
    u8 pad_14[0x20 - 0x14];
};

// ---- size checks of the per-part views of the base object (0x130..0x840)
struct Unk_ov004_View00_Chk {
    /* 0x130 */ u8 pad_130[0x14c - 0x130];
    /* 0x14c */ s32 unk_14c;
    /* 0x150 */ s32 unk_150;
    /* 0x154 */ s32 unk_154;
    /* 0x158 */ s32 unk_158;
    /* 0x15c */ u16 unk_15c;
    /* 0x15e */ u16 unk_15e;
    /* 0x160 */ s16 unk_160;
    /* 0x162 */ u8 pad_162[2];
    /* 0x164 */ s32 unk_164;
    /* 0x168 */ s16 unk_168;
    /* 0x16a */ u8 pad_16a[2];
    /* 0x16c */ s32 unk_16c[3];
    /* 0x178 */ u8 unk_178[0x10];   // Unk_ov004_02205e58
    /* 0x188 */ u8 unk_188[0x44];   // Unk_ov004_022061b4
    /* 0x1cc */ u8 unk_1cc[0x80];   // 4 x Unk_020b6a0c (0x20)
    /* 0x24c */ u8 unk_24c[0x34];
    /* 0x280 */ u32 unk_280;
    /* 0x284 */ u8 unk_284;
    /* 0x285 */ u8 pad_285[3];
    /* 0x288 */ u8 unk_288[0x2a8];  // Unk_020b6e10
    /* 0x530 */ s32 unk_530;
    /* 0x534 */ u8 unk_534[0x590 - 0x534]; // Unk_0205454c
    /* 0x590 */ u32 unk_590;
    /* 0x594 */ u8 pad_594[4];
    /* 0x598 */ Unk_ov004_Mtx unk_598;
    /* 0x5c8 */ u8 pad_5c8[0x5d0 - 0x5c8];
    /* 0x5d0 */ u8 unk_5d0[4];
    /* 0x5d4 */ u32 unk_5d4;
    /* 0x5d8 */ u32 unk_5d8;
    /* 0x5dc */ u8 pad_5dc[0x628 - 0x5dc];
    /* 0x628 */ u8 unk_628[0xa0];   // Unk_ov004_022487cc
    /* 0x6c8 */ u8 unk_6c8[0x74];   // Unk_ov004_02206e38
    /* 0x73c */ u8 unk_73c[2];      // Unk_ov004_02205c44
    /* 0x73e */ s8 unk_73e;         // Unk_ov004_02205d5c (3 bytes)
    /* 0x73f */ s8 unk_73f;
    /* 0x740 */ u8 unk_740;
    /* 0x741 */ u8 pad_741[3];
    /* 0x744 */ u8 unk_744[0x1c];   // Unk_ov004_02205bcc
    /* 0x760 */ u8 unk_760[8];      // Unk_ov004_02205994
    /* 0x768 */ s32 unk_768;
    /* 0x76c */ u16 unk_76c;
    /* 0x76e */ u8 pad_76e[2];
    /* 0x770 */ s32 unk_770;
    /* 0x774 */ s32 unk_774;
    /* 0x778 */ u8 unk_778;
    /* 0x779 */ u8 unk_779;
    /* 0x77a */ u8 unk_77a;
    /* 0x77b */ u8 pad_77b;
    /* 0x77c */ s32 unk_77c;
    /* 0x780 */ s32 unk_780;
    /* 0x784 */ s32 unk_784;
    /* 0x788 */ u8 unk_788;
    /* 0x789 */ u8 unk_789;
    /* 0x78a */ u8 pad_78a[2];
    /* 0x78c */ s32 unk_78c;
    /* 0x790 */ s32 unk_790;
    /* 0x794 */ u8 unk_794[0x20];   // Unk_ov004_02235984
    /* 0x7b4 */ s32 unk_7b4[3];
    /* 0x7c0 */ Unk_ov004_02208980_E unk_7c0[4];   // 4 x Unk_ov004_02248804
};
typedef char Unk_ov004_View00_Assert[sizeof(Unk_ov004_View00_Chk) == 0x840 - 0x130 ? 1 : -1];

struct Unk_ov004_View10_Chk {
    /* 0x130 */ u8 b10_pad_130[0x5d0 - 0x130];
    /* 0x5d0 */ u8 b10_pad_5d0[4];
    /* 0x5d4 */ Unk_ov004_0220a648_Bits b10_unk_5d4;
    /* 0x5d8 */ u8 b10_pad_5d8[0x6c8 - 0x5d8];
    /* 0x6c8 */ u32 b10_sub_6c8[(0x73c - 0x6c8) / 4];
    /* 0x73c */ u32 b10_sub_73c[(0x768 - 0x73c) / 4];
    /* 0x768 */ s32 b10_unk_768;
    /* 0x76c */ u8 b10_pad_76c[0x794 - 0x76c];
    /* 0x794 */ u32 b10_sub_794[(0x7b4 - 0x794) / 4];
    /* 0x7b4 */ u32 b10_sub_7b4[(0x820 - 0x7b4) / 4];
    /* 0x820 */ u32 b10_pad_820;
    /* 0x824 */ Unk_ov004_0220a648_Bits b10_unk_824;
    /* 0x828 */ u8 b10_pad_828[0x840 - 0x828];
};
typedef char Unk_ov004_View10_Assert[sizeof(Unk_ov004_View10_Chk) == 0x840 - 0x130 ? 1 : -1];

struct Unk_ov004_View11_Chk {
    /* 0x130 */ u8 b11_pad_10c[0x590 - 0x130];
    /* 0x590 */ s32 b11_unk_590;
    /* 0x594 */ u8 b11_pad_594[0x73c - 0x594];
    /* 0x73c */ u8 b11_unk_73c[0x24];
    /* 0x760 */ u8 b11_unk_760[8];
    /* 0x768 */ s32 b11_unk_768;
    /* 0x76c */ u8 b11_pad_76c[0x840 - 0x76c];
};
typedef char Unk_ov004_View11_Assert[sizeof(Unk_ov004_View11_Chk) == 0x840 - 0x130 ? 1 : -1];

struct Unk_ov004_View12_Chk {
    /* 0x130 */ u8 b12_f_0f0[0x73c - 0x130];
    /* 0x73c */ u8 b12_f_73c[0x778 - 0x73c];
    /* 0x778 */ u8 b12_unk_778;
    /* 0x779 */ u8 b12_f_779[0x794 - 0x779];
    /* 0x794 */ u8 b12_f_794[0x7b4 - 0x794];
    /* 0x7b4 */ u8 b12_f_7b4[0x840 - 0x7b4];
};
typedef char Unk_ov004_View12_Assert[sizeof(Unk_ov004_View12_Chk) == 0x840 - 0x130 ? 1 : -1];

struct Unk_ov004_View13_Chk {
    /* 0x130 */ u8 b13_f_12c[0x178 - 0x130];
    /* 0x178 */ u8 b13_f_178[0x188 - 0x178];
    /* 0x188 */ u8 b13_f_188[0x1cc - 0x188];
    /* 0x1cc */ u8 b13_f_1cc[0x24c - 0x1cc];
    /* 0x24c */ u8 b13_f_24c[0x280 - 0x24c];
    /* 0x280 */ u32 b13_unk_280;
    /* 0x284 */ u8 b13_f_284[0x288 - 0x284];
    /* 0x288 */ u8 b13_f_288[0x534 - 0x288];
    /* 0x534 */ u8 b13_f_534[0x590 - 0x534];
    /* 0x590 */ u32 b13_unk_590;
    /* 0x594 */ u8 b13_f_594[0x628 - 0x594];
    /* 0x628 */ u8 b13_f_628[0x6c8 - 0x628];
    /* 0x6c8 */ u8 b13_f_6c8[0x73c - 0x6c8];
    /* 0x73c */ u8 b13_f_73c[2];
    /* 0x73e */ u8 b13_f_73e[0x744 - 0x73e];
    /* 0x744 */ u8 b13_f_744[0x760 - 0x744];
    /* 0x760 */ u8 b13_f_760[0x768 - 0x760];
    /* 0x768 */ u32 b13_unk_768;
    /* 0x76c */ u8 b13_f_76c[0x77a - 0x76c];
    /* 0x77a */ u8 b13_unk_77a;
    /* 0x77b */ u8 b13_pad_77b;
    /* 0x77c */ u32 b13_unk_77c;
    /* 0x780 */ u8 b13_f_780[0x794 - 0x780];
    /* 0x794 */ u8 b13_f_794[0x7b4 - 0x794];
    /* 0x7b4 */ Unk_ov004_0220bc80_V3 b13_unk_7b4;
    /* 0x7c0 */ u8 b13_f_7c0[0x840 - 0x7c0];
};
typedef char Unk_ov004_View13_Assert[sizeof(Unk_ov004_View13_Chk) == 0x840 - 0x130 ? 1 : -1];

struct Unk_ov004_View14_Chk {
    /* 0x130 */ u8 b14_f_0f0[0x534 - 0x130];
    /* 0x534 */ u8 b14_f_534[0x590 - 0x534];
    /* 0x590 */ u32 b14_unk_590;
    /* 0x594 */ u8 b14_f_594[4];
    /* 0x598 */ u8 b14_f_598[0x30];
    /* 0x5c8 */ u8 b14_f_5c8[8];
    /* 0x5d0 */ u8 b14_f_5d0[0x628 - 0x5d0];
    /* 0x628 */ u8 b14_f_628[0x6c8 - 0x628];
    /* 0x6c8 */ u8 b14_f_6c8[0x73c - 0x6c8];
    /* 0x73c */ u8 b14_f_73c[0x760 - 0x73c];
    /* 0x760 */ u8 b14_f_760[0x77c - 0x760];
    /* 0x77c */ u32 b14_unk_77c;
    /* 0x780 */ u8 b14_f_780[0x840 - 0x780];
};
typedef char Unk_ov004_View14_Assert[sizeof(Unk_ov004_View14_Chk) == 0x840 - 0x130 ? 1 : -1];

struct Unk_ov004_View15_Chk {
    /* 0x130 */ u8 b15_pad_0f0[0x534 - 0x130];
    /* 0x534 */ u8 b15_f_534[0x590 - 0x534];
    /* 0x590 */ u32 b15_unk_590;
    /* 0x594 */ u8 b15_pad_594[0x6c8 - 0x594];
    /* 0x6c8 */ u8 b15_f_6c8[0x73c - 0x6c8];
    /* 0x73c */ u8 b15_f_73c[0x7c0 - 0x73c];
    /* 0x7c0 */ Unk_ov004_0220ce38_Slot b15_unk_7c0[4];
};
typedef char Unk_ov004_View15_Assert[sizeof(Unk_ov004_View15_Chk) == 0x840 - 0x130 ? 1 : -1];

struct Unk_ov004_View16_Chk {
    /* 0x130 */ u8 b16_pad_f0[0x534 - 0x130];
    /* 0x534 */ u8 b16_unk_534[0x6c8 - 0x534];
    /* 0x6c8 */ u8 b16_unk_6c8[0x73c - 0x6c8];
    /* 0x73c */ u8 b16_unk_73c[0x768 - 0x73c];
    /* 0x768 */ s32 b16_unk_768;
    /* 0x76c */ u8 b16_pad_76c[0x778 - 0x76c];
    /* 0x778 */ u8 b16_unk_778;
    /* 0x779 */ u8 b16_pad_779;
    /* 0x77a */ u8 b16_unk_77a;
    /* 0x77b */ u8 b16_pad_77b;
    /* 0x77c */ s32 b16_unk_77c;
    /* 0x780 */ u8 b16_pad_780[0x840 - 0x780];
};
typedef char Unk_ov004_View16_Assert[sizeof(Unk_ov004_View16_Chk) == 0x840 - 0x130 ? 1 : -1];

struct Unk_ov004_View17_Chk {
    /* 0x130 */ u8 b17_pad_130[0x590 - 0x130];
    /* 0x590 */ void *b17_unk_590;
    /* 0x594 */ u8 b17_pad_594[0x6c8 - 0x594];
    /* 0x6c8 */ u32 b17_sub_6c8[(0x73c - 0x6c8) / 4];
    /* 0x73c */ u8 b17_unk_73c[2];
    /* 0x73e */ u8 b17_pad_73e[0x794 - 0x73e];
    /* 0x794 */ u32 b17_sub_794[(0x7b4 - 0x794) / 4];
    /* 0x7b4 */ u32 b17_unk_7b4[3];
    /* 0x7c0 */ u8 b17_pad_7c0[0x840 - 0x7c0];
};
typedef char Unk_ov004_View17_Assert[sizeof(Unk_ov004_View17_Chk) == 0x840 - 0x130 ? 1 : -1];

struct Unk_ov004_View18_Chk {
    /* 0x130 */ u8 b18_pad_12c[0x534 - 0x130];
    /* 0x534 */ u8 b18_f_534[0x590 - 0x534];
    /* 0x590 */ u32 b18_unk_590;
    /* 0x594 */ u8 b18_pad_594[0x6c8 - 0x594];
    /* 0x6c8 */ u8 b18_f_6c8[0x73c - 0x6c8];
    /* 0x73c */ u8 b18_f_73c[0x768 - 0x73c];
    /* 0x768 */ u32 b18_unk_768;
    /* 0x76c */ u8 b18_f_76c[0x778 - 0x76c];
    /* 0x778 */ u8 b18_unk_778;
    /* 0x779 */ u8 b18_pad_779;
    /* 0x77a */ u8 b18_unk_77a;
    /* 0x77b */ u8 b18_pad_77b;
    /* 0x77c */ s32 b18_unk_77c;
    /* 0x780 */ u8 b18_f_780[0x840 - 0x780];
};
typedef char Unk_ov004_View18_Assert[sizeof(Unk_ov004_View18_Chk) == 0x840 - 0x130 ? 1 : -1];

struct Unk_ov004_View19_Chk {
    /* 0x130 */ u8 b19_pad_12c[0x534 - 0x130];
    /* 0x534 */ u8 b19_f_534[0x5d0 - 0x534];
    /* 0x5d0 */ u8 b19_f_5d0[0x6c8 - 0x5d0];
    /* 0x6c8 */ u8 b19_f_6c8[0x77c - 0x6c8];
    /* 0x77c */ s32 b19_unk_77c;
    /* 0x780 */ u8 b19_pad_780[0x794 - 0x780];
    /* 0x794 */ u8 b19_f_794[0x7b4 - 0x794];
    /* 0x7b4 */ u8 b19_f_7b4[0x840 - 0x7b4];
};
typedef char Unk_ov004_View19_Assert[sizeof(Unk_ov004_View19_Chk) == 0x840 - 0x130 ? 1 : -1];

struct Unk_ov004_View20_Chk {
    /* 0x130 */ u8 b20_pad_12c[0x534 - 0x130];
    /* 0x534 */ u8 b20_f_534[0x6c8 - 0x534];
    /* 0x6c8 */ u8 b20_f_6c8[0x73c - 0x6c8];
    /* 0x73c */ u8 b20_f_73c[0x744 - 0x73c];
    /* 0x744 */ u8 b20_f_744[0x760 - 0x744];
    /* 0x760 */ u8 b20_f_760[0x768 - 0x760];
    /* 0x768 */ u32 b20_unk_768;
    /* 0x76c */ u8 b20_pad_76c[0x77c - 0x76c];
    /* 0x77c */ u32 b20_unk_77c;
    /* 0x780 */ u32 b20_unk_780;
    /* 0x784 */ u8 b20_pad_784[0x840 - 0x784];
};
typedef char Unk_ov004_View20_Assert[sizeof(Unk_ov004_View20_Chk) == 0x840 - 0x130 ? 1 : -1];

struct Unk_ov004_View21_Chk {
    /* 0x130 */ u8 b21_f_12c[0x178 - 0x130];
    /* 0x178 */ u8 b21_f_178[0x188 - 0x178];
    /* 0x188 */ u8 b21_f_188[0x1cc - 0x188];
    /* 0x1cc */ u8 b21_f_1cc[0x24c - 0x1cc];
    /* 0x24c */ u8 b21_f_24c[0x280 - 0x24c];
    /* 0x280 */ u32 b21_unk_280;
    /* 0x284 */ u8 b21_f_284[0x288 - 0x284];
    /* 0x288 */ u8 b21_f_288[0x534 - 0x288];
    /* 0x534 */ u8 b21_f_534[0x590 - 0x534];
    /* 0x590 */ u32 b21_unk_590;
    /* 0x594 */ u8 b21_f_594[0x628 - 0x594];
    /* 0x628 */ u8 b21_f_628[0x6c8 - 0x628];
    /* 0x6c8 */ u8 b21_f_6c8[0x73c - 0x6c8];
    /* 0x73c */ u8 b21_f_73c[2];
    /* 0x73e */ u8 b21_f_73e[0x744 - 0x73e];
    /* 0x744 */ u8 b21_f_744[0x760 - 0x744];
    /* 0x760 */ u8 b21_f_760[0x768 - 0x760];
    /* 0x768 */ u32 b21_unk_768;
    /* 0x76c */ u8 b21_f_76c[0x77a - 0x76c];
    /* 0x77a */ u8 b21_unk_77a;
    /* 0x77b */ u8 b21_pad_77b;
    /* 0x77c */ u32 b21_unk_77c;
    /* 0x780 */ u8 b21_f_780[0x794 - 0x780];
    /* 0x794 */ u8 b21_f_794[0x7b4 - 0x794];
    /* 0x7b4 */ Unk_ov004_0220bc80_V3 b21_unk_7b4;
    /* 0x7c0 */ u8 b21_f_7c0[0x840 - 0x7c0];
};
typedef char Unk_ov004_View21_Assert[sizeof(Unk_ov004_View21_Chk) == 0x840 - 0x130 ? 1 : -1];

struct Unk_ov004_View22_Chk {
    /* 0x130 */ u8 b22_f_0f0[0x590 - 0x130];
    /* 0x590 */ u32 b22_unk_590;
    /* 0x594 */ u8 b22_f_594[0x73c - 0x594];
    /* 0x73c */ u8 b22_f_73c[0x760 - 0x73c];
    /* 0x760 */ u8 b22_f_760[0x77c - 0x760];
    /* 0x77c */ u32 b22_unk_77c;
    /* 0x780 */ u32 b22_unk_780;
    /* 0x784 */ u8 b22_f_784[0x840 - 0x784];
};
typedef char Unk_ov004_View22_Assert[sizeof(Unk_ov004_View22_Chk) == 0x840 - 0x130 ? 1 : -1];

struct Unk_ov004_View23_Chk {
    /* 0x130 */ u8 b23_pad_12c[0x534 - 0x130];
    /* 0x534 */ u8 b23_f_534[0x6c8 - 0x534];
    /* 0x6c8 */ u8 b23_f_6c8[0x73c - 0x6c8];
    /* 0x73c */ u8 b23_f_73c[0x744 - 0x73c];
    /* 0x744 */ u8 b23_f_744[0x760 - 0x744];
    /* 0x760 */ u8 b23_f_760[0x768 - 0x760];
    /* 0x768 */ u32 b23_unk_768;
    /* 0x76c */ u8 b23_pad_76c[0x77c - 0x76c];
    /* 0x77c */ u32 b23_unk_77c;
    /* 0x780 */ u32 b23_unk_780;
    /* 0x784 */ u8 b23_pad_784[0x840 - 0x784];
};
typedef char Unk_ov004_View23_Assert[sizeof(Unk_ov004_View23_Chk) == 0x840 - 0x130 ? 1 : -1];

struct Unk_ov004_View24_Chk {
    /* 0x130 */ u8 b24_pad_130[0x590 - 0x130];
    /* 0x590 */ void *b24_unk_590;
    /* 0x594 */ u8 b24_pad_594[0x5d0 - 0x594];
    /* 0x5d0 */ u8 b24_unk_5d0[0x10];
    /* 0x5e0 */ u32 b24_unk_5e0;
    /* 0x5e4 */ u8 b24_pad_5e4[0x73c - 0x5e4];
    /* 0x73c */ u8 b24_unk_73c[2];
    /* 0x73e */ u8 b24_pad_73e[0x7c0 - 0x73e];
    /* 0x7c0 */ Unk_ov004_02206e74 b24_unk_7c0[4];
};
typedef char Unk_ov004_View24_Assert[sizeof(Unk_ov004_View24_Chk) == 0x840 - 0x130 ? 1 : -1];

struct Unk_ov004_View25_Chk {
    /* 0x130 */ u8 b25_pad_12c[0x534 - 0x130];
    /* 0x534 */ u8 b25_f_534[0x590 - 0x534];
    /* 0x590 */ u32 b25_unk_590;
    /* 0x594 */ u8 b25_pad_594[0x5d0 - 0x594];
    /* 0x5d0 */ u8 b25_f_5d0[0x6c8 - 0x5d0];
    /* 0x6c8 */ u8 b25_f_6c8[0x73c - 0x6c8];
    /* 0x73c */ u8 b25_f_73c[0x744 - 0x73c];
    /* 0x744 */ u8 b25_f_744[0x768 - 0x744];
    /* 0x768 */ u32 b25_unk_768;
    /* 0x76c */ u8 b25_pad_76c[0x77c - 0x76c];
    /* 0x77c */ u32 b25_unk_77c;
    /* 0x780 */ u8 b25_pad_780[0x794 - 0x780];
    /* 0x794 */ u8 b25_f_794[0x7b4 - 0x794];
    /* 0x7b4 */ u8 b25_f_7b4[0x840 - 0x7b4];
};
typedef char Unk_ov004_View25_Assert[sizeof(Unk_ov004_View25_Chk) == 0x840 - 0x130 ? 1 : -1];

class Unk_ov004_0224882c;

class Unk_ov004_0224882c : public Unk_020d9670, public Unk_020ddcf0 {
public:
    Unk_ov004_0224882c();
    virtual ~Unk_ov004_0224882c();
    static void *operator new(unsigned long size);
    static void operator delete(void *p);

    virtual BOOL vfunc_00();
    virtual void vfunc_08(s32 a);
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_14(s32 a);
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_28();
    virtual Unk_02000c8c *vfunc_50();
    virtual BOOL vfunc_60();
    virtual void vfunc_64(s32 a, Unk_ov004_02206ec8_Ctx *b);
    virtual BOOL vfunc_68();
    virtual void vfunc_6c(s32 a, void *b);
    virtual BOOL vfunc_70(u32 a, u8 b);
    virtual u8 vfunc_74(u32 a);
    virtual u8 vfunc_78();
    virtual BOOL vfunc_7c();
    virtual BOOL vfunc_80();
    virtual BOOL vfunc_84();
    virtual BOOL vfunc_88();
    virtual BOOL vfunc_8c();
    virtual void vfunc_90();
    virtual void vfunc_94();
    virtual void vfunc_98();
    virtual void vfunc_9c();
    virtual BOOL vfunc_a0();

    void func_ov004_02204f24();
    BOOL func_ov004_02204f8c();
    void func_ov004_02204f90();
    BOOL func_ov004_02205004();
    void func_ov004_0220500c();
    BOOL func_ov004_0220507c();
    void func_ov004_022050b8();
    BOOL func_ov004_022050c0();
    void func_ov004_02205138();
    BOOL func_ov004_022051a4();

    BOOL func_ov004_0220521c();
    BOOL func_ov004_022052f4();
    BOOL func_ov004_022053b8();
    BOOL func_ov004_022053bc();
    void func_ov004_022053c0();
    BOOL func_ov004_0220552c();
    void func_ov004_022055ec();
    BOOL func_ov004_022056bc(s32 idx);
    BOOL func_ov004_0220579c(s32 s);
    BOOL func_ov004_022057b0();
    BOOL func_ov004_022057bc();
    BOOL func_ov004_022057c8();
    BOOL func_ov004_022057f0();
    BOOL func_ov004_02205808();
    BOOL func_ov004_02205814();
    BOOL func_ov004_02205820(s16 a);
    BOOL func_ov004_022058c0(s16 a);
    BOOL func_ov004_02205954(s32 a);

    BOOL func_ov004_02206f8c();
    void func_ov004_02206fa0(s32 a);
    void func_ov004_02206fe0(Unk_0203e4f0_Vec *v);
    void func_ov004_02207004();
    void func_ov004_02207038(s32 a);
    BOOL func_ov004_0220711c(s32 *ox, s32 *oy, s32 a, s32 b);
    u16 func_ov004_022071cc(s32 a, s32 b);
    BOOL func_ov004_022072b4(s32 a, s32 b);
    BOOL func_ov004_02207598(s32 a);
    BOOL func_ov004_022075a4(s32 a);
    BOOL func_ov004_022075b0();
    void func_ov004_022076b0();
    void func_ov004_02207704();

    void func_ov004_02208ba8(s32 a, s32 b, s32 c, u32 d);
    void func_ov004_02208de0(s32 a, s32 b, s32 c, s32 d);
    u16 func_ov004_02208ff0(s32 a);
    BOOL func_ov004_022090c0();
    BOOL func_ov004_02209108();
    BOOL func_ov004_02209150();
    BOOL func_ov004_02209198();
    u32 func_ov004_022091e0();
    BOOL func_ov004_02209bb4();
    BOOL func_ov004_02209c10();
    BOOL func_ov004_02209c44();
    BOOL func_ov004_02209c58();
    BOOL func_ov004_02209c88();
    BOOL func_ov004_02209ccc();
    BOOL func_ov004_0220e744(BOOL a);   // defined in TU03

    /* 0x12e */ u16 unk_12e;
    union {
        struct {
            /* 0x130 */ u8 pad_130[0x14c - 0x130];
            /* 0x14c */ s32 unk_14c;
            /* 0x150 */ s32 unk_150;
            /* 0x154 */ s32 unk_154;
            /* 0x158 */ s32 unk_158;
            /* 0x15c */ u16 unk_15c;
            /* 0x15e */ u16 unk_15e;
            /* 0x160 */ s16 unk_160;
            /* 0x162 */ u8 pad_162[2];
            /* 0x164 */ s32 unk_164;
            /* 0x168 */ s16 unk_168;
            /* 0x16a */ u8 pad_16a[2];
            /* 0x16c */ s32 unk_16c[3];
            /* 0x178 */ u8 unk_178[0x10];   // Unk_ov004_02205e58
            /* 0x188 */ u8 unk_188[0x44];   // Unk_ov004_022061b4
            /* 0x1cc */ u8 unk_1cc[0x80];   // 4 x Unk_020b6a0c (0x20)
            /* 0x24c */ u8 unk_24c[0x34];
            /* 0x280 */ u32 unk_280;
            /* 0x284 */ u8 unk_284;
            /* 0x285 */ u8 pad_285[3];
            /* 0x288 */ u8 unk_288[0x2a8];  // Unk_020b6e10
            /* 0x530 */ s32 unk_530;
            /* 0x534 */ u8 unk_534[0x590 - 0x534]; // Unk_0205454c
            /* 0x590 */ u32 unk_590;
            /* 0x594 */ u8 pad_594[4];
            /* 0x598 */ Unk_ov004_Mtx unk_598;
            /* 0x5c8 */ u8 pad_5c8[0x5d0 - 0x5c8];
            /* 0x5d0 */ u8 unk_5d0[4];
            /* 0x5d4 */ u32 unk_5d4;
            /* 0x5d8 */ u32 unk_5d8;
            /* 0x5dc */ u8 pad_5dc[0x628 - 0x5dc];
            /* 0x628 */ u8 unk_628[0xa0];   // Unk_ov004_022487cc
            /* 0x6c8 */ u8 unk_6c8[0x74];   // Unk_ov004_02206e38
            /* 0x73c */ u8 unk_73c[2];      // Unk_ov004_02205c44
            /* 0x73e */ s8 unk_73e;         // Unk_ov004_02205d5c (3 bytes)
            /* 0x73f */ s8 unk_73f;
            /* 0x740 */ u8 unk_740;
            /* 0x741 */ u8 pad_741[3];
            /* 0x744 */ u8 unk_744[0x1c];   // Unk_ov004_02205bcc
            /* 0x760 */ u8 unk_760[8];      // Unk_ov004_02205994
            /* 0x768 */ s32 unk_768;
            /* 0x76c */ u16 unk_76c;
            /* 0x76e */ u8 pad_76e[2];
            /* 0x770 */ s32 unk_770;
            /* 0x774 */ s32 unk_774;
            /* 0x778 */ u8 unk_778;
            /* 0x779 */ u8 unk_779;
            /* 0x77a */ u8 unk_77a;
            /* 0x77b */ u8 pad_77b;
            /* 0x77c */ s32 unk_77c;
            /* 0x780 */ s32 unk_780;
            /* 0x784 */ s32 unk_784;
            /* 0x788 */ u8 unk_788;
            /* 0x789 */ u8 unk_789;
            /* 0x78a */ u8 pad_78a[2];
            /* 0x78c */ s32 unk_78c;
            /* 0x790 */ s32 unk_790;
            /* 0x794 */ u8 unk_794[0x20];   // Unk_ov004_02235984
            /* 0x7b4 */ s32 unk_7b4[3];
            /* 0x7c0 */ Unk_ov004_02208980_E unk_7c0[4];   // 4 x Unk_ov004_02248804
        };
        struct {
            /* 0x130 */ u8 b10_pad_130[0x5d0 - 0x130];
            /* 0x5d0 */ u8 b10_pad_5d0[4];
            /* 0x5d4 */ Unk_ov004_0220a648_Bits b10_unk_5d4;
            /* 0x5d8 */ u8 b10_pad_5d8[0x6c8 - 0x5d8];
            /* 0x6c8 */ u32 b10_sub_6c8[(0x73c - 0x6c8) / 4];
            /* 0x73c */ u32 b10_sub_73c[(0x768 - 0x73c) / 4];
            /* 0x768 */ s32 b10_unk_768;
            /* 0x76c */ u8 b10_pad_76c[0x794 - 0x76c];
            /* 0x794 */ u32 b10_sub_794[(0x7b4 - 0x794) / 4];
            /* 0x7b4 */ u32 b10_sub_7b4[(0x820 - 0x7b4) / 4];
            /* 0x820 */ u32 b10_pad_820;
            /* 0x824 */ Unk_ov004_0220a648_Bits b10_unk_824;
            /* 0x828 */ u8 b10_pad_828[0x840 - 0x828];
        };
        struct {
            /* 0x130 */ u8 b11_pad_10c[0x590 - 0x130];
            /* 0x590 */ s32 b11_unk_590;
            /* 0x594 */ u8 b11_pad_594[0x73c - 0x594];
            /* 0x73c */ u8 b11_unk_73c[0x24];
            /* 0x760 */ u8 b11_unk_760[8];
            /* 0x768 */ s32 b11_unk_768;
            /* 0x76c */ u8 b11_pad_76c[0x840 - 0x76c];
        };
        struct {
            /* 0x130 */ u8 b12_f_0f0[0x73c - 0x130];
            /* 0x73c */ u8 b12_f_73c[0x778 - 0x73c];
            /* 0x778 */ u8 b12_unk_778;
            /* 0x779 */ u8 b12_f_779[0x794 - 0x779];
            /* 0x794 */ u8 b12_f_794[0x7b4 - 0x794];
            /* 0x7b4 */ u8 b12_f_7b4[0x840 - 0x7b4];
        };
        struct {
            /* 0x130 */ u8 b13_f_12c[0x178 - 0x130];
            /* 0x178 */ u8 b13_f_178[0x188 - 0x178];
            /* 0x188 */ u8 b13_f_188[0x1cc - 0x188];
            /* 0x1cc */ u8 b13_f_1cc[0x24c - 0x1cc];
            /* 0x24c */ u8 b13_f_24c[0x280 - 0x24c];
            /* 0x280 */ u32 b13_unk_280;
            /* 0x284 */ u8 b13_f_284[0x288 - 0x284];
            /* 0x288 */ u8 b13_f_288[0x534 - 0x288];
            /* 0x534 */ u8 b13_f_534[0x590 - 0x534];
            /* 0x590 */ u32 b13_unk_590;
            /* 0x594 */ u8 b13_f_594[0x628 - 0x594];
            /* 0x628 */ u8 b13_f_628[0x6c8 - 0x628];
            /* 0x6c8 */ u8 b13_f_6c8[0x73c - 0x6c8];
            /* 0x73c */ u8 b13_f_73c[2];
            /* 0x73e */ u8 b13_f_73e[0x744 - 0x73e];
            /* 0x744 */ u8 b13_f_744[0x760 - 0x744];
            /* 0x760 */ u8 b13_f_760[0x768 - 0x760];
            /* 0x768 */ u32 b13_unk_768;
            /* 0x76c */ u8 b13_f_76c[0x77a - 0x76c];
            /* 0x77a */ u8 b13_unk_77a;
            /* 0x77b */ u8 b13_pad_77b;
            /* 0x77c */ u32 b13_unk_77c;
            /* 0x780 */ u8 b13_f_780[0x794 - 0x780];
            /* 0x794 */ u8 b13_f_794[0x7b4 - 0x794];
            /* 0x7b4 */ Unk_ov004_0220bc80_V3 b13_unk_7b4;
            /* 0x7c0 */ u8 b13_f_7c0[0x840 - 0x7c0];
        };
        struct {
            /* 0x130 */ u8 b14_f_0f0[0x534 - 0x130];
            /* 0x534 */ u8 b14_f_534[0x590 - 0x534];
            /* 0x590 */ u32 b14_unk_590;
            /* 0x594 */ u8 b14_f_594[4];
            /* 0x598 */ u8 b14_f_598[0x30];
            /* 0x5c8 */ u8 b14_f_5c8[8];
            /* 0x5d0 */ u8 b14_f_5d0[0x628 - 0x5d0];
            /* 0x628 */ u8 b14_f_628[0x6c8 - 0x628];
            /* 0x6c8 */ u8 b14_f_6c8[0x73c - 0x6c8];
            /* 0x73c */ u8 b14_f_73c[0x760 - 0x73c];
            /* 0x760 */ u8 b14_f_760[0x77c - 0x760];
            /* 0x77c */ u32 b14_unk_77c;
            /* 0x780 */ u8 b14_f_780[0x840 - 0x780];
        };
        struct {
            /* 0x130 */ u8 b15_pad_0f0[0x534 - 0x130];
            /* 0x534 */ u8 b15_f_534[0x590 - 0x534];
            /* 0x590 */ u32 b15_unk_590;
            /* 0x594 */ u8 b15_pad_594[0x6c8 - 0x594];
            /* 0x6c8 */ u8 b15_f_6c8[0x73c - 0x6c8];
            /* 0x73c */ u8 b15_f_73c[0x7c0 - 0x73c];
            /* 0x7c0 */ Unk_ov004_0220ce38_Slot b15_unk_7c0[4];
        };
        struct {
            /* 0x130 */ u8 b16_pad_f0[0x534 - 0x130];
            /* 0x534 */ u8 b16_unk_534[0x6c8 - 0x534];
            /* 0x6c8 */ u8 b16_unk_6c8[0x73c - 0x6c8];
            /* 0x73c */ u8 b16_unk_73c[0x768 - 0x73c];
            /* 0x768 */ s32 b16_unk_768;
            /* 0x76c */ u8 b16_pad_76c[0x778 - 0x76c];
            /* 0x778 */ u8 b16_unk_778;
            /* 0x779 */ u8 b16_pad_779;
            /* 0x77a */ u8 b16_unk_77a;
            /* 0x77b */ u8 b16_pad_77b;
            /* 0x77c */ s32 b16_unk_77c;
            /* 0x780 */ u8 b16_pad_780[0x840 - 0x780];
        };
        struct {
            /* 0x130 */ u8 b17_pad_130[0x590 - 0x130];
            /* 0x590 */ void *b17_unk_590;
            /* 0x594 */ u8 b17_pad_594[0x6c8 - 0x594];
            /* 0x6c8 */ u32 b17_sub_6c8[(0x73c - 0x6c8) / 4];
            /* 0x73c */ u8 b17_unk_73c[2];
            /* 0x73e */ u8 b17_pad_73e[0x794 - 0x73e];
            /* 0x794 */ u32 b17_sub_794[(0x7b4 - 0x794) / 4];
            /* 0x7b4 */ u32 b17_unk_7b4[3];
            /* 0x7c0 */ u8 b17_pad_7c0[0x840 - 0x7c0];
        };
        struct {
            /* 0x130 */ u8 b18_pad_12c[0x534 - 0x130];
            /* 0x534 */ u8 b18_f_534[0x590 - 0x534];
            /* 0x590 */ u32 b18_unk_590;
            /* 0x594 */ u8 b18_pad_594[0x6c8 - 0x594];
            /* 0x6c8 */ u8 b18_f_6c8[0x73c - 0x6c8];
            /* 0x73c */ u8 b18_f_73c[0x768 - 0x73c];
            /* 0x768 */ u32 b18_unk_768;
            /* 0x76c */ u8 b18_f_76c[0x778 - 0x76c];
            /* 0x778 */ u8 b18_unk_778;
            /* 0x779 */ u8 b18_pad_779;
            /* 0x77a */ u8 b18_unk_77a;
            /* 0x77b */ u8 b18_pad_77b;
            /* 0x77c */ s32 b18_unk_77c;
            /* 0x780 */ u8 b18_f_780[0x840 - 0x780];
        };
        struct {
            /* 0x130 */ u8 b19_pad_12c[0x534 - 0x130];
            /* 0x534 */ u8 b19_f_534[0x5d0 - 0x534];
            /* 0x5d0 */ u8 b19_f_5d0[0x6c8 - 0x5d0];
            /* 0x6c8 */ u8 b19_f_6c8[0x77c - 0x6c8];
            /* 0x77c */ s32 b19_unk_77c;
            /* 0x780 */ u8 b19_pad_780[0x794 - 0x780];
            /* 0x794 */ u8 b19_f_794[0x7b4 - 0x794];
            /* 0x7b4 */ u8 b19_f_7b4[0x840 - 0x7b4];
        };
        struct {
            /* 0x130 */ u8 b20_pad_12c[0x534 - 0x130];
            /* 0x534 */ u8 b20_f_534[0x6c8 - 0x534];
            /* 0x6c8 */ u8 b20_f_6c8[0x73c - 0x6c8];
            /* 0x73c */ u8 b20_f_73c[0x744 - 0x73c];
            /* 0x744 */ u8 b20_f_744[0x760 - 0x744];
            /* 0x760 */ u8 b20_f_760[0x768 - 0x760];
            /* 0x768 */ u32 b20_unk_768;
            /* 0x76c */ u8 b20_pad_76c[0x77c - 0x76c];
            /* 0x77c */ u32 b20_unk_77c;
            /* 0x780 */ u32 b20_unk_780;
            /* 0x784 */ u8 b20_pad_784[0x840 - 0x784];
        };
        struct {
            /* 0x130 */ u8 b21_f_12c[0x178 - 0x130];
            /* 0x178 */ u8 b21_f_178[0x188 - 0x178];
            /* 0x188 */ u8 b21_f_188[0x1cc - 0x188];
            /* 0x1cc */ u8 b21_f_1cc[0x24c - 0x1cc];
            /* 0x24c */ u8 b21_f_24c[0x280 - 0x24c];
            /* 0x280 */ u32 b21_unk_280;
            /* 0x284 */ u8 b21_f_284[0x288 - 0x284];
            /* 0x288 */ u8 b21_f_288[0x534 - 0x288];
            /* 0x534 */ u8 b21_f_534[0x590 - 0x534];
            /* 0x590 */ u32 b21_unk_590;
            /* 0x594 */ u8 b21_f_594[0x628 - 0x594];
            /* 0x628 */ u8 b21_f_628[0x6c8 - 0x628];
            /* 0x6c8 */ u8 b21_f_6c8[0x73c - 0x6c8];
            /* 0x73c */ u8 b21_f_73c[2];
            /* 0x73e */ u8 b21_f_73e[0x744 - 0x73e];
            /* 0x744 */ u8 b21_f_744[0x760 - 0x744];
            /* 0x760 */ u8 b21_f_760[0x768 - 0x760];
            /* 0x768 */ u32 b21_unk_768;
            /* 0x76c */ u8 b21_f_76c[0x77a - 0x76c];
            /* 0x77a */ u8 b21_unk_77a;
            /* 0x77b */ u8 b21_pad_77b;
            /* 0x77c */ u32 b21_unk_77c;
            /* 0x780 */ u8 b21_f_780[0x794 - 0x780];
            /* 0x794 */ u8 b21_f_794[0x7b4 - 0x794];
            /* 0x7b4 */ Unk_ov004_0220bc80_V3 b21_unk_7b4;
            /* 0x7c0 */ u8 b21_f_7c0[0x840 - 0x7c0];
        };
        struct {
            /* 0x130 */ u8 b22_f_0f0[0x590 - 0x130];
            /* 0x590 */ u32 b22_unk_590;
            /* 0x594 */ u8 b22_f_594[0x73c - 0x594];
            /* 0x73c */ u8 b22_f_73c[0x760 - 0x73c];
            /* 0x760 */ u8 b22_f_760[0x77c - 0x760];
            /* 0x77c */ u32 b22_unk_77c;
            /* 0x780 */ u32 b22_unk_780;
            /* 0x784 */ u8 b22_f_784[0x840 - 0x784];
        };
        struct {
            /* 0x130 */ u8 b23_pad_12c[0x534 - 0x130];
            /* 0x534 */ u8 b23_f_534[0x6c8 - 0x534];
            /* 0x6c8 */ u8 b23_f_6c8[0x73c - 0x6c8];
            /* 0x73c */ u8 b23_f_73c[0x744 - 0x73c];
            /* 0x744 */ u8 b23_f_744[0x760 - 0x744];
            /* 0x760 */ u8 b23_f_760[0x768 - 0x760];
            /* 0x768 */ u32 b23_unk_768;
            /* 0x76c */ u8 b23_pad_76c[0x77c - 0x76c];
            /* 0x77c */ u32 b23_unk_77c;
            /* 0x780 */ u32 b23_unk_780;
            /* 0x784 */ u8 b23_pad_784[0x840 - 0x784];
        };
        struct {
            /* 0x130 */ u8 b24_pad_130[0x590 - 0x130];
            /* 0x590 */ void *b24_unk_590;
            /* 0x594 */ u8 b24_pad_594[0x5d0 - 0x594];
            /* 0x5d0 */ u8 b24_unk_5d0[0x10];
            /* 0x5e0 */ u32 b24_unk_5e0;
            /* 0x5e4 */ u8 b24_pad_5e4[0x73c - 0x5e4];
            /* 0x73c */ u8 b24_unk_73c[2];
            /* 0x73e */ u8 b24_pad_73e[0x7c0 - 0x73e];
            /* 0x7c0 */ Unk_ov004_02206e74 b24_unk_7c0[4];
        };
        struct {
            /* 0x130 */ u8 b25_pad_12c[0x534 - 0x130];
            /* 0x534 */ u8 b25_f_534[0x590 - 0x534];
            /* 0x590 */ u32 b25_unk_590;
            /* 0x594 */ u8 b25_pad_594[0x5d0 - 0x594];
            /* 0x5d0 */ u8 b25_f_5d0[0x6c8 - 0x5d0];
            /* 0x6c8 */ u8 b25_f_6c8[0x73c - 0x6c8];
            /* 0x73c */ u8 b25_f_73c[0x744 - 0x73c];
            /* 0x744 */ u8 b25_f_744[0x768 - 0x744];
            /* 0x768 */ u32 b25_unk_768;
            /* 0x76c */ u8 b25_pad_76c[0x77c - 0x76c];
            /* 0x77c */ u32 b25_unk_77c;
            /* 0x780 */ u8 b25_pad_780[0x794 - 0x780];
            /* 0x794 */ u8 b25_f_794[0x7b4 - 0x794];
            /* 0x7b4 */ u8 b25_f_7b4[0x840 - 0x7b4];
        };
    };
};


// ---- part 10: from unk_02209e64.cpp
// The base declares vfunc_14() with no parameters, but this overlay class takes one (r1), so widen it locally.

// Secondary base of the 0x0224882c family (at +0xec). Its vtable 0x020ddcf0 is not overridden by the derived class.

// Target of the callbacks at 0x02209e64..0x02209ebc; only its vtable layout is known.

// 0x0224b0b8: size 0x844
class Unk_ov004_0224b0b8 : public Unk_ov004_0224882c {
public:
    Unk_ov004_0224b0b8();
    virtual BOOL vfunc_0c();
    virtual ~Unk_ov004_0224b0b8();
    virtual BOOL vfunc_7c();
    virtual BOOL vfunc_80();

    /* 0x840 */ u32 unk_840;
};

// 0x0224b310: size 0x858
class Unk_ov004_0224b310 : public Unk_ov004_0224882c {
public:
    Unk_ov004_0224b310();
    virtual BOOL vfunc_0c();
    virtual ~Unk_ov004_0224b310();
    virtual void vfunc_4c(u32 a, u8 b);
    virtual BOOL vfunc_70(u32 a, u8 b);
    virtual u8 vfunc_74(u32 a);
    virtual BOOL vfunc_7c();
    virtual BOOL vfunc_80();

    void func_ov004_0220a040();
    BOOL func_ov004_0220a068();
    void func_ov004_0220a088();
    BOOL func_ov004_0220a0bc();
    void func_ov004_0220a0c0();
    BOOL func_ov004_0220a0e4();
    void func_ov004_0220a128();
    BOOL func_ov004_0220a154();
    void func_ov004_0220a174();
    BOOL func_ov004_0220a1e4();
    void func_ov004_0220a1e8();
    BOOL func_ov004_0220a280(s32 idx);
    void func_ov004_0220a328();
    BOOL func_ov004_0220a33c();
    void func_ov004_0220a360();
    BOOL func_ov004_0220a364();
    void func_ov004_0220a380();
    BOOL func_ov004_0220a394();
    void func_ov004_0220a3b8();
    BOOL func_ov004_0220a3bc();
    void func_ov004_0220a3d8();

    /* 0x840 */ s32 unk_840;
    /* 0x844 */ s32 unk_844;
    /* 0x848 */ s32 unk_848;
    /* 0x84c */ u16 unk_84c;
    /* 0x84e */ u16 unk_84e;
    /* 0x850 */ u8 unk_850;
    /* 0x851 */ u8 pad_851[3];
    /* 0x854 */ s32 unk_854;
};

// 0x0224b43c: size >= 0x84a (only the methods in this range are here)
class Unk_ov004_0224b43c : public Unk_ov004_0224882c {
public:
    Unk_ov004_0224b43c();
    virtual ~Unk_ov004_0224b43c();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_7c();
    virtual BOOL vfunc_80();

    /* 0x840 */ u16 unk_840;
    /* 0x842 */ u16 unk_842;
    /* 0x844 */ u8 unk_844;
    /* 0x845 */ u8 unk_845;
    /* 0x846 */ u8 unk_846;
    /* 0x847 */ u8 pad_847;
    /* 0x848 */ u16 unk_848;
};

namespace p10 {
extern "C" {
extern u16 data_ov004_022486f8;
extern const u8 data_ov004_0224004c[];
extern const char data_ov004_0224bb44[];

void *func_ov004_022358d8(void);
void _ZN18Unk_ov004_022358c819func_ov004_02235854EPv(void *heap, void *p);
void *_ZN18Unk_ov004_022358c819func_ov004_02235860Ev(void *heap, u32 size);
void *func_0212899c(void *p, s32 v, u32 n);

void _ZN18Unk_ov004_0224882cC1Ev(void *);
void _ZN18Unk_ov004_0224882cC2Ev(void *);

void _ZN18Unk_ov004_02205c4419func_ov004_02205c44Eji(void *, s32, s32);
BOOL _ZN18Unk_ov004_02205c4419func_ov004_02205c6cEv(void *);
u8 _ZN18Unk_ov004_02205c4419func_ov004_02205c7cEv(void *);
void _ZN18Unk_ov004_02235cc019func_ov004_0223591cEjj(void *, u32, void *);
void *_ZN18Unk_ov004_022069ec19func_ov004_02206be4Ev(void *);
void *_ZN18Unk_ov004_0220639819func_ov004_022063b0Ej(void *, u32);
u32 func_ov004_02208980(void *);
u32 func_ov004_022087a4(void *);
u32 func_ov004_02233128(u32);
void *func_ov004_022354d8(void);
void *_ZN18Unk_ov004_022351bc19func_ov004_02235464EPv(void *, void *);
s32 *_ZN18Unk_ov004_022355ac19func_ov004_022354ecEv(void);
u32 _ZN18Unk_ov004_022355ac19func_ov004_022354e0Ev(void *);

u32 func_020621d4(void);
void func_0203d67c(void *);
void func_0203d704(void *, s32);
BOOL _ZN12Unk_020dbe7c13func_020565e8Ei(void *, u32);
}
}

// ---------------------------------------------------------------- callbacks

// ---------------------------------------------------------------- 0x0224882c allocator

// ---------------------------------------------------------------- Unk_ov004_0224b0b8
BOOL Unk_ov004_0224b0b8::vfunc_0c() { return TRUE; }
BOOL Unk_ov004_0224b0b8::vfunc_80() { return TRUE; }

BOOL Unk_ov004_0224b0b8::vfunc_7c() {
    unk_840 = p10::func_020621d4();
    func_ov004_02208de0(0, 0, 0, (u16)unk_840);
    p10::func_ov004_02208980(this);
    return TRUE;
}

Unk_ov004_0224b0b8::~Unk_ov004_0224b0b8() {}

Unk_ov004_0224b0b8::Unk_ov004_0224b0b8() {}

extern "C" void func_ov004_0220a024() {
    new Unk_ov004_0224b0b8;
}

// ---------------------------------------------------------------- Unk_ov004_0224b310
void Unk_ov004_0224b310::func_ov004_0220a040() {
    if (unk_84e == 0) {
        p10::func_0203d67c(this);
    }
    if (unk_84e != 0) {
        unk_84e--;
    }
}

BOOL Unk_ov004_0224b310::func_ov004_0220a068() {
    vfunc_70(3, 0xff);
    unk_84e = 1;
    return TRUE;
}

void Unk_ov004_0224b310::func_ov004_0220a088() {
    if (unk_3c != 0) {
        if (unk_3c->unk_04 == 0) {
            func_0203e47c((s32)(Unk_020ddcf0 *)this);
            func_ov004_0220a280(4);
        }
    }
}

BOOL Unk_ov004_0224b310::func_ov004_0220a0bc() { return TRUE; }

void Unk_ov004_0224b310::func_ov004_0220a0c0() {
    if (unk_3c != 0) {
        if (unk_3c->unk_04 != 0) {
            func_ov004_0220a280(3);
        }
    }
}

struct Unk_ov004_0220a0e4_Pad {
    s32 v[2];
    Unk_ov004_0220a0e4_Pad() {}
    ~Unk_ov004_0220a0e4_Pad() {}
};

BOOL Unk_ov004_0224b310::func_ov004_0220a0e4() {
    Unk_ov004_0220a0e4_Pad pad;
    func_0203e488((s32)(Unk_020ddcf0 *)this);
    unk_3c->unk_08 = 1;
    Unk_020ddcf0 &s = *this;
    s.func_020a710c(p10::data_ov004_0224bb44);
    unk_1e = 0;
    return TRUE;
}

void Unk_ov004_0224b310::func_ov004_0220a128() {
    if (unk_84e == 0) {
        func_ov004_0220a280(2);
    }
    if (unk_84e != 0) {
        unk_84e--;
    }
}

BOOL Unk_ov004_0224b310::func_ov004_0220a154() {
    vfunc_70(1, 0xff);
    unk_84e = 1;
    return TRUE;
}

void Unk_ov004_0224b310::func_ov004_0220a174() {
    if (p10::_ZN18Unk_ov004_02205c4419func_ov004_02205c6cEv(b10_sub_73c)) {
        void *a = p10::func_ov004_022354d8();
        void *b = p10::_ZN18Unk_ov004_022351bc19func_ov004_02235464EPv(a, this);
        s32 *v = p10::_ZN18Unk_ov004_022355ac19func_ov004_022354ecEv();
        unk_840 = v[0];
        unk_844 = v[1];
        unk_848 = v[2];
        unk_84c = p10::_ZN18Unk_ov004_022355ac19func_ov004_022354e0Ev(b);
        p10::func_0203d704(this, 0);
    }
    p10::_ZN18Unk_ov004_02205c4419func_ov004_02205c44Eji(b10_sub_73c, 0, 0);
}

BOOL Unk_ov004_0224b310::func_ov004_0220a1e4() { return TRUE; }

typedef void (Unk_ov004_0224b310::*Unk_ov004_0220a1e8_Fn)();
typedef BOOL (Unk_ov004_0224b310::*Unk_ov004_0220a280_Fn)();

void Unk_ov004_0224b310::func_ov004_0220a1e8() {
    static Unk_ov004_0220a1e8_Fn tbl[5] = {
        &Unk_ov004_0224b310::func_ov004_0220a174,
        &Unk_ov004_0224b310::func_ov004_0220a128,
        &Unk_ov004_0224b310::func_ov004_0220a0c0,
        &Unk_ov004_0224b310::func_ov004_0220a088,
        &Unk_ov004_0224b310::func_ov004_0220a040,
    };
    if (unk_854 < 5) {
        (this->*tbl[unk_854])();
    }
}

BOOL Unk_ov004_0224b310::func_ov004_0220a280(s32 idx) {
    static Unk_ov004_0220a280_Fn tbl[5] = {
        &Unk_ov004_0224b310::func_ov004_0220a1e4,
        &Unk_ov004_0224b310::func_ov004_0220a154,
        &Unk_ov004_0224b310::func_ov004_0220a0e4,
        &Unk_ov004_0224b310::func_ov004_0220a0bc,
        &Unk_ov004_0224b310::func_ov004_0220a068,
    };
    if (idx < 5) {
        if ((this->*tbl[idx])()) {
            unk_854 = idx;
            return TRUE;
        }
    }
    return FALSE;
}

void Unk_ov004_0224b310::func_ov004_0220a328() {
    vfunc_70(0, 0xff);
}

BOOL Unk_ov004_0224b310::func_ov004_0220a33c() {
    p10::_ZN18Unk_ov004_02205c4419func_ov004_02205c44Eji(b10_sub_73c, 0, 0);
    func_ov004_02209150();
    return TRUE;
}

void Unk_ov004_0224b310::func_ov004_0220a360() {}

BOOL Unk_ov004_0224b310::func_ov004_0220a364() {
    p10::_ZN18Unk_ov004_02205c4419func_ov004_02205c44Eji(b10_sub_73c, 1, 0);
    return TRUE;
}

void Unk_ov004_0224b310::func_ov004_0220a380() {
    vfunc_70(2, 0xff);
}

BOOL Unk_ov004_0224b310::func_ov004_0220a394() {
    p10::_ZN18Unk_ov004_02205c4419func_ov004_02205c44Eji(b10_sub_73c, 1, 0);
    func_ov004_02209150();
    return TRUE;
}

void Unk_ov004_0224b310::func_ov004_0220a3b8() {}

BOOL Unk_ov004_0224b310::func_ov004_0220a3bc() {
    p10::_ZN18Unk_ov004_02205c4419func_ov004_02205c44Eji(b10_sub_73c, 0, 0);
    return TRUE;
}

void Unk_ov004_0224b310::func_ov004_0220a3d8() {
    static Unk_ov004_0220a1e8_Fn tbl[4] = {
        &Unk_ov004_0224b310::func_ov004_0220a3b8,
        &Unk_ov004_0224b310::func_ov004_0220a380,
        &Unk_ov004_0224b310::func_ov004_0220a360,
        &Unk_ov004_0224b310::func_ov004_0220a328,
    };
    if (unk_850 < 4) {
        (this->*tbl[unk_850])();
    }
}

BOOL Unk_ov004_0224b310::vfunc_70(u32 a, u8 b) {
    Unk_ov004_0224882c::vfunc_70(a, b);
    static Unk_ov004_0220a280_Fn tbl[4] = {
        &Unk_ov004_0224b310::func_ov004_0220a3bc,
        &Unk_ov004_0224b310::func_ov004_0220a394,
        &Unk_ov004_0224b310::func_ov004_0220a364,
        &Unk_ov004_0224b310::func_ov004_0220a33c,
    };
    if (a < 4) {
        if ((this->*tbl[a])()) {
            unk_850 = a;
            return TRUE;
        }
    }
    return FALSE;
}

u8 Unk_ov004_0224b310::vfunc_74(u32 a) {
    if (a < 4) {
        return p10::data_ov004_0224004c[a];
    }
    return 0;
}

void Unk_ov004_0224b310::vfunc_4c(u32 a, u8 b) {
    switch (a) {
    case 0:
    case 1:
        func_ov004_0220a280(1);
        break;
    case 8:
        func_ov004_0220a280(0);
        break;
    }
}

BOOL Unk_ov004_0224b310::vfunc_0c() { return TRUE; }

BOOL Unk_ov004_0224b310::vfunc_80() {
    func_ov004_0220a1e8();
    func_ov004_0220a3d8();
    return TRUE;
}

BOOL Unk_ov004_0224b310::vfunc_7c() {
    if (b10_unk_768 == 1) {
        p10::_ZN18Unk_ov004_02205c4419func_ov004_02205c44Eji(b10_sub_73c, 0, 0);
    }
    if (p10::_ZN18Unk_ov004_02205c4419func_ov004_02205c7cEv(b10_sub_73c) != 0) {
        vfunc_70(2, 0xff);
    } else {
        vfunc_70(0, 0xff);
    }
    func_ov004_0220a280(0);
    return TRUE;
}

Unk_ov004_0224b310::~Unk_ov004_0224b310() {}

Unk_ov004_0224b310::Unk_ov004_0224b310() {}

extern "C" void func_ov004_0220a628() {
    new Unk_ov004_0224b310;
}

// ---------------------------------------------------------------- Unk_ov004_0224b43c
BOOL Unk_ov004_0224b43c::vfunc_0c() { return TRUE; }


// ---- part 11: from unk_0220a898.cpp
// ---------------------------------------------------------------------------------------------------------------------
// Main-module base classes (layout only; copied in shape from src/main)

// ---------------------------------------------------------------------------------------------------------------------
// Externs

namespace p11 {
extern "C" {
extern u8 data_ov004_02240024[];
extern u8 data_ov004_02240038[];
extern char data_ov004_0224bb50[];

s32 func_02051cc8(s32 a, s32 b, u8 c, u8 d);
s32 func_02051da4(s32 a, s32 b, u8 c, u8 d);
s32 func_02063b8c(s32 a, ...);
s32 func_0204b248(s32 a, s32 b);
BOOL func_0203c23c(u32 a, u16 *p);
s32 func_0203c234(s32 a);
BOOL _ZN12Unk_020e45e013func_020b8840EPvjS0_jj(void *a, s32 b, char *c, s32 d, s32 e, s32 f);

s32 _ZN18Unk_ov004_0224882c19func_ov004_02208de0Eiiii(void *p, s32 a, s32 b, s32 c, s32 d);
s32 _ZN18Unk_ov004_0224882c19func_ov004_02208ba8Eiiij(void *p, s32 a, s32 b, s32 c, s32 d);
s32 func_ov004_022087a4(void *p);
s32 func_ov004_02233128(void);
s32 _ZN18Unk_ov004_0224882c19func_ov004_02208ff0Ei(void *p);
void func_ov004_02208980(void *p);
void _ZN18Unk_ov004_0224882c19func_ov004_02209198Ev(void *p);
void _ZN18Unk_ov004_0224882c19func_ov004_02209150Ev(void *p);
void _ZN18Unk_ov004_0224882c19func_ov004_02209108Ev(void *p);
void _ZN18Unk_ov004_022059f419func_ov004_02205a1cEjjj(void *p, s32 a, s32 b, s32 c);
s32 _ZN18Unk_ov004_02205c4419func_ov004_02205c6cEv(void *p);
void _ZN18Unk_ov004_02205c4419func_ov004_02205c44Eji(void *p, s32 a, s32 b);
void _ZN18Unk_ov004_022059f419func_ov004_022059f4Ev(void *p);
s32 _ZN18Unk_ov004_02205c4419func_ov004_02205c7cEv(void *p);
void _ZN18Unk_ov004_022059f419func_ov004_02205a64Ejj(void *p, s32 a, s32 b);
s32 func_ov004_02234ad4(void);
void _ZN18Unk_ov004_0220599419func_ov004_022059b0Ej(void *p, s32 a);
s32 func_ov004_02235a04(void);
s32 _ZN18Unk_ov004_02235a0c19func_ov004_02235a0cEv(s32 a);
s32 _ZN18Unk_ov004_02235a0c19func_ov004_02235c74Ev(s32 a);
}
}

// ---------------------------------------------------------------------------------------------------------------------
// Overlay 4 base class (vtable 0x0224882c, secondary vtable 0x022488d8 at +0xec)

// ---------------------------------------------------------------------------------------------------------------------
// Vtable 0x0224b43c

// ---------------------------------------------------------------------------------------------------------------------
// Vtable 0x0224936c

class Unk_ov004_0224936c : public Unk_ov004_0224882c {
public:
    Unk_ov004_0224936c();
    virtual ~Unk_ov004_0224936c();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_70(u32 a, u8 b);
    virtual u8 vfunc_74(u32 a);
    virtual BOOL vfunc_7c();
    virtual BOOL vfunc_80();

    void func_0220aa30();
    BOOL func_0220aa74();
    void func_0220aaac();
    BOOL func_0220aae8();
    void func_0220ab20();

    /* 0x840 */ Unk_ov004_022059f4 unk_840;
    /* 0x898 */ u8 unk_898;
};

// ---------------------------------------------------------------------------------------------------------------------
// Vtable 0x02249498

class Unk_ov004_02249498 : public Unk_ov004_0224882c {
public:
    Unk_ov004_02249498();
    virtual ~Unk_ov004_02249498();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_70(u32 a, u8 b);
    virtual u8 vfunc_74(u32 a);
    virtual BOOL vfunc_7c();
    virtual BOOL vfunc_80();
    virtual BOOL vfunc_88();

    void func_0220ad88();
    BOOL func_0220adb0();
    void func_0220adcc();
    BOOL func_0220adf4();
    void func_0220ae10();
    void func_0220af14();
    void func_0220af28();

    /* 0x840 */ u8 unk_840;
    /* 0x841 */ u8 unk_841;
};

// ---------------------------------------------------------------------------------------------------------------------
// Vtable 0x022496f0

class Unk_ov004_022496f0 : public Unk_ov004_0224882c {
public:
    Unk_ov004_022496f0();
    virtual ~Unk_ov004_022496f0();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_7c();
    virtual BOOL vfunc_80();

    /* 0x840 */ u16 unk_840;
};

// ---------------------------------------------------------------------------------------------------------------------
// Vtable 0x0224981c

struct Unk_020e45e0 {
    Unk_020e45e0();
    u32 pad[10];
};

class Unk_ov004_0224981c : public Unk_ov004_0224882c {
public:
    Unk_ov004_0224981c();
    virtual ~Unk_ov004_0224981c();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_7c();
    virtual BOOL vfunc_80();
    virtual BOOL vfunc_88();

    /* 0x840 */ u16 unk_840;
    /* 0x842 */ u8 unk_842;
    /* 0x843 */ u8 pad_843;
    /* 0x844 */ Unk_020e45e0 unk_844;
};

// ---------------------------------------------------------------------------------------------------------------------
// Unk_ov004_0224b43c


extern "C" void func_ov004_0220aa14() {
    new Unk_ov004_0224b43c;
}

// ---------------------------------------------------------------------------------------------------------------------
// Unk_ov004_0224936c

void Unk_ov004_0224936c::func_0220aa30() {
    p11::func_ov004_02208980(this);
    p11::_ZN18Unk_ov004_022059f419func_ov004_02205a1cEjjj(&unk_840, 1, 1, 0);
    p11::_ZN18Unk_ov004_0224882c19func_ov004_02209198Ev(this);
    if (p11::_ZN18Unk_ov004_02205c4419func_ov004_02205c6cEv(b11_unk_73c)) {
        p11::func_02051cc8((s32)this, 0, 0xff, 1);
    }
}

BOOL Unk_ov004_0224936c::func_0220aa74() {
    p11::_ZN18Unk_ov004_0224882c19func_ov004_02209150Ev(this);
    p11::_ZN18Unk_ov004_02205c4419func_ov004_02205c44Eji(b11_unk_73c, 1, 0);
    p11::_ZN18Unk_ov004_0224882c19func_ov004_02208ba8Eiiij(this, 1, 0, 0x1000, 0);
    return TRUE;
}

void Unk_ov004_0224936c::func_0220aaac() {
    p11::func_ov004_02208980(this);
    p11::_ZN18Unk_ov004_022059f419func_ov004_02205a1cEjjj(&unk_840, 0, 1, 0);
    if (p11::_ZN18Unk_ov004_02205c4419func_ov004_02205c6cEv(b11_unk_73c)) {
        p11::func_02051cc8((s32)this, 1, 0xff, 1);
    }
}

BOOL Unk_ov004_0224936c::func_0220aae8() {
    p11::_ZN18Unk_ov004_0224882c19func_ov004_02209108Ev(this);
    p11::_ZN18Unk_ov004_02205c4419func_ov004_02205c44Eji(b11_unk_73c, 0, 0);
    p11::_ZN18Unk_ov004_0224882c19func_ov004_02208ba8Eiiij(this, 0, 1, 0x1000, 0);
    return TRUE;
}

void Unk_ov004_0224936c::func_0220ab20() {
    static void (Unk_ov004_0224936c::*tbl[2])() = {&Unk_ov004_0224936c::func_0220aaac, &Unk_ov004_0224936c::func_0220aa30};
    if (unk_898 < 2) {
        (this->*tbl[unk_898])();
    }
}

BOOL Unk_ov004_0224936c::vfunc_70(u32 a, u8 b) {
    Unk_ov004_0224882c::vfunc_70(a, b);
    static BOOL (Unk_ov004_0224936c::*tbl[2])() = {&Unk_ov004_0224936c::func_0220aae8, &Unk_ov004_0224936c::func_0220aa74};
    if (a < 2) {
        if ((this->*tbl[a])()) {
            unk_898 = a;
            return TRUE;
        }
    }
    return FALSE;
}

u8 Unk_ov004_0224936c::vfunc_74(u32 a) {
    if (a < 2) {
        return p11::data_ov004_02240024[a];
    }
    return 0;
}

BOOL Unk_ov004_0224936c::vfunc_0c() {
    return TRUE;
}

BOOL Unk_ov004_0224936c::vfunc_80() {
    func_0220ab20();
    p11::_ZN18Unk_ov004_022059f419func_ov004_022059f4Ev(&unk_840);
    return TRUE;
}

BOOL Unk_ov004_0224936c::vfunc_7c() {
    p11::_ZN18Unk_ov004_0224882c19func_ov004_02208de0Eiiii(this, 0, 1, 0x1000, 0);
    s32 t = b11_unk_590;
    s32 r = p11::_ZN18Unk_ov004_02205c4419func_ov004_02205c7cEv(b11_unk_73c);
    p11::_ZN18Unk_ov004_022059f419func_ov004_02205a64Ejj(&unk_840, t, r);
    if (b11_unk_768 == 1) {
        p11::func_02051da4((s32)this, 0, 0xff, 1);
    } else if (p11::_ZN18Unk_ov004_02205c4419func_ov004_02205c7cEv(b11_unk_73c) && !p11::func_ov004_02234ad4()) {
        vfunc_70(1, 0xff);
    } else {
        vfunc_70(0, 0xff);
    }
    return TRUE;
}

extern "C" void func_ov004_0220ad6c() {
    new Unk_ov004_0224936c;
}

// ---------------------------------------------------------------------------------------------------------------------
// Unk_ov004_02249498

void Unk_ov004_02249498::func_0220ad88() {
    p11::_ZN18Unk_ov004_02205c4419func_ov004_02205c44Eji(b11_unk_73c, 1, 0);
    p11::_ZN18Unk_ov004_0220599419func_ov004_022059b0Ej(b11_unk_760, 1);
}

BOOL Unk_ov004_02249498::func_0220adb0() {
    p11::_ZN18Unk_ov004_02205c4419func_ov004_02205c44Eji(b11_unk_73c, 1, 0);
    return TRUE;
}

void Unk_ov004_02249498::func_0220adcc() {
    p11::_ZN18Unk_ov004_02205c4419func_ov004_02205c44Eji(b11_unk_73c, 0, 0);
    p11::_ZN18Unk_ov004_0220599419func_ov004_022059b0Ej(b11_unk_760, 0);
}

BOOL Unk_ov004_02249498::func_0220adf4() {
    p11::_ZN18Unk_ov004_02205c4419func_ov004_02205c44Eji(b11_unk_73c, 0, 0);
    return TRUE;
}

void Unk_ov004_02249498::func_0220ae10() {
    static void (Unk_ov004_02249498::*tbl[2])() = {&Unk_ov004_02249498::func_0220adcc, &Unk_ov004_02249498::func_0220ad88};
    if (unk_840 < 2) {
        (this->*tbl[unk_840])();
    }
}

BOOL Unk_ov004_02249498::vfunc_70(u32 a, u8 b) {
    Unk_ov004_0224882c::vfunc_70(a, b);
    static BOOL (Unk_ov004_02249498::*tbl[2])() = {&Unk_ov004_02249498::func_0220adf4, &Unk_ov004_02249498::func_0220adb0};
    if (a < 2) {
        if ((this->*tbl[a])()) {
            unk_840 = a;
            return TRUE;
        }
    }
    return FALSE;
}

u8 Unk_ov004_02249498::vfunc_74(u32 a) {
    if (a < 2) {
        return p11::data_ov004_02240038[a];
    }
    return 0;
}

void Unk_ov004_02249498::func_0220af14() {
    p11::func_02051cc8((s32)this, 1, 0xff, 1);
}

void Unk_ov004_02249498::func_0220af28() {
    p11::func_02051cc8((s32)this, 0, 0xff, 1);
}

BOOL Unk_ov004_02249498::vfunc_88() {
    if (unk_841 != 0) {
        return TRUE;
    }
    if (unk_840 == 1) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov004_02249498::vfunc_0c() {
    return TRUE;
}

BOOL Unk_ov004_02249498::vfunc_80() {
    func_0220ae10();
    return TRUE;
}

static inline BOOL Unk_ov004_0220af74_Range(volatile u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    u32 x = *p;
    if (x >= lo && x <= hi) {
        r = TRUE;
    }
    return r;
}

BOOL Unk_ov004_02249498::vfunc_7c() {
    volatile u16 v = p11::func_0204b248(p11::func_ov004_022087a4(this), 0);
    if (Unk_ov004_0220af74_Range(&v, 0x4124, 0x4223)) {
        unk_841 = 1;
    }
    if (p11::_ZN18Unk_ov004_02205c4419func_ov004_02205c7cEv(b11_unk_73c)) {
        vfunc_70(1, 0xff);
    } else {
        vfunc_70(0, 0xff);
    }
    return TRUE;
}

extern "C" void func_ov004_0220b058() {
    new Unk_ov004_02249498;
}

// ---------------------------------------------------------------------------------------------------------------------
// Unk_ov004_022496f0

BOOL Unk_ov004_022496f0::vfunc_0c() {
    return TRUE;
}

BOOL Unk_ov004_022496f0::vfunc_80() {
    return TRUE;
}

BOOL Unk_ov004_022496f0::vfunc_7c() {
    unk_840 = p11::_ZN18Unk_ov004_02235a0c19func_ov004_02235c74Ev(p11::func_ov004_02235a04());
    return TRUE;
}

extern "C" void func_ov004_0220b10c() {
    new Unk_ov004_022496f0;
}

// ---------------------------------------------------------------------------------------------------------------------
// Unk_ov004_0224981c

BOOL Unk_ov004_0224981c::vfunc_88() {
    if (unk_842 >= 2) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov004_0224981c::vfunc_0c() {
    return TRUE;
}

BOOL Unk_ov004_0224981c::vfunc_80() {
    if (unk_842 < 2) {
        unk_842++;
    }
    return TRUE;
}

BOOL Unk_ov004_0224981c::vfunc_7c() {
    unk_840 = p11::_ZN18Unk_ov004_02235a0c19func_ov004_02235c74Ev(p11::func_ov004_02235a04());
    unk_842 = 0;
    u16 t = unk_840;
    s32 w;
    if (t < 0x44) {
        w = (u16)(t + 0x1144);
    } else {
        w = 0x1144;
    }
    u16 v = w;
    p11::func_0203c23c(p11::_ZN18Unk_ov004_02235a0c19func_ov004_02235a0cEv(p11::func_ov004_02235a04()), &v);
    s32 h = b11_unk_590;
    s32 r = p11::func_0203c234(p11::_ZN18Unk_ov004_02235a0c19func_ov004_02235a0cEv(p11::func_ov004_02235a04()));
    if (p11::_ZN12Unk_020e45e013func_020b8840EPvjS0_jj(&unk_844, h, p11::data_ov004_0224bb50, r, 0, 0)) {
        return TRUE;
    }
    return FALSE;
}

// Out-of-line constructors (defined after the factories so they are not inlined)
Unk_ov004_0224b43c::Unk_ov004_0224b43c() {}
Unk_ov004_0224936c::Unk_ov004_0224936c() {}
Unk_ov004_02249498::Unk_ov004_02249498() {}
Unk_ov004_022496f0::Unk_ov004_022496f0() {}
Unk_ov004_0224936c::~Unk_ov004_0224936c() {}
Unk_ov004_02249498::~Unk_ov004_02249498() {}
Unk_ov004_022496f0::~Unk_ov004_022496f0() {}
Unk_ov004_0224b43c::~Unk_ov004_0224b43c() {}

// ---- part 12: from unk_0220b1e4.cpp
namespace p12 {
extern "C" {
BOOL func_ov004_02208980(void *self);
void func_ov004_02208a18(void *self, s32 a, s32 b, s32 c);
}
}

// The 0x5d0 sub-object and 0x590 field are inside the opaque range; use these helpers.
#define BASE_U8(o) (*(u8 *)((u8 *)this + (o)))
#define BASE_S32(o) (*(s32 *)((u8 *)this + (o)))
#define PT(o) ((void *)((u8 *)this + (o)))

struct Unk_020cbb18_G {
    u8 pad_00[0x68];
    s32 unk_68;
};

namespace p12 {
extern "C" {
extern Unk_020cbb18_G *data_020cbb18;
extern u8 data_ov004_02240064[];
extern u8 data_ov004_0224bb60[];

void _ZN18Unk_ov004_02205c4419func_ov004_02205c44Eji(void *p, s32 a, s32 b);
BOOL _ZN18Unk_ov004_02205c4419func_ov004_02205c6cEv(void *p);
BOOL _ZN18Unk_ov004_02205c4419func_ov004_02205c7cEv(void *p);
void _ZN18Unk_ov004_02235cc019func_ov004_02235908Ejj(void *p, s32 a, void *q);
void _ZN18Unk_ov004_02235cc019func_ov004_022358e0Ej(void *p, s32 a);
BOOL func_ov004_02234ad4();
void *func_ov004_02235a04();
void *_ZN18Unk_ov004_02235a0c19func_ov004_02235c74Ev(void *o);
void *_ZN18Unk_ov004_02235a0c19func_ov004_02235a1cEv(void *o);
void func_020b8cf8(void *o, u16 *p);
u32 func_020b8cf0(void *o);
BOOL _ZN12Unk_020e45e013func_020b8840EPvjS0_jj(void *o, void *a, u32 b, void *c, u32 d, u32 e);
BOOL _ZN12Unk_020dbe7c13func_020565e8Ei(void *o, u32 a);
s32 func_02051cc8(void *o, s32 a, u8 c, u8 d);
void *func_0209750c();
void *_ZN12Unk_0209865c13func_02098750Ev(void *o);
s32 _ZN12Unk_02097d1c13func_02097d1cEi(void *o, s32 a);
void func_02097ac4(void *o, s32 a, s32 b);
}
}

// ---------------------------------------------------------------------------
// Class A (vtable 0x0224981c, secondary 0x022498c8), size 0x86c

Unk_ov004_0224981c::~Unk_ov004_0224981c() {}

Unk_ov004_0224981c::Unk_ov004_0224981c() {}

extern "C" void func_ov004_0220b264() {
    new Unk_ov004_0224981c;
}

// ---------------------------------------------------------------------------
// Class B (vtable 0x02249ba0), size 0x86c

class Unk_ov004_02249ba0 : public Unk_ov004_0224882c {
public:
    Unk_ov004_02249ba0();
    virtual ~Unk_ov004_02249ba0();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_7c();
    virtual BOOL vfunc_80();
    virtual BOOL vfunc_88();

    /* 0x840 */ u16 unk_840;
    /* 0x842 */ u8 unk_842;
    /* 0x843 */ u8 pad_843;
    /* 0x844 */ Unk_020e45e0 unk_844;
};

BOOL Unk_ov004_02249ba0::vfunc_88() {
    if (unk_842 >= 2) return 1;
    return 0;
}

BOOL Unk_ov004_02249ba0::vfunc_0c() {
    return TRUE;
}

BOOL Unk_ov004_02249ba0::vfunc_80() {
    if (unk_842 < 2) unk_842++;
    return TRUE;
}

BOOL Unk_ov004_02249ba0::vfunc_7c() {
    u16 v;
    u16 tmp;
    u32 s;
    u32 t;
    unk_840 = (u16)p12::_ZN18Unk_ov004_02235a0c19func_ov004_02235c74Ev(p12::func_ov004_02235a04());
    unk_842 = 0;
    if (unk_840 < 0x44) {
        v = unk_840 + 0x1100;
    } else {
        v = 0x1100;
    }
    tmp = v;
    p12::func_020b8cf8(p12::_ZN18Unk_ov004_02235a0c19func_ov004_02235a1cEv(p12::func_ov004_02235a04()), &tmp);
    s = BASE_S32(0x590);
    t = p12::func_020b8cf0(p12::_ZN18Unk_ov004_02235a0c19func_ov004_02235a1cEv(p12::func_ov004_02235a04()));
    if (p12::_ZN12Unk_020e45e013func_020b8840EPvjS0_jj(&unk_844, (void *)s, (u32)p12::data_ov004_0224bb60, (void *)t, 0, 0) != 0) return TRUE;
    return FALSE;
}

Unk_ov004_02249ba0::~Unk_ov004_02249ba0() {}

Unk_ov004_02249ba0::Unk_ov004_02249ba0() {}

extern "C" void func_ov004_0220b3bc() {
    new Unk_ov004_02249ba0;
}

// ---------------------------------------------------------------------------
// Class C (vtable 0x02249ccc), size 0x844

class Unk_ov004_02249ccc;
typedef void (Unk_ov004_02249ccc::*Unk_ov004_0220b73c_Fn)();
typedef BOOL (Unk_ov004_02249ccc::*Unk_ov004_0220b7d4_Fn)();

class Unk_ov004_02249ccc : public Unk_ov004_0224882c {
public:
    Unk_ov004_02249ccc();
    virtual ~Unk_ov004_02249ccc();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_70(u32 a, u8 b);
    virtual u8 vfunc_74(u32 a);
    virtual BOOL vfunc_7c();
    virtual BOOL vfunc_80();
    virtual BOOL vfunc_84();

    void func_ov004_0220b3d8();
    BOOL func_ov004_0220b448();
    void func_ov004_0220b47c();
    BOOL func_ov004_0220b534();
    void func_ov004_0220b574();
    BOOL func_ov004_0220b628();
    void func_ov004_0220b654();
    BOOL func_ov004_0220b6a8();
    void func_ov004_0220b6e0();
    BOOL func_ov004_0220b708();
    void func_ov004_0220b73c();

    /* 0x840 */ u8 unk_840;
    /* 0x841 */ u8 unk_841;
    /* 0x842 */ u8 unk_842;
    /* 0x843 */ u8 unk_843;
};

void Unk_ov004_02249ccc::func_ov004_0220b3d8() {
    if (func_ov004_02206f8c() == 0) {
        p12::_ZN18Unk_ov004_02235cc019func_ov004_02235908Ejj(PT(0x794), 0x42a, PT(0x7b4));
        if (unk_842 != 0) {
            p12::_ZN18Unk_ov004_02235cc019func_ov004_022358e0Ej(PT(0x794), 1);
            unk_842 = 0;
        }
    }
    p12::_ZN18Unk_ov004_02205c4419func_ov004_02205c44Eji(PT(0x73c), 0, 0);
    if (p12::func_ov004_02208980(this) != 0) {
        vfunc_70(0, 0xff);
    }
}

BOOL Unk_ov004_02249ccc::func_ov004_0220b448() {
    p12::_ZN18Unk_ov004_02205c4419func_ov004_02205c44Eji(PT(0x73c), 0, 0);
    p12::func_ov004_02208a18(this, 0, 3, 0x1000);
    unk_842 = 1;
    return TRUE;
}

void Unk_ov004_02249ccc::func_ov004_0220b47c() {
    if (func_ov004_02206f8c() == 0) {
        p12::_ZN18Unk_ov004_02235cc019func_ov004_02235908Ejj(PT(0x794), 0x42a, PT(0x7b4));
    }
    p12::_ZN18Unk_ov004_02205c4419func_ov004_02205c44Eji(PT(0x73c), 0, 0);
    if (func_ov004_02206f8c() == 0) {
        if (p12::_ZN12Unk_020dbe7c13func_020565e8Ei(PT(0x5d0), 0) != 0) {
            p12::_ZN18Unk_ov004_02235cc019func_ov004_022358e0Ej(PT(0x794), 1);
        } else if (p12::_ZN12Unk_020dbe7c13func_020565e8Ei(PT(0x5d0), 0x14) != 0) {
            if ((unk_841 & 1) != 0) {
                p12::_ZN18Unk_ov004_02235cc019func_ov004_022358e0Ej(PT(0x794), 2);
            } else {
                p12::_ZN18Unk_ov004_02235cc019func_ov004_022358e0Ej(PT(0x794), 1);
            }
            unk_841++;
        }
    }
    if (p12::func_ov004_02208980(this) != 0) {
        vfunc_70(4, 0xff);
    }
}

BOOL Unk_ov004_02249ccc::func_ov004_0220b534() {
    p12::_ZN18Unk_ov004_02205c4419func_ov004_02205c44Eji(PT(0x73c), 0, 0);
    func_ov004_02209108();
    func_ov004_02208ba8(1, 1, 0x1000, 0xffff);
    return TRUE;
}

void Unk_ov004_02249ccc::func_ov004_0220b574() {
    if (func_ov004_02206f8c() == 0) {
        p12::_ZN18Unk_ov004_02235cc019func_ov004_02235908Ejj(PT(0x794), 0x42a, PT(0x7b4));
    }
    p12::func_ov004_02208980(this);
    if (func_ov004_02206f8c() == 0) {
        if (p12::_ZN12Unk_020dbe7c13func_020565e8Ei(PT(0x5d0), 0) != 0) {
            p12::_ZN18Unk_ov004_02235cc019func_ov004_022358e0Ej(PT(0x794), 1);
        } else if (p12::_ZN12Unk_020dbe7c13func_020565e8Ei(PT(0x5d0), 0x14) != 0) {
            if ((unk_841 & 1) != 0) {
                p12::_ZN18Unk_ov004_02235cc019func_ov004_022358e0Ej(PT(0x794), 2);
            } else {
                p12::_ZN18Unk_ov004_02235cc019func_ov004_022358e0Ej(PT(0x794), 1);
            }
            unk_841++;
        }
    }
    if (p12::_ZN18Unk_ov004_02205c4419func_ov004_02205c6cEv(PT(0x73c)) != 0) {
        p12::func_02051cc8(this, 3, 0xff, 1);
    }
}

BOOL Unk_ov004_02249ccc::func_ov004_0220b628() {
    p12::_ZN18Unk_ov004_02205c4419func_ov004_02205c44Eji(PT(0x73c), 1, 0);
    p12::func_ov004_02208a18(this, 1, 0, 0x1000);
    return TRUE;
}

void Unk_ov004_02249ccc::func_ov004_0220b654() {
    if (func_ov004_02206f8c() == 0) {
        p12::_ZN18Unk_ov004_02235cc019func_ov004_02235908Ejj(PT(0x794), 0x42a, PT(0x7b4));
    }
    p12::_ZN18Unk_ov004_02205c4419func_ov004_02205c44Eji(PT(0x73c), 1, 0);
    if (p12::func_ov004_02208980(this) != 0) {
        vfunc_70(2, 0xff);
    }
}

BOOL Unk_ov004_02249ccc::func_ov004_0220b6a8() {
    p12::_ZN18Unk_ov004_02205c4419func_ov004_02205c44Eji(PT(0x73c), 1, 0);
    func_ov004_02208ba8(0, 1, 0x1000, 0);
    func_ov004_02209150();
    return TRUE;
}

void Unk_ov004_02249ccc::func_ov004_0220b6e0() {
    if (p12::_ZN18Unk_ov004_02205c4419func_ov004_02205c6cEv(PT(0x73c)) != 0) {
        p12::func_02051cc8(this, 1, 0xff, 1);
    }
}

BOOL Unk_ov004_02249ccc::func_ov004_0220b708() {
    p12::_ZN18Unk_ov004_02205c4419func_ov004_02205c44Eji(PT(0x73c), 0, 0);
    func_ov004_02208ba8(0, 3, 0x1000, 0);
    return TRUE;
}

void Unk_ov004_02249ccc::func_ov004_0220b73c() {
    static Unk_ov004_0220b73c_Fn tbl[5] = {&Unk_ov004_02249ccc::func_ov004_0220b6e0, &Unk_ov004_02249ccc::func_ov004_0220b654,
                                           &Unk_ov004_02249ccc::func_ov004_0220b574, &Unk_ov004_02249ccc::func_ov004_0220b47c,
                                           &Unk_ov004_02249ccc::func_ov004_0220b3d8};
    u32 i = unk_843;
    if (i < 5) {
        (this->*tbl[i])();
    }
}

BOOL Unk_ov004_02249ccc::vfunc_70(u32 idx, u8 b) {
    Unk_ov004_0224882c::vfunc_70(idx, b);
    static Unk_ov004_0220b7d4_Fn tbl[5] = {&Unk_ov004_02249ccc::func_ov004_0220b708, &Unk_ov004_02249ccc::func_ov004_0220b6a8,
                                           &Unk_ov004_02249ccc::func_ov004_0220b628, &Unk_ov004_02249ccc::func_ov004_0220b534,
                                           &Unk_ov004_02249ccc::func_ov004_0220b448};
    if (idx < 5) {
        if ((this->*tbl[idx])() != 0) {
            unk_843 = idx;
            return TRUE;
        }
    }
    return FALSE;
}

u8 Unk_ov004_02249ccc::vfunc_74(u32 idx) {
    if (idx < 5) return p12::data_ov004_02240064[idx];
    return 0;
}

BOOL Unk_ov004_02249ccc::vfunc_0c() {
    return TRUE;
}

BOOL Unk_ov004_02249ccc::vfunc_84() {
    if (func_ov004_02206f8c() == 0) {
        if (func_ov004_022057bc() == 0) {
            p12::_ZN18Unk_ov004_02235cc019func_ov004_02235908Ejj(PT(0x794), 0x42a, PT(0x7b4));
        }
    }
    return TRUE;
}

BOOL Unk_ov004_02249ccc::vfunc_80() {
    func_ov004_0220b73c();
    return TRUE;
}

BOOL Unk_ov004_02249ccc::vfunc_7c() {
    unk_840 = 0;
    func_ov004_02208de0(0, 1, 0x1000, 0);
    if (p12::_ZN18Unk_ov004_02205c4419func_ov004_02205c7cEv(PT(0x73c)) != 0 && p12::func_ov004_02234ad4() == 0) {
        vfunc_70(2, 0xff);
    } else {
        vfunc_70(0, 0xff);
    }
    return TRUE;
}

Unk_ov004_02249ccc::~Unk_ov004_02249ccc() {}

Unk_ov004_02249ccc::Unk_ov004_02249ccc() {}

extern "C" void func_ov004_0220b9b0() {
    new Unk_ov004_02249ccc;
}

// ------------------------------------------------------------------ class Unk_ov004_02249f24 (vtable 0x02249f24)
class Unk_ov004_02249f24 : public Unk_ov004_0224882c {
public:
    Unk_ov004_02249f24();
    virtual ~Unk_ov004_02249f24();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_70(u32 a, u8 v);
    virtual BOOL vfunc_7c();
    virtual BOOL vfunc_80();

    void func_ov004_0220b9cc();
    BOOL func_ov004_0220b9d4();
    void func_ov004_0220ba38();
    BOOL func_ov004_0220ba84();
    void func_ov004_0220ba88();

    /* 0x840 */ u8 unk_840;
    /* 0x841 */ u8 pad_841[3];
};
typedef void (Unk_ov004_02249f24::*Unk_ov004_0220ba88_Fn)();

void Unk_ov004_02249f24::func_ov004_0220b9cc() {
    func_ov004_0220ba38();
}

BOOL Unk_ov004_02249f24::func_ov004_0220b9d4() {
    void *r5;
    func_ov004_02209150();
    if (b12_unk_778 == p12::data_020cbb18->unk_68) {
        r5 = p12::func_0209750c();
        if (r5 != 0) {
            if (p12::_ZN12Unk_02097d1c13func_02097d1cEi(p12::_ZN12Unk_0209865c13func_02098750Ev(r5), 0) > 0) {
                void *r4 = p12::_ZN12Unk_0209865c13func_02098750Ev(r5);
                p12::func_02097ac4(r4, p12::_ZN12Unk_02097d1c13func_02097d1cEi(p12::_ZN12Unk_0209865c13func_02098750Ev(r5), 0) - 1, 0);
            }
        }
    }
    return TRUE;
}

void Unk_ov004_02249f24::func_ov004_0220ba38() {
    if (p12::_ZN18Unk_ov004_02205c4419func_ov004_02205c6cEv(PT(0x73c)) != 0) {
        p12::func_02051cc8(this, 1, p12::data_020cbb18->unk_68, 1);
    } else if (func_ov004_02206f8c() != 0) {
        vfunc_70(1, 0xff);
    }
}

BOOL Unk_ov004_02249f24::func_ov004_0220ba84() {
    return TRUE;
}

void Unk_ov004_02249f24::func_ov004_0220ba88() {
    static Unk_ov004_0220ba88_Fn tbl[2] = {&Unk_ov004_02249f24::func_ov004_0220ba38, &Unk_ov004_02249f24::func_ov004_0220b9cc};
    u32 i = unk_840;
    if (i < 2) {
        (this->*tbl[i])();
    }
}

// ---- part 13: from unk_0220baf4.cpp

struct Unk_ov004_0220bdbc_P {
    u32 unk_00;
    u32 unk_04;
    u32 unk_08;
};

struct Unk_ov004_0220c0bc_Mtx {
    s32 m[9];
};

struct Unk_ov004_0220c0bc_B {
    /* 0x00 */ u32 unk_00;
    /* 0x04 */ u8 pad_04[0x24];
    /* 0x28 */ s32 unk_28[9];
};

struct Unk_ov004_0220c0bc_Obj {
    u8 pad_00[0xb4];
    /* 0xb4 */ Unk_ov004_0220c0bc_B *unk_b4;
};

struct Unk_ov004_0220c0bc_Actor {
    u8 pad_00[0x8e];
    /* 0x8e */ s16 unk_8e;
};
namespace p13 {
extern "C" {
u32 func_ov004_022087a4(void *self);
Unk_ov004_0220c0bc_Actor *func_ov004_022087b0(void *self);
}
}

namespace p13 {
extern "C" {
extern u16 data_ov004_022486f8;
extern char data_ov004_0224bb70[];
extern char data_ov004_0224bb80[];
extern char data_ov004_0224bb88[];
extern s16 data_02135f44[];

u32 func_ov004_02233118(u32 a);
BOOL _ZN18Unk_ov004_02205c4419func_ov004_02205c6cEv(void *p);
s32 _ZN18Unk_ov004_02205e5819func_ov004_02205e78Ev(void *p);
u32 func_0204b248(u32 a, s32 b);
void func_02003a3c(void *p, u32 c);
void func_020039ec(void *p);
void func_020039f4(void *p, void *v);
void func_02003a44(void *p);
void func_02051cc8(void *p, s32 a, s32 b, s32 c);
void _ZN12Unk_020d967013func_0203e47cEi(void *p, Unk_020ddcf0 *q);
void _ZN12Unk_020d967013func_0203e488Ei(void *p, Unk_020ddcf0 *q);
s32 func_0203d67c(void *p);
s32 func_0203d704(void *p, s32 a);
s32 func_01ffc5a4(s32 a, s32 b);
s32 func_01ffcb0c(s32 a, s32 b);
void func_01ffb4b4(void *out, s32 a, s32 b);
void func_01ffb56c(void *a, void *b, void *c);
s32 func_020e761c(s32 *p, s32 target, s32 step);
s32 _ZN12Unk_02056fd813func_02056fccEi(u32 a, const char *s);
void _ZN12Unk_02003c3013func_02003e50Ev(void *p);
void func_02003e70(void *p, s32 a, s32 b, s32 c);
void _ZN12Unk_02003c4013func_02003e80EP16Unk_02003a6c_Vec(void *p, void *v);
void _ZN12Unk_02003c3013func_02003eccEv(void *p);
u32 func_020716cc(void);
u32 _ZN12Unk_020718a413func_020716e0Ei(u32 a, u32 b);
s32 _ZN12Unk_020718a413func_02071834Ei(u32 a, u32 b);
void func_02056744(u32 a, const char *s, u32 c, s32 d, s32 e);
void func_020f5010(void *p);
void func_020f5014(void *p);
}
}

// ------------------------------------------------------------------ class A (vtable 0x02249f24)

typedef BOOL (Unk_ov004_02249f24::*Unk_ov004_0220baf4_Fn)();

BOOL Unk_ov004_02249f24::vfunc_70(u32 a, u8 v) {
    Unk_ov004_0224882c::vfunc_70(a, v);
    static Unk_ov004_0220baf4_Fn tbl[2] = {
        &Unk_ov004_02249f24::func_ov004_0220ba84,
        &Unk_ov004_02249f24::func_ov004_0220b9d4,
    };
    if ((u32)a < 2) {
        if ((this->*tbl[a])()) {
            unk_840 = a;
            return TRUE;
        }
    }
    return FALSE;
}

BOOL Unk_ov004_02249f24::vfunc_0c() {
    return TRUE;
}

BOOL Unk_ov004_02249f24::vfunc_80() {
    func_ov004_0220ba88();
    return TRUE;
}

BOOL Unk_ov004_02249f24::vfunc_7c() {
    vfunc_70(0, 0xff);
    return TRUE;
}

Unk_ov004_02249f24::~Unk_ov004_02249f24() {}

Unk_ov004_02249f24::Unk_ov004_02249f24() {}

extern "C" void func_ov004_0220bc18() {
    new Unk_ov004_02249f24;
}

// ------------------------------------------------------------------ class B (vtable 0x0224a050)

class Unk_ov004_0224a050 : public Unk_ov004_0224882c {
public:
    Unk_ov004_0224a050();
    virtual ~Unk_ov004_0224a050();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_70(u32 a, u8 v);
    virtual BOOL vfunc_7c();
    virtual BOOL vfunc_80();
    virtual BOOL vfunc_84();

    /* 0x840 */ u32 unk_840[3];
};

BOOL Unk_ov004_0224a050::vfunc_70(u32 a, u8 v) {
    Unk_ov004_0224882c::vfunc_70(a, v);
    u32 c = p13::func_ov004_02233118(p13::func_ov004_022087a4(this));
    if (c != p13::data_ov004_022486f8) {
        p13::func_02003a3c(unk_840, c);
    }
    return TRUE;
}

BOOL Unk_ov004_0224a050::vfunc_0c() {
    p13::func_020039ec(unk_840);
    return TRUE;
}

BOOL Unk_ov004_0224a050::vfunc_84() {
    Unk_ov004_0220bc80_V3 v;
    v.x = b13_unk_7b4.x;
    v.y = b13_unk_7b4.y;
    v.z = b13_unk_7b4.z;
    p13::func_020039f4(unk_840, &v);
    return TRUE;
}

BOOL Unk_ov004_0224a050::vfunc_80() {
    if (p13::_ZN18Unk_ov004_02205c4419func_ov004_02205c6cEv(b13_f_73c)) {
        p13::func_02051cc8(this, 0, 0xff, 1);
    }
    vfunc_84();
    return TRUE;
}

BOOL Unk_ov004_0224a050::vfunc_7c() {
    p13::func_02003a44(unk_840);
    return TRUE;
}

Unk_ov004_0224a050::~Unk_ov004_0224a050() {
    p13::func_020f5010(unk_840);
}

Unk_ov004_0224a050::Unk_ov004_0224a050() {
    p13::func_020f5014(unk_840);
}

extern "C" void func_ov004_0220bda0() {
    new Unk_ov004_0224a050;
}

// ------------------------------------------------------------------ class C (vtable 0x0224a500)
class Unk_ov004_0224a500 : public Unk_ov004_0224882c {
public:
    Unk_ov004_0224a500();
    virtual ~Unk_ov004_0224a500();
    virtual BOOL vfunc_0c();
    virtual void vfunc_4c(u32 a, u8 b);
    virtual BOOL vfunc_7c();
    virtual BOOL vfunc_80();

    void func_ov004_0220bdbc();
    BOOL func_ov004_0220bdec();
    void func_ov004_0220bdf0();
    BOOL func_ov004_0220be14();
    void func_ov004_0220be90();
    BOOL func_ov004_0220be9c();
    void func_ov004_0220bea0();
    BOOL func_ov004_0220bec4();
    void func_ov004_0220bec8();
    BOOL func_ov004_0220bf54(s32 idx);

    /* 0x840 */ s32 unk_840;
};

typedef BOOL (Unk_ov004_0224a500::*Unk_ov004_0224a500_Fn)();
typedef void (Unk_ov004_0224a500::*Unk_ov004_0220bec8_Fn)();

void Unk_ov004_0224a500::func_ov004_0220bdbc() {
    if (((Unk_ov004_0220bdbc_P *)unk_3c)) {
        if (((Unk_ov004_0220bdbc_P *)unk_3c)->unk_04 == 0) {
            p13::_ZN12Unk_020d967013func_0203e47cEi(this, this);
            p13::func_0203d67c(this);
        }
    }
}

BOOL Unk_ov004_0224a500::func_ov004_0220bdec() {
    return TRUE;
}

void Unk_ov004_0224a500::func_ov004_0220bdf0() {
    if (((Unk_ov004_0220bdbc_P *)unk_3c)) {
        if (((Unk_ov004_0220bdbc_P *)unk_3c)->unk_04) {
            func_ov004_0220bf54(3);
        }
    }
}

struct Unk_ov004_0220be14_Chk {
    static inline BOOL RV(volatile u16 *p, u32 lo, u32 hi) {
        BOOL r = FALSE;
        if (*p >= lo && *p <= hi) r = TRUE;
        return r;
    }
    static inline BOOL R(u16 *p, u32 lo, u32 hi) {
        BOOL r = FALSE;
        if (*p >= lo && *p <= hi) r = TRUE;
        return r;
    }
};

BOOL Unk_ov004_0224a500::func_ov004_0220be14() {
    volatile u16 va[2];
    s32 idx;
    p13::_ZN12Unk_020d967013func_0203e488Ei(this, this);
    ((Unk_ov004_0220bdbc_P *)unk_3c)->unk_08 = 1;
    va[1] = p13::func_0204b248(p13::func_ov004_022087a4(this), 0);
    BOOL r = FALSE;
    u32 t = va[1];
    if (t >= 0x47d8 && t <= 0x4a47) r = TRUE;
    if (r) idx = (s32)(t - 0x47d8) >> 2;
    else idx = -1;
    Unk_020e2a30::func_020a710c(p13::data_ov004_0224bb70);
    unk_1e = idx;
    return TRUE;
}

void Unk_ov004_0224a500::func_ov004_0220be90() {
    func_ov004_0220bf54(2);
}

BOOL Unk_ov004_0224a500::func_ov004_0220be9c() {
    return TRUE;
}

void Unk_ov004_0224a500::func_ov004_0220bea0() {
    if (p13::_ZN18Unk_ov004_02205c4419func_ov004_02205c6cEv(b13_f_73c)) {
        p13::func_0203d704(this, 0);
    }
}

BOOL Unk_ov004_0224a500::func_ov004_0220bec4() {
    return TRUE;
}

void Unk_ov004_0224a500::func_ov004_0220bec8() {
    static Unk_ov004_0220bec8_Fn tbl[4] = {
        &Unk_ov004_0224a500::func_ov004_0220bea0,
        &Unk_ov004_0224a500::func_ov004_0220be90,
        &Unk_ov004_0224a500::func_ov004_0220bdf0,
        &Unk_ov004_0224a500::func_ov004_0220bdbc,
    };
    if (unk_840 < 4) {
        (this->*tbl[unk_840])();
    }
}

BOOL Unk_ov004_0224a500::func_ov004_0220bf54(s32 idx) {
    static Unk_ov004_0224a500_Fn tbl[4] = {
        &Unk_ov004_0224a500::func_ov004_0220bec4,
        &Unk_ov004_0224a500::func_ov004_0220be9c,
        &Unk_ov004_0224a500::func_ov004_0220be14,
        &Unk_ov004_0224a500::func_ov004_0220bdec,
    };
    if (idx < 4) {
        if ((this->*tbl[idx])()) {
            unk_840 = idx;
            return TRUE;
        }
    }
    return FALSE;
}

void Unk_ov004_0224a500::vfunc_4c(u32 a, u8 b) {
    switch (a) {
    case 1:
        func_ov004_0220bf54(1);
        break;
    case 8:
        func_ov004_0220bf54(0);
        break;
    }
}

BOOL Unk_ov004_0224a500::vfunc_0c() {
    return TRUE;
}

BOOL Unk_ov004_0224a500::vfunc_80() {
    func_ov004_0220bec8();
    return TRUE;
}

BOOL Unk_ov004_0224a500::vfunc_7c() {
    return TRUE;
}

Unk_ov004_0224a500::~Unk_ov004_0224a500() {}

Unk_ov004_0224a500::Unk_ov004_0224a500() {}

extern "C" void func_ov004_0220c0a0() {
    new Unk_ov004_0224a500;
}

// ------------------------------------------------------------------ class D (vtable 0x0224a62c)
class Unk_ov004_0224a62c : public Unk_ov004_0224882c {
public:
    Unk_ov004_0224a62c();
    virtual ~Unk_ov004_0224a62c();
    virtual BOOL vfunc_0c();
    virtual void vfunc_6c(s32 a, void *b);
    virtual BOOL vfunc_7c();
    virtual BOOL vfunc_80();
    virtual void vfunc_98();
    virtual void vfunc_9c();

    /* 0x840 */ s16 unk_840;
    /* 0x842 */ volatile s16 unk_842;
    /* 0x844 */ volatile s16 unk_844;
    /* 0x846 */ s16 pad_846;
    /* 0x848 */ volatile s32 unk_848;
    /* 0x84c */ s32 unk_84c;
};

void Unk_ov004_0224a62c::vfunc_6c(s32 a, void *b) {
    Unk_ov004_0220c0bc_Obj *p = (Unk_ov004_0220c0bc_Obj *)b;
    if (unk_840 == a) {
        s32 *dst = &p->unk_b4->unk_28[0];
        s32 t = p13::func_01ffcb0c(p13::func_01ffc5a4(unk_84c, 0x168000), 0x10000000);
        s32 r = (t << 4) >> 16;
        s32 ang;
        Unk_ov004_0220c0bc_Actor *act = p13::func_ov004_022087b0(this);
        if (act) {
            s32 e = act->unk_8e;
            ang = (s16)(r - (e + p13::_ZN18Unk_ov004_02205e5819func_ov004_02205e78Ev(b13_f_178)));
        } else {
            ang = (s16)(r - *(s16 *)((u8 *)this + 0x8e));
        }
        s32 idx = ((u16)ang >> 4) * 2;
        Unk_ov004_0220c0bc_Mtx mtx;
        p13::func_01ffb4b4(&mtx, p13::data_02135f44[idx], p13::data_02135f44[idx + 1]);
        if (p->unk_b4->unk_00 & 2) {
            *(Unk_ov004_0220c0bc_Mtx *)dst = mtx;
        } else {
            p13::func_01ffb56c(dst, &mtx, dst);
        }
        p->unk_b4->unk_00 &= ~2;
    }
}

extern "C" void _ZN18Unk_ov004_0224a62c8vfunc_9cEv(Unk_ov004_0224a62c *self, BOOL v) {
    if (++self->unk_842 == 8) {
        self->unk_844 = 0;
        if (v) {
            self->unk_848 = p13::func_01ffcb0c(self->unk_848, p13::data_02135f44[((u16)self->unk_844 >> 4) * 2]) + 0x2d000;
            if (self->unk_848 > 0x2d000) self->unk_848 = 0x2d000;
        } else {
            self->unk_848 = p13::func_01ffcb0c(self->unk_848, p13::data_02135f44[((u16)self->unk_844 >> 4) * 2]) - 0x2d000;
            if (self->unk_848 < -0x2d000) self->unk_848 = -0x2d000;
        }
    }
}

void Unk_ov004_0224a62c::vfunc_98() {
    unk_842 = 0;
}

BOOL Unk_ov004_0224a62c::vfunc_0c() {
    return TRUE;
}

BOOL Unk_ov004_0224a62c::vfunc_80() {
    p13::func_020e761c((s32 *)&unk_848, 0, 0x5a00);
    if (unk_848 == 0) {
        unk_844 = 0;
    } else {
        unk_844 = unk_844 + 0x960;
    }
    p13::func_020e761c(&unk_84c, p13::func_01ffcb0c(unk_848, unk_844), 0x5a00);
    return TRUE;
}

BOOL Unk_ov004_0224a62c::vfunc_7c() {
    unk_840 = p13::_ZN12Unk_02056fd813func_02056fccEi(b13_unk_590, p13::data_ov004_0224bb80);
    return TRUE;
}

Unk_ov004_0224a62c::~Unk_ov004_0224a62c() {}

Unk_ov004_0224a62c::Unk_ov004_0224a62c() {
    unk_840 = -1;
}

extern "C" void func_ov004_0220c32c() {
    new Unk_ov004_0224a62c;
}

// ------------------------------------------------------------------ class F (vtable 0x0224a884)
class Unk_ov004_0224a884 : public Unk_ov004_0224882c {
public:
    Unk_ov004_0224a884();
    virtual ~Unk_ov004_0224a884();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_7c();
    virtual BOOL vfunc_80();

    /* 0x840 */ s32 unk_840;
    /* 0x844 */ u32 unk_844[0x40 / 4];
    /* 0x884 */ u8 unk_884;
};

BOOL Unk_ov004_0224a884::vfunc_0c() {
    if (unk_884) {
        p13::_ZN12Unk_02003c3013func_02003e50Ev(&unk_844);
    }
    return TRUE;
}

BOOL Unk_ov004_0224a884::vfunc_80() {
    if (unk_884) {
        Unk_ov004_0220bc80_V3 v = b13_unk_7b4;
        if (p13::_ZN12Unk_020718a413func_02071834Ei(p13::func_020716cc(), unk_840)) {
            p13::func_02003e70(&unk_844, 0x50, 0x7f, 0);
        }
        p13::_ZN12Unk_02003c4013func_02003e80EP16Unk_02003a6c_Vec(&unk_844, &v);
    }
    return TRUE;
}

BOOL Unk_ov004_0224a884::vfunc_7c() {
    volatile u16 va[2];
    va[0] = p13::func_0204b248(p13::func_ov004_022087a4(this), 0);
    unk_840 = 0;
    BOOL r = FALSE;
    u32 t = va[0];
    if (t >= 0x3e04 && t <= 0x3e23) r = TRUE;
    if (r) {
        s32 x;
        if (t >= 0x3e04 && t <= 0x3e23) {
            x = (s32)(t - 0x3e04) >> 2;
        } else {
            x = -1;
        }
        unk_840 = x & 7;
        u32 o = p13::func_020716cc();
        u32 q = p13::_ZN12Unk_020718a413func_020716e0Ei(o, (u8)unk_840);
        if (q != 0) {
            p13::func_02056744(b13_unk_590, p13::data_ov004_0224bb88, q, 0, 0);
            if (unk_884 == 0) {
                p13::_ZN12Unk_02003c3013func_02003eccEv(&unk_844);
                unk_884 = 1;
            }
            return TRUE;
        }
    }
    return FALSE;
}

// ---- part 14: from unk_0220c47c.cpp
namespace p14 {
extern "C" {
u32 func_ov004_02208968(void *self);
u32 func_ov004_022087a4(void *self);
}
}

// Shared parent of the three/four classes below; slots 0x64/0x6c/0x70/0x74 take parameters in the overrides here.

struct Unk_ov004_0220cca4_Vec {
    s32 x, y, z;
};

struct Unk_ov004_0220cca4_Src {
    /* 0x00 */ u8 pad_00[0x4c];
    /* 0x4c */ Unk_ov004_0220cca4_Vec unk_4c;
};

struct Unk_ov004_0220cca4_Arg {
    /* 0x00 */ u8 pad_00[0xb4];
    /* 0xb4 */ Unk_ov004_0220cca4_Src *unk_b4;
};

struct Unk_ov004_0220cca4_Copy {
    s64 v[6];
};

namespace p14 {
extern "C" {
void _ZN12Unk_0203398c13func_020339bcEP16Unk_0203389c_Vecii(void *, void *, s32, s32);
}
}
namespace p14 {
extern "C" {
void func_02033988(void *);
}
}
namespace p14 {
extern "C" {
s32 _ZN12Unk_0203389c13func_02033914Ei(void *, s32);
}
}

struct Unk_ov004_0220c534_Arg {
    /* 0x00 */ u8 pad_00[0xb8];
    /* 0xb8 */ s32 *unk_b8;
};

// vtable 0x0224a884, size 0x888

// vtable 0x0224a9b0, size 0x844
class Unk_ov004_0224a9b0 : public Unk_ov004_0224882c {
public:
    Unk_ov004_0224a9b0();
    virtual ~Unk_ov004_0224a9b0();

    virtual BOOL vfunc_0c();
    virtual void vfunc_64(s32 a, Unk_ov004_02206ec8_Ctx *b);
    virtual BOOL vfunc_7c();
    virtual BOOL vfunc_80();

    /* 0x840 */ s32 unk_840;
};

// vtable 0x0224ad34, size 0x874
class Unk_ov004_0224ad34 : public Unk_ov004_0224882c {
public:
    Unk_ov004_0224ad34();
    virtual ~Unk_ov004_0224ad34();

    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_70(u32 a, u8 b);
    virtual u8 vfunc_74(u32 a);
    virtual BOOL vfunc_7c();
    virtual BOOL vfunc_80();
    virtual BOOL vfunc_8c();

    BOOL func_ov004_0220c734();
    BOOL func_ov004_0220c748();
    BOOL func_ov004_0220c7d4();
    BOOL func_ov004_0220c7e8();
    void func_ov004_0220c838();
    s32 func_ov004_0220c93c();
    s32 func_ov004_0220c950();

    /* 0x840 */ s32 unk_840;
    /* 0x844 */ u8 f_844[0x28];
    /* 0x86c */ u8 unk_86c;
    /* 0x86d */ u8 unk_86d;
    /* 0x86e */ u8 pad_86e;
    /* 0x86f */ u8 unk_86f;
    /* 0x870 */ u8 unk_870;
    /* 0x871 */ u8 pad_871[3];
};

// vtable 0x0224ae60
class Unk_ov004_0224ae60 : public Unk_ov004_0224882c {
public:
    Unk_ov004_0224ae60();
    virtual ~Unk_ov004_0224ae60();
    virtual BOOL vfunc_0c();
    virtual void vfunc_6c(s32 a, void *b);
    virtual BOOL vfunc_70(u32 a, u8 b);
    virtual BOOL vfunc_7c();
    virtual BOOL vfunc_80();
    virtual void vfunc_90();

    BOOL func_ov004_0220caf0();
    BOOL func_ov004_0220cb24();
    BOOL func_ov004_0220cb5c();
    BOOL func_ov004_0220cb84();
    void func_ov004_0220cbb4();

    /* 0x840 */ u8 unk_840;
};

namespace p14 {
extern "C" {
extern u8 data_ov004_0224bb88[];
extern u8 data_ov004_0224bb8c[];
extern u8 data_ov004_0224bb90[];
extern u8 data_ov004_0224bb94[];
extern u8 data_ov004_0224002c[];
extern u8 data_021f47e0[];

void func_020f43fc(void *);
void func_020f440c(void *);
void _ZN12Unk_020e45e0C1Ev(void *);
s32 _ZN18Unk_ov004_0224882cnwEm(u32);
u16 func_0204b248(u32, s32);
u32 _ZN12Unk_02056fd813func_02056fccEi(u32, void *);
s32 func_020974a0(s32);
s32 _ZN12Unk_0209865c13func_0209888cEv(...);
s32 _ZN12Unk_020940a013func_0209411cEv();
void *func_020716cc();
s32 _ZN12Unk_020718a413func_020716e8Eii(void *, u8, u8);
s32 func_02056744(u32, void *, s32, s32, s32);
BOOL _ZN18Unk_ov004_02205c4419func_ov004_02205c44Eji(void *, s32, s32);
void *_ZN18Unk_ov004_022069ec19func_ov004_02206be4Ev(void *);
s32 _ZN18Unk_ov004_0220639819func_ov004_02206380Ev(void *);
s32 _ZN12Unk_02056fd813func_02057100Ei(s32, void *);
s32 _ZN12Unk_02056fd813func_02057078Ei(s32, void *);
s32 _ZN12Unk_020e45e013func_020b8840EPvjS0_jj(void *, u32, void *, s32, s32, s32);
s32 func_0203c6c8(s32);
s32 func_02051cc8(void *, s32, s32, s32);
s32 func_02051da4(void *, s32, s32, s32);
void func_02061478(u16 *, u16 *);
s32 _ZN12Unk_0209c2f413func_0209c348Ev();
void *func_020e8608(s32, s32);
void func_0203c764(s32, u16 *, s32);
BOOL _ZN18Unk_ov004_02205c4419func_ov004_02205c7cEv(void *);
void _ZN12Unk_020e45e0C1Ev(void *);
void _ZN12Unk_0205454c13func_0205439cEv(void *);
BOOL _ZN12Unk_020dbe7c13func_02056654Ev(void *);
void _ZN18Unk_ov004_0220599419func_ov004_022059b0Ej(void *, s32);
BOOL _ZN18Unk_ov004_02205c4419func_ov004_02205c6cEv(void *);
BOOL _ZN18Unk_ov004_0220599419func_ov004_02205998Ei(void *);
void func_01ffb898(void *, void *, void *);
void _ZN12Unk_0203398c13func_020339bcEP16Unk_0203389c_Vecii(void *, void *, s32, s32);
s32 _ZN12Unk_0203389c13func_02033914Ei(void *, s32);
void func_02033988(void *);
}
}

static inline BOOL Unk_ov004_0220c554_InRange(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    u32 v = *p;
    if (v >= lo && v <= hi) r = TRUE;
    return r;
}

static inline BOOL Unk_ov004_0220c554_R(u32 v, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (v >= lo && v <= hi) r = TRUE;
    return r;
}

static inline s32 Unk_ov004_0220c554_Idx(u32 v, u32 lo, u32 hi) {
    if (v >= lo && v <= hi) {
        return (s32)(v - lo) >> 2;
    }
    return -1;
}

// ---- A ----
Unk_ov004_0224a884::~Unk_ov004_0224a884() {
    p14::func_020f43fc(unk_844);
}

Unk_ov004_0224a884::Unk_ov004_0224a884() {
    p14::func_020f440c(unk_844);
}

extern "C" Unk_ov004_0224a884 *func_ov004_0220c518() {
    return new Unk_ov004_0224a884;
}

// ---- B ----
void Unk_ov004_0224a9b0::vfunc_64(s32 a, Unk_ov004_02206ec8_Ctx *b) {
    if (a == unk_840) {
        *((Unk_ov004_0220c534_Arg *)b)->unk_b8 = 0;
    }
}

BOOL Unk_ov004_0224a9b0::vfunc_0c() {
    return TRUE;
}

BOOL Unk_ov004_0224a9b0::vfunc_80() {
    return TRUE;
}

BOOL Unk_ov004_0224a9b0::vfunc_7c() {
    volatile u16 v;
    s32 t;
    s32 hi;
    v = p14::func_0204b248(p14::func_ov004_022087a4(this), 0);
    BOOL f = FALSE;
    t = -1;
    unk_840 = t;
    u32 x = v;
    if (x >= 0x3d84 && x <= 0x3e03) f = TRUE;
    if (f) {
        if (x >= 0x3d84 && x <= 0x3e03) {
            t = (s32)(x - 0x3d84) >> 2;
        } else {
            t = -1;
        }
    } else if (x >= 0x3ea4 && x <= 0x3f23) {
        t = Unk_ov004_0220c554_Idx(x, 0x3ea4, 0x3f23);
    } else if (x >= 0x4224 && x <= 0x42a3) {
        t = Unk_ov004_0220c554_Idx(x, 0x4224, 0x42a3);
    } else if (x >= 0x3f24 && x <= 0x3fa3) {
        t = Unk_ov004_0220c554_Idx(x, 0x3f24, 0x3fa3);
    }
    if (t == -1) t = 0;
    hi = (t >> 3) & 3;
    s32 lo = t & 7;
    if (p14::func_020974a0(hi)) {
        p14::_ZN12Unk_0209865c13func_0209888cEv();
        if (p14::_ZN12Unk_020940a013func_0209411cEv() == 0) {
            unk_840 = p14::_ZN12Unk_02056fd813func_02056fccEi(b14_unk_590, p14::data_ov004_0224bb8c);
        } else {
            unk_840 = p14::_ZN12Unk_02056fd813func_02056fccEi(b14_unk_590, p14::data_ov004_0224bb90);
        }
    }
    u32 o = b14_unk_590;
    p14::func_02056744(o, p14::data_ov004_0224bb88, p14::_ZN12Unk_020718a413func_020716e8Eii(p14::func_020716cc(), hi, lo), 0, 0);
    return TRUE;
}

Unk_ov004_0224a9b0::~Unk_ov004_0224a9b0() {
}

Unk_ov004_0224a9b0::Unk_ov004_0224a9b0() {
}

extern "C" Unk_ov004_0224a9b0 *func_ov004_0220c718() {
    return new Unk_ov004_0224a9b0;
}

// ---- C ----
BOOL Unk_ov004_0224ad34::func_ov004_0220c734() {
    return p14::_ZN18Unk_ov004_02205c4419func_ov004_02205c44Eji(b14_f_73c, 0, 0);
}

BOOL Unk_ov004_0224ad34::func_ov004_0220c748() {
    s32 a, b;
    u32 c;
    s32 d;
    p14::_ZN18Unk_ov004_02205c4419func_ov004_02205c44Eji(b14_f_73c, 0, 0);
    a = p14::_ZN12Unk_02056fd813func_02057100Ei(p14::_ZN18Unk_ov004_0220639819func_ov004_02206380Ev(p14::_ZN18Unk_ov004_022069ec19func_ov004_02206be4Ev(b14_f_6c8)), p14::data_ov004_0224bb94);
    b = p14::_ZN12Unk_02056fd813func_02057078Ei(p14::_ZN18Unk_ov004_0220639819func_ov004_02206380Ev(p14::_ZN18Unk_ov004_022069ec19func_ov004_02206be4Ev(b14_f_6c8)), p14::data_ov004_0224bb94);
    c = b14_unk_590;
    d = p14::_ZN18Unk_ov004_0220639819func_ov004_02206380Ev(p14::_ZN18Unk_ov004_022069ec19func_ov004_02206be4Ev(b14_f_6c8));
    if (p14::_ZN12Unk_020e45e013func_020b8840EPvjS0_jj(f_844, c, p14::data_ov004_0224bb88, d, a, b)) {
        unk_86c = 0;
    }
    return TRUE;
}

BOOL Unk_ov004_0224ad34::func_ov004_0220c7d4() {
    return p14::_ZN18Unk_ov004_02205c4419func_ov004_02205c44Eji(b14_f_73c, 1, 0);
}

BOOL Unk_ov004_0224ad34::func_ov004_0220c7e8() {
    p14::_ZN18Unk_ov004_02205c4419func_ov004_02205c44Eji(b14_f_73c, 1, 0);
    u32 o = b14_unk_590;
    p14::_ZN12Unk_020e45e013func_020b8840EPvjS0_jj(f_844, o, p14::data_ov004_0224bb88, p14::func_0203c6c8(unk_840), 0, 0);
    return TRUE;
}

typedef BOOL (Unk_ov004_0224ad34::*Unk_ov004_0224ad34_Fn)();

void Unk_ov004_0224ad34::func_ov004_0220c838() {
    static Unk_ov004_0224ad34_Fn tbl[2] = { &Unk_ov004_0224ad34::func_ov004_0220c7d4, &Unk_ov004_0224ad34::func_ov004_0220c734 };
    u32 i = unk_870;
    if (i < 2) {
        (this->*tbl[i])();
    }
}

BOOL Unk_ov004_0224ad34::vfunc_70(u32 a, u8 b) {
    Unk_ov004_0224882c::vfunc_70(a, b);
    static Unk_ov004_0224ad34_Fn tbl[2] = { &Unk_ov004_0224ad34::func_ov004_0220c7e8, &Unk_ov004_0224ad34::func_ov004_0220c748 };
    if (a < 2) {
        if ((this->*tbl[a])()) {
            unk_870 = a;
            return TRUE;
        }
    }
    return FALSE;
}

u8 Unk_ov004_0224ad34::vfunc_74(u32 a) {
    if (a < 2) {
        return p14::data_ov004_0224002c[a];
    }
    return 0;
}

s32 Unk_ov004_0224ad34::func_ov004_0220c93c() {
    return p14::func_02051cc8(this, 0, 0xff, 1);
}

s32 Unk_ov004_0224ad34::func_ov004_0220c950() {
    return p14::func_02051cc8(this, 1, 0xff, 1);
}

BOOL Unk_ov004_0224ad34::vfunc_8c() {
    return 1;
}

BOOL Unk_ov004_0224ad34::vfunc_0c() {
    return TRUE;
}

BOOL Unk_ov004_0224ad34::vfunc_80() {
    func_ov004_0220c838();
    return TRUE;
}

BOOL Unk_ov004_0224ad34::vfunc_7c() {
    u16 v, w;
    unk_86f = 1;
    v = p14::func_0204b248(p14::func_ov004_022087a4(this), 0);
    BOOL r = FALSE;
    if (v >= 0x3984 && v <= 0x3d83) r = TRUE;
    if (r) {
        p14::func_02061478(&w, &v);
        p14::func_ov004_02208968(this);
        unk_840 = (s32)p14::func_020e8608(p14::_ZN12Unk_0209c2f413func_0209c348Ev(), 0x2c4);
        p14::func_0203c764(unk_840, &w, 0);
        if (p14::_ZN18Unk_ov004_02205c4419func_ov004_02205c7cEv(b14_f_73c)) {
            vfunc_70(0, 0xff);
        } else {
            vfunc_70(1, 0xff);
        }
    }
    vfunc_70(0, 0xff);
    unk_86f = 0;
    return TRUE;
}

Unk_ov004_0224ad34::~Unk_ov004_0224ad34() {
}

Unk_ov004_0224ad34::Unk_ov004_0224ad34() {
    p14::_ZN12Unk_020e45e0C1Ev(f_844);
    unk_840 = 0;
    unk_86c = unk_86d = 0;
}

extern "C" Unk_ov004_0224ad34 *func_ov004_0220cad4() {
    return new Unk_ov004_0224ad34;
}

// ---- D ----
BOOL Unk_ov004_0224ae60::func_ov004_0220caf0() {
    p14::_ZN12Unk_0205454c13func_0205439cEv(b14_f_534);
    BOOL r = p14::_ZN12Unk_020dbe7c13func_02056654Ev(b14_f_5d0);
    if (r) {
        return p14::func_02051da4(this, 0, 0xff, 1);
    }
    return r;
}

BOOL Unk_ov004_0224ae60::func_ov004_0220cb24() {
    p14::_ZN18Unk_ov004_0220599419func_ov004_022059b0Ej(b14_f_760, 1);
    func_ov004_02208ba8(0, 1, 0x1000, 0);
    func_ov004_02209150();
    return TRUE;
}

BOOL Unk_ov004_0224ae60::func_ov004_0220cb5c() {
    BOOL r = p14::_ZN18Unk_ov004_02205c4419func_ov004_02205c6cEv(b14_f_73c);
    if (r) {
        return p14::func_02051da4(this, 1, 0xff, 1);
    }
    return r;
}

BOOL Unk_ov004_0224ae60::func_ov004_0220cb84() {
    p14::_ZN18Unk_ov004_0220599419func_ov004_022059b0Ej(b14_f_760, 0);
    func_ov004_02208ba8(0, 1, 0x1000, 0);
    return TRUE;
}

typedef BOOL (Unk_ov004_0224ae60::*Unk_ov004_0224ae60_Fn)();

void Unk_ov004_0224ae60::func_ov004_0220cbb4() {
    static Unk_ov004_0224ae60_Fn tbl[2] = { &Unk_ov004_0224ae60::func_ov004_0220cb5c, &Unk_ov004_0224ae60::func_ov004_0220caf0 };
    u32 i = unk_840;
    if (i < 2) {
        (this->*tbl[i])();
    }
}

BOOL Unk_ov004_0224ae60::vfunc_70(u32 a, u8 b) {
    Unk_ov004_0224882c::vfunc_70(a, b);
    static Unk_ov004_0224ae60_Fn tbl[2] = { &Unk_ov004_0224ae60::func_ov004_0220cb84, &Unk_ov004_0224ae60::func_ov004_0220cb24 };
    if (a < 2) {
        if ((this->*tbl[a])()) {
            unk_840 = a;
            return TRUE;
        }
    }
    return FALSE;
}

void Unk_ov004_0224ae60::vfunc_6c(s32 a, void *b) {
    Unk_ov004_0220cca4_Vec v;
    Unk_ov004_0220cca4_Vec o;
    if (p14::_ZN18Unk_ov004_0220599419func_ov004_02205998Ei(b14_f_760) && unk_840 == 1) {
        Unk_ov004_0220cca4_Vec *pv = &((Unk_ov004_0220cca4_Arg *)b)->unk_b4->unk_4c;
        v.x = pv->x;
        v.y = pv->y;
        v.z = pv->z;
        *(Unk_ov004_0220cca4_Copy *)p14::data_021f47e0 = *(Unk_ov004_0220cca4_Copy *)b14_f_598;
        p14::func_01ffb898(&v, p14::data_021f47e0, &o);
        u8 obj[0x44];
        p14::_ZN12Unk_0203398c13func_020339bcEP16Unk_0203389c_Vecii(obj, &o, 0, 0);
        if (p14::_ZN12Unk_0203389c13func_02033914Ei(obj, 0) > 0) {
            p14::func_02051da4(this, 0, 0xff, 1);
        }
        p14::func_02033988(obj);
    }
}

void Unk_ov004_0224ae60::vfunc_90() {
    func_ov004_02208ba8(0, 1, 0x1000, 0);
}

BOOL Unk_ov004_0224ae60::vfunc_0c() {
    p14::_ZN18Unk_ov004_02205c4419func_ov004_02205c44Eji(b14_f_73c, 0, 0);
    return TRUE;
}

BOOL Unk_ov004_0224ae60::vfunc_80() {
    func_ov004_0220cbb4();
    return TRUE;
}

// ---- part 15: from unk_0220cd7c.cpp
namespace p15 {
extern "C" {
u32 func_ov004_02208968(void *self);
u32 func_ov004_02208750(void *self);
}
}

struct Unk_ov004_02208ba8_Rec {
    /* 0x00 */ u32 unk_00;
    /* 0x04 */ u16 unk_04;
};

class Unk_ov004_0224b1e4 : public Unk_ov004_0224882c {
public:
    Unk_ov004_0224b1e4();
    virtual ~Unk_ov004_0224b1e4();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_70(u32 a, u8 b);
    virtual u8 vfunc_74(u32 a);
    virtual BOOL vfunc_7c();
    virtual BOOL vfunc_80();

    void func_ov004_0220ce38();
    BOOL func_ov004_0220cea4();
    void func_ov004_0220cf2c();
    BOOL func_ov004_0220cf5c();
    void func_ov004_0220cfd4();
    BOOL func_ov004_0220d044();
    void func_ov004_0220d0c8();
    BOOL func_ov004_0220d0f0();
    void func_ov004_0220d160();

    /* 0x840 */ u8 unk_840;
    /* 0x841 */ u8 pad_841[3];
};

namespace p15 {
extern "C" {
extern u8 data_ov004_02240058[];

BOOL _ZN18Unk_ov004_02205c4419func_ov004_02205c44Eji(void *, s32, s32);
BOOL _ZN18Unk_ov004_02205c4419func_ov004_02205c6cEv(void *);
BOOL _ZN18Unk_ov004_02205c4419func_ov004_02205c7cEv(void *);
BOOL _ZN18Unk_ov004_0224880419func_ov004_02206e74Ev(void *);
void *_ZN18Unk_ov004_022069ec19func_ov004_02206be4Ev(void *);
Unk_ov004_02208ba8_Rec *_ZN18Unk_ov004_0220639819func_ov004_022063b0Ej(void *, u32);
Unk_ov004_02208ba8_Rec *_ZN18Unk_ov004_0220639819func_ov004_022063bcEj(void *, u32);
Unk_ov004_02208ba8_Rec *_ZN18Unk_ov004_0220639819func_ov004_022063a4Ej(void *, u32);
Unk_ov004_02208ba8_Rec *_ZN18Unk_ov004_0220639819func_ov004_02206398Ej(void *, u32);
Unk_ov004_02208ba8_Rec *_ZN18Unk_ov004_0220639819func_ov004_022063c8Ej(void *, u32);
void *_ZN18Unk_ov004_022069ec19func_ov004_02206a14Ev(void *);
BOOL func_ov004_02234ad4(void);

void *_ZN12Unk_020dbe3413func_020554c0Ev(void *);
void _ZN12Unk_020dbe4c13func_02055b00Eiiiit(void *, void *, void *, s32, s32, u32);
void _ZN12Unk_020dbe4c13func_02055b38Eiiit(void *, void *, s32, s32, s32);
void _ZN12Unk_020dbe4c13func_02055ae4Eiiiit(void *, void *, void *, s32, s32, s32);
void _ZN12Unk_020dbe4c13func_02055a9cEj(void *, void *);
BOOL _ZN12Unk_020dbe4c13func_02055b90EjPv(void *, u32, u32);
BOOL _ZN12Unk_020dbe4c13func_02055bccEjPv(void *, u32, u32);
void _ZN12Unk_020dbe7c13func_020566bcEv(void *);
BOOL _ZN12Unk_020dbe7c13func_02056654Ev(void *);
void func_02051cc8(void *, s32, s32, s32);
BOOL _ZN12Unk_0205454c13func_02054584Ev(void *);
void _ZN12Unk_0205454c13func_0205439cEv(void *);
void _ZN12Unk_0205454c13func_02054720Eiiitt(void *, void *, s32, s32, s32, s32);
void _ZN12Unk_020dbd5413func_02054710Ev(void *);
BOOL _ZN12Unk_020dbd5413func_02054800EPv(void *, u32);
u32 _ZN12Unk_0209c2f413func_0209c348Ev(u32);
u32 func_020b50e8(void);
void func_020515b8(u32, void *, u32);
}
}

BOOL Unk_ov004_0224ae60::vfunc_7c() {
    func_ov004_02208de0(0, 1, 0x1000, 0);
    vfunc_70(0, 0xff);
    return TRUE;
}

Unk_ov004_0224ae60::~Unk_ov004_0224ae60() {
}

Unk_ov004_0224ae60::Unk_ov004_0224ae60() {
}

extern "C" void func_ov004_0220ce1c() {
    new Unk_ov004_0224ae60;
}

void Unk_ov004_0224b1e4::func_ov004_0220ce38() {
    p15::_ZN18Unk_ov004_02205c4419func_ov004_02205c44Eji(b15_f_73c, 0, 0);
    if (p15::_ZN18Unk_ov004_0224880419func_ov004_02206e74Ev(&b15_unk_7c0[0])) {
        p15::_ZN12Unk_020dbe7c13func_020566bcEv(&b15_unk_7c0[0]);
        *b15_unk_7c0[0].unk_18 = b15_unk_7c0[0].unk_08;
        if (p15::_ZN12Unk_020dbe7c13func_02056654Ev(&b15_unk_7c0[0])) {
            vfunc_70(0, 0xff);
        }
    } else {
        vfunc_70(0, 0xff);
    }
}

BOOL Unk_ov004_0224b1e4::func_ov004_0220cea4() {
    p15::_ZN18Unk_ov004_02205c4419func_ov004_02205c44Eji(b15_f_73c, 0, 0);
    if (p15::_ZN18Unk_ov004_0220639819func_ov004_022063bcEj(p15::_ZN18Unk_ov004_022069ec19func_ov004_02206be4Ev(b15_f_6c8), 0) != NULL) {
        Unk_ov004_02208ba8_Rec *r = p15::_ZN18Unk_ov004_0220639819func_ov004_022063bcEj(p15::_ZN18Unk_ov004_022069ec19func_ov004_02206be4Ev(b15_f_6c8), 0);
        if (p15::_ZN18Unk_ov004_0224880419func_ov004_02206e74Ev(&b15_unk_7c0[0])) {
            p15::_ZN12Unk_020dbe4c13func_02055b00Eiiiit(&b15_unk_7c0[0], p15::_ZN12Unk_020dbe3413func_020554c0Ev(b15_f_534), r, 3, 0x1000, (u16)(r->unk_04 - 1));
        }
    }
    func_ov004_02209108();
    return TRUE;
}

void Unk_ov004_0224b1e4::func_ov004_0220cf2c() {
    func_ov004_022091e0();
    func_ov004_02209198();
    if (p15::_ZN18Unk_ov004_02205c4419func_ov004_02205c6cEv(b15_f_73c)) {
        p15::func_02051cc8(this, 3, 0xff, 1);
    }
}

BOOL Unk_ov004_0224b1e4::func_ov004_0220cf5c() {
    p15::_ZN18Unk_ov004_02205c4419func_ov004_02205c44Eji(b15_f_73c, 1, 0);
    if (p15::_ZN18Unk_ov004_0220639819func_ov004_022063bcEj(p15::_ZN18Unk_ov004_022069ec19func_ov004_02206be4Ev(b15_f_6c8), 0) != NULL) {
        Unk_ov004_02208ba8_Rec *r = p15::_ZN18Unk_ov004_0220639819func_ov004_022063bcEj(p15::_ZN18Unk_ov004_022069ec19func_ov004_02206be4Ev(b15_f_6c8), 0);
        p15::_ZN12Unk_020dbe4c13func_02055b00Eiiiit(&b15_unk_7c0[0], p15::_ZN12Unk_020dbe3413func_020554c0Ev(b15_f_534), r, 1, 0x1000, (u16)(r->unk_04 - 1));
    }
    return TRUE;
}

void Unk_ov004_0224b1e4::func_ov004_0220cfd4() {
    p15::_ZN18Unk_ov004_02205c4419func_ov004_02205c44Eji(b15_f_73c, 1, 0);
    func_ov004_02209198();
    if (p15::_ZN18Unk_ov004_0224880419func_ov004_02206e74Ev(&b15_unk_7c0[0])) {
        p15::_ZN12Unk_020dbe7c13func_020566bcEv(&b15_unk_7c0[0]);
        *b15_unk_7c0[0].unk_18 = b15_unk_7c0[0].unk_08;
        if (p15::_ZN12Unk_020dbe7c13func_02056654Ev(&b15_unk_7c0[0])) {
            vfunc_70(2, 0xff);
        }
    } else {
        vfunc_70(2, 0xff);
    }
}

BOOL Unk_ov004_0224b1e4::func_ov004_0220d044() {
    p15::_ZN18Unk_ov004_02205c4419func_ov004_02205c44Eji(b15_f_73c, 1, 0);
    if (p15::_ZN18Unk_ov004_0220639819func_ov004_022063bcEj(p15::_ZN18Unk_ov004_022069ec19func_ov004_02206be4Ev(b15_f_6c8), 0) != NULL) {
        Unk_ov004_02208ba8_Rec *r = p15::_ZN18Unk_ov004_0220639819func_ov004_022063bcEj(p15::_ZN18Unk_ov004_022069ec19func_ov004_02206be4Ev(b15_f_6c8), 0);
        if (p15::_ZN18Unk_ov004_0224880419func_ov004_02206e74Ev(&b15_unk_7c0[0])) {
            p15::_ZN12Unk_020dbe4c13func_02055b00Eiiiit(&b15_unk_7c0[0], p15::_ZN12Unk_020dbe3413func_020554c0Ev(b15_f_534), r, 1, 0x1000, 0);
        }
    }
    func_ov004_02209150();
    return TRUE;
}

void Unk_ov004_0224b1e4::func_ov004_0220d0c8() {
    if (p15::_ZN18Unk_ov004_02205c4419func_ov004_02205c6cEv(b15_f_73c)) {
        p15::func_02051cc8(this, 1, 0xff, 1);
    }
}

BOOL Unk_ov004_0224b1e4::func_ov004_0220d0f0() {
    p15::_ZN18Unk_ov004_02205c4419func_ov004_02205c44Eji(b15_f_73c, 0, 0);
    if (p15::_ZN18Unk_ov004_0220639819func_ov004_022063bcEj(p15::_ZN18Unk_ov004_022069ec19func_ov004_02206be4Ev(b15_f_6c8), 0) != NULL) {
        Unk_ov004_02208ba8_Rec *r = p15::_ZN18Unk_ov004_0220639819func_ov004_022063bcEj(p15::_ZN18Unk_ov004_022069ec19func_ov004_02206be4Ev(b15_f_6c8), 0);
        p15::_ZN12Unk_020dbe4c13func_02055b00Eiiiit(&b15_unk_7c0[0], p15::_ZN12Unk_020dbe3413func_020554c0Ev(b15_f_534), r, 3, 0x1000, 0);
    }
    return TRUE;
}

void Unk_ov004_0224b1e4::func_ov004_0220d160() {
    typedef void (Unk_ov004_0224b1e4::*Fn)();
    static Fn tbl[4] = {
        &Unk_ov004_0224b1e4::func_ov004_0220d0c8,
        &Unk_ov004_0224b1e4::func_ov004_0220cfd4,
        &Unk_ov004_0224b1e4::func_ov004_0220cf2c,
        &Unk_ov004_0224b1e4::func_ov004_0220ce38,
    };
    u32 i = unk_840;
    if (i < 4) {
        (this->*tbl[i])();
    }
}

BOOL Unk_ov004_0224b1e4::vfunc_70(u32 a, u8 b) {
    typedef BOOL (Unk_ov004_0224b1e4::*Fn)();
    Unk_ov004_0224882c::vfunc_70(a, b);
    static Fn tbl[4] = {
        &Unk_ov004_0224b1e4::func_ov004_0220d0f0,
        &Unk_ov004_0224b1e4::func_ov004_0220d044,
        &Unk_ov004_0224b1e4::func_ov004_0220cf5c,
        &Unk_ov004_0224b1e4::func_ov004_0220cea4,
    };
    if ((u32)a < 4) {
        if ((this->*tbl[a])()) {
            unk_840 = a;
            return TRUE;
        }
    }
    return FALSE;
}

u8 Unk_ov004_0224b1e4::vfunc_74(u32 a) {
    if (a < 4) {
        return p15::data_ov004_02240058[a];
    }
    return 0;
}

BOOL Unk_ov004_0224b1e4::vfunc_0c() {
    return TRUE;
}

BOOL Unk_ov004_0224b1e4::vfunc_80() {
    func_ov004_0220d160();
    if (p15::_ZN12Unk_0205454c13func_02054584Ev(b15_f_534)) {
        p15::_ZN12Unk_0205454c13func_0205439cEv(b15_f_534);
    }
    if (p15::_ZN18Unk_ov004_0224880419func_ov004_02206e74Ev(&b15_unk_7c0[1])) {
        p15::_ZN12Unk_020dbe7c13func_020566bcEv(&b15_unk_7c0[1]);
        *b15_unk_7c0[1].unk_18 = b15_unk_7c0[1].unk_08;
    }
    if (p15::_ZN18Unk_ov004_0224880419func_ov004_02206e74Ev(&b15_unk_7c0[2])) {
        p15::_ZN12Unk_020dbe7c13func_020566bcEv(&b15_unk_7c0[2]);
        *b15_unk_7c0[2].unk_18 = b15_unk_7c0[2].unk_08;
    }
    if (p15::_ZN18Unk_ov004_0224880419func_ov004_02206e74Ev(&b15_unk_7c0[3])) {
        p15::_ZN12Unk_020dbe7c13func_020566bcEv(&b15_unk_7c0[3]);
        *b15_unk_7c0[3].unk_18 = b15_unk_7c0[3].unk_08;
    }
    return TRUE;
}

BOOL Unk_ov004_0224b1e4::vfunc_7c() {
    u32 r4 = p15::func_ov004_02208968(this);
    if (p15::_ZN18Unk_ov004_0220639819func_ov004_022063b0Ej(p15::_ZN18Unk_ov004_022069ec19func_ov004_02206be4Ev(b15_f_6c8), 0) != NULL) {
        u32 t = b15_unk_590;
        if (p15::_ZN12Unk_020dbe4c13func_02055b90EjPv(&b15_unk_7c0[3], t, p15::_ZN12Unk_0209c2f413func_0209c348Ev(r4))) {
            p15::_ZN12Unk_020dbe4c13func_02055b38Eiiit(&b15_unk_7c0[3], p15::_ZN18Unk_ov004_0220639819func_ov004_022063b0Ej(p15::_ZN18Unk_ov004_022069ec19func_ov004_02206be4Ev(b15_f_6c8), 0), 0, 0x1000, 0);
            p15::_ZN12Unk_020dbe4c13func_02055a9cEj(&b15_unk_7c0[3], p15::_ZN12Unk_020dbe3413func_020554c0Ev(b15_f_534));
        }
    }
    if (p15::_ZN18Unk_ov004_0220639819func_ov004_022063a4Ej(p15::_ZN18Unk_ov004_022069ec19func_ov004_02206be4Ev(b15_f_6c8), 0) != NULL) {
        u32 t = b15_unk_590;
        if (p15::_ZN12Unk_020dbe4c13func_02055bccEjPv(&b15_unk_7c0[1], t, p15::_ZN12Unk_0209c2f413func_0209c348Ev(r4))) {
            p15::_ZN12Unk_020dbe4c13func_02055b38Eiiit(&b15_unk_7c0[1], p15::_ZN18Unk_ov004_0220639819func_ov004_022063a4Ej(p15::_ZN18Unk_ov004_022069ec19func_ov004_02206be4Ev(b15_f_6c8), 0), 0, 0x1000, 0);
            p15::_ZN12Unk_020dbe4c13func_02055a9cEj(&b15_unk_7c0[1], p15::_ZN12Unk_020dbe3413func_020554c0Ev(b15_f_534));
        }
    }
    if (p15::_ZN18Unk_ov004_0220639819func_ov004_022063c8Ej(p15::_ZN18Unk_ov004_022069ec19func_ov004_02206be4Ev(b15_f_6c8), 0) != NULL) {
        if (p15::_ZN12Unk_020dbd5413func_02054800EPv(b15_f_534, p15::_ZN12Unk_0209c2f413func_0209c348Ev(r4))) {
            p15::_ZN12Unk_0205454c13func_02054720Eiiitt(b15_f_534, p15::_ZN18Unk_ov004_0220639819func_ov004_022063c8Ej(p15::_ZN18Unk_ov004_022069ec19func_ov004_02206be4Ev(b15_f_6c8), 0), 0, 0x1000, 0, 0);
            p15::_ZN12Unk_020dbd5413func_02054710Ev(b15_f_534);
        }
    }
    if (p15::_ZN18Unk_ov004_0220639819func_ov004_02206398Ej(p15::_ZN18Unk_ov004_022069ec19func_ov004_02206be4Ev(b15_f_6c8), 0) != NULL) {
        u32 t = b15_unk_590;
        if (p15::_ZN12Unk_020dbe4c13func_02055bccEjPv(&b15_unk_7c0[2], t, p15::_ZN12Unk_0209c2f413func_0209c348Ev(r4))) {
            Unk_ov004_02208ba8_Rec *r = p15::_ZN18Unk_ov004_0220639819func_ov004_02206398Ej(p15::_ZN18Unk_ov004_022069ec19func_ov004_02206be4Ev(b15_f_6c8), 0);
            p15::_ZN12Unk_020dbe4c13func_02055ae4Eiiiit(&b15_unk_7c0[2], r, p15::_ZN18Unk_ov004_022069ec19func_ov004_02206a14Ev(b15_f_6c8), 0, 0x1000, 0);
            p15::_ZN12Unk_020dbe4c13func_02055a9cEj(&b15_unk_7c0[2], p15::_ZN12Unk_020dbe3413func_020554c0Ev(b15_f_534));
        }
    }
    if (p15::_ZN18Unk_ov004_0220639819func_ov004_022063bcEj(p15::_ZN18Unk_ov004_022069ec19func_ov004_02206be4Ev(b15_f_6c8), 0) != NULL) {
        u32 t = b15_unk_590;
        if (p15::_ZN12Unk_020dbe4c13func_02055bccEjPv(&b15_unk_7c0[0], t, p15::_ZN12Unk_0209c2f413func_0209c348Ev(r4))) {
            p15::_ZN12Unk_020dbe4c13func_02055b38Eiiit(&b15_unk_7c0[0], p15::_ZN18Unk_ov004_0220639819func_ov004_022063bcEj(p15::_ZN18Unk_ov004_022069ec19func_ov004_02206be4Ev(b15_f_6c8), 0), 3, 0x1000, 0);
            p15::_ZN12Unk_020dbe4c13func_02055a9cEj(&b15_unk_7c0[0], p15::_ZN12Unk_020dbe3413func_020554c0Ev(b15_f_534));
        }
    }
    if (p15::_ZN18Unk_ov004_02205c4419func_ov004_02205c7cEv(b15_f_73c) != 0 && p15::func_ov004_02234ad4() == 0) {
        vfunc_70(2, 0xff);
    } else {
        vfunc_70(0, 0xff);
    }
    return TRUE;
}

Unk_ov004_0224b1e4::~Unk_ov004_0224b1e4() {
}

Unk_ov004_0224b1e4::Unk_ov004_0224b1e4() {
}

extern "C" void func_ov004_0220d5f8() {
    new Unk_ov004_0224b1e4;
}


// ---- part 16: from unk_0220d69c.cpp
struct Unk_ov004_0220d69c_Vec {
    s32 x, y, z;
};

class Unk_ov004_0224b568;

namespace p16 {
extern "C" {
extern u8 data_ov004_02240040[];
extern void *data_020cbb18;

s32 _ZN18Unk_ov004_02205c4419func_ov004_02205c44Eji(void *, s32, s32);
s32 _ZN18Unk_ov004_02205c4419func_ov004_02205c6cEv(void *);
s32 _ZN18Unk_ov004_02205c4419func_ov004_02205c7cEv(void *);
s32 _ZN18Unk_ov004_022069ec19func_ov004_02206be4Ev(void *);
u16 *_ZN18Unk_ov004_0220639819func_ov004_022063c8Ej(s32, s32);
s32 _ZN18Unk_ov004_0224882c19func_ov004_02206f8cEv(void *);
s32 func_ov004_02207650(void *);
s32 func_ov004_02208750(void *);
s32 func_ov004_022087a4(void *);
s32 func_ov004_02208968(void *);
s32 _ZN18Unk_ov004_0224882c19func_ov004_02208ba8Eiiij(void *, s32, s32, s32, u16);
s32 _ZN18Unk_ov004_0224882c19func_ov004_02208de0Eiiii(void *, s32, s32, s32, s32);
s32 _ZN18Unk_ov004_0224882c19func_ov004_02209108Ev(void *);
s32 _ZN18Unk_ov004_0224882c19func_ov004_02209150Ev(void *);
s32 func_ov004_022330f8(void);
s32 func_ov004_02233bf4(void);
s32 func_ov004_022337bc(s32);
s32 _ZN18Unk_ov004_022351bc19func_ov004_02235464EPv(s32, void *);
s32 func_ov004_022354d8(void);
s32 _ZN18Unk_ov004_022355ac19func_ov004_022354e8Ev(s32);

s32 func_02003a4c(void *);
s32 func_02003a54(void *);
s32 func_02003a5c(void *, s32);
s32 func_02003a64(void *);
s32 func_02003a6c(void *, Unk_ov004_0220d69c_Vec *);
s32 func_02003ab8(void *, s32);
s32 func_02003ac0(void *);
s32 func_0204ee10(s32 *, s32 *, void *);
s32 func_020515b8(s32, void *, s32);
s32 func_02052504(s32, s32, u32, s32);
s32 func_020524dc(s32, s32, s32);
s32 func_0205252c(s32, s32, s32);
s32 _ZN12Unk_0205454c13func_0205436cEiiiitt(void *, s32, u16, s32, s32, s32, s32);
s32 _ZN12Unk_0205454c13func_0205439cEv(void *);
s32 _ZN12Unk_0205454c13func_020543b4EPS_(void *, void *);
s32 _ZN12Unk_0205454c13func_02054420EPS_(void *, void *);
s32 _ZN12Unk_0205454c13func_02054720Eiiitt(void *, s32, s32, s32, s32, s32);
s32 _ZN12Unk_020dbd3413func_02054b38EPv(void *, s32);
s32 _ZN12Unk_020cbb1813func_02072e44Ev(void *);
s32 func_020943dc(void);
s32 _ZN12Unk_0209c2f413func_0209c348Ev(void);
s32 func_020b50e8(void);
s32 func_020b51a4(void);
}
}

struct Unk_ov004_0220dcbc_Obj {
    u8 pad_00[0xb4];
    u8 *unk_b4;
    u8 pad_b8[0xd4 - 0xb8];
    u8 *unk_d4;
};

class Unk_ov004_0224b568 : public Unk_ov004_0224882c {
public:
    Unk_ov004_0224b568();
    virtual ~Unk_ov004_0224b568();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_68();
    virtual void vfunc_6c(s32 idx, void *b);
    virtual BOOL vfunc_70(u32 idx, u8 x);
    virtual u8 vfunc_74(u32 idx);
    virtual BOOL vfunc_7c();
    virtual BOOL vfunc_80();
    virtual BOOL vfunc_84();

    void func_ov004_0220d614();
    BOOL func_ov004_0220d69c();
    void func_ov004_0220d6f8();
    BOOL func_ov004_0220d7bc();
    void func_ov004_0220d98c();
    BOOL func_ov004_0220d9e4();
    void func_ov004_0220da7c();
    s32 func_ov004_0220db9c();
    u32 func_ov004_0220dbc4();
    void func_ov004_0220dbec(u32 v);
    void func_ov004_0220dc10(u32 v);
    void func_ov004_0220dc34();
    s32 func_ov004_0220dc5c(Unk_ov004_0220d69c_Vec *v);
    void func_ov004_0220dc94(u32 v);

    /* 0x840 */ u8 unk_840[0x854 - 0x840];
    /* 0x854 */ u8 unk_854;
    /* 0x855 */ u8 pad_855[3];
    /* 0x858 */ s32 unk_858;
    /* 0x85c */ u16 unk_85c;
    /* 0x85e */ u8 unk_85e;
    /* 0x85f */ u8 pad_85f;
};

typedef void (Unk_ov004_0224b568::*Unk_ov004_0220da7c_Fn)();
typedef BOOL (Unk_ov004_0224b568::*Unk_ov004_0220daf8_Fn)();

BOOL Unk_ov004_0224b568::func_ov004_0220d69c() {
    p16::_ZN18Unk_ov004_02205c4419func_ov004_02205c44Eji(b16_unk_73c, 1, 0);
    p16::_ZN18Unk_ov004_0224882c19func_ov004_02208ba8Eiiij(this, 0, 0, 0x1000, 0);
    u16 *r = p16::_ZN18Unk_ov004_0220639819func_ov004_022063c8Ej(p16::_ZN18Unk_ov004_022069ec19func_ov004_02206be4Ev(b16_unk_6c8), 0);
    p16::_ZN12Unk_0205454c13func_02054720Eiiitt(b16_unk_534, (s32)r, 0, 0, 0, 0);
    return TRUE;
}

void Unk_ov004_0224b568::func_ov004_0220d6f8() {
    func_ov004_0220dc5c((Unk_ov004_0220d69c_Vec *)unk_5c);
    if (unk_85c != 0) {
        p16::_ZN12Unk_0205454c13func_0205439cEv(b16_unk_534);
        unk_85c--;
    }
    if (unk_85c == 0) {
        vfunc_70(2, vfunc_78());
    } else {
        s32 r = func_ov004_0220db9c();
        if (r >= 0) {
            unk_85c = r;
            u16 *q = p16::_ZN18Unk_ov004_0220639819func_ov004_022063c8Ej(p16::_ZN18Unk_ov004_022069ec19func_ov004_02206be4Ev(b16_unk_6c8), 0);
            p16::_ZN12Unk_0205454c13func_0205436cEiiiitt(b16_unk_534, (s32)q, (u16)r, 0, 0, 0, 0);
        }
    }
    if (p16::_ZN18Unk_ov004_02205c4419func_ov004_02205c6cEv(b16_unk_73c)) {
        p16::_ZN18Unk_ov004_02205c4419func_ov004_02205c44Eji(b16_unk_73c, 1, 0);
        s32 s = p16::func_020b50e8();
        p16::func_020515b8(s, unk_5c, p16::func_ov004_02208750(this));
    }
}

BOOL Unk_ov004_0224b568::func_ov004_0220d7bc() {
    s32 a, b;
    p16::_ZN18Unk_ov004_0224882c19func_ov004_02209150Ev(this);
    p16::_ZN18Unk_ov004_02205c4419func_ov004_02205c44Eji(b16_unk_73c, 1, 0);
    unk_85c = 0xffff;
    p16::func_0204ee10(&a, &b, unk_5c);
    if (b16_unk_77a != 0) {
        if (b16_unk_768 != 0 || p16::func_020b51a4() != 0) {
            p16::func_02003ab8(unk_840, 1);
            u32 r5 = p16::func_02003a54(unk_840) & 0xf;
            p16::func_02052504(a, b, (u8)r5, p16::func_020b50e8());
            b16_unk_778 = r5;
            u16 *q = p16::_ZN18Unk_ov004_0220639819func_ov004_022063c8Ej(p16::_ZN18Unk_ov004_022069ec19func_ov004_02206be4Ev(b16_unk_6c8), 0);
            p16::_ZN12Unk_0205454c13func_02054720Eiiitt(b16_unk_534, (s32)q, 0, 0, 0, 0);
            p16::_ZN12Unk_0205454c13func_0205439cEv(b16_unk_534);
            unk_85c = 0;
        } else {
            func_ov004_0220dc10(2);
            u32 r5 = p16::func_0205252c(a, b, p16::func_020b50e8()) & 0xf;
            func_ov004_0220dbec((u8)r5);
            b16_unk_778 = r5;
            s32 q = p16::func_ov004_022337bc(p16::func_ov004_02233bf4());
            p16::_ZN12Unk_0205454c13func_02054720Eiiitt(b16_unk_534, q, 0, 0, 0, 0);
            p16::_ZN12Unk_0205454c13func_0205439cEv(b16_unk_534);
        }
    } else if (p16::_ZN12Unk_020cbb1813func_02072e44Ev(p16::data_020cbb18) != 0 && vfunc_78() != 0xff) {
        func_ov004_0220dc10(1);
        u32 r5 = vfunc_78();
        u32 t = r5 & 0xf;
        p16::func_02052504(a, b, (u8)t, p16::func_020b50e8());
        s32 q = p16::func_ov004_022337bc(p16::func_ov004_02233bf4());
        p16::_ZN12Unk_0205454c13func_02054720Eiiitt(b16_unk_534, q, 0, 0, 0, 0);
        p16::_ZN12Unk_0205454c13func_0205439cEv(b16_unk_534);
    } else {
        func_ov004_0220dc10(1);
        u32 r5 = func_ov004_0220dbc4() & 0xf;
        p16::func_02052504(a, b, (u8)r5, p16::func_020b50e8());
        b16_unk_778 = r5;
        s32 q = p16::func_ov004_022337bc(p16::func_ov004_02233bf4());
        p16::_ZN12Unk_0205454c13func_02054720Eiiitt(b16_unk_534, q, 0, 0, 0, 0);
        p16::_ZN12Unk_0205454c13func_0205439cEv(b16_unk_534);
    }
    return TRUE;
}

void Unk_ov004_0224b568::func_ov004_0220d98c() {
    func_ov004_0220dc5c((Unk_ov004_0220d69c_Vec *)unk_5c);
    p16::_ZN12Unk_0205454c13func_0205439cEv(b16_unk_534);
    if (p16::_ZN18Unk_ov004_02205c4419func_ov004_02205c6cEv(b16_unk_73c)) {
        p16::_ZN18Unk_ov004_02205c4419func_ov004_02205c44Eji(b16_unk_73c, 0, 0);
        s32 s = p16::func_020b50e8();
        p16::func_020515b8(s, unk_5c, p16::func_ov004_02208750(this));
    }
}

BOOL Unk_ov004_0224b568::func_ov004_0220d9e4() {
    s32 a, b;
    p16::func_0204ee10(&a, &b, unk_5c);
    b16_unk_778 = 0xff;
    p16::func_020524dc(a, b, p16::func_020b50e8());
    func_ov004_0220dc10(0);
    p16::_ZN18Unk_ov004_0224882c19func_ov004_02209108Ev(this);
    p16::_ZN18Unk_ov004_02205c4419func_ov004_02205c44Eji(b16_unk_73c, 0, 0);
    if (p16::func_ov004_02233bf4() != 0) {
        s32 q = p16::func_ov004_022337bc(p16::func_ov004_02233bf4());
        if (b16_unk_77a != 0) {
            p16::_ZN12Unk_0205454c13func_02054720Eiiitt(b16_unk_534, q, 0, 0, 0, 0);
        } else {
            p16::_ZN12Unk_0205454c13func_0205436cEiiiitt(b16_unk_534, q, 0x20, 0, 0, 0, 0);
        }
    }
    return TRUE;
}

void Unk_ov004_0224b568::func_ov004_0220da7c() {
    static Unk_ov004_0220da7c_Fn tbl[3] = {
        &Unk_ov004_0224b568::func_ov004_0220d98c,
        &Unk_ov004_0224b568::func_ov004_0220d6f8,
        &Unk_ov004_0224b568::func_ov004_0220d614,
    };
    u32 i = unk_85e;
    if (i < 3) {
        (this->*tbl[i])();
    }
}

BOOL Unk_ov004_0224b568::vfunc_70(u32 idx, u8 x) {
    Unk_ov004_0224882c::vfunc_70(idx, x);
    static Unk_ov004_0220daf8_Fn tbl[3] = {
        &Unk_ov004_0224b568::func_ov004_0220d9e4,
        &Unk_ov004_0224b568::func_ov004_0220d7bc,
        &Unk_ov004_0224b568::func_ov004_0220d69c,
    };
    if (idx < 3) {
        if ((this->*tbl[idx])()) {
            unk_85e = idx;
            return TRUE;
        }
    }
    return FALSE;
}

u8 Unk_ov004_0224b568::vfunc_74(u32 idx) {
    if (idx < 3) {
        return p16::data_ov004_02240040[idx];
    }
    return 0;
}

s32 Unk_ov004_0224b568::func_ov004_0220db9c() {
    if (unk_854 != 0) {
        return p16::func_02003a4c(unk_840);
    }
    return -1;
}

u32 Unk_ov004_0224b568::func_ov004_0220dbc4() {
    if (unk_854 != 0) {
        return p16::func_02003a54(unk_840);
    }
    return 0;
}

void Unk_ov004_0224b568::func_ov004_0220dbec(u32 v) {
    if (unk_854 != 0) {
        p16::func_02003a5c(unk_840, v);
    }
}

void Unk_ov004_0224b568::func_ov004_0220dc10(u32 v) {
    if (unk_854 != 0) {
        p16::func_02003ab8(unk_840, v);
    }
}

void Unk_ov004_0224b568::func_ov004_0220dc34() {
    if (unk_854 != 0) {
        p16::func_02003a64(unk_840);
        unk_854 = 0;
    }
}

s32 Unk_ov004_0224b568::func_ov004_0220dc5c(Unk_ov004_0220d69c_Vec *v) {
    if (unk_854 != 0) {
        Unk_ov004_0220d69c_Vec t;
        t.x = v->x;
        t.y = v->y;
        t.z = v->z;
        return p16::func_02003a6c(unk_840, &t);
    }
    return -1;
}

void Unk_ov004_0224b568::func_ov004_0220dc94(u32 v) {
    if (unk_854 == 0) {
        p16::func_02003ac0(unk_840);
        unk_854 = 1;
    }
}

void Unk_ov004_0224b568::vfunc_6c(s32 idx, void *b) {
    Unk_ov004_0220dcbc_Obj *o = (Unk_ov004_0220dcbc_Obj *)b;
    u8 *d = o->unk_d4;
    u32 off = *(u16 *)(d + 6);
    u8 *tbl = d + off;
    u32 esz = *(u16 *)tbl;
    u8 *rec = d + *(u32 *)(tbl + esz * idx + 4);
    s32 *v = (s32 *)(rec + 4);
    u8 *m = o->unk_b4;
    *(s32 *)(m + 0x4c) = v[0];
    *(s32 *)(m + 0x50) = v[1];
    *(s32 *)(m + 0x54) = v[2];
    p16::_ZN12Unk_0205454c13func_020543b4EPS_(b16_unk_534, o);
}

extern "C" BOOL _ZN18Unk_ov004_0224b5688vfunc_68Ev(Unk_ov004_0224b568 *self, u32 a, void *o) {
    p16::_ZN12Unk_0205454c13func_02054420EPS_(self->b16_unk_534, o);
}

BOOL Unk_ov004_0224b568::vfunc_0c() {
    func_ov004_0220dc34();
    return TRUE;
}

BOOL Unk_ov004_0224b568::vfunc_84() {
    vfunc_80();
    return TRUE;
}

BOOL Unk_ov004_0224b568::vfunc_80() {
    func_ov004_0220da7c();
    unk_858++;
    return TRUE;
}

BOOL Unk_ov004_0224b568::vfunc_7c() {
    unk_858 = 0;
    b16_unk_778 = 0xff;
    p16::func_ov004_022087a4(this);
    func_ov004_0220dc94(p16::func_ov004_022330f8());
    p16::_ZN18Unk_ov004_0224882c19func_ov004_02208de0Eiiii(this, 0, 1, 0x1000, 0);
    p16::func_ov004_02208968(this);
    p16::_ZN12Unk_020dbd3413func_02054b38EPv(b16_unk_534, p16::_ZN12Unk_0209c2f413func_0209c348Ev());
    if (b16_unk_768 == 1) {
        p16::_ZN18Unk_ov004_02205c4419func_ov004_02205c44Eji(b16_unk_73c, 0, 0);
        s32 s = p16::func_020b50e8();
        p16::func_020515b8(s, unk_5c, p16::func_ov004_02208750(this));
    } else if (p16::_ZN18Unk_ov004_0224882c19func_ov004_02206f8cEv(this) != 0) {
        vfunc_70(0, 0xff);
    } else if (p16::_ZN18Unk_ov004_02205c4419func_ov004_02205c7cEv(b16_unk_73c) != 0) {
        vfunc_70(1, 0xff);
    } else {
        vfunc_70(0, 0xff);
    }
    return TRUE;
}

Unk_ov004_0224b568::~Unk_ov004_0224b568() {
}

Unk_ov004_0224b568::Unk_ov004_0224b568() {
    b16_unk_778 = 0xff;
}

extern "C" void func_ov004_0220deac() {
    new Unk_ov004_0224b568;
}


// ---- part 17: from unk_0220e060.cpp
namespace p17 {
extern "C" {
BOOL func_ov004_02208980(void *self);
void func_ov004_02208a18(void *self, u32 a, s32 b, s32 c);
}
}

// Secondary base at +0xec of the ov004 actors (ctor func_0206606c).

// Element at +0x844 of the 0x864-byte actors (ctor func_ov004_02205c2c, dtor func_ov004_02205c1c).

// Container at +0x844 of the class Unk_ov004_0224a17c

namespace p17 {
extern "C" {
extern u8 data_ov004_0224005c[];
extern u8 data_ov004_0224003c[];
extern u8 data_ov004_0224bb98[];
extern u8 data_ov004_0224bba0[];
extern u8 data_ov004_0224bba8[];
BOOL func_ov004_02234ad4();
void *func_ov004_02233cdc();
void *_ZN18Unk_ov004_022069ec19func_ov004_02206a14Ev(void *);
void _ZN18Unk_ov004_02235cc019func_ov004_022358f4Ej(void *, void *);
void func_02056744(void *, void *, void *, s32, s32);
void func_02056794(void *, void *, void *, void *, void *);
void func_02051cc8(void *, s32, s32, s32);
void func_0203d704(void *, s32);
void func_02094f20();
}
}

// ---------------------------------------------------------------- Unk_ov004_022495c4 (no extra fields)
class Unk_ov004_022495c4 : public Unk_ov004_0224882c {
public:
    Unk_ov004_022495c4();
    virtual ~Unk_ov004_022495c4();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_7c();
    virtual BOOL vfunc_80();
    virtual void vfunc_94();
};

// ---------------------------------------------------------------- Unk_ov004_02249df8 (2-state)
class Unk_ov004_02249df8 : public Unk_ov004_0224882c {
public:
    Unk_ov004_02249df8();
    virtual ~Unk_ov004_02249df8();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_70(u32 idx, u8 v);
    virtual u8 vfunc_74(u32 idx);
    virtual BOOL vfunc_7c();
    virtual BOOL vfunc_80();

    void func_ov004_0220e56c();
    BOOL func_ov004_0220e594();
    void func_ov004_0220e5d0();
    BOOL func_ov004_0220e5f8();
    void func_ov004_0220e634();
    void func_ov004_0220e738();

    /* 0x840 */ u8 unk_840;
    /* 0x844 */ Unk_ov004_02205bcc unk_844;
    /* 0x860 */ u8 unk_860;
};

// ---------------------------------------------------------------- Unk_ov004_02249948 (4-state, derives from Unk_ov004_02249df8)
class Unk_ov004_02249948 : public Unk_ov004_02249df8 {
public:
    Unk_ov004_02249948();
    virtual ~Unk_ov004_02249948();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_70(u32 idx, u8 v);
    virtual u8 vfunc_74(u32 idx);
    virtual BOOL vfunc_7c();
    virtual BOOL vfunc_80();

    void func_ov004_0220e11c();
    BOOL func_ov004_0220e14c();
    void func_ov004_0220e198();
    BOOL func_ov004_0220e1c0();
    void func_ov004_0220e208();
    BOOL func_ov004_0220e238();
    void func_ov004_0220e28c();
    BOOL func_ov004_0220e2b4();
    void func_ov004_0220e300();

    /* 0x861 */ u8 unk_861;
};

// ---------------------------------------------------------------- Unk_ov004_0224a17c (only one method here)

// ================================================================ Unk_ov004_022495c4
BOOL Unk_ov004_022495c4::vfunc_0c() {
    return TRUE;
}

BOOL Unk_ov004_022495c4::vfunc_80() {
    p17::func_ov004_02208980(this);
    return TRUE;
}

BOOL Unk_ov004_022495c4::vfunc_7c() {
    func_ov004_02208de0(0, 0, 0, 0);
    return TRUE;
}

Unk_ov004_022495c4::~Unk_ov004_022495c4() {
}

Unk_ov004_022495c4::Unk_ov004_022495c4() {
}

extern "C" Unk_ov004_0224882c *func_ov004_0220e100() {
    return new Unk_ov004_022495c4;
}

// ================================================================ Unk_ov004_02249948
void Unk_ov004_02249948::func_ov004_0220e11c() {
    ((Unk_ov004_02205c44 *)b17_unk_73c)->func_ov004_02205c44(0, 0);
    if (p17::func_ov004_02208980(this)) {
        vfunc_70(0, 0xff);
    }
}

BOOL Unk_ov004_02249948::func_ov004_0220e14c() {
    ((Unk_ov004_02205c44 *)b17_unk_73c)->func_ov004_02205c44(0, 0);
    unk_844.func_ov004_02205bcc(0, 1, 0);
    func_ov004_0220e744(0);
    p17::func_ov004_02208a18(this, 0, 3, 0x1000);
    func_ov004_02209108();
    return TRUE;
}

void Unk_ov004_02249948::func_ov004_0220e198() {
    if (((Unk_ov004_02205c44 *)b17_unk_73c)->func_ov004_02205c6c()) {
        p17::func_02051cc8(this, 3, 0xff, 1);
    }
}

BOOL Unk_ov004_02249948::func_ov004_0220e1c0() {
    ((Unk_ov004_02205c44 *)b17_unk_73c)->func_ov004_02205c44(1, 0);
    unk_844.func_ov004_02205bcc(1, 1, 0);
    func_ov004_0220e744(1);
    p17::func_ov004_02208a18(this, 0, 1, 0x1000);
    return TRUE;
}

void Unk_ov004_02249948::func_ov004_0220e208() {
    ((Unk_ov004_02205c44 *)b17_unk_73c)->func_ov004_02205c44(1, 0);
    if (p17::func_ov004_02208980(this)) {
        vfunc_70(2, 0xff);
    }
}

BOOL Unk_ov004_02249948::func_ov004_0220e238() {
    ((Unk_ov004_02205c44 *)b17_unk_73c)->func_ov004_02205c44(1, 0);
    unk_844.func_ov004_02205bcc(1, 1, 0);
    func_ov004_0220e744(1);
    func_ov004_02208ba8(0, 1, 0x1000, 0);
    func_ov004_02209150();
    return TRUE;
}

void Unk_ov004_02249948::func_ov004_0220e28c() {
    if (((Unk_ov004_02205c44 *)b17_unk_73c)->func_ov004_02205c6c()) {
        p17::func_02051cc8(this, 1, 0xff, 1);
    }
}

BOOL Unk_ov004_02249948::func_ov004_0220e2b4() {
    ((Unk_ov004_02205c44 *)b17_unk_73c)->func_ov004_02205c44(0, 0);
    unk_844.func_ov004_02205bcc(0, 1, 0);
    func_ov004_0220e744(0);
    func_ov004_02208ba8(0, 3, 0x1000, 0);
    return TRUE;
}

void Unk_ov004_02249948::func_ov004_0220e300() {
    static void (Unk_ov004_02249948::*tbl[4])() = {
        &Unk_ov004_02249948::func_ov004_0220e28c,
        &Unk_ov004_02249948::func_ov004_0220e208,
        &Unk_ov004_02249948::func_ov004_0220e198,
        &Unk_ov004_02249948::func_ov004_0220e11c,
    };
    u32 i = unk_861;
    if (i < 4) {
        (this->*tbl[i])();
    }
}

BOOL Unk_ov004_02249948::vfunc_70(u32 idx, u8 v) {
    Unk_ov004_0224882c::vfunc_70(idx, v);
    static BOOL (Unk_ov004_02249948::*tbl[4])() = {
        &Unk_ov004_02249948::func_ov004_0220e2b4,
        &Unk_ov004_02249948::func_ov004_0220e238,
        &Unk_ov004_02249948::func_ov004_0220e1c0,
        &Unk_ov004_02249948::func_ov004_0220e14c,
    };
    if (idx < 4) {
        if ((this->*tbl[idx])()) {
            unk_861 = idx;
            return TRUE;
        }
    }
    return FALSE;
}

u8 Unk_ov004_02249948::vfunc_74(u32 idx) {
    if (idx < 4) {
        return p17::data_ov004_0224005c[idx];
    }
    return 0;
}

BOOL Unk_ov004_02249948::vfunc_0c() {
    return TRUE;
}

BOOL Unk_ov004_02249948::vfunc_80() {
    ((Unk_ov004_02205b14 *)&unk_844)->func_ov004_02205b14();
    func_ov004_0220e300();
    return TRUE;
}

BOOL Unk_ov004_02249948::vfunc_7c() {
    func_ov004_02208de0(0, 1, 0x1000, 0);
    void *res = b17_unk_590;
    u8 t = ((Unk_ov004_02205c44 *)b17_unk_73c)->func_ov004_02205c7c();
    unk_844.func_ov004_02205be4((Unk_02056fd8 *)res, (s32)p17::data_ov004_0224bb98, t);
    if (((Unk_ov004_02205c44 *)b17_unk_73c)->func_ov004_02205c7c() != 0 && p17::func_ov004_02234ad4() == 0) {
        vfunc_70(2, 0xff);
    } else {
        vfunc_70(0, 0xff);
    }
    return TRUE;
}

Unk_ov004_02249948::~Unk_ov004_02249948() {
}

Unk_ov004_02249948::Unk_ov004_02249948() {
}

extern "C" Unk_ov004_0224882c *func_ov004_0220e550() {
    return new Unk_ov004_02249948;
}

// ================================================================ Unk_ov004_02249df8
void Unk_ov004_02249df8::func_ov004_0220e56c() {
    if (((Unk_ov004_02205c44 *)b17_unk_73c)->func_ov004_02205c6c()) {
        p17::func_02051cc8(this, 0, 0xff, 1);
    }
}

BOOL Unk_ov004_02249df8::func_ov004_0220e594() {
    func_ov004_02209150();
    unk_844.func_ov004_02205bcc(1, 1, 0);
    ((Unk_ov004_02205c44 *)b17_unk_73c)->func_ov004_02205c44(1, 0);
    func_ov004_0220e744(1);
    return TRUE;
}

void Unk_ov004_02249df8::func_ov004_0220e5d0() {
    if (((Unk_ov004_02205c44 *)b17_unk_73c)->func_ov004_02205c6c()) {
        p17::func_02051cc8(this, 1, 0xff, 1);
    }
}

BOOL Unk_ov004_02249df8::func_ov004_0220e5f8() {
    func_ov004_02209108();
    unk_844.func_ov004_02205bcc(0, 1, 0);
    ((Unk_ov004_02205c44 *)b17_unk_73c)->func_ov004_02205c44(0, 0);
    func_ov004_0220e744(0);
    return TRUE;
}

void Unk_ov004_02249df8::func_ov004_0220e634() {
    static void (Unk_ov004_02249df8::*tbl[2])() = {
        &Unk_ov004_02249df8::func_ov004_0220e5d0,
        &Unk_ov004_02249df8::func_ov004_0220e56c,
    };
    u32 i = unk_840;
    if (i < 2) {
        (this->*tbl[i])();
    }
}

BOOL Unk_ov004_02249df8::vfunc_70(u32 idx, u8 v) {
    Unk_ov004_0224882c::vfunc_70(idx, v);
    static BOOL (Unk_ov004_02249df8::*tbl[2])() = {
        &Unk_ov004_02249df8::func_ov004_0220e5f8,
        &Unk_ov004_02249df8::func_ov004_0220e594,
    };
    if (idx < 2) {
        if ((this->*tbl[idx])()) {
            unk_840 = idx;
            return TRUE;
        }
    }
    return FALSE;
}

u8 Unk_ov004_02249df8::vfunc_74(u32 idx) {
    if (idx < 2) {
        return p17::data_ov004_0224003c[idx];
    }
    return 0;
}

void Unk_ov004_02249df8::func_ov004_0220e738() {
    unk_860 = 1;
}

BOOL Unk_ov004_02249df8::vfunc_0c() {
    return TRUE;
}

BOOL Unk_ov004_02249df8::vfunc_80() {
    ((Unk_ov004_02205b14 *)&unk_844)->func_ov004_02205b14();
    func_ov004_0220e634();
    unk_860 = 0;
    return TRUE;
}

BOOL Unk_ov004_02249df8::vfunc_7c() {
    void *res = b17_unk_590;
    u8 t = ((Unk_ov004_02205c44 *)b17_unk_73c)->func_ov004_02205c7c();
    unk_844.func_ov004_02205be4((Unk_02056fd8 *)res, (s32)p17::data_ov004_0224bb98, t);
    if (((Unk_ov004_02205c44 *)b17_unk_73c)->func_ov004_02205c7c() != 0 && p17::func_ov004_02234ad4() == 0) {
        vfunc_70(1, 0xff);
    } else {
        vfunc_70(0, 0xff);
    }
    return TRUE;
}

Unk_ov004_02249df8::~Unk_ov004_02249df8() {
}

Unk_ov004_02249df8::Unk_ov004_02249df8() {
}

extern "C" Unk_ov004_0224882c *func_ov004_0220e934() {
    return new Unk_ov004_02249df8;
}

// ================================================================ Unk_ov004_0224a17c

// ================================================================ Unk_ov004_0224882c
BOOL Unk_ov004_0224882c::func_ov004_0220e744(BOOL a) {
    if (a != 0) {
        void *r = b17_unk_590;
        void *t = p17::func_ov004_02233cdc();
        p17::func_02056744(r, p17::data_ov004_0224bb98, t, 0, 0);
    } else {
        void *r = b17_unk_590;
        void *t = p17::_ZN18Unk_ov004_022069ec19func_ov004_02206a14Ev(b17_sub_6c8);
        p17::func_02056794(r, p17::data_ov004_0224bb98, t, p17::data_ov004_0224bba0, p17::data_ov004_0224bba8);
    }
    return TRUE;
}

// ---- part 18: from unk_0220e9b4.cpp
namespace p18 {
extern "C" {
BOOL func_ov004_02208980(void *self);
}
}

// Element of the 3-element container (0x1c bytes)

struct Unk_ov004_0220ebd8_Ptr {
    /* 0x00 */ u32 unk_00;
    /* 0x04 */ u32 unk_04;
    /* 0x08 */ u32 unk_08;
};

class Unk_ov004_0224a17c : public Unk_ov004_0224882c {
public:
    Unk_ov004_0224a17c();
    virtual ~Unk_ov004_0224a17c();

    virtual BOOL vfunc_0c();
    virtual void vfunc_4c(u32 a, u8 b);
    virtual BOOL vfunc_70(u32 a, u8 b);
    virtual u8 vfunc_74(u32 a);
    virtual BOOL vfunc_7c();
    virtual BOOL vfunc_80();
    virtual BOOL vfunc_84();

    void func_ov004_0220e950();
    BOOL func_ov004_0220e9b4();
    void func_ov004_0220ea20();
    BOOL func_ov004_0220ea74();
    void func_ov004_0220ead4();
    void func_ov004_0220ebd8();
    BOOL func_ov004_0220ec08();
    BOOL func_ov004_0220ec0c();
    BOOL func_ov004_0220ec30();
    BOOL func_ov004_0220ed14();
    BOOL func_ov004_0220ed20();
    void func_ov004_0220ed24();
    BOOL func_ov004_0220ed88();
    BOOL func_ov004_0220eda4();
    BOOL func_ov004_0220edb0();
    void func_ov004_0220edb4();
    BOOL func_ov004_0220edb8();
    void func_ov004_0220edbc();
    BOOL func_ov004_0220ee64(s32 a);
    void func_ov004_0220ef5c(u32 a, BOOL b);
    void func_ov004_0220efa0(u32 a);
    void func_ov004_0220f29c();
    void func_ov004_0220f2a8();

    /* 0x840 */ u8 unk_840;
    /* 0x841 */ u8 unk_841;
    /* 0x842 */ u8 pad_842[2];
    /* 0x844 */ Unk_ov004_022059f4 unk_844;
    /* 0x89c */ u8 unk_89c;
    /* 0x89d */ u8 pad_89d[3];
    /* 0x8a0 */ s32 unk_8a0;
};

namespace p18 {
extern "C" {
extern u8 data_ov004_02240028[];
extern u16 data_ov004_0224f9ac;
extern u8 data_021dfd8c[];
extern u8 data_ov004_0224bbb0[];
void _ZN12Unk_020d967013func_0203e47cEi(void *self, Unk_020ddcf0 *sec);
void _ZN12Unk_020d967013func_0203e488Ei(void *self, Unk_020ddcf0 *sec);
s32 func_0203d67c(void *self);
s32 func_0203d704(void *self, s32 a);
s32 func_02094f20();
void _ZN12Unk_020e2a3013func_020a710cEPKc(void *p, void *q);
s32 func_020b51a4();
u32 func_020b51d4();
s32 func_020b52f8();
s32 func_0207bf60(void *p, u32 a);
u32 func_0207e364();
void _ZN12Unk_020dd324C1EPt(void *out, u16 *in);
void _ZN12Unk_020dd324D1Ev(void *p);
void _ZN12Unk_020660f813func_020679ecEiPvj(void *a, s32 b, void *c, s32 d);
u16 *func_020601cc();
s32 func_02060158();
void func_02060190(u16 *p);
s32 func_0206ec6c();
s32 func_0206ed18();
u16 func_0206e714();
s32 func_0206eca4(s32 a);
void func_02051cc8(void *self, s32 a, u8 b, s32 c);
void func_02051da4(void *self, s32 a, u8 b, s32 c);
void func_02034d84(u16 a);
void func_02034e10(s32 a, u16 b, s32 c, s32 d);
void _ZN18Unk_ov004_02205c4419func_ov004_02205c44Eji(void *p, s32 a, s32 b);
BOOL _ZN18Unk_ov004_02205c4419func_ov004_02205c6cEv(void *p);
u8 _ZN18Unk_ov004_02205c4419func_ov004_02205c7cEv(void *p);
s32 func_ov004_02208894();
s32 func_ov004_02234ad4();
void _ZN18Unk_ov004_0224882c19func_ov004_02209cccEv(void *self);
void func_ov004_02234c7c(s32 a, void (*f)(void *), s32 c);
}
}

typedef void (Unk_ov004_0224a17c::*Unk_ov004_0220ead4_Fn)();
typedef BOOL (Unk_ov004_0224a17c::*Unk_ov004_0220eb40_Fn)();

static inline BOOL Unk_ov004_0220eff4_InRange(volatile u16 *p) {
    u32 hi = *p;
    u32 lo = *p;
    BOOL r = FALSE;
    if (lo >= 0x1323 && hi <= 0x1368) r = TRUE;
    return r;
}

static inline u16 Unk_ov004_0220ec30_Val(u32 t) {
    if (t < 0x46) {
        return t + 0x1323;
    }
    return 0x1323;
}

BOOL Unk_ov004_0224a17c::func_ov004_0220e9b4() {
    func_ov004_02209150();
    p18::func_ov004_02234c7c(0, p18::_ZN18Unk_ov004_0224882c19func_ov004_02209cccEv, 0);
    p18::_ZN18Unk_ov004_02205c4419func_ov004_02205c44Eji(b18_f_73c, 1, 0);
    u8 *p = &b18_unk_778;
    unk_841 = *p;
    func_ov004_0220efa0(*p);
    if (b18_unk_77c == 0x29) {
        func_ov004_02208ba8(1, 0, 0x1000, 0);
    }
    return TRUE;
}

void Unk_ov004_0224a17c::func_ov004_0220ea20() {
    if (b18_unk_77c == 0x29) {
        p18::func_ov004_02208980(this);
    }
    unk_844.func_ov004_02205a1c(0, 1, 0);
    if (p18::_ZN18Unk_ov004_02205c4419func_ov004_02205c6cEv(b18_f_73c)) {
        p18::_ZN18Unk_ov004_02205c4419func_ov004_02205c44Eji(b18_f_73c, 0, 0);
        p18::func_0203d704(this, 0);
        p18::func_02094f20();
    }
}

BOOL Unk_ov004_0224a17c::func_ov004_0220ea74() {
    func_ov004_02209108();
    p18::_ZN18Unk_ov004_02205c4419func_ov004_02205c44Eji(b18_f_73c, 0, 0);
    if (b18_unk_77a == 0) {
        func_ov004_0220ef5c(unk_841, 1);
    }
    if (b18_unk_77c == 0x29) {
        func_ov004_02208ba8(0, 1, 0x1000, 0);
    }
    return TRUE;
}

void Unk_ov004_0224a17c::func_ov004_0220ead4() {
    static Unk_ov004_0220ead4_Fn tbl[2] = {
        &Unk_ov004_0224a17c::func_ov004_0220ea20,
        &Unk_ov004_0224a17c::func_ov004_0220e950,
    };
    if (unk_89c < 2) {
        (this->*tbl[unk_89c])();
    }
}

BOOL Unk_ov004_0224a17c::vfunc_70(u32 a, u8 b) {
    Unk_ov004_0224882c::vfunc_70(a, b);
    static Unk_ov004_0220eb40_Fn tbl[2] = {
        &Unk_ov004_0224a17c::func_ov004_0220ea74,
        &Unk_ov004_0224a17c::func_ov004_0220e9b4,
    };
    if (a < 2) {
        if ((this->*tbl[a])()) {
            unk_89c = a;
            return TRUE;
        }
    }
    return FALSE;
}

u8 Unk_ov004_0224a17c::vfunc_74(u32 a) {
    if (a < 2) {
        return p18::data_ov004_02240028[a];
    }
    return 0;
}

void Unk_ov004_0224a17c::func_ov004_0220ebd8() {
    if (((Unk_ov004_0220ebd8_Ptr *)unk_3c) != NULL) {
        if (((Unk_ov004_0220ebd8_Ptr *)unk_3c)->unk_04 == 0) {
            p18::_ZN12Unk_020d967013func_0203e47cEi(this, this);
            p18::func_0203d67c(this);
        }
    }
}

BOOL Unk_ov004_0224a17c::func_ov004_0220ec08() {
    return TRUE;
}

BOOL Unk_ov004_0224a17c::func_ov004_0220ec0c() {
    if (((Unk_ov004_0220ebd8_Ptr *)unk_3c) != NULL) {
        if (((Unk_ov004_0220ebd8_Ptr *)unk_3c)->unk_04 != 0) {
            func_ov004_0220ee64(5);
        }
    }
}

BOOL Unk_ov004_0224a17c::func_ov004_0220ec30() {
    p18::_ZN12Unk_020d967013func_0203e488Ei(this, this);
    ((Unk_ov004_0220ebd8_Ptr *)unk_3c)->unk_08 = 1;
    {
        Unk_020ddcf0 &sec = *this;
        p18::_ZN12Unk_020e2a3013func_020a710cEPKc(&sec, p18::data_ov004_0224bbb0);
    }
    struct { u32 pad; u16 v; } l;
    u32 buf1[9];
    u32 buf2[9];
    if (p18::func_020b51a4()) {
        u32 t = 0;
        u32 r = p18::func_020b51d4();
        if (p18::func_0207bf60(p18::data_021dfd8c, r)) {
            t = p18::func_0207e364();
        }
        l.v = Unk_ov004_0220ec30_Val(t);
        p18::_ZN12Unk_020dd324C1EPt(buf1, &l.v);
        unk_1e = 5;
        p18::_ZN12Unk_020660f813func_020679ecEiPvj(((Unk_ov004_0220ebd8_Ptr *)unk_3c), 0, buf1, 7);
        p18::_ZN12Unk_020dd324D1Ev(buf1);
    } else {
        u16 *p = p18::func_020601cc();
        BOOL ok = FALSE;
        if (*p >= 0x1323 && *p <= 0x1368) ok = TRUE;
        if (ok) {
            p18::_ZN12Unk_020dd324C1EPt(buf2, p);
            unk_1e = 5;
            p18::_ZN12Unk_020660f813func_020679ecEiPvj(((Unk_ov004_0220ebd8_Ptr *)unk_3c), 0, buf2, 7);
            p18::_ZN12Unk_020dd324D1Ev(buf2);
        } else {
            unk_1e = 6;
        }
    }
    return TRUE;
}

BOOL Unk_ov004_0224a17c::func_ov004_0220ed14() {
    return func_ov004_0220ee64(4);
}

BOOL Unk_ov004_0224a17c::func_ov004_0220ed20() {
    return TRUE;
}

void Unk_ov004_0224a17c::func_ov004_0220ed24() {
    if (p18::func_0206ec6c()) {
        if (p18::func_0206ed18()) {
            volatile u16 vv;
            vv = p18::func_0206e714();
            BOOL ok = FALSE;
            u32 v = vv;
            if (v < 0x1323 || v > 0x1368) {
            } else {
                ok = TRUE;
            }
            s32 t;
            if (ok) {
                t = v - 0x1323;
            } else {
                t = -1;
            }
            p18::func_02051cc8(this, 1, t, 1);
        }
        p18::func_0203d67c(this);
    }
}

BOOL Unk_ov004_0224a17c::func_ov004_0220ed88() {
    if (p18::func_0206eca4(0x40)) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov004_0224a17c::func_ov004_0220eda4() {
    return func_ov004_0220ee64(2);
}

BOOL Unk_ov004_0224a17c::func_ov004_0220edb0() {
    return TRUE;
}

void Unk_ov004_0224a17c::func_ov004_0220edb4() {
}

BOOL Unk_ov004_0224a17c::func_ov004_0220edb8() {
    return TRUE;
}

void Unk_ov004_0224a17c::func_ov004_0220edbc() {
    static Unk_ov004_0220ead4_Fn tbl[6] = {
        &Unk_ov004_0224a17c::func_ov004_0220edb4,
        (Unk_ov004_0220ead4_Fn)&Unk_ov004_0224a17c::func_ov004_0220eda4,
        &Unk_ov004_0224a17c::func_ov004_0220ed24,
        (Unk_ov004_0220ead4_Fn)&Unk_ov004_0224a17c::func_ov004_0220ed14,
        (Unk_ov004_0220ead4_Fn)&Unk_ov004_0224a17c::func_ov004_0220ec0c,
        &Unk_ov004_0224a17c::func_ov004_0220ebd8,
    };
    if (unk_8a0 < 6) {
        (this->*tbl[unk_8a0])();
    }
}

BOOL Unk_ov004_0224a17c::func_ov004_0220ee64(s32 a) {
    static Unk_ov004_0220eb40_Fn tbl[6] = {
        &Unk_ov004_0224a17c::func_ov004_0220edb8,
        &Unk_ov004_0224a17c::func_ov004_0220edb0,
        &Unk_ov004_0224a17c::func_ov004_0220ed88,
        &Unk_ov004_0224a17c::func_ov004_0220ed20,
        &Unk_ov004_0224a17c::func_ov004_0220ec30,
        &Unk_ov004_0224a17c::func_ov004_0220ec08,
    };
    if (a < 6) {
        if ((this->*tbl[a])()) {
            unk_8a0 = a;
            return TRUE;
        }
    }
    return FALSE;
}

void Unk_ov004_0224a17c::vfunc_4c(u32 a, u8 b) {
    switch (a) {
    case 1:
        if (p18::func_020b52f8() && p18::func_ov004_02208894()) {
            func_ov004_0220ee64(1);
        } else {
            func_ov004_0220ee64(3);
        }
        break;
    case 8:
        func_ov004_0220ee64(0);
        break;
    }
}

void Unk_ov004_0224a17c::func_ov004_0220ef5c(u32 a, BOOL b) {
    if (unk_840 != 0) {
        if (a < 0x46) {
            p18::func_02034d84(a + 0xb0);
            if (b) {
                u16 v = 0xfff1;
                p18::func_02060190(&v);
            }
            unk_840 = 0;
        }
    }
}

void Unk_ov004_0224a17c::func_ov004_0220efa0(u32 a) {
    if (unk_840 == 0) {
        if (a < 0x46) {
            p18::func_02034e10(0x11, a + 0xb0, 0x7f, 0);
            u16 v = Unk_ov004_0220ec30_Val(a);
            p18::func_02060190(&v);
            unk_840 = 1;
        }
    }
}

BOOL Unk_ov004_0224a17c::vfunc_0c() {
    BOOL t = func_ov004_022057bc();
    func_ov004_0220ef5c(unk_841, t);
    BOOL r = FALSE;
    volatile u16 *pg = &p18::data_ov004_0224f9ac;
    u32 hi = *pg;
    u32 lo = *pg;
    if (lo >= 0x1323 && hi <= 0x1368) r = TRUE;
    if (r) {
        p18::data_ov004_0224f9ac = 0xfff1;
    }
    return TRUE;
}

BOOL Unk_ov004_0224a17c::vfunc_84() {
    vfunc_80();
}

BOOL Unk_ov004_0224a17c::vfunc_80() {
    func_ov004_0220ead4();
    func_ov004_0220edbc();
    unk_844.func_ov004_022059f4();
    return TRUE;
}

BOOL Unk_ov004_0224a17c::vfunc_7c() {
    if (b18_unk_77c == 0x29 || b18_unk_77c == 0x13) {
        func_ov004_02208de0(0, 0, 0x1000, 0);
    }
    u32 r4 = b18_unk_590;
    u32 c = p18::_ZN18Unk_ov004_02205c4419func_ov004_02205c7cEv(b18_f_73c);
    unk_844.func_ov004_02205a64(r4, c);
    if (b18_unk_768 == 1) {
        p18::func_02051da4(this, 0, 0xff, 1);
    } else if (p18::_ZN18Unk_ov004_02205c4419func_ov004_02205c7cEv(b18_f_73c) != 0 && p18::func_ov004_02234ad4() == 0) {
        if (p18::func_020b51a4()) {
            u32 t = 0;
            u32 r = p18::func_020b51d4();
            if (p18::func_0207bf60(p18::data_021dfd8c, r)) {
                t = p18::func_0207e364();
            }
            BOOL f = FALSE;
            volatile u16 *pg = &p18::data_ov004_0224f9ac;
            u32 hi = *pg;
            u32 lo = *pg;
            if (lo >= 0x1323 && hi <= 0x1368) f = TRUE;
            if (f) {
                vfunc_70(0, 0xff);
            } else if (vfunc_70(1, t)) {
                p18::data_ov004_0224f9ac = Unk_ov004_0220ec30_Val(t);
            }
        } else {
            volatile u16 v;
            v = *p18::func_020601cc();
            BOOL f = FALSE;
            u32 hi = v;
            u32 lo = v;
            if (lo >= 0x1323 && hi <= 0x1368) f = TRUE;
            if (f) {
                s32 x;
                if (hi >= 0x1323 && hi <= 0x1368) {
                    x = hi - 0x1323;
                } else {
                    x = -1;
                }
                vfunc_70(1, x);
            } else {
                p18::func_02060158();
                vfunc_70(0, 0xff);
            }
        }
    } else {
        vfunc_70(0, 0xff);
    }
    return TRUE;
}

Unk_ov004_0224a17c::~Unk_ov004_0224a17c() {}

Unk_ov004_0224a17c::Unk_ov004_0224a17c() {}

extern "C" void func_ov004_0220f280() {
    new Unk_ov004_0224a17c;
}

void Unk_ov004_0224a17c::func_ov004_0220f29c() {
    *((u8 *)this + 0x847) = 1;
}

void Unk_ov004_0224a17c::func_ov004_0220f2a8() {
    *((u8 *)this + 0x846) = 1;
}


// ---- part 19: from unk_0220f2bc.cpp
namespace p19 {
extern "C" {
void _ZN18Unk_ov004_022077a419func_ov004_02207c40EP23Unk_ov004_02207854_ListPvi(void *self, Unk_ov004_02206520 *l, s32 a, s32 b);
u32 func_ov004_022087a4(void *self);
u32 func_ov004_02208968(void *self);
void func_ov004_02208980(void *self);
}
}

// list of up to 4 tile positions (ctor/dtor/methods are defined elsewhere)

struct Unk_ov004_0220f6e0_Rec {
    /* 0x00 */ u32 unk_00;
    /* 0x04 */ u32 unk_04;
    /* 0x08 */ u32 unk_08;
};

union Unk_ov004_0220f2c0_Pad {
    u16 h;
    u8 b[2];
};

class Unk_ov004_0224a758 : public Unk_ov004_0224882c {
public:
    Unk_ov004_0224a758();
    virtual ~Unk_ov004_0224a758();
    virtual BOOL vfunc_0c();
    virtual void vfunc_6c(s32 a, void *b);
    virtual BOOL vfunc_7c();
    virtual BOOL vfunc_80();

    /* 0x840 */ s8 unk_840;
    /* 0x841 */ s8 unk_841;
    /* 0x842 */ Unk_ov004_0220f2c0_Pad unk_842;
    /* 0x844 */ Unk_ov004_0220f2c0_Pad unk_844;
    /* 0x846 */ u8 unk_846;
    /* 0x847 */ u8 unk_847;
};

namespace p19 {
extern "C" {
extern u8 *data_021c47c4;
extern u8 data_ov004_0224bbc0[];

void func_0209cf18(void *);
void _ZN12Unk_020dbd5413func_020547a4Ei(void *, u32);
void _ZN12Unk_0205454c13func_0205439cEv(void *);
void _ZN12Unk_0205454c13func_02054720Eiiitt(void *, void *, s32, s32, s32, s32);
void _ZN12Unk_020dbd5413func_02054710Ev(void *);
BOOL _ZN12Unk_020dbd5413func_02054800EPv(void *, u32);
BOOL _ZN12Unk_020dbe7c13func_02056654Ev(void *);
u32 _ZN12Unk_0209c2f413func_0209c348Ev(u32);
u32 func_020b50e8(void);
s32 _ZN18Unk_ov004_022069ec19func_ov004_02206be4Ev(void *);
void *_ZN18Unk_ov004_0220639819func_ov004_022063c8Ej(void *, u32);
void _ZN18Unk_ov004_02235cc019func_ov004_022358e0Ej(void *, s32);
void _ZN18Unk_ov004_02235cc019func_ov004_02235908Ejj(void *, s32, void *);
void _ZN18Unk_ov004_02235cc019func_ov004_0223591cEjj(void *, s32, void *);
s32 func_ov004_02234ad4(void);
s32 func_ov004_02234ba8(void);
void *func_ov004_022354d8(void);
void *_ZN18Unk_ov004_022351bc19func_ov004_02235464EPv(void *, void *);
u16 _ZN18Unk_ov004_022355ac19func_ov004_022354e0Ev(void *);
void *_ZN18Unk_ov004_022355ac19func_ov004_022354ecEv(void *);
BOOL func_ov004_022249d4(s32 *);
BOOL func_ov004_02224c78(s32);
BOOL func_ov004_022249f8(s32 *, void *, void *, u16 *);
void _ZN12Unk_020d967013func_0203e47cEi(void *, Unk_020ddcf0 *);
void _ZN12Unk_020d967013func_0203e488Ei(void *, Unk_020ddcf0 *);
void func_0203d67c(void *);
void _ZN12Unk_020e2a3013func_020a710cEPKc(Unk_020ddcf0 &, void *);
BOOL func_02051da4(void *, s32, s32, s32);
BOOL func_0206ec6c(void);
BOOL func_0206eca4(s32);
void *func_0204ebd8(void *, s32, s32, s32, s32, u32);
BOOL func_0204b2d4(void *);
}
}

BOOL Unk_ov004_0224a758::vfunc_0c() {
    return TRUE;
}

BOOL Unk_ov004_0224a758::vfunc_80() {
    unk_844.h = unk_842.h;
    p19::func_0209cf18(&unk_842);
    if (b19_unk_77c == 0x10) {
        if (!func_ov004_02206f8c() && unk_840 >= 0 && unk_840 != unk_841 && unk_847 != 0) {
            p19::_ZN18Unk_ov004_02235cc019func_ov004_022358e0Ej(b19_f_794, 1);
        }
        unk_841 = unk_840;
        if (unk_840 == -1) {
            if (func_ov004_02206f8c()) {
                unk_840 = 1;
            } else if (!p19::func_ov004_02234ad4() && unk_844.b[1] != unk_842.b[1]) {
                s32 t = unk_842.b[1];
                unk_840 = t % 12;
                if (unk_840 == 0) {
                    unk_840 = 12;
                }
                if (!func_ov004_02206f8c()) {
                    p19::_ZN18Unk_ov004_02235cc019func_ov004_02235908Ejj(b19_f_794, 0x42d, b19_f_7b4);
                }
                p19::_ZN12Unk_0205454c13func_02054720Eiiitt(b19_f_534, p19::_ZN18Unk_ov004_0220639819func_ov004_022063c8Ej((void *)p19::_ZN18Unk_ov004_022069ec19func_ov004_02206be4Ev(b19_f_6c8), 0), 1, 0x1000, 0, 0);
            }
        } else if (unk_840 > 0) {
            if (!func_ov004_02206f8c()) {
                p19::_ZN18Unk_ov004_02235cc019func_ov004_02235908Ejj(b19_f_794, 0x42d, b19_f_7b4);
            }
            p19::_ZN12Unk_0205454c13func_0205439cEv(b19_f_534);
            if (p19::_ZN12Unk_020dbe7c13func_02056654Ev(b19_f_5d0)) {
                p19::_ZN12Unk_0205454c13func_02054720Eiiitt(b19_f_534, p19::_ZN18Unk_ov004_0220639819func_ov004_022063c8Ej((void *)p19::_ZN18Unk_ov004_022069ec19func_ov004_02206be4Ev(b19_f_6c8), 0), 1, 0x1000, 0, 0);
                if (!func_ov004_02206f8c()) {
                    unk_840 = unk_840 - 1;
                }
                if (unk_840 == 0) {
                    unk_840 = -1;
                }
            }
        }
    } else if (b19_unk_77c == 0x2b) {
        p19::func_ov004_02208980(this);
    }
    s32 s = p19::func_ov004_02234ba8();
    if (b19_unk_77c == 0x11) {
        p19::_ZN12Unk_020dbd5413func_020547a4Ei(b19_f_534, s);
    }
    if (unk_846 != 0 && (s == 9 || s == 0x1d)) {
        if (b19_unk_77c == 0x10) {
            p19::_ZN18Unk_ov004_02235cc019func_ov004_0223591cEjj(b19_f_794, 0x4d0, b19_f_7b4);
        } else {
            func_ov004_022090c0();
        }
    }
    unk_846 = 0;
    unk_847 = 0;
    return TRUE;
}

BOOL Unk_ov004_0224a758::vfunc_7c() {
    u32 r4 = p19::func_ov004_02208968(this);
    p19::func_0209cf18(&unk_844);
    unk_842.h = unk_844.h;
    unk_840 = -1;
    if (b19_unk_77c == 0x10) {
        if (p19::_ZN12Unk_020dbd5413func_02054800EPv(b19_f_534, p19::_ZN12Unk_0209c2f413func_0209c348Ev(r4))) {
            p19::_ZN12Unk_0205454c13func_02054720Eiiitt(b19_f_534, p19::_ZN18Unk_ov004_0220639819func_ov004_022063c8Ej((void *)p19::_ZN18Unk_ov004_022069ec19func_ov004_02206be4Ev(b19_f_6c8), 0), 1, 0x1000, 0, 0);
            p19::_ZN12Unk_020dbd5413func_02054710Ev(b19_f_534);
        }
    } else if (b19_unk_77c == 0x11) {
        if (p19::_ZN12Unk_020dbd5413func_02054800EPv(b19_f_534, p19::_ZN12Unk_0209c2f413func_0209c348Ev(r4))) {
            p19::_ZN12Unk_0205454c13func_02054720Eiiitt(b19_f_534, p19::_ZN18Unk_ov004_0220639819func_ov004_022063c8Ej((void *)p19::_ZN18Unk_ov004_022069ec19func_ov004_02206be4Ev(b19_f_6c8), 0), 0, 0x1000, 0, 0);
            p19::_ZN12Unk_020dbd5413func_02054710Ev(b19_f_534);
        }
    } else if (b19_unk_77c == 0x2b) {
        func_ov004_02208de0(0, 0, 0x1000, 0);
    }
    return TRUE;
}

Unk_ov004_0224a758::~Unk_ov004_0224a758() {
}

Unk_ov004_0224a758::Unk_ov004_0224a758() {
}

extern "C" void func_ov004_0220f608() {
    new Unk_ov004_0224a758;
}



























// ---- part 20: from unk_0220fbf4.cpp
namespace p20 {
extern "C" {
void func_ov004_02208a18(void *self, s32 a, s32 b, s32 c);
}
}
namespace p20 {
extern "C" {
BOOL func_ov004_02208980(void *self);
u32 func_ov004_022087a4(void *self);
void _ZN18Unk_ov004_022077a419func_ov004_02207c40EP23Unk_ov004_02207854_ListPvi(void *self, void *a, s32 b, s32 c);
}
}

struct Unk_ov004_0220fde4_Vec {
    s32 x, y, z;
};

struct Unk_ov004_0220fde4_Pos {
    s32 x, y;
};

class Unk_ov004_0224aadc : public Unk_ov004_0224882c {
public:
    Unk_ov004_0224aadc();
    virtual ~Unk_ov004_0224aadc();

    virtual BOOL vfunc_0c();
    virtual void vfunc_4c(u32 a, u8 b);
    virtual BOOL vfunc_70(u32 a, u8 b);
    virtual u8 vfunc_74(u32 a);
    virtual BOOL vfunc_7c();
    virtual BOOL vfunc_80();
    virtual BOOL vfunc_a0();

    void func_ov004_0220f624();
    BOOL func_ov004_0220f650();
    BOOL func_ov004_0220f694();
    BOOL func_ov004_0220f6b8();
    BOOL func_ov004_0220f6bc();
    BOOL func_ov004_0220f6e0();
    BOOL func_ov004_0220f7b4();
    BOOL func_ov004_0220f7d0();
    BOOL func_ov004_0220f7e4();
    BOOL func_ov004_0220f814();
    BOOL func_ov004_0220f86c();
    BOOL func_ov004_0220f878();
    BOOL func_ov004_0220f87c();
    BOOL func_ov004_0220f898();
    BOOL func_ov004_0220f8dc();
    BOOL func_ov004_0220f8f8();
    BOOL func_ov004_0220f914();
    BOOL func_ov004_0220f930();
    BOOL func_ov004_0220f944();
    BOOL func_ov004_0220f974();
    BOOL func_ov004_0220f9d4();
    BOOL func_ov004_0220f9e0();
    BOOL func_ov004_0220f9e4();
    BOOL func_ov004_0220f9e8();
    void func_ov004_0220f9ec();
    BOOL func_ov004_0220fae8(s32 s);
    s32 func_ov004_0220fbf4();
    void func_ov004_0220fc70();
    BOOL func_ov004_0220fca0();
    void func_ov004_0220fcf4();
    BOOL func_ov004_0220fd24();
    void func_ov004_0220fd7c();
    BOOL func_ov004_0220fdac();
    void func_ov004_0220fde4();
    BOOL func_ov004_0220fef8();
    void func_ov004_0220ff44();

    /* 0x840 */ Unk_ov004_02205bcc unk_840;
    /* 0x85c */ u8 unk_85c;
    /* 0x85d */ u8 pad_85d[3];
    /* 0x860 */ u32 unk_860;
};

namespace p20 {
extern "C" {
extern u32 data_ov004_0224006c[];
extern u8 data_ov004_02240048[];
extern u8 data_021edb5c[];

BOOL _ZN18Unk_ov004_02205c4419func_ov004_02205c44Eji(void *, s32, s32);
BOOL _ZN18Unk_ov004_02205c4419func_ov004_02205c6cEv(void *);
BOOL _ZN18Unk_ov004_02205c4419func_ov004_02205c7cEv(void *);
void _ZN18Unk_ov004_0220599419func_ov004_022059b0Ej(void *, s32);
void _ZN18Unk_ov004_02205bccD1Ev(void *);
void _ZN18Unk_ov004_02205bccC1Ev(void *);
void *_ZN18Unk_ov004_022069ec19func_ov004_02206be4Ev(void *);
void _ZN18Unk_ov004_0220639819func_ov004_022063c8Ej(void *, u32);
BOOL func_ov004_02234ad4(void);
BOOL func_ov004_02208894(void);
BOOL func_020b52f8(void);
void *func_ov004_022354d8(void);
void *_ZN18Unk_ov004_022351bc19func_ov004_02235464EPv(void *, void *);
BOOL _ZN18Unk_ov004_022355ac19func_ov004_022354e8Ev(void *);
BOOL func_ov004_02234f80(s32, s32);
s32 func_0202fff0(s32, s32);
void _ZN18Unk_ov004_02206520C1Ev(void *);
void _ZN18Unk_ov004_0220652019func_ov004_02206554Ev(void *);
void func_0203d704(void *, s32);
void func_02094f20(void);
void func_020e93a0(void *, s32);
void _ZN18Unk_ov004_0224882cC2Ev(void *);
void _ZN18Unk_ov004_0224882cD2Ev(void *);
void _ZN18Unk_ov004_0224882cdlEPv(void *);
void *_ZN18Unk_ov004_0224882cnwEm(u32);
u32 _ZN12Unk_020660f813func_020679b4Ev(u32);
u32 _ZN12Unk_020aa3b813func_020aa514Ev(u32);
void _ZN12Unk_020660f813func_02067a84EPhPv(u32, void *, u32);
void _ZN12Unk_020aa3b813func_020aa680Eii(u32, s32, s32);
void _ZN12Unk_020aa3b813func_020aa638EiPKhiS1_PKci(u32, s32, void *, s32, void *, s32, s32);
void _ZN12Unk_020aa3b813func_020aa608Ev(u32);
void _ZN12Unk_020660f813func_020679c0Ei(u32, s32);
void _ZN12Unk_020d967013func_0203e47cEi(void *, void *);
void func_0203d67c(void *);
void func_020ed188(void *);
u32 func_ov004_02209d58(u32, u32, u32, u32, u8, u32);
BOOL func_ov004_02235028(void);
u32 func_02053228(void *);
u32 func_0204b25c(void *);
BOOL func_0206ec6c(void);
BOOL func_0206ed18(void);
u32 func_0206ed38(void);
u16 func_02099048(void);
void *func_0209750c(void);
void _ZN12Unk_0209865c13func_020986d8EPt(void *, void *);
u16 func_0204b248(u32, u32);
void func_0209909c(void *, u32, u32);
}
}

typedef void (Unk_ov004_0224aadc::*Unk_ov004_0220ff44_Fn)();
typedef BOOL (Unk_ov004_0224aadc::*Unk_ov004_0220ffd0_Fn)();

s32 Unk_ov004_0224aadc::func_ov004_0220fbf4() {
    u32 i;
    for (i = 0; i < 3; i++) {
        if (b20_unk_77c == p20::data_ov004_0224006c[i]) {
            return i;
        }
    }
    return -1;
}

void Unk_ov004_0224aadc::vfunc_4c(u32 a, u8 b) {
    switch (a) {
    case 1:
        if (p20::func_020b52f8()) {
            if (p20::func_ov004_02208894()) {
                func_ov004_0220fae8(1);
            } else {
                func_ov004_0220fae8(6);
            }
        } else {
            func_ov004_0220fae8(6);
        }
        break;
    case 8:
        func_ov004_0220fae8(0);
        break;
    }
}

void Unk_ov004_0224aadc::func_ov004_0220fc70() {
    p20::_ZN18Unk_ov004_0220599419func_ov004_022059b0Ej(b20_f_760, 1);
    if (p20::func_ov004_02208980(this)) {
        vfunc_70(0, 0xff);
    }
}

BOOL Unk_ov004_0224aadc::func_ov004_0220fca0() {
    p20::_ZN18Unk_ov004_02205c4419func_ov004_02205c44Eji(b20_f_73c, 1, 0);
    func_ov004_02209108();
    if (b20_unk_77c == 0xf) {
        func_ov004_02208ba8(1, 1, 0x1000, 0);
    } else {
        p20::func_ov004_02208a18(this, 0, 3, 0x1000);
    }
    return TRUE;
}

void Unk_ov004_0224aadc::func_ov004_0220fcf4() {
    p20::_ZN18Unk_ov004_0220599419func_ov004_022059b0Ej(b20_f_760, 1);
    if (func_ov004_02206f8c()) {
        vfunc_70(3, 0xff);
    }
}

BOOL Unk_ov004_0224aadc::func_ov004_0220fd24() {
    p20::_ZN18Unk_ov004_02205c4419func_ov004_02205c44Eji(b20_f_73c, 0, 0);
    if (b20_unk_77c == 0xf) {
        p20::_ZN18Unk_ov004_0220639819func_ov004_022063c8Ej(p20::_ZN18Unk_ov004_022069ec19func_ov004_02206be4Ev(b20_f_6c8), 0);
        p20::func_ov004_02208a18(this, 0, 1, 0x1000);
    } else {
        p20::func_ov004_02208a18(this, 0, 1, 0x1000);
    }
    return TRUE;
}

void Unk_ov004_0224aadc::func_ov004_0220fd7c() {
    p20::_ZN18Unk_ov004_0220599419func_ov004_022059b0Ej(b20_f_760, 1);
    if (p20::func_ov004_02208980(this)) {
        vfunc_70(2, 0xff);
    }
}

BOOL Unk_ov004_0224aadc::func_ov004_0220fdac() {
    p20::_ZN18Unk_ov004_02205c4419func_ov004_02205c44Eji(b20_f_73c, 0, 0);
    func_ov004_02209150();
    func_ov004_02208ba8(0, 1, 0x1000, 0);
    return TRUE;
}

void Unk_ov004_0224aadc::func_ov004_0220fde4() {
    s32 t;
    u32 i;
    p20::_ZN18Unk_ov004_0220599419func_ov004_022059b0Ej(b20_f_760, 0);
    void *e = p20::_ZN18Unk_ov004_022351bc19func_ov004_02235464EPv(p20::func_ov004_022354d8(), this);
    if (p20::_ZN18Unk_ov004_02205c4419func_ov004_02205c6cEv(b20_f_73c) && e != NULL && p20::_ZN18Unk_ov004_022355ac19func_ov004_022354e8Ev(e) == 0) {
        if (b20_unk_77c == 0xb) {
            Unk_ov004_02206520 arr;
            Unk_ov004_0220fde4_Vec v;
            p20::_ZN18Unk_ov004_022077a419func_ov004_02207c40EP23Unk_ov004_02207854_ListPvi(this, &arr, 0, 0);
            v.x = 0;
            v.y = 0;
            v.z = 0x2000;
            p20::func_020e93a0(&v, *(s16 *)((u8 *)this + 0x8e));
            volatile Unk_ov004_0220fde4_Pos p;
            p.x = 0;
            p.y = 0;
            p.x = v.x >> 13;
            p.y = v.z >> 13;
            for (i = 0; i < arr.func_ov004_0220652c(); i++) {
                s32 a = p.x + arr.func_ov004_02206520(i)->x;
                t = p.y + arr.func_ov004_02206520(i)->y;
                if (p20::func_ov004_02234f80(a, t) != 0 || p20::func_0202fff0(a, t) != -1) {
                    p20::_ZN18Unk_ov004_02205c4419func_ov004_02205c44Eji(b20_f_73c, 1, 0);
                    arr.func_ov004_02206554();
                    return;
                }
            }
            arr.func_ov004_02206554();
        }
        p20::func_0203d704(this, 0);
        p20::func_02094f20();
    } else {
        if (func_ov004_02206f8c()) {
            vfunc_70(1, 0xff);
        }
    }
}

BOOL Unk_ov004_0224aadc::func_ov004_0220fef8() {
    p20::_ZN18Unk_ov004_02205c4419func_ov004_02205c44Eji(b20_f_73c, 1, 0);
    if (b20_unk_77c == 0xf) {
        p20::func_ov004_02208a18(this, 1, 1, 0x1000);
    } else {
        func_ov004_02208ba8(0, 3, 0x1000, 0);
    }
    return TRUE;
}

void Unk_ov004_0224aadc::func_ov004_0220ff44() {
    static Unk_ov004_0220ff44_Fn tbl[4] = {
        &Unk_ov004_0224aadc::func_ov004_0220fde4,
        &Unk_ov004_0224aadc::func_ov004_0220fd7c,
        &Unk_ov004_0224aadc::func_ov004_0220fcf4,
        &Unk_ov004_0224aadc::func_ov004_0220fc70,
    };
    if (unk_85c < 4) {
        (this->*tbl[unk_85c])();
    }
}

BOOL Unk_ov004_0224aadc::vfunc_70(u32 a, u8 b) {
    Unk_ov004_0224882c::vfunc_70(a, b);
    static Unk_ov004_0220ffd0_Fn tbl[4] = {
        &Unk_ov004_0224aadc::func_ov004_0220fef8,
        &Unk_ov004_0224aadc::func_ov004_0220fdac,
        &Unk_ov004_0224aadc::func_ov004_0220fd24,
        &Unk_ov004_0224aadc::func_ov004_0220fca0,
    };
    if ((u32)a < 4) {
        if ((this->*tbl[a])()) {
            unk_85c = a;
            return TRUE;
        }
    }
    return FALSE;
}

u8 Unk_ov004_0224aadc::vfunc_74(u32 a) {
    if (a < 4) {
        return p20::data_ov004_02240048[a];
    }
    return 0;
}

BOOL Unk_ov004_0224aadc::vfunc_a0() {
    if (Unk_ov004_0224882c::vfunc_a0()) {
        if (unk_860 == 0) {
            return TRUE;
        }
    }
    return FALSE;
}

BOOL Unk_ov004_0224aadc::vfunc_0c() {
    return TRUE;
}

BOOL Unk_ov004_0224aadc::vfunc_80() {
    func_ov004_0220f9ec();
    func_ov004_0220ff44();
    return TRUE;
}

BOOL Unk_ov004_0224aadc::vfunc_7c() {
    p20::_ZN18Unk_ov004_0220599419func_ov004_022059b0Ej(b20_f_760, 0);
    if (b20_unk_768 == 1) {
        p20::_ZN18Unk_ov004_02205c4419func_ov004_02205c44Eji(b20_f_73c, 1, 0);
    }
    if (b20_unk_77c == 0xf) {
        func_ov004_02208de0(0, 1, 0x1000, 0);
    } else {
        func_ov004_02208de0(0, 3, 0x1000, 0);
    }
    if (p20::_ZN18Unk_ov004_02205c4419func_ov004_02205c7cEv(b20_f_73c) || p20::func_ov004_02234ad4()) {
        vfunc_70(0, 0xff);
    } else {
        vfunc_70(2, 0xff);
    }
    func_ov004_0220fae8(0);
    return TRUE;
}

Unk_ov004_0224aadc::~Unk_ov004_0224aadc() {
}

Unk_ov004_0224aadc::Unk_ov004_0224aadc() {
    unk_85c = 0;
}

extern "C" void func_ov004_0221020c() {
    new Unk_ov004_0224aadc;
}









// ---- part 21: from unk_02210534.cpp
namespace p21 {
extern "C" {
u32 func_ov004_022087a4(void *self);
}
}

struct Unk_ov004_0221076c_R {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
};

namespace p21 {
extern "C" {
void func_0204ed8c(void *out, s32 x, s32 y);
void func_0204ee10(s32 *x, s32 *y, void *v);
s32 func_020e9650(void *a, void *b);
void func_020e93a0(void *v, s32 a);
void func_01ffca8c(void *a, void *b, void *c);
void *func_02095204(s32 i);
BOOL func_ov004_022350c8(void);
BOOL func_ov004_022087e8(void *v, s32 a, s32 b, s32 c, s32 d);
BOOL func_ov004_02234f80(s32 a, s32 b);
BOOL func_ov004_02234f6c(void *p);
s32 func_0202fff0(s32 a, s32 b);
s32 func_0202ffdc(void *p);
void *func_ov004_02235718(void);
Unk_ov004_0224882c *_ZN18Unk_ov004_0223570819func_ov004_022355d8Eiii(void *mgr, s32 x, s32 y, s32 z);
u32 func_02052f44(u32 a);
extern char data_ov004_0224bbb0[];
extern char data_ov004_0224bbd0[];
extern char data_ov004_0224bbe4[];
extern s32 data_020c8cbc;
extern void *data_020cbb18;

s32 func_0206ea84(BOOL (*cb)(void *, s32));
s32 func_0206ead4(s32 a, s32 b);
BOOL func_0204b2d4(void);
s32 func_02052ff8(void *p);
void _ZN12Unk_020d967013func_0203e47cEi(void *p, Unk_020ddcf0 *q);
void _ZN12Unk_020d967013func_0203e488Ei(void *p, Unk_020ddcf0 *q);
s32 func_0203d67c(void *p);
s32 func_0203d704(void *p, s32 a);
s32 func_020b4934(void);
void func_020b4f58(s32 a, s32 b, s32 c, s32 d);
void func_020a0984(void);
BOOL func_020a0318(void);
BOOL func_020a0304(void);
s32 func_020974f8(void);
u32 func_020b0f54(void);
s32 _ZN12Unk_020cbb1813func_02072e44Ev(void *p);
void func_ov004_02224ad8(u32 a, u32 b);
BOOL func_ov004_02224b14(Unk_ov004_0221076c_R *a, s32 *b, u16 *c, s16 d, s32 e);
void *func_ov004_022354d8(void);
void *_ZN18Unk_ov004_022351bc19func_ov004_02235464EPv(void *a, void *b);
u16 _ZN18Unk_ov004_022355ac19func_ov004_022354e0Ev(void *o);
Unk_ov004_0221076c_R *_ZN18Unk_ov004_022355ac19func_ov004_022354f0Ev(void *o);
s32 _ZN18Unk_ov004_022355ac19func_ov004_022354e8Ev(void *o);
s32 _ZN18Unk_ov004_022355ac19func_ov004_022354f8Ev(void *o);
}
}

struct Unk_ov004_02210d58_P {
    s32 x, y;
    Unk_ov004_02210d58_P() {
        x = 0;
        y = 0;
    }
};

extern "C" {
BOOL func_ov004_02210a98(Unk_ov004_02210d58_P *p);
}


class Unk_ov004_02210d68 {
public:
    Unk_ov004_02210d68();
    ~Unk_ov004_02210d68();
    Unk_ov004_02210d58_P *func_ov004_02210d58(u32 i);

    Unk_ov004_02210d58_P v[2];
};

class Unk_ov004_02210d28 : public Unk_ov004_02210d68 {
public:
    Unk_ov004_02210d28();
    ~Unk_ov004_02210d28();
};

class Unk_ov004_02210d48 : public Unk_ov004_02210d68 {
public:
    Unk_ov004_02210d48();
    ~Unk_ov004_02210d48();
};

struct Unk_ov004_022108f0_V {
    s32 x, y, z;
};

struct Unk_ov004_02210d7c_V {
    s32 x, y, z;
    Unk_ov004_02210d7c_V() {}
    ~Unk_ov004_02210d7c_V() {}
};

struct Unk_ov004_02210dd8_Chk {
    static inline BOOL R(u16 v) {
        return v == 0x37 ? TRUE : FALSE;
    }
};

struct Unk_ov004_022108f0_Pl {
    u8 pad_00[0x5c];
    s32 x, y, z;
};

struct Unk_ov004_022105d8_Pad {
    s32 v[2];
    Unk_ov004_022105d8_Pad() {}
    ~Unk_ov004_022105d8_Pad() {}
};

class Unk_ov004_0224ba18 : public Unk_ov004_0224882c {
public:
    Unk_ov004_0224ba18();
    virtual ~Unk_ov004_0224ba18();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_24();
    virtual BOOL vfunc_48(void *a);
    virtual void vfunc_4c(u32 a, u8 b);
    virtual BOOL vfunc_70(u32 a, u8 v);
    virtual BOOL vfunc_7c();
    virtual BOOL vfunc_80();
    // overrides of slots 0x14 / 0x18 of the secondary base Unk_020ddcf0 (new slots at the end of the vtable + thunks)
    virtual void vfunc_14();
    virtual void vfunc_s18();

    void func_ov004_022103ac();
    BOOL func_ov004_022103ec();
    void func_ov004_022103fc();
    BOOL func_ov004_02210488();
    void func_ov004_022104b8();
    BOOL func_ov004_02210534();
    void func_ov004_02210538();
    BOOL func_ov004_0221059c();
    void func_ov004_022105a0();
    BOOL func_ov004_022105d0();
    void func_ov004_022105d4();
    BOOL func_ov004_022105d8();
    void func_ov004_0221061c();
    BOOL func_ov004_02210630();
    void func_ov004_02210634();
    BOOL func_ov004_02210678();
    void func_ov004_0221067c();
    BOOL func_ov004_022106bc();
    void func_ov004_022106c0();
    BOOL func_ov004_022106c4();
    void func_ov004_0221072c();
    BOOL func_ov004_0221075c();
    void func_ov004_0221076c();
    BOOL func_ov004_022107cc();
    void func_ov004_022107d0();
    BOOL func_ov004_0221087c();
    void func_ov004_022108f0();
    BOOL func_ov004_02210ac4();
    void func_ov004_02210ad4();
    void func_ov004_02210d7c(Unk_ov004_022108f0_V *out, Unk_ov004_022108f0_V *in, s32 ang, Unk_ov004_022108f0_V *opt);
    s32 func_ov004_02210dd8(Unk_ov004_022108f0_V *a, s32 b, Unk_ov004_022108f0_V *c);
    u32 func_ov004_02210f0c(void *o);
    u32 func_ov004_02210f74(void *o);
    BOOL func_ov004_02211130();

    /* 0x840 */ u16 unk_840;
    /* 0x842 */ u8 unk_842;
    /* 0x843 */ u8 unk_843;
    /* 0x844 */ u8 unk_844;
    /* 0x845 */ u8 pad_845;
    /* 0x846 */ u16 unk_846;
    /* 0x848 */ u16 unk_848;
    /* 0x84a */ u16 pad_84a;
    /* 0x84c */ s32 unk_84c;
    /* 0x850 */ s32 unk_850;
    /* 0x854 */ s32 unk_854;
    /* 0x858 */ u16 unk_858;
    /* 0x85a */ u8 unk_85a;
    /* 0x85b */ u8 pad_85b;
    /* 0x85c */ Unk_ov004_022059f4 unk_85c;
};

extern "C" BOOL func_ov004_02210574(void *p, s32 b) {
    if (b == 0) {
        if (p21::func_0204b2d4()) {
            if (p21::func_02052ff8(p) == 5) {
                return TRUE;
            }
        }
    }
    return FALSE;
}

BOOL Unk_ov004_0224ba18::func_ov004_02210534() {
    return TRUE;
}

void Unk_ov004_0224ba18::func_ov004_02210538() {
    if (((Unk_ov004_0220bdbc_P *)unk_3c)) {
        if (((Unk_ov004_0220bdbc_P *)unk_3c)->unk_04 == 0) {
            if (p21::func_0206ead4(p21::func_0206ea84(func_ov004_02210574), 0x28)) {
                vfunc_70(0xb, 0xff);
            }
        }
    }
}

BOOL Unk_ov004_0224ba18::func_ov004_0221059c() {
    return TRUE;
}

void Unk_ov004_0224ba18::func_ov004_022105a0() {
    if (((Unk_ov004_0220bdbc_P *)unk_3c)) {
        if (((Unk_ov004_0220bdbc_P *)unk_3c)->unk_04 == 0) {
            p21::_ZN12Unk_020d967013func_0203e47cEi(this, this);
            p21::func_0203d67c(this);
        }
    }
}

BOOL Unk_ov004_0224ba18::func_ov004_022105d0() {
    return TRUE;
}

void Unk_ov004_0224ba18::func_ov004_022105d4() {
}

BOOL Unk_ov004_0224ba18::func_ov004_022105d8() {
    Unk_ov004_022105d8_Pad pad;
    p21::_ZN12Unk_020d967013func_0203e488Ei(this, this);
    ((Unk_ov004_0220bdbc_P *)unk_3c)->unk_08 = 1;
    Unk_020e2a30::func_020a710c(p21::data_ov004_0224bbb0);
    unk_1e = 4;
    return TRUE;
}

void Unk_ov004_0224ba18::func_ov004_0221061c() {
    vfunc_70(8, 0xff);
}

BOOL Unk_ov004_0224ba18::func_ov004_02210630() {
    return TRUE;
}

void Unk_ov004_0224ba18::func_ov004_02210634() {
    if (((Unk_ov004_0220bdbc_P *)unk_3c)) {
        if (((Unk_ov004_0220bdbc_P *)unk_3c)->unk_04 == 0) {
            p21::_ZN12Unk_020d967013func_0203e47cEi(this, this);
            p21::func_0203d67c(this);
            p21::func_020b4f58(p21::func_020b4934(), 0x2e, 2, 0);
            p21::func_020a0984();
        }
    }
}

BOOL Unk_ov004_0224ba18::func_ov004_02210678() {
    return TRUE;
}

void Unk_ov004_0224ba18::func_ov004_0221067c() {
    if (((Unk_ov004_0220bdbc_P *)unk_3c)) {
        if (((Unk_ov004_0220bdbc_P *)unk_3c)->unk_04 == 0) {
            p21::func_ov004_02224ad8(unk_842, 0);
            p21::_ZN12Unk_020d967013func_0203e47cEi(this, this);
            p21::func_0203d67c(this);
        }
    }
}

BOOL Unk_ov004_0224ba18::func_ov004_022106bc() {
    return TRUE;
}

void Unk_ov004_0224ba18::func_ov004_022106c0() {
}

BOOL Unk_ov004_0224ba18::func_ov004_022106c4() {
    Unk_ov004_022105d8_Pad pad;
    p21::_ZN12Unk_020d967013func_0203e488Ei(this, this);
    ((Unk_ov004_0220bdbc_P *)unk_3c)->unk_08 = 1;
    if (p21::func_020a0318() || p21::func_020a0304()) {
        Unk_020e2a30::func_020a710c(p21::data_ov004_0224bbd0);
        unk_1e = 0x19;
    } else {
        Unk_020e2a30::func_020a710c(p21::data_ov004_0224bbe4);
        unk_1e = 0;
    }
    return TRUE;
}

void Unk_ov004_0224ba18::func_ov004_0221072c() {
    if (unk_846 < 0x18) {
        unk_846++;
    }
    if (unk_846 == 0x18) {
        vfunc_70(4, 0xff);
    }
}

BOOL Unk_ov004_0224ba18::func_ov004_0221075c() {
    unk_846 = 0;
    return TRUE;
}

void Unk_ov004_0224ba18::func_ov004_0221076c() {
    void *o = p21::_ZN18Unk_ov004_022351bc19func_ov004_02235464EPv(p21::func_ov004_022354d8(), this);
    u16 v = p21::_ZN18Unk_ov004_022355ac19func_ov004_022354e0Ev(o);
    Unk_ov004_0221076c_R *a = p21::_ZN18Unk_ov004_022355ac19func_ov004_022354f0Ev(o);
    Unk_ov004_0221076c_R *b = p21::_ZN18Unk_ov004_022355ac19func_ov004_022354f0Ev(o);
    if (p21::func_ov004_02224b14(a, &b->unk_08, &v, (s16)(unk_8e - 0x4000), 1)) {
        vfunc_70(3, 0xff);
    }
}

BOOL Unk_ov004_0224ba18::func_ov004_022107cc() {
    return TRUE;
}

void Unk_ov004_0224ba18::func_ov004_022107d0() {
    BOOL r4 = FALSE;
    unk_854 = 0;
    void *o = p21::_ZN18Unk_ov004_022351bc19func_ov004_02235464EPv(p21::func_ov004_022354d8(), this);
    if (o) {
        if (unk_844 == p21::func_020974f8()) {
            if (p21::_ZN18Unk_ov004_022355ac19func_ov004_022354e8Ev(o) == 2 || p21::_ZN18Unk_ov004_022355ac19func_ov004_022354e8Ev(o) == 0) {
                unk_854 = 1;
                if (unk_840 < 7) {
                    r4 = TRUE;
                    unk_840++;
                }
                if (p21::_ZN18Unk_ov004_022355ac19func_ov004_022354f8Ev(o) > 0x200) {
                    if (unk_840 >= 7) {
                        if (p21::_ZN12Unk_020cbb1813func_02072e44Ev(p21::data_020cbb18) == 0) {
                            p21::func_0203d704(this, 0);
                        }
                    }
                }
            } else {
                if (p21::func_020b0f54() <= 1) {
                    unk_854 = 2;
                }
            }
        }
    }
    if (r4 == 0) {
        unk_840 = 0;
    }
}

BOOL Unk_ov004_0224ba18::func_ov004_0221087c() {
    unk_842 = (unk_5c[0] < (p21::data_020c8cbc >> 1)) ? 1 : 0;
    unk_843 = (unk_5c[2] < 0x16000) ? 1 : 0;
    if (unk_842) {
        if (unk_843) {
            unk_844 = 0;
        } else {
            unk_844 = 2;
        }
    } else {
        if (unk_843) {
            unk_844 = 1;
        } else {
            unk_844 = 3;
        }
    }
    return TRUE;
}

BOOL Unk_ov004_0224ba18::func_ov004_02210ac4() {
    unk_840 = 0;
    return TRUE;
}

void Unk_ov004_0224ba18::func_ov004_022108f0() {
    u16 v;
    BOOL r7 = FALSE;
    void *o = p21::_ZN18Unk_ov004_022351bc19func_ov004_02235464EPv(p21::func_ov004_022354d8(), this);
    Unk_ov004_022108f0_Pl *pl = (Unk_ov004_022108f0_Pl *)p21::func_02095204(4);
    if (o != 0) {
        if (pl != 0) {
            if (p21::func_ov004_022350c8() != 0) {
                if (p21::_ZN18Unk_ov004_022355ac19func_ov004_022354e8Ev(o) == 2 || p21::_ZN18Unk_ov004_022355ac19func_ov004_022354e8Ev(o) == 0) {
                    Unk_ov004_02210d48 q;
                    Unk_ov004_022108f0_V a, b, c, e, f;
                    func_ov004_02210f74(&q);
                    Unk_ov004_02210d58_P *p0 = q.func_ov004_02210d58(0);
                    p21::func_0204ed8c(&a, p0->x, p0->y);
                    Unk_ov004_02210d58_P *p1 = q.func_ov004_02210d58(1);
                    p21::func_0204ed8c(&b, p1->x, p1->y);
                    s32 *pv = &pl->x;
                    c.x = pl->x;
                    c.y = pv[1];
                    c.z = pv[2];
                    s32 d0 = p21::func_020e9650(&c, &a);
                    s32 d1 = p21::func_020e9650(&c, &b);
                    Unk_ov004_02210d58_P sel;
                    if (d0 < d1) {
                        Unk_ov004_02210d58_P *t = q.func_ov004_02210d58(0);
                        sel.x = t->x;
                        sel.y = t->y;
                    } else {
                        Unk_ov004_02210d58_P *t = q.func_ov004_02210d58(1);
                        sel.x = t->x;
                        sel.y = t->y;
                    }
                    if (func_ov004_02210a98(&sel)) {
                        e.x = 0;
                        e.y = 0;
                        e.z = 0x2000;
                        p21::func_020e93a0(&e, p21::_ZN18Unk_ov004_022355ac19func_ov004_022354e0Ev(o));
                        s32 z = e.z + p21::_ZN18Unk_ov004_022355ac19func_ov004_022354f0Ev(o)->unk_08;
                        f.x = e.x + p21::_ZN18Unk_ov004_022355ac19func_ov004_022354f0Ev(o)->unk_00;
                        f.y = 0;
                        f.z = z;
                        if (p21::func_ov004_022087e8(&f, 0x800, 0x2000, 0x800, 0)) {
                            if (unk_840 < 7) {
                                r7 = TRUE;
                                unk_840++;
                            }
                            if (p21::_ZN18Unk_ov004_022355ac19func_ov004_022354f8Ev(o) > 0x200) {
                                if (unk_840 >= 7) {
                                    v = p21::_ZN18Unk_ov004_022355ac19func_ov004_022354e0Ev(o);
                                    Unk_ov004_0221076c_R *ra = p21::_ZN18Unk_ov004_022355ac19func_ov004_022354f0Ev(o);
                                    Unk_ov004_0221076c_R *rb = p21::_ZN18Unk_ov004_022355ac19func_ov004_022354f0Ev(o);
                                    p21::func_ov004_02224b14(ra, &rb->unk_08, &v, (s16)(unk_8e - 0x4000), 0);
                                    unk_840 = 0;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (r7 == 0) {
        unk_840 = 0;
    }
}

s32 Unk_ov004_0224ba18::func_ov004_02210dd8(Unk_ov004_022108f0_V *a, s32 b, Unk_ov004_022108f0_V *c) {
    Unk_ov004_022108f0_V out;
    s32 x, y;
    func_ov004_02210d7c(&out, a, b, c);
    p21::func_0204ee10(&x, &y, &out);
    Unk_ov004_0224882c *obj = p21::_ZN18Unk_ov004_0223570819func_ov004_022355d8Eiii(p21::func_ov004_02235718(), x, y, 0);
    if (p21::func_ov004_022087e8(&out, 0x800, 0x2000, 0x800, 0) == 0) {
        return 0;
    }
    if (obj != 0) {
        if (obj == this) {
            return 1;
        }
        if (p21::func_02052f44(p21::func_ov004_022087a4(obj)) != 0) {
            return 2;
        }
        if (unk_8e == obj->unk_8e) {
            if (Unk_ov004_02210dd8_Chk::R(*(u16 *)((u8 *)obj + 0xc))) {
                Unk_ov004_02210d28 q1, q2;
                u32 n1 = func_ov004_02210f0c(&q1);
                u32 n2 = ((Unk_ov004_0224ba18 *)obj)->func_ov004_02210f0c(&q2);
                u32 i, j;
                for (i = 0; i < n1; i++) {
                    Unk_ov004_02210d58_P *p = q1.func_ov004_02210d58(i);
                    s32 px = p->x;
                    s32 py = p->y;
                    for (j = 0; j < n2; j++) {
                        Unk_ov004_02210d58_P *q = q2.func_ov004_02210d58(j);
                        s32 qy = q->y;
                        s32 qx = q->x;
                        qx = px - qx;
                        if (qx < 0) qx = -qx;
                        qy = py - qy;
                        if (qy < 0) qy = -qy;
                        if (qx + qy == 1) {
                            return 1;
                        }
                    }
                }
            }
        }
    } else {
        if (p21::func_ov004_02234f6c(&out) == 0) {
            if (p21::func_0202ffdc(&out) == -1) {
                return 2;
            }
        }
    }
    return 0;
}

extern "C" BOOL func_ov004_02210a98(Unk_ov004_02210d58_P *p) {
    if (p21::func_ov004_02234f80(p->x, p->y) == 0) {
        if (p21::func_0202fff0(p->x, p->y) == -1) {
            return TRUE;
        }
    }
    return FALSE;
}

typedef void (Unk_ov004_0224ba18::*Unk_ov004_02210ad4_Fn)();
typedef BOOL (Unk_ov004_0224ba18::*Unk_ov004_02210bec_Fn)();

void Unk_ov004_0224ba18::func_ov004_02210ad4() {
    static Unk_ov004_02210ad4_Fn tbl[14] = {
        &Unk_ov004_0224ba18::func_ov004_022108f0,
        &Unk_ov004_0224ba18::func_ov004_022107d0,
        &Unk_ov004_0224ba18::func_ov004_0221076c,
        &Unk_ov004_0224ba18::func_ov004_0221072c,
        &Unk_ov004_0224ba18::func_ov004_022106c0,
        &Unk_ov004_0224ba18::func_ov004_0221067c,
        &Unk_ov004_0224ba18::func_ov004_02210634,
        &Unk_ov004_0224ba18::func_ov004_0221061c,
        &Unk_ov004_0224ba18::func_ov004_022105d4,
        &Unk_ov004_0224ba18::func_ov004_022105a0,
        &Unk_ov004_0224ba18::func_ov004_02210538,
        &Unk_ov004_0224ba18::func_ov004_022104b8,
        &Unk_ov004_0224ba18::func_ov004_022103fc,
        &Unk_ov004_0224ba18::func_ov004_022103ac,
    };
    if (unk_85a < 14) {
        (this->*tbl[unk_85a])();
    }
}

BOOL Unk_ov004_0224ba18::vfunc_70(u32 a, u8 v) {
    Unk_ov004_0224882c::vfunc_70(a, v);
    static Unk_ov004_02210bec_Fn tbl[14] = {
        &Unk_ov004_0224ba18::func_ov004_02210ac4,
        &Unk_ov004_0224ba18::func_ov004_0221087c,
        &Unk_ov004_0224ba18::func_ov004_022107cc,
        &Unk_ov004_0224ba18::func_ov004_0221075c,
        &Unk_ov004_0224ba18::func_ov004_022106c4,
        &Unk_ov004_0224ba18::func_ov004_022106bc,
        &Unk_ov004_0224ba18::func_ov004_02210678,
        &Unk_ov004_0224ba18::func_ov004_02210630,
        &Unk_ov004_0224ba18::func_ov004_022105d8,
        &Unk_ov004_0224ba18::func_ov004_022105d0,
        &Unk_ov004_0224ba18::func_ov004_0221059c,
        &Unk_ov004_0224ba18::func_ov004_02210534,
        &Unk_ov004_0224ba18::func_ov004_02210488,
        &Unk_ov004_0224ba18::func_ov004_022103ec,
    };
    if ((u32)a < 14) {
        if ((this->*tbl[a])()) {
            unk_85a = a;
            return TRUE;
        }
    }
    return FALSE;
}

void Unk_ov004_0224ba18::func_ov004_02210d7c(Unk_ov004_022108f0_V *out, Unk_ov004_022108f0_V *in, s32 ang, Unk_ov004_022108f0_V *opt) {
    out->x = in->x;
    out->y = in->y;
    out->z = in->z;
    Unk_ov004_02210d7c_V t;
    t.x = 0;
    t.y = 0;
    t.z = 0;
    if (opt) {
        t.x = opt->x;
        t.y = opt->y;
        t.z = opt->z;
    }
    Unk_ov004_02210d7c_V w;
    w.x = t.x;
    w.y = t.y;
    w.z = t.z + 0x1000;
    p21::func_020e93a0(&w, ang);
    p21::func_01ffca8c(out, &w, out);
}

Unk_ov004_02210d58_P *Unk_ov004_02210d68::func_ov004_02210d58(u32 i) {
    return &v[i & 1];
}

Unk_ov004_02210d68::Unk_ov004_02210d68() {
}

Unk_ov004_02210d68::~Unk_ov004_02210d68() {
}

Unk_ov004_02210d28::Unk_ov004_02210d28() {
}

Unk_ov004_02210d28::~Unk_ov004_02210d28() {
}

Unk_ov004_02210d48::Unk_ov004_02210d48() {
}

Unk_ov004_02210d48::~Unk_ov004_02210d48() {
}

// ---- part 22: from unk_02210f0c.cpp

struct Unk_ov004_02210f0c_V3 {
    s32 x, y, z;
};

// list of up to 4 tile positions (ctor/dtor/methods are defined elsewhere)

struct Unk_ov004_02210f0c_Row {
    Unk_ov004_02210f0c_V3 *unk_00;
    u32 unk_04;
};

namespace p22 {
extern "C" {
extern Unk_ov004_02210f0c_Row data_ov004_02240078[];
extern Unk_ov004_02210f0c_V3 *data_ov004_02249028[];
extern u8 data_ov004_02240050[];
extern void *data_020cbb18;

void func_ov004_02208938(Unk_ov004_0224882c *self, void *out, void *src);
void _ZN18Unk_ov004_0220599419func_ov004_022059b0Ej(void *p, s32 v);
void _ZN18Unk_ov004_022059f419func_ov004_022059f4Ev(void *p);
void _ZN18Unk_ov004_022059f419func_ov004_02205a64Ejj(void *p, u32 a, s32 b);
void _ZN18Unk_ov004_02205c4419func_ov004_02205c44Eji(void *p, s32 a, s32 b);
BOOL _ZN18Unk_ov004_02205c4419func_ov004_02205c6cEv(void *p);
BOOL _ZN18Unk_ov004_02205c4419func_ov004_02205c7cEv(void *p);
BOOL func_ov004_02224c24(void *out, u32 i);
BOOL func_ov004_02224c30(void *out, u32 i);
void func_ov004_02224a80(void *a, void *b, void *c, void *d);
void _ZN18Unk_ov004_022077a419func_ov004_02207c40EP23Unk_ov004_02207854_ListPvi(Unk_ov004_0224882c *o, Unk_ov004_02206520 *l, s32 a, s32 b);
BOOL func_ov004_02208980(Unk_ov004_0224882c *o);
BOOL _ZN18Unk_ov004_0224882c19func_ov004_02209198Ev(Unk_ov004_0224882c *o);
BOOL _ZN18Unk_ov004_0224882c19func_ov004_02209108Ev(Unk_ov004_0224882c *o);
BOOL _ZN18Unk_ov004_0224882c19func_ov004_02209150Ev(Unk_ov004_0224882c *o);
BOOL _ZN18Unk_ov004_0224882c19func_ov004_022091e0Ev(Unk_ov004_0224882c *o);
BOOL _ZN18Unk_ov004_0224882c19func_ov004_02206f8cEv(Unk_ov004_0224882c *o);
void _ZN18Unk_ov004_0224882c19func_ov004_02208de0Eiiii(Unk_ov004_0224882c *o, s32 a, s32 b, s32 c, s32 d);
void func_ov004_02208a18(Unk_ov004_0224882c *o, s32 a, s32 b, s32 c);
void _ZN18Unk_ov004_0224882c19func_ov004_02208ba8Eiiij(Unk_ov004_0224882c *o, s32 a, s32 b, s32 c, s32 d);
BOOL func_ov004_022087e8(void *v, s32 a, s32 b, s32 c, s32 d);
void func_0204ee10(s32 *a, s32 *b, void *v);
void func_02051cc8(void *o, s32 a, s32 b, s32 c);
BOOL _ZN12Unk_020cbb1813func_02072e44Ev(void *p);
BOOL func_020b52d0(void);
void *_ZN18Unk_ov004_022355ac19func_ov004_022354ecEv(void *o);
u32 _ZN18Unk_ov004_022355ac19func_ov004_022354f4Ev(void *o);
u32 _ZN18Unk_ov004_022355ac19func_ov004_022354e0Ev(void *o);
void func_020e93a0(void *v, u32 a);
void func_01ffca8c(void *a, void *b, void *c);
void *func_ov004_022354d8(void);
void *_ZN18Unk_ov004_022351bc19func_ov004_02235464EPv(void *mgr, void *o);
BOOL func_ov004_022350c8(void *o);
s32 _ZN18Unk_ov004_022355ac19func_ov004_022354e8Ev(void *o);
s32 _ZN18Unk_ov004_022355ac19func_ov004_022354f8Ev(void *o);
BOOL func_ov004_02234ad4(void);
}
}

// ---------------------------------------------------------------- class Unk_ov004_0224b694
class Unk_ov004_0224b694 : public Unk_ov004_0224882c {
public:
    Unk_ov004_0224b694();
    virtual ~Unk_ov004_0224b694();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_7c();
    virtual BOOL vfunc_80();

    void func_ov004_0221120c(Unk_ov004_02210f0c_V3 *out, void *o);

    /* 0x840 */ u16 unk_840;
    /* 0x842 */ u16 pad_842;
};

// ---------------------------------------------------------------- class Unk_ov004_0224ba18

// ---------------------------------------------------------------- class Unk_ov004_02249a74
class Unk_ov004_02249a74 : public Unk_ov004_0224882c {
public:
    Unk_ov004_02249a74();
    virtual ~Unk_ov004_02249a74();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_70(u32 a, u8 b);
    virtual u8 vfunc_74(u32 a);
    virtual BOOL vfunc_7c();
    virtual BOOL vfunc_80();

    void func_ov004_022114f0();
    BOOL func_ov004_02211520();
    void func_ov004_02211554();
    BOOL func_ov004_022115a4();
    void func_ov004_022115d0();
    BOOL func_ov004_02211600();
    void func_ov004_02211638();
    BOOL func_ov004_02211678();
    void func_ov004_022116ac();

    /* 0x840 */ u8 unk_840;
    /* 0x841 */ u8 unk_841;
    /* 0x842 */ u8 pad_842[2];
};

typedef void (Unk_ov004_02249a74::*Unk_ov004_022116ac_Fn)();
typedef BOOL (Unk_ov004_02249a74::*Unk_ov004_02211738_Fn)();

// ================================================================ Unk_ov004_0224ba18 ==========
u32 Unk_ov004_0224ba18::func_ov004_02210f0c(void *o) {
    Unk_ov004_02210f0c_V3 *p = p22::data_ov004_02240078[b22_unk_780].unk_00;
    if (p) {
        u32 i;
        for (i = 0; i < p22::data_ov004_02240078[b22_unk_780].unk_04; i++) {
            Unk_ov004_02210f0c_V3 v;
            p22::func_ov004_02208938(this, &v, &p[i]);
            s32 *q = (s32 *)((Unk_ov004_02210d68 *)o)->func_ov004_02210d58(i);
            p22::func_0204ee10(q, q + 1, &v);
        }
        return *(u32 *)((u8 *)p22::data_ov004_02240078 + 4 + (b22_unk_780 << 3));
    }
    return 0;
}

u32 Unk_ov004_0224ba18::func_ov004_02210f74(void *o) {
    Unk_ov004_02210f0c_V3 *p = p22::data_ov004_02249028[b22_unk_780];
    if (p) {
        u32 i;
        for (i = 0; i < 2; i++) {
            Unk_ov004_02210f0c_V3 v;
            p22::func_ov004_02208938(this, &v, &p[i]);
            s32 *q = (s32 *)((Unk_ov004_02210d68 *)o)->func_ov004_02210d58(i);
            p22::func_0204ee10(q, q + 1, &v);
        }
        return 2;
    }
    return 0;
}

BOOL Unk_ov004_0224ba18::vfunc_0c() {
    return TRUE;
}

BOOL Unk_ov004_0224ba18::vfunc_24() {
    return TRUE;
}

BOOL Unk_ov004_0224ba18::vfunc_80() {
    if (b22_unk_77c == 0x2a) {
        p22::_ZN18Unk_ov004_0220599419func_ov004_022059b0Ej(b22_f_760, 0);
        s32 z = 0;
        u32 i;
        u32 j;
        for (i = 0; i < 4; i++) {
            Unk_ov004_02210f0c_V3 v;
            s32 x, y;
            if (p22::func_ov004_02224c24(&v, i)) {
                p22::func_0204ee10(&x, &y, &v);
                Unk_ov004_02206520 list;
                p22::_ZN18Unk_ov004_022077a419func_ov004_02207c40EP23Unk_ov004_02207854_ListPvi(this, &list, z, z);
                for (j = 0; j < list.func_ov004_0220652c(); j++) {
                    if (x == list.func_ov004_02206520(j)->x && y == list.func_ov004_02206520(j)->y) {
                        p22::_ZN18Unk_ov004_0220599419func_ov004_022059b0Ej(b22_f_760, 1);
                        p22::_ZN18Unk_ov004_022059f419func_ov004_022059f4Ev(&unk_85c);
                        p22::func_ov004_02208980(this);
                        p22::_ZN18Unk_ov004_0224882c19func_ov004_02209198Ev(this);
                        break;
                    }
                }
                list.func_ov004_02206554();
            }
        }
    }
    func_ov004_02210ad4();
    return TRUE;
}

BOOL Unk_ov004_0224ba18::vfunc_7c() {
    p22::_ZN18Unk_ov004_0220599419func_ov004_022059b0Ej(b22_f_760, 0);
    if (b22_unk_77c == 0x2a) {
        p22::_ZN18Unk_ov004_0224882c19func_ov004_02208de0Eiiii(this, 0, 0, 0x1000, 0);
        p22::_ZN18Unk_ov004_022059f419func_ov004_02205a64Ejj(&unk_85c, b22_unk_590, 1);
    }
    if (p22::func_020b52d0()) {
        vfunc_70(1, 0xff);
    }
    return TRUE;
}

BOOL Unk_ov004_0224ba18::vfunc_48(void *a) {
    if (!p22::_ZN12Unk_020cbb1813func_02072e44Ev(p22::data_020cbb18) && func_ov004_02211130() && unk_854 != 0) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov004_0224ba18::func_ov004_02211130() {
    if (unk_85a >= 1) {
        return TRUE;
    }
    return FALSE;
}

Unk_ov004_0224ba18::~Unk_ov004_0224ba18() {
}

Unk_ov004_0224ba18::Unk_ov004_0224ba18() : unk_858(0xfff1) {
}

extern "C" void func_ov004_022111f0() {
    new Unk_ov004_0224ba18;
}

// ================================================================ Unk_ov004_0224b694 ==========
void Unk_ov004_0224b694::func_ov004_0221120c(Unk_ov004_02210f0c_V3 *out, void *o) {
    if (b22_unk_780 == 0) {
        out->x = unk_5c[0];
        out->y = unk_5c[1];
        out->z = unk_5c[2];
    } else {
        s32 *p = (s32 *)p22::_ZN18Unk_ov004_022355ac19func_ov004_022354ecEv(o);
        out->x = p[0];
        out->y = p[1];
        out->z = p[2];
        Unk_ov004_02210f0c_V3 v;
        s32 t = p22::_ZN18Unk_ov004_022355ac19func_ov004_022354f4Ev(o) + 0x1000;
        v.x = 0;
        v.y = 0;
        v.z = t;
        p22::func_020e93a0(&v, p22::_ZN18Unk_ov004_022355ac19func_ov004_022354e0Ev(o));
        p22::func_01ffca8c(out, &v, out);
    }
}

BOOL Unk_ov004_0224b694::vfunc_0c() {
    return TRUE;
}

BOOL Unk_ov004_0224b694::vfunc_80() {
    s32 x, y;
    if (b22_unk_77c == 0x2c) {
        p22::_ZN18Unk_ov004_0220599419func_ov004_022059b0Ej(b22_f_760, 0);
        s32 z = 0;
        u32 i;
        u32 j;
        for (i = 0; i < 4; i++) {
            Unk_ov004_02210f0c_V3 v;
            if (p22::func_ov004_02224c30(&v, i)) {
                p22::func_0204ee10(&x, &y, &v);
                Unk_ov004_02206520 list;
                p22::_ZN18Unk_ov004_022077a419func_ov004_02207c40EP23Unk_ov004_02207854_ListPvi(this, &list, z, z);
                for (j = 0; j < list.func_ov004_0220652c(); j++) {
                    if (x == list.func_ov004_02206520(j)->x && y == list.func_ov004_02206520(j)->y) {
                        p22::_ZN18Unk_ov004_0220599419func_ov004_022059b0Ej(b22_f_760, 1);
                        p22::func_ov004_02208980(this);
                        p22::_ZN18Unk_ov004_0224882c19func_ov004_02209198Ev(this);
                        break;
                    }
                }
                list.func_ov004_02206554();
            }
        }
    } else if (b22_unk_77c == 9) {
        p22::func_ov004_02208980(this);
        p22::_ZN18Unk_ov004_0224882c19func_ov004_02209198Ev(this);
    }
    BOOL hit = FALSE;
    void *r6 = p22::_ZN18Unk_ov004_022351bc19func_ov004_02235464EPv(p22::func_ov004_022354d8(), this);
    if (r6 && p22::func_ov004_022350c8(r6)) {
        BOOL ok = FALSE;
        u8 mode = 0;
        if (b22_unk_77c != 0x26) {
            if (p22::_ZN18Unk_ov004_022355ac19func_ov004_022354e8Ev(r6) == 0) {
                ok = TRUE;
                mode = 0;
            }
        } else {
            s32 t = p22::_ZN18Unk_ov004_022355ac19func_ov004_022354e8Ev(r6);
            if (t == 0) {
                ok = TRUE;
                mode = 0;
            } else if (p22::_ZN18Unk_ov004_022355ac19func_ov004_022354e8Ev(r6) == 3) {
                ok = TRUE;
                mode = 1;
            } else if (p22::_ZN18Unk_ov004_022355ac19func_ov004_022354e8Ev(r6) == 1) {
                ok = TRUE;
                mode = 2;
            }
        }
        if (ok) {
            Unk_ov004_02210f0c_V3 pos;
            func_ov004_0221120c(&pos, r6);
            if (p22::func_ov004_022087e8(&pos, 0x800, 0x2000, 0x800, 0)) {
                if (unk_840 < 7) {
                    hit = TRUE;
                    unk_840++;
                }
                if (p22::_ZN18Unk_ov004_022355ac19func_ov004_022354f8Ev(r6) > 0x200) {
                    if (unk_840 >= 7) {
                        p22::func_ov004_02224a80(&pos, &pos.z, (u8 *)this + 0x8e, &mode);
                        unk_840 = 0;
                    }
                }
            }
        }
    }
    if (!hit) {
        unk_840 = 0;
    }
    return TRUE;
}

BOOL Unk_ov004_0224b694::vfunc_7c() {
    p22::_ZN18Unk_ov004_0220599419func_ov004_022059b0Ej(b22_f_760, 0);
    if (b22_unk_77c == 9 || b22_unk_77c == 0x2c) {
        p22::_ZN18Unk_ov004_0224882c19func_ov004_02208de0Eiiii(this, 0, 0, 0x1000, 0);
    }
    return TRUE;
}

Unk_ov004_0224b694::~Unk_ov004_0224b694() {
}

Unk_ov004_0224b694::Unk_ov004_0224b694() {
}

extern "C" void func_ov004_022114d4() {
    new Unk_ov004_0224b694;
}

// ================================================================ Unk_ov004_02249a74 ==========
void Unk_ov004_02249a74::func_ov004_022114f0() {
    p22::_ZN18Unk_ov004_02205c4419func_ov004_02205c44Eji(b22_f_73c, 0, 0);
    if (p22::func_ov004_02208980(this)) {
        vfunc_70(0, 0xff);
    }
}

BOOL Unk_ov004_02249a74::func_ov004_02211520() {
    p22::_ZN18Unk_ov004_02205c4419func_ov004_02205c44Eji(b22_f_73c, 0, 0);
    p22::_ZN18Unk_ov004_0224882c19func_ov004_02209108Ev(this);
    p22::func_ov004_02208a18(this, 0, 3, 0x1000);
    return TRUE;
}

void Unk_ov004_02249a74::func_ov004_02211554() {
    p22::func_ov004_02208980(this);
    p22::_ZN18Unk_ov004_0224882c19func_ov004_022091e0Ev(this);
    p22::_ZN18Unk_ov004_0224882c19func_ov004_02209198Ev(this);
    if (p22::_ZN18Unk_ov004_02205c4419func_ov004_02205c6cEv(b22_f_73c)) {
        p22::func_02051cc8(this, 3, 0xff, 1);
    } else if (p22::_ZN18Unk_ov004_0224882c19func_ov004_02206f8cEv(this)) {
        vfunc_70(3, 0xff);
    }
}

BOOL Unk_ov004_02249a74::func_ov004_022115a4() {
    p22::_ZN18Unk_ov004_02205c4419func_ov004_02205c44Eji(b22_f_73c, 1, 0);
    p22::func_ov004_02208a18(this, 1, 0, 0x1000);
    return TRUE;
}

void Unk_ov004_02249a74::func_ov004_022115d0() {
    p22::_ZN18Unk_ov004_02205c4419func_ov004_02205c44Eji(b22_f_73c, 1, 0);
    if (p22::func_ov004_02208980(this)) {
        vfunc_70(2, 0xff);
    }
}

BOOL Unk_ov004_02249a74::func_ov004_02211600() {
    p22::_ZN18Unk_ov004_02205c4419func_ov004_02205c44Eji(b22_f_73c, 1, 0);
    p22::_ZN18Unk_ov004_0224882c19func_ov004_02209150Ev(this);
    p22::_ZN18Unk_ov004_0224882c19func_ov004_02208ba8Eiiij(this, 0, 1, 0x1000, 0);
    return TRUE;
}

void Unk_ov004_02249a74::func_ov004_02211638() {
    if (p22::_ZN18Unk_ov004_02205c4419func_ov004_02205c6cEv(b22_f_73c)) {
        p22::func_02051cc8(this, 1, 0xff, 1);
    } else if (p22::_ZN18Unk_ov004_0224882c19func_ov004_02206f8cEv(this)) {
        vfunc_70(1, 0xff);
    }
}

BOOL Unk_ov004_02249a74::func_ov004_02211678() {
    p22::_ZN18Unk_ov004_02205c4419func_ov004_02205c44Eji(b22_f_73c, 0, 0);
    p22::_ZN18Unk_ov004_0224882c19func_ov004_02208ba8Eiiij(this, 0, 3, 0x1000, 0);
    return TRUE;
}

void Unk_ov004_02249a74::func_ov004_022116ac() {
    static Unk_ov004_022116ac_Fn tbl[4] = {
        &Unk_ov004_02249a74::func_ov004_02211638,
        &Unk_ov004_02249a74::func_ov004_022115d0,
        &Unk_ov004_02249a74::func_ov004_02211554,
        &Unk_ov004_02249a74::func_ov004_022114f0,
    };
    u32 i = unk_841;
    if (i < 4) {
        (this->*tbl[i])();
    }
}

BOOL Unk_ov004_02249a74::vfunc_70(u32 a, u8 b) {
    Unk_ov004_0224882c::vfunc_70(a, b);
    static Unk_ov004_02211738_Fn tbl[4] = {
        &Unk_ov004_02249a74::func_ov004_02211678,
        &Unk_ov004_02249a74::func_ov004_02211600,
        &Unk_ov004_02249a74::func_ov004_022115a4,
        &Unk_ov004_02249a74::func_ov004_02211520,
    };
    if ((u32)a < 4) {
        if ((this->*tbl[a])()) {
            unk_841 = a;
            return TRUE;
        }
    }
    return FALSE;
}

u8 Unk_ov004_02249a74::vfunc_74(u32 a) {
    if (a < 4) {
        return p22::data_ov004_02240050[a];
    }
    return 0;
}

BOOL Unk_ov004_02249a74::vfunc_0c() {
    return TRUE;
}

BOOL Unk_ov004_02249a74::vfunc_80() {
    func_ov004_022116ac();
    return TRUE;
}

BOOL Unk_ov004_02249a74::vfunc_7c() {
    unk_840 = 0;
    p22::_ZN18Unk_ov004_0224882c19func_ov004_02208de0Eiiii(this, 0, 1, 0x1000, 0);
    if (p22::_ZN18Unk_ov004_02205c4419func_ov004_02205c7cEv(b22_f_73c) && !p22::func_ov004_02234ad4()) {
        vfunc_70(2, 0xff);
    } else {
        vfunc_70(0, 0xff);
    }
    return TRUE;
}

// ---- part 23: from unk_0221185c.cpp
namespace p23 {
extern "C" {
BOOL func_ov004_02208980(void *self);
void func_ov004_02208a18(void *self, s32 a, s32 b, s32 c);
}
}

class Unk_ov004_0224a2a8 : public Unk_ov004_0224882c {
public:
    Unk_ov004_0224a2a8();
    virtual ~Unk_ov004_0224a2a8();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_70(u32 a, u8 b);
    virtual u8 vfunc_74(u32 a);
    virtual BOOL vfunc_7c();
    virtual BOOL vfunc_80();

    void func_ov004_022118ec();
    BOOL func_ov004_02211930();
    void func_ov004_02211978();
    BOOL func_ov004_022119bc();
    void func_ov004_022119f8();
    BOOL func_ov004_02211a30();
    void func_ov004_02211a78();
    BOOL func_ov004_02211ab8();
    void func_ov004_02211af4();
    /* 0x840 */ u8 pad_840;
    /* 0x841 */ u8 unk_841;
    /* 0x842 */ u8 pad_842[2];
};

class Unk_ov004_0224ac08 : public Unk_ov004_0224882c {
public:
    Unk_ov004_0224ac08();
    virtual ~Unk_ov004_0224ac08();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_70(u32 a, u8 b);
    virtual u8 vfunc_74(u32 a);
    virtual BOOL vfunc_7c();
    virtual BOOL vfunc_80();

    void func_ov004_02211d2c();
    BOOL func_ov004_02211d5c();
    void func_ov004_02211d90();
    BOOL func_ov004_02211dd0();
    void func_ov004_02211dfc();
    BOOL func_ov004_02211e2c();
    void func_ov004_02211e64();
    BOOL func_ov004_02211ea4();
    void func_ov004_02211ed8();
    /* 0x840 */ u8 unk_840;
    /* 0x841 */ u8 pad_841[3];
};

class Unk_ov004_0224af8c : public Unk_ov004_0224882c {
public:
    Unk_ov004_0224af8c();
    virtual ~Unk_ov004_0224af8c();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_70(u32 idx, u8 v);
    virtual u8 vfunc_74(u32 idx);
    virtual BOOL vfunc_7c();
    virtual BOOL vfunc_80();

    void func_ov004_02212110();
    BOOL func_ov004_02212140();
    void func_ov004_02212174();
    BOOL func_ov004_022121a4();
    void func_ov004_022121e8();
    BOOL func_ov004_02212210();
    void func_ov004_02212248();

    /* 0x840 */ u8 unk_840;
    /* 0x841 */ u8 pad_841[3];
    /* 0x844 */ u32 unk_844;
    /* 0x848 */ Unk_ov004_022059f4 unk_848;
};

namespace p23 {
extern "C" {
BOOL _ZN18Unk_ov004_02205c4419func_ov004_02205c44Eji(void *, s32, s32);
BOOL _ZN18Unk_ov004_02205c4419func_ov004_02205c6cEv(void *);
BOOL _ZN18Unk_ov004_02205c4419func_ov004_02205c7cEv(void *);
void _ZN18Unk_ov004_0220599419func_ov004_022059b0Ej(void *, s32);
void _ZN18Unk_ov004_022059f419func_ov004_02205a1cEjjj(void *, s32, s32, s32);
BOOL func_ov004_02234ad4(void);
void _ZN18Unk_ov004_0224882cC2Ev(void *);
void _ZN18Unk_ov004_0224882cD2Ev(void *);
void _ZN18Unk_ov004_0224882cdlEPv(void *);
void *_ZN18Unk_ov004_0224882cnwEm(u32);
void func_02051cc8(void *, s32, s32, s32);
void func_020e761c(void *, u32, u32);
extern u8 data_ov004_02240060[];
extern u8 data_ov004_02240054[];
}
}

typedef void (Unk_ov004_0224a2a8::*Unk_ov004_02211af4_Fn)();
typedef BOOL (Unk_ov004_0224a2a8::*Unk_ov004_02211b80_Fn)();
typedef void (Unk_ov004_0224ac08::*Unk_ov004_02211ed8_Fn)();
typedef BOOL (Unk_ov004_0224ac08::*Unk_ov004_02211f64_Fn)();

// ---- class A (0x02249a74) ----
Unk_ov004_02249a74::~Unk_ov004_02249a74() {
}

Unk_ov004_02249a74::Unk_ov004_02249a74() {
}

extern "C" void func_ov004_022118d0() {
    new Unk_ov004_02249a74;
}

// ---- class B (0x0224a2a8) ----
void Unk_ov004_0224a2a8::func_ov004_022118ec() {
    p23::_ZN18Unk_ov004_0220599419func_ov004_022059b0Ej(b23_f_760, 1);
    func_ov004_02209198();
    p23::_ZN18Unk_ov004_02205c4419func_ov004_02205c44Eji(b23_f_73c, 0, 0);
    if (p23::func_ov004_02208980(this)) {
        vfunc_70(0, 0xff);
    }
}

BOOL Unk_ov004_0224a2a8::func_ov004_02211930() {
    p23::_ZN18Unk_ov004_02205c4419func_ov004_02205c44Eji(b23_f_73c, 0, 0);
    p23::_ZN18Unk_ov004_0220599419func_ov004_022059b0Ej(b23_f_760, 1);
    func_ov004_02208ba8(1, 1, 0x1000, 0);
    func_ov004_02209108();
    return TRUE;
}

void Unk_ov004_0224a2a8::func_ov004_02211978() {
    func_ov004_02209198();
    if (p23::_ZN18Unk_ov004_02205c4419func_ov004_02205c6cEv(b23_f_73c)) {
        p23::func_02051cc8(this, 3, 0xff, 1);
    } else if (func_ov004_02206f8c()) {
        vfunc_70(3, 0xff);
    }
}

BOOL Unk_ov004_0224a2a8::func_ov004_022119bc() {
    p23::_ZN18Unk_ov004_02205c4419func_ov004_02205c44Eji(b23_f_73c, 1, 0);
    p23::func_ov004_02208a18(this, 0, 1, 0x1000);
    p23::_ZN18Unk_ov004_0220599419func_ov004_022059b0Ej(b23_f_760, 1);
    return TRUE;
}

void Unk_ov004_0224a2a8::func_ov004_022119f8() {
    p23::_ZN18Unk_ov004_02205c4419func_ov004_02205c44Eji(b23_f_73c, 1, 0);
    func_ov004_02209198();
    if (p23::func_ov004_02208980(this)) {
        vfunc_70(2, 0xff);
    }
}

BOOL Unk_ov004_0224a2a8::func_ov004_02211a30() {
    p23::_ZN18Unk_ov004_02205c4419func_ov004_02205c44Eji(b23_f_73c, 1, 0);
    p23::_ZN18Unk_ov004_0220599419func_ov004_022059b0Ej(b23_f_760, 1);
    func_ov004_02208ba8(0, 1, 0x1000, 0);
    func_ov004_02209150();
    return TRUE;
}

void Unk_ov004_0224a2a8::func_ov004_02211a78() {
    if (p23::_ZN18Unk_ov004_02205c4419func_ov004_02205c6cEv(b23_f_73c)) {
        p23::func_02051cc8(this, 1, 0xff, 1);
    } else if (func_ov004_02206f8c()) {
        vfunc_70(1, 0xff);
    }
}

BOOL Unk_ov004_0224a2a8::func_ov004_02211ab8() {
    p23::_ZN18Unk_ov004_02205c4419func_ov004_02205c44Eji(b23_f_73c, 0, 0);
    p23::func_ov004_02208a18(this, 1, 1, 0x1000);
    p23::_ZN18Unk_ov004_0220599419func_ov004_022059b0Ej(b23_f_760, 0);
    return TRUE;
}

void Unk_ov004_0224a2a8::func_ov004_02211af4() {
    static Unk_ov004_02211af4_Fn tbl[4] = {
        &Unk_ov004_0224a2a8::func_ov004_02211a78,
        &Unk_ov004_0224a2a8::func_ov004_022119f8,
        &Unk_ov004_0224a2a8::func_ov004_02211978,
        &Unk_ov004_0224a2a8::func_ov004_022118ec,
    };
    if (unk_841 < 4) {
        (this->*tbl[unk_841])();
    }
}

BOOL Unk_ov004_0224a2a8::vfunc_70(u32 a, u8 b) {
    Unk_ov004_0224882c::vfunc_70(a, b);
    static Unk_ov004_02211b80_Fn tbl[4] = {
        &Unk_ov004_0224a2a8::func_ov004_02211ab8,
        &Unk_ov004_0224a2a8::func_ov004_02211a30,
        &Unk_ov004_0224a2a8::func_ov004_022119bc,
        &Unk_ov004_0224a2a8::func_ov004_02211930,
    };
    if ((u32)a < 4) {
        if ((this->*tbl[a])()) {
            unk_841 = a;
            return TRUE;
        }
    }
    return FALSE;
}

u8 Unk_ov004_0224a2a8::vfunc_74(u32 a) {
    if (a < 4) {
        return p23::data_ov004_02240060[a];
    }
    return 0;
}

BOOL Unk_ov004_0224a2a8::vfunc_0c() {
    return TRUE;
}

BOOL Unk_ov004_0224a2a8::vfunc_80() {
    func_ov004_02211af4();
    return TRUE;
}

BOOL Unk_ov004_0224a2a8::vfunc_7c() {
    func_ov004_02208de0(0, 1, 0x1000, 0);
    if (!p23::_ZN18Unk_ov004_02205c4419func_ov004_02205c7cEv(b23_f_73c) || p23::func_ov004_02234ad4()) {
        vfunc_70(0, 0xff);
    } else {
        vfunc_70(2, 0xff);
    }
    return TRUE;
}

Unk_ov004_0224a2a8::~Unk_ov004_0224a2a8() {
}

Unk_ov004_0224a2a8::Unk_ov004_0224a2a8() {
}

extern "C" void func_ov004_02211d10() {
    new Unk_ov004_0224a2a8;
}

// ---- class C (0x0224ac08) ----
void Unk_ov004_0224ac08::func_ov004_02211d2c() {
    p23::_ZN18Unk_ov004_02205c4419func_ov004_02205c44Eji(b23_f_73c, 0, 0);
    if (p23::func_ov004_02208980(this)) {
        vfunc_70(0, 0xff);
    }
}

BOOL Unk_ov004_0224ac08::func_ov004_02211d5c() {
    p23::_ZN18Unk_ov004_02205c4419func_ov004_02205c44Eji(b23_f_73c, 0, 0);
    p23::func_ov004_02208a18(this, 0, 3, 0x1000);
    func_ov004_02209108();
    return TRUE;
}

void Unk_ov004_0224ac08::func_ov004_02211d90() {
    if (p23::_ZN18Unk_ov004_02205c4419func_ov004_02205c6cEv(b23_f_73c)) {
        p23::func_02051cc8(this, 3, 0xff, 1);
    } else if (func_ov004_02206f8c()) {
        vfunc_70(3, 0xff);
    }
}

BOOL Unk_ov004_0224ac08::func_ov004_02211dd0() {
    p23::_ZN18Unk_ov004_02205c4419func_ov004_02205c44Eji(b23_f_73c, 1, 0);
    p23::func_ov004_02208a18(this, 0, 1, 0x1000);
    return TRUE;
}

void Unk_ov004_0224ac08::func_ov004_02211dfc() {
    p23::_ZN18Unk_ov004_02205c4419func_ov004_02205c44Eji(b23_f_73c, 1, 0);
    if (p23::func_ov004_02208980(this)) {
        vfunc_70(2, 0xff);
    }
}

BOOL Unk_ov004_0224ac08::func_ov004_02211e2c() {
    p23::_ZN18Unk_ov004_02205c4419func_ov004_02205c44Eji(b23_f_73c, 1, 0);
    func_ov004_02208ba8(0, 1, 0x1000, 0);
    func_ov004_02209150();
    return TRUE;
}

void Unk_ov004_0224ac08::func_ov004_02211e64() {
    if (p23::_ZN18Unk_ov004_02205c4419func_ov004_02205c6cEv(b23_f_73c)) {
        p23::func_02051cc8(this, 1, 0xff, 1);
    } else if (func_ov004_02206f8c()) {
        vfunc_70(1, 0xff);
    }
}

BOOL Unk_ov004_0224ac08::func_ov004_02211ea4() {
    p23::_ZN18Unk_ov004_02205c4419func_ov004_02205c44Eji(b23_f_73c, 0, 0);
    func_ov004_02208ba8(0, 3, 0x1000, 0);
    return TRUE;
}

void Unk_ov004_0224ac08::func_ov004_02211ed8() {
    static Unk_ov004_02211ed8_Fn tbl[4] = {
        &Unk_ov004_0224ac08::func_ov004_02211e64,
        &Unk_ov004_0224ac08::func_ov004_02211dfc,
        &Unk_ov004_0224ac08::func_ov004_02211d90,
        &Unk_ov004_0224ac08::func_ov004_02211d2c,
    };
    if (unk_840 < 4) {
        (this->*tbl[unk_840])();
    }
}

BOOL Unk_ov004_0224ac08::vfunc_70(u32 a, u8 b) {
    Unk_ov004_0224882c::vfunc_70(a, b);
    static Unk_ov004_02211f64_Fn tbl[4] = {
        &Unk_ov004_0224ac08::func_ov004_02211ea4,
        &Unk_ov004_0224ac08::func_ov004_02211e2c,
        &Unk_ov004_0224ac08::func_ov004_02211dd0,
        &Unk_ov004_0224ac08::func_ov004_02211d5c,
    };
    if ((u32)a < 4) {
        if ((this->*tbl[a])()) {
            unk_840 = a;
            return TRUE;
        }
    }
    return FALSE;
}

u8 Unk_ov004_0224ac08::vfunc_74(u32 a) {
    if (a < 4) {
        return p23::data_ov004_02240054[a];
    }
    return 0;
}

BOOL Unk_ov004_0224ac08::vfunc_0c() {
    return TRUE;
}

BOOL Unk_ov004_0224ac08::vfunc_80() {
    func_ov004_02211ed8();
    return TRUE;
}

BOOL Unk_ov004_0224ac08::vfunc_7c() {
    func_ov004_02208de0(0, 1, 0x1000, 0);
    if (p23::_ZN18Unk_ov004_02205c4419func_ov004_02205c7cEv(b23_f_73c) && !p23::func_ov004_02234ad4()) {
        vfunc_70(2, 0xff);
    } else {
        vfunc_70(0, 0xff);
    }
    return TRUE;
}

Unk_ov004_0224ac08::~Unk_ov004_0224ac08() {
}

Unk_ov004_0224ac08::Unk_ov004_0224ac08() {
}

extern "C" void func_ov004_022120f4() {
    new Unk_ov004_0224ac08;
}

// ---- class D (0x0224af8c) ----
void Unk_ov004_0224af8c::func_ov004_02212110() {
    p23::func_020e761c(&unk_844, 0, 0xcc);
    if (unk_844 == 0) {
        vfunc_70(0, 0xff);
    }
}

BOOL Unk_ov004_0224af8c::func_ov004_02212140() {
    p23::_ZN18Unk_ov004_02205c4419func_ov004_02205c44Eji(b23_f_73c, 0, 0);
    func_ov004_02209108();
    p23::_ZN18Unk_ov004_022059f419func_ov004_02205a1cEjjj(&unk_848, 1, 1, 0);
    return TRUE;
}

// ---- part 24: from unk_02212174.cpp
namespace p24 {
extern "C" {
u32 func_ov004_022087a4(void *self);
BOOL func_ov004_02208980(void *self);
void func_ov004_02208a18(void *self, u32 a, s32 b, s32 c);
}
}

// Secondary base at +0xec of the ov004 actors (ctor func_0206606c).

// Container of three animation slots (ctor func_ov004_02205ad4, dtor func_ov004_02205ab8).

namespace p24 {
extern "C" {
extern u8 data_ov004_02240044[];
extern u8 data_ov004_02240030[];
BOOL func_ov004_02234ad4();
void func_02051cc8(void *, s32, s32, s32);
BOOL _ZN12Unk_020dbe7c13func_020565e8Ei(void *, u32);
}
}

// ---------------------------------------------------------------- Unk_ov004_0224b7c0 (2-state, vtable 0x0224b7c8)
class Unk_ov004_0224b7c0 : public Unk_ov004_0224882c {
public:
    Unk_ov004_0224b7c0();
    virtual ~Unk_ov004_0224b7c0();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_70(u32 idx, u8 v);
    virtual BOOL vfunc_7c();
    virtual BOOL vfunc_80();

    BOOL func_ov004_02212818();
    BOOL func_ov004_0221289c();
    void func_ov004_022128c4();
    BOOL func_ov004_022128ec();
    void func_ov004_0221291c();

    /* 0x840 */ u8 unk_840;
};

// ---------------------------------------------------------------- Unk_ov004_0224a3d4 (2-state, container at 0x844)
class Unk_ov004_0224a3d4 : public Unk_ov004_0224882c {
public:
    Unk_ov004_0224a3d4();
    virtual ~Unk_ov004_0224a3d4();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_70(u32 idx, u8 v);
    virtual u8 vfunc_74(u32 idx);
    virtual BOOL vfunc_7c();
    virtual BOOL vfunc_80();

    void func_ov004_022124fc();
    BOOL func_ov004_02212534();
    void func_ov004_02212568();
    BOOL func_ov004_02212590();
    void func_ov004_022125c4();

    /* 0x840 */ u8 unk_840;
    /* 0x841 */ u8 pad_841[3];
    /* 0x844 */ Unk_ov004_022059f4 unk_844;
};

// ---------------------------------------------------------------- Unk_ov004_0224af8c (3-state, value at 0x844, container at 0x848)

// ================================================================ Unk_ov004_0224af8c
void Unk_ov004_0224af8c::func_ov004_02212174() {
    func_ov004_022091e0();
    func_ov004_02209198();
    if (((Unk_ov004_02205c44 *)b24_unk_73c)->func_ov004_02205c6c()) {
        p24::func_02051cc8(this, 2, 0xff, 1);
    }
}

BOOL Unk_ov004_0224af8c::func_ov004_022121a4() {
    unk_844 = 0x1000;
    ((Unk_ov004_02205c44 *)b24_unk_73c)->func_ov004_02205c44(1, 0);
    func_ov004_02209150();
    unk_848.func_ov004_02205a1c(1, 1, 0);
    return TRUE;
}

void Unk_ov004_0224af8c::func_ov004_022121e8() {
    if (((Unk_ov004_02205c44 *)b24_unk_73c)->func_ov004_02205c6c()) {
        p24::func_02051cc8(this, 1, 0xff, 1);
    }
}

BOOL Unk_ov004_0224af8c::func_ov004_02212210() {
    unk_844 = 0;
    ((Unk_ov004_02205c44 *)b24_unk_73c)->func_ov004_02205c44(0, 0);
    unk_848.func_ov004_02205a1c(0, 1, 0);
    return TRUE;
}

void Unk_ov004_0224af8c::func_ov004_02212248() {
    static void (Unk_ov004_0224af8c::*tbl[3])() = {
        &Unk_ov004_0224af8c::func_ov004_022121e8,
        &Unk_ov004_0224af8c::func_ov004_02212174,
        &Unk_ov004_0224af8c::func_ov004_02212110,
    };
    u32 i = unk_840;
    if (i < 3) {
        (this->*tbl[i])();
    }
}

BOOL Unk_ov004_0224af8c::vfunc_70(u32 idx, u8 v) {
    Unk_ov004_0224882c::vfunc_70(idx, v);
    static BOOL (Unk_ov004_0224af8c::*tbl[3])() = {
        &Unk_ov004_0224af8c::func_ov004_02212210,
        &Unk_ov004_0224af8c::func_ov004_022121a4,
        &Unk_ov004_0224af8c::func_ov004_02212140,
    };
    if (idx < 3) {
        if ((this->*tbl[idx])()) {
            unk_840 = idx;
            return TRUE;
        }
    }
    return FALSE;
}

u8 Unk_ov004_0224af8c::vfunc_74(u32 idx) {
    if (idx < 3) {
        return p24::data_ov004_02240044[idx];
    }
    return 0;
}

BOOL Unk_ov004_0224af8c::vfunc_0c() {
    return TRUE;
}

BOOL Unk_ov004_0224af8c::vfunc_80() {
    u32 i;
    unk_848.func_ov004_022059f4();
    func_ov004_02212248();
    b24_unk_5e0 = unk_844;
    for (i = 0; i < 4; i++) {
        if (((Unk_ov004_02248804 *)&b24_unk_7c0[i])->func_ov004_02206e74()) {
            b24_unk_7c0[i].unk_10 = unk_844;
        }
    }
    p24::func_ov004_02208980(this);
    return TRUE;
}

BOOL Unk_ov004_0224af8c::vfunc_7c() {
    func_ov004_02208de0(0, 0, 0x1000, 0);
    void *res = b24_unk_590;
    u8 t = ((Unk_ov004_02205c44 *)b24_unk_73c)->func_ov004_02205c7c();
    unk_848.func_ov004_02205a64((u32)res, t);
    if (((Unk_ov004_02205c44 *)b24_unk_73c)->func_ov004_02205c7c() != 0 && p24::func_ov004_02234ad4() == 0) {
        vfunc_70(1, 0xff);
    } else {
        vfunc_70(0, 0xff);
    }
    return TRUE;
}

Unk_ov004_0224af8c::~Unk_ov004_0224af8c() {
}

Unk_ov004_0224af8c::Unk_ov004_0224af8c() {
}

extern "C" Unk_ov004_0224882c *func_ov004_022124e0() {
    return new Unk_ov004_0224af8c;
}

// ================================================================ Unk_ov004_0224a3d4
void Unk_ov004_0224a3d4::func_ov004_022124fc() {
    p24::func_ov004_02208980(this);
    func_ov004_022091e0();
    func_ov004_02209198();
    if (((Unk_ov004_02205c44 *)b24_unk_73c)->func_ov004_02205c6c()) {
        p24::func_02051cc8(this, 0, 0xff, 1);
    }
}

BOOL Unk_ov004_0224a3d4::func_ov004_02212534() {
    ((Unk_ov004_02205c44 *)b24_unk_73c)->func_ov004_02205c44(1, 0);
    func_ov004_02209150();
    unk_844.func_ov004_02205a1c(1, 1, 0);
    return TRUE;
}

void Unk_ov004_0224a3d4::func_ov004_02212568() {
    if (((Unk_ov004_02205c44 *)b24_unk_73c)->func_ov004_02205c6c()) {
        p24::func_02051cc8(this, 1, 0xff, 1);
    }
}

BOOL Unk_ov004_0224a3d4::func_ov004_02212590() {
    ((Unk_ov004_02205c44 *)b24_unk_73c)->func_ov004_02205c44(0, 0);
    func_ov004_02209108();
    unk_844.func_ov004_02205a1c(0, 1, 0);
    return TRUE;
}

void Unk_ov004_0224a3d4::func_ov004_022125c4() {
    static void (Unk_ov004_0224a3d4::*tbl[2])() = {
        &Unk_ov004_0224a3d4::func_ov004_02212568,
        &Unk_ov004_0224a3d4::func_ov004_022124fc,
    };
    u32 i = unk_840;
    if (i < 2) {
        (this->*tbl[i])();
    }
}

BOOL Unk_ov004_0224a3d4::vfunc_70(u32 idx, u8 v) {
    Unk_ov004_0224882c::vfunc_70(idx, v);
    static BOOL (Unk_ov004_0224a3d4::*tbl[2])() = {
        &Unk_ov004_0224a3d4::func_ov004_02212590,
        &Unk_ov004_0224a3d4::func_ov004_02212534,
    };
    if (idx < 2) {
        if ((this->*tbl[idx])()) {
            unk_840 = idx;
            return TRUE;
        }
    }
    return FALSE;
}

u8 Unk_ov004_0224a3d4::vfunc_74(u32 idx) {
    if (idx < 2) {
        return p24::data_ov004_02240030[idx];
    }
    return 0;
}

BOOL Unk_ov004_0224a3d4::vfunc_0c() {
    return TRUE;
}

BOOL Unk_ov004_0224a3d4::vfunc_80() {
    unk_844.func_ov004_022059f4();
    func_ov004_022125c4();
    return TRUE;
}

BOOL Unk_ov004_0224a3d4::vfunc_7c() {
    func_ov004_02208de0(0, 0, 0x1000, 0);
    void *res = b24_unk_590;
    u8 t = ((Unk_ov004_02205c44 *)b24_unk_73c)->func_ov004_02205c7c();
    unk_844.func_ov004_02205a64((u32)res, t);
    if (((Unk_ov004_02205c44 *)b24_unk_73c)->func_ov004_02205c7c() == 0 || p24::func_ov004_02234ad4() != 0) {
        vfunc_70(0, 0xff);
    } else {
        vfunc_70(1, 0xff);
    }
    return TRUE;
}

Unk_ov004_0224a3d4::~Unk_ov004_0224a3d4() {
}

Unk_ov004_0224a3d4::Unk_ov004_0224a3d4() {
}

extern "C" Unk_ov004_0224882c *func_ov004_022127fc() {
    return new Unk_ov004_0224a3d4;
}

// ================================================================ Unk_ov004_0224b7c0
BOOL Unk_ov004_0224b7c0::func_ov004_02212818() {
    u32 t = p24::func_ov004_022087a4(this);
    if (t != 0xb9 && t != 0xba) goto rest;
    if (((Unk_ov004_02205c44 *)b24_unk_73c)->func_ov004_02205c6c()) {
        p24::func_02051cc8(this, 1, 0xff, 1);
        goto end;
    }
rest:
    ((Unk_ov004_02205c44 *)b24_unk_73c)->func_ov004_02205c54(0);
    if (p24::func_ov004_02208980(this)) {
        p24::func_02051cc8(this, 0, 0xff, 1);
    } else {
        func_ov004_02209198();
    }
    if (p24::func_ov004_022087a4(this) == 0x207) {
        if (p24::_ZN12Unk_020dbe7c13func_020565e8Ei(b24_unk_5d0, 0x30)) {
            func_ov004_02209108();
        }
    }
end:;
}

BOOL Unk_ov004_0224b7c0::func_ov004_0221289c() {
    func_ov004_02208ba8(0, 1, 0x1000, 0);
    func_ov004_02209150();
    return TRUE;
}

void Unk_ov004_0224b7c0::func_ov004_022128c4() {
    if (((Unk_ov004_02205c44 *)b24_unk_73c)->func_ov004_02205c6c()) {
        p24::func_02051cc8(this, 1, 0xff, 1);
    }
}

BOOL Unk_ov004_0224b7c0::func_ov004_022128ec() {
    p24::func_ov004_02208a18(this, 0, 1, 0x1000);
    if (p24::func_ov004_022087a4(this) != 0x207) {
        func_ov004_02209108();
    }
    return TRUE;
}

void Unk_ov004_0224b7c0::func_ov004_0221291c() {
    static BOOL (Unk_ov004_0224b7c0::*tbl[2])() = {
        (BOOL (Unk_ov004_0224b7c0::*)())&Unk_ov004_0224b7c0::func_ov004_022128c4,
        &Unk_ov004_0224b7c0::func_ov004_02212818,
    };
    u32 i = unk_840;
    if (i < 2) {
        (this->*tbl[i])();
    }
}

BOOL Unk_ov004_0224b7c0::vfunc_70(u32 idx, u8 v) {
    Unk_ov004_0224882c::vfunc_70(idx, v);
    static BOOL (Unk_ov004_0224b7c0::*tbl[2])() = {
        &Unk_ov004_0224b7c0::func_ov004_022128ec,
        &Unk_ov004_0224b7c0::func_ov004_0221289c,
    };
    if (idx < 2) {
        if ((this->*tbl[idx])()) {
            unk_840 = idx;
            return TRUE;
        }
    }
    return FALSE;
}

BOOL Unk_ov004_0224b7c0::vfunc_0c() {
    ((Unk_ov004_02205c44 *)b24_unk_73c)->func_ov004_02205c44(0, 0);
    return TRUE;
}

BOOL Unk_ov004_0224b7c0::vfunc_80() {
    func_ov004_0221291c();
    return TRUE;
}

BOOL Unk_ov004_0224b7c0::vfunc_7c() {
    ((Unk_ov004_02205c44 *)b24_unk_73c)->func_ov004_02205c44(0, 0);
    func_ov004_02208de0(0, 1, 0x1000, 0);
    p24::func_ov004_02208a18(this, 0, 1, 0x1000);
    vfunc_70(0, 0xff);
    return TRUE;
}

// ---- part 25: from unk_02212a84.cpp
namespace p25 {
extern "C" {
BOOL func_ov004_02208980(void *self);
u32 func_ov004_022087a4(void *self);
}
}

class Unk_ov004_0224b8ec : public Unk_ov004_0224882c {
public:
    Unk_ov004_0224b8ec();
    virtual ~Unk_ov004_0224b8ec();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_70(u32 a, u8 b);
    virtual u8 vfunc_74(u32 a);
    virtual BOOL vfunc_7c();
    virtual BOOL vfunc_80();

    void func_ov004_02212b14();
    BOOL func_ov004_02212b1c();
    void func_ov004_02212b40();
    BOOL func_ov004_02212b74();
    void func_ov004_02212b98();

    /* 0x840 */ u8 unk_840;
    /* 0x841 */ u8 pad_841[3];
    /* 0x844 */ Unk_ov004_022059f4 unk_844;
};

// Classes below exist only so their adjuster thunks are emitted.

namespace p25 {
extern "C" {
BOOL _ZN18Unk_ov004_02205c4419func_ov004_02205c44Eji(void *, s32, s32);
BOOL _ZN18Unk_ov004_02205c4419func_ov004_02205c6cEv(void *);
BOOL _ZN18Unk_ov004_02205c4419func_ov004_02205c7cEv(void *);
void _ZN18Unk_ov004_02235cc019func_ov004_02235908Ejj(void *, u32, void *);
void _ZN18Unk_ov004_02235cc019func_ov004_022358e0Ej(void *, s32);
BOOL _ZN12Unk_020dbe7c13func_020565e8Ei(void *, s32);
u32 func_02063b8c(s32 n);
void func_02051cc8(void *, u8, s32, s32);
void _ZN18Unk_ov004_0224882cC2Ev(void *);
void _ZN18Unk_ov004_0224882cD2Ev(void *);
void _ZN18Unk_ov004_0224882cdlEPv(void *);
void *_ZN18Unk_ov004_0224882cnwEm(u32);
extern u8 data_ov004_02240034[];
}
}

typedef void (Unk_ov004_0224b8ec::*Unk_ov004_02212b98_Fn)();
typedef BOOL (Unk_ov004_0224b8ec::*Unk_ov004_02212c04_Fn)();

// ---- class Unk_ov004_0224b7c0 ----
Unk_ov004_0224b7c0::~Unk_ov004_0224b7c0() {
}

Unk_ov004_0224b7c0::Unk_ov004_0224b7c0() {
}

extern "C" void func_ov004_02212af8() {
    new Unk_ov004_0224b7c0;
}

// ---- class Unk_ov004_0224b8ec ----
void Unk_ov004_0224b8ec::func_ov004_02212b14() {
    func_ov004_02212b40();
}

BOOL Unk_ov004_0224b8ec::func_ov004_02212b1c() {
    p25::_ZN18Unk_ov004_02205c4419func_ov004_02205c44Eji(b25_f_73c, 1, 0);
    func_ov004_02209150();
    return TRUE;
}

void Unk_ov004_0224b8ec::func_ov004_02212b40() {
    if (p25::_ZN18Unk_ov004_02205c4419func_ov004_02205c6cEv(b25_f_73c)) {
        p25::func_02051cc8(this, (unk_840 + 1) & 1, 0xff, 1);
    }
}

BOOL Unk_ov004_0224b8ec::func_ov004_02212b74() {
    p25::_ZN18Unk_ov004_02205c4419func_ov004_02205c44Eji(b25_f_73c, 0, 0);
    func_ov004_02209108();
    return TRUE;
}

void Unk_ov004_0224b8ec::func_ov004_02212b98() {
    static Unk_ov004_02212b98_Fn tbl[2] = {
        &Unk_ov004_0224b8ec::func_ov004_02212b40,
        &Unk_ov004_0224b8ec::func_ov004_02212b14,
    };
    if (unk_840 < 2) {
        (this->*tbl[unk_840])();
    }
}

BOOL Unk_ov004_0224b8ec::vfunc_70(u32 a, u8 b) {
    Unk_ov004_0224882c::vfunc_70(a, b);
    static Unk_ov004_02212c04_Fn tbl[2] = {
        &Unk_ov004_0224b8ec::func_ov004_02212b74,
        &Unk_ov004_0224b8ec::func_ov004_02212b1c,
    };
    if ((u32)a < 2) {
        if ((this->*tbl[a])()) {
            unk_840 = a;
            return TRUE;
        }
    }
    return FALSE;
}

u8 Unk_ov004_0224b8ec::vfunc_74(u32 a) {
    if (a < 2) {
        return p25::data_ov004_02240034[a];
    }
    return 0;
}

BOOL Unk_ov004_0224b8ec::vfunc_0c() {
    return TRUE;
}

BOOL Unk_ov004_0224b8ec::vfunc_80() {
    if (b25_unk_77c == 1) {
        p25::func_ov004_02208980(this);
    }
    unk_844.func_ov004_022059f4();
    unk_844.func_ov004_02205a1c(1, 0, 0);
    func_ov004_022091e0();
    func_ov004_02212b98();
    switch (p25::func_ov004_022087a4(this)) {
    case 0x123:
        if (!func_ov004_02206f8c()) {
            p25::_ZN18Unk_ov004_02235cc019func_ov004_02235908Ejj(b25_f_794, 0x429, b25_f_7b4);
            if (p25::_ZN12Unk_020dbe7c13func_020565e8Ei(b25_f_5d0, 0x43)) {
                p25::_ZN18Unk_ov004_02235cc019func_ov004_022358e0Ej(b25_f_794, 1);
            }
        }
        break;
    case 0x1fb:
        if (!func_ov004_02206f8c()) {
            p25::_ZN18Unk_ov004_02235cc019func_ov004_02235908Ejj(b25_f_794, 0x42b, b25_f_7b4);
            if (p25::_ZN12Unk_020dbe7c13func_020565e8Ei(b25_f_5d0, 4)) {
                p25::_ZN18Unk_ov004_02235cc019func_ov004_022358e0Ej(b25_f_794, 1);
            } else if (p25::_ZN12Unk_020dbe7c13func_020565e8Ei(b25_f_5d0, 0x16)) {
                p25::_ZN18Unk_ov004_02235cc019func_ov004_022358e0Ej(b25_f_794, 2);
            }
        }
        break;
    case 0x1fc:
        if (!func_ov004_02206f8c()) {
            p25::_ZN18Unk_ov004_02235cc019func_ov004_02235908Ejj(b25_f_794, 0x42c, b25_f_7b4);
            if (p25::_ZN12Unk_020dbe7c13func_020565e8Ei(b25_f_5d0, 5) || p25::_ZN12Unk_020dbe7c13func_020565e8Ei(b25_f_5d0, 0x12)) {
                p25::_ZN18Unk_ov004_02235cc019func_ov004_022358e0Ej(b25_f_794, 1);
            }
        }
        break;
    default:
        func_ov004_02209198();
        break;
    }
    return TRUE;
}

BOOL Unk_ov004_0224b8ec::vfunc_7c() {
    if (b25_unk_77c == 1) {
        s32 k = func_ov004_02208ff0(0);
        u32 t = (b25_unk_768 == 1) ? 0 : p25::func_02063b8c(k);
        func_ov004_02208de0(0, 0, 0x1000, (u16)t);
        unk_844.func_ov004_02205a64(b25_unk_590, 1);
    }
    if (p25::_ZN18Unk_ov004_02205c4419func_ov004_02205c7cEv(b25_f_73c)) {
        vfunc_70(1, 0xff);
    } else {
        vfunc_70(0, 0xff);
    }
    return TRUE;
}

Unk_ov004_0224b8ec::~Unk_ov004_0224b8ec() {
}

Unk_ov004_0224b8ec::Unk_ov004_0224b8ec() {
}

extern "C" void func_ov004_02212f0c() {
    new Unk_ov004_0224b8ec;
}


// ---- functions of classes declared by a later part than the one that holds them
void Unk_ov004_0224b568::func_ov004_0220d614() {
    s32 v = func_ov004_0220dc5c((Unk_ov004_0220d69c_Vec *)&unk_5c[0]);
    if (v >= 0) {
        s32 i = v >> 12;
        p15::_ZN12Unk_0205454c13func_02054720Eiiitt(b15_f_534, p15::_ZN18Unk_ov004_0220639819func_ov004_022063c8Ej(p15::_ZN18Unk_ov004_022069ec19func_ov004_02206be4Ev(b15_f_6c8), 0), 0, v - (i << 12), (u16)i, 0);
        p15::_ZN12Unk_0205454c13func_0205439cEv(b15_f_534);
    }
    if (p15::_ZN18Unk_ov004_02205c4419func_ov004_02205c6cEv(b15_f_73c)) {
        p15::_ZN18Unk_ov004_02205c4419func_ov004_02205c44Eji(b15_f_73c, 1, 0);
        u32 r4 = p15::func_020b50e8();
        p15::func_020515b8(r4, &unk_5c[0], p15::func_ov004_02208750(this));
    }
}

extern "C" void _ZN18Unk_ov004_022495c48vfunc_94Ev(Unk_ov004_022495c4 *self, BOOL b) {
    s32 p = p16::_ZN18Unk_ov004_022351bc19func_ov004_02235464EPv(p16::func_ov004_022354d8(), self);
    BOOL c = FALSE;
    if (p != 0) {
        u16 *rec = p16::_ZN18Unk_ov004_0220639819func_ov004_022063c8Ej(p16::_ZN18Unk_ov004_022069ec19func_ov004_02206be4Ev(self->b16_unk_6c8), c);
        if (self->b16_unk_77c == 0x16) {
            if (p16::_ZN18Unk_ov004_022355ac19func_ov004_022354e8Ev(p) == 2) {
                if (b) {
                    if (p16::_ZN18Unk_ov004_0224882c19func_ov004_02209150Ev(self) != 0) c = TRUE;
                    p16::_ZN18Unk_ov004_0224882c19func_ov004_02208ba8Eiiij(self, 0, 1, 0x1000, 0);
                } else {
                    if (p16::_ZN18Unk_ov004_0224882c19func_ov004_02209150Ev(self) != 0) c = TRUE;
                    p16::_ZN18Unk_ov004_0224882c19func_ov004_02208ba8Eiiij(self, 0, 3, 0x1000, rec[2] - 1);
                }
            } else if (p16::_ZN18Unk_ov004_022355ac19func_ov004_022354e8Ev(p) == 0) {
                if (b) {
                    if (p16::_ZN18Unk_ov004_0224882c19func_ov004_02209150Ev(self) != 0) c = TRUE;
                    p16::_ZN18Unk_ov004_0224882c19func_ov004_02208ba8Eiiij(self, 0, 3, 0x1000, rec[2] - 1);
                } else {
                    if (p16::_ZN18Unk_ov004_0224882c19func_ov004_02209150Ev(self) != 0) c = TRUE;
                    p16::_ZN18Unk_ov004_0224882c19func_ov004_02208ba8Eiiij(self, 0, 1, 0x1000, 0);
                }
            }
        } else {
            if (p16::_ZN18Unk_ov004_022355ac19func_ov004_022354e8Ev(p) == 3) {
                if (b) {
                    if (p16::_ZN18Unk_ov004_0224882c19func_ov004_02209150Ev(self) != 0) c = TRUE;
                    p16::_ZN18Unk_ov004_0224882c19func_ov004_02208ba8Eiiij(self, 0, 1, 0x1000, 0);
                } else {
                    if (p16::_ZN18Unk_ov004_0224882c19func_ov004_02209150Ev(self) != 0) c = TRUE;
                    p16::_ZN18Unk_ov004_0224882c19func_ov004_02208ba8Eiiij(self, 0, 3, 0x1000, rec[2] - 1);
                }
            } else if (p16::_ZN18Unk_ov004_022355ac19func_ov004_022354e8Ev(p) == 1) {
                if (b) {
                    if (p16::_ZN18Unk_ov004_0224882c19func_ov004_02209150Ev(self) != 0) c = TRUE;
                    p16::_ZN18Unk_ov004_0224882c19func_ov004_02208ba8Eiiij(self, 0, 3, 0x1000, rec[2] - 1);
                } else {
                    if (p16::_ZN18Unk_ov004_0224882c19func_ov004_02209150Ev(self) != 0) c = TRUE;
                    p16::_ZN18Unk_ov004_0224882c19func_ov004_02208ba8Eiiij(self, 0, 1, 0x1000, 0);
                }
            }
        }
    }
    if (c == 0) {
        if (p16::func_ov004_02207650(self) != 0xffff) {
            p16::func_020943dc();
        }
    }
}

void Unk_ov004_0224a17c::func_ov004_0220e950() {
    p17::func_ov004_02208980(this);
    func_ov004_02209198();
    unk_844.func_ov004_02205a1c(1, 1, 0);
    p17::_ZN18Unk_ov004_02235cc019func_ov004_022358f4Ej(b17_sub_794, b17_unk_7b4);
    if (((Unk_ov004_02205c44 *)b17_unk_73c)->func_ov004_02205c6c()) {
        ((Unk_ov004_02205c44 *)b17_unk_73c)->func_ov004_02205c44(1, 0);
        p17::func_0203d704(this, 0);
        p17::func_02094f20();
    }
}

void Unk_ov004_0224a758::vfunc_6c(s32 a, void *b) {
    Unk_ov004_0224882c::vfunc_6c(a, b);
}

void Unk_ov004_0224aadc::func_ov004_0220f624() {
    u32 f = unk_85c;
    if (f == 0) {
        p19::_ZN12Unk_020d967013func_0203e47cEi(this, this);
        p19::func_0203d67c(this);
    }
}

BOOL Unk_ov004_0224aadc::func_ov004_0220f650() {
    s32 v = func_ov004_0220fbf4();
    if (v != -1) {
        if (p19::func_ov004_022249d4(&v)) {
            return p19::func_02051da4(this, 3, 0xff, 1);
        }
        return FALSE;
    }
    return p19::func_02051da4(this, 3, 0xff, 1);
}

BOOL Unk_ov004_0224aadc::func_ov004_0220f694() {
    if (((Unk_ov004_0220f6e0_Rec *)unk_3c) && ((Unk_ov004_0220f6e0_Rec *)unk_3c)->unk_04 == 0) {
        func_ov004_0220fae8(11);
    }
}

BOOL Unk_ov004_0224aadc::func_ov004_0220f6b8() {
    return TRUE;
}

BOOL Unk_ov004_0224aadc::func_ov004_0220f6bc() {
    if (((Unk_ov004_0220f6e0_Rec *)unk_3c) && ((Unk_ov004_0220f6e0_Rec *)unk_3c)->unk_04 != 0) {
        func_ov004_0220fae8(10);
    }
}

BOOL Unk_ov004_0224aadc::func_ov004_0220f6e0() {
    s32 y, x;
    p19::_ZN12Unk_020d967013func_0203e488Ei(this, this);
    ((Unk_ov004_0220f6e0_Rec *)unk_3c)->unk_08 = 1;
    p19::_ZN12Unk_020e2a3013func_020a710cEPKc(*this, p19::data_ov004_0224bbc0);
    u32 t = p19::func_ov004_022087a4(this);
    u32 r5 = t + p19::func_020b50e8();
    r5 &= 0xf;
    struct {
        u32 pad;
        Unk_ov004_02206520 list;
    } l;
    Unk_ov004_02206520 &list = l.list;
    p19::_ZN18Unk_ov004_022077a419func_ov004_02207c40EP23Unk_ov004_02207854_ListPvi(this, &list, 0, 0);
    u8 *grid = p19::data_021c47c4;
    if (grid != NULL) {
        u32 i;
        for (i = 0; i < list.func_ov004_0220652c(); i++) {
            x = list.func_ov004_02206520(i)->x;
            y = list.func_ov004_02206520(i)->y;
            s32 hx = x >> 4;
            s32 hy = y >> 4;
            void *cell = p19::func_0204ebd8(grid, hx, hy, x - (hx << 4), y - (hy << 4), 0);
            if (cell != NULL && p19::func_0204b2d4(cell)) {
                r5 = (r5 + (x + (y << 4))) & 0xf;
                break;
            }
        }
    }
    unk_1e = r5;
    list.func_ov004_02206554();
    return TRUE;
}

BOOL Unk_ov004_0224aadc::func_ov004_0220f7b4() {
    if (unk_85c == 2) {
        func_ov004_0220fae8(9);
    }
}

BOOL Unk_ov004_0224aadc::func_ov004_0220f7d0() {
    return p19::func_02051da4(this, 1, 0xff, 1);
}

BOOL Unk_ov004_0224aadc::func_ov004_0220f7e4() {
    s32 v = func_ov004_0220fbf4();
    if (v == -1) {
        func_ov004_0220fae8(8);
    } else if (p19::func_ov004_02224c78(v)) {
        func_ov004_0220fae8(8);
    }
}

BOOL Unk_ov004_0224aadc::func_ov004_0220f814() {
    void *r4 = p19::_ZN18Unk_ov004_022351bc19func_ov004_02235464EPv(p19::func_ov004_022354d8(), this);
    s32 v = func_ov004_0220fbf4();
    if (v != -1) {
        u16 h = p19::_ZN18Unk_ov004_022355ac19func_ov004_022354e0Ev(r4);
        void *a = p19::_ZN18Unk_ov004_022355ac19func_ov004_022354ecEv(r4);
        p19::func_ov004_022249f8(&v, a, (u8 *)p19::_ZN18Unk_ov004_022355ac19func_ov004_022354ecEv(r4) + 8, &h);
        return TRUE;
    }
    return TRUE;
}

BOOL Unk_ov004_0224aadc::func_ov004_0220f86c() {
    return func_ov004_0220fae8(7);
}

BOOL Unk_ov004_0224aadc::func_ov004_0220f878() {
    return TRUE;
}

BOOL Unk_ov004_0224aadc::func_ov004_0220f87c() {
    if (unk_85c == 0) {
        p19::func_0203d67c(this);
    }
}

BOOL Unk_ov004_0224aadc::func_ov004_0220f898() {
    s32 v = func_ov004_0220fbf4();
    if (v != -1) {
        if (p19::func_ov004_022249d4(&v)) {
            return p19::func_02051da4(this, 3, 0xff, 1);
        }
        return FALSE;
    }
    return p19::func_02051da4(this, 3, 0xff, 1);
}

BOOL Unk_ov004_0224aadc::func_ov004_0220f8dc() {
    if (p19::func_0206ec6c()) {
        func_ov004_0220fae8(5);
    }
}

BOOL Unk_ov004_0224aadc::func_ov004_0220f8f8() {
    if (p19::func_0206eca4(0x22)) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov004_0224aadc::func_ov004_0220f914() {
    if (unk_85c == 2) {
        func_ov004_0220fae8(4);
    }
}

BOOL Unk_ov004_0224aadc::func_ov004_0220f930() {
    return p19::func_02051da4(this, 1, 0xff, 1);
}

BOOL Unk_ov004_0224aadc::func_ov004_0220f944() {
    s32 v = func_ov004_0220fbf4();
    if (v == -1) {
        func_ov004_0220fae8(3);
    } else if (p19::func_ov004_02224c78(v)) {
        func_ov004_0220fae8(3);
    }
}

BOOL Unk_ov004_0224aadc::func_ov004_0220f974() {
    void *r4 = p19::_ZN18Unk_ov004_022351bc19func_ov004_02235464EPv(p19::func_ov004_022354d8(), this);
    s32 v = func_ov004_0220fbf4();
    if (v != -1) {
        u16 h = p19::_ZN18Unk_ov004_022355ac19func_ov004_022354e0Ev(r4);
        void *a = p19::_ZN18Unk_ov004_022355ac19func_ov004_022354ecEv(r4);
        if (p19::func_ov004_022249f8(&v, a, (u8 *)p19::_ZN18Unk_ov004_022355ac19func_ov004_022354ecEv(r4) + 8, &h)) {
            return TRUE;
        }
        return FALSE;
    }
    return TRUE;
}

BOOL Unk_ov004_0224aadc::func_ov004_0220f9d4() {
    return func_ov004_0220fae8(2);
}

BOOL Unk_ov004_0224aadc::func_ov004_0220f9e0() {
    return TRUE;
}

BOOL Unk_ov004_0224aadc::func_ov004_0220f9e4() {
}

BOOL Unk_ov004_0224aadc::func_ov004_0220f9e8() {
    return TRUE;
}

void Unk_ov004_0224aadc::func_ov004_0220f9ec() {
    typedef BOOL (Unk_ov004_0224aadc::*Fn)();
    static Fn tbl[12] = {
        &Unk_ov004_0224aadc::func_ov004_0220f9e4,
        &Unk_ov004_0224aadc::func_ov004_0220f9d4,
        &Unk_ov004_0224aadc::func_ov004_0220f944,
        &Unk_ov004_0224aadc::func_ov004_0220f914,
        &Unk_ov004_0224aadc::func_ov004_0220f8dc,
        &Unk_ov004_0224aadc::func_ov004_0220f87c,
        &Unk_ov004_0224aadc::func_ov004_0220f86c,
        &Unk_ov004_0224aadc::func_ov004_0220f7e4,
        &Unk_ov004_0224aadc::func_ov004_0220f7b4,
        &Unk_ov004_0224aadc::func_ov004_0220f6bc,
        &Unk_ov004_0224aadc::func_ov004_0220f694,
        (Fn)&Unk_ov004_0224aadc::func_ov004_0220f624,
    };
    s32 s = unk_860;
    if (s < 12) {
        (this->*tbl[s])();
    }
}

BOOL Unk_ov004_0224aadc::func_ov004_0220fae8(s32 s) {
    typedef BOOL (Unk_ov004_0224aadc::*Fn)();
    static Fn tbl[12] = {
        &Unk_ov004_0224aadc::func_ov004_0220f9e8,
        &Unk_ov004_0224aadc::func_ov004_0220f9e0,
        &Unk_ov004_0224aadc::func_ov004_0220f974,
        &Unk_ov004_0224aadc::func_ov004_0220f930,
        &Unk_ov004_0224aadc::func_ov004_0220f8f8,
        &Unk_ov004_0224aadc::func_ov004_0220f898,
        &Unk_ov004_0224aadc::func_ov004_0220f878,
        &Unk_ov004_0224aadc::func_ov004_0220f814,
        &Unk_ov004_0224aadc::func_ov004_0220f7d0,
        &Unk_ov004_0224aadc::func_ov004_0220f6e0,
        &Unk_ov004_0224aadc::func_ov004_0220f6b8,
        &Unk_ov004_0224aadc::func_ov004_0220f650,
    };
    if (s < 12) {
        if ((this->*tbl[s])()) {
            unk_860 = s;
            return TRUE;
        }
    }
    return FALSE;
}

void Unk_ov004_0224ba18::vfunc_s18() {
    u32 r = p20::_ZN12Unk_020aa3b813func_020aa514Ev(p20::_ZN12Unk_020660f813func_020679b4Ev(((u32)unk_3c)));
    if (unk_854 == 1) {
        switch (r) {
        case 0:
            p20::_ZN12Unk_020660f813func_02067a84EPhPv(((u32)unk_3c), p20::data_021edb5c, 0);
            vfunc_70(6, 0xff);
            break;
        case 1:
            vfunc_70(5, 0xff);
            break;
        }
    } else {
        switch (r) {
        case 0:
            p20::_ZN12Unk_020660f813func_02067a84EPhPv(((u32)unk_3c), p20::data_021edb5c, 0);
            vfunc_70(0xa, 0xff);
            break;
        case 1:
            p20::_ZN12Unk_020660f813func_02067a84EPhPv(((u32)unk_3c), p20::data_021edb5c, 0);
            vfunc_70(9, 0xff);
            break;
        }
    }
}

void Unk_ov004_0224ba18::vfunc_14() {
    if (unk_1e == 0) {
        u32 o = ((u32)unk_3c);
        u32 h = p20::_ZN12Unk_020660f813func_020679b4Ev(o);
        p20::_ZN12Unk_020aa3b813func_020aa680Eii(h, 2, 1);
        u8 buf[4];
        buf[0] = 0xc;
        buf[1] = p20::data_021edb5c[0];
        p20::_ZN12Unk_020aa3b813func_020aa638EiPKhiS1_PKci(h, 0, &buf[0], 1, &buf[1], 0, 2);
        buf[2] = 0xd;
        buf[3] = p20::data_021edb5c[0];
        p20::_ZN12Unk_020aa3b813func_020aa638EiPKhiS1_PKci(h, 1, &buf[2], 1, &buf[3], 0, 0);
        p20::_ZN12Unk_020aa3b813func_020aa608Ev(h);
        p20::_ZN12Unk_020660f813func_020679c0Ei(o, 1);
    }
    if (unk_1e == 0x19) {
        vfunc_70(5, 0xff);
    }
}

void Unk_ov004_0224ba18::vfunc_4c(u32 a, u8 b) {
    switch (a) {
    case 0:
    case 1:
        if (unk_854 == 1) {
            vfunc_70(2, 0xff);
        } else {
            vfunc_70(7, 0xff);
        }
        break;
    case 8:
        vfunc_70(1, 0xff);
        break;
    }
}

void Unk_ov004_0224ba18::func_ov004_022103ac() {
    if (unk_848 < 0x16) {
        unk_848++;
    }
    if (unk_848 == 0x16) {
        p20::_ZN12Unk_020d967013func_0203e47cEi(this, static_cast<Unk_020ddcf0 *>(this));
        p20::func_0203d67c(this);
        p20::func_020ed188(this);
    }
}

BOOL Unk_ov004_0224ba18::func_ov004_022103ec() {
    unk_848 = 0;
    return TRUE;
}

void Unk_ov004_0224ba18::func_ov004_022103fc() {
    if (func_ov004_022057b0()) {
        s32 r4 = unk_84c;
        s32 r6 = unk_850;
        if (b20_unk_780 == 2) {
            if (unk_842 != 0) {
                r4++;
            }
        }
        u32 t = p20::func_02053228(&unk_858);
        if (unk_842 != 0) {
            if (t == 2) {
                r4--;
            }
        }
        u32 c = p20::func_0204b25c(&unk_858);
        p20::func_ov004_02209d58(r4, r6, c, 3, 0, 1);
        if (p20::func_ov004_02235028()) {
            vfunc_70(0xd, 0xff);
        }
    }
}

BOOL Unk_ov004_0224ba18::func_ov004_02210488() {
    func_ov004_0220711c(&unk_84c, &unk_850, 0, 0);
    func_ov004_02205814();
    return TRUE;
}

void Unk_ov004_0224ba18::func_ov004_022104b8() {
    if (p20::func_0206ec6c()) {
        if (p20::func_0206ed18() == 0) {
            p20::_ZN12Unk_020d967013func_0203e47cEi(this, static_cast<Unk_020ddcf0 *>(this));
            p20::func_0203d67c(this);
        } else {
            u32 r4 = p20::func_0206ed38();
            unk_858 = p20::func_02099048();
            void *p = p20::func_0209750c();
            if (p) {
                p20::_ZN12Unk_0209865c13func_020986d8EPt(p, &unk_858);
            }
            u16 v = p20::func_0204b248(p20::func_ov004_022087a4(this), 0);
            p20::func_0209909c(&v, 0, r4);
            vfunc_70(0xc, 0xff);
        }
    }
}

// ================================================================ named data of the unit (generated by t_mkdata.py from the original image)
// ---- .rodata 0x02240024-0x02240090: state tables returned by the vfunc_74 overrides (index = state), a type list, a row table
extern "C" {
extern const u8 data_ov004_02240024[2];
extern const u8 data_ov004_02240028[2];
extern const u8 data_ov004_0224002c[2];
extern const u8 data_ov004_02240030[2];
extern const u8 data_ov004_02240034[2];
extern const u8 data_ov004_02240038[2];
extern const u8 data_ov004_0224003c[2];
extern const u8 data_ov004_02240040[3];
extern const u8 data_ov004_02240044[3];
extern const u8 data_ov004_02240048[4];
extern const u8 data_ov004_0224004c[4];
extern const u8 data_ov004_02240050[4];
extern const u8 data_ov004_02240054[4];
extern const u8 data_ov004_02240058[4];
extern const u8 data_ov004_0224005c[4];
extern const u8 data_ov004_02240060[4];
extern const u8 data_ov004_02240064[5];
extern const u32 data_ov004_0224006c[3];
}
const u8 data_ov004_02240024[2] = {0, 1};
const u8 data_ov004_02240028[2] = {0, 1};
const u8 data_ov004_0224002c[2] = {1, 0};
const u8 data_ov004_02240030[2] = {0, 1};
const u8 data_ov004_02240034[2] = {0, 1};
const u8 data_ov004_02240038[2] = {0, 1};
const u8 data_ov004_0224003c[2] = {0, 1};
const u8 data_ov004_02240040[3] = {0, 1, 1};
const u8 data_ov004_02240044[3] = {0, 1, 0};
const u8 data_ov004_02240048[4] = {1, 0, 0, 1};
const u8 data_ov004_0224004c[4] = {0, 1, 1, 0};
const u8 data_ov004_02240050[4] = {0, 1, 1, 0};
const u8 data_ov004_02240054[4] = {0, 1, 1, 0};
const u8 data_ov004_02240058[4] = {0, 1, 1, 0};
const u8 data_ov004_0224005c[4] = {0, 1, 1, 0};
const u8 data_ov004_02240060[4] = {0, 1, 1, 0};
const u8 data_ov004_02240064[5] = {0, 1, 1, 0, 0};
const u32 data_ov004_0224006c[3] = {0xb, 0xc, 0xd};

// ---- .bss: position tables (Unk_02000c8c = main's 3-word vector class with a registered destructor), filled by __sinit
// (symbols.txt labels 0x0224fc90 / 0x0224fca8 / 0x0224fcc0 are the second elements of the arrays)
Unk_02000c8c data_ov004_0224fc84[2] = {Unk_02000c8c(0x2000, 0, 0x2000), Unk_02000c8c(0x2000, 0, -0x2000)};
Unk_02000c8c data_ov004_0224fc9c[2] = {Unk_02000c8c(0x1000, 0, 0x3000), Unk_02000c8c(0x1000, 0, -0x3000)};
Unk_02000c8c data_ov004_0224fac0[1] = {Unk_02000c8c(0, 0, 0)};
Unk_02000c8c data_ov004_0224fcb4[2] = {Unk_02000c8c(-0x1000, 0, -0x1000), Unk_02000c8c(-0x1000, 0, 0x1000)};
// item id shared by the Unk_ov004_0224a17c objects (main class Unk_0203442c: u16, constructor stores 0xfff1)
Unk_0203442c data_ov004_0224f9ac;

// ---- .rodata: rows {positions, count} indexed by the object's unk_780 (func_ov004_02210f0c)
struct Unk_ov004_02240078_Row {
    Unk_02000c8c *unk_00;
    u32 unk_04;
};
extern "C" {
extern const Unk_ov004_02240078_Row data_ov004_02240078[3];
}
const Unk_ov004_02240078_Row data_ov004_02240078[3] = {{0, 0}, {data_ov004_0224fac0, 1}, {data_ov004_0224fcb4, 2}};

// ---- .data: positions indexed by unk_780 (func_ov004_02210f74)
Unk_02000c8c *data_ov004_02249028[3] = {0, data_ov004_0224fc84, data_ov004_0224fc9c};

// ---- .data: the 34 registration entries {factory, id range, 0, 0xc8000, 0x12c000, 0x258000}; main refers to them by address only
typedef void (*Unk_ov004_Factory)();
struct Unk_ov004_SceneEntry {
    Unk_ov004_Factory unk_00;
    u16 unk_04;
    u16 unk_06;
    u32 unk_08[4];
};
extern "C" {
Unk_ov004_SceneEntry data_ov004_02249034 = {(Unk_ov004_Factory)func_ov004_0220c32c, 0x44, 0x4b, {0x0, 0xc8000, 0x12c000, 0x258000}};
Unk_ov004_SceneEntry data_ov004_0224904c = {(Unk_ov004_Factory)func_ov004_0220c0a0, 0x45, 0x4c, {0x0, 0xc8000, 0x12c000, 0x258000}};
Unk_ov004_SceneEntry data_ov004_02249064 = {(Unk_ov004_Factory)func_ov004_0220a628, 0x4f, 0x56, {0x0, 0xc8000, 0x12c000, 0x258000}};
Unk_ov004_SceneEntry data_ov004_0224907c = {(Unk_ov004_Factory)func_ov004_0220f608, 0x39, 0x40, {0x0, 0xc8000, 0x12c000, 0x258000}};
Unk_ov004_SceneEntry data_ov004_02249094 = {(Unk_ov004_Factory)func_ov004_0220f280, 0x3a, 0x41, {0x0, 0xc8000, 0x12c000, 0x258000}};
Unk_ov004_SceneEntry data_ov004_022490ac = {(Unk_ov004_Factory)func_ov004_0220bda0, 0x46, 0x4d, {0x0, 0xc8000, 0x12c000, 0x258000}};
Unk_ov004_SceneEntry data_ov004_022490c4 = {(Unk_ov004_Factory)func_ov004_0220bc18, 0x47, 0x4e, {0x0, 0xc8000, 0x12c000, 0x258000}};
Unk_ov004_SceneEntry data_ov004_022490dc = {(Unk_ov004_Factory)func_ov004_0220b9b0, 0x48, 0x4f, {0x0, 0xc8000, 0x12c000, 0x258000}};
Unk_ov004_SceneEntry data_ov004_022490f4 = {(Unk_ov004_Factory)func_ov004_02212f0c, 0x2f, 0x36, {0x0, 0xc8000, 0x12c000, 0x258000}};
Unk_ov004_SceneEntry data_ov004_0224910c = {(Unk_ov004_Factory)func_ov004_0220e934, 0x3b, 0x42, {0x0, 0xc8000, 0x12c000, 0x258000}};
Unk_ov004_SceneEntry data_ov004_02249124 = {(Unk_ov004_Factory)func_ov004_02212af8, 0x30, 0x37, {0x0, 0xc8000, 0x12c000, 0x258000}};
Unk_ov004_SceneEntry data_ov004_0224913c = {(Unk_ov004_Factory)func_ov004_022127fc, 0x31, 0x38, {0x0, 0xc8000, 0x12c000, 0x258000}};
Unk_ov004_SceneEntry data_ov004_02249154 = {(Unk_ov004_Factory)func_ov004_0220e550, 0x3c, 0x43, {0x0, 0xc8000, 0x12c000, 0x258000}};
Unk_ov004_SceneEntry data_ov004_0224916c = {(Unk_ov004_Factory)func_ov004_022124e0, 0x32, 0x39, {0x0, 0xc8000, 0x12c000, 0x258000}};
Unk_ov004_SceneEntry data_ov004_02249184 = {(Unk_ov004_Factory)func_ov004_022120f4, 0x33, 0x3a, {0x0, 0xc8000, 0x12c000, 0x258000}};
Unk_ov004_SceneEntry data_ov004_0224919c = {(Unk_ov004_Factory)func_ov004_0220e100, 0x3d, 0x44, {0x0, 0xc8000, 0x12c000, 0x258000}};
Unk_ov004_SceneEntry data_ov004_022491b4 = {(Unk_ov004_Factory)func_ov004_0220deac, 0x3e, 0x45, {0x0, 0xc8000, 0x12c000, 0x258000}};
Unk_ov004_SceneEntry data_ov004_022491cc = {(Unk_ov004_Factory)func_ov004_0220b3bc, 0x49, 0x50, {0x0, 0xc8000, 0x12c000, 0x258000}};
Unk_ov004_SceneEntry data_ov004_022491e4 = {(Unk_ov004_Factory)func_ov004_02211d10, 0x34, 0x3b, {0x0, 0xc8000, 0x12c000, 0x258000}};
Unk_ov004_SceneEntry data_ov004_022491fc = {(Unk_ov004_Factory)func_ov004_0220b264, 0x4a, 0x51, {0x0, 0xc8000, 0x12c000, 0x258000}};
Unk_ov004_SceneEntry data_ov004_02249214 = {(Unk_ov004_Factory)func_ov004_0220b10c, 0x4b, 0x52, {0x0, 0xc8000, 0x12c000, 0x258000}};
Unk_ov004_SceneEntry data_ov004_0224922c = {(Unk_ov004_Factory)func_ov004_0220b058, 0x4c, 0x53, {0x0, 0xc8000, 0x12c000, 0x258000}};
Unk_ov004_SceneEntry data_ov004_02249244 = {(Unk_ov004_Factory)func_ov004_022118d0, 0x35, 0x3c, {0x0, 0xc8000, 0x12c000, 0x258000}};
Unk_ov004_SceneEntry data_ov004_0224925c = {(Unk_ov004_Factory)func_ov004_0220d5f8, 0x3f, 0x46, {0x0, 0xc8000, 0x12c000, 0x258000}};
Unk_ov004_SceneEntry data_ov004_02249274 = {(Unk_ov004_Factory)func_ov004_022114d4, 0x36, 0x3d, {0x0, 0xc8000, 0x12c000, 0x258000}};
Unk_ov004_SceneEntry data_ov004_0224928c = {(Unk_ov004_Factory)func_ov004_022111f0, 0x37, 0x3e, {0x0, 0xc8000, 0x12c000, 0x258000}};
Unk_ov004_SceneEntry data_ov004_022492a4 = {(Unk_ov004_Factory)func_ov004_0220ce1c, 0x40, 0x47, {0x0, 0xc8000, 0x12c000, 0x258000}};
Unk_ov004_SceneEntry data_ov004_022492bc = {(Unk_ov004_Factory)func_ov004_0220ad6c, 0x4d, 0x54, {0x0, 0xc8000, 0x12c000, 0x258000}};
Unk_ov004_SceneEntry data_ov004_022492d4 = {(Unk_ov004_Factory)func_ov004_0220a024, 0x50, 0x57, {0x0, 0xc8000, 0x12c000, 0x258000}};
Unk_ov004_SceneEntry data_ov004_022492ec = {(Unk_ov004_Factory)func_ov004_0220cad4, 0x41, 0x48, {0x0, 0xc8000, 0x12c000, 0x258000}};
Unk_ov004_SceneEntry data_ov004_02249304 = {(Unk_ov004_Factory)func_ov004_0221020c, 0x38, 0x3f, {0x0, 0xc8000, 0x12c000, 0x258000}};
Unk_ov004_SceneEntry data_ov004_0224931c = {(Unk_ov004_Factory)func_ov004_0220c718, 0x42, 0x49, {0x0, 0xc8000, 0x12c000, 0x258000}};
Unk_ov004_SceneEntry data_ov004_02249334 = {(Unk_ov004_Factory)func_ov004_0220aa14, 0x4e, 0x55, {0x0, 0xc8000, 0x12c000, 0x258000}};
Unk_ov004_SceneEntry data_ov004_0224934c = {(Unk_ov004_Factory)func_ov004_0220c518, 0x43, 0x4a, {0x0, 0xc8000, 0x12c000, 0x258000}};
}

// ---- .data: names (model / animation / sound resource names used by the classes above)
extern "C" {
char data_ov004_0224bb44[12] = "obj_etc_tel";
char data_ov004_0224bb50[14] = "m_dummy_floor";
char data_ov004_0224bb60[13] = "m_dummy_wall";
char data_ov004_0224bb70[16] = "obj_etc_bromide";
char data_ov004_0224bb80[8] = "compass";
char data_ov004_0224bb88[2] = "w";
char data_ov004_0224bb8c[2] = "g";
char data_ov004_0224bb90[2] = "b";
char data_ov004_0224bb94[4] = "myD";
char data_ov004_0224bb98[5] = "tv_m";
char data_ov004_0224bba0[5] = "tv.0";
char data_ov004_0224bba8[6] = "tv_pl";
char data_ov004_0224bbb0[15] = "obj_etc_player";
char data_ov004_0224bbc0[15] = "obj_etc_nchest";
char data_ov004_0224bbd0[17] = "sp_etc_sequence4";
char data_ov004_0224bbe4[17] = "sp_etc_sequence2";
}
