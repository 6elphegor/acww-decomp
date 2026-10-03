// ov112: scene overlay (class Unk_ov112_02299b10, vtable 0x02299b10, 0x6a7c bytes): text-entry keyboard screen.
#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef vfunc_08
#undef vfunc_14

// Plain view of the scene object used by the extern "C" helpers (offsets only).
struct Unk_ov112_02296840 {
    u8 pad_000[0x8d];
    u8 unk_08d;
    u8 pad_08e[0x94 - 0x8e];
    s32 unk_094;
    s32 unk_098;
    s32 unk_09c;
    u8 pad_0a0[0xc];
    u32 unk_0ac;
    s32 unk_0b0;
    u8 pad_0b4[2];
    u8 unk_0b6;
    u8 unk_0b7;
    u8 unk_0b8;
    u8 unk_0b9;
    u8 unk_0ba;
    u8 unk_0bb;
    u8 unk_0bc;
    u8 unk_0bd;
    u8 unk_0be;
    u8 unk_0bf;
    u8 unk_0c0;
    u8 unk_0c1;
    u8 unk_0c2;
    u8 unk_0c3[0xc0];
    u8 unk_183[0xc0];
    u8 pad_243;
    u8 unk_244[0x34c - 0x244];
    u8 unk_34c[0x370 - 0x34c];
    u8 unk_370[0x3f2c - 0x370];
    u8 unk_3f2c[0x40ac - 0x3f2c];
    u8 unk_40ac[0x40f4 - 0x40ac];
    u8 unk_40f4[0x4258 - 0x40f4];
    u8 unk_4258[0x4460 - 0x4258];
    u8 unk_4460[0x4c60 - 0x4460];
    u8 unk_4c60[0x6a60 - 0x4c60];
    u32 unk_6a60[8];
};

typedef Unk_ov112_02296840 S;

class Unk_ov112_02299b10;

// ---- main-module classes (only what is used here) ----
class Unk_020e2a60;

class Unk_020e2a78 {
public:
    virtual ~Unk_020e2a78();
    void func_020a7aa0(Unk_020e2a60 *dst, s32 a, s32 b);
    void func_020a7c3c();
};

class Unk_020e2a60 {
public:
    virtual ~Unk_020e2a60();
    void func_020a77f8(Unk_020e2a78 *src);
};

class Unk_020e0574 : public Unk_020e2a78 {
public:
    Unk_020e0574();
    virtual ~Unk_020e0574();
    u32 unk_04[(0xc4 - 4) / 4];
};

class Unk_020e055c : public Unk_020e2a60 {
public:
    Unk_020e055c();
    virtual ~Unk_020e055c();
    u32 unk_04[(0xd0 - 4) / 4];
};

// text window, 0x40 bytes
class Unk_020e0488 : public Unk_020e2a78 {
public:
    Unk_020e0488();
    virtual ~Unk_020e0488();
    void func_0206f904(u8 a, u8 b, u32 c, u32 d);
    void func_0206fab4(s32 a, s32 b);
    void func_0206fb04(u32 a, u32 b, u8 c, u8 d);
    void func_0206fb48(u32 a, u32 b, u32 c, u8 d, u8 e, s32 f);
    void func_0206fc44();
    u32 unk_04[(0x40 - 4) / 4];
};

class Unk_020e0470 : public Unk_020e2a60 {
public:
    Unk_020e0470();
    virtual ~Unk_020e0470();
    u8 pad_04[0xa];
    char text[0x2a];
};

class Unk_020e1c64 : public Unk_020e2a78 {
public:
    Unk_020e1c64();
    virtual ~Unk_020e1c64();
    u32 unk_04[6];
};

// screen upload helper, 0x24 bytes
class Unk_020e45f8 {
public:
    Unk_020e45f8();
    virtual void vfunc_00();
    virtual void vfunc_04();
    void func_020b8714(u32 a, u8 b, u32 c, u32 d, u32 e);
    void func_020b87d0();
    u32 unk_04[8];
};

// comm/session singleton (data_020cbb18)
class Unk_020cbb18 {
public:
    BOOL func_02072e44();
    s32 func_02072e34();
    void func_020728d4();
    void func_020728a4(u8 *buf, u32 n);
    void func_02072824(u32 a, u32 b);
};

class Unk_020940a0 {
public:
    void func_020940d0(Unk_020e2a78 *p);
};

class Unk_0209865c {
public:
    void func_0209865c();
    Unk_020940a0 *func_0209888c();
};

class Unk_020e100c {
public:
    virtual ~Unk_020e100c();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    BOOL func_0208d4fc();
    s32 func_0208d534();
};

class Unk_020e1028 : public Unk_020e100c {
public:
    BOOL func_0208d9a8();
    void func_0208dae8(s32 a, s32 b);
};

// ---- ov002 classes ----
class Unk_ov002_022040ec {
public:
    Unk_ov002_022040ec();
    ~Unk_ov002_022040ec();
    BOOL func_ov002_02204234(s32 a);
    void func_ov002_02204394(u8 *p, s32 a, u32 b);
    u32 unk_00[0x108 / 4];
};

class Unk_ov002_022046b0 : public Unk_020e1028 {
public:
    Unk_ov002_022046b0();
    virtual ~Unk_ov002_022046b0();
    s32 func_ov002_02202e60();
    s32 func_ov002_02202e84();
    void func_ov002_02202ef4();
    void func_ov002_02202f00();
    void func_ov002_02202f0c();
    BOOL func_ov002_02202f18(s32 x, s32 y);
    u32 unk_04[0x44 / 4];
};

class Unk_ov002_02202fac {
public:
    u32 unk_00[0x164 / 4];
    BOOL func_ov002_0220308c();
    s32 func_ov002_0220306c();
    void func_ov002_0220301c();
    void func_ov002_02203044();
    void func_ov002_022030ac(u8 v);
    s32 func_ov002_022030b8(s32 i);
    s32 func_ov002_022030f4(s32 i);
    BOOL func_ov002_02203110(s32 i);
    void func_ov002_022033ec(s32 i);
};

class Unk_ov002_022046cc : public Unk_ov002_02202fac {
public:
    Unk_ov002_022046cc();
    ~Unk_ov002_022046cc();
    void func_ov002_02203650();
    void func_ov002_022036a4(s32 a);
    void func_ov002_02203900();
};

class Unk_ov002_02202d98 : public Unk_020e100c {
public:
    void func_ov002_02202844();
    BOOL func_ov002_022028f0();
    void func_ov002_0220298c(s32 a, s32 b, s32 c, u8 d);
    void func_ov002_02202a40(s32 a, s32 b);
    void func_ov002_02202a78();
    void func_ov002_02202af0();
};

// same cursor object as Unk_ov002_02202d98
class Unk_ov002_0220464c : public Unk_020e100c {
public:
    void func_ov002_02202b68();
    void func_ov002_02202be0();
    void func_ov002_02202c40();
    void func_ov002_02202ca0();
    void func_ov002_02202d00(s32 v);
};

class Unk_ov002_02204614 : public Unk_ov002_02202d98 {
public:
    Unk_ov002_02204614();
    virtual ~Unk_ov002_02204614();
    u32 unk_04[0x60 / 4];
};

class Unk_ov092_02291ec8 {
public:
    void func_ov092_02291c5c();
    void func_ov092_02291ce4(s32 a, s32 b);
};

// Scene base class (declared in src/ov002/unk_ov002_02200680.cpp)
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
    void func_ov002_02200874(s32 a, s32 b);
    void func_ov002_022008c4(s32 a, s32 b, s32 c, s32 d);
    void func_ov002_022008e0(s32 a, s32 b, s32 c, s32 d);
    BOOL func_ov002_022008fc(s32 a);
    BOOL func_ov002_02200908(s32 a);
    s32 func_ov002_02200920();
    void func_ov002_02200980();
    s32 func_ov002_022009c8();
    s32 func_ov002_022009d4();
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

// 0x370: ov095 list/text object, size 0x23bc
class Unk_ov112_ov095_02293b60 {
public:
    Unk_ov112_ov095_02293b60() : unk_22f4(), unk_233c() {}
    u32 unk_00[0x22f4 / 4];
    Unk_020e45f8 unk_22f4[2];
    Unk_020e0488 unk_233c[2];
};

typedef void (Unk_ov112_02299b10::*Unk_ov112_02299b10_Fn)();

// Vtable 0x02299b10
class Unk_ov112_02299b10 : public Unk_ov002_022044e4 {
public:
    Unk_ov112_02299b10()
        : unk_244(), unk_34c(), unk_370(), unk_3f2c(), unk_40ac(), unk_40f4(), unk_4258(),
          unk_42bc(), unk_4390() {}

    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_24();
    virtual BOOL vfunc_4c();
    virtual BOOL vfunc_50();
    virtual BOOL vfunc_54();
    virtual BOOL vfunc_58();
    virtual BOOL vfunc_5c();

    BOOL func_ov112_0229695c();
    void func_ov112_02296988();
    void func_ov112_022969f8();
    void func_ov112_02296a18();
    void func_ov112_02296a54(s32 idx, u32 a, u32 b, s32 c);
    void func_ov112_02296a8c();
    void func_ov112_02296abc();
    void func_ov112_02296b80();
    void func_ov112_02296bdc();
    void func_ov112_02296bfc();
    void func_ov112_02296c28();
    void func_ov112_02296c48();
    void func_ov112_02296cb4(s32 a, s32 b);
    void func_ov112_02296ce8();
    void func_ov112_02296d6c();
    void func_ov112_02296d90();
    void func_ov112_02296de8(u8 v, u8 x);
    void func_ov112_02296e14();
    BOOL func_ov112_02296ef8(void *pad);
    s32 func_ov112_02296fbc(s32 v);
    void func_ov112_02296ff4();
    u8 func_ov112_02297044();
    void func_ov112_0229705c(u8 v);
    void func_ov112_0229706c();
    BOOL func_ov112_022970b0();
    void func_ov112_02297104();
    BOOL func_ov112_02297108();

    void func_ov112_02298ce0();
    void func_ov112_02298d18();
    void func_ov112_02298d4c();
    void func_ov112_02298e3c();
    void func_ov112_02298ea4();
    void func_ov112_02298f20();
    void func_ov112_02298f68();
    void func_ov112_02298fe8();
    void func_ov112_02299048();
    void func_ov112_022990ac();
    void func_ov112_022990d4();
    void func_ov112_02299108();
    void func_ov112_02299148();
    void func_ov112_022991a0();
    void func_ov112_022991f0();
    void func_ov112_02299250();
    void func_ov112_022992e4();
    void func_ov112_02299434();

    // state handlers (member-pointer table targets)
    void func_ov112_02298a00();
    void func_ov112_022989c4();
    void func_ov112_02298988();
    void func_ov112_02298928();
    void func_ov112_022988cc();
    void func_ov112_02298860();
    void func_ov112_022987a8();
    void func_ov112_0229877c();
    void func_ov112_022986a8();
    void func_ov112_0229864c();
    void func_ov112_02298624();
    void func_ov112_022985b8();
    void func_ov112_022984b4();
    void func_ov112_02298440();
    void func_ov112_02298410();
    void func_ov112_022983e0();
    void func_ov112_022983bc();
    void func_ov112_02298380();
    void func_ov112_02298354();
    void func_ov112_0229823c();
    void func_ov112_02298208();
    void func_ov112_0229819c();
    void func_ov112_0229816c();

