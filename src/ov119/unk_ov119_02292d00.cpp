#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef vfunc_08
#undef vfunc_14

// Calls into other modules' class methods: extern "C" functions named by the real mangled symbol (self first).
#define func_0206fab4 _ZN12Unk_020e048813func_0206fab4Eii
#define func_0206fb9c _ZN12Unk_020e048813func_0206fb9cEjjjhhi
#define func_0206fc44 _ZN12Unk_020e048813func_0206fc44Ev
#define func_020940d0 _ZN12Unk_020940a013func_020940d0EP12Unk_020e2a78
#define func_02098680 _ZN12Unk_0209865c13func_02098680Ev
#define func_0209888c _ZN12Unk_0209865c13func_0209888cEv
#define func_02098674 _ZN12Unk_0209865c13func_02098674Ev
#define func_020a7aa0 _ZN12Unk_020e2a7813func_020a7aa0EP12Unk_020e2a60ii
#define func_020a7a64 _ZN12Unk_020e2a7813func_020a7a64EPh
#define func_020a7c3c _ZN12Unk_020e2a7813func_020a7c3cEv
#define func_020a7bd8 _ZN12Unk_020e2a7813func_020a7bd8EPS_
#define func_02072e44 _ZN12Unk_020cbb1813func_02072e44Ev
#define func_02094104 _ZN12Unk_020940a013func_02094104Ev
#define func_ov090_02291964 _ZN18Unk_ov090_022921e019func_ov090_02291964Ev
#define func_ov090_02291a88 _ZN18Unk_ov090_022921e019func_ov090_02291a88Ev
#define func_ov090_02291d8c _ZN18Unk_ov090_022921e019func_ov090_02291d8cEj
#define func_ov090_02291d2c _ZN18Unk_ov090_022921e019func_ov090_02291d2cEv
#define func_ov002_02202278 _ZN18Unk_ov002_0220455819func_ov002_02202278Eii
#define func_ov002_02202310 _ZN18Unk_ov002_0220455819func_ov002_02202310EiiPKc
#define func_ov002_0220160c _ZN18Unk_ov002_022013ac19func_ov002_0220160cEP22Unk_ov002_022013ac_Reci
#define func_ov002_02201680 _ZN18Unk_ov002_022013ac19func_ov002_02201680EP22Unk_ov002_022013ac_RecPvj
#define func_ov002_022014c0 _ZN18Unk_ov002_022013ac19func_ov002_022014c0Eii

#define func_02094030 _ZN12Unk_020e1c64C1Ev
#define func_02094018 _ZN12Unk_020e1c64D1Ev
extern "C" {
extern u8 data_021edb68;
extern u16 data_021f47d8[];
extern u8 data_021f4770;
extern u8 data_021f4774;
extern u8 data_021ef5f0;
extern u8 data_021ef5ec;
extern u32 data_021f482c;

void func_ov119_02294c5c();
void _ZN18Unk_ov119_0229584019func_ov119_0229305cEh(void *self, u32 m);

void *func_020ed174(void *p);
void func_020ed188(void *p);
void *func_0209750c();
void *func_02097520(u32 a);
s32 func_02076c8c(void *p);
s32 func_02076c84(void *p);
u64 func_02076c94(void *p);
void *func_02076cf0(void *p);
void *func_02076db4(void *p);
void *func_02076e1c(void *p);
BOOL func_02076f04(void *p);
void *func_02076ce8(void *p);
void *func_02076cec(void *p);
BOOL func_02076e20(void *p);
BOOL func_02076f28(void *p, void *q);
void func_02076d68(void *p);
void func_02076cf4(void *p);
void *func_02076c7c(void *a);
void func_02076f58(void *a, void *b);
void func_0206ee80(void *p, s32 a, s32 b, s32 c, s32 d, s32 e);
void func_0206f9fc(void *p, s32 a);
void func_0206f994(void *p, void *s, s32 n);
void func_0206ed2c(u32 v);
void func_020a78a4(void *dst, void *src, s32 n);
void func_020b3544(s32 a, void *p);
void func_020b3558(void *p, void *q, s32 a);
void *func_020a6b9c(void *p, s32 i);
void func_020638d0(void *a, void *b);
void *func_02063964(void *a);
void *func_0209409c(void *a);
void func_02051268(void *a, void *b, s32 c);
void func_02116048(void *src, void *dst, s32 n);
void func_02115e48(void *src, void *dst, s32 n);
BOOL func_020e9d7c(void *p);
BOOL func_020e9d88(void *p, void *q);
s32 func_020e9d70(void *p);
s32 func_020eaf18();
void *func_020ea574();
BOOL func_020e9bb0(u32 a);
BOOL func_020e9c78(u32 a, void *b);
void func_0200402c(u32 a);
s32 func_02087e14(void *p);
s32 func_02087e0c(void *p);
void func_02087e70(u32 a, void *h, s32 x, s32 y, s32 s0, s32 s1, s32 s2, s32 s3, s32 s4, s32 s5, s32 s6, s32 s7);
s32 func_02088730(s32 mode, void *info, s32 x, s32 y, s32 pal, s32 pri, s32 *rect);
BOOL func_0206e61c();
void func_0206e63c();
BOOL func_0206ef00();
BOOL func_0206ef0c();
BOOL func_0206e5dc();
u32 func_0206e5bc();
u32 func_0206ed38(u32 a);
void func_020021a0(s32 a);
void func_020020b8(s32 a);
void func_02002398(s32 a, s32 b);
void func_0200226c(s32 a, s32 b, s32 c, s32 d);
s32 func_0200261c(const char *a, u32 b, s32 c, s32 d, s32 e, s32 f);
s32 func_020026c4(const char *a, u32 b, s32 c, s32 d, s32 e, s32 f);
s32 func_02002654(const char *a, u32 b, s32 c);
BOOL func_020641b4(const char *a, void *b, s32 c);

s32 func_ov090_02291a78(s32 a);
u8 func_ov090_02291a38(u8 a);
u8 func_ov090_02291a58(u8 a);
s32 func_ov090_02291aa0();

BOOL func_ov002_0220125c(u32 v);
BOOL func_ov002_0220126c(u32 v);
BOOL func_ov002_0220127c(u32 v);
BOOL func_ov002_0220128c(u32 v);
void func_ov002_02202064(void *p, u32 v);
void func_ov002_02202098(void *p, u32 v);
void func_ov002_02202278(void *self, u32 a, u32 b);
BOOL func_ov002_02201a28(void *self);
u8 func_ov002_02201a70(void *self, s32 x);
void func_ov002_02201aa0(void *p, s32 a, s32 b);
void func_ov002_022016e4(void *p, s32 a);
void func_ov002_02201700(void *p, s32 a, s32 b);
BOOL func_ov002_022019d0(void *p, u32 idx, void *q, u8 flag);
s32 func_ov002_02201b58(void *p);
s32 func_ov002_02201b04(void *p);
void func_ov002_022020fc(void *p);
void func_ov002_02201b28(void *p);

void func_0206fab4(void *self, s32 a, s32 b);
void func_0206fb9c(void *self, u32 a, u32 b, u32 c, u32 d, u32 e, s32 f);
void func_0206fc44(void *self);
void func_020940d0(void *self, void *b);
void *func_02098680(void *self);
void *func_0209888c(void *self);
void *func_02098674(void *self);
void func_020a7aa0(void *self, void *b, s32 c, s32 d);
void func_020a7a64(void *self, void *b);
void func_020a7c3c(void *self);
void func_020a7bd8(void *self, void *b);
BOOL func_02072e44(void *self);
void *func_02094104(void *self);
void func_ov090_02291964(void *self);
void func_ov090_02291a88(void *self);
void func_ov090_02291d8c(void *self, u32 idx);
void func_ov090_02291d2c(void *self);
void func_ov002_02202310(void *self, s32 a, s32 b, const char *c);
void func_ov002_0220160c(void *self, void *rec, u32 v);
void func_ov002_02201680(void *self, void *rec, void *p, u32 v);
s32 func_ov002_022014c0(void *self, u32 a, u32 b);
void _ZN12Unk_020dd38cC2Ev(void *self);
void _ZN12Unk_020dd38cD1Ev(void *self);
void _ZN12Unk_020dd374C2Ev(void *self);
void _ZN12Unk_020dd374D1Ev(void *self);
void _ZN12Unk_020e1c64C1Ev(void *self);
void _ZN12Unk_020e1c64D1Ev(void *self);

struct Unk_ov119_Comm {
    u32 unk_00[0x64 / 4];
    s32 unk_64;
};
extern Unk_ov119_Comm *data_020cbb18;
extern u8 *data_ov119_02295648[6];
extern u32 data_ov119_02295660[8];
extern u32 data_ov119_02295680[10];
extern u32 data_ov119_022956a8[10];
extern u32 data_ov119_022956d0[10];
extern u32 data_ov119_022956f8[10];
extern u32 data_ov119_02295720[10];
extern u32 data_ov119_02295748[12];
extern u32 data_ov119_02295778[12];
extern u32 data_ov119_022957a8[12];
extern u32 data_ov119_022957d8[24];
struct Unk_ov119_02295588 {
    u32 unk_00;
    u16 unk_04;
    u16 unk_06;
};
extern Unk_ov119_02295588 data_ov119_02295588;
}

// 0x40-byte element with ctor/dtor in main
class Unk_020e0488 {
public:
    Unk_020e0488();
    ~Unk_020e0488();
    u8 unk_00[0x40];
};

class Unk_020e0574 {
public:
    Unk_020e0574();
    ~Unk_020e0574();
    u32 unk_00[0xd4 / 4];
};

// 0x24-byte helper objects at +0x1a58
class Unk_020e45f8 {
public:
    Unk_020e45f8();
    BOOL func_020b86c0(u32 buf, u8 n, u32 size, u32 z);
    void func_020b8670(u32 buf, u8 n, u32 z);
    void func_020b87d0();
    u32 unk_00[0x24 / 4];
};

struct Unk_ov002_022013ac_Rec;

// cursor object at +0xdc (size 0x300)
class Unk_ov002_022013ac {
public:
    s32 func_ov002_02201498(s32 v);
    s32 func_ov002_022014a4();
    BOOL func_ov002_022017a4();
    BOOL func_ov002_022017b4();
    u8 unk_00[0x2f4];
};

class Unk_ov002_02204558 : public Unk_ov002_022013ac {
public:
    Unk_ov002_02204558();
    ~Unk_ov002_02204558();
    u8 unk_2f4[0xc];
};

