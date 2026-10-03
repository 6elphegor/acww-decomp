// ov002: shared library overlay (menu / cursor / slider helpers used by the scene overlays).
#define postCreate() postCreate(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#include "text/Unk_02050288.h"
#undef postCreate
#undef vfunc_14

// ---------------------------------------------------------------------------------------------------------------------
// Real names of functions of other modules (plain names that are really methods / ctors / dtors)
#define VillagerId_getName _ZN10VillagerId7getNameEj
#define VillagerData_getVillagerId _ZN12VillagerData13getVillagerIdEv
#define func_02094018 _ZN12Unk_020e1c64D1Ev
#define func_02094030 _ZN12Unk_020e1c64C1Ev
#define func_020940d0 _ZN8PlayerId13func_020940d0EP9MsgString
#define PlayerData_getPlayerId _ZN10PlayerData11getPlayerIdEv
#define func_0206fcc8 _ZN12Unk_020e0488C1Ev
#define func_0206fca8 _ZN12Unk_020e0488D1Ev
#define MsgString_copy _ZN9MsgString4copyEPS_
#define MsgString_append _ZN9MsgString6appendEPh
#define MsgString_appendString _ZN9MsgString12appendStringEPS_
#define LabelButton_setLabelText _ZN11LabelButton12setLabelTextEv

extern "C" {
BOOL _ZN8ProcBase8vfunc_14Ev(void *self, s32 a);
void _ZN8GameProc10postCreateEv(void *self, s32 a);
void _ZN18Unk_ov002_0220477019func_ov002_022039f8Ehii(void *self, s32 x, s32 a, s32 b);
void VillagerId_getName(s32 a, void *buf);
s32 VillagerData_getVillagerId(void *self);
void func_02094018(void *p);
void func_02094030(void *p);
void func_020940d0(s32 a, void *buf);
s32 PlayerData_getPlayerId(void *self);
void func_0206fcc8(void *p);
void func_0206fca8(void *p);
void MsgString_copy(void *self, void *src);
void MsgString_append(void *self, const void *s);
void MsgString_appendString(void *self, void *src);
void LabelButton_setLabelText(void *self, void *src);

void Gfx2d_SetWindowRect(s32 a, s32 x0, s32 y0, s32 x1, s32 y1);
void Gfx2d_SetLayerOffset(s32 a, s32 b, s32 c);
void Snd_PlaySe(s32 a);
void MenuScreen_ClearState();
BOOL MenuScreen_IsClosed();
BOOL MenuScreen_IsOpen();
void MenuCtrl_SetButtons();
void MenuCtrl_SetTouch();
void MenuCtrl_RemoveOpenMenu(void *p);
void MenuCtrl_AddOpenMenu(void *p);
void Gfx2d_EnableMainWindows(s32 a);
void Gfx2d_SetMainWin0Planes(s32 a);
s32 Gfx2d_GetMainWindows();
void Gfx2d_RemoveMainWinOutPlanes(s32 a);
void Gfx2d_SetMainWinOutPlanes(s32 a);
void Gfx2d_EnableSubWindows(s32 a);
void Gfx2d_SetSubWin0Planes(s32 a, s32 b);
void Gfx2d_SetSubWinOutPlanes(s32 a);
void Gfx2d_DisableSubWindows(s32 a);
void Gfx2d_DisableMainWindows(s32 a);
void *Heap_AllocTail(void *heap, u32 size);
void Heap_Free(void *heap, void *p);
void *func_0212899c(void *p, s32 v, u32 n);
void *ProcBase_GetParent(void *p);
void ProcBase_SetExecutePriority(void *p, u32 v);
void ProcBase_SetDrawPriority(void *p, u32 v);
s32 func_01ffcb0c(s32 a, s32 b);
void func_02065b5c(void *p);
void func_02065ba4(void *p, s32 a);
void func_02065bd0(void *p, s32 a);
void String_Load2d(void *buf, u8 *c, s32 z);
void func_0206f994(void *dst, const void *s, s32 len);
void func_0206f9fc(void *a, s32 v);
void *PlayerData_GetCurrent();
s32 func_02097740(void *a, s32 b);
s32 func_020978c8(void *a, s32 b);
void *PlayerData_GetResident(void *a, s32 b);
s32 SaveVillagers_IsOccupied(void *a, s32 b);
void *SaveVillagers_Get(void *a, s32 b);
s32 Villager_FindMemory(void *a, s32 b);
BOOL MenuCtrl_IsButtons();
void Gfx2d_HideLayer(s32 a);
s32 Gfx2d_GetLayerPlaneMask(s32 a);
s32 Gfx2d_EndSubObjWinBrightness();
s32 Gfx2d_BeginSubObjWinBrightness();
void Gfx2d_GetLayerBlendMask(s32 a);
void Gfx2d_ExcludeSubBrightnessPlanes();
s32 Gfx2d_SetSubBrightness(s32 a);
void Gfx2d_ShowLayer(s32 a);
void Gfx2d_SetLayerPriority(s32 a, u32 b);
void Gfx2d_SetLayerControl(s32 a, s32 b, s32 c, s32 d);
u8 *File_LoadAlloc(const char *path, void *heap, s32 a, s32 b);
void MIi_CpuCopy16(void *dst, void *src, s32 n);
void MIi_CpuClear16(s32 v, void *dst, s32 n);
void Gfx2d_LoadScreen(void *buf, s32 a, s32 b, s32 c);
void Gfx2d_LoadPaletteFile(const char *buf, void *h, s32 x, s32 a, s32 b, s32 c);
void Gfx2d_LoadCharFile(const char *buf, void *h, s32 x, s32 a, s32 b, s32 c);
void Gfx2d_LoadScreenFile(char *buf, void *h, s32 x);
s32 func_020639e8(char *buf, const char *fmt, ...);
void Oam_DrawCell(u32 a, void *h, s32 x, s32 y, s32 s0, s32 s1, s32 s2, s32 s3, s32 s4, s32 s5, s32 s6, s32 s7);
void GXS_LoadOBJPltt(const void *p, u32 a, u32 b);
s32 func_0206e61c();

extern void *data_021c6210;
extern void *gCurrentHeap;
extern u8 gTouchHeld;
extern u8 gTouchChanged;
extern volatile u16 gPad[];
extern u8 data_021d735c[];
extern u8 data_021dfd8c[];
extern u8 gTouchCurX;
extern u8 gTouchCurY;
extern u8 gTouchPressX;
extern u8 gTouchPressY;
extern u8 gTalkMsgIndexEnd[];
}

void operator delete(void *p);

