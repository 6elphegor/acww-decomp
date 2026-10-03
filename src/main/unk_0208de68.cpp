#include "types.h"
#include "text/Unk_02050288.h"

extern "C" {
void Oam_DrawCell(u32 a, void *h, s32 x, s32 y, s32 s0, s32 s1, s32 s2, s32 s3, s32 s4, s32 s5, s32 s6, s32 s7);
}

extern "C" {
s32 func_0203e2f4();
}

extern "C" {
s32 func_020b50e8();
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

extern s32 data_021c5384;
extern u8 data_020d4694[];
extern u8 data_020d468c[];
struct Unk_0208e13c_Rec { u32 unk_00; u32 unk_04; };
extern Unk_0208e13c_Rec data_020d5b0c[];
extern u16 sLabelButtonColorCache[];
extern u8 data_020cf6ec[];
extern u32 data_020cf6f0[];
extern u8 data_020cf6e8[];
extern s32 data_020cf708[];
extern s32 data_020cf6f8[];

class SpriteAnim {
public:
    SpriteAnim();
    ~SpriteAnim();
    void update();
    void restart();
    BOOL isFinished();
    s32 getFrameY(s32 v);
    s32 getFrameX(s32 v);
    void *getCell();
    void setSpeed(s32 v);
    void setPlayOnce(s32 v);
    void setSeq(void *v);

    /* 0x00 */ u8 unk_00[0x14];
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

class ScrollKnob : public UiWidget {
public:
    ScrollKnob(u32 flag);
    virtual ~ScrollKnob();
    virtual void draw();
    virtual void vfunc_0c();

    void setState();
    void setPriority(s32 v);
    void moveTo(s32 x, s32 y);

    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ SpriteAnim unk_14;
    /* 0x28 */ SpriteAnim unk_28;
    /* 0x3c */ s32 unk_3c;
    /* 0x40 */ u8 unk_40;
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

    /* 0x0c */ SpriteAnim unk_0c;
    /* 0x20 */ s32 unk_20;
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
    /* 0x14 */ s32 unk_14;
    /* 0x18 */ s32 unk_18;
    /* 0x1c */ SpriteAnim unk_1c;
    /* 0x30 */ SpriteAnim unk_30;
    /* 0x44 */ s32 unk_44;
    /* 0x48 */ TextLabel *unk_48;
    /* 0x4c */ StrBuf unk_4c;
    /* 0x50 */ u32 unk_50[6];
    /* 0x68 */ u16 unk_68;
    /* 0x6a */ u8 unk_6a;
    /* 0x6b */ u8 unk_6b;
    /* 0x6c */ u8 unk_6c;
    /* 0x6d */ u8 unk_6d;
};
// forward declarations
extern "C" void HudUnkIcon_Reset();
extern "C" void HudUnkIcon_Exit();
extern "C" void HudUnkIcon_Update();
extern "C" void HudUnkIcon_Draw();

HudUnkIcon::HudUnkIcon() {
    unk_20 = 0;
}

HudUnkIcon::~HudUnkIcon() {
}

void HudUnkIcon::draw() {
    if (unk_20 != 0) {
        void *h = unk_0c.getCell();
        s32 x = getOriginX() + unk_0c.getFrameX(-1);
        s32 y = getOriginY() + unk_0c.getFrameY(-1);
        Oam_DrawCell(0, h, x, y, -1, -1, 0x1000, 0x1000, 0, -1, 0, 0);
    }
}

void HudUnkIcon::vfunc_0c() {
    typedef void (HudUnkIcon::*Fn)();
    static Fn tbl[4] = {&HudUnkIcon::updateHidden, &HudUnkIcon::updateAppearing, &HudUnkIcon::updateShown, &HudUnkIcon::updateHiding};
    (this->*tbl[unk_20])();
}

extern "C" void HudUnkIcon_Reset() { sHudUnkIcon.unk_20 = 0; }

extern "C" void HudUnkIcon_Exit() {}

extern "C" void HudUnkIcon_Update() { sHudUnkIcon.vfunc_0c(); }

extern "C" void HudUnkIcon_Draw() { sHudUnkIcon.draw(); }

