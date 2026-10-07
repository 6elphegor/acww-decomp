#ifndef PROTO_PROTO_OV004_UNK_OV004_02204F24_H
#define PROTO_PROTO_OV004_UNK_OV004_02204F24_H

// Prototypes of the functions defined in src/ov004/unk_ov004_02204f24.cpp (generated: tools/host_protos.py)

#include "types.h"
#ifdef __cplusplus
#include "gfx/VecFx32.h"
#include "room/FtrActor.h"
#include "types.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif
#ifndef PROTO_LOCAL_FtrActor_Create
void *FtrActor_Create();
#endif
#ifndef PROTO_LOCAL__ZN11FtrColliderD1Ev
void *_ZN11FtrColliderD1Ev(void *self);
#endif
#ifndef PROTO_LOCAL_FtrVisNodes_Construct
void FtrVisNodes_Construct(void *);
#endif
#ifndef PROTO_LOCAL_FtrVisNodes_Destruct
void FtrVisNodes_Destruct(void *);
#endif
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_FtrActor_IsLightKind1
u32 FtrActor_IsLightKind1(u32 a);
#endif
#ifndef PROTO_LOCAL_FtrActor_TurnOnRoomLight
void FtrActor_TurnOnRoomLight(u32 a);
#endif
#ifndef PROTO_LOCAL_FtrActor_MakeSpawnArg
u32 FtrActor_MakeSpawnArg(u32 a, u32 b, u32 c, u32 d, u8 f, u32 e);
#endif
#ifndef PROTO_LOCAL_FtrActor_GetArgFtrIndex
u32 FtrActor_GetArgFtrIndex(u32 v);
#endif
#ifndef PROTO_LOCAL_FtrActor_GetArgMode
u32 FtrActor_GetArgMode(u32 v);
#endif
#ifndef PROTO_LOCAL_FtrActor_IsLightSource
BOOL FtrActor_IsLightSource(FtrActor *p);
#endif
#ifndef PROTO_LOCAL_FtrActor_IsStereo
BOOL FtrActor_IsStereo(FtrActor *p);
#endif
#ifndef PROTO_LOCAL_FtrActor_TestPlayerUnk
BOOL FtrActor_TestPlayerUnk();
#endif
#ifndef PROTO_LOCAL_FtrActor_AngleToDir
u32 FtrActor_AngleToDir(s32 v);
#endif
#ifndef PROTO_LOCAL_FtrActor_MakeItemForAngle
void FtrActor_MakeItemForAngle(u16 *out, FtrActor *obj, s32 ang);
#endif
#ifndef PROTO_LOCAL_FtrActor_TestSceneUnk
s32 FtrActor_TestSceneUnk(s32 a);
#endif
#ifndef PROTO_LOCAL_FtrActor_TestCurSceneUnk
s32 FtrActor_TestCurSceneUnk();
#endif
#ifndef PROTO_LOCAL_FtrActor_GetDragSe
s32 FtrActor_GetDragSe(void);
#endif
#ifndef PROTO_LOCAL_FtrActor_SpawnActorC0
void FtrActor_SpawnActorC0(void *a, u32 x);
#endif
#ifndef PROTO_LOCAL_FtrActor_PredIsLightSource
s32 FtrActor_PredIsLightSource(FtrActor *p);
#endif
#ifndef PROTO_LOCAL_FtrActor_PredIsStereo
s32 FtrActor_PredIsStereo(FtrActor *p);
#endif
#ifndef PROTO_LOCAL_FtrActor_PredIsSeatOrBed
s32 FtrActor_PredIsSeatOrBed(FtrActor *p);
#endif
#ifndef PROTO_LOCAL_FtrActor_PredIsGyroid
s32 FtrActor_PredIsGyroid(FtrActor *p);
#endif
#ifndef PROTO_LOCAL_FtrActor_GetItemId
void FtrActor_GetItemId(u16 *out, FtrActor *o);
#endif
#ifndef PROTO_LOCAL_FtrStack_CalcRelPlacement
BOOL FtrStack_CalcRelPlacement(s32 *idx, VecFx32 *pos, s16 *ang, s32 x, s32 a, s16 b);
#endif
#ifndef PROTO_LOCAL_FtrGlowMat_GetBaseEmission
u16 FtrGlowMat_GetBaseEmission();
#endif
}
#endif

#endif
