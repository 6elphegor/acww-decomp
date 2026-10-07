#ifndef PROTO_PROTO_MAIN_UNK_0204C50C_H
#define PROTO_PROTO_MAIN_UNK_0204C50C_H

// Prototypes of the functions defined in src/main/unk_0204c50c.cpp (generated: tools/host_protos.py)

#include "types.h"
#include "game/Unk_0204da0c_Map.h"
#ifdef __cplusplus
#include "town/SceneMapModule.h"
#include "types.h"
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_SceneMapModule_New
SceneMapModule *SceneMapModule_New();
#endif
#ifndef PROTO_LOCAL_BlockMap_GetForArea
Unk_0204da0c_Map *BlockMap_GetForArea(s32 a);
#endif
}
#endif

#endif
