#include "types.h"
#include "Unk_020d8c7c.h"
#include "sys/CameraBase.h"
#include "gfx/Camera.h"

extern "C" void Gfx3d_SetViewMatrix(void *p);


// The view matrix is the FxMtx43 base of Camera, the one class derived from CameraBase (at 0x50 on the DS).
BOOL CameraBase::onDraw() {
    Gfx3d_SetViewMatrix(static_cast<FxMtx43 *>(static_cast<Camera *>(this)));
    return TRUE;
}
