#include "types.h"

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
    void *getCell();
    void setSpeed(s32 v);
    void setPlayOnce(s32 v);
    void setSeq(void *v);

    /* 0x00 */ u8 unk_00[0x14];
};

class MsgStringBase {
public:
    virtual ~MsgStringBase();
    virtual u32 capacity() = 0;
    virtual u8 *data() = 0;
};

class MsgStringAttr {
public:
    MsgStringAttr();
    virtual ~MsgStringAttr();
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ u8 unk_08;
    /* 0x09 */ u8 unk_09;
};

class MsgString : public MsgStringBase {
public:
    MsgString();
    virtual ~MsgString();
    virtual u32 capacity() = 0;
    virtual u8 *data() = 0;
    void clear();
    /* 0x04 */ u32 unk_04;
    /* 0x08 */ MsgStringAttr unk_08;
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

// Nine-byte buffer view; data at +0x12.
class LabelButtonText : public MsgString {
public:
    LabelButtonText();
    virtual ~LabelButtonText();
    virtual u32 capacity();
    virtual u8 *data();
    /* 0x12 */ u8 unk_12[9];
};

class LabelButton : public UiWidget {
public:
    LabelButton(u8 a, s32 b);
    virtual ~LabelButton();
    virtual void draw();
    virtual void vfunc_0c();
    void syncTextColor();
    void freeLabel();
    void setState(s32 v);

    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ s32 unk_14;
    /* 0x18 */ s32 unk_18;
    /* 0x1c */ SpriteAnim unk_1c;
    /* 0x30 */ SpriteAnim unk_30;
    /* 0x44 */ s32 unk_44;
    /* 0x48 */ s32 unk_48;
    /* 0x4c */ LabelButtonText unk_4c;
    /* 0x68 */ u16 unk_68;
    /* 0x6a */ u8 unk_6a;
    /* 0x6b */ u8 unk_6b;
    /* 0x6c */ u8 unk_6c;
    /* 0x6d */ u8 unk_6d;
};

LabelButtonText::LabelButtonText() { clear(); }

LabelButtonText::~LabelButtonText() {}

// ---- LabelButtonText ----
u32 LabelButtonText::capacity() { return 9; }

u8 *LabelButtonText::data() { return (u8 *)this + 0x12; }

LabelButton::LabelButton(u8 a, s32 b) : unk_0c(0), unk_10(0), unk_14(-1), unk_18(b), unk_44(0), unk_48(0) {
    unk_68 = 0x50c0;
    unk_6a = a;
    unk_6b = 0;
    unk_6c = 0;
    unk_6d = 0;
    setState(0);
}

LabelButton::~LabelButton() {
    freeLabel();
}

void LabelButton::draw() {
    if (unk_44 != 0) {
        void *h0 = unk_1c.getCell();
        void *h1 = unk_30.getCell();
        s32 a = unk_1c.getFrameX(-1);
        s32 b = unk_1c.getFrameY(-1);
        s32 c = unk_30.getFrameX(-1);
        s32 d = unk_30.getFrameY(-1);
        s32 bx = unk_0c + getOriginX();
        s32 by = unk_10 + getOriginY();
        s32 x0 = bx + a;
        s32 y0 = by + b;
        s32 x1 = bx + c;
        s32 y1 = by + d;
        BOOL show = unk_6c == 0 ? TRUE : FALSE;
        if (unk_6a != 0) {
            Oam_DrawCell(0, h0, x0, y0, unk_14, -1, 0x1000, 0x1000, 0, -1, 0, 0);
            if (show) {
                Oam_DrawCell(0, h1, x1, y1, -1, -1, 0x1000, 0x1000, 0, -1, 0, 0);
            }
            if (unk_6b != 0) {
                Oam_DrawCell(0, h0, x0, y0, -1, -1, 0x1000, 0x1000, 0, 2, 0, 0);
                if (show) {
                    Oam_DrawCell(0, h1, x1, y1, -1, -1, 0x1000, 0x1000, 0, 2, 0, 0);
                }
            }
        } else {
            Oam_DrawCell(1, h0, x0, y0, unk_14, -1, 0x1000, 0x1000, 0, -1, 0, 0);
            if (show) {
                Oam_DrawCell(1, h1, x1, y1, -1, -1, 0x1000, 0x1000, 0, -1, 0, 0);
            }
            if (unk_6b != 0) {
                Oam_DrawCell(1, h0, x0, y0, -1, -1, 0x1000, 0x1000, 0, 2, 0, 0);
                if (show) {
                    Oam_DrawCell(1, h1, x1, y1, -1, -1, 0x1000, 0x1000, 0, 2, 0, 0);
                }
            }
        }
    }
    syncTextColor();
}

// ---- LabelButton ----
void LabelButton::vfunc_0c() {
    if (unk_44 != 0) {
        unk_1c.update();
        unk_30.update();
    }
}

