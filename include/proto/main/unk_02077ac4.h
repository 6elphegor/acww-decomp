#ifndef PROTO_PROTO_MAIN_UNK_02077AC4_H
#define PROTO_PROTO_MAIN_UNK_02077AC4_H

// Prototypes of the functions defined in src/main/unk_02077ac4.cpp (generated: tools/host_protos.py)

#include "types.h"
#ifdef __cplusplus
#include "npc/ErrandRecord.h"
#include "npc/VillagerState.h"
#include "save/VillagerData.h"
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_Villager_GetState
VillagerState *Villager_GetState(VillagerData *a);
#endif
#ifndef PROTO_LOCAL_SaveVillagers_Get
VillagerData *SaveVillagers_Get(void *base, s32 idx);
#endif
#ifndef PROTO_LOCAL_VillagerStates_GetEntry
VillagerState *VillagerStates_GetEntry(u32 a);
#endif
#ifndef PROTO_LOCAL_VillagerState_GetErrand
ErrandRecord *VillagerState_GetErrand(VillagerState *e);
#endif
}
#endif

#endif
