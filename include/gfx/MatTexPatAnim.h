#ifndef GFX_MATTEXPATANIM_H
#define GFX_MATTEXPATANIM_H

#include "types.h"
#include "gfx/AnimFrameCtrl.h"

class MatTexPatTrack;

// 0x2c-byte material texture-pattern animation (eye/mouth texture swaps): AnimFrameCtrl plus the model/texture
// resources and per-material tracks. Defined in src/main/unk_02055c38.cpp.
class MatTexPatAnim : public AnimFrameCtrl {
public:
    /* 0x18 */ void *resMdl;
    /* 0x1c */ void *resTex;
    /* 0x20 */ void *patAnm;
    /* 0x24 */ u16 patNumFrames;
    /* 0x26 */ u8 numTracks;
    /* 0x28 */ MatTexPatTrack *tracks;
    MatTexPatAnim();
    virtual ~MatTexPatAnim();
    void pauseMaterial();
    BOOL setMaterialTex(s32 unused, u32 x);
    void applyFrame();
    void update();
    void setAnim(void *r1, void *r2, u32 r3, u8 p5, void *p6);
    void release();
    BOOL init(void *r1, void *r2, u32 r3, void *heap);
    void clear();
};

#endif
