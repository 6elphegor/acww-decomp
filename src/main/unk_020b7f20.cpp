#include "types.h"
#include "Unk_020d8c7c.h"
#include "sys/CameraBase.h"

extern "C" void Gfx3d_SetViewMatrix(void *p);


BOOL CameraBase::onDraw() {
    Gfx3d_SetViewMatrix((u8 *)this + 0x50);
    return TRUE;
}
