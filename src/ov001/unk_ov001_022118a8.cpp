// mwcc-flags: -O4,p
#include "types.h"
#include "ui/WfcApList.h"
#include "nitro/io_access.h"
#include "proto/ov001/unk_ov001_02207904.h"
#include "proto/ov001/unk_ov001_02207b3c.h"
#include "proto/ov001/unk_ov001_02208244.h"
#include "proto/ov001/unk_ov001_02208388.h"
#include "proto/ov001/unk_ov001_0220864c.h"
#include "proto/ov001/unk_ov001_02208890.h"
#include "proto/ov001/unk_ov001_0220c37c.h"
#include "proto/ov001/unk_ov001_0220c594.h"
#include "proto/ov001/unk_ov001_02210cc0.h"
#include "proto/ov001/unk_ov001_022111c8.h"
#include "proto/ov001/unk_ov001_022118a8.h"
#include "proto/ov001/unk_ov001_02211b2c.h"
#include "proto/ov001/unk_ov001_0221ab50.h"
#include "proto/ov001/unk_ov001_0221bc10.h"
#include "proto/ov001/unk_ov001_0221cd74.h"
#include "proto/ov001/unk_ov001_0221cfc0.h"
#include "proto/ov001/unk_ov001_0221e930.h"
#include "proto/ov001/unk_ov001_0221feac.h"
#include "proto/ov001/unk_ov001_02224ca0.h"
#include "proto/ov001/unk_ov001_0222516c.h"
#include "proto/ov001/unk_ov001_02226c24.h"
#include "proto/ov001/unk_ov001_02226f68.h"

#pragma thumb off

extern "C" {
u8 sWfcAossDoneTimer;
}


namespace F0221197c {


extern "C" {
extern u8 data_ov001_0222ae94[];
extern u8 GX_LoadBG2Scr[];
extern u8 sWfcAossDoneTimer;
extern u8 data_ov001_0222aea8;
extern u8 sWfcApListCursor;
extern u16 sWfcApListScroll;
extern WfcApList *sWfcApList;
extern u16 data_ov001_0222a030[];
extern u16 data_ov001_0222a032[];
extern u16 data_ov001_0222a034[];

s32 WfcGx_ShowPlanes(u32 a, u32 b);
void WfcUtil_LoadFileTo(void *a, void *b);
s32 FX_ModS32(s32, s32);
s32 FX_DivS32(s32, s32);
void *MI_CpuFill8(void *, s32, u32);

}

extern "C" {

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
    IO_W((volatile u16 *)0x4001008, (IO_R((volatile u16 *)0x4001008) & ~3) | 3);
    IO_W((volatile u16 *)0x400100a, (IO_R((volatile u16 *)0x400100a) & ~3) | 3);
    IO_W((volatile u16 *)0x400000a, (IO_R((volatile u16 *)0x400000a) & ~3) | 3);
    IO_W((volatile u16 *)0x400000c, (IO_R((volatile u16 *)0x400000c) & ~3) | 3);
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

s32 WfcGx_ShowPlanes(s32, s32);
void WfcUtil_LoadFileTo(void *, void *);
s32 WfcTransfer_Start(void *);
s32 WfcInput_Update();
s32 WfcGx_HidePlanes(s32, s32);
s32 WfcInput_IsKeyHeld(s32);
void GX_LoadBG2Char();
void GX_LoadBGPltt();
void GX_LoadBG2Scr();


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
