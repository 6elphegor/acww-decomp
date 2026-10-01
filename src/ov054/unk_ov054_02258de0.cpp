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
class Unk_020d9670;
class Unk_ov054_0225ba54;
class Unk_ov054_0225b9c4;

struct Unk_ov054_Vec {
    s32 x, y, z;
};
typedef Unk_ov054_Vec Unk_ov054_0225902c_Vec;
typedef Unk_ov054_Vec Unk_ov054_0225ba54_Vec;

struct Unk_ov054_0225ab00_Vec {
    s32 x, y, z;
    Unk_ov054_0225ab00_Vec() {}
    ~Unk_ov054_0225ab00_Vec() {}
};

struct Unk_ov054_0225b3ac_Row {
    s32 a, b, c;
};

struct Unk_020cbb18 {
    u8 pad_00[0x64];
    s32 unk_64;
};

struct Unk_ov054_0225b0ac_Local {
    u8 unk_00;
    u8 unk_01;
    u16 unk_02;
    u16 unk_04;
    u16 unk_06[3];
};

struct Unk_ov054_02258e58_Sub {
    s32 unk_00;
    s32 unk_04;
};

struct Unk_ov054_0225b9c4_Out {
    u32 unk_00;
    u8 unk_04;
};

struct Unk_ov054_0225aa98_Rec {
    s32 unk_00;
    s32 unk_04;
};

struct Unk_ov054_0225a3cc_Data {
    u32 w0;
    u32 w1;
};

struct Unk_ov054_0225a3cc_Msg {
    u8 id;
    u8 pad[3];
    Unk_ov054_0225a3cc_Data d;
};

struct Unk_ov054_0225a7c4_Bits {
    u8 lo : 2;
    u8 mid : 3;
    u8 hi : 3;
};

// Dialog base chain (main): Unk_020d7714 <- Unk_020ddcf0 <- Unk_020d7710 <- Unk_020d8b38, size 0xac.
class Unk_020d7714 {
public:
    Unk_020d7714();
    virtual ~Unk_020d7714();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void vfunc_10();
    virtual void vfunc_14(s32 a);
    virtual void vfunc_18(s32 a);
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
    virtual void vfunc_78(Unk_ov054_0225b9c4_Out *out);
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();

    /* 0x04 */ u8 pad_04[0x1a];
    /* 0x1e */ u8 unk_1e;
    /* 0x1f */ u8 pad_1f[0x3c - 0x1f];
    /* 0x3c */ Unk_ov054_02258e58_Sub *unk_3c;
    /* 0x40 */ u8 pad_40[0xac - 0x40];
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
    virtual void vfunc_50();
    virtual void vfunc_54();
    virtual void vfunc_58();
    virtual void vfunc_5c();
    virtual void vfunc_60();
    virtual void vfunc_64_alt();
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
    s32 unk_a4;
    u8 pad_a8[0x2a0 - 0xec - 0xa8];
    Unk_020dbd74();
    ~Unk_020dbd74();
};
MEMBER(Unk_0201ad3c, 0xc);
struct Unk_02019dd8 {
    u8 unk_00[0x334 - 0x2ac];
    Unk_02019dd8();
    ~Unk_02019dd8();
    s32 func_02019d8c();
};
MEMBER(Unk_02016350, 0x1c);
MEMBER(Unk_0201accc, 0x3a8 - 0x350);
struct Unk_0201a8bc { u8 unk_00[2]; Unk_0201a8bc(); };
struct Unk_0201ad18 { u8 unk_00[6]; Unk_0201ad18(); };
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
MEMBER(Unk_02019858, 0x618 - 0x564);
MEMBER(Unk_02014254, 0x28);
struct Unk_020e06dc { u8 unk_00[8]; Unk_020e06dc(); };

struct Unk_020f4080 {
    u8 unk_00[0x558 - 0x514];
    Unk_020f4080();
    ~Unk_020f4080();
};

// Owner base chain (main): Unk_020d8c7c_Base <- Unk_020d5d84 <- Unk_020d9670 <- Unk_020d77a4 <- Unk_020d8bc8.
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
    virtual BOOL vfunc_48(Unk_020d9670 *o);
    virtual void vfunc_4c(u32 cmd, u32 arg);
    virtual void vfunc_50();
    virtual void vfunc_54(void *p);
    virtual void vfunc_58(void *p);
    void func_0203e468(s32 v);
    u8 pad_04[0x58];
    s32 unk_5c, unk_60, unk_64;
    u8 pad_68[0x8e - 0x68];
    s16 unk_8e;
    u8 pad_90[4];
    s16 unk_94;
    u8 pad_96[0xea - 0x96];
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

    BOOL func_0201b9bc();
    void func_0201b964(void *dst, s32 n);
    BOOL func_0201b980(u8 *src, u32 n);
    void func_0201b9fc(u32 a, u32 b, u32 c, ...);
    BOOL func_0201ba88();
    void func_0201bc28(Unk_0201bc1c *p);
    s32 func_0201bc4c(u32 id);
    s32 func_0201bc70(u32 id);
    s32 func_0201bcbc(Unk_020d77a4 *other);
    void func_0201bd9c(s32 v);
    void func_0201bda8(u16 *p);

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
    void func_0202e548(s32 a, s32 b);

    Unk_020e06dc unk_640;
    s32 unk_648;
    s32 unk_64c;
    u8 unk_650;
};

typedef void (Unk_ov054_0225b9c4::*Unk_ov054_0225b9c4_Fn)();
typedef void (Unk_ov054_0225b9c4::*Unk_ov054_0225b9c4_FnI)(s32);

struct Unk_ov054_0225b9c4_Ent {
    Unk_ov054_0225b9c4_Fn fn;
    u8 flag;
};

// View of the flag column of data_ov054_0225bb00 (symbols.txt label data_ov054_0225bb08 = table + 8)
struct Unk_ov054_0225b9c4_Flag {
    u8 flag;
    u8 pad[11];
};

// Dialog member of the owner at +0x658 (vtable 0x0225b9c4)
class Unk_ov054_0225b9c4 : public Unk_020d8b38 {
public:
    typedef void (Unk_ov054_0225b9c4::*Fn)();

    Unk_ov054_0225b9c4();
    virtual ~Unk_ov054_0225b9c4();
    virtual void vfunc_10();
    virtual void vfunc_14(s32 a);
    virtual void vfunc_18(s32 a);
    virtual void vfunc_78(Unk_ov054_0225b9c4_Out *out);
    virtual void vfunc_80();
    virtual void vfunc_84();

    void func_ov054_022590d0(s32 a);
    void func_ov054_02259178();
    void func_ov054_022591ac();
    void func_ov054_02259200();
    void func_ov054_02259224();
    void func_ov054_02259258();
    void func_ov054_02259270(s32 a);
    void func_ov054_0225944c(s32 a);
    void func_ov054_022594f4(s32 a);
    void func_ov054_02259534(s32 a);
    void func_ov054_022595c4(s32 a);
    void func_ov054_0225981c(s32 a);
    void func_ov054_022598bc(s32 a);
    void func_ov054_022598c0(s32 a);
    void func_ov054_02259dec();
    void func_ov054_02259e54();
    void func_ov054_02259e78();
    void func_ov054_02259ef8();
    void func_ov054_0225a074();
    void func_ov054_0225a08c();
    void func_ov054_0225a100();
    void func_ov054_0225a124();
    void func_ov054_0225a240();
    void func_ov054_0225a318();
    void func_ov054_0225a3cc();
    void func_ov054_0225a460();
    void func_ov054_0225a4c4();
    void func_ov054_0225a580();
    void func_ov054_0225a5cc();
    void func_ov054_0225a690(s32 v);
    void func_ov054_0225a720();
    u32 func_ov054_0225a758();
    u8 func_ov054_0225a770();
    u32 func_ov054_0225a78c();
    u32 func_ov054_0225a7a8();
    void func_ov054_0225a910();
    void func_ov054_0225a928(Unk_ov054_0225ba54 *o);

    /* 0xac */ Unk_ov054_0225ba54 *unk_ac;
    /* 0xb0 */ s32 unk_b0;
    /* 0xb4 */ s32 unk_b4;
    /* 0xb8 */ u8 unk_b8;
    /* 0xb9 */ u8 pad_b9[3];
    /* 0xbc */ s32 unk_bc;
    /* 0xc0 */ s32 unk_c0;
    /* 0xc4 */ u16 unk_c4;
    /* 0xc6 */ u8 pad_c6[0x1a8 - 0xc6];
};

class Unk_ov054_0225ba54 : public Unk_020d8bc8 {
public:
    Unk_ov054_0225ba54() : unk_658() {}
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_48(Unk_020d9670 *o);
    virtual void vfunc_4c(u32 cmd, u32 arg);
    virtual BOOL vfunc_68();
    virtual u8 *vfunc_6c();
    virtual u8 *vfunc_70();

    s32 func_ov054_02258e34();
    s32 func_ov054_02258e44();
    BOOL func_ov054_02258e58();
    BOOL func_ov054_0225a994();
    BOOL func_ov054_0225a998();
    BOOL func_ov054_0225a99c();
    BOOL func_ov054_0225a9f4();
    BOOL func_ov054_0225a9f8();
    BOOL func_ov054_0225aa94();
    BOOL func_ov054_0225aa98();
    BOOL func_ov054_0225aafc();
    BOOL func_ov054_0225ab00();
    BOOL func_ov054_0225ab54();
    BOOL func_ov054_0225ab88();
    BOOL func_ov054_0225abd4();
    BOOL func_ov054_0225ac24();
    BOOL func_ov054_0225ac28();
    BOOL func_ov054_0225ac2c();
    BOOL func_ov054_0225ac58();
    BOOL func_ov054_0225ac74();
    BOOL func_ov054_0225acdc();
    BOOL func_ov054_0225ad34();
    BOOL func_ov054_0225ad94();
    BOOL func_ov054_0225adfc();
    BOOL func_ov054_0225ae1c();
    BOOL func_ov054_0225ae48();
    BOOL func_ov054_0225ae5c();
    BOOL func_ov054_0225ae60();
    void func_ov054_0225aef4(s32 state);

    /* 0x654 */ s32 unk_654;
    /* 0x658 */ Unk_ov054_0225b9c4 unk_658;
    /* 0x800 */ s16 unk_800;
    /* 0x802 */ u8 pad_802[2];
    /* 0x804 */ s32 unk_804;
    /* 0x808 */ s32 unk_808;
    /* 0x80c */ u16 unk_80c;
    /* 0x80e */ u16 unk_80e;
    /* 0x810 */ u8 unk_810;
    /* 0x811 */ u8 pad_811[3];
};

typedef BOOL (Unk_ov054_0225ba54::*Unk_ov054_0225ba54_Fn)();

struct Unk_ov054_0225aef4_Ent {
    Unk_ov054_0225ba54_Fn enter;
    Unk_ov054_0225ba54_Fn exit;
};

struct Unk_ov054_SceneEntry {
    Unk_ov054_0225ba54 *(*factory)();
    u16 a, b;
    s32 c, d, e, f;
};

