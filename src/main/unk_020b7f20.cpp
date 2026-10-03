#include "types.h"
#include "Unk_020d8c7c.h"

extern "C" void Gfx3d_SetViewMatrix(void *p);

// Vtable 0x020e4590 (destructor left implicit: mwcc then emits D1, D0 in that order)
class CameraBase : public GameProc {
public:
    virtual BOOL onDraw();
};

BOOL CameraBase::onDraw() {
    Gfx3d_SetViewMatrix((u8 *)this + 0x50);
    return TRUE;
}