// object at +0x970 (size 0x64, vtable 0x02204614); methods split over more ov002 / main classes
class Unk_ov002_02202d98 {
public:
    void func_ov002_02202844();
    s32 func_ov002_02202878();
    s32 func_ov002_0220288c();
    void func_ov002_02202af0();
    void func_ov002_02202a78();
    void func_ov002_022029e8(s32 a, s32 b, s32 c, s32 d);
    void func_ov002_02202a40(s32 a, s32 b);
    void func_ov002_02202a18(s32 a, s32 b, s32 c);
    s32 func_ov002_022028f0();
};

class Unk_ov002_0220464c {
public:
    void func_ov002_02202b68();
    void func_ov002_02202be0();
    void func_ov002_02202c40();
    void func_ov002_02202ca0();
    void func_ov002_02202d00(s32 v);
};

class Unk_020e100c {
public:
    BOOL func_0208d4fc();
    BOOL func_0208d534();
    void func_0208d538(s32 a);
};

class Unk_ov002_02204614 {
public:
    Unk_ov002_02204614();
    virtual ~Unk_ov002_02204614();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    u32 unk_04[0x60 / 4];
};

#define U970_A ((Unk_ov002_02202d98 *)&unk_970)
#define U970_B ((Unk_ov002_0220464c *)&unk_970)
#define U970_C ((Unk_020e100c *)&unk_970)

// +0x1ac4 sub-object
class Unk_ov002_022040ec {
public:
    Unk_ov002_022040ec();
    ~Unk_ov002_022040ec();
    BOOL func_ov002_02204234(s32 a);
    void func_ov002_02204394(u8 *a, s32 b, u32 c);
    u32 unk_00[0x108 / 4];
};

// Vtable 0x022044e4 (declaration copied from src/ov002/unk_ov002_02200680.cpp)
class Unk_ov002_022044e4 : public Unk_020d8c7c {
public:
    Unk_ov002_022044e4();
    virtual ~Unk_ov002_022044e4();
    static void *operator new(unsigned long size);
    static void operator delete(void *p);

    virtual BOOL vfunc_04();
    virtual void vfunc_08(s32 a);
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_14(s32 a);
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_1c();
    virtual BOOL vfunc_20();
    virtual BOOL vfunc_48();
    virtual BOOL vfunc_4c();
    virtual BOOL vfunc_50();
    virtual BOOL vfunc_54();
    virtual BOOL vfunc_58();
    virtual BOOL vfunc_5c();

    void func_ov002_02200840(s32 a, s32 b, s32 c);
    void func_ov002_02200850(s32 v);
    void func_ov002_0220085c(s32 a, s32 mode);
    void func_ov002_02200874(s32 a, s32 mode);
    void func_ov002_0220088c(s32 a, s32 b, s32 mode, s32 dist);
    void func_ov002_022008a8(s32 a, s32 b, s32 mode, s32 dist);
    void func_ov002_022008c4(s32 a, s32 b, s32 mode, s32 dist);
    void func_ov002_022008e0(s32 a, s32 b, s32 mode, s32 dist);
    BOOL func_ov002_022008fc(s32 a);
    BOOL func_ov002_02200908(s32 a);
    s32 func_ov002_02200914();
    s32 func_ov002_02200920();
    void func_ov002_02200970(s32 a, s32 b, s32 c);
    void func_ov002_02200980();
    BOOL func_ov002_02200998();
    BOOL func_ov002_022009a4();
    BOOL func_ov002_022009b0();
    BOOL func_ov002_022009bc();
    u32 func_ov002_022009c8();
    BOOL func_ov002_022009d4();
    BOOL func_ov002_02200a14(s32 a);
    void func_ov002_02200a50(u8 v);
    void func_ov002_02200a58(u8 v);
    void func_ov002_02200a60(u8 v);

    /* 0x50 */ u8 unk_50[0x14];
    /* 0x64 */ u32 unk_64;
    /* 0x68 */ u32 unk_68;
    /* 0x6c */ Unk_ov002_022044e4 *unk_6c;
    /* 0x70 */ u8 unk_70[0x1c];
    /* 0x8c */ u8 unk_8c;
    /* 0x8d */ u8 unk_8d;
    /* 0x8e */ u8 unk_8e;
    /* 0x8f */ u8 unk_8f;
    /* 0x90 */ u8 unk_90;
};

// stack helper objects (ctor/dtor are plain calls into main)
struct Unk_ov119_A {
    u32 pad[7];
    Unk_ov119_A() { _ZN12Unk_020dd38cC2Ev(this); }
    ~Unk_ov119_A() { _ZN12Unk_020dd38cD1Ev(this); }
};
struct Unk_ov119_B {
    u32 pad[7];
    Unk_ov119_B() { _ZN12Unk_020e1c64C1Ev(this); }
    ~Unk_ov119_B() { _ZN12Unk_020e1c64D1Ev(this); }
};
struct Unk_ov119_C {
    u32 pad[6];
    Unk_ov119_C() { _ZN12Unk_020dd374C2Ev(this); }
    ~Unk_ov119_C() { _ZN12Unk_020dd374D1Ev(this); }
};

class Unk_ov119_02295840;
typedef void (Unk_ov119_02295840::*Unk_ov119_02295840_Fn)();

#define U3D0 ((u8 *)this + 0x3d0)
extern "C" {
void _ZN18Unk_ov119_0229584019func_ov119_02294af0Ev();
extern void *data_ov119_02295608[2];
void _ZN18Unk_ov119_0229584019func_ov119_02294a44Ev();
extern void *data_ov119_022955a8[2];
void _ZN18Unk_ov119_0229584019func_ov119_022949bcEv();
extern void *data_ov119_022955e8[2];
void _ZN18Unk_ov119_0229584019func_ov119_02294990Ev();
extern void *data_ov119_022955f0[2];
void _ZN18Unk_ov119_0229584019func_ov119_02294958Ev();
extern void *data_ov119_022955a0[2];
void _ZN18Unk_ov119_0229584019func_ov119_02294930Ev();
extern void *data_ov119_022955b0[2];
void _ZN18Unk_ov119_0229584019func_ov119_02294894Ev();
extern void *data_ov119_02295610[2];
void _ZN18Unk_ov119_0229584019func_ov119_02294840Ev();
extern void *data_ov119_02295580[2];
void _ZN18Unk_ov119_0229584019func_ov119_02294804Ev();
extern void *data_ov119_022955c8[2];
void _ZN18Unk_ov119_0229584019func_ov119_022947a4Ev();
extern void *data_ov119_022955c0[2];
void _ZN18Unk_ov119_0229584019func_ov119_02294770Ev();
extern void *data_ov119_02295618[2];
void _ZN18Unk_ov119_0229584019func_ov119_02294734Ev();
extern void *data_ov119_02295600[2];
void _ZN18Unk_ov119_0229584019func_ov119_02294718Ev();
extern void *data_ov119_02295598[2];
void _ZN18Unk_ov119_0229584019func_ov119_022946f4Ev();
extern void *data_ov119_022955f8[2];
void _ZN18Unk_ov119_0229584019func_ov119_022946b4Ev();
extern void *data_ov119_022955d8[2];
void _ZN18Unk_ov119_0229584019func_ov119_02294670Ev();
extern void *data_ov119_02295590[2];
void _ZN18Unk_ov119_0229584019func_ov119_02294634Ev();
extern void *data_ov119_022955b8[2];
void _ZN18Unk_ov119_0229584019func_ov119_02294608Ev();
extern void *data_ov119_022955e0[2];
void _ZN18Unk_ov119_0229584019func_ov119_02294f4cEv();
extern void *data_ov119_02295640[2];
void _ZN18Unk_ov119_0229584019func_ov119_02294ee8Ev();
extern void *data_ov119_02295638[2];
void _ZN18Unk_ov119_0229584019func_ov119_02294e88Ev();
extern void *data_ov119_02295630[2];
void _ZN18Unk_ov119_0229584019func_ov119_02294e3cEv();
extern void *data_ov119_02295628[2];
void _ZN18Unk_ov119_0229584019func_ov119_02294de8Ev();
extern void *data_ov119_02295620[2];
}
#define A0V (*(volatile u8 *)&unk_a0)
#define E9V (*(volatile u8 *)&unk_9e)
#define B1V (*(volatile u8 *)&unk_b1)

// Vtable 0x02295840, size 0x1bcc
class Unk_ov119_02295840 : public Unk_ov002_022044e4 {
public:
    Unk_ov119_02295840() : unk_dc(), unk_3dc(), unk_89c(), unk_970(), unk_1a58(), unk_1ac4() {}

    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_24();
    virtual BOOL vfunc_4c();
    virtual BOOL vfunc_50();
    virtual BOOL vfunc_54();
    virtual BOOL vfunc_58();
    virtual BOOL vfunc_5c();

    void func_ov119_02292dc0(u32 mask);
    void func_ov119_02292dd0(u32 mask);
    BOOL func_ov119_02292de0(u32 mask);
    void func_ov119_02292df4();
    void func_ov119_02292e2c();
    void func_ov119_02292e5c();
    void func_ov119_02292ea4();
    void func_ov119_02292ecc(u32 x);
    void func_ov119_02292f20();
    u8 func_ov119_02292f8c(u32 idx);
    void func_ov119_02292f98();
    u32 func_ov119_02293010(s32 idx);
    void func_ov119_0229305c(u8 s);
    void func_ov119_022930d4();
    void func_ov119_02293124();
    void func_ov119_022932ac(u16 *p, u32 v);
    void func_ov119_02293328();
    void func_ov119_022933d8();
    void func_ov119_0229348c();
    BOOL func_ov119_022935fc(void *p);

    s32 func_ov119_02293640();
    BOOL func_ov119_02293674();
    void func_ov119_0229371c();
    BOOL func_ov119_02293744();
    void func_ov119_02293784();
    u32 func_ov119_022937d0();
    void *func_ov119_022937e8();
    void *func_ov119_02293810();
    BOOL func_ov119_02293828();
    void func_ov119_02293844(s32 x);
    u16 func_ov119_02293924(s32 c1, s32 c2, s32 t, s32 n);
    void func_ov119_022939cc();
    u8 func_ov119_02293ab8(s32 x, s32 y);
    BOOL func_ov119_02293b48();
    void func_ov119_02293c08(s32 x);
    void func_ov119_02293c44();
    void func_ov119_02293d4c();
    void func_ov119_02293d9c(s32 x);
    void func_ov119_02293dc8();
    void func_ov119_02293e10();
    void func_ov119_02293e5c();
    void func_ov119_02293ed0();

