// ov105: scene overlay (class Unk_ov105_02298594, vtable 0x02298594). Linked as one unit.
#define postCreate() postCreate(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef postCreate
#undef vfunc_14

class Unk_ov105_02298594;
class Unk_ov092_02291ec8;
class Letter;
typedef Unk_ov105_02298594 S;

// Shared symbols whose real argument lists differ from their mangled names: called by name with the object first
extern "C" void _ZN18Unk_ov002_0220455819func_ov002_02202200EP12LabelBalloon(void *self, void *p, s32 x);
extern "C" u32 _ZN18Unk_ov094_02294bd419func_ov094_02294610Eii(void *self);

extern "C" {
void Snd_PlaySe(s32 a);
void MI_CpuCopy8(void *src, void *dst, u32 n);
void *Heap_AllocTail(void *heap, u32 n);
void Heap_Free(void *heap, void *p);
void func_0206f638(s32 a);
s32 func_0206f644();
void func_02065c94(void *p);
void func_02065e70(void *dst, void *src);
void func_02065af0(u32 a);
void func_0206ea2c(void *p);
void func_0206ea3c(u32 a);
s32 func_0206e90c();
s32 func_0206e98c();
void func_0206ecf8(s32 a);
BOOL MenuCtrl_IsButtons();
BOOL MenuCtrl_IsTouch();
s32 func_02096914(void *p, s32 n);
s32 func_020968e4(void *p, s32 n);
s32 func_02096960(void *p);
void func_02096a9c(void *p);
s32 func_02096a0c(void *p);
s32 func_020969b8(void *p);
s32 func_02096acc(void *p, s32 a, s32 b);
s32 func_02096a50(void *p, s32 a);
void func_020968e0();
void func_02096b74();
s32 PlayerData_GetCurrent();
s32 PlayerData_GetResident(void *p, s32 a);
void func_02099a98();
s32 func_020991fc();
void func_020020b8(s32 a);
void func_020021a0(s32 a);
void func_0200226c(s32 a, s32 b, s32 c, s32 d);
void func_02002398(s32 a, s32 b);
void func_0200261c(const char *a, u32 b, s32 c, s32 d, s32 e, s32 f);
void func_02002654(const char *a, u32 b, s32 c);
void func_020026c4(const char *a, u32 b, s32 c, s32 d, s32 e, s32 f);
void *ProcBase_GetParent(void *p);
void ProcBase_RequestDelete(void *p);

void func_ov094_02292380();
void func_ov094_0229238c();
void func_ov094_02292398();
void func_ov094_02292a80(void *p);
void func_ov094_02292aa4(void *p);
void func_ov094_02292acc(void *p);
void func_ov094_02292ae0(void *p);
void func_ov094_02292d1c(void *p, s32 a);
void func_ov094_02292d30(void *p, s32 a);
void func_ov094_02293318(void *p, s32 a, s32 b);
void func_ov094_022932d0(void *p, s32 a, s32 b);
void func_ov094_0229277c(void *p, s32 a);
void func_ov094_0229358c(void *p);
void func_ov094_022935dc(void *p);
void func_ov094_022937a0(void *p);
void func_ov094_02293998(void *p);
void func_ov094_022939a0(void *p);
void func_ov094_022939c0(void *p, s32 a);
s32 func_ov094_02293c1c(void *p);
void func_ov094_02293c58(void *p);
void func_ov094_02293d18(void *p, void *q);
void func_ov094_02293d2c(void *p);
BOOL func_ov094_02293d80(void *p, u32 a);
s32 func_ov094_02293d9c(void *p, u32 a);
s32 func_ov094_02293df8(void *p, u32 a);

BOOL func_ov002_0220125c(void *p);
BOOL func_ov002_0220126c(void *p);
BOOL func_ov002_0220127c(void *p);
BOOL func_ov002_0220128c(void *p);
void func_ov002_022016e4(void *p, s32 a);
void func_ov002_02201700(void *p, s32 a, s32 b);
BOOL func_ov002_022019d0(void *p, s32 a, void *q, u32 b);
BOOL func_ov002_02201a28(void *p);
u32 func_ov002_02201a70(void *p, s32 a);
void func_ov002_02201aa0(void *p, s32 a, s32 b);
void func_ov002_02201b04(void *p);
void func_ov002_02201b58(void *p);
void func_ov002_02202064(void *p, s32 a);
void func_ov002_02202098(void *p, s32 a);
void func_ov002_02203920(void *p);

extern u16 gPad[];
extern u8 gTouchHeld;
extern u8 gTouchChanged;
extern u8 gTouchCurX;
extern u8 gTouchCurY;
extern u8 gTouchPressX;
extern u8 gTouchPressY;
extern u32 gCurrentHeap;
extern u8 data_021d735c[];
extern void *data_021c6210;
}

// Main-module helper classes (real symbol names) -------------------------------------------------

class Letter {
public:
    Letter();
    ~Letter();
    u32 unk_00[0xf4 / 4];
};

// Same 0xf4-byte element object under the name that owns the state accessors
class Unk_02065554 {
public:
    s32 func_02065554();
    s32 func_02065578();
    u32 func_020655d0();
};

class Unk_020cbb18 {
public:
    void func_02072824(u32 a, u32 b);
    void func_020728a4(u8 *buf, u32 n);
    void func_020728d4();
    BOOL func_02072e44();
    u32 unk_00[0x64 / 4];
    u32 unk_64;
};
extern "C" Unk_020cbb18 *data_020cbb18;

class TalkWindowState {
public:
    void setSlot(s32 a, void *p);
};
extern "C" TalkWindowState *TalkWindow_Get(s32 a);

class MsgString {
public:
    virtual ~MsgString();
};
class Unk_020e1c64 : public MsgString {
public:
    Unk_020e1c64();
    virtual ~Unk_020e1c64();
    u32 unk_04[7];
};
class PlayerId {
public:
    void func_020940d0(MsgString *p);
};
class PlayerData {
public:
    void *getPlayerId();
};
class Unk_02097ff4 {
public:
    BOOL func_02098044(u32 a);
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

class Unk_020e45f8 {
public:
    void func_020b87d0();
};
class Unk_020e4608 : public Unk_020e45f8 {
public:
    Unk_020e4608();
    u32 unk_00[0x38 / 4];
};

class UiWidget {
public:
    virtual ~UiWidget();
    virtual void draw();
    virtual void vfunc_0c();
};

class LabelBalloon : public UiWidget {
public:
    void setPos(s32 x, s32 y);
};

class LabelButton : public UiWidget {
public:
    void setState(s32 v);
    void setPos(s32 x, s32 y);
};

class HandCursor : public UiWidget {
public:
    BOOL isAnimDone();
    s32 getAnim();
    void setAnimAtEnd(s32 idx);
    void enableObjWindow();
};

// ov002 sub-objects ----------------------------------------------------------------------------

class Unk_ov002_02204468 : public LabelBalloon {
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
    u32 unk_04[(0xc0 - 4) / 4];
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
// Same cursor object under the name used by the second group of its methods
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

struct Unk_ov002_022013ac_Rec;
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
    void func_ov002_02202310(s32 a, s32 b, const char *path);
    u8 unk_00[0x2f4];
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
    BOOL func_ov002_02203e24();
    void func_ov002_02203ec8(s32 a);
    BOOL func_ov002_02203f08();
    s32 func_ov002_02203f28(s32 a);
    s32 func_ov002_02203f78(s32 a);
    u32 unk_04[(0x70 - 4) / 4];
};

class Unk_ov002_02202fac {
public:
    s32 func_ov002_0220306c();
    BOOL func_ov002_0220308c();
    void func_ov002_022030ac(u8 v);
    s32 func_ov002_022030b8(s32 a);
    s32 func_ov002_022030f4(s32 a);
    BOOL func_ov002_02203110(s32 a);
    void func_ov002_0220301c();
    void func_ov002_02203044();
    void func_ov002_022032ec(s32);
};
class Unk_ov002_022046cc {
public:
    Unk_ov002_022046cc();
    ~Unk_ov002_022046cc();
    void func_ov002_022034c4(u8 v);
    void func_ov002_022036a4(s32 a);
    void func_ov002_02203900();
    u32 unk_00[0x164 / 4];
    void func_ov002_02203510(s32);
    void func_ov002_02203698();
};

// ov094 sub-objects ----------------------------------------------------------------------------

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
    void func_ov094_0229405c(s32 a, s32 b, void *p);
    void func_ov094_02294104(s32 a, s32 b);
    void func_ov094_022941a0(s32 a, s32 b);
    BOOL func_ov094_022941ec(s32 a);
    void func_ov094_022941f8(u32 a);
    void func_ov094_022942f4(s32 a);
    void func_ov094_02294318(s32 a, s32 b);
    void *func_ov094_0229433c(s32 a);
    void func_ov094_022943a4(s32 a);
    void func_ov094_022943b0();
    void func_ov094_022943bc(u32 a);
    void func_ov094_022943f8();
    void func_ov094_02294420(void *p, s32 a);
    u32 func_ov094_022945f0(s32 a, s32 b);
    void func_ov094_0229462c();
    void func_ov094_02294644(s32 a);
    u32 unk_00[0x28 / 4];
    void func_ov094_0229416c(s32, s32);
    s32 func_ov094_022945dc(s32, s32);
    s32 func_ov094_02294610(s32, s32);
};
class Unk_ov094_02292d6c {
public:
    Unk_ov094_02292d6c();
    ~Unk_ov094_02292d6c();
    u32 unk_00[0x15e0 / 4];
};

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
    void func_ov002_02200850(s32 a);
    void func_ov002_022008c4(s32 a, s32 b, s32 mode, s32 dist);
    void func_ov002_022008e0(s32 a, s32 b, s32 c, s32 d);
    BOOL func_ov002_022008fc(s32 a);
    BOOL func_ov002_02200908(s32 a);
    s32 func_ov002_02200914();
    s32 func_ov002_02200920();
    void func_ov002_02200980();
    s32 func_ov002_022009c8();
    s32 func_ov002_022009d4();
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
    void func_ov002_0220085c(s32, s32);
    void func_ov002_02200874(s32, s32);
};

extern "C" {
void func_020013cc(s32 a);
void func_0200140c();
void func_0200142c();
BOOL func_02087dac(void *r, s32 x, s32 y, s32 w, s32 h);
s32 func_02087e0c(void *p);
s32 func_02087e14(void *p);
void func_02088730(s32 a, void *b, void *c, s32 d, s32 e, s32 f, s32 g);
void * func_02097a04(void *p);
void func_ov094_02293d04(void *p, void *q);
}

struct Unk_ov105_Ent {
    u32 a;
    u32 b;
};
struct Unk_ov105_SceneEntry;
extern "C" const u16 data_ov105_02298314[3];
extern "C" Unk_ov105_Ent data_ov105_02298544[9];
extern "C" char data_ov105_022984e4[];
extern "C" char data_ov105_02298504[];
extern "C" char data_ov105_02298524[];
extern "C" const char *data_ov105_022984d8[3];

class LetterStorage {
public:
    void *func_02096f88(s32 a);
};
extern "C" void func_ov094_02293284(void *p, s32 a, s32 b, u32 c);
extern "C" void _ZN18Unk_ov105_0229859419func_ov105_02296108Ej(void *self);
extern "C" void _ZN18Unk_ov105_0229859419func_ov105_022962acEjjj(void *self, u32 a, u32 b);

typedef void (Unk_ov105_02298594::*Unk_ov105_02298594_Fn)();

