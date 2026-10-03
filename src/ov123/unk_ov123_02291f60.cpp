#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef vfunc_08
#undef vfunc_14

extern "C" {
extern u8 data_021eca50;
extern u8 data_021ef5f0;
extern u8 data_021ef5ec;
extern u8 data_021f4770;
extern u8 data_021f4774;
extern u16 data_021f47d8[];
extern void *data_021f482c;

s32 func_0200402c(s32 a);
s32 func_0200140c();
s32 func_0200142c();
s32 func_020013cc(s32 a);
s32 func_0200151c(s32 a);
s32 func_0200152c(s32 a);
s32 func_02001710(s32 a, s32 b);
s32 func_02001608(s32 a, s32 b, s32 c, s32 d);
s32 func_02003f4c(s32 a);
s32 func_02003ff4(s32 a, s32 b);
s32 func_0200212c(s32 a);
s32 func_020020b8(s32 a);
s32 func_020013b4(s32 a, s32 b, s32 c);
s32 func_02003b6c(s32 a);
s32 MIi_CpuCopy32(void *a, void *b, u32 n);
BOOL func_ov002_0220125c(void *pad);
BOOL func_ov002_0220126c(void *pad);
BOOL func_ov002_0220127c(void *pad);
BOOL func_ov002_0220128c(void *pad);
void func_0206ee80(void *tbl, s32 x0, s32 y0, s32 x1, s32 y1, u32 to);
void func_02088730(s32 a, void *b, s32 c, s32 d, s32 e, s32 f, s32 g);
void func_02087e70(s32 a, void *b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h, s32 i, s32 j, s32 k, s32 l);
void func_0206f994(void *p, void *s, s32 n);
void func_0206ecf8(u32 v);
s32 func_0206ed50();
void func_02002438(void *p, s32 a, s32 b, s32 c, s32 d);
void func_02001f0c(void *p, void *q, s32 a, s32 b);
void *func_020716cc();
void *func_0209750c();
void *func_0206ed38();
void func_02004008(s32 a);
BOOL func_0206ef0c();
BOOL func_0206ef00();
s32 func_020026c4(void *, void *, u32, u32, u32, u32);
s32 func_0200261c(void *, void *, u32, u32, u32, u32);
BOOL func_020641b4(void *a, void *b, s32 c);
BOOL func_020024f0(void *p, u32 a, u32 b, u32 c);
void func_02002654(void *a, void *b, s32 c);
void func_020015b8(s32 a);
void func_02002398(s32 a, s32 b);
void func_0200226c(u32 n, u32 a, u32 b, u32 c);
void func_020021fc(s32 a, s32 b, s32 c);
void func_020021a0(s32 a);
void func_020013a4();
void func_02003f5c(s32 a);
void func_02094960();
void func_02094d3c();
s32 func_02094fb4();
BOOL func_02094bb4();
BOOL func_02094b9c();
void func_020ed188(void *p);
void *func_020ed174();

// methods of other modules' classes, called with the object first (mangled-name trick)
void *_ZN12Unk_020718a413func_020716d4Ei(void *self, s32 a);
s32 _ZN12Unk_02071c1c13func_02071c1cEj(void *self, void *p);
void *_ZN12Unk_02071c5c13func_02071c5cEv(void *self);
void *_ZN12Unk_02071c5c13func_02071c68Ej(void *self, void *p);
void *_ZN12Unk_02071e0413func_02071e04Ev(void *self);
void _ZN12Unk_02071e0413func_02071e3cEPv(void *self, void *p);
void *_ZN12Unk_02071e0413func_02071e58Ev(void *self);
void _ZN12Unk_02071ed013func_02071ff0Ev(void *self);
void _ZN12Unk_02071ed013func_0207200cEj(void *self, s32 a);
u8 _ZN12Unk_02071ed013func_0207202cEv(void *self);
void *_ZN12Unk_0208722413func_02087298Ev(void *self);
void *_ZN12Unk_0209865c13func_020986d4Ev(void *self);
u16 *_ZN12Unk_0209865c13func_02098714Ev(void *self);
u16 *_ZN12Unk_0209865c13func_0209872cEv(void *self);
void _ZN12Unk_020e45f813func_020b8670Ejhj(void *self, void *q, s32 a, s32 b);
void _ZN12Unk_020e45f813func_020b8714Ejhjjj(void *self, void *q, s32 a, s32 b, s32 c, s32 d);
BOOL _ZN12Unk_020e45f813func_020b86c0Ejhjj(void *self, void *a, u32 b, u32 c, u32 d);
void _ZN12Unk_020e45f813func_020b87d0Ev(void *self);
}

// Other modules' classes (methods called directly)
class Unk_ov092_02291ec8 {
public:
    void func_ov092_02291c5c();
    void func_ov092_02291ce4(s32 a, s32 b);
};

// Element at +0xb8, 0x40 bytes
class Unk_020e0488 {
public:
    Unk_020e0488();
    virtual ~Unk_020e0488();
    void func_0206fc44();
    void func_0206fb48(u32 a, u32 b, u32 c, u8 d, u8 e, s32 f);
    void func_0206fab4(s32 a, s32 b);
    u8 unk_04[0x3c];
};

// Element at +0xf8 (0x38 bytes each)
class Unk_020e4608 {
public:
    Unk_020e4608();
    u32 unk_00[0x38 / 4];
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
    void func_ov002_0220301c();
    void func_ov002_02203044();
    s32 func_ov002_0220306c();
    BOOL func_ov002_0220308c();
    void func_ov002_022030ac(u8 v);
    s32 func_ov002_022030b8(s32 idx);
    s32 func_ov002_022030f4(s32 idx);
    BOOL func_ov002_02203110(s32 a);
    BOOL func_ov002_0220314c(s32 idx, s32 x, s32 y);
    void func_ov002_02203458(s32 a);
};

// Menu list sub-object, 0x164 bytes
class Unk_ov002_022046cc : public Unk_ov002_02202fac {
public:
    Unk_ov002_022046cc();
    ~Unk_ov002_022046cc();
    void func_ov002_02203650();
    void func_ov002_02203698();
    void func_ov002_022036a4(s32 a);
    void func_ov002_02203900();
    u32 unk_00[0x164 / 4];
};

// Vtable 0x022044e4
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
    void func_ov002_0220085c(s32 a, s32 b);
    void func_ov002_02200874(s32 a, s32 b);
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

struct Unk_ov123_022958c0 {
    u16 unk_00;
    u16 a : 9;
    u16 b : 5;
    u16 c : 2;
    u16 unk_04;
    u16 unk_06;
};

struct Unk_ov123_02293010_Q {
    u8 a, b, c, d;
    Unk_ov123_02293010_Q() {}
};

struct Unk_ov123_SceneEntry {
    void *factory;
    u16 a;
    u16 b;
};

class Unk_ov123_022959c4;
typedef void (Unk_ov123_022959c4::*Unk_ov123_022959c4_Fn)();
extern "C" Unk_ov123_022959c4 *func_ov123_022952d4();

extern "C" {
extern const u8 data_ov123_02295344[13];
extern const u8 data_ov123_02295354[13];
extern const u8 data_ov123_02295364[13];
extern const u8 data_ov123_022953f4[36];
extern const u8 data_ov123_02295418[36];
extern const u8 data_ov123_0229543c[36];
extern const u8 data_ov123_02295460[36];
extern const u8 data_ov123_02295484[36];
extern const u8 data_ov123_022954a8[36];
extern const u8 data_ov123_022954cc[128];
extern const u16 data_ov123_02295374[16];
extern const u16 data_ov123_02295394[16];
extern const u16 data_ov123_022953b4[16];
extern const u16 data_ov123_022953d4[16];
extern const u16 data_ov123_0229554c[322];
extern u32 data_ov123_02295800[2];
extern u32 data_ov123_02295828[2];
extern u32 data_ov123_02295830[2];
extern u32 data_ov123_02295848[2];
extern u32 data_ov123_02295850[2];
extern u32 data_ov123_02295858[2];
extern u32 data_ov123_022958a8[2];
extern u32 data_ov123_022958b8[2];
extern u32 data_ov123_0229590c[4];
extern u32 data_ov123_0229591c[4];
extern u32 data_ov123_0229593c[4];
extern u32 data_ov123_0229594c[4];
extern u32 data_ov123_0229595c[4];
extern u32 data_ov123_0229596c[8];
extern u32 data_ov123_02295a24[28];
extern u32 data_ov123_02295a94[36];
extern u32 data_ov123_02295b24[38];
extern u16 data_ov123_02295840[4];
extern Unk_ov123_022958c0 data_ov123_022958c0;
extern u16 *data_ov123_0229592c[4];
extern void *data_ov123_0229598c[12];
extern void *data_ov123_02295900[3];
extern Unk_ov123_SceneEntry data_ov123_02295868;
}

// Vtable 0x022959c4, size 0x5168
class Unk_ov123_022959c4 : public Unk_ov002_022044e4 {
public:
    Unk_ov123_022959c4() : unk_b8(), unk_f8(), unk_1a0(), unk_5004() {}

    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_24();
    virtual BOOL vfunc_4c();
    virtual BOOL vfunc_50();
    virtual BOOL vfunc_54();
    virtual BOOL vfunc_58();
    virtual BOOL vfunc_5c();

    void func_ov123_02291ff0(u32 mask);
    void func_ov123_02292000(u32 mask);
    BOOL func_ov123_02292010(u32 mask);
    void func_ov123_02292024();
    void func_ov123_02292044();
    void func_ov123_0229209c();
    void func_ov123_02292238();
    BOOL func_ov123_02292280();
    void func_ov123_022922f0();
    void func_ov123_02292314();
    void func_ov123_02292340();
    BOOL func_ov123_02292370(s32 unused, s32 flag);
    BOOL func_ov123_0229249c(void *pad);
    void func_ov123_022925c4();
    void func_ov123_02292660();
    void func_ov123_02292680();
    void func_ov123_022926a0();
    void func_ov123_022926c0();
    u32 func_ov123_022926e4();
    u32 func_ov123_022926f4();
    void func_ov123_02292704();
    u8 *func_ov123_0229275c();
    void func_ov123_02292784();
    void func_ov123_022927e8();
    void func_ov123_02292844();
    void func_ov123_02292864();
    void func_ov123_02292880();
    void func_ov123_022928c4();
    void func_ov123_022928fc();
    void func_ov123_02292a50(s32 x, s32 y);
    void func_ov123_02292a88(s32 x, s32 y);
    void func_ov123_02292b04(s32 x, s32 y);
    void func_ov123_02292b3c(s32 x, s32 y, u32 i);
    void func_ov123_02292ba4();
    void func_ov123_02292bb0();
    void func_ov123_02292be0();
    void func_ov123_02292c04(u32 v);
    void func_ov123_02292c34(u32 v);
    void func_ov123_02292c70();
    void func_ov123_02292cb4(u32 a, u32 b);
    void func_ov123_02292cfc();
    void func_ov123_02292d20();
    void func_ov123_02292df4();
    void func_ov123_02292e78();
    void func_ov123_02292ef4(u8 x, u8 y);
    void func_ov123_02292f88(s32 x, s32 y, u32 a, u32 idx);
    u32 func_ov123_02292ff8(u32 v, u32 s, u32 t);
    void func_ov123_02293010(u8 x, u8 y, u32 tgt);
    s32 func_ov123_02293190(s32 x, s32 y, s32 v);
    s32 func_ov123_022931e8(s32 x, s32 y, s32 v);
    s32 func_ov123_02293240(s32 x0, s32 x1, s32 y, s32 v);
    u8 func_ov123_02293298(u8 x, u8 y);
    void func_ov123_022932d4(u32 c);
    void func_ov123_02293344(s32 v);
    void func_ov123_0229336c(s32 x0, s32 y0, s32 x1, u8 y1, u32 c, u32 fill);
    void func_ov123_022934d4(u8 x0, u8 y0, u8 x1, u8 y1, u32 c);
    u32 func_ov123_0229353c(u32 x0, u32 y0, u32 x1, u8 y1, u32 c, s32 t);
    u32 func_ov123_0229363c(u8 x, u8 y, u32 c, s32 t, s32 z);
    u32 func_ov123_02293784(u8 x, u8 y, u32 c);
    void func_ov123_022937e0();
    s32 func_ov123_02293830(s32 i);
    s32 func_ov123_02293838(s32 i);
    void func_ov123_02293840();
    u8 func_ov123_02293964();
    u8 func_ov123_0229397c(s32 x, s32 y);
    void func_ov123_02293a98(u8 a);
    void func_ov123_02293b0c(u8 v);
    void func_ov123_02293b20();
    void func_ov123_02293b48();
    void func_ov123_02293b7c();
    void func_ov123_02293bac();
    void func_ov123_02293bd0();
    void func_ov123_02293cb0();
    void func_ov123_02293ce0();
    void func_ov123_02293d08();
    void func_ov123_02293d28();
    void func_ov123_02293d68();
    void func_ov123_02293dc0();
    void func_ov123_02293eac();
    void func_ov123_02293f10(u8 a, u8 b);
    void func_ov123_02293f3c();
    void func_ov123_02293f70();
    void func_ov123_02293fa4();
    void func_ov123_02293fc4();
    void func_ov123_02293fe8();
    void func_ov123_02294000();
    void func_ov123_02294020();
    void func_ov123_02294074();
    void func_ov123_0229408c();
    void func_ov123_022940f8();
    void func_ov123_02294120();
    void func_ov123_0229415c();
    void func_ov123_02294188();
    void func_ov123_02294240();
    void func_ov123_02294290();
    void func_ov123_02294360();
    void func_ov123_02294448();
    void func_ov123_02294518();
    void func_ov123_02294614();
    void func_ov123_022946c4();
    void func_ov123_02294740();
    void func_ov123_022947a0();
    void func_ov123_02294804();
    void func_ov123_022948a8();
    void func_ov123_022948f4();
    void func_ov123_02294908();
    void func_ov123_0229492c();
    void func_ov123_02294934();
    void func_ov123_02294950();
    void func_ov123_02294984();
    void func_ov123_022949e8();
    void func_ov123_02294a20();
    void func_ov123_02294a64();
    void func_ov123_02294abc();
    void func_ov123_02294b18();
    void func_ov123_02294b5c();
    void func_ov123_02294bec();
    void func_ov123_02294c80();
    void func_ov123_02294cb0();
    void func_ov123_02294d00();
    void func_ov123_02294d40();
    void func_ov123_02294d5c();
    void func_ov123_02294dec();
    void func_ov123_02294e14();
    void func_ov123_02294ef0();