#define func_02002cf8 _ZN12Unk_020d5d8413func_02002cf8EPvS0_S0_S0_S0_
#define func_02014198 _ZN12Unk_02013b1013func_02014198Ehh
#define func_02014220 _ZN12Unk_02013b1013func_02014220Ev
#define func_02014ce4 _ZN12Unk_0201442013func_02014ce4EPtjjj
#define func_02014e60 _ZN12Unk_020d771013func_02014e60EPtjjj
#define func_02014f74 _ZN12Unk_020d771013func_02014f74Ev
#define func_02015170 _ZN12Unk_020d771013func_02015170Ejj
#define func_0201517c _ZN12Unk_020d771013func_0201517cEjjj
#define func_020151d0 _ZN12Unk_020d771013func_020151d0Ei
#define func_020157e8 _ZN12Unk_020d771413func_020157e8Ejj
#define func_02015848 _ZN12Unk_020d771413func_02015848Ejj
#define func_02015878 _ZN12Unk_020d771413func_02015878Ejj
#define func_02015958 _ZN12Unk_020d771413func_02015958Eijiii
#define func_02015a5c _ZN12Unk_020d771413func_02015a5cEv
#define func_02015ab0 _ZN12Unk_020d771413func_02015ab0Ej
#define func_02019614 _ZN12Unk_0201985813func_02019614Ejt
#define func_020196b4 _ZN12Unk_0201985813func_020196b4Ejiiissiitt
#define func_02019790 _ZN12Unk_0201985813func_02019790Ev
#define func_020197a8 _ZN12Unk_0201985813func_020197a8Ev
#define func_0201a8c4 _ZN12Unk_0201a8c413func_0201a8c4Eh
#define func_0201a8d0 _ZN12Unk_0201a8c413func_0201a8d0Eiiii
#define func_0201b9e8 _ZN12Unk_020d77a413func_0201b9e8Eii
#define func_02060388 _ZN12Unk_0206022c13func_02060388Ev
#define func_02063818 _ZN12Unk_020dd374D1Ev
#define func_02063830 _ZN12Unk_020dd374C1Ev
#define func_02063870 _ZN12Unk_020dd38cD1Ev
#define func_02063888 _ZN12Unk_020dd38cC1Ev
#define func_02067990 _ZN12Unk_020660f813func_02067990Ev
#define func_0206799c _ZN12Unk_020660f813func_0206799cEv
#define func_020679c0 _ZN12Unk_020660f813func_020679c0Ei
#define func_02067a3c _ZN12Unk_020660f813func_02067a3cEiPv
#define func_02067a6c _ZN12Unk_020660f813func_02067a6cEv
#define func_02067a78 _ZN12Unk_020660f813func_02067a78Ev
#define func_02067a84 _ZN12Unk_020660f813func_02067a84EPhPv
#define func_02072e44 _ZN12Unk_020cbb1813func_02072e44Ev
#define func_02072e88 _ZN12Unk_020cbb1813func_02072e88Ei
#define func_02096e50 _ZN12Unk_02096e2813func_02096e50Ev
#define func_0209801c _ZN12Unk_02097ff413func_0209801cEj
#define func_02098044 _ZN12Unk_02097ff413func_02098044Ej
#define func_02098320 _ZN12Unk_02097ff413func_02098320Ev
#define func_0209865c _ZN12Unk_0209865c13func_0209865cEv
#define func_0209888c _ZN12Unk_0209865c13func_0209888cEv
#define func_02099864 _ZN12Unk_020994cc13func_02099864Ev
#define func_0209abb4 _ZN12Unk_0209ada413func_0209abb4Eh
#define func_0209e120 _ZN12Unk_0209da4413func_0209e120Ej
#define func_020a7aa0 _ZN12Unk_020e2a7813func_020a7aa0EP12Unk_020e2a60ii
#define func_020aa514 _ZN12Unk_020aa3b813func_020aa514Ev
#define func_02133150 _s32_div_f

// Functions of other modules. The func_XXXXXXXX names of class members are mapped to their symbols.txt names by
// the #defines above (the object is passed as the first argument).
u32 func_020720f8();
s32 func_0207217c();

extern "C" {
extern Unk_020cbb18 *data_020cbb18;
extern u16 data_020c6cc8;
extern u8 data_021e58a8[];
extern u8 data_021d7350[];
extern u8 data_021d735c[];

s32 func_02072e44(void *g);
s32 func_02072e88(void *g, s32 v);
BOOL func_ov004_0221e3dc();
BOOL func_0202e148(...);
void func_0204ee10(s32 *bx, s32 *by, void *pos);
void *func_0209750c();
void *func_02098320(void *g);
s32 func_02097404(void *h);
s32 func_020973e8(void *h);
void func_020973e4(void *h, u8 i);
void func_0209801c(void *g, s32 v);
s32 func_02098044(void *g, s32 v);
s32 func_02067a84(void *m, void *buf, u32 cb);
s32 func_02060388(void *m);
void func_02015958(void *self, s32 a, s32 b, s32 c, s32 d, s32 e);
void func_02015170(void *self, s32 a, s32 b);
void func_020151d0(void *self, s32 a);
void func_0201517c(void *self, void *cb, s32 a, s32 b);
void func_0202e214(void *self, void *tbl, s32 n, s32 m);
s32 func_02015a5c(void *self);
s32 func_020aa514(s32 v);
void func_0203cb80(s32 v);
s32 func_0203ca94();
s32 func_0202e18c(void *o, void *b, s32 c);
void func_0202e174(void *o, void *b);
void func_020679c0(void *o, s32 v);
void func_0206e9bc();
void func_0206e9d8();
s32 func_020a62a0();
void func_02015ab0(void *self, s32 v);
s32 func_02014220(void *self);
s32 func_0201b9e8(void *self, s32 *a, s32 *b);

s32 func_0212a438(const char *s);
s32 func_0212a15c(const void *a, const char *b, s32 n);
BOOL func_020a032c();
BOOL func_020a0318();
BOOL func_020a07e4();
BOOL func_020a080c();
void func_020a08d0();
u32 func_020978a4(void *g);
u32 func_02097a3c(void *h);
u8 *func_02096e50(u32 h);
u32 func_020978c8(void *g, u32 i);
u32 func_020974f8();
u32 func_02097868(void *g, u32 i);
u32 func_0209888c(u32 h);
s32 func_02097414(void *p);
u32 func_02099014(u16 *p, s32 a);
BOOL func_0204c0e0();
s32 func_02045df4();
u8 *func_02045dec();
BOOL func_0206e928();
void func_0209f204();
void func_02073bf8(s32 a, s32 b, s32 c);
void func_02067a78(void *ctx);
void func_02067990(void *ctx);
void func_02067a6c(void *ctx);
void func_0206799c(void *ctx, s32 a);
void func_02067a3c(void *ctx, s32 a, void *p);
BOOL func_020e7500(void *p);
BOOL func_020eb650(s32 a);
u32 func_020733bc();
s32 func_020eae78(u32 a);
void *func_020ea65c(s32 a);
s32 func_020ea6c8(void *p);
void *func_020ea6f4(void *p);
BOOL func_020ea608(void *p);
void func_02116048(void *dst, void *src, u32 n);
void func_02063888(void *p);
void func_02063830(void *p);
void func_02063818(void *p);
void func_02063870(void *p);
BOOL func_020a78a4(void *dst, const void *src, s32 n);
void func_020a7aa0(void *dst, void *src, s32 a, s32 b);
void func_02014e60(void *self, u16 *p, s32 a, s32 b, s32 c);
void func_02015848(void *self, u32 a, u32 b);
void func_02015878(void *self, u32 a, u32 b);
void func_020157e8(void *self, u32 a, s32 b);

void func_02014f74(void *self);
void func_02014ce4(void *self, u16 *p, s32 a, s32 b, s32 c);
BOOL func_020a0884();
BOOL func_020a08a8();
void func_020a0948();
BOOL func_0206ed18();
void *func_0209865c(void *p);
void *func_02099864(void *p);
s32 func_0206ed38();
u32 func_02099048(s32 a);
void func_02099064(s32 a);
BOOL func_0204b2d4(u16 *p);
s32 func_0204b25c(u16 *p);
BOOL func_02099f98(void *a, void *b);
void *func_0209a108(void *p);
void func_0209abb4(void *p, s32 a);
s32 func_02133150(s32 a, s32 b);
void *func_020850e0();
void func_020851a4(void *p, s32 a);
void func_0209e120(void *p, s32 a);
void func_0206e8b8(void *p);
s32 func_0206e8e8();
void func_020973ec(s32 a);
s32 func_0206e98c();
BOOL func_020968b8(s32 a);
BOOL func_0206e90c();
s32 func_0206e960();
BOOL func_0206e974();
BOOL func_0206e944();
BOOL func_020a0304();
BOOL func_02073a78();
s32 func_0209f1c4();

s32 func_02063b8c(s32 a);
s32 func_0203d704(void *self, s32 a);
void func_0203d67c(void *self);
s32 func_020951b8(s32 a);
void func_02094b0c(void *v, s32 a, s32 b);
Unk_ov054_Vec *func_020947f0(s32 a);
s32 func_020197a8(void *self);
BOOL func_02019790(void *self);
void func_02019614(void *self, s32 a, u32 b);
void func_020196b4(void *self, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h, s32 i, s32 j);
void func_0201a8c4(void *self, s32 a);
void func_0201a8d0(void *self, s32 a, s32 b, s32 c, s32 d);
void func_02014198(void *self, s32 a, s32 b);
void func_02034d84(s32 a);
void func_02034e10(s32 a, s32 b, s32 c, s32 d);
void func_0209cf18(void *p);
void func_02002cf8(s32 a, u32 b, void *v, void *p, void *owner);
void *func_0204da0c();
void func_020b0f48();
BOOL func_0204d780(void *r, s32 *a, s32 *b, s32 *c);
void *func_020b4934();
s32 func_020b4f18(void *r, s32 a, void *v, s32 b, s32 c, s32 d, s32 e);
Unk_ov054_0225aa98_Rec *func_02067918(s32 a);

BOOL func_ov054_0225a218(u16 *p, s32 k);
Unk_ov054_0225ba54 *func_ov054_0225b228();
}

