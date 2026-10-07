#ifndef PROTO_PROTO_OV067_UNK_OV067_0225F1A0_H
#define PROTO_PROTO_OV067_UNK_OV067_0225F1A0_H

// Prototypes of the functions defined in src/ov067/unk_ov067_0225f1a0.cpp (generated: tools/host_protos.py)

#include "types.h"
#include "nitro/wm.h"
struct WlxBlock;
struct WlxMpPacket;
struct WlxRole;
struct WlxWmWork;
#ifdef __cplusplus
#include "types.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif
#ifndef PROTO_LOCAL_Wlx_SelectNextEntry
void Wlx_SelectNextEntry(void);
#endif
#ifndef PROTO_LOCAL_Wlx_StartExchange
void Wlx_StartExchange(void);
#endif
#ifndef PROTO_LOCAL_Wlx_StopExchange
void Wlx_StopExchange(void);
#endif
#ifndef PROTO_LOCAL_Wlx_Stop
void Wlx_Stop(void);
#endif
#ifndef PROTO_LOCAL_WlxWm_OnMpDataSent
void WlxWm_OnMpDataSent(void *m);
#endif
#ifndef PROTO_LOCAL_WlxWm_OnIndication
void WlxWm_OnIndication(WMPortRecvCallback *m);
#endif
#ifndef PROTO_LOCAL_WlxWm_OnPortRecv
void WlxWm_OnPortRecv(WMPortRecvCallback *m);
#endif
#ifndef PROTO_LOCAL_WlxWm_EnableStep
void WlxWm_EnableStep(WMPortRecvCallback *m);
#endif
#ifndef PROTO_LOCAL_WlxWm_PowerOnStep
void WlxWm_PowerOnStep(WMPortRecvCallback *m);
#endif
#ifndef PROTO_LOCAL_WlxWm_PowerOffStep
void WlxWm_PowerOffStep(WMPortRecvCallback *m);
#endif
#ifndef PROTO_LOCAL_WlxWm_DisableStep
void WlxWm_DisableStep(WMPortRecvCallback *m);
#endif
#ifndef PROTO_LOCAL_WlxWm_ResetStep
void WlxWm_ResetStep(WMPortRecvCallback *m);
#endif
#ifndef PROTO_LOCAL_WlxBlock_OnMpEndStub
void WlxBlock_OnMpEndStub(void *, void *);
#endif
#ifndef PROTO_LOCAL_WlxDebug_Printf
void WlxDebug_Printf(const char *fmt, ...);
#endif
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_Wlx_OnWmEvent
s32 Wlx_OnWmEvent(u32 cmd, void *arg);
#endif
#ifndef PROTO_LOCAL_Wlx_Init
void Wlx_Init(u32 a, u32 b, u32 c);
#endif
#ifndef PROTO_LOCAL_Wlx_SetPacketSizes
s32 Wlx_SetPacketSizes(u32 a, u32 b, u32 c);
#endif
#ifndef PROTO_LOCAL_Wlx_GetState
s32 Wlx_GetState(void);
#endif
#ifndef PROTO_LOCAL_Wlx_IsParent
s32 Wlx_IsParent(void);
#endif
#ifndef PROTO_LOCAL_Wlx_GetConnectedMask
u16 Wlx_GetConnectedMask(void);
#endif
#ifndef PROTO_LOCAL_Wlx_RegisterData
void Wlx_RegisterData(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5);
#endif
#ifndef PROTO_LOCAL_WlxRole_NextIsParent
s32 WlxRole_NextIsParent(WlxRole *p);
#endif
#ifndef PROTO_LOCAL_WlxWm_HandleError
void WlxWm_HandleError(WlxWmWork *s, s32 id, u32 arg);
#endif
#ifndef PROTO_LOCAL_WlxWm_CheckApiCall
s32 WlxWm_CheckApiCall(WlxWmWork *s, u32 id, u32 arg);
#endif
#ifndef PROTO_LOCAL_WlxWm_CheckCallback
s32 WlxWm_CheckCallback(WlxWmWork *s, void *m);
#endif
#ifndef PROTO_LOCAL_WlxWm_SetState
void WlxWm_SetState(WlxWmWork *s, s32 st, u32 arg);
#endif
#ifndef PROTO_LOCAL_WlxWm_RequestState
void WlxWm_RequestState(WlxWmWork *x, u32 v);
#endif
#ifndef PROTO_LOCAL_WlxBlock_Reset
void WlxBlock_Reset(WlxBlock *w, u32 a, u32 b);
#endif
#ifndef PROTO_LOCAL_WlxBlock_StartSend
void WlxBlock_StartSend(WlxBlock *w, u32 p, u32 q, u32 r, u32 s);
#endif
#ifndef PROTO_LOCAL_WlxBlock_FindEntry
void *WlxBlock_FindEntry(WlxBlock *w, void *start, u32 key, u32 flag);
#endif
#ifndef PROTO_LOCAL_WlxBlock_SelectByBeacon
BOOL WlxBlock_SelectByBeacon(WlxBlock *w, u32 *x);
#endif
#ifndef PROTO_LOCAL_WlxBlock_StoreSegment
void WlxBlock_StoreSegment(WlxBlock *w, s32 idx, void *src);
#endif
#ifndef PROTO_LOCAL_WlxBlock_Receive
BOOL WlxBlock_Receive(WlxBlock *w, WlxMpPacket *msg);
#endif
#ifndef PROTO_LOCAL_WlxBlock_OnConnectStub
void WlxBlock_OnConnectStub(void *, u32);
#endif
#ifndef PROTO_LOCAL_WlxBlock_OnDisconnectStub
void WlxBlock_OnDisconnectStub(void *, u32);
#endif
#ifndef PROTO_LOCAL_WlxDebug_GetWmApiName
char *WlxDebug_GetWmApiName(s32 n);
#endif
#ifndef PROTO_LOCAL_WlxDebug_GetWmErrorName
char *WlxDebug_GetWmErrorName(s32 n);
#endif
#ifndef PROTO_LOCAL_WlxDebug_CheckApiResult
BOOL WlxDebug_CheckApiResult(s32 code, s32 x);
#endif
#ifndef PROTO_LOCAL_WlxDebug_CheckCallbackResult
BOOL WlxDebug_CheckCallbackResult(u16 *m);
#endif
#ifndef PROTO_LOCAL_WlxWm_NextAllowedChannel
u16 WlxWm_NextAllowedChannel(s32 n);
#endif
}
#endif

#endif
