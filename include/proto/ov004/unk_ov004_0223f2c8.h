#ifndef PROTO_PROTO_OV004_UNK_OV004_0223F2C8_H
#define PROTO_PROTO_OV004_UNK_OV004_0223F2C8_H

// Prototypes of the functions defined in src/ov004/unk_ov004_0223f2c8.cpp (generated: tools/host_protos.py)

#include "types.h"
#include "game/SceneWarp.h"
#ifdef __cplusplus
#include "game/SceneInfo.h"
#include "types.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif
#ifndef PROTO_LOCAL_KkShowFx_Start
void KkShowFx_Start(void);
#endif
#ifndef PROTO_LOCAL_KkShowFx_Update
void KkShowFx_Update(void);
#endif
#ifndef PROTO_LOCAL_KkShowFx_CallUnk1f70
void KkShowFx_CallUnk1f70(void);
#endif
#ifndef PROTO_LOCAL_KkShowFx_Stop
void KkShowFx_Stop();
#endif
#ifndef PROTO_LOCAL_KkShowFx_CallUnk1de4
void KkShowFx_CallUnk1de4();
#endif
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_KkShowFx_SetParam
void KkShowFx_SetParam(s32 a);
#endif
#ifndef PROTO_LOCAL_KkShowFx_GetState
s32 KkShowFx_GetState();
#endif
#ifndef PROTO_LOCAL_data_ov004_0224f2d0
extern u32 data_ov004_0224f2d0;
#endif
}
#ifndef PROTO_LOCAL_sKkShowFxActive
extern u8 sKkShowFxActive;
#endif
#ifndef PROTO_LOCAL_sKkShowFx
extern void *sKkShowFx;
#endif
#ifndef PROTO_LOCAL_sRoomSceneEntryList
extern SceneWarpList sRoomSceneEntryList;
#endif
#ifndef PROTO_LOCAL_data_ov004_0225893c
extern SceneWarp data_ov004_0225893c (1, VecFx32Copy (0xf000, 0x200, 0x1d000), 0x11000000, 0x4000, 2, 2, - 0x4000, 2);
#endif
#ifndef PROTO_LOCAL_sRoomCommonProfileCount
extern u32 sRoomCommonProfileCount;
#endif
#ifndef PROTO_LOCAL_data_ov004_02258958
extern SceneWarp data_ov004_02258958 (5, VecFx32Copy (0x11000, 0x200, 0x1d000), 0x11000000, - 0x4000, 2, 2, 0x4000, 2);
#endif
#ifndef PROTO_LOCAL_data_ov004_02258974
extern SceneWarp data_ov004_02258974 (0x3e, VecFx32Copy (0, 0, 0), 0x800000, 0, 2, 2, 0, 0);
#endif
#ifndef PROTO_LOCAL_sRoomCommonProfiles
extern u32 sRoomCommonProfiles[17];
#endif
#endif

#endif
