#include "types.h"

extern "C" {
void GX_LoadOBJPltt(void *a, u32 b, u32 c);
}

extern const s32 kNameLabelBalloonKindAnims[];
extern u8 sNameLabelBalloonKind4Color[];
extern u8 data_020d467c[];

struct SpriteAnimSeq;

struct Unk_02089240_Rec {
    /* 0x00 */ s32 frames;
    /* 0x04 */ s32 frameCount;
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
    void setSeq(SpriteAnimSeq *v);

    /* 0x00 */ u8 unk_00[0x14];
};

// Sub-object at +0x38 of NameLabelBalloon (0x34 bytes, ctor 0x02039b04, dtor 0x02039aec)
class MsgString {
public:
    MsgString();
    ~MsgString();
    void copy(MsgString *p);

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

    /* 0x04 */ s32 originX;
    /* 0x08 */ s32 originY;
};

class NameLabelBalloonView {
public:
    void freeLabel();
    void createLabel();
};

class Unk_0208d154_Sub {
public:
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
    virtual s32 vfunc_0c();

    /* 0x04 */ u8 unk_04[0x2c];
    /* 0x30 */ s32 xOffset;
};

class NameLabelBalloon : public UiWidget {
public:
    typedef void (NameLabelBalloon::*Fn)();

    NameLabelBalloon();
    virtual ~NameLabelBalloon();
    virtual void draw();
    virtual void vfunc_0c();

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

    /* 0x0c */ s32 kind;
    /* 0x10 */ s32 seqIndex;
    /* 0x14 */ SpriteAnim anim;
    /* 0x28 */ s32 offsetX;
    /* 0x2c */ s32 offsetY;
    /* 0x30 */ s32 slideY;
    /* 0x34 */ s32 alignX;
    /* 0x38 */ MsgString text;
    /* 0x6c */ Unk_0208d154_Sub *textLabel;
    /* 0x70 */ s32 state;
    /* 0x74 */ s32 showRequested;
    /* 0x78 */ s32 stateTimer;
    /* 0x7c */ u8 isVisible;
};

void NameLabelBalloon::setKind(s32 a) {
    kind = a;
    seqIndex = kNameLabelBalloonKindAnims[a];
    applyKindAnim();
}

void NameLabelBalloon::release() {
    ((NameLabelBalloonView *)this)->freeLabel();
}

void NameLabelBalloon::setOffset(s32 a, s32 b) {
    offsetX = a;
    offsetY = b;
}

void NameLabelBalloon::setText(void *p) {
    text.copy((MsgString *)p);
}

BOOL NameLabelBalloon::requestShow() {
    BOOL r;
    if (state == 0) {
        r = TRUE;
    } else {
        r = FALSE;
    }
    if (r) {
        showRequested = 2;
    }
    return r;
}

BOOL NameLabelBalloon::requestHide() {
    BOOL r;
    if (state != 0) {
        r = TRUE;
    } else {
        r = FALSE;
    }
    if (r) {
        showRequested = 0;
    }
    return r;
}

void NameLabelBalloon::loadKind4Palette() {
    GX_LoadOBJPltt(sNameLabelBalloonKind4Color, 0xbc, 2);
}

void NameLabelBalloon::enterHidden() {
    state = 0;
    isVisible = 0;
}

void NameLabelBalloon::updateHidden() {
    if (showRequested != 0) {
        if (kind == 4) {
            loadKind4Palette();
        }
        ((NameLabelBalloonView *)this)->createLabel();
        fitToLabel();
        enterAppearing();
    }
}

void NameLabelBalloon::enterAppearing() {
    state = 1;
    isVisible = 1;
    stateTimer = 3;
    slideY = 5;
}

void NameLabelBalloon::updateAppearing() {
    if (stateTimer > 2) {
        slideY -= 6;
    } else {
        slideY += 2;
    }
    stateTimer = stateTimer - 1;
    if (stateTimer <= 0) {
        slideY = 0;
        enterShown();
    }
}

void NameLabelBalloon::enterShown() {
    state = 2;
    isVisible = 1;
    stateTimer = 2;
}

void NameLabelBalloon::updateShown() {
    if (showRequested == 0) {
        enterHiding();
    }
}

void NameLabelBalloon::enterHiding() {
    state = 3;
    isVisible = 1;
}

void NameLabelBalloon::updateHiding() {
    slideY += 11;
    stateTimer = stateTimer - 1;
    if (stateTimer <= 0) {
        ((NameLabelBalloonView *)this)->freeLabel();
        enterHidden();
    }
}

void NameLabelBalloon::applyKindAnim() {
    anim.setSeq((SpriteAnimSeq *)(data_020d467c + seqIndex * 8));
    anim.setPlayOnce(1);
    anim.setSpeed(0);
}

void NameLabelBalloon::fitToLabel() {
    if (textLabel != 0) {
        s32 len = textLabel->vfunc_0c();
        u32 n = (u32)(len + 7) >> 3;
        s32 idx = anim.getSeq()->frameCount - 1;
        s32 t = n - 1;
        if (t < 0) {
            idx = 0;
        } else if (t <= idx) {
            idx = t;
        }
        anim.setFrame(idx, 0);
        textLabel->xOffset = (u32)(n * 8 - len) >> 1;
        if (kind == 0) {
            alignX = 0;
        } else {
            s32 q = idx << 2;
            q = -q;
            alignX = q + 0x24;
        }
    }
}

