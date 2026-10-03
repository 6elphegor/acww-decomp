#define postCreate() postCreate(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef postCreate
#undef vfunc_14

extern "C" {
extern u8 gTouchCurX;
extern u8 gTouchCurY;
extern u16 gPad[];
extern u8 gTouchHeld;
extern u8 gTouchChanged;

void Gfx2d_ShowLayer(s32 a);
void Gfx2d_ResetLayer(s32 a);
void Gfx2d_SetLayerControl(u32 n, u32 a, u32 b, u32 c);
void Gfx2d_SetLayerPriority(u32 a, u32 b);
void Snd_PlaySe(u32 a);
void func_02065e70(void *a, void *b);
void func_0206ecf8(u32 a);
void func_0206ed2c(u32 a);
BOOL MenuCtrl_IsButtons();
BOOL MenuCtrl_IsTouch();
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
u8 func_ov002_02201a70(void *p);
void func_ov002_02201aa0(void *p, s32 a, s32 b);
void func_ov002_02201b04(void *p);
void func_ov002_02201b28(void *p);
void func_ov002_02201b58(void *p);
void func_ov002_02202064(void *p, u32 v);
void func_ov002_02202098(void *p, u32 v);
void func_ov002_02203920(void *p);
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
s32 func_ov094_02293d80(void *p, u32 a);
s32 func_ov094_02293d9c(void *p, u32 a);
s32 func_ov094_02293df8(void *p, u32 a);
}

// ---- external classes (method holders: the real symbols name the class that owns the method)

class LabelBalloon {
public:
    void setPos(s32 a, s32 b);
};

class HandCursor {
public:
    BOOL isAnimDone();
    s32 getAnim();
    void setAnimAtEnd(s32 a);
    void enableObjWindow();
};

class BgVramTask {
public:
    void cancel();
};

struct Unk_ov002_022013ac_Rec;

class Unk_ov002_022013ac {
public:
    s32 func_ov002_02201498(s32 a);
    s32 func_ov002_022014a4();
    s32 func_ov002_022014c0(s32 a, s32 b);
    void func_ov002_0220160c(Unk_ov002_022013ac_Rec *a, s32 b);
    BOOL func_ov002_022017a4();
    BOOL func_ov002_022017b4();
};

class Unk_ov002_02202d98 {
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
};

class Unk_ov002_0220464c {
public:
    void func_ov002_02202b68();
    void func_ov002_02202c40();
    void func_ov002_02202ca0();
    void func_ov002_02202d00(s32 a);
};

class Unk_ov002_02202fac {
public:
    s32 func_ov002_0220306c();
    BOOL func_ov002_0220308c();
    void func_ov002_022030ac(u8 a);
    s32 func_ov002_022030b8(s32 a);
    s32 func_ov002_022030f4(s32 a);
    BOOL func_ov002_02203110(s32 a);
};

class Unk_ov092_02291ec8 {
public:
    void func_ov092_02291c5c();
    void func_ov092_02291ce4(s32 a, s32 b);
};

// ---- sub-objects with their own constructor/destructor

class Letter {
public:
    Letter();
    ~Letter();
    u32 unk_00[0xf4 / 4];
};

class BgVramTaskPair {
public:
    BgVramTaskPair();
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

    void func_ov094_0229405c(s32 a, s32 b, void *c);
    void func_ov094_022941a0(s32 a, s32 b);
    s32 func_ov094_022941ec(s32 a);
    void func_ov094_022941f8(u32 a);
    void func_ov094_022942f4(s32 a);
    void func_ov094_02294318(s32 a, s32 b);
    void *func_ov094_0229433c(s32 a);
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
    u32 unk_00[0x160 / 4];
};

class Unk_ov002_02204468 {
public:
    Unk_ov002_02204468();
    virtual ~Unk_ov002_02204468();
    virtual void vfunc_08();

    BOOL func_ov002_02200680();
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

    void func_ov002_02202200(LabelBalloon *a);
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

class Unk_ov002_022046cc {
public:
    Unk_ov002_022046cc();
    ~Unk_ov002_022046cc();

    void func_ov002_02203510(s32 a);
    void func_ov002_022036a4(s32 a);
    void func_ov002_02203900();

    u32 unk_00[0x164 / 4];
};

// Vtable 0x022044e4
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
    /* 0x91 */ u8 unk_91[3];
};

class Unk_ov108_02296b58;
typedef void (Unk_ov108_02296b58::*Unk_ov108_02296b58_Fn)();

static inline BOOL Unk_ov108_022961d8_Both()
{
    if (gTouchHeld != 0 && gTouchChanged != 0) {
        return TRUE;
    }
    return FALSE;
}

// Vtable 0x02296b58 (size 0x298c)
class Unk_ov108_02296b58 : public Unk_ov002_022044e4 {
public:
    Unk_ov108_02296b58()
        : unk_ac(), unk_1a0(), unk_2a0(), unk_2d8(), unk_d38(), unk_d60(), unk_2340(), unk_2400(), unk_2418(), unk_247c(), unk_277c(), unk_2884() {}

    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL onDraw();
    virtual BOOL vfunc_4c();
    virtual BOOL vfunc_50();
    virtual BOOL vfunc_54();
    virtual BOOL vfunc_58();
    virtual BOOL vfunc_5c();

    void func_ov108_02294d7c(u32 mask);
    void func_ov108_02294d8c(u32 mask);
    BOOL func_ov108_02294d9c(u32 mask);
    BOOL func_ov108_02294db0(void *pad, u32 x);
    void func_ov108_02294e18(void *pad, u32 x);
    void func_ov108_02294ec4(u32 idx, u32 x);
    void func_ov108_02294f28();
    void func_ov108_02294f58(u32 x);
    void func_ov108_02294fc8();
    void func_ov108_02294fec(u32 v);
    void func_ov108_02295038(u32 v);
    void func_ov108_02295074();
    void func_ov108_02295094();
    void func_ov108_022950b4();
    void func_ov108_022950e8();
    void func_ov108_02295134();
    void func_ov108_02295198();
    void func_ov108_022951ec();
    void func_ov108_02295254();
    s32 func_ov108_02295278();
    s32 func_ov108_02295288();
    void func_ov108_022952d0();
    void func_ov108_02295324(u32 a);
    void func_ov108_02295364(u32 a);
    void func_ov108_02295388(u32 a);
    void func_ov108_022953d8();
    void func_ov108_02295400();
    void func_ov108_0229542c();
    void func_ov108_02295458();
    void func_ov108_02295498();
    void func_ov108_022954ec();

