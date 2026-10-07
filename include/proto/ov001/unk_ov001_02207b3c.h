#ifndef PROTO_PROTO_OV001_UNK_OV001_02207B3C_H
#define PROTO_PROTO_OV001_UNK_OV001_02207B3C_H

// Prototypes of the functions defined in src/ov001/unk_ov001_02207b3c.cpp (generated: tools/host_protos.py)

#include "types.h"
#ifdef __cplusplus
#include "types.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif
#ifndef PROTO_LOCAL_WfcButtonBar_Close
void WfcButtonBar_Close();
#endif
#ifndef PROTO_LOCAL_WfcButtonBar_EnableInput
void WfcButtonBar_EnableInput();
#endif
#ifndef PROTO_LOCAL_WfcButtonBar_DisableInput
void WfcButtonBar_DisableInput();
#endif
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_WfcButtonBar_Create
void WfcButtonBar_Create(u32 idx);
#endif
#ifndef PROTO_LOCAL_WfcButtonBar_GetResult
s32 WfcButtonBar_GetResult();
#endif
#ifndef PROTO_LOCAL_WfcButtonBar_SetResult
void WfcButtonBar_SetResult(s32 v);
#endif
#ifndef PROTO_LOCAL_WfcButtonBar_ForceResult
void WfcButtonBar_ForceResult(s32 v);
#endif
#ifndef PROTO_LOCAL_WfcButtonBar_IsClosed
BOOL WfcButtonBar_IsClosed();
#endif
#ifndef PROTO_LOCAL_WfcButtonBar_SetY
void WfcButtonBar_SetY(s32 y);
#endif
#ifndef PROTO_LOCAL_WfcButtonBar_SlideInTask
void WfcButtonBar_SlideInTask(u32 task);
#endif
#ifndef PROTO_LOCAL_WfcButtonBar_SettleTask
void WfcButtonBar_SettleTask(u32 task);
#endif
#ifndef PROTO_LOCAL_WfcButtonBar_InputTask
void WfcButtonBar_InputTask(u32 task);
#endif
#ifndef PROTO_LOCAL_WfcButtonBar_SlideOutTask
void WfcButtonBar_SlideOutTask(u32 task);
#endif
#ifndef PROTO_LOCAL_WfcButtonBar_DestroyTask
void WfcButtonBar_DestroyTask(u32 task);
#endif
#ifndef PROTO_LOCAL_WfcButtonBar_PressAnimTask
void WfcButtonBar_PressAnimTask(u32 task);
#endif
}
#endif

#endif
