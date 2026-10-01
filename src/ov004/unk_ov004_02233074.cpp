// mwcc-version: 1.2/base
// ov004 TU32: .text 0x02233074-0x02235fd0 (furniture/TV resource slots, tile placement helpers, actor tables, scene object 0224e9d8)
#include "types.h"
#include "Unk_020d8c7c.h"

// other modules' symbols by their real names
#define func_02002cf8 _ZN12Unk_020d5d8413func_02002cf8EPvS0_S0_S0_S0_
#define func_02003830 _ZN12Unk_0213bac413func_02003830Ev
#define func_02003840 _ZN12Unk_0213bac413func_02003840Ev
#define func_02004b60 _ZN12Unk_0203442cD1Ev
#define func_0203442c _ZN12Unk_0203442cC1Ev
#define func_02054710 _ZN12Unk_020dbd5413func_02054710Ev
#define func_02054720 _ZN12Unk_0205454c13func_02054720Eiiitt
#define func_020547a4 _ZN12Unk_020dbd5413func_020547a4Ei
#define func_020547e4 _ZN12Unk_020dbd5413func_020547e4Ev
#define func_02054800 _ZN12Unk_020dbd5413func_02054800EPv
#define func_020548a0 _ZN12Unk_020dbd54D1Ev
#define func_020548d0 _ZN12Unk_020dbd54C1Ev
#define func_02055488 _ZN12Unk_020dbe3413func_02055488Eii
#define func_02055524 _ZN12Unk_020dbe3413func_02055524Ev
#define func_02055600 _ZN12Unk_020dbe3413func_02055600EP16Unk_020553f8_Resj
#define func_020565e8 _ZN12Unk_020dbe7c13func_020565e8Ei
#define func_02056654 _ZN12Unk_020dbe7c13func_02056654Ev
#define func_02056bf8 _ZN12Unk_020dbe8c13func_02056bf8Ev
#define func_02056ca4 _ZN12Unk_020dbe8c13func_02056ca4EPhPKcS2_S0_S0_h
#define func_02056d54 _ZN12Unk_020dbe8cD1Ev
#define func_02056d8c _ZN12Unk_020dbe8cC1Ev
#define func_02088bf8 _ZN12Unk_020e0d3013func_02088bf8EPvP4Vec3iijjjhi
#define func_02089040 _ZN12Unk_020e0d0813func_02089040Ev
#define func_0209888c _ZN12Unk_0209865c13func_0209888cEv
#define func_0209c1a4 _ZN12Unk_0209c15c13func_0209c1a4EjPvS0_jPFS0_jjEPFvvE
#define func_02133150 _s32_div_f
#define func_ov004_02205820 _ZN18Unk_ov004_0224882c19func_ov004_02205820Es
#define func_ov004_022058c0 _ZN18Unk_ov004_0224882c19func_ov004_022058c0Es
#define func_ov004_02205954 _ZN18Unk_ov004_0224882c19func_ov004_02205954Ei
#define func_ov004_02207598 _ZN18Unk_ov004_0224882c19func_ov004_02207598Ei
#define func_ov004_022075a4 _ZN18Unk_ov004_0224882c19func_ov004_022075a4Ei
#define func_ov004_02209108 _ZN18Unk_ov004_0224882c19func_ov004_02209108Ev
#define func_ov004_02209150 _ZN18Unk_ov004_0224882c19func_ov004_02209150Ev
#define func_ov004_02209198 _ZN18Unk_ov004_0224882c19func_ov004_02209198Ev
#define func_ov004_02209bb4 _ZN18Unk_ov004_0224882c19func_ov004_02209bb4Ev
#define func_ov004_02209c10 _ZN18Unk_ov004_0224882c19func_ov004_02209c10Ev
#define func_ov004_02209c44 _ZN18Unk_ov004_0224882c19func_ov004_02209c44Ev
#define func_ov004_02209c88 _ZN18Unk_ov004_0224882c19func_ov004_02209c88Ev
#define func_ov004_0220af14 _ZN18Unk_ov004_0224949813func_0220af14Ev
#define func_ov004_0220af28 _ZN18Unk_ov004_0224949813func_0220af28Ev
#define func_ov004_0220c93c _ZN18Unk_ov004_0224ad3419func_ov004_0220c93cEv
#define func_ov004_0220c950 _ZN18Unk_ov004_0224ad3419func_ov004_0220c950Ev
#define func_ov004_0220e738 _ZN18Unk_ov004_02249df819func_ov004_0220e738Ev
#define func_ov004_0220f29c _ZN18Unk_ov004_0224a17c19func_ov004_0220f29cEv
#define func_ov004_0220f2a8 _ZN18Unk_ov004_0224a17c19func_ov004_0220f2a8Ev
#define func_ov004_02210dd8 _ZN18Unk_ov004_0224ba1819func_ov004_02210dd8EP20Unk_ov004_022108f0_ViS1_
#define func_ov004_022326fc _ZN18Unk_ov004_0224e87cC1Ev



struct Unk_ov004_Vec3 {
    s32 x, y, z;
};

struct Unk_ov004_02235528_V3 {
    s32 x, y, z;
};

struct Unk_ov004_0224e98c_Entry {
    void *(*factory)();
    u16 unk_04;
    u16 unk_06;
};

extern s32 data_020c8cb8;

// Zero-initialised 3-word object whose (empty) destructor lives in main
class Unk_02000c8c {
public:
    Unk_02000c8c() {}
    Unk_02000c8c(s32 v) {
        x = v;
        y = 0;
        z = 0;
    }
    ~Unk_02000c8c();
    s32 x, y, z;
};

// ---- records / tables
struct Unk_ov004_02233138_Rec {
    u16 unk_00;
    u16 unk_02;
    u16 unk_04;
    u16 unk_06;
};

struct Unk_ov004_02233330_Tbl {
    const u8 *unk_00;
    s32 unk_04;
};

struct Unk_ov004_02233330_Time {
    u16 unk_00;
    u8 unk_02;
    u8 unk_03;
    u32 unk_04;
};

struct Unk_ov004_02233244_Src {
    u8 pad_00[0xb];
    u8 unk_0b;
};

struct Unk_ov004_022332b8_Buf {
    u32 unk_00;
    u32 unk_04;
    u8 unk_08;
    u8 unk_09;
    u8 unk_0a;
    u8 unk_0b;
};

// P: 0xa8-byte TV/ftr resource slot (member sub-object Unk_020dbe8c at +0x10)
struct Unk_ov004_02233790 {
    void *unk_00;
    u32 unk_04;
    u32 unk_08;
    u32 unk_0c;
    u32 unk_10[0x90 / 4];
    s32 unk_a0;
    s16 unk_a4;
    u16 unk_a6;
};

// Q: holder of two P slots
struct Unk_ov004_02233560 {
    s16 unk_00;
    Unk_ov004_02233790 unk_04[2];
    u32 unk_154;
    void *unk_158;
    void *unk_15c;
};

struct Unk_ov004_02233b3c_V3 {
    s32 x, y, z;
};

struct Unk_ov004_02233b3c_Mat {
    s32 v[12];
};

// R: furniture model wrapper (Unk_020dbd54 at +0x2c)
struct Unk_ov004_02233b3c {
    u8 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0c;
    void *unk_10;
    void *unk_14;
    u32 unk_18;
    u32 unk_1c;
    u32 unk_20;
    void *unk_24;
    u32 unk_28;
    u8 unk_2c[0x64];
    Unk_ov004_02233b3c_Mat unk_90;
    u8 unk_c0[8];
    u8 unk_c8[0x1c];
};

struct Unk_ov004_02233b90_In {
    u8 pad_00[0x4c];
    Unk_ov004_02233b3c_V3 unk_4c;
};

struct Unk_ov004_02233b90_Vt {
    u8 unk_00;
    u8 unk_01;
};

struct Unk_ov004_02233b90_Sub {
    u8 pad_00[0x2c];
    Unk_ov004_02233b3c *unk_2c;
};

struct Unk_ov004_02233b90_Obj {
    Unk_ov004_02233b90_Vt *unk_00;
    Unk_ov004_02233b90_Sub *unk_04;
    u8 pad_08[0xb4 - 0x8];
    Unk_ov004_02233b90_In *unk_b4;
};

struct Unk_ov004_022337d4_Path {
    u16 unk_00;
    char unk_02[0x2a];
};

struct Unk_ov004_022337d4_Arc {
    u32 unk_00[0x68 / 4];
};

struct Unk_ov004_02233d2c_Obj {
    u8 pad_00[0x77c];
    s32 unk_77c;
};

struct Unk_ov004_02233f3c_P {
    s16 x, y;
    Unk_ov004_02233f3c_P(s16 a, s16 b) : x(a), y(b) {}
};

struct Unk_ov004_022341c0_Buf {
    u32 unk_00, unk_04;
};

struct Unk_ov004_02233f3c_World {
    void *cells;
    u32 w, h;
};
typedef Unk_ov004_02233f3c_World Unk_ov004_02234a48_Grid;

struct Unk_ov004_02233f3c_V3 {
    s32 x, y, z;
    Unk_ov004_02233f3c_V3() {}
    ~Unk_ov004_02233f3c_V3() {}
};

struct Unk_ov004_02205c44 {
    void func_ov004_02205c44(u32 v, s32 flag);
    u8 func_ov004_02205c7c();
    u8 unk_00;
    u8 unk_01;
};

// TU02's class: only the members this unit touches
class Unk_ov004_0224882c {
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
    virtual void vfunc_98(BOOL v);
    virtual void vfunc_9c(BOOL v);
    virtual BOOL vfunc_a0();

    BOOL func_ov004_022056bc(s32 idx);
    BOOL func_ov004_022057c8();
    BOOL func_ov004_022075b0();

    /* 0x04 */ u8 pad_04[0x5c - 4];
    /* 0x5c */ Unk_ov004_Vec3 unk_5c;
    /* 0x68 */ u8 pad_68[0x8e - 0x68];
    /* 0x8e */ s16 unk_8e;
    /* 0x90 */ u8 pad_90[0x14c - 0x90];
    /* 0x14c */ s32 unk_14c;
    /* 0x150 */ u8 pad_150[0x284 - 0x150];
    /* 0x284 */ u8 unk_284;
    /* 0x285 */ u8 pad_285[0x73c - 0x285];
    /* 0x73c */ Unk_ov004_02205c44 unk_73c;
    /* 0x73e */ u8 pad_73e[0x770 - 0x73e];
    /* 0x770 */ u32 unk_770;
    /* 0x774 */ s32 unk_774;
    /* 0x778 */ u8 pad_778[4];
    /* 0x77c */ s32 unk_77c;
    /* 0x780 */ u8 pad_780[4];
    /* 0x784 */ s32 unk_784;
    /* 0x788 */ u8 unk_788;
    /* 0x789 */ u8 pad_789[3];
    /* 0x78c */ s32 unk_78c;
    /* 0x790 */ u8 pad_790[0x7b4 - 0x790];
    /* 0x7b4 */ Unk_ov004_Vec3 unk_7b4;
};

class Unk_0213bac4 {
public:
    void func_020037b0();
    void func_020037c0(s32 a);
    void func_020037d0(s32 a, void *b);
};

struct Unk_0203389c_Vec {
    s32 x, y, z;
};

class Unk_0203389c {
public:
    u8 pad_00[0x40];
    s32 func_02033914(s32 a);
};

class Unk_0203398c : public Unk_0203389c {
public:
    Unk_0203398c() {}
    Unk_0203398c *func_020339bc(Unk_0203389c_Vec *v, s32 a, s32 b);
    ~Unk_0203398c();
};

// main's 0x18-byte pool object
typedef void *(*Unk_0209c1a4_Alloc)(u32, u32);
typedef void (*Unk_0209c15c_Fn)();
class Unk_0209c15c {
public:
    Unk_0209c15c();
    ~Unk_0209c15c();
    BOOL func_0209c15c();
    u16 unk_00;
    u32 unk_04;
    u32 unk_08;
    void *unk_0c;
    Unk_0209c1a4_Alloc unk_10;
    Unk_0209c15c_Fn unk_14;
};

// ---- classes of unk_022350c8 (symbols name their methods)

class Unk_ov004_0223583c;
class Unk_ov004_02235708;
class Unk_ov004_022351bc;
class Unk_ov004_022358c8;

// table of 0x1c object pointers
class Unk_ov004_0223583c {
public:
    void *unk_00[0x1c];
    Unk_ov004_0223583c();
    ~Unk_ov004_0223583c();
    Unk_ov004_0224882c *func_ov004_02235720(u32 idx);
    s32 func_ov004_02235740(void *v);
    s32 func_ov004_0223576c();
    s32 func_ov004_02235788();
    s32 func_ov004_022357b0(void *v);
    s32 func_ov004_022357e0(void *v);
    void func_ov004_02235828();
};

// slot (0x40)
class Unk_ov004_022355ac {
public:
    s32 unk_00;
    Unk_ov004_02235528_V3 unk_04;
    Unk_ov004_02235528_V3 unk_10;
    s32 unk_1c;
    Unk_ov004_02235528_V3 unk_20;
    Unk_ov004_02235528_V3 unk_2c;
    s16 unk_38;
    s32 unk_3c;
    Unk_ov004_022355ac();
    ~Unk_ov004_022355ac();
    s32 func_ov004_022354f8();
    void func_ov004_02235528(s32 id, Unk_ov004_02235528_V3 *a, Unk_ov004_02235528_V3 *b, s32 c,
                              Unk_ov004_02235528_V3 *d, Unk_ov004_02235528_V3 *e, s16 f, s32 g);
    void func_ov004_02235580();
    s32 func_ov004_02235524();
    s16 func_ov004_022354e0();
    s32 func_ov004_022354e8();
    Unk_ov004_02235528_V3 *func_ov004_022354ec();
    Unk_ov004_02235528_V3 *func_ov004_022354f0();
    s32 func_ov004_022354f4();
    Unk_ov004_02235528_V3 *func_ov004_0223551c();
    Unk_ov004_02235528_V3 *func_ov004_02235520();
};

class Unk_ov004_022351bc {
public:
    Unk_ov004_022355ac unk_00[2];
    Unk_ov004_022351bc();
    ~Unk_ov004_022351bc();
    BOOL func_ov004_02235120(s32 id, Unk_ov004_02235528_V3 *a, Unk_ov004_02235528_V3 *b, s32 c,
                              Unk_ov004_02235528_V3 *d, Unk_ov004_02235528_V3 *e, s16 f, s32 g);
    void func_ov004_02235180();
    void *func_ov004_022351e8();
    void *func_ov004_02235224();
    void *func_ov004_02235234();
    void *func_ov004_02235270();
    Unk_ov004_02235528_V3 *func_ov004_0223527c(s16 v);
    void *func_ov004_022352d0(s32 v);
    void *func_ov004_0223531c();
    void *func_ov004_0223532c();
    void *func_ov004_0223533c();
    void *func_ov004_0223534c();
    void *func_ov004_0223535c(s32 v);
    void *func_ov004_0223537c(s32 v);
    void func_ov004_0223539c();
    void *func_ov004_02235434(u32 idx);
    Unk_ov004_022355ac *func_ov004_02235464(void *v);
    Unk_ov004_022355ac *func_ov004_022354a4(u32 idx);
};

// 16x16 x 2 cell grid
class Unk_ov004_02235708 {
public:
    u8 unk_00[2][16][16];
    Unk_ov004_02235708();
    ~Unk_ov004_02235708();
    Unk_ov004_0224882c *func_ov004_022355b0(void *p, s32 layer);
    Unk_ov004_0224882c *func_ov004_022355d8(s32 x, s32 y, s32 layer);
    s32 func_ov004_02235624(s32 x, s32 y, s32 layer);
    BOOL func_ov004_02235648(s32 id, s32 x, s32 y, u8 layer);
    BOOL func_ov004_0223568c(s32 id, s32 x, s32 y, u8 layer);
    void func_ov004_022356cc();
};

// heap wrapper
class Unk_ov004_022358c8 {
public:
    u32 unk_00;
    Unk_ov004_022358c8();
    ~Unk_ov004_022358c8();
    void func_ov004_02235854(void *p);
    void func_ov004_02235860();
    void func_ov004_02235870();
    BOOL func_ov004_0223588c(s32 n);
    void func_ov004_022358bc();
};

// sound handle wrapper
class Unk_ov004_02235cc0 {
public:
    u8 unk_00[0x1c];
    u8 unk_1c;
    void func_ov004_022358e0(u32 a);
    void func_ov004_022358f4(u32 a);
    void func_ov004_02235908(u32 a, u32 b);
    void func_ov004_0223591c(u32 a, u32 b);
    void func_ov004_02235930();
    void func_ov004_02235948();
};

// ---- classes of unk_02235984

// two-slot cache of loaded model resources
class Unk_ov004_02235a0c {
public:
    /* 0x00 */ u32 unk_00[2];
    /* 0x08 */ u16 unk_08[2];
    /* 0x0c */ u8 unk_0c;
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ u32 unk_14[2];
    /* 0x1c */ u32 unk_1c[2];

    u32 func_ov004_02235a0c();
    u32 func_ov004_02235a1c();
    void func_ov004_02235a2c();
    BOOL func_ov004_02235a54(u16 *p);
    void func_ov004_02235bc8();
    void func_ov004_02235c10();
    s32 func_ov004_02235c74();
    void func_ov004_02235c78();
    Unk_ov004_02235a0c();
    ~Unk_ov004_02235a0c();
};

// object with a byte flag at +0x1c
class Unk_ov004_02235984 {
public:
    /* 0x00 */ u8 unk_00[0x1c];
    /* 0x1c */ u8 unk_1c;

    void func_ov004_02235984();
};

// small helper at +0x50 of the main object, flag at +0x10
class Unk_ov004_0223598c {
public:
    /* 0x00 */ u8 unk_00[0x10];
    /* 0x10 */ u8 unk_10;

    void func_ov004_0223599c();
    void func_ov004_022359b4();
    void *func_ov004_022359d8();
    void func_ov004_022359e8();
    void func_ov004_02235990();
    u32 func_ov004_02235994();
    u32 func_ov004_0223598c();
};

// main object, vtable 0x0224e9d8
class Unk_ov004_0224e9d8 : public Unk_020d8c7c {
public:
    Unk_ov004_0224e9d8();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_24();
    virtual ~Unk_ov004_0224e9d8();

    /* 0x50 */ Unk_ov004_0223598c unk_50;
    /* 0x64 */ Unk_ov004_02233560 unk_64;
    /* 0x1c4 */ Unk_ov004_02233b3c unk_1c4;
    /* 0x2a8 */ u8 unk_2a8;
    /* 0x2a9 */ u8 unk_2a9;
    /* 0x2ac */ s32 unk_2ac;
    /* 0x2b0 */ u8 unk_2b0;
};

extern Unk_ov004_02235a0c data_ov004_02252070;
extern Unk_ov004_0223583c data_ov004_022520d4;
extern Unk_ov004_022351bc data_ov004_02252144;
extern Unk_ov004_02235708 data_ov004_022521c4;
extern Unk_ov004_022358c8 data_ov004_02251f84;
extern Unk_0209c15c data_ov004_02252058;
extern Unk_02000c8c data_ov004_0225203c;
extern s32 data_ov004_02251f98;