    BOOL func_ov119_02293f68(u32 keys);
    void func_ov119_02294188();
    void func_ov119_022941a8();
    void func_ov119_022941c8();
    void func_ov119_022941e8();
    void func_ov119_02294244();
    void func_ov119_022942a4();
    void func_ov119_022942f0();
    void func_ov119_02294364();
    s32 func_ov119_02294388();
    s32 func_ov119_022943c0();
    void func_ov119_022943fc();
    void func_ov119_0229448c(u32 id);
    void func_ov119_022944cc();
    void *func_ov119_02294504();
    void func_ov119_0229453c();
    void func_ov119_02294568(u8 v);
    void func_ov119_022945a4();
    void func_ov119_022945d4();
    void func_ov119_022945f0();
    void func_ov119_02294608();
    void func_ov119_02294634();
    void func_ov119_02294670();
    void func_ov119_022946b4();
    void func_ov119_022946f4();
    void func_ov119_02294718();
    void func_ov119_02294734();
    void func_ov119_02294770();
    void func_ov119_022947a4();
    void func_ov119_02294804();
    void func_ov119_02294840();

    void func_ov119_02294894();
    void func_ov119_02294930();
    void func_ov119_02294958();
    void func_ov119_02294990();
    void func_ov119_022949bc();
    void func_ov119_02294a44();
    void func_ov119_02294af0();
    void func_ov119_02294b54();
    void func_ov119_02294bcc();
    void func_ov119_02294c90();
    void func_ov119_02294c98();
    void func_ov119_02294cb4();
    void func_ov119_02294ccc();
    void func_ov119_02294d00();
    void func_ov119_02294d3c();
    void func_ov119_02294de8();
    void func_ov119_02294e3c();
    void func_ov119_02294e88();
    void func_ov119_02294ee8();
    void func_ov119_02294f4c();
    void func_ov119_02294fa8();
    BOOL func_ov119_02294fbc(s32 idx);
    BOOL func_ov119_02294ffc();
    void func_ov119_02295110();

    /* 0x091 */ u8 unk_91[3];
    /* 0x094 */ u32 unk_94;
    /* 0x098 */ u16 unk_98;
    /* 0x09a */ s16 unk_9a;
    /* 0x09c */ u8 unk_9c;
    /* 0x09d */ u8 unk_9d;
    /* 0x09e */ u8 unk_9e;
    /* 0x09f */ u8 unk_9f;
    /* 0x0a0 */ u8 unk_a0;
    /* 0x0a1 */ u8 unk_a1[12];
    /* 0x0ad */ u8 unk_ad;
    /* 0x0ae */ u8 unk_ae;
    /* 0x0af */ u8 unk_af;
    /* 0x0b0 */ u8 unk_b0;
    /* 0x0b1 */ u8 unk_b1;
    /* 0x0b2 */ u8 unk_b2;
    /* 0x0b3 */ u8 unk_b3;
    /* 0x0b4 */ u8 unk_b4;
    /* 0x0b5 */ u8 unk_b5[3];
    /* 0x0b8 */ s32 unk_b8;
    /* 0x0bc */ u8 unk_bc[0x20];
    /* 0x0dc */ Unk_ov002_02204558 unk_dc;
    /* 0x3dc */ Unk_020e0488 unk_3dc[0x13];
    /* 0x89c */ Unk_020e0574 unk_89c;
    /* 0x970 */ Unk_ov002_02204614 unk_970;
    /* 0x9d4 */ u16 unk_9d4[0x800];
    /* 0x19d4 */ void *unk_19d4;
    /* 0x19d8 */ u16 unk_19d8[16];
    /* 0x19f8 */ u16 unk_19f8[16];
    /* 0x1a18 */ u16 unk_1a18[16];
    /* 0x1a38 */ u16 unk_1a38[16];
    /* 0x1a58 */ Unk_020e45f8 unk_1a58[3];
    /* 0x1ac4 */ Unk_ov002_022040ec unk_1ac4;
};

static inline BOOL Unk_ov119_02294a44_Both() {
    if (data_021f4770 != 0 && data_021f4774 != 0) {
        return TRUE;
    }
    return FALSE;
}

extern "C" Unk_ov119_02295840 *func_ov119_022954e8() { return new Unk_ov119_02295840(); }

BOOL Unk_ov119_02295840::vfunc_00() {
    func_ov119_02294d3c();
    func_ov002_02200a50(0);
    func_ov002_02200a60(1);
    return TRUE;
}

BOOL Unk_ov119_02295840::vfunc_0c() {
    func_ov090_02291d2c(func_020ed174(this));
    func_ov119_02294d00();
    return TRUE;
}

BOOL Unk_ov119_02295840::vfunc_24() {
    u8 *p = (u8 *)unk_94 + 0x60;
    s32 i;
    if (!func_ov119_02292de0(1)) {
        return TRUE;
    }
    func_ov002_02201b28(&unk_dc);
    if (func_0206ef00()) {
        U970_A->func_ov002_02202844();
    }
    func_02087e70(1, data_ov119_02295660, 0x80, (s32)p, -1, 2, 0x1000, 0x1000, 0, -1, 0, 0);
    for (i = 0; i < 6; i++) {
        func_02087e70(1, data_ov119_02295648[i], 0x80, (s32)p, i == unk_9d ? 5 : 4, 2, 0x1000, 0x1000, 0, -1, 0, 0);
    }
    func_02087e70(1, data_ov119_02295778, 0x80, (s32)p, unk_b0, 2, 0x1000, 0x1000, 0, -1, 0, 0);
    s32 x = 0x80;
    switch (unk_9c) {
    case 4:
        for (i = 0; i < 12; i++) {
            data_ov119_02295588.unk_04 = (data_ov119_02295588.unk_04 & 0xfffffc00) | (u16)(unk_a1[i] * 2 + 0x1a0) & 0x3ff;
            func_02088730(1, &data_ov119_02295588, x, (s32)p, -1, 2, 0);
            x += 14;
        }
        func_02087e70(1, data_ov119_022957d8, 0x80, (s32)p, -1, 2, 0x1000, 0x1000, 0, -1, 0, 0);
        break;
    case 5:
        break;
    default:
        if (unk_9a != -1) {
            func_02087e70(1, data_ov119_022957a8, x, (s32)(p + unk_9a * 16 - 16), -1, 2, 0x1000, 0x1000, 0, -1, 0, 0);
        }
        break;
    }
    return TRUE;
}// Declarations for data defined further down (definition order sets the data layout)
extern "C" void *data_ov119_022955e0[2];
extern "C" void *data_ov119_022955e8[2];
extern "C" void *data_ov119_022955b0[2];
extern "C" u8 *data_ov119_02295648[6];
extern "C" void *data_ov119_022955f8[2];
extern "C" u32 data_ov119_02295660[8];
extern "C" u32 data_ov119_022957d8[24];
extern "C" void *data_ov119_022955a0[2];
extern "C" void *data_ov119_02295580[2];
extern "C" void *data_ov119_02295600[2];
extern "C" u32 data_ov119_02295680[10];
struct Unk_ov119_SceneEntry {
    Unk_ov119_02295840 *(*create)();
    u16 a;
    u16 b;
};
extern "C" Unk_ov119_02295840 *func_ov119_022954e8();
extern "C" Unk_ov119_SceneEntry data_ov119_022955d0;
extern "C" void *data_ov119_02295638[2];
extern "C" void *data_ov119_02295630[2];
extern "C" u32 data_ov119_022956d0[10];
extern "C" void *data_ov119_02295620[2];
extern "C" void *data_ov119_02295618[2];
extern "C" void *data_ov119_02295610[2];
extern "C" u32 data_ov119_022956f8[10];
extern "C" u32 data_ov119_02295720[10];
extern "C" void *data_ov119_02295608[2];
extern "C" void *data_ov119_02295590[2];
extern "C" void *data_ov119_022955d8[2];
extern "C" void *data_ov119_02295640[2];
extern "C" u32 data_ov119_022956a8[10];
extern "C" void *data_ov119_02295628[2];
extern "C" void *data_ov119_022955b8[2];
extern "C" u32 data_ov119_02295748[12];
extern "C" Unk_ov119_02295588 data_ov119_02295588;
extern "C" void *data_ov119_022955a8[2];
extern "C" void *data_ov119_02295598[2];
extern "C" void *data_ov119_022955c0[2];
extern "C" u32 data_ov119_02295778[12];
extern "C" void *data_ov119_022955f0[2];
extern "C" void *data_ov119_022955c8[2];
extern "C" u32 data_ov119_022957a8[12];

extern "C" void *data_ov119_022955e0[2] = {(void *)_ZN18Unk_ov119_0229584019func_ov119_02294608Ev, 0};

extern "C" void *data_ov119_022955e8[2] = {(void *)_ZN18Unk_ov119_0229584019func_ov119_022949bcEv, 0};

extern "C" void *data_ov119_022955b0[2] = {(void *)_ZN18Unk_ov119_0229584019func_ov119_02294930Ev, 0};

extern "C" u8 *data_ov119_02295648[6] = {(u8 *)data_ov119_02295720, (u8 *)data_ov119_02295680, (u8 *)data_ov119_022956a8, (u8 *)data_ov119_022956d0, (u8 *)data_ov119_022956f8, (u8 *)data_ov119_02295748};

extern "C" void *data_ov119_022955f8[2] = {(void *)_ZN18Unk_ov119_0229584019func_ov119_022946f4Ev, 0};

extern "C" u32 data_ov119_02295660[8] = {0x81b440bb, 0x00004560, 0x81d440bb, 0x00004564, 0x81f440bb, 0x00004568, 0x001480bb, 0xffff456c};

extern "C" u32 data_ov119_022957d8[24] = {0x00314000, 0x0000a1ba, 0x00234000, 0x0000a1ba, 0x00154000, 0x0000a1ba, 0x00074000, 0x0000a1ba, 0x01f94000, 0x0000a1b8, 0x01eb4000, 0x0000a1b8, 0x01dd4000, 0x0000a1b8, 0x01cf4000, 0x0000a1b8, 0x01c14000, 0x0000a1b6, 0x01b34000, 0x0000a1b6, 0x01a54000, 0x0000a1b6, 0x01974000, 0xffffa1b6};

extern "C" void *data_ov119_022955a0[2] = {(void *)_ZN18Unk_ov119_0229584019func_ov119_02294958Ev, 0};

