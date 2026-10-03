#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef vfunc_08
#undef vfunc_14

// ov107: scene overlay (class Unk_ov107_02296e78, vtable 0x02296e78, 0x281c bytes).

class Unk_ov107_02296e78;
typedef void (Unk_ov107_02296e78::*Unk_ov107_02296e78_Fn)();

struct Unk_ov107_SceneEntry {
    void *factory;
    u16 a;
    u16 b;
};

// Other modules' methods, called with the object first (the real symbol is the mangled name).
#define func_ov002_022006a4 _ZN18Unk_ov002_0220446819func_ov002_022006a4Eh
#define func_ov002_022006b0 _ZN18Unk_ov002_0220446819func_ov002_022006b0Ev
#define func_ov002_022006b8 _ZN18Unk_ov002_0220446819func_ov002_022006b8Ev
#define func_ov002_022006c0 _ZN18Unk_ov002_0220446819func_ov002_022006c0Ev
#define func_ov002_022006e4 _ZN18Unk_ov002_0220446819func_ov002_022006e4Ei
#define func_ov002_0220071c _ZN18Unk_ov002_0220446819func_ov002_0220071cEv
#define func_ov002_02200680 _ZN18Unk_ov002_0220446819func_ov002_02200680Ev
#define func_ov002_02201498 _ZN18Unk_ov002_022013ac19func_ov002_02201498Ei
#define func_ov002_022014a4 _ZN18Unk_ov002_022013ac19func_ov002_022014a4Ev
#define func_ov002_022014c0 _ZN18Unk_ov002_022013ac19func_ov002_022014c0Eii
#define func_ov002_0220160c _ZN18Unk_ov002_022013ac19func_ov002_0220160cEP22Unk_ov002_022013ac_Reci
#define func_ov002_022017a4 _ZN18Unk_ov002_022013ac19func_ov002_022017a4Ev
#define func_ov002_022017b4 _ZN18Unk_ov002_022013ac19func_ov002_022017b4Ev
#define func_ov002_02202200 _ZN18Unk_ov002_0220455819func_ov002_02202200EP12Unk_020e0d98
#define func_ov002_0220229c _ZN18Unk_ov002_0220455819func_ov002_0220229cEii
#define func_ov002_02202310 _ZN18Unk_ov002_0220455819func_ov002_02202310EiiPKc
#define func_ov002_022027a4 _ZN18Unk_ov002_0220460419func_ov002_022027a4Ev
#define func_ov002_02202844 _ZN18Unk_ov002_02202d9819func_ov002_02202844Ev
#define func_ov002_022028f0 _ZN18Unk_ov002_02202d9819func_ov002_022028f0Ev
#define func_ov002_022029e8 _ZN18Unk_ov002_02202d9819func_ov002_022029e8Eiiii
#define func_ov002_02202a18 _ZN18Unk_ov002_02202d9819func_ov002_02202a18Eiii
#define func_ov002_02202a40 _ZN18Unk_ov002_02202d9819func_ov002_02202a40Eii
#define func_ov002_02202a78 _ZN18Unk_ov002_02202d9819func_ov002_02202a78Ev
#define func_ov002_02202b68 _ZN18Unk_ov002_0220464c19func_ov002_02202b68Ev
#define func_ov002_02202c40 _ZN18Unk_ov002_0220464c19func_ov002_02202c40Ev
#define func_ov002_02202ca0 _ZN18Unk_ov002_0220464c19func_ov002_02202ca0Ev
#define func_ov002_02202d00 _ZN18Unk_ov002_0220464c19func_ov002_02202d00Ei
#define func_ov002_0220306c _ZN18Unk_ov002_02202fac19func_ov002_0220306cEv
#define func_ov002_0220308c _ZN18Unk_ov002_02202fac19func_ov002_0220308cEv
#define func_ov002_022030ac _ZN18Unk_ov002_02202fac19func_ov002_022030acEh
#define func_ov002_022030b8 _ZN18Unk_ov002_02202fac19func_ov002_022030b8Ei
#define func_ov002_022030f4 _ZN18Unk_ov002_02202fac19func_ov002_022030f4Ei
#define func_ov002_02203110 _ZN18Unk_ov002_02202fac19func_ov002_02203110Ei
#define func_ov002_02203510 _ZN18Unk_ov002_022046cc19func_ov002_02203510Ei
#define func_ov002_022036a4 _ZN18Unk_ov002_022046cc19func_ov002_022036a4Ei
#define func_ov002_02203900 _ZN18Unk_ov002_022046cc19func_ov002_02203900Ev
#define func_ov002_02204234 _ZN18Unk_ov002_022040ec19func_ov002_02204234Ei
#define func_ov002_02204394 _ZN18Unk_ov002_022040ec19func_ov002_02204394EPhij
#define func_ov094_022941a0 _ZN18Unk_ov094_02294bd419func_ov094_022941a0Eii
#define func_ov094_022941f8 _ZN18Unk_ov094_02294bd419func_ov094_022941f8Ej
#define func_ov094_022943f8 _ZN18Unk_ov094_02294bd419func_ov094_022943f8Ev
#define func_ov094_0229462c _ZN18Unk_ov094_02294bd419func_ov094_0229462cEv
#define func_ov094_02294644 _ZN18Unk_ov094_02294bd419func_ov094_02294644Ei
#define func_ov092_02291c5c _ZN18Unk_ov092_02291ec819func_ov092_02291c5cEv
#define func_ov092_02291ce4 _ZN18Unk_ov092_02291ec819func_ov092_02291ce4Eii
#define func_02072824 _ZN12Unk_020cbb1813func_02072824Ejj
#define func_020728a4 _ZN12Unk_020cbb1813func_020728a4EPhj
#define func_020728d4 _ZN12Unk_020cbb1813func_020728d4Ev
#define func_02072e44 _ZN12Unk_020cbb1813func_02072e44Ev
#define func_02072e88 _ZN12Unk_020cbb1813func_02072e88Ei
#define func_02089ad8 _ZN12Unk_020e0d9813func_02089ad8Eii
#define func_0208d4fc _ZN12Unk_020e100c13func_0208d4fcEv
#define func_0208d534 _ZN12Unk_020e100c13func_0208d534Ev
#define func_0208d538 _ZN12Unk_020e100c13func_0208d538Ei
#define func_0208d63c _ZN12Unk_020e100c13func_0208d63cEv
#define func_0208d644 _ZN12Unk_020e100c13func_0208d644Ev
#define func_020986c8 _ZN12Unk_0209865c13func_020986c8Ev
#define func_020b87d0 _ZN12Unk_020e45f813func_020b87d0Ev

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
    void func_ov002_022008c4(s32 a, s32 b, s32 c, s32 d);
    void func_ov002_022008e0(s32 a, s32 b, s32 c, s32 d);
    BOOL func_ov002_022008fc(s32 a);
    BOOL func_ov002_02200908(s32 a);
    s32 func_ov002_02200920();
    void func_ov002_02200980();
    u32 func_ov002_022009c8();
    u32 func_ov002_022009d4();
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
    /* 0x91 */ u8 pad_91[3];
};

// Sub-objects of the scene (constructor/destructor symbols live in main, ov002 and ov094).
class Unk_020e4608 {
public:
    Unk_020e4608();
    u32 unk_00[0x38 / 4];
};

class Unk_ov094_02294a50 {
public:
    Unk_ov094_02294a50();
    ~Unk_ov094_02294a50();
    u32 unk_00[0xa60 / 4];
};

class Unk_ov094_02294bd4 {
public:
    Unk_ov094_02294bd4();
    ~Unk_ov094_02294bd4();
    u32 unk_00[0x28 / 4];
};

class Unk_ov094_02292d6c {
public:
    Unk_ov094_02292d6c();
    ~Unk_ov094_02292d6c();
    u32 unk_00[0x15e0 / 4];
};

class Unk_ov002_02204468 {
public:
    Unk_ov002_02204468();
    virtual ~Unk_ov002_02204468();
    virtual void vfunc_08();
    u32 unk_04[(0xc0 - 4) / 4];
};