    void func_ov108_02295558(u32 b);
    void func_ov108_02295588();
    void func_ov108_022955ac(u32 b);
    void func_ov108_022955f0();
    s32 func_ov108_02295614(u32 b);
    s32 func_ov108_02295648(u32 b);
    void func_ov108_0229567c();
    s32 func_ov108_022956a4(u32 b);
    s32 func_ov108_022956e0(u32 b);
    void *func_ov108_0229571c(u32 b);
    void func_ov108_02295750(u32 b, void *c);
    BOOL func_ov108_02295780(u32 b);
    u32 func_ov108_022957cc(u32 a, u32 b, u32 c);
    u32 func_ov108_0229580c(u32 b);
    u32 func_ov108_0229581c(u32 b);
    BOOL func_ov108_02295830(u32 b);
    void func_ov108_02295840();
    void func_ov108_02295850();
    void func_ov108_02295878();
    void func_ov108_022958c0(u32 a, u32 c);
    void func_ov108_02295928(u32 b);
    void func_ov108_02295974(u32 b);
    void func_ov108_02295a0c();
    void func_ov108_02295a2c();
    void func_ov108_02295a68();

    // state handlers (member-pointer table)
    void func_ov108_02295a84();
    void func_ov108_02295b0c();
    void func_ov108_02295b44();
    void func_ov108_02295b64();
    void func_ov108_02295bb4();
    void func_ov108_02295bf0();
    void func_ov108_02295c28();
    void func_ov108_02295c6c();
    void func_ov108_02295cb4();
    void func_ov108_02295d08();
    void func_ov108_02295d38();
    void func_ov108_02295d68();
    void func_ov108_02295d90();
    void func_ov108_02295dc0();
    void func_ov108_02295e0c();
    void func_ov108_02295e5c();
    void func_ov108_02295ed8();
    void func_ov108_02295f74();
    void func_ov108_02296048();
    void func_ov108_022960e0();
    void func_ov108_02296174();
    void func_ov108_022961bc();
    void func_ov108_022961d8();
    void func_ov108_0229626c();

    void func_ov108_022962ec();
    void func_ov108_02296310();
    void func_ov108_02296324();
    void func_ov108_02296344();
    void func_ov108_0229637c();
    void func_ov108_022963bc();
    void func_ov108_022963c4();
    void func_ov108_022963e0();
    void func_ov108_02296420();
    void func_ov108_022964a0();
    void func_ov108_022964ec();
    void func_ov108_0229654c();
    void func_ov108_02296588();
    void func_ov108_0229660c();
    void func_ov108_0229665c();

    /* 0x094 */ u32 unk_94;
    /* 0x098 */ s32 unk_98;
    /* 0x09c */ s32 unk_9c;
    /* 0x0a0 */ s32 unk_a0;
    /* 0x0a4 */ s32 unk_a4;
    /* 0x0a8 */ s32 unk_a8;
    /* 0x0ac */ Letter unk_ac;
    /* 0x1a0 */ Letter unk_1a0;
    /* 0x294 */ u8 unk_294;
    /* 0x295 */ u8 unk_295;
    /* 0x296 */ u8 unk_296;
    /* 0x297 */ u8 unk_297;
    /* 0x298 */ u8 unk_298;
    /* 0x299 */ u8 unk_299;
    /* 0x29a */ u8 unk_29a;
    /* 0x29b */ u8 unk_29b;
    /* 0x29c */ u8 unk_29c;
    /* 0x29d */ u8 unk_29d;
    /* 0x29e */ u8 unk_29e;
    /* 0x29f */ u8 unk_29f;
    /* 0x2a0 */ BgVramTaskPair unk_2a0[1];
    /* 0x2d8 */ Unk_ov094_02294a50 unk_2d8;
    /* 0xd38 */ Unk_ov094_02294bd4 unk_d38;
    /* 0xd60 */ Unk_ov094_02292d6c unk_d60;
    /* 0xec0 */ u32 unk_ec0[0x1480 / 4];
    /* 0x2340 */ Unk_ov002_02204468 unk_2340;
    /* 0x2400 */ Unk_ov002_02204604 unk_2400;
    /* 0x2418 */ Unk_ov002_02204614 unk_2418;
    /* 0x247c */ Unk_ov002_02204558 unk_247c;
    /* 0x277c */ Unk_ov002_022040ec unk_277c;
    /* 0x2884 */ Unk_ov002_022046cc unk_2884;
};

extern "C" Unk_ov108_02296b58 *func_ov108_02296984() { return new Unk_ov108_02296b58(); }

struct Unk_ov108_SceneEntry {
    Unk_ov108_02296b58 *(*create)();
    u16 a;
    u16 b;
};

// Scene registration entry read by main: factory, then two ids
extern "C" Unk_ov108_SceneEntry data_ov108_02296a78 = {func_ov108_02296984, 0x9b, 0x9f};

BOOL Unk_ov108_02296b58::vfunc_00() {
    func_ov108_02296420();
    func_ov002_02200a50(0);
    func_ov002_02200a60(0);
    return TRUE;
}

BOOL Unk_ov108_02296b58::vfunc_0c() {
    ((Unk_ov092_02291ec8 *)ProcBase_GetParent(this))->func_ov092_02291c5c();
    func_ov108_022963e0();
    return TRUE;
}

