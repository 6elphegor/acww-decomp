// ov109: scene overlay (class Unk_ov109_02296698, vtable 0x02296698, 0x2802 bytes).
#define postCreate() postCreate(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef postCreate
#undef vfunc_14

class Unk_ov109_02296698;
struct Unk_ov109_02295570;
typedef Unk_ov109_02295570 S;
struct Unk_ov002_022013ac_Rec;

extern "C" {
extern u8 data_021edb68;
extern u8 gTouchCurY;
extern u8 gTouchCurX;
extern u8 gTouchHeld;
extern u8 gTouchChanged;
extern u16 gPad[];

void *ProcBase_GetParent(void *p);
void ProcBase_RequestDelete(void *p);
void Gfx2d_ShowLayer(u32 x);
void Gfx2d_ResetLayer(u32 x);
void Gfx2d_SetLayerPriority(u32 a, u32 b);
void Gfx2d_SetLayerControl(u32 a, u32 b, u32 c, u32 d);
void Snd_PlaySe(s32 v);
BOOL MenuCtrl_IsButtons();
BOOL MenuCtrl_IsTouch();
void func_0206e63c();
BOOL func_0206e61c();
void func_0206ecf8(u32 v);
void func_0206ed2c(u32 v);
BOOL func_020600f4(s32 v);
void func_0206009c(s32 v);

BOOL func_ov002_0220125c(void *pad);
BOOL func_ov002_0220126c(void *pad);
BOOL func_ov002_0220127c(void *pad);
BOOL func_ov002_0220128c(void *pad);
void func_ov002_02201700(void *p, u32 a, u32 b);
void func_ov002_022016e4(void *p, u32 v);
void func_ov002_02202064(void *p, u32 v);
void func_ov002_02202098(void *p, u32 v);
u32 func_ov002_02201a70(void *p);
BOOL func_ov002_02201a28(void *p);
void func_ov002_02201aa0(void *p, s32 a, s32 b);
BOOL func_ov002_022019d0(void *p, s32 a, void *q, s32 b);
void func_ov002_02201b58(void *p);
void func_ov002_02201b04(void *p);
void func_ov002_02201b28(void *p);
void func_ov002_02203920(void *p);

void func_ov094_0229313c(void *p, u32 a, u32 b);
void func_ov094_02293638(void *p, void *q, s32 r);
s32 func_ov094_0229359c(void *p, s32 v);
void func_ov094_022935dc(void *p);
s32 func_ov094_02293504(void *p, s32 v);
s32 func_ov094_0229352c(void *p, s32 v);
BOOL func_ov094_0229311c(void *p, u32 v);
BOOL func_ov094_0229333c(void *p, u32 v);
void func_ov094_02293308(void *p, u32 v);
s32 func_ov094_02293610(void *p, u32 v);
s32 func_ov094_02293624(void *p, u32 v);
void func_ov094_02293494(void *p, u32 a, u32 b, u32 c);
void func_ov094_02293434(void *p, u32 a);
u32 func_ov094_02293968(void *p);
void func_ov094_0229238c();
void func_ov094_022937a0(void *p);
void func_ov094_02293998(void *p);
void func_ov094_022939a0(void *p);
void func_ov094_022939c0(void *p, s32 a);
void func_ov094_022932d0(void *p, s32 a, s32 b);
void func_ov094_02293d2c(void *p);
void func_ov094_02292a80(void *p);
void func_ov094_02292aa4(void *p);
void func_ov094_02292acc(void *p);
void func_ov094_02292ae0(void *p);
void func_ov094_02292d1c(void *p, s32 a);
void func_ov094_02292d30(void *p, s32 a);
void func_ov094_0229277c(void *p, s32 a);
}

// ---- out-of-overlay classes, named as in their symbols.txt ----

class LabelBalloon {
public:
    void setPos(s32 x, s32 y);
};

// Screen upload helper, 0x38 bytes
class BgVramTask {
public:
    void cancel();
    u32 unk_00[0x38 / 4];
};

class BgVramTaskPair : public BgVramTask {
public:
    BgVramTaskPair();
};

class HandCursor {
public:
    virtual ~HandCursor();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    BOOL isAnimDone();
    s32 getAnim();
    void setAnimAtEnd(s32 a);
    void disableObjWindow();
    void enableObjWindow();
};

class Unk_ov002_02202d98 : public HandCursor {
public:
    void func_ov002_02202844();
    BOOL func_ov002_022028f0();
    void func_ov002_022029e8(s32 a, s32 b, s32 c, s32 d);
    void func_ov002_02202a18(s32 a, s32 b, s32 c);
    void func_ov002_02202a40(s32 a, s32 b);
    void func_ov002_02202a78();
};

// Same object as Unk_ov002_02202d98 under the name used by src/ov002/unk_02202b68.cpp
class Unk_ov002_0220464c : public HandCursor {
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

class Unk_ov002_02204604 {
public:
    Unk_ov002_02204604();
    ~Unk_ov002_02204604();
    void func_ov002_022027a4();
    u32 unk_00[0x18 / 4];
};

class Unk_ov002_02204468 {
public:
    Unk_ov002_02204468();
    virtual ~Unk_ov002_02204468();
    virtual void vfunc_08();
    BOOL func_ov002_02200680();
    void func_ov002_022006a4(u8 v);
    void func_ov002_022006b0();
    void func_ov002_022006b8();
    void func_ov002_022006c0();
    BOOL func_ov002_022006e4(s32 a);
    BOOL func_ov002_0220071c();
    u32 unk_04[(0xc0 - 4) / 4];
};

class Unk_ov002_022013ac {
public:
    void func_ov002_0220160c(Unk_ov002_022013ac_Rec *p, s32 v);
    s32 func_ov002_02201498(s32 i);
    s32 func_ov002_022014a4();
    s32 func_ov002_022014c0(s32 a, s32 b);
    BOOL func_ov002_022017a4();
    BOOL func_ov002_022017b4();
    u32 unk_00[0x2f4 / 4];
    u8 unk_2f4[0xc];
};

class Unk_ov002_02204558 : public Unk_ov002_022013ac {
public:
    Unk_ov002_02204558();
    ~Unk_ov002_02204558();
    void func_ov002_02202200(LabelBalloon *p);
    void func_ov002_0220229c(s32 a, s32 b);
    void func_ov002_02202310(s32 a, s32 b, const char *path);
};

class Unk_ov002_022040ec {
public:
    Unk_ov002_022040ec();
    ~Unk_ov002_022040ec();
    BOOL func_ov002_02204234(s32 a);
    void func_ov002_02204394(u8 *p, s32 a, u32 b);
    u32 unk_00[0x108 / 4];
};

class Unk_ov002_02202fac {
public:
    BOOL func_ov002_0220308c();
    s32 func_ov002_0220306c();
    s32 func_ov002_022030f4(s32 a);
    s32 func_ov002_022030b8(s32 a);
    s32 func_ov002_02203110(s32 a);
    void func_ov002_022030ac(u8 a);
    u32 unk_00[0x164 / 4];
};

class Unk_ov002_022046cc : public Unk_ov002_02202fac {
public:
    Unk_ov002_022046cc();
    ~Unk_ov002_022046cc();
    void func_ov002_02203510(s32 a);
    void func_ov002_022036a4(s32 a);
    void func_ov002_02203900();
};

// ov094 list/cursor sub-objects
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
    void func_ov094_022941a0(s32 a, s32 b);
    void func_ov094_022943f8();
    u32 unk_00[0x28 / 4];
};