// Constructors / destructors that the symbols name differently from what the compiler generates (base-object C2 without
// the unused C1, ctor/dtor of the 0x0220464c family) are defined as extern "C" functions with their real mangled names.
extern "C" {
extern char _ZTV18Unk_ov002_022044c4[];
extern char _ZTV18Unk_ov002_022044e4[];
extern char _ZTV18Unk_ov002_02204754[];
extern void *_ZTV18Unk_ov002_0220464c[7];
extern void *_ZTV18Unk_ov002_02204614[7];
extern void *_ZTV18Unk_ov002_02204630[7];
extern char _ZTV8GameProc[];
void *_ZN8ProcBaseC2Ev(void *self);
void *_ZN11LabelButtonC2Ehi(void *self, u8 a, s32 b);
void *_ZN10HandCursorC2Ei(void *self, s32 flag);
void *_ZN10HandCursorD2Ev(void *self);
void *_ZN18Unk_ov002_022044d4C1Ev(void *self);
void *_ZN18Unk_ov002_022044b4C1Ev(void *self);
void *_ZN18Unk_ov002_02204604C1Ev(void *self);
void *_ZN18Unk_ov002_02204604D1Ev(void *self);
void _ZN10HandCursor4drawEv();
void _ZN18Unk_ov002_02202d988vfunc_0cEv();
void _ZN8UiWidget9setOriginEii();
}

// ---------------------------------------------------------------------------------------------------------------------
// Classes of the main module

class SpriteAnim {
public:
    SpriteAnim();
    ~SpriteAnim();
    void update();
    s32 getFrameY(s32 v);
    s32 getFrameX(s32 v);
    s32 getFrameIndex();
    void *getCell();

    /* 0x00 */ u8 unk_00[0x14];
};

class MsgStringBase {
public:
    virtual ~MsgStringBase() {}
    virtual u32 vfunc_08() = 0;
    virtual u8 *vfunc_0c() = 0;
};

class Unk_020e0d80 : public MsgStringBase {
public:
    Unk_020e0d80();
    virtual ~Unk_020e0d80();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();

    /* 0x04 */ u8 unk_04[0x24];
};

class MsgStringAttr {
public:
    MsgStringAttr();
    virtual ~MsgStringAttr();
    void reset();
    void copyFrom(MsgStringAttr *other);

    /* 0x04 */ s32 unk_04;
    /* 0x08 */ u8 unk_08;
    /* 0x09 */ u8 unk_09;
};

// buffer interface with write position at +4 and member at +8
class MsgString : public MsgStringBase {
public:
    MsgString();
    virtual ~MsgString();
    virtual u32 vfunc_08() = 0;
    virtual u8 *vfunc_0c() = 0;

    /* 0x04 */ u32 unk_04;
    /* 0x08 */ MsgStringAttr unk_08;
};

// String buffer wrapping a text renderer (TextLabel) at +0x3c
class Unk_020e0488 : public MsgString {
public:
    Unk_020e0488();
    virtual ~Unk_020e0488();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();

    u32 func_0206fa1c();
    void func_0206fab4(s32 a, s32 b);
    void func_0206fb9c(u32 id, u32 a, u32 b, u8 x, u8 y, s32 flag);
    void func_0206fc44();

    /* 0x12 */ u8 unk_12[0x2a];
    /* 0x3c */ TextLabel *unk_3c;
};

class UiWidget {
public:
    UiWidget();
    virtual ~UiWidget();
    virtual void draw() = 0;
    virtual void vfunc_0c() = 0;
    virtual void setOrigin(s32 a, s32 b);
    s32 getOriginY();
    s32 getOriginX();

    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08;
};

class LabelBalloon : public UiWidget {
public:
    LabelBalloon(s32 flag);
    virtual ~LabelBalloon();
    virtual void draw();
    virtual void vfunc_0c();

    s32 getWidth();
    s32 getPosY();
    s32 getPosX();
    s32 getState();
    BOOL requestClose();
    BOOL requestOpen();
    void refreshText(s32 flag);
    void setClampToScreen(u8 v);
    void enableCenterText();
    void setText(StrBuf *src);
    void setPos(s32 a, s32 b);
    void hideLayer2();
    void showLayer2();
    void disablePopAnim();
    void disableObjWindow();
    void enableObjWindow();

    /* 0x0c */ SpriteAnim unk_0c;
    /* 0x20 */ SpriteAnim unk_20;
    /* 0x34 */ s32 unk_34;
    /* 0x38 */ s32 unk_38;
    /* 0x3c */ s32 unk_3c;
    /* 0x40 */ s32 unk_40;
    /* 0x44 */ s32 unk_44;
    /* 0x48 */ s32 unk_48;
    /* 0x4c */ s32 unk_4c;
    /* 0x50 */ s32 unk_50;
    /* 0x54 */ u8 unk_54[9];
    /* 0x60 */ Unk_020e0d80 unk_60;
    /* 0x88 */ Unk_020e0d80 unk_88;
    /* 0xb0 */ TextLabel *unk_b0;
    /* 0xb4 */ TextLabel *unk_b4;
    /* 0xb8 */ s32 unk_b8;
};

class HandCursor : public UiWidget {
public:
    HandCursor(BOOL flag);
    virtual ~HandCursor();
    virtual void draw();
    virtual void vfunc_0c();

    BOOL isAnimDone();
    s32 getAnim();
    void setAnimAtEnd(s32 idx);
    void setAnim(s32 idx);
    void setPos(s32 a, s32 b);
    void disableObjWindow();
    void enableObjWindow();

    /* 0x0c */ SpriteAnim unk_0c;
    /* 0x20 */ s32 unk_20;
    /* 0x24 */ s32 unk_24;
    /* 0x28 */ s32 unk_28;
    /* 0x2c */ SpriteAnim unk_2c;
    /* 0x40 */ s32 unk_40;
    /* 0x44 */ s32 unk_44;
    /* 0x48 */ u8 unk_48;
    /* 0x49 */ u8 unk_49;
    /* 0x4a */ u8 unk_4a;
};

class ScrollKnob : public UiWidget {
public:
    ScrollKnob(u32 flag);
    virtual ~ScrollKnob();
    virtual void draw();
    virtual void vfunc_0c();

    BOOL areAnimsDone();
    s32 getState();
    void setState(s32 idx);
    void getAnimOffset(s32 *a, s32 *b);

    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ SpriteAnim unk_14;
    /* 0x28 */ SpriteAnim unk_28;
    /* 0x3c */ s32 unk_3c;
    /* 0x40 */ u8 unk_40;
    /* 0x44 */ s32 unk_44;
};

class LabelButton : public UiWidget {
public:
    LabelButton(u8 a, s32 b);
    virtual ~LabelButton();
    virtual void draw();
    virtual void vfunc_0c();

    BOOL isAnimDone();
    s32 getState();
    void setState(s32 v);
    void getAnimOffset(s32 *x, s32 *y);
    void setPos(s32 x, s32 y);
    void showLayer2();
    void hideLayer2();
    void enableObjWindow();

    /* 0x0c */ u8 unk_0c[0x64];
};

class MsgRequest {
public:
    MsgRequest();
    virtual ~MsgRequest();
    virtual void vfunc_08();
    void setFileName(const char *src);
    /* 0x04 */ char unk_04[0x1a];
    /* 0x1e */ u8 unk_1e;
};

class TalkMsgRequest : public MsgRequest {
public:
    TalkMsgRequest();
    virtual ~TalkMsgRequest();
    virtual void vfunc_08();
};

class TalkWindowState {
public:
    void setKeepSe();
    void disableInput();
    s32 detachRequest();
    void attachRequest(TalkMsgRequest *p);
    void setAdvancePending();
    void unlockAdvance();
    void lockAdvance();
    void setNextMessageIfUnset(u8 *a, void *b);
    /* 0x00 */ s32 unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08;
};
extern "C" TalkWindowState *TalkWindow_Get(s32 a);

