#include "types.h"
#include "text/Unk_02050288.h"

extern "C" {
void Oam_DrawCell(u32 a, void *h, s32 x, s32 y, s32 s0, s32 s1, s32 s2, s32 s3, s32 s4, s32 s5, s32 s6, s32 s7);
BOOL StrBuf_Copy(StrBuf *dst, StrBuf *src);
void StrBuf_Clear(StrBuf *buf);
TextLabel *MsgTextLabel_CreateVram(u32 a, s32 b, s32 c);
void MsgTextLabel_Destroy(TextLabel *obj);
}

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

class MsgStringBase {
public:
    virtual ~MsgStringBase() {}
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c() = 0;
};

class LabelBalloonText : public MsgStringBase {
public:
    LabelBalloonText();
    virtual ~LabelBalloonText();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();

    /* 0x04 */ u8 unk_04[0x24];
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

extern u8 data_020d5ce4[];
extern u8 data_020d5cec[];
extern u8 gFontB[];
extern u8 gFontA[];

class LabelBalloon : public UiWidget {
public:
    LabelBalloon(s32 flag);
    virtual ~LabelBalloon();
    virtual void draw();
    virtual void vfunc_0c();

    void updateScreenClamp();
    void freeLabels();
    void createLabels();
    void fitToText();
    void initAnims();
    void reset();
    s32 getWidth();
    s32 getPosY();
    s32 getPosX();
    s32 getDrawY();
    s32 getDrawX();
    SpriteAnim *getAnim();
    s32 getState();
    void updateClosing();
    void enterClosing();
    void updateOpen();
    void enterOpen();
    void updateOpening();
    void enterOpening();
    void updateClosed();
    void enterClosed();
    BOOL requestClose();
    BOOL requestOpen();
    void refreshText(s32 flag);
    void setClampToScreen(u8 v);
    void enableCenterText();
    void setText(StrBuf *src);
    void setPos(s32 a, s32 b);
    void hideLayer2();
    void showLayer2();
    void setPopUpward();
    void setPopDownward();
    void disablePopAnim();
    void disableObjWindow();
    void enableObjWindow();