// Vtable 0x02298594
class Unk_ov105_02298594 : public Unk_ov002_022044e4 {
public:
    Unk_ov105_02298594()
        : unk_b4(), unk_1a8(), unk_2ac(), unk_2e4(), unk_d44(), unk_d6c(), unk_234c(), unk_240c(), unk_2424(), unk_2488(),
          unk_2788(), unk_2890(), unk_2aa0(), unk_2b10(), unk_728c() {}
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL onDraw();
    virtual BOOL vfunc_4c();
    virtual BOOL vfunc_50();
    virtual BOOL vfunc_54();
    virtual BOOL vfunc_58();
    virtual BOOL vfunc_5c();

    void func_ov105_02294dd8(u32);
    void func_ov105_02294de8(u32);
    BOOL func_ov105_02294df8(u32);
    BOOL func_ov105_02294e0c();
    void func_ov105_02294e64();
    void func_ov105_02294e80();
    void func_ov105_02294ea4();
    BOOL func_ov105_02294ef0(s32, s32);
    void func_ov105_02294f48();
    void func_ov105_02294f84();
    void func_ov105_02295014();
    void func_ov105_022950b4();
    void func_ov105_022950e4();
    void func_ov105_02295120();
    void func_ov105_0229514c();
    void func_ov105_02295150();
    void func_ov105_02295158();
    void func_ov105_022951c8();
    void func_ov105_022951ec();
    BOOL func_ov105_02295210(void *, u32);
    void func_ov105_022952e4(void *);
    void func_ov105_02295340(void *);
    void func_ov105_0229536c(void *, u32);
    void func_ov105_02295464(void *, u32);
    void func_ov105_02295544();
    void func_ov105_02295594(u32 a, u32 b);
    void func_ov105_02295668();
    void func_ov105_02295698(u32 b);
    void func_ov105_02295714();
    void func_ov105_02295760(u32 b);
    void func_ov105_022957ac(u32 b);
    void func_ov105_022957e8();
    void func_ov105_02295814();
    void func_ov105_02295834();
    void func_ov105_02295854();
    void func_ov105_02295874();
    void func_ov105_022958a8();
    void func_ov105_0229590c();
    void func_ov105_02295974();
    void func_ov105_022959c8(s32 a, s32 b);
    void func_ov105_02295a00();
    void func_ov105_02295a78();
    s32 func_ov105_02295a9c();
    s32 func_ov105_02295aac();
    void func_ov105_02295af4();
    void func_ov105_02295b4c(u32 b);
    void func_ov105_02295b8c(u32 b);
    void func_ov105_02295bb0(u32 b);
    void func_ov105_02295c0c();
    void func_ov105_02295c34();
    void func_ov105_02295c7c();
    void func_ov105_02295ca8();
    void func_ov105_02295ce8();
    void func_ov105_02295d4c();
    BOOL func_ov105_02295dc8();
    void func_ov105_02295e0c(u32 b);
    void func_ov105_02295e48();
    void func_ov105_02295e6c(u32 b);
    void func_ov105_02295ebc();
    BOOL func_ov105_02295ee0(u32);
    BOOL func_ov105_02295f20(u32);
    void func_ov105_02295f54();
    s32 func_ov105_02295f7c(u32);
    s32 func_ov105_02295fe8(u32);
    s32 func_ov105_02296054(u32);
    void func_ov105_02296094(u32, void *);
    BOOL func_ov105_02296108(u32);
    s32 func_ov105_02296154(u32, u32, u32);
    u32 func_ov105_022961b0(u32);
    u32 func_ov105_022961d0(u32);
    BOOL func_ov105_022961f4(u32);
    BOOL func_ov105_02296208(u32);
    BOOL func_ov105_02296214(u32);
    BOOL func_ov105_02296224(u32);
    void func_ov105_02296234();
    u32 func_ov105_02296244();
    u32 func_ov105_0229628c();
    void func_ov105_022962ac(u32, u32, u32);
    void func_ov105_022962e4(u32, s32);
    void func_ov105_02296328(u32, u32);
    void func_ov105_022963c0(u8);
    void func_ov105_02296428(u8);
    void func_ov105_02296498(u32);
    void func_ov105_02296534();
    void func_ov105_02296554();
    void func_ov105_022965b4();
    void func_ov105_022965cc();
    void func_ov105_022965ec();
    void func_ov105_02296628();
    void func_ov105_02296644();
    void func_ov105_02296678();
    void func_ov105_0229677c();
    void func_ov105_022967e8();
    void func_ov105_02296820();
    void func_ov105_0229688c();
    void func_ov105_022968f4();
    void func_ov105_0229692c();
    void func_ov105_0229694c();
    void func_ov105_0229699c();
    void func_ov105_022969d8();
    void func_ov105_02296a34();
    void func_ov105_02296a88();
    void func_ov105_02296ad0();
    void func_ov105_02296b28();
    void func_ov105_02296b58();
    void func_ov105_02296b88();
    void func_ov105_02296bc8();
    void func_ov105_02296c38();
    void func_ov105_02296c84();
    void func_ov105_02296ce8();
    void func_ov105_02296d78();
    void func_ov105_02296d98();
    void func_ov105_02296e2c();
    void func_ov105_02296f60();
    void func_ov105_022970f0();
    void func_ov105_022971ac();
    void func_ov105_022971e0();
    void func_ov105_02297274();
    void func_ov105_022972bc();
    void func_ov105_02297318();
    void func_ov105_022973c4();
    void func_ov105_0229745c();
    void func_ov105_02297488();
    void func_ov105_022974dc();
    void func_ov105_02297524();
    void func_ov105_0229755c();
    void func_ov105_0229759c();
    void func_ov105_022975a4();
    void func_ov105_022975c0();
    void func_ov105_0229760c();
    void func_ov105_022976f8();
    void func_ov105_02297724();
    void func_ov105_0229774c();
    void func_ov105_02297774();
    void func_ov105_02297794();
    void func_ov105_022977c0();
    void func_ov105_022977f0();
    void func_ov105_02297818();
    void func_ov105_02297834();
    void func_ov105_02297854();
    void func_ov105_02297880();
    void func_ov105_022978a0();
    void func_ov105_022978a8();
    void func_ov105_022978ec();
    void func_ov105_02297914();
    void func_ov105_0229794c();
    void func_ov105_02297978();
    void func_ov105_022979b8();
    void func_ov105_02297a4c();
    void func_ov105_02297ab8();
    void func_ov105_02297b20();
    void func_ov105_02297b5c();
    void func_ov105_02297bd8();
    void func_ov105_02297c0c();
    void func_ov105_02297c70();
    void func_ov105_02297d18();

    /* 0x91 */ u8 unk_91[3];
    /* 0x94 */ u32 unk_94;
    /* 0x98 */ s32 unk_98;
    /* 0x9c */ s32 unk_9c;
    /* 0xa0 */ u32 unk_a0;
    /* 0xa4 */ s32 unk_a4;
    /* 0xa8 */ s32 unk_a8;
    /* 0xac */ s32 unk_ac;
    /* 0xb0 */ s32 unk_b0;
    /* 0xb4 */ Letter unk_b4;
    /* 0x1a8 */ Letter unk_1a8;
    /* 0x29c */ u8 unk_29c;
    /* 0x29d */ u8 unk_29d;
    /* 0x29e */ u8 unk_29e;
    /* 0x29f */ u8 unk_29f;
    /* 0x2a0 */ u8 unk_2a0;
    /* 0x2a1 */ u8 unk_2a1;
    /* 0x2a2 */ u8 unk_2a2;
    /* 0x2a3 */ u8 unk_2a3;
    /* 0x2a4 */ u8 unk_2a4;
    /* 0x2a5 */ u8 unk_2a5;
    /* 0x2a6 */ u8 unk_2a6;
    /* 0x2a7 */ u8 unk_2a7;
    /* 0x2a8 */ u8 unk_2a8;
    /* 0x2a9 */ u8 unk_2a9;
    /* 0x2aa */ u8 unk_2aa;
    /* 0x2ab */ u8 unk_2ab;
    /* 0x2ac */ Unk_020e4608 unk_2ac[1];
    /* 0x2e4 */ Unk_ov094_02294a50 unk_2e4;
    /* 0xd44 */ Unk_ov094_02294bd4 unk_d44;
    /* 0xd6c */ Unk_ov094_02292d6c unk_d6c;
    /* 0x234c */ Unk_ov002_02204468 unk_234c;
    /* 0x240c */ Unk_ov002_02204604 unk_240c;
    /* 0x2424 */ Unk_ov002_02204614 unk_2424;
    /* 0x2488 */ Unk_ov002_02204558 unk_2488;
    /* 0x2788 */ Unk_ov002_022040ec unk_2788;
    /* 0x2890 */ Unk_0206d0a0 unk_2890;
    /* 0x2aa0 */ Unk_ov002_02204738 unk_2aa0;
    /* 0x2b10 */ Letter unk_2b10[0x4b];
    /* 0x728c */ Unk_ov002_022046cc unk_728c;
};

// Scene registration entry read by main: factory, then two ids
struct Unk_ov105_SceneEntry {
    Unk_ov105_02298594 *(*create)();
    u16 a;
    u16 b;
};

extern "C" {
void func_ov105_022974f0();
Unk_ov105_02298594 *func_ov105_0229821c();
}

extern "C" u32 _ZN18Unk_ov094_02294bd419func_ov094_02294610Eii(void *self);
extern "C" void _ZN18Unk_ov002_0220455819func_ov002_02202200EP12LabelBalloon(void *self, void *p, s32 x);

static inline BOOL Unk_ov105_0229677c_Both() {
    if (gTouchHeld != 0 && gTouchChanged != 0) return TRUE;
    return FALSE;
}

static inline BOOL Unk_ov105_022973c4_Both() {
    if (gTouchHeld != 0 && gTouchChanged != 0) return TRUE;
    return FALSE;
}

extern "C" Unk_ov105_02298594 *func_ov105_0229821c() { return new Unk_ov105_02298594(); }

BOOL Unk_ov105_02298594::vfunc_00() {
    func_ov105_0229760c();
    func_ov002_02200a50(0);
    func_ov002_02200a60(0);
    return TRUE;
}

BOOL Unk_ov105_02298594::vfunc_0c() {
    ((Unk_ov092_02291ec8 *)ProcBase_GetParent(this))->func_ov092_02291c5c();
    func_ov105_022975c0();
    return TRUE;
}

BOOL Unk_ov105_02298594::onDraw() {
    if (!func_ov105_02294df8(1)) {
        return TRUE;
    }
    unk_234c.draw();
    if (MenuCtrl_IsButtons()) {
        unk_2424.func_ov002_02202844();
    }
    func_ov105_02295ca8();
    if (func_ov105_02294df8(2)) {
        unk_728c.func_ov002_022036a4(unk_9c);
        if (!func_ov105_02294df8(0x200)) {
            func_ov094_022932d0(&unk_2e4, 0, unk_98 - 0x10);
        } else {
            u32 t = unk_a0;
            if (t != 0) {
                func_ov094_02293284(&unk_2e4, 0, unk_98 - 0x10, t + 0xc0);
            }
        }
        unk_d44.func_ov094_022941a0(0, unk_98 - 0x10);
        func_ov094_0229277c(&unk_d6c, unk_98 - 0x10);
    }
    if (func_ov105_02294df8(0x200)) {
        unk_d44.func_ov094_0229416c(unk_a0, -0x10);
        func_ov105_02295014();
    }
    if (func_ov105_02294df8(0x80)) {
        unk_2aa0.setPos(0, func_ov002_02200920());
        unk_2aa0.draw();
    }
    return TRUE;
}// Declarations for data defined further down (definition order sets the data layout)
extern "C" const u16 data_ov105_02298314[3];
extern "C" Unk_ov105_Ent data_ov105_02298544[9];
extern "C" const char *data_ov105_022984d8[3];
extern "C" Unk_ov105_SceneEntry data_ov105_02298348;// Declarations for data defined further down (definition order sets the data layout)
extern "C" Unk_ov105_SceneEntry data_ov105_02298348;
extern "C" char data_ov105_02298524[];
extern "C" const char *data_ov105_022984d8[3];
extern "C" char data_ov105_02298504[];
extern "C" const u16 data_ov105_02298314[3];
extern "C" char data_ov105_022984e4[];
extern "C" Unk_ov105_Ent data_ov105_02298544[9];

