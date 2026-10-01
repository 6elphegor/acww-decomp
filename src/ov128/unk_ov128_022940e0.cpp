#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef vfunc_08
#undef vfunc_14

extern "C" {
extern u8 data_021f4770;
extern u8 data_021f4774;
extern u8 data_021ef5f8;
extern u8 data_021ef5f4;
extern u8 data_021ef5f0;
extern u8 data_021ef5ec;
extern void *data_021f482c;
extern u8 *data_021c1b3c;
extern u16 data_021f47d8[];
extern const u32 data_ov128_022951c8[4];
extern u8 data_ov128_022951e0[4];
extern u8 data_ov128_022951e4[4];
extern void *data_ov128_02295320[12];
extern u32 data_ov128_02295458[16];
extern u32 data_ov128_02295268[6];
extern u32 data_ov128_02295280[6];
extern u32 data_ov128_02295298[8];
extern u32 data_ov128_022952b8[8];
extern u32 data_ov128_022952d8[8];
extern u32 data_ov128_022952f8[10];
extern u32 data_ov128_02295350[12];
extern u32 data_ov128_02295380[12];
extern u32 data_ov128_022953b0[12];
extern u32 data_ov128_022953e0[14];
extern u32 data_ov128_02295418[16];
extern u32 data_ov128_02295498[16];
extern u32 data_ov128_02295540[32];
extern u32 data_ov128_022955c0[32];

// ov127 plain-C helpers on the sub-object at +0x478
BOOL func_ov127_02292538(void *s);
void func_ov127_0229257c(void *s, s32 d);
void func_ov127_022925c8(void *s, s32 d, s32 e);
s32 func_ov127_022926e0(void *s, s32 x, s32 y);
void func_ov127_022927a8(void *s, s32 a, s32 b);
void func_ov127_0229281c(void *p);
void func_ov127_02292824(void *s);
void func_ov127_02292950(void *s);
void func_ov127_02292994(void *s, u32 v, u32 w);
void func_ov127_02292a0c(void *s, u32 v);
void func_ov127_02292a7c(void *s);
u8 *func_ov127_02292268(void *p);
BOOL func_ov127_02292410(void *p, s32 a, u8 *b, s32 *c, s32 *d);
s32 func_ov127_022921c4(s32 a, s32 b);
u32 func_ov127_02292040(u32 a);
s32 func_ov127_0229225c(void *p);
s32 func_ov127_02292250(void *p);
void func_ov127_02292518(void *p, s32 a);
void func_ov127_0229247c(void *p, s32 a, s32 b);

void func_020b0780(void *p);
void func_020b0788(void *p, s32 a);
void func_020b080c(void *p);
u8 *func_020b053c();
void func_02087e70(s32 a, void *h, s32 x, s32 y, s32 s0, s32 s1, s32 s2, s32 s3, s32 s4, s32 s5, s32 s6, s32 s7);
void func_ov004_02224844();
void func_02094960();
void func_02034f80(void *p);
void func_02034f98(void *p);
void func_0200261c(void *a, void *b, s32 c, s32 d, s32 e, s32 f);
void func_020015b8(s32 a);
void func_02002398(s32 a, s32 b);
void func_0200226c(u32 a, u32 b, u32 c, u32 d);
void func_0200151c(s32 a);
void func_0200152c(s32 a);
void func_020021b8(s32 a, s32 b, s32 c, s32 d, s32 e);
void func_020021a0(s32 a);
void func_020020b8(s32 a);
void func_02001710(s32 a, s32 b);
void *func_020ed174();
void func_020ed188(void *p);
void func_0206f994(void *self, u8 *s, s32 n);
BOOL func_0206ef00();
BOOL func_0206ef0c();
void func_ov128_02294c38();
}

static inline BOOL Unk_ov128_02294b44_Both() {
    if (data_021f4770 != 0 && data_021f4774 != 0) {
        return TRUE;
    }
    return FALSE;
}

class Unk_ov092_02291ec8 {
public:
    void func_ov092_02291c5c();
    void func_ov092_02291ce4(s32 a, s32 b);
};

// Menu cursor sub-object hierarchy
class Unk_020e100c {
public:
    virtual ~Unk_020e100c();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    BOOL func_0208d4fc();
    BOOL func_0208d534();
};

class Unk_ov002_02202d98 : public Unk_020e100c {
public:
    BOOL func_ov002_022028f0();
    void func_ov002_022029e8(s32 a, s32 b, s32 c, s32 d);
    void func_ov002_02202a40(s32 a, s32 b);
    void func_ov002_02202a78();
    void func_ov002_02202af0();
};

// Same object as Unk_ov002_02202d98 under the name used by src/ov002/unk_02202b68.cpp
class Unk_ov002_0220464c : public Unk_020e100c {
public:
    void func_ov002_02202b68();
    void func_ov002_02202be0();
    void func_ov002_02202c40();
    void func_ov002_02202d00(s32 a);
};

class Unk_ov002_02204614 : public Unk_ov002_02202d98 {
public:
    Unk_ov002_02204614();
    virtual ~Unk_ov002_02204614();
    u32 unk_04[0x60 / 4];
};

