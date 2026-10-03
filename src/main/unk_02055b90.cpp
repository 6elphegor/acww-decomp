#include "types.h"

class AnimFrameCtrl {
public:
    virtual ~AnimFrameCtrl();

    u32 unk_04;
    u32 unk_08;
    u32 unk_0c;
    u32 unk_10;
    u32 unk_14;
};

class ModelAnim : public AnimFrameCtrl {
public:
    ModelAnim();
    virtual ~ModelAnim();
    BOOL allocJointAnm(u32 a, void *c);

    u32 unk_18;
    u32 unk_1c;
};

extern "C" void *Gfx3d_AllocAnmObj(u32 a, const char *b, void *c);

char sJointAnmHeader[4] = {'J', 0, 'A', 'C'};

BOOL ModelAnim::allocJointAnm(u32 a, void *c) {
    if (unk_18 != 0 || unk_1c != 0) {
        return FALSE;
    }
    unk_18 = (u32)Gfx3d_AllocAnmObj(a, sJointAnmHeader, c);
    unk_1c = a;
    if (unk_18 != 0) {
        return TRUE;
    }
    return FALSE;
}