// The overlay's own data (defined below, before the functions).
extern "C" {
extern const u8 data_ov054_0225b340[2];
extern const u8 data_ov054_0225b344[2];
extern const u8 data_ov054_0225b348[2];
extern const u8 data_ov054_0225b34c[2];
extern const u8 data_ov054_0225b350[2];
extern const u8 data_ov054_0225b354[3];
extern const u8 data_ov054_0225b358[4];
extern const u16 data_ov054_0225b35c[2];
extern const u8 data_ov054_0225b360[4];
extern const u8 data_ov054_0225b364[5];
extern const s32 data_ov054_0225b380[5];
extern const Unk_ov054_Vec data_ov054_0225b394[2];
extern const Unk_ov054_0225b3ac_Row data_ov054_0225b3ac[2];
extern const u8 data_ov054_0225b3c4[30];
extern const s32 data_ov054_0225b3e4[22];
extern u8 *data_ov054_0225b6e8[2];
extern u8 *data_ov054_0225b7b8[2];
extern char data_ov054_0225b8a8[];
extern char data_ov054_0225b8b8[];
extern char data_ov054_0225b8c8[];
extern char data_ov054_0225b8d8[];
extern char data_ov054_0225b8e8[];
extern void *data_ov054_0225b910[5];
extern u8 data_ov054_0225b924[];
extern u8 data_ov054_0225b93c[];
extern Unk_ov054_SceneEntry data_ov054_0225b954;
extern u32 data_ov054_0225b96c[2][3];
extern u8 data_ov054_0225b984[];
extern u8 data_ov054_0225b9a0[];
extern Unk_ov054_0225b9c4_Ent data_ov054_0225bb00[16];
extern Unk_ov054_0225aef4_Ent data_ov054_0225bc9c[12];
}
// Member-function-pointer constants {function, this adjustment}: the tables are filled from them. They are
// named objects so that their order in .data can be set (see tools/pipeline/linking.md); the functions are
// referenced by their symbol names.
extern "C" void _ZN18Unk_ov054_0225b9c419func_ov054_02259178Ev();
extern "C" void _ZN18Unk_ov054_0225b9c419func_ov054_022591acEv();
extern "C" void _ZN18Unk_ov054_0225b9c419func_ov054_02259200Ev();
extern "C" void _ZN18Unk_ov054_0225b9c419func_ov054_02259224Ev();
extern "C" void _ZN18Unk_ov054_0225b9c419func_ov054_02259258Ev();
extern "C" void _ZN18Unk_ov054_0225b9c419func_ov054_022594f4Ei();
extern "C" void _ZN18Unk_ov054_0225b9c419func_ov054_02259534Ei();
extern "C" void _ZN18Unk_ov054_0225b9c419func_ov054_022595c4Ei();
extern "C" void _ZN18Unk_ov054_0225b9c419func_ov054_0225981cEi();
extern "C" void _ZN18Unk_ov054_0225b9c419func_ov054_022598bcEi();
extern "C" void _ZN18Unk_ov054_0225b9c419func_ov054_022598c0Ei();
extern "C" void _ZN18Unk_ov054_0225b9c419func_ov054_02259decEv();
extern "C" void _ZN18Unk_ov054_0225b9c419func_ov054_02259e54Ev();
extern "C" void _ZN18Unk_ov054_0225b9c419func_ov054_02259e78Ev();
extern "C" void _ZN18Unk_ov054_0225b9c419func_ov054_02259ef8Ev();
extern "C" void _ZN18Unk_ov054_0225b9c419func_ov054_0225a074Ev();
extern "C" void _ZN18Unk_ov054_0225b9c419func_ov054_0225a08cEv();
extern "C" void _ZN18Unk_ov054_0225b9c419func_ov054_0225a100Ev();
extern "C" void _ZN18Unk_ov054_0225b9c419func_ov054_0225a124Ev();
extern "C" void _ZN18Unk_ov054_0225b9c419func_ov054_0225a240Ev();
extern "C" void _ZN18Unk_ov054_0225b9c419func_ov054_0225a318Ev();
extern "C" void _ZN18Unk_ov054_0225b9c419func_ov054_0225a3ccEv();
extern "C" void _ZN18Unk_ov054_0225b9c419func_ov054_0225a460Ev();
extern "C" void _ZN18Unk_ov054_0225b9c419func_ov054_0225a4c4Ev();
extern "C" void _ZN18Unk_ov054_0225b9c419func_ov054_0225a580Ev();
extern "C" void _ZN18Unk_ov054_0225b9c419func_ov054_0225a5ccEv();
extern "C" void _ZN18Unk_ov054_0225ba5419func_ov054_0225a994Ev();
extern "C" void _ZN18Unk_ov054_0225ba5419func_ov054_0225a998Ev();
extern "C" void _ZN18Unk_ov054_0225ba5419func_ov054_0225a99cEv();
extern "C" void _ZN18Unk_ov054_0225ba5419func_ov054_0225a9f4Ev();
extern "C" void _ZN18Unk_ov054_0225ba5419func_ov054_0225a9f8Ev();
extern "C" void _ZN18Unk_ov054_0225ba5419func_ov054_0225aa94Ev();
extern "C" void _ZN18Unk_ov054_0225ba5419func_ov054_0225aa98Ev();
extern "C" void _ZN18Unk_ov054_0225ba5419func_ov054_0225aafcEv();
extern "C" void _ZN18Unk_ov054_0225ba5419func_ov054_0225ab00Ev();
extern "C" void _ZN18Unk_ov054_0225ba5419func_ov054_0225ab54Ev();
extern "C" void _ZN18Unk_ov054_0225ba5419func_ov054_0225ab88Ev();
extern "C" void _ZN18Unk_ov054_0225ba5419func_ov054_0225abd4Ev();
extern "C" void _ZN18Unk_ov054_0225ba5419func_ov054_0225ac24Ev();
extern "C" void _ZN18Unk_ov054_0225ba5419func_ov054_0225ac28Ev();
extern "C" void _ZN18Unk_ov054_0225ba5419func_ov054_0225ac2cEv();
extern "C" void _ZN18Unk_ov054_0225ba5419func_ov054_0225ac58Ev();
extern "C" void _ZN18Unk_ov054_0225ba5419func_ov054_0225ac74Ev();
extern "C" void _ZN18Unk_ov054_0225ba5419func_ov054_0225acdcEv();
extern "C" void _ZN18Unk_ov054_0225ba5419func_ov054_0225ad34Ev();
extern "C" void _ZN18Unk_ov054_0225ba5419func_ov054_0225ad94Ev();
extern "C" void _ZN18Unk_ov054_0225ba5419func_ov054_0225adfcEv();
extern "C" void _ZN18Unk_ov054_0225ba5419func_ov054_0225ae1cEv();
extern "C" void _ZN18Unk_ov054_0225ba5419func_ov054_0225ae48Ev();
extern "C" void _ZN18Unk_ov054_0225ba5419func_ov054_0225ae5cEv();
extern "C" {
extern void *data_ov054_0225b6a0[2];
extern void *data_ov054_0225b6a8[2];
extern void *data_ov054_0225b6b0[2];
extern void *data_ov054_0225b6b8[2];
extern void *data_ov054_0225b6c0[2];
extern void *data_ov054_0225b6c8[2];
extern void *data_ov054_0225b6d0[2];
extern void *data_ov054_0225b6d8[2];
extern void *data_ov054_0225b6e0[2];
extern void *data_ov054_0225b6f0[2];
extern void *data_ov054_0225b6f8[2];
extern void *data_ov054_0225b700[2];
extern void *data_ov054_0225b708[2];
extern void *data_ov054_0225b710[2];
extern void *data_ov054_0225b718[2];
extern void *data_ov054_0225b720[2];
extern void *data_ov054_0225b728[2];
extern void *data_ov054_0225b730[2];
extern void *data_ov054_0225b738[2];
extern void *data_ov054_0225b740[2];
extern void *data_ov054_0225b748[2];
extern void *data_ov054_0225b750[2];
extern void *data_ov054_0225b758[2];
extern void *data_ov054_0225b760[2];
extern void *data_ov054_0225b768[2];
extern void *data_ov054_0225b770[2];
extern void *data_ov054_0225b778[2];
extern void *data_ov054_0225b780[2];
extern void *data_ov054_0225b788[2];
extern void *data_ov054_0225b790[2];
extern void *data_ov054_0225b798[2];
extern void *data_ov054_0225b7a0[2];
extern void *data_ov054_0225b7a8[2];
extern void *data_ov054_0225b7b0[2];
extern void *data_ov054_0225b7c0[2];
extern void *data_ov054_0225b7c8[2];
extern void *data_ov054_0225b7d0[2];
extern void *data_ov054_0225b7d8[2];
extern void *data_ov054_0225b7e0[2];
extern void *data_ov054_0225b7e8[2];
extern void *data_ov054_0225b7f0[2];
extern void *data_ov054_0225b7f8[2];
extern void *data_ov054_0225b800[2];
extern void *data_ov054_0225b808[2];
extern void *data_ov054_0225b810[2];
extern void *data_ov054_0225b818[2];
extern void *data_ov054_0225b820[2];
extern void *data_ov054_0225b828[2];
extern void *data_ov054_0225b830[2];
extern void *data_ov054_0225b838[2];
extern void *data_ov054_0225b840[2];
extern void *data_ov054_0225b848[2];
extern void *data_ov054_0225b850[2];
extern void *data_ov054_0225b858[2];
extern void *data_ov054_0225b860[2];
extern void *data_ov054_0225b868[2];
extern void *data_ov054_0225b870[2];
extern void *data_ov054_0225b878[2];
extern void *data_ov054_0225b880[2];
extern void *data_ov054_0225b888[2];
extern void *data_ov054_0225b890[2];
extern void *data_ov054_0225b898[2];
extern void *data_ov054_0225b8a0[2];
}
// symbols.txt labels inside the tables above
#define data_ov054_0225b3b4 ((const u8 *)data_ov054_0225b3ac + 8)
#define data_ov054_0225b974 ((char **)((u8 *)data_ov054_0225b96c + 8))
#define data_ov054_0225bb08 ((Unk_ov054_0225b9c4_Flag *)((u8 *)data_ov054_0225bb00 + 8))
#define data_ov054_0225bca4 ((Unk_ov054_0225aef4_Ent *)((u8 *)data_ov054_0225bc9c + 8))

// Data. mwcc sorts a file's data by size, and the order of equal-sized objects follows from the order in which
// the objects are created (see tools/pipeline/linking.md): the definitions are in the order that reproduces the
// original layout, part of them here and part after the functions.
extern "C" void *data_ov054_0225b718[2] = {(void *)_ZN18Unk_ov054_0225b9c419func_ov054_022591acEv, 0};
extern "C" void *data_ov054_0225b748[2] = {(void *)_ZN18Unk_ov054_0225b9c419func_ov054_02259200Ev, 0};
extern "C" void *data_ov054_0225b838[2] = {(void *)_ZN18Unk_ov054_0225ba5419func_ov054_0225ab54Ev, 0};
extern "C" void *data_ov054_0225b7e0[2] = {(void *)_ZN18Unk_ov054_0225b9c419func_ov054_02259224Ev, 0};
extern "C" void *data_ov054_0225b890[2] = {(void *)_ZN18Unk_ov054_0225b9c419func_ov054_0225a08cEv, 0};
extern "C" const u8 data_ov054_0225b350[2] = {0x34, 0};
extern "C" u32 data_ov054_0225b96c[2][3] = {
    {(u32)data_ov054_0225b8c8, (u32)data_ov054_0225b8a8, (u32)data_ov054_0225b8e8},
    {(u32)data_ov054_0225b8d8, (u32)data_ov054_0225b8b8, 0},
};
extern "C" void *data_ov054_0225b6b8[2] = {(void *)_ZN18Unk_ov054_0225b9c419func_ov054_02259ef8Ev, 0};
extern "C" const u8 data_ov054_0225b344[2] = {0x34, 0};
extern "C" void *data_ov054_0225b820[2] = {(void *)_ZN18Unk_ov054_0225ba5419func_ov054_0225aafcEv, 0};
extern "C" char data_ov054_0225b8a8[] = "sp_npc_drama5";
extern "C" void *data_ov054_0225b848[2] = {(void *)_ZN18Unk_ov054_0225ba5419func_ov054_0225abd4Ev, 0};
extern "C" void *data_ov054_0225b6c8[2] = {(void *)_ZN18Unk_ov054_0225b9c419func_ov054_0225a318Ev, 0};
extern "C" void *data_ov054_0225b790[2] = {(void *)_ZN18Unk_ov054_0225b9c419func_ov054_0225981cEi, 0};
extern "C" void *data_ov054_0225b910[5] = {
    (void *)data_ov054_0225b358, (void *)data_ov054_0225b364, (void *)data_ov054_0225b34c,
    (void *)data_ov054_0225b354, (void *)data_ov054_0225b360,
};
extern "C" const s32 data_ov054_0225b3e4[22] = {
    0,        10000,   50000,   100000,  200000,  300000,  400000,  500000,  600000,  700000,  800000,
    900000,   1000000, 1100000, 1200000, 1300000, 1400000, 1500000, 1600000, 3200000, 6400000, 9999999,
};
extern "C" void *data_ov054_0225b6c0[2] = {(void *)_ZN18Unk_ov054_0225b9c419func_ov054_02259224Ev, 0};
extern "C" Unk_ov054_0225b9c4_Ent data_ov054_0225bb00[16] = {
    {NULL, 0},
    {*(Unk_ov054_0225b9c4_Fn *)data_ov054_0225b6d8, 0},
    {*(Unk_ov054_0225b9c4_Fn *)data_ov054_0225b7a0, 0},
    {*(Unk_ov054_0225b9c4_Fn *)data_ov054_0225b7a8, 0},
    {*(Unk_ov054_0225b9c4_Fn *)data_ov054_0225b788, 0},
    {*(Unk_ov054_0225b9c4_Fn *)data_ov054_0225b780, 0},
    {*(Unk_ov054_0225b9c4_Fn *)data_ov054_0225b6c8, 0},
    {*(Unk_ov054_0225b9c4_Fn *)data_ov054_0225b6d0, 0},
    {*(Unk_ov054_0225b9c4_Fn *)data_ov054_0225b808, 1},
    {*(Unk_ov054_0225b9c4_Fn *)data_ov054_0225b890, 1},
    {*(Unk_ov054_0225b9c4_Fn *)data_ov054_0225b7c0, 0},
    {*(Unk_ov054_0225b9c4_Fn *)data_ov054_0225b8a0, 0},
    {*(Unk_ov054_0225b9c4_Fn *)data_ov054_0225b6b8, 1},
    {*(Unk_ov054_0225b9c4_Fn *)data_ov054_0225b6e0, 1},
    {*(Unk_ov054_0225b9c4_Fn *)data_ov054_0225b760, 1},
    {*(Unk_ov054_0225b9c4_Fn *)data_ov054_0225b700, 1},
};
extern "C" u8 data_ov054_0225b984[] = "npc_sp/model/pga_tex.nsbtx";
extern "C" void *data_ov054_0225b898[2] = {(void *)_ZN18Unk_ov054_0225ba5419func_ov054_0225ae1cEv, 0};
extern "C" u8 *data_ov054_0225b6e8[2] = {data_ov054_0225b984, data_ov054_0225b9a0};
extern "C" void *data_ov054_0225b6a8[2] = {(void *)_ZN18Unk_ov054_0225b9c419func_ov054_02259224Ev, 0};
extern "C" void *data_ov054_0225b6b0[2] = {(void *)_ZN18Unk_ov054_0225b9c419func_ov054_022598c0Ei, 0};
extern "C" void *data_ov054_0225b6d0[2] = {(void *)_ZN18Unk_ov054_0225b9c419func_ov054_0225a240Ev, 0};
extern "C" void *data_ov054_0225b768[2] = {(void *)_ZN18Unk_ov054_0225b9c419func_ov054_022594f4Ei, 0};
extern "C" void *data_ov054_0225b7e8[2] = {(void *)_ZN18Unk_ov054_0225ba5419func_ov054_0225ac24Ev, 0};
extern "C" void *data_ov054_0225b760[2] = {(void *)_ZN18Unk_ov054_0225b9c419func_ov054_02259e54Ev, 0};
extern "C" Unk_ov054_0225aef4_Ent data_ov054_0225bc9c[12] = {
    {*(Unk_ov054_0225ba54_Fn *)data_ov054_0225b708, *(Unk_ov054_0225ba54_Fn *)data_ov054_0225b750},
    {*(Unk_ov054_0225ba54_Fn *)data_ov054_0225b898, *(Unk_ov054_0225ba54_Fn *)data_ov054_0225b730},
    {*(Unk_ov054_0225ba54_Fn *)data_ov054_0225b738, *(Unk_ov054_0225ba54_Fn *)data_ov054_0225b740},
    {*(Unk_ov054_0225ba54_Fn *)data_ov054_0225b878, *(Unk_ov054_0225ba54_Fn *)data_ov054_0225b7c8},
    {*(Unk_ov054_0225ba54_Fn *)data_ov054_0225b868, *(Unk_ov054_0225ba54_Fn *)data_ov054_0225b7d0},
    {*(Unk_ov054_0225ba54_Fn *)data_ov054_0225b858, *(Unk_ov054_0225ba54_Fn *)data_ov054_0225b7e8},
    {*(Unk_ov054_0225ba54_Fn *)data_ov054_0225b848, *(Unk_ov054_0225ba54_Fn *)data_ov054_0225b7f0},
    {*(Unk_ov054_0225ba54_Fn *)data_ov054_0225b838, *(Unk_ov054_0225ba54_Fn *)data_ov054_0225b810},
    {*(Unk_ov054_0225ba54_Fn *)data_ov054_0225b820, *(Unk_ov054_0225ba54_Fn *)data_ov054_0225b828},
    {*(Unk_ov054_0225ba54_Fn *)data_ov054_0225b830, *(Unk_ov054_0225ba54_Fn *)data_ov054_0225b840},
    {*(Unk_ov054_0225ba54_Fn *)data_ov054_0225b860, *(Unk_ov054_0225ba54_Fn *)data_ov054_0225b870},
    {*(Unk_ov054_0225ba54_Fn *)data_ov054_0225b7f8, *(Unk_ov054_0225ba54_Fn *)data_ov054_0225b6f8},
};
extern "C" void *data_ov054_0225b710[2] = {(void *)_ZN18Unk_ov054_0225b9c419func_ov054_02259258Ev, 0};
extern "C" void *data_ov054_0225b8a0[2] = {(void *)_ZN18Unk_ov054_0225b9c419func_ov054_0225a124Ev, 0};
extern "C" void *data_ov054_0225b738[2] = {(void *)_ZN18Unk_ov054_0225ba5419func_ov054_0225ad94Ev, 0};
extern "C" u8 data_ov054_0225b9a0[] = "npc_sp/model/pgb_tex.nsbtx";
extern "C" void *data_ov054_0225b888[2] = {(void *)_ZN18Unk_ov054_0225b9c419func_ov054_02259258Ev, 0};
extern "C" void *data_ov054_0225b880[2] = {(void *)_ZN18Unk_ov054_0225b9c419func_ov054_02259224Ev, 0};
extern "C" void *data_ov054_0225b7f0[2] = {(void *)_ZN18Unk_ov054_0225ba5419func_ov054_0225ab88Ev, 0};
extern "C" void *data_ov054_0225b870[2] = {(void *)_ZN18Unk_ov054_0225ba5419func_ov054_0225a99cEv, 0};
extern "C" void *data_ov054_0225b868[2] = {(void *)_ZN18Unk_ov054_0225ba5419func_ov054_0225ac58Ev, 0};
extern "C" void *data_ov054_0225b808[2] = {(void *)_ZN18Unk_ov054_0225b9c419func_ov054_0225a100Ev, 0};
extern "C" const u8 data_ov054_0225b340[2] = {0x34, 0};

