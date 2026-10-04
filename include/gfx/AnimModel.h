#ifndef GFX_ANIMMODEL_H
#define GFX_ANIMMODEL_H

// Cached model with a joint/visibility animation object (0xb8 bytes; base of BlendAnimModel). Defined in
// src/main/unk_02053848.cpp.
#include "types.h"
#include "gfx/CachedModel.h"
#include "gfx/AnimFrameCtrl.h"

struct Unk_02054584_Data;

class AnimModel : public CachedModel, public AnimFrameCtrl {
public:
    AnimModel();
    virtual ~AnimModel();
    /* 0xb4 */ Unk_02054584_Data *anmObj;

    void detachAnim();
    void detachVisAnim();
    void detachJointAnim();
    s32 attachAnim();
    void setFrame(s32 v);
    s32 drawAnimated(void *q);
    void stepAnim();
    BOOL allocAnmObj(void *x);
};

#endif