    /* 0x91 */ u8 unk_91[3];
    /* 0x94 */ u32 unk_94;
    /* 0x98 */ s32 unk_98;
    /* 0x9c */ u32 unk_9c;
    /* 0xa0 */ u8 unk_a0;
    /* 0xa1 */ u8 unk_a1;
    /* 0xa2 */ u8 unk_a2;
    /* 0xa3 */ u8 unk_a3;
    /* 0xa4 */ u8 unk_a4;
    /* 0xa5 */ u8 unk_a5;
    /* 0xa6 */ u8 unk_a6;
    /* 0xa7 */ volatile u8 unk_a7;
    /* 0xa8 */ u8 unk_a8;
    /* 0xa9 */ u8 unk_a9;
    /* 0xaa */ u8 unk_aa;
    /* 0xab */ u8 unk_ab;
    /* 0xac */ u8 unk_ac;
    /* 0xad */ u8 unk_ad;
    /* 0xae */ u8 unk_ae;
    /* 0xaf */ u8 unk_af;
    /* 0xb0 */ u8 unk_b0;
    /* 0xb1 */ u8 unk_b1;
    /* 0xb2 */ u8 unk_b2;
    /* 0xb3 */ u8 unk_b3;
    /* 0xb4 */ u8 unk_b4;
    /* 0xb5 */ u8 unk_b5;
    /* 0xb6 */ u8 unk_b6[2];
    /* 0xb8 */ Unk_020e0488 unk_b8[1];
    /* 0xf8 */ Unk_020e4608 unk_f8[3];
    /* 0x1a0 */ Unk_ov002_02204614 unk_1a0;
    /* 0x204 */ u8 unk_204[0xa04 - 0x204];
    /* 0xa04 */ u8 unk_a04[0x200];
    /* 0xc04 */ u8 unk_c04[0x200];
    /* 0xe04 */ u8 unk_e04[0x2e04 - 0xe04];
    /* 0x2e04 */ u8 unk_2e04[0x200];
    /* 0x3004 */ u8 unk_3004[0x5004 - 0x3004];
    /* 0x5004 */ Unk_ov002_022046cc unk_5004;
};

// ptmf constants named so their order can be controlled
extern "C" {
void _ZN18Unk_ov123_022959c419func_ov123_02294becEv();
extern void *data_ov123_022957e0[2];
void _ZN18Unk_ov123_022959c419func_ov123_02294d40Ev();
extern void *data_ov123_022957e8[2];
void _ZN18Unk_ov123_022959c419func_ov123_022946c4Ev();
extern void *data_ov123_022957f0[2];
void _ZN18Unk_ov123_022959c419func_ov123_02294d00Ev();
extern void *data_ov123_022957f8[2];
void _ZN18Unk_ov123_022959c419func_ov123_022940f8Ev();
extern void *data_ov123_02295808[2];
void _ZN18Unk_ov123_022959c419func_ov123_02294e14Ev();
extern void *data_ov123_02295810[2];
void _ZN18Unk_ov123_022959c419func_ov123_0229408cEv();
extern void *data_ov123_02295818[2];
void _ZN18Unk_ov123_022959c419func_ov123_02294decEv();
extern void *data_ov123_02295820[2];
void _ZN18Unk_ov123_022959c419func_ov123_02294518Ev();
extern void *data_ov123_02295838[2];
void _ZN18Unk_ov123_022959c419func_ov123_02294c80Ev();
extern void *data_ov123_02295860[2];
void _ZN18Unk_ov123_022959c419func_ov123_02294448Ev();
extern void *data_ov123_02295870[2];
void _ZN18Unk_ov123_022959c419func_ov123_02294d5cEv();
extern void *data_ov123_02295878[2];
void _ZN18Unk_ov123_022959c419func_ov123_02294120Ev();
extern void *data_ov123_02295880[2];
void _ZN18Unk_ov123_022959c419func_ov123_02294188Ev();
extern void *data_ov123_02295888[2];
void _ZN18Unk_ov123_022959c419func_ov123_02294240Ev();
extern void *data_ov123_02295890[2];
void _ZN18Unk_ov123_022959c419func_ov123_02294290Ev();
extern void *data_ov123_02295898[2];
void _ZN18Unk_ov123_022959c419func_ov123_02294360Ev();
extern void *data_ov123_022958a0[2];
void _ZN18Unk_ov123_022959c419func_ov123_0229415cEv();
extern void *data_ov123_022958b0[2];
void _ZN18Unk_ov123_022959c419func_ov123_02294740Ev();
extern void *data_ov123_022958c8[2];
void _ZN18Unk_ov123_022959c419func_ov123_02294614Ev();
extern void *data_ov123_022958d0[2];
void _ZN18Unk_ov123_022959c419func_ov123_02294cb0Ev();
extern void *data_ov123_022958d8[2];
void _ZN18Unk_ov123_022959c419func_ov123_02294a64Ev();
extern void *data_ov123_022958e0[2];
void _ZN18Unk_ov123_022959c419func_ov123_02294abcEv();
extern void *data_ov123_022958e8[2];
void _ZN18Unk_ov123_022959c419func_ov123_02294b18Ev();
extern void *data_ov123_022958f0[2];
void _ZN18Unk_ov123_022959c419func_ov123_02294b5cEv();
extern void *data_ov123_022958f8[2];
}

static inline BOOL Unk_ov123_022946c4_Both() {
    if (data_021f4770 != 0 && data_021f4774 != 0) {
        return TRUE;
    }
    return FALSE;
}

static inline BOOL R1(u16 *p, u32 lo, u32 hi)
{
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) {
        r = TRUE;
    }
    return r;
}extern "C" void *data_ov123_022958d8[2] = {(void *)_ZN18Unk_ov123_022959c419func_ov123_02294cb0Ev, 0};

extern "C" void *data_ov123_02295808[2] = {(void *)_ZN18Unk_ov123_022959c419func_ov123_022940f8Ev, 0};

extern "C" void *data_ov123_02295878[2] = {(void *)_ZN18Unk_ov123_022959c419func_ov123_02294d5cEv, 0};

extern "C" void *data_ov123_02295860[2] = {(void *)_ZN18Unk_ov123_022959c419func_ov123_02294c80Ev, 0};

extern "C" Unk_ov123_SceneEntry data_ov123_02295868 = {(void *)func_ov123_022952d4, 0xa9, 0xad};

extern "C" void *data_ov123_02295890[2] = {(void *)_ZN18Unk_ov123_022959c419func_ov123_02294240Ev, 0};

extern "C" void *data_ov123_02295880[2] = {(void *)_ZN18Unk_ov123_022959c419func_ov123_02294120Ev, 0};

extern "C" u32 data_ov123_0229594c[4] = {0x400000f0, 0x000040c0, 0x41f800f8, 0xffff40c2};

extern "C" u32 data_ov123_0229596c[8] = {0x718d0040, 0x0000410e, 0x617e0040, 0x0000410e, 0x518d0030, 0x0000410e, 0x417e0030, 0xffff410e};

extern "C" void *data_ov123_02295820[2] = {(void *)_ZN18Unk_ov123_022959c419func_ov123_02294decEv, 0};

extern "C" const u16 data_ov123_0229554c[322] = {0, 6, 0x000c, 0x0012, 0x0019, 0x001f, 0x0025, 0x002b, 0x0031, 0x0038, 0x003e, 0x0044, 0x004a, 0x0050, 0x0056, 0x005c, 0x0061, 0x0067, 0x006d, 0x0073, 0x0078, 0x007e, 0x0083, 0x0088, 0x008e, 0x0093, 0x0098, 0x009d, 0x00a2, 0x00a7, 0x00ab, 0x00b0, 0x00b5, 0x00b9, 0x00bd, 0x00c1, 0x00c5, 0x00c9, 0x00cd, 0x00d1, 0x00d4, 0x00d8, 0x00db, 0x00de, 0x00e1, 0x00e4, 0x00e7, 0x00ea, 0x00ec, 0x00ee, 0x00f1, 0x00f3, 0x00f4, 0x00f6, 0x00f8, 0x00f9, 0x00fb, 0x00fc, 0x00fd, 0x00fe, 0x00fe, 0x00ff, 0x00ff, 0x00ff, 0x0100, 0x00ff, 0x00ff, 0x00ff, 0x00fe, 0x00fe, 0x00fd, 0x00fc, 0x00fb, 0x00f9, 0x00f8, 0x00f6, 0x00f4, 0x00f3, 0x00f1, 0x00ee, 0x00ec, 0x00ea, 0x00e7, 0x00e4, 0x00e1, 0x00de, 0x00db, 0x00d8, 0x00d4, 0x00d1, 0x00cd, 0x00c9, 0x00c5, 0x00c1, 0x00bd, 0x00b9, 0x00b5, 0x00b0, 0x00ab, 0x00a7, 0x00a2, 0x009d, 0x0098, 0x0093, 0x008e, 0x0088, 0x0083, 0x007e, 0x0078, 0x0073, 0x006d, 0x0067, 0x0061, 0x005c, 0x0056, 0x0050, 0x004a, 0x0044, 0x003e, 0x0038, 0x0031, 0x002b, 0x0025, 0x001f, 0x0019, 0x0012, 0x000c, 6, 0, 0xfffa, 0xfff4, 0xffee, 0xffe7, 0xffe1, 0xffdb, 0xffd5, 0xffcf, 0xffc8, 0xffc2, 0xffbc, 0xffb6, 0xffb0, 0xffaa, 0xffa4, 0xff9f, 0xff99, 0xff93, 0xff8d, 0xff88, 0xff82, 0xff7d, 0xff78, 0xff72, 0xff6d, 0xff68, 0xff63, 0xff5e, 0xff59, 0xff55, 0xff50, 0xff4b, 0xff47, 0xff43, 0xff3f, 0xff3b, 0xff37, 0xff33, 0xff2f, 0xff2c, 0xff28, 0xff25, 0xff22, 0xff1f, 0xff1c, 0xff19, 0xff16, 0xff14, 0xff12, 0xff0f, 0xff0d, 0xff0c, 0xff0a, 0xff08, 0xff07, 0xff05, 0xff04, 0xff03, 0xff02, 0xff02, 0xff01, 0xff01, 0xff01, 0xff00, 0xff01, 0xff01, 0xff01, 0xff02, 0xff02, 0xff03, 0xff04, 0xff05, 0xff07, 0xff08, 0xff0a, 0xff0c, 0xff0d, 0xff0f, 0xff12, 0xff14, 0xff16, 0xff19, 0xff1c, 0xff1f, 0xff22, 0xff25, 0xff28, 0xff2c, 0xff2f, 0xff33, 0xff37, 0xff3b, 0xff3f, 0xff43, 0xff47, 0xff4b, 0xff50, 0xff55, 0xff59, 0xff5e, 0xff63, 0xff68, 0xff6d, 0xff72, 0xff78, 0xff7d, 0xff82, 0xff88, 0xff8d, 0xff93, 0xff99, 0xff9f, 0xffa4, 0xffaa, 0xffb0, 0xffb6, 0xffbc, 0xffc2, 0xffc8, 0xffcf, 0xffd5, 0xffdb, 0xffe1, 0xffe7, 0xffee, 0xfff4, 0xfffa, 0, 6, 0x000c, 0x0012, 0x0019, 0x001f, 0x0025, 0x002b, 0x0031, 0x0038, 0x003e, 0x0044, 0x004a, 0x0050, 0x0056, 0x005c, 0x0061, 0x0067, 0x006d, 0x0073, 0x0078, 0x007e, 0x0083, 0x0088, 0x008e, 0x0093, 0x0098, 0x009d, 0x00a2, 0x00a7, 0x00ab, 0x00b0, 0x00b5, 0x00b9, 0x00bd, 0x00c1, 0x00c5, 0x00c9, 0x00cd, 0x00d1, 0x00d4, 0x00d8, 0x00db, 0x00de, 0x00e1, 0x00e4, 0x00e7, 0x00ea, 0x00ec, 0x00ee, 0x00f1, 0x00f3, 0x00f4, 0x00f6, 0x00f8, 0x00f9, 0x00fb, 0x00fc, 0x00fd, 0x00fe, 0x00fe, 0x00ff, 0x00ff, 0x00ff, 0x003f, 0};

