#define postCreate() postCreate(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef postCreate
#undef vfunc_14

class Unk_ov096_0229aea8;
typedef void (Unk_ov096_0229aea8::*Unk_ov096_0229aea8_Fn)();

// plain-function view of the scene object (the free functions in 0x02297b14..0x02298d34 take it)
struct Unk_ov096_02294c40 {
    u8 unk_00[0x8d];
    u8 unk_8d;
    u8 unk_8e[0x9c - 0x8e];
    s32 unk_9c;
    s32 unk_a0;
    s32 unk_a4;
    s32 unk_a8;
    u16 unk_ac;
    u16 unk_ae;
    u8 unk_b0;
    u8 unk_b1;
    u8 unk_b2;
    u8 unk_b3;
    u8 unk_b4;
    u8 unk_b5;
    u8 unk_b6;
    u8 unk_b7;
    u8 unk_b8;
    u8 unk_b9;
    u8 unk_ba;
    u8 unk_bb;
    u8 unk_bc;
    u8 unk_bd;
    u8 unk_be;
    u8 unk_bf;
    u8 unk_c0;
    volatile u8 unk_c1;
    u8 unk_c2;
    u8 unk_c3;
    s32 unk_c4;
    u8 unk_c8[0x358 - 0xc8];
    u8 s_358[0x23c0 - 0x358];
    u8 s_23c0[0x2480 - 0x23c0];
    u8 s_2480[0x2498 - 0x2480];
    u8 s_2498[0x24fc - 0x2498];
    u8 s_24fc[0x27f0 - 0x24fc];
    u8 s_27f0[0x27fc - 0x27f0];
    u8 s_27fc[0x2b14 - 0x27fc];
    u8 s_2b14[0x2c8c - 0x2b14];
    u8 s_2c8c[8];
};
typedef Unk_ov096_02294c40 S;

struct Unk_ov096_02297fb8_Msg {
    u8 a;
    u8 b;
};

struct Unk_020cbb18 {
    u8 pad_00[0x64];
    s32 unk_64;
    BOOL func_02072e44();
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

class Unk_ov096_0229a94c_Virt {
public:
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
};

class Unk_ov096_02299eec_Obj {
public:
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
    virtual void vfunc_0c();
};

static inline BOOL IsZero(u8 v)
{
    return v == 0 ? TRUE : FALSE;
}

static inline BOOL Unk_ov096_0229590c_IsZero(u8 v) { return v == 0 ? TRUE : FALSE; }

static inline BOOL Unk_ov096_02295a44_Range(volatile u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    u32 a = *p;
    u32 b = *p;
    if (b >= lo && a <= hi) r = TRUE;
    return r;
}

static inline BOOL Unk_ov096_022968bc_InRange(volatile u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    u32 x = *p;
    u32 y = *p;
    if (y >= lo && x <= hi) {
        r = TRUE;
    }
    return r;
}

extern "C" {
void _ZN18Unk_ov096_0229aea819func_ov096_02296bb8Et(void *self, s32 a);
s32 _ZN18Unk_ov096_0229aea819func_ov096_02294d9cEj(S *s, u32 a);
s32 _ZN18Unk_ov096_0229aea819func_ov096_02294dacEj(S *s, u32 a);
s32 _ZN18Unk_ov096_0229aea819func_ov096_02294dbcEj(S *s, u32 a);
void _ZN18Unk_ov096_0229aea819func_ov096_02294e08Ev(S *s);
void _ZN18Unk_ov096_0229aea819func_ov096_02294ed4Ev(S *s);
void _ZN18Unk_ov096_0229aea819func_ov096_02294ef4Ev(S *s);
void _ZN18Unk_ov096_0229aea819func_ov096_02294f14Ev(S *s);
void _ZN18Unk_ov096_0229aea819func_ov096_022956a0Ei(S *s, u32 a);
void _ZN18Unk_ov096_0229aea819func_ov096_02295a44Ei(S *s, u32 a);
void _ZN18Unk_ov096_0229aea819func_ov096_02295d28Ev(S *s);
void _ZN18Unk_ov096_0229aea819func_ov096_02296708Ev(S *s);
void _ZN18Unk_ov096_0229aea819func_ov096_0229673cEv(S *s);
void _ZN18Unk_ov096_0229aea819func_ov096_02296898Ev(S *s);
void _ZN18Unk_ov096_0229aea819func_ov096_02296910Ev(S *s);
void _ZN18Unk_ov096_0229aea819func_ov096_02296964Ev(S *s);
s32 _ZN18Unk_ov096_0229aea819func_ov096_022969bcEPtiS0_h(S *s, void *a, u32 b, u16 *c, s32 d);
void _ZN18Unk_ov096_0229aea819func_ov096_02296b68Et(S *s, u32 a);
s32 _ZN18Unk_ov096_0229aea819func_ov096_02296c18Ev(S *s);
s32 _ZN18Unk_ov096_0229aea819func_ov096_02296cacEv(S *s);
void _ZN18Unk_ov096_0229aea819func_ov096_02296d5cEv(S *s);
s32 _ZN18Unk_ov096_0229aea819func_ov096_02296d88Ei(S *s, u32 a);
s32 _ZN18Unk_ov096_0229aea819func_ov096_02296dbcEit(S *s, u32 a, u32 b);
u32 _ZN18Unk_ov096_0229aea819func_ov096_02296e70Eit(S *s, u32 a, u32 b);
void _ZN18Unk_ov096_0229aea819func_ov096_0229713cEv(S *s);
void _ZN18Unk_ov096_0229aea819func_ov096_02297160Ev(S *s);
s32 _ZN18Unk_ov096_0229aea819func_ov096_022971dcEv(S *s);
void _ZN18Unk_ov096_0229aea819func_ov096_022972ecEj(S *s, u32 a);
void _ZN18Unk_ov096_0229aea819func_ov096_02297358Ejj(S *s, u32 a, u32 b);
void _ZN18Unk_ov096_0229aea819func_ov096_022973a0Ej(S *s, u32 a);
void _ZN18Unk_ov096_0229aea819func_ov096_022973ccEj(S *s, u32 a);
void _ZN18Unk_ov096_0229aea819func_ov096_022974b8Ejj(S *s, u32 a, u32 b);
void _ZN18Unk_ov096_0229aea819func_ov096_022974f4Ev(S *s);
void _ZN18Unk_ov096_0229aea819func_ov096_0229751cEv(S *s);
void _ZN18Unk_ov096_0229aea819func_ov096_02297548Ev(S *s);
void _ZN18Unk_ov096_0229aea819func_ov096_022975d4Ev(S *s);
void _ZN18Unk_ov096_0229aea819func_ov096_02297750Ej(S *s, u32 a);
void _ZN18Unk_ov096_0229aea819func_ov096_02297804Ev(S *s);
void _ZN18Unk_ov096_0229aea819func_ov096_02297834Ej(S *s, u32 a);
void _ZN18Unk_ov096_0229aea819func_ov096_022978acEv(S *s);
extern Unk_020cbb18 *data_020cbb18;
extern u8 data_020e416c;
extern u8 data_021edb68;
extern u8 gTouchHoldFrames;
extern u8 gTouchCurY;
extern u8 gTouchCurX;
extern u8 gTouchPressY;
extern u8 gTouchPressX;
extern u8 gTouchHeld;
extern u8 gTouchChanged;
extern u16 gPad[];
void func_020020b8(s32 a);
void func_020021a0(s32 a);
void func_0200226c(s32 a, s32 b, s32 c, s32 d);
void func_02002398(s32 a, s32 b);
s32 Snd_PlaySe(s32 a);
void Camera_PopView();
void Camera_PushView();
BOOL Camera_IsViewPushed();
void func_02042820(s32 a);
s32 func_02042830(s32 a);
s32 func_02042c64(s32 a, s32 b);
s32 func_02042d10(s32 a);
s32 Item_MakePaper(s32 a, s32 b);
u32 Item_GetPaperCount(u16 *p);
s32 Item_GetPaperIndex(u16 *p);
u32 Item_FindMoneyBagForAmount(u32 v, s32 a, s32 *out);
BOOL func_0204bab8(u16 *p);
BOOL Item_IsHoldable(u16 *p);
u32 Item_GetPrice(u16 *p);
s32 _ZN12Unk_0206555413func_02065578Ev(void *obj);
void _ZN12Unk_0206555413func_02065588Etj(void *a, u32 b, u32 c);
s32 _ZN12Unk_0206555413func_020655c0Ev(void *a);
s32 _ZN12Unk_0206555413func_020655d0Ev(void *obj);
void func_02065af0();
s32 func_02065bfc();
void func_02065c34(void *p, u8 v);
void _ZN6LetterC1Ev(void *p);
void *_ZN6LetterD1Ev(void *p);
void *_ZN18Unk_ov002_02204738D1Ev(void *p);
void *_ZN12Unk_0206d0a0D1Ev(void *p);
void *_ZN18Unk_ov002_022040ecD1Ev(void *p);
void *_ZN18Unk_ov002_02204558D1Ev(void *p);
void *_ZN18Unk_ov002_02204614D1Ev(void *p);
void *_ZN18Unk_ov002_02204604D1Ev(void *p);
void *_ZN18Unk_ov002_02204468D1Ev(void *p);
void *_ZN18Unk_ov094_02292d6cD1Ev(void *p);
void *_ZN18Unk_ov094_02294bd4D1Ev(void *p);
void *_ZN18Unk_ov094_02294a50D1Ev(void *p);
void func_02065e70(void *dst, void *src);
void _ZN12Unk_0206d0a013func_0206d2e0EP16Unk_0206d1d4_SrcPvS2_i(void *p, void *q, s32 a, s32 b, s32 c);
void _ZN12Unk_0206d0a013func_0206d394Ev(void *p);
void _ZN12Unk_0206d0a013func_0206d39cEi(void *p, s32 a);
void _ZN12Unk_0206d0a0C1Ev(void *p);
void func_0206e240(void *a, void *b, void *c, void *d);
BOOL func_0206e61c();
void func_0206e63c();
s32 func_0206e8f4(s32 a);
s32 func_0206ec48();
s32 func_0206ec54(u32 a);
void func_0206ed5c(void *p);
s32 func_0206ed68();
BOOL MenuCtrl_IsButtons();
BOOL MenuCtrl_IsTouch();
s32 func_0206f53c(s32 a);
s32 func_0206f604(u8 a, s32 b);
s32 _ZN12Unk_020cbb1813func_02072e88Ei(void *obj, u32 v);
void _ZN12LabelBalloon6setPosEii(void *p, s32 x, s32 y);
s32 Hud_GetCountdown();
s32 _ZN12HudCountdown9isStoppedEv(s32 a);
BOOL _ZN10HandCursor10isAnimDoneEv(void *p);
s32 _ZN10HandCursor7getAnimEv(void *p);
void _ZN10HandCursor16disableObjWindowEv(void *p);
void _ZN10HandCursor15enableObjWindowEv(void *p);
void _ZN11LabelButton6setPosEii(void *p, s32 a, s32 b);
s32 PlayerActor_RequestHoldUpItem(u16 *p);
s32 PlayerActor_RequestAct3F(u16 *p);
s32 PlayerActor_RequestFaceChange();
s32 PlayerActor_RequestWearHat(u16 *p);
s32 PlayerActor_RequestWearFaceItem(u16 *p);
s32 PlayerActor_RequestWearShirt(u16 *p);
s32 func_02094fa8();
s32 func_02094fb4();
s32 func_020951ac();
void *PlayerData_GetCurrent();
s32 func_02097ac4(void *p, s32 a, s32 b);
s32 _ZN15PlayerInventory13getTotalBellsEi(void *p, s32 a);
void _ZN12Unk_02097ff413func_0209801cEj(void *p, u32 a);
u16 *_ZN12Unk_02097ff413func_020983ccEv(void *p);
void _ZN10PlayerData11setFaceItemEPt(void *o, u16 *p);
u16 *_ZN10PlayerData11getFaceItemEv(void *o);
void _ZN10PlayerData6setHatEPt(void *o, u16 *p);
u16 *_ZN10PlayerData6getHatEv(void *o);
void _ZN10PlayerData8setShirtEPt(void *o, u16 *p);
u16 *_ZN10PlayerData8getShirtEv(void *o);
u16 *_ZN10PlayerData11getHeldItemEv(void *o);
void *_ZN10PlayerData13func_02098750Ev(void *p);
s32 func_02098ffc();
s32 func_020991fc();
s32 func_020b52f8();
void _ZN12Unk_020e4608C1Ev(void *p);
void _ZN12Unk_020e45f813func_020b87d0Ev(void *p);
void *ProcBase_GetParent(void *p);
void ProcBase_RequestDelete(void *p);
s32 _ZN18Unk_ov002_0220446819func_ov002_02200680Ev(void *p);
void _ZN18Unk_ov002_0220446819func_ov002_022006a4Eh(void *p, s32 a);
void _ZN18Unk_ov002_0220446819func_ov002_022006acEi(void *p, s32 a);
void _ZN18Unk_ov002_0220446819func_ov002_022006b0Ev(void *p);
void _ZN18Unk_ov002_0220446819func_ov002_022006b8Ev(void *p);
void _ZN18Unk_ov002_0220446819func_ov002_022006c0Ev(void *p);
void _ZN18Unk_ov002_0220446819func_ov002_022006e4Ei(void *self, s32 a);
s32 _ZN18Unk_ov002_0220446819func_ov002_0220071cEv(void *p);
void _ZN18Unk_ov002_02204468C1Ev(void *p);
void _ZN18Unk_ov002_022044e419func_ov002_02200980Ev(void *p);
BOOL func_ov002_0220125c(void *pad);
BOOL func_ov002_0220126c(void *pad);
BOOL func_ov002_0220127c(void *pad);
BOOL func_ov002_0220128c(void *pad);
s32 _ZN18Unk_ov002_022013ac19func_ov002_022013e4EPvj(void *self, void *p, u32 v);
s32 _ZN18Unk_ov002_022013ac19func_ov002_02201438Ej(void *p, u32 a);
s32 _ZN18Unk_ov002_022013ac19func_ov002_0220144cEjj(void *p, u32 a, u32 b);
u32 _ZN18Unk_ov002_022013ac19func_ov002_02201490Ev(void *p);
s32 _ZN18Unk_ov002_022013ac19func_ov002_022014acEii(void *p, u32 a, u32 b);
s32 _ZN18Unk_ov002_022013ac19func_ov002_022014c0Eii(void *p, u32 a, u32 b);
void _ZN18Unk_ov002_022013ac19func_ov002_0220160cEP22Unk_ov002_022013ac_Reci(void *self, void *r, u32 f);
s32 func_ov002_022016cc(void *p);
void func_ov002_022016e4(void *p, u32 v);
s32 func_ov002_02201700(void *p, u32 a, u32 b);
s32 _ZN18Unk_ov002_022013ac19func_ov002_022017a4Ev(void *p);
s32 _ZN18Unk_ov002_022013ac19func_ov002_022017b4Ev(void *p);
void _ZN18Unk_ov002_022013ac19func_ov002_022017c4Ev(void *p);
s32 func_ov002_022019d0(void *p, s32 a, void *b, u32 c);
s32 func_ov002_02201a28(void *p);
void func_ov002_02201a3c(void *p, s32 a);
u8 func_ov002_02201a70(void *self, s32 x);
void func_ov002_02201aa0(void *p, s32 a, s32 b);
void func_ov002_02201b04(void *p);
void func_ov002_02201b28(void *p);
void func_ov002_02201b58(void *p);
void func_ov002_02202064(void *self, s32 x);
void func_ov002_02202098(void *self, s32 x);
void func_ov002_022020cc(void *self, u32 a, s32 x);
void _ZN18Unk_ov002_0220455819func_ov002_02202200EP12LabelBalloon(void *self, void *p, s32 c);
void _ZN18Unk_ov002_0220455819func_ov002_02202278Eii(void *self, s32 a, s32 b);
void _ZN18Unk_ov002_0220455819func_ov002_0220229cEii(void *self, s32 a, s32 c);
void _ZN18Unk_ov002_0220455819func_ov002_02202310EiiPKc(void *p, s32 a, s32 b, s32 c);
void _ZN18Unk_ov002_02204558C1Ev(void *p);
void _ZN18Unk_ov002_02204614C1Ev(void *p);
void _ZN18Unk_ov002_0220460419func_ov002_022026c4Eiii(void *p, s32 a, s32 b, u32 c);
void _ZN18Unk_ov002_0220460419func_ov002_022026f4Eii(void *p, s32 a, s32 b);
s32 _ZN18Unk_ov002_0220460419func_ov002_02202708Ev(void *p);
s32 _ZN18Unk_ov002_0220460419func_ov002_02202710Ev(void *p);
s32 _ZN18Unk_ov002_0220460419func_ov002_02202718Ev(void *p);
void _ZN18Unk_ov002_0220460419func_ov002_022027a4Ev(void *p);
void _ZN18Unk_ov002_02204604C1Ev(void *p);
void _ZN18Unk_ov002_02202d9819func_ov002_02202844Ev(void *p);
void _ZN18Unk_ov002_02202d9819func_ov002_0220288cEv(void *p);
s32 _ZN18Unk_ov002_02202d9819func_ov002_022028a0Ev(void *p);
s32 _ZN18Unk_ov002_02202d9819func_ov002_022028c8Ev(void *p);
BOOL _ZN18Unk_ov002_02202d9819func_ov002_022028f0Ev(void *p);
BOOL _ZN18Unk_ov002_02202d9819func_ov002_022028fcEv(void *p);
BOOL _ZN18Unk_ov002_02202d9819func_ov002_02202928Ev(void *p);
void _ZN18Unk_ov002_02202d9819func_ov002_02202a40Eii(void *p, s32 a, s32 b);
void _ZN18Unk_ov002_0220464c19func_ov002_02202b68Ev(void *p);
void _ZN18Unk_ov002_0220464c19func_ov002_02202be0Ev(void *self);
void _ZN18Unk_ov002_0220464c19func_ov002_02202c40Ev(void *self);
void _ZN18Unk_ov002_0220464c19func_ov002_02202d00Ei(void *p, s32 a);
void _ZN18Unk_ov002_02204738C1Ev(void *p);
s32 _ZN18Unk_ov002_0220473819func_ov002_02203e24Ev(void *p);
void _ZN18Unk_ov002_0220473819func_ov002_02203ec8Ei(void *p, s32 a);
s32 _ZN18Unk_ov002_0220473819func_ov002_02203f08Ev(void *p);
s32 _ZN18Unk_ov002_0220473819func_ov002_02203f28Ei(void *p, s32 a);
s32 _ZN18Unk_ov002_0220473819func_ov002_02203f78Ei(void *p, s32 a);
s32 _ZN18Unk_ov002_022040ec19func_ov002_02204234Ei(void *p, s32 a);
void _ZN18Unk_ov002_022040ec19func_ov002_02204394EPhij(void *p, void *q, u32 a, u32 b);
void _ZN18Unk_ov002_022040ecC1Ev(void *p);
s32 _ZN18Unk_ov090_022921e019func_ov090_02291934Ev();
s32 func_ov090_02291944();
s32 func_ov090_02291a38(s32 a);
s32 func_ov090_02291a58(s32 a);
s32 func_ov090_02291a78(s32 a);
void _ZN18Unk_ov090_022921e019func_ov090_02291a88Ev(void *p);
void _ZN18Unk_ov090_022921e019func_ov090_02291a90Ev(void *p);
s32 func_ov090_02291aa0();
void _ZN18Unk_ov090_022921e019func_ov090_02291d2cEv();
void _ZN18Unk_ov090_022921e019func_ov090_02291d8cEj(void *p, u32 idx);
void func_ov094_02292380();
void func_ov094_0229238c();
void func_ov094_02292398();
BOOL func_ov094_02292414(u32 a);
s32 func_ov094_02292450(s32 a);
void func_ov094_02292484(void *p);
void func_ov094_0229248c(void *p, s32 a);
BOOL func_ov094_022924c4(u32 a);
void func_ov094_02292640(void *p, u32 a);
void func_ov094_022926c8(void *o, u32 v);
void func_ov094_0229272c(void *p);
s32 func_ov094_02292738(void *p);
void func_ov094_02292774(void *p, s32 a);
void func_ov094_0229277c(void *p, s32 a);
void func_ov094_02292864(void *p);
void func_ov094_02292a80(void *p);
void func_ov094_02292aa4(void *p);
void func_ov094_02292acc(void *p);
void func_ov094_02292ae0(void *p);
void func_ov094_02292c08(void *p);
void func_ov094_02292c84(void *p, s32 a);
void func_ov094_02292d30(void *p, s32 a);
void _ZN18Unk_ov094_02292d6cC1Ev(void *p);
s32 func_ov094_02292e30(void *p);
s32 func_ov094_02292efc(void *p, u16 a, u8 b);
s32 func_ov094_0229311c(void *p, u32 a);
void func_ov094_0229313c(void *p, s32 a, s32 b);
void func_ov094_022931e8(void *p, s32 a, s32 b);
void func_ov094_022932d0(void *p, s32 a, s32 b);
s32 func_ov094_0229333c(void *p, u32 a);
void func_ov094_0229341c(void *p, u32 a, u32 b);
void func_ov094_02293434(void *p, u32 a);
void func_ov094_02293494(void *p, u32 a, u32 b, u32 c);
s32 func_ov094_022934d8(void *p, s32 a);
s32 func_ov094_02293504(void *p, u32 a);
s32 func_ov094_0229352c(void *p, u32 a);
void func_ov094_0229357c(void *p, s32 a);
void func_ov094_0229358c(void *p);
void func_ov094_0229359c(void *p, s32 a);
void func_ov094_022935dc(void *p);
s32 func_ov094_02293610(void *p, u32 a);
s32 func_ov094_02293624(void *p, u32 a);
void func_ov094_02293638(void *p, void *q, s32 a);
void func_ov094_022937a0(void *p);
s32 func_ov094_02293928(void *p, s32 x, s32 y);
s32 func_ov094_02293968(void *p);
void func_ov094_02293998(void *p);
void func_ov094_022939a0(void *p);
void func_ov094_022939c0(void *p, s32 a);
void _ZN18Unk_ov094_02294a50C1Ev(void *p);
s32 func_ov094_02293c1c(void *p);
s32 func_ov094_02293c58(void *p);
void func_ov094_02293d2c(void *p);
s32 func_ov094_02293d80(void *p, u32 a);
s32 func_ov094_02293d9c(void *p, u32 a);
s32 func_ov094_02293df8(void *p, u32 a);
void _ZN18Unk_ov094_02294bd419func_ov094_0229405cEiiPv(void *p, s32 a, s32 b, void *c);
void _ZN18Unk_ov094_02294bd419func_ov094_022941a0Eii(void *p, s32 a, s32 b);
s32 _ZN18Unk_ov094_02294bd419func_ov094_022941ecEi(void *p, u32 a);
s32 _ZN18Unk_ov094_02294bd419func_ov094_022942f4Ei(void *p, s32 a);
void _ZN18Unk_ov094_02294bd419func_ov094_02294318Eii(void *p, u32 a, void *q);
void *_ZN18Unk_ov094_02294bd419func_ov094_0229433cEi(void *p, s32 a);
void _ZN18Unk_ov094_02294bd419func_ov094_022943a4Ei(void *p, s32 a);
void _ZN18Unk_ov094_02294bd419func_ov094_022943b0Ev(void *p);
void _ZN18Unk_ov094_02294bd419func_ov094_022943bcEj(void *p, s32 a);
void _ZN18Unk_ov094_02294bd419func_ov094_022943f8Ev(void *p);
void _ZN18Unk_ov094_02294bd419func_ov094_02294420EPvi(void *p, void *q, s32 a);
s32 _ZN18Unk_ov094_02294bd419func_ov094_02294610Eii(void *p);
void _ZN18Unk_ov094_02294bd419func_ov094_0229462cEv(void *p);
void _ZN18Unk_ov094_02294bd419func_ov094_02294644Ei(void *p, s32 a);
void _ZN18Unk_ov094_02294bd4C1Ev(void *p);
void *func_ov096_02297b14(S *s, u32 id);
s32 func_ov096_02297b48(S *s, u32 id);
u32 func_ov096_02297b9c(S *s, u32 id);
s32 func_ov096_02297c10(S *s, u32 id);
s32 func_ov096_02297c68(S *s, u32 id);
s32 func_ov096_02297cc0(S *s, u32 id);
s32 func_ov096_02297d50(S *s, u32 id);
s32 func_ov096_02297de0(S *s, s32 x, s32 y);
BOOL func_ov096_02297e5c(S *s, s32 x, s32 y);
BOOL func_ov096_02297e7c(S *s, s32 x, s32 y);
s32 func_ov096_02297e94(S *s, s32 x, s32 y);
BOOL func_ov096_02297f20(S *s, s32 x, s32 y);
void func_ov096_02297f3c(S *s, u32 id, void *p);
s32 func_ov096_02297f6c(S *s, u32 id);
u32 func_ov096_02297fb8(S *s, s32 a, s32 b, s32 c);
u32 func_ov096_02297ff8(S *s, u32 id);
u32 func_ov096_02298008(S *s, u32 id);
u32 func_ov096_0229801c(S *s);
void func_ov096_0229803c(S *s, u32 id);
void func_ov096_0229806c(S *s, u32 id);
void func_ov096_022980a0(S *s, u32 id, u32 a, u32 b);
s32 func_ov096_02298110(S *s, u32 id);
u32 func_ov096_0229821c(S *s, s32 a, s32 b, s32 c);
u32 func_ov096_0229825c(S *s, u32 id);
u32 func_ov096_0229826c(S *s, u32 id);
void func_ov096_022982a0(S *s);
u32 func_ov096_022982c0(S *s, u32 id);
u32 func_ov096_022982d0(S *s, u32 id);
u32 func_ov096_022982e0(S *s, u32 id);
u32 func_ov096_022982f0(S *s, u32 id);
void func_ov096_022982fc(S *s);
void func_ov096_02298320(S *s);
void func_ov096_02298334(S *s, u32 a, u32 b, u32 c);
void func_ov096_0229838c(S *s, u32 a, u32 b, u32 c, u8 d);
void func_ov096_022983cc(S *s, u32 a, u32 b);
void func_ov096_022985b8(S *s);
void func_ov096_0229862c(S *s);
void func_ov096_02298644(S *s);
void func_ov096_0229865c(S *s);
void func_ov096_0229867c(S *s);
void func_ov096_022986b0(S *s);
void _ZN18Unk_ov096_0229aea819func_ov096_022988b8Ev(S *s);
void _ZN18Unk_ov096_0229aea819func_ov096_0229895cEv(S *s);
s32 func_ov096_02298c4c(S *s);
void _ZN18Unk_ov096_0229aea819func_ov096_02298cd8Ev(S *s);
s32 func_ov097_0229b280(void *self);
s32 func_ov097_0229b2bc(void *self, s32 a);
void func_ov097_0229b3a4(void *scene, s32 a);
void _ZN18Unk_ov096_0229aea819func_ov098_0229bb18Ev(void *scene);
void _ZN18Unk_ov096_0229aea819func_ov098_0229bb5cEt(void *scene, s32 a);
s32 func_ov098_0229bc90(void *self, s32 a);
void func_ov096_02298430(S *s, u32 a);
void func_ov096_0229849c(S *s, u32 a);
void func_ov096_02298504(S *s, u32 a);
void func_ov096_0229860c(S *s);
void _ZN18Unk_ov096_0229aea819func_ov096_022986ccEv(S *s);
void _ZN18Unk_ov096_0229aea819func_ov096_02298768Ev(S *s);
void _ZN18Unk_ov096_0229aea819func_ov096_02298804Ev(S *s);
void _ZN18Unk_ov096_0229aea819func_ov096_02298870Ev(S *s);
void _ZN18Unk_ov096_0229aea819func_ov096_022988d0Ev(S *s);
void _ZN18Unk_ov096_0229aea819func_ov096_02298934Ev(S *s);
void _ZN18Unk_ov096_0229aea819func_ov096_0229898cEv(S *s);
void _ZN18Unk_ov096_0229aea819func_ov096_02298a14Ev(S *s);
void _ZN18Unk_ov096_0229aea819func_ov096_02298aa0Ev(S *s);
void _ZN18Unk_ov096_0229aea819func_ov096_02298b34Ev(S *s);
void _ZN18Unk_ov096_0229aea819func_ov096_02298b54Ev(S *s);
void _ZN18Unk_ov096_0229aea819func_ov096_02298b74Ev(S *s);
void _ZN18Unk_ov096_0229aea819func_ov096_02298bdcEv(S *s);
void _ZN18Unk_ov096_0229aea819func_ov096_02298c10Ev(S *s);
void _ZN18Unk_ov096_0229aea819func_ov096_02298c30Ev(S *s);
void _ZN18Unk_ov096_0229aea819func_ov096_02298c9cEv(S *s);
void _ZN18Unk_ov096_0229aea819func_ov096_02298d34Ev(S *s);
s32 _ZN10HandCursor12setAnimAtEndEi(void *self, s32);
void _ZN11LabelButton8setStateEi(void *self, s32);
u32 _ZN18Unk_ov002_022013ac19func_ov002_02201494Ev(void *self);
s32 _ZN18Unk_ov002_022013ac19func_ov002_02201498Ei(void *self, s32);
s32 _ZN18Unk_ov002_022013ac19func_ov002_022014a4Ev(void *self);
void _ZN18Unk_ov002_02202d9819func_ov002_022029e8Eiiii(void *self, s32, s32, s32, s32);
void _ZN18Unk_ov002_02202d9819func_ov002_02202a18Eiii(void *self, s32, s32, s32);
void _ZN18Unk_ov002_02202d9819func_ov002_02202a78Ev(void *self);
void _ZN18Unk_ov002_02202d9819func_ov002_02202af0Ev(void *self);
void _ZN18Unk_ov002_022044e419func_ov002_02200a50Eh(void *self, u8);
void _ZN18Unk_ov002_022044e419func_ov002_02200a58Eh(void *self, u8);
void _ZN18Unk_ov002_022044e419func_ov002_02200a60Eh(void *self, u8);
}

static inline BOOL Unk_ov096_02299778_Both() {
    if (gTouchHeld != 0 && gTouchChanged != 0) return TRUE;
    return FALSE;
}

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
    void func_ov002_022008c4(s32 a, s32 b, s32 mode, s32 dist);
    void func_ov002_022008e0(s32 a, s32 b, s32 mode, s32 dist);
    BOOL func_ov002_022008fc(s32 a);
    BOOL func_ov002_02200908(s32 a);
    s32 func_ov002_02200920();
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

class Unk_ov094_02294a50 { public: ~Unk_ov094_02294a50(); u8 pad[0xa60]; };
class Unk_ov094_02294bd4 { public: ~Unk_ov094_02294bd4(); u8 pad[0x28]; };
class Unk_ov094_02292d6c { public: ~Unk_ov094_02292d6c(); u8 pad[0x160]; };
class Unk_ov002_02204468 { public: ~Unk_ov002_02204468(); u8 pad[0xc0]; };
class Unk_ov002_02204604 { public: ~Unk_ov002_02204604(); u8 pad[0x18]; };
class Unk_ov002_02204614 { public: ~Unk_ov002_02204614(); u8 pad[0x64]; };
class Unk_ov002_02204558 { public: ~Unk_ov002_02204558(); u8 pad[0x2f4]; };
class Unk_ov002_022040ec { public: ~Unk_ov002_022040ec(); u8 pad[0x108]; };
class Unk_0206d0a0 { public: ~Unk_0206d0a0(); u8 pad[0x210]; };
class Unk_ov002_02204738 { public: ~Unk_ov002_02204738(); u8 pad[0x70]; };
class Letter { public: ~Letter(); u8 pad[0x18]; };

// Vtable 0x0229aea8, size 0x2d80
class Unk_ov096_0229aea8 : public Unk_ov002_022044e4 {
public:
    inline Unk_ov096_0229aea8();

    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL onDraw();
    virtual BOOL vfunc_4c();
    virtual BOOL vfunc_50();
    virtual BOOL vfunc_54();
    virtual BOOL vfunc_58();
    virtual BOOL vfunc_5c();

