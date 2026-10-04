// mwcc-version: 1.2/base
#include "types.h"
#include "gfx/VecFx32.h"
#include "gfx/Mtx43.h"
#include "field/Unk_ov003_02217b78_Ent.h"
#include "field/FieldGroundBackdrop.h"
#include "gfx/Model.h"
#include "gfx/DebugColor.h"

// TU18 of ov003: ground helper class FieldGroundBackdrop (0x02217b10-0x02217be8) and the six colour constants of its header


struct NNSG3dResMdl;






// 4-byte colour constructors (unreferenced except by __sinit)

// other modules' methods are reached through their real mangled symbols (object first)
#define BgModelCache_getGroundTex _ZN12BgModelCache12getGroundTexEv
#define BgModelCache_getAcre _ZN12BgModelCache7getAcreEi
#define Camera_getEyeCurveAngle _ZN6Camera16getEyeCurveAngleEv

extern "C" {
extern void *gCamera;
extern s32 data_020c8cb4;
extern u8 data_021f47e0[];
extern VecFx32 gCameraLookAt;

void Mtx43_SetTranslate(void *m, s32 x, s32 y, s32 z);
void Mtx43_RotateX(void *m, s32 a);
s32 Camera_getEyeCurveAngle(void *self);
void *BgModelCache_Get();
void *BgModelCache_getAcre(void *self, s32 i);
s32 BgModelCache_getGroundTex(void *self);
}

extern "C" {
DebugColor data_ov003_02235478(31, 20, 20, 31);
DebugColor data_ov003_0223547c(20, 20, 31, 31);
// Data order: this unit is placed object by object (see object_order.txt).
DebugColor data_ov003_02235488(31, 31, 20, 31);
DebugColor data_ov003_02235484(20, 31, 20, 31);
DebugColor data_ov003_02235480(20, 31, 31, 31);
DebugColor data_ov003_0223548c(20, 24, 24, 31);
}

// ---- functions ----

FieldGroundBackdrop::FieldGroundBackdrop() {
    clear();
}

FieldGroundBackdrop::~FieldGroundBackdrop() {
}

void FieldGroundBackdrop::clear() {
    modelRes = 0;
}

BOOL FieldGroundBackdrop::init() {
    Unk_ov003_02217b78_Ent *e = (Unk_ov003_02217b78_Ent *)BgModelCache_getAcre(BgModelCache_Get(), 0x83);
    s32 t = BgModelCache_getGroundTex(BgModelCache_Get());
    modelRes = e->modelRes;
    ((Model *)&model)->setResourceAndBind(modelRes, t);
    followCamera();
    return TRUE;
}

BOOL FieldGroundBackdrop::followCamera() {
    VecFx32CtorDtor v;
    void *cam = gCamera;
    if (cam != 0) {
        v.x = gCameraLookAt.x;
        v.y = gCameraLookAt.y;
        v.z = gCameraLookAt.z;
        Mtx43_SetTranslate(data_021f47e0, v.x - data_020c8cb4, 0, 0);
        Mtx43_RotateX(data_021f47e0, Camera_getEyeCurveAngle(cam));
        *(Mtx43 *)((u8 *)&model + 0x64) = *(Mtx43 *)data_021f47e0;
        return TRUE;
    }
    return FALSE;
}