extern "C" {
void *__cxa_vec_ctor(void *array, u32 count, u32 size, void *(*ctor)(void *), void *(*dtor)(void *, s32));
void *__cxa_vec_cleanup(void *array, u32 count, u32 size, void *(*dtor)(void *, s32));
extern s16 data_02135f44[];
extern Unk_ov004_02233f3c_World *data_021c47c4;
extern u8 data_021c4890[];
extern void *data_021c620c;
extern u8 data_021d735c[];
extern Unk_ov004_02233244_Src data_021ed2b0;
extern s32 data_021f47e0[];
extern void *data_021f482c;
extern Unk_ov004_Vec3 data_021f4880;
extern const u8 data_ov004_022406a4[4];
extern const s8 data_ov004_022406a8[4];
extern const Unk_ov004_02233138_Rec data_ov004_022406ac;
extern const s32 data_ov004_022406b4[2];
extern const Unk_ov004_02233330_Tbl data_ov004_022406bc[7];
extern const u8 data_ov004_022406f4[0x44];
extern const u8 data_ov004_02240738[0x4c];
extern const u8 data_ov004_02240784[0x50];
extern const u8 data_ov004_022407d4[0x50];
extern const u8 data_ov004_02240824[0x50];
extern const u8 data_ov004_02240874[0x54];
extern const u8 data_ov004_022408c8[0x54];
extern const u16 data_ov004_0224091c[0x30];
extern const Unk_ov004_02233138_Rec data_ov004_0224097c[0x6e9];
extern const char *data_ov004_0224e930;
extern const char *data_ov004_0224e9a4[11];
extern u8 data_ov004_02251f74;
extern u8 data_ov004_02251f78;
extern u16 data_ov004_02251f7c;
extern Unk_ov004_0224e9d8 *data_ov004_02251f80;
extern s8 data_ov004_022523c4;
extern u8 *data_ov004_022523d4;
void func_01ffb898(void *v, void *m, void *out);
void func_01ffca8c(void *, void *, void *);
s32 func_01ffcb0c(s32 a, s32 b);
s32 func_01ffd028(void *, void *);
s32 func_02002bdc(void *a, void *b);
s32 func_02002cf8(u32, void *, s32, s32, u32);
void func_02003830(void *);
void func_02003840(void *);
u32 func_02003850(void);
void *func_02003878(void *, s32);
s32 func_02003ccc();
void func_02003cd0(void *, u32);
void func_02003cd8(void *);
void func_02003ce0(void *, u32);
void func_02003d34(void *, u32, u32);
void func_02003d74(void *, u32, u32);
void func_02003db4(void *, u32);
void func_02003dbc(void *);
void func_02003dc4(void *);
void func_02004b60();
s32 func_0202ffdc(void *);
s32 func_02031284(s32 x, s32 y);
void func_0203442c();
void *func_02037558(void *, u32, u32, u8);
void *func_0203c2cc(void *);
s32 func_0204b248(s32 a, s32 b);
s32 func_0204b25c(void *p);
s32 func_0204b274(void *);
s32 func_0204b2d4(void *p);
s32 func_0204b300(u16 *p);
u32 func_0204b354(u16 *p);
u16 *func_0204eba0(Unk_ov004_02233f3c_World *w, void *q, u32 z);
u16 *func_0204ebd8(Unk_ov004_02233f3c_World *w, s32 hx, s32 hy, s32 lx, s32 ly, u32 layer);
void func_0204ed8c(Unk_ov004_Vec3 *out, s32 x, s32 z);
void func_0204ee10(s32 *a, s32 *b, void *c);
s32 func_0204ff6c(void *p);
s32 func_020515b8(s32, void *, s32);
s32 func_02051da4(void *, s32, s32, s32);
s16 *func_0205242c(Unk_ov004_022341c0_Buf *b, u32 i);
u32 func_0205248c(Unk_ov004_022341c0_Buf *b);
void func_020524a4(Unk_ov004_022341c0_Buf *b);
void func_020524a8(Unk_ov004_022341c0_Buf *b, void *cell);
s32 func_02052f44(s32 a);
s32 func_02052fc4(s32 a);
s32 func_02053194(s32);
s32 func_02053248(s32 a);
s32 func_020534a4(s32);
void func_02054710(void *self);
void func_02054720(void *self, s32 a, s32 b, s32 c, s32 d, s32 e);
void func_020547a4(void *p);
void func_020547e4(void *p);
BOOL func_02054800(void *self, void *x);
void func_020548a0(void *self);
void func_020548d0(void *self);
void func_02055488(void *self, void *cb, void *arg);
void func_02055524(void *self);
BOOL func_02055600(void *self, void *res, u32 a);
void func_02055724(void *a, void *b);
void *func_0205588c(void *a, void *heap);
BOOL func_020565e8(void *p, u32 a);
BOOL func_02056654(void *self);
BOOL func_02056bf8(void *p);
BOOL func_02056ca4(void *self, void *hdr, const char *n1, const char *n2, void *x, void *y, u32 flag);
void func_02056d54(void *p);
void func_02056d8c(void *p);
void func_0205c13c();
void func_0205c158();
void func_02061168(u16 *out, u16 *in, s32 n);
s32 func_020639e8(char *buf, const char *fmt, ...);
s32 func_02063b8c(s32 a);
void *func_020641ec(const char *a, void *b, s32 c, s32 d);
s32 func_02088bf8(void *a, void *b, void *c, u32 d, u32 e, u32 f, u32 g, u32 h, u32 i, u32 j);
s32 func_02089040(void *a);
Unk_ov004_0224882c *func_02095204(s32 a);
s32 func_0209750c(void);
s32 func_02097740(void *a, s32 b);
s32 func_0209888c(...);
void func_0209c1a4(void *p, s32 n, s32 a, s32 b, s32 c, void *d, void *e, void *f);
s32 func_0209cc34(void *);
s32 func_0209cef4();
void func_0209cf18(void *);
void func_0209d498(void *);
s32 func_020b4904(s32);
s32 func_020b50e8();
BOOL func_020b51a4();
BOOL func_020b51fc();
s32 func_020b5254();
BOOL func_020b52ac();
BOOL func_020b52d0();
BOOL func_020b52f8();
void *func_020b8d98(void *);
s32 func_020e780c(s32 a, s32 b);
s32 func_020e7b98(s32 a, s32 b);
void func_020e8388(s32 *m, s32 x, s32 y, s32 z);
void func_020e8404(s32 *m, s32 a);
void *func_020e8558(void *p);
void func_020e85fc(void *heap, void *p);
void *func_020e8608(void *heap, s32 size);
void func_020e885c(void *p);
void func_020e8c88(void *p);
void *func_020e8da0(u32 size, void *heap);
u32 func_020e8e7c(u32, u32);
s32 func_020e93a0(Unk_ov004_02235528_V3 *, s32);
s32 func_020e9650(void *a, void *b);
void func_020e97c8(void *, s32);
void func_020e9960(void *out, void *a, void *b);
void func_020ed188(void *p);
void func_020f3a18(void *);
void *func_021012bc(const char *name);
void func_02101310(void *buf);
BOOL func_02101340(void *buf, const char *name, void *data);
void *func_0210629c(void *p);
void *func_021062dc(void *p);
void *func_021065dc(void *p);
void *func_021065f8(void *p, s32 a);
void *func_02106690(void *p);
void *func_021066ac(void *p, s32 a);
s32 func_02133150(s32 a, s32 b);
s32 func_ov004_02205820(void *, s32);
s32 func_ov004_022058c0(void *, s32);
s32 func_ov004_02205954(void *, s32);
void func_ov004_02206f3c(u16 *out, Unk_ov004_0224882c *o);
s32 func_ov004_02206f74();
BOOL func_ov004_02206f7c(Unk_ov004_0224882c *);
s32 func_ov004_02207598(void *, void *);
s32 func_ov004_022075a4(void *, s32);
s32 func_ov004_02207c04(s32 a);
u32 func_ov004_02208750(void *);
s32 func_ov004_0220875c(void *);
u32 func_ov004_022087a4(void *o);
BOOL func_ov004_022087e8(Unk_ov004_Vec3 *, s32, s32, s32, s32);
void func_ov004_02209108(void *);
void func_ov004_02209150(void *);
void func_ov004_02209198(void *);
BOOL func_ov004_02209bb4(Unk_ov004_0224882c *);
BOOL func_ov004_02209c10(Unk_ov004_0224882c *);
BOOL func_ov004_02209c44(Unk_ov004_0224882c *);
BOOL func_ov004_02209c88(Unk_ov004_0224882c *);
s32 func_ov004_02209d40(Unk_ov004_0224882c *);
s32 func_ov004_02209d4c(Unk_ov004_0224882c *);
Unk_ov004_0224882c *func_ov004_02209d58(s32 a, s32 b, s32 c, s32 d, u32 e, s32 f);
s32 func_ov004_0220af14(void *p);
s32 func_ov004_0220af28(void *p);
s32 func_ov004_0220c93c(void *p);
s32 func_ov004_0220c950(void *p);
void func_ov004_0220e738(Unk_ov004_0224882c *);
void func_ov004_0220f29c(Unk_ov004_0224882c *);
void func_ov004_0220f2a8(Unk_ov004_0224882c *);
BOOL func_ov004_02210dd8(Unk_ov004_0224882c *, Unk_ov004_Vec3 *, s32, Unk_ov004_Vec3 *);
void func_ov004_022326fc(void *);
void func_ov004_02235180();
void func_ov004_022356cc();
u32 _ZN18Unk_ov004_0223598c19func_ov004_02235990Ev(Unk_ov004_0223598c *);
}


extern "C" Unk_ov004_0224e9d8 *func_ov004_02235fb4();
extern "C" u32 func_ov004_02235d10();
extern "C" void func_ov004_02235d04();
extern "C" Unk_ov004_02235a0c *func_ov004_02235a04();
extern "C" Unk_ov004_0223598c *func_ov004_022359f0();
extern "C" void func_ov004_02235980();
extern "C" Unk_ov004_022358c8 *func_ov004_022358d8();
extern "C" Unk_ov004_0223583c *func_ov004_0223584c();
extern "C" Unk_ov004_02235708 *func_ov004_02235718();
extern "C" Unk_ov004_022351bc *func_ov004_022354d8();
extern "C" s32 func_ov004_022350f4();
extern "C" s32 func_ov004_022350c8();
extern "C" s32 func_ov004_02235028(Unk_ov004_0224882c *self);
extern "C" s32 func_ov004_02234ff4(s32 x, s32 y, s32 a, s32 b, u8 c, s32 d);
extern "C" s32 func_ov004_02234f80(s32 x, s32 y);
extern "C" s32 func_ov004_02234f6c(Unk_ov004_Vec3 *p);
extern "C" s32 func_ov004_02234f30(Unk_ov004_Vec3 *pos, s32 ang, Unk_ov004_Vec3 *out);
extern "C" s32 func_ov004_02234ed8(Unk_ov004_Vec3 *pos, s32 ang);
extern "C" s32 func_ov004_02234e80(Unk_ov004_Vec3 *pos, s32 ang);
extern "C" s32 func_ov004_02234df8(Unk_ov004_Vec3 *p, s16 ang, s32 dist);
extern "C" BOOL func_ov004_02234dd4(Unk_ov004_Vec3 *pos, s32 ang);
extern "C" BOOL func_ov004_02234d80(Unk_ov004_Vec3 *pos, s32 ang);
extern "C" BOOL func_ov004_02234d2c(Unk_ov004_Vec3 *pos, s32 ang);
extern "C" BOOL func_ov004_02234cd8();
extern "C" void func_ov004_02234c7c(u32 v, BOOL (*f)(Unk_ov004_0224882c *), s32 a);
extern "C" s32 func_ov004_02234c2c(BOOL (*f)(Unk_ov004_0224882c *));
extern "C" Unk_ov004_0224882c *func_ov004_02234bb4(BOOL (*f)(Unk_ov004_0224882c *), s32 a);
extern "C" u16 func_ov004_02234ba8();
extern "C" s32 func_ov004_02234b0c(u32 key);
extern "C" u32 func_ov004_02234af8();
extern "C" BOOL func_ov004_02234ad4();
extern "C" void func_ov004_02234ad0(void *);
extern "C" void func_ov004_02234a48(void *);
extern "C" void func_ov004_022349a8(void *);
extern "C" void func_ov004_02234908(void *);
extern "C" void func_ov004_02234774(Unk_ov004_0224e9d8 *self);
extern "C" s32 func_ov004_022345c4(s32 *ox, s32 *oy, Unk_ov004_Vec3 *pos, s32 ang, u16 *p1, u16 *p2);
extern "C" s32 func_ov004_02234588(s32 *a, s32 *b, u16 *c, u16 *d);
extern "C" u8 func_ov004_02234550(u32 i);
extern "C" s32 func_ov004_022344e8(s32 idx, u16 *p1, u16 *p2);
extern "C" s32 func_ov004_022344dc(s32 idx);
extern "C" Unk_ov004_Vec3 *func_ov004_022344a4(s32 idx);
extern "C" void func_ov004_02234490(Unk_ov004_Vec3 *v);
extern "C" s32 func_ov004_02234464(Unk_ov004_0224882c *p);
extern "C" s32 func_ov004_02234440(s32 i);
extern "C" s32 func_ov004_02234320(s32 *ox, s32 *oy, Unk_ov004_Vec3 *pos, s32 ang, s32 idx);
extern "C" s32 func_ov004_022341c0(void *out, s32 x, s32 y, s32 dir, s32 pl, u32 layer, s32 cx, s32 cy);
extern "C" s32 func_ov004_02233f3c(void *out, u16 *tile, Unk_ov004_Vec3 *pos, s32 ang, s32 mode);
extern "C" s32 func_ov004_02233f08(void *a, u16 *b, u32 c);
extern "C" s32 func_ov004_02233ee0();
extern "C" s32 func_ov004_02233e98(void *a, u32 b, u32 c);
extern "C" s32 func_ov004_02233e50(void *a, u32 b, u32 c);
extern "C" s32 func_ov004_02233e08(void *a, u32 b, u32 c);
extern "C" s32 func_ov004_02233dc0(void *a, u32 b, u32 c);
extern "C" s32 func_ov004_02233d88(void *o0);
extern "C" s32 func_ov004_02233d64(s32 a, s32 b);
extern "C" s32 func_ov004_02233d2c(void *o0);
extern "C" s32 func_ov004_02233d08(s32 a, s32 b);
extern "C" BOOL func_ov004_02233d04(void);
extern "C" BOOL func_ov004_02233d00(void);
extern "C" BOOL func_ov004_02233cfc(void);
extern "C" s32 func_ov004_02233cdc(void);
extern "C" s32 func_ov004_02233cb4(void);
extern "C" Unk_0213bac4 *func_ov004_02233c94(void);
extern "C" s32 func_ov004_02233c74(void);
extern "C" s32 func_ov004_02233c54(void);
extern "C" void func_ov004_02233c3c(void);
extern "C" u8 func_ov004_02233c20(void);
extern "C" void func_ov004_02233c18(u8 *p);
extern "C" void func_ov004_02233c10(u8 *p);
extern "C" void *func_ov004_02233bf4(void);
extern "C" void func_ov004_02233b90(Unk_ov004_02233b90_Obj *o);
extern "C" void func_ov004_02233b80(Unk_ov004_02233b3c *r);
extern "C" void *func_ov004_02233b54(Unk_ov004_02233b3c *r);
extern "C" void *func_ov004_02233b3c(Unk_ov004_02233b3c *r);
extern "C" void func_ov004_02233b20(Unk_ov004_02233b3c *r);
extern "C" void func_ov004_02233b04(Unk_ov004_02233b3c *r);
extern "C" void *func_ov004_02233b00(Unk_ov004_02233b3c *r);
extern "C" void func_ov004_02233af0(Unk_ov004_02233b3c *r, Unk_ov004_02233b3c_V3 *v);
extern "C" BOOL func_ov004_02233a70(Unk_ov004_02233b3c *r, s32 x, volatile u8 *flag, Unk_ov004_02233b3c_V3 *pos, s32 e);
extern "C" BOOL func_ov004_02233a48(Unk_ov004_02233b3c *r, volatile u8 *a, Unk_ov004_02233b3c_V3 *b, s32 c);
extern "C" BOOL func_ov004_02233a20(Unk_ov004_02233b3c *r, volatile u8 *a, Unk_ov004_02233b3c_V3 *b, s32 c);
extern "C" BOOL func_ov004_022339cc(Unk_ov004_02233b3c *r, volatile u8 *a, Unk_ov004_02233b3c_V3 *out);
extern "C" BOOL func_ov004_0223399c(Unk_ov004_02233b3c *r);
extern "C" BOOL func_ov004_0223397c(Unk_ov004_02233b3c *r);
extern "C" BOOL func_ov004_022338e0(Unk_ov004_02233b3c *r);
extern "C" BOOL func_ov004_022338d0(Unk_ov004_02233b3c *r);
extern "C" BOOL func_ov004_022337d4(Unk_ov004_02233b3c *r);
extern "C" BOOL func_ov004_022337c8(Unk_ov004_02233b3c *r);
extern "C" u32 func_ov004_022337c4(Unk_ov004_02233b3c *r);
extern "C" u32 func_ov004_022337c0(Unk_ov004_02233b3c *r);
extern "C" u32 func_ov004_022337bc(Unk_ov004_02233b3c *r);
extern "C" void *func_ov004_02233790(Unk_ov004_02233790 *p);
extern "C" void *func_ov004_0223377c(Unk_ov004_02233790 *p);
extern "C" void *func_ov004_02233744(Unk_ov004_02233790 *p, u32 a);
extern "C" s32 func_ov004_0223372c(u32 i);
extern "C" BOOL func_ov004_02233660(Unk_ov004_02233790 *p, u32 id, s32 x);
extern "C" void func_ov004_02233644(Unk_ov004_02233790 *p);
extern "C" void func_ov004_022335fc(Unk_ov004_02233790 *p);
extern "C" void func_ov004_022335dc(Unk_ov004_02233790 *p);
extern "C" s32 func_ov004_022335d4(Unk_ov004_02233790 *p);
extern "C" s32 func_ov004_022335b8(Unk_ov004_02233790 *p);
extern "C" u16 func_ov004_022335b0(Unk_ov004_02233790 *p);
extern "C" u32 func_ov004_022335a8(Unk_ov004_02233790 *p);
extern "C" void *func_ov004_02233560(Unk_ov004_02233560 *q);
extern "C" void *func_ov004_02233544(Unk_ov004_02233560 *q);
extern "C" void func_ov004_0223349c(Unk_ov004_02233560 *q);
extern "C" BOOL func_ov004_022333f8(Unk_ov004_02233560 *o, s32 a, s32 b);
extern "C" void func_ov004_022333a8(Unk_ov004_02233560 *o);
extern "C" void func_ov004_02233380(Unk_ov004_02233560 *o);
extern "C" u8 func_ov004_02233330(void *);
extern "C" s32 func_ov004_022332b8();
extern "C" s32 func_ov004_02233244(void *);
extern "C" void func_ov004_022331e0(Unk_ov004_02233560 *o);
extern "C" BOOL func_ov004_022331d0(Unk_ov004_02233560 *o);
extern "C" s32 func_ov004_022331b8(Unk_ov004_02233560 *o);
extern "C" s32 func_ov004_022331a0(Unk_ov004_02233560 *o);
extern "C" s32 func_ov004_02233194(Unk_ov004_02233560 *o);
extern "C" s32 func_ov004_02233188(Unk_ov004_02233560 *o);
extern "C" s32 func_ov004_02233170(Unk_ov004_02233560 *o);
extern "C" s32 func_ov004_02233158(Unk_ov004_02233560 *o);
extern "C" const Unk_ov004_02233138_Rec *func_ov004_02233138(s32 idx);
extern "C" u16 func_ov004_02233128(s32 idx);
extern "C" u16 func_ov004_02233118(s32 idx);
extern "C" u16 func_ov004_02233108(s32 idx);
extern "C" u16 func_ov004_022330f8(s32 idx);
extern "C" void func_ov004_022330cc(s32 a);
extern "C" void func_ov004_022330a0(s32 a);
extern "C" void func_ov004_02233074(s32 a);

#define TILE_ENTRY(name, base)                                              \
    extern "C" s32 name(void *a, u32 b, u32 c) {                            \
        s32 idx = func_ov004_02233ee0();                                    \
        s32 r;                                                              \
        if (idx != -1) {                                                    \
            u32 v = b + idx * 8;                                            \
            u16 t = (v < 0x20) ? (base + v * 4) : base;                     \
            r = func_ov004_02233f08(a, &t, c);                              \
        } else {                                                            \
            r = 2;                                                          \
        }                                                                   \
        return r;                                                           \
    }


