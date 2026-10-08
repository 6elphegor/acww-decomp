#ifndef PROTO_PROTO_MAIN_UNK_02002B1C_H
#define PROTO_PROTO_MAIN_UNK_02002B1C_H

// Prototypes of the functions defined in src/main/unk_02002b1c.cpp (generated: tools/host_protos.py)

#include "types.h"
#ifdef __cplusplus
#include "actor/Actor.h"
#include "npc/VillagerId.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif
#ifndef PROTO_LOCAL_VillagerId_IsValidSpecies
u32 VillagerId_IsValidSpecies(u32 id);
#endif
#ifndef PROTO_LOCAL_Math_AngleXZ
s32 Math_AngleXZ(s32 *a, s32 *b);
#endif
#ifndef PROTO_LOCAL_HostActor_Pos
unsigned char *HostActor_Pos(void *actor);
#endif
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_VillagerId_GetVoiceType
u32 VillagerId_GetVoiceType(VillagerId *o);
#endif
#ifndef PROTO_LOCAL_VillagerId_GetSpecies
u32 VillagerId_GetSpecies(VillagerId *o);
#endif
}
#ifndef PROTO_LOCAL_gActorList
extern ActorList gActorList;
#endif
#ifndef PROTO_LOCAL_sActorSpawnPos
extern void *sActorSpawnPos;
#endif
#ifndef PROTO_LOCAL_sActorSpawnRot
extern void *sActorSpawnRot;
#endif
#endif

#endif