    /* 0x91 */ u8 unk_91[3];
    /* 0x94 */ s32 unk_94;
    /* 0x98 */ s32 unk_98;
    /* 0x9c */ s32 unk_9c;
    /* 0xa0 */ s32 unk_a0;
    /* 0xa4 */ s32 unk_a4;
    /* 0xa8 */ s32 unk_a8;
    /* 0xac */ u32 unk_ac;
    /* 0xb0 */ s32 unk_b0;
    /* 0xb4 */ s16 unk_b4;
    /* 0xb6 */ u8 unk_b6;
    /* 0xb7 */ u8 unk_b7;
    /* 0xb8 */ u8 unk_b8;
    /* 0xb9 */ u8 unk_b9[3];
    /* 0xbc */ u8 unk_bc;
    /* 0xbd */ u8 unk_bd;
    /* 0xbe */ u8 unk_be;
    /* 0xbf */ u8 unk_bf;
    /* 0xc0 */ u8 unk_c0;
    /* 0xc1 */ u8 unk_c1;
    /* 0xc2 */ u8 unk_c2;
    /* 0xc3 */ u8 unk_c3[0x244 - 0xc3];
    /* 0x244 */ Unk_ov002_022040ec unk_244;
    /* 0x34c */ Unk_020e45f8 unk_34c[1];
    /* 0x370 */ Unk_ov112_ov095_02293b60 unk_370;
    /* 0x272c */ u32 unk_272c[(0x3f2c - 0x272c) / 4];
    /* 0x3f2c */ Unk_020e0488 unk_3f2c[6];
    /* 0x40ac */ Unk_ov002_022046b0 unk_40ac;
    /* 0x40f4 */ Unk_ov002_022046cc unk_40f4;
    /* 0x4258 */ Unk_ov002_02204614 unk_4258;
    /* 0x42bc */ Unk_020e0574 unk_42bc;
    /* 0x4380 */ u32 unk_4380[(0x4390 - 0x4380) / 4];
    /* 0x4390 */ Unk_020e055c unk_4390;
    /* 0x4460 */ u8 unk_4460[0x800];
    /* 0x4c60 */ u8 unk_4c60[0x1e00];
    /* 0x6a60 */ s32 unk_6a60[7];
};

extern "C" {
extern u16 data_021f47d8[];
extern u32 data_021f482c;
extern u8 data_021edb68;
extern u8 data_021ef5ec;
extern u8 data_021ef5f0;
extern u8 data_021f4770;
extern u8 data_021f4774;
extern Unk_020cbb18 *data_020cbb18;
extern void *data_021c6210;
}

extern "C" u32 data_ov112_02299ac0[];
extern "C" u32 data_ov112_02299ad8[];

extern "C" {
void func_ov095_02293b60(void *p, u32 a, void *b, u32 c);
void func_ov095_02293824(void *p, u32 a, void *b);
void func_ov095_022937d0(void *p, u32 a, void *b, u32 c);
void func_ov095_0229253c(void *p, s32 a, s32 b);
void func_ov095_022938f8(void *p, s32 a, s32 b, s32 c);
void func_0200402c(s32 a);
void func_020e76f8(void *p, u32 v, u32 n);
s32 func_020512e0(void *p, s32 n);
void func_0206f920(void *p, void *q, u32 n, u32 a, u32 b);
void func_0206cf4c(void *a, void *b, void *c, u32 d, u32 e, u32 f, u32 g);
BOOL func_0206ef0c();
void func_02076f88(void *p);
Unk_0209865c *func_0209750c();
s32 func_020998d8();
u32 func_ov095_02293f2c(void *a, void *b, u32 c, u32 d, u32 e, void *f);
u32 func_ov095_02293fb4(void *a, void *b, u32 c, u32 d, u32 e);
u32 func_ov095_02293da0(void *p);
void func_ov002_02202e54(void *p);
void func_0205125c(void *p, s32 n);
s32 func_02051268(void *src, void *dst, s32 n);
void func_ov095_02293dc0(void *p);
void func_ov095_02293d94(void *p);
void func_ov095_02293d88(void *p);
void func_ov095_02293da8(void *p);
s32 func_ov095_02293dc8(void *p, s32 key, s32 n);
void func_ov095_022923ec(void *p);
void func_ov095_022923f8(void *p);
s32 func_ov095_02292404(void *p);
s32 func_ov095_02293f90(void *p, s32 a);
s32 func_ov095_02293f8c(void *p, s32 a);
s32 func_ov095_02293f88(void *p, s32 a);
BOOL func_ov095_02293f94(void *p, void *q, s32 a, u32 b, s32 c, s32 d);
BOOL func_ov095_02293ff0(void *p, void *q, s32 a, void *b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h);
BOOL func_ov095_0229423c(void *p, s32 key);
BOOL func_ov095_02295264(void *p);
BOOL func_ov095_02295258(void *p);
void func_ov095_02295194(void *p);
s32 func_ov095_02294a44(void *p, u32 a, u32 b);
s32 func_ov095_02294864(void *p, s32 a, s32 b);
void func_ov095_02294d40(void *p, s32 a);
void func_ov095_02294318(void *p);
BOOL func_ov095_02294324(void *p);
BOOL func_ov095_02295440(void *p, s32 a);
BOOL func_ov095_02295270(void *p, s32 a);
BOOL func_ov002_0220125c(s32 p);
BOOL func_ov002_0220126c(s32 p);
void func_020026c4(const char *a, u32 b, s32 c, s32 d, s32 e, s32 f);
void func_020641b4(const char *a, void *b, s32 c);
void func_0206ee80(void *a, s32 b, s32 c, s32 d, s32 e, s32 f);
void func_020024f0(void *a, s32 b, s32 c, s32 d);
void func_0200261c(const char *a, u32 b, s32 c, s32 d, s32 e, s32 f);
void func_020015b8(s32 a);
void func_02002398(s32 a, s32 b);
void func_0200226c(s32 a, s32 b, s32 c, s32 d);
void func_ov002_02202e48(void *p);
BOOL func_ov095_022942e8(void *p);
u32 func_ov095_02294a40(void *p);
u32 func_ov095_02292458(void *p, u32 a);
BOOL func_ov095_02293990(void *p);
void func_ov095_02294648(void *p, u32 a, u32 b, u32 c);
void func_ov095_02294358(void *p, u32 a);
void func_ov095_022943dc(void *p, const char *q);
void func_ov095_022943b4(void *p, u32 a);
void func_ov095_022943f8(void *p, u32 a);
s32 func_ov095_02293cc0(void *p);
void *func_020ed174(void *p);
void func_020ed188(void *p);
void func_0206e63c();
BOOL func_0206e61c();
void func_020021a0(s32 a);
void func_020020b8(s32 a);
void func_ov095_02294438(void *p);
void func_ov095_02294478(void *p, s32 a);
void func_ov095_0229483c(void *p, s32 a);
s32 func_02051348(void *p, s32 n);
void func_0206fcc8(void *p);
void func_0206fca8(void *p);
void func_0206f874(void *p);
void func_0206f85c(void *p);
void func_0206f9fc(void *o, u32 x);
void func_02094030(void *p);
void func_02094018(void *p);
void func_020b3544(s32 a, void *p);
void MI_CpuFill8(void *p, u32 v, u32 n);
void func_020021fc(u32 a, u32 b, u32 c);
void func_02087e70(u32 a, void *b, u32 c, void *d, s32 e, s32 f, s32 g, s32 h, s32 i, s32 j, s32 k, s32 l);
void func_02088730(u32 a, void *b, u32 c, void *d, s32 e, s32 f, s32 g);
BOOL func_0206ef00();
s32 func_020740a0(s32 a);
void MI_CpuCopy8(void *src, void *dst, u32 n);
void *func_020e8618(void *heap, s32 n);
void func_020e85fc(void *heap, void *p);
void func_0200140c();
void func_0200151c(s32 a);
void func_0200142c();
void func_020013cc(s32 a);
void func_02001710(s32 a, s32 b);
void func_0200152c(s32 a);
void func_02001608(s32 a, s32 b, s32 c, s32 d);
void func_0209cf88(void *p);
void func_0206f994(void *p, void *s, s32 n);
void func_020a78a4(void *dst, void *src, s32 n);
s32 func_020b30bc(void *p);
void func_02050e90(void *p, void *buf, s32 n);
BOOL func_ov002_0220127c(s32 p);
BOOL func_ov002_0220128c(s32 p);
u32 func_ov095_02292580(void *p);
u32 func_ov095_02292544(void *p);
void func_ov095_022924f0(void *p);
void func_ov095_02295340(void *p, s32 a);
void func_ov095_022953c0(void *p, s32 a);
void func_ov095_022942c0(void *p);
void func_ov095_02294250(void *p, u32 a);
void func_ov095_022951e4(void *p);
s32 func_02133150(s32 a, s32 b);
}

extern "C" void func_ov112_02297170(S *s, s32 a, s32 b);
extern "C" u8 func_ov112_022971cc(S *s, s32 i, s32 *p);
extern "C" void func_ov112_0229721c(S *s);
extern "C" void func_ov112_02297264(S *s);
extern "C" BOOL func_ov112_02297280(S *s);
extern "C" void func_ov112_022972ac(S *s);
extern "C" void func_ov112_02297304(S *s);
extern "C" void func_ov112_0229733c(S *s);
extern "C" void func_ov112_0229735c(S *s, s32 v);
extern "C" BOOL func_ov112_022973ac(S *s);
extern "C" BOOL func_ov112_022973dc(S *s);
extern "C" void func_ov112_02297434(S *s);
extern "C" void func_ov112_02297468(S *s);
extern "C" BOOL func_ov112_022974f0(S *s);
extern "C" void func_ov112_022974fc(S *s, u32 v);
extern "C" void func_ov112_0229750c(S *s, u32 v);
extern "C" void func_ov112_02297540(S *s);
extern "C" void func_ov112_02297570(S *s);
extern "C" void func_ov112_02297574(S *s);
extern "C" void func_ov112_02297598(S *s);
extern "C" void func_ov112_022975c0(S *s, u8 a, u8 b, u32 c, u32 n);
extern "C" void func_ov112_02297648(S *s);
extern "C" void func_ov112_022976a8(S *s);
extern "C" void func_ov112_022977f8(S *s, u32 m);
extern "C" void func_ov112_02297808(S *s, u32 m);
extern "C" BOOL func_ov112_02297818(S *s, u32 m);
extern "C" void func_ov112_0229782c(S *s);
extern "C" void func_ov112_0229788c(S *s);
extern "C" void func_ov112_022978a4(S *s, u32 a, u32 b);
extern "C" void func_ov112_022978e0(S *s);
extern "C" void func_ov112_02297900(S *s);
extern "C" void func_ov112_0229791c(S *s);
extern "C" void func_ov112_02297934(S *s);
extern "C" void func_ov112_02297940(S *s);
extern "C" void func_ov112_02297984(S *s);
extern "C" void func_ov112_022979c0(S *s);
extern "C" void func_ov112_02297a0c(S *s);
extern "C" void func_ov112_02297a4c(S *s);
extern "C" void func_ov112_02297a90(S *s);
extern "C" void func_ov112_02297b28(S *s);
extern "C" BOOL func_ov112_02297b90(S *s, s32 key);
extern "C" BOOL func_ov112_02297c38(S *s, u32 key);
extern "C" BOOL func_ov112_02297c7c(S *s, u32 a, s32 b);
extern "C" BOOL func_ov112_02297cd4(S *s, s32 flag);
extern "C" s32 func_ov112_02297d74(S *s, s32 key);
extern "C" s32 func_ov112_02297eb8(S *s);
extern "C" BOOL func_ov112_02297f1c(S *s);
extern "C" BOOL func_ov112_02297f48(S *s);
extern "C" BOOL func_ov112_02297fac(S *s);
extern "C" BOOL func_ov112_02298018(S *s);
extern "C" BOOL func_ov112_022980b0(S *s);
extern "C" BOOL func_ov112_02298114(S *s);
extern "C" void func_ov112_02298b40(S *s);
extern "C" void func_ov112_02298c30(S *s);
extern "C" void func_ov112_02298c68(S *s);

