#include "types.h"

extern "C" {
extern u8 data_020d5b0c[];
}

extern const s32 data_020cf6c8[4];
extern const s32 data_020cf6d8[4];

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

class ScrollKnob : public UiWidget {
public:
    BOOL areAnimsDone();
    s32 getState();
    void setState(s32 idx);
    void getAnimOffset(s32 *a, s32 *b);

    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ SpriteAnim unk_14;
    /* 0x28 */ SpriteAnim unk_28;
    /* 0x3c */ s32 unk_3c;
    /* 0x40 */ u8 unk_40;
    /* 0x44 */ s32 unk_44;
};

enum Unk_0208d9d4_E { Unk_0208d9d4_E0 = 0 };

void ScrollKnob::getAnimOffset(s32 *a, s32 *b) {
    s32 x = 0;
    s32 y = 0;
    if (unk_3c == 2) {
        x = unk_14.getFrameX(-1);
        x -= unk_14.getFrameX(0);
        s32 t = unk_14.getFrameY(-1);
        y = t - unk_14.getFrameY(0);
    } else if (unk_3c == 3) {
        x = unk_14.getFrameX(0);
        x -= unk_14.getFrameX(-1);
        s32 t = unk_14.getFrameY(0);
        y = t - unk_14.getFrameY(-1);
    }
    *a = x;
    *b = y;
}

void ScrollKnob::setState(s32 idx) {
    Unk_0208d9d4_E a;
    Unk_0208d9d4_E n;
    s32 f;
    a = (Unk_0208d9d4_E)data_020cf6d8[idx];
    n = (Unk_0208d9d4_E)(a + 1);
    f = data_020cf6c8[idx];
    unk_3c = idx;
    unk_14.setSeq((SpriteAnimSeq *)(data_020d5b0c + a * 8));
    unk_14.setPlayOnce(f);
    unk_14.restart();
    unk_28.setSeq((SpriteAnimSeq *)(data_020d5b0c + n * 8));
    unk_28.setPlayOnce(f);
    unk_28.restart();
    if (idx == 1) {
        unk_14.setSpeed(0);
        unk_28.setSpeed(0);
    }
}

extern const s32 data_020cf6c8[4] = {1, 1, 1, 1};
extern const s32 data_020cf6d8[4] = {0x2f, 0x2f, 0x2f, 0x31};