class Unk_ov094_02292d6c {
public:
    Unk_ov094_02292d6c();
    ~Unk_ov094_02292d6c();
    u32 unk_00[0x15e0 / 4];
};

// ov092 singleton returned by ProcBase_GetParent
class Unk_ov092_02291ec8 {
public:
    void func_ov092_02291c5c();
    void func_ov092_02291ce4(s32 a, s32 b);
};

// Scene base class (declared in src/ov002/unk_ov002_02200680.cpp)
class Unk_ov002_022044e4 : public GameProc {
public:
    Unk_ov002_022044e4();
    virtual ~Unk_ov002_022044e4();
    static void *operator new(unsigned long size);
    static void operator delete(void *p);

    virtual BOOL vfunc_04();
    virtual void postCreate(s32 a);
    virtual BOOL preDelete();
    virtual BOOL vfunc_14(s32 a);
    virtual BOOL onExecute();
    virtual BOOL preExecute();
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
    BOOL func_ov002_022009d4();
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

typedef void (Unk_ov109_02296698::*Unk_ov109_02296698_Fn)();

// Vtable 0x02296698
class Unk_ov109_02296698 : public Unk_ov002_022044e4 {
public:
    Unk_ov109_02296698()
        : unk_94(), unk_cc(), unk_b2c(), unk_b54(), unk_2134(), unk_21f4(), unk_220c(), unk_2270(), unk_2570(), unk_2678() {}

    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL onDraw();
    virtual BOOL vfunc_4c();
    virtual BOOL vfunc_50();
    virtual BOOL vfunc_54();
    virtual BOOL vfunc_58();
    virtual BOOL vfunc_5c();

    void func_ov109_02294d4c(u32 mask);
    void func_ov109_02294d5c(u32 mask);
    BOOL func_ov109_02294d6c(u32 mask);
    BOOL func_ov109_02294d84(void *pad);
    void func_ov109_02294df0(void *pad);
    void func_ov109_02294ed8(u32 idx, u32 x);
    void func_ov109_02294f30();
    void func_ov109_02294f58();
    void func_ov109_02294f8c();
    void func_ov109_02294fb4();
    void func_ov109_02294ff4();
    void func_ov109_02295024(u32 x);
    void func_ov109_02295094();
    void func_ov109_022950f8();
    void func_ov109_02295118();
    void func_ov109_02295138();
    void func_ov109_0229516c();
    void func_ov109_022951b8();
    void func_ov109_0229521c();
    void func_ov109_02295270();
    void func_ov109_022952e8();
    s32 func_ov109_0229530c();
    s32 func_ov109_0229531c();
    void func_ov109_02295364();
    void func_ov109_022953b8();
    void func_ov109_022953f4();
    void func_ov109_02295448();
    void func_ov109_022954b0(u32 idx);
    void func_ov109_022954f0();
    s32 func_ov109_0229550c(u32 idx);
    s32 func_ov109_0229553c(u32 idx);

    void func_ov109_02295ea8();
    void func_ov109_02295ecc();
    void func_ov109_02295ee0();
    void func_ov109_02295f00();
    void func_ov109_02295f38();
    void func_ov109_02295f74();
    void func_ov109_02295f7c();
    void func_ov109_02295f98();
    void func_ov109_02295fd4();
    void func_ov109_02296050();
    void func_ov109_022960a0();
    void func_ov109_02296120();
    void func_ov109_02296160();
    void func_ov109_022961f0();
    void func_ov109_02296274();

    // state function table targets
    void func_ov109_022958d4();
    void func_ov109_02295938();
    void func_ov109_02295968();
    void func_ov109_02295988();
    void func_ov109_022959d8();
    void func_ov109_02295a14();
    void func_ov109_02295a3c();
    void func_ov109_02295a74();
    void func_ov109_02295ab8();
    void func_ov109_02295b08();
    void func_ov109_02295b94();
    void func_ov109_02295c70();
    void func_ov109_02295d18();
    void func_ov109_02295d60();
    void func_ov109_02295d90();
    void func_ov109_02295e28();

