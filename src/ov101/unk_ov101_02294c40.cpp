// ov101: scene overlay (class Unk_ov101_02296b38, vtable 0x02296b38, 0x2804 bytes).
#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef vfunc_08
#undef vfunc_14

class Unk_ov101_02296b38;
class Unk_ov092_02291ec8;
class Unk_020e0d98;
class Unk_ov002_022013ac_Rec;

extern "C" {
extern u8 data_021ef5f0;
extern u8 data_021ef5ec;
extern u16 data_021f47d8[];
extern u8 data_021f4770;
extern u8 data_021f4774;

BOOL func_0206ef00();
BOOL func_0206ef0c();
u32 func_0206ea6c();
u32 func_0206ea78();
void func_0206ecf8(u32 v);
void func_0206ed2c(u32 v);
void func_02002398(u32 a, u32 b);
void func_0200226c(u32 n, u32 a, u32 b, u32 c);
void func_020021a0(s32 a);
void func_020020b8(s32 a);
void func_0200402c(u32 v);
void func_020ed188();
void *func_020ed174(...);

void func_ov002_02201aa0(void *p, s32 a, s32 b);
void func_ov002_02201b58(void *p);
void func_ov002_02201b04(void *p);
void func_ov002_02201b28(void *p);
void func_ov002_02203920(void *p);
u32 func_ov002_02201a70(void *p);
void func_ov002_022016e4(void *p, u32 v);
void func_ov002_02201700(void *p, u32 a, u32 b);
void func_ov002_02202098(void *p, u32 v);
void func_ov002_02202064(void *p, u32 v);
BOOL func_ov002_022019d0(void *p, u32 a, void *b, u32 c);
BOOL func_ov002_02201a28(void *p);
BOOL func_ov002_0220125c(void *pad);
BOOL func_ov002_0220126c(void *pad);
BOOL func_ov002_0220127c(void *pad);
BOOL func_ov002_0220128c(void *pad);

void func_ov094_0229238c();
void func_ov094_0229357c(void *p, u32 v);
void func_ov094_0229358c(void *p);
void func_ov094_0229359c(void *p, u32 v);
void func_ov094_022935dc(void *p);
u32 func_ov094_02293504(void *p, u32 v);
u32 func_ov094_0229352c(void *p, u32 v);
BOOL func_ov094_0229311c(void *p, u32 v);
BOOL func_ov094_0229333c(void *p, u32 v);
s32 func_ov094_02293610(void *p, u32 v);
s32 func_ov094_02293624(void *p, u32 v);
void func_ov094_02293494(void *p, u32 a, u32 b, u32 c);
void func_ov094_02293434(void *p, u32 a);
void func_ov094_02293638(void *p, void *q, u32 a);
void func_ov094_02293308(void *p, u32 a);
u32 func_ov094_02293968(void *p);
void func_ov094_022934d8(void *p, u32 idx);
void func_ov094_0229341c(void *p, u32 a, u32 b);
void func_ov094_0229313c(void *p, s32 a, s32 b);
void func_ov094_02292ae0(void *p);
void func_ov094_02292d1c(void *p, s32 a);
void func_ov094_02292aa4(void *p);
void func_ov094_02292acc(void *p);
void func_ov094_022939a0(void *p);
void func_ov094_02292a80(void *p);
void func_ov094_02293998(void *p);
void func_ov094_022939c0(void *p, s32 a);
void func_ov094_02292d30(void *p, s32 a);
void func_ov094_022937a0(void *p);
void func_ov094_02293d2c(void *p);
void func_ov094_022932d0(void *p, s32 a, s32 b);
void func_ov094_0229277c(void *p, s32 a);
}