// ---------------------------------------------------------------------------------------------------------------------
// Overlay 2 classes

// 8-byte animation record
struct Unk_ov002_02203c5c_Rec {
    u32 unk_00;
    u32 unk_04 : 10;
    u32 unk_04_hi : 22;
};

extern "C" {
extern const u8 data_ov002_0220442c[];
extern const u8 data_ov002_02204430[];
extern const u8 data_ov002_02204434[];
extern const u8 data_ov002_02204440[];
extern const u8 data_ov002_0220444c[];
extern s32 data_ov002_02204544[];
extern Unk_ov002_02203c5c_Rec data_ov002_022046e4[];
extern Unk_ov002_02203c5c_Rec data_ov002_022046fc[];
extern Unk_ov002_02203c5c_Rec data_ov002_02204784[];
extern Unk_ov002_02203c5c_Rec data_ov002_022047a4[];
extern Unk_ov002_02203c5c_Rec data_ov002_022047cc[];
extern Unk_ov002_02203c5c_Rec data_ov002_022047fc[];
extern Unk_ov002_02203c5c_Rec data_ov002_0220482c[];
}

// Vtable 0x02204468
class Unk_ov002_02204468 : public LabelBalloon {
public:
    Unk_ov002_02204468();
    virtual ~Unk_ov002_02204468();

    BOOL func_ov002_02200680();
    void func_ov002_022006a4(u8 v);
    void func_ov002_022006ac(s32 v);
    void func_ov002_022006b0();
    void func_ov002_022006b8();
    void func_ov002_022006c0();
    BOOL func_ov002_022006e4(s32 a);
    s32 func_ov002_0220071c();

    /* 0xbc */ u8 unk_bc;
    /* 0xbd */ u8 unk_bd;
    /* 0xbe */ volatile u8 unk_be;
};

// vptr-only class (vtable 0x022044d4)
class Unk_ov002_022044d4 {
public:
    Unk_ov002_022044d4();
    virtual ~Unk_ov002_022044d4();
};

// cursor / input repeat state (view of the object at +0x50 of Unk_ov002_022044e4; the vptr is a Unk_ov002_022044d4)
class Unk_ov002_02201240 {
public:
    u32 unk_00;
    s16 unk_04;
    s16 unk_06;
    s16 unk_08;
    s16 unk_0a;
    s16 unk_0c;
    u8 unk_0e;
    u8 unk_0f;
    u8 unk_10;
    void func_ov002_02201240(s32 a, s32 b, s32 c);
    BOOL func_ov002_0220129c();
    BOOL func_ov002_022012b0();
    BOOL func_ov002_022012c4();
    BOOL func_ov002_022012d8();
    u32 func_ov002_022012ec();
    void func_ov002_022012f8();
};

// slider base class (vtable 0x022044c4)
class Unk_ov002_022044c4 {
public:
    Unk_ov002_022044c4();
    virtual ~Unk_ov002_022044c4();
    s32 unk_04;
    s32 unk_08;
    s32 func_ov002_022011ac(s32 v);
    s32 func_ov002_022011b4(s32 v);
    BOOL func_ov002_022011cc();
    void func_ov002_022011ec(u32 n);
};

// slider class (vtable 0x022044b4)
class Unk_ov002_022044b4 : public Unk_ov002_022044c4 {
public:
    Unk_ov002_022044b4();
    virtual ~Unk_ov002_022044b4();
    s32 unk_0c;
    s32 unk_10;
    s32 unk_14;
    u8 unk_18;
    void func_ov002_02200fa8(s32 mode);
    void func_ov002_02200fe0(s32 mode);
    BOOL func_ov002_0220102c(s32 mode);
    void func_ov002_02201090(s32 mode);
    void func_ov002_022010c4(s32 mode);
    s32 func_ov002_02201124();
    s32 func_ov002_02201140();
};

// methods of the same slider object that the symbols list under another class name
class Unk_ov002_02201194 : public Unk_ov002_022044b4 {
public:
    void func_ov002_02200d04(s32 v);
    void func_ov002_02200d08(s32 a);
    void func_ov002_02200d78(s32 a, s32 b, s32 c);
    void func_ov002_02200dd8(s32 a, s32 mode, s32 dist);
    void func_ov002_02200e18(s32 a, s32 mode, s32 dist);
    void func_ov002_02200e58(s32 a, s32 b, s32 mode, s32 dist);
    void func_ov002_02200ea4(s32 a, s32 b, s32 mode, s32 dist);
    void func_ov002_02200edc(s32 a, s32 b, s32 mode, s32 dist);
    void func_ov002_02200f18(s32 a, s32 b, s32 mode, s32 dist);
    BOOL func_ov002_02200f54(s32 a);
};

class Unk_ov002_022044e4;
typedef void (Unk_ov002_022044e4::*Unk_ov002_02200a68_Fn)();

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
    void func_ov002_02200850(s32 v);
    void func_ov002_0220085c(s32 a, s32 mode);
    void func_ov002_02200874(s32 a, s32 mode);
    void func_ov002_0220088c(s32 a, s32 b, s32 mode, s32 dist);
    void func_ov002_022008a8(s32 a, s32 b, s32 mode, s32 dist);
    void func_ov002_022008c4(s32 a, s32 b, s32 mode, s32 dist);
    void func_ov002_022008e0(s32 a, s32 b, s32 mode, s32 dist);
    BOOL func_ov002_022008fc(s32 a);
    BOOL func_ov002_02200908(s32 a);
    s32 func_ov002_02200914();
    s32 func_ov002_02200920();
    BOOL func_ov002_022009d4();
    BOOL func_ov002_02200a14(s32 a);
    void func_ov002_02200a50(u8 v);
    void func_ov002_02200a58(u8 v);
    void func_ov002_02200a60(u8 v);
    void func_ov002_02200970(s32 a, s32 b, s32 c);
    void func_ov002_02200980();
    BOOL func_ov002_02200998();
    BOOL func_ov002_022009a4();
    BOOL func_ov002_022009b0();
    BOOL func_ov002_022009bc();
    u32 func_ov002_022009c8();

    /* 0x50 */ Unk_ov002_022044d4 unk_50;
    /* 0x54 */ u8 unk_54[0x10];
    /* 0x64 */ u32 unk_64;
    /* 0x68 */ u32 unk_68;
    /* 0x6c */ Unk_ov002_022044e4 *unk_6c;
    /* 0x70 */ Unk_ov002_022044b4 unk_70;
    /* 0x8c */ u8 unk_8c;
    /* 0x8d */ u8 unk_8d;
    /* 0x8e */ u8 unk_8e;
    /* 0x8f */ u8 unk_8f;
    /* 0x90 */ u8 unk_90;
};

// 8-byte-aligned owner helpers of the menu: text elements
// Sprite/text pair element (0x50 bytes), vtable 0x022046dc
class Unk_ov002_022046dc {
public:
    Unk_ov002_022046dc();
    virtual ~Unk_ov002_022046dc();

