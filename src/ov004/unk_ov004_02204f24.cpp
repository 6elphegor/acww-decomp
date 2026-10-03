// mwcc-version: 1.2/sp2
#include "types.h"

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
    /* 0x3c */ void *unk_3c;
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

class Unk_ov004_0224882c;
typedef Unk_ov004_0224882c Self;

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

    /* 0x12e */ u16 unk_12e; // a Unk_0209c364 (ctor/dtor called by hand)
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

// ================================================================ Unk_ov004_022077a4 (methods of the same object, named by the file they came from)
class Unk_ov004_022077a4;

// Set of up to four neighbour objects built by func_ov004_02206494
struct Unk_ov004_02207854_Set {
    u32 count;
    Unk_ov004_022077a4 *v[4];
};

class Unk_ov004_022077a4 : public Unk_020d9670 {
public:
    virtual BOOL vfunc_60();
    virtual void vfunc_64(s32 a, Unk_ov004_02206ec8_Ctx *b);
    virtual BOOL vfunc_68();
    virtual void vfunc_6c(s32 a, void *b);
    virtual BOOL vfunc_70(u32 a, u8 b);
    virtual u8 vfunc_74(u32 a);
    virtual u8 vfunc_78();

    void func_ov004_022077a4();
    void func_ov004_02207854(void *a, s32 b);
    void func_ov004_022078d8(s32 unused, void *x, s32 y, u8 flag);
    void func_ov004_02207ac4(s32 a, s32 b);
    void func_ov004_02207c40(Unk_ov004_02207854_List *l, void *x, s32 y);
    void func_ov004_02207e14();
    void func_ov004_02207e48();
    void func_ov004_02207ef0();

    /* 0xec */ u8 pad_ec[0x14c - 0xec];
    /* 0x14c */ s32 unk_14c, unk_150, unk_154, unk_158;
    /* 0x15c */ u8 pad_15c[0x178 - 0x15c];
    /* 0x178 */ u8 unk_178[0x250 - 0x178];
    /* 0x250 */ Unk_ov004_Mtx unk_250;
    /* 0x280 */ s32 unk_280;
    /* 0x284 */ u8 unk_284;
    /* 0x285 */ u8 unk_285;
    /* 0x286 */ u8 pad_286[0x534 - 0x286];
    /* 0x534 */ u8 unk_534[0x590 - 0x534];
    /* 0x590 */ void *unk_590;
    /* 0x594 */ u8 pad_594[0x6c8 - 0x594];
    /* 0x6c8 */ u8 unk_6c8[0x73c - 0x6c8];
    /* 0x73c */ u8 unk_73c[2];
    /* 0x73e */ u8 unk_73e[6];
    /* 0x744 */ u8 unk_744[0x760 - 0x744];
    /* 0x760 */ u8 unk_760[8];
    /* 0x768 */ s32 unk_768;
    /* 0x76c */ u8 pad_76c[4];
    /* 0x770 */ s32 unk_770, unk_774;
    /* 0x778 */ u8 pad_778[4];
    /* 0x77c */ s32 unk_77c;
    /* 0x780 */ s32 unk_780;
    /* 0x784 */ s32 unk_784;
    /* 0x788 */ u8 unk_788, unk_789;
    /* 0x78a */ u8 pad_78a[2];
    /* 0x78c */ s32 unk_78c;
    /* 0x790 */ s32 unk_790;
};

// ================================================================ local helper types / inlines
struct Unk_ov004_02207ac4_Tmp {
    u16 v;
    u16 pad;
    Unk_ov004_02207ac4_Tmp() {}
    ~Unk_ov004_02207ac4_Tmp() {}
};

struct Unk_ov004_02207ef0_Bits {
    u32 lo : 4;
    u32 mid : 4;
    u32 id : 16;
    u32 dir : 2;
    u32 pad : 2;
    u32 flag : 1;
};

struct Unk_ov004_022071cc_Pkt {
    u16 a : 9;
    u16 b : 7;
    u16 x : 4;
    u16 y : 4;
    u16 f : 1;
    u16 id : 6;
    u16 pad : 1;
};

struct Unk_ov004_02209d40_Bits {
    u32 a : 4;
    u32 b : 4;
    u32 c : 16;
    u32 d : 2;
    u32 e : 2;
    u32 f : 1;
    u32 w1;
};

struct Unk_ov004_02209e44_Target {
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
    virtual void vfunc_60(u32 a, void *b);
    virtual void vfunc_64(u32 a, void *b);
    virtual void vfunc_68(u32 a, void *b);
    virtual void vfunc_6c(u32 a, void *b);
};

struct Unk_ov004_02209e44_Inner {
    u8 unk_00;
    u8 unk_01;
};

struct Unk_ov004_02209e44_Own {
    u8 pad_00[0x2c];
    Unk_ov004_02209e44_Target *unk_2c;
};

struct Unk_ov004_02209e64 {
    /* 0x00 */ Unk_ov004_02209e44_Inner *unk_00;
    /* 0x04 */ Unk_ov004_02209e44_Own *unk_04;
    /* 0x08 */ u8 pad_08[0x14 - 0x08];
    /* 0x14 */ void (*unk_14)(Unk_ov004_02209e64 *);
    /* 0x18 */ u8 pad_18[4];
    /* 0x1c */ void (*unk_1c)(Unk_ov004_02209e64 *);
    /* 0x20 */ u8 pad_20[4];
    /* 0x24 */ void (*unk_24)(Unk_ov004_02209e64 *);
    /* 0x28 */ u8 pad_28[0x8e - 0x28];
    /* 0x8e */ u8 unk_8e;
    /* 0x8f */ u8 pad_8f;
    /* 0x90 */ u8 unk_90;
    /* 0x91 */ u8 pad_91;
    /* 0x92 */ u8 unk_92;
};

typedef BOOL (Unk_ov004_0224882c::*Unk_ov004_0224882c_Fn)();
struct Unk_ov004_053c0_Buf { s32 v[4]; };

static inline BOOL Unk_ov004_02205820_Is3d(u16 v) {
    if (v == 0x3d) return TRUE;
    return FALSE;
}


// ================================================================ real names of the symbols outside this unit
#define func_02002d9c _ZN12Unk_020d5d848vfunc_28Ev   // main
#define func_02002ec0 _ZN12Unk_020d5d848vfunc_14Ev   // main
#define func_02031960 _ZN12Unk_0203161813func_02031960EP16Unk_0203182c_VeciS1_   // main
#define func_0203e624 _ZN12Unk_020d967013func_0203e624Ej   // main
#define func_0203e630 _ZN12Unk_020d967013func_0203e630Ev   // main
#define func_0203e650 _ZN12Unk_020d96708vfunc_10Ev   // main
#define func_0203e678 _ZN12Unk_020d967013func_0203e678Ei   // main
#define func_0205439c _ZN12Unk_0205454c13func_0205439cEv   // main
#define func_020544d8 _ZN12Unk_0205454cD1Ev   // main
#define func_02054514 _ZN12Unk_0205454cC1Ev   // main
#define func_02054584 _ZN12Unk_0205454c13func_02054584Ev   // main
#define func_02054710 _ZN12Unk_020dbd5413func_02054710Ev   // main
#define func_02054720 _ZN12Unk_0205454c13func_02054720Eiiitt   // main
#define func_020547cc _ZN12Unk_020dbd5413func_020547ccEPv   // main
#define func_02054800 _ZN12Unk_020dbd5413func_02054800EPv   // main
#define func_02055440 _ZN12Unk_020dbe3413func_02055440Ej   // main
#define func_02055488 _ZN12Unk_020dbe3413func_02055488Eii   // main
#define func_020554c0 _ZN12Unk_020dbe3413func_020554c0Ev   // main
#define func_020555ec _ZN12Unk_020dbe3413func_020555ecEP16Unk_020553f8_Resj   // main
#define func_02055a9c _ZN12Unk_020dbe4c13func_02055a9cEj   // main
#define func_02055aac _ZN12Unk_020dbe4c13func_02055aacEiiihit   // main
#define func_02055ae4 _ZN12Unk_020dbe4c13func_02055ae4Eiiiit   // main
#define func_02055b00 _ZN12Unk_020dbe4c13func_02055b00Eiiiit   // main
#define func_02055b38 _ZN12Unk_020dbe4c13func_02055b38Eiiit   // main
#define func_02055b90 _ZN12Unk_020dbe4c13func_02055b90EjPv   // main
#define func_02055bcc _ZN12Unk_020dbe4c13func_02055bccEjPv   // main
#define func_020565e8 _ZN12Unk_020dbe7c13func_020565e8Ei   // main
#define func_02056654 _ZN12Unk_020dbe7c13func_02056654Ev   // main
#define func_020566bc _ZN12Unk_020dbe7c13func_020566bcEv   // main
#define func_02056fcc _ZN12Unk_02056fd813func_02056fccEi   // main
#define func_02094058 _ZN12Unk_0206395413func_02094058Ev   // main
#define func_0209888c _ZN12Unk_0209865c13func_0209888cEv   // main
#define func_0209c224 _ZN12Unk_0209c15c13func_0209c224EPt   // main
#define func_0209c25c _ZN12Unk_0209c15c13func_0209c25cEPt   // main
#define func_0209c344 _ZN12Unk_0209c2f413func_0209c344Ev   // main
#define func_0209c348 _ZN12Unk_0209c2f413func_0209c348Ev   // main
#define func_020b1ddc _ZN12Unk_020b1ddc13func_020b1ddcEv   // main
#define func_020b1e74 _ZN12Unk_020b1ddc13func_020b1e74Ev   // main
#define func_020b22ac _ZN1B13func_020b22acEv   // main
#define func_020b22b0 _Z13func_020b22b0iii   // main
#define func_020b231c _ZN1B13func_020b231cEv   // main
#define func_020b6860 _ZN12Unk_020b696013func_020b6860EP12Unk_020b6a0cP4Vec3S3_S3_ih   // main
#define func_020b68ec _ZN12Unk_020b696013func_020b68ecEP12Unk_020b6e10P4Vec3iiisih   // main
#define func_020b6928 _ZN12Unk_020b696013func_020b6928EP12Unk_020b6e10   // main
#define func_020b69fc _ZN12Unk_020b6a0cD2Ev   // main
#define func_020b6a0c _ZN12Unk_020b6a0cC2Ev   // main
#define func_020b6df4 _ZN12Unk_020b6e10D2Ev   // main
#define func_020b6e10 _ZN12Unk_020b6e10C2Ev   // main
#define func_ov004_022049e0 _ZN18Unk_ov004_0224860c19func_ov004_022049e0Ev   // ov004
#define func_ov004_02204a10 _ZN18Unk_ov004_0224860c19func_ov004_02204a10Ev   // ov004
#define func_ov004_02204a14 _ZN18Unk_ov004_0224860c19func_ov004_02204a14Ev   // ov004
#define func_ov004_02204a38 _ZN18Unk_ov004_0224860c19func_ov004_02204a38Ev   // ov004
#define func_ov004_02204a80 _ZN18Unk_ov004_0224860c19func_ov004_02204a80Ev   // ov004
#define func_ov004_02204a84 _ZN18Unk_ov004_0224860c19func_ov004_02204a84Ev   // ov004
#define func_ov004_02204a88 _ZN18Unk_ov004_0224860c19func_ov004_02204a88Ev   // ov004
#define func_ov004_02204b04 _ZN18Unk_ov004_0224860c19func_ov004_02204b04Ei   // ov004
#define func_ov004_02204c10 _ZN18Unk_ov004_0224860c19func_ov004_02204c10Ev   // ov004
#define func_ov004_02204ccc _ZN18Unk_ov004_0224860c19func_ov004_02204cccEv   // ov004
#define func_ov004_02204cdc _ZN18Unk_ov004_0224860c19func_ov004_02204cdcEv   // ov004
#define func_ov004_0220a040 _ZN18Unk_ov004_0224b31019func_ov004_0220a040Ev   // ov004
#define func_ov004_0220a068 _ZN18Unk_ov004_0224b31019func_ov004_0220a068Ev   // ov004
#define func_ov004_0220a088 _ZN18Unk_ov004_0224b31019func_ov004_0220a088Ev   // ov004
#define func_ov004_0220a0bc _ZN18Unk_ov004_0224b31019func_ov004_0220a0bcEv   // ov004
#define func_ov004_0220a0c0 _ZN18Unk_ov004_0224b31019func_ov004_0220a0c0Ev   // ov004
#define func_ov004_0220a0e4 _ZN18Unk_ov004_0224b31019func_ov004_0220a0e4Ev   // ov004
#define func_ov004_0220a128 _ZN18Unk_ov004_0224b31019func_ov004_0220a128Ev   // ov004
#define func_ov004_0220a154 _ZN18Unk_ov004_0224b31019func_ov004_0220a154Ev   // ov004
#define func_ov004_0220a174 _ZN18Unk_ov004_0224b31019func_ov004_0220a174Ev   // ov004
#define func_ov004_0220a1e4 _ZN18Unk_ov004_0224b31019func_ov004_0220a1e4Ev   // ov004
#define func_ov004_0220a1e8 _ZN18Unk_ov004_0224b31019func_ov004_0220a1e8Ev   // ov004
#define func_ov004_0220a280 _ZN18Unk_ov004_0224b31019func_ov004_0220a280Ei   // ov004
#define func_ov004_0220a328 _ZN18Unk_ov004_0224b31019func_ov004_0220a328Ev   // ov004
#define func_ov004_0220a33c _ZN18Unk_ov004_0224b31019func_ov004_0220a33cEv   // ov004
#define func_ov004_0220a360 _ZN18Unk_ov004_0224b31019func_ov004_0220a360Ev   // ov004
#define func_ov004_0220a364 _ZN18Unk_ov004_0224b31019func_ov004_0220a364Ev   // ov004
#define func_ov004_0220a380 _ZN18Unk_ov004_0224b31019func_ov004_0220a380Ev   // ov004
#define func_ov004_0220a394 _ZN18Unk_ov004_0224b31019func_ov004_0220a394Ev   // ov004
#define func_ov004_0220a3b8 _ZN18Unk_ov004_0224b31019func_ov004_0220a3b8Ev   // ov004
#define func_ov004_0220a3bc _ZN18Unk_ov004_0224b31019func_ov004_0220a3bcEv   // ov004
#define func_ov004_0220a3d8 _ZN18Unk_ov004_0224b31019func_ov004_0220a3d8Ev   // ov004
#define func_ov004_02235120 _ZN18Unk_ov004_022351bc19func_ov004_02235120EiP21Unk_ov004_02235528_V3S1_iS1_S1_si   // ov004
#define func_ov004_02235464 _ZN18Unk_ov004_022351bc19func_ov004_02235464EPv   // ov004
#define func_ov004_022354e0 _ZN18Unk_ov004_022355ac19func_ov004_022354e0Ev   // ov004
#define func_ov004_022354ec _ZN18Unk_ov004_022355ac19func_ov004_022354ecEv   // ov004
#define func_ov004_022355b0 _ZN18Unk_ov004_0223570819func_ov004_022355b0EPvi   // ov004
#define func_ov004_022355d8 _ZN18Unk_ov004_0223570819func_ov004_022355d8Eiii   // ov004
#define func_ov004_02235624 _ZN18Unk_ov004_0223570819func_ov004_02235624Eiii   // ov004
#define func_ov004_02235648 _ZN18Unk_ov004_0223570819func_ov004_02235648Eiiih   // ov004
#define func_ov004_0223568c _ZN18Unk_ov004_0223570819func_ov004_0223568cEiiih   // ov004
#define func_ov004_02235720 _ZN18Unk_ov004_0223583c19func_ov004_02235720Ej   // ov004
#define func_ov004_02235740 _ZN18Unk_ov004_0223583c19func_ov004_02235740EPv   // ov004
#define func_ov004_022357b0 _ZN18Unk_ov004_0223583c19func_ov004_022357b0EPv   // ov004
#define func_ov004_022357e0 _ZN18Unk_ov004_0223583c19func_ov004_022357e0EPv   // ov004
#define func_ov004_02235854 _ZN18Unk_ov004_022358c819func_ov004_02235854EPv   // ov004
#define func_ov004_02235860 _ZN18Unk_ov004_022358c819func_ov004_02235860Ev   // ov004
#define func_ov004_02235908 _ZN18Unk_ov004_02235cc019func_ov004_02235908Ejj   // ov004
#define func_ov004_0223591c _ZN18Unk_ov004_02235cc019func_ov004_0223591cEjj   // ov004
#define func_ov004_02235930 _ZN18Unk_ov004_02235cc019func_ov004_02235930Ev   // ov004
#define func_ov004_02235948 _ZN18Unk_ov004_02235cc019func_ov004_02235948Ev   // ov004
#define func_ov004_02235984 _ZN18Unk_ov004_0223598419func_ov004_02235984Ev   // ov004

