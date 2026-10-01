#include "types.h"

struct Unk_ov004_0221b6d4_Out {
    u32 unk_00;
    u8 unk_04;
};

#include "types.h"

// Library base class (same as Unk_020d8c7c.h, but vfunc_08 takes the s32 the vtable symbol names).
class Unk_020d8c7c_Base {
public:
    static void *operator new(unsigned long size);
    static void operator delete(void *ptr);

    Unk_020d8c7c_Base();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual void vfunc_08(s32 v);
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_14();
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

struct Unk_0201bc1c;

struct Unk_020aa3b8 {
    s32 func_020aa514();
};

struct Unk_020660f8 {
    u8 pad_00[4];
    s32 unk_04;
    s32 unk_08;
    void func_02067a84(u8 *a, void *b);
};

class Unk_020d7714 {
public:
    Unk_020d7714();
    virtual ~Unk_020d7714();
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
    virtual void vfunc_38(u32 v);
    virtual void vfunc_3c();
    virtual void vfunc_40();
    virtual void vfunc_44();
    virtual void vfunc_48();
    virtual void vfunc_50();
    virtual void vfunc_54();
    virtual void vfunc_58();
    virtual void vfunc_5c();
    virtual void vfunc_60();
    virtual void vfunc_64_alt();
    virtual void vfunc_64();
    virtual void vfunc_68();
    virtual void vfunc_6c();
    virtual void vfunc_70();
    virtual void vfunc_74();
    virtual void vfunc_78(void *arg);
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_88();
    void *func_02015aac();
    void func_02015ab0(u32 p);
    Unk_020aa3b8 *func_02015a5c();
    u8 pad_04[0x1a];
    u8 unk_1e;
    u8 pad_1f[0x3c - 0x1f];
    Unk_020660f8 *unk_3c;
    u8 pad_40[0xac - 0x40];
};

class Unk_020ddcf0 : public Unk_020d7714 {
public:
    virtual void vfunc_0c();
    virtual void vfunc_10();
    virtual void vfunc_1c();
    virtual void vfunc_20();
    virtual void vfunc_24();
    virtual void vfunc_28();
    virtual void vfunc_2c();
    virtual void vfunc_30();
    virtual void vfunc_64();
    virtual void vfunc_68();
    virtual void vfunc_70();
    virtual void vfunc_74();
};

class Unk_020d7710 : public Unk_020ddcf0 {
public:
    Unk_020d7710();
    virtual ~Unk_020d7710();
    virtual void vfunc_50();
    virtual void vfunc_54();
    virtual void vfunc_58();
    virtual void vfunc_5c();
    virtual void vfunc_60();
    virtual void vfunc_64_alt();
    virtual void vfunc_88();
};

class Unk_020d8b38 : public Unk_020d7710 {
public:
    Unk_020d8b38();
    virtual ~Unk_020d8b38();
};

#define MEMBER(name, size) \
    struct name { \
        u8 unk_00[size]; \
        name(); \
        ~name(); \
    }
struct Unk_020dbd74 {
    u8 pad_00[0xa4];
    u32 unk_a4;
    u32 unk_a8;
    u32 unk_ac;
    u8 pad_b0[8];
    u8 unk_b8[0x2a0 - 0xec - 0xb8];
    Unk_020dbd74();
    ~Unk_020dbd74();
};
MEMBER(Unk_0201ad3c, 0xc);
MEMBER(Unk_02019dd8, 0x334 - 0x2ac);
MEMBER(Unk_02016350, 0x1c);
struct Unk_0201accc {
    u8 unk_00[0x3a8 - 0x350];
    Unk_0201accc();
    ~Unk_0201accc();
};
struct Unk_0201a8bc { u8 unk_00[2]; Unk_0201a8bc(); };
struct Unk_0201ad18 {
    u8 unk_00[6];
    Unk_0201ad18();
};
MEMBER(Unk_0201a794, 0x418 - 0x3b0);
MEMBER(Unk_0201a194, 8);
MEMBER(Unk_0201a13c, 0x49c - 0x420);
MEMBER(Unk_02032238, 0x30);
struct Unk_02088d00 {
    u8 pad_00[0x1c];
    u32 unk_1c;
    u8 pad_20[0x514 - 0x4cc - 0x20];
    Unk_02088d00();
    ~Unk_02088d00();
};
struct Unk_020135e4 {
    u8 pad_00[8];
    u8 unk_08;
    u8 pad_09[2];
    u8 unk_0b;
    Unk_020135e4();
    ~Unk_020135e4();
};
struct Unk_02019858 {
    Unk_02019858();
    ~Unk_02019858();
    void func_020196b4(u32 a, u32 b, u32 c, u32 s0, u32 s1, u32 s2, u32 s3, u32 s4, u32 s5, u32 s6);
    u8 unk_00[0x618 - 0x564];
};
struct Unk_02014254 {
    Unk_02014254();
    ~Unk_02014254();
    BOOL func_02014220();
    void func_020141b4(u32 a, u32 b, u32 c);
    u8 unk_00[0x28];
};
struct Unk_020e06dc { u8 unk_00[8]; Unk_020e06dc(); };

struct Unk_020f4080 {
    u8 unk_00[0x558 - 0x514];
    Unk_020f4080();
    ~Unk_020f4080();
};

class Unk_020d5d84 : public Unk_020d8c7c_Base {
public:
    virtual BOOL vfunc_14();
    virtual BOOL vfunc_20();
    virtual BOOL vfunc_28();
    virtual BOOL vfunc_2c();
};

struct Unk_020d77a4_Vec3;

class Unk_020d9670 : public Unk_020d5d84 {
public:
    Unk_020d9670();
    virtual ~Unk_020d9670();
    virtual BOOL vfunc_1c();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(u32 idx, u32 v);
    virtual void vfunc_50();
    virtual void vfunc_54(void *p);
    virtual void vfunc_58(void *p);
    u8 pad_04[0x58];
    s32 unk_5c, unk_60, unk_64;
    u8 pad_68[0x8e - 0x68];
    s16 unk_8e;
    u8 pad_90[4];
    s16 unk_94;
    u8 pad_96[2];
    s32 unk_98;
    u8 pad_9c[0xea - 0x9c];
};

class Unk_020d77a4 : public Unk_020d9670 {
public:
    Unk_020d77a4() : unk_ea(0xfff1) {}
    virtual ~Unk_020d77a4();
    virtual void vfunc_08(s32 v);
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_24();
    virtual BOOL vfunc_30();
    virtual void vfunc_5c(Unk_020d77a4_Vec3 *v);
    virtual void vfunc_60();
    virtual void vfunc_64();
    virtual BOOL vfunc_68();
    virtual u8 *vfunc_6c();
    virtual u8 *vfunc_70();
    virtual void vfunc_74(u32 v);
    virtual void vfunc_78();
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();
    virtual void vfunc_88();
    virtual void vfunc_8c();
    virtual void vfunc_90();
    virtual void vfunc_94();
    virtual void vfunc_98();
    virtual void vfunc_9c();
    virtual void vfunc_a0();
    virtual void vfunc_a4();
    virtual s32 vfunc_a8();

