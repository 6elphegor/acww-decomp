#include "types.h"

struct SpriteAnimFrame {
    /* 0x00 */ void *unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s16 unk_08;
    /* 0x0a */ s16 unk_0a;
};

struct SpriteAnimSeq {
    /* 0x00 */ SpriteAnimFrame *unk_00;
    /* 0x04 */ s32 unk_04;
};

// Animation cursor over a table of 12-byte records (fixed-point frame position)
class SpriteAnim {
public:
    SpriteAnim();
    ~SpriteAnim();
    void update();
    void restart();
    void pause();
    BOOL isFinished();
    s32 getFrameY(s32 v);
    s32 getFrameX(s32 v);
    SpriteAnimSeq *getSeq();
    s32 getFrameIndex();
    void *getCell();
    void setFrame(s32 a, s32 b);
    void setSpeed(s32 v);
    void setPlayOnce(s32 v);
    void setSeq(SpriteAnimSeq *v);

    /* 0x00 */ SpriteAnimSeq *unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08;
    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ s32 unk_10;
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

extern const u32 sTalkArrowPlayOnce[];
extern const u32 sTalkArrowSeqIds[];
extern u8 data_020d5b0c[];

// Two-cursor menu/sprite object; vtable 0x020e0d44 (ctor 0x020894c0)
class TalkArrow : public UiWidget {
public:
    TalkArrow(u8 flag);
    virtual ~TalkArrow();
    virtual void draw();
    virtual void vfunc_0c();

    BOOL isAnimDone();
    s32 getState();
    void setState(s32 idx);
    void setOffset(s32 x, s32 y);
    void setAltStyle();

    /* 0x0c */ SpriteAnim unk_0c;
    /* 0x20 */ SpriteAnim unk_20;
    /* 0x34 */ s32 unk_34;
    /* 0x38 */ s32 unk_38;
    /* 0x3c */ s32 unk_3c;
    /* 0x40 */ u8 unk_40;
    /* 0x41 */ u8 unk_41;
};

enum Unk_020892b0_E { Unk_020892b0_E0 = 0 };

void TalkArrow::setAltStyle() { unk_40 = 1; }

void TalkArrow::setOffset(s32 x, s32 y) {
    unk_38 = x;
    unk_3c = y;
}

void TalkArrow::setState(s32 idx) {
    Unk_020892b0_E a;
    Unk_020892b0_E b;
    u32 c;
    a = (Unk_020892b0_E)((u32 *)sTalkArrowSeqIds)[idx];
    if (unk_40 != 0) {
        a = (Unk_020892b0_E)(a + 6);
    }
    b = (Unk_020892b0_E)(a + 1);
    c = ((u32 *)sTalkArrowPlayOnce)[idx];
    unk_34 = idx;
    unk_0c.setSeq((SpriteAnimSeq *)(data_020d5b0c + a * 8));
    unk_0c.setPlayOnce(c);
    unk_0c.restart();
    unk_20.setSeq((SpriteAnimSeq *)(data_020d5b0c + b * 8));
    unk_20.setPlayOnce(c);
    unk_20.restart();
}

s32 TalkArrow::getState() { return unk_34; }

BOOL TalkArrow::isAnimDone() {
    if (unk_0c.isFinished() && unk_20.isFinished()) {
        return TRUE;
    }
    return FALSE;
}

// Cursor ctor/dtor and 0x020890f4/0x02089100 are defined last so they are not inlined
SpriteAnim::SpriteAnim() {
    unk_00 = 0;
    unk_04 = 0;
    unk_08 = 0;
    unk_0c = 0x1000;
    unk_10 = 0;
}

SpriteAnim::~SpriteAnim() {}

void SpriteAnim::setSeq(SpriteAnimSeq *v) { unk_00 = v; }

void SpriteAnim::setPlayOnce(s32 v) { unk_10 = v; }

void SpriteAnim::setSpeed(s32 v) { unk_0c = v; }

void SpriteAnim::setFrame(s32 a, s32 b) {
    unk_04 = a;
    unk_08 = b;
}

void *SpriteAnim::getCell() { return unk_00->unk_00[unk_04].unk_00; }

s32 SpriteAnim::getFrameIndex() { return unk_04; }

SpriteAnimSeq *SpriteAnim::getSeq() { return unk_00; }

s32 SpriteAnim::getFrameX(s32 v) {
    if (v < 0) {
        v = unk_04;
    }
    return unk_00->unk_00[v].unk_08;
}

s32 SpriteAnim::getFrameY(s32 v) {
    if (v < 0) {
        v = unk_04;
    }
    return unk_00->unk_00[v].unk_0a;
}

BOOL SpriteAnim::isFinished() {
    BOOL r = FALSE;
    if (unk_10 == 1) {
        SpriteAnimSeq *t = unk_00;
        s32 i = unk_04;
        if (i >= t->unk_04 - 1) {
            s32 f = unk_08 >> 12;
            if (f >= t->unk_00[i].unk_04 - 1) {
                r = TRUE;
            }
        }
    }
    return r;
}

void SpriteAnim::pause() { unk_0c = 0; }

void SpriteAnim::restart() {
    unk_0c = 0x1000;
    setFrame(0, 0);
}

const u32 sTalkArrowPlayOnce[] = {0, 0, 1, 1};
const u32 sTalkArrowSeqIds[] = {0x23, 0x23, 0x25, 0x27};
