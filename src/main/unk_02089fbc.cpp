#include "types.h"
#include "Unk_020d8c7c.h"
#include "text/Unk_02050288.h"

// ---------------------------------------------------------------------------------------------------------------------
// Classes of the unit (declarations of the classes whose vtable another unit owns come first)

struct Unk_02089270_Tbl;

// Animation object (ctor 0x02089270, dtor 0x0208926c)
class Unk_02089270 {
public:
    Unk_02089270();
    ~Unk_02089270();
    void func_02089140();
    void func_020891bc();
    void func_020891d0();
    BOOL func_020891d8();
    s32 func_02089210(s32 v);
    s32 func_02089228(s32 v);
    void *func_02089248();
    void func_02089264(s32 v);
    void func_02089268(Unk_02089270_Tbl *v);

    /* 0x00 */ u8 unk_00[0x14];
};

// Base class with vtable at 0x020e0db4 (ctor 0x02089fa8)
class Unk_020e0db4 {
public:
    Unk_020e0db4();
    virtual ~Unk_020e0db4();
    virtual void vfunc_08() = 0;
    virtual void vfunc_0c() = 0;
    virtual void vfunc_10(s32 a, s32 b);
    s32 func_02089f64();
    s32 func_02089f68();

    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08;
};

class Unk_020e2a08 {
public:
    Unk_020e2a08();
    virtual ~Unk_020e2a08();
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ u8 unk_08;
    /* 0x09 */ u8 unk_09;
};

class Unk_020e2a78 {
public:
    Unk_020e2a78();
    virtual ~Unk_020e2a78();
    virtual u32 vfunc_08() = 0;
    virtual u8 *vfunc_0c() = 0;
    void func_020a7c3c();

    /* 0x04 */ u32 unk_04;
    /* 0x08 */ Unk_020e2a08 unk_08;
};

class Unk_020e2a90 : public Unk_02050288 {
public:
    Unk_020e2a90(s32 arg1, s32 arg2, s32 arg3);
    virtual ~Unk_020e2a90();
    virtual void func_08();
    virtual u32 func_0c();
};

class Unk_020e3efc : public StrBuf {
public:
    Unk_020e3efc();
    ~Unk_020e3efc();
    u32 pad[10];
};

// ---------------------------------------------------------------------------------------------------------------------
extern "C" {
void func_02087e70(u32 a, void *h, s32 x, s32 y, s32 s0, s32 s1, s32 s2, s32 s3, s32 s4, s32 s5, s32 s6, s32 s7);
void func_020033e4();
void func_02003770();
void func_0208de68();
void func_02003780();
void func_020033f4();
void func_0208de78();
void func_0208de88();
void func_02003404();
void func_02003790();
void func_020037a0();
void func_02003414();
void func_0208de8c();
BOOL func_0208f024();
BOOL func_0208f010();
void func_0201190c(u32 a, u32 b, u32 c);
void func_0201192c(u32 a, u32 b);
void func_02011900(u32 a);
s32 func_0201188c();
BOOL func_020118f4();
s32 func_0206edb0();
s32 func_02038f60();
s32 func_0206edbc();
s32 func_01ffcb0c(s32 a, s32 b);
s32 func_0209750c();
s32 _ZN12Unk_0209865c13func_02098750Ev();
s32 _ZN12Unk_02097d1c13func_02097d1cEi(s32 a, s32 b);
s32 func_0206e900();
void func_02003edc();
void func_02003eec();
void func_0200402c(s32 a);
void func_020b3270(void *p, s32 a, s32 b, s32 c, s32 d, s32 e);
void func_020e7870(void *p, s32 a, s32 b, s32 c, s32 d);
void func_020e759c(void *p, s32 a, s32 b);
Unk_020e2a90 *func_020a8054(u32 a, s32 b, s32 c);
void func_020a7fd8(Unk_02050288 *obj);
BOOL func_0203d848();
BOOL func_0203d854();
void func_0203d860();
BOOL func_0206e61c();
void func_0206e660();
BOOL func_020a6df8();
BOOL func_020a6dec();
BOOL func_020a6fa4();
BOOL func_020a70d4();
void func_020a6e0c();
void func_020a6e18();
s32 func_020a6d94();
BOOL func_0203e2f4();
u32 func_02095134(s32 a);
void func_0203a1d0(u32 a, u32 b);
BOOL func_020a706c(s32 x0, s32 x1, s32 y0, s32 y1);
BOOL func_02038f10();
void func_02116048(void *src, void *dst, u32 n);
void func_0209cf28(void *p);
s32 func_0209d3d0(void *a, void *b, s32 n);
void func_0209d064(void *a, void *b);
s32 func_020b50e8();
void func_020b7878(s32 x);
u64 func_01ffa6b4();
s32 func_0206f11c();
void func_0209d224(void *p, s32 v);
void func_0209cfb8(void *p);
void func_0209cf18(void *p);
s32 func_0209cef4();
BOOL func_02095154(s32 a, s32 b);

// plain-named functions of the unit
void func_0208a5a4();
void func_0208a5b4();
void func_0208a5c4();
void func_0208a5d4();
void func_0208a580();
void func_0208a58c();
void func_0208a598();
s32 func_0208a798();

// functions of the unit that other classes of the unit call (symbols.txt names)
void _ZN12Unk_0208a0ac13func_0208a0acEv(void *p);
void _ZN12Unk_0208a0ac13func_0208a108Ev(void *p);
void _ZN12Unk_0208a0ac13func_0208a218Ev(void *p);
void _ZN12Unk_0208b29413func_0208b430Ev(void *p);
void _ZN12Unk_0208b29413func_0208b438Ev(void *p);
void _ZN12Unk_0208b90813func_0208b908Ev(void *p);
void _ZN12Unk_0208b90813func_0208b924Ev(void *p);
void _ZN12Unk_0208b90813func_0208b9f0Ev(void *p);
void _ZN12Unk_0208b90813func_0208bcbcEv(void *p);
void _ZN12Unk_0208b90813func_0208bcdcEv(void *p);
void _ZN12Unk_0208b90813func_0208bee0Ev(void *p);
void _ZN12Unk_0208c47813func_0208c478Ev(void *p);
void _ZN12Unk_0208c47813func_0208c488Ev(void *p);
void _ZN12Unk_0208c47813func_0208c51cEv(void *p);
void _ZN12Unk_0208c47813func_0208c7fcEv(void *p);
void _ZN12Unk_020e0ecc13func_0208a328Ev(void *p);
void _ZN12Unk_020e0ecc13func_0208a3bcEv(void *p);
void _ZN12Unk_020e0ecc13func_0208a3ecEv(void *p);
BOOL _ZN12Unk_020e0ef413func_0208aa38Ev(void *p);
void _ZN12Unk_020e0ef413func_0208aa48Ev(void *p);
void _ZN12Unk_020e0ef413func_0208aa50Ev(void *p);
BOOL _ZN12Unk_020e0f1013func_0208bf00Ev(void *p);
BOOL _ZN12Unk_020e0f1013func_0208c094Ev(void *p);
BOOL _ZN12Unk_020e0f1013func_0208c0b4Ev(void *p);
void _ZN12Unk_020e0f1013func_0208c0c4Ev(void *p);
void _ZN12Unk_020e0f1013func_0208c0ccEv(void *p);
void _ZN12Unk_020e0f1013func_0208c1b4Ev(void *p);
void _ZN12Unk_020e0f1013func_0208c1c4Ev(void *p);
void _ZN12Unk_020e0f1013func_0208c1d4Ev(void *p);
void _ZN12Unk_020e0f1013func_0208c1dcEv(void *p);
BOOL _ZN12Unk_020e0f2c13func_0208b018Ev(void *p);
void _ZN12Unk_020e0f2c13func_0208b038Ev(void *p);
void _ZN12Unk_020e0f2c13func_0208b040Ev(void *p);
void _ZN12Unk_020e0f2c13func_0208b048Ev(void *p);
void _ZN12Unk_020e0f2c13func_0208b060Ev(void *p);
void _ZN12Unk_020e0f2c13func_0208b080Ev(void *p);
void _ZN12Unk_020e0f2c13func_0208b098Ev(void *p);
BOOL _ZN12Unk_020e0f4813func_0208b5e4Ev(void *p);
BOOL _ZN12Unk_020e0f4813func_0208b634Ev(void *p);
s32 _ZN12Unk_020e0f6413func_0208cbb4Ev(void *p);
BOOL _ZN12Unk_020e0f6413func_0208cd78Ev(void *p);
void _ZN12Unk_020e0f6413func_0208cd88Ev(void *p);
void _ZN12Unk_020e0f6413func_0208cd90Ev(void *p);
void _ZN12Unk_020e0f6413func_0208cdb8Ev(void *p);
void _ZN12Unk_020e0f6413func_0208cdc8Ev(void *p);
void _ZN12Unk_020e0f6413func_0208cdd8Ev(void *p);
void _ZN12Unk_020e0f6413func_0208cde0Ev(void *p);
}

extern u8 data_020e416c;
extern Unk_02050288_Font data_021c48fc;
extern Unk_02050288_Font data_021c4938;
extern u8 data_020d479c[];
extern u8 data_020d4794[];
extern u8 data_020d477c[];
extern u8 data_020d4784[];
extern u8 data_020d478c[];
extern u8 data_020d467c[];
extern u16 data_021f47d8[];
extern u8 data_021f4770;
extern u8 data_021f4774;
extern u8 data_021ef5f8;
extern u8 data_021ef5f4;

// Data of this unit
extern const char *const data_020cf5d8;
extern const char *const data_020cf5dc[2];
extern const s16 data_020cf5e4[6];
extern const u16 data_020cf5f0[8];
extern const u8 data_020cf600[18];
extern const s8 data_020cf614[18];
extern const u8 data_020cf628[18];

// ---------------------------------------------------------------------------------------------------------------------
class Unk_020e0edc : public Unk_020e2a78 {
public:
    Unk_020e0edc();
    virtual ~Unk_020e0edc();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();

    /* 0x12 */ u8 unk_12[3];
};

class Unk_020e0f10 : public Unk_020e0db4 {
public:
    Unk_020e0f10();
    virtual ~Unk_020e0f10();
    virtual void vfunc_08();
    virtual void vfunc_0c();

    u8 func_0208bf00();
    void func_0208bf78();
    void func_0208bfa0();
    void func_0208bfe4();
    void func_0208bffc();
    void func_0208c004();
    void func_0208c028();
    void func_0208c074();
    void func_0208c08c();
    BOOL func_0208c094();
    BOOL func_0208c0b4();
    void func_0208c0c4();
    void func_0208c0cc();
    void func_0208c0f4();
    void func_0208c114();
    void func_0208c134(s32 a, s32 b);
    BOOL func_0208c1a4();
    void func_0208c1b4();
    void func_0208c1c4();
    void func_0208c1d4();
    void func_0208c1dc();

