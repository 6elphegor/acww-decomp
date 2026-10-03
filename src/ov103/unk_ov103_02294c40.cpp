// ov103: scene overlay (class Unk_ov103_02296da0, vtable 0x02296da0, 0x2b04 bytes). Linked unit.
#define postCreate() postCreate(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef postCreate
#undef vfunc_14

extern "C" {
extern u8 gTouchCurX;
extern u8 gTouchCurY;
extern u8 gTouchHoldFrames;
extern u8 gTouchPressY;
extern u8 gTouchPressX;
extern u16 gPad[];
extern u8 gTouchHeld;
extern u8 gTouchChanged;

void Gfx2d_SetLayerPriority(u32 a, u32 b);
void Gfx2d_SetLayerControl(u32 n, u32 a, u32 b, u32 c);
void Gfx2d_ResetLayer(s32 a);
void Gfx2d_ShowLayer(s32 a);
void func_02065af0();
void func_02065e70(void *dst, void *src);
BOOL MenuCtrl_IsButtons();
BOOL MenuCtrl_IsTouch();
void *ProcBase_GetParent(void *p);
void ProcBase_RequestDelete(void *p);

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
void func_ov002_02202064(void *p, s32 v);
void func_ov002_02202098(void *p, u32 v);

void func_ov094_0229277c(void *p, s32 a);
void func_ov094_02292a80(void *p);
void func_ov094_02292aa4(void *p);
void func_ov094_02292acc(void *p);
void func_ov094_02292ae0(void *p);
void func_ov094_02292d1c(void *p, s32 a);
void func_ov094_02292d30(void *p, s32 a);
void func_ov094_022932d0(void *p, s32 a, s32 b);
void func_ov094_02293318(void *p, u32 a, u32 b);
void func_ov094_0229358c(void *p);
void func_ov094_022935dc(void *p);
void func_ov094_022937a0(void *p);
void func_ov094_02293998(void *p);
void func_ov094_022939a0(void *p);
void func_ov094_022939c0(void *p, s32 a);
void func_ov094_02293d2c(void *p);
BOOL func_ov094_02293d80(void *p, u32 a);
s32 func_ov094_02293d9c(void *p, u32 a);
s32 func_ov094_02293df8(void *p, u32 a);
}

// ---- external classes (real names from symbols.txt) ----

class LabelBalloon {
public:
    virtual ~LabelBalloon();
    virtual void vfunc_08();
    void setPos(s32 x, s32 y);
};

class LabelButton {
public:
    virtual ~LabelButton();
    virtual void vfunc_08();
    void setState(s32 v);
    void setPos(s32 a, s32 b);
};

class BgVramTask {
public:
    void cancel();
};

class BgVramTaskPair : public BgVramTask {
public:
    BgVramTaskPair();
    u32 unk_00[0x38 / 4];
};

class Unk_02065554 {
public:
    s32 func_02065578();
    u32 func_020655d0();
};

class Letter {
public:
    Letter();
    virtual ~Letter();
    u32 unk_04[(0xf4 - 4) / 4];
};

struct Unk_0206d1d4_Src;

class Unk_0206d0a0 {
public:
    Unk_0206d0a0();
    ~Unk_0206d0a0();
    void func_0206d2e0(Unk_0206d1d4_Src *a, void *b, void *c, s32 d);
    void func_0206d394();
    void func_0206d39c(s32 a);
    u32 unk_00[0x210 / 4];
};

class Unk_ov092_02291ec8 {
public:
    void func_ov092_02291c5c();
    void func_ov092_02291ce4(s32 a, s32 b);
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
    void func_ov094_0229405c(s32 a, s32 b, void *c);
    void func_ov094_022941a0(s32 a, s32 b);
    BOOL func_ov094_022941ec(s32 a);
    void func_ov094_022942f4(s32 a);
    void func_ov094_02294318(s32 a, s32 b);
    s32 func_ov094_0229433c(s32 a);
    void func_ov094_022943a4(s32 a);
    void func_ov094_022943b0();
    void func_ov094_022943bc(u32 a);
    void func_ov094_022943f8();
    void func_ov094_02294420(void *a, s32 b);
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

class Unk_ov002_02204468 : public LabelBalloon {
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
    s32 func_ov002_022026f4(s32 a, s32 b);
    s32 func_ov002_02202708();
    s32 func_ov002_02202710();
    BOOL func_ov002_02202718();
    void func_ov002_022027a4();
    u32 unk_00[0x18 / 4];
};

class UiWidget {
public:
    UiWidget();
    virtual ~UiWidget();
    virtual void draw() = 0;
    virtual void vfunc_0c() = 0;
    virtual void setOrigin(s32 a, s32 b);

    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08;
};

class HandCursor : public UiWidget {
public:
    HandCursor(BOOL flag);
    virtual ~HandCursor();
    virtual void draw();
    virtual void vfunc_0c();

    BOOL isAnimDone();
    s32 getAnim();
    s32 enableObjWindow();

    /* 0x0c */ u8 unk_0c[0x3f];
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
    void func_ov002_02202a40(s32 x, s32 y);
    void func_ov002_02202a78();
    void func_ov002_02202af0();
};

// same object as Unk_ov002_02202d98 (+0x220c); methods split across two classes in ov002
class Unk_ov002_0220464c {
public:
    void func_ov002_02202b68();
    void func_ov002_02202d00(s32 idx);
};

class Unk_ov002_02204614 : public Unk_ov002_02202d98 {
public:
    Unk_ov002_02204614();
    virtual ~Unk_ov002_02204614();
    u8 unk_4b[0x64 - 0x4b];
};

struct Unk_ov002_022013ac_Rec {
    u8 unk_00[0xc];
};

class Unk_ov002_022013ac {
public:
    s32 func_ov002_02201498(s32 a);
    s32 func_ov002_022014a4();
    s32 func_ov002_022014c0(s32 a, s32 b);
    void func_ov002_0220160c(Unk_ov002_022013ac_Rec *a, s32 b);
    BOOL func_ov002_022017a4();
    BOOL func_ov002_022017b4();
};

class Unk_ov002_02204558 : public Unk_ov002_022013ac {
public:
    Unk_ov002_02204558();
    ~Unk_ov002_02204558();
    void func_ov002_0220229c(s32 a, s32 b);
    void func_ov002_02202310(s32 a, s32 b, const char *c);
    u32 unk_00[0x2f4 / 4];
    u8 unk_2f4[0xc];
};

class Unk_ov002_022040ec {
public:
    Unk_ov002_022040ec();
    ~Unk_ov002_022040ec();
    BOOL func_ov002_02204234(s32 a);
    u32 unk_00[0x108 / 4];
};

class Unk_ov002_02204738 : public LabelButton {
public:
    Unk_ov002_02204738();
    virtual ~Unk_ov002_02204738();
    virtual void vfunc_08();
    BOOL func_ov002_02203e24();
    void func_ov002_02203ec8(s32 a);
    BOOL func_ov002_02203f08();
    s32 func_ov002_02203f28(s32 a);
    s32 func_ov002_02203f78(s32 a);
    u32 unk_04[(0x70 - 4) / 4];
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
    void func_ov002_02200850(s32 a);
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

class Unk_ov103_02296da0;
typedef void (Unk_ov103_02296da0::*Unk_ov103_02296da0_Fn)();

// Vtable 0x02296da0
class Unk_ov103_02296da0 : public Unk_ov002_022044e4 {
public:
    Unk_ov103_02296da0()
        : unk_94(), unk_cc(), unk_b2c(), unk_b54(), unk_2134(), unk_21f4(), unk_220c(), unk_2270(), unk_2570(), unk_2678(), unk_2888(), unk_2910(), unk_2a04() {}

    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL onDraw();
    virtual BOOL vfunc_4c();
    virtual BOOL vfunc_50();
    virtual BOOL vfunc_54();
    virtual BOOL vfunc_58();
    virtual BOOL vfunc_5c();

