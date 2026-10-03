#include "types.h"

class AnimFrameCtrl {
public:
    virtual ~AnimFrameCtrl();

    u32 numFrames;
    u32 curFrame;
    u32 prevFrame;
    u32 frameStep;
    u32 playMode;
};

class ModelAnim : public AnimFrameCtrl {
public:
    ModelAnim();
    virtual ~ModelAnim();
    BOOL allocMatAnm(u32 a, void *c);

    u32 anmObj;
    u32 resMdl;
};

extern "C" {
u32 NNS_G3dAnmObjCalcSizeRequired(const char *a, u32 b);
void *Heap_Alloc(void *h, u32 n);
extern void *gCurrentHeap;
}

char sMatAnmHeader[4] = {'M', 0, 'A', 'T'};

extern "C" void *Gfx3d_AllocAnmObj(u32 a, const char *b, void *c) {
    if (a == 0) {
        return NULL;
    }
    u32 n = NNS_G3dAnmObjCalcSizeRequired(b, a);
    if (c == NULL) {
        c = gCurrentHeap;
    }
    return Heap_Alloc(c, n);
}

BOOL ModelAnim::allocMatAnm(u32 a, void *c) {
    if (anmObj != 0 || resMdl != 0) {
        return FALSE;
    }
    anmObj = (u32)Gfx3d_AllocAnmObj(a, sMatAnmHeader, c);
    resMdl = a;
    if (anmObj != 0) {
        return TRUE;
    }
    return FALSE;
}