extern "C" Unk_ov105_SceneEntry data_ov105_02298348 = {func_ov105_0229821c, 0x98, 0x9c};

extern "C" char data_ov105_02298524[] = "menu/inventory/b_itm_post2.bch";

BOOL Unk_ov105_02298594::vfunc_4c() {
    static Unk_ov105_02298594_Fn tbl[22] = {
        &Unk_ov105_02298594::func_ov105_02297c70,
        &Unk_ov105_02298594::func_ov105_02297c0c,
        &Unk_ov105_02298594::func_ov105_02297bd8,
        &Unk_ov105_02298594::func_ov105_02297b5c,
        &Unk_ov105_02298594::func_ov105_02297b20,
        &Unk_ov105_02298594::func_ov105_02297ab8,
        &Unk_ov105_02298594::func_ov105_02297a4c,
        &Unk_ov105_02298594::func_ov105_022979b8,
        &Unk_ov105_02298594::func_ov105_02297978,
        &Unk_ov105_02298594::func_ov105_0229794c,
        &Unk_ov105_02298594::func_ov105_02297914,
        &Unk_ov105_02298594::func_ov105_022978ec,
        &Unk_ov105_02298594::func_ov105_022978a8,
        &Unk_ov105_02298594::func_ov105_022978a0,
        &Unk_ov105_02298594::func_ov105_02297818,
        &Unk_ov105_02298594::func_ov105_022977f0,
        &Unk_ov105_02298594::func_ov105_022977c0,
        &Unk_ov105_02298594::func_ov105_02297794,
        &Unk_ov105_02298594::func_ov105_02297774,
        &Unk_ov105_02298594::func_ov105_0229774c,
        &Unk_ov105_02298594::func_ov105_02297724,
        &Unk_ov105_02298594::func_ov105_022976f8
    };
    func_ov105_0229755c();
    (this->*tbl[unk_8c])();
    func_ov105_02297524();
    return TRUE;
}

void Unk_ov105_02298594::func_ov105_02297d18() {
    static Unk_ov105_02298594_Fn tbl[32] = {
        &Unk_ov105_02298594::func_ov105_022973c4,
        &Unk_ov105_02298594::func_ov105_02297318,
        &Unk_ov105_02298594::func_ov105_022972bc,
        &Unk_ov105_02298594::func_ov105_02297274,
        &Unk_ov105_02298594::func_ov105_022971e0,
        &Unk_ov105_02298594::func_ov105_022971ac,
        &Unk_ov105_02298594::func_ov105_022970f0,
        &Unk_ov105_02298594::func_ov105_02296f60,
        &Unk_ov105_02298594::func_ov105_02296e2c,
        &Unk_ov105_02298594::func_ov105_02296d98,
        &Unk_ov105_02298594::func_ov105_02296d78,
        &Unk_ov105_02298594::func_ov105_02296ce8,
        &Unk_ov105_02298594::func_ov105_02296c84,
        &Unk_ov105_02298594::func_ov105_02296c38,
        &Unk_ov105_02298594::func_ov105_02296bc8,
        &Unk_ov105_02298594::func_ov105_02296b88,
        &Unk_ov105_02298594::func_ov105_02296b58,
        &Unk_ov105_02298594::func_ov105_02296b28,
        &Unk_ov105_02298594::func_ov105_02296ad0,
        &Unk_ov105_02298594::func_ov105_02296a88,
        &Unk_ov105_02298594::func_ov105_02296a34,
        &Unk_ov105_02298594::func_ov105_022969d8,
        &Unk_ov105_02298594::func_ov105_0229699c,
        &Unk_ov105_02298594::func_ov105_0229694c,
        &Unk_ov105_02298594::func_ov105_0229692c,
        &Unk_ov105_02298594::func_ov105_022968f4,
        &Unk_ov105_02298594::func_ov105_0229688c,
        &Unk_ov105_02298594::func_ov105_02296820,
        &Unk_ov105_02298594::func_ov105_022967e8,
        &Unk_ov105_02298594::func_ov105_0229677c,
        &Unk_ov105_02298594::func_ov105_02296678,
        &Unk_ov105_02298594::func_ov105_02296644
    };
    (this->*tbl[unk_8d])();
}

BOOL Unk_ov105_02298594::vfunc_50() {
    func_ov105_022975a4();
    func_ov105_02297d18();
    func_ov105_0229759c();
    return TRUE;
}

BOOL Unk_ov105_02298594::vfunc_54() { return TRUE; }

BOOL Unk_ov105_02298594::vfunc_58() { return TRUE; }

BOOL Unk_ov105_02298594::vfunc_5c() {
    if (!func_ov105_02294df8(0x1000)) {
        func_0206ecf8(0);
    } else {
        func_0206ecf8(1);
        void *h = func_02097a04((void *)PlayerData_GetCurrent());
        if (h != 0) {
            s32 i;
            Letter *p = (Letter *)((LetterStorage *)h)->func_02096f88(0);
            for (i = 0; i < 0x4b; i++) {
                func_02065e70(p, &unk_2b10[i]);
                p++;
            }
        }
    }
    ProcBase_RequestDelete(this);
    return TRUE;
}

void Unk_ov105_02298594::func_ov105_02297c70() {
    func_ov105_022974f0();
    func_ov105_022974dc();
    func_ov002_02200a50(1);
}

void Unk_ov105_02298594::func_ov105_02297c0c() {
    func_ov105_0229745c();
    func_ov094_022937a0(&unk_2e4);
    func_ov094_02293d2c(&unk_d44);
    func_ov105_02295f54();
    func_ov002_022008e0(8, 0, 0, 0x30);
    func_020020b8(6);
    func_ov002_02200a50(2);
    func_ov105_02294de8(1);
    func_ov105_02294de8(2);
    func_ov105_02297854();
}

void Unk_ov105_02298594::func_ov105_02297bd8() {
    BOOL b = func_ov002_02200908(0);
    func_ov105_02297854();
    if (b) {
        func_ov105_02297488();
        func_ov105_02294f84();
        func_ov002_02200a50(3);
    }
}

void Unk_ov105_02298594::func_ov105_02297b5c() {
    if (func_ov002_02200908(0)) {
        func_ov002_02200a60(2);
        func_ov105_022965cc();
        func_ov105_02294dd8(0x40);
        if (unk_29c != 0) {
            if (MenuCtrl_IsButtons()) {
                u32 v = unk_2a2;
                if (v < 0x3e || v > 0x40) {
                    unk_2424.setAnimAtEnd(4);
                }
                unk_2424.vfunc_0c();
                func_ov105_02295c34();
                func_ov002_02200a58(8);
            }
        }
    }
    func_ov105_02297834();
}

void Unk_ov105_02298594::func_ov105_02297b20() {
    func_ov105_02294e64();
    if (!func_ov105_02294df8(0x100)) {
        ((Unk_ov092_02291ec8 *)ProcBase_GetParent(this))->func_ov092_02291ce4(0x44, 1);
    }
    func_ov105_02294f48();
    func_ov002_02200a50(5);
}

void Unk_ov105_02298594::func_ov105_02297ab8() {
    if (func_ov002_022008fc(0)) {
        func_020021a0(4);
        func_ov105_02294dd8(0x200);
        func_ov002_022008c4(8, 0, 0, 0x30);
        func_ov002_02200a50(6);
        func_ov105_02297a4c();
        unk_728c.func_ov002_02203698();
    } else {
        func_ov105_02297834();
        unk_9c = -func_ov002_02200914();
    }
}

void Unk_ov105_02298594::func_ov105_02297a4c() {
    if (func_ov002_022008fc(0)) {
        func_020021a0(6);
        func_ov105_02294dd8(2);
        if (func_ov105_02294df8(0x100)) {
            func_ov002_02200a50(7);
            func_ov105_022979b8();
        } else {
            func_ov105_02294dd8(1);
            func_ov002_02200a60(5);
        }
    } else {
        func_ov002_02200840(6, 0, -0x10);
        unk_98 = func_ov002_02200920();
    }
}

void Unk_ov105_02298594::func_ov105_022979b8() {
    void *p = (void *)func_ov105_02296054(unk_2a3);
    switch (((Unk_02065554 *)p)->func_02065578()) {
    case 2:
    case 5:
    case 7:
        func_ov105_02294de8(0x1000);
        break;
    }
    func_02065af0((u32)p);
    unk_2890.func_0206d2e0((Unk_0206d1d4_Src *)p, (void *)3, (void *)4, 1);
    func_ov002_022008e0(3, 0, 0, 0x30);
    func_020020b8(3);
    func_020020b8(4);
    func_ov105_02297880();
    func_ov002_02200a50(8);
    unk_2aa0.func_ov002_02203ec8(0x88);
    func_ov105_02294de8(0x80);
}

void Unk_ov105_02298594::func_ov105_02297978() {
    if (func_ov002_02200908(0)) {
        func_ov002_02200a60(2);
        if (MenuCtrl_IsTouch()) {
            func_ov002_02200a58(5);
        } else {
            func_ov002_02200a58(9);
        }
    } else {
        func_ov105_02297880();
    }
}

void Unk_ov105_02298594::func_ov105_0229794c() {
    func_ov002_022008c4(3, 0, 0, 0x30);
    func_ov105_02297880();
    func_ov002_02200a50(0xa);
}

void Unk_ov105_02298594::func_ov105_02297914() {
    if (func_ov002_022008fc(0)) {
        func_020021a0(3);
        func_020021a0(4);
        func_ov105_02294dd8(0x80);
        func_ov105_02297c70();
    } else {
        func_ov105_02297880();
    }
}

void Unk_ov105_02298594::func_ov105_022978ec() {
    func_ov105_02294f48();
    func_ov002_02200a50(0xc);
    unk_2a9 = 4;
    func_ov105_022978a8();
}

void Unk_ov105_02298594::func_ov105_022978a8() {
    if (func_ov002_022008fc(0)) {
        func_020021a0(4);
        if (unk_2a9 != 0) {
            unk_2a9--;
        } else {
            func_ov105_02294f84();
            func_ov002_02200a50(0xd);
        }
    } else {
        func_ov105_02297834();
    }
}

void Unk_ov105_02298594::func_ov105_022978a0() {
    func_ov105_02297b5c();
}

void Unk_ov105_02298594::func_ov105_02297880() {
    func_ov002_02200840(3, 0, 0);
    func_ov002_02200840(4, 0, 0);
}

void Unk_ov105_02298594::func_ov105_02297854() {
    func_ov002_02200840(6, 0, -16);
    unk_98 = func_ov002_02200920();
    unk_9c = func_ov002_02200920();
}

void Unk_ov105_02298594::func_ov105_02297834() {
    func_ov002_02200840(4, 0, -16);
    unk_a0 = func_ov002_02200914();
}

void Unk_ov105_02298594::func_ov105_02297818() {
    func_ov002_0220085c(0, 0);
    func_ov002_02200a50(0xf);
}

void Unk_ov105_02298594::func_ov105_022977f0() {
    if (func_ov002_022008fc(-1)) {
        func_ov105_022977c0();
    }
    unk_9c = func_ov002_02200920();
}