    /* 0x0c */ Unk_02089270 unk_0c;
    /* 0x20 */ s32 unk_20;
    /* 0x24 */ s32 unk_24;
    /* 0x28 */ s32 unk_28;
    /* 0x2c */ s32 unk_2c;
    /* 0x30 */ s32 unk_30;
    /* 0x34 */ Unk_020e0edc unk_34;
    /* 0x4c */ Unk_020e0edc unk_4c;
    /* 0x64 */ Unk_020e0edc unk_64;
    /* 0x7c */ Unk_020e0edc unk_7c;
    /* 0x94 */ u8 unk_94;
    /* 0x95 */ u8 unk_95;
    /* 0x96 */ u8 unk_96;
    /* 0x97 */ u8 unk_97;
    /* 0x98 */ u8 unk_98;
    /* 0x99 */ u8 unk_99;
    /* 0x9c */ s32 unk_9c;
    /* 0xa0 */ s32 unk_a0;
    /* 0xa4 */ s32 unk_a4;
    /* 0xa8 */ s32 unk_a8;
    /* 0xac */ s32 unk_ac;
    /* 0xb0 */ s32 unk_b0;
    /* 0xb4 */ s32 unk_b4;
    /* 0xb8 */ s32 unk_b8;
    /* 0xbc */ s32 unk_bc;
    /* 0xc0 */ s32 unk_c0;
    /* 0xc4 */ s32 unk_c4;
    /* 0xc8 */ s32 unk_c8;
    /* 0xcc */ s32 unk_cc;
    /* 0xd0 */ s32 unk_d0;
};

// Methods of Unk_020e0f10's neighbour state (symbols.txt calls this class Unk_0208b908); same object layout
class Unk_0208b908 {
public:
    void func_0208b908();
    void func_0208b924();
    void func_0208b9f0();
    void func_0208bba0();
    void func_0208bbe8();
    void func_0208bc30();
    void func_0208bc74();
    void func_0208bcbc();
    void func_0208bcdc();
    void func_0208bd20();
    void func_0208bd90();
    void func_0208be00();
    void func_0208be70();
    void func_0208bee0();

    /* 0x00 */ u32 unk_00[9];
    /* 0x24 */ Unk_02050288 *unk_24;
    /* 0x28 */ Unk_02050288 *unk_28;
    /* 0x2c */ Unk_02050288 *unk_2c;
    /* 0x30 */ Unk_02050288 *unk_30;
    /* 0x34 */ u32 unk_34[6];
    /* 0x4c */ u32 unk_4c[6];
    /* 0x64 */ u32 unk_64[6];
    /* 0x7c */ u32 unk_7c[6];
    /* 0x94 */ u8 unk_94;
    /* 0x95 */ u8 unk_95;
    /* 0x96 */ u8 unk_96;
    /* 0x97 */ u8 unk_97;
    /* 0x98 */ u8 unk_98;
    /* 0x99 */ u8 unk_99;
    /* 0x9a */ u8 unk_9a[2];
    /* 0x9c */ s32 unk_9c;
    /* 0xa0 */ s32 unk_a0;
    /* 0xa4 */ s32 unk_a4;
    /* 0xa8 */ u8 unk_a8[8];
    /* 0xb0 */ u8 unk_b0[8];
    /* 0xb8 */ s32 unk_b8;
    /* 0xbc */ s32 unk_bc;
    /* 0xc0 */ s32 unk_c0;
    /* 0xc4 */ s32 unk_c4;
    /* 0xc8 */ s32 unk_c8;
    /* 0xcc */ u32 unk_cc;
    /* 0xd0 */ u32 unk_d0;
};

class Unk_020e0f48 : public Unk_020e0db4 {
public:
    Unk_020e0f48();
    virtual ~Unk_020e0f48();
    virtual void vfunc_08();
    virtual void vfunc_0c();

    BOOL func_0208b5e4();
    BOOL func_0208b634();
    BOOL func_0208b668();
    BOOL func_0208b688();
    BOOL func_0208b698();
    void func_0208b6a8(u32 v);
    void func_0208b6b0();
    void func_0208b6d0();
    void func_0208b6e0();
    void func_0208b700();

    /* 0x0c */ Unk_02089270 unk_0c[9];
    /* 0xc0 */ s32 unk_c0;
    /* 0xc4 */ s32 unk_c4;
    /* 0xc8 */ s32 unk_c8;
    /* 0xcc */ s32 unk_cc;
    /* 0xd0 */ s32 unk_d0;
    /* 0xd4 */ u8 unk_d4;
};

// Methods that symbols.txt files under Unk_0208b294 (same object layout as Unk_020e0f48)
class Unk_0208b294 {
public:
    u32 unk_00[3];
    Unk_02089270 unk_0c[9];
    s32 unk_c0;
    s32 unk_c4;
    s32 unk_c8;
    s32 unk_cc;
    s32 unk_d0;
    u8 unk_d4;

    void func_0208b294();
    void func_0208b2d8();
    void func_0208b324();
    void func_0208b380();
    void func_0208b388();
    void func_0208b3cc();
    void func_0208b418();
    void func_0208b430();
    void func_0208b438();
    void func_0208b464();
    void func_0208b4a4();
    BOOL func_0208b508();
};

class Unk_020e0f2c : public Unk_020e0db4 {
public:
    Unk_02089270 unk_0c;
    s32 unk_20;
    u8 unk_24;
    u8 unk_25;
    u8 unk_26;
    Unk_020e0f48 unk_28;

    Unk_020e0f2c();
    virtual ~Unk_020e0f2c();
    virtual void vfunc_08();
    virtual void vfunc_0c();

    void func_0208ac84();
    void func_0208aca8();
    void func_0208acd8();
    void func_0208ad00();
    void func_0208ad1c();
    void func_0208ad44();
    void func_0208ad74();
    void func_0208ad90();
    void func_0208adc8();
    void func_0208ae08();
    void func_0208ae48();
    void func_0208ae6c();
    void func_0208ae9c();
    void func_0208aeb4();
    void func_0208aebc();
    BOOL func_0208aefc(s32);
    BOOL func_0208afc0();
    BOOL func_0208b018();
    void func_0208b038();
    void func_0208b040();
    void func_0208b048();
    void func_0208b060();
    void func_0208b080();
    void func_0208b098();
};

class Unk_020e0f64 : public Unk_020e0db4 {
public:
    Unk_020e0f64();
    virtual ~Unk_020e0f64();
    virtual void vfunc_08();
    virtual void vfunc_0c();

    void func_0208c830();
    void func_0208c89c();
    void func_0208c910();
    void func_0208c978();
    void func_0208c9e0();
    void func_0208ca48();
    void func_0208cab0();
    void func_0208cb18();
    void func_0208cb80();
    u32 func_0208cbb4();
    void func_0208cc50();
    void func_0208cc78();
    void func_0208ccbc();
    void func_0208ccd4();
    void func_0208ccdc();
    void func_0208cd00();
    void func_0208cd4c();
    void func_0208cd70();
    BOOL func_0208cd78();
    void func_0208cd88();
    void func_0208cd90();
    void func_0208cdb8();
    void func_0208cdc8();
    void func_0208cdd8();
    void func_0208cde0();

    /* 0x0c */ Unk_02089270 unk_0c;
    /* 0x20 */ s32 unk_20;
    /* 0x24 */ s32 unk_24;
    /* 0x28 */ Unk_020e2a90 *unk_28;
    /* 0x2c */ Unk_020e2a90 *unk_2c;
    /* 0x30 */ Unk_020e2a90 *unk_30;
    /* 0x34 */ Unk_020e2a90 *unk_34;
    /* 0x38 */ Unk_020e2a90 *unk_38;
    /* 0x3c */ Unk_020e2a90 *unk_3c;
    /* 0x40 */ Unk_020e2a90 *unk_40;
    /* 0x44 */ u32 unk_44;
    /* 0x48 */ u8 unk_48;
    /* 0x49 */ u8 unk_49;
    /* 0x4a */ u8 unk_4a;
    /* 0x4b */ u8 unk_4b;
    /* 0x4c */ u8 unk_4c;
    /* 0x4d */ u8 unk_4d;
    /* 0x4e */ u8 unk_4e;
    /* 0x4f */ u8 unk_4f;
    /* 0x50 */ s32 unk_50;
    /* 0x54 */ s32 unk_54;
    /* 0x58 */ s32 unk_58;
    /* 0x5c */ s32 unk_5c;
    /* 0x60 */ u16 unk_60;
    /* 0x62 */ u16 unk_62;
    /* 0x64 */ s32 unk_64;
    /* 0x68 */ Unk_020e0edc unk_68;
    /* 0x80 */ Unk_020e0edc unk_80;
    /* 0x98 */ Unk_020e0edc unk_98;
    /* 0xb0 */ Unk_020e0edc unk_b0;
};

class Unk_0208c478_Obj {
public:
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
    virtual u32 vfunc_0c();
    u8 unk_04[0x14];
};

// Methods that symbols.txt files under Unk_0208c478 (same object layout as Unk_020e0f64)
class Unk_0208c478 {
public:
    void func_0208c478();
    void func_0208c488();
    void func_0208c51c();
    void func_0208c5d8();
    void func_0208c60c();
    void func_0208c664();
    void func_0208c6cc();
    void func_0208c714();
    void func_0208c754();
    void func_0208c7a4();
    void func_0208c7fc();

    /* 0x00 */ u8 unk_00[0x28];
    /* 0x28 */ Unk_02050288 *unk_28;
    /* 0x2c */ Unk_02050288 *unk_2c;
    /* 0x30 */ Unk_02050288 *unk_30;
    /* 0x34 */ Unk_02050288 *unk_34;
    /* 0x38 */ Unk_02050288 *unk_38;
    /* 0x3c */ Unk_02050288 *unk_3c;
    /* 0x40 */ Unk_02050288 *unk_40;
    /* 0x44 */ s32 unk_44;
    /* 0x48 */ u8 unk_48;
    /* 0x49 */ u8 unk_49;
    /* 0x4a */ u8 unk_4a;
    /* 0x4b */ u8 unk_4b;
    /* 0x4c */ u8 unk_4c;
    /* 0x4d */ u8 unk_4d;
    /* 0x50 */ s32 unk_50;
    /* 0x54 */ s32 unk_54;
    /* 0x58 */ s32 unk_58;
    /* 0x5c */ s32 unk_5c;
    /* 0x60 */ u8 unk_60;
    /* 0x61 */ u8 unk_61;
    /* 0x62 */ u8 unk_62;
    /* 0x63 */ u8 unk_63;
    /* 0x64 */ s32 unk_64;
    /* 0x68 */ Unk_0208c478_Obj unk_68;
    /* 0x80 */ Unk_0208c478_Obj unk_80;
    /* 0x98 */ Unk_0208c478_Obj unk_98;
    /* 0xb0 */ Unk_0208c478_Obj unk_b0;
};

class Unk_020e0ef4 : public Unk_020e0db4 {
public:
    Unk_020e0ef4();
    virtual ~Unk_020e0ef4();
    virtual void vfunc_08();
    virtual void vfunc_0c();

    typedef void (Unk_020e0ef4::*Fn)();

    void func_0208a6c0();
    void func_0208a6d0();
    void func_0208a764();
    void func_0208a7c0(BOOL v);
    void func_0208a7f4();
    BOOL func_0208a814();
    void func_0208a878();
    void func_0208a89c();
    void func_0208a8b4();
    void func_0208a920();
    void func_0208a948();
    void func_0208a978();
    void func_0208a9a0();
    void func_0208a9a8();
    void func_0208a9cc();
    void func_0208aa08();
    void func_0208aa20();
    void func_0208aa28();
    void func_0208aa30();
    BOOL func_0208aa38();
    void func_0208aa48();
    void func_0208aa50();
    void func_0208aa58();
    void func_0208aa70();
    void func_0208aa88();
    void func_0208aaa8();

