#include "types.h"

extern "C" {
void Snd_SetPanIfChanged(u8 v);
}

extern u8 data_020d5b0c[];

extern const u8 data_020cf654[0x14];
extern const u8 data_020cf668[0x14];
extern const s32 data_020cf67c[0x13];

struct Unk_02089240_Rec {
    /* 0x00 */ s32 unk_00;
    /* 0x04 */ s32 unk_04;
};

struct SpriteAnimSeq;

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

    void setAnimAtEnd(s32 idx);
    void setAnim(s32 idx);
    void setPos(s32 a, s32 b);
    void disableObjWindow();
    void enableObjWindow();

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

void HandCursor::enableObjWindow() {
    unk_4a = 1;
}

void HandCursor::disableObjWindow() {
    unk_4a = 0;
}

void HandCursor::setPos(s32 a, s32 b) {
    unk_20 = a;
    unk_24 = b;
    if (unk_40 != 0) {
        s32 v = unk_20 + getOriginX();
        if (v < 0) {
            v = 0;
        }
        if (v > 0xff) {
            v = 0xff;
        }
        Snd_SetPanIfChanged(v);
    }
}

void HandCursor::setAnim(s32 idx) {
    s32 a = data_020cf67c[idx];
    s32 n = a + 1;
    BOOL f;
    switch (data_020cf668[idx]) {
    default:
        f = FALSE;
        break;
    case 0:
        f = TRUE;
    }
    unk_40 = idx;
    unk_0c.setSeq((SpriteAnimSeq *)(data_020d5b0c + a * 8));
    unk_0c.setPlayOnce(f);
    unk_0c.restart();
    unk_49 = data_020cf654[idx];
    if (unk_49 != 0) {
        unk_2c.setSeq((SpriteAnimSeq *)(data_020d5b0c + n * 8));
        unk_2c.setPlayOnce(f);
        unk_2c.restart();
    }
}

void HandCursor::setAnimAtEnd(s32 idx) {
    setAnim(idx);
    Unk_02089240_Rec *p = unk_0c.getSeq();
    unk_0c.setFrame(p->unk_04 - 1, 0);
    if (unk_49 != 0) {
        Unk_02089240_Rec *q = unk_2c.getSeq();
        unk_2c.setFrame(q->unk_04 - 1, 0);
    }
}

// Declarations for data defined further down (definition order sets the data layout)
extern const u8 data_020cf668[0x14];
extern const u8 data_020cf654[0x14];
extern const s32 data_020cf67c[0x13];

extern const u8 data_020cf668[0x14] = {1,1,0,0, 0,0,0,1, 0,0,0,0, 0,1,0,0, 1,0,0,0};

extern const u8 data_020cf654[0x14] = {1,1,1,1, 1,1,0,1, 1,1,1,1, 0,0,0,0, 0,0,0,0};

extern const s32 data_020cf67c[0x13] = {1,1,3,5,7,9,11,12,14,16,18,20,22,23,25,27,29,31,33};

// 0x020cf650: first .rodata object of this file (bytes 7b 6f 00 00); read by the unit at 0x0208d154 (0x0208d2d0)
extern const u8 data_020cf650[4] = {0x7b, 0x6f, 0x00, 0x00};