    u32 func_ov002_02203c0c();
    void func_ov002_02203c1c();
    void func_ov002_02203c28(u32 m);
    void func_ov002_02203c38(u32 m);
    BOOL func_ov002_02203c48(u32 m);
    void func_ov002_02203c5c(u8 a, u8 b);
    void func_ov002_02203ca4(u8 v);
    void func_ov002_02203cc4(u8 v);
    void func_ov002_02203ce4(u8 v);
    void func_ov002_02203cf8(Unk_ov002_02203c5c_Rec *p, u8 a, u8 b);
    void func_ov002_02203ab8();
    void func_ov002_02203ac4();
    void func_ov002_02203ad0();
    void func_ov002_02203adc();
    void func_ov002_02203ae8();
    BOOL func_ov002_02203af4();
    void func_ov002_02203b30(s32 x, s32 y, s32 c);

    /* 0x04 */ Unk_020e0488 unk_04;
    /* 0x44 */ Unk_ov002_02203c5c_Rec *unk_44;
    /* 0x48 */ u8 unk_48;
    /* 0x49 */ u8 unk_49;
    /* 0x4a */ u8 unk_4a;
    /* 0x4b */ u8 unk_4b;
    /* 0x4c */ u8 unk_4c;
};

// Menu, vtable 0x02204770
class Unk_ov002_02204770 : public LabelBalloon {
public:
    Unk_ov002_02204770();
    virtual ~Unk_ov002_02204770();
    virtual void setOrigin(s32 a, s32 b);

    void func_ov002_022039d8();
    void func_ov002_022039f8(u8 a, s32 b, s32 c);
};

// Owner, vtable 0x022046cc
class Unk_ov002_022046cc {
public:
    Unk_ov002_022046cc();
    virtual ~Unk_ov002_022046cc();

    void func_ov002_022034c4(u8 v);
    void func_ov002_02203510(s32 v);
    void func_ov002_02203548();
    void func_ov002_02203590();
    void func_ov002_022035d8();
    void func_ov002_02203608();
    void func_ov002_02203650();
    void func_ov002_02203698();
    void func_ov002_022036a4(s32 a);
    void func_ov002_02203900();

    /* 0x004 */ Unk_ov002_022046dc unk_04[2];
    /* 0x0a4 */ Unk_ov002_02204770 unk_a4;
    /* 0x160 */ u8 unk_160;
    /* 0x161 */ u8 unk_161;
};

// Methods of the same object that the symbols list under another class name
class Unk_ov002_02202fac : public Unk_ov002_022046cc {
public:
    void func_ov002_02202fac(s32 idx);
    void func_ov002_02202fc8(s32 idx);
    void func_ov002_02202fe4(s32 idx);
    s32 func_ov002_02203000(s32 idx);
    void func_ov002_0220301c();
    void func_ov002_02203044();
    void func_ov002_0220306c();
    void func_ov002_0220308c();
    void func_ov002_022030ac(u8 v);
    s32 func_ov002_022030b8(s32 idx);
    s32 func_ov002_022030f4(s32 idx);
    BOOL func_ov002_02203110(s32 idx);
    BOOL func_ov002_0220314c(s32 idx, s32 x, s32 y);
    void func_ov002_02203268();
    void func_ov002_02203274(s32 x);
    void func_ov002_022032b0(s32 x);
    void func_ov002_022032ec(s32 x);
    void func_ov002_02203328();
    void func_ov002_02203370(s32 x);
    void func_ov002_022033ac();
    void func_ov002_022033ec(s32 x);
    void func_ov002_02203458(s32 x);
};

// Base of the 0x0220471c / 0x02204738 classes
class Unk_ov002_02204754 : public LabelButton {
public:
    Unk_ov002_02204754(u8 a, s32 b);
    virtual ~Unk_ov002_02204754();
    virtual void setOrigin(s32 a, s32 b);
};

class Unk_ov002_0220471c : public Unk_ov002_02204754 {
public:
    Unk_ov002_0220471c();
    virtual ~Unk_ov002_0220471c();
};

// Vtable 0x02204738
class Unk_ov002_02204738 : public Unk_ov002_02204754 {
public:
    Unk_ov002_02204738();
    virtual ~Unk_ov002_02204738();

    BOOL func_ov002_02203e24();
    void func_ov002_02203e88(s32 v, s32 x, s32 y);
    void func_ov002_02203ec8(s32 v);
    void func_ov002_02203edc(s32 v);
    BOOL func_ov002_02203f08();
    s32 func_ov002_02203f28(s32 k);
    s32 func_ov002_02203f78(s32 k);
};

// Non-polymorphic holder object (members at +0x00 and +0xc0)
class Unk_ov002_022040ec {
public:
    Unk_ov002_022040ec();
    ~Unk_ov002_022040ec();

    BOOL func_ov002_0220403c();
    s32 func_ov002_02204044();
    BOOL func_ov002_0220405c();
    void func_ov002_0220407c();
    BOOL func_ov002_022040a4();
    void func_ov002_022040c0();
    void func_ov002_022040c8();
    void func_ov002_022040d4();
    void func_ov002_022040ec();
    BOOL func_ov002_02204140();
    void func_ov002_02204174();
    BOOL func_ov002_0220418c();
    void func_ov002_022041b8(u8 *a, s32 b);
    BOOL func_ov002_02204234(s32 a);
    void func_ov002_02204340(u8 *a, s32 b, u32 c);
    void func_ov002_02204394(u8 *a, s32 b, u32 c);

    /* 0x00 */ Unk_ov002_02204468 unk_00;
    /* 0xc0 */ TalkMsgRequest unk_c0;
    /* 0xe0 */ u8 unk_e0[0x1c];
    /* 0xfc */ TalkWindowState *unk_fc;
    /* 0x100 */ u8 unk_100[4];
    /* 0x104 */ u8 unk_104;
    /* 0x105 */ u8 unk_105;
};

// Scroll/move helper embedded at +0x4c of Unk_ov002_02202d98 (vtable 0x02204604)
class Unk_ov002_02204604 {
public:
    Unk_ov002_02204604();
    virtual ~Unk_ov002_02204604();

    BOOL func_ov002_02202674();
    void func_ov002_02202694(s32 x, s32 y, s32 n);
    void func_ov002_022026c4(s32 x, s32 y, s32 n);
    void func_ov002_022026f4(s32 x, s32 y);
    void func_ov002_02202700();
    s32 func_ov002_02202708();
    s32 func_ov002_02202710();
    BOOL func_ov002_02202718();
    void func_ov002_022027a4();

    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08;
    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ u8 unk_14;
    /* 0x15 */ u8 unk_15;
};

// Intermediate base of the vtables 0x02204614 / 0x02204630 / 0x0220464c
class Unk_ov002_02202d98 : public HandCursor {
public:
    Unk_ov002_02202d98(BOOL flag);
    ~Unk_ov002_02202d98();
    virtual void vfunc_0c();