    /* 0x0c */ Unk_02089270 unk_0c;
    /* 0x20 */ s32 unk_20;
    /* 0x24 */ s32 unk_24;
    /* 0x28 */ s32 unk_28;
    /* 0x2c */ s32 unk_2c;
    /* 0x30 */ s32 unk_30;
    /* 0x34 */ s32 unk_34;
    /* 0x38 */ Unk_02050288 *unk_38;
    /* 0x3c */ Unk_020e3efc unk_3c;
    /* 0x68 */ s32 unk_68;
    /* 0x6c */ u8 unk_6c;
    /* 0x6d */ u8 unk_6d;
    /* 0x6e */ u8 unk_6e;
};

struct Unk_0208a328_Pa {
    u8 unk_00;
    u8 unk_01;
    u8 pad[0x12];
    u8 unk_14;
    u8 unk_15;
};

class Unk_020e0ecc {
public:
    Unk_020e0ecc();
    virtual ~Unk_020e0ecc();

    typedef void (Unk_020e0ecc::*Fn)();

    void func_0208a328();
    void func_0208a344();
    void func_0208a3bc();
    void func_0208a3c4();
    void func_0208a3ec();
    void func_0208a3f4();
    void func_0208a424();
    void func_0208a4f0();
    void func_0208a524();

    /* 0x004 */ s32 unk_04;
    /* 0x008 */ Unk_020e0f64 unk_08;
    /* 0x0d0 */ Unk_020e0f10 unk_d0;
    /* 0x1a4 */ Unk_020e0f2c unk_1a4;
    /* 0x2a4 */ Unk_020e0ef4 unk_2a4;
    /* 0x314 */ u8 unk_314;
    /* 0x315 */ u8 unk_315;
    /* 0x316 */ u8 unk_316;
};

// State handlers that symbols.txt files under Unk_0208a0ac (same object layout as Unk_020e0ecc)
class Unk_0208a0ac : public Unk_020e0ecc {
public:
    void func_0208a0ac();
    void func_0208a108();
    void func_0208a150();
    void func_0208a1c0();
    void func_0208a218();
    void func_0208a230();
    void func_0208a24c();
    void func_0208a254();
    void func_0208a2a4();
    void func_0208a2ac();
};

// Vtable 0x020e0f80, created by the factory func_0208a094
class Unk_020e0f80 : public Unk_020d8c7c {
public:
    Unk_020e0f80();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_24();
    virtual ~Unk_020e0f80();
};

extern "C" Unk_020e0f80 *func_0208a094();

class Unk_0208d0bc {
public:
    void func_0208d0bc();
    void func_0208d0d4();

    u32 pad_00[3];
    /* 0x0c */ s32 unk_0c;
    u32 pad_10[0x5c / 4];
    /* 0x6c */ Unk_020e2a90 *unk_6c;
};

extern Unk_020e0ecc data_021ce770;

static inline BOOL Unk_0208a150_IsOne(u8 v) { return v == 1 ? TRUE : FALSE; }
static inline BOOL Unk_0208b9f0_Or(BOOL a, BOOL v) { if ((a | v) != 0) return TRUE; return FALSE; }

namespace Unk_0208a814_NS { extern "C" s32 func_0208a798(...); }

typedef void (Unk_020e0f2c::*Unk_020e0f2c_Fn)();

typedef void (Unk_0208b294::*Unk_0208b728_Fn)();

typedef void (Unk_020e0f10::*Unk_020e0f10_Fn)();

typedef void (Unk_020e0f64::*Unk_020e0f64_Fn)();

void Unk_0208d0bc::func_0208d0d4() {
    if (unk_6c == NULL) {
        BOOL c = unk_0c == 4 ? TRUE : FALSE;
        s32 size = c ? 0x1c8 : (unk_0c << 6) + 0xc0;
        u8 t = c ? 0xe : 0xf;
        unk_6c = func_020a8054(size, 0x14, 2);
        Unk_020e2a90 *o = unk_6c;
        if (o != NULL) {
            o->unk_2c = 4;
            Unk_020e2a90 *p = unk_6c;
            p->unk_10 = (u32)((Unk_020e2a78 *)((u8 *)this + 0x38))->vfunc_0c();
            unk_6c->unk_50 = 2;
            unk_6c->unk_55 = 1;
            unk_6c->unk_39 = t;
            unk_6c->unk_38 = 0xd;
            unk_6c->func_02050c90();
        }
    }
}

void Unk_0208d0bc::func_0208d0bc() {
    if (unk_6c != NULL) {
        func_020a7fd8(unk_6c);
        unk_6c = NULL;
    }
}

Unk_020e0edc::Unk_020e0edc() {
    func_020a7c3c();
}

Unk_020e0edc::~Unk_020e0edc() {}

u32 Unk_020e0edc::vfunc_08() {
    return 3;
}

u8 *Unk_020e0edc::vfunc_0c() {
    return unk_12;
}

Unk_020e0f64::Unk_020e0f64()
    : unk_20(0), unk_24(0), unk_28(NULL), unk_2c(NULL), unk_30(NULL), unk_34(NULL), unk_38(NULL), unk_3c(NULL),
      unk_40(NULL), unk_44(0), unk_48(0), unk_49(0), unk_4a(0), unk_4b(0), unk_4c(0), unk_4d(0), unk_4e(0),
      unk_4f(0), unk_50(0), unk_54(0), unk_58(0), unk_5c(-1), unk_64(0) {
    unk_60 = 0;
    unk_62 = 0;
}

Unk_020e0f64::~Unk_020e0f64() {
    unk_0c.func_020891bc();
    func_0208cdd8();
}

void Unk_020e0f64::vfunc_08() {
    if (unk_20 != 0) {
        void *a = unk_0c.func_02089248();
        if (a != 0) {
            s32 x = unk_0c.func_02089228(-1);
            s32 y = unk_0c.func_02089210(-1);
            s32 bx = func_02089f68();
            s32 t = (unk_50 + 0x800) >> 12;
            s32 g = func_02089f64();
            s32 by = g + t;
            s32 f = unk_64 == 0 ? 0xf : 9;
            func_02087e70(0, a, bx + x, by + y, f, -1, 0x1000, 0x1000, 0, -1, 0, 0);
        }
    }
}

void Unk_020e0f64::vfunc_0c() {
    static Unk_020e0f64_Fn tbl[4] = {(Unk_020e0f64_Fn)&Unk_020e0f64::func_0208cd4c, (Unk_020e0f64_Fn)&Unk_020e0f64::func_0208ccdc,
                                     (Unk_020e0f64_Fn)&Unk_020e0f64::func_0208ccbc, (Unk_020e0f64_Fn)&Unk_020e0f64::func_0208cc50};
    (this->*tbl[unk_20])();
    _ZN12Unk_0208c47813func_0208c51cEv(this);
    _ZN12Unk_0208c47813func_0208c7fcEv(this);
    if (unk_20 != 0) {
        _ZN12Unk_0208c47813func_0208c488Ev(this);
    }
}

void Unk_020e0f64::func_0208cde0() {
    unk_4e = 0;
    func_0208cd70();
}

void Unk_020e0f64::func_0208cdd8() {
    func_0208c830();
}

void Unk_020e0f64::func_0208cdc8() {
    vfunc_0c();
}

void Unk_020e0f64::func_0208cdb8() {
    vfunc_08();
}

void Unk_020e0f64::func_0208cd90() {
    unk_4e = 1;
    BOOL v = TRUE;
    if (data_020e416c != 1) {
        v = FALSE;
    }
    unk_4f = v ? 1 : 0;
}

void Unk_020e0f64::func_0208cd88() {
    unk_4e = 0;
}

BOOL Unk_020e0f64::func_0208cd78() {
    if (unk_20 == 0) {
        return TRUE;
    }
    return FALSE;
}

void Unk_020e0f64::func_0208cd70() {
    unk_20 = 0;
}

void Unk_020e0f64::func_0208cd4c() {
    if (func_0208cbb4() != 0) {
        unk_24 = unk_24 - 1;
        if (unk_24 <= 0) {
            func_0208cd00();
        }
    }
}

void Unk_020e0f64::func_0208cd00() {
    unk_20 = 1;
    _ZN12Unk_0208c47813func_0208c478Ev(this);
    s32 i = unk_4f != 0 ? 0x29 : 4;
    unk_0c.func_02089268((Unk_02089270_Tbl *)((u8 *)data_020d467c + (i << 3)));
    unk_0c.func_02089264(1);
    unk_0c.func_020891bc();
    func_0208cb80();
}

void Unk_020e0f64::func_0208ccdc() {
    unk_0c.func_02089140();
    if (unk_0c.func_020891d8()) {
        func_0208ccd4();
    }
}

void Unk_020e0f64::func_0208ccd4() {
    unk_20 = 2;
}

void Unk_020e0f64::func_0208ccbc() {
    if (func_0208cbb4() == 0) {
        func_0208cc78();
    }
}

void Unk_020e0f64::func_0208cc78() {
    unk_20 = 3;
    s32 i = unk_4f != 0 ? 0x2a : 5;
    unk_0c.func_02089268((Unk_02089270_Tbl *)((u8 *)data_020d467c + (i << 3)));
    unk_0c.func_02089264(1);
    unk_0c.func_020891bc();
}

void Unk_020e0f64::func_0208cc50() {
    unk_0c.func_02089140();
    if (unk_0c.func_020891d8()) {
        func_0208c830();
        func_0208cd70();
    }
}

u32 Unk_020e0f64::func_0208cbb4() {
    u32 r = unk_4e;
    if (r != 0) {
        BOOL t = func_0203e2f4();
        BOOL a = func_02095154(2, 4);
        BOOL b = func_0206f11c();
        BOOL f5 = FALSE;
        if (t != 0 && b == 0) {
            f5 = TRUE;
        }
        BOOL f4 = FALSE;
        if (b == 0 && a == 0) {
            f4 = TRUE;
        }
        BOOL f7 = FALSE;
        if (t != 0 && b != 0) {
            BOOL x = func_0206edb0();
            s32 y = func_0206edbc();
            if (x != 0) {
                if (y < 0x1000) {
                    f7 = TRUE;
                }
            } else {
                f7 = TRUE;
            }
        }
        if (f5 || f4 || f7) {
            r = 0;
            if (f5 || f4) {
                unk_24 = 0x1e;
            } else {
                unk_24 = 1;
            }
        }
    } else {
        unk_24 = 10;
    }
    return r;
}

void Unk_020e0f64::func_0208cb80() {
    func_0208cb18();
    func_0208cab0();
    func_0208ca48();
    func_0208c9e0();
    func_0208c978();
    func_0208c910();
    func_0208c89c();
}

void Unk_020e0f64::func_0208cb18() {
    if (unk_28 == NULL) {
        unk_28 = func_020a8054(unk_4f != 0 ? 0x94 : 0x80, 3, 2);
        Unk_020e2a90 *o = unk_28;
        if (o != NULL) {
            o->unk_2c = 4;
            unk_28->unk_50 = 2;
            unk_28->unk_55 = 1;
            unk_28->unk_39 = 0;
            unk_28->unk_38 = 0xc;
            unk_28->unk_28 = &data_021c4938;
            unk_28->func_02050c90();
            unk_48 = 1;
        }
    }
}

void Unk_020e0f64::func_0208cab0() {
    if (unk_2c == NULL) {
        unk_2c = func_020a8054(unk_4f != 0 ? 0x97 : 0x83, 3, 2);
        Unk_020e2a90 *o = unk_2c;
        if (o != NULL) {
            o->unk_2c = 4;
            unk_2c->unk_50 = 2;
            unk_2c->unk_55 = 1;
            unk_2c->unk_39 = 0;
            unk_2c->unk_38 = 0xc;
            unk_2c->unk_28 = &data_021c4938;
            unk_2c->func_02050c90();
            unk_49 = 1;
        }
    }
}