struct Unk_ov112_SceneEntry {
    Unk_ov112_02299b10 *(*create)();
    u16 a;
    u16 b;
};

extern "C" Unk_ov112_02299b10 *func_ov112_022998c4();

static inline BOOL Both() {
    if (data_021f4770 != 0 && data_021f4774 != 0) return TRUE;
    return FALSE;
}

struct Unk_ov112_022976a8_Pad {
    s32 v[8];
    Unk_ov112_022976a8_Pad() {}
    ~Unk_ov112_022976a8_Pad() {}
};

typedef void (*Unk_ov112_0229782c_Fn)(void *);

extern "C" Unk_ov112_02299b10 *func_ov112_022998c4() { return new Unk_ov112_02299b10(); }

BOOL Unk_ov112_02299b10::vfunc_00() {
    func_ov112_02298d4c();
    unk_8c = 0;
    func_ov002_02200a60(0);
    return TRUE;
}

BOOL Unk_ov112_02299b10::vfunc_0c() {
    ((Unk_ov092_02291ec8 *)func_020ed174(this))->func_ov092_02291c5c();
    func_ov112_02298d18();
    return TRUE;
}

BOOL Unk_ov112_02299b10::vfunc_24() {
    if (func_ov112_022974f0((S *)this)) {
        func_ov112_02297468((S *)this);
        func_020021fc(4, 0, unk_b6 + 8);
    }
    if (func_ov112_02297818((S *)this, 1)) {
        u8 *p = (u8 *)(unk_a0 + 0x60);
        func_02087e70(1, data_ov112_02299ad8, 0x80, p - 8, -1, 2, 0x1000, 0x1000, 0, -1, 0, 0);
        func_ov095_02293b60(&unk_370, 0x80, p, 1);
        func_ov095_02293824(&unk_370, 0x80, p);
        if (func_0206ef00()) {
            func_02088730(1, data_ov112_02299ac0, 0x80, p, -1, 1, 0);
        }
        func_ov095_022937d0(&unk_370, 0x80, p, unk_b0);
        ((Unk_020e1028 *)(&unk_40ac))->func_0208dae8(0x5d, unk_b8 + (u32)(unk_a0 - 0x50));
        s32 t = unk_40ac.func_ov002_02202e84();
        func_ov095_0229253c(&unk_370, t, unk_40ac.func_ov002_02202e60());
        unk_40ac.vfunc_08();
    }
    if (func_0206ef00()) {
        if (func_ov112_02297818((S *)this, 0x1000)) {
            s32 t = unk_40ac.func_ov002_02202e84();
            unk_4258.func_ov002_02202a40(t, unk_40ac.func_ov002_02202e60());
        }
        unk_4258.func_ov002_02202844();
    }
    if (func_ov112_02297818((S *)this, 1)) {
        if (func_ov112_02297818((S *)this, 0x40)) {
            s32 a = unk_98;
            s32 b = unk_9c - (unk_b6 + 8);
            unk_bc = unk_bc + 1;
            if ((unk_bc & 0x10) != 0) {
                func_ov095_022938f8(&unk_370, a, b, 2);
            }
        }
    }
    unk_40f4.func_ov002_022036a4(unk_a8);
    return TRUE;
}// Declarations for data defined further down (definition order sets the data layout)
extern "C" Unk_ov112_SceneEntry data_ov112_022999b8;
extern "C" u32 data_ov112_02299ad8[12];
extern "C" u32 data_ov112_02299ac0[2];

// Data definition order is chosen so mwcc emits the objects in the original order

extern "C" Unk_ov112_SceneEntry data_ov112_022999b8 = {func_ov112_022998c4, 0xa6, 0xaa};

extern "C" u32 data_ov112_02299ad8[12] = {
    0x006180b4, 0x0000a0c0, 0x206180e4, 0x0000a0c0, 0x006100c4, 0x0000a0e0,
    0x006100cc, 0x0000a0e0, 0x006100d4, 0x0000a0e0, 0x006100dc, 0xffffa0e0,
};

extern "C" u32 data_ov112_02299ac0[2] = {0x802a40e6, 0xffffc0c1};

BOOL Unk_ov112_02299b10::vfunc_4c() {
    static Unk_ov112_02299b10_Fn tbl[14] = {
        &Unk_ov112_02299b10::func_ov112_022992e4, &Unk_ov112_02299b10::func_ov112_02299250,
        &Unk_ov112_02299b10::func_ov112_022991f0, &Unk_ov112_02299b10::func_ov112_022991a0,
        &Unk_ov112_02299b10::func_ov112_02299148, &Unk_ov112_02299b10::func_ov112_02299108,
        &Unk_ov112_02299b10::func_ov112_022990d4, &Unk_ov112_02299b10::func_ov112_022990ac,
        &Unk_ov112_02299b10::func_ov112_02299048, &Unk_ov112_02299b10::func_ov112_02298fe8,
        &Unk_ov112_02299b10::func_ov112_02298f68, &Unk_ov112_02299b10::func_ov112_02298f20,
        &Unk_ov112_02299b10::func_ov112_02298ea4, &Unk_ov112_02299b10::func_ov112_02298e3c};
    (this->*tbl[unk_8c])();
    return TRUE;
}

void Unk_ov112_02299b10::func_ov112_02299434() {
    static Unk_ov112_02299b10_Fn tbl[23] = {
        &Unk_ov112_02299b10::func_ov112_02298a00, &Unk_ov112_02299b10::func_ov112_022989c4,
        &Unk_ov112_02299b10::func_ov112_02298988, &Unk_ov112_02299b10::func_ov112_02298928,
        &Unk_ov112_02299b10::func_ov112_022988cc, &Unk_ov112_02299b10::func_ov112_02298860,
        &Unk_ov112_02299b10::func_ov112_022987a8, &Unk_ov112_02299b10::func_ov112_0229877c,
        &Unk_ov112_02299b10::func_ov112_022986a8, &Unk_ov112_02299b10::func_ov112_0229864c,
        &Unk_ov112_02299b10::func_ov112_02298624, &Unk_ov112_02299b10::func_ov112_022985b8,
        &Unk_ov112_02299b10::func_ov112_022984b4, &Unk_ov112_02299b10::func_ov112_02298440,
        &Unk_ov112_02299b10::func_ov112_02298410, &Unk_ov112_02299b10::func_ov112_022983e0,
        &Unk_ov112_02299b10::func_ov112_022983bc, &Unk_ov112_02299b10::func_ov112_02298380,
        &Unk_ov112_02299b10::func_ov112_02298354, &Unk_ov112_02299b10::func_ov112_0229823c,
        &Unk_ov112_02299b10::func_ov112_02298208, &Unk_ov112_02299b10::func_ov112_0229819c,
        &Unk_ov112_02299b10::func_ov112_0229816c};
    (this->*tbl[unk_8d])();
}

BOOL Unk_ov112_02299b10::vfunc_50() {
    func_0206e63c();
    if (func_0206e61c()) {
        switch (unk_8d) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 9:
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
        case 17:
        case 19:
            func_ov112_02297940((S *)this);
            return TRUE;
        }
    }
    func_ov112_02298ce0();
    func_ov112_02299434();
    func_ov112_02298c68((S *)this);
    return TRUE;
}

BOOL Unk_ov112_02299b10::vfunc_54() { return TRUE; }

BOOL Unk_ov112_02299b10::vfunc_58() { return TRUE; }

BOOL Unk_ov112_02299b10::vfunc_5c() {
    func_020ed188(this);
    return TRUE;
}

void Unk_ov112_02299b10::func_ov112_022992e4() {
    func_ov112_02298c30((S *)this);
    func_ov112_02298b40((S *)this);
    func_ov112_02297540((S *)this);
    func_ov112_02297808((S *)this, 0x4000);
    func_ov095_0229483c(&unk_370, 6);
    func_ov095_02294358(&unk_370, 6);
    func_ov002_022008e0(0xa, 7, 0, 0x30);
    func_020020b8(4);
    func_020020b8(6);
    func_ov002_02200840(4, 0, -8);
    func_ov002_02200840(6, 0, 0);
    func_ov002_02200a50(1);
    unk_a0 = func_ov002_02200920();
    unk_a4 = unk_a0;
    unk_a8 = unk_a4;
    func_ov112_02297808((S *)this, 0x81);
    unk_40f4.func_ov002_02203650();
    func_ov112_022976a8((S *)this);
    func_ov112_02298c68((S *)this);
}

void Unk_ov112_02299b10::func_ov112_02299250() {
    if (func_ov112_02297818((S *)this, 0x4000)) {
        func_ov112_02296abc();
        func_ov112_02296a8c();
        func_ov112_022977f8((S *)this, 0x4000);
    }
    if (func_ov002_02200908(0)) {
        func_ov112_0229706c();
        func_ov002_02200a60(2);
        func_ov112_022978e0((S *)this);
        func_ov112_022976a8((S *)this);
        func_ov112_02298c68((S *)this);
    }
    func_ov002_02200840(4, 0, -8);
    func_ov002_02200840(6, 0, 0);
    unk_a0 = func_ov002_02200920();
    unk_a4 = unk_a0;
    unk_a8 = unk_a4;
}

void Unk_ov112_02299b10::func_ov112_022991f0() {
    func_ov112_022977f8((S *)this, 0x40);
    func_ov002_022008c4(8, 0, 0, 0x30);
    func_ov002_02200840(6, 0, 0);
    func_ov002_02200a50(3);
    unk_a0 = func_ov002_02200920();
    unk_a8 = unk_a0;
    func_ov112_022974fc((S *)this, 0);
    func_ov112_022977f8((S *)this, 0x80);
}

void Unk_ov112_02299b10::func_ov112_022991a0() {
    if (func_ov002_022008fc(0)) {
        func_020021a0(6);
        func_ov112_022977f8((S *)this, 1);
        func_ov002_02200a50(4);
    } else {
        func_ov002_02200840(6, 0, 0);
    }
    unk_a0 = func_ov002_02200920();
    unk_a8 = unk_a0;
}

void Unk_ov112_02299b10::func_ov112_02299148() {
    func_ov112_02296a18();
    if (func_ov112_02297818((S *)this, 0x2000)) {
        unk_40f4.func_ov002_022033ec(0x87);
    } else {
        unk_40f4.func_ov002_022033ec(0x22);
    }
    func_ov002_02200874(5, 0);
    unk_a8 = func_ov002_02200920();
    func_ov002_02200a50(5);
}

void Unk_ov112_02299b10::func_ov112_02299108() {
    if (func_ov002_02200908(-1)) {
        func_ov002_02200a60(2);
        if (func_0206ef0c()) {
            func_ov112_0229788c((S *)this);
        } else {
            func_ov112_0229782c((S *)this);
        }
    }
    unk_a8 = func_ov002_02200920();
}

void Unk_ov112_02299b10::func_ov112_022990d4() {
    func_ov112_022969f8();
    func_ov002_022008c4(0, 0, 0, 0x30);
    func_ov002_02200a50(7);
    unk_a8 = func_ov002_02200920();
}

void Unk_ov112_02299b10::func_ov112_022990ac() {
    if (func_ov002_022008fc(0)) {
        func_ov002_02200a50(8);
    }
    unk_a8 = func_ov002_02200920();
}

void Unk_ov112_02299b10::func_ov112_02299048() {
    func_ov002_022008e0(8, 0, 0, 0x30);
    func_020020b8(6);
    func_ov002_02200840(6, 0, 0);
    func_ov002_02200a50(9);
    unk_a0 = func_ov002_02200920();
    unk_a8 = unk_a0;
    func_ov112_02297808((S *)this, 1);
    unk_40f4.func_ov002_02203650();
}

