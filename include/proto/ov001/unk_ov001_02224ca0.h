#ifndef PROTO_PROTO_OV001_UNK_OV001_02224CA0_H
#define PROTO_PROTO_OV001_UNK_OV001_02224CA0_H

// Prototypes of the functions defined in src/ov001/unk_ov001_02224ca0.cpp (generated: tools/host_protos.py)

#include "types.h"
#include "net/WfcPool.h"
struct WfcFadeState;
#ifdef __cplusplus
#include "types.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif
#ifndef PROTO_LOCAL_WfcFade_Init
void WfcFade_Init();
#endif
#ifndef PROTO_LOCAL_WfcFade_Shutdown
void WfcFade_Shutdown();
#endif
#ifndef PROTO_LOCAL_WfcPool_Destroy
void WfcPool_Destroy(void *a, ...);
#endif
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_sWfcFadeFlags
extern u8 sWfcFadeFlags[4];
#endif
#ifndef PROTO_LOCAL_sWfcFadeEndValues
extern u8 sWfcFadeEndValues[4];
#endif
#ifndef PROTO_LOCAL_WfcFade_IsBusy
u8 WfcFade_IsBusy(u32 mode);
#endif
#ifndef PROTO_LOCAL_WfcFade_Start
u32 WfcFade_Start(u32 idx, u32 mode, s32 val, u32 h);
#endif
#ifndef PROTO_LOCAL_WfcFade_Task
void WfcFade_Task(void *task, WfcFadeState *st);
#endif
#ifndef PROTO_LOCAL_WfcFade_StartWait
s32 WfcFade_StartWait(u32 v);
#endif
#ifndef PROTO_LOCAL_WfcFade_WaitTask
void WfcFade_WaitTask(void *task, WfcFadeState *st);
#endif
#ifndef PROTO_LOCAL_WfcPool_Create
WfcPool *WfcPool_Create(s32 count);
#endif
#ifndef PROTO_LOCAL_WfcPool_CreateFrom
WfcPool *WfcPool_CreateFrom(s32 count, void *items, u32 stride);
#endif
}
#endif

#endif