// forward declarations of the unit's data
extern "C" const u8 data_ov004_022406a4[4];
extern "C" const s8 data_ov004_022406a8[4];
extern "C" const Unk_ov004_02233138_Rec data_ov004_022406ac;
extern "C" const s32 data_ov004_022406b4[2];
extern "C" const Unk_ov004_02233330_Tbl data_ov004_022406bc[7];
extern "C" const u8 data_ov004_022406f4[0x44];
extern "C" const u8 data_ov004_02240738[0x4c];
extern "C" const u8 data_ov004_02240784[0x50];
extern "C" const u8 data_ov004_022407d4[0x50];
extern "C" const u8 data_ov004_02240824[0x50];
extern "C" const u8 data_ov004_02240874[0x54];
extern "C" const u8 data_ov004_022408c8[0x54];
extern "C" const u16 data_ov004_0224091c[0x30];
extern "C" const Unk_ov004_02233138_Rec data_ov004_0224097c[0x6e9];
extern "C" char data_ov004_0224e934[8];
extern "C" char data_ov004_0224e93c[8];
extern "C" char data_ov004_0224e944[8];
extern "C" char data_ov004_0224e94c[8];
extern "C" char data_ov004_0224e954[8];
extern "C" char data_ov004_0224e95c[8];
extern "C" char data_ov004_0224e964[8];
extern "C" char data_ov004_0224e96c[8];
extern "C" char data_ov004_0224e974[8];
extern "C" char data_ov004_0224e97c[8];
extern "C" char data_ov004_0224e984[8];
extern "C" Unk_ov004_0224e98c_Entry data_ov004_0224e98c;
extern "C" char data_ov004_0224e994[0x10];
extern "C" const char *data_ov004_0224e930;
extern "C" const char *data_ov004_0224e9a4[11];
extern "C" u8 data_ov004_02251f74;
extern "C" u8 data_ov004_02251f78;
extern "C" u16 data_ov004_02251f7c;
extern "C" Unk_ov004_0224e9d8 *data_ov004_02251f80;

namespace Unk_ov004_02233f3c_Ns {
extern "C" s32 func_ov004_022341c0(void *out, s32 x, s32 y, s32 dir, s32 pl, u8 layer, s32 cx, s32 cy);
}

static inline BOOL Unk_ov004_02234f30_Is37(Unk_ov004_0224882c *m) {
    if (*(u16 *)((u8 *)m + 0xc) == 0x37) {
        return TRUE;
    }
    return FALSE;
}

// @0x2235fb4 unk_02235984.cpp
extern "C" Unk_ov004_0224e9d8 *func_ov004_02235fb4() {
    Unk_ov004_0224e9d8 *p = new Unk_ov004_0224e9d8;
    return p;
}

// @0x2235f78 unk_02235984.cpp
Unk_ov004_0224e9d8::Unk_ov004_0224e9d8() {
    unk_50.func_ov004_022359e8();
    func_ov004_02233560(&unk_64);
    func_ov004_02233b54(&unk_1c4);
}

// @0x2235ef4 unk_02235984.cpp
Unk_ov004_0224e9d8::~Unk_ov004_0224e9d8() {
    func_ov004_02233b3c(&unk_1c4);
    func_ov004_02233544(&unk_64);
    unk_50.func_ov004_022359d8();
}

// @0x2235dfc unk_02235984.cpp
BOOL Unk_ov004_0224e9d8::vfunc_00() {
    if (func_020b52f8() || func_020b51a4()) {
        data_ov004_02251f78 = 1;
    }
    unk_2a9 = 1;
    unk_2a8 = 0;
    unk_2ac = 0;
    unk_2b0 = 0;
    data_ov004_02251f74 = func_ov004_02234ad4();
    data_ov004_02251f84.func_ov004_0223588c(func_ov004_02234af8());
    data_ov004_02251f80 = this;
    func_ov004_02235718()->func_ov004_022356cc();
    func_ov004_022354d8()->func_ov004_02235180();
    s32 flags = 0x1cc4;
    if (func_020b51fc()) {
        flags = 0x1c00;
    }
    func_0209c1a4(&data_ov004_02252058, func_ov004_02234af8(), 0x2000, 0x80, flags, (void *)func_0205c158,
                  (void *)func_0205c13c, (void *)"\x89\xc6\x8b\xef\x83\x7d\x83\x6c\x81\x5b\x83\x57\x83\x83\x81\x5b");
    func_ov004_02234ad0(this);
    if (func_ov004_02234af8() > 1) {
        func_ov004_0223349c(&unk_64);
    }
    func_ov004_02233b20(&unk_1c4);
    func_ov004_02235a04()->func_ov004_02235c10();
    func_ov004_02234a48(this);
    return TRUE;
}

// @0x2235d7c unk_02235984.cpp
BOOL Unk_ov004_0224e9d8::vfunc_18() {
    unk_50.func_ov004_022359b4();
    unk_50.func_ov004_0223599c();
    data_ov004_02251f7c = (data_ov004_02251f7c + 1) % 0x28;
    if (func_ov004_02234af8() > 1) {
        if (func_0204ff6c(data_021c4890) == 4) {
            if (!func_020b52d0()) {
                if (!func_020b52ac()) {
                    func_ov004_022333a8(&unk_64);
                    func_ov004_02234774(this);
                    func_ov004_02233380(&unk_64);
                }
            }
        }
    }
    func_ov004_02234908(this);
    func_ov004_022349a8(this);
    func_ov004_022354d8()->func_ov004_02235180();
    return TRUE;
}

// @0x2235d78 unk_02235984.cpp
BOOL Unk_ov004_0224e9d8::vfunc_24() {
    return TRUE;
}

// @0x2235d1c unk_02235984.cpp
BOOL Unk_ov004_0224e9d8::vfunc_0c() {
    unk_50.func_ov004_02235994();
    func_ov004_02233b04(&unk_1c4);
    if (func_ov004_02234af8() > 1) {
        func_ov004_022331e0(&unk_64);
    }
    func_ov004_02235a04()->func_ov004_02235bc8();
    data_ov004_02252058.func_0209c15c();
    data_ov004_02251f80 = 0;
    func_ov004_022354d8()->func_ov004_02235180();
    data_ov004_02251f84.func_ov004_02235870();
    return TRUE;
}

// @0x2235d10 unk_02235984.cpp
extern "C" u32 func_ov004_02235d10() {
    return data_ov004_02251f74;
}

// @0x2235d04 unk_02235984.cpp
extern "C" void func_ov004_02235d04() {
    data_ov004_02251f74 = 1;
}

// @0x2235cc0 unk_02235984.cpp
Unk_ov004_02235a0c::Unk_ov004_02235a0c() {
    __cxa_vec_ctor(unk_08, 2, 2, (void *(*)(void *))func_0203442c, (void *(*)(void *, s32))func_02004b60);
    func_ov004_02235c78();
    u32 i = 0;
    u32 z = i;
    for (; i < 2; i++) {
        unk_14[i] = z;
        unk_1c[i] = z;
    }
}

// @0x2235c9c unk_02235984.cpp
Unk_ov004_02235a0c::~Unk_ov004_02235a0c() {
    func_ov004_02235c78();
    __cxa_vec_cleanup(unk_08, 2, 2, (void *(*)(void *, s32))func_02004b60);
}

// @0x2235c78 unk_02235984.cpp
void Unk_ov004_02235a0c::func_ov004_02235c78() {
    u32 i = 0;
    u32 z = i;
    for (; i < 2; i++) {
        unk_00[i] = z;
        unk_08[i] = 0xfff1;
        unk_0c = z;
    }
}

// @0x2235c74 unk_02235984.cpp
s32 Unk_ov004_02235a0c::func_ov004_02235c74() {
    return unk_10;
}

// @0x2235c10 unk_02235984.cpp
void Unk_ov004_02235a0c::func_ov004_02235c10() {
    u32 *g = (u32 *)data_021f482c;
    for (u32 i = 0; i < 2; i++) {
        u32 *p = (u32 *)((u8 *)this + i * 4);
        if (p[5] == 0) {
            p[5] = (u32)func_020e8608(g, 0x10c4);
            u32 t5 = *(volatile u32 *)&p[5];
            if (t5) {
                t5 = (u32)func_020b8d98((void *)t5);
            }
            p[5] = t5;
        }
        if (p[7] == 0) {
            p[7] = (u32)func_020e8608(g, 0x20c4);
            u32 t7 = *(volatile u32 *)&p[7];
            if (t7) {
                t7 = (u32)func_0203c2cc((void *)t7);
            }
            p[7] = t7;
        }
    }
}

// @0x2235bc8 unk_02235984.cpp
void Unk_ov004_02235a0c::func_ov004_02235bc8() {
    u32 *g = (u32 *)data_021f482c;
    volatile s32 z0 = 0;
    volatile s32 z1 = 0;
    for (u32 i = 0; i < 2; i++) {
        u32 *p = (u32 *)((u8 *)this + i * 4);
        if (p[5]) {
            func_020e85fc(g, (void *)p[5]);
            p[5] = z0;
        }
        if (p[7]) {
            func_020e85fc(g, (void *)p[7]);
            p[7] = z1;
        }
    }
}

// @0x2235a54 unk_02235984.cpp
BOOL Unk_ov004_02235a0c::func_ov004_02235a54(u16 *p) {
    u16 v;
    s32 out;
    func_02061168(&v, p, 1);
    BOOL r = FALSE;
    volatile u16 *pv0 = &v;
    u32 a = *pv0;
    u32 b = *pv0;
    if (b >= 0x1100 && a <= 0x1143) {
        r = TRUE;
    }
    if (r) {
        BOOL in = FALSE;
        u32 x = *p;
        if (x < 0x1100 || x > 0x1143) {
        } else {
            in = TRUE;
        }
        unk_10 = in ? x - 0x1100 : -1;
        v = 0x4a64;
    } else if (a >= 0x1144 && a <= 0x1187) {
        {
            BOOL in = FALSE;
            u32 x = *p;
            if (x < 0x1144 || x > 0x1187) {
            } else {
                in = TRUE;
            }
            unk_10 = in ? x - 0x1144 : -1;
            v = 0x4a60;
        }
    } else if (a >= 0x1000 && a <= 0x10ff) {
        u32 idx = func_0204b354(&v);
        u32 t;
        if (idx < 0x40) {
            t = idx * 4 + 0x4a68;
        } else {
            t = 0x4a68;
        }
        v = t;
    }
    u16 *pv = &unk_08[unk_0c & 1];
    BOOL same;
    if (func_0204b2d4(p)) {
        s32 a = func_0204b25c(p);
        s32 b = func_0204b25c(pv);
        if (a == b) {
            same = TRUE;
        } else {
            same = FALSE;
        }
    } else {
        if (*p == *pv) {
            same = TRUE;
        } else {
            same = FALSE;
        }
    }
    if (!same) {
        u32 *slot = &unk_00[unk_0c & 1];
        if (*slot) {
            func_020ed188((void *)*slot);
            unk_00[unk_0c & 1] = 0;
        }
        u8 n = (u8)((unk_0c + 1) & 1);
        u32 *slot2 = &unk_00[n];
        if (*slot2 == 0) {
            if (func_ov004_02233f08(&out, &v, 2) == 3) {
                *slot2 = func_ov004_02235028((Unk_ov004_0224882c *)out);
                unk_08[n] = *p;
                unk_0c = n;
                return TRUE;
            }
        }
    }
    return FALSE;
}

// @0x2235a2c unk_02235984.cpp
void Unk_ov004_02235a0c::func_ov004_02235a2c() {
    for (u32 i = 0; i < 2; i++) {
        if (unk_00[i]) {
            func_020ed188((void *)unk_00[i]);
        }
    }
    func_ov004_02235c78();
}

// @0x2235a1c unk_02235984.cpp
u32 Unk_ov004_02235a0c::func_ov004_02235a1c() {
    return unk_14[unk_0c & 1];
}

// @0x2235a0c unk_02235984.cpp
u32 Unk_ov004_02235a0c::func_ov004_02235a0c() {
    return unk_1c[unk_0c & 1];
}

// @0x2235a04 unk_02235984.cpp
extern "C" Unk_ov004_02235a0c *func_ov004_02235a04() {
    return &data_ov004_02252070;
}

// @0x22359f0 unk_02235984.cpp
extern "C" Unk_ov004_0223598c *func_ov004_022359f0() {
    Unk_ov004_0224e9d8 *o = data_ov004_02251f80;
    if (o) {
        return &o->unk_50;
    }
    return 0;
}

// @0x22359e8 unk_02235984.cpp
void Unk_ov004_0223598c::func_ov004_022359e8() {
    unk_10 = 0;
}

// @0x22359d8 unk_02235984.cpp
void *Unk_ov004_0223598c::func_ov004_022359d8() {
    func_020f3a18(this);
    return this;
}

// @0x22359b4 unk_02235984.cpp
void Unk_ov004_0223598c::func_ov004_022359b4() {
    if (func_ov004_0223598c() == 0) {
        if (func_02003ccc()) {
            func_02003dc4(this);
            unk_10 = 1;
        }
    }
}

// @0x223599c unk_02235984.cpp
void Unk_ov004_0223598c::func_ov004_0223599c() {
    if (func_ov004_0223598c()) {
        func_02003dbc(this);
    }
}

// @0x2235994 unk_02235984.cpp
u32 Unk_ov004_0223598c::func_ov004_02235994() {
    return func_ov004_0223598c();
}

// @0x2235990 unk_02235984.cpp
void Unk_ov004_0223598c::func_ov004_02235990() {
}

// @0x223598c unk_02235984.cpp
u32 Unk_ov004_0223598c::func_ov004_0223598c() {
    return unk_10;
}

// @0x2235984 unk_02235984.cpp
void Unk_ov004_02235984::func_ov004_02235984() {
    unk_1c = 0;
}

// @0x2235980 unk_022350c8.cpp
extern "C" void func_ov004_02235980() {
}

// @0x2235948 unk_022350c8.cpp
void Unk_ov004_02235cc0::func_ov004_02235948() {
    if (!unk_1c) {
        Unk_ov004_0223598c *h = func_ov004_022359f0();
        if (h != 0) {
            if (h->func_ov004_0223598c()) {
                func_02003db4(this, _ZN18Unk_ov004_0223598c19func_ov004_02235990Ev(h));
                unk_1c = 1;
            }
        }
    }
}

// @0x2235930 unk_022350c8.cpp
void Unk_ov004_02235cc0::func_ov004_02235930() {
    if (unk_1c) {
        func_02003cd8(this);
        unk_1c = 0;
    }
}

// @0x223591c unk_022350c8.cpp
void Unk_ov004_02235cc0::func_ov004_0223591c(u32 a, u32 b) {
    if (unk_1c) {
        func_02003d74(this, a, b);
    }
}

// @0x2235908 unk_022350c8.cpp
void Unk_ov004_02235cc0::func_ov004_02235908(u32 a, u32 b) {
    if (unk_1c) {
        func_02003d34(this, a, b);
    }
}

// @0x22358f4 unk_022350c8.cpp
void Unk_ov004_02235cc0::func_ov004_022358f4(u32 a) {
    if (unk_1c) {
        func_02003ce0(this, a);
    }
}

// @0x22358e0 unk_022350c8.cpp
void Unk_ov004_02235cc0::func_ov004_022358e0(u32 a) {
    if (unk_1c) {
        func_02003cd0(this, a);
    }
}

// @0x22358d8 unk_022350c8.cpp
extern "C" Unk_ov004_022358c8 *func_ov004_022358d8() {
    return &data_ov004_02251f84;
}

// @0x22358c8 unk_022350c8.cpp
Unk_ov004_022358c8::Unk_ov004_022358c8() {
    func_ov004_022358bc();
}

// @0x22358c4 unk_022350c8.cpp
Unk_ov004_022358c8::~Unk_ov004_022358c8() {
}

// @0x22358bc unk_022350c8.cpp
void Unk_ov004_022358c8::func_ov004_022358bc() {
    unk_00 = 0;
}

// @0x223588c unk_022350c8.cpp
BOOL Unk_ov004_022358c8::func_ov004_0223588c(s32 n) {
    if (unk_00 == 0) {
        unk_00 = func_020e8e7c(n * 0x93a, (u32)data_021f482c);
        return TRUE;
    }
    return FALSE;
}

// @0x2235870 unk_022350c8.cpp
void Unk_ov004_022358c8::func_ov004_02235870() {
    if (unk_00 != 0) {
        func_020e8c88((void *)unk_00);
    }
    func_ov004_022358bc();
}

// @0x2235860 unk_022350c8.cpp
void Unk_ov004_022358c8::func_ov004_02235860() {
    func_020e8608((void *)unk_00, 0x8d6);
}

// @0x2235854 unk_022350c8.cpp
void Unk_ov004_022358c8::func_ov004_02235854(void *p) {
    func_020e85fc((void *)unk_00, p);
}

// @0x223584c unk_022350c8.cpp
extern "C" Unk_ov004_0223583c *func_ov004_0223584c() {
    return &data_ov004_022520d4;
}

// @0x223583c unk_022350c8.cpp
Unk_ov004_0223583c::Unk_ov004_0223583c() {
    func_ov004_02235828();
}

// @0x2235838 unk_022350c8.cpp
Unk_ov004_0223583c::~Unk_ov004_0223583c() {
}

// @0x2235828 unk_022350c8.cpp
void Unk_ov004_0223583c::func_ov004_02235828() {
    for (u32 i = 0; i < 0x1c; i++) {
        unk_00[i] = 0;
    }
}

// @0x22357e0 unk_022350c8.cpp
s32 Unk_ov004_0223583c::func_ov004_022357e0(void *v) {
    for (u32 i = 0; i < func_ov004_02234af8(); i++) {
        if (unk_00[i] == v) {
            return TRUE;
        }
    }
    for (u32 i = 0; i < func_ov004_02234af8(); i++) {
        if (unk_00[i] == 0) {
            unk_00[i] = v;
            return TRUE;
        }
    }
    return FALSE;
}

// @0x22357b0 unk_022350c8.cpp
s32 Unk_ov004_0223583c::func_ov004_022357b0(void *v) {
    for (u32 i = 0; i < func_ov004_02234af8(); i++) {
        if (unk_00[i] == v) {
            unk_00[i] = 0;
            return TRUE;
        }
    }
    return FALSE;
}

// @0x2235788 unk_022350c8.cpp
s32 Unk_ov004_0223583c::func_ov004_02235788() {
    u32 n = 0;
    for (u32 i = 0; i < func_ov004_02234af8(); i++) {
        if (unk_00[i] != 0) {
            n++;
        }
    }
    return n;
}

// @0x223576c unk_022350c8.cpp
s32 Unk_ov004_0223583c::func_ov004_0223576c() {
    u32 n = func_ov004_02234af8();
    return n - func_ov004_02235788();
}

// @0x2235740 unk_022350c8.cpp
s32 Unk_ov004_0223583c::func_ov004_02235740(void *v) {
    for (u32 i = 0; i < func_ov004_02234af8(); i++) {
        if (unk_00[i] == v) {
            return i;
        }
    }
    return -1;
}

// @0x2235720 unk_022350c8.cpp
Unk_ov004_0224882c *Unk_ov004_0223583c::func_ov004_02235720(u32 idx) {
    if (idx < func_ov004_02234af8()) {
        return (Unk_ov004_0224882c *)unk_00[idx];
    }
    return 0;
}

// @0x2235718 unk_022350c8.cpp
extern "C" Unk_ov004_02235708 *func_ov004_02235718() {
    return &data_ov004_022521c4;
}

// @0x2235708 unk_022350c8.cpp
Unk_ov004_02235708::Unk_ov004_02235708() {
    func_ov004_022356cc();
}

// @0x2235704 unk_022350c8.cpp
Unk_ov004_02235708::~Unk_ov004_02235708() {
}

// @0x22356cc unk_022350c8.cpp
void Unk_ov004_02235708::func_ov004_022356cc() {
    for (u32 l = 0; l < 2; l++) {
        for (u32 y = 0; y < 16; y++) {
            for (u32 x = 0; x < 16; x++) {
                unk_00[l][y][x] = 0xff;
            }
        }
    }
}