BOOL Unk_ov108_02296b58::onDraw() {
    s32 t;
    func_ov002_02201b28(&unk_247c);
    if (!func_ov108_02294d9c(1)) {
        return TRUE;
    }
    unk_2340.vfunc_08();
    if (MenuCtrl_IsButtons()) {
        ((Unk_ov002_02202d98 *)&unk_2418)->func_ov002_02202844();
    }
    func_ov108_02295458();
    if (func_ov108_02294d9c(2)) {
        unk_2884.func_ov002_022036a4(unk_98);
        t = unk_98 - 0x10;
        func_ov094_022932d0(&unk_2d8, 0, t);
        unk_d38.func_ov094_022941a0(0, t);
        func_ov094_0229277c(&unk_d60, t);
    }
    return TRUE;
}

BOOL Unk_ov108_02296b58::vfunc_4c() {
    static Unk_ov108_02296b58_Fn tbl[5] = {
        &Unk_ov108_02296b58::func_ov108_0229660c, &Unk_ov108_02296b58::func_ov108_02296588,
        &Unk_ov108_02296b58::func_ov108_0229654c, &Unk_ov108_02296b58::func_ov108_022964ec,
        &Unk_ov108_02296b58::func_ov108_022964a0};
    func_ov108_0229637c();
    (this->*tbl[unk_8c])();
    func_ov108_02296344();
    return TRUE;
}

void Unk_ov108_02296b58::func_ov108_0229665c() {
    static Unk_ov108_02296b58_Fn tbl[24] = {
        &Unk_ov108_02296b58::func_ov108_0229626c, &Unk_ov108_02296b58::func_ov108_022961d8,
        &Unk_ov108_02296b58::func_ov108_022961bc, &Unk_ov108_02296b58::func_ov108_02296174,
        &Unk_ov108_02296b58::func_ov108_022960e0, &Unk_ov108_02296b58::func_ov108_02296048,
        &Unk_ov108_02296b58::func_ov108_02295f74, &Unk_ov108_02296b58::func_ov108_02295ed8,
        &Unk_ov108_02296b58::func_ov108_02295e5c, &Unk_ov108_02296b58::func_ov108_02295e0c,
        &Unk_ov108_02296b58::func_ov108_02295dc0, &Unk_ov108_02296b58::func_ov108_02295d90,
        &Unk_ov108_02296b58::func_ov108_02295d68, &Unk_ov108_02296b58::func_ov108_02295d38,
        &Unk_ov108_02296b58::func_ov108_02295d08, &Unk_ov108_02296b58::func_ov108_02295cb4,
        &Unk_ov108_02296b58::func_ov108_02295c6c, &Unk_ov108_02296b58::func_ov108_02295c28,
        &Unk_ov108_02296b58::func_ov108_02295bf0, &Unk_ov108_02296b58::func_ov108_02295bb4,
        &Unk_ov108_02296b58::func_ov108_02295b64, &Unk_ov108_02296b58::func_ov108_02295b44,
        &Unk_ov108_02296b58::func_ov108_02295b0c, &Unk_ov108_02296b58::func_ov108_02295a84};
    (this->*tbl[unk_8d])();
}

BOOL Unk_ov108_02296b58::vfunc_50() {
    func_ov108_022963c4();
    func_ov108_0229665c();
    func_ov108_022963bc();
    return TRUE;
}

BOOL Unk_ov108_02296b58::vfunc_54() { return TRUE; }

BOOL Unk_ov108_02296b58::vfunc_58() { return TRUE; }

BOOL Unk_ov108_02296b58::vfunc_5c() {
    ProcBase_RequestDelete();
    return TRUE;
}

void Unk_ov108_02296b58::func_ov108_0229660c() {
    func_ov108_02296324();
    func_ov108_02296310();
    func_ov002_02200a50(1);
}

void Unk_ov108_02296b58::func_ov108_02296588() {
    func_ov108_022962ec();
    unk_2884.func_ov002_02203510(0x65);
    func_ov094_022937a0(&unk_2d8);
    func_ov094_02293d2c(&unk_d38);
    func_ov108_0229567c();
    func_ov002_022008e0(8, 0, 0, 0x30);
    Gfx2d_ShowLayer(6);
    func_ov002_02200840(6, 0, -16);
    func_ov002_02200a50(2);
    func_ov108_02294d8c(1);
    func_ov108_02294d8c(2);
    unk_98 = func_ov002_02200920();
}

void Unk_ov108_02296b58::func_ov108_0229654c() {
    if (func_ov002_02200908(0)) {
        func_ov002_02200a60(2);
        func_ov108_02295a0c();
    }
    func_ov002_02200840(6, 0, -16);
    unk_98 = func_ov002_02200920();
}

void Unk_ov108_02296b58::func_ov108_022964ec() {
    unk_2340.func_ov002_022006e4(1);
    func_ov108_02295254();
    ((Unk_ov092_02291ec8 *)ProcBase_GetParent(this))->func_ov092_02291ce4(0x44, 1);
    func_ov002_022008c4(8, 0, 0, 0x30);
    func_ov002_02200840(6, 0, -16);
    func_ov002_02200a50(4);
    unk_98 = func_ov002_02200920();
}

void Unk_ov108_02296b58::func_ov108_022964a0() {
    if (func_ov002_022008fc(0)) {
        Gfx2d_ResetLayer(6);
        func_ov108_02294d7c(2);
        func_ov108_02294d7c(1);
        func_ov002_02200a60(5);
    } else {
        func_ov002_02200840(6, 0, -16);
    }
    unk_98 = func_ov002_02200920();
}

void Unk_ov108_02296b58::func_ov108_02296420() {
    unk_94 = 0;
    func_ov094_022939c0(&unk_2d8, 2);
    unk_d38.func_ov094_02294644(2);
    func_ov094_02292d30(&unk_d60, 6);
    unk_296 = 0x16;
    unk_2400.func_ov002_022027a4();
    unk_294 = 0;
    unk_298 = 0xb;
    unk_247c.func_ov002_02202310(3, 1, 0);
    unk_29e = 0;
}

void Unk_ov108_02296b58::func_ov108_022963e0() {
    func_ov108_02295840();
    func_ov094_02292a80(&unk_d60);
    func_ov094_02293998(&unk_2d8);
    func_ov002_02201b04(&unk_247c);
    unk_2884.func_ov002_02203900();
}