// ================================================================ externs
extern "C" {
s32 func_0209750c();
BOOL func_0203d67c(void *p);
s32 func_020e9650(void *a, void *b);
s32 func_02052cf4();
s32 func_01ffc5a4(s32 a, s32 b);
s32 func_020e761c(s32 *p, s32 target, s32 step);
void func_ov004_02234490(void *p);
void func_020943dc(u32 a);
s32 func_020e9960(void *out, void *a, void *b);
void *func_ov004_02233bf4();
BOOL func_ov004_02233a20(void *o, void *a, s32 *b, s32 c);
BOOL func_ov004_02233a48(void *o, void *a, s32 *b, s32 c);
BOOL func_ov004_022339cc(void *o, void *a, s32 *out);
s32 func_020e7530(s16 *v, s32 target, s32 step);
s32 func_01ffcb0c(s32 a, s32 b);
void func_020e93a0(Unk_ov004_Vec3 *v, s16 a);
void func_01ffd070(Unk_ov004_Vec3 *out, Unk_ov004_Vec3 *a, Unk_ov004_Vec3 *b);
s32 func_02056fcc(void *p, u32 id);
void *func_02095204(s32 a);
u16 func_0204b248(s32 a, s32 b);
s32 func_ov004_02234f6c(void *v);
s32 func_ov004_0222c570(u16 *a, Unk_ov004_Vec3 *b);
s32 func_020b231c(void *p);
s32 func_020b22ac(void *p);
s32 func_020b22b0(s32 a, s32 b, s32 c);
s32 func_0210622c(void *p, s32 a, s32 b);
s32 func_0210612c(void *p, s32 a, s32 b);
Unk_ov004_02205c80_Obj *func_ov004_022355d8(void *mgr, s32 a, s32 b, s32 c);
void *func_ov004_0223584c();
s32 func_ov004_02235740(void *mgr, void *o);
void func_ov004_0222c4d8(u32 a, void *b, void *c, s32 d, s32 e, s32 f);
void func_0204ed8c(void *out, s32 x, s32 y);
void func_0204ee10(s32 *x, s32 *y, void *v);
void MTX_Inverse43(void *a, void *b);
void MTX_MultVec43(void *a, void *b, void *c);
void func_020e8528(void *m, s32 x, s32 y, s32 z);
u32 func_020b50e8();
void func_02052554(s32 x, s32 y, u32 a, u32 b, u32 mgr);
s32 func_02052580(s32 x, s32 y, u32 a, u32 mgr);
void func_02051784(u32 mgr, s32 x, s32 y, u16 *p, s32 a);
u16 *func_0204ebd8(void *grid, s32 hx, s32 hy, s32 lx, s32 ly, u32 layer);
BOOL func_0204b288(u16 *p);
BOOL func_0204b300(u16 *p);
BOOL func_0204b2d4(u16 *p);
u32 func_0204b25c(u16 *p);
void *NNS_G3dGetTex(void *p);
extern void *data_021c47c4;
extern Unk_ov004_02205eb0_Mtx data_021f47e0;
extern void *data_021f482c;
void func_02055724(void *a, s32 b);
void *func_0205588c(void *a, s32 b);
s32 func_020e7b98(s32 a, s32 b);
s32 FX_Sqrt(s64 a);
void func_02033078(Unk_0202f048 *out, Unk_020d8ce4 *p);
void func_020e8300(void *a, s32 b);
void VEC_Subtract(void *a, void *b, void *c);
void VEC_Add(void *a, void *b, void *c);
s32 func_020e96a4(void *a, void *b);
s32 func_020e96ec(void *a, void *b);
void *func_ov004_022355b0(void *a, void *b, s32 c);
void *func_ov004_022354d8();
void func_ov004_02235120(void *a, void *b, void *c, void *d, s32 e, void *f, void *g, s32 h, s32 i);
s32 func_0209c344(void *p);
s32 func_0209c348(void *p);
void *func_020641ec(void *path, void *heap, s32 mode, u32 *size);
s32 func_020639e8(char *buf, char *fmt, ...);
void *func_020e8608(void *a, u32 b);
void MI_CpuCopy8(void *dst, void *src, u32 n);
s32 func_02101340(void *buf, char *fmt, void *arg);
void func_02101310(void *buf);
s32 func_021012bc(s32 a);
void *NNS_G3dGetMdlSet(s32 a);
s32 func_021065dc(s32 a);
s32 func_021065f8(s32 a, s32 b);
s32 func_02106618(s32 a);
s32 func_02106634(s32 a, s32 b);
s32 func_02106788(s32 a);
s32 func_021067a4(s32 a, s32 b);
s32 func_02106654(s32 a);
s32 func_02106670(s32 a, s32 b);
s32 func_02106690(s32 a);
s32 func_021066ac(s32 a, s32 b);
void func_020e8558(void *p);
extern s32 data_020c8cbc;
extern u8 data_020e416c;
void func_ov004_0223717c(void *a, void *b);
BOOL func_020b52f8(void);
BOOL func_02031284(s32 x, s32 y);
s32 func_0202ffdc(void *v);
u16 *func_ov004_0222aaa0(void);
u32 func_02061950(u16 *p);
u32 func_02031060(u32 a);
s32 func_ov004_02234c2c(void *fn);
void func_02064460(u32 a, u32 b);
s32 func_020516a4(u32 a, u32 b);
void func_0209028c(u32 id, void *v, u32 a, u32 b);
void *func_020947f0(u32 id);
void *func_02002bdc(void *v, void *cam);
u32 func_020b52d0(void);
void func_020b1e74(void *p);
void func_020b1ddc(void *p);
extern u8 data_021c3084[];
extern u8 data_021c309c[];
BOOL func_020b530c(u32 a);
void func_02064478(u32 a, u32 b, u32 c);
void func_02051844(s32 a, s32 x, s32 y, u32 layer, u32 c, void *p, s32 b, s32 a2);
void func_02051a50(s32 a, s32 x, s32 y, u32 layer, u32 c, u32 r7, s32 v18, void *p, s32 one);
void func_ov004_0223568c(void *a, void *self, s32 x, s32 y, u32 layer);
void func_ov004_02235648(void *a, void *self, s32 x, s32 y, u32 layer);
s32 func_ov004_02235624(void *a, s32 x, s32 y, s32 one);
void func_02055440(void *self, u32 v);
void func_02055488(void *self, s32 fn, void *arg);
void func_021039ec(s32 a, void *b);
void func_02103830(s32 a, void *b);
void func_0204eda4(void *p, s32 a, s32 b, u32 c, u32 d);
s32 func_020e94f8(void *v);
s32 func_020534a4(s32 a);
s32 func_0205346c(s32 a);
s32 func_02053248(s32 a);
s32 func_020533c8(s32 a);
s32 func_0205338c(s32 a);
u32 func_02052f44(s32 a);
u32 func_02052f04(s32 a);
s32 func_02052fc4(s32 a);
BOOL func_02052e80(u32 a);
extern u32 data_ov004_02252058[];
s32 func_ov004_02234f80(s32 x, s32 y);
void func_020b6860(u32 o, void *p, void *v, s32 a, s32 b, s32 c, s32 d);
void func_020b68ec(u32 o, void *p, void *v, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f);
void func_020b6928(u32 o, void *p);
s32 func_02031960(void *o, void *p, s32 a, void *q);
void func_02031908(void *o, s32 a, s32 b, s32 c, void *p, s32 d, void *q);
void func_020318cc(void *o);
s32 func_020e8388(void *m, s32 x, s32 y, s32 z);
s32 func_020e8434(void *m, s32 a);
s32 func_020e8404(void *m, s32 a);
s32 func_02052cbc();
s32 func_02081780();
void *func_02081718(s32 i);
s32 func_0209888c();
s32 func_02094058();
s32 func_02054584(void *o);
void func_0205439c(void *o);
s32 func_02056654(void *o);
void func_020566bc(void *o);
u32 func_020554c0(void *o);
void func_02055b00(void *o, u32 a, void *b, s32 c, s32 d, u32 e);
void func_02055aac(void *o, u32 a, void *b, void *c, s32 d, s32 e, u32 f);
void func_02054720(void *o, void *a, s32 b, s32 c, u32 d, s32 e);
void *func_0209c25c(void *self, void *p);
extern u8 data_027e00c8[];
extern s16 data_02135f44[];
u32 func_ov004_022330f8(u32);
u32 func_ov004_02233108(u32);
u32 func_ov004_02233118(u32);
u32 func_ov004_02233128(u32);
void func_ov004_0223591c(void *, u32, void *);
void func_ov004_02235908(void *, u32, void *);
void func_ov004_02235930(void *);
void func_ov004_02235948(void *);
void func_ov004_022357b0(void *, void *);
BOOL func_02055b90(void *, u32, u32);
BOOL func_02055bcc(void *, u32, u32);
void func_02055b38(void *, void *, s32, s32, s32);
void func_02055a9c(void *, u32);
void func_02055ae4(void *, void *, void *, s32, s32, s32);
BOOL func_02054800(void *, u32);
void func_02054710(void *);
void func_020547cc(void *, void *);
void func_0209c224(void *, void *);
u32 func_02052e0c(u32);
BOOL func_020b51b8(u32);
void func_0204eb30(void *, u16 *, s32, s32, s32);
BOOL func_02002ec0(void *, s32);
BOOL func_02002d9c(void *);
BOOL func_0203e650(void *);
void func_ov004_02235980(void *);
void func_ov004_02205c1c(void *);
void func_ov004_02205d78(void *);
void func_ov004_02205d4c(void *);
void func_ov004_022069b4(void *);
void func_020544d8(void *);
void func_020b6df4(void *);
void func_ov004_02233c10(void *);
void func_ov004_022061e8(void *);
void func_ov004_02205e9c(void *);
void func_0209c364(void *);
void func_ov004_02206e98(void *);
void func_020b69fc(void *);
void func_ov004_02206eb0(void *);
void func_020b6a0c(void *);
void func_0209c370(void *);
void func_ov004_02205ea0(void *);
void func_ov004_02206204(void *);
void func_ov004_02233c18(void *);
void func_020b6e10(void *);
void func_02054514(void *);
void func_ov004_022069cc(void *);
void func_ov004_02206e38(void *);
void func_ov004_02205d50(void *);
void func_ov004_02205d7c(void *);
void func_ov004_02205c2c(void *);
void func_ov004_02235984(void *);
void func_ov004_022357e0(void *, void *);
BOOL func_0203e630(void *);
void func_0203e624(void *, u32);
void func_020555ec(void *, void *, void *);
void func_0203e678(void *, s32);
extern const u8 data_ov004_0224004c[];
extern const char data_ov004_0224bb44[];
void *func_ov004_022358d8(void);
void func_ov004_02235854(void *heap, void *p);
void *func_ov004_02235860(void *heap, u32 size);
void *func_0212899c(void *p, s32 v, u32 n);
void *func_ov004_02235464(void *, void *);
s32 *func_ov004_022354ec(void);
u32 func_ov004_022354e0(void *);
u32 func_020621d4(void);
void func_0203d704(void *, s32);
BOOL func_020565e8(void *, u32);
u32 func_020b50b4();
void *func_ov004_02235718();
void *func_ov004_02206be4(void *o);
void func_020ed188(void *self);
struct Unk_ov004_027e0148 { u8 pad[0x18]; u32 unk_18; };
extern Unk_ov004_027e0148 data_027e0148;
extern void *data_021c47c4;
extern Unk_ov004_Mtx data_021f47e0;
BOOL _ZN18Unk_ov004_0224882c19func_ov004_02206f8cEv(void *self);
BOOL _ZN18Unk_ov004_0224882c19func_ov004_0220711cEPiS0_ii(void *self, s32 *a, s32 *b, s32 c, s32 d);
BOOL _ZN18Unk_ov004_0224882c19func_ov004_022075a4Ei(void *self);
void _ZN18Unk_ov004_022077a419func_ov004_02207c40EP23Unk_ov004_02207854_ListPvi(void *self, Unk_ov004_02207854_List *l, void *x, s32 y);
void _ZN18Unk_ov004_02206520C1Ev(void *self);
u32 _ZN18Unk_ov004_0220652019func_ov004_0220652cEv(void *self);
Unk_ov004_02206520_Ent *_ZN18Unk_ov004_0220652019func_ov004_02206520Ei(void *self, s32 i);
void _ZN18Unk_ov004_0220652019func_ov004_02206554Ev(void *self);
BOOL _ZN18Unk_ov004_0220652019func_ov004_02206530Ejj(void *self, u32 a, u32 b);
Unk_ov004_02207854_Set *_ZN18Unk_ov004_02206434C1EP18Unk_ov004_02206520i(Unk_ov004_02207854_Set *self, void *l, s32 flag);
Unk_ov004_022077a4 *_ZN18Unk_ov004_0220643419func_ov004_02206474Ej(Unk_ov004_02207854_Set *self, u32 i);
u32 _ZN18Unk_ov004_0220643419func_ov004_02206480Ev(Unk_ov004_02207854_Set *self);
void _ZN18Unk_ov004_02206434C1Ev(Unk_ov004_02207854_Set *self);
BOOL _ZN18Unk_ov004_0224882c19func_ov004_02209c44Ev(void);
BOOL _ZN18Unk_ov004_0224882c19func_ov004_02209c58Ev(void);
s32 func_ov004_02235d10();
Unk_ov004_0224882c *func_ov004_02235720(void *a, u32 b);
void _ZN18Unk_ov004_02205bccD1Ev(void *);
void _ZN18Unk_ov004_02205d5cD1Ev(void *);
void _ZN18Unk_ov004_02205c44D1Ev(void *);
void _ZN18Unk_ov004_02206e38D1Ev(void *);
void *_ZN18Unk_ov004_022487ccD1Ev(void *);
void _ZN18Unk_ov004_022061b4D1Ev(void *);
void _ZN18Unk_ov004_02205e58D1Ev(void *);
void _ZN18Unk_ov004_02248804D1Ev(void *);
void _ZN18Unk_ov004_02248804C1Ev(void *);
void _ZN18Unk_ov004_02205e5819func_ov004_02205ea0Ev(void *);
void _ZN18Unk_ov004_022061b4C1Ev(void *);
void _ZN18Unk_ov004_022487ccC1Ev(void *);
void _ZN18Unk_ov004_02206e38C1Ev(void *);
void _ZN18Unk_ov004_02205c4419func_ov004_02205d50Ev(void *);
void _ZN18Unk_ov004_02205d5c19func_ov004_02205d7cEv(void *);
void _ZN18Unk_ov004_02205bccC1Ev(void *);
typedef void (*Unk_ov004_02209578_Fn)(void *);
void *__cxa_vec_ctor(void *, s32, s32, Unk_ov004_02209578_Fn, Unk_ov004_02209578_Fn);
void __cxa_vec_cleanup(void *, s32, s32, Unk_ov004_02209578_Fn);
BOOL _ZN18Unk_ov004_0224882c19func_ov004_022057f0Ev(void *self);
void _ZN18Unk_ov004_0220650c19func_ov004_0220650cEv(void *self);
void _ZN12Unk_020d8cf4D1Ev(void *self);
extern u32 _ZTV18Unk_ov004_022487cc[];
}

// plain functions defined in this unit
extern "C" {
void func_ov004_022059ec(void *);
void func_ov004_022059f0(void *);
u16 func_ov004_02205b04();
BOOL func_ov004_02205d8c(s32 *idx, Unk_ov004_02205d8c_Vec *pos, s16 *ang, s32 x, s32 a, s16 b);
void func_ov004_02206f3c(u16 *out, Unk_ov004_0224882c *o);
s32 func_ov004_02206f6c(void);
s32 func_ov004_02206f74(void);
s32 func_ov004_02206f7c(void);
s32 func_ov004_02206f84(void);
void func_ov004_02207100(void *a, u32 x);
s32 func_ov004_02207650(void);
s32 func_ov004_02207838();
s32 func_ov004_0220784c(s32 a);
void func_ov004_02207bdc(u16 *out, Unk_ov004_022077a4 *obj, s32 ang);
u32 func_ov004_02207c04(s32 v);
void func_ov004_02208198(Self *self);
void func_ov004_022081b4(Self *self);
void func_ov004_02208284(Self *self);
void func_ov004_02208358(Self *self);
void func_ov004_0220838c(Self *self);
void func_ov004_02208470(Self *self, Unk_ov004_02208284_V3 *out);
void func_ov004_02208554(Self *self);
s32 func_ov004_0220865c(Self *self, s32 a, s32 b);
u8 func_ov004_02208750(Self *self);
BOOL func_ov004_0220875c(Self *self);
s32 func_ov004_022087a4(Self *self);
Self *func_ov004_022087b0(Self *self);
BOOL func_ov004_022087e8(Self *self, s32 a, s32 b, s32 c, s32 d);
BOOL func_ov004_02208870(Self *self, s32 a, void *p, s32 b);
BOOL func_ov004_02208894();
void func_ov004_022088c0(Self *self, Unk_ov004_02208284_V3 *out);
void func_ov004_02208910(Self *self, void *out, s32 i);
void func_ov004_02208938(Self *self, void *out, void *src);
u32 func_ov004_02208968(Self *self);
BOOL func_ov004_02208980(Self *self);
void func_ov004_02208a18(Self *self, u32 a, s32 b, s32 c);
BOOL func_ov004_02209cf0(Unk_ov004_0224882c *p);
BOOL func_ov004_02209d10(Unk_ov004_0224882c *p);
u32 func_ov004_02209d40(u32 v);
u32 func_ov004_02209d4c(u32 v);
u32 func_ov004_02209d58(u32 a, u32 b, u32 c, u32 d, u8 f, u32 e);
void func_ov004_02209dd8(u32 a);
u32 func_ov004_02209e08(u32 a);
void func_ov004_02209e14(Unk_ov004_02209e64 *o);
void func_ov004_02209e44(Unk_ov004_02209e64 *o);
void func_ov004_02209e64(Unk_ov004_02209e64 *self);
void func_ov004_02209e90(Unk_ov004_02209e64 *self);
void func_ov004_02209ebc(Unk_ov004_02209e64 *self);
void func_ov004_02209f1c();
}

// ================================================================ static inline helpers
static inline BOOL Unk_ov004_0220607c_IsEmpty(u16 *p) {
    BOOL r;
    if (func_0204b2d4(p)) {
        u16 t = 0xfff1;
        r = (func_0204b25c(p) == func_0204b25c(&t)) ? TRUE : FALSE;
    } else {
        r = (*p == 0xfff1) ? TRUE : FALSE;
    }
    return r;
}

static inline BOOL Unk_ov004_02206a44_IsInvalid(u16 *a) {
    if (func_0204b2d4(a)) {
        u16 t = 0xfff1;
        if (func_0204b25c(a) == func_0204b25c(&t)) {
            return TRUE;
        }
        return FALSE;
    }
    if (*a == 0xfff1) {
        return TRUE;
    }
    return FALSE;
}

static inline BOOL Unk_ov004_02206a44_Same(u16 *a, u16 *b) {
    if (func_0204b2d4(a)) {
        if (func_0204b25c(a) == func_0204b25c(b)) {
            return TRUE;
        }
        return FALSE;
    }
    if (*a == *b) {
        return TRUE;
    }
    return FALSE;
}

static inline BOOL Unk_ov004_02207650_IsOne(u8 v) {
    return v == 1 ? TRUE : FALSE;
}

static inline BOOL Unk_ov004_02207650_InRange(u16 *p) {
    BOOL r = FALSE;
    u32 v = *p;
    if (v >= 0x1144 && v <= 0x1187) {
        r = TRUE;
    }
    return r;
}

#define UNK_OV004_022072B4_FAIL()                              \
    {                                                          \
        ((Unk_ov004_022077a4 *)this)->func_ov004_022078d8(0, 0, 0, 0); \
        _ZN18Unk_ov004_0220652019func_ov004_02206554Ev(&c2);   \
        _ZN18Unk_ov004_0220652019func_ov004_02206554Ev(&c1);   \
        return FALSE;                                          \
    }

#define B8(o) (*(u8 *)((u8 *)self + (o)))
#define S32(o) (*(s32 *)((u8 *)self + (o)))
#define S16(o) (*(s16 *)((u8 *)self + (o)))
#define PT(o) ((void *)((u8 *)self + (o)))
typedef Unk_ov004_0224882c Self;

// virtual call with one argument through the vtable slot (the real slots take no parameter in symbols.txt)
// view of the 0x0224882c vtable used for the three slots that take a parameter although symbols.txt names them without one
struct Unk_ov004_0224882c_VT {
    virtual void vslot_00();
    virtual void vslot_04();
    virtual void vslot_08();
    virtual void vslot_0c();
    virtual void vslot_10();
    virtual void vslot_14();
    virtual void vslot_18();
    virtual void vslot_1c();
    virtual void vslot_20();
    virtual void vslot_24();
    virtual void vslot_28();
    virtual void vslot_2c();
    virtual void vslot_30();
    virtual void vslot_34();
    virtual void vslot_38();
    virtual void vslot_3c();
    virtual void vslot_40();
    virtual void vslot_44();
    virtual void vslot_48();
    virtual void vslot_4c();
    virtual void vslot_50();
    virtual void vslot_54();
    virtual void vslot_58();
    virtual void vslot_5c();
    virtual void vslot_60();
    virtual void vslot_64();
    virtual void vslot_68();
    virtual void vslot_6c();
    virtual void vslot_70();
    virtual void vslot_74();
    virtual void vslot_78();
    virtual void vslot_7c();
    virtual void vslot_80();
    virtual void vslot_84();
    virtual void vslot_88();
    virtual void vslot_8c();
    virtual void vslot_90();
    virtual void vfunc_94(s32 a);
    virtual void vfunc_98(s32 a);
    virtual void vfunc_9c(s32 a);
};
#define VCALL94(self, arg) ((Unk_ov004_0224882c_VT *)(self))->vfunc_94(arg)
#define VCALL98(self, arg) ((Unk_ov004_0224882c_VT *)(self))->vfunc_98(arg)
#define VCALL9C(self, arg) ((Unk_ov004_0224882c_VT *)(self))->vfunc_9c(arg)

struct Unk_ov004_Scene_Entry {
    void *(*unk_00)();
    u16 unk_04;
    u16 unk_06;
    s32 unk_08[4];
};
struct Unk_ov004_Rgba {
    u8 a, b, c, d;
    Unk_ov004_Rgba(u8 a_, u8 b_, u8 c_, u8 d_) {
        a = a_;
        b = b_;
        c = c_;
        d = d_;
    }
};

// ---- declarations of the data defined below
extern "C" {
extern const u32 data_ov004_0223fffc[3];
extern const u8 data_ov004_02240008[0x1c];
extern u16 data_ov004_022486f8;
extern char data_ov004_022486fc[2];
extern char data_ov004_02248700[3];
extern char data_ov004_02248704[3];
extern char data_ov004_02248708[3];
extern char data_ov004_022487dc[15];
extern char *data_ov004_0224870c;
extern char data_ov004_02248710[5];
extern char data_ov004_02248718[6];
extern char data_ov004_02248720[6];
extern char *data_ov004_022487b8[3];
extern char *data_ov004_022487ec[4];
extern Unk_ov004_Scene_Entry data_ov004_0224880c;
extern s16 data_ov004_0224f5fc;
extern s16 data_ov004_0224f600;
extern char data_ov004_0224f83c[0x28];
extern char data_ov004_0224f864[0x28];
extern Unk_ov004_Rgba data_ov004_0224f60c;
extern Unk_ov004_Rgba data_ov004_0224f62c;
extern Unk_ov004_Rgba data_ov004_0224f63c;
extern Unk_ov004_Rgba data_ov004_0224f608;
extern Unk_ov004_Rgba data_ov004_0224f61c;
extern Unk_ov004_Rgba data_ov004_0224f618;
extern Unk_02000c8c data_ov004_0224f88c[4];
extern Unk_02000c8c data_ov004_0224f8bc[4];
extern Unk_02000c8c data_ov004_0224f8ec[4];
extern Unk_02000c8c *data_ov004_022487d0[3];
}

// ================================================================ functions and data

// @02209f1c
extern "C" void func_ov004_02209f1c() {
    new Unk_ov004_0224882c;
}

// @02209ef0
void *Unk_ov004_0224882c::operator new(unsigned long size) {
    void *p = func_ov004_02235860(func_ov004_022358d8(), size);
    if (p == 0) {
        return 0;
    }
    func_0212899c(p, 0, size);
    return p;
}

// @02209edc
void Unk_ov004_0224882c::operator delete(void *p) {
    func_ov004_02235854(func_ov004_022358d8(), p);
}

// @02209ebc
extern "C" void func_ov004_02209ebc(Unk_ov004_02209e64 *self) {
    Unk_ov004_02209e44_Target *t = self->unk_04->unk_2c;
    if (t != 0) {
        t->vfunc_60(self->unk_00->unk_01, self);
    }
}

// @02209e90
extern "C" void func_ov004_02209e90(Unk_ov004_02209e64 *self) {
    Unk_ov004_02209e44_Target *t = self->unk_04->unk_2c;
    if (t != 0) {
        t->vfunc_68(self->unk_00->unk_01, self);
    }
    self->unk_24 = func_ov004_02209e64;
    self->unk_92 = 2;
}

// @02209e64
extern "C" void func_ov004_02209e64(Unk_ov004_02209e64 *self) {
    Unk_ov004_02209e44_Target *t = self->unk_04->unk_2c;
    if (t != 0) {
        t->vfunc_6c(self->unk_00->unk_01, self);
    }
    self->unk_24 = func_ov004_02209e90;
    self->unk_92 = 1;
}

// @02209e44
extern "C" void func_ov004_02209e44(Unk_ov004_02209e64 *o) {
    Unk_ov004_02209e44_Target *t = o->unk_04->unk_2c;
    if (t != NULL) {
        t->vfunc_64(o->unk_00->unk_01, o);
    }
}

// @02209e14
extern "C" void func_ov004_02209e14(Unk_ov004_02209e64 *o) {
    o->unk_1c = func_ov004_02209ebc;
    o->unk_90 = 2;
    o->unk_14 = func_ov004_02209e44;
    o->unk_8e = 2;
    o->unk_24 = func_ov004_02209e90;
    o->unk_92 = 1;
}

// @02209e08
extern "C" u32 func_ov004_02209e08(u32 a) {
    if (a == 1) {
        return 1;
    }
    return 0;
}