void Unk_ov105_02298594::func_ov105_022977c0() {
    func_ov105_02294e80();
    func_ov002_02200874(0, 0);
    ((Unk_ov002_02202fac *)&unk_728c)->func_ov002_022032ec(0x22);
    func_ov002_02200a50(0x11);
}

void Unk_ov105_02298594::func_ov105_02297794() {
    if (func_ov002_02200908(0)) {
        func_ov002_02200a60(2);
        func_ov105_02296534();
    }
    unk_9c = func_ov002_02200920();
}

void Unk_ov105_02298594::func_ov105_02297774() {
    func_ov105_02294e64();
    func_ov002_0220085c(0, 0);
    func_ov002_02200a50(0x13);
}

void Unk_ov105_02298594::func_ov105_0229774c() {
    if (func_ov002_022008fc(-1)) {
        func_ov105_02297724();
    }
    unk_9c = func_ov002_02200920();
}

void Unk_ov105_02298594::func_ov105_02297724() {
    func_ov002_02200874(0, 0);
    unk_728c.func_ov002_02203510(0x21);
    func_ov002_02200a50(0x15);
}

void Unk_ov105_02298594::func_ov105_022976f8() {
    if (func_ov002_02200908(0)) {
        func_ov002_02200a60(2);
        func_ov105_022965cc();
    }
    unk_9c = func_ov002_02200920();
}

void Unk_ov105_02298594::func_ov105_0229760c() {
    s32 i;
    unk_94 = 0;
    func_ov094_022939c0(&unk_2e4, 2);
    unk_d44.func_ov094_02294644(1);
    func_ov094_02292d30(&unk_d6c, 6);
    unk_29e = 0x41;
    unk_240c.func_ov002_022027a4();
    unk_29c = 0;
    unk_2a2 = 0x1a;
    unk_2488.func_ov002_02202310(3, 0, 0);
    unk_2890.func_0206d39c(3);
    i = 0;
    unk_2a8 = 0;
    for (; i < 0x4b; i++) {
        func_02065c94(&unk_2b10[i]);
    }
    void *q = func_02097a04((void *)PlayerData_GetCurrent());
    if (q) {
        u8 *p = (u8 *)((LetterStorage *)q)->func_02096f88(0);
        for (i = 0; i < 0x4b; i++) {
            func_02065e70(&unk_2b10[i], p);
            p += 0xf4;
        }
    }
    func_ov105_0229514c();
    unk_2ab = 0;
}

void Unk_ov105_02298594::func_ov105_022975c0() {
    func_ov105_02296234();
    func_ov094_02292a80(&unk_d6c);
    func_ov094_02293998(&unk_2e4);
    func_ov002_02201b04(&unk_2488);
    unk_2890.func_0206d394();
    unk_728c.func_ov002_02203900();
}

void Unk_ov105_02298594::func_ov105_022975a4() {
    func_ov105_0229755c();
    unk_2424.vfunc_0c();
}

void Unk_ov105_02298594::func_ov105_0229759c() {
    func_ov105_02297524();
}

void Unk_ov105_02298594::func_ov105_0229755c() {
    func_ov105_02296234();
    func_ov094_02292acc(&unk_d6c);
    func_ov094_022939a0(&unk_2e4);
    unk_d44.func_ov094_0229462c();
    unk_728c.func_ov002_02203900();
}

void Unk_ov105_02298594::func_ov105_02297524() {
    func_ov002_02201b58(&unk_2488);
    func_ov094_02292aa4(&unk_d6c);
    if (unk_234c.func_ov002_0220071c()) {
        func_ov105_02295d4c();
    }
}

extern "C" void func_ov105_022974f0() {
    func_02002398(6, 2);
    func_0200226c(6, 0, 0, 0);
    func_02002398(4, 1);
    func_0200226c(4, 0, 0, 0);
}

void Unk_ov105_02298594::func_ov105_022974dc() {
    func_ov094_02292d1c(&unk_d6c, 0);
}

void Unk_ov105_02298594::func_ov105_02297488() {
    s32 h = gCurrentHeap;
    func_020026c4("menu/inventory/b_itm_post.bpl", h, 4, 4, 4, 4);
    func_02002654("menu/inventory/b_itm_bg_ltr0.bsc", h, 4);
    func_0200261c("menu/inventory/b_itm_post.bch", h, 4, 0x1e2, 0x1e2, 0x227);
}

void Unk_ov105_02298594::func_ov105_0229745c() {
    func_ov094_02292ae0(&unk_d6c);
    func_ov002_02203920(&unk_728c);
    unk_728c.func_ov002_02203510(0x21);
}

void Unk_ov105_02298594::func_ov105_022973c4() {
    if (func_ov002_02200a14(1)) {
        func_ov105_022965ec();
    } else {
        if (Unk_ov105_022973c4_Both()) {
            s32 x = gTouchCurX;
            s32 y = gTouchCurY + 0x10;
            s32 r = func_ov105_02296154(x, y, 1);
            if (r != 0x41) {
                func_ov105_02296498(r);
            } else if (((Unk_ov002_02202fac *)&unk_728c)->func_ov002_02203110(9)) {
                func_ov105_02295120();
            } else if (func_ov105_02294ef0(x, y)) {
                func_ov105_02294ea4();
            }
        }
    }
}

void Unk_ov105_02298594::func_ov105_02297318() {
    if (gTouchHeld == 0) {
        if (func_ov105_02294df8(4)) {
            func_ov002_02200a58(3);
            func_ov105_02297d18();
        } else {
            func_ov002_02200a58(0);
            unk_234c.func_ov002_022006a4(0x3c);
        }
    } else {
        if (func_ov105_02294df8(4)) {
            if (func_ov105_02295dc8()) {
                func_ov105_02296428(unk_29d);
                return;
            }
            if (unk_234c.func_ov002_02200680()) {
                if (unk_2ab != 0) {
                    unk_2ab--;
                } else {
                    func_ov105_02295594(unk_29d, 1);
                    func_ov002_02200a58(2);
                }
                return;
            }
        }
        unk_234c.func_ov002_022006c0();
    }
}

void Unk_ov105_02298594::func_ov105_022972bc() {
    if (gTouchHeld == 0) {
        func_ov002_02200a58(6);
    } else if (func_ov105_02294df8(4)) {
        if (func_ov105_02295dc8()) {
            func_ov105_02296428(unk_29d);
            func_ov002_02202064(&unk_2488, 0);
            unk_234c.func_ov002_022006e4(1);
        }
    }
}

void Unk_ov105_02298594::func_ov105_02297274() {
    if (unk_234c.func_ov002_02200680()) {
        if (unk_2ab != 0) {
            unk_2ab--;
        } else {
            func_ov105_02295594(unk_29d, 1);
            func_ov002_02200a58(2);
        }
    }
}

void Unk_ov105_02298594::func_ov105_022971e0() {
    s32 a, b, r;
    func_ov105_02295c7c();
    func_ov105_02295e48();
    a = unk_ac + 8;
    b = unk_b0 + 0x18;
    r = func_ov105_02296154(a, b, 0);
    if (r != 0x41) {
        if (gTouchHeld == 0) {
            s32 q;
            if (func_ov105_02295f20(r) || (q = func_ov105_02296108(r)) == 0) {
                func_ov105_022962e4(unk_29f, a);
            } else {
                func_ov094_02292398();
                func_ov105_022965cc();
            }
        } else {
            func_ov105_02295e0c(r);
        }
    } else if (gTouchHeld == 0) {
        func_ov105_022962e4(unk_29f, a);
    }
}

void Unk_ov105_02298594::func_ov105_022971ac() {
    if (func_ov002_02200a14(1)) {
        func_ov002_02200a58(9);
    } else if (unk_2aa0.func_ov002_02203e24()) {
        func_ov105_022951c8();
    }
}

void Unk_ov105_02298594::func_ov105_022970f0() {
    if (((Unk_ov002_022013ac *)&unk_2488)->func_ov002_022017b4()) {
        if (func_ov002_02200a14(1)) {
            func_ov105_02295668();
        } else if (Unk_ov105_022973c4_Both()) {
            s32 r = ((Unk_ov002_022013ac *)&unk_2488)->func_ov002_022014c0(gTouchCurX, gTouchCurY);
            if (r >= 0) {
                if (func_ov105_02294df8(0x800) && r == 0) {
                } else {
                    s32 t;
                    unk_2a6 = ((u8 *)this + 0x2781)[r];
                    t = 1;
                    if (unk_2a6 == 2) {
                        t = 0;
                        Snd_PlaySe(0x24);
                    }
                    func_ov002_02201aa0(&unk_2488, r, t);
                    func_ov002_02200a58(0x17);
                }
            }
        }
    }
}

void Unk_ov105_02298594::func_ov105_02296f60() {
    S *s = this;
    if (s->func_ov002_022009d4()) {
        s->func_ov105_02296628();
        s->unk_234c.func_ov002_022006e4(1);
    } else {
        s32 r = s->func_ov002_022009c8();
        if (s->func_ov105_02295210((void *)r, 0)) {
            s->func_ov105_02295ce8();
            s->func_ov105_02295a00();
            s->unk_234c.func_ov002_022006e4(0);
        } else {
            u32 k;
            if (s->func_ov105_02295f20(s->unk_2a2)) goto other;
            k = gPad[1];
            if (k & 1) {
                if (s->func_ov105_02296224(s->unk_2a2) || s->func_ov105_02296214(s->unk_2a2)) {
                    if (!s->func_ov105_02295ee0(s->unk_2a2)) {
                        s->func_ov105_02295594(s->unk_2a2, 0);
                    }
                } else if (s->func_ov105_02296208(s->unk_2a2) || s->func_ov105_022961f4(s->unk_2a2)) {
                    s->func_ov105_02295834();
                }
            } else if (k & 0x800) {
                if (s->func_ov105_02296224(s->unk_2a2) || s->func_ov105_02296214(s->unk_2a2)) {
                    if (!s->func_ov105_02295ee0(s->unk_2a2)) {
                        s32 t;
                        if (s->func_ov105_02296224(s->unk_2a2)) {
                            t = s->func_ov105_02296244();
                        } else {
                            t = s->func_ov105_0229628c();
                        }
                        if (t != 0x41) {
                            _ZN18Unk_ov105_0229859419func_ov105_022962acEjjj(s, s->unk_2a2, t);
                            s->unk_234c.func_ov002_022006e4(1);
                            s->func_ov105_02294de8(0x1000);
                        }
                    }
                }
            } else {
                goto other;
            }
            return;
other:
            k = gPad[1];
            if ((k & 8) || (k & 2)) {
                s->func_ov105_02295a78();
                s->func_ov105_02295120();
                s->unk_234c.func_ov002_022006e4(0);
            } else if (s->func_ov105_02294e0c() == 0) {
                s->unk_234c.func_ov002_022006c0();
            }
        }
    }
}

void Unk_ov105_02298594::func_ov105_02296e2c() {
    S *s = this;
    s32 r = s->func_ov002_022009c8();
    if (s->func_ov105_02295210((void *)r, 1)) {
        s->func_ov105_02295ce8();
        s->func_ov105_02295a00();
        s->unk_234c.func_ov002_022006e4(0);
    } else {
        u32 k = gPad[1];
        if (k & 1) {
            if (s->func_ov105_02296224(s->unk_2a2) || s->func_ov105_02296214(s->unk_2a2)) {
                if (!s->func_ov105_02295f20(s->unk_2a2)) {
                    if (s->func_ov105_02295ee0(s->unk_2a2)) {
                        s->func_ov105_022957ac(s->unk_2a2);
                    } else {
                        s->func_ov105_02295760(s->unk_2a2);
                    }
                }
            } else if (s->func_ov105_022961f4(s->unk_2a2)) {
                s->func_ov105_02295834();
            }
        } else if (k & 2) {
            if (s->func_ov105_02296214(s->unk_29f)) {
                u32 a = s->unk_2a0;
                if (a != s->unk_2a8) {
                    s->func_ov105_02296328((u8)(a + 0x3e), 4);
                    return;
                }
            }
            if (s->unk_2424.getAnim() == 1) {
                s->func_ov105_02296328(s->unk_29f, 4);
            } else {
                s->func_ov105_022957ac(s->unk_29f);
            }
        } else {
            if (s->func_ov105_02294e0c() == 0) {
                s->func_ov105_02295c34();
                s->unk_234c.func_ov002_022006c0();
            }
        }
    }
}

