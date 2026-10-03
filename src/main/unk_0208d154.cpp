#include "types.h"

extern "C" {
void GX_LoadOBJPltt(void *a, u32 b, u32 c);
}

extern const s32 kNameLabelBalloonKindAnims[];
extern u8 sNameLabelBalloonKind4Color[];
extern u8 data_020d467c[];

struct SpriteAnimSeq;

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

    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08;
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
    /* 0x30 */ s32 unk_30;
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

    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ SpriteAnim unk_14;
    /* 0x28 */ s32 unk_28;
    /* 0x2c */ s32 unk_2c;
    /* 0x30 */ s32 unk_30;
    /* 0x34 */ s32 unk_34;
    /* 0x38 */ MsgString unk_38;
    /* 0x6c */ Unk_0208d154_Sub *unk_6c;
    /* 0x70 */ s32 unk_70;
    /* 0x74 */ s32 unk_74;
    /* 0x78 */ s32 unk_78;
    /* 0x7c */ u8 unk_7c;
};

void NameLabelBalloon::setKind(s32 a) {
    unk_0c = a;
    unk_10 = kNameLabelBalloonKindAnims[a];
    applyKindAnim();
}

void NameLabelBalloon::release() {
    ((NameLabelBalloonView *)this)->freeLabel();
}

void NameLabelBalloon::setOffset(s32 a, s32 b) {
    unk_28 = a;
    unk_2c = b;
}

void NameLabelBalloon::setText(void *p) {
    unk_38.copy((MsgString *)p);
}

BOOL NameLabelBalloon::requestShow() {
    BOOL r;
    if (unk_70 == 0) {
        r = TRUE;
    } else {
        r = FALSE;
    }
    if (r) {
        unk_74 = 2;
    }
    return r;
}

BOOL NameLabelBalloon::requestHide() {
    BOOL r;
    if (unk_70 != 0) {
        r = TRUE;
    } else {
        r = FALSE;
    }
    if (r) {
        unk_74 = 0;
    }
    return r;
}

void NameLabelBalloon::loadKind4Palette() {
    GX_LoadOBJPltt(sNameLabelBalloonKind4Color, 0xbc, 2);
}

void NameLabelBalloon::enterHidden() {
    unk_70 = 0;
    unk_7c = 0;
}

void NameLabelBalloon::updateHidden() {
    if (unk_74 != 0) {
        if (unk_0c == 4) {
            loadKind4Palette();
        }
        ((NameLabelBalloonView *)this)->createLabel();
        fitToLabel();
        enterAppearing();
    }
}

void NameLabelBalloon::enterAppearing() {
    unk_70 = 1;
    unk_7c = 1;
    unk_78 = 3;
    unk_30 = 5;
}

void NameLabelBalloon::updateAppearing() {
    if (unk_78 > 2) {
        unk_30 -= 6;
    } else {
        unk_30 += 2;
    }
    unk_78 = unk_78 - 1;
    if (unk_78 <= 0) {
        unk_30 = 0;
        enterShown();
    }
}

void NameLabelBalloon::enterShown() {
    unk_70 = 2;
    unk_7c = 1;
    unk_78 = 2;
}

void NameLabelBalloon::updateShown() {
    if (unk_74 == 0) {
        enterHiding();
    }
}

void NameLabelBalloon::enterHiding() {
    unk_70 = 3;
    unk_7c = 1;
}

void NameLabelBalloon::updateHiding() {
    unk_30 += 11;
    unk_78 = unk_78 - 1;
    if (unk_78 <= 0) {
        ((NameLabelBalloonView *)this)->freeLabel();
        enterHidden();
    }
}

void NameLabelBalloon::applyKindAnim() {
    unk_14.setSeq((SpriteAnimSeq *)(data_020d467c + unk_10 * 8));
    unk_14.setPlayOnce(1);
    unk_14.setSpeed(0);
}

void NameLabelBalloon::fitToLabel() {
    if (unk_6c != 0) {
        s32 len = unk_6c->vfunc_0c();
        u32 n = (u32)(len + 7) >> 3;
        s32 idx = unk_14.getSeq()->unk_04 - 1;
        s32 t = n - 1;
        if (t < 0) {
            idx = 0;
        } else if (t <= idx) {
            idx = t;
        }
        unk_14.setFrame(idx, 0);
        unk_6c->unk_30 = (u32)(n * 8 - len) >> 1;
        if (unk_0c == 0) {
            unk_34 = 0;
        } else {
            s32 q = idx << 2;
            q = -q;
            unk_34 = q + 0x24;
        }
    }
}

