#include "types.h"
#include "Unk_020d8c7c.h"
#include "text/Unk_02050288.h"

extern "C" {
void Oam_DrawCell(u32 a, void *h, s32 x, s32 y, s32 s0, s32 s1, s32 s2, s32 s3, s32 s4, s32 s5, s32 s6, s32 s7);
}

extern "C" {
BOOL StrBuf_Copy(StrBuf *dst, StrBuf *src);
}

extern "C" {
void StrBuf_Clear(StrBuf *buf);
}

extern "C" {
void HudUnkSlideIcon_Draw();
}

extern "C" {
void HudLinkIcon_Draw();
}

extern "C" {
void Hud_Draw();
}

extern "C" {
void HudUnkIcon_Draw();
}

extern "C" {
void HudLinkIcon_Update();
}

extern "C" {
void HudUnkSlideIcon_Update();
}

extern "C" {
void HudUnkIcon_Update();
}

extern "C" {
void Hud_Update();
}

extern "C" {
void Hud_Exit();
}

extern "C" {
void HudUnkIcon_Exit();
}

extern "C" {
void HudUnkSlideIcon_Exit();
}

extern "C" {
void HudLinkIcon_Exit();
}

extern "C" {
void HudLinkIcon_Reset();
}

extern "C" {
void HudUnkSlideIcon_Reset();
}

extern "C" {
void HudUnkIcon_Reset();
}

extern "C" {
void Hud_Init();
}

extern "C" {
BOOL InputMode_IsButtons();
}

extern "C" {
BOOL InputMode_IsTouch();
}

extern "C" {
void HudObjGfx_LoadCameraButton(u32 a, u32 b, u32 c);
}

extern "C" {
void HudObjGfx_LoadKind(u32 a, u32 b);
}

extern "C" {
void HudObjGfx_SetCountdownVariant(u32 a);
}

extern "C" {
s32 Hud_GetSceneHudKind();
}

extern "C" {
BOOL HudObjGfx_GetCountdownVariant();
}

extern "C" {
BOOL func_0208c094(void *p);
}

extern "C" {
void func_0208c0c4(void *p);
}

extern "C" {
BOOL func_0208c0b4(void *p);
}

extern "C" {
void func_0208c0cc(void *p);
}

extern "C" {
void func_0208cd90(void *p);
}

extern "C" {
void func_0208cd88(void *p);
}

extern "C" {
BOOL func_0208cd78(void *p);
}

extern "C" {
void func_0208aa50(void *p);
}

extern "C" {
void func_0208aa48(void *p);
}

extern "C" {
BOOL func_0208aa38(void *p);
}

extern "C" {
void func_0208b038(void *p);
}

extern "C" {
BOOL func_0208b018(void *p);
}

extern "C" {
void func_0208b040(void *p);
}

extern u8 gFieldSceneKind;

class SpriteAnim {
public:
    SpriteAnim();
    ~SpriteAnim();
    void update();
    s32 getFrameY(s32 v);
    s32 getFrameX(s32 v);
    void *getCell();

    /* 0x00 */ u8 unk_00[0x14];
};

class MsgStringBase {
public:
    virtual ~MsgStringBase() {}
    virtual u32 vfunc_08() = 0;
    virtual u8 *vfunc_0c() = 0;
};

class LabelBalloonText : public MsgStringBase {
public:
    LabelBalloonText();
    virtual ~LabelBalloonText();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();

    /* 0x04 */ u8 unk_04[0x24];
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

    void updateClosing();
    void updateOpen();
    void updateOpening();
    void enterOpening();
    void updateClosed();
    void enterClosed();
    BOOL requestClose();
    BOOL requestOpen();
    void refreshText(s32 flag);
    void setClampToScreen(u8 v);
    void enableCenterText();
    void setText(StrBuf *src);
    void setPos(s32 a, s32 b);
    void hideLayer2();
    void showLayer2();
    void setPopUpward();
    void setPopDownward();
    void disablePopAnim();
    void disableObjWindow();
    void enableObjWindow();
    void updateScreenClamp();
    void freeLabels();
    void createLabels();
    void fitToText();
    void initAnims();
    s32 getDrawY();
    s32 getDrawX();

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
    /* 0x54 */ u8 unk_54;
    /* 0x55 */ u8 unk_55;
    /* 0x56 */ u8 unk_56;
    /* 0x57 */ u8 unk_57;
    /* 0x58 */ u8 unk_58;
    /* 0x59 */ u8 unk_59;
    /* 0x5a */ u8 unk_5a;
    /* 0x5b */ u8 unk_5b;
    /* 0x5c */ u8 unk_5c;
    /* 0x60 */ LabelBalloonText unk_60;
    /* 0x88 */ LabelBalloonText unk_88;
    /* 0xb0 */ TextLabel *unk_b0;
    /* 0xb4 */ TextLabel *unk_b4;
    /* 0xb8 */ s32 unk_b8;
};

// Vtable 0x020e0f80, created by the factory HudProc_Create
class HudProc : public GameProc {
public:
    HudProc();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL onExecute();
    virtual BOOL onDraw();
    virtual ~HudProc();
};

// State machine (methods are state handlers in a member-pointer table at 0x020e0dcc)
class HudControllerStates {
public:
    void updateInputLayout();
    void enterModeForRoom();
    void updateSharedPanels();
    void updateHidden();
    void enterHidden();
    void updateWallet();
    void enterWallet();
    void updateCameraButton();
    void enterCameraButton();
    void updateCountdown();
    void func_0208a328();
    void func_0208a3bc();
    void func_0208a3ec();

    /* 0x000 */ s32 unk_00;
    /* 0x004 */ s32 unk_04;
    /* 0x008 */ u32 unk_08[0x32];
    /* 0x0d0 */ u32 unk_d0[0x35];
    /* 0x1a4 */ u32 unk_1a4[0x40];
    /* 0x2a4 */ u32 unk_2a4[0x1c];
    /* 0x314 */ u8 unk_314;
    /* 0x315 */ u8 unk_315;
    /* 0x316 */ u8 unk_316;
};

static inline BOOL Unk_0208a150_IsOne(u8 v) { return v == 1 ? TRUE : FALSE; }

typedef void (LabelBalloon::*Unk_020e0d98_Fn)();

UiWidget::UiWidget() {
    unk_04 = 0x80;
    unk_08 = 0x60;
}

UiWidget::~UiWidget() {}