class Unk_ov002_02204604 {
public:
    Unk_ov002_02204604();
    ~Unk_ov002_02204604();
    u32 unk_00[0x18 / 4];
};

class Unk_ov002_02204614 {
public:
    Unk_ov002_02204614();
    virtual ~Unk_ov002_02204614();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    u32 unk_04[0x60 / 4];
};

class Unk_ov002_02204558 {
public:
    Unk_ov002_02204558();
    ~Unk_ov002_02204558();
    u32 unk_00[0x2f4 / 4];
    u8 unk_2f4[5];
    u8 unk_2f9[7];
};

class Unk_ov002_022040ec {
public:
    Unk_ov002_022040ec();
    ~Unk_ov002_022040ec();
    u32 unk_00[0x108 / 4];
};

class Unk_ov002_022046cc {
public:
    Unk_ov002_022046cc();
    ~Unk_ov002_022046cc();
    u32 unk_00[0x164 / 4];
};

struct Unk_ov107_Comm {
    u32 unk_00[0x64 / 4];
    u32 unk_64;
    u32 unk_68;
};

extern "C" {
extern Unk_ov107_Comm *data_020cbb18;
extern u8 data_021edb68;
extern u8 data_021ef5f0;
extern u8 data_021ef5ec;
extern u8 data_021f4770;
extern u8 data_021f4774;
extern u16 data_021f47d8[];

s32 func_020ed174(...);
void func_020ed188(void *p);
void func_020020b8(u32 x);
s32 func_0206ed50();
void func_0206ea6c();
s32 func_02045400();
BOOL func_02072e44(void *p);
BOOL func_02072e88(void *p, s32 v);
void func_020728d4(void *p);
void func_020728a4(void *p, void *buf, s32 n);
void func_02072824(void *p, s32 a, s32 b);
void MI_CpuCopy8(void *a, void *b, u32 n);
void func_0204ed8c(void *out, s32 a, s32 b);
s32 func_02042d10(s32 v);
s32 func_02042830(s32 v);
void func_02042820(s32 v);
s32 func_02042c08(s32 a, s32 b);
s32 func_02042bd0(s32 a, s32 b);
s32 func_0204339c(s32 a, s32 b, s32 c, s32 d);
u16 *func_020451c4(s32 a);
void func_02076a6c(void *dst, s32 a, s32 b);
u8 *func_02095204(s32 a);
s32 func_02030d78(void *a, void *b, s32 c, s32 d, s32 e, s32 f);
u32 func_02063b8c(s32 a);
u16 func_0206e750();
void func_02061478(void *a, void *b);
u32 func_020991b0();
void func_0209750c();
s32 func_020986c8();
void func_0203c42c(s32 a, void *b, s32 c, s32 d);
void func_0206e744();
void func_0206ed2c(u32 a);
void func_0206ecf8(s32 a);
void func_0200402c(u32 a);
BOOL func_0206ef00();
BOOL func_0206ef0c();
BOOL func_020951a0();
void func_02002398(s32 a, s32 b);
void func_0200226c(s32 a, s32 b, s32 c, s32 d);
void func_020021a0(s32 a);
void func_0208d538(void *a, s32 b);
void func_0208d63c(void *a);
void func_02089ad8(void *a, s32 b, s32 c);
s32 func_0208d534(void *p);
s32 func_0208d4fc(void *p);
s32 func_0208d644(void *p);
s32 func_0206e868();

BOOL func_ov002_0220125c(void *pad);
BOOL func_ov002_0220126c(void *pad);
BOOL func_ov002_0220127c(void *pad);
BOOL func_ov002_0220128c(void *pad);
void func_ov002_022016e4(void *p, u32 v);
void func_ov002_02201700(void *p, u32 a, u32 b);
u32 func_ov002_02201a70(void *a, s32 b);
BOOL func_ov002_022019d0(void *p, s32 a, void *q, s32 b);
BOOL func_ov002_02201a28(void *p);
void func_ov002_02201aa0(void *p, s32 a, s32 b);
void func_ov002_02201b04(void *p);
void func_ov002_02201b28(void *p);
void func_ov002_02201b58(void *p);
void func_ov002_02202064(void *p, s32 x);
void func_ov002_02202098(void *a, s32 b);
void func_ov002_02203920(void *p);

BOOL func_ov003_0221255c(void *a, void *b);
void func_ov003_02227074(s32 a, s32 b);
void func_ov003_02223498(s32 a);
BOOL func_ov003_022201bc(s32 a, s32 b, void *c);
BOOL func_ov003_02220290(void *a, s32 b);
s32 func_ov003_02227434(...);
void func_ov003_02227248(s32 a, s32 b);
void func_ov003_0222746c(s32 a, s32 b);
void func_ov003_02212504(s32 a);

void func_ov094_0229238c();
BOOL func_ov094_022923a4(s32 a);
void func_ov094_0229277c(void *p, s32 a);
void func_ov094_02292a80(void *p);
void func_ov094_02292aa4(void *p);
void func_ov094_02292acc(void *p);
void func_ov094_02292ae0(void *p);
void func_ov094_02292d1c(void *p, s32 a);
void func_ov094_02292d30(void *p, s32 a);
BOOL func_ov094_0229311c(void *a, s32 b);
void func_ov094_0229313c(void *a, s32 b, s32 c);
void func_ov094_022932d0(void *p, s32 a, s32 b);
void func_ov094_02293308(void *a, s32 b);
BOOL func_ov094_0229333c(void *a, s32 b);
void func_ov094_02293434(void *a, s32 b);
void func_ov094_02293494(void *a, s32 b, s32 c, s32 d);
u32 func_ov094_02293504(void *a, s32 b);
u32 func_ov094_0229352c(void *a, s32 b);
void func_ov094_0229359c(void *a, s32 b);
void func_ov094_022935dc(void *a);
s32 func_ov094_02293610(void *a, s32 b);
s32 func_ov094_02293624(void *a, s32 b);
void func_ov094_02293638(void *a, void *b, s32 c);
void func_ov094_022937a0(void *p);
u32 func_ov094_02293968(void *a);
void func_ov094_02293998(void *p);
void func_ov094_022939a0(void *p);
void func_ov094_022939c0(void *p, s32 a);
void func_ov094_02293d2c(void *p);

// Macro'd (mangled) declarations: the object is the first argument.
void func_ov002_022006a4(void *p, s32 a);
void func_ov002_022006b0(void *p);
void func_ov002_022006b8(void *p);
void func_ov002_022006c0(void *p);
void func_ov002_022006e4(void *p, s32 a);
BOOL func_ov002_0220071c(void *p);
BOOL func_ov002_02200680(void *p);
s32 func_ov002_02201498(void *a, s32 b);
s32 func_ov002_022014a4(void *a);
s32 func_ov002_022014c0(void *p, s32 a, s32 b);
void func_ov002_0220160c(void *a, void *b, s32 c);
BOOL func_ov002_022017a4(void *p);
BOOL func_ov002_022017b4(void *p);
void func_ov002_02202200(void *a, void *b, s32 c);
void func_ov002_0220229c(void *a, s32 b, s32 c);
void func_ov002_02202310(void *p, s32 a, s32 b, s32 c);
void func_ov002_022027a4(void *p);
void func_ov002_02202844(void *p);
BOOL func_ov002_022028f0(void *p);
void func_ov002_022029e8(void *a, s32 b, s32 c, s32 d, s32 e);
void func_ov002_02202a18(void *a, s32 b, s32 c, s32 d);
void func_ov002_02202a40(void *p, s32 x, s32 y);
void func_ov002_02202a78(void *a);
void func_ov002_02202b68(void *p);
void func_ov002_02202c40(void *p);
void func_ov002_02202ca0(void *p);
void func_ov002_02202d00(void *a, s32 b);
s32 func_ov002_0220306c(void *p);
BOOL func_ov002_0220308c(void *p);
void func_ov002_022030ac(void *p, s32 a);
s32 func_ov002_022030b8(void *p, s32 a);
s32 func_ov002_022030f4(void *p, s32 a);
BOOL func_ov002_02203110(void *p, s32 a);
void func_ov002_02203510(void *p, s32 a);
void func_ov002_022036a4(void *p, s32 a);
void func_ov002_02203900(void *p);
BOOL func_ov002_02204234(void *p, s32 a);
void func_ov002_02204394(void *a, void *b, s32 c, s32 d);
void func_ov094_022941a0(void *p, s32 a, s32 b);
void func_ov094_022941f8(void *p, s32 a);
void func_ov094_022943f8(void *p);
void func_ov094_0229462c(void *p);
void func_ov094_02294644(void *p, s32 a);
void func_ov092_02291c5c();
void func_ov092_02291ce4(s32 a, s32 b, s32 c);
void func_020b87d0(void *p);
}