// @0x223568c unk_022350c8.cpp
BOOL Unk_ov004_02235708::func_ov004_0223568c(s32 id, s32 x, s32 y, u8 layer) {
    u8 *p = &unk_00[layer & 1][y & 15][x & 15];
    s32 i = func_ov004_0223584c()->func_ov004_02235740((void *)id);
    if (i != -1) {
        *p = i;
        return TRUE;
    }
    return FALSE;
}

// @0x2235648 unk_022350c8.cpp
BOOL Unk_ov004_02235708::func_ov004_02235648(s32 id, s32 x, s32 y, u8 layer) {
    u8 *p = &unk_00[layer & 1][y & 15][x & 15];
    if (func_ov004_0223584c()->func_ov004_02235740((void *)id) != -1) {
        *p = 0xff;
        return TRUE;
    }
    return FALSE;
}

// @0x2235624 unk_022350c8.cpp
s32 Unk_ov004_02235708::func_ov004_02235624(s32 x, s32 y, s32 layer) {
    u32 c = unk_00[layer & 1][y & 15][x & 15];
    if (c == 0xff) {
        return -1;
    }
    return c;
}

// @0x22355d8 unk_022350c8.cpp
Unk_ov004_0224882c *Unk_ov004_02235708::func_ov004_022355d8(s32 x, s32 y, s32 layer) {
    u8 *p = &unk_00[layer & 1][y & 15][x & 15];
    u32 c = *p;
    if (c != 0xff && c < func_ov004_02234af8()) {
        if (func_ov004_0223584c()->func_ov004_02235720(c) != 0) {
            return func_ov004_0223584c()->func_ov004_02235720(*p);
        }
    }
    return 0;
}

// @0x22355b0 unk_022350c8.cpp
Unk_ov004_0224882c *Unk_ov004_02235708::func_ov004_022355b0(void *p, s32 layer) {
    s32 x, y;
    func_0204ee10(&x, &y, p);
    return func_ov004_022355d8(x, y, layer);
}

// @0x22355ac unk_022350c8.cpp
Unk_ov004_022355ac::Unk_ov004_022355ac() {
}

// @0x22355a8 unk_022350c8.cpp
Unk_ov004_022355ac::~Unk_ov004_022355ac() {
}

// @0x2235580 unk_022350c8.cpp
void Unk_ov004_022355ac::func_ov004_02235580() {
    unk_00 = -1;
    unk_04.x = 0;
    unk_04.y = 0;
    unk_04.z = 0;
    unk_10.x = 0;
    unk_10.y = 0;
    unk_10.z = 0;
    unk_1c = 0;
    unk_20.x = 0;
    unk_20.y = 0;
    unk_20.z = 0;
    unk_2c.x = 0;
    unk_2c.y = 0;
    unk_2c.z = 0;
    unk_38 = 0;
    unk_3c = 4;
}

// @0x2235528 unk_022350c8.cpp
void Unk_ov004_022355ac::func_ov004_02235528(s32 id, Unk_ov004_02235528_V3 *a, Unk_ov004_02235528_V3 *b, s32 c,
                                             Unk_ov004_02235528_V3 *d, Unk_ov004_02235528_V3 *e, s16 f, s32 g) {
    if (id != -1) {
        unk_00 = id;
        unk_04.x = a->x;
        unk_04.y = a->y;
        unk_04.z = a->z;
        unk_10.x = b->x;
        unk_10.y = b->y;
        unk_10.z = b->z;
        unk_1c = c;
        unk_20.x = d->x;
        unk_20.y = d->y;
        unk_20.z = d->z;
        unk_2c.x = e->x;
        unk_2c.y = e->y;
        unk_2c.z = e->z;
        unk_38 = f;
        unk_3c = g;
    }
}

// @0x2235524 unk_022350c8.cpp
s32 Unk_ov004_022355ac::func_ov004_02235524() {
    return unk_00;
}

// @0x2235520 unk_022350c8.cpp
Unk_ov004_02235528_V3 *Unk_ov004_022355ac::func_ov004_02235520() {
    return &unk_04;
}

// @0x223551c unk_022350c8.cpp
Unk_ov004_02235528_V3 *Unk_ov004_022355ac::func_ov004_0223551c() {
    return &unk_10;
}

// @0x22354f8 unk_022350c8.cpp
s32 Unk_ov004_022355ac::func_ov004_022354f8() {
    Unk_ov004_02235528_V3 *a = func_ov004_0223551c();
    Unk_ov004_02235528_V3 *b = func_ov004_02235520();
    return func_020e9650(a, b);
}

// @0x22354f4 unk_022350c8.cpp
s32 Unk_ov004_022355ac::func_ov004_022354f4() {
    return unk_1c;
}

// @0x22354f0 unk_022350c8.cpp
Unk_ov004_02235528_V3 *Unk_ov004_022355ac::func_ov004_022354f0() {
    return &unk_20;
}

// @0x22354ec unk_022350c8.cpp
Unk_ov004_02235528_V3 *Unk_ov004_022355ac::func_ov004_022354ec() {
    return &unk_2c;
}

// @0x22354e8 unk_022350c8.cpp
s32 Unk_ov004_022355ac::func_ov004_022354e8() {
    return unk_3c;
}

// @0x22354e0 unk_022350c8.cpp
s16 Unk_ov004_022355ac::func_ov004_022354e0() {
    return unk_38;
}

// @0x22354d8 unk_022350c8.cpp
extern "C" Unk_ov004_022351bc *func_ov004_022354d8() {
    return &data_ov004_02252144;
}

// @0x22354a4 unk_022350c8.cpp
Unk_ov004_022355ac *Unk_ov004_022351bc::func_ov004_022354a4(u32 idx) {
    if (func_ov004_022350f4()) {
        Unk_ov004_022355ac *s = &unk_00[idx & 1];
        if (s->func_ov004_02235524() != -1) {
            return s;
        }
    }
    return 0;
}

// @0x2235464 unk_022350c8.cpp
Unk_ov004_022355ac *Unk_ov004_022351bc::func_ov004_02235464(void *v) {
    s32 idx = func_ov004_0223584c()->func_ov004_02235740(v);
    if (idx != -1) {
        for (u32 i = 0; i < 2; i++) {
            Unk_ov004_022355ac *s = &unk_00[i];
            if (idx == s->func_ov004_02235524()) {
                return s;
            }
        }
    }
    return 0;
}

// @0x2235434 unk_022350c8.cpp
void *Unk_ov004_022351bc::func_ov004_02235434(u32 idx) {
    Unk_ov004_022355ac *s = func_ov004_022354a4(idx);
    if (s != 0) {
        Unk_ov004_0223583c *t = func_ov004_0223584c();
        return t->func_ov004_02235720(s->func_ov004_02235524());
    }
    return 0;
}

// @0x223539c unk_022350c8.cpp
void Unk_ov004_022351bc::func_ov004_0223539c() {
    void *o1 = func_ov004_02235434(1);
    Unk_ov004_022355ac *s1 = func_ov004_022354a4(1);
    if (o1 != 0 && s1 != 0) {
        BOOL k1 = TRUE;
        if (func_02053194(func_ov004_022087a4(o1))) {
            if (s1->func_ov004_022354e8()) {
                k1 = FALSE;
            }
        }
        if (k1) {
            if (func_ov004_0220875c(o1) != 0) {
                return;
            }
        }
    }
    void *o2 = func_ov004_02235434(0);
    Unk_ov004_022355ac *s2 = func_ov004_022354a4(0);
    if (o2 != 0 && s2 != 0) {
        BOOL k2 = TRUE;
        if (func_02053194(func_ov004_022087a4(o2))) {
            if (s2->func_ov004_022354e8()) {
                k2 = FALSE;
            }
        }
        if (k2) {
            if (func_ov004_0220875c(o2) != 0) {
                return;
            }
        }
    }
}

// @0x223537c unk_022350c8.cpp
void *Unk_ov004_022351bc::func_ov004_0223537c(s32 v) {
    void *o = func_ov004_02235434(0);
    if (o != 0) {
        return (void *)func_ov004_022075a4(o, v);
    }
    return 0;
}

// @0x223535c unk_022350c8.cpp
void *Unk_ov004_022351bc::func_ov004_0223535c(s32 v) {
    void *o = func_ov004_02235434(0);
    if (o != 0) {
        return (void *)func_ov004_02205954(o, v);
    }
    return 0;
}

// @0x223534c unk_022350c8.cpp
void *Unk_ov004_022351bc::func_ov004_0223534c() {
    return func_ov004_0223537c(-0x4000);
}

// @0x223533c unk_022350c8.cpp
void *Unk_ov004_022351bc::func_ov004_0223533c() {
    return func_ov004_0223535c(-0x4000);
}

// @0x223532c unk_022350c8.cpp
void *Unk_ov004_022351bc::func_ov004_0223532c() {
    return func_ov004_0223537c(0x4000);
}

// @0x223531c unk_022350c8.cpp
void *Unk_ov004_022351bc::func_ov004_0223531c() {
    return func_ov004_0223535c(0x4000);
}

// @0x22352d0 unk_022350c8.cpp
void *Unk_ov004_022351bc::func_ov004_022352d0(s32 v) {
    Unk_ov004_022355ac *s = func_ov004_022354a4(0);
    void *o = func_ov004_02235434(0);
    if (s != 0 && o != 0) {
        return (void *)func_ov004_02207598(o, func_ov004_0223527c((s16)(v + s->func_ov004_022354e0())));
    }
    return 0;
}

extern "C" char data_ov004_0224e934[8] = "tv_cc";

Unk_0209c15c data_ov004_02252058;

extern "C" char data_ov004_0224e994[0x10] = "FTT:a/bmd/bmd0";

extern "C" const u8 data_ov004_02240874[0x54] = {6, 0, 0, 4, 1, 0, 1, 3, 0, 0, 4, 0, 1, 5, 0, 2, 6, 0, 255, 6, 45, 2, 7, 0, 255, 7, 45, 3, 8, 0, 6, 8, 30, 7, 10, 0, 2, 11, 0, 255, 11, 45, 8, 12, 0, 3, 13, 0, 8, 13, 30, 6, 15, 0, 7, 16, 0, 8, 17, 0, 2, 18, 0, 255, 18, 45, 7, 19, 0, 4, 20, 0, 3, 21, 0, 2, 22, 0, 255, 22, 45, 5, 23, 0};

extern "C" char data_ov004_0224e954[8] = "tv_fr";

extern "C" const s32 data_ov004_022406b4[2] = {0x3000, 0x319a};

extern "C" const u8 data_ov004_02240784[0x50] = {1, 0, 0, 0, 1, 0, 1, 5, 0, 2, 6, 0, 255, 6, 45, 2, 7, 0, 255, 7, 45, 3, 8, 0, 6, 8, 30, 7, 10, 0, 2, 11, 0, 255, 11, 45, 8, 12, 0, 3, 13, 0, 8, 13, 30, 6, 15, 0, 7, 16, 0, 8, 17, 0, 2, 18, 0, 255, 18, 45, 8, 19, 0, 5, 20, 0, 3, 21, 0, 2, 22, 0, 255, 22, 45, 8, 23, 0, 0, 0};

extern "C" const char *data_ov004_0224e9a4[11] = {data_ov004_0224e97c, data_ov004_0224e934, data_ov004_0224e93c,
                                                  data_ov004_0224e944, data_ov004_0224e96c, data_ov004_0224e954,
                                                  data_ov004_0224e964, data_ov004_0224e974, data_ov004_0224e95c,
                                                  data_ov004_0224e984, data_ov004_0224e94c};

Unk_ov004_0223583c data_ov004_022520d4;

extern "C" char data_ov004_0224e964[8] = "tv_cr";

extern "C" char data_ov004_0224e944[8] = "tv_fc";

extern "C" const s8 data_ov004_022406a8[4] = {0, 0, 2, -2};

// @0x223527c unk_022350c8.cpp
Unk_ov004_02235528_V3 *Unk_ov004_022351bc::func_ov004_0223527c(s16 v) {
    static Unk_02000c8c r;
    r.x = 0;
    r.y = 0;
    r.z = 0x2000;
    func_020e93a0((Unk_ov004_02235528_V3 *)&r, v);
    return (Unk_ov004_02235528_V3 *)&r;
}

// @0x2235270 unk_022350c8.cpp
void *Unk_ov004_022351bc::func_ov004_02235270() {
    return func_ov004_022352d0(0);
}

// @0x2235234 unk_022350c8.cpp
void *Unk_ov004_022351bc::func_ov004_02235234() {
    Unk_ov004_022355ac *s = func_ov004_022354a4(0);
    void *o = func_ov004_02235434(0);
    if (s != 0 && o != 0) {
        return (void *)func_ov004_022058c0(o, s->func_ov004_022354e0());
    }
    return 0;
}

// @0x2235224 unk_022350c8.cpp
void *Unk_ov004_022351bc::func_ov004_02235224() {
    return func_ov004_022352d0(-0x8000);
}

// @0x22351e8 unk_022350c8.cpp
void *Unk_ov004_022351bc::func_ov004_022351e8() {
    Unk_ov004_022355ac *s = func_ov004_022354a4(0);
    void *o = func_ov004_02235434(0);
    if (s != 0 && o != 0) {
        return (void *)func_ov004_02205820(o, s->func_ov004_022354e0());
    }
    return 0;
}

// @0x22351bc unk_022350c8.cpp
Unk_ov004_022351bc::Unk_ov004_022351bc() {
    func_ov004_02235180();
}

// @0x22351a0 unk_022350c8.cpp
Unk_ov004_022351bc::~Unk_ov004_022351bc() {
}

// @0x2235180 unk_022350c8.cpp
void Unk_ov004_022351bc::func_ov004_02235180() {
    for (u32 i = 0; i < 2; i++) {
        unk_00[i].func_ov004_02235580();
    }
}

// @0x2235120 unk_022350c8.cpp
BOOL Unk_ov004_022351bc::func_ov004_02235120(s32 id, Unk_ov004_02235528_V3 *a, Unk_ov004_02235528_V3 *b, s32 c,
                                             Unk_ov004_02235528_V3 *d, Unk_ov004_02235528_V3 *e, s16 f, s32 g) {
    if (id == -1) {
        return FALSE;
    }
    {
        void *o = func_ov004_0223584c()->func_ov004_02235720(id);
        if (o != 0) {
            u32 k = func_ov004_02208750(o);
            unk_00[k & 1].func_ov004_02235528(id, a, b, c, d, e, f, g);
            return TRUE;
        }
    }
    return FALSE;
}

// @0x22350f4 unk_022350c8.cpp
extern "C" s32 func_ov004_022350f4() {
    if (func_ov004_02235d10()) {
        return FALSE;
    }
    if (func_020b52f8() || func_020b51a4()) {
        return TRUE;
    }
    return FALSE;
}

// @0x22350c8 unk_022350c8.cpp
extern "C" s32 func_ov004_022350c8() {
    if (func_ov004_022350f4()) {
        return TRUE;
    }
    switch (func_020b50e8()) {
    case 0x1f:
    case 0x21:
    case 0x22:
        return TRUE;
    }
    return FALSE;
}

// @0x2235028 unk_02234774.cpp
extern "C" s32 func_ov004_02235028(Unk_ov004_0224882c *self) {
    if (func_ov004_0223584c()->func_ov004_0223576c()) {
        s32 a = func_020534a4(func_ov004_02209d4c(self));
        s32 b = func_ov004_02209d40(self);
        u16 v;
        if (a >= 0 && a < 0x30) {
            v = data_ov004_0224091c[a];
        } else {
            v = data_ov004_0224091c[0];
        }
        if (a == 0x18 && b == 1) {
            if ((u32)func_ov004_02234c2c(func_ov004_02209c44) >= 4) {
                Unk_ov004_0224882c *e = func_ov004_02234bb4(func_ov004_02209c44, 0);
                if (e != NULL) {
                    e->unk_73c.func_ov004_02205c44(1, 0);
                    func_020515b8(func_020b50e8(), (u8 *)e + 0x5c, 0);
                }
            }
        }
        return func_02002cf8(v, self, 0, 0, (u32)data_ov004_02251f80);
    }
    return 0;
}

// @0x2234ff4 unk_02234774.cpp
extern "C" s32 func_ov004_02234ff4(s32 x, s32 y, s32 a, s32 b, u8 c, s32 d) {
    func_020534a4(a);
    return func_ov004_02235028(func_ov004_02209d58(x, y, a, b, c, d));
}

// @0x2234f80 unk_02234774.cpp
extern "C" s32 func_ov004_02234f80(s32 x, s32 y) {
    Unk_ov004_0224882c *e = func_ov004_02235718()->func_ov004_022355d8(x, y, 0);
    if (e != NULL) {
        if (e->unk_788 == 1) {
            return e->unk_5c.y;
        }
        return e->unk_78c + e->unk_5c.y;
    }
    Unk_0203389c_Vec v;
    Unk_0203398c g;
    v.x = (x << 13) + 0x1000;
    v.y = 0;
    v.z = (y << 13) + 0x1000;
    g.func_020339bc(&v, 0, 0);
    return g.func_02033914(0);
}

// @0x2234f6c unk_02234774.cpp
extern "C" s32 func_ov004_02234f6c(Unk_ov004_Vec3 *p) {
    return func_ov004_02234f80(p->x >> 13, p->z >> 13);
}

// @0x2234f30 unk_02234774.cpp
extern "C" s32 func_ov004_02234f30(Unk_ov004_Vec3 *pos, s32 ang, Unk_ov004_Vec3 *out) {
    Unk_ov004_0224882c *m = func_ov004_02235718()->func_ov004_022355b0(pos, 0);
    if (m != NULL && Unk_ov004_02234f30_Is37(m)) {
        return func_ov004_02210dd8(m, pos, ang, out);
    }
    return 0;
}

