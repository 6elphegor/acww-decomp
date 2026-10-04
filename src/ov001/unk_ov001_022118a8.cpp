// mwcc-flags: -O4,p
#include "types.h"

#pragma thumb off

extern "C" {
u8 sWfcAossDoneTimer;
}


namespace F0221197c {

struct Unk_ov001_0222de74 {
    u8 *apEntries;
    u32 bgMapFile;
    void *paletteFile;
    void *textCanvas;
    u32 *securityIcons[5];
    u32 *signalIcons[5];
    void *scrollTask;
    u32 bgScrollTask;
    u16 maxScroll;
    u16 securityIconTiles[3];
    u16 signalIconTiles[3];
    u8 pad_4e[3];
    u8 apCount;
    u8 pad_52;
    u8 scrollBarRange;
    u8 pad_54[2];
    u8 bgScrollPending;
    u8 pad_57[2];
    u8 errorSoundPlayed;
};

extern "C" {
extern u8 data_ov001_0222ae94[];
extern u8 GX_LoadBG2Scr[];
extern u8 sWfcAossDoneTimer;
extern u8 data_ov001_0222aea8;
extern u8 sWfcApListCursor;
extern u16 sWfcApListScroll;
extern Unk_ov001_0222de74 *sWfcApList;
extern u16 data_ov001_0222a030[];
extern u16 data_ov001_0222a032[];
extern u16 data_ov001_0222a034[];

s32 WfcFade_Start(u32 a, u32 b, u32 c, u32 d);
s32 WfcUtil_SetScene(void *p);
s32 WfcFade_IsBusy(u32 a);
s32 WfcGx_ShowPlanes(u32 a, u32 b);
s32 WfcUtil_LoadFileTo(void *a, void *b);
s32 WfcHighlight_SetConnection();
s32 WfcUtil_ShowBottomMessage(u32 a);
s32 WfcSound_Play(u32 a);
s32 WfcDialog_IsOpen();
s32 WfcButtonBar_EnableInput();
s32 WfcScrollBar_Enable();
s32 WfcDialog_GetResult();
s32 WfcDialog_Close();
s32 WfcUtil_RequestPaletteLine(void *a, u32 b, u32 c);
void *WfcTask_Add(s32, void *, s32, s32);
void WfcTask_RequestDelete(s32, s32);
s32 WfcApList_Redraw();
s32 WfcScrollBar_SetPos(u32 a);
s32 WfcScrollBar_Disable();
s32 WfcCursor_Clear();
void WfcCursor_ShowPair(u32 a, u32 b, u32 c, u32 d);
s32 FX_ModS32(s32, s32);
s32 FX_DivS32(s32, s32);
s32 WfcUtil_StrNLen(void *a, u32 b);
void WfcText_DrawMonospace(void *a, u32 b, u32 c, u32 d, u32 e, void *f, u32 g);
void *MI_CpuFill8(void *, s32, u32);

void WfcAossDone_Exit();
void WfcAossDone_Update();
void WfcAossDone_WaitFadeIn();
void WfcAossDone_FadeIn();
void WfcApList_Update();
void WfcApList_WaitDialogClosed();
void WfcApList_ScrollDownTask(u32 a);
void WfcApList_ScrollUpTask(u32 a);
void WfcApList_UpdateCursor();
void WfcApList_ScrollDown();
void WfcAossDone_WaitTimer();
void WfcApList_LayoutRows();
}

extern "C" {

void WfcAossDone_FadeOut();
void WfcAossDone_Idle();
void WfcAossDone_Update();
void WfcAossDone_WaitFadeIn();
void WfcAossDone_FadeIn();
void WfcAossDone_LoadBg();
void WfcAossDone_Enter();
void WfcAossDone_Enter() {
    sWfcAossDoneTimer = 0;
    WfcAossDone_LoadBg();
    WfcHighlight_SetConnection();
    WfcUtil_ShowBottomMessage(0x68);
    WfcSound_Play(0x10);
    WfcUtil_SetScene((void *)WfcAossDone_FadeIn);
}

void WfcAossDone_LoadBg() {
    WfcUtil_LoadFileTo((void *)"char/xb4Multi.nsc.l", GX_LoadBG2Scr);
    *(volatile u16 *)0x4001008 = (*(volatile u16 *)0x4001008 & ~3) | 3;
    *(volatile u16 *)0x400100a = (*(volatile u16 *)0x400100a & ~3) | 3;
    *(volatile u16 *)0x400000a = (*(volatile u16 *)0x400000a & ~3) | 3;
    *(volatile u16 *)0x400000c = (*(volatile u16 *)0x400000c & ~3) | 3;
}

void WfcAossDone_FadeIn() {
    WfcFade_Start(2, 0, 0x15, 8);
    WfcGx_ShowPlanes(0, 0x15);
    WfcUtil_SetScene((void *)WfcAossDone_WaitFadeIn);
}

void WfcAossDone_WaitFadeIn() {
    if (WfcFade_IsBusy(0) != 0) return;
    WfcUtil_SetScene((void *)WfcAossDone_Update);
}

void WfcAossDone_Update() {
    WfcAossDone_WaitTimer();
    WfcAossDone_Idle();
}

void WfcAossDone_Idle() {}

void WfcAossDone_FadeOut() {
    WfcFade_Start(3, 1, 1, 8);
    WfcFade_Start(3, 0, 0x15, 8);
    WfcUtil_SetScene((void *)WfcAossDone_Exit);
}

}
}

