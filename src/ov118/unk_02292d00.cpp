#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef vfunc_08
#undef vfunc_14

extern "C" {
BOOL _ZN12Unk_020e100c13func_0208d4fcEv(void *self);
extern u8 data_021ef5f0;
extern u8 data_021ef5ec;
extern u16 data_021f47d8[];
extern u32 data_021f482c;
extern u8 data_021f4770;
extern u8 data_021f4774;
extern u8 data_020e416c;
extern u8 data_021ef360[];
extern u8 data_021d7352[];
extern u8 data_021d735c[];
extern u8 data_021dfd8c[];

void func_0206f9fc(void *self, u32 v);
void _ZN12Unk_020dd38cC2Ev(void *self);
void _ZN12Unk_020dd38cD1Ev(void *self);
s32 _ZN12Unk_0209865c13func_0209888cEv(void *self);
void _ZN12Unk_020e2a7813func_020a7c3cEv(void *self);
void func_02004018(u32 a, s32 b);
void func_0200402c(u32 v);
void *func_020ed174(void *p);
void func_020ed188(void *p);
void func_020020b8(s32 a);
void func_020021a0(s32 a);
void func_020021fc(s32 a, s32 b, s32 c);
s32 func_0200226c(s32 a, s32 b, s32 c, s32 d);
void func_02002398(s32 a, s32 b);
BOOL func_0206e61c();
BOOL func_0206e63c();
BOOL func_0206ef00();
BOOL func_0206ef0c();
void func_02087e70(u32 a, void *h, s32 x, s32 y, s32 s0, s32 s1, s32 s2, s32 s3, s32 s4, s32 s5, s32 s6, s32 s7);
s32 func_02088730(s32 mode, void *info, s32 x, s32 y, s32 pal, s32 pri, s32 *rect);
s32 _s32_div_f(s32 a, s32 b);
s32 func_ov090_02291a78(s32 v);
s32 func_ov090_02291aa0();
u32 func_ov090_02291a38(u32 v);
u32 func_ov090_02291a58(u32 v);
u32 func_ov090_02291944(u32 v);
void func_ov002_02202e48(void *p);
void func_ov002_02202e54(void *p);
void func_ov117_02292c88(void *p);
void func_ov117_022923a0(u32 v);
void func_ov117_022923bc(u32 v);
void func_ov117_022923d8();
void func_ov094_02292360(void *a, void *b);
s16 *func_ov117_02292c40(void *p, s32 i);
u32 func_ov117_02292c2c(void *p, s32 i);
void *func_0209750c();
s32 func_02097740(void *a, s32 b);
BOOL func_020978c8(void *a, s32 b);
BOOL func_0207bf84(void *a, s32 b);
void func_ov002_022019a4(void *p, s32 a);
void func_ov002_02201984(void *p, s32 a);
void func_ov002_02201938(void *p, s32 a);
void func_0206ee80(void *p, s32 a, s32 b, s32 c, s32 d, s32 e);
void func_020026c4(const char *a, u32 b, u32 c, u32 d, u32 e, u32 f);
void func_0200261c(const char *a, u32 b, u32 c, u32 d, u32 e, u32 f);
void func_02002438(void *a, u32 b, u32 c, u32 d, u32 e);
void func_020024f0(void *a, u32 b, u32 c, u32 d);
void func_020641b4(const char *a, void *b, u32 c);
void func_02115e48(void *dst, void *src, u32 n);
void func_02115e30(u32 v, void *dst, u32 n);
void func_020e761c(void *p, s32 a, s32 b);
void *func_020947f0(s32 a);
s32 func_020b4934();
void *func_020b5010(void *p);
void func_020638d0(void *a, void *b);
void func_020b3544(s32 a, void *p);
BOOL func_ov002_0220125c(void *pad);
BOOL func_ov002_0220126c(void *pad);
BOOL func_ov002_0220127c(void *pad);
BOOL func_ov002_0220128c(void *pad);
}

// 0x40-byte element with ctor/dtor in main
class Unk_020e0488 {
public:
    Unk_020e0488();
    ~Unk_020e0488();
    void func_0206fab4(s32 a, s32 b);
    void func_0206fb9c(u32 id, u32 a, u32 b, u8 x, u8 y, s32 flag);
    void func_0206fc44();
    u8 unk_00[0x40];
};

// 0x24-byte helper objects at +0xb4 / +0xd8
class Unk_020e45f8 {
public:
    Unk_020e45f8();
    BOOL func_020b86c0(u32 buf, u8 n, u32 size, u32 z);
    void func_020b87d0();
    u32 unk_00[0x24 / 4];
};

class Unk_ov090_022921e0 {
public:
    BOOL func_ov090_02291934();
    void func_ov090_02291d2c();
    void func_ov090_02291d8c(u32 x);
};

class Unk_020e0db4 {
public:
    Unk_020e0db4();
    virtual ~Unk_020e0db4();
    virtual void vfunc_08() = 0;
    virtual void vfunc_0c() = 0;
    u32 unk_04[2];
};

// object at +0x484 (size 0x64, vtable 0x02204614); methods split over two more ov002 classes
class Unk_ov002_02202d98 {
public:
    void func_ov002_02202844();
    u8 func_ov002_02202878();
    u8 func_ov002_0220288c();
    void func_ov002_02202af0();
    void func_ov002_02202a78();
    void func_ov002_022029e8(s32 a, s32 b, s32 c, s32 d);
    void func_ov002_02202a40(s32 a, s32 b);
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

class Unk_ov002_02204614 {
public:
    Unk_ov002_02204614();
    virtual ~Unk_ov002_02204614();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    u32 unk_04[0x60 / 4];
};

// object at +0x43c (size 0x48)
class Unk_020e1028 {
public:
    virtual ~Unk_020e1028();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    void func_0208d9d4(s32 a);
    void func_0208dae8(s32 a, s32 b);
    s32 func_0208d9a8();
    u32 unk_04[0x44 / 4];
};

class Unk_ov002_022046b0 : public Unk_020e1028 {
public:
    Unk_ov002_022046b0();
    virtual ~Unk_ov002_022046b0();
    s32 func_ov002_02202e84();
    s32 func_ov002_02202e60();
    void func_ov002_02202f00();
    BOOL func_ov002_02202f18(s32 x, s32 y);
};

// Vtable 0x022044e4 (declaration copied from src/ov002/unk_ov002_02200680.cpp; sub-objects opaque)
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
    void func_ov002_02200850(s32 a);
    void func_ov002_022008a8(s32 a, s32 b, s32 mode, s32 dist);
    void func_ov002_022008c4(s32 a, s32 b, s32 c, s32 d);
    void func_ov002_022008e0(s32 a, s32 b, s32 c, s32 d);
    BOOL func_ov002_022008fc(s32 a);
    BOOL func_ov002_02200908(s32 a);
    s32 func_ov002_02200914();
    s32 func_ov002_02200920();
    void func_ov002_02200980();
    u32 func_ov002_022009c8();
    s32 func_ov002_022009d4();
    s32 func_ov002_02200a14(s32 a);
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

// ov117 object (0x66 bytes) initialised and torn down by plain ov117 functions
class Unk_ov117_02292c88 {
public:
    Unk_ov117_02292c88();
    ~Unk_ov117_02292c88();
    u8 unk_00[0x66];
};


// 3-byte element with empty out-of-line ctor and dtor
class Unk_ov118_02292df8 {
public:
    Unk_ov118_02292df8();
    ~Unk_ov118_02292df8();
    u8 unk_00;
    u8 unk_01;
    u8 unk_02;
};

#define A8V (*(volatile u8 *)&unk_a8)
#define ACV (*(volatile u8 *)&unk_ac)

typedef struct Unk_ov118_022955c8 Unk_ov118_022955c8_fwd;
class Unk_ov118_022955c8;
typedef void (Unk_ov118_022955c8::*Unk_ov118_022955c8_Fn)();

// Vtable 0x022955c8, size 0x459c
class Unk_ov118_022955c8 : public Unk_ov002_022044e4 {
public:
    Unk_ov118_022955c8() : unk_b4(), unk_fc(), unk_43c(), unk_484(), unk_44e8(), unk_4568(), unk_4571() {}

    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_24();
    virtual BOOL vfunc_4c();
    virtual BOOL vfunc_50();
    virtual BOOL vfunc_54();
    virtual BOOL vfunc_58();
    virtual BOOL vfunc_5c();

