#include "types.h"

extern "C" {
void Oam_DrawCell(u32 a, void *h, s32 x, s32 y, s32 s0, s32 s1, s32 s2, s32 s3, s32 s4, s32 s5, s32 s6, s32 s7);
}

extern "C" {
void GX_LoadOBJPltt(void *a, u32 b, u32 c);
}

extern "C" {
void Snd_SetPanIfChanged(u8 v);
}

extern u8 sNameLabelBalloonKind4Color[];
extern s32 kNameLabelBalloonKindAnims[];
extern s32 sHandCursorAnimSeqIds[];
extern u8 sHandCursorAnimLoops[];
extern u8 sHandCursorAnimHasLayer2[];
extern s32 sScrollKnobSeqIds[];
extern s32 sScrollKnobPlayOnce[];
extern u8 data_020d5b0c[];
extern u8 data_020d467c[];

struct Unk_02089240_Rec {
    /* 0x00 */ s32 unk_00;
    /* 0x04 */ s32 unk_04;
};

// Sub-object (ctor 0x02089270, dtor 0x0208926c)
class SpriteAnim {
public:
    SpriteAnim();
    ~SpriteAnim();
    void update();
    void restart();
    BOOL isFinished();
    s32 getFrameY(s32 v);
    s32 getFrameX(s32 v);
    Unk_02089240_Rec *getSeq();
    void *getCell();
    void setFrame(s32 a, s32 b);
    void setSpeed(s32 v);
    void setPlayOnce(s32 v);
    void setSeq(void *v);

    /* 0x00 */ u8 unk_00[0x14];
};

// Sub-object at +0x38 of NameLabelBalloon (0x34 bytes, ctor 0x02039b04, dtor 0x02039aec)
class ChatBalloonText {
public:
    ChatBalloonText();
    ~ChatBalloonText();
    void func_020a7bd8(void *p);

    /* 0x00 */ u32 unk_00[13];
};

// Base class with vtable at 0x020e0db4 (ctor 0x02089fa8, D2 0x02089f78)
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

class Unk_0208d154_Sub {
public:
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
    virtual s32 vfunc_0c();

    /* 0x04 */ u8 unk_04[0x2c];
    /* 0x30 */ s32 unk_30;
};

class NameLabelBalloon : public UiWidget {
public:
    typedef void (NameLabelBalloon::*Fn)();

    NameLabelBalloon();
    virtual ~NameLabelBalloon();
    virtual void draw();
    virtual void vfunc_0c();

    void func_0208d0bc();
    void func_0208d0d4();
    void fitToLabel();
    void applyKindAnim();
    void updateHiding();
    void enterHiding();
    void updateShown();
    void enterShown();
    void updateAppearing();
    void enterAppearing();
    void updateHidden();
    void enterHidden();
    static void loadKind4Palette();
    BOOL requestHide();
    BOOL requestShow();
    void setText(void *p);
    void setOffset(s32 a, s32 b);
    void release();
    void setKind(s32 a);

    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ SpriteAnim unk_14;
    /* 0x28 */ s32 unk_28;
    /* 0x2c */ s32 unk_2c;
    /* 0x30 */ s32 unk_30;
    /* 0x34 */ s32 unk_34;
    /* 0x38 */ ChatBalloonText unk_38;
    /* 0x6c */ Unk_0208d154_Sub *unk_6c;
    /* 0x70 */ s32 unk_70;
    /* 0x74 */ s32 unk_74;
    /* 0x78 */ s32 unk_78;
    /* 0x7c */ u8 unk_7c;
};

// ---------------------------------------------------------------------------------------------------------------------

class HandCursor : public UiWidget {
public:
    HandCursor(BOOL flag);
    virtual ~HandCursor();
    virtual void draw();
    virtual void vfunc_0c();

    void func_0208d4fc_dummy();
    BOOL isAnimDone();
    s32 getAnim();
    void setAnimAtEnd(s32 idx);
    void setAnim(s32 idx);
    void setPos(s32 a, s32 b);
    void disableObjWindow();
    void enableObjWindow();

    /* 0x0c */ SpriteAnim layer1;
    /* 0x20 */ s32 unk_20;
    /* 0x24 */ s32 unk_24;
    /* 0x28 */ s32 priority;
    /* 0x2c */ SpriteAnim layer2;
    /* 0x40 */ s32 anim;
    /* 0x44 */ s32 unk_44;
    /* 0x48 */ u8 onBufferA;
    /* 0x49 */ u8 hasLayer2;
    /* 0x4a */ u8 objWindow;
};

s32 HandCursor::getAnim() {
    return anim;
}

BOOL HandCursor::isAnimDone() {
    BOOL r = FALSE;
    if (layer1.isFinished()) {
        BOOL t;
        if (hasLayer2 != 0) {
            t = layer2.isFinished();
        } else {
            t = TRUE;
        }
        if (t) {
            r = TRUE;
        }
    }
    return r;
}

NameLabelBalloon::NameLabelBalloon() : unk_0c(0), unk_10(10), unk_28(0), unk_2c(0), unk_30(0), unk_34(0) {
    unk_6c = 0;
    unk_70 = 0;
    unk_74 = 0;
    unk_78 = 0;
    unk_7c = 0;
}

NameLabelBalloon::~NameLabelBalloon() {
    release();
}

void NameLabelBalloon::draw() {
    if (unk_7c != 0) {
        void *h = unk_14.getCell();
        s32 a = getOriginX();
        s32 b = unk_14.getFrameX(-1);
        s32 x = unk_34 + (unk_28 + a);
        x += b;
        s32 c = getOriginY();
        s32 d = unk_14.getFrameY(-1);
        s32 y = unk_30 + (unk_2c + c);
        y += d;
        Oam_DrawCell(0, h, x, y, -1, -1, 0x1000, 0x1000, 0, -1, 0, 0);
    }
}

void NameLabelBalloon::vfunc_0c() {
    Fn p0 = &NameLabelBalloon::updateShown;
    static Fn tbl[4] = {&NameLabelBalloon::updateHidden, &NameLabelBalloon::updateAppearing, &NameLabelBalloon::updateShown, &NameLabelBalloon::updateHiding};
    Fn q0 = &NameLabelBalloon::updateShown;
    Fn q1 = &NameLabelBalloon::updateShown;
    Fn q2 = &NameLabelBalloon::updateShown;
    (this->*tbl[unk_70])();
    if (unk_70 != 0) {
        unk_14.update();
    }
}

// ---------------------------------------------------------------------------------------------------------------------