extern "C" const Unk_ov004_02233138_Rec data_ov004_0224097c[0x6e9] = {
    {0xffff, 0x434, 0x449, 0xffff},
    {0xffff, 0x450, 0x451, 0xffff},
    {0xffff, 0x452, 0x453, 0xffff},
    {0xffff, 0x436, 0x437, 0xffff},
    {0xffff, 0x436, 0x437, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x498, 0x499, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x434, 0x449, 0xffff},
    {0xffff, 0x450, 0x451, 0xffff},
    {0xffff, 0x452, 0x453, 0xffff},
    {0xffff, 0x444, 0x445, 0xffff},
    {0xffff, 0x444, 0x445, 0xffff},
    {0xffff, 0x436, 0x437, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x434, 0x449, 0xffff},
    {0xffff, 0x450, 0x451, 0xffff},
    {0xffff, 0x452, 0x453, 0xffff},
    {0xffff, 0x436, 0x437, 0xffff},
    {0xffff, 0x444, 0x445, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0x4d1},
    {0xffff, 0x434, 0x449, 0xffff},
    {0xffff, 0x450, 0x451, 0xffff},
    {0xffff, 0x452, 0x453, 0xffff},
    {0xffff, 0x436, 0x437, 0xffff},
    {0xffff, 0x444, 0x445, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x498, 0x499, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x434, 0x449, 0xffff},
    {0xffff, 0x450, 0x451, 0xffff},
    {0xffff, 0x452, 0x453, 0xffff},
    {0xffff, 0x436, 0x437, 0xffff},
    {0xffff, 0x436, 0x437, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x452, 0x453, 0xffff},
    {0xffff, 0xffff, 0xffff, 0x4d1},
    {0xffff, 0x498, 0x499, 0xffff},
    {0xffff, 0x434, 0x449, 0xffff},
    {0xffff, 0x450, 0x451, 0xffff},
    {0xffff, 0x452, 0x453, 0xffff},
    {0xffff, 0x436, 0x437, 0xffff},
    {0xffff, 0x444, 0x445, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x498, 0x499, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x434, 0x449, 0xffff},
    {0xffff, 0x450, 0x451, 0xffff},
    {0xffff, 0x452, 0x453, 0xffff},
    {0xffff, 0x436, 0x437, 0xffff},
    {0xffff, 0x436, 0x437, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x498, 0x499, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x434, 0x449, 0xffff},
    {0xffff, 0x450, 0x451, 0xffff},
    {0xffff, 0x452, 0x453, 0xffff},
    {0xffff, 0x436, 0x437, 0xffff},
    {0xffff, 0x444, 0x445, 0xffff},
    {0xffff, 0x444, 0x445, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0x42d},
    {0xffff, 0x434, 0x449, 0xffff},
    {0xffff, 0x450, 0x451, 0xffff},
    {0xffff, 0x452, 0x453, 0xffff},
    {0xffff, 0x436, 0x437, 0xffff},
    {0xffff, 0x444, 0x445, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x498, 0x499, 0xffff},
    {0xffff, 0x434, 0x449, 0xffff},
    {0xffff, 0x450, 0x451, 0xffff},
    {0xffff, 0x452, 0x453, 0xffff},
    {0xffff, 0x444, 0x445, 0xffff},
    {0xffff, 0x431, 0x432, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x452, 0x453, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0x4d1},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x434, 0x449, 0xffff},
    {0xffff, 0x450, 0x451, 0xffff},
    {0xffff, 0x452, 0x453, 0xffff},
    {0xffff, 0x436, 0x437, 0xffff},
    {0xffff, 0x444, 0x445, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x498, 0x499, 0xffff},
    {0xffff, 0x434, 0x449, 0xffff},
    {0xffff, 0x450, 0x451, 0xffff},
    {0xffff, 0x452, 0x453, 0xffff},
    {0xffff, 0x444, 0x445, 0xffff},
    {0xffff, 0x436, 0x437, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x498, 0x499, 0xffff},
    {0xffff, 0xffff, 0xffff, 0x4d1},
    {0xffff, 0x498, 0x499, 0xffff},
    {0xffff, 0x434, 0x449, 0xffff},
    {0xffff, 0x450, 0x451, 0xffff},
    {0xffff, 0x452, 0x453, 0xffff},
    {0xffff, 0x436, 0x437, 0xffff},
    {0xffff, 0x444, 0x445, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x49a, 0x49b, 0xffff},
    {0xffff, 0x498, 0x499, 0xffff},
    {0xffff, 0xffff, 0xffff, 0x4d1},
    {0xffff, 0x498, 0x499, 0xffff},
    {0xffff, 0x434, 0x449, 0xffff},
    {0xffff, 0x450, 0x451, 0xffff},
    {0xffff, 0x452, 0x453, 0xffff},
    {0xffff, 0x436, 0x437, 0xffff},
    {0xffff, 0x436, 0x437, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x498, 0x499, 0xffff},
    {0xffff, 0x498, 0x499, 0xffff},
    {0xffff, 0x498, 0x499, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0x428, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x46b, 0x46b, 0xffff},
    {0xffff, 0x46c, 0x46c, 0xffff},
    {0xffff, 0x46d, 0x46d, 0xffff},
    {0xffff, 0x46e, 0x46e, 0xffff},
    {0xffff, 0x46f, 0x46f, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x434, 0x449, 0xffff},
    {0xffff, 0x434, 0x449, 0xffff},
    {0xffff, 0x434, 0x449, 0xffff},
    {0xffff, 0x439, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x434, 0x449, 0xffff},
    {0xffff, 0x443, 0xffff, 0xffff},
    {0xffff, 0x49f, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x434, 0x449, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x436, 0x437, 0xffff},
    {0x418, 0x48f, 0x490, 0xffff},
    {0x3ea, 0xffff, 0xffff, 0xffff},
    {0x413, 0xffff, 0xffff, 0xffff},
    {0x3f1, 0x484, 0x485, 0xffff},
    {0x3f2, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x49c, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x4a3, 0xffff, 0xffff},
    {0x414, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0x3ee, 0x498, 0x499, 0xffff},
    {0xffff, 0x433, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0x421, 0x47c, 0x47d, 0xffff},
    {0x420, 0x47e, 0x47f, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0x415, 0x493, 0x494, 0xffff},
    {0xffff, 0x463, 0x464, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0x3eb, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x469, 0xffff, 0xffff},
    {0xffff, 0x436, 0x437, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x434, 0x449, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x436, 0x437, 0xffff},
    {0xffff, 0x470, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x436, 0x437, 0xffff},
    {0xffff, 0x452, 0x453, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x45e, 0xffff, 0xffff},
    {0x4ef, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x45f, 0x460, 0xffff},
    {0xffff, 0x465, 0x467, 0xffff},
    {0xffff, 0x466, 0x468, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x444, 0x445, 0xffff},
    {0xffff, 0x444, 0x445, 0xffff},
    {0xffff, 0x456, 0x456, 0xffff},
    {0xffff, 0x457, 0x457, 0xffff},
    {0xffff, 0x458, 0x458, 0xffff},
    {0xffff, 0x459, 0x459, 0xffff},
    {0xffff, 0x498, 0x499, 0xffff},
    {0xffff, 0x498, 0x499, 0xffff},
    {0xffff, 0x498, 0x499, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x49e, 0xffff, 0xffff},
    {0xffff, 0x4a1, 0x4a2, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0x40d, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0x429},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x419, 0x419, 0xffff},
    {0xffff, 0x41a, 0x41a, 0xffff},
    {0xffff, 0x41c, 0xffff, 0xffff},
    {0xffff, 0x41b, 0x41b, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x436, 0x437, 0xffff},
    {0xffff, 0x436, 0x437, 0xffff},
    {0xffff, 0x452, 0x453, 0xffff},
    {0xffff, 0x450, 0x451, 0xffff},
    {0xffff, 0x431, 0x432, 0xffff},
    {0xffff, 0x436, 0x437, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x498, 0x499, 0xffff},
    {0xffff, 0xffff, 0xffff, 0x4d1},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x431, 0x432, 0xffff},
    {0xffff, 0x436, 0x437, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x436, 0x437, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x436, 0x437, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x431, 0x432, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xc0, 0xc0, 0xffff},
    {0xffff, 0xc1, 0xc1, 0xffff},
    {0xffff, 0xc2, 0xc2, 0xffff},
    {0xffff, 0xc3, 0xc3, 0xffff},
    {0xffff, 0xc4, 0xc4, 0xffff},
    {0xffff, 0xc5, 0xc5, 0xffff},
    {0xffff, 0xc6, 0xc6, 0xffff},
    {0xffff, 0xc7, 0xc7, 0xffff},
    {0xffff, 0xc8, 0xc8, 0xffff},
    {0xffff, 0xc9, 0xc9, 0xffff},
    {0xffff, 0xd0, 0xd0, 0xffff},
    {0xffff, 0xca, 0xca, 0xffff},
    {0xffff, 0xcb, 0xcb, 0xffff},
    {0xffff, 0xcc, 0xcc, 0xffff},
    {0xffff, 0xcd, 0xcd, 0xffff},
    {0xffff, 0xce, 0xce, 0xffff},
    {0xffff, 0xcf, 0xcf, 0xffff},
    {0xffff, 0xffff, 0xffff, 0x42a},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x44c, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x44d, 0x44e, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x454, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x49d, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x442, 0x442, 0xffff},
    {0x41d, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x436, 0x437, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0x3ec, 0x482, 0x483, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x46a, 0xffff, 0xffff},
    {0x417, 0x491, 0x492, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x44f, 0x44f, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x498, 0x499, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0x40b, 0xffff, 0xffff, 0xffff},
    {0x40c, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x446, 0x447, 0xffff},
    {0xffff, 0x498, 0x499, 0xffff},
    {0xffff, 0x498, 0x499, 0xffff},
    {0x422, 0x480, 0x481, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0x41f, 0x478, 0x479, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x49a, 0x49b, 0xffff},
    {0xffff, 0x49a, 0x49b, 0xffff},
    {0x408, 0x486, 0x487, 0xffff},
    {0xffff, 0x455, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0x409, 0x498, 0x499, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x416, 0xffff, 0xffff},
    {0xffff, 0x434, 0x449, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x42e, 0x42f, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x448, 0x3f4, 0xffff},
    {0xffff, 0x448, 0x3f4, 0xffff},
    {0xffff, 0x41e, 0x41e, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x45a, 0x45b, 0xffff},
    {0xffff, 0x438, 0xffff, 0xffff},
    {0x404, 0xffff, 0x48a, 0xffff},
    {0x407, 0x48d, 0x48e, 0xffff},
    {0x405, 0x48b, 0x48c, 0xffff},
    {0x40e, 0xffff, 0xffff, 0xffff},
    {0x40f, 0xffff, 0xffff, 0xffff},
    {0x410, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0x4ef, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0x4ef, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0x4ef, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0x4d1},
    {0xffff, 0xffff, 0xffff, 0x4d1},
    {0xffff, 0xffff, 0xffff, 0x4d1},
    {0xffff, 0xffff, 0xffff, 0x4d1},
    {0xffff, 0xffff, 0xffff, 0x4d1},
    {0xffff, 0xffff, 0xffff, 0x4d1},
    {0xffff, 0xffff, 0xffff, 0x4d1},
    {0xffff, 0xffff, 0xffff, 0x4d1},
    {0xffff, 0x436, 0x437, 0xffff},
    {0xffff, 0x431, 0x432, 0xffff},
    {0xffff, 0x436, 0x437, 0xffff},
    {0xffff, 0x436, 0x437, 0xffff},
    {0xffff, 0x4a0, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x45c, 0x45d, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0x3f3, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x436, 0x437, 0xffff},
    {0x412, 0x488, 0x489, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x426, 0x497, 0xffff},
    {0xffff, 0x434, 0x449, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x444, 0x445, 0xffff},
    {0xffff, 0x450, 0x451, 0xffff},
    {0xffff, 0x461, 0x462, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0x40a, 0x476, 0x477, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0x42b},
    {0xffff, 0xffff, 0xffff, 0x42c},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0x411, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0x3ef, 0x498, 0x3f0, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x44a, 0x44b, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x498, 0x499, 0xffff},
    {0xffff, 0x473, 0x474, 0xffff},
    {0xffff, 0x471, 0x472, 0xffff},
    {0xffff, 0x473, 0x499, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x471, 0x472, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0x423, 0x495, 0x496, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x434, 0x449, 0xffff},
    {0xffff, 0x434, 0x449, 0xffff},
    {0xffff, 0x434, 0x449, 0xffff},
    {0xffff, 0x434, 0x449, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0x3f5, 0xffff, 0xffff, 0xffff},
    {0x3f6, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0x3f9, 0xffff, 0xffff, 0xffff},
    {0x3fa, 0xffff, 0xffff, 0xffff},
    {0x3fb, 0xffff, 0xffff, 0xffff},
    {0x3fc, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0x3fd, 0xffff, 0xffff, 0xffff},
    {0x3fe, 0xffff, 0xffff, 0xffff},
    {0x3ff, 0xffff, 0xffff, 0xffff},
    {0x400, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0x401, 0xffff, 0xffff, 0xffff},
    {0x402, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0x403, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0x13c},
    {0xffff, 0xffff, 0xffff, 0x13d},
    {0xffff, 0xffff, 0xffff, 0x13f},
    {0xffff, 0xffff, 0xffff, 0x13e},
    {0xffff, 0xffff, 0xffff, 0x136},
    {0xffff, 0xffff, 0xffff, 0x137},
    {0xffff, 0xffff, 0xffff, 0x139},
    {0xffff, 0xffff, 0xffff, 0x13a},
    {0xffff, 0xffff, 0xffff, 0x13b},
    {0xffff, 0xffff, 0xffff, 0x138},
    {0xffff, 0xffff, 0xffff, 0x14e},
    {0xffff, 0xffff, 0xffff, 0x14f},
    {0xffff, 0xffff, 0xffff, 0xff},
    {0xffff, 0xffff, 0xffff, 0xfe},
    {0xffff, 0xffff, 0xffff, 0xfd},
    {0xffff, 0xffff, 0xffff, 0x100},
    {0xffff, 0xffff, 0xffff, 0x153},
    {0xffff, 0xffff, 0xffff, 0x154},
    {0xffff, 0xffff, 0xffff, 0x150},
    {0xffff, 0xffff, 0xffff, 0x151},
    {0xffff, 0xffff, 0xffff, 0x152},
    {0xffff, 0xffff, 0xffff, 0x165},
    {0xffff, 0xffff, 0xffff, 0x167},
    {0xffff, 0xffff, 0xffff, 0x168},
    {0xffff, 0xffff, 0xffff, 0x166},
    {0xffff, 0xffff, 0xffff, 0x115},
    {0xffff, 0xffff, 0xffff, 0x113},
    {0xffff, 0xffff, 0xffff, 0x114},
    {0xffff, 0xffff, 0xffff, 0x116},
    {0xffff, 0xffff, 0xffff, 0x121},
    {0xffff, 0xffff, 0xffff, 0x120},
    {0xffff, 0xffff, 0xffff, 0x11f},
    {0xffff, 0xffff, 0xffff, 0x122},
    {0xffff, 0xffff, 0xffff, 0x119},
    {0xffff, 0xffff, 0xffff, 0x117},
    {0xffff, 0xffff, 0xffff, 0x118},
    {0xffff, 0xffff, 0xffff, 0x172},
    {0xffff, 0xffff, 0xffff, 0x173},
    {0xffff, 0xffff, 0xffff, 0x174},
    {0xffff, 0xffff, 0xffff, 0x12c},
    {0xffff, 0xffff, 0xffff, 0x12d},
    {0xffff, 0xffff, 0xffff, 0x12e},
    {0xffff, 0xffff, 0xffff, 0x10f},
    {0xffff, 0xffff, 0xffff, 0x111},
    {0xffff, 0xffff, 0xffff, 0x112},
    {0xffff, 0xffff, 0xffff, 0x110},
    {0xffff, 0xffff, 0xffff, 0x169},
    {0xffff, 0xffff, 0xffff, 0x16a},
    {0xffff, 0xffff, 0xffff, 0x16b},
    {0xffff, 0xffff, 0xffff, 0x101},
    {0xffff, 0xffff, 0xffff, 0x102},
    {0xffff, 0xffff, 0xffff, 0x103},
    {0xffff, 0xffff, 0xffff, 0x123},
    {0xffff, 0xffff, 0xffff, 0x125},
    {0xffff, 0xffff, 0xffff, 0x126},
    {0xffff, 0xffff, 0xffff, 0x124},
    {0xffff, 0xffff, 0xffff, 0x162},
    {0xffff, 0xffff, 0xffff, 0x163},
    {0xffff, 0xffff, 0xffff, 0x164},
    {0xffff, 0xffff, 0xffff, 0x161},
    {0xffff, 0xffff, 0xffff, 0x141},
    {0xffff, 0xffff, 0xffff, 0x140},
    {0xffff, 0xffff, 0xffff, 0x143},
    {0xffff, 0xffff, 0xffff, 0x142},
    {0xffff, 0xffff, 0xffff, 0x10a},
    {0xffff, 0xffff, 0xffff, 0x109},
    {0xffff, 0xffff, 0xffff, 0x176},
    {0xffff, 0xffff, 0xffff, 0x175},
    {0xffff, 0xffff, 0xffff, 0x177},
    {0xffff, 0xffff, 0xffff, 0x15c},
    {0xffff, 0xffff, 0xffff, 0x15b},
    {0xffff, 0xffff, 0xffff, 0x15a},
    {0xffff, 0xffff, 0xffff, 0x16c},
    {0xffff, 0xffff, 0xffff, 0x16e},
    {0xffff, 0xffff, 0xffff, 0x16d},
    {0xffff, 0xffff, 0xffff, 0x170},
    {0xffff, 0xffff, 0xffff, 0x16f},
    {0xffff, 0xffff, 0xffff, 0x171},
    {0xffff, 0xffff, 0xffff, 0xfa},
    {0xffff, 0xffff, 0xffff, 0xfc},
    {0xffff, 0xffff, 0xffff, 0xfb},
    {0xffff, 0xffff, 0xffff, 0xf9},
    {0xffff, 0xffff, 0xffff, 0x144},
    {0xffff, 0xffff, 0xffff, 0x146},
    {0xffff, 0xffff, 0xffff, 0x147},
    {0xffff, 0xffff, 0xffff, 0x145},
    {0xffff, 0xffff, 0xffff, 0x11e},
    {0xffff, 0xffff, 0xffff, 0x11d},
    {0xffff, 0xffff, 0xffff, 0x11b},
    {0xffff, 0xffff, 0xffff, 0x11c},
    {0xffff, 0xffff, 0xffff, 0x156},
    {0xffff, 0xffff, 0xffff, 0x157},
    {0xffff, 0xffff, 0xffff, 0x158},
    {0xffff, 0xffff, 0xffff, 0x10b},
    {0xffff, 0xffff, 0xffff, 0x108},
    {0xffff, 0xffff, 0xffff, 0x15d},
    {0xffff, 0xffff, 0xffff, 0x15e},
    {0xffff, 0xffff, 0xffff, 0x160},
    {0xffff, 0xffff, 0xffff, 0x15f},
    {0xffff, 0xffff, 0xffff, 0x11a},
    {0xffff, 0xffff, 0xffff, 0x106},
    {0xffff, 0xffff, 0xffff, 0x105},
    {0xffff, 0xffff, 0xffff, 0x104},
    {0xffff, 0xffff, 0xffff, 0x107},
    {0xffff, 0xffff, 0xffff, 0x12f},
    {0xffff, 0xffff, 0xffff, 0x131},
    {0xffff, 0xffff, 0xffff, 0x130},
    {0xffff, 0xffff, 0xffff, 0x129},
    {0xffff, 0xffff, 0xffff, 0x128},
    {0xffff, 0xffff, 0xffff, 0x127},
    {0xffff, 0xffff, 0xffff, 0x159},
    {0xffff, 0xffff, 0xffff, 0x10d},
    {0xffff, 0xffff, 0xffff, 0x10c},
    {0xffff, 0xffff, 0xffff, 0x10e},
    {0xffff, 0xffff, 0xffff, 0x149},
    {0xffff, 0xffff, 0xffff, 0x14a},
    {0xffff, 0xffff, 0xffff, 0x148},
    {0xffff, 0xffff, 0xffff, 0x133},
    {0xffff, 0xffff, 0xffff, 0x132},
    {0xffff, 0xffff, 0xffff, 0x12b},
    {0xffff, 0xffff, 0xffff, 0x12a},
    {0xffff, 0xffff, 0xffff, 0x135},
    {0xffff, 0xffff, 0xffff, 0x134},
    {0xffff, 0xffff, 0xffff, 0x155},
    {0xffff, 0xffff, 0xffff, 0x14b},
    {0xffff, 0xffff, 0xffff, 0x14c},
    {0xffff, 0xffff, 0xffff, 0x14d},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x436, 0x437, 0xffff},
    {0xffff, 0x436, 0x437, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x43a, 0x43a, 0xffff},
    {0xffff, 0x43d, 0x43d, 0xffff},
    {0xffff, 0x43c, 0x43c, 0xffff},
    {0xffff, 0x43f, 0x43f, 0xffff},
    {0xffff, 0x43b, 0x43b, 0xffff},
    {0xffff, 0x43e, 0x43e, 0xffff},
    {0xffff, 0x440, 0x440, 0xffff},
    {0x3ed, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x441, 0x441, 0xffff},
    {0xffff, 0x475, 0xffff, 0xffff},
    {0x424, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x425, 0xffff, 0xffff},
    {0x427, 0x47a, 0x47b, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
};

extern "C" const u8 data_ov004_02240824[0x50] = {8, 0, 0, 6, 1, 0, 1, 3, 0, 0, 4, 0, 1, 5, 0, 2, 6, 0, 255, 6, 45, 2, 7, 0, 255, 7, 45, 3, 8, 0, 6, 8, 30, 7, 10, 0, 2, 11, 0, 255, 11, 45, 8, 12, 0, 3, 13, 0, 6, 15, 0, 7, 16, 0, 8, 17, 0, 2, 18, 0, 255, 18, 45, 10, 19, 0, 3, 21, 0, 2, 22, 0, 255, 22, 45, 5, 23, 0, 0, 0};

