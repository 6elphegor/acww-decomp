#ifndef GFX_VIEWFRUSTUM_H
#define GFX_VIEWFRUSTUM_H

#include "types.h"

// 0x5c-byte view frustum (vtable 0x020d9240; global gViewFrustum). Defined in src/main/unk_0203a058.cpp
// (constructor, setPerspective) and src/main/unk_02039c08.cpp (calcPlanes, testSphere). The destructor is inline
// (units that register gViewFrustum's destructor get a weak copy).
class ViewFrustum {
public:
    ViewFrustum();
    virtual ~ViewFrustum() {}
    void setPerspective(s32 a, u16 b, s32 c, s32 d);
    s32 testSphere(void *m, void *v, s32 r, s32 *out);
    void calcPlanes();

    /* 0x04 */ s32 leftPlane[3];
    /* 0x10 */ s32 topPlane[3];
    /* 0x1c */ s32 rightPlane[3];
    /* 0x28 */ s32 bottomPlane[3];
    /* 0x34 */ s32 unk_34[6];
    /* 0x4c */ s32 aspect;
    /* 0x50 */ s32 nearClip;
    /* 0x54 */ s32 farClip;
    /* 0x58 */ u16 fovy;
};

#endif
