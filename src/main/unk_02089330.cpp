#include "types.h"

extern "C" {
void Oam_DrawCell(u32 a, void *h, s32 x, s32 y, s32 s0, s32 s1, s32 s2, s32 s3, s32 s4, s32 s5, s32 s6, s32 s7);
}

struct SpriteAnimFrame {
    /* 0x00 */ void *cell;
    /* 0x04 */ s32 duration;
    /* 0x08 */ s16 x;
    /* 0x0a */ s16 y;
};

struct SpriteAnimSeq {
    /* 0x00 */ SpriteAnimFrame *frames;
    /* 0x04 */ s32 frameCount;
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

    /* 0x00 */ SpriteAnimSeq *seq;
    /* 0x04 */ s32 frameIndex;
    /* 0x08 */ s32 frameTime;
    /* 0x0c */ s32 speed;
    /* 0x10 */ s32 playOnce;
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

TalkArrow::TalkArrow(u8 flag) {
    unk_34 = 0;
    unk_38 = 0;
    unk_3c = 0;
    unk_40 = 0;
    unk_41 = flag;
    setState(0);
}

TalkArrow::~TalkArrow() {}

void TalkArrow::draw() {
    if (unk_34 != 0) {
        void *a = unk_0c.getCell();
        void *b = unk_20.getCell();
        s32 ox0 = unk_0c.getFrameX(-1);
        s32 oy0 = unk_0c.getFrameY(-1);
        s32 ox1 = unk_20.getFrameX(-1);
        s32 oy1 = unk_20.getFrameY(-1);
        s32 x = unk_38 + getOriginX();
        s32 y = unk_3c + getOriginY();
        if (unk_41 != 0) {
            Oam_DrawCell(0, a, x + ox0, y + oy0, -1, -1, 0x1000, 0x1000, 0, -1, 0, 0);
            Oam_DrawCell(0, b, x + ox1, y + oy1, -1, -1, 0x1000, 0x1000, 0, -1, 0, 0);
        } else {
            Oam_DrawCell(1, a, x + ox0, y + oy0, -1, -1, 0x1000, 0x1000, 0, -1, 0, 0);
            Oam_DrawCell(1, b, x + ox1, y + oy1, -1, -1, 0x1000, 0x1000, 0, -1, 0, 0);
        }
    }
}

void TalkArrow::vfunc_0c() {
    if (unk_34 != 0) {
        unk_0c.update();
        unk_20.update();
    }
}