    /* 0x0091 */ u8 unk_91[3];
    /* 0x0094 */ BgVramTaskPair unk_94[1];
    /* 0x00cc */ Unk_ov094_02294a50 unk_cc;
    /* 0x0b2c */ Unk_ov094_02294bd4 unk_b2c;
    /* 0x0b54 */ Unk_ov094_02292d6c unk_b54;
    /* 0x2134 */ Unk_ov002_02204468 unk_2134;
    /* 0x21f4 */ Unk_ov002_02204604 unk_21f4;
    /* 0x220c */ Unk_ov002_02204614 unk_220c;
    /* 0x2270 */ Unk_ov002_02204558 unk_2270;
    /* 0x2570 */ Unk_ov002_022040ec unk_2570;
    /* 0x2678 */ Unk_ov002_022046cc unk_2678;
    /* 0x27dc */ u32 unk_27dc;
    /* 0x27e0 */ s32 unk_27e0;
    /* 0x27e4 */ s32 unk_27e4;
    /* 0x27e8 */ s32 unk_27e8;
    /* 0x27ec */ u32 unk_27ec;
    /* 0x27f0 */ u32 unk_27f0;
    /* 0x27f4 */ u8 unk_27f4[3];
    /* 0x27f7 */ u8 unk_27f7;
    /* 0x27f8 */ u8 unk_27f8;
    /* 0x27f9 */ u8 unk_27f9;
    /* 0x27fa */ u8 unk_27fa;
    /* 0x27fb */ u8 unk_27fb;
    /* 0x27fc */ u8 unk_27fc;
    /* 0x27fd */ u8 unk_27fd;
    /* 0x27fe */ u8 unk_27fe;
    /* 0x27ff */ u8 unk_27ff;
    /* 0x2800 */ u8 unk_2800;
    /* 0x2801 */ u8 unk_2801;
    /* 0x2802 */ u8 unk_2802[2];
};

// free functions taking the scene object as first argument (their symbols are plain C names)
extern "C" {
void func_ov109_02295780(S *s);
void func_ov109_0229578c(S *s, u32 a);
void func_ov109_022955d0(S *s);
void func_ov109_0229585c(S *s);
void func_ov109_0229587c(S *s);
void func_ov109_022958b8(S *s);
void func_ov109_022957d0(S *s, u32 a);
BOOL func_ov109_02295774(S *s, u32 a);
u32 func_ov109_02295758(S *s, u32 a);
u32 func_ov109_02295748(S *s, u32 a);
BOOL func_ov109_02295570(S *s, u32 a);
BOOL func_ov109_022955a0(S *s, u32 a);
s32 func_ov109_0229565c(S *s, u32 a);
s32 func_ov109_02295694(S *s, u32 a);
void func_ov109_022956cc(S *s, u32 a, u32 b, u32 c);
u32 func_ov109_0229570c(S *s, u32 a, u32 b, s32 c);
Unk_ov109_02296698 *func_ov109_02296520();
}

struct Unk_ov109_SceneEntry {
    Unk_ov109_02296698 *(*create)();
    u16 a;
    u16 b;
};

extern "C" Unk_ov109_SceneEntry data_ov109_022965e0 = {func_ov109_02296520, 0x9c, 0xa0};

// Layout of the scene object as seen by the out-of-class functions
struct Unk_ov109_02295570 {
    u8 pad_000[0x94];
    u8 unk_094[0x38];
    u8 unk_0cc[0x2134 - 0xcc];
    u8 unk_2134[0x220c - 0x2134];
    u8 unk_220c[0x2270 - 0x220c];
    u8 unk_2270[0x2569 - 0x2270];
    u8 unk_2569[0x2570 - 0x2569];
    u8 unk_2570[0x2678 - 0x2570];
    u8 unk_2678[0x27e4 - 0x2678];
    s32 unk_27e4;
    s32 unk_27e8;
    u8 pad_27ec[0x27f8 - 0x27ec];
    u8 unk_27f8;
    u8 unk_27f9;
    u8 pad_27fa;
    u8 unk_27fb;
    u8 pad_27fc[2];
    u8 unk_27fe;
    u8 unk_27ff;
    u8 unk_2800;
    u8 unk_2801;
};

#define M(s) ((Unk_ov109_02296698 *)(s))
#define C220(x) ((Unk_ov002_0220464c *)&(x))

// ---------------------------------------------------------------------------------------------
// out-of-class functions (plain C symbols)

static inline BOOL Unk_ov109_022955d0_Rng(volatile u16 *p, BOOL z) {
    BOOL r = z;
    u32 a = *p;
    u32 b = *p;
    if (b >= 0x1323 && a <= 0x1368) r = TRUE;
    return r;
}

static inline BOOL Unk_ov109_02295c70_Both() {
    if (gTouchHeld != 0 && gTouchChanged != 0) return TRUE;
    return FALSE;
}

extern "C" Unk_ov109_02296698 *func_ov109_02296520() { return new Unk_ov109_02296698(); }

BOOL Unk_ov109_02296698::vfunc_00() {
    func_ov109_02295fd4();
    func_ov002_02200a50(0);
    func_ov002_02200a60(0);
    return TRUE;
}

BOOL Unk_ov109_02296698::vfunc_0c() {
    ((Unk_ov092_02291ec8 *)ProcBase_GetParent(this))->func_ov092_02291c5c();
    func_ov109_02295f98();
    return TRUE;
}

BOOL Unk_ov109_02296698::onDraw() {
    func_ov002_02201b28(&unk_2270);
    if (!func_ov109_02294d6c(1)) {
        return TRUE;
    }
    unk_2134.vfunc_08();
    if (MenuCtrl_IsButtons()) {
        unk_220c.func_ov002_02202844();
    }
    func_ov109_022953b8();
    if (func_ov109_02294d6c(2)) {
        unk_2678.func_ov002_022036a4(unk_27e0);
        s32 t = unk_27e0 - 0x10;
        func_ov094_022932d0(&unk_cc, 0, t);
        unk_b2c.func_ov094_022941a0(0, t);
        func_ov094_0229277c(&unk_b54, t);
    }
    return TRUE;
}

BOOL Unk_ov109_02296698::vfunc_4c() {
    static Unk_ov109_02296698_Fn tbl[5] = {
        &Unk_ov109_02296698::func_ov109_022961f0,
        &Unk_ov109_02296698::func_ov109_02296160,
        &Unk_ov109_02296698::func_ov109_02296120,
        &Unk_ov109_02296698::func_ov109_022960a0,
        &Unk_ov109_02296698::func_ov109_02296050
    };
    func_ov109_02295f38();
    (this->*tbl[unk_8c])();
    func_ov109_02295f00();
    return TRUE;
}

void Unk_ov109_02296698::func_ov109_02296274() {
    static Unk_ov109_02296698_Fn tbl[16] = {
        &Unk_ov109_02296698::func_ov109_02295e28,
        &Unk_ov109_02296698::func_ov109_02295d90,
        &Unk_ov109_02296698::func_ov109_02295d60,
        &Unk_ov109_02296698::func_ov109_02295d18,
        &Unk_ov109_02296698::func_ov109_02295c70,
        &Unk_ov109_02296698::func_ov109_02295b94,
        &Unk_ov109_02296698::func_ov109_02295b08,
        &Unk_ov109_02296698::func_ov109_02295ab8,
        &Unk_ov109_02296698::func_ov109_02295a74,
        &Unk_ov109_02296698::func_ov109_02295a3c,
        &Unk_ov109_02296698::func_ov109_02295a14,
        &Unk_ov109_02296698::func_ov109_022959d8,
        &Unk_ov109_02296698::func_ov109_02295988,
        &Unk_ov109_02296698::func_ov109_02295968,
        &Unk_ov109_02296698::func_ov109_02295938,
        &Unk_ov109_02296698::func_ov109_022958d4
    };
    (this->*tbl[unk_8d])();
}

BOOL Unk_ov109_02296698::vfunc_50() {
    func_0206e63c();
    if (func_0206e61c()) {
        u32 t = unk_8d;
        if (t != 0 && t != 1 && t != 5) {
        } else {
            func_ov109_02294f8c();
            func_ov109_02294f58();
            func_ov109_02294d5c(0x40);
        }
    }
    func_ov109_02295f7c();
    func_ov109_02296274();
    func_ov109_02295f74();
    return TRUE;
}

BOOL Unk_ov109_02296698::vfunc_54() { return TRUE; }

BOOL Unk_ov109_02296698::vfunc_58() { return TRUE; }

BOOL Unk_ov109_02296698::vfunc_5c() {
    ProcBase_RequestDelete(this);
    return TRUE;
}

void Unk_ov109_02296698::func_ov109_022961f0() {
    func_ov109_02295ee0();
    func_ov109_02295ecc();
    func_ov002_02200a50(1);
}

void Unk_ov109_02296698::func_ov109_02296160() {
    func_ov109_02295ea8();
    unk_2678.func_ov002_02203510(0x65);
    func_ov094_022937a0(&unk_cc);
    func_ov109_022955d0((S *)this);
    func_ov094_02293d2c(&unk_b2c);
    unk_b2c.func_ov094_022941f8(0xf);
    func_ov002_022008e0(8, 0, 0, 0x30);
    Gfx2d_ShowLayer(6);
    func_ov002_02200840(6, 0, -0x10);
    func_ov002_02200a50(2);
    func_ov109_02294d5c(1);
    func_ov109_02294d5c(2);
    unk_27e0 = func_ov002_02200920();
}

void Unk_ov109_02296698::func_ov109_02296120() {
    if (func_ov002_02200908(0)) {
        func_ov002_02200a60(2);
        func_ov109_0229585c((S *)this);
    }
    func_ov002_02200840(6, 0, -0x10);
    unk_27e0 = func_ov002_02200920();
}

void Unk_ov109_02296698::func_ov109_022960a0() {
    unk_2134.func_ov002_022006e4(1);
    func_ov109_022952e8();
    void *h = ProcBase_GetParent(this);
    if (func_ov109_02294d6c(0x40)) {
        ((Unk_ov092_02291ec8 *)h)->func_ov092_02291ce4(0x44, 1);
    } else {
        ((Unk_ov092_02291ec8 *)h)->func_ov092_02291ce4(0x40, 1);
    }
    func_ov002_022008c4(8, 0, 0, 0x30);
    func_ov002_02200840(6, 0, -0x10);
    func_ov002_02200a50(4);
    unk_27e0 = func_ov002_02200920();
}

void Unk_ov109_02296698::func_ov109_02296050() {
    if (func_ov002_022008fc(0)) {
        Gfx2d_ResetLayer(6);
        func_ov002_02200a60(5);
        func_ov109_02294d4c(1);
        func_ov109_02294d4c(2);
    } else {
        func_ov002_02200840(6, 0, -0x10);
    }
    unk_27e0 = func_ov002_02200920();
}

void Unk_ov109_02296698::func_ov109_02295fd4() {
    unk_27dc = 0;
    func_ov094_022939c0(&unk_cc, 2);
    unk_b2c.func_ov094_02294644(2);
    func_ov094_02292d30(&unk_b54, 6);
    unk_27f9 = 0x10;
    unk_21f4.func_ov002_022027a4();
    u32 z = 0;
    unk_27f7 = z;
    unk_27fb = z;
    unk_2270.func_ov002_02202310(3, 1, (const char *)z);
    unk_2801 = 0;
}

void Unk_ov109_02296698::func_ov109_02295f98() {
    func_ov109_02295780((S *)this);
    func_ov094_02292a80(&unk_b54);
    func_ov094_02293998(&unk_cc);
    func_ov002_02201b04(&unk_2270);
    unk_2678.func_ov002_02203900();
}

void Unk_ov109_02296698::func_ov109_02295f7c() {
    func_ov109_02295f38();
    unk_220c.vfunc_0c();
}

// ---------------------------------------------------------------------------------------------

void Unk_ov109_02296698::func_ov109_02295f74() { func_ov109_02295f00(); }

void Unk_ov109_02296698::func_ov109_02295f38() {
    func_ov109_02295780((S *)this);
    func_ov094_02292acc(&unk_b54);
    func_ov094_022939a0(&unk_cc);
    unk_b2c.func_ov094_0229462c();
    unk_2678.func_ov002_02203900();
}

void Unk_ov109_02296698::func_ov109_02295f00() {
    func_ov002_02201b58(&unk_2270);
    func_ov094_02292aa4(&unk_b54);
    if (unk_2134.func_ov002_0220071c()) {
        func_ov109_02295448();
    }
}

void Unk_ov109_02296698::func_ov109_02295ee0() {
    Gfx2d_SetLayerPriority(6, 2);
    Gfx2d_SetLayerControl(6, 0, 0, 0);
}

void Unk_ov109_02296698::func_ov109_02295ecc() { func_ov094_02292d1c(&unk_b54, 0); }

void Unk_ov109_02296698::func_ov109_02295ea8() {
    func_ov094_02292ae0(&unk_b54);
    func_ov002_02203920(&unk_2678);
}

void Unk_ov109_02296698::func_ov109_02295e28() {
    S *s = (S *)this;
    if (M(s)->func_ov002_02200a14(1)) {
        func_ov109_0229587c(s);
    } else if (Unk_ov109_02295c70_Both()) {
        u32 r = func_ov109_0229570c(s, gTouchCurX, gTouchCurY + 0x10, 1);
        if (r != 0x10) {
            func_ov109_022957d0(s, r);
        } else if (((Unk_ov002_022046cc *)s->unk_2678)->func_ov002_02203110(9)) {
            M(s)->func_ov109_02294f8c();
        }
    }
}

void Unk_ov109_02296698::func_ov109_02295d90() {
    S *s = (S *)this;
    if (gTouchHeld == 0) {
        if (func_ov109_022955a0(s, s->unk_27f8)) {
            M(s)->func_ov002_02200a58(0);
            ((Unk_ov002_02204468 *)s->unk_2134)->func_ov002_022006a4(0x3c);
        } else {
            M(s)->func_ov002_02200a58(3);
            M(s)->func_ov109_02296274();
        }
    } else if (!func_ov109_022955a0(s, s->unk_27f8) && ((Unk_ov002_02204468 *)s->unk_2134)->func_ov002_02200680()) {
        u8 v = s->unk_2801;
        if (v != 0) {
            s->unk_2801 = v - 1;
        } else {
            M(s)->func_ov109_02294ed8(s->unk_27f8, 1);
            M(s)->func_ov002_02200a58(2);
        }
    } else {
        ((Unk_ov002_02204468 *)s->unk_2134)->func_ov002_022006c0();
    }
}

void Unk_ov109_02296698::func_ov109_02295d60() {
    S *s = (S *)this;
    if (func_0206e61c()) {
        M(s)->func_ov002_02200a58(4);
    } else if (gTouchHeld == 0) {
        M(s)->func_ov002_02200a58(4);
    }
}

void Unk_ov109_02296698::func_ov109_02295d18() {
    S *s = (S *)this;
    if (((Unk_ov002_02204468 *)s->unk_2134)->func_ov002_02200680()) {
        u8 v = s->unk_2801;
        if (v != 0) {
            s->unk_2801 = v - 1;
        } else {
            M(s)->func_ov109_02294ed8(s->unk_27f8, 1);
            M(s)->func_ov002_02200a58(2);
        }
    }
}

void Unk_ov109_02296698::func_ov109_02295c70() {
    S *s = (S *)this;
    if (((Unk_ov002_02204558 *)s->unk_2270)->func_ov002_022017b4()) {
        if (func_0206e61c()) {
            M(s)->func_ov109_02294ff4();
        } else if (M(s)->func_ov002_02200a14(1)) {
            M(s)->func_ov109_02294ff4();
        } else if (Unk_ov109_02295c70_Both()) {
            s32 r = ((Unk_ov002_02204558 *)s->unk_2270)->func_ov002_022014c0(gTouchCurX, gTouchCurY);
            if (r >= 0) {
                func_ov002_02201aa0(s->unk_2270, r, 1);
                s->unk_27ff = s->unk_2569[r];
                M(s)->func_ov002_02200a58(0xc);
            }
        }
    }
}

void Unk_ov109_02296698::func_ov109_02295b94() {
    S *s = (S *)this;
    if (M(s)->func_ov002_022009d4()) {
        func_ov109_022958b8(s);
        ((Unk_ov002_02204468 *)s->unk_2134)->func_ov002_022006e4(1);
    } else if (M(s)->func_ov109_02294d84((void *)M(s)->func_ov002_022009c8())) {
        M(s)->func_ov109_022953f4();
        M(s)->func_ov109_02295270();
        ((Unk_ov002_02204468 *)s->unk_2134)->func_ov002_022006e4(0);
    } else if (!func_ov109_022955a0(s, s->unk_27fb) && (gPad[1] & 1) != 0) {
        if (func_ov109_02295774(s, s->unk_27fb)) {
            if (!func_ov109_02295570(s, s->unk_27fb)) {
                M(s)->func_ov109_02294ed8(s->unk_27fb, 0);
            }
        } else if (s->unk_27fb == 0xf) {
            M(s)->func_ov109_022950f8();
        }
    } else if ((gPad[1] & 2) != 0) {
        M(s)->func_ov109_022952e8();
        M(s)->func_ov109_02294f8c();
        ((Unk_ov002_02204468 *)s->unk_2134)->func_ov002_022006e4(0);
    } else {
        ((Unk_ov002_02204468 *)s->unk_2134)->func_ov002_022006c0();
    }
}

void Unk_ov109_02296698::func_ov109_02295b08() {
    S *s = (S *)this;
    if (func_0206e61c()) {
        M(s)->func_ov109_02294ff4();
    } else if (M(s)->func_ov002_022009d4()) {
        M(s)->func_ov109_02294ff4();
    } else if (func_ov002_022019d0(s->unk_2270, M(s)->func_ov002_022009c8(), &s->unk_2800, 0)) {
        M(s)->func_ov109_0229521c();
    } else {
        u32 k = gPad[1];
        if ((k & 1) != 0) {
            ((Unk_ov002_0220464c *)s->unk_220c)->func_ov002_02202b68();
            M(s)->func_ov002_02200a58(7);
        } else if ((k & 2) != 0) {
            M(s)->func_ov109_022951b8();
        }
    }
}

void Unk_ov109_02296698::func_ov109_02295ab8() {
    S *s = (S *)this;
    if (((Unk_ov002_02204614 *)s->unk_220c)->isAnimDone()) {
        func_ov002_02201aa0(s->unk_2270, s->unk_2800, 1);
        s->unk_27ff = s->unk_2569[s->unk_2800];
        M(s)->func_ov002_02200a58(0xc);
    }
}

void Unk_ov109_02296698::func_ov109_02295a74() {
    S *s = (S *)this;
    if (!((Unk_ov002_02204614 *)s->unk_220c)->func_ov002_022028f0()) {
        M(s)->func_ov002_02200a58(s->unk_27fe);
        if (s->unk_27fe == 5) {
            M(s)->func_ov109_022954b0(s->unk_27fb);
        }
        M(s)->func_ov109_02296274();
    }
}

void Unk_ov109_02296698::func_ov109_02295a3c() {
    S *s = (S *)this;
    if (((Unk_ov002_02204614 *)s->unk_220c)->isAnimDone()) {
        ((Unk_ov002_022046cc *)s->unk_2678)->func_ov002_022030ac(9);
        M(s)->func_ov002_02200a58(0xf);
        Snd_PlaySe(0x28);
    }
}

void Unk_ov109_02296698::func_ov109_02295a14() {
    S *s = (S *)this;
    if (((Unk_ov002_02204614 *)s->unk_220c)->isAnimDone()) {
        M(s)->func_ov109_02295118();
        M(s)->func_ov002_02200a58(5);
    }
}

void Unk_ov109_02296698::func_ov109_022959d8() {
    S *s = (S *)this;
    if (((Unk_ov002_02204558 *)s->unk_2270)->func_ov002_022017b4()) {
        if (MenuCtrl_IsButtons()) {
            M(s)->func_ov109_0229516c();
            M(s)->func_ov002_02200a58(6);
        } else {
            M(s)->func_ov002_02200a58(4);
        }
    }
}

void Unk_ov109_02296698::func_ov109_02295988() {
    S *s = (S *)this;
    if (func_ov002_02201a28(s->unk_2270)) {
        func_ov002_02202064(s->unk_2270, 0);
        ((Unk_ov002_02204468 *)s->unk_2134)->func_ov002_022006e4(1);
        if (((Unk_ov002_02204614 *)s->unk_220c)->getAnim()) {
            M(s)->func_ov109_02295138();
        }
        M(s)->func_ov002_02200a58(0xd);
    }
}

void Unk_ov109_02296698::func_ov109_02295968() {
    S *s = (S *)this;
    if (((Unk_ov002_02204558 *)s->unk_2270)->func_ov002_022017a4()) {
        M(s)->func_ov109_02295094();
    }
}

void Unk_ov109_02296698::func_ov109_02295938() {
    S *s = (S *)this;
    if (((Unk_ov002_022040ec *)s->unk_2570)->func_ov002_02204234(1)) {
        func_ov109_0229585c(s);
        ((Unk_ov002_02204614 *)s->unk_220c)->enableObjWindow();
    }
}

void Unk_ov109_02296698::func_ov109_022958d4() {
    S *s = (S *)this;
    if (((Unk_ov002_022046cc *)s->unk_2678)->func_ov002_0220308c()) {
        if (((Unk_ov002_02204614 *)s->unk_220c)->getAnim()) {
            s32 t = ((Unk_ov002_022046cc *)s->unk_2678)->func_ov002_0220306c();
            s32 u = ((Unk_ov002_022046cc *)s->unk_2678)->func_ov002_022030f4(-1);
            s32 w = ((Unk_ov002_022046cc *)s->unk_2678)->func_ov002_022030b8(-1);
            ((Unk_ov002_02204614 *)s->unk_220c)->func_ov002_02202a40(t + u, t + w);
        }
    } else {
        M(s)->func_ov109_02294f58();
    }
}

void func_ov109_022958b8(S *s) {
    M(s)->func_ov109_022952e8();
    M(s)->func_ov109_022954f0();
    M(s)->func_ov002_02200a58(0);
}

void func_ov109_0229587c(S *s) {
    s->unk_27f9 = 0x10;
    M(s)->func_ov109_02295364();
    M(s)->func_ov002_02200980();
    M(s)->func_ov109_022953f4();
    M(s)->func_ov002_02200a58(5);
    M(s)->func_ov109_022954b0(s->unk_27fb);
}

void func_ov109_0229585c(S *s) {
    if (MenuCtrl_IsTouch()) {
        func_ov109_022958b8(s);
    } else {
        func_ov109_0229587c(s);
    }
}

void func_ov109_022957d0(S *s, u32 a) {
    u32 x, y;
    s->unk_27f8 = a;
    M(s)->func_ov002_02200a58(1);
    x = gTouchCurX;
    y = gTouchCurY;
    s->unk_27e4 = func_ov109_02295694(s, s->unk_27f8) - x;
    s->unk_27e8 = func_ov109_0229565c(s, s->unk_27f8) - y;
    s->unk_27f9 = a;
    ((Unk_ov002_02204468 *)s->unk_2134)->func_ov002_022006b8();
    ((Unk_ov002_02204468 *)s->unk_2134)->func_ov002_022006c0();
    s->unk_2801 = 2;
    if (!func_ov109_022955a0(s, a)) func_ov094_0229238c();
}

void func_ov109_0229578c(S *s, u32 a) {
    volatile u8 b = data_021edb68;
    b = a;
    ((Unk_ov002_022040ec *)s->unk_2570)->func_ov002_02204394((u8 *)&b, 1, 0);
    M(s)->func_ov002_02200a58(0xe);
    ((Unk_ov002_02204614 *)s->unk_220c)->disableObjWindow();
}

void func_ov109_02295780(S *s) {
    M(s)->unk_94[0].cancel();
}

BOOL func_ov109_02295774(S *s, u32 a) {
    if (a <= 0xe) return TRUE;
    return FALSE;
}

u32 func_ov109_02295758(S *s, u32 a) {
    if (func_ov109_02295774(s, a)) return (u8)a;
    return 0;
}

u32 func_ov109_02295748(S *s, u32 a) {
    if (a <= 0xe) return (u8)a;
    return 0x10;
}

u32 func_ov109_0229570c(S *s, u32 a, u32 b, s32 c) {
    u32 t = func_ov094_02293968(s->unk_0cc);
    if (t != 0x23) {
        if (c != 0) {
            if (func_ov094_0229311c(s->unk_0cc, t)) return 0x10;
        }
        return func_ov109_02295748(s, t);
    }
    return 0x10;
}

void func_ov109_022956cc(S *s, u32 a, u32 b, u32 c) {
    if (func_ov109_02295774(s, a)) {
        u32 t = func_ov109_02295758(s, a);
        func_ov094_02293494(s->unk_0cc, t, b, c);
        func_ov094_02293434(s->unk_0cc, t);
    }
}

s32 func_ov109_02295694(S *s, u32 a) {
    if (func_ov109_02295774(s, a)) {
        return func_ov094_02293624(s->unk_0cc, func_ov109_02295758(s, a));
    } else if (a == 0xf) {
        return 0xbc;
    }
    return 0;
}

s32 func_ov109_0229565c(S *s, u32 a) {
    if (func_ov109_02295774(s, a)) {
        return func_ov094_02293610(s->unk_0cc, func_ov109_02295758(s, a)) - 0x10;
    } else if (a == 0xf) {
        return 0xb6;
    }
    return 0;
}

void func_ov109_022955d0(S *s) {
    volatile u16 v = 0xfff1;
    u8 i;
    BOOL z = FALSE;
    for (i = 0; i <= 0xe; i++) {
        BOOL r = FALSE;
        if (!func_ov109_02295570(s, i)) {
            if (M(s)->func_ov109_0229550c(i)) {
                r = TRUE;
            } else {
                v = M(s)->func_ov109_0229553c(i);
                if (!Unk_ov109_022955d0_Rng(&v, z)) r = TRUE;
            }
        }
        if (r) {
            func_ov094_02293308(s->unk_0cc, func_ov109_02295758(s, i));
        }
    }
}

BOOL func_ov109_022955a0(S *s, u32 a) {
    if (func_ov109_02295774(s, a)) {
        return func_ov094_0229333c(s->unk_0cc, func_ov109_02295758(s, a));
    }
    return FALSE;
}

BOOL func_ov109_02295570(S *s, u32 a) {
    if (func_ov109_02295774(s, a)) {
        return func_ov094_0229311c(s->unk_0cc, func_ov109_02295758(s, a));
    }
    return TRUE;
}

s32 Unk_ov109_02296698::func_ov109_0229553c(u32 idx) {
    if (func_ov109_02295774((S *)this, idx)) {
        s32 r = func_ov109_02295758((S *)this, idx);
        return func_ov094_0229352c(&unk_cc, r);
    }
    return 0xfff1;
}

s32 Unk_ov109_02296698::func_ov109_0229550c(u32 idx) {
    if (func_ov109_02295774((S *)this, idx)) {
        s32 r = func_ov109_02295758((S *)this, idx);
        return func_ov094_02293504(&unk_cc, r);
    }
    return 0xf1;
}

void Unk_ov109_02296698::func_ov109_022954f0() {
    func_ov094_022935dc(&unk_cc);
    unk_b2c.func_ov094_022943f8();
}

void Unk_ov109_02296698::func_ov109_022954b0(u32 idx) {
    if (func_ov109_02295774((S *)this, idx)) {
        s32 r = func_ov109_02295758((S *)this, idx);
        func_ov094_0229359c(&unk_cc, r);
        unk_b2c.func_ov094_022943f8();
    } else {
        func_ov109_022954f0();
    }
}

void Unk_ov109_02296698::func_ov109_02295448() {
    s32 x = func_ov109_02295694((S *)this, unk_27f9) - 0x6d;
    s32 y = func_ov109_0229565c((S *)this, unk_27f9) - 0x78;
    if (MenuCtrl_IsButtons()) {
        y -= 8;
    }
    ((LabelBalloon *)&unk_2134)->setPos(x, y);
    if (func_ov109_02295774((S *)this, unk_27f9)) {
        s32 r = func_ov109_02295758((S *)this, unk_27f9);
        func_ov094_02293638(&unk_cc, &unk_2134, r);
    }
}

void Unk_ov109_02296698::func_ov109_022953f4() {
    if (func_ov109_02295774((S *)this, unk_27fb)) {
        if (func_ov109_02295570((S *)this, unk_27fb)) {
            unk_2134.func_ov002_022006b0();
        } else {
            unk_27f9 = unk_27fb;
            unk_2134.func_ov002_022006b8();
        }
    } else {
        unk_2134.func_ov002_022006b0();
    }
}

void Unk_ov109_02296698::func_ov109_022953b8() {
    if (!func_ov109_02294d6c(0x20)) {
        if (unk_27f7 != 0) {
            if (unk_27f7 == 1) {
                func_ov094_0229313c(&unk_cc, unk_27ec, unk_27f0);
            }
        }
    }
}

void Unk_ov109_02296698::func_ov109_02295364() {
    s32 a = func_ov109_0229531c();
    s32 b = func_ov109_0229530c();
    unk_220c.func_ov002_02202a40(a, b);
    if (unk_27fb == 0xf) {
        C220(unk_220c)->func_ov002_02202d00(7);
    } else {
        C220(unk_220c)->func_ov002_02202d00(1);
    }
    func_ov109_02295118();
}

s32 Unk_ov109_02296698::func_ov109_0229531c() {
    s32 r = func_ov109_02295694((S *)this, unk_27fb);
    if (func_ov109_02294d6c(0x10)) {
        r += 0x100;
    } else if (func_ov109_02294d6c(8)) {
        r -= 0x100;
    }
    return r + 8;
}

s32 Unk_ov109_02296698::func_ov109_0229530c() { return func_ov109_0229565c((S *)this, unk_27fb); }

void Unk_ov109_02296698::func_ov109_022952e8() {
    C220(unk_220c)->func_ov002_02202d00(0);
    unk_220c.vfunc_0c();
}

void Unk_ov109_02296698::func_ov109_02295270() {
    if (func_ov109_02294d6c(4)) {
        s32 a = func_ov109_0229531c();
        s32 b = func_ov109_0229530c();
        unk_220c.func_ov002_02202a40(a, b);
        func_ov109_02294d4c(4);
    } else {
        s32 a = func_ov109_0229531c();
        s32 b = func_ov109_0229530c();
        unk_220c.func_ov002_022029e8(a, b, 3, 1);
        unk_27fe = unk_8d;
        func_ov002_02200a58(8);
    }
}

void Unk_ov109_02296698::func_ov109_0229521c() {
    s32 a = unk_2270.func_ov002_022014a4();
    s32 b = unk_2270.func_ov002_02201498(unk_2800);
    unk_220c.func_ov002_02202a18(a, b, 2);
    unk_27fe = unk_8d;
    func_ov002_02200a58(8);
}

void Unk_ov109_02296698::func_ov109_022951b8() {
    unk_27ff = 1;
    unk_2800 = func_ov002_02201a70(&unk_2270);
    s32 a = unk_2270.func_ov002_022014a4();
    s32 b = unk_2270.func_ov002_02201498(unk_2800);
    unk_220c.func_ov002_02202a40(a, b);
    unk_220c.setAnimAtEnd(8);
    func_ov002_02200a58(0xc);
}

void Unk_ov109_02296698::func_ov109_0229516c() {
    unk_2800 = 0;
    s32 a = unk_2270.func_ov002_022014a4();
    s32 b = unk_2270.func_ov002_02201498(unk_2800);
    unk_220c.func_ov002_02202a40(a, b);
    C220(unk_220c)->func_ov002_02202d00(7);
}

void Unk_ov109_02296698::func_ov109_02295138() {
    s32 a = func_ov109_0229531c();
    s32 b = func_ov109_0229530c();
    unk_220c.func_ov002_02202a40(a, b);
    C220(unk_220c)->func_ov002_02202d00(1);
}

void Unk_ov109_02296698::func_ov109_02295118() {
    unk_220c.func_ov002_02202a78();
    unk_220c.vfunc_0c();
}

void Unk_ov109_02296698::func_ov109_022950f8() {
    C220(unk_220c)->func_ov002_02202b68();
    func_ov002_02200a58(9);
}

void Unk_ov109_02296698::func_ov109_02295094() {
    switch (unk_27ff) {
    case 0: {
        s32 r5 = func_ov109_0229553c(unk_27fc);
        if (func_020600f4(r5)) {
            func_ov109_0229578c((S *)this, 0x11);
        } else {
            func_0206009c(r5);
            func_ov109_022956cc((S *)this, unk_27fc, 0xfff1, 0);
            func_ov109_02294fb4();
        }
        break;
    }
    case 1:
    default:
        func_ov109_0229585c((S *)this);
        break;
    }
}

void Unk_ov109_02296698::func_ov109_02295024(u32 x) {
    unk_2270.func_ov002_0220160c((Unk_ov002_022013ac_Rec *)&unk_2270.unk_2f4, 0);
    s32 a = func_ov109_02295694((S *)this, unk_27fc);
    s32 b = func_ov109_0229565c((S *)this, unk_27fc);
    if (x != 0) {
        unk_2270.func_ov002_02202200((LabelBalloon *)&unk_2134);
    } else {
        unk_2270.func_ov002_0220229c(a, b);
    }
    func_ov002_02202098(&unk_2270, 0);
    func_ov002_02200a58(0xb);
}

void Unk_ov109_02296698::func_ov109_02294ff4() {
    unk_27ff = 1;
    func_ov109_02295138();
    func_ov002_02202064(&unk_2270, 0);
    func_ov002_02200a58(0xd);
}

void Unk_ov109_02296698::func_ov109_02294fb4() {
    func_0206ed2c(unk_27fc);
    func_0206ecf8(1);
    unk_8c = 3;
    func_ov002_02200a60(1);
    unk_2134.func_ov002_022006e4(1);
    func_ov109_022952e8();
}

void Unk_ov109_02296698::func_ov109_02294f8c() {
    unk_2678.func_ov002_022030ac(9);
    func_ov002_02200a58(0xf);
    Snd_PlaySe(0x28);
}

void Unk_ov109_02296698::func_ov109_02294f58() {
    func_0206ecf8(0);
    unk_8c = 3;
    func_ov002_02200a60(1);
    unk_2134.func_ov002_022006e4(1);
    func_ov109_022952e8();
}

void Unk_ov109_02296698::func_ov109_02294f30() {
    func_ov002_02201700(&unk_2270.unk_2f4, 0x73, 0);
    func_ov002_02201700(&unk_2270.unk_2f4, 2, 1);
}

void Unk_ov109_02296698::func_ov109_02294ed8(u32 idx, u32 x) {
    unk_27fc = idx;
    func_ov002_022016e4(&unk_2270.unk_2f4, 1);
    if (func_ov109_02295774((S *)this, idx)) {
        func_ov109_02294f30();
        func_ov109_022952e8();
        if (x == 0) {
            unk_2134.func_ov002_022006e4(1);
        }
        func_ov109_02295024(x);
    }
}

void Unk_ov109_02296698::func_ov109_02294df0(void *pad) {
    s32 r4 = unk_27fb;
    s32 r6 = 0;
    for (; r4 >= 5; r4 -= 5, r6++) {
    }
    if (func_ov002_0220126c(pad)) {
        if (func_ov002_0220128c(pad) && r6 != 0) {
        } else if (r4 == 0) {
            unk_27fb = unk_27fb + 4;
            func_ov109_02294d5c(8);
        } else {
            unk_27fb = unk_27fb - 1;
        }
    } else if (func_ov002_0220125c(pad)) {
        if (!func_ov002_0220127c(pad)) {
            if (r4 == 4) {
                unk_27fb = unk_27fb - 4;
                func_ov109_02294d5c(0x10);
            } else {
                unk_27fb = unk_27fb + 1;
            }
        }
    }
    if (!func_ov109_02294d6c(0x18)) {
        if (func_ov002_0220128c(pad)) {
            if (r6 > 0) {
                unk_27fb = unk_27fb - 5;
            }
        } else if (func_ov002_0220127c(pad)) {
            if (r6 < 2) {
                unk_27fb = unk_27fb + 5;
            } else {
                unk_27fb = 0xf;
                C220(unk_220c)->func_ov002_02202ca0();
            }
        }
    }
}

BOOL Unk_ov109_02296698::func_ov109_02294d84(void *pad) {
    u8 old = unk_27fb;
    func_ov109_02294d4c(0x18);
    if (pad == 0) {
        return FALSE;
    }
    if (func_ov109_02295774((S *)this, unk_27fb)) {
        func_ov109_02294df0(pad);
    } else if (unk_27fb == 0xf) {
        if (func_ov002_0220128c(pad)) {
            unk_27fb = 0xe;
            C220(unk_220c)->func_ov002_02202c40();
        }
    }
    if (old != unk_27fb) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov109_02296698::func_ov109_02294d6c(u32 mask) {
    if (unk_27dc & mask) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov109_02296698::func_ov109_02294d5c(u32 mask) { unk_27dc = unk_27dc | mask; }

// ---------------------------------------------------------------------------------------------

void Unk_ov109_02296698::func_ov109_02294d4c(u32 mask) { unk_27dc = unk_27dc & ~mask; }

