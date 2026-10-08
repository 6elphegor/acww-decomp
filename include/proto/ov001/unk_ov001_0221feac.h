#ifndef PROTO_PROTO_OV001_UNK_OV001_0221FEAC_H
#define PROTO_PROTO_OV001_UNK_OV001_0221FEAC_H

// Prototypes of the functions defined in src/ov001/unk_ov001_0221feac.cpp (generated: tools/host_protos.py)

#include "types.h"
struct WfcTask;
#ifdef __cplusplus
#endif

#ifdef __cplusplus
extern "C" {
#endif
#ifndef PROTO_LOCAL_WfcDialog_Open
void WfcDialog_Open(s32 a, s32 b, s32 c, s32 d, s32 e);
#endif
#ifndef PROTO_LOCAL_WfcDialog_Close
void WfcDialog_Close();
#endif
#ifndef PROTO_LOCAL_WfcDialog_GetResult
s32 WfcDialog_GetResult();
#endif
#ifndef PROTO_LOCAL_WfcDialog_IsOpen
BOOL WfcDialog_IsOpen();
#endif
#ifndef PROTO_LOCAL_WfcDialog_SetY
void WfcDialog_SetY(s32 r);
#endif
#ifndef PROTO_LOCAL_WfcDialog_PressButton
void WfcDialog_PressButton(s32 i);
#endif
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_WfcDialog_DimTask
void WfcDialog_DimTask(WfcTask *task);
#endif
#ifndef PROTO_LOCAL_WfcDialog_SlideInTask
void WfcDialog_SlideInTask(WfcTask *task);
#endif
#ifndef PROTO_LOCAL_WfcDialog_InputTask
void WfcDialog_InputTask(WfcTask *task);
#endif
#ifndef PROTO_LOCAL_WfcDialog_AutoCloseTask
void WfcDialog_AutoCloseTask(WfcTask *task);
#endif
#ifndef PROTO_LOCAL_WfcDialog_CloseDelayTask
void WfcDialog_CloseDelayTask(WfcTask *task);
#endif
#ifndef PROTO_LOCAL_WfcDialog_SlideOutTask
void WfcDialog_SlideOutTask(WfcTask *task);
#endif
#ifndef PROTO_LOCAL_WfcDialog_UndimTask
void WfcDialog_UndimTask(WfcTask *task);
#endif
#ifndef PROTO_LOCAL_WfcDialog_DestroyTask
void WfcDialog_DestroyTask(WfcTask *task);
#endif
}
#endif

#endif