    void func_ov002_02202844();
    s32 func_ov002_02202878();
    s32 func_ov002_0220288c();
    s32 func_ov002_022028a0();
    s32 func_ov002_022028c8();
    BOOL func_ov002_022028f0();
    BOOL func_ov002_022028fc();
    BOOL func_ov002_02202928();
    void func_ov002_0220298c(s32 x, s32 y, s32 n, u8 e);
    void func_ov002_022029e8(s32 x, s32 y, s32 n, s32 f);
    void func_ov002_02202a18(s32 x, s32 y, s32 n);
    void func_ov002_02202a40(s32 x, s32 y);
    void func_ov002_02202a6c(s32 x, s32 y);
    void func_ov002_02202a78();
    void func_ov002_02202af0();

    /* 0x4c */ Unk_ov002_02204604 unk_4c;
};

class Unk_ov002_0220464c : public Unk_ov002_02202d98 {
public:
    Unk_ov002_0220464c(BOOL flag);
    virtual ~Unk_ov002_0220464c();

    void func_ov002_02202b68();
    void func_ov002_02202be0();
    void func_ov002_02202c40();
    void func_ov002_02202ca0();
    void func_ov002_02202d00(s32 idx);
};

class Unk_ov002_02204614 : public Unk_ov002_0220464c {
public:
    Unk_ov002_02204614();
    virtual ~Unk_ov002_02204614();
};

class Unk_ov002_02204630 : public Unk_ov002_0220464c {
public:
    Unk_ov002_02204630();
    virtual ~Unk_ov002_02204630();
};

class Unk_ov002_022046b0 : public ScrollKnob {
public:
    Unk_ov002_022046b0();
    virtual ~Unk_ov002_022046b0();

    s32 func_ov002_02202e60();
    s32 func_ov002_02202e84();
    s32 func_ov002_02202ea8();
    s32 func_ov002_02202ebc();
    s32 func_ov002_02202ed0();
    void func_ov002_02202ef4();
    void func_ov002_02202f00();
    void func_ov002_02202f0c();
    BOOL func_ov002_02202f18(s32 x, s32 y);
};

// Element of the 5-entry array at +0x28 of the menu (0x48 bytes)
class Unk_ov002_02204568 : public Unk_020e0488 {
public:
    Unk_ov002_02204568();
    virtual ~Unk_ov002_02204568();

    void func_ov002_022024f8(u32 a, u16 b, u8 c, u8 d);
    void func_ov002_02202520(s32 v);

    /* 0x40 */ u16 unk_40;
    /* 0x42 */ u8 unk_42;
    /* 0x43 */ u8 unk_43;
    /* 0x44 */ u8 unk_44;
};

struct Unk_ov002_022013ac_Rec {
    u8 unk_00[5];
    u8 unk_05[5];
    u8 unk_0a;
};

// Menu/selection object, vtable 0x02204558
class Unk_ov002_02204558 {
public:
    Unk_ov002_02204558();
    virtual ~Unk_ov002_02204558();

    void func_ov002_02202200(LabelBalloon *p);
    void func_ov002_02202278(s32 a, s32 b);
    void func_ov002_02202294(s32 a, s32 b);
    void func_ov002_0220229c(s32 a, s32 b);
    s32 func_ov002_022022e0(s32 a, s32 b);
    void func_ov002_02202310(s32 a, s32 b, const char *path);

    /* 0x04 */ u32 unk_04;
    /* 0x08 */ s32 unk_08;
    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ u32 unk_10;
    /* 0x14 */ u16 unk_14;
    /* 0x16 */ u8 unk_16;
    /* 0x17 */ u8 unk_17;
    /* 0x18 */ u8 unk_18;
    /* 0x19 */ u8 unk_19;
    /* 0x1a */ u8 unk_1a;
    /* 0x1b */ u8 unk_1b;
    /* 0x1c */ u8 unk_1c;
    /* 0x1d */ u8 unk_1d;
    /* 0x1e */ u8 unk_1e;
    /* 0x1f */ u8 unk_1f;
    /* 0x20 */ u8 unk_20;
    /* 0x21 */ volatile u8 unk_21;
    /* 0x22 */ u8 pad_22[2];
    /* 0x24 */ const char *unk_24;
    /* 0x28 */ Unk_ov002_02204568 unk_28[5];
    /* 0x190 */ Unk_ov002_02204738 unk_190;
    /* 0x200 */ Unk_ov002_02204770 unk_200;
    /* 0x2bc */ Unk_ov002_022044b4 unk_2bc;
    /* 0x2d8 */ u8 unk_2d8[0x19];
};

// Methods of the same object that the symbols list under another class name
class Unk_ov002_022013ac : public Unk_ov002_02204558 {
public:
    void func_ov002_022013ac(void *buf, u32 c);
    void func_ov002_022013c4(u32 m);
    void func_ov002_022013cc(u32 m);
    BOOL func_ov002_022013d4(u32 m);
    s32 func_ov002_022013e4(void *p, u32 id);
    s32 func_ov002_02201438(u32 id);
    u32 func_ov002_0220144c(u32 a, u32 b);
    u32 func_ov002_02201490();
    u32 func_ov002_02201494();
    s32 func_ov002_02201498(s32 v);
    s32 func_ov002_022014a4();
    s32 func_ov002_022014ac(s32 x, s32 y);
    s32 func_ov002_022014c0(s32 x, s32 y);
    s32 func_ov002_022014d4(s32 x, s32 y, s32 d);
    void func_ov002_02201534(Unk_ov002_022013ac_Rec *r);
    void func_ov002_0220160c(Unk_ov002_022013ac_Rec *r, s32 f);
    s32 func_ov002_02201680(Unk_ov002_022013ac_Rec *r, void *s, u32 v);
    void func_ov002_02201728();
    void func_ov002_0220175c();
    void func_ov002_02201784();
    BOOL func_ov002_022017a4();
    BOOL func_ov002_022017b4();
    void func_ov002_022017c4();
};

typedef Unk_ov002_022013ac Self;

struct Unk_ov002_022018e4_Arg {
    u8 v;
};

// Plain functions of the menu (they take the menu object first)
extern "C" {
void func_ov002_022018e4(s32 unused, s32 x, u32 id);
void func_ov002_02201938(s32 x, s32 y);
void func_ov002_02201958(s32 a, s32 b);
void func_ov002_02201984(s32 x, s32 y);
void func_ov002_022019a4(s32 a, s32 b);
BOOL func_ov002_022019d0(Self *self, s32 p, u8 *pos, u32 n);
BOOL func_ov002_02201a28(Self *self);
void func_ov002_02201a3c(Self *self, u32 x);
u8 func_ov002_02201a70(Self *self, s32 x);
void func_ov002_02201aa0(Self *self, s32 a, s32 b);
void func_ov002_02201ad8(Self *self, s32 x);
void func_ov002_02201b04(Self *self);
void func_ov002_02201b28(Self *self);
void func_ov002_02201b58(Self *self);
void func_ov002_02201c6c(Self *self);
s32 func_ov002_02201ca4(Self *self);
s32 func_ov002_02201cb0(Self *self);
void func_ov002_02201cb8(Self *self);
void func_ov002_02201d24(Self *self);
void func_ov002_02201df0(Self *self);
void func_ov002_02201e40(Self *self);
void func_ov002_02201ea4(Self *self);
void func_ov002_02201f18(Self *self);
void func_ov002_02202018(Self *self, u32 x);
void func_ov002_02202064(Self *self, s32 x);
void func_ov002_02202098(Self *self, s32 x);
void func_ov002_022020cc(Self *self, Unk_ov002_022018e4_Arg a, s32 x);
void func_ov002_022020fc(Self *self);
void func_ov002_02202144(Self *self);
void func_ov002_02202190(Self *self, s32 x, s32 y);
void func_ov002_022021d8(Self *self, s32 x, s32 y);
void func_ov002_022021f4(Self *self, s32 x, s32 y);
BOOL func_ov002_0220125c(u32 v);
BOOL func_ov002_0220126c(u32 v);
BOOL func_ov002_0220127c(u32 v);
BOOL func_ov002_0220128c(u32 v);
s32 func_ov002_022016cc(u8 *p);
void func_ov002_022016e4(u8 *p, u8 v);
BOOL func_ov002_02201700(u8 *p, u32 a, u32 b);
void func_ov002_02202dd4(s32 a, void *b);
void func_ov002_02202e48();
void func_ov002_02202e54();
void func_ov002_02203920();
}

