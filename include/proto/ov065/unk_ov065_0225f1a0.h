#ifndef PROTO_PROTO_OV065_UNK_OV065_0225F1A0_H
#define PROTO_PROTO_OV065_UNK_OV065_0225F1A0_H

// Prototypes of the functions defined in src/ov065/unk_ov065_0225f1a0.cpp (generated: tools/host_protos.py)

#include "types.h"
#include "net/SockCoreConfig.h"
#ifdef __cplusplus
#include "types.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif
#ifndef PROTO_LOCAL_sSockDefaultSocket
extern void *sSockDefaultSocket;
#endif
#ifndef PROTO_LOCAL_SockCore_SetupStackConfig
void SockCore_SetupStackConfig(void);
#endif
#ifndef PROTO_LOCAL_SockCore_OnStaticAddressReady
void SockCore_OnStaticAddressReady(void);
#endif
#ifndef PROTO_LOCAL_SockCore_OnDhcpAddressReady
void SockCore_OnDhcpAddressReady(void);
#endif
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_sSockCoreState
extern u32 sSockCoreState;
#endif
#ifndef PROTO_LOCAL_sSockLastHostIp
extern u32 sSockLastHostIp;
#endif
#ifndef PROTO_LOCAL_sSockYieldMode
extern u32 sSockYieldMode;
#endif
#ifndef PROTO_LOCAL_SockCore_Startup
s32 SockCore_Startup(SockCoreConfig *cfg);
#endif
#ifndef PROTO_LOCAL_SockCore_CreateMsgPoolAndDefaultSocket
s32 SockCore_CreateMsgPoolAndDefaultSocket(void);
#endif
#ifndef PROTO_LOCAL_SockCore_IsLinkUp
BOOL SockCore_IsLinkUp(void);
#endif
}
#endif

#endif
