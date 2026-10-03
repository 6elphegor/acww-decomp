#define postCreate() postCreate(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef postCreate
#undef vfunc_14

// ov106: scene overlay (class Unk_ov106_02298180, vtable 0x02298180, 0x3f80 bytes).

class Unk_ov106_02298180;
typedef void (Unk_ov106_02298180::*Unk_ov106_02298180_Fn)();

struct Unk_ov106_SceneEntry {
    void *factory;
    u16 a;
    u16 b;
};

extern "C" {
s32 _ZN18Unk_ov094_02294bd419func_ov094_02294610Eii(void *self);
void _ZN18Unk_ov002_0220455819func_ov002_02202200EP12LabelBalloon(void *self, void *p, s32 x);
extern u8 gTouchHeld;
extern u8 gTouchChanged;
extern u8 gTouchCurX;
extern u8 gTouchCurY;
extern u8 gTouchPressY;
extern u8 gTouchPressX;
extern u8 data_021edb68;
extern s32 gCurrentHeap;
extern u16 gPad[];

void func_020020b8(s32 a);
void func_020021a0(s32 a);
void func_0200261c(const char *a, s32 b, s32 c, s32 d, s32 e, s32 f);
void func_02002654(const char *a, s32 b, s32 c);
void func_020026c4(const char *a, s32 b, s32 c, s32 d, s32 e, s32 f);
void Snd_PlaySe(s32 a);
void func_0200226c(s32 a, s32 b, s32 c, s32 d);
void func_02002398(s32 a, s32 b);
void func_0203c42c(void *a, void *p, s32 skip, s32 set);
u16 Item_MakePaper(void *p, s32 a);
void func_02065af0(void *a);
void * func_02065c8c(void *p);
void func_02065c94(void *a);
void func_02065e70(void *p, void *q);
BOOL func_0206e61c();
void func_0206e63c();
void func_0206ecf8(s32 a);
BOOL MenuCtrl_IsButtons();
BOOL MenuCtrl_IsTouch();
void func_02096914(void *a, s32 b);
void * PlayerData_GetCurrent();
s32 func_020979d8();
s32 func_020991fc();
void * ProcBase_GetParent(void *p);
void ProcBase_RequestDelete(void *a);
BOOL func_ov002_0220125c(u32 pad);
BOOL func_ov002_0220126c(u32 pad);
BOOL func_ov002_0220127c(u32 pad);
BOOL func_ov002_0220128c(u32 pad);
void func_ov002_022016e4(void *p, u32 v);
void func_ov002_02201700(void *p, u32 a, u32 b);
s32 func_ov002_022019d0(void *a, s32 b, void *c, u32 d);
s32 func_ov002_02201a28(void *a);
u32 func_ov002_02201a70(void *p, s32 a);
void func_ov002_02201aa0(void *a, s32 b, s32 c);
void func_ov002_02201b04(void *a);
void func_ov002_02201b58(void *a);
void func_ov002_02202064(void *p, u32 v);
void func_ov002_02202098(void *p, u32 v);
void func_ov002_02203920(void *a);
s32 func_ov094_02292380();
s32 func_ov094_0229238c();
s32 func_ov094_02292398();
void func_ov094_0229277c(void *self, s32 a);
void func_ov094_02292a80(void *a);
void func_ov094_02292aa4(void *a);
void func_ov094_02292acc(void *a);
void func_ov094_02292ae0(void *a);
void func_ov094_02292d1c(void *a, s32 b);
void func_ov094_02292d30(void *a, s32 b);
void func_ov094_022932d0(void *self, s32 a, s32 b);
void func_ov094_02293318(void *p, s32 a, s32 b);
void func_ov094_0229358c(void *p);
void func_ov094_022935dc(void *p);
void func_ov094_022937a0(void *a);
void func_ov094_02293998(void *a);
void func_ov094_022939a0(void *a);
void func_ov094_022939c0(void *a, s32 b);
BOOL func_ov094_02293c1c(void *p);
void func_ov094_02293c58(void *p);
void func_ov094_02293cf0(void *a, void *b);
void func_ov094_02293d2c(void *a);
BOOL func_ov094_02293d80(void *p, u32 a);
s32 func_ov094_02293d9c(void *p, u32 a);
s32 func_ov094_02293df8(void *p, u32 a);

Unk_ov106_02298180 *func_ov106_02297ed4();
void func_ov106_022973a8();
}

class Unk_02065554;
class Unk_0206d0a0;
class Unk_0206d1d4_Src;
class Unk_020970b8;
class PlayerData;
class Letter;
class LabelBalloon;
class HandCursor;
class LabelButton;
class Unk_020e45f8;
class Unk_020e4608;
class Unk_ov002_022013ac;
class Unk_ov002_022013ac_Rec;
class Unk_ov002_02202d98;
class Unk_ov002_02202fac;
class Unk_ov002_022040ec;
class Unk_ov002_02204468;
class Unk_ov002_02204558;
class Unk_ov002_02204604;
class Unk_ov002_02204614;
class Unk_ov002_0220464c;
class Unk_ov002_022046cc;
class Unk_ov002_02204738;
class Unk_ov092_02291ec8;
class Unk_ov094_02292d6c;
class Unk_ov094_02294a50;
class Unk_ov094_02294bd4;

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
    void func_ov094_0229405c(s32, s32, void *);
    void func_ov094_02294138(s32, s32);
    void func_ov094_022941a0(s32, s32);
    BOOL func_ov094_022941ec(s32);
    void func_ov094_022941f8(u32);
    void func_ov094_022942f4(s32);
    void func_ov094_02294318(s32, s32);
    void * func_ov094_0229433c(s32);
    void func_ov094_022943a4(s32);
    void func_ov094_022943b0();
    void func_ov094_022943bc(u32);
    void func_ov094_022943f8();
    void func_ov094_02294420(void *, s32);
    s32 func_ov094_022945c8(s32, s32);
    void func_ov094_0229462c();
    void func_ov094_02294644(s32);
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
    s32 func_ov002_02200680();
    void func_ov002_022006a4(u8);
    void func_ov002_022006b0();
    void func_ov002_022006b8();
    void func_ov002_022006c0();
    void func_ov002_022006e4(s32);
    s32 func_ov002_0220071c();
    u32 unk_04[(0xc0 - 4) / 4];
};

class Unk_ov002_02204604 {
public:
    Unk_ov002_02204604();
    ~Unk_ov002_02204604();
    void func_ov002_022026c4(s32, s32, s32);
    void func_ov002_022026f4(s32, s32);
    s32 func_ov002_02202708();
    s32 func_ov002_02202710();
    s32 func_ov002_02202718();
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
    void func_ov002_0220229c(s32, s32);
    void func_ov002_02202310(s32, s32, const char *);
    u32 unk_00[0x2f4 / 4];
    u8 unk_2f4[0xc];
};

class Unk_ov002_022040ec {
public:
    Unk_ov002_022040ec();
    ~Unk_ov002_022040ec();
    s32 func_ov002_02204140();
    void func_ov002_02204174();
    s32 func_ov002_0220418c();
    void func_ov002_022041b8(u8 *, s32);
    s32 func_ov002_02204234(s32);
    u32 unk_00[0x108 / 4];
};

class Unk_0206d0a0 {
public:
    Unk_0206d0a0();
    ~Unk_0206d0a0();
    void func_0206d2e0(Unk_0206d1d4_Src *, void *, void *, s32);
    void func_0206d394();
    void func_0206d39c(s32);
    u32 unk_00[0x210 / 4];
};

class Unk_ov002_02204738 {
public:
    Unk_ov002_02204738();
    virtual ~Unk_ov002_02204738();
    virtual void vfunc_08();
    s32 func_ov002_02203e24();
    void func_ov002_02203ec8(s32);
    BOOL func_ov002_02203f08();
    s32 func_ov002_02203f28(s32);
    s32 func_ov002_02203f78(s32);
    u32 unk_04[(0x70 - 4) / 4];
};

class Letter {
public:
    Letter();
    ~Letter();
    u32 unk_00[0xf4 / 4];
};

class Unk_ov002_022046cc {
public:
    Unk_ov002_022046cc();
    ~Unk_ov002_022046cc();
    void func_ov002_02203510(s32);
    void func_ov002_02203698();
    void func_ov002_022036a4(s32);
    void func_ov002_02203900();
    u32 unk_00[0x164 / 4];
};

class Unk_02065554 {
public:
    s32 func_02065578();
    u32 func_020655d0();
};

class Unk_020970b8 {
public:
    u8 * func_020970b8(s32);
};

class PlayerData {
public:
    void * getCatalog();
};

class LabelBalloon {
public:
    void setPos(s32, s32);
};

class HandCursor {
public:
    s32 isAnimDone();
    s32 getAnim();
    s32 setAnimAtEnd(s32);
    void enableObjWindow();
};

class LabelButton {
public:
    void setState(s32);
    void setPos(s32, s32);
};

class Unk_020e45f8 {
public:
    void func_020b87d0();
};

class Unk_ov002_022013ac {
public:
    s32 func_ov002_02201498(s32);
    s32 func_ov002_022014a4();
    s32 func_ov002_022014c0(s32, s32);
    void func_ov002_0220160c(Unk_ov002_022013ac_Rec *, s32);
    s32 func_ov002_022017a4();
    s32 func_ov002_022017b4();
};

class Unk_ov002_02202d98 {
public:
    void func_ov002_02202844();
    s32 func_ov002_022028a0();
    s32 func_ov002_022028c8();
    s32 func_ov002_022028f0();
    s32 func_ov002_022028fc();
    s32 func_ov002_02202928();
    void func_ov002_022029e8(s32, s32, s32, s32);
    void func_ov002_02202a18(s32, s32, s32);
    void func_ov002_02202a40(s32, s32);
    void func_ov002_02202a78();
    void func_ov002_02202af0();
};

class Unk_ov002_02202fac {
public:
    void func_ov002_0220301c();
    void func_ov002_02203044();
    s32 func_ov002_0220306c();
    BOOL func_ov002_0220308c();
    void func_ov002_022030ac(u8);
    s32 func_ov002_022030b8(s32);
    s32 func_ov002_022030f4(s32);
    BOOL func_ov002_02203110(s32);
    void func_ov002_02203328();
};

class Unk_ov002_0220464c {
public:
    void func_ov002_02202b68();
    void func_ov002_02202c40();
    void func_ov002_02202ca0();
    void func_ov002_02202d00(s32);
};

class Unk_ov092_02291ec8 {
public:
    void func_ov092_02291c5c();
    void func_ov092_02291ce4(s32, s32);
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