// Sprite/text pair element (0x50 bytes), vtable 0x022046dc
struct Unk_ov002_02203c5c_Rec;
class Unk_ov002_022046dc {
public:
    Unk_ov002_022046dc();
    virtual ~Unk_ov002_022046dc();
    BOOL func_ov002_02203af4();
    void func_ov002_02203b30(s32 a, s32 b, s32 c);
    void func_ov002_02203c1c();
    void func_ov002_02203cc4(u8 a);
    void func_ov002_02203cf8(Unk_ov002_02203c5c_Rec *p, u8 a, u8 b);

    u32 unk_04[0x4c / 4];
};

// Text buffer (0x40 bytes, vptr + text renderer)
class Unk_020e0488 {
public:
    Unk_020e0488();
    virtual ~Unk_020e0488();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();

    s32 func_0206fa1c();
    void func_0206fab4(s32 a, s32 b);
    void func_0206fb9c(u32 id, u32 a, u32 b, u8 x, u8 y, s32 flag);
    void func_0206fc44();

    u32 unk_04[0x3c / 4];
};

// 0x330-byte sub-object at +0x148, ctor func_020b08b8, dtor func_020b08b4
class Unk_020b08b4 {
public:
    Unk_020b08b4();
    ~Unk_020b08b4();
    u32 unk_00[0x330 / 4];
};

// ov127 sub-object at +0x478, ctor func_ov127_02292aac, dtor func_ov127_02292aa8
class Unk_ov127_02292aac {
public:
    Unk_ov127_02292aac();
    ~Unk_ov127_02292aac();
    u32 unk_00[0x2838 / 4];
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
    void func_ov002_022008c4(s32 a, s32 b, s32 mode, s32 dist);
    void func_ov002_022008e0(s32 a, s32 b, s32 mode, s32 dist);
    BOOL func_ov002_022008fc(s32 a);
    BOOL func_ov002_02200908(s32 a);
    s32 func_ov002_02200920();
    void func_ov002_02200980();
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

extern "C" {
void _ZN18Unk_ov128_022954e019func_ov128_02294ec8Ev();
extern void *data_ov128_022951e8[2];
void _ZN18Unk_ov128_022954e019func_ov128_02294e90Ev();
extern void *data_ov128_02295228[2];
void _ZN18Unk_ov128_022954e019func_ov128_02294e48Ev();
extern void *data_ov128_02295260[2];
void _ZN18Unk_ov128_022954e019func_ov128_02294e0cEv();
extern void *data_ov128_022951f0[2];
void _ZN18Unk_ov128_022954e019func_ov128_02294b44Ev();
extern void *data_ov128_02295238[2];
void _ZN18Unk_ov128_022954e019func_ov128_02294af8Ev();
extern void *data_ov128_02295240[2];
void _ZN18Unk_ov128_022954e019func_ov128_02294a80Ev();
extern void *data_ov128_02295220[2];
void _ZN18Unk_ov128_022954e019func_ov128_02294930Ev();
extern void *data_ov128_02295258[2];
void _ZN18Unk_ov128_022954e019func_ov128_022948c0Ev();
extern void *data_ov128_02295230[2];
void _ZN18Unk_ov128_022954e019func_ov128_02294874Ev();
extern void *data_ov128_02295248[2];
void _ZN18Unk_ov128_022954e019func_ov128_0229484cEv();
extern void *data_ov128_02295250[2];
void _ZN18Unk_ov128_022954e019func_ov128_02294824Ev();
extern void *data_ov128_02295210[2];
void _ZN18Unk_ov128_022954e019func_ov128_022947f4Ev();
extern void *data_ov128_02295208[2];
void _ZN18Unk_ov128_022954e019func_ov128_022947ccEv();
extern void *data_ov128_02295200[2];
void _ZN18Unk_ov128_022954e019func_ov128_022947b0Ev();
extern void *data_ov128_022951f8[2];
}

class Unk_ov128_022954e0;
typedef void (Unk_ov128_022954e0::*Unk_ov128_022954e0_Fn)();

struct Unk_ov128_SceneEntry {
    Unk_ov128_022954e0 *(*create)();
    u16 a;
    u16 b;
};

// Vtable 0x022954e0, size 0x2d1c
class Unk_ov128_022954e0 : public Unk_ov002_022044e4 {
public:
    Unk_ov128_022954e0()
        : unk_94(), unk_e4(), unk_148(), unk_478(), unk_2cb0() {}

    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_24();
    virtual BOOL vfunc_4c();
    virtual BOOL vfunc_50();
    virtual BOOL vfunc_54();
    virtual BOOL vfunc_58();
    virtual BOOL vfunc_5c();