    void func_ov103_02294d94(u32 mask);
    void func_ov103_02294da4(u32 mask);
    BOOL func_ov103_02294db4(u32 mask);
    void func_ov103_02294dcc();
    void func_ov103_02294dec();
    BOOL func_ov103_02294e10(void *pad, u32 x);
    void func_ov103_02294e60(void *pad, u32 x);
    void func_ov103_02294f04(u32 idx);
    void func_ov103_02294fbc();
    void func_ov103_02294fec();
    s32 func_ov103_02295048();
    void func_ov103_02295078(u32 v);
    void func_ov103_022950c4(u32 v);
    void func_ov103_02295100();
    void func_ov103_02295120();
    void func_ov103_02295140();
    void func_ov103_02295160();
    void func_ov103_02295194();
    void func_ov103_022951e0();
    void func_ov103_02295234();
    void func_ov103_022952ac();
    s32 func_ov103_022952d0();
    s32 func_ov103_022952e0();
    void func_ov103_02295328();
    void func_ov103_02295364(u32 idx);
    void func_ov103_022953a8(u32 idx);
    void func_ov103_022953d0(u32 idx);
    void func_ov103_02295424();
    void func_ov103_02295454();
    void func_ov103_02295488();
    void func_ov103_022954c0();
    void func_ov103_02295508();
    void func_ov103_0229555c();
    BOOL func_ov103_022955c8(s32 a);
    BOOL func_ov103_022955dc();
    void func_ov103_02295620(u32 a);
    void func_ov103_02295650();
    void func_ov103_0229566c(u32 a);
    void func_ov103_022956ac();
    BOOL func_ov103_022956c8(u32 a);
    BOOL func_ov103_022956fc(u32 a);
    void func_ov103_02295730();
    s32 func_ov103_02295740(u32 a);
    s32 func_ov103_02295774(u32 a);
    BOOL func_ov103_022957a8(u32 a);
    void func_ov103_022957dc(u32 a, void *b);
    BOOL func_ov103_0229580c(u32 a);
    u32 func_ov103_02295858(u32 a, u32 b, s32 c);
    u32 func_ov103_02295898(u32 a);
    u32 func_ov103_022958a8(u32 a);
    BOOL func_ov103_022958bc(u32 a);
    void func_ov103_022958cc();
    void func_ov103_022958d8(u32 a, u32 b);
    void func_ov103_02295944(u32 a);
    void func_ov103_02295990(u32 a);
    void func_ov103_022959d8(u32 a);
    void func_ov103_02295a60();
    void func_ov103_02295a80();
    void func_ov103_02295abc();
    void func_ov103_02295ad8();
    void func_ov103_02295b40();
    void func_ov103_02295b78();
    void func_ov103_02295b98();
    void func_ov103_02295bdc();
    void func_ov103_02295c18();
    void func_ov103_02295c50();
    void func_ov103_02295c94();
    void func_ov103_02295cdc();
    void func_ov103_02295d30();
    void func_ov103_02295d60();
    void func_ov103_02295d90();
    void func_ov103_02295db8();
    void func_ov103_02295dd8();
    void func_ov103_02295e24();
    void func_ov103_02295e74();
    void func_ov103_02295ef0();
    void func_ov103_02295f10();
    void func_ov103_02295fa4();
    void func_ov103_02296040();
    void func_ov103_02296124();
    void func_ov103_022961b0();
    void func_ov103_022961e4();
    void func_ov103_0229627c();
    void func_ov103_022962ec();
    void func_ov103_02296350();
    void func_ov103_02296360();
    void func_ov103_02296374();
    void func_ov103_02296394();
    void func_ov103_022963cc();
    void func_ov103_022963fc();
    void func_ov103_02296404();
    void func_ov103_02296420();
    void func_ov103_0229645c();
    void func_ov103_022964e0();
    void func_ov103_02296528();
    void func_ov103_02296564();
    void func_ov103_022965b4();
    void func_ov103_0229663c();
    void func_ov103_022966ac();
    void func_ov103_02296720();
    void func_ov103_0229675c();
    void func_ov103_022967d0();
    void func_ov103_02296820();

