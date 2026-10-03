// ov099: scene overlay (class Unk_ov099_02296b00, vtable 0x02296b00, 0x2794 bytes).
#define postCreate() postCreate(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef postCreate
#undef vfunc_14

class Unk_ov099_02296b00;
struct Unk_ov002_022013ac_Rec;

extern "C" {
extern u8 gTouchHoldFrames;
extern u8 gTouchCurY;
extern u8 gTouchCurX;
extern u8 gTouchPressY;
extern u8 gTouchPressX;
extern u8 gTouchHeld;
extern u8 gTouchChanged;
extern u16 gPad[];

void Gfx2d_ShowLayer(s32 a);
void Gfx2d_ResetLayer(s32 a);
void Gfx2d_SetLayerControl(u32 n, u32 a, u32 b, u32 c);
void Gfx2d_SetLayerPriority(u32 a, u32 b);
BOOL MenuCtrl_IsButtons();
BOOL MenuCtrl_IsTouch();
void func_0209909c(u16 *p, s32 a, s32 b);
void *ProcBase_GetParent(void *p);
void ProcBase_RequestDelete();

BOOL func_ov002_0220125c(void *pad);
BOOL func_ov002_0220126c(void *pad);
BOOL func_ov002_0220127c(void *pad);
BOOL func_ov002_0220128c(void *pad);
void func_ov002_022016e4(void *p, u32 v);
void func_ov002_02201700(void *p, u32 a, u32 b);
BOOL func_ov002_022019d0(void *p, s32 a, void *b, s32 c);
BOOL func_ov002_02201a28(void *p);
void func_ov002_02201aa0(void *p, s32 a, s32 b);
void func_ov002_02201b04(void *p);
void func_ov002_02201b28(void *p);
void func_ov002_02201b58(void *p);
void func_ov002_02202064(void *p, u32 v);
void func_ov002_02202098(void *p, u32 v);

void func_ov094_0229277c(void *p, s32 a);
void func_ov094_02292a80(void *p);
void func_ov094_02292aa4(void *p);
void func_ov094_02292acc(void *p);
void func_ov094_02292ae0(void *p);
void func_ov094_02292d1c(void *p, s32 a);
void func_ov094_02292d30(void *p, s32 a);
BOOL func_ov094_0229311c(void *p, u32 v);
void func_ov094_0229313c(void *p, s32 a, s32 b);
void func_ov094_022932d0(void *p, s32 a, s32 b);
BOOL func_ov094_0229333c(void *p, u32 v);
void func_ov094_0229341c(void *p, u32 a, u32 b);
void func_ov094_02293434(void *p, u32 a);
void func_ov094_02293494(void *p, u32 a, u32 b, u32 c);
void func_ov094_022934d8(void *p, u32 idx);
u8 func_ov094_02293504(void *p, u32 idx);
u16 func_ov094_0229352c(void *p, u32 idx);
void func_ov094_0229357c(void *p, u32 v);
void func_ov094_0229358c(void *p);
void func_ov094_0229359c(void *p, u32 v);
void func_ov094_022935dc(void *p);
s32 func_ov094_02293610(void *p, u32 v);
s32 func_ov094_02293624(void *p, u32 v);
void func_ov094_02293638(void *p, void *q, s32 a);
void func_ov094_022937a0(void *p);
u32 func_ov094_02293968(void *p);
void func_ov094_02293998(void *p);
void func_ov094_022939a0(void *p);
void func_ov094_022939c0(void *p, s32 a);
void func_ov094_02293d2c(void *p);
BOOL func_ov094_02293d80(void *p, u32 v);
s32 func_ov094_02293d9c(void *p, u32 v);
s32 func_ov094_02293df8(void *p, u32 v);
}

// ---------------------------------------------------------------------------------------------
// Classes of other modules (minimal declarations; sub-objects are opaque)

class LabelBalloon {
public:
    void setPos(s32 x, s32 y);
};

class BgVramTask {
public:
    BgVramTask();
    virtual void vfunc_00();
    virtual void clear();
    void cancel();
    u8 unk_04[0x20];
};

class BgVramTaskPair : public BgVramTask {
public:
    BgVramTaskPair();
    u8 unk_24[0x14];
};

class Letter {
public:
    Letter();
    ~Letter();
    u32 unk_00[0xf4 / 4];
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
    void func_ov094_022941a0(s32 a, s32 b);
    BOOL func_ov094_022941ec(s32 a);
    void func_ov094_02294420(void *p, s32 a);
    void func_ov094_022943a4(s32 a);
    void func_ov094_022943b0();
    void func_ov094_022943bc(u32 a);
    void func_ov094_022943f8();
    u32 func_ov094_02294610(s32 a, s32 b);
    void func_ov094_0229462c();
    void func_ov094_02294644(s32 a);
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
    void func_ov002_022006a4(u8 a);
    void func_ov002_022006b0();
    void func_ov002_022006b8();
    void func_ov002_022006c0();
    void func_ov002_022006e4(s32 a);
    BOOL func_ov002_0220071c();
    u32 unk_04[(0xc0 - 4) / 4];
};

class Unk_ov002_02204604 {
public:
    Unk_ov002_02204604();
    ~Unk_ov002_02204604();
    void func_ov002_022026c4(s32 a, s32 b, s32 c);
    void func_ov002_022026f4(s32 a, s32 b);
    s32 func_ov002_02202708();
    s32 func_ov002_02202710();
    BOOL func_ov002_02202718();
    void func_ov002_022027a4();
    u32 unk_00[0x18 / 4];
};

// Menu cursor sub-object hierarchy
class HandCursor {
public:
    virtual ~HandCursor();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    BOOL isAnimDone();
    s32 getAnim();
    s32 enableObjWindow();
};