static inline BOOL Unk_ov107_02296270_Both() {
    if (data_021f4770 != 0 && data_021f4774 != 0) {
        return TRUE;
    }
    return FALSE;
}

class Unk_ov107_02296e78 : public Unk_ov002_022044e4 {
public:
    Unk_ov107_02296e78()
        : unk_cc(0), unk_d0(0), unk_d4(), unk_10c(), unk_b6c(), unk_b94(), unk_2174(), unk_2234(), unk_224c(), unk_22b0(), unk_25b0(), unk_26b8() {}

    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_24();
    virtual BOOL vfunc_4c();
    virtual BOOL vfunc_50();
    virtual BOOL vfunc_54();
    virtual BOOL vfunc_58();
    virtual BOOL vfunc_5c();

    void func_ov107_02294d54(u32 mask);
    void func_ov107_02294d64(u32 mask);
    BOOL func_ov107_02294d74(u32 mask);
    void func_ov107_02294d88(BOOL flag);
    u8 func_ov107_02294e14();
    void func_ov107_02294e38();
    void func_ov107_02294e84();
    void func_ov107_02294ed4();
    void func_ov107_02294f48(u8 v);
    void func_ov107_02294fb0();
    void func_ov107_02295048();
    BOOL func_ov107_02295070();
    void func_ov107_022950e8(u8 a, u8 b);
    void func_ov107_02295130();
    void func_ov107_022951e0();
    void func_ov107_02295200();
    void func_ov107_02295270();
    BOOL func_ov107_022952e4(void *pad);
    void func_ov107_02295354(void *pad);
    void func_ov107_02295450(u32 idx, u32 flag);
    void func_ov107_022954a4();
    void func_ov107_02295568();
    void func_ov107_022955d4();
    void func_ov107_022955fc();
    void func_ov107_02295638();
    void func_ov107_02295664(s32 a);
    void func_ov107_022956d4();
    void func_ov107_02295768();
    void func_ov107_02295788();
    void func_ov107_022957a8();
    void func_ov107_022957dc();
    void func_ov107_02295828();
    void func_ov107_0229588c();
    void func_ov107_022958dc();
    void func_ov107_02295950();
    s32 func_ov107_02295974();
    s32 func_ov107_02295984();
    void func_ov107_022959c8();
    void func_ov107_02295a18();
    void func_ov107_02295a50();
    void func_ov107_02295aa4();
    void func_ov107_02295b14(s32 a);
    void func_ov107_02295b58();
    u32 func_ov107_02295b7c(s32 a);
    u32 func_ov107_02295bb0(s32 a);
    BOOL func_ov107_02295be8(s32 a);
    BOOL func_ov107_02295c1c(s32 a);
    BOOL func_ov107_02295c50(s32 a);
    void func_ov107_02295ce4();
    s32 func_ov107_02295d20(s32 a);
    s32 func_ov107_02295d5c(s32 a);
    void func_ov107_02295d98(s32 a, s32 b, s32 c);
    u32 func_ov107_02295ddc(s32 a, s32 b, s32 c);
    u32 func_ov107_02295e1c(s32 a);
    u32 func_ov107_02295e2c(s32 a);
    BOOL func_ov107_02295e48(s32 a);
    void func_ov107_02295e54();
    void func_ov107_02295e60(s32 a, u32 b);
    void func_ov107_02295eb8(u32 a);
    void func_ov107_02295f40();
    void func_ov107_02295f60();
    void func_ov107_02295f94();
    void func_ov107_02295fb0();
    void func_ov107_02295fc8();
    void func_ov107_02295ff0();
    void func_ov107_02296018();
    void func_ov107_022960a0();
    void func_ov107_022960d4();
    void func_ov107_022960f4();
    void func_ov107_02296144();
    void func_ov107_02296180();
    void func_ov107_022961a8();
    void func_ov107_022961e0();
    void func_ov107_02296224();
    void func_ov107_02296270();
    void func_ov107_022962e8();
    void func_ov107_022963c8();
    void func_ov107_02296460();
    void func_ov107_022964a8();
    void func_ov107_022964c4();
    void func_ov107_02296564();
    void func_ov107_022965e4();
    void func_ov107_02296608();
    void func_ov107_0229661c();
    void func_ov107_0229663c();
    void func_ov107_02296674();
    void func_ov107_022966b4();
    void func_ov107_022966bc();
    void func_ov107_022966d8();
    void func_ov107_02296718();
    void func_ov107_0229679c();
    void func_ov107_022967e8();
    void func_ov107_02296848();
    void func_ov107_02296884();
    void func_ov107_02296914();
    void func_ov107_02296964();

    /* 0x94 */ u32 unk_94;
    /* 0x98 */ s32 unk_98;
    /* 0x9c */ s32 unk_9c;
    /* 0xa0 */ s32 unk_a0;
    /* 0xa4 */ s32 unk_a4;
    /* 0xa8 */ s32 unk_a8;
    /* 0xac */ s32 unk_ac;
    /* 0xb0 */ s32 unk_b0;
    /* 0xb4 */ u8 unk_b4;
    /* 0xb5 */ u8 unk_b5;
    /* 0xb6 */ u8 unk_b6;
    /* 0xb7 */ u8 unk_b7;
    /* 0xb8 */ u8 unk_b8;
    /* 0xb9 */ u8 unk_b9;
    /* 0xba */ u8 unk_ba;
    /* 0xbb */ u8 unk_bb;
    /* 0xbc */ u8 unk_bc;
    /* 0xbd */ u8 unk_bd;
    /* 0xbe */ u8 unk_be;
    /* 0xbf */ u8 unk_bf;
    /* 0xc0 */ u32 unk_c0;
    /* 0xc4 */ u32 unk_c4;
    /* 0xc8 */ u32 unk_c8;
    /* 0xcc */ s32 unk_cc;
    /* 0xd0 */ s32 unk_d0;
    /* 0xd4 */ Unk_020e4608 unk_d4[1];
    /* 0x10c */ Unk_ov094_02294a50 unk_10c;
    /* 0xb6c */ Unk_ov094_02294bd4 unk_b6c;
    /* 0xb94 */ Unk_ov094_02292d6c unk_b94;
    /* 0x2174 */ Unk_ov002_02204468 unk_2174;
    /* 0x2234 */ Unk_ov002_02204604 unk_2234;
    /* 0x224c */ Unk_ov002_02204614 unk_224c;
    /* 0x22b0 */ Unk_ov002_02204558 unk_22b0;
    /* 0x25b0 */ Unk_ov002_022040ec unk_25b0;
    /* 0x26b8 */ Unk_ov002_022046cc unk_26b8;
};

static inline BOOL Unk_ov107_InRange(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) {
        r = TRUE;
    }
    return r;
}

extern "C" Unk_ov107_02296e78 *func_ov107_02296c8c();

void Unk_ov107_02296e78::func_ov107_022966b4();

extern "C" Unk_ov107_02296e78 *func_ov107_02296c8c() { return new Unk_ov107_02296e78(); }

BOOL Unk_ov107_02296e78::vfunc_00() {
    func_ov107_02296718();
    func_ov002_02200a50(0);
    func_ov002_02200a60(0);
    return TRUE;
}

BOOL Unk_ov107_02296e78::vfunc_0c() {
    func_020ed174();
    func_ov092_02291c5c();
    func_ov107_022966d8();
    return TRUE;
}

