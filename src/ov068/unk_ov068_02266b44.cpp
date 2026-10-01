// mwcc-version: 1.2/base
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

class Unk_ov068_0226fb80;
class Unk_ov068_0226ff34;
class Unk_ov068_0226fea4;

#define func_02015958 _ZN12Unk_020d771413func_02015958Eijiii
#define func_02015aac _ZN12Unk_020d771413func_02015aacEv
#define func_02015ab0 _ZN12Unk_020d771413func_02015ab0Ej
#define func_020196b4 _ZN12Unk_0201985813func_020196b4Ejiiissiitt
#define func_02019790 _ZN12Unk_0201985813func_02019790Ev
#define func_020197a8 _ZN12Unk_0201985813func_020197a8Ev
#define func_020141b4 _ZN12Unk_02013b1013func_020141b4Essh
#define func_02014220 _ZN12Unk_02013b1013func_02014220Ev
#define func_0201a8d0 _ZN12Unk_0201a8c413func_0201a8d0Eiiii
#define func_0201bc28 _ZN12Unk_020d77a413func_0201bc28EP12Unk_0201bc1c
#define func_0201bc4c _ZN12Unk_020d77a413func_0201bc4cEj
#define func_0201bcbc _ZN12Unk_020d77a413func_0201bcbcEPS_
#define func_0201bda8 _ZN12Unk_020d77a413func_0201bda8EPt
#define func_02060388 _ZN12Unk_0206022c13func_02060388Ev
#define func_02067a84 _ZN12Unk_020660f813func_02067a84EPhPv
#define func_02097ff4 _ZN12Unk_02097ff413func_02097ff4Ej

struct Unk_ov068_02266680_Vec {
    s32 x, y, z;
};

struct Unk_ov068_02266bd0_Scene {
    u8 pad_00[4];
    s32 unk_04, unk_08;
    u8 pad_0c[8];
    s32 unk_14;
};

struct Unk_ov068_02266f30_Out {
    void *unk_00;
    u8 unk_04;
};

struct Unk_ov068_02266bd0_Owner {
    u8 pad_00[0x5c];
    Unk_ov068_02266680_Vec unk_5c;
    u8 pad_68[0x564 - 0x68];
    u8 unk_564[0x1b0];
    Unk_ov068_02266680_Vec unk_714;
};

struct Unk_ov068_0226fd68_Vec {
    s32 x, y, z;
};

struct Unk_ov068_SceneEntry {
    void *(*factory)();
    u16 unk_04;
    u16 unk_06;
    u32 unk_08;
    u32 unk_0c;
    u32 unk_10;
    u32 unk_14;
};

// Main's tiny class with an external destructor (one u16 element of the local static table of vfunc_04).
struct Unk_0203442c {
    u16 v;
    Unk_0203442c(u16 x) { v = x; }
    ~Unk_0203442c();
};