    void func_ov118_02292e00(u32 m);
    void func_ov118_02292e10(u32 m);
    BOOL func_ov118_02292e20(u32 m);
    void func_ov118_02292e34(s32 a);
    s32 func_ov118_02292e78();
    s32 func_ov118_02292f7c(void *pad);
    void func_ov118_02293214();
    void func_ov118_02293234();
    void func_ov118_02293254();
    void func_ov118_02293274();
    void func_ov118_022932ec();
    s32 func_ov118_02293310();
    s32 func_ov118_0229336c();
    void func_ov118_022933cc();
    void func_ov118_02293458();
    void func_ov118_02293474();
    void func_ov118_02293498();
    s32 func_ov118_02293524();
    void func_ov118_022935a0();
    void func_ov118_02293604(s32 v);
    BOOL func_ov118_02293660();
    void func_ov118_022936e4();
    BOOL func_ov118_02293794();
    void func_ov118_022937a0(u32 v);
    void func_ov118_022937b0(u32 v);
    void func_ov118_022937cc();
    void func_ov118_02293824();
    u8 func_ov118_02293850(u32 v);
    u8 func_ov118_022938b8(u32 v);
    s32 func_ov118_02293924(u32 v);
    void func_ov118_02293994(u8 v);
    u8 func_ov118_02293a48(s32 x, s32 y);
    BOOL func_ov118_02293aa8();
    void func_ov118_02293ae0(void *p);
    void func_ov118_02293c3c(s32 x, s32 y, s32 n, s32 flag, s32 pal);
    BOOL func_ov118_02293cd0();
    s32 func_ov118_02293d34();
    u8 func_ov118_02293d50();
    u8 *func_ov118_02293d70();
    s32 func_ov118_02293d98();
    void func_ov118_02293dfc();
    void func_ov118_02293e14();
    void func_ov118_02293e2c(Unk_020e0488 *p, u32 idx);
    s32 func_ov118_02293e98(u8 *tbl);
    void func_ov118_02293ef0();
    void func_ov118_02293f24();
    Unk_020e0488 *func_ov118_02293ff0();
    void func_ov118_02294024();
    s32 func_ov118_0229404c(u32 x, s32 idx);
    void func_ov118_022940a0();
    void func_ov118_02294138();
    void func_ov118_022941f4();
    void func_ov118_02294228();
    void func_ov118_02294270();
    void func_ov118_02294288();
    void func_ov118_022943f4();
    void func_ov118_02294420();
    void func_ov118_02294458();
    void func_ov118_0229447c();
    void func_ov118_022944c0();
    void func_ov118_02294508();
    void func_ov118_02294534();
    void func_ov118_0229463c();
    void func_ov118_0229468c();
    void func_ov118_022946d4();
    void func_ov118_02294764();
    void func_ov118_022947c4();
    s32 func_ov118_02294814();
    s32 func_ov118_0229482c();
    void func_ov118_0229484c();
    void func_ov118_022948fc();
    void func_ov118_02294930();
    void func_ov118_02294938();
    void func_ov118_02294964();
    void func_ov118_02294a30();
    void func_ov118_02294a38();
    void func_ov118_02294a58();
    void func_ov118_02294b4c();
    void func_ov118_02294bac();
    void func_ov118_02294c00();
    void func_ov118_02294c60();
    void func_ov118_02294d1c();
    void func_ov118_02294d38();
    void func_ov118_02294d6c();
    void func_ov118_02294d98();
    void func_ov118_02294dc4();
    BOOL func_ov118_02294df8(s32 x);
    BOOL func_ov118_02294e38();
    void func_ov118_02294f14();

