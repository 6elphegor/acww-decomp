// mwcc-flags: -str reuse
#include "types.h"


class Unk_020d8938;
class Unk_020d89c8;


struct Unk_020ddf2c { Unk_020ddf2c(); ~Unk_020ddf2c(); u32 pad[0x2c / 4]; };

struct Unk_020ddefc { Unk_020ddefc(); ~Unk_020ddefc(); u32 pad[0x98 / 4]; };

struct Unk_020ddf14 { Unk_020ddf14(); ~Unk_020ddf14(); u32 pad[0x34 / 4]; };

struct Unk_020639bc { Unk_020639bc(); ~Unk_020639bc(); void func_0206397c(u32 a); u32 pad[0x10 / 4]; };

struct Unk_020e05c0 { Unk_020e05c0(); ~Unk_020e05c0(); u32 pad[0x24 / 4]; };

struct Unk_020e1c64 { Unk_020e1c64(); ~Unk_020e1c64(); void func_020a7c3c(); u32 pad[0x20 / 4]; };

typedef void (Unk_020d8938::*Unk_020d8938_Fn)();

typedef void (Unk_020d8938::*Unk_020d8938_ArgFn)(void *arg);

typedef Unk_020d89c8 Unk_020d8938_Parent;

struct Unk_020d8938_Tbl {
    Unk_020d8938_Fn a;
    Unk_020d8938_Fn b;
    Unk_020d8938_Fn c;
};

struct Unk_0202d7f4 {
    Unk_0202d7f4();
    ~Unk_0202d7f4();
    void func_0202d664(void *owner, u16 *p);
    u32 pad[0x34 / 4];
};

struct Unk_020e06f0 {
    Unk_020e06f0();
    ~Unk_020e06f0();
    void *func_0208202c();
    u32 pad[2];
};

struct Unk_0201c078 {
    Unk_0201c078();
    ~Unk_0201c078();
    BOOL func_0201c6d4();
    void func_0201c614(u32 a, s32 b);
    void func_0201c704();
    u32 pad[0x5c / 4];
};

struct Unk_0202e18c_Buf {
    u32 unk_00;
    u32 unk_04;
};


// ---- class chain of Unk_020d8938 (vtable 0x020d8930): Unk_020ddcf0 <- Unk_020d7714 <- Unk_020d8938.
// The two bases are classes of other units (only declared; the same declarations as in the unit of Unk_020d8b38).
class Unk_020ddcf0 {
public:
    Unk_020ddcf0();
    virtual ~Unk_020ddcf0();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void vfunc_10(u32 a);
    virtual void vfunc_14(u32 a);
    virtual void vfunc_18(u32 a);
    virtual void vfunc_1c();
    virtual void vfunc_20();
    virtual void vfunc_24(u32 a);
    virtual void vfunc_28(u32 a);
    virtual void vfunc_2c(u32 a);
    virtual void vfunc_30(u32 a);
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
    virtual void *vfunc_64();
    virtual u32 vfunc_68();
    virtual s32 vfunc_6c();
    virtual void vfunc_70();
    virtual void vfunc_74();

    /* 0x04 */ u32 unk_04[0x38 / 4];
    /* 0x3c */ u32 unk_3c;
    /* 0x40 */ u8 unk_40;
};

class Unk_020d7714 : public Unk_020ddcf0 {
public:
    Unk_020d7714();
    virtual ~Unk_020d7714();
    virtual void vfunc_08();
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
    virtual s32 vfunc_6c();
    virtual void vfunc_78(void *arg) = 0;
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();

    /* 0x44 */ u8 pad_44[0xac - 0x44];
};

class Unk_020d8938 : public Unk_020d7714 {
public:
    Unk_020d8938();
    virtual ~Unk_020d8938();
    virtual void vfunc_10(u32 a);
    virtual void vfunc_14(u32 a);
    virtual void vfunc_18(u32 a);
    virtual void vfunc_20();
    virtual void vfunc_24(u32 a);
    virtual void vfunc_28(u32 a);
    virtual void vfunc_2c(u32 a);
    virtual void vfunc_30(u32 a);
    virtual void vfunc_60();
    virtual u32 vfunc_68();
    virtual void vfunc_70();
    virtual void vfunc_78(void *arg);
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();

    u32 func_0202d114();
    void func_0202d120(u32 v);
    void *func_0202d158(s32 idx);
    void func_0202d1c0(Unk_020d8938_Fn fn);
    void func_0202d1d4(Unk_020d8938_Tbl *t);
    void func_0202d20c();
    void func_0202d294(Unk_020d8938_Fn fn);
    void func_0202d328(Unk_020d8938_Fn fn);
    void func_0202d33c(Unk_020d8938_Fn fn);
    void func_0202d388(Unk_020d8938_Parent *owner, u32 idx);
    void func_0202d814(void *arg);

    Unk_020d8938_Fn unk_ac;
    Unk_020d8938_Fn unk_b4;
    Unk_020d8938_Fn unk_bc;
    Unk_020d8938_Fn unk_c4;
    Unk_020d8938_Fn unk_cc;
    Unk_020d8938_Fn unk_d4;
    Unk_020d8938_Fn unk_dc;
    Unk_020d8938_Fn unk_e4;
    Unk_020d8938_Fn unk_ec;
    Unk_020d8938_Fn unk_f4;
    Unk_020d8938_Parent *unk_fc;
    u8 pad_100[0x120 - 0x100];
    u16 unk_120;
    u8 pad_122[2];
    s32 unk_124;
    s32 unk_128;
    s32 unk_12c;
    s32 unk_130;
    s32 unk_134;
    u8 unk_138;
    u8 pad_139[0x150 - 0x139];
    u32 unk_150;
    u8 unk_154;
    u8 unk_155;
    u8 pad_156[2];
    u32 unk_158;
    u32 unk_15c;
    u32 unk_160;
    u32 unk_164;
    Unk_020d8938_Fn unk_168;
    Unk_020d8938_Fn unk_170;
    Unk_020d8938_Fn unk_178;
    Unk_020d8938_Fn unk_180;
    Unk_020d8938_Fn unk_188;
    u8 pad_190[8];
    u16 unk_198;
    u8 unk_19a;
    u8 pad_19b;
    u32 unk_19c;
};

// ---- class chain of Unk_020d89c8 (vtable 0x020d89c0):
// Unk_020d8c7c_Base <- Unk_020d5d84 <- Unk_020d9670 <- Unk_020d77a4 <- Unk_020d89c8 (the bases as in the unit of
// Unk_020d8bc8; all their members are functions of other units)
class Unk_020d8c7c_Base {
public:
    static void *operator new(unsigned long size);
    static void operator delete(void *ptr);

    Unk_020d8c7c_Base();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual void vfunc_08(int a);
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

#define MEMBER(name, size) \
    struct name { \
        u8 unk_00[size]; \
        name(); \
        ~name(); \
    }
struct Unk_020dbd74 {
    u8 unk_00[0x2a0 - 0xec];
    Unk_020dbd74();
    ~Unk_020dbd74();
    u32 func_02054b38(u32 a);
    u32 func_02053a14(u32 a);
};
MEMBER(Unk_0201ad3c, 0xc);
MEMBER(Unk_02019dd8, 0x334 - 0x2ac);
MEMBER(Unk_02016350, 0x1c);
MEMBER(Unk_0201accc, 0x3a8 - 0x350);
struct Unk_0201a8bc { u8 unk_00[2]; Unk_0201a8bc(); };
struct Unk_0201ad18 { u8 unk_00[6]; Unk_0201ad18(); };
MEMBER(Unk_0201a794, 0x418 - 0x3b0);
MEMBER(Unk_0201a194, 8);
MEMBER(Unk_0201a13c, 0x49c - 0x420);
MEMBER(Unk_02032238, 0x30);
MEMBER(Unk_020e0cf4, 0x514 - 0x4cc);
struct Unk_020135e4 { u8 pad_00[0xb]; u8 unk_0b; Unk_020135e4(); ~Unk_020135e4(); };
MEMBER(Unk_02019858, 0x618 - 0x564);
MEMBER(Unk_02014254, 0x28);
#undef MEMBER

extern "C" {
extern u32 data_020d6f54[];
void func_020f43c8(void *p);
}

struct Unk_020f4080 {
    u8 unk_00[0x558 - 0x514];
    Unk_020f4080();
    ~Unk_020f4080() {
        *(u32 *)this = (u32)data_020d6f54;
        func_020f43c8(this);
    }
};

struct Unk_020d77a4_Vec3 {
    s32 x, y, z;
};

class Unk_020d5d84 : public Unk_020d8c7c_Base {
public:
    virtual BOOL vfunc_14();
    virtual BOOL vfunc_20();
    virtual BOOL vfunc_28();
    virtual BOOL vfunc_2c();
};

struct Unk_020d9670 : Unk_020d5d84 {
    u8 pad_04[0x58];
    Unk_020d77a4_Vec3 unk_5c;
    u8 pad_68[0x8e - 0x68];
    s16 unk_8e;
    u8 pad_90[4];
    s16 unk_94;
    u8 pad_96[0xe6 - 0x92];
    Unk_020d9670();
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_1c();
    virtual ~Unk_020d9670();
    virtual void vfunc_48(void *p);
    virtual void vfunc_4c(int a);
    virtual void vfunc_50();
    virtual void vfunc_54(void *p);
    virtual void vfunc_58(void *p);
    virtual void vfunc_5c(Unk_020d77a4_Vec3 *p);
};

struct Unk_020d77a4 : Unk_020d9670 {
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
    Unk_020e0cf4 unk_4cc;
    Unk_020f4080 unk_514;
    Unk_020135e4 unk_558;
    Unk_02019858 unk_564;
    Unk_02014254 unk_618;
    Unk_020d77a4() : unk_ea(0xfff1) {}
    virtual ~Unk_020d77a4() {}
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual void vfunc_08(int a);
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_24();
    virtual BOOL vfunc_30();
    virtual void vfunc_4c(int a);
    virtual void vfunc_5c(Unk_020d77a4_Vec3 *p);
    virtual void vfunc_60();
    virtual void *vfunc_64();
    virtual void vfunc_68();
    virtual u8 *vfunc_6c() = 0;
    virtual u8 *vfunc_70() = 0;
    virtual void vfunc_74(u32 a);
    virtual u32 vfunc_78();
    virtual BOOL vfunc_7c();
    virtual void vfunc_80();
    virtual u16 vfunc_84();
    virtual void vfunc_88(u16 *p, BOOL flag);
    virtual void vfunc_8c();
    virtual void vfunc_90();
    virtual void vfunc_94();
    virtual void vfunc_98();
    virtual void vfunc_9c();
    virtual void vfunc_a0();
    virtual void vfunc_a4(u32 a, s32 b);
    virtual BOOL vfunc_a8();
    u16 func_0201bdec();
};

// the member at 0x680 is a Unk_020d8938 (0x1a0 bytes) followed by one byte
struct Unk_0202d5e8 {
    Unk_020d8938 obj;
    u8 unk_1a0;
    u8 pad_1a1[3];
};

class Unk_020d89c8 : public Unk_020d77a4 {
public:
    Unk_020d89c8();
    virtual ~Unk_020d89c8();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_10();
    virtual void *vfunc_64();
    virtual u8 *vfunc_6c();
    virtual u8 *vfunc_70();
    virtual void vfunc_74(u32 a);
    virtual u32 vfunc_78();
    virtual BOOL vfunc_7c();
    virtual void vfunc_80();
    virtual u16 vfunc_84();
    virtual void vfunc_88(u16 *p, BOOL flag);
    virtual void vfunc_a4(u32 a, s32 b);
    virtual BOOL vfunc_a8();
    virtual BOOL vfunc_ac();
    virtual BOOL vfunc_b0();
    virtual s32 vfunc_b4();
    virtual s32 vfunc_b8();
    virtual s32 vfunc_bc();

    BOOL func_0202da64();
    void func_0202dcd8();
    s32 func_0202dc9c();

    /* 0x640 */ u32 unk_640;
    /* 0x644 */ u32 unk_644;
    /* 0x648 */ u32 unk_648;
    /* 0x64c */ Unk_0202d7f4 unk_64c;
    /* 0x680 */ Unk_0202d5e8 unk_680;
    /* 0x824 */ Unk_020e06f0 unk_824;
    /* 0x82c */ void *unk_82c;
    /* 0x830 */ void *unk_830;
    /* 0x834 */ u32 unk_834;
    /* 0x838 */ Unk_0201c078 unk_838;
};

// data_021beee0 (0xf4 bytes), constructed by __sinit; constructor and destructor are functions of another unit
struct Unk_020dd458 {
    u8 pad_00[0xf4];
    Unk_020dd458();
    ~Unk_020dd458();
};
// one entry of the tables in bss (three pointers to member functions)
struct Unk_021be8c0 {
    u32 w[6];
};


// ---- unk_0201c050.cpp
namespace F00 {
extern "C" {

class Unk_020d8938;
typedef void (Unk_020d8938::*Unk_020d8938_Fn)(u32 a, s32 b);
class Unk_020d8938 {
public:
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void vfunc_10();
    virtual void vfunc_14();
    virtual void vfunc_18(u32 a);
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
    virtual void vfunc_60();
    virtual s32 vfunc_64();
    virtual void vfunc_68();
    virtual void vfunc_6c();
    virtual void vfunc_70();
    virtual void vfunc_74();
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
    virtual void vfunc_a8();
    virtual void vfunc_ac();
    virtual void vfunc_b0();
    virtual void vfunc_b4();
    virtual void vfunc_b8();
    virtual void vfunc_bc();
    virtual void vfunc_c0();
    virtual void vfunc_c4();
    virtual void vfunc_c8();
    virtual void vfunc_cc();
    virtual void vfunc_d0();
    virtual void vfunc_d4();
    virtual void vfunc_d8();
    virtual void vfunc_dc();
    virtual void vfunc_e0();
    virtual void vfunc_e4();
    virtual void vfunc_e8();
    virtual void vfunc_ec();
    virtual void vfunc_f0();
    virtual void vfunc_f4();
    virtual void vfunc_f8();
    virtual void vfunc_fc();
    virtual void vfunc_100();
    virtual void vfunc_104();
    virtual void vfunc_108();
    virtual void vfunc_10c();
    virtual void vfunc_110();
    virtual void vfunc_114();
    virtual void vfunc_118();
    virtual void vfunc_11c();
    virtual void vfunc_120();
    virtual void vfunc_124();
    virtual void vfunc_128();
    virtual void vfunc_12c();
    virtual void vfunc_130();
    virtual void vfunc_134();
    virtual void vfunc_138();
    virtual void vfunc_13c();
    virtual void vfunc_140();
    virtual s32 vfunc_144();
    virtual s32 vfunc_148();
    virtual s32 vfunc_14c();
    void func_0201c8fc();
    void func_0201c870(void *t);
    u8 func_0201c784();
    void func_0201c790();
    BOOL func_0201c7c0();
    u8 func_0201c7e0();
    void func_0201c7ec(u8 v);
    u32 func_0201c7f8();
    void func_0201c804(u32 v);

      u8 pad_004[0xc8];
      Unk_020d8938_Fn unk_cc;
      u8 pad_0d4[0x68];
      s32 unk_13c[5];
      u8 pad_150[0x4f0];
      u8 unk_640;
      u32 unk_644;
      u8 unk_648;
};
struct Unk_0201c870_Tbl {
    u8 range[5][2];
    u8 pad_0a[2];
    s32 val[5];
    u8 count;
    s8 unk_21;
};
extern u32 __ptmf_null[2];
extern u32 data_020c7aa4[5];
extern u32 data_020c7ab8[5];
extern u8 data_021edb60[];
extern u16 data_020c6cc8;
struct Unk_020cbb18 { u8 pad[0x64]; u32 unk_64; };
extern Unk_020cbb18 *data_020cbb18;
void *_ZN12Unk_020d771413func_02015a5cEv(void *p);
s32 _ZN12Unk_020aa3b813func_020aa514Ev(void *p);
void _ZN12Unk_020aa3b813func_020aa608Ev(void *p);
void _ZN12Unk_020aa3b813func_020aa638EiPKhiS1_PKci(void *p, s32 idx, const u8 *a, s32 b, const u8 *c, const char *d, s32 e);
void _ZN12Unk_020aa3b813func_020aa680Eii(void *p, s32 a, s32 b);
s32 func_02063b8c(s32 n);
BOOL _ZN12Unk_02013b1013func_02014220Ev(void *p);
s32 _ZN12Unk_020cbb1813func_02072e88Ei(void *p, u32 a);
s32 _ZN12Unk_02015b8c13func_02015e48Ej(void *p, u32 a);
s32 _ZN12Unk_0201635013func_02016254EiPv(void *p, u32 a, void *q);
s32 _ZN12Unk_0201985813func_020196b4Ejiiissiitt(void *p, u32 a, u32 b, u32 c, u32 d, u32 e, u32 f, u32 g, u32 h, u32 i, u32 j);
void _ZN12Unk_020dbd7413func_02053b34EP16Unk_02053a54_Msg(void *p, void *q);
void *func_0207e310(u32 a);
s32 func_0207856c();
s32 func_0207853c(void *p);
s32 func_02078548(void *p);
s32 func_0207854c(void *p, u32 a);
s32 func_02078550(void *p, u32 a);
s32 func_02078568(void *p, u32 a);
s32 _ZN12Unk_0208086013func_020805c4Ev();
s32 func_02003098();
s32 func_02079fd8();
s32 _ZN12Unk_0201ad2013func_0201ad30Ei(void *p, u32 a);
s32 _ZN12Unk_0201ad2013func_0201ad34Ei(void *p, u32 a);
s32 func_02003e70(void *p, u32 a, u32 b, u32 c);
s32 _ZN12Unk_02003c4013func_02003e80EP16Unk_02003a6c_Vec(void *p, void *v);
s32 _ZN12Unk_02003c3013func_02003e50Ev(void *p);
s32 _ZN12Unk_02003c3013func_02003eccEv(void *p);
s32 func_02090330(u32 a, void *v, void *w, u32 b);
void func_020f43fc(void *p);
void func_020f440c(void *p);
extern u32 data_020d7a38[2];
struct Unk_0201c050_Parent { u8 pad[0x2c]; void *unk_2c; };
struct Unk_0201c050_Obj {
    u8 pad_00[4];
    Unk_0201c050_Parent *unk_04;
    u8 pad_08[0x1c];
    u32 unk_24;
    u8 pad_28[0x6a];
    u8 unk_92;
};
void func_0201be44();
void func_0201c050(Unk_0201c050_Obj *p);
class Unk_0201c078;
typedef BOOL (Unk_0201c078::*Unk_0201c078_Fn)(Unk_020d8938 *s);
typedef void (Unk_0201c078::*Unk_0201c078_State)(Unk_020d8938 *s);
class Unk_0201c078 {
public:
    void func_0201c078(Unk_020d8938 *s);
    void func_0201c1d0(Unk_020d8938 *s, s32 next);
    BOOL func_0201c2a4(Unk_020d8938 *s, u32 idx);
    BOOL func_0201c34c(Unk_020d8938 *s);
    void func_0201c384(Unk_020d8938 *s);
    BOOL func_0201c3cc(Unk_020d8938 *s);
    void func_0201c3e8(Unk_020d8938 *s);
    void func_0201c3fc(Unk_020d8938 *s);
    BOOL func_0201c444(Unk_020d8938 *s);
    void func_0201c460(Unk_020d8938 *s);
    void func_0201c474(Unk_020d8938 *s);
    BOOL func_0201c4cc(Unk_020d8938 *s);
    void func_0201c4e8(Unk_020d8938 *s);
    void func_0201c4fc(Unk_020d8938 *s);
    BOOL func_0201c510(Unk_020d8938 *s);
    BOOL func_0201c554();
    void func_0201c564();
    void func_0201c56c();
    void func_0201c574(Unk_020d8938 *s);
    void func_0201c594(Unk_020d8938 *s, u32 a, u32 b);
    void func_0201c5f0();
    void func_0201c614(u32 a, s32 b);
    void func_0201c668();
    void func_0201c678(Unk_020d8938 *s, u32 mode);
    BOOL func_0201c6d4();
    void func_0201c6e4();
    void func_0201c704();
    void func_0201c724();

      u8 pad_00[0x40];
      u8 unk_40;
      s32 unk_44;
      u8 unk_48;
      Unk_0201c078_State unk_4c;
      u8 unk_54;
      u16 unk_56;
      u8 unk_58;
      u8 unk_59;
      u8 unk_5a;
};
struct Unk_0201c574_Vec { s32 x, y, z; };
void *func_0201c764(void *p);
void *func_0201c774(void *p);
void func_0201c938(u32 a, Unk_0201c870_Tbl *t, u32 i, u8 lo, u8 hi, s32 val);
void func_0201c91c(u32 a, Unk_0201c870_Tbl *t, u32 i, const u8 *r, s32 val);
void func_0201c95c(u32 a, Unk_0201c870_Tbl *t);
}
}

// ---- unk_0201c98c.cpp
namespace F01 {
extern "C" {

struct Unk_020d8938_Fc {
    u8 pad_00[0x82c];
    void *unk_82c;
};
class Unk_020d8938;
typedef s32 (Unk_020d8938::*Unk_020d8938_Fn)();
typedef void (Unk_020d8938::*Unk_020d8938_FnArg)(u32);
typedef void (Unk_020d8938::*Unk_020d8938_FnV)();
void func_0200402c();
Unk_020d8938_Fc *_ZN12Unk_020d893813func_0201c7f8Ev(Unk_020d8938_Fc *p);
void func_0207d0f4(void *a, void *b, u32 c);
s32 _ZN12Unk_0208091c13func_02080b40Ev(void *p);
void func_0207790c(void *a, s32 b, s32 c);
void func_0207c55c(void *a, u32 b);
s32 func_0209750c();
u8 *_ZN12Unk_02097ff413func_02098308Ev();
u32 func_02081328(u32 a, u32 b);
void _ZN12Unk_020d893813func_0202d33cEMS_FvvE(Unk_020d8938 *p, Unk_020d8938_FnV f);
void func_0203cb80(u32 a);
void func_0203ca94();
s32 _ZN12Unk_0209865c13func_02098750Ev();
s32 _ZN12Unk_02097d1c13func_02097edcEv();
void _ZN12Unk_02097d1c13func_02097f30EPtij(s32 a, void *b, s32 c, ...);
s32 _ZN12Unk_0209865c13func_020986c8Ev(s32 a);
void func_0203c42c(s32 a, void *b, u32 c, u32 d);
void func_0207cf10(void *a, void *b);
void func_02026968(u16 *out, s32 v);
void _ZN12Unk_020660f813func_02067a78Ev(void *p);
void func_0207cfb8(void *p, u16 *id);
void _ZN12Unk_0208091c13func_02080b78EPt(void *a, void *b);
s32 func_02098eb0(void *p);
void func_02097a48(s32 a, s32 b, u32 c);
void *_ZN12Unk_0208086013func_020805acEv(void *p);
s32 _ZN12Unk_0208086013func_020805c4Ev(void *p);
u8 _ZN12Unk_0208091c13func_02080accEv(void *p);
void func_0203cfb8(void *a, void *b, void *c, void *d, void *e, void *f);
void func_02065818(void *a, void *b, void *c, void *d, u32 e, void *f, s32 g, s32 h);
extern u8 data_021edb60;
extern u8 data_021edb5c;
extern u8 data_021beee0[];
static inline BOOL Unk_020d8938_IsSet(u16 *p)
{
    return *p != 0xfff1;
}
class Unk_020d8938 {
public:
    virtual ~Unk_020d8938();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void vfunc_10(u32 a);
    virtual void vfunc_14(u32 a);

    s32 func_0201cb48(u32 idx);
    s32 func_0201cc44();
    s32 func_0201cc78();
    s32 func_0201ccac();
    s32 func_0201cce0();
    s32 func_0201cd14();
    void func_0201cd48();
    s32 func_0201cd9c();
    s32 func_0201cdc8();
    s32 func_0201cde0();
    s32 func_0201cdf8();
    void func_0201ce84();
    s32 func_0201cec0();
    void func_0201cf74();
    s32 func_0201cfd8();
    void func_0201d060();
    s32 func_0201d0c4();
    s32 func_0201d160();
    s32 func_0201d184();
    s32 func_0201d250();
    void func_02015878(u32 a, u32 b);
    void func_02015848(u32 a, u32 b);
    void func_0201577c(u32 a, void *b, void *c, void *d);
    void func_02015170(u32 a, u32 b);
    void func_020151d0(s32 a);
    void func_02015144(void *a, u32 b);
    void func_02014e60(u16 *a, u32 b, u32 c, u32 d);
    void func_02014ce4(u16 *a, u32 b, u32 c, u32 d);
    void func_02014578(void *a);

    u8 pad_04[0x38];
    void *unk_3c;
    u8 pad_40[0xb4 - 0x40];
    Unk_020d8938_FnArg unk_b4;
    Unk_020d8938_FnArg unk_bc;
    Unk_020d8938_FnArg unk_c4;
    u8 pad_cc[0xfc - 0xcc];
    Unk_020d8938_Fc *unk_fc;
    u8 pad_100[0x120 - 0x100];
    u16 unk_120;
    u8 pad_122[2];
    s32 unk_124;
    void *unk_128;
    u8 pad_12c[4];
    void *unk_130;
    u8 *unk_134;
    u8 pad_138[0x156 - 0x138];
    u16 unk_156;
    u8 pad_158[0x168 - 0x158];
    Unk_020d8938_Fn unk_168;
    Unk_020d8938_Fn unk_170;
    Unk_020d8938_Fn unk_178;
    Unk_020d8938_Fn unk_180;
    Unk_020d8938_Fn unk_188;
    u8 pad_190[0x198 - 0x190];
    u16 unk_198;
    u8 unk_19a;
    u8 pad_19b;
    s32 unk_19c;
};
}
}

// ---- unk_0201d2d0.cpp
namespace F02 {
extern "C" {

class Unk_0201d2d0;
struct Unk_0201d2d0_Out {
    u32 unk_00;
    u8 unk_04;
};
struct Unk_0201d2d0_Data {
    u32 unk_00;
    u8 unk_04;
};
struct Unk_0201d2d0_Vec {
    s32 x, y, z;
};
struct Unk_0201d2d0_Parent {
    u8 pad_00[0x5c];
    Unk_0201d2d0_Vec unk_5c;
    u8 pad_68[0x564 - 0x68];
    u8 unk_564[4];
    u8 pad_568[0x82c - 0x568];
    void *unk_82c;
};
struct Unk_0201d9e0_Rec {
    u16 unk_00;
    u8 unk_02[8];
    u8 pad_0a;
    u8 unk_0b;
};
struct Unk_0201d568_S {
    u8 pad_00[0x20];
    u8 unk_20;
    s8 unk_21;
};
typedef void (Unk_0201d2d0::*Unk_0201d2d0_Fn)();
typedef void (Unk_0201d2d0::*Unk_0201d2d0_OutFn)(Unk_0201d2d0_Out *);
void *_ZN12Unk_0208086013func_020805c4Ev(void *);
u32 func_02003098(void *);
void func_0202d184(void *, void *, void *, s32, u32, u32, u32, u32, u32);
s32 func_0202d048(void *, void *, void *, void *, s32);
void func_0201c95c(void *, void *);
void func_0201c938(void *, void *, s32, s32, s32, void *);
void _ZN12Unk_020d893813func_0201c870EPv(void *, void *);
void _ZN12Unk_020660f813func_020679c0Ei(void *, s32);
void _ZN12Unk_020d771013func_02014e60EPtjjj(void *, u16 *, s32, s32, s32);
void _ZN12Unk_020d893813func_0202d1d4EP16Unk_020d8938_Tbl(void *, void *);
void _ZN12Unk_020660f813func_02067a84EPhPv(void *, u8 *, u32);
void _ZN12Unk_020d771413func_020157b8Ejj(void *, void *, s32);
void *func_0207bf60(void *, s32);
void *func_0209750c();
void *_ZN12Unk_0209865c13func_0209888cEv(void *);
s32 _ZN12Unk_020940a013func_02094218Ev(void *);
s32 _ZN12Unk_02002fc813func_020030b4Ev(void *);
s32 func_0207f854(void *, void *);
s32 _ZN12Unk_0208091c13func_02080dd8Ev();
s32 func_02128930(void *, void *, s32);
void func_02034d84(u32);
void func_02034dd0(s32, s32, s32);
void func_02034d70(u32);
void func_02034e10(s32, s32, s32, s32);
void func_02099014(u16 *, s32);
void *func_0209cf0c();
void _ZN12Unk_02097ff413func_020982dcEj(void *, u32);
s32 _ZN12Unk_0201985813func_020197a8Ev(void *);
s32 _ZN12Unk_0201985813func_02019790Ev(void *);
void func_0203a680(void *);
void _ZN12Unk_020d771013func_02014f74Ev(void *);
extern Unk_0201d2d0_Data data_020c7798;
extern Unk_0201d2d0_Data data_020c7938;
extern Unk_0201d2d0_Data data_020c75c8;
extern Unk_0201d2d0_Data data_020c78e8;
extern Unk_0201d2d0_Fn data_020d7958;
extern Unk_0201d2d0_Fn data_020d7c68;
extern Unk_0201d2d0_Fn data_020d7990;
extern Unk_0201d2d0_Fn data_020d7d18;
extern Unk_0201d2d0_Fn data_020d7d20;
extern Unk_0201d2d0_Fn data_020d7c88;
extern Unk_0201d2d0_Fn data_020d7d70;
extern Unk_0201d2d0_Fn __ptmf_null;
extern u8 data_021beb08[];
extern u8 data_021dfd8c[];
class Unk_0201d2d0 {
public:
    void func_0201d2d0(Unk_0201d2d0_Out *out);
    void func_0201d344();
    void func_0201d378(Unk_0201d2d0_Out *out);
    void func_0201d3ec();
    void func_0201d420(Unk_0201d2d0_Out *out);
    void func_0201d4a8(Unk_0201d2d0_Out *out);
    void func_0201d508(Unk_0201d2d0_Out *out);
    void func_0201d568();
    void func_0201d5d4(Unk_0201d2d0_Out *out);
    void func_0201d634();
    void func_0201d668(Unk_0201d2d0_Out *out);
    void func_0201d6c8();
    void func_0201d71c(Unk_0201d2d0_Out *out);
    void func_0201d7d4(Unk_0201d2d0_Out *out);
    void func_0201d88c();
    void func_0201d90c();
    void func_0201d9e0(Unk_0201d2d0_Out *out);
    void func_0201db44();
    void func_0201db60();
    void func_0201db88();
    void func_0202d1c0(Unk_0201d2d0_Fn fn);
    void func_0202d33c(Unk_0201d2d0_Fn fn);

    u8 pad_00[0x3c];
    void *unk_3c;
    u8 pad_40[0xac - 0x40];
    Unk_0201d2d0_OutFn unk_ac;
    u8 pad_b4[0xc4 - 0xb4];
    Unk_0201d2d0_Fn unk_c4;
    u8 pad_cc[0xec - 0xcc];
    Unk_0201d2d0_Fn unk_ec;
    Unk_0201d2d0_Fn unk_f4;
    Unk_0201d2d0_Parent *unk_fc;
    u8 unk_100[0x11e - 0x100];
    u8 unk_11e;
    u8 pad_11f[0x124 - 0x11f];
    u32 unk_124;
    u32 unk_128;
    u8 pad_12c[0x138 - 0x12c];
    u8 unk_138;
    u8 pad_139[0x190 - 0x139];
    u8 unk_190;
    u8 pad_191[3];
    s32 unk_194;
};
}
}

// ---- unk_0201dc44.cpp
namespace F03 {
extern "C" {

class Unk_0201dc44;
struct Unk_0201dc44_Ret {
    void *a;
    u8 b;
};
typedef void (Unk_0201dc44::*Unk_0201dc44_State)(Unk_0201dc44_Ret *out);
struct Unk_0201dc44_Snd {
    u32 a;
    u8 b;
};
struct Unk_0201dc44_Vec {
    s32 x, y, z;
};
struct Unk_0201dca0_Vec {
    s32 x, y, z;
};
struct Unk_0201dc44_Ctx {
    u8 pad_00[0x5c];
    Unk_0201dc44_Vec unk_5c;
    u8 pad_68[0x564 - 0x68];
    u8 unk_564[4];
    u8 pad_568[0x82c - 0x568];
    void *unk_82c;
};
struct Unk_0201dc44_Id {
    u16 unk_00;
    u8 unk_02[8];
    u8 unk_0a;
    u8 unk_0b;
};
struct Unk_0201dc44_Time {
    u8 unk_00;
    u8 unk_01;
    u8 unk_02;
    u8 unk_03;
    u8 unk_04;
    u8 unk_05;
    u8 unk_06;
    u8 unk_07;
};
struct Unk_0201dc44_Lim {
    u8 unk_00;
    u8 unk_01;
    u8 unk_02;
    u8 unk_03;
};
struct Unk_0201e110_Buf {
    u8 pad[0x20];
    u8 unk_20;
    u8 unk_21;
};
extern u16 data_020c6cc8;
extern Unk_0201dc44_State data_020d7aa8;
extern Unk_0201dc44_State data_020d7de0;
extern Unk_0201dc44_State data_020d7ae8;
extern Unk_0201dc44_State data_020d7df0;
extern Unk_0201dc44_State data_020d7e98;
extern Unk_0201dc44_Snd data_020c78e8;
extern Unk_0201dc44_Snd data_020c7710;
extern Unk_0201dc44_Snd data_020c7930;
extern u8 data_021bec70[];
extern u8 data_021be730[];
extern u8 data_021be668[];
extern u8 data_020c74fc[];
extern u8 data_020c7500[];
extern u8 data_021ed24c[];
extern u8 data_021d7350[];
s32 _ZN12Unk_0201985813func_020197a8Ev(void *p);
s32 _ZN12Unk_0201985813func_02019790Ev(void *p);
void _ZN12Unk_0201985813func_02019614Ejt(void *p, s32 a, u32 b);
void _ZN12Unk_0201985813func_020196b4Ejiiissiitt(void *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h, s32 i, s32 j);
s32 _ZN12Unk_020d771013func_02014f38Ej(Unk_0201dc44 *p, u32 x);
s32 _ZN12Unk_020d893813func_0202d33cEMS_FvvE(Unk_0201dc44 *p, Unk_0201dc44_State s);
s32 _ZN12Unk_020d893813func_0202d1c0EMS_FvvE(Unk_0201dc44 *p, Unk_0201dc44_State s);
void *_ZN12Unk_0208086013func_020805c4Ev(void *p);
void *func_02003098(void *p);
void func_0202d184(Unk_0201dc44 *p, void *a, u8 *b, s32 c, void *d, u32 e, s32 f, s32 g, u32 h);
s32 func_0202d048(Unk_0201dc44 *p, void *a, void *b, void *c, s32 d);
s32 _ZN12Unk_020d893813func_0202d1d4EP16Unk_020d8938_Tbl(Unk_0201dc44 *p, void *s);
s32 _ZN12Unk_020d893813func_0202d20cEv(Unk_0201dc44 *p);
s32 _ZN12Unk_0201d2d013func_020209ccEv(Unk_0201dc44 *p);
s32 _ZN12Unk_0202134013func_020219ccEv(Unk_0201dc44 *p);
s32 _ZN12Unk_0202134013func_020218c4Ev(Unk_0201dc44 *p);
s32 _ZN12Unk_0201d2d013func_02021ce4Ev(Unk_0201dc44 *p);
void _ZN12Unk_0201f7d013func_0201fc48Ev(Unk_0201dc44 *p);
void _ZN12Unk_0201d2d013func_02029d84EP16Unk_0201d2d0_Out(Unk_0201dc44 *p);
void _ZN12Unk_0201d2d013func_0202b520EP16Unk_0201d2d0_Out(Unk_0201dc44 *p);
void _ZN12Unk_020660f813func_02067a84EPhPv(u32 a, u8 *b, void *c);
void _ZN12Unk_020660f813func_020679c0Ei(u32 a, s32 b);
void func_0209d498(void *p);
s32 func_02063b8c(s32 a);
void func_0201c91c(Unk_0201dc44 *p, void *buf, s32 idx, void *d, void *e);
void _ZN12Unk_020d893813func_0201c870EPv(Unk_0201dc44 *p, void *buf);
s32 _ZN12Unk_0201d2d013func_02020320EP16Unk_0201d2d0_Out(Unk_0201dc44 *p, Unk_0201dc44_Ret *out);
Unk_0201dc44_Lim *func_020812e0(void *p);
s32 _ZN12Unk_0208091c13func_02080a74Ev(void *p);
void _ZN12Unk_0208091c13func_02080a98Ev(void *p);
void _ZN12Unk_020d771413func_02015958Eijiii(Unk_0201dc44 *p, s32 a, s32 b, s32 c, s32 d, s32 e);
Unk_0201dc44_Id *_ZN12Unk_0208581013func_02085828Ev(void *p);
Unk_0201dc44_Id *_ZN12Unk_0208581013func_0208586cEv(void *p);
s32 _ZN12Unk_02002fc813func_020030b4Ev(void *p);
void _ZN12Unk_020d771413func_020157b8Ejj(Unk_0201dc44 *p, void *q, s32 r);
s32 func_02128930(void *a, void *b, s32 n);
s32 func_0203f42c(s32 a);
s32 _ZN12Unk_0209da4413func_0209e170Ej(void *a, s32 b);
class Unk_0201dc44 {
public:
    void func_0201dc44();
    void func_0201dca0();
    void func_0201dd1c();
    void func_0201dd3c(Unk_0201dc44_Ret *out);
    void func_0201ddd4(Unk_0201dc44_Ret *out);
    void func_0201de08(Unk_0201dc44_Ret *out);
    void func_0201de3c(Unk_0201dc44_Ret *out);
    void func_0201de70();
    void func_0201de78();
    void func_0201de80();
    void func_0201ded4(Unk_0201dc44_Ret *out);
    void func_0201df34(Unk_0201dc44_Ret *out);
    void func_0201df94(Unk_0201dc44_Ret *out);
    void func_0201dff4(Unk_0201dc44_Ret *out);
    void func_0201e08c(Unk_0201dc44_Ret *out);
    void func_0201e110();
    void func_0201e18c();
    void func_0201e194();
    void func_0201e1e8();
    void func_0201e1f0(Unk_0201dc44_Ret *out);
    void func_0201e334();
    void func_0201e33c();
    void func_0201e344();
    void func_0201e398(Unk_0201dc44_Ret *out);
    void func_0201e3f8(Unk_0201dc44_Ret *out);
    void func_0201e4ac(Unk_0201dc44_Ret *out);

      u8 pad_00[0x3c];
      u32 unk_3c;
      u8 pad_40[0xac - 0x40];
      Unk_0201dc44_State unk_ac;
      u8 pad_b4[0xec - 0xb4];
      Unk_0201dc44_State unk_ec;
      Unk_0201dc44_State unk_f4;
      Unk_0201dc44_Ctx *unk_fc;
      u8 unk_100[0x1e];
      u8 unk_11e;
      u8 pad_11f[5];
      u32 unk_124;
      void *unk_128;
};
}
}

// ---- unk_0201e5a4.cpp
namespace F04 {
extern "C" {

struct Unk_0201e5a4_Owner {
    u8 pad_00[0x82c];
    u32 unk_82c;
};
struct Unk_0201e5a4_Msg {
    u8 pad_00[8];
    s32 unk_08;
};
struct Unk_0201e5a4_Ret {
    s32 unk_00;
    u8 unk_04;
};
struct Unk_0201e9d0_S {
    u8 unk_00;
    u16 unk_02;
};
struct Unk_0201eabc_T {
    u8 pad_00[0x20];
    u8 unk_20;
    u8 unk_21;
    u8 pad_22[6];
};
struct Unk_0201e5a4_Out {
    u8 *unk_00;
    u8 unk_04;
};
struct Unk_0201e710_Tmp {
    u32 unk_00;
};
struct Unk_020c7758_T {
    u32 unk_00;
    u8 unk_04;
};
extern Unk_020c7758_T data_020c7758;
extern u8 data_021ed24c[];
extern u8 data_021be920[];
extern Unk_0201e9d0_S data_021edb5c;
extern u8 data_021bee08[];
extern u32 data_020c7a68[];
class Unk_0201e5a4;
typedef void (Unk_0201e5a4::*Unk_0201e5a4_RetFn)(Unk_0201e5a4_Ret *);
typedef void (Unk_0201e5a4::*Unk_0201e5a4_Fn)(u32);
typedef void (Unk_0201e5a4::*Unk_0201e5a4_VoidFn)();
u32 _ZN12Unk_0208581013func_02085828Ev(u8 *p);
s32 func_0203f42c(u32 a);
s32 func_02063b8c(u32 a);
s32 _ZN12Unk_0208091c13func_02080a74Ev(u32 a);
s32 _ZN12Unk_0208091c13func_02080a98Ev(u32 a);
s32 _ZN12Unk_02002fc813func_020030b4Ev(u32 a);
u32 _ZN12Unk_0208086013func_020805c4Ev(u32 p);
u32 func_02003098(u32 p);
s32 _ZN12Unk_0208091c13func_02080dd8Ev(u32 a);
void _ZN12Unk_020660f813func_02067a84EPhPv(Unk_0201e5a4_Msg *obj, Unk_0201e9d0_S *p, s32 v);
void _ZN12Unk_020660f813func_020679c0Ei(Unk_0201e5a4_Msg *obj, u32 a);
u32 func_0209750c();
u32 _ZN12Unk_0209865c13func_02098750Ev(u32 a);
s32 _ZN12Unk_02097d1c13func_02097edcEv(u32 a);
u32 _ZN12Unk_02097d1c13func_02097f6cEi(u32 a, u32 b);
s32 func_0204b2d4(u16 *p);
u32 func_0204b25c(u16 *p);
void _ZN12Unk_0206338013func_0206338cEii(Unk_0201e710_Tmp *o, u32 a, u32 b);
void func_02063388(Unk_0201e710_Tmp *o);
void func_02062f94(u16 *a, Unk_0201e710_Tmp *o, u32 b, u32 c, u32 d, u32 e, u32 f);
void _ZN12Unk_02097d1c13func_02097f30EPtij(u32 a, u16 *b, s32 c, u32 d);
u32 _ZN12Unk_0209865c13func_020986c8Ev(u32 a);
void func_0203c42c(u32 a, u16 *b, u32 c, u32 d);
s32 func_0206ed18();
u32 func_0206ed38();
void func_0209909c(u16 *a, u32 b, u32 c);
s32 func_02098f30(u32 *a, BOOL (*f)(u16 *));
class Unk_0201e5a4 {
public:
      u8 pad_00[0x3c];
      Unk_0201e5a4_Msg *unk_3c;
      u8 pad_40[0xac - 0x40];
      Unk_0201e5a4_Fn unk_ac;
      u8 pad_b4[0xfc - 0xb4];
      Unk_0201e5a4_Owner *unk_fc;
      u8 unk_100[0x1e];
      u8 unk_11e;
      u8 pad_11f;
      u16 unk_120;
      u8 pad_122[2];
      s32 unk_124;
      u32 unk_128;
      u8 pad_12c[0x198 - 0x12c];
      u16 unk_198;

    void func_0201e5a4(u32 arg);
    void func_0201e6b0(Unk_0201e5a4_Out *out);
    void func_0201e710();
    void func_0201e81c(Unk_0201e5a4_Out *out);
    void func_0201e87c();
    void func_0201e914(Unk_0201e5a4_Out *out);
    void func_0201e974();
    void func_0201e9d0();
    void func_0201ea8c();
    void func_0201eabc();
    void func_0201eb2c(Unk_0201e5a4_Out *out);
    void func_0201eb8c();
    void func_0201eb94();
    void func_0201eb9c();
    void func_0201ebf0(Unk_0201e5a4_Out *out);
    void func_0201ec50(Unk_0201e5a4_Out *out);
    void func_0201ecb0(Unk_0201e5a4_Out *out);
    void func_0201ed3c(u32 arg);
    void func_0201ee9c();

    void func_0202d048(u32 *a, s32 *b, u32 c, u32 d);
    void func_0202d1d4(u8 *s);
    void func_0202d184(u8 *a, u8 *b, u32 c, u32 d, u32 e, u32 f, u32 g, u8 h);
    void func_0202d328(Unk_0201e5a4_VoidFn f);
    void func_0202d33c(Unk_0201e5a4_VoidFn f);
    void func_0202d1c0(Unk_0201e5a4_VoidFn f);
    BOOL func_02020320(u32 a);
    void func_0201517c(u32 a, u32 b, u32 c);
    void func_020151d0(u32 a);
    BOOL func_02014e60(u16 *p, u32 b, u32 c, u32 d);
    BOOL func_02014ce4(u16 *p, u32 b, u32 c, u32 d);
    BOOL func_0201578c(u16 *p, u32 b, u32 c);
};
BOOL func_0201ee4c(u16 *p, s32 a);
BOOL func_0201ee7c(u16 *p);
void _ZN12Unk_0201f7d013func_0201fc48Ev(Unk_0201e5a4 *p);
void _ZN12Unk_0201d2d013func_02029d84EP16Unk_0201d2d0_Out(Unk_0201e5a4 *p);
void func_0201c95c(Unk_0201e5a4 *self, Unk_0201eabc_T *out);
void func_0201c938(Unk_0201e5a4 *self, Unk_0201eabc_T *a, u32 b, u32 c, u32 d, u8 *e);
void _ZN12Unk_020d893813func_0201c870EPv(Unk_0201e5a4 *self, Unk_0201eabc_T *a);
BOOL func_0201ee4c(u16 *p, s32 a);
BOOL func_0201ee7c(u16 *p);
}
}

// ---- unk_0201eea4.cpp
namespace F05 {
extern "C" {

struct Unk_0201eea4_Sub {
      u8 pad_000[0x82c];
      void *unk_82c;
};
struct Unk_0201ef00_Out {
      void *unk_00;
      u8 unk_04;
};
struct Unk_0201eeac_Res {
      u32 unk_00;
      u8 unk_04;
};
struct Unk_020c7790 {
    u32 unk_00;
    u8 unk_04;
};
extern Unk_020c7790 data_020c7790;
extern Unk_020c7790 data_020c77a8;
extern Unk_020c7790 data_020c7628;
extern Unk_020c7790 data_020c78b0;
extern char data_021be8c0[];
extern char data_021be6c0[];
struct Unk_021ed24c_Prim { virtual void vfunc_00(); u32 pad; };
struct Unk_021ed24c {
    u32 pad;
};
void func_02085818(void *out, Unk_021ed24c *p);
s32 _ZN12Unk_0208581013func_02085810Ev(Unk_021ed24c *p);
void *_ZN12Unk_0208581013func_0208586cEv(Unk_021ed24c *p);
u32 _ZN12Unk_0208581013func_020858acEv(Unk_021ed24c *p);
struct Unk_021ed24c_Outer : Unk_021ed24c_Prim, Unk_021ed24c {};
struct Unk_021d7350_View { u8 pad_00000[0x15ef4]; Unk_021ed24c_Outer unk_15ef4; };
extern Unk_021d7350_View data_021d7350;
struct Unk_0201f170_Rec {
      u16 unk_00;
      u8 unk_02[8];
      u8 unk_0a;
      u8 unk_0b;
};
u32 func_02003098(void *p);
void *_ZN12Unk_0208086013func_020805c4Ev(void *p);
u32 func_02063b8c(u32 x);
s32 _ZN12Unk_02002fc813func_020030b4Ev(void *p);
s32 _ZN12Unk_0208091c13func_02080a74Ev(void *p);
void _ZN12Unk_0208091c13func_02080a98Ev(void *p);
s32 _ZN12Unk_020940a013func_02094218Ev(u32 x);
s32 func_02128930(void *a, void *b, u32 n);
s32 func_0203f42c(u32 x);
void func_0209d498(void *p);
void _ZN12Unk_020660f813func_02067a84EPhPv(u32 self, u8 *b, u32 v);
class Unk_020d7710 {
public:
    virtual void vfunc_00();
      u8 pad_04[0x38];
      u32 unk_3c;
      u8 pad_40[0x6c];

    void func_0201511c(u32 a, u32 b, u32 c, u8 d);
    BOOL func_020151d0(s32 x);
    void func_0201578c(void *a, u32 b, u32 c);
    void func_020157b8(void *a, u32 b);
    void func_020157e8(u32 a, u32 b);
    void func_020158a8(s32 a, u32 b, s32 c, s32 d);
    void func_02015958(s32 a, u32 b, s32 c, s32 d, s32 e);
};
class Unk_0201eea4;
typedef void (Unk_0201eea4::*Unk_0201eea4_Fn)(void *);
class Unk_0201eea4 : public Unk_020d7710 {
public:
    void func_0201eea4();
    void func_0201eeac();
    void func_0201ef00(Unk_0201ef00_Out *out);
    void func_0201ef60(Unk_0201ef00_Out *out);
    void func_0201efc0(Unk_0201ef00_Out *out);
    void func_0201f058(void *arg);
    void func_0201f130();
    void func_0201f170(Unk_0201ef00_Out *out);
    void func_0201f32c();
    void func_0201f36c(Unk_0201ef00_Out *out);
    void func_0201f55c();
    void func_0201f564();
    void func_0201f56c();
    void func_0201f5c0(Unk_0201ef00_Out *out);
    void func_0201f620(Unk_0201ef00_Out *out);
    void func_0201f680(Unk_0201ef00_Out *out);
    void func_0201f6e0();
    void func_0201f738();
    void func_0201f770(Unk_0201ef00_Out *out);

    
    void func_02029d84();
    void func_0201fc48();
    void func_0201f964();
    void func_0202d1d4(const char *s);
    void func_0202d184(u16 *a, u8 *b, u32 c, u32 d, u32 e, u32 f, u32 g, u32 h);
    void func_0202d048(void *b, void *c, void *d, u32 e);
    BOOL func_02020320(void *a);
    void func_0202d33c(Unk_0201eea4_Fn fn);

      Unk_0201eea4_Fn unk_ac;
      u8 pad_b4[0x10];
      Unk_0201eea4_Fn unk_c4;
      u8 pad_cc[0x30];
      Unk_0201eea4_Sub *unk_fc;
      u16 unk_100[15];
      u8 unk_11e;
      u8 pad_11f[5];
      u32 unk_124;
      void *unk_128;
};
u32 func_0201f524(u32 x);
static inline BOOL Unk_0201f170_InRange(volatile u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    u32 a = *p;
    u32 b = *p;
    if (b >= lo && a <= hi) {
        r = TRUE;
    }
    return r;
}
u32 func_0201f524(u32 x);
}
}

// ---- unk_0201f7d0.cpp
namespace F06 {
extern "C" {

class Unk_0201f7d0;
struct Unk_0201f7d0_Out {
    u32 unk_00;
    u8 unk_04;
};
struct Unk_0201f7d0_Data {
    u32 unk_00;
    u8 unk_04;
};
struct Unk_0201f7d0_Parent {
    u8 pad_00[0x82c];
    void *unk_82c;
};
struct Unk_0201f7d0_S {
    u8 pad_00[0x20];
    u8 unk_20;
    s8 unk_21;
};
struct Unk_0201fb54_Date {
    u32 a;
    u32 b;
};
typedef void (Unk_0201f7d0::*Unk_0201f7d0_Fn)();
typedef void (Unk_0201f7d0::*Unk_0201f7d0_OutFn)(Unk_0201f7d0_Out *);
void *_ZN12Unk_0208086013func_020805c4Ev(void *);
u32 func_02003098(void *);
void func_0202d184(void *, void *, void *, s32, u32, u32, u32, u32, u32);
s32 func_0202d048(void *, void *, void *, void *, s32);
void func_0201c95c(void *, void *);
void func_0201c938(void *, void *, s32, s32, s32, void *);
void _ZN12Unk_020d893813func_0201c870EPv(void *, void *);
void func_0201c91c(void *, void *, s32, void *, void *);
void _ZN12Unk_020660f813func_020679c0Ei(void *, s32);
void _ZN12Unk_020d893813func_0202d1d4EP16Unk_020d8938_Tbl(void *, void *);
void _ZN12Unk_020660f813func_02067a84EPhPv(void *, u8 *, u32);
void *func_0209750c();
void *_ZN12Unk_0209865c13func_0209888cEv(void *);
s32 _ZN12Unk_020d771013func_02014f74Ev(void *);
void _ZN12Unk_0208091c13func_02080a98Ev(u32);
s32 func_0206ed18();
u32 func_0206ecf0();
void _ZN12Unk_0208091c13func_02080c20EPvi(u32, u32, s32);
void _ZN12Unk_0207e94013func_0207f20cEPviS0_(void *, u32, s32, void *);
void _ZN12Unk_020d771013func_0201511cEjjjh(void *, s32, void *, s32, s32);
void _ZN12Unk_020d771013func_020151d0Ei(void *, s32);
s32 _ZN12Unk_0208091c13func_02080a74Ev(u32);
s32 func_02063b8c(s32);
void func_0209d498(void *);
s32 func_0209ce68(s32, s32, s32, s32);
void func_0206d9fc(void *);
void func_02079568(void *, void *);
void _ZN12Unk_0201442013func_02014558Ev(void *);
void _ZN12Unk_020d771013func_02014f38Ej(void *, s32);
extern Unk_0201f7d0_Data data_020c78b0;
extern Unk_0201f7d0_Data data_020c7828;
extern Unk_0201f7d0_Data data_020c7670;
extern Unk_0201f7d0_Fn data_020d7ed0;
extern Unk_0201f7d0_Fn data_020d7e50;
extern Unk_0201f7d0_Fn data_020d79c8;
extern Unk_0201f7d0_Fn data_020d7d28;
extern Unk_0201f7d0_Fn data_020d7d40;
extern Unk_0201f7d0_Fn data_020d7ca0;
extern Unk_0201f7d0_Fn data_020d7ab0;
extern Unk_0201f7d0_Fn data_020d7d60;
extern u8 data_021be6c0[];
extern u8 data_021bebb0[];
extern u8 data_021be730[];
extern u8 data_020c74fc[];
extern u8 data_021be668[];
extern u8 data_020c7500[];
extern u8 data_021dfd8c[];
class Unk_0201f7d0 {
public:
    void func_0201f7d0();
    void func_0201f83c(Unk_0201f7d0_Out *out);
    void func_0201f89c(Unk_0201f7d0_Out *out);
    void func_0201f90c();
    void func_0201f964();
    void func_0201f9c0();
    void func_0201f9f8(Unk_0201f7d0_Out *out);
    void func_0201fa58(Unk_0201f7d0_Out *out);
    void func_0201fb20();
    void func_0201fb54(Unk_0201f7d0_Out *out);
    void func_0201fc48();
    void func_0201fcb0(Unk_0201f7d0_Out *out);
    void func_0201fd10(Unk_0201f7d0_Out *out);
    void func_0201fd70(Unk_0201f7d0_Out *out);
    void func_0201fdd0(Unk_0201f7d0_Out *out);
    void func_0201fe30();
    void func_0201fe5c(Unk_0201f7d0_Out *out);
    void func_0201fed0();
    void func_0201ff3c(Unk_0201f7d0_Out *out);
    void func_0201ff9c();
    void func_0201fff4();
    void func_02020010();
    void func_02020030();
    void func_02020084(Unk_0201f7d0_Out *out);
    BOOL func_02020320(Unk_0201f7d0_Out *out);
    void func_0202d1c0(Unk_0201f7d0_Fn fn);
    void func_0202d33c(Unk_0201f7d0_Fn fn);
    void func_0202d328(Unk_0201f7d0_Fn fn);

    u8 pad_00[0x3c];
    void *unk_3c;
    u8 pad_40[0xac - 0x40];
    Unk_0201f7d0_OutFn unk_ac;
    u8 pad_b4[0xc4 - 0xb4];
    Unk_0201f7d0_Fn unk_c4;
    u8 pad_cc[0xfc - 0xcc];
    Unk_0201f7d0_Parent *unk_fc;
    u8 unk_100[0x11e - 0x100];
    u8 unk_11e;
    u8 pad_11f[0x124 - 0x11f];
    u32 unk_124;
    u32 unk_128;
};
}
}

// ---- unk_020200e4.cpp
namespace F07 {
extern "C" {

class Unk_0201d2d0;
struct Unk_0201d2d0_Out {
    u32 unk_00;
    u8 unk_04;
};
struct Unk_0201d2d0_Data {
    u32 unk_00;
    u8 unk_04;
};
struct Unk_0201d2d0_Vec {
    s32 x, y, z;
};
struct Unk_0201d2d0_Parent {
    u8 pad_00[0x5c];
    Unk_0201d2d0_Vec unk_5c;
    u8 pad_68[0x564 - 0x68];
    u8 unk_564[4];
    u8 pad_568[0x82c - 0x568];
    void *unk_82c;
};
struct Unk_0201d9e0_Rec {
    u16 unk_00;
    u8 unk_02[8];
    u8 pad_0a;
    u8 unk_0b;
};
struct Unk_0201d568_S {
    u8 pad_00[0x20];
    volatile u8 unk_20;
    s8 unk_21;
};
typedef void (Unk_0201d2d0::*Unk_0201d2d0_Fn)();
typedef void (Unk_0201d2d0::*Unk_0201d2d0_OutFn)(Unk_0201d2d0_Out *);
void *_ZN12Unk_0208086013func_020805c4Ev(void *);
u32 func_02003098(void *);
void func_0202d184(void *, void *, void *, s32, u32, u32, u32, u32, u32);
s32 func_0202d048(void *, void *, void *, void *, s32);
void func_0201c95c(void *, void *);
void func_0201c938(void *, void *, s32, s32, s32, void *);
void _ZN12Unk_020d893813func_0201c870EPv(void *, void *);
void _ZN12Unk_020660f813func_020679c0Ei(void *, s32);
void _ZN12Unk_020d771013func_02014e60EPtjjj(void *, u16 *, s32, s32, s32);
void _ZN12Unk_020d893813func_0202d1d4EP16Unk_020d8938_Tbl(void *, void *);
void _ZN12Unk_020660f813func_02067a84EPhPv(void *, u8 *, u32);
void _ZN12Unk_020d771413func_020157b8Ejj(void *, void *, s32);
void *func_0207bf60(void *, s32);
void *func_0209750c();
void *_ZN12Unk_0209865c13func_0209888cEv(void *);
s32 _ZN12Unk_020940a013func_02094218Ev(void *);
s32 _ZN12Unk_02002fc813func_020030b4Ev(void *);
s32 func_0207f854(void *, void *);
s32 _ZN12Unk_0208091c13func_02080dd8Ev();
s32 func_02128930(void *, void *, s32);
void func_02034d84(u32);
void func_02034dd0(s32, s32, s32);
void func_02034d70(u32);
void func_02034e10(s32, s32, s32, s32);
void func_02099014(u16 *, s32);
void *func_0209cf0c();
void _ZN12Unk_02097ff413func_020982dcEj(void *, u32);
s32 _ZN12Unk_0201985813func_020197a8Ev(void *);
s32 _ZN12Unk_0201985813func_02019790Ev(void *);
void func_0203a680(void *);
void _ZN12Unk_020d771013func_02014f74Ev(void *);
s32 func_0201c91c(void *, void *, s32, void *, void *);
void *func_0207e310(void *);
void *func_0207856c();
s32 _ZN12Unk_0201d2d013func_0202bb88EPi(void *, void *);
s32 _ZN12Unk_0201d2d013func_0202b444Ev(void *);
s32 _ZN12Unk_0201d2d013func_0202bb84Ev(void *);
s32 _ZN12Unk_0201d2d013func_0202bb54Ev(void *);
s32 _ZN12Unk_0201d2d013func_0202bb48Ei(void *, s32);
Unk_0201d2d0_Data *_ZN12Unk_0201d2d013func_0202baecEPjPv(void *, void *, void *);
s32 _ZN12Unk_0201d2d013func_0202ba80EPViPv(void *, void *, void *);
Unk_0201d2d0_Data *_ZN12Unk_0201d2d013func_0202ba28Ei(void *, s32);
s32 _ZN12Unk_0201d2d013func_0202ba10Ev(void *);
s32 _ZN12Unk_0201d2d013func_0202bae0Ei(void *, s32);
Unk_0201d2d0_Data *_ZN12Unk_0201d2d013func_0202bab4Ev(void *);
s32 _ZN12Unk_0201d2d013func_0202b9e4EP16Unk_0202b4ac_Rec(void *, void *);
Unk_0201d2d0_Data *_ZN12Unk_0201d2d013func_0202b9bcEPjP16Unk_0202b4ac_Rec(void *, void *, void *);
s32 _ZN12Unk_0201d2d013func_0202b9b0Ei(void *, void *);
s32 _ZN12Unk_0201d2d013func_0202b9a4Ei(void *, void *);
s32 _ZN12Unk_0201d2d013func_0202b998Ei(void *, void *);
s32 _ZN12Unk_0208091c13func_02080a74Ev(void *);
void _ZN12Unk_0208091c13func_02080a98Ev(void *);
s32 func_02079524(void *, void *);
s32 func_02063b8c(s32);
s32 _ZN12Unk_020cbb1813func_02072e44Ev(void *);
s32 func_0207e190(void *);
void func_0207e268(void *);
void *func_0209a610();
void _ZN12Unk_0209b3bc13func_0209b238Ev(void *);
s32 func_0207e160(void *);
void func_0207b508(void *, void *);
s32 _ZN12Unk_0206395413func_02094058Ev(void *);
s32 func_02116048(void *, void *, s32);
s32 _ZN12Unk_0201d2d013func_02021ce4Ev(void *);
s32 _ZN12Unk_0201d2d013func_02020a1cEv(void *);
s32 _ZN12Unk_0201d2d013func_02020a90Ev(void *);
s32 _ZN12Unk_0201d2d013func_02020a00Eii(void *, void *, s32);
s32 _ZN12Unk_0201d2d013func_0202b4e8Ejj(void *, s32, s32);
s32 _ZN12Unk_0201d2d013func_0202b4acEjPv(void *, s32, void *);
extern Unk_0201d2d0_Data data_020c7670, data_020c78a8, data_020c7650, data_020c75c8, data_020c76e8, data_020c7870, data_020c7608, data_020c7540, data_020c7848;
extern void *data_020cbb18;
extern Unk_0201d2d0_Fn data_020d7f60, data_020d7ed8;
extern u8 data_020c74fc[], data_020c7500[], data_021be668[], data_021bea78[], data_021bed30[], data_020c7a74[];
extern Unk_0201d2d0_Data data_020c7798;
extern Unk_0201d2d0_Data data_020c7938;
extern Unk_0201d2d0_Data data_020c75c8;
extern Unk_0201d2d0_Data data_020c78e8;
extern Unk_0201d2d0_Fn data_020d7958;
extern Unk_0201d2d0_Fn data_020d7c68;
extern Unk_0201d2d0_Fn data_020d7990;
extern Unk_0201d2d0_Fn data_020d7d18;
extern Unk_0201d2d0_Fn data_020d7d20;
extern Unk_0201d2d0_Fn data_020d7c88;
extern Unk_0201d2d0_Fn data_020d7d70;
extern Unk_0201d2d0_Fn __ptmf_null;
extern u8 data_021beb08[];
extern u8 data_021dfd8c[];
class Unk_0201d2d0 {
public:
    void func_0201d2d0(Unk_0201d2d0_Out *out);
    void func_0201d344();
    void func_0201d378(Unk_0201d2d0_Out *out);
    void func_0201d3ec();
    void func_0201d420(Unk_0201d2d0_Out *out);
    void func_0201d4a8(Unk_0201d2d0_Out *out);
    void func_0201d508(Unk_0201d2d0_Out *out);
    void func_0201d568();
    void func_0201d5d4(Unk_0201d2d0_Out *out);
    void func_0201d634();
    void func_0201d668(Unk_0201d2d0_Out *out);
    void func_0201d6c8();
    void func_0201d71c(Unk_0201d2d0_Out *out);
    void func_0201d7d4(Unk_0201d2d0_Out *out);
    void func_0201d88c();
    void func_0201d90c();
    void func_0201d9e0(Unk_0201d2d0_Out *out);
    void func_0201db44();
    void func_0201db60();
    void func_0201db88();
    void func_0202d1c0(Unk_0201d2d0_Fn fn);
    void func_0202d33c(Unk_0201d2d0_Fn fn);
    void func_020200e4();
    void func_02020150(Unk_0201d2d0_Out *out);
    void func_020201b0(Unk_0201d2d0_Out *out);
    s32 func_02020320(Unk_0201d2d0_Out *out);
    void func_020204b4(Unk_0201d2d0_Out *out);
    void func_020204dc(Unk_0201d2d0_Out *out);
    void func_0202053c(Unk_0201d2d0_Out *out);
    void func_0202059c(Unk_0201d2d0_Out *out);
    void func_02020654();
    void func_020206bc(Unk_0201d2d0_Out *out);
    void func_0202071c();
    void func_020207c8();
    void func_0202081c();
    void func_02020850(Unk_0201d2d0_Out *out);
    void func_020209cc();

    u8 pad_00[0x3c];
    void *unk_3c;
    u8 pad_40[0xac - 0x40];
    Unk_0201d2d0_OutFn unk_ac;
    u8 pad_b4[0xc4 - 0xb4];
    Unk_0201d2d0_Fn unk_c4;
    u8 pad_cc[0xec - 0xcc];
    Unk_0201d2d0_Fn unk_ec;
    Unk_0201d2d0_Fn unk_f4;
    Unk_0201d2d0_Parent *unk_fc;
    u8 unk_100[0x11e - 0x100];
    u8 unk_11e;
    u8 pad_11f[0x124 - 0x11f];
    u32 unk_124;
    u32 unk_128;
    u8 pad_12c[0x138 - 0x12c];
    u8 unk_138;
    u8 pad_139[0x190 - 0x139];
    u8 unk_190;
    u8 pad_191[3];
    s32 unk_194;
};
typedef s32 (Unk_0201d2d0::*Unk_02020850_Fn)();
extern Unk_02020850_Fn data_020d7fa8, data_020d7b98, data_020d7f90, data_020d7f80, data_020d7b88, data_020d7b78, data_020d7f48, data_020d7b60, data_020d7f10, data_020d7b48, data_020d7b38, data_020d7b30, data_020d7ea8, data_020d7ea0;
extern u8 data_021be630[];
}
}

// ---- unk_02020a00.cpp
namespace F08 {
extern "C" {

class Unk_0201d2d0;
struct Unk_0201d2d0_Data {
    u32 unk_00;
    u8 unk_04;
};
struct Unk_0201d2d0_Parent {
    u8 pad_00[0x82c];
    void *unk_82c;
};
struct Unk_02020cc4_Bits {
    u8 a : 2;
    u8 b : 3;
    u8 c : 3;
};
struct Unk_02020cc4_Time {
    u8 pad_00[3];
    u8 unk_03;
    u8 unk_04;
    u8 unk_05;
    u8 pad_06[2];
};
typedef void (Unk_0201d2d0::*Unk_0201d2d0_Fn)();
typedef void *(Unk_0201d2d0::*Unk_02021048_Fn)(u32 *, s32);
typedef u32 (Unk_0201d2d0::*Unk_02020d90_Fn)(u8 *, s32 *, u8 *, u32 *);
class Unk_020d8938 {
public:
    s32 func_0201c784();
};
class Unk_020d9200 {
public:
    virtual ~Unk_020d9200() {}
};
class Unk_020d9218 {
public:
    virtual ~Unk_020d9218() {}
};
class Unk_020e2a60 : public Unk_020d9200 {
public:
    Unk_020e2a60();
    virtual ~Unk_020e2a60();
    virtual u32 vfunc_08() = 0;
    virtual u8 *vfunc_0c() = 0;
};
class Unk_020e2a78 : public Unk_020d9218 {
public:
    Unk_020e2a78();
    virtual ~Unk_020e2a78();
    virtual u32 vfunc_08() = 0;
    virtual u8 *vfunc_0c() = 0;
    BOOL func_020a7aa0(Unk_020e2a60 *src, BOOL a, BOOL b);
};
class Unk_020e2f5c : public Unk_020e2a60 {
public:
    Unk_020e2f5c();
    virtual ~Unk_020e2f5c();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();
    u8 pad_04[0x1c];
};
class Unk_020e2f74 : public Unk_020e2a78 {
public:
    Unk_020e2f74();
    virtual ~Unk_020e2f74();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();
    u8 pad_04[0x1c];
};
static inline BOOL Unk_02020b38_IsZero(u8 v) {
    return v == 0 ? TRUE : FALSE;
}
struct Unk_02021048_Sys {
    u8 pad_00[0x64];
    u32 unk_64;
};
struct Unk_02020d90_Res {
    u32 unk_00;
    s32 unk_04;
    u8 unk_08;
    u8 unk_09;
};
void *_ZN12Unk_0208086013func_020805c4Ev(void *);
u32 func_02003098(void *);
void func_0202d184(void *, void *, void *, s32, u32, u32, u32, u32, u32);
s32 func_0202ce44(s32, s32);
s32 func_02063b8c(u32);
u32 func_0209750c();
s32 _ZN12Unk_02097ff413func_020981ecEv(u32);
void _ZN12Unk_02097ff413func_020981c4Ev(u32);
s32 _ZN12Unk_020cbb1813func_02072e44Ev(Unk_02021048_Sys *);
s32 _ZN12Unk_020cbb1813func_02072e88Ei(void *, u32);
s32 func_0207f4a4(void *, void *, void *, u32);
void func_02115fb4(void *, u32, u32);
void _ZN12Unk_020e1c64C1Ev(void *);
void _ZN12Unk_020e1c64D1Ev(void *);
u8 _ZN12Unk_0208091c13func_02080b40Ev(void *);
u32 func_02080e18(void *);
void _ZN12Unk_020d771413func_0201577cEjjj(void *, u32, void *, void *, void *);
void func_0200303c(void *, s32, u32, u32);
void *func_020b05bc();
s32 func_020b0218();
s32 func_020b0980(void *, s32);
s32 _ZN12Unk_020940a013func_02094218Ev(void *);
void *_ZN12Unk_0209865c13func_0209888cEv(void *);
s32 func_02128930(void *, void *, s32);
s32 _ZN12Unk_020940a013func_020941e8EPS_(void *, void *);
s32 _ZN12Unk_0206395413func_02094058Ev(void *);
s32 func_02094048(void *);
u32 func_0209409c(void *);
void _ZN12Unk_020d771413func_020157e8Ejj(void *, u32, u32);
void _ZN12Unk_020d771413func_02015818Ejj(void *, u32, u32);
BOOL func_020a78a4(void *, const void *, s32);
s32 _ZN12Unk_020660f813func_02067a3cEiPv(void *, u32, void *);
void func_0209d498(void *);
s32 func_020874e8(u32, u32, u32, void *);
void func_02133ef8(void *, u32);
void func_02116048(void *, void *, u32);
s32 func_0203f2e0(u32, void *, u32);
s32 func_0207bcfc(u32, u32, u32);
s32 func_0207e334(void *);
void *func_0207bf60(void *, s32);
void *func_0207fae4(void *);
s32 _ZN12Unk_02002fc813func_020030b4Ev(void *);
void _ZN12Unk_020d771413func_020157b8Ejj(void *, u32, u32);
void _ZN12Unk_020d771413func_02015848Ejj(void *, u32, u32);
void _ZN12Unk_020d771413func_02015878Ejj(void *, u32, u32);
extern u8 data_020e416c;
extern Unk_0201d2d0_Data data_020c7738;
extern Unk_0201d2d0_Data data_020c7750;
extern Unk_0201d2d0_Data data_020c7770;
extern Unk_0201d2d0_Data data_020c7620;
extern u32 data_020c77d8;
extern Unk_02021048_Sys *data_020cbb18;
extern Unk_0201d2d0_Data data_020c7858;
extern u8 data_020c750c[];
extern u32 data_020c7bb0[];
extern u32 data_020c7be0[];
extern u32 data_020c7618;
extern u8 data_021dfd8c[];
extern Unk_0201d2d0_Fn data_020d7bd0;
extern Unk_0201d2d0_Fn data_020d7fd8;
extern Unk_0201d2d0_Fn data_020d7c50;
extern Unk_0201d2d0_Fn data_020d7c48;
class Unk_0201d2d0 {
public:
    s32 func_02020a00(s32 a, s32 b);
    BOOL func_02020a1c();
    BOOL func_02020a90();
    BOOL func_02020b38();
    u32 func_02020cc4();
    BOOL func_02020d90();
    BOOL func_02021048();
    void *func_02021340(u32 *a, s32 n);
    void *func_020213b0(u32 *a, s32 n);
    void *func_020213f0(u32 *a, s32 n);
    void *func_02021448(u32 *a, s32 n);
    void *func_020214ec(u32 *a, s32 n);
    void *func_02021564(u32 *a, s32 n);
    void *func_02021610(u32 *a, s32 n);
    void *func_02021684(u32 *a, s32 n);
    u32 func_02020ea4(u8 *a, s32 *b, u8 *c, u32 *d);
    u32 func_02020f44(u8 *a, s32 *b, u8 *c, u32 *d);

    u8 pad_00[0x3c];
    void *unk_3c;
    u8 pad_40[0xfc - 0x40];
    Unk_0201d2d0_Parent *unk_fc;
    u8 unk_100[0x11e - 0x100];
    u8 unk_11e;
    u8 pad_11f[0x134 - 0x11f];
    void *unk_134;
    u8 pad_138[0x168 - 0x138];
    Unk_0201d2d0_Fn unk_168;
    Unk_0201d2d0_Fn unk_170;
    Unk_0201d2d0_Fn unk_178;
};
}
}

// ---- unk_02021340.cpp
namespace F09 {
extern "C" {

struct Unk_02002fc8 { void func_02002fc8(u32 a); s32 func_02003070(); };
extern u8 data_020e416c[];
extern u8 data_021d735c[];
extern u32 data_020c7a94[];
struct Unk_02021340_Pair { u32 a; u8 b; };
extern Unk_02021340_Pair data_020c7818, data_020c7808, data_020c7868, data_020c7878;
struct Unk_02021340_V { s32 v; };
struct Unk_02021340_Pair2 { Unk_02021340_V a, b; };
extern Unk_02021340_Pair2 data_020d7ca8, data_020d7cb8;
extern u8 data_020d7860[2];
extern u8 data_021dfd8c[];
void *func_02080e1c(void *p);
u16 *_ZN12Unk_0208091c13func_02080b74Ev(void *p);
s32 _ZN12Unk_0208091c13func_02080b60Ev(void *p);
s32 _ZN12Unk_0208091c13func_02080cb8Ev(void *p);
s32 _ZN12Unk_0207fb8013func_02080450EPt(void *a, void *b);
void *func_02080e18(void *p);
void *func_02080ec8(void *p);
s32 _ZN12Unk_0208091c13func_02080dd8Ev(void *p);
void *_ZN12Unk_0208086013func_020805acEv(void *p);
Unk_02002fc8 *_ZN12Unk_0208086013func_020805c4Ev(void *p);
u32 func_02003098(Unk_02002fc8 *p);
void *func_02065634(void);
void _ZN12Unk_0208091c13func_02080c7cEPv(void *a, void *b);
s32 _ZN12Unk_020660f813func_02067a3cEiPv(u32 a, u32 b, void *c);
u16 *func_0209409c(void *p);
s32 func_02097740(void *a, void *b);
s32 func_0209d498(void *p);
s32 func_0209d3d0(void *a, void *b, u32 c);
s32 func_0209d3a4(void *a, void *b);
s32 func_0209750c(void);
s32 _ZN12Unk_0209865c13func_02098750Ev(void);
s32 _ZN12Unk_02097d1c13func_02097edcEv(s32 a);
s32 _ZN12Unk_0209865c13func_0209888cEv(s32 a);
s32 _ZN12Unk_0206395413func_02094058Ev(s32 a);
void func_0202cdf4(u16 *p);
void func_0202d184(void *self, void *a, void *b, u32 c, u32 d, u32 e, u32 f, u32 g, u32 h);
s32 func_020b51a4(void);
s32 func_020b51d4(void);
s32 func_0207e334(void *p);
struct Unk_02021340_Pad { u8 pad_00[0x20]; s32 unk_20; u16 unk_24; };
Unk_02021340_Pad *func_0207e310(void *p);
s32 func_020374b0(void *p, u32 f);
void *func_0207bd3c(void *a, void *b, s32 c);
s32 func_0207bfb4(void *a, void *b);
u32 func_0207bcfc(u32 a, u32 b, u32 c);
s32 func_0207ac2c(void *a, s32 b, s32 c);
void *func_02115fb4(void *p, s32 v, u32 n);
void func_02133ef8(void *p, u32 n);
s32 func_02128930(const void *a, const void *b, u32 n);
s32 func_02063b8c(s32 n);
struct Unk_02021340_Map { u8 *cells; u32 w; u32 h; };
extern Unk_02021340_Map *data_021c47c4;
struct Unk_02021340_Pos { s32 x, y, z; };
static inline s32 Unk_02021340_GetZ(Unk_02021340_Pos *p) { return p->z; }
struct Unk_02021340_Scene {
      u8 pad_00[0x5c];
      Unk_02021340_Pos pos;
      u8 pad_68[0x82c - 0x68];
      void *unk_82c;
};
class Unk_02021340_Base {
public:
    virtual ~Unk_02021340_Base();
    virtual void vfunc_08();
    u8 pad_04[0x38];
      u32 unk_3c;
    u8 pad_40[0x0c];
      void *unk_4c;
      u8 pad_50[0x2c];
    void func_02015818(u32 a, u32 b);
    void func_0201578c(u32 a, u32 b, u32 c);
    void func_02015958(s32 a, u32 b, s32 c, s32 d, s32 e);
};
class Unk_02021340 : public Unk_02021340_Base {
public:
    void *func_02021340(void **arr, s32 n);
    void *func_020213b0(void **arr, s32 n);
    void *func_020213f0(void **arr, s32 n);
    void *func_02021448(void **arr, s32 n);
    void *func_020214ec(void **arr, s32 n);
    void *func_02021564(void **arr, s32 n);
    void *func_02021610(void **arr, s32 n);
    void *func_02021684(void **arr, s32 n);
    BOOL func_020217ac();
    BOOL func_02021848();
    BOOL func_020218c4();
    BOOL func_020219cc();
    BOOL func_02021b6c();

    u8 pad_a0[0xfc - 0x7c];
      Unk_02021340_Scene *unk_fc;
      u8 unk_100[0x1e];
      u8 unk_11e[2];
      u16 unk_120;
};
void *func_02021738(void *ctx, void **arr, s32 n, BOOL (*cb)(void *, void *));
BOOL func_0202138c(void *ctx, void *item);
BOOL func_020213ec(void *ctx, void *item);
BOOL func_0202142c(void *ctx, void *item);
BOOL func_020214a8(void *ctx, void *item);
BOOL func_02021548(void *ctx, void *item);
BOOL func_020215a8(void *ctx, void *item);
s32 func_020216f8(void *item);
BOOL func_02021660(void *ctx, void *item);
BOOL func_020216d4(void *ctx, void *item);
BOOL func_0202138c(void *ctx, void *item);
BOOL func_020213ec(void *ctx, void *item);
BOOL func_0202142c(void *ctx, void *item);
BOOL func_020214a8(void *ctx, void *item);
BOOL func_02021548(void *ctx, void *item);
BOOL func_020215a8(void *ctx, void *item);
s32 func_020215f8(void *ctx, void *item);
BOOL func_02021660(void *ctx, void *item);
BOOL func_020216d4(void *ctx, void *item);
s32 func_020216f8(void *item);
void *func_02021738(void *ctx, void **arr, s32 n, BOOL (*cb)(void *, void *));
}
}

// ---- unk_02021ce4.cpp
namespace F10 {
extern "C" {

class Unk_0201d2d0;
struct Unk_0201d2d0_Data {
    u32 unk_00;
    u8 unk_04;
};
struct Unk_02021d50_Id {
    u16 id;
    u8 name[8];
};
struct Unk_0201d2d0_Vec {
    s32 x, y, z;
};
struct Unk_0201d2d0_Parent {
    u8 pad_00[0x5c];
    Unk_0201d2d0_Vec unk_5c;
    u8 pad_68[0x82c - 0x68];
    void *unk_82c;
};
typedef BOOL (Unk_0201d2d0::*Unk_0201d2d0_BFn)();
void *_ZN12Unk_0208086013func_020805c4Ev(void *);
u32 func_02003098(void *);
void func_0202d184(void *, void *, void *, s32, u32, u32, u32, u32, u32);
s32 _ZN12Unk_0201d2d013func_0202b4e8Ejj(void *, s32, u32);
void _ZN12Unk_0201d2d013func_0202b4acEjPv(void *, s32, void *);
void func_0202d864(u16 *, void *);
void *_ZN12Unk_0207fb8013func_0207fd9cEv(void *);
void *func_0209750c();
void *_ZN12Unk_0209865c13func_0209888cEv(void *);
void *func_0207e310(void *);
s32 _ZN12Unk_0208086013func_020805b8Ev(void *);
void *_ZN12Unk_02071e0413func_02071e04Ev(s32);
u16 *_ZN12Unk_02071ed013func_02071fa0Ev(void *);
s32 func_02128930(void *, void *, s32);
s32 _ZN12Unk_020940a013func_020941e8EPS_(void *, void *);
u16 *func_0209409c(void *);
void _ZN12Unk_020d771413func_020157e8Ejj(void *, void *, s32);
void _ZN12Unk_020d771413func_02015818Ejj(void *, void *, s32);
s32 func_0204ec14(void *, s32, s32, s32);
s32 func_0204ec14x(s32, s32, void *, s32);
void *func_0207e268(void *);
void *func_0209a610(void *);
s32 _ZN12Unk_0209b3bc13func_0209b354Ev(void *);
s32 func_0209b3b0(s32);
s32 func_02078574(void *);
void func_0202c224(u16 *);
void func_0202c708(u16 *);
void _ZN12Unk_020d771413func_0201578cEjjj(void *, void *, s32, s32);
extern Unk_0201d2d0_Data data_020c7880, data_020c7840, data_020c7888, data_020c76b8, data_020c78d0;
extern Unk_0201d2d0_Data data_020c76c8, data_020c7630, data_020c78f8, data_020c7900, data_020c7910;
extern Unk_0201d2d0_Data data_020c7708, data_020c7940;
extern u8 data_020c7530[];
extern u16 data_021d7352[];
extern void *data_021c47c4;
extern u8 data_020e416c;
static inline BOOL Unk_02021ef8_IsZero(u8 v) {
    return v == 0 ? TRUE : FALSE;
}
static inline BOOL Unk_02021d50_R(volatile u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    u32 a = *p;
    u32 b = *p;
    if (b >= lo && a <= hi) {
        r = TRUE;
    }
    return r;
}
class Unk_0201d2d0 {
public:
    BOOL func_02021ce4();
    BOOL func_02021d50();
    BOOL func_02021ea4();
    BOOL func_02021ef8();
    BOOL func_02021fe8();
    BOOL func_0202203c();
    BOOL func_020220c0();
    BOOL func_02022168();
    BOOL func_020221bc();
    BOOL func_02022224();
    BOOL func_02022270();
    BOOL func_0202235c();
    void func_02022448(s32 r1, Unk_0201d2d0_Data *d);
    BOOL func_020224b8();
    BOOL func_020225b4();
    BOOL func_02022608();
    BOOL func_0202265c();
    BOOL func_020226b0();
    BOOL func_02022704();
    BOOL func_02022758();
    BOOL func_020227ac();
    BOOL func_02022994();

    u8 pad_00[0xfc];
    Unk_0201d2d0_Parent *unk_fc;
    u8 unk_100[0x11e - 0x100];
    u8 unk_11e;
};
}
}

// ---- unk_02022608.cpp
namespace F11 {
extern "C" {

class Unk_0201d2d0;
struct Unk_0201d2d0_Out {
    u32 unk_00;
    u8 unk_04;
};
struct Unk_0201d2d0_Data {
    u32 unk_00;
    u8 unk_04;
};
struct Unk_0201d2d0_Parent {
    u8 pad_00[0x82c];
    void *unk_82c;
};
struct Unk_02022608_Rec {
    u8 unk_00;
    u8 unk_01;
    u8 unk_02;
};
struct Unk_02022608_Ent {
    Unk_02022608_Rec *unk_00;
    u8 unk_04;
};
struct Unk_02022608_Time {
    u32 unk_00;
    u32 unk_04;
};
struct Unk_02022bb4_Pair {
    u32 unk_00;
    u32 unk_04;
};
typedef void (Unk_0201d2d0::*Unk_0201d2d0_Fn)();
typedef void (Unk_0201d2d0::*Unk_0201d2d0_OutFn)(Unk_0201d2d0_Out *);
void *_ZN12Unk_0208086013func_020805c4Ev(void *);
u32 func_02003098(void *);
void func_0202d184(void *, void *, void *, s32, u32, u32, u32, u32, u32);
void func_0209d498(void *);
void *func_0204f0f4(u32);
void _ZN12Unk_0201d2d013func_020228b0EiPtiPP16Unk_02022608_Enti(void *, s32, u16 *, s32, Unk_02022608_Ent **, s32);
void *func_0204f234(u32, void *);
s32 func_0202c2d0(void *, s32 *, s32 *, s32 *, void *);
s32 func_02022880(s32);
s32 func_0202c7c0(void *, s32 *, s32 *, s32 *, void *);
s32 func_0202c120(s32);
void _ZN12Unk_020d771413func_0201578cEjjj(void *, void *, u32, u32);
void _ZN12Unk_020d771413func_0201577cEjjj(void *, u32, void *, void *, void *);
s32 func_0209948c(u32);
void func_0209750c();
void *_ZN12Unk_0209865c13func_0209865cEv();
void func_02099f1c(void *);
void _ZN12Unk_0201d2d013func_020289f8EP14Unk_020289f8_S(void *, void *);
void func_0206e8b8(void *);
void func_02099e88(void *, void *, void *);
void func_0207e310(void *);
void func_02078578();
void _ZN12Unk_0209ada413func_0209ad80Ev();
void func_0207a624(void *);
void func_02116048(void *, void *, u32);
void func_0209d374_dummy();
s32 func_0209d374(void *, void *);
void _ZN12Unk_020d893813func_0202d1d4EP16Unk_020d8938_Tbl(void *, void *);
s32 func_0207c618(void *, void *);
void _ZN12Unk_020660f813func_02067a84EPhPv(void *, u8 *, u32);
void _ZN12Unk_020d771013func_02015170Ejj(void *, u32, u32);
void _ZN12Unk_020d771013func_020151d0Ei(void *, u32);
extern Unk_0201d2d0_Data data_020c75d8;
extern Unk_0201d2d0_Data data_020c75e0;
extern Unk_0201d2d0_Data data_020c7728;
extern Unk_0201d2d0_Data data_020c7980;
extern Unk_0201d2d0_Data data_020c7990;
extern Unk_0201d2d0_Data data_020c75f0;
extern Unk_0201d2d0_Data data_020c7740;
extern Unk_0201d2d0_Data data_020c75f8;
extern Unk_0201d2d0_Data data_020c79d8;
extern Unk_0201d2d0_Data data_020c79e8;
extern Unk_0201d2d0_Data data_020c7a00;
extern Unk_0201d2d0_Data data_020c7768;
extern Unk_0201d2d0_Data data_020c7778;
extern Unk_0201d2d0_Data data_020c7788;
extern Unk_0201d2d0_Data data_020c7590;
extern u8 data_021dfd8c[];
extern Unk_0201d2d0_Fn data_020d79d0;
extern Unk_0201d2d0_Fn data_020d7be8;
class Unk_0201d2d0 {
public:
    BOOL func_02022608();
    BOOL func_0202265c();
    BOOL func_020226b0();
    BOOL func_02022704();
    BOOL func_02022758();
    s32 func_020227ac();
    void func_020228b0(s32 a, u16 *p, s32 c, Unk_02022608_Ent **arr, s32 last);
    s32 func_02022994();
    void func_02022a6c(Unk_0201d2d0_Out *out);
    void func_02022acc(Unk_0201d2d0_Out *out);
    void func_02022b40(Unk_0201d2d0_Out *out);
    void func_02022bb4();
    void func_02022c14(Unk_0201d2d0_Out *out);
    void func_02022ca0(Unk_0201d2d0_Out *out);
    void func_02022d00(Unk_0201d2d0_Out *out);
    void func_02022d60(Unk_0201d2d0_Out *out);
    void func_02022dc0();
    void func_02022e8c();
    void func_02022eb4(Unk_0201d2d0_Out *out);
    void func_0202d294(Unk_0201d2d0_Fn fn);
    void func_0202d33c(Unk_0201d2d0_Fn fn);

    u8 pad_00[0x3c];
    void *unk_3c;
    u8 pad_40[0xac - 0x40];
    Unk_0201d2d0_OutFn unk_ac;
    u8 pad_b4[0xfc - 0xb4];
    Unk_0201d2d0_Parent *unk_fc;
    u8 unk_100[0x11e - 0x100];
    u8 unk_11e;
    u8 pad_11f[0x156 - 0x11f];
    u16 unk_156;
};
s32 func_02022880(s32 v);
}
}

// ---- unk_02022f14.cpp
namespace F12 {
extern "C" {

class Unk_0201d2d0;
struct Unk_0201d2d0_Out {
    u32 unk_00;
    u8 unk_04;
};
struct Unk_0201d2d0_Data {
    u32 unk_00;
    u8 unk_04;
};
struct Unk_0201d2d0_Pair {
    u32 unk_00;
    u32 unk_04;
};
struct Unk_0201d2d0_Parent {
    u8 pad_00[0x82c];
    void *unk_82c;
};
struct Unk_0201d568_S {
    u8 pad_00[0x20];
    u8 unk_20;
    s8 unk_21;
};
struct Unk_0202368c_Obj {
    u32 v[2];
};
typedef void (Unk_0201d2d0::*Unk_0201d2d0_Fn)();
typedef void (Unk_0201d2d0::*Unk_0201d2d0_OutFn)(Unk_0201d2d0_Out *);
void *_ZN12Unk_0208086013func_020805c4Ev(void *);
u32 func_02003098(void *);
void func_0202d184(void *, void *, void *, s32, u32, u32, u32, u32, u32);
void func_0201c95c(void *, void *);
void func_0201c938(void *, void *, s32, s32, s32, void *);
void _ZN12Unk_020d893813func_0201c870EPv(void *, void *);
void _ZN12Unk_020660f813func_020679c0Ei(void *, s32);
void _ZN12Unk_020d771013func_02014e60EPtjjj(void *, u16 *, s32, s32, s32);
void _ZN12Unk_0201442013func_02014ce4EPtjjj(void *, u16 *, s32, s32, s32);
void _ZN12Unk_020d893813func_0202d1d4EP16Unk_020d8938_Tbl(void *, void *);
void _ZN12Unk_020660f813func_02067a84EPhPv(void *, u8 *, u32);
void *func_0209750c();
s32 func_02098ffc();
void func_0207a4b8(void *);
void *_ZN12Unk_020994cc13func_0209978cEv();
s32 _ZN12Unk_0209ada413func_0209ad68Ev();
void _ZN12Unk_0209ada413func_0209abb4Eh(void *, s32);
void _ZN12Unk_020994cc13func_02099790Ev();
void *_ZN12Unk_0209865c13func_02098750Ev();
s32 _ZN12Unk_02097d1c13func_02097edcEv();
void _ZN12Unk_02097d1c13func_02097f30EPtij(void *, u16 *, s32, s32);
void *_ZN12Unk_0209865c13func_020986c8Ev(void *);
void func_0203c42c(void *, u16 *, s32, s32);
void func_0202cd44(u16 *, void *);
void _ZN12Unk_020d771413func_0201578cEjjj(void *, u16 *, s32, s32);
void func_0200303c(void *, s32, u32, u32);
s32 _ZN12Unk_0209ada413func_0209ac64Ev(void *);
void func_0209909c(u16 *, s32, s32);
void _ZN12Unk_0206338013func_0206338cEii(Unk_0202368c_Obj *, s32, s32);
void func_02063388(Unk_0202368c_Obj *);
void func_02062f94(u16 *, Unk_0202368c_Obj *, s32, s32, s32, s32, s32);
void *func_02080e18();
s32 _ZN12Unk_0207fb8013func_02080450EPt(void *, void *);
s32 func_0206ed18();
s32 func_0206ed38();
u16 *_ZN12Unk_02097d1c13func_02097f6cEi(void *, s32);
void _ZN12Unk_020d893813func_0202d20cEv(void *);
extern Unk_0201d2d0_Data data_020c7588;
extern Unk_0201d2d0_Data data_020c7578;
extern Unk_0201d2d0_Data data_020c7668;
extern Unk_0201d2d0_Data data_020c75b0;
extern Unk_0201d2d0_Data data_020c77b0;
extern Unk_0201d2d0_Data data_020c77b8;
extern Unk_0201d2d0_Data data_020c77c0;
extern Unk_0201d2d0_Data data_020c77d0;
extern Unk_0201d2d0_Data data_020c7898;
extern u32 data_020c77d8;
extern Unk_0201d2d0_Fn data_020d7a30;
extern Unk_0201d2d0_Fn data_020d79e0;
extern Unk_0201d2d0_Fn data_020d7998;
extern Unk_0201d2d0_Fn data_020d8010;
extern Unk_0201d2d0_Fn data_020d7c38;
extern Unk_0201d2d0_Fn data_020d7c58;
extern Unk_0201d2d0_Fn data_020d7c70;
extern u8 data_021dfd8c[];
class Unk_0201d2d0 {
public:
    void func_02022f14();
    void func_02022f80(Unk_0201d2d0_Out *out);
    void func_02022fe0(Unk_0201d2d0_Out *out);
    void func_02023044();
    void func_020230b4(Unk_0201d2d0_Out *out);
    void func_02023118();
    void func_02023140(Unk_0201d2d0_Out *out);
    void func_020231b4();
    void func_020231cc(Unk_0201d2d0_Out *out);
    void func_02023248();
    void func_0202329c();
    void func_02023308(Unk_0201d2d0_Out *out);
    void func_020233b8();
    void func_02023428(Unk_0201d2d0_Out *out);
    void func_02023488(Unk_0201d2d0_Out *out);
    void func_020234e8(Unk_0201d2d0_Out *out);
    void func_02023548(Unk_0201d2d0_Out *out);
    void func_020235c0();
    void func_02023614();
    void func_0202368c(Unk_0201d2d0_Out *out);
    void func_02023800();
    void func_0202d1c0(Unk_0201d2d0_Fn fn);
    void func_0202d33c(Unk_0201d2d0_Fn fn);
    void *func_0202d114();

    u8 pad_00[0x3c];
    void *unk_3c;
    u8 pad_40[0xac - 0x40];
    Unk_0201d2d0_OutFn unk_ac;
    u8 pad_b4[0xc4 - 0xb4];
    Unk_0201d2d0_Fn unk_c4;
    u8 pad_cc[0xfc - 0xcc];
    Unk_0201d2d0_Parent *unk_fc;
    u8 unk_100[0x11e - 0x100];
    u8 unk_11e;
    u8 pad_11f;
    u16 unk_120;
    u8 pad_122[0x128 - 0x122];
    u32 unk_128;
    u8 pad_12c[0x134 - 0x12c];
    u32 unk_134;
    u8 pad_138[0x156 - 0x138];
    u16 unk_156;
    u8 pad_158[0x178 - 0x158];
    Unk_0201d2d0_Fn unk_178;
    u8 pad_180[0x198 - 0x180];
    u16 unk_198;
};
}
}

// ---- unk_020238b0.cpp
namespace F13 {
extern "C" {

class Unk_020238b0;
struct Unk_020238b0_Out {
    u32 unk_00;
    u8 unk_04;
};
struct Unk_020238b0_Data {
    u32 unk_00;
    u8 unk_04;
};
struct Unk_020238b0_Parent {
    u8 pad_00[0x82c];
    void *unk_82c;
};
typedef void (Unk_020238b0::*Unk_020238b0_Fn)();
typedef void (Unk_020238b0::*Unk_020238b0_OutFn)(Unk_020238b0_Out *);
void *_ZN12Unk_0208086013func_020805c4Ev(void *);
u32 func_02003098(void *);
void func_0202d184(void *, void *, void *, s32, u32, u32, u32, u32, u32);
void _ZN12Unk_020d893813func_0202d1d4EP16Unk_020d8938_Tbl(void *, void *);
void _ZN12Unk_020660f813func_02067a84EPhPv(void *, u8 *, u32);
void _ZN12Unk_020660f813func_02067abcEPhPv(void *, u8 *, u32);
void _ZN12Unk_020d771013func_02014e60EPtjjj(void *, u16 *, u32, u32, u32);
void _ZN12Unk_020d771013func_0201517cEjjj(void *, u32, u32, u32);
void _ZN12Unk_020d771013func_020151d0Ei(void *, s32);
void _ZN12Unk_020d771413func_0201578cEjjj(void *, void *, u32, u32);
void _ZN12Unk_020d771413func_020158e0Eijihii(void *, s32, u32, u32, u32, u32, u32);
void func_0209a944(void *);
void func_020776d8(void *);
void *_ZN12Unk_020d893813func_0202d114Ev(void *);
s32 _ZN12Unk_0209ada413func_0209ace8EPi(void *, s32 *);
s32 _ZN12Unk_0209ada413func_0209ad28Ev(void *);
s32 _ZN12Unk_0209ada413func_0209ac64Ev(void *);
s32 func_0209a8f4(s32);
s32 func_0209a938(void *);
void *func_0209a940(void *);
void _ZN12Unk_0209ada413func_0209abb4Eh(void *, u32);
void func_020776f0(void *, u32);
s32 _ZN12Unk_020cbb1813func_02072e88Ei(void *, void *);
void func_0207c7bc(void *);
void func_0207e310(void *);
void func_02078520();
void func_0207cfb8(void *, u16 *);
s32 _ZN12Unk_0208091c13func_02080b78EPt(void *, u16 *);
void func_020777b8(void *, s32, u16 *);
void *func_0209750c();
void *_ZN12Unk_0209865c13func_02098750Ev();
s32 func_02063b8c(u32);
s32 func_0205b4f8();
s32 func_0202ac7c(s32);
void func_02026968(u16 *, s32);
s32 func_0207ce70(u16 *, void *);
s32 func_0207ceb4(u16 *, void *);
s32 func_0207cf10(void *, u16 *);
s32 func_0202cd44(u16 *, void *);
s32 func_0202cd2c(u16 *, void *);
s32 func_02097a48(void *, s32, u32);
s32 _ZN12Unk_02097d1c13func_02097edcEv(void *);
s32 _ZN12Unk_02097d1c13func_02097f30EPtij(void *, u16 *, s32, s32);
s32 _ZN12Unk_0209865c13func_020986c8Ev(void *);
s32 func_0203c42c(s32, u16 *, u32, u32);
extern Unk_020238b0_Data data_020d7c80;
extern Unk_020238b0_Data data_020d7e78;
extern Unk_020238b0_Data data_020d7d38;
extern Unk_020238b0_Data data_020c76f0;
extern u32 data_020d8878[];
extern u32 data_020d8864[];
extern Unk_020238b0_Data data_020c7b88[];
extern u8 data_020c7a44[];
extern u8 data_020c7a50[];
extern u8 data_020c7a5c[];
extern Unk_020238b0_Fn data_020d7c70;
extern Unk_020238b0_Fn data_020d7c78;
extern Unk_020238b0_Fn data_020d7cf8;
extern Unk_020238b0_Fn data_020d7da0;
extern Unk_020238b0_Fn data_020d7970;
extern void *data_020cbb18[];
BOOL func_020238e0(u16 *p);
static inline BOOL Unk_020238b0_InRange(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) {
        r = TRUE;
    }
    return r;
}
class Unk_020238b0 {
public:
    void func_020238b0();
    void func_02023900();
    void func_02023928(Unk_020238b0_Out *out);
    void func_020239c8(Unk_020238b0_Out *out);
    void func_02023a58();
    void func_02023ab4(Unk_020238b0_Out *out);
    void func_02023b50(Unk_020238b0_Out *out);
    void func_02023bfc();
    void func_02023c80();
    void func_02023cb0(Unk_020238b0_Out *out);
    void func_02023da4();
    void func_020241a0();
    void func_0202d294(Unk_020238b0_Fn fn);
    void func_0202d33c(Unk_020238b0_Fn fn);

    u8 pad_00[0x3c];
    void *unk_3c;
    u8 pad_40[0xac - 0x40];
    Unk_020238b0_OutFn unk_ac;
    u8 pad_b4[0xc4 - 0xb4];
    Unk_020238b0_Fn unk_c4;
    u8 pad_cc[0xfc - 0xcc];
    Unk_020238b0_Parent *unk_fc;
    u8 unk_100[0x11e - 0x100];
    u8 unk_11e;
    u8 pad_11f;
    u16 unk_120;
    u8 pad_122[2];
    s32 unk_124;
    void *unk_128;
    u8 pad_12c[0x156 - 0x12c];
    u16 unk_156;
    u8 pad_158[0x160 - 0x158];
    void *unk_160;
    u8 pad_164[0x198 - 0x164];
    u16 unk_198;
    u8 pad_19a[2];
    s32 unk_19c;
};
BOOL func_020238e0(u16 *p);
}
}

// ---- unk_020241f4.cpp
namespace F14 {
extern "C" {

class Unk_0201d2d0;
struct Unk_0201d2d0_Out {
    u32 unk_00;
    u8 unk_04;
};
struct Unk_0201d2d0_Data {
    u32 unk_00;
    u8 unk_04;
};
struct Unk_0201d2d0_Parent {
    u8 pad_00[0x82c];
    void *unk_82c;
};
struct Unk_0201d2d0_Id {
    u16 unk_00;
    u16 pad_02;
    u32 unk_04;
    u32 unk_08;
};
struct Unk_0201d2d0_Menu {
    u8 pad_00[8];
    u32 unk_08;
};
typedef void (Unk_0201d2d0::*Unk_0201d2d0_Fn)();
typedef void (Unk_0201d2d0::*Unk_0201d2d0_OutFn)(Unk_0201d2d0_Out *);
void *_ZN12Unk_0208086013func_020805c4Ev(void *);
u32 func_02003098(void *);
void func_0202d184(void *, void *, void *, s32, u32, u32, u32, u32, u32);
void _ZN12Unk_020d893813func_0202d1d4EP16Unk_020d8938_Tbl(void *, void *);
void _ZN12Unk_020660f813func_02067a84EPhPv(void *, u8 *, u32);
void *_ZN12Unk_020d893813func_0202d114Ev(void *);
s32 _ZN12Unk_0209ada413func_0209ac64Ev(void *);
void _ZN17Unk_0202ce90_Base13func_0202ce90Ev(void *);
void *func_0206ed38();
s32 func_0206ed18();
void func_0209909c(u16 *, s32, void *);
void _ZN12Unk_0201442013func_02014b78Ev(void *);
void _ZN12Unk_0201442013func_02014a4cEv(void *);
u16 *_ZN12Unk_0207fb8013func_0207fd9cEv(void *);
void _ZN12Unk_020d771413func_0201578cEjjj(void *, void *, s32, s32);
u32 func_0209a938(void *);
u32 func_02025a50(void *);
void func_0209a8b4(void *, u8);
void func_020776c0(void *, u8);
u8 *func_0207f968(void *);
s32 func_0204b2d4(void *);
s32 func_0204b25c(void *);
s32 func_0204b820(void *);
s32 func_0207f8ec(void *, void *);
s32 func_0207e7a8(void *, void *);
s32 func_02053228(void *);
void *_ZN12Unk_02097d1c13func_02097f6cEi(void *, void *);
void *_ZN12Unk_0209865c13func_02098750Ev(void *);
void *func_0209750c();
void _ZN12Unk_0201442013func_02014ce4EPtjjj(void *, void *, s32, s32, s32);
void _ZN12Unk_020d771013func_0201517cEjjj(void *, void (*)(), s32, s32);
void _ZN12Unk_020d771013func_020151a8Ejjj(void *, void *, s32, s32);
void _ZN12Unk_020d771013func_020151d0Ei(void *, s32);
void func_020295b4();
void func_020295f8();
void func_0202963c();
void *func_020290ac(void *);
void *func_020291b4(void *);
void *_ZN12Unk_0209ada413func_0209ab94Ev(void *);
void _ZN12Unk_020d771013func_02014e60EPtjjj(void *, void *, s32, s32, s32);
void _ZN12Unk_020238b013func_02023da4Ev(void *);
void func_0207cfb8(void *, void *);
void _ZN12Unk_0208091c13func_02080b78EPt(u32, void *);
void func_020777b8(void *, u32, void *);
void func_020776b4(void *, u32);
u32 func_0209a6c0(void *, u32);
void _ZN12Unk_0209ada413func_0209abb4Eh(void *, s32);
void func_020776f0(void *, s32);
void *func_0207e310(void *);
s32 func_02078520(void *);
void _ZN12Unk_0201442013func_02014918Ev(void *);
extern Unk_0201d2d0_Data data_020c7820, data_020c76d0, data_020c76c0, data_020c78d8, data_020c78f0;
extern Unk_0201d2d0_Data data_020d7b08, data_020d7bf8;
extern u8 data_020c7a20[], data_020c7a2c[];
extern u8 data_020d85dc[], data_020d85e8[], data_020d85f4[], data_020d8204[];
extern Unk_0201d2d0_Fn data_020d7e88, data_020d7cd0, data_020d7b70, data_020d7a60, data_020d7d48, data_020d7a58, data_020d79c0, data_020d7ba8, data_020d7ac0;
class Unk_0201d2d0 {
public:
    void func_0202d33c(Unk_0201d2d0_Fn fn);
    void func_0202d328(Unk_0201d2d0_Fn fn);
    void func_020241f4(Unk_0201d2d0_Out *out);
    void func_02024254();
    void func_020242d8();
    void func_02024370(Unk_0201d2d0_Out *out);
    void func_02024418(Unk_0201d2d0_Out *out);
    void func_020244b0();
    void func_020244b8(Unk_0201d2d0_Out *out);
    void func_02024554();
    void func_0202475c();
    void func_02024800();
    void func_020248e4();
    void func_02024964(Unk_0201d2d0_Out *out);
    void func_020249ec();
    void func_02024a1c();
    void func_02024a90(Unk_0201d2d0_Out *out);

    u8 pad_00[0x3c];
    Unk_0201d2d0_Menu *unk_3c;
    u8 pad_40[0xac - 0x40];
    Unk_0201d2d0_OutFn unk_ac;
    u8 pad_b4[0xc4 - 0xb4];
    Unk_0201d2d0_Fn unk_c4;
    u8 pad_cc[0xfc - 0xcc];
    Unk_0201d2d0_Parent *unk_fc;
    u8 unk_100[0x11e - 0x100];
    u8 unk_11e;
    u8 pad_11f;
    Unk_0201d2d0_Id unk_120;
    u8 pad_12c[0x156 - 0x12c];
    u16 unk_156;
    u8 pad_158[0x160 - 0x158];
    void *unk_160;
    u8 pad_164[0x198 - 0x164];
    u16 unk_198;
};
static inline BOOL Unk_020242d8_R1(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) r = TRUE;
    return r;
}
static inline BOOL Unk_02024a90_Ne(Unk_0201d2d0_Id *p) {
    return p->unk_00 != 0xfff1;
}
}
}

// ---- unk_02024b68.cpp
namespace F15 {
extern "C" {

class Unk_0201d2d0;
struct Unk_0201d2d0_Out {
    u32 unk_00;
    u8 unk_04;
};
struct Unk_0201d2d0_Data {
    u32 unk_00;
    u8 unk_04;
};
struct Unk_0201d2d0_Parent {
    u8 pad_00[0x82c];
    void *unk_82c;
};
struct Unk_02025090_Pair {
    u32 unk_00;
    u32 unk_04;
};
typedef void (Unk_0201d2d0::*Unk_0201d2d0_Fn)();
typedef void (Unk_0201d2d0::*Unk_0201d2d0_OutFn)(Unk_0201d2d0_Out *);
void *_ZN12Unk_0208086013func_020805c4Ev(void *);
u32 func_02003098(void *);
void func_0202d184(void *, void *, void *, s32, u32, u32, u32, u32, u32);
void _ZN12Unk_020d893813func_0202d1d4EP16Unk_020d8938_Tbl(void *, void *);
void _ZN12Unk_020660f813func_02067a84EPhPv(void *, u8 *, u32);
void _ZN12Unk_020660f813func_02067abcEPhPv(void *, u8 *, u32);
void *_ZN12Unk_020d893813func_0202d114Ev(void *);
s32 _ZN12Unk_0209ada413func_0209ac64Ev(void *);
void _ZN12Unk_0201442013func_02014a4cEv(void *);
void _ZN12Unk_0201442013func_02014918Ev(void *);
void *func_0209aaa0(void *);
void func_020776e4(void *);
s32 func_0206ed18();
s32 func_0206ed38();
void *func_0209750c();
void *_ZN12Unk_0209865c13func_02098750Ev(void *);
u16 *_ZN12Unk_02097d1c13func_02097f6cEi(void *, s32);
void func_0209909c(u16 *, s32, s32);
void _ZN12Unk_0201442013func_02014ce4EPtjjj(void *, void *, s32, s32, s32);
u16 *func_0209a8e8(void *);
void _ZN12Unk_020d771013func_020151a8Ejjj(void *, s32, s32, s32);
void _ZN12Unk_020d771013func_020151d0Ei(void *, s32);
void *_ZN12Unk_0209ada413func_0209ab94Ev(void *);
s32 func_020291b4(void *);
void _ZN12Unk_020238b013func_02023da4Ev(void *);
void func_0207cfb8(void *, void *);
void _ZN12Unk_0208091c13func_02080b78EPt(u32, void *);
void func_020777b8(void *, u32, void *);
void func_0209d498(void *);
s32 func_0204be70(void *);
void _ZN12Unk_020d771413func_0201578cEjjj(void *, void *, s32, s32);
s32 func_0209a938(void *);
void _ZN12Unk_020d771013func_0201517cEjjj(void *, void *, s32, s32);
void func_02029918();
void func_020298c8();
extern Unk_0201d2d0_Data data_020c7690, data_020c7680, data_020c7908, data_020c7890;
extern Unk_0201d2d0_Data data_020c78a0, data_020c7698, data_020c7660, data_020c7838;
extern Unk_0201d2d0_Data data_020c7928, data_020c76a8, data_020c76a0, data_020c78b8;
extern Unk_0201d2d0_Data data_020d7e38;
extern u32 data_020d8914[];
extern Unk_0201d2d0_Fn data_020d7d78, data_020d7d10, data_020d7a90, data_020d7b20;
extern Unk_0201d2d0_Fn data_020d7a88, data_020d7e40, data_020d7a70, data_020d7e28, data_020d7e30;
static inline BOOL Unk_02024df4_Range(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) {
        r = TRUE;
    }
    return r;
}
static inline BOOL Unk_02025090_Ne(u16 *p) {
    return *p != 0xfff1;
}
class Unk_0201d2d0 {
public:
    void func_0202d1c0(Unk_0201d2d0_Fn fn);
    s32 func_0202d328(Unk_0201d2d0_Fn fn);
    void func_0202d33c(Unk_0201d2d0_Fn fn);

    void func_02024b68();
    void func_02024bbc();
    void func_02024bd8(Unk_0201d2d0_Out *out);
    void func_02024c4c(Unk_0201d2d0_Out *out);
    void func_02024cd8();
    void func_02024d38();
    void func_02024df4();
    void func_02024f54(Unk_0201d2d0_Out *out);
    void func_02024fdc();
    void func_02025008(Unk_0201d2d0_Out *out);
    void func_02025090(Unk_0201d2d0_Out *out);
    void func_0202516c();
    void func_020251c0();
    void func_020251fc(Unk_0201d2d0_Out *out);
    void func_02025270();
    void func_0202536c();
    void func_02025410();
    void func_02025460(Unk_0201d2d0_Out *out);

    u8 pad_00[0x3c];
    u32 *unk_3c;
    u8 pad_40[0xac - 0x40];
    Unk_0201d2d0_OutFn unk_ac;
    u8 pad_b4[0xc4 - 0xb4];
    Unk_0201d2d0_Fn unk_c4;
    u8 pad_cc[0xfc - 0xcc];
    Unk_0201d2d0_Parent *unk_fc;
    u8 unk_100[0x11e - 0x100];
    u8 unk_11e;
    u8 pad_11f;
    u16 unk_120;
    u8 pad_122[2];
    u32 unk_124;
    u32 unk_128;
    u8 pad_12c[0x156 - 0x12c];
    u16 unk_156;
    u8 pad_158[0x160 - 0x158];
    void *unk_160;
};
}
}

// ---- unk_020254ec.cpp
namespace F16 {
extern "C" {

class Unk_020254ec;
struct Unk_020254ec_Out {
    u32 unk_00;
    u8 unk_04;
};
struct Unk_020254ec_Data {
    u32 unk_00;
    u8 unk_04;
};
struct Unk_020254ec_Parent {
    u8 pad_00[0x82c];
    void *unk_82c;
};
struct Unk_02025540_Tbl {
    s32 pad[0x19];
    s32 unk_64;
};
struct Unk_020257f0_S {
    u8 pad_00[0x20];
    u8 unk_20;
    s8 unk_21;
};
struct Unk_0202585c_Pair {
    u32 a, b;
};
typedef void (Unk_020254ec::*Unk_020254ec_Fn)();
void *_ZN12Unk_0208086013func_020805c4Ev(void *);
u32 func_02003098(void *);
void func_0202d184(void *, void *, void *, s32, u32, u32, u32, u32, u32);
void _ZN12Unk_020d893813func_0202d1d4EP16Unk_020d8938_Tbl(void *, void *);
void _ZN12Unk_020660f813func_02067abcEPhPv(void *, u8 *, u32);
void *_ZN12Unk_020d893813func_0202d114Ev(void *);
s32 func_0209a938(void *);
void *func_0209a940(void *);
s32 _ZN12Unk_0209ada413func_0209ad68Ev(void *);
s32 _ZN12Unk_0209ada413func_0209ac64Ev(void *);
void _ZN12Unk_0209ada413func_0209ace8EPi(void *, s32 *);
s32 func_0209a8f4(s32);
void func_0209a9f0(void *, s32, void *, s32, s32);
void func_020775a0(void *, s32, void *, s32, s32);
void func_0207e310(void *);
void func_02078578();
s32 _ZN12Unk_0209ada413func_0209ad80Ev();
void *func_0209750c();
s32 _ZN12Unk_0209865c13func_0209888cEv(void *);
void func_0201c95c(void *, void *);
void func_0201c938(void *, void *, s32, s32, s32, void *);
void _ZN12Unk_020d893813func_0201c870EPv(void *, void *);
void _ZN12Unk_020660f813func_020679c0Ei(void *, s32);
void func_0209d498(void *);
s32 func_0209a8e0(void *);
s32 func_02052c54(u16 *);
s32 func_0209a874();
void _ZN12Unk_020d771413func_0201577cEjjj(void *, s32, void *, void *, void *);
void _ZN12Unk_020d771413func_0201578cEjjj(void *, void *, s32, s32);
void *func_0207e268(void *);
s32 func_0209a60c(void *);
s32 _ZN12Unk_0207e94013func_0207efa0Ev(void *);
s32 func_0209a7d0(s32, s32);
void func_0209a8c8(void *, s32);
void func_020776cc(void *, s32);
void func_0209a774(u16 *, s32, s32);
s32 func_02062ad4(u16 *, u32, u32, u32, u32, u32, u32, u32, u32, u32);
s32 func_02063b8c(s32);
s32 func_0207bcfc(s32, s32, s32);
s32 func_0207f968(void *);
u16 *_ZN12Unk_0207fb8013func_0207fd9cEv(void *);
s32 func_0202c33c(u16 *, s32, s32, s32, s32);
void func_020259b4(u16 *out, Unk_020254ec *self, u32 idx);
void func_02025bb0(u16 *out, Unk_020254ec *self, u32 idx);
void func_02025a50(u16 *p);
s32 func_02025a68(u16 *p, s32 v);
void func_02025d24(u16 *out, u32 mask, s32 cnt, void *x, u8 a, u32 b);
extern Unk_020254ec_Data data_020d7e48;
extern Unk_020254ec_Data data_020c7918;
extern Unk_020254ec_Data data_020c7920;
extern u32 *data_020d8850[];
extern Unk_02025540_Tbl *data_020cbb18;
extern Unk_020254ec_Fn data_020d7eb0;
extern Unk_020254ec_Fn data_020d7ec0;
extern Unk_020254ec_Fn data_020d7ec8;
extern void (*data_020c7af4[])(u16 *, s32, void *);
extern void (*data_020c7b4c[])(u16 *, s32, u16 *);
extern void (*data_020c7ae0[])(u16 *, Unk_0202585c_Pair *);
class Unk_020254ec {
public:
    void func_020254ec();
    void func_02025540(Unk_020254ec_Out *out);
    void func_020255fc();
    void func_02025680(Unk_020254ec_Out *out);
    void func_020256ec();
    void func_02025780(Unk_020254ec_Out *out);
    void func_020257e8();
    void func_020257f0();
    void func_0202585c();
    void func_0202d1c0(Unk_020254ec_Fn fn);
    void func_0202d294(Unk_020254ec_Fn fn);

    u8 pad_00[0x3c];
    void *unk_3c;
    u8 pad_40[0xac - 0x40];
    void (Unk_020254ec::*unk_ac)(Unk_020254ec_Out *);
    u8 pad_b4[0xfc - 0xb4];
    Unk_020254ec_Parent *unk_fc;
    u8 unk_100[0x11e - 0x100];
    u8 unk_11e;
    u8 pad_11f;
    u16 unk_120;
    u8 pad_122[0x156 - 0x122];
    u16 unk_156;
    u8 pad_158[0x160 - 0x158];
    void *unk_160;
};
static inline BOOL R1(u16 *p) {
    BOOL r = FALSE;
    if (*p >= 0x450c && *p <= 0x45db) r = TRUE;
    return r;
}
void func_020259b4(u16 *out, Unk_020254ec *self, u32 idx);
void func_020259f8(u16 *out, void *a, void *b);
void func_02025a50(u16 *p);
s32 func_02025a68(u16 *p, s32 v);
static inline BOOL R2(volatile u16 *p) {
    BOOL r = FALSE;
    u16 a = *p;
    u16 b = *p;
    if (b >= 0x450c && a <= 0x45db) r = TRUE;
    return r;
}
void func_02025afc(u16 *out);
void func_02025bb0(u16 *out, Unk_020254ec *self, u32 idx);
void func_02025c04(u16 *out, u8 *p, u32 arg);
void func_02025c80(u16 *out, u8 *p, u32 arg);
void func_02025cb0(u16 *out, u8 *p, u32 arg);
void func_02025d24(u16 *out, u32 mask, s32 cnt, void *x, u8 a, u32 b);
void func_02025d80(u16 *out, void *unused, u32 idx);
void func_02025dbc(u16 *out, u8 *p);
}
}

// ---- unk_02025df8.cpp
namespace F17 {
extern "C" {

class Unk_0201d2d0;
struct Unk_0201d2d0_Out {
    u32 unk_00;
    u8 unk_04;
};
struct Unk_0201d2d0_Data {
    u32 unk_00;
    u8 unk_04;
};
struct Unk_0201d2d0_Vec {
    s32 x, y, z;
};
struct Unk_0201d2d0_Parent {
    u8 pad_00[0x5c];
    Unk_0201d2d0_Vec unk_5c;
    u8 pad_68[0x564 - 0x68];
    u8 unk_564[4];
    u8 pad_568[0x82c - 0x568];
    void *unk_82c;
};
struct Unk_0201d9e0_Rec {
    u16 unk_00;
    u8 unk_02[8];
    u8 pad_0a;
    u8 unk_0b;
};
struct Unk_0201d568_S {
    u8 pad_00[0x20];
    u8 unk_20;
    s8 unk_21;
};
typedef void (Unk_0201d2d0::*Unk_0201d2d0_Fn)();
typedef void (Unk_0201d2d0::*Unk_0201d2d0_OutFn)(Unk_0201d2d0_Out *);
void *_ZN12Unk_0208086013func_020805c4Ev(void *);
u32 func_02003098(void *);
void func_0202d184(void *, void *, void *, s32, u32, u32, u32, u32, u32);
s32 func_0202d048(void *, void *, void *, void *, s32);
void func_0201c95c(void *, void *);
void func_0201c938(void *, void *, s32, s32, s32, void *);
void _ZN12Unk_020d893813func_0201c870EPv(void *, void *);
void _ZN12Unk_020660f813func_020679c0Ei(void *, s32);
void _ZN12Unk_020d771013func_02014e60EPtjjj(void *, u16 *, s32, s32, s32);
void _ZN12Unk_020d893813func_0202d1d4EP16Unk_020d8938_Tbl(void *, void *);
void _ZN12Unk_020660f813func_02067a84EPhPv(void *, u8 *, u32);
void _ZN12Unk_020d771413func_020157b8Ejj(void *, void *, s32);
void *func_0207bf60(void *, s32);
void *func_0209750c();
void *_ZN12Unk_0209865c13func_0209888cEv(void *);
s32 _ZN12Unk_020940a013func_02094218Ev(void *);
s32 _ZN12Unk_02002fc813func_020030b4Ev(void *);
s32 func_0207f854(void *, void *);
s32 _ZN12Unk_0208091c13func_02080dd8Ev();
s32 func_02128930(void *, void *, s32);
void func_02034d84(u32);
void func_02034dd0(s32, s32, s32);
void func_02034d70(u32);
void func_02034e10(s32, s32, s32, s32);
void func_02099014(u16 *, s32);
void *func_0209cf0c();
void _ZN12Unk_02097ff413func_020982dcEj(void *, u32);
s32 _ZN12Unk_0201985813func_020197a8Ev(void *);
s32 _ZN12Unk_0201985813func_02019790Ev(void *);
void func_0203a680(void *);
void _ZN12Unk_020d771013func_02014f74Ev(void *);
extern Unk_0201d2d0_Data data_020c7798;
extern Unk_0201d2d0_Data data_020c7938;
extern Unk_0201d2d0_Data data_020c75c8;
extern Unk_0201d2d0_Data data_020c78e8;
extern Unk_0201d2d0_Fn data_020d7958;
extern Unk_0201d2d0_Fn data_020d7c68;
extern Unk_0201d2d0_Fn data_020d7990;
extern Unk_0201d2d0_Fn data_020d7d18;
extern Unk_0201d2d0_Fn data_020d7d20;
extern Unk_0201d2d0_Fn data_020d7c88;
extern Unk_0201d2d0_Fn data_020d7d70;
extern Unk_0201d2d0_Fn __ptmf_null;
extern u8 data_021beb08[];
extern u8 data_021dfd8c[];
class Unk_0201d2d0 {
public:
    void func_0202d1c0(Unk_0201d2d0_Fn fn);
    void func_0202d33c(Unk_0201d2d0_Fn fn);
    void func_02026000(Unk_0201d2d0_Out *out);
    void func_02026128(Unk_0201d2d0_Out *out);
    void func_020261c0();
    void func_02026214();
    void func_020262ac(Unk_0201d2d0_Out *out);
    void func_0202635c();
    void func_020263b0(Unk_0201d2d0_Out *out);
    void func_02026410();
    void func_02026490(Unk_0201d2d0_Out *out);
    void func_02026560(Unk_0201d2d0_Out *out);
    void func_02026668(Unk_0201d2d0_Out *out);

    u8 pad_00[0x3c];
    void *unk_3c;
    u8 pad_40[0xac - 0x40];
    Unk_0201d2d0_OutFn unk_ac;
    u8 pad_b4[0xc4 - 0xb4];
    Unk_0201d2d0_Fn unk_c4;
    u8 pad_cc[0xec - 0xcc];
    Unk_0201d2d0_Fn unk_ec;
    Unk_0201d2d0_Fn unk_f4;
    Unk_0201d2d0_Parent *unk_fc;
    u8 unk_100[0x11e - 0x100];
    u8 unk_11e;
    u8 pad_11f;
    u16 unk_120;
    u8 pad_122[0x156 - 0x122];
    u16 unk_156;
    u8 pad_158[0x15c - 0x158];
    void *unk_15c;
    void *unk_160;
    u8 pad_164[0x19c - 0x164];
    void *unk_19c;
};
struct Unk_02025df8_Data {
    u8 pad_00[3];
    u8 unk_03;
    u8 unk_04;
};
struct Unk_02025ed4_Arg {
    u32 unk_00;
    u32 unk_04;
};
typedef void (*Unk_02025ed4_Fn)(u16 *, Unk_02025ed4_Arg *);
s32 func_0202c33c(u16 *, s32, s32, u32, u32);
s32 func_0202c8f0(u16 *, s32, s32, u32);
void func_0209d498(void *);
u32 _ZN12Unk_020d893813func_0202d114Ev(void *);
s32 _ZN12Unk_0209ada413func_0209ac64Ev(u32);
u32 func_0209a940(void *);
s32 _ZN12Unk_0209ada413func_0209ad68Ev(u32);
u32 func_0209a938(void *);
void _ZN12Unk_0209ada413func_0209ace8EPi(u32, s32 *);
s32 func_0209a8f4(s32);
u32 func_0207cdb0(void *);
u32 func_0207f91c(void *, u32);
u32 func_02081364(u32);
void _ZN12Unk_020d771413func_0201577cEjjj(void *, s32, u8 *, void *, u8 *);
void _ZN12Unk_020660f813func_02067abcEPhPv(void *, u8 *, u32);
void *func_0209750c();
u32 _ZN12Unk_0209865c13func_02098750Ev(void *);
s32 _ZN12Unk_02097d1c13func_02097edcEv(u32);
void func_02097a48(u32, void *, s32);
void _ZN12Unk_02097d1c13func_02097f30EPtij(u32, u16 *, s32, s32);
u32 _ZN12Unk_0209865c13func_020986c8Ev(void *);
void func_0203c42c(u32, u16 *, s32, s32);
void _ZN12Unk_020d771413func_020158e0Eijihii(void *, void *, s32, s32, s32, s32, s32);
void _ZN12Unk_020d771413func_0201578cEjjj(void *, u16 *, s32, s32);
u8 *func_0209a420(void *);
void func_0202cd44(u16 *, s32);
s32 func_0205b4f8();
void *func_0202ac7c(void *);
void func_02026968(u16 *, void *);
void func_0207ceb4(u16 *, void *);
void func_0207cf10(void *, u16 *);
void func_0209a588(void *);
extern Unk_02025ed4_Fn data_020c7acc[];
extern Unk_0201d2d0_Data data_020d7b40;
extern u32 *data_020d8800[];
extern Unk_0201d2d0_Data data_020c7958;
extern Unk_0201d2d0_Data data_020c7948;
extern Unk_0201d2d0_Data data_020c7960;
extern Unk_0201d2d0_Data data_020c7968;
extern Unk_0201d2d0_Data data_020c7970;
extern Unk_0201d2d0_Data data_020c7978;
extern Unk_0201d2d0_Data data_020c7720;
extern u8 data_021bf514[];
void func_02025df8(u16 *p, Unk_02025df8_Data *d);
void func_02025e48(u16 *p, Unk_02025df8_Data *d);
void func_02025e98(u16 *p, Unk_02025df8_Data *d);
void func_02025ed4(u16 *p, void *unused, u32 idx);
void func_02025f10(u16 *p, Unk_02025df8_Data *d);
void func_02025f44(u16 *p, Unk_02025df8_Data *d);
void func_02025f88(u16 *p, Unk_02025df8_Data *d);
void func_02025fcc(u16 *p, Unk_02025df8_Data *d);
static inline BOOL Unk_02026214_R1(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) {
        r = TRUE;
    }
    return r;
}
}
}

// ---- unk_020267b8.cpp
namespace F18 {
extern "C" {

class Unk_0201d2d0;
struct Unk_0201d2d0_Out {
    u32 unk_00;
    u8 unk_04;
};
struct Unk_0201d2d0_Data {
    u32 unk_00;
    u8 unk_04;
};
struct Unk_0201d2d0_Parent {
    u8 pad_00[0x82c];
    void *unk_82c;
};
struct Unk_0201d568_S {
    u32 pad_00[8];
    volatile u8 unk_20;
    s8 unk_21;
};
struct Unk_020267b8_Tbl {
    u32 v[3];
};
struct Unk_02026b38_Msg {
    u32 unk_00;
    u32 unk_04;
    s32 unk_08;
};
typedef void (Unk_0201d2d0::*Unk_0201d2d0_Fn)();
typedef void (Unk_0201d2d0::*Unk_0201d2d0_OutFn)(Unk_0201d2d0_Out *);
void *_ZN12Unk_0208086013func_020805c4Ev(void *);
u32 func_02003098(void *);
void func_0202d184(void *, void *, void *, s32, u32, u32, u32, u32, u32);
void func_0201c95c(void *, void *);
void func_0201c938(void *, void *, s32, s32, s32, void *);
void _ZN12Unk_020d893813func_0201c870EPv(void *, void *);
void _ZN12Unk_020660f813func_020679c0Ei(void *, s32);
void _ZN12Unk_020d893813func_0202d1d4EP16Unk_020d8938_Tbl(void *, void *);
void _ZN12Unk_020660f813func_02067a84EPhPv(void *, u8 *, u32);
s32 _ZN12Unk_020660f813func_02067abcEPhPv(void *, u8 *, u32);
void *func_0209750c();
void *_ZN12Unk_020d893813func_0202d114Ev();
s32 _ZN12Unk_0209ada413func_0209ac64Ev(void *);
void _ZN12Unk_0209ada413func_0209abb4Eh(void *, s32);
void *func_0209a4f0(u32);
void *func_0209a4e4(u32, s32);
void *_ZN12Unk_0209865c13func_02098750Ev(void *);
void *func_0202ceb0(void *);
void func_02065c94(void *);
void _ZN12Unk_020d771013func_02015144Ejj(void *, void *, s32);
void _ZN12Unk_020d771013func_020151d0Ei(void *, s32);
s32 func_02063b8c(s32);
void func_0207ceb4(u16 *, void *);
void func_0207cf10(void *, u16 *);
void func_0207cfb8(void *, void *);
s32 func_0205b4f8();
u32 func_0202ac7c(u32);
void func_0202cd44(u16 *, void *);
u16 func_0204b718(u32, s32, s32);
void func_0207ab90(void *, void *, void *, s32);
u16 *_ZN12Unk_0207fb8013func_0207fd9cEv(void *);
s32 _ZN12Unk_0208091c13func_02080dd8Ev();
s32 _ZN12Unk_0201d2d013func_02026410Ev(void *, void *);
void func_02026968(u16 *out, u32 arg);
extern Unk_020267b8_Tbl data_020d8690;
extern u8 data_021bf2a4[];
extern u8 data_021dfd8c[];
extern Unk_0201d2d0_Data data_020c7998;
extern Unk_0201d2d0_Data data_020c7988;
extern Unk_0201d2d0_Data data_020c79b0;
extern Unk_0201d2d0_Data data_020c79a0;
extern Unk_0201d2d0_Data data_020c79c0;
extern Unk_0201d2d0_Data data_020c79b8;
extern Unk_0201d2d0_Data data_020c79c8;
extern Unk_0201d2d0_Data data_020c79d0;
extern Unk_0201d2d0_Data data_020c79e0;
extern Unk_0201d2d0_Data data_020c79f0;
extern Unk_0201d2d0_Data data_020c79f8;
extern Unk_0201d2d0_Data data_020c7760;
extern Unk_0201d2d0_Fn data_020d7fa0;
extern Unk_0201d2d0_Fn data_020d7fc8;
extern Unk_0201d2d0_Fn data_020d7bc0;
extern Unk_0201d2d0_Fn data_020d7fe0;
extern Unk_0201d2d0_Fn data_020d7fe8;
extern Unk_0201d2d0_Fn data_020d7ff0;
extern Unk_0201d2d0_Fn data_020d7bd8;
extern Unk_0201d2d0_Fn data_020d8008;
static inline BOOL Unk_02026ab0_R1(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) {
        r = TRUE;
    }
    return r;
}
class Unk_0201d2d0 {
public:
    void func_020267b8(s32 unused, s32 idx);
    void func_02026834(void *p);
    void func_02026998(Unk_0201d2d0_Out *out);
    void func_02026a24(Unk_0201d2d0_Out *out);
    void func_02026ab0(Unk_0201d2d0_Out *out);
    void func_02026b98();
    void func_02026bd0();
    void func_02026bec(Unk_0201d2d0_Out *out);
    void func_02026c4c();
    void func_02026ccc();
    void func_02026d2c(Unk_0201d2d0_Out *out);
    void func_02026d8c();
    void func_02026df0(Unk_0201d2d0_Out *out);
    void func_02026e64();
    void func_02026ebc(Unk_0201d2d0_Out *out);
    void func_02026f1c();
    void func_02026f58(Unk_0201d2d0_Out *out);
    void func_02026fe0();
    void func_0202708c(Unk_0201d2d0_Out *out);

    void func_0202d1c0(Unk_0201d2d0_Fn fn);
    void func_0202d328(Unk_0201d2d0_Fn fn);
    void func_0202d33c(Unk_0201d2d0_Fn fn);
    void func_02014a4c();
    void func_02014b78();

    u8 pad_00[0x3c];
    Unk_02026b38_Msg *unk_3c;
    u8 pad_40[0xac - 0x40];
    Unk_0201d2d0_OutFn unk_ac;
    u8 pad_b4[0xc4 - 0xb4];
    Unk_0201d2d0_Fn unk_c4;
    u8 pad_cc[0xfc - 0xcc];
    Unk_0201d2d0_Parent *unk_fc;
    u8 unk_100[0x11e - 0x100];
    u8 unk_11e;
    u8 pad_11f;
    u16 unk_120;
    u8 pad_122[0x128 - 0x122];
    u32 unk_128;
    u8 pad_12c[0x15c - 0x12c];
    u32 unk_15c;
    u8 pad_160[0x19c - 0x160];
    u32 unk_19c;
};
void func_02026968(u16 *out, u32 arg);
}
}

// ---- unk_020270ec.cpp
namespace F19 {
extern "C" {

class Unk_0201d2d0;
struct Unk_0201d2d0_Out {
    u32 unk_00;
    u8 unk_04;
};
struct Unk_0201d2d0_Data {
    u32 unk_00;
    u8 unk_04;
};
struct Unk_0201d2d0_Parent {
    u8 pad_00[0x82c];
    void *unk_82c;
};
struct Unk_0201d2d0_Msg {
    u8 pad_00[8];
    s32 unk_08;
};
struct Unk_02027324_S {
    u8 unk_00;
    u16 unk_02;
};
typedef void (Unk_0201d2d0::*Unk_0201d2d0_Fn)();
typedef void (Unk_0201d2d0::*Unk_0201d2d0_OutFn)(Unk_0201d2d0_Out *);
void *_ZN12Unk_0208086013func_020805c4Ev(void *);
u32 func_02003098(void *);
void func_0202d184(void *, void *, void *, s32, u32, u32, u32, u32, u32);
void _ZN12Unk_020d893813func_0202d1d4EP16Unk_020d8938_Tbl(void *, void *);
s32 _ZN12Unk_020660f813func_02067a84EPhPv(void *, u8 *, u32);
s32 _ZN12Unk_020660f813func_02067abcEPhPv(void *, u8 *, u32);
void *func_0209750c();
void *_ZN12Unk_0209865c13func_02098750Ev(void *);
void *func_0207f968(void *);
u8 func_0204b820(void *);
void func_0209a424(void *, s32);
void *func_0209a4e4(void *, s32);
void func_0209a588(void *);
void *_ZN12Unk_020d893813func_0202d114Ev(void *);
s32 _ZN12Unk_0209ada413func_0209ac64Ev(void *);
void *_ZN12Unk_0209ada413func_0209ab94Ev(void *);
void _ZN12Unk_0201442013func_020147e4Ev(void *);
void *func_0202ceb0(void *);
s32 _ZN12Unk_0206555413func_02065578Ev(void *);
void func_02065c94(void *);
void func_0207ab90(void *, void *, void *, s32);
void _ZN12Unk_0201442013func_02014ce4EPtjjj(void *, u16 *, s32, s32, s32);
s32 func_0206ed18();
s32 func_0206ed38();
u16 *_ZN12Unk_02097d1c13func_02097f6cEi(void *, s32);
void _ZN12Unk_02097d1c13func_02097f30EPtij(void *, u16 *, s32, s32);
void _ZN12Unk_020d771013func_0201517cEjjj(void *, void *, s32, s32);
void _ZN12Unk_020d771013func_02015170Ejj(void *, s32, s32);
void _ZN12Unk_020d771013func_020151d0Ei(void *, s32);
void _ZN12Unk_020d771413func_020157b8Ejj(void *, void *, s32);
void _ZN12Unk_020d771413func_0201578cEjjj(void *, u16 *, s32, s32);
s32 func_0202cee4(void *, void *);
extern Unk_0201d2d0_Data data_020c7a18;
extern Unk_0201d2d0_Data data_020c7a10;
extern Unk_0201d2d0_Data data_020c7550;
extern Unk_0201d2d0_Data data_020c7548;
extern Unk_0201d2d0_Data data_020c7568;
extern Unk_0201d2d0_Data data_020c7610;
extern Unk_0201d2d0_Data data_020c7560;
extern Unk_0201d2d0_Data data_020c7558;
extern Unk_0201d2d0_Data data_020c7a08;
extern Unk_0201d2d0_Data data_020c7580;
extern Unk_0201d2d0_Fn data_020d8018;
extern Unk_0201d2d0_Fn data_020d7988;
extern Unk_0201d2d0_Fn data_020d7908;
extern Unk_0201d2d0_Fn data_020d7948;
extern Unk_0201d2d0_Fn data_020d7940;
extern Unk_0201d2d0_Fn data_020d7930;
extern Unk_0201d2d0_Fn data_020d7c10;
extern Unk_0201d2d0_Fn data_020d7a50;
extern u8 data_021dfd8c[];
BOOL func_02027500(u16 *p, s32 v);
static inline BOOL Unk_020270ec_R(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) r = TRUE;
    return r;
}
class Unk_0201d2d0 {
public:
    void func_020270ec();
    void func_020271c8();
    void func_020272a4(Unk_0201d2d0_Out *out);
    void func_02027324();
    void func_02027424();
    void func_02027430(Unk_0201d2d0_Out *out);
    void func_02027490();
    void func_02027530(Unk_0201d2d0_Out *out);
    void func_02027590();
    void func_0202760c(Unk_0201d2d0_Out *out);
    void func_020276e8();
    void func_02027730(Unk_0201d2d0_Out *out);
    void func_020277b0();
    void func_020277fc(Unk_0201d2d0_Out *out);
    void func_0202787c();
    void func_020279a0();

    void func_0202d1c0(Unk_0201d2d0_Fn fn);
    void func_0202d328(Unk_0201d2d0_Fn fn);
    void func_0202d33c(Unk_0201d2d0_Fn fn);

    u8 pad_00[0x3c];
    Unk_0201d2d0_Msg *unk_3c;
    u8 pad_40[0xac - 0x40];
    Unk_0201d2d0_OutFn unk_ac;
    u8 pad_b4[0xc4 - 0xb4];
    Unk_0201d2d0_Fn unk_c4;
    u8 pad_cc[0xfc - 0xcc];
    Unk_0201d2d0_Parent *unk_fc;
    u8 unk_100[0x11e - 0x100];
    u8 unk_11e;
    u8 pad_11f;
    u16 unk_120;
    u8 pad_122[0x15c - 0x122];
    void *unk_15c;
};
BOOL func_02027500(u16 *p, s32 v);
}
}

// ---- unk_02027a34.cpp
namespace F20 {
extern "C" {

class Unk_02027a34;
struct Unk_02027a34_Out {
    u32 unk_00;
    u8 unk_04;
};
struct Unk_02027a34_Data {
    u32 unk_00;
    u8 unk_04;
};
struct Unk_02027a34_Parent {
    u8 pad_00[0x82c];
    void *unk_82c;
};
struct Unk_02027a34_Menu {
    u8 pad_00[0x20];
    u8 unk_20;
    s8 unk_21;
};
typedef void (Unk_02027a34::*Unk_02027a34_Fn)();
typedef void (Unk_02027a34::*Unk_02027a34_OutFn)(Unk_02027a34_Out *);
typedef BOOL (Unk_02027a34::*Unk_02027a34_TestFn)(void *, void *);
void *_ZN12Unk_0208086013func_020805c4Ev(void *);
u32 func_02003098(void *);
void func_0202d184(void *, void *, void *, s32, u32, u32, u32, u32, u32);
void *_ZN12Unk_020d893813func_0202d114Ev(void *);
void _ZN12Unk_020d893813func_0202d120Ej(void *, void *);
void _ZN12Unk_020d893813func_0202d1d4EP16Unk_020d8938_Tbl(void *, void *);
void _ZN12Unk_020d893813func_0202d20cEv(void *);
void func_0201c95c(void *, void *);
void func_0201c938(void *, void *, s32, s32, s32, void *);
void func_0201c91c(void *, void *, s32, void *, void *);
void _ZN12Unk_020d893813func_0201c870EPv(void *, void *);
void _ZN12Unk_020660f813func_020679c0Ei(void *, s32);
void _ZN12Unk_020660f813func_02067abcEPhPv(void *, u8 *, u32);
void _ZN12Unk_020d771013func_02014e60EPtjjj(void *, void *, s32, s32, s32);
void _ZN12Unk_020d771413func_020157b8Ejj(void *, void *, s32);
void _ZN12Unk_020d771413func_020157e8Ejj(void *, void *, s32);
void _ZN12Unk_020d771413func_0201578cEjjj(void *, void *, s32, s32);
void *func_0207bc44(void *, void *, s32);
void func_02133ef8(void *, u32);
s32 func_02063b8c(s32);
void *func_0209750c();
void *_ZN12Unk_0209865c13func_0209865cEv(void *);
void *_ZN12Unk_0209865c13func_02098750Ev(void *);
s32 _ZN12Unk_02097d1c13func_02097edcEv(void *);
void _ZN12Unk_02097d1c13func_02097f30EPtij(void *, void *, s32, s32);
s32 _ZN12Unk_0209ada413func_0209ac64Ev(void *);
void *_ZN12Unk_0209ada413func_0209abacEv(void *);
void *_ZN12Unk_0209ada413func_0209ab94Ev(void *);
void *func_0209ac44(void *);
void _ZN12Unk_0209ada413func_0209ab98Eh(void *, u32);
void func_0209d498(void *);
void func_0209d258(void *, u32);
void *func_0209a4e4(void *, s32);
void func_0209a4f4(void *, s32, void *, void *);
void _ZN12Unk_0209ada413func_0209ad80Ev(void *);
void func_0207a624(void *);
void *func_0209a4f0(void *);
s32 func_020991e4();
s32 func_020991fc();
void func_0209a2c0(void *, s32);
s32 func_0207a484(void *);
s32 func_0207e334(void *);
void *func_0207a4b8(void *);
void *_ZN12Unk_020994cc13func_0209978cEv(void *);
s32 _ZN12Unk_0209ada413func_0209ad68Ev(void *);
s32 _ZN12Unk_020994cc13func_02099624EP17Unk_020994cc_Date(void *, s32);
u16 *_ZN12Unk_020994cc13func_020994ccEv(void *);
s32 _ZN12Unk_020940a013func_02094218Ev(void *);
u16 *_ZN12Unk_0209865c13func_0209888cEv(void *);
s32 func_02128930(void *, void *, s32);
s32 _ZN12Unk_020940a013func_020941e8EPS_(void *, void *);
s32 _ZN12Unk_0209ada413func_0209abc4Ev(void *);
s32 _ZN12Unk_020994cc13func_020996b0EP16Unk_020994cc_Ent(void *, void *);
void *func_0207e310(void *);
void *func_02078578(void *);
s32 _ZN12Unk_02097ff413func_02098044Ej(void *, s32);
s32 _ZN12Unk_0209ada413func_0209ad28Ev(void *);
s32 _ZN12Unk_0209ada413func_0209acacEv(void *);
extern Unk_02027a34_Data data_020c75a8, data_020c7638, data_020c7800, data_020c7658, data_020c7678, data_020c77f8, data_020c77e0, data_020c77e8, data_020c77c8;
extern Unk_02027a34_Fn data_020d7aa0, data_020d7a48, data_020d7c28, data_020d7c90, data_020d79b8, data_020d7c60, data_020d8000, data_020d7ce8, data_020d7d00, data_020d7d08, data_020d7cd8;
extern u8 data_021dfd8c[];
extern u8 data_020d7868[];
extern u8 data_021be730[], data_020c74fc[], data_021be668[], data_020c7500[];
class Unk_02027a34 {
public:
    void func_02027a34(Unk_02027a34_Out *out);
    s32 func_02027b08();
    void func_02027b1c();
    void func_02027c24();
    void func_02027c6c(Unk_02027a34_Out *out);
    void func_02027cf8();
    void func_02027cfc(Unk_02027a34_Out *out);
    void func_02027d5c();
    void func_02027d78(Unk_02027a34_Out *out);
    void func_02027dec();
    void func_02027e9c(Unk_02027a34_Out *out);
    void func_02027f34();
    void func_02027f88();
    void func_02027fd8(Unk_02027a34_Out *out);
    void func_02028058(Unk_02027a34_Out *out, u32 idx);
    void func_020280c0();
    BOOL func_020281d8(void *p);
    BOOL func_0202830c(void *a, void *b);
    BOOL func_0202849c(void *a, void *b);
    BOOL func_020286fc(void *a, void *b);
    BOOL func_0202839c(void *a, void *b);
    void func_0202d1c0(Unk_02027a34_Fn fn);
    void func_0202d294(Unk_02027a34_Fn fn);
    void func_0202d33c(Unk_02027a34_Fn fn);

    u8 pad_00[0x3c];
    void *unk_3c;
    u8 pad_40[0xac - 0x40];
    Unk_02027a34_OutFn unk_ac;
    u8 pad_b4[0xc4 - 0xb4];
    Unk_02027a34_Fn unk_c4;
    u8 pad_cc[0xfc - 0xcc];
    Unk_02027a34_Parent *unk_fc;
    u8 unk_100[0x11e - 0x100];
    u8 unk_11e;
    u8 pad_11f;
    u16 unk_120;
    u8 pad_122[0x13c - 0x122];
    void *unk_13c[5];
    u8 pad_150[0x154 - 0x150];
    u8 unk_154;
    u8 unk_155;
    u16 unk_156;
    void *unk_158;
    void *unk_15c;
};
}
}

// ---- unk_0202839c.cpp
namespace F21 {
extern "C" {

class Unk_0201d2d0;
struct Unk_0201d2d0_Menu {
    u8 pad_00[0x20];
    u8 unk_20;
    s8 unk_21;
};
struct Unk_0201d2d0_Parent {
    u8 pad_00[0x82c];
    void *unk_82c;
};
struct Unk_0201d2d0_Key {
    u32 w0, w1;
};
struct Unk_020289f8_S {
    u8 pad_00;
    u8 unk_01;
    u8 unk_02;
    u8 unk_03;
};
typedef void (Unk_0201d2d0::*Unk_0201d2d0_Fn)();
void *func_0207e310(void *);
void *func_02078578(void *);
void func_0209d498(void *);
s32 _ZN12Unk_020cbb1813func_02072e88Ei(void *, s32);
s32 _ZN12Unk_0209ada413func_0209ad68Ev(void *);
s32 func_0207dff4(void *, void *);
s32 func_0207e1f0(void *);
s32 _ZN12Unk_020d893813func_0201c784Ev(void *);
s32 func_0207fa50(void *, s32, void *);
s32 func_02079f54(s32, void *);
void func_0201c95c(void *, void *);
void func_0201c91c(void *, void *, s32, void *, void *);
void func_0201c938(void *, void *, s32, s32, s32, void *);
void _ZN12Unk_020d893813func_0201c870EPv(void *, void *);
void _ZN12Unk_020d893813func_0202d120Ej(void *, void *);
void _ZN12Unk_020660f813func_020679c0Ei(void *, s32);
void *func_0207e268(void *);
void *func_0209a60c(void *);
void *func_0209a610(void *);
s32 _ZN12Unk_0209ada413func_0209ac64Ev(void *);
void func_0202d864(void *, void *);
void func_02025ed4(void *, void *, s32);
void func_02025d80(void *, void *, s32);
void *_ZN12Unk_0209ada413func_0209ac10Ev();
void *func_02099db4(void *, void *);
void *func_0209a4f0(void *);
s32 _ZN12Unk_0209b3bc13func_0209b354Ev(void *);
s32 func_0209a49c(s32, s32);
s32 func_02079ab0(void *, void *);
void func_02133ef8(void *, u32);
void *_ZN12Unk_0208086013func_020805c4Ev(void *);
s32 func_0207bc44(void *, void *, s32);
void *func_0209750c();
s32 _ZN12Unk_02097ff413func_02098044Ej(void *, s32);
u32 func_0207a914(void *, void *, void *);
s32 func_0209ad34();
s32 func_0209acb8(s32);
s32 func_02099ed4(void *, void *);
s32 _ZN12Unk_0209ada413func_0209abc4Ev(void *);
void _ZN12Unk_020d771413func_02015848Ejj(void *, u32, u32);
void _ZN12Unk_020d771413func_02015958Eijiii(void *, u32, s32, s32, s32, s32);
void _ZN12Unk_020d771413func_0201577cEjjj(void *, u32, void *, void *, void *);
void *_ZN12Unk_0209ada413func_0209ab94Ev(void *);
s32 func_0209a940(void *);
void *func_0209a92c(void *);
s32 func_0209a938(void *);
s32 _ZN12Unk_020940a013func_02094218Ev(void *);
void *_ZN12Unk_020d893813func_0202d114Ev(void *);
void *func_0207cdb0(void *);
void *func_0207f91c(void *, void *);
s32 func_02081364(void *);
s32 func_0202c654(void *, s32, s32, s32);
s32 func_0202c148(void *, s32, s32, s32, s32);
void func_02029948();
void func_020298f8();
extern void *data_020cbb18;
extern u8 data_020e416c;
extern u8 data_021dfd8c[];
extern u8 data_020c74fc[], data_021be668[], data_020c7500[];
extern u8 data_021be730[];
extern Unk_0201d2d0_Fn data_020d79f8, data_020d78f8, data_020d78f0, data_020d7938, data_020d7928, data_020d7980, data_020d7900;
static inline BOOL Unk_0202849c_R(volatile u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    u16 a = *p;
    u16 b = *p;
    if (b >= lo && a <= hi) r = TRUE;
    return r;
}
static inline BOOL Unk_02028a48_R1(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) r = TRUE;
    return r;
}
static inline BOOL Unk_0202849c_F(BOOL r4) {
    return data_020e416c == 0 ? TRUE : r4;
}
class Unk_0201d2d0 {
public:
    BOOL func_0202839c(void *a, void *b);
    BOOL func_0202849c(void *a);
    BOOL func_020286fc(void *a, void *b);
    s32 func_02028810();
    s32 func_02028848(void *a, void *b);
    BOOL func_020288d4(void *a, void *b, u32 c);
    void func_020289f8(Unk_020289f8_S *p);
    BOOL func_02028a48(void *a, void *b, u32 c);
    BOOL func_02029968(void *a, void *b, u32 c);
    BOOL func_02028e94();
    BOOL func_02029234();
    BOOL func_02029440();
    BOOL func_02029694(void *fn, s32 b, s32 c);
    void func_0202d1c0(Unk_0201d2d0_Fn fn);

    u8 pad_00[0x3c];
    void *unk_3c;
    u8 pad_40[0xfc - 0x40];
    Unk_0201d2d0_Parent *unk_fc;
    u8 pad_100[0x120 - 0x100];
    u16 unk_120;
    u8 pad_122[0x15c - 0x122];
    void *unk_15c;
    void *unk_160;
};
}
}

// ---- unk_02028e94.cpp
namespace F22 {
extern "C" {

class Unk_0201d2d0;
typedef void (Unk_0201d2d0::*Unk_0201d2d0_Fn)();
struct Unk_0201c870_Tbl {
    u8 range[5][2];
    u8 pad_0a[2];
    s32 val[5];
    u8 count;
    s8 unk_21;
};
void func_0201c95c(void *, void *);
void func_0201c938(void *, void *, s32, s32, s32, void *);
void func_0201c91c(void *, void *, s32, void *, void *);
void _ZN12Unk_020d893813func_0201c870EPv(void *, void *);
void _ZN12Unk_020660f813func_020679c0Ei(void *, s32);
void _ZN12Unk_020d771413func_0201577cEjjj(void *, s32, void *, void *, void *);
void _ZN12Unk_020d771413func_0201578cEjjj(void *, void *, s32, s32);
void *_ZN12Unk_020d893813func_0202d114Ev(void *);
s32 _ZN12Unk_0209ada413func_0209abc4Ev(void *);
void *_ZN12Unk_0209ada413func_0209ab94Ev(void *);
void *func_0209a92c(void *);
void *func_0209750c();
void *_ZN12Unk_0209865c13func_02098750Ev(void *);
u16 *_ZN12Unk_02097d1c13func_02097f6cEi(void *, s32);
s32 _ZN12Unk_02097d1c13func_02097eb0Ei(void *, s32);
s32 func_0209a89c(void *, u8);
void func_0209a774(u16 *, void *, u8);
s32 func_0204b2d4(u16 *p);
u32 func_0204b25c(u16 *p);
void *_ZN12Unk_0209865c13func_0209888cEv(void *);
s32 func_02128930(void *, void *, s32);
s32 _ZN12Unk_020940a013func_020941e8EPS_(void *, void *);
u32 func_0209a938(void *);
s32 func_02098f30(void *, BOOL (*)(u16 *));
s32 func_02098eb0(void *);
s32 func_0209a874(s32);
void *func_0209a8e0(void *);
void *func_0209a8e8(void *);
s32 func_02063b8c(s32);
u32 func_020290ac(void *);
BOOL func_020295d0(u16 *);
BOOL func_02029614(u16 *);
BOOL func_02029658(u16 *);
BOOL func_020295b4(u16 *, s32);
BOOL func_020295f8(u16 *, s32);
BOOL func_0202963c(u16 *, s32);
extern u8 data_021be730[], data_021be668[];
extern u8 data_020c74fc[], data_020c7500[];
extern Unk_0201d2d0_Fn data_020d7960, data_020d7950, data_020d79d8, data_020d7f78;
class Unk_0201d2d0 {
public:
    s32 func_02028e94();
    s32 func_02029234();
    s32 func_02029440();
    s32 func_02029694(BOOL (*f)(u16 *), s32 a, s32 b);
    void func_0202d1c0(Unk_0201d2d0_Fn fn);

    u8 pad_00[0x3c];
    void *unk_3c;
    u8 pad_40[0x160 - 0x40];
    void *unk_160;
};
static inline BOOL Unk_020295d0_Range(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) {
        r = TRUE;
    }
    return r;
}
BOOL func_020295d0(u16 *p);
BOOL func_020295b4(u16 *p, s32 x);
BOOL func_02029614(u16 *p);
BOOL func_020295f8(u16 *p, s32 x);
BOOL func_02029658(u16 *p);
BOOL func_0202963c(u16 *p, s32 x);
u32 func_020291b4(u16 *p);
u32 func_020290ac(void *h);
static inline BOOL Unk_02029234_Range(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) {
        r = TRUE;
    }
    return r;
}
}
}

// ---- unk_020298c8.cpp
namespace F23 {
extern "C" {

class Unk_0201d2d0;
struct Unk_0201d2d0_Out {
    u32 unk_00;
    u8 unk_04;
};
struct Unk_0201d2d0_Data {
    u32 unk_00;
    u8 unk_04;
};
struct Unk_0201d2d0_Parent {
    u8 pad_00[0x82c];
    void *unk_82c;
};
struct Unk_0201d568_S {
    u8 pad_00[0x20];
    u8 unk_20;
    s8 unk_21;
};
struct Unk_02029f58_T {
    u8 v[0x1c];
};
struct Unk_02029a88_Pair {
    u32 unk_00;
    u32 unk_04;
};
struct Unk_02029c74_Rec {
    u16 unk_00;
    u8 unk_02[8];
    u8 pad_0a;
    u8 unk_0b;
};
typedef void (Unk_0201d2d0::*Unk_0201d2d0_Fn)();
typedef void (Unk_0201d2d0::*Unk_0201d2d0_OutFn)(Unk_0201d2d0_Out *);
void *_ZN12Unk_0208086013func_020805c4Ev(void *);
u32 func_02003098(void *);
void func_0202d184(void *, void *, void *, s32, u32, u32, u32, u32, u32);
void func_0201c95c(void *, void *);
void func_0201c938(void *, void *, s32, s32, s32, void *);
void func_0201c91c(void *, void *, s32, void *, void *);
void _ZN12Unk_020d893813func_0201c870EPv(void *, void *);
void _ZN12Unk_020660f813func_020679c0Ei(void *, s32);
void _ZN12Unk_020d893813func_0202d1d4EP16Unk_020d8938_Tbl(void *, void *);
void _ZN12Unk_020660f813func_02067a84EPhPv(void *, u8 *, u32);
void _ZN12Unk_020660f813func_02067abcEPhPv(void *, u8 *, u32);
s32 _ZN12Unk_020660f813func_02067a3cEiPv(void *, s32, void *);
void func_0200303c(void *, s32, u32, u32);
void *func_0209ac1c(s32);
void *func_02099db4(s32, void *);
void *func_02099d44(s32, void *, s32);
void *func_0209a4f0(void *);
void *func_0209a4e4(void *, s32);
s32 func_0209a42c(void *);
void _ZN12Unk_020d893813func_0202d120Ej(void *, void *);
void _ZN12Unk_020d771413func_020157b8Ejj(void *, void *, s32);
void *_ZN12Unk_0209ada413func_0209ab94Ev(void *);
void _ZN12Unk_020d771413func_0201578cEjjj(void *, void *, s32, s32);
s32 _ZN12Unk_0209ada413func_0209abccEv(void *);
void *func_0209750c();
void func_0209d498(void *);
s32 func_0209ac44(void *);
s32 func_0209d3d0(s32, void *, s32);
void *_ZN12Unk_0209865c13func_02098750Ev(void *);
s32 func_0202cee4(void *, void *);
s32 _ZN12Unk_0209ada413func_0209ad68Ev(void *);
s32 func_02128930(void *, void *, s32);
s32 _ZN12Unk_0209ada413func_0209ac64Ev(void *);
s32 func_0206ed18();
s32 func_02080f94(void *);
void *func_0206ecf0();
void _ZN12Unk_0208091c13func_02080cccEPvi(void *, void *, s32);
void *_ZN12Unk_0209865c13func_0209888cEv(void *);
void *func_0207f344(void *, void *, s32, void *);
void _ZN12Unk_020e1c64C1Ev(void *);
void _ZN12Unk_020e1c64D1Ev(void *);
void _ZN12Unk_0208091c13func_02080d4cEPv(void *, void *);
s32 _ZN12Unk_0208091c13func_02080dd8Ev();
void func_02115fb4(void *, s32, u32);
void _ZN12Unk_020d771013func_0201511cEjjjh(void *, s32, void *, s32, s32);
void _ZN12Unk_020d771013func_020151d0Ei(void *, s32);
void _ZN12Unk_020940a013func_020940d0EP12Unk_020e2a78(void *, void *);
s32 func_0202a238(void *, void *, u32);
void _ZN12Unk_020e2a7813func_020a7bd8EPS_(void *, void *);
void func_0209cf88(void *);
void _ZN12Unk_0208091c13func_02080cf8EPv(void *, void *);
void func_020796d4(void *, void *);
void func_0207f368(void *, void *, void *);
extern Unk_0201d2d0_Data data_020c76b0;
extern u32 data_020c76e0;
extern u8 data_021be730[];
extern u8 data_020c74fc[];
extern u8 data_021be668[];
extern u8 data_020c7500[];
extern u8 data_020c74f0[];
extern u8 data_020c74f4[];
extern u8 data_021be6c0[];
extern u8 data_021dfd8c[];
extern Unk_0201d2d0_Fn data_020d7fd0;
extern Unk_0201d2d0_Fn data_020d7a68;
extern Unk_0201d2d0_Fn data_020d7a98;
extern Unk_0201d2d0_Fn data_020d7f18;
extern Unk_0201d2d0_Fn data_020d7cc8;
extern Unk_0201d2d0_Fn data_020d7ab8;
static inline BOOL Unk_020298c8_R1(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) r = TRUE;
    return r;
}
BOOL func_020298c8(u16 *p, s32 v);
BOOL func_020298f8(u16 *p);
BOOL func_02029918(u16 *p, s32 v);
BOOL func_02029948(u16 *p);
class Unk_0201d2d0 {
public:
    BOOL func_02029968(s32 unused, s32 a, s32 b);
    BOOL func_02029a88(s32 a, s32 b);
    BOOL func_02029c74(s32 a, s32 b);
    void func_02029d84(Unk_0201d2d0_Out *out);
    void func_02029de4(Unk_0201d2d0_Out *out);
    void func_02029e38(Unk_0201d2d0_Out *out);
    void func_02029e8c();
    void func_02029e98();
    void func_02029f04(Unk_0201d2d0_Out *out);
    void func_02029f58();
    void func_0202a030(s32 unused);
    void func_0202a074(Unk_0201d2d0_Out *out);
    void func_0202a0c8();
    void func_0202a18c();
    void func_0202d1c0(Unk_0201d2d0_Fn fn);
    void func_0202d33c(Unk_0201d2d0_Fn fn);
    void *func_0202d114();

    u8 pad_00[0x3c];
    void *unk_3c;
    u8 pad_40[0xac - 0x40];
    Unk_0201d2d0_OutFn unk_ac;
    u8 pad_b4[0xfc - 0xb4];
    Unk_0201d2d0_Parent *unk_fc;
    u8 unk_100[0x11e - 0x100];
    u8 unk_11e;
    u8 pad_11f[0x128 - 0x11f];
    void *unk_128;
    u8 pad_12c[0x15c - 0x12c];
    void *unk_15c;
};
}
}

// ---- unk_0202a238.cpp
namespace F24 {
extern "C" {

class Unk_0201d2d0;
struct Unk_0201d2d0_Out {
    u32 unk_00;
    u8 unk_04;
};
struct Unk_0201d2d0_Data {
    u32 unk_00;
    u8 unk_04;
};
struct Unk_0201d2d0_Parent {
    u8 pad_00[0x820];
    u8 unk_820;
    u8 pad_821[0x82c - 0x821];
    void *unk_82c;
};
struct Unk_0202a750_S {
    u16 unk_00;
    u16 pad_02;
    u32 unk_04;
    u32 unk_08;
};
struct Unk_0201d568_S {
    u8 pad_00[0x20];
    volatile u8 unk_20;
    s8 unk_21;
};
typedef void (Unk_0201d2d0::*Unk_0201d2d0_Fn)();
typedef void (Unk_0201d2d0::*Unk_0201d2d0_OutFn)(Unk_0201d2d0_Out *);
typedef s32 (Unk_0201d2d0::*Unk_0202a750_Fn)();
void *_ZN12Unk_0208086013func_020805c4Ev(void *);
u32 func_02003098(void *);
void func_0200303c(void *, s32, u32, u32);
void func_0202d184(void *, void *, void *, s32, u32, u32, u32, u32, u32);
s32 func_0202d048(void *, void *, void *, void *, s32);
void func_0201c95c(void *, void *);
void func_0201c938(void *, void *, s32, s32, s32, void *);
void _ZN12Unk_020d893813func_0201c870EPv(void *, void *);
void _ZN12Unk_020660f813func_020679c0Ei(void *, s32);
void _ZN12Unk_020d893813func_0202d1d4EP16Unk_020d8938_Tbl(void *, void *);
void _ZN12Unk_020660f813func_02067a84EPhPv(void *, u8 *, u32);
s32 func_020b30e0(void *, void *, u8 *);
s32 func_02063b8c(s32);
s32 func_02063b74(s32);
s32 func_0206ed18();
u32 func_0206ecf0();
void func_0207fb04(void *, u32, s32);
s32 func_02080f94(u32);
void _ZN12Unk_0208091c13func_02080b80EPvi(void *, u32, s32);
void *func_0209750c();
void *_ZN12Unk_0209865c13func_0209888cEv(void *);
void _ZN12Unk_0207e94013func_0207f1a8EPviS0_(void *, u32, s32, void *);
void func_02115fb4(void *, s32, s32);
void _ZN12Unk_020d771013func_0201511cEjjjh(void *, s32, void *, s32, s32);
void _ZN12Unk_020d771013func_020151d0Ei(void *, s32);
s32 func_02116048(void *, void *, s32);
s32 _ZN12Unk_0201d2d013func_02020a00Eii(void *, void *, s32);
s32 _ZN12Unk_0201d2d013func_0202b4e8Ejj(void *, s32, s32);
s32 _ZN12Unk_020d771413func_0201578cEjjj(void *, void *, u32, u32);
void func_0207e268(void *);
void *func_0209a610();
void *_ZN12Unk_0209b3bc13func_0209b354Ev();
s32 func_02098ffc();
void func_0207ceb4(void *, void *);
void func_0202cdf4(void *);
s32 func_0204be70(void *);
s32 func_0205b4f8();
s32 func_0202ac7c(s32);
void *_ZN12Unk_0209865c13func_02098750Ev(void *);
s32 _ZN12Unk_02097d1c13func_02097d1cEi(void *, s32);
void _ZN12Unk_020d771413func_02015958Eijiii(void *, s32, u32, s32, s32, s32);
void func_0202ac98(void *, void *);
extern u8 data_020c7538[];
extern u32 data_020c76e0, data_020c7a38[];
extern Unk_0201d2d0_Data data_020c76d8, data_020c77a0, data_020c7600;
extern u8 data_021be6c0[];
extern Unk_0201d2d0_Fn data_020d7ad8, data_020d7db0, data_020d7da8, data_020d7ac8;
extern Unk_0202a750_Fn data_020d7a08, data_020d79e8, data_020d7918, data_020d7a18, data_020d7920, data_020d7910, data_020d79f0, data_020d7be0, data_020d7d98;
extern Unk_0201d2d0_Fn data_020d7ee8, data_020d7cb0, data_020d7c98, data_020d7d30, data_020d7ae0;
class Unk_0201d2d0 {
public:
    void func_0202d1c0(Unk_0201d2d0_Fn fn);
    void func_0202d33c(Unk_0201d2d0_Fn fn);

    void func_0202a2b8(Unk_0201d2d0_Out *out);
    void func_0202a30c();
    void func_0202a378(Unk_0201d2d0_Out *out);
    void func_0202a3e4(Unk_0201d2d0_Out *out);
    void func_0202a468();
    void func_0202a4d4(Unk_0201d2d0_Out *out);
    void func_0202a540();
    void func_0202a54c();
    void func_0202a618(s32);
    void func_0202a680(Unk_0201d2d0_Out *out);
    void func_0202a6e0();
    void func_0202a750(Unk_0201d2d0_Out *out);
    BOOL func_0202a994();
    BOOL func_0202aac8();

    u8 pad_00[0x3c];
    void *unk_3c;
    u8 pad_40[0xac - 0x40];
    Unk_0201d2d0_OutFn unk_ac;
    u8 pad_b4[0xc4 - 0xb4];
    Unk_0201d2d0_Fn unk_c4;
    u8 pad_cc[0xec - 0xcc];
    Unk_0201d2d0_Fn unk_ec;
    Unk_0201d2d0_Fn unk_f4;
    Unk_0201d2d0_Parent *unk_fc;
    u8 unk_100[0x11e - 0x100];
    u8 unk_11e;
    u8 pad_11f;
    Unk_0202a750_S unk_120;
    u8 pad_12c[0x168 - 0x12c];
    Unk_0201d2d0_Fn unk_168;
    Unk_0201d2d0_Fn unk_170;
    Unk_0201d2d0_Fn unk_178;
    Unk_0201d2d0_Fn unk_180;
    Unk_0201d2d0_Fn unk_188;
    u8 pad_190[0x198 - 0x190];
    u16 unk_198;
    u8 unk_19a;
    u8 pad_19b;
    s32 unk_19c;
};
BOOL func_0202a238(void *a, void *b, u32 c);
}
}

// ---- unk_0202ab90.cpp
namespace F25 {
extern "C" {

class Unk_0201d2d0;
struct Unk_0201d2d0_Out {
    u32 unk_00;
    u8 unk_04;
};
struct Unk_0201d2d0_Data {
    u32 unk_00;
    u8 unk_04;
};
struct Unk_0202ab90_Parent {
    u8 pad_00[0x820];
    u8 unk_820;
    u8 pad_821[0x82c - 0x821];
    void *unk_82c;
};
struct Unk_0202ac98_Buf {
    u16 unk_00;
    u8 unk_02;
};
struct Unk_0202b208_Obj {
    u8 pad_00[0x88];
    u8 unk_88[0x18];
    u8 unk_a0;
};
struct Unk_0201d2d0_H120 {
    u16 unk_00;
    u16 pad;
    u32 unk_04;
    void *unk_08;
};
void *_ZN12Unk_0208086013func_020805c4Ev(void *);
u32 func_02003098(void *);
void func_0202d184(void *, void *, void *, s32, u32, u32, u32, u32, u32);
s32 func_0202d048(void *, void *, void *, void *, s32);
void _ZN12Unk_020d893813func_0202d1d4EP16Unk_020d8938_Tbl(void *, void *);
s32 _ZN12Unk_020d893813func_0202d114Ev(void *);
void _ZN12Unk_020d893813func_0202d120Ej(void *, void *);
void _ZN12Unk_020660f813func_02067abcEPhPv(void *, u8 *, u32);
void _ZN12Unk_020d771413func_020157b8Ejj(void *, void *, s32);
void _ZN12Unk_020d771413func_0201577cEjjj(void *, s32, u8 *, void *, u8 *);
void _ZN12Unk_0201d2d013func_0202b4acEjPv(void *, s32, void *);
void _ZN12Unk_0201d2d013func_0202b4e8Ejj(void *, s32, u32);
void *func_0209750c();
void *_ZN12Unk_0209865c13func_0209888cEv(void *);
void *_ZN12Unk_020d893813func_0201c7f8Ev(void *);
s32 _ZN12Unk_0208091c13func_02080dd8Ev(void *);
s32 _ZN12Unk_0208091c13func_02080aa8Ev(void *);
void _ZN12Unk_0208091c13func_02080abcEv(void *);
s32 func_02098ffc();
void func_0209cf88(void *);
s32 func_020796f8(void *, void *);
s32 _ZN12Unk_02002fc813func_020030b4Ev(void *);
u32 func_02002ff8(void *);
void func_0202cdf4(u16 *);
void func_0207ceb4(void *, void *);
void func_0207e268(void *);
void func_0209a610();
u32 _ZN12Unk_0209b3bc13func_0209b354Ev();
s32 func_0204be70(void *);
u32 func_0205b4f8();
s32 func_02063b74(s32);
s32 func_02063b8c(u32);
s32 func_0209b334(s32);
s32 func_02098f90(void *, u32);
u32 func_02099048(s32);
s32 func_0207f4a4(void *, void *, void *, s32);
void *func_02021738(void *, void *, s32, void *);
void func_020215f8();
void *func_0207fae4(void *);
u8 func_02081318(void *);
s32 func_0207a914(void *, void *, void *);
s32 _ZN12Unk_0209865c13func_0209865cEv(void *);
void func_0209d498(void *);
s32 func_0209acb8(s32);
s32 func_0209ac1c(s32);
void *func_02099db4(s32, s32);
void *func_0209a4f0(void *);
s32 _ZN12Unk_0209ada413func_0209abc4Ev(void *);
s32 func_0209ac44(void *);
s32 func_0209d3d0(void *, void *, s32);
s32 _ZN12Unk_0209ada413func_0209ac64Ev(void *);
void *_ZN12Unk_0209865c13func_02098750Ev(void *);
s32 _ZN12Unk_0209ada413func_0209ab94Ev(void *);
s32 func_0202cee4(void *, s32);
void *func_0202ceb0(void *);
s32 _ZN12Unk_0206555413func_02065578Ev(void *);
void func_02065c94(void *);
s32 _ZN12Unk_0209ada413func_0209ad68Ev(void *);
s32 func_02099ed4(void *, void *);
void func_0202ac98(u16 *, s32);
s32 func_0202ac7c(s32);
s32 _ZN12Unk_02097d1c13func_02097d1cEi(void *, s32);
void _ZN12Unk_020d771413func_02015958Eijiii(void *, s32, s32, s32, s32, s32);
extern Unk_0201d2d0_Data data_020c7570;
extern Unk_0201d2d0_Data data_020c7850;
extern Unk_0201d2d0_Data data_020c75b8;
extern Unk_0201d2d0_Data data_020c7598;
extern Unk_0201d2d0_Data data_020c76e0;
extern Unk_0201d2d0_Data data_020c76f8;
extern Unk_0201d2d0_Data data_020c76d8;
extern Unk_0201d2d0_Data data_020d7a80;
extern u32 data_020d888c[];
extern u32 data_020c7b08[];
extern u8 data_020c7518[];
extern u8 data_020c7508[];
extern u8 data_021dfd8c[];
extern u8 data_021befd4[];
extern u8 data_021be650[];
typedef void (Unk_0201d2d0::*Unk_0201d2d0_OutFn)(Unk_0201d2d0_Out *);
class Unk_0201d2d0 {
public:
    BOOL func_0202ab90();
    BOOL func_0202ad04();
    BOOL func_0202ad84();
    BOOL func_0202ae30();
    BOOL func_0202aed8();
    BOOL func_0202af68();
    BOOL func_0202b048();
    void func_0202b0b4(Unk_0201d2d0_Out *out);
    void func_0202b208();
    void func_0202b410();
    void func_0202b444();

    u8 pad_00[0x3c];
    void *unk_3c;
    u8 pad_40[0xac - 0x40];
    Unk_0201d2d0_OutFn unk_ac;
    u8 pad_b4[0xfc - 0xb4];
    Unk_0202ab90_Parent *unk_fc;
    u8 unk_100[0x11e - 0x100];
    u8 unk_11e;
    u8 pad_11f;
    Unk_0201d2d0_H120 unk_120;
    u32 unk_12c;
    u32 unk_130;
    void *unk_134;
    u8 pad_138[0x15c - 0x138];
    void *unk_15c;
    u8 pad_160[0x198 - 0x160];
    u16 unk_198;
    u8 unk_19a;
    u8 pad_19b;
    s32 unk_19c;
};
s32 func_0202ac7c(s32 x);
void func_0202ac98(u16 *out, s32 idx);
}
}

// ---- unk_0202b4ac.cpp
namespace F26 {
extern "C" {

struct Unk_0202b4ac_Data {
    u32 unk_00;
    u8 unk_04;
};
struct Unk_0202b4ac_Rec {
    u8 pad_00[0x1d];
    union {
        u8 unk_1d;
        struct {
            u8 f0 : 1;
            u8 f1 : 1;
            u8 f2 : 1;
        } bits;
    };
};
struct Unk_0201d2d0_Out {
    u32 unk_00;
    u8 unk_04;
};
struct Unk_0202b4ac_Str {
    u8 c[2];
};
struct Unk_0202bd3c_Arr {
    u32 unk_00;
    u32 unk_04;
};
struct Unk_0202bd3c_Bytes {
    u8 pad_00[2];
    u8 unk_02;
    u8 unk_03;
    u8 unk_04;
};
class Unk_020ad700 {
public:
    void func_020ad5c0(void *p);
};
class Unk_0202b4ac_VBase {
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
    virtual void vfunc_60();
    virtual void *vfunc_64();
    virtual void vfunc_68();
    virtual void vfunc_6c();
    virtual void vfunc_70();
    virtual void vfunc_74();
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
    virtual void vfunc_a8();
    virtual void vfunc_ac();
    virtual BOOL vfunc_b0();
};
class Unk_0202b4ac_Owner : public Unk_0202b4ac_VBase {
public:
    u8 pad_04[0x5c - 4];
    s32 unk_5c[3];
    u8 pad_68[0x82c - 0x68];
    void *unk_82c;
};
class Unk_0201d2d0 : public Unk_0202b4ac_VBase {
public:
    void func_0202b4ac(u32 a, void *b);
    void func_0202b4e8(u32 a, u32 b);
    void func_0202b520(Unk_0201d2d0_Out *out);
    BOOL func_0202b998(s32 x);
    BOOL func_0202b9a4(s32 x);
    BOOL func_0202b9b0(s32 x);
    Unk_0202b4ac_Data *func_0202b9bc(u32 *out, Unk_0202b4ac_Rec *rec);
    BOOL func_0202b9e4(Unk_0202b4ac_Rec *rec);
    BOOL func_0202ba10();
    Unk_0202b4ac_Data *func_0202ba28(s32 x);
    BOOL func_0202ba80(volatile s32 *out, void *p);
    Unk_0202b4ac_Data *func_0202bab4();
    BOOL func_0202bae0(s32 x);
    Unk_0202b4ac_Data *func_0202baec(u32 *out, void *scene);
    BOOL func_0202bb48(s32 x);
    BOOL func_0202bb54();
    BOOL func_0202bb84();
    s32 func_0202bb88(s32 *out);
    void func_0202bcdc(u8 *a, void *b, u32 c);
    void func_0202bd3c(void *s1, u8 *tbl, void *p2, u8 p3, Unk_0202bd3c_Arr *arr);
    void func_0202bd3c(void *s1, u8 *tbl, void *p2, u32 p3, Unk_0202bd3c_Arr *arr);

    void func_0201577c(u32 a, void *c, void *d, void *e);
    void func_0201578c(u32 a, u32 b, u32 c);
    void func_02015818(u32 a, u32 b);
    void func_02015958(s32 a, u32 b, s32 c, s32 d, s32 e);
    void func_0202b444();
    void func_0202be64(void *a, u8 *b, void *c, u32 d, Unk_0202bd3c_Arr *arr);

    u8 pad_04[0x3c - 4];
    void *unk_3c;
    u8 pad_40[0xfc - 0x40];
    Unk_0202b4ac_Owner *unk_fc;
    u8 unk_100[0x11e - 0x100];
    u8 unk_11e;
    u8 pad_11f[0x124 - 0x11f];
    u32 unk_124;
    void *unk_128;
    u8 pad_12c[0x138 - 0x12c];
    u8 unk_138;
    u8 pad_139[0x198 - 0x139];
    u16 unk_198;
    u8 unk_19a;
};
void *func_0207f968(void *);
u32 func_0209b570(u32 *, u32);
void *func_0207e310(void *);
void *_ZN12Unk_0208086013func_020805c4Ev(void *);
u32 func_02003098(void *);
s32 func_0207856c(void *);
s32 func_020b8fe8();
void *func_0209750c();
s32 func_0207cdbc(void *);
s32 func_020ad330();
s32 func_020ad2c8();
void _ZN12Unk_020e2e54C1Ev(void *);
void _ZN12Unk_020e2e54D1Ev(void *);
Unk_020ad700 *_ZN12Unk_021ed2c013func_020ad3bcEv(void *);
void _ZN12Unk_020660f813func_02067a3cEiPv(void *, s32, void *);
s32 _ZN12Unk_020cbb1813func_02072e44Ev(void *);
s32 _ZN12Unk_0208091c13func_0208091cEv(void *);
s32 func_02098ffc();
void _ZN12Unk_0206338013func_0206338cEii(void *, s32, s32);
void func_02062f94(void *, void *, s32, s32, s32, s32, s32);
void func_02063388(void *);
void _ZN12Unk_0208091c13func_02080930Ev(void *);
s32 func_020b5254();
void *func_0207e268(void *);
void *func_0209a610(void *);
s32 _ZN12Unk_0209b3bc13func_0209b354Ev(void *);
s32 func_020b50e8();
s32 func_020b51fc();
s32 func_020b5240(s32);
s32 func_020b51a4();
s32 func_0209ccd0();
void *func_020784f4(void *);
s32 func_0207846c(void *);
s32 func_02063b8c(s32);
void func_0202d184(void *, void *, void *, s32, u32, u32, u32, u32, u32);
s32 _s32_div_f(s32, s32);
s32 func_02098778(void *);
s32 func_0202c094(void *, void *, s32, void *, u32);
u16 *func_02080e1c(void *);
s32 func_0207dfe8(void *);
void *_ZN12Unk_0209865c13func_0209888cEv(void *);
s32 _ZN12Unk_0206395413func_02094058Ev(void *);
void *_ZN12Unk_0207e94013func_0207f19cEv(void *);
s32 func_ov003_0222612c();
void *_ZN12Unk_020940a013func_02094218Ev(void *);
u16 *func_0209409c(void *);
void *func_02080e18(void *);
s32 func_02128930(void *, void *, s32);
void func_0209d498(void *);
void *func_02080ec8(void *);
s32 func_0209d3d0(void *, void *, s32);
s32 _ZN12Unk_02002fc813func_020030b4Ev(void *);
s32 func_0209d3a4(void *, void *);
void *func_0209a60c(void *);
void *func_0209a940(void *);
s32 _ZN12Unk_0209ada413func_0209ac64Ev(void *);
s32 func_0209a938(void *);
s32 func_0202bf84(void *, void *, void *, u32);
u16 *_ZN12Unk_0209ada413func_0209ab94Ev(void *);
s32 func_0202c148(u16 *, u32, u32, u32, u32);
u16 *func_0209a8e8(void *);
u32 func_0202ce44(void *, s32);
s32 func_0202c33c(u16 *, u32, u32, u32, u32);
u32 *func_0209a8ec(void *);
void func_02077520(void *, void *);
extern Unk_0202b4ac_Data data_020c75c8, data_020c76e8, data_020c79a8, data_020c7870, data_020c78e0, data_020c75a0, data_020c7608, data_020c7540, data_020c7848, data_020c7688, data_020c7830, data_020c77f0, data_020c7860, data_020c7648, data_020c7640, data_020c78c0, data_020c75e8, data_020c7730, data_020c75d0, data_020c7748, data_020c7718, data_020c7780, data_020c7950, data_020c7810, data_020c75c0, data_020c7700, data_020c78c8;
extern Unk_0202b4ac_Data data_020c7b34[];
extern s8 data_020c74f8[];
extern u8 data_020e416c;
extern u8 data_021ed2c0[];
extern void *data_020cbb18;
extern u16 data_021d7352[];
static inline BOOL IsZero(u8 v) {
    return v == 0 ? TRUE : FALSE;
}
static inline BOOL InRange(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) {
        r = TRUE;
    }
    return r;
}
struct Unk_0202b520_Pair {
    u16 unk_00;
    u16 unk_02;
};
struct Unk_0202bb88_Id {
    u16 unk_00;
    u8 unk_02[8];
};
}
}

// ---- unk_0202be64.cpp
namespace F27 {
extern "C" {

struct Unk_0202be64_Rec {
    u32 v[2];
    u8 b(u32 i) { return ((u8 *)this)[i]; }
};
class Unk_0202be64_Host {
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
    virtual void vfunc_60();
    virtual void *vfunc_64();
};
struct Unk_0202c60c_Entry {
    u8 unk_00;
    u8 unk_01;
    u8 unk_02;
};
struct Unk_0202c60c {
    Unk_0202c60c_Entry *unk_00;
    u8 unk_04;
};
struct Unk_0202c148_Tbl {
    Unk_0202c60c **unk_00;
};
struct Unk_0202c224_Local {
    u32 unk_00;
    u32 unk_04;
};
void *func_0209a940(void *);
s32 _ZN12Unk_0209ada413func_0209ac64Ev(void *);
s32 func_0209a938(void *);
s32 func_02063b8c(s32);
u16 *_ZN12Unk_0209ada413func_0209ab94Ev(void *);
u16 *func_0209a8e8(void *);
Unk_0202be64_Rec *func_0209a8ec(void *);
s32 _ZN12Unk_0209ada413func_0209ad68Ev(void *);
s32 _ZN12Unk_0209ada413func_0209abc4Ev(void *);
s32 _ZN12Unk_0209ada413func_0209ad28Ev(void *);
s32 func_0209a8f4();
void *func_0209a92c(void *);
s32 _ZN12Unk_020940a013func_02094218Ev(void *);
s32 func_0209d3d0(void *, void *, s32);
s32 func_0209d374(void *, void *);
void func_02077520(void *, void *);
s32 func_0202ce44(void *, s32);
s32 func_0202c8f0(u16 *, s32, s32, u32);
s32 func_0202ca00(u16 *, s32 *, s32, void *, u32, void *, s32);
void func_0202cb34(void *, s32 *);
s32 func_0202c654(u16 *, s32, s32, s32);
s32 func_ov003_02227e08(void *, u32);
s32 func_020e9650(void *, void *);
s32 func_0204f0f4(u32);
s32 func_0204f100(u32);
Unk_0202c148_Tbl *func_0204f234(s32, s32);
s32 func_0209948c(u32);
void *func_02060e24(s32);
s32 func_02060de4(u32);
void func_0209d498(void *);
void func_02115fb4(void *, s32, s32);
void func_02116048(void *, void *, s32);
extern s8 data_020c7510[];
extern u8 data_020c7528[];
extern u8 data_020e416c;
extern u8 data_021be60c[];
extern u8 data_021be5e4[];
extern u8 data_021be5e0[];
static inline BOOL Unk_0202be64_InRange(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) {
        r = TRUE;
    }
    return r;
}
static inline BOOL Unk_0202c094_IsZero(u8 v) {
    return v == 0 ? TRUE : FALSE;
}
s32 func_0202bf84(Unk_0202be64_Host *a, void *b, Unk_0202be64_Rec *y, u32 flag);
s32 func_0202c60c(s32 key, Unk_0202c60c *p);
s32 func_0202c558(s32 key, Unk_0202c60c **p);
s32 func_0202c584(u16 *a, s32 *b, s32 key, Unk_0202c60c *row);
s32 func_0202c4d8(u16 *a, s32 *b, s32 key, Unk_0202c60c **p);
s32 func_0202c420(u16 *a, s32 *b, s32 *c, s32 key, Unk_0202c148_Tbl *g, u8 lo, u8 hi);
s32 func_0202c404(u16 *a, s32 *b, s32 c, s32 d, Unk_0202c148_Tbl *e);
s32 func_0202c35c(u16 *a, s32 lo, s32 hi, s32 d, u8 e, u8 x, u8 y);
void func_0202be64(Unk_0202be64_Host *a, void *b, u8 *arr, void *c, u8 flag, Unk_0202be64_Rec *rec);
s32 func_0202bf84(Unk_0202be64_Host *a, void *b, Unk_0202be64_Rec *y, u32 flag);
s32 func_0202c0fc(s32 key, s8 *arr, s32 n);
s32 func_0202c094(void *a, void *b, s32 c, void *d, s32 e);
s32 func_0202c0fc(s32 key, s8 *arr, s32 n);
s32 func_0202c120(s32 v);
s32 func_0202c148(u16 *p, s32 lo, s32 hi, s32 id, u8 e);
void func_0202c224(u16 *p);
s32 func_0202c2d0(u16 *a, s32 *outb, s32 c, s32 d, Unk_0202c148_Tbl *e);
s32 func_0202c33c(u16 *a, s32 b, s32 c, s32 d, u8 e);
s32 func_0202c35c(u16 *a, s32 lo, s32 hi, s32 d, u8 e, u8 x, u8 y);
s32 func_0202c404(u16 *a, s32 *b, s32 c, s32 d, Unk_0202c148_Tbl *e);
s32 func_0202c420(u16 *a, s32 *b, s32 *c, s32 key, Unk_0202c148_Tbl *g, u8 lo0, u8 hi0);
s32 func_0202c4d8(u16 *a, s32 *b, s32 key, Unk_0202c60c **p);
s32 func_0202c558(s32 key, Unk_0202c60c **p);
s32 func_0202c584(u16 *a, s32 *b, s32 key, Unk_0202c60c *row);
s32 func_0202c60c(s32 key, Unk_0202c60c *p);
struct Unk_0202c654_Row {
    u8 *unk_00;
    u8 unk_04;
};
s32 func_0202c654(u16 *p, s32 lo, s32 hi, s32 id);
void func_0202c708(u16 *p);
}
}

// ---- unk_0202c7c0.cpp
namespace F28 {
extern "C" {

struct Unk_0202c92c_Ent {
    u8 *unk_00;
    u8 unk_04;
};
struct Unk_0202cd5c_Obj {
    u32 v[2];
};
struct Unk_0202cb34_Size {
    s32 x, y;
};
struct Unk_0202cb34_Grid {
    u8 *unk_00;
    Unk_0202cb34_Size unk_04;
};
class Unk_0202cf9c_Scene {
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
    virtual void vfunc_24(u32 a);
    virtual void vfunc_28(u32 a);
    virtual void vfunc_2c(u32 a);
    virtual void vfunc_30(u32 a);
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
    virtual s32 vfunc_60();
    virtual void vfunc_64();
    virtual void vfunc_68();
    virtual void vfunc_6c();
    virtual void vfunc_70();
    virtual void vfunc_74();
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
    virtual void vfunc_a4(u32 a, u32 b);
};
struct Unk_0202ce90_Parent {
    u8 pad_00[0x564];
    u8 unk_564[4];
};
extern u8 data_020c7520[];
extern u8 data_021be614[];
extern u8 data_021be61c[];
extern u8 data_020c7504[];
extern u32 data_020c7b68[];
extern u32 data_020c7b1c[];
extern u32 data_020c7a84[];
extern u16 data_020c6cc8;
extern u32 __ptmf_null[2];
void *func_02060e24(s32 a);
s32 func_02060de4(u32 a);
s32 func_02060b9c(u32 a);
s32 func_0209949c(u32 a);
s32 func_02063b8c(s32 n);
void func_02116048(const void *src, void *dst, u32 n);
void func_02115fb4(void *dst, s32 v, u32 n);
Unk_0202cb34_Grid *func_0204da0c(void);
u16 *func_02037558(void *cell, s32 a, s32 b, s32 c);
void _ZN12Unk_0206338013func_0206338cEii(Unk_0202cd5c_Obj *o, u32 a, u32 b);
void func_02063388(Unk_0202cd5c_Obj *o);
void func_02062f94(u16 *a, Unk_0202cd5c_Obj *o, u32 b, u32 c, u32 d, u32 e, u32 f);
void func_02062f44(u16 *a, Unk_0202cd5c_Obj *o);
void _ZN12Unk_0201985813func_02019614Ejt(void *p, s32 a, u16 b);
void *_ZN12Unk_02097d1c13func_02097e68Ei(void *p, s32 a);
u16 *_ZN12Unk_02097d1c13func_02097f6cEi(void *p, s32 a);
s32 _ZN12Unk_02097d1c13func_02097eb0Ei(void *p, s32 a);
s32 _ZN12Unk_0206555413func_02065578Ev(void *p);
s32 func_0204b25c(void *p);
s32 func_0204b2d4(void *p);
s32 _ZN12Unk_0201425813func_020143fcEh(void *p, s32 a);
s32 func_0209750c(void);
s32 _ZN12Unk_0209865c13func_0209888cEv(s32 a);
s32 func_0207f7cc(s32 a, s32 b);
s32 func_0207f5a4(s32 a);
s32 func_0207f86c(s32 a);
void func_02080f4c(s32 a, s32 b, s32 c, s32 d);
void func_02080ecc(s32 a, s32 b, s32 c, s32 d);
void func_02077a1c(s32 a, s32 b);
void func_0207799c(s32 a, s32 b);
s32 func_0202c908(u16 *a, s32 *b, s32 *c, s32 d, Unk_0202c92c_Ent *tbl, s32 *arr, s32 cnt);
s32 func_0202c92c(u16 *a, s32 *b, s32 *c, s32 d, Unk_0202c92c_Ent *tbl, s32 *arr, s32 cnt, u8 lo, u8 hi);
s32 func_0202ca00(u16 *a, s32 *b, s32 c, u8 *p, s32 n, s32 *arr, s32 cnt);
s32 func_0202caac(s32 c, u8 *p, s32 n, s32 *arr, s32 cnt);
s32 func_0202cb10(s32 v, s32 *arr, s32 n);
void func_0202cb34(s32 *out, s32 *cnt);
s32 func_0202ce44(u8 *p, s32 n);
void func_0202cd5c(u16 *out, u32 *tbl, s32 idx, s32 c);
s32 func_0202c7c0(u16 *a, s32 *idxOut, s32 *b, s32 *c, Unk_0202c92c_Ent *p);
s32 func_0202c84c(u16 *a, s32 lo, s32 hi, s32 d, s32 e, u8 kind);
s32 func_0202c8f0(u16 *a, s32 lo, s32 hi, u8 kind);
void func_0202cd2c(u16 *out, s32 c);
void func_0202cd44(u16 *out, s32 c);
void func_0202cdf4(u16 *out);
void *func_0202ceb0(void *p);
s32 func_0202cee4(void *p, u16 *q);
void func_0202d048(u8 *self, s32 *pa, s32 *pb, s32 c, s32 d);
s32 func_0202c7c0(u16 *a, s32 *idxOut, s32 *b, s32 *c, Unk_0202c92c_Ent *p);
s32 func_0202c84c(u16 *a, s32 lo, s32 hi, s32 d, s32 e, u8 kind);
s32 func_0202c8f0(u16 *a, s32 lo, s32 hi, u8 kind);
s32 func_0202c908(u16 *a, s32 *b, s32 *c, s32 d, Unk_0202c92c_Ent *tbl, s32 *arr, s32 cnt);
s32 func_0202c92c(u16 *a, s32 *b, s32 *c, s32 d, Unk_0202c92c_Ent *tbl, s32 *arr, s32 cnt, u8 lo, u8 hi);
s32 func_0202ca00(u16 *a, s32 *b, s32 c, u8 *p, s32 n, s32 *arr, s32 cnt);
s32 func_0202caac(s32 c, u8 *p, s32 n, s32 *arr, s32 cnt);
s32 func_0202cb10(s32 v, s32 *arr, s32 n);
void func_0202cd2c(u16 *out, s32 c);
void func_0202cd44(u16 *out, s32 c);
void func_0202cd5c(u16 *out, u32 *tbl, s32 idx, s32 c);
void func_0202cdf4(u16 *out);
s32 func_0202ce44(u8 *p, s32 n);
class Unk_0202ce90_Base {
public:
    void func_0202ce90();
    u8 pad_00[0xfc];
    Unk_0202ce90_Parent *unk_fc;
};
void *func_0202ceb0(void *p);
s32 func_0202cee4(void *p, u16 *q);
class Unk_020d8938;
typedef void (Unk_020d8938::*Unk_020d8938_Fn)();
class Unk_020d8938 {
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
    virtual void vfunc_24(u32 a);
    virtual void vfunc_28(u32 a);
    virtual void vfunc_2c(u32 a);
    virtual void vfunc_30(u32 a);
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
    virtual s32 vfunc_60();
    virtual void vfunc_64();
    virtual void vfunc_68();
    virtual void vfunc_6c();
    virtual void vfunc_70();

    Unk_0202cf9c_Scene *func_02015738();

    u8 pad_04[0xf0];
    Unk_020d8938_Fn unk_f4;
};
void func_0202d048(u8 *self, s32 *pa, s32 *pb, s32 c, s32 d);
static inline BOOL Unk_0202cb34_R(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) r = TRUE;
    return r;
}
static inline BOOL Unk_0202cb34_Check(u16 *p) {
    BOOL f8 = TRUE, f7 = TRUE, f6 = TRUE, f5 = TRUE, f4 = TRUE, f3 = TRUE, f2 = TRUE, f1 = FALSE;
    u32 v = *p;
    if (v <= 5) f1 = TRUE;
    if (!f1) {
        if (v < 6 || v > 0xb) f2 = FALSE;
    }
    if (!f2) {
        if (v < 0xc || v > 0x11) f3 = FALSE;
    }
    if (!f3) {
        if ((v < 0x12 || v > 0x19) && v != 0x1c) f4 = FALSE;
    }
    if (!f4) {
        if ((v < 0x8a || v > 0x8f) && (v < 0x90 || v > 0x95) && (v < 0x96 || v > 0x9b) && (v < 0x9c || v > 0xa3) && v != 0xa5) f5 = FALSE;
    }
    if (!f5) {
        if (v != 0x1a) f6 = FALSE;
    }
    if (!f6) {
        if (v != 0xa4) f7 = FALSE;
    }
    if (!f7) {
        if (v != 0x1d) f8 = FALSE;
    }
    return f8;
}
static inline u8 *Unk_0202cb34_Cell(Unk_0202cb34_Grid *g, s32 x, s32 y) {
    if ((u32)x < (u32)g->unk_04.x && (u32)y < (u32)g->unk_04.y && g->unk_00 != NULL) {
        return g->unk_00 + (y * g->unk_04.x + x) * 0x28;
    }
    return NULL;
}
static inline void Unk_0202cb34_GetSize(Unk_0202cb34_Grid *g, Unk_0202cb34_Size *out) {
    Unk_0202cb34_Size *ps = &g->unk_04;
    out->x = ps->x;
    out->y = ps->y;
}
void func_0202cb34(s32 *out, s32 *cnt);
}
}

// ---- unk_0202d0e4.cpp
namespace F29 {
extern "C" {

class Unk_020d89c8 {
public:
    void *vtable;
    BOOL vfunc_00();
    BOOL vfunc_0c();
    BOOL vfunc_10();
    BOOL func_0202d8c0();
    void func_0202d8d4();
    void func_0202d8e0();

    u8 pad_04[0x148 - 4];
    u32 unk_148;
    u8 pad_14c[0x82c - 0x14c];
    void *unk_82c;
    u8 pad_830[4];
    u8 unk_834;
};
class Unk_0202d648 {
public:
    u16 *func_0202d648();
    void func_0202d64c();
    BOOL func_0202d664(Unk_020d89c8 *parent, u16 *id);
    void *func_0202d71c(Unk_020d89c8 *parent, u16 *id);
    BOOL func_0202d7a4(Unk_020d89c8 *parent, u16 *id);
    Unk_0202d648 *func_0202d7e0();
    Unk_0202d648 *func_0202d7f4();

    u8 pad_00[0x28];
    u16 unk_28;
    u8 pad_2a[2];
    u8 unk_2c[4];
};
static inline BOOL Unk_0202d664_Range(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) {
        r = TRUE;
    }
    return r;
}
extern Unk_020d8938_Fn __ptmf_null;
extern Unk_020d8938_Tbl data_021bf10c[];
extern u8 data_021be6c0[];
extern "C++" {}
extern u32 data_020d786c;
extern u32 data_020c6cf0;
u32 _ZN12Unk_020d771413func_02015708Ev();
void _ZN12Unk_020d77148vfunc_80Ev(void *);
void _ZN12Unk_020d7710D2Ev(void *);
void _ZN12Unk_020d7710C2Ev(void *);
u32 _ZN12Unk_020d893813func_0201c7f8Ev(void *);
void _ZN12Unk_020d893813func_0201c8fcEv(void *);
void func_0200303c(void *, s32, u32, u32);
void func_0202d184(void *self, void *buf, u8 *out, s32 a3, u8 s0, u32 s1, u8 s2, s32 s3, u8 s4);
s32 func_02063b8c(s32);
void *func_0209750c();
void *_ZN12Unk_0209865c13func_0209888cEv(void *);
s32 func_0207f7cc(void *, void *);
s32 func_0207f86c(void *, s32);
void func_02115fb4(void *, s32, s32);
void *_ZN12Unk_0208086013func_020805c4Ev(void *);
s32 _ZN12Unk_02002fc813func_020030b4Ev(void *);
void *func_0207e310(void *);
void func_02078504(void *, void *);
u16 *func_0207850c(void *);
void _ZN12Unk_020e45e013func_020b8930Ev(void *);
void _ZN12Unk_020e45e0C1Ev(void *);
s32 _ZN12Unk_020e45e013func_020b8840EPvjS0_jj(void *, u32, u32, void *, u32, u32);
s32 _ZN12Unk_020e071813func_0208211cEv(void *);
void *_ZN12Unk_020e076813func_02081f44Ev(void *);
void _ZN12Unk_020e0740D1Ev(void *);
void _ZN12Unk_020e0740C1Ev(void *);
s32 _ZN12Unk_020e071813func_02082140Ev(void *);
s32 _ZN12Unk_020e06dc13func_0208202cEv(void *);
s32 func_0204b2d4(void *);
u32 func_0204b25c(void *);
void _ZN12Unk_0205ca9413func_0205ca94EPtiii(void *, void *, s32, s32, s32);
void func_0205ca2c(void *, void *);
s32 func_0205c91c(void *);
void *func_0203c6a8();
s32 _ZN12Unk_020d77a48vfunc_0cEv(void *);
void _ZN12Unk_0201c07813func_0201c6e4Ev(void *);
s32 _ZN12Unk_020d96708vfunc_10Ev(void *);
void func_0208161c(void *);
s32 func_0208162c(void *, void *);
s32 _ZN12Unk_020d77a48vfunc_00Ev(void *);
s32 _ZN12Unk_02019dd813func_02019cacEP18Unk_02019cac_Owner(void *, void *);
s32 _ZN12Unk_0201635013func_020162c4EP16Unk_02015fe0_Obji(void *, void *, u32);
void _ZN12Unk_0201985813func_020197acEPhiiiisii(void *, void *, s32, s32, s32, s32, s32, s32, s32);
u16 *_ZN12Unk_0207fb8013func_0207fd9cEv(void *);
s32 _ZN12Unk_020d77a413func_0201bdecEv(void *);
void _ZN12Unk_020e0cf413func_02088c98EPviijjjhi(void *, void *, s32, s32, s32, s32, s32, s32, s32);
void *_ZN12Unk_0208086013func_020805b8Ev(void *);
s32 _ZN12Unk_020d89c813func_0202da64Ev(void *);
void func_0202d864(u16 *out, Unk_020d8938 *obj);
void func_0202d184(void *self, void *buf, u8 *out, s32 a3, u8 s0, u32 s1, u8 s2, s32 s3, u8 s4);
}
}

// ---- unk_0202da64.cpp
namespace F30 {
extern "C" {

extern u8 data_020e416c;
extern u8 data_021be680[];
extern u8 data_021be6a0[];
extern u8 data_021dfd8c[];
extern void *data_020cbb18;
extern s32 data_021bf97c;
u32 func_02077b04(u32 a);
void func_020639e8(u8 *dst, u8 *fmt, ...);
u32 func_02063b8c(u32 a);
void _ZN12Unk_0207fb8013func_0207fd90EPt(void *o, u16 *p);
void func_02077450(void *o, u16 *p);
void *_ZN12Unk_0208086013func_020805c4Ev(void *o);
u32 _ZN12Unk_02002fc813func_020030b4Ev(void *o);
u16 func_02002ff8(void *o);
u32 _ZN12Unk_02002fc813func_02003070Ev(void *o);
void _ZN12Unk_02002fc813func_02002fc8Ej(void *o, u32 v);
void *func_0207bf60(void *a, u16 b);
void *func_0207e310(void *o);
u32 _ZN12Unk_020cbb1813func_02072e44Ev(void *g);
u32 _ZN12Unk_020cbb1813func_020729ccEj(void *g, u32 v);
void *func_0209750c();
void *_ZN12Unk_0209865c13func_020986b0Ev(void *p);
void func_020877a0(void *a, u32 b);
void func_0209d498(void *p);
u32 func_020874e8(u32 a, u32 b, u32 c, u8 *d);
void *_ZN12Unk_0209865c13func_02098698Ev(void *p);
u32 _ZN12Unk_020877e013func_02087838Ej(void *o, u32 a);
void _ZN12Unk_020877e013func_02087804Ej(void *o, u32 a);
void *_ZN12Unk_020d771413func_02015a5cEv(u32 a);
void _ZN12Unk_020aa3b813func_020aa680Eii(void *h, s32 a, s32 b);
void _ZN12Unk_020aa3b813func_020aa608Ev(void *h);
void _ZN12Unk_020aa3b813func_020aa638EiPKhiS1_PKci(void *h, s32 a, u8 *b, s32 c, u8 *d, s32 e, s32 f);
s32 func_02081428(u16 *p);
void func_020814ec(u32 a, u16 *p);
void _ZN12Unk_020d893813func_0201c790Ev(void *self);
static inline BOOL Unk_0202daf8_InRange(u16 v, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (v >= lo && v <= hi) {
        r = TRUE;
    }
    return r;
}
BOOL func_0202e148();
void func_0202e174(void *unused, u32 a);
BOOL func_0202e18c(void *unused, u8 *p, u32 mode);
BOOL func_0202e1cc(u32 a, BOOL flag);
void func_0202e214(u32 a, u8 *src, s32 n, s32 m);
static inline BOOL Unk_0202e318_IsOne(u8 v) {
    if (v == 1) {
        return TRUE;
    }
    return FALSE;
}
}
}

namespace nZ {
extern "C" {
void _ZN12Unk_0201c07813func_0201c384EP12Unk_020d8938(void);
void _ZN12Unk_0201c07813func_0201c3ccEP12Unk_020d8938(void);
void _ZN12Unk_0201c07813func_0201c3fcEP12Unk_020d8938(void);
void _ZN12Unk_0201c07813func_0201c444EP12Unk_020d8938(void);
void _ZN12Unk_0201c07813func_0201c474EP12Unk_020d8938(void);
void _ZN12Unk_0201c07813func_0201c4ccEP12Unk_020d8938(void);
void _ZN12Unk_0201d2d013func_0201d344Ev(void);
void _ZN12Unk_0201d2d013func_0201d3ecEv(void);
void _ZN12Unk_0201d2d013func_0201d88cEv(void);
void _ZN12Unk_0201d2d013func_0201db44Ev(void);
void _ZN12Unk_0201d2d013func_0201db60Ev(void);
void _ZN12Unk_0201d2d013func_0201db88Ev(void);
void _ZN12Unk_0201d2d013func_02020b38Ev(void);
void _ZN12Unk_0201d2d013func_02020cc4Ev(void);
void _ZN12Unk_0201d2d013func_02020d90Ev(void);
void _ZN12Unk_0201d2d013func_02020ea4EPhPiS0_Pj(void);
void _ZN12Unk_0201d2d013func_02020f44EPhPiS0_Pj(void);
void _ZN12Unk_0201d2d013func_02021048Ev(void);
void _ZN12Unk_0201d2d013func_02021ce4Ev(void);
void _ZN12Unk_0201d2d013func_02021d50Ev(void);
void _ZN12Unk_0201d2d013func_02021ea4Ev(void);
void _ZN12Unk_0201d2d013func_02021ef8Ev(void);
void _ZN12Unk_0201d2d013func_02021fe8Ev(void);
void _ZN12Unk_0201d2d013func_0202203cEv(void);
void _ZN12Unk_0201d2d013func_020220c0Ev(void);
void _ZN12Unk_0201d2d013func_02022168Ev(void);
void _ZN12Unk_0201d2d013func_020221bcEv(void);
void _ZN12Unk_0201d2d013func_02022224Ev(void);
void _ZN12Unk_0201d2d013func_02022270Ev(void);
void _ZN12Unk_0201d2d013func_0202235cEv(void);
void _ZN12Unk_0201d2d013func_020224b8Ev(void);
void _ZN12Unk_0201d2d013func_020225b4Ev(void);
void _ZN12Unk_0201d2d013func_02022608Ev(void);
void _ZN12Unk_0201d2d013func_0202265cEv(void);
void _ZN12Unk_0201d2d013func_020226b0Ev(void);
void _ZN12Unk_0201d2d013func_02022704Ev(void);
void _ZN12Unk_0201d2d013func_02022758Ev(void);
void _ZN12Unk_0201d2d013func_020227acEv(void);
void _ZN12Unk_0201d2d013func_02022994Ev(void);
void _ZN12Unk_0201d2d013func_02022bb4Ev(void);
void _ZN12Unk_0201d2d013func_02022dc0Ev(void);
void _ZN12Unk_0201d2d013func_02023118Ev(void);
void _ZN12Unk_0201d2d013func_020231b4Ev(void);
void _ZN12Unk_0201d2d013func_02023248Ev(void);
void _ZN12Unk_0201d2d013func_020235c0Ev(void);
void _ZN12Unk_0201d2d013func_02023800Ev(void);
void _ZN12Unk_0201d2d013func_02024254Ev(void);
void _ZN12Unk_0201d2d013func_020244b0Ev(void);
void _ZN12Unk_0201d2d013func_02024554Ev(void);
void _ZN12Unk_0201d2d013func_0202475cEv(void);
void _ZN12Unk_0201d2d013func_020248e4Ev(void);
void _ZN12Unk_0201d2d013func_02024a1cEv(void);
void _ZN12Unk_0201d2d013func_02024b68Ev(void);
void _ZN12Unk_0201d2d013func_02024cd8Ev(void);
void _ZN12Unk_0201d2d013func_02024d38Ev(void);
void _ZN12Unk_0201d2d013func_02024fdcEv(void);
void _ZN12Unk_0201d2d013func_0202516cEv(void);
void _ZN12Unk_0201d2d013func_02025270Ev(void);
void _ZN12Unk_0201d2d013func_0202536cEv(void);
void _ZN12Unk_0201d2d013func_020267b8Eii(void);
void _ZN12Unk_0201d2d013func_02026bd0Ev(void);
void _ZN12Unk_0201d2d013func_02026cccEv(void);
void _ZN12Unk_0201d2d013func_02026d8cEv(void);
void _ZN12Unk_0201d2d013func_02026f1cEv(void);
void _ZN12Unk_0201d2d013func_020270ecEv(void);
void _ZN12Unk_0201d2d013func_02027324Ev(void);
void _ZN12Unk_0201d2d013func_02027424Ev(void);
void _ZN12Unk_0201d2d013func_02027590Ev(void);
void _ZN12Unk_0201d2d013func_020279a0Ev(void);
void _ZN12Unk_0201d2d013func_02028848EPvS0_(void);
void _ZN12Unk_0201d2d013func_02029a88Eii(void);
void _ZN12Unk_0201d2d013func_02029c74Eii(void);
void _ZN12Unk_0201d2d013func_02029f58Ev(void);
void _ZN12Unk_0201d2d013func_0202a54cEv(void);
void _ZN12Unk_0201d2d013func_0202a994Ev(void);
void _ZN12Unk_0201d2d013func_0202aac8Ev(void);
void _ZN12Unk_0201d2d013func_0202ab90Ev(void);
void _ZN12Unk_0201d2d013func_0202ad04Ev(void);
void _ZN12Unk_0201d2d013func_0202ad84Ev(void);
void _ZN12Unk_0201d2d013func_0202ae30Ev(void);
void _ZN12Unk_0201d2d013func_0202aed8Ev(void);
void _ZN12Unk_0201d2d013func_0202af68Ev(void);
void _ZN12Unk_0201d2d013func_0202b048Ev(void);
void _ZN12Unk_0201dc4413func_0201dc44Ev(void);
void _ZN12Unk_0201dc4413func_0201dca0Ev(void);
void _ZN12Unk_0201e5a413func_0201e974Ev(void);
void _ZN12Unk_0201e5a413func_0201e9d0Ev(void);
void _ZN12Unk_0201eea413func_0201f130Ev(void);
void _ZN12Unk_0201eea413func_0201f32cEv(void);
void _ZN12Unk_0201eea413func_0201f6e0Ev(void);
void _ZN12Unk_0201f7d013func_0201f90cEv(void);
void _ZN12Unk_0201f7d013func_0201fb20Ev(void);
void _ZN12Unk_0201f7d013func_0201fe30Ev(void);
void _ZN12Unk_0201f7d013func_0201ff9cEv(void);
void _ZN12Unk_0201f7d013func_0201fff4Ev(void);
void _ZN12Unk_0202134013func_02021340EPPvi(void);
void _ZN12Unk_0202134013func_020213b0EPPvi(void);
void _ZN12Unk_0202134013func_020213f0EPPvi(void);
void _ZN12Unk_0202134013func_02021448EPPvi(void);
void _ZN12Unk_0202134013func_020214ecEPPvi(void);
void _ZN12Unk_0202134013func_02021564EPPvi(void);
void _ZN12Unk_0202134013func_02021610EPPvi(void);
void _ZN12Unk_0202134013func_02021684EPPvi(void);
void _ZN12Unk_0202134013func_020217acEv(void);
void _ZN12Unk_0202134013func_02021848Ev(void);
void _ZN12Unk_0202134013func_020218c4Ev(void);
void _ZN12Unk_0202134013func_020219ccEv(void);
void _ZN12Unk_0202134013func_02021b6cEv(void);
void _ZN12Unk_020238b013func_02023900Ev(void);
void _ZN12Unk_020238b013func_02023a58Ev(void);
void _ZN12Unk_020238b013func_02023bfcEv(void);
void _ZN12Unk_020254ec13func_020255fcEv(void);
void _ZN12Unk_020254ec13func_020257e8Ev(void);
void _ZN12Unk_02027a3413func_02027c24Ev(void);
void _ZN12Unk_02027a3413func_02027d5cEv(void);
void _ZN12Unk_02027a3413func_02028058EP16Unk_02027a34_Outj(void);
void _ZN12Unk_02027a3413func_020281d8EPv(void);
void _ZN12Unk_02027a3413func_0202830cEPvS0_(void);
void _ZN12Unk_020d893813func_0201cc44Ev(void);
void _ZN12Unk_020d893813func_0201cc78Ev(void);
void _ZN12Unk_020d893813func_0201ccacEv(void);
void _ZN12Unk_020d893813func_0201cce0Ev(void);
void _ZN12Unk_020d893813func_0201cd14Ev(void);
void _ZN12Unk_020d893813func_0201cd48Ev(void);
void _ZN12Unk_020d893813func_0201cd9cEv(void);
void _ZN12Unk_020d893813func_0201cdc8Ev(void);
void _ZN12Unk_020d893813func_0201cde0Ev(void);
void _ZN12Unk_020d893813func_0201cdf8Ev(void);
void _ZN12Unk_020d893813func_0201ce84Ev(void);
void _ZN12Unk_020d893813func_0201cec0Ev(void);
void _ZN12Unk_020d893813func_0201cf74Ev(void);
void _ZN12Unk_020d893813func_0201cfd8Ev(void);
void _ZN12Unk_020d893813func_0201d060Ev(void);
void _ZN12Unk_020d893813func_0201d0c4Ev(void);
void _ZN12Unk_020d893813func_0201d160Ev(void);
void _ZN12Unk_020d893813func_0201d184Ev(void);
void _ZN12Unk_020d893813func_0201d250Ev(void);
void _ZN17Unk_0202ce90_Base13func_0202ce90Ev(void);
void func_020259f8(void);
void func_02025afc(void);
void func_02025c04(void);
void func_02025c80(void);
void func_02025cb0(void);
void func_02025dbc(void);
void func_02025df8(void);
void func_02025e48(void);
void func_02025e98(void);
void func_02025f10(void);
void func_02025f44(void);
void func_02025f88(void);
void func_02025fcc(void);
extern const u8 data_020c74f0[2];
extern const u8 data_020c74f4[2];
extern const s8 data_020c74f8[2];
extern const u8 data_020c74fc[2];
extern const u8 data_020c7500[2];
extern const u8 data_020c7504[4];
extern const u8 data_020c7508[4];
extern const u8 data_020c750c[4];
extern const s8 data_020c7510[5];
extern const u8 data_020c7518[5];
extern const u8 data_020c7520[5];
extern const u8 data_020c7528[5];
extern const u8 data_020c7530[6];
extern const u8 data_020c7538[6];
extern const void *const data_020c7540[2];
extern const void *const data_020c7548[2];
extern const void *const data_020c7550[2];
extern const void *const data_020c7558[2];
extern const void *const data_020c7560[2];
extern const void *const data_020c7568[2];
extern const void *const data_020c7570[2];
extern const void *const data_020c7578[2];
extern const void *const data_020c7580[2];
extern const void *const data_020c7588[2];
extern const void *const data_020c7590[2];
extern const void *const data_020c7598[2];
extern const void *const data_020c75a0[2];
extern const void *const data_020c75a8[2];
extern const void *const data_020c75b0[2];
extern const void *const data_020c75b8[2];
extern const void *const data_020c75c0[2];
extern const void *const data_020c75c8[2];
extern const void *const data_020c75d0[2];
extern const void *const data_020c75d8[2];
extern const void *const data_020c75e0[2];
extern const void *const data_020c75e8[2];
extern const void *const data_020c75f0[2];
extern const void *const data_020c75f8[2];
extern const void *const data_020c7600[2];
extern const void *const data_020c7608[2];
extern const void *const data_020c7610[2];
extern const void *const data_020c7618[2];
extern const void *const data_020c7620[2];
extern const void *const data_020c7628[2];
extern const void *const data_020c7630[2];
extern const void *const data_020c7638[2];
extern const void *const data_020c7640[2];
extern const void *const data_020c7648[2];
extern const void *const data_020c7650[2];
extern const void *const data_020c7658[2];
extern const void *const data_020c7660[2];
extern const void *const data_020c7668[2];
extern const void *const data_020c7670[2];
extern const void *const data_020c7678[2];
extern const void *const data_020c7680[2];
extern const void *const data_020c7688[2];
extern const void *const data_020c7690[2];
extern const void *const data_020c7698[2];
extern const void *const data_020c76a0[2];
extern const void *const data_020c76a8[2];
extern const void *const data_020c76b0[2];
extern const void *const data_020c76b8[2];
extern const void *const data_020c76c0[2];
extern const void *const data_020c76c8[2];
extern const void *const data_020c76d0[2];
extern const void *const data_020c76d8[2];
extern const void *const data_020c76e0[2];
extern const void *const data_020c76e8[2];
extern const void *const data_020c76f0[2];
extern const void *const data_020c76f8[2];
extern const void *const data_020c7700[2];
extern const void *const data_020c7708[2];
extern const void *const data_020c7710[2];
extern const void *const data_020c7718[2];
extern const void *const data_020c7720[2];
extern const void *const data_020c7728[2];
extern const void *const data_020c7730[2];
extern const void *const data_020c7738[2];
extern const void *const data_020c7740[2];
extern const void *const data_020c7748[2];
extern const void *const data_020c7750[2];
extern const void *const data_020c7758[2];
extern const void *const data_020c7760[2];
extern const void *const data_020c7768[2];
extern const void *const data_020c7770[2];
extern const void *const data_020c7778[2];
extern const void *const data_020c7780[2];
extern const void *const data_020c7788[2];
extern const void *const data_020c7790[2];
extern const void *const data_020c7798[2];
extern const void *const data_020c77a0[2];
extern const void *const data_020c77a8[2];
extern const void *const data_020c77b0[2];
extern const void *const data_020c77b8[2];
extern const void *const data_020c77c0[2];
extern const void *const data_020c77c8[2];
extern const void *const data_020c77d0[2];
extern const void *const data_020c77d8[2];
extern const void *const data_020c77e0[2];
extern const void *const data_020c77e8[2];
extern const void *const data_020c77f0[2];
extern const void *const data_020c77f8[2];
extern const void *const data_020c7800[2];
extern const void *const data_020c7808[2];
extern const void *const data_020c7810[2];
extern const void *const data_020c7818[2];
extern const void *const data_020c7820[2];
extern const void *const data_020c7828[2];
extern const void *const data_020c7830[2];
extern const void *const data_020c7838[2];
extern const void *const data_020c7840[2];
extern const void *const data_020c7848[2];
extern const void *const data_020c7850[2];
extern const void *const data_020c7858[2];
extern const void *const data_020c7860[2];
extern const void *const data_020c7868[2];
extern const void *const data_020c7870[2];
extern const void *const data_020c7878[2];
extern const void *const data_020c7880[2];
extern const void *const data_020c7888[2];
extern const void *const data_020c7890[2];
extern const void *const data_020c7898[2];
extern const void *const data_020c78a0[2];
extern const void *const data_020c78a8[2];
extern const void *const data_020c78b0[2];
extern const void *const data_020c78b8[2];
extern const void *const data_020c78c0[2];
extern const void *const data_020c78c8[2];
extern const void *const data_020c78d0[2];
extern const void *const data_020c78d8[2];
extern const void *const data_020c78e0[2];
extern const void *const data_020c78e8[2];
extern const void *const data_020c78f0[2];
extern const void *const data_020c78f8[2];
extern const void *const data_020c7900[2];
extern const void *const data_020c7908[2];
extern const void *const data_020c7910[2];
extern const void *const data_020c7918[2];
extern const void *const data_020c7920[2];
extern const void *const data_020c7928[2];
extern const void *const data_020c7930[2];
extern const void *const data_020c7938[2];
extern const void *const data_020c7940[2];
extern const void *const data_020c7948[2];
extern const void *const data_020c7950[2];
extern const void *const data_020c7958[2];
extern const void *const data_020c7960[2];
extern const void *const data_020c7968[2];
extern const void *const data_020c7970[2];
extern const void *const data_020c7978[2];
extern const void *const data_020c7980[2];
extern const void *const data_020c7988[2];
extern const void *const data_020c7990[2];
extern const void *const data_020c7998[2];
extern const void *const data_020c79a0[2];
extern const void *const data_020c79a8[2];
extern const void *const data_020c79b0[2];
extern const void *const data_020c79b8[2];
extern const void *const data_020c79c0[2];
extern const void *const data_020c79c8[2];
extern const void *const data_020c79d0[2];
extern const void *const data_020c79d8[2];
extern const void *const data_020c79e0[2];
extern const void *const data_020c79e8[2];
extern const void *const data_020c79f0[2];
extern const void *const data_020c79f8[2];
extern const void *const data_020c7a00[2];
extern const void *const data_020c7a08[2];
extern const void *const data_020c7a10[2];
extern const void *const data_020c7a18[2];
extern const u8 data_020c7a20[9];
extern const u8 data_020c7a2c[9];
extern const u32 data_020c7a38[3];
extern const u8 data_020c7a44[12];
extern const u8 data_020c7a50[12];
extern const u8 data_020c7a5c[12];
extern const u32 data_020c7a68[3];
extern const u8 data_020c7a74[14];
extern const u32 data_020c7a84[4];
extern const void *const data_020c7a94[4];
extern const u32 data_020c7aa4[5];
extern const u32 data_020c7ab8[5];
extern const void *const data_020c7acc[5];
extern const void *const data_020c7ae0[5];
extern const void *const data_020c7af4[5];
extern const u32 data_020c7b08[5];
extern const u32 data_020c7b1c[6];
extern const void *const data_020c7b34[6];
extern const void *const data_020c7b4c[7];
extern const u32 data_020c7b68[8];
extern const void *const data_020c7b88[10];
extern const u32 data_020c7bb0[12];
extern const u32 data_020c7be0[14];
extern u8 data_020d7860[2];
extern char data_020d7864[2];
extern u8 data_020d7868[3];
extern void * data_020d786c[1];
extern char data_020d7870[5];
extern char data_020d7878[6];
extern char data_020d7880[6];
extern char data_020d7888[6];
extern char data_020d7890[6];
extern char data_020d7898[6];
extern char data_020d78a0[6];
extern char data_020d78a8[6];
extern char data_020d78b0[7];
extern char data_020d78b8[7];
extern char data_020d78c0[7];
extern char data_020d78c8[7];
extern char data_020d78d0[7];
extern char data_020d78d8[7];
extern char data_020d78e0[7];
extern char data_020d78e8[7];
extern void * data_020d78f0[2];
extern void * data_020d78f8[2];
extern void * data_020d7900[2];
extern void * data_020d7908[2];
extern void * data_020d7910[2];
extern void * data_020d7918[2];
extern void * data_020d7920[2];
extern void * data_020d7928[2];
extern void * data_020d7930[2];
extern void * data_020d7938[2];
extern void * data_020d7940[2];
extern void * data_020d7948[2];
extern void * data_020d7950[2];
extern void * data_020d7958[2];
extern void * data_020d7960[2];
extern void * data_020d7968[2];
extern void * data_020d7970[2];
extern char data_020d7978[8];
extern void * data_020d7980[2];
extern void * data_020d7988[2];
extern void * data_020d7990[2];
extern void * data_020d7998[2];
extern void * data_020d79a0[2];
extern char data_020d79a8[8];
extern char data_020d79b0[8];
extern void * data_020d79b8[2];
extern void * data_020d79c0[2];
extern void * data_020d79c8[2];
extern void * data_020d79d0[2];
extern void * data_020d79d8[2];
extern void * data_020d79e0[2];
extern void * data_020d79e8[2];
extern void * data_020d79f0[2];
extern void * data_020d79f8[2];
extern char data_020d7a00[8];
extern void * data_020d7a08[2];
extern char data_020d7a10[8];
extern void * data_020d7a18[2];
extern void * data_020d7a20[2];
extern void * data_020d7a28[2];
extern void * data_020d7a30[2];
extern void * data_020d7a38[2];
extern void * data_020d7a40[2];
extern void * data_020d7a48[2];
extern void * data_020d7a50[2];
extern void * data_020d7a58[2];
extern void * data_020d7a60[2];
extern void * data_020d7a68[2];
extern void * data_020d7a70[2];
extern void * data_020d7a78[2];
extern u32 data_020d7a80[2];
extern void * data_020d7a88[2];
extern void * data_020d7a90[2];
extern void * data_020d7a98[2];
extern void * data_020d7aa0[2];
extern void * data_020d7aa8[2];
extern void * data_020d7ab0[2];
extern void * data_020d7ab8[2];
extern void * data_020d7ac0[2];
extern void * data_020d7ac8[2];
extern void * data_020d7ad0[2];
extern void * data_020d7ad8[2];
extern void * data_020d7ae0[2];
extern void * data_020d7ae8[2];
extern void * data_020d7af0[2];
extern void * data_020d7af8[2];
extern void * data_020d7b00[2];
extern u32 data_020d7b08[2];
extern char data_020d7b10[8];
extern char data_020d7b18[8];
extern void * data_020d7b20[2];
extern void * data_020d7b28[2];
extern void * data_020d7b30[2];
extern void * data_020d7b38[2];
extern u32 data_020d7b40[2];
extern void * data_020d7b48[2];
extern char data_020d7b50[8];
extern void * data_020d7b58[2];
extern void * data_020d7b60[2];
extern void * data_020d7b68[2];
extern void * data_020d7b70[2];
extern void * data_020d7b78[2];
extern char data_020d7b80[8];
extern void * data_020d7b88[2];
extern void * data_020d7b90[2];
extern void * data_020d7b98[2];
extern void * data_020d7ba0[2];
extern void * data_020d7ba8[2];
extern char data_020d7bb0[8];
extern void * data_020d7bb8[2];
extern void * data_020d7bc0[2];
extern void * data_020d7bc8[2];
extern void * data_020d7bd0[2];
extern void * data_020d7bd8[2];
extern void * data_020d7be0[2];
extern void * data_020d7be8[2];
extern void * data_020d7bf0[2];
extern void * data_020d7bf8[2];
extern void * data_020d7c00[2];
extern void * data_020d7c08[2];
extern void * data_020d7c10[2];
extern void * data_020d7c18[2];
extern void * data_020d7c20[2];
extern void * data_020d7c28[2];
extern char data_020d7c30[8];
extern void * data_020d7c38[2];
extern char data_020d7c40[8];
extern void * data_020d7c48[2];
extern void * data_020d7c50[2];
extern void * data_020d7c58[2];
extern void * data_020d7c60[2];
extern void * data_020d7c68[2];
extern void * data_020d7c70[2];
extern void * data_020d7c78[2];
extern u32 data_020d7c80[2];
extern void * data_020d7c88[2];
extern void * data_020d7c90[2];
extern void * data_020d7c98[2];
extern void * data_020d7ca0[2];
extern u32 data_020d7ca8[2];
extern void * data_020d7cb0[2];
extern u32 data_020d7cb8[2];
extern char data_020d7cc0[8];
extern void * data_020d7cc8[2];
extern void * data_020d7cd0[2];
extern void * data_020d7cd8[2];
extern void * data_020d7ce0[2];
extern void * data_020d7ce8[2];
extern void * data_020d7cf0[2];
extern void * data_020d7cf8[2];
extern void * data_020d7d00[2];
extern void * data_020d7d08[2];
extern void * data_020d7d10[2];
extern void * data_020d7d18[2];
extern void * data_020d7d20[2];
extern void * data_020d7d28[2];
extern void * data_020d7d30[2];
extern u32 data_020d7d38[2];
extern void * data_020d7d40[2];
extern void * data_020d7d48[2];
extern void * data_020d7d50[2];
extern char data_020d7d58[8];
extern void * data_020d7d60[2];
extern char data_020d7d68[8];
extern void * data_020d7d70[2];
extern void * data_020d7d78[2];
extern char data_020d7d80[8];
extern char data_020d7d88[8];
extern void * data_020d7d90[2];
extern void * data_020d7d98[2];
extern void * data_020d7da0[2];
extern void * data_020d7da8[2];
extern void * data_020d7db0[2];
extern char data_020d7db8[8];
extern char data_020d7dc0[8];
extern void * data_020d7dc8[2];
extern void * data_020d7dd0[2];
extern void * data_020d7dd8[2];
extern void * data_020d7de0[2];
extern char data_020d7de8[8];
extern void * data_020d7df0[2];
extern void * data_020d7df8[2];
extern void * data_020d7e00[2];
extern void * data_020d7e08[2];
extern void * data_020d7e10[2];
extern void * data_020d7e18[2];
extern void * data_020d7e20[2];
extern void * data_020d7e28[2];
extern void * data_020d7e30[2];
extern u32 data_020d7e38[2];
extern void * data_020d7e40[2];
extern u32 data_020d7e48[2];
extern void * data_020d7e50[2];
extern void * data_020d7e58[2];
extern char data_020d7e60[8];
extern void * data_020d7e68[2];
extern void * data_020d7e70[2];
extern u32 data_020d7e78[2];
extern void * data_020d7e80[2];
extern void * data_020d7e88[2];
extern char data_020d7e90[8];
extern void * data_020d7e98[2];
extern void * data_020d7ea0[2];
extern void * data_020d7ea8[2];
extern void * data_020d7eb0[2];
extern char data_020d7eb8[8];
extern void * data_020d7ec0[2];
extern void * data_020d7ec8[2];
extern void * data_020d7ed0[2];
extern void * data_020d7ed8[2];
extern void * data_020d7ee0[2];
extern void * data_020d7ee8[2];
extern void * data_020d7ef0[2];
extern void * data_020d7ef8[2];
extern char data_020d7f00[8];
extern void * data_020d7f08[2];
extern void * data_020d7f10[2];
extern void * data_020d7f18[2];
extern void * data_020d7f20[2];
extern void * data_020d7f28[2];
extern void * data_020d7f30[2];
extern void * data_020d7f38[2];
extern void * data_020d7f40[2];
extern void * data_020d7f48[2];
extern void * data_020d7f50[2];
extern void * data_020d7f58[2];
extern void * data_020d7f60[2];
extern char data_020d7f68[8];
extern void * data_020d7f70[2];
extern void * data_020d7f78[2];
extern void * data_020d7f80[2];
extern char data_020d7f88[8];
extern void * data_020d7f90[2];
extern void * data_020d7f98[2];
extern void * data_020d7fa0[2];
extern void * data_020d7fa8[2];
extern char data_020d7fb0[8];
extern char data_020d7fb8[8];
extern char data_020d7fc0[8];
extern void * data_020d7fc8[2];
extern void * data_020d7fd0[2];
extern void * data_020d7fd8[2];
extern void * data_020d7fe0[2];
extern void * data_020d7fe8[2];
extern void * data_020d7ff0[2];
extern char data_020d7ff8[8];
extern void * data_020d8000[2];
extern void * data_020d8008[2];
extern void * data_020d8010[2];
extern void * data_020d8018[2];
extern char data_020d8020[8];
extern char data_020d8028[8];
extern char data_020d8030[9];
extern char data_020d803c[9];
extern char data_020d8048[9];
extern char data_020d8054[9];
extern char data_020d8060[9];
extern char data_020d806c[9];
extern char data_020d8078[9];
extern char data_020d8084[9];
extern char data_020d8090[9];
extern char data_020d809c[9];
extern char data_020d80a8[9];
extern char data_020d80b4[9];
extern char data_020d80c0[9];
extern char data_020d80cc[9];
extern char data_020d80d8[9];
extern char data_020d80e4[9];
extern char data_020d80f0[9];
extern char data_020d80fc[9];
extern char data_020d8108[9];
extern char data_020d8114[9];
extern char data_020d8120[9];
extern char data_020d812c[9];
extern char data_020d8138[9];
extern char data_020d8144[9];
extern char data_020d8150[9];
extern char data_020d815c[9];
extern char data_020d8168[9];
extern char data_020d8174[9];
extern char data_020d8180[9];
extern char data_020d818c[9];
extern char data_020d8198[9];
extern char data_020d81a4[9];
extern char data_020d81b0[9];
extern char data_020d81bc[9];
extern char data_020d81c8[9];
extern char data_020d81d4[9];
extern char data_020d81e0[9];
extern char data_020d81ec[9];
extern char data_020d81f8[9];
extern u8 data_020d8204[9];
extern char data_020d8210[9];
extern char data_020d821c[9];
extern char data_020d8228[9];
extern char data_020d8234[9];
extern char data_020d8240[9];
extern char data_020d824c[9];
extern char data_020d8258[9];
extern char data_020d8264[9];
extern char data_020d8270[9];
extern char data_020d827c[9];
extern char data_020d8288[9];
extern char data_020d8294[10];
extern char data_020d82a0[10];
extern char data_020d82ac[10];
extern char data_020d82b8[10];
extern char data_020d82c4[10];
extern char data_020d82d0[10];
extern char data_020d82dc[10];
extern char data_020d82e8[10];
extern char data_020d82f4[10];
extern char data_020d8300[10];
extern char data_020d830c[10];
extern char data_020d8318[10];
extern char data_020d8324[10];
extern char data_020d8330[10];
extern char data_020d833c[10];
extern char data_020d8348[10];
extern char data_020d8354[10];
extern char data_020d8360[10];
extern char data_020d836c[10];
extern char data_020d8378[10];
extern char data_020d8384[10];
extern char data_020d8390[10];
extern char data_020d839c[10];
extern char data_020d83a8[10];
extern char data_020d83b4[10];
extern char data_020d83c0[10];
extern char data_020d83cc[10];
extern char data_020d83d8[10];
extern char data_020d83e4[10];
extern char data_020d83f0[10];
extern char data_020d83fc[10];
extern char data_020d8408[10];
extern char data_020d8414[10];
extern char data_020d8420[10];
extern char data_020d842c[10];
extern char data_020d8438[10];
extern char data_020d8444[11];
extern char data_020d8450[11];
extern char data_020d845c[11];
extern char data_020d8468[11];
extern char data_020d8474[11];
extern char data_020d8480[11];
extern char data_020d848c[11];
extern char data_020d8498[11];
extern char data_020d84a4[11];
extern char data_020d84b0[11];
extern char data_020d84bc[11];
extern char data_020d84c8[11];
extern char data_020d84d4[11];
extern char data_020d84e0[11];
extern char data_020d84ec[11];
extern char data_020d84f8[11];
extern char data_020d8504[11];
extern char data_020d8510[11];
extern char data_020d851c[11];
extern char data_020d8528[11];
extern char data_020d8534[11];
extern char data_020d8540[11];
extern char data_020d854c[11];
extern char data_020d8558[11];
extern char data_020d8564[11];
extern char data_020d8570[11];
extern char data_020d857c[11];
extern char data_020d8588[11];
extern char data_020d8594[11];
extern char data_020d85a0[11];
extern char data_020d85ac[11];
extern char data_020d85b8[11];
extern char data_020d85c4[11];
extern char data_020d85d0[11];
extern u8 data_020d85dc[11];
extern u8 data_020d85e8[11];
extern u8 data_020d85f4[11];
extern char data_020d8600[11];
extern char data_020d860c[11];
extern char data_020d8618[11];
extern char data_020d8624[11];
extern char data_020d8630[11];
extern char data_020d863c[12];
extern char data_020d8648[12];
extern char data_020d8654[12];
extern char data_020d8660[12];
extern char data_020d866c[12];
extern char data_020d8678[12];
extern char data_020d8684[12];
extern u32 data_020d8690[3];
extern char data_020d869c[12];
extern char data_020d86a8[12];
extern char data_020d86b4[12];
extern char data_020d86c0[12];
extern char data_020d86cc[12];
extern char data_020d86d8[12];
extern char data_020d86e4[12];
extern char data_020d86f0[12];
extern char data_020d86fc[12];
extern char data_020d8708[12];
extern char data_020d8714[12];
extern char data_020d8720[12];
extern char data_020d872c[12];
extern char data_020d8738[12];
extern char data_020d8744[13];
extern char data_020d8754[13];
extern char data_020d8764[13];
extern char data_020d8774[13];
extern char data_020d8784[13];
extern char data_020d8794[13];
extern char data_020d87a4[14];
extern char data_020d87b4[14];
extern void * data_020d87c4[5];
extern void * data_020d87d8[5];
extern void * data_020d87ec[5];
extern void * data_020d8800[5];
extern void * data_020d8814[5];
extern void * data_020d8828[5];
extern void * data_020d883c[5];
extern void * data_020d8850[5];
extern void * data_020d8864[5];
extern void * data_020d8878[5];
extern void * data_020d888c[6];
extern void * data_020d88a4[7];
extern void * data_020d88c0[7];
extern void * data_020d88dc[7];
extern void * data_020d88f8[7];
extern void * data_020d8914[7];
extern u8 data_021be5e0[2];
extern u8 data_021be5e4[3];
extern u32 data_021be60c[2];
extern u32 data_021be614[2];
extern u32 data_021be61c[2];
extern u8 data_021be630[14];
extern Unk_021be8c0 data_021be650[1];
extern Unk_021be8c0 data_021be668[1];
extern u32 data_021be680[8];
extern u32 data_021be6a0[8];
extern u32 data_021be6c0[8];
extern Unk_021be8c0 data_021be730[2];
extern Unk_021be8c0 data_021be7e0[3];
extern Unk_021be8c0 data_021be8c0[4];
extern Unk_021be8c0 data_021be920[4];
extern Unk_021be8c0 data_021bea78[6];
extern Unk_021be8c0 data_021beb08[7];
extern Unk_021be8c0 data_021bebb0[8];
extern Unk_021be8c0 data_021bec70[8];
extern Unk_021be8c0 data_021bed30[9];
extern Unk_021be8c0 data_021bee08[9];
extern Unk_020dd458 data_021beee0;
extern Unk_021be8c0 data_021befd4[13];
extern Unk_021be8c0 data_021bf10c[17];
extern Unk_021be8c0 data_021bf2a4[26];
extern Unk_021be8c0 data_021bf514[47];
}
}

namespace nZ {
extern "C" {
void * data_020d7b60[2] = {
    (void *)_ZN12Unk_0202134013func_020218c4Ev, 0,
};
const void *const data_020c7698[2] = {
    (void *)data_020d8378, (void *)0x2,
};
void * data_020d7d98[2] = {
    (void *)_ZN12Unk_0201d2d013func_0202a994Ev, 0,
};
const void *const data_020c7738[2] = {
    (void *)data_020d8660, (void *)0x6,
};
void * data_020d7e50[2] = {
    (void *)_ZN12Unk_0201f7d013func_0201f90cEv, 0,
};
const void *const data_020c76a8[2] = {
    (void *)data_020d8360, (void *)0x1,
};
char data_020d81e0[9] = "ai_rain1";
char data_020d8558[11] = "tsu_fu_act";
void * data_020d7e00[2] = {
    (void *)_ZN12Unk_0201d2d013func_020221bcEv, 0,
};
const void *const data_020c7958[2] = {
    (void *)data_020d7f68, (void *)0x3,
};
char data_020d7b10[8] = "ai_tire";
char data_020d8564[11] = "q04_con1_2";
u32 data_020d7c80[2] = {
    0x00000000, 0x00000003,
};
void * data_020d7bc8[2] = {
    (void *)_ZN12Unk_02027a3413func_02028058EP16Unk_02027a34_Outj, 0,
};
void * data_020d7c10[2] = {
    (void *)_ZN17Unk_0202ce90_Base13func_0202ce90Ev, 0,
};
const void *const data_020c77b0[2] = {
    (void *)data_020d7c30, (void *)0x3,
};
char data_020d7b50[8] = "ai_fall";
const void *const data_020c7648[2] = {
    (void *)data_020d81d4, (void *)0x5,
};
char data_020d7d68[8] = "q02_pay";
void * data_020d7e18[2] = {
    (void *)_ZN12Unk_0201d2d013func_0202235cEv, 0,
};
void * data_020d7c90[2] = {
    (void *)_ZN12Unk_02027a3413func_02028058EP16Unk_02027a34_Outj, 0,
};
void * data_020d7a40[2] = {
    (void *)_ZN12Unk_0202134013func_02021340EPPvi, 0,
};
}
}

namespace F30 {
extern "C" void func_0202e214(u32 a, u8 *src, s32 n, s32 m) {
    void *h = _ZN12Unk_020d771413func_02015a5cEv(a);
    _ZN12Unk_020aa3b813func_020aa680Eii(h, n, m);
    s32 zero = 0;
    u8 buf[2];
    for (s32 i = 0; i < n; src++, i++) {
        buf[0] = *src;
        buf[1] = 0xff;
        _ZN12Unk_020aa3b813func_020aa638EiPKhiS1_PKci(h, i, buf, zero, buf + 1, zero, zero);
    }
    _ZN12Unk_020aa3b813func_020aa608Ev(h);
}
}

namespace F30 {
extern "C" BOOL func_0202e1cc(u32 a, BOOL flag) {
    void *o = func_0209750c();
    if (o == NULL) {
        return FALSE;
    }
    void *h = _ZN12Unk_0209865c13func_02098698Ev(o);
    BOOL r = TRUE;
    if (_ZN12Unk_020877e013func_02087838Ej(h, a) == 0) {
        r = FALSE;
    }
    if (flag) {
        _ZN12Unk_020877e013func_02087804Ej(h, a);
    }
    if (r) {
        return TRUE;
    }
    return FALSE;
}
}

namespace F30 {
extern "C" BOOL func_0202e18c(void *unused, u8 *p, u32 mode) {
    Unk_0202e18c_Buf buf;
    buf.unk_00 = 0;
    buf.unk_04 = 0;
    func_0209d498(&buf);
    u8 *b = (u8 *)&buf;
    if (func_020874e8(b[5], b[4], b[3], p)) {
        if (((u32)(*p << 30) >> 30) == mode) {
            return TRUE;
        }
    }
    return FALSE;
}
}

namespace F30 {
extern "C" void func_0202e174(void *unused, u32 a) {
    func_020877a0(_ZN12Unk_0209865c13func_020986b0Ev(func_0209750c()), a);
}
}

namespace F30 {
extern "C" BOOL func_0202e148() {
    void *g = data_020cbb18;
    if (_ZN12Unk_020cbb1813func_02072e44Ev(g)) {
        if (_ZN12Unk_020cbb1813func_020729ccEj(g, 0) == 0) {
            return FALSE;
        }
    }
    return TRUE;
}
}

Unk_020d89c8::Unk_020d89c8() {
    using namespace F30;}

Unk_020d89c8::~Unk_020d89c8() {
    using namespace F30;}

void Unk_020d89c8::func_0202dcd8() {
    using namespace F30;
    if (((unk_ea & 0xf000) >> 12) == 0xe) {
        unk_82c = func_0207bf60(data_021dfd8c, func_0201bdec());
        if (unk_82c != NULL) {
            unk_830 = func_0207e310(unk_82c);
        } else {
            unk_830 = NULL;
        }
    }
}

s32 Unk_020d89c8::func_0202dc9c() {
    using namespace F30;
    s32 r = -1;
    if (unk_82c != NULL) {
        if (_ZN12Unk_02002fc813func_020030b4Ev(_ZN12Unk_0208086013func_020805c4Ev(unk_82c)) == 1) {
            r = func_02002ff8(_ZN12Unk_0208086013func_020805c4Ev(unk_82c));
        }
    }
    return r;
}

void Unk_020d89c8::vfunc_74(u32 a) {
    using namespace F30;
    if (unk_82c != NULL) {
        _ZN12Unk_02002fc813func_02002fc8Ej(_ZN12Unk_0208086013func_020805c4Ev(unk_82c), a);
    }
}

u32 Unk_020d89c8::vfunc_78() {
    using namespace F30;
    u32 r = 2;
    if (unk_82c != NULL) {
        r = _ZN12Unk_02002fc813func_02003070Ev(_ZN12Unk_0208086013func_020805c4Ev(unk_82c));
    }
    return r;
}

BOOL Unk_020d89c8::vfunc_7c() {
    using namespace F30; return TRUE; }

void Unk_020d89c8::vfunc_80() {
    using namespace F30;}

u16 Unk_020d89c8::vfunc_84() {
    using namespace F30;
    if (((unk_ea & 0xf000) >> 12) == 0xe && unk_82c != NULL) {
        return func_02002ff8(_ZN12Unk_0208086013func_020805c4Ev(unk_82c));
    }
    return 0xffff;
}

u8 *Unk_020d89c8::vfunc_6c() {
    using namespace F30;
    s32 v = func_0202dc9c();
    if (v == -1) {
        v = 0;
    }
    func_020639e8(data_021be680, ((u8 *)"npc/model/%d/%d.nsbtx"), v & 0xf8, v);
    return data_021be680;
}

u8 *Unk_020d89c8::vfunc_70() {
    using namespace F30;
    s32 v = func_0202dc9c();
    if (v == -1) {
        v = 0;
    }
    func_020639e8(data_021be6a0, ((u8 *)"npc/model/%d/%d.nsbmd"), v & 0xf8, v);
    return data_021be6a0;
}

void *Unk_020d89c8::vfunc_64() {
    using namespace F30; return unk_82c; }

void Unk_020d89c8::vfunc_a4(u32 a, s32 b) {
    using namespace F30;
    if (unk_838.func_0201c6d4()) {
        unk_838.func_0201c614(a, b);
    }
}

BOOL Unk_020d89c8::vfunc_a8() {
    using namespace F30; return TRUE; }

BOOL Unk_020d89c8::vfunc_ac() {
    using namespace F30; return FALSE; }

BOOL Unk_020d89c8::vfunc_b0() {
    using namespace F30; return FALSE; }

void Unk_020d89c8::vfunc_88(u16 *p, BOOL flag) {
    using namespace F30;
    BOOL in = FALSE;
    u16 v = *p;
    if (v >= 0x11a8 && v <= 0x12a7) {
        in = TRUE;
    }
    if (in || (v >= 0x12a8 && v <= 0x12af)) {
        void *o = vfunc_64();
        unk_64c.func_0202d664(this, p);
        if (o != NULL) {
            _ZN12Unk_0207fb8013func_0207fd90EPt(o, p);
            if (flag) {
                func_02077450(o, p);
            }
        }
    }
}

BOOL Unk_020d89c8::vfunc_04() {
    using namespace F30;
    if (!Unk_020d77a4::vfunc_04()) {
        return FALSE;
    }
    func_0202dcd8();
    unk_644 = 0;
    unk_680.unk_1a0 = func_02063b8c(2);
    unk_838.func_0201c704();
    _ZN12Unk_020d893813func_0201c790Ev(this);
    return TRUE;
}

BOOL Unk_020d89c8::func_0202da64() {
    using namespace F30;
    u32 t = (u32)unk_824.func_0208202c();
    if (!unk_ec.func_02054b38(func_02077b04(t))) {
        return FALSE;
    }
    if (unk_ec.func_02053a14(func_02077b04(t))) {
        return TRUE;
    }
    return FALSE;
}

namespace F29 {
BOOL Unk_020d89c8::vfunc_00() {
    u16 h = 0x11a8;
    if (!_ZN12Unk_020d77a48vfunc_00Ev(this)) {
        return FALSE;
    }
    if (!_ZN12Unk_020e06dc13func_0208202cEv((u8 *)this + 0x824)) {
        if (!_ZN12Unk_020e071813func_02082140Ev((u8 *)this + 0x824)) {
            return FALSE;
        }
        if (!_ZN12Unk_020d89c813func_0202da64Ev(this)) {
            return FALSE;
        }
    }
    if (!_ZN12Unk_02019dd813func_02019cacEP18Unk_02019cac_Owner((u8 *)this + 0x2ac, this)) {
        return FALSE;
    }
    if (!_ZN12Unk_0201635013func_020162c4EP16Unk_02015fe0_Obji((u8 *)this + 0x334, this, data_020c6cf0)) {
        return FALSE;
    }
    _ZN12Unk_0201985813func_020197acEPhiiiisii((u8 *)this + 0x564, this, 0, 1, 0, 0, 0, 0, 0);
    if (unk_82c) {
        h = *_ZN12Unk_0207fb8013func_0207fd9cEv(unk_82c);
    }
    if (!((Unk_0202d648 *)((u8 *)this + 0x64c))->func_0202d7a4(this, &h)) {
        return FALSE;
    }
    _ZN12Unk_020e0cf413func_02088c98EPviijjjhi((u8 *)this + 0x4cc, this, 0x1000, 0x2000, 8, 0x2fc, 2, (u8)_ZN12Unk_020d77a413func_0201bdecEv(this), 0x1000);
    if (func_0208162c(this, (u8 *)this + 0xea)) {
    } else {
        return FALSE;
    }
    return TRUE;
}
}

namespace F29 {
BOOL Unk_020d89c8::vfunc_10() {
    if (!_ZN12Unk_020d96708vfunc_10Ev(this)) {
        return FALSE;
    }
    func_0208161c((u8 *)this + 0xea);
    return TRUE;
}
}

namespace F29 {
BOOL Unk_020d89c8::vfunc_0c() {
    if (!_ZN12Unk_020d77a48vfunc_0cEv(this)) {
        return FALSE;
    }
    _ZN12Unk_020e071813func_0208211cEv((u8 *)this + 0x824);
    ((Unk_0202d648 *)((u8 *)this + 0x64c))->func_0202d64c();
    _ZN12Unk_0201c07813func_0201c6e4Ev((u8 *)this + 0x838);
    return TRUE;
}
}

namespace F29 {
void Unk_020d89c8::func_0202d8e0() { unk_834 = 1; }
}

namespace F29 {
void Unk_020d89c8::func_0202d8d4() { unk_834 = 0; }
}

namespace F29 {
BOOL Unk_020d89c8::func_0202d8c0() {
    if (unk_834) {
        return TRUE;
    }
    return FALSE;
}
}

namespace F29 {
extern "C" void func_0202d864(u16 *out, Unk_020d8938 *obj) {
    *out = 0xfff1;
    if (obj->vfunc_64() != 0) {
        if (_ZN12Unk_02002fc813func_020030b4Ev(_ZN12Unk_0208086013func_020805c4Ev(obj->vfunc_64())) != 0) {
            if (func_0207e310(obj->vfunc_64()) != 0) {
                *out = *func_0207850c(func_0207e310(obj->vfunc_64()));
            }
        }
    }
}
}

void Unk_020d8938::func_0202d814(void *arg) {
    using namespace F29;
    if (vfunc_64() != 0) {
        if (_ZN12Unk_02002fc813func_020030b4Ev(_ZN12Unk_0208086013func_020805c4Ev(vfunc_64())) != 0) {
            if (func_0207e310(vfunc_64()) != 0) {
                func_02078504(func_0207e310(vfunc_64()), arg);
            }
        }
    }
}

namespace F29 {
Unk_0202d648 *Unk_0202d648::func_0202d7f4() {
    _ZN12Unk_020e45e0C1Ev(this);
    unk_28 = 0xfff1;
    _ZN12Unk_020e0740C1Ev(unk_2c);
    return this;
}
}

namespace F29 {
Unk_0202d648 *Unk_0202d648::func_0202d7e0() {
    _ZN12Unk_020e0740D1Ev(unk_2c);
    return this;
}
}

namespace F29 {
BOOL Unk_0202d648::func_0202d7a4(Unk_020d89c8 *parent, u16 *id) {
    unk_28 = 0xffff;
    if (!_ZN12Unk_020e071813func_02082140Ev(unk_2c)) {
        return FALSE;
    }
    if (func_0202d664(parent, id)) {
        return TRUE;
    }
    return FALSE;
}
}

namespace F29 {
void *Unk_0202d648::func_0202d71c(Unk_020d89c8 *parent, u16 *id) {
    void *r4 = _ZN12Unk_020e076813func_02081f44Ev(unk_2c);
    void *r6 = 0;
    if (r4) {
        BOOL in = FALSE;
        if (*id >= 0x11a8 && *id <= 0x12a7) {
            in = TRUE;
        }
        if (in == 1) {
            _ZN12Unk_0205ca9413func_0205ca94EPtiii(r4, id, 0, 1, 1);
        } else if (parent->unk_82c) {
            func_0205ca2c(r4, _ZN12Unk_0208086013func_020805b8Ev(parent->unk_82c));
        } else {
            _ZN12Unk_0205ca9413func_0205ca94EPtiii(r4, id, 0, 1, 1);
        }
        if (func_0205c91c(r4)) {
            r6 = func_0203c6a8();
        }
    }
    return r6;
}
}

namespace F29 {
BOOL Unk_0202d648::func_0202d664(Unk_020d89c8 *parent, u16 *id) {
    BOOL result = FALSE;
    BOOL same;
    void *p;
    if (func_0204b2d4(id)) {
        u32 a = func_0204b25c(id);
        if (a == func_0204b25c(&unk_28)) {
            same = TRUE;
        } else {
            same = FALSE;
        }
    } else {
        if (*id == unk_28) {
            same = TRUE;
        } else {
            same = FALSE;
        }
    }
    if (!same || (Unk_0202d664_Range(id, 0x12a8, 0x12af) && Unk_0202d664_Range(&unk_28, 0x12a8, 0x12af))) {
        p = func_0202d71c(parent, id);
        if (p) {
            result = _ZN12Unk_020e45e013func_020b8840EPvjS0_jj(this, parent->unk_148, data_020d786c, p, 0, 0);
            unk_28 = *id;
        }
    }
    return result;
}
}

namespace F29 {
void Unk_0202d648::func_0202d64c() {
    _ZN12Unk_020e45e013func_020b8930Ev(this);
    _ZN12Unk_020e071813func_0208211cEv(unk_2c);
}
}

namespace F29 {
u16 *Unk_0202d648::func_0202d648() { return &unk_28; }
}

Unk_020d8938::Unk_020d8938() {
    using namespace F29;
    unk_120 = 0xfff1;
    unk_198 = 0xfff1;
}

Unk_020d8938::~Unk_020d8938() {
    using namespace F29;
}

void Unk_020d8938::func_0202d388(Unk_020d8938_Parent *owner, u32 idx) {
    using namespace F29;
    void *r6;
    if (func_0209750c() != 0) {
        r6 = _ZN12Unk_0209865c13func_0209888cEv(func_0209750c());
    } else {
        r6 = 0;
    }
    vfunc_08();
    unk_fc = owner;
    if (idx < 0x11) {
        func_0202d1d4(&data_021bf10c[idx]);
    }
    unk_c4 = __ptmf_null;
    unk_cc = __ptmf_null;
    Unk_020d8938_Fn t = __ptmf_null;
    unk_d4 = t;
    unk_dc = t;
    unk_e4 = t;
    unk_ec = t;
    unk_f4 = t;
    unk_120 = 0xfff1;
    unk_134 = 0;
    unk_124 = -1;
    unk_128 = 0;
    unk_12c = -1;
    unk_130 = 0;
    if (r6 != 0 && unk_fc != 0) {
        unk_124 = func_0207f7cc(unk_fc->unk_82c, r6);
        unk_128 = func_0207f86c(unk_fc->unk_82c, unk_124);
    }
    _ZN12Unk_020d893813func_0201c8fcEv(this);
    unk_150 = 0;
    unk_154 = 0;
    unk_155 = 0;
    unk_158 = 0;
    unk_15c = 0;
    unk_160 = 0;
    unk_164 = 0;
    Unk_020d8938_Fn t2 = __ptmf_null;
    unk_168 = t2;
    unk_170 = t2;
    unk_178 = t2;
    unk_180 = t2;
    unk_188 = t2;
    unk_198 = 0xfff1;
    unk_19a = 0;
    unk_19c = 0;
    func_02115fb4(data_021be6c0, 0, 0x20);
    unk_138 = 0;
}

void Unk_020d8938::vfunc_80() {
    using namespace F29;
    _ZN12Unk_020d77148vfunc_80Ev(this);
    if (unk_ec) {
        (this->*unk_ec)();
    }
}

void Unk_020d8938::func_0202d33c(Unk_020d8938_Fn fn) {
    using namespace F29; unk_d4 = fn; }

void Unk_020d8938::func_0202d328(Unk_020d8938_Fn fn) {
    using namespace F29; unk_dc = fn; }

void Unk_020d8938::vfunc_84() {
    using namespace F29;
    Unk_020d8938_Fn t;
    if (unk_d4) {
        (this->*unk_d4)();
        t = __ptmf_null;
        unk_d4 = t;
        if (unk_dc) {
            unk_d4 = unk_dc;
        }
        unk_dc = t;
    }
}

void Unk_020d8938::func_0202d294(Unk_020d8938_Fn fn) {
    using namespace F29; unk_e4 = fn; }

void Unk_020d8938::vfunc_7c() {
    using namespace F29;
    if (unk_e4) {
        (this->*unk_e4)();
        unk_e4 = __ptmf_null;
    }
}

void Unk_020d8938::func_0202d20c() {
    using namespace F29;
    unk_ac = __ptmf_null;
    Unk_020d8938_Fn t = __ptmf_null;
    unk_b4 = t;
    unk_bc = t;
}

void Unk_020d8938::func_0202d1d4(Unk_020d8938_Tbl *t) {
    using namespace F29;
    unk_ac = t->a;
    unk_b4 = t->b;
    unk_bc = t->c;
}

void Unk_020d8938::func_0202d1c0(Unk_020d8938_Fn fn) {
    using namespace F29; unk_cc = fn; }

namespace F29 {
extern "C" void func_0202d184(void *self, void *buf, u8 *out, s32 a3, u8 s0, u32 s1, u8 s2, s32 s3, u8 s4) {
    u32 k = s2;
    u8 t = k * s3;
    if (s4) {
        k = s4;
    }
    func_0200303c(buf, a3, s1, s0);
    *out = t + func_02063b8c(k);
}
}

void *Unk_020d8938::func_0202d158(s32 idx) {
    using namespace F29;
    switch (idx) {
    case 0:
        return unk_fc;
    case 1:
        if (unk_fc) {
            return (void *)_ZN12Unk_020d893813func_0201c7f8Ev(unk_fc);
        }
    }
    return 0;
}

u32 Unk_020d8938::vfunc_68() {
    using namespace F29;
    u32 r = 0;
    Unk_020d8938_Parent *p = (Unk_020d8938_Parent *)func_0202d158(_ZN12Unk_020d771413func_02015708Ev());
    if (p) {
        r = (u32)p->unk_82c;
    }
    return r;
}

void Unk_020d8938::func_0202d120(u32 v) {
    using namespace F29; unk_150 = v; }

u32 Unk_020d8938::func_0202d114() {
    using namespace F29; return unk_150; }

void Unk_020d8938::vfunc_78(void *arg) {
    using namespace F29;
    if (unk_ac) {
        (this->*reinterpret_cast<Unk_020d8938_ArgFn>(unk_ac))(arg);
    }
    return;
}

namespace F28 {
extern "C" void func_0202d048(u8 *self, s32 *pa, s32 *pb, s32 c, s32 d) {
    if (self[0x138] == 0) {
        if (d == 0) {
            if (func_0209750c() != 0) {
                d = _ZN12Unk_0209865c13func_0209888cEv(func_0209750c());
            }
        }
        if (d != 0 && c != 0) {
            if (*pa == 0) {
                *pb = func_0207f7cc(c, d);
                if (*pb == -1) {
                    *pb = func_0207f5a4(c);
                    if (*pb != -1) {
                        *pa = func_0207f86c(c);
                        func_02080f4c(*pa, d, 0, 0);
                        func_02077a1c(c, *pb);
                    }
                }
            } else {
                func_02080ecc(*pa, d, 0, 0);
                func_0207799c(c, *pb);
            }
        }
    }
}
}

namespace F28 {
s32 Unk_020d8938::vfunc_60() {
    return _ZN12Unk_0201425813func_020143fcEh(this, 0);
}
}

namespace F28 {
void Unk_020d8938::vfunc_20() {
    Unk_0202cf9c_Scene *s = func_02015738();
    if (s != NULL) {
        s->vfunc_a4(0, 0);
    }
}
}

namespace F28 {
void Unk_020d8938::vfunc_24(u32 a) {
    Unk_0202cf9c_Scene *s = func_02015738();
    if (s != NULL) {
        s->vfunc_a4(1, a);
    }
}
}

namespace F28 {
void Unk_020d8938::vfunc_28(u32 a) {
    Unk_0202cf9c_Scene *s = func_02015738();
    if (s != NULL) {
        s->vfunc_a4(2, a);
    }
}
}

namespace F28 {
void Unk_020d8938::vfunc_2c(u32 a) {
    Unk_0202cf9c_Scene *s = func_02015738();
    if (s != NULL) {
        s->vfunc_a4(3, a);
    }
}
}

namespace F28 {
void Unk_020d8938::vfunc_30(u32 a) {
    Unk_0202cf9c_Scene *s = func_02015738();
    if (s != NULL) {
        s->vfunc_a4(4, a);
    }
}
}

namespace F28 {
void Unk_020d8938::vfunc_70() {
    if (unk_f4 != 0) {
        (this->*unk_f4)();
        unk_f4 = *(Unk_020d8938_Fn *)__ptmf_null;
    }
}
}

namespace F28 {
extern "C" s32 func_0202cee4(void *p, u16 *q) {
    u16 *e = _ZN12Unk_02097d1c13func_02097f6cEi(p, 0);
    s32 i;
    BOOL v;
    for (i = 0; i < 15; i++) {
        if (_ZN12Unk_02097d1c13func_02097eb0Ei(p, i) == 2) {
            if (func_0204b2d4(e) != 0) {
                v = (func_0204b25c(e) == func_0204b25c(q)) ? TRUE : FALSE;
            } else {
                v = (e[0] == q[0]) ? TRUE : FALSE;
            }
            if (v) {
                return i;
            }
        }
        e++;
    }
    return -1;
}
}

namespace F28 {
extern "C" void *func_0202ceb0(void *p) {
    u8 *e = (u8 *)_ZN12Unk_02097d1c13func_02097e68Ei(p, 0);
    void *r = NULL;
    s32 i;
    for (i = 0; i < 10; i++) {
        if ((u8)(_ZN12Unk_0206555413func_02065578Ev(e) + 0xf9) <= 1) {
            r = e;
            break;
        }
        e += 0xf4;
    }
    return r;
}
}

namespace F28 {
void Unk_0202ce90_Base::func_0202ce90() {
    _ZN12Unk_0201985813func_02019614Ejt(unk_fc->unk_564, 2, data_020c6cc8);
}
}

namespace F28 {
extern "C" s32 func_0202ce44(u8 *p, s32 n) {
    s32 result = -1;
    u8 sum = 0;
    s32 i;
    u8 r;
    for (i = 0; i < n; i++) {
        sum = sum + p[i];
    }
    if (sum != 0) {
        r = func_02063b8c(sum);
        sum = 0;
        for (i = 0; i < n; i++) {
            sum = sum + p[i];
            if (r < sum) {
                result = i;
                break;
            }
        }
    }
    return result;
}
}

namespace F28 {
extern "C" void func_0202cdf4(u16 *out) {
    Unk_0202cd5c_Obj o1, o2;
    u32 zero;
    _ZN12Unk_0206338013func_0206338cEii(&o1, data_020c7a84[func_02063b8c(4)], 0);
    o2.v[0] = o1.v[0];
    o2.v[1] = o1.v[1];
    zero = 0;
    func_02062f94(out, &o2, zero, zero, 1, 1, 0);
    func_02063388(&o2);
    func_02063388(&o1);
}
}

namespace F28 {
extern "C" void func_0202cd5c(u16 *out, u32 *tbl, s32 idx, s32 c) {
    u16 h[2];
    u32 len;
    Unk_0202cd5c_Obj o1, o3, o2, o4;
    s32 r;
    r = func_02063b8c(idx);
    *out = 0xfff1;
    tbl = tbl + r * 2;
    len = tbl[1];
    _ZN12Unk_0206338013func_0206338cEii(&o1, tbl[0], tbl[1]);
    o2.v[0] = o1.v[0];
    o2.v[1] = o1.v[1];
    func_02062f94(&h[0], &o2, c, 0, 1, 1, (u32)&len);
    *out = h[0];
    func_02063388(&o2);
    if (*out == 0xfff1) {
        _ZN12Unk_0206338013func_0206338cEii(&o3, tbl[0], len);
        o4.v[0] = o3.v[0];
        o4.v[1] = o3.v[1];
        func_02062f44(&h[1], &o4);
        *out = h[1];
        func_02063388(&o4);
        func_02063388(&o3);
    }
    func_02063388(&o1);
}
}

namespace F28 {
extern "C" void func_0202cd44(u16 *out, s32 c) {
    func_0202cd5c(out, data_020c7b1c, 3, c);
}
}

namespace F28 {
extern "C" void func_0202cd2c(u16 *out, s32 c) {
    func_0202cd5c(out, data_020c7b68, 4, c);
}
}

namespace F28 {
extern "C" void func_0202cb34(s32 *out, s32 *cnt) {
    Unk_0202cb34_Grid *g;
    u8 flags;
    s32 j, i;
    u16 *v;
    g = func_0204da0c();
    flags = 0;
    *cnt = 0;
    if (g != NULL) {
        Unk_0202cb34_Size sz;
        Unk_0202cb34_GetSize(g, &sz);
        Unk_0202cb34_Size pos;
        for (pos.y = 1; pos.y < sz.y - 1; pos.y++) {
            for (pos.x = 1; pos.x < sz.x - 1; pos.x++) {
                u8 *cell = Unk_0202cb34_Cell(g, pos.x, pos.y);
                if (cell != NULL) {
                    v = func_02037558(cell, 0, 0, 0);
                    if (v != NULL) {
                        for (i = 0; i < 16; i++) {
                            for (j = 0; j < 16; j++) {
                                if (Unk_0202cb34_R(v, 0xc8, 0xcf) == 1) {
                                    if ((flags & 2) != 0) {
                                        flags |= 2;
                                    }
                                } else if (Unk_0202cb34_Check(v) == 1) {
                                    if ((flags & 4) != 0) {
                                        flags |= 4;
                                    }
                                }
                                if (flags == 6) {
                                    break;
                                }
                                v++;
                            }
                            if (flags == 6) {
                                break;
                            }
                        }
                    }
                }
                if (flags == 6) {
                    break;
                }
            }
            if (flags == 6) {
                break;
            }
        }
    }
    for (i = 0; i < 4; i++) {
        if (((flags >> i) & 1) == 0) {
            *out = data_020c7504[i];
            (*cnt)++;
            out++;
        }
    }
}
}

namespace F28 {
extern "C" s32 func_0202cb10(s32 v, s32 *arr, s32 n) {
    s32 i;
    if (arr != NULL) {
        for (i = 0; i < n; i++) {
            if (*arr == v) {
                return 1;
            }
            arr++;
        }
    }
    return 0;
}
}

namespace F28 {
extern "C" s32 func_0202caac(s32 c, u8 *p, s32 n, s32 *arr, s32 cnt) {
    s32 result = 0;
    s32 prev;
    s32 i;
    s32 d;
    if (p != NULL && n > 0) {
        prev = 0;
        for (i = 0; i < n; i++) {
            d = p[1] - prev;
            if (d > 0) {
                if (c == func_0209949c((u8)d)) {
                    if (func_0202cb10(func_02060b9c(p[0]), arr, cnt) == 0) {
                        result++;
                    }
                }
            } else {
                result = 0;
                break;
            }
            prev = p[1];
            p += 2;
        }
    }
    return result;
}
}

namespace F28 {
extern "C" s32 func_0202ca00(u16 *a, s32 *b, s32 c, u8 *p, s32 n, s32 *arr, s32 cnt) {
    s32 result = 0;
    s32 i;
    s32 prev;
    s32 k;
    s32 d;
    s32 q;
    u16 t;
    if (n > 0 && p != NULL) {
        i = func_0202caac(c, p, n, arr, cnt);
        if (i > 0) {
            k = func_02063b8c(i);
            prev = 0;
            for (i = 0; i < n; i++) {
                d = p[1] - prev;
                if (d > 0) {
                    if (c == func_0209949c((u8)d)) {
                        q = func_02060b9c(p[0]);
                        if (func_0202cb10(q, arr, cnt) == 0) {
                            if (k == 0) {
                                if (p[0] < 0x38) {
                                    t = p[0] + 0x12b0;
                                } else {
                                    t = 0x12b0;
                                }
                                *a = t;
                                *b = q;
                                result = 1;
                                break;
                            } else {
                                k--;
                            }
                        }
                    }
                }
                prev = p[1];
                p += 2;
            }
        }
    }
    return result;
}
}

namespace F28 {
extern "C" s32 func_0202c92c(u16 *a, s32 *b, s32 *c, s32 d, Unk_0202c92c_Ent *tbl, s32 *arr, s32 cnt, u8 lo, u8 hi) {
    s32 n = 0;
    s32 result = 0;
    s32 prev;
    s32 r;
    s32 i;
    s32 k;
    s32 end;
    u8 *flag;
    if (tbl != NULL) {
        prev = 6;
        func_02115fb4(data_021be61c, 0, prev);
        i = lo;
        end = hi;
        for (; i <= end; i++) {
            r = func_02060de4((u8)i);
            flag = &data_021be61c[r];
            if (*flag == 0 && r != prev) {
                if (func_0202caac(d, tbl[r].unk_00, tbl[r].unk_04, arr, cnt) > 0) {
                    *flag = 1;
                    n++;
                }
                prev = r;
            }
        }
        if (n > 0) {
            k = func_02063b8c(n);
            for (n = 0; n < 6; n++) {
                if (data_021be61c[n] != 0) {
                    if (k == 0) {
                        result = func_0202ca00(a, b, d, tbl->unk_00, tbl->unk_04, arr, cnt);
                        *c = n;
                        break;
                    } else {
                        k--;
                    }
                }
                tbl++;
            }
        }
    }
    return result;
}
}

namespace F28 {
extern "C" s32 func_0202c908(u16 *a, s32 *b, s32 *c, s32 d, Unk_0202c92c_Ent *tbl, s32 *arr, s32 cnt) {
    return func_0202c92c(a, b, c, d, tbl, arr, cnt, 0, 0x17);
}
}

namespace F28 {
extern "C" s32 func_0202c8f0(u16 *a, s32 lo, s32 hi, u8 kind) {
    return func_0202c84c(a, lo, hi, 0, 0x17, kind);
}
}

namespace F28 {
extern "C" s32 func_0202c84c(u16 *a, s32 lo, s32 hi, s32 d, s32 e, u8 kind) {
    Unk_0202c92c_Ent *tbl = (Unk_0202c92c_Ent *)func_02060e24(kind - 1);
    s32 out0, out1;
    u8 mask;
    s32 n;
    s32 i;
    s32 z;
    if (tbl != NULL) {
        mask = 0;
        n = hi - lo + 1;
        out0 = 0;
        out1 = 0;
        for (; lo <= hi; lo++) {
            mask = mask | (1 << lo);
        }
        z = 0;
        for (; n > 0; n--) {
            s32 k = func_02063b8c(n);
            for (i = z; i < 5; i++) {
                if (((mask >> i) & 1) != 0) {
                    if (k == 0) {
                        if (((s32(*)(u16 *, s32 *, s32 *, s32, Unk_0202c92c_Ent *, s32 *, s32, s32, s32))func_0202c92c)(a, &out0, &out1, i, tbl, (s32 *)z, z, d, e) != 0) {
                            return 1;
                        }
                        mask = mask & ~(1 << i);
                        break;
                    } else {
                        k--;
                    }
                }
            }
        }
    }
    return 0;
}
}

namespace F28 {
extern "C" s32 func_0202c7c0(u16 *a, s32 *idxOut, s32 *b, s32 *c, Unk_0202c92c_Ent *p) {
    s32 result = 0;
    Unk_0202c92c_Ent *tbl = (Unk_0202c92c_Ent *)func_02060e24(p->unk_04 - 1);
    s32 arr[4];
    s32 cnt;
    s32 i;
    s32 idx;
    if (tbl != NULL) {
        cnt = 0;
        func_02116048(data_020c7520, data_021be614, 5);
        func_0202cb34(arr, &cnt);
        for (i = 0; i < 5; i++) {
            idx = func_0202ce44(data_021be614, 5);
            if (idx < 0 || idx >= 5) {
                break;
            }
            if (func_0202c908(a, b, c, idx, tbl, arr, cnt) == 1) {
                *idxOut = idx;
                result = 1;
                break;
            }
            data_021be614[idx] = 0;
        }
    }
    return result;
}
}

namespace F27 {
extern "C" void func_0202c708(u16 *p) {
    Unk_0202c224_Local s;
    u8 buf[5];
    s32 out;
    s32 v;
    u32 loc[4];
    s32 t;
    Unk_0202c654_Row *row;
    s32 n;
    Unk_0202c654_Row *tbl;
    s.unk_00 = 0;
    s.unk_04 = 0;
    n = 5;
    out = 0;
    func_0209d498(&s);
    t = func_02060de4(((u8 *)&s)[2]);
    tbl = (Unk_0202c654_Row *)func_02060e24(((u8 *)&s)[4] - 1);
    if (tbl != NULL && t >= 0 && t < 6) {
        v = 0;
        row = tbl + t;
        func_02115fb4(buf, 0, n);
        func_0202cb34(loc, &v);
        while (n > 0) {
            s32 r = func_02063b8c(n);
            s32 j;
            for (j = 0; j < 5; j++) {
                if (buf[j] == 0) {
                    if (r == 0) {
                        func_0202ca00(p, &out, j, row->unk_00, row->unk_04, loc, v);
                        buf[j] = 1;
                        break;
                    }
                    r--;
                }
            }
            if (Unk_0202be64_InRange(p, 0x12b0, 0x12e7)) {
                break;
            }
            n--;
        }
    }
}
}

namespace F27 {
extern "C" s32 func_0202c654(u16 *p, s32 lo, s32 hi, s32 id) {
    u8 *e;
    u8 n;
    s32 last;
    Unk_0202c654_Row *tbl;
    s32 d;
    u32 idx;
    s32 t;
    s32 cur;
    s32 k;
    s32 prev;

    if (Unk_0202be64_InRange(p, 0x12b0, 0x12e7)) {
        tbl = (Unk_0202c654_Row *)func_02060e24(id - 1);
        if (tbl != NULL) {
            prev = 6;
            idx = (u8)(Unk_0202be64_InRange(p, 0x12b0, 0x12e7) ? *p - 0x12b0 : -1);
            for (; lo <= hi; lo++) {
                t = func_02060de4((u8)lo);
                if (t != prev) {
                    e = tbl[t].unk_00;
                    if (e != NULL) {
                        last = 0;
                        k = 0;
                        n = tbl[0].unk_04;
                        for (; k < n; k++) {
                            cur = e[1];
                            d = cur - last;
                            if (idx == e[0] && d > 0) {
                                return 1;
                            }
                            last = cur;
                            e += 2;
                        }
                    }
                    prev = t;
                }
            }
        }
    }
    return 0;
}
}

namespace F27 {
extern "C" s32 func_0202c60c(s32 key, Unk_0202c60c *p) {
    Unk_0202c60c_Entry *en = p->unk_00;
    s32 cnt = 0;
    if (en != NULL && p->unk_04 != 0) {
        s32 i;
        for (i = 0; i < p->unk_04; en++, i++) {
            if (en->unk_00 < 0x38 && en->unk_02 != 0 && key == func_0209948c(en->unk_02)) {
                cnt++;
            }
        }
    }
    return cnt;
}
}

namespace F27 {
extern "C" s32 func_0202c584(u16 *a, s32 *b, s32 key, Unk_0202c60c *row) {
    Unk_0202c60c_Entry *en = row->unk_00;
    s32 result = 0;
    s32 n;
    if (en != NULL && row->unk_04 != 0 && (n = func_0202c60c(key, row)) > 0) {
        s32 r = func_02063b8c(n);
        s32 i;
        for (i = 0; i < row->unk_04; en++, i++) {
            if (en->unk_02 != 0 && en->unk_00 < 0x38 && key == func_0209948c(en->unk_02)) {
                if (r == 0) {
                    u16 v;
                    if (en->unk_00 < 0x38) {
                        v = en->unk_00 + 0x12e8;
                    } else {
                        v = 0x12e8;
                    }
                    *a = v;
                    *b = en->unk_01;
                    result = 1;
                    break;
                }
                r--;
            }
        }
    }
    return result;
}
}

namespace F27 {
extern "C" s32 func_0202c558(s32 key, Unk_0202c60c **p) {
    Unk_0202c60c *r6 = *p;
    s32 sum = 0;
    if (r6 != NULL) {
        s32 i;
        for (i = 0; i < 2; i++) {
            sum += func_0202c60c(key, r6 + i);
        }
    }
    return sum;
}
}

namespace F27 {
extern "C" s32 func_0202c4d8(u16 *a, s32 *b, s32 key, Unk_0202c60c **p) {
    Unk_0202c60c *r5 = *p;
    s32 result = 0;
    if (r5 != NULL) {
        s32 cnt = 0;
        s32 i;
        func_02115fb4(data_021be5e0, result, 2);
        for (i = 0; i < 2; i++) {
            if (func_0202c60c(key, r5 + i) > 0) {
                data_021be5e0[i] = 1;
                cnt++;
            }
        }
        if (cnt > 0) {
            s32 r = func_02063b8c(cnt);
            for (i = 0; i < 2; r5++, i++) {
                if (data_021be5e0[i] == 1) {
                    if (r == 0) {
                        result = func_0202c584(a, b, key, r5);
                        break;
                    }
                    r--;
                }
            }
        }
    }
    return result;
}
}

namespace F27 {
extern "C" s32 func_0202c420(u16 *a, s32 *b, s32 *c, s32 key, Unk_0202c148_Tbl *g, u8 lo0, u8 hi0) {
    Unk_0202c60c **r5 = g->unk_00;
    s32 result = 0;
    if (r5 != NULL) {
        s32 prev = 3;
        s32 cnt = 0;
        s32 i, t;
        func_02115fb4(data_021be5e4, cnt, prev);
        s32 lo = lo0;
        s32 hi = hi0;
        for (; lo <= hi; lo++) {
            t = func_0204f100((u8)lo);
            u8 *fl = data_021be5e4 + t;
            if (*fl == 0 && t != prev) {
                if (func_0202c558(key, r5 + t) > 0) {
                    *fl = 1;
                    cnt++;
                }
                prev = t;
            }
        }
        if (cnt > 0) {
            s32 r = func_02063b8c(cnt);
            for (i = 0; i < 3; r5++, i++) {
                if (data_021be5e4[i] == 1) {
                    if (r == 0) {
                        result = func_0202c4d8(a, b, key, r5);
                        *c = i;
                        break;
                    }
                    r--;
                }
            }
        }
    }
    return result;
}
}

namespace F27 {
extern "C" s32 func_0202c404(u16 *a, s32 *b, s32 c, s32 d, Unk_0202c148_Tbl *e) {
    return func_0202c420(a, b, (s32 *)c, d, e, 0, 0x17);
}
}

namespace F27 {
extern "C" s32 func_0202c35c(u16 *a, s32 lo, s32 hi, s32 d, u8 e, u8 x, u8 y) {
    Unk_0202c148_Tbl *tbl = func_0204f234(d, func_0204f0f4(e));
    if (tbl != NULL) {
        u8 mask = 0;
        s32 n = hi - lo + 1;
        s32 c1 = 0;
        s32 c2 = 0;
        for (; lo <= hi; lo++) {
            mask = mask | (1 << lo);
        }
        for (; n > 0; n--) {
            s32 r = func_02063b8c(n);
            s32 j;
            for (j = 0; j < 5; j++) {
                if ((mask >> j) & 1) {
                    if (r == 0) {
                        if (func_0202c420(a, &c1, &c2, j, tbl, x, y)) {
                            return 1;
                        }
                        mask &= ~(1 << j);
                        break;
                    }
                    r--;
                }
            }
        }
    }
    return 0;
}
}

namespace F27 {
extern "C" s32 func_0202c33c(u16 *a, s32 b, s32 c, s32 d, u8 e) {
    return func_0202c35c(a, b, c, d, e, 0, 0x17);
}
}

namespace F27 {
extern "C" s32 func_0202c2d0(u16 *a, s32 *outb, s32 c, s32 d, Unk_0202c148_Tbl *e) {
    s32 result = 0;
    s32 i;
    func_02116048(data_020c7528, data_021be60c, 5);
    for (i = 0; i < 5; i++) {
        s32 r4 = func_0202ce44(data_021be60c, 5);
        if (r4 < 0 || r4 >= 5) {
            break;
        }
        if (func_0202c404(a, (s32 *)c, d, r4, e) == 1) {
            *outb = r4;
            result = 1;
            break;
        }
        data_021be60c[r4] = 0;
    }
    return result;
}
}

namespace F27 {
extern "C" void func_0202c224(u16 *p) {
    Unk_0202c224_Local s;
    u8 buf[5];
    s32 out;
    s32 n;
    s.unk_00 = 0;
    s.unk_04 = 0;
    n = 5;
    func_0209d498(&s);
    u32 b4 = ((u8 *)&s)[4];
    Unk_0202c148_Tbl *tbl = func_0204f234(b4, func_0204f0f4(((u8 *)&s)[3]));
    if (tbl != NULL && tbl->unk_00 != NULL) {
        s32 t = func_0204f100(((u8 *)&s)[2]);
        if ((u32)t < 3) {
            Unk_0202c60c **row = tbl->unk_00 + t;
            func_02115fb4(buf, 0, n);
            while (n > 0) {
                s32 r = func_02063b8c(n);
                s32 j;
                for (j = 0; j < 5; j++) {
                    if (buf[j] == 0) {
                        if (r == 0) {
                            func_0202c4d8(p, &out, j, row);
                            buf[j] = 1;
                            break;
                        }
                        r--;
                    }
                }
                if (Unk_0202be64_InRange(p, 0x12e8, 0x131f)) {
                    break;
                }
                n--;
            }
        }
    }
}
}

namespace F27 {
extern "C" s32 func_0202c148(u16 *p, s32 lo, s32 hi, s32 id, u8 e) {
    if (Unk_0202be64_InRange(p, 0x12e8, 0x131f)) {
        Unk_0202c148_Tbl *tbl = func_0204f234(id, func_0204f0f4(e));
        if (tbl != NULL && tbl->unk_00 != NULL) {
            s32 prev = 3;
            u32 idx = (u8)(Unk_0202be64_InRange(p, 0x12e8, 0x131f) ? *p - 0x12e8 : -1);
            for (; lo <= hi; lo++) {
                s32 t = func_0204f100((u8)lo);
                if (t != prev) {
                    Unk_0202c60c *row = tbl->unk_00[t];
                    if (row != NULL) {
                        Unk_0202c60c_Entry *en;
                        s32 j;
                        for (j = 0; j < 2; row++, j++) {
                            en = row->unk_00;
                            if (en != NULL && row->unk_04 != 0) {
                                s32 k;
                                for (k = 0; k < row->unk_04; en++, k++) {
                                    if (en->unk_00 < 0x38 && en->unk_00 == idx && en->unk_02 != 0) {
                                        return 1;
                                    }
                                }
                            }
                        }
                    }
                    prev = t;
                }
            }
        }
    }
    return 0;
}
}

namespace F27 {
extern "C" s32 func_0202c120(s32 v) {
    switch (v) {
    case 12:
        return 0;
    case 1:
    case 2:
    case 4:
        return 1;
    }
    return 2;
}
}

namespace F27 {
extern "C" s32 func_0202c0fc(s32 key, s8 *arr, s32 n) {
    s32 i;
    for (i = 0; i < n; arr++, i++) {
        if (*arr == key) {
            return key;
        }
    }
    return -1;
}
}

namespace F27 {
extern "C" s32 func_0202c094(void *a, void *b, s32 c, void *d, s32 e) {
    if (Unk_0202c094_IsZero(data_020e416c)) {
        s32 i;
        for (i = 0; i < 8; i++) {
            s32 t = func_0202c0fc(func_ov003_02227e08(a, (u8)i), (s8 *)b, c);
            if (t != -1) {
                if (func_020e9650(d, a) < e) {
                    return t;
                }
            }
        }
    }
    return -1;
}
}

namespace F27 {
extern "C" s32 func_0202bf84(Unk_0202be64_Host *a, void *b, Unk_0202be64_Rec *y, u32 flag) {
    void *s = func_0209a940(b);
    s32 r4 = func_0209a938(b);
    s32 r6;
    if (_ZN12Unk_0209ada413func_0209ad68Ev(s) != 0 && _ZN12Unk_0209ada413func_0209abc4Ev(s) == 0 && _ZN12Unk_0209ada413func_0209ad28Ev(s) == 0 && r4 != 0
        && _ZN12Unk_020940a013func_02094218Ev(func_0209a92c(b)) != 0) {
        r6 = _ZN12Unk_0209ada413func_0209ac64Ev(s);
        if (r4 < func_0209a8f4()) {
            if (r6 == 0) {
                if (!Unk_0202be64_InRange(func_0209a8e8(b), 0x12b0, 0x12e7)) {
                    goto ok;
                }
            }
            if (r6 != 1) {
                goto fail;
            }
            if (Unk_0202be64_InRange(func_0209a8e8(b), 0x12e8, 0x131f)) {
                goto fail;
            }
        ok:
            Unk_0202be64_Rec *rec = func_0209a8ec(b);
            if (flag == 0) {
                return 1;
            }
            if (*(long long *)rec == 0) {
                goto fail;
            }
            s32 r0 = func_0209d3d0(y, rec, 0x3f);
            if (r0 == 1) {
                s32 t;
                if (r4 < 5) {
                    t = data_020c7510[r4];
                } else {
                    t = 0;
                }
                if (t > 0) {
                    if (func_0209d374(rec, y) >= t) {
                        return 1;
                    }
                }
            } else if (r0 == -1) {
                return 1;
            }
        }
    }
fail:
    return 0;
}
}

namespace F27 {
extern "C" void func_0202be64(Unk_0202be64_Host *a, void *b, u8 *arr, void *c, u8 flag, Unk_0202be64_Rec *rec) {
    void *s = func_0209a940(b);
    if (_ZN12Unk_0209ada413func_0209ac64Ev(s) == 0) {
        s32 r6 = func_0209a938(b);
        if (func_0202bf84(a, b, rec, flag)) {
            s32 r7;
            if (r6 < 5) {
                r7 = arr[r6];
            } else {
                r7 = 0;
            }
            s32 rnd = func_02063b8c(100);
            u16 val = *_ZN12Unk_0209ada413func_0209ab94Ev(s);
            switch (r6) {
            case 0:
                break;
            case 1:
            case 3:
            case 4:
                if (rnd < r7) {
                    if (func_0202c654(&val, rec->b(2), rec->b(2), rec->b(4))) {
                        *func_0209a8e8(b) = val;
                    }
                }
                break;
            case 2:
                if (rnd < r7) {
                    s32 k = func_0202ce44(c, 4);
                    if (func_0202c8f0(&val, k, k + 1, rec->b(4))) {
                        *func_0209a8e8(b) = val;
                    }
                }
                break;
            }
            if (a->vfunc_64() != NULL) {
                if (Unk_0202be64_InRange(func_0209a8e8(b), 0x12b0, 0x12e7)) {
                    func_02077520(a->vfunc_64(), func_0209a8e8(b));
                }
            }
            u32 x = rec->v[0];
            u32 y = rec->v[1];
            Unk_0202be64_Rec *d = func_0209a8ec(b);
            d->v[0] = x;
            d->v[1] = y;
        }
    }
}
}

namespace F26 {
void Unk_0201d2d0::func_0202bd3c(void *s1, u8 *tbl, void *p2, u8 p3, Unk_0202bd3c_Arr *arr) {
    Unk_0202bd3c_Bytes *bytes = (Unk_0202bd3c_Bytes *)arr;
    void *v;
    s32 t;
    u32 lim;
    s32 roll;
    u16 val;
    v = func_0209a940(s1);
    if (_ZN12Unk_0209ada413func_0209ac64Ev(v) == 1) {
        t = func_0209a938(s1);
        if (func_0202bf84(this, s1, arr, p3) != 0) {
            if (t < 5) {
                lim = tbl[t];
            } else {
                lim = 0;
            }
            roll = func_02063b8c(100);
            val = *_ZN12Unk_0209ada413func_0209ab94Ev(v);
            switch (t) {
            case 0:
                break;
            case 1:
            case 3:
            case 4:
                if (roll < (s32)lim) {
                    if (func_0202c148(&val, bytes->unk_02, bytes->unk_02, bytes->unk_04, bytes->unk_03) != 0) {
                        *func_0209a8e8(s1) = val;
                    }
                }
                break;
            case 2:
                if (roll < (s32)lim) {
                    u32 r = func_0202ce44(p2, 4);
                    if (func_0202c33c(&val, r, r + 1, bytes->unk_04, bytes->unk_03) != 0) {
                        *func_0209a8e8(s1) = val;
                    }
                }
                break;
            }
            if (vfunc_64()) {
                if (InRange(func_0209a8e8(s1), 0x12e8, 0x131f)) {
                    func_02077520(vfunc_64(), func_0209a8e8(s1));
                }
            }
            u32 w0 = arr->unk_00;
            u32 w1 = arr->unk_04;
            u32 *d = func_0209a8ec(s1);
            d[0] = w0;
            d[1] = w1;
        }
    }
}
}

namespace F26 {
void Unk_0201d2d0::func_0202bcdc(u8 *a, void *b, u32 c) {
    if (vfunc_64()) {
        void *s = func_0209a60c(func_0207e268(vfunc_64()));
        Unk_0202bd3c_Arr arr;
        arr.unk_00 = 0;
        arr.unk_04 = 0;
        func_0209d498(&arr);
        func_0202be64(s, a, b, c, &arr);
        func_0202bd3c(s, a, b, c, &arr);
    }
}
}

namespace F26 {
s32 Unk_0201d2d0::func_0202bb88(s32 *out) {
    Unk_0202bb88_Id *idb = (Unk_0202bb88_Id *)data_021d7352;
    BOOL f5;
    void *h;
    void *sc;
    u16 *b;
    u16 *a;
    u32 arr[2];
    Unk_0202b4ac_Rec *rec;
    if (func_0209750c()) {
        void *t0 = _ZN12Unk_0209865c13func_0209888cEv(func_0209750c());
        rec = (Unk_0202b4ac_Rec *)t0;
    } else {
        rec = NULL;
    }
    arr[0] = 0;
    arr[1] = 0;
    if (unk_128 == NULL) {
        return 0;
    }
    if (rec != NULL && _ZN12Unk_020940a013func_02094218Ev(rec) != NULL && _ZN12Unk_0206395413func_02094058Ev(rec) != 0) {
        a = func_0209409c(rec);
        b = func_0209409c(func_02080e18(unk_128));
        if (b[0] != a[0] || func_02128930(b + 1, a + 1, 8) != 0) {
            return 6;
        }
    }
    func_0209d498(arr);
    h = func_02080ec8(unk_128);
    if (idb != NULL) {
        b = func_02080e1c(unk_128);
        if (idb->unk_00 != b[0] || func_02128930(idb->unk_02, b + 1, 8) != 0) {
            return 5;
        }
    }
    if (func_0209d3d0(h, arr, 0x3f) == 1) {
        return 1;
    }
    sc = unk_fc->vfunc_64();
    f5 = FALSE;
    if (sc != NULL && _ZN12Unk_02002fc813func_020030b4Ev(_ZN12Unk_0208086013func_020805c4Ev(sc)) != 0 && func_0207e310(sc) != NULL &&
        ((Unk_0202b4ac_Rec *)func_0207e310(sc))->bits.f2 != 0) {
        f5 = TRUE;
    }
    *out = func_0209d3a4(h, arr);
    if (_ZN12Unk_0206395413func_02094058Ev(rec) != 0) {
        if (*out >= 1 && !f5) {
            return 1;
        }
        return 2;
    }
    if (*out >= 60) {
        return 4;
    }
    if (*out >= 14) {
        return 3;
    }
    if (*out >= 1 && !f5) {
        return 1;
    }
    return 2;
}
}

namespace F26 {
BOOL Unk_0201d2d0::func_0202bb84() {
    return FALSE;
}
}

namespace F26 {
BOOL Unk_0201d2d0::func_0202bb54() {
    BOOL f = IsZero(data_020e416c);
    if (f && func_ov003_0222612c() != 0) {
        return TRUE;
    }
    return FALSE;
}
}

namespace F26 {
BOOL Unk_0201d2d0::func_0202bb48(s32 x) {
    if (x == 0) {
        return TRUE;
    }
    return FALSE;
}
}

namespace F26 {
Unk_0202b4ac_Data *Unk_0201d2d0::func_0202baec(u32 *out, void *scene) {
    void *p = func_0209750c();
    s32 t = func_0207dfe8(scene);
    if (t == 1) {
        if (_ZN12Unk_0206395413func_02094058Ev(_ZN12Unk_0209865c13func_0209888cEv(p)) != 0) {
            t = 0;
        }
    }
    if (t == 2) {
        func_02015818((u32)_ZN12Unk_0207e94013func_0207f19cEv(scene), 1);
    } else {
        *out = func_0209ccd0();
    }
    return &data_020c7b34[t];
}
}

namespace F26 {
BOOL Unk_0201d2d0::func_0202bae0(s32 x) {
    if (x == 5) {
        return TRUE;
    }
    return FALSE;
}
}

namespace F26 {
Unk_0202b4ac_Data *Unk_0201d2d0::func_0202bab4() {
    if (unk_128) {
        func_02015818((u32)func_02080e1c(unk_128), 1);
    }
    return &data_020c78c8;
}
}

namespace F26 {
BOOL Unk_0201d2d0::func_0202ba80(volatile s32 *out, void *p) {
    u32 buf[3];
    *out = func_0202c094(buf, data_020c74f8, 2, p, 0x6000);
    s32 t = *out;
    BOOL r = FALSE;
    if (t != -1) {
        r = TRUE;
    }
    return r;
}
}

namespace F26 {
Unk_0202b4ac_Data *Unk_0201d2d0::func_0202ba28(s32 x) {
    u16 v;
    u16 t;
    if (x == -1) {
        x = data_020c74f8[func_02063b8c(2)];
    }
    if (x != -1) {
        if ((u32)x < 0x38) {
            t = x + 0x12b0;
        } else {
            t = 0x12b0;
        }
        v = t;
        func_0201578c((u32)&v, 0, 7);
    }
    return &data_020c7700;
}
}

namespace F26 {
BOOL Unk_0201d2d0::func_0202ba10() {
    return unk_fc->vfunc_b0();
}
}

namespace F26 {
BOOL Unk_0201d2d0::func_0202b9e4(Unk_0202b4ac_Rec *rec) {
    void *p = func_0209750c();
    if (rec->bits.f0 == 0 && p != NULL && func_02098778(p) != 0) {
        return TRUE;
    }
    return FALSE;
}
}

namespace F26 {
Unk_0202b4ac_Data *Unk_0201d2d0::func_0202b9bc(u32 *out, Unk_0202b4ac_Rec *rec) {
    *out = func_0209ccd0();
    rec->bits.f0 = 1;
    return &data_020c75c0;
}
}

namespace F26 {
BOOL Unk_0201d2d0::func_0202b9b0(s32 x) {
    if (x == 2) {
        return TRUE;
    }
    return FALSE;
}
}

namespace F26 {
BOOL Unk_0201d2d0::func_0202b9a4(s32 x) {
    if (x == 3) {
        return TRUE;
    }
    return FALSE;
}
}

namespace F26 {
BOOL Unk_0201d2d0::func_0202b998(s32 x) {
    if (x == 4) {
        return TRUE;
    }
    return FALSE;
}
}

namespace F26 {
void Unk_0201d2d0::func_0202b520(Unk_0201d2d0_Out *out) {
    void *scene = unk_fc->unk_82c;
    Unk_0202b4ac_Rec *rec = (Unk_0202b4ac_Rec *)func_0207e310(scene);
    u32 unk20;
    s32 status;
    s32 unk24;
    s32 kind;
    Unk_0202b4ac_Data *d;
    s32 sel;
    s32 v28;
    Unk_0202b520_Pair pair;
    s32 n;
    s32 v34;
    s32 x;
    u32 t[5];
    u32 obj[0x34 / 4];
    unk20 = func_02003098(_ZN12Unk_0208086013func_020805c4Ev(scene));
    n = 0;
    status = func_0202bb88(&n);
    unk24 = func_0207856c(rec);
    kind = func_020b8fe8();
    v34 = 0;
    func_0209750c();
    v28 = 0;
    sel = -1;
    pair.unk_00 = 0xfff1;
    x = sel;
    func_0202b444();
    if (func_0202bb84()) {
        d = &data_020c75c8;
        if (status == 0) {
            unk_138 = 1;
        }
    } else if (func_0202bb54()) {
        d = &data_020c76e8;
        if (status == 0) {
            unk_138 = 1;
        }
    } else if (func_0202bb48(status)) {
        d = func_0202baec((u32 *)&v34, scene);
    } else if (status == 6) {
        d = &data_020c79a8;
        v34 = 7;
        v28 = 3;
    } else if (func_0202ba80(&x, &unk_fc->unk_5c)) {
        d = func_0202ba28(x);
    } else if (func_0202ba10()) {
        d = &data_020c7870;
    } else if (func_0202bae0(status)) {
        d = func_0202bab4();
    } else if (status == 4) {
        d = &data_020c78e0;
        if (n >= 0x186) {
            sel = 1;
            v34 = 5;
            v28 = sel;
        }
    } else if (status == 3) {
        d = &data_020c75a0;
    } else if (func_0202b9e4(rec)) {
        d = func_0202b9bc((u32 *)&v34, rec);
    } else if (func_0202b9b0(unk24)) {
        d = &data_020c7608;
    } else if (func_0202b9a4(unk24)) {
        d = &data_020c7540;
    } else if (func_0202b998(unk24)) {
        d = &data_020c7848;
    } else if (func_0207cdbc(scene) && func_020ad330() && !func_020ad2c8()) {
        _ZN12Unk_020e2e54C1Ev(obj);
        _ZN12Unk_021ed2c013func_020ad3bcEv(data_021ed2c0)->func_020ad5c0(obj);
        d = &data_020c7688;
        _ZN12Unk_020660f813func_02067a3cEiPv(unk_3c, 4, obj);
        _ZN12Unk_020e2e54D1Ev(obj);
    } else if (_ZN12Unk_020cbb1813func_02072e44Ev(data_020cbb18) == 0 && unk_128 != NULL && _ZN12Unk_0208091c13func_0208091cEv(unk_128) != 0 &&
               func_02098ffc() != -1) {
        d = &data_020c7830;
        _ZN12Unk_0206338013func_0206338cEii(t, 0, 0);
        func_02062f94(&pair.unk_02, t, 0, 0, 1, 1, 0);
        unk_198 = pair.unk_02;
        func_02063388(t);
        unk_19a = 0;
        func_0201578c((u32)&unk_198, 0, 7);
        if (unk_128 != NULL) {
            _ZN12Unk_0208091c13func_02080930Ev(unk_128);
        }
    } else if (func_020b5254()) {
        d = &data_020c77f0;
        if (_ZN12Unk_0209b3bc13func_0209b354Ev(func_0209a610(func_0207e268(scene))) != 4) {
            v34 = 1;
        }
    } else if (func_020b50e8() == 10) {
        d = &data_020c7860;
        if (_ZN12Unk_0209b3bc13func_0209b354Ev(func_0209a610(func_0207e268(scene))) != 3) {
            v34 = 1;
        }
    } else if (func_020b51fc() && func_020b5240(func_020b50e8()) == 1) {
        d = &data_020c7648;
    } else if (status == 1) {
        if (func_020b51a4()) {
            d = &data_020c7640;
        } else if (kind == 1) {
            d = &data_020c78c0;
        } else if (kind == 2) {
            d = &data_020c75e8;
        } else {
            d = &data_020c7730;
        }
        v34 = func_0209ccd0();
    } else if (_ZN12Unk_0209b3bc13func_0209b354Ev(func_0209a610(func_0207e268(scene))) == 8) {
        d = &data_020c75d0;
    } else if (func_0207846c(func_020784f4(rec)) != 0) {
        d = &data_020c7748;
        if (func_0207846c(func_020784f4(rec)) == 2) {
            v34 = 1;
        }
    } else if (unk24 == 1) {
        d = &data_020c7718;
        v34 = func_0209ccd0();
    } else {
        BOOL f = IsZero(data_020e416c);
        if (f && kind == 1) {
            d = &data_020c7780;
        } else if (f && kind == 2) {
            d = &data_020c7950;
        } else {
            d = &data_020c7810;
            if (func_02063b8c(9) != 0) {
                v28 = (u8)(d->unk_04 - 1);
            }
            v34 = func_0209ccd0();
        }
    }
    if (d != NULL) {
        if (sel == -1) {
            sel = d->unk_04;
        }
        func_0202d184(this, &unk_100, &unk_11e, 30, unk20, d->unk_00, (u8)sel, v34, v28);
    }
    if (n > 0) {
        s32 a, b;
        if (n >= 0x46) {
            a = 9;
        } else {
            a = n / 7;
        }
        if (n >= 0x186) {
            b = 12;
        } else {
            b = n / 30;
        }
        func_02015958(a, 2, 1, 0, 0);
        func_02015958(b, 3, 2, 0, 0);
    }
    rec->unk_1d |= 4;
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}
}

namespace F26 {
void Unk_0201d2d0::func_0202b4e8(u32 a, u32 b) {
    u32 v = 0;
    u32 r = func_0209b570(&v, b);
    Unk_0202b4ac_Str s;
    s.c[0] = v;
    s.c[1] = 0;
    func_0201577c(a, &s, (void *)r, &s.c[1]);
}
}

namespace F26 {
void Unk_0201d2d0::func_0202b4ac(u32 a, void *b) {
    u8 *p = (u8 *)func_0207f968(b);
    if (p) {
        Unk_0202b4ac_Str s;
        s.c[0] = *p;
        s.c[1] = 0;
        func_0201577c(a, &s, ((u8 *)"st_fashion"), &s.c[1]);
    }
}
}

namespace F25 {
void Unk_0201d2d0::func_0202b444() {
    void *r4 = unk_fc->unk_82c;
    u8 buf[2];
    s32 i;
    if (r4 != 0) {
        buf[0] = func_02081318(func_0207fae4(r4));
        buf[1] = 0;
        _ZN12Unk_020d771413func_0201577cEjjj(this, 0, buf, ((u8 *)"st_constellation"), &buf[1]);
        _ZN12Unk_0201d2d013func_0202b4acEjPv(this, 6, r4);
    }
    for (i = 0; i < 4; i++) {
        _ZN12Unk_0201d2d013func_0202b4e8Ejj(this, i + 7, data_020c7508[i]);
    }
}
}

namespace F25 {
void Unk_0201d2d0::func_0202b410() {
    func_0202d048(this, &unk_120.unk_08, &unk_120.unk_04, unk_fc->unk_82c, 0);
}
}

namespace F25 {
void Unk_0201d2d0::func_0202b208() {
    void *r6 = func_0209750c();
    void *r7 = unk_fc->unk_82c;
    void *r4 = (void *)_ZN12Unk_0209865c13func_0209865cEv(r6);
    u32 v = func_0207a914(data_021dfd8c, r7, r6);
    Unk_0201d2d0_Out out;
    u8 b;
    u32 buf[2];
    if (v < 0x16) {
        buf[0] = 0;
        buf[1] = 0;
        func_0209d498(buf);
        switch (func_0209acb8(v)) {
        case 0:
            break;
        case 1:
            unk_15c = func_02099db4((s32)r4, func_0209ac1c(v));
            if (unk_15c != 0) {
                if (_ZN12Unk_0209ada413func_0209abc4Ev(func_0209a4f0(unk_15c)) == 0) {
                    if (func_0209d3d0((void *)func_0209ac44(func_0209a4f0(unk_15c)), buf, 0x3f) == -1) {
                        _ZN12Unk_020d893813func_0202d1d4EP16Unk_020d8938_Tbl(this, ((u8 *)&nZ::data_021bf2a4[6]));
                        _ZN12Unk_020d893813func_0202d120Ej(this, func_0209a4f0(unk_15c));
                    } else {
                        switch (_ZN12Unk_0209ada413func_0209ac64Ev(func_0209a4f0(unk_15c))) {
                        case 10:
                            r4 = _ZN12Unk_0209865c13func_02098750Ev(r6);
                            if (func_0202cee4(r4, _ZN12Unk_0209ada413func_0209ab94Ev(func_0209a4f0(unk_15c))) == -1) {
                                _ZN12Unk_020d893813func_0202d1d4EP16Unk_020d8938_Tbl(this, ((u8 *)&nZ::data_021bf2a4[9]));
                                _ZN12Unk_020d893813func_0202d120Ej(this, func_0209a4f0(unk_15c));
                            }
                            break;
                        case 19:
                            r4 = func_0202ceb0(_ZN12Unk_0209865c13func_02098750Ev(r6));
                            if (r4 != 0 && _ZN12Unk_0206555413func_02065578Ev(r4) == 8) {
                                func_02065c94(r4);
                                _ZN12Unk_020d893813func_0202d1d4EP16Unk_020d8938_Tbl(this, ((u8 *)&nZ::data_021bf2a4[9]));
                                _ZN12Unk_020d893813func_0202d120Ej(this, func_0209a4f0(unk_15c));
                            }
                            break;
                        }
                    }
                }
            }
            break;
        case 3: {
            u8 *p = (u8 *)r4 + 0x88;
            void *q = p + 0xc;
            void *s = p + 0x18;
            if (_ZN12Unk_0209ada413func_0209ad68Ev(q) != 0 && _ZN12Unk_0209ada413func_0209ac64Ev(q) == 0x15 && _ZN12Unk_0209ada413func_0209abc4Ev(q) == 0 && func_02099ed4(p, _ZN12Unk_0208086013func_020805c4Ev(r7)) != 0 && func_0209d3d0(buf, s, 0x3f) == 1) {
                _ZN12Unk_020d893813func_0202d1d4EP16Unk_020d8938_Tbl(this, ((u8 *)&nZ::data_021bf514[46]));
                _ZN12Unk_020d893813func_0202d120Ej(this, q);
            }
            break;
        }
        }
    }
    if (_ZN12Unk_020d893813func_0202d114Ev(this) == 0) {
        _ZN12Unk_020d893813func_0202d1d4EP16Unk_020d8938_Tbl(this, data_021be650);
    }
    if (unk_ac) {
        (this->*unk_ac)(&out);
    }
    b = out.unk_04;
    _ZN12Unk_020660f813func_02067abcEPhPv(unk_3c, &b, out.unk_00);
}
}

namespace F25 {
void Unk_0201d2d0::func_0202b0b4(Unk_0201d2d0_Out *out) {
    Unk_0201d2d0_Data local = data_020d7a80;
    u32 t = func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c));
    u32 r7 = 0;
    void *r6;
    s32 i;
    func_0202d048(this, &unk_120.unk_08, &unk_120.unk_04, unk_fc->unk_82c, 0);
    if (_ZN12Unk_020d893813func_0201c7f8Ev(unk_fc)) {
        r6 = ((Unk_0202ab90_Parent *)_ZN12Unk_020d893813func_0201c7f8Ev(unk_fc))->unk_82c;
        r7 = func_02003098(_ZN12Unk_0208086013func_020805c4Ev(r6));
        func_0202d048(this, &unk_130, &unk_12c, r6, 0);
    }
    if (r7 < 6) {
        local.unk_00 = data_020d888c[r7];
    }
    if (local.unk_00 != 0) {
        func_0202d184(this, &unk_100, &unk_11e, 30, t, local.unk_00, local.unk_04, 0, 0);
        out->unk_00 = (u32)&unk_100;
        out->unk_04 = unk_11e;
    }
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
    _ZN12Unk_020d771413func_020157b8Ejj(this, _ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c), 0);
    if (_ZN12Unk_020d893813func_0201c7f8Ev(unk_fc)) {
        _ZN12Unk_020d771413func_020157b8Ejj(this, _ZN12Unk_0208086013func_020805c4Ev(((Unk_0202ab90_Parent *)_ZN12Unk_020d893813func_0201c7f8Ev(unk_fc))->unk_82c), 1);
    }
    for (i = 0; i < 5; i++) {
        _ZN12Unk_0201d2d013func_0202b4e8Ejj(this, i + 2, data_020c7518[i]);
    }
}
}

namespace F25 {
BOOL Unk_0201d2d0::func_0202b048() {
    Unk_0202ab90_Parent *p = unk_fc;
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(p->unk_82c)), data_020c76d8.unk_00, 9, p->unk_820 & 1, data_020c76d8.unk_04);
    _ZN12Unk_020d893813func_0202d1d4EP16Unk_020d8938_Tbl(this, data_021befd4);
    return TRUE;
}
}

namespace F25 {
BOOL Unk_0201d2d0::func_0202af68() {
    s32 r4 = 0;
    u32 r6;
    if (unk_120.unk_08 != 0) {
        r6 = 0;
        if (_ZN12Unk_0208091c13func_02080aa8Ev(unk_120.unk_08) == 0) {
            if (_ZN12Unk_0208091c13func_02080dd8Ev(unk_120.unk_08) >= 0x50) {
                if (func_02098ffc() != -1) {
                    _ZN12Unk_0208091c13func_02080abcEv(unk_120.unk_08);
                    r4 = 1;
                } else {
                    r4 = 2;
                }
            } else {
                r4 = 3;
            }
        }
        func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), data_020c76f8.unk_00, data_020c76f8.unk_04, r4, 0);
        if (_ZN12Unk_02002fc813func_020030b4Ev(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c))) {
            r6 = func_02002ff8(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c));
        }
        unk_198 = r6 < 0x9c ? 0x47d8 + r6 * 4 : 0x47d8;
        return TRUE;
    }
    return FALSE;
}
}

namespace F25 {
BOOL Unk_0201d2d0::func_0202aed8() {
    u32 v;
    func_0209cf88(&v);
    if (unk_120.unk_08 != 0 && _ZN12Unk_0208091c13func_02080dd8Ev(unk_120.unk_08) >= 0 && func_020796f8(data_021dfd8c, &v)) {
        func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), data_020c76e0.unk_00, data_020c76e0.unk_04, 0, 0);
        _ZN12Unk_020d893813func_0202d1d4EP16Unk_020d8938_Tbl(this, ((u8 *)&nZ::data_021befd4[6]));
        return TRUE;
    }
    return FALSE;
}
}

namespace F25 {
BOOL Unk_0201d2d0::func_0202ae30() {
    void *r6 = unk_fc->unk_82c;
    s32 flag = 0;
    s32 i;
    u32 buf[8];
    s32 n;
    for (i = 0; i < 8; i++) {
        buf[i] = flag;
    }
    n = func_0207f4a4(r6, buf, _ZN12Unk_0209865c13func_0209888cEv(func_0209750c()), 2);
    if (n > 0) {
        unk_134 = func_02021738(r6, buf, n, (void *)func_020215f8);
    }
    if (unk_134 == 0) {
        flag = 1;
    }
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), data_020c7598.unk_00, data_020c7598.unk_04, flag, 0);
    return TRUE;
}
}

namespace F25 {
BOOL Unk_0201d2d0::func_0202ad84() {
    u16 v[2];
    void *r4;
    if (func_02098ffc() != -1) {
        r4 = unk_fc->unk_82c;
        func_0207ceb4(v, r4);
        unk_198 = v[0];
        if (unk_198 != 0xfff1) {
            unk_19a = 1;
        } else {
            func_0202cdf4(&v[1]);
            unk_198 = v[1];
            unk_19a = 0;
        }
        func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(r4)), data_020c75b8.unk_00, data_020c75b8.unk_04, 0, 0);
        return TRUE;
    }
    return FALSE;
}
}

namespace F25 {
BOOL Unk_0201d2d0::func_0202ad04() {
    u16 v;
    if (func_02098ffc() != -1) {
        func_0202cdf4(&v);
        unk_198 = v;
        unk_19a = 0;
        func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), data_020c7850.unk_00, data_020c7850.unk_04, 0, 0);
        return TRUE;
    }
    return FALSE;
}
}

namespace F25 {
extern "C" void func_0202ac98(u16 *out, s32 idx) {
    Unk_0202ac98_Buf buf;
    s32 i, n;
    *out = 0xfff1;
    if (func_0209b334(idx) == 0 && (u32)idx < 5) {
        if (func_02098f90(&buf, data_020c7b08[idx]) > 0) {
            n = func_02063b8c(buf.unk_02);
            for (i = 0; i < 15; i++) {
                if ((buf.unk_00 >> i) & 1) {
                    if (n == 0) {
                        *out = func_02099048(i);
                        break;
                    }
                    n--;
                }
            }
        }
    }
}
}

namespace F25 {
extern "C" s32 func_0202ac7c(s32 x) {
    x = (x + 5) / 10 * 10;
    if (x < 10) {
        x = 10;
    }
    return x;
}
}

namespace F25 {
BOOL Unk_0201d2d0::func_0202ab90() {
    void *r6 = unk_fc->unk_82c;
    u16 v;
    func_0207e268(r6);
    func_0209a610();
    func_0202ac98(&v, _ZN12Unk_0209b3bc13func_0209b354Ev());
    unk_120.unk_00 = v;
    if (unk_120.unk_00 != 0xfff1) {
        s32 t = func_02063b74(0xccd) + 0xccd;
        t *= func_0204be70(&unk_120);
        unk_19c = (t >> 14) + func_0205b4f8() * 3;
        unk_19c = func_0202ac7c(unk_19c);
        if (unk_19c <= _ZN12Unk_02097d1c13func_02097d1cEi(_ZN12Unk_0209865c13func_02098750Ev(func_0209750c()), 1)) {
            func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(r6)), data_020c7570.unk_00, data_020c7570.unk_04, 0, 0);
            _ZN12Unk_020d771413func_02015958Eijiii(this, unk_19c, 1, 10, 1, 0);
            return TRUE;
        }
    }
    return FALSE;
}
}

namespace F24 {
BOOL Unk_0201d2d0::func_0202aac8() {
    void *p = unk_fc->unk_82c;
    u16 buf[3];
    func_0207e268(p);
    func_0209a610();
    func_0202ac98(&buf[0], _ZN12Unk_0209b3bc13func_0209b354Ev());
    unk_120.unk_00 = buf[0];
    if (unk_120.unk_00 != 0xfff1) {
        func_0207ceb4(&buf[1], p);
        unk_198 = buf[1];
        if (unk_198 != 0xfff1) {
            unk_19a = 1;
        } else {
            func_0202cdf4(&buf[2]);
            unk_198 = buf[2];
            unk_19a = 0;
        }
        func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(p)), data_020c7600.unk_00, data_020c7600.unk_04, 0, 0);
        return TRUE;
    }
    return FALSE;
}
}

namespace F24 {
BOOL Unk_0201d2d0::func_0202a994() {
    void *p = unk_fc->unk_82c;
    u16 buf[2];
    s32 t, u;
    func_0207e268(p);
    func_0209a610();
    _ZN12Unk_0209b3bc13func_0209b354Ev();
    if (func_02098ffc() != -1) {
        func_0207ceb4(&buf[0], p);
        unk_198 = buf[0];
        if (unk_198 != 0xfff1) {
            unk_19a = 1;
        } else {
            func_0202cdf4(&buf[1]);
            unk_198 = buf[1];
            unk_19a = 0;
        }
        if (unk_198 != 0xfff1) {
            t = func_02063b74(0xccd) + 0xccd;
            t = (t * func_0204be70(&unk_198)) >> 12;
            u = func_0205b4f8() * 3;
            if (t <= u) {
                u = 0;
            }
            unk_19c = func_0202ac7c(t - u);
            if (unk_19c > 0xbb8) {
                unk_19c = 0xbb8;
            }
            if (unk_19c <= _ZN12Unk_02097d1c13func_02097d1cEi(_ZN12Unk_0209865c13func_02098750Ev(func_0209750c()), 1)) {
                func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(p)), data_020c77a0.unk_00, data_020c77a0.unk_04, 0, 0);
                _ZN12Unk_020d771413func_02015958Eijiii(this, unk_19c, 2, 10, 1, 0);
                return TRUE;
            }
        }
    }
    return FALSE;
}
}

namespace F24 {
void Unk_0201d2d0::func_0202a750(Unk_0201d2d0_Out *out) {
    static Unk_0202a750_Fn tbl[9] = { data_020d7a08, data_020d79e8, data_020d7918, data_020d7a18, data_020d7920, data_020d7910, data_020d79f0, data_020d7be0, data_020d7d98 };
    s32 r, i;
    u8 arr[9];
    r = 0;
    func_02116048(data_020c7a38, arr, 9);
    func_0202d048(this, &unk_120.unk_08, &unk_120.unk_04, unk_fc->unk_82c, r);
    while (r == 0) {
        i = _ZN12Unk_0201d2d013func_02020a00Eii(this, arr, 9);
        if (i >= 0 && i < 9) {
            r = (this->*tbl[i])();
            if (r == 0) {
                arr[i] = 0;
            }
        } else {
            (this->*tbl[func_02063b8c(2)])();
            break;
        }
    }
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
    _ZN12Unk_0201d2d013func_0202b4e8Ejj(this, 4, 3);
    _ZN12Unk_0201d2d013func_0202b4e8Ejj(this, 6, 4);
    if (unk_120.unk_00 != 0xfff1) {
        _ZN12Unk_020d771413func_0201578cEjjj(this, &unk_120, 0, 7);
    }
    if (unk_198 != 0xfff1) {
        _ZN12Unk_020d771413func_0201578cEjjj(this, &unk_198, 1, 7);
        _ZN12Unk_020d771413func_0201578cEjjj(this, &unk_198, 2, 7);
    }
    unk_168 = data_020d7ee8;
    unk_170 = data_020d7cb0;
    unk_178 = data_020d7c98;
    unk_180 = data_020d7d30;
    unk_188 = data_020d7ae0;
}
}

namespace nZ {
extern "C" {
void * data_020d7ac8[2] = {
    (void *)_ZN12Unk_02027a3413func_02028058EP16Unk_02027a34_Outj, 0,
};
void * data_020d7a90[2] = {
    (void *)_ZN12Unk_0201d2d013func_02024d38Ev, 0,
};
const void *const data_020c7970[2] = {
    (void *)data_020d84c8, (void *)0x3,
};
void * data_020d7e20[2] = {
    (void *)_ZN12Unk_0201d2d013func_02022224Ev, 0,
};
void * data_020d7d70[2] = {
    (void *)_ZN12Unk_0201d2d013func_0201db44Ev, 0,
};
char data_020d8588[11] = "tsu_se_act";
void * data_020d7bf8[2] = {
    (void *)data_020d81f8, (void *)0x3,
};
const void *const data_020c7938[2] = {
    (void *)data_020d7de8, (void *)0x5,
};
const u8 data_020c7508[4] = {
    0x01, 0x00, 0x03, 0x02,
};
void * data_020d8828[5] = {
    (void *)data_020d8138, (void *)data_020d8794, (void *)data_020d8144, (void *)data_020d8794,
    (void *)data_020d8794,
};
const void *const data_020c79d8[2] = {
    (void *)data_020d830c, (void *)0x3,
};
char data_020d8594[11] = "tsu_no_act";
char data_020d78e0[7] = "ai_joy";
void * data_020d7d08[2] = {
    (void *)_ZN12Unk_02027a3413func_0202830cEPvS0_, 0,
};
char data_020d78a0[6] = "3p_ta";
const void *const data_020c77a0[2] = {
    (void *)data_020d79b0, (void *)0x3,
};
char data_020d85ac[11] = "ai_foreign";
void * data_020d7c08[2] = {
    (void *)_ZN12Unk_0201d2d013func_0202203cEv, 0,
};
void * data_020d7d48[2] = {
    (void *)_ZN12Unk_0201d2d013func_02024554Ev, 0,
};
const void *const data_020c77f0[2] = {
    (void *)data_020d81bc, (void *)0x4,
};
char data_020d8774[13] = "ev_countdown";
const void *const data_020c7810[2] = {
    (void *)data_020d8408, (void *)0x4,
};
char data_020d78e8[7] = "ap_buy";
const void *const data_020c7850[2] = {
    (void *)data_020d872c, (void *)0x3,
};
void * data_020d7ae8[2] = {
    (void *)_ZN12Unk_0201dc4413func_0201dca0Ev, 0,
};
char data_020d8784[13] = "q01_con2_4_5";
char data_020d81ec[9] = "ai_snow1";
const void *const data_020c7710[2] = {
    (void *)data_020d8774, (void *)0x2,
};
const u8 data_020c7520[5] = {
    0x1a, 0x17, 0x14, 0x11, 0x0e,
};
const void *const data_020c7678[2] = {
    (void *)data_020d78b0, (void *)0x3,
};
const void *const data_020c7a08[2] = {
    (void *)data_020d863c, (void *)0x3,
};
void * data_020d79f8[2] = {
    (void *)_ZN12Unk_02027a3413func_02028058EP16Unk_02027a34_Outj, 0,
};
const void *const data_020c75f8[2] = {
    (void *)data_020d84a4, (void *)0x3,
};
Unk_021be8c0 data_021bee08[9];
const void *const data_020c77b8[2] = {
    (void *)data_020d78d0, (void *)0x3,
};
void * data_020d7c58[2] = {
    (void *)_ZN12Unk_0201d2d013func_020235c0Ev, 0,
};
u8 data_021be5e0[2];
const void *const data_020c7660[2] = {
    (void *)data_020d8348, (void *)0x2,
};
void * data_020d7ad0[2] = {
    (void *)_ZN12Unk_0201c07813func_0201c384EP12Unk_020d8938, 0,
};
void * data_020d7c78[2] = {
    (void *)_ZN12Unk_020238b013func_02023900Ev, 0,
};
void * data_020d7f58[2] = {
    (void *)_ZN12Unk_0202134013func_02021448EPPvi, 0,
};
void * data_020d7c70[2] = {
    (void *)_ZN12Unk_0201d2d013func_02023800Ev, 0,
};
char data_020d83b4[10] = "tsu_dress";
void * data_020d7f98[2] = {
    (void *)_ZN12Unk_0202134013func_02021448EPPvi, 0,
};
const void *const data_020c7758[2] = {
    (void *)data_020d80a8, (void *)0x3,
};
void * data_020d7908[2] = {
    (void *)_ZN12Unk_0201d2d013func_02027324Ev, 0,
};
void * data_020d7b98[2] = {
    (void *)_ZN12Unk_0201d2d013func_02021ef8Ev, 0,
};
void * data_020d7da0[2] = {
    (void *)_ZN12Unk_020238b013func_02023a58Ev, 0,
};
const void *const data_020c77f8[2] = {
    (void *)data_020d7870, (void *)0x3,
};
char data_020d85b8[11] = "tsu_always";
Unk_021be8c0 data_021bebb0[8];
char data_020d83cc[10] = "q02_nlose";
char data_020d81f8[9] = "q04_miss";
char data_020d85d0[11] = "tsu_friend";
char data_020d83d8[10] = "ai_30days";
const u32 data_020c7ab8[5] = {
    0x00000001, 0x000000e6, 0x000000e8, 0x000000ea, 0x000000e8,
};
void * data_020d7b70[2] = {
    (void *)_ZN12Unk_0201d2d013func_020244b0Ev, 0,
};
void * data_020d8914[7] = {
    (void *)data_020d86cc, (void *)data_020d86cc, (void *)data_020d86d8, (void *)data_020d86d8,
    (void *)data_020d86d8, (void *)data_020d86e4, (void *)data_020d86e4,
};
const void *const data_020c7acc[5] = {
    (void *)func_02025fcc, (void *)func_02025f88, 0, (void *)func_02025f44,
    (void *)func_02025f10,
};
char data_020d83e4[10] = "ai_indoor";
char data_020d83f0[10] = "ai_today1";
const void *const data_020c7740[2] = {
    (void *)data_020d8654, (void *)0x1,
};
void * data_020d7c48[2] = {
    (void *)_ZN12Unk_020d893813func_0201d160Ev, 0,
};
char data_020d8228[9] = "tsu_spot";
void * data_020d7a08[2] = {
    (void *)_ZN12Unk_0201d2d013func_0202b048Ev, 0,
};
const u8 data_020c7a5c[12] = {
    0x71, 0x30, 0x35, 0x5f, 0x63, 0x6c, 0x65, 0x61, 0x72, 0x00, 0x00, 0x00,
};
const void *const data_020c7618[2] = {
    (void *)data_020d8480, (void *)0x1,
};
void * data_020d7a38[2] = {
    (void *)_ZN12Unk_0201c07813func_0201c444EP12Unk_020d8938, 0,
};
void * data_020d7a30[2] = {
    (void *)_ZN12Unk_020d893813func_0201d184Ev, 0,
};
void * data_020d7cd8[2] = {
    (void *)_ZN12Unk_02027a3413func_02028058EP16Unk_02027a34_Outj, 0,
};
const void *const data_020c7568[2] = {
    (void *)data_020d806c, (void *)0x3,
};
const void *const data_020c77d0[2] = {
    (void *)data_020d8450, (void *)0x3,
};
const u32 data_020c7a68[3] = {
    0x00000000, 0x00000002, 0x00000001,
};
void * data_020d7920[2] = {
    (void *)_ZN12Unk_0201d2d013func_0202ad84Ev, 0,
};
const void *const data_020c75d0[2] = {
    (void *)data_020d7978, (void *)0x5,
};
const void *const data_020c7838[2] = {
    (void *)data_020d8354, (void *)0x2,
};
char data_020d87b4[14] = "tsu_happyroom";
const void *const data_020c7ae0[5] = {
    (void *)func_02025e98, (void *)func_02025e48, 0, (void *)func_02025df8,
    (void *)func_02025dbc,
};
const void *const data_020c7848[2] = {
    (void *)data_020d7b10, (void *)0x5,
};
void * data_020d7d90[2] = {
    (void *)_ZN12Unk_0202134013func_02021684EPPvi, 0,
};
const void *const data_020c7878[2] = {
    (void *)data_020d87b4, (void *)0x1,
};
const void *const data_020c7828[2] = {
    (void *)data_020d8714, (void *)0x2,
};
void * data_020d7d78[2] = {
    (void *)_ZN12Unk_0201d2d013func_02024b68Ev, 0,
};
void * data_020d7d40[2] = {
    (void *)_ZN12Unk_0201f7d013func_0201fe30Ev, 0,
};
u8 data_021be5e4[3];
u32 data_020d7d38[2] = {
    0x00000000, 0x00000003,
};
void * data_020d7cc8[2] = {
    (void *)_ZN12Unk_0201d2d013func_02029f58Ev, 0,
};
u8 data_020d85dc[11] = "q03_thanks";
u32 data_020d7a80[2] = {
    0x00000000, 0x00000003,
};
void * data_020d7b28[2] = {
    (void *)_ZN12Unk_020d893813func_0201d250Ev, 0,
};
u8 data_020d85e8[11] = "q04_thanks";
void * data_020d7aa0[2] = {
    (void *)_ZN17Unk_0202ce90_Base13func_0202ce90Ev, 0,
};
char data_020d83fc[10] = "ai_persis";
void * data_020d7d10[2] = {
    (void *)_ZN12Unk_0201d2d013func_02024cd8Ev, 0,
};
const void *const data_020c75c8[2] = {
    (void *)data_020d7b50, (void *)0x3,
};
char data_020d8600[11] = "tsu_memory";
char data_020d79b0[8] = "ap_sell";
const void *const data_020c7818[2] = {
    (void *)data_020d824c, (void *)0x3,
};
char data_020d8414[10] = "tsu_shome";
const void *const data_020c7978[2] = {
    (void *)data_020d80d8, (void *)0x3,
};
char data_020d8258[9] = "ap_trade";
void * data_020d79e0[2] = {
    (void *)_ZN12Unk_02027a3413func_02028058EP16Unk_02027a34_Outj, 0,
};
char data_020d8420[10] = "tsu_ghome";
void * data_020d7bd8[2] = {
    (void *)_ZN12Unk_0201d2d013func_02026f1cEv, 0,
};
const void *const data_020c7b4c[7] = {
    0, 0, (void *)func_02025cb0, (void *)func_02025cb0,
    (void *)func_02025c80, (void *)func_02025c80, (void *)func_02025c04,
};
const void *const data_020c7730[2] = {
    (void *)data_020d83f0, (void *)0x3,
};
char data_020d842c[10] = "ev_admire";
void * data_020d7938[2] = {
    (void *)_ZN12Unk_02027a3413func_02028058EP16Unk_02027a34_Outj, 0,
};
char data_020d7a00[8] = "q10_req";
void * data_020d8864[5] = {
    (void *)data_020d860c, (void *)data_020d8618, (void *)data_020d8624, 0,
    (void *)data_020d8630,
};
const void *const data_020c7610[2] = {
    (void *)data_020d8078, (void *)0x3,
};
const void *const data_020c7768[2] = {
    (void *)data_020d809c, (void *)0x2,
};
const void *const data_020c7638[2] = {
    (void *)data_020d8054, (void *)0x1,
};
char data_020d8624[11] = "q03_return";
const void *const data_020c7560[2] = {
    (void *)data_020d8060, (void *)0x3,
};
void * data_020d7910[2] = {
    (void *)_ZN12Unk_0201d2d013func_0202ad04Ev, 0,
};
char data_020d8720[12] = "ap_present1";
Unk_021be8c0 data_021bec70[8];
void * data_020d7da8[2] = {
    (void *)_ZN12Unk_0201d2d013func_0202a54cEv, 0,
};
char data_020d872c[12] = "ap_present2";
void * data_020d7f50[2] = {
    (void *)_ZN12Unk_0201d2d013func_02022994Ev, 0,
};
char data_020d8270[9] = "q02_comp";
const void *const data_020c77a8[2] = {
    (void *)data_020d82ac, (void *)0x3,
};
const void *const data_020c7948[2] = {
    (void *)data_020d7b80, (void *)0x3,
};
void * data_020d8878[5] = {
    (void *)data_020d8264, (void *)data_020d8270, (void *)data_020d827c, (void *)data_020d8438,
    (void *)data_020d8288,
};
void * data_020d7ce0[2] = {
    (void *)_ZN12Unk_0202134013func_02021564EPPvi, 0,
};
Unk_021be8c0 data_021bea78[6];
char data_020d7f68[8] = "q06_end";
char data_020d8630[11] = "q05_return";
char data_020d827c[9] = "q03_comp";
void * data_020d7a60[2] = {
    (void *)_ZN12Unk_0201d2d013func_020248e4Ev, 0,
};
void * data_020d7a68[2] = {
    (void *)_ZN12Unk_02027a3413func_02028058EP16Unk_02027a34_Outj, 0,
};
void * data_020d7a70[2] = {
    (void *)_ZN12Unk_0201d2d013func_0202516cEv, 0,
};
const void *const data_020c79d0[2] = {
    (void *)data_020d80c0, (void *)0x3,
};
void * data_020d79a0[2] = {
    (void *)_ZN12Unk_020d893813func_0201cd48Ev, 0,
};
char data_020d863c[12] = "q06_payback";
const void *const data_020c75b0[2] = {
    (void *)data_020d803c, (void *)0x2,
};
void * data_020d7a88[2] = {
    (void *)_ZN12Unk_0201d2d013func_02024fdcEv, 0,
};
char data_020d8030[9] = "etc_push";
void * data_020d79e8[2] = {
    (void *)_ZN12Unk_0201d2d013func_0202ae30Ev, 0,
};
char data_020d78d0[7] = "q_item";
const void *const data_020c77c8[2] = {
    (void *)data_020d7cc0, (void *)0x3,
};
const void *const data_020c7578[2] = {
    (void *)data_020d803c, (void *)0x2,
};
char data_020d7a10[8] = "q01_pay";
const void *const data_020c75d8[2] = {
    (void *)data_020d86b4, (void *)0x3,
};
void * data_020d7900[2] = {
    (void *)_ZN12Unk_02027a3413func_02028058EP16Unk_02027a34_Outj, 0,
};
const void *const data_020c7600[2] = {
    (void *)data_020d8258, (void *)0x3,
};
void * data_020d78f0[2] = {
    (void *)_ZN12Unk_02027a3413func_02028058EP16Unk_02027a34_Outj, 0,
};
const u8 data_020c7528[5] = {
    0x1a, 0x17, 0x14, 0x11, 0x0e,
};
void * data_020d7928[2] = {
    (void *)_ZN12Unk_02027a3413func_02028058EP16Unk_02027a34_Outj, 0,
};
char data_020d8648[12] = "q10_reserve";
char data_020d845c[11] = "q12_thanks";
const void *const data_020c7590[2] = {
    (void *)data_020d8648, (void *)0x3,
};
void * data_020d7c98[2] = {
    (void *)_ZN12Unk_020d893813func_0201cfd8Ev, 0,
};
void * data_020d88a4[7] = {
    (void *)data_020d84f8, (void *)data_020d84f8, (void *)data_020d8504, (void *)data_020d8504,
    (void *)data_020d8504, (void *)data_020d8504, (void *)data_020d8504,
};
char data_020d8054[9] = "q07_over";
Unk_021be8c0 data_021bf514[47];
void * data_020d8018[2] = {
    (void *)_ZN12Unk_0201d2d013func_020270ecEv, 0,
};
void * data_020d7ca0[2] = {
    (void *)_ZN12Unk_02027a3413func_02028058EP16Unk_02027a34_Outj, 0,
};
void * data_020d7cd0[2] = {
    (void *)_ZN12Unk_0201d2d013func_020244b0Ev, 0,
};
const void *const data_020c77e8[2] = {
    (void *)data_020d7c40, (void *)0x3,
};
char data_020d8660[12] = "ev_fmarket1";
const u32 data_020c7a84[4] = {
    0x00000000, 0x00000002, 0x00000003, 0x00000004,
};
void * data_020d786c[1] = {
    (void *)data_020d7864,
};
char data_020d8060[9] = "q06_lost";
}
}

namespace F24 {
void Unk_0201d2d0::func_0202a6e0() {
    Unk_0201d568_S s;
    func_0201c95c(this, &s);
    func_0201c938(this, &s, 0, 0x4b, 0x4f, ((u8 *)&nZ::data_021befd4[1]));
    func_0201c938(this, &s, 1, 0x50, 0x54, ((u8 *)&nZ::data_021befd4[5]));
    s.unk_20 = 2;
    s.unk_21 = -1;
    _ZN12Unk_020d893813func_0201c870EPv(this, &s);
    func_0202d1c0(data_020d7ac8);
    _ZN12Unk_020660f813func_020679c0Ei(unk_3c, 1);
}
}

namespace F24 {
void Unk_0201d2d0::func_0202a680(Unk_0201d2d0_Out *out) {
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), data_020c76d8.unk_00, 4, 1, data_020c76d8.unk_04);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}
}

namespace F24 {
void Unk_0201d2d0::func_0202a618(s32) {
    func_02115fb4(data_021be6c0, 0, 0x20);
    if (unk_fc->unk_820 == 0) {
        _ZN12Unk_020d771013func_0201511cEjjjh(this, 0x15, data_021be6c0, 10, 0);
    } else {
        _ZN12Unk_020d771013func_0201511cEjjjh(this, 0x16, data_021be6c0, 16, 0);
    }
    _ZN12Unk_020d771013func_020151d0Ei(this, 6);
    func_0202d33c(data_020d7da8);
}
}

namespace F24 {
void Unk_0201d2d0::func_0202a54c() {
    u8 b;
    Unk_0201d2d0_Out out;
    void *p;
    if (func_0206ed18()) {
        p = unk_fc->unk_82c;
        _ZN12Unk_020d893813func_0202d1d4EP16Unk_020d8938_Tbl(this, ((u8 *)&nZ::data_021befd4[3]));
        if (unk_fc->unk_820 == 0) {
            func_0207fb04(p, func_0206ecf0(), 10);
        } else if (unk_120.unk_08 != 0 && func_02080f94(unk_120.unk_08)) {
            _ZN12Unk_0208091c13func_02080b80EPvi((void *)unk_120.unk_08, func_0206ecf0(), 16);
        } else {
            u32 v = func_0206ecf0();
            _ZN12Unk_0207e94013func_0207f1a8EPviS0_(p, v, 16, _ZN12Unk_0209865c13func_0209888cEv(func_0209750c()));
        }
    }
    if (unk_ac) {
        (this->*unk_ac)(&out);
    }
    b = out.unk_04;
    _ZN12Unk_020660f813func_02067a84EPhPv(unk_3c, &b, out.unk_00);
}
}

namespace F24 {
void Unk_0201d2d0::func_0202a540() {
    func_0202a618(0);
}
}

namespace F24 {
void Unk_0201d2d0::func_0202a4d4(Unk_0201d2d0_Out *out) {
    func_0200303c(&unk_100, 30, data_020c76d8.unk_00, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)));
    if (unk_fc->unk_820 == 0) {
        unk_11e = 6;
    } else {
        unk_11e = 11;
    }
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}
}

namespace F24 {
void Unk_0201d2d0::func_0202a468() {
    Unk_0201d568_S s;
    func_0201c95c(this, &s);
    func_0201c938(this, &s, 0, 0x4a, 0x4a, ((u8 *)&nZ::data_021befd4[4]));
    func_0201c938(this, &s, 1, 0x49, 0x49, ((u8 *)&nZ::data_021befd4[2]));
    s.unk_20 = 2;
    s.unk_21 = -1;
    _ZN12Unk_020d893813func_0201c870EPv(this, &s);
    func_0202d1c0(data_020d7db0);
    _ZN12Unk_020660f813func_020679c0Ei(unk_3c, 1);
}
}

namespace F24 {
void Unk_0201d2d0::func_0202a3e4(Unk_0201d2d0_Out *out) {
    Unk_0201d2d0_Parent *p = unk_fc;
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(p->unk_82c)), data_020c76d8.unk_00, 5, p->unk_820 & 1, data_020c76d8.unk_04);
    unk_11e += 7;
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
    unk_fc->unk_820 = (unk_fc->unk_820 + 1) & 1;
}
}

namespace F24 {
void Unk_0201d2d0::func_0202a378(Unk_0201d2d0_Out *out) {
    func_0200303c(&unk_100, 30, data_020c76d8.unk_00, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)));
    if (unk_fc->unk_820 == 0) {
        unk_11e = 2;
    } else {
        unk_11e = 3;
    }
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}
}

namespace F24 {
void Unk_0201d2d0::func_0202a30c() {
    Unk_0201d568_S s;
    func_0201c95c(this, &s);
    func_0201c938(this, &s, 0, 0x45, 0x45, ((u8 *)&nZ::data_021befd4[7]));
    func_0201c938(this, &s, 1, 0x46, 0x46, ((u8 *)&nZ::data_021befd4[12]));
    s.unk_20 = 2;
    s.unk_21 = -1;
    _ZN12Unk_020d893813func_0201c870EPv(this, &s);
    func_0202d1c0(data_020d7ad8);
    _ZN12Unk_020660f813func_020679c0Ei(unk_3c, 1);
}
}

namespace F24 {
void Unk_0201d2d0::func_0202a2b8(Unk_0201d2d0_Out *out) {
    func_0200303c(&unk_100, 30, data_020c76e0, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)));
    unk_11e = 2;
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}
}

namespace F24 {
extern "C" BOOL func_0202a238(void *a, void *b, u32 c) {
    s32 base, mask, i, j, k, r;
    u8 v;
    if (c < 6) {
        base = data_020c7538[c];
    } else {
        base = 0;
    }
    mask = 0xff;
    k = 8;
    for (i = 0; i < 8; i++) {
        r = func_02063b8c(k);
        for (j = 0; j < 8; j++) {
            if ((mask >> j) & 1) {
                if (r == 0) {
                    v = j + base;
                    if (func_020b30e0(a, b, &v)) {
                        return TRUE;
                    }
                    mask = (u8)(mask & ~(1 << j));
                    break;
                }
                r--;
            }
        }
        k--;
    }
    return FALSE;
}
}

namespace F23 {
void Unk_0201d2d0::func_0202a18c() {
    u32 x;
    Unk_02029f58_T a;
    Unk_02029f58_T b;
    void *r4 = _ZN12Unk_0209865c13func_0209888cEv(func_0209750c());
    _ZN12Unk_020e1c64C1Ev(&a);
    _ZN12Unk_020e1c64C1Ev(&b);
    _ZN12Unk_020940a013func_020940d0EP12Unk_020e2a78(r4, &b);
    if (func_0202a238(&a, &b, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c))) == 0) {
        _ZN12Unk_020e2a7813func_020a7bd8EPS_(&a, &b);
    }
    if (unk_128 != 0) {
        func_0209cf88(&x);
        _ZN12Unk_0208091c13func_02080cf8EPv(unk_128, &a);
        func_020796d4(data_021dfd8c, &x);
    } else {
        func_0207f368(unk_fc->unk_82c, &a, r4);
    }
    _ZN12Unk_020660f813func_02067a3cEiPv(unk_3c, 0, &a);
    _ZN12Unk_020e1c64D1Ev(&b);
    _ZN12Unk_020e1c64D1Ev(&a);
}
}

namespace F23 {
void Unk_0201d2d0::func_0202a0c8() {
    u8 b;
    Unk_0201d2d0_Out out;
    Unk_0201d568_S s;
    if (unk_128 != 0 && _ZN12Unk_0208091c13func_02080dd8Ev() >= 0x40) {
        func_0201c95c(this, &s);
        func_0201c938(this, &s, 0, 0x47, 0x47, ((u8 *)&nZ::data_021befd4[8]));
        func_0201c938(this, &s, 1, 0x48, 0x48, ((u8 *)&nZ::data_021befd4[11]));
        s.unk_20 = 2;
        s.unk_21 = -1;
        _ZN12Unk_020d893813func_0201c870EPv(this, &s);
        func_0202d1c0(data_020d7ab8);
        _ZN12Unk_020660f813func_020679c0Ei(unk_3c, 1);
    } else {
        _ZN12Unk_020d893813func_0202d1d4EP16Unk_020d8938_Tbl(this, ((u8 *)&nZ::data_021befd4[11]));
        if (unk_ac) {
            (this->*unk_ac)(&out);
        }
        b = out.unk_04;
        _ZN12Unk_020660f813func_02067abcEPhPv(unk_3c, &b, out.unk_00);
    }
}
}

namespace F23 {
void Unk_0201d2d0::func_0202a074(Unk_0201d2d0_Out *out) {
    func_0200303c(&unk_100, 30, data_020c76e0, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)));
    unk_11e = 3;
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}
}

namespace F23 {
void Unk_0201d2d0::func_0202a030(s32 unused) {
    func_02115fb4(data_021be6c0, 0, 0x20);
    _ZN12Unk_020d771013func_0201511cEjjjh(this, 0x11, data_021be6c0, 8, 0);
    _ZN12Unk_020d771013func_020151d0Ei(this, 6);
    func_0202d33c(data_020d7cc8);
}
}

namespace F23 {
void Unk_0201d2d0::func_02029f58() {
    u8 b;
    Unk_0201d2d0_Out out;
    Unk_02029f58_T t;
    if (func_0206ed18() != 0) {
        void *r4 = unk_fc->unk_82c;
        _ZN12Unk_020d893813func_0202d1d4EP16Unk_020d8938_Tbl(this, ((u8 *)&nZ::data_021befd4[9]));
        if (unk_128 != 0 && func_02080f94(unk_128) != 0) {
            _ZN12Unk_0208091c13func_02080cccEPvi(unk_128, func_0206ecf0(), 8);
        } else {
            void *r6 = func_0206ecf0();
            unk_128 = func_0207f344(r4, r6, 8, _ZN12Unk_0209865c13func_0209888cEv(func_0209750c()));
        }
        if (unk_128 != 0) {
            _ZN12Unk_020e1c64C1Ev(&t);
            _ZN12Unk_0208091c13func_02080d4cEPv(unk_128, &t);
            _ZN12Unk_020660f813func_02067a3cEiPv(unk_3c, 0, &t);
            _ZN12Unk_020e1c64D1Ev(&t);
        }
    }
    if (unk_ac) {
        (this->*unk_ac)(&out);
    }
    b = out.unk_04;
    _ZN12Unk_020660f813func_02067a84EPhPv(unk_3c, &b, out.unk_00);
}
}

namespace F23 {
void Unk_0201d2d0::func_02029f04(Unk_0201d2d0_Out *out) {
    func_0200303c(&unk_100, 30, data_020c76e0, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)));
    unk_11e = 4;
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}
}

namespace F23 {
void Unk_0201d2d0::func_02029e98() {
    Unk_0201d568_S s;
    func_0201c95c(this, &s);
    func_0201c938(this, &s, 0, 0x4a, 0x4a, ((u8 *)&nZ::data_021befd4[11]));
    func_0201c938(this, &s, 1, 0x49, 0x49, ((u8 *)&nZ::data_021befd4[10]));
    s.unk_20 = 2;
    s.unk_21 = -1;
    _ZN12Unk_020d893813func_0201c870EPv(this, &s);
    func_0202d1c0(data_020d7f18);
    _ZN12Unk_020660f813func_020679c0Ei(unk_3c, 1);
}
}

namespace F23 {
void Unk_0201d2d0::func_02029e8c() {
    func_0202a030(0);
}
}

namespace F23 {
void Unk_0201d2d0::func_02029e38(Unk_0201d2d0_Out *out) {
    func_0200303c(&unk_100, 30, data_020c76e0, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)));
    unk_11e = 5;
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}
}

namespace F23 {
void Unk_0201d2d0::func_02029de4(Unk_0201d2d0_Out *out) {
    func_0200303c(&unk_100, 30, data_020c76e0, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)));
    unk_11e = 1;
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}
}

namespace F23 {
void Unk_0201d2d0::func_02029d84(Unk_0201d2d0_Out *out) {
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), data_020c76b0.unk_00, data_020c76b0.unk_04, 0, 0);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}
}

namespace F23 {
BOOL Unk_0201d2d0::func_02029c74(s32 a, s32 b) {
    void *r6;
    void *p;
    BOOL result;
    r6 = func_02099db4(b, 0);
    p = func_0209a4f0(r6);
    result = FALSE;
    if (_ZN12Unk_0209ada413func_0209ad68Ev(p) != 0 && _ZN12Unk_0209ada413func_0209abccEv(p) == 1) {
        Unk_02029c74_Rec *r4 = (Unk_02029c74_Rec *)func_0209a4e4(r6, 1);
        Unk_02029c74_Rec *r7 = (Unk_02029c74_Rec *)_ZN12Unk_0208086013func_020805c4Ev((void *)a);
        if (r7->unk_00 == r4->unk_00 && func_02128930(r7->unk_02, r4->unk_02, 8) == 0 && r7->unk_0b == r4->unk_0b && func_0209a42c(r6) == 0) {
            s32 t = _ZN12Unk_0209ada413func_0209ac64Ev(p);
            switch (t) {
            case 0xe:
            case 0x10:
            case 0x11: {
                Unk_0201d568_S s;
                func_0201c95c(this, &s);
                unk_15c = r6;
                _ZN12Unk_020d893813func_0202d120Ej(this, p);
                func_0201c938(this, &s, 0, 0x1d, 0x1d, ((u8 *)&nZ::data_021bf514[28]));
                func_0201c91c(this, &s, 1, data_020c74fc, data_021be730);
                func_0201c91c(this, &s, 2, data_020c7500, data_021be668);
                s.unk_20 = 3;
                s.unk_21 = s.unk_20 - 1;
                _ZN12Unk_020d893813func_0201c870EPv(this, &s);
                func_0202d1c0(data_020d7a98);
                _ZN12Unk_020660f813func_020679c0Ei(unk_3c, 1);
                result = TRUE;
            }
            }
        }
    }
    return result;
}
}

namespace F23 {
BOOL Unk_0201d2d0::func_02029a88(s32 a, s32 b) {
    struct { void *p10; Unk_02029a88_Pair pair; } l;
    void *p;
    void *v;
    s32 r6;
    u8 cnt;
    BOOL r7;
    Unk_0201d568_S s;
    v = func_02099d44(b, _ZN12Unk_0208086013func_020805c4Ev((void *)a), 1);
    if (v != 0) {
        p = func_0209a4f0(v);
    } else {
        p = 0;
    }
    r6 = p != 0 ? _ZN12Unk_0209ada413func_0209abccEv(p) : 4;
    r7 = FALSE;
    if (r6 == 0 || r6 == 2) {
        if (func_0209a42c(v) == 0) {
            cnt = 0;
            l.pair.unk_00 = cnt;
            l.pair.unk_04 = cnt;
            l.p10 = func_0209750c();
            func_0209d498(&l.pair);
            func_0201c95c(this, &s);
            unk_15c = v;
            _ZN12Unk_020d893813func_0202d120Ej(this, p);
            _ZN12Unk_020d771413func_020157b8Ejj(this, func_0209a4e4(unk_15c, cnt), cnt);
            _ZN12Unk_020d771413func_020157b8Ejj(this, func_0209a4e4(unk_15c, 1), 1);
            _ZN12Unk_020d771413func_0201578cEjjj(this, _ZN12Unk_0209ada413func_0209ab94Ev(func_0202d114()), cnt, 7);
            if (func_0209d3d0(func_0209ac44(func_0202d114()), &l.pair, 0x3f) == -1) {
                if (r6 != 0) {
                    if (r6 == 2) {
                        func_0201c938(this, &s, cnt, 0x2b, 0x2b, ((u8 *)&nZ::data_021bf2a4[10]));
                        cnt++;
                        r7 = TRUE;
                    }
                } else {
                    func_0201c938(this, &s, cnt, 0x27, 0x27, ((u8 *)&nZ::data_021bf2a4[10]));
                    cnt++;
                    r7 = TRUE;
                }
            } else {
                if (r6 != 0) {
                    if (r6 == 2) {
                        func_0201c91c(this, &s, cnt, data_020c74f0, ((u8 *)&nZ::data_021bf2a4[13]));
                        cnt++;
                        r7 = TRUE;
                    }
                } else {
                    r6 = (s32)_ZN12Unk_0209865c13func_02098750Ev(l.p10);
                    if (func_0202cee4((void *)r6, _ZN12Unk_0209ada413func_0209ab94Ev(func_0209a4f0(unk_15c))) != -1) {
                        func_0201c91c(this, &s, cnt, data_020c74f4, ((u8 *)&nZ::data_021bf2a4[13]));
                        cnt++;
                        r7 = TRUE;
                    }
                }
            }
            if (r7 != 0) {
                func_0201c91c(this, &s, cnt, data_020c74fc, data_021be730);
                func_0201c91c(this, &s, (u8)(cnt + 1), data_020c7500, data_021be668);
                u8 t = cnt + 2;
                s.unk_20 = t;
                s.unk_21 = t - 1;
                _ZN12Unk_020d893813func_0201c870EPv(this, &s);
                func_0202d1c0(data_020d7a68);
                _ZN12Unk_020660f813func_020679c0Ei(unk_3c, 1);
            }
        }
    }
    return r7;
}
}

namespace F23 {
BOOL Unk_0201d2d0::func_02029968(s32 unused, s32 a, s32 b) {
    BOOL r = FALSE;
    unk_15c = func_02099db4(a, func_0209ac1c(b));
    if (unk_15c != 0) {
        Unk_0201d568_S s;
        func_0201c95c(this, &s);
        _ZN12Unk_020d893813func_0202d120Ej(this, func_0209a4f0(unk_15c));
        _ZN12Unk_020d771413func_020157b8Ejj(this, func_0209a4e4(unk_15c, r), r);
        _ZN12Unk_020d771413func_020157b8Ejj(this, func_0209a4e4(unk_15c, 1), 1);
        _ZN12Unk_020d771413func_0201578cEjjj(this, _ZN12Unk_0209ada413func_0209ab94Ev(func_0202d114()), r, 7);
        if (func_0209a42c(unk_15c) != 0) {
            func_0201c938(this, &s, r, 0x23, 0x23, ((u8 *)&nZ::data_021bf2a4[22]));
        } else {
            func_0201c938(this, &s, r, 0x1e, 0x1e, ((u8 *)&nZ::data_021bf2a4[21]));
        }
        func_0201c91c(this, &s, 1, data_020c74fc, data_021be730);
        func_0201c91c(this, &s, 2, data_020c7500, data_021be668);
        s.unk_20 = 3;
        s.unk_21 = s.unk_20 - 1;
        _ZN12Unk_020d893813func_0201c870EPv(this, &s);
        func_0202d1c0(data_020d7fd0);
        _ZN12Unk_020660f813func_020679c0Ei(unk_3c, 1);
        r = TRUE;
    }
    return r;
}
}

namespace F23 {
extern "C" BOOL func_02029948(u16 *p) {
    return Unk_020298c8_R1(p, 0x12b0, 0x12e7);
}
}

namespace F23 {
extern "C" BOOL func_02029918(u16 *p, s32 v) {
    BOOL r = FALSE;
    if (Unk_020298c8_R1(p, 0x12b0, 0x12e7) && v == 0) r = TRUE;
    return r;
}
}

namespace F23 {
extern "C" BOOL func_020298f8(u16 *p) {
    return Unk_020298c8_R1(p, 0x12e8, 0x131f);
}
}

namespace F23 {
extern "C" BOOL func_020298c8(u16 *p, s32 v) {
    BOOL r = FALSE;
    if (Unk_020298c8_R1(p, 0x12e8, 0x131f) && v == 0) r = TRUE;
    return r;
}
}

namespace F22 {
s32 Unk_0201d2d0::func_02029694(BOOL (*f)(u16 *), s32 pa, s32 pb) {
    BOOL a = TRUE;
    u8 idx = 0;
    BOOL res = FALSE;
    Unk_0201c870_Tbl buf;
    void *p, *q;
    u32 tmp;
    func_0201c95c(this, &buf);
    switch (_ZN12Unk_0209ada413func_0209abc4Ev(_ZN12Unk_020d893813func_0202d114Ev(this))) {
    case 0:
        p = func_0209a92c(unk_160);
        q = _ZN12Unk_0209865c13func_0209888cEv(func_0209750c());
        if (*(u16 *)q == *(u16 *)p && func_02128930((u8 *)q + 2, (u8 *)p + 2, 8) == 0 && _ZN12Unk_020940a013func_020941e8EPS_(q, p) != 0) {
            if (func_0209a938(unk_160) == 2) {
                if (f((u16 *)func_0209a8e8(unk_160)) != 0 && func_02098f30(&tmp, f) > 0) {
                    func_0201c938(this, &buf, idx, pa, pa, ((u8 *)&nZ::data_021bf514[8]));
                } else {
                    func_0201c938(this, &buf, 0, 0x14, 0x14, ((u8 *)&nZ::data_021bf514[6]));
                }
            } else {
                if (f((u16 *)_ZN12Unk_0209ada413func_0209ab94Ev(_ZN12Unk_020d893813func_0202d114Ev(this))) != 0) {
                    if (func_02098eb0(_ZN12Unk_0209ada413func_0209ab94Ev(_ZN12Unk_020d893813func_0202d114Ev(this))) != -1) {
                        func_0201c938(this, &buf, idx, pb, pb, ((u8 *)&nZ::data_021bf514[13]));
                    } else {
                        func_0201c938(this, &buf, idx, 0x14, 0x14, ((u8 *)&nZ::data_021bf514[6]));
                    }
                } else {
                    func_0201c938(this, &buf, idx, 0x14, 0x14, ((u8 *)&nZ::data_021bf514[6]));
                }
            }
            if (*(u16 *)_ZN12Unk_0209ada413func_0209ab94Ev(_ZN12Unk_020d893813func_0202d114Ev(this)) != 0xfff1) {
                _ZN12Unk_020d771413func_0201578cEjjj(this, _ZN12Unk_0209ada413func_0209ab94Ev(_ZN12Unk_020d893813func_0202d114Ev(this)), 0, 7);
            }
            idx++;
            res = TRUE;
        }
        break;
    case 1:
        if (func_02063b8c(10) & 1) {
            func_0201c91c(this, &buf, idx, data_020c74fc, ((u8 *)&nZ::data_021bf514[26]));
            a = idx;
            idx++;
        }
        res = TRUE;
        break;
    case 2:
        func_0201c91c(this, &buf, idx, data_020c74fc, ((u8 *)&nZ::data_021bf514[27]));
        idx++;
        a = res;
        res = TRUE;
        break;
    }
    if (res == TRUE) {
        if (a) {
            func_0201c91c(this, &buf, idx, data_020c74fc, data_021be730);
            idx++;
        }
        func_0201c91c(this, &buf, idx, data_020c7500, data_021be668);
        idx++;
        buf.count = idx;
        buf.unk_21 = idx - 1;
        _ZN12Unk_020d893813func_0201c870EPv(this, &buf);
        func_0202d1c0(data_020d7f78);
        _ZN12Unk_020660f813func_020679c0Ei(unk_3c, 1);
    }
    return res;
}
}

namespace F22 {
extern "C" BOOL func_02029658(u16 *p) {
    BOOL r = FALSE;
    if (func_0204b2d4(p)) {
        if (!Unk_020295d0_Range(p, 0x450c, 0x45db)) {
            r = TRUE;
        }
    }
    return r;
}
}

namespace F22 {
extern "C" BOOL func_0202963c(u16 *p, s32 x) {
    if (func_02029658(p) && x == 0) {
        return TRUE;
    }
    return FALSE;
}
}

namespace F22 {
extern "C" BOOL func_02029614(u16 *p) {
    if (Unk_020295d0_Range(p, 0x11a8, 0x12a7)) {
        return TRUE;
    }
    return FALSE;
}
}

namespace F22 {
extern "C" BOOL func_020295f8(u16 *p, s32 x) {
    if (func_02029614(p) && x == 0) {
        return TRUE;
    }
    return FALSE;
}
}

namespace F22 {
extern "C" BOOL func_020295d0(u16 *p) {
    if (Unk_020295d0_Range(p, 0x450c, 0x45db)) {
        return TRUE;
    }
    return FALSE;
}
}

namespace F22 {
extern "C" BOOL func_020295b4(u16 *p, s32 x) {
    if (func_020295d0(p) && x == 0) {
        return TRUE;
    }
    return FALSE;
}
}

namespace F22 {
s32 Unk_0201d2d0::func_02029440() {
    BOOL a = TRUE;
    u8 idx = 0;
    BOOL res = FALSE;
    Unk_0201c870_Tbl buf;
    void *p, *q;
    u32 tmp;
    func_0201c95c(this, &buf);
    switch (_ZN12Unk_0209ada413func_0209abc4Ev(_ZN12Unk_020d893813func_0202d114Ev(this))) {
    case 0:
        p = func_0209a92c(unk_160);
        q = _ZN12Unk_0209865c13func_0209888cEv(func_0209750c());
        if (*(u16 *)q == *(u16 *)p && func_02128930((u8 *)q + 2, (u8 *)p + 2, 8) == 0 && _ZN12Unk_020940a013func_020941e8EPS_(q, p) != 0) {
            if (func_02098f30(&tmp, func_02029658) > 0) {
                func_0201c938(this, &buf, idx, 0x1c, 0x1c, ((u8 *)&nZ::data_021bf514[18]));
            } else {
                func_0201c938(this, &buf, idx, 0x14, 0x14, ((u8 *)&nZ::data_021bf514[6]));
            }
            idx++;
            res = TRUE;
        }
        break;
    case 1:
        if (func_02063b8c(10) & a) {
            func_0201c91c(this, &buf, idx, data_020c74fc, ((u8 *)&nZ::data_021bf514[26]));
            a = idx;
            idx++;
        }
        res = TRUE;
        break;
    case 2:
        func_0201c91c(this, &buf, idx, data_020c74fc, ((u8 *)&nZ::data_021bf514[27]));
        idx++;
        a = res;
        res = TRUE;
        break;
    }
    if (res == TRUE) {
        if (a) {
            func_0201c91c(this, &buf, idx, data_020c74fc, data_021be730);
            idx++;
        }
        func_0201c91c(this, &buf, idx, data_020c7500, data_021be668);
        idx++;
        buf.count = idx;
        buf.unk_21 = idx - 1;
        _ZN12Unk_020d893813func_0201c870EPv(this, &buf);
        func_0202d1c0(data_020d79d8);
        _ZN12Unk_020660f813func_020679c0Ei(unk_3c, 1);
    }
    return res;
}
}

namespace F22 {
s32 Unk_0201d2d0::func_02029234() {
    BOOL a = TRUE;
    u8 idx = 0;
    BOOL res = FALSE;
    Unk_0201c870_Tbl buf;
    void *p, *q;
    u32 tmp;
    func_0201c95c(this, &buf);
    switch (_ZN12Unk_0209ada413func_0209abc4Ev(_ZN12Unk_020d893813func_0202d114Ev(this))) {
    case 0:
        p = func_0209a92c(unk_160);
        q = _ZN12Unk_0209865c13func_0209888cEv(func_0209750c());
        if (*(u16 *)q == *(u16 *)p && func_02128930((u8 *)q + 2, (u8 *)p + 2, 8) == 0 && _ZN12Unk_020940a013func_020941e8EPS_(q, p) != 0) {
            if (func_0209a938(unk_160) <= 1) {
                if (func_02098f30(&tmp, func_02029614) > 0) {
                    func_0201c938(this, &buf, idx, 0x1b, 0x1b, ((u8 *)&nZ::data_021bf514[18]));
                } else {
                    func_0201c938(this, &buf, idx, 0x14, 0x14, ((u8 *)&nZ::data_021bf514[6]));
                }
            } else {
                if (Unk_02029234_Range((u16 *)_ZN12Unk_0209ada413func_0209ab94Ev(_ZN12Unk_020d893813func_0202d114Ev(this)), 0x11a8, 0x12a7)) {
                    if (func_02098eb0(_ZN12Unk_0209ada413func_0209ab94Ev(_ZN12Unk_020d893813func_0202d114Ev(this))) != -1) {
                        func_0201c938(this, &buf, idx, 0x1b, 0x1b, ((u8 *)&nZ::data_021bf514[18]));
                    } else {
                        func_0201c938(this, &buf, idx, 0x14, 0x14, ((u8 *)&nZ::data_021bf514[6]));
                    }
                } else {
                    func_0201c938(this, &buf, idx, 0x14, 0x14, ((u8 *)&nZ::data_021bf514[6]));
                }
            }
            if (Unk_02029234_Range((u16 *)_ZN12Unk_0209ada413func_0209ab94Ev(_ZN12Unk_020d893813func_0202d114Ev(this)), 0x11a8, 0x12a7)) {
                _ZN12Unk_020d771413func_0201578cEjjj(this, _ZN12Unk_0209ada413func_0209ab94Ev(_ZN12Unk_020d893813func_0202d114Ev(this)), 0, 7);
            }
            idx++;
            res = TRUE;
        }
        break;
    case 1:
        res = TRUE;
        break;
    case 2:
        func_0201c91c(this, &buf, idx, data_020c74fc, ((u8 *)&nZ::data_021bf514[27]));
        idx++;
        a = res;
        res = TRUE;
        break;
    }
    if (res == TRUE) {
        if (a) {
            func_0201c91c(this, &buf, idx, data_020c74fc, data_021be730);
            idx++;
        }
        func_0201c91c(this, &buf, idx, data_020c7500, data_021be668);
        idx++;
        buf.count = idx;
        buf.unk_21 = idx - 1;
        _ZN12Unk_020d893813func_0201c870EPv(this, &buf);
        func_0202d1c0(data_020d7950);
        _ZN12Unk_020660f813func_020679c0Ei(unk_3c, 1);
    }
    return res;
}
}

namespace F22 {
extern "C" u32 func_020291b4(u16 *p) {
    void *s = _ZN12Unk_0209865c13func_02098750Ev(func_0209750c());
    u16 *q = _ZN12Unk_02097d1c13func_02097f6cEi(s, 0);
    u32 mask = 0;
    s32 i = 0;
    do {
        if (_ZN12Unk_02097d1c13func_02097eb0Ei(s, i) == 0) {
            BOOL r;
            if (func_0204b2d4(q)) {
                u32 a = func_0204b25c(q);
                r = (a == func_0204b25c(p)) ? TRUE : FALSE;
            } else {
                r = (*q == *p) ? TRUE : FALSE;
            }
            if (r) {
                mask = (u16)(mask | (1 << i));
            }
        }
        q++;
        i++;
    } while (i < 15);
    return mask;
}
}

namespace F22 {
extern "C" u32 func_020290ac(void *h) {
    void *s = _ZN12Unk_0209865c13func_02098750Ev(func_0209750c());
    u16 *q = _ZN12Unk_02097d1c13func_02097f6cEi(s, 0);
    u16 tmp;
    u16 l[3];
    u32 mask;
    s32 i, k;
    l[0] = 0xfff1;
    l[1] = 0xfff1;
    l[2] = 0xfff1;
    mask = 0;
    for (i = 0; i < 3; i++) {
        if (func_0209a89c(h, i) == 0) {
            func_0209a774(&tmp, func_0209a8e0(h), i);
            l[i] = tmp;
        } else {
            l[i] = 0xfff1;
        }
    }
    for (i = 0; i < 15; q++, i++) {
        if (_ZN12Unk_02097d1c13func_02097eb0Ei(s, i) == 0) {
            BOOL in = FALSE;
            if (*q >= 0x450c && *q <= 0x45db) {
                in = TRUE;
            }
            if (in) {
                for (k = 0; k < 3; k++) {
                    BOOL r;
                    if (func_0204b2d4(q)) {
                        u32 a = func_0204b25c(q);
                        r = (a == func_0204b25c(&l[k])) ? TRUE : FALSE;
                    } else {
                        r = (*q == l[k]) ? TRUE : FALSE;
                    }
                    if (r) {
                        mask = (u16)(mask | (1 << i));
                        break;
                    }
                }
            }
        }
    }
    return mask;
}
}

namespace F22 {
s32 Unk_0201d2d0::func_02028e94() {
    BOOL a = TRUE;
    u8 idx = 0;
    BOOL res = FALSE;
    Unk_0201c870_Tbl buf;
    void *p, *q;
    struct { u8 t[2]; u8 tmp[6]; } L;
    func_0201c95c(this, &buf);
    switch (_ZN12Unk_0209ada413func_0209abc4Ev(_ZN12Unk_020d893813func_0202d114Ev(this))) {
    case 0:
        p = func_0209a92c(unk_160);
        q = _ZN12Unk_0209865c13func_0209888cEv(func_0209750c());
        if (*(u16 *)q == *(u16 *)p && func_02128930((u8 *)q + 2, (u8 *)p + 2, 8) == 0 && _ZN12Unk_020940a013func_020941e8EPS_(q, p) != 0) {
            if (func_0209a938(unk_160) <= 1) {
                if (func_02098f30(L.tmp, func_020295d0) > 0) {
                    func_0201c938(this, &buf, idx, 0x1a, 0x1a, ((u8 *)&nZ::data_021bf514[18]));
                } else {
                    func_0201c938(this, &buf, idx, 0x14, 0x14, ((u8 *)&nZ::data_021bf514[6]));
                }
            } else if (func_0209a938(unk_160) >= 2) {
                if (func_020290ac(unk_160) != 0) {
                    func_0201c938(this, &buf, idx, 0x1a, 0x1a, ((u8 *)&nZ::data_021bf514[18]));
                } else {
                    func_0201c938(this, &buf, idx, 0x14, 0x14, ((u8 *)&nZ::data_021bf514[6]));
                }
            } else {
                func_0201c938(this, &buf, idx, 0x14, 0x14, ((u8 *)&nZ::data_021bf514[6]));
            }
            if (func_0209a938(unk_160) >= 2) {
                s32 r = func_0209a874((s32)func_0209a8e0(unk_160));
                if (r != -1) {
                    L.t[0] = r;
                    L.t[1] = 0;
                    _ZN12Unk_020d771413func_0201577cEjjj(this, 0, L.t, ((u8 *)"st_fossil"), &L.t[1]);
                }
            }
            idx++;
            res = TRUE;
        }
        break;
    case 1:
        if (func_02063b8c(10) & a) {
            func_0201c91c(this, &buf, idx, data_020c74fc, ((u8 *)&nZ::data_021bf514[26]));
            a = idx;
            idx++;
        }
        res = TRUE;
        break;
    case 2:
        func_0201c91c(this, &buf, idx, data_020c74fc, ((u8 *)&nZ::data_021bf514[27]));
        idx++;
        a = res;
        res = TRUE;
        break;
    }
    if (res == TRUE) {
        if (a) {
            func_0201c91c(this, &buf, idx, data_020c74fc, data_021be730);
            idx++;
        }
        func_0201c91c(this, &buf, idx, data_020c7500, data_021be668);
        idx++;
        buf.count = idx;
        buf.unk_21 = idx - 1;
        _ZN12Unk_020d893813func_0201c870EPv(this, &buf);
        func_0202d1c0(data_020d7960);
        _ZN12Unk_020660f813func_020679c0Ei(unk_3c, 1);
    }
    return res;
}
}

namespace F21 {
BOOL Unk_0201d2d0::func_02028a48(void *a, void *b, u32 c) {
    u8 cc[2];
    u16 v1, v2, v3, v4, v5, v6, v7, v8;
    Unk_0201d2d0_Key k;
    Unk_0201d2d0_Menu s;
    BOOL r7 = FALSE;
    s32 r5, r6;
    unk_160 = func_0209a60c(func_0207e268(a));
    _ZN12Unk_020d893813func_0202d120Ej(this, (void *)func_0209a940(unk_160));
    r5 = _ZN12Unk_0209ada413func_0209ac64Ev(_ZN12Unk_020d893813func_0202d114Ev(this));
    if (_ZN12Unk_020d893813func_0201c784Ev(unk_fc) == 0xb) {
        if (_ZN12Unk_020940a013func_02094218Ev(func_0209a92c(unk_160)) == 0) {
            r6 = func_0209a938(unk_160);
            v1 = *(u16 *)_ZN12Unk_0209ada413func_0209ab94Ev(_ZN12Unk_020d893813func_0202d114Ev(this));
            r5 = r7;
            k.w0 = r5;
            k.w1 = r5;
            func_0209d498(&k);
            switch (_ZN12Unk_0209ada413func_0209ac64Ev(_ZN12Unk_020d893813func_0202d114Ev(this))) {
            case 0:
                if (Unk_0202849c_F(r7)) {
                    func_0202d864(&v2, unk_fc);
                    if (!Unk_0202849c_R(&v2, 0x1376, 0x1376)) goto done;
                }
                if (r6 == 2) {
                    r5 = 1;
                    goto done;
                }
                if (Unk_0202849c_R(&v1, 0x12b0, 0x12e7) && func_0202c654(&v1, 0, 0x17, ((u8 *)&k)[4]) != 0) {
                    unk_120 = v1;
                } else {
                    func_02025ed4(&v3, this, r6);
                    unk_120 = v3;
                }
                if (Unk_02028a48_R1(&unk_120, 0x12b0, 0x12e7)) r5 = 1;
                break;
            case 1:
                if (Unk_0202849c_F(r7)) {
                    func_0202d864(&v4, unk_fc);
                    if (!Unk_0202849c_R(&v4, 0x1374, 0x1374)) goto done;
                }
                if (r6 == 2) {
                    r5 = 1;
                    goto done;
                }
                if (Unk_0202849c_R(&v1, 0x12e8, 0x131f) && func_0202c148(&v1, 0, 0x17, ((u8 *)&k)[4], ((u8 *)&k)[3]) != 0) {
                    unk_120 = v1;
                } else {
                    func_02025d80(&v5, this, r6);
                    unk_120 = v5;
                }
                if (Unk_02028a48_R1(&unk_120, 0x12e8, 0x131f)) r5 = 1;
                break;
            case 2:
                if (Unk_0202849c_F(r7)) {
                    func_0202d864(&v6, unk_fc);
                    if (!Unk_0202849c_R(&v6, 0x1369, 0x1369)) goto done;
                }
                {
                    volatile u16 *pv = &v1;
                    u16 a1 = *pv;
                    u16 b1 = *pv;
                    if (b1 != 0xfff1) unk_120 = a1;
                }
                r5 = 1;
                break;
            default:
                if (Unk_0202849c_F(r7)) {
                    func_0202d864(&v7, unk_fc);
                    if (v7 != 0xfff1) {
                        func_0202d864(&v8, unk_fc);
                        if (!Unk_0202849c_R(&v8, 0x1380, 0x139f)) goto done;
                    }
                }
                {
                    volatile u16 *pv = &v1;
                    u16 a1 = *pv;
                    u16 b1 = *pv;
                    if (b1 != 0xfff1) unk_120 = a1;
                }
                r5 = 1;
                break;
            }
done:
            if (r5 != 0) {
                func_0201c95c(this, &s);
                func_0201c91c(this, &s, 0, data_020c74fc, ((u8 *)&nZ::data_021bf514[3]));
                func_0201c91c(this, &s, 1, data_020c7500, data_021be668);
                s.unk_20 = 2;
                s.unk_21 = s.unk_20 - 1;
                _ZN12Unk_020d893813func_0201c870EPv(this, &s);
                func_0202d1c0(data_020d7980);
                _ZN12Unk_020660f813func_020679c0Ei(unk_3c, 1);
                r7 = TRUE;
            }
        } else {
            switch (r5) {
            case 0:
                r7 = func_02029694((void *)func_02029948, 0x28, 0x19);
                break;
            case 1:
                r7 = func_02029694((void *)func_020298f8, 0x29, 0x18);
                break;
            case 2:
                r7 = func_02028e94();
                break;
            case 3:
                r7 = func_02029234();
                break;
            case 4:
                r7 = func_02029440();
                if (r7 == 1) {
                    void *p = unk_fc->unk_82c;
                    cc[0] = func_02081364(func_0207f91c(p, func_0207cdb0(p)));
                    cc[1] = 0;
                    _ZN12Unk_020d771413func_0201577cEjjj(this, 0, cc, ((u8 *)"st_furniture_taste"), cc + 1);
                }
                break;
            }
        }
    }
    if (r7 == 0) {
        func_0201c95c(this, &s);
        func_0201c91c(this, &s, 0, data_020c74fc, data_021be730);
        func_0201c91c(this, &s, 1, data_020c7500, data_021be668);
        s.unk_20 = 2;
        s.unk_21 = s.unk_20 - 1;
        _ZN12Unk_020d893813func_0201c870EPv(this, &s);
        func_0202d1c0(data_020d7900);
        _ZN12Unk_020660f813func_020679c0Ei(unk_3c, 1);
        r7 = TRUE;
    }
    return r7;
}
}

namespace F21 {
void Unk_0201d2d0::func_020289f8(Unk_020289f8_S *p) {
    u32 r4 = p->unk_02;
    if (r4 >= 12) {
        r4 -= 12;
    }
    if (r4 == 0) {
        r4 = 12;
    }
    _ZN12Unk_020d771413func_02015848Ejj(this, p->unk_03, 0);
    _ZN12Unk_020d771413func_02015958Eijiii(this, r4, 1, 2, 0, 0);
    _ZN12Unk_020d771413func_02015958Eijiii(this, p->unk_01, 2, 2, 6, 9);
}
}

namespace F21 {
BOOL Unk_0201d2d0::func_020288d4(void *a, void *b, u32 c) {
    Unk_0201d2d0_Menu s;
    u8 *r7 = (u8 *)b + 0x88;
    void *r6 = r7 + 0xc;
    BOOL r4 = FALSE;
    if (_ZN12Unk_020d893813func_0201c784Ev(unk_fc) == 0xb && _ZN12Unk_0209ada413func_0209ad68Ev(r6) != 0 && _ZN12Unk_0209ada413func_0209ac64Ev(r6) == 0x15 && func_02099ed4(r7, _ZN12Unk_0208086013func_020805c4Ev(a)) != 0 && _ZN12Unk_0209ada413func_0209abc4Ev(r6) == 0) {
        func_0201c95c(this, &s);
        func_0201c938(this, &s, r4, 0x30, 0x30, ((u8 *)&nZ::data_021bf514[45]));
        func_0201c91c(this, &s, 1, data_020c7500, data_021be668);
        s.unk_20 = 2;
        s.unk_21 = s.unk_20 - 1;
        _ZN12Unk_020d893813func_0201c870EPv(this, &s);
        func_0202d1c0(data_020d7938);
        _ZN12Unk_020660f813func_020679c0Ei(unk_3c, 1);
        func_020289f8((Unk_020289f8_S *)(r7 + 0x18));
        r4 = TRUE;
    }
    if (r4 == 0) {
        func_0201c95c(this, &s);
        func_0201c91c(this, &s, 0, data_020c74fc, data_021be730);
        func_0201c91c(this, &s, 1, data_020c7500, data_021be668);
        s.unk_20 = 2;
        s.unk_21 = s.unk_20 - 1;
        _ZN12Unk_020d893813func_0201c870EPv(this, &s);
        func_0202d1c0(data_020d7928);
        _ZN12Unk_020660f813func_020679c0Ei(unk_3c, 1);
        r4 = TRUE;
    }
    return r4;
}
}

namespace F21 {
s32 Unk_0201d2d0::func_02028848(void *a, void *b) {
    s32 res;
    u32 r4;
    r4 = (u32)func_0209750c();
    res = 0;
    if (_ZN12Unk_02097ff413func_02098044Ej((void *)r4, 1) != 0) {
        goto end;
    }
    r4 = func_0207a914(data_021dfd8c, a, (void *)r4);
    if (r4 >= 0x16) {
        goto end;
    }
    switch (func_0209ad34()) {
    case 0:
        res = func_02028a48(a, b, r4);
        break;
    case 1:
        switch (func_0209acb8(r4)) {
        case 0:
            break;
        case 1:
            res = func_02029968(a, b, r4);
            break;
        case 3:
            res = func_020288d4(a, b, r4);
            break;
        }
        break;
    }
end:
    return res;
}
}

namespace F21 {
s32 Unk_0201d2d0::func_02028810() {
    u32 v;
    func_02133ef8(&v, 4);
    v = (u32)_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c);
    return func_0207bc44(data_021dfd8c, &v, 1);
}
}

namespace F21 {
BOOL Unk_0201d2d0::func_020286fc(void *a, void *b) {
    Unk_0201d2d0_Menu s;
    Unk_0201d2d0_Key k;
    void *r7 = func_02078578(func_0207e310(a));
    void *r4 = func_02099db4(b, _ZN12Unk_0209ada413func_0209ac10Ev());
    void *r6 = func_0209a610(func_0207e268(a));
    s32 t;
    k.w0 = 0;
    k.w1 = 0;
    func_0209d498(&k);
    if (r4 != NULL && _ZN12Unk_0209ada413func_0209ad68Ev(func_0209a4f0(r4)) == 0) {
        t = _ZN12Unk_0209ada413func_0209ac64Ev(r7);
        if (func_0209a49c(t, _ZN12Unk_0209b3bc13func_0209b354Ev(r6)) != 0 && _ZN12Unk_020d893813func_0201c784Ev(unk_fc) == 0xb && func_02079ab0(data_021dfd8c, &k) == -1 && func_02028810() != 0) {
            func_0201c95c(this, &s);
            unk_15c = r4;
            func_0201c91c(this, &s, 0, data_020c74fc, ((u8 *)&nZ::data_021bf2a4[1]));
            func_0201c91c(this, &s, 1, data_020c7500, data_021be668);
            _ZN12Unk_020d893813func_0202d120Ej(this, r7);
            s.unk_20 = 2;
            s.unk_21 = s.unk_20 - 1;
            _ZN12Unk_020d893813func_0201c870EPv(this, &s);
            func_0202d1c0(data_020d78f0);
            _ZN12Unk_020660f813func_020679c0Ei(unk_3c, 1);
            return TRUE;
        }
    }
    return FALSE;
}
}

namespace F21 {
BOOL Unk_0201d2d0::func_0202849c(void *a) {
    u16 v[8];
    Unk_0201d2d0_Menu s;
    void *r6 = func_02078578(func_0207e310(a));
    BOOL r4;
    v[0] = 0xfff1;
    r4 = FALSE;
    unk_160 = func_0209a60c(func_0207e268(a));
    if (_ZN12Unk_020d893813func_0201c784Ev(unk_fc) == 0xb) {
        switch (_ZN12Unk_0209ada413func_0209ac64Ev(r6)) {
        case 0:
            if (Unk_0202849c_F(r4)) {
                func_0202d864(&v[1], unk_fc);
                if (!Unk_0202849c_R(&v[1], 0x1376, 0x1376)) goto end;
            }
            func_02025ed4(&v[2], this, 0);
            v[0] = v[2];
            {
                BOOL ok = FALSE;
                volatile u16 *pv = &v[0];
                u16 a1 = *pv;
                u16 b1 = *pv;
                if (b1 >= 0x12b0 && a1 <= 0x12e7) ok = TRUE;
                if (ok) {
                    unk_120 = a1;
                    r4 = TRUE;
                }
            }
            break;
        case 1:
            if (Unk_0202849c_F(r4)) {
                func_0202d864(&v[3], unk_fc);
                if (!Unk_0202849c_R(&v[3], 0x1374, 0x1374)) goto end;
            }
            func_02025d80(&v[4], this, 0);
            v[0] = v[4];
            {
                BOOL ok = FALSE;
                volatile u16 *pv = &v[0];
                u16 a1 = *pv;
                u16 b1 = *pv;
                if (b1 >= 0x12e8 && a1 <= 0x131f) ok = TRUE;
                if (ok) {
                    unk_120 = a1;
                    r4 = TRUE;
                }
            }
            break;
        case 2:
            if (Unk_0202849c_F(r4)) {
                func_0202d864(&v[5], unk_fc);
                if (!Unk_0202849c_R(&v[5], 0x1369, 0x1369)) goto end;
            }
            r4 = TRUE;
            break;
        default:
            if (Unk_0202849c_F(r4)) {
                func_0202d864(&v[6], unk_fc);
                if (v[6] != 0xfff1) {
                    func_0202d864(&v[7], unk_fc);
                    if (!Unk_0202849c_R(&v[7], 0x1380, 0x139f)) goto end;
                }
            }
            r4 = TRUE;
            break;
        }
    }
end:
    if (r4) {
        func_0201c95c(this, &s);
        func_0201c91c(this, &s, 0, data_020c74fc, ((u8 *)&nZ::data_021bf514[3]));
        _ZN12Unk_020d893813func_0202d120Ej(this, r6);
        func_0201c91c(this, &s, 1, data_020c7500, data_021be668);
        s.unk_20 = 2;
        s.unk_21 = s.unk_20 - 1;
        _ZN12Unk_020d893813func_0201c870EPv(this, &s);
        func_0202d1c0(data_020d78f8);
        _ZN12Unk_020660f813func_020679c0Ei(unk_3c, 1);
        return TRUE;
    }
    return FALSE;
}
}

namespace F21 {
BOOL Unk_0201d2d0::func_0202839c(void *a, void *b) {
    void *r6;
    Unk_0201d2d0_Key k;
    s32 t = (s32)func_02078578(func_0207e310(a));
    r6 = (u8 *)b + 0x88;
    k.w0 = 0;
    k.w1 = 0;
    func_0209d498(&k);
    if (_ZN12Unk_020cbb1813func_02072e88Ei(data_020cbb18, *(s32 *)((u8 *)data_020cbb18 + 0x64)) == 0) {
        r6 = (u8 *)r6 + 0xc;
        if (_ZN12Unk_0209ada413func_0209ad68Ev(r6) == 0 && func_0207dff4(a, b) == 0 && func_0207e1f0(a) == 3 && _ZN12Unk_020d893813func_0201c784Ev(unk_fc) == 0xb && func_0207fa50(a, 1, &k) == -1 && func_02079f54(1, &k) == 0xb) {
            Unk_0201d2d0_Menu s;
            func_0201c95c(this, &s);
            func_0201c91c(this, &s, 0, data_020c74fc, ((u8 *)&nZ::data_021bf514[39]));
            func_0201c91c(this, &s, 1, data_020c7500, data_021be668);
            _ZN12Unk_020d893813func_0202d120Ej(this, (void *)t);
            s.unk_20 = 2;
            s.unk_21 = s.unk_20 - 1;
            _ZN12Unk_020d893813func_0201c870EPv(this, &s);
            func_0202d1c0(data_020d79f8);
            _ZN12Unk_020660f813func_020679c0Ei(unk_3c, 1);
            return TRUE;
        }
    }
    return FALSE;
}
}

namespace F20 {
BOOL Unk_02027a34::func_0202830c(void *a, void *b) {
    void *s = func_02078578(func_0207e310(a));
    BOOL r = FALSE;
    if (_ZN12Unk_0209ada413func_0209ad68Ev(s) != 0) {
        if (_ZN12Unk_02097ff413func_02098044Ej(func_0209750c(), 1) == 0) {
            if (func_02063b8c(100) < 30) {
                switch (_ZN12Unk_0209ada413func_0209ad28Ev(s)) {
                case 0:
                    r = func_0202849c(a, b);
                    break;
                case 1:
                    switch (_ZN12Unk_0209ada413func_0209acacEv(s)) {
                    case 0:
                        break;
                    case 1:
                        r = func_020286fc(a, b);
                        break;
                    case 3:
                        r = func_0202839c(a, b);
                        break;
                    }
                    break;
                }
            }
        }
    }
    return r;
}
}

namespace F20 {
BOOL Unk_02027a34::func_020281d8(void *arg) {
    Unk_02027a34_Menu s;
    void *r7 = data_021dfd8c;
    s32 r4 = func_0207a484(r7);
    if (r4 != -1) {
        if (r4 == func_0207e334(arg)) {
            void *p = func_0207a4b8(r7);
            void *v = _ZN12Unk_020994cc13func_0209978cEv(p);
            if (_ZN12Unk_0209ada413func_0209ad68Ev(v) != 0) {
                if (_ZN12Unk_020994cc13func_02099624EP17Unk_020994cc_Date(p, 0) != 0) {
                    u16 *q = _ZN12Unk_020994cc13func_020994ccEv(p);
                    if (q != NULL) {
                        if (_ZN12Unk_020940a013func_02094218Ev(q) != 0) {
                            u16 *r6 = _ZN12Unk_0209865c13func_0209888cEv(func_0209750c());
                            u8 *msg;
                            func_0201c95c(this, &s);
                            if (r6[0] == q[0] && func_02128930(r6 + 1, q + 1, 8) == 0 && _ZN12Unk_020940a013func_020941e8EPS_(r6, q) != 0) {
                                if (_ZN12Unk_0209ada413func_0209abc4Ev(v) == 1) {
                                    msg = ((u8 *)&nZ::data_021bf514[37]);
                                } else {
                                    msg = ((u8 *)&nZ::data_021bf514[33]);
                                }
                            } else if (_ZN12Unk_020994cc13func_020996b0EP16Unk_020994cc_Ent(p, r6) != 0) {
                                msg = ((u8 *)&nZ::data_021bf514[32]);
                            } else {
                                msg = ((u8 *)&nZ::data_021bf514[31]);
                            }
                            func_0201c91c(this, &s, 0, data_020c74fc, msg);
                            func_0201c91c(this, &s, 1, data_020c7500, data_021be668);
                            s.unk_20 = 2;
                            s.unk_21 = s.unk_20 - 1;
                            _ZN12Unk_020d893813func_0201c870EPv(this, &s);
                            func_0202d1c0(data_020d79b8);
                            _ZN12Unk_020660f813func_020679c0Ei(unk_3c, 1);
                            _ZN12Unk_020d771413func_020157e8Ejj(this, q, 1);
                            return TRUE;
                        }
                    }
                }
            }
        }
    }
    return FALSE;
}
}

namespace F20 {
void Unk_02027a34::func_020280c0() {
    static Unk_02027a34_TestFn tbl[5] = { (Unk_02027a34_TestFn)data_020d7c60, (Unk_02027a34_TestFn)data_020d8000, (Unk_02027a34_TestFn)data_020d7ce8, (Unk_02027a34_TestFn)data_020d7d00, (Unk_02027a34_TestFn)data_020d7d08 };
    void *r6 = unk_fc->unk_82c;
    void *r7 = _ZN12Unk_0209865c13func_0209865cEv(func_0209750c());
    s32 i;
    for (i = 0; i < 5; i++) {
        if ((this->*tbl[i])(r6, r7) != 0) {
            break;
        }
    }
    if (i == 5) {
        Unk_02027a34_Menu s;
        func_0201c91c(this, &s, 0, data_020c74fc, data_021be730);
        func_0201c91c(this, &s, 1, data_020c7500, data_021be668);
        s.unk_20 = 2;
        s.unk_21 = s.unk_20 - 1;
        _ZN12Unk_020d893813func_0201c870EPv(this, &s);
        func_0202d1c0(data_020d7cd8);
        _ZN12Unk_020660f813func_020679c0Ei(unk_3c, 1);
    }
}
}

namespace nZ {
extern "C" {
char data_020d8468[11] = "tsu_event1";
void * data_020d7aa8[2] = {
    (void *)_ZN12Unk_0201d2d013func_0201db88Ev, 0,
};
const void *const data_020c7650[2] = {
    (void *)data_020d8324, (void *)0x3,
};
void * data_020d7ab0[2] = {
    (void *)_ZN12Unk_0201f7d013func_0201ff9cEv, 0,
};
const void *const data_020c75a8[2] = {
    (void *)data_020d8048, (void *)0x1,
};
void * data_020d7998[2] = {
    (void *)_ZN12Unk_0201d2d013func_02023118Ev, 0,
};
void * data_020d7988[2] = {
    (void *)_ZN12Unk_0201d2d013func_02027424Ev, 0,
};
void * data_020d7980[2] = {
    (void *)_ZN12Unk_02027a3413func_02028058EP16Unk_02027a34_Outj, 0,
};
}
}

namespace F20 {
void Unk_02027a34::func_02028058(Unk_02027a34_Out *, u32 idx) {
    u8 b;
    Unk_02027a34_Out out;
    if (unk_13c[idx] != NULL) {
        _ZN12Unk_020d893813func_0202d1d4EP16Unk_020d8938_Tbl(this, unk_13c[idx]);
    } else {
        _ZN12Unk_020d893813func_0202d20cEv(this);
    }
    if (unk_ac) {
        (this->*unk_ac)(&out);
        if (out.unk_00 != 0) {
            b = out.unk_04;
            _ZN12Unk_020660f813func_02067abcEPhPv(unk_3c, &b, out.unk_00);
        }
    }
}
}

namespace F20 {
void Unk_02027a34::func_02027fd8(Unk_02027a34_Out *out) {
    Unk_02027a34_Data *d = NULL;
    s32 t = _ZN12Unk_0209ada413func_0209ac64Ev(_ZN12Unk_020d893813func_0202d114Ev(this));
    switch (t) {
    case 10:
        d = &data_020c77e8;
        break;
    case 19:
        d = &data_020c77c8;
        break;
    }
    if (d != NULL) {
        func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), d->unk_00, d->unk_04, 0, 0);
    }
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}
}

namespace F20 {
void Unk_02027a34::func_02027f88() {
    u32 buf;
    func_02133ef8(&buf, 4);
    buf = (u32)_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c);
    unk_158 = _ZN12Unk_0208086013func_020805c4Ev(func_0207bc44(data_021dfd8c, &buf, 1));
    _ZN12Unk_020d771413func_020157b8Ejj(this, unk_158, 1);
}
}

namespace F20 {
void Unk_02027a34::func_02027f34() {
    u8 b;
    Unk_02027a34_Out out;
    _ZN12Unk_020d893813func_0202d1d4EP16Unk_020d8938_Tbl(this, ((u8 *)&nZ::data_021bf2a4[2]));
    if (unk_ac) {
        (this->*unk_ac)(&out);
    }
    b = out.unk_04;
    _ZN12Unk_020660f813func_02067abcEPhPv(unk_3c, &b, out.unk_00);
}
}

namespace F20 {
void Unk_02027a34::func_02027e9c(Unk_02027a34_Out *out) {
    u8 tbl[3];
    tbl[0] = data_020d7868[0];
    tbl[1] = data_020d7868[1];
    tbl[2] = data_020d7868[2];
    unk_155 = func_02063b8c(3);
    unk_154 = tbl[unk_155];
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), data_020c77e0.unk_00, data_020c77e0.unk_04, unk_155, 0);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}
}

namespace F20 {
void Unk_02027a34::func_02027dec() {
    Unk_02027a34_Menu s;
    u8 *r4 = ((u8 *)&nZ::data_021bf2a4[4]);
    s32 t = _ZN12Unk_0209ada413func_0209ac64Ev(_ZN12Unk_020d893813func_0202d114Ev(this));
    switch (t) {
    case 10:
        if (func_0209750c() != NULL) {
            if (_ZN12Unk_02097d1c13func_02097edcEv(_ZN12Unk_0209865c13func_02098750Ev(func_0209750c())) != -1) {
                r4 = ((u8 *)&nZ::data_021bf2a4[5]);
            }
        }
        break;
    case 19:
        if (func_020991fc() != -1) {
            r4 = ((u8 *)&nZ::data_021bf2a4[5]);
        }
        break;
    }
    func_0201c95c(this, &s);
    func_0201c938(this, &s, 0, 0x21, 0x21, r4);
    func_0201c938(this, &s, 1, 0x22, 0x22, ((u8 *)&nZ::data_021bf2a4[3]));
    s.unk_20 = 2;
    s.unk_21 = s.unk_20 - 1;
    _ZN12Unk_020d893813func_0201c870EPv(this, &s);
    func_0202d1c0(data_020d7c90);
    _ZN12Unk_020660f813func_020679c0Ei(unk_3c, 1);
}
}

namespace F20 {
void Unk_02027a34::func_02027d78(Unk_02027a34_Out *out) {
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), data_020c77f8.unk_00, data_020c77f8.unk_04, 0, 0);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
    unk_c4 = data_020d7c28;
}
}

namespace F20 {
void Unk_02027a34::func_02027d5c() {
    _ZN12Unk_0209ada413func_0209ad80Ev(_ZN12Unk_020d893813func_0202d114Ev(this));
    func_0207a624(data_021dfd8c);
}
}

namespace F20 {
void Unk_02027a34::func_02027cfc(Unk_02027a34_Out *out) {
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), data_020c7678.unk_00, data_020c7678.unk_04, 0, 0);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}
}

namespace F20 {
void Unk_02027a34::func_02027cf8() {
}
}

namespace F20 {
void Unk_02027a34::func_02027c6c(Unk_02027a34_Out *out) {
    Unk_02027a34_Data *d = NULL;
    s32 t = _ZN12Unk_0209ada413func_0209ac64Ev(_ZN12Unk_020d893813func_0202d114Ev(this));
    switch (t) {
    case 10:
        d = &data_020c7800;
        break;
    case 19:
        d = &data_020c7658;
        break;
    }
    if (d != NULL) {
        func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), d->unk_00, d->unk_04, 0, 0);
    }
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
    unk_156 = 0x5e;
}
}

namespace F20 {
void Unk_02027a34::func_02027c24() {
    if (_ZN12Unk_020d893813func_0202d114Ev(this) != NULL) {
        void *p = func_0209ac44(_ZN12Unk_020d893813func_0202d114Ev(this));
        func_0209d498(p);
        func_0209d258(p, unk_154);
        _ZN12Unk_0209ada413func_0209ab98Eh(_ZN12Unk_020d893813func_0202d114Ev(this), unk_155);
    }
}
}

namespace F20 {
void Unk_02027a34::func_02027b1c() {
    void *p7 = func_0209750c();
    _ZN12Unk_0209865c13func_0209865cEv(p7);
    void *r6 = unk_fc->unk_82c;
    s32 r4 = 2;
    if (unk_15c != NULL) {
        s32 t = _ZN12Unk_0209ada413func_0209ac64Ev(_ZN12Unk_020d893813func_0202d114Ev(this));
        void *h = _ZN12Unk_0208086013func_020805c4Ev(r6);
        func_0209a4f4(unk_15c, t, h, unk_158);
        _ZN12Unk_0209ada413func_0209ad80Ev(_ZN12Unk_020d893813func_0202d114Ev(this));
        func_0207a624(data_021dfd8c);
        _ZN12Unk_020d893813func_0202d120Ej(this, func_0209a4f0(unk_15c));
        unk_120 = *(u16 *)_ZN12Unk_0209ada413func_0209ab94Ev(_ZN12Unk_020d893813func_0202d114Ev(this));
        s32 k = _ZN12Unk_0209ada413func_0209ac64Ev(_ZN12Unk_020d893813func_0202d114Ev(this));
        switch (k) {
        case 10: {
            s32 q = _ZN12Unk_02097d1c13func_02097edcEv(_ZN12Unk_0209865c13func_02098750Ev(p7));
            _ZN12Unk_02097d1c13func_02097f30EPtij(_ZN12Unk_0209865c13func_02098750Ev(p7), &unk_120, q, r4);
            break;
        }
        case 19: {
            s32 x = func_020991e4();
            if (x != 0) {
                func_0209a2c0(unk_15c, x);
            }
            r4 = 0;
            break;
        }
        }
    }
    _ZN12Unk_020d771013func_02014e60EPtjjj(this, &unk_120, r4, 5, 0);
    func_0202d33c(data_020d7aa0);
    func_0202d294(data_020d7a48);
}
}

namespace F20 {
s32 Unk_02027a34::func_02027b08() {
    return _ZN12Unk_0209ada413func_0209ac64Ev(_ZN12Unk_020d893813func_0202d114Ev(this));
}
}

namespace F20 {
void Unk_02027a34::func_02027a34(Unk_02027a34_Out *out) {
    Unk_02027a34_Data *d = NULL;
    s32 t = _ZN12Unk_0209ada413func_0209ac64Ev(_ZN12Unk_020d893813func_0202d114Ev(this));
    switch (t) {
    case 10:
        d = &data_020c75a8;
        break;
    case 19:
        d = &data_020c7638;
        break;
    }
    if (d != NULL) {
        u32 v = func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c));
        func_0202d184(this, &unk_100, &unk_11e, 30, v, d->unk_00, d->unk_04, (u32)_ZN12Unk_0209ada413func_0209abacEv(_ZN12Unk_020d893813func_0202d114Ev(this)), 0);
        if (unk_15c != NULL) {
            _ZN12Unk_020d771413func_020157b8Ejj(this, func_0209a4e4(unk_15c, 0), 0);
            _ZN12Unk_020d771413func_020157b8Ejj(this, func_0209a4e4(unk_15c, 1), 1);
            _ZN12Unk_020d771413func_0201578cEjjj(this, _ZN12Unk_0209ada413func_0209ab94Ev(_ZN12Unk_020d893813func_0202d114Ev(this)), 0, 7);
        }
    }
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}
}

namespace F19 {
void Unk_0201d2d0::func_020279a0() {
    Unk_0201d2d0_Out out;
    u8 b;
    void *r5 = _ZN12Unk_0209865c13func_02098750Ev(func_0209750c());
    if (_ZN12Unk_0209ada413func_0209ac64Ev(_ZN12Unk_020d893813func_0202d114Ev(this)) == 19) {
        r5 = func_0202ceb0(r5);
        if (r5 != 0) {
            if (_ZN12Unk_0206555413func_02065578Ev(r5) == 7) {
                _ZN12Unk_020d893813func_0202d1d4EP16Unk_020d8938_Tbl(this, ((u8 *)&nZ::data_021bf2a4[7]));
            } else {
                _ZN12Unk_020d893813func_0202d1d4EP16Unk_020d8938_Tbl(this, ((u8 *)&nZ::data_021bf2a4[8]));
            }
            func_02065c94(r5);
        }
    }
    if (unk_ac) {
        (this->*unk_ac)(&out);
    }
    b = out.unk_04;
    _ZN12Unk_020660f813func_02067abcEPhPv(unk_3c, &b, out.unk_00);
}
}

namespace F19 {
void Unk_0201d2d0::func_0202787c() {
    Unk_02027324_S c;
    Unk_0201d2d0_Out out;
    s32 r4;
    void *r6 = _ZN12Unk_0209865c13func_02098750Ev(func_0209750c());
    switch (_ZN12Unk_0209ada413func_0209ac64Ev(_ZN12Unk_020d893813func_0202d114Ev(this))) {
    case 10:
        r4 = func_0202cee4(r6, _ZN12Unk_0209ada413func_0209ab94Ev(_ZN12Unk_020d893813func_0202d114Ev(this)));
        if (r4 != -1) {
            unk_120 = *(u16 *)_ZN12Unk_0209ada413func_0209ab94Ev(_ZN12Unk_020d893813func_0202d114Ev(this));
            c.unk_02 = 0xfff1;
            _ZN12Unk_02097d1c13func_02097f30EPtij(r6, &c.unk_02, r4, 0);
            _ZN12Unk_020d893813func_0202d1d4EP16Unk_020d8938_Tbl(this, ((u8 *)&nZ::data_021bf2a4[7]));
        } else {
            _ZN12Unk_020d893813func_0202d1d4EP16Unk_020d8938_Tbl(this, ((u8 *)&nZ::data_021bf2a4[8]));
        }
        if (unk_ac) {
            (this->*unk_ac)(&out);
        }
        c.unk_00 = out.unk_04;
        _ZN12Unk_020660f813func_02067abcEPhPv(unk_3c, &c.unk_00, out.unk_00);
        break;
    case 19:
        unk_120 = 0x1565;
        _ZN12Unk_0201442013func_02014ce4EPtjjj(this, &unk_120, 0, 5, 0);
        func_0202d33c(data_020d7a50);
        break;
    }
    r4 = (s32)_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c);
    func_0207ab90(data_021dfd8c, (void *)r4, func_0209a4e4(unk_15c, 1), -10);
}
}

namespace F19 {
void Unk_0201d2d0::func_020277fc(Unk_0201d2d0_Out *out) {
    Unk_0201d2d0_Data *r4 = 0;
    switch (_ZN12Unk_0209ada413func_0209ac64Ev(_ZN12Unk_020d893813func_0202d114Ev(this))) {
    case 10:
        r4 = &data_020c7a08;
        break;
    case 19:
        r4 = &data_020c7580;
        break;
    }
    if (r4 != 0) {
        func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), r4->unk_00, r4->unk_04, 0, 0);
    }
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}
}

namespace F19 {
void Unk_0201d2d0::func_020277b0() {
    if (_ZN12Unk_0209ada413func_0209ac64Ev(_ZN12Unk_020d893813func_0202d114Ev(this)) == 10) {
        _ZN12Unk_0201442013func_02014ce4EPtjjj(this, &unk_120, 2, 5, 0);
        func_0202d33c(data_020d7c10);
    }
    func_0209a588(unk_15c);
}
}

namespace F19 {
void Unk_0201d2d0::func_02027730(Unk_0201d2d0_Out *out) {
    Unk_0201d2d0_Data *r4 = 0;
    switch (_ZN12Unk_0209ada413func_0209ac64Ev(_ZN12Unk_020d893813func_0202d114Ev(this))) {
    case 10:
        r4 = &data_020c7560;
        break;
    case 19:
        r4 = &data_020c7558;
        break;
    }
    if (r4 != 0) {
        func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), r4->unk_00, r4->unk_04, 0, 0);
    }
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}
}

namespace F19 {
void Unk_0201d2d0::func_020276e8() {
    void *r4 = _ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c);
    func_0207ab90(data_021dfd8c, r4, func_0209a4e4(unk_15c, 1), -20);
    func_0209a588(unk_15c);
}
}

namespace F19 {
void Unk_0201d2d0::func_0202760c(Unk_0201d2d0_Out *out) {
    Unk_0201d2d0_Data *r4 = 0;
    switch (_ZN12Unk_0209ada413func_0209ac64Ev(_ZN12Unk_020d893813func_0202d114Ev(this))) {
    case 10:
        r4 = &data_020c7568;
        break;
    case 19:
        r4 = &data_020c7610;
        break;
    }
    if (r4 != 0) {
        func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), r4->unk_00, r4->unk_04, 0, 0);
        if (unk_15c != 0) {
            _ZN12Unk_020d771413func_020157b8Ejj(this, func_0209a4e4(unk_15c, 0), 0);
            _ZN12Unk_020d771413func_020157b8Ejj(this, func_0209a4e4(unk_15c, 1), 1);
            _ZN12Unk_020d771413func_0201578cEjjj(this, (u16 *)_ZN12Unk_0209ada413func_0209ab94Ev(_ZN12Unk_020d893813func_0202d114Ev(this)), 0, 7);
        }
    }
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
    unk_c4 = data_020d7930;
}
}

namespace F19 {
void Unk_0201d2d0::func_02027590() {
    void *r4;
    if (_ZN12Unk_0209ada413func_0209ac64Ev(_ZN12Unk_020d893813func_0202d114Ev(this)) == 19) {
        _ZN12Unk_0201442013func_02014ce4EPtjjj(this, (u16 *)_ZN12Unk_0209ada413func_0209ab94Ev(_ZN12Unk_020d893813func_0202d114Ev(this)), 0, 5, 0);
        func_0202d33c(data_020d7940);
    }
    r4 = _ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c);
    func_0207ab90(data_021dfd8c, r4, func_0209a4e4(unk_15c, 1), -20);
    func_0209a588(unk_15c);
}
}

namespace F19 {
void Unk_0201d2d0::func_02027530(Unk_0201d2d0_Out *out) {
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), data_020c7548.unk_00, data_020c7548.unk_04, 0, 0);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}
}

namespace F19 {
extern "C" BOOL func_02027500(u16 *p, s32 v) {
    BOOL r4 = FALSE;
    if (Unk_020270ec_R(p, 0x11a8, 0x12a7) && v == 2) {
        r4 = TRUE;
    }
    return r4;
}
}

namespace F19 {
void Unk_0201d2d0::func_02027490() {
    switch (_ZN12Unk_0209ada413func_0209ac64Ev(_ZN12Unk_020d893813func_0202d114Ev(this))) {
    case 10:
        _ZN12Unk_020d771013func_0201517cEjjj(this, (void *)func_02027500, 0xd, 0);
        _ZN12Unk_020d771013func_020151d0Ei(this, 0);
        func_0202d33c(data_020d7908);
        break;
    case 19:
        _ZN12Unk_020d771013func_02015170Ejj(this, 0x28, 1);
        _ZN12Unk_020d771013func_020151d0Ei(this, 2);
        func_0202d33c(data_020d7948);
        break;
    default:
        _ZN12Unk_020d771013func_020151d0Ei(this, 7);
        break;
    }
}
}

namespace F19 {
void Unk_0201d2d0::func_02027430(Unk_0201d2d0_Out *out) {
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), data_020c7550.unk_00, data_020c7550.unk_04, 0, 0);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}
}

namespace F19 {
void Unk_0201d2d0::func_02027424() {
    if (unk_3c != 0) {
        unk_3c->unk_08 = 1;
    }
}
}

namespace F19 {
void Unk_0201d2d0::func_02027324() {
    Unk_02027324_S c;
    Unk_0201d2d0_Out out;
    if (func_0206ed18() == 0) {
        if (_ZN12Unk_0209ada413func_0209ac64Ev(_ZN12Unk_020d893813func_0202d114Ev(this)) == 19 && unk_3c != 0) {
            unk_3c->unk_08 = 1;
        }
        _ZN12Unk_020d893813func_0202d1d4EP16Unk_020d8938_Tbl(this, ((u8 *)&nZ::data_021bf2a4[11]));
    } else {
        s32 r4 = 2;
        s32 r6 = func_0206ed38();
        void *r7 = _ZN12Unk_0209865c13func_02098750Ev(func_0209750c());
        switch (_ZN12Unk_0209ada413func_0209ac64Ev(_ZN12Unk_020d893813func_0202d114Ev(this))) {
        case 10:
            unk_120 = *_ZN12Unk_02097d1c13func_02097f6cEi(r7, r6);
            c.unk_02 = 0xfff1;
            _ZN12Unk_02097d1c13func_02097f30EPtij(r7, &c.unk_02, r6, 0);
            break;
        case 19:
            func_0202d328(data_020d7988);
            unk_120 = 0x1565;
            r4 = 0;
            break;
        }
        _ZN12Unk_020d893813func_0202d1d4EP16Unk_020d8938_Tbl(this, ((u8 *)&nZ::data_021bf2a4[12]));
        _ZN12Unk_0201442013func_02014ce4EPtjjj(this, &unk_120, r4, 4, 0);
    }
    if (unk_ac) {
        (this->*unk_ac)(&out);
    }
    c.unk_00 = out.unk_04;
    _ZN12Unk_020660f813func_02067a84EPhPv(unk_3c, &c.unk_00, out.unk_00);
}
}

namespace F19 {
void Unk_0201d2d0::func_020272a4(Unk_0201d2d0_Out *out) {
    Unk_0201d2d0_Data *r4 = 0;
    switch (_ZN12Unk_0209ada413func_0209ac64Ev(_ZN12Unk_020d893813func_0202d114Ev(this))) {
    case 10:
        r4 = &data_020c7a18;
        break;
    case 19:
        r4 = &data_020c7a10;
        break;
    }
    if (r4 != 0) {
        func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), r4->unk_00, r4->unk_04, 0, 0);
    }
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}
}

namespace F19 {
void Unk_0201d2d0::func_020271c8() {
    Unk_0201d2d0_Out out;
    u8 b;
    void *r4;
    switch (_ZN12Unk_0209ada413func_0209ac64Ev(_ZN12Unk_020d893813func_0202d114Ev(this))) {
    case 10:
        _ZN12Unk_0201442013func_020147e4Ev(this);
        func_0202d33c(data_020d8018);
        break;
    case 19:
        r4 = func_0202ceb0(_ZN12Unk_0209865c13func_02098750Ev(func_0209750c()));
        if (r4 != 0) {
            if (_ZN12Unk_0206555413func_02065578Ev(r4) == 7) {
                _ZN12Unk_020d893813func_0202d1d4EP16Unk_020d8938_Tbl(this, ((u8 *)&nZ::data_021bf2a4[18]));
            } else {
                func_02065c94(r4);
                _ZN12Unk_020d893813func_0202d1d4EP16Unk_020d8938_Tbl(this, ((u8 *)&nZ::data_021bf2a4[17]));
            }
            if (unk_ac) {
                (this->*unk_ac)(&out);
            }
            b = out.unk_04;
            _ZN12Unk_020660f813func_02067abcEPhPv(unk_3c, &b, out.unk_00);
        }
        break;
    }
    r4 = func_0209a4e4(unk_15c, 0);
    func_0207ab90(data_021dfd8c, r4, _ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c), 10);
}
}

namespace F19 {
void Unk_0201d2d0::func_020270ec() {
    Unk_0201d2d0_Out out;
    u8 b;
    s32 r4 = 1;
    u8 *r6 = (u8 *)func_0207f968(unk_fc->unk_82c);
    if (Unk_020270ec_R(&unk_120, 0x11a8, 0x12a7)) {
        u8 v = func_0204b820(&unk_120);
        if (v == r6[0]) {
            r4 = 0;
        } else if (v == r6[1]) {
            r4 = 2;
        }
    }
    func_0209a424(unk_15c, r4);
    switch (r4) {
    case 0:
        _ZN12Unk_020d893813func_0202d1d4EP16Unk_020d8938_Tbl(this, ((u8 *)&nZ::data_021bf2a4[14]));
        break;
    case 2:
        _ZN12Unk_020d893813func_0202d1d4EP16Unk_020d8938_Tbl(this, ((u8 *)&nZ::data_021bf2a4[15]));
        break;
    default:
        _ZN12Unk_020d893813func_0202d1d4EP16Unk_020d8938_Tbl(this, ((u8 *)&nZ::data_021bf2a4[16]));
        break;
    }
    if (unk_ac) {
        (this->*unk_ac)(&out);
    }
    b = out.unk_04;
    _ZN12Unk_020660f813func_02067abcEPhPv(unk_3c, &b, out.unk_00);
}
}

namespace F18 {
void Unk_0201d2d0::func_0202708c(Unk_0201d2d0_Out *out) {
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), data_020c7760.unk_00, data_020c7760.unk_04, 0, 0);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}
}

namespace F18 {
void Unk_0201d2d0::func_02026fe0() {
    u8 b;
    Unk_0201d2d0_Out out;
    void *r4 = unk_fc->unk_82c;
    void *r6;
    _ZN12Unk_020d893813func_0202d1d4EP16Unk_020d8938_Tbl(this, ((u8 *)&nZ::data_021bf2a4[20]));
    func_02014b78();
    func_0202d33c(data_020d8008);
    r6 = func_0209a4e4(unk_15c, 0);
    func_0207ab90(data_021dfd8c, r6, _ZN12Unk_0208086013func_020805c4Ev(r4), 0x14);
    unk_120 = *_ZN12Unk_0207fb8013func_0207fd9cEv(r4);
    if (unk_ac) {
        (this->*unk_ac)(&out);
    }
    b = out.unk_04;
    _ZN12Unk_020660f813func_02067abcEPhPv(unk_3c, &b, out.unk_00);
}
}

namespace F18 {
void Unk_0201d2d0::func_02026f58(Unk_0201d2d0_Out *out) {
    _ZN12Unk_0209ada413func_0209abb4Eh(func_0209a4f0(unk_15c), 1);
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), data_020c79f8.unk_00, data_020c79f8.unk_04, 0, 0);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
    unk_c4 = data_020d7bd8;
}
}

namespace F18 {
void Unk_0201d2d0::func_02026f1c() {
    void *r4 = unk_fc->unk_82c;
    func_02014a4c();
    if (unk_120 != 0xfff1) {
        func_0207cfb8(r4, &unk_120);
    }
}
}

namespace F18 {
void Unk_0201d2d0::func_02026ebc(Unk_0201d2d0_Out *out) {
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), data_020c79f0.unk_00, data_020c79f0.unk_04, 0, 0);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}
}

namespace F18 {
void Unk_0201d2d0::func_02026e64() {
    u8 b;
    Unk_0201d2d0_Out out;
    _ZN12Unk_020d893813func_0202d1d4EP16Unk_020d8938_Tbl(this, ((u8 *)&nZ::data_021bf2a4[20]));
    func_02014a4c();
    if (unk_ac) {
        (this->*unk_ac)(&out);
    }
    b = out.unk_04;
    _ZN12Unk_020660f813func_02067abcEPhPv(unk_3c, &b, out.unk_00);
}
}

namespace F18 {
void Unk_0201d2d0::func_02026df0(Unk_0201d2d0_Out *out) {
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), data_020c79e0.unk_00, data_020c79e0.unk_04, 0, 0);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
    unk_c4 = data_020d7ff0;
}
}

namespace F18 {
void Unk_0201d2d0::func_02026d8c() {
    void *r4;
    _ZN12Unk_0209ada413func_0209abb4Eh(func_0209a4f0(unk_15c), 1);
    r4 = func_0209a4e4(unk_15c, 0);
    func_0207ab90(data_021dfd8c, r4, _ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c), -0x14);
    func_02014a4c();
    func_0202d33c(data_020d7fe8);
}
}

namespace F18 {
void Unk_0201d2d0::func_02026d2c(Unk_0201d2d0_Out *out) {
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), data_020c79d0.unk_00, data_020c79d0.unk_04, 0, 0);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}
}

namespace F18 {
void Unk_0201d2d0::func_02026ccc() {
    u8 b;
    Unk_0201d2d0_Out out;
    if (unk_3c->unk_04 == 5) {
        unk_3c->unk_08 = 1;
    }
    _ZN12Unk_020d893813func_0202d1d4EP16Unk_020d8938_Tbl(this, ((u8 *)&nZ::data_021bf2a4[20]));
    if (unk_ac) {
        (this->*unk_ac)(&out);
    }
    b = out.unk_04;
    _ZN12Unk_020660f813func_02067a84EPhPv(unk_3c, &b, out.unk_00);
}
}

namespace F18 {
void Unk_0201d2d0::func_02026c4c() {
    u8 b;
    Unk_0201d2d0_Out out;
    if (unk_128 != 0 && _ZN12Unk_0208091c13func_02080dd8Ev() >= 0x40) {
        _ZN12Unk_020d893813func_0202d1d4EP16Unk_020d8938_Tbl(this, ((u8 *)&nZ::data_021bf2a4[19]));
        if (unk_ac) {
            (this->*unk_ac)(&out);
        }
        b = out.unk_04;
        _ZN12Unk_020660f813func_02067abcEPhPv(unk_3c, &b, out.unk_00);
    } else {
        func_02014a4c();
        func_0202d33c(data_020d7fe0);
    }
}
}

namespace F18 {
void Unk_0201d2d0::func_02026bec(Unk_0201d2d0_Out *out) {
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), data_020c79c8.unk_00, data_020c79c8.unk_04, 0, 0);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}
}

namespace F18 {
void Unk_0201d2d0::func_02026bd0() {
    func_02014a4c();
    func_0202d328(data_020d7bc0);
}
}

namespace F18 {
void Unk_0201d2d0::func_02026b98() {
    _ZN12Unk_020d771013func_02015144Ejj(this, func_0202ceb0(_ZN12Unk_0209865c13func_02098750Ev(func_0209750c())), 1);
    _ZN12Unk_020d771013func_020151d0Ei(this, 5);
    func_0202d33c(data_020d7fc8);
}
}

namespace F18 {
void Unk_0201d2d0::func_02026ab0(Unk_0201d2d0_Out *out) {
    Unk_0201d2d0_Data *d = &data_020c79c0;
    void *r7;
    switch (_ZN12Unk_0209ada413func_0209ac64Ev(_ZN12Unk_020d893813func_0202d114Ev())) {
    case 10:
        _ZN12Unk_0209ada413func_0209abb4Eh(func_0209a4f0(unk_15c), 1);
        if (Unk_02026ab0_R1(&unk_120, 0x11a8, 0x12a7)) {
            func_0207cfb8(unk_fc->unk_82c, &unk_120);
        }
        break;
    case 0x13:
        r7 = func_0202ceb0(_ZN12Unk_0209865c13func_02098750Ev(func_0209750c()));
        _ZN12Unk_0209ada413func_0209abb4Eh(func_0209a4f0(unk_15c), 1);
        d = &data_020c79b8;
        if (r7 != 0) {
            func_02065c94(r7);
        }
        break;
    }
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), d->unk_00, d->unk_04, 0, 0);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}
}

namespace F18 {
void Unk_0201d2d0::func_02026a24(Unk_0201d2d0_Out *out) {
    Unk_0201d2d0_Data *d = 0;
    switch (_ZN12Unk_0209ada413func_0209ac64Ev(_ZN12Unk_020d893813func_0202d114Ev())) {
    case 10:
        d = &data_020c79b0;
        break;
    case 0x13:
        d = &data_020c79a0;
        break;
    }
    if (unk_15c != 0 && d != 0) {
        func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), d->unk_00, d->unk_04, 0, 0);
    }
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}
}

namespace F18 {
void Unk_0201d2d0::func_02026998(Unk_0201d2d0_Out *out) {
    Unk_0201d2d0_Data *d = 0;
    switch (_ZN12Unk_0209ada413func_0209ac64Ev(_ZN12Unk_020d893813func_0202d114Ev())) {
    case 10:
        d = &data_020c7998;
        break;
    case 0x13:
        d = &data_020c7988;
        break;
    }
    if (unk_15c != 0 && d != 0) {
        func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), d->unk_00, d->unk_04, 0, 0);
    }
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}
}

namespace F18 {
extern "C" void func_02026968(u16 *out, u32 arg) {
    *out = 0xfff1;
    *out = func_0204b718(arg, 0, 0);
    if (*out == 0xfff1) {
        *out = 0x1492;
    }
}
}

namespace F18 {
void Unk_0201d2d0::func_02026834(void *p) {
    u16 h[3];
    Unk_0201d568_S s;
    switch (_ZN12Unk_0209ada413func_0209ac64Ev(_ZN12Unk_020d893813func_0202d114Ev())) {
    case 10:
        func_0201c95c(this, &s);
        func_0201c938(this, &s, 0, 0x24, 0x24, 0);
        func_0201c938(this, &s, 1, 0x25, 0x25, 0);
        func_0201c938(this, &s, 2, 0x26, 0x26, 0);
        s.unk_20 = 3;
        s.unk_21 = -1;
        _ZN12Unk_020d893813func_0201c870EPv(this, &s);
        func_0202d1c0(data_020d7fa0);
        _ZN12Unk_020660f813func_020679c0Ei(unk_3c, 1);
        break;
    case 0x13: {
        s32 r = func_02063b8c(100);
        unk_120 = 0xfff1;
        if (r < 20) {
            func_0207ceb4(&h[0], unk_fc->unk_82c);
            unk_120 = h[0];
            if (unk_120 != 0xfff1) {
                func_0207cf10(unk_fc->unk_82c, &unk_120);
            }
        } else if (r < 0x28) {
            unk_19c = 0x1f4 + func_0205b4f8() * 4;
            unk_19c = func_0202ac7c(unk_19c);
            func_02026968(&h[1], unk_19c);
            unk_120 = h[1];
        }
        if (unk_120 == 0xfff1) {
            func_0202cd44(&h[2], 0);
            unk_120 = h[2];
        }
        _ZN12Unk_0201d2d013func_02026410Ev(this, p);
        break;
    }
    }
}
}

namespace F18 {
void Unk_0201d2d0::func_020267b8(s32 unused, s32 idx) {
    u8 b;
    Unk_0201d2d0_Out out;
    Unk_020267b8_Tbl tbl = data_020d8690;
    if (idx < 0 || idx >= 3) {
        idx = 0;
    }
    _ZN12Unk_020d893813func_0202d1d4EP16Unk_020d8938_Tbl(this, data_021bf2a4 + tbl.v[idx] * 0x18);
    if (unk_ac) {
        (this->*unk_ac)(&out);
    }
    b = out.unk_04;
    _ZN12Unk_020660f813func_02067abcEPhPv(unk_3c, &b, out.unk_00);
}
}

namespace F17 {
void Unk_0201d2d0::func_02026668(Unk_0201d2d0_Out *out) {
    u16 loc[5];
    u8 t = *func_0209a420(unk_15c);
    unk_120 = 0xfff1;
    switch (t) {
    case 0:
        func_0202cd44(&loc[0], 0);
        unk_120 = loc[0];
        break;
    case 1:
        func_0207ceb4(&loc[1], unk_fc->unk_82c);
        unk_120 = loc[1];
        if (unk_120 != 0xfff1) {
            func_0207cf10(unk_fc->unk_82c, &unk_120);
        }
        break;
    default:
        func_0207ceb4(&loc[2], unk_fc->unk_82c);
        unk_120 = loc[2];
        if (unk_120 != 0xfff1) {
            func_0207cf10(unk_fc->unk_82c, &unk_120);
        } else {
            func_0202cd44(&loc[3], 0);
            unk_120 = loc[3];
        }
        break;
    }
    if (unk_120 == 0xfff1) {
        unk_19c = (void *)(func_0205b4f8() * 4 + 0x1f4);
        unk_19c = func_0202ac7c(unk_19c);
        func_02026968(&loc[4], unk_19c);
        unk_120 = loc[4];
    }
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), data_020c7978.unk_00, data_020c7978.unk_04, 0, 0);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}
}

namespace F17 {
void Unk_0201d2d0::func_02026560(Unk_0201d2d0_Out *out) {
    u16 loc[4];
    u8 t = *func_0209a420(unk_15c);
    unk_120 = 0xfff1;
    switch (t) {
    case 0:
        func_0207ceb4(&loc[0], unk_fc->unk_82c);
        unk_120 = loc[0];
        if (unk_120 != 0xfff1) {
            func_0207cf10(unk_fc->unk_82c, &unk_120);
        }
        break;
    case 1:
        func_0202cd44(&loc[1], 0);
        unk_120 = loc[1];
        break;
    }
    if (unk_120 == 0xfff1) {
        unk_19c = (void *)(func_0205b4f8() * 4 + 0x1f4);
        unk_19c = func_0202ac7c(unk_19c);
        func_02026968(&loc[2], unk_19c);
        unk_120 = loc[2];
    }
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), data_020c7970.unk_00, data_020c7970.unk_04, 0, 0);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}
}

namespace F17 {
void Unk_0201d2d0::func_02026490(Unk_0201d2d0_Out *out) {
    u16 loc[4];
    u8 t = *func_0209a420(unk_15c);
    unk_120 = 0xfff1;
    if (t == 2) {
        func_0202cd44(&loc[0], 0);
        unk_120 = loc[0];
    }
    if (unk_120 == 0xfff1) {
        unk_19c = (void *)(func_0205b4f8() * 4 + 0x1f4);
        unk_19c = func_0202ac7c(unk_19c);
        func_02026968(&loc[1], unk_19c);
        unk_120 = loc[1];
    }
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), data_020c7968.unk_00, data_020c7968.unk_04, 0, 0);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}
}

namespace F17 {
void Unk_0201d2d0::func_02026410() {
    u8 b;
    Unk_0201d2d0_Out out;
    if (func_0209750c() != 0 && _ZN12Unk_02097d1c13func_02097edcEv(_ZN12Unk_0209865c13func_02098750Ev(func_0209750c())) != -1) {
        _ZN12Unk_020d893813func_0202d1d4EP16Unk_020d8938_Tbl(this, data_021bf514);
    } else {
        _ZN12Unk_020d893813func_0202d1d4EP16Unk_020d8938_Tbl(this, ((u8 *)&nZ::data_021bf514[2]));
    }
    if (unk_ac) {
        (this->*unk_ac)(&out);
    }
    b = out.unk_04;
    _ZN12Unk_020660f813func_02067abcEPhPv(unk_3c, &b, out.unk_00);
}
}

namespace F17 {
void Unk_0201d2d0::func_020263b0(Unk_0201d2d0_Out *out) {
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), data_020c7720.unk_00, data_020c7720.unk_04, 0, 0);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}
}

namespace F17 {
void Unk_0201d2d0::func_0202635c() {
    u8 b;
    Unk_0201d2d0_Out out;
    _ZN12Unk_020d893813func_0202d1d4EP16Unk_020d8938_Tbl(this, ((u8 *)&nZ::data_021bf514[1]));
    if (unk_ac) {
        (this->*unk_ac)(&out);
    }
    b = out.unk_04;
    _ZN12Unk_020660f813func_02067abcEPhPv(unk_3c, &b, out.unk_00);
}
}

namespace F17 {
void Unk_0201d2d0::func_020262ac(Unk_0201d2d0_Out *out) {
    Unk_0201d2d0_Data d;
    if (Unk_02026214_R1(&unk_120, 0x1492, 0x14fd)) {
        _ZN12Unk_020d771413func_020158e0Eijihii(this, unk_19c, 1, 4, 1, 1, 0);
    } else {
        _ZN12Unk_020d771413func_0201578cEjjj(this, &unk_120, 1, 7);
    }
    d = data_020c7960;
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), d.unk_00, d.unk_04, 0, 0);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}
}

namespace F17 {
void Unk_0201d2d0::func_02026214() {
    void *p6 = func_0209750c();
    u32 r4 = _ZN12Unk_0209865c13func_02098750Ev(p6);
    if (Unk_02026214_R1(&unk_120, 0x1492, 0x14fd)) {
        func_02097a48(r4, unk_19c, 1);
    } else if (unk_120 != 0xfff1) {
        s32 v = _ZN12Unk_02097d1c13func_02097edcEv(r4);
        if (v != -1) {
            _ZN12Unk_02097d1c13func_02097f30EPtij(r4, &unk_120, v, 0);
            func_0203c42c(_ZN12Unk_0209865c13func_020986c8Ev(p6), &unk_120, 0, 1);
        }
    }
    _ZN12Unk_020d771013func_02014e60EPtjjj(this, &unk_120, 0, 5, 0);
}
}

namespace F17 {
void Unk_0201d2d0::func_020261c0() {
    u8 b;
    Unk_0201d2d0_Out out;
    _ZN12Unk_020d893813func_0202d1d4EP16Unk_020d8938_Tbl(this, ((u8 *)&nZ::data_021bf514[2]));
    if (unk_ac) {
        (this->*unk_ac)(&out);
    }
    b = out.unk_04;
    _ZN12Unk_020660f813func_02067abcEPhPv(unk_3c, &b, out.unk_00);
}
}

namespace F17 {
void Unk_0201d2d0::func_02026128(Unk_0201d2d0_Out *out) {
    Unk_0201d2d0_Data *d;
    s32 r = _ZN12Unk_0209ada413func_0209ac64Ev(_ZN12Unk_020d893813func_0202d114Ev(this));
    switch (r) {
    case 0xa:
        d = &data_020c7958;
        break;
    case 0x13:
        d = &data_020c7948;
        break;
    default:
        d = &data_020c7958;
        break;
    }
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), d->unk_00, d->unk_04, 0, 0);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
    if (unk_15c != 0) {
        func_0209a588(unk_15c);
    }
    unk_156 = 0x5f;
}
}

namespace F17 {
void Unk_0201d2d0::func_02026000(Unk_0201d2d0_Out *out) {
    Unk_0201d2d0_Data d = data_020d7b40;
    s32 r6 = 0;
    s32 r4;
    u8 buf[2];
    s32 idx;
    r4 = _ZN12Unk_0209ada413func_0209ac64Ev(_ZN12Unk_020d893813func_0202d114Ev(this));
    idx = r6;
    if (_ZN12Unk_0209ada413func_0209ad68Ev(func_0209a940(unk_160)) != 0) {
        r6 = func_0209a938(unk_160);
        r4 = _ZN12Unk_0209ada413func_0209ac64Ev(func_0209a940(unk_160));
    }
    _ZN12Unk_0209ada413func_0209ace8EPi(_ZN12Unk_020d893813func_0202d114Ev(this), &idx);
    if (r6 < func_0209a8f4(r4) && idx < 5) {
        d.unk_00 = data_020d8800[idx][r6];
        if (r4 == 4) {
            void *p = unk_fc->unk_82c;
            buf[0] = func_02081364(func_0207f91c(p, func_0207cdb0(p)));
            buf[1] = 0;
            _ZN12Unk_020d771413func_0201577cEjjj(this, 0, buf, ((u8 *)"st_furniture_taste"), &buf[1]);
        }
        if (r4 != 0 && r4 != 1) {
            unk_156 = 0x5e;
        }
    }
    if (d.unk_00 != 0) {
        func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), d.unk_00, d.unk_04, 0, 0);
    }
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}
}

namespace F17 {
extern "C" void func_02025fcc(u16 *p, Unk_02025df8_Data *d) {
    *p = 0xfff1;
    if (!func_0202c8f0(p, 0, 1, d->unk_04)) {
        func_0202c8f0(p, 2, 4, d->unk_04);
    }
}
}

namespace F17 {
extern "C" void func_02025f88(u16 *p, Unk_02025df8_Data *d) {
    *p = 0xfff1;
    if (!func_0202c8f0(p, 1, 2, d->unk_04)) {
        if (!func_0202c8f0(p, 0, 0, d->unk_04)) {
            func_0202c8f0(p, 3, 4, d->unk_04);
        }
    }
}
}

namespace F17 {
extern "C" void func_02025f44(u16 *p, Unk_02025df8_Data *d) {
    *p = 0xfff1;
    if (!func_0202c8f0(p, 2, 3, d->unk_04)) {
        if (!func_0202c8f0(p, 0, 1, d->unk_04)) {
            func_0202c8f0(p, 4, 4, d->unk_04);
        }
    }
}
}

namespace F17 {
extern "C" void func_02025f10(u16 *p, Unk_02025df8_Data *d) {
    *p = 0xfff1;
    if (!func_0202c8f0(p, 3, 4, d->unk_04)) {
        func_0202c8f0(p, 0, 2, d->unk_04);
    }
}
}

namespace F17 {
extern "C" void func_02025ed4(u16 *p, void *unused, u32 idx) {
    Unk_02025ed4_Arg a;
    Unk_02025ed4_Fn fn;
    if (idx < 5 && (fn = data_020c7acc[idx]) != 0) {
        a.unk_00 = 0;
        a.unk_04 = 0;
        func_0209d498(&a);
        fn(p, &a);
    } else {
        *p = 0xfff1;
    }
}
}

namespace F17 {
extern "C" void func_02025e98(u16 *p, Unk_02025df8_Data *d) {
    *p = 0xfff1;
    if (!func_0202c33c(p, 0, 1, d->unk_04, d->unk_03)) {
        func_0202c33c(p, 2, 4, d->unk_04, d->unk_03);
    }
}
}

namespace F17 {
extern "C" void func_02025e48(u16 *p, Unk_02025df8_Data *d) {
    *p = 0xfff1;
    if (!func_0202c33c(p, 1, 2, d->unk_04, d->unk_03)) {
        if (!func_0202c33c(p, 0, 0, d->unk_04, d->unk_03)) {
            func_0202c33c(p, 3, 4, d->unk_04, d->unk_03);
        }
    }
}
}

namespace F17 {
extern "C" void func_02025df8(u16 *p, Unk_02025df8_Data *d) {
    *p = 0xfff1;
    if (!func_0202c33c(p, 2, 3, d->unk_04, d->unk_03)) {
        if (!func_0202c33c(p, 0, 1, d->unk_04, d->unk_03)) {
            func_0202c33c(p, 4, 4, d->unk_04, d->unk_03);
        }
    }
}
}

namespace F16 {
extern "C" void func_02025dbc(u16 *out, u8 *p) {
    *out = 0xfff1;
    if (!func_0202c33c(out, 3, 4, p[4], p[3])) {
        func_0202c33c(out, 0, 2, p[4], p[3]);
    }
}
}

namespace F16 {
extern "C" void func_02025d80(u16 *out, void *unused, u32 idx) {
    if (idx < 5) {
        void (*fn)(u16 *, Unk_0202585c_Pair *) = data_020c7ae0[idx];
        if (fn != 0) {
            Unk_0202585c_Pair pr;
            pr.a = 0;
            pr.b = 0;
            func_0209d498(&pr);
            fn(out, &pr);
            return;
        }
    }
    *out = 0xfff1;
}
}

namespace F16 {
extern "C" void func_02025d24(u16 *out, u32 mask, s32 cnt, void *x, u8 a, u32 b) {
    u16 buf;
    s32 r;
    *out = 0xfff1;
    while ((r = func_0207bcfc(mask, cnt, 10)) != -1) {
        func_02062ad4(&buf, 0x11a8, 0x100, b, 1, (u32)x, a, r, 0, 1);
        *out = buf;
        break;
    }
}
}

namespace F16 {
extern "C" void func_02025cb0(u16 *out, u8 *p, u32 arg) {
    u16 arr[2];
    u16 mask;
    s32 cnt;
    s32 i;
    *out = 0xfff1;
    mask = 0;
    cnt = 0;
    for (i = 0; i < 10; i++) {
        if (i != p[1]) {
            mask |= 1 << i;
            cnt++;
        }
    }
    func_02025d24(&arr[0], mask, cnt, func_0209750c(), 1, arg);
    *out = arr[0];
    if (*out == 0xfff1) {
        func_02025d24(&arr[1], mask, cnt, 0, 0, arg);
        *out = arr[1];
    }
}
}

namespace F16 {
extern "C" void func_02025c80(u16 *out, u8 *p, u32 arg) {
    func_02062ad4(out, 0x11a8, 0x100, arg, 1, 0, 0, *p, 0, 1);
}
}

namespace F16 {
extern "C" void func_02025c04(u16 *out, u8 *p, u32 arg) {
    u16 arr[2];
    *out = 0xfff1;
    func_02062ad4(&arr[0], 0x11a8, 0x100, arg, 1, (u32)func_0209750c(), 0, *p, 0, 1);
    *out = arr[0];
    if (*out == 0xfff1) {
        func_02062ad4(&arr[1], 0x11a8, 0x100, arg, 1, (u32)func_0209750c(), 1, *p, 0, 1);
        *out = arr[1];
    }
}
}

namespace F16 {
extern "C" void func_02025bb0(u16 *out, Unk_020254ec *self, u32 idx) {
    if (idx < 7) {
        void (*fn)(u16 *, s32, u16 *) = data_020c7b4c[idx];
        if (fn != 0) {
            void *r6 = self->unk_fc->unk_82c;
            s32 r7 = func_0207f968(r6);
            u16 t = *_ZN12Unk_0207fb8013func_0207fd9cEv(r6);
            fn(out, r7, &t);
            return;
        }
    }
    *out = 0xfff1;
}
}

namespace F16 {
extern "C" void func_02025afc(u16 *out) {
    u16 arr[2];
    func_02062ad4(&arr[0], 0x450c, 0x34, 0, 0, 0, 1, 10, 0, 1);
    func_02062ad4(&arr[1], 0x450c, 0x34, 0, 0, (u32)func_0209750c(), 0, 10, 0, 1);
    *out = 0xfff1;
    if (R2(&arr[0])) {
        if (R2(&arr[1]) && (func_02063b8c(10) & 1)) {
            *out = arr[1];
        } else {
            *out = arr[0];
        }
    } else {
        *out = arr[1];
    }
}
}

namespace F16 {
extern "C" s32 func_02025a68(u16 *p, s32 v) {
    u16 tmp;
    s32 idx;
    u32 i;
    s32 j;
    if (R1(p)) {
        tmp = 0xfff1;
        if (R1(p)) {
            idx = (*p - 0x450c) >> 2;
        } else {
            idx = -1;
        }
        for (i = 0; i < 0x34; i++) {
            tmp = i < 0x34 ? 0x450c + i * 4 : 0x450c;
            if (v == func_02052c54(&tmp)) {
                for (j = 0; j < 3; j++) {
                    if (idx == j + (s32)i) return j;
                }
                break;
            }
        }
    }
    return -1;
}
}

namespace F16 {
extern "C" void func_02025a50(u16 *p) {
    func_02025a68(p, func_02052c54(p));
}
}

namespace F16 {
extern "C" void func_020259f8(u16 *out, void *a, void *b) {
    u32 r4 = func_0209a8e0(a);
    if (r4 == 0x18) {
        r4 = (u8)func_0209a7d0(_ZN12Unk_0207e94013func_0207efa0Ev(b), 10);
        func_0209a8c8(a, r4);
        func_020776cc(b, r4);
    }
    if (r4 < 0x18) {
        func_0209a774(out, r4, 0);
    } else {
        *out = 0xfff1;
    }
}
}

namespace F16 {
extern "C" void func_020259b4(u16 *out, Unk_020254ec *self, u32 idx) {
    if (idx < 5) {
        void (*fn)(u16 *, s32, void *) = data_020c7af4[idx];
        if (fn != 0) {
            void *r6 = self->unk_fc->unk_82c;
            fn(out, func_0209a60c(func_0207e268(r6)), r6);
            return;
        }
    }
    *out = 0xfff1;
}
}

namespace F16 {
void Unk_020254ec::func_0202585c() {
    Unk_0202585c_Pair pr;
    u8 arr[2];
    u16 h1;
    u16 h2;
    s32 r5 = 0;
    pr.a = r5;
    pr.b = r5;
    if (_ZN12Unk_0209ada413func_0209ad68Ev(func_0209a940(unk_160)) != 0) {
        r5 = func_0209a938(unk_160);
    }
    func_0209d498(&pr);
    switch ((u32)_ZN12Unk_0209ada413func_0209ac64Ev(_ZN12Unk_020d893813func_0202d114Ev(this))) {
    case 0:
        if (unk_120 != 0xfff1) {
            _ZN12Unk_020d771413func_0201578cEjjj(this, &unk_120, 0, 7);
        }
        break;
    case 1:
        if (unk_120 != 0xfff1) {
            _ZN12Unk_020d771413func_0201578cEjjj(this, &unk_120, 0, 7);
        }
        break;
    case 2: {
        if (unk_120 == 0xfff1) {
            func_020259b4(&h1, this, r5);
            unk_120 = h1;
        }
        if (r5 >= 2) {
            s32 v = func_0209a8e0(unk_160);
            if (v >= 0x18) {
                if (R1(&unk_120)) {
                    v = func_02052c54(&unk_120);
                }
            }
            if (v < 0x18) {
                s32 r = func_0209a874();
                if (r != -1) {
                    arr[0] = r;
                    arr[1] = 0;
                    _ZN12Unk_020d771413func_0201577cEjjj(this, 0, arr, ((u8 *)"st_fossil"), &arr[1]);
                }
            }
        }
        break;
    }
    case 3:
        if (unk_120 == 0xfff1) {
            func_02025bb0(&h2, this, r5);
            unk_120 = h2;
        }
        if (unk_120 != 0xfff1) {
            _ZN12Unk_020d771413func_0201578cEjjj(this, &unk_120, 0, 7);
        }
        break;
    case 4:
        break;
    }
    func_0202d294(data_020d7ec8);
}
}

namespace F16 {
void Unk_020254ec::func_020257f0() {
    Unk_020257f0_S s;
    func_0201c95c(this, &s);
    func_0201c938(this, &s, 0, 0x1f, 0x1f, ((u8 *)&nZ::data_021bf514[4]));
    func_0201c938(this, &s, 1, 0x20, 0x20, ((u8 *)&nZ::data_021bf514[5]));
    s.unk_20 = 2;
    s.unk_21 = s.unk_20 - 1;
    _ZN12Unk_020d893813func_0201c870EPv(this, &s);
    func_0202d1c0(data_020d7ec0);
    _ZN12Unk_020660f813func_020679c0Ei(unk_3c, 1);
}
}

namespace F16 {
void Unk_020254ec::func_020257e8() {
    func_020256ec();
}
}

namespace F16 {
void Unk_020254ec::func_02025780(Unk_020254ec_Out *out) {
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), data_020c7920.unk_00, data_020c7920.unk_04, 0, 0);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
    unk_156 = 0x5e;
}
}

namespace F16 {
void Unk_020254ec::func_020256ec() {
    void *r6 = unk_fc->unk_82c;
    s32 r4 = 0;
    s32 r7;
    if (_ZN12Unk_0209ada413func_0209ad68Ev(func_0209a940(unk_160)) == 0) {
        r7 = _ZN12Unk_0209ada413func_0209ac64Ev(_ZN12Unk_020d893813func_0202d114Ev(this));
        r4 = 1;
    } else {
        r7 = _ZN12Unk_0209ada413func_0209ac64Ev(func_0209a940(unk_160));
    }
    func_0209a9f0(unk_160, r7, &unk_120, _ZN12Unk_0209865c13func_0209888cEv(func_0209750c()), r4);
    func_020775a0(r6, r7, &unk_120, data_020cbb18->unk_64, r4);
    func_0207e310(r6);
    func_02078578();
    _ZN12Unk_0209ada413func_0209ad80Ev();
}
}

namespace F16 {
void Unk_020254ec::func_02025680(Unk_020254ec_Out *out) {
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), data_020c7918.unk_00, data_020c7918.unk_04, 0, 0);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
    func_0202d294(data_020d7eb0);
}
}

namespace F16 {
void Unk_020254ec::func_020255fc() {
    void *r6 = unk_fc->unk_82c;
    s32 r4 = 0;
    s32 r7;
    if (_ZN12Unk_0209ada413func_0209ad68Ev(func_0209a940(unk_160)) == 0) {
        r7 = _ZN12Unk_0209ada413func_0209ac64Ev(_ZN12Unk_020d893813func_0202d114Ev(this));
        r4 = 1;
    } else {
        r7 = _ZN12Unk_0209ada413func_0209ac64Ev(func_0209a940(unk_160));
    }
    func_0209a9f0(unk_160, r7, &unk_120, 0, r4);
    func_020775a0(r6, r7, &unk_120, 4, r4);
    func_0207e310(r6);
    func_02078578();
    _ZN12Unk_0209ada413func_0209ad80Ev();
}
}

namespace F16 {
void Unk_020254ec::func_02025540(Unk_020254ec_Out *out) {
    Unk_020254ec_Data d = data_020d7e48;
    s32 r6 = func_0209a938(unk_160);
    s32 r7 = _ZN12Unk_0209ada413func_0209ac64Ev(_ZN12Unk_020d893813func_0202d114Ev(this));
    s32 x = 0;
    _ZN12Unk_0209ada413func_0209ace8EPi(_ZN12Unk_020d893813func_0202d114Ev(this), &x);
    if (r6 < func_0209a8f4(r7) && x < 5) {
        d.unk_00 = data_020d8850[x][r6];
    }
    if (d.unk_00 != 0) {
        func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), d.unk_00, d.unk_04, 0, 0);
    }
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}
}

namespace F16 {
void Unk_020254ec::func_020254ec() {
    u8 b;
    Unk_020254ec_Out out;
    _ZN12Unk_020d893813func_0202d1d4EP16Unk_020d8938_Tbl(this, ((u8 *)&nZ::data_021bf514[7]));
    if (unk_ac) {
        (this->*unk_ac)(&out);
    }
    b = out.unk_04;
    _ZN12Unk_020660f813func_02067abcEPhPv(unk_3c, &b, out.unk_00);
}
}

namespace F15 {
void Unk_0201d2d0::func_02025460(Unk_0201d2d0_Out *out) {
    Unk_0201d2d0_Data d = data_020d7e38;
    s32 r = func_0209a938(unk_160);
    if (r < 7) {
        d.unk_00 = data_020d8914[r];
    }
    if (d.unk_00 != 0) {
        func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), d.unk_00, d.unk_04, 0, 0);
    }
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}
}

namespace F15 {
void Unk_0201d2d0::func_02025410() {
    if (_ZN12Unk_0209ada413func_0209ac64Ev(_ZN12Unk_020d893813func_0202d114Ev(this)) == 0) {
        _ZN12Unk_020d771013func_0201517cEjjj(this, (void *)func_02029918, 0xd, 1);
    } else {
        _ZN12Unk_020d771013func_0201517cEjjj(this, (void *)func_020298c8, 0xd, 1);
    }
    _ZN12Unk_020d771013func_020151d0Ei(this, 0);
    func_0202d33c(data_020d7e30);
}
}

namespace F15 {
void Unk_0201d2d0::func_0202536c() {
    u8 b;
    Unk_0201d2d0_Out out;
    s32 r;
    if (func_0206ed18() == 0) {
        if (unk_3c) {
            unk_3c[2] = 1;
        }
        _ZN12Unk_020d893813func_0202d1d4EP16Unk_020d8938_Tbl(this, ((u8 *)&nZ::data_021bf2a4[11]));
        if (unk_ac) {
            (this->*unk_ac)(&out);
        }
        b = out.unk_04;
        _ZN12Unk_020660f813func_02067a84EPhPv(unk_3c, &b, out.unk_00);
    } else {
        r = func_0206ed38();
        unk_120 = *_ZN12Unk_02097d1c13func_02097f6cEi(_ZN12Unk_0209865c13func_02098750Ev(func_0209750c()), r);
        _ZN12Unk_0201442013func_02014ce4EPtjjj(this, &unk_120, 0, 4, 0);
        func_0202d328(data_020d7e28);
    }
}
}

namespace F15 {
void Unk_0201d2d0::func_02025270() {
    u8 b;
    u16 h;
    Unk_0201d2d0_Out out;
    Unk_02025090_Pair s;
    s32 a, c;
    a = 0;
    s.unk_00 = 0;
    s.unk_04 = 0;
    c = 0;
    func_0209d498(&s);
    if (unk_120 != 0xfff1) {
        a = func_0204be70(&unk_120);
    }
    h = *func_0209a8e8(unk_160);
    if (h != 0xfff1) {
        c = func_0204be70(&h);
    }
    if (a == c) {
        _ZN12Unk_020d893813func_0202d1d4EP16Unk_020d8938_Tbl(this, ((u8 *)&nZ::data_021bf514[12]));
    } else if (a > c) {
        _ZN12Unk_020d893813func_0202d1d4EP16Unk_020d8938_Tbl(this, ((u8 *)&nZ::data_021bf514[9]));
    } else {
        _ZN12Unk_020d893813func_0202d1d4EP16Unk_020d8938_Tbl(this, ((u8 *)&nZ::data_021bf514[11]));
    }
    if (unk_120 != 0xfff1) {
        _ZN12Unk_020d771413func_0201578cEjjj(this, &unk_120, 2, 7);
    }
    if (h != 0xfff1) {
        _ZN12Unk_020d771413func_0201578cEjjj(this, &h, 3, 7);
    }
    if (unk_3c) {
        unk_3c[2] = 1;
    }
    if (unk_ac) {
        (this->*unk_ac)(&out);
    }
    b = out.unk_04;
    _ZN12Unk_020660f813func_02067a84EPhPv(unk_3c, &b, out.unk_00);
}
}

namespace F15 {
void Unk_0201d2d0::func_020251fc(Unk_0201d2d0_Out *out) {
    Unk_0201d2d0_Data *d = &data_020c76a0;
    if (_ZN12Unk_0209ada413func_0209ac64Ev(_ZN12Unk_020d893813func_0202d114Ev(this)) == 1) {
        d = &data_020c78b8;
    }
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), d->unk_00, d->unk_04, 0, 0);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}
}

namespace F15 {
void Unk_0201d2d0::func_020251c0() {
    u16 h;
    s32 r = func_0206ed38();
    h = 0xfff1;
    func_0209909c(&h, 0, r);
    _ZN12Unk_0201442013func_02014a4cEv(this);
    func_0202d33c(data_020d7a70);
}
}

namespace F15 {
void Unk_0201d2d0::func_0202516c() {
    u8 b;
    Unk_0201d2d0_Out out;
    _ZN12Unk_020d893813func_0202d1d4EP16Unk_020d8938_Tbl(this, ((u8 *)&nZ::data_021bf514[10]));
    if (unk_ac) {
        (this->*unk_ac)(&out);
    }
    b = out.unk_04;
    _ZN12Unk_020660f813func_02067abcEPhPv(unk_3c, &b, out.unk_00);
}
}

namespace F15 {
void Unk_0201d2d0::func_02025090(Unk_0201d2d0_Out *out) {
    Unk_0201d2d0_Data *d = &data_020c7928;
    void *r7 = unk_fc->unk_82c;
    _ZN12Unk_020238b013func_02023da4Ev(this);
    if (unk_120 != 0xfff1) {
        func_0207cfb8(r7, &unk_120);
        if (unk_128 != 0 && unk_124 != (u32)-1) {
            _ZN12Unk_0208091c13func_02080b78EPt(unk_128, &unk_120);
            func_020777b8(r7, unk_124, &unk_120);
        }
    }
    if (_ZN12Unk_0209ada413func_0209ac64Ev(_ZN12Unk_020d893813func_0202d114Ev(this)) == 1) {
        d = &data_020c76a8;
    }
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), d->unk_00, d->unk_04, unk_11e, 0);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
    unk_156 = 0x5f;
}
}

namespace F15 {
void Unk_0201d2d0::func_02025008(Unk_0201d2d0_Out *out) {
    Unk_0201d2d0_Data *d = &data_020c7660;
    if (_ZN12Unk_0209ada413func_0209ac64Ev(_ZN12Unk_020d893813func_0202d114Ev(this)) == 1) {
        d = &data_020c7838;
    }
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), d->unk_00, d->unk_04, 0, 0);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
    unk_c4 = data_020d7e40;
}
}

namespace F15 {
void Unk_0201d2d0::func_02024fdc() {
    _ZN12Unk_0201442013func_02014918Ev(this);
    func_0209aaa0(unk_160);
    func_020776e4(unk_fc->unk_82c);
}
}

namespace F15 {
void Unk_0201d2d0::func_02024f54(Unk_0201d2d0_Out *out) {
    Unk_0201d2d0_Data *d = &data_020c78a0;
    if (_ZN12Unk_0209ada413func_0209ac64Ev(_ZN12Unk_020d893813func_0202d114Ev(this)) == 1) {
        d = &data_020c7698;
    }
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), d->unk_00, d->unk_04, 0, 0);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
    unk_c4 = data_020d7a88;
}
}

namespace F15 {
void Unk_0201d2d0::func_02024df4() {
    u8 buf[2];
    Unk_0201d2d0_Out out;
    switch (_ZN12Unk_0209ada413func_0209ac64Ev(_ZN12Unk_020d893813func_0202d114Ev(this))) {
    case 0:
        if (Unk_02024df4_Range(func_0209a8e8(unk_160), 0x12b0, 0x12e7)) {
            _ZN12Unk_020d893813func_0202d1d4EP16Unk_020d8938_Tbl(this, ((u8 *)&nZ::data_021bf514[14]));
            if (unk_ac) {
                (this->*unk_ac)(&out);
            }
            buf[0] = out.unk_04;
            _ZN12Unk_020660f813func_02067a84EPhPv(unk_3c, &buf[0], out.unk_00);
        } else {
            _ZN12Unk_020d771013func_020151a8Ejjj(this, func_020291b4(_ZN12Unk_0209ada413func_0209ab94Ev(_ZN12Unk_020d893813func_0202d114Ev(this))), 0xd, 1);
            _ZN12Unk_020d771013func_020151d0Ei(this, 0);
            func_0202d33c(data_020d7a90);
        }
        break;
    case 1:
        if (Unk_02024df4_Range(func_0209a8e8(unk_160), 0x12e8, 0x131f)) {
            _ZN12Unk_020d893813func_0202d1d4EP16Unk_020d8938_Tbl(this, ((u8 *)&nZ::data_021bf514[14]));
            if (unk_ac) {
                (this->*unk_ac)(&out);
            }
            buf[1] = out.unk_04;
            _ZN12Unk_020660f813func_02067a84EPhPv(unk_3c, &buf[1], out.unk_00);
        } else {
            _ZN12Unk_020d771013func_020151a8Ejjj(this, func_020291b4(_ZN12Unk_0209ada413func_0209ab94Ev(_ZN12Unk_020d893813func_0202d114Ev(this))), 0xd, 1);
            _ZN12Unk_020d771013func_020151d0Ei(this, 0);
            func_0202d33c(data_020d7b20);
        }
        break;
    }
}
}

namespace F15 {
void Unk_0201d2d0::func_02024d38() {
    u8 b;
    u16 h;
    Unk_0201d2d0_Out out;
    if (func_0206ed18() == 0) {
        if (unk_3c) {
            unk_3c[2] = 1;
        }
        _ZN12Unk_020d893813func_0202d1d4EP16Unk_020d8938_Tbl(this, ((u8 *)&nZ::data_021bf2a4[11]));
        if (unk_ac) {
            (this->*unk_ac)(&out);
        }
        b = out.unk_04;
        _ZN12Unk_020660f813func_02067a84EPhPv(unk_3c, &b, out.unk_00);
    } else {
        s32 r = func_0206ed38();
        unk_120 = *_ZN12Unk_02097d1c13func_02097f6cEi(_ZN12Unk_0209865c13func_02098750Ev(func_0209750c()), r);
        h = 0xfff1;
        func_0209909c(&h, 0, r);
        _ZN12Unk_0201442013func_02014ce4EPtjjj(this, &unk_120, 0, 4, 0);
        func_0202d328(data_020d7d10);
    }
}
}

namespace F15 {
void Unk_0201d2d0::func_02024cd8() {
    u8 b;
    Unk_0201d2d0_Out out;
    if (unk_3c) {
        unk_3c[2] = 1;
    }
    _ZN12Unk_020d893813func_0202d1d4EP16Unk_020d8938_Tbl(this, ((u8 *)&nZ::data_021bf514[15]));
    if (unk_ac) {
        (this->*unk_ac)(&out);
    }
    b = out.unk_04;
    _ZN12Unk_020660f813func_02067a84EPhPv(unk_3c, &b, out.unk_00);
}
}

namespace F15 {
void Unk_0201d2d0::func_02024c4c(Unk_0201d2d0_Out *out) {
    Unk_0201d2d0_Data *d = &data_020c7908;
    if (_ZN12Unk_0209ada413func_0209ac64Ev(_ZN12Unk_020d893813func_0202d114Ev(this)) == 1) {
        d = &data_020c7890;
    }
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), d->unk_00, d->unk_04, 0, 0);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
    func_0209aaa0(unk_160);
    func_020776e4(unk_fc->unk_82c);
}
}

namespace F15 {
void Unk_0201d2d0::func_02024bd8(Unk_0201d2d0_Out *out) {
    Unk_0201d2d0_Data *d = &data_020c7690;
    if (_ZN12Unk_0209ada413func_0209ac64Ev(_ZN12Unk_020d893813func_0202d114Ev(this)) == 1) {
        d = &data_020c7680;
    }
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), d->unk_00, d->unk_04, 0, 0);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}
}

namespace F15 {
void Unk_0201d2d0::func_02024bbc() {
    _ZN12Unk_0201442013func_02014a4cEv(this);
    func_0202d33c(data_020d7d78);
}
}

namespace F15 {
void Unk_0201d2d0::func_02024b68() {
    u8 b;
    Unk_0201d2d0_Out out;
    _ZN12Unk_020d893813func_0202d1d4EP16Unk_020d8938_Tbl(this, ((u8 *)&nZ::data_021bf514[16]));
    if (unk_ac) {
        (this->*unk_ac)(&out);
    }
    b = out.unk_04;
    _ZN12Unk_020660f813func_02067abcEPhPv(unk_3c, &b, out.unk_00);
}
}

namespace F14 {
void Unk_0201d2d0::func_02024a90(Unk_0201d2d0_Out *out) {
    Unk_0201d2d0_Data *d = &data_020c76d0;
    void *r7 = unk_fc->unk_82c;
    _ZN12Unk_020238b013func_02023da4Ev(this);
    if (unk_120.unk_00 != 0xfff1) {
        func_0207cfb8(r7, &unk_120);
        if (unk_120.unk_08 != 0 && unk_120.unk_04 != (u32)-1) {
            _ZN12Unk_0208091c13func_02080b78EPt(unk_120.unk_08, &unk_120);
            func_020777b8(r7, unk_120.unk_04, &unk_120);
        }
    }
    if (_ZN12Unk_0209ada413func_0209ac64Ev(_ZN12Unk_020d893813func_0202d114Ev(this)) == 1) {
        d = &data_020c76c0;
    }
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), d->unk_00, d->unk_04, 0, 0);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
    unk_156 = 0x5f;
}
}

namespace F14 {
void Unk_0201d2d0::func_02024a1c() {
    Unk_0201d2d0_Out out;
    u8 b;
    if (func_0209a938(unk_160) >= 4) {
        _ZN12Unk_020d893813func_0202d1d4EP16Unk_020d8938_Tbl(this, ((u8 *)&nZ::data_021bf514[25]));
    } else {
        _ZN12Unk_020d893813func_0202d1d4EP16Unk_020d8938_Tbl(this, ((u8 *)&nZ::data_021bf514[17]));
    }
    if (unk_ac) {
        (this->*unk_ac)(&out);
    }
    b = out.unk_04;
    _ZN12Unk_020660f813func_02067a84EPhPv(unk_3c, &b, out.unk_00);
}
}

namespace F14 {
void Unk_0201d2d0::func_020249ec() {
    _ZN12Unk_020d771013func_02014e60EPtjjj(this, &unk_198, 0, 5, 0);
    func_0202d33c(data_020d7ac0);
}
}

namespace F14 {
void Unk_0201d2d0::func_02024964(Unk_0201d2d0_Out *out) {
    Unk_0201d2d0_Data *d = &data_020c78d8;
    if (_ZN12Unk_0209ada413func_0209ac64Ev(_ZN12Unk_020d893813func_0202d114Ev(this)) == 1) {
        d = &data_020c78f0;
    }
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), d->unk_00, d->unk_04, 0, 0);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
    unk_c4 = data_020d7a60;
}
}

namespace F14 {
void Unk_0201d2d0::func_020248e4() {
    void *r4 = unk_fc->unk_82c;
    if (_ZN12Unk_0209ada413func_0209ac64Ev(_ZN12Unk_020d893813func_0202d114Ev(this)) == 4) {
        if (func_0204b2d4(&unk_120) != 0) {
            u32 v = func_0207f8ec(r4, &unk_120);
            u32 w = func_0209a6c0(unk_160, (u8)v);
            func_020776b4(r4, (u8)w);
        }
    }
    _ZN12Unk_0209ada413func_0209abb4Eh(_ZN12Unk_020d893813func_0202d114Ev(this), 1);
    func_020776f0(r4, 1);
    func_02078520(func_0207e310(r4));
}
}

namespace F14 {
void Unk_0201d2d0::func_02024800() {
    switch (_ZN12Unk_0209ada413func_0209ac64Ev(_ZN12Unk_020d893813func_0202d114Ev(this))) {
    case 2:
        if (func_0209a938(unk_160) <= 1) {
            _ZN12Unk_020d771013func_0201517cEjjj(this, func_020295b4, 0xd, 1);
        } else {
            _ZN12Unk_020d771013func_020151a8Ejjj(this, func_020290ac(unk_160), 0xd, 1);
        }
        _ZN12Unk_020d771013func_020151d0Ei(this, 0);
        func_0202d33c(data_020d7a58);
        break;
    case 3:
        if (func_0209a938(unk_160) <= 1) {
            _ZN12Unk_020d771013func_0201517cEjjj(this, func_020295f8, 0xd, 1);
        } else {
            _ZN12Unk_020d771013func_020151a8Ejjj(this, func_020291b4(_ZN12Unk_0209ada413func_0209ab94Ev(_ZN12Unk_020d893813func_0202d114Ev(this))), 0xd, 1);
        }
        _ZN12Unk_020d771013func_020151d0Ei(this, 0);
        func_0202d33c(data_020d79c0);
        break;
    case 4:
        _ZN12Unk_020d771013func_0201517cEjjj(this, func_0202963c, 0xd, 1);
        _ZN12Unk_020d771013func_020151d0Ei(this, 0);
        func_0202d33c(data_020d7ba8);
        break;
    }
}
}

namespace F14 {
void Unk_0201d2d0::func_0202475c() {
    Unk_0201d2d0_Out out;
    u8 b;
    if (func_0206ed18() == 0) {
        if (unk_3c) {
            unk_3c->unk_08 = 1;
        }
        _ZN12Unk_020d893813func_0202d1d4EP16Unk_020d8938_Tbl(this, ((u8 *)&nZ::data_021bf2a4[11]));
        if (unk_ac) {
            (this->*unk_ac)(&out);
        }
        b = out.unk_04;
        _ZN12Unk_020660f813func_02067a84EPhPv(unk_3c, &b, out.unk_00);
    } else {
        void *r5 = func_0206ed38();
        unk_120.unk_00 = *(u16 *)_ZN12Unk_02097d1c13func_02097f6cEi(_ZN12Unk_0209865c13func_02098750Ev(func_0209750c()), r5);
        _ZN12Unk_0201442013func_02014ce4EPtjjj(this, &unk_120, 0, 4, 0);
        func_0202d328(data_020d7d48);
    }
}
}

namespace F14 {
void Unk_0201d2d0::func_02024554() {
    Unk_0201d2d0_Out out;
    u8 b;
    void *r4 = unk_fc->unk_82c;
    switch (_ZN12Unk_0209ada413func_0209ac64Ev(_ZN12Unk_020d893813func_0202d114Ev(this))) {
    case 2:
        _ZN12Unk_020d893813func_0202d1d4EP16Unk_020d8938_Tbl(this, ((u8 *)&nZ::data_021bf514[21]));
        if (unk_120.unk_00 != 0xfff1) {
            _ZN12Unk_020d771413func_0201578cEjjj(this, &unk_120, 0, 7);
        }
        if (func_0209a938(unk_160) >= 2 && func_0209a938(unk_160) <= 4) {
            u32 r6 = func_02025a50(&unk_120);
            func_0209a8b4(unk_160, r6);
            func_020776c0(r4, r6);
        }
        break;
    case 3: {
        if (func_0209a938(unk_160) >= 2) {
            _ZN12Unk_020d893813func_0202d1d4EP16Unk_020d8938_Tbl(this, ((u8 *)&nZ::data_021bf514[21]));
        } else {
            u8 *r7 = func_0207f968(r4);
            u16 *p = _ZN12Unk_0207fb8013func_0207fd9cEv(r4);
            BOOL eq;
            if (func_0204b2d4(&unk_120) != 0) {
                s32 a = func_0204b25c(&unk_120);
                if (a == func_0204b25c(p)) {
                    eq = TRUE;
                } else {
                    eq = FALSE;
                }
            } else {
                if (unk_120.unk_00 == *p) {
                    eq = TRUE;
                } else {
                    eq = FALSE;
                }
            }
            if (eq) {
                _ZN12Unk_020d893813func_0202d1d4EP16Unk_020d8938_Tbl(this, ((u8 *)&nZ::data_021bf514[20]));
            } else if (r7[1] != func_0204b820(&unk_120)) {
                _ZN12Unk_020d893813func_0202d1d4EP16Unk_020d8938_Tbl(this, ((u8 *)&nZ::data_021bf514[21]));
            } else {
                _ZN12Unk_020d893813func_0202d1d4EP16Unk_020d8938_Tbl(this, ((u8 *)&nZ::data_021bf514[19]));
            }
        }
        if (unk_120.unk_00 != 0xfff1) {
            _ZN12Unk_020d771413func_0201578cEjjj(this, &unk_120, 2, 7);
        }
        break;
    }
    case 4:
        if (func_0207f8ec(r4, &unk_120) > 0) {
            if (func_0204b2d4(&unk_120) != 0) {
                s32 v = func_0207e7a8(r4, &unk_120);
                s32 w = func_02053228(&unk_120);
                if (v >= 2 || (v == 1 && w == 2)) {
                    _ZN12Unk_020d893813func_0202d1d4EP16Unk_020d8938_Tbl(this, ((u8 *)&nZ::data_021bf514[20]));
                } else {
                    _ZN12Unk_020d893813func_0202d1d4EP16Unk_020d8938_Tbl(this, ((u8 *)&nZ::data_021bf514[21]));
                }
            } else {
                _ZN12Unk_020d893813func_0202d1d4EP16Unk_020d8938_Tbl(this, ((u8 *)&nZ::data_021bf514[19]));
            }
        } else {
            _ZN12Unk_020d893813func_0202d1d4EP16Unk_020d8938_Tbl(this, ((u8 *)&nZ::data_021bf514[19]));
        }
        if (unk_120.unk_00 != 0xfff1) {
            _ZN12Unk_020d771413func_0201578cEjjj(this, &unk_120, 0, 7);
        }
            break;
    }
    if (unk_3c) {
        unk_3c->unk_08 = 1;
    }
    if (unk_ac) {
        (this->*unk_ac)(&out);
    }
    b = out.unk_04;
    _ZN12Unk_020660f813func_02067a84EPhPv(unk_3c, &b, out.unk_00);
}
}

namespace F14 {
void Unk_0201d2d0::func_020244b8(Unk_0201d2d0_Out *out) {
    Unk_0201d2d0_Data d = data_020d7bf8;
    if (_ZN12Unk_0209ada413func_0209ac64Ev(_ZN12Unk_020d893813func_0202d114Ev(this)) == 4) {
        d.unk_00 = (u32)data_020d8204;
    }
    if (unk_3c) {
        unk_3c->unk_08 = 1;
    }
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), d.unk_00, d.unk_04, 0, 0);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
    unk_c4 = data_020d7b70;
}
}

namespace F14 {
void Unk_0201d2d0::func_020244b0() {
    _ZN12Unk_0201442013func_02014918Ev(this);
}
}

namespace F14 {
void Unk_0201d2d0::func_02024418(Unk_0201d2d0_Out *out) {
    u32 r6 = 2;
    u32 r7 = (u32)data_020c7a20;
    if (_ZN12Unk_0209ada413func_0209ac64Ev(_ZN12Unk_020d893813func_0202d114Ev(this)) == 4) {
        r7 = (u32)data_020c7a2c;
        r6 = 3;
    }
    if (unk_3c) {
        unk_3c->unk_08 = 1;
    }
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), r7, 3, 1, (u8)r6);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
    unk_c4 = data_020d7cd0;
}
}

namespace F14 {
void Unk_0201d2d0::func_02024370(Unk_0201d2d0_Out *out) {
    Unk_0201d2d0_Data d = data_020d7b08;
    switch (_ZN12Unk_0209ada413func_0209ac64Ev(_ZN12Unk_020d893813func_0202d114Ev(this))) {
    case 2:
        d.unk_00 = (u32)data_020d85dc;
        break;
    case 3:
        d.unk_00 = (u32)data_020d85e8;
        break;
    default:
        d.unk_00 = (u32)data_020d85f4;
        break;
    }
    if (unk_3c) {
        unk_3c->unk_08 = 1;
    }
    if (d.unk_00 != 0) {
        func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), d.unk_00, d.unk_04, 0, 0);
    }
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}
}

namespace F14 {
void Unk_0201d2d0::func_020242d8() {
    void *r2 = func_0206ed38();
    u16 h = 0xfff1;
    func_0209909c(&h, 0, r2);
    if (_ZN12Unk_0209ada413func_0209ac64Ev(_ZN12Unk_020d893813func_0202d114Ev(this)) == 3) {
        _ZN12Unk_0201442013func_02014b78Ev(this);
        if (Unk_020242d8_R1(_ZN12Unk_0207fb8013func_0207fd9cEv(unk_fc->unk_82c), 0x11a8, 0x12a7)) {
            unk_198 = *_ZN12Unk_0207fb8013func_0207fd9cEv(unk_fc->unk_82c);
        }
    } else {
        _ZN12Unk_0201442013func_02014a4cEv(this);
    }
    func_0202d33c(data_020d7e88);
}
}

namespace F14 {
void Unk_0201d2d0::func_02024254() {
    Unk_0201d2d0_Out out;
    u8 b;
    if (_ZN12Unk_0209ada413func_0209ac64Ev(_ZN12Unk_020d893813func_0202d114Ev(this)) == 2) {
        _ZN12Unk_020d893813func_0202d1d4EP16Unk_020d8938_Tbl(this, ((u8 *)&nZ::data_021bf514[23]));
    } else {
        if (_ZN12Unk_0209ada413func_0209ac64Ev(_ZN12Unk_020d893813func_0202d114Ev(this)) == 3) {
            _ZN17Unk_0202ce90_Base13func_0202ce90Ev(this);
        }
        _ZN12Unk_020d893813func_0202d1d4EP16Unk_020d8938_Tbl(this, ((u8 *)&nZ::data_021bf514[22]));
    }
    if (unk_ac) {
        (this->*unk_ac)(&out);
    }
    b = out.unk_04;
    _ZN12Unk_020660f813func_02067a84EPhPv(unk_3c, &b, out.unk_00);
}
}

namespace F14 {
void Unk_0201d2d0::func_020241f4(Unk_0201d2d0_Out *out) {
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), data_020c7820.unk_00, data_020c7820.unk_04, 0, 0);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}
}

namespace F13 {
void Unk_020238b0::func_020241a0() {
    u8 b;
    Unk_020238b0_Out out;
    _ZN12Unk_020d893813func_0202d1d4EP16Unk_020d8938_Tbl(this, ((u8 *)&nZ::data_021bf514[23]));
    if (unk_ac) {
        (this->*unk_ac)(&out);
    }
    b = out.unk_04;
    _ZN12Unk_020660f813func_02067abcEPhPv(unk_3c, &b, out.unk_00);
}
}

namespace F13 {
void Unk_020238b0::func_02023da4() {
    u16 buf[16];
    void *r4;
    void *r10;
    void *r6;
    void *t;
    s32 r7, r5;
    if (unk_160 == 0) {
        return;
    }
    r4 = func_0209750c();
    r10 = _ZN12Unk_0209865c13func_02098750Ev();
    r6 = unk_fc->unk_82c;
    t = func_0209a940(unk_160);
    r7 = func_02063b8c(100);
    r5 = func_0209a938(unk_160);
    switch (_ZN12Unk_0209ada413func_0209ac64Ev(t)) {
    case 0:
    case 1:
    case 2:
        switch (r5) {
        case 0:
        case 1:
            if (r7 < 30) {
                unk_19c = func_0205b4f8() * 4 + 0x1f4;
                unk_19c = func_0202ac7c(unk_19c);
                func_02026968(&buf[0], unk_19c);
                unk_198 = buf[0];
            }
            break;
        case 2:
        case 3:
            func_0207ce70(&buf[1], unk_fc->unk_82c);
            unk_198 = buf[1];
            if (unk_198 != 0xfff1) {
                func_0207cf10(unk_fc->unk_82c, &unk_198);
            } else if (func_02063b8c(100) < 30) {
                unk_19c = func_0205b4f8() * 4 + 0x2bc;
                unk_19c = func_0202ac7c(unk_19c);
                func_02026968(&buf[2], unk_19c);
                unk_198 = buf[2];
            }
            break;
        default:
            func_0202cd44(&buf[3], r4);
            unk_198 = buf[3];
            break;
        }
        if (unk_198 == 0xfff1) {
            func_0202cd44(&buf[4], 0);
            unk_198 = buf[4];
        }
        break;
    case 3:
        switch (r5) {
        case 0:
        case 1:
            func_0207ceb4(&buf[5], r6);
            unk_198 = buf[5];
            if (unk_198 != 0xfff1) {
                func_0207cf10(r6, &unk_198);
            } else if (r7 < 30) {
                unk_19c = func_0205b4f8() * 4 + 0x1f4;
                unk_19c = func_0202ac7c(unk_19c);
                func_02026968(&buf[6], unk_19c);
                unk_198 = buf[6];
            }
            break;
        case 2:
        case 3:
        case 4:
            func_0207ce70(&buf[7], r6);
            unk_198 = buf[7];
            if (unk_198 != 0xfff1) {
                func_0207cf10(r6, &unk_198);
            } else if (func_02063b8c(100) < 30) {
                unk_19c = func_0205b4f8() * 4 + 0x2bc;
                unk_19c = func_0202ac7c(unk_19c);
                func_02026968(&buf[8], unk_19c);
                unk_198 = buf[8];
            }
            break;
        default:
            func_0202cd2c(&buf[9], r4);
            unk_198 = buf[9];
            break;
        }
        if (unk_198 == 0xfff1) {
            func_0202cd2c(&buf[10], 0);
            unk_198 = buf[10];
        }
        break;
    case 4:
        switch (r5) {
        case 0:
        case 1:
            if (r7 < 30) {
                unk_19c = func_0205b4f8() * 4 + 0x1f4;
                unk_19c = func_0202ac7c(unk_19c);
                func_02026968(&buf[11], unk_19c);
                unk_198 = buf[11];
            }
            break;
        case 2:
        case 3:
        case 4:
            func_0207ce70(&buf[12], r6);
            unk_198 = buf[12];
            if (unk_198 != 0xfff1) {
                func_0207cf10(r6, &unk_198);
            } else if (func_02063b8c(100) < 30) {
                unk_19c = func_0205b4f8() * 4 + 0x2bc;
                unk_19c = func_0202ac7c(unk_19c);
                func_02026968(&buf[13], unk_19c);
                unk_198 = buf[13];
            }
            break;
        default:
            func_0202cd44(&buf[14], r4);
            unk_198 = buf[14];
            break;
        }
        if (unk_198 == 0xfff1) {
            func_0202cd44(&buf[15], 0);
            unk_198 = buf[15];
        }
        break;
    }
    if (Unk_020238b0_InRange(&unk_198, 0x1492, 0x14fd)) {
        func_02097a48(r10, unk_19c, 1);
    } else if (unk_198 != 0xfff1) {
        s32 r2 = _ZN12Unk_02097d1c13func_02097edcEv(r10);
        if (r2 != -1) {
            _ZN12Unk_02097d1c13func_02097f30EPtij(r10, &unk_198, r2, 0);
            func_0203c42c(_ZN12Unk_0209865c13func_020986c8Ev(r4), &unk_198, 0, 1);
        }
    }
    if (Unk_020238b0_InRange(&unk_198, 0x1492, 0x14fd)) {
        _ZN12Unk_020d771413func_020158e0Eijihii(this, unk_19c, 1, 4, 1, 1, 0);
    } else if (unk_198 != 0xfff1) {
        _ZN12Unk_020d771413func_0201578cEjjj(this, &unk_198, 1, 7);
    }
}
}

namespace F13 {
void Unk_020238b0::func_02023cb0(Unk_020238b0_Out *out) {
    void *r6 = unk_fc->unk_82c;
    u16 saved = unk_120;
    if (_ZN12Unk_0209ada413func_0209ac64Ev(_ZN12Unk_020d893813func_0202d114Ev(this)) == 3) {
        saved = unk_198;
        unk_198 = 0xfff1;
    }
    func_02023da4();
    if (saved != 0xfff1) {
        func_0207cfb8(r6, &saved);
    }
    if (unk_120 != 0xfff1 && unk_128 != 0 && unk_124 != -1) {
        _ZN12Unk_0208091c13func_02080b78EPt(unk_128, &unk_120);
        func_020777b8(r6, unk_124, &unk_120);
    }
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), data_020c76f0.unk_00, data_020c76f0.unk_04, 0, 0);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
    unk_156 = 0x5f;
}
}

namespace F13 {
void Unk_020238b0::func_02023c80() {
    _ZN12Unk_020d771013func_02014e60EPtjjj(this, &unk_198, 0, 5, 0);
    func_0202d33c(data_020d7cf8);
}
}

namespace F13 {
void Unk_020238b0::func_02023bfc() {
    u8 b;
    Unk_020238b0_Out out;
    s32 n = func_0209a8f4(_ZN12Unk_0209ada413func_0209ac64Ev(_ZN12Unk_020d893813func_0202d114Ev(this)));
    if (func_0209a938(unk_160) >= n - 1) {
        _ZN12Unk_020d893813func_0202d1d4EP16Unk_020d8938_Tbl(this, ((u8 *)&nZ::data_021bf514[25]));
    } else {
        _ZN12Unk_020d893813func_0202d1d4EP16Unk_020d8938_Tbl(this, ((u8 *)&nZ::data_021bf514[24]));
    }
    if (unk_ac) {
        (this->*unk_ac)(&out);
    }
    b = out.unk_04;
    _ZN12Unk_020660f813func_02067a84EPhPv(unk_3c, &b, out.unk_00);
}
}

namespace F13 {
void Unk_020238b0::func_02023b50(Unk_020238b0_Out *out) {
    Unk_020238b0_Data d = data_020d7d38;
    switch (_ZN12Unk_0209ada413func_0209ac64Ev(_ZN12Unk_020d893813func_0202d114Ev(this))) {
    case 2:
        d.unk_00 = (u32)data_020c7a44;
        break;
    case 3:
        d.unk_00 = (u32)data_020c7a50;
        break;
    default:
        d.unk_00 = (u32)data_020c7a5c;
        break;
    }
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), d.unk_00, d.unk_04, 0, 0);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
    unk_c4 = data_020d7970;
}
}

namespace F13 {
void Unk_020238b0::func_02023ab4(Unk_020238b0_Out *out) {
    Unk_020238b0_Data *e = data_020c7b88;
    if (_ZN12Unk_0209ada413func_0209ad28Ev(_ZN12Unk_020d893813func_0202d114Ev(this)) == 0) {
        s32 idx = 0;
        if (_ZN12Unk_0209ada413func_0209ace8EPi(_ZN12Unk_020d893813func_0202d114Ev(this), &idx) != 0) {
            e = &data_020c7b88[idx];
        }
    }
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), e->unk_00, e->unk_04, 0, 0);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
    unk_c4 = data_020d7da0;
}
}

namespace F13 {
void Unk_020238b0::func_02023a58() {
    void *r4 = unk_fc->unk_82c;
    _ZN12Unk_0209ada413func_0209abb4Eh(func_0209a940(unk_160), 3);
    func_020776f0(unk_fc->unk_82c, 3);
    if (_ZN12Unk_020cbb1813func_02072e88Ei(data_020cbb18[0], ((void **)data_020cbb18[0])[0x64 / 4]) == 0) {
        func_0207c7bc(r4);
        func_0207e310(r4);
        func_02078520();
    }
}
}

namespace F13 {
void Unk_020238b0::func_020239c8(Unk_020238b0_Out *out) {
    Unk_020238b0_Data d = data_020d7e78;
    s32 idx = 0;
    _ZN12Unk_0209ada413func_0209ace8EPi(_ZN12Unk_020d893813func_0202d114Ev(this), &idx);
    if (idx < 5) {
        d.unk_00 = data_020d8864[idx];
    }
    if (d.unk_00 != 0) {
        func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), d.unk_00, d.unk_04, 0, 0);
        out->unk_00 = (u32)&unk_100;
        out->unk_04 = unk_11e;
    }
}
}

namespace F13 {
void Unk_020238b0::func_02023928(Unk_020238b0_Out *out) {
    Unk_020238b0_Data d = data_020d7c80;
    s32 idx = 0;
    _ZN12Unk_0209ada413func_0209ace8EPi(_ZN12Unk_020d893813func_0202d114Ev(this), &idx);
    if (idx < 5) {
        d.unk_00 = data_020d8878[idx];
    }
    if (d.unk_00 != 0) {
        func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), d.unk_00, d.unk_04, 0, 0);
        out->unk_00 = (u32)&unk_100;
        out->unk_04 = unk_11e;
    }
    func_0202d294(data_020d7c78);
}
}

namespace F13 {
void Unk_020238b0::func_02023900() {
    func_0209a944(unk_160);
    func_020776d8(unk_fc->unk_82c);
}
}

namespace F13 {
extern "C" BOOL func_020238e0(u16 *p) {
    return Unk_020238b0_InRange(p, 0x1561, 0x1564);
}
}

namespace F13 {
void Unk_020238b0::func_020238b0() {
    _ZN12Unk_020d771013func_0201517cEjjj(this, (u32)func_020238e0, 0xd, 0);
    _ZN12Unk_020d771013func_020151d0Ei(this, 0);
    func_0202d33c(data_020d7c70);
}
}

namespace F12 {
void Unk_0201d2d0::func_02023800() {
    u8 b;
    u16 h;
    Unk_0201d2d0_Out out;
    if (func_0206ed18() != 0) {
        s32 t = func_0206ed38();
        func_0209750c();
        unk_120 = *_ZN12Unk_02097d1c13func_02097f6cEi(_ZN12Unk_0209865c13func_02098750Ev(), t);
        h = 0xfff1;
        func_0209909c(&h, 0, t);
        _ZN12Unk_020d893813func_0202d1d4EP16Unk_020d8938_Tbl(this, ((u8 *)&nZ::data_021bf514[29]));
        _ZN12Unk_0201442013func_02014ce4EPtjjj(this, &unk_120, 0, 5, 0);
    } else {
        _ZN12Unk_020d893813func_0202d1d4EP16Unk_020d8938_Tbl(this, ((u8 *)&nZ::data_021bf2a4[11]));
    }
    if (unk_ac) {
        (this->*unk_ac)(&out);
    }
    b = out.unk_04;
    _ZN12Unk_020660f813func_02067a84EPhPv(unk_3c, &b, out.unk_00);
}
}

namespace F12 {
void Unk_0201d2d0::func_0202368c(Unk_0201d2d0_Out *out) {
    u16 h[2];
    Unk_0202368c_Obj o1, o2;
    func_0200303c(&unk_100, 30, data_020c77d8, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)));
    switch (_ZN12Unk_0209ada413func_0209ac64Ev(func_0202d114())) {
    case 0xe: {
        unk_11e = 0xa;
        _ZN12Unk_0206338013func_0206338cEii(&o1, 0, 0);
        func_02062f94(&h[0], &o1, 0, 0, 1, 1, 0);
        unk_198 = h[0];
        func_02063388(&o1);
        _ZN12Unk_020d771413func_0201578cEjjj(this, &unk_198, 0, 7);
        _ZN12Unk_0209ada413func_0209abb4Eh(func_0202d114(), 1);
        break;
    }
    case 0x10: {
        unk_11e = 0xc;
        _ZN12Unk_0206338013func_0206338cEii(&o2, 3, 0);
        func_02062f94(&h[1], &o2, 0, 0, 1, 1, 0);
        unk_198 = h[1];
        func_02063388(&o2);
        _ZN12Unk_020d771413func_0201578cEjjj(this, &unk_198, 0, 7);
        _ZN12Unk_0209ada413func_0209abb4Eh(func_0202d114(), 1);
        break;
    }
    case 0x11:
        if (unk_128 != 0 && _ZN12Unk_0207fb8013func_02080450EPt(unk_fc->unk_82c, func_02080e18())) {
            unk_178 = data_020d7a30;
            unk_134 = unk_128;
            unk_11e = 0xe;
        } else {
            unk_11e = 0x16;
        }
        _ZN12Unk_0209ada413func_0209abb4Eh(func_0202d114(), 1);
        break;
    default:
        unk_11e = 0xa;
        break;
    }
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}
}

namespace F12 {
void Unk_0201d2d0::func_02023614() {
    switch (_ZN12Unk_0209ada413func_0209ac64Ev(func_0202d114())) {
    case 0xe:
    case 0x10: {
        s32 t = func_02098ffc();
        if (t >= 0) {
            func_0209909c(&unk_198, 0, t);
            func_0203c42c(_ZN12Unk_0209865c13func_020986c8Ev(func_0209750c()), &unk_198, 0, 1);
        }
        _ZN12Unk_020d771013func_02014e60EPtjjj(this, &unk_198, 0, 5, 0);
        func_0202d33c(data_020d7c58);
        break;
    }
    case 0x11:
        _ZN12Unk_020d893813func_0202d20cEv(this);
        break;
    }
}
}

namespace F12 {
void Unk_0201d2d0::func_020235c0() {
    u8 b;
    Unk_0201d2d0_Out out;
    _ZN12Unk_020d893813func_0202d1d4EP16Unk_020d8938_Tbl(this, ((u8 *)&nZ::data_021bf514[30]));
    if (unk_ac) {
        (this->*unk_ac)(&out);
    }
    b = out.unk_04;
    _ZN12Unk_020660f813func_02067a84EPhPv(unk_3c, &b, out.unk_00);
}
}

namespace F12 {
void Unk_0201d2d0::func_02023548(Unk_0201d2d0_Out *out) {
    func_0200303c(&unk_100, 30, data_020c77d8, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)));
    switch (_ZN12Unk_0209ada413func_0209ac64Ev(func_0202d114())) {
    case 0xe:
        unk_11e = 0xb;
        break;
    case 0x10:
        unk_11e = 0xd;
        break;
    default:
        unk_11e = 0xe;
        break;
    }
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}
}

namespace F12 {
void Unk_0201d2d0::func_020234e8(Unk_0201d2d0_Out *out) {
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), data_020c7898.unk_00, data_020c7898.unk_04, 0, 0);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}
}

namespace F12 {
void Unk_0201d2d0::func_02023488(Unk_0201d2d0_Out *out) {
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), data_020c77d0.unk_00, data_020c77d0.unk_04, 0, 0);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}
}

namespace F12 {
void Unk_0201d2d0::func_02023428(Unk_0201d2d0_Out *out) {
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), data_020c77c0.unk_00, data_020c77c0.unk_04, 0, 0);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}
}

namespace F12 {
void Unk_0201d2d0::func_020233b8() {
    u8 b;
    Unk_0201d2d0_Out out;
    if (func_02098ffc() != -1) {
        _ZN12Unk_020d893813func_0202d1d4EP16Unk_020d8938_Tbl(this, ((u8 *)&nZ::data_021bf514[34]));
    } else {
        _ZN12Unk_020d893813func_0202d1d4EP16Unk_020d8938_Tbl(this, ((u8 *)&nZ::data_021bf514[36]));
    }
    if (unk_ac) {
        (this->*unk_ac)(&out);
    }
    b = out.unk_04;
    _ZN12Unk_020660f813func_02067a84EPhPv(unk_3c, &b, out.unk_00);
}
}

namespace F12 {
void Unk_0201d2d0::func_02023308(Unk_0201d2d0_Out *out) {
    u16 h[2];
    func_0202cd44(&h[0], func_0209750c());
    unk_198 = h[0];
    if (unk_198 == 0xfff1) {
        func_0202cd44(&h[1], 0);
        unk_198 = h[1];
    }
    if (unk_198 != 0xfff1) {
        _ZN12Unk_020d771413func_0201578cEjjj(this, &unk_198, 1, 7);
    }
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), data_020c77b8.unk_00, data_020c77b8.unk_04, 0, 0);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}
}

namespace F12 {
void Unk_0201d2d0::func_0202329c() {
    void *a = func_0209750c();
    void *b = _ZN12Unk_0209865c13func_02098750Ev();
    s32 c = _ZN12Unk_02097d1c13func_02097edcEv();
    if (c == -1) {
        c = 0;
    }
    _ZN12Unk_020d771013func_02014e60EPtjjj(this, &unk_198, 0, 5, 0);
    _ZN12Unk_02097d1c13func_02097f30EPtij(b, &unk_198, c, 0);
    func_0203c42c(_ZN12Unk_0209865c13func_020986c8Ev(a), &unk_198, 0, 1);
    func_0202d33c(data_020d7c38);
}
}

namespace F12 {
void Unk_0201d2d0::func_02023248() {
    u8 b;
    Unk_0201d2d0_Out out;
    _ZN12Unk_020d893813func_0202d1d4EP16Unk_020d8938_Tbl(this, ((u8 *)&nZ::data_021bf514[35]));
    if (unk_ac) {
        (this->*unk_ac)(&out);
    }
    b = out.unk_04;
    _ZN12Unk_020660f813func_02067a84EPhPv(unk_3c, &b, out.unk_00);
}
}

namespace F12 {
void Unk_0201d2d0::func_020231cc(Unk_0201d2d0_Out *out) {
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), data_020c77b0.unk_00, data_020c77b0.unk_04, 0, 0);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
    unk_156 = 0x5f;
    unk_c4 = data_020d8010;
}
}

namespace F12 {
void Unk_0201d2d0::func_020231b4() {
    func_0207a4b8(data_021dfd8c);
    _ZN12Unk_020994cc13func_02099790Ev();
}
}

namespace F12 {
void Unk_0201d2d0::func_02023140(Unk_0201d2d0_Out *out) {
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), data_020c75b0.unk_00, data_020c75b0.unk_04, 0, 0);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
    unk_c4 = data_020d7998;
}
}

namespace F12 {
void Unk_0201d2d0::func_02023118() {
    void *p;
    func_0207a4b8(data_021dfd8c);
    p = _ZN12Unk_020994cc13func_0209978cEv();
    if (_ZN12Unk_0209ada413func_0209ad68Ev() != 0) {
        _ZN12Unk_0209ada413func_0209abb4Eh(p, 1);
    }
}
}

namespace F12 {
void Unk_0201d2d0::func_020230b4(Unk_0201d2d0_Out *out) {
    u32 v = data_020c7668.unk_04;
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), data_020c7668.unk_00, v, 1, v);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}
}

namespace F12 {
void Unk_0201d2d0::func_02023044() {
    u8 b;
    Unk_0201d2d0_Out out;
    if (func_02098ffc() != -1) {
        _ZN12Unk_020d893813func_0202d1d4EP16Unk_020d8938_Tbl(this, ((u8 *)&nZ::data_021bf514[34]));
    } else {
        _ZN12Unk_020d893813func_0202d1d4EP16Unk_020d8938_Tbl(this, ((u8 *)&nZ::data_021bf514[38]));
    }
    if (unk_ac) {
        (this->*unk_ac)(&out);
    }
    b = out.unk_04;
    _ZN12Unk_020660f813func_02067a84EPhPv(unk_3c, &b, out.unk_00);
}
}

namespace F12 {
void Unk_0201d2d0::func_02022fe0(Unk_0201d2d0_Out *out) {
    u32 v = data_020c7578.unk_04;
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), data_020c7578.unk_00, v, 2, v);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}
}

namespace F12 {
void Unk_0201d2d0::func_02022f80(Unk_0201d2d0_Out *out) {
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), data_020c7588.unk_00, data_020c7588.unk_04, 0, 0);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}
}

namespace F12 {
void Unk_0201d2d0::func_02022f14() {
    Unk_0201d568_S s;
    func_0201c95c(this, &s);
    func_0201c938(this, &s, 0, 0x1f, 0x1f, ((u8 *)&nZ::data_021bf514[40]));
    func_0201c938(this, &s, 1, 0x20, 0x20, ((u8 *)&nZ::data_021bf2a4[3]));
    s.unk_20 = 2;
    s.unk_21 = s.unk_20 - 1;
    _ZN12Unk_020d893813func_0201c870EPv(this, &s);
    func_0202d1c0(data_020d79e0);
    _ZN12Unk_020660f813func_020679c0Ei(unk_3c, 1);
}
}

namespace F11 {
void Unk_0201d2d0::func_02022eb4(Unk_0201d2d0_Out *out) {
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), data_020c7590.unk_00, data_020c7590.unk_04, 0, 0);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}
}

namespace F11 {
void Unk_0201d2d0::func_02022e8c() {
    _ZN12Unk_020d771013func_02015170Ejj(this, 0x31, 0);
    _ZN12Unk_020d771013func_020151d0Ei(this, 2);
    func_0202d33c(data_020d7be8);
}
}

namespace F11 {
void Unk_0201d2d0::func_02022dc0() {
    struct {
        u8 unk_00;
        u8 pad_01[3];
        u32 a0;
        u32 a1;
        u32 b0;
        u32 b1;
        Unk_0201d2d0_Out o;
    } l;
    l.a0 = 0;
    l.a1 = 0;
    l.b0 = 0;
    l.b1 = 0;
    func_0209d498(&l.b0);
    func_02116048(&l.b0, &l.a0, 8);
    func_0206e8b8(&l.a0);
    if (func_0209d374(&l.b0, &l.a0) <= 30) {
        _ZN12Unk_020d893813func_0202d1d4EP16Unk_020d8938_Tbl(this, ((u8 *)&nZ::data_021bf514[41]));
    } else if (func_0207c618(unk_fc->unk_82c, &l.a0) != 0) {
        _ZN12Unk_020d893813func_0202d1d4EP16Unk_020d8938_Tbl(this, ((u8 *)&nZ::data_021bf514[43]));
    } else if (((u8 *)&l)[6] < 6) {
        _ZN12Unk_020d893813func_0202d1d4EP16Unk_020d8938_Tbl(this, ((u8 *)&nZ::data_021bf514[42]));
    } else {
        _ZN12Unk_020d893813func_0202d1d4EP16Unk_020d8938_Tbl(this, ((u8 *)&nZ::data_021bf514[44]));
    }
    if (unk_ac) {
        (this->*unk_ac)(&l.o);
    }
    l.unk_00 = l.o.unk_04;
    _ZN12Unk_020660f813func_02067a84EPhPv(unk_3c, &l.unk_00, l.o.unk_00);
}
}

namespace F11 {
void Unk_0201d2d0::func_02022d60(Unk_0201d2d0_Out *out) {
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), data_020c7788.unk_00, data_020c7788.unk_04, 0, 0);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}
}

namespace F11 {
void Unk_0201d2d0::func_02022d00(Unk_0201d2d0_Out *out) {
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), data_020c7778.unk_00, data_020c7778.unk_04, 0, 0);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}
}

namespace F11 {
void Unk_0201d2d0::func_02022ca0(Unk_0201d2d0_Out *out) {
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), data_020c7768.unk_00, data_020c7768.unk_04, 0, 0);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}
}

namespace F11 {
void Unk_0201d2d0::func_02022c14(Unk_0201d2d0_Out *out) {
    Unk_02022bb4_Pair s;
    s.unk_00 = 0;
    s.unk_04 = 0;
    func_0206e8b8(&s);
    _ZN12Unk_0201d2d013func_020289f8EP14Unk_020289f8_S(this, &s);
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), data_020c7a00.unk_00, data_020c7a00.unk_04, 0, 0);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
    unk_156 = 0x5e;
    func_0202d294(data_020d79d0);
}
}

namespace F11 {
void Unk_0201d2d0::func_02022bb4() {
    func_0209750c();
    u8 *p = (u8 *)_ZN12Unk_0209865c13func_0209865cEv();
    Unk_02022bb4_Pair s;
    s.unk_00 = 0;
    s.unk_04 = 0;
    func_0206e8b8(&s);
    func_02099e88(p + 0x88, _ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c), &s);
    func_0207e310(unk_fc->unk_82c);
    func_02078578();
    _ZN12Unk_0209ada413func_0209ad80Ev();
    func_0207a624(data_021dfd8c);
}
}

namespace F11 {
void Unk_0201d2d0::func_02022b40(Unk_0201d2d0_Out *out) {
    func_0209750c();
    u8 *p = (u8 *)_ZN12Unk_0209865c13func_0209865cEv();
    _ZN12Unk_0201d2d013func_020289f8EP14Unk_020289f8_S(this, p + 0xa0);
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), data_020c79e8.unk_00, data_020c79e8.unk_04, 0, 0);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}
}

namespace F11 {
void Unk_0201d2d0::func_02022acc(Unk_0201d2d0_Out *out) {
    func_0209750c();
    u8 *p = (u8 *)_ZN12Unk_0209865c13func_0209865cEv();
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), data_020c79d8.unk_00, data_020c79d8.unk_04, 0, 0);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
    func_02099f1c(p + 0x88);
}
}

namespace F11 {
void Unk_0201d2d0::func_02022a6c(Unk_0201d2d0_Out *out) {
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), data_020c75f8.unk_00, data_020c75f8.unk_04, 0, 0);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}
}

namespace F11 {
s32 Unk_0201d2d0::func_02022994() {
    struct {
        u8 buf[2];
        u16 h;
        u32 t0;
        u32 t1;
        s32 a, b, c;
    } l;
    s32 r = 0;
    l.t0 = 0;
    l.t1 = 0;
    l.a = 5;
    l.h = 0xfff1;
    l.b = 0;
    l.c = 0;
    func_0209d498(&l.t0);
    if (func_0202c7c0(&l.h, &l.a, &l.b, &l.c, &l.t0) == 1) {
        if (l.a >= 3) {
            r = 1;
        }
        r = r * 3 + func_0202c120(l.b);
        _ZN12Unk_020d771413func_0201578cEjjj(this, &l.h, 0, 7);
        if (l.c >= 3) {
            l.c--;
        }
        l.buf[0] = l.c;
        l.buf[1] = 0;
        _ZN12Unk_020d771413func_0201577cEjjj(this, 3, l.buf, ((u8 *)"st_insect_time"), &l.buf[1]);
        func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), data_020c7740.unk_00, data_020c7740.unk_04, r, 0);
        r = 1;
    }
    return r;
}
}

namespace F11 {
void Unk_0201d2d0::func_020228b0(s32 a, u16 *p, s32 c, Unk_02022608_Ent **arr, s32 last) {
    Unk_02022608_Ent **pp = arr;
    s32 idx;
    s32 x = (u8)a;
    if (pp) {
        BOOL ok = FALSE;
        u16 v = *p;
        if (v >= 0x12e8 && v <= 0x131f) {
            ok = TRUE;
        }
        if (ok && c <= 1) {
            Unk_02022608_Ent *e;
            Unk_02022608_Rec *rec;
            s32 i, j, k;
            if (v >= 0x12e8 && v <= 0x131f) {
                idx = v - 0x12e8;
            } else {
                idx = -1;
            }
            i = 0;
            j = 0;
            k = 0;
            for (; i < 3; pp++, i++) {
                e = *pp;
                if (e) {
                    for (j = 0; j < 2; e++, j++) {
                        rec = e->unk_00;
                        if (rec) {
                            for (k = 0; k < e->unk_04; rec++, k++) {
                                if (rec->unk_00 == idx && func_0209948c(rec->unk_02) <= 1) {
                                    break;
                                }
                            }
                            if (e->unk_04 < k) {
                                break;
                            }
                        }
                    }
                    if (j == 2) {
                        break;
                    }
                }
            }
            if (i == 3) {
                x = 3;
            }
        }
    }
    u8 buf[2];
    buf[0] = x;
    buf[1] = 0;
    _ZN12Unk_020d771413func_0201577cEjjj(this, last, buf, ((u8 *)"st_fish_time"), &buf[1]);
}
}

namespace F11 {
extern "C" s32 func_02022880(s32 v) {
    s32 r = 0;
    switch (v) {
    case 0:
    case 2:
    case 4:
        r = 0;
        break;
    case 5:
    case 6:
        r = 1;
        break;
    case 1:
    case 3:
        r = 2;
        break;
    }
    return r;
}
}

namespace F11 {
s32 Unk_0201d2d0::func_020227ac() {
    struct {
        u16 unk_00;
        u16 pad_02;
        u32 unk_04;
        u32 unk_08;
        s32 a, b, c;
    } l;
    s32 r;
    void *q;
    r = 0;
    l.unk_04 = 0;
    l.unk_08 = 0;
    l.a = 5;
    l.unk_00 = 0xfff1;
    l.b = 0;
    l.c = 0;
    func_0209d498(&l.unk_04);
    u32 x = ((u8 *)&l)[8];
    q = func_0204f0f4(((u8 *)&l)[7]);
    q = func_0204f234(x, q);
    if (q && func_0202c2d0(&l, &l.a, &l.b, &l.c, q) == 1) {
        r = (l.a >= 3 ? 1 : r) * 3 + func_02022880(l.b);
        _ZN12Unk_020d771413func_0201578cEjjj(this, &l, 0, 7);
        F11::_ZN12Unk_0201d2d013func_020228b0EiPtiPP16Unk_02022608_Enti(this, l.c, &l.unk_00, l.a, *(Unk_02022608_Ent ***)q, 1);
        func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), data_020c75f0.unk_00, data_020c75f0.unk_04, r, 0);
        r = 1;
    }
    return r;
}
}

namespace F11 {
BOOL Unk_0201d2d0::func_02022758() {
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), data_020c7990.unk_00, data_020c7990.unk_04, 0, 0);
    return TRUE;
}
}

namespace F11 {
BOOL Unk_0201d2d0::func_02022704() {
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), data_020c7980.unk_00, data_020c7980.unk_04, 0, 0);
    return TRUE;
}
}

namespace F11 {
BOOL Unk_0201d2d0::func_020226b0() {
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), data_020c7728.unk_00, data_020c7728.unk_04, 0, 0);
    return TRUE;
}
}

namespace F11 {
BOOL Unk_0201d2d0::func_0202265c() {
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), data_020c75e0.unk_00, data_020c75e0.unk_04, 0, 0);
    return TRUE;
}
}

namespace F11 {
BOOL Unk_0201d2d0::func_02022608() {
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), data_020c75d8.unk_00, data_020c75d8.unk_04, 0, 0);
    return TRUE;
}
}

namespace F10 {
BOOL Unk_0201d2d0::func_020225b4() {
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), data_020c7940.unk_00, data_020c7940.unk_04, 0, 0);
    return TRUE;
}
}

namespace F10 {
BOOL Unk_0201d2d0::func_020224b8() {
    static BOOL (Unk_0201d2d0::*tbl[8])() = {
        (*(BOOL (Unk_0201d2d0::**)())nZ::data_020d7f50), (*(BOOL (Unk_0201d2d0::**)())nZ::data_020d7f40), (*(BOOL (Unk_0201d2d0::**)())nZ::data_020d7f30),
        (*(BOOL (Unk_0201d2d0::**)())nZ::data_020d7f28), (*(BOOL (Unk_0201d2d0::**)())nZ::data_020d7f20), (*(BOOL (Unk_0201d2d0::**)())nZ::data_020d7f08),
        (*(BOOL (Unk_0201d2d0::**)())nZ::data_020d7ef8), (*(BOOL (Unk_0201d2d0::**)())nZ::data_020d7ef0)};
    s32 idx = 8;
    if (Unk_02021ef8_IsZero(data_020e416c)) {
        if (unk_fc->unk_82c != 0) {
            idx = _ZN12Unk_0209b3bc13func_0209b354Ev(func_0209a610(func_0207e268(unk_fc->unk_82c)));
        }
    }
    if (func_0209b3b0(idx) != 0) {
        return (this->*tbl[idx])();
    }
    return FALSE;
}
}

namespace nZ {
extern "C" {
const void *const data_020c75a0[2] = {
    (void *)data_020d81b0, (void *)0x6,
};
Unk_021be8c0 data_021be650[1];
void * data_020d7ab8[2] = {
    (void *)_ZN12Unk_02027a3413func_02028058EP16Unk_02027a34_Outj, 0,
};
const void *const data_020c7a18[2] = {
    (void *)data_020d8028, (void *)0x3,
};
const void *const data_020c7598[2] = {
    (void *)data_020d79a8, (void *)0x2,
};
const void *const data_020c7580[2] = {
    (void *)data_020d82b8, (void *)0x3,
};
void * data_020d7958[2] = {
    (void *)_ZN12Unk_0201d2d013func_0201d344Ev, 0,
};
const void *const data_020c7588[2] = {
    (void *)data_020d7a00, (void *)0x3,
};
void * data_020d7968[2] = {
    (void *)_ZN12Unk_0201e5a413func_0201e9d0Ev, 0,
};
const void *const data_020c7570[2] = {
    (void *)data_020d78e8, (void *)0x3,
};
void * data_020d7948[2] = {
    (void *)_ZN12Unk_0201d2d013func_02027324Ev, 0,
};
char data_020d82d0[10] = "tsu_drama";
char data_020d8754[13] = "q01_req2_4_5";
char data_020d8684[12] = "tsu_cl_hint";
char data_020d8480[11] = "tsu_event2";
char data_020d809c[9] = "q_error3";
void * data_020d7918[2] = {
    (void *)_ZN12Unk_0201d2d013func_0202af68Ev, 0,
};
char data_020d82dc[10] = "q06_open1";
void * data_020d7c50[2] = {
    (void *)_ZN12Unk_020d893813func_0201d184Ev, 0,
};
u32 data_020d8690[3] = {
    0x00000017, 0x00000018, 0x00000019,
};
const void *const data_020c75f0[2] = {
    (void *)data_020d866c, (void *)0x1,
};
void * data_020d88c0[7] = {
    (void *)data_020d7f00, (void *)data_020d7f00, (void *)data_020d7f00, (void *)data_020d7f00,
    (void *)data_020d7f00, (void *)data_020d7f00, (void *)data_020d7f00,
};
char data_020d80b4[9] = "tsu_star";
const void *const data_020c7540[2] = {
    (void *)data_020d78d8, (void *)0x5,
};
u32 data_021be60c[2];
static const char *const lit_020d785c = "";
void * data_020d87d8[5] = {
    (void *)data_020d80fc, (void *)data_020d8764, (void *)data_020d8108, (void *)data_020d8764,
    (void *)data_020d8764,
};
char data_020d7978[8] = "ai_boom";
char data_020d8028[8] = "q06_get";
char data_020d848c[11] = "q07_scold2";
char data_020d80c0[9] = "q07_read";
void * data_020d7c28[2] = {
    (void *)_ZN12Unk_02027a3413func_02027d5cEv, 0,
};
void * data_020d8010[2] = {
    (void *)_ZN12Unk_0201d2d013func_020231b4Ev, 0,
};
void * data_020d8008[2] = {
    (void *)_ZN17Unk_0202ce90_Base13func_0202ce90Ev, 0,
};
char data_020d8498[11] = "q_timeover";
char data_020d7870[5] = "q_no";
const void *const data_020c7b34[6] = {
    (void *)data_020d8180, (void *)0x3, (void *)data_020d8384, (void *)0x3,
    (void *)data_020d8390, (void *)0x6,
};
void * data_020d8000[2] = {
    (void *)_ZN12Unk_02027a3413func_020281d8EPv, 0,
};
char data_020d84a4[11] = "etc_cancel";
char data_020d84b0[11] = "q06_report";
u8 data_021be630[14];
const void *const data_020c79e8[2] = {
    (void *)data_020d7ff8, (void *)0x3,
};
const void *const data_020c79e0[2] = {
    (void *)data_020d8300, (void *)0x3,
};
char data_020d86b4[12] = "tsu_se_hint";
void * data_020d87ec[5] = {
    (void *)data_020d84e0, (void *)data_020d84e0, (void *)data_020d8114, (void *)data_020d84ec,
    (void *)data_020d84ec,
};
char data_020d82e8[10] = "q06_open3";
char data_020d80e4[9] = "q01_req1";
void * data_020d7c00[2] = {
    (void *)_ZN12Unk_0201d2d013func_02020ea4EPhPiS0_Pj, 0,
};
const void *const data_020c79c8[2] = {
    (void *)data_020d80cc, (void *)0x3,
};
char data_020d8300[10] = "q07_open2";
Unk_021be8c0 data_021be8c0[4];
void * data_020d7fd0[2] = {
    (void *)_ZN12Unk_02027a3413func_02028058EP16Unk_02027a34_Outj, 0,
};
void * data_020d7fc8[2] = {
    (void *)_ZN12Unk_0201d2d013func_02026bd0Ev, 0,
};
const void *const data_020c79c0[2] = {
    (void *)data_020d7fc0, (void *)0x3,
};
const s8 data_020c7510[5] = {
    -1, 5, 2, 5, 5,
};
char data_020d7fb8[8] = "q07_fin";
char data_020d7fb0[8] = "q06_con";
char data_020d80f0[9] = "q01_req3";
char data_020d84bc[11] = "q07_report";
void * data_020d7bd0[2] = {
    (void *)_ZN12Unk_020d893813func_0201cde0Ev, 0,
};
const void *const data_020c79b8[2] = {
    (void *)data_020d7fb8, (void *)0x3,
};
void * data_020d7f90[2] = {
    (void *)_ZN12Unk_0201d2d013func_02021ea4Ev, 0,
};
char data_020d7f88[8] = "q06_bad";
char data_020d84c8[11] = "q06_normal";
void * data_020d7f80[2] = {
    (void *)_ZN12Unk_0201d2d013func_02021d50Ev, 0,
};
char data_020d84d4[11] = "ev_snowfes";
const void *const data_020c79a0[2] = {
    (void *)data_020d7bb0, (void *)0x3,
};
const void *const data_020c7998[2] = {
    (void *)data_020d84b0, (void *)0x3,
};
char data_020d8114[9] = "q03_req3";
char data_020d7bb0[8] = "q07_con";
char data_020d8764[13] = "q02_req2_4_5";
const void *const data_020c7988[2] = {
    (void *)data_020d84bc, (void *)0x3,
};
const void *const data_020c7980[2] = {
    (void *)data_020d8684, (void *)0x3,
};
char data_020d812c[9] = "q01_con3";
char data_020d8324[10] = "tsu_move1";
char data_020d84e0[11] = "q03_req1_2";
void * data_020d7f60[2] = {
    (void *)_ZN12Unk_02027a3413func_02028058EP16Unk_02027a34_Outj, 0,
};
const void *const data_020c7968[2] = {
    (void *)data_020d7f88, (void *)0x3,
};
const void *const data_020c7960[2] = {
    (void *)data_020d78d0, (void *)0x3,
};
u32 data_021be6a0[8];
void * data_020d88dc[7] = {
    (void *)data_020d8564, (void *)data_020d8564, (void *)data_020d8570, (void *)data_020d8570,
    (void *)data_020d8570, (void *)data_020d8570, (void *)data_020d8570,
};
char data_020d8510[11] = "tsu_in_act";
void * data_020d7f48[2] = {
    (void *)_ZN12Unk_0202134013func_020219ccEv, 0,
};
void * data_020d7b88[2] = {
    (void *)_ZN12Unk_0201d2d013func_02021ce4Ev, 0,
};
void * data_020d7f38[2] = {
    (void *)_ZN12Unk_020d893813func_0201ce84Ev, 0,
};
char data_020d7b80[8] = "q07_end";
Unk_021be8c0 data_021be7e0[3];
const void *const data_020c7950[2] = {
    (void *)data_020d821c, (void *)0x6,
};
void * data_020d7f20[2] = {
    (void *)_ZN12Unk_0201d2d013func_020226b0Ev, 0,
};
const void *const data_020c7708[2] = {
    (void *)data_020d8510, (void *)0x4,
};
const void *const data_020c7940[2] = {
    (void *)data_020d86c0, (void *)0x3,
};
void * data_020d7b78[2] = {
    (void *)_ZN12Unk_0202134013func_02021b6cEv, 0,
};
void * data_020d7f18[2] = {
    (void *)_ZN12Unk_02027a3413func_02028058EP16Unk_02027a34_Outj, 0,
};
const void *const data_020c7930[2] = {
    (void *)data_020d84d4, (void *)0x3,
};
char data_020d8168[9] = "q01_pwin";
char data_020d851c[11] = "tsu_fi_act";
void * data_020d7f08[2] = {
    (void *)_ZN12Unk_0201d2d013func_0202265cEv, 0,
};
char data_020d7f00[8] = "q05_req";
char data_020d8174[9] = "q02_pwin";
char data_020d8528[11] = "tsu_fo_act";
void * data_020d7ef0[2] = {
    (void *)_ZN12Unk_0201d2d013func_020225b4Ev, 0,
};
char data_020d8180[9] = "ai_first";
void * data_020d7ee0[2] = {
    (void *)_ZN12Unk_0201d2d013func_02022168Ev, 0,
};
void * data_020d7ed8[2] = {
    (void *)_ZN12Unk_02027a3413func_02028058EP16Unk_02027a34_Outj, 0,
};
const void *const data_020c7918[2] = {
    (void *)data_020d7870, (void *)0x3,
};
const void *const data_020c7910[2] = {
    (void *)data_020d851c, (void *)0x4,
};
void * data_020d7ed0[2] = {
    (void *)_ZN12Unk_02027a3413func_02028058EP16Unk_02027a34_Outj, 0,
};
char data_020d8348[10] = "q01_plose";
void * data_020d7ec0[2] = {
    (void *)_ZN12Unk_02027a3413func_02028058EP16Unk_02027a34_Outj, 0,
};
char data_020d8354[10] = "q02_plose";
char data_020d7eb8[8] = "q_start";
void * data_020d7eb0[2] = {
    (void *)_ZN12Unk_020254ec13func_020255fcEv, 0,
};
void * data_020d7ea8[2] = {
    (void *)_ZN12Unk_0201d2d013func_02020cc4Ev, 0,
};
void * data_020d7ea0[2] = {
    (void *)_ZN12Unk_0201d2d013func_02020b38Ev, 0,
};
void * data_020d7e98[2] = {
    (void *)_ZN12Unk_02027a3413func_02028058EP16Unk_02027a34_Outj, 0,
};
char data_020d86d8[12] = "q05_talk3_5";
u8 data_020d7868[3] = {
    0x0a, 0x1e, 0x3c,
};
const void *const data_020c7908[2] = {
    (void *)data_020d818c, (void *)0x3,
};
void * data_020d7e80[2] = {
    (void *)_ZN12Unk_0201c07813func_0201c474EP12Unk_020d8938, 0,
};
const void *const data_020c7900[2] = {
    (void *)data_020d8528, (void *)0x4,
};
char data_020d87a4[14] = "ev_gardeniing";
void * data_020d88f8[7] = {
    (void *)data_020d7e60, (void *)data_020d7e60, (void *)data_020d7e60, (void *)data_020d7e60,
    (void *)data_020d7e60, (void *)data_020d7e60, (void *)data_020d7e60,
};
const void *const data_020c78e8[2] = {
    (void *)data_020d8150, (void *)0x1,
};
const void *const data_020c78e0[2] = {
    (void *)data_020d83d8, (void *)0x6,
};
const void *const data_020c78d8[2] = {
    (void *)data_020d86fc, (void *)0x3,
};
const void *const data_020c78d0[2] = {
    (void *)data_020d8588, (void *)0x4,
};
const void *const data_020c78c8[2] = {
    (void *)data_020d85ac, (void *)0x6,
};
u32 data_020d7e78[2] = {
    0x00000000, 0x00000003,
};
char data_020d836c[10] = "q01_pdraw";
void * data_020d7e70[2] = {
    (void *)_ZN12Unk_0202134013func_020213b0EPPvi, 0,
};
const void *const data_020c78b8[2] = {
    (void *)data_020d8174, (void *)0x2,
};
const u8 data_020c750c[4] = {
    0x03, 0x00, 0x02, 0x01,
};
const void *const data_020c78b0[2] = {
    (void *)data_020d842c, (void *)0x2,
};
char data_020d81b0[9] = "ai_7days";
char data_020d854c[11] = "q03_con4_5";
char data_020d78b8[7] = "q_time";
char data_020d86e4[12] = "q05_talk6_7";
void * data_020d7e58[2] = {
    (void *)_ZN12Unk_0202134013func_020213f0EPPvi, 0,
};
char data_020d81c8[9] = "ai_shop2";
char data_020d7b18[8] = "ai_flea";
char data_020d8570[11] = "q04_con3_7";
Unk_021be8c0 data_021be920[4];
char data_020d86f0[12] = "ai_password";
void * data_020d7e30[2] = {
    (void *)_ZN12Unk_0201d2d013func_0202536cEv, 0,
};
const void *const data_020c76a0[2] = {
    (void *)data_020d8168, (void *)0x2,
};
const void *const data_020c7888[2] = {
    (void *)data_020d83b4, (void *)0x1,
};
char data_020d857c[11] = "tsu_fl_act";
void * data_020d7b90[2] = {
    (void *)_ZN12Unk_020d893813func_0201cf74Ev, 0,
};
const void *const data_020c7880[2] = {
    (void *)data_020d85b8, (void *)0x14,
};
char data_020d815c[9] = "q03_con3";
const void *const data_020c7558[2] = {
    (void *)data_020d848c, (void *)0x3,
};
char data_020d85a0[11] = "ev_karaoke";
const u32 data_020c7b68[8] = {
    0x00000002, 0x00000000, 0x00000005, 0x0000001d, 0x00000006, 0x0000001d, 0x00000008, 0x0000001d,
};
void * data_020d7c60[2] = {
    (void *)_ZN12Unk_0201d2d013func_02029c74Eii, 0,
};
const u8 data_020c7a50[12] = {
    0x71, 0x30, 0x34, 0x5f, 0x63, 0x6c, 0x65, 0x61, 0x72, 0x00, 0x00, 0x00,
};
char data_020d7898[6] = "3p_bo";
char data_020d7de8[8] = "etc_hit";
}
}

namespace F10 {
void Unk_0201d2d0::func_02022448(s32 r1, Unk_0201d2d0_Data *d) {
    s32 r6 = r1 != _ZN12Unk_0209b3bc13func_0209b354Ev(func_0209a610(func_0207e268(unk_fc->unk_82c))) ? 1 : 0;
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), d->unk_00, d->unk_04, r6, 0);
}
}

namespace F10 {
BOOL Unk_0201d2d0::func_0202235c() {
    s32 r4 = -1;
    u16 h[2];
    func_0202d864(&h[1], unk_fc);
    if (Unk_02021d50_R(&h[1], 0x1376, 0x1376)) {
        r4 = 0;
        if (_ZN12Unk_0209b3bc13func_0209b354Ev(func_0209a610(func_0207e268(unk_fc->unk_82c))) != 0) {
            r4 = 2;
        }
    }
    if (r4 != -1) {
        h[0] = 0xfff1;
        func_0202c708(&h[0]);
        if (Unk_02021d50_R(&h[0], 0x12b0, 0x12e7)) {
            _ZN12Unk_020d771413func_0201578cEjjj(this, &h[0], 0, 7);
            func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), data_020c7708.unk_00, data_020c7708.unk_04, r4, 0);
            return TRUE;
        }
    }
    return FALSE;
}
}

namespace F10 {
BOOL Unk_0201d2d0::func_02022270() {
    s32 r4 = -1;
    u16 h[2];
    func_0202d864(&h[1], unk_fc);
    if (Unk_02021d50_R(&h[1], 0x1374, 0x1374)) {
        r4 = 0;
        if (_ZN12Unk_0209b3bc13func_0209b354Ev(func_0209a610(func_0207e268(unk_fc->unk_82c))) != 1) {
            r4 = 1;
        }
    }
    if (r4 != -1) {
        h[0] = 0xfff1;
        func_0202c224(&h[0]);
        if (Unk_02021d50_R(&h[0], 0x12e8, 0x131f)) {
            _ZN12Unk_020d771413func_0201578cEjjj(this, &h[0], 0, 7);
            func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), data_020c7910.unk_00, data_020c7910.unk_04, r4, 0);
            return TRUE;
        }
    }
    return FALSE;
}
}

namespace F10 {
BOOL Unk_0201d2d0::func_02022224() {
    u16 h[4];
    func_0202d864(h, unk_fc);
    if (Unk_02021d50_R(h, 0x1369, 0x1369)) {
        func_02022448(2, &data_020c7900);
        return TRUE;
    }
    return FALSE;
}
}

namespace F10 {
BOOL Unk_0201d2d0::func_020221bc() {
    u16 h;
    func_0202d864(&h, unk_fc);
    volatile u16 *p = &h;
    u32 a = *p;
    u32 b = *p;
    if (b == 0xfff1 || (a >= 0x1380 && a <= 0x139f)) {
        func_02022448(3, &data_020c78f8);
        _ZN12Unk_0201d2d013func_0202b4acEjPv(this, 5, unk_fc->unk_82c);
        return TRUE;
    }
    return FALSE;
}
}

namespace F10 {
BOOL Unk_0201d2d0::func_02022168() {
    u16 h;
    func_0202d864(&h, unk_fc);
    volatile u16 *p = &h;
    u32 a = *p;
    u32 b = *p;
    if (b == 0xfff1 || (a >= 0x1380 && a <= 0x139f)) {
        func_02022448(4, &data_020c7630);
        return TRUE;
    }
    return FALSE;
}
}

namespace F10 {
BOOL Unk_0201d2d0::func_020220c0() {
    s32 r4 = -1;
    u16 h;
    func_0202d864(&h, unk_fc);
    if (Unk_02021d50_R(&h, 0x1378, 0x1378)) {
        r4 = 0;
        if (_ZN12Unk_0209b3bc13func_0209b354Ev(func_0209a610(func_0207e268(unk_fc->unk_82c))) != 5) {
            r4 = 2;
        }
    }
    if (r4 != -1) {
        func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), data_020c76c8.unk_00, data_020c76c8.unk_04, r4, 0);
        return TRUE;
    }
    return FALSE;
}
}

namespace F10 {
BOOL Unk_0201d2d0::func_0202203c() {
    u16 h;
    void *r5 = data_021c47c4;
    BOOL r4;
    func_0202d864(&h, unk_fc);
    r4 = FALSE;
    if (r5 != 0) {
        Unk_0201d2d0_Vec *v = &unk_fc->unk_5c;
        s32 px = v->x >> 17;
        s32 pz = v->z >> 17;
        if (func_0204ec14(r5 ? r5 : r5, px, pz, 8) != 0) {
            r4 = TRUE;
        }
    }
    if (r4 != 0) {
        volatile u16 *p = &h;
    u32 a = *p;
    u32 b = *p;
    if (b == 0xfff1 || (a >= 0x1380 && a <= 0x139f)) {
            func_02022448(6, &data_020c78d0);
            return TRUE;
        }
    }
    return FALSE;
}
}

namespace F10 {
BOOL Unk_0201d2d0::func_02021fe8() {
    u16 h;
    func_0202d864(&h, unk_fc);
    volatile u16 *p = &h;
    u32 a = *p;
    u32 b = *p;
    if (b == 0xfff1 || (a >= 0x1380 && a <= 0x139f)) {
        func_02022448(7, &data_020c76b8);
        return TRUE;
    }
    return FALSE;
}
}

namespace F10 {
BOOL Unk_0201d2d0::func_02021ef8() {
    static BOOL (Unk_0201d2d0::*tbl[8])() = {
        (*(BOOL (Unk_0201d2d0::**)())nZ::data_020d7e18), (*(BOOL (Unk_0201d2d0::**)())nZ::data_020d7af8), (*(BOOL (Unk_0201d2d0::**)())nZ::data_020d7e20),
        (*(BOOL (Unk_0201d2d0::**)())nZ::data_020d7e00), (*(BOOL (Unk_0201d2d0::**)())nZ::data_020d7ee0), (*(BOOL (Unk_0201d2d0::**)())nZ::data_020d7b58),
        (*(BOOL (Unk_0201d2d0::**)())nZ::data_020d7c08), (*(BOOL (Unk_0201d2d0::**)())nZ::data_020d7dd8)};
    s32 idx;
    if (Unk_02021ef8_IsZero(data_020e416c)) {
        idx = func_02078574(func_0207e310(unk_fc->unk_82c));
        if (func_0209b3b0(idx) != 0) {
            return (this->*tbl[idx])();
        }
    }
    return FALSE;
}
}

namespace nZ {
extern "C" {
const void *const data_020c7658[2] = {
    (void *)data_020d8474, (void *)0x3,
};
const void *const data_020c7860[2] = {
    (void *)data_020d81c8, (void *)0x4,
};
const void *const data_020c7a00[2] = {
    (void *)data_020d8744, (void *)0x3,
};
void * data_020d7ad8[2] = {
    (void *)_ZN12Unk_02027a3413func_02028058EP16Unk_02027a34_Outj, 0,
};
char data_020d78b0[7] = "q_full";
char data_020d7db8[8] = "q04_end";
const void *const data_020c7858[2] = {
    (void *)data_020d8600, (void *)0x1,
};
const void *const data_020c7898[2] = {
    (void *)data_020d82a0, (void *)0x3,
};
const void *const data_020c7670[2] = {
    (void *)data_020d85a0, (void *)0x3,
};
const u8 data_020c7504[4] = {
    0x07, 0x0d, 0x01, 0x02,
};
char data_020d7d88[8] = "q03_end";
char data_020d83c0[10] = "q01_nlose";
void * data_020d7e88[2] = {
    (void *)_ZN12Unk_0201d2d013func_02024254Ev, 0,
};
u32 data_021be6c0[8];
void * data_020d7990[2] = {
    (void *)_ZN12Unk_0201d2d013func_0201d3ecEv, 0,
};
const void *const data_020c7690[2] = {
    (void *)data_020d83c0, (void *)0x3,
};
char data_020d821c[9] = "ai_snow2";
const u8 data_020c7530[6] = {
    0x00, 0x01, 0x02, 0x03, 0x04, 0x05,
};
void * data_020d883c[5] = {
    (void *)data_020d8540, (void *)data_020d8540, (void *)data_020d815c, (void *)data_020d854c,
    (void *)data_020d854c,
};
char data_020d8234[9] = "ap_habit";
const void *const data_020c77e0[2] = {
    (void *)data_020d78b8, (void *)0x1,
};
void * data_020d7d50[2] = {
    (void *)_ZN12Unk_020d893813func_0201ccacEv, 0,
};
const void *const data_020c7620[2] = {
    (void *)data_020d8468, (void *)0x2,
};
char data_020d8240[9] = "ap_nickn";
void * data_020d8850[5] = {
    (void *)data_020d8814, (void *)data_020d8828, (void *)data_020d883c, (void *)data_020d88dc,
    (void *)data_020d88f8,
};
const void *const data_020c7830[2] = {
    (void *)data_020d85c4, (void *)0x3,
};
const void *const data_020c7800[2] = {
    (void *)data_020d7880, (void *)0x3,
};
char data_020d8708[12] = "q02_revenge";
const void *const data_020c7af4[5] = {
    (void *)func_02025afc, (void *)func_02025afc, (void *)func_020259f8, 0,
    0,
};
const void *const data_020c7820[2] = {
    (void *)data_020d8318, (void *)0x3,
};
void * data_020d7d30[2] = {
    (void *)_ZN12Unk_020d893813func_0201cec0Ev, 0,
};
u8 data_020d85f4[11] = "q05_thanks";
const u32 data_020c7b08[5] = {
    0x0000000d, 0x0000000e, 0x00000039, 0x00000005, 0x00000038,
};
char data_020d7888[6] = "3p_fu";
char data_020d8408[10] = "ai_today2";
const void *const data_020c7a10[2] = {
    (void *)data_020d8020, (void *)0x3,
};
char data_020d8794[13] = "q02_con2_4_5";
char data_020d8264[9] = "q01_comp";
void * data_020d7ba8[2] = {
    (void *)_ZN12Unk_0201d2d013func_0202475cEv, 0,
};
void * data_020d7a20[2] = {
    (void *)_ZN12Unk_020d893813func_0201cd14Ev, 0,
};
void * data_020d7e08[2] = {
    (void *)_ZN12Unk_0201c07813func_0201c3fcEP12Unk_020d8938, 0,
};
char data_020d8618[11] = "q02_return";
u32 data_020d7ca8[2] = {
    0xffffffff, 0xffffffff,
};
const void *const data_020c78a0[2] = {
    (void *)data_020d836c, (void *)0x2,
};
void * data_020d7d20[2] = {
    (void *)_ZN12Unk_0201d2d013func_0201d88cEv, 0,
};
char data_020d7dc0[8] = "q05_end";
}
}

namespace F10 {
BOOL Unk_0201d2d0::func_02021ea4() {
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), data_020c7840.unk_00, data_020c7840.unk_04, 0, 0);
    return TRUE;
}
}

namespace F10 {
BOOL Unk_0201d2d0::func_02021d50() {
    void *r7 = unk_fc->unk_82c;
    volatile u16 h = *(u16 *)_ZN12Unk_0207fb8013func_0207fd9cEv(r7);
    s32 r4 = -1;
    u16 *r5;
    s32 t;
    u16 *q;
    if (func_0209750c() != 0) {
        r5 = (u16 *)_ZN12Unk_0209865c13func_0209888cEv(func_0209750c());
    } else {
        r5 = 0;
    }
    if (r5 != 0) {
        if (Unk_02021d50_R((u16 *)&h, 0x12a8, 0x12af)) {
            t = _ZN12Unk_0208086013func_020805b8Ev(r7);
            q = _ZN12Unk_02071ed013func_02071fa0Ev(_ZN12Unk_02071e0413func_02071e04Ev(t));
            if (r5[0] == q[0] && func_02128930(r5 + 1, q + 1, 8) == 0 && _ZN12Unk_020940a013func_020941e8EPS_(r5, q) != 0) {
                r4 = 1;
            } else if (_ZN12Unk_020940a013func_020941e8EPS_(r5, q) == 0) {
                Unk_02021d50_Id *p = (Unk_02021d50_Id *)data_021d7352;
                Unk_02021d50_Id *w = (Unk_02021d50_Id *)func_0209409c(q);
                if (w->id == p->id && func_02128930(w->name, p->name, 8) == 0) {
                    r4 = 2;
                } else {
                    r4 = 3;
                }
            }
            if (r4 != -1) {
                _ZN12Unk_020d771413func_020157e8Ejj(this, _ZN12Unk_02071ed013func_02071fa0Ev(_ZN12Unk_02071e0413func_02071e04Ev(t)), 0);
                _ZN12Unk_020d771413func_02015818Ejj(this, func_0209409c(_ZN12Unk_02071ed013func_02071fa0Ev(_ZN12Unk_02071e0413func_02071e04Ev(t))), 1);
            }
        } else {
            r4 = 0;
        }
    }
    if (r4 != -1) {
        func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), data_020c7888.unk_00, data_020c7888.unk_04, r4, 0);
        return TRUE;
    }
    return FALSE;
}
}

namespace F10 {
BOOL Unk_0201d2d0::func_02021ce4() {
    s32 i;
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), data_020c7880.unk_00, data_020c7880.unk_04, 0, 0);
    for (i = 0; i < 6; i++) {
        _ZN12Unk_0201d2d013func_0202b4e8Ejj(this, i, data_020c7530[i]);
    }
    return TRUE;
}
}

namespace F09 {
BOOL Unk_02021340::func_02021b6c() {
    Unk_02021340_Pad *p;
    void *ctx = unk_fc->unk_82c;
    if (ctx != NULL) {
        p = func_0207e310(ctx);
    } else {
        p = NULL;
    }
    u8 mask = 0;
    u8 cnt = 0;
    if (p != NULL && p->unk_20 >= 0) {
        s32 h = p->unk_20;
        u32 v = p->unk_24;
        if ((v & 1) != 0 || (v & 2) != 0 || (v & 4) != 0 || (v & 8) != 0 || (v & 0x10) != 0) {
            mask |= 1;
            cnt++;
        }
        if ((v & 0x20) != 0) {
            mask |= 2;
            cnt++;
        }
        if ((v & 0x40) != 0) {
            mask |= 4;
            cnt++;
        }
        if ((v & 0x80) != 0) {
            mask |= 8;
            cnt++;
        }
        if ((v & 0x100) != 0) {
            mask |= 0x10;
            cnt++;
        }
        if ((v & 0x200) != 0) {
            mask |= 0x20;
            cnt++;
        }
        if ((v & 0x400) != 0) {
            mask |= 0x40;
            cnt++;
        }
        u32 k = func_0207bcfc(mask, cnt, 7);
        if (k >= 7) {
            k = 7;
        }
        func_0202d184(this, unk_100, unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), data_020c7878.a, data_020c7878.b, k, 0);
        func_02015958(h, 0, 6, 1, 0);
        return TRUE;
    }
    return FALSE;
}
}

namespace F09 {
BOOL Unk_02021340::func_020219cc() {
    s32 x, y;
    void **pa;
    char c[2];
    void *a[2];
    s32 j, i;
    s32 sel;
    func_02133ef8(a, 8);
    Unk_02021340_Pair2 b = data_020d7ca8;
    c[0] = data_020d7860[0];
    c[1] = data_020d7860[1];
    Unk_02002fc8 *d[2];
    func_02133ef8(d, 8);
    x = 0;
    y = 0;
    d[0] = _ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c);
    j = 1;
    for (i = 0; i < 2; i++) {
        pa = &a[i];
        a[i] = func_0207bd3c(data_021dfd8c, d, j);
        if (a[i] != NULL) {
            (&b.a)[i].v = func_0207bfb4(data_021dfd8c, _ZN12Unk_0208086013func_020805c4Ev(a[i]));
            c[i] = _ZN12Unk_0208086013func_020805c4Ev(a[i])->func_02003070();
        }
        if (j < 2) {
            if (*pa != NULL) {
                d[j] = _ZN12Unk_0208086013func_020805c4Ev(*pa);
                j++;
            }
        }
    }
    {
    Unk_020e1c64 o;
    Unk_02021340_Pair2 e = data_020d7cb8;
    sel = c[1];
    if (sel == 0) {
        e.a.v = 1;
        e.b.v = 0;
    }
    for (i = 0; i < 2; i++) {
        o.func_020a7c3c();
        _ZN12Unk_0208086013func_020805c4Ev(a[(&e.a)[i].v])->func_02002fc8((u32)&o);
        _ZN12Unk_020660f813func_02067a3cEiPv(unk_3c, i + 7, &o);
    }
    }
    if (b.a.v != -1 && b.b.v != -1) {
        s32 r = func_0207ac2c(data_021dfd8c, b.a.v, b.b.v);
        if (r == 2) {
            x = 1;
        } else if (r > 2) {
            x = 2;
        }
        if (c[0] == sel) {
            if (c[0] == 0) {
                y = 1;
            } else {
                y = 2;
            }
        }
    }
    y *= 3;
    func_0202d184(this, unk_100, unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), data_020c7868.a, data_020c7868.b, x + y, 0);
    return TRUE;
}
}

namespace F09 {
BOOL Unk_02021340::func_020218c4() {
    s32 t = 4;
    Unk_02021340_Map *map = data_021c47c4;
    if (func_020b51a4() != 0) {
        s32 v = func_020b51d4();
        if (v == func_0207e334(unk_fc->unk_82c)) {
            t = 3;
            goto end;
        }
    }
    if (map != NULL) {
        BOOL z = data_020e416c[0] == 0 ? TRUE : FALSE;
        if (z) {
            Unk_02021340_Scene *sc = unk_fc;
            Unk_02021340_Pos *pp = &sc->pos;
            u32 y = pp->z >> 17;
            u32 x = pp->x >> 17;
            u8 *cell;
            if (x < map->w && y < map->h && map->cells != NULL) {
                cell = map->cells + (x + y * map->w) * 0x28;
            } else {
                cell = NULL;
            }
            if (cell != NULL) {
                if (func_020374b0(cell, 0x200) == 1) {
                    t = 0;
                } else if (func_020374b0(cell, 2) == 1) {
                    t = 1;
                } else if (func_020374b0(cell, 0x800) == 1) {
                    t = 2;
                }
            }
        }
    }
end:
    func_0202d184(this, unk_100, unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), data_020c7808.a, data_020c7808.b, t, 0);
    return TRUE;
}
}

namespace F09 {
BOOL Unk_02021340::func_02021848() {
    s32 t = 2;
    if (func_0209750c() != 0) {
        t = _ZN12Unk_0206395413func_02094058Ev(_ZN12Unk_0209865c13func_0209888cEv(func_0209750c()));
    }
    if (t >= 2) {
        t = 1;
    }
    t <<= 3;
    func_0202d184(this, unk_100, unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), *(u32 *)((u8 *)data_020c7a94 + t), *((u8 *)((u8 *)&nZ::data_020c7a94[1]) + t), 0, 0);
    return TRUE;
}
}

namespace F09 {
BOOL Unk_02021340::func_020217ac() {
    s32 t = func_0209750c();
    BOOL result = FALSE;
    if (t != 0) {
        if (_ZN12Unk_02097d1c13func_02097edcEv(_ZN12Unk_0209865c13func_02098750Ev()) != -1) {
            u16 v;
            func_0202cdf4(&v);
            unk_120 = v;
            if (unk_120 != 0xfff1) {
                func_0201578c((u32)&unk_120, result, 7);
                Unk_02002fc8 *o = _ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c);
                func_0202d184(this, unk_100, unk_11e, 30, func_02003098(o), data_020c7818.a, data_020c7818.b, result, result);
                result = TRUE;
            }
        }
    }
    return result;
}
}

namespace F09 {
extern "C" void *func_02021738(void *ctx, void **arr, s32 n, BOOL (*cb)(void *, void *)) {
    s32 count = 0;
    void *result = NULL;
    u8 flags[8];
    s32 i;
    func_02115fb4(flags, count, 8);
    for (i = count; i < n; i++) {
        if (arr[i] != NULL) {
            if (cb(ctx, arr[i]) == 1) {
                flags[i] = 1;
                count++;
            }
        }
    }
    if (count > 0) {
        s32 k = func_02063b8c(count);
        for (i = 0; i < n; i++) {
            if (flags[i] == 1) {
                if (k == 0) {
                    result = arr[i];
                    break;
                }
                k--;
            }
        }
    }
    return result;
}
}

namespace F09 {
extern "C" s32 func_020216f8(void *item) {
    s32 o[3];
    o[0] = 0;
    o[1] = 0;
    void *id = func_02080ec8(item);
    s32 r = 0;
    func_0209d498(o);
    if (func_0209d3d0(id, o, 0x3f) == -1) {
        r = func_0209d3a4(id, o);
    }
    return r;
}
}

namespace F09 {
extern "C" BOOL func_020216d4(void *ctx, void *item) {
    if (_ZN12Unk_0208091c13func_02080dd8Ev(item) > 0 && func_020216f8(item) > 0) {
        return TRUE;
    }
    return FALSE;
}
}

namespace F09 {
void *Unk_02021340::func_02021684(void **arr, s32 n) {
    void *res = func_02021738(unk_fc->unk_82c, arr, n, func_020216d4);
    if (res != NULL) {
        func_02015818((u32)func_02080e1c(res), 9);
        func_02015958(func_020216f8(res), 0, 10, 0, 0);
    }
    return res;
}
}

namespace F09 {
extern "C" BOOL func_02021660(void *ctx, void *item) {
    if (_ZN12Unk_0208091c13func_02080dd8Ev(item) <= 0 && func_020216f8(item) > 0) {
        return TRUE;
    }
    return FALSE;
}
}

namespace F09 {
void *Unk_02021340::func_02021610(void **arr, s32 n) {
    void *res = func_02021738(unk_fc->unk_82c, arr, n, func_02021660);
    if (res != NULL) {
        func_02015818((u32)func_02080e1c(res), 9);
        func_02015958(func_020216f8(res), 0, 10, 0, 0);
    }
    return res;
}
}

namespace F09 {
extern "C" s32 func_020215f8(void *ctx, void *item) {
    return _ZN12Unk_0207fb8013func_02080450EPt(ctx, func_02080e18(item));
}
}

namespace F09 {
extern "C" BOOL func_020215a8(void *ctx, void *item) {
    u16 *mine = (u16 *)((u8 *)ctx + 0x6f6);
    BOOL r = FALSE;
    if (_ZN12Unk_0207fb8013func_02080450EPt(ctx, func_02080e18(item)) != 0) {
        u16 *p = func_0209409c(func_02080e18(item));
        if (*p == *mine) {
            if (func_02128930(p + 1, mine + 1, 8) == 0) {
                r = TRUE;
            }
        }
    }
    return r;
}
}

namespace F09 {
void *Unk_02021340::func_02021564(void **arr, s32 n) {
    void *res = func_02021738(unk_fc->unk_82c, arr, n, func_020215a8);
    if (res != NULL) {
        func_02015818((u32)((u8 *)unk_fc->unk_82c + 0x6f6), 9);
    }
    return res;
}
}

namespace F09 {
extern "C" BOOL func_02021548(void *ctx, void *item) {
    if (_ZN12Unk_0208091c13func_02080cb8Ev(item) == 1) {
        return TRUE;
    }
    return FALSE;
}
}

namespace F09 {
void *Unk_02021340::func_020214ec(void **arr, s32 n) {
    void *res = func_02021738(unk_fc->unk_82c, arr, n, func_02021548);
    if (res != NULL) {
        Unk_020e05c0 o;
        _ZN12Unk_0208091c13func_02080c7cEPv(res, &o);
        _ZN12Unk_020660f813func_02067a3cEiPv(unk_3c, 1, &o);
        func_02015818((u32)func_02080e1c(res), 9);
    }
    return res;
}
}

namespace F09 {
extern "C" BOOL func_020214a8(void *ctx, void *item) {
    void *id = func_02080e18(item);
    BOOL r = FALSE;
    BOOL ok = FALSE;
    if (_ZN12Unk_0207fb8013func_02080450EPt(ctx, id) == 1) {
        ok = TRUE;
    }
    if (ok) {
        if (func_02097740(data_021d735c, id) != -1) {
            r = TRUE;
        }
    }
    return r;
}
}

namespace F09 {
void *Unk_02021340::func_02021448(void **arr, s32 n) {
    void *res = func_02021738(unk_fc->unk_82c, arr, n, func_020214a8);
    if (res != NULL) {
        void *a = _ZN12Unk_0208086013func_020805acEv(unk_fc->unk_82c);
        void *b = func_02065634();
        Unk_020639bc o;
        o.func_0206397c((u32)b);
        func_02015818((u32)&o, 9);
    }
    return res;
}
}

namespace F09 {
extern "C" BOOL func_0202142c(void *ctx, void *item) {
    if (_ZN12Unk_0208091c13func_02080b60Ev(item) == 1) {
        return TRUE;
    }
    return FALSE;
}
}

namespace F09 {
void *Unk_02021340::func_020213f0(void **arr, s32 n) {
    void *res = func_02021738(unk_fc->unk_82c, arr, n, func_0202142c);
    if (res != NULL) {
        func_02015818((u32)func_02080e1c(res), 9);
    }
    return res;
}
}

namespace F09 {
extern "C" BOOL func_020213ec(void *ctx, void *item) {
    return TRUE;
}
}

namespace F09 {
void *Unk_02021340::func_020213b0(void **arr, s32 n) {
    void *res = func_02021738(unk_fc->unk_82c, arr, n, func_020213ec);
    if (res != NULL) {
        func_02015818((u32)func_02080e1c(res), 9);
    }
    return res;
}
}

namespace F09 {
extern "C" BOOL func_0202138c(void *ctx, void *item) {
    if (*_ZN12Unk_0208091c13func_02080b74Ev(item) != 0xfff1) {
        return TRUE;
    }
    return FALSE;
}
}

namespace F09 {
void *Unk_02021340::func_02021340(void **arr, s32 n) {
    void *res = func_02021738(unk_fc->unk_82c, arr, n, func_0202138c);
    if (res != NULL) {
        func_02015818((u32)func_02080e1c(res), 9);
        func_0201578c((u32)_ZN12Unk_0208091c13func_02080b74Ev(res), 1, 7);
    }
    return res;
}
}

namespace F08 {
BOOL Unk_0201d2d0::func_02021048() {
    void *r14;
    void *p18;
    void *r4;
    s32 idx;
    s32 n2;
    s32 n1;
    s32 i;
    s32 j;
    s32 k;
    s32 rnd;
    u8 buf[2];
    u8 flags[5];
    u32 arr[8];
    u32 obj[7];
    if (_ZN12Unk_020cbb1813func_02072e88Ei(data_020cbb18, data_020cbb18->unk_64) != 0) {
        return FALSE;
    }
    static Unk_02021048_Fn tbl[10] = {
        (*(void * (Unk_0201d2d0::**)(u32 *a, s32 n))nZ::data_020d7d90), (*(void * (Unk_0201d2d0::**)(u32 *a, s32 n))nZ::data_020d7dc8), (*(void * (Unk_0201d2d0::**)(u32 *a, s32 n))nZ::data_020d7ce0),
        (*(void * (Unk_0201d2d0::**)(u32 *a, s32 n))nZ::data_020d7e10), (*(void * (Unk_0201d2d0::**)(u32 *a, s32 n))nZ::data_020d7e58), (*(void * (Unk_0201d2d0::**)(u32 *a, s32 n))nZ::data_020d7e70),
        (*(void * (Unk_0201d2d0::**)(u32 *a, s32 n))nZ::data_020d7a78), (*(void * (Unk_0201d2d0::**)(u32 *a, s32 n))nZ::data_020d7f58), (*(void * (Unk_0201d2d0::**)(u32 *a, s32 n))nZ::data_020d7f98),
        (*(void * (Unk_0201d2d0::**)(u32 *a, s32 n))nZ::data_020d7a40),
    };
    if (func_0209750c() != 0) {
        r14 = _ZN12Unk_0209865c13func_0209888cEv((void *)func_0209750c());
    } else {
        r14 = 0;
    }
    p18 = unk_fc->unk_82c;
    r4 = 0;
    idx = 0;
    if (r14 != 0) {
        for (i = 0; i < 8; i++) {
            arr[i] = 0;
        }
        n1 = func_0207f4a4(p18, arr, r14, 1);
        if (n1 > 0) {
            func_02115fb4(flags, 0, 5);
            for (k = 5; k > 0; k--) {
                rnd = func_02063b8c(k);
                for (j = 0; j < 5; j++) {
                    if (flags[j] == 0) {
                        if (rnd == 0) {
                            r4 = (this->*tbl[j])(arr, n1);
                            if (r4 != 0) {
                                idx = j + 1;
                            }
                            flags[j] = 1;
                            break;
                        }
                        rnd--;
                    }
                }
                if (r4 != 0) {
                    break;
                }
            }
        }
        if (r4 == 0) {
            for (i = 0; i < 8; i++) {
                arr[i] = 0;
            }
            n2 = func_0207f4a4(p18, arr, r14, 0);
            if (n2 > 0) {
                func_02115fb4(flags, 0, 5);
                for (k = 5; k > 0; k--) {
                    rnd = func_02063b8c(k);
                    for (j = 0; j < 5; j++) {
                        if (flags[j] == 0) {
                            if (rnd == 0) {
                                r4 = (this->*tbl[j + 5])(arr, n2);
                                if (r4 != 0) {
                                    idx = j + 6;
                                }
                                flags[j] = 1;
                                break;
                            }
                            rnd--;
                        }
                    }
                    if (r4 != 0) {
                        break;
                    }
                }
            }
        }
    }
    if (r4 != 0) {
        _ZN12Unk_020e1c64C1Ev(obj);
        buf[0] = _ZN12Unk_0208091c13func_02080b40Ev(r4);
        buf[1] = 0;
        _ZN12Unk_020d771413func_0201577cEjjj(this, 2, buf, ((u8 *)"st_impress"), &buf[1]);
        _ZN12Unk_020d771413func_020157e8Ejj(this, func_02080e18(r4), 10);
        _ZN12Unk_020e1c64D1Ev(obj);
    }
    unk_134 = r4;
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), data_020c7858.unk_00, data_020c7858.unk_04, idx, 0);
    unk_170 = data_020d7c50;
    unk_178 = data_020d7c48;
    return TRUE;
}
}

namespace nZ {
extern "C" {
const void *const data_020c77c0[2] = {
    (void *)data_020d845c, (void *)0x3,
};
const void *const data_020c7688[2] = {
    (void *)data_020d86f0, (void *)0x3,
};
char data_020d7d80[8] = "q02_end";
const void *const data_020c7b88[10] = {
    (void *)data_020d7d58, (void *)0x2, (void *)data_020d7d80, (void *)0x2,
    (void *)data_020d7d88, (void *)0x2, (void *)data_020d7db8, (void *)0x2,
    (void *)data_020d7dc0, (void *)0x2,
};
char data_020d8288[9] = "q05_comp";
void * data_020d79b8[2] = {
    (void *)_ZN12Unk_02027a3413func_02028058EP16Unk_02027a34_Outj, 0,
};
u32 data_020d7cb8[2] = {
    0x00000000, 0x00000001,
};
char data_020d8444[11] = "ev_fishing";
char data_020d78d8[7] = "ai_sad";
char data_020d8294[10] = "ev_arbeit";
char data_020d803c[9] = "q12_full";
char data_020d82a0[10] = "q12_other";
const u8 data_020c7a2c[9] = {
    0x71, 0x30, 0x35, 0x5f, 0x6d, 0x69, 0x73, 0x73, 0x00,
};
char data_020d78c0[7] = "ai_bee";
char data_020d8048[9] = "q06_over";
void * data_020d7cf0[2] = {
    (void *)_ZN12Unk_020d893813func_0201cc78Ev, 0,
};
void * data_020d7dc8[2] = {
    (void *)_ZN12Unk_0202134013func_02021610EPPvi, 0,
};
void * data_020d888c[6] = {
    (void *)data_020d7898, (void *)data_020d7890, (void *)data_020d7878, (void *)data_020d7888,
    (void *)data_020d78a8, (void *)data_020d78a0,
};
const u32 data_020c7be0[14] = {
    0x00000046, 0x00000047, 0x00000048, 0x00000049, 0x0000004a, 0x0000004b, 0x0000004c, 0x0000004d,
    0x0000004e, 0x0000004f, 0x00000050, 0x00000051, 0x00000052, 0x00000053,
};
void * data_020d7ce8[2] = {
    (void *)_ZN12Unk_0201d2d013func_02029a88Eii, 0,
};
char data_020d806c[9] = "q06_open";
char data_020d78a8[6] = "3p_ge";
void * data_020d87c4[5] = {
    (void *)data_020d80e4, (void *)data_020d8754, (void *)data_020d80f0, (void *)data_020d8754,
    (void *)data_020d8754,
};
char data_020d8474[11] = "q07_mailgo";
const void *const data_020c7780[2] = {
    (void *)data_020d8210, (void *)0x6,
};
void * data_020d79c8[2] = {
    (void *)_ZN12Unk_0201f7d013func_0201fb20Ev, 0,
};
char data_020d8078[9] = "q07_open";
const void *const data_020c75b8[2] = {
    (void *)data_020d8720, (void *)0x3,
};
const void *const data_020c7608[2] = {
    (void *)data_020d81a4, (void *)0x5,
};
char data_020d8084[9] = "q_error1";
void * data_020d7c68[2] = {
    (void *)_ZN12Unk_0201d2d013func_0201d344Ev, 0,
};
const void *const data_020c7760[2] = {
    (void *)data_020d82dc, (void *)0x3,
};
void * data_020d7930[2] = {
    (void *)_ZN12Unk_0201d2d013func_02027590Ev, 0,
};
void * data_020d7940[2] = {
    (void *)_ZN17Unk_0202ce90_Base13func_0202ce90Ev, 0,
};
}
}

namespace F08 {
u32 Unk_0201d2d0::func_02020f44(u8 *a, s32 *b, u8 *c, u32 *d) {
    u32 result = 0;
    u32 mask = 0;
    s32 count = 0;
    s32 i;
    u32 buf[2];
    s32 v;
    s32 r;
    for (i = 0; i < 14; i++) {
        func_02116048(d, buf, 8);
        if (func_0203f2e0(data_020c7be0[i], buf, result) != 0 ? TRUE : result) {
            mask = (u16)(mask | (1 << i));
            count++;
        }
    }
    if (count > 0) {
        r = func_0207bcfc(mask, count, 14);
        v = -1;
        if (r >= 5) {
            if (r <= 12) {
                s32 k = r - 5;
                if (k != func_0207e334(unk_fc->unk_82c)) {
                    void *p = func_0207bf60(data_021dfd8c, k);
                    if (p != 0 && _ZN12Unk_02002fc813func_020030b4Ev(_ZN12Unk_0208086013func_020805c4Ev(p)) != 0) {
                        u8 *e = (u8 *)func_0207fae4(p);
                        if (e != 0) {
                            v = 5;
                            _ZN12Unk_020d771413func_020157b8Ejj(this, (u32)_ZN12Unk_0208086013func_020805c4Ev(p), 0);
                            _ZN12Unk_020d771413func_02015878Ejj(this, e[0], 1);
                            _ZN12Unk_020d771413func_02015848Ejj(this, e[1], 2);
                        }
                    }
                }
            } else {
                v = 6;
            }
        } else {
            v = r;
        }
        if (v != -1) {
            *b = v;
            *a = data_020c7620.unk_04;
            *c = 0;
            result = data_020c7620.unk_00;
        }
    }
    return result;
}
}

namespace F08 {
u32 Unk_0201d2d0::func_02020ea4(u8 *a, s32 *b, u8 *c, u32 *d) {
    u32 result = 0;
    s32 idx = -1;
    s32 i;
    u32 buf[2];
    for (i = 0; i < 12; i++) {
        func_02116048(d, buf, 8);
        if (func_0203f2e0(data_020c7bb0[i], buf, result) != 0 ? TRUE : result) {
            idx = i;
            break;
        }
    }
    if ((u32)idx < 12) {
        if (idx % 3 == 2) {
            *b = (idx / 3 + 1) * 5 - 1;
            *c = 1;
        } else {
            *b = idx * 2 - idx / 3;
            *c = 2;
        }
        *a = 1;
        result = data_020c7618;
    }
    return result;
}
}

namespace F08 {
BOOL Unk_0201d2d0::func_02020d90() {
    static Unk_02020d90_Fn tbl[2] = {(*(u32 (Unk_0201d2d0::**)(u8 *a, s32 *b, u8 *c, u32 *d))nZ::data_020d7c18), (*(u32 (Unk_0201d2d0::**)(u8 *a, s32 *b, u8 *c, u32 *d))nZ::data_020d7c00)};
    Unk_02020d90_Res res[2];
    u32 t[2];
    s32 i;
    Unk_02020d90_Res *p;
    func_02133ef8(res, 0x18);
    p = 0;
    t[0] = 0;
    t[1] = 0;
    func_0209d498(t);
    for (i = 0; i < 2; i++) {
        res[i].unk_00 = (this->*tbl[i])(&res[i].unk_08, &res[i].unk_04, &res[i].unk_09, t);
    }
    if (res[0].unk_00 != 0) {
        if (res[1].unk_00 != 0 && func_02063b8c(2) == 0) {
            p = &res[1];
        } else {
            p = &res[0];
        }
    } else if (res[1].unk_00 != 0) {
        p = &res[1];
    }
    if (p != 0) {
        func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), p->unk_00, p->unk_08, p->unk_04, p->unk_09);
        return TRUE;
    }
    return FALSE;
}
}

namespace nZ {
extern "C" {
const void *const data_020c7628[2] = {
    (void *)data_020d8444, (void *)0x3,
};
char data_020d80a8[9] = "ev_acorn";
char data_020d869c[12] = "tsu_fu_hint";
char data_020d7c40[8] = "q06_req";
char data_020d7890[6] = "3p_ha";
char data_020d7c30[8] = "q12_end";
char data_020d8020[8] = "q07_joy";
void * data_020d7c20[2] = {
    (void *)_ZN12Unk_0201eea413func_0201f130Ev, 0,
};
void * data_020d7c18[2] = {
    (void *)_ZN12Unk_0201d2d013func_02020f44EPhPiS0_Pj, 0,
};
char data_020d86a8[12] = "tsu_fl_hint";
const void *const data_020c79f8[2] = {
    (void *)data_020d82e8, (void *)0x3,
};
const void *const data_020c79f0[2] = {
    (void *)data_020d82f4, (void *)0x3,
};
char data_020d80d8[9] = "q06_good";
char data_020d7ff8[8] = "q10_con";
void * data_020d7fe8[2] = {
    (void *)_ZN17Unk_0202ce90_Base13func_0202ce90Ev, 0,
};
Unk_021be8c0 data_021beb08[7];
const u32 data_020c7a38[3] = {
    0x0a0a0a0a, 0x0a080e0e, 0x0000000e,
};
void * data_020d7be8[2] = {
    (void *)_ZN12Unk_0201d2d013func_02022dc0Ev, 0,
};
void * data_020d7be0[2] = {
    (void *)_ZN12Unk_0201d2d013func_0202aac8Ev, 0,
};
char data_020d830c[10] = "q10_leave";
void * data_020d7fa0[2] = {
    (void *)_ZN12Unk_0201d2d013func_020267b8Eii, 0,
};
const void *const data_020c7728[2] = {
    (void *)data_020d869c, (void *)0x3,
};
char data_020d80fc[9] = "q02_req1";
const void *const data_020c79a8[2] = {
    (void *)data_020d8390, (void *)0x1,
};
char data_020d8108[9] = "q02_req3";
void * data_020d7f78[2] = {
    (void *)_ZN12Unk_02027a3413func_02028058EP16Unk_02027a34_Outj, 0,
};
void * data_020d7f70[2] = {
    (void *)_ZN12Unk_0201eea413func_0201f6e0Ev, 0,
};
char data_020d8138[9] = "q02_con1";
char data_020d84ec[11] = "q03_req4_5";
void * data_020d7ba0[2] = {
    (void *)_ZN12Unk_0201e5a413func_0201e974Ev, 0,
};
char data_020d84f8[11] = "q04_req1_2";
char data_020d86c0[12] = "tsu_no_hint";
void * data_020d79d0[2] = {
    (void *)_ZN12Unk_0201d2d013func_02022bb4Ev, 0,
};
char data_020d833c[10] = "q01_pwin2";
char data_020d8144[9] = "q02_con3";
char data_020d8150[9] = "ev_birth";
const u8 data_020c7a44[12] = {
    0x71, 0x30, 0x33, 0x5f, 0x63, 0x6c, 0x65, 0x61, 0x72, 0x00, 0x00, 0x00,
};
const void *const data_020c7700[2] = {
    (void *)data_020d83a8, (void *)0x3,
};
const u32 data_020c7aa4[5] = {
    0x00000000, 0x000000e5, 0x000000e7, 0x000000e9, 0x000000e7,
};
void * data_020d7b68[2] = {
    (void *)_ZN12Unk_0201c07813func_0201c3ccEP12Unk_020d8938, 0,
};
void * data_020d7ef8[2] = {
    (void *)_ZN12Unk_0201d2d013func_02022608Ev, 0,
};
void * data_020d7ee8[2] = {
    (void *)_ZN12Unk_020d893813func_0201d184Ev, 0,
};
void * data_020d7b58[2] = {
    (void *)_ZN12Unk_0201d2d013func_020220c0Ev, 0,
};
void * data_020d8814[5] = {
    (void *)data_020d8120, (void *)data_020d8784, (void *)data_020d812c, (void *)data_020d8784,
    (void *)data_020d8784,
};
const void *const data_020c76e8[2] = {
    (void *)data_020d78c8, (void *)0x3,
};
u32 data_021be614[2];
const void *const data_020c76e0[2] = {
    (void *)data_020d8240, (void *)0x1,
};
void * data_020d7b48[2] = {
    (void *)_ZN12Unk_0202134013func_020217acEv, 0,
};
char data_020d8198[9] = "q02_nwin";
u32 data_020d7b40[2] = {
    0x00000000, 0x00000003,
};
const void *const data_020c76d0[2] = {
    (void *)data_020d7a10, (void *)0x3,
};
const void *const data_020c78f0[2] = {
    (void *)data_020d8708, (void *)0x3,
};
void * data_020d7b38[2] = {
    (void *)_ZN12Unk_0201d2d013func_02021048Ev, 0,
};
char data_020d8540[11] = "q03_con1_2";
char data_020d8360[10] = "q02_pwin2";
Unk_021be8c0 data_021bf10c[17];
char data_020d8378[10] = "q02_pdraw";
const void *const data_020c78a8[2] = {
    (void *)data_020d8330, (void *)0x5,
};
char data_020d7e60[8] = "q05_con";
char data_020d81bc[9] = "ai_shop1";
Unk_021be8c0 data_021be730[2];
u32 data_020d7e38[2] = {
    0x00000000, 0x00000003,
};
Unk_021be8c0 data_021be668[1];
char data_020d8384[10] = "ai_nfirst";
char data_020d86fc[12] = "q01_revenge";
char data_020d839c[10] = "tsu_ghint";
void * data_020d7ac0[2] = {
    (void *)_ZN12Unk_0201d2d013func_02024a1cEv, 0,
};
void * data_020d7df8[2] = {
    (void *)_ZN12Unk_020d893813func_0201cc44Ev, 0,
};
void * data_020d7b00[2] = {
    (void *)_ZN12Unk_020d893813func_0201cd9cEv, 0,
};
char data_020d7878[6] = "3p_ko";
void * data_020d7dd8[2] = {
    (void *)_ZN12Unk_0201d2d013func_02021fe8Ev, 0,
};
void * data_020d7dd0[2] = {
    (void *)_ZN12Unk_02027a3413func_02028058EP16Unk_02027a34_Outj, 0,
};
void * data_020d7ae0[2] = {
    (void *)_ZN12Unk_020d893813func_0201cdf8Ev, 0,
};
const u32 data_020c7bb0[12] = {
    0x00000054, 0x00000055, 0x00000056, 0x00000057, 0x00000058, 0x00000059, 0x0000005a, 0x0000005b,
    0x0000005c, 0x0000005d, 0x0000005e, 0x0000005f,
};
void * data_020d7db0[2] = {
    (void *)_ZN12Unk_02027a3413func_02028058EP16Unk_02027a34_Outj, 0,
};
char data_020d85c4[11] = "ai_fortune";
const void *const data_020c7680[2] = {
    (void *)data_020d83cc, (void *)0x3,
};
u8 data_020d8204[9] = "q05_miss";
const void *const data_020c7868[2] = {
    (void *)data_020d85d0, (void *)0x1,
};
void * data_020d79d8[2] = {
    (void *)_ZN12Unk_02027a3413func_02028058EP16Unk_02027a34_Outj, 0,
};
char data_020d7d58[8] = "q01_end";
const void *const data_020c7840[2] = {
    (void *)data_020d839c, (void *)0x5,
};
void * data_020d7d18[2] = {
    (void *)_ZN12Unk_02027a3413func_02028058EP16Unk_02027a34_Outj, 0,
};
u8 data_020d7860[2] = {
    0x02, 0x02,
};
void * data_020d7cf8[2] = {
    (void *)_ZN12Unk_020238b013func_02023bfcEv, 0,
};
char data_020d8714[12] = "ev_firework";
const void *const data_020c76b0[2] = {
    (void *)data_020d8738, (void *)0x3,
};
Unk_021be8c0 data_021bf2a4[26];
char data_020d860c[11] = "q01_return";
const void *const data_020c7870[2] = {
    (void *)data_020d7b18, (void *)0x3,
};
void * data_020d7e10[2] = {
    (void *)_ZN12Unk_0202134013func_020214ecEPPvi, 0,
};
u32 data_020d7e48[2] = {
    0x00000000, 0x00000003,
};
char data_020d8438[10] = "q04_dress";
char data_020d8738[12] = "etc_connect";
void * data_020d7f30[2] = {
    (void *)_ZN12Unk_0201d2d013func_02022758Ev, 0,
};
const u8 data_020c7538[6] = {
    0x08, 0x10, 0x20, 0x00, 0x18, 0x28,
};
char data_020d7fc0[8] = "q06_fin";
char data_020d7cc0[8] = "q07_req";
char data_020d8450[11] = "q12_report";
void * data_020d7cb0[2] = {
    (void *)_ZN12Unk_020d893813func_0201d0c4Ev, 0,
};
const u8 data_020c7a20[9] = {
    0x71, 0x30, 0x34, 0x5f, 0x6d, 0x69, 0x73, 0x73, 0x00,
};
const void *const data_020c7550[2] = {
    (void *)data_020d82c4, (void *)0x3,
};
void * data_020d7a48[2] = {
    (void *)_ZN12Unk_02027a3413func_02027c24Ev, 0,
};
}
}

namespace F08 {
u32 Unk_0201d2d0::func_02020cc4() {
    u32 r5 = data_020c7770.unk_04;
    u32 r6 = 0;
    u32 t[2];
    Unk_02020cc4_Bits bits;
    s32 r4;
    u32 flag;
    t[0] = 0;
    t[1] = 0;
    r4 = -1;
    flag = 0;
    func_0209d498(t);
    if (func_020874e8(((u8 *)t)[5], ((u8 *)t)[4], ((u8 *)t)[3], &bits) != 0) {
        if (bits.a == 2 && bits.b == 3) {
            r4 = 1;
        } else {
            r4 = 0;
        }
    }
    switch (r4) {
    case 0: {
        u32 i = bits.a;
        if (i >= 4) {
            i = 0;
        }
        r6 = data_020c750c[i];
        flag = 1;
        break;
    }
    case 1:
        r5 = 1;
        r6 = bits.c + 12;
        flag = 1;
        break;
    }
    if (flag == 1) {
        func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), data_020c7770.unk_00, r5, r6, 0);
    }
    return flag;
}
}

namespace F08 {
BOOL Unk_0201d2d0::func_02020b38() {
    void *base;
    s32 r4;
    void *r7;
    u8 *p14;
    u8 *p18;
    s32 r5;
    BOOL result;
    u8 *rec;
    void *q;
    if (!Unk_02020b38_IsZero(data_020e416c)) {
        return FALSE;
    }
    base = func_020b05bc();
    r4 = func_020b0218();
    r7 = (void *)func_0209750c();
    p14 = 0;
    p18 = 0;
    r5 = -1;
    result = FALSE;
    if (r4 != -1 && func_020b0980(base, r4) != 0 && r7 != 0) {
        rec = (u8 *)base + r4 * 0x46;
        if (_ZN12Unk_020940a013func_02094218Ev(rec) != 0) {
            q = _ZN12Unk_0209865c13func_0209888cEv(r7);
            if (*(u16 *)rec == *(u16 *)q && func_02128930(rec + 2, (u8 *)q + 2, 8) == 0 && _ZN12Unk_020940a013func_020941e8EPS_(rec, q) != 0) {
                r5 = 0;
            } else if (_ZN12Unk_0206395413func_02094058Ev(rec) == 0) {
                if (func_02094048(rec) != -1) {
                    r5 = 1;
                }
            } else if (_ZN12Unk_020940a013func_020941e8EPS_(rec, _ZN12Unk_0209865c13func_0209888cEv(r7)) == 0) {
                r5 = 2;
            }
            if (r5 != -1) {
                p14 = rec;
                p18 = rec + 0x16;
            }
        }
    }
    if (r5 != -1) {
        func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), data_020c7750.unk_00, data_020c7750.unk_04, r5, 0);
        result = TRUE;
        if (p18 != 0) {
            Unk_020e2f5c s;
            Unk_020e2f74 t;
            func_020a78a4(&s, p18, 0x10);
            t.func_020a7aa0(&s, 0, 0);
            _ZN12Unk_020660f813func_02067a3cEiPv(unk_3c, 0, &t);
        }
        if (p14 != 0) {
            _ZN12Unk_020d771413func_020157e8Ejj(this, (u32)p14, 1);
            _ZN12Unk_020d771413func_02015818Ejj(this, func_0209409c(p14), 2);
        }
    }
    return result;
}
}

namespace F08 {
BOOL Unk_0201d2d0::func_02020a90() {
    s32 r = _ZN12Unk_02097ff413func_020981ecEv(func_0209750c());
    if (_ZN12Unk_020cbb1813func_02072e44Ev(data_020cbb18) != 0) {
        r = 10;
    }
    if (r < 10) {
        func_0200303c(&unk_100, 30, data_020c77d8, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)));
        unk_11e = r;
        _ZN12Unk_02097ff413func_020981c4Ev(func_0209750c());
        unk_168 = data_020d7bd0;
        unk_170 = data_020d7fd8;
        return TRUE;
    }
    return FALSE;
}
}

namespace F08 {
BOOL Unk_0201d2d0::func_02020a1c() {
    s32 r = func_02063b8c(2);
    if (((Unk_020d8938 *)unk_fc)->func_0201c784() == 10 && r == 0) {
        func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), data_020c7738.unk_00, data_020c7738.unk_04, 0, 0);
        return TRUE;
    }
    return FALSE;
}
}

namespace F08 {
s32 Unk_0201d2d0::func_02020a00(s32 a, s32 b) {
    s32 r = func_0202ce44(a, b);
    if (r == -1) {
        r = 4;
    }
    return r;
}
}

namespace F07 {
void Unk_0201d2d0::func_020209cc() {
    _ZN12Unk_0201d2d013func_0202b4e8Ejj(this, 4, 3);
    _ZN12Unk_0201d2d013func_0202b4acEjPv(this, 5, unk_fc->unk_82c);
    _ZN12Unk_0201d2d013func_0202b4e8Ejj(this, 6, 4);
}
}

namespace F07 {
void Unk_0201d2d0::func_02020850(Unk_0201d2d0_Out *out) {
    static Unk_02020850_Fn tbl[14] = { data_020d7fa8, data_020d7b98, data_020d7f90, data_020d7f80, data_020d7b88, data_020d7b78, data_020d7f48, data_020d7b60, data_020d7f10, data_020d7b48, data_020d7b38, data_020d7b30, data_020d7ea8, data_020d7ea0 };
    s32 r, i;
    func_02116048(data_020c7a74, data_021be630, 14);
    func_020209cc();
    r = _ZN12Unk_0201d2d013func_02020a1cEv(this);
    if (r == 0) {
        r = _ZN12Unk_0201d2d013func_02020a90Ev(this);
    }
    while (r == 0) {
        i = _ZN12Unk_0201d2d013func_02020a00Eii(this, data_021be630, 14);
        if (i >= 0 && i < 14) {
            r = (this->*tbl[i])();
            if (r == 0) {
                data_021be630[i] = 0;
            }
        } else {
            _ZN12Unk_0201d2d013func_02021ce4Ev(this);
            break;
        }
    }
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}
}

namespace nZ {
extern "C" {
char data_020d866c[12] = "tsu_fi_hint";
const void *const data_020c7788[2] = {
    (void *)data_020d8084, (void *)0x2,
};
char data_020d82c4[10] = "q_icancel";
char data_020d8744[13] = "q10_reserved";
char data_020d8090[9] = "q_error2";
const void *const data_020c75e8[2] = {
    (void *)data_020d81ec, (void *)0x3,
};
void * data_020d7970[2] = {
    (void *)_ZN12Unk_0201d2d013func_020248e4Ev, 0,
};
const void *const data_020c7548[2] = {
    (void *)data_020d8498, (void *)0x3,
};
void * data_020d7a50[2] = {
    (void *)_ZN12Unk_0201d2d013func_020279a0Ev, 0,
};
void * data_020d7c38[2] = {
    (void *)_ZN12Unk_0201d2d013func_02023248Ev, 0,
};
Unk_020dd458 data_021beee0;
const u8 data_020c74fc[2] = {
    0x00, 0x09,
};
const void *const data_020c7a94[4] = {
    (void *)data_020d8414, (void *)0x3, (void *)data_020d8420, (void *)0x3,
};
void * data_020d7ff0[2] = {
    (void *)_ZN12Unk_0201d2d013func_02026d8cEv, 0,
};
void * data_020d7fe0[2] = {
    (void *)_ZN12Unk_0201d2d013func_02026cccEv, 0,
};
const void *const data_020c75e0[2] = {
    (void *)data_020d86a8, (void *)0x3,
};
void * data_020d79f0[2] = {
    (void *)_ZN12Unk_0201d2d013func_0202ab90Ev, 0,
};
const void *const data_020c79b0[2] = {
    (void *)data_020d7fb0, (void *)0x3,
};
void * data_020d7bc0[2] = {
    (void *)_ZN12Unk_0201d2d013func_02026cccEv, 0,
};
char data_020d8120[9] = "q01_con1";
const void *const data_020c7718[2] = {
    (void *)data_020d78e0, (void *)0x3,
};
}
}

namespace F07 {
void Unk_0201d2d0::func_0202081c() {
    func_0202d048(this, &unk_128, &unk_124, unk_fc->unk_82c, 0);
}
}

namespace F07 {
void Unk_0201d2d0::func_020207c8() {
    u8 b;
    Unk_0201d2d0_Out out;
    _ZN12Unk_020d893813func_0202d1d4EP16Unk_020d8938_Tbl(this, data_021bea78);
    if (unk_ac) {
        (this->*unk_ac)(&out);
    }
    b = out.unk_04;
    _ZN12Unk_020660f813func_02067a84EPhPv(unk_3c, &b, out.unk_00);
}
}

namespace F07 {
void Unk_0201d2d0::func_0202071c() {
    Unk_0201d568_S s;
    u8 *p;
    if (func_0207e190(unk_fc->unk_82c) != 0) {
        p = ((u8 *)&nZ::data_021bea78[4]);
    } else if (_ZN12Unk_020cbb1813func_02072e44Ev(data_020cbb18) != 0 && _ZN12Unk_0206395413func_02094058Ev(_ZN12Unk_0209865c13func_0209888cEv(func_0209750c())) != 0) {
        p = ((u8 *)&nZ::data_021bea78[5]);
    } else {
        p = ((u8 *)&nZ::data_021bea78[1]);
    }
    func_0201c91c(this, &s, 0, data_020c74fc, p);
    func_0201c91c(this, &s, 1, data_020c7500, data_021be668);
    s.unk_20 = 2;
    s.unk_21 = s.unk_20 - 1;
    _ZN12Unk_020d893813func_0201c870EPv(this, &s);
    func_0202d1c0(data_020d7ed8);
    _ZN12Unk_020660f813func_020679c0Ei(unk_3c, 1);
}
}

namespace F07 {
void Unk_0201d2d0::func_020206bc(Unk_0201d2d0_Out *out) {
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), data_020c7650.unk_00, data_020c7650.unk_04, 0, 0);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}
}

namespace F07 {
void Unk_0201d2d0::func_02020654() {
    Unk_0201d568_S s;
    func_0201c938(this, &s, 0, 0x37, 0x39, ((u8 *)&nZ::data_021bea78[2]));
    func_0201c938(this, &s, 1, 0x3a, 0x3c, ((u8 *)&nZ::data_021bea78[3]));
    s.unk_20 = 2;
    s.unk_21 = s.unk_20 - 1;
    _ZN12Unk_020d893813func_0201c870EPv(this, &s);
    func_0202d1c0((*(Unk_0201d2d0_Fn *)nZ::data_020d7dd0));
    _ZN12Unk_020660f813func_020679c0Ei(unk_3c, 1);
}
}

namespace F07 {
void Unk_0201d2d0::func_0202059c(Unk_0201d2d0_Out *out) {
    s32 v;
    if (func_02063b8c(3) == 0 && _ZN12Unk_020cbb1813func_02072e44Ev(data_020cbb18) == 0) {
        void *r6 = unk_fc->unk_82c;
        void *r7;
        func_0207e268(r6);
        r7 = func_0209a610();
        if (func_0207e160(r6) == 0) {
            _ZN12Unk_0209b3bc13func_0209b238Ev(r7);
            func_0207b508(data_021dfd8c, _ZN12Unk_0208086013func_020805c4Ev(r6));
        }
        v = 3;
    } else {
        v = 2;
    }
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), data_020c7650.unk_00, data_020c7650.unk_04, v, 0);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}
}

namespace F07 {
void Unk_0201d2d0::func_0202053c(Unk_0201d2d0_Out *out) {
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), data_020c7650.unk_00, data_020c7650.unk_04, 1, 0);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}
}

namespace F07 {
void Unk_0201d2d0::func_020204dc(Unk_0201d2d0_Out *out) {
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), data_020c78a8.unk_00, data_020c78a8.unk_04, 0, 0);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}
}

namespace F07 {
void Unk_0201d2d0::func_020204b4(Unk_0201d2d0_Out *out) {
    _ZN12Unk_0201d2d013func_02021ce4Ev(this);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}
}

namespace F07 {
s32 Unk_0201d2d0::func_02020320(Unk_0201d2d0_Out *out) {
    Unk_0201d2d0_Data *d = 0;
    s32 v24 = -1;
    void *r18 = unk_fc->unk_82c;
    u8 *r6 = (u8 *)func_0207e310(r18);
    void *r20 = func_0207856c();
    s32 result = 0;
    s32 v28 = 0;
    s32 v2c = 0;
    s32 r7 = _ZN12Unk_0201d2d013func_0202bb88EPi(this, &v2c);
    _ZN12Unk_0201d2d013func_0202b444Ev(this);
    if (_ZN12Unk_0201d2d013func_0202bb84Ev(this) != 0) {
        d = &data_020c75c8;
        if (r7 == 0) {
            unk_138 = 1;
        }
    } else if (_ZN12Unk_0201d2d013func_0202bb54Ev(this) != 0) {
        d = &data_020c76e8;
        if (r7 == 0) {
            unk_138 = 1;
        }
    } else if (_ZN12Unk_0201d2d013func_0202bb48Ei(this, r7) != 0) {
        d = _ZN12Unk_0201d2d013func_0202baecEPjPv(this, &v28, r18);
    } else if (_ZN12Unk_0201d2d013func_0202ba80EPViPv(this, &v24, &unk_fc->unk_5c) != 0) {
        d = _ZN12Unk_0201d2d013func_0202ba28Ei(this, v24);
    } else if (_ZN12Unk_0201d2d013func_0202ba10Ev(this) != 0) {
        d = &data_020c7870;
    } else if (_ZN12Unk_0201d2d013func_0202bae0Ei(this, r7) != 0) {
        d = _ZN12Unk_0201d2d013func_0202bab4Ev(this);
    } else if (_ZN12Unk_0201d2d013func_0202b9e4EP16Unk_0202b4ac_Rec(this, r6) != 0) {
        d = _ZN12Unk_0201d2d013func_0202b9bcEPjP16Unk_0202b4ac_Rec(this, &v28, r6);
    } else if (_ZN12Unk_0201d2d013func_0202b9b0Ei(this, r20) != 0) {
        d = &data_020c7608;
    } else if (_ZN12Unk_0201d2d013func_0202b9a4Ei(this, r20) != 0) {
        d = &data_020c7540;
    } else if (_ZN12Unk_0201d2d013func_0202b998Ei(this, r20) != 0) {
        d = &data_020c7848;
    }
    if (d != 0) {
        func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(r18)), d->unk_00, d->unk_04, v28, 0);
        result = 1;
    }
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
    r6[0x1d] |= 4;
    return result;
}
}

namespace F07 {
void Unk_0201d2d0::func_020201b0(Unk_0201d2d0_Out *out) {
    void *r7 = unk_fc->unk_82c;
    Unk_0201d2d0_Out o2;
    if (func_02020320(out) != 0) {
        func_0202d048(this, &unk_128, &unk_124, unk_fc->unk_82c, 0);
    } else {
        func_0202d048(this, &unk_128, &unk_124, unk_fc->unk_82c, 0);
        if (unk_128 != 0 && _ZN12Unk_0208091c13func_02080a74Ev((void *)unk_128) == 0) {
            func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(r7)), data_020c7670.unk_00, data_020c7670.unk_04, 0, 0);
            out->unk_00 = (u32)&unk_100;
            out->unk_04 = unk_11e;
            _ZN12Unk_0208091c13func_02080a98Ev((void *)unk_128);
        } else {
            if (func_02079524(data_021dfd8c, _ZN12Unk_0208086013func_020805c4Ev(r7)) == 0) {
                switch (func_02063b8c(3)) {
                case 0:
                    _ZN12Unk_020d893813func_0202d1d4EP16Unk_020d8938_Tbl(this, data_021bed30);
                    break;
                case 1:
                    _ZN12Unk_020d893813func_0202d1d4EP16Unk_020d8938_Tbl(this, ((u8 *)&nZ::data_021bed30[7]));
                    break;
                default:
                    _ZN12Unk_020d893813func_0202d1d4EP16Unk_020d8938_Tbl(this, ((u8 *)&nZ::data_021bed30[8]));
                    break;
                }
                if (unk_ac) {
                    (this->*unk_ac)(out);
                }
            } else {
                _ZN12Unk_020d893813func_0202d1d4EP16Unk_020d8938_Tbl(this, ((u8 *)&nZ::data_021bed30[8]));
                if (unk_ac) {
                    (this->*unk_ac)(out);
                }
            }
        }
    }
}
}

namespace F07 {
void Unk_0201d2d0::func_02020150(Unk_0201d2d0_Out *out) {
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), data_020c7670.unk_00, 1, 3, data_020c7670.unk_04);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}
}

namespace F07 {
void Unk_0201d2d0::func_020200e4() {
    Unk_0201d568_S s;
    func_0201c95c(this, &s);
    func_0201c938(this, &s, 0, 0xc4, 0xc4, ((u8 *)&nZ::data_021bed30[1]));
    func_0201c938(this, &s, 1, 0xd0, 0xd0, ((u8 *)&nZ::data_021bed30[6]));
    s.unk_20 = 2;
    s.unk_21 = s.unk_20 - 1;
    _ZN12Unk_020d893813func_0201c870EPv(this, &s);
    func_0202d1c0(data_020d7f60);
    _ZN12Unk_020660f813func_020679c0Ei(unk_3c, 1);
}
}

namespace F06 {
void Unk_0201f7d0::func_02020084(Unk_0201f7d0_Out *out) {
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), data_020c7670.unk_00, 1, 0x14, data_020c7670.unk_04);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}
}

namespace F06 {
void Unk_0201f7d0::func_02020030() {
    u8 b;
    Unk_0201f7d0_Out out;
    _ZN12Unk_020d893813func_0202d1d4EP16Unk_020d8938_Tbl(this, ((u8 *)&nZ::data_021bed30[2]));
    if (unk_ac) {
        (this->*unk_ac)(&out);
    }
    b = out.unk_04;
    _ZN12Unk_020660f813func_02067a84EPhPv(unk_3c, &b, out.unk_00);
}
}

namespace F06 {
void Unk_0201f7d0::func_02020010() {
    _ZN12Unk_020d771013func_02014f38Ej(this, 3);
    func_0202d33c(data_020d7d60);
}
}

namespace F06 {
void Unk_0201f7d0::func_0201fff4() {
    _ZN12Unk_0201442013func_02014558Ev(this);
    func_0202d328(data_020d7ab0);
}
}

namespace F06 {
void Unk_0201f7d0::func_0201ff9c() {
    u8 b;
    Unk_0201f7d0_Out out;
    _ZN12Unk_020d893813func_0202d1d4EP16Unk_020d8938_Tbl(this, ((u8 *)&nZ::data_021bed30[3]));
    if (unk_ac) {
        (this->*unk_ac)(&out);
    }
    b = out.unk_04;
    _ZN12Unk_020660f813func_02067a84EPhPv(unk_3c, &b, out.unk_00);
    _ZN12Unk_020d771013func_02014f74Ev(this);
}
}

namespace F06 {
void Unk_0201f7d0::func_0201ff3c(Unk_0201f7d0_Out *out) {
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), data_020c7670.unk_00, 1, 6, 2);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}
}

namespace F06 {
void Unk_0201f7d0::func_0201fed0() {
    Unk_0201f7d0_S s;
    func_0201c95c(this, &s);
    func_0201c938(this, &s, 0, 0x44, 0x44, ((u8 *)&nZ::data_021bed30[4]));
    func_0201c938(this, &s, 1, 0x52, 0x52, ((u8 *)&nZ::data_021bed30[5]));
    s.unk_20 = 2;
    s.unk_21 = s.unk_20 - 1;
    _ZN12Unk_020d893813func_0201c870EPv(this, &s);
    func_0202d1c0(data_020d7ca0);
    _ZN12Unk_020660f813func_020679c0Ei(unk_3c, 1);
}
}

namespace F06 {
void Unk_0201f7d0::func_0201fe5c(Unk_0201f7d0_Out *out) {
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), data_020c7670.unk_00, 1, 8, 2);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
    unk_c4 = data_020d7d40;
}
}

namespace F06 {
void Unk_0201f7d0::func_0201fe30() {
    func_0206d9fc(this);
    func_02079568(data_021dfd8c, _ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c));
}
}

namespace F06 {
void Unk_0201f7d0::func_0201fdd0(Unk_0201f7d0_Out *out) {
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), data_020c7670.unk_00, 1, 0xa, 2);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}
}

namespace F06 {
void Unk_0201f7d0::func_0201fd70(Unk_0201f7d0_Out *out) {
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), data_020c7670.unk_00, 1, 0xc, 2);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}
}

namespace F06 {
void Unk_0201f7d0::func_0201fd10(Unk_0201f7d0_Out *out) {
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), data_020c7670.unk_00, 1, 0xe, data_020c7670.unk_04);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}
}

namespace F06 {
void Unk_0201f7d0::func_0201fcb0(Unk_0201f7d0_Out *out) {
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), data_020c7670.unk_00, 1, 0x11, data_020c7670.unk_04);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}
}

namespace F06 {
void Unk_0201f7d0::func_0201fc48() {
    Unk_0201f7d0_S s;
    func_0201c91c(this, &s, 0, data_020c74fc, data_021be730);
    func_0201c91c(this, &s, 1, data_020c7500, data_021be668);
    s.unk_20 = 2;
    s.unk_21 = s.unk_20 - 1;
    _ZN12Unk_020d893813func_0201c870EPv(this, &s);
    func_0202d1c0(data_020d7d28);
    _ZN12Unk_020660f813func_020679c0Ei(unk_3c, 1);
}
}

namespace F06 {
void Unk_0201f7d0::func_0201fb54(Unk_0201f7d0_Out *out) {
    u32 r5;
    void *r7 = unk_fc->unk_82c;
    if (func_02020320(out) == 0) {
        Unk_0201fb54_Date d;
        d.a = 0;
        d.b = 0;
        r5 = func_02063b8c(10) & 1;
        func_0209d498(&d);
        if (r5 == 0) {
            u8 v = ((u8 *)&d)[2];
            if (v < 0x13) {
                r5 = 2;
            } else if (v < 0x14) {
                r5 = 0;
            } else if (v < 0x16) {
                r5 = 1;
            } else {
                r5 = 2;
            }
        } else {
            u8 v = ((u8 *)&d)[3];
            if (v != 0) {
                r5 = (v - 1) / 7;
            } else {
                r5 = 0;
            }
            if (func_0209ce68(((u8 *)&d)[5], ((u8 *)&d)[4], 6, 5) != -1 && r5 >= 2) {
                r5--;
            }
            r5 = (r5 >= 5 ? 0 : r5) + 3;
        }
        func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(r7)), data_020c7828.unk_00, data_020c7828.unk_04, r5, 0);
        out->unk_00 = (u32)&unk_100;
        out->unk_04 = unk_11e;
    }
    unk_c4 = data_020d79c8;
}
}

namespace F06 {
void Unk_0201f7d0::func_0201fb20() {
    func_0202d048(this, &unk_128, &unk_124, unk_fc->unk_82c, 0);
}
}

namespace F06 {
void Unk_0201f7d0::func_0201fa58(Unk_0201f7d0_Out *out) {
    if (func_02020320(out) != 0) {
        func_0202d048(this, &unk_128, &unk_124, unk_fc->unk_82c, 0);
    } else {
        if (unk_128 == 0 || _ZN12Unk_0208091c13func_02080a74Ev(unk_128) == 0) {
            _ZN12Unk_020d893813func_0202d1d4EP16Unk_020d8938_Tbl(this, data_021bebb0);
        } else if (func_02063b8c(100) < 30) {
            _ZN12Unk_020d893813func_0202d1d4EP16Unk_020d8938_Tbl(this, ((u8 *)&nZ::data_021bebb0[2]));
        } else {
            _ZN12Unk_020d893813func_0202d1d4EP16Unk_020d8938_Tbl(this, ((u8 *)&nZ::data_021bebb0[6]));
        }
        func_0202d048(this, &unk_128, &unk_124, unk_fc->unk_82c, 0);
        if (unk_ac) {
            (this->*unk_ac)(out);
        }
    }
}
}

namespace F06 {
void Unk_0201f7d0::func_0201f9f8(Unk_0201f7d0_Out *out) {
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), data_020c78b0.unk_00, data_020c78b0.unk_04, 0, 0);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}
}

namespace F06 {
void Unk_0201f7d0::func_0201f9c0() {
    _ZN12Unk_020d771013func_0201511cEjjjh(this, 0x17, data_021be6c0, 0x10, 0);
    _ZN12Unk_020d771013func_020151d0Ei(this, 6);
    func_0202d33c(data_020d7e50);
}
}

namespace F06 {
void Unk_0201f7d0::func_0201f964() {
    void *r4;
    void *r5;
    if (func_0206ed18() != 0) {
        r4 = unk_fc->unk_82c;
        if (unk_128 != 0) {
            _ZN12Unk_0208091c13func_02080c20EPvi(unk_128, func_0206ecf0(), 16);
        } else {
            u32 r = func_0206ecf0();
            _ZN12Unk_0207e94013func_0207f20cEPviS0_(r4, r, 16, _ZN12Unk_0209865c13func_0209888cEv(func_0209750c()));
        }
    }
}
}

namespace F06 {
void Unk_0201f7d0::func_0201f90c() {
    u8 b;
    Unk_0201f7d0_Out out;
    func_0201f964();
    _ZN12Unk_020d893813func_0202d1d4EP16Unk_020d8938_Tbl(this, ((u8 *)&nZ::data_021bebb0[1]));
    if (unk_ac) {
        (this->*unk_ac)(&out);
    }
    b = out.unk_04;
    _ZN12Unk_020660f813func_02067a84EPhPv(unk_3c, &b, out.unk_00);
}
}

namespace F06 {
void Unk_0201f7d0::func_0201f89c(Unk_0201f7d0_Out *out) {
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), data_020c78b0.unk_00, 1, 2, data_020c78b0.unk_04);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
    if (unk_128 != 0) {
        _ZN12Unk_0208091c13func_02080a98Ev(unk_128);
    }
}
}

namespace F06 {
void Unk_0201f7d0::func_0201f83c(Unk_0201f7d0_Out *out) {
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), data_020c78b0.unk_00, 1, 7, 3);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}
}

namespace F06 {
void Unk_0201f7d0::func_0201f7d0() {
    Unk_0201f7d0_S s;
    func_0201c95c(this, &s);
    func_0201c938(this, &s, 0, 0x5a, 0x5a, ((u8 *)&nZ::data_021bebb0[5]));
    func_0201c938(this, &s, 1, 0x6f, 0x6f, ((u8 *)&nZ::data_021bebb0[3]));
    s.unk_20 = 2;
    s.unk_21 = -1;
    _ZN12Unk_020d893813func_0201c870EPv(this, &s);
    func_0202d1c0(data_020d7ed0);
    _ZN12Unk_020660f813func_020679c0Ei(unk_3c, 1);
}
}

namespace F05 {
void Unk_0201eea4::func_0201f770(Unk_0201ef00_Out *out) {
    func_0202d184(unk_100, &unk_11e, 0x1e, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), data_020c78b0.unk_00, 1, 12, data_020c78b0.unk_04);
    out->unk_00 = unk_100;
    out->unk_04 = unk_11e;
}
}

namespace F05 {
void Unk_0201eea4::func_0201f738() {
    func_0201511c(0x17, (u32)data_021be6c0, 0x10, 0);
    func_020151d0(6);
    func_0202d33c((Unk_0201eea4_Fn)(*(void (Unk_0201eea4::**)())nZ::data_020d7f70));
}
}

namespace F05 {
void Unk_0201eea4::func_0201f6e0() {
    u8 b;
    Unk_0201eeac_Res res;
    func_0201f964();
    func_0202d1d4(((char *)&nZ::data_021bebb0[4]));
    if (unk_ac != 0) {
        (this->*unk_ac)(&res);
    }
    b = res.unk_04;
    _ZN12Unk_020660f813func_02067a84EPhPv(unk_3c, &b, res.unk_00);
}
}

namespace F05 {
void Unk_0201eea4::func_0201f680(Unk_0201ef00_Out *out) {
    func_0202d184(unk_100, &unk_11e, 0x1e, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), data_020c78b0.unk_00, 1, 14, data_020c78b0.unk_04);
    out->unk_00 = unk_100;
    out->unk_04 = unk_11e;
}
}

namespace F05 {
void Unk_0201eea4::func_0201f620(Unk_0201ef00_Out *out) {
    func_0202d184(unk_100, &unk_11e, 0x1e, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), data_020c78b0.unk_00, 1, 10, data_020c78b0.unk_04);
    out->unk_00 = unk_100;
    out->unk_04 = unk_11e;
}
}

namespace F05 {
void Unk_0201eea4::func_0201f5c0(Unk_0201ef00_Out *out) {
    func_0202d184(unk_100, &unk_11e, 0x1e, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), data_020c78b0.unk_00, 1, 4, 3);
    out->unk_00 = unk_100;
    out->unk_04 = unk_11e;
}
}

namespace F05 {
void Unk_0201eea4::func_0201f56c() {
    u8 b;
    Unk_0201eeac_Res res;
    func_0202d1d4(((char *)&nZ::data_021bebb0[7]));
    if (unk_ac != 0) {
        (this->*unk_ac)(&res);
    }
    b = res.unk_04;
    _ZN12Unk_020660f813func_02067a84EPhPv(unk_3c, &b, res.unk_00);
}
}

namespace F05 {
void Unk_0201eea4::func_0201f564() {
    func_02029d84();
}
}

namespace F05 {
void Unk_0201eea4::func_0201f55c() {
    func_0201fc48();
}
}

namespace F05 {
extern "C" u32 func_0201f524(u32 x) {
    switch (x) {
    case 6:
    case 9:
    case 12:
    case 15:
        return 6;
    case 8:
    case 11:
    case 14:
    case 17:
        return 12;
    }
    return 9;
}
}

namespace F05 {
void Unk_0201eea4::func_0201f36c(Unk_0201ef00_Out *out) {
    u32 r6;
    void *r4;
    volatile u16 id;
    u16 v[3];
    u16 *q;
    u32 t[2];
    void *sp14;
    u32 sp18;
    u32 sp1c;
    if (func_02020320(out)) {
        func_0202d048(&unk_128, &unk_124, unk_fc->unk_82c, 0);
        return;
    }
    Unk_021ed24c *dp = &data_021d7350.unk_15ef4;
    sp14 = unk_fc->unk_82c;
    if (dp) {
        func_02085818(v, dp);
        q = v;
    } else {
        v[1] = 0xfff1;
        q = &v[1];
    }
    id = *q;
    r6 = 0;
    t[0] = r6;
    t[1] = r6;
    func_0209d498(t);
    sp18 = ((u8 *)t)[2];
    if (unk_128 == 0 || _ZN12Unk_0208091c13func_02080a74Ev(unk_128) == 0) {
        r6 = 0;
    } else if (dp) {
        if (Unk_0201f170_InRange(&id, 0x12e8, 0x131f)) {
            sp1c = _ZN12Unk_0208581013func_020858acEv(dp);
            r4 = _ZN12Unk_0208581013func_0208586cEv(dp);
            if (_ZN12Unk_02002fc813func_020030b4Ev(r4)) {
                Unk_0201f170_Rec *a = (Unk_0201f170_Rec *)r4;
                Unk_0201f170_Rec *b = (Unk_0201f170_Rec *)_ZN12Unk_0208086013func_020805c4Ev(sp14);
                if (a->unk_00 == b->unk_00 && func_02128930(a->unk_02, b->unk_02, 8) == 0 && a->unk_0b == b->unk_0b) {
                    r6 = 3;
                } else {
                    r6 = func_0201f524(sp18);
                }
                func_020157b8(r4, 1);
            } else if (_ZN12Unk_020940a013func_02094218Ev(sp1c)) {
                r6 = func_0201f524(sp18);
                func_020157e8(_ZN12Unk_0208581013func_020858acEv(dp), 1);
            }
            func_020158a8(_ZN12Unk_0208581013func_02085810Ev(dp), 0, 1, 3);
            func_0201578c((void *)&id, 0, 7);
        }
    }
    func_0202d184(unk_100, &unk_11e, 0x1e, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(sp14)), data_020c7628.unk_00, 1, r6, data_020c7628.unk_04);
    out->unk_00 = unk_100;
    out->unk_04 = unk_11e;
    unk_c4 = (Unk_0201eea4_Fn)(*(void (Unk_0201eea4::**)())nZ::data_020d7a28);
}
}

namespace F05 {
void Unk_0201eea4::func_0201f32c() {
    func_0202d048(&unk_128, &unk_124, unk_fc->unk_82c, 0);
    if (unk_128 != 0) {
        _ZN12Unk_0208091c13func_02080a98Ev(unk_128);
    }
}
}

namespace F05 {
void Unk_0201eea4::func_0201f170(Unk_0201ef00_Out *out) {
    u32 r6;
    void *r4;
    volatile u16 id;
    u16 v[3];
    u16 *q;
    u32 t[2];
    void *sp14;
    u32 sp18;
    u32 sp1c;
    if (func_02020320(out)) {
        func_0202d048(&unk_128, &unk_124, unk_fc->unk_82c, 0);
        return;
    }
    Unk_021ed24c *dp = &data_021d7350.unk_15ef4;
    sp14 = unk_fc->unk_82c;
    if (dp) {
        func_02085818(v, dp);
        q = v;
    } else {
        v[1] = 0xfff1;
        q = &v[1];
    }
    id = *q;
    r6 = 0;
    t[0] = r6;
    t[1] = r6;
    func_0209d498(t);
    sp18 = ((u8 *)t)[2];
    if (unk_128 == 0 || _ZN12Unk_0208091c13func_02080a74Ev(unk_128) == 0) {
        r6 = 0;
    } else if (dp) {
        if (Unk_0201f170_InRange(&id, 0x12b0, 0x12e7)) {
            sp1c = _ZN12Unk_0208581013func_020858acEv(dp);
            r4 = _ZN12Unk_0208581013func_0208586cEv(dp);
            if (_ZN12Unk_02002fc813func_020030b4Ev(r4)) {
                Unk_0201f170_Rec *a = (Unk_0201f170_Rec *)r4;
                Unk_0201f170_Rec *b = (Unk_0201f170_Rec *)_ZN12Unk_0208086013func_020805c4Ev(sp14);
                if (a->unk_00 == b->unk_00 && func_02128930(a->unk_02, b->unk_02, 8) == 0 && a->unk_0b == b->unk_0b) {
                    r6 = 3;
                } else {
                    r6 = func_0201f524(sp18);
                }
                func_020157b8(r4, 1);
            } else if (_ZN12Unk_020940a013func_02094218Ev(sp1c)) {
                r6 = func_0201f524(sp18);
                func_020157e8(_ZN12Unk_0208581013func_020858acEv(dp), 1);
            }
            func_02015958(_ZN12Unk_0208581013func_02085810Ev(dp) >> 12, 0, 3, 0, 0);
            func_0201578c((void *)&id, 0, 7);
        }
    }
    func_0202d184(unk_100, &unk_11e, 0x1e, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(sp14)), data_020c77a8.unk_00, 1, r6, data_020c77a8.unk_04);
    out->unk_00 = unk_100;
    out->unk_04 = unk_11e;
    unk_c4 = (Unk_0201eea4_Fn)(*(void (Unk_0201eea4::**)())nZ::data_020d7c20);
}
}

namespace F05 {
void Unk_0201eea4::func_0201f130() {
    func_0202d048(&unk_128, &unk_124, unk_fc->unk_82c, 0);
    if (unk_128 != 0) {
        _ZN12Unk_0208091c13func_02080a98Ev(unk_128);
    }
}
}

namespace F05 {
void Unk_0201eea4::func_0201f058(void *arg) {
    void *r4 = unk_fc->unk_82c;
    u32 r6 = func_02063b8c(10) & 1;
    if (func_02020320(arg)) {
        func_0202d048(&unk_128, &unk_124, r4, 0);
        return;
    }
    if (unk_128 == 0 || _ZN12Unk_0208091c13func_02080a74Ev(unk_128) == 0) {
        func_0202d1d4(data_021be8c0);
    } else if (r6 == 0) {
        func_0202d1d4(((char *)&nZ::data_021be8c0[2]));
    } else {
        func_0202d1d4(((char *)&nZ::data_021be8c0[1]));
    }
    if (unk_ac != 0) {
        (this->*unk_ac)(arg);
    }
    func_0202d048(&unk_128, &unk_124, r4, 0);
    if (unk_128 != 0) {
        _ZN12Unk_0208091c13func_02080a98Ev(unk_128);
    }
}
}

namespace F05 {
void Unk_0201eea4::func_0201efc0(Unk_0201ef00_Out *out) {
    u32 a, b;
    s32 t = func_0203f42c(0xe);
    if (t < 0) {
        t = 0;
    }
    if (t == 0) {
        a = 2;
        b = 0;
    } else if (t >= 1 && t <= 2) {
        a = 3;
        b = 2;
    } else if (t >= 3 && t <= 5) {
        a = 3;
        b = 5;
    } else {
        a = 2;
        b = 8;
    }
    func_0202d184(unk_100, &unk_11e, 0x1e, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), data_020c7790.unk_00, 1, b, (u8)a);
    out->unk_00 = unk_100;
    out->unk_04 = unk_11e;
}
}

namespace F05 {
void Unk_0201eea4::func_0201ef60(Unk_0201ef00_Out *out) {
    func_0202d184(unk_100, &unk_11e, 0x1e, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), data_020c7790.unk_00, 1, 13, data_020c7790.unk_04);
    out->unk_00 = unk_100;
    out->unk_04 = unk_11e;
}
}

namespace F05 {
void Unk_0201eea4::func_0201ef00(Unk_0201ef00_Out *out) {
    func_0202d184(unk_100, &unk_11e, 0x1e, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), data_020c7790.unk_00, 1, 10, data_020c7790.unk_04);
    out->unk_00 = unk_100;
    out->unk_04 = unk_11e;
}
}

namespace F05 {
void Unk_0201eea4::func_0201eeac() {
    u8 b;
    Unk_0201eeac_Res res;
    func_0202d1d4(((char *)&nZ::data_021be8c0[3]));
    if (unk_ac != 0) {
        (this->*unk_ac)(&res);
    }
    b = res.unk_04;
    _ZN12Unk_020660f813func_02067a84EPhPv(unk_3c, &b, res.unk_00);
}
}

namespace F05 {
void Unk_0201eea4::func_0201eea4() {
    func_02029d84();
}
}

namespace F04 {
void Unk_0201e5a4::func_0201ee9c() { _ZN12Unk_0201f7d013func_0201fc48Ev(this); }
}

namespace F04 {
extern "C" BOOL func_0201ee7c(u16 *p) {
    BOOL r = FALSE;
    if (*p >= 0x1542 && *p <= 0x1546) {
        r = TRUE;
    }
    return r;
}
}

namespace F04 {
extern "C" BOOL func_0201ee4c(u16 *p, s32 a) {
    BOOL r = FALSE;
    BOOL in = FALSE;
    if (*p >= 0x1542 && *p <= 0x1546) {
        in = TRUE;
    }
    if (in && a == 0) {
        r = TRUE;
    }
    return r;
}
}

namespace F04 {
void Unk_0201e5a4::func_0201ed3c(u32 arg) {
    u32 r4 = unk_fc->unk_82c;
    u32 r6 = func_02063b8c(10) & 1;
    u32 r7 = func_02063b8c(10) & 1;
    u32 tmp;
    if (func_02020320(arg)) {
        func_0202d048(&unk_128, &unk_124, r4, 0);
        return;
    }
    if (unk_128 == 0 || _ZN12Unk_0208091c13func_02080a74Ev(unk_128) == 0) {
        func_0202d1d4(data_021bee08);
    } else if (r6 == 0) {
        func_0202d1d4(((u8 *)&nZ::data_021bee08[2]));
    } else if (r7 == 0) {
        if (func_02098f30(&tmp, func_0201ee7c) > 0) {
            func_0202d1d4(((u8 *)&nZ::data_021bee08[4]));
        } else {
            func_0202d1d4(((u8 *)&nZ::data_021bee08[2]));
        }
    } else {
        func_0202d1d4(((u8 *)&nZ::data_021bee08[1]));
    }
    if (unk_ac) {
        (this->*unk_ac)(arg);
    }
    func_0202d048(&unk_128, &unk_124, r4, 0);
    if (unk_128 != 0) {
        _ZN12Unk_0208091c13func_02080a98Ev(unk_128);
    }
}
}

namespace F04 {
void Unk_0201e5a4::func_0201ecb0(Unk_0201e5a4_Out *out) {
    u32 r4;
    u32 r6;
    s32 v = func_0203f42c(0x10);
    if (v < 0) {
        v = 0;
    }
    if (v == 0) {
        r4 = 2;
        r6 = 0;
    } else if (v >= 1 && v <= 5) {
        r4 = 3;
        r6 = 2;
    } else {
        r4 = 2;
        r6 = 5;
    }
    func_0202d184(unk_100, &unk_11e, 0x1e, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), data_020c7758.unk_00, 1, r6, r4);
    out->unk_00 = unk_100;
    out->unk_04 = unk_11e;
}
}

namespace F04 {
void Unk_0201e5a4::func_0201ec50(Unk_0201e5a4_Out *out) {
    func_0202d184(unk_100, &unk_11e, 0x1e, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), data_020c7758.unk_00, 1, 0xa, data_020c7758.unk_04);
    out->unk_00 = unk_100;
    out->unk_04 = unk_11e;
}
}

namespace F04 {
void Unk_0201e5a4::func_0201ebf0(Unk_0201e5a4_Out *out) {
    func_0202d184(unk_100, &unk_11e, 0x1e, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), data_020c7758.unk_00, 1, 7, data_020c7758.unk_04);
    out->unk_00 = unk_100;
    out->unk_04 = unk_11e;
}
}

namespace F04 {
void Unk_0201e5a4::func_0201eb9c() {
    Unk_0201e9d0_S c;
    Unk_0201e5a4_Ret t;
    func_0202d1d4(((u8 *)&nZ::data_021bee08[3]));
    if (unk_ac) {
        (this->*(Unk_0201e5a4_RetFn)unk_ac)(&t);
    }
    c.unk_00 = t.unk_04;
    _ZN12Unk_020660f813func_02067a84EPhPv(unk_3c, &c, t.unk_00);
}
}

namespace F04 {
void Unk_0201e5a4::func_0201eb94() { _ZN12Unk_0201d2d013func_02029d84EP16Unk_0201d2d0_Out(this); }
}

namespace F04 {
void Unk_0201e5a4::func_0201eb8c() { _ZN12Unk_0201f7d013func_0201fc48Ev(this); }
}

namespace F04 {
void Unk_0201e5a4::func_0201eb2c(Unk_0201e5a4_Out *out) {
    func_0202d184(unk_100, &unk_11e, 0x1e, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), data_020c7758.unk_00, 1, 0xd, 2);
    out->unk_00 = unk_100;
    out->unk_04 = unk_11e;
}
}

namespace F04 {
void Unk_0201e5a4::func_0201eabc() {
    Unk_0201eabc_T t;
    func_0201c95c(this, &t);
    func_0201c938(this, &t, 0, 0x5b, 0x5d, ((u8 *)&nZ::data_021bee08[5]));
    func_0201c938(this, &t, 1, 0x5e, 0x60, ((u8 *)&nZ::data_021bee08[8]));
    t.unk_20 = 2;
    t.unk_21 = t.unk_20 - 1;
    _ZN12Unk_020d893813func_0201c870EPv(this, &t);
    func_0202d1c0((*(void (Unk_0201e5a4::**)())nZ::data_020d7bc8));
    _ZN12Unk_020660f813func_020679c0Ei(unk_3c, 1);
}
}

namespace F04 {
void Unk_0201e5a4::func_0201ea8c() {
    func_0201517c((u32)func_0201ee4c, 0xd, 1);
    func_020151d0(0);
    func_0202d33c((*(void (Unk_0201e5a4::**)())nZ::data_020d7968));
}
}

namespace F04 {
void Unk_0201e5a4::func_0201e9d0() {
    Unk_0201e9d0_S c;
    Unk_0201e5a4_Ret t;
    if (func_0206ed18() != 0) {
        u32 r4 = func_0206ed38();
        unk_120 = *(u16 *)_ZN12Unk_02097d1c13func_02097f6cEi(_ZN12Unk_0209865c13func_02098750Ev(func_0209750c()), r4);
        c.unk_02 = 0xfff1;
        func_0209909c(&c.unk_02, 0, r4);
        func_02014ce4(&unk_120, 0, 5, 0);
        func_0202d328((*(void (Unk_0201e5a4::**)())nZ::data_020d7ba0));
    } else {
        func_0202d1d4(((u8 *)&nZ::data_021bee08[8]));
        if (unk_3c != NULL) {
            unk_3c->unk_08 = 1;
        }
        if (unk_ac) {
            (this->*(Unk_0201e5a4_RetFn)unk_ac)(&t);
        }
        c.unk_00 = t.unk_04;
        _ZN12Unk_020660f813func_02067a84EPhPv(unk_3c, &c, t.unk_00);
    }
}
}

namespace F04 {
void Unk_0201e5a4::func_0201e974() {
    Unk_0201e9d0_S c;
    Unk_0201e5a4_Ret t;
    func_0202d1d4(((u8 *)&nZ::data_021bee08[6]));
    if (unk_3c != NULL) {
        unk_3c->unk_08 = 1;
    }
    if (unk_ac) {
        (this->*(Unk_0201e5a4_RetFn)unk_ac)(&t);
    }
    c.unk_00 = t.unk_04;
    _ZN12Unk_020660f813func_02067a84EPhPv(unk_3c, &c, t.unk_00);
}
}

namespace F04 {
void Unk_0201e5a4::func_0201e914(Unk_0201e5a4_Out *out) {
    func_0202d184(unk_100, &unk_11e, 0x1e, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), data_020c7758.unk_00, 1, 0x11, 2);
    out->unk_00 = unk_100;
    out->unk_04 = unk_11e;
}
}

namespace F04 {
void Unk_0201e5a4::func_0201e87c() {
    s32 r4;
    if (unk_128 != 0) {
        r4 = _ZN12Unk_0208091c13func_02080dd8Ev(unk_128);
    } else {
        r4 = 0;
    }
    if (r4 + 0x100 > func_02063b8c(0x200)) {
        Unk_0201e9d0_S c;
        Unk_0201e5a4_Ret t;
        func_0202d1d4(((u8 *)&nZ::data_021bee08[7]));
        if (unk_ac) {
            (this->*(Unk_0201e5a4_RetFn)unk_ac)(&t);
        }
        c.unk_00 = t.unk_04;
        _ZN12Unk_020660f813func_02067a84EPhPv(unk_3c, &c, t.unk_00);
    } else {
        _ZN12Unk_020660f813func_02067a84EPhPv(unk_3c, &data_021edb5c, data_020c7758.unk_00);
    }
}
}

namespace F04 {
void Unk_0201e5a4::func_0201e81c(Unk_0201e5a4_Out *out) {
    func_0202d184(unk_100, &unk_11e, 0x1e, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), data_020c7758.unk_00, 1, 0x13, 2);
    out->unk_00 = unk_100;
    out->unk_04 = unk_11e;
}
}

namespace F04 {
void Unk_0201e5a4::func_0201e710() {
    u16 a[2];
    Unk_0201e710_Tmp obj;
    BOOL r;
    u32 r6 = func_0209750c();
    u32 r7 = _ZN12Unk_0209865c13func_02098750Ev(r6);
    s32 v = _ZN12Unk_02097d1c13func_02097edcEv(r7);
    if (v == -1) {
        v = 0;
    }
    if (func_0204b2d4(&unk_120) != 0) {
        a[1] = 0x1546;
        if (func_0204b25c(&unk_120) == func_0204b25c(&a[1])) {
            r = TRUE;
        } else {
            r = FALSE;
        }
    } else {
        if (unk_120 == 0x1546) {
            r = TRUE;
        } else {
            r = FALSE;
        }
    }
    if (r) {
        unk_198 = 0x1566;
    } else {
        _ZN12Unk_0206338013func_0206338cEii(&obj, data_020c7a68[func_02063b8c(3)], 0);
        func_02062f94(a, &obj, 0, 0, 1, 1, 0);
        unk_198 = a[0];
        func_02063388(&obj);
    }
    _ZN12Unk_02097d1c13func_02097f30EPtij(r7, &unk_198, v, 0);
    func_0203c42c(_ZN12Unk_0209865c13func_020986c8Ev(r6), &unk_198, 0, 1);
    func_02014e60(&unk_198, 0, 5, 0);
    if (unk_198 != 0xfff1) {
        func_0201578c(&unk_198, 0, 7);
    }
}
}

namespace F04 {
void Unk_0201e5a4::func_0201e6b0(Unk_0201e5a4_Out *out) {
    func_0202d184(unk_100, &unk_11e, 0x1e, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), data_020c7758.unk_00, 1, 0xf, 2);
    out->unk_00 = unk_100;
    out->unk_04 = unk_11e;
}
}

namespace F04 {
void Unk_0201e5a4::func_0201e5a4(u32 arg) {
    u32 r6 = unk_fc->unk_82c;
    u32 v = _ZN12Unk_0208581013func_02085828Ev(data_021ed24c);
    u32 r5 = 2;
    if (func_02020320(arg)) {
        func_0202d048(&unk_128, &unk_124, r6, 0);
        return;
    }
    if (func_0203f42c(0x11) == 6 && unk_128 != 0 && _ZN12Unk_0208091c13func_02080a74Ev(unk_128) != 0) {
        r5 = 3;
    }
    r5 = func_02063b8c(r5);
    if (unk_128 == 0 || _ZN12Unk_0208091c13func_02080a74Ev(unk_128) == 0 || r5 == 2) {
        func_0202d1d4(data_021be920);
    } else if (r5 == 0 && _ZN12Unk_02002fc813func_020030b4Ev(v) != 0) {
        func_0202d1d4(((u8 *)&nZ::data_021be920[1]));
    } else {
        func_0202d1d4(((u8 *)&nZ::data_021be920[2]));
    }
    if (unk_ac) {
        (this->*unk_ac)(arg);
    }
    func_0202d048(&unk_128, &unk_124, r6, 0);
    if (unk_128 != 0) {
        _ZN12Unk_0208091c13func_02080a98Ev(unk_128);
    }
}
}

namespace F03 {
void Unk_0201dc44::func_0201e4ac(Unk_0201dc44_Ret *out) {
    void *o = unk_fc->unk_82c;
    Unk_0201dc44_Id *p = _ZN12Unk_0208581013func_0208586cEv(data_021ed24c);
    s32 v = func_0203f42c(0x11);
    s32 a, b;
    if (v < 0) {
        v = 0;
    }
    if (v == 0) {
        a = 2;
        b = 3;
    } else if (v >= 1 && v <= 5) {
        a = 3;
        b = 5;
    } else if (_ZN12Unk_0209da4413func_0209e170Ej(data_021d7350, 0x11) && _ZN12Unk_02002fc813func_020030b4Ev(p)) {
        Unk_0201dc44_Id *q = (Unk_0201dc44_Id *)_ZN12Unk_0208086013func_020805c4Ev(o);
        if (p->unk_00 == q->unk_00 && func_02128930(p->unk_02, q->unk_02, 8) == 0 && p->unk_0b == q->unk_0b) {
            a = 1;
            b = 0xb;
        } else {
            a = 3;
            b = 8;
        }
        _ZN12Unk_020d771413func_020157b8Ejj(this, p, 0);
    } else {
        a = 2;
        b = 0x12;
    }
    func_0202d184(this, unk_100, &unk_11e, 0x1e, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), data_020c7930.a, 1, b, (u8)a);
    out->a = unk_100;
    out->b = unk_11e;
}
}

namespace F03 {
void Unk_0201dc44::func_0201e3f8(Unk_0201dc44_Ret *out) {
    Unk_0201dc44_Id *p = _ZN12Unk_0208581013func_02085828Ev(data_021ed24c);
    Unk_0201dc44_Id *q = (Unk_0201dc44_Id *)_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c);
    s32 x;
    if (p->unk_00 == q->unk_00 && func_02128930(p->unk_02, q->unk_02, 8) == 0 && p->unk_0b == q->unk_0b) {
        x = 0xc;
    } else {
        x = 0xf;
    }
    if (_ZN12Unk_02002fc813func_020030b4Ev(p)) {
        _ZN12Unk_020d771413func_020157b8Ejj(this, p, 1);
    }
    func_0202d184(this, unk_100, &unk_11e, 0x1e, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), data_020c7930.a, 1, x, data_020c7930.b);
    out->a = unk_100;
    out->b = unk_11e;
}
}

namespace F03 {
void Unk_0201dc44::func_0201e398(Unk_0201dc44_Ret *out) {
    func_0202d184(this, unk_100, &unk_11e, 0x1e, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), data_020c7930.a, 1, 0, data_020c7930.b);
    out->a = unk_100;
    out->b = unk_11e;
}
}

namespace F03 {
void Unk_0201dc44::func_0201e344() {
    Unk_0201dc44_Ret r;
    u8 b;
    _ZN12Unk_020d893813func_0202d1d4EP16Unk_020d8938_Tbl(this, ((u8 *)&nZ::data_021be920[3]));
    if (unk_ac) {
        (this->*unk_ac)(&r);
    }
    b = r.b;
    _ZN12Unk_020660f813func_02067a84EPhPv(unk_3c, &b, r.a);
}
}

namespace F03 {
void Unk_0201dc44::func_0201e33c() { _ZN12Unk_0201d2d013func_02029d84EP16Unk_0201d2d0_Out(this); }
}

namespace F03 {
void Unk_0201dc44::func_0201e334() { _ZN12Unk_0201f7d013func_0201fc48Ev(this); }
}

namespace F03 {
void Unk_0201dc44::func_0201e1f0(Unk_0201dc44_Ret *out) {
    void *o = unk_fc->unk_82c;
    Unk_0201dc44_Time t;
    u32 mn;
    u8 hi, lo;
    *(u32 *)&t = 0;
    *((u32 *)&t + 1) = 0;
    func_0209d498(&t);
    hi = t.unk_03;
    lo = t.unk_02;
    mn = t.unk_01;
    if (hi != 0x1f || lo >= 0x17) {
        if (_ZN12Unk_0201d2d013func_02020320EP16Unk_0201d2d0_Out(this, out)) {
            func_0202d048(this, &unk_128, &unk_124, o, 0);
            return;
        }
    }
    if (hi == 0x1f) {
        if (lo < 0x17) {
            _ZN12Unk_020d893813func_0202d1d4EP16Unk_020d8938_Tbl(this, data_021bec70);
        } else {
            _ZN12Unk_020d893813func_0202d1d4EP16Unk_020d8938_Tbl(this, ((u8 *)&nZ::data_021bec70[3]));
        }
    } else {
        Unk_0201dc44_Lim *q = func_020812e0(func_02003098(_ZN12Unk_0208086013func_020805c4Ev(o)));
        if (lo < q->unk_02 || (lo == q->unk_02 && mn < q->unk_03)) {
            _ZN12Unk_020d893813func_0202d1d4EP16Unk_020d8938_Tbl(this, ((u8 *)&nZ::data_021bec70[4]));
        } else if (unk_128 == 0 || _ZN12Unk_0208091c13func_02080a74Ev(unk_128) == 0) {
            _ZN12Unk_020d893813func_0202d1d4EP16Unk_020d8938_Tbl(this, ((u8 *)&nZ::data_021bec70[5]));
        } else {
            _ZN12Unk_020d893813func_0202d1d4EP16Unk_020d8938_Tbl(this, ((u8 *)&nZ::data_021bec70[6]));
        }
        _ZN12Unk_020d771413func_02015958Eijiii(this, t.unk_05 + 0x7d0, 0, 4, 0, 0);
    }
    if (unk_ac) {
        (this->*unk_ac)(out);
    }
    func_0202d048(this, &unk_128, &unk_124, o, 0);
    if (unk_128) {
        _ZN12Unk_0208091c13func_02080a98Ev(unk_128);
    }
}
}

namespace F03 {
void Unk_0201dc44::func_0201e1e8() { _ZN12Unk_0201d2d013func_0202b520EP16Unk_0201d2d0_Out(this); }
}

namespace F03 {
void Unk_0201dc44::func_0201e194() {
    Unk_0201dc44_Ret r;
    u8 b;
    _ZN12Unk_020d893813func_0202d1d4EP16Unk_020d8938_Tbl(this, ((u8 *)&nZ::data_021bec70[1]));
    if (unk_ac) {
        (this->*unk_ac)(&r);
    }
    b = r.b;
    _ZN12Unk_020660f813func_02067a84EPhPv(unk_3c, &b, r.a);
}
}

namespace F03 {
void Unk_0201dc44::func_0201e18c() { _ZN12Unk_0201d2d013func_02029d84EP16Unk_0201d2d0_Out(this); }
}

namespace F03 {
void Unk_0201dc44::func_0201e110() {
    Unk_0201e110_Buf buf;
    u8 *p = data_021be730;
    if ((func_02063b8c(10) & 1) == 0) {
        p = ((u8 *)&nZ::data_021bec70[2]);
    }
    func_0201c91c(this, &buf, 0, data_020c74fc, p);
    func_0201c91c(this, &buf, 1, data_020c7500, data_021be668);
    buf.unk_20 = 2;
    buf.unk_21 = buf.unk_20 - 1;
    _ZN12Unk_020d893813func_0201c870EPv(this, &buf);
    _ZN12Unk_020d893813func_0202d1c0EMS_FvvE(this, data_020d7e98);
    _ZN12Unk_020660f813func_020679c0Ei(unk_3c, 1);
}
}

namespace F03 {
void Unk_0201dc44::func_0201e08c(Unk_0201dc44_Ret *out) {
    Unk_0201dc44_Time t;
    s32 x;
    *(u32 *)&t = 0;
    *((u32 *)&t + 1) = 0;
    func_0209d498(&t);
    if (t.unk_02 < 0xc) {
        x = 0;
    } else if (t.unk_02 < 0x11) {
        x = 2;
    } else {
        x = 4;
    }
    func_0202d184(this, unk_100, &unk_11e, 0x1e, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), data_020c7710.a, 1, x, data_020c7710.b);
    out->a = unk_100;
    out->b = unk_11e;
}
}

namespace F03 {
void Unk_0201dc44::func_0201dff4(Unk_0201dc44_Ret *out) {
    Unk_0201dc44_Time t;
    s32 x;
    *(u32 *)&t = 0;
    *((u32 *)&t + 1) = 0;
    func_0209d498(&t);
    if (t.unk_02 < 0x17 || (t.unk_02 == 0x17 && t.unk_01 < 0x1e)) {
        x = 6;
    } else if (t.unk_01 < 0x37) {
        x = 8;
    } else if (t.unk_01 < 0x3b) {
        x = 10;
    } else {
        x = 12;
    }
    func_0202d184(this, unk_100, &unk_11e, 0x1e, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), data_020c7710.a, 1, x, data_020c7710.b);
    out->a = unk_100;
    out->b = unk_11e;
}
}

namespace F03 {
void Unk_0201dc44::func_0201df94(Unk_0201dc44_Ret *out) {
    func_0202d184(this, unk_100, &unk_11e, 0x1e, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), data_020c7710.a, 1, 0xe, data_020c7710.b);
    out->a = unk_100;
    out->b = unk_11e;
}
}

namespace F03 {
void Unk_0201dc44::func_0201df34(Unk_0201dc44_Ret *out) {
    func_0202d184(this, unk_100, &unk_11e, 0x1e, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), data_020c7710.a, 1, 0x10, data_020c7710.b);
    out->a = unk_100;
    out->b = unk_11e;
}
}

namespace F03 {
void Unk_0201dc44::func_0201ded4(Unk_0201dc44_Ret *out) {
    func_0202d184(this, unk_100, &unk_11e, 0x1e, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), data_020c7710.a, 1, 0x12, 3);
    out->a = unk_100;
    out->b = unk_11e;
}
}

namespace F03 {
void Unk_0201dc44::func_0201de80() {
    Unk_0201dc44_Ret r;
    u8 b;
    _ZN12Unk_020d893813func_0202d1d4EP16Unk_020d8938_Tbl(this, ((u8 *)&nZ::data_021bec70[7]));
    if (unk_ac) {
        (this->*unk_ac)(&r);
    }
    b = r.b;
    _ZN12Unk_020660f813func_02067a84EPhPv(unk_3c, &b, r.a);
}
}

namespace F03 {
void Unk_0201dc44::func_0201de78() { _ZN12Unk_0201d2d013func_02029d84EP16Unk_0201d2d0_Out(this); }
}

namespace F03 {
void Unk_0201dc44::func_0201de70() { _ZN12Unk_0201f7d013func_0201fc48Ev(this); }
}

namespace F03 {
void Unk_0201dc44::func_0201de3c(Unk_0201dc44_Ret *out) {
    _ZN12Unk_0201d2d013func_020209ccEv(this);
    _ZN12Unk_0201d2d013func_02021ce4Ev(this);
    out->a = unk_100;
    out->b = unk_11e;
    _ZN12Unk_020d893813func_0202d20cEv(this);
}
}

namespace F03 {
void Unk_0201dc44::func_0201de08(Unk_0201dc44_Ret *out) {
    _ZN12Unk_0201d2d013func_020209ccEv(this);
    _ZN12Unk_0202134013func_020218c4Ev(this);
    out->a = unk_100;
    out->b = unk_11e;
    _ZN12Unk_020d893813func_0202d20cEv(this);
}
}

namespace F03 {
void Unk_0201dc44::func_0201ddd4(Unk_0201dc44_Ret *out) {
    _ZN12Unk_0201d2d013func_020209ccEv(this);
    _ZN12Unk_0202134013func_020219ccEv(this);
    out->a = unk_100;
    out->b = unk_11e;
    _ZN12Unk_020d893813func_0202d20cEv(this);
}
}

namespace F03 {
void Unk_0201dc44::func_0201dd3c(Unk_0201dc44_Ret *out) {
    func_0202d184(this, unk_100, &unk_11e, 0x1e, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), data_020c78e8.a, 1, 0, data_020c78e8.b);
    out->a = unk_100;
    out->b = unk_11e;
    func_0202d048(this, &unk_128, &unk_124, unk_fc->unk_82c, 0);
    unk_f4 = data_020d7df0;
}
}

namespace F03 {
void Unk_0201dc44::func_0201dd1c() {
    _ZN12Unk_020d771013func_02014f38Ej(this, 0);
    _ZN12Unk_020d893813func_0202d33cEMS_FvvE(this, data_020d7ae8);
}
}

namespace F03 {
void Unk_0201dc44::func_0201dca0() {
    volatile Unk_0201dca0_Vec v;
    Unk_0201dc44_Ctx *volatile *pc = &unk_fc;
    Unk_0201dc44_Vec *pv = &(*pc)->unk_5c;
    s32 x, z;
    v.x = x = pv->x;
    v.y = pv->y;
    v.z = z = pv->z;
    v.x = x + 0x1e00;
    z -= 0x2800;
    v.z = z;
    _ZN12Unk_0201985813func_020196b4Ejiiissiitt((*pc)->unk_564, 2, 2, v.x, z, 0, 0, 0, 0, data_020c6cc8, 0);
    unk_ec = data_020d7de0;
}
}

namespace F03 {
void Unk_0201dc44::func_0201dc44() {
    if (_ZN12Unk_0201985813func_020197a8Ev(unk_fc->unk_564) == 2) {
        if (_ZN12Unk_0201985813func_02019790Ev(unk_fc->unk_564)) {
            _ZN12Unk_0201985813func_02019614Ejt(unk_fc->unk_564, 2, data_020c6cc8);
            unk_ec = data_020d7aa8;
        }
    }
}
}

namespace F02 {
void Unk_0201d2d0::func_0201db88() {
    Unk_0201d2d0_Out out;
    u8 b;
    Unk_0201d2d0_Vec v;
    if (_ZN12Unk_0201985813func_020197a8Ev(&unk_fc->unk_564) == 0 && _ZN12Unk_0201985813func_02019790Ev(&unk_fc->unk_564) != 0) {
        v = unk_fc->unk_5c;
        v.y += 0x2000;
        func_0203a680(&v);
        _ZN12Unk_020d893813func_0202d1d4EP16Unk_020d8938_Tbl(this, data_021beb08);
        if (unk_ac) {
            (this->*unk_ac)(&out);
        }
        b = out.unk_04;
        _ZN12Unk_020660f813func_02067a84EPhPv(unk_3c, &b, out.unk_00);
        _ZN12Unk_020d771013func_02014f74Ev(this);
        unk_ec = __ptmf_null;
    }
}
}

namespace F02 {
void Unk_0201d2d0::func_0201db60() {
    func_02034d70(0x12);
    func_02034dd0(0xc, 0, 0xb);
    func_02034e10(0xd, 0x2f, 0x7f, 1);
}
}

namespace F02 {
void Unk_0201d2d0::func_0201db44() {
    func_02034d84(0x2f);
    func_02034dd0(0xc, 0x60, 0x79);
}
}

namespace F02 {
void Unk_0201d2d0::func_0201d9e0(Unk_0201d2d0_Out *out) {
    void *r7;
    Unk_0201d9e0_Rec *r4;
    s32 i;
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), data_020c78e8.unk_00, 1, 1, data_020c78e8.unk_04);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
    if (func_0209750c() != 0) {
        r7 = _ZN12Unk_0209865c13func_0209888cEv(func_0209750c());
    } else {
        r7 = 0;
    }
    if (unk_fc->unk_82c != 0) {
        r4 = (Unk_0201d9e0_Rec *)_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c);
    } else {
        r4 = 0;
    }
    unk_190 = 0;
    unk_194 = 0;
    if ((u32)data_021dfd8c != 0 && r7 != 0 && _ZN12Unk_020940a013func_02094218Ev(r7) != 0 && r4 != 0 && _ZN12Unk_02002fc813func_020030b4Ev(r4) != 0) {
        for (i = 0; i < 8; i++) {
            void *v = func_0207bf60(data_021dfd8c, i);
            if (v != 0 && _ZN12Unk_02002fc813func_020030b4Ev(_ZN12Unk_0208086013func_020805c4Ev(v)) != 0) {
                Unk_0201d9e0_Rec *w = (Unk_0201d9e0_Rec *)_ZN12Unk_0208086013func_020805c4Ev(v);
                if (w->unk_00 != r4->unk_00 || func_02128930(w->unk_02, r4->unk_02, 8) != 0 || w->unk_0b != r4->unk_0b) {
                    if (func_0207f854(v, r7) != 0 && _ZN12Unk_0208091c13func_02080dd8Ev() >= 0x40) {
                        unk_190 |= 1 << i;
                        unk_194++;
                    }
                }
            }
        }
    }
    if (unk_194 == 1) {
        unk_190 = 0;
        unk_194 = 0;
    }
    unk_f4 = data_020d7d70;
}
}

namespace F02 {
void Unk_0201d2d0::func_0201d90c() {
    u8 buf[2];
    u16 h;
    Unk_0201d2d0_Out out;
    if (unk_194 >= 2) {
        _ZN12Unk_020d893813func_0202d1d4EP16Unk_020d8938_Tbl(this, ((u8 *)&nZ::data_021beb08[1]));
        if (unk_ac) {
            (this->*unk_ac)(&out);
        }
        buf[0] = out.unk_04;
        _ZN12Unk_020660f813func_02067a84EPhPv(unk_3c, &buf[0], out.unk_00);
    } else if (unk_194 == 1) {
        _ZN12Unk_020d893813func_0202d1d4EP16Unk_020d8938_Tbl(this, ((u8 *)&nZ::data_021beb08[2]));
        if (unk_ac) {
            (this->*unk_ac)(&out);
        }
        buf[1] = out.unk_04;
        _ZN12Unk_020660f813func_02067a84EPhPv(unk_3c, &buf[1], out.unk_00);
    } else {
        h = 0x3818;
        _ZN12Unk_020d771013func_02014e60EPtjjj(this, &h, 0, 5, 0);
        func_0202d33c(data_020d7c88);
    }
}
}

namespace F02 {
void Unk_0201d2d0::func_0201d88c() {
    u8 b;
    u16 h;
    Unk_0201d2d0_Out out;
    void *p;
    h = 0x3818;
    func_02099014(&h, 0);
    p = func_0209750c();
    _ZN12Unk_02097ff413func_020982dcEj(p, (u8)(u32)func_0209cf0c());
    _ZN12Unk_020d893813func_0202d1d4EP16Unk_020d8938_Tbl(this, ((u8 *)&nZ::data_021beb08[4]));
    if (unk_ac) {
        (this->*unk_ac)(&out);
    }
    b = out.unk_04;
    _ZN12Unk_020660f813func_02067a84EPhPv(unk_3c, &b, out.unk_00);
}
}

namespace F02 {
void Unk_0201d2d0::func_0201d7d4(Unk_0201d2d0_Out *out) {
    s32 i;
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), data_020c78e8.unk_00, 1, 5, data_020c78e8.unk_04);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
    for (i = 0; i < 8; i++) {
        if ((unk_190 >> i) & 1) {
            _ZN12Unk_020d771413func_020157b8Ejj(this, _ZN12Unk_0208086013func_020805c4Ev(func_0207bf60(data_021dfd8c, i)), 0);
            unk_190 &= ~(1 << i);
            unk_194--;
            break;
        }
    }
}
}

namespace F02 {
void Unk_0201d2d0::func_0201d71c(Unk_0201d2d0_Out *out) {
    s32 i;
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), data_020c78e8.unk_00, 1, 6, data_020c78e8.unk_04);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
    for (i = 0; i < 8; i++) {
        if ((unk_190 >> i) & 1) {
            _ZN12Unk_020d771413func_020157b8Ejj(this, _ZN12Unk_0208086013func_020805c4Ev(func_0207bf60(data_021dfd8c, i)), 0);
            unk_190 &= ~(1 << i);
            unk_194--;
            break;
        }
    }
}
}

namespace F02 {
void Unk_0201d2d0::func_0201d6c8() {
    u8 b;
    Unk_0201d2d0_Out out;
    _ZN12Unk_020d893813func_0202d1d4EP16Unk_020d8938_Tbl(this, ((u8 *)&nZ::data_021beb08[3]));
    if (unk_ac) {
        (this->*unk_ac)(&out);
    }
    b = out.unk_04;
    _ZN12Unk_020660f813func_02067a84EPhPv(unk_3c, &b, out.unk_00);
}
}

namespace F02 {
void Unk_0201d2d0::func_0201d668(Unk_0201d2d0_Out *out) {
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), data_020c78e8.unk_00, 1, 7, data_020c78e8.unk_04);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}
}

namespace F02 {
void Unk_0201d2d0::func_0201d634() {
    u16 h = 0x3818;
    _ZN12Unk_020d771013func_02014e60EPtjjj(this, &h, 0, 5, 0);
    func_0202d33c(data_020d7d20);
}
}

namespace F02 {
void Unk_0201d2d0::func_0201d5d4(Unk_0201d2d0_Out *out) {
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), data_020c78e8.unk_00, 1, 2, data_020c78e8.unk_04);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}
}

namespace F02 {
void Unk_0201d2d0::func_0201d568() {
    Unk_0201d568_S s;
    func_0201c95c(this, &s);
    func_0201c938(this, &s, 0, 0x32, 0x32, ((u8 *)&nZ::data_021beb08[5]));
    func_0201c938(this, &s, 1, 0x33, 0x33, ((u8 *)&nZ::data_021beb08[6]));
    s.unk_20 = 2;
    s.unk_21 = -1;
    _ZN12Unk_020d893813func_0201c870EPv(this, &s);
    func_0202d1c0(data_020d7d18);
    _ZN12Unk_020660f813func_020679c0Ei(unk_3c, 1);
}
}

namespace F02 {
void Unk_0201d2d0::func_0201d508(Unk_0201d2d0_Out *out) {
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), data_020c78e8.unk_00, 1, 3, data_020c78e8.unk_04);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}
}

namespace F02 {
void Unk_0201d2d0::func_0201d4a8(Unk_0201d2d0_Out *out) {
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), data_020c78e8.unk_00, 1, 4, data_020c78e8.unk_04);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}
}

namespace F02 {
void Unk_0201d2d0::func_0201d420(Unk_0201d2d0_Out *out) {
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), data_020c75c8.unk_00, data_020c75c8.unk_04, 0, 0);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
    if (unk_128 == 0) {
        unk_138 = 1;
    }
    unk_c4 = data_020d7990;
}
}

namespace F02 {
void Unk_0201d2d0::func_0201d3ec() {
    func_0202d048(this, &unk_128, &unk_124, unk_fc->unk_82c, 0);
}
}

namespace F02 {
void Unk_0201d2d0::func_0201d378(Unk_0201d2d0_Out *out) {
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), data_020c7938.unk_00, data_020c7938.unk_04, 0, 0);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
    unk_c4 = data_020d7c68;
}
}

namespace F02 {
void Unk_0201d2d0::func_0201d344() {
    func_0202d048(this, &unk_128, &unk_124, unk_fc->unk_82c, 0);
}
}

namespace F02 {
void Unk_0201d2d0::func_0201d2d0(Unk_0201d2d0_Out *out) {
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(_ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c)), data_020c7798.unk_00, data_020c7798.unk_04, 0, 0);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
    unk_c4 = data_020d7958;
}
}

namespace F01 {
s32 Unk_020d8938::func_0201d250() {
    u16 buf = unk_120;
    if (unk_198 != 0xfff1) {
        buf = unk_198;
    }
    if (buf != 0xfff1) {
        s32 r4 = func_0209750c();
        s32 r6 = _ZN12Unk_0209865c13func_02098750Ev();
        s32 r2 = _ZN12Unk_02097d1c13func_02097edcEv();
        if (r2 != -1) {
            _ZN12Unk_02097d1c13func_02097f30EPtij(r6, &buf, r2, 0);
            func_0203c42c(_ZN12Unk_0209865c13func_020986c8Ev(r4), &buf, 0, 1);
            func_02014e60(&buf, 0, 5, 0);
            return 1;
        }
    }
    return 0;
}
}

namespace F01 {
s32 Unk_020d8938::func_0201d184() {
    void *r4;
    if (unk_134 != NULL) {
        r4 = _ZN12Unk_0208086013func_020805acEv(unk_fc->unk_82c);
    } else {
        s32 r6 = _ZN12Unk_0208086013func_020805c4Ev(unk_fc->unk_82c);
        Unk_020ddf2c l18;
        Unk_020ddefc l78;
        Unk_020ddf14 l44;
        u8 v = 0;
        u8 b;
        u32 x14;
        r4 = data_021beee0;
        if (unk_128 != NULL) {
            v = _ZN12Unk_0208091c13func_02080accEv(unk_128);
        }
        b = v;
        func_0203cfb8(&l18, &l78, &l44, &x14, &b, ((u8 *)"ap_secret"));
        func_02065818(r4, &l18, &l78, &l44, x14, ((u8 *)""), r6, r6);
    }
    func_02015144(r4, 0);
    func_020151d0(5);
    return 1;
}
}

namespace F01 {
s32 Unk_020d8938::func_0201d160() {
    if (unk_134 != NULL) {
        func_02014578(unk_134 + 0x5c);
        return 1;
    }
    return 0;
}
}

namespace F01 {
s32 Unk_020d8938::func_0201d0c4() {
    if (unk_19c > 0 && unk_120 != 0xfff1) {
        func_0209750c();
        s32 r4 = _ZN12Unk_0209865c13func_02098750Ev();
        s32 r2 = func_02098eb0(&unk_120);
        if (r2 >= 0) {
            u16 buf[2];
            buf[0] = 0xfff1;
            _ZN12Unk_02097d1c13func_02097f30EPtij(r4, buf, r2, 0);
            func_02097a48(r4, unk_19c, 1);
            func_02026968(&buf[1], unk_19c);
            unk_198 = buf[1];
            func_02014e60(&unk_198, 0, 5, 0);
            _ZN12Unk_020d893813func_0202d33cEMS_FvvE(this, (*(void (Unk_020d8938::**)())nZ::data_020d7bb8));
            return 1;
        }
    }
    return 0;
}
}

namespace F01 {
void Unk_020d8938::func_0201d060() {
    void *r4 = unk_fc->unk_82c;
    func_02014ce4(&unk_120, 0, 5, 0);
    if (r4 != NULL) {
        if (unk_120 != 0xfff1) {
            func_0207cfb8(r4, &unk_120);
            if (unk_128 != NULL) {
                _ZN12Unk_0208091c13func_02080b78EPt(unk_128, &unk_120);
            }
        }
    }
    _ZN12Unk_020660f813func_02067a78Ev(unk_3c);
}
}

namespace F01 {
s32 Unk_020d8938::func_0201cfd8() {
    if (unk_198 != 0xfff1 && unk_120 != 0xfff1) {
        s32 r4 = func_0209750c();
        s32 r6 = _ZN12Unk_0209865c13func_02098750Ev();
        s32 r2 = func_02098eb0(&unk_120);
        if (r2 >= 0) {
            _ZN12Unk_02097d1c13func_02097f30EPtij(r6, &unk_198, r2, 0);
            func_0203c42c(_ZN12Unk_0209865c13func_020986c8Ev(r4), &unk_198, 0, 1);
            func_02014e60(&unk_198, 0, 5, 0);
            _ZN12Unk_020d893813func_0202d33cEMS_FvvE(this, (*(void (Unk_020d8938::**)())nZ::data_020d7b90));
            return 1;
        }
    }
    return 0;
}
}

namespace F01 {
void Unk_020d8938::func_0201cf74() {
    void *r4 = unk_fc->unk_82c;
    func_02014ce4(&unk_120, 0, 5, 0);
    if (r4 != NULL) {
        if (unk_120 != 0xfff1) {
            func_0207cfb8(r4, &unk_120);
            if (unk_128 != NULL) {
                _ZN12Unk_0208091c13func_02080b78EPt(unk_128, &unk_120);
            }
        }
    }
    _ZN12Unk_020660f813func_02067a78Ev(unk_3c);
}
}

namespace F01 {
s32 Unk_020d8938::func_0201cec0() {
    if (unk_19c > 0 && unk_198 != 0xfff1) {
        s32 r6 = func_0209750c();
        s32 r4 = _ZN12Unk_0209865c13func_02098750Ev();
        s32 r2 = _ZN12Unk_02097d1c13func_02097edcEv();
        if (r2 >= 0) {
            _ZN12Unk_02097d1c13func_02097f30EPtij(r4, &unk_198, r2, 0);
            func_0203c42c(_ZN12Unk_0209865c13func_020986c8Ev(r6), &unk_198, 0, 1);
            if (unk_19a == 1) {
                func_0207cf10(unk_fc->unk_82c, &unk_198);
            }
            func_02097a48(r4, -unk_19c, 1);
            func_02014e60(&unk_198, 0, 5, 0);
            _ZN12Unk_020d893813func_0202d33cEMS_FvvE(this, (*(void (Unk_020d8938::**)())nZ::data_020d7f38));
            return 1;
        }
    }
    return 0;
}
}

namespace F01 {
void Unk_020d8938::func_0201ce84() {
    u16 tmp;
    func_02026968(&tmp, unk_19c);
    unk_120 = tmp;
    func_02014ce4(&unk_120, 0, 5, 0);
    _ZN12Unk_020660f813func_02067a78Ev(unk_3c);
}
}

namespace F01 {
s32 Unk_020d8938::func_0201cdf8() {
    if (unk_198 != 0xfff1) {
        s32 r4 = func_0209750c();
        s32 r6 = _ZN12Unk_0209865c13func_02098750Ev();
        s32 r2 = _ZN12Unk_02097d1c13func_02097edcEv();
        if (r2 >= 0) {
            _ZN12Unk_02097d1c13func_02097f30EPtij(r6, &unk_198, r2, 0);
            func_0203c42c(_ZN12Unk_0209865c13func_020986c8Ev(r4), &unk_198, 0, 1);
            if (unk_19a == 1) {
                func_0207cf10(unk_fc->unk_82c, &unk_198);
            }
            func_02014e60(&unk_198, 0, 5, 0);
            return 1;
        }
    }
    return 0;
}
}

namespace F01 {
s32 Unk_020d8938::func_0201cde0() {
    func_0203cb80(1);
    func_0203ca94();
    return 1;
}
}

namespace F01 {
s32 Unk_020d8938::func_0201cdc8() {
    func_0203cb80(0);
    func_0203ca94();
    return 1;
}
}

namespace F01 {
s32 Unk_020d8938::func_0201cd9c() {
    func_02015170(0x32, 0);
    func_020151d0(2);
    _ZN12Unk_020d893813func_0202d33cEMS_FvvE(this, (*(void (Unk_020d8938::**)())nZ::data_020d79a0));
    return 1;
}
}

namespace F01 {
void Unk_020d8938::func_0201cd48() {
    u8 buf[2];
    func_0209750c();
    u8 *p = _ZN12Unk_02097ff413func_02098308Ev();
    u32 r = func_02081328(p[1], p[0]);
    func_02015878(p[1], 0);
    func_02015848(p[0], 1);
    buf[0] = r;
    buf[1] = 0;
    func_0201577c(2, buf, ((u8 *)"st_constellation"), buf + 1);
}
}

namespace F01 {
s32 Unk_020d8938::func_0201cd14() {
    if (unk_168 != 0) {
        return (this->*unk_168)();
    }
    return 0;
}
}

namespace F01 {
s32 Unk_020d8938::func_0201cce0() {
    if (unk_170 != 0) {
        return (this->*unk_170)();
    }
    return 0;
}
}

namespace F01 {
s32 Unk_020d8938::func_0201ccac() {
    if (unk_178 != 0) {
        return (this->*unk_178)();
    }
    return 0;
}
}

namespace F01 {
s32 Unk_020d8938::func_0201cc78() {
    if (unk_180 != 0) {
        return (this->*unk_180)();
    }
    return 0;
}
}

namespace F01 {
s32 Unk_020d8938::func_0201cc44() {
    if (unk_188 != 0) {
        return (this->*unk_188)();
    }
    return 0;
}
}

namespace F01 {
s32 Unk_020d8938::func_0201cb48(u32 idx) {
    static Unk_020d8938_Fn tbl[17] = {
        0, (*(s32 (Unk_020d8938::**)())nZ::data_020d7b28), 0, 0, 0, 0, 0, (*(s32 (Unk_020d8938::**)())nZ::data_020d7b00),
        0, 0, 0, 0, (*(s32 (Unk_020d8938::**)())nZ::data_020d7a20), (*(s32 (Unk_020d8938::**)())nZ::data_020d7af0), (*(s32 (Unk_020d8938::**)())nZ::data_020d7d50),
        (*(s32 (Unk_020d8938::**)())nZ::data_020d7cf0), (*(s32 (Unk_020d8938::**)())nZ::data_020d7df8)};
    if (idx < 17) {
        if (tbl[idx] != 0) {
            return (this->*tbl[idx])();
        }
    }
    return 0;
}
}

namespace nZ {
extern "C" {
Unk_021be8c0 data_021befd4[13];
void * data_020d79c0[2] = {
    (void *)_ZN12Unk_0201d2d013func_0202475cEv, 0,
};
const void *const data_020c7928[2] = {
    (void *)data_020d833c, (void *)0x1,
};
const void *const data_020c7920[2] = {
    (void *)data_020d7eb8, (void *)0x3,
};
const void *const data_020c76f8[2] = {
    (void *)data_020d7e90, (void *)0x2,
};
const void *const data_020c76f0[2] = {
    (void *)data_020d78d0, (void *)0x3,
};
char data_020d818c[9] = "q01_nwin";
char data_020d7e90[8] = "ap_item";
const void *const data_020c75c0[2] = {
    (void *)data_020d78c0, (void *)0x3,
};
const void *const data_020c78f8[2] = {
    (void *)data_020d8534, (void *)0x4,
};
const void *const data_020c76c0[2] = {
    (void *)data_020d7d68, (void *)0x3,
};
char data_020d81a4[9] = "ai_anger";
void * data_020d7a78[2] = {
    (void *)_ZN12Unk_0202134013func_020214ecEPPvi, 0,
};
Unk_021be8c0 data_021bed30[9];
void * data_020d7e40[2] = {
    (void *)_ZN12Unk_0201d2d013func_02024fdcEv, 0,
};
void * data_020d7e28[2] = {
    (void *)_ZN12Unk_0201d2d013func_02025270Ev, 0,
};
char data_020d81d4[9] = "ai_shop3";
u32 data_020d7b08[2] = {
    0x00000000, 0x00000003,
};
void * data_020d7de0[2] = {
    (void *)_ZN12Unk_0201dc4413func_0201dc44Ev, 0,
};
char data_020d83a8[10] = "ai_poison";
const void *const data_020c7668[2] = {
    (void *)data_020d803c, (void *)0x2,
};
const void *const data_020c7798[2] = {
    (void *)data_020d8030, (void *)0x5,
};
char data_020d8210[9] = "ai_rain2";
const void *const data_020c77d8[2] = {
    (void *)data_020d8294, (void *)0x1,
};
char data_020d824c[9] = "tsu_item";
char data_020d78c8[7] = "ai_run";
void * data_020d7b20[2] = {
    (void *)_ZN12Unk_0201d2d013func_02024d38Ev, 0,
};
void * data_020d7d28[2] = {
    (void *)_ZN12Unk_02027a3413func_02028058EP16Unk_02027a34_Outj, 0,
};
}
}

namespace F01 {
void Unk_020d8938::vfunc_10(u32 a) {
    if (func_0201cb48(a) == 0) {
        if (unk_b4 != 0) {
            (this->*unk_b4)(a);
            unk_b4 = 0;
        }
    }
}
}

namespace F01 {
void Unk_020d8938::vfunc_14(u32 a) {
    volatile u8 v = *((u8 *)unk_3c + 0x19f7);
    if (func_0201cb48(a) == 0) {
        if (unk_156 != 0) {
            func_0200402c();
            unk_156 = 0;
        }
        u8 w = v;
        if (w == data_021edb60) {
            if (unk_bc != 0) {
                (this->*unk_bc)(a);
            }
        } else if (w == data_021edb5c) {
            if (unk_c4 != 0) {
                (this->*unk_c4)(a);
                unk_c4 = 0;
            }
        }
    }
    if (v == data_021edb5c) {
        if (unk_128 != NULL) {
            func_0207d0f4(unk_fc->unk_82c, unk_128, 0);
            if (unk_124 != -1) {
                func_0207790c(unk_fc->unk_82c, unk_124, _ZN12Unk_0208091c13func_02080b40Ev(unk_128));
            }
            if (unk_fc->unk_82c != NULL) {
                func_0207c55c(unk_fc->unk_82c, 0);
            }
        }
        if (unk_130 != NULL) {
            if (_ZN12Unk_020d893813func_0201c7f8Ev(unk_fc) != NULL) {
                func_0207d0f4(_ZN12Unk_020d893813func_0201c7f8Ev(unk_fc)->unk_82c, unk_130, 0);
            }
        }
    }
}
}

namespace F00 {
extern "C" void func_0201c95c(u32 a, Unk_0201c870_Tbl *t) {
    for (s32 i = 0; i < 5; i++) {
        t->range[i][0] = 0;
        t->range[i][1] = 0;
        t->val[i] = 0;
    }
    t->count = 0;
    t->unk_21 = -1;
}
}

namespace F00 {
extern "C" void func_0201c938(u32 a, Unk_0201c870_Tbl *t, u32 i, u8 lo, u8 hi, s32 val) {
    t->range[i][0] = lo;
    t->range[i][1] = hi;
    t->val[i] = val;
}
}

namespace F00 {
extern "C" void func_0201c91c(u32 a, Unk_0201c870_Tbl *t, u32 i, const u8 *r, s32 val) {
    func_0201c938(a, t, i, r[0], r[1], val);
}
}

namespace F00 {
void Unk_020d8938::func_0201c8fc() {
    for (s32 i = 0; i < 5; i++) {
        unk_13c[i] = 0;
    }
}
}

namespace F00 {
void Unk_020d8938::func_0201c870(void *t_) {
    Unk_0201c870_Tbl *t = (Unk_0201c870_Tbl *)t_;
    void *h = _ZN12Unk_020d771413func_02015a5cEv(this);
    if (h != NULL) {
        func_0201c8fc();
        _ZN12Unk_020aa3b813func_020aa680Eii(h, t->count, t->unk_21);
        for (s32 i = 0; i < t->count; i++) {
            u8 r = t->range[i][0] + func_02063b8c(t->range[i][1] - t->range[i][0] + 1);
            _ZN12Unk_020aa3b813func_020aa638EiPKhiS1_PKci(h, i, &r, 0, data_021edb60, (const char *)0, 0);
            unk_13c[i] = t->val[i];
        }
        _ZN12Unk_020aa3b813func_020aa608Ev(h);
    }
}
}

namespace F00 {
void Unk_020d8938::vfunc_18(u32 a) {
    if (unk_cc) {
        void *h = _ZN12Unk_020d771413func_02015a5cEv(this);
        s32 x;
        if (h != NULL) {
            x = _ZN12Unk_020aa3b813func_020aa514Ev(h);
        } else {
            x = -1;
        }
        (this->*unk_cc)(a, x);
        unk_cc = *(Unk_020d8938_Fn *)__ptmf_null;
    }
}
}

namespace F00 {
void Unk_020d8938::func_0201c804(u32 v) { unk_644 = v; }
}

namespace F00 {
u32 Unk_020d8938::func_0201c7f8() { return unk_644; }
}

namespace F00 {
void Unk_020d8938::func_0201c7ec(u8 v) { unk_648 = v; }
}

namespace F00 {
u8 Unk_020d8938::func_0201c7e0() { return unk_648; }
}

namespace F00 {
s32 Unk_020d8938::vfunc_144() { return 0; }
}

namespace F00 {
s32 Unk_020d8938::vfunc_148() { return 0; }
}

namespace F00 {
s32 Unk_020d8938::vfunc_14c() { return 0; }
}

namespace F00 {
BOOL Unk_020d8938::func_0201c7c0() {
    if (unk_644 != 0) {
        return TRUE;
    }
    return FALSE;
}
}

namespace F00 {
void Unk_020d8938::func_0201c790() {
    unk_640 = 0xb;
    if (_ZN12Unk_020cbb1813func_02072e88Ei(data_020cbb18, data_020cbb18->unk_64) == 0) {
        unk_640 = func_02079fd8();
    }
}
}

namespace F00 {
u8 Unk_020d8938::func_0201c784() { return unk_640; }
}

namespace F00 {
extern "C" void *func_0201c774(void *p) {
    func_020f440c(p);
    return p;
}
}

namespace F00 {
extern "C" void *func_0201c764(void *p) {
    func_020f43fc(p);
    return p;
}
}

namespace F00 {
void Unk_0201c078::func_0201c724() {
    unk_59 = 0;
    unk_40 = 5;
    unk_44 = 5;
    unk_48 = 0;
    unk_4c = *(Unk_0201c078_State *)__ptmf_null;
    func_0201c668();
    unk_58 = 0;
    unk_5a = 0;
}
}

namespace F00 {
void Unk_0201c078::func_0201c704() {
    func_0201c724();
    _ZN12Unk_02003c3013func_02003eccEv(this);
    unk_5a = 1;
    unk_59 = 1;
}
}

namespace F00 {
void Unk_0201c078::func_0201c6e4() {
    if (func_0201c6d4()) {
        _ZN12Unk_02003c3013func_02003e50Ev(this);
    }
    unk_59 = 0;
}
}

namespace F00 {
BOOL Unk_0201c078::func_0201c6d4() {
    if (unk_59 != 0) {
        return TRUE;
    }
    return FALSE;
}
}

namespace F00 {
void Unk_0201c078::func_0201c678(Unk_020d8938 *s, u32 mode) {
    s32 r = s->vfunc_64();
    if (mode == 4 && r != 0) {
        _ZN12Unk_0208086013func_020805c4Ev();
        s32 t = func_02003098();
        if (t == 0 || t == 3) {
            mode = 3;
        } else {
            mode = 2;
        }
    }
    _ZN12Unk_0201ad2013func_0201ad34Ei(((void *)((u8 *)(s) + (0x2a0))), data_020c7aa4[mode]);
    _ZN12Unk_0201ad2013func_0201ad30Ei(((void *)((u8 *)(s) + (0x2a0))), data_020c7ab8[mode]);
}
}

namespace F00 {
void Unk_0201c078::func_0201c668() {
    unk_54 = 5;
    unk_56 = 0;
}
}

namespace F00 {
void Unk_0201c078::func_0201c614(u32 a, s32 b) {
    if (_ZN12Unk_020cbb1813func_02072e88Ei(data_020cbb18, data_020cbb18->unk_64) == 0) {
        if (a < 5) {
            u16 t = b * 0x4b0;
            if (a == unk_54) {
                unk_56 = unk_56 + t;
            } else {
                unk_54 = a;
                unk_56 = t;
            }
        }
    }
}
}

namespace F00 {
void Unk_0201c078::func_0201c5f0() {
    if (_ZN12Unk_020cbb1813func_02072e88Ei(data_020cbb18, data_020cbb18->unk_64) == 0) {
        unk_58 = 1;
    }
}
}

namespace F00 {
void Unk_0201c078::func_0201c594(Unk_020d8938 *s, u32 a, u32 b) {
    if (func_0201c554()) {
        u32 v[3];
        s16 h;
        v[0] = *(u32 *)((void *)((u8 *)(s) + (0x478)));
        v[1] = *(u32 *)((void *)((u8 *)(s) + (0x47c)));
        v[2] = *(u32 *)((void *)((u8 *)(s) + (0x480)));
        h = *(s16 *)((void *)((u8 *)(s) + (0x8e)));
        func_02003e70(this, b, 0x7f, 0);
        func_02090330(a, v, &h, 0);
    }
}
}

namespace F00 {
void Unk_0201c078::func_0201c574(Unk_020d8938 *s) {
    Unk_0201c574_Vec v;
    Unk_0201c574_Vec *p = (Unk_0201c574_Vec *)((void *)((u8 *)(s) + (0x5c)));
    v = *p;
    _ZN12Unk_02003c4013func_02003e80EP16Unk_02003a6c_Vec(this, &v);
}
}

namespace F00 {
void Unk_0201c078::func_0201c56c() { unk_5a = 1; }
}

namespace F00 {
void Unk_0201c078::func_0201c564() { unk_5a = 0; }
}

namespace F00 {
BOOL Unk_0201c078::func_0201c554() {
    if (unk_5a != 0) {
        return TRUE;
    }
    return FALSE;
}
}

namespace F00 {
BOOL Unk_0201c078::func_0201c510(Unk_020d8938 *s) {
    s32 v = _ZN12Unk_02015b8c13func_02015e48Ej(((void *)((u8 *)(s) + (0x334))), 0);
    const u32 *p = data_020c7aa4;
    const u32 *q = data_020c7ab8;
    for (s32 i = 0; i < 5; p++, q++, i++) {
        if (v == *p || v == *q) {
            return TRUE;
        }
    }
    return FALSE;
}
}

namespace F00 {
void Unk_0201c078::func_0201c4fc(Unk_020d8938 *s) { func_0201c594(s, 0x5a, 0x7b); }
}

namespace F00 {
void Unk_0201c078::func_0201c4e8(Unk_020d8938 *s) { func_0201c594(s, 0x5b, 0x7b); }
}

namespace F00 {
BOOL Unk_0201c078::func_0201c4cc(Unk_020d8938 *s) {
    unk_48 = 0;
    unk_4c = (*(void (Unk_0201c078::**)(Unk_020d8938 *s))nZ::data_020d7e80);
    return TRUE;
}
}

namespace F00 {
void Unk_0201c078::func_0201c474(Unk_020d8938 *s) {
    if (func_0201c510(s)) {
        if (unk_48 == 0) {
            func_0201c4fc(s);
        } else if (unk_48 == 0x14) {
            func_0201c4e8(s);
        }
        unk_48 = unk_48 + 1;
        if (unk_48 >= 0x28) {
            unk_48 = 0;
        }
    }
}
}

namespace F00 {
void Unk_0201c078::func_0201c460(Unk_020d8938 *s) { func_0201c594(s, 0x5c, 0x83); }
}

namespace F00 {
BOOL Unk_0201c078::func_0201c444(Unk_020d8938 *s) {
    unk_48 = 0;
    unk_4c = (*(void (Unk_0201c078::**)(Unk_020d8938 *s))nZ::data_020d7e08);
    return TRUE;
}
}

namespace F00 {
void Unk_0201c078::func_0201c3fc(Unk_020d8938 *s) {
    if (func_0201c510(s)) {
        if (unk_48 == 0) {
            func_0201c460(s);
        }
        unk_48 = unk_48 + 1;
        if (unk_48 >= 0x14) {
            unk_48 = 0;
        }
    }
}
}

namespace F00 {
void Unk_0201c078::func_0201c3e8(Unk_020d8938 *s) { func_0201c594(s, 0x62, 0x7f); }
}

namespace F00 {
BOOL Unk_0201c078::func_0201c3cc(Unk_020d8938 *s) {
    unk_48 = 0;
    unk_4c = (*(void (Unk_0201c078::**)(Unk_020d8938 *s))nZ::data_020d7ad0);
    return TRUE;
}
}

namespace F00 {
void Unk_0201c078::func_0201c384(Unk_020d8938 *s) {
    if (func_0201c510(s)) {
        if (unk_48 == 0) {
            func_0201c3e8(s);
        }
        unk_48 = unk_48 + 1;
        if (unk_48 >= 0xe) {
            unk_48 = 0;
        }
    }
}
}

namespace F00 {
BOOL Unk_0201c078::func_0201c34c(Unk_020d8938 *s) {
    s32 v = _ZN12Unk_02015b8c13func_02015e48Ej(((void *)((u8 *)(s) + (0x334))), 0);
    const u32 *p = data_020c7aa4;
    for (s32 i = 0; i < 5; p++, i++) {
        if (v == *p) {
            return TRUE;
        }
    }
    return FALSE;
}
}

namespace F00 {
BOOL Unk_0201c078::func_0201c2a4(Unk_020d8938 *s, u32 idx) {
    static Unk_0201c078_Fn tbl[5] = {
        *(Unk_0201c078_Fn *)__ptmf_null,
        (*(BOOL (Unk_0201c078::**)(Unk_020d8938 *s))nZ::data_020d7e68),
        (*(BOOL (Unk_0201c078::**)(Unk_020d8938 *s))nZ::data_020d7a38),
        (*(BOOL (Unk_0201c078::**)(Unk_020d8938 *s))nZ::data_020d7b68),
        (*(BOOL (Unk_0201c078::**)(Unk_020d8938 *s))nZ::data_020d7bf0),
    };
    if (idx < 5) {
        if (tbl[idx]) {
            if ((this->*tbl[idx])(s)) {
                return TRUE;
            }
        }
    }
    return FALSE;
}
}

namespace nZ {
extern "C" {
void * data_020d7f10[2] = {
    (void *)_ZN12Unk_0202134013func_02021848Ev, 0,
};
const void *const data_020c7990[2] = {
    (void *)data_020d8678, (void *)0x3,
};
const void *const data_020c7640[2] = {
    (void *)data_020d83e4, (void *)0x3,
};
const void *const data_020c7630[2] = {
    (void *)data_020d8558, (void *)0x4,
};
void * data_020d7d00[2] = {
    (void *)_ZN12Unk_0201d2d013func_02028848EPvS0_, 0,
};
char data_020d82b8[10] = "q07_scold";
const void *const data_020c7790[2] = {
    (void *)data_020d87a4, (void *)0x3,
};
const void *const data_020c7778[2] = {
    (void *)data_020d8090, (void *)0x2,
};
const u8 data_020c7a74[14] = {
    0x08, 0x0c, 0x04, 0x04, 0x0c, 0x06, 0x06, 0x08, 0x06, 0x06, 0x06, 0x06, 0x06, 0x0a,
};
void * data_020d7950[2] = {
    (void *)_ZN12Unk_02027a3413func_02028058EP16Unk_02027a34_Outj, 0,
};
const void *const data_020c7748[2] = {
    (void *)data_020d83fc, (void *)0x3,
};
void * data_020d7a18[2] = {
    (void *)_ZN12Unk_0201d2d013func_0202aed8Ev, 0,
};
char data_020d80cc[9] = "q07_show";
void * data_020d7fd8[2] = {
    (void *)_ZN12Unk_020d893813func_0201cdc8Ev, 0,
};
char data_020d8318[10] = "q_preitem";
void * data_020d7bb8[2] = {
    (void *)_ZN12Unk_020d893813func_0201d060Ev, 0,
};
const void *const data_020c7720[2] = {
    (void *)data_020d8318, (void *)0x3,
};
char data_020d8504[11] = "q04_req3_7";
void * data_020d7f28[2] = {
    (void *)_ZN12Unk_0201d2d013func_02022704Ev, 0,
};
const u8 data_020c74f4[2] = {
    0x1d, 0x1d,
};
char data_020d8534[11] = "tsu_cl_act";
const void *const data_020c76d8[2] = {
    (void *)data_020d8234, (void *)0x2,
};
const void *const data_020c76c8[2] = {
    (void *)data_020d857c, (void *)0x4,
};
void * data_020d7b30[2] = {
    (void *)_ZN12Unk_0201d2d013func_02020d90Ev, 0,
};
void * data_020d78f8[2] = {
    (void *)_ZN12Unk_02027a3413func_02028058EP16Unk_02027a34_Outj, 0,
};
const void *const data_020c7890[2] = {
    (void *)data_020d8198, (void *)0x3,
};
void * data_020d7df0[2] = {
    (void *)_ZN12Unk_0201d2d013func_0201db60Ev, 0,
};
void * data_020d7af0[2] = {
    (void *)_ZN12Unk_020d893813func_0201cce0Ev, 0,
};
const void *const data_020c78c0[2] = {
    (void *)data_020d81e0, (void *)0x3,
};
void * data_020d7a98[2] = {
    (void *)_ZN12Unk_02027a3413func_02028058EP16Unk_02027a34_Outj, 0,
};
const void *const data_020c7808[2] = {
    (void *)data_020d8228, (void *)0x3,
};
void * data_020d7960[2] = {
    (void *)_ZN12Unk_02027a3413func_02028058EP16Unk_02027a34_Outj, 0,
};
void * data_020d7e68[2] = {
    (void *)_ZN12Unk_0201c07813func_0201c4ccEP12Unk_020d8938, 0,
};
u32 data_021be61c[2];
char data_020d7880[6] = "q_yes";
char data_020d8654[12] = "tsu_in_hint";
const void *const data_020c7770[2] = {
    (void *)data_020d82d0, (void *)0x3,
};
char data_020d7864[2] = "w";
const u8 data_020c7500[2] = {
    0x0a, 0x13,
};
void * data_020d7bf0[2] = {
    (void *)_ZN12Unk_0201c07813func_0201c444EP12Unk_020d8938, 0,
};
u32 data_021be680[8];
char data_020d8330[10] = "tsu_move2";
const s8 data_020c74f8[2] = {
    55, 54,
};
char data_020d79a8[8] = "ap_mail";
const void *const data_020c76b8[2] = {
    (void *)data_020d8594, (void *)0x4,
};
void * data_020d7ec8[2] = {
    (void *)_ZN12Unk_020254ec13func_020257e8Ev, 0,
};
void * data_020d7af8[2] = {
    (void *)_ZN12Unk_0201d2d013func_02022270Ev, 0,
};
const void *const data_020c7750[2] = {
    (void *)data_020d80b4, (void *)0x2,
};
const u8 data_020c7518[5] = {
    0x03, 0x02, 0x05, 0x00, 0x01,
};
void * data_020d7fa8[2] = {
    (void *)_ZN12Unk_0201d2d013func_020224b8Ev, 0,
};
char data_020d82ac[10] = "ev_insect";
char data_020d8678[12] = "tsu_fo_hint";
void * data_020d7a28[2] = {
    (void *)_ZN12Unk_0201eea413func_0201f32cEv, 0,
};
char data_020d86cc[12] = "q05_talk1_2";
void * data_020d8800[5] = {
    (void *)data_020d87c4, (void *)data_020d87d8, (void *)data_020d87ec, (void *)data_020d88a4,
    (void *)data_020d88c0,
};
void * data_020d7a58[2] = {
    (void *)_ZN12Unk_0201d2d013func_0202475cEv, 0,
};
const u8 data_020c74f0[2] = {
    0x2a, 0x2a,
};
void * data_020d7d60[2] = {
    (void *)_ZN12Unk_0201f7d013func_0201fff4Ev, 0,
};
void * data_020d7c88[2] = {
    (void *)_ZN12Unk_0201d2d013func_0201d88cEv, 0,
};
char data_020d82f4[10] = "q06_open2";
char data_020d8390[10] = "ai_mfirst";
void * data_020d7f40[2] = {
    (void *)_ZN12Unk_0201d2d013func_020227acEv, 0,
};
const u32 data_020c7b1c[6] = {
    0x00000000, 0x00000000, 0x00000003, 0x00000000, 0x00000004, 0x00000000,
};
}
}

namespace F00 {
void Unk_0201c078::func_0201c1d0(Unk_020d8938 *s, s32 next) {
    if (next != unk_44 && unk_44 != 5) {
        unk_4c = *(Unk_0201c078_State *)__ptmf_null;
        unk_44 = 5;
    } else if (!unk_4c) {
        switch (_ZN12Unk_02015b8c13func_02015e48Ej(((void *)((u8 *)(s) + (0x334))), 0) - 0xe5) {
        case 0:
        case 1:
            if (next == 1) {
                if (func_0201c2a4(s, 1)) {
                    unk_44 = next;
                }
            }
            break;
        case 2:
        case 3:
            if (next == 2 || next == 4) {
                if (func_0201c2a4(s, 2)) {
                    unk_44 = next;
                }
            }
            break;
        case 4:
        case 5:
            if ((u8)(next + 0xfd) <= 1) {
                if (func_0201c2a4(s, 3)) {
                    unk_44 = next;
                }
            }
            break;
        }
    }
    if (unk_4c) {
        (this->*unk_4c)(s);
    }
}
}

namespace F00 {
void Unk_0201c078::func_0201c078(Unk_020d8938 *s) {
    void *a = func_0207e310(*(u32 *)((void *)((u8 *)(s) + (0x82c))));
    u32 b = func_0207856c();
    if (func_0201c6d4()) {
        if (_ZN12Unk_020cbb1813func_02072e88Ei(data_020cbb18, data_020cbb18->unk_64) == 0) {
            if (_ZN12Unk_02013b1013func_02014220Ev(((void *)((u8 *)(s) + (0x618))))) {
                b = 0;
                func_0201c678(s, b);
            } else {
                if (unk_58 != 0) {
                    u32 t = unk_54;
                    if (t < 5) {
                        if (b != 0 && b == t) {
                            func_02078550(a, unk_56);
                        } else {
                            func_0207854c(a, unk_56);
                        }
                        func_02078568(a, unk_54);
                        b = unk_54;
                    }
                    unk_58 = 0;
                    func_0201c668();
                }
                func_0207853c(a);
                if (b != 0) {
                    if (func_02078548(a) == 0) {
                        b = 0;
                        func_02078568(a, b);
                    }
                }
                func_0201c678(s, b);
            }
            s32 v = _ZN12Unk_02015b8c13func_02015e48Ej(((void *)((u8 *)(s) + (0x334))), 0);
            if (v != _ZN12Unk_0201635013func_02016254EiPv(((void *)((u8 *)(s) + (0x334))), 0, ((void *)((u8 *)(s) + (0x2a0))))) {
                if (func_0201c34c(s)) {
                    _ZN12Unk_0201985813func_020196b4Ejiiissiitt(((void *)((u8 *)(s) + (0x564))), 0, *(u32 *)((void *)((u8 *)(s) + (0x578))), 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
                }
            }
            func_0201c1d0(s, b);
            unk_40 = b;
            func_0201c574(s);
        }
    }
}
}

namespace F00 {
extern "C" void func_0201c050(Unk_0201c050_Obj *p) {
    void *q = p->unk_04->unk_2c;
    if (q != NULL) {
        _ZN12Unk_020dbd7413func_02053b34EP16Unk_02053a54_Msg((u8 *)q + 0xec, p);
    }
    p->unk_24 = (u32)func_0201be44;
    p->unk_92 = 2;
}
}