extern "C" const u16 data_ov123_02295374[16] = {0, 0, 0, 0x0fc0, 0x1fe0, 0x3870, 0x3030, 0x3030, 0x3030, 0x3030, 0x3870, 0x1fe0, 0x0fc0, 0, 0, 0};

extern "C" const u16 data_ov123_02295394[16] = {0, 0, 0, 0x1ff8, 0x1ff8, 0x1818, 0x1818, 0x1818, 0x1818, 0x1818, 0x1818, 0x1ff8, 0x1ff8, 0, 0, 0};

extern "C" void *data_ov123_022958a0[2] = {(void *)_ZN18Unk_ov123_022959c419func_ov123_02294360Ev, 0};

extern "C" void *data_ov123_022957e8[2] = {(void *)_ZN18Unk_ov123_022959c419func_ov123_02294d40Ev, 0};

extern "C" u16 data_ov123_02295840[4] = {0, 0x0010, 8, 0x0018};

extern "C" u32 data_ov123_02295828[2] = {0x818840e0, 0xffff510a};

extern "C" void *data_ov123_022958b0[2] = {(void *)_ZN18Unk_ov123_022959c419func_ov123_0229415cEv, 0};

extern "C" u32 data_ov123_0229591c[4] = {0x81a880b0, 0x000050f9, 0x41a800d0, 0xffff5179};

extern "C" const u8 data_ov123_0229543c[36] = {0, 0, 1, 2, 3, 4, 6, 6, 7, 8, 9, 0x0a, 0x0c, 0x0d, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x1d, 0x1e, 0, 0, 0, 0, 0};

extern "C" u32 data_ov123_022958b8[2] = {0x41f800f8, 0xffff4102};

extern "C" void *data_ov123_02295810[2] = {(void *)_ZN18Unk_ov123_022959c419func_ov123_02294e14Ev, 0};

extern "C" Unk_ov123_022958c0 data_ov123_022958c0 = {0xf8, 0x1f8, 0, 1, 0x40ca, 0xffff};

extern "C" const u16 data_ov123_022953d4[16] = {0, 0, 0, 0x0100, 0x0100, 0x0380, 0x3ff8, 0x0fe0, 0x07c0, 0x07c0, 0x0ee0, 0x0c60, 0x1010, 0, 0, 0};

extern "C" void *data_ov123_022957e0[2] = {(void *)_ZN18Unk_ov123_022959c419func_ov123_02294becEv, 0};

extern "C" void *data_ov123_022957f0[2] = {(void *)_ZN18Unk_ov123_022959c419func_ov123_022946c4Ev, 0};

extern "C" void *data_ov123_022957f8[2] = {(void *)_ZN18Unk_ov123_022959c419func_ov123_02294d00Ev, 0};

extern "C" u32 data_ov123_02295a94[36] = {0x60084028, 0x000040f4, 0x400840a0, 0x000040f4, 0x51b88008, 0x00004115, 0x51b880e8, 0x00004115, 0x51b880c8, 0x00004115, 0x51b880a8, 0x00004115, 0x71b84028, 0x000040f5, 0x61d84028, 0x000040f4, 0x61f84028, 0x000040f4, 0x60284028, 0x000040f5, 0x40408008, 0x00004115, 0x404080e8, 0x00004115, 0x51b840a0, 0x000040f5, 0x41d840a0, 0x000040f4, 0x41f840a0, 0x000040f4, 0x404080c8, 0x00004115, 0x404080a8, 0x00004115, 0x402840a0, 0xffff40f5};

extern "C" u32 data_ov123_02295a24[28] = {0x50428008, 0x00004115, 0x70424046, 0x000040f5, 0x50428026, 0x00004115, 0x504280e8, 0x00004115, 0x504280c8, 0x00004115, 0x504280a9, 0x00004115, 0x504240a1, 0x000040f5, 0x40788008, 0x00004115, 0x60604046, 0x000040f5, 0x40788026, 0x00004115, 0x407880e8, 0x00004115, 0x407880c8, 0x00004115, 0x407880a9, 0x00004115, 0x406040a1, 0xffff40f5};

extern "C" void *data_ov123_022958f8[2] = {(void *)_ZN18Unk_ov123_022959c419func_ov123_02294b5cEv, 0};

extern "C" u32 data_ov123_02295b24[38] = {0x61984047, 0x000040f4, 0x11808038, 0x00004115, 0x01a88022, 0x00004115, 0x40234031, 0x000040f5, 0x40044031, 0x000040f4, 0x41e44031, 0x000040f4, 0x41c44031, 0x000040f4, 0x41ae4031, 0x000040f4, 0x01a8002e, 0x00004115, 0x01a0401a, 0x000040f7, 0x5180401a, 0x000040f5, 0x61e44047, 0x000040f4, 0x61c44047, 0x000040f4, 0x51808022, 0x00004115, 0x003b8038, 0x00004115, 0x60044047, 0x000040f4, 0x71804047, 0x000040f5, 0x61a44047, 0x000040f4, 0x60234047, 0xffff40f5};

extern "C" void *data_ov123_022958f0[2] = {(void *)_ZN18Unk_ov123_022959c419func_ov123_02294b18Ev, 0};

extern "C" void *data_ov123_022958e8[2] = {(void *)_ZN18Unk_ov123_022959c419func_ov123_02294abcEv, 0};

extern "C" void *data_ov123_022958e0[2] = {(void *)_ZN18Unk_ov123_022959c419func_ov123_02294a64Ev, 0};

extern "C" u32 data_ov123_02295848[2] = {0x018c0022, 0xffff4129};

extern "C" void *data_ov123_022958d0[2] = {(void *)_ZN18Unk_ov123_022959c419func_ov123_02294614Ev, 0};

extern "C" void *data_ov123_022958c8[2] = {(void *)_ZN18Unk_ov123_022959c419func_ov123_02294740Ev, 0};

extern "C" void *data_ov123_02295900[3] = {data_ov123_02295a24, data_ov123_02295b24, data_ov123_02295a94};

extern "C" const u8 data_ov123_022954a8[36] = {0, 1, 2, 3, 4, 5, 0, 1, 2, 3, 4, 5, 0x0c, 0x0d, 0x0e, 0x0e, 0x0f, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1e, 0x1e, 0, 0, 0, 0, 0};

extern "C" u32 data_ov123_0229595c[4] = {0x400000f0, 0x000040c0, 0x41f800f8, 0xffff40c6};

extern "C" const u8 data_ov123_022953f4[36] = {0xd5, 0xd5, 0xd5, 0xd5, 0xd5, 0xd5, 0xef, 0xef, 0xef, 0xef, 0xef, 0xef, 0x23, 0x22, 0x0e, 0x1a, 0x26, 0x32, 0x3e, 0x4a, 0x56, 0x62, 0x6e, 0x7a, 0x86, 0x92, 0x9e, 0xaa, 0xb6, 0xc4, 0x74, 0x62, 0xc2, 0x80, 0, 0};

extern "C" const u8 data_ov123_02295418[36] = {0x13, 0x2b, 0x43, 0x63, 0x7b, 0x9b, 0x13, 0x2b, 0x43, 0x63, 0x7b, 0x93, 0x86, 0x0e, 0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 0xb6, 0xb6, 0xa9, 0xa9, 0x50, 0, 0};

extern "C" void *data_ov123_02295898[2] = {(void *)_ZN18Unk_ov123_022959c419func_ov123_02294290Ev, 0};

extern "C" u32 data_ov123_0229590c[4] = {0x018f0022, 0x00004129, 0x01880022, 0xffff4128};

extern "C" u32 data_ov123_02295830[2] = {0x400000f0, 0xffff4110};

extern "C" const u16 data_ov123_022953b4[16] = {0, 0, 0, 0, 0x1c70, 0x3ef8, 0x3ff8, 0x3ff8, 0x3ff8, 0x1ff0, 0x0fe0, 0x07c0, 0x0100, 0, 0, 0};

extern "C" void *data_ov123_02295818[2] = {(void *)_ZN18Unk_ov123_022959c419func_ov123_0229408cEv, 0};

extern "C" const u8 data_ov123_02295354[13] = {0x1b, 0x1b, 0x1b, 0x1b, 0x1b, 0x1b, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 4};

extern "C" const u8 data_ov123_02295460[36] = {6, 7, 8, 9, 0x0a, 0x0b, 6, 7, 8, 9, 0x0a, 0x0b, 0x0c, 0, 0x0f, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1d, 0x1d, 0, 0, 0, 0, 0};

extern "C" u32 data_ov123_0229593c[4] = {0x400000f0, 0x000040c0, 0x41f800f8, 0xffff40c4};

extern "C" u32 data_ov123_02295858[2] = {0x41f800f8, 0xffff4100};

extern "C" u32 data_ov123_02295850[2] = {0x400000f0, 0xffff40cc};

extern "C" u32 data_ov123_02295800[2] = {0x400000f0, 0xffff40c8};

extern "C" const u8 data_ov123_022954cc[128] = {0, 0, 0x11, 0x11, 0x11, 0x11, 0, 0, 0, 0, 0x11, 0x11, 0x11, 0x11, 0, 0, 0, 0, 0x10, 0x11, 0x11, 1, 0, 0, 0, 0, 0, 0x11, 0x11, 0, 0, 0, 0x11, 0, 0, 0, 0, 0, 0, 0x11, 0x11, 1, 0, 0, 0, 0, 0x10, 0x11, 0x11, 0x11, 0, 0, 0, 0, 0x11, 0x11, 0x11, 0x11, 0, 0, 0, 0, 0x11, 0x11, 0x11, 0x11, 0, 0, 0, 0, 0x11, 0x11, 0x11, 0x11, 0, 0, 0, 0, 0x11, 0x11, 0x11, 1, 0, 0, 0, 0, 0x10, 0x11, 0x11, 0, 0, 0, 0, 0, 0, 0x11, 0, 0, 0, 0x11, 0x11, 0, 0, 0, 0, 0, 0x10, 0x11, 0x11, 1, 0, 0, 0, 0, 0x11, 0x11, 0x11, 0x11, 0, 0, 0, 0, 0x11, 0x11, 0x11, 0x11, 0, 0};

extern "C" const u8 data_ov123_02295364[13] = {1, 4, 7, 0x0b, 0x0e, 0x12, 1, 4, 7, 0x0b, 0x0e, 0x11, 0x10};

extern "C" void *data_ov123_02295870[2] = {(void *)_ZN18Unk_ov123_022959c419func_ov123_02294448Ev, 0};

extern "C" const u8 data_ov123_02295344[13] = {0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 1};

extern "C" void *data_ov123_02295888[2] = {(void *)_ZN18Unk_ov123_022959c419func_ov123_02294188Ev, 0};

extern "C" u16 *data_ov123_0229592c[4] = {(u16 *)data_ov123_022953b4, (u16 *)data_ov123_022953d4, (u16 *)data_ov123_02295374, (u16 *)data_ov123_02295394};

extern "C" const u8 data_ov123_02295484[36] = {1, 2, 3, 4, 5, 0x1d, 7, 8, 9, 0x0a, 0x0b, 0x1d, 0x0e, 0x0c, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1d, 0x1e, 0, 0, 0, 0, 0};

extern "C" Unk_ov123_022959c4 *func_ov123_022952d4() { return new Unk_ov123_022959c4(); }

BOOL Unk_ov123_022959c4::vfunc_00() {
    func_ov123_02294984();
    unk_8c = 0;
    func_ov002_02200a60(0);
    return TRUE;
}

BOOL Unk_ov123_022959c4::vfunc_0c() {
    ((Unk_ov092_02291ec8 *)func_020ed174())->func_ov092_02291c5c();
    func_ov123_02294950();
    return TRUE;
}

BOOL Unk_ov123_022959c4::vfunc_24() {
    if (func_0206ef00()) {
        if (unk_ac == 2) {
            if (!func_ov123_02292010(0x100)) {
                func_ov123_02292a88(unk_af, unk_b0);
            }
        } else {
            unk_1a0.func_ov002_02202844();
        }
    }
    if (func_ov123_02292010(0x100)) {
        func_ov123_022928fc();
    }
    unk_5004.func_ov002_022036a4(func_ov002_02200920());
    if (func_ov123_02292010(1)) {
        s32 y = unk_98 + (unk_94 + 0x60);
        if (func_0206ef00()) {
            func_02088730(1, (void *)data_ov123_02295828, 0x80, y, -1, -1, 0);
            func_02087e70(1, (void *)data_ov123_0229591c, 0x80, y, -1, -1, 0x1000, 0x1000, 0, -1, 0, 0);
        }
        func_02087e70(1, (void *)data_ov123_0229596c, unk_a3 + 0x80, y, -1, 2, 0x1000, 0x1000, 0, -1, 0, 0);
        if (unk_a1 < 9) {
            func_02087e70(1, (void *)data_ov123_02295848, 0x80, y, -1, 2, 0x1000, 0x1000, 0, -1, 0, 0);
        } else {
            func_02087e70(1, (void *)data_ov123_0229590c, 0x80, y, -1, 2, 0x1000, 0x1000, 0, -1, 0, 0);
        }
        if (func_0206ef00()) {
            func_02087e70(1, (void *)((u32 *)data_ov123_02295900)[unk_ac], 0x80, y, -1, -1, 0x1000, 0x1000, 0, -1, 0, 0);
        }
    }
    return TRUE;
}