// @02209dd8
extern "C" void func_ov004_02209dd8(u32 a) {
    u32 t = func_ov004_02209e08(a);
    if (a == 2) {
        func_02064478(0, 8, t);
    } else {
        func_02064478(0, 0xc, t);
    }
    func_020516a4(func_020b50e8(), 1);
}

// @02209d58
extern "C" u32 func_ov004_02209d58(u32 a, u32 b, u32 c, u32 d, u8 f, u32 e) {
    Unk_ov004_02209d40_Bits l;
    l.a = a;
    l.b = b;
    l.c = c;
    l.d = d;
    l.e = e;
    l.f = f;
    l.w1 = (l.w1 & ~0x1f) | 1;
    return *(u32 *)&l;
}

// @02209d4c
extern "C" u32 func_ov004_02209d4c(u32 v) {
    Unk_ov004_02209d40_Bits l;
    *(u32 *)&l = v;
    return l.c;
}

// @02209d40
extern "C" u32 func_ov004_02209d40(u32 v) {
    Unk_ov004_02209d40_Bits l;
    *(u32 *)&l = v;
    return l.e;
}

// @02209d10
extern "C" BOOL func_ov004_02209d10(Unk_ov004_0224882c *p) {
    if (p != NULL) {
        if (func_02052e80(func_ov004_022087a4(p)) != 0) {
            if (p->func_ov004_02206f8c() == 0) {
                return TRUE;
            }
        }
        return FALSE;
    }
    return FALSE;
}

// @02209cf0
extern "C" BOOL func_ov004_02209cf0(Unk_ov004_0224882c *p) {
    if (p != NULL) {
        u32 v = *(u16 *)((u8 *)p + 0xc);
        BOOL r;
        if (v == 0x3a) r = TRUE; else r = FALSE;
        if (r != 0) return TRUE;
        return FALSE;
    }
    return FALSE;
}

// @02209ccc
BOOL Unk_ov004_0224882c::func_ov004_02209ccc() {
    if (func_ov004_02209cf0(this)) {
        return ((Unk_ov004_02205c44 *)(unk_73c))->func_ov004_02205c7c();
    }
    return FALSE;
}

// @02209c88
BOOL Unk_ov004_0224882c::func_ov004_02209c88() {
    u32 v = *(u16 *)((u8 *)this + 0xc);
    BOOL a;
    BOOL b;
    BOOL r;
    if (v == 0x3b) a = TRUE; else a = FALSE;
    if (a != 0 || ((v == 0x3c ? (b = TRUE) : (b = FALSE)), b != 0)) {
        if (((Unk_ov004_02205c44 *)(unk_73c))->func_ov004_02205c7c()) r = TRUE; else r = FALSE;
    } else {
        r = FALSE;
    }
    return r;
}

// @02209c58
BOOL Unk_ov004_0224882c::func_ov004_02209c58() {
    BOOL r = TRUE;
    u32 v = *(u16 *)((u8 *)this + 0xc);
    BOOL a;
    if (v == 0x36) a = TRUE; else a = FALSE;
    if (a == 0) {
        BOOL b;
        if (v == 0x37) b = TRUE; else b = FALSE;
        if (b == 0) r = FALSE;
    }
    if (r != 0) return TRUE;
    return FALSE;
}

// @02209c44
BOOL Unk_ov004_0224882c::func_ov004_02209c44() {
    if (unk_77c == 0x18) {
        return TRUE;
    }
    return FALSE;
}

// @02209c10
BOOL Unk_ov004_0224882c::func_ov004_02209c10() {
    if (func_ov004_0220579c(0) == 0) {
        if (func_ov004_0220579c(5) == 0) {
            if (unk_77c == 0x10) {
                return TRUE;
            }
        }
    }
    return FALSE;
}

// @02209bb4
BOOL Unk_ov004_0224882c::func_ov004_02209bb4() {
    if (func_ov004_0220579c(0) == 0) {
        if (func_ov004_0220579c(5) == 0) {
            switch (unk_77c) {
            case 0x10:
                return TRUE;
            case 0x11:
            case 0x2b:
                u32 c = func_ov004_022330f8(func_ov004_022087a4(this));
                if (c != data_ov004_022486f8) {
                    return TRUE;
                }
                return FALSE;
            }
        }
    }
    return FALSE;
}

// @02209bb0
BOOL Unk_ov004_0224882c::vfunc_7c() {
    return TRUE;
}

// @022099a0
Unk_ov004_0224882c::Unk_ov004_0224882c() {
    func_0209c370(&unk_12e);
    _ZN18Unk_ov004_02205e5819func_ov004_02205ea0Ev(unk_178);
    _ZN18Unk_ov004_022061b4C1Ev(unk_188);
    __cxa_vec_ctor(unk_1cc, 4, 0x20, func_020b6a0c, func_020b69fc);
    func_ov004_02233c18(unk_24c);
    func_020b6e10(unk_288);
    func_02054514(unk_534);
    _ZN18Unk_ov004_022487ccC1Ev(unk_628);
    _ZN18Unk_ov004_02206e38C1Ev(unk_6c8);
    _ZN18Unk_ov004_02205c4419func_ov004_02205d50Ev(unk_73c);
    _ZN18Unk_ov004_02205d5c19func_ov004_02205d7cEv(&unk_73e);
    _ZN18Unk_ov004_02205bccC1Ev(unk_744);
    func_ov004_022059f0(unk_760);
    func_ov004_02235984(unk_794);
    __cxa_vec_ctor(unk_7c0, 4, 0x20, _ZN18Unk_ov004_02248804C1Ev, _ZN18Unk_ov004_02248804D1Ev);
}

// @022096b4
Unk_ov004_0224882c::~Unk_ov004_0224882c() {
    __cxa_vec_cleanup(unk_7c0, 4, 0x20, _ZN18Unk_ov004_02248804D1Ev);
    func_ov004_02235980(unk_794);
    func_ov004_022059ec(unk_760);
    _ZN18Unk_ov004_02205bccD1Ev(unk_744);
    _ZN18Unk_ov004_02205d5cD1Ev(&unk_73e);
    _ZN18Unk_ov004_02205c44D1Ev(unk_73c);
    _ZN18Unk_ov004_02206e38D1Ev(unk_6c8);
    _ZN18Unk_ov004_022487ccD1Ev(unk_628);
    func_020544d8(unk_534);
    func_020b6df4(unk_288);
    func_ov004_02233c10(unk_24c);
    __cxa_vec_cleanup(unk_1cc, 4, 0x20, func_020b69fc);
    _ZN18Unk_ov004_022061b4D1Ev(unk_188);
    _ZN18Unk_ov004_02205e58D1Ev(unk_178);
    func_0209c364(&unk_12e);
}

// @02209578
BOOL Unk_ov004_0224882c::vfunc_00() {
    Unk_ov004_02209d40_Bits l;
    *(u32 *)&l = *(u32 *)((u8 *)this + 8);
    u32 t = l.e;
    unk_768 = t;
    func_ov004_022357e0(func_ov004_0223584c(), this);
    void *r = func_0209c25c(data_ov004_02252058, &unk_12e);
    ((Unk_ov004_022077a4 *)this)->func_ov004_02207ef0();
    if (func_0203e630(this) == 0) {
        func_0203e624(this, func_ov004_022071cc(0, 0));
    }
    if (unk_768 == 0) {
        ((Unk_ov004_022069ec *)(unk_6c8))->func_ov004_02206b64(r, unk_280, vfunc_8c());
        void *p = ((Unk_ov004_022069ec *)(unk_6c8))->func_ov004_02206a2c();
        func_020555ec(unk_534, p, ((Unk_ov004_022069ec *)(unk_6c8))->func_ov004_02206a14());
        unk_77a = 1;
        ((Unk_ov004_022077a4 *)this)->func_ov004_02207e48();
        if (vfunc_7c()) {
            unk_77a = 0;
            return 1;
        }
        return 0;
    } else {
        if (((Unk_ov004_022069ec *)(unk_6c8))->func_ov004_02206a44(r, unk_280, vfunc_8c()) != 0) {
            void *p = ((Unk_ov004_022069ec *)(unk_6c8))->func_ov004_02206a2c();
            func_020555ec(unk_534, p, ((Unk_ov004_022069ec *)(unk_6c8))->func_ov004_02206a14());
            unk_77a = 1;
            ((Unk_ov004_022077a4 *)this)->func_ov004_02207e48();
            if (vfunc_7c()) {
                unk_77a = 0;
                return 1;
            }
            return 0;
        }
        return -1;
    }
}

// @02209558
void Unk_ov004_0224882c::vfunc_08(s32 a) {
    if (a == 2) {
        ((Unk_ov004_022077a4 *)this)->func_ov004_022077a4();
    }
    func_0203e678(this, a);
}

// @02209480
BOOL Unk_ov004_0224882c::vfunc_18() {
    s32 v[4];
    if (func_ov004_02206f8c() == 0) {
        func_ov004_02235948(unk_794);
        func_ov004_022088c0(this, (Vec3 *)v);
        unk_7b4[0] = v[0];
        unk_7b4[1] = v[1];
        unk_7b4[2] = v[2];
    }
    func_ov004_022055ec();
    func_ov004_02208284((Self *)this);
    func_ov004_02208554((Self *)this);
    if (func_ov004_0220579c(0) == 0 && func_ov004_0220579c(5) == 0) {
        if (unk_77c == 0) {
            func_ov004_022091e0();
        }
        vfunc_80();
    } else {
        vfunc_84();
        if (((Unk_ov004_02205c44 *)(unk_73c))->func_ov004_02205c6c()) {
            ((Unk_ov004_02205c44 *)(unk_73c))->func_ov004_02205c54(0);
        }
    }
    if (func_ov004_02206f8c() == 0) {
        func_ov004_02207704();
        ((Unk_ov004_02205c44 *)(unk_73c))->func_ov004_02205cc4((Unk_ov004_02205c80_Obj *)this);
        func_ov004_022081b4((Self *)this);
    }
    return TRUE;
}

// @0220947c
BOOL Unk_ov004_0224882c::vfunc_80() { return TRUE; }

// @02209478
BOOL Unk_ov004_0224882c::vfunc_84() { return TRUE; }

// @022093a8
BOOL Unk_ov004_0224882c::vfunc_28() {
    if (Unk_020d5d84::vfunc_28() == 0) {
        return FALSE;
    }
    if (vfunc_88() == 0) {
        return FALSE;
    }
    if (unk_14c != 0 || unk_150 != 0 || unk_154 != 0) {
        u32 saved[4];
        u32 i;
        if (func_ov004_02206f8c()) {
            for (i = 0; i < 4; i++) {
                u32 o = i << 2;
                u8 *q = data_027e00c8 + o;
                *(u32 *)((u8 *)saved + o) = *(u32 *)(q + 0xa8);
                *(u32 *)(q + 0xa8) = (i << 30) | 0x7fff;
            }
        }
        func_020547cc(unk_534, &unk_14c);
        if (func_ov004_02206f8c()) {
            for (i = 0; i < 4; i++) {
                u32 o = i << 2;
                u8 *q = data_027e00c8 + o;
                *(u32 *)(q + 0xa8) = *(u32 *)((u8 *)saved + o);
            }
        }
    }
    if (func_ov004_02206f8c() == 0) {
        ((Unk_ov004_022061b4 *)((u8 *)this + 0x188))->func_ov004_02206190((Unk_ov004_02205c80_Obj *)this);
    }
    return TRUE;
}

// @02209390
BOOL Unk_ov004_0224882c::vfunc_10() {
    if (Unk_020d9670::vfunc_10()) {
        return TRUE;
    }
    return FALSE;
}

// @02209294
BOOL Unk_ov004_0224882c::vfunc_14(s32 a) {
    if (a == 2) {
        func_ov004_02235930(unk_794);
        func_ov004_022076b0();
        func_ov004_02208358((Self *)this);
        if (func_ov004_022057bc() == 0) {
            if (func_ov004_022057b0() == 0) {
                ((Unk_ov004_02205c44 *)(unk_73c))->func_ov004_02205c80((Unk_ov004_02205c80_Obj *)this);
            }
        }
        ((Unk_ov004_022069ec *)(unk_6c8))->func_ov004_022069ec();
        func_0209c224(data_ov004_02252058, (u8 *)this + 0x12e);
        if (func_ov004_022057bc()) {
            s32 x, y;
            func_ov004_0220711c(&x, &y, 0, 0);
            u32 r = func_020b50e8();
            if (func_ov004_02235d10() && !func_020b51b8(r) && !func_020b530c(r)) {
                void *g = data_021c47c4;
                ((Unk_ov004_022077a4 *)this)->func_ov004_02207ac4(0, 0);
                if (g) {
                    u16 v = 0x1547;
                    func_0204eb30(g, &v, x, y, 0);
                }
            } else {
                ((Unk_ov004_022077a4 *)this)->func_ov004_02207ac4(1, 0);
            }
            func_ov004_02207004();
        }
        func_ov004_022357b0(func_ov004_0223584c(), this);
    }
    return func_02002ec0(this, a);
}

// @02209290
BOOL Unk_ov004_0224882c::vfunc_8c() { return FALSE; }

// @0220928c
BOOL Unk_ov004_0224882c::vfunc_88() { return TRUE; }

// @02209288
void Unk_ov004_0224882c::vfunc_90() {}

// @02209284
void Unk_ov004_0224882c::vfunc_94() {}

// @02209280
void Unk_ov004_0224882c::vfunc_98() {}

// @0220927c
void Unk_ov004_0224882c::vfunc_9c() {}

// data
Unk_ov004_Rgba data_ov004_0224f60c(31, 20, 20, 31);
// data
Unk_ov004_Rgba data_ov004_0224f62c(20, 20, 31, 31);
// data
Unk_ov004_Rgba data_ov004_0224f63c(31, 31, 20, 31);
// data
Unk_ov004_Rgba data_ov004_0224f608(20, 31, 20, 31);
// data
Unk_ov004_Rgba data_ov004_0224f61c(20, 31, 31, 31);
// data
Unk_ov004_Rgba data_ov004_0224f618(20, 24, 24, 31);
// data
Unk_ov004_Scene_Entry data_ov004_0224880c = {(void *(*)())func_ov004_02209f1c, 0x2e, 0x35, {0, 0xc8000, 0x12c000, 0x258000}};
// data
Unk_02000c8c data_ov004_0224f88c[4] = {Unk_02000c8c(-0x1000, 0, -0x1000), Unk_02000c8c(-0x1000, 0, 0x1000),
                                       Unk_02000c8c(0x1000, 0, 0x1000), Unk_02000c8c(0x1000, 0, -0x1000)};
// data
Unk_02000c8c data_ov004_0224f8bc[4] = {Unk_02000c8c(-0x1000, 0, -0x1000), Unk_02000c8c(-0x1000, 0, 0x1000),
                                       Unk_02000c8c(0x3000, 0, 0x1000), Unk_02000c8c(0x3000, 0, -0x1000)};
// data
Unk_02000c8c data_ov004_0224f8ec[4] = {Unk_02000c8c(-0x2000, 0, -0x2000), Unk_02000c8c(-0x2000, 0, 0x2000),
                                       Unk_02000c8c(0x2000, 0, 0x2000), Unk_02000c8c(0x2000, 0, -0x2000)};
// data
s16 data_ov004_0224f5fc;
// data
Unk_02000c8c *data_ov004_022487d0[3] = {data_ov004_0224f88c, data_ov004_0224f8bc, data_ov004_0224f8ec};
// data
u16 data_ov004_022486f8 = 0xffff;

// @022091fc
Unk_02000c8c *Unk_ov004_0224882c::vfunc_50() {
    static Unk_02000c8c v;
    v.x = unk_5c[0];
    v.y = unk_5c[1];
    v.z = unk_5c[2];
    u8 *o = (u8 *)func_02095204(4);
    if (o) {
        s32 i = *(u16 *)(o + 0x8e) >> 4;
        s32 k = i * 2;
        v.x = *(s32 *)(o + 0x5c) + data_02135f44[k];
        v.y = *(s32 *)(o + 0x60);
        v.z = *(s32 *)(o + 0x64) + data_02135f44[k + 1];
    }
    return &v;
}

// @022091f0
u8 Unk_ov004_0224882c::vfunc_78() {
    return unk_778;
}

// @022091e0
u32 Unk_ov004_0224882c::func_ov004_022091e0() {
    return func_02052e0c(unk_280);
}

// @02209198
BOOL Unk_ov004_0224882c::func_ov004_02209198() {
    if (func_ov004_02206f8c() == 0) {
        u32 t = func_ov004_02233128(unk_280);
        if (t != data_ov004_022486f8) {
            func_ov004_02235908(unk_794, t, unk_7b4);
            return TRUE;
        }
    }
    return FALSE;
}

// @02209150
BOOL Unk_ov004_0224882c::func_ov004_02209150() {
    if (func_ov004_02206f8c() == 0) {
        u32 t = func_ov004_02233118(unk_280);
        if (t != data_ov004_022486f8) {
            func_ov004_0223591c(unk_794, t, unk_7b4);
            return TRUE;
        }
    }
    return FALSE;
}

// @02209108
BOOL Unk_ov004_0224882c::func_ov004_02209108() {
    if (func_ov004_02206f8c() == 0) {
        u32 t = func_ov004_02233108(unk_280);
        if (t != data_ov004_022486f8) {
            func_ov004_0223591c(unk_794, t, unk_7b4);
            return TRUE;
        }
    }
    return FALSE;
}

// @022090c0
BOOL Unk_ov004_0224882c::func_ov004_022090c0() {
    if (func_ov004_02206f8c() == 0) {
        u32 t = func_ov004_022330f8(unk_280);
        if (t != data_ov004_022486f8) {
            func_ov004_0223591c(unk_794, t, unk_7b4);
            return TRUE;
        }
    }
    return FALSE;
}

// @02208ff0
u16 Unk_ov004_0224882c::func_ov004_02208ff0(s32 a) {
    u32 i = a & 1;
    if (((Unk_ov004_02206398 *)(((Unk_ov004_022069ec *)(unk_6c8))->func_ov004_02206be4()))->func_ov004_022063c8(i)) {
        return ((Unk_ov004_02206398 *)(((Unk_ov004_022069ec *)(unk_6c8))->func_ov004_02206be4()))->func_ov004_022063c8(i)->unk_04;
    }
    if (((Unk_ov004_02206398 *)(((Unk_ov004_022069ec *)(unk_6c8))->func_ov004_02206be4()))->func_ov004_022063bc(i)) {
        return ((Unk_ov004_02206398 *)(((Unk_ov004_022069ec *)(unk_6c8))->func_ov004_02206be4()))->func_ov004_022063bc(i)->unk_04;
    }
    if (((Unk_ov004_02206398 *)(((Unk_ov004_022069ec *)(unk_6c8))->func_ov004_02206be4()))->func_ov004_022063a4(i)) {
        return ((Unk_ov004_02206398 *)(((Unk_ov004_022069ec *)(unk_6c8))->func_ov004_02206be4()))->func_ov004_022063a4(i)->unk_04;
    }
    if (((Unk_ov004_02206398 *)(((Unk_ov004_022069ec *)(unk_6c8))->func_ov004_02206be4()))->func_ov004_02206398(i)) {
        return ((Unk_ov004_02206398 *)(((Unk_ov004_022069ec *)(unk_6c8))->func_ov004_02206be4()))->func_ov004_02206398(i)->unk_04;
    }
    if (((Unk_ov004_02206398 *)(((Unk_ov004_022069ec *)(unk_6c8))->func_ov004_02206be4()))->func_ov004_022063b0(i)) {
        return ((Unk_ov004_02206398 *)(((Unk_ov004_022069ec *)(unk_6c8))->func_ov004_02206be4()))->func_ov004_022063b0(i)->unk_04;
    }
    return 0;
}

// @02208de0
void Unk_ov004_0224882c::func_ov004_02208de0(s32 a, s32 b, s32 c, s32 d) {
    u32 m = func_ov004_02208968((Self *)this);
    u32 i = a & 1;
    if (((Unk_ov004_02206398 *)(((Unk_ov004_022069ec *)(unk_6c8))->func_ov004_02206be4()))->func_ov004_022063b0(i)) {
        u32 t = unk_590;
        if (func_02055b90(&unk_7c0[3], t, func_0209c348((void *)m))) {
            func_02055b38(&unk_7c0[3], ((Unk_ov004_02206398 *)(((Unk_ov004_022069ec *)(unk_6c8))->func_ov004_02206be4()))->func_ov004_022063b0(i), b, c, d);
            func_02055a9c(&unk_7c0[3], func_020554c0(unk_534));
        }
    }
    if (((Unk_ov004_02206398 *)(((Unk_ov004_022069ec *)(unk_6c8))->func_ov004_02206be4()))->func_ov004_022063bc(i)) {
        u32 t = unk_590;
        if (func_02055bcc(unk_7c0, t, func_0209c348((void *)m))) {
            func_02055b38(unk_7c0, ((Unk_ov004_02206398 *)(((Unk_ov004_022069ec *)(unk_6c8))->func_ov004_02206be4()))->func_ov004_022063bc(i), b, c, d);
            func_02055a9c(unk_7c0, func_020554c0(unk_534));
        }
    }
    if (((Unk_ov004_02206398 *)(((Unk_ov004_022069ec *)(unk_6c8))->func_ov004_02206be4()))->func_ov004_022063a4(i)) {
        u32 t = unk_590;
        if (func_02055bcc(&unk_7c0[1], t, func_0209c348((void *)m))) {
            func_02055b38(&unk_7c0[1], ((Unk_ov004_02206398 *)(((Unk_ov004_022069ec *)(unk_6c8))->func_ov004_02206be4()))->func_ov004_022063a4(i), b, c, d);
            func_02055a9c(&unk_7c0[1], func_020554c0(unk_534));
        }
    }
    if (((Unk_ov004_02206398 *)(((Unk_ov004_022069ec *)(unk_6c8))->func_ov004_02206be4()))->func_ov004_02206398(i)) {
        u32 t = unk_590;
        if (func_02055bcc(&unk_7c0[2], t, func_0209c348((void *)m))) {
            Unk_ov004_02208a18_Rec *rec = ((Unk_ov004_02206398 *)(((Unk_ov004_022069ec *)(unk_6c8))->func_ov004_02206be4()))->func_ov004_02206398(i);
            func_02055ae4(&unk_7c0[2], rec, ((Unk_ov004_022069ec *)(unk_6c8))->func_ov004_02206a14(), b, c, d);
            func_02055a9c(&unk_7c0[2], func_020554c0(unk_534));
        }
    }
    if (((Unk_ov004_02206398 *)(((Unk_ov004_022069ec *)(unk_6c8))->func_ov004_02206be4()))->func_ov004_022063c8(i)) {
        if (func_02054800(unk_534, func_0209c348((void *)m))) {
            func_02054720(unk_534, ((Unk_ov004_02206398 *)(((Unk_ov004_022069ec *)(unk_6c8))->func_ov004_02206be4()))->func_ov004_022063c8(i), b, c, d, 0);
            func_02054710(unk_534);
        }
    }
}