namespace F02211030 {


extern "C" {
extern u8 data_ov001_0222ae3c[];
extern u8 data_ov001_0222ae50[];
extern u8 data_ov001_0222ae68[];
extern u8 data_ov001_0222ae80[];
extern volatile u8 sWfcTransferWaitResult;
extern volatile u8 sWfcAossSetupSucceeded;
extern volatile u16 sWfcAossSetupTimer;
extern u32 sWfcAossSetupUiTask;
extern volatile u8 sWfcAossDoneTimer;

s32 WfcFade_IsBusy(s32);
s32 WfcUtil_OpenButtonBar(s32);
s32 WfcUtil_SetScene(void *);
s32 WfcFade_Start(s32, s32, s32, s32);
s32 WfcGx_ShowPlanes(s32, s32);
s32 WfcUtil_LoadFileTo(void *, void *);
s32 WfcTransfer_Start(void *);
s32 WfcUtil_ShowBottomMessage(s32);
s32 WfcBusyIcon_Create(s32);
s32 WfcSound_Play(s32);
s32 WfcSound_Stop();
s32 WfcDialog_IsOpen();
s32 WfcDialog_GetResult();
s32 WfcDialog_Close();
s32 WfcInput_Update();
s32 WfcTask_RunList(s32);
s32 WfcButtonBar_IsClosed();
s32 WfcAoss_End(s32);
s32 WfcBusyIcon_Delete();
s32 WfcText_DestroyBgCanvas(s32);
s32 WfcUtil_HideTopMessage();
s32 WfcGx_HidePlanes(s32, s32);
s32 WfcUtil_SetScreenFlags(s32, s32);
s32 WfcUtil_SetEditParams(s32, s32);
s32 WfcButtonBar_Close();
s32 WfcButtonBar_DisableInput();
s32 WfcTask_Delete(s32, s32);
s32 WfcButtonBar_GetResult();
s32 WfcDialog_Open(s32, s32, s32, s32, s32);
s32 WfcInput_IsKeyHeld(s32);
s32 WfcButtonBar_SetResult(s32);
s32 WfcAoss_Run();
s32 WfcTask_Add(s32, void *, s32, s32);
s32 WfcHighlight_SetConnection();
s32 WfcUtil_ShowTopMessage(s32, s32, s32);
s32 WfcUtil_ShowStepIndicator(s32);
s32 WfcFade_StartWait(s32);
s32 WfcAoss_Begin();
void WfcTransferWait_WaitButtonBar();
void WfcTransferWait_OnTransferEvent();
void WfcSetupMethod_Enter();
void WfcAossDone_Enter();
void WfcTestConfirm_Enter();
void WfcAossDone_FadeOut();
void GX_LoadBG2Char();
void GX_LoadBGPltt();
void GX_LoadBG2Scr();

void WfcTransferWait_WaitFadeIn();
void WfcTransferWait_FadeIn();
void WfcTransferWait_LoadBg();
void WfcTransferWait_Enter();
BOOL WfcTransferWait_IsLidClosed();
void WfcAossSetup_Cancel();
void WfcAossSetup_WaitAfterSuccess();
void WfcAossSetup_WaitDialogClosed();
void WfcAossSetup_WaitErrorDialog();
void WfcAossSetup_UiTask();
void WfcAossSetup_Exit();
void WfcAossSetup_FadeOut();
void WfcAossSetup_StartExit();
void WfcAossSetup_HandleResult();
void WfcAossSetup_Idle();
void WfcAossSetup_HandleInput();
void WfcAossSetup_RunAoss();
void WfcAossSetup_StartAoss();
void WfcAossSetup_WaitFadeIn();
void WfcAossSetup_FadeIn();
void WfcAossSetup_LoadBg();
void WfcAossSetup_Enter();
BOOL WfcAossSetup_IsLidClosed();
void WfcAossDone_WaitTimer();
void WfcAossDone_Exit();

void WfcAossDone_WaitTimer();
void WfcAossDone_Exit();
void WfcAossDone_Exit() {
    if (WfcFade_IsBusy(1) != 0) return;
    if (WfcFade_IsBusy(0) != 0) return;
    WfcText_DestroyBgCanvas(0);
    WfcUtil_HideTopMessage();
    WfcGx_HidePlanes(1, 1);
    WfcGx_HidePlanes(0, 0x15);
    WfcUtil_SetScreenFlags(0, 0);
    WfcUtil_SetEditParams(0, 1);
    WfcUtil_SetScene((void *)WfcTestConfirm_Enter);
}

void WfcAossDone_WaitTimer() {
    sWfcAossDoneTimer = sWfcAossDoneTimer + 1;
    if (sWfcAossDoneTimer < 0x78) return;
    WfcUtil_SetScene((void *)WfcAossDone_FadeOut);
}

}
}
