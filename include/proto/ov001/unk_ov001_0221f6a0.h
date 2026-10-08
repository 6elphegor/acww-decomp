#ifndef PROTO_PROTO_OV001_UNK_OV001_0221F6A0_H
#define PROTO_PROTO_OV001_UNK_OV001_0221F6A0_H

// Prototypes of the functions defined in src/ov001/unk_ov001_0221f6a0.cpp (generated: tools/host_protos.py)

#include "types.h"
#include "nitro/wm.h"

#ifdef __cplusplus
extern "C" {
#endif
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
#ifndef PROTO_LOCAL_WfcUsbScan_WmCallback
void WfcUsbScan_WmCallback(WMMsg *msg);
#endif
#ifndef PROTO_LOCAL_WfcUsbScan_CollectAps
void WfcUsbScan_CollectAps(WMStartScanExCallback *a);
#endif
#ifndef PROTO_LOCAL_WfcUsbScan_CheckGranted
void WfcUsbScan_CheckGranted(WMStartScanExCallback *a);
#endif
#ifndef PROTO_LOCAL_WfcUsbScan_TimeoutTask
void WfcUsbScan_TimeoutTask(void *task, void *work);
#endif
#ifdef __cplusplus
}
#endif

#endif