// @02208ba8
void Unk_ov004_0224882c::func_ov004_02208ba8(s32 a, s32 b, s32 c, u32 d) {
    u32 i = a & 1;
    if (((Unk_ov004_02206398 *)(((Unk_ov004_022069ec *)(unk_6c8))->func_ov004_02206be4()))->func_ov004_022063b0(i)) {
        Unk_ov004_02208a18_Rec *rec = ((Unk_ov004_02206398 *)(((Unk_ov004_022069ec *)(unk_6c8))->func_ov004_02206be4()))->func_ov004_022063b0(i);
        u32 v;
        if (d == 0xffff) {
            v = ((u32)unk_7c0[3].unk_08 << 4) >> 16;
        } else {
            u32 n = rec->unk_04;
            v = (u16)(d >= n ? n - 1 : d);
        }
        func_02055b00(&unk_7c0[3], func_020554c0(unk_534), rec, b, c, v);
    }
    if (((Unk_ov004_02206398 *)(((Unk_ov004_022069ec *)(unk_6c8))->func_ov004_02206be4()))->func_ov004_022063bc(i)) {
        Unk_ov004_02208a18_Rec *rec = ((Unk_ov004_02206398 *)(((Unk_ov004_022069ec *)(unk_6c8))->func_ov004_02206be4()))->func_ov004_022063bc(i);
        u32 v;
        if (d == 0xffff) {
            v = ((u32)unk_7c0[0].unk_08 << 4) >> 16;
        } else {
            u32 n = rec->unk_04;
            v = (u16)(d >= n ? n - 1 : d);
        }
        func_02055b00(unk_7c0, func_020554c0(unk_534), rec, b, c, v);
    }
    if (((Unk_ov004_02206398 *)(((Unk_ov004_022069ec *)(unk_6c8))->func_ov004_02206be4()))->func_ov004_022063a4(i)) {
        Unk_ov004_02208a18_Rec *rec = ((Unk_ov004_02206398 *)(((Unk_ov004_022069ec *)(unk_6c8))->func_ov004_02206be4()))->func_ov004_022063a4(i);
        u32 v;
        if (d == 0xffff) {
            v = ((u32)unk_7c0[1].unk_08 << 4) >> 16;
        } else {
            u32 n = rec->unk_04;
            v = (u16)(d >= n ? n - 1 : d);
        }
        func_02055b00(&unk_7c0[1], func_020554c0(unk_534), rec, b, c, v);
    }
    if (((Unk_ov004_02206398 *)(((Unk_ov004_022069ec *)(unk_6c8))->func_ov004_02206be4()))->func_ov004_02206398(i)) {
        Unk_ov004_02208a18_Rec *rec = ((Unk_ov004_02206398 *)(((Unk_ov004_022069ec *)(unk_6c8))->func_ov004_02206be4()))->func_ov004_02206398(i);
        u32 v;
        if (d == 0xffff) {
            v = ((u32)unk_7c0[2].unk_08 << 4) >> 16;
        } else {
            u32 n = rec->unk_04;
            v = (u16)(d >= n ? n - 1 : d);
        }
        u32 p = func_020554c0(unk_534);
        func_02055aac(&unk_7c0[2], p, rec, ((Unk_ov004_022069ec *)(unk_6c8))->func_ov004_02206a14(), b, c, v);
    }
    if (((Unk_ov004_02206398 *)(((Unk_ov004_022069ec *)(unk_6c8))->func_ov004_02206be4()))->func_ov004_022063c8(i)) {
        Unk_ov004_02208a18_Rec *rec = ((Unk_ov004_02206398 *)(((Unk_ov004_022069ec *)(unk_6c8))->func_ov004_02206be4()))->func_ov004_022063c8(i);
        u32 v;
        if (d == 0xffff) {
            v = (unk_5d8 << 4) >> 16;
        } else {
            u32 n = rec->unk_04;
            if (d >= n) {
                d = n - 1;
            }
            v = (u16)d;
        }
        func_02054720(unk_534, rec, b, c, v, 0);
    }
}

// @02208a18
extern "C" void func_ov004_02208a18(Self *self, u32 a, s32 b, s32 c) {
    s32 k = a & 1;
    Unk_ov004_02208a18_Rec *q;
    if (((Unk_ov004_02206398 *)(((Unk_ov004_022069ec *)(PT(0x6c8)))->func_ov004_02206be4()))->func_ov004_022063b0(k)) {
        q = ((Unk_ov004_02206398 *)(((Unk_ov004_022069ec *)(PT(0x6c8)))->func_ov004_02206be4()))->func_ov004_022063b0(k);
        func_02055b00(PT(0x820), func_020554c0(PT(0x534)), q, b, c, (u16)(q->unk_04 - 1));
    }
    if (((Unk_ov004_02206398 *)(((Unk_ov004_022069ec *)(PT(0x6c8)))->func_ov004_02206be4()))->func_ov004_022063bc(k)) {
        q = ((Unk_ov004_02206398 *)(((Unk_ov004_022069ec *)(PT(0x6c8)))->func_ov004_02206be4()))->func_ov004_022063bc(k);
        func_02055b00(PT(0x7c0), func_020554c0(PT(0x534)), q, b, c, (u16)(q->unk_04 - 1));
    }
    if (((Unk_ov004_02206398 *)(((Unk_ov004_022069ec *)(PT(0x6c8)))->func_ov004_02206be4()))->func_ov004_022063a4(k)) {
        q = ((Unk_ov004_02206398 *)(((Unk_ov004_022069ec *)(PT(0x6c8)))->func_ov004_02206be4()))->func_ov004_022063a4(k);
        func_02055b00(PT(0x7e0), func_020554c0(PT(0x534)), q, b, c, (u16)(q->unk_04 - 1));
    }
    if (((Unk_ov004_02206398 *)(((Unk_ov004_022069ec *)(PT(0x6c8)))->func_ov004_02206be4()))->func_ov004_02206398(k)) {
        u32 obj;
        q = ((Unk_ov004_02206398 *)(((Unk_ov004_022069ec *)(PT(0x6c8)))->func_ov004_02206be4()))->func_ov004_02206398(k);
        obj = func_020554c0(PT(0x534));
        func_02055aac(PT(0x800), obj, q, ((Unk_ov004_022069ec *)(PT(0x6c8)))->func_ov004_02206a14(), b, c, (u16)(q->unk_04 - 1));
    }
    if (((Unk_ov004_02206398 *)(((Unk_ov004_022069ec *)(PT(0x6c8)))->func_ov004_02206be4()))->func_ov004_022063c8(k)) {
        q = ((Unk_ov004_02206398 *)(((Unk_ov004_022069ec *)(PT(0x6c8)))->func_ov004_02206be4()))->func_ov004_022063c8(k);
        func_02054720(PT(0x534), q, b, c, (u16)(q->unk_04 - 1), 0);
    }
}

// @02208980
extern "C" BOOL func_ov004_02208980(Self *self) {
    BOOL k = TRUE;
    BOOL r4 = TRUE;
    BOOL z = FALSE;
    u32 i;
    void *p;
    if (func_02054584(PT(0x534))) {
        func_0205439c(PT(0x534));
        if (!func_02056654(PT(0x5d0))) {
            r4 = FALSE;
        }
    }
    for (i = z; i < 4; i++) {
        if (((Unk_ov004_02248804 *)(&self->unk_7c0[i]))->func_ov004_02206e74()) {
            p = (Unk_ov004_02208980_E *)PT(0x7c0) + i;
            func_020566bc(p);
            *self->unk_7c0[i].unk_18 = self->unk_7c0[i].unk_08;
            if (!func_02056654(p)) {
                k = z;
            }
        }
    }
    if (k && r4) {
        return TRUE;
    }
    return FALSE;
}

// @02208968
extern "C" u32 func_ov004_02208968(Self *self) {
    return (u32)func_0209c25c(data_ov004_02252058, (u8 *)self + 0x12e);
}

// @02208938
extern "C" void func_ov004_02208938(Self *self, void *out, void *src) {
    data_021f47e0 = *(Unk_ov004_02208284_M *)PT(0x250);
    MTX_MultVec43(src, &data_021f47e0, out);
}

// @02208910
extern "C" void func_ov004_02208910(Self *self, void *out, s32 i) {
    Unk_02000c8c *tbl = data_ov004_022487d0[S32(0x780)];
    func_ov004_02208938(self, out, (u8 *)tbl + (i & 3) * 12);
}

// @022088c0
extern "C" void func_ov004_022088c0(Self *self, Unk_ov004_02208284_V3 *out) {
    u32 i = 0;
    Unk_ov004_02208284_V3 v;
    Unk_ov004_02208284_V3 t;
    v.x = i;
    v.y = i;
    v.z = i;
    for (; i < 4; i++) {
        func_ov004_02208910(self, &t, i);
        VEC_Add(&v, &t, &v);
    }
    v.x = v.x >> 2;
    v.y = v.y >> 2;
    v.z = v.z >> 2;
    out->x = v.x;
    out->y = v.y;
    out->z = v.z;
}

// @02208894
extern "C" BOOL func_ov004_02208894() {
    if (func_0209750c() != 0) {
        if (func_0209888c() != 0) {
            if (func_02094058() == 0) {
                return TRUE;
            }
            return FALSE;
        }
    }
    return FALSE;
}

// @02208870
extern "C" BOOL func_ov004_02208870(Self *self, s32 a, void *p, s32 b) {
    if (func_020e9650(self, p) < a + b) {
        return TRUE;
    }
    return FALSE;
}

// @022087e8
extern "C" BOOL func_ov004_022087e8(Self *self, s32 a, s32 b, s32 c, s32 d) {
    void *p;
    u32 i;
    u32 j;
    u32 n;
    p = func_02095204(4);
    if (p) {
        for (i = 0; i < 4; i++) {
            void *q = func_02095204(i);
            if (q && p != q) {
                if (func_ov004_02208870(self, a, (u8 *)q + 0x5c, c)) {
                    return FALSE;
                }
            }
        }
        n = func_02081780();
        for (j = 0; j < n; j++) {
            void *q = func_02081718(j);
            if (q) {
                if (func_ov004_02208870(self, b, (u8 *)q + 0x5c, d)) {
                    return FALSE;
                }
            }
        }
        return TRUE;
    }
    return FALSE;
}

// @022087b0
extern "C" Self *func_ov004_022087b0(Self *self) {
    if (((Unk_ov004_02205e58 *)(PT(0x178)))->func_ov004_02205e8c()) {
        void *p = func_ov004_0223584c();
        return func_ov004_02235720(p, ((Unk_ov004_02205e58 *)(PT(0x178)))->func_ov004_02205e84());
    }
    return 0;
}

// @022087a4
extern "C" s32 func_ov004_022087a4(Self *self) {
    return S32(0x280);
}

// @0220878c
BOOL Unk_ov004_0224882c::vfunc_70(u32 a, u8 v) {
    unk_778 = v;
    unk_779 = 0;
    return 1;
}

// @02208788
u8 Unk_ov004_0224882c::vfunc_74(u32 a) {
    return 0;
}

// @0220875c
extern "C" BOOL func_ov004_0220875c(Self *self) {
    if (B8(0x779) == 0) {
        ((Unk_ov004_02205c44 *)(PT(0x73c)))->func_ov004_02205c54(1);
        return TRUE;
    }
    return FALSE;
}

// @02208750
extern "C" u8 func_ov004_02208750(Self *self) {
    return B8(0x284);
}

// @0220865c
extern "C" s32 func_ov004_0220865c(Self *self, s32 a, s32 b) {
    if (((Unk_ov004_02205e58 *)(PT(0x178)))->func_ov004_02205e8c()) {
        void *p = func_ov004_0223584c();
        Self *q = func_ov004_02235720(p, ((Unk_ov004_02205e58 *)(PT(0x178)))->func_ov004_02205e84());
        s32 r4, r6;
        if (a != 0 || b != 0) {
            func_ov004_0220865c(q, a, b);
        } else {
            data_021f47e0 = *(Unk_ov004_02208284_M *)((u8 *)q + 0x250);
        }
        r6 = ((Unk_ov004_02205e58 *)(PT(0x178)))->func_ov004_02205e80()->z;
        r4 = ((Unk_ov004_02205e58 *)(PT(0x178)))->func_ov004_02205e80()->y;
        s32 x = ((Unk_ov004_02205e58 *)(PT(0x178)))->func_ov004_02205e80()->x;
        func_020e8528(&data_021f47e0, x, r4, r6);
        func_020e8404(&data_021f47e0, ((Unk_ov004_02205e58 *)(PT(0x178)))->func_ov004_02205e78());
    } else {
        Unk_ov004_02208284_V3 v;
        s32 ang;
        v.x = S32(0x5c);
        v.y = S32(0x60);
        v.z = S32(0x64);
        if (a != 0) {
            VEC_Add(&v, (void *)a, &v);
        }
        ang = (s16)(S16(0x8e) + b);
        func_020e8388(&data_021f47e0, v.x, v.y, v.z);
        func_020e8404(&data_021f47e0, ang);
        func_020e8528(&data_021f47e0, S32(0x140), S32(0x144), S32(0x148));
    }
}

// @02208554
extern "C" void func_ov004_02208554(Self *self) {
    if (((Unk_ov004_0224882c *)(self))->func_ov004_02206f8c()) {
        func_020e8388(&data_021f47e0, S32(0x5c), S32(0x60), S32(0x64));
        func_020e8434(&data_021f47e0, data_ov004_0224f600);
        func_020e8404(&data_021f47e0, (s16)(S16(0x8e) + data_ov004_0224f5fc));
        if (S32(0x780) == 1) {
            func_020e8528(&data_021f47e0, func_01ffcb0c(S32(0x14c), -0x1000), 0, 0);
        }
        func_ov004_022087a4(self);
        s32 y = func_02052cbc() * 100 - 0x258;
        func_020e8528(&data_021f47e0, 0, y, 0);
        *(Unk_ov004_02208284_M *)PT(0x598) = data_021f47e0;
    } else {
        func_ov004_0220865c(self, 0, 0);
        *(Unk_ov004_02208284_M *)PT(0x250) = data_021f47e0;
        if (S32(0x780) == 1) {
            func_020e8528(&data_021f47e0, func_01ffcb0c(0x1000 - S32(0x14c), 0x1000), 0, 0);
        }
        *(Unk_ov004_02208284_M *)PT(0x598) = data_021f47e0;
    }
}

// data
s16 data_ov004_0224f600;

// @02208470
extern "C" void func_ov004_02208470(Self *self, Unk_ov004_02208284_V3 *out) {
    static Unk_02000c8c vs[3] = {Unk_02000c8c(0x2000, 0x2000, 0x2000),
                                         Unk_02000c8c(0x4000, 0x2000, 0x2000),
                                         Unk_02000c8c(0x4000, 0x2000, 0x4000)};
    volatile Unk_ov004_02208284_V3 r;
    func_020b50e8();
    {
        Unk_02000c8c *q = &vs[S32(0x780)];
        r.x = q->x;
        r.y = q->y;
        r.z = q->z;
    }
    if (S32(0x78c) == 0) {
        r.y = 0x200;
    } else if (func_ov004_02235d10() != 0) {
        r.y = S32(0x78c);
    } else {
        r.y = S32(0x78c) >> 1;
    }
    out->x = r.x;
    out->y = r.y;
    out->z = r.z;
}

// @0220838c
extern "C" void func_ov004_0220838c(Self *self) {
    Unk_ov004_02208284_V3 a;
    s32 b[3];
    Unk_ov004_02208284_V3 c;
    if (!((Unk_ov004_0224882c *)(self))->func_ov004_02206f8c()) {
        u32 r6;
        s32 k;
        func_ov004_02208470(self, &a);
        {
            s32 t = S32(0x158);
            b[0] = t;
            b[1] = t;
            b[2] = t;
        }
        func_ov004_022088c0(self, &c);
        if (B8(0x788) == 0) {
            void *r4;
            ((Unk_ov004_022487cc *)(PT(0x628)))->func_ov004_022069ac(self);
            r4 = func_ov004_0223584c();
            func_ov004_02235720(r4, ((Unk_ov004_02205e58 *)(PT(0x178)))->func_ov004_02205e84());
            func_02031908(PT(0x628), a.x, a.z, 0x4000, &c, S16(0x8e), b);
        }
        r6 = (u8)func_ov004_02235740(func_ov004_0223584c(), self);
        a.x = func_01ffcb0c(a.x, 0xc00);
        a.z = func_01ffcb0c(a.z, 0xc00);
        if (func_020b52d0() != 0) {
            k = 0xf;
        } else {
            k = 8;
        }
        func_020b68ec(func_020b50b4(), PT(0x288), &c, a.x, a.z, a.y, S16(0x8e), k, r6);
    }
}

// @02208358
extern "C" void func_ov004_02208358(Self *self) {
    if (!((Unk_ov004_0224882c *)(self))->func_ov004_02206f8c()) {
        if (B8(0x788) == 0) {
            func_020318cc(PT(0x628));
            ((Unk_ov004_022487cc *)(PT(0x628)))->func_ov004_022069a4();
        }
    }
}

// @02208284
extern "C" void func_ov004_02208284(Self *self) {
    Unk_ov004_02208284_V3 a;
    s32 b[3];
    Unk_ov004_02208284_V3 c;
    if (!((Unk_ov004_0224882c *)(self))->func_ov004_02206f8c()) {
        s32 r4;
        s32 t;
        func_ov004_02208470(self, &a);
        t = S32(0x158);
        b[0] = t;
        b[1] = t;
        b[2] = t;
        func_ov004_022088c0(self, &c);
        r4 = 0;
        if (B8(0x788) == 0) {
            if (B8(0x6c0) != 0) {
                r4 = func_02031960(PT(0x628), &c, S16(0x8e), b);
            } else {
                r4 = 1;
            }
        }
        a.x = func_01ffcb0c(a.x, 0xc00);
        a.z = func_01ffcb0c(a.z, 0xc00);
        if (r4 != 0) {
            u32 r6 = (u8)func_ov004_02235740(func_ov004_0223584c(), self);
            s32 k;
            if (func_020b52d0() != 0) {
                k = 0xf;
            } else {
                k = 8;
            }
            func_020b68ec(func_020b50b4(), PT(0x288), &c, a.x, a.z, a.y, S16(0x8e), k, r6);
        } else {
            func_020b6928(func_020b50b4(), PT(0x288));
        }
    }
}

// @022081b4
extern "C" void func_ov004_022081b4(Self *self) {
    if (B8(0x284) == 0 && S32(0x784) == 1) {
        Unk_ov004_02207854_List l;
        Unk_ov004_02208284_V3 v;
        void *grid;
        u32 i;
        _ZN18Unk_ov004_02206520C1Ev(&l);
        ((Unk_ov004_022077a4 *)(self))->func_ov004_02207c40(&l, 0, 0);
        grid = data_021c47c4;
        for (i = 0; i < _ZN18Unk_ov004_0220652019func_ov004_0220652cEv(&l); i++) {
            s32 x = _ZN18Unk_ov004_0220652019func_ov004_02206520Ei(&l, i)->x;
            s32 y = _ZN18Unk_ov004_0220652019func_ov004_02206520Ei(&l, i)->y;
            s32 hx = x >> 4;
            s32 hy = y >> 4;
            u16 *c = func_0204ebd8(grid, hx, hy, x - (hx << 4), y - (hy << 4), 1);
            if (c) {
                if (func_0204b300(c)) {
                    func_0204ed8c(&v, x, y);
                    v.y = func_ov004_02234f80(x, y);
                    func_020b6860(func_020b50b4(), (u8 *)self + 0x1cc + i * 0x20, &v, 0xccd, 0x100, 10, 0xff);
                }
            }
        }
        _ZN18Unk_ov004_0220652019func_ov004_02206554Ev(&l);
    }
}

// @02208198
extern "C" void func_ov004_02208198(Self *self) {
    ((Unk_ov004_0224882c *)(self))->func_ov004_022056bc(data_ov004_0223fffc[S32(0x768)]);
}