void Unk_020e0f64::func_0208ca48() {
    if (unk_30 == NULL) {
        unk_30 = func_020a8054(unk_4f != 0 ? 0x9a : 0x86, 2, 2);
        Unk_020e2a90 *o = unk_30;
        if (o != NULL) {
            o->unk_2c = 4;
            unk_30->unk_50 = 2;
            unk_30->unk_55 = 1;
            unk_30->unk_39 = 0;
            unk_30->unk_38 = 0xa;
            unk_30->unk_28 = &data_021c4938;
            unk_30->func_02050c90();
            unk_4a = 1;
        }
    }
}

void Unk_020e0f64::func_0208c9e0() {
    if (unk_34 == NULL) {
        unk_34 = func_020a8054(unk_4f != 0 ? 0xd4 : 0x88, 2, 1);
        Unk_020e2a90 *o = unk_34;
        if (o != NULL) {
            o->unk_2c = 4;
            unk_34->unk_50 = 2;
            unk_34->unk_55 = 1;
            unk_34->unk_39 = 0;
            unk_34->unk_38 = 9;
            unk_34->unk_28 = &data_021c48fc;
            unk_34->func_02050c90();
            unk_4b = 1;
        }
    }
}

void Unk_020e0f64::func_0208c978() {
    if (unk_38 == NULL) {
        unk_38 = func_020a8054(unk_4f != 0 ? 0xf4 : 0xa8, 2, 1);
        Unk_020e2a90 *o = unk_38;
        if (o != NULL) {
            o->unk_2c = 4;
            unk_38->unk_50 = 2;
            unk_38->unk_55 = 1;
            unk_38->unk_39 = 0;
            unk_38->unk_38 = 9;
            unk_38->unk_28 = &data_021c48fc;
            unk_38->func_02050c90();
            unk_4c = 1;
        }
    }
}

void Unk_020e0f64::func_0208c910() {
    if (unk_3c == NULL) {
        unk_3c = func_020a8054(unk_4f != 0 ? 0xf6 : 0xaa, 2, 1);
        Unk_020e2a90 *o = unk_3c;
        if (o != NULL) {
            o->unk_2c = 4;
            unk_3c->unk_50 = 2;
            unk_3c->unk_55 = 1;
            unk_3c->unk_39 = 0;
            unk_3c->unk_38 = 9;
            unk_3c->unk_28 = &data_021c48fc;
            unk_3c->func_02050c90();
            unk_4d = 1;
        }
    }
}

void Unk_020e0f64::func_0208c89c() {
    if (unk_40 == NULL) {
        unk_40 = func_020a8054(unk_4f != 0 ? 0xd8 : 0x8c, 1, 2);
        Unk_020e2a90 *o = unk_40;
        if (o != NULL) {
            o->unk_2c = 4;
            unk_40->unk_10 = (u32)data_020cf5d8;
            unk_40->unk_50 = 2;
            unk_40->unk_55 = 1;
            unk_40->unk_28 = &data_021c4938;
            unk_40->func_02050c44();
            unk_40->unk_39 = 0;
            unk_40->unk_38 = 9;
            unk_40->func_02050c68(0);
        }
    }
}

void Unk_020e0f64::func_0208c830() {
    if (unk_28 != NULL) {
        func_020a7fd8(unk_28);
        unk_28 = NULL;
    }
    if (unk_2c != NULL) {
        func_020a7fd8(unk_2c);
        unk_2c = NULL;
    }
    if (unk_30 != NULL) {
        func_020a7fd8(unk_30);
        unk_30 = NULL;
    }
    if (unk_34 != NULL) {
        func_020a7fd8(unk_34);
        unk_34 = NULL;
    }
    if (unk_38 != NULL) {
        func_020a7fd8(unk_38);
        unk_38 = NULL;
    }
    if (unk_3c != NULL) {
        func_020a7fd8(unk_3c);
        unk_3c = NULL;
    }
    if (unk_40 != NULL) {
        func_020a7fd8(unk_40);
        unk_40 = NULL;
    }
}

void Unk_0208c478::func_0208c7fc() {
    func_0208c7a4();
    func_0208c754();
    func_0208c714();
    func_0208c6cc();
    func_0208c664();
    func_0208c60c();
    func_0208c5d8();
}

void Unk_0208c478::func_0208c7a4() {
    if (unk_28 != 0 && unk_48 != 0) {
        unk_48 = 0;
        func_020b3270(&unk_68, unk_61, 2, 0, 0, 1);
        Unk_02050288 *t = unk_28;
        t->unk_10 = unk_68.vfunc_0c();
        unk_28->func_02050c20();
        unk_28->func_02050c90();
    }
}

void Unk_0208c478::func_0208c754() {
    if (unk_2c != 0 && unk_49 != 0) {
        unk_49 = 0;
        func_020b3270(&unk_80, unk_60, 2, 0, 0, 1);
        Unk_02050288 *t = unk_2c;
        t->unk_10 = unk_80.vfunc_0c();
        unk_2c->func_02050c90();
    }
}

void Unk_0208c478::func_0208c714() {
    if (unk_30 != 0 && unk_4a != 0) {
        unk_4a = 0;
        s32 i = *(volatile s32 *)&unk_64;
        const u16 *e = &data_020cf5f0[i];
        unk_30->unk_10 = (u32)e;
        unk_30->func_02050c44();
        unk_30->func_02050c90();
    }
}

void Unk_0208c478::func_0208c6cc() {
    if (unk_34 != 0 && unk_4b != 0) {
        unk_4b = 0;
        s32 i = 0;
        if (unk_63 >= 12) i = 1;
        unk_34->unk_10 = (u32)data_020cf5dc[i];
        unk_34->func_02050c44();
        unk_34->func_02050c90();
    }
}

void Unk_0208c478::func_0208c664() {
    if (unk_38 != 0 && unk_4c != 0) {
        unk_4c = 0;
        u8 c = unk_63;
        if (c >= 12) c = (u8)(c - 12);
        if (c == 0) c = 12;
        func_020b3270(&unk_98, c, 2, 0, 0, 1);
        Unk_02050288 *t = unk_38;
        t->unk_10 = unk_98.vfunc_0c();
        unk_38->func_02050c20();
        unk_38->func_02050c90();
    }
}

void Unk_0208c478::func_0208c60c() {
    if (unk_3c != 0 && unk_4d != 0) {
        unk_4d = 0;
        func_020b3270(&unk_b0, unk_62, 2, 6, 0, 1);
        Unk_02050288 *t = unk_3c;
        t->unk_10 = unk_b0.vfunc_0c();
        unk_3c->func_02050c44();
        unk_3c->func_02050c90();
    }
}

void Unk_0208c478::func_0208c5d8() {
    if (unk_40 != 0) {
        unk_44 = unk_44 - 1;
        s32 t = unk_44;
        if (t <= 0) {
            unk_44 = 0x14;
            unk_40->func_02050c90();
        } else if (t == 8) {
            unk_40->func_02050c68(0);
        }
    }
}

void Unk_0208c478::func_0208c51c() {
    u16 v[2];
    func_0209cfb8(v);
    func_0209cf18(&v[1]);
    s32 t = func_0209cef4();
    if (v[0] != *(u16 *)&unk_60) {
        if (((u8 *)v)[1] != unk_61) unk_48 = 1;
        if (((u8 *)v)[0] != unk_60) unk_49 = 1;
        *(u16 *)&unk_60 = v[0];
    }
    if (v[1] != *(u16 *)&unk_62) {
        if (((u8 *)v)[3] != unk_63) {
            unk_4c = 1;
            unk_4b = 1;
        }
        if (((u8 *)v)[2] != unk_62) unk_4d = 1;
        *(u16 *)&unk_62 = v[1];
    }
    if (t != unk_64) {
        unk_4a = 1;
        unk_64 = t;
    }
}

void Unk_0208c478::func_0208c488() {
    s32 a = func_02038f10();
    s32 b = _ZN12Unk_020e0f6413func_0208cbb4Ev(this);
    s32 t;
    if (a != 0 && b != 0) t = -0x14000; else t = 0;
    unk_58 = unk_58 + 0xa00;
    s32 v = unk_58;
    if (v < 0x2300) v = 0x2300; else if (v > 0x5000) v = 0x5000;
    unk_58 = v;
    if (t != unk_54) {
        s32 c = unk_5c;
        if (c < 0 || b == 0 || (unk_5c = c + 1, unk_5c > 10)) {
            unk_54 = t;
            unk_5c = 0;
        }
    } else {
        unk_5c = 0;
    }
    func_020e7870(&unk_50, unk_54, 0x600, unk_58, 0x2300);
}

void Unk_0208c478::func_0208c478() {
    unk_50 = 0;
    unk_54 = 0;
    unk_5c = -1;
    unk_58 = 0;
}

Unk_020e0f10::Unk_020e0f10() : unk_20(0), unk_24(0), unk_28(0), unk_2c(0), unk_30(0) {
    unk_94 = 0;
    unk_95 = 0;
    unk_96 = 0;
    unk_97 = 0;
    unk_98 = 0;
    unk_99 = 0;
    unk_9c = 0;
    unk_a0 = 0;
    unk_a4 = 0;
    unk_a8 = 0;
    unk_ac = 0;
    unk_b0 = 0;
    unk_b4 = 0;
    unk_b8 = 0;
    unk_bc = 0;
    unk_c0 = 0;
    unk_c4 = 0;
    unk_c8 = -1;
    unk_cc = 0;
    unk_d0 = 0;
}

Unk_020e0f10::~Unk_020e0f10() {
    unk_0c.func_020891bc();
    func_0208c1d4();
}

void Unk_020e0f10::vfunc_08() {
    if (unk_20 != 0) {
        void *p = unk_0c.func_02089248();
        if (p != 0) {
            s32 a = unk_0c.func_02089228(-1);
            s32 b = unk_0c.func_02089210(-1);
            s32 c = func_02089f68();
            s32 d = (unk_bc + 0x800) >> 12;
            s32 e = func_02089f64();
            e += d;
            func_02087e70(0, p, c + a, e + b, -1, -1, 0x1000, 0x1000, 0, -1, 0, 0);
        }
    }
}

void Unk_020e0f10::vfunc_0c() {
    _ZN12Unk_0208b90813func_0208b9f0Ev(this);
    static Unk_020e0f10_Fn tbl[4] = {(Unk_020e0f10_Fn)&Unk_020e0f10::func_0208c074, (Unk_020e0f10_Fn)&Unk_020e0f10::func_0208c004,
                                     (Unk_020e0f10_Fn)&Unk_020e0f10::func_0208bfe4, (Unk_020e0f10_Fn)&Unk_020e0f10::func_0208bf78};
    (this->*tbl[unk_20])();
    _ZN12Unk_0208b90813func_0208bcbcEv(this);
    if (unk_20 != 0) _ZN12Unk_0208b90813func_0208b924Ev(this);
}

void Unk_020e0f10::func_0208c1dc() {
    unk_98 = 0;
    func_0208c08c();
}

void Unk_020e0f10::func_0208c1d4() {
    _ZN12Unk_0208b90813func_0208bcdcEv(this);
}

void Unk_020e0f10::func_0208c1c4() {
    vfunc_0c();
}

void Unk_020e0f10::func_0208c1b4() {
    vfunc_08();
}

BOOL Unk_020e0f10::func_0208c1a4() {
    if (unk_a4 == 0) return TRUE;
    return FALSE;
}