void Unk_ov105_02298594::func_ov105_02296d98() {
    S *s = this;
    if (s->unk_2424.getAnim() == 0) {
        s32 a = s->unk_2aa0.func_ov002_02203f78(1);
        s32 b = s->unk_2aa0.func_ov002_02203f28(1);
        s->unk_2424.func_ov002_02202a40(a, b);
        ((Unk_ov002_0220464c *)&s->unk_2424)->func_ov002_02202d00(1);
    }
    if (s->func_ov002_022009d4()) {
        s->func_ov105_02295a78();
        s->func_ov002_02200a58(5);
    } else {
        u32 k = gPad[1];
        if ((k & 1) || (k & 2)) {
            ((Unk_ov002_0220464c *)&s->unk_2424)->func_ov002_02202b68();
            s->func_ov002_02200a58(0xa);
        }
    }
}

void Unk_ov105_02298594::func_ov105_02296d78() {
    S *s = this;
    if (s->unk_2424.isAnimDone()) {
        s->func_ov105_022951c8();
    }
}

void Unk_ov105_02298594::func_ov105_02296ce8() {
    S *s = this;
    if (s->func_ov002_022009d4()) {
        s->func_ov105_02295668();
    } else {
        s32 r = s->func_ov002_022009c8();
        u8 t = (u8)s->func_ov105_02294df8(0x800);
        if (func_ov002_022019d0(&s->unk_2488, r, &s->unk_2a7, t)) {
            s->func_ov105_02295974();
        } else {
            u32 k = gPad[1];
            if (k & 1) {
                ((Unk_ov002_0220464c *)&s->unk_2424)->func_ov002_02202b68();
                s->func_ov002_02200a58(0xc);
            } else if (k & 2) {
                s->func_ov105_0229590c();
            }
        }
    }
}

void Unk_ov105_02298594::func_ov105_02296c84() {
    S *s = this;
    if (s->unk_2424.isAnimDone()) {
        s32 r;
        s->unk_2a6 = ((u8 *)s + 0x2781)[s->unk_2a7];
        r = 1;
        if (s->unk_2a6 == 2) {
            r = 0;
            Snd_PlaySe(0x24);
        }
        func_ov002_02201aa0(&s->unk_2488, s->unk_2a7, r);
        s->func_ov002_02200a58(0x17);
    }
}

void Unk_ov105_02298594::func_ov105_02296c38() {
    S *s = this;
    if (s->unk_2424.func_ov002_022028f0() == 0) {
        s->func_ov002_02200a58(s->unk_2a5);
        if (s->unk_2a5 == 7) {
            s->func_ov105_02295e6c(s->unk_2a2);
        }
        s->func_ov105_02297d18();
    }
    s->func_ov105_02295c34();
}

void Unk_ov105_02298594::func_ov105_02296bc8() {
    S *s = this;
    if (s->unk_2424.isAnimDone()) {
        if (s->func_ov105_02296208(s->unk_2a2)) {
            s->func_ov105_02295120();
        } else if (s->func_ov105_022961f4(s->unk_2a2)) {
            s32 v = s->unk_2a2 - 0x3e;
            if (v == s->unk_2a8) {
                s->func_ov105_02295814();
            } else {
                s->unk_2a8 = v;
                s->func_ov105_02294ea4();
            }
        } else {
            s->func_ov105_02295814();
        }
    }
}

void Unk_ov105_02298594::func_ov105_02296b88() {
    S *s = this;
    if (s->unk_2424.isAnimDone()) {
        s->func_ov105_02295854();
        if (s->unk_29c == 1) {
            s->func_ov002_02200a58(8);
        } else {
            s->func_ov002_02200a58(7);
        }
    }
}

void Unk_ov105_02298594::func_ov105_02296b58() {
    S *s = this;
    if (s->unk_2424.func_ov002_02202928()) {
        s->func_ov105_022963c0(s->unk_2a2);
        s->func_ov002_02200a58(0x11);
    }
}

void Unk_ov105_02298594::func_ov105_02296b28() {
    S *s = this;
    if (s->unk_2424.isAnimDone()) {
        s->func_ov002_02200a58(s->unk_2a5);
    }
    s->func_ov105_02295c34();
}

void Unk_ov105_02298594::func_ov105_02296ad0() {
    S *s = this;
    if (s->unk_2424.func_ov002_02202928() == 0) {
        u32 a = s->unk_2a4;
        if (s->unk_2a2 == a) {
            _ZN18Unk_ov105_0229859419func_ov105_02296108Ej(s);
            s->func_ov105_02295ce8();
            s->func_ov002_02200a58(7);
            func_ov094_02292398();
        } else {
            s->func_ov105_02296328(a, 4);
        }
    } else {
        s->func_ov105_02295c34();
    }
}

void Unk_ov105_02298594::func_ov105_02296a88() {
    S *s = this;
    if (s->unk_2424.func_ov002_022028fc() == 0) {
        s->func_ov105_02295b4c(s->unk_2a4);
        s->func_ov105_02294de8(0x40);
        s->func_ov002_02200a58(0x14);
        s->func_ov105_02295ce8();
    } else {
        s->func_ov002_02200a58(7);
    }
}

void Unk_ov105_02298594::func_ov105_02296a34() {
    S *s = this;
    if (s->unk_2424.isAnimDone()) {
        s->func_ov002_02200a58(s->unk_2a5);
    }
    if (s->unk_2424.func_ov002_02202928()) {
        if (s->func_ov105_02294df8(0x40)) {
            s->func_ov105_02294dd8(0x40);
            func_ov094_02292380();
        }
        s->func_ov105_02295c34();
    }
}

void Unk_ov105_02298594::func_ov105_022969d8() {
    S *s = this;
    if (s->unk_240c.func_ov002_02202718()) {
        if (s->func_ov105_02294df8(0x2000)) {
            s->func_ov105_02294dd8(0x2000);
            s->func_ov105_02295c0c();
        } else {
            s->func_ov105_02295b8c(s->unk_29f);
            s->func_ov105_022965cc();
            func_ov094_02292398();
        }
    } else {
        s->func_ov105_02295c0c();
    }
}

void Unk_ov105_02298594::func_ov105_0229699c() {
    S *s = this;
    if (((Unk_ov002_022013ac *)&s->unk_2488)->func_ov002_022017b4()) {
        if (MenuCtrl_IsButtons()) {
            s->func_ov105_022958a8();
            s->func_ov002_02200a58(0xb);
        } else {
            s->func_ov002_02200a58(6);
        }
    }
}

void Unk_ov105_02298594::func_ov105_0229694c() {
    S *s = this;
    if (func_ov002_02201a28(&s->unk_2488)) {
        func_ov002_02202064(&s->unk_2488, 0);
        s->unk_234c.func_ov002_022006e4(1);
        if (s->unk_2424.getAnim()) {
            s->func_ov105_02295874();
        }
        s->func_ov002_02200a58(0x18);
    }
}

void Unk_ov105_02298594::func_ov105_0229692c() {
    S *s = this;
    if (((Unk_ov002_022013ac *)&s->unk_2488)->func_ov002_022017a4()) {
        s->func_ov105_02295714();
    }
}

void Unk_ov105_02298594::func_ov105_022968f4() {
    S *s = this;
    if (s->unk_2788.func_ov002_02204234(0)) {
        s->func_ov002_02200a58(s->unk_2a5);
        s->unk_2424.enableObjWindow();
    }
}

void Unk_ov105_02298594::func_ov105_0229688c() {
    S *s = this;
    if (s->unk_2aa0.func_ov002_02203f08()) {
        if (s->unk_2424.getAnim()) {
            s32 a = s->unk_2aa0.func_ov002_02203f78(1);
            s32 b = s->unk_2aa0.func_ov002_02203f28(1);
            s->unk_2424.func_ov002_02202a40(a, b);
        }
    } else {
        s->func_ov105_02295a78();
        s->func_ov002_02200a50(9);
        s->func_ov002_02200a60(1);
    }
}

void Unk_ov105_02298594::func_ov105_02296820() {
    S *s = this;
    if (((Unk_ov002_02202fac *)&s->unk_728c)->func_ov002_0220308c()) {
        if (s->unk_2424.getAnim()) {
            s32 a = ((Unk_ov002_02202fac *)&s->unk_728c)->func_ov002_0220306c();
            s32 b = ((Unk_ov002_02202fac *)&s->unk_728c)->func_ov002_022030f4(-1);
            s32 c = ((Unk_ov002_02202fac *)&s->unk_728c)->func_ov002_022030b8(-1);
            s->unk_2424.func_ov002_02202a40(a + b, a + c);
        }
    } else {
        s->func_ov105_02295a78();
        s->func_ov002_02200a60(1);
    }
}

void Unk_ov105_02298594::func_ov105_022967e8() {
    S *s = this;
    if (func_ov094_02293c1c(&s->unk_d44)) {
        s->func_ov105_02294de8(0x1000);
        s->unk_29c = 0;
        s->func_ov105_022965cc();
    }
}

void Unk_ov105_02298594::func_ov105_0229677c() {
    if (func_ov002_02200a14(1)) {
        func_ov105_02296554();
    } else {
        if (Unk_ov105_0229677c_Both()) {
            if (((Unk_ov002_02202fac *)&unk_728c)->func_ov002_02203110(3)) {
                func_ov105_022950e4();
            }
            if (((Unk_ov002_02202fac *)&unk_728c)->func_ov002_02203110(4)) {
                func_ov105_022950b4();
            }
        }
    }
}

void Unk_ov105_02298594::func_ov105_02296678() {
    if (func_ov002_022009d4()) {
        func_ov105_022965b4();
    } else {
        u16 f = gPad[1];
        if ((f & 1) != 0) {
            ((Unk_ov002_0220464c *)&unk_2424)->func_ov002_02202b68();
            func_ov002_02200a58(0x1f);
        } else if ((f & 2) != 0) {
            func_ov105_02295a78();
            func_ov105_022950b4();
        } else if ((f & 8) != 0) {
            func_ov105_02295a78();
            func_ov105_022950e4();
        } else {
            u32 old = unk_2aa;
            s32 t = func_ov002_022009c8();
            if (func_ov002_0220126c((void *)t)) {
                if (unk_2aa != 0) {
                    unk_2aa--;
                }
            } else if (func_ov002_0220125c((void *)t)) {
                if (unk_2aa < 1) {
                    unk_2aa++;
                }
            }
            if (old != unk_2aa) {
                if (unk_2aa != 0) {
                    s32 a = ((Unk_ov002_02202fac *)&unk_728c)->func_ov002_022030f4(4);
                    s32 b = ((Unk_ov002_02202fac *)&unk_728c)->func_ov002_022030b8(4);
                    func_ov105_022959c8(a, b);
                } else {
                    s32 a = ((Unk_ov002_02202fac *)&unk_728c)->func_ov002_022030f4(3);
                    s32 b = ((Unk_ov002_02202fac *)&unk_728c)->func_ov002_022030b8(3);
                    func_ov105_022959c8(a, b);
                }
            }
        }
    }
}

