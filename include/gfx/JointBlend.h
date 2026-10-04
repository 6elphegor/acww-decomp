#ifndef GFX_JOINTBLEND_H
#define GFX_JOINTBLEND_H

#include "types.h"

struct Unk_02056160_Arg;

// Joint pose vector / rotation matrix used by the pose blend helpers (Anim_LerpVec / Anim_LerpRotMtx).
struct Unk_020561d8_Vec {
    /* 0x00 */ s32 x, y, z;
};
struct Unk_020561d8_Mtx {
    /* 0x00 */ s32 m[9];
};

// 0x3c-byte joint pose blender (captured pose blended out over n frames); second base of BlendAnimModel.
// Defined in src/main/unk_02055c38.cpp.
class JointBlend {
public:
    /* 0x04 */ Unk_020561d8_Mtx poseRot;
    /* 0x28 */ Unk_020561d8_Vec poseTrans;
    /* 0x34 */ s32 blendRatio;
    /* 0x38 */ s32 blendStep;
    JointBlend();
    virtual ~JointBlend();
    void capturePose(Unk_02056160_Arg *x);
    void blendPose(Unk_02056160_Arg *x);
    void start(s32 n);
    BOOL advance();
};

#endif