extern "C" const u16 data_ov004_0224091c[0x30] = {0x2f, 0x2f, 0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x36, 0x37, 0x38, 0x38, 0x38, 0x38, 0x38, 0x39, 0x39, 0x3a, 0x3a, 0x3b, 0x3c, 0x3d, 0x3d, 0x3e, 0x3f, 0x40, 0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47, 0x48, 0x49, 0x4a, 0x4b, 0x36, 0x4c, 0x4d, 0x3a, 0x37, 0x39, 0x36, 0x4f, 0x4e, 0x50};

extern "C" Unk_ov004_0224e98c_Entry data_ov004_0224e98c = {(void *(*)())func_ov004_02235fb4, 0xc5, 0x34};

extern "C" char data_ov004_0224e96c[8] = "tv_cf";

// @0x2234ed8 unk_02234774.cpp
extern "C" s32 func_ov004_02234ed8(Unk_ov004_Vec3 *pos, s32 ang) {
    static Unk_02000c8c dflt(0x2000);
    return func_ov004_02234f30(pos, ang, (Unk_ov004_Vec3 *)&dflt);
}

extern "C" char data_ov004_0224e974[8] = "tv_rc";

// @0x2234e80 unk_02234774.cpp
extern "C" s32 func_ov004_02234e80(Unk_ov004_Vec3 *pos, s32 ang) {
    static Unk_02000c8c dflt(-0x2000);
    return func_ov004_02234f30(pos, ang, (Unk_ov004_Vec3 *)&dflt);
}

// @0x2234df8 unk_02234774.cpp
extern "C" s32 func_ov004_02234df8(Unk_ov004_Vec3 *p, s16 ang, s32 dist) {
    s32 y;
    s32 z;
    s32 idx = ((u16)ang >> 4) * 2;
    Unk_ov004_Vec3 v;
    z = p->z + func_01ffcb0c(dist, data_02135f44[idx + 1]);
    y = p->y;
    s32 x = p->x + func_01ffcb0c(dist, data_02135f44[idx]);
    v.x = x;
    v.y = y;
    v.z = z;
    if (func_ov004_02234f6c(&v)) {
        return 0;
    }
    if (func_ov004_022087e8(&v, 0x800, 0x2000, 0x800, 0) == 0) {
        return 1;
    }
    s32 t = func_0202ffdc(&v);
    s32 zz = 0;
    if (t == -1) goto two;
    return zz;
two:
    return 2;
}

// @0x2234dd4 unk_02234774.cpp
extern "C" BOOL func_ov004_02234dd4(Unk_ov004_Vec3 *pos, s32 ang) {
    if (func_ov004_02234df8(pos, ang, 0x2000) == 2) {
        return TRUE;
    }
    return FALSE;
}

// @0x2234d80 unk_02234774.cpp
extern "C" BOOL func_ov004_02234d80(Unk_ov004_Vec3 *pos, s32 ang) {
    Unk_ov004_0224882c *m = func_ov004_02235718()->func_ov004_022355b0(pos, 0);
    if (m != NULL && m->unk_77c != 0x26) {
        return FALSE;
    }
    if (func_ov004_02234df8(pos, ang + 0x4000, 0x2000) == 2) {
        return TRUE;
    }
    return FALSE;
}

// @0x2234d2c unk_02234774.cpp
extern "C" BOOL func_ov004_02234d2c(Unk_ov004_Vec3 *pos, s32 ang) {
    Unk_ov004_0224882c *m = func_ov004_02235718()->func_ov004_022355b0(pos, 0);
    if (m != NULL && m->unk_77c != 0x26) {
        return FALSE;
    }
    if (func_ov004_02234df8(pos, ang + 0xc000, 0x2000) == 2) {
        return TRUE;
    }
    return FALSE;
}

// @0x2234cd8 unk_02234774.cpp
extern "C" BOOL func_ov004_02234cd8() {
    s32 i = 0;
    s32 z = 0;
    for (; (u32)i < func_ov004_02234af8(); i++) {
        Unk_ov004_0224882c *e = func_ov004_0223584c()->func_ov004_02235720(i);
        if (e != NULL && func_ov004_02206f7c(e) && e->unk_73c.func_ov004_02205c7c()) {
            func_02051da4(e, z, 0xff, 1);
        }
    }
    return TRUE;
}

// @0x2234c7c unk_02234774.cpp
extern "C" void func_ov004_02234c7c(u32 v, BOOL (*f)(Unk_ov004_0224882c *), s32 a) {
    u32 i = 0;
    for (; i < func_ov004_02234af8(); i++) {
        Unk_ov004_0224882c *e = func_ov004_0223584c()->func_ov004_02235720(i);
        if (e != NULL) {
            if (f == NULL || (f != NULL && f(e))) {
                if (v != e->unk_73c.func_ov004_02205c7c()) {
                    e->unk_73c.func_ov004_02205c44(v, a);
                }
            }
        }
    }
}

// @0x2234c2c unk_02234774.cpp
extern "C" s32 func_ov004_02234c2c(BOOL (*f)(Unk_ov004_0224882c *)) {
    s32 cnt = 0;
    u32 i = 0;
    for (; i < func_ov004_02234af8(); i++) {
        Unk_ov004_0224882c *e = func_ov004_0223584c()->func_ov004_02235720(i);
        if (e != NULL) {
            if (f == NULL || (f != NULL && f(e) && e->unk_73c.func_ov004_02205c7c())) {
                cnt++;
            }
        }
    }
    return cnt;
}

// @0x2234bb4 unk_02234774.cpp
extern "C" Unk_ov004_0224882c *func_ov004_02234bb4(BOOL (*f)(Unk_ov004_0224882c *), s32 a) {
    s32 n = func_ov004_02234c2c(f);
    if (n != 0) {
        s32 pick = func_02063b8c(n);
        s32 cnt = 0;
        u32 i = 0;
        for (; i < func_ov004_02234af8(); i++) {
            Unk_ov004_0224882c *e = func_ov004_0223584c()->func_ov004_02235720(i);
            if (e != NULL) {
                if (f == NULL || (f != NULL && f(e))) {
                    if (e->unk_73c.func_ov004_02205c7c()) {
                        if (cnt == pick) {
                            e->unk_73c.func_ov004_02205c44(0, a);
                            return e;
                        }
                        cnt++;
                    }
                }
            }
        }
    }
    return NULL;
}

// @0x2234ba8 unk_02234774.cpp
extern "C" u16 func_ov004_02234ba8() {
    return data_ov004_02251f7c;
}

// @0x2234b0c unk_02234774.cpp
extern "C" s32 func_ov004_02234b0c(u32 key) {
    u32 n = func_ov004_02234af8();
    Unk_ov004_0223583c *mgr = func_ov004_0223584c();
    s32 cnt = 0;
    u32 i = 0;
    for (; i < n; i++) {
        Unk_ov004_0224882c *e = mgr->func_ov004_02235720(i);
        if (e != NULL && e->unk_774 != -1 && key == e->unk_770) {
            cnt++;
        }
    }
    if (cnt != 0) {
        s32 pick = func_02063b8c(cnt);
        cnt = 0;
        i = 0;
        for (; i < n; i++) {
            Unk_ov004_0224882c *e = mgr->func_ov004_02235720(i);
            if (e != NULL && e->unk_774 != -1 && key == e->unk_770) {
                if (cnt == pick) {
                    return e->unk_774;
                }
                cnt++;
            }
        }
    }
    return -1;
}

// @0x2234af8 unk_02234774.cpp
extern "C" u32 func_ov004_02234af8() {
    return func_020b4904(func_020b50e8());
}

// @0x2234ad4 unk_02234774.cpp
extern "C" BOOL func_ov004_02234ad4() {
    s32 t = func_020b50e8();
    if (func_020b5254() != 0 || t == 10 || t == 15) {
        return TRUE;
    }
    return FALSE;
}

// @0x2234ad0 unk_02234774.cpp
extern "C" void func_ov004_02234ad0(void *) {
}

// @0x2234a48 unk_02234774.cpp
extern "C" void func_ov004_02234a48(void *) {
    Unk_ov004_02234a48_Grid *g = data_021c47c4;
    void *cells;
    if ((u8 *)g->w > (u8 *)0 && (u8 *)g->h > (u8 *)0 && g->cells != NULL) {
        cells = g->cells;
    } else {
        cells = NULL;
    }
    u32 layer;
    for (layer = 0; layer < 2; layer++) {
        s32 y;
        for (y = 0; y < 16; y++) {
            s32 x;
            for (x = 0; x < 16; x++) {
                void *c = func_02037558(cells, x, y, layer);
                if (c != NULL && func_0204b2d4(c)) {
                    s32 a = func_0204b25c(c);
                    func_ov004_02234ff4(x, y, a, func_0204b274(c), layer, 0);
                }
            }
        }
    }
}

// @0x22349a8 unk_02234774.cpp
extern "C" void func_ov004_022349a8(void *) {
    u8 *p = (u8 *)func_02095204(4);
    if (p != NULL) {
        Unk_ov004_Vec3 v0;
        Unk_ov004_Vec3 *pv = (Unk_ov004_Vec3 *)(p + 0x5c);
        v0.x = pv->x;
        v0.y = pv->y;
        v0.z = pv->z;
        s32 best;
        u32 i = 0;
        best = -1;
        s32 minv = data_ov004_02251f98;
        for (; i < func_ov004_02234af8(); i++) {
            Unk_ov004_0224882c *e = func_ov004_0223584c()->func_ov004_02235720(i);
            if (e != NULL && func_ov004_02209c10(e)) {
                Unk_ov004_Vec3 v0c;
                Unk_ov004_Vec3 t = e->unk_7b4;
                v0c.x = t.x;
                v0c.y = t.y;
                v0c.z = t.z;
                s32 d = func_01ffd028(&v0c, &v0);
                if (d < minv) {
                    best = i;
                    minv = d;
                }
            }
        }
        if (best != -1) {
            Unk_ov004_0224882c *e = func_ov004_0223584c()->func_ov004_02235720(best);
            if (e != NULL) {
                func_ov004_0220f29c(e);
            }
        }
    }
}

// @0x2234908 unk_02234774.cpp
extern "C" void func_ov004_02234908(void *) {
    u8 *p = (u8 *)func_02095204(4);
    if (p != NULL) {
        Unk_ov004_Vec3 v0;
        Unk_ov004_Vec3 *pv = (Unk_ov004_Vec3 *)(p + 0x5c);
        v0.x = pv->x;
        v0.y = pv->y;
        v0.z = pv->z;
        s32 best;
        u32 i = 0;
        best = -1;
        s32 minv = data_ov004_02251f98;
        for (; i < func_ov004_02234af8(); i++) {
            Unk_ov004_0224882c *e = func_ov004_0223584c()->func_ov004_02235720(i);
            if (e != NULL && func_ov004_02209bb4(e)) {
                Unk_ov004_Vec3 v0c;
                Unk_ov004_Vec3 t = e->unk_7b4;
                v0c.x = t.x;
                v0c.y = t.y;
                v0c.z = t.z;
                s32 d = func_01ffd028(&v0c, &v0);
                if (d < minv) {
                    best = i;
                    minv = d;
                }
            }
        }
        if (best != -1) {
            Unk_ov004_0224882c *e = func_ov004_0223584c()->func_ov004_02235720(best);
            if (e != NULL) {
                func_ov004_0220f2a8(e);
            }
        }
    }
}

// @0x2234774 unk_02234774.cpp
extern "C" void func_ov004_02234774(Unk_ov004_0224e9d8 *self) {
    if (data_ov004_02251f78 != 0) {
        BOOL r6 = TRUE;
        Unk_ov004_Vec3 v8;
        v8.x = data_021f4880.x;
        v8.y = data_021f4880.y;
        v8.z = data_021f4880.z;
        u8 *p = (u8 *)func_02095204(4);
        if (p != NULL) {
            Unk_ov004_Vec3 v14;
            Unk_ov004_Vec3 *pv = (Unk_ov004_Vec3 *)(p + 0x5c);
            v14.x = pv->x;
            v14.y = pv->y;
            v14.z = pv->z;
            u32 i = 0;
            s32 best = -1;
            s32 minv = data_ov004_02251f98;
            for (; i < func_ov004_02234af8(); i++) {
                Unk_ov004_0224882c *e = func_ov004_0223584c()->func_ov004_02235720(i);
                if (e != NULL && func_ov004_02209c88(e)) {
                    Unk_ov004_Vec3 v20;
                    Unk_ov004_Vec3 t = e->unk_7b4;
                    v20.x = t.x;
                    v20.y = t.y;
                    v20.z = t.z;
                    s32 d = func_01ffd028(&v20, &v14);
                    if (d < minv) {
                        best = i;
                        minv = d;
                    }
                }
            }
            if (best != -1) {
                Unk_ov004_0224882c *e = func_ov004_0223584c()->func_ov004_02235720(best);
                if (e != NULL) {
                    func_ov004_0220e738(e);
                    Unk_ov004_Vec3 t = e->unk_7b4;
                    v8.x = t.x;
                    v8.y = t.y;
                    v8.z = t.z;
                    r6 = FALSE;
                }
            }
        }
        Unk_0213bac4 *r4 = func_ov004_02233c94();
        if (r4 != NULL) {
            if (r6) {
                if (self->unk_2a9 == 0 || self->unk_2a8 == 0) {
                    r4->func_020037b0();
                    self->unk_2a8 = 1;
                }
                r4->func_020037d0(func_ov004_02233c54(), NULL);
            } else {
                if (self->unk_2a9 == 0 && self->unk_2a8 != 0 && self->unk_2ac == func_ov004_02233cb4()) {
                } else {
                    s32 r7 = func_ov004_02233c54() - 1;
                    if (r7 < 0) r7 = 0;
                    BOOL f;
                    if (func_ov004_02233c74() == 0 && r7 == 0 && func_ov004_02233c20() != 0) {
                        f = TRUE;
                    } else {
                        f = FALSE;
                    }
                    r4->func_020037c0(f);
                    self->unk_2a8 = 1;
                }
                r4->func_020037d0(func_ov004_02233c54(), &v8);
            }
        }
        self->unk_2a9 = r6;
        self->unk_2ac = func_ov004_02233cb4();
    }
}

// @0x22345c4 unk_02233dc0.cpp
extern "C" s32 func_ov004_022345c4(s32 *ox, s32 *oy, Unk_ov004_Vec3 *pos, s32 ang, u16 *p1, u16 *p2) {
    s32 i;
    Unk_ov004_02233f3c_World *w;
    s32 b24, b28;
    s32 c2c, c30;
    s32 layer;
    s32 t, idx;
    s32 hx, hy, sx, sy;
    u16 tmp;
    Unk_ov004_0224882c *o;
    u16 *cell;
    u16 *cell2;
    Unk_ov004_02233f3c_V3 v34;
    Unk_ov004_02233f3c_V3 v40;
    if (p1 != 0) *p1 = 0xfff1;
    if (p2 != 0) *p2 = 0xfff1;
    func_0204ee10(&b24, &b28, pos);
    w = data_021c47c4;
    if (w != 0) {
        idx = ((s32)(u16)ang >> 4) * 2;
        t = pos->z + func_01ffcb0c(data_02135f44[idx + 1], 0x10cd);
        v34.x = pos->x + func_01ffcb0c(data_02135f44[idx], 0x10cd);
        v34.y = 0;
        v34.z = t;
        cell = func_0204eba0(w, &v34, 0);
        if (cell != 0) {
            if (func_0204b300(cell) != 0) {
                return -1;
            }
        }
    }
    for (i = 0; (u32)i < 4; i++) {
        for (layer = 1; layer >= 0; layer--) {
            if (func_ov004_02234320(&c2c, &c30, pos, ang, i) == 0) {
                continue;
            }
            func_0204ed8c((Unk_ov004_Vec3 *)&v40, c2c, c30);
            if (func_020e9650(pos, &v40) > data_ov004_022406b4[layer & 1]) {
                continue;
            }
            o = func_ov004_02235718()->func_ov004_022355d8(c2c, c30, (u8)layer);
            *ox = c2c;
            *oy = c30;
            if (o != 0 && o->vfunc_a0() != 0 && o->func_ov004_022075b0() == 0) {
                if (p1 != 0) {
                    func_ov004_02206f3c(&tmp, o);
                    *p1 = tmp;
                }
                if (p2 != 0) {
                    *p2 = func_0204b248(func_ov004_022087a4(o), 0);
                }
                return func_ov004_0223584c()->func_ov004_02235740(o);
            }
            if (layer == 1 && o == 0) {
                sx = *(volatile s32 *)&c2c;
                sy = *(volatile s32 *)&c30;
                hx = sx >> 4;
                hy = sy >> 4;
                cell2 = func_0204ebd8(w, hx, hy, sx - (hx << 4), sy - (hy << 4), (u8)layer);
                if (cell2 != 0 && func_0204b300(cell2) != 0) {
                    if (p1 != 0) *p1 = *cell2;
                    if (p2 != 0) *p2 = *cell2;
                    return -2;
                }
            }
        }
    }
    return -1;
}

// @0x2234588 unk_02233dc0.cpp
extern "C" s32 func_ov004_02234588(s32 *a, s32 *b, u16 *c, u16 *d) {
    Unk_ov004_0224882c *o = func_02095204(4);
    if (o != 0) {
        return func_ov004_022345c4(a, b, &o->unk_5c, o->unk_8e, c, d);
    }
    return -1;
}

// @0x2234550 unk_02233dc0.cpp
extern "C" u8 func_ov004_02234550(u32 i) {
    if (i < func_ov004_02234af8()) {
        if (func_ov004_0223584c()->func_ov004_02235720(i) != 0) {
            return func_ov004_0223584c()->func_ov004_02235720(i)->unk_284;
        }
    }
    return 0;
}

// @0x22344e8 unk_02233dc0.cpp
extern "C" s32 func_ov004_022344e8(s32 idx, u16 *p1, u16 *p2) {
    if (p1 != 0) *p1 = 0xfff1;
    if (p2 != 0) *p2 = 0xfff1;
    Unk_ov004_0224882c *o = func_ov004_0223584c()->func_ov004_02235720(idx);
    if (o != 0) {
        o->func_ov004_022056bc(5);
        if (p1 != 0) {
            u16 t[2];
            func_ov004_02206f3c(t, o);
            *p1 = t[0];
        }
        if (p2 != 0) {
            *p2 = func_0204b248(func_ov004_022087a4(o), 0);
        }
        return 1;
    }
    return 0;
}

// @0x22344dc unk_02233dc0.cpp
extern "C" s32 func_ov004_022344dc(s32 idx) {
    return func_ov004_022344e8(idx, 0, 0);
}

// @0x22344a4 unk_02233dc0.cpp
extern "C" Unk_ov004_Vec3 *func_ov004_022344a4(s32 idx) {
    Unk_ov004_0224882c *o = func_ov004_0223584c()->func_ov004_02235720(idx);
    if (o == 0) {
        return (Unk_ov004_Vec3 *)&data_ov004_0225203c;
    }
    if (o->unk_14c < 0x4cd) {
        return (Unk_ov004_Vec3 *)&data_ov004_0225203c;
    }
    return 0;
}

// @0x2234490 unk_02233dc0.cpp
extern "C" void func_ov004_02234490(Unk_ov004_Vec3 *v) {
    data_ov004_0225203c.x = v->x;
    data_ov004_0225203c.y = v->y;
    data_ov004_0225203c.z = v->z;
}

// @0x2234464 unk_02233dc0.cpp
extern "C" s32 func_ov004_02234464(Unk_ov004_0224882c *p) {
    if (p != 0) {
        if (p->vfunc_a0() != 0) {
            if (p->func_ov004_022075b0() == 0) {
                return 1;
            }
        }
    }
    return 0;
}

// @0x2234440 unk_02233dc0.cpp
extern "C" s32 func_ov004_02234440(s32 i) {
    if (i >= 0) {
        Unk_ov004_0224882c *o = func_ov004_0223584c()->func_ov004_02235720(i);
        if (o != 0) {
            return func_ov004_02234464(o);
        }
    }
    return 0;
}