// @02207ef0
void Unk_ov004_022077a4::func_ov004_02207ef0() {
    if (unk_285 == 0) {
        struct {
            volatile u16 tmp;
            u16 pad;
            Unk_ov004_02207ef0_Bits bits;
            u32 pad2;
        } f;
        f.bits = *(Unk_ov004_02207ef0_Bits *)&unk_04[4];
        Unk_ov004_022077a4_Vec3 p1, p2, r;
        volatile Unk_ov004_022077a4_Vec3 q;
        if (!((Unk_ov004_0224882c *)this)->func_ov004_02206f8c()) {
            func_0204eda4(unk_5c, 0, 0, f.bits.lo, f.bits.mid);
            unk_5c[1] = func_ov004_02234f6c(unk_5c);
            unk_14c = 0x1000;
            unk_150 = 0x1000;
            unk_154 = 0x1000;
            unk_158 = 0x1000;
        } else {
            p1 = *(Unk_ov004_022077a4_Vec3 *)data_021c3084;
            p2 = *(Unk_ov004_022077a4_Vec3 *)data_021c309c;
            func_020e9960(&r, &p2, &p1);
            func_020e94f8(&r);
            s32 qz = func_01ffcb0c(r.z, 0x4000);
            s32 qy = func_01ffcb0c(r.y, 0x4000);
            s32 qx = func_01ffcb0c(r.x, 0x4000);
            q.x = qx;
            q.y = qy;
            q.z = qz;
            unk_5c[0] = p1.x + qx;
            unk_5c[1] = p1.y + q.y;
            unk_5c[2] = p1.z + q.z;
            unk_14c = 0x400;
            unk_150 = 0x400;
            unk_154 = 0x400;
            unk_158 = 0x1000;
            data_ov004_0224f600 = func_020e7b98(r.z, r.y) - 0xb000;
            data_ov004_0224f5fc = func_020e7b98(r.x, r.z) + 0x8000;
        }
        unk_8e = f.bits.dir << 14;
        unk_280 = f.bits.id;
        if (unk_280 >= 0x6e9) {
            unk_280 = 0x6e8;
        }
        f.tmp = func_0204b248(unk_280, 0);
        unk_284 = f.bits.flag;
        if (!((Unk_ov004_0224882c *)this)->func_ov004_02206f8c() && unk_284 == 0) {
            unk_5c[1] = 0;
            if (func_020b50e8() == 10) {
                unk_5c[1] = func_ov004_02234f6c(unk_5c);
            }
        }
        unk_77c = func_020534a4(unk_280);
        unk_78c = func_0205346c(unk_280);
        unk_780 = func_02053248(unk_280);
        unk_770 = func_020533c8(unk_280);
        unk_774 = func_0205338c(unk_280);
        unk_788 = func_02052f44(unk_280);
        unk_789 = func_02052f04(unk_280);
        unk_784 = func_02052fc4(unk_280);
        unk_790 = func_02052e80(unk_280);
        if (!((Unk_ov004_0224882c *)this)->func_ov004_02206f8c()) {
            if (unk_780 == 2) {
                unk_5c[0] += 0x1000;
                unk_5c[2] += 0x1000;
            }
            if (unk_284 == 1) {
                ((Unk_ov004_02205e58 *)(unk_178))->func_ov004_02205e20(f.bits.lo, f.bits.mid, unk_8e);
            }
        }
        func_ov004_02208554((Self *)this);
        ((Unk_ov004_02205c44 *)(unk_73c))->func_ov004_02205cdc((Unk_ov004_02205c80_Obj *)this);
        func_ov004_022078d8(1, 0, 0, 0);
        func_ov004_02208198((Self *)this);
        func_ov004_0220838c((Self *)this);
        unk_285 = 1;
    }
}

// @02207e48
void Unk_ov004_022077a4::func_ov004_02207e48() {
    void *p = unk_590;
    s32 a = func_02056fcc(p, (s32)"kh_j");
    s32 b = func_02056fcc(p, (s32)"km_j");
    ((Unk_ov004_02205d5c *)(unk_73e))->func_ov004_02205d5c((s8)a, (s8)b);
    func_02055488(unk_534, (s32)func_ov004_02209e14, this);
    ((Unk_ov004_02205994 *)(unk_760))->func_ov004_022059b4((void *)unk_590, 1);
    s32 t = (s32)((Unk_ov004_022069ec *)(unk_6c8))->func_ov004_02206a2c();
    func_021039ec(t, ((Unk_ov004_022069ec *)(unk_6c8))->func_ov004_02206a14());
    t = (s32)((Unk_ov004_022069ec *)(unk_6c8))->func_ov004_02206a2c();
    func_02103830(t, ((Unk_ov004_022069ec *)(unk_6c8))->func_ov004_02206a14());
    func_ov004_02207e14();
}

// @02207e14
void Unk_ov004_022077a4::func_ov004_02207e14() {
    s32 r = func_ov004_02235740(func_ov004_0223584c(), this);
    if (r != -1) {
        func_02055440(unk_534, data_ov004_02240008[r]);
    }
}

// data
const u32 data_ov004_0223fffc[3] = {1, 0, 8};
// data
const u8 data_ov004_02240008[0x1c] = {0x06, 0x07, 0x08, 0x09, 0x0a, 0x0b, 0x0c, 0x0d, 0x0e, 0x0f, 0x10, 0x11, 0x12, 0x13,
                                      0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39, 0x3a, 0x3b, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c};

// @02207c40
void Unk_ov004_022077a4::func_ov004_02207c40(Unk_ov004_02207854_List *l, void *x, s32 y) {
    Unk_ov004_022077a4_Vec3 c;
    Unk_ov004_022077a4_Vec3 d;
    Unk_ov004_022077a4_Vec3 e;
    s32 ox, oy;
    c.x = unk_5c[0];
    c.y = unk_5c[1];
    c.z = unk_5c[2];
    if (x != 0) {
        VEC_Add(&c, x, &c);
    }
    static Unk_02000c8c arr[2] = {Unk_02000c8c(0, 0, 0), Unk_02000c8c(0x2000, 0, 0)};
    d.x = c.x;
    d.y = c.y;
    d.z = c.z;
    switch (unk_780) {
    case 0:
        if (x != 0 || y != 0) {
            func_ov004_0220865c((Self *)this, (s32)x, y);
        } else {
            data_021f47e0 = unk_250;
        }
        {
            static Unk_02000c8c s(0, 0, 0);
            MTX_MultVec43(&s, &data_021f47e0, &d);
        }
        func_0204ee10(&ox, &oy, &d);
        _ZN18Unk_ov004_0220652019func_ov004_02206530Ejj(l, ox, oy);
        break;
    case 1: {
        if (x != 0 || y != 0) {
            func_ov004_0220865c((Self *)this, (s32)x, y);
        } else {
            data_021f47e0 = unk_250;
        }
        s32 i;
        for (i = 0; i < 2; i++) {
            e.x = arr[i].x;
            e.y = arr[i].y;
            e.z = arr[i].z;
            MTX_MultVec43(&e, &data_021f47e0, &d);
            func_0204ee10(&ox, &oy, &d);
            _ZN18Unk_ov004_0220652019func_ov004_02206530Ejj(l, ox, oy);
        }
        break;
    }
    default:
        d.x = c.x - 0x1000;
        d.z = c.z - 0x1000;
        func_0204ee10(&ox, &oy, &d);
        _ZN18Unk_ov004_0220652019func_ov004_02206530Ejj(l, ox, oy);
        _ZN18Unk_ov004_0220652019func_ov004_02206530Ejj(l, ox + 1, oy);
        _ZN18Unk_ov004_0220652019func_ov004_02206530Ejj(l, ox, oy + 1);
        _ZN18Unk_ov004_0220652019func_ov004_02206530Ejj(l, ox + 1, oy + 1);
        break;
    }
}

// @02207c04
extern "C" u32 func_ov004_02207c04(s32 v) {
    u32 x = (u16)v;
    if (x >= 0xe000 || x < 0x2000) {
        return 0;
    }
    if (x < 0x6000) {
        return 1;
    }
    if (x < 0xa000) {
        return 2;
    }
    return 3;
}

// @02207bdc
extern "C" void func_ov004_02207bdc(u16 *out, Unk_ov004_022077a4 *obj, s32 ang) {
    *out = func_0204b248(obj->unk_280, func_ov004_02207c04(ang));
}

// @02207ac4
void Unk_ov004_022077a4::func_ov004_02207ac4(s32 a, s32 b) {
    if (!((Unk_ov004_0224882c *)this)->func_ov004_02206f8c()) {
        Unk_ov004_02207854_List l;
        void *grid;
        u32 i;
        _ZN18Unk_ov004_02206520C1Ev(&l);
        func_ov004_02207c40(&l, 0, 0);
        grid = (void *)data_021c47c4;
        {
            volatile u16 tmp[1];
            tmp[0] = 0xfff1;
            ((void (*)(u32))func_ov004_02235d10)(func_020b50e8());
            i = 0;
            for (; i < _ZN18Unk_ov004_0220652019func_ov004_0220652cEv(&l); i++) {
                s32 x = _ZN18Unk_ov004_0220652019func_ov004_02206520Ei(&l, i)->x;
                s32 y = _ZN18Unk_ov004_0220652019func_ov004_02206520Ei(&l, i)->y;
                s32 hx = x >> 4;
                s32 hy = y >> 4;
                void *p = func_0204ebd8(grid, hx, hy, x - (hx << 4), y - (hy << 4), unk_284);
                if (p != 0 && func_0204b2d4((u16 *)p)) {
                    s32 t = func_020b50e8();
                    func_02051844(t, x, y, unk_284, ((Unk_ov004_02205c44 *)(unk_73c))->func_ov004_02205c7c(), p, b, a);
                }
                func_ov004_02235648(func_ov004_02235718(), this, x, y, unk_284);
                if (b != 0 && unk_284 == 0) {
                    s32 c = func_ov004_02235624(func_ov004_02235718(), x, y, 1);
                    if (c != -1) {
                        func_ov004_02235648(func_ov004_02235718(), this, x, y, 1);
                    }
                }
            }
        }
        _ZN18Unk_ov004_0220652019func_ov004_02206554Ev(&l);
    }
}

// @022078d8
void Unk_ov004_022077a4::func_ov004_022078d8(s32 unused, void *x, s32 y, u8 flag) {
    if (!((Unk_ov004_0224882c *)this)->func_ov004_02206f8c()) {
        Unk_ov004_02207854_List l;
        u16 a, b, c;
        u32 r7;
        s32 v18;
        u32 i;
        _ZN18Unk_ov004_02206520C1Ev(&l);
        func_ov004_02207c40(&l, x, y);
        a = 0xfff1;
        if (unk_284 == 1) {
            Unk_ov004_022077a4_Vec3 v1, v2;
            static Unk_02000c8c s0(0, 0, 0);
            static Unk_02000c8c s1(0, 0, 0x1000);
            MTX_MultVec43(&s0, &data_021f47e0, &v1);
            MTX_MultVec43(&s1, &data_021f47e0, &v2);
            s32 ang = func_020e7b98(v2.x - v1.x, v2.z - v1.z);
            func_ov004_02207bdc(&b, this, ang);
            a = b;
        } else {
            func_ov004_02207bdc(&c, this, (s16)(unk_8e + y));
            a = c;
        }
        ((void (*)(u32))func_ov004_02235d10)(func_020b50e8());
        if (unk_285 == 0) {
            r7 = 0;
        } else {
            r7 = ((u32 (*)(void *))func_ov004_02206f6c)(this);
        }
        v18 = vfunc_78();
        for (i = 0; i < _ZN18Unk_ov004_0220652019func_ov004_0220652cEv(&l); i++) {
            if (i == 0) {
                u32 s = ((Unk_ov004_02205c44 *)(unk_73c))->func_ov004_02205c7c();
                s32 t = func_020b50e8();
                Unk_ov004_02206520_Ent *p1 = _ZN18Unk_ov004_0220652019func_ov004_02206520Ei(&l, i);
                Unk_ov004_02206520_Ent *p2 = _ZN18Unk_ov004_0220652019func_ov004_02206520Ei(&l, i);
                func_02051a50(t, p1->x, p2->y, unk_284, s, r7, v18, &a, 1);
            }
            void *o = func_ov004_02235718();
            Unk_ov004_02206520_Ent *p3 = _ZN18Unk_ov004_0220652019func_ov004_02206520Ei(&l, i);
            Unk_ov004_02206520_Ent *p4 = _ZN18Unk_ov004_0220652019func_ov004_02206520Ei(&l, i);
            func_ov004_0223568c(o, this, p3->x, p4->y, unk_284);
        }
        if (flag != 0) {
            u32 r = ((Unk_ov004_0224882c *)this)->func_ov004_022071cc((s32)x, y);
            if (r != func_0203e630(this)) {
                func_0203e624(this, r);
            }
        }
        _ZN18Unk_ov004_0220652019func_ov004_02206554Ev(&l);
    }
}

// @02207854
void Unk_ov004_022077a4::func_ov004_02207854(void *a, s32 b) {
    Unk_ov004_02207854_List l;
    Unk_ov004_02207854_Set set;
    u32 i;
    _ZN18Unk_ov004_02206520C1Ev(&l);
    func_ov004_02207c40(&l, 0, 0);
    _ZN18Unk_ov004_02206434C1EP18Unk_ov004_02206520i(&set, &l, unk_284);
    func_ov004_02207ac4(1, 1);
    func_ov004_022078d8(1, a, b, 1);
    for (i = 0; i < _ZN18Unk_ov004_0220643419func_ov004_02206480Ev(&set); i++) {
        Unk_ov004_022077a4 *o = _ZN18Unk_ov004_0220643419func_ov004_02206474Ej(&set, i);
        if (o != 0) {
            o->func_ov004_022078d8(1, a, b, 1);
        }
    }
    _ZN18Unk_ov004_02206434C1Ev(&set);
    _ZN18Unk_ov004_0220652019func_ov004_02206554Ev(&l);
}

// @0220784c
extern "C" s32 func_ov004_0220784c(s32 a) {
    return func_020b530c(a);
}

// @02207838
extern "C" s32 func_ov004_02207838() {
    return func_ov004_0220784c(func_020b50e8());
}

// @022077a4
void Unk_ov004_022077a4::func_ov004_022077a4() {
    if (func_ov004_02206f84()) {
        void *v = unk_590;
        u32 t = ((Unk_ov004_02205c44 *)(unk_73c))->func_ov004_02205c7c();
        ((Unk_ov004_02205bcc *)(unk_744))->func_ov004_02205be4((Unk_02056fd8 *)v, (s32)"lp_m", t);
        if (func_ov004_02207838()) {
            s32 r = func_ov004_02234c2c((void *)func_ov004_02209d10);
            if (((Unk_ov004_02205c44 *)(unk_73c))->func_ov004_02205c7c() != 0 && r == 1) {
                if (unk_768 != 0) {
                    func_ov004_02209dd8(unk_790);
                    func_020516a4(func_020b50e8(), 1);
                } else {
                    func_02064478(0, 1, 0);
                }
            }
        }
    }
}

// @02207704
void Unk_ov004_0224882c::func_ov004_02207704() {
    if (func_ov004_02206f84()) {
        if (func_ov004_02207838()) {
            u32 b = ((Unk_ov004_02205c44 *)(unk_73c))->func_ov004_02205c7c();
            u32 f = unk_790 == 1 ? 1 : 0;
            if (((Unk_ov004_02205bcc *)(unk_744))->func_ov004_02205bcc(b, 1, f)) {
                s32 m = func_ov004_02234c2c((void *)func_ov004_02209d10);
                if (((Unk_ov004_02205c44 *)(unk_73c))->func_ov004_02205c7c()) {
                    if (m == 1) {
                        func_ov004_02209dd8(unk_790);
                        func_020516a4(func_020b50e8(), 1);
                    }
                } else if (m == 0) {
                    func_02064460(0, 8);
                    func_020516a4(func_020b50e8(), 0);
                }
            }
        }
    }
    ((Unk_ov004_02205b14 *)(unk_744))->func_ov004_02205b14();
}

// @022076b0
void Unk_ov004_0224882c::func_ov004_022076b0() {
    if (func_ov004_02206f84()) {
        if (func_ov004_02207838()) {
            if (((Unk_ov004_02205c44 *)(unk_73c))->func_ov004_02205c7c()) {
                if (func_ov004_02234c2c((void *)func_ov004_02209d10) == 1) {
                    func_02064460(0, 1);
                    if (func_ov004_022057bc()) {
                        func_020516a4(func_020b50e8(), 0);
                    }
                }
            }
        }
    }
}

// @02207650
extern "C" s32 func_ov004_02207650(void) {
    if (Unk_ov004_02207650_IsOne(data_020e416c)) {
        u16 *p = func_ov004_0222aaa0();
        if (Unk_ov004_02207650_InRange(p)) {
            s32 q = func_02031060(func_02061950(p));
            if (q != 0xffff) {
                return q;
            }
        }
        return 0x4c1;
    }
    return 0xffff;
}

// @022075b0
BOOL Unk_ov004_0224882c::func_ov004_022075b0() {
    Unk_ov004_02207854_List c;
    _ZN18Unk_ov004_02206520C1Ev(&c);
    ((Unk_ov004_022077a4 *)(this))->func_ov004_02207c40(&c, 0, 0);
    void *grid = data_021c47c4;
    if (unk_284 == 0 && unk_784 == 1) {
        u32 i;
        for (i = 0; i < _ZN18Unk_ov004_0220652019func_ov004_0220652cEv(&c); i++) {
            s32 y = _ZN18Unk_ov004_0220652019func_ov004_02206520Ei(&c, i)->y;
            s32 x = _ZN18Unk_ov004_0220652019func_ov004_02206520Ei(&c, i)->x;
            s32 hx = x >> 4;
            s32 hy = y >> 4;
            u16 *cell = func_0204ebd8(grid, hx, hy, x - (hx << 4), y - (hy << 4), 1);
            if (cell && *cell != 0xfff1) {
                _ZN18Unk_ov004_0220652019func_ov004_02206554Ev(&c);
                return TRUE;
            }
        }
    }
    _ZN18Unk_ov004_0220652019func_ov004_02206554Ev(&c);
    return FALSE;
}

// @022075a4
BOOL Unk_ov004_0224882c::func_ov004_022075a4(s32 a) {
    return func_ov004_022072b4(0, a);
}

// @02207598
BOOL Unk_ov004_0224882c::func_ov004_02207598(s32 a) {
    return func_ov004_022072b4(a, 0);
}

// @022072b4
BOOL Unk_ov004_0224882c::func_ov004_022072b4(s32 a, s32 b) {
    s32 x0, y0, x1, y1;
    Unk_0203e4f0_Vec v1;
    Unk_0203e4f0_Vec v2;
    Unk_ov004_02207854_List c1;
    Unk_ov004_02207854_List c2;
    Unk_ov004_0224882c *obj;
    s32 y;
    s32 y2;
    void *grid;
    u16 *cell1;
    s32 x2;
    s32 x;
    if (unk_779 != 0) {
        return FALSE;
    }
    if (!func_020b52f8()) {
        return FALSE;
    }
    if (!func_ov004_02208894()) {
        return FALSE;
    }
    grid = data_021c47c4;
    u8 *cam = (u8 *)func_02095204(4);
    if (unk_284 == 1) {
        return FALSE;
    }
    if (grid == 0 || cam == 0) {
        return FALSE;
    }
    if (!((Unk_ov004_022061b4 *)(unk_188))->func_ov004_0220607c((Unk_ov004_02205c80_Obj *)this)) {
        return FALSE;
    }
    Unk_0203e4f0_Vec *pp = (Unk_0203e4f0_Vec *)(cam + 0x5c);
    v1.x = pp->x;
    v1.y = pp->y;
    v1.z = pp->z;
    func_0204ee10(&x0, &y0, &v1);
    v2.x = v1.x;
    v2.y = v1.y;
    v2.z = v1.z;
    if (a) {
        VEC_Add(&v2, (void *)a, &v2);
    }
    func_0204ee10(&x1, &y1, &v2);
    obj = (Unk_ov004_0224882c *)func_ov004_022355d8(func_ov004_02235718(), x1, y1, 0);
    ((Unk_ov004_022077a4 *)(this))->func_ov004_02207ac4(0, 0);
    _ZN18Unk_ov004_02206520C1Ev(&c1);
    ((Unk_ov004_022077a4 *)(this))->func_ov004_02207c40(&c1, (void *)a, b);
    _ZN18Unk_ov004_02206520C1Ev(&c2);
    ((Unk_ov004_022077a4 *)(this))->func_ov004_02207c40(&c2, (void *)a, b >> 1);
    u32 i;
    for (i = 0; i < _ZN18Unk_ov004_0220652019func_ov004_0220652cEv(&c1); i++) {
        x = _ZN18Unk_ov004_0220652019func_ov004_02206520Ei(&c1, i)->x;
        y = _ZN18Unk_ov004_0220652019func_ov004_02206520Ei(&c1, i)->y;
        s32 hx = x >> 4;
        s32 hy = y >> 4;
        cell1 = func_0204ebd8(grid, hx, hy, x - (hx << 4), y - (hy << 4), 0);
        if (a == 0 && x0 == x && y0 == y) UNK_OV004_022072B4_FAIL()
        if (a == 0) {
            y2 = _ZN18Unk_ov004_0220652019func_ov004_02206520Ei(&c2, i)->y;
            x2 = _ZN18Unk_ov004_0220652019func_ov004_02206520Ei(&c2, i)->x;
            s32 hx2 = x2 >> 4;
            s32 hy2 = y2 >> 4;
            u16 *cell2 = func_0204ebd8(grid, hx2, hy2, x2 - (hx2 << 4), y2 - (hy2 << 4), 0);
            if (cell2 && *cell2 != 0xfff1) UNK_OV004_022072B4_FAIL()
        }
        if (cell1 && *cell1 != 0xfff1) UNK_OV004_022072B4_FAIL()
        if (!func_02031284(x, y)) UNK_OV004_022072B4_FAIL()
        if (func_ov004_022355d8(func_ov004_02235718(), x, y, 1) && ((BOOL (*)(void))_ZN18Unk_ov004_0224882c19func_ov004_022057f0Ev)()) UNK_OV004_022072B4_FAIL()
        if (b == 0) {
            if ((obj && obj->unk_788 == 0 && obj != this) || func_0202ffdc(&v2) != -1 || func_ov004_02234f6c(&v2)) UNK_OV004_022072B4_FAIL()
        }
    }
    ((Unk_ov004_022077a4 *)(this))->func_ov004_022078d8(0, 0, 0, 0);
    _ZN18Unk_ov004_0220652019func_ov004_02206554Ev(&c2);
    _ZN18Unk_ov004_0220652019func_ov004_02206554Ev(&c1);
    return TRUE;
}