BOOL Unk_ov123_022959c4::vfunc_4c() {
    static Unk_ov123_022959c4_Fn tbl[12] = {
        *(Unk_ov123_022959c4_Fn *)data_ov123_02295810,
        *(Unk_ov123_022959c4_Fn *)data_ov123_02295820,
        *(Unk_ov123_022959c4_Fn *)data_ov123_02295878,
        *(Unk_ov123_022959c4_Fn *)data_ov123_022957e8,
        *(Unk_ov123_022959c4_Fn *)data_ov123_022957f8,
        *(Unk_ov123_022959c4_Fn *)data_ov123_022958d8,
        *(Unk_ov123_022959c4_Fn *)data_ov123_02295860,
        *(Unk_ov123_022959c4_Fn *)data_ov123_022957e0,
        *(Unk_ov123_022959c4_Fn *)data_ov123_022958f8,
        *(Unk_ov123_022959c4_Fn *)data_ov123_022958f0,
        *(Unk_ov123_022959c4_Fn *)data_ov123_022958e8,
        *(Unk_ov123_022959c4_Fn *)data_ov123_022958e0};
    func_ov123_02294908();
    (this->*tbl[unk_8c])();
    func_ov123_022948f4();
    return TRUE;
}extern "C" void *data_ov123_02295838[2] = {(void *)_ZN18Unk_ov123_022959c419func_ov123_02294518Ev, 0};

extern "C" u32 data_ov123_022958a8[2] = {0x01fc00fc, 0xffff4108};

void Unk_ov123_022959c4::func_ov123_02294ef0() {
    static Unk_ov123_022959c4_Fn tbl[13] = {
        *(Unk_ov123_022959c4_Fn *)data_ov123_022958c8,
        *(Unk_ov123_022959c4_Fn *)data_ov123_022957f0,
        *(Unk_ov123_022959c4_Fn *)data_ov123_022958d0,
        *(Unk_ov123_022959c4_Fn *)data_ov123_02295838,
        *(Unk_ov123_022959c4_Fn *)data_ov123_02295870,
        *(Unk_ov123_022959c4_Fn *)data_ov123_022958a0,
        *(Unk_ov123_022959c4_Fn *)data_ov123_02295898,
        *(Unk_ov123_022959c4_Fn *)data_ov123_02295890,
        *(Unk_ov123_022959c4_Fn *)data_ov123_02295888,
        *(Unk_ov123_022959c4_Fn *)data_ov123_022958b0,
        *(Unk_ov123_022959c4_Fn *)data_ov123_02295880,
        *(Unk_ov123_022959c4_Fn *)data_ov123_02295808,
        *(Unk_ov123_022959c4_Fn *)data_ov123_02295818};
    (this->*tbl[unk_8d])();
}

BOOL Unk_ov123_022959c4::vfunc_50() {
    func_ov123_02294934();
    func_ov123_02294ef0();
    func_ov123_0229492c();
    return TRUE;
}

BOOL Unk_ov123_022959c4::vfunc_54() { return TRUE; }

BOOL Unk_ov123_022959c4::vfunc_58() { return TRUE; }

BOOL Unk_ov123_022959c4::vfunc_5c() {
    func_020ed188(this);
    return TRUE;
}

void Unk_ov123_022959c4::func_ov123_02294e14() {
    func_ov123_022948a8();
    func_ov123_02294804();
    unk_a4 = 0x22;
    func_ov123_02292c34(0);
    func_ov123_022947a0();
    switch (func_0206ed50()) {
    case 2:
        func_ov123_02293eac();
        break;
    case 3:
        func_ov123_02293d68();
        break;
    }
    func_ov123_02293d08();
    func_ov123_02293bd0();
    func_ov123_02293ce0();
    func_ov123_02293bac();
    unk_5004.func_ov002_02203650();
    func_ov002_022008e0(0xb, 4, 0, 0x30);
    func_020020b8(6);
    func_020020b8(4);
    func_ov123_02292314();
    func_ov123_02294a20();
    func_ov123_02292000(1);
    func_ov002_02200a50(1);
}

void Unk_ov123_022959c4::func_ov123_02294dec() {
    if (func_ov002_02200908(0)) {
        func_ov002_02200a60(2);
        func_ov123_02294000();
    }
    func_ov123_02294a20();
}

// ---- 0x02294d5c ----
void Unk_ov123_022959c4::func_ov123_02294d5c() {
    if (!func_ov123_02292010(0x8000) && !func_ov123_02292010(0x10000)) {
        func_ov002_02200a50(4);
        func_ov123_02294d00();
        return;
    }
    void *p = func_0209750c();
    if (func_ov123_02292010(0x8000)) {
        _ZN12Unk_0209865c13func_0209872cEv(p);
        if (!func_02094bb4()) return;
        func_ov123_02291ff0(0x8000);
    }
    if (func_ov123_02292010(0x10000)) {
        _ZN12Unk_0209865c13func_02098714Ev(p);
        if (!func_02094b9c()) return;
        func_ov123_02291ff0(0x8000);
    }
    func_ov002_02200a50(3);
}

void Unk_ov123_022959c4::func_ov123_02294d40() {
    if (func_02094fb4() == 0) {
        func_ov002_02200a50(4);
    }
}

void Unk_ov123_022959c4::func_ov123_02294d00() {
    func_ov123_02292024();
    ((Unk_ov092_02291ec8 *)((void *(*)(void *))func_020ed174)(this))->func_ov092_02291ce4(0x44, 1);
    func_ov002_022008c4(0xb, 0, 0, 0x30);
    func_ov123_02294a20();
    func_ov002_02200a50(5);
}

void Unk_ov123_022959c4::func_ov123_02294cb0() {
    if (func_ov002_022008fc(0)) {
        func_020021a0(6);
        func_020021a0(4);
        func_020021a0(3);
        func_ov002_02200a60(5);
        func_020013a4();
        func_ov123_02291ff0(1);
        unk_5004.func_ov002_02203698();
    } else {
        func_ov123_02294a20();
    }
}

void Unk_ov123_022959c4::func_ov123_02294c80() {
    func_ov002_0220085c(0, 0);
    func_ov002_02200a50(7);
    unk_98 = 0;
    func_ov123_02292000(0x400);
}

void Unk_ov123_022959c4::func_ov123_02294bec() {
    if (func_ov002_022008fc(-1)) {
        func_ov002_02200874(0, 0);
        if (func_ov123_02292010(8)) {
            unk_5004.func_ov002_02203458(0x87);
        } else {
            unk_5004.func_ov002_02203458(0x22);
        }
        func_ov002_02200a50(8);
    }
    if (func_ov123_02292010(0x400)) {
        if (unk_98 < 0x10) {
            unk_98 = unk_98 + 2;
        } else {
            func_ov123_02292044();
            unk_98 = 0x10;
            func_ov123_02291ff0(0x400);
        }
    }
    func_ov123_022949e8();
}

void Unk_ov123_022959c4::func_ov123_02294b5c() {
    if (func_ov002_02200908(-1)) {
        func_ov002_02200a60(2);
        func_ov123_02293fa4();
        if (func_ov123_02292010(0x400)) {
            func_ov123_02292044();
            unk_98 = 0x10;
            func_ov123_02291ff0(0x400);
        }
    } else if (func_ov123_02292010(0x400)) {
        if (unk_98 < 0x10) {
            unk_98 = unk_98 + 2;
        } else {
            func_ov123_02292044();
            unk_98 = 0x10;
            func_ov123_02291ff0(0x400);
        }
    }
    func_ov123_022949e8();
}

void Unk_ov123_022959c4::func_ov123_02294b18() {
    func_ov123_02292024();
    if (func_ov123_02292010(0x20000)) {
        func_ov123_02291ff0(0x20000);
        func_ov123_02292314();
    }
    func_ov002_0220085c(0, 0);
    func_ov002_02200a50(0xa);
    unk_98 = 0x10;
}

void Unk_ov123_022959c4::func_ov123_02294abc() {
    if (func_ov002_022008fc(-1)) {
        func_ov002_02200874(0, 0);
        unk_5004.func_ov002_02203650();
        func_ov002_02200a50(0xb);
    }
    if (unk_98 >= 2) {
        unk_98 = unk_98 - 2;
    } else {
        unk_98 = 0;
    }
    func_ov123_022949e8();
}

void Unk_ov123_022959c4::func_ov123_02294a64() {
    if (func_ov002_02200908(-1)) {
        func_ov002_02200a60(2);
        func_ov123_02294000();
        unk_98 = 0;
    } else if (unk_98 >= 2) {
        unk_98 = unk_98 - 2;
    } else {
        unk_98 = 0;
    }
    func_ov123_022949e8();
}

void Unk_ov123_022959c4::func_ov123_02294a20() {
    func_ov002_02200840(6, 0, unk_98);
    func_ov002_02200840(4, 0, unk_98);
    func_ov002_02200840(3, 0, unk_98);
    unk_94 = func_ov002_02200920();
}

void Unk_ov123_022959c4::func_ov123_022949e8() {
    func_020021fc(6, 0, -unk_98);
    func_020021fc(4, 0, -unk_98);
    func_020021fc(3, 0, -unk_98);
}

void Unk_ov123_022959c4::func_ov123_02294984() {
    func_ov123_02293b0c(1);
    unk_9c = 0;
    unk_a6 = 0x22;
    func_ov123_02292be0();
    unk_aa = 0;
    unk_ab = 0;
    unk_ac = 0;
    func_ov123_02292880();
    unk_af = 0x10;
    unk_b0 = 0x10;
    func_0206ecf8(0);
    func_02094d3c();
    unk_98 = 0;
    unk_b3 = 0;
}

void Unk_ov123_022959c4::func_ov123_02294950() {
    unk_5004.func_ov002_02203900();
    func_ov123_02292ba4();
    func_ov123_02292844();
    func_02094960();
    if (func_0206ed50() == 3) {
        func_02003f5c(0);
    }
}

void Unk_ov123_022959c4::func_ov123_02294934() {
    func_ov123_02294908();
    Unk_ov002_02204614 *p = &unk_1a0;
    p->vfunc_0c();
}

void Unk_ov123_022959c4::func_ov123_0229492c() {
    func_ov123_022948f4();
}

void Unk_ov123_022959c4::func_ov123_02294908() {
    unk_5004.func_ov002_02203900();
    func_ov123_02292ba4();
    func_ov123_02292bb0();
}

void Unk_ov123_022959c4::func_ov123_022948f4() {
    func_ov123_02293b48();
    func_ov123_02292c70();
}

void Unk_ov123_022959c4::func_ov123_022948a8() {
    func_020015b8(0);
    func_02002398(6, 2);
    func_0200226c(6, 0, 0, 0);
    func_02002398(4, 2);
    func_0200226c(4, 0, 0, 0);
    func_02002398(3, 2);
    func_0200226c(3, 0, 0, 0);
}

void Unk_ov123_022959c4::func_ov123_02294804() {
    void *p = data_021f482c;
    func_020026c4((void *)"menu/edit/bg.bpl", p, 6, 4, 4, 0xe);
    func_020641b4((void *)"menu/edit/a.bsc", (u8 *)this + 0x204, 0x800);
    func_020024f0((u8 *)this + 0x204, 6, 0x800, 0);
    func_02002654((void *)"menu/edit/b.bsc", p, 4);
    func_02002654((void *)"menu/edit/c.bsc", p, 3);
    func_0200261c((void *)"menu/edit/bg1.bch", p, 6, 0x120, 0x120, 0x1ff);
    func_0200261c((void *)"menu/edit/bg0.bch", p, 6, 0x10, 0x10, 0x1f);
}

void Unk_ov123_022959c4::func_ov123_022947a0() {
    void *p = data_021f482c;
    func_020026c4((void *)"menu/edit/obj.bpl", p, 8, 4, 4, 0xc);
    func_0200261c((void *)"menu/edit/obj0.bch", p, 8, 0xc0, 0xc0, 0x12f);
    func_0200261c((void *)"menu/edit/obj1.bch", p, 8, 0x130, 0x130, 0x19f);
}

void Unk_ov123_022959c4::func_ov123_02294740() {
    if (func_ov002_02200a14(1)) {
        func_ov123_02294020();
    } else if (Unk_ov123_022946c4_Both()) {
        u32 r = func_ov123_02293964();
        if (r == 0x21) {
            func_ov123_02292e78();
        } else if (r != 0x22) {
            unk_a5 = r;
            func_ov123_02293840();
        }
    }
}

void Unk_ov123_022959c4::func_ov123_022946c4() {
    if (func_ov002_02200a14(1)) {
        func_ov123_02293fc4();
    } else if (Unk_ov123_022946c4_Both()) {
        if (unk_5004.func_ov002_02203110(3)) {
            unk_a5 = 0x1f;
            func_ov123_02293840();
        } else if (unk_5004.func_ov002_02203110(4)) {
            unk_a5 = 0x20;
            func_ov123_02293840();
        }
    }
}

