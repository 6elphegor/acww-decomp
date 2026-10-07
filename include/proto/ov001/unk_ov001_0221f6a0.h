#ifndef PROTO_PROTO_OV001_UNK_OV001_0221F6A0_H
#define PROTO_PROTO_OV001_UNK_OV001_0221F6A0_H

// Prototypes of the functions defined in src/ov001/unk_ov001_0221f6a0.cpp (generated: tools/host_protos.py)

#include "types.h"
#ifdef __cplusplus
#include "types.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif
#ifndef PROTO_LOCAL_WfcUsbScan_WmCallback
void WfcUsbScan_WmCallback(void *arg0);
#endif
#ifndef PROTO_LOCAL_WfcUsbScan_CollectAps
void WfcUsbScan_CollectAps(void *arg0);
#endif
#ifndef PROTO_LOCAL_WfcUsbScan_CheckGranted
void WfcUsbScan_CheckGranted(void *arg0);
#endif
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_WfcUsbScan_Start
s32 WfcUsbScan_Start(void (*cb)(s32));
#endif
#ifndef PROTO_LOCAL_WfcUsbScan_StartScan
s32 WfcUsbScan_StartScan();
#endif
#ifndef PROTO_LOCAL_WfcUsbScan_Stop
s32 WfcUsbScan_Stop();
#endif
#ifndef PROTO_LOCAL_WfcUsbScan_SetCallback
void WfcUsbScan_SetCallback(void (*cb)(s32));
#endif
#ifndef PROTO_LOCAL_WfcUsbScan_TimeoutTask
void WfcUsbScan_TimeoutTask(s32 arg);
#endif
}
#endif

#endif
