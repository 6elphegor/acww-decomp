// mwcc-flags: -O4,p
#include "types.h"

#pragma thumb off

extern "C" {
s32 GX_LoadBG2Scr();
s32 WfcUtil_LoadFileTo(void *, void *);
s32 WfcUtil_GetEditParams(s32, s32 *);
s32 WfcUtil_ShowTopMessage(s32, s32, s32);
s32 WfcHighlight_SetConnection();
s32 WfcUtil_SetScene(void *);
s32 WfcUtil_SetScreenFlags(s32, s32);
s32 WfcFade_IsBusy(s32);
s32 WfcGx_HidePlanes(s32, s32);
s32 WfcGx_ShowPlanes(s32, s32);
s32 WfcFade_Start(s32, s32, s32, s32);
s32 WfcDialog_IsOpen();
s32 WfcDialog_GetResult();
s32 WfcDialog_Close();
s32 WfcDialog_Open(s32, s32, s32, s32, s32);
s32 WfcApScan_Free();
s32 WfcConfig_CommitEdit();
s32 WfcSound_Play(s32);

void WfcTestConfirm_Exit();
void WfcTestConfirm_FadeOut();
void func_ov001_0221bca8();
void func_ov001_0221bcac();
void WfcTestConfirm_WaitDialog();
void WfcTestConfirm_ShowDialog();
void WfcTestConfirm_FadeIn();
void WfcTestConfirm_LoadBg();
void WfcTestConfirm_Enter();
void WfcConnTest_Enter();
}

struct Unk_0221bd00_V { s32 v[3]; };

extern "C" s32 sWfcTestConfirmMessages[3] = {0x75, 0x75, 0x9d};

extern "C" void WfcTestConfirm_Enter() {
    s32 x;
    WfcApScan_Free();
    WfcUtil_GetEditParams(0, &x);
    WfcTestConfirm_LoadBg();
    WfcUtil_ShowTopMessage(0x7d, -1, 0);
    if (x != 2) WfcHighlight_SetConnection();
    if (x == 1) WfcConfig_CommitEdit();
    WfcUtil_SetScene((void *)WfcTestConfirm_FadeIn);
}

extern "C" void WfcTestConfirm_LoadBg() {
    WfcUtil_LoadFileTo((void *)"char/xb4None.nsc.l", (void *)GX_LoadBG2Scr);
    volatile u16 *r1 = (volatile u16 *)0x4001008;
    volatile u16 *r2 = (volatile u16 *)0x400100a;
    volatile u16 *r3 = (volatile u16 *)0x400000a;
    volatile u16 *r4 = (volatile u16 *)0x400000c;
    *r1 = (*r1 & ~3) | 3;
    *r2 = (*r2 & ~3) | 3;
    *r3 = (*r3 & ~3) | 3;
    *r4 = (*r4 & ~3) | 3;
}

extern "C" void WfcTestConfirm_FadeIn() {
    WfcFade_Start(2, 1, 1, 8);
    WfcFade_Start(2, 0, 0x14, 8);
    WfcGx_ShowPlanes(1, 1);
    WfcGx_ShowPlanes(0, 0x14);
    WfcUtil_SetScene((void *)WfcTestConfirm_ShowDialog);
}

extern "C" void WfcTestConfirm_ShowDialog() {
    s32 x;
    Unk_0221bd00_V a = *(Unk_0221bd00_V *)sWfcTestConfirmMessages;
    if (WfcFade_IsBusy(1) != 0) return;
    if (WfcFade_IsBusy(0) != 0) return;
    WfcUtil_GetEditParams(0, &x);
    WfcDialog_Open(a.v[x], 1, 1, -1, 0);
    WfcUtil_SetScene((void *)WfcTestConfirm_WaitDialog);
}

extern "C" void WfcTestConfirm_WaitDialog() {
    func_ov001_0221bcac();
    func_ov001_0221bca8();
    if (WfcDialog_GetResult() != 0) return;
    WfcSound_Play(6);
    WfcDialog_Close();
    WfcSound_Play(6);
    WfcUtil_SetScene((void *)WfcTestConfirm_FadeOut);
}

extern "C" void func_ov001_0221bcac() {
}

extern "C" void func_ov001_0221bca8() {
}

extern "C" void WfcTestConfirm_FadeOut() {
    if (WfcDialog_IsOpen() != 0) return;
    WfcFade_Start(3, 0, 0x14, 8);
    WfcUtil_SetScene((void *)WfcTestConfirm_Exit);
}

extern "C" void WfcTestConfirm_Exit() {
    if (WfcFade_IsBusy(0) != 0) return;
    WfcGx_HidePlanes(0, 0x14);
    WfcUtil_SetScreenFlags(0, 1);
    WfcUtil_SetScene((void *)WfcConnTest_Enter);
}