void Unk_020e0f10::func_0208c134(s32 a, s32 b) {
    unk_a4 = a;
    unk_b8 = 0;
    if (a != 0) {
        func_0209cf28(&unk_a8);
        func_0209d224(&unk_a8, data_020cf5e4[a]);
        unk_9c = 0;
        unk_a0 = 0;
        unk_94 = 1;
        unk_95 = 1;
        unk_96 = 1;
        unk_97 = 1;
    }
    if (b == 0) {
        func_020b7878(a == 0 ? 2 : 1);
    }
}

void Unk_020e0f10::func_0208c114() {
    if (unk_a4 != 0) {
        unk_9c = unk_9c + 1;
        unk_96 = 1;
    }
}

void Unk_020e0f10::func_0208c0f4() {
    if (unk_a4 != 0) {
        unk_a0 = unk_a0 + 1;
        unk_97 = 1;
    }
}

void Unk_020e0f10::func_0208c0cc() {
    unk_98 = 1;
    BOOL t = TRUE;
    if (data_020e416c != 1) t = FALSE;
    unk_99 = (t != 0) ? 1 : 0;
}

void Unk_020e0f10::func_0208c0c4() {
    unk_98 = 0;
}

BOOL Unk_020e0f10::func_0208c0b4() {
    if (unk_20 == 0) return TRUE;
    return FALSE;
}

BOOL Unk_020e0f10::func_0208c094() {
    if (func_0208c1a4() != 0 && unk_b8 <= 0) return TRUE;
    return FALSE;
}

void Unk_020e0f10::func_0208c08c() {
    unk_20 = 0;
}

void Unk_020e0f10::func_0208c074() {
    if (func_0208bf00() != 0) func_0208c028();
}

void Unk_020e0f10::func_0208c028() {
    unk_20 = 1;
    _ZN12Unk_0208b90813func_0208b908Ev(this);
    s32 i;
    if (unk_99 != 0) i = 0x2b; else i = 0x26;
    unk_0c.func_02089268((Unk_02089270_Tbl *)(data_020d467c + i * 8));
    unk_0c.func_02089264(1);
    unk_0c.func_020891bc();
    _ZN12Unk_0208b90813func_0208bee0Ev(this);
}

void Unk_020e0f10::func_0208c004() {
    unk_0c.func_02089140();
    if (unk_0c.func_020891d8() != 0) func_0208bffc();
}

void Unk_020e0f10::func_0208bffc() {
    unk_20 = 2;
}

void Unk_020e0f10::func_0208bfe4() {
    if (func_0208bf00() == 0) func_0208bfa0();
}

void Unk_020e0f10::func_0208bfa0() {
    unk_20 = 3;
    s32 i;
    if (unk_99 != 0) i = 0x2c; else i = 0x27;
    unk_0c.func_02089268((Unk_02089270_Tbl *)(data_020d467c + i * 8));
    unk_0c.func_02089264(1);
    unk_0c.func_020891bc();
}

void Unk_020e0f10::func_0208bf78() {
    unk_0c.func_02089140();
    if (unk_0c.func_020891d8() != 0) {
        _ZN12Unk_0208b90813func_0208bcdcEv(this);
        func_0208c08c();
    }
}

u8 Unk_020e0f10::func_0208bf00() {
    u8 r = unk_98;
    if (r != 0) {
        s32 a = func_0203e2f4();
        s32 b = func_0206f11c();
        BOOL c = FALSE;
        if (a != 0 && b == 0) c = TRUE;
        BOOL d = FALSE;
        if (a != 0 && b != 0) {
            s32 p = func_0206edb0();
            s32 q = func_0206edbc();
            if (p != 0) {
                if (q < 0x1000) d = TRUE;
            } else {
                d = TRUE;
            }
        }
        if (c != 0 || d != 0) {
            r = 0;
            if (c != 0) unk_b8 = r;
        }
    } else {
        unk_b8 = 0;
    }
    return r;
}

void Unk_0208b908::func_0208bee0() {
    func_0208be70();
    func_0208be00();
    func_0208bd90();
    func_0208bd20();
}

void Unk_0208b908::func_0208be70() {
    unk_24 = func_020a8054(unk_99 != 0 ? 0x114 : 0x80, 3, 2);
    if (unk_24 != NULL) {
        unk_24->unk_2c = 4;
        unk_24->unk_50 = 2;
        unk_24->unk_55 = 1;
        unk_24->unk_39 = 0;
        unk_24->unk_38 = 0xc;
        unk_24->unk_28 = &data_021c4938;
        Unk_02050288 *t = unk_24;
        t->unk_10 = (u32)((StrBuf *)unk_34)->data();
        unk_94 = 1;
    }
}

void Unk_0208b908::func_0208be00() {
    unk_28 = func_020a8054(unk_99 != 0 ? 0x117 : 0x83, 3, 2);
    if (unk_28 != NULL) {
        unk_28->unk_2c = 4;
        unk_28->unk_50 = 2;
        unk_28->unk_55 = 1;
        unk_28->unk_39 = 0;
        unk_28->unk_38 = 0xc;
        unk_28->unk_28 = &data_021c4938;
        Unk_02050288 *t = unk_28;
        t->unk_10 = (u32)((StrBuf *)unk_4c)->data();
        unk_95 = 1;
    }
}

void Unk_0208b908::func_0208bd90() {
    unk_2c = func_020a8054(unk_99 != 0 ? 0x174 : 0xa8, 2, 1);
    if (unk_2c != NULL) {
        unk_2c->unk_2c = 4;
        unk_2c->unk_50 = 2;
        unk_2c->unk_55 = 1;
        unk_2c->unk_39 = 0;
        unk_2c->unk_38 = 5;
        unk_2c->unk_28 = &data_021c48fc;
        Unk_02050288 *t = unk_2c;
        t->unk_10 = (u32)((StrBuf *)unk_64)->data();
        unk_96 = 1;
    }
}

void Unk_0208b908::func_0208bd20() {
    unk_30 = func_020a8054(unk_99 != 0 ? 0x176 : 0xaa, 2, 1);
    if (unk_30 != NULL) {
        unk_30->unk_2c = 4;
        unk_30->unk_50 = 2;
        unk_30->unk_55 = 1;
        unk_30->unk_39 = 0;
        unk_30->unk_38 = 5;
        unk_30->unk_28 = &data_021c48fc;
        Unk_02050288 *t = unk_30;
        t->unk_10 = (u32)((StrBuf *)unk_7c)->data();
        unk_97 = 1;
    }
}

void Unk_0208b908::func_0208bcdc() {
    if (unk_24 != NULL) {
        func_020a7fd8(unk_24);
        unk_24 = NULL;
    }
    if (unk_28 != NULL) {
        func_020a7fd8(unk_28);
        unk_28 = NULL;
    }
    if (unk_2c != NULL) {
        func_020a7fd8(unk_2c);
        unk_2c = NULL;
    }
    if (unk_30 != NULL) {
        func_020a7fd8(unk_30);
        unk_30 = NULL;
    }
}

void Unk_0208b908::func_0208bcbc() {
    func_0208bc74();
    func_0208bc30();
    func_0208bbe8();
    func_0208bba0();
}

void Unk_0208b908::func_0208bc74() {
    if (unk_94 != 0 && unk_24 != NULL) {
        func_020b3270(&unk_34, unk_b0[1], 2, 6, 0, 1);
        unk_24->func_02050c20();
        unk_24->func_02050c90();
        unk_94 = 0;
    }
}

void Unk_0208b908::func_0208bc30() {
    if (unk_95 != 0 && unk_28 != NULL) {
        func_020b3270(&unk_4c, unk_b0[0], 2, 6, 0, 1);
        unk_28->func_02050c90();
        unk_95 = 0;
    }
}

void Unk_0208b908::func_0208bbe8() {
    if (unk_96 != 0 && unk_2c != NULL) {
        func_020b3270(&unk_64, unk_9c, 2, 6, 0, 1);
        unk_2c->func_02050c44();
        unk_2c->func_02050c90();
        unk_96 = 0;
    }
}

void Unk_0208b908::func_0208bba0() {
    if (unk_97 != 0 && unk_30 != NULL) {
        func_020b3270(&unk_7c, unk_a0, 2, 6, 0, 1);
        unk_30->func_02050c44();
        unk_30->func_02050c90();
        unk_97 = 0;
    }
}

void Unk_0208b908::func_0208b9f0() {
    u8 a[8];
    u8 b[8];
    u8 c[8];
    BOOL x;
    BOOL y;
    BOOL t;
    s32 r;
    if (unk_b8 > 0) {
        unk_b8 = unk_b8 - 1;
    }
    if (unk_a4 != 0) {
        func_02116048(unk_a8, a, 8);
        ((u32 *)b)[0] = 0;
        ((u32 *)b)[1] = 0;
        func_0209cf28(b);
        r = func_0209d3d0(b, a, 0x3f);
        if (r == 0) {
            goto yes;
        }
        if (r == 1) {
        yes:
            x = TRUE;
        } else {
            x = FALSE;
        }
        y = x;
        if (x) {
            ((u32 *)a)[0] = 0;
            ((u32 *)a)[1] = 0;
        } else {
            u32 k;
            func_02116048(b, c, 8);
            func_0209d064(a, c);
            k = x;
            t = func_0209d3d0(unk_b0, a, 1) ? TRUE : FALSE;
            x = (k | t) ? TRUE : FALSE;
            r = func_0209d3d0(unk_b0, a, 2) ? TRUE : FALSE;
            k |= r;
            y = k ? TRUE : FALSE;
        }
        u8 *p95 = &unk_95;
        *p95 = Unk_0208b9f0_Or(unk_95, x);
        u8 *p94 = &unk_94;
        *p94 = Unk_0208b9f0_Or(unk_94, y);
        if (x != 0 || y != 0) {
            u32 b0, b1;
            func_02116048(a, unk_b0, 8);
            b0 = a[0];
            b1 = a[1];
            if (b1 == 0) {
                if (b0 == 0) {
                    unk_b8 = 0x258;
                    unk_a4 = 0;
                    if (func_020b50e8() != 0x2e) {
                        func_0200402c(0x65);
                    }
                    func_020b7878(3);
                } else if (b0 <= 10) {
                    u64 now = func_01ffa6b4();
                    u64 d = now - *(u64 *)&unk_cc;
                    u64 q = (d << 6) / 0x82ea;
                    if (q <= 0x44c) {
                        if (func_020b50e8() != 0x2e) {
                            func_0200402c(0x64);
                        }
                    }
                    unk_cc = (u32)now;
                    unk_d0 = (u32)(now >> 32);
                } else if (b0 >= 0xb) {
                    u64 now = func_01ffa6b4();
                    unk_cc = (u32)now;
                    unk_d0 = (u32)(now >> 32);
                }
            }
        }
    }
}

void Unk_0208b908::func_0208b924() {
    BOOL a = func_02038f10();
    BOOL b = _ZN12Unk_020e0f1013func_0208bf00Ev(this);
    s32 t;
    s32 c4;
    if (a && b) {
        t = 0xfffec000;
    } else {
        t = 0;
    }
    unk_c4 = unk_c4 + 0xa00;
    c4 = unk_c4;
    if (c4 < 0x2300) {
        c4 = 0x2300;
    } else if (c4 > 0x5000) {
        c4 = 0x5000;
    }
    unk_c4 = c4;
    if (t != unk_c0) {
        if (unk_c8 >= 0 && b) {
            unk_c8 = unk_c8 + 1;
            if (unk_c8 <= 10) {
                goto end;
            }
        }
        unk_c0 = t;
        unk_c8 = 0;
    } else {
        unk_c8 = 0;
    }
end:
    func_020e7870(&unk_bc, unk_c0, 0x600, unk_c4, 0x2300);
}