extern "C" const u8 data_ov004_022408c8[0x54] = {8, 0, 0, 10, 1, 0, 1, 3, 0, 0, 4, 0, 1, 5, 0, 2, 6, 0, 255, 6, 45, 2, 7, 0, 255, 7, 45, 3, 8, 0, 6, 8, 30, 7, 10, 0, 2, 11, 0, 255, 11, 45, 8, 12, 0, 3, 13, 0, 8, 13, 30, 6, 15, 0, 7, 16, 0, 8, 17, 0, 2, 18, 0, 255, 18, 45, 8, 19, 0, 6, 20, 0, 3, 21, 0, 2, 22, 0, 255, 22, 45, 8, 23, 0};

// @0x2234320 unk_02233dc0.cpp
extern "C" s32 func_ov004_02234320(s32 *ox, s32 *oy, Unk_ov004_Vec3 *pos, s32 ang, s32 idx) {
    static Unk_ov004_02233f3c_P dirs[16] = {
        Unk_ov004_02233f3c_P(0, 1),  Unk_ov004_02233f3c_P(1, 1),   Unk_ov004_02233f3c_P(1, 1),
        Unk_ov004_02233f3c_P(1, 0),  Unk_ov004_02233f3c_P(1, 0),   Unk_ov004_02233f3c_P(1, -1),
        Unk_ov004_02233f3c_P(1, -1), Unk_ov004_02233f3c_P(0, -1),  Unk_ov004_02233f3c_P(0, -1),
        Unk_ov004_02233f3c_P(-1, -1), Unk_ov004_02233f3c_P(-1, -1), Unk_ov004_02233f3c_P(-1, 0),
        Unk_ov004_02233f3c_P(-1, 0), Unk_ov004_02233f3c_P(-1, 1),  Unk_ov004_02233f3c_P(-1, 1),
        Unk_ov004_02233f3c_P(0, 1)};
    func_0204ee10(ox, oy, pos);
    if (idx == 0) {
        return 1;
    }
    if (idx < 4) {
        if (idx != 0) {
            s32 t = (ang >> 12) & 0xf;
            s32 k = (t + data_ov004_022406a8[idx]) & 0xf;
            *ox = *ox + dirs[k].x;
            *oy = *oy + dirs[k].y;
        }
        return 1;
    }
    return 0;
}

// @0x22341c0 unk_02233dc0.cpp
extern "C" s32 func_ov004_022341c0(void *out, s32 x, s32 y, s32 dir, s32 pl, u32 layer, s32 cx, s32 cy) {
    s32 l18 = func_02052f44(pl);
    s32 l1c = func_02053248(pl);
    s32 l20 = func_02052fc4(pl);
    s32 z2, z;
    s32 py, px;
    u16 s34;
    Unk_ov004_022341c0_Buf b;
    s34 = func_0204b248(pl, dir);
    func_020524a8(&b, &s34);
    Unk_ov004_02233f3c_World *w = data_021c47c4;
    BOOL ok = TRUE;
    u32 i = 0;
    z2 = i;
    z = i;
    for (; i < func_0205248c(&b); i++) {
        px = x + *(s16 *)((u8 *)func_0205242c(&b, i) + z);
        py = y + func_0205242c(&b, i)[1];
        s32 hx = px >> 4;
        s32 hy = py >> 4;
        u16 *cell = func_0204ebd8(w, hx, hy, px - (hx << 4), py - (hy << 4), layer);
        if (l18 == 0 && px == cx && py == cy) {
            ok = FALSE;
            break;
        }
        if (cell == 0) {
            ok = FALSE;
            break;
        }
        if (*cell != 0xfff1) {
            ok = FALSE;
            break;
        }
        if (func_02031284(px, py) == 0) {
            ok = FALSE;
            break;
        }
        if (layer == 1) {
            if (l1c != 0) {
                ok = FALSE;
                break;
            }
            if (l20 != 2) {
                ok = FALSE;
                break;
            }
            Unk_ov004_0224882c *o = func_ov004_02235718()->func_ov004_022355d8(px, py, z2);
            if (o == 0 || (o != 0 && o->unk_784 != 1) || (o != 0 && o->func_ov004_022057c8() != 0)) {
                ok = FALSE;
                break;
            }
        }
    }
    if (ok) {
        *(u32 *)out = (u32)func_ov004_02209d58(x, y, pl, dir, layer, 1);
        func_020524a4(&b);
        return 3;
    }
    func_020524a4(&b);
    return 2;
}

Unk_ov004_022358c8 data_ov004_02251f84;

Unk_ov004_02235a0c data_ov004_02252070;

Unk_ov004_02235708 data_ov004_022521c4;

Unk_ov004_022351bc data_ov004_02252144;

// @0x2233f3c unk_02233dc0.cpp
extern "C" s32 func_ov004_02233f3c(void *out, u16 *tile, Unk_ov004_Vec3 *pos, s32 ang, s32 mode) {
    s32 pl, kind, base;
    s32 bx, by;
    s32 layer, n;
    u32 k;
    s16 d;
    u32 e, cnt, i, m;
    s32 px, py, dr, z, q3c, r7, y3c;
    u16 s48;
    s32 c54, c58;
    Unk_ov004_022341c0_Buf buf;
    Unk_ov004_02233f3c_V3 v64, v70, v7c, v88;
    if (func_0204b2d4(tile) == 0) {
        return 0;
    }
    if (func_ov004_0223584c()->func_ov004_0223576c() == 0) {
        return 1;
    }
    if (mode == 2) {
        *(u32 *)out = (u32)func_ov004_02209d58(0, 0, func_0204b25c(tile), 0, 0, 2);
        return 3;
    }
    if (func_020b52f8() == 0) {
        return 0;
    }
    pl = func_0204b25c(tile);
    kind = func_02053248(pl);
    base = func_ov004_02207c04((s16)(ang + 0x8000));
    func_0204ee10(&bx, &by, pos);
    static Unk_ov004_02233f3c_P dirs[4] = {Unk_ov004_02233f3c_P(0, 0), Unk_ov004_02233f3c_P(-1, 0),
                                           Unk_ov004_02233f3c_P(0, -1), Unk_ov004_02233f3c_P(-1, -1)};
    n = layer = 1;
    goto testL;
loopL:
    k = 0;
    goto testK;
loopK:
    if (func_ov004_02234320(&c54, &c58, pos, ang, k) == 0) {
        goto nextK;
    }
    func_0204ed8c((Unk_ov004_Vec3 *)&v64, c54, c58);
    d = 0;
    goto testD;
loopD:
    r7 = (base + data_ov004_022406a4[d]) & 3;
    if (kind == 2) {
        cnt = 4;
    } else {
        cnt = n;
    }
    e = 0;
    goto testE;
loopE:
    px = c54 + dirs[e].x;
    py = c58 + dirs[e].y;
    if (Unk_ov004_02233f3c_Ns::func_ov004_022341c0(out, px, py, r7, pl, layer, bx, by) == 3) {
        if (kind == 1) {
            s48 = func_0204b248(pl, r7);
            dr = (s32)(r7 << 30) >> 16;
            func_020524a8(&buf, &s48);
            v70.x = 0;
            v70.y = 0;
            v70.z = 0;
            m = func_0205248c(&buf);
            i = 0;
            z = i;
            for (; i < m; i++) {
                q3c = px + *(s16 *)((u8 *)func_0205242c(&buf, i) + z);
                y3c = py + func_0205242c(&buf, i)[1];
                func_0204ed8c((Unk_ov004_Vec3 *)&v7c, q3c, y3c);
                func_01ffca8c(&v70, &v7c, &v70);
            }
            func_020e97c8(&v70, m << 12);
            func_020e9960(&v88, pos, &v70);
            if (func_020e780c(dr, func_020e7b98(v88.x, v88.z)) > 0x4000) {
                s16 *p1 = func_0205242c(&buf, 1);
                s16 *p2 = func_0205242c(&buf, 1);
                if (Unk_ov004_02233f3c_Ns::func_ov004_022341c0(out, px + p1[0], py + p2[1], (r7 + 2) & 3, pl, layer, bx, by) == 3) {
                    func_020524a4(&buf);
                    return 3;
                }
            }
            func_020524a4(&buf);
        }
        return 3;
    }
    e++;
testE:
    if (e < cnt) goto loopE;
    d = d + 1;
testD:
    if (d < 4) goto loopD;
nextK:
    k++;
testK:
    if (k < 4) goto loopK;
    layer--;
testL:
    if (layer >= 0) goto loopL;
    return 2;
}

// @0x2233f08 unk_02233dc0.cpp
extern "C" s32 func_ov004_02233f08(void *a, u16 *b, u32 c) {
    Unk_ov004_0224882c *o = func_02095204(4);
    if (o != 0) {
        return func_ov004_02233f3c(a, b, &o->unk_5c, o->unk_8e, c);
    }
    return 0;
}

// @0x2233ee0 unk_02233dc0.cpp
extern "C" s32 func_ov004_02233ee0() {
    if (func_0209750c() != 0) {
        return func_02097740(data_021d735c, func_0209888c());
    }
    return -1;
}

// @0x2233e98 unk_02233dc0.cpp
TILE_ENTRY(func_ov004_02233e98, 0x3d84)

// @0x2233e50 unk_02233dc0.cpp
TILE_ENTRY(func_ov004_02233e50, 0x3ea4)

// @0x2233e08 unk_02233dc0.cpp
TILE_ENTRY(func_ov004_02233e08, 0x4224)

// @0x2233dc0 unk_02233dc0.cpp
TILE_ENTRY(func_ov004_02233dc0, 0x3f24)

// @0x2233d88 unk_0223349c.cpp
extern "C" s32 func_ov004_02233d88(void *o0) {
    Unk_ov004_02233d2c_Obj *o = (Unk_ov004_02233d2c_Obj *)o0;
    if (o) {
        switch (o->unk_77c) {
        case 0x1b:
            if (o) {
                return func_ov004_0220c950(o);
            }
            break;
        case 0x27:
            if (o) {
                return func_ov004_0220af28(o);
            }
            break;
        }
    }
    return 0;
}

// @0x2233d64 unk_0223349c.cpp
extern "C" s32 func_ov004_02233d64(s32 a, s32 b) {
    return func_ov004_02233d88(func_ov004_02235718()->func_ov004_022355d8(a, b, 0));
}

// @0x2233d2c unk_0223349c.cpp
extern "C" s32 func_ov004_02233d2c(void *o0) {
    Unk_ov004_02233d2c_Obj *o = (Unk_ov004_02233d2c_Obj *)o0;
    if (o) {
        switch (o->unk_77c) {
        case 0x1b:
            if (o) {
                return func_ov004_0220c93c(o);
            }
            break;
        case 0x27:
            if (o) {
                return func_ov004_0220af14(o);
            }
            break;
        }
    }
    return 0;
}

// @0x2233d08 unk_0223349c.cpp
extern "C" s32 func_ov004_02233d08(s32 a, s32 b) {
    return func_ov004_02233d2c(func_ov004_02235718()->func_ov004_022355d8(a, b, 0));
}

// @0x2233d04 unk_0223349c.cpp
extern "C" BOOL func_ov004_02233d04(void) {
    return TRUE;
}

// @0x2233d00 unk_0223349c.cpp
extern "C" BOOL func_ov004_02233d00(void) {
    return TRUE;
}

// @0x2233cfc unk_0223349c.cpp
extern "C" BOOL func_ov004_02233cfc(void) {
    return TRUE;
}

// @0x2233cdc unk_0223349c.cpp
extern "C" s32 func_ov004_02233cdc(void) {
    Unk_ov004_0224e9d8 *s = data_ov004_02251f80;
    if (s) {
        return func_ov004_02233194(&s->unk_64);
    }
    return 0;
}

// @0x2233cb4 unk_0223349c.cpp
extern "C" s32 func_ov004_02233cb4(void) {
    Unk_ov004_0224e9d8 *s = data_ov004_02251f80;
    if (s) {
        return (s16)func_ov004_022331b8(&s->unk_64);
    }
    return -1;
}

// @0x2233c94 unk_0223349c.cpp
extern "C" Unk_0213bac4 *func_ov004_02233c94(void) {
    Unk_ov004_0224e9d8 *s = data_ov004_02251f80;
    if (s) {
        return (Unk_0213bac4 *)func_ov004_02233188(&s->unk_64);
    }
    return 0;
}

// @0x2233c74 unk_0223349c.cpp
extern "C" s32 func_ov004_02233c74(void) {
    Unk_ov004_0224e9d8 *s = data_ov004_02251f80;
    if (s) {
        return func_ov004_02233170(&s->unk_64);
    }
    return 0xff;
}

// @0x2233c54 unk_0223349c.cpp
extern "C" s32 func_ov004_02233c54(void) {
    Unk_ov004_0224e9d8 *s = data_ov004_02251f80;
    if (s) {
        return func_ov004_02233158(&s->unk_64);
    }
    return 0;
}

// @0x2233c3c unk_0223349c.cpp
extern "C" void func_ov004_02233c3c(void) {
    Unk_ov004_0224e9d8 *s = data_ov004_02251f80;
    if (s) {
        s->unk_2b0 = 1;
    }
}

// @0x2233c20 unk_0223349c.cpp
extern "C" u8 func_ov004_02233c20(void) {
    Unk_ov004_0224e9d8 *s = data_ov004_02251f80;
    if (s) {
        return s->unk_2b0;
    }
    return 0;
}

// @0x2233c18 unk_0223349c.cpp
extern "C" void func_ov004_02233c18(u8 *p) {
    *p = 0;
}

// @0x2233c10 unk_0223349c.cpp
extern "C" void func_ov004_02233c10(u8 *p) {
    *p = 0;
}

// @0x2233bf4 unk_0223349c.cpp
extern "C" void *func_ov004_02233bf4(void) {
    Unk_ov004_0224e9d8 *s = data_ov004_02251f80;
    if (s) {
        return &s->unk_1c4;
    }
    return 0;
}

// @0x2233b90 unk_0223349c.cpp
extern "C" void func_ov004_02233b90(Unk_ov004_02233b90_Obj *o) {
    Unk_ov004_02233b3c_V3 v;
    Unk_ov004_02233b3c_V3 out;
    Unk_ov004_02233b3c *r;
    if (o != 0 && o->unk_00->unk_01 == 0) {
        Unk_ov004_02233b3c_V3 *pv = &o->unk_b4->unk_4c;
        v.x = pv->x;
        v.y = pv->y;
        v.z = pv->z;
        r = o->unk_04->unk_2c;
        if (r != 0) {
            *(Unk_ov004_02233b3c_Mat *)data_021f47e0 = *(Unk_ov004_02233b3c_Mat *)func_ov004_02233b00(r);
            func_01ffb898(&v, data_021f47e0, &out);
            func_ov004_02233af0(r, &out);
        }
    }
}

// @0x2233b80 unk_0223349c.cpp
extern "C" void func_ov004_02233b80(Unk_ov004_02233b3c *r) {
    r->unk_24 = (void *)func_ov004_02233b90;
    ((u8 *)&r->unk_90)[2] = 2;
}

// @0x2233b54 unk_0223349c.cpp
extern "C" void *func_ov004_02233b54(Unk_ov004_02233b3c *r) {
    func_020548d0(r->unk_2c);
    r->unk_10 = 0;
    r->unk_24 = 0;
    r->unk_28 = 0;
    r->unk_18 = 0;
    r->unk_1c = 0;
    r->unk_20 = 0;
    r->unk_14 = 0;
    r->unk_00 = 0;
    r->unk_04 = 0;
    r->unk_08 = 0;
    r->unk_0c = 0;
    return r;
}

// @0x2233b3c unk_0223349c.cpp
extern "C" void *func_ov004_02233b3c(Unk_ov004_02233b3c *r) {
    r->unk_00 = 0;
    func_020548a0(r->unk_2c);
    return r;
}

// @0x2233b20 unk_0223349c.cpp
extern "C" void func_ov004_02233b20(Unk_ov004_02233b3c *r) {
    func_ov004_0223399c(r);
    func_ov004_022338e0(r);
    func_ov004_022337d4(r);
}

// @0x2233b04 unk_0223349c.cpp
extern "C" void func_ov004_02233b04(Unk_ov004_02233b3c *r) {
    func_ov004_022337c8(r);
    func_ov004_022338d0(r);
    func_ov004_0223397c(r);
}

// @0x2233b00 unk_0223349c.cpp
extern "C" void *func_ov004_02233b00(Unk_ov004_02233b3c *r) {
    return &r->unk_90;
}

// @0x2233af0 unk_0223349c.cpp
extern "C" void func_ov004_02233af0(Unk_ov004_02233b3c *r, Unk_ov004_02233b3c_V3 *v) {
    r->unk_04 = v->x;
    r->unk_08 = v->y;
    r->unk_0c = v->z;
}

// @0x2233a70 unk_0223349c.cpp
extern "C" BOOL func_ov004_02233a70(Unk_ov004_02233b3c *r, s32 x, volatile u8 *flag, Unk_ov004_02233b3c_V3 *pos, s32 e) {
    if (*flag == 0 && r->unk_00 == 0 && x != 0) {
        func_02054720(r->unk_2c, x, 1, 0x1000, 0, 0);
        r->unk_00 = 1;
        *flag = r->unk_00;
        r->unk_04 = pos->x;
        r->unk_08 = pos->y;
        r->unk_0c = pos->z;
        func_020e8388(data_021f47e0, pos->x, pos->y, pos->z);
        func_020e8404(data_021f47e0, *(s16 *)&e);
        r->unk_90 = *(Unk_ov004_02233b3c_Mat *)data_021f47e0;
        return TRUE;
    }
    return FALSE;
}

// @0x2233a48 unk_0223349c.cpp
extern "C" BOOL func_ov004_02233a48(Unk_ov004_02233b3c *r, volatile u8 *a, Unk_ov004_02233b3c_V3 *b, s32 c) {
    return func_ov004_02233a70(r, func_ov004_022337c4(r), a, b, c);
}

// @0x2233a20 unk_0223349c.cpp
extern "C" BOOL func_ov004_02233a20(Unk_ov004_02233b3c *r, volatile u8 *a, Unk_ov004_02233b3c_V3 *b, s32 c) {
    return func_ov004_02233a70(r, func_ov004_022337c0(r), a, b, c);
}

// @0x22339cc unk_0223349c.cpp
extern "C" BOOL func_ov004_022339cc(Unk_ov004_02233b3c *r, volatile u8 *a, Unk_ov004_02233b3c_V3 *out) {
    if (r->unk_00 != 0 && *a != 0) {
        func_020547e4(r->unk_2c);
        func_02055524(r->unk_2c);
        out->x = r->unk_04;
        out->y = r->unk_08;
        out->z = r->unk_0c;
        if (func_02056654(r->unk_c8)) {
            *a = 0;
            r->unk_00 = *a;
            return TRUE;
        }
        return FALSE;
    }
    return FALSE;
}

// @0x223399c unk_0223349c.cpp
extern "C" BOOL func_ov004_0223399c(Unk_ov004_02233b3c *r) {
    if (r->unk_10 == 0) {
        r->unk_10 = func_020e8da0(0x2800, data_021f482c);
        if (r->unk_10) {
            return TRUE;
        }
    }
    return FALSE;
}

// @0x223397c unk_0223349c.cpp
extern "C" BOOL func_ov004_0223397c(Unk_ov004_02233b3c *r) {
    if (r->unk_10) {
        func_020e8c88(r->unk_10);
        r->unk_10 = 0;
        return TRUE;
    }
    return FALSE;
}

// @0x22338e0 unk_0223349c.cpp
extern "C" BOOL func_ov004_022338e0(Unk_ov004_02233b3c *r) {
    Unk_ov004_022337d4_Arc arc;
    if (r->unk_14 == 0) {
        r->unk_14 = func_020641ec("/ftr/anm/anm.arc", r->unk_10, 4, 0);
        if (r->unk_14 == 0) {
            return FALSE;
        }
        if (func_02101340(&arc, "ANM", r->unk_14)) {
            void *x = func_021012bc("ANM:a/bca/ft_push1.nsbca");
            if (x) {
                r->unk_18 = (u32)func_021065f8(func_021065dc(x), 0);
            }
            x = func_021012bc("ANM:a/bca/ft_pull1.nsbca");
            if (x) {
                r->unk_1c = (u32)func_021065f8(func_021065dc(x), 0);
            }
            x = func_021012bc("ANM:a/bca/ft_kb_hw_def_anim.nsbca");
            if (x) {
                r->unk_20 = (u32)func_021065f8(func_021065dc(x), 0);
            }
            func_02101310(&arc);
            return TRUE;
        }
    }
    return FALSE;
}