BOOL Unk_ov107_02296e78::vfunc_24() {
    func_ov002_02201b28(&unk_22b0);
    if (!func_ov107_02294d74(1)) {
        return TRUE;
    }
    unk_2174.vfunc_08();
    if (func_0206ef00()) {
        func_ov002_02202844(&unk_224c);
    }
    func_ov107_02295a18();
    if (func_ov107_02294d74(2)) {
        func_ov002_022036a4(&unk_26b8, unk_98);
        s32 t = unk_98 - 0x10;
        func_ov094_022932d0(&unk_10c, 0, t);
        func_ov094_022941a0(&unk_b6c, 0, t);
        func_ov094_0229277c(&unk_b94, t);
    }
    return TRUE;
}// Declarations for data defined further down (definition order sets the data layout)
extern "C" Unk_ov107_SceneEntry data_ov107_02296d80;
extern "C" const s16 data_ov107_02296d40[8];

extern "C" Unk_ov107_SceneEntry data_ov107_02296d80 = {(void *)func_ov107_02296c8c, 0x9a, 0x9e};

BOOL Unk_ov107_02296e78::vfunc_4c() {
    static Unk_ov107_02296e78_Fn tbl[5] = {
        &Unk_ov107_02296e78::func_ov107_02296914,
        &Unk_ov107_02296e78::func_ov107_02296884,
        &Unk_ov107_02296e78::func_ov107_02296848,
        &Unk_ov107_02296e78::func_ov107_022967e8,
        &Unk_ov107_02296e78::func_ov107_0229679c};
    func_ov107_02296674();
    (this->*tbl[unk_8c])();
    func_ov107_0229663c();
    return TRUE;
}

void Unk_ov107_02296e78::func_ov107_02296964() {
    static Unk_ov107_02296e78_Fn tbl[24] = {
        &Unk_ov107_02296e78::func_ov107_02296564,
        &Unk_ov107_02296e78::func_ov107_022964c4,
        &Unk_ov107_02296e78::func_ov107_022964a8,
        &Unk_ov107_02296e78::func_ov107_02296460,
        &Unk_ov107_02296e78::func_ov107_022963c8,
        &Unk_ov107_02296e78::func_ov107_022962e8,
        &Unk_ov107_02296e78::func_ov107_02296270,
        &Unk_ov107_02296e78::func_ov107_02296224,
        &Unk_ov107_02296e78::func_ov107_022961e0,
        &Unk_ov107_02296e78::func_ov107_022961a8,
        &Unk_ov107_02296e78::func_ov107_02296180,
        &Unk_ov107_02296e78::func_ov107_02296144,
        &Unk_ov107_02296e78::func_ov107_022960f4,
        &Unk_ov107_02296e78::func_ov107_022960d4,
        &Unk_ov107_02296e78::func_ov107_022960a0,
        &Unk_ov107_02296e78::func_ov107_02296018,
        &Unk_ov107_02296e78::func_ov107_02295130,
        &Unk_ov107_02296e78::func_ov107_02294fb0,
        &Unk_ov107_02296e78::func_ov107_02295ff0,
        &Unk_ov107_02296e78::func_ov107_02295fc8,
        &Unk_ov107_02296e78::func_ov107_02295fb0,
        &Unk_ov107_02296e78::func_ov107_02295200,
        &Unk_ov107_02296e78::func_ov107_02294e84,
        &Unk_ov107_02296e78::func_ov107_02294e38};
    (this->*tbl[unk_8d])();
}

BOOL Unk_ov107_02296e78::vfunc_50() {
    func_ov107_022966bc();
    func_ov107_02296964();
    func_ov107_022966b4();
    return TRUE;
}

BOOL Unk_ov107_02296e78::vfunc_54() { return TRUE; }

BOOL Unk_ov107_02296e78::vfunc_58() { return TRUE; }

BOOL Unk_ov107_02296e78::vfunc_5c() {
    func_020ed188(this);
    return TRUE;
}

void Unk_ov107_02296e78::func_ov107_02296914() {
    func_ov107_0229661c();
    func_ov107_02296608();
    func_ov002_02200a50(1);
}

void Unk_ov107_02296e78::func_ov107_02296884() {
    func_ov107_022965e4();
    func_ov002_02203510(&unk_26b8, 0x65);
    func_ov094_022937a0(&unk_10c);
    func_ov107_02295ce4();
    func_ov094_02293d2c(&unk_b6c);
    func_ov094_022941f8(&unk_b6c, 0xf);
    func_ov002_022008e0(8, 0, 0, 0x30);
    func_020020b8(6);
    func_ov002_02200840(6, 0, -16);
    func_ov002_02200a50(2);
    func_ov107_02294d64(1);
    func_ov107_02294d64(2);
    unk_98 = func_ov002_02200920();
}

void Unk_ov107_02296e78::func_ov107_02296848() {
    if (func_ov002_02200908(0)) {
        func_ov002_02200a60(2);
        func_ov107_02295f40();
    }
    func_ov002_02200840(6, 0, -16);
    unk_98 = func_ov002_02200920();
}

void Unk_ov107_02296e78::func_ov107_022967e8() {
    func_ov002_022006e4(&unk_2174, 1);
    func_ov107_02295950();
    func_ov092_02291ce4(func_020ed174(this), 0x44, 1);
    func_ov002_022008c4(8, 0, 0, 0x30);
    func_ov002_02200840(6, 0, -16);
    func_ov002_02200a50(4);
    unk_98 = func_ov002_02200920();
}

void Unk_ov107_02296e78::func_ov107_0229679c()
{
    if (func_ov002_022008fc(0)) {
        func_020021a0(6);
        func_ov002_02200a60(5);
        func_ov107_02294d54(1);
        func_ov107_02294d54(2);
    } else {
        func_ov002_02200840(6, 0, -16);
    }
    unk_98 = func_ov002_02200920();
}

void Unk_ov107_02296e78::func_ov107_02296718()
{
    unk_94 = 0;
    func_ov094_022939c0(&unk_10c, 2);
    func_ov094_02294644(&unk_b6c, 2);
    func_ov094_02292d30(&unk_b94, 6);
    unk_b7 = 0x10;
    func_ov002_022027a4(&unk_2234);
    unk_b5 = 0;
    unk_b8 = 0;
    func_ov002_02202310(&unk_22b0, 3, 1, 0);
    if (func_ov107_02295070()) {
        func_ov107_02294d64(0x40);
    }
    unk_bf = 0;
}

void Unk_ov107_02296e78::func_ov107_022966d8()
{
    func_ov107_02295e54();
    func_ov094_02292a80(&unk_b94);
    func_ov094_02293998(&unk_10c);
    func_ov002_02201b04(&unk_22b0);
    func_ov002_02203900(&unk_26b8);
}

void Unk_ov107_02296e78::func_ov107_022966bc()
{
    func_ov107_02296674();
    unk_224c.vfunc_0c();
}

void Unk_ov107_02296e78::func_ov107_022966b4()
{
    func_ov107_0229663c();
}

void Unk_ov107_02296e78::func_ov107_02296674()
{
    func_ov107_02295e54();
    func_ov094_02292acc(&unk_b94);
    func_ov094_022939a0(&unk_10c);
    func_ov094_0229462c(&unk_b6c);
    func_ov002_02203900(&unk_26b8);
}

void Unk_ov107_02296e78::func_ov107_0229663c()
{
    func_ov002_02201b58(&unk_22b0);
    func_ov094_02292aa4(&unk_b94);
    if (func_ov002_0220071c(&unk_2174)) {
        func_ov107_02295aa4();
    }
}

void Unk_ov107_02296e78::func_ov107_0229661c()
{
    func_02002398(6, 2);
    func_0200226c(6, 0, 0, 0);
}

void Unk_ov107_02296e78::func_ov107_02296608()
{
    func_ov094_02292d1c(&unk_b94, 0);
}

void Unk_ov107_02296e78::func_ov107_022965e4()
{
    func_ov094_02292ae0(&unk_b94);
    func_ov002_02203920(&unk_26b8);
}

