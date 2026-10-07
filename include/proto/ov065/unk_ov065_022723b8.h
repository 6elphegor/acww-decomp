#ifndef PROTO_PROTO_OV065_UNK_OV065_022723B8_H
#define PROTO_PROTO_OV065_UNK_OV065_022723B8_H

// Prototypes of the functions defined in src/ov065/unk_ov065_022723b8.cpp (generated: tools/host_protos.py)

#include "types.h"
#include "net/DwcMatchControl.h"
#include "net/SockAddrIn.h"
#ifdef __cplusplus
#include "types.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif
#ifndef PROTO_LOCAL_DwcMatch_ClearServerLock
void DwcMatch_ClearServerLock(void);
#endif
#ifndef PROTO_LOCAL_DwcMatch_ClearPendingCommand
void DwcMatch_ClearPendingCommand(void);
#endif
#ifndef PROTO_LOCAL_DwcMatch_ResetPlayerCounts
void DwcMatch_ResetPlayerCounts(void);
#endif
#ifndef PROTO_LOCAL_DwcMatch_UpdateValidAidCount
void DwcMatch_UpdateValidAidCount(void);
#endif
#ifndef PROTO_LOCAL_DwcMatch_Shutdown
void DwcMatch_Shutdown(void);
#endif
#ifndef PROTO_LOCAL_DwcMatch_Cleanup
void DwcMatch_Cleanup(void);
#endif
#ifndef PROTO_LOCAL_DwcMatch_FinishCancelled
void DwcMatch_FinishCancelled(void);
#endif
#ifndef PROTO_LOCAL_DwcMatch_AbortAndRestart
void DwcMatch_AbortAndRestart(void);
#endif
#ifndef PROTO_LOCAL_DwcMatch_CloseAllConnections
void DwcMatch_CloseAllConnections(void);
#endif
#ifndef PROTO_LOCAL_DwcMatch_ClearUserKeys
void DwcMatch_ClearUserKeys(void);
#endif
#ifndef PROTO_LOCAL_DwcMatch_ProcessServerSync
void DwcMatch_ProcessServerSync(void);
#endif
#ifndef PROTO_LOCAL_DwcMatch_OnQr2PlayerKey
void DwcMatch_OnQr2PlayerKey(void);
#endif
#ifndef PROTO_LOCAL_DwcMatch_OnQr2TeamKey
void DwcMatch_OnQr2TeamKey(void);
#endif
#ifndef PROTO_LOCAL_DwcMatch_OnNnProgress
void DwcMatch_OnNnProgress();
#endif
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_DwcMatch_SetOption
s32 DwcMatch_SetOption(s32 m, u8 *p);
#endif
#ifndef PROTO_LOCAL_DwcMatch_IsServerLocked
BOOL DwcMatch_IsServerLocked(void);
#endif
#ifndef PROTO_LOCAL_DwcMatch_InitControl
void DwcMatch_InitControl(DwcMatchControl *a0, u32 a1, Unk_ov065_02290814_Sub *a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7);
#endif
#ifndef PROTO_LOCAL_DwcMatch_StartQr2
s32 DwcMatch_StartQr2(u32 a);
#endif
#ifndef PROTO_LOCAL_DwcMatch_StartGameServer
void DwcMatch_StartGameServer(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4);
#endif
#ifndef PROTO_LOCAL_DwcMatch_StartClient
s32 DwcMatch_StartClient(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4);
#endif
#ifndef PROTO_LOCAL_DwcMatch_Process
void DwcMatch_Process(u32 a);
#endif
#ifndef PROTO_LOCAL_DwcMatch_OnUnrecognizedPacket
s32 DwcMatch_OnUnrecognizedPacket(s32 a0, u32 ip, s32 port, char *name, void *arg);
#endif
#ifndef PROTO_LOCAL_DwcMatch_OnGt2ConnectAttempt
void DwcMatch_OnGt2ConnectAttempt(u32 a0, u32 b, u32 c, u32 d, s32 s0, u8 *e);
#endif
#ifndef PROTO_LOCAL_DwcMatch_OnGt2Connected
void DwcMatch_OnGt2Connected(u32 a, u32 b);
#endif
#ifndef PROTO_LOCAL_DwcMatch_OnGpMatchCommand
void DwcMatch_OnGpMatchCommand(u32 a, u32 b, const char *s);
#endif
#ifndef PROTO_LOCAL_DwcMatch_Fail
void DwcMatch_Fail(s32 a, s32 b);
#endif
#ifndef PROTO_LOCAL_DwcMatch_OnSyncPacket
void DwcMatch_OnSyncPacket(u32 a, s32 b, u8 *c);
#endif
#ifndef PROTO_LOCAL_DwcMatch_OnConnectionClosed
BOOL DwcMatch_OnConnectionClosed(s32 a, u32 b);
#endif
#ifndef PROTO_LOCAL_DwcMatch_OnClientDisconnected
void DwcMatch_OnClientDisconnected(u32 a);
#endif
#ifndef PROTO_LOCAL_DwcMatch_RemoveProfile
BOOL DwcMatch_RemoveProfile(u32 v, s32 n);
#endif
#ifndef PROTO_LOCAL_DwcMatch_RemoveMemberAt
u32 DwcMatch_RemoveMemberAt(s32 idx, s32 n);
#endif
#ifndef PROTO_LOCAL_DwcMatch_GetClientCount
u32 DwcMatch_GetClientCount(void);
#endif
#ifndef PROTO_LOCAL_DwcMatch_GetValidAidCount
u32 DwcMatch_GetValidAidCount(void);
#endif
#ifndef PROTO_LOCAL_DwcMatch_GetAidList
s32 DwcMatch_GetAidList(u32 *out);
#endif
#ifndef PROTO_LOCAL_DwcMatch_GetValidAidList
s32 DwcMatch_GetValidAidList(u8 **out);
#endif
#ifndef PROTO_LOCAL_DwcMatch_UpdateServerStatus
s32 DwcMatch_UpdateServerStatus(void);
#endif
#ifndef PROTO_LOCAL_DwcMatch_IsInactive
BOOL DwcMatch_IsInactive(void);
#endif
#ifndef PROTO_LOCAL_DwcMatch_ResetState
void DwcMatch_ResetState(u32 a);
#endif
#ifndef PROTO_LOCAL_DwcMatch_Init
void DwcMatch_Init(u32 a, u32 b, u32 c, u32 d);
#endif
#ifndef PROTO_LOCAL_DwcMatch_StartServerQuery
s32 DwcMatch_StartServerQuery(u32 a);
#endif
#ifndef PROTO_LOCAL_DwcMatch_BuildServerFilter
void DwcMatch_BuildServerFilter(char *buf, u32 x, u32 y, u32 z);
#endif
#ifndef PROTO_LOCAL_DwcMatch_StartNatNegotiation
s32 DwcMatch_StartNatNegotiation(u32 a, u32 b, u32 c);
#endif
#ifndef PROTO_LOCAL_DwcMatch_SendNnRequest
s32 DwcMatch_SendNnRequest(DwcNnRequest *p);
#endif
#ifndef PROTO_LOCAL_DwcMatch_SendCommand
s32 DwcMatch_SendCommand(u32 a, u32 b, u32 c, u32 d, u32 *e, s32 f);
#endif
#ifndef PROTO_LOCAL_DwcMatch_SendSbCommand
s32 DwcMatch_SendSbCommand(u32 a, u32 b, u32 c, u32 *d, s32 e);
#endif
#ifndef PROTO_LOCAL_DwcMatch_SendGpCommand
s32 DwcMatch_SendGpCommand(u32 a, u32 b, u32 c, char *d);
#endif
#ifndef PROTO_LOCAL_DwcMatch_GetArgField
s32 DwcMatch_GetArgField(char *out, const char *s, s32 n);
#endif
#ifndef PROTO_LOCAL_DwcMatch_HandleCommand
s32 DwcMatch_HandleCommand(u32 ev, s32 h, u32 p2, u16 p3, u32 *args, s32 n);
#endif
#ifndef PROTO_LOCAL_DwcMatch_CheckReservation
u32 DwcMatch_CheckReservation(s32 a, u32 b, u32 c, u32 d, u32 e);
#endif
#ifndef PROTO_LOCAL_DwcMatch_AcceptNewClient
s32 DwcMatch_AcceptNewClient(u32 a, u32 b, u16 c);
#endif
#ifndef PROTO_LOCAL_DwcMatch_StoreMemberList
void DwcMatch_StoreMemberList(u32 a, u32 *p);
#endif
#ifndef PROTO_LOCAL_DwcMatch_HandleResult
s32 DwcMatch_HandleResult(s32 a);
#endif
#ifndef PROTO_LOCAL_DwcMatch_SendReservation
s32 DwcMatch_SendReservation(u32 a, s32 b);
#endif
#ifndef PROTO_LOCAL_DwcMatch_TryNextFriend
s32 DwcMatch_TryNextFriend(s32 a, s32 b);
#endif
#ifndef PROTO_LOCAL_DwcMatch_BeginSearch
s32 DwcMatch_BeginSearch(void);
#endif
#ifndef PROTO_LOCAL_DwcMatch_SendReservationCancel
s32 DwcMatch_SendReservationCancel(s32 a);
#endif
#ifndef PROTO_LOCAL_DwcMatch_CancelNewClient
s32 DwcMatch_CancelNewClient(s32 a);
#endif
#ifndef PROTO_LOCAL_DwcMatch_RestartAfterNnFailure
s32 DwcMatch_RestartAfterNnFailure(void);
#endif
#ifndef PROTO_LOCAL_DwcMatch_SendCloseOrder
s32 DwcMatch_SendCloseOrder(void);
#endif
#ifndef PROTO_LOCAL_DwcMatch_AdvanceConnect
void DwcMatch_AdvanceConnect(s32 a);
#endif
#ifndef PROTO_LOCAL_DwcMatch_AreAllBuddies
s32 DwcMatch_AreAllBuddies(u32 *a, u32 n);
#endif
#ifndef PROTO_LOCAL_DwcMatch_Restart
void DwcMatch_Restart(s32 a);
#endif
#ifndef PROTO_LOCAL_DwcMatch_RestartAfterCancel
u32 DwcMatch_RestartAfterCancel(void);
#endif
#ifndef PROTO_LOCAL_DwcMatch_CloseProfileConnection
s32 DwcMatch_CloseProfileConnection(u32 a);
#endif
#ifndef PROTO_LOCAL_DwcMatch_DropUnresponsiveClients
u32 DwcMatch_DropUnresponsiveClients(u32 mask);
#endif
#ifndef PROTO_LOCAL_DwcMatch_SendSyncPacket
void DwcMatch_SendSyncPacket(u32 a, u32 b);
#endif
#ifndef PROTO_LOCAL_DwcMatch_ProcessCloseSync
u32 DwcMatch_ProcessCloseSync(void);
#endif
#ifndef PROTO_LOCAL_DwcMatch_SendCancelSyncCommand
u32 DwcMatch_SendCancelSyncCommand(u32 a, u32 b);
#endif
#ifndef PROTO_LOCAL_DwcMatch_OnCancelSyncCommand
u32 DwcMatch_OnCancelSyncCommand(u32 a, u32 b, u32 c);
#endif
#ifndef PROTO_LOCAL_DwcMatch_ProcessCancelSync
u32 DwcMatch_ProcessCancelSync(void);
#endif
#ifndef PROTO_LOCAL_DwcMatch_AllocAid
u32 DwcMatch_AllocAid(void);
#endif
#ifndef PROTO_LOCAL_DwcMatch_GetServerProfileId
u32 DwcMatch_GetServerProfileId(char *s);
#endif
#ifndef PROTO_LOCAL_DwcMatch_GetAidByProfileId
u32 DwcMatch_GetAidByProfileId(u32 v, s32 k);
#endif
#ifndef PROTO_LOCAL_DwcMatch_GetClientAidMask
u32 DwcMatch_GetClientAidMask(u32 a);
#endif
#ifndef PROTO_LOCAL_DwcMatch_ResetSyncTimer
void DwcMatch_ResetSyncTimer(u32 a);
#endif
#ifndef PROTO_LOCAL_DwcMatch_HandleGpResult
s32 DwcMatch_HandleGpResult(s32 a);
#endif
#ifndef PROTO_LOCAL_DwcMatch_HandleSbResult
s32 DwcMatch_HandleSbResult(s32 a);
#endif
#ifndef PROTO_LOCAL_DwcMatch_HandleQr2Result
s32 DwcMatch_HandleQr2Result(s32 a);
#endif
#ifndef PROTO_LOCAL_DwcMatch_HandleNnStartResult
s32 DwcMatch_HandleNnStartResult(s32 a);
#endif
#ifndef PROTO_LOCAL_DwcMatch_HandleNnResult
s32 DwcMatch_HandleNnResult(s32 a);
#endif
#ifndef PROTO_LOCAL_DwcMatch_HandleGt2Result
s32 DwcMatch_HandleGt2Result(s32 a);
#endif
#ifndef PROTO_LOCAL_DwcMatch_OnServerBrowserEvent
void DwcMatch_OnServerBrowserEvent(u32 list, s32 mode, u32 c);
#endif
#ifndef PROTO_LOCAL_DwcMatch_Nop
void DwcMatch_Nop(u32 a);
#endif
#ifndef PROTO_LOCAL_DwcMatch_EvaluateServers
BOOL DwcMatch_EvaluateServers(u32 a);
#endif
#ifndef PROTO_LOCAL_DwcMatch_OnQr2ServerKey
void DwcMatch_OnQr2ServerKey(s32 a, u32 b);
#endif
#ifndef PROTO_LOCAL_DwcMatch_OnQr2KeyList
void DwcMatch_OnQr2KeyList(s32 a, u32 b);
#endif
#ifndef PROTO_LOCAL_DwcMatch_OnQr2Count
s32 DwcMatch_OnQr2Count(void);
#endif
#ifndef PROTO_LOCAL_DwcMatch_OnQr2Error
s32 DwcMatch_OnQr2Error(s32 a);
#endif
#ifndef PROTO_LOCAL_DwcMatch_OnQr2PublicAddress
void DwcMatch_OnQr2PublicAddress(u32 a, u32 b);
#endif
#ifndef PROTO_LOCAL_DwcMatch_OnQr2NnRequest
void DwcMatch_OnQr2NnRequest(u32 a);
#endif
#ifndef PROTO_LOCAL_DwcMatch_OnQr2ClientMessage
void DwcMatch_OnQr2ClientMessage(u8 *buf, u32 n);
#endif
#ifndef PROTO_LOCAL_DwcMatch_OnNnComplete
void DwcMatch_OnNnComplete(s32 a, s32 b, SockAddrIn *c, DwcNnRequest *d);
#endif
#ifndef PROTO_LOCAL_DwcMatch_CountNnRetry
s32 DwcMatch_CountNnRetry(s32 a);
#endif
#ifndef PROTO_LOCAL_DwcFriend_GetStatusString
s32 DwcFriend_GetStatusString(void *a, char *b);
#endif
}
#endif

#endif
