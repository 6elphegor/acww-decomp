#ifndef PROTO_PROTO_AUTOLOAD_2_UNK_020E9A08_H
#define PROTO_PROTO_AUTOLOAD_2_UNK_020E9A08_H

// Prototypes of the functions defined in src/autoload_2/unk_020e9a08.cpp (generated: tools/host_protos.py)

#include "types.h"
#include "types64.h"
#ifdef __cplusplus
#include "types.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif
#ifndef PROTO_LOCAL_Net_WaitFrame
void Net_WaitFrame(void);
#endif
#ifndef PROTO_LOCAL_Net_Free
void Net_Free(void *p);
#endif
#ifndef PROTO_LOCAL_Net_ClearSendQueue
void Net_ClearSendQueue(void);
#endif
#ifndef PROTO_LOCAL_Net_OnWifiClosedNop
void Net_OnWifiClosedNop(void);
#endif
#ifndef PROTO_LOCAL_Net_WifiCallbackNop
void Net_WifiCallbackNop(void);
#endif
#ifndef PROTO_LOCAL_Net_OnGameStatsUploadDone
void Net_OnGameStatsUploadDone(void);
#endif
#ifndef PROTO_LOCAL_Net_OnWlxExchangeDone
void Net_OnWlxExchangeDone(void);
#endif
#ifndef PROTO_LOCAL_Net_WifiPingNextPeer
void Net_WifiPingNextPeer(void);
#endif
#ifndef PROTO_LOCAL_Net_WifiLockServer
void Net_WifiLockServer(void);
#endif
#ifndef PROTO_LOCAL_Net_WifiCheckHostIdle
void Net_WifiCheckHostIdle(void);
#endif
#ifndef PROTO_LOCAL_Net_OnHeapCreatedNop
void Net_OnHeapCreatedNop(void);
#endif
#ifndef PROTO_LOCAL_Net_OnHeapDestroyNop
void Net_OnHeapDestroyNop(void);
#endif
#ifndef PROTO_LOCAL_Net_Update
void Net_Update(void);
#endif
#ifndef PROTO_LOCAL_Net_GetBeaconGameInfo
void *Net_GetBeaconGameInfo(void *p);
#endif
#ifndef PROTO_LOCAL_Net_GetScanResults
void **Net_GetScanResults(void);
#endif
#ifndef PROTO_LOCAL_Net_GetOwnFriendKey
s64 Net_GetOwnFriendKey(void *p);
#endif
#ifndef PROTO_LOCAL_data_021f4910
extern void *data_021f4910[8];
#endif
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_Net_Alloc
void *Net_Alloc(u32 a, u32 b);
#endif
#ifndef PROTO_LOCAL_Net_DwcAllocHook
void *Net_DwcAllocHook(u32 a, u32 b, u32 c);
#endif
#ifndef PROTO_LOCAL_Net_DwcFreeHook
void Net_DwcFreeHook(u32 a, void *b);
#endif
#ifndef PROTO_LOCAL_Net_SendNextQueued
BOOL Net_SendNextQueued(void);
#endif
#ifndef PROTO_LOCAL_Net_OnSendDone
void Net_OnSendDone(u32 a);
#endif
#ifndef PROTO_LOCAL_Net_QueueSend
BOOL Net_QueueSend(u32 a, u32 b, u32 c, u32 d);
#endif
#ifndef PROTO_LOCAL_Net_QueueSendChecked
BOOL Net_QueueSendChecked(u32 a, u32 b, u32 c, u32 d);
#endif
#ifndef PROTO_LOCAL_Net_QueueSendPerAid
BOOL Net_QueueSendPerAid(u32 a, u32 b, u32 c, u32 d);
#endif
#ifndef PROTO_LOCAL_Net_QueueSendToMask
BOOL Net_QueueSendToMask(u32 a, u32 b, u16 c, u32 d);
#endif
#ifndef PROTO_LOCAL_Net_OnLocalPeerEvent
void Net_OnLocalPeerEvent(u8 *p);
#endif
#ifndef PROTO_LOCAL_Net_OnLocalRecv
void Net_OnLocalRecv(u32 a, u32 b, u32 c);
#endif
#ifndef PROTO_LOCAL_Net_OnWifiClientMatched
void Net_OnWifiClientMatched(u32 a);
#endif
#ifndef PROTO_LOCAL_Net_OnWifiSendDone
void Net_OnWifiSendDone(u32 a, u32 b);
#endif
#ifndef PROTO_LOCAL_Net_OnWifiRecv
void Net_OnWifiRecv(u32 a, u32 b, u32 c);
#endif
#ifndef PROTO_LOCAL_Net_OnWifiHostMatched
void Net_OnWifiHostMatched(u32 a, u32 b);
#endif
#ifndef PROTO_LOCAL_Net_OnWifiServersUpdated
void Net_OnWifiServersUpdated(u32 a);
#endif
#ifndef PROTO_LOCAL_Net_OnWifiFriendStatus
void Net_OnWifiFriendStatus(u32 a);
#endif
#ifndef PROTO_LOCAL_Net_OnWifiFriendDeleted
void Net_OnWifiFriendDeleted(u32 a);
#endif
#ifndef PROTO_LOCAL_Net_OnWifiLogin
void Net_OnWifiLogin(u32 a, u32 b, u32 c);
#endif
#ifndef PROTO_LOCAL_Net_OnGameStatsDownloadDone
void Net_OnGameStatsDownloadDone(void *a, void *b, u32 c, u32 d);
#endif
#ifndef PROTO_LOCAL_Net_OnHttpDownloadDone
void Net_OnHttpDownloadDone(void *a, void *b, u32 c, void *d);
#endif
#ifndef PROTO_LOCAL_Net_OnGameStatsChallenge
void Net_OnGameStatsChallenge(const char *a, u32 b, u32 c, char *d);
#endif
#ifndef PROTO_LOCAL_Net_OnWlxStopped
void Net_OnWlxStopped(u32 a);
#endif
#ifndef PROTO_LOCAL_Net_OnWifiPingReply
void Net_OnWifiPingReply(u32 a, u32 i);
#endif
#ifndef PROTO_LOCAL_Net_IsLocalConnected
BOOL Net_IsLocalConnected(void);
#endif
#ifndef PROTO_LOCAL_Net_WifiConnectStep
BOOL Net_WifiConnectStep(void);
#endif
#ifndef PROTO_LOCAL_Net_PollConnected
BOOL Net_PollConnected(void);
#endif
#ifndef PROTO_LOCAL_Net_LocalShutdown
BOOL Net_LocalShutdown(void);
#endif
#ifndef PROTO_LOCAL_Net_WifiShutdownStep
BOOL Net_WifiShutdownStep(void);
#endif
#ifndef PROTO_LOCAL_Net_ShutdownOv067
BOOL Net_ShutdownOv067(void);
#endif
#ifndef PROTO_LOCAL_Net_Shutdown
BOOL Net_Shutdown(void);
#endif
#ifndef PROTO_LOCAL_Net_WifiShutdownStepExt
BOOL Net_WifiShutdownStepExt(void);
#endif
#ifndef PROTO_LOCAL_Net_LocalGetLinkLevel
u32 Net_LocalGetLinkLevel(void);
#endif
#ifndef PROTO_LOCAL_Net_WifiGetLinkLevel
u32 Net_WifiGetLinkLevel(void);
#endif
#ifndef PROTO_LOCAL_Net_GetLinkLevel
BOOL Net_GetLinkLevel(void);
#endif
#ifndef PROTO_LOCAL_Net_SetRecvBuffer
BOOL Net_SetRecvBuffer(u32 a, u32 b, u32 c);
#endif
#ifndef PROTO_LOCAL_Net_GetMemberCount
u32 Net_GetMemberCount(void);
#endif
#ifndef PROTO_LOCAL_Net_GetMyAid
u32 Net_GetMyAid(void);
#endif
#ifndef PROTO_LOCAL_Net_GetConnectedMask
u32 Net_GetConnectedMask(void);
#endif
#ifndef PROTO_LOCAL_Net_GetMode
u32 Net_GetMode(void);
#endif
#ifndef PROTO_LOCAL_Net_LocalCountBeacons
s32 Net_LocalCountBeacons(void);
#endif
#ifndef PROTO_LOCAL_Net_WifiCountFriends
s32 Net_WifiCountFriends(void);
#endif
#ifndef PROTO_LOCAL_Net_CountHostCandidates
s32 Net_CountHostCandidates(void);
#endif
#ifndef PROTO_LOCAL_Net_IsSendIdle
BOOL Net_IsSendIdle(u32 a);
#endif
#ifndef PROTO_LOCAL_Net_WifiAllPeersSendable
BOOL Net_WifiAllPeersSendable(void);
#endif
#ifndef PROTO_LOCAL_Net_IsReadyToSend
BOOL Net_IsReadyToSend(void);
#endif
#ifndef PROTO_LOCAL_Net_SendPackets3
BOOL Net_SendPackets3(u32 a0, u32 b0, u16 c0, u32 d0, u32 a1, u32 b1, u16 c1, u32 d1, u32 a2, u32 b2, u16 c2, u32 d2);
#endif
#ifndef PROTO_LOCAL_Net_GetLocalError
u32 Net_GetLocalError(void);
#endif
#ifndef PROTO_LOCAL_Net_GetWifiError
u32 Net_GetWifiError(void);
#endif
#ifndef PROTO_LOCAL_Net_GetError
u32 Net_GetError(void);
#endif
#ifndef PROTO_LOCAL_Net_GetLastErrorCode
u32 Net_GetLastErrorCode(void);
#endif
#ifndef PROTO_LOCAL_Net_ClearWifiError
s32 Net_ClearWifiError(void);
#endif
#ifndef PROTO_LOCAL_Net_SetLocalGameInfo
s32 Net_SetLocalGameInfo(void *a, u32 n);
#endif
#ifndef PROTO_LOCAL_Net_GetBeaconGameInfoSize
s32 Net_GetBeaconGameInfoSize(void *p);
#endif
#ifndef PROTO_LOCAL_Net_ConnectToParent
s32 Net_ConnectToParent(void *p);
#endif
#ifndef PROTO_LOCAL_Net_WifiFindFriend
s32 Net_WifiFindFriend(u32 a);
#endif
#ifndef PROTO_LOCAL_Net_WifiGetFriendProfileId
s32 Net_WifiGetFriendProfileId(u32 a);
#endif
#ifndef PROTO_LOCAL_Net_GetWifiFriendList
u8 *Net_GetWifiFriendList(void);
#endif
#ifndef PROTO_LOCAL_Net_WifiStartHost
BOOL Net_WifiStartHost(void);
#endif
#ifndef PROTO_LOCAL_Net_WifiConnectToHost
BOOL Net_WifiConnectToHost(u32 a);
#endif
#ifndef PROTO_LOCAL_Net_CreateUserData
void Net_CreateUserData(void *p, u32 v);
#endif
#ifndef PROTO_LOCAL_Net_CheckUserDataChanged
BOOL Net_CheckUserDataChanged(void *p);
#endif
#ifndef PROTO_LOCAL_Net_HasWifiUserId
s32 Net_HasWifiUserId(void *p);
#endif
#ifndef PROTO_LOCAL_Net_MakeOwnFriendData
s32 Net_MakeOwnFriendData(void *p, void *q);
#endif
#ifndef PROTO_LOCAL_Net_FriendKeyToFriendData
BOOL Net_FriendKeyToFriendData(u32 ctx, void *out, u64 key);
#endif
#ifndef PROTO_LOCAL_Net_GetFriendKey
u64 Net_GetFriendKey(u32 a);
#endif
#ifndef PROTO_LOCAL_Net_GameStatsUpload
BOOL Net_GameStatsUpload(char *a, void *b, u32 c, u32 d);
#endif
#ifndef PROTO_LOCAL_Net_IsUploadDone
BOOL Net_IsUploadDone(s32 a);
#endif
#ifndef PROTO_LOCAL_Net_GameStatsDownload
BOOL Net_GameStatsDownload(u32 a, void *b, u32 c, u32 d);
#endif
#ifndef PROTO_LOCAL_Net_HttpDownload
BOOL Net_HttpDownload(void *a, void *b, u32 c, u32 d);
#endif
#ifndef PROTO_LOCAL_Net_IsDownloadDone
BOOL Net_IsDownloadDone(s32 a);
#endif
#ifndef PROTO_LOCAL_Net_IsWifiConfigValid
s32 Net_IsWifiConfigValid(void *p);
#endif
#ifndef PROTO_LOCAL_Net_IsSameFriendData
s32 Net_IsSameFriendData(void *p, void *q);
#endif
#ifndef PROTO_LOCAL_Net_GetFriendDataType
BOOL Net_GetFriendDataType(void *p);
#endif
#ifndef PROTO_LOCAL_Net_IsBuddyFriendData
s32 Net_IsBuddyFriendData(void *p);
#endif
#ifndef PROTO_LOCAL_Net_WifiAddFriend
s32 Net_WifiAddFriend(u32 a, void *b);
#endif
#ifndef PROTO_LOCAL_Net_WifiDeleteFriend
BOOL Net_WifiDeleteFriend(u32 a);
#endif
#ifndef PROTO_LOCAL_Net_WifiHostKeepAlive
BOOL Net_WifiHostKeepAlive(void);
#endif
#ifndef PROTO_LOCAL_Net_GetBrid
BOOL Net_GetBrid(u8 *out);
#endif
#ifndef PROTO_LOCAL_Net_StartOv067
void Net_StartOv067(void *a, void *b, u32 n);
#endif
#ifndef PROTO_LOCAL_Net_WlxStartExchange
s32 Net_WlxStartExchange(void *p);
#endif
#ifndef PROTO_LOCAL_Net_WlxStopExchange
s32 Net_WlxStopExchange(void *p);
#endif
#ifndef PROTO_LOCAL_Net_WlxIsReady
BOOL Net_WlxIsReady(void *p);
#endif
#ifndef PROTO_LOCAL_Net_WlxIsExchangeDone
u32 Net_WlxIsExchangeDone(void *p);
#endif
#ifndef PROTO_LOCAL_data_021f4bc0
extern u8 data_021f4bc0[0xdb4];
#endif
#ifndef PROTO_LOCAL_sSendSlots
extern u8 sSendSlots[0x100];
#endif
#ifndef PROTO_LOCAL_data_021f49e0
extern u8 data_021f49e0[0xe0];
#endif
#ifndef PROTO_LOCAL_sWifiPingState
extern u8 sWifiPingState[0x50];
#endif
#ifndef PROTO_LOCAL_data_021f4950
extern u8 data_021f4950[0x40];
#endif
#ifndef PROTO_LOCAL_sSendQueue
extern u8 sSendQueue[0x20];
#endif
#ifndef PROTO_LOCAL_sLocalPeerState
extern u8 sLocalPeerState[0x10];
#endif
#ifndef PROTO_LOCAL_data_021f48f4
extern u8 data_021f48f4[0xc];
#endif
#ifndef PROTO_LOCAL_sRecvCallback
extern u32 sRecvCallback;
#endif
#ifndef PROTO_LOCAL_data_021f48e8
extern u32 data_021f48e8;
#endif
#ifndef PROTO_LOCAL_data_021f48e4
extern u32 data_021f48e4;
#endif
#ifndef PROTO_LOCAL_data_021f48e0
extern u32 data_021f48e0;
#endif
#ifndef PROTO_LOCAL_data_021f48dc
extern u32 data_021f48dc;
#endif
#ifndef PROTO_LOCAL_sWifiUserData
extern u32 sWifiUserData;
#endif
#ifndef PROTO_LOCAL_sWifiFriendList
extern u32 sWifiFriendList;
#endif
#ifndef PROTO_LOCAL_data_021f489c
extern u32 data_021f489c;
#endif
#ifndef PROTO_LOCAL_data_0213b064
extern s32 data_0213b064;
#endif
#ifndef PROTO_LOCAL_data_021f48c8
extern u32 data_021f48c8;
#endif
#ifndef PROTO_LOCAL_data_021f48c4
extern u32 data_021f48c4;
#endif
#ifndef PROTO_LOCAL_data_021f48b0
extern u32 data_021f48b0;
#endif
#ifndef PROTO_LOCAL_data_021f48ac
extern u32 data_021f48ac;
#endif
#ifndef PROTO_LOCAL_sLastErrorCode
extern u32 sLastErrorCode;
#endif
#ifndef PROTO_LOCAL_data_021f48b8
extern u32 data_021f48b8;
#endif
#ifndef PROTO_LOCAL_data_021f48ec
extern u32 data_021f48ec;
#endif
#ifndef PROTO_LOCAL_data_021f48cc
extern u32 data_021f48cc;
#endif
#ifndef PROTO_LOCAL_data_021f48a8
extern u32 data_021f48a8;
#endif
#ifndef PROTO_LOCAL_data_021f48a4
extern u32 data_021f48a4;
#endif
#ifndef PROTO_LOCAL_sAllocHook
extern u32 sAllocHook;
#endif
#ifndef PROTO_LOCAL_data_0213b068
extern s32 data_0213b068;
#endif
#ifndef PROTO_LOCAL_data_0213b06c
extern s32 data_0213b06c;
#endif
#ifndef PROTO_LOCAL_data_021f48c0
extern u32 data_021f48c0;
#endif
#ifndef PROTO_LOCAL_data_021f48b4
extern u32 data_021f48b4;
#endif
#ifndef PROTO_LOCAL_sFreeHook
extern u32 sFreeHook;
#endif
#ifndef PROTO_LOCAL_data_0213b060
extern u32 data_0213b060;
#endif
#ifndef PROTO_LOCAL_sWifiShutdownStep
extern u16 sWifiShutdownStep;
#endif
#ifndef PROTO_LOCAL_sWifiConnectStep
extern u16 sWifiConnectStep;
#endif
#ifndef PROTO_LOCAL_sNetMode
extern u8 sNetMode;
#endif
#ifndef PROTO_LOCAL_data_0213b05c
extern u8 data_0213b05c;
#endif
#ifndef PROTO_LOCAL_data_021f488c
extern u8 data_021f488c;
#endif
#ifndef PROTO_LOCAL_data_0213b058
extern u8 data_0213b058;
#endif
}
#endif

#endif