void Unk_ov108_02296b58::func_ov108_022963c4() {
    func_ov108_0229637c();
    unk_2418.vfunc_0c();
}

void Unk_ov108_02296b58::func_ov108_022963bc() {
    func_ov108_02296344();
}

void Unk_ov108_02296b58::func_ov108_0229637c() {
    func_ov108_02295840();
    func_ov094_02292acc(&unk_d60);
    func_ov094_022939a0(&unk_2d8);
    unk_d38.func_ov094_0229462c();
    unk_2884.func_ov002_02203900();
}

void Unk_ov108_02296b58::func_ov108_02296344() {
    func_ov002_02201b58(&unk_247c);
    func_ov094_02292aa4(&unk_d60);
    if (unk_2340.func_ov002_0220071c()) {
        func_ov108_022954ec();
    }
}

void Unk_ov108_02296b58::func_ov108_02296324() {
    Gfx2d_SetLayerPriority(6, 2);
    Gfx2d_SetLayerControl(6, 0, 0, 0);
}

void Unk_ov108_02296b58::func_ov108_02296310() {
    func_ov094_02292d1c(&unk_d60, 0);
}

void Unk_ov108_02296b58::func_ov108_022962ec() {
    func_ov094_02292ae0(&unk_d60);
    func_ov002_02203920(&unk_2884);
}

void Unk_ov108_02296b58::func_ov108_0229626c() {
    if (func_ov002_02200a14(1)) {
        func_ov108_02295a2c();
    } else {
        if (Unk_ov108_022961d8_Both()) {
            s32 r = func_ov108_022957cc(gTouchCurX, gTouchCurY + 0x10, 1);
            if (r != 0x16) {
                func_ov108_02295974(r);
            } else {
                if (((Unk_ov002_02202fac *)&unk_2884)->func_ov002_02203110(9)) {
                    func_ov108_02295850();
                }
            }
        }
    }
}

void Unk_ov108_02296b58::func_ov108_022961d8() {
    if (gTouchHeld == 0) {
        if (func_ov108_02294d9c(4)) {
            func_ov002_02200a58(3);
            func_ov108_0229665c();
        } else {
            func_ov002_02200a58(0);
            unk_2340.func_ov002_022006a4(0x3c);
        }
    } else {
        if (func_ov108_02294d9c(4) && unk_2340.func_ov002_02200680()) {
            if (unk_29e != 0) {
                unk_29e--;
            } else {
                func_ov108_02294ec4(unk_295, 1);
                func_ov002_02200a58(2);
            }
        } else {
            unk_2340.func_ov002_022006c0();
        }
    }
}

void Unk_ov108_02296b58::func_ov108_022961bc() {
    if (gTouchHeld == 0) {
        func_ov002_02200a58(5);
    }
}

void Unk_ov108_02296b58::func_ov108_02296174() {
    if (unk_2340.func_ov002_02200680()) {
        if (unk_29e != 0) {
            unk_29e--;
        } else {
            func_ov108_02294ec4(unk_295, 1);
            func_ov002_02200a58(2);
        }
    }
}

void Unk_ov108_02296b58::func_ov108_022960e0() {
    func_ov108_0229542c();
    func_ov108_02295588();
    s32 r = func_ov108_022957cc(unk_a4 + 8, unk_a8 + 8, 0);
    if (r != 0x16) {
        if (gTouchHeld == 0) {
            if (func_ov108_02295648(r) != 0 || func_ov108_02295780(r) == 0) {
                func_ov108_022958c0(unk_297, 4);
            } else {
                func_ov108_02295a0c();
            }
        } else {
            func_ov108_02295558(r);
        }
    } else {
        if (gTouchHeld == 0) {
            func_ov108_022958c0(unk_297, 4);
        }
    }
}

void Unk_ov108_02296b58::func_ov108_02296048() {
    if (((Unk_ov002_022013ac *)&unk_247c)->func_ov002_022017b4()) {
        if (func_ov002_02200a14(1)) {
            func_ov108_02294f28();
        } else if (Unk_ov108_022961d8_Both()) {
            s32 r = ((Unk_ov002_022013ac *)&unk_247c)->func_ov002_022014c0(gTouchCurX, gTouchCurY);
            if (r >= 0) {
                func_ov002_02201aa0(&unk_247c, r, 1);
                unk_29c = unk_247c.unk_2f9[r];
                func_ov002_02200a58(0x14);
            }
        }
    }
}

void Unk_ov108_02296b58::func_ov108_02295f74() {
    if (func_ov002_022009d4()) {
        func_ov108_02295a68();
        unk_2340.func_ov002_022006e4(1);
    } else if (func_ov108_02294db0((void *)func_ov002_022009c8(), 0)) {
        func_ov108_02295498();
        func_ov108_022951ec();
        unk_2340.func_ov002_022006e4(0);
    } else if (func_ov108_02295648(unk_298) == 0 && (gPad[1] & 1) != 0) {
        if (func_ov108_02295830(unk_298)) {
            if (func_ov108_02295614(unk_298) == 0) {
                func_ov108_02294ec4(unk_298, 0);
            }
        } else {
            func_ov108_02295074();
        }
    } else if ((gPad[1] & 2) != 0) {
        func_ov108_02295254();
        func_ov108_02295850();
        unk_2340.func_ov002_022006e4(0);
    } else {
        unk_2340.func_ov002_022006c0();
    }
}

void Unk_ov108_02296b58::func_ov108_02295ed8() {
    if (func_ov108_02294db0((void *)func_ov002_022009c8(), 1)) {
        func_ov108_02295498();
        func_ov108_022951ec();
        unk_2340.func_ov002_022006e4(0);
    } else {
        u16 f = gPad[1];
        if ((f & 1) != 0) {
            if (func_ov108_02295614(unk_298)) {
                func_ov108_02295038(unk_298);
            } else {
                func_ov108_02294fec(unk_298);
            }
        } else if ((f & 2) != 0) {
            func_ov108_02295038(unk_297);
        } else {
            func_ov108_02295400();
            unk_2340.func_ov002_022006c0();
        }
    }
}