BOOL Unk_ov119_02295840::vfunc_4c() {
    static Unk_ov119_02295840_Fn tbl[5] = {
        *(Unk_ov119_02295840_Fn *)data_ov119_02295640, *(Unk_ov119_02295840_Fn *)data_ov119_02295638,
        *(Unk_ov119_02295840_Fn *)data_ov119_02295630, *(Unk_ov119_02295840_Fn *)data_ov119_02295628,
        *(Unk_ov119_02295840_Fn *)data_ov119_02295620};
    func_ov119_02294ccc();
    (this->*tbl[unk_8c])();
    func_ov119_02294cb4();
    return TRUE;
}
extern "C" void *data_ov119_02295580[2] = {(void *)_ZN18Unk_ov119_0229584019func_ov119_02294840Ev, 0};

extern "C" void *data_ov119_02295600[2] = {(void *)_ZN18Unk_ov119_0229584019func_ov119_02294734Ev, 0};

extern "C" u32 data_ov119_02295680[10] = {0x404d00e7, 0x000044c2, 0x804240e5, 0x0000450b, 0x006280e5, 0x0000450f, 0x404240f5, 0x0000454b, 0x006200f5, 0xffff454f};

extern "C" Unk_ov119_SceneEntry data_ov119_022955d0 = {func_ov119_022954e8, 0xa2, 0xa6};

extern "C" void *data_ov119_02295638[2] = {(void *)_ZN18Unk_ov119_0229584019func_ov119_02294ee8Ev, 0};

extern "C" void *data_ov119_02295630[2] = {(void *)_ZN18Unk_ov119_0229584019func_ov119_02294e88Ev, 0};

extern "C" u32 data_ov119_022956d0[10] = {0x404d0007, 0x000044c6, 0x80424005, 0x0000450b, 0x00628005, 0x0000450f, 0x40424015, 0x0000454b, 0x00620015, 0xffff454f};

extern "C" void *data_ov119_02295620[2] = {(void *)_ZN18Unk_ov119_0229584019func_ov119_02294de8Ev, 0};

extern "C" void *data_ov119_02295618[2] = {(void *)_ZN18Unk_ov119_0229584019func_ov119_02294770Ev, 0};

extern "C" void *data_ov119_02295610[2] = {(void *)_ZN18Unk_ov119_0229584019func_ov119_02294894Ev, 0};

extern "C" u32 data_ov119_022956f8[10] = {0x404d0017, 0x000040c8, 0x80424015, 0x0000450b, 0x00628015, 0x0000450f, 0x40424025, 0x0000454b, 0x00620025, 0xffff454f};

extern "C" u32 data_ov119_02295720[10] = {0x404d00d7, 0x000054c0, 0x804240d5, 0x0000550b, 0x006280d5, 0x0000550f, 0x404240e5, 0x0000454b, 0x006200e5, 0xffff454f};

extern "C" void *data_ov119_02295608[2] = {(void *)_ZN18Unk_ov119_0229584019func_ov119_02294af0Ev, 0};

void Unk_ov119_02295840::func_ov119_02295110() {
    static Unk_ov119_02295840_Fn tbl[18] = {
        *(Unk_ov119_02295840_Fn *)data_ov119_02295608, *(Unk_ov119_02295840_Fn *)data_ov119_022955a8,
        *(Unk_ov119_02295840_Fn *)data_ov119_022955e8, *(Unk_ov119_02295840_Fn *)data_ov119_022955f0,
        *(Unk_ov119_02295840_Fn *)data_ov119_022955a0, *(Unk_ov119_02295840_Fn *)data_ov119_022955b0,
        *(Unk_ov119_02295840_Fn *)data_ov119_02295610, *(Unk_ov119_02295840_Fn *)data_ov119_02295580,
        *(Unk_ov119_02295840_Fn *)data_ov119_022955c8, *(Unk_ov119_02295840_Fn *)data_ov119_022955c0,
        *(Unk_ov119_02295840_Fn *)data_ov119_02295618, *(Unk_ov119_02295840_Fn *)data_ov119_02295600,
        *(Unk_ov119_02295840_Fn *)data_ov119_02295598, *(Unk_ov119_02295840_Fn *)data_ov119_022955f8,
        *(Unk_ov119_02295840_Fn *)data_ov119_022955d8, *(Unk_ov119_02295840_Fn *)data_ov119_02295590,
        *(Unk_ov119_02295840_Fn *)data_ov119_022955b8, *(Unk_ov119_02295840_Fn *)data_ov119_022955e0};
    (this->*tbl[unk_8d])();
}

BOOL Unk_ov119_02295840::vfunc_50() {
    if (func_ov119_02294ffc()) {
        return TRUE;
    }
    func_ov119_02294c98();
    func_ov119_02295110();
    func_ov119_02294c90();
    return TRUE;
}

BOOL Unk_ov119_02295840::vfunc_54() { return TRUE; }

BOOL Unk_ov119_02295840::vfunc_58() { return TRUE; }

BOOL Unk_ov119_02295840::vfunc_5c() {
    func_020ed188(this);
    return TRUE;
}

BOOL Unk_ov119_02295840::func_ov119_02294ffc() {
    func_0206e63c();
    if (func_0206e61c()) {
        switch (unk_8d) {
        case 0:
        case 2:
        case 4:
        case 5:
        case 8:
        case 14:
        case 15:
            return func_ov119_02294fbc(7);
        }
    }
    if (unk_8d != 0 && unk_8d != 2) {
        return FALSE;
    }
    s32 r5 = -1;
    if (func_0206ef0c()) {
        r5 = func_ov090_02291aa0();
    } else {
        u32 k = data_021f47d8[1];
        if (k & 2) {
            r5 = 7;
        } else if (k & 0x800) {
            r5 = 0;
        } else if (k & 0x400) {
            r5 = 5;
        } else if (k & 4) {
            r5 = 4;
        }
    }
    return func_ov119_02294fbc(r5);
}

BOOL Unk_ov119_02295840::func_ov119_02294fbc(s32 idx) {
    void *o = func_020ed174(this);
    if (idx != -1 && idx != 6) {
        func_ov090_02291d8c(o, (u8)idx);
        unk_8c = 3;
        func_ov002_02200a60(1);
        return TRUE;
    }
    return FALSE;
}

void Unk_ov119_02295840::func_ov119_02294fa8() {
    func_ov090_02291a88(func_020ed174(this));
}

void Unk_ov119_02295840::func_ov119_02294f4c() {
    func_ov119_02294c5c();
    func_ov119_02294bcc();
    func_ov119_02294b54();
    func_ov119_022944cc();
    func_ov002_022020fc(&unk_dc);
    u32 v;
    if (func_0206e5dc()) {
        v = func_0206ed38(func_0206e5bc());
    } else {
        v = 0;
    }
    _ZN18Unk_ov119_0229584019func_ov119_0229305cEh(this, func_ov119_02293010(v));
    func_ov002_02200a50(1);
    func_ov119_02294ee8();
}

void Unk_ov119_02295840::func_ov119_02294ee8() {
    func_ov002_022008e0(0xa, 0, 0, 0x30);
    func_020020b8(6);
    func_ov002_02200840(6, 0, 0);
    func_020020b8(4);
    func_ov002_02200840(4, 0, 0);
    func_ov119_02292dd0(1);
    unk_94 = func_ov002_02200920();
    func_ov119_02292dd0(8);
    func_ov002_02200a50(2);
}

void Unk_ov119_02295840::func_ov119_02294e88() {
    if (func_ov119_02292de0(8)) {
        func_ov119_02292dc0(8);
        func_ov119_02293328();
    }
    if (func_ov002_02200908(0)) {
        func_ov002_02200a60(2);
        func_ov119_022945a4();
    }
    func_ov002_02200840(6, 0, 0);
    func_ov002_02200840(4, 0, 0);
    unk_94 = func_ov002_02200920();
}

void Unk_ov119_02295840::func_ov119_02294e3c() {
    func_ov119_02294364();
    func_ov002_022008c4(0xa, 0, 0, 0x30);
    func_ov002_02200840(6, 0, 0);
    func_ov002_02200840(4, 0, 0);
    func_ov002_02200a50(4);
    unk_94 = func_ov002_02200920();
}

void Unk_ov119_02295840::func_ov119_02294de8() {
    if (func_ov002_022008fc(0)) {
        func_020021a0(6);
        func_020021a0(4);
        func_ov119_02292dc0(1);
        func_ov002_02200a60(5);
    } else {
        func_ov002_02200840(6, 0, 0);
        func_ov002_02200840(4, 0, 0);
        unk_94 = func_ov002_02200920();
    }
}

void Unk_ov119_02295840::func_ov119_02294d3c() {
    if (!func_ov119_02293828()) {
        if (func_ov119_02293744()) {
            func_ov119_0229371c();
            func_ov090_02291964(func_020ed174(this));
        }
    } else {
        if (func_ov119_02293674()) {
            func_ov090_02291964(func_020ed174(this));
        }
    }
    unk_9e = 0;
    unk_98 = 0;
    unk_a0 = 8;
    unk_19d4 = unk_9d4;
    unk_9a = -1;
    unk_9c = 0xff;
    unk_af = 0;
    unk_b0 = 7;
    unk_b8 = 5;
    func_ov119_02292f98();
    func_ov002_02202310(&unk_dc, 3, 1, "menu/friend/c_bg.bsc");
    func_ov119_02293784();
}

void Unk_ov119_02295840::func_ov119_02294d00() {
    func_ov002_02201b04(&unk_dc);
    func_ov119_0229453c();
    unk_1a58[0].func_020b87d0();
    unk_1a58[1].func_020b87d0();
    unk_1a58[2].func_020b87d0();
}

void Unk_ov119_02295840::func_ov119_02294ccc() {
    func_ov119_0229453c();
    unk_1a58[0].func_020b87d0();
    unk_1a58[1].func_020b87d0();
    unk_1a58[2].func_020b87d0();
}

void Unk_ov119_02295840::func_ov119_02294cb4() {
    func_ov119_022939cc();
    func_ov002_02201b58(&unk_dc);
}

void Unk_ov119_02295840::func_ov119_02294c98() {
    func_ov119_02294ccc();
    unk_970.vfunc_0c();
}

void Unk_ov119_02295840::func_ov119_02294c90() { func_ov119_02294cb4(); }

extern "C" void func_ov119_02294c5c() {
    func_02002398(6, 2);
    func_02002398(4, 2);
    func_0200226c(6, 0, 0, 0);
    func_0200226c(4, 0, 0, 0);
}