    void func_0201bc28(Unk_0201bc1c *p);
    void *func_0201bc4c(u32 v);

    u16 unk_ea;
    Unk_020dbd74 unk_ec;
    Unk_0201ad3c unk_2a0;
    Unk_02019dd8 unk_2ac;
    Unk_02016350 unk_334;
    Unk_0201accc unk_350;
    Unk_0201a8bc unk_3a8;
    Unk_0201ad18 unk_3aa;
    Unk_0201a794 unk_3b0;
    Unk_0201a194 unk_418;
    Unk_0201a13c unk_420;
    Unk_02032238 unk_49c;
    Unk_02088d00 unk_4cc;
    Unk_020f4080 unk_514;
    Unk_020135e4 unk_558;
    Unk_02019858 unk_564;
    Unk_02014254 unk_618;
};

class Unk_020d8bc8 : public Unk_020d77a4 {
public:
    Unk_020d8bc8() {}
    virtual ~Unk_020d8bc8();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_10();
    virtual void vfunc_74(u32 v);
    virtual void vfunc_78();
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();
    virtual s32 vfunc_a8();

    Unk_020e06dc unk_640;
    s32 unk_648;
    s32 unk_64c;
    u8 unk_650;
};

struct Unk_ov004_0221b954_Vec {
    s32 x, y, z;
};

struct Unk_ov004_0221b954_Global {
    u8 pad_00[0x64];
    u32 unk_64;
};

struct Unk_ov004_0221cc88_Obj {
    u8 pad_00[0x14];
    u32 unk_14;
};

struct Unk_ov004_0224d0a0_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

class Unk_ov004_0224d0a0;
class Unk_ov004_0224d010;

typedef void (Unk_ov004_0224d010::*Unk_ov004_0224d010_Fn)();
typedef BOOL (Unk_ov004_0224d0a0::*Unk_ov004_0224d0a0_Fn)();

struct Unk_ov004_0224d010_Ent {
    Unk_ov004_0224d010_Fn fn;
    u8 flag;
    u8 pad[3];
};

struct Unk_ov004_0224d0a0_Ent {
    Unk_ov004_0224d0a0_Fn fn1;
    Unk_ov004_0224d0a0_Fn fn2;
};

#define func_02067a84 _ZN12Unk_020660f813func_02067a84EPhPv
#define func_02015aac _ZN12Unk_020d771413func_02015aacEv
#define func_02015ab0 _ZN12Unk_020d771413func_02015ab0Ej
#define func_020196b4 _ZN12Unk_0201985813func_020196b4Ejiiissiitt
#define func_02014220 _ZN12Unk_02013b1013func_02014220Ev
#define func_020141b4 _ZN12Unk_02013b1013func_020141b4Essh
#define func_0201bc28 _ZN12Unk_020d77a413func_0201bc28EP12Unk_0201bc1c
#define func_0201bc4c _ZN12Unk_020d77a413func_0201bc4cEj
#define func_0201b08c _ZN12Unk_020d77a48vfunc_4cEi
#define func_0201b9fc _ZN12Unk_020d77a413func_0201b9fcEjjjz
#define func_0201ba88 _ZN12Unk_020d77a413func_0201ba88Ev
#define func_0201b9e8 _ZN12Unk_020d77a413func_0201b9e8Eii
#define func_0201b9bc _ZN12Unk_020d77a413func_0201b9bcEv
#define func_0201bcbc _ZN12Unk_020d77a413func_0201bcbcEPS_
#define func_0201bd9c _ZN12Unk_020d77a413func_0201bd9cEi
#define func_0203e468 _ZN12Unk_020d967013func_0203e468Ei
#define func_02015e48 _ZN12Unk_02015b8c13func_02015e48Ej
#define func_0201a6c0 _ZN12Unk_0201a33413func_0201a6c0EhiiP17Unk_0201a334_Vec3iih
#define func_0201a8d0 _ZN12Unk_0201a8c413func_0201a8d0Eiiii
#define func_0201a8c4 _ZN12Unk_0201a8c413func_0201a8c4Eh
#define func_0201ad2c _ZN12Unk_0201ad2013func_0201ad2cEi
#define func_0201ad30 _ZN12Unk_0201ad2013func_0201ad30Ei
#define func_0201ad34 _ZN12Unk_0201ad2013func_0201ad34Ei
#define func_020197a8 _ZN12Unk_0201985813func_020197a8Ev
#define func_02019790 _ZN12Unk_0201985813func_02019790Ev
#define func_020195c8 _ZN12Unk_0201985813func_020195c8Eiijtt
#define func_0202e548 _ZN12Unk_020d8bc813func_0202e548Eii
#define func_0209868c _ZN12Unk_0209865c13func_0209868cEv
#define func_0209888c _ZN12Unk_0209865c13func_0209888cEv
#define func_02087c4c _ZN12Unk_02087ad813func_02087c4cEv
#define func_02087c3c _ZN12Unk_02087ad813func_02087c3cEj
#define func_02087c50 _ZN12Unk_02087ad813func_02087c50Ej
#define func_02087c54 _ZN12Unk_02087ad813func_02087c54Ev
#define func_0209411c _ZN12Unk_020940a013func_0209411cEv
#define func_02072e44 _ZN12Unk_020cbb1813func_02072e44Ev
#define func_02072e88 _ZN12Unk_020cbb1813func_02072e88Ei
#define func_02002d3c _ZN12Unk_020d5d8413func_02002d3cEjPS_
#define func_02002cf8 _ZN12Unk_020d5d8413func_02002cf8EPvS0_S0_S0_S0_
#define func_ov068_0226c334 _ZN18Unk_ov068_0227081019func_ov068_0226c334Ev
#define func_020539a0 _ZN12Unk_020dbd7413func_020539a0Ev
#define func_02056520 _ZN12Unk_020dbe6c13func_02056520Ei

extern "C" {
extern Unk_ov004_0221b954_Global *data_020cbb18;
extern s32 data_020c6d1c;
extern u16 data_020c6cc8;
extern Unk_ov004_0221b954_Vec data_021f4880;
extern u32 data_ov004_0224cf54[];
extern u8 data_ov004_0224cec8[];
extern u8 data_ov004_0224cf8c[];
extern u8 data_ov004_0224cfbc[];
extern Unk_ov004_0224d0a0 *data_ov004_02250a9c;
extern Unk_ov004_0224d010_Ent data_ov004_0224cfd8[];
extern Unk_ov004_0224d0a0_Ent data_ov004_02250aa0[];
// 0x02250aa8 is a label inside the 0x80-byte table (second ptmf of entry 0)
#define data_ov004_02250aa8 ((Unk_ov004_0224d0a0_Ent *)((u8 *)data_ov004_02250aa0 + 8))
extern const u32 data_ov004_02240120[];
extern const u32 data_ov004_02240128[];

// main / other-module callees (self first)
void func_0201b08c(void *self, u32 a, u32 b);
s32 func_0201b9fc(void *self, s32 a, s32 b, s32 c);
BOOL func_0201ba88(void *self);
s32 func_0201b9e8(void *self, s32 *a, s32 *b);
BOOL func_0201b9bc(void *self);
void func_0201bc28(void *self, void *p);
u32 func_0201bc4c(void *self, u32 id);
s32 func_0201bcbc(void *self, void *p);
void func_0201bd9c(void *self, s32 v);
void func_0203e468(void *self, s32 v);
void func_02015ab0(void *self, u32 v);
void *func_02015aac(void *self);
void func_02015e48(void *self, u32 v);
void func_0201a6c0(void *self, u8 a, s32 b, s32 c, Unk_ov004_0221b954_Vec *v, s32 d, s32 e, u8 f);
void func_0201a8d0(void *self, s32 a, s32 b, s32 c, s32 d);
void func_0201a8c4(void *self, u8 a);
void func_0201ad2c(void *self, s32 a);
void func_0201ad30(void *self, s32 a);
void func_0201ad34(void *self, s32 a);
s32 func_0201ade4(s32 p, s32 v);
void func_0201adc8(s32 p, s32 v);
s32 func_020197a8(void *self);
s32 func_02019790(void *self);
void func_020196b4(void *self, u32 a, s32 b, s32 c, s32 d, s16 e, s16 f, s32 g, s32 h, u16 i, u16 j);
void func_020195c8(void *self, s32 a, s32 b, u32 c, u16 d, u16 e);
s32 func_02014220(void *self);
void func_020141b4(void *self, s32 a, s32 b, s32 c);
void func_0202e548(void *self, s32 a, s32 b);
void func_02067a84(void *self, void *p, u32 d);
void *func_0209750c(void);
void *func_0209868c(void *p);
void *func_0209888c(void *p);
s32 func_02087c4c(void *p);
void func_02087c3c(void *p, u32 v);
void func_02087c50(void *self, u32 v);
u32 func_02087c54(void *self);
s32 func_0209411c(void *p);
void func_02003ddc(void *p, u32 a, u32 b, u32 c);
void func_0203a250();
void func_02034d70(u32 a);
void func_02034d84(u32 a);
void func_02034dd0(u32 a, u32 b, u32 c);
void func_02034e10(u32 a, u32 b, u32 c, u32 d);
s32 func_02063b8c(s32 n);
s32 func_0202e1cc(...);
s32 func_020a032c(void);
s32 func_020a62a0(void);
s32 func_02072e44(void *p);
s32 func_02072e88(void *p, u32 i);
s16 *func_0209c37c(s32 a, s32 b);
void *func_02002d3c(s32 a, s32 b);
void func_02002cf8(s32 a, s32 b, const void *c, const void *d, s32 e);
s32 func_ov068_0226c334(void *p);
s32 func_02095154(s32 a, s32 b);
void func_0208a598(void);
void func_0208a58c(void);
void func_0203d67c(void *p);
void func_0203d6cc(void *p, s32 a);
void func_020553cc(void *p, void *q, s32 n);
void func_020539a0(void *p);
void func_02056520(void *p, s32 n);
s32 func_02034d2c(void);
s32 func_020e77cc(s32 a, s32 b, s32 c);
u8 *func_02003bbc(void);
// other ov004 units
void func_ov004_022247fc();
void func_ov004_022265e4();
s32 func_ov004_02226520();
void func_ov004_02226644();
void func_ov004_02226624();
void func_ov004_022266e4();
void func_ov004_02226704();
s32 func_ov004_022265c8();
void func_ov004_02226604();
void func_ov004_02224820();
s32 func_ov004_02226574();
void func_ov004_022266a4();
void func_ov004_02226684();
void func_ov004_022266c4();
void func_ov004_02226664();
void func_ov004_02224a38(s32 a);
void func_ov004_02226860(void);
}

class Unk_ov004_0224d010 : public Unk_020d7710 {
public:
    Unk_ov004_0224d010();
    virtual ~Unk_ov004_0224d010();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_70();
    virtual void vfunc_78(void *arg);
    virtual void vfunc_80();
    virtual void vfunc_88();