extern "C" {
void *func_0209750c();
BOOL func_0203d704(void *p, s32 a);
void func_0203d67c(void *p);
u32 func_020ae02c(void *p);
u32 func_020e7518(void *p);
void func_020ed188(void *p);
void func_02034d70(u32 a);
void func_02034d84(u32 a);
void func_02034dd0(u32 a, u32 b, u32 c);
void func_02034e10(s32 a, s32 b, s32 c, s32 d);
void func_0203a844();
void func_0203a680(Unk_ov068_02266680_Vec *v);
BOOL func_020951b8(s32 a);
void *func_020947f0(s32 a);
void func_02094b0c(void *v, u32 a, u32 b);
void func_02094f48(s32 a, s32 b);
void func_020a02d0();
BOOL func_020a0304();
BOOL func_020a0318();
s32 func_020978a4(void *self);
void func_02097ff4(void *self, s32 a);
void *func_02060388(void *self);
void func_02067a84(void *self, void *buf, void *p);
void func_02015958(void *self, void *a, s32 b, s32 c, s32 d, s32 e);
void func_02015ab0(void *self, s32 a);
void *func_02015aac(void *self);
s32 func_0201bc4c(void *self, s32 a);
u32 func_0201bcbc(void *self, void *q);
void func_0201bc28(void *self, void *q);
void func_0201bda8(void *self, u16 *q);
s32 func_02019790(void *self);
s32 func_020197a8(void *self);
void func_020196b4(void *self, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_02014220(void *self);
void func_020141b4(void *self, s32 a, s32 b, s32 c);
void func_0201a8d0(void *self, s32 a, s32 b, s32 c, s32 d);
extern u16 data_020c6cc8;
extern u32 data_021ed104;
extern u8 data_021edb68;
extern u8 data_021edb5c[];
extern u8 data_021e58a8[];
extern u8 data_021d735c[];
extern void *data_ov068_0226fcfc;
extern const char *data_ov068_0226fd68[];
extern const char *data_ov068_0226fd78[];
}

// Member object types of the scene object, named after their constructors.
struct Unk_020dbd74 { Unk_020dbd74(); u32 pad[0x1b4 / 4]; };
struct Unk_0201ad3c { Unk_0201ad3c(); u32 pad[0xc / 4]; };
struct Unk_02019dd8 { Unk_02019dd8(); u32 pad[0x88 / 4]; };
struct Unk_02016350 { Unk_02016350(); u32 pad[0x1c / 4]; };
struct Unk_0201accc { Unk_0201accc(); u32 pad[0x58 / 4]; };
struct Unk_0201a8bc { Unk_0201a8bc(); u8 pad[2]; };
struct Unk_0201ad18 { Unk_0201ad18(); u8 pad[6]; };
struct Unk_0201a794 { Unk_0201a794(); u32 pad[0x68 / 4]; };
struct Unk_0201a194 { Unk_0201a194(); u32 pad[8 / 4]; };
struct Unk_0201a13c { Unk_0201a13c(); u32 pad[0x7c / 4]; };
struct Unk_02032238 { Unk_02032238(); u32 pad[0x30 / 4]; };
struct Unk_02088d00 { Unk_02088d00(); u32 pad[0x1c / 4]; u32 unk_1c; u32 pad_20[0x24 / 4]; u8 unk_44; u8 pad_45[3]; };
struct Unk_020f4080 { Unk_020f4080(); u32 pad[0x44 / 4]; };
struct Unk_020135e4 { Unk_020135e4(); u8 pad[0xb]; u8 unk_0b; };
struct Unk_02019858 { Unk_02019858(); u32 pad[0xb4 / 4]; };
struct Unk_02014254 { Unk_02014254(); u32 pad[0x28 / 4]; };
struct Unk_020e06dc { Unk_020e06dc(); u32 pad[0x14 / 4]; };

// ---------------------------------------------------------------------------------------------------------------------
// Scene object (vtable 0x0226ff34). The class chain declares every slot after the class that names it in the vtable symbols.
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
    virtual void vfunc_4c(s32 a);
    virtual void vfunc_50();
    virtual void vfunc_54(void *p);
    virtual void vfunc_58(void *p);
    u32 pad_04[0x58 / 4];
    u32 unk_5c;
    u32 unk_60;
    u32 unk_64;
    u8 pad_68[0x8e - 0x68];
    s16 unk_8e;
    u8 pad_90[0xd4 - 0x90];
    u32 unk_d4, unk_d8, unk_dc;
};

class Unk_020d77a4 : public Unk_020d9670 {
public:
    Unk_020d77a4() : unk_ea(0xfff1) {}
    virtual void vfunc_08(s32 v);
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_24();
    virtual BOOL vfunc_30();
    virtual void vfunc_5c(Unk_020d77a4_Vec3 *v);
    virtual void vfunc_60();
    virtual void vfunc_64();
    virtual BOOL vfunc_68();
    virtual const char *vfunc_6c();
    virtual const char *vfunc_70();
    virtual void vfunc_74(u32 a);
    virtual u32 vfunc_78();
    virtual BOOL vfunc_7c();
    virtual void vfunc_80();
    virtual u16 vfunc_84();
    virtual void vfunc_88();
    virtual void vfunc_8c();
    virtual void vfunc_90();
    virtual void vfunc_94();
    virtual void vfunc_98();
    virtual void vfunc_9c();
    virtual void vfunc_a0();
    virtual void vfunc_a4();

    u16 pad_e0[5];
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
    virtual void vfunc_74(u32 a);
    virtual u32 vfunc_78();
    virtual BOOL vfunc_7c();
    virtual void vfunc_80();
    virtual u16 vfunc_84();
    virtual BOOL vfunc_a8();
    Unk_020e06dc unk_640;
    u32 unk_654;
};

