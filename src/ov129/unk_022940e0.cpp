#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef vfunc_08
#undef vfunc_14

extern "C" {
extern u16 data_021f47d8[];
extern u8 data_021f4770;
extern u8 data_021f4774;
extern u8 data_021ef5f0;
extern u8 data_021ef5ec;
extern u8 data_021ef5f8;
extern u8 data_021ef5f4;
extern s32 data_021f482c;
extern u8 *data_021c1b3c;

s32 func_0200402c(u32 id);
s32 func_0206ed38();
void *func_020b053c(s32 i);
void func_0206ecf8(u32 a);
BOOL func_0206ef0c();
BOOL func_0206ef00();
void func_020b0a30(void *p);
void func_020b0450(void *p);
void func_020b04f8(void *p, s32 a, s32 b);
void func_020b05c4(void *p, s32 *a, s32 *b);
void func_020b0780(void *a);
void func_020b0788(void *a, s32 b);
void func_020b080c(void *a);
void func_020015b8(s32 a);
void func_02002398(s32 a, s32 b);
void func_0200226c(s32 a, s32 b, s32 c, s32 d);
void func_0200261c(void *a, s32 b, s32 c, s32 d, s32 e, s32 f);
void func_02004008(s32 a);
void func_02003ff4(s32 a, s32 b);
void func_02094960();
void func_02034f80(void *a);
void func_02034f98(void *a);
void func_0200151c(s32 a);
void func_0200152c(s32 a);
void func_020021b8(s32 a, s32 b, s32 c, s32 d, s32 e);
void func_020021a0(s32 a);
void func_020020b8(s32 a);
void func_02001710(s32 a, s32 b);
void *func_020ed174();
void func_020ed188(void *p);
void func_ov004_02224844();

BOOL func_ov002_0220126c(s32 k);
BOOL func_ov002_0220125c(s32 k);
BOOL func_ov002_0220128c(s32 k);
BOOL func_ov002_0220127c(s32 k);
void func_ov002_02203920(void *p);

u8 *func_ov127_0229207c(s32 i);
u32 func_ov127_02292088(s32 i);
u32 func_ov127_02292098(s32 i);
s32 func_ov127_022920a4(u16 *out, s32 x, s32 y);
s32 func_ov127_02292204(s32 x, s32 y);
s32 func_ov127_022921c4(s32 x, s32 y);
s32 func_ov127_022923d8(void *s, s32 x, s32 y, s32 *ox, s32 *oy);
void func_ov127_02292454(void *s, s32 x, s32 y);
void func_ov127_022923c0(void *s, s32 i, u32 v);
void func_ov127_02292380(void *p, s32 x, s32 y);
s32 func_ov127_02292538(void *a);
void func_ov127_0229257c(void *a, s32 b);
void func_ov127_022925c8(void *a, s32 b, s32 c);
s32 func_ov127_022926e0(void *a, s32 b, s32 c);
void func_ov127_02292518(void *a, s32 b);
s32 func_ov127_0229247c(void *a, s32 b, s32 c);
void func_ov127_02292a0c(void *a, s32 b);
void func_ov127_02292994(void *a, s32 b, s32 c);
void func_ov127_02292950(void *a);
void func_ov127_02292824(void *a);
void func_ov127_0229281c(void *a);
void func_ov127_02292a7c(void *a);
void func_ov127_02292724(void *s, s32 a);
void func_ov127_02292780(void *s, s32 a);
void func_ov127_022927a8(void *s, s32 a, s32 b);

void _ZN18Unk_ov129_022965f819func_ov129_02295654Ev();
extern void *data_ov129_02296518[2];
void _ZN18Unk_ov129_022965f819func_ov129_02295914Ev();
extern void *data_ov129_02296520[2];
void _ZN18Unk_ov129_022965f819func_ov129_022959c0Ev();
extern void *data_ov129_02296528[2];
void _ZN18Unk_ov129_022965f819func_ov129_02295604Ev();
extern void *data_ov129_02296530[2];
void _ZN18Unk_ov129_022965f819func_ov129_022955c0Ev();
extern void *data_ov129_02296538[2];
void _ZN18Unk_ov129_022965f819func_ov129_022954c0Ev();
extern void *data_ov129_02296540[2];
void _ZN18Unk_ov129_022965f819func_ov129_02295494Ev();
extern void *data_ov129_02296548[2];
void _ZN18Unk_ov129_022965f819func_ov129_02295fd0Ev();
extern void *data_ov129_02296550[2];
void _ZN18Unk_ov129_022965f819func_ov129_02295f40Ev();
extern void *data_ov129_02296558[2];
void _ZN18Unk_ov129_022965f819func_ov129_0229609cEv();
extern void *data_ov129_02296560[2];
void _ZN18Unk_ov129_022965f819func_ov129_02295594Ev();
extern void *data_ov129_02296568[2];
void _ZN18Unk_ov129_022965f819func_ov129_02295428Ev();
extern void *data_ov129_02296570[2];
void _ZN18Unk_ov129_022965f819func_ov129_022953bcEv();
extern void *data_ov129_02296578[2];
void _ZN18Unk_ov129_022965f819func_ov129_02295e70Ev();
extern void *data_ov129_02296580[2];
void _ZN18Unk_ov129_022965f819func_ov129_0229570cEv();
extern void *data_ov129_02296588[2];
void _ZN18Unk_ov129_022965f819func_ov129_022952a4Ev();
extern void *data_ov129_02296590[2];
void _ZN18Unk_ov129_022965f819func_ov129_02295980Ev();
extern void *data_ov129_02296598[2];
void _ZN18Unk_ov129_022965f819func_ov129_02295270Ev();
extern void *data_ov129_022965a0[2];
void _ZN18Unk_ov129_022965f819func_ov129_02295db0Ev();
extern void *data_ov129_022965a8[2];
void _ZN18Unk_ov129_022965f819func_ov129_02295248Ev();
extern void *data_ov129_022965b0[2];
void _ZN18Unk_ov129_022965f819func_ov129_02296054Ev();
extern void *data_ov129_022965b8[2];
void _ZN18Unk_ov129_022965f819func_ov129_02295df8Ev();
extern void *data_ov129_022965c0[2];
void _ZN18Unk_ov129_022965f819func_ov129_02295e48Ev();
extern void *data_ov129_022965c8[2];
void _ZN18Unk_ov129_022965f819func_ov129_0229600cEv();
extern void *data_ov129_022965d0[2];
void _ZN18Unk_ov129_022965f819func_ov129_02295e8cEv();
extern void *data_ov129_022965d8[2];
void _ZN18Unk_ov129_022965f819func_ov129_02295eb8Ev();
extern void *data_ov129_022965e0[2];
void _ZN18Unk_ov129_022965f819func_ov129_02295f0cEv();
extern void *data_ov129_022965e8[2];
extern const u8 data_ov129_02296498[4];
extern const u8 data_ov129_0229649c[8];
extern const u8 data_ov129_022964a4[8];
extern const u8 data_ov129_022964ac[8];
extern const u8 data_ov129_022964b4[8];
extern const s32 data_ov129_022964bc[5];
extern const s32 data_ov129_022964d0[5];
extern u8 data_ov129_02296500[8];
extern u8 data_ov129_02296508[8];
}

static inline BOOL Unk_ov129_02295000_Both() {
    if (data_021f4770 != 0 && data_021f4774 != 0) return TRUE;
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
    void func_0208d63c();
    void func_0208d644();
};

class Unk_ov002_02202d98 : public Unk_020e100c {
public:
    void func_ov002_02202844();
    s32 func_ov002_0220288c();
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
    void func_ov002_02202ca0();
    void func_ov002_02202d00(s32 a);
};

class Unk_ov002_02204614 : public Unk_ov002_02202d98 {
public:
    Unk_ov002_02204614();
    virtual ~Unk_ov002_02204614();
    u32 unk_04[0x60 / 4];
};

class Unk_ov002_02202fac {
public:
    s32 func_ov002_0220306c();
    BOOL func_ov002_0220308c();
    void func_ov002_022030ac(u8 v);
    s32 func_ov002_022030b8(s32 idx);
    s32 func_ov002_022030f4(s32 idx);
    BOOL func_ov002_02203110(s32 a);
    BOOL func_ov002_02202fac(s32 idx);
    void func_ov002_02202fc8(s32 idx);
    void func_ov002_02202fe4(s32 idx);
    void func_ov002_02203370(s32 a);
};

// Menu list sub-object, 0x164 bytes
class Unk_ov002_022046cc : public Unk_ov002_02202fac {
public:
    Unk_ov002_022046cc();
    ~Unk_ov002_022046cc();
    void func_ov002_02203548();
    void func_ov002_022036a4(s32 a);
    void func_ov002_02203900();
    u32 unk_00[0x164 / 4];
};