// @022071cc
u16 Unk_ov004_0224882c::func_ov004_022071cc(s32 a, s32 b) {
    Unk_ov004_022071cc_Pkt p;
    s32 x;
    s32 y;
    if (func_020b52d0() != 0 || func_ov004_02206f8c()) {
        (*(u16 *)&p) = ((*(u16 *)&p) & 0xfffffe00) | ((u16)func_ov004_02235740(func_ov004_0223584c(), this) & 0x1ff);
        (*(u16 *)&p) = ((*(u16 *)&p) & 0xffff01ff) | ((func_020b50e8() & 0x7f) << 9);
        return (*(u16 *)&p);
    } else {
        if (func_ov004_0220711c(&x, &y, a, b)) {
            (((u16 *)&p)[1]) = ((((u16 *)&p)[1]) & ~0xf) | ((u16)(x & 0xf) & 0xf);
            (((u16 *)&p)[1]) = ((((u16 *)&p)[1]) & ~0xf0) | (((u16)(y & 0xf) & 0xf) << 4);
            (((u16 *)&p)[1]) = ((((u16 *)&p)[1]) & 0xfffffeff) | (((u16)(unk_284 & 1) & 1) << 8);
            (((u16 *)&p)[1]) = ((((u16 *)&p)[1]) & 0xffff81ff) | ((func_020b50e8() & 0x3f) << 9);
            return (((u16 *)&p)[1]);
        }
        return 0;
    }
}

// @0220711c
BOOL Unk_ov004_0224882c::func_ov004_0220711c(s32 *ox, s32 *oy, s32 a, s32 b) {
    Unk_ov004_02207854_List c;
    _ZN18Unk_ov004_02206520C1Ev(&c);
    ((Unk_ov004_022077a4 *)(this))->func_ov004_02207c40(&c, (void *)a, *(s16 *)&b);
    void *grid = data_021c47c4;
    u32 i;
    for (i = 0; i < _ZN18Unk_ov004_0220652019func_ov004_0220652cEv(&c); i++) {
        s32 y, x, hx, hy;
        u8 layer;
        layer = unk_284;
        y = _ZN18Unk_ov004_0220652019func_ov004_02206520Ei(&c, i)->y;
        x = _ZN18Unk_ov004_0220652019func_ov004_02206520Ei(&c, i)->x;
        hx = x >> 4;
        hy = y >> 4;
        u16 *cell = func_0204ebd8(grid, hx, hy, x - (hx << 4), y - (hy << 4), layer);
        if (cell) {
            if (func_0204b2d4(cell)) {
                *ox = _ZN18Unk_ov004_0220652019func_ov004_02206520Ei(&c, i)->x;
                *oy = _ZN18Unk_ov004_0220652019func_ov004_02206520Ei(&c, i)->y;
                _ZN18Unk_ov004_0220652019func_ov004_02206554Ev(&c);
                return TRUE;
            }
        }
    }
    _ZN18Unk_ov004_0220652019func_ov004_02206554Ev(&c);
    return FALSE;
}

// @02207100
extern "C" void func_ov004_02207100(void *a, u32 x) {
    u16 s[3];
    s[0] = 0;
    s[1] = x;
    s[2] = 0;
    func_ov004_0223717c(a, s);
}

// @02207038
void Unk_ov004_0224882c::func_ov004_02207038(s32 a) {
    void *cam = func_020947f0(4);
    if (cam) {
        Unk_ov004_02207854_List c;
        Unk_0203e4f0_Vec v1;
        Unk_0203e4f0_Vec v2;
        _ZN18Unk_ov004_02206520C1Ev(&c);
        ((Unk_ov004_022077a4 *)(this))->func_ov004_02207c40(&c, 0, 0);
        s32 hi = 0;
        s32 hiIdx = ~hi;
        s32 loIdx = hiIdx;
        s32 lo = data_020c8cbc;
        u32 i;
        for (i = 0; i < _ZN18Unk_ov004_0220652019func_ov004_0220652cEv(&c); i++) {
            Unk_ov004_02206520_Ent *e1 = _ZN18Unk_ov004_0220652019func_ov004_02206520Ei(&c, i);
            Unk_ov004_02206520_Ent *e2 = _ZN18Unk_ov004_0220652019func_ov004_02206520Ei(&c, i);
            func_0204ed8c(&v1, e1->x, e2->y);
            s32 d = func_020e9650(cam, &v1);
            if (d > hi) {
                hiIdx = i;
                hi = d;
            }
            if (d < lo) {
                loIdx = i;
                lo = d;
            }
        }
        if (a == 0) {
            hiIdx = loIdx;
        }
        if (hiIdx != -1) {
            Unk_ov004_02206520_Ent *p = _ZN18Unk_ov004_0220652019func_ov004_02206520Ei(&c, hiIdx);
            Unk_ov004_02206520_Ent *q = _ZN18Unk_ov004_0220652019func_ov004_02206520Ei(&c, hiIdx);
            func_0204ed8c(&v2, p->x, q->y);
            func_ov004_02207100(&v2, (u32)func_02002bdc(&v2, cam));
        }
        _ZN18Unk_ov004_0220652019func_ov004_02206554Ev(&c);
    }
}

// @02207004
void Unk_ov004_0224882c::func_ov004_02207004() {
    void *cam = func_020947f0(4);
    if (cam) {
        Unk_0203e4f0_Vec v;
        func_ov004_022088c0(this, (Vec3 *)&v);
        func_ov004_02207100(&v, (u32)func_02002bdc(&v, cam));
    }
}

// @02206fe0
void Unk_ov004_0224882c::func_ov004_02206fe0(Unk_0203e4f0_Vec *v) {
    Unk_0203e4f0_Vec t;
    t.x = v->x;
    t.y = v->y;
    t.z = v->z;
    func_0209028c(0x3d, &t, 0, 0);
}

// @02206fa0
void Unk_ov004_0224882c::func_ov004_02206fa0(s32 a) {
    s32 p[3];
    s32 q[3];
    s32 r[3];
    func_ov004_02208910(this, p, a);
    func_ov004_022088c0(this, (Vec3 *)q);
    s32 y = unk_5c[1];
    r[0] = (p[0] + q[0]) >> 1;
    r[1] = y;
    r[2] = (p[2] + q[2]) >> 1;
    func_ov004_02206fe0((Unk_0203e4f0_Vec *)r);
}

// @02206f8c
BOOL Unk_ov004_0224882c::func_ov004_02206f8c() {
    if (unk_768 == 2) {
        return TRUE;
    }
    return FALSE;
}

// @02206f84
extern "C" s32 func_ov004_02206f84(void) {
    return ((s32 (*)(void))func_ov004_02209d10)();
}

// @02206f7c
extern "C" s32 func_ov004_02206f7c(void) {
    return ((s32 (*)(void))func_ov004_02209cf0)();
}

// @02206f74
extern "C" s32 func_ov004_02206f74(void) {
    return _ZN18Unk_ov004_0224882c19func_ov004_02209c58Ev();
}

// @02206f6c
extern "C" s32 func_ov004_02206f6c(void) {
    return _ZN18Unk_ov004_0224882c19func_ov004_02209c44Ev();
}

// @02206f3c
extern "C" void func_ov004_02206f3c(u16 *out, Unk_ov004_0224882c *o) {
    if (o->unk_77c == 0x1c) {
        *out = 0xfff1;
    } else {
        *out = func_0204b248(func_ov004_022087a4(o), 0);
    }
}

// @02206f38
BOOL Unk_ov004_0224882c::vfunc_60() {
}

// @02206f34
BOOL Unk_ov004_0224882c::vfunc_68() {
}

// @02206ef8
void Unk_ov004_0224882c::vfunc_6c(s32 a, void *b) {
    if (unk_740 != 0) {
        if (unk_73e == a) {
            func_020b1e74(b);
        } else if (unk_73f == a) {
            func_020b1ddc(b);
        }
    }
}

// @02206ec8
void Unk_ov004_0224882c::vfunc_64(s32 a, Unk_ov004_02206ec8_Ctx *b) {
    if (((Unk_ov004_02205994 *)(unk_760))->func_ov004_02205998(a)) {
        u32 v = ((Unk_ov004_02205994 *)(unk_760))->func_ov004_02205994();
        *b->unk_b8 = v;
    }
}

// @02206eb0
Unk_ov004_02248804::Unk_ov004_02248804() {
}

// @02206e78
Unk_ov004_02248804::~Unk_ov004_02248804() {
}

// @02206e74
u32 Unk_ov004_02248804::func_ov004_02206e74() {
    return unk_18;
}

// @02206e38
Unk_ov004_02206e38::Unk_ov004_02206e38() : unk_70(0xfff1) {
    unk_00 = 0;
    unk_04 = 0;
    unk_08 = 0;
    unk_0c = 0;
    unk_70 = 0xfff1;
    unk_72 = 0;
}

// @02206e1c
// ---- functions ----
Unk_ov004_02206e38::~Unk_ov004_02206e38() {
}

// @02206e0c
BOOL Unk_ov004_022069ec::func_ov004_02206e0c() {
    if (unk_0c != 0) {
        return TRUE;
    }
    return FALSE;
}

// @02206de0
char *Unk_ov004_022069ec::func_ov004_02206de0(s32 id) {
    func_020639e8(data_ov004_0224f83c, "/ftr/%d/%d/%04x.arc", id >> 8, (id & 0xff) >> 4, id);
    return data_ov004_0224f83c;
}

// @02206db4
char *Unk_ov004_022069ec::func_ov004_02206db4(s32 id) {
    func_020639e8(data_ov004_0224f864, "/ftr/%d/%d/%04x.nsbtx", id >> 8, (id & 0xff) >> 4, id);
    return data_ov004_0224f864;
}

// @02206be8
BOOL Unk_ov004_022069ec::func_ov004_02206be8(void *obj, s32 id) {
    u32 size0;
    u32 size1;
    char name[0x20];
    Unk_ov004_02206be8_Blk blk;
    if (unk_00 == 0) {
        unk_00 = func_020641ec(func_ov004_02206db4(id), data_021f482c, -4, &size0);
        if (unk_72 != 0) {
            void *r7 = func_020e8608((void *)func_0209c348(obj), size0);
            MI_CpuCopy8(unk_00, r7, size0);
            unk_44.func_ov004_022063d4((s32)r7);
        }
    }
    if (unk_04 == 0) {
        char *p = func_ov004_02206de0(id);
        unk_04 = func_020641ec(p, (void *)func_0209c348(obj), 4, &size1);
    }
    if (unk_08 == 0 && unk_04 != 0) {
        if (func_02101340(&blk, "FTR", unk_04)) {
            u8 *pb = (u8 *)NNS_G3dGetMdlSet(func_021012bc((s32)data_ov004_0224870c));
            unk_08 = pb + *(u32 *)(pb + *(u16 *)(pb + 0xe) + 0xc);
            u32 i = 0;
            s32 z0 = 0, z1 = 0, z2 = 0, z3 = 0, z4 = 0;
            do {
                s32 h;
                func_020639e8(name, "FTR:a/bca/bca%d", i);
                h = func_021012bc((s32)name);
                if (h) {
                    unk_44.func_ov004_02206408((void *)func_021065f8(func_021065dc(h), z0), i);
                }
                func_020639e8(name, "FTR:a/bma/bma%d", i);
                h = func_021012bc((s32)name);
                if (h) {
                    unk_44.func_ov004_022063fc((void *)func_02106634(func_02106618(h), z1), i);
                }
                func_020639e8(name, "FTR:a/bva/bva%d", i);
                h = func_021012bc((s32)name);
                if (h) {
                    unk_44.func_ov004_022063f0((void *)func_021067a4(func_02106788(h), z2), i);
                }
                func_020639e8(name, "FTR:a/bta/bta%d", i);
                h = func_021012bc((s32)name);
                if (h) {
                    unk_44.func_ov004_022063e4((void *)func_02106670(func_02106654(h), z3), i);
                }
                func_020639e8(name, "FTR:a/btp/btp%d", i);
                h = func_021012bc((s32)name);
                if (h) {
                    unk_44.func_ov004_022063d8((void *)func_021066ac(func_02106690(h), z4), i);
                }
                i++;
            } while (i < 2);
            func_02101310(&blk);
        }
    }
    if (unk_00 != 0 && unk_08 != 0) {
        return TRUE;
    }
    return FALSE;
}

// @02206be4
Unk_ov004_02206398 *Unk_ov004_022069ec::func_ov004_02206be4() {
    return &unk_44;
}

// @02206bcc
void Unk_ov004_022069ec::func_ov004_02206bcc() {
    if (unk_00 != 0) {
        func_020e8558(unk_00);
        unk_00 = 0;
    }
}

// @02206b64
BOOL Unk_ov004_022069ec::func_ov004_02206b64(void *obj, s32 a, s32 flag) {
    void *h;
    unk_72 = flag;
    if (func_ov004_02206e0c()) {
        return TRUE;
    }
    unk_70 = func_0204b248(a, 0);
    func_ov004_02206be8(obj, a);
    h = NNS_G3dGetTex(unk_00);
    func_02055724(h, func_0209c344(obj));
    unk_0c = func_0205588c(h, func_0209c348(obj));
    func_ov004_022069ec();
    return TRUE;
}

// @02206a44
BOOL Unk_ov004_022069ec::func_ov004_02206a44(void *obj, s32 a, s32 flag) {
    if (func_ov004_02206e0c()) {
        return TRUE;
    }
    u16 t2;
    if (Unk_ov004_02206a44_IsInvalid(&unk_70)) {
        unk_70 = func_0204b248(a, 0);
        unk_72 = flag;
    } else {
        t2 = func_0204b248(a, 0);
        if (!Unk_ov004_02206a44_Same(&t2, &unk_70)) {
            return FALSE;
        }
    }
    func_ov004_02206be8(obj, a);
    if (unk_0c == 0) {
        void *p = NNS_G3dGetTex(unk_00);
        s32 x = func_0209c344(obj);
        s32 y = func_0209c348(obj);
        if (unk_10.func_02055014(p, (Unk_020dbe24 *)x, (void *)y) == 3) {
            unk_0c = unk_10.func_0205500c();
            func_ov004_022069ec();
            return TRUE;
        }
    }
    return FALSE;
}

// @02206a2c
void *Unk_ov004_022069ec::func_ov004_02206a2c() {
    if (func_ov004_02206e0c()) {
        return unk_08;
    }
    return 0;
}

// @02206a14
void *Unk_ov004_022069ec::func_ov004_02206a14() {
    if (func_ov004_02206e0c()) {
        return unk_0c;
    }
    return 0;
}

// @022069ec
void Unk_ov004_022069ec::func_ov004_022069ec() {
    unk_70 = 0xfff1;
    func_ov004_02206bcc();
    unk_10.func_0205516c();
    unk_72 = 0;
}

// @022069cc
Unk_ov004_022487cc::Unk_ov004_022487cc() {
    func_ov004_022069a4();
}

// @022069b4
// D1 written out: the original destroys the Unk_020d8cf4 part with its D1 (0x02031bd8), which an sp2 base-object destructor call would not use
extern "C" void *_ZN18Unk_ov004_022487ccD1Ev(void *self) {
    *(void **)self = (void *)&_ZTV18Unk_ov004_022487cc[2];
    _ZN12Unk_020d8cf4D1Ev(self);
    return self;
}

// @022069ac
void Unk_ov004_022487cc::func_ov004_022069ac(void *p) {
    unk_9c = p;
}

// @022069a4
void Unk_ov004_022487cc::func_ov004_022069a4() {
    unk_9c = 0;
}

// @02206744
void Unk_ov004_022487cc::vfunc_00(Unk_020d8ce4 *a, Unk_ov004_02206570_Act *b, s32 c) {
    Unk_0202f048 v0, v1, v2, mid, d1, d2;
    volatile Unk_ov004_02206744_V3 pos;
    Unk_ov004_02206744_V3 w1, w2, buf;
    s32 t18, t1c, t20, t24, len2;
    s32 r7;
    s32 r5;
    s32 px, pz;
    void *chk = func_02095204(4);
    if (b != NULL && (void *)b == chk) {
        if (unk_9c != NULL && ((Unk_ov004_0224882c *)unk_9c)->func_ov004_0220579c(1)) {
            Unk_ov004_02206744_V3 *pv;
            t20 = func_020e7b98(a->unk_14.x, a->unk_14.y);
            t24 = t20 + 0x8000;
            r7 = (u16)(t24 - b->unk_8e);
            pv = &b->unk_68;
            px = b->unk_68.x;
            pos.x = px;
            pos.y = pv->y;
            pz = pv->z;
            pos.z = pz;
            v0.func_0202f048(px, pz);
            v1.func_0202f048(pos.x + a->unk_14.x, pos.z + a->unk_14.y);
            v2.func_0202f048(0, 0);
            if ((u32)r7 < 0x1700 || (u32)r7 > 0xe900) {
                if (a->func_0202ece8(&v2, &v0, &v1)) {
                    r7 = FX_Sqrt(a->unk_04.func_0202ef84(&v2));
                    len2 = FX_Sqrt(a->unk_04.func_0202ef84(&a->unk_0c));
                    if (r7 >= 0x666) {
                        if (r7 <= len2 - 0x666) {
                            if (a->func_0202ebb0(&v2)) {
                                func_02033078(&mid, a);
                                t1c = mid.y + func_01ffcb0c(a->unk_14.y, c);
                                s32 x = mid.x + func_01ffcb0c(a->unk_14.x, c);
                                w1.x = x;
                                w1.y = 0;
                                w1.z = t1c;
                                w2.x = x;
                                w2.y = 0;
                                w2.z = t1c;
                                if (len2 > 0x3000) {
                                    if (r7 < 0x1000) {
                                        d1.func_0202efe4(&a->unk_0c, &a->unk_04);
                                        d1.func_0202ef40();
                                        v2.x = a->unk_04.x + func_01ffcb0c(d1.x, 0x1000);
                                        v2.y = a->unk_04.y + func_01ffcb0c(d1.y, 0x1000);
                                    } else if (r7 > 0x3000) {
                                        d2.func_0202efe4(&a->unk_0c, &a->unk_04);
                                        d2.func_0202ef40();
                                        v2.x = a->unk_04.x + func_01ffcb0c(d2.x, 0x3000);
                                        v2.y = a->unk_04.y + func_01ffcb0c(d2.y, 0x3000);
                                    }
                                    r7 = v2.y + func_01ffcb0c(a->unk_14.y, c);
                                    w2.x = v2.x + func_01ffcb0c(a->unk_14.x, c);
                                    w2.y = 0;
                                    w2.z = r7;
                                }
                                func_ov004_02206570(b);
                                t18 = (s32)func_ov004_02235740(func_ov004_0223584c(), unk_9c);
                                r5 = (s16)(t20 - ((Unk_ov004_02206570_Act *)unk_9c)->unk_8e);
                                if (func_ov004_02208750((Self *)unk_9c) == 1) {
                                    void *q;
                                    func_ov004_022088c0((Self *)unk_9c, (Vec3 *)&buf);
                                    q = func_ov004_022355b0(func_ov004_02235718(), &buf, 0);
                                    if (q != NULL) {
                                        r5 = (s16)(t20 - ((Unk_ov004_02206570_Act *)q)->unk_8e - ((Unk_ov004_02205e58 *)((u8 *)unk_9c + 0x178))->func_ov004_02205e78());
                                    }
                                }
                                r5 = func_ov004_02207c04(r5);
                                func_ov004_02235120(func_ov004_022354d8(), (void *)t18, &b->unk_68, &b->unk_5c, c, &w1, &w2, (s16)t24, r5);
                            }
                        }
                    }
                }
            }
        }
    }
}

// data
char data_ov004_0224f83c[0x28];
// data
char data_ov004_0224f864[0x28];
// data
char data_ov004_022487dc[] = "FTR:a/bmd/bmd0";
// data
char *data_ov004_0224870c = data_ov004_022487dc;

