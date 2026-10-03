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
    BOOL allocJointAnm(u32 a, void *c);

    u32 anmObj;
    u32 resMdl;
};

extern "C" void *Gfx3d_AllocAnmObj(u32 a, const char *b, void *c);

char sJointAnmHeader[4] = {'J', 0, 'A', 'C'};

BOOL ModelAnim::allocJointAnm(u32 a, void *c) {
    if (anmObj != 0 || resMdl != 0) {
        return FALSE;
    }
    anmObj = (u32)Gfx3d_AllocAnmObj(a, sJointAnmHeader, c);
    resMdl = a;
    if (anmObj != 0) {
        return TRUE;
    }
    return FALSE;
}