void Unk_ov119_02295840::func_ov119_02294bcc() {
    u32 r4 = data_021f482c;
    func_020026c4("menu/friend/bg0.bpl", r4, 6, 1, 1, 5);
    func_020641b4("menu/friend/bg2.bpl", unk_19f8, 0x20);
    func_0200261c("menu/friend/bg0.bch", r4, 6, 0x11, 0x11, 0x89);
    func_02002654("menu/friend/a_bg.bsc", r4, 6);
    func_020641b4("menu/friend/b_bg.bsc", unk_9d4, 0x800);
    func_020641b4("menu/friend/d_bg.bsc", unk_9d4 + 0x400, 0x800);
}

void Unk_ov119_02295840::func_ov119_02294b54() {
    u32 r4 = data_021f482c;
    func_0200261c("menu/friend/obj0.bch", r4, 8, 0xc0, 0xc0, 0x15d);
    func_0200261c("menu/friend/obj1.bch", r4, 8, 0x1a0, 0x1a0, 0x1df);
    func_020026c4("menu/friend/obj.bpl", r4, 8, 4, 4, 10);
    func_020641b4("menu/friend/obj1.bpl", unk_19d8, 0x20);
}

void Unk_ov119_02295840::func_ov119_02294af0() {
    if (func_ov002_02200a14(1)) {
        func_ov119_022945d4();
    } else if (Unk_ov119_02294a44_Both()) {
        u32 r = func_ov119_02293ab8(data_021ef5f0, data_021ef5ec);
        if (r != 0x17) {
            unk_a0 = r;
            func_ov119_02293b48();
        }
    }
}

void Unk_ov119_02295840::func_ov119_02294a44() {
    if (func_0206e61c()) {
        func_ov119_02292ea4();
    } else if (func_ov002_02200a14(1)) {
        func_ov119_022941e8();
        func_ov002_02200a58(6);
    } else if (Unk_ov119_02294a44_Both()) {
        s32 r5 = func_ov002_022014c0(&unk_dc, data_021ef5f0, data_021ef5ec);
        if (r5 >= 0) {
            if (!(func_ov119_02292de0(0x10) && r5 == 0)) {
                func_ov002_02201aa0(&unk_dc, r5, 1);
                unk_ad = func_ov119_02292f8c(r5);
                func_ov002_02200a58(0xb);
            }
        }
    }
}

void Unk_ov119_02295840::func_ov119_022949bc() {
    if (func_ov002_022009d4()) {
        func_ov119_022945f0();
    } else {
        u32 r = func_ov002_022009c8();
        if (func_ov119_02293f68(r)) {
            func_ov119_022942f0();
        } else {
            u32 k = data_021f47d8[1];
            if (k & 1) {
                func_ov119_022941c8();
            } else if (k & 0x100) {
                func_ov119_02294fbc(func_ov090_02291a38(6));
            } else if (k & 0x200) {
                func_ov119_02294fbc(func_ov090_02291a58(6));
            }
        }
    }
}

void Unk_ov119_02295840::func_ov119_02294990() {
    if (!U970_A->func_ov002_022028f0()) {
        func_ov002_02200a58(unk_9f);
        func_ov119_02295110();
    }
}

void Unk_ov119_02295840::func_ov119_02294958() {
    if (U970_C->func_0208d4fc()) {
        s32 r = func_ov119_02293b48();
        switch (r) {
        case 1:
            break;
        case 2:
            func_ov119_022941a8();
            break;
        default:
            func_ov119_022941a8();
            break;
        }
    }
}

void Unk_ov119_02295840::func_ov119_02294930() {
    if (U970_C->func_0208d4fc()) {
        func_ov119_02294188();
        func_ov002_02200a58(2);
    }
}

void Unk_ov119_02295840::func_ov119_02294894() {
    if (func_0206e61c()) {
        func_ov119_02292ea4();
    } else if (func_ov002_022009d4()) {
        func_ov119_02294364();
        func_ov002_02200a58(1);
    } else {
        u32 r4 = func_ov002_022009c8();
        u8 f = func_ov119_02292de0(0x10);
        if (func_ov002_022019d0(&unk_dc, r4, &unk_ae, f)) {
            func_ov119_022942a4();
        } else {
            u32 k = data_021f47d8[1];
            if (k & 1) {
                U970_B->func_ov002_02202b68();
                func_ov002_02200a58(7);
            } else if (k & 2) {
                func_ov119_02294244();
            }
        }
    }
}

void Unk_ov119_02295840::func_ov119_02294840() {
    if (func_0206e61c()) {
        func_ov119_02292ea4();
    } else if (U970_C->func_0208d4fc()) {
        func_ov002_02201aa0(&unk_dc, unk_ae, 1);
        unk_ad = func_ov119_02292f8c(unk_ae);
        func_ov002_02200a58(0xb);
    }
}

void Unk_ov119_02295840::func_ov119_02294804() {
    if (B1V != 0) {
        B1V = B1V - 1;
    } else {
        func_ov119_02294364();
        if (A0V == 0x16) {
            func_ov119_02293ed0();
        } else {
            func_ov119_02293e5c();
        }
    }
}

void Unk_ov119_02295840::func_ov119_022947a4() {
    if (B1V != 0) {
        B1V = 0;
        func_ov119_0229371c();
        func_ov090_02291964(func_020ed174(this));
        if (func_ov119_02293828()) {
            if (!func_020e9bb0(unk_b4)) {
                func_ov002_02200a58(0x11);
            }
        }
    } else {
        func_ov119_02292dd0(2);
        func_ov119_022930d4();
        func_ov119_022945a4();
    }
}

void Unk_ov119_02295840::func_ov119_02294770() {
    if (unk_dc.func_ov002_022017b4()) {
        if (func_0206ef00()) {
            func_ov119_022941e8();
            func_ov002_02200a58(6);
        } else {
            func_ov002_02200a58(1);
        }
    }
}

void Unk_ov119_02295840::func_ov119_02294734() {
    if (func_ov002_02201a28(&unk_dc)) {
        func_ov002_02202064(&unk_dc, 0);
        if (U970_C->func_0208d534()) {
            func_ov119_02294364();
        }
        func_ov002_02200a58(0xc);
    }
}

void Unk_ov119_02295840::func_ov119_02294718() {
    if (unk_dc.func_ov002_022017a4()) {
        func_ov119_02292f20();
    }
}

void Unk_ov119_02295840::func_ov119_022946f4() {
    if (unk_1ac4.func_ov002_02204234(1)) {
        func_ov119_022945a4();
    }
}

void Unk_ov119_02295840::func_ov119_022946b4() {
    if (unk_b8 > 0) {
        unk_b8 = unk_b8 - 1;
        func_ov119_02293844(unk_b8);
    } else {
        func_ov119_0229305c(unk_9d);
        func_ov002_02200a58(0xf);
    }
}

void Unk_ov119_02295840::func_ov119_02294670() {
    if (unk_b8 < 5) {
        unk_b8 = unk_b8 + 1;
        func_ov119_02293844(unk_b8);
    } else if (func_0206ef0c()) {
        func_ov119_022945f0();
    } else {
        func_ov119_022941a8();
    }
}

void Unk_ov119_02295840::func_ov119_02294634() {
    u8 *base = (u8 *)func_ov119_02293810();
    void *r = func_02076e1c(func_02076cf0(base + unk_b4 * 0x1c));
    if (func_020e9c78(unk_b4, r)) {
        func_ov119_02293c08(unk_b4);
    }
}

void Unk_ov119_02295840::func_ov119_02294608() {
    if (func_020e9bb0(unk_b4)) {
        func_ov119_02292dd0(2);
        func_ov119_022930d4();
        func_ov119_022945a4();
    }
}

void Unk_ov119_02295840::func_ov119_022945f0() {
    func_ov119_02294364();
    func_ov002_02200a58(0);
}

void Unk_ov119_02295840::func_ov119_022945d4() {
    func_ov119_022943fc();
    func_ov002_02200980();
    func_ov002_02200a58(2);
}

void Unk_ov119_02295840::func_ov119_022945a4() {
    unk_9a = -1;
    func_ov119_02292dd0(4);
    if (func_0206ef0c()) {
        func_ov119_022945f0();
    } else {
        func_ov119_022945d4();
    }
}

void Unk_ov119_02295840::func_ov119_02294568(u8 v) {
    volatile u8 buf[1];
    buf[0] = data_021edb68;
    buf[0] = v;
    unk_1ac4.func_ov002_02204394((u8 *)buf, 1, 0);
    func_ov002_02200a58(0xd);
    func_ov119_02294364();
}

void Unk_ov119_02295840::func_ov119_0229453c() {
    s32 i;
    i = 0;
    E9V = i;
    for (i = 0; i < 0x13; i++) {
        func_0206fc44(&unk_3dc[i]);
    }
}

void *Unk_ov119_02295840::func_ov119_02294504() {
    if (E9V >= 0x13) {
        return &unk_3dc[0x12];
    }
    E9V = E9V + 1;
    return &unk_3dc[E9V - 1];
}

void Unk_ov119_02295840::func_ov119_022944cc() {
    void *e = func_ov119_02294504();
    func_0206f9fc(e, 0xd6);
    func_0206fb9c(e, 8, 0xca, 6, 0xf, 0, 0);
    func_0206fab4(e, 1, 0);
}

void Unk_ov119_02295840::func_ov119_0229448c(u32 id) {
    void *e = func_ov119_02294504();
    func_0206f9fc(e, id);
    func_0206fb9c(e, 8, 0x160, 0xd, 0xf, 0, 0);
    func_0206fab4(e, 1, 0);
}

void Unk_ov119_02295840::func_ov119_022943fc() {
    u32 c = A0V;
    if (c <= 7) {
        s32 n = unk_af;
        if (n == 0) {
            A0V = 8;
        } else if (n <= (s32)c) {
            A0V = n - 1;
        }
    }
    s32 a = func_ov119_022943c0();
    s32 b = func_ov119_02294388();
    U970_A->func_ov002_02202a40(a, b);
    u32 v = A0V;
    if (v <= 7) {
        U970_B->func_ov002_02202d00(7);
    } else if (v >= 0xe && v <= 0x15) {
        U970_B->func_ov002_02202d00(0xd);
    } else {
        U970_B->func_ov002_02202d00(1);
    }
    func_ov119_02294188();
}

s32 Unk_ov119_02295840::func_ov119_022943c0() {
    u32 v = A0V;
    if (v <= 7) {
        return 0x20;
    }
    if (v >= 0xe && v <= 0x15) {
        return func_ov090_02291a78(v - 0xe);
    }
    if (v >= 8 && v <= 0xd) {
        return 0xd6;
    }
    if (v == 0x16) {
        return 0xdb;
    }
    return 0x80;
}