void Unk_ov108_02296b58::func_ov108_02295e5c() {
    if (func_ov002_022009d4()) {
        func_ov108_02294f28();
    } else if (func_ov002_022019d0(&unk_247c, func_ov002_022009c8(), &unk_29d, 0)) {
        func_ov108_02295198();
    } else {
        u16 f = gPad[1];
        if ((f & 1) != 0) {
            ((Unk_ov002_0220464c *)&unk_2418)->func_ov002_02202b68();
            func_ov002_02200a58(9);
        } else if ((f & 2) != 0) {
            func_ov108_02295134();
        }
    }
}

void Unk_ov108_02296b58::func_ov108_02295e0c() {
    if (((HandCursor *)&unk_2418)->isAnimDone()) {
        func_ov002_02201aa0(&unk_247c, unk_29d, 1);
        unk_29c = unk_247c.unk_2f9[unk_29d];
        func_ov002_02200a58(0x14);
    }
}

void Unk_ov108_02296b58::func_ov108_02295dc0() {
    if (((Unk_ov002_02202d98 *)&unk_2418)->func_ov002_022028f0() == 0) {
        func_ov002_02200a58(unk_29b);
        if (unk_29b == 6) {
            func_ov108_022955ac(unk_298);
        }
        func_ov108_0229665c();
    }
    func_ov108_02295400();
}

void Unk_ov108_02296b58::func_ov108_02295d90() {
    if (((HandCursor *)&unk_2418)->isAnimDone()) {
        ((Unk_ov002_02202fac *)&unk_2884)->func_ov002_022030ac(9);
        func_ov002_02200a58(0x17);
    }
}

void Unk_ov108_02296b58::func_ov108_02295d68() {
    if (((HandCursor *)&unk_2418)->isAnimDone()) {
        func_ov108_02295094();
        func_ov002_02200a58(6);
    }
}

void Unk_ov108_02296b58::func_ov108_02295d38() {
    if (((Unk_ov002_02202d98 *)&unk_2418)->func_ov002_02202928()) {
        func_ov108_02295928(unk_298);
        func_ov002_02200a58(0xe);
    }
}

void Unk_ov108_02296b58::func_ov108_02295d08() {
    if (((HandCursor *)&unk_2418)->isAnimDone()) {
        func_ov002_02200a58(unk_29b);
    }
    func_ov108_02295400();
}

void Unk_ov108_02296b58::func_ov108_02295cb4() {
    if (((Unk_ov002_02202d98 *)&unk_2418)->func_ov002_02202928() == 0) {
        u32 a = unk_29a;
        if (unk_298 == a) {
            func_ov108_02295780(a);
            func_ov108_02295498();
            func_ov002_02200a58(6);
        } else {
            func_ov108_022958c0(a, 4);
        }
    } else {
        func_ov108_02295400();
    }
}

void Unk_ov108_02296b58::func_ov108_02295c6c() {
    if (((Unk_ov002_02202d98 *)&unk_2418)->func_ov002_022028fc() == 0) {
        func_ov108_02295324(unk_29a);
        func_ov108_02294d8c(0x40);
        func_ov002_02200a58(0x11);
        func_ov108_02295498();
    } else {
        func_ov002_02200a58(6);
    }
}

void Unk_ov108_02296b58::func_ov108_02295c28() {
    if (((HandCursor *)&unk_2418)->isAnimDone()) {
        func_ov002_02200a58(unk_29b);
    }
    if (((Unk_ov002_02202d98 *)&unk_2418)->func_ov002_02202928()) {
        func_ov108_02294d7c(0x40);
        func_ov108_02295400();
    }
}

void Unk_ov108_02296b58::func_ov108_02295bf0() {
    if (unk_2400.func_ov002_02202718()) {
        func_ov108_02295364(unk_297);
        func_ov108_02295a0c();
    } else {
        func_ov108_022953d8();
    }
}

void Unk_ov108_02296b58::func_ov108_02295bb4() {
    if (((Unk_ov002_022013ac *)&unk_247c)->func_ov002_022017b4()) {
        if (MenuCtrl_IsButtons()) {
            func_ov108_022950e8();
            func_ov002_02200a58(8);
        } else {
            func_ov002_02200a58(5);
        }
    }
}

void Unk_ov108_02296b58::func_ov108_02295b64() {
    if (func_ov002_02201a28(&unk_247c)) {
        func_ov002_02202064(&unk_247c, 0);
        unk_2340.func_ov002_022006e4(1);
        if (((HandCursor *)&unk_2418)->getAnim()) {
            func_ov108_022950b4();
        }
        func_ov002_02200a58(0x15);
    }
}

void Unk_ov108_02296b58::func_ov108_02295b44() {
    if (((Unk_ov002_022013ac *)&unk_247c)->func_ov002_022017a4()) {
        func_ov108_02294fc8();
    }
}

void Unk_ov108_02296b58::func_ov108_02295b0c() {
    if (unk_277c.func_ov002_02204234(0)) {
        func_ov002_02200a58(unk_29b);
        ((HandCursor *)&unk_2418)->enableObjWindow();
    }
}

void Unk_ov108_02296b58::func_ov108_02295a84() {
    if (((Unk_ov002_02202fac *)&unk_2884)->func_ov002_0220308c()) {
        if (((HandCursor *)&unk_2418)->getAnim()) {
            s32 r4 = ((Unk_ov002_02202fac *)&unk_2884)->func_ov002_0220306c();
            s32 r6 = ((Unk_ov002_02202fac *)&unk_2884)->func_ov002_022030f4(-1);
            s32 r2 = ((Unk_ov002_02202fac *)&unk_2884)->func_ov002_022030b8(-1);
            ((Unk_ov002_02202d98 *)&unk_2418)->func_ov002_02202a40(r4 + r6, r4 + r2);
        }
    } else {
        func_0206ecf8(0);
        unk_8c = 3;
        func_ov002_02200a60(1);
        unk_2340.func_ov002_022006e4(1);
        func_ov108_02295254();
    }
}