void Unk_ov107_02296e78::func_ov107_02296564()
{
    if (func_ov002_02200a14(1)) {
        func_ov107_02295f60();
    } else if (Unk_ov107_02296270_Both()) {
        s32 r = func_ov107_02295ddc(data_021ef5f0, data_021ef5ec + 0x10, 1);
        if (r != 0x10) {
            func_ov107_02295eb8(r);
        } else if (func_ov002_02203110(&unk_26b8, 9)) {
            func_ov107_022955d4();
        }
    }
}

void Unk_ov107_02296e78::func_ov107_022964c4()
{
    if (data_021f4770 == 0) {
        if (func_ov107_02295c1c(unk_b6)) {
            func_ov002_02200a58(0);
            func_ov002_022006a4(&unk_2174, 0x3c);
        } else {
            func_ov002_02200a58(3);
            func_ov107_02296964();
        }
    } else if (func_ov107_02295c1c(unk_b6) == 0 && func_ov002_02200680(&unk_2174)) {
        if (unk_bf != 0) {
            unk_bf = *(volatile u8 *)&unk_bf - 1;
        } else {
            func_ov107_02295450(unk_b6, 1);
            func_ov002_02200a58(2);
        }
    } else {
        func_ov002_022006c0(&unk_2174);
    }
}

void Unk_ov107_02296e78::func_ov107_022964a8()
{
    if (data_021f4770 == 0) {
        func_ov002_02200a58(4);
    }
}

void Unk_ov107_02296e78::func_ov107_02296460()
{
    if (func_ov002_02200680(&unk_2174)) {
        if (unk_bf != 0) {
            unk_bf = *(volatile u8 *)&unk_bf - 1;
        } else {
            func_ov107_02295450(unk_b6, 1);
            func_ov002_02200a58(2);
        }
    }
}

void Unk_ov107_02296e78::func_ov107_022963c8()
{
    if (func_ov002_022017b4(&unk_22b0)) {
        if (func_ov002_02200a14(1)) {
            func_ov107_02295638();
        } else if (Unk_ov107_02296270_Both()) {
            s32 r = func_ov002_022014c0(&unk_22b0, data_021ef5f0, data_021ef5ec);
            if (r >= 0) {
                func_ov002_02201aa0(&unk_22b0, r, 1);
                unk_bc = unk_22b0.unk_2f9[r];
                func_ov002_02200a58(0xc);
            }
        }
    }
}

void Unk_ov107_02296e78::func_ov107_022962e8()
{
    if (func_ov002_022009d4()) {
        func_ov107_02295f94();
        func_ov002_022006e4(&unk_2174, 1);
    } else if (func_ov107_022952e4((void *)func_ov002_022009c8())) {
        func_ov107_02295a50();
        func_ov107_022958dc();
        func_ov002_022006e4(&unk_2174, 0);
    } else if (func_ov107_02295c1c(unk_b8) == 0 && (data_021f47d8[1] & 1) != 0) {
        if (func_ov107_02295e48(unk_b8)) {
            if (!func_ov107_02295be8(unk_b8)) {
                func_ov107_02295450(unk_b8, 0);
            }
        } else if (unk_b8 == 0xf) {
            func_ov107_02295768();
        }
    } else if ((data_021f47d8[1] & 2) != 0) {
        func_ov107_02295950();
        func_ov107_022955d4();
        func_ov002_022006e4(&unk_2174, 0);
    } else {
        func_ov002_022006c0(&unk_2174);
    }
}

void Unk_ov107_02296e78::func_ov107_02296270()
{
    if (func_ov002_022009d4()) {
        func_ov107_02295638();
    } else if (func_ov002_022019d0(&unk_22b0, func_ov002_022009c8(), &unk_bd, 0)) {
        func_ov107_0229588c();
    } else {
        u16 f = data_021f47d8[1];
        if ((f & 1) != 0) {
            func_ov002_02202b68(&unk_224c);
            func_ov002_02200a58(7);
        } else if ((f & 2) != 0) {
            func_ov107_02295828();
        }
    }
}

void Unk_ov107_02296e78::func_ov107_02296224()
{
    if (func_0208d4fc(&unk_224c)) {
        func_ov002_02201aa0(&unk_22b0, unk_bd, 1);
        unk_bc = unk_22b0.unk_2f9[unk_bd];
        func_ov002_02200a58(0xc);
    }
}

void Unk_ov107_02296e78::func_ov107_022961e0()
{
    if (!func_ov002_022028f0(&unk_224c)) {
        func_ov002_02200a58(unk_bb);
        if (unk_bb == 5) {
            func_ov107_02295b14(unk_b8);
        }
        func_ov107_02296964();
    }
}

void Unk_ov107_02296e78::func_ov107_022961a8()
{
    if (func_0208d4fc(&unk_224c)) {
        func_ov002_022030ac(&unk_26b8, 9);
        func_ov002_02200a58(0xf);
        func_0200402c(0x28);
    }
}

void Unk_ov107_02296e78::func_ov107_02296180()
{
    if (func_0208d4fc(&unk_224c)) {
        func_ov107_02295788();
        func_ov002_02200a58(5);
    }
}

void Unk_ov107_02296e78::func_ov107_02296144()
{
    if (func_ov002_022017b4(&unk_22b0)) {
        if (func_0206ef00()) {
            func_ov107_022957dc();
            func_ov002_02200a58(6);
        } else {
            func_ov002_02200a58(4);
        }
    }
}

void Unk_ov107_02296e78::func_ov107_022960f4()
{
    if (func_ov002_02201a28(&unk_22b0)) {
        func_ov002_02202064(&unk_22b0, 0);
        func_ov002_022006e4(&unk_2174, 1);
        if (func_0208d534(&unk_224c)) {
            func_ov107_022957a8();
        }
        func_ov002_02200a58(0xd);
    }
}

void Unk_ov107_02296e78::func_ov107_022960d4()
{
    if (func_ov002_022017a4(&unk_22b0)) {
        func_ov107_022956d4();
    }
}

void Unk_ov107_02296e78::func_ov107_022960a0()
{
    if (func_ov002_02204234(&unk_25b0, 0)) {
        func_ov002_02200a58(unk_bb);
        func_0208d644(&unk_224c);
    }
}

void Unk_ov107_02296e78::func_ov107_02296018()
{
    if (func_ov002_0220308c(&unk_26b8)) {
        if (func_0208d534(&unk_224c)) {
            s32 a = func_ov002_0220306c(&unk_26b8);
            s32 b = func_ov002_022030f4(&unk_26b8, -1);
            s32 c = func_ov002_022030b8(&unk_26b8, -1);
            func_ov002_02202a40(&unk_224c, a + b, a + c);
        }
    } else {
        func_0206ecf8(0);
        unk_8c = 3;
        func_ov002_02200a60(1);
        func_ov002_022006e4(&unk_2174, 1);
        func_ov107_02295950();
    }
}

void Unk_ov107_02296e78::func_ov107_02295ff0()
{
    func_ov107_02294e14();
    if (func_ov003_02227434() != 3) {
        unk_be = 5;
        func_ov002_02200a58(0x13);
    }
}

void Unk_ov107_02296e78::func_ov107_02295fc8()
{
    if (unk_be != 0) {
        unk_be = *(volatile u8 *)&unk_be - 1;
    } else {
        func_ov107_022955fc();
    }
}

void Unk_ov107_02296e78::func_ov107_02295fb0()
{
    if (func_020951a0()) {
        func_ov107_022955fc();
    }
}

void Unk_ov107_02296e78::func_ov107_02295f94()
{
    func_ov107_02295950();
    func_ov107_02295b58();
    func_ov002_02200a58(0);
}

void Unk_ov107_02296e78::func_ov107_02295f60()
{
    unk_b7 = 0x10;
    func_ov107_022959c8();
    func_ov002_02200980();
    func_ov107_02295a50();
    func_ov002_02200a58(5);
    func_ov107_02295b14(unk_b8);
}