void Unk_ov105_02298594::func_ov105_02296644() {
    if (unk_2424.isAnimDone()) {
        if (unk_2aa != 0) {
            func_ov105_022950b4();
        } else {
            func_ov105_022950e4();
        }
    }
}

void Unk_ov105_02298594::func_ov105_02296628() {
    func_ov105_02295a78();
    func_ov105_02295ebc();
    func_ov002_02200a58(0);
}

void Unk_ov105_02298594::func_ov105_022965ec() {
    unk_29e = 0x41;
    func_ov105_02295af4();
    func_ov002_02200980();
    func_ov105_02295ce8();
    func_ov002_02200a58(7);
    func_ov105_02295e6c(unk_2a2);
}

void Unk_ov105_02298594::func_ov105_022965cc() {
    if (MenuCtrl_IsTouch()) {
        func_ov105_02296628();
    } else {
        func_ov105_022965ec();
    }
}

void Unk_ov105_02298594::func_ov105_022965b4() {
    func_ov105_02295a78();
    func_ov002_02200a58(0x1d);
}

void Unk_ov105_02298594::func_ov105_02296554() {
    func_ov002_02200980();
    unk_2aa = 1;
    ((Unk_ov002_0220464c *)&unk_2424)->func_ov002_02202d00(1);
    unk_2424.vfunc_0c();
    s32 a = ((Unk_ov002_02202fac *)&unk_728c)->func_ov002_022030f4(4);
    s32 b = ((Unk_ov002_02202fac *)&unk_728c)->func_ov002_022030b8(4);
    unk_2424.func_ov002_02202a40(a, b);
    func_ov002_02200a58(0x1e);
}

void Unk_ov105_02298594::func_ov105_02296534() {
    if (MenuCtrl_IsTouch()) {
        func_ov105_022965b4();
    } else {
        func_ov105_02296554();
    }
}

void Unk_ov105_02298594::func_ov105_02296498(u32 a) {
    unk_29d = a;
    func_ov002_02200a58(1);
    u32 x = gTouchCurX;
    u32 y = gTouchCurY;
    unk_a4 = func_ov105_02295fe8(unk_29d) - x;
    unk_a8 = func_ov105_02295f7c(unk_29d) - y;
    unk_29e = a;
    unk_234c.func_ov002_022006b8();
    unk_234c.func_ov002_022006c0();
    unk_2ab = 2;
    if (func_ov105_02295f20(a)) {
        func_ov105_02294dd8(4);
    } else {
        func_ov105_02294de8(4);
        func_ov094_0229238c();
    }
}

void Unk_ov105_02298594::func_ov105_02296428(u8 a) {
    func_ov105_02294de8(0x1000);
    unk_29f = a;
    unk_2a1 = a;
    unk_2a0 = unk_2a8;
    unk_234c.func_ov002_022006e4(1);
    func_ov105_02295bb0(a);
    if (unk_29c == 1) {
        func_ov002_02200a58(4);
    }
    func_ov105_02295c7c();
    func_ov094_02292380();
}

void Unk_ov105_02298594::func_ov105_022963c0(u8 a) {
    unk_29f = a;
    unk_2a1 = a;
    unk_2a0 = unk_2a8;
    unk_234c.func_ov002_022006e4(1);
    func_ov105_02295bb0(a);
    if (unk_29c == 1) {
        unk_2a5 = 8;
    }
    func_ov105_02295c34();
    func_ov094_02292380();
}

void Unk_ov105_02298594::func_ov105_02296328(u32 a, u32 c) {
    unk_29f = a;
    unk_240c.func_ov002_022026f4(unk_ac, unk_b0);
    s32 t = func_ov105_02295f7c(a);
    if (func_ov105_022961f4(a)) {
        t -= 8;
    }
    unk_240c.func_ov002_022026c4(func_ov105_02295fe8(a), t, c);
    unk_240c.func_ov002_02202718();
    func_ov105_02295c0c();
    if (func_ov105_022961f4(a)) {
        func_ov105_02294de8(0x2000);
    } else {
        func_ov105_02294dd8(0x2000);
    }
    func_ov002_02200a58(0x15);
}

void Unk_ov105_02298594::func_ov105_022962e4(u32 a, s32 b) {
    u32 r = 0x41;
    if (b >= 0xc0) {
        if (func_ov105_02296214(a)) {
            r = func_ov105_0229628c();
        }
    } else {
        if (func_ov105_02296224(a)) {
            r = func_ov105_02296244();
        }
    }
    if (r != 0x41) {
        a = r;
    }
    func_ov105_02296328(a, 4);
}

void Unk_ov105_02298594::func_ov105_022962ac(u32 a, u32 b, u32 c) {
    func_ov105_02295bb0(a);
    unk_ac = func_ov105_02295fe8(a);
    unk_b0 = func_ov105_02295f7c(a);
    func_ov105_02296328(b, 4);
}

u32 Unk_ov105_02298594::func_ov105_0229628c() {
    s32 r = func_020991fc();
    if (r == -1) {
        return 0x41;
    }
    return (u8)(r + 0x1a);
}

u32 Unk_ov105_02298594::func_ov105_02296244() {
    Letter *p = &unk_2b10[unk_2a8 * 0x19];
    s32 i;
    for (i = 0; i < 0x19; p++, i++) {
        if (((Unk_02065554 *)p)->func_02065578() == 0) {
            return (u8)(i + 0x24);
        }
    }
    return 0x41;
}

void Unk_ov105_02298594::func_ov105_02296234() {
    ((Unk_020e45f8 *)unk_2ac)->func_020b87d0();
}