// @02206570
void Unk_ov004_022487cc::func_ov004_02206570(Unk_ov004_02206570_Act *b) {
    Unk_ov004_02206570_Act *o;
    Unk_ov004_02206744_V3 tmp[2];
    o = (Unk_ov004_02206570_Act *)unk_9c;
    if (*(s32 *)((u8 *)o + 0x780) == 1) {
        static Unk_02000c8c tbl0[2] = {Unk_02000c8c(0, 0, 0), Unk_02000c8c(-0x2000, 0, 0)};
        static Unk_02000c8c tbl1[2] = {Unk_02000c8c(0, 0, 0), Unk_02000c8c(0x2000, 0, 0)};
        static Unk_02000c8c one(0x2000, 0, 0);
        s32 r6;
        func_020e8300(&data_021f47e0, ((Unk_ov004_02206570_Act *)unk_9c)->unk_8e);
        MTX_MultVec43(&one, &data_021f47e0, &tmp[0]);
        func_ov004_02208938((Self *)unk_9c, &tmp[1], &tbl1[0]);
        r6 = func_020e96a4(&b->unk_5c, &tmp[1]);
        func_ov004_02208938((Self *)unk_9c, &tmp[1], &tbl1[1]);
        if (r6 < func_020e96a4(&b->unk_5c, &tmp[1])) {
            if (func_020e96ec((u8 *)unk_9c + 0x140, &tbl0[0])) {
                Unk_ov004_02206744_V3 *d = (Unk_ov004_02206744_V3 *)((u8 *)unk_9c + 0x140);
                Unk_02000c8c *s = &tbl0[0];
                d->x = s->x;
                d->y = s->y;
                d->z = s->z;
                VEC_Subtract(&((Unk_ov004_02206570_Act *)unk_9c)->unk_5c, &tmp[0], &((Unk_ov004_02206570_Act *)unk_9c)->unk_5c);
            }
        } else {
            if (func_020e96ec((u8 *)unk_9c + 0x140, &tbl0[1])) {
                Unk_ov004_02206744_V3 *d = (Unk_ov004_02206744_V3 *)((u8 *)unk_9c + 0x140);
                d->x = ((u32 *)tbl0)[3];
                d->y = ((u32 *)tbl0)[4];
                d->z = ((u32 *)tbl0)[5];
                VEC_Add(&((Unk_ov004_02206570_Act *)unk_9c)->unk_5c, &tmp[0], &((Unk_ov004_02206570_Act *)unk_9c)->unk_5c);
            }
        }
    }
}

// @02206558
Unk_ov004_02206520::Unk_ov004_02206520() {
    unk_00 = 0;
}

// @02206554
void Unk_ov004_02206520::func_ov004_02206554() {}

// @02206530
BOOL Unk_ov004_02206520::func_ov004_02206530(u32 a, u32 b) {
    if (unk_00 < 4) {
        unk_04[unk_00].x = a;
        unk_04[unk_00].y = b;
        unk_00++;
        return TRUE;
    }
    return FALSE;
}

// @0220652c
u32 Unk_ov004_02206520::func_ov004_0220652c() {
    return unk_00;
}

// @02206520
Unk_ov004_02206520_Ent *Unk_ov004_02206520::func_ov004_02206520(s32 i) {
    return &unk_04[i & 3];
}

// @0220650c
void Unk_ov004_0220650c::func_ov004_0220650c() {
    u32 i;
    unk_00 = 0;
    for (i = 0; i < 4; i++) {
        unk_04[i] = 0;
    }
}

// @022064b4
void Unk_ov004_02206434::func_ov004_022064b4(Unk_ov004_02206520 *l, s32 flag) {
    u32 i;
    if (flag == 0) {
        for (i = 0; i < l->func_ov004_0220652c(); i++) {
            void *mgr = func_ov004_02235718();
            Unk_ov004_02206520_Ent *a = l->func_ov004_02206520(i);
            Unk_ov004_02206520_Ent *b = l->func_ov004_02206520(i);
            Unk_ov004_02205c80_Obj *o = func_ov004_022355d8(mgr, a->x, b->y, 1);
            if (o != NULL) {
                func_ov004_02206434(o);
            }
        }
    }
}

// @02206494
Unk_ov004_02206434::Unk_ov004_02206434(Unk_ov004_02206520 *l, s32 flag) {
    _ZN18Unk_ov004_0220650c19func_ov004_0220650cEv(this);
    func_ov004_022064b4(l, flag);
}

// @02206484
Unk_ov004_02206434::Unk_ov004_02206434() {
    _ZN18Unk_ov004_0220650c19func_ov004_0220650cEv(this);
}

// @02206480
u32 Unk_ov004_02206434::func_ov004_02206480() {
    return unk_00;
}

// @02206474
Unk_ov004_02205c80_Obj *Unk_ov004_02206434::func_ov004_02206474(u32 i) {
    return unk_04[i & 3];
}

// @02206434
BOOL Unk_ov004_02206434::func_ov004_02206434(Unk_ov004_02205c80_Obj *o) {
    u32 i;
    u32 n;
    if (o == NULL) {
        return FALSE;
    }
    n = unk_00;
    if (n >= 4) {
        return FALSE;
    }
    for (i = 0; i < n; i++) {
        if (unk_04[i] == o) {
            return FALSE;
        }
    }
    unk_00 = unk_00 + 1;
    unk_04[n] = o;
    return TRUE;
}

// @02206418
void Unk_ov004_02206398::func_ov004_02206418() {
    u32 i;
    unk_28 = 0;
    for (i = 0; i < 2; i++) {
        *(void **)((u8 *)this + i * 4) = NULL;
        unk_08[i] = NULL;
        unk_18[i] = NULL;
        unk_20[i] = NULL;
    }
}

// @02206414
Unk_ov004_02206398::~Unk_ov004_02206398() {
}

// @02206408
void Unk_ov004_02206398::func_ov004_02206408(void *v, u32 i) {
    unk_00[i & 1] = v;
}

// @022063fc
void Unk_ov004_02206398::func_ov004_022063fc(void *v, u32 i) {
    unk_08[i & 1] = v;
}

// @022063f0
void Unk_ov004_02206398::func_ov004_022063f0(void *v, u32 i) {
    unk_10[i & 1] = v;
}

// @022063e4
void Unk_ov004_02206398::func_ov004_022063e4(void *v, u32 i) {
    unk_18[i & 1] = v;
}

// @022063d8
void Unk_ov004_02206398::func_ov004_022063d8(void *v, u32 i) {
    unk_20[i & 1] = v;
}

// @022063d4
void Unk_ov004_02206398::func_ov004_022063d4(s32 v) {
    unk_28 = v;
}

// @022063c8
Unk_ov004_02208a18_Rec *Unk_ov004_02206398::func_ov004_022063c8(u32 i) {
    return (Unk_ov004_02208a18_Rec *)unk_00[i & 1];
}

// @022063bc
Unk_ov004_02208a18_Rec *Unk_ov004_02206398::func_ov004_022063bc(u32 i) {
    return (Unk_ov004_02208a18_Rec *)unk_08[i & 1];
}

// @022063b0
Unk_ov004_02208a18_Rec *Unk_ov004_02206398::func_ov004_022063b0(u32 i) {
    return (Unk_ov004_02208a18_Rec *)unk_10[i & 1];
}

// @022063a4
Unk_ov004_02208a18_Rec *Unk_ov004_02206398::func_ov004_022063a4(u32 i) {
    return (Unk_ov004_02208a18_Rec *)unk_18[i & 1];
}

// @02206398
Unk_ov004_02208a18_Rec *Unk_ov004_02206398::func_ov004_02206398(u32 i) {
    return (Unk_ov004_02208a18_Rec *)unk_20[i & 1];
}

// @02206380
s32 Unk_ov004_02206398::func_ov004_02206380() {
    if (unk_28 != 0) {
        return (s32)NNS_G3dGetTex((void *)unk_28);
    }
    return 0;
}

// @02206368
Unk_ov004_022062f4::Unk_ov004_022062f4() {
    unk_02 = 0xfff1;
    func_ov004_022062fc();
}

// @02206364
Unk_ov004_022062f4::~Unk_ov004_022062f4() {
}

// @02206310
BOOL Unk_ov004_022062f4::func_ov004_02206310() {
    BOOL r;
    if (func_0204b2d4(&unk_02)) {
        u16 t = 0xfff1;
        if (func_0204b25c(&unk_02) == func_0204b25c(&t)) {
            r = TRUE;
        } else {
            r = FALSE;
        }
    } else {
        if (unk_02 == 0xfff1) {
            r = TRUE;
        } else {
            r = FALSE;
        }
    }
    if (r) {
        return FALSE;
    }
    return TRUE;
}

// @022062fc
void Unk_ov004_022062f4::func_ov004_022062fc() {
    unk_02 = 0xfff1;
    unk_04.x = 0;
    unk_04.y = 0;
    unk_04.z = 0;
}

// @022062f8
Unk_ov004_02205d8c_Vec *Unk_ov004_022062f4::func_ov004_022062f8() {
    return &unk_04;
}

// @022062f4
u16 *Unk_ov004_022062f4::func_ov004_022062f4() {
    return &unk_02;
}

// @022062c8
BOOL Unk_ov004_022062f4::func_ov004_022062c8(u16 *id, Unk_ov004_02205d8c_Vec *pos) {
    if (func_ov004_02206310() == 0) {
        unk_02 = *id;
        unk_04.x = pos->x;
        unk_04.y = pos->y;
        unk_04.z = pos->z;
        return TRUE;
    }
    return FALSE;
}

// @02206234
void Unk_ov004_022062f4::func_ov004_02206234(Unk_ov004_02205c80_Obj *o) {
    if (func_ov004_02206310()) {
        Unk_ov004_02205d8c_Vec z, d, p, s;
        data_021f47e0 = o->unk_598;
        s32 x, y, c;
        c = func_ov004_022062f8()->z;
        y = func_ov004_022062f8()->y;
        x = func_ov004_022062f8()->x;
        func_020e8528(&data_021f47e0, x, y, c);
        z.x = 0;
        z.y = 0;
        z.z = 0;
        MTX_MultVec43(&z, &data_021f47e0, &d);
        p.x = d.x;
        p.y = d.y;
        p.z = d.z;
        s.x = 0x1000;
        s.y = 0x1000;
        s.z = 0x1000;
        func_ov004_0222c4d8(*func_ov004_022062f4(), &p, &s, 0, 0, 0);
    }
}

// @02206204
Unk_ov004_022061b4::Unk_ov004_022061b4() {
    func_ov004_022061c4();
}

// @022061e8
Unk_ov004_022061b4::~Unk_ov004_022061b4() {
}

// @022061c4
void Unk_ov004_022061b4::func_ov004_022061c4() {
    u32 i;
    for (i = 0; i < 4; i++) {
        func_ov004_022061b4(i)->func_ov004_022062fc();
    }
}

// @022061b4
Unk_ov004_022062f4 *Unk_ov004_022061b4::func_ov004_022061b4(u32 i) {
    if (i < 4) {
        return &unk_04[i];
    }
    return &unk_04[0];
}

// @02206190
void Unk_ov004_022061b4::func_ov004_02206190(Unk_ov004_02205c80_Obj *o) {
    u32 i;
    for (i = 0; i < 4; i++) {
        func_ov004_022061b4(i)->func_ov004_02206234(o);
    }
}

// @0220614c
BOOL Unk_ov004_022061b4::func_ov004_0220614c(u16 *id, Unk_ov004_02205d8c_Vec *pos) {
    u32 i;
    for (i = 0; i < 4; i++) {
        if (func_ov004_022061b4(i)->func_ov004_02206310() == 0) {
            func_ov004_022061b4(i)->func_ov004_022062c8(id, pos);
            return TRUE;
        }
    }
    return FALSE;
}

// @0220607c
BOOL Unk_ov004_022061b4::func_ov004_0220607c(Unk_ov004_02205c80_Obj *o) {
    Unk_ov004_02206520 list;
    _ZN18Unk_ov004_022077a419func_ov004_02207c40EP23Unk_ov004_02207854_ListPvi(o, (Unk_ov004_02207854_List *)&list, 0, 0);
    void *grid = data_021c47c4;
    u32 i;
    for (i = 0; i < list.func_ov004_0220652c(); i++) {
        s32 y = list.func_ov004_02206520(i)->y;
        s32 x = list.func_ov004_02206520(i)->x;
        s32 hx = x >> 4;
        s32 hy = y >> 4;
        u16 *cell = func_0204ebd8(grid, hx, hy, x - (hx << 4), y - (hy << 4), 1);
        if (cell != NULL && !func_0204b288(cell) && !func_0204b300(cell)) {
            if (Unk_ov004_0220607c_IsEmpty(cell) == 0) {
                list.func_ov004_02206554();
                return FALSE;
            }
        }
    }
    list.func_ov004_02206554();
    return TRUE;
}

// @02205f58
BOOL Unk_ov004_022061b4::func_ov004_02205f58(Unk_ov004_02205c80_Obj *o) {
    static Unk_0203442c dflt;
    BOOL res = TRUE;
    Unk_ov004_02206520 list;
    _ZN18Unk_ov004_022077a419func_ov004_02207c40EP23Unk_ov004_02207854_ListPvi(o, (Unk_ov004_02207854_List *)&list, 0, 0);
    void *grid = data_021c47c4;
    if (func_ov004_0220607c(o)) {
        func_ov004_022061c4();
        func_ov004_0220865c((Self *)o, 0, 0);
        MTX_Inverse43(&data_021f47e0, &data_021f47e0);
        u32 i;
        for (i = 0; i < list.func_ov004_0220652c(); i++) {
            s32 x = list.func_ov004_02206520(i)->x;
            s32 y = list.func_ov004_02206520(i)->y;
            s32 hx = x >> 4;
            s32 hy = y >> 4;
            u16 *cell = func_0204ebd8(grid, hx, hy, x - (hx << 4), y - (hy << 4), 1);
            if (cell != NULL && func_0204b300(cell)) {
                Unk_ov004_02205d8c_Vec v, d;
                func_0204ed8c(&v, x, y);
                v.y = o->unk_78c;
                MTX_MultVec43(&v, &data_021f47e0, &d);
                res &= func_ov004_0220614c(cell, &d);
                if (res != 0) {
                    res = 1;
                } else {
                    res = 0;
                }
            }
        }
        if (res == 0) {
            func_ov004_022061c4();
        }
    }
    list.func_ov004_02206554();
    return res;
}

// @02205eb0
void Unk_ov004_022061b4::func_ov004_02205eb0(Unk_ov004_02205c80_Obj *o) {
    u32 i;
    for (i = 0; i < 4; i++) {
        Unk_ov004_022062f4 *e = func_ov004_022061b4(i);
        if (e->func_ov004_02206310()) {
            Unk_ov004_02205d8c_Vec z, d;
            s32 a, b;
            z.x = 0;
            z.y = 0;
            z.z = 0;
            data_021f47e0 = o->unk_598;
            s32 x, y, c;
            c = e->func_ov004_022062f8()->z;
            y = e->func_ov004_022062f8()->y;
            x = e->func_ov004_022062f8()->x;
            func_020e8528(&data_021f47e0, x, y, c);
            MTX_MultVec43(&z, &data_021f47e0, &d);
            func_0204ee10(&a, &b, &d);
            u32 mgr = func_020b50e8();
            func_02051784(mgr, a, b, e->func_ov004_022062f4(), 1);
        }
    }
    func_ov004_022061c4();
}

// @02205ea0
void Unk_ov004_02205e58::func_ov004_02205ea0() {
    unk_00 = -1;
    unk_04.x = 0;
    unk_04.y = 0;
    unk_04.z = 0;
    unk_02 = 0;
}

// @02205e9c
Unk_ov004_02205e58::~Unk_ov004_02205e58() {
}

// @02205e8c
BOOL Unk_ov004_02205e58::func_ov004_02205e8c() {
    BOOL r = FALSE;
    if (unk_00 != -1) {
        r = TRUE;
    }
    return r;
}

// @02205e84
s32 Unk_ov004_02205e58::func_ov004_02205e84() {
    return unk_00;
}

// @02205e80
Unk_ov004_02205d8c_Vec *Unk_ov004_02205e58::func_ov004_02205e80() {
    return &unk_04;
}

// @02205e78
s32 Unk_ov004_02205e58::func_ov004_02205e78() {
    return unk_02;
}

// @02205e58
BOOL Unk_ov004_02205e58::func_ov004_02205e58(s32 idx, Unk_ov004_02205d8c_Vec *pos, s32 ang) {
    if (idx >= 0 && (u32)idx < 0x1c) {
        unk_00 = idx;
        unk_04.x = pos->x;
        unk_04.y = pos->y;
        unk_04.z = pos->z;
        unk_02 = ang;
        return TRUE;
    }
    return FALSE;
}

// @02205e20
BOOL Unk_ov004_02205e58::func_ov004_02205e20(s32 x, s32 y, s16 z) {
    s32 idx;
    Unk_ov004_02205d8c_Vec pos;
    s16 ang;
    if (func_ov004_02205d8c(&idx, &pos, &ang, x, y, z)) {
        return func_ov004_02205e58(idx, &pos, ang);
    }
    return FALSE;
}

// @02205d8c
extern "C" BOOL func_ov004_02205d8c(s32 *idx, Unk_ov004_02205d8c_Vec *pos, s16 *ang, s32 x, s32 a, s16 b) {
    void *mgr = func_ov004_02235718();
    Unk_ov004_02205c80_Obj *e = func_ov004_022355d8(mgr, x, a, 0);
    s32 i = func_ov004_02235740(func_ov004_0223584c(), e);
    if (e != NULL && i != -1) {
        Unk_ov004_02205d8c_Vec t;
        Unk_ov004_02205d8c_Vec d;
        func_0204ed8c(&t, x, a);
        t.y = e->unk_78c;
        func_ov004_0220865c((Self *)e, 0, 0);
        MTX_Inverse43(&data_021f47e0, &data_021f47e0);
        MTX_MultVec43(&t, &data_021f47e0, &d);
        *idx = i;
        pos->x = d.x;
        pos->y = d.y;
        pos->z = d.z;
        *ang = b - e->unk_8e;
        return TRUE;
    }
    return FALSE;
}

// @02205d7c
void Unk_ov004_02205d5c::func_ov004_02205d7c() {
    unk_01 = -1;
    unk_00 = unk_01;
    unk_02 = 0;
}

// @02205d78
Unk_ov004_02205d5c::~Unk_ov004_02205d5c() {
}

// @02205d5c
void Unk_ov004_02205d5c::func_ov004_02205d5c(s32 a, s32 b) {
    unk_00 = a;
    unk_01 = b;
    if (unk_00 == -1 && unk_01 == -1) {
    } else {
        unk_02 = 1;
    }
}

// @02205d50
void Unk_ov004_02205c44::func_ov004_02205d50() {
    unk_01 = 0;
    unk_00 = unk_01;
}

// @02205d4c
Unk_ov004_02205c44::~Unk_ov004_02205c44() {
}

// @02205cdc
void Unk_ov004_02205c44::func_ov004_02205cdc(Unk_ov004_02205c80_Obj *o) {
    s32 r = 0;
    s32 x, y;
    if (o->unk_768 == 1 || _ZN18Unk_ov004_0224882c19func_ov004_02206f8cEv(o) != 0) {
        if (o->unk_789 == 0) {
            r = 1;
        } else {
            r = 0;
        }
    } else {
        if (_ZN18Unk_ov004_0224882c19func_ov004_0220711cEPiS0_ii(o, &x, &y, r, r)) {
            u32 mgr = func_020b50e8();
            r = func_02052580(x, y, o->unk_284, mgr);
        }
    }
    func_ov004_02205c44(r, 0);
}

// @02205cc4
void Unk_ov004_02205c44::func_ov004_02205cc4(Unk_ov004_02205c80_Obj *o) {
    if (_ZN18Unk_ov004_0224882c19func_ov004_02206f8cEv(o) == 0) {
        unk_00 = unk_01;
    }
}

// @02205c80
void Unk_ov004_02205c44::func_ov004_02205c80(Unk_ov004_02205c80_Obj *o) {
    if (_ZN18Unk_ov004_0224882c19func_ov004_02206f8cEv(o) == 0) {
        s32 x, y;
        if (_ZN18Unk_ov004_0224882c19func_ov004_0220711cEPiS0_ii(o, &x, &y, 0, 0)) {
            func_02052554(x, y, o->unk_284, unk_01, func_020b50e8());
        }
    }
}

// @02205c7c
u8 Unk_ov004_02205c44::func_ov004_02205c7c() {
    return unk_01;
}

// @02205c6c
BOOL Unk_ov004_02205c44::func_ov004_02205c6c() {
    if (unk_00 != unk_01) {
        return TRUE;
    }
    return FALSE;
}

// @02205c54
void Unk_ov004_02205c44::func_ov004_02205c54(s32 flag) {
    func_ov004_02205c44(((unk_01 + 1) & 1) != 0 ? TRUE : FALSE, flag);
}

// @02205c44
void Unk_ov004_02205c44::func_ov004_02205c44(u32 v, s32 flag) {
    if (flag != 0) {
        unk_01 = v;
    } else {
        unk_00 = v;
        unk_01 = unk_00;
    }
}

// @02205c2c
Unk_ov004_02205bcc::Unk_ov004_02205bcc() {
    unk_14 = -1;
    unk_18 = NULL;
}

// @02205c1c
Unk_ov004_02205bcc::~Unk_ov004_02205bcc() {
}

// @02205be4
BOOL Unk_ov004_02205bcc::func_ov004_02205be4(Unk_02056fd8 *res, s32 idx, BOOL on) {
    if (res != NULL) {
        unk_14 = res->func_02057110(idx);
        if (unk_14 != -1) {
            func_020b2374(on);
            unk_18 = res;
            return TRUE;
        }
    }
    return FALSE;
}

// @02205bcc
BOOL Unk_ov004_02205bcc::func_ov004_02205bcc(BOOL on, s32 a, s32 b) {
    return func_020b22c4(on, a, b, 0x800);
}