void Unk_ov107_02296e78::func_ov107_02295f40()
{
    if (func_0206ef0c()) {
        func_ov107_02295f94();
    } else {
        func_ov107_02295f60();
    }
}

void Unk_ov107_02296e78::func_ov107_02295eb8(u32 a)
{
    unk_b6 = a;
    func_ov002_02200a58(1);
    u32 x = data_021ef5f0;
    u32 y = data_021ef5ec;
    unk_9c = func_ov107_02295d5c(unk_b6) - x;
    unk_a0 = func_ov107_02295d20(unk_b6) - y;
    unk_b7 = a;
    func_ov002_022006b8(&unk_2174);
    func_ov002_022006c0(&unk_2174);
    unk_bf = 2;
    if (func_ov107_02295c1c(a) == 0) {
        func_ov094_0229238c();
    }
}

void Unk_ov107_02296e78::func_ov107_02295e60(s32 a, u32 b) {
    volatile u8 v[1];
    if (b == 0xff) {
        unk_bb = unk_8d;
    } else {
        unk_bb = b;
    }
    v[0] = data_021edb68;
    v[0] = a;
    func_ov002_02204394(&unk_25b0, (void *)v, 1, 0);
    func_ov002_02200a58(0xe);
    func_0208d63c(&unk_224c);
}

void Unk_ov107_02296e78::func_ov107_02295e54() {
    func_020b87d0(unk_d4);
}

BOOL Unk_ov107_02296e78::func_ov107_02295e48(s32 a) {
    if ((u32)a <= 0xe) return TRUE;
    return FALSE;
}

u32 Unk_ov107_02296e78::func_ov107_02295e2c(s32 a) {
    if (func_ov107_02295e48(a)) return (u8)a;
    return 0;
}

u32 Unk_ov107_02296e78::func_ov107_02295e1c(s32 a) {
    if ((u32)a <= 0xe) return (u8)a;
    return 0x10;
}

u32 Unk_ov107_02296e78::func_ov107_02295ddc(s32 a, s32 b, s32 c) {
    u32 t = func_ov094_02293968(&unk_10c);
    if (t != 0x23) {
        if (c != 0) {
            if (func_ov094_0229311c(&unk_10c, t)) return 0x10;
        }
        return func_ov107_02295e1c(t);
    }
    return 0x10;
}

void Unk_ov107_02296e78::func_ov107_02295d98(s32 a, s32 b, s32 c) {
    if (func_ov107_02295e48(a)) {
        s32 t = func_ov107_02295e2c(a);
        func_ov094_02293494(&unk_10c, t, b, c);
        func_ov094_02293434(&unk_10c, t);
    }
}

s32 Unk_ov107_02296e78::func_ov107_02295d5c(s32 a) {
    if (func_ov107_02295e48(a)) {
        return func_ov094_02293624(&unk_10c, func_ov107_02295e2c(a));
    } else if (a == 0xf) {
        return 0xbc;
    }
    return 0;
}

s32 Unk_ov107_02296e78::func_ov107_02295d20(s32 a) {
    if (func_ov107_02295e48(a)) {
        return func_ov094_02293610(&unk_10c, func_ov107_02295e2c(a)) - 0x10;
    } else if (a == 0xf) {
        return 0xb6;
    }
    return 0;
}

void Unk_ov107_02296e78::func_ov107_02295ce4() {
    u8 i = 0;
    do {
        if (func_ov107_02295c50(i)) {
            func_ov094_02293308(&unk_10c, func_ov107_02295e2c(i));
        }
        i++;
    } while (i <= 0xe);
}

