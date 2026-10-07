#ifndef PROTO_PROTO_OV001_UNK_OV001_022032F8_H
#define PROTO_PROTO_OV001_UNK_OV001_022032F8_H

// Prototypes of the functions defined in src/ov001/unk_ov001_022032f8.cpp (generated: tools/host_protos.py)

#include "types.h"
#ifdef __cplusplus
#include "types.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif
#ifndef PROTO_LOCAL_Aoss_WcmCallback
void Aoss_WcmCallback(void *arg);
#endif
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_Aoss_WcmToIdle
s32 Aoss_WcmToIdle(void);
#endif
#ifndef PROTO_LOCAL_Aoss_WcmReadApList
s32 Aoss_WcmReadApList(u8 *dst, s32 max);
#endif
#ifndef PROTO_LOCAL_Aoss_WcmStartSearch
s32 Aoss_WcmStartSearch(u8 *a, u8 *b, s32 n, s32 d);
#endif
#ifndef PROTO_LOCAL_Aoss_WcmEndSearch
s32 Aoss_WcmEndSearch(void);
#endif
#ifndef PROTO_LOCAL_Aoss_WcmDisconnect
s32 Aoss_WcmDisconnect(void);
#endif
#ifndef PROTO_LOCAL_Aoss_WcmCleanup
s32 Aoss_WcmCleanup(void);
#endif
#ifndef PROTO_LOCAL_Aoss_WcmConnect
s32 Aoss_WcmConnect(void *a, void *b, u32 c);
#endif
#ifndef PROTO_LOCAL_Aoss_WcmInit
s32 Aoss_WcmInit(void *fn, void *buf, u32 size);
#endif
}
#endif

#endif