extern "C" Unk_ov054_0225ba54 *func_ov054_0225b228() { return new Unk_ov054_0225ba54; }

BOOL Unk_ov054_0225ba54::vfunc_04() {
    Unk_ov054_0225b0ac_Local l;
    Unk_ov054_0225ba54_Vec vec;
    if (!Unk_020d8bc8::vfunc_04()) {
        return FALSE;
    }
    func_0201bc28((Unk_0201bc1c *)&unk_658);
    unk_658.func_ov054_0225a928(this);
    if (func_ov054_02258e34()) {
        BOOL m;
        if (func_0204b2d4(&unk_ea)) {
            l.unk_04 = data_ov054_0225b35c[0];
            if (func_0204b25c(&unk_ea) == func_0204b25c(&l.unk_04)) {
                m = TRUE;
            } else {
                m = FALSE;
            }
        } else {
            if (unk_ea == data_ov054_0225b35c[0]) {
                m = TRUE;
            } else {
                m = FALSE;
            }
        }
        if (m) {
            unk_804 = 0;
            unk_808 = 1;
            unk_5c = data_ov054_0225b3ac[1].a;
            unk_60 = data_ov054_0225b3ac[1].b;
            unk_64 = data_ov054_0225b3ac[1].c;
            l.unk_06[0] = 0;
            l.unk_06[1] = 0;
            l.unk_06[2] = 0;
            vec.x = data_ov054_0225b3ac[0].a;
            vec.y = data_ov054_0225b3ac[0].b;
            vec.z = data_ov054_0225b3ac[0].c;
            func_02002cf8(0x7a, data_ov054_0225b35c[1], &vec, &l.unk_06[0], this);
        } else {
            unk_804 = 1;
            unk_808 = 0;
            unk_5c = data_ov054_0225b3ac[0].a;
            unk_60 = data_ov054_0225b3ac[0].b;
            unk_64 = data_ov054_0225b3ac[0].c;
        }
    } else {
        func_0209cf18(&l);
        u8 b = l.unk_01;
        unk_804 = 0;
        if (!func_020a032c()) {
            if (b >= 0x16 || b < 7) {
                unk_804 = 1;
            }
        }
        func_0201a8d0(&unk_350, 2, 0x399, 0xcc, 0x133);
        l.unk_02 = data_ov054_0225b35c[unk_804];
        func_0201bda8(&l.unk_02);
        unk_ea = data_ov054_0225b35c[unk_804];
    }
    func_0203e468(0x5000);
    unk_80e = data_020c6cc8;
    return TRUE;
}

BOOL Unk_ov054_0225ba54::vfunc_00() {
    if (!Unk_020d8bc8::vfunc_00()) {
        return FALSE;
    }
    void *r = func_0209750c();
    if (func_ov054_02258e34()) {
        if (func_020a62a0()) {
            func_ov054_0225aef4(2);
        } else {
            func_ov054_0225aef4(9);
        }
    } else {
        if (func_020a032c() && func_02098044(r, 9) == 0) {
            func_ov054_0225aef4(0);
        } else {
            func_ov054_0225aef4(2);
        }
    }
    unk_800 = unk_8e;
    unk_4cc.unk_1c |= 2;
    if (unk_804 == 0) {
        func_02034e10(0x11, 0x55, 0x7f, 0);
    } else if (unk_804 == 1) {
        if (!func_ov054_02258e34()) {
            func_02034e10(0x11, 0x56, 0x7f, 0);
        }
    }
    return TRUE;
}

BOOL Unk_ov054_0225ba54::vfunc_0c() {
    if (!Unk_020d8bc8::vfunc_0c()) {
        return FALSE;
    }
    if (unk_804 == 0) {
        func_02034d84(0x55);
    } else if (unk_804 == 1) {
        if (!func_ov054_02258e34()) {
            func_02034d84(0x56);
        }
    }
    return TRUE;
}

u8 *Unk_ov054_0225ba54::vfunc_6c() { return ((u8 **)data_ov054_0225b6e8)[unk_804]; }

u8 *Unk_ov054_0225ba54::vfunc_70() { return ((u8 **)data_ov054_0225b7b8)[unk_804]; }

BOOL Unk_ov054_0225ba54::vfunc_68() {
    BOOL r = FALSE;
    if (data_ov054_0225bca4[unk_654].enter) {
        r = (this->*data_ov054_0225bc9c[unk_654].exit)();
    }
    return r;
}

void Unk_ov054_0225ba54::func_ov054_0225aef4(s32 state) {
    BOOL ok = TRUE;
    if (data_ov054_0225bc9c[state].enter) {
        ok = (this->*data_ov054_0225bc9c[state].enter)();
    }
    if (ok) {
        unk_654 = state;
    }
}

BOOL Unk_ov054_0225ba54::func_ov054_0225ae60() {
    s32 a, b;
    s32 c, d;
    Unk_ov054_0225ba54_Vec v;
    Unk_ov054_0225ba54_Vec w;
    Unk_ov054_0225ba54_Vec *p = func_020947f0(4);
    v.x = p->x;
    v.y = p->y;
    v.z = p->z;
    a = 0;
    b = 0;
    func_0204ee10(&a, &b, &v);
    s32 old = unk_808;
    s32 i = 0;
    s32 z = i;
    for (; i < 2; i++) {
        c = z;
        d = z;
        const Unk_ov054_Vec *q = &data_ov054_0225b394[i];
        w.x = q->x;
        w.y = q->y;
        w.z = q->z;
        func_0204ee10(&c, &d, &w);
        if (a == c && b == d) {
            unk_808 = i;
            break;
        }
    }
    BOOL r;
    if (old == unk_808) {
        r = FALSE;
    } else {
        r = TRUE;
    }
    return r;
}

BOOL Unk_ov054_0225ba54::func_ov054_0225ae5c() { return TRUE; }

BOOL Unk_ov054_0225ba54::func_ov054_0225ae48() {
    func_0203d704(this, 0);
    return TRUE;
}

BOOL Unk_ov054_0225ba54::func_ov054_0225ae1c() {
    Unk_ov054_0225ba54_Vec v;
    const Unk_ov054_Vec *p = &data_ov054_0225b394[0];
    v.x = p->x;
    v.y = p->y;
    v.z = p->z;
    func_02094b0c(&v, 0x400, 4);
    return TRUE;
}

BOOL Unk_ov054_0225ba54::func_ov054_0225adfc() {
    if (func_020951b8(4) == 0) {
        func_ov054_0225aef4(4);
    }
    return TRUE;
}

BOOL Unk_ov054_0225ba54::func_ov054_0225ad94() {
    func_02019614(&unk_564, 1, unk_80e);
    unk_80c = 0xff;
    if (unk_810 == 0) {
        s32 v;
        if (func_0202e18c(this, &v, 0)) {
            unk_80c = func_02063b8c(5) * 20 + 100;
        }
    }
    unk_80e = data_020c6cc8;
    return TRUE;
}

BOOL Unk_ov054_0225ba54::func_ov054_0225ad34() {
    if (!func_ov054_02258e34()) {
        if (func_ov054_0225ae60()) {
            func_ov054_0225aef4(3);
            func_0201a8c4(&unk_350, data_ov054_0225b348[unk_808]);
        }
        if (unk_80c != 0xff) {
            if (!func_020e7500(&unk_80c)) {
                func_ov054_0225aef4(7);
            }
        }
    }
    return TRUE;
}

