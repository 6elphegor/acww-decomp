#ifndef GFX_MODELANIM_H
#define GFX_MODELANIM_H

#include "types.h"
#include "gfx/AnimFrameCtrl.h"

struct NNSG3dResMdl;

// 0x20-byte model animation: AnimFrameCtrl plus the NNS animation object and the model resource.
// Defined in src/main/unk_02055200.cpp (ctor/dtor in unk_02055b90 / unk_02055bcc / unk_02055c38).
class ModelAnim : public AnimFrameCtrl {
public:
    ModelAnim();
    virtual ~ModelAnim();
    void removeFromRenderObj(u32 a);
    void addToRenderObj(u32 a);
    void replaceWithTex(s32 a, s32 b, s32 c, u8 d, s32 e, u16 f);
    void initWithTex(s32 a, s32 b, s32 c, s32 e, u16 f);
    void replace(s32 a, s32 b, s32 c, s32 e, u16 f);
    void init(s32 a, s32 b, s32 c, u16 e);
    void initFromResource(NNSG3dResMdl *a, void *b, u32 c, u32 d, u16 e);
    BOOL allocJointAnm(u32 a, void *c);
    BOOL allocMatAnm(u32 a, void *c);

    /* 0x18 */ u32 anmObj;
    /* 0x1c */ u32 resMdl;
};

#endif
