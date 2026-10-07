#ifndef PROTO_PROTO_MAIN_UNK_0206D4A4_H
#define PROTO_PROTO_MAIN_UNK_0206D4A4_H

// Prototypes of the functions defined in src/main/unk_0206d4a4.cpp (generated: tools/host_protos.py)

#include "types.h"
#ifdef __cplusplus
#include "types.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif
#ifndef PROTO_LOCAL_Main_RunWifiUtility
void Main_RunWifiUtility(void);
#endif
#ifndef PROTO_LOCAL_Fatal_Handler
void Fatal_Handler(void *arg);
#endif
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_Main_DwcAlloc
void *Main_DwcAlloc(u32 a, void *p, u32 n);
#endif
#ifndef PROTO_LOCAL_Main_DwcFree
void Main_DwcFree(u32 a, void *p);
#endif
#ifndef PROTO_LOCAL_Main_PxiSendWordRetry
void Main_PxiSendWordRetry(s32 a, s32 b);
#endif
}
#endif

#endif