void Unk_ov108_02296b58::func_ov108_02295a68() {
    func_ov108_02295254();
    func_ov108_022955f0();
    func_ov002_02200a58(0);
}

void Unk_ov108_02296b58::func_ov108_02295a2c() {
    unk_296 = 0x16;
    func_ov108_022952d0();
    func_ov002_02200980();
    func_ov108_02295498();
    func_ov002_02200a58(6);
    func_ov108_022955ac(unk_298);
}

void Unk_ov108_02296b58::func_ov108_02295a0c() {
    if (MenuCtrl_IsTouch()) {
        func_ov108_02295a68();
    } else {
        func_ov108_02295a2c();
    }
}

void Unk_ov108_02296b58::func_ov108_02295974(u32 b) {
    unk_295 = b;
    func_ov002_02200a58(1);
    u32 r6 = gTouchCurX;
    u32 r7 = gTouchCurY;
    unk_9c = func_ov108_022956e0(unk_295) - r6;
    unk_a0 = func_ov108_022956a4(unk_295) - r7;
    unk_296 = b;
    unk_2340.func_ov002_022006b8();
    unk_2340.func_ov002_022006c0();
    unk_29e = 2;
    if (func_ov108_02295648(b)) {
        func_ov108_02294d7c(4);
    } else {
        func_ov108_02294d8c(4);
    }
}

void Unk_ov108_02296b58::func_ov108_02295928(u32 b) {
    unk_297 = b;
    unk_2340.func_ov002_022006e4(1);
    func_ov108_02295388(b);
    if (unk_294 == 1) {
        unk_29b = 7;
    }
    func_ov108_02295400();
}

void Unk_ov108_02296b58::func_ov108_022958c0(u32 a, u32 c) {
    unk_297 = a;
    unk_2400.func_ov002_022026f4(unk_a4, unk_a8);
    s32 r7 = func_ov108_022956e0(a);
    s32 r2 = func_ov108_022956a4(a);
    unk_2400.func_ov002_022026c4(r7, r2, c);
    unk_2400.func_ov002_02202718();
    func_ov108_022953d8();
    func_ov002_02200a58(0x12);
}

void Unk_ov108_02296b58::func_ov108_02295878() {
    func_0206ed2c((u8)(unk_299 - 0xb));
    func_0206ecf8(1);
    unk_8c = 3;
    func_ov002_02200a60(1);
    unk_2340.func_ov002_022006e4(1);
    func_ov108_02295254();
}

void Unk_ov108_02296b58::func_ov108_02295850() {
    ((Unk_ov002_02202fac *)&unk_2884)->func_ov002_022030ac(9);
    func_ov002_02200a58(0x17);
    Snd_PlaySe(0x28);
}

void Unk_ov108_02296b58::func_ov108_02295840() {
    ((BgVramTask *)&unk_2a0)->cancel();
}

BOOL Unk_ov108_02296b58::func_ov108_02295830(u32 b) {
    if (b >= 0xb && b <= 0x14) {
        return TRUE;
    }
    return FALSE;
}

u32 Unk_ov108_02296b58::func_ov108_0229581c(u32 b) {
    if (b >= 0xb && b <= 0x14) {
        return (u8)(b - 0xb);
    }
    return 0;
}

u32 Unk_ov108_02296b58::func_ov108_0229580c(u32 b) {
    if (b <= 9) {
        return (u8)(b + 0xb);
    }
    return 0x16;
}

u32 Unk_ov108_02296b58::func_ov108_022957cc(u32 a, u32 b, u32 c) {
    u32 r6 = unk_d38.func_ov094_02294610(a, b);
    if (r6 != 0x37) {
        if (c != 0) {
            if (func_ov094_02293d80(&unk_d38, r6) != 0) {
                return 0x16;
            }
        }
        return func_ov108_0229580c(r6);
    }
    return 0x16;
}

BOOL Unk_ov108_02296b58::func_ov108_02295780(u32 b) {
    if (func_ov108_02295614(b) == 0) {
        func_02065e70(&unk_1a0, func_ov108_0229571c(b));
        func_ov108_02295750(unk_297, &unk_1a0);
    }
    func_ov108_02295364(b);
    return TRUE;
}

void Unk_ov108_02296b58::func_ov108_02295750(u32 b, void *c) {
    if (func_ov108_02295830(b)) {
        unk_d38.func_ov094_02294318(func_ov108_0229581c(b), (s32)c);
    }
}

void *Unk_ov108_02296b58::func_ov108_0229571c(u32 b) {
    if (func_ov108_02295830(b)) {
        return unk_d38.func_ov094_0229433c(func_ov108_0229581c(b));
    }
    return 0;
}

s32 Unk_ov108_02296b58::func_ov108_022956e0(u32 b) {
    if (func_ov108_02295830(b)) {
        return func_ov094_02293df8(&unk_d38, func_ov108_0229581c(b));
    }
    if (b == 0x15) {
        return 0xbc;
    }
    return 0;
}

s32 Unk_ov108_02296b58::func_ov108_022956a4(u32 b) {
    if (func_ov108_02295830(b)) {
        return func_ov094_02293d9c(&unk_d38, func_ov108_0229581c(b)) - 0x10;
    }
    if (b == 0x15) {
        return 0xb6;
    }
    return 0;
}

void Unk_ov108_02296b58::func_ov108_0229567c() {
    func_ov094_02293318(&unk_2d8, 0, 0xe);
    unk_d38.func_ov094_022941f8(3);
}

s32 Unk_ov108_02296b58::func_ov108_02295648(u32 b) {
    if (func_ov108_02295830(b)) {
        return unk_d38.func_ov094_022941ec(func_ov108_0229581c(b));
    }
    return 0;
}

s32 Unk_ov108_02296b58::func_ov108_02295614(u32 b) {
    if (func_ov108_02295830(b)) {
        return func_ov094_02293d80(&unk_d38, func_ov108_0229581c(b));
    }
    return 1;
}