// Dialog sub-object at +0x658 (vtable 0x0226fea4): chain Unk_020d7714 <- Unk_020ddcf0 <- Unk_020d7710 <- Unk_020d8b38 <- 0226fea4
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
    virtual void vfunc_78(Unk_ov068_02266f30_Out *out);
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();
    u8 pad_04[0x1a];
    u8 unk_1e;
    u8 pad_1f[0x3c - 0x1f];
    Unk_ov068_02266bd0_Scene *unk_3c;
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

struct Unk_ov068_0226fea4_Flag {
    u8 flag;
    u8 pad[11];
};

class Unk_ov068_0226fea4 : public Unk_020d8b38 {
public:
    Unk_ov068_0226fea4();
    virtual ~Unk_ov068_0226fea4();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_78(Unk_ov068_02266f30_Out *out);
    virtual void vfunc_80();
    virtual void vfunc_84();

    void func_ov068_02266bd0();
    void func_ov068_02266d64(s32 a);
    void func_ov068_02266f58(Unk_ov068_0226fb80 *o);

    /* 0xac */ s32 unk_ac;
    /* 0xb0 */ u8 unk_b0;
    /* 0xb1 */ u8 pad_b1[3];
    /* 0xb4 */ Unk_ov068_0226fb80 *unk_b4;
};

typedef BOOL (Unk_ov068_0226ff34::*Unk_ov068_02267238_Fn)();
struct Unk_ov068_02267238_Entry {
    Unk_ov068_02267238_Fn a;
    Unk_ov068_02267238_Fn b;
};
typedef void (Unk_ov068_0226fea4::*Unk_ov068_0226fea4_Fn)();
struct Unk_ov068_0226fea4_Ent {
    Unk_ov068_0226fea4_Fn fn;
    u8 flag;
    u8 pad[3];
};

class Unk_ov068_0226ff34 : public Unk_020d8bc8 {
public:
    Unk_ov068_0226ff34() {}
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(s32 a);
    virtual BOOL vfunc_68();
    virtual const char *vfunc_6c();
    virtual const char *vfunc_70();

    BOOL func_ov068_02266fc4();
    BOOL func_ov068_02266ff8();
    BOOL func_ov068_02267008();
    BOOL func_ov068_02267048();
    BOOL func_ov068_022670c8();
    BOOL func_ov068_022670f8();
    BOOL func_ov068_0226712c();
    BOOL func_ov068_0226716c();
    BOOL func_ov068_022671a4();
    BOOL func_ov068_022671dc();
    BOOL func_ov068_02267214();
    BOOL func_ov068_02267234();
    void func_ov068_02267238(s32 state);

    Unk_ov068_0226fea4 unk_658;
    u16 unk_710;
    u8 pad_712[2];
    s32 unk_714;
    s32 unk_718;
    s32 unk_71c;
    u8 unk_720;
    u8 pad_721[3];
};

extern "C" Unk_ov068_0226ff34 *func_ov068_0226746c();
#define data_ov068_0226fe1c ((Unk_ov068_0226fea4_Flag *)((u8 *)data_ov068_0226fe14 + 8))
#define PMA(x) (*(Unk_ov068_0226fea4_Fn *)(x))
#define PMB(x) (*(Unk_ov068_02267238_Fn *)(x))
extern "C" {
void _ZN18Unk_ov068_0226ff3419func_ov068_022670f8Ev();
void _ZN18Unk_ov068_0226ff3419func_ov068_022671a4Ev();
void _ZN18Unk_ov068_0226ff3419func_ov068_02267234Ev();
void _ZN18Unk_ov068_0226ff3419func_ov068_02267214Ev();
void _ZN18Unk_ov068_0226ff3419func_ov068_02267048Ev();
void _ZN18Unk_ov068_0226ff3419func_ov068_022670c8Ev();
void _ZN18Unk_ov068_0226fea419func_ov068_02266bd0Ev();
void _ZN18Unk_ov068_0226ff3419func_ov068_02267008Ev();
void _ZN18Unk_ov068_0226ff3419func_ov068_02266ff8Ev();
void _ZN18Unk_ov068_0226ff3419func_ov068_0226712cEv();
void _ZN18Unk_ov068_0226ff3419func_ov068_02266fc4Ev();
void _ZN18Unk_ov068_0226ff3419func_ov068_022671dcEv();
void _ZN18Unk_ov068_0226ff3419func_ov068_0226716cEv();
extern void *data_ov068_0226fd00[2];
extern void *data_ov068_0226fd08[2];
extern void *data_ov068_0226fd10[2];
extern void *data_ov068_0226fd18[2];
extern void *data_ov068_0226fd20[2];
extern void *data_ov068_0226fd28[2];
extern void *data_ov068_0226fd30[2];
extern void *data_ov068_0226fd38[2];
extern void *data_ov068_0226fd40[2];
extern void *data_ov068_0226fd48[2];
extern void *data_ov068_0226fd50[2];
extern void *data_ov068_0226fd58[2];
extern void *data_ov068_0226fd60[2];
extern char data_ov068_0226fd88[0x14];
extern char data_ov068_0226fd9c[0x18];
extern char data_ov068_0226fdb4[0x18];
extern char data_ov068_0226fdcc[0x18];
extern char data_ov068_0226fde4[0x18];
extern char data_ov068_0226fe2c[0x1c];
extern char data_ov068_0226fe48[0x1c];
extern char data_ov068_0226fe64[0x1c];
extern char data_ov068_0226fe80[0x1c];
extern Unk_ov068_0226fea4_Ent data_ov068_0226fe14[2];
extern Unk_ov068_02267238_Entry data_ov068_02271018[6];
}