void Unk_ov123_022959c4::func_ov123_02294614() {
    if (data_021f4770 == 0) {
        if (func_ov123_02292010(0x80000)) {
            func_ov123_02291ff0(0x80000);
            func_02003ff4(0x862, 1);
        }
        func_ov123_02292864();
    } else {
        func_ov123_02291ff0(0x100000);
        func_ov123_0229209c();
        unk_b4 = data_021ef5f0;
        unk_b5 = data_021ef5ec;
        if (func_ov123_02292010(0x100000)) {
            if (!func_ov123_02292010(0x80000)) {
                func_ov123_02292000(0x80000);
                func_02004008(0x862);
            }
        } else if (func_ov123_02292010(0x80000)) {
            func_ov123_02291ff0(0x80000);
            func_02003ff4(0x862, 1);
        }
    }
}

void Unk_ov123_022959c4::func_ov123_02294518() {
    if (func_ov002_022009d4()) {
        func_ov123_02294074();
    } else {
        if (func_ov123_0229249c((void *)func_ov002_022009c8())) {
            if (unk_ac == 0) {
                unk_ab = unk_aa;
            }
            func_ov123_022925c4();
        } else {
            u32 t = data_021f47d8[1];
            if (t & 1) {
                func_ov123_02292680();
            } else if (t & 0x800) {
                func_0200402c(0x864);
                if (unk_ac == 0) {
                    unk_ac = 1;
                    unk_aa = unk_a2 + 0xd;
                } else {
                    unk_ac = 2;
                }
                func_ov123_02294000();
            } else if (!func_ov123_02292280()) {
                u32 k = data_021f47d8[1];
                if (k & 0x400) {
                    func_ov123_02292340();
                } else if (k & 2) {
                    func_ov123_022926c0();
                    func_ov123_02293f3c();
                } else if (k & 8) {
                    func_ov123_022926c0();
                    func_ov123_02293f70();
                }
            }
        }
    }
}

void Unk_ov123_022959c4::func_ov123_02294448() {
    if (func_ov002_022009d4()) {
        func_ov123_02294074();
    } else {
        func_ov123_02292370(func_ov002_022009c8(), 0);
        u32 t = data_021f47d8[1];
        if (t & 1) {
            func_ov123_02292df4();
        } else if (t & 2) {
            func_ov123_02292000(0x800);
            func_ov123_02292cfc();
            func_ov002_02200a58(7);
        } else if (t & 0x800) {
            func_0200402c(0x864);
            unk_ac = 0;
            unk_aa = unk_ab;
            func_ov123_02294000();
        } else if (!func_ov123_02292280()) {
            u32 k = data_021f47d8[1];
            if (k & 0x400) {
                func_ov123_02292340();
            } else if (k & 8) {
                func_ov123_022926c0();
                func_ov123_02293f70();
            }
        }
    }
}

void Unk_ov123_022959c4::func_ov123_02294360()
{
    if ((data_021f47d8[0] & 1) == 0) {
        func_ov123_02294000();
        if (func_ov123_02292010(0x40000)) {
            func_ov123_02291ff0(0x40000);
            func_02003ff4(0x863, 1);
        }
    } else {
        s32 r = func_ov002_022009c8();
        s32 flag = 0;
        if (func_ov123_02292370(r, 1)) {
            func_ov123_0229363c(unk_af, unk_b0, unk_a2, unk_a4, 1);
            func_ov123_02292000(0x40);
            func_0200402c(0x861);
            if (unk_b3 == 0) {
                flag = 1;
            } else {
                func_0200402c(0x860);
            }
        }
        if (flag) {
            if (func_ov123_02292010(0x40000) == 0) {
                func_ov123_02292000(0x40000);
                func_02004008(0x863);
            }
        } else {
            if (func_ov123_02292010(0x40000)) {
                func_ov123_02291ff0(0x40000);
                func_02003ff4(0x863, 1);
            }
        }
    }
}

void Unk_ov123_022959c4::func_ov123_02294290()
{
    if (func_ov002_022009d4()) {
        func_0200402c(0x86e);
        func_ov123_02292880();
        func_ov123_02294074();
        return;
    }
    s32 r = func_ov002_022009c8();
    if (func_ov123_02292370(r, 0)) {
        unk_a8 = unk_af;
        unk_a9 = unk_b0;
        return;
    }
    u32 k = data_021f47d8[1];
    if (k & 1) {
        func_ov123_02292864();
    } else if (k & 2) {
        func_0200402c(0x86e);
        func_ov123_02292880();
        func_ov123_02294000();
    } else if (k & 0x800) {
        func_0200402c(0x864);
        func_ov123_02292880();
        unk_ac = 0;
        func_ov123_02294000();
    } else if (k & 0x400) {
        func_ov123_02292340();
    }
}

void Unk_ov123_022959c4::func_ov123_02294240()
{
    if ((data_021f47d8[0] & 2) == 0) {
        func_ov123_02291ff0(0x800);
        func_ov123_02294000();
        func_0200402c(0x86d);
    } else {
        s32 r = func_ov002_022009c8();
        if (func_ov123_02292370(r, 0)) {
            func_ov123_02292cfc();
        }
    }
}

void Unk_ov123_022959c4::func_ov123_02294188()
{
    if (func_ov002_022009d4()) {
        func_ov123_02293fe8();
        return;
    }
    u32 old = unk_aa;
    func_ov002_022009c8();
    if (func_ov002_022009a4()) {
        unk_aa = 0x1f;
    } else if (func_ov002_02200998()) {
        unk_aa = 0x20;
    }
    if (old != unk_aa) {
        func_ov123_022925c4();
        return;
    }
    u32 k = data_021f47d8[1];
    if (k & 1) {
        func_ov123_02292680();
    } else if (k & 2) {
        func_ov123_022926c0();
        unk_a5 = 0x20;
        func_ov123_02293840();
    } else if (k & 8) {
        func_ov123_022926c0();
        unk_a5 = 0x1f;
        func_ov123_02293840();
    }
}

void Unk_ov123_022959c4::func_ov123_0229415c()
{
    if (unk_1a0.func_ov002_022028f0() == 0) {
        func_ov002_02200a58(unk_a0);
        func_ov123_02294ef0();
    }
}

void Unk_ov123_022959c4::func_ov123_02294120()
{
    if (unk_1a0.func_0208d4fc()) {
        unk_a5 = unk_aa;
        func_ov123_02293840();
        if (unk_8d == 0xa) {
            func_ov123_02292660();
        }
    }
}

void Unk_ov123_022959c4::func_ov123_022940f8()
{
    if (unk_1a0.func_0208d4fc()) {
        func_ov123_022926a0();
        func_ov002_02200a58(3);
    }
}

void Unk_ov123_022959c4::func_ov123_0229408c()
{
    if (unk_5004.func_ov002_0220308c()) {
        if (unk_1a0.func_0208d534()) {
            s32 a = unk_5004.func_ov002_0220306c();
            s32 b = unk_5004.func_ov002_022030f4(-1);
            s32 c = unk_5004.func_ov002_022030b8(-1);
            unk_1a0.func_ov002_02202a40(a + b, a + c);
        }
    } else {
        func_ov123_022926c0();
        func_ov002_02200a60(1);
    }
}

void Unk_ov123_022959c4::func_ov123_02294074()
{
    func_ov002_02200a58(0);
    func_ov123_022926c0();
}

void Unk_ov123_022959c4::func_ov123_02294020()
{
    if (unk_ac == 2) {
        func_ov123_022926c0();
        func_ov002_02200970(5, 0, 5);
        func_ov002_02200a58(4);
        func_02003b6c((u8)func_ov123_02293838(unk_af));
    } else {
        func_ov123_02292704();
        func_ov002_02200980();
        func_ov002_02200a58(3);
    }
}

void Unk_ov123_022959c4::func_ov123_02294000()
{
    if (func_0206ef0c()) {
        func_ov123_02294074();
    } else {
        func_ov123_02294020();
    }
}

void Unk_ov123_022959c4::func_ov123_02293fe8()
{
    func_ov123_022926c0();
    func_ov002_02200a58(1);
}

void Unk_ov123_022959c4::func_ov123_02293fc4()
{
    func_ov002_02200980();
    unk_aa = 0x20;
    func_ov123_02292704();
    func_ov002_02200a58(8);
}

void Unk_ov123_022959c4::func_ov123_02293fa4()
{
    if (func_0206ef0c()) {
        func_ov123_02293fe8();
    } else {
        func_ov123_02293fc4();
    }
}

void Unk_ov123_022959c4::func_ov123_02293f70()
{
    func_0200402c(0x29);
    func_ov123_02291ff0(8);
    if (unk_ac == 2) {
        unk_ac = 0;
    }
    func_ov123_02293f10(6, 9);
}

void Unk_ov123_022959c4::func_ov123_02293f3c()
{
    func_0200402c(0x2a);
    func_ov123_02292000(8);
    if (unk_ac == 2) {
        unk_ac = 0;
    }
    func_ov123_02293f10(6, 8);
}

void Unk_ov123_022959c4::func_ov123_02293f10(u8 a, u8 b)
{
    func_ov002_02200a50(a);
    unk_5004.func_ov002_022030ac(b);
    func_ov002_02200a58(0xc);
}

void Unk_ov123_022959c4::func_ov123_02293eac()
{
    void *b = _ZN12Unk_0209865c13func_020986d4Ev(func_0209750c());
    void *d = _ZN12Unk_02071c5c13func_02071c68Ej(b, func_0206ed38());
    MIi_CpuCopy32(_ZN12Unk_02071e0413func_02071e58Ev(d), unk_a04, 0x200);
    MIi_CpuCopy32(_ZN12Unk_02071e0413func_02071e58Ev(d), unk_c04, 0x200);
    u8 r = _ZN12Unk_02071ed013func_0207202cEv(_ZN12Unk_02071e0413func_02071e04Ev(d));
    func_ov123_02293a98(r);
}

void Unk_ov123_022959c4::func_ov123_02293dc0()
{
    void *a = func_0209750c();
    void *b = _ZN12Unk_0209865c13func_020986d4Ev(a);
    void *c = func_0206ed38();
    void *d = _ZN12Unk_02071c5c13func_02071c68Ej(b, c);
    _ZN12Unk_02071e0413func_02071e3cEPv(d, func_ov123_0229275c());
    _ZN12Unk_02071ed013func_02071ff0Ev(_ZN12Unk_02071e0413func_02071e04Ev(d));
    _ZN12Unk_02071ed013func_0207200cEj(_ZN12Unk_02071e0413func_02071e04Ev(d), unk_a1);
    s32 e = _ZN12Unk_02071c1c13func_02071c1cEj(_ZN12Unk_02071c5c13func_02071c5cEv(b), c);
    u16 *p = _ZN12Unk_0209865c13func_0209872cEv(a);
    s32 r;
    if (R1(p, 0x12a8, 0x12af)) {
        r = *p - 0x12a8;
    } else {
        r = -1;
    }
    if (r != -1 && r == e) {
        func_ov123_02292000(0x8000);
    }
    p = _ZN12Unk_0209865c13func_02098714Ev(a);
    if (R1(p, 0x1429, 0x1430)) {
        r = *p - 0x1429;
    } else {
        r = -1;
    }
    if (r != -1 && r == e) {
        func_ov123_02292000(0x10000);
    }
}

void Unk_ov123_022959c4::func_ov123_02293d68()
{
    void *o = _ZN12Unk_0208722413func_02087298Ev(&data_021eca50);
    MIi_CpuCopy32(_ZN12Unk_02071e0413func_02071e58Ev(o), unk_a04, 0x200);
    MIi_CpuCopy32(_ZN12Unk_02071e0413func_02071e58Ev(o), unk_c04, 0x200);
    u8 r = _ZN12Unk_02071ed013func_0207202cEv(_ZN12Unk_02071e0413func_02071e04Ev(o));
    func_ov123_02293a98(r);
}

void Unk_ov123_022959c4::func_ov123_02293d28()
{
    void *o = _ZN12Unk_0208722413func_02087298Ev(&data_021eca50);
    _ZN12Unk_02071e0413func_02071e3cEPv(o, func_ov123_0229275c());
    _ZN12Unk_02071ed013func_02071ff0Ev(_ZN12Unk_02071e0413func_02071e04Ev(o));
    _ZN12Unk_02071ed013func_0207200cEj(_ZN12Unk_02071e0413func_02071e04Ev(o), unk_a1);
}

void Unk_ov123_022959c4::func_ov123_02293d08()
{
    func_02001f0c(func_ov123_0229275c(), unk_2e04, 4, 4);
}

void Unk_ov123_022959c4::func_ov123_02293ce0()
{
    func_02002438(unk_2e04, 6, 0x120, 0x120, 0x12f);
}

void Unk_ov123_022959c4::func_ov123_02293cb0()
{
    _ZN12Unk_020e45f813func_020b8714Ejhjjj(unk_f8, unk_2e04, 6, 0x120, 0x120, 0x12f);
}

