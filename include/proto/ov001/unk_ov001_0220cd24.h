#ifndef PROTO_PROTO_OV001_UNK_OV001_0220CD24_H
#define PROTO_PROTO_OV001_UNK_OV001_0220CD24_H

// Prototypes of the functions defined in src/ov001/unk_ov001_0220cd24.cpp (generated: tools/host_protos.py)

#include "types.h"
struct WfcTransferWork;
#ifdef __cplusplus
#include "types.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif
#ifndef PROTO_LOCAL_data_ov001_0222aa60
extern char data_ov001_0222aa60[0x14];
#endif
#ifndef PROTO_LOCAL_data_ov001_0222aa8c
extern char data_ov001_0222aa8c[0x18];
#endif
#ifndef PROTO_LOCAL_data_ov001_0222aa74
extern char data_ov001_0222aa74[0x18];
#endif
#ifndef PROTO_LOCAL_WfcTransfer_RequestEnd
void WfcTransfer_RequestEnd();
#endif
#ifndef PROTO_LOCAL_WfcTransfer_StartSend
void WfcTransfer_StartSend();
#endif
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_WfcTransfer_EndTask
void WfcTransfer_EndTask(s32 a);
#endif
#ifndef PROTO_LOCAL_WfcTransfer_IsFinished
BOOL WfcTransfer_IsFinished();
#endif
#ifndef PROTO_LOCAL_WfcTransfer_GetChildUser
u8 *WfcTransfer_GetChildUser();
#endif
#ifndef PROTO_LOCAL_WfcTransfer_Task
void WfcTransfer_Task(s32 a);
#endif
}
#ifndef PROTO_LOCAL_sWfcTransfer
extern WfcTransferWork *sWfcTransfer;
#endif
#endif

#endif