void Unk_0208b908::func_0208b908() {
    unk_bc = 0;
    unk_c0 = 0;
    unk_c8 = -1;
    unk_c4 = 0;
}

Unk_020e0f48::Unk_020e0f48() {
    unk_c0 = 0;
    unk_c4 = 0;
    unk_c8 = 0;
    unk_cc = 0;
    unk_d0 = 0;
    unk_d4 = 0;
}

Unk_020e0f48::~Unk_020e0f48() { func_0208b6e0(); }

void Unk_020e0f48::vfunc_08() {
    if (unk_c0 != 0) {
        s32 bx = func_02089f68();
        s32 by = func_02089f64();
        s32 i = 0;
        s32 nb = -1;
        s32 z = 0;
        for (; i < 9; i++) {
            Unk_02089270 *e = &unk_0c[i];
            void *p = e->func_02089248();
            if (p != NULL) {
                s32 sx = e->func_02089228(nb);
                s32 sy = e->func_02089210(nb);
                s32 pal = (i == unk_d0) ? 6 : 5;
                func_02087e70(z, p, bx + sx, by + sy, pal, nb, 0x1000, 0x1000, z, nb, z, z);
            }
        }
    }
}

void Unk_020e0f48::vfunc_0c() {
    static Unk_0208b728_Fn tbl[4] = {(Unk_0208b728_Fn)&Unk_0208b294::func_0208b418, (Unk_0208b728_Fn)&Unk_0208b294::func_0208b388,
                                     (Unk_0208b728_Fn)&Unk_0208b294::func_0208b324, (Unk_0208b728_Fn)&Unk_0208b294::func_0208b294};
    (((Unk_0208b294 *)this)->*tbl[unk_c0])();
}

void Unk_020e0f48::func_0208b700() {
    unk_d4 = 0;
    unk_c4 = 0;
    unk_c8 = 0;
    unk_cc = 0;
    unk_d0 = 0;
    _ZN12Unk_0208b29413func_0208b430Ev(this);
}

void Unk_020e0f48::func_0208b6e0() {
    s32 i;
    for (i = 0; i < 9; i++) {
        unk_0c[i].func_020891bc();
    }
}

void Unk_020e0f48::func_0208b6d0() { vfunc_0c(); }

void Unk_020e0f48::func_0208b6b0() {
    if (unk_c0 == 2) {
        func_020a6dec();
    }
    vfunc_08();
}

void Unk_020e0f48::func_0208b6a8(u32 v) { unk_d4 = v; }