    /* 0x0c */ SpriteAnim unk_0c;
    /* 0x20 */ SpriteAnim unk_20;
    /* 0x34 */ s32 unk_34;
    /* 0x38 */ s32 unk_38;
    /* 0x3c */ s32 unk_3c;
    /* 0x40 */ s32 unk_40;
    /* 0x44 */ s32 unk_44;
    /* 0x48 */ s32 unk_48;
    /* 0x4c */ s32 unk_4c;
    /* 0x50 */ s32 unk_50;
    /* 0x54 */ u8 unk_54;
    /* 0x55 */ u8 unk_55;
    /* 0x56 */ u8 unk_56;
    /* 0x57 */ u8 unk_57;
    /* 0x58 */ u8 unk_58;
    /* 0x59 */ u8 unk_59;
    /* 0x5a */ u8 unk_5a;
    /* 0x5b */ u8 unk_5b;
    /* 0x5c */ u8 unk_5c;
    /* 0x60 */ LabelBalloonText unk_60;
    /* 0x88 */ LabelBalloonText unk_88;
    /* 0xb0 */ TextLabel *unk_b0;
    /* 0xb4 */ TextLabel *unk_b4;
    /* 0xb8 */ s32 unk_b8;
};

typedef void (LabelBalloon::*Unk_020e0d98_Fn)();

void UiWidget::setOrigin(s32 a, s32 b) {
    unk_04 = a + 0x80;
    unk_08 = b + 0x60;
}

s32 UiWidget::getOriginX() { return unk_04; }

s32 UiWidget::getOriginY() { return unk_08; }

LabelBalloonText::LabelBalloonText() { StrBuf_Clear((StrBuf *)this); }

LabelBalloonText::~LabelBalloonText() {}

u32 LabelBalloonText::vfunc_08() { return 0x21; }

// ---------------------------------------------------------------------------------------------------------------------
// LabelBalloonText and UiWidget members

u8 *LabelBalloonText::vfunc_0c() { return (u8 *)this + 4; }

LabelBalloon::LabelBalloon(s32 flag)
    : unk_34(0), unk_38(0), unk_3c(0), unk_40(0), unk_44(-1), unk_48(0), unk_4c(0), unk_50(0), unk_54(0),
      unk_55(0), unk_56(flag), unk_57(0), unk_58(0), unk_59(0), unk_5a(0), unk_5b(0), unk_5c(0), unk_b0(0),
      unk_b4(0), unk_b8(0) {
    initAnims();
    enterClosed();
}

LabelBalloon::~LabelBalloon() { freeLabels(); }

void LabelBalloon::draw() {
    if (unk_34 != 0) {
        void *h0 = unk_0c.getCell();
        void *h1 = unk_20.getCell();
        s32 base = getDrawX();
        s32 base2 = getDrawY();
        s32 x0 = base + unk_0c.getFrameX(-1);
        s32 y0 = base2 + unk_0c.getFrameY(-1);
        s32 x1 = base + unk_20.getFrameX(-1);
        s32 y1 = base2 + unk_20.getFrameY(-1);
        if (unk_56 != 0) {
            Oam_DrawCell(0, h0, x0, y0, -1, unk_44, 0x1000, 0x1000, 0, -1, 0, 0);
            if (unk_5b != 0) {
                Oam_DrawCell(0, h1, x1, y1, -1, unk_44, 0x1000, 0x1000, 0, -1, 0, 0);
            }
            if (unk_58 != 0) {
                Oam_DrawCell(0, h0, x0, y0, -1, unk_44, 0x1000, 0x1000, 0, 2, 0, 0);
                if (unk_5b != 0) {
                    Oam_DrawCell(0, h1, x1, y1, -1, unk_44, 0x1000, 0x1000, 0, 2, 0, 0);
                }
            }
        } else {
            Oam_DrawCell(1, h0, x0, y0, -1, unk_44, 0x1000, 0x1000, 0, -1, 0, 0);
            if (unk_5b != 0) {
                Oam_DrawCell(1, h1, x1, y1, -1, unk_44, 0x1000, 0x1000, 0, -1, 0, 0);
            }
            if (unk_58 != 0) {
                Oam_DrawCell(1, h0, x0, y0, -1, unk_44, 0x1000, 0x1000, 0, 2, 0, 0);
                if (unk_5b != 0) {
                    Oam_DrawCell(1, h1, x1, y1, -1, unk_44, 0x1000, 0x1000, 0, 2, 0, 0);
                }
            }
        }
    }
}

void LabelBalloon::vfunc_0c() {
    static Unk_020e0d98_Fn tbl[4] = {&LabelBalloon::updateClosed, &LabelBalloon::updateOpening,
                                     &LabelBalloon::updateOpen, &LabelBalloon::updateClosing};
    (this->*tbl[unk_34])();
    if (unk_34 != 0) {
        unk_0c.update();
        unk_20.update();
        updateScreenClamp();
    }
}

void LabelBalloon::enableObjWindow() { unk_58 = 1; }

void LabelBalloon::disableObjWindow() { unk_58 = 0; }

void LabelBalloon::disablePopAnim() { unk_59 = 1; }

void LabelBalloon::setPopDownward() { unk_5a = 1; }

void LabelBalloon::setPopUpward() { unk_5a = 0; }

void LabelBalloon::showLayer2() { unk_5b = 1; }

void LabelBalloon::hideLayer2() { unk_5b = 0; }

void LabelBalloon::setPos(s32 a, s32 b) {
    unk_3c = a;
    unk_40 = b;
}

void LabelBalloon::setText(StrBuf *src) {
    StrBuf_Copy((StrBuf *)&unk_60, src);
    unk_b8 = 1;
}

void LabelBalloon::enableCenterText() { unk_5c = 1; }

void LabelBalloon::setClampToScreen(u8 v) { unk_57 = v; }

void LabelBalloon::refreshText(s32 flag) {
    TextLabel *p = unk_b0;
    if (p) {
        p->unk_10 = (u32)unk_60.vfunc_0c();
        unk_b0->requestRedraw();
    }
    p = unk_b4;
    if (p) {
        p->unk_10 = (u32)unk_88.vfunc_0c();
        unk_b4->requestRedraw();
    }
    if (flag) {
        fitToText();
    }
}

BOOL LabelBalloon::requestOpen() {
    BOOL r = unk_34 == 0 ? TRUE : FALSE;
    if (r) {
        unk_54 = 1;
    }
    return r;
}

BOOL LabelBalloon::requestClose() {
    BOOL r = unk_34 == 2 ? TRUE : FALSE;
    if (r) {
        unk_55 = 1;
    }
    return r;
}

void LabelBalloon::enterClosed() { unk_34 = 0; }

void LabelBalloon::updateClosed() {
    if (unk_54 != 0) {
        unk_54 = 0;
        createLabels();
        fitToText();
        enterOpening();
    }
}

void LabelBalloon::enterOpening() {
    if (unk_59 != 0) {
        unk_38 = 1;
        unk_48 = 0;
        unk_4c = 0;
    } else {
        unk_38 = 3;
        unk_48 = -5;
        s32 v = -5;
        if (unk_5a == 0) {
            v = 5;
        }
        unk_4c = v;
    }
    unk_34 = 1;
}

void LabelBalloon::updateOpening() {
    if (unk_59 == 0) {
        if (unk_38 > 2) {
            unk_48 += 6;
            s32 d;
            if (unk_5a != 0) {
                d = 6;
            } else {
                d = -6;
            }
            unk_4c += d;
        } else {
            unk_48 -= 1;
            s32 d;
            if (unk_5a != 0) {
                d = -1;
            } else {
                d = 1;
            }
            unk_4c += d;
        }
    }
    unk_38--;
    if (unk_38 <= 0) {
        unk_48 = 0;
        unk_4c = 0;
        enterOpen();
    }
}

void LabelBalloon::enterOpen() { unk_34 = 2; }

void LabelBalloon::updateOpen() {
    if (unk_55 != 0) {
        unk_55 = 0;
        enterClosing();
    }
}

void LabelBalloon::enterClosing() {
    if (unk_59 != 0) {
        unk_38 = 1;
    } else {
        unk_38 = 2;
    }
    unk_34 = 3;
}

void LabelBalloon::updateClosing() {
    if (unk_59 == 0) {
        unk_48 -= 11;
        s32 d;
        if (unk_5a != 0) {
            d = -11;
        } else {
            d = 11;
        }
        unk_4c += d;
    }
    unk_38--;
    if (unk_38 <= 0) {
        freeLabels();
        enterClosed();
    }
}

s32 LabelBalloon::getState() { return unk_34; }

SpriteAnim *LabelBalloon::getAnim() { return &unk_0c; }

s32 LabelBalloon::getDrawX() { return unk_50 + (unk_48 + (unk_3c + getOriginX())); }

s32 LabelBalloon::getDrawY() { return unk_4c + (unk_40 + getOriginY()); }

s32 LabelBalloon::getPosX() { return unk_3c; }

s32 LabelBalloon::getPosY() { return unk_40; }

s32 LabelBalloon::getWidth() { return unk_0c.getFrameIndex() * 8 + 0x18; }

void LabelBalloon::reset() {
    unk_34 = 0;
    unk_38 = 0;
    unk_3c = 0;
    unk_40 = 0;
    unk_44 = -1;
    unk_48 = 0;
    unk_4c = 0;
    unk_50 = 0;
    unk_54 = 0;
    unk_55 = 0;
    unk_57 = 0;
    unk_58 = 0;
    unk_59 = 0;
    unk_5a = 0;
    unk_5b = 0;
    unk_5c = 0;
    StrBuf_Clear((StrBuf *)&unk_60);
    StrBuf_Clear((StrBuf *)&unk_88);
    unk_b8 = 0;
    freeLabels();
}

void LabelBalloon::initAnims() {
    unk_0c.setSeq((SpriteAnimSeq *)data_020d5ce4);
    unk_0c.setPlayOnce(1);
    unk_0c.setSpeed(0);
    unk_20.setSeq((SpriteAnimSeq *)data_020d5cec);
    unk_20.setPlayOnce(1);
    unk_20.setSpeed(0);
}

void LabelBalloon::fitToText() {
    u32 w0;
    u32 w1;
    u32 n;
    s32 hi;
    s32 lo;
    if (unk_b0 != NULL) {
        w0 = unk_b0->measureWidth();
    } else {
        w0 = 0;
    }
    if (unk_b4 != NULL) {
        u32 t1 = unk_b4->measureWidth();
        w1 = t1;
    } else {
        w1 = 0;
    }
    n = (w0 + 7) >> 3;
    n = n > ((w1 + 7) >> 3) ? n : ((w1 + 7) >> 3);
    hi = unk_0c.getSeq()->unk_04 - 1;
    lo = n - 1;
    if (lo < 0) {
        hi = 0;
    } else if (lo <= hi) {
        hi = lo;
    }
    unk_0c.setFrame(hi, 0);
    unk_20.setFrame(hi, 0);
    if (unk_5c != 0) {
        u32 full = n * 8;
        if (unk_b0 != NULL) {
            unk_b0->unk_30 = full > w0 ? (full - w0) >> 1 : 0;
        }
        if (unk_b4 != NULL) {
            unk_b4->unk_30 = full > w1 ? (full - w1) >> 1 : 0;
        }
    } else {
        if (unk_b0 != NULL) {
            unk_b0->unk_30 = 0;
        }
        if (unk_b4 != NULL) {
            unk_b4->unk_30 = 0;
        }
    }
}

void LabelBalloon::createLabels() {
    BOOL two;
    if (unk_b8 == 2) {
        two = TRUE;
    } else {
        two = FALSE;
    }
    if (unk_b0 == NULL) {
        unk_b0 = MsgTextLabel_CreateVram(0x41, 0x14, 2);
        if (unk_b0 != NULL) {
            unk_b0->unk_2c = 4;
            TextLabel *t = unk_b0;
            t->unk_10 = (u32)((StrBuf *)&unk_60)->data();
            unk_b0->unk_58 = 1;
            if (unk_56 != 0) {
                unk_b0->unk_50 = 2;
            }
            if (two) {
                unk_b0->unk_28 = (GameFontDesc *)gFontB;
            } else {
                unk_b0->unk_28 = (GameFontDesc *)gFontA;
            }
            unk_b0->unk_55 = 1;
            unk_b0->unk_39 = 0;
            unk_b0->unk_38 = 3;
            unk_b0->requestRedraw();
        }
    }
    if (unk_b4 == NULL && two) {
        unk_b4 = MsgTextLabel_CreateVram(0x61, 0x14, 2);
        if (unk_b4 != NULL) {
            unk_b4->unk_2c = 4;
            TextLabel *t = unk_b4;
            t->unk_10 = (u32)((StrBuf *)&unk_88)->data();
            unk_b4->unk_58 = 1;
            if (unk_56 != 0) {
                unk_b4->unk_50 = 2;
            }
            unk_b4->unk_28 = (GameFontDesc *)gFontB;
            unk_b4->unk_55 = 1;
            unk_b4->unk_39 = 0;
            unk_b4->unk_38 = 3;
            unk_b4->requestRedraw();
        }
    }
}

void LabelBalloon::freeLabels() {
    if (unk_b0 != NULL) {
        MsgTextLabel_Destroy(unk_b0);
        unk_b0 = NULL;
    }
    if (unk_b4 != NULL) {
        MsgTextLabel_Destroy(unk_b4);
        unk_b4 = NULL;
    }
}

void LabelBalloon::updateScreenClamp() {
    if (unk_57 != 0) {
        s32 w = unk_0c.getFrameIndex() * 4 + 12;
        s32 c = unk_3c + unk_48;
        s32 lo = c - w + 0x80;
        s32 hi = w + c - 0x80;
        if (lo < 0) {
            unk_50 = -lo;
        } else if (hi > 0) {
            unk_50 = -hi;
        } else {
            unk_50 = 0;
        }
    } else {
        unk_50 = 0;
    }
}

