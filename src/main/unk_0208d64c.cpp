#include "types.h"
#include "gfx/Unk_02089240_Rec.h"

extern "C" {
void Oam_DrawCell(u32 a, void *h, s32 x, s32 y, s32 s0, s32 s1, s32 s2, s32 s3, s32 s4, s32 s5, s32 s6, s32 s7);
}


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

    /* 0x04 */ s32 originX;
    /* 0x08 */ s32 originY;
};

class HandCursor : public UiWidget {
public:
    HandCursor(BOOL flag);
    virtual ~HandCursor();
    virtual void draw();
    virtual void vfunc_0c();

    void setAnim(s32 idx);

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

class ScrollKnob : public UiWidget {
public:
    BOOL areAnimsDone();
    s32 getState();

    /* 0x0c */ s32 layer1;
    /* 0x10 */ s32 posY;
    /* 0x14 */ SpriteAnim layerAnim1;
    /* 0x28 */ SpriteAnim priority;
    /* 0x3c */ s32 state;
    /* 0x40 */ u8 anim;
    /* 0x44 */ s32 unk_44;
};

s32 ScrollKnob::getState() {
    return state;
}

BOOL ScrollKnob::areAnimsDone() {
    BOOL r;
    if (layerAnim1.isFinished() && priority.isFinished()) {
        r = TRUE;
    } else {
        r = FALSE;
    }
    return r;
}

HandCursor::HandCursor(BOOL flag) : unk_20(0), unk_24(0), priority(-1) {
    anim = 0;
    unk_44 = 0x16;
    onBufferA = flag;
    hasLayer2 = 1;
    objWindow = 0;
    setAnim(0);
}

HandCursor::~HandCursor() {
}

void HandCursor::draw() {
    void *h0;
    s32 x, y, y0, x0;
    if (anim != 0) {
        h0 = layer1.getCell();
        void *h1;
        if (hasLayer2 != 0) {
            h1 = layer2.getCell();
        } else {
            h1 = 0;
        }
        s32 ax = layer1.getFrameX(-1);
        s32 ay = layer1.getFrameY(-1);
        s32 bx = layer2.getFrameX(-1);
        s32 by = layer2.getFrameY(-1);
        x = (s32)((u8 *)0 + (unk_20 + getOriginX()));
        y = (s32)((u8 *)0 + (unk_24 + getOriginY()));
        x0 = x + ax;
        y0 = y + ay;
        x += bx;
        y += by;
        if (onBufferA != 0) {
            Oam_DrawCell(0, h0, x0, y0, -1, priority, 0x1000, 0x1000, 0, -1, 0, 0);
            if (h1 != 0) {
                Oam_DrawCell(0, h1, x, y, -1, priority, 0x1000, 0x1000, 0, -1, 0, 0);
            }
            if (objWindow != 0) {
                Oam_DrawCell(0, h0, x0, y0, -1, priority, 0x1000, 0x1000, 0, 2, 0, 0);
                if (h1 != 0) {
                    Oam_DrawCell(0, h1, x, y, -1, priority, 0x1000, 0x1000, 0, 2, 0, 0);
                }
            }
        } else {
            Oam_DrawCell(1, h0, x0, y0, -1, priority, 0x1000, 0x1000, 0, -1, 0, 0);
            if (h1 != 0) {
                Oam_DrawCell(1, h1, x, y, -1, priority, 0x1000, 0x1000, 0, -1, 0, 0);
            }
            if (objWindow != 0) {
                Oam_DrawCell(1, h0, x0, y0, -1, priority, 0x1000, 0x1000, 0, 2, 0, 0);
                if (h1 != 0) {
                    Oam_DrawCell(1, h1, x, y, -1, priority, 0x1000, 0x1000, 0, 2, 0, 0);
                }
            }
        }
    }
}

void HandCursor::vfunc_0c() {
    if (anim != 0) {
        layer1.update();
        if (hasLayer2 != 0) {
            layer2.update();
        }
    }
}