// @0x22338d0 unk_0223349c.cpp
extern "C" BOOL func_ov004_022338d0(Unk_ov004_02233b3c *r) {
    r->unk_14 = 0;
    r->unk_18 = 0;
    r->unk_1c = 0;
    r->unk_20 = 0;
    return TRUE;
}

// @0x22337d4 unk_0223349c.cpp
extern "C" BOOL func_ov004_022337d4(Unk_ov004_02233b3c *r) {
    Unk_ov004_022337d4_Path path;
    Unk_ov004_022337d4_Arc arc;
    if (r->unk_10 == 0) {
        return FALSE;
    }
    if (r->unk_24 != 0) {
        return FALSE;
    }
    if (r->unk_28 != 0) {
        return FALSE;
    }
    path.unk_00 = 0x3984;
    s32 v = func_0204b25c(&path.unk_00);
    func_020639e8(path.unk_02, "/ftr/%d/%d/%04x.arc", v >> 8, (v & 0xff) >> 4, v);
    r->unk_24 = func_020641ec(path.unk_02, r->unk_10, 4, 0);
    if (r->unk_24 != 0) {
        if (func_02101340(&arc, "FTT", r->unk_24)) {
            BOOL ok = FALSE;
            u8 *p;
            p = (u8 *)func_021062dc(func_021012bc(data_ov004_0224e930));
            r->unk_28 = (u32)p + *(u32 *)(p + *(u16 *)(p + 0xe) + 0xc);
            if (func_02055600(r->unk_2c, (void *)r->unk_28, ok)) {
                if (func_02054800(r->unk_2c, r->unk_10)) {
                    func_02054720(r->unk_2c, func_ov004_022337c4(r), 1, 0x1000, ok, ok);
                    func_02054710(r->unk_2c);
                    func_02055488(r->unk_2c, (void *)func_ov004_02233b80, r);
                    ok = TRUE;
                }
            }
            func_02101310(&arc);
            return ok;
        }
    }
    return FALSE;
}

// @0x22337c8 unk_0223349c.cpp
extern "C" BOOL func_ov004_022337c8(Unk_ov004_02233b3c *r) {
    r->unk_24 = 0;
    r->unk_28 = 0;
    return TRUE;
}

// @0x22337c4 unk_0223349c.cpp
extern "C" u32 func_ov004_022337c4(Unk_ov004_02233b3c *r) {
    return r->unk_18;
}

// @0x22337c0 unk_0223349c.cpp
extern "C" u32 func_ov004_022337c0(Unk_ov004_02233b3c *r) {
    return r->unk_1c;
}

// @0x22337bc unk_0223349c.cpp
extern "C" u32 func_ov004_022337bc(Unk_ov004_02233b3c *r) {
    return r->unk_20;
}

// @0x2233790 unk_0223349c.cpp
extern "C" void *func_ov004_02233790(Unk_ov004_02233790 *p) {
    func_02056d8c(&p->unk_10);
    p->unk_a0 = -1;
    p->unk_a4 = -1;
    p->unk_00 = 0;
    p->unk_a6 = 0;
    return p;
}

// @0x223377c unk_0223349c.cpp
extern "C" void *func_ov004_0223377c(Unk_ov004_02233790 *p) {
    func_02056d54(&p->unk_10);
    return p;
}

// @0x2233744 unk_0223349c.cpp
extern "C" void *func_ov004_02233744(Unk_ov004_02233790 *p, u32 a) {
    p->unk_a0 = -1;
    p->unk_a4 = -1;
    p->unk_00 = func_020e8da0(0xe00, data_021f482c);
    p->unk_04 = a;
}

// @0x223372c unk_0223349c.cpp
extern "C" s32 func_ov004_0223372c(u32 i) {
    if (i < 0xb) {
        return (s32)data_ov004_0224e9a4[i];
    }
    return (s32)data_ov004_0224e9a4[0];
}

// @0x2233660 unk_0223349c.cpp
extern "C" BOOL func_ov004_02233660(Unk_ov004_02233790 *p, u32 id, s32 x) {
    char buf1[0x28];
    char buf2[0x28];
    s32 r6;
    func_ov004_02233644(p);
    r6 = -1;
    if (id != 0xff) {
        func_020639e8(buf1, "/ftr/tv/prog/tv_program%d.nsbtx", id);
        func_020639e8(buf2, "/ftr/tv/prog/tv_program%d.nsbtp", id);
    } else {
        r6 = func_ov004_0223372c(x);
        func_020639e8(buf1, "/ftr/tv/weather/%s.nsbtx", r6);
        func_020639e8(buf2, "/ftr/tv/weather/%s.nsbtp", r6);
        r6 = x;
    }
    p->unk_08 = (u32)func_0210629c(func_020641ec(buf1, p->unk_00, 4, 0));
    p->unk_0c = (u32)func_021066ac(func_02106690(func_020641ec(buf2, p->unk_00, 4, 0)), 0);
    if (func_02056ca4(&p->unk_10, (void *)p->unk_04, "tv.0", "tv_pl", (void *)p->unk_08, (void *)p->unk_0c, 0)) {
        p->unk_a0 = id;
        p->unk_a4 = r6;
        p->unk_a6 = 0;
        return TRUE;
    }
    return FALSE;
}

// @0x2233644 unk_0223349c.cpp
extern "C" void func_ov004_02233644(Unk_ov004_02233790 *p) {
    if (p->unk_00) {
        func_020e885c(p->unk_00);
    }
    p->unk_08 = 0;
    p->unk_0c = 0;
}

// @0x22335fc unk_0223349c.cpp
extern "C" void func_ov004_022335fc(Unk_ov004_02233790 *p) {
    if (p->unk_08 && p->unk_0c) {
        func_02056bf8(&p->unk_10);
        if (func_020565e8(&p->unk_10, 0)) {
            s32 t = p->unk_a6 + 1;
            if (t > 0xffff) {
                p->unk_a6 = 0xffff;
            } else {
                p->unk_a6 = t;
            }
        }
    }
}

// @0x22335dc unk_0223349c.cpp
extern "C" void func_ov004_022335dc(Unk_ov004_02233790 *p) {
    if (p->unk_00) {
        func_020e8c88(p->unk_00);
        p->unk_00 = 0;
    }
    p->unk_0c = 0;
    p->unk_08 = 0;
    p->unk_04 = 0;
}

// @0x22335d4 unk_0223349c.cpp
extern "C" s32 func_ov004_022335d4(Unk_ov004_02233790 *p) {
    return p->unk_a0;
}

// @0x22335b8 unk_0223349c.cpp
extern "C" s32 func_ov004_022335b8(Unk_ov004_02233790 *p) {
    if (func_ov004_022335d4(p) == 0xff) {
        return p->unk_a4;
    }
    return -1;
}

// @0x22335b0 unk_0223349c.cpp
extern "C" u16 func_ov004_022335b0(Unk_ov004_02233790 *p) {
    return p->unk_a6;
}

// @0x22335a8 unk_0223349c.cpp
extern "C" u32 func_ov004_022335a8(Unk_ov004_02233790 *p) {
    return (u32)(p->unk_10[2] << 4) >> 16;
}

// @0x2233560 unk_0223349c.cpp
extern "C" void *func_ov004_02233560(Unk_ov004_02233560 *q) {
    __cxa_vec_ctor(&q->unk_04, 2, 0xa8, (void *(*)(void *))func_ov004_02233790, (void *(*)(void *, s32))func_ov004_0223377c);
    q->unk_00 = -1;
    q->unk_154 = 0;
    q->unk_158 = 0;
    q->unk_15c = 0;
    return q;
}

// @0x2233544 unk_0223349c.cpp
extern "C" void *func_ov004_02233544(Unk_ov004_02233560 *q) {
    __cxa_vec_cleanup(&q->unk_04, 2, 0xa8, (void *(*)(void *, s32))func_ov004_0223377c);
    return q;
}

// @0x223349c unk_0223349c.cpp
extern "C" void func_ov004_0223349c(Unk_ov004_02233560 *q) {
    void *h;
    q->unk_00 = -1;
    q->unk_154 = 0;
    h = func_020641ec("/ftr/tv/tv.nsbtx", data_021f482c, 4, 0);
    if (h) {
        void *r6 = func_0210629c(h);
        func_02055724(r6, 0);
        q->unk_154 = (u32)func_0205588c(r6, data_021c620c);
        func_020e8558(h);
    }
    func_ov004_02233744(&q->unk_04[0], q->unk_154);
    func_ov004_02233744(&q->unk_04[1], q->unk_154);
    if (data_ov004_02251f78) {
        q->unk_158 = func_020e8da0(func_02003850() + 0x60, data_021f482c);
    }
    s32 a = func_ov004_02233330(q);
    s32 b = func_ov004_02233244(q);
    func_ov004_022333f8(q, a, b);
}

// @0x22333f8 unk_02232b1c.cpp
extern "C" BOOL func_ov004_022333f8(Unk_ov004_02233560 *o, s32 a, s32 b) {
    s8 idx;
    func_ov004_02233644(&o->unk_04[o->unk_00 & 1]);
    idx = (o->unk_00 + 1) & 1;
    if (func_ov004_02233660(&o->unk_04[idx], a, b)) {
        o->unk_00 = idx;
        if (data_ov004_02251f78) {
            if (o->unk_158) {
                if (o->unk_15c) {
                    func_02003830(o->unk_15c);
                    o->unk_15c = 0;
                }
                func_020e885c(o->unk_158);
                o->unk_15c = func_02003878(o->unk_158, a);
                if (o->unk_15c) func_02003840(o->unk_15c);
            }
        }
        return TRUE;
    }
    return FALSE;
}

// @0x22333a8 unk_02232b1c.cpp
extern "C" void func_ov004_022333a8(Unk_ov004_02233560 *o) {
    s32 t = func_ov004_02233330(o);
    if (t == 0xff) {
        s32 u = func_ov004_02233244(o);
        if (u != func_ov004_022331a0(o)) {
            func_ov004_022333f8(o, t, u);
            func_ov004_02233c3c();
        }
    } else {
        if (t != func_ov004_022331b8(o)) {
            func_ov004_022333f8(o, t, 0xff);
            func_ov004_02233c3c();
        }
    }
}

// @0x2233380 unk_02232b1c.cpp
extern "C" void func_ov004_02233380(Unk_ov004_02233560 *o) {
    if (func_ov004_022331d0(o)) func_ov004_022335fc(&o->unk_04[o->unk_00 & 1]);
}

// @0x2233330 unk_02232b1c.cpp
extern "C" u8 func_ov004_02233330(void *) {
    const Unk_ov004_02233330_Tbl *t = &data_ov004_022406bc[func_0209cef4()];
    Unk_ov004_02233330_Time l;
    s32 i;
    u16 y;
    func_0209cf18(&l);
    i = t->unk_04 - 1;
    y = l.unk_00;
    for (; i >= 0; i--) {
        const u8 *e = t->unk_00 + i * 3;
        l.unk_03 = e[1];
        l.unk_02 = e[2];
        if (y >= *(u16 *)&l.unk_02) return e[0];
    }
    return 0xff;
}

// @0x22332b8 unk_02232b1c.cpp
extern "C" s32 func_ov004_022332b8() {
    Unk_ov004_022332b8_Buf l;
    s32 r;
    l.unk_00 = 0;
    l.unk_04 = 0;
    func_0209d498(&l);
    l.unk_08 = 1;
    l.unk_09 = 1;
    l.unk_0a = 0;
    l.unk_0b = 0;
    l.unk_0a = ((u8 *)&l)[5];
    l.unk_09 = ((u8 *)&l)[4];
    l.unk_08 = ((u8 *)&l)[3];
    r = func_0209cc34(&l.unk_08);
    switch (r) {
    case 0:
    case 1:
    case 2:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
        return TRUE;
    }
    return FALSE;
}

// @0x2233244 unk_02232b1c.cpp
extern "C" s32 func_ov004_02233244(void *) {
    s32 t = data_021ed2b0.unk_0b & 0x1f;
    if (t <= 6) return 0;
    if (t <= 9) return 1;
    if (t <= 15) {
        if (func_ov004_022332b8()) return 8;
        return 2;
    }
    if (t <= 18) return 3;
    if (t <= 21) return 4;
    if (t <= 25) return 5;
    if (t <= 28) {
        if (func_ov004_022332b8()) return 9;
        return 6;
    }
    if (func_ov004_022332b8()) return 10;
    return 7;
}

// @0x22331e0 unk_02232b1c.cpp
extern "C" void func_ov004_022331e0(Unk_ov004_02233560 *o) {
    o->unk_00 = -1;
    o->unk_154 = 0;
    if (data_ov004_02251f78) {
        if (o->unk_158) {
            if (o->unk_15c) {
                func_02003830(o->unk_15c);
                o->unk_15c = 0;
            }
            func_020e8c88(o->unk_158);
            o->unk_158 = 0;
        }
    }
    func_ov004_022335dc(&o->unk_04[0]);
    func_ov004_022335dc(&o->unk_04[1]);
}

// @0x22331d0 unk_02232b1c.cpp
extern "C" BOOL func_ov004_022331d0(Unk_ov004_02233560 *o) {
    BOOL r = FALSE;
    if (o->unk_00 != -1) r = TRUE;
    return r;
}

// @0x22331b8 unk_02232b1c.cpp
extern "C" s32 func_ov004_022331b8(Unk_ov004_02233560 *o) {
    return func_ov004_022335d4(&o->unk_04[o->unk_00 & 1]);
}

// @0x22331a0 unk_02232b1c.cpp
extern "C" s32 func_ov004_022331a0(Unk_ov004_02233560 *o) {
    return func_ov004_022335b8(&o->unk_04[o->unk_00 & 1]);
}

// @0x2233194 unk_02232b1c.cpp
extern "C" s32 func_ov004_02233194(Unk_ov004_02233560 *o) {
    return o->unk_154;
}

// @0x2233188 unk_02232b1c.cpp
extern "C" s32 func_ov004_02233188(Unk_ov004_02233560 *o) {
    return (s32)o->unk_15c;
}

// @0x2233170 unk_02232b1c.cpp
extern "C" s32 func_ov004_02233170(Unk_ov004_02233560 *o) {
    return func_ov004_022335b0(&o->unk_04[o->unk_00 & 1]);
}

// @0x2233158 unk_02232b1c.cpp
extern "C" s32 func_ov004_02233158(Unk_ov004_02233560 *o) {
    return func_ov004_022335a8(&o->unk_04[o->unk_00 & 1]);
}

// @0x2233138 unk_02232b1c.cpp
extern "C" const Unk_ov004_02233138_Rec *func_ov004_02233138(s32 idx) {
    if (idx < 0x6e9) return &data_ov004_0224097c[idx];
    return &data_ov004_022406ac;
}

// @0x2233128 unk_02232b1c.cpp
extern "C" u16 func_ov004_02233128(s32 idx) {
    return func_ov004_02233138(idx)->unk_00;
}

// @0x2233118 unk_02232b1c.cpp
extern "C" u16 func_ov004_02233118(s32 idx) {
    return func_ov004_02233138(idx)->unk_02;
}

// @0x2233108 unk_02232b1c.cpp
extern "C" u16 func_ov004_02233108(s32 idx) {
    return func_ov004_02233138(idx)->unk_04;
}

// @0x22330f8 unk_02232b1c.cpp
extern "C" u16 func_ov004_022330f8(s32 idx) {
    return func_ov004_02233138(idx)->unk_06;
}

// @0x22330cc unk_02232b1c.cpp
extern "C" void func_ov004_022330cc(s32 a) {
    void *p = func_ov004_02235718()->func_ov004_022355b0((void *)a, 0);
    if (p) {
        if (func_ov004_02206f74()) func_ov004_02209150(p);
    }
}

// @0x22330a0 unk_02232b1c.cpp
extern "C" void func_ov004_022330a0(s32 a) {
    void *p = func_ov004_02235718()->func_ov004_022355b0((void *)a, 0);
    if (p) {
        if (func_ov004_02206f74()) func_ov004_02209198(p);
    }
}

// @0x2233074 unk_02232b1c.cpp
extern "C" void func_ov004_02233074(s32 a) {
    void *p = func_ov004_02235718()->func_ov004_022355b0((void *)a, 0);
    if (p) {
        if (func_ov004_02206f74()) func_ov004_02209108(p);
    }
}

extern "C" char data_ov004_0224e95c[8] = "tv_ss";

extern "C" u8 data_ov004_02251f78 = 0;

extern "C" char data_ov004_0224e97c[8] = "tv_ff";

extern "C" const u8 data_ov004_022406a4[4] = {0, 2, 1, 3};

s32 data_ov004_02251f98 = (s32)(((s64)data_020c8cb8 * data_020c8cb8 + 0x800) >> 12);

extern "C" u8 data_ov004_02251f74 = 0;

extern "C" const u8 data_ov004_02240738[0x4c] = {4, 0, 0, 9, 1, 0, 1, 3, 0, 0, 4, 0, 1, 5, 0, 2, 6, 0, 255, 6, 45, 2, 7, 0, 255, 7, 45, 8, 8, 0, 6, 9, 0, 7, 10, 0, 2, 11, 0, 255, 11, 45, 8, 12, 0, 6, 14, 0, 10, 15, 0, 8, 17, 0, 2, 18, 0, 255, 18, 45, 5, 19, 0, 8, 20, 0, 9, 21, 0, 255, 22, 45, 2, 23, 0, 0};

extern "C" const Unk_ov004_02233138_Rec data_ov004_022406ac = {0xffff, 0xffff, 0xffff, 0xffff};

extern "C" const Unk_ov004_02233330_Tbl data_ov004_022406bc[7] = {{data_ov004_022406f4, 22}, {data_ov004_02240784, 26}, {data_ov004_022407d4, 26}, {data_ov004_02240874, 28}, {data_ov004_022408c8, 28}, {data_ov004_02240824, 26}, {data_ov004_02240738, 25}};

extern "C" char data_ov004_0224e93c[8] = "tv_rr";

extern "C" char data_ov004_0224e984[8] = "tv_cs";

extern "C" const char *data_ov004_0224e930 = data_ov004_0224e994;

Unk_02000c8c data_ov004_0225203c(0);

extern "C" const u8 data_ov004_022407d4[0x50] = {8, 0, 0, 9, 1, 0, 1, 3, 0, 0, 4, 0, 1, 5, 0, 2, 6, 0, 255, 6, 45, 2, 7, 0, 255, 7, 45, 3, 8, 0, 6, 8, 30, 7, 10, 0, 2, 11, 0, 255, 11, 45, 8, 12, 0, 3, 13, 0, 6, 15, 0, 7, 16, 0, 8, 17, 0, 2, 18, 0, 255, 18, 45, 10, 19, 0, 3, 21, 0, 2, 22, 0, 255, 22, 45, 6, 23, 0, 0, 0};

extern "C" const u8 data_ov004_022406f4[0x44] = {1, 0, 0, 0, 1, 0, 1, 5, 0, 2, 6, 0, 255, 6, 45, 7, 7, 0, 6, 8, 0, 5, 9, 0, 8, 10, 0, 2, 11, 0, 255, 11, 45, 7, 12, 0, 10, 13, 0, 5, 15, 0, 6, 16, 0, 8, 17, 0, 2, 18, 0, 255, 18, 45, 10, 19, 0, 9, 21, 0, 255, 22, 45, 2, 23, 0, 0, 0};

extern "C" u16 data_ov004_02251f7c = 0;

extern "C" Unk_ov004_0224e9d8 *data_ov004_02251f80 = 0;

extern "C" char data_ov004_0224e94c[8] = "tv_sc";