void Unk_ov112_02299b10::func_ov112_02298fe8() {
    if (func_ov002_02200908(0)) {
        func_ov112_0229706c();
        func_ov002_02200a60(2);
        func_ov112_022978e0((S *)this);
        func_ov112_022976a8((S *)this);
        func_ov112_02298c68((S *)this);
        func_ov112_02297808((S *)this, 0x80);
    }
    func_ov002_02200840(6, 0, 0);
    unk_a0 = func_ov002_02200920();
    unk_a8 = unk_a0;
}

void Unk_ov112_02299b10::func_ov112_02298f68() {
    if (func_ov112_02297818((S *)this, 0x2000) || func_ov112_0229695c()) {
        func_ov112_022977f8((S *)this, 0x40);
        func_ov112_022969f8();
        ((Unk_ov092_02291ec8 *)(func_020ed174(this)))->func_ov092_02291ce4(0x44, 1);
        func_ov002_022008c4(2, 0, 0, 0x30);
        func_ov002_02200840(4, 0, -8);
        func_ov002_02200a50(0xb);
        unk_a4 = func_ov002_02200920();
        unk_a8 = unk_a4;
    }
}

void Unk_ov112_02299b10::func_ov112_02298f20() {
    if (func_ov002_022008fc(0)) {
        func_020021a0(4);
        func_ov002_02200a60(5);
    } else {
        func_ov002_02200840(4, 0, -8);
    }
    unk_a4 = func_ov002_02200920();
    unk_a8 = unk_a4;
}

void Unk_ov112_02299b10::func_ov112_02298ea4() {
    if (func_ov112_022974f0((S *)this) == 0) {
        func_ov112_022977f8((S *)this, 0x40);
        func_ov112_022969f8();
        ((Unk_ov092_02291ec8 *)(func_020ed174(this)))->func_ov092_02291ce4(0x44, 1);
        func_ov002_022008c4(0xa, 0, 0, 0x30);
        func_ov002_02200840(4, 0, -8);
        func_ov002_02200840(6, 0, -8);
        func_ov002_02200a50(0xd);
        unk_a4 = func_ov002_02200920();
        unk_a8 = unk_a4;
    }
}

void Unk_ov112_02299b10::func_ov112_02298e3c() {
    if (func_ov002_022008fc(0)) {
        func_020021a0(4);
        func_020021a0(6);
        func_ov002_02200a60(5);
    } else {
        func_ov002_02200840(4, 0, -8);
        func_ov002_02200840(6, 0, -8);
    }
    unk_a4 = func_ov002_02200920();
    unk_a8 = unk_a4;
    unk_a0 = unk_a4;
}

void Unk_ov112_02299b10::func_ov112_02298d4c() {
    unk_ac = 0;
    func_ov095_02294478(&unk_370, 2);
    func_0205125c(unk_c3, 0xc0);
    Unk_020e0488 a;
    Unk_0209865c *t = func_0209750c();
    Unk_020e1c64 b;
    t->func_0209888c()->func_020940d0(&b);
    func_020b3544(0, &b);
    func_0206f9fc(&a, 0x89);
    Unk_020e0470 c;
    ((Unk_020e2a60 *)(&c))->func_020a77f8(&a);
    s32 n = func_020512e0(c.text, 0x28);
    func_02051268(c.text, unk_c3, n);
    unk_c3[n] = 0x86;
    n++;
    if (func_02051348(unk_c3, n) > 0x96) {
        n--;
        unk_c3[n] = 0;
    }
    unk_c0 = n;
    unk_40ac.func_ov002_02202f0c();
    MI_CpuFill8(unk_4c60, 0xdd, 0x1e00);
    unk_b6 = 0;
    unk_b7 = 0;
    unk_b8 = 0;
}

void Unk_ov112_02299b10::func_ov112_02298d18() {
    func_ov112_02297574((S *)this);
    func_ov095_02294438(&unk_370);
    ((Unk_020e45f8 *)(unk_34c))->func_020b87d0();
    unk_40f4.func_ov002_02203900();
}

void Unk_ov112_02299b10::func_ov112_02298ce0() {
    func_ov112_02297574((S *)this);
    unk_40ac.vfunc_0c();
    unk_4258.vfunc_0c();
    unk_40f4.func_ov002_02203900();
}

extern "C" void func_ov112_02298c68(S *s) {
    func_ov095_02294358(s->unk_370, 6);
    if (func_ov112_02297818(s, 4)) {
        func_ov112_02297598(s);
        func_ov112_022977f8(s, 4);
        func_ov112_02297808(s, 2);
    }
    if (func_ov112_02297818(s, 8)) {
        func_ov112_022977f8(s, 8);
        func_ov112_02297808(s, 2);
    }
    if (func_ov112_02297818(s, 2)) {
        func_ov112_02297570(s);
        func_ov112_02297540(s);
        func_ov112_022977f8(s, 2);
    }
}

extern "C" void func_ov112_02298c30(S *s) {
    func_020015b8(0);
    func_02002398(4, 3);
    func_0200226c(4, 0, 0, 0);
    func_02002398(6, 1);
    func_0200226c(6, 0, 0, 0);
}

extern "C" void func_ov112_02298b40(S *s) {
    u32 g = data_021f482c;
    func_020026c4("menu/chat2/b_bbs.bpl", g, 4, 8, 8, 0xe);
    func_020641b4("menu/chat2/b_bbs_us.bsc", s->unk_4460, 0x800);
    func_0206ee80(s->unk_4460, 6, 5, 0x19, 6, 0xa);
    func_020024f0(s->unk_4460, 4, 0x800, 0);
    func_0200261c("menu/chat2/b_cht.bch", g, 4, 0x13d, 0x13d, 0x1e9);
    func_0200261c("menu/chat2/b_bbs.bch", g, 4, 0x10, 0x10, 0x13f);
    func_0200261c("menu/chat2/b_bbs2.bch", g, 4, 0x101, 0x101, 0x110);
    func_ov095_022943dc(s->unk_370, "menu/chat2/b_key0.bsc");
    ((Unk_ov112_02299b10 *)s)->func_ov112_02296e14();
    func_ov095_022943b4(s->unk_370, 6);
    func_ov095_022943f8(s->unk_370, 6);
    func_ov095_02293cc0(s->unk_370);
}

void Unk_ov112_02299b10::func_ov112_02298a00() {
    S *s = (S *)this;
    if (((Unk_ov002_022044e4 *)s)->func_ov002_02200a14(1)) {
        func_ov112_02297900(s);
    } else {
        u32 f = 0;
        s32 v;
        if (func_ov095_02294324(s->unk_370)) f = 1;
        if (Both()) {
            v = data_021ef5ec;
            if (((Unk_ov002_02202fac *)(s->unk_40f4))->func_ov002_02203110(9)) {
                func_ov112_02297a4c(s);
            } else if (((Unk_ov002_02202fac *)(s->unk_40f4))->func_ov002_02203110(8)) {
                func_ov112_02297a0c(s);
            } else if (func_ov095_02293990(s->unk_370)) {
                func_ov095_02294648(s->unk_370, 8, 6, 1);
                func_ov112_022976a8(s);
            } else if (((Unk_ov112_02299b10 *)s)->func_ov112_02297108()) {
                ((Unk_ov002_022044e4 *)s)->func_ov002_02200a58(3);
                func_ov095_02293dc0(s->unk_370);
                func_ov112_022976a8(s);
            } else if (func_ov112_022973dc(s)) {
                ((Unk_ov002_022046b0 *)(s->unk_40ac))->func_ov002_02202f00();
                ((Unk_ov002_022044e4 *)s)->func_ov002_02200a58(1);
                func_ov112_02297264(s);
                func_ov112_022976a8(s);
            } else if (func_ov112_022973ac(s)) {
                ((Unk_ov002_022046b0 *)(s->unk_40ac))->func_ov002_02202f00();
                ((Unk_ov002_022044e4 *)s)->func_ov002_02200a58(2);
                func_ov112_02297264(s);
                func_ov112_022976a8(s);
            } else if (v >= 0x48 && f == 0) {
                BOOL r = func_ov112_02297eb8(s);
                if (r == 0) {
                } else if (r == 1) {
                    ((Unk_ov002_022044e4 *)s)->func_ov002_02200a58(4);
                }
            }
        }
    }
}

void Unk_ov112_02299b10::func_ov112_022989c4() {
    S *s = (S *)this;
    s->unk_0bc = 0;
    if (data_021f4770 == 0) {
        ((Unk_ov112_02299b10 *)s)->func_ov112_02297104();
        ((Unk_ov002_022046b0 *)(s->unk_40ac))->func_ov002_02202ef4();
        func_ov112_0229791c(s);
    } else {
        func_ov112_0229733c(s);
    }
}

void Unk_ov112_02299b10::func_ov112_02298988() {
    S *s = (S *)this;
    s->unk_0bc = 0;
    if (data_021f4770 == 0) {
        ((Unk_ov112_02299b10 *)s)->func_ov112_02297104();
        ((Unk_ov002_022046b0 *)(s->unk_40ac))->func_ov002_02202ef4();
        func_ov112_0229791c(s);
    } else {
        func_ov112_02297304(s);
    }
}

void Unk_ov112_02299b10::func_ov112_02298928() {
    S *s = (S *)this;
    BOOL r;
    if (data_021f4770 == 0) {
        ((Unk_ov002_022044e4 *)s)->func_ov002_02200a58(0);
        if (s->unk_0be == s->unk_0bf) {
            func_ov112_022977f8(s, 0x100);
        }
        r = TRUE;
    } else {
        r = ((Unk_ov112_02299b10 *)s)->func_ov112_022970b0();
        if (r) {
            func_0200402c(0x15);
        }
    }
    if (r) {
        func_ov112_02297434(s);
        func_ov112_022976a8(s);
    }
}

void Unk_ov112_02299b10::func_ov112_022988cc() {
    S *s = (S *)this;
    if (data_021f4770 == 0) {
        ((Unk_ov002_022044e4 *)s)->func_ov002_02200a58(0);
    } else if (func_ov095_022942e8(s->unk_370)) {
        u32 r = func_ov095_02294a40(s->unk_370);
        func_ov112_02297d74(s, func_ov095_02294864(s->unk_370, r, 8));
        func_ov095_02294d40(s->unk_370, r);
    }
}

void Unk_ov112_02299b10::func_ov112_02298860() {
    S *s = (S *)this;
    if (((Unk_ov002_022044e4 *)s)->func_ov002_02200a14(1)) {
        func_ov112_0229782c(s);
    } else if (Both()) {
        if (((Unk_ov002_02202fac *)(s->unk_40f4))->func_ov002_02203110(3)) {
            func_ov112_022979c0(s);
        } else if (((Unk_ov002_02202fac *)(s->unk_40f4))->func_ov002_02203110(4)) {
            func_ov112_02297984(s);
        }
    }
}

void Unk_ov112_02299b10::func_ov112_022987a8() {
    S *s = (S *)this;
    if (((Unk_ov002_022044e4 *)s)->func_ov002_022009d4()) {
        func_ov112_0229791c(s);
    } else {
        switch (func_ov095_02292458(s->unk_370, ((Unk_ov002_022044e4 *)s)->func_ov002_022009c8())) {
        case 1:
            ((Unk_ov002_0220464c *)(s->unk_4258))->func_ov002_02202c40();
            ((Unk_ov112_02299b10 *)s)->func_ov112_02296ce8();
            break;
        case 2:
            ((Unk_ov002_0220464c *)(s->unk_4258))->func_ov002_02202be0();
            ((Unk_ov112_02299b10 *)s)->func_ov112_02296ce8();
            break;
        case 3:
            ((Unk_ov002_0220464c *)(s->unk_4258))->func_ov002_02202ca0();
            ((Unk_ov112_02299b10 *)s)->func_ov112_02296ce8();
            break;
        case 0:
        default:
            if (func_ov112_02298114(s)) return;
            if (func_ov112_022980b0(s)) return;
            if (func_ov112_02298018(s)) return;
            if (func_ov112_02297f48(s)) return;
            if (func_ov112_02297fac(s)) return;
            if (func_ov112_02297f1c(s) != 0) return;
            break;
        }
    }
}