BOOL Unk_020e0f48::func_0208b698() {
    if (unk_c0 == 0) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_020e0f48::func_0208b688() {
    if (unk_c0 == 2) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_020e0f48::func_0208b668() {
    s32 s = unk_c0;
    BOOL two = (s == 2) ? TRUE : FALSE;
    BOOL r = FALSE;
    if (s == 0) {
        return TRUE;
    }
    if (two) {
        r = TRUE;
    }
    return r;
}

BOOL Unk_020e0f48::func_0208b634() {
    BOOL r = FALSE;
    if (func_020a6df8()) {
        if (func_020a6fa4()) {
            r = TRUE;
        }
    } else if (func_020a6dec()) {
        if (func_020a70d4()) {
            r = TRUE;
        }
    }
    return r;
}

BOOL Unk_020e0f48::func_0208b5e4() {
    BOOL r = FALSE;
    s32 i = 0;
    for (; i < 9; i++) {
        const u8 *q = &data_020cf600[i * 2];
        s32 a = q[0] + 0x80;
        s32 b = q[1] + 0x60;
        if (func_020a706c(a, a + 0x10, b, b + 0x10)) {
            r = TRUE;
            unk_c4 = i;
            _ZN12Unk_0208b29413func_0208b438Ev(this);
            break;
        }
    }
    return r;
}

BOOL Unk_0208b294::func_0208b508() {
    s32 ox = unk_c8;
    s32 oy = unk_cc;
    u32 k = data_021f47d8[1];
    if ((k & 0x10) != 0) {
        unk_c8 = unk_c8 + 1;
    } else if ((k & 0x20) != 0) {
        unk_c8 = unk_c8 - 1;
    } else if ((k & 0x40) != 0) {
        unk_cc = unk_cc - 1;
    } else if ((k & 0x80) != 0) {
        unk_cc = unk_cc + 1;
    }
    s32 t = unk_c8;
    if (t < -1) t = -1;
    else if (t > 1) t = 1;
    unk_c8 = t;
    t = unk_cc;
    if (t < -1) t = -1;
    else if (t > 1) t = 1;
    unk_cc = t;
    func_0208b464();
    if (ox != unk_c8 || oy != unk_cc) {
        return TRUE;
    }
    return FALSE;
}

void Unk_0208b294::func_0208b4a4() {
    func_0203a1d0((data_020cf628 + 1)[unk_c4 * 2], data_020cf628[unk_c4 * 2]);
    s32 p = unk_d0;
    if (unk_c4 != p) {
        s32 a = (data_020cf614 + 1)[unk_c4 * 2];
        s32 b = (data_020cf614 + 1)[p * 2];
        s32 snd;
        if (a < b) {
            snd = 0x4d;
        } else if (a > b) {
            snd = 0x4c;
        } else {
            snd = 0x4e;
        }
        func_0200402c(snd);
        unk_d0 = unk_c4;
    }
}

void Unk_0208b294::func_0208b464() {
    s32 i = 0;
    while (i < 9) {
        s32 n = i * 2;
        const s8 *e = data_020cf614 + n;
        if (unk_c8 == data_020cf614[n] && unk_cc == e[1]) break;
        i++;
    }
    unk_c4 = i;
}

void Unk_0208b294::func_0208b438() {
    unk_c8 = data_020cf614[unk_c4 * 2];
    unk_cc = (data_020cf614 + 1)[unk_c4 * 2];
}

void Unk_0208b294::func_0208b430() {
    unk_c0 = 0;
}

void Unk_0208b294::func_0208b418() {
    if (unk_d4 != 0) {
        func_0208b3cc();
    }
}

void Unk_0208b294::func_0208b3cc() {
    s32 one = 1;
    unk_c0 = one;
    s32 i;
    for (i = 0; i < 9; i++) {
        Unk_02089270 *o = &unk_0c[i];
        o->func_02089268((Unk_02089270_Tbl *)(data_020d467c + (i + 0xe) * 8));
        o->func_02089264(one);
        o->func_020891bc();
    }
}

void Unk_0208b294::func_0208b388() {
    BOOL z = FALSE;
    BOOL r = TRUE;
    s32 i;
    for (i = 0; i < 9; i++) {
        Unk_02089270 *o = &unk_0c[i];
        o->func_02089140();
        if (!o->func_020891d8()) {
            r = z;
        }
    }
    if (r) {
        func_0208b380();
    }
}

void Unk_0208b294::func_0208b380() {
    unk_c0 = 2;
}

void Unk_0208b294::func_0208b324() {
    if (unk_d4 == 0) {
        func_0208b2d8();
    } else if (!_ZN12Unk_020e0f4813func_0208b634Ev(this)) {
        BOOL f = FALSE;
        if (func_020a6df8()) {
            if (_ZN12Unk_020e0f4813func_0208b5e4Ev(this)) {
                f = TRUE;
            }
        } else if (func_020a6dec()) {
            if (func_0208b508()) {
                f = TRUE;
            }
        }
        if (f) {
            func_0208b4a4();
        }
    }
}

void Unk_0208b294::func_0208b2d8() {
    unk_c0 = 3;
    s32 i;
    for (i = 0; i < 9; i++) {
        Unk_02089270 *o = &unk_0c[i];
        o->func_02089268((Unk_02089270_Tbl *)(data_020d467c + (i + 0x17) * 8));
        o->func_02089264(1);
        o->func_020891bc();
    }
}

void Unk_0208b294::func_0208b294() {
    BOOL z = FALSE;
    BOOL r = TRUE;
    s32 i;
    for (i = 0; i < 9; i++) {
        Unk_02089270 *o = &unk_0c[i];
        o->func_02089140();
        if (!o->func_020891d8()) {
            r = z;
        }
    }
    if (r) {
        func_0208b430();
    }
}

Unk_020e0f2c::Unk_020e0f2c() : unk_20(0), unk_24(0), unk_25(0), unk_26(0) {
}

Unk_020e0f2c::~Unk_020e0f2c() {
    func_0208b080();
}

void Unk_020e0f2c::vfunc_08() {
    if (unk_20 != 0) {
        void *v = unk_0c.func_02089248();
        if (v != 0) {
            s32 x = unk_0c.func_02089228(-1);
            s32 y = unk_0c.func_02089210(-1);
            s32 bx = func_02089f68();
            s32 by = func_02089f64();
            s32 t = ((u32)(unk_20 - 3) <= 2) ? 6 : 5;
            func_02087e70(0, v, bx + x, by + y, t, -1, 0x1000, 0x1000, 0, -1, 0, 0);
        }
    }
}

void Unk_020e0f2c::vfunc_0c() {
    static Unk_020e0f2c_Fn tbl[7] = {
        (Unk_020e0f2c_Fn)&Unk_020e0f2c::func_0208ae9c, (Unk_020e0f2c_Fn)&Unk_020e0f2c::func_0208ae48,
        (Unk_020e0f2c_Fn)&Unk_020e0f2c::func_0208adc8, (Unk_020e0f2c_Fn)&Unk_020e0f2c::func_0208ad74,
        (Unk_020e0f2c_Fn)&Unk_020e0f2c::func_0208ad1c, (Unk_020e0f2c_Fn)&Unk_020e0f2c::func_0208acd8,
        (Unk_020e0f2c_Fn)&Unk_020e0f2c::func_0208ac84,
    };
    (this->*tbl[unk_20])();
}

void Unk_020e0f2c::func_0208b098() {
    unk_26 = 0;
    unk_24 = 0;
    unk_25 = 0;
    func_0208aeb4();
    unk_28.func_0208b700();
}

void Unk_020e0f2c::func_0208b080() {
    unk_28.func_0208b6e0();
    unk_0c.func_020891bc();
}

void Unk_020e0f2c::func_0208b060() {
    vfunc_0c();
    unk_28.func_0208b6d0();
    func_0208aebc();
}

void Unk_020e0f2c::func_0208b048() {
    vfunc_08();
    unk_28.func_0208b6b0();
}

void Unk_020e0f2c::func_0208b040() {
    unk_26 = 1;
}

void Unk_020e0f2c::func_0208b038() {
    unk_26 = 0;
}

BOOL Unk_020e0f2c::func_0208b018() {
    if (unk_20 == 0 && unk_28.func_0208b698()) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_020e0f2c::func_0208afc0() {
    BOOL a;
    if (func_0203e2f4()) {
        a = TRUE;
    } else {
        a = FALSE;
    }
    u32 v = func_02095134(4);
    BOOL b, c;
    if (v - 8 <= 7) b = TRUE; else b = FALSE;
    if (v - 0x24 <= 8) c = TRUE; else c = FALSE;
    BOOL r;
    if (unk_26 != 0 && !a && !b && !c) {
        r = TRUE;
    } else {
        r = FALSE;
    }
    return r;
}

BOOL Unk_020e0f2c::func_0208aefc(s32 flag) {
    BOOL r = FALSE;
    BOOL f = r;
    if (unk_24 != 0) {
        if (func_020a6df8()) {
            if (func_020a6fa4()) {
                f = TRUE;
            }
        } else if (func_020a6dec()) {
            if (func_020a70d4()) {
                f = TRUE;
            }
        }
    }
    if (!f) {
        if (unk_28.func_0208b668()) {
            u32 k = data_021f47d8[1];
            if ((k & 0x400) != 0 || (flag != 0 && (k & 2) != 0)) {
                r = TRUE;
                unk_25 = 1;
            } else {
                BOOL c;
                if (data_021f4770 != 0 && data_021f4774 != 0) {
                    c = TRUE;
                } else {
                    c = FALSE;
                }
                if (c) {
                    s32 a = data_021ef5f8;
                    if ((s32)data_021ef5f4 < 16 && a >= 0xc8 && a < 0xe8) {
                        r = TRUE;
                        unk_25 = 0;
                    }
                }
            }
        }
    }
    return r;
}

void Unk_020e0f2c::func_0208aebc() {
    if (unk_24 != 0) {
        if (func_020a6df8()) {
            if (func_020a6fa4()) {
                func_020a6e0c();
            }
        } else if (func_020a6dec()) {
            if (func_020a70d4()) {
                func_020a6e18();
            }
        }
        func_020a6d94();
    }
}

void Unk_020e0f2c::func_0208aeb4() {
    unk_20 = 0;
}

void Unk_020e0f2c::func_0208ae9c() {
    if (func_0208afc0()) {
        func_0208ae6c();
    }
}

void Unk_020e0f2c::func_0208ae6c() {
    unk_20 = 1;
    unk_0c.func_02089268((Unk_02089270_Tbl *)(data_020d477c));
    unk_0c.func_02089264(1);
    unk_0c.func_020891bc();
}

void Unk_020e0f2c::func_0208ae48() {
    unk_0c.func_02089140();
    if (unk_0c.func_020891d8()) {
        func_0208ae08();
    }
}

void Unk_020e0f2c::func_0208ae08() {
    unk_20 = 2;
    unk_25 = 0;
    unk_0c.func_02089268((Unk_02089270_Tbl *)(data_020d4784));
    unk_0c.func_02089264(1);
    unk_0c.func_020891bc();
    unk_0c.func_020891d0();
}

void Unk_020e0f2c::func_0208adc8() {
    if (func_0203d854()) {
        func_0206e660();
        func_0208ad90();
    } else if (!func_0208afc0()) {
        func_0208aca8();
    } else if (func_0208aefc(0)) {
        func_0203d860();
    }
}

void Unk_020e0f2c::func_0208ad90() {
    unk_20 = 3;
    unk_28.func_0208b6a8(1);
    unk_24 = 1;
    if (unk_25 != 0) {
        func_020a6e0c();
    } else {
        func_020a6e18();
    }
    func_0200402c(0x4a);
}

void Unk_020e0f2c::func_0208ad74() {
    if (unk_28.func_0208b688()) {
        func_0208ad44();
    }
}

void Unk_020e0f2c::func_0208ad44() {
    unk_20 = 4;
    unk_0c.func_02089268((Unk_02089270_Tbl *)(data_020d478c));
    unk_0c.func_02089264(1);
    unk_0c.func_020891bc();
}

void Unk_020e0f2c::func_0208ad1c() {
    BOOL a = func_0208aefc(1);
    BOOL b = func_0206e61c();
    if (a || b) {
        func_0208ad00();
    }
}

void Unk_020e0f2c::func_0208ad00() {
    unk_20 = 5;
    unk_28.func_0208b6a8(0);
    func_0200402c(0x4b);
}

void Unk_020e0f2c::func_0208acd8() {
    if (unk_28.func_0208b698()) {
        func_0203d848();
        unk_24 = 0;
        func_0208ae08();
    }
}

void Unk_020e0f2c::func_0208aca8() {
    unk_20 = 6;
    unk_0c.func_02089268((Unk_02089270_Tbl *)(data_020d4784));
    unk_0c.func_02089264(1);
    unk_0c.func_020891bc();
}

void Unk_020e0f2c::func_0208ac84() {
    unk_0c.func_02089140();
    if (unk_0c.func_020891d8()) {
        func_0208aeb4();
    }
}

Unk_020e0ef4::Unk_020e0ef4()
    : unk_20(0), unk_24(0), unk_28(0), unk_2c(0), unk_30(0), unk_34(-1), unk_38(NULL) {
    unk_68 = 0;
    unk_6c = 0;
    unk_6d = 0;
    unk_6e = 0;
}

Unk_020e0ef4::~Unk_020e0ef4() {
    func_0208aa88();
}

void Unk_020e0ef4::vfunc_08() {
    if (unk_20 != 0) {
        void *h = unk_0c.func_02089248();
        if (h != 0) {
            s32 a = func_02089f68();
            s32 x = a + unk_0c.func_02089228(-1);
            s32 b = (unk_28 + 0x800) >> 12;
            s32 c = func_02089f64();
            s32 e = unk_0c.func_02089210(-1);
            s32 y = b;
            y += unk_24 + (c + e);
            func_02087e70(0, h, x, y, -1, -1, 0x1000, 0x1000, 0, -1, 0, 0);
        }
    }
}

void Unk_020e0ef4::vfunc_0c() {
    static Fn tbl[4] = {
        (Fn)&Unk_020e0ef4::func_0208aa08, (Fn)&Unk_020e0ef4::func_0208a9a8,
        (Fn)&Unk_020e0ef4::func_0208a978, (Fn)&Unk_020e0ef4::func_0208a920,
    };
    (this->*tbl[unk_20])();
}

void Unk_020e0ef4::func_0208aaa8() {
    unk_6c = 0;
    func_0208a878();
    func_0208a6c0();
    func_0208aa20();
}

void Unk_020e0ef4::func_0208aa88() {
    func_0208a7c0(0);
    unk_0c.func_020891bc();
    func_0208a89c();
}

void Unk_020e0ef4::func_0208aa70() {
    vfunc_0c();
    func_0208a6d0();
}

void Unk_020e0ef4::func_0208aa58() {
    func_0208a764();
    vfunc_08();
}

void Unk_020e0ef4::func_0208aa50() {
    unk_6c = 1;
}

void Unk_020e0ef4::func_0208aa48() {
    unk_6c = 0;
}

BOOL Unk_020e0ef4::func_0208aa38() {
    if (unk_20 == 0) {
        return TRUE;
    }
    return FALSE;
}

void Unk_020e0ef4::func_0208aa30() {
    unk_6e = 1;
}

void Unk_020e0ef4::func_0208aa28() {
    unk_6e = 0;
}

void Unk_020e0ef4::func_0208aa20() {
    unk_20 = 0;
}

void Unk_020e0ef4::func_0208aa08() {
    if (unk_6c != 0) {
        func_0208a9cc();
    }
}

void Unk_020e0ef4::func_0208a9cc() {
    unk_20 = 1;
    unk_0c.func_02089268((Unk_02089270_Tbl *)(data_020d4794));
    unk_0c.func_02089264(1);
    unk_0c.func_020891bc();
    func_0208a878();
    func_0208a8b4();
}

void Unk_020e0ef4::func_0208a9a8() {
    unk_0c.func_02089140();
    if (unk_0c.func_020891d8() != 0) {
        func_0208a9a0();
    }
}

void Unk_020e0ef4::func_0208a9a0() {
    unk_20 = 2;
}

void Unk_020e0ef4::func_0208a978() {
    BOOL r = func_0208a814();
    if (unk_6c == 0) {
        func_0208a948();
        r = FALSE;
    }
    func_0208a7c0(r);
}

void Unk_020e0ef4::func_0208a948() {
    unk_20 = 3;
    unk_0c.func_02089268((Unk_02089270_Tbl *)(data_020d479c));
    unk_0c.func_02089264(1);
    unk_0c.func_020891bc();
}

void Unk_020e0ef4::func_0208a920() {
    unk_0c.func_02089140();
    if (unk_0c.func_020891d8() != 0) {
        func_0208a89c();
        func_0208aa20();
    }
}

void Unk_020e0ef4::func_0208a8b4() {
    if (unk_38 == NULL) {
        unk_38 = func_020a8054(0x80, 8, 1);
        if (unk_38 != NULL) {
            unk_38->unk_2c = 4;
            unk_38->unk_50 = 2;
            unk_38->unk_55 = 1;
            unk_38->unk_39 = 0;
            unk_38->unk_38 = 0xc;
            Unk_02050288 *o = unk_38;
            StrBuf *s = &unk_3c;
            o->unk_10 = (u32)s->data();
            unk_38->unk_28 = &data_021c48fc;
            unk_38->func_02050c20();
            unk_38->func_02050c90();
        }
    }
}

void Unk_020e0ef4::func_0208a89c() {
    if (unk_38 != NULL) {
        func_020a7fd8(unk_38);
        unk_38 = NULL;
    }
}

void Unk_020e0ef4::func_0208a878() {
    unk_68 = func_0208a798();
    func_0208a7f4();
    unk_6d = 0;
    unk_6e = 0;
}

BOOL Unk_020e0ef4::func_0208a814() {
    BOOL r = FALSE;
    if (unk_6e == 0) {
        s32 v = Unk_0208a814_NS::func_0208a798(this);
        if (unk_68 != v) {
            s32 d = v - unk_68;
            if (d < 0) {
                d = -d;
            }
            s32 t = (d / 6 + 0x32) / 10;
            func_020e759c(&unk_68, v, t * 10 + 7);
            func_0208a7f4();
            if (unk_38 != NULL) {
                unk_38->func_02050c20();
                unk_38->func_02050c90();
            }
            r = TRUE;
        }
    }
    return r;
}

void Unk_020e0ef4::func_0208a7f4() {
    func_020b3270(&unk_3c, unk_68, 7, 1, 0, 1);
}

void Unk_020e0ef4::func_0208a7c0(BOOL v) {
    if (unk_6d != 0) {
        if (v == 0) {
            func_02003edc();
            func_0200402c(0x2e);
        }
    } else if (v != 0) {
        func_02003eec();
    }
    unk_6d = v;
}

extern "C" s32 func_0208a798() {
    s32 c = func_0209750c();
    s32 r = 0;
    if (c != 0) {
        s32 a = _ZN12Unk_02097d1c13func_02097d1cEi(_ZN12Unk_0209865c13func_02098750Ev(), 1);
        r = a + func_0206e900();
    }
    return r;
}

void Unk_020e0ef4::func_0208a764() {
    s32 v = func_0206edbc();
    s32 a = func_01ffcb0c(0, v);
    s32 b = func_01ffcb0c(0xc0000, 0x1000 - v);
    unk_24 = (a + b) >> 12;
}

void Unk_020e0ef4::func_0208a6d0() {
    if (func_0206edb0() != 0) {
        s32 r;
        if (func_02038f60() != 0) {
            r = 0x28000;
        } else {
            r = 0;
        }
        unk_30 = unk_30 + 0xa00;
        s32 t = unk_30;
        if (t < 0x2300) {
            t = 0x2300;
        } else if (t > 0x5000) {
            t = 0x5000;
        }
        unk_30 = t;
        if (r != unk_2c) {
            if (unk_34 < 0 || (unk_34 = unk_34 + 1, unk_34 > 5)) {
                unk_2c = r;
                unk_34 = 0;
            }
        } else {
            unk_34 = 0;
        }
        func_020e7870(&unk_28, unk_2c, 0x600, unk_30, 0x2300);
    } else {
        func_0208a6c0();
    }
}

void Unk_020e0ef4::func_0208a6c0() {
    unk_28 = 0;
    unk_2c = 0;
    unk_34 = -1;
    unk_30 = 0;
}

Unk_020e0ecc::Unk_020e0ecc() : unk_04(0) {
    unk_314 = 0;
    unk_315 = 0;
    unk_316 = 0;
}

Unk_020e0ecc::~Unk_020e0ecc() {}

extern "C" void func_0208a5d4() { data_021ce770.func_0208a524(); }

extern "C" void func_0208a5c4() { data_021ce770.func_0208a4f0(); }

extern "C" void func_0208a5b4() { data_021ce770.func_0208a424(); }

extern "C" void func_0208a5a4() { data_021ce770.func_0208a3f4(); }

extern "C" void func_0208a598() { ((Unk_0208a328_Pa *)((u8 *)&data_021ce770 + 0x300))->unk_14 = 1; }

extern "C" void func_0208a58c() { ((Unk_0208a328_Pa *)((u8 *)&data_021ce770 + 0x300))->unk_14 = 0; }

extern "C" void func_0208a580() { ((Unk_0208a328_Pa *)((u8 *)&data_021ce770 + 0x300))->unk_15 = 0; }

extern "C" void *func_0208a578() { return &data_021ce770.unk_d0; }

extern "C" void *func_0208a570() { return &data_021ce770.unk_2a4; }

void Unk_020e0ecc::func_0208a524() {
    func_0208a58c();
    func_0208a580();
    _ZN12Unk_0208a0ac13func_0208a108Ev(this);
    _ZN12Unk_020e0f6413func_0208cde0Ev(&unk_08);
    _ZN12Unk_020e0f1013func_0208c1dcEv(&unk_d0);
    _ZN12Unk_020e0f2c13func_0208b098Ev(&unk_1a4);
    unk_2a4.func_0208aaa8();
    unk_316 = 0;
}

void Unk_020e0ecc::func_0208a4f0() {
    unk_2a4.func_0208aa88();
    _ZN12Unk_020e0f2c13func_0208b080Ev(&unk_1a4);
    _ZN12Unk_020e0f1013func_0208c1d4Ev(&unk_d0);
    _ZN12Unk_020e0f6413func_0208cdd8Ev(&unk_08);
}

void Unk_020e0ecc::func_0208a424() {
    static Fn tbl[6] = {
        (Fn)&Unk_020e0ecc::func_0208a3c4, (Fn)&Unk_020e0ecc::func_0208a344, (Fn)&Unk_0208a0ac::func_0208a2ac,
        (Fn)&Unk_0208a0ac::func_0208a254, (Fn)&Unk_0208a0ac::func_0208a230, (Fn)&Unk_0208a0ac::func_0208a1c0,
    };
    (this->*tbl[unk_04])();
    _ZN12Unk_020e0f6413func_0208cdc8Ev(&unk_08);
    _ZN12Unk_020e0f1013func_0208c1c4Ev(&unk_d0);
    _ZN12Unk_020e0f2c13func_0208b060Ev(&unk_1a4);
    unk_2a4.func_0208aa70();
    _ZN12Unk_0208a0ac13func_0208a0acEv(this);
}

void Unk_020e0ecc::func_0208a3f4() {
    _ZN12Unk_020e0f6413func_0208cdb8Ev(&unk_08);
    _ZN12Unk_020e0f1013func_0208c1b4Ev(&unk_d0);
    _ZN12Unk_020e0f2c13func_0208b048Ev(&unk_1a4);
    unk_2a4.func_0208aa58();
}

void Unk_020e0ecc::func_0208a3ec() {
    unk_04 = 0;
}

void Unk_020e0ecc::func_0208a3c4() {
    if (unk_314 != 0 || unk_315 != 0) {
        _ZN12Unk_0208a0ac13func_0208a218Ev(this);
    }
}

void Unk_020e0ecc::func_0208a3bc() {
    unk_04 = 1;
}

void Unk_020e0ecc::func_0208a344() {
    BOOL a;
    BOOL b;
    if (unk_314 != 0 || unk_315 != 0) {
        a = TRUE;
    } else {
        a = FALSE;
    }
    b = _ZN12Unk_020e0f1013func_0208c094Ev(&unk_d0) == 0 ? TRUE : FALSE;
    if (a || b) {
        _ZN12Unk_020e0f6413func_0208cd88Ev(&unk_08);
        if (_ZN12Unk_020e0f6413func_0208cd78Ev(&unk_08) != 0) {
            if (a) {
                _ZN12Unk_0208a0ac13func_0208a218Ev(this);
            } else {
                func_0208a328();
            }
        }
    } else {
        _ZN12Unk_020e0f6413func_0208cd90Ev(&unk_08);
    }
}

void Unk_020e0ecc::func_0208a328() {
    unk_04 = 2;
    func_02011900(1);
    func_0201192c(1, 1);
}

void Unk_0208a0ac::func_0208a2ac() {
    BOOL r5;
    if (unk_314 != 0 || unk_315 != 0) {
        r5 = TRUE;
    } else {
        r5 = FALSE;
    }
    BOOL r0 = _ZN12Unk_020e0f1013func_0208c094Ev(&unk_d0);
    if (r5 || r0) {
        _ZN12Unk_020e0f1013func_0208c0c4Ev(&unk_d0);
        if (_ZN12Unk_020e0f1013func_0208c0b4Ev(&unk_d0)) {
            if (r5) {
                func_0208a218();
            } else {
                func_02011900(0);
                func_0201192c(4, 1);
                _ZN12Unk_020e0ecc13func_0208a3bcEv(this);
            }
        }
    } else {
        _ZN12Unk_020e0f1013func_0208c0ccEv(&unk_d0);
    }
}

void Unk_0208a0ac::func_0208a2a4() { unk_04 = 3; }

void Unk_0208a0ac::func_0208a254() {
    if (unk_314 != 0 || unk_315 != 0) {
        _ZN12Unk_020e0f2c13func_0208b038Ev(&unk_1a4);
        if (_ZN12Unk_020e0f2c13func_0208b018Ev(&unk_1a4)) {
            func_0208a218();
        }
    } else {
        _ZN12Unk_020e0f2c13func_0208b040Ev(&unk_1a4);
    }
    func_0208a150();
}

void Unk_0208a0ac::func_0208a24c() { unk_04 = 4; }

void Unk_0208a0ac::func_0208a230() {
    _ZN12Unk_020e0ef413func_0208aa50Ev(&unk_2a4);
    func_0208a150();
}

void Unk_0208a0ac::func_0208a218() {
    func_0201192c(3, 1);
    unk_04 = 5;
}

void Unk_0208a0ac::func_0208a1c0() {
    if (unk_314 != 0 || unk_315 != 0) {
        _ZN12Unk_020e0ef413func_0208aa50Ev(&unk_2a4);
    } else {
        _ZN12Unk_020e0ef413func_0208aa48Ev(&unk_2a4);
        if (_ZN12Unk_020e0ef413func_0208aa38Ev(&unk_2a4)) {
            func_0201192c(4, 1);
            func_0208a108();
        }
    }
    func_0208a150();
}

void Unk_0208a0ac::func_0208a150() {
    if (func_0201188c() != 0) {
        if (Unk_0208a150_IsOne(data_020e416c)) {
            if (_ZN12Unk_020e0f1013func_0208c094Ev(&unk_d0)) {
                _ZN12Unk_020e0f1013func_0208c0c4Ev(&unk_d0);
                if (_ZN12Unk_020e0f1013func_0208c0b4Ev(&unk_d0)) {
                    _ZN12Unk_020e0f6413func_0208cd90Ev(&unk_08);
                }
            } else {
                _ZN12Unk_020e0f6413func_0208cd88Ev(&unk_08);
                if (_ZN12Unk_020e0f6413func_0208cd78Ev(&unk_08)) {
                    _ZN12Unk_020e0f1013func_0208c0ccEv(&unk_d0);
                }
            }
        }
    }
}

void Unk_0208a0ac::func_0208a108() {
    s32 r = func_0201188c();
    if (r == 1) {
        if (func_020118f4()) {
            _ZN12Unk_020e0ecc13func_0208a328Ev(this);
        } else {
            _ZN12Unk_020e0ecc13func_0208a3bcEv(this);
        }
    } else if (r == 2) {
        func_0208a2a4();
    } else if (r == 3) {
        func_0208a24c();
    } else {
        _ZN12Unk_020e0ecc13func_0208a3ecEv(this);
    }
}

void Unk_0208a0ac::func_0208a0ac() {
    BOOL r = FALSE;
    if (unk_316 != 0) {
        if (func_0208f024()) {
            r = TRUE;
        }
    } else {
        if (func_0208f010()) {
            r = TRUE;
        }
    }
    if (r) {
        unk_316 = unk_316 == 0 ? 1 : 0;
        if (unk_04 == 3) {
            func_0201190c(unk_316, 1, 1);
        }
    }
}

extern "C" Unk_020e0f80 *func_0208a094() { return new Unk_020e0f80(); }

Unk_020e0f80::Unk_020e0f80() {}

Unk_020e0f80::~Unk_020e0f80() {}

BOOL Unk_020e0f80::vfunc_00() {
    func_020037a0();
    func_02003414();
    func_0208de8c();
    func_0208a5d4();
    return TRUE;
}

BOOL Unk_020e0f80::vfunc_0c() {
    func_0208a5c4();
    func_0208de88();
    func_02003404();
    func_02003790();
    return TRUE;
}

BOOL Unk_020e0f80::vfunc_18() {
    func_02003780();
    func_020033f4();
    func_0208de78();
    func_0208a5b4();
    return TRUE;
}

BOOL Unk_020e0f80::vfunc_24() {
    func_020033e4();
    func_02003770();
    func_0208a5a4();
    func_0208de68();
    return TRUE;
}

// ---------------------------------------------------------------------------------------------------------------------
// Data

char data_020e0dc8[] = ":";
char data_020e0dcc[] = "AM";
char data_020e0dd0[] = "PM";

const char *const data_020cf5d8 = data_020e0dc8;
const char *const data_020cf5dc[2] = {data_020e0dcc, data_020e0dd0};
const s16 data_020cf5e4[6] = {0, 180, 300, 600, 900, 0};
const u16 data_020cf5f0[8] = {'g', 'a', 'b', 'c', 'd', 'e', 'f', 0};
const u8 data_020cf600[18] = {0x5b, 0x3c, 0x49, 0x2b, 0x5b, 0x2b, 0x6c, 0x2b, 0x49,
                              0x3c, 0x6c, 0x3c, 0x49, 0x4c, 0x5b, 0x4c, 0x6c, 0x4c};
const s8 data_020cf614[18] = {0, 0, -1, -1, 0, -1, 1, -1, -1, 0, 1, 0, -1, 1, 0, 1, 1, 1};
const u8 data_020cf628[18] = {1, 1, 0, 0, 1, 0, 2, 0, 0, 1, 2, 1, 0, 2, 1, 2, 2, 2};
// 0x020cf63c: last .rodata object of this file (0x14 bytes, continues the ascending size run); read by the unit at
// 0x0208d154 (0x0208d324)
extern const s32 data_020cf63c[5];
const s32 data_020cf63c[5] = {10, 11, 12, 13, 0x28};

struct Unk_020e0e74_Rec {
    Unk_020e0f80 *(*unk_00)();
    s16 unk_04;
    s16 unk_06;
};
Unk_020e0e74_Rec data_020e0e74 = {func_0208a094, 0xca, 0x8e};

Unk_020e0ecc data_021ce770;
