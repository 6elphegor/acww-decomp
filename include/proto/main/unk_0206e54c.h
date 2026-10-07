#ifndef PROTO_PROTO_MAIN_UNK_0206E54C_H
#define PROTO_PROTO_MAIN_UNK_0206E54C_H

// Prototypes of the functions defined in src/main/unk_0206e54c.cpp (generated: tools/host_protos.py)

#include "types.h"
#ifdef __cplusplus
#include "types.h"
class MenuManager;
#endif

#ifdef __cplusplus
extern "C" {
#endif
#ifndef PROTO_LOCAL_MenuCtrl_ReleaseClosedMenus
void MenuCtrl_ReleaseClosedMenus();
#endif
#ifndef PROTO_LOCAL_MenuCtrl_ResetFlags
void MenuCtrl_ResetFlags();
#endif
#ifndef PROTO_LOCAL_MenuCtrl_ClearMenuOnTop
void MenuCtrl_ClearMenuOnTop();
#endif
#ifndef PROTO_LOCAL_MenuCtrl_SetMenuOnTop
void MenuCtrl_SetMenuOnTop();
#endif
#ifndef PROTO_LOCAL_MenuCtrl_SyncFromInputMode
void MenuCtrl_SyncFromInputMode();
#endif
#ifndef PROTO_LOCAL_MenuCtrl_SetTransitionActive
void MenuCtrl_SetTransitionActive();
#endif
#ifndef PROTO_LOCAL_MenuCtrl_ClearTransitionActive
void MenuCtrl_ClearTransitionActive();
#endif
#ifndef PROTO_LOCAL_MenuCtrl_SetScreenChanging
void MenuCtrl_SetScreenChanging();
#endif
#ifndef PROTO_LOCAL_MenuCtrl_ClearScreenChanging
void MenuCtrl_ClearScreenChanging();
#endif
#ifndef PROTO_LOCAL_MenuCtrl_GetText
void *MenuCtrl_GetText();
#endif
#ifndef PROTO_LOCAL_MenuCtrl_ClearSavedSlot
void MenuCtrl_ClearSavedSlot();
#endif
#ifndef PROTO_LOCAL_MenuCtrl_BackupPockets
void MenuCtrl_BackupPockets();
#endif
#ifndef PROTO_LOCAL_MenuCtrl_RestorePockets
void MenuCtrl_RestorePockets();
#endif
#ifndef PROTO_LOCAL_MenuCtrl_ReturnChosenItems
void MenuCtrl_ReturnChosenItems(void *p);
#endif
#ifndef PROTO_LOCAL_MenuCtrl_SetFutureLetter
void MenuCtrl_SetFutureLetter(void *a);
#endif
#ifndef PROTO_LOCAL_MenuCtrl_StoreFutureLetter
void MenuCtrl_StoreFutureLetter(void);
#endif
#ifndef PROTO_LOCAL_MenuCtrl_ReturnFutureLetter
void MenuCtrl_ReturnFutureLetter(void);
#endif
#ifndef PROTO_LOCAL_MenuCtrl_SetDateTime
void MenuCtrl_SetDateTime(void *a);
#endif
#ifndef PROTO_LOCAL_MenuCtrl_GetDateTime
void MenuCtrl_GetDateTime(void *a);
#endif
#ifndef PROTO_LOCAL_MenuCtrl_ClearPtrArgs
void MenuCtrl_ClearPtrArgs(void);
#endif
#ifndef PROTO_LOCAL_MenuCtrl_SetClockMovedBack
void MenuCtrl_SetClockMovedBack(void);
#endif
#ifndef PROTO_LOCAL_MenuCtrl_SetClockMovedForward
void MenuCtrl_SetClockMovedForward(void);
#endif
#ifndef PROTO_LOCAL_MenuCtrl_SetClockEdited
void MenuCtrl_SetClockEdited(void);
#endif
#ifndef PROTO_LOCAL_MenuCtrl_ClearClockChangeFlags
void MenuCtrl_ClearClockChangeFlags(void);
#endif
#ifndef PROTO_LOCAL_MenuCtrl_InitKeyboardState
void MenuCtrl_InitKeyboardState(void);
#endif
#ifndef PROTO_LOCAL_MenuCtrl_RequestForceClose
void MenuCtrl_RequestForceClose(void);
#endif
#ifndef PROTO_LOCAL_MenuCtrl_ResetForceClose
void MenuCtrl_ResetForceClose(void);
#endif
#ifndef PROTO_LOCAL_MenuCtrl_TickForceClose
void MenuCtrl_TickForceClose(void);
#endif
#ifndef PROTO_LOCAL_MenuCtrl_SetSyncMsgMenu
void MenuCtrl_SetSyncMsgMenu(void);
#endif
#ifndef PROTO_LOCAL_MenuCtrl_ClearSyncMsgMenu
void MenuCtrl_ClearSyncMsgMenu(void);
#endif
#ifndef PROTO_LOCAL_MenuCtrl_SetFriendPageFromIndex
void MenuCtrl_SetFriendPageFromIndex(void);
#endif
#ifndef PROTO_LOCAL_MenuCtrl_ClearFriendPageFromIndex
void MenuCtrl_ClearFriendPageFromIndex(void);
#endif
#ifndef PROTO_LOCAL_MenuCtrl_GetChatDraft
void *MenuCtrl_GetChatDraft(void);
#endif
#ifndef PROTO_LOCAL_MenuCtrl_ClearChatDraft
void MenuCtrl_ClearChatDraft(void);
#endif
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_CommSub_StartCountdown
void CommSub_StartCountdown(u8 *o);
#endif
#ifndef PROTO_LOCAL_CommSub_RecvClearPendingUnit
void CommSub_RecvClearPendingUnit(u8 *o);
#endif
#ifndef PROTO_LOCAL_MenuManager_Create
MenuManager *MenuManager_Create();
#endif
#ifndef PROTO_LOCAL_MenuCtrl_AddOpenMenu
void MenuCtrl_AddOpenMenu(u32 v);
#endif
#ifndef PROTO_LOCAL_MenuCtrl_RemoveOpenMenu
void MenuCtrl_RemoveOpenMenu(u8 *o);
#endif
#ifndef PROTO_LOCAL_MenuCtrl_CreateRequestedMenu
BOOL MenuCtrl_CreateRequestedMenu();
#endif
#ifndef PROTO_LOCAL_MenuCtrl_LoadRequestedOverlays
BOOL MenuCtrl_LoadRequestedOverlays();
#endif
#ifndef PROTO_LOCAL_MenuCtrl_ReleaseOverlays
BOOL MenuCtrl_ReleaseOverlays(u32 i);
#endif
#ifndef PROTO_LOCAL_MenuCtrl_IsIdle
BOOL MenuCtrl_IsIdle();
#endif
#ifndef PROTO_LOCAL_MenuCtrl_IsMenuOpen
BOOL MenuCtrl_IsMenuOpen();
#endif
#ifndef PROTO_LOCAL_MenuCtrl_RequestOpen
BOOL MenuCtrl_RequestOpen(u32 v);
#endif
#ifndef PROTO_LOCAL_MenuCtrl_RequestOpenNested
BOOL MenuCtrl_RequestOpenNested(u32 v);
#endif
#ifndef PROTO_LOCAL_MenuCtrl_RequestOpenMenu12
BOOL MenuCtrl_RequestOpenMenu12(u32 v);
#endif
#ifndef PROTO_LOCAL_MenuCtrl_IsLoaded
BOOL MenuCtrl_IsLoaded(s32 i);
#endif
#ifndef PROTO_LOCAL_MenuCtrl_SetLoaded
void MenuCtrl_SetLoaded(s32 i);
#endif
#ifndef PROTO_LOCAL_MenuCtrl_ClearLoaded
void MenuCtrl_ClearLoaded(s32 i);
#endif
#ifndef PROTO_LOCAL_MenuCtrl_IsReleasePending
BOOL MenuCtrl_IsReleasePending(s32 i);
#endif
#ifndef PROTO_LOCAL_MenuCtrl_SetReleasePending
void MenuCtrl_SetReleasePending(s32 i);
#endif
#ifndef PROTO_LOCAL_MenuCtrl_ClearReleasePending
void MenuCtrl_ClearReleasePending(s32 i);
#endif
#ifndef PROTO_LOCAL_MenuCtrl_SetFlags
void MenuCtrl_SetFlags(u32 m);
#endif
#ifndef PROTO_LOCAL_MenuCtrl_ClearFlags
void MenuCtrl_ClearFlags(u32 m);
#endif
#ifndef PROTO_LOCAL_MenuCtrl_HasFlags
BOOL MenuCtrl_HasFlags(u32 m);
#endif
#ifndef PROTO_LOCAL_MenuCtrl_IsMenuOnTop
BOOL MenuCtrl_IsMenuOnTop();
#endif
#ifndef PROTO_LOCAL_MenuCtrl_SetTouch
s32 MenuCtrl_SetTouch();
#endif
#ifndef PROTO_LOCAL_MenuCtrl_SetButtons
s32 MenuCtrl_SetButtons();
#endif
#ifndef PROTO_LOCAL_MenuCtrl_IsTouch
BOOL MenuCtrl_IsTouch();
#endif
#ifndef PROTO_LOCAL_MenuCtrl_IsButtons
BOOL MenuCtrl_IsButtons();
#endif
#ifndef PROTO_LOCAL_Menu_GetIconCharIndex
s32 Menu_GetIconCharIndex(s32 v);
#endif
#ifndef PROTO_LOCAL_BgScreen_SetRectPalette
void BgScreen_SetRectPalette(u16 *tbl, s32 x0, s32 y0, s32 x1, s32 y1, u32 to);
#endif
#ifndef PROTO_LOCAL_BgScreen_ReplaceRectPalette
void BgScreen_ReplaceRectPalette(u16 *tbl, s32 x0, s32 y0, s32 x1, s32 y1, u32 from, u32 to);
#endif
#ifndef PROTO_LOCAL_MenuCtrl_SetTransitionProgress
void MenuCtrl_SetTransitionProgress(s32 v);
#endif
#ifndef PROTO_LOCAL_MenuCtrl_GetTransitionProgress
s32 MenuCtrl_GetTransitionProgress();
#endif
#ifndef PROTO_LOCAL_MenuCtrl_GetTransitionProgressOrFull
s32 MenuCtrl_GetTransitionProgressOrFull();
#endif
#ifndef PROTO_LOCAL_MenuCtrl_IsTransitionActive
BOOL MenuCtrl_IsTransitionActive();
#endif
#ifndef PROTO_LOCAL_MenuCtrl_IsScreenChanging
BOOL MenuCtrl_IsScreenChanging();
#endif
#ifndef PROTO_LOCAL_MenuCtrl_GetArg
u32 MenuCtrl_GetArg();
#endif
#ifndef PROTO_LOCAL_MenuCtrl_SetArg
void MenuCtrl_SetArg(u32 v);
#endif
#ifndef PROTO_LOCAL_MenuCtrl_GetMode
u32 MenuCtrl_GetMode();
#endif
#ifndef PROTO_LOCAL_MenuCtrl_SetMode
void MenuCtrl_SetMode(u32 v);
#endif
#ifndef PROTO_LOCAL_MenuCtrl_GetIndex
u32 MenuCtrl_GetIndex();
#endif
#ifndef PROTO_LOCAL_MenuCtrl_SetIndex
void MenuCtrl_SetIndex(u32 v);
#endif
#ifndef PROTO_LOCAL_MenuCtrl_IsResultOk
BOOL MenuCtrl_IsResultOk();
#endif
#ifndef PROTO_LOCAL_MenuCtrl_IsResultDuplicateName
BOOL MenuCtrl_IsResultDuplicateName();
#endif
#ifndef PROTO_LOCAL_MenuCtrl_SetResult
void MenuCtrl_SetResult(u32 v);
#endif
#ifndef PROTO_LOCAL_MenuCtrl_SetText
void MenuCtrl_SetText(u32 a, u32 b);
#endif
#ifndef PROTO_LOCAL_MenuCtrl_OpenLauncher
BOOL MenuCtrl_OpenLauncher(u32 a);
#endif
#ifndef PROTO_LOCAL_MenuCtrl_OpenLauncherWithIndex
BOOL MenuCtrl_OpenLauncherWithIndex(u32 a, u32 b);
#endif
#ifndef PROTO_LOCAL_MenuCtrl_IsFinished
BOOL MenuCtrl_IsFinished();
#endif
#ifndef PROTO_LOCAL_MenuCtrl_SetSavedSlot
void MenuCtrl_SetSavedSlot(u32 v);
#endif
#ifndef PROTO_LOCAL_MenuCtrl_GetSavedSlot
u32 MenuCtrl_GetSavedSlot();
#endif
#ifndef PROTO_LOCAL_MenuCtrl_SetChosenItems
void MenuCtrl_SetChosenItems(u16 *src);
#endif
#ifndef PROTO_LOCAL_MenuCtrl_GetChosenItems
u16 *MenuCtrl_GetChosenItems(void);
#endif
#ifndef PROTO_LOCAL_MenuCtrl_ReplaceBackupItem
void MenuCtrl_ReplaceBackupItem(u32 key, u16 val);
#endif
#ifndef PROTO_LOCAL_MenuCtrl_OpenPocketSelect
BOOL MenuCtrl_OpenPocketSelect(u32 a, u32 b);
#endif
#ifndef PROTO_LOCAL_MenuCtrl_BuildPocketMask
u16 MenuCtrl_BuildPocketMask(BOOL (*cb)(u16 *, void *));
#endif
#ifndef PROTO_LOCAL_MenuCtrl_GetPocketSelectMask
u16 MenuCtrl_GetPocketSelectMask(void);
#endif
#ifndef PROTO_LOCAL_MenuCtrl_GetPocketSelectLabel
u8 MenuCtrl_GetPocketSelectLabel(void);
#endif
#ifndef PROTO_LOCAL_MenuCtrl_OpenPostOffice
BOOL MenuCtrl_OpenPostOffice(void);
#endif
#ifndef PROTO_LOCAL_MenuCtrl_SetPostOfficeResult
void MenuCtrl_SetPostOfficeResult(u32 v);
#endif
#ifndef PROTO_LOCAL_MenuCtrl_GetPostOfficeOutcome
u32 MenuCtrl_GetPostOfficeOutcome(void);
#endif
#ifndef PROTO_LOCAL_MenuCtrl_PostOfficeHadBadAddress
BOOL MenuCtrl_PostOfficeHadBadAddress(void);
#endif
#ifndef PROTO_LOCAL_MenuCtrl_GetPostOfficeFullMailboxes
u8 MenuCtrl_GetPostOfficeFullMailboxes(void);
#endif
#ifndef PROTO_LOCAL_MenuCtrl_PostOfficeWasRejected
BOOL MenuCtrl_PostOfficeWasRejected(void);
#endif
#ifndef PROTO_LOCAL_MenuCtrl_PostOfficeHadNoLetter
BOOL MenuCtrl_PostOfficeHadNoLetter(void);
#endif
#ifndef PROTO_LOCAL_MenuCtrl_PostOfficeLettersSent
BOOL MenuCtrl_PostOfficeLettersSent(void);
#endif
#ifndef PROTO_LOCAL_MenuCtrl_GetHandBells
u32 MenuCtrl_GetHandBells(void);
#endif
#ifndef PROTO_LOCAL_MenuCtrl_SetHandBells
void MenuCtrl_SetHandBells(u32 v);
#endif
#ifndef PROTO_LOCAL_MenuCtrl_GetAmount
u32 MenuCtrl_GetAmount(void);
#endif
#ifndef PROTO_LOCAL_MenuCtrl_SetAmount
void MenuCtrl_SetAmount(u32 v);
#endif
#ifndef PROTO_LOCAL_MenuCtrl_OpenNearbyTowns
BOOL MenuCtrl_OpenNearbyTowns(u32 a, u32 b);
#endif
#ifndef PROTO_LOCAL_MenuCtrl_GetPtrArg0
u32 MenuCtrl_GetPtrArg0(void);
#endif
#ifndef PROTO_LOCAL_MenuCtrl_GetPtrArg1
u32 MenuCtrl_GetPtrArg1(void);
#endif
#ifndef PROTO_LOCAL_MenuCtrl_IsClockMovedBack
BOOL MenuCtrl_IsClockMovedBack(void);
#endif
#ifndef PROTO_LOCAL_MenuCtrl_IsClockMovedForward
BOOL MenuCtrl_IsClockMovedForward(void);
#endif
#ifndef PROTO_LOCAL_MenuCtrl_IsClockEdited
BOOL MenuCtrl_IsClockEdited(void);
#endif
#ifndef PROTO_LOCAL_MenuCtrl_OpenPocketsFullInsect
BOOL MenuCtrl_OpenPocketsFullInsect(u32 v);
#endif
#ifndef PROTO_LOCAL_MenuCtrl_OpenPocketsFullFish
BOOL MenuCtrl_OpenPocketsFullFish(u32 a, u32 b);
#endif
#ifndef PROTO_LOCAL_MenuCtrl_OpenPocketsFullPickUp
BOOL MenuCtrl_OpenPocketsFullPickUp(u32 v);
#endif
#ifndef PROTO_LOCAL_MenuCtrl_OpenPocketsFullDug
BOOL MenuCtrl_OpenPocketsFullDug(u32 v);
#endif
#ifndef PROTO_LOCAL_MenuCtrl_GetPocketsFullItem
u16 MenuCtrl_GetPocketsFullItem(void);
#endif
#ifndef PROTO_LOCAL_MenuCtrl_SetPocketsFullItem
void MenuCtrl_SetPocketsFullItem(u32 v);
#endif
#ifndef PROTO_LOCAL_MenuCtrl_SetCatalogItem
void MenuCtrl_SetCatalogItem(u32 v);
#endif
#ifndef PROTO_LOCAL_MenuCtrl_GetCatalogItem
u16 MenuCtrl_GetCatalogItem(void);
#endif
#ifndef PROTO_LOCAL_MenuCtrl_SetSongItem
void MenuCtrl_SetSongItem(u32 v);
#endif
#ifndef PROTO_LOCAL_MenuCtrl_GetSongItem
u16 MenuCtrl_GetSongItem(void);
#endif
#ifndef PROTO_LOCAL_MenuCtrl_OpenLauncherWithText
BOOL MenuCtrl_OpenLauncherWithText(u32 a, u32 b, u32 c);
#endif
#ifndef PROTO_LOCAL_MenuCtrl_GetKeyboardPage
u8 MenuCtrl_GetKeyboardPage(void);
#endif
#ifndef PROTO_LOCAL_MenuCtrl_SetKeyboardPage
void MenuCtrl_SetKeyboardPage(u32 v);
#endif
#ifndef PROTO_LOCAL_MenuCtrl_GetKeyboardPageMode
u8 MenuCtrl_GetKeyboardPageMode(u32 i);
#endif
#ifndef PROTO_LOCAL_MenuCtrl_SetKeyboardPageMode
void MenuCtrl_SetKeyboardPageMode(u32 i, u32 v);
#endif
#ifndef PROTO_LOCAL_MenuCtrl_IsForceCloseDue
s32 MenuCtrl_IsForceCloseDue(void);
#endif
#ifndef PROTO_LOCAL_MenuCtrl_IsSyncMsgMenu
BOOL MenuCtrl_IsSyncMsgMenu(void);
#endif
#ifndef PROTO_LOCAL_MenuCtrl_IsFriendPageFromIndex
BOOL MenuCtrl_IsFriendPageFromIndex(void);
#endif
#ifndef PROTO_LOCAL_MenuCtrl_SetChatDraft
void MenuCtrl_SetChatDraft(u32 a);
#endif
}
#endif

#endif
