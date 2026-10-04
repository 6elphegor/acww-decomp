#include "types.h"
#include "text/Unk_02050288.h"
#include "gfx/SpriteAnim.h"
#include "ui/UiWidget.h"

extern "C" {
void Oam_DrawCell(u32 a, void *h, s32 x, s32 y, s32 s0, s32 s1, s32 s2, s32 s3, s32 s4, s32 s5, s32 s6, s32 s7);
}

extern "C" {
s32 TalkRequest_IsActive();
}

extern "C" {
s32 Scene_GetCurrent();
}

extern "C" {
s32 PlayerActor_GetAction(s32 v);
}

extern "C" {
void DC_FlushRange(void *p, u32 size);
}

extern "C" {
void GX_LoadOBJPltt(void *p, u32 src, u32 size);
}

extern "C" {
void GXS_LoadOBJPltt(void *p, u32 src, u32 size);
}

extern "C" {
TextLabel *MsgTextLabel_CreateVram(u32 a, s32 b, s32 c);
}

extern "C" {
void MsgTextLabel_Destroy(TextLabel *obj);
}

extern "C" {
void func_020a7bd8(void *p);
}

extern s32 gGfxMainOnTop;
extern u8 data_020d4694[];
extern u8 data_020d468c[];
struct Unk_0208e13c_Rec { u32 frames; u32 frameCount; };
extern Unk_0208e13c_Rec data_020d5b0c[];
extern u16 sLabelButtonColorCache[];
extern u8 sLabelButtonKindTextColors[];
extern u32 sLabelButtonKindLabelVram[];
extern u8 sLabelButtonKindSeqOffsets[];
extern s32 sLabelButtonStateSeqIds[];
extern s32 sLabelButtonStatePlayOnce[];



class ScrollKnob : public UiWidget {
public:
    ScrollKnob(u32 flag);
    virtual ~ScrollKnob();
    virtual void draw();
    virtual void vfunc_0c();

    void setState();
    void setPriority(s32 v);
    void moveTo(s32 x, s32 y);

    /* 0x0c */ s32 layer1;
    /* 0x10 */ s32 posY;
    /* 0x14 */ SpriteAnim layerAnim1;
    /* 0x28 */ SpriteAnim priority;
    /* 0x3c */ s32 state;
    /* 0x40 */ u8 anim;
    /* 0x44 */ s32 unk_44;
};

class HudUnkIcon : public UiWidget {
public:
    HudUnkIcon();
    virtual ~HudUnkIcon();
    virtual void draw();
    virtual void vfunc_0c();

    void updateHiding();
    void updateShown();
    void updateAppearing();
    void updateHidden();

    /* 0x0c */ SpriteAnim anim;
    /* 0x20 */ s32 state;
};

HudUnkIcon sHudUnkIcon;

class LabelButton : public UiWidget {
public:
    LabelButton(u32 flag);
    virtual ~LabelButton();
    virtual void draw();
    virtual void vfunc_0c();

    void syncTextColor();
    void freeLabel();
    void createLabel();
    BOOL isAnimDone();
    s32 getState();
    void setState(s32 v);
    void getAnimOffset(s32 *outx, s32 *outy);
    void setPos(s32 x, s32 y);
    void setLabelText();
    void showLayer2();
    void hideLayer2();
    void enableObjWindow();

    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ s32 palette;
    /* 0x18 */ s32 kind;
    /* 0x1c */ SpriteAnim layer1;
    /* 0x30 */ SpriteAnim layer2;
    /* 0x44 */ s32 state;
    /* 0x48 */ TextLabel *label;
    /* 0x4c */ StrBuf text;
    /* 0x50 */ u32 unk_50[6];
    /* 0x68 */ u16 textColor;
    /* 0x6a */ u8 onBufferA;
    /* 0x6b */ u8 objWindow;
    /* 0x6c */ u8 layer2Hidden;
    /* 0x6d */ u8 textColorDirty;
};
// forward declarations
extern "C" void HudUnkIcon_Reset();
extern "C" void HudUnkIcon_Exit();
extern "C" void HudUnkIcon_Update();
extern "C" void HudUnkIcon_Draw();

HudUnkIcon::HudUnkIcon() {
    state = 0;
}

HudUnkIcon::~HudUnkIcon() {
}

void HudUnkIcon::draw() {
    if (state != 0) {
        void *h = anim.getCell();
        s32 x = getOriginX() + anim.getFrameX(-1);
        s32 y = getOriginY() + anim.getFrameY(-1);
        Oam_DrawCell(0, h, x, y, -1, -1, 0x1000, 0x1000, 0, -1, 0, 0);
    }
}

void HudUnkIcon::vfunc_0c() {
    typedef void (HudUnkIcon::*Fn)();
    static Fn tbl[4] = {&HudUnkIcon::updateHidden, &HudUnkIcon::updateAppearing, &HudUnkIcon::updateShown, &HudUnkIcon::updateHiding};
    (this->*tbl[state])();
}

extern "C" void HudUnkIcon_Reset() { sHudUnkIcon.state = 0; }

extern "C" void HudUnkIcon_Exit() {}

extern "C" void HudUnkIcon_Update() { sHudUnkIcon.vfunc_0c(); }

extern "C" void HudUnkIcon_Draw() { sHudUnkIcon.draw(); }