s32 Unk_ov119_02295840::func_ov119_02294388() {
    u32 v = A0V;
    if (v <= 7) {
        return v * 16 + 0x38;
    }
    if (v >= 0xe && v <= 0x15) {
        return 8;
    }
    if (v >= 8 && v <= 0xd) {
        return (v - 8) * 16 + 0x3f;
    }
    if (v == 0x16) {
        return 0xaa;
    }
    return 0x60;
}

void Unk_ov119_02295840::func_ov119_02294364() {
    U970_B->func_ov002_02202d00(0);
    unk_970.vfunc_0c();
}

void Unk_ov119_02295840::func_ov119_022942f0() {
    u32 v = A0V;
    if (v <= 7) {
        U970_B->func_ov002_02202ca0();
    } else if (v >= 0xe && v <= 0x15) {
        U970_B->func_ov002_02202be0();
    } else {
        U970_B->func_ov002_02202c40();
    }
    s32 a = func_ov119_022943c0();
    s32 b = func_ov119_02294388();
    U970_A->func_ov002_022029e8(a, b, 3, 1);
    unk_9f = unk_8d;
    func_ov002_02200a58(3);
}

void Unk_ov119_02295840::func_ov119_022942a4() {
    s32 a = unk_dc.func_ov002_022014a4();
    s32 b = unk_dc.func_ov002_02201498(unk_ae);
    U970_A->func_ov002_02202a18(a, b, 2);
    unk_9f = unk_8d;
    func_ov002_02200a58(3);
}

void Unk_ov119_02295840::func_ov119_02294244() {
    unk_ad = 10;
    unk_ae = func_ov002_02201a70(&unk_dc, 1);
    s32 a = unk_dc.func_ov002_022014a4();
    s32 b = unk_dc.func_ov002_02201498(unk_ae);
    U970_A->func_ov002_02202a40(a, b);
    U970_C->func_0208d538(8);
    func_ov002_02200a58(0xb);
}

void Unk_ov119_02295840::func_ov119_022941e8() {
    if (func_ov119_02292de0(0x10)) {
        unk_ae = 2;
    } else {
        unk_ae = 0;
    }
    s32 a = unk_dc.func_ov002_022014a4();
    s32 b = unk_dc.func_ov002_02201498(unk_ae);
    U970_A->func_ov002_02202a40(a, b);
    U970_B->func_ov002_02202d00(7);
}

void Unk_ov119_02295840::func_ov119_022941c8() {
    U970_B->func_ov002_02202b68();
    func_ov002_02200a58(4);
}

void Unk_ov119_02295840::func_ov119_022941a8() {
    U970_A->func_ov002_02202af0();
    func_ov002_02200a58(5);
}

void Unk_ov119_02295840::func_ov119_02294188() {
    U970_A->func_ov002_02202a78();
    unk_970.vfunc_0c();
}