// Object at +0xb8 (0x108 bytes)
class Unk_ov002_022040ec {
public:
    Unk_ov002_022040ec();
    ~Unk_ov002_022040ec();
    BOOL func_ov002_02204234(s32 a);
    void func_ov002_02204394(u8 *a, s32 b, u32 c);
    u32 unk_00[0x108 / 4];
};

// sub-object at +0x388 (ctor func_020b08b8, dtor func_020b08b4)
class Unk_020b08b4 {
public:
    Unk_020b08b4();
    ~Unk_020b08b4();
    u32 unk_00[0x330 / 4];
};

// sub-object at +0x6b8 (ov127 state, ctor func_ov127_02292aac, dtor func_ov127_02292aa8), 0x2838 bytes
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
    void func_ov002_0220085c(s32 a, s32 b);
    void func_ov002_02200874(s32 a, s32 b);
    void func_ov002_022008c4(s32 a, s32 b, s32 mode, s32 dist);
    void func_ov002_022008e0(s32 a, s32 b, s32 mode, s32 dist);
    BOOL func_ov002_022008fc(s32 a);
    BOOL func_ov002_02200908(s32 a);
    s32 func_ov002_02200920();
    void func_ov002_02200980();
    s32 func_ov002_022009c8();
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

struct Unk_ov129_0229497c_Save {
    u8 unk_00[0x16];
    u8 unk_16[16];
    u16 unk_26[16];
};

// static object type at data_ov129_02296698 (ctor func_020b0a70, dtor func_020b0a60)
class Unk_020b0a60 {
public:
    Unk_020b0a60();
    ~Unk_020b0a60();
    u8 unk_00[0x16];
    u8 unk_16[0x10];
    u16 unk_26[0x10];
};

class Unk_ov129_022965f8;
typedef void (Unk_ov129_022965f8::*Unk_ov129_022965f8_Fn)();

// Vtable 0x022965f8, size 0x30e8
class Unk_ov129_022965f8 : public Unk_ov002_022044e4 {
public:
    Unk_ov129_022965f8()
        : unk_b8(), unk_1c0(), unk_324(), unk_388(), unk_6b8() {}

    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_24();
    virtual BOOL vfunc_4c();
    virtual BOOL vfunc_50();
    virtual BOOL vfunc_54();
    virtual BOOL vfunc_58();
    virtual BOOL vfunc_5c();

    void func_ov129_0229418c(u32 mask);
    void func_ov129_0229419c(u32 mask);
    BOOL func_ov129_022941ac(u32 mask);
    s32 func_ov129_022941c0();
    s32 func_ov129_0229421c();
    s32 func_ov129_022942d0();
    void func_ov129_02294360();
    s32 func_ov129_02294398();
    s32 func_ov129_022943ec();
    u32 func_ov129_02294598(u32 id, u32 val);
    s32 func_ov129_022945f4(u32 id);
    BOOL func_ov129_02294664(u32 id);
    s32 func_ov129_022946b0(u32 v);
    s32 func_ov129_022946dc();
    BOOL func_ov129_0229470c(s32 x, s32 y);
    void func_ov129_022947c4(u32 id);
    void func_ov129_02294818(u32 a, u32 b);
    BOOL func_ov129_0229483c(u32 a, u32 b);
    void func_ov129_022948a4(BOOL flag);
    void func_ov129_022948d0();
    void func_ov129_022948f0(s32 i);
    void func_ov129_02294914();
    s32 func_ov129_02294948();
    void func_ov129_0229497c();
    void func_ov129_02294a50();
    void func_ov129_02294aa4();
    void func_ov129_02294ad4();
    void func_ov129_02294afc();
    void func_ov129_02294b2c();
    void func_ov129_02294b90();
    void func_ov129_02294bb4();
    void func_ov129_02294c94();
    void func_ov129_02294cb8();
    void func_ov129_02294ce4();
    void func_ov129_02294d04();
    void func_ov129_02294d24(u32 a, u32 b);
    void func_ov129_02294d58();
    void func_ov129_02294db0();
    s32 func_ov129_02294dd4();
    s32 func_ov129_02294e24();
    void func_ov129_02294e74();
    BOOL func_ov129_02294edc();
    BOOL func_ov129_02294f04();
    BOOL func_ov129_02294f30(s32 k);
    void func_ov129_02294fcc(u32 v);
    void func_ov129_02295000();
    void func_ov129_02295040();
    void func_ov129_02295110();
    void func_ov129_02295154();
    void func_ov129_022951d8();
    void func_ov129_02295200();
    void func_ov129_0229522c();
    void func_ov129_02295248();
    void func_ov129_02295270();
    void func_ov129_022952a4();
    void func_ov129_022953bc();
    void func_ov129_02295428();
    void func_ov129_02295494();
    void func_ov129_022954c0();
    void func_ov129_02295594();
    void func_ov129_022955c0();
    void func_ov129_02295604();
    void func_ov129_02295654();
    void func_ov129_0229570c();
    void func_ov129_02295914();
    void func_ov129_02295980();
    void func_ov129_022959c0();
    void func_ov129_02295ac8();
    void func_ov129_02295b38();
    void func_ov129_02295b70();
    void func_ov129_02295bd0();
    void func_ov129_02295bfc();
    void func_ov129_02295c04();
    void func_ov129_02295c20();
    void func_ov129_02295c88();
    void func_ov129_02295d18();
    void func_ov129_02295d38();
    void func_ov129_02295d98();
    void func_ov129_02295db0();
    void func_ov129_02295df8();
    void func_ov129_02295e48();
    void func_ov129_02295e70();
    void func_ov129_02295e8c();
    void func_ov129_02295eb8();
    void func_ov129_02295f0c();
    void func_ov129_02295f40();
    void func_ov129_02295f5c();
    void func_ov129_02295fa4();
    void func_ov129_02295fd0();
    void func_ov129_0229600c();
    void func_ov129_02296054();
    void func_ov129_0229609c();
    void func_ov129_02296138();

    /* 0x091 */ u8 unk_91[3];
    /* 0x094 */ s32 unk_94;
    /* 0x098 */ s32 unk_98;
    /* 0x09c */ s32 unk_9c;
    /* 0x0a0 */ s32 unk_a0;
    /* 0x0a4 */ u16 unk_a4;
    /* 0x0a6 */ u16 unk_a6;
    /* 0x0a8 */ u16 unk_a8;
    /* 0x0aa */ u16 unk_aa;
    /* 0x0ac */ u8 unk_ac;
    /* 0x0ad */ u8 unk_ad;
    /* 0x0ae */ u8 unk_ae;
    /* 0x0af */ u8 unk_af;
    /* 0x0b0 */ u8 unk_b0;
    /* 0x0b1 */ u8 unk_b1;
    /* 0x0b2 */ u8 unk_b2;
    /* 0x0b3 */ u8 unk_b3;
    /* 0x0b4 */ u8 unk_b4;
    /* 0x0b5 */ u8 unk_b5[3];
    /* 0x0b8 */ Unk_ov002_022040ec unk_b8;
    /* 0x1c0 */ Unk_ov002_022046cc unk_1c0;
    /* 0x324 */ Unk_ov002_02204614 unk_324;
    /* 0x388 */ Unk_020b08b4 unk_388;
    /* 0x6b8 */ Unk_ov127_02292aac unk_6b8;
    /* 0x2ef0 */ u8 unk_2ef0[16];
    /* 0x2f00 */ u16 unk_2f00[16];
    /* 0x2f20 */ u8 unk_2f20[0x1c8];
};

struct Unk_ov129_SceneEntry {
    Unk_ov129_022965f8 *(*create)();
    u16 a;
    u16 b;
};

extern "C" Unk_ov129_022965f8 *func_ov129_02296438() { return new Unk_ov129_022965f8(); }

BOOL Unk_ov129_022965f8::vfunc_00() {
    func_ov129_02295c88();
    unk_8c = 0;
    func_ov002_02200a60(0);
    return TRUE;
}

BOOL Unk_ov129_022965f8::vfunc_0c() {
    ((Unk_ov092_02291ec8 *)func_020ed174())->func_ov092_02291c5c();
    func_ov129_02295c20();
    return TRUE;
}