static inline BOOL Unk_ov101_02296280_Both()
{
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

class Unk_020e45f8 {
public:
    void func_020b87d0();
};

class Unk_020e4608 : public Unk_020e45f8 {
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
    void func_ov094_0229462c();
    void func_ov094_02294644(s32 a);
    void func_ov094_022941f8(u32 a);
    void func_ov094_022943b0();
    void func_ov094_022943f8();
    void func_ov094_022941a0(s32 a, s32 b);
    u32 unk_00[0x28 / 4];
};

class Unk_ov094_02292d6c {
public:
    Unk_ov094_02292d6c();
    ~Unk_ov094_02292d6c();
    u32 unk_00[0x15e0 / 4];
};

class Unk_020e0d98 {
public:
    virtual ~Unk_020e0d98();
    virtual void vfunc_08();
    void func_02089ad8(s32 x, s32 y);
    u32 unk_04[(0xbc - 4) / 4];
};

class Unk_ov002_02204468 : public Unk_020e0d98 {
public:
    Unk_ov002_02204468();
    virtual ~Unk_ov002_02204468();
    BOOL func_ov002_02200680();
    void func_ov002_022006a4(u8 v);
    void func_ov002_022006b0();
    void func_ov002_022006b8();
    void func_ov002_022006c0();
    BOOL func_ov002_022006e4(s32 a);
    s32 func_ov002_0220071c();
    u8 unk_bc[0xc0 - 0xbc];
};

class Unk_ov002_02204604 {
public:
    Unk_ov002_02204604();
    ~Unk_ov002_02204604();
    void func_ov002_022026c4(s32 x, s32 y, s32 n);
    void func_ov002_022026f4(s32 x, s32 y);
    s32 func_ov002_02202708();
    s32 func_ov002_02202710();
    BOOL func_ov002_02202718();
    void func_ov002_022027a4();
    u32 unk_00[0x18 / 4];
};

class Unk_020e100c {
public:
    virtual ~Unk_020e100c();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    BOOL func_0208d4fc();
    BOOL func_0208d534();
    void func_0208d538(s32 a);
    void func_0208d644();
};

class Unk_ov002_02202d98 : public Unk_020e100c {
public:
    void func_ov002_02202844();
    s32 func_ov002_022028a0();
    s32 func_ov002_022028c8();
    BOOL func_ov002_022028f0();
    BOOL func_ov002_022028fc();
    BOOL func_ov002_02202928();
    void func_ov002_022029e8(s32 a, s32 b, s32 c, s32 d);
    void func_ov002_02202a18(s32 a, s32 b, s32 c);
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

class Unk_ov002_022013ac {
public:
    BOOL func_ov002_022017a4();
    BOOL func_ov002_022017b4();
    s32 func_ov002_022014a4();
    s32 func_ov002_02201498(s32 a);
    s32 func_ov002_022014c0(s32 a, s32 b);
    void func_ov002_0220160c(Unk_ov002_022013ac_Rec *r, s32 a);
};

class Unk_ov002_02204558 {
public:
    Unk_ov002_02204558();
    virtual ~Unk_ov002_02204558();
    void func_ov002_02202200(Unk_020e0d98 *p);
    void func_ov002_0220229c(s32 a, s32 b);
    void func_ov002_02202310(s32 a, s32 b, const char *path);
    u32 unk_04[(0x2f4 - 4) / 4];
    u8 unk_2f4[5];
    u8 unk_2f9[7];
};

class Unk_ov002_022040ec {
public:
    Unk_ov002_022040ec();
    ~Unk_ov002_022040ec();
    BOOL func_ov002_02204234(s32 a);
    u32 unk_00[0x108 / 4];
};

class Unk_ov002_02202fac {
public:
    u32 unk_00[0x164 / 4];
    BOOL func_ov002_02203110(s32 idx);
    void func_ov002_022030ac(u8 v);
    BOOL func_ov002_0220308c();
    s32 func_ov002_0220306c();
    s32 func_ov002_022030b8(s32 idx);
    s32 func_ov002_022030f4(s32 idx);
};

class Unk_ov002_022046cc : public Unk_ov002_02202fac {
public:
    Unk_ov002_022046cc();
    ~Unk_ov002_022046cc();
    void func_ov002_02203900();
    void func_ov002_022036a4(s32 a);
    void func_ov002_02203510(s32 a);
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
    void func_ov002_022008c4(s32 a, s32 b, s32 c, s32 d);
    void func_ov002_022008e0(s32 a, s32 b, s32 c, s32 d);
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
    /* 0x91 */ u8 unk_91[3];
};

typedef void (Unk_ov101_02296b38::*Unk_ov101_02296b38_Fn)();

class Unk_ov101_02296b38 : public Unk_ov002_022044e4 {
public:
    Unk_ov101_02296b38()
        : unk_bc(), unk_f4(), unk_b54(), unk_b7c(), unk_215c(), unk_221c(), unk_2234(), unk_2298(), unk_2598(), unk_26a0() {}

    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_24();
    virtual BOOL vfunc_4c();
    virtual BOOL vfunc_50();
    virtual BOOL vfunc_54();
    virtual BOOL vfunc_58();
    virtual BOOL vfunc_5c();

    // methods at the start of the overlay
    void func_ov101_02294d4c(u32 mask);
    void func_ov101_02294d5c(u32 mask);
    BOOL func_ov101_02294d6c(u32 mask);
    BOOL func_ov101_02294d80(void *pad);
    void func_ov101_02294df0(void *pad);
    void func_ov101_02294eec(u32 idx, u32 v);
    void func_ov101_02294f40();
    void func_ov101_02294f6c();
    void func_ov101_02294fa0();
    void func_ov101_02294fdc();
    void func_ov101_02295008(u32 v);
    s32 func_ov101_02295078();
    void func_ov101_0229509c(u32 v);
    void func_ov101_022950e4(u32 v);
    void func_ov101_02295120();
    void func_ov101_02295140();
    void func_ov101_02295160();
    void func_ov101_02295194();
    void func_ov101_022951e0();
    void func_ov101_02295240();
    void func_ov101_02295290();
    void func_ov101_02295304();
    s32 func_ov101_02295328();
    s32 func_ov101_02295338();
    void func_ov101_0229537c();
    void func_ov101_022953cc(u32 idx);
    void func_ov101_02295404(u32 idx);
    void func_ov101_02295430(u32 idx);
    void func_ov101_02295498();
    void func_ov101_022954c0();
    void func_ov101_022954ec();
    void func_ov101_02295518();

    // middle of the overlay
    void func_ov101_0229556c();
    void func_ov101_022955d8(u32 a);
    void func_ov101_02295604();
    void func_ov101_02295620(u32 a);
    void func_ov101_02295660();
    u32 func_ov101_0229567c(u32 a);
    u32 func_ov101_022956ac(u32 a);
    BOOL func_ov101_022956e0(u32 a);
    BOOL func_ov101_02295710(u32 a);
    void func_ov101_02295740();
    s32 func_ov101_02295790(u32 a);
    s32 func_ov101_022957c8(u32 a);
    void func_ov101_02295800(u32 a, u32 b, u32 c);
    BOOL func_ov101_02295840(u32 a);
    u32 func_ov101_02295890(u32 a, u32 b, s32 c);
    u32 func_ov101_022958cc(u32 a);
    u32 func_ov101_022958dc(u32 a);
    BOOL func_ov101_022958f8(u32 a);
    void func_ov101_02295904();
    void func_ov101_02295910(u32 a, u32 b);
    void func_ov101_02295974(u32 a);
    void func_ov101_022959b8(u32 a);
    void func_ov101_02295a40();
    void func_ov101_02295a60();
    void func_ov101_02295a94();

    // state handlers (member-pointer table, index = unk_8d)
    void func_ov101_02295ab0();
    void func_ov101_02295b14();
    void func_ov101_02295b48();
    void func_ov101_02295b68();
    void func_ov101_02295bb8();
    void func_ov101_02295bf4();
    void func_ov101_02295c28();
    void func_ov101_02295c68();
    void func_ov101_02295cb0();
    void func_ov101_02295d00();
    void func_ov101_02295d2c();
    void func_ov101_02295d5c();
    void func_ov101_02295d84();
    void func_ov101_02295dbc();
    void func_ov101_02295e0c();
    void func_ov101_02295e58();
    void func_ov101_02295ed0();
    void func_ov101_02295f74();
    void func_ov101_02296068();
    void func_ov101_022960e4();
    void func_ov101_0229617c();
    void func_ov101_022961c4();
    void func_ov101_022961e0();
    void func_ov101_02296280();

    void func_ov101_02296310();
    void func_ov101_02296334();
    void func_ov101_02296348();
    void func_ov101_02296368();
    void func_ov101_022963a0();
    void func_ov101_022963dc();
    void func_ov101_022963e4();
    void func_ov101_02296400();
    void func_ov101_0229643c();
    void func_ov101_022964ac();
    void func_ov101_022964f8();
    void func_ov101_02296558();
    void func_ov101_02296594();
    void func_ov101_02296620();
    void func_ov101_02296670();

    /* 0x0094 */ u32 unk_94;
    /* 0x0098 */ s32 unk_98;
    /* 0x009c */ s32 unk_9c;
    /* 0x00a0 */ s32 unk_a0;
    /* 0x00a4 */ s32 unk_a4;
    /* 0x00a8 */ s32 unk_a8;
    /* 0x00ac */ u16 unk_ac;
    /* 0x00ae */ u8 unk_ae;
    /* 0x00af */ u8 unk_af;
    /* 0x00b0 */ u8 unk_b0;
    /* 0x00b1 */ u8 unk_b1;
    /* 0x00b2 */ u8 unk_b2;
    /* 0x00b3 */ u8 unk_b3;
    /* 0x00b4 */ u8 unk_b4;
    /* 0x00b5 */ u8 unk_b5;
    /* 0x00b6 */ u8 unk_b6;
    /* 0x00b7 */ u8 unk_b7;
    /* 0x00b8 */ u8 unk_b8;
    /* 0x00b9 */ u8 unk_b9;
    /* 0x00ba */ u8 unk_ba[2];
    /* 0x00bc */ Unk_020e4608 unk_bc[1];
    /* 0x00f4 */ Unk_ov094_02294a50 unk_f4;
    /* 0x0b54 */ Unk_ov094_02294bd4 unk_b54;
    /* 0x0b7c */ Unk_ov094_02292d6c unk_b7c;
    /* 0x215c */ Unk_ov002_02204468 unk_215c;
    /* 0x221c */ Unk_ov002_02204604 unk_221c;
    /* 0x2234 */ Unk_ov002_02204614 unk_2234;
    /* 0x2298 */ Unk_ov002_02204558 unk_2298;
    /* 0x2598 */ Unk_ov002_022040ec unk_2598;
    /* 0x26a0 */ Unk_ov002_022046cc unk_26a0;
};

extern "C" Unk_ov101_02296b38 *func_ov101_02296990() { return new Unk_ov101_02296b38(); }

BOOL Unk_ov101_02296b38::vfunc_00() {
    func_ov101_0229643c();
    func_ov002_02200a50(0);
    func_ov002_02200a60(0);
    return TRUE;
}

BOOL Unk_ov101_02296b38::vfunc_0c() {
    ((Unk_ov092_02291ec8 *)func_020ed174())->func_ov092_02291c5c();
    func_ov101_02296400();
    return TRUE;
}

BOOL Unk_ov101_02296b38::vfunc_24() {
    s32 t;
    func_ov002_02201b28(&unk_2298);
    if (!func_ov101_02294d6c(1)) {
        return TRUE;
    }
    unk_215c.vfunc_08();
    if (func_0206ef00()) {
        unk_2234.func_ov002_02202844();
    }
    if (func_ov101_02294d6c(2)) {
        unk_26a0.func_ov002_022036a4(unk_98);
        t = unk_98 - 0x10;
        func_ov094_022932d0(&unk_f4, 0, t);
        unk_b54.func_ov094_022941a0(0, t);
        func_ov094_0229277c(&unk_b7c, t);
    }
    return TRUE;
}

extern "C" Unk_ov101_02296b38 *func_ov101_02296990();

struct Unk_ov101_SceneEntry {
    Unk_ov101_02296b38 *(*create)();
    u16 a;
    u16 b;
};

// Declarations for data defined further down (definition order sets the data layout)
extern "C" Unk_ov101_SceneEntry data_ov101_02296a58;

// Scene registration entry read by main: factory, then two ids
extern "C" Unk_ov101_SceneEntry data_ov101_02296a58 = {func_ov101_02296990, 0x94, 0x98};

BOOL Unk_ov101_02296b38::vfunc_4c() {
    static Unk_ov101_02296b38_Fn tbl[5] = {
        &Unk_ov101_02296b38::func_ov101_02296620, &Unk_ov101_02296b38::func_ov101_02296594,
        &Unk_ov101_02296b38::func_ov101_02296558, &Unk_ov101_02296b38::func_ov101_022964f8,
        &Unk_ov101_02296b38::func_ov101_022964ac};
    func_ov101_022963a0();
    (this->*tbl[unk_8c])();
    func_ov101_02296368();
    return TRUE;
}

void Unk_ov101_02296b38::func_ov101_02296670() {
    static Unk_ov101_02296b38_Fn tbl[24] = {
        &Unk_ov101_02296b38::func_ov101_02296280, &Unk_ov101_02296b38::func_ov101_022961e0,
        &Unk_ov101_02296b38::func_ov101_022961c4, &Unk_ov101_02296b38::func_ov101_0229617c,
        &Unk_ov101_02296b38::func_ov101_022960e4, &Unk_ov101_02296b38::func_ov101_02296068,
        &Unk_ov101_02296b38::func_ov101_02295f74, &Unk_ov101_02296b38::func_ov101_02295ed0,
        &Unk_ov101_02296b38::func_ov101_02295e58, &Unk_ov101_02296b38::func_ov101_02295e0c,
        &Unk_ov101_02296b38::func_ov101_02295dbc, &Unk_ov101_02296b38::func_ov101_02295d84,
        &Unk_ov101_02296b38::func_ov101_02295d5c, &Unk_ov101_02296b38::func_ov101_02295d2c,
        &Unk_ov101_02296b38::func_ov101_02295d00, &Unk_ov101_02296b38::func_ov101_02295cb0,
        &Unk_ov101_02296b38::func_ov101_02295c68, &Unk_ov101_02296b38::func_ov101_02295c28,
        &Unk_ov101_02296b38::func_ov101_02295bf4, &Unk_ov101_02296b38::func_ov101_02295bb8,
        &Unk_ov101_02296b38::func_ov101_02295b68, &Unk_ov101_02296b38::func_ov101_02295b48,
        &Unk_ov101_02296b38::func_ov101_02295b14, &Unk_ov101_02296b38::func_ov101_02295ab0};
    (this->*tbl[unk_8d])();
}

BOOL Unk_ov101_02296b38::vfunc_50() {
    func_ov101_022963e4();
    func_ov101_02296670();
    func_ov101_022963dc();
    return TRUE;
}

BOOL Unk_ov101_02296b38::vfunc_54() { return TRUE; }

BOOL Unk_ov101_02296b38::vfunc_58() { return TRUE; }

BOOL Unk_ov101_02296b38::vfunc_5c() {
    func_020ed188();
    return TRUE;
}

void Unk_ov101_02296b38::func_ov101_02296620() {
    func_ov101_02296348();
    func_ov101_02296334();
    func_ov002_02200a50(1);
}

void Unk_ov101_02296b38::func_ov101_02296594() {
    func_ov101_02296310();
    unk_26a0.func_ov002_02203510(0x65);
    func_ov094_022937a0(&unk_f4);
    func_ov101_02295740();
    func_ov094_02293d2c(&unk_b54);
    unk_b54.func_ov094_022941f8(0xf);
    func_ov002_022008e0(8, 0, 0, 0x30);
    func_020020b8(6);
    func_ov002_02200840(6, 0, -16);
    func_ov002_02200a50(2);
    func_ov101_02294d5c(1);
    func_ov101_02294d5c(2);
    unk_98 = func_ov002_02200920();
}

void Unk_ov101_02296b38::func_ov101_02296558() {
    if (func_ov002_02200908(0)) {
        func_ov002_02200a60(2);
        func_ov101_02295a40();
    }
    func_ov002_02200840(6, 0, -16);
    unk_98 = func_ov002_02200920();
}

void Unk_ov101_02296b38::func_ov101_022964f8() {
    unk_215c.func_ov002_022006e4(1);
    func_ov101_02295304();
    ((Unk_ov092_02291ec8 *)func_020ed174(this))->func_ov092_02291ce4(0x44, 1);
    func_ov002_022008c4(8, 0, 0, 0x30);
    func_ov002_02200840(6, 0, -16);
    func_ov002_02200a50(4);
    unk_98 = func_ov002_02200920();
}

void Unk_ov101_02296b38::func_ov101_022964ac() {
    if (func_ov002_022008fc(0)) {
        func_020021a0(6);
        func_ov002_02200a60(5);
        func_ov101_02294d4c(1);
        func_ov101_02294d4c(2);
    } else {
        func_ov002_02200840(6, 0, -16);
    }
    unk_98 = func_ov002_02200920();
}

void Unk_ov101_02296b38::func_ov101_0229643c() {
    unk_94 = 0;
    func_ov094_022939c0(&unk_f4, 2);
    unk_b54.func_ov094_02294644(2);
    func_ov094_02292d30(&unk_b7c, 6);
    unk_b1 = 0x10;
    unk_221c.func_ov002_022027a4();
    unk_af = 0;
    unk_b3 = 0;
    unk_2298.func_ov002_02202310(3, 1, 0);
    unk_b9 = 0;
}

void Unk_ov101_02296b38::func_ov101_02296400() {
    func_ov101_02295904();
    func_ov094_02292a80(&unk_b7c);
    func_ov094_02293998(&unk_f4);
    func_ov002_02201b04(&unk_2298);
    unk_26a0.func_ov002_02203900();
}

void Unk_ov101_02296b38::func_ov101_022963e4() {
    func_ov101_022963a0();
    unk_2234.vfunc_0c();
}

void Unk_ov101_02296b38::func_ov101_022963dc() {
    func_ov101_02296368();
}

void Unk_ov101_02296b38::func_ov101_022963a0() {
    func_ov101_02295904();
    func_ov094_02292acc(&unk_b7c);
    func_ov094_022939a0(&unk_f4);
    unk_b54.func_ov094_0229462c();
    unk_26a0.func_ov002_02203900();
}

void Unk_ov101_02296b38::func_ov101_02296368() {
    func_ov002_02201b58(&unk_2298);
    func_ov094_02292aa4(&unk_b7c);
    if (unk_215c.func_ov002_0220071c()) {
        func_ov101_0229556c();
    }
}

void Unk_ov101_02296b38::func_ov101_02296348() {
    func_02002398(6, 2);
    func_0200226c(6, 0, 0, 0);
}

void Unk_ov101_02296b38::func_ov101_02296334() {
    func_ov094_02292d1c(&unk_b7c, 0);
}

void Unk_ov101_02296b38::func_ov101_02296310() {
    func_ov094_02292ae0(&unk_b7c);
    func_ov002_02203920(&unk_26a0);
}

void Unk_ov101_02296b38::func_ov101_02296280() {
    if (func_ov002_02200a14(1)) {
        func_ov101_02295a60();
    } else {
        if (Unk_ov101_02296280_Both()) {
            s32 r = func_ov101_02295890(data_021ef5f0, data_021ef5ec + 0x10, 1);
            if (r != 0x10) {
                func_ov101_022959b8(r);
            } else {
                if (unk_26a0.func_ov002_02203110(9)) {
                    unk_26a0.func_ov002_022030ac(9);
                    func_ov002_02200a58(0x17);
                    func_0200402c(0x28);
                }
            }
        }
    }
}

void Unk_ov101_02296b38::func_ov101_022961e0() {
    if (data_021f4770 == 0) {
        if (func_ov101_02295710(unk_b0)) {
            func_ov002_02200a58(0);
            unk_215c.func_ov002_022006a4(0x3c);
        } else {
            func_ov002_02200a58(3);
            func_ov101_02296670();
        }
    } else {
        if (func_ov101_02295710(unk_b0) == 0 && unk_215c.func_ov002_02200680()) {
            if (*(volatile u8 *)&unk_b9 != 0) {
                unk_b9 = unk_b9 - 1;
            } else {
                func_ov101_02294eec(unk_b0, 1);
                func_ov002_02200a58(2);
            }
        } else {
            unk_215c.func_ov002_022006c0();
        }
    }
}

void Unk_ov101_02296b38::func_ov101_022961c4() {
    if (data_021f4770 == 0) {
        func_ov002_02200a58(4);
    }
}

void Unk_ov101_02296b38::func_ov101_0229617c() {
    if (unk_215c.func_ov002_02200680()) {
        if (*(volatile u8 *)&unk_b9 != 0) {
            unk_b9 = unk_b9 - 1;
        } else {
            func_ov101_02294eec(unk_b0, 1);
            func_ov002_02200a58(2);
        }
    }
}

void Unk_ov101_02296b38::func_ov101_022960e4() {
    if (((Unk_ov002_022013ac *)&unk_2298)->func_ov002_022017b4()) {
        if (func_ov002_02200a14(1)) {
            func_ov101_02294fdc();
        } else {
            if (Unk_ov101_02296280_Both()) {
                s32 t = ((Unk_ov002_022013ac *)&unk_2298)->func_ov002_022014c0(data_021ef5f0, data_021ef5ec);
                if (t >= 0) {
                    func_ov002_02201aa0(&unk_2298, t, 1);
                    unk_b7 = unk_2298.unk_2f9[t - 0];
                    func_ov002_02200a58(0x14);
                }
            }
        }
    }
}

void Unk_ov101_02296b38::func_ov101_02296068() {
    func_ov101_022954ec();
    func_ov101_02295604();
    s32 r = func_ov101_02295890(unk_a4 + 8, unk_a8 + 8, 0);
    if (r != 0x10) {
        if (data_021f4770 == 0) {
            if (func_ov101_02295840(r) == 0) {
                func_ov101_02295910(unk_b2, 4);
            }
            func_ov101_02295a40();
        } else {
            func_ov101_022955d8(r);
        }
    } else if (data_021f4770 == 0) {
        func_ov101_02295910(unk_b2, 4);
    }
}

void Unk_ov101_02296b38::func_ov101_02295f74() {
    if (func_ov002_022009d4()) {
        func_ov101_02295a94();
        unk_215c.func_ov002_022006e4(1);
    } else if (func_ov101_02294d80((void *)func_ov002_022009c8())) {
        func_ov101_02295518();
        func_ov101_02295290();
        unk_215c.func_ov002_022006e4(0);
    } else if (func_ov101_02295710(unk_b3) == 0 && (data_021f47d8[1] & 1) != 0) {
        if (func_ov101_022958f8(unk_b3)) {
            if (func_ov101_022956e0(unk_b3) == 0) {
                func_ov101_02294eec(unk_b3, 0);
            }
        } else if (unk_b3 == 0xf) {
            func_ov101_02295120();
        }
    } else {
        if ((data_021f47d8[1] & 2) != 0) {
            func_ov101_02295304();
            unk_26a0.func_ov002_022030ac(9);
            func_ov002_02200a58(0x17);
            func_0200402c(0x28);
            unk_215c.func_ov002_022006e4(0);
        } else {
            unk_215c.func_ov002_022006c0();
        }
    }
}

void Unk_ov101_02296b38::func_ov101_02295ed0() {
    if (func_ov101_02294d80((void *)func_ov002_022009c8())) {
        func_ov101_02295518();
        func_ov101_02295290();
        unk_215c.func_ov002_022006e4(0);
    } else {
        u16 f = data_021f47d8[1];
        if ((f & 1) != 0) {
            if (func_ov101_022958f8(unk_b3)) {
                if (func_ov101_022956e0(unk_b3)) {
                    func_ov101_022950e4(unk_b3);
                } else {
                    func_ov101_0229509c(unk_b3);
                }
            }
        } else if ((f & 2) != 0) {
            func_ov101_022950e4(unk_b2);
        } else {
            func_ov101_022954c0();
            unk_215c.func_ov002_022006c0();
        }
    }
}

void Unk_ov101_02296b38::func_ov101_02295e58() {
    if (func_ov002_022009d4()) {
        func_ov101_02294fdc();
    } else {
        if (func_ov002_022019d0(&unk_2298, func_ov002_022009c8(), &unk_b8, 0)) {
            func_ov101_02295240();
        } else {
            u32 k = data_021f47d8[1];
            if (k & 1) {
                ((Unk_ov002_0220464c *)&unk_2234)->func_ov002_02202b68();
                func_ov002_02200a58(9);
            } else if (k & 2) {
                func_ov101_022951e0();
            }
        }
    }
}

void Unk_ov101_02296b38::func_ov101_02295e0c() {
    if (unk_2234.func_0208d4fc()) {
        func_ov002_02201aa0(&unk_2298, unk_b8, 1);
        unk_b7 = unk_2298.unk_2f9[unk_b8];
        func_ov002_02200a58(0x14);
    }
}

void Unk_ov101_02296b38::func_ov101_02295dbc() {
    if (!unk_2234.func_ov002_022028f0()) {
        func_ov002_02200a58(unk_b6);
        if ((u8)(unk_b6 + 0xfa) <= 1) {
            func_ov101_02295620(unk_b3);
        }
        func_ov101_02296670();
    }
    func_ov101_022954c0();
}

void Unk_ov101_02296b38::func_ov101_02295d84() {
    if (unk_2234.func_0208d4fc()) {
        unk_26a0.func_ov002_022030ac(9);
        func_ov002_02200a58(0x17);
        func_0200402c(0x28);
    }
}

void Unk_ov101_02296b38::func_ov101_02295d5c() {
    if (unk_2234.func_0208d4fc()) {
        func_ov101_02295140();
        func_ov002_02200a58(6);
    }
}

void Unk_ov101_02296b38::func_ov101_02295d2c() {
    if (unk_2234.func_ov002_02202928()) {
        func_ov101_02295974(unk_b3);
        func_ov002_02200a58(0xe);
    }
}

void Unk_ov101_02296b38::func_ov101_02295d00() {
    if (unk_2234.func_0208d4fc()) {
        func_ov002_02200a58(unk_b6);
    }
    func_ov101_022954c0();
}

void Unk_ov101_02296b38::func_ov101_02295cb0() {
    if (!unk_2234.func_ov002_02202928()) {
        u32 a = unk_b5;
        if (unk_b3 == a) {
            func_ov101_02295840(a);
            func_ov101_02295518();
            func_ov002_02200a58(6);
        } else {
            func_ov101_02295910(a, 4);
        }
    } else {
        func_ov101_022954c0();
    }
}

void Unk_ov101_02296b38::func_ov101_02295c68() {
    if (!unk_2234.func_ov002_022028fc()) {
        func_ov101_022953cc(unk_b5);
        func_ov101_02294d5c(0x20);
        func_ov002_02200a58(0x11);
        func_ov101_02295518();
    } else {
        func_ov002_02200a58(6);
    }
}

void Unk_ov101_02296b38::func_ov101_02295c28() {
    if (unk_2234.func_0208d4fc()) {
        func_ov002_02200a58(unk_b6);
    }
    if (unk_2234.func_ov002_02202928()) {
        func_ov101_02294d4c(0x20);
        func_ov101_022954c0();
    }
}

void Unk_ov101_02296b38::func_ov101_02295bf4() {
    if (unk_221c.func_ov002_02202718()) {
        func_ov101_02295404(unk_b2);
        func_ov101_02295a40();
    } else {
        func_ov101_02295498();
    }
}

void Unk_ov101_02296b38::func_ov101_02295bb8() {
    if (((Unk_ov002_022013ac *)&unk_2298)->func_ov002_022017b4()) {
        if (func_0206ef00()) {
            func_ov101_02295194();
            func_ov002_02200a58(8);
        } else {
            func_ov002_02200a58(4);
        }
    }
}

void Unk_ov101_02296b38::func_ov101_02295b68() {
    if (func_ov002_02201a28(&unk_2298)) {
        func_ov002_02202064(&unk_2298, 0);
        unk_215c.func_ov002_022006e4(1);
        if (unk_2234.func_0208d534()) {
            func_ov101_02295160();
        }
        func_ov002_02200a58(0x15);
    }
}

void Unk_ov101_02296b38::func_ov101_02295b48() {
    if (((Unk_ov002_022013ac *)&unk_2298)->func_ov002_022017a4()) {
        func_ov101_02295078();
    }
}

void Unk_ov101_02296b38::func_ov101_02295b14() {
    if (unk_2598.func_ov002_02204234(0)) {
        func_ov002_02200a58(unk_b6);
        unk_2234.func_0208d644();
    }
}

void Unk_ov101_02296b38::func_ov101_02295ab0() {
    if (unk_26a0.func_ov002_0220308c()) {
        if (unk_2234.func_0208d534()) {
            s32 r4 = unk_26a0.func_ov002_0220306c();
            s32 r6 = unk_26a0.func_ov002_022030f4(-1);
            s32 r2 = unk_26a0.func_ov002_022030b8(-1);
            unk_2234.func_ov002_02202a40(r4 + r6, r4 + r2);
        }
    } else {
        func_ov101_02294f6c();
    }
}

void Unk_ov101_02296b38::func_ov101_02295a94() {
    func_ov101_02295304();
    func_ov101_02295660();
    func_ov002_02200a58(0);
}

void Unk_ov101_02296b38::func_ov101_02295a60() {
    unk_b1 = 0x10;
    func_ov101_0229537c();
    func_ov002_02200980();
    func_ov101_02295518();
    func_ov002_02200a58(6);
    func_ov101_02295620(unk_b3);
}

void Unk_ov101_02296b38::func_ov101_02295a40() {
    if (func_0206ef0c()) {
        func_ov101_02295a94();
    } else {
        func_ov101_02295a60();
    }
}

void Unk_ov101_02296b38::func_ov101_022959b8(u32 a) {
    u32 r6, r7;
    unk_b0 = a;
    func_ov002_02200a58(1);
    r6 = data_021ef5f0;
    r7 = data_021ef5ec;
    unk_9c = func_ov101_022957c8(unk_b0) - r6;
    unk_a0 = func_ov101_02295790(unk_b0) - r7;
    unk_b1 = a;
    unk_215c.func_ov002_022006b8();
    unk_215c.func_ov002_022006c0();
    unk_b9 = 2;
    if (!func_ov101_02295710(a)) {
        func_ov094_0229238c();
    }
}

void Unk_ov101_02296b38::func_ov101_02295974(u32 a) {
    unk_b2 = a;
    unk_215c.func_ov002_022006e4(1);
    func_ov101_02295430(a);
    if (unk_af == 1) unk_b6 = 7;
    func_ov101_022954c0();
}

void Unk_ov101_02296b38::func_ov101_02295910(u32 a, u32 b) {
    unk_b2 = a;
    unk_221c.func_ov002_022026f4(unk_a4, unk_a8);
    s32 x = func_ov101_022957c8(a);
    unk_221c.func_ov002_022026c4(x, func_ov101_02295790(a), b);
    unk_221c.func_ov002_02202718();
    func_ov101_02295498();
    func_ov002_02200a58(0x12);
}

void Unk_ov101_02296b38::func_ov101_02295904() {
    unk_bc[0].func_020b87d0();
}

BOOL Unk_ov101_02296b38::func_ov101_022958f8(u32 a) {
    if (a <= 0xe) return TRUE;
    return FALSE;
}

u32 Unk_ov101_02296b38::func_ov101_022958dc(u32 a) {
    if (func_ov101_022958f8(a)) return (u8)a;
    return 0;
}

u32 Unk_ov101_02296b38::func_ov101_022958cc(u32 a) {
    if (a <= 0xe) return (u8)a;
    return 0x10;
}

u32 Unk_ov101_02296b38::func_ov101_02295890(u32 a, u32 b, s32 c) {
    u32 t = func_ov094_02293968(&unk_f4);
    if (t != 0x23) {
        if (c != 0) {
            if (func_ov094_0229311c(&unk_f4, t)) return 0x10;
        }
        return func_ov101_022958cc(t);
    }
    return 0x10;
}

BOOL Unk_ov101_02296b38::func_ov101_02295840(u32 a) {
    if (func_ov101_022958f8(a)) {
        u32 t = func_ov101_022956ac(a);
        if (t != 0xfff1) {
            func_ov101_02295800(unk_b2, t, func_ov101_0229567c(a));
        }
        func_ov101_02295404(a);
        return TRUE;
    }
    return FALSE;
}

void Unk_ov101_02296b38::func_ov101_02295800(u32 a, u32 b, u32 c) {
    if (func_ov101_022958f8(a)) {
        u32 t = func_ov101_022958dc(a);
        func_ov094_02293494(&unk_f4, t, b, c);
        func_ov094_02293434(&unk_f4, t);
    }
}

s32 Unk_ov101_02296b38::func_ov101_022957c8(u32 a) {
    if (func_ov101_022958f8(a)) {
        return func_ov094_02293624(&unk_f4, func_ov101_022958dc(a));
    } else if (a == 0xf) {
        return 0xbc;
    }
    return 0;
}

s32 Unk_ov101_02296b38::func_ov101_02295790(u32 a) {
    if (func_ov101_022958f8(a)) {
        return func_ov094_02293610(&unk_f4, func_ov101_022958dc(a)) - 0x10;
    } else if (a == 0xf) {
        return 0xb6;
    }
    return 0;
}

void Unk_ov101_02296b38::func_ov101_02295740() {
    u32 m = func_0206ea78();
    u8 i = 0;
    s32 j = 0;
    do {
        if (!func_ov101_022956e0(i) && (m & (1 << j)) == 0) {
            func_ov094_02293308(&unk_f4, func_ov101_022958dc(i));
        }
        i++;
        j++;
    } while (i <= 0xe);
}

BOOL Unk_ov101_02296b38::func_ov101_02295710(u32 a) {
    if (func_ov101_022958f8(a)) {
        return func_ov094_0229333c(&unk_f4, func_ov101_022958dc(a));
    }
    return FALSE;
}

BOOL Unk_ov101_02296b38::func_ov101_022956e0(u32 a) {
    if (func_ov101_022958f8(a)) {
        return func_ov094_0229311c(&unk_f4, func_ov101_022958dc(a));
    }
    return TRUE;
}

u32 Unk_ov101_02296b38::func_ov101_022956ac(u32 a) {
    if (func_ov101_022958f8(a)) {
        return func_ov094_0229352c(&unk_f4, func_ov101_022958dc(a));
    }
    return 0xfff1;
}

u32 Unk_ov101_02296b38::func_ov101_0229567c(u32 a) {
    if (func_ov101_022958f8(a)) {
        return func_ov094_02293504(&unk_f4, func_ov101_022958dc(a));
    }
    return 0xf1;
}

void Unk_ov101_02296b38::func_ov101_02295660() {
    func_ov094_022935dc(&unk_f4);
    unk_b54.func_ov094_022943f8();
}

void Unk_ov101_02296b38::func_ov101_02295620(u32 a) {
    if (func_ov101_022958f8(a)) {
        func_ov094_0229359c(&unk_f4, func_ov101_022958dc(a));
        unk_b54.func_ov094_022943f8();
    } else {
        func_ov101_02295660();
    }
}

void Unk_ov101_02296b38::func_ov101_02295604() {
    func_ov094_0229358c(&unk_f4);
    unk_b54.func_ov094_022943b0();
}

void Unk_ov101_02296b38::func_ov101_022955d8(u32 a) {
    if (func_ov101_022958f8(a)) {
        func_ov094_0229357c(&unk_f4, func_ov101_022958dc(a));
    }
}

void Unk_ov101_02296b38::func_ov101_0229556c() {
    s32 r6 = func_ov101_022957c8(unk_b1) - 0x6d;
    s32 r4 = func_ov101_02295790(unk_b1) - 0x78;
    if (func_0206ef00()) r4 -= 8;
    unk_215c.func_02089ad8(r6, r4);
    if (func_ov101_022958f8(unk_b1)) {
        func_ov094_02293638(&unk_f4, &unk_215c, func_ov101_022958dc(unk_b1));
    }
}

void Unk_ov101_02296b38::func_ov101_02295518() {
    if (func_ov101_022958f8(unk_b3)) {
        if (func_ov101_022956e0(unk_b3)) {
            unk_215c.func_ov002_022006b0();
        } else {
            unk_b1 = unk_b3;
            unk_215c.func_ov002_022006b8();
        }
    } else {
        unk_215c.func_ov002_022006b0();
    }
}

void Unk_ov101_02296b38::func_ov101_022954ec() {
    unk_a4 = unk_9c + data_021ef5f0;
    unk_a8 = unk_a0 + data_021ef5ec;
}

void Unk_ov101_02296b38::func_ov101_022954c0() {
    unk_a4 = unk_2234.func_ov002_022028c8() - 2;
    unk_a8 = unk_2234.func_ov002_022028a0() - 4;
}

void Unk_ov101_02296b38::func_ov101_02295498() {
    unk_a4 = unk_221c.func_ov002_02202710();
    unk_a8 = unk_221c.func_ov002_02202708();
}

void Unk_ov101_02296b38::func_ov101_02295430(u32 idx) {
    if (func_ov101_022958f8(idx)) {
        s32 r4 = func_ov101_022958dc(idx);
        unk_af = 1;
        unk_ac = func_ov094_0229352c(&unk_f4, r4);
        unk_ae = func_ov094_02293504(&unk_f4, r4);
        func_ov094_022934d8(&unk_f4, r4);
        func_ov094_0229341c(&unk_f4, unk_ac, unk_ae);
    }
}

void Unk_ov101_02296b38::func_ov101_02295404(u32 idx) {
    if (unk_af == 1) {
        func_ov101_02295800(idx, unk_ac, unk_ae);
    }
    unk_af = 0;
}

void Unk_ov101_02296b38::func_ov101_022953cc(u32 idx) {
    if (unk_af == 1) {
        u16 a = unk_ac;
        u8 b = unk_ae;
        func_ov101_02295430(idx);
        func_ov101_02295800(idx, a, b);
    }
}

void Unk_ov101_02296b38::func_ov101_0229537c() {
    s32 a = func_ov101_02295338();
    s32 b = func_ov101_02295328();
    unk_2234.func_ov002_02202a40(a, b);
    if (unk_b3 == 0xf) {
        ((Unk_ov002_0220464c *)&unk_2234)->func_ov002_02202d00(7);
    } else {
        ((Unk_ov002_0220464c *)&unk_2234)->func_ov002_02202d00(1);
    }
    func_ov101_02295140();
}

s32 Unk_ov101_02296b38::func_ov101_02295338() {
    s32 r = func_ov101_022957c8(unk_b3);
    if (func_ov101_02294d6c(0x10)) {
        r += 0x100;
    } else if (func_ov101_02294d6c(8)) {
        r -= 0x100;
    }
    return r + 8;
}

s32 Unk_ov101_02296b38::func_ov101_02295328() { return func_ov101_02295790(unk_b3); }

void Unk_ov101_02296b38::func_ov101_02295304() {
    ((Unk_ov002_0220464c *)&unk_2234)->func_ov002_02202d00(0);
    unk_2234.vfunc_0c();
}

void Unk_ov101_02296b38::func_ov101_02295290() {
    if (func_ov101_02294d6c(4)) {
        s32 a = func_ov101_02295338();
        s32 b = func_ov101_02295328();
        unk_2234.func_ov002_02202a40(a, b);
        func_ov101_02294d4c(4);
    } else {
        s32 a = func_ov101_02295338();
        s32 b = func_ov101_02295328();
        unk_2234.func_ov002_022029e8(a, b, 3, 1);
        unk_b6 = unk_8d;
        func_ov002_02200a58(0xa);
    }
}

void Unk_ov101_02296b38::func_ov101_02295240() {
    s32 a = ((Unk_ov002_022013ac *)&unk_2298)->func_ov002_022014a4();
    s32 b = ((Unk_ov002_022013ac *)&unk_2298)->func_ov002_02201498(unk_b8);
    unk_2234.func_ov002_02202a18(a, b, 2);
    unk_b6 = unk_8d;
    func_ov002_02200a58(0xa);
}

void Unk_ov101_02296b38::func_ov101_022951e0() {
    unk_b7 = 1;
    unk_b8 = func_ov002_02201a70(&unk_2298);
    s32 a = ((Unk_ov002_022013ac *)&unk_2298)->func_ov002_022014a4();
    s32 b = ((Unk_ov002_022013ac *)&unk_2298)->func_ov002_02201498(unk_b8);
    unk_2234.func_ov002_02202a40(a, b);
    unk_2234.func_0208d538(8);
    func_ov002_02200a58(0x14);
}

void Unk_ov101_02296b38::func_ov101_02295194() {
    unk_b8 = 0;
    s32 a = ((Unk_ov002_022013ac *)&unk_2298)->func_ov002_022014a4();
    s32 b = ((Unk_ov002_022013ac *)&unk_2298)->func_ov002_02201498(unk_b8);
    unk_2234.func_ov002_02202a40(a, b);
    ((Unk_ov002_0220464c *)&unk_2234)->func_ov002_02202d00(7);
}

void Unk_ov101_02296b38::func_ov101_02295160() {
    s32 a = func_ov101_02295338();
    s32 b = func_ov101_02295328();
    unk_2234.func_ov002_02202a40(a, b);
    ((Unk_ov002_0220464c *)&unk_2234)->func_ov002_02202d00(1);
}

void Unk_ov101_02296b38::func_ov101_02295140() {
    unk_2234.func_ov002_02202a78();
    unk_2234.vfunc_0c();
}

void Unk_ov101_02296b38::func_ov101_02295120() {
    ((Unk_ov002_0220464c *)&unk_2234)->func_ov002_02202b68();
    func_ov002_02200a58(0xb);
}

void Unk_ov101_02296b38::func_ov101_022950e4(u32 v) {
    unk_215c.func_ov002_022006e4(1);
    unk_b5 = v;
    ((Unk_ov002_0220464c *)&unk_2234)->func_ov002_02202d00(5);
    func_ov002_02200a58(0xf);
}

void Unk_ov101_02296b38::func_ov101_0229509c(u32 v) {
    unk_215c.func_ov002_022006e4(1);
    unk_b6 = unk_8d;
    unk_b5 = v;
    ((Unk_ov002_0220464c *)&unk_2234)->func_ov002_02202d00(6);
    func_ov002_02200a58(0x10);
}

s32 Unk_ov101_02296b38::func_ov101_02295078() {
    switch (unk_b7) {
    case 0:
        func_ov101_02294fa0();
        break;
    case 1:
    default:
        func_ov101_02295a40();
        break;
    }
}

void Unk_ov101_02296b38::func_ov101_02295008(u32 v) {
    ((Unk_ov002_022013ac *)&unk_2298)->func_ov002_0220160c((Unk_ov002_022013ac_Rec *)&unk_2298.unk_2f4, 0);
    s32 a = func_ov101_022957c8(unk_b4);
    s32 b = func_ov101_02295790(unk_b4);
    if (v) {
        unk_2298.func_ov002_02202200(&unk_215c);
    } else {
        unk_2298.func_ov002_0220229c(a, b);
    }
    func_ov002_02202098(&unk_2298, 0);
    func_ov002_02200a58(0x13);
}

void Unk_ov101_02296b38::func_ov101_02294fdc() {
    unk_b7 = 1;
    func_ov101_02295160();
    func_ov002_02202064(&unk_2298, 0);
    func_ov002_02200a58(0x15);
}

void Unk_ov101_02296b38::func_ov101_02294fa0() {
    func_0206ed2c(unk_b4);
    func_0206ecf8(1);
    unk_8c = 3;
    func_ov002_02200a60(1);
    unk_215c.func_ov002_022006e4(1);
    func_ov101_02295304();
}

void Unk_ov101_02296b38::func_ov101_02294f6c() {
    func_0206ecf8(0);
    unk_8c = 3;
    func_ov002_02200a60(1);
    unk_215c.func_ov002_022006e4(1);
    func_ov101_02295304();
}

void Unk_ov101_02296b38::func_ov101_02294f40() {
    func_ov002_02201700(&unk_2298.unk_2f4, func_0206ea6c(), 0);
    func_ov002_02201700(&unk_2298.unk_2f4, 2, 1);
}

void Unk_ov101_02296b38::func_ov101_02294eec(u32 idx, u32 v) {
    unk_b4 = idx;
    func_ov002_022016e4(&unk_2298.unk_2f4, 1);
    if (func_ov101_022958f8(idx)) {
        func_ov101_02294f40();
        func_ov101_02295304();
        if (v == 0) {
            unk_215c.func_ov002_022006e4(1);
        }
        func_ov101_02295008(v);
    }
}

void Unk_ov101_02296b38::func_ov101_02294df0(void *pad) {
    s32 col = unk_b3;
    s32 row = 0;
    while (col >= 5) {
        col -= 5;
        row++;
    }
    if (func_ov002_0220126c(pad)) {
        if (!func_ov002_0220128c(pad) || row == 0) {
            if (col == 0) {
                unk_b3 = unk_b3 + 4;
                func_ov101_02294d5c(8);
            } else {
                unk_b3 = unk_b3 - 1;
            }
        }
    } else if (func_ov002_0220125c(pad)) {
        if (!func_ov002_0220127c(pad)) {
            if (col == 4) {
                unk_b3 = unk_b3 - 4;
                func_ov101_02294d5c(0x10);
            } else {
                unk_b3 = unk_b3 + 1;
            }
        }
    }
    if (!func_ov101_02294d6c(0x18)) {
        if (func_ov002_0220128c(pad)) {
            if (row > 0) {
                unk_b3 = unk_b3 - 5;
            }
        } else if (func_ov002_0220127c(pad)) {
            if (row < 2) {
                unk_b3 = unk_b3 + 5;
            } else {
                unk_b3 = 0xf;
                ((Unk_ov002_0220464c *)&unk_2234)->func_ov002_02202ca0();
            }
        }
    }
}

BOOL Unk_ov101_02296b38::func_ov101_02294d80(void *pad) {
    u8 old = unk_b3;
    func_ov101_02294d4c(0x18);
    if (pad == 0) {
        return FALSE;
    }
    if (func_ov101_022958f8(unk_b3)) {
        func_ov101_02294df0(pad);
    } else if (unk_b3 == 0xf) {
        if (func_ov002_0220128c(pad)) {
            unk_b3 = 0xe;
            ((Unk_ov002_0220464c *)&unk_2234)->func_ov002_02202c40();
        }
    }
    if (old != unk_b3) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov101_02296b38::func_ov101_02294d6c(u32 mask) {
    if (unk_94 & mask) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov101_02296b38::func_ov101_02294d5c(u32 mask) { unk_94 = unk_94 | mask; }

// ---------------------------------------------------------------------------------------------

// ---------------------------------------------------------------------------------------------

void Unk_ov101_02296b38::func_ov101_02294d4c(u32 mask) { unk_94 = unk_94 & ~mask; }