BOOL Unk_ov107_02296e78::func_ov107_02295c50(s32 a) {
    u32 r;
    if (func_ov107_02295be8(a)) return FALSE;
    if (func_ov107_02295b7c(a)) return TRUE;
    r = func_ov107_02295bb0(a);
    if ((r >= 0x137c && r <= 0x137c) || (r >= 0x1408 && r <= 0x1428) || (r >= 0x1471 && r <= 0x1491)) {
        return TRUE;
    }
    if (r >= 0x12e8 && r <= 0x131f) {
        if (!func_ov107_02294d74(0x40)) return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov107_02296e78::func_ov107_02295c1c(s32 a) {
    if (func_ov107_02295e48(a)) {
        return func_ov094_0229333c(&unk_10c, func_ov107_02295e2c(a));
    }
    return FALSE;
}

BOOL Unk_ov107_02296e78::func_ov107_02295be8(s32 a) {
    if (func_ov107_02295e48(a)) {
        return func_ov094_0229311c(&unk_10c, func_ov107_02295e2c(a));
    }
    return TRUE;
}

u32 Unk_ov107_02296e78::func_ov107_02295bb0(s32 a) {
    if (func_ov107_02295e48(a)) {
        return func_ov094_0229352c(&unk_10c, func_ov107_02295e2c(a));
    }
    return 0xfff1;
}

u32 Unk_ov107_02296e78::func_ov107_02295b7c(s32 a) {
    if (func_ov107_02295e48(a)) {
        return func_ov094_02293504(&unk_10c, func_ov107_02295e2c(a));
    }
    return 0xf1;
}

void Unk_ov107_02296e78::func_ov107_02295b58() {
    func_ov094_022935dc(&unk_10c);
    func_ov094_022943f8(&unk_b6c);
}

void Unk_ov107_02296e78::func_ov107_02295b14(s32 a) {
    if (func_ov107_02295e48(a)) {
        func_ov094_0229359c(&unk_10c, func_ov107_02295e2c(a));
        func_ov094_022943f8(&unk_b6c);
    } else {
        func_ov107_02295b58();
    }
}

void Unk_ov107_02296e78::func_ov107_02295aa4() {
    s32 r6 = func_ov107_02295d5c(unk_b7) - 0x6d;
    s32 r4 = func_ov107_02295d20(unk_b7) - 0x78;
    if (func_0206ef00()) r4 -= 8;
    func_02089ad8(&unk_2174, r6, r4);
    if (func_ov107_02295e48(unk_b7)) {
        func_ov094_02293638(&unk_10c, &unk_2174, func_ov107_02295e2c(unk_b7));
    }
}

void Unk_ov107_02296e78::func_ov107_02295a50() {
    if (func_ov107_02295e48(unk_b8)) {
        if (func_ov107_02295be8(unk_b8)) {
            func_ov002_022006b0(&unk_2174);
        } else {
            unk_b7 = unk_b8;
            func_ov002_022006b8(&unk_2174);
        }
    } else {
        func_ov002_022006b0(&unk_2174);
    }
}

void Unk_ov107_02296e78::func_ov107_02295a18() {
    if (!func_ov107_02294d74(0x20)) {
        if (unk_b5 != 0) {
            if (unk_b5 == 1) {
                func_ov094_0229313c(&unk_10c, unk_a4, unk_a8);
            }
        }
    }
}

void Unk_ov107_02296e78::func_ov107_022959c8() {
    s32 r4 = func_ov107_02295984();
    s32 r2 = func_ov107_02295974();
    func_ov002_02202a40(&unk_224c, r4, r2);
    if (unk_b8 == 0xf) {
        func_ov002_02202d00(&unk_224c, 7);
    } else {
        func_ov002_02202d00(&unk_224c, 1);
    }
    func_ov107_02295788();
}

s32 Unk_ov107_02296e78::func_ov107_02295984() {
    s32 r4 = func_ov107_02295d5c(unk_b8);
    if (func_ov107_02294d74(0x10)) {
        r4 += 0x100;
    } else if (func_ov107_02294d74(8)) {
        r4 -= 0x100;
    }
    r4 += 8;
    return r4;
}

s32 Unk_ov107_02296e78::func_ov107_02295974() {
    return func_ov107_02295d20(unk_b8);
}

void Unk_ov107_02296e78::func_ov107_02295950() {
    func_ov002_02202d00(&unk_224c, 0);
    unk_224c.vfunc_0c();
}

void Unk_ov107_02296e78::func_ov107_022958dc() {
    if (func_ov107_02294d74(4)) {
        s32 r5 = func_ov107_02295984();
        s32 r2 = func_ov107_02295974();
        func_ov002_02202a40(&unk_224c, r5, r2);
        func_ov107_02294d54(4);
    } else {
        s32 r5 = func_ov107_02295984();
        s32 r2 = func_ov107_02295974();
        func_ov002_022029e8(&unk_224c, r5, r2, 3, 1);
        unk_bb = unk_8d;
        func_ov002_02200a58(8);
    }
}

void Unk_ov107_02296e78::func_ov107_0229588c() {
    s32 r4 = func_ov002_022014a4(&unk_22b0);
    s32 r2 = func_ov002_02201498(&unk_22b0, unk_bd);
    func_ov002_02202a18(&unk_224c, r4, r2, 2);
    unk_bb = unk_8d;
    func_ov002_02200a58(8);
}

void Unk_ov107_02296e78::func_ov107_02295828() {
    s32 r4;
    s32 r2;
    unk_bc = 4;
    unk_bd = func_ov002_02201a70(&unk_22b0, 1);
    r4 = func_ov002_022014a4(&unk_22b0);
    r2 = func_ov002_02201498(&unk_22b0, unk_bd);
    func_ov002_02202a40(&unk_224c, r4, r2);
    func_0208d538(&unk_224c, 8);
    func_ov002_02200a58(0xc);
}

void Unk_ov107_02296e78::func_ov107_022957dc() {
    s32 r4;
    s32 r2;
    unk_bd = 0;
    r4 = func_ov002_022014a4(&unk_22b0);
    r2 = func_ov002_02201498(&unk_22b0, unk_bd);
    func_ov002_02202a40(&unk_224c, r4, r2);
    func_ov002_02202d00(&unk_224c, 7);
}

void Unk_ov107_02296e78::func_ov107_022957a8() {
    s32 r4 = func_ov107_02295984();
    s32 r2 = func_ov107_02295974();
    func_ov002_02202a40(&unk_224c, r4, r2);
    func_ov002_02202d00(&unk_224c, 1);
}

void Unk_ov107_02296e78::func_ov107_02295788() {
    func_ov002_02202a78(&unk_224c);
    unk_224c.vfunc_0c();
}

void Unk_ov107_02296e78::func_ov107_02295768() {
    func_ov002_02202b68(&unk_224c);
    func_ov002_02200a58(9);
}

void Unk_ov107_02296e78::func_ov107_022956d4() {
    if (unk_bc == 4) {
        func_ov107_02295f40();
    } else {
        static Unk_ov107_02296e78_Fn tbl[4] = {
            &Unk_ov107_02296e78::func_ov107_022951e0,
            &Unk_ov107_02296e78::func_ov107_02295270,
            &Unk_ov107_02296e78::func_ov107_02295048,
            &Unk_ov107_02296e78::func_ov107_02294ed4,
        };
        (this->*tbl[unk_bc])();
    }
}

void Unk_ov107_02296e78::func_ov107_02295664(s32 a) {
    s32 r6, r2;
    func_ov002_0220160c(&unk_22b0, (void *)&unk_22b0.unk_2f4, 0);
    r6 = func_ov107_02295d5c(unk_b9);
    r2 = func_ov107_02295d20(unk_b9);
    if (a != 0) {
        func_ov002_02202200(&unk_22b0, &unk_2174, r2);
    } else {
        func_ov002_0220229c(&unk_22b0, r6, r2);
    }
    func_ov002_02202098(&unk_22b0, 0);
    func_ov002_02200a58(0xb);
}

void Unk_ov107_02296e78::func_ov107_02295638() {
    unk_bc = 4;
    func_ov107_022957a8();
    func_ov002_02202064(&unk_22b0, 0);
    func_ov002_02200a58(0xd);
}

void Unk_ov107_02296e78::func_ov107_022955fc() {
    func_0206ed2c(unk_b9);
    func_0206ecf8(1);
    unk_8c = 3;
    func_ov002_02200a60(1);
    func_ov002_022006e4(&unk_2174, 1);
    func_ov107_02295950();
}

void Unk_ov107_02296e78::func_ov107_022955d4() {
    func_ov002_022030ac(&unk_26b8, 9);
    func_ov002_02200a58(0xf);
    func_0200402c(0x28);
}

void Unk_ov107_02296e78::func_ov107_02295568() {
    u16 a;
    u16 b;
    u32 r6, r4;
    a = func_0206e750();
    func_02061478(&b, &a);
    r6 = b;
    r4 = 0;
    if (r6 == 0x156b) {
        r6 = func_020991b0();
        r4 = 1;
    }
    func_0209750c();
    func_0203c42c(func_020986c8(), &b, 0, 1);
    func_ov107_02295bb0(unk_b9);
    func_0206e744();
    func_ov107_02295d98(unk_b9, r6, r4);
}

void Unk_ov107_02296e78::func_ov107_022954a4() {
    func_0206ea6c();
    s32 r6 = func_ov107_02295bb0(unk_b9);
    volatile u16 v = r6;
    s32 t = func_0206ed50();
    BOOL ok = FALSE;
    u32 a = v;
    u32 b = v;
    if (b < 0x12b0 || a > 0x12e7) {
    } else {
        ok = TRUE;
    }
    if (ok) {
        func_ov002_02201700(&unk_22b0.unk_2f4, 0x10, 0);
    } else if (a >= 0x12e8 && a <= 0x131f) {
        func_ov002_02201700(&unk_22b0.unk_2f4, 0x10, 2);
    } else if (t == 0x2a) {
        func_ov002_02201700(&unk_22b0.unk_2f4, 0x10, 3);
    }
    if (func_ov094_022923a4(r6)) {
        if (t == 0x2a) {
            func_ov002_02201700(&unk_22b0.unk_2f4, 1, 1);
        } else {
            func_ov002_02201700(&unk_22b0.unk_2f4, 0x10, 1);
        }
    }
    func_ov002_02201700(&unk_22b0.unk_2f4, 2, 4);
}

void Unk_ov107_02296e78::func_ov107_02295450(u32 idx, u32 flag) {
    unk_b9 = idx;
    func_ov002_022016e4(&unk_22b0.unk_2f4, 4);
    if (func_ov107_02295e48(idx)) {
        func_ov107_022954a4();
        func_ov107_02295950();
        if (flag == 0) {
            func_ov002_022006e4(&unk_2174, 1);
        }
        func_ov107_02295664(flag);
    }
}

void Unk_ov107_02296e78::func_ov107_02295354(void *pad) {
    s32 n = unk_b8;
    s32 q = 0;
    while (n >= 5) {
        n -= 5;
        q++;
    }
    if (func_ov002_0220126c(pad)) {
        if (func_ov002_0220128c(pad) == 0 || q == 0) {
            if (n == 0) {
                unk_b8 = unk_b8 + 4;
                func_ov107_02294d64(8);
            } else {
                unk_b8 = unk_b8 - 1;
            }
        }
    } else if (func_ov002_0220125c(pad)) {
        if (func_ov002_0220127c(pad) == 0) {
            if (n == 4) {
                unk_b8 = unk_b8 - 4;
                func_ov107_02294d64(0x10);
            } else {
                unk_b8 = unk_b8 + 1;
            }
        }
    }
    if (func_ov107_02294d74(0x18) == 0) {
        if (func_ov002_0220128c(pad)) {
            if (q > 0) {
                unk_b8 = unk_b8 - 5;
            }
        } else if (func_ov002_0220127c(pad)) {
            if (q < 2) {
                unk_b8 = unk_b8 + 5;
            } else {
                unk_b8 = 0xf;
                func_ov002_02202ca0(&unk_224c);
            }
        }
    }
}

BOOL Unk_ov107_02296e78::func_ov107_022952e4(void *pad) {
    u8 old = unk_b8;
    func_ov107_02294d54(0x18);
    if (pad == 0) {
        return FALSE;
    }
    if (func_ov107_02295e48(unk_b8)) {
        func_ov107_02295354(pad);
    } else if (unk_b8 == 0xf) {
        if (func_ov002_0220128c(pad)) {
            unk_b8 = 0xe;
            func_ov002_02202c40(&unk_224c);
        }
    }
    if (old == unk_b8) {
        return FALSE;
    }
    return TRUE;
}

void Unk_ov107_02296e78::func_ov107_02295270() {
    s32 t = func_ov107_02295bb0(unk_b9);
    if (func_0206ed50() == 0x29) {
        unk_ac = func_02042c08(data_020cbb18->unk_64, t);
    } else {
        unk_ac = func_02042bd0(data_020cbb18->unk_64, t);
    }
    if (unk_ac == -1) {
        func_ov107_02295f40();
        func_ov107_02295e60(3, 0xff);
    } else {
        func_ov002_02200a58(0x15);
    }
}

void Unk_ov107_02296e78::func_ov107_02295200() {
    switch (func_02042830(unk_ac)) {
    case 1:
        func_ov107_02294d88(0);
        func_ov107_02295568();
        func_02042820(unk_ac);
        unk_be = 10;
        func_ov002_02200a58(0x13);
        unk_ac = -1;
        break;
    case 2:
        func_02042820(unk_ac);
        func_ov107_02295f40();
        func_ov107_02295e60(3, 0xff);
        unk_ac = -1;
        break;
    }
}

void Unk_ov107_02296e78::func_ov107_022951e0() {
    func_ov107_02294d88(1);
    func_ov002_02200a58(0x10);
    func_ov107_02295130();
}

void Unk_ov107_02296e78::func_ov107_02295130() {
    s32 r7 = func_ov107_02294e14();
    if (func_ov003_02227434(r7) == 0) {
        struct { u16 a; } l;
        l.a = func_ov107_02295bb0(unk_b9);
        BOOL ok = FALSE;
        volatile u16 *pv = &l.a;
        u16 a = *pv;
        u16 b = *pv;
        if (b >= 0x12b0 && a <= 0x12e7) {
            ok = TRUE;
        }
        s32 r5 = ok ? a - 0x12b0 : -1;
        u8 t = func_02063b8c(0x3c);
        s16 x = (t - 0x1e) * 0xb6;
        x += *(s16 *)(func_02095204(4) + 0x8e);
        func_ov003_02227248((u8)r5, r7);
        func_ov003_0222746c(r7, x);
        func_ov003_02212504(0);
        func_ov107_022950e8((u8)r5, t);
        func_ov002_02200a58(0x12);
        func_ov107_02295568();
    }
}

void Unk_ov107_02296e78::func_ov107_022950e8(u8 a, u8 b) {
    u8 buf[3];
    if (func_02072e44(data_020cbb18)) {
        buf[0] = 1;
        buf[1] = a;
        buf[2] = b;
        void *g = data_020cbb18;
        func_020728d4(g);
        func_020728a4(g, buf, 3);
        func_02072824(g, 0x16, 4);
    }
}

BOOL Unk_ov107_02296e78::func_ov107_02295070() {
    s32 t = func_0206ed50();
    u8 k = func_ov107_02294e14();
    if (t == 0x2c) {
        return func_ov003_02220290(&unk_c0, k);
    }
    u8 *p = func_02095204(4);
    void *q = p + 0x5c;
    s32 i = 0;
    s32 base = *(s16 *)(p + 0x8e);
    for (; i < 8; i++) {
        if (func_02030d78(&unk_c0, q, (s16)(base + data_ov107_02296d40[i]), 0x7800, 0xa00, 0xc)) {
            return TRUE;
        }
    }
    return FALSE;
}

void Unk_ov107_02296e78::func_ov107_02295048() {
    func_ov107_02294d88(1);
    unk_be = 5;
    func_ov002_02200a58(0x11);
    func_ov107_02294fb0();
}

void Unk_ov107_02296e78::func_ov107_02294fb0() {
    if (*(volatile u8 *)&unk_be != 0) {
        unk_be = unk_be - 1;
    } else {
        u8 k = func_ov107_02294e14();
        s32 t = func_ov107_02295bb0(unk_b9);
        if (func_ov003_022201bc(k, t, &unk_c0)) {
            volatile u16 v = t;
            BOOL ok = FALSE;
            u32 a = v;
            u32 b = v;
            s32 idx;
            if (b < 0x12e8 || a > 0x131f) {
            } else {
                ok = TRUE;
            }
            if (ok) {
                idx = a - 0x12e8;
            } else {
                idx = -1;
            }
            func_ov107_02294f48((u8)idx);
            unk_be = 0x14;
            func_ov002_02200a58(0x13);
            func_ov107_02295568();
        }
    }
}

void Unk_ov107_02296e78::func_ov107_02294f48(u8 v) {
    u8 buf[7];
    u8 tmp[5];
    if (func_02072e44(data_020cbb18)) {
        buf[0] = 2;
        buf[1] = v;
        func_02076a6c(tmp, unk_c0, unk_c8);
        MI_CpuCopy8(tmp, &buf[2], 5);
        void *g = data_020cbb18;
        func_020728d4(g);
        func_020728a4(g, buf, 7);
        func_02072824(g, 0x16, 4);
    }
}

void Unk_ov107_02296e78::func_ov107_02294ed4() {
    s32 t = func_ov107_02295bb0(unk_b9);
    Unk_ov107_Comm *g = data_020cbb18;
    unk_ac = func_0204339c(g->unk_64, 2, 0, t);
    if (unk_ac == -1) {
        func_ov107_02295f40();
        func_ov107_02295e60(3, 0xff);
    } else {
        u16 *p = func_020451c4(g->unk_68);
        u32 w = *p;
        unk_cc = (s32)w >> 8;
        unk_d0 = w & 0xff;
        func_ov002_02200a58(0x16);
    }
}

void Unk_ov107_02296e78::func_ov107_02294e84() {
    switch (func_02042d10(unk_ac)) {
    case 1:
        func_ov002_02200a58(0x17);
        func_ov107_02294e38();
        break;
    case 2:
        func_ov107_02295f40();
        func_ov107_02295e60(3, 0xff);
        break;
    default:
        return;
    }
    func_02042820(unk_ac);
    unk_ac = -1;
}

void Unk_ov107_02296e78::func_ov107_02294e38() {
    u16 v;
    u32 buf[3];
    func_0204ed8c(buf, unk_cc, unk_d0);
    v = func_ov107_02295bb0(unk_b9);
    if (func_ov003_0221255c(buf, &v)) {
        func_ov107_02295568();
        func_ov002_02200a58(0x14);
    }
}

u8 Unk_ov107_02296e78::func_ov107_02294e14() {
    Unk_ov107_Comm *g = data_020cbb18;
    u32 v = g->unk_64;
    if (func_02072e88(g, v)) {
        return (u8)v;
    }
    return 0;
}

void Unk_ov107_02296e78::func_ov107_02294d88(BOOL flag) {
    u8 buf[2];
    s32 t = func_0206ed50();
    u8 k = func_ov107_02294e14();
    switch (t) {
    case 0x29:
    case 0x2a:
        if (flag == 0) {
            break;
        }
        func_02045400();
        if (func_02072e44(data_020cbb18)) {
            buf[0] = 0x17;
            buf[1] = k;
            void *g = data_020cbb18;
            func_020728d4(g);
            func_020728a4(g, buf, 2);
            func_02072824(g, 0x16, 4);
        }
        break;
    case 0x2b:
        func_ov003_02227074(k, 1);
        break;
    case 0x2c:
        func_ov003_02223498(func_0206e868());
        break;
    }
}

BOOL Unk_ov107_02296e78::func_ov107_02294d74(u32 mask) {
    if (unk_94 & mask) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov107_02296e78::func_ov107_02294d64(u32 mask) { unk_94 = unk_94 | mask; }

// ---------------------------------------------------------------------------------------------

void Unk_ov107_02296e78::func_ov107_02294d54(u32 mask) { unk_94 = unk_94 & ~mask; }

extern "C" const s16 data_ov107_02296d40[8] = {0, 0x2000, -0x2000, 0x4000, -0x4000, 0x6000, -0x6000, 0x7fff};
