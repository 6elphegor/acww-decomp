#ifndef PROTO_PROTO_OV001_UNK_OV001_02208C2C_H
#define PROTO_PROTO_OV001_UNK_OV001_02208C2C_H

// Prototypes of the functions defined in src/ov001/unk_ov001_02208c2c.cpp (generated: tools/host_protos.py)

#include "types.h"
#ifdef __cplusplus
#include "types.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif
#ifndef PROTO_LOCAL_WfcTextKb_Create
void WfcTextKb_Create();
#endif
#ifndef PROTO_LOCAL_WfcTextKb_Close
void WfcTextKb_Close();
#endif
#ifndef PROTO_LOCAL_WfcTextKb_SlideInStep0
void WfcTextKb_SlideInStep0(void *self);
#endif
#ifndef PROTO_LOCAL_WfcTextKb_SlideInStep1
void WfcTextKb_SlideInStep1(void *self);
#endif
#ifndef PROTO_LOCAL_WfcTextKb_SlideInStep2
void WfcTextKb_SlideInStep2(void *self);
#endif
#ifndef PROTO_LOCAL_WfcTextKb_SlideInStep3
void WfcTextKb_SlideInStep3(void *self);
#endif
#ifndef PROTO_LOCAL_WfcTextKb_SlideInStep4
void WfcTextKb_SlideInStep4(void *self);
#endif
#ifndef PROTO_LOCAL_WfcTextKb_InputTask
void WfcTextKb_InputTask();
#endif
#ifndef PROTO_LOCAL_WfcTextKb_HandleTouchPress
void WfcTextKb_HandleTouchPress();
#endif
#ifndef PROTO_LOCAL_WfcTextKb_HandleTouchRelease
void WfcTextKb_HandleTouchRelease();
#endif
#ifndef PROTO_LOCAL_WfcTextKb_HandleTouchHold
void WfcTextKb_HandleTouchHold();
#endif
#ifndef PROTO_LOCAL_WfcTextKb_HandlePad
void WfcTextKb_HandlePad();
#endif
#ifndef PROTO_LOCAL_WfcTextKb_UpdateCursor
void WfcTextKb_UpdateCursor();
#endif
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_WfcTextKb_GetKey
u32 WfcTextKb_GetKey();
#endif
#ifndef PROTO_LOCAL_WfcTextKb_SetDeleteEnabled
void WfcTextKb_SetDeleteEnabled(u32 v);
#endif
#ifndef PROTO_LOCAL_WfcTextKb_SetInsertEnabled
void WfcTextKb_SetInsertEnabled(u32 v);
#endif
#ifndef PROTO_LOCAL_WfcTextKb_Exists
BOOL WfcTextKb_Exists();
#endif
#ifndef PROTO_LOCAL_WfcTextKb_ToggleCapsLock
s32 WfcTextKb_ToggleCapsLock();
#endif
#ifndef PROTO_LOCAL_WfcTextKb_ToggleShift
s32 WfcTextKb_ToggleShift();
#endif
#ifndef PROTO_LOCAL_WfcTextKb_SetPressedKey
void WfcTextKb_SetPressedKey(s32 a);
#endif
#ifndef PROTO_LOCAL_WfcTextKb_SetRowY
void WfcTextKb_SetRowY(s32 a, s32 b, u32 c);
#endif
#ifndef PROTO_LOCAL_WfcTextKb_SetMode
void WfcTextKb_SetMode(s32 mode);
#endif
#ifndef PROTO_LOCAL_WfcTextKb_SetKeyHighlight
void WfcTextKb_SetKeyHighlight(s32 idx, s32 v);
#endif
#ifndef PROTO_LOCAL_WfcTextKb_MoveCursor
void WfcTextKb_MoveCursor(s32 a);
#endif
#ifndef PROTO_LOCAL_WfcTextKb_SlideOutStep0
void WfcTextKb_SlideOutStep0(s32 a);
#endif
#ifndef PROTO_LOCAL_WfcTextKb_Destroy
void WfcTextKb_Destroy(s32 a);
#endif
}
#endif

#endif