    void func_ov128_02294184(u32 m);
    void func_ov128_02294194(u32 m);
    BOOL func_ov128_022941a4(u32 m);
    void func_ov128_022941bc();
    void func_ov128_02294244();
    void func_ov128_02294274();
    void func_ov128_0229428c();
    void func_ov128_022942c4();
    void func_ov128_02294368();
    void func_ov128_022943cc();
    void func_ov128_02294420();
    u32 func_ov128_02294458();
    void func_ov128_02294498();
    void func_ov128_022944d8(s32 y);
    void func_ov128_0229455c();
    void func_ov128_02294584();
    void func_ov128_0229459c();
    void func_ov128_022945b8(s32 x, s32 y);
    void func_ov128_022945ec();
    void func_ov128_02294644();
    s32 func_ov128_02294660();
    s32 func_ov128_02294690();
    void func_ov128_022946c0();
    void func_ov128_02294728();
    void func_ov128_02294754();
    void func_ov128_02294774();
    void func_ov128_02294798();
    void func_ov128_022947b0();
    void func_ov128_022947cc();
    void func_ov128_022947f4();
    void func_ov128_02294824();
    void func_ov128_0229484c();
    void func_ov128_02294874();
    void func_ov128_022948c0();
    void func_ov128_02294930();
    void func_ov128_02294a80();
    void func_ov128_02294af8();
    void func_ov128_02294b44();
    void func_ov128_02294bdc();
    void func_ov128_02294c70();
    void func_ov128_02294c8c();
    void func_ov128_02294cb8();
    void func_ov128_02294ccc();
    void func_ov128_02294cd4();
    void func_ov128_02294d44();
    void func_ov128_02294da0();
    void func_ov128_02294de8();
    void func_ov128_02294e0c();
    void func_ov128_02294e48();
    void func_ov128_02294e90();
    void func_ov128_02294ec8();
    void func_ov128_02294f54();

