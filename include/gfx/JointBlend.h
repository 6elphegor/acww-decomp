#ifndef GFX_JOINTBLEND_H
#define GFX_JOINTBLEND_H

#include "types.h"
#include "gfx/Mtx33.h"
#include "gfx/VecFx32.h"

struct NNSG3dRS;


// 0x3c-byte joint pose blender (captured pose blended out over n frames); second base of BlendAnimModel.
// Defined in src/main/unk_02055c38.cpp.
class JointBlend {
public:
    /* 0x04 */ Mtx33 poseRot;
    /* 0x28 */ VecFx32 poseTrans;
    /* 0x34 */ s32 blendRatio;
    /* 0x38 */ s32 blendStep;
    JointBlend();
    virtual ~JointBlend();
    void capturePose(NNSG3dRS *x);
    void blendPose(NNSG3dRS *x);
    void start(s32 n);
    BOOL advance();
};

#endif
