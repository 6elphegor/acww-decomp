#ifndef PROTO_PROTO_OV004_UNK_OV004_022136D0_H
#define PROTO_PROTO_OV004_UNK_OV004_022136D0_H

// Prototypes of the functions defined in src/ov004/unk_ov004_022136d0.cpp (generated: tools/host_protos.py)

#include "types.h"
#ifdef __cplusplus
#include "types.h"
class RoomBoardSign;
#endif

#ifdef __cplusplus
extern "C" {
#endif
#ifndef PROTO_LOCAL_RoomBoardSign_ClearRegistry
void RoomBoardSign_ClearRegistry();
#endif
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_RoomBoardSign_Create
RoomBoardSign *RoomBoardSign_Create();
#endif
#ifndef PROTO_LOCAL_RoomBoardSign_GetByIndex
void *RoomBoardSign_GetByIndex(s32 i);
#endif
#ifndef PROTO_LOCAL_RoomBoardSign_Spawn
void RoomBoardSign_Spawn(void *a, s32 b, s32 c, s32 d);
#endif
}
#endif

#endif
