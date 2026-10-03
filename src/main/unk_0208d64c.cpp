#include "types.h"

extern "C" {
void Oam_DrawCell(u32 a, void *h, s32 x, s32 y, s32 s0, s32 s1, s32 s2, s32 s3, s32 s4, s32 s5, s32 s6, s32 s7);
}

struct Unk_02089240_Rec {
    /* 0x00 */ s32 unk_00;
    /* 0x04 */ s32 unk_04;
};

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

    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08;
};

class HandCursor : public UiWidget {
public:
    HandCursor(BOOL flag);
    virtual ~HandCursor();
    virtual void draw();
    virtual void vfunc_0c();

    void setAnim(s32 idx);

    /* 0x0c */ SpriteAnim unk_0c;
    /* 0x20 */ s32 unk_20;
    /* 0x24 */ s32 unk_24;
    /* 0x28 */ s32 unk_28;
    /* 0x2c */ SpriteAnim unk_2c;
    /* 0x40 */ s32 unk_40;
    /* 0x44 */ s32 unk_44;
    /* 0x48 */ u8 unk_48;
    /* 0x49 */ u8 unk_49;
    /* 0x4a */ u8 unk_4a;
};

class ScrollKnob : public UiWidget {
public:
    BOOL areAnimsDone();
    s32 getState();

    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ SpriteAnim unk_14;
    /* 0x28 */ SpriteAnim unk_28;
    /* 0x3c */ s32 unk_3c;
    /* 0x40 */ u8 unk_40;
    /* 0x44 */ s32 unk_44;
};

s32 ScrollKnob::getState() {
    return unk_3c;
}

BOOL ScrollKnob::areAnimsDone() {
    BOOL r;
    if (unk_14.isFinished() && unk_28.isFinished()) {
        r = TRUE;
    } else {
        r = FALSE;
    }
    return r;
}

HandCursor::HandCursor(BOOL flag) : unk_20(0), unk_24(0), unk_28(-1) {
    unk_40 = 0;
    unk_44 = 0x16;
    unk_48 = flag;
    unk_49 = 1;
    unk_4a = 0;
    setAnim(0);
}

HandCursor::~HandCursor() {
}

void HandCursor::draw() {
    void *h0;
    s32 x, y, y0, x0;
    if (unk_40 != 0) {
        h0 = unk_0c.getCell();
        void *h1;
        if (unk_49 != 0) {
            h1 = unk_2c.getCell();
        } else {
            h1 = 0;
        }
        s32 ax = unk_0c.getFrameX(-1);
        s32 ay = unk_0c.getFrameY(-1);
        s32 bx = unk_2c.getFrameX(-1);
        s32 by = unk_2c.getFrameY(-1);
        x = (s32)((u8 *)0 + (unk_20 + getOriginX()));
        y = (s32)((u8 *)0 + (unk_24 + getOriginY()));
        x0 = x + ax;
        y0 = y + ay;
        x += bx;
        y += by;
        if (unk_48 != 0) {
            Oam_DrawCell(0, h0, x0, y0, -1, unk_28, 0x1000, 0x1000, 0, -1, 0, 0);
            if (h1 != 0) {
                Oam_DrawCell(0, h1, x, y, -1, unk_28, 0x1000, 0x1000, 0, -1, 0, 0);
            }
            if (unk_4a != 0) {
                Oam_DrawCell(0, h0, x0, y0, -1, unk_28, 0x1000, 0x1000, 0, 2, 0, 0);
                if (h1 != 0) {
                    Oam_DrawCell(0, h1, x, y, -1, unk_28, 0x1000, 0x1000, 0, 2, 0, 0);
                }
            }
        } else {
            Oam_DrawCell(1, h0, x0, y0, -1, unk_28, 0x1000, 0x1000, 0, -1, 0, 0);
            if (h1 != 0) {
                Oam_DrawCell(1, h1, x, y, -1, unk_28, 0x1000, 0x1000, 0, -1, 0, 0);
            }
            if (unk_4a != 0) {
                Oam_DrawCell(1, h0, x0, y0, -1, unk_28, 0x1000, 0x1000, 0, 2, 0, 0);
                if (h1 != 0) {
                    Oam_DrawCell(1, h1, x, y, -1, unk_28, 0x1000, 0x1000, 0, 2, 0, 0);
                }
            }
        }
    }
}

void HandCursor::vfunc_0c() {
    if (unk_40 != 0) {
        unk_0c.update();
        if (unk_49 != 0) {
            unk_2c.update();
        }
    }
}