// data definitions before the function with the local static table (creation order)
extern "C" char data_ov068_0226fe80[0x1c] = "npc_sp/model/rcd_tex.nsbtx";
extern "C" Unk_ov068_0226fea4_Ent data_ov068_0226fe14[2] = {{0, 0}, {PMA(data_ov068_0226fd30), 1}};
extern "C" void *data_ov068_0226fd30[2] = {(void *)_ZN18Unk_ov068_0226fea419func_ov068_02266bd0Ev, 0};

extern "C" Unk_ov068_0226ff34 *func_ov068_0226746c() {
    return new Unk_ov068_0226ff34();
}

BOOL Unk_ov068_0226ff34::vfunc_04() {
    static Unk_0203442c tbl[4] = {
        Unk_0203442c(0xd019), Unk_0203442c(0xd01a),
        Unk_0203442c(0xd01b), Unk_0203442c(0xd01c)
    };
    if (!Unk_020d8bc8::vfunc_04()) {
        return FALSE;
    }
    func_0201bda8(this, &tbl[func_020ae02c(&data_021ed104)].v);
    func_0201bc28(this, &unk_658);
    unk_658.func_ov068_02266f58((Unk_ov068_0226fb80 *)this);
    func_0201a8d0(&unk_350, 2, 0x399, 0x133, 0x199);
    return TRUE;
}

// data definitions after the function with the local static table
extern "C" const char *data_ov068_0226fd68[4] = {data_ov068_0226fd9c, data_ov068_0226fdb4, data_ov068_0226fdcc,
                                                 data_ov068_0226fde4};
extern "C" char data_ov068_0226fd9c[0x18] = "npc_sp/model/rcn.nsbmd";
extern "C" void *data_ov068_0226fd40[2] = {(void *)_ZN18Unk_ov068_0226ff3419func_ov068_02266ff8Ev, 0};
extern "C" void *data_ov068_0226fd00[2] = {(void *)_ZN18Unk_ov068_0226ff3419func_ov068_022670f8Ev, 0};
extern "C" Unk_ov068_02267238_Entry data_ov068_02271018[6] = {
    {PMB(data_ov068_0226fd10), PMB(data_ov068_0226fd18)},
    {PMB(data_ov068_0226fd58), PMB(data_ov068_0226fd08)},
    {PMB(data_ov068_0226fd60), PMB(data_ov068_0226fd48)},
    {PMB(data_ov068_0226fd00), PMB(data_ov068_0226fd28)},
    {PMB(data_ov068_0226fd20), PMB(data_ov068_0226fd38)},
    {PMB(data_ov068_0226fd40), PMB(data_ov068_0226fd50)}};