class Unk_ov002_02202d98 : public HandCursor {
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

// Same object as Unk_ov002_02202d98 under the name used by its other methods
class Unk_ov002_0220464c : public HandCursor {
public:
    void func_ov002_02202b68();
    void func_ov002_02202d00(s32 a);
};

class Unk_ov002_02204614 : public Unk_ov002_02202d98 {
public:
    Unk_ov002_02204614();
    virtual ~Unk_ov002_02204614();
    u32 unk_04[0x60 / 4];
};

// Same object as Unk_ov002_02204558 under the name used by its other methods
class Unk_ov002_022013ac {
public:
    s32 func_ov002_02201498(s32 a);
    s32 func_ov002_022014a4();
    s32 func_ov002_022014c0(s32 a, s32 b);
    void func_ov002_0220160c(Unk_ov002_022013ac_Rec *r, s32 a);
    BOOL func_ov002_022017a4();
    BOOL func_ov002_022017b4();
};

class Unk_ov002_02204558 {
public:
    Unk_ov002_02204558();
    ~Unk_ov002_02204558();
    void func_ov002_0220229c(s32 a, s32 b);
    void func_ov002_02202310(s32 a, s32 b, const char *c);
    u32 unk_00[0x2f4 / 4];
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

// ov092 singleton returned by ProcBase_GetParent
class Unk_ov092_02291ec8 {
public:
    void func_ov092_02291c5c();
    void func_ov092_02291ce4(s32 a, s32 b);
};

// Vtable 0x022044e4 (declaration copied from src/ov002/unk_ov002_02200680.cpp; sub-objects opaque)
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

typedef void (Unk_ov099_02296b00::*Unk_ov099_02296b00_Fn)();

// Vtable 0x02296b00
class Unk_ov099_02296b00 : public Unk_ov002_022044e4 {
public:
    Unk_ov099_02296b00()
        : unk_94(), unk_cc(), unk_b2c(), unk_b54(), unk_2134(), unk_21f4(), unk_220c(), unk_2270(), unk_2570(), unk_2690() {}

    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL onDraw();
    virtual BOOL vfunc_4c();
    virtual BOOL vfunc_50();
    virtual BOOL vfunc_54();
    virtual BOOL vfunc_58();
    virtual BOOL vfunc_5c();

    void func_ov099_02294d4c(u32 mask);
    void func_ov099_02294d5c(u32 mask);
    BOOL func_ov099_02294d6c(u32 mask);
    BOOL func_ov099_02294d84(void *pad);
    void func_ov099_02294dcc(void *pad);
    void func_ov099_02294ea0(u32 idx);
    void func_ov099_02294ef4();
    void func_ov099_02294f30();
    void func_ov099_02294f60();
    s32 func_ov099_02294fbc();
    void func_ov099_02294fe0(u32 v);
    void func_ov099_0229502c(u32 v);
    void func_ov099_02295068();
    void func_ov099_02295088();
    void func_ov099_022950a8();
    void func_ov099_022950c8();
    void func_ov099_022950fc();
    void func_ov099_02295148();
    void func_ov099_0229519c();
    void func_ov099_02295214();
    s32 func_ov099_02295238();
    s32 func_ov099_02295248();
    void func_ov099_02295290();
    void func_ov099_022952cc(u32 idx);
    void func_ov099_0229530c(u32 idx);
    void func_ov099_02295340(u32 idx);
    void func_ov099_022953b8();
    void func_ov099_022953e8();
    void func_ov099_0229541c();
    void func_ov099_02295454();
    void func_ov099_02295490();
    void func_ov099_022954f4();

    // state handlers (member-pointer tables)
    void func_ov099_02295c28();
    void func_ov099_02295c60();
    void func_ov099_02295c80();
    void func_ov099_02295cc4();
    void func_ov099_02295d00();
    void func_ov099_02295d38();
    void func_ov099_02295d7c();
    void func_ov099_02295dc4();
    void func_ov099_02295e18();
    void func_ov099_02295e48();
    void func_ov099_02295e78();
    void func_ov099_02295ea0();
    void func_ov099_02295ec0();
    void func_ov099_02295f0c();
    void func_ov099_02295f5c();
    void func_ov099_02295fd8();
    void func_ov099_02296080();
    void func_ov099_02296158();
    void func_ov099_022961d8();
    void func_ov099_02296264();
    void func_ov099_022962d4();
    void func_ov099_022964f4();
    void func_ov099_02296544();
    void func_ov099_022965a8();
    void func_ov099_022965e4();
    void func_ov099_02296654();

    // helpers
    void func_ov099_02296354();
    void func_ov099_02296364();
    void func_ov099_02296378();
    void func_ov099_02296398();
    void func_ov099_022963d0();
    void func_ov099_02296400();
    void func_ov099_02296408();
    void func_ov099_02296424();
    void func_ov099_02296454();

