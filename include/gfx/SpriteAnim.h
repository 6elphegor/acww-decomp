#ifndef GFX_SPRITEANIM_H
#define GFX_SPRITEANIM_H

#include "types.h"

// 12-byte animation frame: cell pointer, duration and offset
struct SpriteAnimFrame {
    /* 0x00 */ void *cell;
    /* 0x04 */ s32 duration;
    /* 0x08 */ s16 x;
    /* 0x0a */ s16 y;
};

// 8-byte animation sequence: frame table and its length
struct SpriteAnimSeq {
    /* 0x00 */ SpriteAnimFrame *frames;
    /* 0x04 */ s32 frameCount;
};

// 0x14-byte animation cursor over a SpriteAnimSeq (fixed-point frame position).
// Defined in main, unk_020891bc.cpp (update in unk_02088b98.cpp; 0x02089140..0x02089270, ctor 0x02089270, dtor 0x0208926c).
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

#endif
