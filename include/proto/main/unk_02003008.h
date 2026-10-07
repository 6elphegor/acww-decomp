#ifndef PROTO_PROTO_MAIN_UNK_02003008_H
#define PROTO_PROTO_MAIN_UNK_02003008_H

// Prototypes of the functions defined in src/main/unk_02003008.cpp (generated: tools/host_protos.py)

#include "types.h"
#ifdef __cplusplus
#include "npc/VillagerId.h"
#include "types.h"
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_VillagerId_GetPersonality
u32 VillagerId_GetPersonality(VillagerId *o);
#endif
#ifndef PROTO_LOCAL_Villager_PersonalityToGender
u32 Villager_PersonalityToGender(u32 t);
#endif
#ifndef PROTO_LOCAL_Villager_MakePersonalityFileName
void Villager_MakePersonalityFileName(void *buf, u32 size, u32 arg, u32 idx);
#endif
#ifndef PROTO_LOCAL_Villager_PersonalityToVoiceType
u32 Villager_PersonalityToVoiceType(u32 t);
#endif
}
#endif

#endif