void Unk_ov123_022959c4::func_ov123_02293bd0()
{
    u32 sh, lo, v;
    u32 *src = (u32 *)func_ov123_0229275c();
    u32 *dst = (u32 *)unk_e04;
    s32 j, i, k, m;
    i = 0;
Li:
    {
        u32 *d2 = dst;
        for (j = 0; j < 4; j++) {
            sh = 0;
            u32 *d3 = d2;
            for (k = 0; k < 4; k++) {
                u32 w = *src;
                lo = (u8)((w >> sh) & 0xf);
                u32 hi = (u8)((w >> (sh + 4)) & 0xf);
                sh += 8;
                v = lo | ((lo << 4) | ((lo << 8) | ((lo << 12) | ((hi << 16) | ((hi << 20) | ((hi << 28) | (hi << 24)))))));
                u32 *p = d3;
                for (m = 0; m < 4; m++) {
                    *p = v;
                    p += 0x10;
                }
                d3++;
            }
            src++;
            d2 += 4;
        }
        dst += 0x40;
    }
    i++;
    if (i < 0x20) goto Li;
    func_02001f0c(unk_e04, unk_3004, 0x10, 0x10);
}

void Unk_ov123_022959c4::func_ov123_02293bac()
{
    func_02002438(unk_3004, 6, 0x20, 0x20, 0x11f);
}

void Unk_ov123_022959c4::func_ov123_02293b7c()
{
    _ZN12Unk_020e45f813func_020b8714Ejhjjj((u8 *)this + 0x130, unk_3004, 6, 0x20, 0x20, 0x11f);
}

void Unk_ov123_022959c4::func_ov123_02293b48()
{
    if (func_ov123_02292010(0x40)) {
        func_ov123_02293d08();
        func_ov123_02293bd0();
        func_ov123_02293cb0();
        func_ov123_02293b7c();
        func_ov123_02291ff0(0x40);
    }
}

void Unk_ov123_022959c4::func_ov123_02293b20()
{
    void *a = func_020716cc();
    void *b = _ZN12Unk_020718a413func_020716d4Ei(a, unk_a1);
    _ZN12Unk_020e45f813func_020b8670Ejhj(unk_f8, b, 6, 0xe);
}

void Unk_ov123_022959c4::func_ov123_02293b0c(u8 v)
{
    unk_a2 = v;
    unk_a3 = (v - 1) * 12;
}

void Unk_ov123_022959c4::func_ov123_02293a98(u8 a) {
    u8 buf[5];
    unk_a1 = a;
    func_ov123_02293b20();
    if (a < 9) {
        buf[0] = 0x85;
    } else {
        buf[0] = 0x36;
    }
    buf[1] = (a + 1) % 10 + 0x35;
    buf[2] = 0;
    func_0206f994(unk_b8, buf, 5);
    unk_b8[0].func_0206fb48(8, 0x128, 2, 6, 0, 1);
    unk_b8[0].func_0206fab4(0, 0);
}

u8 Unk_ov123_022959c4::func_ov123_0229397c(s32 x, s32 y) {
    if (unk_5004.func_ov002_0220314c(9, x, y)) {
        return 0x1d;
    }
    if (unk_5004.func_ov002_0220314c(8, x, y)) {
        return 0x1e;
    }
    if (x >= 0x8 && x <= 0x28 && y >= 0x18 && y <= 0x38) {
        return 0xd;
    }
    if (x >= 0x40 && x < 0xc0 && y >= 0x8 && y < 0x88) {
        return 0x21;
    }
    if (x >= 0xca && y >= 0x8) {
        if (x < 0xe1) {
            if (y < 0x50) {
                if (y < 0x20) {
                    return 0;
                }
                if (y < 0x38) {
                    return 1;
                }
                return 2;
            }
            if (y >= 0x58 && y < 0x88) {
                if (y < 0x70) {
                    return 3;
                }
                return 4;
            }
            if (y >= 0x90 && y < 0xa8) {
                return 5;
            }
        } else if (x < 0xf9) {
            if (y < 0x50) {
                if (y < 0x20) {
                    return 6;
                }
                if (y < 0x38) {
                    return 7;
                }
                return 8;
            }
            if (y >= 0x58 && y < 0xa0) {
                if (y < 0x70) {
                    return 9;
                }
                if (y < 0x88) {
                    return 10;
                }
                return 11;
            }
        }
    }
    if (x >= 0x8 && x <= 0x28 && y >= 0x80 && y <= 0x94) {
        return 12;
    }
    if (x >= 0x8 && x < 0xbc && y >= 0x94 && y <= 0xa4) {
        return (u8)((x - 8) / 12 + 14);
    }
    return 0x22;
}

u8 Unk_ov123_022959c4::func_ov123_02293964() { return func_ov123_0229397c(data_021ef5f0, data_021ef5ec); }

void Unk_ov123_022959c4::func_ov123_02293840() {
    u32 s = unk_a5;
    if (s == 0x1d) {
        func_ov123_02293f70();
    } else if (s == 0x1e) {
        func_ov123_02293f3c();
    } else if (s <= 0xb && s != 5) {
        func_ov123_02292c34(s);
    } else if (s == 0xc) {
        func_ov123_02292c04(s);
        func_ov123_02293a98((unk_a1 + 1) & 0xf);
        func_0200402c(0x868);
    } else if (s == 5) {
        func_ov123_02292c04(s);
        func_ov123_02292784();
    } else if (s >= 0xe && s <= 0x1c) {
        func_ov123_02293b0c(s - 0xd);
        func_0200402c(0x86a);
    } else {
        if (s == 0xd) {
            func_ov123_02292340();
        }
        u32 t = unk_a5;
        if (t == 0x1f) {
            func_ov123_02293f10(2, 3);
            if (func_ov123_02292010(8)) {
                func_0206ecf8(0);
                func_0200402c(0x28);
            } else {
                switch (func_0206ed50()) {
                case 2:
                    func_ov123_02293dc0();
                    break;
                case 3:
                    func_ov123_02293d28();
                    break;
                }
                func_0206ecf8(1);
                func_0200402c(0x27);
            }
        } else if (t == 0x20) {
            func_ov123_02293f10(9, 4);
            if (func_ov123_02292010(8)) {
                unk_aa = 0x1e;
                func_0200402c(0x29);
            } else {
                unk_aa = 0x1d;
                func_0200402c(0x2a);
            }
        }
    }
}

s32 Unk_ov123_022959c4::func_ov123_02293838(s32 i) { return i * 4 + 0x42; }

s32 Unk_ov123_022959c4::func_ov123_02293830(s32 i) { return i * 4 + 10; }

void Unk_ov123_022959c4::func_ov123_022937e0() {
    s32 x = data_021ef5f0;
    s32 y = data_021ef5ec + 16;
    if (unk_a4 == 1) {
        x += 2;
        y += 2;
    }
    x -= 0x40;
    if (x < 0) {
        x = 0;
    } else if (x > 0x7f) {
        x = 0x7f;
    }
    y -= 0x18;
    if (y < 0) {
        y = 0;
    } else if (y > 0x7f) {
        y = 0x7f;
    }
    unk_a8 = x >> 2;
    unk_a9 = y >> 2;
}

u32 Unk_ov123_022959c4::func_ov123_02293784(u8 x, u8 y, u32 c) {
    if (x >= 32 || y >= 32) {
        return 0;
    }
    u32 *g = (u32 *)func_ov123_0229275c();
    u32 sh = (x & 7) << 2;
    u32 *row = g;
    row += y * 4;
    u32 *p = &row[x >> 3];
    u32 mask = 0xf << sh;
    u32 w = row[x >> 3];
    u32 cur = (u8)(((w & mask) >> sh) & 0xf);
    if (cur == c) {
        return 0;
    }
    *p = w & ~mask;
    *p = *p | (c << sh);
    return 1;
}

u32 Unk_ov123_022959c4::func_ov123_0229363c(u8 x, u8 y, u32 c, s32 t, s32 z) {
    u32 r = 0;
    if (t < 0 || t > 3) {
        return 0;
    }
    switch (t) {
    case 0:
        r |= func_ov123_02293784(x, y, c);
        break;
    case 1: {
        r |= func_ov123_02293784(x, y, c);
        s32 xm = x - 1;
        r |= func_ov123_02293784(xm, y, c);
        s32 ym = y - 1;
        r |= func_ov123_02293784(x, ym, c);
        r |= func_ov123_02293784(xm, ym, c);
        break;
    }
    case 2: {
        s32 ym = y - 1;
        s32 xm = x - 1;
        r |= func_ov123_02293784(xm, ym, c);
        r |= func_ov123_02293784(x, ym, c);
        s32 xp = x + 1;
        r |= func_ov123_02293784(xp, ym, c);
        r |= func_ov123_02293784(xm, y, c);
        r |= func_ov123_02293784(x, y, c);
        r |= func_ov123_02293784(xp, y, c);
        s32 yp = y + 1;
        r |= func_ov123_02293784(xm, yp, c);
        r |= func_ov123_02293784(x, yp, c);
        r |= func_ov123_02293784(xp, yp, c);
        break;
    }
    case 3:
        func_ov123_02292b04(x, y);
        break;
    }
    return r;
}

u32 Unk_ov123_022959c4::func_ov123_0229353c(u32 x0, u32 y0, u32 x1, u8 y1, u32 c, s32 t) {
    u32 dx, dy;
    s32 err1;
    s32 sx, sy;
    s32 i1;
    u32 r;
    s32 dx2b;
    s32 dy2b;
    s32 dy2;
    s32 dx2;
    s32 err2;
    s32 i2;
    s32 z1, z2;
    r = 0;
    if (x1 > x0) {
        sx = 1;
        dx = x1 - x0;
    } else {
        sx = -1;
        dx = x0 - x1;
    }
    if (y1 > y0) {
        sy = 1;
        dy = y1 - y0;
    } else {
        sy = -1;
        dy = y0 - y1;
    }
    if ((s32)dx >= (s32)dy) {
        err1 = -(s32)dx;
        i1 = 0;
        z1 = i1;
        dy2 = dy << 1;
        dx2 = dx << 1;
        for (; i1 <= (s32)dx; i1++) {
            r |= func_ov123_0229363c(x0, y0, c, t, z1);
            x0 += sx;
            err1 += dy2;
            if (err1 >= 0) {
                y0 += sy;
                err1 -= dx2;
            }
        }
    } else {
        err2 = -(s32)dy;
        i2 = 0;
        z2 = i2;
        dx2b = dx << 1;
        dy2b = dy << 1;
        for (; i2 <= (s32)dy; i2++) {
            r |= func_ov123_0229363c(x0, y0, c, t, z2);
            y0 += sy;
            err2 += dx2b;
            if (err2 >= 0) {
                x0 += sx;
                err2 -= dy2b;
            }
        }
    }
    return r;
}

void Unk_ov123_022959c4::func_ov123_022934d4(u8 x0, u8 y0, u8 x1, u8 y1, u32 c) {
    u8 x;
    for (x = x0; x <= x1; x++) {
        func_ov123_02293784(x, y0, c);
        func_ov123_02293784(x, y1, c);
    }
    u8 y;
    for (y = y0; y <= y1; y++) {
        func_ov123_02293784(x0, y, c);
        func_ov123_02293784(x1, y, c);
    }
}

void Unk_ov123_022959c4::func_ov123_0229336c(s32 x0, s32 y0, s32 x1, u8 y1, u32 c, u32 fill) {
    s32 w;
    s32 cx;
    s16 i;
    s32 cy;
    s32 hw;
    s32 hh;
    s32 d;
    s32 a;
    s32 b;
    s32 step;
    s32 df;
    s32 sum;
    w = x1 - x0;
    d = y1 - y0;
    hw = w >> 1;
    hh = d >> 1;
    cx = x0 + hw;
    cy = y0 + hh;
    df = hw - hh;
    if (df < 0) {
        df = -df;
    }
    sum = hw + hh;
    step = 0x40 / (s16)(sum - ((sum >> 1) - (sum >> 3) - (df >> 1) - 5) | 1);
    d &= 1;
    w &= 1;
    for (i = 0; i < 0x40; i = i + step) {
        a = (((u16 *)data_ov123_0229554c)[i + 0x40] * hw + 0x2d) >> 8;
        b = (((u16 *)data_ov123_0229554c)[i] * hh + 0x2d) >> 8;
        if (fill) {
            s32 x = cx - a;
            s32 ya = cy - b;
            s32 yb = cy + b + d;
            s32 xe = cx + a + w;
            for (; x <= xe; x++) {
                func_ov123_02293784(x, ya, c);
                func_ov123_02293784(x, yb, c);
            }
        } else {
            s32 yb, xl, xr, yt;
            xr = cx + a + w;
            yb = cy + b + d;
            func_ov123_02293784(xr, yb, c);
            yt = cy - b;
            func_ov123_02293784(xr, yt, c);
            xl = cx - a;
            func_ov123_02293784(xl, yb, c);
            func_ov123_02293784(xl, yt, c);
        }
    }
}

void Unk_ov123_022959c4::func_ov123_02293344(s32 v) {
    u32 *p = (u32 *)func_ov123_0229275c();
    u32 t = v * 0x11111111;
    s32 i;
    for (i = 0; i < 32; i++) {
        p[0] = t;
        p[1] = t;
        p[2] = t;
        p[3] = t;
        p += 4;
    }
}

