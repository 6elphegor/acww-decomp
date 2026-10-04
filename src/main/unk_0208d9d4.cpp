#include "types.h"

extern "C" {
extern u8 data_020d5b0c[];
}

extern const s32 sScrollKnobPlayOnce[4];
extern const s32 sScrollKnobSeqIds[4];

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

    /* 0x04 */ s32 originX;
    /* 0x08 */ s32 originY;
};

class ScrollKnob : public UiWidget {
public:
    BOOL areAnimsDone();
    s32 getState();
    void setState(s32 idx);
    void getAnimOffset(s32 *a, s32 *b);

    /* 0x0c */ s32 layer1;
    /* 0x10 */ s32 posY;
    /* 0x14 */ SpriteAnim layerAnim1;
    /* 0x28 */ SpriteAnim priority;
    /* 0x3c */ s32 state;
    /* 0x40 */ u8 anim;
    /* 0x44 */ s32 unk_44;
};

enum Unk_0208d9d4_E { Unk_0208d9d4_E0 = 0 };

void ScrollKnob::getAnimOffset(s32 *a, s32 *b) {
    s32 x = 0;
    s32 y = 0;
    if (state == 2) {
        x = layerAnim1.getFrameX(-1);
        x -= layerAnim1.getFrameX(0);
        s32 t = layerAnim1.getFrameY(-1);
        y = t - layerAnim1.getFrameY(0);
    } else if (state == 3) {
        x = layerAnim1.getFrameX(0);
        x -= layerAnim1.getFrameX(-1);
        s32 t = layerAnim1.getFrameY(0);
        y = t - layerAnim1.getFrameY(-1);
    }
    *a = x;
    *b = y;
}

void ScrollKnob::setState(s32 idx) {
    Unk_0208d9d4_E a;
    Unk_0208d9d4_E n;
    s32 f;
    a = (Unk_0208d9d4_E)sScrollKnobSeqIds[idx];
    n = (Unk_0208d9d4_E)(a + 1);
    f = sScrollKnobPlayOnce[idx];
    state = idx;
    layerAnim1.setSeq((SpriteAnimSeq *)(data_020d5b0c + a * 8));
    layerAnim1.setPlayOnce(f);
    layerAnim1.restart();
    priority.setSeq((SpriteAnimSeq *)(data_020d5b0c + n * 8));
    priority.setPlayOnce(f);
    priority.restart();
    if (idx == 1) {
        layerAnim1.setSpeed(0);
        priority.setSpeed(0);
    }
}

extern const s32 sScrollKnobPlayOnce[4] = {1, 1, 1, 1};
extern const s32 sScrollKnobSeqIds[4] = {0x2f, 0x2f, 0x2f, 0x31};