// @02205b14
void Unk_ov004_02205b14::func_ov004_02205b14() {
    if (unk_14 != -1) {
        func_020b231c(this);
        s32 x = func_020b22ac(this);
        if (x) {
            func_0210622c(unk_18, 1, 0x400);
            s32 col = func_ov004_02205b04();
            s32 r7 = func_020b22b0(x, ((col >> 10) & 0x1f) << 12, 0x1f000);
            s32 g = func_020b22b0(x, (col & 0x1f) << 12, 0x1f000);
            s32 b = func_020b22b0(x, ((col >> 5) & 0x1f) << 12, 0x1f000);
            u32 r7c = (u16)(((r7 >> 12) << 10) | ((g >> 12) | ((b >> 12) << 5)));
            for (s32 i = 0; i < unk_18->unk_18; i++) {
                func_0210612c(unk_18, i, i == unk_14 ? r7c : col);
            }
        } else {
            func_0210622c(unk_18, 0, 0x400);
        }
    }
}

// @02205b04
extern "C" u16 func_ov004_02205b04() {
    return (u16)(data_027e0148.unk_18 >> 16);
}

// @02205ad4
Unk_ov004_022059f4::Unk_ov004_022059f4() {
    unk_54 = 0;
}

// @02205ab8
Unk_ov004_022059f4::~Unk_ov004_022059f4() {}

// @02205a64
u32 Unk_ov004_022059f4::func_ov004_02205a64(u32 a, u32 b) {
    u32 i = 0;
    unk_54 = 0;
    u8 *pf = &unk_54;
    u32 z = 0;
    for (i = 0; i < 3; i++) {
        u32 r = unk_00[i].func_ov004_02205be4((Unk_02056fd8 *)a, (s32)data_ov004_022487b8[i], b);
        u32 t = *pf | r;
        if (t != 0) t = 1; else t = z;
        *pf = t;
    }
    return unk_54;
}

// @02205a1c
u32 Unk_ov004_022059f4::func_ov004_02205a1c(u32 a, u32 b, u32 c) {
    u32 r = 0;
    if (unk_54 != 0) {
        u32 z = 0;
        for (Unk_ov004_02205bcc *p = unk_00; p < (Unk_ov004_02205bcc *)&unk_54; p++) {
            r |= p->func_ov004_02205bcc(a, b, c);
            if (r != 0) r = 1; else r = z;
        }
    }
    return r;
}

// @022059f4
void Unk_ov004_022059f4::func_ov004_022059f4() {
    if (unk_54 != 0) {
        Unk_ov004_02205bcc *p = unk_00;
        Unk_ov004_02205bcc *end = (Unk_ov004_02205bcc *)&unk_54;
        for (; p < end; p++) ((Unk_ov004_02205b14 *)p)->func_ov004_02205b14();
    }
}

// @022059f0
extern "C" void func_ov004_022059f0(void *) {}

// @022059ec
extern "C" void func_ov004_022059ec(void *) {}

// @022059b4
void Unk_ov004_02205994::func_ov004_022059b4(void *p, u32 v) {
    if (p) {
        for (u32 i = 0; i < 4; i++) {
            unk_00[i] = func_02056fcc(p, (u32)data_ov004_022487ec[i]);
        }
        func_ov004_022059b0(v);
    }
}

// @022059b0
void Unk_ov004_02205994::func_ov004_022059b0(u32 v) { unk_04 = v; }

// @02205998
BOOL Unk_ov004_02205994::func_ov004_02205998(s32 v) {
    for (u32 i = 0; i < 4; i++) {
        if (v == unk_00[i]) return TRUE;
    }
    return FALSE;
}

// @02205994
u8 Unk_ov004_02205994::func_ov004_02205994() { return unk_04; }

// @02205954
BOOL Unk_ov004_0224882c::func_ov004_02205954(s32 a) {
    if (_ZN18Unk_ov004_0224882c19func_ov004_022075a4Ei(this)) {
        unk_168 = unk_8e + a;
        func_ov004_022056bc(2);
        func_020943dc(0x4c4);
        return TRUE;
    }
    return FALSE;
}

// @022058c0
BOOL Unk_ov004_0224882c::func_ov004_022058c0(s16 a) {
    Unk_ov004_Vec3 v;
    v.x = 0;
    v.y = 0;
    v.z = 0x2000;
    func_020e93a0(&v, a);
    if (func_ov004_02207598((s32)&v)) {
        Unk_ov004_Vec3 w;
        func_01ffd070(&w, (Vec3 *)unk_5c, &v);
        unk_16c[0] = w.x;
        unk_16c[1] = w.y;
        unk_16c[2] = w.z;
        unk_168 = a;
        func_ov004_022056bc(3);
        if (!Unk_ov004_02205820_Is3d(*(u16 *)((u8 *)this + 0xc))) {
            u32 t = ((s32 (*)(void *))func_ov004_02207650)(this);
            if (t != 0xffff) func_020943dc(t);
        }
        return TRUE;
    }
    return FALSE;
}

// @02205820
BOOL Unk_ov004_0224882c::func_ov004_02205820(s16 a) {
    Unk_ov004_Vec3 v;
    v.x = 0;
    v.y = 0;
    v.z = 0x2000;
    func_020e93a0(&v, (s16)(a + 0x8000));
    if (func_ov004_02207598((s32)&v)) {
        Unk_ov004_Vec3 w;
        func_01ffd070(&w, (Vec3 *)unk_5c, &v);
        unk_16c[0] = w.x;
        unk_16c[1] = w.y;
        unk_16c[2] = w.z;
        unk_168 = a;
        func_ov004_022056bc(4);
        if (!Unk_ov004_02205820_Is3d(*(u16 *)((u8 *)this + 0xc))) {
            u32 t = ((s32 (*)(void *))func_ov004_02207650)(this);
            if (t != 0xffff) func_020943dc(t);
        }
        return TRUE;
    }
    return FALSE;
}

// @02205814
BOOL Unk_ov004_0224882c::func_ov004_02205814() { return func_ov004_022056bc(6); }

// @02205808
BOOL Unk_ov004_0224882c::func_ov004_02205808() { return func_ov004_0220579c(1); }

// @022057f0
BOOL Unk_ov004_0224882c::func_ov004_022057f0() {
    if (func_ov004_02205808() == 0) return TRUE;
    return FALSE;
}

// @022057e4
BOOL Unk_ov004_0224882c::vfunc_a0() { return func_ov004_0220579c(1); }

// @022057c8
BOOL Unk_ov004_0224882c::func_ov004_022057c8() {
    if (vfunc_a0() == 0) return TRUE;
    return FALSE;
}

// @022057bc
BOOL Unk_ov004_0224882c::func_ov004_022057bc() { return func_ov004_0220579c(5); }

// @022057b0
BOOL Unk_ov004_0224882c::func_ov004_022057b0() { return func_ov004_0220579c(7); }

// @0220579c
BOOL Unk_ov004_0224882c::func_ov004_0220579c(s32 s) {
    if (unk_530 == s) return TRUE;
    return FALSE;
}

// data
char data_ov004_02248710[] = "mn_m";
// data
char data_ov004_02248718[] = "mn_m0";
// data
char data_ov004_02248720[] = "mn_m1";
// data
char *data_ov004_022487b8[3] = {data_ov004_02248710, data_ov004_02248718, data_ov004_02248720};
// data
char data_ov004_022486fc[] = "v";
// data
char data_ov004_02248704[] = "v1";
// data
char data_ov004_02248708[] = "v2";
// data
char data_ov004_02248700[] = "v3";
// data
char *data_ov004_022487ec[4] = {data_ov004_022486fc, data_ov004_02248704, data_ov004_02248708, data_ov004_02248700};

// @022056bc
BOOL Unk_ov004_0224882c::func_ov004_022056bc(s32 idx) {
    static Unk_ov004_0224882c_Fn tbl[9] = {
        &Unk_ov004_0224882c::func_ov004_0220552c, &Unk_ov004_0224882c::func_ov004_022053bc,
        &Unk_ov004_0224882c::func_ov004_022052f4, &Unk_ov004_0224882c::func_ov004_022051a4,
        &Unk_ov004_0224882c::func_ov004_022050c0, &Unk_ov004_0224882c::func_ov004_0220507c,
        &Unk_ov004_0224882c::func_ov004_02205004, &Unk_ov004_0224882c::func_ov004_022053bc,
        &Unk_ov004_0224882c::func_ov004_02204f8c,
    };
    if (idx < 9) {
        if ((this->*tbl[idx])()) {
            unk_530 = idx;
            return TRUE;
        }
    }
    return FALSE;
}

// @022055ec
void Unk_ov004_0224882c::func_ov004_022055ec() {
    static Unk_ov004_0224882c_Fn tbl[9] = {
        (Unk_ov004_0224882c_Fn)&Unk_ov004_0224882c::func_ov004_022053c0, (Unk_ov004_0224882c_Fn)&Unk_ov004_0224882c::func_ov004_022053b8,
        (Unk_ov004_0224882c_Fn)&Unk_ov004_0224882c::func_ov004_0220521c, (Unk_ov004_0224882c_Fn)&Unk_ov004_0224882c::func_ov004_02205138,
        (Unk_ov004_0224882c_Fn)&Unk_ov004_0224882c::func_ov004_022050b8, (Unk_ov004_0224882c_Fn)&Unk_ov004_0224882c::func_ov004_0220500c,
        (Unk_ov004_0224882c_Fn)&Unk_ov004_0224882c::func_ov004_02204f90, (Unk_ov004_0224882c_Fn)&Unk_ov004_0224882c::func_ov004_022053b8,
        (Unk_ov004_0224882c_Fn)&Unk_ov004_0224882c::func_ov004_02204f24,
    };
    if (unk_530 < 9) (this->*tbl[unk_530])();
}

// @0220552c
BOOL Unk_ov004_0224882c::func_ov004_0220552c() {
    unk_158 = 0x555;
    unk_14c = 0;
    unk_150 = 0;
    unk_154 = 0;
    unk_15c = 0;
    unk_15e = 0;
    unk_160 = 0x2710;
    unk_164 = 0x800;
    if (func_02095204(4)) {
        Unk_ov004_Vec3 pos;
        u16 t;
        func_ov004_022088c0(this, &pos);
        if (unk_284 == 0) pos.y = 0;
        else pos.y = func_ov004_02234f6c(&pos);
        pos.y += 0x800;
        t = func_0204b248(unk_280, 0);
        Unk_ov004_Vec3 c;
        c.x = pos.x;
        c.y = pos.y;
        c.z = pos.z;
        return func_ov004_0222c570(&t, &c);
    }
    return TRUE;
}

// @022053c0
void Unk_ov004_0224882c::func_ov004_022053c0() {
    func_020e761c(&unk_158, 0x1000, 0x88);
    if (unk_15c < 0xf) {
        unk_15c = unk_15c + 1;
        unk_76c = 0;
        if (unk_15c == 0xc) func_020943dc(0x4c7);
        if (unk_15c == 0xf) {
            Unk_ov004_053c0_Buf buf;
            func_ov004_022088c0(this, (Vec3 *)&buf);
            func_ov004_02206fe0((Unk_0203e4f0_Vec *)&buf);
        }
    } else if (unk_15c < 0x11) {
        unk_15c = unk_15c + 1;
    } else {
        s16 r6 = unk_15e;
        u16 r4;
        u16 *q = (u16 *)&unk_15e;
        *q = *q + unk_160;
        r4 = *q;
        s32 m = func_01ffcb0c(unk_164, data_02135f44[((u16)(volatile s16)r4 >> 4) * 2]);
        s32 t = 0x1000;
        unk_150 = m + t;
        s32 *pp = &unk_14c;
        *pp = t - m;
        unk_154 = *pp;
        s32 c = func_01ffcb0c(data_02135f44[((u16)r6 >> 4) * 2], data_02135f44[((u16)(volatile s16)r4 >> 4) * 2]);
        if (c < 0) {
            unk_164 = func_01ffcb0c(unk_164, 0x4cd);
            unk_160 = unk_160 + 0x960;
        }
        if (unk_158 == 0x1000) {
            s32 v = unk_164;
            if (v < 0) v = -v;
            if (v < 0x52) func_ov004_022056bc(1);
        }
        switch (unk_76c) {
        case 0:
            func_ov004_02206fa0(0);
            func_ov004_02206fa0(2);
            break;
        case 2:
            func_ov004_02206fa0(1);
            func_ov004_02206fa0(3);
            break;
        }
        unk_76c = unk_76c + 1;
    }
}

// @022053bc
BOOL Unk_ov004_0224882c::func_ov004_022053bc() { return TRUE; }

// @022053b8
BOOL Unk_ov004_0224882c::func_ov004_022053b8() {}

// @022052f4
BOOL Unk_ov004_0224882c::func_ov004_022052f4() {
    ((Unk_ov004_022061b4 *)unk_188)->func_ov004_02205f58((Unk_ov004_02205c80_Obj *)this);
    s32 d = (s16)(unk_168 - unk_8e);
    ((Unk_ov004_022077a4 *)this)->func_ov004_02207854(0, d);
    if (d < 0) d = 1; else d = 0;
    VCALL98(this, d);
    if (unk_284 == 0 && unk_784 == 1) {
        Unk_ov004_02206520 v;
        ((Unk_ov004_022077a4 *)this)->func_ov004_02207c40((Unk_ov004_02207854_List *)&v, 0, 0);
        for (u32 i = 0; i < v.func_ov004_0220652c(); i++) {
            void *mgr = func_ov004_02235718();
            Unk_ov004_02206520_Ent *e = v.func_ov004_02206520(i);
            Unk_ov004_0224882c *o = (Unk_ov004_0224882c *)func_ov004_022355d8(mgr, e->x, v.func_ov004_02206520(i)->y, 1);
            if (o) VCALL98(o, d);
        }
        v.func_ov004_02206554();
    }
    return TRUE;
}

// @0220521c
BOOL Unk_ov004_0224882c::func_ov004_0220521c() {
    s32 d = (s16)(unk_168 - unk_8e);
    BOOL neg;
    if (d < 0) neg = TRUE; else neg = FALSE;
    VCALL9C(this, neg);
    if (unk_284 == 0 && unk_784 == 1) {
        Unk_ov004_02206520 v;
        ((Unk_ov004_022077a4 *)this)->func_ov004_02207c40((Unk_ov004_02207854_List *)&v, 0, 0);
        for (u32 i = 0; i < v.func_ov004_0220652c(); i++) {
            void *mgr = func_ov004_02235718();
            Unk_ov004_02206520_Ent *e = v.func_ov004_02206520(i);
            Unk_ov004_0224882c *o = (Unk_ov004_0224882c *)func_ov004_022355d8(mgr, e->x, v.func_ov004_02206520(i)->y, 1);
            if (o) VCALL9C(o, neg);
        }
        v.func_ov004_02206554();
    }
    if (func_020e7530(&unk_8e, unk_168, 0x700)) {
        func_ov004_022056bc(1);
        ((Unk_ov004_022061b4 *)unk_188)->func_ov004_02205eb0((Unk_ov004_02205c80_Obj *)this);
    }
}

// @022051a4
BOOL Unk_ov004_0224882c::func_ov004_022051a4() {
    Unk_ov004_0224882c_Buf buf;
    func_020e9960(&buf, unk_16c, unk_5c);
    ((Unk_ov004_022061b4 *)unk_188)->func_ov004_02205f58((Unk_ov004_02205c80_Obj *)this);
    ((Unk_ov004_022077a4 *)this)->func_ov004_02207854(&buf, 0);
    void *g = func_ov004_02233bf4();
    if (g) {
        if (func_ov004_02233a48(g, unk_24c, unk_5c, unk_168)) {
            VCALL94(this, 1);
            func_ov004_02207038(0);
            return TRUE;
        }
    }
    return FALSE;
}

// @02205138
void Unk_ov004_0224882c::func_ov004_02205138() {
    Unk_ov004_0224882c_Buf buf;
    void *g = func_ov004_02233bf4();
    if (g) {
        if (func_ov004_022339cc(g, unk_24c, buf.v)) {
            unk_5c[0] = unk_16c[0];
            unk_5c[1] = unk_16c[1];
            unk_5c[2] = unk_16c[2];
            func_ov004_022056bc(1);
            ((Unk_ov004_022061b4 *)unk_188)->func_ov004_02205eb0((Unk_ov004_02205c80_Obj *)this);
        } else {
            unk_5c[0] = buf.v[0];
            unk_5c[1] = buf.v[1];
            unk_5c[2] = buf.v[2];
        }
    }
}

// @022050c0
BOOL Unk_ov004_0224882c::func_ov004_022050c0() {
    Unk_ov004_0224882c_Buf buf;
    func_020e9960(&buf, unk_16c, unk_5c);
    ((Unk_ov004_022061b4 *)unk_188)->func_ov004_02205f58((Unk_ov004_02205c80_Obj *)this);
    ((Unk_ov004_022077a4 *)this)->func_ov004_02207854(&buf, 0);
    void *g = func_ov004_02233bf4();
    if (g) {
        if (func_ov004_02233a20(g, unk_24c, unk_5c, unk_168)) {
            VCALL94(this, 0);
            func_ov004_02207038(1);
            return TRUE;
        }
    }
    return FALSE;
}

// @022050b8
void Unk_ov004_0224882c::func_ov004_022050b8() {
    func_ov004_02205138();
}

// @0220507c
BOOL Unk_ov004_0224882c::func_ov004_0220507c() {
    Unk_ov004_0224882c_Buf buf;
    vfunc_90();
    unk_76c = 0;
    func_ov004_022088c0(this, (Vec3 *)&buf);
    func_ov004_02234490(&buf);
    func_020943dc(0x4c8);
    return TRUE;
}

// @0220500c
void Unk_ov004_0224882c::func_ov004_0220500c() {
    Unk_ov004_0224882c_Buf buf;
    func_020e761c(&unk_14c, 0, 0x400);
    unk_150 = unk_154 = unk_14c;
    if (unk_14c == 0) {
        func_020ed188(this);
    }
    if (unk_76c == 1) {
        func_ov004_022088c0(this, (Vec3 *)&buf);
        func_ov004_02206fe0((Unk_0203e4f0_Vec *)&buf);
    }
    unk_76c++;
}

// @02205004
BOOL Unk_ov004_0224882c::func_ov004_02205004() {
    return func_ov004_0220507c();
}

// @02204f90
void Unk_ov004_0224882c::func_ov004_02204f90() {
    Unk_ov004_0224882c_Buf buf;
    func_020e761c(&unk_14c, 0, 0x400);
    unk_150 = unk_154 = unk_14c;
    if (unk_14c == 0) {
        func_ov004_022056bc(7);
    } else if (unk_76c == 1) {
        func_ov004_022088c0(this, (Vec3 *)&buf);
        func_ov004_02206fe0((Unk_0203e4f0_Vec *)&buf);
    }
    unk_76c++;
}

// @02204f8c
BOOL Unk_ov004_0224882c::func_ov004_02204f8c() {
    return TRUE;
}

// @02204f24
// SKIPPED (out of range 35670208): void Unk_ov004_0224860c::vfunc_68()
// SKIPPED (out of range 35670388): void Unk_ov004_0224860c::vfunc_64()
// SKIPPED (out of range 35670492): void Unk_ov004_0224860c::vfunc_60()
// SKIPPED (out of range 35670496): void Unk_ov004_0224860c::func_ov004_022049e0()
// SKIPPED (out of range 35670544): BOOL Unk_ov004_0224860c::func_ov004_02204a10()
// SKIPPED (out of range 35670548): void Unk_ov004_0224860c::func_ov004_02204a14()
// SKIPPED (out of range 35670584): BOOL Unk_ov004_0224860c::func_ov004_02204a38()
// SKIPPED (out of range 35670656): void Unk_ov004_0224860c::func_ov004_02204a80()
// SKIPPED (out of range 35670660): BOOL Unk_ov004_0224860c::func_ov004_02204a84()
// SKIPPED (out of range 35670664): void Unk_ov004_0224860c::func_ov004_02204a88()
// SKIPPED (out of range 35670788): BOOL Unk_ov004_0224860c::func_ov004_02204b04(s32 m)
// SKIPPED (out of range 35670928): void Unk_ov004_0224860c::vfunc_4c(u32 a, u8 b)
// SKIPPED (out of range 35670964): BOOL Unk_ov004_0224860c::vfunc_48(void *a)
// SKIPPED (out of range 35671056): void Unk_ov004_0224860c::func_ov004_02204c10()
// SKIPPED (out of range 35671244): BOOL Unk_ov004_0224860c::func_ov004_02204ccc()
// SKIPPED (out of range 35671260): void Unk_ov004_0224860c::func_ov004_02204cdc()
// SKIPPED (out of range 35671344): BOOL Unk_ov004_0224860c::vfunc_0c()
// SKIPPED (out of range 35671360): BOOL Unk_ov004_0224860c::vfunc_24()
// SKIPPED (out of range 35671364): BOOL Unk_ov004_0224860c::vfunc_18()
// SKIPPED (out of range 35671396): BOOL Unk_ov004_0224860c::vfunc_00()
// SKIPPED (out of range 35671436): Unk_ov004_0224860c::~Unk_ov004_0224860c()
// SKIPPED (out of range 35671584): Unk_ov004_0224860c::Unk_ov004_0224860c()
// SKIPPED (out of range 35671676): extern "C" Unk_ov004_0224860c *func_ov004_02204e7c()
// ================================================================ Unk_ov004_0224882c
void Unk_ov004_0224882c::func_ov004_02204f24() {
    if (unk_77c != 0x23 && unk_77c != 0x24 && unk_77c != 0x25) {
        unk_8e += 0x400;
    }
    func_ov004_022087a4(this);
    s32 v = func_01ffc5a4(func_02052cf4(), 0x64000) >> 2;
    unk_14c = unk_150 = unk_154 = v;
}