void Unk_ov123_022959c4::func_ov123_022932d4(u32 c) {
    u32 *p = (u32 *)func_ov123_0229275c();
    s32 j, i;
    for (j = 0; j < 2; j++) {
        u32 *t = (u32 *)data_ov123_022954cc;
        for (i = 0; i < 16; i++) {
            p[0] = func_ov123_02292ff8(p[0], t[0], c);
            p[1] = func_ov123_02292ff8(p[1], t[1], c);
            p[2] = func_ov123_02292ff8(p[2], t[0], c);
            p[3] = func_ov123_02292ff8(p[3], t[1], c);
            p += 4;
            t += 2;
        }
    }
}

u8 Unk_ov123_022959c4::func_ov123_02293298(u8 x, u8 y) {
    if (x >= 32 || y >= 32) {
        return 1;
    }
    u8 *row = (u8 *)func_ov123_0229275c() + (y << 4);
    return (u8)((*(u32 *)(row + (((s32)x >> 3) << 2)) >> ((x & 7) << 2)) & 0xf);
}

s32 Unk_ov123_022959c4::func_ov123_02293240(s32 x0, s32 x1, s32 y, s32 v) {
    s32 x = x0;
    u32 *p = (u32 *)((u8 *)func_ov123_0229275c() + (y << 4)) + (x >> 3);
    s32 sh = (x & 7) << 2;
    for (; x <= x1; x++) {
        if (v == (u8)((*p >> sh) & 0xf)) {
            return x;
        }
        sh += 4;
        if (sh >= 32) {
            sh = 0;
            p++;
        }
    }
    return -1;
}

s32 Unk_ov123_022959c4::func_ov123_022931e8(s32 x, s32 y, s32 v) {
    if (x <= 0) {
        return 0;
    }
    s32 i = x - 1;
    u32 *p = (u32 *)((u8 *)func_ov123_0229275c() + (y << 4)) + (i >> 3);
    s32 sh = (i & 7) << 2;
    for (; i >= 0; i--) {
        if (v != (u8)((*p >> sh) & 0xf)) {
            return i + 1;
        }
        sh -= 4;
        if (sh < 0) {
            sh = 28;
            p--;
        }
    }
    return 0;
}

s32 Unk_ov123_022959c4::func_ov123_02293190(s32 x, s32 y, s32 v) {
    if (x >= 31) {
        return 31;
    }
    s32 i = x + 1;
    u32 *p = (u32 *)((u8 *)func_ov123_0229275c() + (y << 4)) + (i >> 3);
    s32 sh = (i & 7) << 2;
    for (; i <= 31; i++) {
        if (v != (u8)((*p >> sh) & 0xf)) {
            return i - 1;
        }
        sh += 4;
        if (sh > 28) {
            sh = 0;
            p++;
        }
    }
    return 31;
}extern "C" void *data_ov123_0229598c[12] = {data_ov123_0229594c, data_ov123_0229593c, data_ov123_0229595c, data_ov123_02295858, data_ov123_022958b8, 0, &data_ov123_022958c0, &data_ov123_022958c0, data_ov123_02295850, data_ov123_02295800, data_ov123_02295800, data_ov123_02295800};

void Unk_ov123_022959c4::func_ov123_02293010(u8 x, u8 y, u32 tgt) {
    u32 cur;
    s32 head;
    s32 i;
    s32 ym;
    s32 b;
    u32 m;
    s32 left;
    func_ov123_0229275c();
    cur = func_ov123_02293298(x, y);
    if (cur != tgt) {
        static Unk_ov123_02293010_Q q[64];
        s32 tail;
        head = 0;
        tail = 1;
        q[0].a = x;
        q[0].b = x;
        q[0].c = y;
        m = *(const u32 *)(data_ov123_0229554c + 0x140);
        do {
            s32 a = q[head].a;
            b = q[head].b;
            s32 yy = q[head].c;
            head = (head + 1) & m;
            if (tgt != func_ov123_02293298(a, yy)) {
                left = func_ov123_022931e8(a, yy, cur);
                s32 right = func_ov123_02293190(b, yy, cur);
                for (i = left; i <= right; i++) {
                    func_ov123_02293784(i, yy, tgt);
                }
                if (yy > 0) {
                    s32 xs = left;
                    ym = yy - 1;
                    do {
                        s32 t = func_ov123_02293240(xs, right, ym, cur);
                        if (t < 0) {
                            xs = 0xff;
                        } else {
                            s32 r = func_ov123_02293190(t, ym, cur);
                            q[tail].a = t;
                            q[tail].b = r;
                            q[tail].c = ym;
                            tail = (tail + 1) & m;
                            xs = r + 2;
                        }
                    } while (xs <= right);
                }
                if (yy < 0x1f) {
                    s32 y1 = yy + 1;
                    do {
                        s32 t = func_ov123_02293240(left, right, y1, cur);
                        if (t < 0) {
                            left = 0xff;
                        } else {
                            s32 r = func_ov123_02293190(t, y1, cur);
                            q[tail].a = t;
                            q[tail].b = r;
                            q[tail].c = y1;
                            tail = (tail + 1) & m;
                            left = r + 2;
                        }
                    } while (left <= right);
                }
            }
        } while (head != tail);
    }
}

u32 Unk_ov123_022959c4::func_ov123_02292ff8(u32 v, u32 s, u32 t) {
    return (v & ~(s * 15)) | (s * t);
}

void Unk_ov123_022959c4::func_ov123_02292f88(s32 x, s32 y, u32 a, u32 idx) {
    s32 yy;
    s32 xx;
    u16 *p;
    s32 j;
    u32 mask;
    s32 i;
    s32 xs;
    yy = y - 8;
    p = data_ov123_0229592c[idx];
    j = 0;
    xs = x - 7;
    for (; j < 16; p++, yy++, j++) {
        mask = 0x8000;
        xx = xs;
        for (i = 0; i < 16; xx++, i++) {
            if ((mask & *p) != 0) {
                func_ov123_02293784(xx, yy, a);
            }
            mask = (mask << 15) >> 16;
        }
    }
}

void Unk_ov123_022959c4::func_ov123_02292ef4(u8 x, u8 y) {
    u32 st = unk_a4;
    if (st <= 2) {
        func_ov123_0229363c(x, y, unk_a2, st, 1);
    } else if (st >= 3 && st <= 4) {
        func_ov123_02292f88(x, y, unk_a2, st - 3);
        func_0200402c(0x867);
    } else {
        if (st >= 9 && st <= 0xb) {
            func_0200402c(0x867);
        }
        switch (unk_a4) {
        case 9:
            func_ov123_02293010(x, y, unk_a2);
            break;
        case 0xb:
            func_ov123_02293344(unk_a2);
            break;
        case 0xa:
            func_ov123_022932d4(unk_a2);
            break;
        }
    }
}

void Unk_ov123_022959c4::func_ov123_02292e78() {
    func_ov123_022937e0();
    if (unk_a4 >= 6 && unk_a4 <= 8) {
        func_ov123_022928c4();
        func_ov123_02292238();
    } else {
        func_ov123_022927e8();
        func_ov123_02292ef4(unk_a8, unk_a9);
        if (unk_a4 <= 2) {
            func_0200402c(0x85f);
            func_0200402c(0x861);
            func_ov123_02292000(0x1000);
        }
        func_ov123_02292238();
        func_ov123_02292000(0x40);
    }
}

void Unk_ov123_022959c4::func_ov123_02292df4() {
    unk_a8 = unk_af;
    unk_a9 = unk_b0;
    if (unk_a4 >= 6 && unk_a4 <= 8) {
        func_ov123_022928c4();
        func_ov002_02200a58(6);
    } else {
        func_ov123_022927e8();
        func_ov123_02292ef4(unk_a8, unk_a9);
        if (unk_a4 <= 2) {
            func_0200402c(0x85f);
            func_0200402c(0x861);
            func_ov002_02200a58(5);
        }
        func_ov123_02292000(0x40);
    }
}

void Unk_ov123_022959c4::func_ov123_02292d20() {
    if (func_ov123_02292010(0x100)) {
        if (unk_a4 >= 6 && unk_a4 <= 8) {
            u8 xa, yhi, xb, yb, xlo, xhi, ylo, ya;
            func_ov123_022927e8();
            xa = unk_a8;
            xb = unk_ad;
            if (xb >= xa) {
                xlo = xa;
                xhi = xb;
            } else {
                xhi = xa;
                xlo = xb;
            }
            ya = unk_a9;
            yb = unk_ae;
            if (yb >= ya) {
                ylo = ya;
                yhi = yb;
            } else {
                yhi = ya;
                ylo = yb;
            }
            switch (unk_a4) {
            case 8:
                func_ov123_0229353c(xb, yb, xa, ya, unk_a2, 0);
                break;
            case 6:
                func_ov123_022934d4(xlo, ylo, xhi, yhi, unk_a2);
                break;
            case 7:
                func_ov123_0229336c(xlo, ylo, xhi, yhi, unk_a2, 0);
                break;
            }
            func_ov123_02292000(0x40);
            func_0200402c(0x867);
        }
    }
}

void Unk_ov123_022959c4::func_ov123_02292cfc() {
    func_ov123_02293b0c(func_ov123_02293298(unk_af, unk_b0));
}

void Unk_ov123_022959c4::func_ov123_02292cb4(u32 a, u32 b) {
    if (a <= 0xc) {
        u32 t = data_ov123_02295364[a];
        func_0206ee80(&unk_204, data_ov123_02295344[a], t, data_ov123_02295354[a], t + 2, b);
        func_ov123_02292000(0x10);
    }
}

void Unk_ov123_022959c4::func_ov123_02292c70() {
    if (func_ov123_02292010(0x10)) {
        if (_ZN12Unk_020e45f813func_020b86c0Ejhjj(&unk_f8[2], &unk_204, 6, 0x800, 0)) {
            func_ov123_02291ff0(0x10);
        }
    }
}

void Unk_ov123_022959c4::func_ov123_02292c34(u32 v) {
    if (unk_a4 != v) {
        if (unk_a4 != 0x22) {
            func_ov123_02292cb4(unk_a4, 4);
            func_0200402c(0xb);
        }
        unk_a4 = v;
        func_ov123_02292cb4(unk_a4, 5);
    }
}

void Unk_ov123_022959c4::func_ov123_02292c04(u32 v) {
    func_ov123_02292be0();
    unk_a6 = v;
    unk_a7 = 4;
    func_ov123_02292cb4(unk_a6, 5);
}

void Unk_ov123_022959c4::func_ov123_02292be0() {
    func_ov123_02292cb4(unk_a6, 4);
    unk_a6 = 0x22;
    unk_a7 = 0;
}

void Unk_ov123_022959c4::func_ov123_02292bb0() {
    if (unk_a7 != 0) {
        unk_a7 = unk_a7 - 1;
        if (unk_a7 == 0) {
            func_ov123_02292be0();
        }
    }
}

void Unk_ov123_022959c4::func_ov123_02292ba4() {
    unk_b8[0].func_0206fc44();
}

void Unk_ov123_022959c4::func_ov123_02292b3c(s32 x, s32 y, u32 i) {
    s32 a = func_ov123_02293838(x);
    s32 b = func_ov123_02293830(y);
    u16 t = data_ov123_022958c0.b;
    t &= ~0x18;
    t |= data_ov123_02295840[i];
    data_ov123_022958c0.b = t;
    func_02088730(1, &data_ov123_022958c0, a, b, -1, -1, 0);
}

void Unk_ov123_022959c4::func_ov123_02292b04(s32 x, s32 y) {
    s32 a = func_ov123_02293838(x);
    s32 b = func_ov123_02293830(y);
    func_02088730(1, data_ov123_022958a8, a, b, -1, -1, 0);
}

void Unk_ov123_022959c4::func_ov123_02292a88(s32 x, s32 y) {
    s32 a = func_ov123_02293838(x);
    s32 b = func_ov123_02293830(y);
    void *p = data_ov123_0229598c[unk_a4];
    if (func_ov123_02292010(0x800)) {
        p = data_ov123_02295830;
    }
    if (unk_a4 == 1) {
        a -= 2;
        b -= 2;
    }
    if (p != NULL) {
        func_02087e70(1, p, a, b, -1, -1, 0x1000, 0x1000, 0, -1, 0, 0);
    }
}

void Unk_ov123_022959c4::func_ov123_02292a50(s32 x, s32 y) {
    s32 a = func_ov123_02293838(x);
    s32 b = func_ov123_02293830(y);
    func_02088730(1, data_ov123_02295850, a, b, -1, -1, 0);
}