    void func_ov002_02200840(s32, s32, s32);
    void func_ov002_02200850(s32);
    void func_ov002_0220085c(s32, s32);
    void func_ov002_02200874(s32, s32);
    void func_ov002_022008c4(s32, s32, s32, s32);
    void func_ov002_022008e0(s32, s32, s32, s32);
    BOOL func_ov002_022008fc(s32);
    BOOL func_ov002_02200908(s32);
    s32 func_ov002_02200914();
    s32 func_ov002_02200920();
    void func_ov002_02200980();
    u32 func_ov002_022009c8();
    BOOL func_ov002_022009d4();
    BOOL func_ov002_02200a14(s32);
    void func_ov002_02200a50(u8);
    void func_ov002_02200a58(u8);
    void func_ov002_02200a60(u8);

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

// Vtable 0x02298180
class Unk_ov106_02298180 : public Unk_ov002_022044e4 {
public:
    Unk_ov106_02298180()
        : unk_c0(), unk_f8(), unk_b58(), unk_b80(), unk_2160(), unk_2220(), unk_2238(), unk_229c(), unk_259c(), unk_26a4(),
          unk_28b4(), unk_2924(), unk_32ac(), unk_3c34(), unk_3d98(), unk_3e8c() {}

    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL onDraw();
    virtual BOOL vfunc_4c();
    virtual BOOL vfunc_50();
    virtual BOOL vfunc_54();
    virtual BOOL vfunc_58();
    virtual BOOL vfunc_5c();

    BOOL func_ov106_02295a44();
    BOOL func_ov106_02295b48(u32 a);
    BOOL func_ov106_02295b88(u32 a);
    BOOL func_ov106_02295d54(u32 a);
    BOOL func_ov106_02295e3c(u32 a);
    BOOL func_ov106_02295e48(u32 v);
    BOOL func_ov106_02295e58(u32 v);
    s32 func_ov106_0229572c();
    s32 func_ov106_0229573c();
    s32 func_ov106_02295be0(u32 a);
    s32 func_ov106_02295c28(u32 a);
    u32 func_ov106_02295d9c(u32 a, s32 b, s32 c);
    u32 func_ov106_02295f0c();
    u32 func_ov106_02295f40();
    u8 func_ov106_02295df8(u32 a);
    u8 func_ov106_02295e18(u32 a);
    void * func_ov106_02295cc4(u32 a);
    void func_ov106_02295548();
    void func_ov106_022955ac();
    void func_ov106_02295610();
    void func_ov106_02295660(s32 a, s32 b);
    void func_ov106_02295694();
    void func_ov106_02295708();
    void func_ov106_02295780();
    void func_ov106_022957d8(u32 a);
    void func_ov106_02295818(u32 a);
    void func_ov106_02295840(u32 a);
    void func_ov106_0229589c();
    void func_ov106_022958c4();
    void func_ov106_022958f0();
    void func_ov106_0229591c();
    void func_ov106_02295960();
    void func_ov106_022959c4();
    void func_ov106_02295a88(u32 a);
    void func_ov106_02295ac4();
    void func_ov106_02295ae0(u32 a);
    void func_ov106_02295b2c();
    void func_ov106_02295bbc();
    void func_ov106_02295c70(void *p);
    void func_ov106_02295d04(u32 a, void *p);
    void func_ov106_02295e68();
    void func_ov106_02295e74();
    void func_ov106_02295ea0();
    void func_ov106_02295ecc(u32 v);
    void func_ov106_02295f60(u32 a, u32 b);
    void func_ov106_02295f98(u32 a, s32 c);
    void func_ov106_02295fcc(u32 a, u32 b);
    void func_ov106_02296030(u32 a);
    void func_ov106_02296078(u32 a);
    void func_ov106_022960c0(u32 a);
    void func_ov106_02296158();
    void func_ov106_02296178();
    void func_ov106_022961d8();
    void func_ov106_022961f0();
    void func_ov106_02296210();
    void func_ov106_02296244();
    void func_ov106_02296260();
    void func_ov106_02296288();
    void func_ov106_022962c4();
    void func_ov106_02296314();
    void func_ov106_02296394();
    void func_ov106_022963fc();
    void func_ov106_0229642c();
    void func_ov106_022964b0();
    void func_ov106_02296534();
    void func_ov106_02296588();
    void func_ov106_022966b8();
    void func_ov106_02296734();
    void func_ov106_02296764();
    void func_ov106_022967c4();
    void func_ov106_022967f8();
    void func_ov106_02296818();
    void func_ov106_02296868();
    void func_ov106_022968a4();
    void func_ov106_022968dc();
    void func_ov106_0229692c();
    void func_ov106_02296974();
    void func_ov106_022969c8();
    void func_ov106_022969f4();
    void func_ov106_02296a24();
    void func_ov106_02296a4c();
    void func_ov106_02296a80();
    void func_ov106_02296ac8();
    void func_ov106_02296b2c();
    void func_ov106_02296bc8();
    void func_ov106_02296be8();
    void func_ov106_02296c8c();
    void func_ov106_02296d90();
    void func_ov106_02296ee4();
    void func_ov106_02296fb0();
    void func_ov106_02296ff8();
    BOOL func_ov106_02294e1c(u32 mask);
    BOOL func_ov106_02294f58(void *pad, u32 x);
    void func_ov106_02294dfc(u32 mask);
    void func_ov106_02294e0c(u32 mask);
    void func_ov106_02294e30();
    void func_ov106_02294e58();
    void func_ov106_02294e60();
    void func_ov106_02294ed0();
    void func_ov106_02294f10();
    void func_ov106_02294f34();
    void func_ov106_02294fdc(void *pad);
    void func_ov106_02295004(void *pad, u32 x);
    void func_ov106_022950f0(void *pad, u32 x);
    void func_ov106_02295200();
    void func_ov106_02295250(u32 idx, u32 x);
    void func_ov106_02295320();
    void func_ov106_0229534c(u32 x);
    void func_ov106_022953c8();
    void func_ov106_02295410(u32 v);
    void func_ov106_02295458(u32 v);
    void func_ov106_02295494();
    void func_ov106_022954b4();
    void func_ov106_022954d4();
    void func_ov106_022954f4();
    void func_ov106_02295514();
    void func_ov106_02297130();
    void func_ov106_02297178();
    void func_ov106_022971e8();
    void func_ov106_02297294();
    void func_ov106_02297314();
    void func_ov106_02297340();
    void func_ov106_02297394();
    void func_ov106_022973dc();
    void func_ov106_02297414();
    void func_ov106_02297450();
    void func_ov106_02297458();
    void func_ov106_02297474();
    void func_ov106_022974bc();
    void func_ov106_02297594();
    void func_ov106_022975b4();
    void func_ov106_022975e0();
    void func_ov106_02297600();
    void func_ov106_02297658();
    void func_ov106_02297684();
    void func_ov106_022976c4();
    void func_ov106_02297744();
    void func_ov106_022977a0();
    void func_ov106_022977f0();
    void func_ov106_02297850();
    void func_ov106_0229789c();
    void func_ov106_022978fc();
    void func_ov106_0229796c();
    void func_ov106_02297a44();

