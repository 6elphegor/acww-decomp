#ifndef PROTO_PROTO_OV074_UNK_OV074_022713C0_H
#define PROTO_PROTO_OV074_UNK_OV074_022713C0_H

// Prototypes of the functions defined in src/ov074/unk_ov074_022713c0.cpp (generated: tools/host_protos.py)

#include "types.h"
#ifdef __cplusplus
#include "types.h"
class SpNpcBlanca;
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_SpNpcBlanca_Create
SpNpcBlanca *SpNpcBlanca_Create();
#endif
#ifndef PROTO_LOCAL_SpNpcBlanca_ChangeAct
void SpNpcBlanca_ChangeAct(SpNpcBlanca *self, s32 state);
#endif
#ifndef PROTO_LOCAL_SpNpcBlanca_IsInFocusBox
s32 SpNpcBlanca_IsInFocusBox(void *self, void *a, void *b);
#endif
#ifndef PROTO_LOCAL_SpNpcBlanca_IsInCameraBox
s32 SpNpcBlanca_IsInCameraBox(void *self);
#endif
#ifndef PROTO_LOCAL_SpNpcBlanca_PickWanderTarget
s32 SpNpcBlanca_PickWanderTarget(void *self, s32 *a, s32 *b);
#endif
#ifndef PROTO_LOCAL_SpNpcBlanca_FindSidestepPos
s32 SpNpcBlanca_FindSidestepPos(void *self, void *out, void *x);
#endif
#ifndef PROTO_LOCAL_SpNpcBlanca_SteerAroundObstacle
s32 SpNpcBlanca_SteerAroundObstacle(void *self);
#endif
#ifndef PROTO_LOCAL_SpNpcBlanca_TryAvoidObstacle
BOOL SpNpcBlanca_TryAvoidObstacle(void *self);
#endif
}
#endif

#endif
