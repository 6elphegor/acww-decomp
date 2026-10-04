#ifndef GFX_TWOLAYERANIMMODEL_H
#define GFX_TWOLAYERANIMMODEL_H

#include "types.h"
#include "gfx/AnimFrameCtrl.h"
#include "gfx/AnimModel.h"
#include "gfx/JointBlend.h"

struct Unk_02053a54_Msg;

// AnimModel with pose blending between two animations (0xf4 bytes), and the two-layer variant whose second animation
// drives a joint subset (0x154 bytes; PlayerActor::bodyModel, base of ThreeLayerAnimModel). Both are defined in
// src/main/unk_02053848.cpp (BlendAnimModel 0x0205436c..0x0205458c, TwoLayerAnimModel 0x02053dc0..0x020542ec).
class BlendAnimModel : public AnimModel, public JointBlend {
public:
    BlendAnimModel();
    virtual ~BlendAnimModel();

    void playBlend(s32 a, s32 b, s32 c, s32 d, u16 e, u16 f);
    void stepBlend();
    void onJointCalcPost(BlendAnimModel *x);
    void applyJointBlend(BlendAnimModel *x);
    void onJointCalcPre(BlendAnimModel *x);
    void captureJointPose(BlendAnimModel *x);
    NNSG3dAnmObj *getAnmObj();
    u32 getAnmRes();
    void initAnim(s32 a, s32 b, s32 c, u16 d, u16 e);
};

class TwoLayerAnimModel : public BlendAnimModel {
public:
    TwoLayerAnimModel();
    virtual ~TwoLayerAnimModel();
    void clearLayer2Mask();
    void releaseJointsFromLayer2(u32 a, u32 b);
    void assignJointsToLayer2(u32 a, u32 b);
    void playLayer2FromBase(u32 a, u32 b);
    void playLayer2(u32 a, u32 b, u32 c, u32 d, u32 e, u32 f, BOOL g);
    void drawLayered(u32 a);
    void updateLayers();
    BOOL allocLayerAnims(u32 a);
    void onJointCalcPostLayer2(Unk_02053a54_Msg *m);
    void applyLayer2Blend(Unk_02053a54_Msg *m);
    void onJointCalcPreLayer2(Unk_02053a54_Msg *m);
    void captureLayer2Pose(Unk_02053a54_Msg *m);
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