void Unk_ov112_02299b10::func_ov112_0229877c() {
    S *s = (S *)this;
    if (!((Unk_ov002_02202d98 *)(s->unk_4258))->func_ov002_022028f0()) {
        ((Unk_ov002_022044e4 *)s)->func_ov002_02200a58(s->unk_0c1);
        ((Unk_ov112_02299b10 *)s)->func_ov112_02299434();
    }
}

void Unk_ov112_02299b10::func_ov112_022986a8() {
    S *s = (S *)this;
    if (((Unk_020e100c *)(s->unk_4258))->func_0208d4fc()) {
        u32 r = func_ov095_02292404(s->unk_370);
        u32 v = func_ov095_02294864(s->unk_370, r, 8);
        if (v == 0x112) {
            ((Unk_ov002_022044e4 *)s)->func_ov002_02200a58(0x10);
            ((Unk_ov002_022046b0 *)(s->unk_40ac))->func_ov002_02202f00();
            func_ov002_02202e48(s->unk_40ac);
            if (func_ov112_02297280(s)) {
                func_ov112_022976a8(s);
            }
            func_ov112_02297264(s);
            func_ov112_02297808(s, 0x1000);
        } else {
            u32 t = func_ov112_02297d74(s, v);
            if (t == 1 && (data_021f47d8[0] & 1) != 0) {
                func_ov095_02294318(s->unk_370);
                ((Unk_ov002_022044e4 *)s)->func_ov002_02200a58(9);
                func_ov095_02294d40(s->unk_370, r);
            } else if (t == 3) {
            } else if (t == 4) {
                func_ov095_02295194(s->unk_370);
            } else {
                ((Unk_ov112_02299b10 *)s)->func_ov112_02296bfc();
            }
        }
    }
}

void Unk_ov112_02299b10::func_ov112_0229864c() {
    S *s = (S *)this;
    if ((data_021f47d8[0] & 1) == 0) {
        ((Unk_ov112_02299b10 *)s)->func_ov112_02296bfc();
    } else if (func_ov095_022942e8(s->unk_370)) {
        u32 r = func_ov095_02294a40(s->unk_370);
        func_ov112_02297d74(s, func_ov095_02294864(s->unk_370, r, 8));
        func_ov095_02294d40(s->unk_370, r);
    }
}

void Unk_ov112_02299b10::func_ov112_02298624() {
    S *s = (S *)this;
    if (((Unk_020e100c *)(s->unk_4258))->func_0208d4fc()) {
        ((Unk_ov112_02299b10 *)s)->func_ov112_02296bdc();
        ((Unk_ov002_022044e4 *)s)->func_ov002_02200a58(6);
    }
}

void Unk_ov112_02299b10::func_ov112_022985b8() {
    S *s = (S *)this;
    if ((data_021f47d8[0] & 2) == 0) {
        ((Unk_ov002_022044e4 *)s)->func_ov002_02200a58(s->unk_0c1);
    } else if (func_ov095_022942e8(s->unk_370)) {
        func_ov095_02293da8(s->unk_370);
        if (func_ov112_02297cd4(s, 0)) {
            if (func_ov112_02297818(s, 0x800)) {
                ((Unk_ov112_02299b10 *)s)->func_ov112_02296c48();
            }
        } else {
            ((Unk_ov112_02299b10 *)s)->func_ov112_02296d6c();
            func_ov112_02297a0c(s);
        }
    }
}

void Unk_ov112_02299b10::func_ov112_022984b4() {
    S *s = (S *)this;
    if (((Unk_ov002_022044e4 *)s)->func_ov002_022009d4()) {
        func_ov112_0229791c(s);
    } else if (((Unk_ov112_02299b10 *)s)->func_ov112_02296ef8((void *)((Unk_ov002_022044e4 *)s)->func_ov002_022009c8())) {
        if (func_ov095_02293da0(s->unk_370) || func_ov112_02297280(s)) {
            func_ov095_02293dc0(s->unk_370);
            func_ov112_02297264(s);
            func_ov112_022976a8(s);
        } else {
            func_ov112_02297264(s);
        }
        ((Unk_ov112_02299b10 *)s)->func_ov112_02296ff4();
        ((Unk_ov112_02299b10 *)s)->func_ov112_02296c48();
        ((Unk_ov112_02299b10 *)s)->func_ov112_02296e14();
        func_0200402c(0xb);
    } else if (!func_ov112_02298018(s)) {
        u32 old = s->unk_0bd;
        if (func_ov112_022980b0(s)) {
            if (old != s->unk_0bd) {
                ((Unk_ov112_02299b10 *)s)->func_ov112_02296c48();
            }
        } else {
            if ((data_021f47d8[1] & 1) != 0) {
                ((Unk_ov002_022044e4 *)s)->func_ov002_02200a58(0xd);
                func_ov112_02297808(s, 0x100);
                s->unk_0be = s->unk_0bd;
                s->unk_0bf = s->unk_0bd;
            }
            if (!func_ov112_02297f48(s)) {
                if (!func_ov112_02297fac(s)) {
                    if (func_ov112_02297f1c(s) != 0) return;
                }
            }
        }
    }
}

void Unk_ov112_02299b10::func_ov112_02298440() {
    S *s = (S *)this;
    if ((data_021f47d8[0] & 1) == 0) {
        ((Unk_ov002_022044e4 *)s)->func_ov002_02200a58(0xc);
        if (s->unk_0be == s->unk_0bf) {
            func_ov112_022977f8(s, 0x100);
        }
    } else {
        if (((Unk_ov112_02299b10 *)s)->func_ov112_02296ef8((void *)((Unk_ov002_022044e4 *)s)->func_ov002_022009c8())) {
            s->unk_0bf = s->unk_0bd;
            func_ov112_022976a8(s);
            ((Unk_ov112_02299b10 *)s)->func_ov112_02296ff4();
            ((Unk_ov112_02299b10 *)s)->func_ov112_02296c48();
            func_0200402c(0x15);
        }
    }
}

void Unk_ov112_02299b10::func_ov112_02298410() {
    S *s = (S *)this;
    if ((data_021f47d8[0] & 0x200) == 0) {
        ((Unk_ov002_022044e4 *)s)->func_ov002_02200a58(s->unk_0c1);
        ((Unk_ov112_02299b10 *)s)->func_ov112_02296e14();
    }
}

void Unk_ov112_02299b10::func_ov112_022983e0() {
    S *s = (S *)this;
    if ((data_021f47d8[0] & 0x100) == 0) {
        ((Unk_ov002_022044e4 *)s)->func_ov002_02200a58(s->unk_0c1);
        ((Unk_ov112_02299b10 *)s)->func_ov112_02296e14();
    }
}

void Unk_ov112_02299b10::func_ov112_022983bc() {
    S *s = (S *)this;
    if (((Unk_020e1028 *)(s->unk_40ac))->func_0208d9a8()) {
        ((Unk_ov002_022044e4 *)s)->func_ov002_02200a58(0x11);
    }
}

void Unk_ov112_02299b10::func_ov112_02298380() {
    S *s = (S *)this;
    if ((data_021f47d8[0] & 1) == 0) {
        ((Unk_ov002_022046b0 *)(s->unk_40ac))->func_ov002_02202ef4();
        ((Unk_ov002_022044e4 *)s)->func_ov002_02200a58(0x12);
        ((Unk_ov112_02299b10 *)s)->func_ov112_02297104();
    } else {
        func_ov112_022972ac(s);
    }
}

void Unk_ov112_02299b10::func_ov112_02298354() {
    S *s = (S *)this;
    if (((Unk_020e1028 *)(s->unk_40ac))->func_0208d9a8()) {
        ((Unk_ov112_02299b10 *)s)->func_ov112_02296bfc();
        func_ov112_022977f8(s, 0x1000);
    }
}

void Unk_ov112_02299b10::func_ov112_0229823c() {
    S *s = (S *)this;
    u32 old;
    s32 r;
    s32 a;
    s32 b;
    u32 t;

    if (((Unk_ov002_022044e4 *)s)->func_ov002_022009d4()) {
        func_ov112_0229788c(s);
        return;
    }
    if (data_021f47d8[1] & 1) {
        ((Unk_ov002_0220464c *)(s->unk_4258))->func_ov002_02202b68();
        ((Unk_ov002_022044e4 *)s)->func_ov002_02200a58(0x14);
        return;
    }
    old = s->unk_0c2;
    r = ((Unk_ov002_022044e4 *)s)->func_ov002_022009c8();
    if (func_ov002_0220126c(r)) {
        if (s->unk_0c2 != 0) {
            s->unk_0c2 = *(volatile u8 *)&s->unk_0c2 - 1;
        }
    } else if (func_ov002_0220125c(r)) {
        if (s->unk_0c2 < 1) {
            s->unk_0c2 = *(volatile u8 *)&s->unk_0c2 + 1;
        }
    }
    if (old != s->unk_0c2) {
        if (s->unk_0c2 != 0) {
            a = ((Unk_ov002_02202fac *)(s->unk_40f4))->func_ov002_022030f4(4);
            b = ((Unk_ov002_02202fac *)(s->unk_40f4))->func_ov002_022030b8(4);
            ((Unk_ov112_02299b10 *)s)->func_ov112_02296cb4(a, b);
        } else {
            a = ((Unk_ov002_02202fac *)(s->unk_40f4))->func_ov002_022030f4(3);
            b = ((Unk_ov002_02202fac *)(s->unk_40f4))->func_ov002_022030b8(3);
            ((Unk_ov112_02299b10 *)s)->func_ov112_02296cb4(a, b);
        }
    }
    t = data_021f47d8[1];
    if (t & 2) {
        ((Unk_ov112_02299b10 *)s)->func_ov112_02296d6c();
        func_ov112_02297984(s);
    } else if (t & 8) {
        ((Unk_ov112_02299b10 *)s)->func_ov112_02296d6c();
        func_ov112_022979c0(s);
    }
}

void Unk_ov112_02299b10::func_ov112_02298208() {
    S *s = (S *)this;
    if (((Unk_020e100c *)(s->unk_4258))->func_0208d4fc()) {
        if (s->unk_0c2 != 0) {
            func_ov112_02297984(s);
        } else {
            func_ov112_022979c0(s);
        }
    }
}

void Unk_ov112_02299b10::func_ov112_0229819c() {
    S *s = (S *)this;
    s32 a;
    s32 b;
    s32 c;

    if (((Unk_ov002_02202fac *)(s->unk_40f4))->func_ov002_0220308c()) {
        if (((Unk_020e100c *)(s->unk_4258))->func_0208d534()) {
            a = ((Unk_ov002_02202fac *)(s->unk_40f4))->func_ov002_0220306c();
            b = ((Unk_ov002_02202fac *)(s->unk_40f4))->func_ov002_022030f4(-1);
            c = ((Unk_ov002_02202fac *)(s->unk_40f4))->func_ov002_022030b8(-1);
            ((Unk_ov002_02202d98 *)(s->unk_4258))->func_ov002_02202a40(a + b, a + c);
        }
    } else {
        ((Unk_ov112_02299b10 *)s)->func_ov112_02296d6c();
        ((Unk_ov002_022044e4 *)s)->func_ov002_02200a60(1);
    }
}

void Unk_ov112_02299b10::func_ov112_0229816c() {
    S *s = (S *)this;
    func_ov095_02294324(s->unk_370);
    if (((Unk_ov002_022040ec *)(s->unk_244))->func_ov002_02204234(1)) {
        func_ov112_022978e0(s);
    }
}