    /* 0x0091 */ u8 unk_91[3];
    /* 0x0094 */ s32 unk_94;
    /* 0x0098 */ u16 unk_98;
    /* 0x009a */ u16 unk_9a;
    /* 0x009c */ u16 unk_9c;
    /* 0x009e */ u8 unk_9e;
    /* 0x009f */ u8 unk_9f;
    /* 0x00a0 */ volatile u8 unk_a0;
    /* 0x00a1 */ u8 unk_a1;
    /* 0x00a2 */ u8 unk_a2;
    /* 0x00a3 */ u8 unk_a3;
    /* 0x00a4 */ u8 unk_a4;
    /* 0x00a5 */ u8 unk_a5;
    /* 0x00a6 */ u8 unk_a6;
    /* 0x00a7 */ u8 unk_a7;
    /* 0x00a8 */ u8 unk_a8;
    /* 0x00a9 */ u8 unk_a9;
    /* 0x00aa */ u8 unk_aa;
    /* 0x00ab */ u8 unk_ab;
    /* 0x00ac */ u8 unk_ac;
    /* 0x00ad */ u8 unk_ad;
    /* 0x00ae */ u8 unk_ae;
    /* 0x00af */ u8 unk_af;
    /* 0x00b0 */ u8 unk_b0;
    /* 0x00b1 */ u8 unk_b1;
    /* 0x00b2 */ u8 unk_b2[2];
    /* 0x00b4 */ Unk_020e45f8 unk_b4[2];
    /* 0x00fc */ Unk_020e0488 unk_fc[13];
    /* 0x043c */ Unk_ov002_022046b0 unk_43c;
    /* 0x0484 */ Unk_ov002_02204614 unk_484;
    /* 0x04e8 */ u8 unk_4e8[0x800];
    /* 0x0ce8 */ u16 unk_ce8[0x400];
    /* 0x14e8 */ u16 unk_14e8[0x400];
    /* 0x1ce8 */ u16 unk_1ce8[0x400];
    /* 0x24e8 */ u8 unk_24e8[0x2000];
    /* 0x44e8 */ Unk_ov117_02292c88 unk_44e8;
    /* 0x454e */ u8 unk_454e[13];
    /* 0x455b */ u8 unk_455b[13];
    /* 0x4568 */ Unk_ov118_02292df8 unk_4568[3];
    /* 0x4571 */ Unk_ov118_02292df8 unk_4571[14];
};

struct Unk_ov118_02295500 {
    u16 unk_0;
    u16 a : 9;
    u16 pal : 5;
    u16 b : 2;
    u16 tile : 10;
    u16 c : 6;
    u16 unk_6;
};

struct Unk_ov118_SceneEntry {
    Unk_ov118_022955c8 *(*create)();
    u16 a;
    u16 b;
};

extern "C" Unk_ov118_022955c8 *func_ov118_022953a0();

extern "C" {
void _ZN18Unk_ov118_022955c819func_ov118_02294dc4Ev();
void _ZN18Unk_ov118_022955c819func_ov118_02294d98Ev();
void _ZN18Unk_ov118_022955c819func_ov118_02294d6cEv();
void _ZN18Unk_ov118_022955c819func_ov118_02294d38Ev();
void _ZN18Unk_ov118_022955c819func_ov118_02294d1cEv();
void _ZN18Unk_ov118_022955c819func_ov118_02294c60Ev();
void _ZN18Unk_ov118_022955c819func_ov118_02294c00Ev();
void _ZN18Unk_ov118_022955c819func_ov118_02294bacEv();
void _ZN18Unk_ov118_022955c819func_ov118_02294b4cEv();
void _ZN18Unk_ov118_022955c819func_ov118_022946d4Ev();
void _ZN18Unk_ov118_022955c819func_ov118_0229468cEv();
void _ZN18Unk_ov118_022955c819func_ov118_0229463cEv();
void _ZN18Unk_ov118_022955c819func_ov118_02294534Ev();
void _ZN18Unk_ov118_022955c819func_ov118_02294508Ev();
void _ZN18Unk_ov118_022955c819func_ov118_022944c0Ev();
void _ZN18Unk_ov118_022955c819func_ov118_0229447cEv();
void _ZN18Unk_ov118_022955c819func_ov118_02294458Ev();
void _ZN18Unk_ov118_022955c819func_ov118_02294420Ev();
void _ZN18Unk_ov118_022955c819func_ov118_022943f4Ev();
void _ZN18Unk_ov118_022955c819func_ov118_02294288Ev();
}
extern "C" void *data_ov118_02295520[2];
extern "C" void *data_ov118_02295518[2];
extern "C" void *data_ov118_02295510[2];
extern "C" void *data_ov118_02295508[2];
extern "C" void *data_ov118_022954a0[2];
extern "C" void *data_ov118_022954f8[2];
extern "C" void *data_ov118_022954f0[2];
extern "C" void *data_ov118_022954e8[2];
extern "C" void *data_ov118_02295498[2];
extern "C" void *data_ov118_022954d0[2];
extern "C" void *data_ov118_022954d8[2];
extern "C" void *data_ov118_022954b8[2];
extern "C" void *data_ov118_02295528[2];
extern "C" void *data_ov118_022954a8[2];
extern "C" void *data_ov118_02295488[2];
extern "C" void *data_ov118_02295490[2];
extern "C" void *data_ov118_022954c0[2];
extern "C" void *data_ov118_022954c8[2];
extern "C" void *data_ov118_022954e0[2];
extern "C" void *data_ov118_022954b0[2];
extern "C" Unk_ov118_SceneEntry data_ov118_02295480;
extern "C" Unk_ov118_02295500 data_ov118_02295500;
extern "C" const u8 data_ov118_02295450[5];
extern "C" const u8 data_ov118_02295458[5];
extern "C" const u8 data_ov118_02295460[5];
extern "C" u32 data_ov118_02295530[8];
extern "C" u32 data_ov118_02295550[8];
extern "C" u32 data_ov118_02295570[20];





static inline BOOL Unk_ov118_022946d4_Both() {
    if (data_021f4770 != 0 && data_021f4774 != 0) return TRUE;
    return FALSE;
}

struct Unk_ov118_02294a58_Vec {
    s32 x, y, z;
};

static inline BOOL Unk_ov118_02294a58_IsZero(u8 v) {
    return v == 0 ? TRUE : FALSE;
}

extern "C" Unk_ov118_022955c8 *func_ov118_022953a0() { return new Unk_ov118_022955c8(); }

BOOL Unk_ov118_022955c8::vfunc_00() {
    func_ov118_02294a58();
    func_ov002_02200a50(0);
    func_ov002_02200a60(1);
    return TRUE;
}

BOOL Unk_ov118_022955c8::vfunc_0c() {
    ((Unk_ov090_022921e0 *)func_020ed174(this))->func_ov090_02291d2c();
    func_ov118_02294a38();
    return TRUE;
}

BOOL Unk_ov118_022955c8::vfunc_24() {
    u32 base = unk_94 + 0x60;
    s32 i;
    if (func_ov118_02292e20(4)) {
        if (func_ov118_02292e20(8)) {
            unk_43c.func_0208dae8(0x67, (unk_94 - 0x12) + unk_a4);
        }
        if (func_0206ef00()) {
            if (func_ov118_02292e20(0x1000)) {
                s32 a = unk_43c.func_ov002_02202e84();
                s32 b = unk_43c.func_ov002_02202e60();
                ((Unk_ov002_02202d98 *)&unk_484)->func_ov002_02202a40(a, b);
            }
            ((Unk_ov002_02202d98 *)&unk_484)->func_ov002_02202844();
        }
        func_02087e70(1, data_ov118_02295570, 0x80, base, -1, 2, 0x1000, 0x1000, 0, -1, 0, 0);
        s32 x0, x1;
        if (func_ov118_02292e20(1)) {
            x1 = 0xc;
            x0 = 0xd;
        } else {
            x1 = 0xb;
            x0 = 0xe;
        }
        func_02087e70(1, data_ov118_02295530, 0x80, base, x0, 2, 0x1000, 0x1000, 0, -1, 0, 0);
        func_02087e70(1, data_ov118_02295550, 0x80, base, x1, 2, 0x1000, 0x1000, 0, -1, 0, 0);
        if (func_0206ef00() && func_ov118_02292e20(0x800)) {
            u32 t = unk_ad;
            if (t != 0xe) {
                u8 *e = (u8 *)this + t * 3;
                if (e[0x4573] != 0xc) {
                    func_ov118_02293c3c(e[0x4571], unk_94 + e[0x4572], 0xb, 0, -1);
                }
            }
        }
        unk_b1 = (unk_b1 + 1) & 0xf;
        if ((unk_b1 & 0xc) != 0) {
            func_ov118_02293c3c(unk_9e, unk_9f + unk_94, 0xa, 0, -1);
        }
        for (i = 0; i < 3; i++) {
            u8 *e = (u8 *)this + i * 3;
            u32 c = e[0x456a];
            if (c != 0xc) {
                func_ov118_02293c3c(e[0x4568], unk_94 + e[0x4569], (u8)(c & 0x7f), (c & 0x80) != 0 ? 1 : 0, -1);
            }
        }
        for (i = 0; i < 14; i++) {
            u8 *e = (u8 *)this + i * 3;
            u8 *q = e + 0x4573;
            if (*q != 0xc) {
                s32 f;
                if (i == unk_a9 && !func_ov118_02292e20(0x100)) {
                    f = 8;
                } else {
                    f = -1;
                }
                func_ov118_02293c3c(e[0x4571], unk_94 + e[0x4572], *q, 0, f);
            }
        }
        if (func_ov118_02292e20(8)) {
            unk_43c.vfunc_08();
        }
    }
    return TRUE;
}

extern "C" u32 data_ov118_02295550[8] = {0x404d00d3, 0x0000c1a5, 0x005d80d3, 0x0000c1a7, 0x004d40e3, 0x0000c1e5, 0x005d00e3, 0xffffc1e7};

extern "C" const u8 data_ov118_02295458[5] = {0x02, 0x03, 0x00, 0x01, 0x04};

extern "C" void *data_ov118_022954f8[2] = {(void *)_ZN18Unk_ov118_022955c819func_ov118_02294c60Ev, 0};

extern "C" void *data_ov118_022954c0[2] = {(void *)_ZN18Unk_ov118_022955c819func_ov118_02294458Ev, 0};

extern "C" void *data_ov118_02295490[2] = {(void *)_ZN18Unk_ov118_022955c819func_ov118_0229447cEv, 0};

extern "C" void *data_ov118_02295528[2] = {(void *)_ZN18Unk_ov118_022955c819func_ov118_02294534Ev, 0};

extern "C" void *data_ov118_02295520[2] = {(void *)_ZN18Unk_ov118_022955c819func_ov118_02294dc4Ev, 0};

extern "C" void *data_ov118_02295518[2] = {(void *)_ZN18Unk_ov118_022955c819func_ov118_02294d98Ev, 0};

extern "C" void *data_ov118_02295510[2] = {(void *)_ZN18Unk_ov118_022955c819func_ov118_02294d6cEv, 0};

extern "C" void *data_ov118_02295508[2] = {(void *)_ZN18Unk_ov118_022955c819func_ov118_02294d38Ev, 0};

extern "C" Unk_ov118_02295500 data_ov118_02295500 = {0xf8, 0x1f8, 0, 1, 0xc0, 0x1c, 0xffff};

extern "C" void *data_ov118_02295498[2] = {(void *)_ZN18Unk_ov118_022955c819func_ov118_02294b4cEv, 0};

extern "C" const u8 data_ov118_02295450[5] = {0x0b, 0x0c, 0x09, 0x0a, 0x0d};

extern "C" void *data_ov118_022954a0[2] = {(void *)_ZN18Unk_ov118_022955c819func_ov118_02294d1cEv, 0};

extern "C" void *data_ov118_022954d0[2] = {(void *)_ZN18Unk_ov118_022955c819func_ov118_022946d4Ev, 0};

extern "C" void *data_ov118_022954d8[2] = {(void *)_ZN18Unk_ov118_022955c819func_ov118_0229468cEv, 0};

extern "C" void *data_ov118_022954e8[2] = {(void *)_ZN18Unk_ov118_022955c819func_ov118_02294bacEv, 0};

BOOL Unk_ov118_022955c8::vfunc_4c() {
    static Unk_ov118_022955c8_Fn tbl[9] = {*(Unk_ov118_022955c8_Fn *)data_ov118_02295520, *(Unk_ov118_022955c8_Fn *)data_ov118_02295518, *(Unk_ov118_022955c8_Fn *)data_ov118_02295510, *(Unk_ov118_022955c8_Fn *)data_ov118_02295508, *(Unk_ov118_022955c8_Fn *)data_ov118_022954a0, *(Unk_ov118_022955c8_Fn *)data_ov118_022954f8, *(Unk_ov118_022955c8_Fn *)data_ov118_022954f0, *(Unk_ov118_022955c8_Fn *)data_ov118_022954e8, *(Unk_ov118_022955c8_Fn *)data_ov118_02295498};
    func_ov118_02294a30();
    (this->*tbl[unk_8c])();
    func_ov118_02294964();
    return TRUE;
}

extern "C" void *data_ov118_022954b8[2] = {(void *)_ZN18Unk_ov118_022955c819func_ov118_0229463cEv, 0};

extern "C" u32 data_ov118_02295530[8] = {0x402a00d3, 0x0000e1a2, 0x003a80d3, 0x0000e1a4, 0x002a40e3, 0x0000e1e2, 0x003a00e3, 0xffffe1e4};

extern "C" void *data_ov118_022954a8[2] = {(void *)_ZN18Unk_ov118_022955c819func_ov118_02294508Ev, 0};

void Unk_ov118_022955c8::func_ov118_02294f14() {
    static Unk_ov118_022955c8_Fn tbl[11] = {*(Unk_ov118_022955c8_Fn *)data_ov118_022954d0, *(Unk_ov118_022955c8_Fn *)data_ov118_022954d8, *(Unk_ov118_022955c8_Fn *)data_ov118_022954b8, *(Unk_ov118_022955c8_Fn *)data_ov118_02295528, *(Unk_ov118_022955c8_Fn *)data_ov118_022954a8, *(Unk_ov118_022955c8_Fn *)data_ov118_02295488, *(Unk_ov118_022955c8_Fn *)data_ov118_02295490, *(Unk_ov118_022955c8_Fn *)data_ov118_022954c0, *(Unk_ov118_022955c8_Fn *)data_ov118_022954c8, *(Unk_ov118_022955c8_Fn *)data_ov118_022954e0, *(Unk_ov118_022955c8_Fn *)data_ov118_022954b0};
    (this->*tbl[unk_8d])();
}

extern "C" void *data_ov118_022954e0[2] = {(void *)_ZN18Unk_ov118_022955c819func_ov118_022943f4Ev, 0};

extern "C" void *data_ov118_022954c8[2] = {(void *)_ZN18Unk_ov118_022955c819func_ov118_02294420Ev, 0};

extern "C" Unk_ov118_SceneEntry data_ov118_02295480 = {func_ov118_022953a0, 0xa1, 0xa5};

extern "C" void *data_ov118_022954b0[2] = {(void *)_ZN18Unk_ov118_022955c819func_ov118_02294288Ev, 0};

extern "C" const u8 data_ov118_02295460[5] = {0x02, 0x03, 0x04, 0x05, 0x06};

extern "C" void *data_ov118_022954f0[2] = {(void *)_ZN18Unk_ov118_022955c819func_ov118_02294c00Ev, 0};

extern "C" void *data_ov118_02295488[2] = {(void *)_ZN18Unk_ov118_022955c819func_ov118_022944c0Ev, 0};

extern "C" u32 data_ov118_02295570[20] = {
    0x819d40b8, 0x000061ab, 0x81bd40b8, 0x000061af, 0x81dd40b8, 0x000061b3, 0x81fd40b8, 0x000061b7,
    0x401d00b8, 0x000061bb, 0x81f540b8, 0x000060d9, 0x81d540b8, 0x000060d9, 0x81b540b8, 0x000060d9,
    0x901540b8, 0x000060d8, 0x819540b8, 0xffff60d8};

BOOL Unk_ov118_022955c8::vfunc_50() {
    if (func_ov118_02294e38()) {
        return TRUE;
    }
    func_ov118_02294938();
    func_ov118_02294f14();
    func_ov118_02294930();
    return TRUE;
}

BOOL Unk_ov118_022955c8::vfunc_54() { return TRUE; }

BOOL Unk_ov118_022955c8::vfunc_58() { return TRUE; }

BOOL Unk_ov118_022955c8::vfunc_5c() {
    func_020ed188(this);
    return TRUE;
}

BOOL Unk_ov118_022955c8::func_ov118_02294e38() {
    func_0206e63c();
    if (func_0206e61c()) {
        return func_ov118_02294df8(7);
    }
    if (unk_8d != 0 && unk_8d != 3 && unk_8d != 10) {
        return FALSE;
    }
    s32 r = -1;
    if (func_0206ef0c()) {
        r = func_ov090_02291aa0();
    } else {
        u16 k = data_021f47d8[1];
        if ((k & 0x400) != 0 || (k & 2) != 0) {
            r = 7;
        } else if ((k & 0x800) != 0) {
            r = 0;
        } else if ((k & 4) != 0) {
            r = 4;
        }
    }
    return func_ov118_02294df8(r);
}

BOOL Unk_ov118_022955c8::func_ov118_02294df8(s32 x) {
    void *r = func_020ed174(this);
    if (x != -1 && x != 5) {
        ((Unk_ov090_022921e0 *)r)->func_ov090_02291d8c((u8)x);
        unk_8c = 7;
        func_ov002_02200a60(1);
        return TRUE;
    }
    return FALSE;
}

void Unk_ov118_022955c8::func_ov118_02294dc4() {
    func_ov118_022948fc();
    func_ov118_0229484c();
    func_ov002_02200a50(1);
    if (!func_ov118_02292e20(0x2000)) {
        func_ov118_02294d98();
    }
}

void Unk_ov118_022955c8::func_ov118_02294d98() {
    func_ov118_0229482c();
    func_ov002_02200a50(2);
    if (!func_ov118_02292e20(0x2000)) {
        func_ov118_02294d6c();
    }
}

void Unk_ov118_022955c8::func_ov118_02294d6c() {
    func_ov118_02294814();
    func_ov002_02200a50(3);
    if (!func_ov118_02292e20(0x2000)) {
        func_ov118_02294d38();
    }
}

void Unk_ov118_022955c8::func_ov118_02294d38() {
    func_ov118_022947c4();
    func_ov002_02200a50(4);
    if (!func_ov118_02292e20(0x2000)) {
        func_ov118_02294d1c();
        func_ov118_02292e00(0x2000);
    }
}

void Unk_ov118_022955c8::func_ov118_02294d1c() {
    func_ov118_02293e14();
    func_ov118_02294138();
    func_ov002_02200a50(5);
}

void Unk_ov118_022955c8::func_ov118_02294c60() {
    u32 buf[8];
    func_ov118_02294764();
    _ZN12Unk_020dd38cC2Ev(buf);
    func_020638d0(data_021d7352, buf);
    func_020b3544(0, buf);
    Unk_020e0488 *o = func_ov118_02293ff0();
    o->func_0206fb9c(8, 0x1ab, 0x12, 0xf, 0, 0);
    func_0206f9fc(o, 0xa9);
    o->func_0206fab4(1, 0);
    _ZN12Unk_020dd38cD1Ev(buf);
    func_ov002_022008e0(0xa, 3, 0, 0x30);
    func_020020b8(4);
    func_ov002_02200840(4, 0, 0);
    func_020020b8(6);
    func_ov002_02200840(6, 0, 0x50 - unk_98);
    func_ov118_02292e10(4);
    unk_94 = func_ov002_02200920();
    func_ov002_02200a50(6);
}

void Unk_ov118_022955c8::func_ov118_02294c00() {
    if (func_ov002_02200908(0)) {
        func_ov002_02200a60(2);
        if (func_0206ef0c()) {
            func_ov118_02294270();
        } else {
            func_ov118_02294228();
        }
    }
    func_ov002_02200840(4, 0, 0);
    func_ov002_02200840(6, 0, 0x50 - unk_98);
    unk_94 = func_ov002_02200920();
}

void Unk_ov118_022955c8::func_ov118_02294bac() {
    func_ov118_022932ec();
    func_ov002_022008c4(0xa, 0, 0, 0x30);
    func_ov002_02200840(4, 0, 0);
    func_ov002_02200840(6, 0, 0x50 - unk_98);
    func_ov002_02200a50(8);
    unk_94 = func_ov002_02200920();
}

void Unk_ov118_022955c8::func_ov118_02294b4c() {
    if (func_ov002_022008fc(0)) {
        func_020021a0(4);
        func_020021a0(6);
        func_ov118_02292e00(4);
        func_ov002_02200a60(5);
    } else {
        func_ov002_02200840(4, 0, 0);
        func_ov002_02200840(6, 0, 0x50 - unk_98);
        unk_94 = func_ov002_02200920();
    }
}

void Unk_ov118_022955c8::func_ov118_02294a58() {
    volatile Unk_ov118_02294a58_Vec v;
    Unk_ov118_02294a58_Vec *p;
    unk_a0 = 0;
    unk_9c = 0;
    unk_98 = 0;
    unk_9a = 0;
    unk_a4 = 0;
    unk_94 = 0;
    unk_a8 = 0;
    unk_ac = 8;
    unk_ae = 0x58;
    unk_af = 0x70;
    unk_ad = 0xe;
    func_ov118_02293994(0);
    func_ov118_02293f24();
    if (Unk_ov118_02294a58_IsZero(data_020e416c)) {
        p = (Unk_ov118_02294a58_Vec *)func_020947f0(4);
        v.x = p->x;
        v.y = p->y;
        v.z = p->z;
    } else {
        func_020b4934();
        p = (Unk_ov118_02294a58_Vec *)func_020b5010(data_021ef360);
        v.x = p->x;
        v.y = p->y;
        v.z = p->z;
    }
    s32 z = (v.z + 0x800) >> 12;
    unk_9e = ((v.x + 0x800) >> 12) - 8;
    unk_9f = z + 13;
    unk_43c.func_0208d9d4(1);
    if (((Unk_ov090_022921e0 *)func_020ed174(this))->func_ov090_02291934()) {
        func_ov118_02292e10(0x2000);
    }
}

void Unk_ov118_022955c8::func_ov118_02294a38() {
    func_ov118_02294024();
    unk_b4[0].func_020b87d0();
    unk_b4[1].func_020b87d0();
}

void Unk_ov118_022955c8::func_ov118_02294a30() {
    func_ov118_02294024();
}

void Unk_ov118_022955c8::func_ov118_02294964() {
    if (func_ov118_02293794()) {
        func_ov118_022936e4();
        func_020021fc(6, 0, unk_98 - 0x50);
        if (unk_a3 != (unk_98 >> 4)) {
            func_ov118_02292e10(0x80);
        }
    }
    func_ov118_02293498();
    if (func_ov118_02292e20(0x80)) {
        func_ov118_02294138();
        func_ov118_02292e00(0x80);
    }
    if (func_ov118_02292e20(0x20)) {
        if (unk_b4[1].func_020b86c0((u32)unk_4e8, 4, 0x800, 0)) {
            func_ov118_02292e00(0x20);
        }
    }
    if (func_ov118_02292e20(2)) {
        if (unk_b4[0].func_020b86c0((u32)unk_ce8, 6, 0x800, 0)) {
            func_ov118_02292e00(2);
        }
    }
}

void Unk_ov118_022955c8::func_ov118_02294938() {
    func_ov118_02294a30();
    unk_43c.vfunc_0c();
    unk_484.vfunc_0c();
}

void Unk_ov118_022955c8::func_ov118_02294930() {
    func_ov118_02294964();
}

void Unk_ov118_022955c8::func_ov118_022948fc() {
    func_02002398(4, 2);
    func_02002398(6, 2);
    func_0200226c(4, 0, 0, 0);
    func_0200226c(6, 0, 0, 0);
}

void Unk_ov118_022955c8::func_ov118_0229484c() {
    u32 p = data_021f482c;
    func_020026c4("menu/map/b_map_bg.bpl", p, 4, 1, 1, 0xf);
    func_0200261c("menu/map/b_map_bg_0.bch", p, 4, 0x11, 0x11, 0x5f);
    func_0200261c("menu/map/b_map_bg_1.bch", p, 4, 0x230, 0x230, 0x25f);
    func_020641b4("menu/map/b_map_a_bg.bsc", unk_4e8, 0x800);
    func_020024f0(unk_4e8, 4, 0x800, 0);
    func_020641b4("menu/map/b_map_b_bg.bsc", unk_1ce8, 0x800);
    func_0206ee80(unk_1ce8, 0x13, 0, 0x1c, 1, 4);
}

s32 Unk_ov118_022955c8::func_ov118_0229482c() {
    func_ov117_022923d8();
    func_ov117_022923bc(0);
    func_ov117_022923a0(0);
    func_ov117_022923a0(1);
}

s32 Unk_ov118_022955c8::func_ov118_02294814() {
    func_ov117_022923bc(1);
    func_ov117_022923bc(2);
}

void Unk_ov118_022955c8::func_ov118_022947c4() {
    u8 *a, *b;
    func_ov117_022923bc(3);
    a = unk_24e8;
    func_ov117_02292c88(&unk_44e8);
    b = (u8 *)&unk_44e8;
    func_ov094_02292360(a, b);
    func_02002438(a, 4, 0x60, 0x60, 0x15f);
    func_ov118_02293ae0(b);
}

void Unk_ov118_022955c8::func_ov118_02294764() {
    u32 p = data_021f482c;
    func_020026c4("menu/map/b_map_obj.bpl", p, 8, 6, 6, 0xe);
    func_0200261c("menu/map/b_map_obj_0.bch", p, 8, 0xc0, 0xc0, 0xff);
    func_0200261c("menu/map/b_map_obj_1.bch", p, 8, 0x180, 0x180, 0x1ff);
}

void Unk_ov118_022955c8::func_ov118_022946d4() {
    if (func_ov002_02200a14(1)) {
        func_ov118_02294228();
        return;
    }
    if (Unk_ov118_022946d4_Both()) {
        if (func_ov118_02293524()) {
            func_0200402c(0x36);
        } else if (func_ov118_02293660()) {
            unk_43c.func_ov002_02202f00();
        } else if (func_ov118_02293aa8()) {
            func_ov118_02292e34(0x38);
        } else if (func_ov118_02293cd0()) {
            func_ov118_02292e34(0x37);
        }
    }
}

void Unk_ov118_022955c8::func_ov118_0229468c() {
    if (data_021f4770 == 0) {
        unk_43c.func_0208d9d4(3);
        func_ov118_02294270();
    }
    func_ov118_02293604(unk_a7 + (data_021ef5ec - unk_a5));
}

void Unk_ov118_022955c8::func_ov118_0229463c() {
    u32 v;
    if (data_021f4770 == 0) {
        unk_43c.func_0208d9d4(3);
        func_ov118_02294270();
    }
    v = unk_a4;
    func_020e761c(&v, data_021ef5ec - 0x54, 8);
    func_ov118_02293604(v);
}

void Unk_ov118_022955c8::func_ov118_02294534() {
    if (func_ov002_022009d4()) {
        func_ov118_02294270();
        return;
    }
    switch (func_ov118_02292f7c((void *)func_ov002_022009c8())) {
    case 1:
        if (func_ov118_02292e20(8)) {
            u8 t = unk_ac;
            if (t >= 0xa && t <= 0xf) {
                func_ov118_022937a0(unk_98 & ~0xf);
            }
        }
        func_ov118_02293274();
        break;
    case 2:
        func_ov118_02293994(0);
        func_ov118_02293924(0xe);
        unk_ad = func_ov118_02293a48(unk_ae, unk_af);
        func_ov118_02292e10(0x800);
        func_ov002_02200a58(0xa);
        func_ov118_02293274();
        break;
    case 3:
        func_ov118_02293274();
        break;
    default: {
        u32 trg = data_021f47d8[1];
        if (trg & 1) {
            func_ov118_02293254();
        } else if (trg & 0x100) {
            func_ov118_02294df8(func_ov090_02291a38(5));
        } else if (trg & 0x200) {
            func_ov118_02294df8(func_ov090_02291a58(5));
        }
        break;
    }
    }
}

void Unk_ov118_022955c8::func_ov118_02294508() {
    if (((Unk_ov002_02202d98 *)&unk_484)->func_ov002_022028f0() == 0) {
        func_ov002_02200a58(unk_ab);
        func_ov118_02294f14();
    }
}

void Unk_ov118_022955c8::func_ov118_022944c0() {
    if (_ZN12Unk_020e100c13func_0208d4fcEv(&unk_484)) {
        s32 r = func_ov118_02292e78();
        if (r != 1) {
            if (r == 2) {
                func_ov118_022937b0(0);
                unk_a3 = 0xff;
                func_ov118_02293234();
            } else {
                func_ov118_02293234();
            }
        }
    }
}

void Unk_ov118_022955c8::func_ov118_0229447c() {
    if (_ZN12Unk_020e100c13func_0208d4fcEv(&unk_484)) {
        func_ov118_02293214();
        if (func_ov118_02292e20(0x800)) {
            func_ov002_02200a58(0xa);
        } else {
            func_ov002_02200a58(3);
        }
    }
}

void Unk_ov118_022955c8::func_ov118_02294458() {
    if (unk_43c.func_0208d9a8()) {
        func_ov002_02200a58(8);
    }
}

void Unk_ov118_022955c8::func_ov118_02294420() {
    if ((data_021f47d8[0] & 1) == 0) {
        unk_43c.func_0208d9d4(3);
        func_ov002_02200a58(9);
    } else {
        func_ov118_022935a0();
    }
}

void Unk_ov118_022955c8::func_ov118_022943f4() {
    if (unk_43c.func_0208d9a8()) {
        func_ov118_02293234();
        func_ov118_02292e00(0x1000);
    }
}

void Unk_ov118_022955c8::func_ov118_02294288() {
    s32 trg, x, y, cur, ox, oy;
    if (func_ov002_022009d4()) {
        func_ov118_02294270();
        return;
    }
    trg = data_021f47d8[1];
    if ((trg & 1) && unk_ad != 0xe) {
        func_ov118_02293254();
        return;
    }
    if (trg & 0x100) {
        func_ov118_02294df8(func_ov090_02291a38(5));
        return;
    }
    if (trg & 0x200) {
        func_ov118_02294df8(func_ov090_02291a58(5));
        return;
    }
    ox = unk_ae;
    x = ox;
    oy = unk_af;
    y = oy;
    cur = data_021f47d8[0];
    if (cur & 0x40) {
        y = oy - 4;
    } else if (cur & 0x80) {
        y = oy + 4;
    }
    if (y < 0x30) {
        unk_ac = func_ov090_02291944(ox);
        ((Unk_ov002_0220464c *)&unk_484)->func_ov002_02202be0();
        func_ov118_022941f4();
        return;
    }
    if (y > 0xb0) y = 0xb0;
    if (cur & 0x20) {
        x = x - 4;
    } else if (cur & 0x10) {
        x = x + 4;
    }
    if (x < 0x18) {
        x = 0x18;
    } else if (x > 0x98) {
        if (y < 0x50) {
            unk_ac = 9;
        } else {
            y = (y - 0x50) >> 4;
            if (y >= func_ov118_02293d50()) {
                y = func_ov118_02293d50() - 1;
            }
            y += 0xa;
            unk_ac = y;
        }
        func_ov118_022941f4();
        return;
    }
    if (x == ox && y == oy) return;
    unk_ae = x;
    unk_af = y;
    unk_ad = func_ov118_02293a48(unk_ae, unk_af);
    ((Unk_ov002_02202d98 *)&unk_484)->func_ov002_02202a40(unk_ae, unk_af);
}

void Unk_ov118_022955c8::func_ov118_02294270() {
    func_ov118_022932ec();
    func_ov002_02200a58(0);
}

void Unk_ov118_022955c8::func_ov118_02294228() {
    unk_43c.func_0208d9d4(1);
    func_ov118_022933cc();
    func_ov002_02200980();
    if (func_ov118_02292e20(0x800)) {
        func_ov002_02200a58(0xa);
    } else {
        func_ov002_02200a58(3);
    }
}

void Unk_ov118_022955c8::func_ov118_022941f4() {
    func_ov118_02293994(0);
    func_ov118_02293924(0xe);
    func_ov118_02292e00(0x800);
    func_ov002_02200a58(3);
    func_ov118_02293274();
}

void Unk_ov118_022955c8::func_ov118_02294138() {
    volatile u16 v0, v1, v2, v3;
    s32 off, j, i, n;
    func_02115e48(unk_14e8, unk_ce8, 0x800);
    n = unk_98 >> 4;
    unk_a3 = n;
    off = 0x13;
    for (i = 0; i < n; i++) {
        v0 = 0x10;
        func_02115e30(v0, unk_ce8 + off, 0x14);
        v1 = 0x10;
        func_02115e30(v1, unk_ce8 + (off + 0x20), 0x14);
        off += 0x40;
    }
    j = n + 7;
    off = j * 0x40 + 0x13;
    for (; j < 13; j++) {
        v2 = 0x10;
        func_02115e30(v2, unk_ce8 + off, 0x14);
        v3 = 0x10;
        func_02115e30(v3, unk_ce8 + (off + 0x20), 0x14);
        off += 0x40;
    }
    func_ov118_02292e10(2);
}

void Unk_ov118_022955c8::func_ov118_022940a0() {
    s32 i;
    u8 *tbl;
    func_02115e48(unk_1ce8, unk_14e8, 0x800);
    tbl = func_ov118_02293d70();
    for (i = 0; i < 13; i++) {
        s32 a = func_ov118_0229404c(tbl[i], i) * 0x40 + 0x13;
        s32 b = i * 0x40 + 0x13;
        unk_14e8[b] = unk_1ce8[a];
        unk_14e8[b + 1] = unk_1ce8[a + 1];
        unk_14e8[b + 0x20] = unk_1ce8[a + 0x20];
        unk_14e8[b + 0x21] = unk_1ce8[a + 0x21];
    }
    func_ov118_02292e10(2);
}

s32 Unk_ov118_022955c8::func_ov118_0229404c(u32 x, s32 idx) {
    if (x == 0) return 7;
    if (x < 6) return 0;
    if (x >= 6 && x < 14) return 1;
    switch (x - 14) {
    case 2: return 2;
    case 0: return 3;
    case 3: return 4;
    case 1: return 5;
    case 4: return 6;
    }
    return 7;
}

void Unk_ov118_022955c8::func_ov118_02294024() {
    s32 i = 0;
    unk_a0 = 0;
    Unk_020e0488 *p = unk_fc;
    do {
        (p + i)->func_0206fc44();
        i++;
    } while (i < 13);
}

Unk_020e0488 *Unk_ov118_022955c8::func_ov118_02293ff0() {
    if (unk_a0 >= 13) {
        return &unk_fc[12];
    }
    unk_a0 = unk_a0 + 1;
    return &unk_fc[unk_a0 - 1];
}

void Unk_ov118_022955c8::func_ov118_02293f24() {
    s32 n = 0;
    s32 m, i;
    m = func_02097740(data_021d735c, _ZN12Unk_0209865c13func_0209888cEv(func_0209750c()));
    if (m != -1) {
        unk_454e[0] = 1;
        n++;
    }
    for (i = 0; i < 4; i++) {
        if (i == m) {
            continue;
        }
        if (!func_020978c8(data_021d735c, i)) {
            continue;
        }
        unk_454e[n] = i + 2;
        n++;
    }
    unk_b0 = n;
    for (i = 0; i < 8; i++) {
        if (func_0207bf84(data_021dfd8c, i)) {
            unk_454e[n] = i + 6;
            n++;
        }
    }
    unk_a1 = n;
    for (; n < 0xd; n++) {
        unk_455b[n] = 0;
    }
    n = 0;
    for (i = 0; i < 5; i++) {
        unk_455b[n] = i + 0xe;
        n++;
    }
    unk_a2 = n;
    for (; n < 0xd; n++) {
        unk_455b[n] = 0;
    }
}

void Unk_ov118_022955c8::func_ov118_02293ef0() {
    if (func_ov118_02292e20(1)) {
        func_ov118_02293e98(unk_455b);
    } else {
        func_ov118_02293e98(unk_454e);
    }
}

s32 Unk_ov118_022955c8::func_ov118_02293e98(u8 *tbl) {
    s32 i;
    for (i = 0; i < 0xd; i++) {
        Unk_020e0488 *w = func_ov118_02293ff0();
        w->func_0206fb9c(6, (i << 4) + 0x160, 8, 1, 0xf, 0);
        func_ov118_02293e2c(w, tbl[i]);
        w->func_0206fab4(0, 0);
    }
}

void Unk_ov118_022955c8::func_ov118_02293e2c(Unk_020e0488 *p, u32 idx) {
    if (idx == 0) {
        _ZN12Unk_020e2a7813func_020a7c3cEv(p);
    } else if (idx == 1) {
        func_ov002_022019a4(p, _ZN12Unk_0209865c13func_0209888cEv(func_0209750c()));
    } else if (idx >= 2 && idx < 6) {
        func_ov002_02201984(p, idx - 2);
    } else if (idx >= 6 && idx < 0xe) {
        func_ov002_02201938(p, idx - 6);
    } else if (idx >= 0xe && idx < 0x13) {
        func_0206f9fc(p, idx + 0x88);
    } else {
        _ZN12Unk_020e2a7813func_020a7c3cEv(p);
    }
}

void Unk_ov118_022955c8::func_ov118_02293e14() {
    func_ov118_02292e00(1);
    func_ov118_02293d98();
}

void Unk_ov118_022955c8::func_ov118_02293dfc() {
    func_ov118_02292e10(1);
    func_ov118_02293d98();
}

s32 Unk_ov118_022955c8::func_ov118_02293d98() {
    s32 k;
    func_ov118_022940a0();
    func_ov118_02293ef0();
    if (func_ov118_02293d34() == 0) {
        func_ov118_02292e00(8);
        k = 4;
    } else {
        func_ov118_02292e10(8);
        k = 3;
    }
    func_0206ee80(unk_4e8, 0x1d, 0xa, 0x1d, 0x15, k);
    func_ov118_02292e10(0x20);
    func_ov118_02293924(unk_aa);
}

u8 *Unk_ov118_022955c8::func_ov118_02293d70() {
    if (func_ov118_02292e20(1)) {
        return unk_455b;
    }
    return unk_454e;
}

u8 Unk_ov118_022955c8::func_ov118_02293d50() {
    if (func_ov118_02292e20(1)) {
        return unk_a2;
    }
    return unk_a1;
}

s32 Unk_ov118_022955c8::func_ov118_02293d34() {
    u32 r = func_ov118_02293d50();
    if (r <= 6) {
        return 0;
    }
    return (r - 6) << 4;
}

BOOL Unk_ov118_022955c8::func_ov118_02293cd0() {
    s32 x = data_021ef5f0;
    s32 y = data_021ef5ec;
    s32 idx;
    if (x < 0x98 || x > 0xe8) {
        return FALSE;
    }
    if (y < 0x50 || y >= 0xb0) {
        return FALSE;
    }
    idx = (y + (unk_98 - 0x50)) >> 4;
    if (func_ov118_02292e20(1) && idx == 5) {
        return FALSE;
    }
    func_ov118_02293994(idx + 0xf);
    return TRUE;
}

void Unk_ov118_022955c8::func_ov118_02293c3c(s32 x, s32 y, s32 n, s32 flag, s32 pal) {
    u16 t;
    data_ov118_02295500.tile = n * 2 + 0xc0;
    if (flag != 0) {
        t = data_ov118_02295500.pal | 8;
        data_ov118_02295500.pal = t;
    }
    func_02088730(1, &data_ov118_02295500, x, y, pal, 1, 0);
    if (flag != 0) {
        data_ov118_02295500.pal = t & 0x17;
    }
}

void Unk_ov118_022955c8::func_ov118_02293ae0(void *p) {
    s32 k, i;
    u32 j;
    s16 *rec;
    i = 0;
    k = i;
    for (; k < 3; i++, k++) {
        rec = func_ov117_02292c40(p, i);
        if (rec != 0) {
            switch (func_ov117_02292c2c(p, i)) {
            case 0:
                *((u8 *)this + k * 3 + 0x456a) = 8;
                break;
            case 1:
                *((u8 *)this + k * 3 + 0x456a) = 7;
                break;
            case 2:
                *((u8 *)this + k * 3 + 0x456a) = 9;
                break;
            case 3:
                *((u8 *)this + k * 3 + 0x456a) = 0x89;
                break;
            default:
                *((u8 *)this + k * 3 + 0x456a) = 0xc;
                break;
            }
            *((u8 *)this + k * 3 + 0x4568) = rec[0] - 8;
            *((u8 *)this + k * 3 + 0x4569) = rec[1] + 0x10;
        } else {
            *((u8 *)this + k * 3 + 0x456a) = 0xc;
        }
    }
    j = 3;
    k = 0;
    for (; k < 0xe; j++, k++) {
        rec = func_ov117_02292c40(p, j);
        if (rec != 0) {
            if (j >= 3 && j <= 0xa) {
                *((u8 *)this + k * 3 + 0x4573) = 0;
            } else if (j == 0xb) {
                *((u8 *)this + k * 3 + 0x4573) = 1;
            } else {
                *((u8 *)this + k * 3 + 0x4573) = *(data_ov118_02295460 + j - 0xc);
            }
            *((u8 *)this + k * 3 + 0x4571) = rec[0] - 8;
            *((u8 *)this + k * 3 + 0x4572) = rec[1] + 0x10;
        } else {
            *((u8 *)this + k * 3 + 0x4573) = 0xc;
        }
    }
}

BOOL Unk_ov118_022955c8::func_ov118_02293aa8() {
    u8 r = func_ov118_02293a48(data_021ef5f0, data_021ef5ec);
    if (r == 0xe) {
        return FALSE;
    }
    func_ov118_02293994(r + 1);
    return TRUE;
}

u8 Unk_ov118_022955c8::func_ov118_02293a48(s32 x, s32 y) {
    s32 i;
    for (i = 0; i < 0xe; i++) {
        u8 *e = (u8 *)this + i * 3;
        if (e[0x4573] != 0xc) {
            s32 px = e[0x4571];
            if (px - 8 < x && px + 8 > x) {
                s32 py = e[0x4572];
                if (py - 8 < y && py + 8 > y) {
                    return (u8)i;
                }
            }
        }
    }
    return 0xe;
}

void Unk_ov118_022955c8::func_ov118_02293994(u8 v) {
    if (v == 0) {
        unk_a9 = 0xe;
        unk_aa = 0xe;
        func_ov118_02293458();
        return;
    }
    func_ov118_02293474();
    unk_aa = func_ov118_022938b8(v);
    unk_a9 = func_ov118_02293850(v);
    if (v >= 1 && v < 0xf) {
        func_ov118_02292e00(0x200);
        if (func_ov118_02292e20(1)) {
            if (v >= 1 && v <= 9) {
                func_ov118_02293e14();
                func_ov118_02293824();
                return;
            }
        } else {
            if (v < 1 || v > 9) {
                func_ov118_02293dfc();
                func_ov118_02293824();
                return;
            }
        }
    } else {
        func_ov118_02292e10(0x200);
    }
    func_ov118_022937cc();
    func_ov118_02293924(0xe);
    func_ov118_02293924(unk_aa);
}

s32 Unk_ov118_022955c8::func_ov118_02293924(u32 v) {
    func_ov118_02292e10(0x80);
    if (v == 0xe) {
        func_0206ee80(unk_14e8, 0x13, 0, 0x1c, 0x19, 4);
    } else if (v == 0xd) {
        func_0206ee80(unk_14e8, 0x13, 0, 0x1c, unk_b0 * 2 - 1, 3);
    } else {
        func_0206ee80(unk_14e8, 0x13, v * 2, 0x1c, v * 2 + 1, 3);
    }
}

u8 Unk_ov118_022955c8::func_ov118_022938b8(u32 v) {
    if (v == 9) {
        return 0xd;
    }
    if (v >= 1 && v < 9) {
        s32 t = v + 5;
        s32 i = 0;
        s32 n = unk_a1;
        for (; i < n; i++) {
            if (t == unk_454e[i]) {
                return (u8)i;
            }
        }
        return 0xe;
    }
    if (v < 0xf && v >= 0xa) {
        return data_ov118_02295458[v - 0xa];
    }
    if (v < 0x1c && v >= 0xf) {
        return (u8)(v - 0xf);
    }
    return 0xe;
}

u8 Unk_ov118_022955c8::func_ov118_02293850(u32 v) {
    if (v >= 1 && v < 0xf) {
        return (u8)(v - 1);
    }
    if (v >= 0xf && v < 0x1c) {
        u32 b = func_ov118_02293d70()[v - 0xf];
        if (b == 0) {
            return 0xe;
        }
        if (b == 1 || (b >= 2 && b < 6)) {
            return 8;
        }
        if (b >= 6 && b < 0xe) {
            return (u8)(b - 6);
        }
        if (b >= 0xe && b < 0x13) {
            return data_ov118_02295450[b - 0xe];
        }
    }
    return 0xe;
}

void Unk_ov118_022955c8::func_ov118_02293824() {
    u32 a = unk_aa;
    u32 v;
    if (a <= 5 || a == 0xd) {
        v = 0;
    } else {
        v = (a - 5) << 4;
    }
    func_ov118_022937b0(v);
    unk_a3 = 0xff;
}

void Unk_ov118_022955c8::func_ov118_022937cc() {
    u32 c = unk_aa;
    if (c != 0xe) {
        if (c == 0xd) {
            func_ov118_022937a0(0);
        } else {
            s32 t = (unk_98 + 0xf) >> 4;
            if ((s32)c < t) {
                func_ov118_022937a0(c << 4);
            }
            s32 h = unk_98 >> 4;
            u32 a = unk_aa;
            s32 m;
            if (a <= 5) {
                m = 0;
            } else {
                m = a - 5;
            }
            if (h < m) {
                func_ov118_022937a0(m << 4);
            }
        }
    }
}

void Unk_ov118_022955c8::func_ov118_022937b0(u32 v) {
    unk_98 = v;
    unk_9a = unk_98;
    func_ov118_02292e10(0x10);
}

void Unk_ov118_022955c8::func_ov118_022937a0(u32 v) {
    unk_9a = v;
    func_ov118_02292e10(0x10);
}

BOOL Unk_ov118_022955c8::func_ov118_02293794() {
    return func_ov118_02292e20(0x10);
}

void Unk_ov118_022955c8::func_ov118_022936e4() {
    s32 n = func_ov118_02293d34();
    if (n == 0) {
        func_ov118_02292e00(0x10);
        unk_a4 = 0;
    } else {
        u32 a = ((volatile Unk_ov118_022955c8 *)this)->unk_9a;
        u32 b = ((volatile Unk_ov118_022955c8 *)this)->unk_98;
        if (b == a) {
            func_ov118_02292e00(0x10);
        } else if (b < a) {
            unk_98 = unk_98 + 8;
            if (unk_98 > unk_9a) {
                unk_98 = unk_9a;
            }
        } else if (b < 8) {
            unk_98 = a;
        } else {
            unk_98 = unk_98 - 8;
            if (unk_98 < unk_9a) {
                unk_98 = unk_9a;
            }
        }
        unk_a4 = (s32)(unk_98 * 0x58) / n;
    }
}

BOOL Unk_ov118_022955c8::func_ov118_02293660() {
    s32 x, y;
    if (!func_ov118_02292e20(8)) {
        return FALSE;
    }
    x = data_021ef5f0;
    y = data_021ef5ec;
    if (unk_43c.func_ov002_02202f18(x, y)) {
        unk_a5 = y;
        unk_a7 = unk_a4;
        unk_a6 = unk_a7;
        func_ov002_02200a58(1);
        return TRUE;
    } else if (x > 0xe8 && x < 0xf5 && y > 0x56 && y < 0xae) {
        func_ov002_02200a58(2);
        return TRUE;
    }
    return FALSE;
}

void Unk_ov118_022955c8::func_ov118_02293604(s32 v) {
    s32 t = v;
    if (t < 0) {
        t = 0;
    } else if (t > 0x58) {
        t = 0x58;
    }
    s32 d = t - unk_a6;
    if (d >= 4 || d <= -4) {
        func_ov002_02202e54(&unk_43c);
        unk_a6 = t;
    }
    s32 m = func_ov118_02293d34();
    func_ov118_022937b0(_s32_div_f(t * m, 0x58));
}

void Unk_ov118_022955c8::func_ov118_022935a0() {
    s32 pos = unk_9a;
    u16 pad = data_021f47d8[0];
    if (pad & 0x40) {
        pos -= 4;
    } else if (pad & 0x80) {
        pos += 4;
    }
    s32 m = func_ov118_02293d34();
    if (pos < 0) {
        pos = 0;
    } else if (pos > m) {
        pos = m;
    }
    if (pos != unk_9a) {
        func_ov002_02202e54(&unk_43c);
    }
    func_ov118_022937b0(pos);
}

s32 Unk_ov118_022955c8::func_ov118_02293524() {
    s32 a = data_021ef5f0;
    s32 b = data_021ef5ec;
    if (b < 0x33 || b > 0x4b) {
        return 0;
    }
    if (func_ov118_02292e20(1)) {
        if (a < 0xcd || a > 0xe5) {
            return 0;
        }
        func_ov118_02293994(0);
        func_ov118_02293e14();
    } else {
        if (a < 0xaa || a > 0xc2) {
            return 0;
        }
        func_ov118_02293994(0);
        func_ov118_02293dfc();
    }
    func_ov118_022937b0(0);
    unk_a3 = 0xff;
    return 1;
}

void Unk_ov118_022955c8::func_ov118_02293498() {
    if (func_ov118_02292e20(0x40)) {
        if (A8V != 0) {
            A8V = A8V - 1;
        }
        u32 v = unk_a8;
        if (v == 0) {
            if (func_ov118_02292e20(0x200)) {
                func_ov118_02292e00(0x100);
            } else {
                func_ov118_02293924(unk_aa);
            }
            unk_a8 = 0xf;
        } else if (unk_a8 == 5) {
            if (func_ov118_02292e20(0x200)) {
                func_ov118_02292e10(0x100);
            } else {
                func_ov118_02293924(0xe);
            }
        }
    }
}

void Unk_ov118_022955c8::func_ov118_02293474() {
    func_ov118_02292e10(0x40);
    func_ov118_02292e00(0x100);
    unk_a8 = 0xf;
}

void Unk_ov118_022955c8::func_ov118_02293458() {
    func_ov118_02292e00(0x40);
    func_ov118_02292e00(0x100);
}

void Unk_ov118_022955c8::func_ov118_022933cc() {
    if (!func_ov118_02292e20(8) && unk_ac == 0x10) {
        unk_ac = 8;
    }
    s32 a = func_ov118_0229336c();
    s32 b = func_ov118_02293310();
    ((Unk_ov002_02202d98 *)&unk_484)->func_ov002_02202a40(a, b);
    if (unk_ac >= 0xa && unk_ac <= 0xf) {
        func_ov118_022937a0(unk_98 & ~0xf);
    }
    if (unk_ac <= 7) {
        ((Unk_ov002_0220464c *)&unk_484)->func_ov002_02202d00(0xd);
    } else {
        ((Unk_ov002_0220464c *)&unk_484)->func_ov002_02202d00(1);
    }
    func_ov118_02293214();
}

s32 Unk_ov118_022955c8::func_ov118_0229336c() {
    if (func_ov118_02292e20(0x800)) {
        return unk_ae;
    }
    u32 c = unk_ac;
    if (c >= 0xa && c <= 0xf) {
        return 0xa0;
    }
    if (c <= 7) {
        return func_ov090_02291a78(c);
    }
    if (c == 8) {
        return 0xd8;
    }
    if (c == 9) {
        return 0xb4;
    }
    if (c == 0x10) {
        return unk_43c.func_ov002_02202e84();
    }
    return 0x80;
}

s32 Unk_ov118_022955c8::func_ov118_02293310() {
    if (func_ov118_02292e20(0x800)) {
        return unk_af;
    }
    u32 c = unk_ac;
    if (c >= 0xa && c <= 0xf) {
        return (c - 0xa) * 16 + 0x58;
    }
    if (c >= 8 && c <= 9) {
        return 0x40;
    }
    if (c <= 7) {
        return 8;
    }
    if (c == 0x10) {
        return unk_43c.func_ov002_02202e60();
    }
    return 0x60;
}

void Unk_ov118_022955c8::func_ov118_022932ec() {
    ((Unk_ov002_0220464c *)&unk_484)->func_ov002_02202d00(0);
    unk_484.vfunc_0c();
}

void Unk_ov118_022955c8::func_ov118_02293274() {
    if (func_ov118_02292e20(0x4000)) {
        s32 a = func_ov118_0229336c();
        s32 b = func_ov118_02293310();
        ((Unk_ov002_02202d98 *)&unk_484)->func_ov002_02202a40(a, b);
        func_ov118_02292e00(0x4000);
    } else {
        s32 a = func_ov118_0229336c();
        s32 b = func_ov118_02293310();
        ((Unk_ov002_02202d98 *)&unk_484)->func_ov002_022029e8(a, b, 3, 1);
        unk_ab = unk_8d;
        func_ov002_02200a58(4);
    }
}

void Unk_ov118_022955c8::func_ov118_02293254() {
    ((Unk_ov002_0220464c *)&unk_484)->func_ov002_02202b68();
    func_ov002_02200a58(5);
}

void Unk_ov118_022955c8::func_ov118_02293234() {
    ((Unk_ov002_02202d98 *)&unk_484)->func_ov002_02202af0();
    func_ov002_02200a58(6);
}

void Unk_ov118_022955c8::func_ov118_02293214() {
    ((Unk_ov002_02202d98 *)&unk_484)->func_ov002_02202a78();
    unk_484.vfunc_0c();
}

s32 Unk_ov118_022955c8::func_ov118_02292f7c(void *pad) {
    u32 old = unk_ac;
    if (old <= 7) {
        if (func_ov002_0220127c(pad)) {
            s32 cv = unk_ac;
            if (cv <= 3) {
                unk_ae = ((Unk_ov002_02202d98 *)&unk_484)->func_ov002_0220288c();
                unk_af = 0x30;
                ((Unk_ov002_0220464c *)&unk_484)->func_ov002_02202c40();
                return 2;
            }
            if (cv >= 5) {
                unk_ac = 8;
            } else {
                unk_ac = 9;
            }
            ((Unk_ov002_0220464c *)&unk_484)->func_ov002_02202c40();
        } else if (func_ov002_0220126c(pad)) {
            if (ACV != 0) {
                ACV = ACV - 1;
            }
        } else if (func_ov002_0220125c(pad)) {
            if (ACV < 7) {
                ACV = ACV + 1;
            }
        }
    } else if (old >= 0xa && old <= 0xf) {
        if (func_ov118_02292e20(8) && func_ov002_0220125c(pad)) {
            unk_ac = 0x10;
        } else if (func_ov002_0220128c(pad)) {
            if (ACV > 0xa) {
                ACV = ACV - 1;
            } else {
                u32 h = unk_9a;
                if (((s32)h >> 4) > 0) {
                    func_ov118_022937a0(h - 0x10);
                    return 3;
                }
                unk_ac = 9;
            }
        } else if (func_ov002_0220127c(pad)) {
            s32 n = func_ov118_02293d50() - 1;
            u8 c = unk_ac;
            if (c < 0xf) {
                if (c < n + 0xa) {
                    ACV = ACV + 1;
                }
            } else {
                u32 h = unk_9a;
                if (((s32)h >> 4) + 5 < n) {
                    func_ov118_022937a0(h + 0x10);
                    return 3;
                }
            }
        } else if (func_ov002_0220126c(pad)) {
            unk_ae = 0x98;
            unk_af = ((Unk_ov002_02202d98 *)&unk_484)->func_ov002_02202878();
            return 2;
        }
    } else if (old == 0x10) {
        if (func_ov002_0220128c(pad)) {
            unk_ac = 8;
        } else if (func_ov002_0220126c(pad)) {
            s32 v = unk_43c.func_ov002_02202e60();
            if (v < 0x50) {
                v = 0x50;
            }
            if (v >= 0xb0) {
                v = 0xaf;
            }
            unk_ac = ((v - 0x50) >> 4) + 0xa;
        }
    } else if ((u8)(old + 0xf8) <= 1) {
        if (func_ov002_0220128c(pad)) {
            unk_ac = 5;
            ((Unk_ov002_0220464c *)&unk_484)->func_ov002_02202be0();
        } else if (func_ov002_0220127c(pad)) {
            unk_ac = 0xa;
        } else if (func_ov002_0220126c(pad)) {
            if (unk_ac == 9) {
                unk_ae = 0x98;
                unk_af = ((Unk_ov002_02202d98 *)&unk_484)->func_ov002_02202878();
                return 2;
            }
            unk_ac = 9;
        } else if (func_ov002_0220125c(pad)) {
            if (unk_ac == 8 && func_ov118_02292e20(8)) {
                unk_ac = 0x10;
            } else {
                unk_ac = 8;
            }
        }
    }
    if (old != unk_ac) {
        return 1;
    }
    return 0;
}

s32 Unk_ov118_022955c8::func_ov118_02292e78() {
    if (func_ov118_02292e20(0x800)) {
        func_ov118_02293994(unk_ad + 1);
        func_ov118_02292e34(0x38);
        return 0;
    }
    u32 s = unk_ac;
    if (s == 0x10) {
        func_ov002_02200a58(7);
        unk_43c.func_ov002_02202f00();
        func_ov118_02292e10(0x1000);
        func_ov002_02202e48(&unk_43c);
        return 1;
    } else if (s == 8) {
        if (func_ov118_02292e20(1)) {
            func_ov118_02293994(0);
            func_ov118_02293e14();
            func_0200402c(0x36);
            return 2;
        }
        return 0;
    } else if (s == 9) {
        if (!func_ov118_02292e20(1)) {
            func_ov118_02293994(0);
            func_ov118_02293dfc();
            func_0200402c(0x36);
            return 2;
        }
        return 0;
    } else if (s <= 7) {
        if (func_ov118_02294df8(s)) {
            return 1;
        }
        return 0;
    } else if (s >= 0xa && s <= 0xf) {
        { u32 t = unk_a3; func_ov118_02293994(t + s + 5); };
        func_ov118_02292e34(0x37);
        return 0;
    }
    return 0;
}

void Unk_ov118_022955c8::func_ov118_02292e34(s32 a) {
    u32 i = unk_a9;
    if (i != 0xe) {
        s32 v = (unk_4571[i].unk_00 - 0x18) * 2 - 0x7f;
        if (v < -0x7f) {
            v = -0x7f;
        } else if (v > 0x80) {
            v = 0x80;
        }
        func_02004018(a, v);
    }
}

BOOL Unk_ov118_022955c8::func_ov118_02292e20(u32 m) {
    if (unk_9c & m) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov118_022955c8::func_ov118_02292e10(u32 m) { unk_9c = unk_9c | m; }

void Unk_ov118_022955c8::func_ov118_02292e00(u32 m) { unk_9c = unk_9c & ~m; }

Unk_ov118_02292df8::Unk_ov118_02292df8() {}

Unk_ov118_02292df8::~Unk_ov118_02292df8() {}

