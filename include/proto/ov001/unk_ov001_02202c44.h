#ifndef PROTO_PROTO_OV001_UNK_OV001_02202C44_H
#define PROTO_PROTO_OV001_UNK_OV001_02202C44_H

// Prototypes of the functions defined in src/ov001/unk_ov001_02202c44.cpp (generated: tools/host_protos.py)

#include "types.h"
#include "net/AossParam.h"
#include "nitro/wm.h"
#include "sys/OSMessageQueue.h"

#ifdef __cplusplus
extern "C" {
#endif
#ifndef PROTO_LOCAL_sAossWlanWork
extern void *sAossWlanWork;
#endif
#ifndef PROTO_LOCAL_sAossProgressCb
extern s32 (*sAossProgressCb) (s32);
#endif
#ifndef PROTO_LOCAL_sAossMsgQueue
extern OSMessageQueue sAossMsgQueue;
#endif
#ifndef PROTO_LOCAL_sAossMsgArray
extern OSMessage sAossMsgArray[4];
#endif
#ifndef PROTO_LOCAL_sAossBssDesc
extern u8 sAossBssDesc[0xc0];
#endif
#ifndef PROTO_LOCAL_sAossWepDesc
extern u8 sAossWepDesc[0x74];
#endif
#ifndef PROTO_LOCAL_Aoss_SetBssDescSsid
void Aoss_SetBssDescSsid(void *a, void *b);
#endif
#ifndef PROTO_LOCAL_Aoss_StoreConnectResult
void Aoss_StoreConnectResult(AossConnectResult *a, WMBssDesc *b, s32 c);
#endif
#ifndef PROTO_LOCAL_Aoss_PostWcmMsg
void Aoss_PostWcmMsg(s32 a);
#endif
#ifndef PROTO_LOCAL_Aoss_PostAlarmMsg
void Aoss_PostAlarmMsg(void *a);
#endif
#ifndef PROTO_LOCAL_Aoss_WlanShutdown
s32 Aoss_WlanShutdown();
#endif
#ifndef PROTO_LOCAL_Aoss_WlanDisconnect
s32 Aoss_WlanDisconnect();
#endif
#ifndef PROTO_LOCAL_Aoss_ScanAps
s32 Aoss_ScanAps(void **out);
#endif
#ifndef PROTO_LOCAL_Aoss_ConnectAp
s32 Aoss_ConnectAp(AossApConfig *a, AossConnectResult *b);
#endif
#ifndef PROTO_LOCAL_Aoss_Sleep
s32 Aoss_Sleep(s32 a);
#endif
#ifndef PROTO_LOCAL_Aoss_NotifyProgress
s32 Aoss_NotifyProgress(s32 a);
#endif
#ifndef PROTO_LOCAL_Aoss_Alloc
void *Aoss_Alloc(u32 a);
#endif
#ifndef PROTO_LOCAL_Aoss_Free
void Aoss_Free(void *a);
#endif
#ifdef __cplusplus
}
#endif

#endif
