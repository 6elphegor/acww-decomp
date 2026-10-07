#ifndef PROTO_PROTO_MAIN_UNK_020B6B44_H
#define PROTO_PROTO_MAIN_UNK_020B6B44_H

// Prototypes of the functions defined in src/main/unk_020b6b44.cpp (generated: tools/host_protos.py)

#include "types.h"
#include "game/Basis.h"
#ifdef __cplusplus
#include "gfx/VecFx32.h"
#include "types.h"
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_TouchPick_HitCylinder
BOOL TouchPick_HitCylinder(VecFx32 *p, VecFx32 *q, VecFx32 *r, s32 a, s32 b);
#endif
#ifndef PROTO_LOCAL_TouchPick_CalcRay
void TouchPick_CalcRay(Basis *out, s32 x, s32 z);
#endif
}
#endif

#endif