extern "C" char data_ov068_0226fdb4[0x18] = "npc_sp/model/rcc.nsbmd";
extern "C" void *data_ov068_0226fd08[2] = {(void *)_ZN18Unk_ov068_0226ff3419func_ov068_022671a4Ev, 0};
extern "C" void *data_ov068_0226fd50[2] = {(void *)_ZN18Unk_ov068_0226ff3419func_ov068_02266fc4Ev, 0};
extern "C" void *data_ov068_0226fd18[2] = {(void *)_ZN18Unk_ov068_0226ff3419func_ov068_02267214Ev, 0};
extern "C" char data_ov068_0226fde4[0x18] = "npc_sp/model/rcd.nsbmd";
extern "C" void *data_ov068_0226fd58[2] = {(void *)_ZN18Unk_ov068_0226ff3419func_ov068_022671dcEv, 0};
extern "C" void *data_ov068_0226fd48[2] = {(void *)_ZN18Unk_ov068_0226ff3419func_ov068_0226712cEv, 0};
extern "C" char data_ov068_0226fe2c[0x1c] = "npc_sp/model/rcn_tex.nsbtx";
extern "C" char data_ov068_0226fe48[0x1c] = "npc_sp/model/rcc_tex.nsbtx";
extern "C" char data_ov068_0226fd88[0x14] = "sp_etc_sequence4";
extern "C" void *data_ov068_0226fd10[2] = {(void *)_ZN18Unk_ov068_0226ff3419func_ov068_02267234Ev, 0};
extern "C" void *data_ov068_0226fd38[2] = {(void *)_ZN18Unk_ov068_0226ff3419func_ov068_02267008Ev, 0};
extern "C" char data_ov068_0226fdcc[0x18] = "npc_sp/model/rcs.nsbmd";
extern "C" const char *data_ov068_0226fd78[4] = {data_ov068_0226fe2c, data_ov068_0226fe48, data_ov068_0226fe64,
                                                 data_ov068_0226fe80};
extern "C" void *data_ov068_0226fd60[2] = {(void *)_ZN18Unk_ov068_0226ff3419func_ov068_0226716cEv, 0};
extern "C" void *data_ov068_0226fd28[2] = {(void *)_ZN18Unk_ov068_0226ff3419func_ov068_022670c8Ev, 0};
extern "C" void *data_ov068_0226fcfc = data_ov068_0226fd88;
extern "C" char data_ov068_0226fe64[0x1c] = "npc_sp/model/rcs_tex.nsbtx";
extern "C" Unk_ov068_SceneEntry data_ov068_0226fdfc = {(void *(*)())func_ov068_0226746c, 0x7d, 0x81, 2, 0x5000, 0x5000, 0x3e800};
extern "C" void *data_ov068_0226fd20[2] = {(void *)_ZN18Unk_ov068_0226ff3419func_ov068_02267048Ev, 0};

BOOL Unk_ov068_0226ff34::vfunc_00() {
    if (!Unk_020d8bc8::vfunc_00()) {
        return FALSE;
    }
    func_ov068_02267238(0);
    unk_710 = unk_8e;
    unk_4cc.unk_1c |= 2;
    void *p = func_0209750c();
    if (p != NULL) {
        if (!func_020a0304()) {
            if (!func_020a0318()) {
                func_02097ff4(p, 1);
            }
        }
    }
    func_02034dd0(0x13, 0xf, 0);
    return TRUE;
}

const char *Unk_ov068_0226ff34::vfunc_6c() {
    return data_ov068_0226fd78[func_020ae02c(&data_021ed104)];
}

const char *Unk_ov068_0226ff34::vfunc_70() {
    return data_ov068_0226fd68[func_020ae02c(&data_021ed104)];
}

BOOL Unk_ov068_0226ff34::vfunc_68() {
    BOOL result = FALSE;
    if (data_ov068_02271018[unk_654].b != NULL) {
        result = (this->*data_ov068_02271018[unk_654].b)();
    }
    return result;
}

void Unk_ov068_0226ff34::func_ov068_02267238(s32 state) {
    BOOL ok = TRUE;
    if (data_ov068_02271018[state].a != NULL) {
        ok = (this->*data_ov068_02271018[state].a)();
    }
    if (ok) {
        unk_654 = state;
    }
}

BOOL Unk_ov068_0226ff34::func_ov068_02267234() {
    return TRUE;
}

BOOL Unk_ov068_0226ff34::func_ov068_02267214() {
    if (func_0203d704(this, 0)) {
        func_02094f48(1, 4);
    }
    return TRUE;
}