static inline BOOL Unk_ov002_022009d4_Both() {
    if (gTouchHeld != 0 && gTouchChanged != 0) {
        return TRUE;
    }
    return FALSE;
}

Unk_ov002_022044d4::Unk_ov002_022044d4() {}

Unk_ov002_022044d4::~Unk_ov002_022044d4() {}

void Unk_ov002_02201240::func_ov002_022012f8()
{
    u32 prev = unk_0e;
    unk_0e = gPad[0] & 0xf0;
    u8 *p = &unk_0f;
    unk_0f |= (u8)(gPad[1] & 0xf0);
    u32 cur = unk_0e;
    if (cur == 0 || prev != cur) {
        unk_0f = gPad[1] & 0xf0;
        unk_0a = unk_04;
        unk_0c = unk_04;
    } else if (unk_0c > 0) {
        unk_0c--;
    } else {
        *p |= cur & 0xf0;
        unk_0a = unk_0a - unk_08;
        if (unk_0a < unk_06) {
            unk_0a = unk_06;
        }
        unk_0c = unk_0a;
    }
}

u32 Unk_ov002_02201240::func_ov002_022012ec()
{
    unk_10 = unk_0f;
    unk_0f = 0;
    return unk_10;
}

BOOL Unk_ov002_02201240::func_ov002_022012d8()
{
    if (unk_10 & 0x40) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov002_02201240::func_ov002_022012c4()
{
    if (unk_10 & 0x80) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov002_02201240::func_ov002_022012b0()
{
    if (unk_10 & 0x20) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov002_02201240::func_ov002_0220129c()
{
    if (unk_10 & 0x10) {
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL func_ov002_0220128c(u32 v)
{
    if (v & 0x40) {
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL func_ov002_0220127c(u32 v)
{
    if (v & 0x80) {
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL func_ov002_0220126c(u32 v)
{
    if (v & 0x20) {
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL func_ov002_0220125c(u32 v)
{
    if (v & 0x10) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov002_02201240::func_ov002_02201240(s32 a, s32 b, s32 c)
{
    unk_0e = 0;
    unk_0f = 0;
    unk_10 = 0;
    unk_0a = 0;
    unk_0c = 0;
    unk_04 = a;
    unk_06 = b;
    unk_08 = c;
}

extern "C" void *_ZN18Unk_ov002_022044c4C2Ev(Unk_ov002_022044c4 *self) {
    *(void **)self = _ZTV18Unk_ov002_022044c4 + 8;
    return self;
}

Unk_ov002_022044c4::~Unk_ov002_022044c4() {}

void Unk_ov002_022044c4::func_ov002_022011ec(u32 n)
{
    unk_08 = 0x1000;
    unk_04 = 0x1000 / n;
}

BOOL Unk_ov002_022044c4::func_ov002_022011cc()
{
    s32 a = unk_08;
    if (a == 0) {
        return TRUE;
    }
    s32 b = unk_04;
    if (a > b) {
        unk_08 = a - b;
    } else {
        unk_08 = 0;
    }
    return FALSE;
}

s32 Unk_ov002_022044c4::func_ov002_022011b4(s32 v)
{
    return (v * func_01ffcb0c(unk_08, unk_08)) >> 12;
}

s32 Unk_ov002_022044c4::func_ov002_022011ac(s32 v)
{
    return (v * unk_08) >> 12;
}

Unk_ov002_022044b4::Unk_ov002_022044b4() {}

Unk_ov002_022044b4::~Unk_ov002_022044b4() {}

s32 Unk_ov002_022044b4::func_ov002_02201140()
{
    switch (unk_18) {
    case 0:
        return unk_0c;
    case 1:
        return -unk_0c;
    }
    return 0;
}

s32 Unk_ov002_022044b4::func_ov002_02201124()
{
    switch (unk_18) {
    case 2:
        return -unk_0c;
    case 3:
        return unk_0c;
    }
    return 0;
}

void Unk_ov002_022044b4::func_ov002_022010c4(s32 mode)
{
    unk_0c = func_ov002_022011b4(unk_10);
    switch (mode) {
    case 0:
        if (unk_0c > unk_14) {
            ((Unk_ov002_02201194 *)this)->func_ov002_02200d08(2);
        } else {
            Gfx2d_DisableSubWindows(1);
            Gfx2d_SetSubWinOutPlanes(0x1f);
        }
        break;
    case 1:
        if (unk_0c > unk_14) {
            ((Unk_ov002_02201194 *)this)->func_ov002_02200d08(0);
        } else {
            Gfx2d_DisableMainWindows(1);
            Gfx2d_SetMainWinOutPlanes(0x1f);
        }
        break;
    }
}

void Unk_ov002_022044b4::func_ov002_02201090(s32 mode)
{
    unk_0c = func_ov002_022011b4(unk_10);
    switch (mode) {
    case 0:
        ((Unk_ov002_02201194 *)this)->func_ov002_02200d08(2);
        break;
    case 1:
        ((Unk_ov002_02201194 *)this)->func_ov002_02200d08(0);
        break;
    }
}

BOOL Unk_ov002_022044b4::func_ov002_0220102c(s32 mode)
{
    if (func_ov002_022011cc()) {
        unk_0c = 0;
        switch (mode) {
        case 0:
            Gfx2d_DisableSubWindows(1);
            Gfx2d_SetSubWinOutPlanes(0x1f);
            break;
        case 1:
            Gfx2d_DisableMainWindows(1);
            Gfx2d_SetMainWinOutPlanes(0x1f);
            break;
        }
        return TRUE;
    }
    switch (unk_18) {
    case 0:
    case 1:
        func_ov002_022010c4(mode);
        break;
    default:
        func_ov002_02201090(mode);
        break;
    }
    return FALSE;
}

void Unk_ov002_022044b4::func_ov002_02200fe0(s32 mode)
{
    unk_0c = unk_10 - func_ov002_022011ac(unk_10);
    if (unk_0c > unk_14) {
        switch (mode) {
        case 0:
            Gfx2d_EnableSubWindows(1);
            ((Unk_ov002_02201194 *)this)->func_ov002_02200d08(2);
            break;
        case 1:
            Gfx2d_EnableMainWindows(1);
            ((Unk_ov002_02201194 *)this)->func_ov002_02200d08(0);
            break;
        }
    }
}

// ---------------------------------------------------------------- Unk_ov002_022044e4

void Unk_ov002_022044b4::func_ov002_02200fa8(s32 mode)
{
    unk_0c = unk_10 - func_ov002_022011ac(unk_10);
    switch (mode) {
    case 0:
        ((Unk_ov002_02201194 *)this)->func_ov002_02200d08(2);
        break;
    case 1:
        ((Unk_ov002_02201194 *)this)->func_ov002_02200d08(0);
        break;
    }
}

BOOL Unk_ov002_02201194::func_ov002_02200f54(s32 a) {
    if (func_ov002_022011cc()) {
        switch (a) {
        case 0:
            Gfx2d_DisableSubWindows(1);
            break;
        case 1:
            Gfx2d_DisableMainWindows(1);
            break;
        }
        return TRUE;
    }
    switch (unk_18) {
    case 0:
    case 1:
        func_ov002_02200fe0(a);
        break;
    default:
        func_ov002_02200fa8(a);
        break;
    }
    return FALSE;
}

void Unk_ov002_02201194::func_ov002_02200f18(s32 a, s32 b, s32 mode, s32 dist) {
    func_ov002_02200e18(b, mode, dist);
    Gfx2d_EnableSubWindows(1);
    Gfx2d_SetSubWin0Planes(0x1f, 1);
    Gfx2d_SetSubWinOutPlanes(~a & 0x1f);
    func_ov002_02200d08(2);
}

void Unk_ov002_02201194::func_ov002_02200edc(s32 a, s32 b, s32 mode, s32 dist) {
    func_ov002_02200dd8(b, mode, dist);
    Gfx2d_EnableSubWindows(1);
    Gfx2d_SetSubWin0Planes(0x1f, 1);
    Gfx2d_SetSubWinOutPlanes(~a & 0x1f);
    func_ov002_02200d08(2);
}

void Unk_ov002_02201194::func_ov002_02200ea4(s32 a, s32 b, s32 mode, s32 dist) {
    func_ov002_02200e18(b, mode, dist);
    Gfx2d_EnableMainWindows(1);
    Gfx2d_SetMainWin0Planes(0x1f);
    Gfx2d_SetMainWinOutPlanes(~a & 0x1f);
    func_ov002_02200d08(0);
}

void Unk_ov002_02201194::func_ov002_02200e58(s32 a, s32 b, s32 mode, s32 dist) {
    func_ov002_02200dd8(b, mode, dist);
    Gfx2d_EnableMainWindows(1);
    Gfx2d_SetMainWin0Planes(0x1f);
    if (Gfx2d_GetMainWindows() & 2) {
        Gfx2d_RemoveMainWinOutPlanes(a);
    } else {
        Gfx2d_SetMainWinOutPlanes(~a & 0x1f);
    }
    func_ov002_02200d08(0);
}

void Unk_ov002_02201194::func_ov002_02200e18(s32 a, s32 mode, s32 dist) {
    unk_18 = mode;
    unk_14 = dist;
    func_ov002_022011ec(a);
    switch (unk_18) {
    case 0:
    case 1:
        unk_0c = 0xc0;
        unk_10 = 0xc0;
        break;
    case 2:
    case 3:
        unk_0c = 0x100;
        unk_10 = 0x100;
        break;
    }
}

void Unk_ov002_02201194::func_ov002_02200dd8(s32 a, s32 mode, s32 dist) {
    unk_18 = mode;
    unk_14 = dist;
    func_ov002_022011ec(a);
    unk_0c = 0;
    switch (unk_18) {
    case 0:
    case 1:
        unk_10 = 0xc0;
        break;
    case 2:
    case 3:
        unk_10 = 0x100;
        break;
    }
}

void Unk_ov002_02201194::func_ov002_02200d78(s32 a, s32 b, s32 c) {
    switch (unk_18) {
    case 0:
        Gfx2d_SetLayerOffset(a, -b, -(unk_0c + c));
        break;
    case 1:
        Gfx2d_SetLayerOffset(a, -b, unk_0c - c);
        break;
    case 2:
        Gfx2d_SetLayerOffset(a, unk_0c - b, -c);
        break;
    case 3:
        Gfx2d_SetLayerOffset(a, -(unk_0c + b), -c);
        break;
    }
}

void Unk_ov002_02201194::func_ov002_02200d08(s32 a) {
    s32 x0 = 0;
    s32 y0 = 0;
    s32 x1 = 0xff;
    s32 y1 = 0xc0;
    switch (unk_18) {
    case 0:
        y0 = unk_0c - unk_14;
        if (y0 < 0) {
            y0 = x0;
        }
        break;
    case 1:
        y1 = unk_14 + 0xc0 - unk_0c;
        if (y1 > 0xbf) {
            y1 = 0xbf;
        }
        break;
    case 2:
        x1 = 0xff - unk_0c;
        if (x1 < 1) {
            x1 = 1;
        }
        break;
    case 3:
        x0 = unk_0c;
        if (x0 > 0xfe) {
            x0 = 0xfe;
        }
        break;
    }
    Gfx2d_SetWindowRect(a, x0, y0, x1, y1);
}

// ---------------------------------------------------------------- Unk_ov002_02201194

void Unk_ov002_02201194::func_ov002_02200d04(s32 v) { unk_10 = v; }

extern "C" void *_ZN18Unk_ov002_022044e4C2Ev(Unk_ov002_022044e4 *self) {
    _ZN8ProcBaseC2Ev(self);
    *(void *volatile *)self = _ZTV8GameProc + 8;
    *(void **)self = _ZTV18Unk_ov002_022044e4 + 8;
    _ZN18Unk_ov002_022044d4C1Ev(&self->unk_50);
    self->unk_64 = 0;
    self->unk_68 = 0;
    _ZN18Unk_ov002_022044b4C1Ev(&self->unk_70);
    return self;
}

Unk_ov002_022044e4::~Unk_ov002_022044e4() {}

BOOL Unk_ov002_022044e4::vfunc_04() {
    if (!ProcBase::vfunc_04()) {
        return FALSE;
    }
    unk_90 = *(s32 *)&unk_04[4];
    unk_6c = this;
    ((Unk_ov002_02201240 *)&unk_50)->func_ov002_02201240(8, 1, 7);
    return TRUE;
}

void Unk_ov002_022044e4::postCreate(s32 a) {
    MenuCtrl_AddOpenMenu(&unk_64);
    if (a == 2) {
        void *p = ProcBase_GetParent(this);
        if (p != 0) {
            u8 *q = (u8 *)p;
            ProcBase_SetExecutePriority(this, (u16)(*(u16 *)(q + 0x34) + 1));
            ProcBase_SetDrawPriority(this, (u16)(*(u16 *)(q + 0x44) + 1));
        }
    }
    _ZN8GameProc10postCreateEv(this, a);
}

BOOL Unk_ov002_022044e4::preDelete() {
    if (ProcBase::preDelete()) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov002_022044e4::vfunc_14(s32 a) {
    if (a == 2) {
        MenuCtrl_RemoveOpenMenu(&unk_64);
    }
    return _ZN8ProcBase8vfunc_14Ev(this, a);
}

BOOL Unk_ov002_022044e4::preExecute() {
    if (ProcBase::preExecute()) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov002_022044e4::vfunc_20() { return ProcBase::vfunc_20(); }

BOOL Unk_ov002_022044e4::vfunc_48() {
    if (MenuScreen_IsOpen()) {
        func_ov002_02200a60(1);
    }
    if (MenuScreen_IsClosed()) {
        MenuScreen_ClearState();
        func_ov002_02200a60(5);
    }
    return TRUE;
}

BOOL Unk_ov002_022044e4::vfunc_4c() { return TRUE; }

BOOL Unk_ov002_022044e4::vfunc_50() { return TRUE; }

BOOL Unk_ov002_022044e4::vfunc_54() { return TRUE; }

BOOL Unk_ov002_022044e4::vfunc_58() { return TRUE; }

BOOL Unk_ov002_022044e4::vfunc_5c() { return TRUE; }

BOOL Unk_ov002_022044e4::onExecute() {
    static Unk_ov002_02200a68_Fn tbl[6] = {
        (Unk_ov002_02200a68_Fn)&Unk_ov002_022044e4::vfunc_48,
        (Unk_ov002_02200a68_Fn)&Unk_ov002_022044e4::vfunc_4c,
        (Unk_ov002_02200a68_Fn)&Unk_ov002_022044e4::vfunc_50,
        (Unk_ov002_02200a68_Fn)&Unk_ov002_022044e4::vfunc_54,
        (Unk_ov002_02200a68_Fn)&Unk_ov002_022044e4::vfunc_58,
        (Unk_ov002_02200a68_Fn)&Unk_ov002_022044e4::vfunc_5c,
    };
    ((Unk_ov002_02201240 *)&unk_50)->func_ov002_022012f8();
    (this->*tbl[unk_8f])();
    return TRUE;
}

void Unk_ov002_022044e4::func_ov002_02200a60(u8 v) { unk_8f = v; }

void Unk_ov002_022044e4::func_ov002_02200a58(u8 v) { unk_8d = v; }

void Unk_ov002_022044e4::func_ov002_02200a50(u8 v) { unk_8c = v; }

BOOL Unk_ov002_022044e4::func_ov002_02200a14(s32 a) {
    if ((gPad[1] & 0xfff) != 0) {
        MenuCtrl_SetButtons();
        Snd_PlaySe(0x866);
        if (a != 0) {
            Snd_PlaySe(0x3b);
        }
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov002_022044e4::func_ov002_022009d4() {
    if (Unk_ov002_022009d4_Both()) {
        MenuCtrl_SetTouch();
        Snd_PlaySe(0x866);
        return TRUE;
    }
    return FALSE;
}

u32 Unk_ov002_022044e4::func_ov002_022009c8() { return ((Unk_ov002_02201240 *)&unk_50)->func_ov002_022012ec(); }

BOOL Unk_ov002_022044e4::func_ov002_022009bc() { return ((Unk_ov002_02201240 *)&unk_50)->func_ov002_022012d8(); }

BOOL Unk_ov002_022044e4::func_ov002_022009b0() { return ((Unk_ov002_02201240 *)&unk_50)->func_ov002_022012c4(); }

BOOL Unk_ov002_022044e4::func_ov002_022009a4() { return ((Unk_ov002_02201240 *)&unk_50)->func_ov002_022012b0(); }

BOOL Unk_ov002_022044e4::func_ov002_02200998() { return ((Unk_ov002_02201240 *)&unk_50)->func_ov002_0220129c(); }

void Unk_ov002_022044e4::func_ov002_02200980() { ((Unk_ov002_02201240 *)&unk_50)->func_ov002_02201240(8, 1, 7); }

void Unk_ov002_022044e4::func_ov002_02200970(s32 a, s32 b, s32 c) { ((Unk_ov002_02201240 *)&unk_50)->func_ov002_02201240(a, b, c); }

void *Unk_ov002_022044e4::operator new(unsigned long size) {
    void *p = Heap_AllocTail(data_021c6210, size);
    if (p == 0) {
        return 0;
    }
    func_0212899c(p, 0, size);
    return p;
}

void Unk_ov002_022044e4::operator delete(void *p) { Heap_Free(data_021c6210, p); }

s32 Unk_ov002_022044e4::func_ov002_02200920() { return ((Unk_ov002_02201194 *)&unk_70)->func_ov002_02201140(); }

s32 Unk_ov002_022044e4::func_ov002_02200914() { return ((Unk_ov002_02201194 *)&unk_70)->func_ov002_02201124(); }

BOOL Unk_ov002_022044e4::func_ov002_02200908(s32 a) { return ((Unk_ov002_02201194 *)&unk_70)->func_ov002_0220102c(a); }

BOOL Unk_ov002_022044e4::func_ov002_022008fc(s32 a) { return ((Unk_ov002_02201194 *)&unk_70)->func_ov002_02200f54(a); }

void Unk_ov002_022044e4::func_ov002_022008e0(s32 a, s32 b, s32 mode, s32 dist) {
    if (b == 0) {
        b = 4;
    }
    ((Unk_ov002_02201194 *)&unk_70)->func_ov002_02200f18(a, b, mode, dist);
}

void Unk_ov002_022044e4::func_ov002_022008c4(s32 a, s32 b, s32 mode, s32 dist) {
    if (b == 0) {
        b = 3;
    }
    ((Unk_ov002_02201194 *)&unk_70)->func_ov002_02200edc(a, b, mode, dist);
}

void Unk_ov002_022044e4::func_ov002_022008a8(s32 a, s32 b, s32 mode, s32 dist) {
    if (b == 0) {
        b = 4;
    }
    ((Unk_ov002_02201194 *)&unk_70)->func_ov002_02200ea4(a, b, mode, dist);
}

void Unk_ov002_022044e4::func_ov002_0220088c(s32 a, s32 b, s32 mode, s32 dist) {
    if (b == 0) {
        b = 3;
    }
    ((Unk_ov002_02201194 *)&unk_70)->func_ov002_02200e58(a, b, mode, dist);
}

void Unk_ov002_022044e4::func_ov002_02200874(s32 a, s32 mode) {
    if (a == 0) {
        a = 4;
    }
    ((Unk_ov002_02201194 *)&unk_70)->func_ov002_02200e18(a, mode, 0x30);
}

void Unk_ov002_022044e4::func_ov002_0220085c(s32 a, s32 mode) {
    if (a == 0) {
        a = 3;
    }
    ((Unk_ov002_02201194 *)&unk_70)->func_ov002_02200dd8(a, mode, 0x30);
}

void Unk_ov002_022044e4::func_ov002_02200850(s32 v) { ((Unk_ov002_02201194 *)&unk_70)->func_ov002_02200d04(v); }

void Unk_ov002_022044e4::func_ov002_02200840(s32 a, s32 b, s32 c) { ((Unk_ov002_02201194 *)&unk_70)->func_ov002_02200d78(a, b, c); }