void Unk_ov108_02296b58::func_ov108_022955f0() {
    func_ov094_022935dc(&unk_2d8);
    unk_d38.func_ov094_022943f8();
}

void Unk_ov108_02296b58::func_ov108_022955ac(u32 b) {
    if (func_ov108_02295830(b)) {
        unk_d38.func_ov094_022943bc(func_ov108_0229581c(b));
        func_ov094_022935dc(&unk_2d8);
    } else {
        func_ov108_022955f0();
    }
}

void Unk_ov108_02296b58::func_ov108_02295588() {
    func_ov094_0229358c(&unk_2d8);
    unk_d38.func_ov094_022943b0();
}

void Unk_ov108_02296b58::func_ov108_02295558(u32 b) {
    if (func_ov108_02295830(b)) {
        unk_d38.func_ov094_022943a4(func_ov108_0229581c(b));
    }
}

void Unk_ov108_02296b58::func_ov108_022954ec() {
    s32 a = func_ov108_022956e0(unk_296) - 0x6d;
    s32 b = func_ov108_022956a4(unk_296) - 0x78;
    if (MenuCtrl_IsButtons()) {
        b -= 8;
    }
    ((LabelBalloon *)&unk_2340)->setPos(a, b);
    if (func_ov108_02295830(unk_296)) {
        s32 c = func_ov108_0229581c(unk_296);
        unk_d38.func_ov094_02294420(&unk_2340, c);
    }
}

void Unk_ov108_02296b58::func_ov108_02295498() {
    if (func_ov108_02295830(unk_298)) {
        if (func_ov108_02295614(unk_298)) {
            unk_2340.func_ov002_022006b0();
        } else {
            unk_296 = unk_298;
            unk_2340.func_ov002_022006b8();
        }
    } else {
        unk_2340.func_ov002_022006b0();
    }
}

void Unk_ov108_02296b58::func_ov108_02295458() {
    if (!func_ov108_02294d9c(0x40)) {
        if (unk_294 != 0) {
            if (unk_294 == 1) {
                unk_d38.func_ov094_0229405c(unk_a4, unk_a8, &unk_ac);
            }
        }
    }
}

void Unk_ov108_02296b58::func_ov108_0229542c() {
    unk_a4 = unk_9c + gTouchCurX;
    unk_a8 = unk_a0 + gTouchCurY;
}

void Unk_ov108_02296b58::func_ov108_02295400() {
    unk_a4 = ((Unk_ov002_02202d98 *)&unk_2418)->func_ov002_022028c8() - 2;
    unk_a8 = ((Unk_ov002_02202d98 *)&unk_2418)->func_ov002_022028a0() - 4;
}

void Unk_ov108_02296b58::func_ov108_022953d8() {
    unk_a4 = unk_2400.func_ov002_02202710();
    unk_a8 = unk_2400.func_ov002_02202708();
}

void Unk_ov108_02296b58::func_ov108_02295388(u32 a) {
    if (func_ov108_02295830(a)) {
        s32 r4 = func_ov108_0229581c(a);
        unk_294 = 1;
        func_02065e70(&unk_ac, unk_d38.func_ov094_0229433c(r4));
        unk_d38.func_ov094_022942f4(r4);
    }
}

void Unk_ov108_02296b58::func_ov108_02295364(u32 a) {
    if (unk_294 == 1) {
        func_ov108_02295750(a, &unk_ac);
    }
    unk_294 = 0;
}

void Unk_ov108_02296b58::func_ov108_02295324(u32 a) {
    if (unk_294 == 1) {
        func_02065e70(&unk_1a0, &unk_ac);
        func_ov108_02295388(a);
        func_ov108_02295750(a, &unk_1a0);
    }
}

void Unk_ov108_02296b58::func_ov108_022952d0() {
    s32 a = func_ov108_02295288();
    s32 b = func_ov108_02295278();
    ((Unk_ov002_02202d98 *)&unk_2418)->func_ov002_02202a40(a, b);
    if (unk_298 == 0x15) {
        ((Unk_ov002_0220464c *)&unk_2418)->func_ov002_02202d00(7);
    } else {
        ((Unk_ov002_0220464c *)&unk_2418)->func_ov002_02202d00(1);
    }
    func_ov108_02295094();
}

s32 Unk_ov108_02296b58::func_ov108_02295288() {
    s32 r = func_ov108_022956e0(unk_298);
    if (func_ov108_02294d9c(0x20)) {
        r += 0x100;
    } else if (func_ov108_02294d9c(0x10)) {
        r -= 0x100;
    }
    return r + 8;
}

s32 Unk_ov108_02296b58::func_ov108_02295278() { return func_ov108_022956a4(unk_298); }

void Unk_ov108_02296b58::func_ov108_02295254() {
    ((Unk_ov002_0220464c *)&unk_2418)->func_ov002_02202d00(0);
    unk_2418.vfunc_0c();
}

void Unk_ov108_02296b58::func_ov108_022951ec() {
    if (unk_298 == 0x15) {
        ((Unk_ov002_0220464c *)&unk_2418)->func_ov002_02202ca0();
    } else {
        ((Unk_ov002_0220464c *)&unk_2418)->func_ov002_02202c40();
    }
    s32 a = func_ov108_02295288();
    s32 b = func_ov108_02295278();
    ((Unk_ov002_02202d98 *)&unk_2418)->func_ov002_022029e8(a, b, 3, 1);
    unk_29b = unk_8d;
    func_ov002_02200a58(0xa);
}

void Unk_ov108_02296b58::func_ov108_02295198() {
    s32 a = ((Unk_ov002_022013ac *)&unk_247c)->func_ov002_022014a4();
    s32 b = ((Unk_ov002_022013ac *)&unk_247c)->func_ov002_02201498(unk_29d);
    ((Unk_ov002_02202d98 *)&unk_2418)->func_ov002_02202a18(a, b, 2);
    unk_29b = unk_8d;
    func_ov002_02200a58(0xa);
}