BOOL Unk_ov105_02298594::func_ov105_02296224(u32 a) {
    if (a >= 0x1a && a <= 0x23) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov105_02298594::func_ov105_02296214(u32 a) {
    if (a >= 0x24 && a <= 0x3c) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov105_02298594::func_ov105_02296208(u32 a) {
    if (a == 0x3d) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov105_02298594::func_ov105_022961f4(u32 a) {
    if ((u8)(a + 0xc2) <= 2) {
        return TRUE;
    }
    return FALSE;
}

u32 Unk_ov105_02298594::func_ov105_022961d0(u32 a) {
    if (a >= 0x1a && a <= 0x23) {
        return (u8)(a - 0x1a);
    }
    if (a >= 0x24 && a <= 0x3c) {
        return (u8)(a - 0x1a);
    }
    return 0;
}

u32 Unk_ov105_02298594::func_ov105_022961b0(u32 a) {
    if (a <= 9) {
        return (u8)(a + 0x1a);
    }
    if (a >= 0xa && a <= 0x22) {
        return (u8)(a + 0x1a);
    }
    return 0x41;
}

s32 Unk_ov105_02298594::func_ov105_02296154(u32 a, u32 b, u32 c) {
    s32 r = _ZN18Unk_ov094_02294bd419func_ov094_02294610Eii(&unk_d44);
    if (r == 0x37) {
        r = unk_d44.func_ov094_022945dc(a, b);
    }
    if (r != 0x37) {
        if (c != 0 && func_ov094_02293d80(&unk_d44, r)) {
            return 0x41;
        }
        return func_ov105_022961b0(r);
    }
    return 0x41;
}

BOOL Unk_ov105_02298594::func_ov105_02296108(u32 a) {
    if (!func_ov105_02295ee0(a)) {
        func_02065e70(&unk_1a8, (void *)func_ov105_02296054(a));
        func_ov105_02296094(unk_29f, &unk_1a8);
    }
    func_ov105_02295b8c(a);
    return TRUE;
}

void Unk_ov105_02298594::func_ov105_02296094(u32 a, void *c) {
    if (func_ov105_02296224(a) || func_ov105_02296214(a)) {
        unk_d44.func_ov094_02294318(func_ov105_022961d0(a), (s32)c);
    } else if (func_ov105_022961f4(a)) {
        func_02065e70(&unk_2b10[(unk_2a1 - 0x24) + unk_2a0 * 0x19], c);
    }
}

s32 Unk_ov105_02298594::func_ov105_02296054(u32 a) {
    if (func_ov105_02296224(a) || func_ov105_02296214(a)) {
        return (s32)unk_d44.func_ov094_0229433c(func_ov105_022961d0(a));
    }
    return 0;
}

s32 Unk_ov105_02298594::func_ov105_02295fe8(u32 a) {
    if (func_ov105_02296224(a) || func_ov105_02296214(a)) {
        return func_ov094_02293df8(&unk_d44, func_ov105_022961d0(a));
    }
    if (a == 0x3d) {
        return 0xbc;
    }
    if (func_ov105_022961f4(a)) {
        return func_02087e14(&data_ov105_02298544[(a - 0x3e) * 3]) + 0x80;
    }
    return 0;
}

s32 Unk_ov105_02298594::func_ov105_02295f7c(u32 a) {
    if (func_ov105_02296224(a) || func_ov105_02296214(a)) {
        return func_ov094_02293d9c(&unk_d44, func_ov105_022961d0(a)) - 0x10;
    }
    if (a == 0x3d) {
        return 0xb6;
    }
    if (func_ov105_022961f4(a)) {
        return func_02087e0c(&data_ov105_02298544[(a - 0x3e) * 3]) + 0x58;
    }
    return 0;
}

void Unk_ov105_02298594::func_ov105_02295f54() {
    func_ov094_02293318(&unk_2e4, 0, 0xe);
    unk_d44.func_ov094_022941f8(4);
}

BOOL Unk_ov105_02298594::func_ov105_02295f20(u32 a) {
    if (func_ov105_02296224(a)) {
        return unk_d44.func_ov094_022941ec(func_ov105_022961d0(a));
    }
    return FALSE;
}

BOOL Unk_ov105_02298594::func_ov105_02295ee0(u32 a) {
    if (func_ov105_02296224(a) || func_ov105_02296214(a)) {
        return func_ov094_02293d80(&unk_d44, func_ov105_022961d0(a));
    }
    return TRUE;
}

void Unk_ov105_02298594::func_ov105_02295ebc() {
    func_ov094_022935dc(&unk_2e4);
    unk_d44.func_ov094_022943f8();
}

void Unk_ov105_02298594::func_ov105_02295e6c(u32 b) {
    S *s = this;
    if (s->func_ov105_02296224(b) || s->func_ov105_02296214(b)) {
        s->unk_d44.func_ov094_022943bc(s->func_ov105_022961d0(b));
        func_ov094_022935dc(&s->unk_2e4);
    } else {
        s->func_ov105_02295ebc();
    }
}

void Unk_ov105_02298594::func_ov105_02295e48() {
    S *s = this;
    func_ov094_0229358c(&s->unk_2e4);
    s->unk_d44.func_ov094_022943b0();
}

void Unk_ov105_02298594::func_ov105_02295e0c(u32 b) {
    S *s = this;
    if (s->func_ov105_02296224(b) || s->func_ov105_02296214(b)) {
        s->unk_d44.func_ov094_022943a4(s->func_ov105_022961d0(b));
    }
}

BOOL Unk_ov105_02298594::func_ov105_02295dc8() {
    s32 d = gTouchPressX - gTouchCurX;
    if (d < 0) d = -d;
    if (d > 8) return TRUE;
    d = gTouchPressY - gTouchCurY;
    if (d < 0) d = -d;
    if (d > 8) return TRUE;
    return FALSE;
}

void Unk_ov105_02298594::func_ov105_02295d4c() {
    S *s = this;
    s32 r6 = s->func_ov105_02295fe8(s->unk_29e) - 0x6d;
    s32 r4 = s->func_ov105_02295f7c(s->unk_29e) - 0x78;
    if (MenuCtrl_IsButtons()) r4 -= 8;
    s->unk_234c.setPos(r6, r4);
    if (s->func_ov105_02296224(s->unk_29e) || s->func_ov105_02296214(s->unk_29e)) {
        s->unk_d44.func_ov094_02294420(&s->unk_234c,
 s->func_ov105_022961d0(s->unk_29e));
    }
}

void Unk_ov105_02298594::func_ov105_02295ce8() {
    S *s = this;
    if (s->func_ov105_02296224(s->unk_2a2) || s->func_ov105_02296214(s->unk_2a2)) {
        if (s->func_ov105_02295ee0(s->unk_2a2)) {
            s->unk_234c.func_ov002_022006b0();
        } else {
            s->unk_29e = s->unk_2a2;
            s->unk_234c.func_ov002_022006b8();
        }
    } else {
        s->unk_234c.func_ov002_022006b0();
    }
}

void Unk_ov105_02298594::func_ov105_02295ca8() {
    S *s = this;
    if (s->func_ov105_02294df8(0x40) == 0) {
        u32 v = s->unk_29c;
        if (v == 0) {
        } else if (v == 1) {
            s->unk_d44.func_ov094_0229405c(s->unk_ac, s->unk_b0, &s->unk_b4)
;
        }
    }
}

void Unk_ov105_02298594::func_ov105_02295c7c() {
    S *s = this;
    s->unk_ac = s->unk_a4 + gTouchCurX;
    s->unk_b0 = s->unk_a8 + gTouchCurY;
}

void Unk_ov105_02298594::func_ov105_02295c34() {
    S *s = this;
    s->unk_ac = s->unk_2424.func_ov002_022028c8() - 2;
    s->unk_b0 = s->unk_2424.func_ov002_022028a0() - 4;
    if (s->unk_2424.getAnim() == 1) {
        s->unk_b0 -= 0x16;
    }
}

void Unk_ov105_02298594::func_ov105_02295c0c() {
    S *s = this;
    s->unk_ac = s->unk_240c.func_ov002_02202710();
    s->unk_b0 = s->unk_240c.func_ov002_02202708();
}

void Unk_ov105_02298594::func_ov105_02295bb0(u32 b) {
    S *s = this;
    if (s->func_ov105_02296224(b) || s->func_ov105_02296214(b)) {
        u32 r4 = s->func_ov105_022961d0(b);
        s->unk_29c = 1;
        func_02065e70(&s->unk_b4, s->unk_d44.func_ov094_0229433c(r4));
        s->unk_d44.func_ov094_022942f4(r4);
    }
}

void Unk_ov105_02298594::func_ov105_02295b8c(u32 b) {
    S *s = this;
    if (s->unk_29c == 1) {
        s->func_ov105_02296094(b, &s->unk_b4);
    }
    s->unk_29c = 0;
}

void Unk_ov105_02298594::func_ov105_02295b4c(u32 b) {
    S *s = this;
    if (s->unk_29c == 1) {
        func_02065e70(&s->unk_1a8, &s->unk_b4);
        s->func_ov105_02295bb0(b);
        s->func_ov105_02296094(b, &s->unk_1a8);
    }
}

void Unk_ov105_02298594::func_ov105_02295af4() {
    S *s = this;
    s32 r4 = s->func_ov105_02295aac();
    s32 r2 = s->func_ov105_02295a9c();
    s->unk_2424.func_ov002_02202a40(r4, r2);
    if (s->func_ov105_02296208(s->unk_2a2)) {
        ((Unk_ov002_0220464c *)&s->unk_2424)->func_ov002_02202d00(7);
    } else {
        ((Unk_ov002_0220464c *)&s->unk_2424)->func_ov002_02202d00(1);
    }
    s->func_ov105_02295854();
}

s32 Unk_ov105_02298594::func_ov105_02295aac() {
    S *s = this;
    s32 r4 = s->func_ov105_02295fe8(s->unk_2a2);
    if (s->func_ov105_02294df8(0x20)) {
        r4 += 0x100;
    } else if (s->func_ov105_02294df8(0x10)) {
        r4 -= 0x100;
    }
    r4 += 8;
    return r4;
}

s32 Unk_ov105_02298594::func_ov105_02295a9c() {
    S *s = this;
    return s->func_ov105_02295f7c(s->unk_2a2);
}

void Unk_ov105_02298594::func_ov105_02295a78() {
    S *s = this;
    ((Unk_ov002_0220464c *)&s->unk_2424)->func_ov002_02202d00(0);
    s->unk_2424.vfunc_0c();
}

void Unk_ov105_02298594::func_ov105_02295a00() {
    S *s = this;
    if (s->func_ov105_02294df8(8)) {
        s32 r5 = s->func_ov105_02295aac();
        s32 r2 = s->func_ov105_02295a9c();
        s->unk_2424.func_ov002_02202a40(r5, r2);
        s->func_ov105_02294dd8(8);
    } else {
        s32 r5 = s->func_ov105_02295aac();
        s32 r2 = s->func_ov105_02295a9c();
        s->unk_2424.func_ov002_022029e8(r5, r2, 3, 1);
        s->unk_2a5 = s->unk_8d;
        s->func_ov002_02200a58(0xd);
    }
}

void Unk_ov105_02298594::func_ov105_022959c8(s32 a, s32 b) {
    S *s = this;
    s->unk_2424.func_ov002_022029e8(a, b, 3, 1);
    s->unk_2a5 = s->unk_8d;
    s->func_ov002_02200a58(0xd);
}

void Unk_ov105_02298594::func_ov105_02295974() {
    S *s = this;
    s32 r4 = ((Unk_ov002_022013ac *)&s->unk_2488)->func_ov002_022014a4();
    s32 r2 = ((Unk_ov002_022013ac *)&s->unk_2488)->func_ov002_02201498(s->unk_2a7);
    s->unk_2424.func_ov002_02202a18(r4, r2, 2);
    s->unk_2a5 = s->unk_8d;
    s->func_ov002_02200a58(0xd);
}

void Unk_ov105_02298594::func_ov105_0229590c() {
    S *s = this;
    s->unk_2a6 = 4;
    s->unk_2a7 = func_ov002_02201a70(&s->unk_2488, 1);
    s32 r4 = ((Unk_ov002_022013ac *)&s->unk_2488)->func_ov002_022014a4();
    s32 r2 = ((Unk_ov002_022013ac *)&s->unk_2488)->func_ov002_02201498(s->unk_2a7);
    s->unk_2424.func_ov002_02202a40(r4, r2);
    s->unk_2424.setAnimAtEnd(8);
    s->func_ov002_02200a58(0x17);
}

void Unk_ov105_02298594::func_ov105_022958a8() {
    S *s = this;
    if (s->func_ov105_02294df8(0x800)) {
        s->unk_2a7 = 1;
    } else {
        s->unk_2a7 = 0;
    }
    s32 r4 = ((Unk_ov002_022013ac *)&s->unk_2488)->func_ov002_022014a4();
    s32 r2 = ((Unk_ov002_022013ac *)&s->unk_2488)->func_ov002_02201498(s->unk_2a7);
    s->unk_2424.func_ov002_02202a40(r4, r2);
    ((Unk_ov002_0220464c *)&s->unk_2424)->func_ov002_02202d00(7);
}

void Unk_ov105_02298594::func_ov105_02295874() {
    S *s = this;
    s32 r4 = s->func_ov105_02295aac();
    s32 r2 = s->func_ov105_02295a9c();
    s->unk_2424.func_ov002_02202a40(r4, r2);
    ((Unk_ov002_0220464c *)&s->unk_2424)->func_ov002_02202d00(1);
}

void Unk_ov105_02298594::func_ov105_02295854() {
    S *s = this;
    s->unk_2424.func_ov002_02202a78();
    s->unk_2424.vfunc_0c();
}

void Unk_ov105_02298594::func_ov105_02295834() {
    S *s = this;
    ((Unk_ov002_0220464c *)&s->unk_2424)->func_ov002_02202b68();
    s->func_ov002_02200a58(0xe);
}

void Unk_ov105_02298594::func_ov105_02295814() {
    S *s = this;
    s->unk_2424.func_ov002_02202af0();
    s->func_ov002_02200a58(0xf);
}

void Unk_ov105_02298594::func_ov105_022957e8() {
    S *s = this;
    ((Unk_ov002_0220464c *)&s->unk_2424)->func_ov002_02202d00(4);
    s->func_ov002_02200a58(0x10);
    s->func_ov105_02294de8(0x1000);
}

void Unk_ov105_02298594::func_ov105_022957ac(u32 b) {
    S *s = this;
    s->unk_234c.func_ov002_022006e4(1);
    s->unk_2a4 = b;
    ((Unk_ov002_0220464c *)&s->unk_2424)->func_ov002_02202d00(5);
    s->func_ov002_02200a58(0x12);
}

void Unk_ov105_02298594::func_ov105_02295760(u32 b) {
    S *s = this;
    s->unk_234c.func_ov002_022006e4(1);
    s->unk_2a5 = s->unk_8d;
    s->unk_2a4 = b;
    ((Unk_ov002_0220464c *)&s->unk_2424)->func_ov002_02202d00(6);
    s->func_ov002_02200a58(0x13);
}

void Unk_ov105_02298594::func_ov105_02295714() {
    S *s = this;
    switch (s->unk_2a6) {
    case 0:
        s->func_ov105_022957e8();
        break;
    case 1:
        s->func_ov105_022951ec();
        break;
    case 2:
        s->func_ov105_02295158();
        break;
    case 3:
        s->func_ov105_02295150();
        break;
    case 4:
    default:
        s->func_ov105_022965cc();
        break;
    }
}

void Unk_ov105_02298594::func_ov105_02295698(u32 b) {
    S *s = this;
    u32 r2 = s->func_ov105_02294df8(0x800);
    ((Unk_ov002_022013ac *)&s->unk_2488)->func_ov002_0220160c((Unk_ov002_022013ac_Rec *)s->unk_2488.unk_2f4, r2);
    s32 r6 = s->func_ov105_02295fe8(s->unk_2a3);
    s32 r2b = s->func_ov105_02295f7c(s->unk_2a3);
    if (b != 0) {
        _ZN18Unk_ov002_0220455819func_ov002_02202200EP12LabelBalloon(&s->unk_2488, &s->unk_234c, r2b);
    } else {
        s->unk_2488.func_ov002_0220229c(r6, r2b);
    }
    func_ov002_02202098(&s->unk_2488, 0);
    s->func_ov002_02200a58(0x16);
}

void Unk_ov105_02298594::func_ov105_02295668() {
    S *s = this;
    s->unk_2a6 = 4;
    s->func_ov105_02295874();
    func_ov002_02202064(&s->unk_2488, 0);
    s->func_ov002_02200a58(0x18);
}

void Unk_ov105_02298594::func_ov105_02295594(u32 a, u32 b) {
    S *s = this;
    s->func_ov105_02294dd8(0x800);
    s->unk_2a3 = a;
    func_ov002_022016e4(s->unk_2488.unk_2f4, 4);
    u32 r7 = s->func_ov105_02296054(a);
    if (MenuCtrl_IsButtons()) {
        func_ov002_02201700(s->unk_2488.unk_2f4, 0, 0);
    }
    u32 r5 = ((Unk_02065554 *)r7)->func_02065578();
    if (r5 != 0) {
        if (r5 == 7) {
            func_ov002_02201700(s->unk_2488.unk_2f4, 0x17, 1);
        } else {
            func_ov002_02201700(s->unk_2488.unk_2f4, 0x14, 1);
        }
    }
    if (((Unk_02065554 *)r7)->func_020655d0() == 0xfff1) {
        if (r5 == 3 || r5 == 6 || r5 == 1 || r5 == 4) {
            func_ov002_02201700(s->unk_2488.unk_2f4, 0x15, 3);
        }
    }
    func_ov002_02201700(s->unk_2488.unk_2f4, 2, 4);
    s->func_ov105_02295a78();
    if (b == 0) {
        s->unk_234c.func_ov002_022006e4(1);
    }
    s->func_ov105_02295698(b);
}

void Unk_ov105_02298594::func_ov105_02295544() {
    func_ov105_02294de8(0x800);
    func_ov002_022016e4(&unk_2488.unk_2f4, 4);
    func_ov002_02201700(&unk_2488.unk_2f4, 0x1a, 4);
    func_ov002_02201700(&unk_2488.unk_2f4, 0x15, 2);
    func_ov002_02201700(&unk_2488.unk_2f4, 0x19, 4);
    func_ov105_02295698(0);
}

void Unk_ov105_02298594::func_ov105_02295464(void *pad, u32 x) {
    s32 r6 = unk_2a2 - 0x1a;
    s32 r4 = r6 >> 1;
    if (func_ov002_0220126c(pad)) {
        if ((r6 & 1) > 0) {
            unk_2a2 = unk_2a2 - 1;
        } else {
            unk_2a2 = r4 * 5 + 0x28;
            return;
        }
    } else if (func_ov002_0220125c(pad)) {
        if ((r6 & 1) < 1) {
            unk_2a2 = unk_2a2 + 1;
        } else {
            unk_2a2 = r4 * 5 + 0x24;
            func_ov105_02294de8(0x20);
            return;
        }
    }
    if (func_ov105_02296224(unk_2a2)) {
        if (!func_ov105_02294df8(0x30)) {
            if (func_ov002_0220128c(pad)) {
                if (r4 > 0) {
                    unk_2a2 = unk_2a2 - 2;
                }
            } else if (func_ov002_0220127c(pad)) {
                if (r4 < 4) {
                    unk_2a2 = unk_2a2 + 2;
                } else if (x == 0) {
                    unk_2a2 = 0x3d;
                    ((Unk_ov002_0220464c *)&unk_2424)->func_ov002_02202ca0();
                }
            }
        }
    }
}

void Unk_ov105_02298594::func_ov105_0229536c(void *pad, u32 x) {
    s32 r4 = unk_2a2 - 0x24;
    s32 r6 = 0;
    while (r4 >= 5) {
        r6++;
        r4 -= 5;
    }
    if (func_ov002_0220126c(pad)) {
        if (r4 > 0) {
            unk_2a2 = unk_2a2 - 1;
            r4 = r4 - 1;
        } else {
            unk_2a2 = r6 * 2 + 0x1b;
            func_ov105_02294de8(0x10);
            return;
        }
    } else if (func_ov002_0220125c(pad)) {
        if (r4 < 4) {
            unk_2a2 = unk_2a2 + 1;
            r4 = r4 + 1;
        } else {
            unk_2a2 = r6 * 2 + 0x1a;
            return;
        }
    }
    if (func_ov105_02296214(unk_2a2)) {
        if (!func_ov105_02294df8(0x30)) {
            if (func_ov002_0220128c(pad)) {
                if (r6 > 0) {
                    unk_2a2 = unk_2a2 - 5;
                } else if (r4 < 3) {
                    unk_2a2 = r4 + 0x3e;
                } else {
                    unk_2a2 = 0x40;
                }
            } else if (func_ov002_0220127c(pad)) {
                if (r6 < 4) {
                    unk_2a2 = unk_2a2 + 5;
                } else if (x == 0) {
                    unk_2a2 = 0x3d;
                    ((Unk_ov002_0220464c *)&unk_2424)->func_ov002_02202ca0();
                }
            }
        }
    }
}

void Unk_ov105_02298594::func_ov105_02295340(void *pad) {
    if (func_ov002_0220128c(pad)) {
        ((Unk_ov002_0220464c *)&unk_2424)->func_ov002_02202c40();
        unk_2a2 = 0x22;
    }
}

void Unk_ov105_02298594::func_ov105_022952e4(void *pad) {
    if (func_ov002_0220126c(pad)) {
        if (unk_2a2 > 0x3e) {
            unk_2a2 = unk_2a2 - 1;
        }
    } else if (func_ov002_0220125c(pad)) {
        if (unk_2a2 < 0x40) {
            unk_2a2 = unk_2a2 + 1;
        }
    }
    if (func_ov002_0220127c(pad)) {
        unk_2a2 = unk_2a2 - 0x1a;
    }
}

BOOL Unk_ov105_02298594::func_ov105_02295210(void *pad, u32 x) {
    u8 old = unk_2a2;
    func_ov105_02294dd8(0x30);
    if (pad == 0) {
        return FALSE;
    }
    if (func_ov105_02296224(unk_2a2)) {
        func_ov105_02295464(pad, x);
    } else if (func_ov105_02296214(unk_2a2)) {
        func_ov105_0229536c(pad, x);
        if (func_ov105_022961f4(unk_2a2)) {
            if (x == 1) {
                ((Unk_ov002_0220464c *)&unk_2424)->func_ov002_02202d00(1);
            }
        }
    } else if (func_ov105_02296208(unk_2a2)) {
        func_ov105_02295340(pad);
    } else if (func_ov105_022961f4(unk_2a2)) {
        func_ov105_022952e4(pad);
        if (!func_ov105_022961f4(unk_2a2)) {
            if (x == 1) {
                unk_2424.setAnimAtEnd(4);
            }
        }
    }
    if (old != unk_2a2) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov105_02298594::func_ov105_022951ec() {
    func_ov002_02200a50(4);
    func_ov002_02200a60(1);
    func_ov105_02294de8(0x100);
}

void Unk_ov105_02298594::func_ov105_022951c8() {
    func_ov002_02200a58(0x1a);
    unk_2aa0.setState(2);
    Snd_PlaySe(0x29);
}

void Unk_ov105_02298594::func_ov105_02295158() {
    u8 r4 = unk_2a3;
    func_ov105_02295bb0(r4);
    unk_ac = func_ov105_02295fe8(r4);
    unk_b0 = func_ov105_02295f7c(r4);
    if (MenuCtrl_IsButtons()) {
        unk_ac -= 2;
        unk_b0 -= 2;
    }
    func_ov002_02200a58(0x1c);
    func_ov094_02293c58(&unk_d44);
}

void Unk_ov105_02298594::func_ov105_02295150() { func_ov105_02295544(); }

void Unk_ov105_02298594::func_ov105_0229514c() {}

void Unk_ov105_02298594::func_ov105_02295120() {
    Snd_PlaySe(0x29);
    ((Unk_ov002_02202fac *)&unk_728c)->func_ov002_022030ac(9);
    func_ov002_02200a58(0x1b);
    unk_8c = 0xe;
}

void Unk_ov105_02298594::func_ov105_022950e4() {
    Snd_PlaySe(0x27);
    ((Unk_ov002_02202fac *)&unk_728c)->func_ov002_022030ac(3);
    unk_8c = 4;
    func_ov105_02294dd8(0x100);
    func_ov002_02200a58(0x1b);
}

void Unk_ov105_02298594::func_ov105_022950b4() {
    Snd_PlaySe(0x2a);
    ((Unk_ov002_02202fac *)&unk_728c)->func_ov002_022030ac(4);
    unk_8c = 0x12;
    func_ov002_02200a58(0x1b);
}

void Unk_ov105_02298594::func_ov105_02295014() {
    s32 i, j;
    s32 a, b;
    s32 z0 = 0, z1 = 0, z2 = 0;
    void *p = (void *)(unk_a0 + 0x80);
    for (i = 0, j = i; i < 3; i++, j += 3) {
        if (i == unk_2a8) {
            a = 0x52;
            b = 4;
        } else {
            a = 0x50;
            b = 5;
        }
        func_02088730(1, &data_ov105_02298544[j], p, a, -1, 1, z0);
        func_02088730(1, &data_ov105_02298544[j + 1], p, a, b, 1, z1);
        func_02088730(1, &data_ov105_02298544[j + 2], p, 0x50, -1, 1, z2);
    }
}

void Unk_ov105_02298594::func_ov105_02294f84() {
    func_ov094_02293d04(&unk_d44, &unk_2b10[unk_2a8 * 0x19]);
    func_0200261c(data_ov105_022984d8[unk_2a8], gCurrentHeap, 4, 0x1e2, 0x1e2, 0x1ed);
    func_ov002_022008e0(2, 0, 2, 0x30);
    func_ov002_02200850(0xc0);
    func_020020b8(4);
    func_ov105_02294de8(0x200);
    func_ov105_02297834();
}

void Unk_ov105_02298594::func_ov105_02294f48() {
    unk_234c.func_ov002_022006e4(1);
    func_ov105_02295a78();
    func_ov002_022008c4(2, 0, 2, 0x30);
    func_ov002_02200850(0xc0);
}

BOOL Unk_ov105_02298594::func_ov105_02294ef0(s32 x, s32 y) {
    s32 i, j;
    s32 xs = x - 0x80;
    volatile s32 yv = y;
    yv = y - 0x60;
    for (i = 0, j = i; i < 3; i++, j += 3) {
        if (i != unk_2a8) {
            if (func_02087dac(&data_ov105_02298544[j], xs, yv, 2, 2)) {
                unk_2a8 = i;
                return TRUE;
            }
        }
    }
    return FALSE;
}

void Unk_ov105_02298594::func_ov105_02294ea4() {
    Snd_PlaySe(data_ov105_02298314[unk_2a8]);
    unk_234c.func_ov002_022006e4(1);
    func_ov105_02295a78();
    unk_8c = 0xb;
    func_ov002_02200a60(1);
    func_ov105_02294de8(0x40);
}

void Unk_ov105_02298594::func_ov105_02294e80() {
    func_0200142c();
    func_020013cc(-6);
    ((Unk_ov002_02202fac *)&unk_728c)->func_ov002_02203044();
}

void Unk_ov105_02298594::func_ov105_02294e64() {
    func_0200140c();
    ((Unk_ov002_02202fac *)&unk_728c)->func_ov002_0220301c();
}

BOOL Unk_ov105_02298594::func_ov105_02294e0c() {
    s32 d = 0;
    u32 k = gPad[1];
    if (k & 0x200) {
        d = -1;
    } else if (k & 0x100) {
        d = 1;
    }
    if (d != 0) {
        d += unk_2a8;
        if (d < 0) {
            d = 2;
        } else if (d > 2) {
            d = 0;
        }
        unk_2a8 = d;
        func_ov105_02294ea4();
    }
    return FALSE;
}

BOOL Unk_ov105_02298594::func_ov105_02294df8(u32 mask) {
    if (unk_94 & mask) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov105_02298594::func_ov105_02294de8(u32 mask) { unk_94 = unk_94 | mask; }

void Unk_ov105_02298594::func_ov105_02294dd8(u32 mask) { unk_94 = unk_94 & ~mask; }

extern "C" const char *data_ov105_022984d8[3] = {data_ov105_022984e4, data_ov105_02298504, data_ov105_02298524};

extern "C" char data_ov105_02298504[] = "menu/inventory/b_itm_post1.bch";

extern "C" const u16 data_ov105_02298314[3] = {0x1b, 0x1c, 0x1d};

extern "C" char data_ov105_022984e4[] = "menu/inventory/b_itm_post0.bch";

extern "C" Unk_ov105_Ent data_ov105_02298544[9] = {
    {0x41ac00c0, 0x000041c0}, {0x41ac00c1, 0x0000411e}, {0x41ac00c3, 0x0000111e},
    {0x41c400c0, 0x000041c2}, {0x41c400c1, 0x0000511e}, {0x41c400c3, 0x0000111e},
    {0x41dc00c0, 0x000041c4}, {0x41dc00c1, 0x0000511e}, {0x41dc00c3, 0xffff111e},
};
