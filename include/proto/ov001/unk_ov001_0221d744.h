#ifndef PROTO_PROTO_OV001_UNK_OV001_0221D744_H
#define PROTO_PROTO_OV001_UNK_OV001_0221D744_H

// Prototypes of the functions defined in src/ov001/unk_ov001_0221d744.cpp (generated: tools/host_protos.py)

#include "types.h"
#include "net/WfcApScanEntry.h"
#include "nitro/wm.h"
#ifdef __cplusplus
#include "types.h"
struct WfcApScanWork;
#endif

#ifdef __cplusplus
extern "C" {
#endif
#ifndef PROTO_LOCAL_WfcApScan_Alloc
void WfcApScan_Alloc();
#endif
#ifndef PROTO_LOCAL_WfcApScan_Free
void WfcApScan_Free();
#endif
#ifndef PROTO_LOCAL_WfcApScan_StoreResults
void WfcApScan_StoreResults(WMStartScanExCallback *p);
#endif
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_WfcApScan_Start
BOOL WfcApScan_Start();
#endif
#ifndef PROTO_LOCAL_WfcApScan_StartScan
BOOL WfcApScan_StartScan();
#endif
#ifndef PROTO_LOCAL_WfcApScan_Stop
BOOL WfcApScan_Stop();
#endif
#ifndef PROTO_LOCAL_WfcApScan_GetResults
s32 WfcApScan_GetResults(WfcApScanEntry **out);
#endif
#ifndef PROTO_LOCAL_WfcApScan_WmCallback
void WfcApScan_WmCallback(WMMsg *msg);
#endif
}
#ifndef PROTO_LOCAL_sWfcApScan
extern WfcApScanWork *sWfcApScan;
#endif
#endif

#endif