    void func_ov096_02294d9c(u32);
    void func_ov096_02294dac(u32);
    BOOL func_ov096_02294dbc(u32);
    BOOL func_ov096_02294dd0();
    void func_ov096_02294e08();
    void func_ov096_02294e84();
    void func_ov096_02294ed4();
    void func_ov096_02294ef4();
    void func_ov096_02294f14();
    void * func_ov096_02294f9c();
    void func_ov096_02294fac();
    void func_ov096_02294fd4();
    void func_ov096_02294ff8();
    BOOL func_ov096_02295020(void *, s32);
    void func_ov096_022950fc(void *, s32);
    void func_ov096_022952a0(void *, s32);
    void func_ov096_02295348(void *, s32);
    void func_ov096_02295538(void *, s32);
    void func_ov096_022956a0(s32);
    void func_ov096_022956d0();
    void func_ov096_022956e4();
    void func_ov096_02295734(u32, s32);
    void func_ov096_0229584c();
    void func_ov096_022958ac();
    void func_ov096_0229590c(s32);
    void func_ov096_02295a44(s32);
    s32 func_ov096_02295ba4();
    void func_ov096_02295c2c();
    void func_ov096_02295c60();
    void func_ov096_02295c94(s32);
    void func_ov096_02295d28();
    void func_ov096_02295f94();
    void func_ov096_02295fb0();
    void func_ov096_02295fc8(s32);
    void func_ov096_02296030();
    void func_ov096_02296094();
    void func_ov096_022960ac();
    void func_ov096_022960b4();
    void func_ov096_02296124();
    void func_ov096_0229619c();
    void func_ov096_02296290();
    void func_ov096_02296338();
    void func_ov096_0229637c();
    BOOL func_ov096_022963ac();
    void func_ov096_022963fc();
    void func_ov096_02296460();
    void func_ov096_0229648c();
    void func_ov096_022964b0();
    s32 func_ov096_0229652c(s32);
    BOOL func_ov096_022965ac(s32);
    void func_ov096_022965f0(u32);
    void func_ov096_02296638(u32);
    void func_ov096_02296680();
    void func_ov096_022966a8();
    void func_ov096_022966c8();
    void func_ov096_022966e8();
    void func_ov096_02296708();
    void func_ov096_0229673c();
    void func_ov096_022967a0();
    void func_ov096_02296804();
    void func_ov096_02296854();
    void func_ov096_02296898();
    s32 func_ov096_022968bc();
    s32 func_ov096_022968cc();
    void func_ov096_02296910();
    void func_ov096_02296964();
    s32 func_ov096_022969bc(u16 *, s32, u16 *, u8);
    u32 func_ov096_02296b68(u16);
    void func_ov096_02296bb8(u16);
    void func_ov096_02296be8(s32);
    s32 func_ov096_02296c18();
    BOOL func_ov096_02296c30(s32);
    BOOL func_ov096_02296cac();
    void func_ov096_02296d18();
    void func_ov096_02296d5c();
    BOOL func_ov096_02296d88(s32);
    BOOL func_ov096_02296dbc(s32, u16);
    u16 func_ov096_02296e70(s32, u16);
    u16 func_ov096_02296f64(s32);
    s32 func_ov096_02296fb8();
    void func_ov096_0229713c();
    void func_ov096_02297160();
    BOOL func_ov096_02297170();
    s32 func_ov096_022971dc();
    s32 func_ov096_0229725c(u32);
    void func_ov096_02297284(u32);
    void func_ov096_022972ec(u32);
    void func_ov096_02297358(u32, u32);
    void func_ov096_022973a0(u32);
    void func_ov096_022973cc(u32);
    void func_ov096_0229741c(u32);
    void func_ov096_02297460(u32);
    void func_ov096_022974b8(u32, u32);
    void func_ov096_022974f4();
    void func_ov096_0229751c();
    void func_ov096_02297548();
    void func_ov096_02297574();
    void func_ov096_022975d4();
    void func_ov096_02297658();
    BOOL func_ov096_022976f8(s32);
    BOOL func_ov096_0229770c();
    void func_ov096_02297750(u32);
    void func_ov096_02297804();
    void func_ov096_02297834(u32);
    void func_ov096_022978ac();
    s32 func_ov096_022978d0(u32);
    s32 func_ov096_022978f8(u32);
    s32 func_ov096_02297910(u32);
    s32 func_ov096_02297940(u32);
    s32 func_ov096_0229795c(u32, u32);
    s32 func_ov096_022979f0(u32, u32, u32);
    void func_ov096_02298dac();
    void func_ov096_02298dfc();
    void func_ov096_02298e84();
    void func_ov096_02298ea4();
    void func_ov096_02298f64();
    void func_ov096_02298fb4();
    void func_ov096_02298ffc();
    void func_ov096_02299090();
    void func_ov096_022990bc();
    void func_ov096_022990ec();
    void func_ov096_02299114();
    void func_ov096_02299148();
    void func_ov096_02299198();
    void func_ov096_022991ec();
    void func_ov096_02299288();
    void func_ov096_02299340();
    void func_ov096_022995b0();
    void func_ov096_022996e8();
    void func_ov096_02299778();
    void func_ov096_02299820();
    void func_ov096_02299868();
    void func_ov096_02299908();
    void func_ov096_02299b18();
    void func_ov096_02299bd8();
    void func_ov096_02299c20();
    void func_ov096_02299c90();
    void func_ov096_02299d4c();
    void func_ov096_02299e44();
    void func_ov096_02299e54();
    void func_ov096_02299e74();
    void func_ov096_02299eb0();
    void func_ov096_02299ee4();
    void func_ov096_02299eec();
    void func_ov096_02299f08();
    void func_ov096_02299f48();
    void func_ov096_0229a000();
    void func_ov096_0229a014();
    void func_ov096_0229a094();
    void func_ov096_0229a0d0();
    void func_ov096_0229a120();
    void func_ov096_0229a1a4();
    void func_ov096_0229a204();
    void func_ov096_0229a254();
    void func_ov096_0229a28c();
    void func_ov096_0229a2f8();
    void func_ov096_0229a32c();
    void func_ov096_0229a360();
    BOOL func_ov096_0229a39c(s32);
    BOOL func_ov096_0229a3ec();
    void func_ov096_0229a4cc();
    void func_ov098_0229b280();
    void func_ov098_0229b2b0();
    void func_ov098_0229b2d8();
    void func_ov098_0229b344();
    void func_ov098_0229b36c();
    void func_ov098_0229b390();
    void func_ov098_0229b3ac();
    void func_ov098_0229b44c();
    void func_ov098_0229b468();
    void func_ov098_0229b488();
    void func_ov098_0229b4c4();
    void func_ov098_0229b580();
    void func_ov098_0229b5d4();
    void func_ov098_0229b624();
    void func_ov098_0229b6b4();
    void func_ov098_0229b790(s16);
    void func_ov098_0229b864(u8, u32);
    void func_ov098_0229b8ac();
    void func_ov098_0229b954();
    void func_ov098_0229b96c(u8);
    void func_ov098_0229b978(u8, u8);
    void func_ov098_0229b9e4();
    void func_ov098_0229ba60();
    void func_ov098_0229ba78(s32);
    void func_ov098_0229bb18();
    void func_ov098_0229bb5c(u16);
    void func_ov097_0229b414();
    void func_ov097_0229b4a4();
    void func_ov096_022986cc();
    void func_ov096_02298768();
    void func_ov096_02298804();
    void func_ov096_02298870();
    void func_ov096_022988b8();
    void func_ov096_022988d0();
    void func_ov096_02298934();
    void func_ov096_0229895c();
    void func_ov096_0229898c();
    void func_ov096_02298a14();
    void func_ov096_02298aa0();
    void func_ov096_02298b34();
    void func_ov096_02298b54();
    void func_ov096_02298b74();
    void func_ov096_02298bdc();
    void func_ov096_02298c10();
    void func_ov096_02298c30();
    void func_ov096_02298c9c();
    void func_ov096_02298cd8();
    void func_ov096_02298d34();

