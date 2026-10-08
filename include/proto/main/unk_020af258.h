#ifndef PROTO_PROTO_MAIN_UNK_020AF258_H
#define PROTO_PROTO_MAIN_UNK_020AF258_H

// Prototypes of the functions defined in src/main/unk_020af258.cpp (generated: tools/host_protos.py)

#include "types.h"
#ifdef __cplusplus
#include "gfx/VecFx32.h"
#include "types.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif
#ifndef PROTO_LOCAL_LidSleep_Init
void LidSleep_Init();
#endif
#ifndef PROTO_LOCAL_LidSleep_Update
void LidSleep_Update();
#endif
#ifndef PROTO_LOCAL_LidSleep_KeepSoundOff
void LidSleep_KeepSoundOff();
#endif
#ifndef PROTO_LOCAL_LidSleep_BacklightOff
void LidSleep_BacklightOff();
#endif
#ifndef PROTO_LOCAL_LidSleep_BacklightRestore
void LidSleep_BacklightRestore();
#endif
#ifndef PROTO_LOCAL_LidSleep_WakeLcd
void LidSleep_WakeLcd();
#endif
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_sLidSleepFlags
extern u8 sLidSleepFlags;
#endif
#ifndef PROTO_LOCAL_sLidSleepState
extern u8 sLidSleepState;
#endif
#ifndef PROTO_LOCAL_sLidSleepBacklightBottom
extern u32 sLidSleepBacklightBottom;
#endif
#ifndef PROTO_LOCAL_sLidSleepBacklightTop
extern u32 sLidSleepBacklightTop;
#endif
#ifndef PROTO_LOCAL_Field_TryPushSnowball
s32 Field_TryPushSnowball(VecFx32 *a, s16 *b, s32 *c, s32 d, s16 e);
#endif
#ifndef PROTO_LOCAL_LidSleep_TestFlag
BOOL LidSleep_TestFlag(s32 m);
#endif
#ifndef PROTO_LOCAL_LidSleep_SetFlag
void LidSleep_SetFlag(s32 m);
#endif
#ifndef PROTO_LOCAL_LidSleep_ClearFlag
void LidSleep_ClearFlag(s32 m);
#endif
}
#endif

#endif
