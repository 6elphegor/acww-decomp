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
    /* 0x14 */ s32 palette;
    /* 0x18 */ s32 kind;
    /* 0x1c */ SpriteAnim layer1;
    /* 0x30 */ SpriteAnim layer2;
    /* 0x44 */ s32 state;
    /* 0x48 */ s32 label;
    /* 0x4c */ LabelButtonText text;
    /* 0x68 */ u16 textColor;
    /* 0x6a */ u8 onBufferA;
    /* 0x6b */ u8 objWindow;
    /* 0x6c */ u8 layer2Hidden;
    /* 0x6d */ u8 textColorDirty;
};

LabelButtonText::LabelButtonText() { clear(); }

LabelButtonText::~LabelButtonText() {}

// ---- LabelButtonText ----
u32 LabelButtonText::capacity() { return 9; }

u8 *LabelButtonText::data() { return (u8 *)this + 0x12; }

LabelButton::LabelButton(u8 a, s32 b) : unk_0c(0), unk_10(0), palette(-1), kind(b), state(0), label(0) {
    textColor = 0x50c0;
    onBufferA = a;
    objWindow = 0;
    layer2Hidden = 0;
    textColorDirty = 0;
    setState(0);
}

LabelButton::~LabelButton() {
    freeLabel();
}

void LabelButton::draw() {
    if (state != 0) {
        void *h0 = layer1.getCell();
        void *h1 = layer2.getCell();
        s32 a = layer1.getFrameX(-1);
        s32 b = layer1.getFrameY(-1);
        s32 c = layer2.getFrameX(-1);
        s32 d = layer2.getFrameY(-1);
        s32 bx = unk_0c + getOriginX();
        s32 by = unk_10 + getOriginY();
        s32 x0 = bx + a;
        s32 y0 = by + b;
        s32 x1 = bx + c;
        s32 y1 = by + d;
        BOOL show = layer2Hidden == 0 ? TRUE : FALSE;
        if (onBufferA != 0) {
            Oam_DrawCell(0, h0, x0, y0, palette, -1, 0x1000, 0x1000, 0, -1, 0, 0);
            if (show) {
                Oam_DrawCell(0, h1, x1, y1, -1, -1, 0x1000, 0x1000, 0, -1, 0, 0);
            }
            if (objWindow != 0) {
                Oam_DrawCell(0, h0, x0, y0, -1, -1, 0x1000, 0x1000, 0, 2, 0, 0);
                if (show) {
                    Oam_DrawCell(0, h1, x1, y1, -1, -1, 0x1000, 0x1000, 0, 2, 0, 0);
                }
            }
        } else {
            Oam_DrawCell(1, h0, x0, y0, palette, -1, 0x1000, 0x1000, 0, -1, 0, 0);
            if (show) {
                Oam_DrawCell(1, h1, x1, y1, -1, -1, 0x1000, 0x1000, 0, -1, 0, 0);
            }
            if (objWindow != 0) {
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
    if (state != 0) {
        layer1.update();
        layer2.update();
    }
}

