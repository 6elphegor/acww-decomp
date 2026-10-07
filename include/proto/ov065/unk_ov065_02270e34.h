#ifndef PROTO_PROTO_OV065_UNK_OV065_02270E34_H
#define PROTO_PROTO_OV065_UNK_OV065_02270E34_H

// Prototypes of the functions defined in src/ov065/unk_ov065_02270e34.cpp (generated: tools/host_protos.py)

#include "types.h"
#include "net/DwcControl.h"
#include "net/DwcFriendControl.h"
#include "net/gp.h"
#ifdef __cplusplus
#include "types.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif
#ifndef PROTO_LOCAL_DwcFriend_DeleteFriend
void DwcFriend_DeleteFriend(void *p);
#endif
#ifndef PROTO_LOCAL_DwcFriend_Process
void DwcFriend_Process();
#endif
#ifndef PROTO_LOCAL_DwcFriend_ResetTimer
void DwcFriend_ResetTimer();
#endif
#ifndef PROTO_LOCAL_DwcFriend_ClearControl
void DwcFriend_ClearControl();
#endif
#ifndef PROTO_LOCAL_DwcFriend_Abort
void DwcFriend_Abort(void);
#endif
#ifndef PROTO_LOCAL_DwcFriend_FinishUpdate
void DwcFriend_FinishUpdate(void);
#endif
#ifndef PROTO_LOCAL_DwcFriend_GetControlField20
void *DwcFriend_GetControlField20(void);
#endif
#ifndef PROTO_LOCAL_DwcLogin_InitControl
void DwcLogin_InitControl(void *mem, void *a, void *b, void *c, void *d, void *e, void *f);
#endif
#ifndef PROTO_LOCAL_DwcLogin_Begin
void DwcLogin_Begin(void);
#endif
#ifndef PROTO_LOCAL_DwcLogin_Process
void DwcLogin_Process(void);
#endif
#ifndef PROTO_LOCAL_DwcLogin_GetUserData
void *DwcLogin_GetUserData(void);
#endif
#ifndef PROTO_LOCAL_DwcLogin_Shutdown
void DwcLogin_Shutdown(void);
#endif
#ifndef PROTO_LOCAL_DwcLogin_ResetState
void DwcLogin_ResetState(void);
#endif
#ifndef PROTO_LOCAL_DwcLogin_OnNasAuthDone
void DwcLogin_OnNasAuthDone(const char *a, const char *b);
#endif
#ifndef PROTO_LOCAL_DwcLogin_PollNasAuth
void DwcLogin_PollNasAuth(void);
#endif
#ifndef PROTO_LOCAL_DwcCore_ClearError
void DwcCore_ClearError(void);
#endif
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_DwcFriend_GetStatus
s32 DwcFriend_GetStatus(void *a, u8 *p1, u8 *p2, char *dst);
#endif
#ifndef PROTO_LOCAL_DwcFriend_GetStatusData
s32 DwcFriend_GetStatusData(void *a, u8 *b, u8 *c, char *d, s32 *out);
#endif
#ifndef PROTO_LOCAL_DwcFriend_CountValid
s32 DwcFriend_CountValid(u8 *p, s32 n);
#endif
#ifndef PROTO_LOCAL_DwcFriend_SetStatusData
BOOL DwcFriend_SetStatusData(void *a, s32 b);
#endif
#ifndef PROTO_LOCAL_DwcFriend_IsIdle
BOOL DwcFriend_IsIdle();
#endif
#ifndef PROTO_LOCAL_DwcFriend_InitControl
void DwcFriend_InitControl(DwcFriendControl *a, GPConnection *b, s32 c, DwcFriendData *d, s32 e);
#endif
#ifndef PROTO_LOCAL_DwcFriend_StartUpdate
void DwcFriend_StartUpdate(s32 a, s32 b, void (*c)(s32, u32, s32), s32 d, void (*e)(s32, s32, char *, s32), s32 f, void (*g)(void), void (*h)(void));
#endif
#ifndef PROTO_LOCAL_DwcFriend_Fail
void DwcFriend_Fail(s32 a, s32 b);
#endif
#ifndef PROTO_LOCAL_DwcFriend_OnBuddyRequest
void DwcFriend_OnBuddyRequest(void *a, u32 *b);
#endif
#ifndef PROTO_LOCAL_DwcFriend_HandleAuthorizedMessage
s32 DwcFriend_HandleAuthorizedMessage(void *a, u32 *b);
#endif
#ifndef PROTO_LOCAL_DwcFriend_OnBuddyStatus
void DwcFriend_OnBuddyStatus(void *a, u32 *b);
#endif
#ifndef PROTO_LOCAL_DwcFriend_GetProfileId
s32 DwcFriend_GetProfileId(s32 i);
#endif
#ifndef PROTO_LOCAL_DwcFriend_FindIndexByProfileId
s32 DwcFriend_FindIndexByProfileId(s32 v);
#endif
#ifndef PROTO_LOCAL_DwcFriend_SetOwnStatus
s32 DwcFriend_SetOwnStatus(s32 a, char *b, char *c);
#endif
#ifndef PROTO_LOCAL_DwcFriend_NotifyAdded
void DwcFriend_NotifyAdded(s32 idx);
#endif
#ifndef PROTO_LOCAL_DwcFriend_Tick
s32 DwcFriend_Tick(void);
#endif
#ifndef PROTO_LOCAL_DwcFriend_SyncList
void DwcFriend_SyncList(DwcFriendData *arr, s32 n);
#endif
#ifndef PROTO_LOCAL_DwcFriend_DeleteEntry
void DwcFriend_DeleteEntry(DwcFriendData *arr, s32 i, s32 j);
#endif
#ifndef PROTO_LOCAL_DwcFriend_MergeDuplicate
s32 DwcFriend_MergeDuplicate(DwcFriendData *arr, s32 n, s32 id);
#endif
#ifndef PROTO_LOCAL_DwcFriend_RemoveDuplicates
s32 DwcFriend_RemoveDuplicates(DwcFriendData *arr, s32 n, s32 id);
#endif
#ifndef PROTO_LOCAL_DwcFriend_SendBuddyRequest
s32 DwcFriend_SendBuddyRequest(s32 a);
#endif
#ifndef PROTO_LOCAL_DwcFriend_GetBuddyStatus
s32 DwcFriend_GetBuddyStatus(void *a, void *b);
#endif
#ifndef PROTO_LOCAL_DwcFriend_HandleGpResult
s32 DwcFriend_HandleGpResult(s32 r);
#endif
#ifndef PROTO_LOCAL_DwcFriend_OnProfileSearch
void DwcFriend_OnProfileSearch(void *x, GPProfileSearchResponseArg *p, s32 idx);
#endif
#ifndef PROTO_LOCAL_DwcLogin_Fail
void DwcLogin_Fail(s32 a, s32 b);
#endif
#ifndef PROTO_LOCAL_DwcLogin_HandleGpResult
s32 DwcLogin_HandleGpResult(s32 r, s32 unused);
#endif
#ifndef PROTO_LOCAL_DwcLogin_GpConnect
void DwcLogin_GpConnect(const char *a, const char *b, void *c, s32 d);
#endif
#ifndef PROTO_LOCAL_DwcLogin_StartNasAuth
void DwcLogin_StartNasAuth(DwcNasLoginCallback cb, u32 arg);
#endif
#ifndef PROTO_LOCAL_DwcLogin_IsLoggedIn
BOOL DwcLogin_IsLoggedIn(void);
#endif
#ifndef PROTO_LOCAL_DwcCore_GetLastError
s32 DwcCore_GetLastError(s32 *out);
#endif
#ifndef PROTO_LOCAL_DwcCore_HasError
BOOL DwcCore_HasError(void);
#endif
#ifndef PROTO_LOCAL_DwcCore_SetError
void DwcCore_SetError(s32 a, s32 b);
#endif
}
#endif

#endif