BOOL Unk_ov068_0226ff34::func_ov068_022671dc() {
    u32 x;
    void *p = func_02015aac(&unk_658);
    x = 0;
    if (p != NULL) {
        x = func_0201bcbc(this, p);
    }
    func_020141b4(&unk_618, 0, x, 1);
    return TRUE;
}

BOOL Unk_ov068_0226ff34::func_ov068_022671a4() {
    if (func_02014220(&unk_618) == 0) {
        func_0203a844();
        func_02034dd0(0x13, 0x3c, 0);
        func_02034d84(0x47);
        func_ov068_02267238(3);
    }
    return TRUE;
}

BOOL Unk_ov068_0226ff34::func_ov068_0226716c() {
    Unk_ov068_0226fd68_Vec v;
    Unk_ov068_0226fd68_Vec *p = (Unk_ov068_0226fd68_Vec *)func_020947f0(4);
    v.x = p->x;
    v.y = p->y;
    v.z = p->z;
    v.z += 0x2000;
    func_02094b0c(&v, 0x400, 4);
    return TRUE;
}

BOOL Unk_ov068_0226ff34::func_ov068_0226712c() {
    if (func_020951b8(4) == 0) {
        unk_658.vfunc_08();
        func_02015ab0(&unk_658, func_0201bc4c(this, 4));
        func_ov068_02267238(1);
    }
    return TRUE;
}

