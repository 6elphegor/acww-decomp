#ifndef GFX_TWOLAYERANIMMODEL_H
#define GFX_TWOLAYERANIMMODEL_H

#include "types.h"
#include "gfx/AnimFrameCtrl.h"
#include "gfx/AnimModel.h"
#include "gfx/JointBlend.h"

struct NNSG3dRS;

// AnimModel with pose blending between two animations (0xf4 bytes), and the two-layer variant whose second animation
// drives a joint subset (0x154 bytes; PlayerActor::bodyModel, base of ThreeLayerAnimModel). Both are defined in
// src/main/unk_02053848.cpp (BlendAnimModel 0x0205436c..0x0205458c, TwoLayerAnimModel 0x02053dc0..0x020542ec).
class BlendAnimModel : public AnimModel, public JointBlend {
public:
    BlendAnimModel();
    virtual ~BlendAnimModel();

    // anm: the joint animation resource (an entry of a .bca file); blend: frames of blending from the current pose
    void playBlend(void *anm, s32 blend, s32 mode, s32 speed, u16 frame, u16 numFrames);
    void stepBlend();
    void onJointCalcPost(BlendAnimModel *x);
    void applyJointBlend(BlendAnimModel *x);
    void onJointCalcPre(BlendAnimModel *x);
    void captureJointPose(BlendAnimModel *x);
    NNSG3dAnmObj *getAnmObj();
    void *getAnmRes();
    void initAnim(void *anm, s32 mode, s32 speed, u16 frame, u16 numFrames);
};

class TwoLayerAnimModel : public BlendAnimModel {
public:
    TwoLayerAnimModel();
    virtual ~TwoLayerAnimModel();
    void clearLayer2Mask();
    void releaseJointsFromLayer2(u32 a, u32 b);
    void assignJointsToLayer2(u32 a, u32 b);
    void playLayer2FromBase(u32 a, u32 b);
    void playLayer2(void *anm, u32 blend, u32 mode, u32 speed, u32 frame, u32 numFrames, BOOL g);
    void drawLayered(u32 a);
    void updateLayers();
    BOOL allocLayerAnims(void *heap);
    void onJointCalcPostLayer2(NNSG3dRS *m);
    void applyLayer2Blend(NNSG3dRS *m);
    void onJointCalcPreLayer2(NNSG3dRS *m);
    void captureLayer2Pose(NNSG3dRS *m);
    BOOL isLayer2Joint(u32 i);
    void clearLayer2Joint(u32 i);
    void setLayer2Joint(u32 i);
    void onJointLayerAssign(u32 i);
    void onJointLayerRelease(u32 i);

    /* 0xf4 */ void *layer2AnmObj;
    /* 0xf8 */ AnimFrameCtrl layer2Frame;
    /* 0x110 */ JointBlend layer2Blend;
    /* 0x14c */ u32 layer2JointMask;
    /* 0x150 */ u32 layer2JointMaskHi;
};

#endif