    /* 0x0091 */ u8 unk_91[3];
    /* 0x0094 */ Unk_ov002_022046dc unk_94;
    /* 0x00e4 */ Unk_ov002_02204614 unk_e4;
    /* 0x0148 */ Unk_020b08b4 unk_148;
    /* 0x0478 */ Unk_ov127_02292aac unk_478;
    /* 0x2cb0 */ Unk_020e0488 unk_2cb0;
    /* 0x2cf0 */ s32 unk_2cf0;
    /* 0x2cf4 */ s32 unk_2cf4;
    /* 0x2cf8 */ s32 unk_2cf8;
    /* 0x2cfc */ s32 unk_2cfc;
    /* 0x2d00 */ s32 unk_2d00;
    /* 0x2d04 */ s32 unk_2d04;
    /* 0x2d08 */ s32 unk_2d08;
    /* 0x2d0c */ s32 unk_2d0c;
    /* 0x2d10 */ u16 unk_2d10;
    /* 0x2d12 */ u8 unk_2d12;
    /* 0x2d13 */ u8 unk_2d13;
    /* 0x2d14 */ u8 unk_2d14;
    /* 0x2d15 */ u8 unk_2d15;
    /* 0x2d16 */ u8 unk_2d16;
    /* 0x2d17 */ u8 unk_2d17;
    /* 0x2d18 */ u8 unk_2d18;
};

extern "C" Unk_ov128_022954e0 *func_ov128_0229516c() { return new Unk_ov128_022954e0(); }

BOOL Unk_ov128_022954e0::vfunc_00() {
    func_ov128_02294d44();
    unk_8c = 0;
    func_ov002_02200a60(0);
    return TRUE;
}

BOOL Unk_ov128_022954e0::vfunc_0c() {
    ((Unk_ov092_02291ec8 *)func_020ed174())->func_ov092_02291c5c();
    func_ov128_02294cd4();
    return TRUE;
}

BOOL Unk_ov128_022954e0::vfunc_24() {
    func_0206ef00();
    func_ov128_02294368();
    if (func_ov128_022941a4(1)) {
        unk_94.func_ov002_02203b30(0, unk_2cf8 >> 2, 1);
        func_ov127_022927a8(&unk_478, unk_2cf8, 6);
    }
    if (func_ov128_022941a4(1)) {
        func_ov128_022944d8(unk_2cf8);
    }
    return TRUE;
}

extern "C" u32 data_ov128_022955c0[32] = {0x8080, 0x511f, 0x8090, 0x511f, 0x80a0, 0x511f, 0x80b0, 0x511f, 0x80c0, 0x511f, 0x80d0, 0x511f, 0x80e0, 0x511f, 0x80f0, 0x511f, 0x8000, 0x511f, 0x8010, 0x511f, 0x8020, 0x511f, 0x8030, 0x511f, 0x8040, 0x511f, 0x8050, 0x511f, 0x8060, 0x511f, 0x8070, 0xffff511f};
extern "C" u32 data_ov128_022952b8[8] = {0x4188004c, 0x50c6, 0x198804c, 0x50c8, 0x9188404c, 0x8106, 0x8180404c, 0xffff8106};
extern "C" u8 data_ov128_022951e4[4] = {0x10, 0xf0, 0x80, 0x80};
extern "C" u32 data_ov128_022953e0[14] = {0x8188404c, 0x50c6, 0x81a8404c, 0x50ca, 0x81c8404c, 0x50ce, 0x91d0404c, 0x8106, 0x81bd404c, 0x8107, 0x819f404c, 0x8107, 0x8180404c, 0xffff8106};
extern "C" u32 data_ov128_02295280[6] = {0x8188404c, 0x50c6, 0x9190404c, 0x8106, 0x8180404c, 0xffff8106};
extern "C" u32 data_ov128_022953b0[12] = {0x8188404c, 0x50c6, 0x81a8404c, 0x50ca, 0x41c8004c, 0x50ce, 0x81a0404c, 0x8107, 0x91c0404c, 0x8106, 0x8180404c, 0xffff8106};
extern "C" u32 data_ov128_022952d8[8] = {0x8188404c, 0x50c6, 0x41a8004c, 0x50ca, 0x91a0404c, 0x8106, 0x8180404c, 0xffff8106};
extern "C" void *data_ov128_02295250[2] = {(void *)_ZN18Unk_ov128_022954e019func_ov128_0229484cEv, 0};
extern "C" u32 data_ov128_02295498[16] = {0x8188404c, 0x50c6, 0x81a8404c, 0x50ca, 0x41c8004c, 0x50ce, 0x1d8804c, 0x50d0, 0x81b1404c, 0x8107, 0x819d404c, 0x8107, 0x91c8404c, 0x8106, 0x8180404c, 0xffff8106};
extern "C" void *data_ov128_02295260[2] = {(void *)_ZN18Unk_ov128_022954e019func_ov128_02294e48Ev, 0};
extern "C" void *data_ov128_02295210[2] = {(void *)_ZN18Unk_ov128_022954e019func_ov128_02294824Ev, 0};
extern "C" void *data_ov128_02295248[2] = {(void *)_ZN18Unk_ov128_022954e019func_ov128_02294874Ev, 0};
extern "C" void *data_ov128_02295228[2] = {(void *)_ZN18Unk_ov128_022954e019func_ov128_02294e90Ev, 0};
extern "C" u8 data_ov128_022951e0[4] = {0x60, 0x60, 0xb8, 0x08};
extern "C" void *data_ov128_02295258[2] = {(void *)_ZN18Unk_ov128_022954e019func_ov128_02294930Ev, 0};
extern "C" u32 data_ov128_02295458[16] = {0x8044404b, 0x50d3, 0x4064004b, 0x50d7, 0x8047404b, 0x8111, 0x903a404b, 0x8112, 0x805d404b, 0x8112, 0x903c404d, 0x1112, 0x805f404d, 0x1112, 0x8049404d, 0xffff1111};
extern "C" u32 data_ov128_02295540[32] = {0x7040f8, 0x5104, 0x6040f8, 0x5104, 0x5040f8, 0x5104, 0x4040f8, 0x5104, 0x3040f8, 0x5104, 0x2040f8, 0x5104, 0x1040f8, 0x5104, 0x40f8, 0x5104, 0x1f040f8, 0x5104, 0x1e040f8, 0x5104, 0x1d040f8, 0x5104, 0x1c040f8, 0x5104, 0x1b040f8, 0x5104, 0x1a040f8, 0x5104, 0x19040f8, 0x5104, 0x18040f8, 0xffff5104};
extern "C" void *data_ov128_02295320[12] = {data_ov128_02295268, data_ov128_022952b8, data_ov128_02295280, data_ov128_02295298, data_ov128_022952d8, data_ov128_02295350, data_ov128_022952f8, data_ov128_02295380, data_ov128_022953b0, data_ov128_02295498, data_ov128_022953e0, data_ov128_02295418};
extern "C" u32 data_ov128_02295298[8] = {0x8188404c, 0x50c6, 0x1a8804c, 0x50ca, 0x9198404c, 0x8106, 0x8180404c, 0xffff8106};
extern "C" void *data_ov128_02295200[2] = {(void *)_ZN18Unk_ov128_022954e019func_ov128_022947ccEv, 0};
extern "C" u32 data_ov128_02295350[12] = {0x8188404c, 0x50c6, 0x41a8004c, 0x50ca, 0x1b8804c, 0x50cc, 0x419b004c, 0x5109, 0x91a8404c, 0x8106, 0x8180404c, 0xffff8106};
extern "C" const u32 data_ov128_022951c8[4] = {0x20, 0x11, 2, 0};
extern "C" u32 data_ov128_02295380[12] = {0x8188404c, 0x50c6, 0x81a8404c, 0x50ca, 0x1c8804c, 0x50ce, 0x91b8404c, 0x8106, 0x819c404c, 0x8107, 0x8180404c, 0xffff8106};
extern "C" void *data_ov128_022951f0[2] = {(void *)_ZN18Unk_ov128_022954e019func_ov128_02294e0cEv, 0};
extern "C" void *data_ov128_022951f8[2] = {(void *)_ZN18Unk_ov128_022954e019func_ov128_022947b0Ev, 0};
extern "C" void *data_ov128_02295230[2] = {(void *)_ZN18Unk_ov128_022954e019func_ov128_022948c0Ev, 0};
extern "C" u32 data_ov128_02295268[6] = {0x4188004c, 0x50c6, 0x5190004c, 0x8106, 0x4180004c, 0xffff8106};
extern "C" u32 data_ov128_02295418[16] = {0x8188404c, 0x50c6, 0x81a8404c, 0x50ca, 0x81c8404c, 0x50ce, 0x1e8804c, 0x50d2, 0x81b9404c, 0x8107, 0x819c404c, 0x8107, 0x91d8404c, 0x8106, 0x8180404c, 0xffff8106};
extern "C" Unk_ov128_SceneEntry data_ov128_02295218 = {func_ov128_0229516c, 0xac, 0xb0};
extern "C" u32 data_ov128_022952f8[10] = {0x8188404c, 0x50c6, 0x81a8404c, 0x50ca, 0x8198404c, 0x8107, 0x91b0404c, 0x8106, 0x8180404c, 0xffff8106};
extern "C" void *data_ov128_02295220[2] = {(void *)_ZN18Unk_ov128_022954e019func_ov128_02294a80Ev, 0};
extern "C" void *data_ov128_02295238[2] = {(void *)_ZN18Unk_ov128_022954e019func_ov128_02294b44Ev, 0};
extern "C" void *data_ov128_02295240[2] = {(void *)_ZN18Unk_ov128_022954e019func_ov128_02294af8Ev, 0};

BOOL Unk_ov128_022954e0::vfunc_4c() {
    static Unk_ov128_022954e0_Fn tbl[4] = {
        *(Unk_ov128_022954e0_Fn *)data_ov128_022951e8,
        *(Unk_ov128_022954e0_Fn *)data_ov128_02295228,
        *(Unk_ov128_022954e0_Fn *)data_ov128_02295260,
        *(Unk_ov128_022954e0_Fn *)data_ov128_022951f0};
    func_ov128_02294c8c();
    (this->*tbl[unk_8c])();
    func_ov128_02294c70();
    return TRUE;
}

void Unk_ov128_022954e0::func_ov128_02294f54() {
    static Unk_ov128_022954e0_Fn tbl[11] = {
        *(Unk_ov128_022954e0_Fn *)data_ov128_02295238,
        *(Unk_ov128_022954e0_Fn *)data_ov128_02295240,
        *(Unk_ov128_022954e0_Fn *)data_ov128_02295220,
        *(Unk_ov128_022954e0_Fn *)data_ov128_02295258,
        *(Unk_ov128_022954e0_Fn *)data_ov128_02295230,
        *(Unk_ov128_022954e0_Fn *)data_ov128_02295248,
        *(Unk_ov128_022954e0_Fn *)data_ov128_02295250,
        *(Unk_ov128_022954e0_Fn *)data_ov128_02295210,
        *(Unk_ov128_022954e0_Fn *)data_ov128_02295208,
        *(Unk_ov128_022954e0_Fn *)data_ov128_02295200,
        *(Unk_ov128_022954e0_Fn *)data_ov128_022951f8};
    (this->*tbl[unk_8d])();
}

BOOL Unk_ov128_022954e0::vfunc_50() {
    func_ov128_02294ccc();
    func_ov128_02294f54();
    func_ov128_02294cb8();
    return TRUE;
}

BOOL Unk_ov128_022954e0::vfunc_54() { return TRUE; }

BOOL Unk_ov128_022954e0::vfunc_58() { return TRUE; }

BOOL Unk_ov128_022954e0::vfunc_5c() {
    func_020ed188(this);
    return TRUE;
}

void Unk_ov128_022954e0::func_ov128_02294ec8() {
    ::func_ov128_02294c38();
    func_ov128_02294bdc();
    func_ov002_022008e0(9, 4, 0, 0x30);
    func_020020b8(3);
    func_020020b8(6);
    func_ov128_02294194(1);
    func_02001710(0x1e, 1);
    func_ov128_02294da0();
    func_ov128_02294de8();
    func_ov002_02200a50(1);
}

void Unk_ov128_022954e0::func_ov128_02294e90() {
    if (func_ov002_02200908(0)) {
        func_ov002_02200a60(2);
        func_ov128_02294754();
        func_ov128_02294194(4);
    } else {
        func_ov128_02294da0();
    }
    func_ov128_02294de8();
}

void Unk_ov128_022954e0::func_ov128_02294e48() {
    ((Unk_ov092_02291ec8 *)func_020ed174())->func_ov092_02291ce4(0x44, 1);
    func_ov002_022008c4(9, 0, 0, 0x30);
    func_02001710(0x1e, 1);
    func_ov128_02294da0();
    func_ov128_02294de8();
    func_ov002_02200a50(3);
}

void Unk_ov128_022954e0::func_ov128_02294e0c() {
    if (func_ov002_022008fc(0)) {
        func_020021a0(3);
        func_020021a0(6);
        func_0200151c(2);
        func_ov002_02200a60(5);
    } else {
        func_ov128_02294da0();
        func_ov128_02294de8();
    }
}

void Unk_ov128_022954e0::func_ov128_02294de8() {
    func_ov002_02200840(6, 0, 0);
    unk_2cf8 = func_ov002_02200920();
}

void Unk_ov128_022954e0::func_ov128_02294da0() {
    s32 a = func_ov002_02200920() - 0x40;
    if (a < 0) {
        a = 0;
    }
    s32 b = func_ov002_02200920() - 0x30;
    if (b <= 0) {
        func_0200151c(2);
    } else {
        func_0200152c(2);
        func_020021b8(3, 0, a, 0xff, b);
    }
}

void Unk_ov128_022954e0::func_ov128_02294d44() {
    unk_2d10 = 0;
    func_ov127_02292a7c(&unk_478);
    unk_2cf0 = 0x80;
    unk_2cf4 = 0x60;
    unk_2d14 = 1;
    func_ov128_02294420();
    func_ov004_02224844();
    func_02034f98(data_021c1b3c + 0x2f0);
}

void Unk_ov128_022954e0::func_ov128_02294cd4() {
    func_020b0780(&unk_148);
    func_ov127_0229281c(&unk_478);
    unk_94.func_ov002_02203c1c();
    unk_2cb0.func_0206fc44();
    func_02094960();
    func_02034f80(data_021c1b3c + 0x2f0);
    func_0200261c((void *)"menu/inventory/b_itm0.bch", data_021f482c, 3, 0, 0x10, 0x10);
}

void Unk_ov128_022954e0::func_ov128_02294ccc() { func_ov128_02294c8c(); }

void Unk_ov128_022954e0::func_ov128_02294cb8() {
    func_ov128_02294244();
    func_ov128_02294c70();
}

void Unk_ov128_022954e0::func_ov128_02294c8c() {
    unk_2cb0.func_0206fc44();
    func_020b080c(&unk_148);
    unk_94.func_ov002_02203c1c();
}

void Unk_ov128_022954e0::func_ov128_02294c70() {
    func_ov127_02292824(&unk_478);
    func_ov128_022941bc();
}

extern "C" void func_ov128_02294c38() {
    func_020015b8(0);
    func_02002398(3, 2);
    func_0200226c(3, 1, 0, 0);
    func_02002398(6, 1);
    func_0200226c(6, 0, 0, 0);
}

void Unk_ov128_022954e0::func_ov128_02294bdc() {
    func_ov127_02292a0c(&unk_478, 3);
    func_ov127_02292994(&unk_478, 6, 0);
    func_020b0788(&unk_148, 3);
    func_ov127_02292950(&unk_478);
    unk_94.func_ov002_02203cf8((Unk_ov002_02203c5c_Rec *)data_ov128_02295458, 6, 2);
    unk_94.func_ov002_02203cc4(0x69);
    func_ov128_02294498();
}

void Unk_ov128_022954e0::func_ov128_02294b44() {
    if (func_ov002_02200a14(0)) {
        func_ov128_02294774();
    } else if (Unk_ov128_02294b44_Both()) {
        s32 x = data_021ef5f0;
        s32 y = data_021ef5ec;
        unk_2d13 = func_ov127_022926e0(&unk_478, x, y);
        if (unk_2d13 != 4) {
            func_ov127_022925c8(&unk_478, unk_2d13, 1);
            func_ov128_02294498();
            func_ov002_02200a58(1);
        } else if (x >= 0xc0 && y > 0xab) {
            func_ov128_02294728();
        }
    }
}

void Unk_ov128_022954e0::func_ov128_02294af8() {
    if (data_021f4770 == 0) {
        func_ov002_02200a58(2);
        func_ov127_0229257c(&unk_478, unk_2d13);
        func_ov128_02294498();
    } else {
        func_ov127_022925c8(&unk_478, unk_2d13, 1);
        func_ov128_02294498();
    }
}

void Unk_ov128_022954e0::func_ov128_02294a80() {
    if (func_ov127_02292538(&unk_478)) {
        if (data_021f4770 != 0) {
            unk_2d13 = func_ov127_022926e0(&unk_478, data_021ef5f8, data_021ef5f4);
            if (unk_2d13 != 4) {
                func_ov127_022925c8(&unk_478, unk_2d13, 1);
                func_ov128_02294498();
                func_ov002_02200a58(1);
                return;
            }
        }
        func_ov002_02200a58(0);
    }
    func_ov128_02294498();
}

void Unk_ov128_022954e0::func_ov128_02294930() {
    if (func_ov002_022009d4()) {
        func_ov128_02294798();
    } else {
        u32 k1 = data_021f47d8[1];
        if (k1 & 1) {
            func_ov128_02294584();
        } else if (k1 & 0x800) {
            func_ov128_02294184(2);
            func_ov002_02200a58(4);
            func_ov128_022945ec();
        } else {
            s32 ox = unk_2cf0;
            s32 oy = unk_2cf4;
            u32 k0 = data_021f47d8[0];
            if (k0 & 0x20) {
                unk_2cf0 = ox - 4;
            } else if (k0 & 0x10) {
                unk_2cf0 = ox + 4;
            }
            u32 k2 = *(volatile u16 *)&data_021f47d8[0];
            if (k2 & 0x40) {
                s32 *py = &unk_2cf4;
                *py = *py - 4;
            } else if (k2 & 0x80) {
                s32 *py = &unk_2cf4;
                *py = *py + 4;
            }
            s32 nx = unk_2cf0;
            if (ox != nx || oy != unk_2cf4) {
                if (nx < 0x30) {
                    unk_2cf0 = 0x30;
                    func_ov127_02292518(&unk_478, -4);
                    func_ov128_02294498();
                } else if (nx > 0xd0) {
                    unk_2cf0 = 0xd0;
                    func_ov127_02292518(&unk_478, 4);
                    func_ov128_02294498();
                }
                s32 ny = unk_2cf4;
                if (ny < 0x20) {
                    unk_2cf4 = 0x20;
                    func_ov127_0229247c(&unk_478, -4, 0);
                    func_ov128_02294498();
                } else if (ny > 0xa0) {
                    unk_2cf4 = 0xa0;
                    func_ov127_0229247c(&unk_478, 4, 0);
                    func_ov128_02294498();
                }
                unk_e4.func_ov002_02202a40(unk_2cf0, unk_2cf4);
            }
        }
    }
}

void Unk_ov128_022954e0::func_ov128_022948c0() {
    if (func_ov002_022009d4()) {
        func_ov128_02294798();
    } else {
        u32 k = data_021f47d8[1];
        if ((k & 2) || (k & 8)) {
            func_ov128_02294728();
        } else {
            u8 *q = &unk_2d13;
            *q = func_ov128_02294458();
            if (*q != 4) {
                func_ov127_022925c8(&unk_478, *q, 1);
                func_ov128_02294498();
                func_ov002_02200a58(5);
            }
        }
    }
}

void Unk_ov128_022954e0::func_ov128_02294874() {
    u32 k = func_ov128_02294458();
    if (k != unk_2d13) {
        func_ov002_02200a58(6);
        func_ov127_0229257c(&unk_478, unk_2d13);
        func_ov128_02294498();
    } else {
        func_ov127_022925c8(&unk_478, unk_2d13, 1);
        func_ov128_02294498();
    }
}

void Unk_ov128_022954e0::func_ov128_0229484c() {
    if (func_ov127_02292538(&unk_478)) {
        func_ov002_02200a58(4);
    }
    func_ov128_02294498();
}

void Unk_ov128_022954e0::func_ov128_02294824() {
    if (!unk_e4.func_ov002_022028f0()) {
        func_ov002_02200a58(unk_2d12);
        func_ov128_02294f54();
    }
}

void Unk_ov128_022954e0::func_ov128_022947f4() {
    if (unk_e4.func_0208d4fc() && func_ov128_022941a4(2)) {
        func_ov002_02200a58(3);
        func_ov128_0229455c();
    }
}

void Unk_ov128_022954e0::func_ov128_022947cc() {
    if (unk_e4.func_0208d4fc()) {
        func_ov128_0229459c();
        func_ov002_02200a58(unk_2d12);
    }
}

void Unk_ov128_022954e0::func_ov128_022947b0() {
    if (!unk_94.func_ov002_02203af4()) {
        func_ov002_02200a60(1);
    }
}

void Unk_ov128_022954e0::func_ov128_02294798() {
    func_ov128_02294644();
    func_ov002_02200a58(0);
}

void Unk_ov128_022954e0::func_ov128_02294774() {
    func_ov128_02294184(2);
    func_ov002_02200a58(4);
    func_ov128_022946c0();
    func_ov002_02200980();
}

void Unk_ov128_022954e0::func_ov128_02294754() {
    if (func_0206ef0c()) {
        func_ov128_02294798();
    } else {
        func_ov128_02294774();
    }
}

void Unk_ov128_022954e0::func_ov128_02294728() {
    func_ov002_02200a50(2);
    func_ov002_02200a58(0xa);
    func_ov128_02294184(4);
    func_ov128_02294274();
    func_ov128_02294644();
}

void Unk_ov128_022954e0::func_ov128_022946c0() {
    s32 a = func_ov128_02294690();
    s32 b = func_ov128_02294660();
    unk_e4.func_ov002_02202a40(a, b);
    if (func_ov128_022941a4(2)) {
        ((Unk_ov002_0220464c *)&unk_e4)->func_ov002_02202d00(1);
    } else if (unk_2d14 == 3) {
        ((Unk_ov002_0220464c *)&unk_e4)->func_ov002_02202d00(0xd);
    } else {
        ((Unk_ov002_0220464c *)&unk_e4)->func_ov002_02202d00(1);
    }
    func_ov128_0229459c();
}

s32 Unk_ov128_022954e0::func_ov128_02294690() {
    if (func_ov128_022941a4(2)) {
        return unk_2cf0;
    }
    return data_ov128_022951e4[unk_2d14];
}

s32 Unk_ov128_022954e0::func_ov128_02294660() {
    if (func_ov128_022941a4(2)) {
        return unk_2cf4;
    }
    return data_ov128_022951e0[unk_2d14];
}

void Unk_ov128_022954e0::func_ov128_02294644() {
    ((Unk_ov002_0220464c *)&unk_e4)->func_ov002_02202d00(0);
    unk_e4.vfunc_0c();
}

void Unk_ov128_022954e0::func_ov128_022945ec() {
    if (func_ov128_022941a4(2)) {
        ((Unk_ov002_0220464c *)&unk_e4)->func_ov002_02202c40();
    } else if (unk_2d14 == 3) {
        ((Unk_ov002_0220464c *)&unk_e4)->func_ov002_02202be0();
    } else {
        ((Unk_ov002_0220464c *)&unk_e4)->func_ov002_02202c40();
    }
    s32 a = func_ov128_02294690();
    s32 b = func_ov128_02294660();
    func_ov128_022945b8(a, b);
}

void Unk_ov128_022954e0::func_ov128_022945b8(s32 x, s32 y) {
    unk_e4.func_ov002_022029e8(x, y, 3, 1);
    unk_2d12 = unk_8d;
    func_ov002_02200a58(7);
}

void Unk_ov128_022954e0::func_ov128_0229459c() {
    unk_e4.func_ov002_02202a78();
    unk_e4.vfunc_0c();
}

void Unk_ov128_022954e0::func_ov128_02294584() {
    ((Unk_ov002_0220464c *)&unk_e4)->func_ov002_02202b68();
    func_ov002_02200a58(8);
}

void Unk_ov128_022954e0::func_ov128_0229455c() {
    unk_e4.func_ov002_02202af0();
    unk_2d12 = unk_8d;
    func_ov002_02200a58(9);
}

void Unk_ov128_022954e0::func_ov128_022944d8(s32 y) {
    s32 t = y + 0x60;
    func_02087e70(1, data_ov128_022955c0, 0x80, t - unk_2d00, -1, 2, 0x1000, 0x1000, 0, -1, 0, 0);
    s32 x = t + (s32)func_ov127_02292268(&unk_478);
    func_02087e70(1, data_ov128_02295540, 0x80 - unk_2cfc, x, -1, 2, 0x1000, 0x1000, 0, -1, 0, 0);
}

void Unk_ov128_022954e0::func_ov128_02294498() {
    s32 a = func_ov127_0229225c(&unk_478);
    s32 b = func_ov127_02292250(&unk_478);
    unk_2cfc = a & 0xf;
    unk_2d00 = b & 0xf;
    func_ov128_022943cc();
}

u32 Unk_ov128_022954e0::func_ov128_02294458() {
    u32 r = 4;
    u32 k = data_021f47d8[0];
    if (k & 0x20) {
        return 0;
    }
    if (k & 0x10) {
        return 1;
    }
    if (k & 0x40) {
        return 3;
    }
    if (k & 0x80) {
        r = 2;
    }
    return r;
}

void Unk_ov128_022954e0::func_ov128_02294420() {
    unk_2d04 = -1;
    unk_2d08 = -1;
    unk_2d0c = -1;
    unk_2d16 = 0;
    unk_2d15 = 0;
    unk_2d18 = 2;
}

void Unk_ov128_022954e0::func_ov128_022943cc() {
    s32 a, b;
    u8 *p = func_ov127_02292268(&unk_478) + 0x60;
    if (func_ov127_02292410(&unk_478, 0x80, p, &a, &b)) {
        s32 r = func_ov127_022921c4(a, b);
        if (r != -1) {
            unk_2d04 = func_ov127_02292040((u16)r);
        }
    }
}

void Unk_ov128_022954e0::func_ov128_02294368() {
    if (unk_2d16 != 0) {
        func_02087e70(1, data_ov128_02295320[unk_2d18 - 2], 0x80, data_ov128_022951c8[unk_2d15] + 0x60, -1, 1, 0x1000, 0x1000, 0, -1, 0, 0);
    }
}

void Unk_ov128_022954e0::func_ov128_022942c4() {
    s32 t = unk_2d08;
    if (t == -1) {
        unk_2d16 = 0;
    } else {
        unk_2d16 = 1;
        s32 u = unk_2d08;
        if (u != unk_2d0c) {
            u8 *s = ((u8 *(*)(s32))func_020b053c)(u);
            func_0206f994(&unk_2cb0, s + 0x16, 0x10);
            unk_2d18 = (unk_2cb0.func_0206fa1c() + 7) >> 3;
            if (unk_2d18 < 2) {
                unk_2d18 = 2;
            }
            unk_2cb0.func_0206fb9c(8, 0xc6, unk_2d18, 0xf, 0, 0);
            unk_2cb0.func_0206fab4(1, 0);
            unk_2d0c = unk_2d08;
        }
    }
}

void Unk_ov128_022954e0::func_ov128_0229428c() {
    s32 t = unk_2d08;
    if (t != -1 && t == unk_2d0c) {
        func_ov128_022942c4();
    } else {
        unk_2d16 = 3;
    }
}

void Unk_ov128_022954e0::func_ov128_02294274() {
    unk_2d08 = -1;
    unk_2d16 = 3;
}

void Unk_ov128_022954e0::func_ov128_02294244() {
    s32 t = unk_2d04;
    if (t != -1) {
        if (unk_2d08 != t) {
            unk_2d08 = t;
            func_ov128_0229428c();
        }
    }
}

void Unk_ov128_022954e0::func_ov128_022941bc() {
    switch (unk_2d16) {
    case 1:
        if (unk_2d15 < 3) {
            unk_2d15 = unk_2d15 + 1;
        } else {
            unk_2d16 = 2;
            unk_2d17 = 0x14;
        }
        break;
    case 2:
        if (unk_2d04 == -1) {
            if (unk_2d17 != 0) {
                unk_2d17 = unk_2d17 - 1;
            } else {
                func_ov128_02294274();
            }
        } else {
            unk_2d17 = 0x14;
        }
        break;
    case 3:
        if (unk_2d15 != 0) {
            unk_2d15 = unk_2d15 - 1;
        } else {
            func_ov128_022942c4();
        }
        break;
    }
}

BOOL Unk_ov128_022954e0::func_ov128_022941a4(u32 m) {
    if (unk_2d10 & m) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov128_022954e0::func_ov128_02294194(u32 m) { unk_2d10 = unk_2d10 | m; }

void Unk_ov128_022954e0::func_ov128_02294184(u32 m) { unk_2d10 = unk_2d10 & ~m; }

extern "C" void *data_ov128_022951e8[2] = {(void *)_ZN18Unk_ov128_022954e019func_ov128_02294ec8Ev, 0};
extern "C" void *data_ov128_02295208[2] = {(void *)_ZN18Unk_ov128_022954e019func_ov128_022947f4Ev, 0};