BOOL Unk_ov129_022965f8::vfunc_24() {
    if (func_0206ef00()) {
        unk_324.func_ov002_02202844();
    }
    if (func_ov129_022941ac(8)) {
        unk_1c0.func_ov002_022036a4(unk_a0);
    }
    if (func_0206ef00()) {
        if (func_ov129_022941ac(0x10)) {
            func_ov127_02292780(&unk_6b8, 0);
        }
    }
    if (func_ov129_022941ac(1)) {
        func_ov127_022927a8(&unk_6b8, unk_9c, 5);
    }
    if (unk_b3 != 0xff) {
        if (func_ov129_022941ac(0x80)) {
            func_ov127_02292724(&unk_6b8, unk_b3);
        }
    }
    return TRUE;
}// Declarations for data defined further down (definition order sets the data layout)
extern "C" void *data_ov129_02296538[2];
extern "C" void *data_ov129_022965b8[2];
extern "C" const u8 data_ov129_022964a4[8];
extern "C" void *data_ov129_022965c0[2];
extern "C" const u8 data_ov129_022964ac[8];
extern "C" void *data_ov129_02296550[2];
extern "C" void *data_ov129_022965e8[2];
extern "C" void *data_ov129_022965e0[2];
extern "C" void *data_ov129_022965d8[2];
extern "C" void *data_ov129_022965d0[2];
extern "C" void *data_ov129_022965a8[2];
extern "C" void *data_ov129_022965a0[2];
extern "C" const s32 data_ov129_022964bc[5];
extern "C" void *data_ov129_02296578[2];
extern "C" Unk_ov129_SceneEntry data_ov129_02296510;
extern "C" void *data_ov129_02296568[2];
extern "C" void *data_ov129_02296560[2];
extern "C" void *data_ov129_02296558[2];
extern "C" const u8 data_ov129_02296498[4];
extern "C" void *data_ov129_02296548[2];
extern "C" const s32 data_ov129_022964d0[5];
extern "C" void *data_ov129_022965c8[2];
extern "C" void *data_ov129_02296570[2];
extern "C" void *data_ov129_02296528[2];
extern "C" void *data_ov129_02296598[2];
extern "C" void *data_ov129_02296580[2];
extern "C" const u8 data_ov129_0229649c[8];
extern "C" u8 data_ov129_02296508[8];
extern "C" const u8 data_ov129_022964b4[8];
extern "C" void *data_ov129_02296530[2];
extern "C" void *data_ov129_02296590[2];
extern "C" void *data_ov129_02296520[2];
extern "C" void *data_ov129_02296588[2];
extern "C" u8 data_ov129_02296500[8];
extern "C" void *data_ov129_02296540[2];
extern "C" void *data_ov129_02296518[2];
extern "C" void *data_ov129_022965b0[2];

extern "C" void *data_ov129_02296538[2] = {(void *)_ZN18Unk_ov129_022965f819func_ov129_022955c0Ev, 0};

extern "C" void *data_ov129_022965b8[2] = {(void *)_ZN18Unk_ov129_022965f819func_ov129_02296054Ev, 0};

extern "C" const u8 data_ov129_022964a4[8] = {5, 4, 2, 2, 4, 5, 0, 0};

extern "C" void *data_ov129_022965c0[2] = {(void *)_ZN18Unk_ov129_022965f819func_ov129_02295df8Ev, 0};

extern "C" const u8 data_ov129_022964ac[8] = {1, 1, 4, 1, 4, 2, 0, 0};

extern "C" void *data_ov129_02296550[2] = {(void *)_ZN18Unk_ov129_022965f819func_ov129_02295fd0Ev, 0};

extern "C" void *data_ov129_022965e8[2] = {(void *)_ZN18Unk_ov129_022965f819func_ov129_02295f0cEv, 0};

extern "C" void *data_ov129_022965e0[2] = {(void *)_ZN18Unk_ov129_022965f819func_ov129_02295eb8Ev, 0};

extern "C" void *data_ov129_022965d8[2] = {(void *)_ZN18Unk_ov129_022965f819func_ov129_02295e8cEv, 0};

extern "C" void *data_ov129_022965d0[2] = {(void *)_ZN18Unk_ov129_022965f819func_ov129_0229600cEv, 0};

BOOL Unk_ov129_022965f8::vfunc_4c() {
    static Unk_ov129_022965f8_Fn tbl[12] = {
        *(Unk_ov129_022965f8_Fn *)data_ov129_02296560,
        *(Unk_ov129_022965f8_Fn *)data_ov129_022965b8,
        *(Unk_ov129_022965f8_Fn *)data_ov129_022965d0,
        *(Unk_ov129_022965f8_Fn *)data_ov129_02296550,
        *(Unk_ov129_022965f8_Fn *)data_ov129_02296558,
        *(Unk_ov129_022965f8_Fn *)data_ov129_022965e8,
        *(Unk_ov129_022965f8_Fn *)data_ov129_022965e0,
        *(Unk_ov129_022965f8_Fn *)data_ov129_022965d8,
        *(Unk_ov129_022965f8_Fn *)data_ov129_02296580,
        *(Unk_ov129_022965f8_Fn *)data_ov129_022965c8,
        *(Unk_ov129_022965f8_Fn *)data_ov129_022965c0,
        *(Unk_ov129_022965f8_Fn *)data_ov129_022965a8};
    func_ov129_02295bd0();
    (this->*tbl[unk_8c])();
    func_ov129_02295b70();
    return TRUE;
}

void Unk_ov129_022965f8::func_ov129_02296138() {
    static Unk_ov129_022965f8_Fn tbl[15] = {
        *(Unk_ov129_022965f8_Fn *)data_ov129_02296528,
        *(Unk_ov129_022965f8_Fn *)data_ov129_02296598,
        *(Unk_ov129_022965f8_Fn *)data_ov129_02296520,
        *(Unk_ov129_022965f8_Fn *)data_ov129_02296588,
        *(Unk_ov129_022965f8_Fn *)data_ov129_02296518,
        *(Unk_ov129_022965f8_Fn *)data_ov129_02296530,
        *(Unk_ov129_022965f8_Fn *)data_ov129_02296538,
        *(Unk_ov129_022965f8_Fn *)data_ov129_02296568,
        *(Unk_ov129_022965f8_Fn *)data_ov129_02296540,
        *(Unk_ov129_022965f8_Fn *)data_ov129_02296548,
        *(Unk_ov129_022965f8_Fn *)data_ov129_02296570,
        *(Unk_ov129_022965f8_Fn *)data_ov129_02296578,
        *(Unk_ov129_022965f8_Fn *)data_ov129_02296590,
        *(Unk_ov129_022965f8_Fn *)data_ov129_022965a0,
        *(Unk_ov129_022965f8_Fn *)data_ov129_022965b0};
    (this->*tbl[unk_8d])();
}

BOOL Unk_ov129_022965f8::vfunc_50() {
    func_ov129_02295c04();
    func_ov129_02296138();
    func_ov129_02295bfc();
    return TRUE;
}

BOOL Unk_ov129_022965f8::vfunc_54() { return TRUE; }

BOOL Unk_ov129_022965f8::vfunc_58() { return TRUE; }

BOOL Unk_ov129_022965f8::vfunc_5c() {
    func_020ed188(this);
    return TRUE;
}

void Unk_ov129_022965f8::func_ov129_0229609c() {
    func_ov129_02295b38();
    func_ov129_02295ac8();
    func_ov129_022948d0();
    func_ov002_022008e0(9, 4, 0, 0x30);
    func_02001710(0x1e, 1);
    func_ov129_02295f5c();
    func_020020b8(3);
    func_020020b8(6);
    func_ov129_0229419c(1);
    func_ov129_0229419c(8);
    func_ov129_02295fa4();
    func_ov002_02200a50(1);
}

void Unk_ov129_022965f8::func_ov129_02296054() {
    if (func_ov002_02200908(0)) {
        func_ov002_02200a60(2);
        func_ov129_022951d8();
        func_ov129_0229419c(0x10);
        func_ov129_022948a4(1);
        func_0200151c(2);
    } else {
        func_ov129_02295f5c();
    }
    func_ov129_02295fa4();
}

void Unk_ov129_022965f8::func_ov129_0229600c() {
    ((Unk_ov092_02291ec8 *)func_020ed174())->func_ov092_02291ce4(0x44, 1);
    func_ov002_022008c4(9, 0, 0, 0x30);
    func_02001710(0x1e, 1);
    func_ov129_02295f5c();
    func_ov129_02295fa4();
    func_ov002_02200a50(3);
}

void Unk_ov129_022965f8::func_ov129_02295fd0() {
    if (func_ov002_022008fc(0)) {
        func_020021a0(3);
        func_020021a0(6);
        func_0200151c(2);
        func_ov002_02200a60(5);
    } else {
        func_ov129_02295f5c();
        func_ov129_02295fa4();
    }
}