void Unk_ov123_022959c4::func_ov123_022928fc() {
    if (unk_a4 == 8) {
        func_ov123_02292a50(unk_a8, unk_a9);
        func_ov123_02292a50(unk_ad, unk_ae);
        func_ov123_0229353c(unk_a8, unk_a9, unk_ad, unk_ae, 1, 3);
    } else {
        u8 xlo = unk_ad;
        u8 xa = unk_a8;
        u8 xhi;
        u32 cx0, cx1;
        if (xa >= xlo) {
            cx1 = 2;
            cx0 = 0;
            xhi = xa;
        } else {
            cx1 = 0;
            cx0 = 2;
            xhi = xlo;
            xlo = xa;
        }
        u8 ylo = unk_ae;
        u8 ya = unk_a9;
        u8 yhi;
        if (ya >= ylo) {
            cx0 = cx0 + 1;
            yhi = ya;
        } else {
            cx1 = cx1 + 1;
            yhi = ylo;
            ylo = ya;
        }
        func_ov123_02292b3c(xa, ya, cx0);
        func_ov123_02292b3c(unk_ad, unk_ae, cx1);
        u8 i = xlo;
        for (; i <= xhi; i = i + 2) {
            func_ov123_02292b04(i, ylo);
        }
        if (ylo != yhi) {
            i = xlo;
            if (((yhi - ylo) & 1) != 0) {
                i = xlo + 1;
            }
            for (; i <= xhi; i = i + 2) {
                func_ov123_02292b04(i, yhi);
            }
        }
        u32 t = ylo + 2;
        u8 j = t;
        for (; j < yhi; j = j + 2) {
            func_ov123_02292b04(xlo, j);
        }
        if (xlo != xhi) {
            j = t;
            if (((xhi - xlo) & 1) != 0) {
                j = j - 1;
            }
            for (; j < yhi; j = j + 2) {
                func_ov123_02292b04(xhi, j);
            }
        }
    }
}

void Unk_ov123_022959c4::func_ov123_022928c4() {
    func_0200402c(0x866);
    func_ov123_02292000(0x100);
    unk_ad = unk_a8;
    unk_ae = unk_a9;
}

void Unk_ov123_022959c4::func_ov123_02292880() {
    func_ov123_02291ff0(0x100);
    u16 t = data_ov123_022958c0.b;
    t &= ~0x18;
    t |= 8;
    data_ov123_022958c0.b = t;
}

void Unk_ov123_022959c4::func_ov123_02292864() {
    func_ov123_02292d20();
    func_ov123_02292880();
    func_ov123_02294000();
}

void Unk_ov123_022959c4::func_ov123_02292844() {
    s32 i;
    for (i = 0; i < 3; i++) {
        _ZN12Unk_020e45f813func_020b87d0Ev(&unk_f8[i]);
    }
}

void Unk_ov123_022959c4::func_ov123_022927e8() {
    func_ov123_02291ff0(0x4000);
    if (func_ov123_02292010(0x80)) {
        MIi_CpuCopy32(unk_a04, unk_c04, 0x200);
        func_ov123_02291ff0(0x80);
    } else {
        MIi_CpuCopy32(unk_c04, unk_a04, 0x200);
        func_ov123_02292000(0x80);
    }
}

void Unk_ov123_022959c4::func_ov123_02292784() {
    if (func_ov123_02292010(0x80)) {
        func_ov123_02291ff0(0x80);
    } else {
        func_ov123_02292000(0x80);
    }
    if (func_ov123_02292010(0x4000)) {
        func_0200402c(0x86c);
        func_ov123_02291ff0(0x4000);
    } else {
        func_0200402c(0x86b);
        func_ov123_02292000(0x4000);
    }
    func_ov123_02292000(0x40);
}

u8 *Unk_ov123_022959c4::func_ov123_0229275c() {
    if (func_ov123_02292010(0x80)) {
        return unk_a04;
    }
    return unk_c04;
}

void Unk_ov123_022959c4::func_ov123_02292704() {
    s32 a = func_ov123_022926f4();
    s32 b = func_ov123_022926e4();
    unk_1a0.func_ov002_02202a40(a, b);
    if ((u8)(unk_aa + 0xe3) <= 1) {
        ((Unk_ov002_0220464c *)&unk_1a0)->func_ov002_02202d00(7);
    } else {
        ((Unk_ov002_0220464c *)&unk_1a0)->func_ov002_02202d00(1);
    }
    func_ov123_022926a0();
}

u32 Unk_ov123_022959c4::func_ov123_022926f4() { return data_ov123_022953f4[unk_aa]; }

u32 Unk_ov123_022959c4::func_ov123_022926e4() { return data_ov123_02295418[unk_aa]; }

void Unk_ov123_022959c4::func_ov123_022926c0() {
    ((Unk_ov002_0220464c *)&unk_1a0)->func_ov002_02202d00(0);
    unk_1a0.vfunc_0c();
}

// small helpers last so they are not inlined into callers

void Unk_ov123_022959c4::func_ov123_022926a0() {
    unk_1a0.func_ov002_02202a78();
    unk_1a0.vfunc_0c();
}

void Unk_ov123_022959c4::func_ov123_02292680() {
    ((Unk_ov002_0220464c *)&unk_1a0)->func_ov002_02202b68();
    func_ov002_02200a58(0xa);
}

void Unk_ov123_022959c4::func_ov123_02292660() {
    unk_1a0.func_ov002_02202af0();
    func_ov002_02200a58(0xb);
}

void Unk_ov123_022959c4::func_ov123_022925c4() {
    if ((u8)(unk_aa + 0xe3) <= 1) {
        ((Unk_ov002_0220464c *)&unk_1a0)->func_ov002_02202ca0();
    } else {
        ((Unk_ov002_0220464c *)&unk_1a0)->func_ov002_02202c40();
    }
    if (func_ov123_02292010(0x200)) {
        s32 a = func_ov123_022926f4();
        s32 b = func_ov123_022926e4();
        unk_1a0.func_ov002_02202a40(a, b);
        func_ov123_02291ff0(0x200);
    } else {
        s32 a = func_ov123_022926f4();
        s32 b = func_ov123_022926e4();
        unk_1a0.func_ov002_022029e8(a, b, 3, 1);
        unk_a0 = unk_8d;
        func_ov002_02200a58(9);
    }
}

BOOL Unk_ov123_022959c4::func_ov123_0229249c(void *pad) {
    if (pad == NULL) {
        return FALSE;
    }
    u32 old = unk_aa;
    if (func_ov002_0220128c(pad)) {
        if (unk_aa != 0x1d) {
            if (unk_aa == 0x1e) {
                if (unk_ac == 0) {
                    unk_aa = 5;
                } else {
                    unk_aa = 0x16;
                }
                return TRUE;
            }
        } else {
            if (unk_ac == 0) {
                unk_aa = 5;
            } else {
                unk_aa = 0x1c;
            }
            return TRUE;
        }
    }
    if (func_ov002_0220126c(pad)) {
        unk_aa = data_ov123_022954a8[unk_aa];
    } else if (func_ov002_0220125c(pad)) {
        unk_aa = data_ov123_02295460[unk_aa];
    }
    if (old == unk_aa || unk_aa <= 0xb) {
        if (func_ov002_0220128c(pad)) {
            unk_aa = data_ov123_0229543c[unk_aa];
        } else if (func_ov002_0220127c(pad)) {
            unk_aa = data_ov123_02295484[unk_aa];
        }
    }
    u32 now = unk_aa;
    if (old != now) {
        if (now >= 0xe && now <= 0x1c && old >= 0xe && old <= 0x1c) {
            func_ov123_02292000(0x200);
            func_0200402c(0x869);
        }
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov123_022959c4::func_ov123_02292370(s32 unused, s32 flag) {
    u32 cx = unk_af;
    u32 cy = unk_b0;
    u32 t0 = data_021f47d8[0];
    if (t0 & 0x20) {
        if (data_021f47d8[1] & 0x20) {
            unk_b3 = 4;
        }
        if (cx != 0) {
            cx = (u8)(cx - 1);
        }
    } else if (t0 & 0x10) {
        if (data_021f47d8[1] & 0x10) {
            unk_b3 = 4;
        }
        if (cx < 0x1f) {
            cx = (u8)(cx + 1);
        }
    }
    u32 t1 = *(volatile u16 *)&data_021f47d8[0];
    if (t1 & 0x40) {
        if (data_021f47d8[1] & 0x40) {
            unk_b3 = 4;
        }
        if (cy != 0) {
            cy = (u8)(cy - 1);
        }
    } else if (t1 & 0x80) {
        if (data_021f47d8[1] & 0x80) {
            unk_b3 = 4;
        }
        if (cy < 0x1f) {
            cy = (u8)(cy + 1);
        }
    }
    if (unk_af != cx || unk_b0 != cy) {
        u32 b3 = unk_b3;
        if (b3 == 0) {
        } else if (b3 == 4) {
            unk_b3 = *(volatile u8 *)&unk_b3 - 1;
        } else {
            unk_b3 = *(volatile u8 *)&unk_b3 - 1;
            return FALSE;
        }
        unk_af = cx;
        unk_b0 = cy;
        if (flag == 0) {
            func_0200402c(0x865);
        }
        func_02003b6c((u8)func_ov123_02293838(cx));
        return TRUE;
    }
    unk_b3 = 0;
    return FALSE;
}

void Unk_ov123_022959c4::func_ov123_02292340() {
    if (func_ov123_02292010(0x20)) {
        func_ov123_022922f0();
        func_0200402c(0x42);
    } else {
        func_ov123_02292314();
        func_0200402c(0x41);
    }
}

void Unk_ov123_022959c4::func_ov123_02292314() {
    if (!func_ov123_02292010(0x20)) {
        func_ov123_02292000(0x20);
        func_020020b8(3);
        func_020013b4(1, 8, 12);
    }
}

void Unk_ov123_022959c4::func_ov123_022922f0() {
    if (func_ov123_02292010(0x20)) {
        func_ov123_02291ff0(0x20);
        func_0200212c(3);
    }
}

BOOL Unk_ov123_022959c4::func_ov123_02292280() {
    u32 t = data_021f47d8[1];
    if (t & 0x200) {
        u32 v = unk_a2;
        if (v > 1) {
            func_ov123_02293b0c(v - 1);
        } else {
            func_ov123_02293b0c(0xf);
        }
        return TRUE;
    }
    if (t & 0x100) {
        u32 v = unk_a2;
        if (v < 0xf) {
            func_ov123_02293b0c(v + 1);
        } else {
            func_ov123_02293b0c(1);
        }
        return TRUE;
    }
    return FALSE;
}

void Unk_ov123_022959c4::func_ov123_02292238() {
    unk_b1 = 0;
    unk_b2 = 0x22;
    func_ov002_02200a58(2);
    func_ov123_02291ff0(0x2000);
    unk_b4 = data_021ef5f0;
    unk_b5 = data_021ef5ec;
}

void Unk_ov123_022959c4::func_ov123_0229209c() {
    u8 old_a8 = unk_a8;
    u8 old_a9 = unk_a9;
    func_ov123_022937e0();
    if (func_ov123_02292010(0x1000)) {
        if (unk_a4 <= 2) {
            s32 cx = data_021ef5f0;
            s32 cy = data_021ef5ec;
            s32 bx = unk_b4;
            if (cx != bx || cy != unk_b5) {
                s32 d = bx - cx;
                if (d < 0) {
                    d = -d;
                }
                s32 by = unk_b5;
                if (by > cy) {
                    d = d + (by - cy);
                } else {
                    d = d - (by - cy);
                }
                func_02003f4c(d);
                func_ov123_02292000(0x100000);
            }
            if (unk_a8 != old_a8 || unk_a9 != old_a9) {
                if (func_ov123_0229353c(unk_a8, unk_a9, old_a8, old_a9, unk_a2, unk_a4)) {
                    func_0200402c(0x861);
                }
                func_ov123_02292000(0x40);
            }
        }
    }
    u32 r = func_ov123_02293964();
    if ((u8)(r + 0xdf) <= 1) {
        unk_b2 = 0x22;
    } else if (func_ov123_02292010(0x2000)) {
        if (r != unk_b2) {
            func_ov123_02291ff0(0x2000);
            unk_b1 = 0;
        }
    } else if (r == unk_b2) {
        unk_b1 = unk_b1 + 1;
        if (unk_b1 >= 0x14) {
            if (func_ov123_02292010(0x80000)) {
                func_ov123_02291ff0(0x80000);
                func_ov123_02291ff0(0x100000);
                func_02003ff4(0x862, 1);
            }
            unk_a5 = unk_b2;
            func_ov123_02293840();
            func_ov123_02292880();
            func_ov123_02291ff0(0x1000);
            func_ov123_02292000(0x2000);
        }
    } else {
        unk_b2 = r;
        unk_b1 = 0;
    }
}

void Unk_ov123_022959c4::func_ov123_02292044() {
    if (func_ov123_02292010(0x20)) {
        func_ov123_022922f0();
        func_ov123_02292000(0x20000);
    }
    func_0200142c();
    func_020013cc(-6);
    unk_5004.func_ov002_02203044();
    func_02001710(0x1f, 0);
    func_0200152c(2);
    func_02001608(0x40, 0x18, 0xc0, 0x98);
}

// ---------------------------------------------------------------------------------------------

void Unk_ov123_022959c4::func_ov123_02292024() {
    func_0200140c();
    unk_5004.func_ov002_0220301c();
    func_0200151c(2);
}

BOOL Unk_ov123_022959c4::func_ov123_02292010(u32 mask) {
    if (unk_9c & mask) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov123_022959c4::func_ov123_02292000(u32 mask) { unk_9c = unk_9c | mask; }

void Unk_ov123_022959c4::func_ov123_02291ff0(u32 mask) { unk_9c = unk_9c & ~mask; }

