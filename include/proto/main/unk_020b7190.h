#ifndef PROTO_PROTO_MAIN_UNK_020B7190_H
#define PROTO_PROTO_MAIN_UNK_020B7190_H

// Prototypes of the functions defined in src/main/unk_020b7190.cpp (generated: tools/host_protos.py)

#include "types.h"
#ifdef __cplusplus
#include "types.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif
#ifndef PROTO_LOCAL_FieldInfoBalloon_ShowCancelled
void FieldInfoBalloon_ShowCancelled();
#endif
#ifndef PROTO_LOCAL_FieldInfoBalloon_ShowPleaseWait
void FieldInfoBalloon_ShowPleaseWait();
#endif
#ifndef PROTO_LOCAL_FieldInfoBalloon_ClearNetMsg
void FieldInfoBalloon_ClearNetMsg();
#endif
#ifndef PROTO_LOCAL_Comm_ReportShutdownError
void Comm_ReportShutdownError();
#endif
#ifndef PROTO_LOCAL_FieldInfoBalloon_Init
void FieldInfoBalloon_Init();
#endif
#ifndef PROTO_LOCAL_FieldInfoBalloon_Release
void FieldInfoBalloon_Release();
#endif
#ifndef PROTO_LOCAL_FieldInfoBalloon_Update
void FieldInfoBalloon_Update();
#endif
#ifndef PROTO_LOCAL_FieldInfoBalloon_Draw
void FieldInfoBalloon_Draw();
#endif
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_FieldInfoBalloon_IsMenuTransition
BOOL FieldInfoBalloon_IsMenuTransition();
#endif
#ifndef PROTO_LOCAL_FieldInfoBalloon_ShowSyncWaitMsg
void FieldInfoBalloon_ShowSyncWaitMsg(s32 arg);
#endif
#ifndef PROTO_LOCAL_FieldInfoBalloon_ShowSyncKindMsg
void FieldInfoBalloon_ShowSyncKindMsg(s32 i);
#endif
#ifndef PROTO_LOCAL_FieldInfoBalloon_ShowTimerMsg
void FieldInfoBalloon_ShowTimerMsg(u32 arg);
#endif
}
#endif

#endif