extern "C" BOOL func_ov112_02298114(S *s) {
    s32 a;

    if ((data_021f47d8[1] & 1) == 0) {
        return FALSE;
    }
    a = func_ov095_02292404(s->unk_370);
    if (a != -1) {
        func_ov095_02294864(s->unk_370, a, 8);
        func_ov095_02294d40(s->unk_370, a);
        ((Unk_ov112_02299b10 *)s)->func_ov112_02296c28();
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL func_ov112_022980b0(S *s) {
    if ((data_021f47d8[0] & 2) == 0) {
        return FALSE;
    }
    func_ov095_02293da8(s->unk_370);
    if (func_ov112_02297cd4(s, 0)) {
        func_ov095_02294318(s->unk_370);
        s->unk_0c1 = s->unk_08d;
        ((Unk_ov002_022044e4 *)s)->func_ov002_02200a58(0xb);
    } else {
        ((Unk_ov112_02299b10 *)s)->func_ov112_02296d6c();
        func_ov112_02297a0c(s);
    }
    return TRUE;
}

extern "C" BOOL func_ov112_02298018(S *s) {
    if ((data_021f47d8[1] & 0x800) == 0) {
        return FALSE;
    }
    if (func_ov112_02297818(s, 0x800)) {
        func_ov112_022977f8(s, 0x800);
    } else {
        func_ov112_02297808(s, 0x800);
        func_ov112_02297434(s);
    }
    if (func_ov095_02295270(s->unk_370, -1)) {
        if (func_ov112_02297818(s, 0x800)) {
            ((Unk_ov002_0220464c *)(s->unk_4258))->func_ov002_02202c40();
            ((Unk_ov002_022044e4 *)s)->func_ov002_02200a58(0xc);
        } else {
            ((Unk_ov002_0220464c *)(s->unk_4258))->func_ov002_02202ca0();
            ((Unk_ov002_022044e4 *)s)->func_ov002_02200a58(6);
        }
        ((Unk_ov112_02299b10 *)s)->func_ov112_02296ce8();
    } else {
        ((Unk_ov112_02299b10 *)s)->func_ov112_02296ce8();
    }
    return TRUE;
}

extern "C" BOOL func_ov112_02297fac(S *s) {
    if ((data_021f47d8[1] & 0x100) == 0) {
        return FALSE;
    }
    if (func_ov095_02295440(s->unk_370, 0xc)) {
        return FALSE;
    }
    func_ov112_02297d74(s, 0x119);
    func_ov095_02294d40(s->unk_370, 0xdc);
    ((Unk_ov112_02299b10 *)s)->func_ov112_02296c48();
    s->unk_0c1 = s->unk_08d;
    ((Unk_ov002_022044e4 *)s)->func_ov002_02200a58(0xf);
    return TRUE;
}

extern "C" BOOL func_ov112_02297f48(S *s) {
    if ((data_021f47d8[1] & 0x200) == 0) {
        return FALSE;
    }
    if (func_ov095_02295440(s->unk_370, 0xb)) {
        return FALSE;
    }
    func_ov112_02297d74(s, 0x118);
    func_ov095_02294d40(s->unk_370, 0xdb);
    s->unk_0c1 = s->unk_08d;
    ((Unk_ov002_022044e4 *)s)->func_ov002_02200a58(0xe);
    return TRUE;
}

extern "C" BOOL func_ov112_02297f1c(S *s) {
    if ((data_021f47d8[1] & 8) == 0) {
        return FALSE;
    }
    ((Unk_ov112_02299b10 *)s)->func_ov112_02296d6c();
    func_ov112_02297a4c(s);
    return TRUE;
}

extern "C" s32 func_ov112_02297eb8(S *s) {
    s32 a;
    s32 b;
    s32 r;

    func_ov095_02295194(s->unk_370);
    a = func_ov095_02294a44(s->unk_370, data_021ef5f0, data_021ef5ec);
    if (a != -1) {
        b = func_ov095_02294864(s->unk_370, a, 8);
        r = func_ov112_02297d74(s, b);
        func_ov095_02294d40(s->unk_370, a);
        func_ov095_02294318(s->unk_370);
        return r;
    }
    return 0;
}

extern "C" s32 func_ov112_02297d74(S *s, s32 key) {
    s32 r = 1;
    s32 t = func_ov095_02293dc8(s->unk_370, key, 6);

    if (t != 0) {
        func_ov112_022976a8(s);
        return t;
    }
    if (func_ov095_0229423c(s->unk_370, key)) {
        switch (key) {
        case 0x100:
            func_ov112_02297cd4(s, r);
            break;
        case 0x103:
        case 0x104:
        case 0x105:
            if (!func_ov112_02297b90(s, key)) {
                func_ov112_02297934(s);
            }
            r = 2;
            break;
        case 0x118:
            func_ov112_02297b28(s);
            r = 2;
            break;
        case 0x119:
            func_ov112_02297a90(s);
            r = 2;
            break;
        case 0x113:
            func_ov112_02297a4c(s);
            r = 3;
            break;
        case 0x115:
            func_ov112_02297a0c(s);
            r = 3;
            break;
        case 0x101:
        case 0x102:
        default:
            r = 2;
            break;
        }
    } else {
        t = func_ov112_02297c38(s, (u8)key);
        if (func_ov095_02295264(s->unk_370)) {
            func_ov112_022978a4(s, 0x1c, r);
            return 4;
        }
        if (func_ov095_02295258(s->unk_370)) {
            func_ov112_022978a4(s, 0x1c, r);
            return 4;
        }
        if (t == 0) {
            func_ov112_02297934(s);
        }
        if (key == 0x86) {
            r = 2;
        }
    }
    return r;
}

extern "C" BOOL func_ov112_02297cd4(S *s, s32 flag) {
    if (func_ov112_02297280(s)) {
        func_ov095_02293dc0(s->unk_370);
        func_0200402c(0x35);
    } else {
        u32 c0 = s->unk_0c0;
        u32 bd = s->unk_0bd;

        if (bd > c0) {
            s->unk_0be = bd;
            s->unk_0bf = s->unk_0bd - 1;
            func_0200402c(0x35);
        } else if (s->unk_0c3[c0] != 0) {
            s->unk_0be = c0;
            s->unk_0bf = s->unk_0c0 + 1;
            func_0200402c(0x35);
        } else {
            if (flag != 0) {
                func_ov112_02297934(s);
            }
            return FALSE;
        }
    }
    func_ov112_0229721c(s);
    func_ov112_022976a8(s);
    ((Unk_ov112_02299b10 *)s)->func_ov112_02296ff4();
    return TRUE;
}

extern "C" BOOL func_ov112_02297c7c(S *s, u32 a, s32 b) {
    u8 x = s->unk_0bd;

    if (func_ov095_02293ff0(s->unk_370, s->unk_0c3, a, &x, 0xc0, 0x28, 6, 0x96, 0, b)) {
        ((Unk_ov112_02299b10 *)s)->func_ov112_0229705c(x);
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL func_ov112_02297c38(S *s, u32 key) {
    BOOL r;

    if (func_ov112_02297280(s)) {
        func_ov112_0229721c(s);
        func_ov095_02293dc0(s->unk_370);
    }
    r = func_ov112_02297c7c(s, key, 1);
    func_ov112_022976a8(s);
    ((Unk_ov112_02299b10 *)s)->func_ov112_02296ff4();
    return r;
}

extern "C" BOOL func_ov112_02297b90(S *s, s32 key) {
    s32 r = ((Unk_ov112_02299b10 *)s)->func_ov112_02297044();

    if (r == 0) {
        return FALSE;
    }
    switch (key) {
    case 0x103:
        r = func_ov095_02293f90(s->unk_370, r);
        break;
    case 0x104:
        r = func_ov095_02293f8c(s->unk_370, r);
        break;
    case 0x105:
        r = func_ov095_02293f88(s->unk_370, r);
        break;
    }
    if (r == 0) {
        return FALSE;
    }
    if (!func_ov095_02293f94(s->unk_370, s->unk_0c3, r, s->unk_0bd, 0xc0, 0x2710)) {
        return FALSE;
    }
    func_ov112_022976a8(s);
    ((Unk_ov112_02299b10 *)s)->func_ov112_02296ff4();
    return TRUE;
}

extern "C" void func_ov112_02297b28(S *s) {
    u32 a;
    u32 b;
    u32 x;
    u32 y;

    if (func_ov112_02297280(s)) {
        b = s->unk_0bf;
        a = s->unk_0be;
        if (a > b) {
            x = b;
            y = a - b;
        } else {
            x = a;
            y = b - a;
        }
        func_0205125c(s->unk_183, 0xc0);
        func_02051268(s->unk_0c3 + x, s->unk_183, y);
        func_ov112_02297808(s, 0x200);
        func_ov095_022923f8(s->unk_370);
        ((Unk_ov112_02299b10 *)s)->func_ov112_02296e14();
    }
}

extern "C" void func_ov112_02297a90(S *s) {
    s32 n;
    s32 i;

    if (func_ov112_02297818(s, 0x200)) {
        if (func_ov112_02297280(s)) {
            func_ov112_0229721c(s);
        }
        func_ov095_02293dc0(s->unk_370);
        func_ov095_02293d94(s->unk_370);
        n = func_020512e0(s->unk_183, 0xc0);
        for (i = 0; i < n; i++) {
            if (!func_ov112_02297c7c(s, s->unk_183[i], 0)) {
                if (i == 0) {
                    func_ov112_02297934(s);
                }
                i = n;
            }
        }
        func_ov095_022923ec(s->unk_370);
        func_ov112_022976a8(s);
        ((Unk_ov112_02299b10 *)s)->func_ov112_02296ff4();
        func_ov095_02293d88(s->unk_370);
    }
}

extern "C" void func_ov112_02297a4c(S *s) {
    func_0200402c(0x29);
    func_ov112_022977f8(s, 0x2000);
    ((Unk_ov112_02299b10 *)s)->func_ov112_02296de8(2, 9);
    func_ov112_02297808(s, 0x400);
    ((Unk_ov112_02299b10 *)s)->func_ov112_02296b80();
    func_ov112_02297264(s);
    func_ov112_022976a8(s);
}

extern "C" void func_ov112_02297a0c(S *s) {
    func_0200402c(0x2a);
    func_ov112_02297808(s, 0x2000);
    ((Unk_ov112_02299b10 *)s)->func_ov112_02296de8(2, 8);
    func_ov112_02297808(s, 0x400);
    func_ov112_02297264(s);
    func_ov112_022976a8(s);
}

extern "C" void func_ov112_022979c0(S *s) {
    ((Unk_ov112_02299b10 *)s)->func_ov112_02296de8(0xa, 3);
    if (func_ov112_02297818(s, 0x2000)) {
        func_0200402c(0x28);
    } else {
        func_02076f88(s->unk_0c3);
        func_0200402c(0x27);
        ((Unk_ov112_02299b10 *)s)->func_ov112_02296988();
        func_0209750c()->func_0209865c();
        func_020998d8();
    }
}

extern "C" void func_ov112_02297984(S *s) {
    if (func_ov112_02297818(s, 0x2000)) {
        func_0200402c(0x29);
    } else {
        func_0200402c(0x2a);
    }
    ((Unk_ov112_02299b10 *)s)->func_ov112_02296de8(6, 4);
    func_ov112_022977f8(s, 0x400);
}

extern "C" void func_ov112_02297940(S *s) {
    func_0200402c(0x28);
    func_ov112_022977f8(s, 0x40);
    ((Unk_ov112_02299b10 *)s)->func_ov112_02296d6c();
    func_ov112_022974fc(s, 0);
    ((Unk_ov002_022044e4 *)s)->func_ov002_02200a50(0xc);
    ((Unk_ov002_022044e4 *)s)->func_ov002_02200a60(1);
    func_ov112_02297808(s, 0x2000);
}

extern "C" void func_ov112_02297934(S *s) {
    func_0200402c(0x34);
}

extern "C" void func_ov112_0229791c(S *s) {
    ((Unk_ov112_02299b10 *)s)->func_ov112_02296d6c();
    ((Unk_ov002_022044e4 *)s)->func_ov002_02200a58(0);
}

extern "C" void func_ov112_02297900(S *s) {
    ((Unk_ov002_022044e4 *)s)->func_ov002_02200980();
    ((Unk_ov112_02299b10 *)s)->func_ov112_02296d90();
    ((Unk_ov002_022044e4 *)s)->func_ov002_02200a58(6);
}

extern "C" void func_ov112_022978e0(S *s) {
    if (func_0206ef0c()) {
        func_ov112_0229791c(s);
    } else {
        func_ov112_02297900(s);
    }
}

extern "C" void func_ov112_022978a4(S *s, u32 a, u32 b) {
    volatile u8 v;
    v = data_021edb68;
    v = a;
    ((Unk_ov002_022040ec *)(s->unk_244))->func_ov002_02204394((u8 *)&v, b, 0);
    ((Unk_ov002_022044e4 *)s)->func_ov002_02200a58(0x16);
    ((Unk_ov112_02299b10 *)s)->func_ov112_02296d6c();
}

extern "C" void func_ov112_0229788c(S *s) {
    ((Unk_ov112_02299b10 *)s)->func_ov112_02296d6c();
    ((Unk_ov002_022044e4 *)s)->func_ov002_02200a58(5);
}

extern "C" void func_ov112_0229782c(S *s) {
    u32 r4;
    ((Unk_ov002_022044e4 *)s)->func_ov002_02200980();
    s->unk_0c2 = 1;
    ((Unk_ov002_0220464c *)(s->unk_4258))->func_ov002_02202d00(1);
    (*(Unk_ov112_0229782c_Fn **)s->unk_4258)[3](s->unk_4258);
    r4 = ((Unk_ov002_02202fac *)(s->unk_40f4))->func_ov002_022030f4(4);
    ((Unk_ov002_02202d98 *)(s->unk_4258))->func_ov002_02202a40(r4, ((Unk_ov002_02202fac *)(s->unk_40f4))->func_ov002_022030b8(4));
    ((Unk_ov002_022044e4 *)s)->func_ov002_02200a58(0x13);
}

extern "C" BOOL func_ov112_02297818(S *s, u32 m) {
    if (s->unk_0ac & m) return TRUE;
    return FALSE;
}

extern "C" void func_ov112_02297808(S *s, u32 m) {
    s->unk_0ac = s->unk_0ac | m;
}

extern "C" void func_ov112_022977f8(S *s, u32 m) {
    s->unk_0ac = s->unk_0ac & ~m;
}

extern "C" void func_ov112_022976a8(S *s) {
    Unk_ov112_022976a8_Pad pad;
    s32 i;
    u32 r6;
    u8 zb;
    u32 z14, z18;
    func_0206cf4c(s->unk_0c3, s->unk_6a60, &s->unk_094, 0xc0, 0x28, 0x96, 6);
    if (func_ov112_02297818(s, 0x10)) {
        r6 = 0;
    } else if (func_ov112_02297818(s, 0x400)) {
        r6 = 0;
    } else {
        r6 = 1;
    }
    i = 0;
    zb = 0;
    z14 = 0;
    z18 = 0;
    for (; i < 6; i++) {
        u8 *b = (u8 *)s + i * 4;
        u32 *pp = (u32 *)(b + 0x6a60);
        u32 d = *(u32 *)((u8 *)s + (i + 1) * 4 + 0x6a60) - *pp;
        u8 *obj = s->unk_3f2c + i * 0x40;
        ((Unk_020e2a78 *)(obj))->func_020a7c3c();
        if (d != 0) {
            u32 a3 = (i == 0) ? z14 : r6;
            u32 st = (i == s->unk_094) ? 1 : z18;
            func_0206f920(obj, s->unk_0c3 + *pp, d, a3, st);
        } else if (r6 != 0) {
            if (i == s->unk_094) {
                func_0206f920(obj, &zb, 1, r6, 1);
            }
        }
    }
    for (i = 0; i < 6; i++) {
        ((Unk_020e0488 *)(s->unk_3f2c + i * 0x40))->func_0206fb04((u32)(s->unk_4c60 + i * 0x500), 0x14, 0xe, 0xd);
    }
    func_ov112_02297648(s);
    func_ov112_02297808(s, 4);
    ((Unk_ov112_02299b10 *)s)->func_ov112_02296e14();
    s->unk_0b0 = (func_020512e0(s->unk_0c3, 0xc0) * 0x1f) / 0xc0;
    if (s->unk_0b0 > 0x1f) s->unk_0b0 = 0x1f;
}

extern "C" void func_ov112_02297648(S *s) {
    u32 r4;
    u32 r0;
    u8 r1, r2;
    if (func_ov112_02297280(s)) {
        u32 a = s->unk_0bf;
        u32 b = s->unk_0be;
        if (b > a) {
            r4 = a;
            r0 = b - a;
        } else {
            r4 = b;
            r0 = a - b;
        }
        r1 = 0xd;
        r2 = 0xe;
    } else {
        r0 = func_ov095_02293da0(s->unk_370);
        if (r0 != 0) r4 = s->unk_0bd - r0;
        r1 = 0xb;
        r2 = 0xd;
    }
    if (r0 != 0) func_ov112_022975c0(s, r1, r2, r4, r0);
}

extern "C" void func_ov112_022975c0(S *s, u8 a, u8 b, u32 c, u32 n) {
    s32 i;
    u32 off = 0;
    i = off;
    for (; i < 6; i++) {
        u32 d = s->unk_6a60[i + 1] - s->unk_6a60[i];
        if (d == 0) return;
        if (c >= off) {
            u32 cnt, e;
            e = off + d;
            if (c < e) {
                if (e > c + n) cnt = n;
                else cnt = d - (c - off);
                ((Unk_020e0488 *)(s->unk_3f2c + i * 0x40))->func_0206f904(a, b, c - off, cnt);
                c = (u8)e;
                n -= cnt;
                if (n == 0) return;
            }
        }
        off += d;
    }
}

extern "C" void func_ov112_02297598(S *s) {
    s32 i = 0;
    u8 *p = s->unk_3f2c;
    s32 z = 0;
    for (; i < 6; i++) {
        ((Unk_020e0488 *)(p + i * 0x40))->func_0206fab4(z, z);
    }
}

extern "C" void func_ov112_02297574(S *s) {
    s32 i = 0;
    u8 *p = s->unk_3f2c;
    for (; i < 6; i++) {
        ((Unk_020e0488 *)(p + i * 0x40))->func_0206fc44();
    }
}

extern "C" void func_ov112_02297570(S *s) {
}

extern "C" void func_ov112_02297540(S *s) {
    ((Unk_020e45f8 *)(s->unk_34c))->func_020b8714((u32)s->unk_4c60, 4, 0x11, 0x11, 0x100);
}

extern "C" void func_ov112_0229750c(S *s, u32 v) {
    s->unk_0b6 = v;
    s->unk_0b7 = s->unk_0b6;
    func_ov112_02297808(s, 0x20);
    s->unk_0b8 = (s->unk_0b6 * 2) / 3;
}

extern "C" void func_ov112_022974fc(S *s, u32 v) {
    s->unk_0b7 = v;
    func_ov112_02297808(s, 0x20);
}

extern "C" BOOL func_ov112_022974f0(S *s) {
    return func_ov112_02297818(s, 0x20);
}

extern "C" void func_ov112_02297468(S *s) {
    u32 b7 = *(volatile u8 *)&s->unk_0b7;
    u32 b6 = *(volatile u8 *)&s->unk_0b6;
    if (b6 == b7) {
        func_ov112_022977f8(s, 0x20);
    } else if (b6 < b7) {
        s->unk_0b6 = s->unk_0b6 + 8;
        if (s->unk_0b6 > s->unk_0b7) s->unk_0b6 = s->unk_0b7;
    } else if (b6 < 8) {
        s->unk_0b6 = b7;
    } else {
        s->unk_0b6 = s->unk_0b6 - 8;
        if (s->unk_0b6 < s->unk_0b7) s->unk_0b6 = s->unk_0b7;
    }
    s->unk_0b8 = (s->unk_0b6 * 2) / 3;
}

extern "C" void func_ov112_02297434(S *s) {
    u32 a = s->unk_0b7;
    s32 d = s->unk_09c - a;
    if (d < 0x18) {
        func_ov112_022974fc(s, a - (0x18 - d));
    } else if (d > 0x40) {
        func_ov112_022974fc(s, a + (d - 0x38));
    }
}

extern "C" BOOL func_ov112_022973dc(S *s) {
    if (((Unk_ov002_022046b0 *)(s->unk_40ac))->func_ov002_02202f18(data_021ef5f0, data_021ef5ec)) {
        s->unk_0b9 = data_021ef5ec;
        s->unk_0ba = (s->unk_0b6 * 2) / 3;
        s->unk_0bb = s->unk_0b6;
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL func_ov112_022973ac(S *s) {
    s32 a = data_021ef5f0;
    s32 t = data_021ef5ec - 8;
    if (t < 0x10 || t > 0x38) return FALSE;
    if (a < 0xdd || a > 0xed) return FALSE;
    return TRUE;
}

extern "C" void func_ov112_0229735c(S *s, s32 v) {
    s32 d;
    v = (v * 3) >> 1;
    if (v < 0) v = 0;
    if (v > 0x3c) v = 0x3c;
    func_ov112_0229750c(s, v);
    d = s->unk_0bb - v;
    if (d >= 4 || d <= -4) {
        func_ov002_02202e54(s->unk_40ac);
        s->unk_0bb = v;
    }
}

extern "C" void func_ov112_0229733c(S *s) {
    func_ov112_0229735c(s, s->unk_0ba + (data_021ef5ec - s->unk_0b9));
}

extern "C" void func_ov112_02297304(S *s) {
    s32 t = data_021ef5ec - 0x18;
    if (t < 0) t = 0;
    if (t > 0x28) t = 0x28;
    func_020e76f8(&s->unk_0b8, (u8)t, 2);
    func_ov112_0229735c(s, s->unk_0b8);
}

extern "C" void func_ov112_022972ac(S *s) {
    s32 r, v;
    u16 k;
    v = s->unk_0b6;
    r = v;
    k = data_021f47d8[0];
    if (k & 0x40) {
        r = v - 4;
    } else if (k & 0x80) {
        r = v + 4;
    }
    if (r < 0) r = 0;
    if (r > 0x3c) r = 0x3c;
    if (v != r) func_ov002_02202e54(s->unk_40ac);
    func_ov112_0229750c(s, r);
}

extern "C" BOOL func_ov112_02297280(S *s) {
    if (!func_ov112_02297818(s, 0x100) || s->unk_0be == s->unk_0bf) return FALSE;
    return TRUE;
}

extern "C" void func_ov112_02297264(S *s) {
    s->unk_0be = 0;
    s->unk_0bf = 0;
    func_ov112_022977f8(s, 0x100);
}

extern "C" void func_ov112_0229721c(S *s) {
    u32 lo, hi;
    u32 b = s->unk_0bf;
    u32 a = s->unk_0be;
    if (a > b) {
        lo = b;
        hi = a;
    } else {
        lo = a;
        hi = b;
    }
    u8 v = (u8)func_ov095_02293fb4(s->unk_370, s->unk_0c3, lo, hi, 0xc0);
    ((Unk_ov112_02299b10 *)s)->func_ov112_0229705c(v);
    func_ov112_02297264(s);
}

extern "C" u8 func_ov112_022971cc(S *s, s32 i, s32 *p) {
    u32 off = s->unk_6a60[i];
    u8 out;
    u32 r = func_ov095_02293f2c(s->unk_370, s->unk_0c3 + off, 0xc0 - off, 0x96, (u8)(*p - 0x30), &out);
    *p = r + 0x30;
    return (u8)(out + off);
}

extern "C" void func_ov112_02297170(S *s, s32 a, s32 b) {
    s32 t;
    if (b < 0x38) b = 0x38;
    if (b >= 0x88) b = 0x87;
    s->unk_098 = a;
    s->unk_09c = b;
    t = (s->unk_09c - 0x28) >> 4;
    if (t > s->unk_094) t = s->unk_094;
    s->unk_09c = t * 16 + 0x28;
    ((Unk_ov112_02299b10 *)s)->func_ov112_0229705c(func_ov112_022971cc(s, t, &s->unk_098));
    func_ov112_02297434(s);
}

BOOL Unk_ov112_02299b10::func_ov112_02297108() {
    s32 a = data_021ef5f0;
    s32 b = data_021ef5ec;
    if (b >= 0x48) {
        return FALSE;
    }
    if (a < 0x20 || a >= 0xe0) {
        return FALSE;
    }
    b += unk_b7 + 8;
    if (a < 0x30) {
        a = 0x30;
    }
    func_ov112_02297170((S *)this, a, b);
    func_ov112_02297808((S *)this, 0x100);
    unk_be = unk_bd;
    unk_bf = unk_bd;
    return TRUE;
}

void Unk_ov112_02299b10::func_ov112_02297104() {}

BOOL Unk_ov112_02299b10::func_ov112_022970b0() {
    s32 a = data_021ef5f0;
    s32 b = data_021ef5ec;
    u8 old = unk_bd;
    if (a < 0x30) {
        a = 0x30;
    }
    b += unk_b7 + 8;
    func_ov112_02297170((S *)this, a, b);
    unk_bf = unk_bd;
    if (unk_bd != old) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov112_02299b10::func_ov112_0229706c() {
    func_ov112_02297808((S *)this, 0x40);
    unk_98 = 0x30;
    unk_9c = 0x38;
    func_ov112_0229705c(unk_c0);
    func_ov112_02297264((S *)this);
    func_ov095_022951e4(&unk_370);
    func_ov112_02296e14();
}

void Unk_ov112_02299b10::func_ov112_0229705c(u8 v) {
    unk_bd = v;
    unk_bc = 0x10;
}

u8 Unk_ov112_02299b10::func_ov112_02297044() {
    if (unk_bd == 0) {
        return 0;
    }
    return unk_c3[unk_bd - 1];
}

void Unk_ov112_02299b10::func_ov112_02296ff4() {
    s32 k = func_ov112_02296fbc(unk_bd);
    unk_9c = k * 16 + 0x28;
    s32 b = unk_6a60[k];
    unk_98 = (u8)(func_02051348(&unk_c3[b], unk_bd - b) + 0x30);
    func_ov112_02297434((S *)this);
}

s32 Unk_ov112_02299b10::func_ov112_02296fbc(s32 v) {
    s32 n, i;
    i = 0;
    n = unk_94;
    for (; i < n; i++) {
        if (v < unk_6a60[i + 1]) {
            return i;
        }
    }
    if (n >= 6) {
        n = 5;
    }
    return n;
}

BOOL Unk_ov112_02299b10::func_ov112_02296ef8(void *pad) {
    if (pad == 0) {
        return FALSE;
    }
    u8 cur = unk_bd;
    s32 t = func_ov112_02296fbc(cur);
    volatile s32 old = t;
    if (func_ov002_0220128c((s32)pad)) {
        if (t > 1) {
            t--;
        }
    } else if (func_ov002_0220127c((s32)pad)) {
        t++;
        if (t > unk_94 || t >= 6) {
            t--;
        }
    }
    s32 v = unk_98;
    if (t != old) {
        cur = func_ov112_022971cc((S *)this, t, &v);
    }
    if (func_ov002_0220126c((s32)pad)) {
        if (cur > unk_c0) {
            cur = cur - 1;
        }
    } else if (func_ov002_0220125c((s32)pad)) {
        s32 n = func_020512e0(unk_c3, 0xc0);
        s32 nx = cur + 1;
        if (nx <= n) {
            cur = nx;
        }
    }
    if (cur == unk_bd) {
        return FALSE;
    }
    func_ov112_0229705c(cur);
    return TRUE;
}

void Unk_ov112_02299b10::func_ov112_02296e14() {
    if (func_ov095_02293ff0(&unk_370, unk_c3, 0x86, &unk_bd, 0xc0, 0x28, 6, 0x96, 1, 1)) {
        func_ov095_02295340(&unk_370, 0);
    } else {
        func_ov095_022953c0(&unk_370, 0);
    }
    if (func_ov112_02297280((S *)this)) {
        func_ov095_02295340(&unk_370, 0xb);
    } else {
        func_ov095_022953c0(&unk_370, 0xb);
    }
    if (func_ov112_02297818((S *)this, 0x200)) {
        func_ov095_02295340(&unk_370, 0xc);
    } else {
        func_ov095_022953c0(&unk_370, 0xc);
    }
    if (func_ov112_02297280((S *)this)) {
        func_ov095_022942c0(&unk_370);
        func_ov095_02295340(&unk_370, 6);
    } else if (unk_bd <= unk_c0) {
        func_ov095_022942c0(&unk_370);
    } else {
        func_ov095_02294250(&unk_370, func_ov112_02297044());
    }
}

void Unk_ov112_02299b10::func_ov112_02296de8(u8 v, u8 x) {
    func_ov002_02200a50(v);
    ((Unk_ov002_02202fac *)(&unk_40f4))->func_ov002_022030ac(x);
    func_ov002_02200a58(0x15);
}

void Unk_ov112_02299b10::func_ov112_02296d90() {
    func_ov112_022977f8((S *)this, 0x800);
    func_ov095_022924f0(&unk_370);
    u32 a = func_ov095_02292580(&unk_370);
    u32 b = func_ov095_02292544(&unk_370);
    unk_4258.func_ov002_02202a40(a, b);
    ((Unk_ov002_0220464c *)&unk_4258)->func_ov002_02202d00(1);
    func_ov112_02296bdc();
}

void Unk_ov112_02299b10::func_ov112_02296d6c() {
    ((Unk_ov002_0220464c *)&unk_4258)->func_ov002_02202d00(0);
    unk_4258.vfunc_0c();
}

void Unk_ov112_02299b10::func_ov112_02296ce8() {
    if (func_ov112_02297818((S *)this, 0x800)) {
        unk_4258.func_ov002_0220298c(unk_98, unk_9c - unk_b7, 3, 2);
        unk_c1 = 0xc;
    } else {
        u32 a = func_ov095_02292580(&unk_370);
        u32 b = func_ov095_02292544(&unk_370);
        unk_4258.func_ov002_0220298c(a, b, 3, 2);
        unk_c1 = 6;
    }
    func_ov002_02200a58(7);
}

void Unk_ov112_02299b10::func_ov112_02296cb4(s32 a, s32 b) {
    unk_4258.func_ov002_0220298c(a, b, 3, 2);
    unk_c1 = unk_8d;
    func_ov002_02200a58(7);
}

void Unk_ov112_02299b10::func_ov112_02296c48() {
    if (func_ov112_02297818((S *)this, 0x800)) {
        unk_4258.func_ov002_02202a40(unk_98, unk_9c - unk_b7);
    } else {
        u32 a = func_ov095_02292580(&unk_370);
        u32 b = func_ov095_02292544(&unk_370);
        unk_4258.func_ov002_02202a40(a, b);
    }
    unk_4258.vfunc_0c();
}

void Unk_ov112_02299b10::func_ov112_02296c28() {
    ((Unk_ov002_0220464c *)&unk_4258)->func_ov002_02202b68();
    func_ov002_02200a58(8);
}

void Unk_ov112_02299b10::func_ov112_02296bfc() {
    func_ov095_02295194(&unk_370);
    unk_4258.func_ov002_02202af0();
    func_ov002_02200a58(10);
}

void Unk_ov112_02299b10::func_ov112_02296bdc() {
    unk_4258.func_ov002_02202a78();
    unk_4258.vfunc_0c();
}

void Unk_ov112_02299b10::func_ov112_02296b80() {
    u8 *c3 = unk_c3;
    func_020a78a4(&unk_4390, c3, 0xc0);
    unk_42bc.func_020a7aa0(&unk_4390, 0, 0);
    if (func_020b30bc(&unk_42bc)) {
        unk_4390.func_020a77f8(&unk_42bc);
        func_02050e90(&unk_4390, c3, 0xc0);
    }
}

void Unk_ov112_02299b10::func_ov112_02296abc() {
    u8 t[16];
    s32 v;
    func_0209cf88(t);
    t[4] = 0x37;
    t[5] = 0x35;
    v = t[2];
    t[6] = v / 10 + 0x35;
    t[7] = v % 10 + 0x35;
    t[8] = 0;
    func_0206f994(&unk_3f2c[0], &t[4], 5);
    func_ov112_02296a54(0, 0x111, 4, 1);
    v = t[1];
    t[4] = v / 10 + 0x35;
    t[5] = v % 10 + 0x35;
    v = t[0];
    t[6] = v / 10 + 0x35;
    t[7] = v % 10 + 0x35;
    func_0206f994(&unk_3f2c[1], &t[4], 5);
    func_ov112_02296a54(1, 0x116, 4, 1);
}

void Unk_ov112_02299b10::func_ov112_02296a8c() {
    ((Unk_020e2a78 *)(&unk_3f2c[2]))->func_020a7c3c();
    func_ov112_02296a54(2, 0x11a, 5, 0);
}

void Unk_ov112_02299b10::func_ov112_02296a54(s32 idx, u32 a, u32 b, s32 c) {
    Unk_020e0488 *p = &unk_3f2c[idx];
    ((Unk_020e0488 *)(p))->func_0206fb48(4, a, b, 0xf, 0xa, c);
    ((Unk_020e0488 *)(p))->func_0206fab4(0, 0);
}

void Unk_ov112_02299b10::func_ov112_02296a18() {
    func_0200142c();
    func_020013cc(-6);
    ((Unk_ov002_02202fac *)(&unk_40f4))->func_ov002_02203044();
    func_02001710(0x1f, 0);
    func_0200152c(2);
    func_02001608(0x2c, 0x20, 0xd4, 0x80);
}

void Unk_ov112_02299b10::func_ov112_022969f8() {
    func_0200140c();
    ((Unk_ov002_02202fac *)(&unk_40f4))->func_ov002_0220301c();
    func_0200151c(2);
}

void Unk_ov112_02299b10::func_ov112_02296988() {
    if (((Unk_020cbb18 *)(data_020cbb18))->func_02072e44()) {
        void *heap = data_021c6210;
        u8 *buf = (u8 *)func_020e8618(heap, 0xc1);
        buf[0] = 0;
        MI_CpuCopy8(unk_c3, &buf[1], 0xc0);
        void *g = data_020cbb18;
        ((Unk_020cbb18 *)(g))->func_020728d4();
        ((Unk_020cbb18 *)(g))->func_020728a4(buf, 0xc1);
        ((Unk_020cbb18 *)(g))->func_02072824(0x16, 4);
        unk_b4 = ((Unk_020cbb18 *)(g))->func_02072e34();
        func_020e85fc(heap, buf);
    }
}

BOOL Unk_ov112_02299b10::func_ov112_0229695c() {
    if (((Unk_020cbb18 *)(data_020cbb18))->func_02072e44()) {
        if (func_020740a0(unk_b4) == 0) {
            return FALSE;
        }
    }
    return TRUE;
}