    /* 0x0094 */ BgVramTaskPair unk_94[1];
    /* 0x00cc */ Unk_ov094_02294a50 unk_cc;
    /* 0x0b2c */ Unk_ov094_02294bd4 unk_b2c;
    /* 0x0b54 */ Unk_ov094_02292d6c unk_b54;
    /* 0x2134 */ Unk_ov002_02204468 unk_2134;
    /* 0x21f4 */ Unk_ov002_02204604 unk_21f4;
    /* 0x220c */ Unk_ov002_02204614 unk_220c;
    /* 0x2270 */ Unk_ov002_02204558 unk_2270;
    /* 0x2570 */ Unk_ov002_022040ec unk_2570;
    /* 0x2678 */ Unk_0206d0a0 unk_2678;
    /* 0x2888 */ Unk_ov002_02204738 unk_2888;
    /* 0x28f8 */ u32 unk_28f8;
    /* 0x28fc */ s32 unk_28fc;
    /* 0x2900 */ s32 unk_2900;
    /* 0x2904 */ s32 unk_2904;
    /* 0x2908 */ s32 unk_2908;
    /* 0x290c */ s32 unk_290c;
    /* 0x2910 */ Letter unk_2910;
    /* 0x2a04 */ Letter unk_2a04;
    /* 0x2af8 */ u8 unk_2af8;
    /* 0x2af9 */ u8 unk_2af9;
    /* 0x2afa */ u8 unk_2afa;
    /* 0x2afb */ u8 unk_2afb;
    /* 0x2afc */ u8 unk_2afc;
    /* 0x2afd */ u8 unk_2afd;
    /* 0x2afe */ u8 unk_2afe;
    /* 0x2aff */ u8 unk_2aff;
    /* 0x2b00 */ u8 unk_2b00;
    /* 0x2b01 */ u8 unk_2b01;
};

typedef char Unk_ov103_size_Unk_ov103_02296da0[(sizeof(Unk_ov103_02296da0) == 0x2b04) ? 1 : -1];
typedef char Unk_ov103_size_Unk_ov002_02204468[(sizeof(Unk_ov002_02204468) == 0xc0) ? 1 : -1];
typedef char Unk_ov103_size_Unk_ov002_02204614[(sizeof(Unk_ov002_02204614) == 0x64) ? 1 : -1];
typedef char Unk_ov103_size_Unk_ov002_02204558[(sizeof(Unk_ov002_02204558) == 0x300) ? 1 : -1];
typedef char Unk_ov103_size_Unk_ov002_02204738[(sizeof(Unk_ov002_02204738) == 0x70) ? 1 : -1];
typedef char Unk_ov103_size_Unk_020dd458[(sizeof(Letter) == 0xf4) ? 1 : -1];
typedef char Unk_ov103_size_Unk_ov094_02292d6c[(sizeof(Unk_ov094_02292d6c) == 0x15e0) ? 1 : -1];
typedef char Unk_ov103_size_Unk_0206d0a0[(sizeof(Unk_0206d0a0) == 0x210) ? 1 : -1];
typedef char Unk_ov103_size_Unk_ov002_022040ec[(sizeof(Unk_ov002_022040ec) == 0x108) ? 1 : -1];
typedef char Unk_ov103_size_Unk_ov002_02204604[(sizeof(Unk_ov002_02204604) == 0x18) ? 1 : -1];
typedef char Unk_ov103_size_Unk_ov094_02294a50[(sizeof(Unk_ov094_02294a50) == 0xa60) ? 1 : -1];
typedef char Unk_ov103_size_Unk_ov094_02294bd4[(sizeof(Unk_ov094_02294bd4) == 0x28) ? 1 : -1];
typedef char Unk_ov103_size_Unk_020e4608[(sizeof(BgVramTaskPair) == 0x38) ? 1 : -1];

static inline BOOL Unk_ov103_02295f10_Both()
{
    if (gTouchHeld != 0 && gTouchChanged != 0) {
        return TRUE;
    }
    return FALSE;
}

struct Unk_ov103_SceneEntry {
    Unk_ov103_02296da0 *(*create)();
    u16 a;
    u16 b;
};

extern "C" Unk_ov103_02296da0 *func_ov103_02296ba4() { return new Unk_ov103_02296da0(); }

BOOL Unk_ov103_02296da0::vfunc_00() {
    func_ov103_0229645c();
    func_ov002_02200a50(0);
    func_ov002_02200a60(0);
    return TRUE;
}

BOOL Unk_ov103_02296da0::vfunc_0c() {
    ((Unk_ov092_02291ec8 *)ProcBase_GetParent(this))->func_ov092_02291c5c();
    func_ov103_02296420();
    return TRUE;
}

BOOL Unk_ov103_02296da0::onDraw() {
    func_ov002_02201b28(&unk_2270);
    if (!func_ov103_02294db4(1)) {
        return TRUE;
    }
    unk_2134.vfunc_08();
    if (MenuCtrl_IsButtons()) {
        unk_220c.func_ov002_02202844();
    }
    func_ov103_022954c0();
    if (func_ov103_02294db4(2)) {
        func_ov094_022932d0(&unk_cc, 0, unk_28fc);
        unk_b2c.func_ov094_022941a0(0, unk_28fc);
        func_ov094_0229277c(&unk_b54, unk_28fc);
    }
    if (func_ov103_02294db4(0x80)) {
        s32 r = func_ov002_02200920();
        unk_2888.setPos(0, r);
        unk_2888.vfunc_08();
    }
    return TRUE;
}// Declarations for data defined further down (definition order sets the data layout)
extern "C" Unk_ov103_SceneEntry data_ov103_02296c98;

// ---------------------------------------------------------------------------------------------

extern "C" Unk_ov103_SceneEntry data_ov103_02296c98 = {func_ov103_02296ba4, 0x96, 0x9a};

BOOL Unk_ov103_02296da0::vfunc_4c() {
    static Unk_ov103_02296da0_Fn tbl[9] = {
        &Unk_ov103_02296da0::func_ov103_022967d0, &Unk_ov103_02296da0::func_ov103_0229675c,
        &Unk_ov103_02296da0::func_ov103_02296720, &Unk_ov103_02296da0::func_ov103_022966ac,
        &Unk_ov103_02296da0::func_ov103_0229663c, &Unk_ov103_02296da0::func_ov103_022965b4,
        &Unk_ov103_02296da0::func_ov103_02296564, &Unk_ov103_02296da0::func_ov103_02296528,
        &Unk_ov103_02296da0::func_ov103_022964e0};
    func_ov103_022963cc();
    (this->*tbl[unk_8c])();
    func_ov103_02296394();
    return TRUE;
}

void Unk_ov103_02296da0::func_ov103_02296820() {
    static Unk_ov103_02296da0_Fn tbl[25] = {
        &Unk_ov103_02296da0::func_ov103_022962ec, &Unk_ov103_02296da0::func_ov103_0229627c,
        &Unk_ov103_02296da0::func_ov103_022961e4, &Unk_ov103_02296da0::func_ov103_022961b0,
        &Unk_ov103_02296da0::func_ov103_02296124, &Unk_ov103_02296da0::func_ov103_02296040,
        &Unk_ov103_02296da0::func_ov103_02295fa4, &Unk_ov103_02296da0::func_ov103_02295f10,
        &Unk_ov103_02296da0::func_ov103_02295ef0, &Unk_ov103_02296da0::func_ov103_02295e74,
        &Unk_ov103_02296da0::func_ov103_02295e24, &Unk_ov103_02296da0::func_ov103_02295dd8,
        &Unk_ov103_02296da0::func_ov103_02295db8, &Unk_ov103_02296da0::func_ov103_02295d90,
        &Unk_ov103_02296da0::func_ov103_02295d60, &Unk_ov103_02296da0::func_ov103_02295d30,
        &Unk_ov103_02296da0::func_ov103_02295cdc, &Unk_ov103_02296da0::func_ov103_02295c94,
        &Unk_ov103_02296da0::func_ov103_02295c50, &Unk_ov103_02296da0::func_ov103_02295c18,
        &Unk_ov103_02296da0::func_ov103_02295bdc, &Unk_ov103_02296da0::func_ov103_02295b98,
        &Unk_ov103_02296da0::func_ov103_02295b78, &Unk_ov103_02296da0::func_ov103_02295b40,
        &Unk_ov103_02296da0::func_ov103_02295ad8};
    (this->*tbl[unk_8d])();
}

BOOL Unk_ov103_02296da0::vfunc_50() {
    func_ov103_02296404();
    func_ov103_02296820();
    func_ov103_022963fc();
    return TRUE;
}

BOOL Unk_ov103_02296da0::vfunc_54() { return TRUE; }

BOOL Unk_ov103_02296da0::vfunc_58() { return TRUE; }

BOOL Unk_ov103_02296da0::vfunc_5c() {
    ProcBase_RequestDelete(this);
    return TRUE;
}

void Unk_ov103_02296da0::func_ov103_022967d0() {
    func_ov103_02296374();
    func_ov103_02296360();
    func_ov002_02200a50(1);
}

void Unk_ov103_02296da0::func_ov103_0229675c() {
    func_ov103_02296350();
    func_ov094_022937a0(&unk_cc);
    func_ov094_02293d2c(&unk_b2c);
    func_ov103_02295730();
    func_ov002_022008e0(8, 0, 0, 0x30);
    Gfx2d_ShowLayer(6);
    func_ov002_02200840(6, 0, 0);
    func_ov002_02200a50(2);
    func_ov103_02294da4(1);
    func_ov103_02294da4(2);
    unk_28fc = func_ov002_02200920();
}

void Unk_ov103_02296da0::func_ov103_02296720() {
    if (func_ov002_02200908(0)) {
        func_ov002_02200a60(2);
        func_ov103_02295a60();
    }
    func_ov002_02200840(6, 0, 0);
    unk_28fc = func_ov002_02200920();
}

void Unk_ov103_02296da0::func_ov103_022966ac() {
    unk_2134.func_ov002_022006e4(1);
    func_ov103_022952ac();
    if (func_ov103_02294db4(0x100) == 0) {
        ((Unk_ov092_02291ec8 *)ProcBase_GetParent(this))->func_ov092_02291ce4(0x44, 1);
    }
    func_ov002_022008c4(8, 0, 0, 0x30);
    func_ov002_02200840(6, 0, 0);
    func_ov002_02200a50(4);
    unk_28fc = func_ov002_02200920();
}

void Unk_ov103_02296da0::func_ov103_0229663c() {
    if (func_ov002_022008fc(0)) {
        Gfx2d_ResetLayer(6);
        func_ov103_02294d94(2);
        if (func_ov103_02294db4(0x100)) {
            func_ov002_02200a50(5);
            func_ov103_022965b4();
        } else {
            func_ov103_02294d94(1);
            func_ov002_02200a60(5);
        }
    } else {
        func_ov002_02200840(6, 0, 0);
    }
    unk_28fc = func_ov002_02200920();
}

void Unk_ov103_02296da0::func_ov103_022965b4() {
    s32 t = func_ov103_022957a8(unk_2afd);
    func_02065af0();
    unk_2678.func_0206d2e0((Unk_0206d1d4_Src *)t, (void *)3, (void *)4, 1);
    func_ov002_022008e0(3, 0, 0, 0x30);
    Gfx2d_ShowLayer(3);
    func_ov002_02200840(3, 0, 0);
    Gfx2d_ShowLayer(4);
    func_ov002_02200840(4, 0, 0);
    func_ov002_02200a50(6);
    unk_2888.func_ov002_02203ec8(0x88);
    func_ov103_02294da4(0x80);
}

void Unk_ov103_02296da0::func_ov103_02296564() {
    if (func_ov002_02200908(0)) {
        func_ov002_02200a60(2);
        if (MenuCtrl_IsTouch()) {
            func_ov002_02200a58(3);
        } else {
            func_ov002_02200a58(7);
        }
    } else {
        func_ov002_02200840(3, 0, 0);
        func_ov002_02200840(4, 0, 0);
    }
}

void Unk_ov103_02296da0::func_ov103_02296528() {
    func_ov002_022008c4(3, 0, 0, 0x30);
    func_ov002_02200840(3, 0, 0);
    func_ov002_02200840(4, 0, 0);
    func_ov002_02200a50(8);
}

void Unk_ov103_02296da0::func_ov103_022964e0() {
    if (func_ov002_022008fc(0)) {
        Gfx2d_ResetLayer(3);
        Gfx2d_ResetLayer(4);
        func_ov103_02294d94(0x80);
        func_ov103_022967d0();
    } else {
        func_ov002_02200840(3, 0, 0);
        func_ov002_02200840(4, 0, 0);
    }
}

void Unk_ov103_02296da0::func_ov103_0229645c() {
    unk_28f8 = 0;
    func_ov094_022939c0(&unk_cc, 2);
    unk_b2c.func_ov094_02294644(2);
    func_ov094_02292d30(&unk_b54, 6);
    unk_2afa = 0x15;
    unk_21f4.func_ov002_022027a4();
    unk_2af8 = 0;
    unk_2afc = 0xb;
    unk_2270.func_ov002_02202310(3, 1, 0);
    unk_2678.func_0206d39c(3);
}

void Unk_ov103_02296da0::func_ov103_02296420() {
    func_ov103_022958cc();
    func_ov094_02292a80(&unk_b54);
    func_ov094_02293998(&unk_cc);
    func_ov002_02201b04(&unk_2270);
    unk_2678.func_0206d394();
}

void Unk_ov103_02296da0::func_ov103_02296404() {
    func_ov103_022963cc();
    unk_220c.vfunc_0c();
}

void Unk_ov103_02296da0::func_ov103_022963fc() {
    func_ov103_02296394();
}

void Unk_ov103_02296da0::func_ov103_022963cc() {
    func_ov103_022958cc();
    func_ov094_02292acc(&unk_b54);
    func_ov094_022939a0(&unk_cc);
    unk_b2c.func_ov094_0229462c();
}

void Unk_ov103_02296da0::func_ov103_02296394() {
    func_ov002_02201b58(&unk_2270);
    func_ov094_02292aa4(&unk_b54);
    if (unk_2134.func_ov002_0220071c()) {
        func_ov103_0229555c();
    }
}

void Unk_ov103_02296da0::func_ov103_02296374() {
    Gfx2d_SetLayerPriority(6, 2);
    Gfx2d_SetLayerControl(6, 0, 0, 0);
}

void Unk_ov103_02296da0::func_ov103_02296360() {
    func_ov094_02292d1c(&unk_b54, 0);
}

void Unk_ov103_02296da0::func_ov103_02296350() {
    func_ov094_02292ae0(&unk_b54);
}

void Unk_ov103_02296da0::func_ov103_022962ec() {
    if (func_ov002_02200a14(1)) {
        func_ov103_02295a80();
    } else {
        if (Unk_ov103_02295f10_Both()) {
            s32 r = func_ov103_02295858(gTouchCurX, gTouchCurY, 1);
            if (r != 0x15) {
                func_ov103_022959d8(r);
            }
        }
    }
}

void Unk_ov103_02296da0::func_ov103_0229627c() {
    if (gTouchHeld == 0) {
        func_ov002_02200a58(0);
        unk_2134.func_ov002_022006a4(0x3c);
    } else {
        if (func_ov103_02294db4(4)) {
            if (func_ov103_022955dc()) {
                func_ov103_02295990(unk_2af9);
                return;
            }
            if (func_ov103_022955c8(9)) {
                func_ov103_02294f04(unk_2af9);
                return;
            }
        }
        unk_2134.func_ov002_022006c0();
    }
}

void Unk_ov103_02296da0::func_ov103_022961e4() {
    func_ov103_02295488();
    func_ov103_02295650();
    s32 r = func_ov103_02295858(unk_2908 + 8, unk_290c + 8, 0);
    if (r != 0x15) {
        if (gTouchHeld == 0) {
            if (func_ov103_022956fc(r) != 0 || func_ov103_0229580c(r) == 0) {
                func_ov103_022958d8(unk_2afb, 4);
            } else {
                func_ov103_02295a60();
            }
        } else {
            func_ov103_02295620(r);
        }
    } else if (gTouchHeld == 0) {
        func_ov103_022958d8(unk_2afb, 4);
    }
}

void Unk_ov103_02296da0::func_ov103_022961b0() {
    if (func_ov002_02200a14(1)) {
        func_ov002_02200a58(7);
    } else {
        if (unk_2888.func_ov002_02203e24()) {
            func_ov103_02294dcc();
        }
    }
}

void Unk_ov103_02296da0::func_ov103_02296124() {
    if (func_ov002_02200a14(1)) {
        func_ov103_02294fbc();
    } else {
        if (Unk_ov103_02295f10_Both()) {
            s32 t = unk_2270.func_ov002_022014c0(gTouchCurX, gTouchCurY);
            if (t >= 0) {
                func_ov002_02201aa0(&unk_2270, t, 1);
                unk_2b00 = ((u8 *)this + 0x2569)[t];
                func_ov002_02200a58(0x15);
            }
        }
    }
}

void Unk_ov103_02296da0::func_ov103_02296040() {
    if (func_ov002_022009d4()) {
        func_ov103_02295abc();
        unk_2134.func_ov002_022006e4(1);
    } else if (func_ov103_02294e10((void *)func_ov002_022009c8(), 0)) {
        func_ov103_02295508();
        func_ov103_02295234();
        unk_2134.func_ov002_022006e4(0);
    } else if (func_ov103_022956fc(unk_2afc) == 0 && (gPad[1] & 1) != 0) {
        if (func_ov103_022958bc(unk_2afc)) {
            if (func_ov103_022956c8(unk_2afc) == 0) {
                func_ov103_02294f04(unk_2afc);
            }
        }
    } else {
        if ((gPad[1] & 0x800) != 0) {
            unk_8c = 3;
            func_ov002_02200a60(1);
            unk_2134.func_ov002_022006e4(1);
            func_ov103_022952ac();
            func_ov103_02294d94(0x100);
        } else {
            unk_2134.func_ov002_022006c0();
        }
    }
}

void Unk_ov103_02296da0::func_ov103_02295fa4() {
    if (func_ov103_02294e10((void *)func_ov002_022009c8(), 1)) {
        func_ov103_02295508();
        func_ov103_02295234();
        unk_2134.func_ov002_022006e4(0);
    } else {
        u16 f = gPad[1];
        if ((f & 1) != 0) {
            if (func_ov103_022956c8(unk_2afc)) {
                func_ov103_022950c4(unk_2afc);
            } else {
                func_ov103_02295078(unk_2afc);
            }
        } else if ((f & 2) != 0) {
            func_ov103_022950c4(unk_2afb);
        } else {
            func_ov103_02295454();
            unk_2134.func_ov002_022006c0();
        }
    }
}

void Unk_ov103_02296da0::func_ov103_02295f10() {
    if (unk_220c.getAnim() == 0) {
        s32 a = unk_2888.func_ov002_02203f78(1);
        s32 b = unk_2888.func_ov002_02203f28(1);
        unk_220c.func_ov002_02202a40(a, b);
        ((Unk_ov002_0220464c *)&unk_220c)->func_ov002_02202d00(1);
    }
    if (func_ov002_022009d4()) {
        func_ov103_022952ac();
        func_ov002_02200a58(3);
    } else {
        u16 f = gPad[1];
        if ((f & 1) != 0 || (f & 2) != 0) {
            ((Unk_ov002_0220464c *)&unk_220c)->func_ov002_02202b68();
            func_ov002_02200a58(8);
        }
    }
}

void Unk_ov103_02296da0::func_ov103_02295ef0() {
    if (unk_220c.isAnimDone()) {
        func_ov103_02294dcc();
    }
}

void Unk_ov103_02296da0::func_ov103_02295e74() {
    if (func_ov002_022009d4()) {
        func_ov103_02294fbc();
    } else if (func_ov002_022019d0(&unk_2270, func_ov002_022009c8(), &unk_2b01, 0)) {
        func_ov103_022951e0();
    } else {
        u16 f = gPad[1];
        if ((f & 1) != 0) {
            ((Unk_ov002_0220464c *)&unk_220c)->func_ov002_02202b68();
            func_ov002_02200a58(0xa);
        } else if ((f & 2) != 0) {
            func_ov103_02294fbc();
        }
    }
}

void Unk_ov103_02296da0::func_ov103_02295e24() {
    if (unk_220c.isAnimDone()) {
        func_ov002_02201aa0(&unk_2270, unk_2b01, 1);
        unk_2b00 = ((u8 *)this + 0x2569)[unk_2b01];
        func_ov002_02200a58(0x15);
    }
}

void Unk_ov103_02296da0::func_ov103_02295dd8() {
    if (!unk_220c.func_ov002_022028f0()) {
        func_ov002_02200a58(unk_2aff);
        if (unk_2aff == 5) {
            func_ov103_0229566c(unk_2afc);
        }
        func_ov103_02296820();
    }
    func_ov103_02295454();
}

void Unk_ov103_02296da0::func_ov103_02295db8() {
    if (unk_220c.isAnimDone()) {
        func_ov103_02295120();
    }
}

void Unk_ov103_02296da0::func_ov103_02295d90() {
    if (unk_220c.isAnimDone()) {
        func_ov103_02295140();
        func_ov002_02200a58(5);
    }
}

void Unk_ov103_02296da0::func_ov103_02295d60() {
    if (unk_220c.func_ov002_02202928()) {
        func_ov103_02295944(unk_2afc);
        func_ov002_02200a58(0xf);
    }
}

void Unk_ov103_02296da0::func_ov103_02295d30() {
    if (unk_220c.isAnimDone()) {
        func_ov002_02200a58(unk_2aff);
    }
    func_ov103_02295454();
}

void Unk_ov103_02296da0::func_ov103_02295cdc() {
    if (!unk_220c.func_ov002_02202928()) {
        u32 a = unk_2afe;
        if (unk_2afc == a) {
            func_ov103_0229580c(a);
            func_ov103_02295508();
            func_ov002_02200a58(5);
        } else {
            func_ov103_022958d8(a, 4);
        }
    } else {
        func_ov103_02295454();
    }
}

void Unk_ov103_02296da0::func_ov103_02295c94() {
    if (!unk_220c.func_ov002_022028fc()) {
        func_ov103_02295364(unk_2afe);
        func_ov103_02294da4(0x40);
        func_ov002_02200a58(0x12);
        func_ov103_02295508();
    } else {
        func_ov002_02200a58(5);
    }
}

void Unk_ov103_02296da0::func_ov103_02295c50() {
    if (unk_220c.isAnimDone()) {
        func_ov002_02200a58(unk_2aff);
    }
    if (unk_220c.func_ov002_02202928()) {
        func_ov103_02294d94(0x40);
        func_ov103_02295454();
    }
}

void Unk_ov103_02296da0::func_ov103_02295c18() {
    if (unk_21f4.func_ov002_02202718()) {
        func_ov103_022953a8(unk_2afb);
        func_ov103_02295a60();
    } else {
        func_ov103_02295424();
    }
}

void Unk_ov103_02296da0::func_ov103_02295bdc() {
    if (unk_2270.func_ov002_022017b4()) {
        if (MenuCtrl_IsButtons()) {
            func_ov103_02295194();
            func_ov002_02200a58(9);
        } else {
            func_ov002_02200a58(4);
        }
    }
}

void Unk_ov103_02296da0::func_ov103_02295b98() {
    if (func_ov002_02201a28(&unk_2270)) {
        func_ov002_02202064(&unk_2270, 0);
        if (unk_220c.getAnim()) {
            func_ov103_02295160();
        }
        func_ov002_02200a58(0x16);
    }
}

void Unk_ov103_02296da0::func_ov103_02295b78() {
    if (unk_2270.func_ov002_022017a4()) {
        func_ov103_02295048();
    }
}

void Unk_ov103_02296da0::func_ov103_02295b40() {
    if (unk_2570.func_ov002_02204234(0)) {
        func_ov002_02200a58(unk_2aff);
        unk_220c.enableObjWindow();
    }
}

void Unk_ov103_02296da0::func_ov103_02295ad8() {
    if (unk_2888.func_ov002_02203f08()) {
        if (unk_220c.getAnim()) {
            s32 r4 = unk_2888.func_ov002_02203f78(1);
            s32 r2 = unk_2888.func_ov002_02203f28(1);
            unk_220c.func_ov002_02202a40(r4, r2);
        }
    } else {
        func_ov103_022952ac();
        func_ov002_02200a50(7);
        func_ov002_02200a60(1);
    }
}

void Unk_ov103_02296da0::func_ov103_02295abc() {
    func_ov103_022952ac();
    func_ov103_022956ac();
    func_ov002_02200a58(0);
}

void Unk_ov103_02296da0::func_ov103_02295a80() {
    unk_2afa = 0x15;
    func_ov103_02295328();
    func_ov002_02200980();
    func_ov103_02295508();
    func_ov002_02200a58(5);
    func_ov103_0229566c(unk_2afc);
}

void Unk_ov103_02296da0::func_ov103_02295a60() {
    if (MenuCtrl_IsTouch()) {
        func_ov103_02295abc();
    } else {
        func_ov103_02295a80();
    }
}

void Unk_ov103_02296da0::func_ov103_022959d8(u32 a) {
    u32 r6, r7;
    unk_2af9 = a;
    func_ov002_02200a58(1);
    r6 = gTouchCurX;
    r7 = gTouchCurY;
    unk_2900 = func_ov103_02295774(unk_2af9) - r6;
    unk_2904 = func_ov103_02295740(unk_2af9) - r7;
    unk_2afa = a;
    unk_2134.func_ov002_022006b8();
    if (func_ov103_022956fc(a)) {
        func_ov103_02294d94(4);
    } else {
        func_ov103_02294da4(4);
    }
}

void Unk_ov103_02296da0::func_ov103_02295990(u32 a) {
    unk_2afb = a;
    unk_2134.func_ov002_022006e4(1);
    func_ov103_022953d0(a);
    if (unk_2af8 == 1) func_ov002_02200a58(2);
    func_ov103_02295488();
}

void Unk_ov103_02296da0::func_ov103_02295944(u32 a) {
    unk_2afb = a;
    unk_2134.func_ov002_022006e4(1);
    func_ov103_022953d0(a);
    if (unk_2af8 == 1) unk_2aff = 6;
    func_ov103_02295454();
}

void Unk_ov103_02296da0::func_ov103_022958d8(u32 a, u32 b) {
    unk_2afb = a;
    unk_21f4.func_ov002_022026f4(unk_2908, unk_290c);
    s32 x = func_ov103_02295774(a);
    unk_21f4.func_ov002_022026c4(x, func_ov103_02295740(a), b);
    unk_21f4.func_ov002_02202718();
    func_ov103_02295424();
    func_ov002_02200a58(0x13);
}

void Unk_ov103_02296da0::func_ov103_022958cc() {
    unk_94->cancel();
}

BOOL Unk_ov103_02296da0::func_ov103_022958bc(u32 a) {
    if (a >= 0xb && a <= 0x14) return TRUE;
    return FALSE;
}

u32 Unk_ov103_02296da0::func_ov103_022958a8(u32 a) {
    if (a >= 0xb && a <= 0x14) return (u8)(a - 11);
    return 0;
}

u32 Unk_ov103_02296da0::func_ov103_02295898(u32 a) {
    if (a <= 9) return (u8)(a + 11);
    return 0x15;
}

u32 Unk_ov103_02296da0::func_ov103_02295858(u32 a, u32 b, s32 c) {
    u32 t = unk_b2c.func_ov094_02294610(a, b);
    if (t != 0x37) {
        if (c != 0) {
            if (func_ov094_02293d80(&unk_b2c, t)) return 0x15;
        }
        return func_ov103_02295898(t);
    }
    return 0x15;
}

BOOL Unk_ov103_02296da0::func_ov103_0229580c(u32 a) {
    if (!func_ov103_022956c8(a)) {
        func_02065e70(&unk_2a04, (void *)func_ov103_022957a8(a));
        func_ov103_022957dc(unk_2afb, &unk_2a04);
    }
    func_ov103_022953a8(a);
    return TRUE;
}

void Unk_ov103_02296da0::func_ov103_022957dc(u32 a, void *b) {
    if (func_ov103_022958bc(a)) {
        unk_b2c.func_ov094_02294318(func_ov103_022958a8(a), (s32)b);
    }
}

BOOL Unk_ov103_02296da0::func_ov103_022957a8(u32 a) {
    if (func_ov103_022958bc(a)) {
        return unk_b2c.func_ov094_0229433c(func_ov103_022958a8(a));
    }
    return FALSE;
}

s32 Unk_ov103_02296da0::func_ov103_02295774(u32 a) {
    if (func_ov103_022958bc(a)) {
        return func_ov094_02293df8(&unk_b2c, func_ov103_022958a8(a));
    }
    return 0;
}

s32 Unk_ov103_02296da0::func_ov103_02295740(u32 a) {
    if (func_ov103_022958bc(a)) {
        return func_ov094_02293d9c(&unk_b2c, func_ov103_022958a8(a));
    }
    return 0;
}

void Unk_ov103_02296da0::func_ov103_02295730() {
    func_ov094_02293318(&unk_cc, 0, 0xe);
}

BOOL Unk_ov103_02296da0::func_ov103_022956fc(u32 a) {
    if (func_ov103_022958bc(a)) {
        return unk_b2c.func_ov094_022941ec(func_ov103_022958a8(a));
    }
    return FALSE;
}

BOOL Unk_ov103_02296da0::func_ov103_022956c8(u32 a) {
    if (func_ov103_022958bc(a)) {
        return func_ov094_02293d80(&unk_b2c, func_ov103_022958a8(a));
    }
    return TRUE;
}

void Unk_ov103_02296da0::func_ov103_022956ac() {
    func_ov094_022935dc(&unk_cc);
    unk_b2c.func_ov094_022943f8();
}

void Unk_ov103_02296da0::func_ov103_0229566c(u32 a) {
    if (func_ov103_022958bc(a)) {
        unk_b2c.func_ov094_022943bc(func_ov103_022958a8(a));
        func_ov094_022935dc(&unk_cc);
    } else {
        func_ov103_022956ac();
    }
}

void Unk_ov103_02296da0::func_ov103_02295650() {
    func_ov094_0229358c(&unk_cc);
    unk_b2c.func_ov094_022943b0();
}

void Unk_ov103_02296da0::func_ov103_02295620(u32 a) {
    if (func_ov103_022958bc(a)) {
        unk_b2c.func_ov094_022943a4(func_ov103_022958a8(a));
    }
}

BOOL Unk_ov103_02296da0::func_ov103_022955dc() {
    s32 d = gTouchPressX - gTouchCurX;
    if (d < 0) d = -d;
    if (d > 8) return TRUE;
    d = gTouchPressY - gTouchCurY;
    if (d < 0) d = -d;
    if (d > 8) return TRUE;
    return FALSE;
}

BOOL Unk_ov103_02296da0::func_ov103_022955c8(s32 a) {
    if (gTouchHoldFrames < a) return FALSE;
    return TRUE;
}

void Unk_ov103_02296da0::func_ov103_0229555c() {
    s32 r6 = func_ov103_02295774(unk_2afa) - 0x6d;
    s32 r4 = func_ov103_02295740(unk_2afa) - 0x78;
    if (MenuCtrl_IsButtons()) r4 -= 8;
    unk_2134.setPos(r6, r4);
    if (func_ov103_022958bc(unk_2afa)) {
        unk_b2c.func_ov094_02294420(&unk_2134, func_ov103_022958a8(unk_2afa));
    }
}

void Unk_ov103_02296da0::func_ov103_02295508() {
    if (func_ov103_022958bc(unk_2afc)) {
        if (func_ov103_022956c8(unk_2afc)) {
            unk_2134.func_ov002_022006b0();
        } else {
            unk_2afa = unk_2afc;
            unk_2134.func_ov002_022006b8();
        }
    } else {
        unk_2134.func_ov002_022006b0();
    }
}

void Unk_ov103_02296da0::func_ov103_022954c0() {
    if (!func_ov103_02294db4(0x40)) {
        switch (unk_2af8) {
        case 0:
            break;
        case 1:
            unk_b2c.func_ov094_0229405c(unk_2908, unk_290c, &unk_2910);
            break;
        }
    }
}

void Unk_ov103_02296da0::func_ov103_02295488() {
    unk_2908 = unk_2900 + gTouchCurX;
    unk_290c = unk_2904 + gTouchCurY;
}

void Unk_ov103_02296da0::func_ov103_02295454() {
    unk_2908 = unk_220c.func_ov002_022028c8() - 2;
    unk_290c = unk_220c.func_ov002_022028a0() - 4;
}

void Unk_ov103_02296da0::func_ov103_02295424() {
    unk_2908 = unk_21f4.func_ov002_02202710();
    unk_290c = unk_21f4.func_ov002_02202708();
}

void Unk_ov103_02296da0::func_ov103_022953d0(u32 idx) {
    if (func_ov103_022958bc(idx)) {
        s32 r4 = func_ov103_022958a8(idx);
        unk_2af8 = 1;
        s32 r = unk_b2c.func_ov094_0229433c(r4);
        func_02065e70(&unk_2910, (void *)r);
        unk_b2c.func_ov094_022942f4(r4);
    }
}

void Unk_ov103_02296da0::func_ov103_022953a8(u32 idx) {
    if (unk_2af8 == 1) {
        func_ov103_022957dc(idx, &unk_2910);
    }
    unk_2af8 = 0;
}

void Unk_ov103_02296da0::func_ov103_02295364(u32 idx) {
    if (unk_2af8 == 1) {
        func_02065e70(&unk_2a04, &unk_2910);
        func_ov103_022953d0(idx);
        func_ov103_022957dc(idx, &unk_2a04);
    }
}

void Unk_ov103_02296da0::func_ov103_02295328() {
    s32 a = func_ov103_022952e0();
    s32 b = func_ov103_022952d0();
    unk_220c.func_ov002_02202a40(a, b);
    ((Unk_ov002_0220464c *)&unk_220c)->func_ov002_02202d00(1);
    func_ov103_02295140();
}

s32 Unk_ov103_02296da0::func_ov103_022952e0() {
    s32 r = func_ov103_02295774(unk_2afc);
    if (func_ov103_02294db4(0x20)) {
        r += 0x100;
    } else if (func_ov103_02294db4(0x10)) {
        r -= 0x100;
    }
    return r + 8;
}

s32 Unk_ov103_02296da0::func_ov103_022952d0() { return func_ov103_02295740(unk_2afc); }

void Unk_ov103_02296da0::func_ov103_022952ac() {
    ((Unk_ov002_0220464c *)&unk_220c)->func_ov002_02202d00(0);
    unk_220c.vfunc_0c();
}

void Unk_ov103_02296da0::func_ov103_02295234() {
    if (func_ov103_02294db4(8)) {
        s32 a = func_ov103_022952e0();
        s32 b = func_ov103_022952d0();
        unk_220c.func_ov002_02202a40(a, b);
        func_ov103_02294d94(8);
    } else {
        s32 a = func_ov103_022952e0();
        s32 b = func_ov103_022952d0();
        unk_220c.func_ov002_022029e8(a, b, 3, 1);
        unk_2aff = unk_8d;
        func_ov002_02200a58(0xb);
    }
}

void Unk_ov103_02296da0::func_ov103_022951e0() {
    s32 a = unk_2270.func_ov002_022014a4();
    s32 b = unk_2270.func_ov002_02201498(unk_2b01);
    unk_220c.func_ov002_02202a18(a, b, 2);
    unk_2aff = unk_8d;
    func_ov002_02200a58(0xb);
}

void Unk_ov103_02296da0::func_ov103_02295194() {
    unk_2b01 = 0;
    s32 a = unk_2270.func_ov002_022014a4();
    s32 b = unk_2270.func_ov002_02201498(unk_2b01);
    unk_220c.func_ov002_02202a40(a, b);
    ((Unk_ov002_0220464c *)&unk_220c)->func_ov002_02202d00(7);
}

void Unk_ov103_02296da0::func_ov103_02295160() {
    s32 a = func_ov103_022952e0();
    s32 b = func_ov103_022952d0();
    unk_220c.func_ov002_02202a40(a, b);
    ((Unk_ov002_0220464c *)&unk_220c)->func_ov002_02202d00(1);
}

void Unk_ov103_02296da0::func_ov103_02295140() {
    unk_220c.func_ov002_02202a78();
    unk_220c.vfunc_0c();
}

void Unk_ov103_02296da0::func_ov103_02295120() {
    unk_220c.func_ov002_02202af0();
    func_ov002_02200a58(0xd);
}

void Unk_ov103_02296da0::func_ov103_02295100() {
    ((Unk_ov002_0220464c *)&unk_220c)->func_ov002_02202d00(4);
    func_ov002_02200a58(0xe);
}

void Unk_ov103_02296da0::func_ov103_022950c4(u32 v) {
    unk_2134.func_ov002_022006e4(1);
    unk_2afe = v;
    ((Unk_ov002_0220464c *)&unk_220c)->func_ov002_02202d00(5);
    func_ov002_02200a58(0x10);
}

void Unk_ov103_02296da0::func_ov103_02295078(u32 v) {
    unk_2134.func_ov002_022006e4(1);
    unk_2aff = unk_8d;
    unk_2afe = v;
    ((Unk_ov002_0220464c *)&unk_220c)->func_ov002_02202d00(6);
    func_ov002_02200a58(0x11);
}

s32 Unk_ov103_02296da0::func_ov103_02295048() {
    switch (unk_2b00) {
    case 0:
        func_ov103_02295100();
        break;
    case 1:
        func_ov103_02294dec();
        break;
    case 3:
    default:
        func_ov103_02295a60();
        break;
    }
}

void Unk_ov103_02296da0::func_ov103_02294fec() {
    unk_2270.func_ov002_0220160c((Unk_ov002_022013ac_Rec *)&unk_2270.unk_2f4, 0);
    s32 a = func_ov103_02295774(unk_2afd);
    s32 b = func_ov103_02295740(unk_2afd);
    unk_2270.func_ov002_0220229c(a, b);
    func_ov002_02202098(&unk_2270, 0);
    func_ov002_02200a58(0x14);
}

void Unk_ov103_02296da0::func_ov103_02294fbc() {
    unk_2b00 = 3;
    func_ov103_02295160();
    func_ov002_02202064(&unk_2270, 0);
    func_ov002_02200a58(0x16);
}

void Unk_ov103_02296da0::func_ov103_02294f04(u32 idx) {
    unk_2afd = idx;
    func_ov002_022016e4(&unk_2270.unk_2f4, 3);
    s32 r6 = func_ov103_022957a8(idx);
    if (MenuCtrl_IsButtons()) {
        func_ov002_02201700(&unk_2270.unk_2f4, 0, 0);
    }
    s32 r4 = ((Unk_02065554 *)r6)->func_02065578();
    if (r4 != 0) {
        if (r4 == 7) {
            func_ov002_02201700(&unk_2270.unk_2f4, 0x17, 1);
        } else {
            func_ov002_02201700(&unk_2270.unk_2f4, 0x14, 1);
        }
    }
    if (((Unk_02065554 *)r6)->func_020655d0() != 0xfff1 && r4 == 3 || r4 == 6 || r4 == 1) {
        func_ov002_02201700(&unk_2270.unk_2f4, 0x15, 2);
    }
    func_ov002_02201700(&unk_2270.unk_2f4, 2, 3);
    func_ov103_022952ac();
    unk_2134.func_ov002_022006e4(1);
    func_ov103_02294fec();
}

void Unk_ov103_02296da0::func_ov103_02294e60(void *pad, u32 x) {
    s32 col = unk_2afc - 0xb;
    s32 row = col >> 1;
    if (func_ov002_0220126c(pad)) {
        if ((col & 1) > 0) {
            unk_2afc = unk_2afc - 1;
        }
    } else if (func_ov002_0220125c(pad)) {
        if ((col & 1) < 1) {
            unk_2afc = unk_2afc + 1;
        }
    }
    if (func_ov103_022958bc(unk_2afc)) {
        if (!func_ov103_02294db4(0x30)) {
            if (func_ov002_0220128c(pad)) {
                if (row > 0) {
                    unk_2afc = unk_2afc - 2;
                }
            } else if (func_ov002_0220127c(pad)) {
                if (row < 4) {
                    unk_2afc = unk_2afc + 2;
                }
            }
        }
    }
}

BOOL Unk_ov103_02296da0::func_ov103_02294e10(void *pad, u32 x) {
    u8 old = unk_2afc;
    func_ov103_02294d94(0x30);
    if (pad == 0) {
        return FALSE;
    }
    if (func_ov103_022958bc(unk_2afc)) {
        func_ov103_02294e60(pad, x);
    }
    if (old != unk_2afc) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov103_02296da0::func_ov103_02294dec() {
    func_ov002_02200a50(3);
    func_ov002_02200a60(1);
    func_ov103_02294da4(0x100);
}

void Unk_ov103_02296da0::func_ov103_02294dcc() {
    func_ov002_02200a58(0x18);
    unk_2888.setState(2);
}

BOOL Unk_ov103_02296da0::func_ov103_02294db4(u32 mask) {
    if (unk_28f8 & mask) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov103_02296da0::func_ov103_02294da4(u32 mask) { unk_28f8 = unk_28f8 | mask; }

void Unk_ov103_02296da0::func_ov103_02294d94(u32 mask) { unk_28f8 = unk_28f8 & ~mask; }