    void func_ov004_0221c304();
    void func_ov004_0221c608();
    void func_ov004_0221c794();
    void func_ov004_0221cbe4(s32 v);
    void func_ov004_0221cf0c(s32 v);

    /* 0xac */ s32 unk_ac;
    /* 0xb0 */ Unk_ov004_0224d0a0 *unk_b0;
    /* 0xb4 */ u8 unk_b4;
    /* 0xb5 */ u8 unk_b5;
    /* 0xb6 */ u8 pad_b6[2];
};

class Unk_ov004_0224d0a0 : public Unk_020d8bc8 {
public:
    Unk_ov004_0224d0a0() {}
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_24();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(u32 idx, u32 v);
    virtual BOOL vfunc_68();
    virtual u8 *vfunc_6c();
    virtual u8 *vfunc_70();

    BOOL func_ov004_0221cf78();
    BOOL func_ov004_0221cf7c();
    BOOL func_ov004_0221cf80();
    BOOL func_ov004_0221cfd8();
    BOOL func_ov004_0221d010();
    BOOL func_ov004_0221d0ac();
    BOOL func_ov004_0221d0e4();
    BOOL func_ov004_0221d104();
    BOOL func_ov004_0221d108();
    BOOL func_ov004_0221d138();
    BOOL func_ov004_0221d174();
    BOOL func_ov004_0221d178();
    BOOL func_ov004_0221d17c();
    BOOL func_ov004_0221d20c();
    BOOL func_ov004_0221d278();
    BOOL func_ov004_0221d340();
    void func_ov004_0221d37c(s32 idx);