void Unk_ov129_022965f8::func_ov129_02295fa4() {
    func_ov002_02200840(6, 0, 0);
    unk_9c = func_ov002_02200920();
    unk_a0 = func_ov002_02200920();
}

void Unk_ov129_022965f8::func_ov129_02295f5c() {
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

void Unk_ov129_022965f8::func_ov129_02295f40() {
    func_ov002_0220085c(0, 0);
    func_ov002_02200a50(5);
}

void Unk_ov129_022965f8::func_ov129_02295f0c() {
    if (func_ov002_022008fc(-1)) {
        func_ov129_02295eb8();
    }
    unk_a0 = func_ov002_02200920();
    unk_9c = func_ov002_02200920();
}

void Unk_ov129_022965f8::func_ov129_02295eb8() {
    func_ov002_02200874(0, 0);
    unk_1c0.func_ov002_02202fc8(6);
    if (func_ov129_022941ac(4)) {
        unk_1c0.func_ov002_02203370(0x87);
    } else {
        unk_1c0.func_ov002_02203370(0x22);
    }
    func_ov129_0229418c(1);
    func_ov002_02200a50(7);
}

void Unk_ov129_022965f8::func_ov129_02295e8c() {
    if (func_ov002_02200908(0)) {
        func_ov002_02200a60(2);
        func_ov129_02295d18();
    }
    unk_a0 = func_ov002_02200920();
}

void Unk_ov129_022965f8::func_ov129_02295e70() {
    func_ov002_0220085c(0, 0);
    func_ov002_02200a50(9);
}

void Unk_ov129_022965f8::func_ov129_02295e48() {
    if (func_ov002_022008fc(-1)) {
        func_ov129_02295df8();
    }
    unk_a0 = func_ov002_02200920();
}

void Unk_ov129_022965f8::func_ov129_02295df8() {
    func_ov002_02200874(0, 0);
    unk_1c0.func_ov002_02203548();
    if (unk_b1 == 2) {
        unk_1c0.func_ov002_02202fc8(6);
    } else {
        unk_1c0.func_ov002_02202fe4(6);
    }
    func_ov002_02200a50(0xb);
    func_ov129_0229419c(1);
}

void Unk_ov129_022965f8::func_ov129_02295db0() {
    if (func_ov002_02200908(0)) {
        func_ov002_02200a60(2);
        func_ov129_022951d8();
        func_ov129_0229419c(0x10);
        func_ov129_022948a4(1);
    }
    unk_a0 = func_ov002_02200920();
    unk_9c = func_ov002_02200920();
}

void Unk_ov129_022965f8::func_ov129_02295d98() {
    func_ov129_02294db0();
    func_ov002_02200a58(0xb);
}

void Unk_ov129_022965f8::func_ov129_02295d38() {
    func_ov002_02200980();
    unk_af = 1;
    ((Unk_ov002_0220464c *)&unk_324)->func_ov002_02202d00(1);
    unk_324.vfunc_0c();
    s32 t = unk_1c0.func_ov002_022030f4(4);
    unk_324.func_ov002_02202a40(t, unk_1c0.func_ov002_022030b8(4));
    func_ov002_02200a58(0xc);
}

void Unk_ov129_022965f8::func_ov129_02295d18() {
    if (func_0206ef0c()) {
        func_ov129_02295d98();
    } else {
        func_ov129_02295d38();
    }
}

void Unk_ov129_022965f8::func_ov129_02295c88() {
    unk_a4 = 0;
    func_ov127_02292a7c(&unk_6b8);
    unk_94 = 0x80;
    unk_98 = 0x60;
    unk_ae = 4;
    unk_a6 = 0xffff;
    unk_a8 = 0xffff;
    unk_b4 = 0;
    func_ov129_02294ad4();
    func_ov129_02294a50();
    unk_b0 = 0xff;
    unk_aa = 0xffff;
    unk_b3 = 0xff;
    func_ov129_0229497c();
    func_ov004_02224844();
    func_02034f98(data_021c1b3c + 0x2f0);
}

void Unk_ov129_022965f8::func_ov129_02295c20() {
    func_020b0780(&unk_388);
    func_ov127_0229281c(&unk_6b8);
    unk_1c0.func_ov002_02203900();
    func_02094960();
    func_02034f80(data_021c1b3c + 0x2f0);
    func_0200261c((void *)"menu/inventory/b_itm0.bch", data_021f482c, 3, 0, 0x10, 0x10);
}

void Unk_ov129_022965f8::func_ov129_02295c04() {
    func_ov129_02295bd0();
    unk_324.vfunc_0c();
}

void Unk_ov129_022965f8::func_ov129_02295bfc() {
    func_ov129_02295b70();
}

void Unk_ov129_022965f8::func_ov129_02295bd0() {
    func_020b080c(&unk_388);
    unk_1c0.func_ov002_02203900();
    func_ov129_0229418c(0x40);
}

void Unk_ov129_022965f8::func_ov129_02295b70() {
    func_ov127_02292824(&unk_6b8);
    if (func_ov129_022941ac(0x40)) {
        if (func_ov129_022941ac(0x20) == 0) {
            func_ov129_0229419c(0x20);
            func_02004008(0x883);
        }
    } else if (func_ov129_022941ac(0x20)) {
        func_ov129_0229418c(0x20);
        func_02003ff4(0x883, 1);
    }
}

void Unk_ov129_022965f8::func_ov129_02295b38() {
    func_020015b8(0);
    func_02002398(3, 2);
    func_0200226c(3, 1, 0, 0);
    func_02002398(6, 1);
    func_0200226c(6, 0, 0, 0);
}

void Unk_ov129_022965f8::func_ov129_02295ac8() {
    func_ov127_02292a0c(&unk_6b8, 3);
    func_ov127_02292994(&unk_6b8, 6, 1);
    func_020b0788(&unk_388, 3);
    func_ov127_02292950(&unk_6b8);
    func_ov002_02203920(&unk_1c0);
    unk_1c0.func_ov002_02203548();
    if (unk_b1 == 2) {
        unk_1c0.func_ov002_02202fc8(6);
    } else {
        unk_1c0.func_ov002_02202fe4(6);
    }
}

void Unk_ov129_022965f8::func_ov129_022959c0() {
    if (func_ov002_02200a14(1)) {
        func_ov129_02295200();
        func_ov129_02294b90();
    } else if (Unk_ov129_02295000_Both()) {
        s32 a = data_021ef5f0;
        s32 b = data_021ef5ec;
        unk_ad = func_ov127_022926e0(&unk_6b8, a, b);
        if (unk_ad != 4) {
            func_ov127_022925c8(&unk_6b8, unk_ad, 0);
            func_ov002_02200a58(1);
            func_ov129_02294b90();
        } else if (unk_1c0.func_ov002_02202fac(6) == 0 && unk_1c0.func_ov002_02203110(6)) {
            func_ov129_02295154();
            func_ov129_02294b90();
        } else if (unk_1c0.func_ov002_02203110(5)) {
            func_ov129_02295110();
            func_ov129_02294b90();
        } else {
            if (func_ov129_0229470c(a, b)) {
                switch (func_ov129_022941c0()) {
                case 1:
                    return;
                case 2:
                    func_ov129_02294b2c();
                    return;
                case 3:
                    return;
                }
            }
            goto fallback;
        }
    } else {
    fallback:
        func_ov129_02294afc();
    }
}

void Unk_ov129_022965f8::func_ov129_02295980() {
    if (data_021f4770 == 0) {
        func_ov127_0229257c(&unk_6b8, unk_ad);
        func_ov002_02200a58(2);
    } else {
        func_ov127_022925c8(&unk_6b8, unk_ad, 0);
    }
}

void Unk_ov129_022965f8::func_ov129_02295914() {
    if (func_ov127_02292538(&unk_6b8)) {
        if (data_021f4770 != 0) {
            unk_ad = func_ov127_022926e0(&unk_6b8, data_021ef5f8, data_021ef5f4);
            if (unk_ad != 4) {
                func_ov127_022925c8(&unk_6b8, unk_ad, 0);
                func_ov002_02200a58(1);
                return;
            }
        }
        func_ov002_02200a58(0);
    }
}

void Unk_ov129_022965f8::func_ov129_0229570c() {
    u32 j;
    u32 k;
    if (func_ov002_022009d4()) {
        func_ov129_0229522c();
    } else {
        k = data_021f47d8[1];
        if (k & 1) {
            func_ov129_02294ce4();
        } else if (k & 0x800) {
            func_ov129_0229418c(2);
            func_ov002_02200a58(4);
            func_ov129_02294d58();
            func_ov129_02294c94();
        } else if (k & 8) {
            if (unk_1c0.func_ov002_02202fac(6) == 0) {
                func_ov129_0229418c(2);
                unk_ae = 4;
                func_ov129_02294c94();
                func_ov129_02294db0();
                func_ov129_02295154();
            }
        } else if (k & 2) {
            func_ov129_0229418c(2);
            unk_ae = 5;
            func_ov129_02294c94();
            func_ov129_02294db0();
            func_ov129_02295110();
        } else {
            s32 ox = unk_94;
            s32 oy = unk_98;
            j = *(volatile u16 *)&data_021f47d8[0];
            if (j & 0x20) {
                unk_94 = unk_94 - 4;
            } else if (j & 0x10) {
                unk_94 = unk_94 + 4;
            }
            j = *(volatile u16 *)&data_021f47d8[0];
            if (j & 0x40) {
                unk_98 = unk_98 - 4;
            } else if (j & 0x80) {
                unk_98 = unk_98 + 4;
            }
            s32 nx = unk_94;
            if (ox != nx || oy != unk_98) {
                if (nx < 0x30) {
                    unk_94 = 0x30;
                    func_ov127_02292518(&unk_6b8, -4);
                    func_ov129_0229419c(0x40);
                } else if (nx > 0xd0) {
                    unk_94 = 0xd0;
                    func_ov127_02292518(&unk_6b8, 4);
                    func_ov129_0229419c(0x40);
                }
                if (unk_98 < 0x1c) {
                    unk_98 = 0x1c;
                    if (func_ov127_0229247c(&unk_6b8, -4, 0)) {
                        func_ov129_0229419c(0x40);
                    }
                } else if (unk_98 > 0xac) {
                    unk_98 = 0xac;
                    if (func_ov127_0229247c(&unk_6b8, 4, 0)) {
                        func_ov129_0229419c(0x40);
                    }
                }
                func_ov129_02294bb4();
                unk_324.func_ov002_02202a40(unk_94, unk_98);
            }
        }
    }
}

void Unk_ov129_022965f8::func_ov129_02295654() {
    if (func_ov002_022009d4()) {
        func_ov129_0229522c();
    } else {
        u32 k = data_021f47d8[1];
        if (k & 1) {
            func_ov129_02294ce4();
        } else if (k & 0x800) {
            func_ov129_0229419c(2);
            func_ov129_02294bb4();
            func_ov002_02200a58(3);
            func_ov129_02294d58();
        } else if (k & 8) {
            if (unk_1c0.func_ov002_02202fac(6) == 0) {
                func_ov129_02294db0();
                func_ov129_02295154();
            }
        } else if (k & 2) {
            func_ov129_02294db0();
            func_ov129_02295110();
        } else {
            if (func_ov129_02294f30(func_ov002_022009c8())) {
                func_ov129_02294d58();
            }
        }
    }
}

void Unk_ov129_022965f8::func_ov129_02295604() {
    if ((data_021f47d8[0] & 1) == 0) {
        func_ov002_02200a58(4);
        func_ov129_02294cb8();
        func_ov002_02200a58(6);
        func_ov127_0229257c(&unk_6b8, unk_ad);
    } else {
        func_ov127_022925c8(&unk_6b8, unk_ad, 0);
    }
}

void Unk_ov129_022965f8::func_ov129_022955c0() {
    if (func_ov127_02292538(&unk_6b8)) {
        func_ov129_02294d04();
        func_ov002_02200a58(unk_ac);
    }
    if (unk_324.func_0208d4fc()) {
        func_ov129_02294d04();
    }
}

void Unk_ov129_022965f8::func_ov129_02295594() {
    if (unk_324.func_ov002_022028f0() == 0) {
        func_ov002_02200a58(unk_ac);
        func_ov129_02296138();
    }
}

void Unk_ov129_022965f8::func_ov129_022954c0() {
    if (unk_324.func_0208d4fc()) {
        if (func_ov129_022941ac(2)) {
            if (func_ov129_0229470c(unk_94, unk_98)) {
                if (func_ov129_022941c0() == 3) return;
            }
            func_ov129_02294bb4();
            func_ov002_02200a58(3);
            func_ov129_02294cb8();
        } else {
            u32 v = unk_ae;
            switch (v) {
            case 4:
                if (unk_1c0.func_ov002_02202fac(6) == 0) {
                    func_ov129_02295154();
                } else {
                    func_ov002_02200a58(4);
                    func_ov129_02294cb8();
                }
                break;
            case 5:
                func_ov129_02295110();
                break;
            case 0:
            case 1:
            case 2:
            case 3:
                unk_ad = v;
                func_ov127_022925c8(&unk_6b8, unk_ad, 0);
                func_ov002_02200a58(5);
                break;
            }
        }
    }
}

void Unk_ov129_022965f8::func_ov129_02295494() {
    if (unk_324.func_0208d4fc()) {
        func_ov129_02294d04();
        func_ov002_02200a58(unk_ac);
    }
}

void Unk_ov129_022965f8::func_ov129_02295428() {
    if (unk_1c0.func_ov002_0220308c()) {
        if (unk_324.func_0208d534()) {
            s32 a = unk_1c0.func_ov002_0220306c();
            s32 b = unk_1c0.func_ov002_022030f4(-1);
            s32 c = unk_1c0.func_ov002_022030b8(-1);
            unk_324.func_ov002_02202a40(a + b, a + c);
        }
    } else {
        func_ov129_02294db0();
        func_ov002_02200a60(1);
    }
}

void Unk_ov129_022965f8::func_ov129_022953bc() {
    if (func_ov002_02200a14(1)) {
        func_ov129_02295d38();
    } else if (Unk_ov129_02295000_Both()) {
        if (unk_1c0.func_ov002_02203110(3)) {
            func_ov129_02295040();
        } else if (unk_1c0.func_ov002_02203110(4)) {
            func_ov129_02295000();
        }
    }
}

void Unk_ov129_022965f8::func_ov129_022952a4() {
    if (func_ov002_022009d4()) {
        func_ov129_02295d98();
        return;
    }
    u32 keys = data_021f47d8[1];
    if (keys & 1) {
        ((Unk_ov002_0220464c *)&unk_324)->func_ov002_02202b68();
        func_ov002_02200a58(0xd);
        return;
    }
    if (keys & 2) {
        func_ov129_02294db0();
        func_ov129_02295000();
        return;
    }
    if (keys & 8) {
        func_ov129_02294db0();
        func_ov129_02295040();
        return;
    }
    u8 old = unk_af;
    s32 k = func_ov002_022009c8();
    if (func_ov002_0220126c(k)) {
        if (unk_af != 0) {
            unk_af = *(volatile u8 *)&unk_af - 1;
        }
    } else if (func_ov002_0220125c(k)) {
        if (unk_af < 1) {
            unk_af = *(volatile u8 *)&unk_af + 1;
        }
    }
    if (old != unk_af) {
        if (unk_af != 0) {
            s32 a = unk_1c0.func_ov002_022030f4(4);
            s32 b = unk_1c0.func_ov002_022030b8(4);
            func_ov129_02294d24(a, b);
        } else {
            s32 a = unk_1c0.func_ov002_022030f4(3);
            s32 b = unk_1c0.func_ov002_022030b8(3);
            func_ov129_02294d24(a, b);
        }
    }
}

void Unk_ov129_022965f8::func_ov129_02295270() {
    if (unk_324.func_0208d4fc()) {
        if (unk_af != 0) {
            func_ov129_02295000();
        } else {
            func_ov129_02295040();
        }
    }
}

void Unk_ov129_022965f8::func_ov129_02295248() {
    if (unk_b8.func_ov002_02204234(0)) {
        func_ov129_022951d8();
        unk_324.func_0208d644();
    }
}

void Unk_ov129_022965f8::func_ov129_0229522c() {
    func_ov129_02294db0();
    func_ov129_02294c94();
    func_ov002_02200a58(0);
}

void Unk_ov129_022965f8::func_ov129_02295200() {
    func_ov129_0229419c(2);
    func_ov129_02294e74();
    func_ov002_02200980();
    func_ov129_02294bb4();
    func_ov002_02200a58(3);
}

void Unk_ov129_022965f8::func_ov129_022951d8() {
    func_ov129_0229419c(0x80);
    if (func_0206ef0c()) {
        func_ov129_0229522c();
    } else {
        func_ov129_02295200();
    }
}

void Unk_ov129_022965f8::func_ov129_02295154() {
    s32 a, b;
    func_ov129_0229418c(4);
    unk_1c0.func_ov002_022030ac(6);
    func_ov002_02200a50(4);
    func_ov002_02200a58(0xa);
    func_ov129_0229418c(0x10);
    func_ov129_022948a4(0);
    func_020b05c4(unk_2f00, &a, &b);
    a = a & 0xfffc;
    b = b & 0xfffc;
    func_ov127_02292380(&unk_6b8, a, b);
    func_0200402c(0x87f);
    func_ov129_0229418c(0x80);
}

void Unk_ov129_022965f8::func_ov129_02295110() {
    func_ov129_0229419c(4);
    unk_1c0.func_ov002_022030ac(5);
    func_ov002_02200a50(4);
    func_ov002_02200a58(0xa);
    func_ov129_0229418c(0x10);
    func_0200402c(0x2a);
    func_ov129_0229418c(0x80);
}
extern "C" void *data_ov129_022965a8[2] = {(void *)_ZN18Unk_ov129_022965f819func_ov129_02295db0Ev, 0};

extern "C" void *data_ov129_022965a0[2] = {(void *)_ZN18Unk_ov129_022965f819func_ov129_02295270Ev, 0};

extern "C" const s32 data_ov129_022964bc[5] = {0, 0, 0, -4, 4};

void Unk_ov129_022965f8::func_ov129_02295040() {
    unk_1c0.func_ov002_022030ac(3);
    func_ov002_02200a50(2);
    func_ov002_02200a58(0xa);
    if (func_ov129_022941ac(4)) {
        func_0206ecf8(0);
        func_0200402c(0x28);
    } else {
        func_0206ecf8(1);
        s32 n = func_0206ed38();
        static Unk_020b0a60 obj;
        func_020b0a30(&obj);
        func_020b0450(&obj);
        s32 i;
        for (i = 0; i < 16; i++) {
            obj.unk_26[i] = unk_2f00[i];
        }
        for (i = 0; i < 16; i++) {
            obj.unk_16[i] = unk_2ef0[i];
        }
        func_020b04f8(&obj, n, 0);
        func_0200402c(0x27);
    }
}

void Unk_ov129_022965f8::func_ov129_02295000() {
    if (func_ov129_022941ac(4)) {
        func_0200402c(0x29);
    } else {
        func_0200402c(0x2a);
    }
    unk_1c0.func_ov002_022030ac(4);
    func_ov002_02200a50(8);
    func_ov002_02200a58(0xa);
}

void Unk_ov129_022965f8::func_ov129_02294fcc(u32 v) {
    u8 buf[1];
    buf[0] = v;
    unk_b8.func_ov002_02204394(buf, 1, 0);
    func_ov002_02200a58(0xe);
    unk_324.func_0208d63c();
}

BOOL Unk_ov129_022965f8::func_ov129_02294f30(s32 k) {
    u8 old = unk_ae;
    if (func_ov002_0220126c(k)) {
        unk_ae = data_ov129_0229649c[unk_ae];
    } else if (func_ov002_0220125c(k)) {
        unk_ae = data_ov129_022964ac[unk_ae];
    } else if (func_ov002_0220128c(k)) {
        unk_ae = data_ov129_022964b4[unk_ae];
    } else if (func_ov002_0220127c(k)) {
        unk_ae = data_ov129_022964a4[unk_ae];
    }
    return old != unk_ae ? TRUE : FALSE;
}

BOOL Unk_ov129_022965f8::func_ov129_02294f04() {
    if (func_ov129_022941ac(2)) {
        return TRUE;
    }
    if ((u8)(unk_ae + 0xfd) <= 1) {
        return FALSE;
    }
    return TRUE;
}

BOOL Unk_ov129_022965f8::func_ov129_02294edc() {
    if (func_ov129_022941ac(2)) {
        return FALSE;
    }
    if (unk_ae == 4) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov129_022965f8::func_ov129_02294e74() {
    s32 a = func_ov129_02294e24();
    s32 b = func_ov129_02294dd4();
    unk_324.func_ov002_02202a40(a, b);
    if (func_ov129_02294f04()) {
        ((Unk_ov002_0220464c *)&unk_324)->func_ov002_02202d00(1);
    } else if (func_ov129_02294edc()) {
        ((Unk_ov002_0220464c *)&unk_324)->func_ov002_02202d00(7);
    } else {
        ((Unk_ov002_0220464c *)&unk_324)->func_ov002_02202d00(0xd);
    }
    func_ov129_02294d04();
}

s32 Unk_ov129_022965f8::func_ov129_02294e24() {
    if (func_ov129_022941ac(2)) {
        return unk_94;
    }
    switch (unk_ae) {
    case 4:
        return unk_1c0.func_ov002_022030f4(6);
    case 5:
        return unk_1c0.func_ov002_022030f4(5);
    default:
        return data_ov129_02296500[unk_ae];
    }
}

s32 Unk_ov129_022965f8::func_ov129_02294dd4() {
    if (func_ov129_022941ac(2)) {
        return unk_98;
    }
    switch (unk_ae) {
    case 4:
        return unk_1c0.func_ov002_022030b8(6);
    case 5:
        return unk_1c0.func_ov002_022030b8(5);
    default:
        return data_ov129_02296508[unk_ae];
    }
}

void Unk_ov129_022965f8::func_ov129_02294db0() {
    ((Unk_ov002_0220464c *)&unk_324)->func_ov002_02202d00(0);
    unk_324.vfunc_0c();
}

void Unk_ov129_022965f8::func_ov129_02294d58() {
    if (func_ov129_02294f04()) {
        ((Unk_ov002_0220464c *)&unk_324)->func_ov002_02202c40();
    } else if (func_ov129_02294edc()) {
        ((Unk_ov002_0220464c *)&unk_324)->func_ov002_02202ca0();
    } else {
        ((Unk_ov002_0220464c *)&unk_324)->func_ov002_02202be0();
    }
    s32 a = func_ov129_02294e24();
    s32 b = func_ov129_02294dd4();
    func_ov129_02294d24(a, b);
}

void Unk_ov129_022965f8::func_ov129_02294d24(u32 a, u32 b) {
    unk_324.func_ov002_022029e8(a, b, 3, 1);
    unk_ac = unk_8d;
    func_ov002_02200a58(7);
}

void Unk_ov129_022965f8::func_ov129_02294d04() {
    unk_324.func_ov002_02202a78();
    unk_324.vfunc_0c();
}

void Unk_ov129_022965f8::func_ov129_02294ce4() {
    ((Unk_ov002_0220464c *)&unk_324)->func_ov002_02202b68();
    func_ov002_02200a58(8);
}

void Unk_ov129_022965f8::func_ov129_02294cb8() {
    unk_324.func_ov002_02202af0();
    unk_ac = unk_8d;
    func_ov002_02200a58(9);
}

void Unk_ov129_022965f8::func_ov129_02294c94() {
    if (unk_a6 != 0xffff) {
        func_ov129_022948f0(unk_a6);
        unk_a6 = 0xffff;
    }
}

void Unk_ov129_022965f8::func_ov129_02294bb4() {
    u32 r4;
    if (func_ov129_0229470c(unk_94, unk_98)) {
        if (unk_b0 != 0xff && unk_b3 != 0xff && unk_b0 != unk_b3) {
            switch (unk_b1) {
            case 1:
            case 2: {
                u32 x = func_ov129_02294598(unk_b3, unk_b0);
                if (x != 0xffff && unk_2f20[x] == 3) {
                    unk_aa = x;
                    goto done;
                }
                if (unk_b1 == 2) {
                    if (func_ov129_02294664(unk_b0)) {
                        unk_aa = 0xffff;
                    }
                }
                break;
            }
            default:
                break;
            }
        }
    done:
        r4 = unk_aa;
    } else {
        r4 = 0xffff;
    }
    if (r4 != unk_a6) {
        func_ov129_02294c94();
    }
    if (r4 != 0xffff) {
        u32 t = unk_2f20[r4];
        if (t == 2) {
            func_ov127_022923c0(&unk_6b8, r4, 0xb);
        } else if (t == 3) {
            func_ov127_022923c0(&unk_6b8, r4, 8);
        }
    }
    unk_a6 = r4;
}

void Unk_ov129_022965f8::func_ov129_02294b90() {
    if (unk_a8 != 0xffff) {
        func_ov129_022948f0(unk_a8);
        unk_a8 = 0xffff;
    }
}

void Unk_ov129_022965f8::func_ov129_02294b2c() {
    unk_b4 = 5;
    if (unk_aa != unk_a8) {
        func_ov129_02294b90();
    }
    if (unk_aa != 0xffff) {
        if ((u8)(unk_2f20[unk_aa] + 0xfe) <= 1) {
            func_ov127_022923c0(&unk_6b8, unk_aa, 10);
        }
    }
    unk_a8 = unk_aa;
}

void Unk_ov129_022965f8::func_ov129_02294afc() {
    if (unk_b4 != 0) {
        unk_b4 = *(volatile u8 *)&unk_b4 - 1;
        if (*(volatile u8 *)&unk_b4 == 0) {
            func_ov129_02294b90();
        }
    }
}

void Unk_ov129_022965f8::func_ov129_02294ad4() {
    s32 i, z;
    i = 0;
    z = i;
    for (; i < 0x1c6; i++) {
        unk_2f20[i] = z;
    }
}

void Unk_ov129_022965f8::func_ov129_02294aa4() {
    s32 i;
    u8 *p = unk_2f20;
    for (i = 0; i < 0x1c6; p++, i++) {
        if ((u8)(*p + 0xfe) <= 1) {
            *p = 0;
        }
    }
}

void Unk_ov129_022965f8::func_ov129_02294a50() {
    s32 n = func_0206ed38();
    s32 i = 0;
    do {
        if (i != n) {
            u16 *p = (u16 *)func_020b053c(i);
            if (p != NULL) {
                s32 j = 0;
                for (; j < 16; j++) {
                    u32 v = ((u16 *)((u8 *)p + 0x26))[j];
                    if (v != 0xffff) {
                        unk_2f20[v] = 1;
                    }
                }
            }
        }
        i++;
    } while (i < 16);
}

void Unk_ov129_022965f8::func_ov129_0229497c() {
    Unk_ov129_0229497c_Save *t = (Unk_ov129_0229497c_Save *)func_020b053c(func_0206ed38());
    s32 i;
    u16 *p = unk_2f00;
    u32 first = 0xffff;
    if (t) {
        for (i = 0; i < 16; p++, i++) {
            *p = t->unk_26[i];
            u32 v = *p;
            if (v != 0xffff && first == 0xffff) {
                first = v;
            }
        }
        unk_b1 = 2;
        unk_b3 = func_ov127_0229207c(first)[0];
        u32 x = func_ov127_02292098(unk_b3) << 3;
        u32 y = func_ov127_02292088(unk_b3) << 3;
        x = (x + 4) & 0xfffc;
        y = (y + 4) & 0xfffc;
        func_ov127_02292454(&unk_6b8, x, y);
        for (i = 0; i < 16; i++) {
            unk_2ef0[i] = t->unk_16[i];
        }
    } else {
        for (i = 0; i < 16; p++, i++) {
            *p = first;
        }
        u32 z = 0;
        for (i = 0; i < 16; i++) {
            unk_2ef0[i] = z;
        }
        unk_b1 = z;
    }
    func_ov129_02294948();
}

s32 Unk_ov129_022965f8::func_ov129_02294948() {
    s32 i;
    u16 *p = unk_2f00;
    for (i = 0; i < 16; p++, i++) {
        if (*p != 0xffff) {
            unk_2f20[*p] = 2;
        }
    }
}

void Unk_ov129_022965f8::func_ov129_02294914() {
    switch (unk_b1) {
    case 0:
        break;
    case 1:
        func_ov129_022947c4(unk_b2);
        break;
    case 2:
        func_ov129_022947c4(unk_b3);
        break;
    }
}

void Unk_ov129_022965f8::func_ov129_022948f0(s32 i) {
    func_ov127_022923c0(&unk_6b8, i, data_ov129_02296498[unk_2f20[i]]);
}

void Unk_ov129_022965f8::func_ov129_022948d0() {
    s32 i;
    for (i = 0; i < 0x1c6; i++) {
        func_ov129_022948f0(i);
    }
}

void Unk_ov129_022965f8::func_ov129_022948a4(BOOL flag) {
    func_ov129_02294aa4();
    func_ov129_02294948();
    if (flag) {
        func_ov129_02294914();
    }
    func_ov129_022948d0();
}

BOOL Unk_ov129_022965f8::func_ov129_0229483c(u32 a, u32 b) {
    u8 *q = func_ov127_0229207c(a);
    s32 i;
    for (i = 0; i < 2; i++) {
        u32 c = q[i];
        if (b != c) {
            u32 x = func_ov127_02292098(c);
            u32 y = func_ov127_02292088(c);
            u16 nb[8];
            s32 n = func_ov127_022920a4(nb, x, y);
            s32 j;
            for (j = 0; j < n; j++) {
                if (unk_2f20[nb[j]] == 1) {
                    return TRUE;
                }
            }
        }
    }
    return FALSE;
}

void Unk_ov129_022965f8::func_ov129_02294818(u32 a, u32 b) {
    if (unk_2f20[a] == 0) {
        if (func_ov129_0229483c(a, b) == 0) {
            unk_2f20[a] = 3;
        }
    }
}

void Unk_ov129_022965f8::func_ov129_022947c4(u32 id) {
    if (id != 0xff) {
        if (func_ov129_022946dc() != -1) {
            u32 x = func_ov127_02292098(id);
            u32 y = func_ov127_02292088(id);
            u16 nb[8];
            s32 n = func_ov127_022920a4(nb, x, y);
            s32 i;
            for (i = 0; i < n; i++) {
                func_ov129_02294818(nb[i], id);
            }
        }
    }
}

BOOL Unk_ov129_022965f8::func_ov129_0229470c(s32 x, s32 y) {
    unk_b0 = 0xff;
    unk_aa = 0xffff;
    s32 z1 = 0;
    s32 z2 = 0;
    s32 i;
    for (i = 0; i < 5; i++) {
        s32 ox, oy;
        if (func_ov127_022923d8(&unk_6b8, x + data_ov129_022964bc[i], y + data_ov129_022964d0[i], &ox, &oy)) {
            if (unk_b0 == 0xff) {
                s32 r = func_ov127_02292204(ox, oy);
                if (r != ~z1) {
                    unk_b0 = r;
                }
            }
            if (unk_aa == 0xffff) {
                s32 r = func_ov127_022921c4(ox, oy);
                if (r != ~z2) {
                    unk_aa = r;
                }
            }
        }
    }
    if (unk_b0 != 0xff || unk_aa != 0xffff) {
        return TRUE;
    }
    return FALSE;
}

s32 Unk_ov129_022965f8::func_ov129_022946dc() {
    s32 i;
    for (i = 0; i < 16; i++) {
        if (unk_2f00[i] == 0xffff) {
            return i;
        }
    }
    return -1;
}

s32 Unk_ov129_022965f8::func_ov129_022946b0(u32 v) {
    s32 i;
    for (i = 0; i < 16; i++) {
        if (v == unk_2f00[i]) {
            return i;
        }
    }
    return -1;
}

BOOL Unk_ov129_022965f8::func_ov129_02294664(u32 id) {
    u32 x = func_ov127_02292098(id);
    u32 y = func_ov127_02292088(id);
    u16 nb[8];
    s32 n = func_ov127_022920a4(nb, x, y);
    s32 i;
    for (i = 0; i < n; i++) {
        if (unk_2f20[nb[i]] == 2) {
            return TRUE;
        }
    }
    return FALSE;
}

s32 Unk_ov129_022965f8::func_ov129_022945f4(u32 id) {
    u32 x = func_ov127_02292098(id);
    u32 y = func_ov127_02292088(id);
    u16 nb[8];
    s32 n = func_ov127_022920a4(nb, x, y);
    s32 i;
    for (i = 0; i < n; i++) {
        if (unk_2f20[nb[i]] == 1) {
            return 0;
        }
    }
    for (i = 0; i < n; i++) {
        if (func_ov129_0229483c(nb[i], id) == 0) {
            return 1;
        }
    }
    return 3;
}

u32 Unk_ov129_022965f8::func_ov129_02294598(u32 id, u32 val) {
    u32 x = func_ov127_02292098(id);
    u32 y = func_ov127_02292088(id);
    u16 nb[8];
    s32 n = func_ov127_022920a4(nb, x, y);
    s32 i;
    for (i = 0; i < n; i++) {
        u8 *q = func_ov127_0229207c(nb[i]);
        s32 j;
        for (j = 0; j < 2; j++) {
            if (val == q[j]) {
                return nb[i];
            }
        }
    }
    return 0xffff;
}

s32 Unk_ov129_022965f8::func_ov129_022943ec() {
    volatile u8 *q;
    u8 *pi;
    u16 *slot;
    s32 n;
    s32 idx = func_ov129_022946b0(unk_aa);
    if (idx == -1) {
        return 0;
    }
    slot = &unk_2f00[idx];
    *slot = 0xffff;
    u32 more = 1;
    s32 cnt = 0;
    u8 st[16];
    s32 i;
    for (i = 0; i < 16; i++) {
        if (unk_2f00[i] == 0xffff) {
            st[i] = 3;
        } else {
            if (cnt > 0) {
                st[i] = 0;
            } else {
                st[i] = 1;
            }
            cnt++;
        }
    }
    if (cnt == 0) {
        unk_1c0.func_ov002_02202fe4(6);
        unk_b1 = 0;
        unk_b3 = 0xff;
        func_0200402c(0x882);
        return 2;
    }
    while (more != 0) {
        more = 0;
        for (i = 0; i < 16; i++) {
            pi = &st[i];
            if (*pi == 1) {
                q = func_ov127_0229207c(unk_2f00[i]);
                s32 j;
                for (j = 0; j < 2; j++) {
                    u32 x = func_ov127_02292098(q[j]);
                    u32 y = func_ov127_02292088(q[j]);
                    u16 nb[8];
                    n = func_ov127_022920a4(nb, x, y);
                    s32 m;
                    for (m = 0; m < n; m++) {
                        s32 t = func_ov129_022946b0(nb[m]);
                        if (t != -1 && st[t] == 0) {
                            st[t] = 1;
                        }
                    }
                }
                *pi = 2;
            }
        }
        for (i = 0; i < 16; i++) {
            if (st[i] == 1) {
                more = 1;
            }
        }
    }
    for (i = 0; i < 16; i++) {
        if (st[i] == 0) {
            *slot = unk_aa;
            return 0;
        }
    }
    u8 *q2 = func_ov127_0229207c(unk_aa);
    u32 r = 0xff;
    u32 c = unk_b3;
    u32 q0 = q2[0];
    if (q0 == c) {
        r = q2[1];
    } else if (q2[1] == c) {
        r = q0;
    }
    if (r != 0xff) {
        unk_2f20[unk_aa] = 0;
        if (func_ov129_02294664(unk_b3) == 0) {
            unk_b3 = r;
        }
    }
    func_0200402c(0x882);
    return 2;
}

s32 Unk_ov129_022965f8::func_ov129_02294398() {
    s32 r = 0;
    if (unk_b0 != 0xff) {
        r = func_ov129_022945f4(unk_b0);
        if (r != 1) {
            if (r == 3) {
                func_ov129_02294fcc(0x16);
            }
        } else {
            unk_b1 = 1;
            unk_b2 = unk_b0;
            unk_b3 = unk_b0;
        }
    }
    return r;
}

void Unk_ov129_022965f8::func_ov129_02294360() {
    func_0200402c(0x881);
    u8 *q = func_ov127_0229207c(unk_aa);
    u32 c = q[0];
    if (c == unk_b3) {
        unk_b3 = q[1];
    } else {
        unk_b3 = c;
    }
}

s32 Unk_ov129_022965f8::func_ov129_022942d0() {
    u32 a = unk_b0;
    u32 b = unk_b2;
    if (b != a) {
        u32 t = func_ov129_02294598(b, a);
        if (t != 0xffff && unk_2f20[t] == 3) {
            unk_aa = t;
        } else {
            s32 r = func_ov129_02294398();
            if (r != 0) {
                return r;
            }
        }
    }
    u32 cur = unk_aa;
    if (cur != 0xffff && unk_2f20[cur] == 3) {
        unk_b1 = 2;
        unk_2f00[0] = unk_aa;
        unk_1c0.func_ov002_02202fc8(6);
        func_ov129_02294360();
        return 2;
    }
    return 0;
}

s32 Unk_ov129_022965f8::func_ov129_0229421c() {
    u32 a = unk_b0;
    if (a != 0xff) {
        u32 b = unk_b3;
        if (b != a) {
            if (b == 0xff) {
                unk_b3 = a;
                return 1;
            }
            u32 t = func_ov129_02294598(b, a);
            if (t != 0xffff && unk_2f20[t] == 3) {
                unk_aa = t;
            } else if (func_ov129_02294664(unk_b0)) {
                unk_b3 = unk_b0;
                return 1;
            }
        }
    }
    u32 cur = unk_aa;
    if (cur != 0xffff) {
        u32 s = unk_2f20[cur];
        if (s != 2) {
            if (s == 3) {
                s32 i = func_ov129_022946dc();
                unk_2f00[i] = unk_aa;
                func_ov129_02294360();
                return 2;
            }
        } else {
            return func_ov129_022943ec();
        }
    }
    return 0;
}

s32 Unk_ov129_022965f8::func_ov129_022941c0() {
    s32 r = 0;
    switch (unk_b1) {
    case 0:
        r = func_ov129_02294398();
        break;
    case 1:
        r = func_ov129_022942d0();
        break;
    case 2:
        r = func_ov129_0229421c();
        break;
    }
    if (r == 1) {
        func_0200402c(0x880);
    }
    if (r == 1) {
        goto upd;
    }
    if (r == 2) {
    upd:
        func_ov129_022948a4(TRUE);
    }
    return r;
}

BOOL Unk_ov129_022965f8::func_ov129_022941ac(u32 mask) {
    if (unk_a4 & mask) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov129_022965f8::func_ov129_0229419c(u32 mask) { unk_a4 = unk_a4 | mask; }

void Unk_ov129_022965f8::func_ov129_0229418c(u32 mask) { unk_a4 = unk_a4 & ~mask; }

extern "C" void *data_ov129_02296578[2] = {(void *)_ZN18Unk_ov129_022965f819func_ov129_022953bcEv, 0};

extern "C" Unk_ov129_SceneEntry data_ov129_02296510 = {func_ov129_02296438, 0xad, 0xb1};

extern "C" void *data_ov129_02296568[2] = {(void *)_ZN18Unk_ov129_022965f819func_ov129_02295594Ev, 0};

extern "C" void *data_ov129_02296560[2] = {(void *)_ZN18Unk_ov129_022965f819func_ov129_0229609cEv, 0};

extern "C" void *data_ov129_02296558[2] = {(void *)_ZN18Unk_ov129_022965f819func_ov129_02295f40Ev, 0};

extern "C" const u8 data_ov129_02296498[4] = {4, 7, 6, 5};

extern "C" void *data_ov129_02296548[2] = {(void *)_ZN18Unk_ov129_022965f819func_ov129_02295494Ev, 0};

extern "C" const s32 data_ov129_022964d0[5] = {0, 4, -4, 0, 0};

extern "C" void *data_ov129_022965c8[2] = {(void *)_ZN18Unk_ov129_022965f819func_ov129_02295e48Ev, 0};

extern "C" void *data_ov129_02296570[2] = {(void *)_ZN18Unk_ov129_022965f819func_ov129_02295428Ev, 0};

extern "C" void *data_ov129_02296528[2] = {(void *)_ZN18Unk_ov129_022965f819func_ov129_022959c0Ev, 0};

extern "C" void *data_ov129_02296598[2] = {(void *)_ZN18Unk_ov129_022965f819func_ov129_02295980Ev, 0};

extern "C" void *data_ov129_02296580[2] = {(void *)_ZN18Unk_ov129_022965f819func_ov129_02295e70Ev, 0};

extern "C" const u8 data_ov129_0229649c[8] = {0, 0, 5, 0, 2, 5, 0, 0};

extern "C" u8 data_ov129_02296508[8] = {0x60, 0x60, 0xb8, 0x08, 0, 0, 0, 0};

extern "C" const u8 data_ov129_022964b4[8] = {3, 3, 3, 3, 1, 0, 0, 0};

extern "C" void *data_ov129_02296530[2] = {(void *)_ZN18Unk_ov129_022965f819func_ov129_02295604Ev, 0};

extern "C" void *data_ov129_02296590[2] = {(void *)_ZN18Unk_ov129_022965f819func_ov129_022952a4Ev, 0};

extern "C" void *data_ov129_02296520[2] = {(void *)_ZN18Unk_ov129_022965f819func_ov129_02295914Ev, 0};

extern "C" void *data_ov129_02296588[2] = {(void *)_ZN18Unk_ov129_022965f819func_ov129_0229570cEv, 0};

extern "C" u8 data_ov129_02296500[8] = {0x10, 0xf0, 0x80, 0x80, 0, 0, 0, 0};

extern "C" void *data_ov129_02296540[2] = {(void *)_ZN18Unk_ov129_022965f819func_ov129_022954c0Ev, 0};

extern "C" void *data_ov129_02296518[2] = {(void *)_ZN18Unk_ov129_022965f819func_ov129_02295654Ev, 0};

extern "C" void *data_ov129_022965b0[2] = {(void *)_ZN18Unk_ov129_022965f819func_ov129_02295248Ev, 0};