BOOL Unk_ov068_0226ff34::func_ov068_022670f8() {
    func_020196b4(&unk_564, 3, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL Unk_ov068_0226ff34::func_ov068_022670c8() {
    if (func_020197a8(&unk_564) == 3) {
        if (func_02019790(&unk_564)) {
            func_ov068_02267238(4);
        }
    }
    return TRUE;
}

BOOL Unk_ov068_0226ff34::func_ov068_02267048() {
    unk_714 = unk_5c;
    unk_718 = unk_60;
    unk_71c = unk_64;
    unk_714 -= 0x2000;
    unk_71c += 0xa000;
    func_020196b4(&unk_564, 2, 1, unk_714, unk_71c, 0, 0, 0, 0, data_020c6cc8, 0);
    unk_720 = 0x3c;
    return TRUE;
}

BOOL Unk_ov068_0226ff34::func_ov068_02267008() {
    if (func_02019790(&unk_564) != 0 || func_020e7518(&unk_720) == 0) {
        func_0203d67c(this);
        if (func_0209750c()) {
            func_020a02d0();
        }
    }
    return TRUE;
}

BOOL Unk_ov068_0226ff34::func_ov068_02266ff8() {
    unk_720 = 10;
    return TRUE;
}

BOOL Unk_ov068_0226ff34::func_ov068_02266fc4() {
    if (func_020e7518(&unk_720) == 0) {
        func_02034d70(0x13);
        func_02034dd0(0x12, 5, 5);
        func_020ed188(this);
    }
    return TRUE;
}

Unk_ov068_0226fea4::Unk_ov068_0226fea4() {}

Unk_ov068_0226fea4::~Unk_ov068_0226fea4() {
}

void Unk_ov068_0226fea4::func_ov068_02266f58(Unk_ov068_0226fb80 *o) {
    vfunc_08();
    unk_b4 = o;
}

void Unk_ov068_0226fea4::vfunc_78(Unk_ov068_02266f30_Out *out) {
    void *p = func_0209750c();
    if (p != 0) {
        func_02097ff4(p, 0x23);
    }
    out->unk_00 = data_ov068_0226fcfc;
    out->unk_04 = 0x22;
}

void Unk_ov068_0226fea4::vfunc_14() {
    Unk_ov068_02266bd0_Scene *sc = unk_3c;
    volatile u8 buf = data_021edb68;
    buf = 0;
    switch (unk_1e) {
    case 0x22:
        func_02067a84(sc, data_021edb5c, 0);
        sc->unk_14 = 0;
        func_ov068_02266d64(1);
        break;
    case 10:
    case 13: {
        void *p = func_02060388(data_021e58a8);
        if (p == 0) {
            buf = 0xf;
        } else {
            func_02015958(this, p, 1, 0xa, 1, 0);
            if (func_020a0318() != 0) {
                buf = 0x1c;
            } else if (func_020978a4(data_021d735c) <= 1) {
                buf = 0x27;
            } else {
                buf = 0xb;
            }
        }
        break;
    }
    case 11:
    case 0x1c:
    case 0x27:
        if (func_020a0304() == 0 && func_020a0318() == 0) {
            buf = 0xe;
        } else {
            buf = 0xc;
        }
        break;
    case 15:
        if (func_020a0304() == 0 && func_020a0318() == 0) {
            buf = 0x10;
        } else {
            buf = 0x11;
        }
        break;
    }
    if (buf != 0) {
        func_02067a84(sc, (u8 *)&buf, data_ov068_0226fcfc);
    }
}

void Unk_ov068_0226fea4::vfunc_18() {
}

void Unk_ov068_0226fea4::vfunc_80() {
    if (data_ov068_0226fe1c[unk_ac].flag != 0) {
        if (data_ov068_0226fe14[unk_ac].fn) {
            (this->*data_ov068_0226fe14[unk_ac].fn)();
        }
    }
}

void Unk_ov068_0226fea4::vfunc_84() {
    if (data_ov068_0226fe1c[unk_ac].flag == 0) {
        if (data_ov068_0226fe14[unk_ac].fn) {
            (this->*data_ov068_0226fe14[unk_ac].fn)();
            func_ov068_02266d64(0);
        }
    }
}

void Unk_ov068_0226fea4::func_ov068_02266d64(s32 a) {
    unk_ac = a;
    unk_b0 = 0;
}

void Unk_ov068_0226fea4::func_ov068_02266bd0() {
    switch (unk_b0) {
    case 0:
        if (unk_3c->unk_04 == 5) {
            func_02034d70(0x13);
            func_02034e10(0x15, 0x47, 0x7f, 1);
            func_02094f48(0, 4);
            Unk_ov068_02266bd0_Owner *o = (Unk_ov068_02266bd0_Owner *)unk_b4;
            Unk_ov068_02266680_Vec *pv = &o->unk_5c;
            Unk_ov068_02266680_Vec *pd = &o->unk_714;
            pd->x = pv->x;
            pd->y = pv->y;
            pd->z = pv->z;
            o = (Unk_ov068_02266bd0_Owner *)unk_b4;
            o->unk_714.x += 0x6000;
            o = (Unk_ov068_02266bd0_Owner *)unk_b4;
            func_020196b4(o->unk_564, 2, 2, o->unk_714.x, o->unk_714.z, 0, 0, 0, 0, data_020c6cc8, 0);
            unk_b0 = 1;
        }
        break;
    case 1: {
        Unk_ov068_02266bd0_Owner *o = (Unk_ov068_02266bd0_Owner *)unk_b4;
        if (func_02019790(o->unk_564) != 0) {
            o = (Unk_ov068_02266bd0_Owner *)unk_b4;
            if (func_020197a8(o->unk_564) == 2) {
                o = (Unk_ov068_02266bd0_Owner *)unk_b4;
                func_020196b4(o->unk_564, 0, 2, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
                unk_b0 = 2;
            }
        }
        break;
    }
    case 2: {
        Unk_ov068_02266bd0_Owner *o = (Unk_ov068_02266bd0_Owner *)unk_b4;
        if (func_02019790(o->unk_564) != 0) {
            o = (Unk_ov068_02266bd0_Owner *)unk_b4;
            if (func_020197a8(o->unk_564) == 0) {
                Unk_ov068_02266bd0_Scene *sc = unk_3c;
                volatile u8 buf = data_021edb68;
                if (func_020a0318() != 0) {
                    buf = 0xd;
                } else {
                    buf = 0xa;
                }
                func_02067a84(sc, (u8 *)&buf, data_ov068_0226fcfc);
                sc->unk_08 = 1;
                o = (Unk_ov068_02266bd0_Owner *)unk_b4;
                Unk_ov068_02266680_Vec t;
                Unk_ov068_02266680_Vec *pt = &o->unk_5c;
                t.x = pt->x;
                t.y = pt->y;
                t.z = pt->z;
                t.y += 0x2000;
                func_0203a680(&t);
                func_ov068_02266d64(0);
            }
        }
        break;
    }
    }
}

BOOL Unk_ov068_0226ff34::vfunc_48() {
    BOOL r = FALSE;
    if (unk_654 == 0) {
        r = TRUE;
    }
    return r;
}

void Unk_ov068_0226ff34::vfunc_4c(s32 a) {
    switch (a) {
    case 1:
        func_ov068_02267238(2);
        break;
    case 8:
        func_ov068_02267238(5);
        break;
    }
}