BOOL Unk_ov119_02295840::func_ov119_02293f68(u32 keys) {
    u32 old = A0V;
    if (keys == 0) {
        return FALSE;
    }
    if (old <= 7) {
        if (func_ov002_0220127c(keys)) {
            if (A0V + 1 < unk_af) {
                A0V = A0V + 1;
            }
        } else if (func_ov002_0220128c(keys)) {
            if (A0V != 0) {
                A0V = A0V - 1;
            } else {
                A0V = 0x14;
            }
        } else if (func_ov002_0220125c(keys)) {
            s32 t = U970_A->func_ov002_02202878();
            if (t > 0x94) {
                A0V = 0x16;
            } else {
                t -= 0x35;
                if (t < 0) t = 0;
                t >>= 4;
                if (t >= 6) t = 5;
                A0V = t + 8;
            }
        }
    } else if (old >= 0xe && old <= 0x15) {
        if (func_ov002_0220126c(keys)) {
            if (A0V > 0xe) {
                A0V = A0V - 1;
            }
        } else if (func_ov002_0220125c(keys)) {
            if (A0V < 0x15) {
                A0V = A0V + 1;
            }
        } else if (func_ov002_0220127c(keys)) {
            s32 t = U970_A->func_ov002_0220288c();
            if (unk_af != 0 && t < 0x80) {
                A0V = 0;
            } else {
                A0V = 8;
            }
        }
    } else if (old >= 8 && old <= 0xd) {
        if (func_ov002_0220128c(keys)) {
            if (A0V > 8) {
                A0V = A0V - 1;
            } else {
                A0V = 0x14;
            }
        } else if (func_ov002_0220127c(keys)) {
            if (A0V < 0xd) {
                A0V = A0V + 1;
            } else {
                A0V = 0x16;
            }
        } else if (func_ov002_0220126c(keys)) {
            if (unk_af != 0) {
                s32 t = U970_A->func_ov002_02202878();
                t -= 0x30;
                if (t < 0) t = 0;
                t >>= 4;
                s32 n = unk_af;
                if (t >= n) t = n - 1;
                A0V = t;
            }
        }
    } else if (old == 0x16) {
        if (func_ov002_0220128c(keys)) {
            A0V = 0xd;
        }
        if (func_ov002_0220126c(keys)) {
            u32 n = unk_af;
            if (n != 0) {
                A0V = n - 1;
            }
        }
    }
    if (old != A0V) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov119_02295840::func_ov119_02293ed0()
{
    unk_b0 = 7;
    func_ov002_022016e4(U3D0, 0xa);
    Unk_ov119_Comm *g = data_020cbb18;
    if (func_02072e44(g)) {
        s32 skip = g->unk_64;
        s32 i = 0;
        u32 tmp[7];
        _ZN12Unk_020e1c64C1Ev(tmp);
        for (; i < 4; i++) {
            if (skip != i) {
                void *p = func_02097520(i);
                if (p) {
                    func_020940d0(func_0209888c(p), tmp);
                    func_ov002_02201680(&unk_dc, U3D0, tmp, (u8)(i + 6));
                }
            }
        }
        _ZN12Unk_020e1c64D1Ev(tmp);
    }
    func_ov002_02201700(U3D0, 0xce, 5);
    func_ov002_02201700(U3D0, 2, 0xa);
    func_ov119_02292ecc(0);
}

void Unk_ov119_02295840::func_ov119_02293e5c()
{
    func_ov002_022016e4(U3D0, 0xa);
    func_ov002_02201700(U3D0, 0xcf, 3);
    func_ov002_02201700(U3D0, 0xd0, 2);
    void *rec = func_ov119_022937e8();
    if (rec) {
        if (func_02076e20(func_02076cf0(rec)) == 0) {
            func_ov002_02201700(U3D0, 0xd1, 4);
        }
    }
    func_ov002_02201700(U3D0, 0xd2, 0);
    func_ov002_02201700(U3D0, 2, 0xa);
    func_ov119_02292ecc(0);
}

void Unk_ov119_02295840::func_ov119_02293e10()
{
    func_ov002_022016e4(U3D0, 0xa);
    func_ov002_02201700(U3D0, 0xd3, 0xa);
    func_ov002_02201700(U3D0, 4, 1);
    func_ov002_02201700(U3D0, 0x13, 0xa);
    func_ov119_02292ecc(1);
    func_ov119_02292dd0(0x10);
}

void Unk_ov119_02295840::func_ov119_02293dc8()
{
    void *rec = func_ov119_022937e8();
    if (rec) {
        func_02076cf4(rec);
        unk_9a = -1;
        func_ov119_02292dd0(2);
        func_ov119_022930d4();
        unk_b1 = 1;
        func_ov002_02200a58(9);
        unk_b4 = func_ov119_022937d0();
    }
}

void Unk_ov119_02295840::func_ov119_02293d9c(s32 x)
{
    func_0206ed2c((u8)func_ov119_022937d0());
    func_ov119_02294fbc(x);
    func_ov119_02294fa8();
}

void Unk_ov119_02295840::func_ov119_02293d4c()
{
    s32 i = func_ov119_02293640();
    if (i == -1) {
        func_ov119_02294568(0x13);
    } else {
        func_02076cf4((u8 *)func_ov119_02293810() + i * 0x1c);
        func_0206ed2c((u8)i);
        func_ov119_02294fbc(0xe);
        func_ov119_02294fa8();
    }
}

void Unk_ov119_02295840::func_ov119_02293c44()
{
    s32 i = func_ov119_02293640();
    if (i == -1) {
        func_ov119_02294568(0x13);
        return;
    }
    void *a = func_02097520(unk_ad - 6);
    if (func_ov119_022935fc(func_02076c7c(func_02098680(a)))) {
        func_ov119_02294568(0x14);
        return;
    }
    u8 *b = (u8 *)func_ov119_02293810();
    void *c = func_0209888c(a);
    u8 *rec = b + i * 0x1c;
    void *d = func_02076cf0(rec);
    func_02076f58(d, func_02076c7c(func_02098680(a)));
    void *e = func_02094104(c);
    func_02051268(e, func_02076cec(rec), 8);
    void *f = func_02063964(func_0209409c(c));
    func_02051268(f, func_02076ce8(rec), 8);
    func_ov090_02291964(func_020ed174(this));
    unk_b4 = i;
    if (func_ov119_02293828()) {
        if (func_020e9c78(unk_b4, func_02076e1c(func_02076cf0(b + unk_b4 * 0x1c))) == 0) {
            func_ov002_02200a58(0x10);
            return;
        }
    }
    func_ov119_02293c08(i);
}

void Unk_ov119_02295840::func_ov119_02293c08(s32 x)
{
    func_ov119_02293784();
    u32 t = func_ov119_02293010(x);
    if (t != unk_9d) {
        _ZN18Unk_ov119_0229584019func_ov119_0229305cEh(this, t);
    } else {
        func_ov119_022930d4();
    }
    func_ov119_022945a4();
}

BOOL Unk_ov119_02295840::func_ov119_02293b48()
{
    u32 m = unk_a0;
    if (m >= 0xe && m <= 0x15) {
        if (func_ov119_02294fbc(m - 0xe)) {
            return TRUE;
        }
        return FALSE;
    }
    if (m >= 8 && m <= 0xd) {
        u8 k = m - 8;
        if (k != unk_9d) {
            unk_9d = k;
            func_ov002_02200a58(0xe);
            if (k == 4) {
                func_0200402c(0xf);
            } else {
                func_0200402c(0xb);
            }
            return TRUE;
        }
        return FALSE;
    }
    if (m == 0x16) {
        unk_b0 = 8;
        unk_b1 = 3;
        func_ov002_02200a58(8);
        func_0200402c(0x2b);
        return TRUE;
    }
    if (m <= 7) {
        unk_9a = m;
        func_ov119_02292dd0(4);
        unk_b1 = 3;
        func_ov002_02200a58(8);
        func_0200402c(0x2b);
        return TRUE;
    }
    return FALSE;
}

u8 Unk_ov119_02295840::func_ov119_02293ab8(s32 x, s32 y)
{
    s32 i;
    s32 t = func_02087e14((u8 *)data_ov119_02295648[0] + 8) + 0x83;
    if (t <= x && t + 0x22 >= x) {
        for (i = 0; i < 6; i++) {
            s32 u = func_02087e0c((u8 *)data_ov119_02295648[i] + 8) + 0x61;
            if (u <= y && u + 0x12 >= y) {
                return (u8)(i + 8);
            }
        }
    }
    if (x >= 0x18 && x <= 0xc0 && y >= 0x30 && y < 0xb0) {
        s32 r = (y - 0x30) >> 4;
        if (r < unk_af) {
            return (u8)r;
        }
    }
    if (x >= 0xc3 && x <= 0xf3 && y >= 0x9f && y <= 0xb5) {
        return 0x16;
    }
    return 0x17;
}

void Unk_ov119_02295840::func_ov119_022939cc()
{
    func_ov119_02292df4();
    if (func_ov119_02292de0(4)) {
        if (unk_9c <= 3) {
            func_0206ee80(unk_9d4, 5, 6, 0x17, 0x15, 3);
            s32 v = unk_9a;
            if (v != -1) {
                s32 y = v * 2 + 6;
                func_0206ee80(unk_9d4, 5, y, 0x17, y + 1, 4);
            }
        }
        func_ov119_02292dc0(4);
        func_ov119_02292dd0(2);
    }
    if (func_ov119_02292de0(2)) {
        if (unk_1a58[0].func_020b86c0((u32)unk_19d4, 4, 0x800, 0)) {
            func_ov119_02292dc0(2);
        }
    }
    if (func_ov119_02292de0(0x20)) {
        unk_1a58[1].func_020b8670((u32)unk_1a38, 6, 3);
        unk_1a58[2].func_020b8670((u32)unk_1a18, 8, 10);
    }
}

u16 Unk_ov119_02295840::func_ov119_02293924(s32 c1, s32 c2, s32 t, s32 n)
{
    u8 r = c2 & 0x1f;
    u8 g = (c2 & 0x3e0) >> 5;
    u8 b = (c2 & 0x7c00) >> 10;
    s32 k = n - t;
    r = ((u8)(c1 & 0x1f) * t + r * k) / n;
    g = ((u8)((c1 & 0x3e0) >> 5) * t + g * k) / n;
    b = ((u8)((c1 & 0x7c00) >> 10) * t + b * k) / n;
    return r | (g << 5) | (b << 10);
}

void Unk_ov119_02295840::func_ov119_02293844(s32 x)
{
    s32 v = x;
    s32 i;
    if (v < 0) {
        v = 0;
    } else if (v > 5) {
        v = 5;
    }
    func_ov119_02292dd0(0x20);
    func_02115e48(unk_19d8, unk_1a18, 0x20);
    func_02115e48(unk_19f8, unk_1a38, 0x20);
    for (i = 2; i <= 5; i++) {
        unk_1a38[i] = func_ov119_02293924(unk_19f8[i], unk_19f8[14], v, 5);
    }
    unk_1a38[15] = func_ov119_02293924(unk_19f8[15], unk_19f8[14], v, 5);
    for (i = 1; i <= 3; i++) {
        unk_1a18[i] = func_ov119_02293924(unk_19d8[i], unk_19d8[14], v, 5);
    }
    unk_1a18[15] = func_ov119_02293924(unk_1a18[15], unk_19d8[14], v, 5);
}

BOOL Unk_ov119_02295840::func_ov119_02293828()
{
    s32 t = func_020eaf18();
    switch (t) {
    case 3:
    case 4:
        return TRUE;
    }
    return FALSE;
}

void *Unk_ov119_02295840::func_ov119_02293810()
{
    return func_02076db4(func_02098674(func_0209750c()));
}

void *Unk_ov119_02295840::func_ov119_022937e8()
{
    u8 *b = (u8 *)func_ov119_02293810();
    s32 v = func_ov119_022937d0();
    if (v >= 0x20) {
        return 0;
    }
    return b + v * 0x1c;
}

u32 Unk_ov119_02295840::func_ov119_022937d0()
{
    return unk_bc[unk_a0 + (unk_9c << 3)];
}

void Unk_ov119_02295840::func_ov119_02293784()
{
    u8 *b = (u8 *)func_ov119_02293810();
    s32 i;
    s32 n = 0;
    for (i = 0; i < 0x20; i++) {
        if (func_02076f04(func_02076cf0(b + i * 0x1c))) {
            unk_bc[n] = i;
            n++;
        }
    }
    for (; n < 0x20; n++) {
        unk_bc[n] = 0x20;
    }
}

BOOL Unk_ov119_02295840::func_ov119_02293744()
{
    u8 *b = (u8 *)func_ov119_02293810();
    s32 flag = 0;
    s32 i;
    for (i = 0; i < 0x20; i++) {
        if (func_02076f04(func_02076cf0(b + i * 0x1c)) != 0) {
            if (flag != 0) {
                return TRUE;
            }
        } else {
            flag = 1;
        }
    }
    return FALSE;
}

void Unk_ov119_02295840::func_ov119_0229371c()
{
    if (func_ov119_02293828()) {
        func_ov119_02293784();
    } else {
        func_02076d68(func_02098674(func_0209750c()));
    }
}

s32 Unk_ov119_02295840::func_ov119_02293674()
{
    u8 *a = (u8 *)func_020ea574();
    u8 *b = (u8 *)func_ov119_02293810();
    s32 i;
    s32 result = 0;
    u32 tmp[3];
    for (i = 0; i < 0x20; i++) {
        func_02116048(a + i * 12, tmp, 12);
        if (func_020e9d7c(tmp) == 0) {
            if (func_02076f04(func_02076cf0(b + i * 0x1c)) == 0) {
                continue;
            }
        }
        u8 *rec = b + i * 0x1c;
        if (func_020e9d88(tmp, func_02076e1c(func_02076cf0(rec))) != 0) {
            s32 t = func_020e9d70(tmp);
            if (t == func_020e9d70(func_02076e1c(func_02076cf0(rec)))) {
                continue;
            }
        }
        func_02116048(tmp, func_02076e1c(func_02076cf0(rec)), 12);
        result = 1;
    }
    return result;
}

s32 Unk_ov119_02295840::func_ov119_02293640()
{
    s32 i;
    u8 *p = (u8 *)func_ov119_02293810();
    for (i = 0; i < 0x20; p += 0x1c, i++) {
        if (func_02076f04(func_02076cf0(p)) == 0) {
            return i;
        }
    }
    return -1;
}

BOOL Unk_ov119_02295840::func_ov119_022935fc(void *p) {
    u8 *r = (u8 *)func_ov119_02293810();
    s32 i;
    for (i = 0; i < 0x20; i++) {
        if (func_02076f04(func_02076cf0(r))) {
            if (func_02076f28(p, func_02076cf0(r))) {
                return TRUE;
            }
        }
        r += 0x1c;
    }
    return FALSE;
}

void Unk_ov119_02295840::func_ov119_0229348c() {
    s32 x = 0x1ce;
    s32 i;
    s32 y = 0x14e;
    void *rec;
    s32 cur;
    void *a;
    void *b;
    Unk_ov119_Comm *g;
    s32 pos = 0xc3;
    g = data_020cbb18;
    cur = g->unk_64;
    s32 n = 0;
    u32 A[7];
    u32 B[7];
    _ZN12Unk_020dd38cC2Ev(A);
    _ZN12Unk_020e1c64C1Ev(B);
    for (i = 0; i < 8; i++) {
        a = func_ov119_02294504();
        b = func_ov119_02294504();
        rec = 0;
        if (func_02072e44(g)) {
            if (cur == n) {
                n++;
            }
            if (n < 4) {
                rec = func_02097520(n);
                n++;
            }
        }
        if (rec != 0) {
            void *g2 = func_0209888c(rec);
            func_020638d0(func_0209409c(g2), &A);
            func_020b3544(0, &A);
            func_0206f9fc(a, 0x66);
            func_020940d0(g2, &B);
            func_020a7bd8(b, &B);
            func_ov119_022932ac(&unk_9d4[pos], 0x58);
            unk_b2 = unk_b2 | (1 << i);
        } else {
            func_020a7c3c(a);
            func_020a7c3c(b);
            func_ov119_022932ac(&unk_9d4[pos], 0x10);
        }
        func_0206fb9c(a, 4, x, 10, 0xf, 0, 0);
        func_0206fab4(a, 0, 0);
        func_0206fb9c(b, 4, y, 8, 0xf, 0, 0);
        func_0206fab4(b, 0, 0);
        x += 0x14;
        y += 0x10;
        pos += 0x40;
    }
    func_0206ee80(unk_9d4, 5, 6, 0x17, 0x15, 5);
    _ZN12Unk_020e1c64D1Ev(B);
    _ZN12Unk_020dd38cD1Ev(A);
}

void Unk_ov119_02295840::func_ov119_022933d8() {
    void *g = func_0209888c(func_0209750c());
    void *a = func_ov119_02294504();
    u32 A[7];
    _ZN12Unk_020dd38cC2Ev(A);
    func_020638d0(func_0209409c(g), &A);
    func_020b3544(0, &A);
    func_0206f9fc(a, 0x66);
    func_0206fb9c(a, 4, 0x102, 10, 0xf, 0, 0);
    func_0206fab4(a, 0, 0);
    void *b = func_ov119_02294504();
    u32 B[7];
    _ZN12Unk_020e1c64C1Ev(B);
    func_020940d0(g, &B);
    func_020a7bd8(b, &B);
    func_0206fb9c(b, 4, 0x116, 8, 0xf, 0, 0);
    func_0206fab4(b, 0, 0);
    _ZN12Unk_020e1c64D1Ev(B);
    _ZN12Unk_020dd38cD1Ev(A);
}

void Unk_ov119_02295840::func_ov119_02293328() {
    u8 ch = data_021edb68;
    void *p = func_0209750c();
    s32 i;
    if (func_02076c8c(func_02098680(p)) == 0) {
        ch = 0xd4;
    } else if (func_02076c84(func_02098680(p)) == 0) {
        ch = 0xec;
    } else {
        ch = 0xd5;
    }
    func_020b3558(&unk_89c, &ch, 0);
    for (i = 0; i < 3; i++) {
        void *o = func_ov119_02294504();
        func_020a7a64(o, func_020a6b9c((u8 *)this + 0x8ae, i));
        func_0206fb9c(o, 4, i * 0x28 + 0x8a, 0x14, 0xf, 0, 0);
        func_0206fab4(o, 0, 0);
    }
}

void Unk_ov119_02295840::func_ov119_022932ac(u16 *p, u32 v) {
    p[0] = p[0] & ~0x3ff;
    p[0] = p[0] | v;
    if (v != 0x10) {
        v = (u16)(v + 1);
    }
    p[1] = p[1] & ~0x3ff;
    p[1] = p[1] | v;
    if (v != 0x10) {
        v = (u16)(v + 1);
    }
    p[0x20] = p[0x20] & ~0x3ff;
    p[0x20] = p[0x20] | v;
    if (v != 0x10) {
        v = (u16)(v + 1);
    }
    p[0x21] = p[0x21] & ~0x3ff;
    p[0x21] = p[0x21] | v;
}

void Unk_ov119_02295840::func_ov119_02293124() {
    s32 i;
    u8 *recs;
    void *a;
    void *b;
    recs = (u8 *)func_ov119_02293810();
    s32 base = unk_9c << 3;
    s32 x = 0x1ce;
    s32 y = 0x14e;
    s32 pos = 0xc3;
    u32 A[7];
    u32 B[6];
    _ZN12Unk_020dd38cC2Ev(A);
    _ZN12Unk_020dd374C2Ev(B);
    for (i = 0; i < 8; i++) {
        a = func_ov119_02294504();
        b = func_ov119_02294504();
        s32 idx = unk_bc[base];
        u8 *rec;
        if (idx < 0x20) {
            rec = recs + idx * 0x1c;
        } else {
            rec = 0;
        }
        if (rec != 0 && func_02076f04(func_02076cf0(rec))) {
            func_020a78a4(&B, (void *)func_02076ce8(rec), 8);
            func_020a7aa0(&A, &B, 0, 0);
            func_020b3544(0, &A);
            func_0206f9fc(a, 0x66);
            func_0206f994(b, (void *)func_02076cec(rec), 8);
            unk_af = unk_af + 1;
            if (func_02076e20(func_02076cf0(rec))) {
                func_ov119_022932ac(&unk_9d4[pos], 0x50);
            } else {
                func_ov119_022932ac(&unk_9d4[pos], 0x54);
            }
        } else {
            func_020a7c3c(a);
            func_020a7c3c(b);
            func_ov119_022932ac(&unk_9d4[pos], 0x10);
        }
        func_0206fb9c(a, 4, x, 10, 0xf, 0, 0);
        func_0206fab4(a, 0, 0);
        func_0206fb9c(b, 4, y, 8, 0xf, 0, 0);
        func_0206fab4(b, 0, 0);
        x += 0x14;
        y += 0x10;
        base++;
        pos += 0x40;
    }
    _ZN12Unk_020dd374D1Ev(B);
    _ZN12Unk_020dd38cD1Ev(A);
}

void Unk_ov119_02295840::func_ov119_022930d4() {
    unk_b2 = 0;
    unk_b3 = 0;
    func_ov119_02292e2c();
    unk_af = 0;
    u8 t = unk_9c;
    switch (t) {
    case 5:
        func_ov119_0229348c();
        break;
    case 4:
        func_ov119_022933d8();
        break;
    default:
        func_ov119_02292dd0(4);
        func_ov119_02293124();
        break;
    }
}

void Unk_ov119_02295840::func_ov119_0229305c(u8 s) {
    if (s != unk_9c) {
        unk_9d = s;
        unk_9c = s;
        u8 t = unk_9c;
        if (t == 5) {
            func_ov119_0229448c(0xeb);
            unk_19d4 = unk_9d4;
        } else if (t == 4) {
            func_ov119_0229448c(0xea);
            unk_19d4 = &unk_9d4[0x400];
        } else {
            func_ov119_0229448c(0xcd);
            unk_19d4 = unk_9d4;
        }
        func_ov119_02292dd0(2);
        func_ov119_022930d4();
    }
}

u32 Unk_ov119_02295840::func_ov119_02293010(s32 idx) {
    u8 *base = (u8 *)func_ov119_02293810();
    s32 cnt = 0;
    s32 i;
    for (i = 0; i < 0x20; i++) {
        if (func_02076f04(func_02076cf0(base + i * 0x1c))) {
            cnt++;
            if (i >= idx) {
                i = 0x20;
            }
        }
    }
    if (cnt > 0) {
        return ((u32)(cnt - 1) << 21) >> 24;
    }
    return 0;
}

void Unk_ov119_02295840::func_ov119_02292f98() {
    void *p = func_0209750c();
    s32 i;
    if ((func_02076c8c(func_02098680(p)) & func_02076c84(func_02098680(p))) == 0) {
        for (i = 0; i < 12; i++) {
            unk_a1[i] = 10;
        }
    } else {
        u64 v = func_02076c94(func_02098680(p));
        for (i = 11; i >= 0; i--) {
            unk_a1[i] = (u8)(v % 10);
            v = v / 10;
        }
    }
}

u8 Unk_ov119_02295840::func_ov119_02292f8c(u32 idx) { return *((u8 *)this + idx + 0x3d5); }

void Unk_ov119_02295840::func_ov119_02292f20() {
    switch (unk_ad) {
    case 1:
        func_ov119_02293dc8();
        break;
    case 0:
        func_ov119_02293e10();
        break;
    case 2:
        func_ov119_02293d9c(9);
        break;
    case 3:
        func_ov119_02293d9c(0xb);
        break;
    case 4:
        func_ov119_02293d9c(0xd);
        break;
    case 5:
        func_ov119_02293d4c();
        break;
    case 6:
    case 7:
    case 8:
    case 9:
        func_ov119_02293c44();
        break;
    case 10:
    default:
        func_ov119_022945a4();
        break;
    }
}

void Unk_ov119_02295840::func_ov119_02292ecc(u32 x) {
    func_ov002_0220160c(&unk_dc, (u8 *)this + 0x3d0, x);
    u32 r;
    if (unk_a0 == 0x16) {
        r = 0x9c;
    } else {
        r = 0xb8;
    }
    func_ov002_02202278(&unk_dc, 0x100, r);
    func_ov002_02202098(&unk_dc, 0);
    func_ov002_02200a58(10);
    func_ov119_02292dc0(0x10);
}

void Unk_ov119_02295840::func_ov119_02292ea4() {
    unk_ad = 10;
    func_ov119_02294364();
    func_ov002_02202064(&unk_dc, 0);
    func_ov002_02200a58(0xc);
}

void Unk_ov119_02295840::func_ov119_02292e5c() {
    s32 i;
    func_ov119_02292e2c();
    for (i = 0; i < 8; i++) {
        if (unk_b2 & (1 << i)) {
            func_0206ee80(unk_9d4, 3, i * 2 + 6, 4, i * 2 + 7, 5);
        }
    }
}

void Unk_ov119_02295840::func_ov119_02292e2c() {
    func_0206ee80(unk_9d4, 3, 6, 4, 0x15, 3);
    func_ov119_02292dd0(2);
}

void Unk_ov119_02295840::func_ov119_02292df4() {
    unk_b3 = unk_b3 + 1;
    u8 c = unk_b3;
    if (c == 10) {
        func_ov119_02292e5c();
    } else if (c >= 0x19) {
        func_ov119_02292e2c();
        unk_b3 = 0;
    }
}

BOOL Unk_ov119_02295840::func_ov119_02292de0(u32 mask) {
    if (unk_98 & mask) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov119_02295840::func_ov119_02292dd0(u32 mask) { unk_98 = unk_98 | mask; }

void Unk_ov119_02295840::func_ov119_02292dc0(u32 mask) { unk_98 = unk_98 & ~mask; }

extern "C" void *data_ov119_02295590[2] = {(void *)_ZN18Unk_ov119_0229584019func_ov119_02294670Ev, 0};

extern "C" void *data_ov119_022955d8[2] = {(void *)_ZN18Unk_ov119_0229584019func_ov119_022946b4Ev, 0};

extern "C" void *data_ov119_02295640[2] = {(void *)_ZN18Unk_ov119_0229584019func_ov119_02294f4cEv, 0};

extern "C" u32 data_ov119_022956a8[10] = {0x404d00f7, 0x000044c4, 0x804240f5, 0x0000450b, 0x006280f5, 0x0000450f, 0x40424005, 0x0000454b, 0x00620005, 0xffff454f};

extern "C" void *data_ov119_02295628[2] = {(void *)_ZN18Unk_ov119_0229584019func_ov119_02294e3cEv, 0};

extern "C" void *data_ov119_022955b8[2] = {(void *)_ZN18Unk_ov119_0229584019func_ov119_02294634Ev, 0};

extern "C" u32 data_ov119_02295748[12] = {0x40490027, 0x0000b0d0, 0x00598027, 0x0000b0d2, 0x80424025, 0x0000b50b, 0x00628025, 0x0000b50f, 0x40424035, 0x0000b54b, 0x00620035, 0xffffb54f};

extern "C" Unk_ov119_02295588 data_ov119_02295588 = {0x419700f0, 0xa1a0, 0xffff};

extern "C" void *data_ov119_022955a8[2] = {(void *)_ZN18Unk_ov119_0229584019func_ov119_02294a44Ev, 0};

extern "C" void *data_ov119_02295598[2] = {(void *)_ZN18Unk_ov119_0229584019func_ov119_02294718Ev, 0};

extern "C" void *data_ov119_022955c0[2] = {(void *)_ZN18Unk_ov119_0229584019func_ov119_022947a4Ev, 0};

extern "C" u32 data_ov119_02295778[12] = {0x80454041, 0x000074ca, 0x40650041, 0x000074ce, 0x8059403f, 0x00007502, 0x4059404f, 0x00007542, 0x8041403f, 0x00007500, 0x4041404f, 0xffff7540};

extern "C" void *data_ov119_022955f0[2] = {(void *)_ZN18Unk_ov119_0229584019func_ov119_02294990Ev, 0};

extern "C" void *data_ov119_022955c8[2] = {(void *)_ZN18Unk_ov119_0229584019func_ov119_02294804Ev, 0};

extern "C" u32 data_ov119_022957a8[12] = {0x419840ed, 0x00005530, 0x402040ed, 0x00005530, 0x400040ed, 0x00005530, 0x41e840ed, 0x00005530, 0x41c840ed, 0x00005530, 0x41a840ed, 0xffff5530};