    /* 0x091 */ u8 unk_91[3];
    /* 0x094 */ u32 unk_94;
    /* 0x098 */ u32 unk_98;
    /* 0x09c */ s32 unk_9c;
    /* 0x0a0 */ s32 unk_a0;
    /* 0x0a4 */ s32 unk_a4;
    /* 0x0a8 */ s32 unk_a8;
    /* 0x0ac */ u16 unk_ac;
    /* 0x0ae */ u16 unk_ae;
    /* 0x0b0 */ u8 unk_b0;
    /* 0x0b1 */ u8 unk_b1;
    /* 0x0b2 */ u8 unk_b2;
    /* 0x0b3 */ u8 unk_b3;
    /* 0x0b4 */ u8 unk_b4;
    /* 0x0b5 */ u8 unk_b5;
    /* 0x0b6 */ u8 unk_b6;
    /* 0x0b7 */ u8 unk_b7;
    /* 0x0b8 */ u8 unk_b8;
    /* 0x0b9 */ u8 unk_b9;
    /* 0x0ba */ u8 unk_ba;
    /* 0x0bb */ u8 unk_bb;
    /* 0x0bc */ u8 unk_bc;
    /* 0x0bd */ u8 unk_bd;
    /* 0x0be */ u8 unk_be;
    /* 0x0bf */ u8 unk_bf;
    /* 0x0c0 */ u8 unk_c0;
    /* 0x0c1 */ u8 unk_c1;
    /* 0x0c2 */ volatile u8 unk_c2;
    /* 0x0c3 */ u8 unk_c3;
    /* 0x0c4 */ s32 unk_c4;
    /* 0x0c8 */ u8 unk_c8[0x20];
    /* 0x0e8 */ u8 unk_e8[0x200];
    /* 0x2e8 */ u8 unk_2e8[0x38];
    /* 0x320 */ u8 unk_320[0x38];
    /* 0x358 */ Unk_ov094_02294a50 m_358;
    /* 0xdb8 */ Unk_ov094_02294bd4 m_db8;
    /* 0xde0 */ Unk_ov094_02292d6c m_de0;
    /* 0xf40 */ u8 unk_f40[0x1480];
    /* 0x23c0 */ Unk_ov002_02204468 m_23c0;
    /* 0x2480 */ Unk_ov002_02204604 m_2480;
    /* 0x2498 */ Unk_ov002_02204614 m_2498;
    /* 0x24fc */ Unk_ov002_02204558 m_24fc;
    /* 0x27f0 */ u8 unk_27f0[0xc];
    /* 0x27fc */ Unk_ov002_022040ec m_27fc;
    /* 0x2904 */ Unk_0206d0a0 m_2904;
    /* 0x2b14 */ Unk_ov002_02204738 m_2b14;
    /* 0x2b84 */ u8 unk_2b84[0xc];
    /* 0x2b90 */ u32 unk_2b90;
    /* 0x2b94 */ u32 unk_2b94;
    /* 0x2b98 */ Letter m_2b98;
    /* 0x2bb0 */ u8 unk_2bb0[0xdc];
    /* 0x2c8c */ Letter m_2c8c;
    /* 0x2ca4 */ u8 unk_2ca4[0xdc];
};

#define unk_358 ((u8 *)&m_358)
#define unk_db8 ((u8 *)&m_db8)
#define unk_de0 ((u8 *)&m_de0)
#define unk_23c0 ((u8 *)&m_23c0)
#define unk_2480 ((u8 *)&m_2480)
#define unk_2498 ((u8 *)&m_2498)
#define unk_24fc ((u8 *)&m_24fc)
#define unk_2904 ((u8 *)&m_2904)
#define unk_2b14 ((u8 *)&m_2b14)
#define unk_2b98 ((u8 *)&m_2b98)
#define unk_2c8c ((u8 *)&m_2c8c)
#define unk_27fc ((u8 *)&m_27fc)

struct Unk_ov096_SceneEntry {
    Unk_ov096_0229aea8 *(*create)();
    u16 a;
    u16 b;
};

extern "C" Unk_ov096_0229aea8 *func_ov096_0229aa64();
extern "C" Unk_ov096_SceneEntry data_ov096_0229ab68 = {func_ov096_0229aa64, 0x91, 0x95};

static inline BOOL Unk_ov096_0229619c_Range(volatile u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    u32 b = *p;
    u32 a = *p;
    if (a >= lo && b <= hi) {
        r = TRUE;
    }
    return r;
}

static inline BOOL Unk_ov096_0229652c_IsZero(u8 v) { return v == 0 ? TRUE : FALSE; }

static inline s32 Unk_ov096_022969bc_Idx(u32 v) {
    if (v >= 0x1531 && v <= 0x153a) {
        return v - 0x1531;
    }
    return -1;
}

static inline u16 Unk_ov096_022969bc_Ch(s32 n) {
    if ((u32)n < 10) {
        return n + 0x1531;
    }
    return 0x1531;
}

// ===== unit 022971dc =====
static inline BOOL Unk_ov096_022979f0_InRange(volatile u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    u32 x = *p;
    u32 y = *p;
    if (y >= lo && x <= hi) {
        r = TRUE;
    }
    return r;
}

inline Unk_ov096_0229aea8::Unk_ov096_0229aea8() {
    u8 *e = unk_2e8;
    do {
        _ZN12Unk_020e4608C1Ev(e);
        e += 0x38;
    } while (e != unk_358);
    _ZN18Unk_ov094_02294a50C1Ev(unk_358);
    _ZN18Unk_ov094_02294bd4C1Ev(unk_db8);
    _ZN18Unk_ov094_02292d6cC1Ev(unk_de0);
    _ZN18Unk_ov002_02204468C1Ev(unk_23c0);
    _ZN18Unk_ov002_02204604C1Ev(unk_2480);
    _ZN18Unk_ov002_02204614C1Ev(unk_2498);
    _ZN18Unk_ov002_02204558C1Ev(unk_24fc);
    _ZN18Unk_ov002_022040ecC1Ev(unk_27fc);
    _ZN12Unk_0206d0a0C1Ev(unk_2904);
    _ZN18Unk_ov002_02204738C1Ev(unk_2b14);
    unk_2b90 = 0;
    unk_2b94 = 0;
    _ZN6LetterC1Ev(unk_2b98);
    _ZN6LetterC1Ev(unk_2c8c);
}

extern "C" Unk_ov096_0229aea8 *func_ov096_0229aa64() {
    return new Unk_ov096_0229aea8;
}

BOOL Unk_ov096_0229aea8::vfunc_00() {
    func_ov096_02299f48();
    func_ov002_02200a50(0);
    func_ov002_02200a60(1);
    return TRUE;
}

BOOL Unk_ov096_0229aea8::vfunc_0c() {
    ProcBase_GetParent(this);
    _ZN18Unk_ov090_022921e019func_ov090_02291d2cEv();
    func_ov096_02299f08();
    func_0206e8f4(0);
    return TRUE;
}

// ===== unit 0229a94c =====
BOOL Unk_ov096_0229aea8::onDraw() {
    func_ov002_02201b28(unk_24fc);
    if (!func_ov096_02294dbc(1)) {
        return TRUE;
    }
    ((Unk_ov096_0229a94c_Virt *)unk_23c0)->vfunc_08();
    if (MenuCtrl_IsButtons()) {
        _ZN18Unk_ov002_02202d9819func_ov002_02202844Ev(unk_2498);
    }
    func_ov096_02297574();
    if (func_ov096_02294dbc(2)) {
        func_ov094_022932d0(unk_358, 0, unk_98);
        func_ov094_022931e8(unk_358, 0, unk_98);
        _ZN18Unk_ov094_02294bd419func_ov094_022941a0Eii(unk_db8, 0, unk_98);
        func_ov094_0229277c(unk_de0, unk_98);
    }
    if (func_ov096_02294dbc(0x100)) {
        _ZN11LabelButton6setPosEii(unk_2b14, 0, func_ov002_02200920());
        ((Unk_ov096_0229a94c_Virt *)unk_2b14)->vfunc_08();
    }
    return TRUE;
}

BOOL Unk_ov096_0229aea8::vfunc_4c() {
    static Unk_ov096_0229aea8_Fn tbl[11] = {
        &Unk_ov096_0229aea8::func_ov096_0229a360,
        &Unk_ov096_0229aea8::func_ov096_0229a32c,
        &Unk_ov096_0229aea8::func_ov096_0229a2f8,
        &Unk_ov096_0229aea8::func_ov096_0229a28c,
        &Unk_ov096_0229aea8::func_ov096_0229a254,
        &Unk_ov096_0229aea8::func_ov096_0229a204,
        &Unk_ov096_0229aea8::func_ov096_0229a1a4,
        &Unk_ov096_0229aea8::func_ov096_0229a120,
        &Unk_ov096_0229aea8::func_ov096_0229a0d0,
        &Unk_ov096_0229aea8::func_ov096_0229a094,
        &Unk_ov096_0229aea8::func_ov096_0229a014};
    func_ov096_02299eb0();
    (this->*tbl[unk_8c])();
    func_ov096_02299e74();
    return TRUE;
}

void Unk_ov096_0229aea8::func_ov096_0229a4cc() {
    static Unk_ov096_0229aea8_Fn tbl[58] = {
        &Unk_ov096_0229aea8::func_ov096_02299d4c,
        &Unk_ov096_0229aea8::func_ov096_02299c90,
        &Unk_ov096_0229aea8::func_ov096_02299c20,
        &Unk_ov096_0229aea8::func_ov096_02299bd8,
        &Unk_ov096_0229aea8::func_ov096_02299b18,
        &Unk_ov096_0229aea8::func_ov096_02299908,
        &Unk_ov096_0229aea8::func_ov096_02299868,
        &Unk_ov096_0229aea8::func_ov096_02299820,
        &Unk_ov096_0229aea8::func_ov096_02299778,
        &Unk_ov096_0229aea8::func_ov096_022996e8,
        &Unk_ov096_0229aea8::func_ov096_022995b0,
        &Unk_ov096_0229aea8::func_ov096_02299340,
        &Unk_ov096_0229aea8::func_ov096_02299288,
        &Unk_ov096_0229aea8::func_ov096_022991ec,
        &Unk_ov096_0229aea8::func_ov096_02299198,
        &Unk_ov096_0229aea8::func_ov096_02299148,
        &Unk_ov096_0229aea8::func_ov096_02299114,
        &Unk_ov096_0229aea8::func_ov096_022990ec,
        &Unk_ov096_0229aea8::func_ov096_022990bc,
        &Unk_ov096_0229aea8::func_ov096_02299090,
        &Unk_ov096_0229aea8::func_ov096_02298ffc,
        &Unk_ov096_0229aea8::func_ov096_02298fb4,
        &Unk_ov096_0229aea8::func_ov096_02298f64,
        &Unk_ov096_0229aea8::func_ov096_02298ea4,
        &Unk_ov096_0229aea8::func_ov096_02298e84,
        &Unk_ov096_0229aea8::func_ov096_02298dfc,
        &Unk_ov096_0229aea8::func_ov096_02298dac,
        &Unk_ov096_0229aea8::func_ov096_02298d34,
        &Unk_ov096_0229aea8::func_ov096_02298cd8,
        &Unk_ov096_0229aea8::func_ov096_02298c9c,
        &Unk_ov096_0229aea8::func_ov096_02298c30,
        &Unk_ov096_0229aea8::func_ov096_02298c10,
        &Unk_ov096_0229aea8::func_ov096_02298bdc,
        &Unk_ov096_0229aea8::func_ov096_02298b74,
        &Unk_ov096_0229aea8::func_ov096_02298b54,
        &Unk_ov096_0229aea8::func_ov096_02298b34,
        &Unk_ov096_0229aea8::func_ov096_02298aa0,
        &Unk_ov096_0229aea8::func_ov096_02298a14,
        &Unk_ov096_0229aea8::func_ov096_0229898c,
        &Unk_ov096_0229aea8::func_ov096_0229895c,
        &Unk_ov096_0229aea8::func_ov096_02298768,
        &Unk_ov096_0229aea8::func_ov096_022986cc,
        &Unk_ov096_0229aea8::func_ov096_02298934,
        &Unk_ov096_0229aea8::func_ov096_022988d0,
        &Unk_ov096_0229aea8::func_ov098_0229b8ac,
        &Unk_ov096_0229aea8::func_ov098_0229b5d4,
        &Unk_ov096_0229aea8::func_ov098_0229b580,
        &Unk_ov096_0229aea8::func_ov096_022988b8,
        &Unk_ov096_0229aea8::func_ov098_0229b9e4,
        &Unk_ov096_0229aea8::func_ov096_02298870,
        &Unk_ov096_0229aea8::func_ov096_02298804,
        &Unk_ov096_0229aea8::func_ov098_0229b468,
        &Unk_ov096_0229aea8::func_ov098_0229b44c,
        &Unk_ov096_0229aea8::func_ov098_0229b36c,
        &Unk_ov096_0229aea8::func_ov098_0229b344,
        &Unk_ov096_0229aea8::func_ov098_0229b2d8,
        &Unk_ov096_0229aea8::func_ov098_0229b2b0,
        &Unk_ov096_0229aea8::func_ov098_0229b280};
    (this->*tbl[unk_8d])();
}

BOOL Unk_ov096_0229aea8::vfunc_50() {
    if (func_ov096_0229a3ec()) {
        return TRUE;
    }
    func_ov096_02299eec();
    func_ov096_0229a4cc();
    func_ov096_02299ee4();
    return TRUE;
}

BOOL Unk_ov096_0229aea8::vfunc_54() { return TRUE; }

BOOL Unk_ov096_0229aea8::vfunc_58() { return TRUE; }

BOOL Unk_ov096_0229aea8::vfunc_5c() {
    ProcBase_RequestDelete(this);
    return TRUE;
}

BOOL Unk_ov096_0229aea8::func_ov096_0229a3ec() {
    func_0206e63c();
    if (func_0206e61c()) {
        if (unk_8d == 0 || unk_8d == 1 || unk_8d == 0xa) {
            return func_ov096_0229a39c(7);
        }
    }
    if (unk_8d != 0 && unk_8d != 0xa) {
        return FALSE;
    }
    s32 t = -1;
    if (MenuCtrl_IsTouch()) {
        t = func_ov090_02291aa0();
    } else {
        u16 v = gPad[1];
        if (v & 0x800) {
            t = 7;
        } else if (v & 0x400) {
            t = 5;
        } else if (v & 4) {
            t = 4;
        }
    }
    return func_ov096_0229a39c(t);
}

BOOL Unk_ov096_0229aea8::func_ov096_0229a39c(s32 a) {
    void *o = ProcBase_GetParent(this);
    if (a != -1) {
        if (a != 0) {
            _ZN18Unk_ov090_022921e019func_ov090_02291d8cEj(o, (u8)a);
            unk_8c = 5;
            func_ov002_02200a60(1);
            if (a != 7) {
                func_ov096_02294ed4();
            }
            func_ov096_02294d9c(0x80);
            return TRUE;
        }
    }
    return FALSE;
}

void Unk_ov096_0229aea8::func_ov096_0229a360() {
    func_ov096_02299e54();
    func_ov094_02292c84(unk_de0, 1);
    func_ov002_02200a50(1);
    if (func_ov096_02294dbc(0x80000) == 0) {
        func_ov096_0229a32c();
    }
}

void Unk_ov096_0229aea8::func_ov096_0229a32c() {
    func_ov094_02292c08(unk_de0);
    func_ov002_02200a50(2);
    if (func_ov096_02294dbc(0x80000) == 0) {
        func_ov096_0229a2f8();
    }
}

void Unk_ov096_0229aea8::func_ov096_0229a2f8() {
    func_ov096_02299e44();
    func_ov002_02200a50(3);
    if (func_ov096_02294dbc(0x80000) == 0) {
        func_ov096_0229a28c();
        func_ov096_02294d9c(0x80000);
    }
}

void Unk_ov096_0229aea8::func_ov096_0229a28c() {
    func_ov094_022937a0(unk_358);
    func_ov094_02293d2c(unk_db8);
    func_ov002_022008e0(8, 3, 0, 0x30);
    func_020020b8(6);
    func_ov002_02200840(6, 0, 0);
    func_ov002_02200a50(4);
    func_ov096_02294dac(1);
    func_ov096_02294dac(2);
    unk_98 = func_ov002_02200920();
}

void Unk_ov096_0229aea8::func_ov096_0229a254() {
    if (func_ov002_02200908(0)) {
        func_ov002_02200a60(2);
        func_ov096_0229865c((S *)this);
    }
    func_ov002_02200840(6, 0, 0);
    unk_98 = func_ov002_02200920();
}

void Unk_ov096_0229aea8::func_ov096_0229a204() {
    _ZN18Unk_ov002_0220446819func_ov002_022006e4Ei(unk_23c0, 1);
    func_ov096_02296898();
    func_ov002_022008c4(8, 0, 0, 0x30);
    func_ov002_02200840(6, 0, 0);
    func_ov002_02200a50(6);
    unk_98 = func_ov002_02200920();
}

void Unk_ov096_0229aea8::func_ov096_0229a1a4() {
    if (func_ov002_022008fc(0)) {
        func_020021a0(6);
        func_ov096_02294d9c(2);
        if (func_ov096_02294dbc(0x80)) {
            func_ov002_02200a50(7);
        } else {
            func_ov002_02200a60(5);
            func_ov096_02294d9c(1);
        }
    } else {
        func_ov002_02200840(6, 0, 0);
    }
    unk_98 = func_ov002_02200920();
}

void Unk_ov096_0229aea8::func_ov096_0229a120() {
    void *r4 = func_ov096_02294f9c();
    func_02065af0();
    _ZN12Unk_0206d0a013func_0206d2e0EP16Unk_0206d1d4_SrcPvS2_i(unk_2904, r4, 3, 4, 1);
    func_ov002_022008e0(3, 0, 0, 0x30);
    func_020020b8(3);
    func_ov002_02200840(3, 0, 0);
    func_020020b8(4);
    func_ov002_02200840(4, 0, 0);
    func_ov002_02200a50(8);
    _ZN18Unk_ov002_0220473819func_ov002_02203ec8Ei(unk_2b14, 0x88);
    func_ov096_02294dac(0x100);
}

void Unk_ov096_0229aea8::func_ov096_0229a0d0() {
    if (func_ov002_02200908(0)) {
        func_ov002_02200a60(2);
        if (MenuCtrl_IsTouch()) {
            func_ov002_02200a58(7);
        } else {
            func_ov002_02200a58(0x17);
        }
    } else {
        func_ov002_02200840(3, 0, 0);
        func_ov002_02200840(4, 0, 0);
    }
}

void Unk_ov096_0229aea8::func_ov096_0229a094() {
    func_ov002_022008c4(3, 0, 0, 0x30);
    func_ov002_02200840(3, 0, 0);
    func_ov002_02200840(4, 0, 0);
    func_ov002_02200a50(0xa);
}

void Unk_ov096_0229aea8::func_ov096_0229a014() {
    if (func_ov002_022008fc(0)) {
        func_020021a0(3);
        func_020021a0(4);
        func_ov096_02294d9c(0x100);
        void *r4 = ProcBase_GetParent(this);
        if (func_ov096_02294dbc(0x20000)) {
            func_ov002_02200a60(5);
            func_ov096_02294d9c(1);
        } else {
            _ZN18Unk_ov090_022921e019func_ov090_02291a90Ev(r4);
            func_ov096_0229a360();
        }
    } else {
        func_ov002_02200840(3, 0, 0);
        func_ov002_02200840(4, 0, 0);
    }
}

// ===== unit 0229a000 =====

void Unk_ov096_0229aea8::func_ov096_0229a000() {
    _ZN18Unk_ov090_022921e019func_ov090_02291a88Ev(ProcBase_GetParent(this));
}

void Unk_ov096_0229aea8::func_ov096_02299f48() {
    unk_94 = 0;
    func_ov094_022939c0(unk_358, 2);
    _ZN18Unk_ov094_02294bd419func_ov094_02294644Ei(unk_db8, 2);
    func_ov094_02292d30(unk_de0, 6);
    unk_b3 = 0x26;
    _ZN18Unk_ov002_0220446819func_ov002_022006acEi(unk_23c0, 2);
    _ZN18Unk_ov002_0220460419func_ov002_022027a4Ev(unk_2480);
    func_ov096_02297160();
    unk_b5 = func_0206ec48();
    _ZN18Unk_ov002_0220455819func_ov002_02202310EiiPKc(unk_24fc, 3, 1, 0);
    _ZN18Unk_ov002_022013ac19func_ov002_022017c4Ev(unk_24fc);
    _ZN12Unk_0206d0a013func_0206d39cEi(unk_2904, 3);
    unk_c2 = 0;
    ProcBase_GetParent(this);
    if (_ZN18Unk_ov090_022921e019func_ov090_02291934Ev()) {
        func_ov096_02294dac(0x80000);
    }
}

void Unk_ov096_0229aea8::func_ov096_02299f08() {
    func_ov096_022982fc((S *)this);
    func_ov094_02292a80(unk_de0);
    func_ov094_02293998(unk_358);
    func_ov002_02201b04(unk_24fc);
    _ZN12Unk_0206d0a013func_0206d394Ev(unk_2904);
}

void Unk_ov096_0229aea8::func_ov096_02299eec() {
    func_ov096_02299eb0();
    ((Unk_ov096_02299eec_Obj *)unk_2498)->vfunc_0c();
}

void Unk_ov096_0229aea8::func_ov096_02299ee4() {
    func_ov096_02299e74();
}

void Unk_ov096_0229aea8::func_ov096_02299eb0() {
    func_ov096_022982fc((S *)this);
    func_ov094_02292acc(unk_de0);
    func_ov094_022939a0(unk_358);
    _ZN18Unk_ov094_02294bd419func_ov094_0229462cEv(unk_db8);
}

void Unk_ov096_0229aea8::func_ov096_02299e74() {
    func_ov096_02294e84();
    func_ov002_02201b58(unk_24fc);
    func_ov094_02292aa4(unk_de0);
    if (_ZN18Unk_ov002_0220446819func_ov002_0220071cEv(unk_23c0)) {
        func_ov096_02297658();
    }
}

void Unk_ov096_0229aea8::func_ov096_02299e54() {
    func_02002398(6, 2);
    func_0200226c(6, 0, 0, 0);
}

void Unk_ov096_0229aea8::func_ov096_02299e44() {
    func_ov094_02292ae0(unk_de0);
}

void Unk_ov096_0229aea8::func_ov096_02299d4c() {
    if (func_ov002_02200a14(1)) {
        unk_b5 = 0;
        func_ov096_0229867c((S *)this);
    } else if (Unk_ov096_02299778_Both()) {
        u8 a = gTouchCurX;
        u8 b = gTouchCurY;
        s32 t = func_ov096_0229821c((S *)this, a, b, 1);
        if (t != 0x26) {
            func_ov096_02298504((S *)this, t);
            return;
        }
        t = func_ov096_02297fb8((S *)this, a, b, 1);
        if (t != 0x26) {
            func_ov096_02298504((S *)this, t);
            return;
        }
        if (func_ov096_02297e5c((S *)this, a, b)) {
            func_ov096_02295734(0x25, 0);
            return;
        }
        switch (func_ov096_02297de0((S *)this, a, b)) {
        case 1:
            func_ov096_02295734(0x27, 0);
            break;
        case 2:
            func_ov002_02200a58(9);
            func_ov094_02292640(unk_de0, unk_bf);
            break;
        default:
            if (func_ov096_02297e7c((S *)this, a, b)) {
                func_ov096_02295734(0x24, 0);
            }
            break;
        }
    }
}

void Unk_ov096_0229aea8::func_ov096_02299c90() {
    if (gTouchHeld == 0) {
        if (func_ov096_02294dbc(0x10000)) {
            func_ov002_02200a58(0);
            _ZN18Unk_ov002_0220446819func_ov002_022006a4Eh(unk_23c0, 0x3c);
        } else {
            func_ov002_02200a58(3);
            func_ov096_0229a4cc();
        }
        return;
    }
    if (func_ov096_02294dbc(4) == 0) goto stop;
    if (func_ov096_0229770c()) {
        func_ov096_0229849c((S *)this, unk_b2);
        return;
    }
    if (func_ov096_02294dbc(0x10000) != 0) goto stop;
    if (_ZN18Unk_ov002_0220446819func_ov002_02200680Ev(unk_23c0) == 0) goto stop;
    if (unk_c2 != 0) {
        unk_c2 = unk_c2 - 1;
    } else {
        func_ov096_02295734(unk_b2, 1);
        func_ov002_02200a58(2);
    }
    return;
stop:
    _ZN18Unk_ov002_0220446819func_ov002_022006c0Ev(unk_23c0);
}

void Unk_ov096_0229aea8::func_ov096_02299c20() {
    if (func_0206e61c()) {
        func_ov002_02200a58(4);
    } else if (gTouchHeld == 0) {
        func_ov002_02200a58(4);
    } else if (func_ov096_02294dbc(4)) {
        if (func_ov096_0229770c()) {
            func_ov096_0229849c((S *)this, unk_b2);
            func_ov002_02202064(unk_24fc, 0);
            _ZN18Unk_ov002_0220446819func_ov002_022006e4Ei(unk_23c0, 1);
        }
    }
}

void Unk_ov096_0229aea8::func_ov096_02299bd8() {
    if (_ZN18Unk_ov002_0220446819func_ov002_02200680Ev(unk_23c0)) {
        if (unk_c2 != 0) {
            unk_c2 = unk_c2 - 1;
        } else {
            func_ov096_02295734(unk_b2, 1);
            func_ov002_02200a58(2);
        }
    }
}

void Unk_ov096_0229aea8::func_ov096_02299b18() {
    if (_ZN18Unk_ov002_022013ac19func_ov002_022017b4Ev(unk_24fc)) {
        if (func_0206e61c()) {
            func_ov096_02295c60();
        } else if (func_ov002_02200a14(1)) {
            func_ov096_02295c60();
        } else if (Unk_ov096_02299778_Both()) {
            s32 t = _ZN18Unk_ov002_022013ac19func_ov002_022014c0Eii(unk_24fc, gTouchCurX, gTouchCurY);
            if (t >= 0) {
                if (func_ov096_02294dbc(0x40000) == 0 || t != 0) {
                    unk_bb = *((u8 *)this + t + 0x27f5);
                    s32 u = func_ov096_02295ba4();
                    func_ov002_02201aa0(unk_24fc, t, u);
                    func_ov002_02200a58(0x1e);
                }
            }
        }
    }
}

void Unk_ov096_0229aea8::func_ov096_02299908() {
    if (func_0206e61c()) {
        func_ov096_02297358(unk_b4, 1);
        func_ov096_0229a39c(7);
        return;
    }
    func_ov096_02297548();
    func_ov096_02297804();
    s32 x = unk_a4 + 8;
    s32 y = unk_a8 + 8;
    s32 t = func_ov096_0229821c((S *)this, x, y, 0);
    if (t == 0x26) {
        t = func_ov096_02297fb8((S *)this, x, y, 0);
    }
    if (t != 0x26) {
        if (gTouchHeld == 0) {
            if (func_ov096_0229795c(t, unk_b4) == 0) {
                if (func_ov096_022982e0((S *)this, t)) {
                    func_ov096_02294ed4();
                }
                func_ov096_02298110((S *)this, t);
                if (unk_8d == 5) {
                    func_ov096_0229865c((S *)this);
                }
                if (func_ov096_022982f0((S *)this, t) == 0 && func_ov096_022982e0((S *)this, t) == 0) {
                    return;
                }
                func_ov094_02292398();
            } else {
                func_ov096_022983cc((S *)this, unk_b4, 4);
            }
        } else {
            func_ov096_02297750(t);
        }
    } else {
        t = func_ov096_02297e94((S *)this, x, y);
        if (t != 0x26) {
            if (gTouchHeld == 0) {
                if ((u8)(t + 0xde) <= 1) {
                    if (func_ov096_02297170() == 0) {
                        func_ov096_022983cc((S *)this, unk_b4, 4);
                    } else if (func_ov096_022971dc()) {
                        func_ov096_0229865c((S *)this);
                    }
                } else if (t == 0x24) {
                    unk_c0 = func_ov096_02296fb8();
                    u32 v = unk_c0;
                    if (v < 1) {
                        func_ov096_02296d5c();
                    } else if (v == 1) {
                        func_ov096_022983cc((S *)this, unk_b4, 4);
                    } else {
                        func_ov096_0229713c();
                    }
                } else if (t == 0x25) {
                    if (func_ov096_02296c30(0)) {
                        func_ov096_02296cac();
                    } else {
                        func_ov096_022983cc((S *)this, unk_b4, 4);
                    }
                } else {
                    func_ov096_022983cc((S *)this, unk_b4, 4);
                }
            } else {
                func_ov096_02297750(t);
            }
        } else if (func_ov096_02297f20((S *)this, x, y)) {
            if (gTouchHeld == 0) {
                if (func_ov096_02294dd0()) {
                    func_ov096_02294e08();
                    func_ov096_0229865c((S *)this);
                } else {
                    func_ov096_022983cc((S *)this, unk_b4, 4);
                }
            } else {
                func_ov096_02297750(0x21);
            }
        } else if (gTouchHeld == 0) {
            func_ov096_022983cc((S *)this, unk_b4, 4);
        }
    }
}

void Unk_ov096_0229aea8::func_ov096_02299868() {
    if (func_0206e61c()) {
        func_ov096_02297358(unk_b4, 1);
        func_ov096_0229a39c(7);
    } else {
        func_ov096_02297548();
        func_ov096_02297804();
        s32 t = func_ov096_02297fb8((S *)this, unk_a4 + 8, unk_a8 + 8, 0);
        if (t != 0x26) {
            if (gTouchHeld == 0) {
                if (((s32 (*)(S *))func_ov096_02297f6c)((S *)this) == 0) {
                    func_ov096_022983cc((S *)this, unk_b4, 4);
                }
                func_ov094_02292398();
                func_ov096_0229865c((S *)this);
            } else {
                func_ov096_02297750(t);
            }
        } else if (gTouchHeld == 0) {
            func_ov096_022983cc((S *)this, unk_b4, 4);
        }
    }
}

void Unk_ov096_0229aea8::func_ov096_02299820() {
    if (func_0206e61c()) {
        func_ov096_02294fac();
    } else if (func_ov002_02200a14(1)) {
        func_ov002_02200a58(0x17);
    } else if (_ZN18Unk_ov002_0220473819func_ov002_02203e24Ev(unk_2b14)) {
        func_ov096_02294fd4();
    }
}

void Unk_ov096_0229aea8::func_ov096_02299778() {
    if (func_0206e61c()) {
        func_ov096_02295c2c();
    } else if (func_ov002_02200a14(1)) {
        func_ov096_0229862c((S *)this);
    } else if (Unk_ov096_02299778_Both()) {
        s32 t = _ZN18Unk_ov002_022013ac19func_ov002_022014acEii(unk_24fc, gTouchCurX, gTouchCurY);
        if (t >= 0) {
            func_ov002_02201a3c(unk_24fc, t);
            unk_be = _ZN18Unk_ov002_022013ac19func_ov002_0220144cEjj(unk_24fc, unk_bd, (u8)t);
            func_ov002_02200a58(0x23);
        } else {
            func_ov096_02295c2c();
        }
    }
}

// ===== unit 022996e8 =====

void Unk_ov096_0229aea8::func_ov096_022996e8() {
    if (func_0206e61c()) {
        func_ov096_0229a39c(7);
        func_ov094_02292640(unk_de0, 0);
    } else if (gTouchHeld == 0) {
        func_ov002_02200a58(0);
        func_ov094_02292640(unk_de0, 0);
    } else if (func_ov096_022976f8(4)) {
        func_ov096_02298504((S *)this, 0x25);
        unk_9c = -8;
        unk_a0 = -8;
        func_ov096_0229849c((S *)this, 0x25);
        func_ov096_02294dac(0x4000);
        func_ov094_02292640(unk_de0, unk_bf);
    }
}

void Unk_ov096_0229aea8::func_ov096_022995b0() {
    if (func_ov002_022009d4()) {
        func_ov096_022986b0((S *)this);
        _ZN18Unk_ov002_0220446819func_ov002_022006e4Ei(unk_23c0, 1);
    } else {
        s32 t = func_ov002_022009c8();
        if (func_ov096_02295020((void *)t, 0)) {
            func_ov096_022975d4();
            func_ov096_02296854();
            _ZN18Unk_ov002_0220446819func_ov002_022006e4Ei(unk_23c0, 0);
        } else {
            u32 k = gPad[1];
            if (k & 1) {
                if (func_ov096_022982f0((S *)this, unk_b5) || func_ov096_022982e0((S *)this, unk_b5)) {
                    if (func_ov096_02297c10((S *)this, unk_b5) == 0) {
                        func_ov096_02295734(unk_b5, 0);
                    }
                } else if (func_ov096_022982d0((S *)this, unk_b5)) {
                    func_ov096_022966c8();
                } else if (unk_b5 == 0x25) {
                    func_ov096_02295734(0x25, 0);
                } else if (unk_b5 == 0x24) {
                    func_ov096_02295734(0x24, 0);
                }
            } else if (k & 0x100) {
                func_ov096_0229a39c(func_ov090_02291a38(0));
            } else if (k & 0x200) {
                func_ov096_0229a39c(func_ov090_02291a58(0));
            } else if (k & 2) {
                func_ov096_0229a39c(7);
            } else {
                _ZN18Unk_ov002_0220446819func_ov002_022006c0Ev(unk_23c0);
            }
        }
    }
}

void Unk_ov096_0229aea8::func_ov096_02299340() {
    if (func_0206e61c()) {
        func_ov096_02297358(unk_b4, 1);
        func_ov096_0229a39c(7);
    } else {
        s32 t = func_ov002_022009c8();
        if (func_ov096_02295020((void *)t, 1)) {
            func_ov096_022975d4();
            func_ov096_02296854();
            _ZN18Unk_ov002_0220446819func_ov002_022006e4Ei(unk_23c0, 0);
        } else {
            u32 k = gPad[1];
            if (k & 1) {
                if (unk_b5 == 0x21) {
                    if (func_ov096_02294dd0() == 0) {
                        return;
                    }
                    func_ov096_02294ed4();
                    func_ov096_02296638(unk_b5);
                } else if (func_ov096_022982c0((S *)this, unk_b5)) {
                    u32 b = unk_b5;
                    if (b == 0x24) {
                        unk_c0 = func_ov096_02296fb8();
                        func_ov096_02296638(unk_b5);
                    } else if (b == 0x22) {
                        func_ov096_02294ed4();
                        func_ov096_02296638(unk_b5);
                    } else if (b == 0x25) {
                        if (func_ov096_02296c30(1) == 0 && unk_b4 == 0x25) {
                            Snd_PlaySe(0x2a);
                        } else {
                            func_ov096_02294ed4();
                            func_ov096_02296638(unk_b5);
                        }
                    }
                } else if (func_ov096_022979f0(unk_b5, unk_ac, unk_b0) == 0) {
                    if (func_ov096_022982e0((S *)this, unk_b5)) {
                        func_ov096_02294ed4();
                    }
                    if (func_ov096_022982f0((S *)this, unk_b5)) {
                        u16 v;
                        u32 w;
                        v = func_ov096_02297b9c((S *)this, unk_b5);
                        w = func_ov096_02297b48((S *)this, unk_b5);
                        if (_ZN18Unk_ov096_0229aea819func_ov096_022969bcEPtiS0_h((S *)this, &unk_ac, unk_b0, &v, w) == 0) {
                            func_ov094_02293494(unk_358, func_ov096_0229826c((S *)this, unk_b5), v, w);
                        }
                    }
                    if (func_ov096_02297b9c((S *)this, unk_b5) == 0xfff1) {
                        func_ov096_02296638(unk_b5);
                    } else {
                        if (unk_b9 != 0x26 && func_ov096_02296c30(1)) {
                            unk_b9 = unk_b5;
                            unk_ae = unk_ac;
                        }
                        func_ov096_022965f0(unk_b5);
                    }
                }
            } else {
                if (k & 2) {
                    if (func_ov096_02297940(unk_b4) == 0) {
                        func_ov096_02296638(unk_b4);
                    } else {
                        u32 v = unk_b9;
                        if (v != 0x26) {
                            u32 o = unk_b4;
                            unk_b4 = v;
                            func_ov096_02296638(unk_b4);
                            unk_b9 = o;
                            func_ov096_02294dac(0x2000);
                        }
                    }
                }
                func_ov096_0229751c();
                _ZN18Unk_ov002_0220446819func_ov002_022006c0Ev(unk_23c0);
            }
        }
    }
}

void Unk_ov096_0229aea8::func_ov096_02299288() {
    if (func_0206e61c()) {
        func_ov096_02297358(unk_b4, 1);
        func_ov096_0229a39c(7);
    } else {
        s32 t = func_ov002_022009c8();
        if (func_ov096_02295020((void *)t, 2)) {
            func_ov096_022975d4();
            func_ov096_02296854();
            _ZN18Unk_ov002_0220446819func_ov002_022006e4Ei(unk_23c0, 0);
        } else {
            u32 k = gPad[1];
            if (k & 1) {
                if (func_ov096_02297c10((S *)this, unk_b5)) {
                    func_ov096_02296638(unk_b5);
                } else {
                    func_ov096_022965f0(unk_b5);
                }
            } else if (k & 2) {
                func_ov096_02296638(unk_b4);
            } else {
                func_ov096_0229751c();
                _ZN18Unk_ov002_0220446819func_ov002_022006c0Ev(unk_23c0);
            }
        }
    }
}

void Unk_ov096_0229aea8::func_ov096_022991ec() {
    if (func_0206e61c()) {
        func_ov096_02295c60();
    } else if (func_ov002_022009d4()) {
        func_ov096_02295c60();
    } else {
        s32 t = func_ov002_022009c8();
        u8 f = func_ov096_02294dbc(0x40000);
        if (func_ov002_022019d0(unk_24fc, t, &unk_bc, f)) {
            func_ov096_02296804();
        } else {
            u32 k = gPad[1];
            if (k & 1) {
                _ZN18Unk_ov002_0220464c19func_ov002_02202b68Ev(unk_2498);
                func_ov002_02200a58(0xe);
            } else if (k & 2) {
                func_ov096_022967a0();
            }
        }
    }
}

void Unk_ov096_0229aea8::func_ov096_02299198() {
    if (_ZN10HandCursor10isAnimDoneEv(unk_2498)) {
        unk_bb = *((u8 *)this + unk_bc + 0x27f5);
        s32 u = func_ov096_02295ba4();
        func_ov002_02201aa0(unk_24fc, unk_bc, u);
        func_ov002_02200a58(0x1e);
    }
}

void Unk_ov096_0229aea8::func_ov096_02299148() {
    if (_ZN18Unk_ov002_02202d9819func_ov002_022028f0Ev(unk_2498) == 0) {
        func_ov002_02200a58(unk_ba);
        if ((u8)(unk_ba + 0xf6) <= 2) {
            func_ov096_02297834(unk_b5);
        }
        func_ov096_0229a4cc();
    }
    func_ov096_0229751c();
}

void Unk_ov096_0229aea8::func_ov096_02299114() {
    if (_ZN10HandCursor10isAnimDoneEv(unk_2498)) {
        if (func_ov096_0229a39c(unk_b5 - 0x19) == 0) {
            func_ov096_022966a8();
        }
    }
}

void Unk_ov096_0229aea8::func_ov096_022990ec() {
    if (_ZN10HandCursor10isAnimDoneEv(unk_2498)) {
        func_ov096_022966e8();
        func_ov002_02200a58(0xa);
    }
}

void Unk_ov096_0229aea8::func_ov096_022990bc() {
    if (_ZN18Unk_ov002_02202d9819func_ov002_02202928Ev(unk_2498)) {
        func_ov096_02298430((S *)this, unk_b5);
        func_ov002_02200a58(0x13);
    }
}

void Unk_ov096_0229aea8::func_ov096_02299090() {
    if (_ZN10HandCursor10isAnimDoneEv(unk_2498)) {
        func_ov002_02200a58(unk_ba);
    }
    func_ov096_0229751c();
}

void Unk_ov096_0229aea8::func_ov096_02298ffc() {
    if (_ZN18Unk_ov002_02202d9819func_ov002_02202928Ev(unk_2498) == 0) {
        u32 a = unk_b7;
        u32 b = unk_b5;
        if (b == a) {
            func_ov096_0229725c(a);
            if (func_ov096_02294dbc(0x2000)) {
                func_ov096_022974b8(unk_ae, 0);
                func_ov096_022983cc((S *)this, unk_b9, 4);
                func_ov096_02294d9c(0x2000);
            }
        } else {
            func_ov096_022983cc((S *)this, a, 4);
        }
        if (unk_8d == 0x14) {
            func_ov096_022975d4();
            func_ov002_02200a58(0xa);
            func_ov094_02292398();
        }
    } else {
        func_ov096_0229751c();
    }
}

void Unk_ov096_0229aea8::func_ov096_02298fb4() {
    if (_ZN18Unk_ov002_02202d9819func_ov002_022028fcEv(unk_2498) == 0) {
        func_ov096_02297284(unk_b7);
        func_ov096_02294dac(0x40);
        func_ov002_02200a58(0x16);
        func_ov096_022975d4();
    } else {
        func_ov002_02200a58(0xa);
    }
}

void Unk_ov096_0229aea8::func_ov096_02298f64() {
    if (_ZN10HandCursor10isAnimDoneEv(unk_2498)) {
        func_ov002_02200a58(unk_ba);
    }
    if (_ZN18Unk_ov002_02202d9819func_ov002_02202928Ev(unk_2498)) {
        if (func_ov096_02294dbc(0x40)) {
            func_ov096_02294d9c(0x40);
            func_ov094_02292380();
        }
        func_ov096_0229751c();
    }
}

void Unk_ov096_0229aea8::func_ov096_02298ea4() {
    if (func_0206e61c()) {
        func_ov096_02294fac();
    } else if (func_0206e61c()) {
        func_ov096_02294fd4();
        func_ov096_02294dac(0x20000);
    } else {
        if (_ZN10HandCursor7getAnimEv(unk_2498) == 0) {
            s32 a = _ZN18Unk_ov002_0220473819func_ov002_02203f78Ei(unk_2b14, 1);
            s32 b = _ZN18Unk_ov002_0220473819func_ov002_02203f28Ei(unk_2b14, 1);
            _ZN18Unk_ov002_02202d9819func_ov002_02202a40Eii(unk_2498, a, b);
            _ZN18Unk_ov002_0220464c19func_ov002_02202d00Ei(unk_2498, 1);
        }
        if (func_ov002_022009d4()) {
            func_ov096_02296898();
            func_ov002_02200a58(7);
        } else {
            u32 k = gPad[1];
            if ((k & 1) || (k & 2)) {
                _ZN18Unk_ov002_0220464c19func_ov002_02202b68Ev(unk_2498);
                func_ov002_02200a58(0x18);
            }
        }
    }
}

void Unk_ov096_0229aea8::func_ov096_02298e84() {
    if (_ZN10HandCursor10isAnimDoneEv(unk_2498)) {
        func_ov096_02294fd4();
    }
}

void Unk_ov096_0229aea8::func_ov096_02298dfc() {
    if (func_0206e61c()) {
        func_ov096_02295c2c();
    } else if (func_ov002_022009d4()) {
        func_ov096_02298644((S *)this);
    } else {
        s32 t = func_ov002_022009c8();
        if (func_ov002_022019d0(unk_24fc, t, &unk_bc, 0)) {
            func_ov096_02296804();
        }
        u32 k = gPad[1];
        if (k & 1) {
            _ZN18Unk_ov002_0220464c19func_ov002_02202b68Ev(unk_2498);
            func_ov002_02200a58(0x1a);
        } else if (k & 2) {
            func_ov096_02295c2c();
        }
    }
}

// ===== unit 02298dac =====

void Unk_ov096_0229aea8::func_ov096_02298dac() {
    if (_ZN10HandCursor10isAnimDoneEv(unk_2498)) {
        func_ov002_02201a3c(unk_24fc, unk_bc);
        unk_be = _ZN18Unk_ov002_022013ac19func_ov002_0220144cEjj(unk_24fc, unk_bd, unk_bc);
        func_ov002_02200a58(0x23);
    }
}

extern "C" void _ZN18Unk_ov096_0229aea819func_ov096_02298d34Ev(S *s)
{
    if (_ZN18Unk_ov002_0220460419func_ov002_02202718Ev((u8 *)s + 0x2480)) {
        if (func_ov096_022982c0(s, s->unk_b4) || _ZN18Unk_ov096_0229aea819func_ov096_02294dbcEj(s, 0x2000)) {
            s->unk_a4 = func_ov096_02297d50(s, s->unk_b4);
            s->unk_a8 = func_ov096_02297cc0(s, s->unk_b4);
            _ZN18Unk_ov002_022044e419func_ov002_02200a58Eh(s, 0x1c);
        } else {
            _ZN18Unk_ov096_0229aea819func_ov096_02298cd8Ev(s);
        }
    } else {
        _ZN18Unk_ov096_0229aea819func_ov096_022974f4Ev(s);
    }
}

extern "C" void _ZN18Unk_ov096_0229aea819func_ov096_02298cd8Ev(S *s)
{
    _ZN18Unk_ov096_0229aea819func_ov096_02297358Ejj(s, s->unk_b4, 1);
    if (_ZN18Unk_ov096_0229aea819func_ov096_02294dbcEj(s, 0x2000)) {
        func_ov096_0229838c(s, s->unk_b4, s->unk_b9, s->unk_ae, 0);
        _ZN18Unk_ov096_0229aea819func_ov096_02294d9cEj(s, 0x2000);
    } else {
        func_ov094_02292398();
        func_ov096_0229865c(s);
    }
}

extern "C" void _ZN18Unk_ov096_0229aea819func_ov096_02298c9cEv(S *s)
{
    if (_ZN18Unk_ov002_022013ac19func_ov002_022017b4Ev((u8 *)s + 0x24fc)) {
        if (MenuCtrl_IsButtons()) {
            _ZN18Unk_ov096_0229aea819func_ov096_0229673cEv(s);
            _ZN18Unk_ov002_022044e419func_ov002_02200a58Eh(s, 0xd);
        } else {
            _ZN18Unk_ov002_022044e419func_ov002_02200a58Eh(s, 4);
        }
    }
}

extern "C" s32 func_ov096_02298c4c(S *s)
{
    if (func_ov002_02201a28(s->s_24fc)) {
        func_ov002_02202064(s->s_24fc, 0);
        _ZN18Unk_ov002_0220446819func_ov002_022006e4Ei(s->s_23c0, 1);
        if (_ZN10HandCursor7getAnimEv(s->s_2498)) {
            _ZN18Unk_ov096_0229aea819func_ov096_02296708Ev(s);
        }
        return 1;
    }
    return 0;
}

extern "C" void _ZN18Unk_ov096_0229aea819func_ov096_02298c30Ev(S *s)
{
    if (func_ov096_02298c4c(s)) {
        _ZN18Unk_ov002_022044e419func_ov002_02200a58Eh(s, 0x1f);
    }
}

extern "C" void _ZN18Unk_ov096_0229aea819func_ov096_02298c10Ev(S *s)
{
    if (_ZN18Unk_ov002_022013ac19func_ov002_022017a4Ev((u8 *)s + 0x24fc)) {
        _ZN18Unk_ov096_0229aea819func_ov096_02295d28Ev(s);
    }
}

extern "C" void _ZN18Unk_ov096_0229aea819func_ov096_02298bdcEv(S *s)
{
    if (_ZN18Unk_ov002_022040ec19func_ov002_02204234Ei((u8 *)s + 0x27fc, 1)) {
        _ZN18Unk_ov002_022044e419func_ov002_02200a58Eh(s, s->unk_ba);
        _ZN10HandCursor15enableObjWindowEv((u8 *)s + 0x2498);
    }
}

extern "C" void _ZN18Unk_ov096_0229aea819func_ov096_02298b74Ev(S *s)
{
    if (_ZN18Unk_ov002_0220473819func_ov002_02203f08Ev(s->s_2b14)) {
        if (_ZN10HandCursor7getAnimEv(s->s_2498)) {
            s32 r4 = _ZN18Unk_ov002_0220473819func_ov002_02203f78Ei(s->s_2b14, 1);
            _ZN18Unk_ov002_02202d9819func_ov002_02202a40Eii(s->s_2498, r4, _ZN18Unk_ov002_0220473819func_ov002_02203f28Ei(s->s_2b14, 1));
        }
    } else {
        _ZN18Unk_ov096_0229aea819func_ov096_02296898Ev(s);
        _ZN18Unk_ov002_022044e419func_ov002_02200a50Eh(s, 9);
        _ZN18Unk_ov002_022044e419func_ov002_02200a60Eh(s, 1);
    }
}

extern "C" void _ZN18Unk_ov096_0229aea819func_ov096_02298b54Ev(S *s)
{
    if (_ZN18Unk_ov002_022013ac19func_ov002_022017b4Ev((u8 *)s + 0x24fc)) {
        func_ov096_0229860c(s);
    }
}

extern "C" void _ZN18Unk_ov096_0229aea819func_ov096_02298b34Ev(S *s)
{
    if (func_ov096_02298c4c(s)) {
        _ZN18Unk_ov096_0229aea819func_ov096_02296898Ev(s);
        _ZN18Unk_ov002_022044e419func_ov002_02200a58Eh(s, 0x24);
    }
}

extern "C" void _ZN18Unk_ov096_0229aea819func_ov096_02298aa0Ev(S *s)
{
    if (_ZN18Unk_ov002_022013ac19func_ov002_022017a4Ev(s->s_24fc)) {
        if (_ZN18Unk_ov096_0229aea819func_ov096_02294dbcEj(s, 0x200)) {
            if (_ZN18Unk_ov002_022013ac19func_ov002_02201438Ej(s->s_24fc, s->unk_be) == 1) {
                _ZN18Unk_ov096_0229aea819func_ov096_02294f14Ev(s);
                return;
            }
        }
        if (_ZN18Unk_ov002_022013ac19func_ov002_022013e4EPvj(s->s_24fc, (void *)func_0206ed68(), s->unk_be) == 2) {
            s->unk_bd = s->unk_bd + 1;
            if (s->unk_bd >= _ZN18Unk_ov002_022013ac19func_ov002_02201490Ev(s->s_24fc)) {
                s->unk_bd = 0;
            }
            _ZN18Unk_ov096_0229aea819func_ov096_022956a0Ei(s, 0);
        } else {
            func_ov096_0229865c(s);
        }
    }
}

extern "C" void _ZN18Unk_ov096_0229aea819func_ov096_02298a14Ev(S *s)
{
    u32 r4;
    s->unk_a4 = func_ov096_02297d50(s, 0x24);
    s->unk_a8 = func_ov096_02297cc0(s, 0x24);
    r4 = s->unk_c0;
    if (r4 != 5 || IsZero(data_020e416c)) {
        _ZN18Unk_ov096_0229aea819func_ov096_02294ef4Ev(s);
    }
    if (_ZN18Unk_ov096_0229aea819func_ov096_02296dbcEit(s, r4, s->unk_ac)) {
        _ZN18Unk_ov002_022044e419func_ov002_02200a58Eh(s, 0x26);
        s->unk_ac = _ZN18Unk_ov096_0229aea819func_ov096_02296e70Eit(s, r4, s->unk_ac);
        func_ov094_02292774((u8 *)s + 0xde0, 1);
    }
}

extern "C" void _ZN18Unk_ov096_0229aea819func_ov096_0229898cEv(S *s)
{
    if (func_ov094_02292738((u8 *)s + 0xde0)) {
        _ZN18Unk_ov096_0229aea819func_ov096_02297160Ev(s);
        func_ov094_02292864((u8 *)s + 0xde0);
        if (s->unk_ac != 0xfff1) {
            if (_ZN18Unk_ov096_0229aea819func_ov096_02294dbcEj(s, 0x8000)) {
                func_ov096_0229838c(s, 0x24, s->unk_b4, s->unk_ac, 0);
                return;
            }
            _ZN18Unk_ov096_0229aea819func_ov096_022974b8Ejj(s, s->unk_ac, 0);
            _ZN18Unk_ov096_0229aea819func_ov096_022972ecEj(s, 1);
        }
        _ZN18Unk_ov002_022044e419func_ov002_02200a58Eh(s, 0x27);
        _ZN18Unk_ov096_0229aea819func_ov096_0229895cEv(s);
    }
}

extern "C" void _ZN18Unk_ov096_0229aea819func_ov096_0229895cEv(S *s)
{
    if (_ZN18Unk_ov096_0229aea819func_ov096_02296d88Ei(s, s->unk_c0) == 0) {
        _ZN18Unk_ov096_0229aea819func_ov096_02297160Ev(s);
        func_ov094_0229272c((u8 *)s + 0xde0);
        func_ov096_0229865c(s);
    }
}

extern "C" void _ZN18Unk_ov096_0229aea819func_ov096_02298934Ev(S *s)
{
    if (func_ov094_02293c1c((u8 *)s + 0xdb8)) {
        _ZN18Unk_ov096_0229aea819func_ov096_02297160Ev(s);
        func_ov096_0229865c(s);
    }
}

extern "C" void _ZN18Unk_ov096_0229aea819func_ov096_022988d0Ev(S *s)
{
    if (func_ov094_02292e30((u8 *)s + 0x358)) {
        void *p = PlayerData_GetCurrent();
        u32 v = s->unk_ac;
        if (v == 0x136a) {
            _ZN12Unk_02097ff413func_0209801cEj(p, 0x27);
        } else if (v == 0x137b) {
            _ZN12Unk_02097ff413func_0209801cEj(p, 0x28);
        }
        s->unk_b0 = 0;
        _ZN18Unk_ov096_0229aea819func_ov096_02297358Ejj(s, s->unk_b6, 1);
        func_ov096_0229865c(s);
    }
}

extern "C" void _ZN18Unk_ov096_0229aea819func_ov096_022988b8Ev(S *s)
{
    if (func_020951ac()) {
        func_ov096_0229865c(s);
    }
}

extern "C" void _ZN18Unk_ov096_0229aea819func_ov096_02298870Ev(S *s)
{
    u16 t;
    Snd_PlaySe(0x40);
    _ZN18Unk_ov096_0229aea819func_ov096_02294ef4Ev(s);
    t = func_ov096_02297b9c(s, s->unk_b6);
    if (PlayerActor_RequestHoldUpItem(&t)) {
        func_ov096_0229806c(s, s->unk_b6);
        _ZN18Unk_ov002_022044e419func_ov002_02200a58Eh(s, 0x2f);
    }
}

extern "C" void _ZN18Unk_ov096_0229aea819func_ov096_02298804Ev(S *s)
{
    if (s->unk_c1 != 0) {
        s32 r;
        s->unk_c1 = s->unk_c1 - 1;
        r = s->unk_c1 % 5;
        if (r != 0) {
            if (r == 3) {
                _ZN18Unk_ov096_0229aea819func_ov096_02297750Ej(s, s->unk_b6);
            }
        } else {
            _ZN18Unk_ov096_0229aea819func_ov096_02297804Ev(s);
        }
        if (s->unk_c1 == 0) {
            func_ov096_0229806c(s, s->unk_b6);
        }
    } else {
        _ZN18Unk_ov002_022044e419func_ov002_02200a58Eh(s, 0x2f);
        _ZN18Unk_ov096_0229aea819func_ov096_022988b8Ev(s);
    }
}

extern "C" void _ZN18Unk_ov096_0229aea819func_ov096_02298768Ev(S *s)
{
    switch (func_02042830(s->unk_c4)) {
    case 1:
        if (_ZN18Unk_ov096_0229aea819func_ov096_02294dbcEj(s, 0x1000)) {
            func_ov094_022934d8((u8 *)s + 0x358, func_ov096_0229826c(s, s->unk_b6));
            func_ov096_0229865c(s);
        } else {
            _ZN18Unk_ov096_0229aea819func_ov096_02297160Ev(s);
            func_ov096_0229865c(s);
        }
        break;
    case 2:
        if (_ZN18Unk_ov096_0229aea819func_ov096_02294dbcEj(s, 0x1000) == 0) {
            _ZN18Unk_ov096_0229aea819func_ov096_022972ecEj(s, 1);
        }
        func_ov096_0229865c(s);
        func_ov096_02298334(s, 3, 0xff, 0);
        Snd_PlaySe(0x73);
        break;
    default:
        return;
    }
    func_02042820(s->unk_c4);
    s->unk_c4 = -1;
}

extern "C" void _ZN18Unk_ov096_0229aea819func_ov096_022986ccEv(S *s)
{
    switch (func_02042d10(s->unk_c4)) {
    case 1:
        if (_ZN18Unk_ov096_0229aea819func_ov096_02294dbcEj(s, 0x1000)) {
            func_ov094_022934d8((u8 *)s + 0x358, func_ov096_0229826c(s, s->unk_b6));
            func_ov096_0229865c(s);
        } else {
            _ZN18Unk_ov096_0229aea819func_ov096_02297160Ev(s);
            func_ov096_0229865c(s);
        }
        break;
    case 2:
        if (_ZN18Unk_ov096_0229aea819func_ov096_02294dbcEj(s, 0x1000) == 0) {
            _ZN18Unk_ov096_0229aea819func_ov096_022972ecEj(s, 1);
        }
        func_ov096_0229865c(s);
        func_ov096_02298334(s, 8, 0xff, 0);
        Snd_PlaySe(0x73);
        break;
    default:
        return;
    }
    func_02042820(s->unk_c4);
    s->unk_c4 = -1;
}

extern "C" void func_ov096_022986b0(S *s)
{
    _ZN18Unk_ov096_0229aea819func_ov096_02296898Ev(s);
    _ZN18Unk_ov096_0229aea819func_ov096_022978acEv(s);
    _ZN18Unk_ov002_022044e419func_ov002_02200a58Eh(s, 0);
}

extern "C" void func_ov096_0229867c(S *s)
{
    s->unk_b3 = 0x26;
    _ZN18Unk_ov096_0229aea819func_ov096_02296964Ev(s);
    _ZN18Unk_ov002_022044e419func_ov002_02200980Ev(s);
    _ZN18Unk_ov096_0229aea819func_ov096_022975d4Ev(s);
    _ZN18Unk_ov002_022044e419func_ov002_02200a58Eh(s, 0xa);
    _ZN18Unk_ov096_0229aea819func_ov096_02297834Ej(s, s->unk_b5);
}

extern "C" void func_ov096_0229865c(S *s)
{
    if (MenuCtrl_IsTouch()) {
        func_ov096_022986b0(s);
    } else {
        func_ov096_0229867c(s);
    }
}

extern "C" void func_ov096_02298644(S *s)
{
    _ZN18Unk_ov096_0229aea819func_ov096_02296898Ev(s);
    _ZN18Unk_ov002_022044e419func_ov002_02200a58Eh(s, 8);
}

extern "C" void func_ov096_0229862c(S *s)
{
    _ZN18Unk_ov096_0229aea819func_ov096_02296910Ev(s);
    _ZN18Unk_ov002_022044e419func_ov002_02200a58Eh(s, 0x19);
}

extern "C" void func_ov096_0229860c(S *s)
{
    if (MenuCtrl_IsTouch()) {
        func_ov096_02298644(s);
    } else {
        func_ov096_0229862c(s);
    }
}

extern "C" void func_ov096_022985b8(S *s)
{
    _ZN18Unk_ov096_0229aea819func_ov096_02294d9cEj(s, 0x10000);
    if (func_ov096_022982f0(s, s->unk_b2)) {
        func_ov002_022016e4(s->s_27f0, 0x22);
        _ZN18Unk_ov096_0229aea819func_ov096_02295a44Ei(s, s->unk_b2);
        if (func_ov002_022016cc(s->s_27f0) == 0) {
            _ZN18Unk_ov096_0229aea819func_ov096_02294dacEj(s, 0x10000);
        }
    }
}

extern "C" void func_ov096_02298504(S *s, u32 a)
{
    s32 r6, r7;
    s->unk_b2 = a;
    _ZN18Unk_ov002_022044e419func_ov002_02200a58Eh(s, 1);
    r6 = gTouchCurX;
    r7 = gTouchCurY;
    s->unk_9c = func_ov096_02297d50(s, s->unk_b2) - r6;
    s->unk_a0 = func_ov096_02297cc0(s, s->unk_b2) - r7;
    s->unk_b3 = a;
    _ZN18Unk_ov002_0220446819func_ov002_022006b8Ev(s->s_23c0);
    _ZN18Unk_ov002_0220446819func_ov002_022006c0Ev(s->s_23c0);
    s->unk_c2 = 2;
    func_ov096_022985b8(s);
    if (func_ov096_02297c68(s, a)) {
        _ZN18Unk_ov096_0229aea819func_ov096_02294d9cEj(s, 4);
    } else {
        _ZN18Unk_ov096_0229aea819func_ov096_02294dacEj(s, 4);
    }
    if (func_ov096_022982f0(s, a) == 0 && a != 0x24) {
        _ZN18Unk_ov096_0229aea819func_ov096_02294ed4Ev(s);
    }
    func_ov094_0229238c();
}

extern "C" void func_ov096_0229849c(S *s, u32 a)
{
    s->unk_b4 = a;
    _ZN18Unk_ov002_0220446819func_ov002_022006e4Ei((u8 *)s + 0x23c0, 1);
    _ZN18Unk_ov096_0229aea819func_ov096_022973ccEj(s, a);
    switch (s->unk_b1) {
    case 1:
        _ZN18Unk_ov002_022044e419func_ov002_02200a58Eh(s, 6);
        break;
    case 2:
        _ZN18Unk_ov002_022044e419func_ov002_02200a58Eh(s, 5);
        break;
    }
    _ZN18Unk_ov096_0229aea819func_ov096_02297548Ev(s);
    _ZN18Unk_ov096_0229aea819func_ov096_02294d9cEj(s, 0x4000);
    func_ov094_02292380();
    s->unk_b9 = 0x26;
}

// ===== unit 02298430 =====
extern "C" void func_ov096_02298430(S *s, u32 a)
{
    s->unk_b4 = a;
    _ZN18Unk_ov002_0220446819func_ov002_022006e4Ei((u8 *)s + 0x23c0, 1);
    if (s->unk_bb == 0) {
        _ZN18Unk_ov096_0229aea819func_ov096_022973a0Ej(s, a);
    } else {
        _ZN18Unk_ov096_0229aea819func_ov096_022973ccEj(s, a);
    }
    switch (s->unk_b1) {
    case 1:
        s->unk_ba = 0xc;
        break;
    case 2:
        s->unk_ba = 0xb;
        break;
    }
    _ZN18Unk_ov096_0229aea819func_ov096_0229751cEv(s);
    func_ov094_02292380();
}

extern "C" void func_ov096_022983cc(S *s, u32 a, u32 b)
{
    s32 t;
    s32 u;

    s->unk_b4 = a;
    _ZN18Unk_ov002_0220460419func_ov002_022026f4Eii(s->s_2480, s->unk_a4, s->unk_a8);
    t = func_ov096_02297d50(s, a);
    u = func_ov096_02297cc0(s, a);
    _ZN18Unk_ov002_0220460419func_ov002_022026c4Eiii(s->s_2480, t, u, b);
    _ZN18Unk_ov002_0220460419func_ov002_02202718Ev(s->s_2480);
    _ZN18Unk_ov096_0229aea819func_ov096_022974f4Ev(s);
    _ZN18Unk_ov002_022044e419func_ov002_02200a58Eh(s, 0x1b);
}

extern "C" void func_ov096_0229838c(S *s, u32 a, u32 b, u32 c, u8 d)
{
    _ZN18Unk_ov096_0229aea819func_ov096_022974b8Ejj(s, c, d);
    s->unk_a4 = func_ov096_02297d50(s, a);
    s->unk_a8 = func_ov096_02297cc0(s, a);
    func_ov096_022983cc(s, b, 4);
}

extern "C" void func_ov096_02298334(S *s, u32 a, u32 b, u32 c)
{
    Unk_ov096_02297fb8_Msg m;

    if (b == 0xff) {
        s->unk_ba = s->unk_8d;
    } else {
        s->unk_ba = b;
    }
    m.a = data_021edb68;
    m.a = a;
    _ZN18Unk_ov002_022040ec19func_ov002_02204394EPhij((u8 *)s + 0x27fc, &m, (u32)c, 0);
    _ZN18Unk_ov002_022044e419func_ov002_02200a58Eh(s, 0x20);
    _ZN10HandCursor16disableObjWindowEv((u8 *)s + 0x2498);
}

extern "C" void func_ov096_02298320(S *s)
{
    s->unk_c1 = 0xe;
    _ZN18Unk_ov002_022044e419func_ov002_02200a58Eh(s, 0x32);
}

extern "C" void func_ov096_022982fc(S *s)
{
    s32 i = 0;
    u8 *p = (u8 *)s + 0x2e8;
    for (; i < 2; i++) {
        _ZN12Unk_020e45f813func_020b87d0Ev(p + i * 0x38);
    }
}

extern "C" u32 func_ov096_022982f0(S *s, u32 id)
{
    if (id <= 0xe) {
        return 1;
    }
    return 0;
}

extern "C" u32 func_ov096_022982e0(S *s, u32 id)
{
    if (id >= 0xf && id <= 0x18) {
        return 1;
    }
    return 0;
}

extern "C" u32 func_ov096_022982d0(S *s, u32 id)
{
    if (id >= 0x19 && id <= 0x20) {
        return 1;
    }
    return 0;
}

extern "C" u32 func_ov096_022982c0(S *s, u32 id)
{
    if (id >= 0x22 && id <= 0x25) {
        return 1;
    }
    return 0;
}

extern "C" void func_ov096_022982a0(S *s)
{
    _ZN18Unk_ov002_02202d9819func_ov002_0220288cEv((u8 *)s + 0x2498);
    s->unk_b5 = func_ov090_02291944() + 0x19;
}

extern "C" u32 func_ov096_0229826c(S *s, u32 id)
{
    if (func_ov096_022982f0(s, id)) {
        return (u8)id;
    }
    if (func_ov096_022982c0(s, id)) {
        return (u8)(id - 4);
    }
    return 0;
}

extern "C" u32 func_ov096_0229825c(S *s, u32 id)
{
    if (id <= 0xe) {
        return (u8)id;
    }
    return 0x26;
}

extern "C" u32 func_ov096_0229821c(S *s, s32 a, s32 b, s32 c)
{
    s32 r = func_ov094_02293968((u8 *)s + 0x358);
    if (r != 0x23) {
        if (c && func_ov094_0229311c((u8 *)s + 0x358, r)) {
            return 0x26;
        }
        return func_ov096_0229825c(s, r);
    }
    return 0x26;
}

extern "C" s32 func_ov096_02298110(S *s, u32 id)
{
    u16 v;

    if (func_ov096_022982e0(s, id) && func_ov096_02297c10(s, id)) {
        return 0;
    }
    if (func_ov096_022982f0(s, id) || func_ov096_022982e0(s, id)) {
        v = func_ov096_02297b9c(s, id);
        _ZN18Unk_ov096_0229aea819func_ov096_022969bcEPtiS0_h(s, &s->unk_ac, s->unk_b0, &v, func_ov096_02297b48(s, id));
        if (v != 0xfff1) {
            func_ov096_022980a0(s, s->unk_b4, v, func_ov096_02297b48(s, id));
        }
        _ZN18Unk_ov096_0229aea819func_ov096_02297358Ejj(s, id, 1);
        return 1;
    }
    if ((u8)(id + 0xde) <= 1) {
        if (_ZN18Unk_ov096_0229aea819func_ov096_022971dcEv(s)) {
            return 1;
        }
        return 0;
    }
    if (id == 0x24) {
        if (s->unk_c0 < 1) {
            _ZN18Unk_ov096_0229aea819func_ov096_02296d5cEv(s);
            return 0;
        }
        _ZN18Unk_ov096_0229aea819func_ov096_0229713cEv(s);
        return 1;
    }
    if (id == 0x25) {
        if (!_ZN18Unk_ov096_0229aea819func_ov096_02296cacEv(s)) {
            _ZN18Unk_ov096_0229aea819func_ov096_02297358Ejj(s, s->unk_b4, 1);
        }
        return 1;
    }
    if (id == 0x21) {
        _ZN18Unk_ov096_0229aea819func_ov096_02294e08Ev(s);
        return 1;
    }
    return 0;
}

extern "C" void func_ov096_022980a0(S *s, u32 id, u32 a, u32 b)
{
    if (func_ov096_022982f0(s, id)) {
        u32 t = func_ov096_0229826c(s, id);
        func_ov094_02293494((u8 *)s + 0x358, t, a, b);
        func_ov094_02293434((u8 *)s + 0x358, t);
    } else if (func_ov096_022982e0(s, id)) {
        _ZN12Unk_0206555413func_02065588Etj(func_ov096_02297b14(s, id), a, b);
    } else if (id == 0x25) {
        _ZN18Unk_ov096_0229aea819func_ov096_02296b68Et(s, a);
    }
}

extern "C" void func_ov096_0229806c(S *s, u32 id)
{
    if (func_ov096_022982f0(s, id) || func_ov096_022982e0(s, id)) {
        func_ov096_022980a0(s, id, 0xfff1, 0);
    }
}

extern "C" void func_ov096_0229803c(S *s, u32 id)
{
    if (func_ov096_022982e0(s, id)) {
        _ZN18Unk_ov094_02294bd419func_ov094_022942f4Ei((u8 *)s + 0xdb8, func_ov096_02298008(s, id));
    }
}

extern "C" u32 func_ov096_0229801c(S *s)
{
    s32 r = func_02098ffc();
    if (r == -1) {
        return 0x26;
    }
    return (u8)r;
}

extern "C" u32 func_ov096_02298008(S *s, u32 id)
{
    if (id >= 0xf && id <= 0x18) {
        return (u8)(id - 0xf);
    }
    return 0;
}

extern "C" u32 func_ov096_02297ff8(S *s, u32 id)
{
    if (id <= 9) {
        return (u8)(id + 0xf);
    }
    return 0x26;
}

extern "C" u32 func_ov096_02297fb8(S *s, s32 a, s32 b, s32 c)
{
    s32 r = _ZN18Unk_ov094_02294bd419func_ov094_02294610Eii((u8 *)s + 0xdb8);
    if (r != 0x37) {
        if (c && func_ov094_02293d80((u8 *)s + 0xdb8, r)) {
            return 0x26;
        }
        return func_ov096_02297ff8(s, r);
    }
    return 0x26;
}

extern "C" s32 func_ov096_02297f6c(S *s, u32 id)
{
    if (!func_ov096_02297c10(s, id)) {
        func_02065e70(s->s_2c8c, func_ov096_02297b14(s, id));
        func_ov096_02297f3c(s, s->unk_b4, s->s_2c8c);
    }
    _ZN18Unk_ov096_0229aea819func_ov096_02297358Ejj(s, id, 1);
    return 1;
}

extern "C" void func_ov096_02297f3c(S *s, u32 id, void *p)
{
    if (func_ov096_022982e0(s, id)) {
        _ZN18Unk_ov094_02294bd419func_ov094_02294318Eii((u8 *)s + 0xdb8, func_ov096_02298008(s, id), p);
    }
}

extern "C" BOOL func_ov096_02297f20(S *s, s32 x, s32 y)
{
    if (x < 4 || x >= 0x1c) {
        return FALSE;
    }
    if (y < 0xac || y >= 0xc4) {
        return FALSE;
    }
    return TRUE;
}

extern "C" s32 func_ov096_02297e94(S *s, s32 x, s32 y)
{
    if (func_ov096_02297e7c(s, x, y)) {
        return 0x24;
    }
    if (x > 0x6c && x < 0xc4 && y > 0x50 && y < 0x68) {
        if (x < 0x98) {
            return 0x22;
        }
        return 0x23;
    }
    if (func_ov096_02297e5c(s, x, y)) {
        if (_ZN18Unk_ov096_0229aea819func_ov096_02294dbcEj(s, 0x4000)) {
            return 0x26;
        }
        return 0x25;
    }
    if (x > 0x30 && x < 0x60 && y > 0x50 && y < 0x60) {
        if (_ZN18Unk_ov096_0229aea819func_ov096_02294dbcEj(s, 0x4000)) {
            return 0x26;
        }
        return 0x25;
    }
    _ZN18Unk_ov096_0229aea819func_ov096_02294d9cEj(s, 0x4000);
    return 0x26;
}

extern "C" BOOL func_ov096_02297e7c(S *s, s32 x, s32 y)
{
    if (x > 0x88 && x < 0xa8 && y > 0x20 && y < 0x50) {
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL func_ov096_02297e5c(S *s, s32 x, s32 y)
{
    if (func_ov094_02293928(s->s_358, x, y)) {
        return TRUE;
    }
    return FALSE;
}

extern "C" s32 func_ov096_02297de0(S *s, s32 x, s32 y)
{
    s32 v;

    if (y < 0x50 || y > 0x60) {
        return 0;
    }
    s->unk_bf = 0;
    if (x < 0x30) {
        return 0;
    }
    if (x < 0x40) {
        v = 10000;
        s->unk_bf = 3;
    } else if (x < 0x48) {
        v = 1000;
        s->unk_bf = 2;
    } else if (x < 0x60) {
        v = 100;
        s->unk_bf = 1;
    } else {
        return 0;
    }
    if (v > _ZN18Unk_ov096_0229aea819func_ov096_02296c18Ev(s)) {
        return 1;
    }
    s->unk_ae = Item_FindMoneyBagForAmount(v, 0, 0);
    return 2;
}

extern "C" s32 func_ov096_02297d50(S *s, u32 id)
{
    if (func_ov096_022982f0(s, id)) {
        return func_ov094_02293624((u8 *)s + 0x358, func_ov096_0229826c(s, id));
    }
    if (func_ov096_022982e0(s, id)) {
        return func_ov094_02293df8((u8 *)s + 0xdb8, func_ov096_02298008(s, id));
    }
    if (func_ov096_022982d0(s, id)) {
        return func_ov090_02291a78(id - 0x19) - 8;
    }
    if (func_ov096_022982c0(s, id)) {
        return func_ov094_02293624((u8 *)s + 0x358, func_ov096_0229826c(s, id));
    }
    return 0;
}

extern "C" s32 func_ov096_02297cc0(S *s, u32 id)
{
    if (func_ov096_022982f0(s, id)) {
        return func_ov094_02293610((u8 *)s + 0x358, func_ov096_0229826c(s, id));
    }
    if (func_ov096_022982e0(s, id)) {
        return func_ov094_02293d9c((u8 *)s + 0xdb8, func_ov096_02298008(s, id));
    }
    if (func_ov096_022982d0(s, id)) {
        return 8;
    }
    if (func_ov096_022982c0(s, id)) {
        return func_ov094_02293610((u8 *)s + 0x358, func_ov096_0229826c(s, id));
    }
    if (id == 0x21) {
        return 0xb0;
    }
    return 0;
}

extern "C" s32 func_ov096_02297c68(S *s, u32 id)
{
    if (func_ov096_022982f0(s, id)) {
        return func_ov094_0229333c((u8 *)s + 0x358, func_ov096_0229826c(s, id));
    }
    if (func_ov096_022982e0(s, id)) {
        return _ZN18Unk_ov094_02294bd419func_ov094_022941ecEi((u8 *)s + 0xdb8, func_ov096_02298008(s, id));
    }
    return 0;
}

extern "C" s32 func_ov096_02297c10(S *s, u32 id)
{
    if (func_ov096_022982f0(s, id)) {
        return func_ov094_0229311c((u8 *)s + 0x358, func_ov096_0229826c(s, id));
    }
    if (func_ov096_022982e0(s, id)) {
        return func_ov094_02293d80((u8 *)s + 0xdb8, func_ov096_02298008(s, id));
    }
    return 1;
}

extern "C" u32 func_ov096_02297b9c(S *s, u32 id)
{
    if (func_ov096_022982f0(s, id)) {
        return func_ov094_0229352c((u8 *)s + 0x358, func_ov096_0229826c(s, id));
    }
    if (func_ov096_022982e0(s, id)) {
        if (func_ov096_02297c10(s, id)) {
            return 0xfff1;
        }
        return _ZN12Unk_0206555413func_020655d0Ev(func_ov096_02297b14(s, id));
    }
    if (func_ov096_022982c0(s, id)) {
        return s->unk_ae;
    }
    return 0xfff1;
}

extern "C" s32 func_ov096_02297b48(S *s, u32 id)
{
    if (func_ov096_022982f0(s, id)) {
        return func_ov094_02293504((u8 *)s + 0x358, func_ov096_0229826c(s, id));
    }
    if (func_ov096_022982e0(s, id)) {
        return _ZN12Unk_0206555413func_020655c0Ev(func_ov096_02297b14(s, id));
    }
    func_ov096_022982c0(s, id);
    return 0;
}

// ===== unit 02297b14 =====
extern "C" void *func_ov096_02297b14(S *s, u32 id)
{
    if (func_ov096_022982e0(s, id)) {
    } else {
        return 0;
    }
    return _ZN18Unk_ov094_02294bd419func_ov094_0229433cEi((u8 *)s + 0xdb8, func_ov096_02298008(s, id));
}

s32 Unk_ov096_0229aea8::func_ov096_022979f0(u32 a, u32 b, u32 c) {
    u16 tmp = 0xfff1;
    if (func_ov096_022982f0((S *)this, a)) {
        return 0;
    }
    if (func_ov096_022982e0((S *)this, a)) {
        if (func_ov096_02297c10((S *)this, a)) {
            return 6;
        }
        if (c == 1) {
            return 5;
        }
        if (c == 2) {
            return 1;
        }
        void *p = func_ov096_02297b14((S *)this, a);
        if (_ZN12Unk_0206555413func_020655d0Ev(p) != 0xfff1) {
            return 3;
        }
        s32 s = _ZN12Unk_0206555413func_02065578Ev(p);
        if (s == 7 || s == 8 || func_ov094_02292414(b)) {
            return 2;
        }
        if (func_ov094_022924c4(b)) {
            return 4;
        }
        tmp = b;
        if (Unk_ov096_022979f0_InRange(&tmp, 0x1492, 0x14fd) && unk_b4 == 0x25) {
            return 5;
        }
        return 0;
    }
    if (a == 0x25) {
        if (c != 0) {
            return 6;
        }
        tmp = b;
        if (!Unk_ov096_022979f0_InRange(&tmp, 0x1492, 0x14fd)) {
            return 6;
        }
        s32 t = 0x1869f - func_ov096_02296c18();
        if (t < (s32)Item_GetPrice(&tmp)) {
            return 6;
        }
        return 0;
    }
    switch (a) {
    case 0x24:
        return 6;
    }
    return 6;
}

s32 Unk_ov096_0229aea8::func_ov096_0229795c(u32 a, u32 b) {
    s32 r = func_ov096_022979f0(a, unk_ac, unk_b0);
    if (r == 0) {
        u16 t = func_ov096_02297b9c((S *)this, a);
        if (t == 0xfff1) {
            return 0;
        }
        u32 v = func_ov096_02297b48((S *)this, a);
        if (b == 0x25) {
            u16 t2 = unk_ac;
            r = _ZN18Unk_ov096_0229aea819func_ov096_022969bcEPtiS0_h((S *)this, &t2, unk_b0, &t, v);
            if ((u32)(r - 2) <= 1) {
                return 6;
            }
            if (t == 0xfff1) {
                return 0;
            }
        }
        r = func_ov096_022979f0(b, t, v);
    }
    return r;
}

s32 Unk_ov096_0229aea8::func_ov096_02297940(u32 a) {
    return func_ov096_022979f0(a, unk_ac, unk_b0);
}

s32 Unk_ov096_0229aea8::func_ov096_02297910(u32 a) {
    if (a == 0) {
        return 1;
    }
    if (a == 2) {
        return 0;
    }
    if (a == 1) {
        if (func_ov096_02296fb8() != 1) {
            return 1;
        }
        return 0;
    }
    return 0;
}

s32 Unk_ov096_0229aea8::func_ov096_022978f8(u32 a) {
    if (a == 1) {
        return func_ov096_02297170();
    }
    return 0;
}

s32 Unk_ov096_0229aea8::func_ov096_022978d0(u32 a) {
    if (a == 2) {
        return 0;
    }
    if (a == 0) {
        return 1;
    }
    if (a == 1) {
        return func_ov096_02296c30(0);
    }
    return 0;
}

void Unk_ov096_0229aea8::func_ov096_022978ac() {
    func_ov094_022935dc(unk_358);
    _ZN18Unk_ov094_02294bd419func_ov094_022943f8Ev(unk_db8);
}

void Unk_ov096_0229aea8::func_ov096_02297834(u32 a) {
    if (func_ov096_022982f0((S *)this, a)) {
        s32 s = func_ov096_0229826c((S *)this, a);
        _ZN18Unk_ov094_02294bd419func_ov094_022943f8Ev(unk_db8);
        func_ov094_0229359c(unk_358, s);
    } else if (func_ov096_022982e0((S *)this, a)) {
        s32 s = func_ov096_02298008((S *)this, a);
        func_ov094_022935dc(unk_358);
        _ZN18Unk_ov094_02294bd419func_ov094_022943bcEj(unk_db8, s);
    } else {
        func_ov094_022935dc(unk_358);
        _ZN18Unk_ov094_02294bd419func_ov094_022943f8Ev(unk_db8);
    }
}

void Unk_ov096_0229aea8::func_ov096_02297804() {
    func_ov094_0229358c(unk_358);
    _ZN18Unk_ov094_02294bd419func_ov094_022943b0Ev(unk_db8);
    func_ov094_02292484(unk_de0);
}

void Unk_ov096_0229aea8::func_ov096_02297750(u32 a) {
    if (func_ov096_022982f0((S *)this, a)) {
        func_ov094_0229357c(unk_358, func_ov096_0229826c((S *)this, a));
    } else if (func_ov096_022982e0((S *)this, a)) {
        _ZN18Unk_ov094_02294bd419func_ov094_022943a4Ei(unk_db8, func_ov096_02298008((S *)this, a));
    } else if (func_ov096_022982c0((S *)this, a)) {
        switch (a) {
        case 0x25:
            func_ov094_0229357c(unk_358, 0x21);
            break;
        case 0x22:
        case 0x23:
            func_ov094_0229248c(unk_de0, 0);
            break;
        case 0x24:
            func_ov094_0229248c(unk_de0, 1);
            break;
        }
    } else if (a == 0x21) {
        func_ov094_0229357c(unk_358, 0x22);
    }
}

BOOL Unk_ov096_0229aea8::func_ov096_0229770c() {
    s32 d = gTouchPressX - gTouchCurX;
    if (d < 0) {
        d = -d;
    }
    if (d > 8) {
        return TRUE;
    }
    d = gTouchPressY - gTouchCurY;
    if (d < 0) {
        d = -d;
    }
    if (d > 8) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov096_0229aea8::func_ov096_022976f8(s32 v) {
    if (gTouchHoldFrames >= v) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov096_0229aea8::func_ov096_02297658() {
    s32 x = func_ov096_02297d50((S *)this, unk_b3) - 0x6d;
    s32 y = func_ov096_02297cc0((S *)this, unk_b3) - 0x78;
    if (MenuCtrl_IsButtons()) {
        y -= 8;
    }
    _ZN12LabelBalloon6setPosEii(unk_23c0, x, y);
    if (func_ov096_022982f0((S *)this, unk_b3)) {
        s32 s = func_ov096_0229826c((S *)this, unk_b3);
        func_ov094_02293638(unk_358, unk_23c0, s);
    } else if (func_ov096_022982e0((S *)this, unk_b3)) {
        s32 s = func_ov096_02298008((S *)this, unk_b3);
        _ZN18Unk_ov094_02294bd419func_ov094_02294420EPvi(unk_db8, unk_23c0, s);
    }
}

void Unk_ov096_0229aea8::func_ov096_022975d4() {
    if (func_ov096_022982f0((S *)this, unk_b5) || func_ov096_022982e0((S *)this, unk_b5)) {
        if (func_ov096_02297c10((S *)this, unk_b5)) {
            _ZN18Unk_ov002_0220446819func_ov002_022006b0Ev(unk_23c0);
        } else {
            unk_b3 = unk_b5;
            _ZN18Unk_ov002_0220446819func_ov002_022006b8Ev(unk_23c0);
        }
    }
    if (func_ov096_022982d0((S *)this, unk_b5) || func_ov096_022982c0((S *)this, unk_b5)) {
        _ZN18Unk_ov002_0220446819func_ov002_022006b0Ev(unk_23c0);
    }
}

void Unk_ov096_0229aea8::func_ov096_02297574() {
    if (func_ov096_02294dbc(0x40) == 0) {
        if (unk_b1 != 0) {
            if (unk_b1 == 2) {
                func_ov094_0229313c(unk_358, unk_a4, unk_a8);
            } else if (unk_b1 == 1) {
                _ZN18Unk_ov094_02294bd419func_ov094_0229405cEiiPv(unk_db8, unk_a4, unk_a8, unk_2b98);
            }
        }
    }
}

void Unk_ov096_0229aea8::func_ov096_02297548() {
    unk_a4 = unk_9c + gTouchCurX;
    unk_a8 = unk_a0 + gTouchCurY;
}

void Unk_ov096_0229aea8::func_ov096_0229751c() {
    unk_a4 = _ZN18Unk_ov002_02202d9819func_ov002_022028c8Ev(unk_2498) - 2;
    unk_a8 = _ZN18Unk_ov002_02202d9819func_ov002_022028a0Ev(unk_2498) - 4;
}

void Unk_ov096_0229aea8::func_ov096_022974f4() {
    unk_a4 = _ZN18Unk_ov002_0220460419func_ov002_02202710Ev(unk_2480);
    unk_a8 = _ZN18Unk_ov002_0220460419func_ov002_02202708Ev(unk_2480);
}

void Unk_ov096_0229aea8::func_ov096_022974b8(u32 a, u32 b) {
    unk_b1 = 2;
    unk_ac = a;
    unk_b0 = b;
    func_ov094_0229341c(unk_358, unk_ac, unk_b0);
    func_ov096_02296d18();
}

void Unk_ov096_0229aea8::func_ov096_02297460(u32 a) {
    unk_b1 = 2;
    unk_ac = func_ov096_02297b9c((S *)this, a);
    unk_b0 = func_ov096_02297b48((S *)this, a);
    func_ov096_0229806c((S *)this, a);
    func_ov094_0229341c(unk_358, unk_ac, unk_b0);
    func_ov096_02296d18();
}

void Unk_ov096_0229aea8::func_ov096_0229741c(u32 a) {
    s32 r = func_ov096_02298008((S *)this, a);
    unk_b1 = 1;
    void *p = _ZN18Unk_ov094_02294bd419func_ov094_0229433cEi(unk_db8, r);
    func_02065e70(unk_2b98, p);
    _ZN18Unk_ov094_02294bd419func_ov094_022942f4Ei(unk_db8, r);
}

void Unk_ov096_0229aea8::func_ov096_022973cc(u32 a) {
    if (func_ov096_022982f0((S *)this, a)) {
        func_ov096_02297460(a);
    } else if (func_ov096_022982e0((S *)this, a)) {
        func_ov096_0229741c(a);
    } else if (a == 0x25) {
        func_ov096_02297460(a);
        _ZN18Unk_ov096_0229aea819func_ov096_02296bb8Et(this, unk_ac);
    }
}

void Unk_ov096_0229aea8::func_ov096_022973a0(u32 a) {
    if (func_ov096_022982f0((S *)this, a) || func_ov096_022982e0((S *)this, a)) {
        func_ov096_02297460(a);
    }
}

void Unk_ov096_0229aea8::func_ov096_02297358(u32 k, u32 f) {
    switch (unk_b1) {
    case 1:
        func_ov096_02297f3c((S *)this, k, unk_2b98);
        break;
    case 2:
        func_ov096_022980a0((S *)this, k, unk_ac, unk_b0);
        break;
    }
    if (f != 0) {
        func_ov096_02297160();
    }
}

void Unk_ov096_0229aea8::func_ov096_022972ec(u32 f) {
    if (func_ov096_02297940(unk_b4) == 0) {
        func_ov096_02297358(unk_b4, f);
    } else if (unk_b9 != 0x26) {
        u32 a = func_ov096_02297b9c((S *)this, unk_b9);
        u32 b = func_ov096_02297b48((S *)this, unk_b9);
        func_ov096_02297358(unk_b9, 1);
        func_ov096_022980a0((S *)this, unk_b4, a, b);
        unk_b9 = 0x26;
    }
}

void Unk_ov096_0229aea8::func_ov096_02297284(u32 a) {
    switch (unk_b1) {
    case 1:
        func_02065e70(unk_2c8c, unk_2b98);
        func_ov096_022973cc(a);
        func_ov096_02297f3c((S *)this, a, unk_2c8c);
        break;
    case 2: {
        u32 x = unk_ac;
        u32 y = unk_b0;
        func_ov096_022973a0(a);
        func_ov096_022980a0((S *)this, a, x, y);
        break;
    }
    }
}

s32 Unk_ov096_0229aea8::func_ov096_0229725c(u32 a) {
    s32 r;
    switch (unk_b1) {
    case 2:
        r = func_ov096_02298110((S *)this, a);
        break;
    case 1:
        r = func_ov096_02297f6c((S *)this, a);
        break;
    default:
        r = 0;
        break;
    }
    return r;
}

s32 Unk_ov096_0229aea8::func_ov096_022971dc() {
    if (!func_ov096_02297170()) {
        func_ov096_0229865c((S *)this);
        func_ov096_02298334((S *)this, 9, 0xff, 1);
        func_ov096_022972ec(1);
        return 0;
    }
    s32 r = func_ov096_0229652c(unk_ac);
    if (r == 0) {
        func_ov096_022972ec(1);
        return 0;
    }
    if (r == 1) {
        func_ov096_02297160();
        return 1;
    }
    if (r == 2) {
        func_ov002_02200a58(0x28);
        func_ov096_02294d9c(0x1000);
        return 0;
    }
    func_ov096_022972ec(1);
    return 0;
}

BOOL Unk_ov096_0229aea8::func_ov096_02297170() {
    if (unk_b1 != 2) {
        return FALSE;
    }
    if (unk_b0 != 0) {
        return FALSE;
    }
    volatile u16 t = unk_ac;
    if (Unk_ov096_022968bc_InRange(&t, 0x1492, 0x14fd) && unk_b4 == 0x25) {
        return FALSE;
    }
    return func_ov096_022965ac(*(volatile u16 *)&unk_ac);
}

void Unk_ov096_0229aea8::func_ov096_02297160() {
    unk_b1 = 0;
    func_0206e8f4(0);
}

void Unk_ov096_0229aea8::func_ov096_0229713c() {
    func_ov002_02200a58(0x25);
    _ZN18Unk_ov096_0229aea819func_ov096_02298a14Ev((S *)this);
    func_ov096_02294d9c(0x8000);
}

s32 Unk_ov096_0229aea8::func_ov096_02296fb8() {
    if (unk_b1 != 2) {
        return 1;
    }
    if (unk_b0 != 0) {
        return 1;
    }
    volatile u16 t = unk_ac;
    BOOL r = FALSE;
    u32 v = t;
    u32 w = t;
    if (w >= 0x11a8 && v <= 0x12a7) {
        r = TRUE;
    }
    if (r) {
        return 2;
    }
    if ((v >= 0x1431 && v <= 0x1470) || (v >= 0x1471 && v <= 0x1491)) {
        t = func_ov096_02296f64(4);
        u32 b = t;
        u32 a = t;
        if (a != 0xfff1 && b >= 0x13a8 && b <= 0x13c7 && !func_0204bab8((u16 *)&t)) {
            return 6;
        }
        return 3;
    }
    if (v >= 0x13a8 && v <= 0x13c7) {
        if (func_ov096_02296f64(3) != 0xfff1 && !func_0204bab8((u16 *)&t)) {
            return 0;
        }
        return 4;
    }
    if ((v >= 0x13c8 && v <= 0x1407) || (v >= 0x1408 && v <= 0x1428)) {
        return 4;
    }
    if (Item_IsHoldable((u16 *)&t)) {
        return 5;
    }
    BOOL q = FALSE;
    u32 x = t;
    u32 y = t;
    if (y >= 0x1518 && x <= 0x151c) {
        q = TRUE;
    }
    if (q || (x >= 0x1531 && x <= 0x153a) || (x >= 0x153b && x <= 0x1541)) {
        return 7;
    }
    if (x >= 0x155e && x <= 0x155e) {
        return 8;
    }
    return 1;
}

u16 Unk_ov096_0229aea8::func_ov096_02296f64(s32 k) {
    void *o = PlayerData_GetCurrent();
    switch (k) {
    case 2:
        return *_ZN10PlayerData8getShirtEv(o);
    case 3:
        return *_ZN10PlayerData11getFaceItemEv(o);
    case 4:
        return *_ZN10PlayerData6getHatEv(o);
    case 5:
        return *_ZN10PlayerData11getHeldItemEv(o);
    }
    return 0xfff1;
}

u16 Unk_ov096_0229aea8::func_ov096_02296e70(s32 k, u16 v) {
    u16 r = func_ov096_02296f64(k);
    void *o = PlayerData_GetCurrent();
    volatile u16 t = v;
    switch (k) {
    case 2:
        _ZN10PlayerData8setShirtEPt(o, (u16 *)&t);
        t = r;
        if (!Unk_ov096_022968bc_InRange(&t, 0x11a8, 0x12a7)) {
            r = 0xfff1;
        }
        break;
    case 3:
        _ZN10PlayerData11setFaceItemEPt(o, (u16 *)&t);
        break;
    case 6:
        _ZN10PlayerData11setFaceItemEPt(o, (u16 *)&t);
        r = func_ov096_02296f64(4);
        t = 0xfff1;
        _ZN10PlayerData6setHatEPt(o, (u16 *)&t);
        break;
    case 4:
        _ZN10PlayerData6setHatEPt(o, (u16 *)&t);
        t = r;
        if (Unk_ov096_022968bc_InRange(&t, 0x1429, 0x1430)) {
            r = 0xfff1;
        }
        break;
    case 5:
        t = r;
        if (Unk_ov096_022968bc_InRange(&t, 0x13a0, 0x13a7)) {
            r = 0xfff1;
        }
        break;
    case 7:
    case 8:
        break;
    }
    return r;
}

BOOL Unk_ov096_0229aea8::func_ov096_02296dbc(s32 k, u16 v) {
    u16 t = v;
    switch (k) {
    case 2:
        if (PlayerActor_RequestWearShirt(&t)) {
            return TRUE;
        }
        break;
    case 3:
        if (PlayerActor_RequestWearFaceItem(&t)) {
            return TRUE;
        }
        break;
    case 6:
        if (PlayerActor_RequestWearFaceItem(&t)) {
            t = 0xfff1;
            PlayerActor_RequestWearHat(&t);
            return TRUE;
        }
        break;
    case 4:
        if (PlayerActor_RequestWearHat(&t)) {
            return TRUE;
        }
        break;
    case 5:
        if (PlayerActor_RequestAct3F(&t)) {
            return TRUE;
        }
        break;
    case 7:
        if (PlayerActor_RequestHoldUpItem(&t)) {
            if (!Camera_IsViewPushed()) {
                Snd_PlaySe(0x40);
            }
            return TRUE;
        }
        break;
    case 8:
        if (PlayerActor_RequestFaceChange()) {
            return TRUE;
        }
        break;
    }
    return FALSE;
}

BOOL Unk_ov096_0229aea8::func_ov096_02296d88(s32 k) {
    switch (k) {
    case 5:
        return func_02094fa8();
    case 7:
    case 8:
        if (func_020951ac()) {
            return FALSE;
        }
        return TRUE;
    default:
        return func_02094fb4();
    }
}

void Unk_ov096_0229aea8::func_ov096_02296d5c() {
    func_ov096_0229865c((S *)this);
    func_ov096_022972ec(1);
    if (unk_c0 == 0) {
        func_ov096_02298334((S *)this, 7, 0xff, 1);
    }
}

void Unk_ov096_0229aea8::func_ov096_02296d18() {
    volatile u16 t = unk_ac;
    if (Unk_ov096_022968bc_InRange(&t, 0x1492, 0x14fd)) {
        func_0206e8f4(Item_GetPrice((u16 *)&t));
    } else {
        func_0206e8f4(0);
    }
}

BOOL Unk_ov096_0229aea8::func_ov096_02296cac() {
    u16 t = unk_ac;
    Item_GetPrice(&t);
    u32 r = func_ov096_02296b68(unk_ac);
    if (r == 0xfff1) {
        func_ov096_02297160();
        func_ov096_0229865c((S *)this);
    } else {
        unk_ac = r;
        func_ov094_0229341c(unk_358 + 0, unk_ac, unk_b0);
        func_ov096_022983cc((S *)this, unk_b4, 4);
    }
    return TRUE;
}

BOOL Unk_ov096_0229aea8::func_ov096_02296c30(s32 flag) {
    if (unk_b1 != 2) {
        return FALSE;
    }
    if (unk_b0 != 0) {
        return FALSE;
    }
    volatile u16 t = unk_ac;
    if (Unk_ov096_022968bc_InRange(&t, 0x1492, 0x14fd)) {
        if (flag) {
            if (Item_GetPrice((u16 *)&t) + func_ov096_02296c18() > 0x1869f) {
                return FALSE;
            }
        }
        return TRUE;
    }
    return FALSE;
}

s32 Unk_ov096_0229aea8::func_ov096_02296c18() {
    return _ZN15PlayerInventory13getTotalBellsEi(_ZN10PlayerData13func_02098750Ev(PlayerData_GetCurrent()), 0);
}

void Unk_ov096_0229aea8::func_ov096_02296be8(s32 v) {
    func_02097ac4(_ZN10PlayerData13func_02098750Ev(PlayerData_GetCurrent()), v, 0);
    func_ov094_022926c8(unk_de0 + 0, 0);
}

void Unk_ov096_0229aea8::func_ov096_02296bb8(u16 v) {
    u16 t = v;
    u32 a = Item_GetPrice(&t);
    func_ov096_02296c18();
    u32 b = func_ov096_02296c18();
    func_ov096_02296be8(b - a);
}

u32 Unk_ov096_0229aea8::func_ov096_02296b68(u16 v) {
    u16 t = v;
    u32 e;
    u32 a = Item_GetPrice(&t);
    s32 x;
    a += func_ov096_02296c18();
    u32 r = 0xfff1;
    if (a > 0x1869f) {
        e = a - 0x1869f;
        r = Item_FindMoneyBagForAmount(e, 1, &x);
        a -= e + x;
    }
    func_ov096_02296be8(a);
    return r;
}

s32 Unk_ov096_0229aea8::func_ov096_022969bc(u16 *a, s32 f, u16 *b, u8 g) {
    u16 loc[3];
    u32 a4, b4, lim;
    BOOL ok;
    BOOL ok2;
    s32 d0;
    if (f != 0 || g != 0) {
        return 1;
    }
    loc[0] = *a;
    loc[1] = *b;
    ok = FALSE;
    u32 x0 = *(volatile u16 *)&loc[0];
    u32 y0 = *(volatile u16 *)&loc[0];
    if (y0 >= 0x1531 && x0 <= 0x153a) {
        ok = TRUE;
    }
    if (ok) {
        ok2 = FALSE;
        u32 x1 = *(volatile u16 *)&loc[1];
        u32 y1 = *(volatile u16 *)&loc[1];
        if (y1 >= 0x1531 && x1 <= 0x153a) {
            ok2 = TRUE;
        }
        if (ok2) {
            d0 = Unk_ov096_022969bc_Idx(x0) + 1;
            s32 d1 = Unk_ov096_022969bc_Idx(x1) + 1;
            d0 += d1;
            s32 rem;
            if (d0 > 10) {
                rem = d0 - 10;
                d0 = 10;
            } else {
                rem = 0;
            }
            s32 n1 = d0 - 1;
            *a = Unk_ov096_022969bc_Ch(n1);
            if (rem > 0) {
                s32 n2 = rem - 1;
                *b = Unk_ov096_022969bc_Ch(n2);
            } else {
                *b = 0xfff1;
            }
            return 0;
        }
    }
    BOOL q;
    if (x0 >= 0x1492 && x0 <= 0x14fd) {
        q = TRUE;
    } else {
        q = FALSE;
    }
    if (q) {
        BOOL q2 = FALSE;
        u32 x2 = *(volatile u16 *)&loc[1];
        u32 y2 = *(volatile u16 *)&loc[1];
        if (y2 >= 0x1492 && x2 <= 0x14fd) {
            q2 = TRUE;
        }
        if (q2) {
            goto go;
        }
    }
    return 1;
go:
    a4 = Item_GetPrice(&loc[0]);
    b4 = Item_GetPrice(&loc[1]);
    loc[2] = 0x14fd;
    lim = Item_GetPrice(&loc[2]);
    {
        s32 out;
        BOOL n4 = (s32)a4 < 1000 ? TRUE : FALSE;
        BOOL n6 = (s32)b4 < 1000 ? TRUE : FALSE;
        if (n4 != n6) {
            return 2;
        }
        if (a4 == lim || b4 == lim) {
            return 3;
        }
        if ((s32)a4 < 1000) {
            a4 += b4;
            if ((s32)a4 > 1000) {
                b4 = a4 - 1000;
                a4 = 1000;
            } else {
                b4 = 0;
            }
        } else {
            a4 += b4;
            if ((s32)a4 <= (s32)lim) {
                b4 = 0;
            } else {
                b4 = a4 - lim;
                a4 = lim;
            }
        }
        *a = Item_FindMoneyBagForAmount(a4, 1, &out);
        if (b4 == 0) {
            *b = 0xfff1;
        } else {
            *b = Item_FindMoneyBagForAmount(b4, 1, &out);
        }
    }
    return 0;
}

void Unk_ov096_0229aea8::func_ov096_02296964() {
    s32 a = func_ov096_022968cc();
    s32 b = func_ov096_022968bc();
    _ZN18Unk_ov002_02202d9819func_ov002_02202a40Eii(unk_2498, a, b);
    if (func_ov096_022982d0((S *)this, unk_b5)) {
        _ZN18Unk_ov002_0220464c19func_ov002_02202d00Ei(unk_2498, 0xd);
    } else {
        _ZN18Unk_ov002_0220464c19func_ov002_02202d00Ei(unk_2498, 1);
    }
    func_ov096_022966e8();
}

void Unk_ov096_0229aea8::func_ov096_02296910() {
    unk_bc = _ZN18Unk_ov002_022013ac19func_ov002_02201494Ev(unk_24fc) - 1;
    s32 a = _ZN18Unk_ov002_022013ac19func_ov002_022014a4Ev(unk_24fc);
    s32 b = _ZN18Unk_ov002_022013ac19func_ov002_02201498Ei(unk_24fc, unk_bc);
    _ZN18Unk_ov002_02202d9819func_ov002_02202a40Eii(unk_2498, a, b);
    _ZN18Unk_ov002_0220464c19func_ov002_02202d00Ei(unk_2498, 7);
}

s32 Unk_ov096_0229aea8::func_ov096_022968cc() {
    s32 t = func_ov096_02297d50((S *)this, unk_b5);
    if (func_ov096_02294dbc(0x20)) {
        t += 0x100;
    } else if (func_ov096_02294dbc(0x10)) {
        t -= 0x100;
    }
    return t + 8;
}

// ===== unit 022968bc =====

s32 Unk_ov096_0229aea8::func_ov096_022968bc() {
    return func_ov096_02297cc0((S *)this, unk_b5);
}

void Unk_ov096_0229aea8::func_ov096_02296898() {
    _ZN18Unk_ov002_0220464c19func_ov002_02202d00Ei(unk_2498, 0);
    ((UiWidget *)unk_2498)->vfunc_0c();
}

void Unk_ov096_0229aea8::func_ov096_02296854() {
    s32 a = func_ov096_022968cc();
    s32 b = func_ov096_022968bc();
    _ZN18Unk_ov002_02202d9819func_ov002_022029e8Eiiii(unk_2498, a, b, 3, 1);
    unk_ba = unk_8d;
    func_ov002_02200a58(0xf);
}

void Unk_ov096_0229aea8::func_ov096_02296804() {
    s32 a = _ZN18Unk_ov002_022013ac19func_ov002_022014a4Ev(unk_24fc);
    s32 b = _ZN18Unk_ov002_022013ac19func_ov002_02201498Ei(unk_24fc, unk_bc);
    _ZN18Unk_ov002_02202d9819func_ov002_02202a18Eiii(unk_2498, a, b, 2);
    unk_ba = unk_8d;
    func_ov002_02200a58(0xf);
}

void Unk_ov096_0229aea8::func_ov096_022967a0() {
    unk_bb = 0x22;
    unk_bc = func_ov002_02201a70(unk_24fc, 1);
    s32 a = _ZN18Unk_ov002_022013ac19func_ov002_022014a4Ev(unk_24fc);
    s32 b = _ZN18Unk_ov002_022013ac19func_ov002_02201498Ei(unk_24fc, unk_bc);
    _ZN18Unk_ov002_02202d9819func_ov002_02202a40Eii(unk_2498, a, b);
    _ZN10HandCursor12setAnimAtEndEi(unk_2498, 8);
    func_ov002_02200a58(0x1e);
}

void Unk_ov096_0229aea8::func_ov096_0229673c() {
    if (func_ov096_02294dbc(0x40000)) {
        unk_bc = 1;
    } else {
        unk_bc = 0;
    }
    s32 a = _ZN18Unk_ov002_022013ac19func_ov002_022014a4Ev(unk_24fc);
    s32 b = _ZN18Unk_ov002_022013ac19func_ov002_02201498Ei(unk_24fc, unk_bc);
    _ZN18Unk_ov002_02202d9819func_ov002_02202a40Eii(unk_2498, a, b);
    _ZN18Unk_ov002_0220464c19func_ov002_02202d00Ei(unk_2498, 7);
}

void Unk_ov096_0229aea8::func_ov096_02296708() {
    s32 a = func_ov096_022968cc();
    s32 b = func_ov096_022968bc();
    _ZN18Unk_ov002_02202d9819func_ov002_02202a40Eii(unk_2498, a, b);
    _ZN18Unk_ov002_0220464c19func_ov002_02202d00Ei(unk_2498, 1);
}

void Unk_ov096_0229aea8::func_ov096_022966e8() {
    _ZN18Unk_ov002_02202d9819func_ov002_02202a78Ev(unk_2498);
    ((UiWidget *)unk_2498)->vfunc_0c();
}

void Unk_ov096_0229aea8::func_ov096_022966c8() {
    _ZN18Unk_ov002_0220464c19func_ov002_02202b68Ev(unk_2498);
    func_ov002_02200a58(0x10);
}

void Unk_ov096_0229aea8::func_ov096_022966a8() {
    _ZN18Unk_ov002_02202d9819func_ov002_02202af0Ev(unk_2498);
    func_ov002_02200a58(0x11);
}

void Unk_ov096_0229aea8::func_ov096_02296680() {
    _ZN18Unk_ov002_0220464c19func_ov002_02202d00Ei(unk_2498, 4);
    func_ov002_02200a58(0x12);
    unk_b9 = 0x26;
}

void Unk_ov096_0229aea8::func_ov096_02296638(u32 v) {
    _ZN18Unk_ov002_0220446819func_ov002_022006e4Ei(unk_23c0, 1);
    unk_b7 = v;
    _ZN18Unk_ov002_0220464c19func_ov002_02202d00Ei(unk_2498, 5);
    func_ov002_02200a58(0x14);
    func_ov096_02294d9c(0x2000);
}

void Unk_ov096_0229aea8::func_ov096_022965f0(u32 v) {
    _ZN18Unk_ov002_0220446819func_ov002_022006e4Ei(unk_23c0, 1);
    unk_ba = unk_8d;
    unk_b7 = v;
    _ZN18Unk_ov002_0220464c19func_ov002_02202d00Ei(unk_2498, 6);
    func_ov002_02200a58(0x15);
}

BOOL Unk_ov096_0229aea8::func_ov096_022965ac(s32 a) {
    if (Unk_ov096_0229652c_IsZero(data_020e416c)) {
        return func_ov098_0229bc90(this, a);
    }
    if (func_020b52f8()) {
        if (func_ov097_0229b280(this)) {
            return TRUE;
        }
        return FALSE;
    }
    return FALSE;
}

s32 Unk_ov096_0229aea8::func_ov096_0229652c(s32 a) {
    if (Unk_ov096_0229652c_IsZero(data_020e416c)) {
        unk_c4 = func_02042c64(data_020cbb18->unk_64, a);
        if (unk_c4 == -1) {
            func_ov096_0229865c((S *)this);
            func_ov096_02298334((S *)this, 3, 0xff, 0);
            Snd_PlaySe(0x73);
            return 0;
        }
        return 2;
    }
    if (func_020b52f8()) {
        return func_ov097_0229b2bc(this, a);
    }
    return 0;
}

void Unk_ov096_0229aea8::func_ov096_022964b0() {
    u32 t = unk_b6;
    s32 r6 = func_ov096_02297b9c((S *)this, t);
    if (!func_ov096_022965ac(r6)) {
        func_ov096_0229865c((S *)this);
        func_ov096_02298334((S *)this, 9, 0xff, 1);
    } else {
        s32 r = func_ov096_0229652c(r6);
        if (r != 0) {
            if (r == 2) {
                func_ov002_02200a58(0x28);
                func_ov096_02294dac(0x1000);
            } else {
                s32 x = func_ov096_0229826c((S *)this, t);
                func_ov094_022934d8(unk_358, x);
                func_ov096_0229865c((S *)this);
            }
        }
    }
}

void Unk_ov096_0229aea8::func_ov096_0229648c() {
    func_0206ed5c(func_ov096_02294f9c());
    func_ov096_022956d0();
    func_ov096_02294d9c(0x200);
}

void Unk_ov096_0229aea8::func_ov096_02296460() {
    func_0206ec54(unk_b6);
    func_0206ed5c(func_ov096_02294f9c());
    func_ov096_0229a39c(8);
    func_ov096_0229a000();
}

void Unk_ov096_0229aea8::func_ov096_022963fc() {
    s32 r6 = func_ov096_0229801c((S *)this);
    if (r6 == 0x26) {
        func_ov096_0229865c((S *)this);
        func_ov096_02298334((S *)this, 0xb, 0xff, 1);
    } else {
        s32 a = func_ov096_02297b48((S *)this, unk_b6);
        s32 b = func_ov096_02297b9c((S *)this, unk_b6);
        func_ov096_0229806c((S *)this, unk_b6);
        ((void (*)(S *, u32, u32, u32, s32))func_ov096_0229838c)((S *)this, unk_b6, r6, b, a);
    }
}

BOOL Unk_ov096_0229aea8::func_ov096_022963ac() {
    s32 t = func_020991fc();
    if (t == -1) {
        func_ov096_0229865c((S *)this);
        func_ov096_02298334((S *)this, 2, 0xff, 1);
        return FALSE;
    }
    func_0206ec54(unk_b6);
    unk_b8 = unk_b6;
    unk_b6 = t + 0xf;
    return TRUE;
}

void Unk_ov096_0229aea8::func_ov096_0229637c() {
    if (func_ov096_022963ac()) {
        func_0206ed5c(func_ov096_02294f9c());
        func_ov096_022956d0();
        func_ov096_02294dac(0x200);
    }
}

void Unk_ov096_0229aea8::func_ov096_02296338() {
    if (func_ov096_022963ac()) {
        s32 t = (s32)func_ov096_02294f9c();
        func_02065bfc();
        func_0206ed5c((void *)t);
        func_ov096_0229806c((S *)this, unk_b8);
        func_ov096_0229a39c(8);
        func_ov096_0229a000();
    }
}

void Unk_ov096_0229aea8::func_ov096_02296290() {
    s32 v;
    s32 r;
    switch (unk_bb) {
    case 0xb:
        v = Item_FindMoneyBagForAmount(func_ov096_02296c18(), 0, 0);
        break;
    case 0xc:
        v = Item_FindMoneyBagForAmount(0x64, 0, 0);
        break;
    case 0xd:
        v = Item_FindMoneyBagForAmount(0x3e8, 0, 0);
        break;
    case 0xe:
        v = Item_FindMoneyBagForAmount(0x2710, 0, 0);
        break;
    }
    r = func_ov096_0229801c((S *)this);
    if (r == 0x26) {
        func_ov096_0229865c((S *)this);
        func_ov096_02298334((S *)this, 0xc, 0xff, 1);
    } else {
        _ZN18Unk_ov096_0229aea819func_ov096_02296bb8Et(this, v);
        ((void (*)(S *, u32, u32, u32, s32))func_ov096_0229838c)((S *)this, 0x25, r, v, 0);
    }
}

void Unk_ov096_0229aea8::func_ov096_0229619c() {
    BOOL ok = TRUE;
    volatile u16 v = 0xfff1;
    u32 k = unk_bb;
    switch (k) {
    case 0xf:
        unk_c0 = 3;
        break;
    case 0x10:
        unk_c0 = 4;
        v = func_ov096_02296f64(4);
        if (Unk_ov096_0229619c_Range(&v, 0x1429, 0x1430)) {
            ok = FALSE;
        }
        break;
    case 0x11:
        unk_c0 = 5;
        v = func_ov096_02296f64(5);
        if (Unk_ov096_0229619c_Range(&v, 0x13a0, 0x13a7)) {
            ok = FALSE;
        }
        break;
    default:
        func_ov096_0229865c((S *)this);
        return;
    }
    s32 r = func_ov096_0229801c((S *)this);
    if (ok && r == 0x26) {
        func_ov096_0229865c((S *)this);
        func_ov096_02298334((S *)this, 0xa, 0xff, 0);
        Snd_PlaySe(0x73);
        return;
    }
    unk_b4 = r;
    func_ov096_02297160();
    unk_ac = 0xfff1;
    func_ov096_0229713c();
    func_ov096_02294dac(0x8000);
}

void Unk_ov096_0229aea8::func_ov096_02296124() {
    u32 t = unk_b6;
    func_ov096_02297460(t);
    unk_a4 = func_ov096_02297d50((S *)this, t);
    unk_a8 = func_ov096_02297cc0((S *)this, t);
    if (MenuCtrl_IsButtons()) {
        unk_a4 = unk_a4 - 2;
        unk_a8 = unk_a8 - 2;
    }
    func_ov002_02200a58(0x2b);
    func_ov094_02292efc(unk_358, unk_ac, unk_b0);
}

void Unk_ov096_0229aea8::func_ov096_022960b4() {
    u32 t = unk_b6;
    func_ov096_0229741c(t);
    unk_a4 = func_ov096_02297d50((S *)this, t);
    unk_a8 = func_ov096_02297cc0((S *)this, t);
    if (MenuCtrl_IsButtons()) {
        unk_a4 = unk_a4 - 2;
        unk_a8 = unk_a8 - 2;
    }
    func_ov002_02200a58(0x2a);
    func_ov094_02293c58(unk_db8);
}

void Unk_ov096_0229aea8::func_ov096_022960ac() { func_ov096_022956e4(); }

void Unk_ov096_0229aea8::func_ov096_02296094() {
    func_ov002_02200a58(0x31);
    _ZN18Unk_ov096_0229aea819func_ov096_02298870Ev((S *)this);
}

void Unk_ov096_0229aea8::func_ov096_02296030() {
    func_ov002_022016e4(unk_27f0, 0x22);
    func_ov002_02201700(unk_27f0, 0xdd, 0x1d);
    func_ov002_02201700(unk_27f0, 0xde, 0x1e);
    func_ov002_02201700(unk_27f0, 0xdf, 0x1f);
    func_ov002_02201700(unk_27f0, 0xe0, 0x20);
    func_ov002_02201700(unk_27f0, 0x2, 0x22);
    func_ov096_02296898();
    func_ov096_02295c94(0);
}

void Unk_ov096_0229aea8::func_ov096_02295fc8(s32 n) {
    Unk_020cbb18 *g = data_020cbb18;
    if (g->func_02072e44()) {
        if (g->unk_64 == 0) {
            BOOL z;
            if (n == 0) {
                z = TRUE;
            } else {
                z = FALSE;
            }
            if (z != _ZN12HudCountdown9isStoppedEv(Hud_GetCountdown())) {
                func_0206f604((u8)(n + 0x12), 4);
                func_0206f53c(n);
            }
        } else {
            func_0206f604((u8)(n + 0xd), 0);
        }
    } else {
        func_0206f53c(n);
    }
}

void Unk_ov096_0229aea8::func_ov096_02295fb0() {
    func_ov096_02295fc8(0);
    func_ov096_0229865c((S *)this);
}

// ===== unit 02295f94 =====

void Unk_ov096_0229aea8::func_ov096_02295f94() {
    func_ov096_02295fc8(unk_bb - 0x1c);
    func_ov096_0229865c((S *)this);
}

void Unk_ov096_0229aea8::func_ov096_02295d28() {
    u32 c = unk_bb;
    if (c != 0x22 && c != 0 && c != 0xf && c != 0x10 && c != 0x11 && c != 0x1a) {
        func_ov096_02294ed4();
    }
    if (unk_bb == 0x22) {
        func_ov096_0229865c((S *)this);
        return;
    }
    static Unk_ov096_0229aea8_Fn tbl[34] = {
        &Unk_ov096_0229aea8::func_ov096_02296680, &Unk_ov096_0229aea8::func_ov096_02296680,
        &Unk_ov096_0229aea8::func_ov096_022964b0, &Unk_ov096_0229aea8::func_ov096_02294ff8,
        &Unk_ov096_0229aea8::func_ov096_0229648c, &Unk_ov096_0229aea8::func_ov096_02296460,
        &Unk_ov096_0229aea8::func_ov096_022963fc, &Unk_ov096_0229aea8::func_ov096_0229637c,
        &Unk_ov096_0229aea8::func_ov096_02296338, &Unk_ov096_0229aea8::func_ov096_022960b4,
        &Unk_ov096_0229aea8::func_ov096_022960ac, &Unk_ov096_0229aea8::func_ov096_02296290,
        &Unk_ov096_0229aea8::func_ov096_02296290, &Unk_ov096_0229aea8::func_ov096_02296290,
        &Unk_ov096_0229aea8::func_ov096_02296290, &Unk_ov096_0229aea8::func_ov096_0229619c,
        &Unk_ov096_0229aea8::func_ov096_0229619c, &Unk_ov096_0229aea8::func_ov096_0229619c,
        &Unk_ov096_0229aea8::func_ov097_0229b414, &Unk_ov096_0229aea8::func_ov097_0229b4a4,
        &Unk_ov096_0229aea8::func_ov096_02296124, &Unk_ov096_0229aea8::func_ov098_0229b954,
        &Unk_ov096_0229aea8::func_ov098_0229b624, &Unk_ov096_0229aea8::func_ov098_0229b4c4,
        &Unk_ov096_0229aea8::func_ov098_0229ba60, &Unk_ov096_0229aea8::func_ov098_0229b488,
        &Unk_ov096_0229aea8::func_ov096_02296094, &Unk_ov096_0229aea8::func_ov096_02296030,
        &Unk_ov096_0229aea8::func_ov096_02295fb0, &Unk_ov096_0229aea8::func_ov096_02295f94,
        &Unk_ov096_0229aea8::func_ov096_02295f94, &Unk_ov096_0229aea8::func_ov096_02295f94,
        &Unk_ov096_0229aea8::func_ov096_02295f94, &Unk_ov096_0229aea8::func_ov098_0229b390};
    (this->*tbl[unk_bb])();
}

void Unk_ov096_0229aea8::func_ov096_02295c94(s32 a) {
    u32 r6;
    s32 r2;
    _ZN18Unk_ov002_022013ac19func_ov002_0220160cEP22Unk_ov002_022013ac_Reci(unk_24fc, unk_27f0, func_ov096_02294dbc(0x40000));
    r6 = func_ov096_02297d50((S *)this, unk_b6);
    r2 = func_ov096_02297cc0((S *)this, unk_b6);
    if (unk_b6 == 0x25) {
        _ZN18Unk_ov002_0220455819func_ov002_02202278Eii(unk_24fc, 0x68, 0x68);
    } else if (a != 0) {
        _ZN18Unk_ov002_0220455819func_ov002_02202200EP12LabelBalloon(unk_24fc, unk_23c0, r2);
    } else {
        _ZN18Unk_ov002_0220455819func_ov002_0220229cEii(unk_24fc, r6, r2);
    }
    func_ov002_02202098(unk_24fc, 0);
    func_ov002_02200a58(0x1d);
}

void Unk_ov096_0229aea8::func_ov096_02295c60() {
    Snd_PlaySe(0x2a);
    unk_bb = 0x22;
    func_ov096_02296708();
    func_ov002_02202064(unk_24fc, 0);
    func_ov002_02200a58(0x1f);
}

void Unk_ov096_0229aea8::func_ov096_02295c2c() {
    Snd_PlaySe(0x28);
    unk_be = 0xf;
    func_ov002_02202064(unk_24fc, 1);
    func_ov002_02200a58(0x24);
    func_ov096_02296898();
}

s32 Unk_ov096_0229aea8::func_ov096_02295ba4() {
    switch (unk_bb) {
    case 0x12:
    case 0x13:
        Snd_PlaySe(0x50);
        break;
    case 0x14:
        Snd_PlaySe(0x71);
        break;
    case 9:
        Snd_PlaySe(0x24);
        return 0;
    case 2:
    case 0x16:
    case 0x17:
        Snd_PlaySe(0x25);
        return 0;
    case 0x1c:
    case 0x1d:
    case 0x1e:
    case 0x1f:
    case 0x20:
        return 0;
    default:
        break;
    }
    return 1;
}

void Unk_ov096_0229aea8::func_ov096_02295a44(s32 a) {
    volatile u16 v;
    if (MenuCtrl_IsButtons()) {
        func_ov002_02201700(unk_27f0, 0, 0);
    }
    s32 r4 = func_ov096_02297b48((S *)this, a);
    a = func_ov096_02297b9c((S *)this, a);
    v = a;
    if (r4 == 0) {
        if (Unk_ov096_02295a44_Range(&v, 0x156c, 0x156c)) {
            if (_ZN12HudCountdown9isStoppedEv(Hud_GetCountdown())) {
                func_ov002_02201700(unk_27f0, 0xdc, 0x1b);
            } else {
                func_ov002_02201700(unk_27f0, 0xe1, 0x1c);
            }
        }
    }
    switch (r4) {
    case 0:
        if (func_ov096_022965ac(a)) {
            func_ov002_02201700(unk_27f0, Unk_ov096_0229590c_IsZero(data_020e416c) ? 1 : 0xa, 2);
        }
        if (Unk_ov096_0229590c_IsZero(data_020e416c)) {
            _ZN18Unk_ov096_0229aea819func_ov098_0229bb5cEt(this, a);
        } else if (func_020b52f8()) {
            func_ov097_0229b3a4(this, a);
        }
        {
            BOOL r = FALSE;
            u32 a = v;
            u32 b = v;
            if (b >= 0x1000 && a <= 0x10ff) r = TRUE;
            if (r) {
                func_ov002_02201700(unk_27f0, 0x1c, 7);
            } else if (a >= 0x151f && a <= 0x151f) {
                func_ov002_02201700(unk_27f0, 0x1c, 8);
            }
        }
        break;
    case 1:
        func_ov002_02201700(unk_27f0, 9, 0x14);
        break;
    case 2:
        if (func_ov094_02292450(a) == 0) {
            func_ov002_02201700(unk_27f0, 0x17, 0x14);
        }
        break;
    }
}

void Unk_ov096_0229aea8::func_ov096_0229590c(s32 a) {
    void *o = func_ov096_02297b14((S *)this, a);
    if (MenuCtrl_IsButtons()) {
        func_ov002_02201700(unk_27f0, 0, 1);
    }
    s32 t = _ZN12Unk_0206555413func_02065578Ev(o);
    func_ov096_02294d9c(8);
    switch (t) {
    case 1:
        func_ov002_02201700(unk_27f0, 0x16, 5);
        func_ov002_02201700(unk_27f0, 0x20, 4);
        break;
    case 4:
        if (Unk_ov096_0229590c_IsZero(data_020e416c)) {
            _ZN18Unk_ov096_0229aea819func_ov098_0229bb18Ev(this);
        }
        func_ov002_02201700(unk_27f0, 0x16, 5);
        if (func_ov096_02294dbc(8) == 0) {
            if (_ZN12Unk_0206555413func_020655d0Ev(o) == 0xfff1) {
                if (Unk_ov096_0229590c_IsZero(data_020e416c)) {
                    func_ov002_02201700(unk_27f0, 0x15, 0xa);
                }
            }
        }
        break;
    case 7:
        func_ov002_02201700(unk_27f0, 0x17, 3);
        break;
    case 0:
        break;
    default:
        func_ov002_02201700(unk_27f0, 0x14, 3);
        break;
    }
    if (_ZN12Unk_0206555413func_020655d0Ev(o) != 0xfff1) {
        func_ov002_02201700(unk_27f0, 0x18, 6);
    } else if (t == 1 || t == 3 || t == 6) {
        if (Unk_ov096_0229590c_IsZero(data_020e416c)) {
            func_ov002_02201700(unk_27f0, 0x15, 0xa);
        }
    }
}

void Unk_ov096_0229aea8::func_ov096_022958ac() {
    s32 r = func_ov096_02296c18();
    if (r >= 0x64) {
        func_ov002_02201700(unk_27f0, 0x6e, 0xb);
        func_ov002_02201700(unk_27f0, 0x6f, 0xc);
    }
    if (r >= 0x3e8) {
        func_ov002_02201700(unk_27f0, 0x70, 0xd);
    }
    if (r >= 0x2710) {
        func_ov002_02201700(unk_27f0, 0x71, 0xe);
    }
}

void Unk_ov096_0229aea8::func_ov096_0229584c() {
    if (func_ov096_02296f64(5) != 0xfff1) {
        func_ov002_02201700(unk_27f0, 0x75, 0x11);
    }
    if (func_ov096_02296f64(4) != 0xfff1) {
        func_ov002_02201700(unk_27f0, 0x76, 0x10);
    }
    if (func_ov096_02296f64(3) != 0xfff1) {
        func_ov002_02201700(unk_27f0, 0x77, 0xf);
    }
}

void Unk_ov096_0229aea8::func_ov096_02295734(u32 a, s32 b) {
    func_ov096_02294d9c(0x40000);
    unk_b6 = a;
    func_ov002_022016e4(unk_27f0, 0x22);
    if (func_ov096_022982f0((S *)this, a)) {
        func_ov096_02295a44(a);
    } else if (func_ov096_022982e0((S *)this, a)) {
        func_ov096_0229590c(a);
    } else if (a == 0x25) {
        func_ov096_022958ac();
    } else if (a == 0x24) {
        func_ov096_0229584c();
    } else if (a != 0x27) {
        return;
    }
    if (func_ov002_022016cc(unk_27f0) == 0) {
        if (func_ov096_022982f0((S *)this, a) || func_ov096_022982e0((S *)this, a)) {
            func_ov002_02201700(unk_27f0, 0x7c, 0x22);
        } else if (a == 0x25 || a == 0x27) {
            func_ov002_02201700(unk_27f0, 0x7b, 0x22);
            unk_b6 = 0x25;
        } else if (a == 0x24) {
            func_ov002_02201700(unk_27f0, 0x7a, 0x22);
        }
    } else {
        func_ov002_02201700(unk_27f0, 2, 0x22);
    }
    func_ov096_02296898();
    if (b == 0) {
        _ZN18Unk_ov002_0220446819func_ov002_022006e4Ei(unk_23c0, 1);
    }
    func_ov096_02295c94(b);
    if (func_ov096_022982f0((S *)this, a) == 0 && a != 0x24) {
        func_ov096_02294ed4();
    }
}

void Unk_ov096_0229aea8::func_ov096_022956e4() {
    func_ov096_02294dac(0x40000);
    func_ov002_022016e4(unk_27f0, 0x22);
    func_ov002_02201700(unk_27f0, 0x1a, 0x22);
    func_ov002_02201700(unk_27f0, 0x15, 9);
    func_ov002_02201700(unk_27f0, 0x19, 0x22);
    func_ov096_02295c94(0);
}

void Unk_ov096_0229aea8::func_ov096_022956d0() {
    unk_bd = 0;
    func_ov096_022956a0(1);
}

void Unk_ov096_0229aea8::func_ov096_022956a0(s32 x) {
    func_ov096_02296898();
    func_ov002_022020cc(unk_24fc, unk_bd, x);
    func_ov002_02200a58(0x22);
}

// ===== unit 0229567c =====

extern "C" u32 func_ov096_0229567c() {
    u8 *g = (u8 *)data_020cbb18;
    u32 v = *(u32 *)(g + 0x64);
    if (_ZN12Unk_020cbb1813func_02072e88Ei(g, v)) {
        return (u8)v;
    }
    return 0;
}

void Unk_ov096_0229aea8::func_ov096_02295538(void *pad, s32 mode) {
    s32 col = unk_b5;
    s32 row = 0;
    while (col >= 5) {
        col -= 5;
        row++;
    }
    if (func_ov002_0220126c(pad)) {
        if (!func_ov002_0220128c(pad) || row == 0) {
            if (col == 0) {
                if (row == 2 && func_ov096_02294dd0()) {
                    unk_b5 = 0x21;
                    return;
                }
                unk_b5 = (row + 2) * 2 + 0x10;
                func_ov096_02294dac(0x10);
            } else {
                unk_b5 = unk_b5 - 1;
                col = col - 1;
            }
        }
    } else if (func_ov002_0220125c(pad)) {
        if (!func_ov002_0220127c(pad)) {
            if (col == 4) {
                unk_b5 = (row + 2) * 2 + 0xf;
            } else {
                unk_b5 = unk_b5 + 1;
                col = col + 1;
            }
        }
    }
    if (func_ov096_022982f0((S *)this, unk_b5)) {
        if (!func_ov096_02294dbc(0x30)) {
            if (func_ov002_0220128c(pad)) {
                if (row > 0) {
                    unk_b5 = unk_b5 - 5;
                } else if (col <= 2 && func_ov096_022978d0(mode)) {
                    unk_b5 = 0x25;
                } else if (func_ov096_022978f8(mode)) {
                    unk_b5 = 0x22;
                } else if (func_ov096_02297910(mode)) {
                    unk_b5 = 0x24;
                }
            } else if (func_ov002_0220127c(pad)) {
                if (row < 2) {
                    unk_b5 = unk_b5 + 5;
                }
            }
        }
    }
}

void Unk_ov096_0229aea8::func_ov096_02295348(void *pad, s32 mode) {
    s32 t = unk_b5 - 0xf;
    s32 row = t >> 1;
    if (func_ov002_0220126c(pad)) {
        if ((t & 1) > 0) {
            unk_b5 = unk_b5 - 1;
        } else if (mode == 2) {
        } else if (row >= 2) {
            unk_b5 = (row - 2) * 5 + 4;
        } else {
            s32 a = func_ov096_022978f8(mode);
            s32 b = func_ov096_02297910(mode);
            if (a & b) {
                if (row == 0) {
                    unk_b5 = 0x24;
                } else {
                    unk_b5 = 0x22;
                }
            } else if (a != 0) {
                unk_b5 = 0x22;
            } else if (b != 0) {
                unk_b5 = 0x24;
            } else if (func_ov096_022978d0(mode)) {
                unk_b5 = 0x25;
            } else {
                unk_b5 = 4;
            }
        }
    } else if (func_ov002_0220125c(pad)) {
        if ((t & 1) < 1) {
            unk_b5 = unk_b5 + 1;
        } else if (mode == 2) {
        } else {
            func_ov096_02294dac(0x20);
            if (row < 2) {
                if (func_ov096_022978d0(mode)) {
                    unk_b5 = 0x25;
                } else {
                    s32 a = func_ov096_022978f8(mode);
                    s32 b = func_ov096_02297910(mode);
                    if (a & b) {
                        if (row == 0) {
                            unk_b5 = 0x24;
                        } else {
                            unk_b5 = 0x22;
                        }
                    } else if (a != 0) {
                        unk_b5 = 0x22;
                    } else if (b != 0) {
                        unk_b5 = 0x24;
                    } else {
                        unk_b5 = 0;
                    }
                }
            } else {
                if (row == 4 && func_ov096_02294dd0()) {
                    unk_b5 = 0x21;
                    return;
                }
                unk_b5 = (row - 2) * 5;
            }
        }
    }
    if (func_ov096_022982e0((S *)this, unk_b5)) {
        if (!func_ov096_02294dbc(0x30)) {
            if (func_ov002_0220128c(pad)) {
                if (row > 0) {
                    unk_b5 = unk_b5 - 2;
                } else if (mode == 0) {
                    func_ov096_022982a0((S *)this);
                    _ZN18Unk_ov002_0220464c19func_ov002_02202be0Ev(unk_2498);
                }
            } else if (func_ov002_0220127c(pad)) {
                if (row < 4) {
                    unk_b5 = unk_b5 + 2;
                }
            }
        }
    }
}

void Unk_ov096_0229aea8::func_ov096_022952a0(void *pad, s32 mode) {
    if (func_ov002_0220126c(pad)) {
        if (*(volatile u8 *)&unk_b5 > 0x19) {
            unk_b5 = unk_b5 - 1;
        }
    } else if (func_ov002_0220125c(pad)) {
        if (*(volatile u8 *)&unk_b5 < 0x20) {
            unk_b5 = unk_b5 + 1;
        }
    }
    if (func_ov002_0220127c(pad)) {
        s32 d = unk_b5 - 0x19;
        if (d == 7) {
            unk_b5 = 0x10;
        } else if (d == 6) {
            unk_b5 = 0xf;
        } else if (d == 0) {
            unk_b5 = 0x25;
        } else {
            unk_b5 = 0x24;
        }
        _ZN18Unk_ov002_0220464c19func_ov002_02202c40Ev(unk_2498);
    }
}

void Unk_ov096_0229aea8::func_ov096_022950fc(void *pad, s32 mode) {
    u32 v = unk_b5;
    if (v == 0x24) {
        if (func_ov002_0220126c(pad)) {
            if (func_ov096_022978d0(mode)) {
                unk_b5 = 0x25;
            } else {
                func_ov096_02294dac(0x10);
                unk_b5 = 0x10;
            }
        } else if (func_ov002_0220125c(pad)) {
            unk_b5 = 0xf;
        } else if (func_ov002_0220128c(pad)) {
            if (mode == 0) {
                func_ov096_022982a0((S *)this);
                _ZN18Unk_ov002_0220464c19func_ov002_02202be0Ev(unk_2498);
            }
        } else if (func_ov002_0220127c(pad)) {
            if (func_ov096_022978f8(mode)) {
                unk_b5 = 0x22;
            } else {
                unk_b5 = 4;
            }
        }
    } else if ((u8)(v + 0xde) <= 1) {
        if (func_ov002_0220126c(pad)) {
            if (func_ov096_022978d0(mode)) {
                unk_b5 = 0x25;
            } else {
                func_ov096_02294dac(0x10);
                unk_b5 = 0x12;
            }
        } else if (func_ov002_0220125c(pad)) {
            unk_b5 = 0x11;
        } else if (func_ov002_0220128c(pad)) {
            if (func_ov096_02297910(mode)) {
                unk_b5 = 0x24;
            }
        } else if (func_ov002_0220127c(pad)) {
            unk_b5 = 4;
        }
    } else if (v == 0x25) {
        if (func_ov002_0220126c(pad)) {
            func_ov096_02294dac(0x10);
            unk_b5 = 0x12;
        } else if (func_ov002_0220125c(pad)) {
            if (func_ov096_022978f8(mode)) {
                unk_b5 = 0x22;
            } else if (func_ov096_02297910(mode)) {
                unk_b5 = 0x24;
            } else {
                unk_b5 = 0x11;
            }
        } else if (func_ov002_0220128c(pad)) {
            if (mode == 0) {
                func_ov096_022982a0((S *)this);
                _ZN18Unk_ov002_0220464c19func_ov002_02202be0Ev(unk_2498);
            }
        } else if (func_ov002_0220127c(pad)) {
            unk_b5 = 1;
        }
    }
}

BOOL Unk_ov096_0229aea8::func_ov096_02295020(void *pad, s32 mode) {
    u8 old = unk_b5;
    func_ov096_02294d9c(0x30);
    if (pad == 0) {
        return FALSE;
    }
    if (func_ov096_022982f0((S *)this, unk_b5)) {
        func_ov096_02295538(pad, mode);
    } else if (func_ov096_022982e0((S *)this, unk_b5)) {
        func_ov096_02295348(pad, mode);
    } else if (func_ov096_022982d0((S *)this, unk_b5)) {
        func_ov096_022952a0(pad, mode);
    } else if (func_ov096_022982c0((S *)this, unk_b5)) {
        func_ov096_022950fc(pad, mode);
    } else if (unk_b5 == 0x21) {
        if (func_ov002_0220125c(pad)) {
            unk_b5 = 0xa;
        } else if (func_ov002_0220126c(pad)) {
            unk_b5 = 0x18;
            func_ov096_02294dac(0x10);
        }
    }
    if (old != unk_b5) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov096_0229aea8::func_ov096_02294ff8() {
    func_ov002_02200a50(5);
    func_ov002_02200a60(1);
    func_ov096_02294dac(0x80);
    func_ov096_0229a000();
}

void Unk_ov096_0229aea8::func_ov096_02294fd4() {
    func_ov002_02200a58(0x21);
    _ZN11LabelButton8setStateEi(unk_2b14, 2);
    Snd_PlaySe(0x29);
}

void Unk_ov096_0229aea8::func_ov096_02294fac() {
    func_ov096_02294fd4();
    _ZN18Unk_ov090_022921e019func_ov090_02291d8cEj(ProcBase_GetParent(this), 7);
    func_ov096_02294dac(0x20000);
}

void *Unk_ov096_0229aea8::func_ov096_02294f9c() { return func_ov096_02297b14((S *)this, unk_b6); }

void Unk_ov096_0229aea8::func_ov096_02294f14() {
    u16 v;
    void *r4 = func_ov096_02294f9c();
    v = func_ov096_02297b9c((S *)this, unk_b8);
    s32 r6 = Item_GetPaperIndex(&v);
    func_02065c34(r4, (u8)r6);
    _ZN18Unk_ov002_022013ac19func_ov002_022013e4EPvj(unk_24fc, r4, unk_be);
    func_0206ed5c(r4);
    func_ov096_0229a39c(8);
    func_ov096_0229a000();
    u32 n = Item_GetPaperCount(&v);
    s32 r2;
    if (n <= 1) {
        r2 = 0xfff1;
    } else {
        r2 = Item_MakePaper(r6, n - 1);
    }
    func_ov096_022980a0((S *)this, unk_b8, r2, 0);
}

void Unk_ov096_0229aea8::func_ov096_02294ef4() {
    func_ov096_02294dac(0x400);
    func_ov096_02294dac(0x800);
}

void Unk_ov096_0229aea8::func_ov096_02294ed4() {
    func_ov096_02294d9c(0x400);
    func_ov096_02294dac(0x800);
}

void Unk_ov096_0229aea8::func_ov096_02294e84() {
    if (func_ov096_02294dbc(0x800)) {
        if (Camera_IsViewPushed()) {
            if (!func_ov096_02294dbc(0x400)) {
                Camera_PopView();
            }
        } else {
            if (func_ov096_02294dbc(0x400)) {
                Camera_PushView();
            }
        }
        func_ov096_02294d9c(0x800);
    }
}

void Unk_ov096_0229aea8::func_ov096_02294e08() {
    struct {
        u16 a;
        u16 b;
    } l;
    l.a = *_ZN12Unk_02097ff413func_020983ccEv(PlayerData_GetCurrent());
    l.b = unk_ac;
    func_0206e240(&l.b, &unk_320, &unk_e8, &unk_c8);
    BOOL ok = FALSE;
    volatile u16 *pv = &l.a;
    u16 a = *pv;
    u16 b = *pv;
    if (b >= 0x11a8 && a <= 0x12a7) {
        ok = TRUE;
    }
    if (ok) {
        unk_ac = a;
        func_ov096_022972ec(1);
    } else {
        func_ov096_02297160();
    }
    Snd_PlaySe(0x6b);
}

BOOL Unk_ov096_0229aea8::func_ov096_02294dd0() {
    struct Pad {
        s32 v[2];
        Pad() {}
        ~Pad() {}
    } pad;
    BOOL r;
    if (unk_b1 == 2 && unk_b0 == 0 && unk_ac >= 0x11a8 && unk_ac <= 0x12a7) {
        r = TRUE;
    } else {
        r = FALSE;
    }
    return r;
}

BOOL Unk_ov096_0229aea8::func_ov096_02294dbc(u32 mask) {
    if (unk_94 & mask) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov096_0229aea8::func_ov096_02294dac(u32 mask) { unk_94 = unk_94 | mask; }

void Unk_ov096_0229aea8::func_ov096_02294d9c(u32 mask) { unk_94 = unk_94 & ~mask; }

// ===== unit 02294c40 =====

// destructor is implicit (member destructors run in reverse order)