    /* 0x654 */ s32 unk_654;
    /* 0x658 */ Unk_ov004_0224d010 unk_658;
    /* 0x710 */ s16 unk_710;
    /* 0x712 */ u8 pad_712[2];
    /* 0x714 */ u8 unk_714[0x30];
    /* 0x744 */ u8 unk_744[0x30];
    /* 0x774 */ s32 unk_774;
    /* 0x778 */ u16 unk_778;
    /* 0x77a */ u8 unk_77a;
    /* 0x77b */ u8 pad_77b;
};

struct Unk_ov004_SceneEntry {
    Unk_ov004_0224d0a0 *(*factory)();
    u16 a, b;
    s32 c, d, e, f;
};

extern "C" Unk_ov004_0224d0a0 *func_ov004_0221d630() { return new Unk_ov004_0224d0a0; }

BOOL Unk_ov004_0224d0a0::vfunc_04() {
    if (Unk_020d8bc8::vfunc_04() == 0) {
        return FALSE;
    }
    func_0201bc28(this, &unk_658);
    unk_658.func_ov004_0221cf0c((s32)this);
    func_0201bd9c(this, 0x100);
    func_0203e468(this, 0x5000);
    func_0201a8d0(&unk_350, 2, 0x166, 0xcc, 0x133);
    func_0201ad34(&unk_2a0, 0xf2);
    func_0201ad30(&unk_2a0, 0xf4);
    func_0201ad2c(&unk_2a0, 0xf4);
    return TRUE;
}

BOOL Unk_ov004_0224d0a0::vfunc_00() {
    if (Unk_020d8bc8::vfunc_00() == 0) {
        return FALSE;
    }
    data_ov004_02250a9c = this;
    unk_710 = unk_8e;
    unk_4cc.unk_1c |= 2;
    if (func_02072e44(data_020cbb18) != 0 || *func_0209c37c(0, 0x4a) != 0) {
        if (func_020a62a0() != 0) {
            func_ov004_0221d37c(0);
        } else {
            func_ov004_0221d37c(5);
        }
    } else {
        func_ov004_0221d37c(0);
    }
    if (func_02072e88(data_020cbb18, data_020cbb18->unk_64) == 0) {
        func_02002cf8(0x66, 0xd01d, data_ov004_02240128, data_ov004_02240120, 0);
    }
    return TRUE;
}

BOOL Unk_ov004_0224d0a0::vfunc_0c() {
    if (Unk_020d8bc8::vfunc_0c() == 0) {
        return FALSE;
    }
    data_ov004_02250a9c = 0;
    return TRUE;
}

BOOL Unk_ov004_0224d0a0::vfunc_24() {
    if (Unk_020d77a4::vfunc_24() == 0) {
        return FALSE;
    }
    func_020553cc(&unk_ec, unk_714, 0xe);
    func_020553cc(&unk_ec, unk_744, 0xb);
    func_ov004_02226860();
    return TRUE;
}

u8 *Unk_ov004_0224d0a0::vfunc_6c() {
    return data_ov004_0224cfbc;
}

u8 *Unk_ov004_0224d0a0::vfunc_70() {
    return data_ov004_0224cf8c;
}

BOOL Unk_ov004_0224d0a0::vfunc_68() {
    BOOL r = FALSE;
    s32 i = unk_654;
    if (data_ov004_02250aa8[i].fn1 != 0) {
        r = (this->*data_ov004_02250aa0[i].fn2)();
    }
    if (func_020e77cc(func_02034d2c(), 0x63, 0xab) != 0) {
        if (unk_77a == 0) {
            if (((unk_ec.unk_a4 << 4) >> 16) != 0) {
                func_02056520(&unk_ec.unk_b8, 10);
            }
            unk_77a = 1;
        }
        u8 *q = func_02003bbc();
        if (q != 0) {
            if ((s8)q[3] != 1) {
                unk_ec.unk_a4 = 0;
                unk_ec.unk_ac = *(u32 *)(q + 0x10);
                func_020539a0(&unk_ec);
                unk_ec.unk_ac = 0;
            }
        }
    } else {
        unk_77a = 0;
    }
    return r;
}

void Unk_ov004_0224d0a0::func_ov004_0221d37c(s32 idx) {
    BOOL r = TRUE;
    if (data_ov004_02250aa0[idx].fn1 != 0) {
        r = (this->*data_ov004_02250aa0[idx].fn1)();
    }
    if (r != 0) {
        unk_654 = idx;
    }
}

BOOL Unk_ov004_0224d0a0::func_ov004_0221d340() {
    unk_774 = 0;
    func_020196b4(&unk_564, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL Unk_ov004_0224d0a0::func_ov004_0221d278() {
    if (unk_774 > 0) {
        unk_774++;
        if (unk_774 > 0x14) {
            func_0201a6c0(&unk_3b0, 0, 0, 0, &data_021f4880, 4, data_020c6d1c, 1);
            unk_774 = -1;
        }
    } else if (unk_774 == 0) {
        if (*(s16 *)((u8 *)this + 0x3d2) > 0x2000) {
            unk_774 = 1;
        }
    }
    if (func_02072e44(data_020cbb18) == 0 && *func_0209c37c(0, 0x4a) == 0) {
        if (func_02095154(0x27, 4) != 0) {
            func_0203d6cc(this, 0);
        }
    }
    if (unk_710 != unk_8e) {
        func_ov004_0221d37c(3);
        return TRUE;
    }
    return TRUE;
}

BOOL Unk_ov004_0224d0a0::func_ov004_0221d20c() {
    void *p = func_02015aac(&unk_658);
    s32 r = 0;
    func_0201a6c0(&unk_3b0, 1, r, r, &data_021f4880, 4, data_020c6d1c, 1);
    if (p != 0) {
        r = func_0201bcbc(this, p);
    }
    func_020141b4(&unk_618, 0, r, 0);
    return TRUE;
}

BOOL Unk_ov004_0224d0a0::func_ov004_0221d17c() {
    if (func_02014220(&unk_618) == 0) {
        if (func_02072e44(data_020cbb18) == 0 && *func_0209c37c(0, 0x4a) == 0) {
            if (func_02095154(0x28, 4) != 0) {
                func_ov004_02224a38(2);
            }
            func_0208a58c();
        }
        func_0201a6c0(&unk_3b0, 0, 0, 0, &data_021f4880, 4, data_020c6d1c, 1);
        func_0203d67c(this);
        func_ov004_0221d37c(2);
    }
    return TRUE;
}

BOOL Unk_ov004_0224d0a0::func_ov004_0221d178() {
    return TRUE;
}

BOOL Unk_ov004_0224d0a0::func_ov004_0221d174() {
    return TRUE;
}

BOOL Unk_ov004_0224d0a0::func_ov004_0221d138() {
    func_020196b4(&unk_564, 3, 2, 0, 0, 0, unk_710, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL Unk_ov004_0224d0a0::func_ov004_0221d108() {
    if (func_020197a8(&unk_564) == 3) {
        if (func_02019790(&unk_564) != 0) {
            func_ov004_0221d37c(0);
        }
    }
    return TRUE;
}

BOOL Unk_ov004_0224d0a0::func_ov004_0221d104() {
    return TRUE;
}

BOOL Unk_ov004_0224d0a0::func_ov004_0221d0e4() {
    if (func_02095154(0x28, 4) != 0) {
        func_ov004_0221d37c(1);
    }
    return TRUE;
}

BOOL Unk_ov004_0224d0a0::func_ov004_0221d0ac() {
    func_0201a6c0(&unk_3b0, 0, 0, 0, &data_021f4880, 4, data_020c6d1c, 1);
    return TRUE;
}

BOOL Unk_ov004_0224d0a0::func_ov004_0221d010() {
    if (func_0201ba88(this) != 0) {
        s32 a = 4;
        s32 b = 4;
        if (func_0201b9e8(this, &a, &b) != 0 && a == (s32)data_020cbb18->unk_64 && a == b) {
            func_0201b9fc(this, 1, data_020cbb18->unk_64, data_020cbb18->unk_64);
            ((Unk_020d7714 *)&unk_658)->vfunc_08();
            s32 r = func_0201bc4c(this, 4);
            func_02015ab0(&unk_658, r);
            func_ov004_0221d37c(1);
        } else if (func_020a62a0() != 0 && b == 4) {
            func_0201b9fc(this, 1, data_020cbb18->unk_64, 4);
            func_ov004_0221d37c(0);
        }
    }
    return TRUE;
}

BOOL Unk_ov004_0224d0a0::func_ov004_0221cfd8() {
    func_0201a6c0(&unk_3b0, 0, 0, 0, &data_021f4880, 4, data_020c6d1c, 1);
    return TRUE;
}

BOOL Unk_ov004_0224d0a0::func_ov004_0221cf80() {
    if (func_0201ba88(this) != 0) {
        s32 a = 4;
        s32 b = 4;
        if (func_0201b9e8(this, &a, &b) != 0) {
            if (a == 4) {
                if (func_020a62a0() != 0) {
                    func_0201b9fc(this, 1, data_020cbb18->unk_64, 4);
                    func_ov004_0221d37c(0);
                }
            }
        }
    }
    return TRUE;
}

BOOL Unk_ov004_0224d0a0::func_ov004_0221cf7c() {
    return TRUE;
}

// ---------------------------------------------------------------------------------------------------------------------
// Unk_ov004_0224d0a0 (continued)

BOOL Unk_ov004_0224d0a0::func_ov004_0221cf78() {
    return TRUE;
}

Unk_ov004_0224d010::Unk_ov004_0224d010() {}

Unk_ov004_0224d010::~Unk_ov004_0224d010() {}

void Unk_ov004_0224d010::func_ov004_0221cf0c(s32 v) {
    vfunc_08();
    unk_b0 = (Unk_ov004_0224d0a0 *)v;
}

void Unk_ov004_0224d010::vfunc_78(void *arg) {
    Unk_ov004_0221b6d4_Out *out = (Unk_ov004_0221b6d4_Out *)arg;
    void *h = func_0209868c(func_0209750c());
    if (func_020a032c() != 0) {
        out->unk_00 = data_ov004_0224cf54[1];
        out->unk_04 = 0x1f;
    } else {
        out->unk_00 = data_ov004_0224cf54[0];
        void *o = func_02002d3c(0x66, 0);
        if (func_02072e44(data_020cbb18) != 0 || *func_0209c37c(0, 0x4a) != 0) {
            out->unk_04 = func_02063b8c(3) + 0x55;
        } else if (func_0202e1cc(0x17) != 0) {
            if (o != 0 && func_ov068_0226c334(o) == 7) {
                out->unk_04 = 0x58;
            } else {
                s32 c = func_02087c4c(h) >> 2;
                out->unk_04 = data_ov004_0224cec8[c] + func_02063b8c(3);
            }
        } else if (func_02095154(0x28, 4) == 0) {
            if (func_0202e1cc(0x16, 1) == 0) {
                out->unk_04 = func_02087c4c(h) >> 1;
            } else if (o != 0 && func_ov068_0226c334(o) == 7) {
                out->unk_04 = 0x58;
            } else {
                out->unk_04 = (func_02087c4c(h) >> 2) + 0x49;
            }
        } else {
            if (func_0202e1cc(0x17, 0) == 0) {
                func_0208a598();
            }
            out->unk_04 = (func_02087c4c(h) >> 2) + 0x14;
        }
    }
}

void Unk_ov004_0224d010::vfunc_14() {
    void *h = func_0209868c(func_0209750c());
    Unk_ov004_0221cc88_Obj *o = (Unk_ov004_0221cc88_Obj *)unk_3c;
    u32 d = data_ov004_0224cf54[0];
    u32 r = 0xff;
    if (func_020a032c() == 0) {
        if ((s32)unk_1e >= 0x1c && (s32)unk_1e <= 0x23) {
            if ((u32)func_02087c4c(h) >= 5) {
                if (func_02063b8c(3) == 0) {
                    r = 0x2c;
                    goto next0;
                }
            }
            o->unk_14 = 0;
            func_ov004_0221cbe4(1);
        }
    next0:
        if (unk_1e != 0x2d && unk_1e != 0x2e) {
            goto next1;
        }
        if (unk_1e == 0x2d) {
            unk_b5 = 1;
        }
        o->unk_14 = 0;
        func_ov004_0221cbe4(1);
    next1:
        if ((s32)unk_1e >= 0x30 && (s32)unk_1e <= 0x3b) {
            o->unk_14 = 0;
            func_ov004_0221cbe4(3);
        }
        if (r != 0xff) {
            u8 buf;
            buf = r;
            func_02067a84(unk_3c, &buf, d);
        }
    }
}

void Unk_ov004_0224d010::vfunc_18() {
    void *h = func_0209868c(func_0209750c());
    s32 t = func_02015a5c()->func_020aa514();
    u32 d = data_ov004_0224cf54[0];
    u32 r = 0xff;
    if ((s32)unk_1e >= 0x24 && (s32)unk_1e <= 0x2b) {
        if (t != 0) {
            r = (u8)((func_02087c4c(h) >> 2) + 0x28);
        } else {
            ((Unk_ov004_0221cc88_Obj *)unk_3c)->unk_14 = 0;
            func_ov004_0221cbe4(2);
        }
    }
    switch (unk_1e) {
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
        if (t == 0) {
            if (func_0201ade4((s32)unk_b0, 200) == 0) {
                r = 0x2f;
            } else {
                func_0201adc8((s32)unk_b0, 200);
                r = func_02063b8c(2);
                r = (u8)(r + (((func_02087c4c(h) >> 2) << 1) + 0x1c));
            }
        } else {
            r = (u8)((func_02087c4c(h) >> 2) + 0x18);
        }
        break;
    }
    if (r != 0xff) {
        u8 buf;
        buf = r;
        func_02067a84(unk_3c, &buf, d);
    }
}

void Unk_ov004_0224d010::vfunc_80() {
    s32 i = unk_ac;
    if (data_ov004_0224cfd8[i].flag != 0) {
        if (data_ov004_0224cfd8[i].fn != 0) {
            (this->*data_ov004_0224cfd8[i].fn)();
        }
    }
}

void Unk_ov004_0224d010::vfunc_88() {
    s32 i = unk_ac;
    if (data_ov004_0224cfd8[i].flag == 0) {
        if (data_ov004_0224cfd8[i].fn != 0) {
            (this->*data_ov004_0224cfd8[i].fn)();
            func_ov004_0221cbe4(0);
        }
    }
}

void Unk_ov004_0224d010::func_ov004_0221cbe4(s32 v) {
    unk_ac = v;
    unk_b4 = 0;
}

void Unk_ov004_0224d010::func_ov004_0221c794() {
    Unk_020660f8 *r6 = unk_3c;
    u8 r7 = (u8)((func_02087c4c(func_0209868c(func_0209750c())) >> 2) + 0x24);
    void *r5 = &unk_b0->unk_564;
    u8 buf;
    switch (unk_b4) {
    case 0:
        if (r6->unk_04 == 5) {
            func_0201a6c0(&unk_b0->unk_3b0, 0, 0, 0, &data_021f4880, 4, data_020c6d1c, 1);
            func_020196b4(r5, 3, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
            unk_b4 = 1;
        }
        break;
    case 1:
        if (func_02019790(r5)) {
            func_020195c8(r5, 1, 0xf6, 1, data_020c6cc8, 0);
            func_ov004_022266a4();
            func_0201ad34(&unk_b0->unk_2a0, 0xf3);
            func_0201ad30(&unk_b0->unk_2a0, 0xf5);
            func_0201ad2c(&unk_b0->unk_2a0, 0xf5);
            unk_b4 = 2;
            unk_b0->unk_778 = 0;
        }
        break;
    case 2:
        unk_b0->unk_778++;
        if (unk_b0->unk_778 == 5) {
            func_02003ddc(&unk_b0->unk_514, 0x4db, 0x7f, 0);
        }
        if (func_02019790(r5)) {
            func_0201a8c4(&unk_b0->unk_350, 2);
            func_020196b4(r5, 3, 1, 0, 0, 0, (s16)0x8000, 0, 0, data_020c6cc8, 0);
            func_ov004_022266e4();
            unk_b4 = 3;
        }
        break;
    case 3:
        if (func_02019790(r5)) {
            func_020196b4(r5, 2, 1, 0x19700, 0x14000, 0, 0, 0, 0, data_020c6cc8, 0);
            unk_b4 = 4;
        }
        break;
    case 4:
        if (func_02019790(r5)) {
            func_0201a8c4(&unk_b0->unk_350, 0);
            func_020196b4(r5, 3, 1, 0, 0, 0, (s16)0xc000, 0, 0, data_020c6cc8, 0);
            unk_b4 = 5;
        }
        break;
    case 5:
        if (func_02019790(r5)) {
            func_020195c8(r5, 1, 0xf7, 1, data_020c6cc8, 0);
            func_ov004_02226684();
            unk_b4 = 6;
            unk_b0->unk_778 = 0;
        }
        break;
    case 6:
        unk_b0->unk_778++;
        if (unk_b0->unk_778 == 0xd) {
            func_02003ddc(&unk_b0->unk_514, 0x4dc, 0x7f, 0);
        }
        if (unk_b0->unk_778 == 0x1e) {
            func_02003ddc(&unk_b0->unk_514, 0x4dd, 0x7f, 0);
        }
        if (unk_b0->unk_778 == 0x46) {
            func_02003ddc(&unk_b0->unk_514, 0x4de, 0x7f, 0);
        }
        if (func_02019790(r5)) {
            func_ov004_022266c4();
            func_020196b4(r5, 3, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
            unk_b4 = 7;
        }
        break;
    case 7:
        if (func_02019790(r5)) {
            func_020196b4(r5, 2, 1, 0x19700, 0x15000, 0, 0, 0, 0, data_020c6cc8, 0);
            unk_b4 = 8;
        }
        break;
    case 8:
        if (func_02019790(r5)) {
            func_020196b4(r5, 3, 1, 0, 0, 0, (s16)0xc000, 0, 0, data_020c6cc8, 0);
            unk_b4 = 9;
        }
        break;
    case 9:
        if (func_02019790(r5)) {
            func_0201a6c0(&unk_b0->unk_3b0, 1, 0, 0, &data_021f4880, 4, data_020c6d1c, 1);
            func_020195c8(r5, 1, 0xf8, 1, data_020c6cc8, 0);
            func_ov004_02226664();
            unk_b4 = 10;
            unk_b0->unk_778 = 0;
        }
        break;
    case 10:
        unk_b0->unk_778++;
        if (unk_b0->unk_778 == 0xf) {
            func_02003ddc(&unk_b0->unk_514, 0x4df, 0x7f, 0);
        }
        if (unk_b0->unk_778 == 0x1e) {
            func_02003ddc(&unk_b0->unk_514, 0x4e0, 0x7f, 0);
        }
        if (func_02019790(r5)) {
            buf = r7;
            func_02067a84(r6, &buf, data_ov004_0224cf54[0]);
            r6->unk_08 = 1;
            func_ov004_0221cbe4(0);
        }
        break;
    }
}

void Unk_ov004_0224d010::func_ov004_0221c608() {
    Unk_020660f8 *r6 = unk_3c;
    if (r6->unk_04 == 5) {
        if (func_ov004_022265c8() == 5) {
            func_ov004_02226604();
            func_ov004_02224820();
            unk_b0->unk_778 = 0;
        }
        unk_b0->unk_778++;
        if (unk_b0->unk_778 == 7) {
            func_02003ddc(&unk_b0->unk_514, 0x4e1, 0x7f, 0);
        }
        if (unk_b0->unk_778 == 0x14) {
            func_02003ddc(&unk_b0->unk_514, 0x4e2, 0x7f, 0);
            func_02034dd0(0x10, 0x14, 0);
        }
        if (unk_b0->unk_778 == 0x28) {
            func_02003ddc(&unk_b0->unk_514, 0x4e3, 0x7f, 0);
        }
        if (unk_b0->unk_778 == 0x46) {
            if (func_0209411c(func_0209888c(func_0209750c())) == 0) {
                func_02003ddc(&unk_b0->unk_514, 0x4e4, 0x7f, 0);
            } else {
                func_02003ddc(&unk_b0->unk_514, 0x4e5, 0x7f, 0);
            }
        }
        if (func_ov004_02226574()) {
            u8 r4;
            u8 buf;
            if (unk_b5 != 0) {
                r4 = 0x30;
            } else {
                r4 = (u8)(func_02063b8c(0xb) + 0x31);
            }
            func_02034d70(0x10);
            func_02034dd0(0xc, 0, 0xa);
            func_02034e10(0xd, 0x3e, 0x7f, 1);
            buf = r4;
            func_02067a84(r6, &buf, data_ov004_0224cf54[0]);
            r6->unk_08 = 1;
            func_0202e1cc(0x17, 1);
            void *p = func_0209868c(func_0209750c());
            if (func_02063b8c(0xa) < 5) {
                func_02087c3c(p, func_02087c4c(p) + 1);
            }
            func_ov004_0221cbe4(0);
        }
    }
}

void Unk_ov004_0224d010::vfunc_70() {
    s32 t = unk_1e;
    if (t >= 0x30 && t <= 0x3b) {
        func_02034d84(0x3e);
        func_02034dd0(0xc, 6, 0x1a);
    }
}

void Unk_ov004_0224d010::func_ov004_0221c304() {
    Unk_020660f8 *r6 = unk_3c;
    u8 r7 = (u8)((func_02087c4c(func_0209868c(func_0209750c())) >> 2) + 0x51);
    void *r5 = &unk_b0->unk_564;
    u8 buf;
    switch (unk_b4) {
    case 0:
        if (r6->unk_04 == 5) {
            func_ov004_022247fc();
            func_ov004_022265e4();
            unk_b4 = 1;
            unk_b0->unk_778 = 0;
        }
        break;
    case 1:
        unk_b0->unk_778++;
        if (unk_b0->unk_778 == 0xf) {
            func_02003ddc(&unk_b0->unk_514, 0x4e6, 0x7f, 0);
        }
        if (unk_b0->unk_778 == 0x14) {
            func_02003ddc(&unk_b0->unk_514, 0x4e7, 0x7f, 0);
        }
        if (func_ov004_02226520()) {
            func_0203a250();
            func_0201a6c0(&unk_b0->unk_3b0, 0, 0, 0, &data_021f4880, 4, data_020c6d1c, 1);
            func_020195c8(r5, 4, 0xf8, 3, data_020c6cc8, 0);
            func_ov004_02226644();
            unk_b4 = 2;
            unk_b0->unk_778 = 0;
        }
        break;
    case 2:
        unk_b0->unk_778++;
        if (unk_b0->unk_778 == 0x12) {
            func_02003ddc(&unk_b0->unk_514, 0x4e8, 0x7f, 0);
        }
        if (unk_b0->unk_778 == 0x2d) {
            func_02003ddc(&unk_b0->unk_514, 0x4e9, 0x7f, 0);
        }
        if (func_02019790(r5)) {
            func_ov004_022266e4();
            func_020196b4(r5, 3, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
            unk_b4 = 3;
        }
        break;
    case 3:
        if (func_02019790(r5)) {
            func_020195c8(r5, 1, 0xf6, 3, data_020c6cc8, 0);
            func_ov004_02226624();
            func_0201ad34(&unk_b0->unk_2a0, 0xf2);
            func_0201ad30(&unk_b0->unk_2a0, 0xf4);
            func_0201ad2c(&unk_b0->unk_2a0, 0xf4);
            unk_b4 = 4;
            unk_b0->unk_778 = 0;
        }
        break;
    case 4:
        unk_b0->unk_778++;
        if (unk_b0->unk_778 == 0xa) {
            func_02003ddc(&unk_b0->unk_514, 0x4ea, 0x7f, 0);
        }
        if (func_02019790(r5)) {
            func_ov004_02226704();
            func_0201a6c0(&unk_b0->unk_3b0, 1, 0, 0, &data_021f4880, 4, data_020c6d1c, 1);
            func_020196b4(r5, 3, 1, 0, 0, 0, (s16)0xc000, 0, 0, data_020c6cc8, 0);
            unk_b4 = 5;
        }
        break;
    case 5:
        if (func_02019790(r5)) {
            buf = r7;
            func_02067a84(r6, &buf, data_ov004_0224cf54[0]);
            r6->unk_08 = 1;
            func_ov004_0221cbe4(0);
            unk_b5 = 0;
        }
        break;
    }
}

// ---------------------------------------------------------------------------------------------------------------------
// Unk_ov004_0224d010

BOOL Unk_ov004_0224d0a0::vfunc_48() {
    if (func_02014220(&unk_618) != 0 || func_0201b9bc(this) != 0) {
        return FALSE;
    }
    return TRUE;
}

void Unk_ov004_0224d0a0::vfunc_4c(u32 cmd, u32 arg) {
    s32 a, b;
    switch (cmd) {
    case 3:
        unk_558.unk_08 = arg;
        if (arg != 4) {
            func_0201b9fc(this, 1, data_020cbb18->unk_64, arg);
            func_ov004_0221d37c(7);
        } else if (func_0201ba88(this)) {
            s32 g = data_020cbb18->unk_64;
            func_0201b9fc(this, 1, g, g);
            func_ov004_0221d37c(7);
        }
        break;
    case 1:
        unk_558.unk_08 = arg;
        if (arg != 4 && arg != data_020cbb18->unk_64) {
            func_0201b9fc(this, 1, arg, arg);
            func_ov004_0221d37c(6);
        } else if (func_0201ba88(this)) {
            Unk_ov004_0221b954_Global *gl = data_020cbb18;
            s32 g = gl->unk_64;
            func_0201b9fc(this, 1, g, g);
            Unk_020d7714 *p = &unk_658;
            p->vfunc_08();
            func_02015ab0(&unk_658, func_0201bc4c(this, 4));
            if (func_02072e44(gl) || *func_0209c37c(0, 0x4a) != 0) {
                func_ov004_0221d37c(1);
            } else {
                func_ov004_0221d37c(4);
            }
        }
        break;
    case 0:
        unk_558.unk_08 = arg;
        if (arg != 4 && arg != data_020cbb18->unk_64) {
            func_0201b9fc(this, 1, arg, arg);
            func_ov004_0221d37c(6);
        } else if (func_0201ba88(this)) {
            s32 g = data_020cbb18->unk_64;
            func_0201b9fc(this, 1, g, g);
            Unk_020d7714 *p = &unk_658;
            p->vfunc_08();
            func_02015ab0(&unk_658, func_0201bc4c(this, 4));
            func_ov004_0221d37c(1);
        }
        break;
    case 8:
        if (arg == 4) {
            if (func_020a62a0()) {
                func_0201b9fc(this, 1, data_020cbb18->unk_64, 4);
                func_ov004_0221d37c(3);
            } else {
                func_0201b9fc(this, 1, 4, data_020cbb18->unk_64);
                func_ov004_0221d37c(5);
            }
        }
        break;
    case 4:
        if (func_0201b9bc(this) && func_0201ba88(this)) {
            a = 4;
            b = 4;
            if (func_0201b9e8(this, &a, &b)) {
                if (arg != 4) {
                    if (arg == b) {
                        goto body;
                    }
                }
                if (arg == 4) {
                body:
                    func_0201b9fc(this, 1, data_020cbb18->unk_64, 4);
                    func_ov004_0221d37c(0);
                }
            }
        }
        break;
    case 2:
    case 5:
    case 6:
    case 7:
        break;
    }
    func_0201b08c(this, cmd, arg);
}

extern "C" void *func_ov004_0221c0b8() { return &data_ov004_02250a9c->unk_714; }

extern "C" void *func_ov004_0221c0a4() { return &data_ov004_02250a9c->unk_744; }

extern "C" u32 func_ov004_0221c08c() { return ((u32)data_ov004_02250a9c->unk_ec.unk_a4 << 4) >> 16; }

extern "C" void func_ov004_0221c070() { func_02015e48(&data_ov004_02250a9c->unk_334, 0); }

// ---------------------------------------------------------------------------------------------------------------------
// Unk_ov004_0224d0a0


extern "C" void _ZN18Unk_ov004_0224d0a019func_ov004_0221d010Ev();
extern "C" void _ZN18Unk_ov004_0224d0a019func_ov004_0221cf80Ev();
extern "C" void _ZN18Unk_ov004_0224d01019func_ov004_0221c304Ev();
extern "C" void _ZN18Unk_ov004_0224d0a019func_ov004_0221cf7cEv();
extern "C" void _ZN18Unk_ov004_0224d0a019func_ov004_0221d174Ev();
extern "C" void _ZN18Unk_ov004_0224d0a019func_ov004_0221d278Ev();
extern "C" void _ZN18Unk_ov004_0224d0a019func_ov004_0221cfd8Ev();
extern "C" void _ZN18Unk_ov004_0224d01019func_ov004_0221c608Ev();
extern "C" void _ZN18Unk_ov004_0224d0a019func_ov004_0221d0acEv();
extern "C" void _ZN18Unk_ov004_0224d0a019func_ov004_0221cf78Ev();
extern "C" void _ZN18Unk_ov004_0224d0a019func_ov004_0221d138Ev();
extern "C" void _ZN18Unk_ov004_0224d0a019func_ov004_0221d108Ev();
extern "C" void _ZN18Unk_ov004_0224d0a019func_ov004_0221d0e4Ev();
extern "C" void _ZN18Unk_ov004_0224d0a019func_ov004_0221d104Ev();
extern "C" void _ZN18Unk_ov004_0224d0a019func_ov004_0221d178Ev();
extern "C" void _ZN18Unk_ov004_0224d0a019func_ov004_0221d17cEv();
extern "C" void _ZN18Unk_ov004_0224d0a019func_ov004_0221d20cEv();
extern "C" void _ZN18Unk_ov004_0224d0a019func_ov004_0221d340Ev();
extern "C" void _ZN18Unk_ov004_0224d01019func_ov004_0221c794Ev();
extern "C" const u32 data_ov004_02240120[2] = {0x40000000, 0};
extern "C" const u32 data_ov004_02240128[3] = {0x15000, 0x1000, 0x13000};
extern "C" u8 data_ov004_0224cec8[4] = {0x08, 0x0b, 0x0e, 0x11};
extern "C" u8 data_ov004_0224cf6c[12] = {'s', 'p', '_', 'n', 'p', 'c', '_', 'c', 'a', 'f', 'e', 0};
extern "C" u8 data_ov004_0224cf78[17] = {'s', 'p', '_', 'e', 't', 'c', '_', 's', 'e', 'q', 'u', 'e', 'n', 'c', 'e', '4', 0};
extern "C" void *data_ov004_0224cf24[2] = {(void *)_ZN18Unk_ov004_0224d0a019func_ov004_0221d108Ev, 0};
extern "C" u8 data_ov004_0224cf8c[23] = {'n', 'p', 'c', '_', 's', 'p', '/', 'm', 'o', 'd', 'e', 'l', '/', 'p', 'g', 'e', '.', 'n', 's', 'b', 'm', 'd', 0};
extern "C" u8 data_ov004_0224cfbc[27] = {'n', 'p', 'c', '_', 's', 'p', '/', 'm', 'o', 'd', 'e', 'l', '/', 'p', 'g', 'e', '_', 't', 'e', 'x', '.', 'n', 's', 'b', 't', 'x', 0};
extern "C" Unk_ov004_SceneEntry data_ov004_0224cfa4 = {func_ov004_0221d630, 0x63, 0x6a, 0, 0x5000, 0x5000, 0x3e800};
extern "C" void *data_ov004_0224cf0c[2] = {(void *)_ZN18Unk_ov004_0224d0a019func_ov004_0221d0acEv, 0};
extern "C" void *data_ov004_0224cf5c[2] = {(void *)_ZN18Unk_ov004_0224d0a019func_ov004_0221d340Ev, 0};
extern "C" u32 data_ov004_0224cf54[2] = {(u32)data_ov004_0224cf6c, (u32)data_ov004_0224cf78};
extern "C" void *data_ov004_0224cf4c[2] = {(void *)_ZN18Unk_ov004_0224d0a019func_ov004_0221d20cEv, 0};
extern "C" void *data_ov004_0224cf44[2] = {(void *)_ZN18Unk_ov004_0224d0a019func_ov004_0221d17cEv, 0};
extern "C" void *data_ov004_0224cf3c[2] = {(void *)_ZN18Unk_ov004_0224d0a019func_ov004_0221d178Ev, 0};
extern "C" void *data_ov004_0224cf34[2] = {(void *)_ZN18Unk_ov004_0224d0a019func_ov004_0221d104Ev, 0};
extern "C" void *data_ov004_0224cef4[2] = {(void *)_ZN18Unk_ov004_0224d0a019func_ov004_0221d278Ev, 0};
extern "C" void *data_ov004_0224ced4[2] = {(void *)_ZN18Unk_ov004_0224d0a019func_ov004_0221cf80Ev, 0};
extern "C" void *data_ov004_0224cf14[2] = {(void *)_ZN18Unk_ov004_0224d0a019func_ov004_0221cf78Ev, 0};
extern "C" void *data_ov004_0224cedc[2] = {(void *)_ZN18Unk_ov004_0224d01019func_ov004_0221c304Ev, 0};
extern "C" void *data_ov004_0224cf64[2] = {(void *)_ZN18Unk_ov004_0224d01019func_ov004_0221c794Ev, 0};
extern "C" void *data_ov004_0224cecc[2] = {(void *)_ZN18Unk_ov004_0224d0a019func_ov004_0221d010Ev, 0};
extern "C" void *data_ov004_0224cf04[2] = {(void *)_ZN18Unk_ov004_0224d01019func_ov004_0221c608Ev, 0};
extern "C" void *data_ov004_0224cefc[2] = {(void *)_ZN18Unk_ov004_0224d0a019func_ov004_0221cfd8Ev, 0};
extern "C" void *data_ov004_0224ceec[2] = {(void *)_ZN18Unk_ov004_0224d0a019func_ov004_0221d174Ev, 0};
extern "C" void *data_ov004_0224cf2c[2] = {(void *)_ZN18Unk_ov004_0224d0a019func_ov004_0221d0e4Ev, 0};
extern "C" void *data_ov004_0224cf1c[2] = {(void *)_ZN18Unk_ov004_0224d0a019func_ov004_0221d138Ev, 0};
extern "C" void *data_ov004_0224cee4[2] = {(void *)_ZN18Unk_ov004_0224d0a019func_ov004_0221cf7cEv, 0};
typedef BOOL (Unk_ov004_0224d0a0::*Unk_ov004_O_Fn)();
typedef void (Unk_ov004_0224d010::*Unk_ov004_D_Fn)();
extern "C" Unk_ov004_0224d010_Ent data_ov004_0224cfd8[4] = {
    {0, 0},
    {*(Unk_ov004_D_Fn *)data_ov004_0224cf64, 1},
    {*(Unk_ov004_D_Fn *)data_ov004_0224cf04, 1},
    {*(Unk_ov004_D_Fn *)data_ov004_0224cedc, 1},
};
extern "C" Unk_ov004_0224d0a0_Ent data_ov004_02250aa0[8] = {
    {*(Unk_ov004_O_Fn *)data_ov004_0224cf5c, *(Unk_ov004_O_Fn *)data_ov004_0224cef4},
    {*(Unk_ov004_O_Fn *)data_ov004_0224cf4c, *(Unk_ov004_O_Fn *)data_ov004_0224cf44},
    {*(Unk_ov004_O_Fn *)data_ov004_0224cf3c, *(Unk_ov004_O_Fn *)data_ov004_0224ceec},
    {*(Unk_ov004_O_Fn *)data_ov004_0224cf1c, *(Unk_ov004_O_Fn *)data_ov004_0224cf24},
    {*(Unk_ov004_O_Fn *)data_ov004_0224cf34, *(Unk_ov004_O_Fn *)data_ov004_0224cf2c},
    {*(Unk_ov004_O_Fn *)data_ov004_0224cf0c, *(Unk_ov004_O_Fn *)data_ov004_0224cecc},
    {*(Unk_ov004_O_Fn *)data_ov004_0224cefc, *(Unk_ov004_O_Fn *)data_ov004_0224ced4},
    {*(Unk_ov004_O_Fn *)data_ov004_0224cee4, *(Unk_ov004_O_Fn *)data_ov004_0224cf14},
};
extern "C" Unk_ov004_0224d0a0 *data_ov004_02250a9c = 0;