    /* 0x91 */ u8 unk_91[3];
    /* 0x94 */ BgVramTaskPair unk_94[1];
    /* 0xcc */ Unk_ov094_02294a50 unk_cc;
    /* 0xb2c */ Unk_ov094_02294bd4 unk_b2c;
    /* 0xb54 */ Unk_ov094_02292d6c unk_b54;
    /* 0x2134 */ Unk_ov002_02204468 unk_2134;
    /* 0x21f4 */ Unk_ov002_02204604 unk_21f4;
    /* 0x220c */ Unk_ov002_02204614 unk_220c;
    /* 0x2270 */ Unk_ov002_02204558 unk_2270;
    /* 0x2570 */ Unk_ov002_022040ec unk_2570;
    /* 0x2678 */ u32 unk_2678;
    /* 0x267c */ u32 unk_267c;
    /* 0x2680 */ s32 unk_2680;
    /* 0x2684 */ s32 unk_2684;
    /* 0x2688 */ s32 unk_2688;
    /* 0x268c */ s32 unk_268c;
    /* 0x2690 */ Letter unk_2690;
    /* 0x2784 */ u16 unk_2784;
    /* 0x2786 */ u8 unk_2786;
    /* 0x2787 */ u8 unk_2787;
    /* 0x2788 */ u8 unk_2788;
    /* 0x2789 */ u8 unk_2789;
    /* 0x278a */ u8 unk_278a;
    /* 0x278b */ u8 unk_278b;
    /* 0x278c */ u8 unk_278c;
    /* 0x278d */ u8 unk_278d;
    /* 0x278e */ u8 unk_278e;
    /* 0x278f */ u8 unk_278f;
    /* 0x2790 */ u8 unk_2790;
};

typedef Unk_ov099_02296b00 S;

// Functions of this overlay that are plain (non-member) symbols
extern "C" {
BOOL func_ov099_02295588(S *self, s32 v);
BOOL func_ov099_0229559c(S *s);
void func_ov099_022955e0(S *s, u32 a);
void func_ov099_02295630(S *s);
void func_ov099_0229564c(S *s, u32 a);
void func_ov099_022956b4(S *s);
u32 func_ov099_022956d0(S *s, u32 a);
u32 func_ov099_02295700(S *s, u32 a);
BOOL func_ov099_02295734(S *s, u32 a);
BOOL func_ov099_02295788(S *s, u32 a);
s32 func_ov099_022957dc(S *s, u32 a);
s32 func_ov099_02295830(S *s, u32 a);
u32 func_ov099_02295884(S *s, u32 a, u32 b, s32 c);
u32 func_ov099_022958c4(S *s, u32 a);
u32 func_ov099_022958d4(S *s, u32 a);
void func_ov099_022958e8(S *s, u32 a, u32 b, u32 c);
BOOL func_ov099_02295928(S *s, u32 a);
u32 func_ov099_02295978(S *s, u32 a, u32 b, s32 c);
u32 func_ov099_022959b4(S *s, u32 a);
u32 func_ov099_022959c4(S *s, u32 a);
BOOL func_ov099_022959e0(S *s, u32 a);
BOOL func_ov099_022959f0(S *s, u32 a);
void func_ov099_022959fc(S *s);
void func_ov099_02295a08(S *s, u32 a, u32 b);
void func_ov099_02295a74(S *s, u32 a);
void func_ov099_02295ac4(S *s, u32 a);
void func_ov099_02295b10(S *s, u32 a);
void func_ov099_02295bb0(S *s);
void func_ov099_02295bd0(S *s);
void func_ov099_02295c0c(S *s);
S *func_ov099_02296978();
}

struct Unk_ov099_SceneEntry {
    S *(*create)();
    u16 a;
    u16 b;
};

extern "C" Unk_ov099_SceneEntry data_ov099_02296a80 = {func_ov099_02296978, 0x92, 0x96};

static inline BOOL Unk_ov099_02296158_Both()
{
    if (gTouchHeld != 0 && gTouchChanged != 0) {
        return TRUE;
    }
    return FALSE;
}

extern "C" Unk_ov099_02296b00 *func_ov099_02296978() { return new Unk_ov099_02296b00(); }

BOOL Unk_ov099_02296b00::vfunc_00() {
    func_ov099_02296454();
    func_ov002_02200a50(0);
    func_ov002_02200a60(0);
    return TRUE;
}

BOOL Unk_ov099_02296b00::vfunc_0c() {
    ((Unk_ov092_02291ec8 *)ProcBase_GetParent(this))->func_ov092_02291c5c();
    func_ov099_02296424();
    return TRUE;
}

BOOL Unk_ov099_02296b00::onDraw() {
    func_ov002_02201b28(&unk_2270);
    if (!func_ov099_02294d6c(1)) {
        return TRUE;
    }
    unk_2134.vfunc_08();
    if (MenuCtrl_IsButtons()) {
        unk_220c.func_ov002_02202844();
    }
    func_ov099_02295454();
    if (func_ov099_02294d6c(2)) {
        func_ov094_022932d0(&unk_cc, 0, unk_267c);
        unk_b2c.func_ov094_022941a0(0, unk_267c);
        func_ov094_0229277c(&unk_b54, unk_267c);
    }
    return TRUE;
}

BOOL Unk_ov099_02296b00::vfunc_4c() {
    static Unk_ov099_02296b00_Fn tbl[5] = {
        &Unk_ov099_02296b00::func_ov099_02296654, &Unk_ov099_02296b00::func_ov099_022965e4,
        &Unk_ov099_02296b00::func_ov099_022965a8, &Unk_ov099_02296b00::func_ov099_02296544,
        &Unk_ov099_02296b00::func_ov099_022964f4};
    func_ov099_022963d0();
    (this->*tbl[unk_8c])();
    func_ov099_02296398();
    return TRUE;
}

BOOL Unk_ov099_02296b00::vfunc_50() {
    func_ov099_02296408();
    static Unk_ov099_02296b00_Fn tbl[21] = {
        &Unk_ov099_02296b00::func_ov099_022962d4, &Unk_ov099_02296b00::func_ov099_02296264,
        &Unk_ov099_02296b00::func_ov099_022961d8, &Unk_ov099_02296b00::func_ov099_02296158,
        &Unk_ov099_02296b00::func_ov099_02296080, &Unk_ov099_02296b00::func_ov099_02295fd8,
        &Unk_ov099_02296b00::func_ov099_02295f5c, &Unk_ov099_02296b00::func_ov099_02295f0c,
        &Unk_ov099_02296b00::func_ov099_02295ec0, &Unk_ov099_02296b00::func_ov099_02295ea0,
        &Unk_ov099_02296b00::func_ov099_02295e78, &Unk_ov099_02296b00::func_ov099_02295e48,
        &Unk_ov099_02296b00::func_ov099_02295e18, &Unk_ov099_02296b00::func_ov099_02295dc4,
        &Unk_ov099_02296b00::func_ov099_02295d7c, &Unk_ov099_02296b00::func_ov099_02295d38,
        &Unk_ov099_02296b00::func_ov099_02295d00, &Unk_ov099_02296b00::func_ov099_02295cc4,
        &Unk_ov099_02296b00::func_ov099_02295c80, &Unk_ov099_02296b00::func_ov099_02295c60,
        &Unk_ov099_02296b00::func_ov099_02295c28};
    (this->*tbl[unk_8d])();
    func_ov099_02296400();
    return TRUE;
}

BOOL Unk_ov099_02296b00::vfunc_54() { return TRUE; }

BOOL Unk_ov099_02296b00::vfunc_58() { return TRUE; }

BOOL Unk_ov099_02296b00::vfunc_5c() {
    ProcBase_RequestDelete();
    return TRUE;
}

void Unk_ov099_02296b00::func_ov099_02296654() {
    func_ov099_02296378();
    func_ov099_02296364();
    func_ov002_02200a50(1);
}

void Unk_ov099_02296b00::func_ov099_022965e4() {
    func_ov099_02296354();
    func_ov094_022937a0(&unk_cc);
    func_ov094_02293d2c(&unk_b2c);
    func_ov002_022008e0(8, 0, 0, 0x30);
    Gfx2d_ShowLayer(6);
    func_ov002_02200840(6, 0, 0);
    func_ov002_02200a50(2);
    func_ov099_02294d5c(1);
    func_ov099_02294d5c(2);
    unk_267c = func_ov002_02200920();
}

void Unk_ov099_02296b00::func_ov099_022965a8() {
    if (func_ov002_02200908(0)) {
        func_ov002_02200a60(2);
        func_ov099_02295bb0(this);
    }
    func_ov002_02200840(6, 0, 0);
    unk_267c = func_ov002_02200920();
}

void Unk_ov099_02296b00::func_ov099_02296544() {
    unk_2134.func_ov002_022006e4(1);
    func_ov099_02295214();
    ((Unk_ov092_02291ec8 *)ProcBase_GetParent(this))->func_ov092_02291ce4(0x44, 1);
    func_ov002_022008c4(8, 0, 0, 0x30);
    func_ov002_02200840(6, 0, 0);
    func_ov002_02200a50(4);
    unk_267c = func_ov002_02200920();
}

void Unk_ov099_02296b00::func_ov099_022964f4() {
    if (func_ov002_022008fc(0)) {
        Gfx2d_ResetLayer(6);
        func_ov002_02200a60(5);
        func_ov099_02294d4c(1);
        func_ov099_02294d4c(2);
    } else {
        func_ov002_02200840(6, 0, 0);
    }
    unk_267c = func_ov002_02200920();
}

void Unk_ov099_02296b00::func_ov099_02296454() {
    u16 a;
    u16 b;
    unk_2678 = 0;
    func_ov094_022939c0(&unk_cc, 2);
    unk_b2c.func_ov094_02294644(2);
    func_ov094_02292d30(&unk_b54, 6);
    unk_2789 = 0x1d;
    unk_21f4.func_ov002_022027a4();
    unk_2787 = 0;
    unk_278b = 0;
    unk_2270.func_ov002_02202310(3, 1, 0);
    a = 0x11a9;
    func_0209909c(&a, 1, 0);
    b = 0x1548;
    func_0209909c(&b, 0, 2);
}

void Unk_ov099_02296b00::func_ov099_02296424() {
    func_ov099_022959fc(this);
    func_ov094_02292a80(&unk_b54);
    func_ov094_02293998(&unk_cc);
    func_ov002_02201b04(&unk_2270);
}

void Unk_ov099_02296b00::func_ov099_02296408() {
    func_ov099_022963d0();
    unk_220c.vfunc_0c();
}

void Unk_ov099_02296b00::func_ov099_02296400() {
    func_ov099_02296398();
}

void Unk_ov099_02296b00::func_ov099_022963d0() {
    func_ov099_022959fc(this);
    func_ov094_02292acc(&unk_b54);
    func_ov094_022939a0(&unk_cc);
    unk_b2c.func_ov094_0229462c();
}

void Unk_ov099_02296b00::func_ov099_02296398() {
    func_ov002_02201b58(&unk_2270);
    func_ov094_02292aa4(&unk_b54);
    if (unk_2134.func_ov002_0220071c()) {
        func_ov099_022954f4();
    }
}

void Unk_ov099_02296b00::func_ov099_02296378() {
    Gfx2d_SetLayerPriority(6, 2);
    Gfx2d_SetLayerControl(6, 0, 0, 0);
}

void Unk_ov099_02296b00::func_ov099_02296364() {
    func_ov094_02292d1c(&unk_b54, 0);
}

void Unk_ov099_02296b00::func_ov099_02296354() {
    func_ov094_02292ae0(&unk_b54);
}

void Unk_ov099_02296b00::func_ov099_022962d4() {
    if (func_ov002_02200a14(1)) {
        func_ov099_02295bd0(this);
    } else {
        if (Unk_ov099_02296158_Both()) {
            u8 x = gTouchCurX;
            u8 y = gTouchCurY;
            s32 r = func_ov099_02295978(this, x, y, 1);
            if (r != 0x1d) {
                func_ov099_02295b10(this, r);
            } else {
                r = func_ov099_02295884(this, x, y, 1);
                if (r != 0x1d) {
                    func_ov099_02295b10(this, r);
                }
            }
        }
    }
}

void Unk_ov099_02296b00::func_ov099_02296264() {
    if (gTouchHeld == 0) {
        func_ov002_02200a58(0);
        unk_2134.func_ov002_022006a4(0x3c);
    } else {
        if (func_ov099_02294d6c(4)) {
            if (func_ov099_0229559c(this)) {
                func_ov099_02295ac4(this, unk_2788);
                return;
            }
            if (func_ov099_02295588(this, 9)) {
                func_ov099_02294ea0(unk_2788);
                return;
            }
        }
        unk_2134.func_ov002_022006c0();
    }
}

void Unk_ov099_02296b00::func_ov099_022961d8() {
    if (func_ov002_02200a14(1)) {
        func_ov099_02294f30();
    } else {
        if (Unk_ov099_02296158_Both()) {
            s32 t = ((Unk_ov002_022013ac *)&unk_2270)->func_ov002_022014c0(gTouchCurX, gTouchCurY);
            if (t >= 0) {
                func_ov002_02201aa0(&unk_2270, t, 1);
                unk_278f = unk_2270.unk_2f9[t];
                func_ov002_02200a58(0x12);
            }
        }
    }
}

void Unk_ov099_02296b00::func_ov099_02296158() {
    func_ov099_0229541c();
    func_ov099_02295630(this);
    s32 r = func_ov099_02295978(this, unk_2688 + 8, unk_268c + 8, 0);
    if (r != 0x1d) {
        if (gTouchHeld == 0) {
            if (func_ov099_02295928(this, r) == 0) {
                func_ov099_02295a08(this, unk_278a, 4);
            }
            func_ov099_02295bb0(this);
        } else {
            func_ov099_022955e0(this, r);
        }
    } else if (gTouchHeld == 0) {
        func_ov099_02295a08(this, unk_278a, 4);
    }
}

void Unk_ov099_02296b00::func_ov099_02296080() {
    if (func_ov002_022009d4()) {
        func_ov099_02295c0c(this);
        unk_2134.func_ov002_022006e4(1);
    } else if (func_ov099_02294d84((void *)func_ov002_022009c8())) {
        func_ov099_02295490();
        func_ov099_0229519c();
        unk_2134.func_ov002_022006e4(0);
    } else if (func_ov099_02295788(this, unk_278b) == 0 && (gPad[1] & 1) != 0) {
        if (func_ov099_022959f0(this, unk_278b)) {
            if (func_ov099_02295734(this, unk_278b) == 0) {
                func_ov099_02294ea0(unk_278b);
            }
        }
    } else {
        if ((gPad[1] & 0x800) != 0) {
            unk_8c = 3;
            func_ov002_02200a60(1);
            unk_2134.func_ov002_022006e4(1);
            func_ov099_02295214();
        } else {
            unk_2134.func_ov002_022006c0();
        }
    }
}

void Unk_ov099_02296b00::func_ov099_02295fd8() {
    if (func_ov099_02294d84((void *)func_ov002_022009c8())) {
        func_ov099_02295490();
        func_ov099_0229519c();
        unk_2134.func_ov002_022006e4(0);
    } else {
        u16 f = gPad[1];
        if ((f & 1) != 0) {
            if (func_ov099_022959f0(this, unk_278b)) {
                if (func_ov099_02295734(this, unk_278b)) {
                    func_ov099_0229502c(unk_278b);
                } else {
                    func_ov099_02294fe0(unk_278b);
                }
            }
        } else if ((f & 2) != 0) {
            func_ov099_0229502c(unk_278a);
        } else {
            func_ov099_022953e8();
            unk_2134.func_ov002_022006c0();
        }
    }
}

void Unk_ov099_02296b00::func_ov099_02295f5c() {
    if (func_ov002_022009d4()) {
        func_ov099_02294f30();
    } else if (func_ov002_022019d0(&unk_2270, func_ov002_022009c8(), &unk_2790, 0)) {
        func_ov099_02295148();
    } else {
        u16 f = gPad[1];
        if ((f & 1) != 0) {
            ((Unk_ov002_0220464c *)&unk_220c)->func_ov002_02202b68();
            func_ov002_02200a58(7);
        } else if ((f & 2) != 0) {
            func_ov099_02294f30();
        }
    }
}

void Unk_ov099_02296b00::func_ov099_02295f0c() {
    if (unk_220c.isAnimDone()) {
        func_ov002_02201aa0(&unk_2270, unk_2790, 1);
        unk_278f = unk_2270.unk_2f9[unk_2790];
        func_ov002_02200a58(0x12);
    }
}

void Unk_ov099_02296b00::func_ov099_02295ec0() {
    if (unk_220c.func_ov002_022028f0() == 0) {
        func_ov002_02200a58(unk_278e);
        if ((u8)(unk_278e + 0xfc) <= 1) {
            func_ov099_0229564c(this, unk_278b);
        }
    }
    func_ov099_022953e8();
}

void Unk_ov099_02296b00::func_ov099_02295ea0() {
    if (unk_220c.isAnimDone()) {
        func_ov099_02295088();
    }
}

void Unk_ov099_02296b00::func_ov099_02295e78() {
    if (unk_220c.isAnimDone()) {
        func_ov099_022950a8();
        func_ov002_02200a58(4);
    }
}

void Unk_ov099_02296b00::func_ov099_02295e48() {
    if (unk_220c.func_ov002_02202928()) {
        func_ov099_02295a74(this, unk_278b);
        func_ov002_02200a58(0xc);
    }
}

void Unk_ov099_02296b00::func_ov099_02295e18() {
    if (unk_220c.isAnimDone()) {
        func_ov002_02200a58(unk_278e);
    }
    func_ov099_022953e8();
}

void Unk_ov099_02296b00::func_ov099_02295dc4() {
    if (!unk_220c.func_ov002_02202928()) {
        u32 a = unk_278d;
        if (unk_278b == a) {
            func_ov099_02295928(this, a);
            func_ov099_02295490();
            func_ov002_02200a58(4);
        } else {
            func_ov099_02295a08(this, a, 4);
        }
    } else {
        func_ov099_022953e8();
    }
}

void Unk_ov099_02296b00::func_ov099_02295d7c() {
    if (!unk_220c.func_ov002_022028fc()) {
        func_ov099_022952cc(unk_278d);
        func_ov099_02294d5c(0x40);
        func_ov002_02200a58(0xf);
        func_ov099_02295490();
    } else {
        func_ov002_02200a58(4);
    }
}

void Unk_ov099_02296b00::func_ov099_02295d38() {
    if (unk_220c.isAnimDone()) {
        func_ov002_02200a58(unk_278e);
    }
    if (unk_220c.func_ov002_02202928()) {
        func_ov099_02294d4c(0x40);
        func_ov099_022953e8();
    }
}

void Unk_ov099_02296b00::func_ov099_02295d00() {
    if (unk_21f4.func_ov002_02202718()) {
        func_ov099_0229530c(unk_278a);
        func_ov099_02295bb0(this);
    } else {
        func_ov099_022953b8();
    }
}

void Unk_ov099_02296b00::func_ov099_02295cc4() {
    if (((Unk_ov002_022013ac *)&unk_2270)->func_ov002_022017b4()) {
        if (MenuCtrl_IsButtons()) {
            func_ov099_022950fc();
            func_ov002_02200a58(6);
        } else {
            func_ov002_02200a58(2);
        }
    }
}

void Unk_ov099_02296b00::func_ov099_02295c80() {
    if (func_ov002_02201a28(&unk_2270)) {
        func_ov002_02202064(&unk_2270, 0);
        if (unk_220c.getAnim()) {
            func_ov099_022950c8();
        }
        func_ov002_02200a58(0x13);
    }
}

void Unk_ov099_02296b00::func_ov099_02295c60() {
    if (((Unk_ov002_022013ac *)&unk_2270)->func_ov002_022017a4()) {
        func_ov099_02294fbc();
    }
}

// ---------------------------------------------------------------------------------------------
// State handlers

void Unk_ov099_02296b00::func_ov099_02295c28() {
    if (unk_2570.func_ov002_02204234(0)) {
        func_ov002_02200a58(unk_278e);
        unk_220c.enableObjWindow();
    }
}

void func_ov099_02295c0c(S *s) {
    s->func_ov099_02295214();
    func_ov099_022956b4(s);
    s->func_ov002_02200a58(0);
}

void func_ov099_02295bd0(S *s) {
    s->unk_2789 = 0x1d;
    s->func_ov099_02295290();
    s->func_ov002_02200980();
    s->func_ov099_02295490();
    s->func_ov002_02200a58(4);
    func_ov099_0229564c(s, s->unk_278b);
}

void func_ov099_02295bb0(S *s) {
    if (MenuCtrl_IsTouch()) {
        func_ov099_02295c0c(s);
    } else {
        func_ov099_02295bd0(s);
    }
}

void func_ov099_02295b10(S *s, u32 a) {
    u32 r6, r7;
    s->unk_2788 = a;
    s->func_ov002_02200a58(1);
    r6 = gTouchCurX;
    r7 = gTouchCurY;
    s->unk_2680 = func_ov099_02295830(s, s->unk_2788) - r6;
    s->unk_2684 = func_ov099_022957dc(s, s->unk_2788) - r7;
    s->unk_2789 = a;
    s->unk_2134.func_ov002_022006b8();
    if (func_ov099_022959e0(s, a)) {
        s->func_ov099_02294d4c(4);
    } else if (func_ov099_02295788(s, a)) {
        s->func_ov099_02294d4c(4);
    } else {
        s->func_ov099_02294d5c(4);
    }
}

void func_ov099_02295ac4(S *s, u32 a) {
    s->unk_278a = a;
    s->unk_2134.func_ov002_022006e4(1);
    s->func_ov099_02295340(a);
    if (s->unk_2787 != 1) {
        if (s->unk_2787 == 2) s->func_ov002_02200a58(3);
    }
    s->func_ov099_0229541c();
}

void func_ov099_02295a74(S *s, u32 a) {
    s->unk_278a = a;
    s->unk_2134.func_ov002_022006e4(1);
    s->func_ov099_02295340(a);
    if (s->unk_2787 != 1) {
        if (s->unk_2787 == 2) s->unk_278e = 5;
    }
    s->func_ov099_022953e8();
}

void func_ov099_02295a08(S *s, u32 a, u32 b) {
    s->unk_278a = a;
    s->unk_21f4.func_ov002_022026f4(s->unk_2688, s->unk_268c);
    s32 x = func_ov099_02295830(s, a);
    s->unk_21f4.func_ov002_022026c4(x, func_ov099_022957dc(s, a), b);
    s->unk_21f4.func_ov002_02202718();
    s->func_ov099_022953b8();
    s->func_ov002_02200a58(0x10);
}

void func_ov099_022959fc(S *s) {
    s->unk_94[0].cancel();
}

BOOL func_ov099_022959f0(S *s, u32 a) {
    if (a <= 0xe) return TRUE;
    return FALSE;
}

BOOL func_ov099_022959e0(S *s, u32 a) {
    if (a >= 0xf && a <= 0x18) return TRUE;
    return FALSE;
}

u32 func_ov099_022959c4(S *s, u32 a) {
    if (func_ov099_022959f0(s, a)) return (u8)a;
    return 0;
}

u32 func_ov099_022959b4(S *s, u32 a) {
    if (a <= 0xe) return (u8)a;
    return 0x1d;
}

u32 func_ov099_02295978(S *s, u32 a, u32 b, s32 c) {
    u32 t = func_ov094_02293968(&s->unk_cc);
    if (t != 0x23) {
        if (c != 0) {
            if (func_ov094_0229311c(&s->unk_cc, t)) return 0x1d;
        }
        return func_ov099_022959b4(s, t);
    }
    return 0x1d;
}

BOOL func_ov099_02295928(S *s, u32 a) {
    if (func_ov099_022959f0(s, a)) {
        u32 t = func_ov099_02295700(s, a);
        if (t != 0xfff1) {
            func_ov099_022958e8(s, s->unk_278a, t, func_ov099_022956d0(s, a));
        }
        s->func_ov099_0229530c(a);
        return TRUE;
    }
    return FALSE;
}

void func_ov099_022958e8(S *s, u32 a, u32 b, u32 c) {
    if (func_ov099_022959f0(s, a)) {
        u32 t = func_ov099_022959c4(s, a);
        func_ov094_02293494(&s->unk_cc, t, b, c);
        func_ov094_02293434(&s->unk_cc, t);
    }
}

u32 func_ov099_022958d4(S *s, u32 a) {
    if (a >= 0xf && a <= 0x18) return (u8)(a - 0xf);
    return 0;
}

u32 func_ov099_022958c4(S *s, u32 a) {
    if (a <= 9) return (u8)(a + 0xf);
    return 0x1d;
}

u32 func_ov099_02295884(S *s, u32 a, u32 b, s32 c) {
    u32 t = s->unk_b2c.func_ov094_02294610(a, b);
    if (t != 0x37) {
        if (c != 0) {
            if (func_ov094_02293d80(&s->unk_b2c, t)) return 0x1d;
        }
        return func_ov099_022958c4(s, t);
    }
    return 0x1d;
}

s32 func_ov099_02295830(S *s, u32 a) {
    if (func_ov099_022959f0(s, a)) {
        return func_ov094_02293624(&s->unk_cc, func_ov099_022959c4(s, a));
    } else if (func_ov099_022959e0(s, a)) {
        return func_ov094_02293df8(&s->unk_b2c, func_ov099_022958d4(s, a));
    }
    return 0;
}

s32 func_ov099_022957dc(S *s, u32 a) {
    if (func_ov099_022959f0(s, a)) {
        return func_ov094_02293610(&s->unk_cc, func_ov099_022959c4(s, a));
    } else if (func_ov099_022959e0(s, a)) {
        return func_ov094_02293d9c(&s->unk_b2c, func_ov099_022958d4(s, a));
    }
    return 0;
}

BOOL func_ov099_02295788(S *s, u32 a) {
    if (func_ov099_022959f0(s, a)) {
        return func_ov094_0229333c(&s->unk_cc, func_ov099_022959c4(s, a));
    } else if (func_ov099_022959e0(s, a)) {
        return s->unk_b2c.func_ov094_022941ec(func_ov099_022958d4(s, a));
    }
    return FALSE;
}

BOOL func_ov099_02295734(S *s, u32 a) {
    if (func_ov099_022959f0(s, a)) {
        return func_ov094_0229311c(&s->unk_cc, func_ov099_022959c4(s, a));
    } else if (func_ov099_022959e0(s, a)) {
        return func_ov094_02293d80(&s->unk_b2c, func_ov099_022958d4(s, a));
    }
    return TRUE;
}

u32 func_ov099_02295700(S *s, u32 a) {
    if (func_ov099_022959f0(s, a)) {
        return func_ov094_0229352c(&s->unk_cc, func_ov099_022959c4(s, a));
    }
    return 0xfff1;
}

u32 func_ov099_022956d0(S *s, u32 a) {
    if (func_ov099_022959f0(s, a)) {
        return func_ov094_02293504(&s->unk_cc, func_ov099_022959c4(s, a));
    }
    return 0xf1;
}

void func_ov099_022956b4(S *s) {
    func_ov094_022935dc(&s->unk_cc);
    s->unk_b2c.func_ov094_022943f8();
}

void func_ov099_0229564c(S *s, u32 a) {
    if (func_ov099_022959f0(s, a)) {
        func_ov094_0229359c(&s->unk_cc, func_ov099_022959c4(s, a));
        s->unk_b2c.func_ov094_022943f8();
    } else if (func_ov099_022959e0(s, a)) {
        s->unk_b2c.func_ov094_022943bc(func_ov099_022958d4(s, a));
        func_ov094_022935dc(&s->unk_cc);
    } else {
        func_ov099_022956b4(s);
    }
}

void func_ov099_02295630(S *s) {
    func_ov094_0229358c(&s->unk_cc);
    s->unk_b2c.func_ov094_022943b0();
}

void func_ov099_022955e0(S *s, u32 a) {
    if (func_ov099_022959f0(s, a)) {
        func_ov094_0229357c(&s->unk_cc, func_ov099_022959c4(s, a));
    } else if (func_ov099_022959e0(s, a)) {
        s->unk_b2c.func_ov094_022943a4(func_ov099_022958d4(s, a));
    }
}

BOOL func_ov099_0229559c(S *s) {
    s32 d = gTouchPressX - gTouchCurX;
    if (d < 0) d = -d;
    if (d > 8) return TRUE;
    d = gTouchPressY - gTouchCurY;
    if (d < 0) d = -d;
    if (d > 8) return TRUE;
    return FALSE;
}

// ---------------------------------------------------------------------------------------------
// Plain functions

BOOL func_ov099_02295588(S *self, s32 v) {
    if (gTouchHoldFrames >= v) return TRUE;
    return FALSE;
}

void Unk_ov099_02296b00::func_ov099_022954f4() {
    s32 x = func_ov099_02295830(this, unk_2789) - 0x6d;
    s32 y = func_ov099_022957dc(this, unk_2789) - 0x78;
    if (MenuCtrl_IsButtons()) {
        y -= 8;
    }
    ((LabelBalloon *)&unk_2134)->setPos(x, y);
    if (func_ov099_022959f0(this, unk_2789)) {
        s32 r = func_ov099_022959c4(this, unk_2789);
        func_ov094_02293638(&unk_cc, &unk_2134, r);
    } else if (func_ov099_022959e0(this, unk_2789)) {
        s32 r = func_ov099_022958d4(this, unk_2789);
        unk_b2c.func_ov094_02294420(&unk_2134, r);
    }
}

void Unk_ov099_02296b00::func_ov099_02295490() {
    if (func_ov099_022959f0(this, unk_278b) || func_ov099_022959e0(this, unk_278b)) {
        if (func_ov099_02295734(this, unk_278b)) {
            unk_2134.func_ov002_022006b0();
        } else {
            unk_2789 = unk_278b;
            unk_2134.func_ov002_022006b8();
        }
    } else {
        unk_2134.func_ov002_022006b0();
    }
}

void Unk_ov099_02296b00::func_ov099_02295454() {
    if (!func_ov099_02294d6c(0x40)) {
        switch (unk_2787) {
        case 0:
            break;
        case 2:
            func_ov094_0229313c(&unk_cc, unk_2688, unk_268c);
            break;
        }
    }
}

void Unk_ov099_02296b00::func_ov099_0229541c() {
    unk_2688 = unk_2680 + gTouchCurX;
    unk_268c = unk_2684 + gTouchCurY;
}

void Unk_ov099_02296b00::func_ov099_022953e8() {
    unk_2688 = unk_220c.func_ov002_022028c8() - 2;
    unk_268c = unk_220c.func_ov002_022028a0() - 4;
}

void Unk_ov099_02296b00::func_ov099_022953b8() {
    unk_2688 = unk_21f4.func_ov002_02202710();
    unk_268c = unk_21f4.func_ov002_02202708();
}

void Unk_ov099_02296b00::func_ov099_02295340(u32 idx) {
    if (func_ov099_022959f0(this, idx)) {
        s32 r4 = func_ov099_022959c4(this, idx);
        unk_2787 = 2;
        unk_2784 = func_ov094_0229352c(&unk_cc, r4);
        unk_2786 = func_ov094_02293504(&unk_cc, r4);
        func_ov094_022934d8(&unk_cc, r4);
        func_ov094_0229341c(&unk_cc, unk_2784, unk_2786);
    } else {
        if (func_ov099_022959e0(this, idx) != 0) {
            return;
        }
    }
}

void Unk_ov099_02296b00::func_ov099_0229530c(u32 idx) {
    if (unk_2787 == 1) {
    } else if (unk_2787 == 2) {
        func_ov099_022958e8(this, idx, unk_2784, unk_2786);
    }
    unk_2787 = 0;
}

void Unk_ov099_02296b00::func_ov099_022952cc(u32 idx) {
    if (unk_2787 == 1) {
    } else if (unk_2787 == 2) {
        u16 a = unk_2784;
        u8 b = unk_2786;
        func_ov099_02295340(idx);
        func_ov099_022958e8(this, idx, a, b);
    }
}

void Unk_ov099_02296b00::func_ov099_02295290() {
    s32 a = func_ov099_02295248();
    s32 b = func_ov099_02295238();
    unk_220c.func_ov002_02202a40(a, b);
    ((Unk_ov002_0220464c *)&unk_220c)->func_ov002_02202d00(1);
    func_ov099_022950a8();
}

s32 Unk_ov099_02296b00::func_ov099_02295248() {
    s32 r = func_ov099_02295830(this, unk_278b);
    if (func_ov099_02294d6c(0x20)) {
        r += 0x100;
    } else if (func_ov099_02294d6c(0x10)) {
        r -= 0x100;
    }
    return r + 8;
}

s32 Unk_ov099_02296b00::func_ov099_02295238() { return func_ov099_022957dc(this, unk_278b); }

void Unk_ov099_02296b00::func_ov099_02295214() {
    ((Unk_ov002_0220464c *)&unk_220c)->func_ov002_02202d00(0);
    unk_220c.vfunc_0c();
}

void Unk_ov099_02296b00::func_ov099_0229519c() {
    if (func_ov099_02294d6c(8)) {
        s32 a = func_ov099_02295248();
        s32 b = func_ov099_02295238();
        unk_220c.func_ov002_02202a40(a, b);
        func_ov099_02294d4c(8);
    } else {
        s32 a = func_ov099_02295248();
        s32 b = func_ov099_02295238();
        unk_220c.func_ov002_022029e8(a, b, 3, 1);
        unk_278e = unk_8d;
        func_ov002_02200a58(8);
    }
}

void Unk_ov099_02296b00::func_ov099_02295148() {
    s32 a = ((Unk_ov002_022013ac *)&unk_2270)->func_ov002_022014a4();
    s32 b = ((Unk_ov002_022013ac *)&unk_2270)->func_ov002_02201498(unk_2790);
    unk_220c.func_ov002_02202a18(a, b, 2);
    unk_278e = unk_8d;
    func_ov002_02200a58(8);
}

void Unk_ov099_02296b00::func_ov099_022950fc() {
    unk_2790 = 0;
    s32 a = ((Unk_ov002_022013ac *)&unk_2270)->func_ov002_022014a4();
    s32 b = ((Unk_ov002_022013ac *)&unk_2270)->func_ov002_02201498(unk_2790);
    unk_220c.func_ov002_02202a40(a, b);
    ((Unk_ov002_0220464c *)&unk_220c)->func_ov002_02202d00(7);
}

void Unk_ov099_02296b00::func_ov099_022950c8() {
    s32 a = func_ov099_02295248();
    s32 b = func_ov099_02295238();
    unk_220c.func_ov002_02202a40(a, b);
    ((Unk_ov002_0220464c *)&unk_220c)->func_ov002_02202d00(1);
}

void Unk_ov099_02296b00::func_ov099_022950a8() {
    unk_220c.func_ov002_02202a78();
    unk_220c.vfunc_0c();
}

void Unk_ov099_02296b00::func_ov099_02295088() {
    unk_220c.func_ov002_02202af0();
    func_ov002_02200a58(0xa);
}

void Unk_ov099_02296b00::func_ov099_02295068() {
    ((Unk_ov002_0220464c *)&unk_220c)->func_ov002_02202d00(4);
    func_ov002_02200a58(0xb);
}

void Unk_ov099_02296b00::func_ov099_0229502c(u32 v) {
    unk_2134.func_ov002_022006e4(1);
    unk_278d = v;
    ((Unk_ov002_0220464c *)&unk_220c)->func_ov002_02202d00(5);
    func_ov002_02200a58(0xd);
}

void Unk_ov099_02296b00::func_ov099_02294fe0(u32 v) {
    unk_2134.func_ov002_022006e4(1);
    unk_278e = unk_8d;
    unk_278d = v;
    ((Unk_ov002_0220464c *)&unk_220c)->func_ov002_02202d00(6);
    func_ov002_02200a58(0xe);
}

s32 Unk_ov099_02296b00::func_ov099_02294fbc() {
    switch (unk_278f) {
    case 0:
        func_ov099_02295068();
        break;
    case 1:
    default:
        func_ov099_02295bb0(this);
        break;
    }
}

void Unk_ov099_02296b00::func_ov099_02294f60() {
    ((Unk_ov002_022013ac *)&unk_2270)->func_ov002_0220160c((Unk_ov002_022013ac_Rec *)&unk_2270.unk_2f4, 0);
    s32 a = func_ov099_02295830(this, unk_278c);
    s32 b = func_ov099_022957dc(this, unk_278c);
    unk_2270.func_ov002_0220229c(a, b);
    func_ov002_02202098(&unk_2270, 0);
    func_ov002_02200a58(0x11);
}

void Unk_ov099_02296b00::func_ov099_02294f30() {
    unk_278f = 1;
    func_ov099_022950c8();
    func_ov002_02202064(&unk_2270, 0);
    func_ov002_02200a58(0x13);
}

void Unk_ov099_02296b00::func_ov099_02294ef4() {
    if (MenuCtrl_IsButtons()) {
        func_ov002_02201700(&unk_2270.unk_2f4, 0, 0);
    }
    func_ov002_02201700(&unk_2270.unk_2f4, 1, 1);
    func_ov002_02201700(&unk_2270.unk_2f4, 2, 1);
}

void Unk_ov099_02296b00::func_ov099_02294ea0(u32 idx) {
    unk_278c = idx;
    func_ov002_022016e4(&unk_2270.unk_2f4, 1);
    if (func_ov099_022959f0(this, idx)) {
        func_ov099_02294ef4();
        func_ov099_02295214();
        unk_2134.func_ov002_022006e4(1);
        func_ov099_02294f60();
    }
}

void Unk_ov099_02296b00::func_ov099_02294dcc(void *pad) {
    s32 col = unk_278b;
    s32 row = 0;
    while (col >= 5) {
        col -= 5;
        row++;
    }
    if (func_ov002_0220126c(pad)) {
        if (!func_ov002_0220128c(pad) || row == 0) {
            if (col == 0) {
                unk_278b = unk_278b + 4;
                func_ov099_02294d5c(0x10);
            } else {
                unk_278b = unk_278b - 1;
            }
        }
    } else if (func_ov002_0220125c(pad)) {
        if (!func_ov002_0220127c(pad)) {
            if (col == 4) {
                unk_278b = unk_278b - 4;
                func_ov099_02294d5c(0x20);
            } else {
                unk_278b = unk_278b + 1;
            }
        }
    }
    if (!func_ov099_02294d6c(0x30)) {
        if (func_ov002_0220128c(pad)) {
            if (row > 0) {
                unk_278b = unk_278b - 5;
            }
        } else if (func_ov002_0220127c(pad)) {
            if (row < 2) {
                unk_278b = unk_278b + 5;
            }
        }
    }
}

BOOL Unk_ov099_02296b00::func_ov099_02294d84(void *pad) {
    u8 old = unk_278b;
    func_ov099_02294d4c(0x30);
    if (pad == 0) {
        return FALSE;
    }
    if (func_ov099_022959f0(this, unk_278b)) {
        func_ov099_02294dcc(pad);
    }
    if (old != unk_278b) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov099_02296b00::func_ov099_02294d6c(u32 mask) {
    if (unk_2678 & mask) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov099_02296b00::func_ov099_02294d5c(u32 mask) { unk_2678 = unk_2678 | mask; }

void Unk_ov099_02296b00::func_ov099_02294d4c(u32 mask) { unk_2678 = unk_2678 & ~mask; }

// ---------------------------------------------------------------------------------------------