void Unk_ov108_02296b58::func_ov108_02295134() {
    unk_29c = 1;
    unk_29d = func_ov002_02201a70(&unk_247c);
    s32 a = ((Unk_ov002_022013ac *)&unk_247c)->func_ov002_022014a4();
    s32 b = ((Unk_ov002_022013ac *)&unk_247c)->func_ov002_02201498(unk_29d);
    ((Unk_ov002_02202d98 *)&unk_2418)->func_ov002_02202a40(a, b);
    ((HandCursor *)&unk_2418)->setAnimAtEnd(8);
    func_ov002_02200a58(0x14);
}

void Unk_ov108_02296b58::func_ov108_022950e8() {
    unk_29d = 0;
    s32 a = ((Unk_ov002_022013ac *)&unk_247c)->func_ov002_022014a4();
    s32 b = ((Unk_ov002_022013ac *)&unk_247c)->func_ov002_02201498(unk_29d);
    ((Unk_ov002_02202d98 *)&unk_2418)->func_ov002_02202a40(a, b);
    ((Unk_ov002_0220464c *)&unk_2418)->func_ov002_02202d00(7);
}

void Unk_ov108_02296b58::func_ov108_022950b4() {
    s32 a = func_ov108_02295288();
    s32 b = func_ov108_02295278();
    ((Unk_ov002_02202d98 *)&unk_2418)->func_ov002_02202a40(a, b);
    ((Unk_ov002_0220464c *)&unk_2418)->func_ov002_02202d00(1);
}

void Unk_ov108_02296b58::func_ov108_02295094() {
    ((Unk_ov002_02202d98 *)&unk_2418)->func_ov002_02202a78();
    unk_2418.vfunc_0c();
}

void Unk_ov108_02296b58::func_ov108_02295074() {
    ((Unk_ov002_0220464c *)&unk_2418)->func_ov002_02202b68();
    func_ov002_02200a58(0xb);
}

void Unk_ov108_02296b58::func_ov108_02295038(u32 v) {
    unk_2340.func_ov002_022006e4(1);
    unk_29a = v;
    ((Unk_ov002_0220464c *)&unk_2418)->func_ov002_02202d00(5);
    func_ov002_02200a58(0xf);
}

void Unk_ov108_02296b58::func_ov108_02294fec(u32 v) {
    unk_2340.func_ov002_022006e4(1);
    unk_29b = unk_8d;
    unk_29a = v;
    ((Unk_ov002_0220464c *)&unk_2418)->func_ov002_02202d00(6);
    func_ov002_02200a58(0x10);
}

void Unk_ov108_02296b58::func_ov108_02294fc8() {
    switch (unk_29c) {
    case 0:
        func_ov108_02295878();
        break;
    case 1:
    default:
        func_ov108_02295a0c();
        break;
    }
}

void Unk_ov108_02296b58::func_ov108_02294f58(u32 x) {
    ((Unk_ov002_022013ac *)&unk_247c)->func_ov002_0220160c((Unk_ov002_022013ac_Rec *)unk_247c.unk_2f4, 0);
    s32 a = func_ov108_022956e0(unk_299);
    s32 b = func_ov108_022956a4(unk_299);
    if (x != 0) {
        unk_247c.func_ov002_02202200((LabelBalloon *)&unk_2340);
    } else {
        unk_247c.func_ov002_0220229c(a, b);
    }
    func_ov002_02202098(&unk_247c, 0);
    func_ov002_02200a58(0x13);
}

void Unk_ov108_02296b58::func_ov108_02294f28() {
    unk_29c = 1;
    func_ov108_022950b4();
    func_ov002_02202064(&unk_247c, 0);
    func_ov002_02200a58(0x15);
}

void Unk_ov108_02296b58::func_ov108_02294ec4(u32 idx, u32 x) {
    unk_299 = idx;
    func_ov002_022016e4(&unk_247c.unk_2f4, 1);
    func_ov108_0229571c(idx);
    func_ov002_02201700(&unk_247c.unk_2f4, 0xd, 0);
    func_ov002_02201700(&unk_247c.unk_2f4, 2, 1);
    func_ov108_02295254();
    if (x == 0) {
        unk_2340.func_ov002_022006e4(1);
    }
    func_ov108_02294f58(x);
}

void Unk_ov108_02296b58::func_ov108_02294e18(void *pad, u32 x) {
    s32 r4 = unk_298 - 0xb;
    s32 r6 = r4 >> 1;
    if (func_ov002_0220126c(pad)) {
        if ((r4 & 1) > 0) {
            unk_298 = unk_298 - 1;
        }
    } else if (func_ov002_0220125c(pad)) {
        if ((r4 & 1) < 1) {
            unk_298 = unk_298 + 1;
        }
    }
    if (func_ov108_02295830(unk_298)) {
        if (!func_ov108_02294d9c(0x30)) {
            if (func_ov002_0220128c(pad)) {
                if (r6 > 0) {
                    unk_298 = unk_298 - 2;
                }
            } else if (func_ov002_0220127c(pad)) {
                if (r6 < 4) {
                    unk_298 = unk_298 + 2;
                } else {
                    unk_298 = 0x15;
                }
            }
        }
    }
}

BOOL Unk_ov108_02296b58::func_ov108_02294db0(void *pad, u32 x) {
    u8 old = unk_298;
    func_ov108_02294d7c(0x30);
    if (pad == 0) {
        return FALSE;
    }
    if (func_ov108_02295830(unk_298)) {
        func_ov108_02294e18(pad, x);
    } else if (unk_298 == 0x15) {
        if (func_ov002_0220128c(pad)) {
            unk_298 = 0x13;
        }
    }
    if (old != unk_298) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov108_02296b58::func_ov108_02294d9c(u32 mask) {
    if (unk_94 & mask) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov108_02296b58::func_ov108_02294d8c(u32 mask) { unk_94 = unk_94 | mask; }

// ---------------------------------------------------------------------------------------------

void Unk_ov108_02296b58::func_ov108_02294d7c(u32 mask) { unk_94 = unk_94 & ~mask; }

