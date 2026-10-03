#include "types.h"

class ViewFrustum {
public:
    ViewFrustum();
    virtual ~ViewFrustum() {}
    void setPerspective(s32 a, u16 b, s32 c, s32 d);

    /* 0x04 */ u8 leftPlane[0x48];
    /* 0x4c */ s32 aspect;
    /* 0x50 */ s32 nearClip;
    /* 0x54 */ s32 farClip;
    /* 0x58 */ u16 fovy;
};
extern "C" void _ZN11ViewFrustum10calcPlanesEv(ViewFrustum *o);

ViewFrustum::ViewFrustum() {
    setPerspective(0x1555, 0xe38, 0x1000, 0x1388000);
}

void ViewFrustum::setPerspective(s32 a, u16 b, s32 c, s32 d) {
    aspect = a;
    fovy = b;
    nearClip = c;
    farClip = d;
    _ZN11ViewFrustum10calcPlanesEv(this);
}
