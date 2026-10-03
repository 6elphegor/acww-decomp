#include "types.h"

extern "C" {
void Oam_DrawCell(u32 a, void *h, s32 x, s32 y, s32 s0, s32 s1, s32 s2, s32 s3, s32 s4, s32 s5, s32 s6, s32 s7);
s32 TalkRequest_IsActive();
s32 func_020b50e8();
s32 PlayerActor_GetAction(s32 v);
}

extern s32 data_021c5384;
extern u8 data_020d4694[];
extern u8 data_020d468c[];

struct SpriteAnimSeq;

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
    void setSeq(SpriteAnimSeq *v);

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

    void setState(s32 idx);
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

class HudUnkIcon {
public:
    void updateHiding();
    void updateShown();
    void updateAppearing();
    void updateHidden();

    /* 0x00 */ u8 unk_00[0x0c];
    /* 0x0c */ SpriteAnim unk_0c;
    /* 0x20 */ s32 unk_20;
};

extern "C" BOOL HudUnkIcon_CanShow();

void HudUnkIcon::updateHidden() {
    if (HudUnkIcon_CanShow() != 0) {
        unk_20 = 1;
        unk_0c.setSeq((SpriteAnimSeq *)data_020d468c);
        unk_0c.setPlayOnce(1);
        unk_0c.restart();
    }
}

void HudUnkIcon::updateAppearing() {
    unk_0c.update();
    if (unk_0c.isFinished()) {
        unk_20 = 2;
    }
}

void HudUnkIcon::updateShown() {
    if (HudUnkIcon_CanShow() == 0) {
        unk_20 = 3;
        unk_0c.setSeq((SpriteAnimSeq *)data_020d4694);
        unk_0c.setPlayOnce(1);
        unk_0c.restart();
    }
}

void HudUnkIcon::updateHiding() {
    unk_0c.update();
    if (unk_0c.isFinished()) {
        unk_20 = 0;
    }
}

extern "C" BOOL HudUnkIcon_CanShow() {
    BOOL a, b, c;
    long d, e;
    s32 v;
    a = data_021c5384 == 0 ? TRUE : FALSE;
    b = TalkRequest_IsActive() == 0 ? TRUE : FALSE;
    c = func_020b50e8() == 6 ? TRUE : FALSE;
    v = PlayerActor_GetAction(4);
    d = (u32)(v - 8) <= 7 ? TRUE : FALSE;
    e = (u32)(v - 0x24) <= 8 ? TRUE : FALSE;
    if (a && b && !c && !d && !e) {
        return TRUE;
    }
    return FALSE;
}

ScrollKnob::ScrollKnob(u32 flag) : unk_0c(0), unk_10(0) {
    unk_3c = 0;
    unk_40 = flag;
    unk_44 = -1;
    setState(0);
}

ScrollKnob::~ScrollKnob() {
}

void ScrollKnob::draw() {
    if (unk_3c != 0) {
        void *h0 = unk_14.getCell();
        void *h1 = unk_28.getCell();
        s32 a = unk_14.getFrameX(-1);
        s32 b = unk_14.getFrameY(-1);
        s32 c = unk_28.getFrameX(-1);
        s32 d = unk_28.getFrameY(-1);
        s32 bx = unk_0c + getOriginX();
        s32 by = unk_10 + getOriginY();
        if (unk_40 != 0) {
            Oam_DrawCell(0, h0, bx + a, by + b, -1, unk_44, 0x1000, 0x1000, 0, -1, 0, 0);
            Oam_DrawCell(0, h1, bx + c, by + d, -1, unk_44, 0x1000, 0x1000, 0, -1, 0, 0);
        } else {
            Oam_DrawCell(1, h0, bx + a, by + b, -1, unk_44, 0x1000, 0x1000, 0, -1, 0, 0);
            Oam_DrawCell(1, h1, bx + c, by + d, -1, unk_44, 0x1000, 0x1000, 0, -1, 0, 0);
        }
    }
}

void ScrollKnob::vfunc_0c() {
    if (unk_3c != 0) {
        unk_14.update();
        unk_28.update();
    }
}

void ScrollKnob::moveTo(s32 x, s32 y) { unk_0c = x; unk_10 = y; }

void ScrollKnob::setPriority(s32 v) { unk_44 = v; }

