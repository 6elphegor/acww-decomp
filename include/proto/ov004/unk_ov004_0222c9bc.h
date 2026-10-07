#ifndef PROTO_PROTO_OV004_UNK_OV004_0222C9BC_H
#define PROTO_PROTO_OV004_UNK_OV004_0222C9BC_H

// Prototypes of the functions defined in src/ov004/unk_ov004_0222c9bc.cpp (generated: tools/host_protos.py)

#include "types.h"
#include "gfx/V3.h"
#ifdef __cplusplus
#include "types.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif
#ifndef PROTO_LOCAL_MuseumAquarium_Create
void *MuseumAquarium_Create();
#endif
#ifndef PROTO_LOCAL_AquariumFish_StateNone
void AquariumFish_StateNone();
#endif
#ifndef PROTO_LOCAL_MuseumAquarium_FishStateNone
void MuseumAquarium_FishStateNone();
#endif
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_Aquarium_StepX
void Aquarium_StepX(s32 *p, s32 a, u32 ang);
#endif
#ifndef PROTO_LOCAL_Aquarium_StepZ
void Aquarium_StepZ(s32 *p, s32 a, u32 ang);
#endif
#ifndef PROTO_LOCAL_Aquarium_StepXZ
void Aquarium_StepXZ(V3 *p, s32 a, s16 ang);
#endif
#ifndef PROTO_LOCAL_Aquarium_RandFx
s32 Aquarium_RandFx(s32 a, s32 b);
#endif
#ifndef PROTO_LOCAL_Aquarium_RandAngle
s16 Aquarium_RandAngle(s32 a, s32 b);
#endif
#ifndef PROTO_LOCAL_Aquarium_RandRange
s32 Aquarium_RandRange(s32 a, s32 b);
#endif
#ifndef PROTO_LOCAL_Aquarium_TurnTowardHome
BOOL Aquarium_TurnTowardHome(void *obj, void *a, void *b, s32 max);
#endif
#ifndef PROTO_LOCAL_Aquarium_ProbeTurnSide
BOOL Aquarium_ProbeTurnSide(s32 *p, s32 v);
#endif
#ifndef PROTO_LOCAL_Aquarium_TestHeight800At
BOOL Aquarium_TestHeight800At(V3 *pos);
#endif
#ifndef PROTO_LOCAL_Aquarium_Oscillate
void Aquarium_Oscillate(s16 *out, u8 *flag, s32 *cnt, s32 max, s32 mul);
#endif
#ifndef PROTO_LOCAL_Aquarium_ApplyCorrection
void Aquarium_ApplyCorrection(void *self, s32 *p, s32 a, s32 b, s32 c, s32 d);
#endif
}
#endif

#endif
