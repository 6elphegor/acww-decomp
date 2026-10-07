#ifndef PROTO_PROTO_OV001_UNK_OV001_0220F3FC_H
#define PROTO_PROTO_OV001_UNK_OV001_0220F3FC_H

// Prototypes of the functions defined in src/ov001/unk_ov001_0220f3fc.cpp (generated: tools/host_protos.py)

#include "types.h"
#ifdef __cplusplus
#include "types.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif
#ifndef PROTO_LOCAL_WfcTransferDone_SetupBg
void WfcTransferDone_SetupBg();
#endif
#ifndef PROTO_LOCAL_WfcTransferDone_WaitFadeIn
void WfcTransferDone_WaitFadeIn();
#endif
#ifndef PROTO_LOCAL_WfcTransferDone_WaitButtonBar
void WfcTransferDone_WaitButtonBar();
#endif
#ifndef PROTO_LOCAL_WfcTransferDone_Update
void WfcTransferDone_Update();
#endif
#ifndef PROTO_LOCAL_WfcTransferDone_HandleInput
void WfcTransferDone_HandleInput();
#endif
#ifndef PROTO_LOCAL_WfcTransferDone_Idle
void WfcTransferDone_Idle();
#endif
#ifndef PROTO_LOCAL_WfcTransferDone_HandleResult
void WfcTransferDone_HandleResult();
#endif
#ifndef PROTO_LOCAL_WfcTransferDone_FadeOut
void WfcTransferDone_FadeOut();
#endif
#ifndef PROTO_LOCAL_WfcTransferDone_PowerOff
void WfcTransferDone_PowerOff();
#endif
#ifndef PROTO_LOCAL_WfcTransferSend_LoadBg
void WfcTransferSend_LoadBg();
#endif
#ifndef PROTO_LOCAL_WfcTransferSend_WaitFadeIn
void WfcTransferSend_WaitFadeIn();
#endif
#ifndef PROTO_LOCAL_WfcTransferSend_Update
void WfcTransferSend_Update();
#endif
#ifndef PROTO_LOCAL_WfcTransferSend_Nop1
void WfcTransferSend_Nop1();
#endif
#ifndef PROTO_LOCAL_WfcTransferSend_Nop2
void WfcTransferSend_Nop2();
#endif
#ifndef PROTO_LOCAL_WfcTransferSend_Exit
void WfcTransferSend_Exit();
#endif
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_sWfcTransferSendResult
extern u8 sWfcTransferSendResult;
#endif
#ifndef PROTO_LOCAL_WfcTransferDone_Enter
s32 WfcTransferDone_Enter();
#endif
#ifndef PROTO_LOCAL_WfcTransferDone_FadeIn
s32 WfcTransferDone_FadeIn();
#endif
#ifndef PROTO_LOCAL_WfcTransferDone_StartExit
s32 WfcTransferDone_StartExit();
#endif
#ifndef PROTO_LOCAL_WfcTransferSend_Enter
s32 WfcTransferSend_Enter();
#endif
#ifndef PROTO_LOCAL_WfcTransferSend_FadeIn
s32 WfcTransferSend_FadeIn();
#endif
#ifndef PROTO_LOCAL_WfcTransferSend_FadeOut
s32 WfcTransferSend_FadeOut();
#endif
#ifndef PROTO_LOCAL_WfcTransferSend_OnResult
s32 WfcTransferSend_OnResult(s32 a);
#endif
}
#endif

#endif