    /* 0x91 */ u8 unk_91[3];
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
    /* 0x00c0 */ Unk_020e4608 unk_c0[1];
    /* 0x00f8 */ Unk_ov094_02294a50 unk_f8;
    /* 0x0b58 */ Unk_ov094_02294bd4 unk_b58;
    /* 0x0b80 */ Unk_ov094_02292d6c unk_b80;
    /* 0x2160 */ Unk_ov002_02204468 unk_2160;
    /* 0x2220 */ Unk_ov002_02204604 unk_2220;
    /* 0x2238 */ Unk_ov002_02204614 unk_2238;
    /* 0x229c */ Unk_ov002_02204558 unk_229c;
    /* 0x259c */ Unk_ov002_022040ec unk_259c;
    /* 0x26a4 */ Unk_0206d0a0 unk_26a4;
    /* 0x28b4 */ Unk_ov002_02204738 unk_28b4;
    /* 0x2924 */ Letter unk_2924[10];
    /* 0x32ac */ Letter unk_32ac[10];
    /* 0x3c34 */ Unk_ov002_022046cc unk_3c34;
    /* 0x3d98 */ Letter unk_3d98;
    /* 0x3e8c */ Letter unk_3e8c;
};

static inline BOOL Unk_ov106_022966b8_Both() {
    if (gTouchHeld != 0 && gTouchChanged != 0) {
        return TRUE;
    }
    return FALSE;
}

static inline BOOL Unk_ov106_02296ee4_Both() {
    if (gTouchHeld != 0 && gTouchChanged != 0) {
        return TRUE;
    }
    return FALSE;
}

static inline BOOL Unk_ov106_02297294_Both() {
    if (gTouchHeld != 0 && gTouchChanged != 0) {
        return TRUE;
    }
    return FALSE;
}

extern "C" Unk_ov106_SceneEntry data_ov106_02297fe0 = {(void *)func_ov106_02297ed4, 0x99, 0x9d};

extern "C" Unk_ov106_02298180 *func_ov106_02297ed4() { return new Unk_ov106_02298180(); }

BOOL Unk_ov106_02298180::vfunc_00() {
    func_ov106_022974bc();
    func_ov002_02200a50(0);
    func_ov002_02200a60(0);
    return TRUE;
}

BOOL Unk_ov106_02298180::vfunc_0c() {
    ((Unk_ov092_02291ec8 *)ProcBase_GetParent(this))->func_ov092_02291c5c();
    func_ov106_02297474();
    return TRUE;
}

BOOL Unk_ov106_02298180::onDraw() {
    if (!func_ov106_02294e1c(1)) {
        return TRUE;
    }
    unk_2160.vfunc_08();
    if (MenuCtrl_IsButtons()) {
        ((Unk_ov002_02202d98 *)&unk_2238)->func_ov002_02202844();
    }
    func_ov106_0229591c();
    if (func_ov106_02294e1c(2)) {
        ((Unk_ov002_022046cc *)&unk_3c34)->func_ov002_022036a4(unk_a0);
        s32 t = unk_98 - 0x10;
        func_ov094_022932d0(&unk_f8, 0, t);
        ((Unk_ov094_02294bd4 *)&unk_b58)->func_ov094_022941a0(0, t);
        func_ov094_0229277c(&unk_b80, t);
    }
    if (func_ov106_02294e1c(0x200)) {
        ((Unk_ov094_02294bd4 *)&unk_b58)->func_ov094_02294138(unk_9c, -0x10);
    }
    if (func_ov106_02294e1c(0x80)) {
        ((LabelButton *)&unk_28b4)->setPos(0, func_ov002_02200920());
        unk_28b4.vfunc_08();
    }
    return TRUE;
}

BOOL Unk_ov106_02298180::vfunc_4c() {
    static Unk_ov106_02298180_Fn tbl[11] = {
        &Unk_ov106_02298180::func_ov106_0229796c,
        &Unk_ov106_02298180::func_ov106_022978fc,
        &Unk_ov106_02298180::func_ov106_0229789c,
        &Unk_ov106_02298180::func_ov106_02297850,
        &Unk_ov106_02298180::func_ov106_022977f0,
        &Unk_ov106_02298180::func_ov106_022977a0,
        &Unk_ov106_02298180::func_ov106_02297744,
        &Unk_ov106_02298180::func_ov106_022976c4,
        &Unk_ov106_02298180::func_ov106_02297684,
        &Unk_ov106_02298180::func_ov106_02297658,
        &Unk_ov106_02298180::func_ov106_02297600};
    func_ov106_02297414();
    (this->*tbl[unk_8c])();
    func_ov106_022973dc();
    return TRUE;
}

void Unk_ov106_02298180::func_ov106_02297a44() {
    static Unk_ov106_02298180_Fn tbl[39] = {
        &Unk_ov106_02298180::func_ov106_02297294,
        &Unk_ov106_02298180::func_ov106_022971e8,
        &Unk_ov106_02298180::func_ov106_02297178,
        &Unk_ov106_02298180::func_ov106_02297130,
        &Unk_ov106_02298180::func_ov106_02296ff8,
        &Unk_ov106_02298180::func_ov106_02296fb0,
        &Unk_ov106_02298180::func_ov106_02296ee4,
        &Unk_ov106_02298180::func_ov106_02296d90,
        &Unk_ov106_02298180::func_ov106_02296c8c,
        &Unk_ov106_02298180::func_ov106_02296be8,
        &Unk_ov106_02298180::func_ov106_02296bc8,
        &Unk_ov106_02298180::func_ov106_02296b2c,
        &Unk_ov106_02298180::func_ov106_02296ac8,
        &Unk_ov106_02298180::func_ov106_02296a80,
        &Unk_ov106_02298180::func_ov106_02296a4c,
        &Unk_ov106_02298180::func_ov106_02296a24,
        &Unk_ov106_02298180::func_ov106_022969f4,
        &Unk_ov106_02298180::func_ov106_022969c8,
        &Unk_ov106_02298180::func_ov106_02296974,
        &Unk_ov106_02298180::func_ov106_0229692c,
        &Unk_ov106_02298180::func_ov106_022968dc,
        &Unk_ov106_02298180::func_ov106_022968a4,
        &Unk_ov106_02298180::func_ov106_02296868,
        &Unk_ov106_02298180::func_ov106_02296818,
        &Unk_ov106_02298180::func_ov106_022967f8,
        &Unk_ov106_02298180::func_ov106_022967c4,
        &Unk_ov106_02298180::func_ov106_02296764,
        &Unk_ov106_02298180::func_ov106_02296734,
        &Unk_ov106_02298180::func_ov106_022966b8,
        &Unk_ov106_02298180::func_ov106_02296588,
        &Unk_ov106_02298180::func_ov106_02296534,
        &Unk_ov106_02298180::func_ov106_022964b0,
        &Unk_ov106_02298180::func_ov106_0229642c,
        &Unk_ov106_02298180::func_ov106_022963fc,
        &Unk_ov106_02298180::func_ov106_02296394,
        &Unk_ov106_02298180::func_ov106_02296314,
        &Unk_ov106_02298180::func_ov106_022962c4,
        &Unk_ov106_02298180::func_ov106_02296288,
        &Unk_ov106_02298180::func_ov106_02296260};
    (this->*tbl[unk_8d])();
}

BOOL Unk_ov106_02298180::vfunc_50() {
    func_0206e63c();
    if (func_0206e61c()) {
        u32 s = unk_8d;
        if (s == 0 || s == 1 || s == 7) {
            func_ov106_02295708();
            func_ov106_02294e30();
            ((Unk_ov002_02204468 *)&unk_2160)->func_ov002_022006e4(0);
            return TRUE;
        }
    }
    func_ov106_02297458();
    func_ov106_02297a44();
    func_ov106_02297450();
    return TRUE;
}

BOOL Unk_ov106_02298180::vfunc_54() {
    return TRUE;
}

BOOL Unk_ov106_02298180::vfunc_58() {
    return TRUE;
}

BOOL Unk_ov106_02298180::vfunc_5c() {
    func_0206ecf8(1);
    func_02096914(unk_2924, 10);
    PlayerData_GetCurrent();
    u8 *p = ((Unk_020970b8 *)func_020979d8())->func_020970b8(0);
    s32 i = 0;
    u8 *q = (u8 *)unk_2924;
    for (; i < 10; i++) {
        func_02065e70(p, q + i * 0xf4);
        p += 0xf4;
    }
    ProcBase_RequestDelete(this);
    return TRUE;
}

void Unk_ov106_02298180::func_ov106_0229796c() {
    func_ov106_022973a8();
    func_ov106_02297394();
    func_ov002_02200a50(1);
}

void Unk_ov106_02298180::func_ov106_022978fc() {
    func_ov106_02297314();
    func_ov094_022937a0(&unk_f8);
    func_ov094_02293d2c(&unk_b58);
    func_ov094_02293cf0(&unk_b58, unk_2924);
    func_ov106_02295bbc();
    func_ov002_022008e0(8, 0, 0, 0x30);
    func_020020b8(6);
    func_ov002_02200a50(2);
    func_ov106_02294e0c(1);
    func_ov106_02294e0c(2);
    func_ov106_022975b4();
}

void Unk_ov106_02298180::func_ov106_0229789c() {
    s32 r = func_ov002_02200908(0);
    func_ov106_022975b4();
    if (r != 0) {
        func_ov106_02297340();
        func_ov002_022008e0(2, 0, 2, 0x30);
        func_ov002_02200850(0xc0);
        func_020020b8(4);
        func_ov106_02294e0c(0x200);
        func_ov106_02297594();
        func_ov002_02200a50(3);
    }
}

void Unk_ov106_02298180::func_ov106_02297850() {
    if (func_ov002_02200908(0)) {
        func_ov002_02200a60(2);
        if (func_ov106_02294e1c(0x4000)) {
            func_ov106_02294dfc(0x4000);
            func_ov002_02200a58(0x24);
        } else {
            func_ov106_022961f0();
        }
    }
    func_ov106_02297594();
}

void Unk_ov106_02298180::func_ov106_022977f0() {
    ((Unk_ov002_02204468 *)&unk_2160)->func_ov002_022006e4(1);
    func_ov106_02295708();
    if (!func_ov106_02294e1c(0x100)) {
        ((Unk_ov092_02291ec8 *)ProcBase_GetParent(this))->func_ov092_02291ce4(0x44, 1);
    }
    func_ov002_022008c4(2, 0, 2, 0x30);
    func_ov002_02200850(0xc0);
    func_ov002_02200a50(5);
}

void Unk_ov106_02298180::func_ov106_022977a0() {
    if (func_ov002_022008fc(0)) {
        func_020021a0(4);
        func_ov106_02294dfc(0x200);
        func_ov002_022008c4(8, 0, 0, 0x30);
        func_ov002_02200a50(6);
        func_ov106_02297744();
    } else {
        func_ov106_02297594();
    }
}

void Unk_ov106_02298180::func_ov106_02297744() {
    if (func_ov002_022008fc(0)) {
        func_020021a0(6);
        func_ov106_02294dfc(2);
        if (func_ov106_02294e1c(0x100)) {
            func_ov002_02200a50(7);
            func_ov106_022976c4();
        } else {
            func_ov106_02294dfc(1);
            func_ov002_02200a60(5);
        }
    } else {
        func_ov106_022975b4();
    }
}

void Unk_ov106_02298180::func_ov106_022976c4() {
    void *t = func_ov106_02295cc4(unk_b9);
    func_ov106_02295c70(t);
    func_02065af0(t);
    ((Unk_0206d0a0 *)&unk_26a4)->func_0206d2e0((Unk_0206d1d4_Src *)t, (void *)3, (void *)4, 1);
    func_ov002_022008e0(3, 0, 0, 0x30);
    func_020020b8(3);
    func_020020b8(4);
    func_ov106_022975e0();
    func_ov002_02200a50(8);
    ((Unk_ov002_02204738 *)&unk_28b4)->func_ov002_02203ec8(0x88);
    func_ov106_02294e0c(0x80);
}

void Unk_ov106_02298180::func_ov106_02297684() {
    if (func_ov002_02200908(0)) {
        func_ov002_02200a60(2);
        if (MenuCtrl_IsTouch()) {
            func_ov002_02200a58(5);
        } else {
            func_ov002_02200a58(9);
        }
    } else {
        func_ov106_022975e0();
    }
}

void Unk_ov106_02298180::func_ov106_02297658() {
    func_ov002_022008c4(3, 0, 0, 0x30);
    func_ov106_022975e0();
    func_ov002_02200a50(10);
}

void Unk_ov106_02298180::func_ov106_02297600() {
    if (func_ov002_022008fc(0)) {
        func_020021a0(3);
        func_020021a0(4);
        func_ov106_02294dfc(0x80);
        if (func_ov106_02294e1c(0x8000)) {
            func_ov002_02200a60(5);
            func_ov106_02294dfc(1);
        } else {
            func_ov106_0229796c();
        }
    } else {
        func_ov106_022975e0();
    }
}

void Unk_ov106_02298180::func_ov106_022975e0() {
    func_ov002_02200840(3, 0, 0);
    func_ov002_02200840(4, 0, 0);
}

void Unk_ov106_02298180::func_ov106_022975b4() {
    func_ov002_02200840(6, 0, -16);
    unk_98 = func_ov002_02200920();
    unk_a0 = func_ov002_02200920();
}

void Unk_ov106_02298180::func_ov106_02297594() {
    func_ov002_02200840(4, 0, -16);
    unk_9c = func_ov002_02200914();
}

void Unk_ov106_02298180::func_ov106_022974bc() {
    s32 i;
    u8 *p;
    unk_94 = 0;
    func_ov094_022939c0(&unk_f8, 2);
    ((Unk_ov094_02294bd4 *)&unk_b58)->func_ov094_02294644(1);
    func_ov094_02292d30(&unk_b80, 6);
    unk_b6 = 0x20;
    ((Unk_ov002_02204604 *)&unk_2220)->func_ov002_022027a4();
    unk_b4 = 0;
    unk_b8 = 0xb;
    ((Unk_ov002_02204558 *)&unk_229c)->func_ov002_02202310(3, 0, 0);
    ((Unk_0206d0a0 *)&unk_26a4)->func_0206d39c(3);
    for (i = 0; i < 10; i++) {
        func_02065c94((u8 *)unk_2924 + i * 0xf4);
    }
    PlayerData_GetCurrent();
    p = ((Unk_020970b8 *)func_020979d8())->func_020970b8(0);
    for (i = 0; i < 10; i++) {
        func_02065e70((u8 *)unk_2924 + i * 0xf4, p);
        p += 0xf4;
    }
    func_ov106_02294e0c(0x4000);
    unk_bf = 0;
}

void Unk_ov106_02298180::func_ov106_02297474() {
    func_ov106_02295e68();
    func_ov094_02292a80(&unk_b80);
    func_ov094_02293998(&unk_f8);
    func_ov002_02201b04(&unk_229c);
    ((Unk_0206d0a0 *)&unk_26a4)->func_0206d394();
    ((Unk_ov002_022046cc *)&unk_3c34)->func_ov002_02203900();
}

void Unk_ov106_02298180::func_ov106_02297458() {
    func_ov106_02297414();
    unk_2238.vfunc_0c();
}

void Unk_ov106_02298180::func_ov106_02297450() {
    func_ov106_022973dc();
}

void Unk_ov106_02298180::func_ov106_02297414() {
    func_ov106_02295e68();
    func_ov094_02292acc(&unk_b80);
    func_ov094_022939a0(&unk_f8);
    ((Unk_ov094_02294bd4 *)&unk_b58)->func_ov094_0229462c();
    ((Unk_ov002_022046cc *)&unk_3c34)->func_ov002_02203900();
}

void Unk_ov106_02298180::func_ov106_022973dc() {
    func_ov002_02201b58(&unk_229c);
    func_ov094_02292aa4(&unk_b80);
    if (((Unk_ov002_02204468 *)&unk_2160)->func_ov002_0220071c()) {
        func_ov106_022959c4();
    }
}

extern "C" void func_ov106_022973a8() {
    func_02002398(6, 2);
    func_0200226c(6, 0, 0, 0);
    func_02002398(4, 1);
    func_0200226c(4, 0, 0, 0);
}

void Unk_ov106_02298180::func_ov106_02297394() {
    func_ov094_02292d1c(&unk_b80, 0);
}

void Unk_ov106_02298180::func_ov106_02297340() {
    s32 h = gCurrentHeap;
    func_020026c4("menu/inventory/b_itm_post.bpl", h, 4, 4, 4, 4);
    func_02002654("menu/inventory/b_itm_bg_ltr2.bsc", h, 4);
    func_0200261c("menu/inventory/b_itm_post.bch", h, 4, 0x1e2, 0x1e2, 0x227);
}

void Unk_ov106_02298180::func_ov106_02297314() {
    func_ov094_02292ae0(&unk_b80);
    func_ov002_02203920(&unk_3c34);
    ((Unk_ov002_022046cc *)&unk_3c34)->func_ov002_02203510(0x88);
}

void Unk_ov106_02298180::func_ov106_02297294() {
    if (func_ov002_02200a14(1)) {
        func_ov106_02296210();
    } else {
        if (Unk_ov106_02297294_Both()) {
            s32 r = func_ov106_02295d9c(gTouchCurX, gTouchCurY + 0x10, 1);
            if (r != 0x20) {
                func_ov106_022960c0(r);
            } else if (((Unk_ov002_02202fac *)&unk_3c34)->func_ov002_02203110(9)) {
                func_ov106_02294e30();
            }
        }
    }
}

void Unk_ov106_02298180::func_ov106_022971e8() {
    if (gTouchHeld == 0) {
        if (func_ov106_02294e1c(4)) {
            func_ov002_02200a58(3);
            func_ov106_02297a44();
        } else {
            func_ov002_02200a58(0);
            ((Unk_ov002_02204468 *)&unk_2160)->func_ov002_022006a4(0x3c);
        }
    } else {
        if (func_ov106_02294e1c(4)) {
            if (func_ov106_02295a44()) {
                func_ov106_02296078(unk_b5);
                return;
            }
            if (((Unk_ov002_02204468 *)&unk_2160)->func_ov002_02200680()) {
                if (unk_bf != 0) {
                    unk_bf--;
                } else {
                    func_ov106_02295250(unk_b5, 1);
                    func_ov002_02200a58(2);
                }
                return;
            }
        }
        ((Unk_ov002_02204468 *)&unk_2160)->func_ov002_022006c0();
    }
}

void Unk_ov106_02298180::func_ov106_02297178() {
    if (func_0206e61c()) {
        func_ov002_02200a58(6);
    } else if (gTouchHeld == 0) {
        func_ov002_02200a58(6);
    } else if (func_ov106_02294e1c(4) && func_ov106_02295a44()) {
        func_ov106_02296078(unk_b5);
        func_ov002_02202064(&unk_229c, 0);
        ((Unk_ov002_02204468 *)&unk_2160)->func_ov002_022006e4(1);
    }
}

void Unk_ov106_02298180::func_ov106_02297130() {
    if (((Unk_ov002_02204468 *)&unk_2160)->func_ov002_02200680()) {
        if (unk_bf != 0) {
            unk_bf--;
        } else {
            func_ov106_02295250(unk_b5, 1);
            func_ov002_02200a58(2);
        }
    }
}

void Unk_ov106_02298180::func_ov106_02296ff8() {
    s32 p, t;
    if (func_0206e61c()) {
        func_ov106_02295818(unk_b7);
        func_ov106_02294e30();
        ((Unk_ov002_02204468 *)&unk_2160)->func_ov002_022006e4(0);
    } else {
        func_ov106_022958f0();
        func_ov106_02295ac4();
        p = unk_ac + 8;
        t = func_ov106_02295d9c(p, unk_b0 + 0x18, 0);
        if (t != 0x20) {
            if (gTouchHeld == 0) {
                if (func_ov106_02295e58(unk_b7) && func_ov106_02295e48(t)) {
                    func_ov106_02295fcc(unk_b7, 4);
                } else if (func_ov106_02295e48(unk_b7) && func_ov106_02295e58(t)
                           && func_ov106_02295b48(t) == 0) {
                    func_ov106_02295fcc(unk_b7, 4);
                } else if (func_ov106_02295b88(t) != 0 || func_ov106_02295d54(t) == 0) {
                    func_ov106_02295f98(unk_b7, p);
                } else {
                    func_ov094_02292398();
                    func_ov106_022961f0();
                }
            } else {
                if (func_ov106_02295e58(unk_b7) && func_ov106_02295e48(t)) {
                } else {
                    func_ov106_02295a88(t);
                }
            }
        } else if (gTouchHeld == 0) {
            func_ov106_02295f98(unk_b7, p);
        }
    }
}

void Unk_ov106_02298180::func_ov106_02296fb0() {
    if (func_0206e61c()) {
        func_ov106_02294ed0();
    } else if (func_ov002_02200a14(1)) {
        func_ov002_02200a58(9);
    } else {
        if (((Unk_ov002_02204738 *)&unk_28b4)->func_ov002_02203e24()) {
            func_ov106_02294f10();
        }
    }
}

void Unk_ov106_02298180::func_ov106_02296ee4() {
    if (((Unk_ov002_022013ac *)&unk_229c)->func_ov002_022017b4()) {
        if (func_0206e61c()) {
            func_ov106_02295320();
        } else if (func_ov002_02200a14(1)) {
            func_ov106_02295320();
        } else {
            if (Unk_ov106_02296ee4_Both()) {
                s32 t = ((Unk_ov002_022013ac *)&unk_229c)->func_ov002_022014c0(gTouchCurX, gTouchCurY);
                if (t >= 0) {
                    if (func_ov106_02294e1c(0x10000) == 0 || t != 0) {
                        u32 r;
                        unk_bc = ((u8 *)this + 0x2595)[t];
                        r = 1;
                        if (unk_bc == 2) {
                            r = 0;
                            Snd_PlaySe(0x24);
                        }
                        func_ov002_02201aa0(&unk_229c, t, r);
                        func_ov002_02200a58(0x17);
                    }
                }
            }
        }
    }
}

void Unk_ov106_02298180::func_ov106_02296d90() {
    if (func_ov002_022009d4()) {
        func_ov106_02296244();
        ((Unk_ov002_02204468 *)&unk_2160)->func_ov002_022006e4(1);
    } else {
        s32 v = func_ov002_022009c8();
        if (func_ov106_02294f58((void *)v, 0)) {
            func_ov106_02295960();
            func_ov106_02295694();
            ((Unk_ov002_02204468 *)&unk_2160)->func_ov002_022006e4(0);
        } else {
            if (func_ov106_02295b88(unk_b8) != 0) goto tail;
            {
                u32 k = gPad[1];
                if (k & 1) {
                    if (func_ov106_02295e58(unk_b8) || func_ov106_02295e48(unk_b8)) {
                        if (func_ov106_02295b48(unk_b8) == 0) {
                            func_ov106_02295250(unk_b8, 0);
                        }
                    } else if (func_ov106_02295e3c(unk_b8)) {
                        func_ov106_022954d4();
                    }
                } else if (k & 0x800) {
                    if (func_ov106_02295e48(unk_b8)) {
                        if (func_ov106_02295b48(unk_b8) == 0) {
                            s32 r = func_ov106_02295f40();
                            if (r != 0x20) {
                                func_ov106_02295f60(unk_b8, r);
                                ((Unk_ov002_02204468 *)&unk_2160)->func_ov002_022006e4(1);
                            }
                        }
                    }
                } else {
                    goto tail;
                }
            }
            return;
tail:
            {
                u32 k = gPad[1];
                if ((k & 8) || (k & 2)) {
                    func_ov106_02295708();
                    func_ov106_02294e30();
                    ((Unk_ov002_02204468 *)&unk_2160)->func_ov002_022006e4(0);
                } else {
                    ((Unk_ov002_02204468 *)&unk_2160)->func_ov002_022006c0();
                }
            }
        }
    }
}

void Unk_ov106_02298180::func_ov106_02296c8c() {
    if (func_0206e61c()) {
        func_ov106_02295818(unk_b7);
        func_ov106_02295708();
        func_ov106_02294e30();
        ((Unk_ov002_02204468 *)&unk_2160)->func_ov002_022006e4(0);
    } else {
        s32 v = func_ov002_022009c8();
        if (func_ov106_02294f58((void *)v, 1)) {
            func_ov106_02295960();
            func_ov106_02295694();
            ((Unk_ov002_02204468 *)&unk_2160)->func_ov002_022006e4(0);
        } else {
            u32 k = gPad[1];
            if (k & 1) {
                if (func_ov106_02295e58(unk_b8)) {
                    if (func_ov106_02295e48(unk_b7)) {
                        if (func_ov106_02295b48(unk_b8) == 0) return;
                    }
                }
                if (func_ov106_02295b88(unk_b8) == 0) {
                    if (func_ov106_02295b48(unk_b8)) {
                        func_ov106_02295458(unk_b8);
                    } else {
                        func_ov106_02295410(unk_b8);
                    }
                }
            } else if (k & 2) {
                func_ov106_02295458(unk_b7);
            } else {
                func_ov106_022958c4();
                ((Unk_ov002_02204468 *)&unk_2160)->func_ov002_022006c0();
            }
        }
    }
}

void Unk_ov106_02298180::func_ov106_02296be8() {
    if (func_0206e61c()) {
        func_ov106_02294ed0();
    } else {
        if (((HandCursor *)&unk_2238)->getAnim() == 0) {
            s32 a = ((Unk_ov002_02204738 *)&unk_28b4)->func_ov002_02203f78(1);
            s32 b = ((Unk_ov002_02204738 *)&unk_28b4)->func_ov002_02203f28(1);
            ((Unk_ov002_02202d98 *)&unk_2238)->func_ov002_02202a40(a, b);
            ((Unk_ov002_0220464c *)&unk_2238)->func_ov002_02202d00(1);
        }
        if (func_ov002_022009d4()) {
            func_ov106_02295708();
            func_ov002_02200a58(5);
        } else {
            u32 k = gPad[1];
            if ((k & 1) || (k & 2)) {
                ((Unk_ov002_0220464c *)&unk_2238)->func_ov002_02202b68();
                func_ov002_02200a58(10);
            }
        }
    }
}

void Unk_ov106_02298180::func_ov106_02296bc8() {
    if (((HandCursor *)&unk_2238)->isAnimDone()) {
        func_ov106_02294f10();
    }
}

void Unk_ov106_02298180::func_ov106_02296b2c() {
    if (func_0206e61c()) {
        func_ov106_02295320();
    } else if (func_ov002_022009d4()) {
        func_ov106_02295320();
    } else {
        s32 v = func_ov002_022009c8();
        u8 f = (u8)func_ov106_02294e1c(0x10000);
        if (func_ov002_022019d0(&unk_229c, v, &unk_bd, f)) {
            func_ov106_02295610();
        } else {
            u32 k = gPad[1];
            if (k & 1) {
                ((Unk_ov002_0220464c *)&unk_2238)->func_ov002_02202b68();
                func_ov002_02200a58(0xc);
            } else if (k & 2) {
                func_ov106_022955ac();
            }
        }
    }
}

void Unk_ov106_02298180::func_ov106_02296ac8() {
    if (((HandCursor *)&unk_2238)->isAnimDone()) {
        u32 r;
        unk_bc = ((u8 *)this + 0x2595)[unk_bd];
        r = 1;
        if (unk_bc == 2) {
            r = 0;
            Snd_PlaySe(0x24);
        }
        func_ov002_02201aa0(&unk_229c, unk_bd, r);
        func_ov002_02200a58(0x17);
    }
}

void Unk_ov106_02298180::func_ov106_02296a80() {
    if (((Unk_ov002_02202d98 *)&unk_2238)->func_ov002_022028f0() == 0) {
        func_ov002_02200a58(unk_bb);
        if (unk_bb == 7) {
            func_ov106_02295ae0(unk_b8);
        }
        func_ov106_02297a44();
    }
    func_ov106_022958c4();
}

void Unk_ov106_02298180::func_ov106_02296a4c() {
    if (((HandCursor *)&unk_2238)->isAnimDone()) {
        if (unk_b8 == 0x1f) {
            func_ov106_02294e30();
        } else {
            func_ov106_022954b4();
        }
    }
}

void Unk_ov106_02298180::func_ov106_02296a24() {
    if (((HandCursor *)&unk_2238)->isAnimDone()) {
        func_ov106_022954f4();
        func_ov002_02200a58(7);
    }
}

void Unk_ov106_02298180::func_ov106_022969f4() {
    if (((Unk_ov002_02202d98 *)&unk_2238)->func_ov002_02202928()) {
        func_ov106_02296030(unk_b8);
        func_ov002_02200a58(0x11);
    }
}

void Unk_ov106_02298180::func_ov106_022969c8() {
    if (((HandCursor *)&unk_2238)->isAnimDone()) {
        func_ov002_02200a58(unk_bb);
    }
    func_ov106_022958c4();
}

void Unk_ov106_02298180::func_ov106_02296974() {
    if (((Unk_ov002_02202d98 *)&unk_2238)->func_ov002_02202928() == 0) {
        u32 a = unk_ba;
        if (unk_b8 == a) {
            func_ov106_02295d54(a);
            func_ov106_02295960();
            func_ov002_02200a58(7);
            func_ov094_02292398();
        } else {
            func_ov106_02295fcc(a, 4);
        }
    } else {
        func_ov106_022958c4();
    }
}

void Unk_ov106_02298180::func_ov106_0229692c() {
    if (((Unk_ov002_02202d98 *)&unk_2238)->func_ov002_022028fc() == 0) {
        func_ov106_022957d8(unk_ba);
        func_ov106_02294e0c(0x40);
        func_ov002_02200a58(0x14);
        func_ov106_02295960();
    } else {
        func_ov002_02200a58(7);
    }
}

void Unk_ov106_02298180::func_ov106_022968dc() {
    if (((HandCursor *)&unk_2238)->isAnimDone()) {
        func_ov002_02200a58(unk_bb);
    }
    if (((Unk_ov002_02202d98 *)&unk_2238)->func_ov002_02202928()) {
        if (func_ov106_02294e1c(0x40)) {
            func_ov106_02294dfc(0x40);
            func_ov094_02292380();
        }
        func_ov106_022958c4();
    }
}

void Unk_ov106_02298180::func_ov106_022968a4() {
    if (((Unk_ov002_02204604 *)&unk_2220)->func_ov002_02202718()) {
        func_ov106_02295818(unk_b7);
        func_ov106_022961f0();
        func_ov094_02292398();
    } else {
        func_ov106_0229589c();
    }
}

void Unk_ov106_02298180::func_ov106_02296868() {
    if (((Unk_ov002_022013ac *)&unk_229c)->func_ov002_022017b4()) {
        if (MenuCtrl_IsButtons()) {
            func_ov106_02295548();
            func_ov002_02200a58(0xb);
        } else {
            func_ov002_02200a58(6);
        }
    }
}

void Unk_ov106_02298180::func_ov106_02296818() {
    if (func_ov002_02201a28(&unk_229c)) {
        func_ov002_02202064(&unk_229c, 0);
        ((Unk_ov002_02204468 *)&unk_2160)->func_ov002_022006e4(1);
        if (((HandCursor *)&unk_2238)->getAnim()) {
            func_ov106_02295514();
        }
        func_ov002_02200a58(0x18);
    }
}

void Unk_ov106_02298180::func_ov106_022967f8() {
    if (((Unk_ov002_022013ac *)&unk_229c)->func_ov002_022017a4()) {
        func_ov106_022953c8();
    }
}

void Unk_ov106_02298180::func_ov106_022967c4() {
    if (((Unk_ov002_022040ec *)&unk_259c)->func_ov002_02204234(1)) {
        func_ov002_02200a58(unk_bb);
        ((HandCursor *)&unk_2238)->enableObjWindow();
    }
}

void Unk_ov106_02298180::func_ov106_02296764() {
    s32 a = ((Unk_ov002_022040ec *)&unk_259c)->func_ov002_0220418c();
    a &= func_ov002_022008fc(-1);
    unk_a0 = func_ov002_02200920();
    if (a) {
        func_ov002_02200a58(0x1b);
        func_ov002_02200874(0, 0);
        ((Unk_ov002_02202fac *)&unk_3c34)->func_ov002_02203328();
        ((Unk_ov002_02202fac *)&unk_3c34)->func_ov002_02203044();
    }
}

void Unk_ov106_02298180::func_ov106_02296734() {
    BOOL r4 = func_ov002_02200908(-1);
    unk_a0 = func_ov002_02200920();
    if (r4) {
        func_ov106_02296158();
    }
}

void Unk_ov106_02298180::func_ov106_022966b8() {
    if (func_0206e61c()) {
        func_ov106_02295e74();
    }
    if (func_ov002_02200a14(1)) {
        func_ov106_02296178();
    } else if (Unk_ov106_022966b8_Both()) {
        if (((Unk_ov002_02202fac *)&unk_3c34)->func_ov002_02203110(3)) {
            func_ov106_02295ea0();
        } else if (((Unk_ov002_02202fac *)&unk_3c34)->func_ov002_02203110(4)) {
            func_ov106_02295e74();
        }
    }
}

void Unk_ov106_02298180::func_ov106_02296588() {
    if (func_0206e61c()) {
        func_ov106_02295708();
        func_ov106_02295e74();
    } else if (func_ov002_022009d4()) {
        func_ov106_022961d8();
    } else {
        u32 t = gPad[1];
        if (t & 1) {
            ((Unk_ov002_0220464c *)&unk_2238)->func_ov002_02202b68();
            func_ov002_02200a58(0x1e);
        } else if (t & 2) {
            func_ov106_02295708();
            func_ov106_02295e74();
        } else if (t & 8) {
            func_ov106_02295708();
            func_ov106_02295ea0();
        } else {
            u32 r4 = unk_be;
            u32 r6 = func_ov002_022009c8();
            if (func_ov002_0220126c(r6)) {
                if (unk_be != 0) {
                    unk_be = ((volatile Unk_ov106_02298180 *)this)->unk_be - 1;
                }
            } else if (func_ov002_0220125c(r6)) {
                if (unk_be < 1) {
                    unk_be = ((volatile Unk_ov106_02298180 *)this)->unk_be + 1;
                }
            }
            if (r4 != unk_be) {
                if (unk_be != 0) {
                    s32 a = ((Unk_ov002_02202fac *)&unk_3c34)->func_ov002_022030f4(4);
                    s32 b = ((Unk_ov002_02202fac *)&unk_3c34)->func_ov002_022030b8(4);
                    func_ov106_02295660(a, b);
                } else {
                    s32 a = ((Unk_ov002_02202fac *)&unk_3c34)->func_ov002_022030f4(3);
                    s32 b = ((Unk_ov002_02202fac *)&unk_3c34)->func_ov002_022030b8(3);
                    func_ov106_02295660(a, b);
                }
            }
        }
    }
}

void Unk_ov106_02298180::func_ov106_02296534() {
    if (((HandCursor *)&unk_2238)->isAnimDone()) {
        func_ov002_02200a58(0x1f);
        if (unk_be != 0) {
            ((Unk_ov002_02202fac *)&unk_3c34)->func_ov002_022030ac(4);
            Snd_PlaySe(0x28);
        } else {
            ((Unk_ov002_02202fac *)&unk_3c34)->func_ov002_022030ac(3);
            Snd_PlaySe(0x27);
        }
    }
}

void Unk_ov106_02298180::func_ov106_022964b0() {
    if (((Unk_ov002_02202fac *)&unk_3c34)->func_ov002_0220308c()) {
        if (((HandCursor *)&unk_2238)->getAnim()) {
            s32 r4 = ((Unk_ov002_02202fac *)&unk_3c34)->func_ov002_0220306c();
            s32 r6 = ((Unk_ov002_02202fac *)&unk_3c34)->func_ov002_022030f4(-1);
            s32 r2 = ((Unk_ov002_02202fac *)&unk_3c34)->func_ov002_022030b8(-1);
            ((Unk_ov002_02202d98 *)&unk_2238)->func_ov002_02202a40(r4 + r6, r4 + r2);
        }
    } else {
        func_ov106_02295708();
        func_ov002_02200a58(0x20);
        func_ov002_0220085c(0, 0);
        ((Unk_ov002_022040ec *)&unk_259c)->func_ov002_02204174();
    }
}

void Unk_ov106_02298180::func_ov106_0229642c() {
    BOOL r4 = ((Unk_ov002_022040ec *)&unk_259c)->func_ov002_02204140();
    r4 &= func_ov002_022008fc(-1);
    unk_a0 = func_ov002_02200920();
    if (r4) {
        ((Unk_ov002_02202fac *)&unk_3c34)->func_ov002_0220301c();
        if (unk_be == 0) {
            func_ov002_02200874(0, 0);
            ((Unk_ov002_022046cc *)&unk_3c34)->func_ov002_02203510(0x88);
            func_ov002_02200a58(0x21);
        } else {
            ((Unk_ov002_022046cc *)&unk_3c34)->func_ov002_02203698();
            func_ov002_02200a50(4);
            func_ov002_02200a60(1);
        }
    }
}

void Unk_ov106_02298180::func_ov106_022963fc() {
    BOOL r4 = func_ov002_02200908(-1);
    unk_a0 = func_ov002_02200920();
    if (r4) {
        func_ov106_022961f0();
    }
}

void Unk_ov106_02298180::func_ov106_02296394() {
    if (((Unk_ov002_02204738 *)&unk_28b4)->func_ov002_02203f08()) {
        if (((HandCursor *)&unk_2238)->getAnim()) {
            s32 r4 = ((Unk_ov002_02204738 *)&unk_28b4)->func_ov002_02203f78(1);
            s32 r2 = ((Unk_ov002_02204738 *)&unk_28b4)->func_ov002_02203f28(1);
            ((Unk_ov002_02202d98 *)&unk_2238)->func_ov002_02202a40(r4, r2);
        }
    } else {
        func_ov106_02295708();
        func_ov002_02200a50(9);
        func_ov002_02200a60(1);
    }
}

void Unk_ov106_02298180::func_ov106_02296314() {
    if (((Unk_ov002_02202fac *)&unk_3c34)->func_ov002_0220308c()) {
        if (((HandCursor *)&unk_2238)->getAnim()) {
            s32 r4 = ((Unk_ov002_02202fac *)&unk_3c34)->func_ov002_0220306c();
            s32 r6 = ((Unk_ov002_02202fac *)&unk_3c34)->func_ov002_022030f4(-1);
            s32 r2 = ((Unk_ov002_02202fac *)&unk_3c34)->func_ov002_022030b8(-1);
            ((Unk_ov002_02202d98 *)&unk_2238)->func_ov002_02202a40(r4 + r6, r4 + r2);
        }
    } else {
        func_ov106_02295708();
        unk_8c = 4;
        func_ov106_02294dfc(0x100);
        func_ov002_02200a60(1);
    }
}

void Unk_ov106_02298180::func_ov106_022962c4() {
    u32 r5 = func_ov106_02295f0c();
    if (r5 == 0x20) {
        unk_b8 = 0x1f;
        func_ov106_022961f0();
    } else {
        u32 r2 = func_ov106_02295f40();
        if (r2 == 0x20) {
            func_ov106_02295ecc(6);
        } else {
            func_ov106_02295f60(r5, r2);
            func_ov002_02200a58(0x25);
        }
    }
}

void Unk_ov106_02298180::func_ov106_02296288() {
    if (((Unk_ov002_02204604 *)&unk_2220)->func_ov002_02202718()) {
        func_ov106_02295818(unk_b7);
        func_ov002_02200a58(0x24);
        func_ov094_02292398();
    } else {
        func_ov106_0229589c();
    }
}

void Unk_ov106_02298180::func_ov106_02296260() {
    if (func_ov094_02293c1c(&unk_b58)) {
        unk_b4 = 0;
        func_ov106_022961f0();
    }
}

void Unk_ov106_02298180::func_ov106_02296244() {
    func_ov106_02295708();
    func_ov106_02295b2c();
    func_ov002_02200a58(0);
}

void Unk_ov106_02298180::func_ov106_02296210() {
    unk_b6 = 0x20;
    func_ov106_02295780();
    func_ov002_02200980();
    func_ov106_02295960();
    func_ov002_02200a58(7);
    func_ov106_02295ae0(unk_b8);
}

void Unk_ov106_02298180::func_ov106_022961f0() {
    if (MenuCtrl_IsTouch()) {
        func_ov106_02296244();
    } else {
        func_ov106_02296210();
    }
}

void Unk_ov106_02298180::func_ov106_022961d8() {
    func_ov106_02295708();
    func_ov002_02200a58(0x1c);
}

void Unk_ov106_02298180::func_ov106_02296178() {
    func_ov002_02200980();
    unk_be = 1;
    ((Unk_ov002_0220464c *)&unk_2238)->func_ov002_02202d00(1);
    unk_2238.vfunc_0c();
    s32 t = ((Unk_ov002_02202fac *)&unk_3c34)->func_ov002_022030f4(4);
    s32 u = ((Unk_ov002_02202fac *)&unk_3c34)->func_ov002_022030b8(4);
    ((Unk_ov002_02202d98 *)&unk_2238)->func_ov002_02202a40(t, u);
    func_ov002_02200a58(0x1d);
}

void Unk_ov106_02298180::func_ov106_02296158() {
    if (MenuCtrl_IsTouch()) {
        func_ov106_022961d8();
    } else {
        func_ov106_02296178();
    }
}

void Unk_ov106_02298180::func_ov106_022960c0(u32 a) {
    unk_b5 = a;
    func_ov002_02200a58(1);
    u32 r6 = gTouchCurX;
    u32 r7 = gTouchCurY;
    unk_a4 = func_ov106_02295c28(unk_b5) - r6;
    unk_a8 = func_ov106_02295be0(unk_b5) - r7;
    unk_b6 = a;
    ((Unk_ov002_02204468 *)&unk_2160)->func_ov002_022006b8();
    ((Unk_ov002_02204468 *)&unk_2160)->func_ov002_022006c0();
    unk_bf = 2;
    if (func_ov106_02295b88(a)) {
        func_ov106_02294dfc(4);
    } else {
        func_ov106_02294e0c(4);
        func_ov094_0229238c();
    }
}

void Unk_ov106_02298180::func_ov106_02296078(u32 a) {
    unk_b7 = a;
    ((Unk_ov002_02204468 *)&unk_2160)->func_ov002_022006e4(1);
    func_ov106_02295840(a);
    if (unk_b4 == 1) {
        func_ov002_02200a58(4);
    }
    func_ov106_022958f0();
    func_ov094_02292380();
}

void Unk_ov106_02298180::func_ov106_02296030(u32 a) {
    unk_b7 = a;
    ((Unk_ov002_02204468 *)&unk_2160)->func_ov002_022006e4(1);
    func_ov106_02295840(a);
    if (unk_b4 == 1) {
        unk_bb = 8;
    }
    func_ov106_022958c4();
    func_ov094_02292380();
}

void Unk_ov106_02298180::func_ov106_02295fcc(u32 a, u32 b) {
    unk_b7 = a;
    ((Unk_ov002_02204604 *)&unk_2220)->func_ov002_022026f4(unk_ac, unk_b0);
    s32 x = func_ov106_02295c28(a);
    s32 y = func_ov106_02295be0(a);
    ((Unk_ov002_02204604 *)&unk_2220)->func_ov002_022026c4(x, y, b);
    ((Unk_ov002_02204604 *)&unk_2220)->func_ov002_02202718();
    func_ov106_0229589c();
    func_ov002_02200a58(0x15);
}

void Unk_ov106_02298180::func_ov106_02295f98(u32 a, s32 c) {
    u32 r = 0x20;
    if (c >= 0xc0) {
        if (func_ov106_02295e48(a)) {
            r = func_ov106_02295f40();
        }
    }
    if (r != 0x20) {
        a = r;
    }
    func_ov106_02295fcc(a, 4);
}

void Unk_ov106_02298180::func_ov106_02295f60(u32 a, u32 b) {
    func_ov106_02295840(a);
    unk_ac = func_ov106_02295c28(a);
    unk_b0 = func_ov106_02295be0(a);
    func_ov106_02295fcc(b, 4);
}

u32 Unk_ov106_02298180::func_ov106_02295f40() {
    s32 r = func_020991fc();
    if (r == -1) {
        return 0x20;
    }
    return (u8)(r + 0xb);
}

u32 Unk_ov106_02298180::func_ov106_02295f0c() {
    Letter *p = unk_2924;
    s32 i;
    for (i = 0; i < 10; p++, i++) {
        if (((Unk_02065554 *)p)->func_02065578()) {
            return (u8)(i + 0x15);
        }
    }
    return 0x20;
}

void Unk_ov106_02298180::func_ov106_02295ecc(u32 v) {
    volatile u8 buf[2];
    buf[0] = data_021edb68;
    buf[0] = v;
    ((Unk_ov002_022040ec *)&unk_259c)->func_ov002_022041b8((u8 *)buf, 1);
    func_ov002_02200a58(0x1a);
    func_ov002_0220085c(0, 0);
}

void Unk_ov106_02298180::func_ov106_02295ea0() {
    Snd_PlaySe(0x27);
    ((Unk_ov002_02202fac *)&unk_3c34)->func_ov002_022030ac(3);
    func_ov002_02200a58(0x1f);
    unk_be = 0;
}

void Unk_ov106_02298180::func_ov106_02295e74() {
    Snd_PlaySe(0x28);
    ((Unk_ov002_02202fac *)&unk_3c34)->func_ov002_022030ac(4);
    func_ov002_02200a58(0x1f);
    unk_be = 1;
}

void Unk_ov106_02298180::func_ov106_02295e68() {
    ((Unk_020e45f8 *)unk_c0)->func_020b87d0();
}

BOOL Unk_ov106_02298180::func_ov106_02295e58(u32 v) {
    if (v >= 0xb && v <= 0x14) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov106_02298180::func_ov106_02295e48(u32 v) {
    if (v >= 0x15 && v <= 0x1e) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov106_02298180::func_ov106_02295e3c(u32 a) {
    if (a == 0x1f) return TRUE;
    return FALSE;
}

u8 Unk_ov106_02298180::func_ov106_02295e18(u32 a) {
    if (a >= 0xb && a <= 0x14) return a - 0xb;
    if (a >= 0x15 && a <= 0x1e) return a + 0xe;
    return 0;
}

u8 Unk_ov106_02298180::func_ov106_02295df8(u32 a) {
    if (a <= 9) return a + 0xb;
    if (a >= 0x23 && a <= 0x2c) return a - 0xe;
    return 0x20;
}

u32 Unk_ov106_02298180::func_ov106_02295d9c(u32 a, s32 b, s32 c) {
    s32 r4 = _ZN18Unk_ov094_02294bd419func_ov094_02294610Eii(&unk_b58);
    if (r4 == 0x37) {
        r4 = ((Unk_ov094_02294bd4 *)&unk_b58)->func_ov094_022945c8(a, b);
    }
    if (r4 != 0x37) {
        if (c != 0 && func_ov094_02293d80(&unk_b58, r4)) return 0x20;
        return func_ov106_02295df8(r4);
    }
    return 0x20;
}

BOOL Unk_ov106_02298180::func_ov106_02295d54(u32 a) {
    if (func_ov106_02295b48(a) == 0) {
        func_02065e70(&unk_3e8c, func_ov106_02295cc4(a));
        func_ov106_02295d04(unk_b7, &unk_3e8c);
    }
    func_ov106_02295818(a);
    return TRUE;
}

void Unk_ov106_02298180::func_ov106_02295d04(u32 a, void *p) {
    if (func_ov106_02295e58(a) || func_ov106_02295e48(a)) {
        ((Unk_ov094_02294bd4 *)&unk_b58)->func_ov094_02294318(func_ov106_02295e18(a), (s32)p);
        if (func_ov106_02295e58(a)) {
            func_ov106_02295c70(p);
        }
    }
}

void * Unk_ov106_02298180::func_ov106_02295cc4(u32 a) {
    if (func_ov106_02295e58(a) || func_ov106_02295e48(a)) {
        return ((Unk_ov094_02294bd4 *)&unk_b58)->func_ov094_0229433c(func_ov106_02295e18(a));
    }
    return 0;
}

void Unk_ov106_02298180::func_ov106_02295c70(void *p) {
    if (((Unk_02065554 *)p)->func_02065578() == 2 || ((Unk_02065554 *)p)->func_02065578() == 3) {
        void *r4 = PlayerData_GetCurrent();
        u16 v = 0xfff1;
        v = Item_MakePaper(func_02065c8c(p), 4);
        func_0203c42c(((PlayerData *)r4)->getCatalog(), &v, 0, 1);
    }
}

s32 Unk_ov106_02298180::func_ov106_02295c28(u32 a) {
    if (func_ov106_02295e58(a) || func_ov106_02295e48(a)) {
        return func_ov094_02293df8(&unk_b58, func_ov106_02295e18(a));
    }
    if (a == 0x1f) return 0xbc;
    return 0;
}

s32 Unk_ov106_02298180::func_ov106_02295be0(u32 a) {
    if (func_ov106_02295e58(a) || func_ov106_02295e48(a)) {
        return func_ov094_02293d9c(&unk_b58, func_ov106_02295e18(a)) - 0x10;
    }
    if (a == 0x1f) return 0xb6;
    return 0;
}

void Unk_ov106_02298180::func_ov106_02295bbc() {
    func_ov094_02293318(&unk_f8, 0, 0xe);
    ((Unk_ov094_02294bd4 *)&unk_b58)->func_ov094_022941f8(4);
}

BOOL Unk_ov106_02298180::func_ov106_02295b88(u32 a) {
    if (func_ov106_02295e58(a)) {
        return ((Unk_ov094_02294bd4 *)&unk_b58)->func_ov094_022941ec(func_ov106_02295e18(a));
    }
    return FALSE;
}

BOOL Unk_ov106_02298180::func_ov106_02295b48(u32 a) {
    if (func_ov106_02295e58(a) || func_ov106_02295e48(a)) {
        return func_ov094_02293d80(&unk_b58, func_ov106_02295e18(a));
    }
    return TRUE;
}

void Unk_ov106_02298180::func_ov106_02295b2c() {
    func_ov094_022935dc(&unk_f8);
    ((Unk_ov094_02294bd4 *)&unk_b58)->func_ov094_022943f8();
}

void Unk_ov106_02298180::func_ov106_02295ae0(u32 a) {
    if (func_ov106_02295e58(a) || func_ov106_02295e48(a)) {
        ((Unk_ov094_02294bd4 *)&unk_b58)->func_ov094_022943bc(func_ov106_02295e18(a));
        func_ov094_022935dc(&unk_f8);
    } else {
        func_ov106_02295b2c();
    }
}

void Unk_ov106_02298180::func_ov106_02295ac4() {
    func_ov094_0229358c(&unk_f8);
    ((Unk_ov094_02294bd4 *)&unk_b58)->func_ov094_022943b0();
}

void Unk_ov106_02298180::func_ov106_02295a88(u32 a) {
    if (func_ov106_02295e58(a) || func_ov106_02295e48(a)) {
        ((Unk_ov094_02294bd4 *)&unk_b58)->func_ov094_022943a4(func_ov106_02295e18(a));
    }
}

BOOL Unk_ov106_02298180::func_ov106_02295a44() {
    s32 d = gTouchPressX - gTouchCurX;
    if (d < 0) d = -d;
    if (d > 8) return TRUE;
    d = gTouchPressY - gTouchCurY;
    if (d < 0) d = -d;
    if (d > 8) return TRUE;
    return FALSE;
}

void Unk_ov106_02298180::func_ov106_022959c4() {
    s32 r6 = func_ov106_02295c28(unk_b6) - 0x6d;
    s32 r4 = func_ov106_02295be0(unk_b6) - 0x78;
    if (MenuCtrl_IsButtons()) {
        r4 -= 8;
    }
    ((LabelBalloon *)&unk_2160)->setPos(r6, r4);
    if (func_ov106_02295e58(unk_b6) || func_ov106_02295e48(unk_b6)) {
        ((Unk_ov094_02294bd4 *)&unk_b58)->func_ov094_02294420(&unk_2160, func_ov106_02295e18(unk_b6));
    }
}

void Unk_ov106_02298180::func_ov106_02295960() {
    if (func_ov106_02295e58(unk_b8) || func_ov106_02295e48(unk_b8)) {
        if (func_ov106_02295b48(unk_b8)) {
            ((Unk_ov002_02204468 *)&unk_2160)->func_ov002_022006b0();
        } else {
            unk_b6 = unk_b8;
            ((Unk_ov002_02204468 *)&unk_2160)->func_ov002_022006b8();
        }
    } else {
        ((Unk_ov002_02204468 *)&unk_2160)->func_ov002_022006b0();
    }
}

void Unk_ov106_02298180::func_ov106_0229591c() {
    if (func_ov106_02294e1c(0x40) == 0) {
        if (unk_b4 != 0) {
            if (unk_b4 == 1) {
                ((Unk_ov094_02294bd4 *)&unk_b58)->func_ov094_0229405c(unk_ac, unk_b0, &unk_3d98);
            }
        }
    }
}

void Unk_ov106_02298180::func_ov106_022958f0() {
    unk_ac = unk_a4 + gTouchCurX;
    unk_b0 = unk_a8 + gTouchCurY;
}

void Unk_ov106_02298180::func_ov106_022958c4() {
    unk_ac = ((Unk_ov002_02202d98 *)&unk_2238)->func_ov002_022028c8() - 2;
    unk_b0 = ((Unk_ov002_02202d98 *)&unk_2238)->func_ov002_022028a0() - 4;
}

void Unk_ov106_02298180::func_ov106_0229589c() {
    unk_ac = ((Unk_ov002_02204604 *)&unk_2220)->func_ov002_02202710();
    unk_b0 = ((Unk_ov002_02204604 *)&unk_2220)->func_ov002_02202708();
}

void Unk_ov106_02298180::func_ov106_02295840(u32 a) {
    if (func_ov106_02295e58(a) || func_ov106_02295e48(a)) {
        u32 r4 = func_ov106_02295e18(a);
        unk_b4 = 1;
        func_02065e70(&unk_3d98, ((Unk_ov094_02294bd4 *)&unk_b58)->func_ov094_0229433c(r4));
        ((Unk_ov094_02294bd4 *)&unk_b58)->func_ov094_022942f4(r4);
    }
}

void Unk_ov106_02298180::func_ov106_02295818(u32 a) {
    if (unk_b4 == 1) {
        func_ov106_02295d04(a, &unk_3d98);
    }
    unk_b4 = 0;
}

void Unk_ov106_02298180::func_ov106_022957d8(u32 a) {
    if (unk_b4 == 1) {
        func_02065e70(&unk_3e8c, &unk_3d98);
        func_ov106_02295840(a);
        func_ov106_02295d04(a, &unk_3e8c);
    }
}

void Unk_ov106_02298180::func_ov106_02295780() {
    s32 r4 = func_ov106_0229573c();
    ((Unk_ov002_02202d98 *)&unk_2238)->func_ov002_02202a40(r4, func_ov106_0229572c());
    if (func_ov106_02295e3c(unk_b8)) {
        ((Unk_ov002_0220464c *)&unk_2238)->func_ov002_02202d00(7);
    } else {
        ((Unk_ov002_0220464c *)&unk_2238)->func_ov002_02202d00(1);
    }
    func_ov106_022954f4();
}

s32 Unk_ov106_02298180::func_ov106_0229573c() {
    s32 r4 = func_ov106_02295c28(unk_b8);
    if (func_ov106_02294e1c(0x20)) {
        r4 += 0x100;
    } else if (func_ov106_02294e1c(0x10)) {
        r4 -= 0x100;
    }
    r4 += 8;
    return r4;
}

s32 Unk_ov106_02298180::func_ov106_0229572c() {
    return func_ov106_02295be0(unk_b8);
}

void Unk_ov106_02298180::func_ov106_02295708() {
    ((Unk_ov002_0220464c *)&unk_2238)->func_ov002_02202d00(0);
    unk_2238.vfunc_0c();
}

void Unk_ov106_02298180::func_ov106_02295694() {
    s32 r5;
    if (func_ov106_02294e1c(8)) {
        r5 = func_ov106_0229573c();
        ((Unk_ov002_02202d98 *)&unk_2238)->func_ov002_02202a40(r5, func_ov106_0229572c());
        func_ov106_02294dfc(8);
    } else {
        r5 = func_ov106_0229573c();
        ((Unk_ov002_02202d98 *)&unk_2238)->func_ov002_022029e8(r5, func_ov106_0229572c(), 3, 1);
        unk_bb = unk_8d;
        func_ov002_02200a58(0xd);
    }
}

void Unk_ov106_02298180::func_ov106_02295660(s32 a, s32 b) {
    ((Unk_ov002_02202d98 *)&unk_2238)->func_ov002_022029e8(a, b, 3, 1);
    unk_bb = unk_8d;
    func_ov002_02200a58(0xd);
}

void Unk_ov106_02298180::func_ov106_02295610() {
    s32 r4 = ((Unk_ov002_022013ac *)&unk_229c)->func_ov002_022014a4();
    ((Unk_ov002_02202d98 *)&unk_2238)->func_ov002_02202a18(r4, ((Unk_ov002_022013ac *)&unk_229c)->func_ov002_02201498(unk_bd), 2);
    unk_bb = unk_8d;
    func_ov002_02200a58(0xd);
}

void Unk_ov106_02298180::func_ov106_022955ac() {
    s32 r4;
    unk_bc = 4;
    unk_bd = func_ov002_02201a70(&unk_229c, 1);
    r4 = ((Unk_ov002_022013ac *)&unk_229c)->func_ov002_022014a4();
    ((Unk_ov002_02202d98 *)&unk_2238)->func_ov002_02202a40(r4, ((Unk_ov002_022013ac *)&unk_229c)->func_ov002_02201498(unk_bd));
    ((HandCursor *)&unk_2238)->setAnimAtEnd(8);
    func_ov002_02200a58(0x17);
}

void Unk_ov106_02298180::func_ov106_02295548() {
    s32 r4;
    if (func_ov106_02294e1c(0x10000)) {
        unk_bd = 1;
    } else {
        unk_bd = 0;
    }
    r4 = ((Unk_ov002_022013ac *)&unk_229c)->func_ov002_022014a4();
    ((Unk_ov002_02202d98 *)&unk_2238)->func_ov002_02202a40(r4, ((Unk_ov002_022013ac *)&unk_229c)->func_ov002_02201498(unk_bd));
    ((Unk_ov002_0220464c *)&unk_2238)->func_ov002_02202d00(7);
}

void Unk_ov106_02298180::func_ov106_02295514() {
    s32 a = func_ov106_0229573c();
    s32 b = func_ov106_0229572c();
    ((Unk_ov002_02202d98 *)&unk_2238)->func_ov002_02202a40(a, b);
    ((Unk_ov002_0220464c *)&unk_2238)->func_ov002_02202d00(1);
}

void Unk_ov106_02298180::func_ov106_022954f4() {
    ((Unk_ov002_02202d98 *)&unk_2238)->func_ov002_02202a78();
    unk_2238.vfunc_0c();
}

void Unk_ov106_02298180::func_ov106_022954d4() {
    ((Unk_ov002_0220464c *)&unk_2238)->func_ov002_02202b68();
    func_ov002_02200a58(0xe);
}

void Unk_ov106_02298180::func_ov106_022954b4() {
    ((Unk_ov002_02202d98 *)&unk_2238)->func_ov002_02202af0();
    func_ov002_02200a58(0xf);
}

void Unk_ov106_02298180::func_ov106_02295494() {
    ((Unk_ov002_0220464c *)&unk_2238)->func_ov002_02202d00(4);
    func_ov002_02200a58(0x10);
}

void Unk_ov106_02298180::func_ov106_02295458(u32 v) {
    ((Unk_ov002_02204468 *)&unk_2160)->func_ov002_022006e4(1);
    unk_ba = v;
    ((Unk_ov002_0220464c *)&unk_2238)->func_ov002_02202d00(5);
    func_ov002_02200a58(0x12);
}

void Unk_ov106_02298180::func_ov106_02295410(u32 v) {
    ((Unk_ov002_02204468 *)&unk_2160)->func_ov002_022006e4(1);
    unk_bb = unk_8d;
    unk_ba = v;
    ((Unk_ov002_0220464c *)&unk_2238)->func_ov002_02202d00(6);
    func_ov002_02200a58(0x13);
}

void Unk_ov106_02298180::func_ov106_022953c8() {
    switch (unk_bc) {
    case 0:
        func_ov106_02295494();
        break;
    case 1:
        func_ov106_02294f34();
        break;
    case 2:
        func_ov106_02294e60();
        break;
    case 3:
        func_ov106_02294e58();
        break;
    case 4:
    default:
        func_ov106_022961f0();
        break;
    }
}

void Unk_ov106_02298180::func_ov106_0229534c(u32 x) {
    ((Unk_ov002_022013ac *)&unk_229c)->func_ov002_0220160c((Unk_ov002_022013ac_Rec *)&unk_229c.unk_2f4, func_ov106_02294e1c(0x10000));
    s32 a = func_ov106_02295c28(unk_b9);
    s32 b = func_ov106_02295be0(unk_b9);
    if (x != 0) {
        _ZN18Unk_ov002_0220455819func_ov002_02202200EP12LabelBalloon(&unk_229c, &unk_2160, b);
    } else {
        ((Unk_ov002_02204558 *)&unk_229c)->func_ov002_0220229c(a, b);
    }
    func_ov002_02202098(&unk_229c, 0);
    func_ov002_02200a58(0x16);
}

void Unk_ov106_02298180::func_ov106_02295320() {
    unk_bc = 4;
    func_ov106_02295514();
    func_ov002_02202064(&unk_229c, 0);
    func_ov002_02200a58(0x18);
}

void Unk_ov106_02298180::func_ov106_02295250(u32 idx, u32 x) {
    func_ov106_02294dfc(0x10000);
    unk_b9 = idx;
    func_ov002_022016e4(&unk_229c.unk_2f4, 4);
    void *r7 = func_ov106_02295cc4(idx);
    if (MenuCtrl_IsButtons()) {
        func_ov002_02201700(&unk_229c.unk_2f4, 0, 0);
    }
    s32 r5 = ((Unk_02065554 *)r7)->func_02065578();
    if (r5 != 0) {
        if (r5 == 7) {
            func_ov002_02201700(&unk_229c.unk_2f4, 0x17, 1);
        } else {
            func_ov002_02201700(&unk_229c.unk_2f4, 0x14, 1);
        }
    }
    if (((Unk_02065554 *)r7)->func_020655d0() == 0xfff1) {
        if (r5 == 3 || r5 == 6 || r5 == 1 || r5 == 4) {
            func_ov002_02201700(&unk_229c.unk_2f4, 0x15, 3);
        }
    }
    func_ov002_02201700(&unk_229c.unk_2f4, 2, 4);
    func_ov106_02295708();
    if (x == 0) {
        ((Unk_ov002_02204468 *)&unk_2160)->func_ov002_022006e4(1);
    }
    func_ov106_0229534c(x);
}

void Unk_ov106_02298180::func_ov106_02295200() {
    func_ov106_02294e0c(0x10000);
    func_ov002_022016e4(&unk_229c.unk_2f4, 4);
    func_ov002_02201700(&unk_229c.unk_2f4, 0x1a, 4);
    func_ov002_02201700(&unk_229c.unk_2f4, 0x15, 2);
    func_ov002_02201700(&unk_229c.unk_2f4, 0x19, 4);
    func_ov106_0229534c(0);
}

void Unk_ov106_02298180::func_ov106_022950f0(void *pad, u32 x) {
    s32 r6 = unk_b8 - 0xb;
    s32 r4 = r6 >> 1;
    if (func_ov002_0220126c((u32)pad)) {
        if ((r6 & 1) > 0) {
            unk_b8 = unk_b8 - 1;
        } else {
            if (x != 1 || !func_ov106_02295e58(unk_b7)) {
                unk_b8 = r4 * 2 + 0x16;
                return;
            }
        }
    } else if (func_ov002_0220125c((u32)pad)) {
        if ((r6 & 1) < 1) {
            unk_b8 = unk_b8 + 1;
        } else {
            if (x != 1 || !func_ov106_02295e58(unk_b7)) {
                unk_b8 = r4 * 2 + 0x15;
                func_ov106_02294e0c(0x20);
                return;
            }
        }
    }
    if (func_ov106_02295e58(unk_b8)) {
        if (!func_ov106_02294e1c(0x30)) {
            if (func_ov002_0220128c((u32)pad)) {
                if (r4 > 0) {
                    unk_b8 = unk_b8 - 2;
                }
            } else if (func_ov002_0220127c((u32)pad)) {
                if (r4 < 4) {
                    unk_b8 = unk_b8 + 2;
                } else if (x == 0) {
                    unk_b8 = 0x1f;
                    ((Unk_ov002_0220464c *)&unk_2238)->func_ov002_02202ca0();
                }
            }
        }
    }
}

void Unk_ov106_02298180::func_ov106_02295004(void *pad, u32 x) {
    s32 r6 = unk_b8 - 0x15;
    s32 r4 = 0;
    for (; r6 >= 2; r4++, r6 -= 2) {
    }
    if (func_ov002_0220126c((u32)pad)) {
        if (r6 > 0) {
            unk_b8 = unk_b8 - 1;
        } else {
            unk_b8 = r4 * 2 + 0xc;
            func_ov106_02294e0c(0x10);
            return;
        }
    } else if (func_ov002_0220125c((u32)pad)) {
        if (r6 < 1) {
            unk_b8 = unk_b8 + 1;
        } else {
            unk_b8 = r4 * 2 + 0xb;
            return;
        }
    }
    if (func_ov106_02295e48(unk_b8)) {
        if (!func_ov106_02294e1c(0x30)) {
            if (func_ov002_0220128c((u32)pad)) {
                if (r4 > 0) {
                    unk_b8 = unk_b8 - 2;
                }
            } else if (func_ov002_0220127c((u32)pad)) {
                if (r4 < 4) {
                    unk_b8 = unk_b8 + 2;
                } else if (x == 0) {
                    unk_b8 = 0x1f;
                    ((Unk_ov002_0220464c *)&unk_2238)->func_ov002_02202ca0();
                }
            }
        }
    }
}

void Unk_ov106_02298180::func_ov106_02294fdc(void *pad) {
    if (func_ov002_0220128c((u32)pad)) {
        ((Unk_ov002_0220464c *)&unk_2238)->func_ov002_02202c40();
        unk_b8 = 0x13;
    }
}

BOOL Unk_ov106_02298180::func_ov106_02294f58(void *pad, u32 x) {
    u8 old = unk_b8;
    func_ov106_02294dfc(0x30);
    if (pad == 0) {
        return FALSE;
    }
    if (func_ov106_02295e58(unk_b8)) {
        func_ov106_022950f0(pad, x);
    } else if (func_ov106_02295e48(unk_b8)) {
        func_ov106_02295004(pad, x);
    } else if (func_ov106_02295e3c(unk_b8)) {
        func_ov106_02294fdc(pad);
    }
    if (old != unk_b8) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov106_02298180::func_ov106_02294f34() {
    func_ov002_02200a50(4);
    func_ov002_02200a60(1);
    func_ov106_02294e0c(0x100);
}

void Unk_ov106_02298180::func_ov106_02294f10() {
    func_ov002_02200a58(0x22);
    ((LabelButton *)&unk_28b4)->setState(2);
    Snd_PlaySe(0x29);
}

void Unk_ov106_02298180::func_ov106_02294ed0() {
    func_ov106_02294f10();
    func_ov106_02294e0c(0x8000);
    func_ov106_02295708();
    func_ov002_02200a50(9);
    func_ov002_02200a60(1);
    ((Unk_ov092_02291ec8 *)ProcBase_GetParent(this))->func_ov092_02291ce4(0x44, 1);
}

void Unk_ov106_02298180::func_ov106_02294e60() {
    u8 idx = unk_b9;
    func_ov106_02295840(idx);
    unk_ac = func_ov106_02295c28(idx);
    unk_b0 = func_ov106_02295be0(idx);
    if (MenuCtrl_IsButtons()) {
        unk_ac = unk_ac - 2;
        unk_b0 = unk_b0 - 2;
    }
    func_ov002_02200a58(0x26);
    func_ov094_02293c58(&unk_b58);
}

void Unk_ov106_02298180::func_ov106_02294e58() { func_ov106_02295200(); }

void Unk_ov106_02298180::func_ov106_02294e30() {
    Snd_PlaySe(0x27);
    ((Unk_ov002_02202fac *)&unk_3c34)->func_ov002_022030ac(9);
    func_ov002_02200a58(0x23);
}

BOOL Unk_ov106_02298180::func_ov106_02294e1c(u32 mask) {
    if (unk_94 & mask) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov106_02298180::func_ov106_02294e0c(u32 mask) { unk_94 = unk_94 | mask; }

void Unk_ov106_02298180::func_ov106_02294dfc(u32 mask) { unk_94 = unk_94 & ~mask; }

