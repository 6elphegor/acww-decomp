#ifndef PROTO_PROTO_OV004_UNK_OV004_02204F24_H
#define PROTO_PROTO_OV004_UNK_OV004_02204F24_H

// Prototypes of the functions defined in src/ov004/unk_ov004_02204f24.cpp (generated: tools/host_protos.py)

#include "types.h"
#ifdef __cplusplus
#include "gfx/VecFx32.h"
#include "room/FtrActor.h"
#include "room/FtrModelRes.h"
#include "types.h"
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_FtrActor_PlayAnimsFromLastFrame
void FtrActor_PlayAnimsFromLastFrame(FtrActor *self, u32 a, s32 b, s32 c);
#endif
#ifndef PROTO_LOCAL_FtrActor_StepAnims
BOOL FtrActor_StepAnims(FtrActor *self);
#endif
#ifndef PROTO_LOCAL_FtrActor_GetHeap
ModelSlot *FtrActor_GetHeap(FtrActor *self);
#endif
#ifndef PROTO_LOCAL_FtrActor_LocalToWorld
void FtrActor_LocalToWorld(FtrActor *self, VecFx32 *out, VecFx32 *src);
#endif
#ifndef PROTO_LOCAL_FtrActor_GetCorner
void FtrActor_GetCorner(FtrActor *self, VecFx32 *out, s32 i);
#endif
#ifndef PROTO_LOCAL_FtrActor_GetCenter
void FtrActor_GetCenter(FtrActor *self, VecFx32 *out);
#endif
#ifndef PROTO_LOCAL_FtrActor_IsWithinDist
BOOL FtrActor_IsWithinDist(VecFx32 *pos, s32 a, VecFx32 *p, s32 b);
#endif
#ifndef PROTO_LOCAL_FtrActor_IsPosClearOfCharacters
BOOL FtrActor_IsPosClearOfCharacters(VecFx32 *pos, s32 a, s32 b, s32 c, s32 d);
#endif
#ifndef PROTO_LOCAL_FtrActor_GetParent
FtrActor *FtrActor_GetParent(FtrActor *self);
#endif
#ifndef PROTO_LOCAL_FtrActor_GetFtrIndex
s32 FtrActor_GetFtrIndex(FtrActor *self);
#endif
#ifndef PROTO_LOCAL_FtrActor_RequestToggle
BOOL FtrActor_RequestToggle(FtrActor *self);
#endif
#ifndef PROTO_LOCAL_FtrActor_GetLayer
u8 FtrActor_GetLayer(FtrActor *self);
#endif
#ifndef PROTO_LOCAL_FtrActor_CalcWorldMtx
void FtrActor_CalcWorldMtx(FtrActor *self, VecFx32 *a, s32 b);
#endif
#ifndef PROTO_LOCAL_FtrActor_UpdateMtx
void FtrActor_UpdateMtx(FtrActor *self);
#endif
#ifndef PROTO_LOCAL_FtrActor_GetBoxSize
void FtrActor_GetBoxSize(FtrActor *self, VecFx32 *out);
#endif
#ifndef PROTO_LOCAL_FtrActor_InitCollider
void FtrActor_InitCollider(FtrActor *self);
#endif
#ifndef PROTO_LOCAL_FtrActor_ReleaseCollider
void FtrActor_ReleaseCollider(FtrActor *self);
#endif
#ifndef PROTO_LOCAL_FtrActor_UpdateBox
void FtrActor_UpdateBox(FtrActor *self);
#endif
#ifndef PROTO_LOCAL_FtrActor_UpdateTopItemBoxes
void FtrActor_UpdateTopItemBoxes(FtrActor *self);
#endif
#ifndef PROTO_LOCAL_FtrActor_SetInitialAct
void FtrActor_SetInitialAct(FtrActor *self);
#endif
}
#endif

#endif