BOOL Unk_ov054_0225ba54::func_ov054_0225acdc() {
    u32 i = unk_808 * 12;
    func_020196b4(&unk_564, 6, 1, *(s32 *)((u8 *)data_ov054_0225b3ac + i), *(s32 *)(data_ov054_0225b3b4 + i), 0x800, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL Unk_ov054_0225ba54::func_ov054_0225ac74() {
    func_ov054_02258e34();
    if (func_ov054_0225ae60()) {
        func_ov054_0225aef4(3);
        func_0201a8c4(&unk_350, data_ov054_0225b348[unk_808]);
        return TRUE;
    }
    if (func_020197a8(&unk_564) == 6) {
        if (func_02019790(&unk_564)) {
            func_ov054_0225aef4(6);
        }
    }
    return TRUE;
}

BOOL Unk_ov054_0225ba54::func_ov054_0225ac58() {
    func_02014198(&unk_618, 1, 0);
    return TRUE;
}

BOOL Unk_ov054_0225ba54::func_ov054_0225ac2c() {
    if (func_02014220(&unk_618) == 0) {
        func_0203d67c(this);
        func_ov054_0225aef4(5);
    }
    return TRUE;
}

BOOL Unk_ov054_0225ba54::func_ov054_0225ac28() { return TRUE; }

BOOL Unk_ov054_0225ba54::func_ov054_0225ac24() { return TRUE; }

BOOL Unk_ov054_0225ba54::func_ov054_0225abd4() {
    func_0201a8c4(&unk_350, 0);
    func_020196b4(&unk_564, 3, 1, 0, 0, 0, unk_800, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL Unk_ov054_0225ba54::func_ov054_0225ab88() {
    func_ov054_02258e34();
    if (func_ov054_0225ae60()) {
        func_ov054_0225aef4(3);
        return TRUE;
    }
    if (func_020197a8(&unk_564) == 3) {
        if (func_02019790(&unk_564)) {
            func_ov054_0225aef4(2);
        }
    }
    return TRUE;
}

BOOL Unk_ov054_0225ba54::func_ov054_0225ab54() {
    func_020196b4(&unk_564, 10, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL Unk_ov054_0225ba54::func_ov054_0225ab00() {
    Unk_ov054_0225ab00_Vec v;
    func_ov054_02258e34();
    Unk_ov054_0225ba54_Vec *p = func_020947f0(4);
    v.x = p->x;
    v.y = p->y;
    v.z = p->z;
    if (func_020197a8(&unk_564) == 10) {
        if (func_02019790(&unk_564)) {
            unk_80e = 0x18;
            func_ov054_0225aef4(2);
        }
    }
    return TRUE;
}

BOOL Unk_ov054_0225ba54::func_ov054_0225aafc() { return TRUE; }

BOOL Unk_ov054_0225ba54::func_ov054_0225aa98() {
    s32 a, b;
    s32 v[3];
    if (func_02067918(0)->unk_04 == 5) {
        func_020b0f48();
        void *r = func_0204da0c();
        if (r) {
            if (func_0204d780(r, &v[0], &a, &b)) {
                v[2] += 0x1000;
                func_020b4f18(func_020b4934(), 0, &v[0], 0xec00000, 0, 2, 2);
            }
        }
        func_ov054_0225aef4(5);
    }
    return TRUE;
}

BOOL Unk_ov054_0225ba54::func_ov054_0225aa94() { return TRUE; }

BOOL Unk_ov054_0225ba54::func_ov054_0225a9f8() {
    if (func_0201ba88()) {
        s32 a = 4;
        s32 b = 4;
        if (func_0201b9e8(this, &a, &b) && a == data_020cbb18->unk_64 && a == b) {
            func_0201b9fc(1, data_020cbb18->unk_64, data_020cbb18->unk_64);
            unk_658.vfunc_08();
            func_02015ab0(&unk_658, func_0201bc4c(4));
            func_ov054_0225aef4(4);
        } else if (func_020a62a0() && b == 4) {
            func_0201b9fc(1, data_020cbb18->unk_64, 4);
            func_ov054_0225aef4(2);
        }
    }
    return TRUE;
}

BOOL Unk_ov054_0225ba54::func_ov054_0225a9f4() { return TRUE; }

BOOL Unk_ov054_0225ba54::func_ov054_0225a99c() {
    if (func_0201ba88()) {
        s32 a = 4;
        s32 b = 4;
        if (func_0201b9e8(this, &a, &b)) {
            if (a == 4) {
                if (func_020a62a0()) {
                    func_0201b9fc(1, data_020cbb18->unk_64, 4);
                    func_ov054_0225aef4(2);
                }
            }
        }
    }
    return TRUE;
}

BOOL Unk_ov054_0225ba54::func_ov054_0225a998() { return TRUE; }

BOOL Unk_ov054_0225ba54::func_ov054_0225a994() { return TRUE; }

Unk_ov054_0225b9c4::Unk_ov054_0225b9c4() {}

Unk_ov054_0225b9c4::~Unk_ov054_0225b9c4() {}

void Unk_ov054_0225b9c4::func_ov054_0225a928(Unk_ov054_0225ba54 *o) {
    vfunc_08();
    unk_ac = o;
}

void Unk_ov054_0225b9c4::func_ov054_0225a910() {
    if (func_02073a78()) {
        func_0209f1c4();
    }
}

void Unk_ov054_0225b9c4::vfunc_78(Unk_ov054_0225b9c4_Out *out) {
    void *g0 = func_0209750c();
    s32 r4 = 0;
    void *g1 = func_02099864(func_0209865c(g0));
    BOOL r7 = r4;
    u16 v[3];
    if (unk_ac->func_ov054_02258e34()) {
        r7 = TRUE;
        goto end;
    }
    if (func_020a032c()) {
        if (!func_02098044(g0, 9)) {
            if (func_020a0318() || func_020a0304()) {
                out->unk_04 = 0x12;
            } else {
                out->unk_04 = 0x20;
            }
            func_0209801c(g0, 9);
        } else {
            out->unk_04 = 7;
        }
        r4 = 2;
        goto end;
    }
    v[1] = 0xd006;
    if (func_02099f98(g1, &v[1]) || (v[2] = 0xd007, func_02099f98(g1, &v[2]))) {
        out->unk_04 = 0x5f;
        r4 = 0;
        goto end;
    }
    if (unk_ac->unk_810 == 0) {
        if (func_0202e18c(unk_ac, v, r4)) {
            Unk_ov054_0225a7c4_Bits *b = (Unk_ov054_0225a7c4_Bits *)v;
            out->unk_04 = *(data_ov054_0225b3c4 + b->mid * 6 + b->hi);
            r4 = 1;
            unk_ac->unk_810 = r4;
            goto end;
        }
    }
    r7 = TRUE;
end:
    if (r7) {
        out->unk_04 = data_ov054_0225b340[unk_ac->unk_808];
        r4 = 0;
        if (unk_ac->unk_808 == 0) {
            if (unk_ac->func_ov054_02258e44()) {
                out->unk_04 = 8;
            }
        }
    }
    out->unk_00 = data_ov054_0225b96c[unk_ac->unk_804][r4];
}

u32 Unk_ov054_0225b9c4::func_ov054_0225a7a8() {
    if (func_0206e944()) {
        return 0x61;
    }
    return func_ov054_0225a78c();
}

u32 Unk_ov054_0225b9c4::func_ov054_0225a78c() {
    if (func_0206e974()) {
        return 0x58;
    }
    return func_ov054_0225a770();
}

u8 Unk_ov054_0225b9c4::func_ov054_0225a770() {
    s32 r = func_0206e960();
    if (r) {
        return r + 0x58;
    }
    return 9;
}

u32 Unk_ov054_0225b9c4::func_ov054_0225a758() {
    if (func_0206e90c()) {
        return 5;
    }
    return 9;
}

void Unk_ov054_0225b9c4::func_ov054_0225a720() {
    if (unk_b8 == 0) {
        u16 v = 0x1565;
        func_02014e60(this, &v, 0, 5, 1);
        unk_b8 = 1;
    }
}

void Unk_ov054_0225b9c4::vfunc_80() {
    s32 i = unk_b4;
    if (data_ov054_0225bb08[i].flag != 0) {
        Unk_ov054_0225b9c4_Ent *e = &data_ov054_0225bb00[i];
        if (e->fn) {
            (this->*e->fn)();
        }
    }
}

void Unk_ov054_0225b9c4::vfunc_84() {
    s32 i = unk_b4;
    if (data_ov054_0225bb08[i].flag == 0) {
        Unk_ov054_0225b9c4_Ent *e = &data_ov054_0225bb00[i];
        if (e->fn) {
            (this->*e->fn)();
        }
    }
}

void Unk_ov054_0225b9c4::func_ov054_0225a690(s32 v) {
    unk_b4 = v;
}

void Unk_ov054_0225b9c4::func_ov054_0225a5cc() {
    void *m = unk_3c;
    u32 cb = data_ov054_0225b96c[unk_ac->unk_804][0];
    s32 r4 = 0;
    u16 v[2];
    unk_b8 = r4;
    if (func_0206ed18()) {
        switch (func_0206e98c()) {
        case 0:
            r4 = func_ov054_0225a7a8();
            if (r4 == 9) {
                r4 = 7;
            }
            break;
        case 1:
            if (func_020968b8(r4)) {
                r4 = 0xf;
            } else {
                r4 = 0xb;
            }
            break;
        case 2:
            r4 = 0x5c;
            break;
        case 3:
            r4 = 0x62;
            break;
        }
        v[1] = 0x1565;
        func_02014ce4(this, &v[1], 0, 5, 1);
        func_ov054_0225a690(10);
    } else {
        r4 = 3;
        func_02014f74(this);
        func_ov054_0225a690(0);
    }
    *(u8 *)v = r4;
    func_02067a84(m, v, cb);
}

void Unk_ov054_0225b9c4::func_ov054_0225a580() {
    void *m = unk_3c;
    u32 cb = data_ov054_0225b96c[unk_ac->unk_804][0];
    u8 buf[1];
    s32 r1;
    if (func_0206ed18()) {
        r1 = 0x54;
    } else {
        r1 = 0x53;
    }
    buf[0] = r1;
    func_02067a84(m, buf, cb);
    func_ov054_0225a690(0);
}

void Unk_ov054_0225b9c4::func_ov054_0225a4c4() {
    void *m = unk_3c;
    u32 cb = data_ov054_0225b96c[unk_ac->unk_804][0];
    s32 r4, r6;
    u16 v[3];
    if (func_0206ed18()) {
        r4 = func_0206e8e8();
        func_02015958(this, r4, 7, 10, 1, 0);
        if (r4 >= 0x1388) {
            r6 = 0x1d;
        } else {
            r6 = 0x1e;
        }
        v[1] = 0x149b;
        func_02014ce4(this, &v[1], 0, 5, 1);
        func_ov054_0225a690(10);
        unk_c0 = func_02097404(func_02098320(func_0209750c()));
        func_020973ec(unk_c0 + r4);
    } else {
        r6 = 0x1c;
        func_02014f74(this);
        func_ov054_0225a690(0);
    }
    *(u8 *)v = r6;
    func_02067a84(m, v, cb);
}

void Unk_ov054_0225b9c4::func_ov054_0225a460() {
    void *m = unk_3c;
    u32 cb = data_ov054_0225b96c[unk_ac->unk_804][0];
    u8 buf[1];
    s32 r4;
    if (unk_ac->func_ov054_02258e44()) {
        if (func_0206ed18()) {
            r4 = 0x63;
        } else {
            r4 = 0x64;
        }
    } else {
        if (func_0206ed18()) {
            r4 = 0x5d;
        } else {
            r4 = 0x5e;
        }
    }
    func_ov054_0225a690(0);
    buf[0] = r4;
    func_02067a84(m, buf, cb);
}

void Unk_ov054_0225b9c4::func_ov054_0225a3cc() {
    void *m = unk_3c;
    u32 cb[1] = { data_ov054_0225b96c[unk_ac->unk_804][0]};
    s32 r4;
    Unk_ov054_0225a3cc_Msg l;
    if (func_0206ed18()) {
        r4 = 0xc;
        l.d.w0 = 0;
        l.d.w1 = 0;
        func_0206e8b8(&l.d);
        u8 *q = (u8 *)&l;
        u32 b8 = q[8];
        u32 b7 = q[7];
        func_02015958(this, q[9] + 0x7d0, 1, 4, 0, 0);
        func_02015878(this, b8, 2);
        func_02015848(this, b7, 3);
    } else {
        r4 = 0xe;
        func_0206e9bc();
    }
    func_ov054_0225a690(0);
    l.id = r4;
    func_02067a84(m, &l, cb[0]);
}

void Unk_ov054_0225b9c4::func_ov054_0225a318() {
    void *m = unk_3c;
    u32 cb = data_ov054_0225b96c[unk_ac->unk_804][0];
    s32 r5;
    u16 v[2];
    if (func_0206ed18()) {
        r5 = func_02060388(data_021e58a8);
        func_02015958(this, r5, 4, 10, 1, 0);
        if (r5 == 0) {
            r5 = 0x15;
            func_020851a4(func_020850e0(), 0);
            func_0209e120(data_021d7350, 0x10);
        } else {
            r5 = 0x14;
        }
        v[1] = 0x149b;
        func_02014ce4(this, &v[1], 0, 5, 1);
        func_ov054_0225a690(10);
    } else {
        r5 = 0x13;
        func_02014f74(this);
        func_ov054_0225a690(0);
    }
    *(u8 *)v = r5;
    func_02067a84(m, v, cb);
}

void Unk_ov054_0225b9c4::func_ov054_0225a240() {
    void *m = unk_3c;
    u32 cb = data_ov054_0225b96c[unk_ac->unk_804][0];
    s32 r4;
    u16 v[3];
    if (func_0206ed18()) {
        s32 r6 = func_02097414(func_02098320(func_0209750c()));
        func_02015958(this, r6, 5, 10, 1, 0);
        func_02015958(this, func_02133150(r6, 200), 6, 10, 1, 0);
        r4 = 0x17;
        if (r6 > unk_bc) {
            v[1] = 0x149b;
            func_02014ce4(this, &v[1], 0, 5, 1);
        } else {
            v[2] = 0x149b;
            func_02014e60(this, &v[2], 0, 5, 1);
        }
        func_ov054_0225a690(10);
    } else {
        r4 = 0x18;
        func_02014f74(this);
        func_ov054_0225a690(0);
    }
    *(u8 *)v = r4;
    func_02067a84(m, v, cb);
}

extern "C" BOOL func_ov054_0225a218(u16 *p, s32 k) {
    if (k == 2) {
        BOOL r = FALSE;
        u32 v = *p;
        if (v >= 0x155f && v <= 0x1560) {
            r = TRUE;
        }
        return r;
    }
    return FALSE;
}

void Unk_ov054_0225b9c4::func_ov054_0225a124() {
    void *m = unk_3c;
    void *p;
    u32 cb = data_ov054_0225b96c[unk_ac->unk_804][0];
    s32 r4 = 0x51;
    u16 v[3];
    if (func_0206ed18()) {
        p = func_02099864(func_0209865c(func_0209750c()));
        if (func_0202e148(p)) {
            BOOL same;
            s32 r5 = func_0206ed38();
            v[1] = func_02099048(r5);
            if (r5 >= 0) {
                func_02099064(r5);
            }
            if (func_0204b2d4(&v[1])) {
                v[2] = 0xfff1;
                s32 a = func_0204b25c(&v[1]);
                if (a == func_0204b25c(&v[2])) {
                    same = TRUE;
                } else {
                    same = FALSE;
                }
            } else {
                if (v[1] == 0xfff1) {
                    same = TRUE;
                } else {
                    same = FALSE;
                }
            }
            if (!same) {
                func_02014ce4(this, &v[1], 2, 5, 1);
                if (!func_02099f98(p, &unk_ac->unk_ea)) {
                    r4 = 0x57;
                } else {
                    r4 = 0x50;
                }
                func_0209abb4(func_0209a108(p), 1);
            }
        }
    }
    func_ov054_0225a690(0);
    *(u8 *)v = r4;
    func_02067a84(m, v, cb);
}

void Unk_ov054_0225b9c4::func_ov054_0225a100() {
    if (unk_ac->func_ov054_02258e58()) {
        func_020a0948();
        func_ov054_0225a690(9);
    }
}

void Unk_ov054_0225b9c4::func_ov054_0225a08c() {
    void *m = unk_3c;
    if (func_020a0884()) {
        u8 buf[1];
        func_02067990(m);
        func_02067a6c(m);
        buf[0] = 2;
        func_02067a84(m, buf, data_ov054_0225b96c[unk_ac->unk_804][0]);
        func_ov054_0225a690(0);
    } else if (func_020a08a8()) {
        func_02067990(m);
        func_02067a6c(m);
        func_ov054_0225a690(0);
    }
}

void Unk_ov054_0225b9c4::func_ov054_0225a074() {
    func_02014f74(this);
    func_ov054_0225a690(0);
}

void Unk_ov054_0225b9c4::func_ov054_02259ef8() {
    void *v[4];
    u8 buf[16];
    u32 A[0x1c / 4];
    u32 B[0x18 / 4];
    void *ctx = unk_3c;
    u8 i;
    v[0] = 0;
    v[1] = 0;
    v[2] = *(char **)((u8 *)data_ov054_0225b96c + unk_ac->unk_804 * 12);
    s32 n = func_020eae78(func_020733bc());
    if (func_020e7500(&unk_c4) == 0) {
        func_ov054_0225a910();
        buf[0] = 0x37;
        func_02067a84(ctx, buf, (u32)*(char **)((u8 *)data_ov054_0225b96c + unk_ac->unk_804 * 12));
        func_02067990(ctx);
        func_02067a6c(ctx);
        func_ov054_0225a690(0);
    } else if (n > 0) {
        v[0] = func_020ea65c(func_0207217c());
        func_02063888(A);
        func_02063830(B);
        for (i = 0; i < n; i++) {
            v[1] = ((void **)v[0])[i];
            if (v[1]) {
                func_0207217c();
                v[3] = (void *)func_020ea6c8(v[1]);
                if ((s32)v[3] == 10) {
                    func_0207217c();
                    func_02116048(func_020ea6f4(v[1]), &buf[3], (s32)v[3]);
                    if (buf[12] == 1) {
                        u32 m = 0x38;
                        if (buf[11] == 0) {
                            func_020a78a4(B, &buf[3], 8);
                            func_020a7aa0(A, B, 0, 0);
                            func_02067a3c(ctx, 8, A);
                            m = 0x39;
                        }
                        buf[1] = m;
                        func_02067a84(ctx, &buf[1], (u32)(char *)v[2]);
                        func_0207217c();
                        if (func_020ea608(v[1])) {
                            func_ov054_0225a690(0xd);
                            break;
                        } else {
                            func_ov054_0225a910();
                            buf[2] = 0x37;
                            func_02067a84(ctx, &buf[2], (u32)*(char **)((u8 *)data_ov054_0225b96c + unk_ac->unk_804 * 12));
                            func_02067990(ctx);
                            func_02067a6c(ctx);
                            func_ov054_0225a690(0);
                            break;
                        }
                    }
                }
            }
        }
        func_02063818(B);
        func_02063870(A);
    }
}

void Unk_ov054_0225b9c4::func_ov054_02259e78() {
    void *ctx = unk_3c;
    if (func_020e7500(&unk_c4) == 0) {
        u8 msg;
        func_ov054_0225a910();
        msg = 0x37;
        func_02067a84(ctx, &msg, (u32)*(char **)((u8 *)data_ov054_0225b96c + unk_ac->unk_804 * 12));
        func_02067990(ctx);
        func_02067a6c(ctx);
        func_ov054_0225a690(0);
    } else if (func_020eb650(func_020720f8())) {
        func_02067990(ctx);
        func_02067a6c(ctx);
        func_ov054_0225a690(0);
    }
}

void Unk_ov054_0225b9c4::func_ov054_02259e54() {
    if (unk_ac->func_ov054_02258e58()) {
        func_020a08d0();
        func_ov054_0225a690(0xf);
    }
}

void Unk_ov054_0225b9c4::func_ov054_02259dec() {
    void *ctx = unk_3c;
    if (func_020a07e4()) {
        func_ov054_0225a690(0);
    } else if (func_020a080c()) {
        u8 msg;
        func_02067990(ctx);
        func_02067a6c(ctx);
        msg = 0x3c;
        func_02067a84(ctx, &msg, (u32)*(char **)((u8 *)data_ov054_0225b96c + unk_ac->unk_804 * 12));
        func_ov054_0225a690(0);
    }
}

void Unk_ov054_0225b9c4::vfunc_10() {
    if (unk_1e == 0xf) {
        u8 *p = func_02096e50(func_02097a3c(func_0209750c()));
        u32 b1 = p[1];
        u32 b0 = p[0];
        func_02015958(this, (s32)(p[2] + 0x7d0), 1, 4, 0, 0);
        func_02015878(this, b1, 2);
        func_02015848(this, b0, 3);
    }
    if (func_020a032c()) {
        u32 id = unk_1e;
        if (id != 0x24 && id != 0x25 && id != 0x26) {
            return;
        }
        s32 cnt = 0;
        s32 i = cnt;
        u8 *g = data_021d735c;
        do {
            if (func_020978c8(g, i)) {
                if (i != (s32)func_020974f8()) {
                    func_020157e8(this, func_0209888c(func_02097868(g, i)), cnt + 2);
                    cnt++;
                }
            }
            i++;
        } while (i < 4);
    }
}

void Unk_ov054_0225b9c4::vfunc_14(s32 a) {
    static Unk_ov054_0225b9c4_FnI tbl[3] = {
        *(Unk_ov054_0225b9c4_FnI *)data_ov054_0225b6b0,
        *(Unk_ov054_0225b9c4_FnI *)data_ov054_0225b798,
        *(Unk_ov054_0225b9c4_FnI *)data_ov054_0225b790,
    };
    char *s = *(char **)((u8 *)data_ov054_0225b96c + unk_ac->unk_804 * 12);
    s32 r = func_0212a15c((u8 *)this + 4, s, func_0212a438(s));
    s32 i;
    if (func_020a032c()) {
        i = 2;
    } else if (r == 0) {
        i = 0;
    } else {
        i = 1;
    }
    (this->*tbl[i])(a);
}

void Unk_ov054_0225b9c4::func_ov054_022598c0(s32 a) {
    void *ctx = unk_3c;
    void *h = func_0209750c();
    void *hd = func_02098320(h);
    char *tbl = *(char **)((u8 *)data_ov054_0225b96c + unk_ac->unk_804 * 12);
    s32 r5 = 0;
    u8 msg;
    u16 half0;
    u16 half1;
    switch (unk_1e) {
    case 0x02:
        func_02067a78(ctx);
        break;
    case 0x00:
    case 0x52:
    case 0x53:
    case 0x56:
        func_ov054_0225944c(a);
        break;
    case 0x0e:
    case 0x5c:
    case 0x62:
        func_ov054_0225a720();
        if (func_0206e928()) {
            r5 = 9;
        } else {
            r5 = func_ov054_0225a7a8();
            if (r5 == 9) {
                r5 = 5;
            }
        }
        break;
    case 0x07:
        r5 = func_ov054_0225a7a8();
        break;
    case 0x61:
        func_ov054_0225a720();
        break;
    case 0x58:
        func_ov054_0225a720();
        r5 = func_ov054_0225a770();
        if (r5 == 9) {
            r5 = func_ov054_0225a758();
        }
        break;
    case 0x59:
    case 0x5a:
    case 0x5b:
        func_ov054_0225a720();
        r5 = func_ov054_0225a758();
        break;
    case 0x0b:
    case 0x0d:
    case 0x11:
        func_02015170(this, 0x33, r5);
        func_020151d0(this, 2);
        func_ov054_0225a690(5);
        break;
    case 0x12:
        func_02015170(this, 0x34, 1);
        func_020151d0(this, 2);
        func_ov054_0225a690(6);
        break;
    case 0x16:
        unk_bc = func_02097414(hd);
        func_02015170(this, 0x3b, 1);
        func_020151d0(this, 2);
        func_ov054_0225a690(7);
        break;
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x17:
    case 0x18:
        r5 = 0x52;
        break;
    case 0x55:
        func_02067a78(ctx);
        func_0206799c(ctx, r5);
        func_ov054_0225a690(8);
        break;
    case 0x19:
    case 0x1b:
        func_02015170(this, 0x37, 1);
        func_020151d0(this, 2);
        func_ov054_0225a690(3);
        break;
    case 0x49:
        func_02015170(this, 0x3f, r5);
        func_020151d0(this, 2);
        func_ov054_0225a690(4);
        break;
    case 0x1d:
    case 0x1e:
        func_ov054_022590d0(a);
        break;
    case 0x36:
        func_02067a78(ctx);
        func_0206799c(ctx, 1);
        func_0209f204();
        func_02073bf8(2, 2, r5);
        unk_c4 = 0x258;
        func_ov054_0225a690(0xc);
        break;
    case 0x3d:
        switch (func_02045df4()) {
        case 0:
            r5 = 0x42;
            break;
        case 1:
            r5 = 0x41;
            break;
        case 2:
            r5 = 0x40;
            break;
        case 3:
            r5 = 0x3f;
            break;
        case 4:
            r5 = 0x3e;
            break;
        default:
            r5 = 0x40;
            break;
        }
        break;
    case 0x3e:
        if (func_02098044(h, 0x20)) {
            r5 = 0x4b;
            break;
        }
        if (func_0204c0e0()) {
            if (func_0202e148()) {
                half0 = 0x1379;
                if (func_02099014(&half0, r5)) {
                    r5 = 0x4d;
                    break;
                }
            }
        }
        r5 = 0x4c;
        break;
    case 0x40:
    case 0x41:
    case 0x42:
        switch (*(s32 *)(func_02045dec() + 8)) {
        case 0:
            r5 = 0x43;
            break;
        case 1:
            r5 = 0x44;
            break;
        case 2:
            r5 = 0x45;
            break;
        case 3:
            r5 = 0x46;
            break;
        case 4:
            r5 = 0x47;
            break;
        case 5:
            r5 = 0x48;
            break;
        default:
            r5 = 0x43;
            break;
        }
        break;
    case 0x4e:
        half1 = 0x1379;
        func_02014e60(this, &half1, r5, 5, 1);
        func_0209801c(h, 0x20);
        break;
    case 0x3b:
        func_02067a78(ctx);
        func_0206799c(ctx, r5);
        func_ov054_0225a690(0xe);
        break;
    case 0x3c:
        *(u32 *)((u8 *)ctx + 0x14) = 0;
        unk_ac->func_ov054_0225aef4(8);
        break;
    }
    if (r5 != 0) {
        msg = r5;
        func_02067a84(ctx, &msg, (u32)tbl);
    }
}

void Unk_ov054_0225b9c4::func_ov054_022598bc(s32 a) {}

void Unk_ov054_0225b9c4::func_ov054_0225981c(s32 a) {
    void *ctx = unk_3c;
    char *tbl = *(char **)((u8 *)data_ov054_0225b974 + unk_ac->unk_804 * 12);
    u32 r4 = 0;
    u8 msg;
    switch (unk_1e) {
    case 0x02:
    case 0x20:
    case 0x23:
    case 0x24:
    case 0x25:
    case 0x26:
        func_02015170(this, 0x2f, 0);
        func_020151d0(this, 2);
        break;
    case 0x13:
        r4 = func_020978a4(data_021d735c);
        if (func_020a0318()) {
            r4 = 2;
        } else {
            r4 = (u8)(r4 + 0x22);
        }
        break;
    }
    if (r4 != 0) {
        msg = r4;
        func_02067a84(ctx, &msg, (u32)tbl);
    }
}

void Unk_ov054_0225b9c4::vfunc_18(s32 a) {
    static Unk_ov054_0225b9c4_FnI tbl[3] = {
        *(Unk_ov054_0225b9c4_FnI *)data_ov054_0225b778,
        *(Unk_ov054_0225b9c4_FnI *)data_ov054_0225b770,
        *(Unk_ov054_0225b9c4_FnI *)data_ov054_0225b768,
    };
    char *s = *(char **)((u8 *)data_ov054_0225b96c + unk_ac->unk_804 * 12);
    s32 r = func_0212a15c((u8 *)this + 4, s, func_0212a438(s));
    s32 i;
    if (func_020a032c()) {
        i = 2;
    } else if (r == 0) {
        i = 0;
    } else {
        i = 1;
    }
    (this->*tbl[i])(a);
}

// NONMATCHING: the switch dispatch of this function cannot be reproduced from C with any available mwcc build
// (see pipeline_wip/link_blocked.txt). The assembly below is the original code; the C version under
// NONMATCHING is the closest known attempt (246 bytes differ: it gets a 17-entry jump table for cases 0..16 under a
// compare tree rooted at 0x52, the original has a 10-entry table for cases 0..9 under a tree rooted at 0x39).
#ifdef NONMATCHING
void Unk_ov054_0225b9c4::func_ov054_022595c4(s32 a) {
    Unk_ov054_02258e58_Sub *o = unk_3c;
    s32 r = func_020aa514(func_02015a5c(this));
    void *g = func_0209750c();
    u32 id = 0xff;
    u8 m;
    switch (unk_1e) {
    case 0x5f:
        if (r == 0) {
            func_0201517c(this, (void *)func_ov054_0225a218, 0xd, 0);
            func_020151d0(this, 0);
            func_ov054_0225a690(0xb);
        } else if (r == 1) {
            id = data_ov054_0225b344[unk_ac->unk_808];
        }
        break;
    case 0:
    case 0x52:
    case 0x53:
    case 0x56:
        func_ov054_02259270(a);
        break;
    case 3:
    case 9:
        if (r == 0) {
            func_020151d0(this, 1);
            func_ov054_0225a690(1);
        }
        break;
    case 0x10:
        if (r == 0) {
            id = 0x11;
        } else if (r == 1) {
            id = 0xe;
            func_0206e9bc();
        }
        break;
    case 0xc:
        if (r == 0) {
            func_0206e9d8();
            id = 7;
        }
        break;
    case 4:
    case 0x1c:
    case 0x34:
    case 0x5d:
    case 0x5e:
        if (r == 2) {
            if (func_02098044(g, 4) == 0) {
                id = 0x1a;
                func_0209801c(g, 4);
            } else {
                id = 0x19;
            }
        } else if (r == 3) {
            if (func_02098044(g, 1) != 0) {
                id = 0x60;
            } else {
                id = 0x35;
            }
        }
        break;
    case 0x38:
    case 0x39:
        if (r == 1) {
            func_ov054_0225a910();
            id = 0x3a;
        }
        break;
    case 1:
        break;
    }
    if (id != 0xff) {
        m = id;
        func_02067a84(o, &m, (u32)data_ov054_0225b96c[unk_ac->unk_804][0]);
    }
}
#else
void Unk_ov054_0225b9c4::func_ov054_022595c4(s32 a) {
    // The function body is one asm block: mwcc defers such a function like any C++ function (an `asm void f()`
    // function is emitted at once, ahead of every other function of the file) and adds the prologue and epilogue
    // itself: push {r4-r7, lr}; sub sp, #12 ... add sp, #12; pop {r4-r7}; pop {r3}; bx r3, as in the original
    // (the block uses r4-r7; `frame` gives the 12-byte stack frame: sp+0 = a, sp+4 = unk_3c, sp+8 = message byte).
    // `this` arrives in r0, `a` in r1.
    // The jump-table entries are 16-bit offsets (case label - L_tbl + 1). mwcc's inline assembler has no 16-bit
    // data directive and no label arithmetic, and dcd must be 4-byte aligned (the table is at +0x4a), so each
    // entry is written as the Thumb instruction with the same encoding: lsl rd, rs, #n = n << 6 | rs << 3 | rd.
    u32 frame[3];
    asm {
        add r5, r0, #0
        str r1, [sp, #frame]
        ldr r1, [r5, #60]
        str r1, [sp, #4]
        bl func_02015a5c
        bl func_020aa514
        add r4, r0, #0
        bl func_0209750c
        add r7, r0, #0
        mov r6, #255
        ldrb r0, [r5, #30]
        cmp r0, #57
        bgt L_gt39
        cmp r0, #57
        blt L_lt39
        b L_38_39
    L_lt39:
        cmp r0, #16
        bgt L_gt10
        cmp r0, #16
        bge L_10
        cmp r0, #9
        bgt L_gt9
        cmp r0, #0
        bge L_table
        b L_end
    L_table:
        add r1, r0, r0
        add r1, pc
        ldrh r1, [r1, #8]
        lsl r1, r1, #16
        asr r1, r1, #16
        add r1, pc
        bx r1
    L_tbl:
        lsl r7, r1, #2  // case 0: dcw 0x008f = L_0_52_53_56 - L_tbl + 1
        lsl r7, r2, #4  // case 1: dcw 0x0117 = L_end - L_tbl + 1
        lsl r7, r2, #4  // case 2: dcw 0x0117 = L_end - L_tbl + 1
        lsl r1, r3, #2  // case 3: dcw 0x0099 = L_3_9 - L_tbl + 1
        lsl r1, r2, #3  // case 4: dcw 0x00d1 = L_4_1c_34_5d_5e - L_tbl + 1
        lsl r7, r2, #4  // case 5: dcw 0x0117 = L_end - L_tbl + 1
        lsl r7, r2, #4  // case 6: dcw 0x0117 = L_end - L_tbl + 1
        lsl r7, r2, #4  // case 7: dcw 0x0117 = L_end - L_tbl + 1
        lsl r7, r2, #4  // case 8: dcw 0x0117 = L_end - L_tbl + 1
        lsl r1, r3, #2  // case 9: dcw 0x0099 = L_3_9 - L_tbl + 1
    L_gt9:
        cmp r0, #12
        beq L_c
        b L_end
    L_gt10:
        cmp r0, #52
        bgt L_gt34
        cmp r0, #52
        bge L_4_1c_34_5d_5e
        cmp r0, #28
        beq L_4_1c_34_5d_5e
        b L_end
    L_gt34:
        cmp r0, #56
        beq L_38_39
        b L_end
    L_gt39:
        cmp r0, #86
        bgt L_gt56
        cmp r0, #86
        bge L_0_52_53_56
        cmp r0, #82
        bgt L_gt52
        cmp r0, #82
        beq L_0_52_53_56
        b L_end
    L_gt52:
        cmp r0, #83
        beq L_0_52_53_56
        b L_end
    L_gt56:
        cmp r0, #94
        bgt L_gt5e
        cmp r0, #94
        bge L_4_1c_34_5d_5e
        cmp r0, #93
        beq L_4_1c_34_5d_5e
        b L_end
    L_gt5e:
        cmp r0, #95
        bne L_end
        cmp r4, #0
        bne L_5f_not0
        add r0, r5, #0
        ldr r1, =func_ov054_0225a218
        mov r2, #13
        mov r3, #0
        bl func_0201517c
        add r0, r5, #0
        mov r1, #0
        bl func_020151d0
        add r0, r5, #0
        mov r1, #11
        bl func_ov054_0225a690
        b L_end
    L_5f_not0:
        cmp r4, #1
        bne L_end
        add r0, r5, #0
        add r0, #172
        ldr r1, [r0, #0]
        ldr r0, =0x808
        ldr r1, [r1, r0]
        ldr r0, =data_ov054_0225b344
        ldrb r6, [r0, r1]
        b L_end
    L_0_52_53_56:
        add r0, r5, #0
        ldr r1, [sp, #0]
        bl func_ov054_02259270
        b L_end
    L_3_9:
        cmp r4, #0
        bne L_end
        add r0, r5, #0
        mov r1, #1
        bl func_020151d0
        add r0, r5, #0
        mov r1, #1
        bl func_ov054_0225a690
        b L_end
    L_10:
        cmp r4, #0
        beq L_10_0
        cmp r4, #1
        beq L_10_1
        b L_end
    L_10_0:
        mov r6, #17
        b L_end
    L_10_1:
        mov r6, #14
        bl func_0206e9bc
        b L_end
    L_c:
        cmp r4, #0
        bne L_end
        bl func_0206e9d8
        mov r6, #7
        b L_end
    L_4_1c_34_5d_5e:
        cmp r4, #2
        beq L_r2
        cmp r4, #3
        beq L_r3
        b L_end
    L_r2:
        add r0, r7, #0
        mov r1, #4
        bl func_02098044
        cmp r0, #0
        bne L_r2_set
        mov r6, #26
        add r0, r7, #0
        mov r1, #4
        bl func_0209801c
        b L_end
    L_r2_set:
        mov r6, #25
        b L_end
    L_r3:
        add r0, r7, #0
        mov r1, #1
        bl func_02098044
        cmp r0, #0
        beq L_r3_clear
        mov r6, #96
        b L_end
    L_r3_clear:
        mov r6, #53
        b L_end
    L_38_39:
        cmp r4, #1
        bne L_end
        add r0, r5, #0
        bl func_ov054_0225a910
        mov r6, #58
    L_end:
        cmp r6, #255
        beq L_ret
        add r5, #172
        ldr r1, [r5, #0]
        ldr r0, =0x804
        ldr r1, [r1, r0]
        mov r0, #12
        mul r1, r0
        ldr r0, =data_ov054_0225b96c
        ldr r2, [r0, r1]
        add r0, sp, #8
        strb r6, [r0, #0]
        ldr r0, [sp, #4]
        add r1, sp, #8
        bl func_02067a84
    L_ret:
    }
}
#endif

void Unk_ov054_0225b9c4::func_ov054_02259534(s32 a) {
    Unk_ov054_02258e58_Sub *o = unk_3c;
    s32 r = func_020aa514(func_02015a5c(this));
    u32 id = 0xff;
    u32 k = 1;
    u8 m[2];
    s32 t = unk_1e;
    if (t >= 0 && t <= 0x19) {
        if (r == 1) {
            id = data_ov054_0225b350[unk_ac->unk_808];
            k = 0;
        } else if (func_0202e18c(unk_ac, m, 0)) {
            func_0202e174(unk_ac, m);
        }
    }
    if (id != 0xff) {
        void *name = (void *)data_ov054_0225b96c[unk_ac->unk_804][k];
        m[1] = id;
        func_02067a84(o, &m[1], (u32)name);
    }
}

void Unk_ov054_0225b9c4::func_ov054_022594f4(s32 a) {
    s32 r = func_020aa514(func_02015a5c(this));
    func_0209750c();
    if (unk_1e == 0x12) {
        switch (r) {
        case 0:
            func_0203cb80(0);
            break;
        case 1:
            func_0203cb80(1);
            break;
        }
        func_0203ca94();
    }
}

void Unk_ov054_0225b9c4::func_ov054_0225944c(s32 a) {
    Unk_ov054_02258e58_Sub *o = unk_3c;
    void *g = func_0209750c();
    unk_b0 = 0;
    if (!func_0202e148()) {
        unk_b0 = 2;
    } else if (func_02098044(g, 1) == 0 && func_02060388(data_021e58a8) != 0) {
        if (unk_ac->func_ov054_02258e44()) {
            unk_b0 = 4;
        } else {
            unk_b0 = 1;
        }
    } else {
        if (unk_ac->func_ov054_02258e44()) {
            unk_b0 = 3;
        }
    }
    s32 n = data_ov054_0225b380[unk_b0];
    func_0202e214(this, data_ov054_0225b910[unk_b0], n, n - 1);
    func_020679c0(o, 1);
}

void Unk_ov054_0225b9c4::func_ov054_02259270(s32 a) {
    s32 idx = func_020aa514(func_02015a5c(this));
    static Fn a1[2] = {*(Fn *)data_ov054_0225b850, *(Fn *)data_ov054_0225b880};
    static Fn a2[4] = {*(Fn *)data_ov054_0225b7d8, *(Fn *)data_ov054_0225b6a0, *(Fn *)data_ov054_0225b7b0,
                       *(Fn *)data_ov054_0225b6c0};
    static Fn a3[5] = {*(Fn *)data_ov054_0225b710, *(Fn *)data_ov054_0225b718, *(Fn *)data_ov054_0225b758,
                       *(Fn *)data_ov054_0225b748, *(Fn *)data_ov054_0225b7e0};
    static Fn a4[3] = {*(Fn *)data_ov054_0225b888, *(Fn *)data_ov054_0225b6f0, *(Fn *)data_ov054_0225b6a8};
    static Fn a5[4] = {*(Fn *)data_ov054_0225b720, *(Fn *)data_ov054_0225b728, *(Fn *)data_ov054_0225b800,
                       *(Fn *)data_ov054_0225b818};
    static Fn *tbls[5] = {a2, a3, a1, a4, a5};
    static const s32 cnt[5] = {4, 5, 2, 3, 4};
    if (idx < cnt[unk_b0]) {
        (this->*tbls[unk_b0][idx])();
    }
}

void Unk_ov054_0225b9c4::func_ov054_02259258() {
    func_020151d0(this, 1);
    func_ov054_0225a690(1);
}

void Unk_ov054_0225b9c4::func_ov054_02259224() {
    u8 m = 1;
    func_02067a84(unk_3c, &m, (u32)data_ov054_0225b96c[unk_ac->unk_804][0]);
}

void Unk_ov054_0225b9c4::func_ov054_02259200() {
    func_02015170(this, 0x26, 0);
    func_020151d0(this, 2);
    func_ov054_0225a690(2);
}

void Unk_ov054_0225b9c4::func_ov054_022591ac() {
    func_02015958(this, func_02060388(data_021e58a8), 4, 10, 1, 0);
    u8 m = 0x12;
    func_02067a84(unk_3c, &m, (u32)data_ov054_0225b96c[unk_ac->unk_804][0]);
}

void Unk_ov054_0225b9c4::func_ov054_02259178() {
    u8 m = 0x16;
    func_02067a84(unk_3c, &m, (u32)data_ov054_0225b96c[unk_ac->unk_804][0]);
}

void Unk_ov054_0225b9c4::func_ov054_022590d0(s32 a) {
    void *o = unk_3c;
    void *g;
    void *h;
    void *name;
    name = (void *)data_ov054_0225b96c[unk_ac->unk_804][0];
    g = func_0209750c();
    h = func_02098320(g);
    s32 pos = func_02097404(h);
    u8 v = func_020973e8(h) + 0x1f;
    s32 i;
    for (i = 1; i < 0x15; i++) {
        s32 t = data_ov054_0225b3e4[i];
        if (pos >= t && pos < data_ov054_0225b3e4[i + 1]) {
            func_020973e4(h, i);
            if (unk_c0 < t) {
                func_0209801c(g, 0x16);
                v = i + 0x1f;
            } else {
                v = i + 0x1f;
            }
        }
    }
    u8 m = v;
    func_02067a84(o, &m, (u32)name);
}

BOOL Unk_ov054_0225ba54::vfunc_48(Unk_020d9670 *o) {
    BOOL r = FALSE;
    s32 bx, by, cx, cy;
    Unk_ov054_0225902c_Vec pos;
    Unk_ov054_0225902c_Vec *pv = (Unk_ov054_0225902c_Vec *)&o->unk_5c;
    pos.x = o->unk_5c;
    pos.y = pv->y;
    pos.z = pv->z;
    bx = 0;
    by = 0;
    cx = 0;
    cy = 0;
    func_0204ee10(&bx, &by, &pos);
    Unk_ov054_0225902c_Vec dst;
    const Unk_ov054_Vec *pd = &data_ov054_0225b394[unk_808];
    dst.x = data_ov054_0225b394[unk_808].x;
    dst.y = pd->y;
    dst.z = pd->z;
    func_0204ee10(&cx, &cy, &dst);
    if (func_02014220(&unk_618) != 0 || func_0201b9bc()) {
        return FALSE;
    }
    if (unk_654 == 2 || unk_654 == 0 || unk_654 == 9) {
        if (bx == cx && by == cy) {
            r = TRUE;
        }
    }
    return r;
}

void Unk_ov054_0225ba54::vfunc_4c(u32 cmd, u32 arg) {
    s32 a, b;
    switch (cmd) {
    case 3:
        unk_558.unk_08 = arg;
        if (arg != 4) {
            func_0201b9fc(1, data_020cbb18->unk_64, arg);
            func_ov054_0225aef4(0xb);
        } else if (func_0201ba88()) {
            u32 t = data_020cbb18->unk_64;
            func_0201b9fc(1, t, t);
            func_ov054_0225aef4(0xb);
        }
        break;
    case 1:
        unk_658.vfunc_08();
        func_02015ab0(&unk_658, func_0201bc4c(4));
        func_ov054_0225aef4(1);
        break;
    case 0:
        unk_558.unk_08 = arg;
        if (arg != 4 && arg != data_020cbb18->unk_64) {
            func_0201b9fc(1, arg, arg);
            func_ov054_0225aef4(0xa);
        } else if (func_0201ba88()) {
            u32 t = data_020cbb18->unk_64;
            func_0201b9fc(1, t, t);
            unk_658.vfunc_08();
            func_02015ab0(&unk_658, func_0201bc4c(4));
            func_ov054_0225aef4(4);
        }
        break;
    case 8:
        if (arg == 4) {
            if (func_020a62a0()) {
                func_0201b9fc(1, data_020cbb18->unk_64, 4);
                func_ov054_0225aef4(2);
            } else {
                func_0201b9fc(1, 4, data_020cbb18->unk_64);
                func_ov054_0225aef4(9);
            }
        }
        break;
    case 4:
        if (func_0201b9bc()) {
            if (func_0201ba88()) {
                a = 4;
                b = 4;
                if (func_0201b9e8(this, &a, &b)) {
                    if ((arg != 4 && (s32)arg == b) || arg == 4) {
                        func_0201b9fc(1, data_020cbb18->unk_64, 4);
                        func_ov054_0225aef4(2);
                    }
                }
            }
        }
        break;
    }
}

BOOL Unk_ov054_0225ba54::func_ov054_02258e58() {
    if (unk_2ac.func_02019d8c() == 0xba && func_ov004_0221e3dc() && unk_658.unk_3c->unk_04 == 2) {
        return TRUE;
    }
    return FALSE;
}

s32 Unk_ov054_0225ba54::func_ov054_02258e44() {
    return func_02072e88(data_020cbb18, data_020cbb18->unk_64);
}

s32 Unk_ov054_0225ba54::func_ov054_02258e34() {
    return func_02072e44(data_020cbb18);
}

// Data, second part (see the note at the first part)
extern "C" Unk_ov054_SceneEntry data_ov054_0225b954 = {func_ov054_0225b228, 0x7a, 0x7e, 2, 0x5000, 0x5000, 0x3e800};
extern "C" void *data_ov054_0225b7c8[2] = {(void *)_ZN18Unk_ov054_0225ba5419func_ov054_0225ac74Ev, 0};
extern "C" void *data_ov054_0225b7c0[2] = {(void *)_ZN18Unk_ov054_0225b9c419func_ov054_0225a074Ev, 0};
extern "C" u8 *data_ov054_0225b7b8[2] = {data_ov054_0225b924, data_ov054_0225b93c};
extern "C" void *data_ov054_0225b788[2] = {(void *)_ZN18Unk_ov054_0225b9c419func_ov054_0225a460Ev, 0};
extern "C" void *data_ov054_0225b7a8[2] = {(void *)_ZN18Unk_ov054_0225b9c419func_ov054_0225a4c4Ev, 0};
extern "C" void *data_ov054_0225b840[2] = {(void *)_ZN18Unk_ov054_0225ba5419func_ov054_0225a9f8Ev, 0};
extern "C" void *data_ov054_0225b798[2] = {(void *)_ZN18Unk_ov054_0225b9c419func_ov054_022598bcEi, 0};
extern "C" const u8 data_ov054_0225b358[4] = {0xeb, 0xec, 0xd5, 0x56};
extern "C" void *data_ov054_0225b6f0[2] = {(void *)_ZN18Unk_ov054_0225b9c419func_ov054_02259178Ev, 0};
extern "C" void *data_ov054_0225b730[2] = {(void *)_ZN18Unk_ov054_0225ba5419func_ov054_0225adfcEv, 0};
extern "C" void *data_ov054_0225b778[2] = {(void *)_ZN18Unk_ov054_0225b9c419func_ov054_022595c4Ei, 0};
extern "C" void *data_ov054_0225b770[2] = {(void *)_ZN18Unk_ov054_0225b9c419func_ov054_02259534Ei, 0};
extern "C" void *data_ov054_0225b720[2] = {(void *)_ZN18Unk_ov054_0225b9c419func_ov054_02259258Ev, 0};
extern "C" char data_ov054_0225b8c8[] = "sp_npc_ypelican";
extern "C" const s32 data_ov054_0225b380[5] = {4, 5, 2, 3, 4};
extern "C" const u8 data_ov054_0225b360[4] = {0xeb, 0xed, 0xec, 0x56};
extern "C" u8 data_ov054_0225b924[] = "npc_sp/model/pga.nsbmd";
extern "C" const u16 data_ov054_0225b35c[2] = {0xd006, 0xd007};
extern "C" void *data_ov054_0225b7f8[2] = {(void *)_ZN18Unk_ov054_0225ba5419func_ov054_0225a998Ev, 0};
extern "C" const u8 data_ov054_0225b34c[2] = {0xeb, 0x56};
extern "C" void *data_ov054_0225b810[2] = {(void *)_ZN18Unk_ov054_0225ba5419func_ov054_0225ab00Ev, 0};
extern "C" void *data_ov054_0225b828[2] = {(void *)_ZN18Unk_ov054_0225ba5419func_ov054_0225aa98Ev, 0};
extern "C" char data_ov054_0225b8d8[] = "sp_npc_opelican";
extern "C" void *data_ov054_0225b850[2] = {(void *)_ZN18Unk_ov054_0225b9c419func_ov054_02259258Ev, 0};
extern "C" u8 data_ov054_0225b93c[] = "npc_sp/model/pgb.nsbmd";
extern "C" const Unk_ov054_Vec data_ov054_0225b394[2] = {{0xf000, 0, 0x17000}, {0x13000, 0, 0x17000}};
extern "C" void *data_ov054_0225b6f8[2] = {(void *)_ZN18Unk_ov054_0225ba5419func_ov054_0225a994Ev, 0};
extern "C" void *data_ov054_0225b7d8[2] = {(void *)_ZN18Unk_ov054_0225b9c419func_ov054_02259258Ev, 0};
extern "C" char data_ov054_0225b8e8[] = "sp_etc_sequence4";
extern "C" const u8 data_ov054_0225b3c4[30] = {
    0x00, 0x01, 0x02, 0x03, 0xfe, 0xfe, 0x04, 0x05, 0x06, 0x07, 0xfe, 0xfe, 0x08, 0x09, 0x0a,
    0x0b, 0x0c, 0x0d, 0x0e, 0x0f, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19,
};
extern "C" void *data_ov054_0225b7b0[2] = {(void *)_ZN18Unk_ov054_0225b9c419func_ov054_02259200Ev, 0};
extern "C" void *data_ov054_0225b7a0[2] = {(void *)_ZN18Unk_ov054_0225b9c419func_ov054_0225a580Ev, 0};
extern "C" char data_ov054_0225b8b8[] = "sp_npc_drama6";
extern "C" void *data_ov054_0225b750[2] = {(void *)_ZN18Unk_ov054_0225ba5419func_ov054_0225ae48Ev, 0};
extern "C" void *data_ov054_0225b728[2] = {(void *)_ZN18Unk_ov054_0225b9c419func_ov054_022591acEv, 0};
extern "C" void *data_ov054_0225b708[2] = {(void *)_ZN18Unk_ov054_0225ba5419func_ov054_0225ae5cEv, 0};
extern "C" const u8 data_ov054_0225b354[3] = {0xeb, 0xec, 0x56};
extern "C" void *data_ov054_0225b800[2] = {(void *)_ZN18Unk_ov054_0225b9c419func_ov054_02259178Ev, 0};
extern "C" void *data_ov054_0225b818[2] = {(void *)_ZN18Unk_ov054_0225b9c419func_ov054_02259224Ev, 0};
extern "C" void *data_ov054_0225b830[2] = {(void *)_ZN18Unk_ov054_0225ba5419func_ov054_0225aa94Ev, 0};
extern "C" void *data_ov054_0225b860[2] = {(void *)_ZN18Unk_ov054_0225ba5419func_ov054_0225a9f4Ev, 0};
extern "C" void *data_ov054_0225b6a0[2] = {(void *)_ZN18Unk_ov054_0225b9c419func_ov054_02259178Ev, 0};
extern "C" void *data_ov054_0225b7d0[2] = {(void *)_ZN18Unk_ov054_0225ba5419func_ov054_0225ac2cEv, 0};
extern "C" void *data_ov054_0225b6e0[2] = {(void *)_ZN18Unk_ov054_0225b9c419func_ov054_02259e78Ev, 0};
extern "C" const u8 data_ov054_0225b364[5] = {0xeb, 0xed, 0xec, 0xd5, 0x56};
extern "C" void *data_ov054_0225b780[2] = {(void *)_ZN18Unk_ov054_0225b9c419func_ov054_0225a3ccEv, 0};
extern "C" void *data_ov054_0225b758[2] = {(void *)_ZN18Unk_ov054_0225b9c419func_ov054_02259178Ev, 0};
extern "C" const u8 data_ov054_0225b348[2] = {2, 1};
extern "C" void *data_ov054_0225b858[2] = {(void *)_ZN18Unk_ov054_0225ba5419func_ov054_0225ac28Ev, 0};
extern "C" void *data_ov054_0225b700[2] = {(void *)_ZN18Unk_ov054_0225b9c419func_ov054_02259decEv, 0};
extern "C" const Unk_ov054_0225b3ac_Row data_ov054_0225b3ac[2] = {{0xf000, 0, 0x13000}, {0x13000, 0, 0x13000}};
extern "C" void *data_ov054_0225b740[2] = {(void *)_ZN18Unk_ov054_0225ba5419func_ov054_0225ad34Ev, 0};
extern "C" void *data_ov054_0225b878[2] = {(void *)_ZN18Unk_ov054_0225ba5419func_ov054_0225acdcEv, 0};
extern "C" void *data_ov054_0225b6d8[2] = {(void *)_ZN18Unk_ov054_0225b9c419func_ov054_0225a5ccEv, 0};
