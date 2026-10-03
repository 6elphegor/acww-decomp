// mwcc-flags: -O4,p
#include "types.h"

#pragma thumb off

extern "C" {
extern const u8 data_ov001_0222a000[4];
extern const u8 data_ov001_0222a004[4];
extern const u16 data_ov001_0222a008[20];
extern const u16 data_ov001_0222a030[20];
const u8 data_ov001_0222a000[4] = {0x2e, 0x2d, 0x33, 0};
const u8 data_ov001_0222a004[4] = {0x18, 0x17, 0x16, 0x15};
const u16 data_ov001_0222a030[20] = {4, 0x2e, 0xdb, 0x3f, 4, 0x4a, 0xdb, 0x5b, 4, 0x66, 0xdb, 0x77, 4, 0x82, 0xdb, 0x93, 0x82, 0x18, 0xf0, 0x2c};
const u16 data_ov001_0222a008[20] = {7, 0x32, 0xd0, 0x4c, 7, 0x4e, 0xd0, 0x68, 7, 0x6a, 0xd0, 0x84, 7, 0x86, 0xd0, 0xa0, 0x85, 0x1b, 0xfd, 0x2c};
u8 data_ov001_0222aea8 = 2;
u8 sWfcApListCursor;
u16 sWfcApListScroll;
void *sWfcApList;
}


#define BGCNT(a, v) (*(volatile u16 *)(a) = (*(volatile u16 *)(a) & ~3) | (v))

namespace F02212e84 {


struct Unk_ov001_02212f98_Reg { u16 h0; u16 h2; u16 h4; };

struct Unk_ov001_0222de74 {
    u8 *unk_00;
    u32 *unk_04;
    u32 *unk_08;
    void *unk_0c;
    Unk_ov001_02212f98_Reg *unk_10[5];
    Unk_ov001_02212f98_Reg *unk_24[5];
    void *unk_38;
    void *unk_3c;
    u16 unk_40;
    u16 unk_42[3];
    u16 unk_48[4];
    u8 pad_50;
    u8 unk_51;
    u8 unk_52;
    u8 unk_53;
};

struct Unk_ov001_0222de78 {
    u32 unk_00;
    u32 *unk_04;
    u8 unk_08[0x22];
    u8 unk_2a;
};

struct Unk_ov001_02213124_S25 { u8 b[25]; };
struct Unk_ov001_02213124_S22 { u8 b[22]; };

extern "C" {
extern Unk_ov001_0222de74 *sWfcApList;
extern Unk_ov001_0222de78 *sWfcTextEdit;
extern u16 sWfcApListScroll;
extern u8 sWfcApListCursor;
extern void *sWfcTextEditStoreFuncs[];

void GX_LoadBG3Scr();
s32 FX_DivS32(s32, s32);
void WfcApList_HandleInput();
void WfcApList_HandleScrollBar();
void WfcApList_HandleResult();
s32 WfcButtonBar_GetResult();
void WfcButtonBar_EnableInput();
void WfcUtil_SetScene(void *);
s32 WfcFade_IsBusy(s32);
void WfcUtil_OpenButtonBar(s32);
void WfcFade_Start(s32, s32, s32, s32);
void WfcGx_ShowPlanes(s32, s32);
Unk_ov001_02212f98_Reg *WfcObj_CreateSingle(s32, s32);
void WfcCell_Copy(s32, u32, void *);
void WfcScrollBar_Create(s32, s32, s32, s32, s32);
s32 WfcUtil_LoadFileTo(void *, void *);
void *WfcUtil_LocalizePath(void *);
void *WfcFs_LoadFile(void *, s32, s32);
void WfcBgMap_Create(void *);
void WfcBgMap_RequestTransfer();
void *WfcHeap_AllocClear(s32, s32);
void WfcUtil_GetEditParams(s32 *, s32 *);
s32 WfcApScan_GetResults(void *);
void WfcHighlight_SetConnection();
void WfcUtil_ShowTopMessage(s32, s32, s32);
void WfcUtil_ShowStepIndicator(s32);
void *WfcText_CreateBgCanvas(s32, s32);
void *WfcTask_Add(s32, void *, s32, s32);
void WfcApList_Redraw();
void WfcApList_UpdateCursor();
void WfcApList_ApplyBgScrollTask();
void WfcTextEdit_OpenKeyboard();
void WfcTextEdit_Exit();
s32 WfcDialog_IsOpen();
s32 WfcDialog_GetResult();
s32 WfcDialog_Close();
void WfcSound_Play(s32);
s32 WfcUtil_StrNLen(void *, s32);

void WfcApList_Update();
void WfcApList_WaitButtonBar();
void WfcApList_WaitFadeIn();
void WfcApList_FadeIn();
void WfcTextEdit_ReturnToInput();
void WfcTextEdit_ApplyAndExit();

void WfcApList_Update();
void WfcApList_WaitButtonBar();
void WfcApList_WaitFadeIn();
void WfcApList_FadeIn();
void WfcApList_CreateRowIcons();
void WfcApList_InitScrollBar();
void WfcApList_LoadBg();
void WfcApList_Enter();
void WfcApList_Enter() {
    s32 x;
    sWfcApList = (Unk_ov001_0222de74 *)WfcHeap_AllocClear(0x5c, 4);
    WfcUtil_GetEditParams(&x, 0);
    if (x == 0) {
        sWfcApListCursor = 0;
        sWfcApListScroll = 0;
    }
    sWfcApList->unk_51 = WfcApScan_GetResults(sWfcApList);
    WfcApList_LoadBg();
    WfcHighlight_SetConnection();
    WfcUtil_ShowTopMessage(0x80, -1, 0);
    WfcUtil_ShowStepIndicator(2);
    WfcApList_InitScrollBar();
    WfcApList_CreateRowIcons();
    sWfcApList->unk_0c = (void *)WfcText_CreateBgCanvas(0, 0);
    sWfcApList->unk_3c = WfcTask_Add(1, (void *)WfcApList_ApplyBgScrollTask, 0, 0x6e);
    WfcApList_Redraw();
    WfcApList_UpdateCursor();
    WfcUtil_SetScene((void *)WfcApList_FadeIn);
}

void WfcApList_LoadBg() {
    char a[25] = "char/xb4ApListBack.nsc.l";
    char b[22] = "char/ybBgStep31.ncl.l";
    WfcUtil_LoadFileTo((void *)"char/jb4ApList.nsc.l", (void *)GX_LoadBG3Scr);
    sWfcApList->unk_04 = (u32 *)WfcFs_LoadFile(WfcUtil_LocalizePath(&a), 0, 4);
    WfcBgMap_Create(sWfcApList->unk_04);
    WfcBgMap_RequestTransfer();
    sWfcApList->unk_08 = (u32 *)WfcFs_LoadFile(WfcUtil_LocalizePath(&b), 0, 4);
    BGCNT(0x4001008, 3);
    BGCNT(0x400100a, 3);
    BGCNT(0x4000008, 3);
    BGCNT(0x400000a, 2);
    BGCNT(0x400000c, 3);
    BGCNT(0x400000e, 2);
}

void WfcApList_InitScrollBar() {
    s32 r = 0;
    s32 m;
    sWfcApList->unk_40 = (sWfcApList->unk_51 - 4) * 0x1c;
    if (sWfcApList->unk_51 <= 4) {
        m = r;
        sWfcApList->unk_53 = 0;
    } else if (sWfcApList->unk_51 <= 8) {
        sWfcApList->unk_53 = 0x1f;
        m = 1;
    } else {
        sWfcApList->unk_53 = 0x37;
        m = 2;
    }
    if (m != 0) {
        r = FX_DivS32(sWfcApListScroll * sWfcApList->unk_53, sWfcApList->unk_40);
    }
    WfcScrollBar_Create(m, 0x55, 0xec, 0x3f, r);
}

void WfcApList_CreateRowIcons() {
    s32 n, i;
    n = sWfcApList->unk_51;
    if (n > 5) n = 5;
    i = 0;
    if (n > 0) {
        u32 a = data_ov001_0222a000[0];
        u32 b = data_ov001_0222a004[0];
        do {
            sWfcApList->unk_10[i] = WfcObj_CreateSingle(0, a);
            sWfcApList->unk_24[i] = WfcObj_CreateSingle(0, b);
            i++;
        } while (i < n);
    }
    {
        const u8 *p = data_ov001_0222a000;
        u32 j;
        for (j = 0; j < 3; j++, p++) {
            WfcCell_Copy(0, *p, sWfcApList->unk_10[0]);
            sWfcApList->unk_42[j] = sWfcApList->unk_10[0]->h4 & 0x3ff;
        }
    }
    {
        const u8 *p = data_ov001_0222a004;
        u32 j;
        for (j = 0; j < 4; j++, p++) {
            WfcCell_Copy(0, *p, sWfcApList->unk_24[0]);
            sWfcApList->unk_48[j] = sWfcApList->unk_24[0]->h4 & 0x3ff;
        }
    }
    for (i = 0; i < n; i++) {
        Unk_ov001_02212f98_Reg *r = sWfcApList->unk_10[i];
        r->h4 = (r->h4 & ~0xc00) | 0xc00;
        r = sWfcApList->unk_24[i];
        r->h4 = (r->h4 & ~0xc00) | 0xc00;
    }
}

void WfcApList_FadeIn() {
    WfcFade_Start(2, 1, 1, 8);
    WfcFade_Start(2, 0, 0x1d, 8);
    WfcGx_ShowPlanes(1, 1);
    WfcGx_ShowPlanes(0, 0x1d);
    WfcUtil_SetScene((void *)WfcApList_WaitFadeIn);
}

void WfcApList_WaitFadeIn() {
    if (WfcFade_IsBusy(1) != 0) return;
    if (WfcFade_IsBusy(0) != 0) return;
    WfcUtil_OpenButtonBar(0);
    WfcUtil_SetScene((void *)WfcApList_WaitButtonBar);
}

void WfcApList_WaitButtonBar() {
    if (WfcButtonBar_GetResult() == -2) return;
    WfcButtonBar_EnableInput();
    WfcUtil_SetScene((void *)WfcApList_Update);
}

void WfcApList_Update() {
    WfcApList_HandleInput();
    WfcApList_HandleScrollBar();
    WfcApList_HandleResult();
}

}
}

namespace F022123e4 {


struct Unk_ov001_0222de74_Rec {
    u8 pad_00[0x28];
    u8 unk_28;
    u8 pad_29;
};

struct Unk_ov001_0222de74 {
    Unk_ov001_0222de74_Rec *unk_00;
    void *unk_04;
    void *unk_08;
    void *unk_0c;
    void *unk_10[5];
    void *unk_24[5];
    void *unk_38;
    u32 unk_3c;
    u16 unk_40;
    u8 pad_42[0xe];
    s8 unk_50;
    u8 unk_51;
    u8 unk_52;
    u8 unk_53;
    u8 unk_54;
    u8 unk_55;
    u8 unk_56;
    u8 unk_57;
    u8 unk_58;
    u8 unk_59;
};

extern "C" {
extern Unk_ov001_0222de74 *sWfcApList;
extern u16 sWfcApListScroll;
extern u8 sWfcApListCursor;
extern u8 gWfcScreenRect[];

s32 FX_DivS32(s32, s32);
s32 FX_ModS32(s32, s32);
s32 WfcText_Clear(void *, s32);
s32 WfcApList_DrawSsid(s32, s32);
s32 WfcApList_SetRowIcons(s32, s32);
s32 WfcText_RequestTransfer(void *);
s32 WfcApList_LayoutRows();
s32 WfcFade_IsBusy(s32);
s32 WfcButtonBar_IsClosed();
s32 WfcTask_Delete(s32, void *);
s32 WfcOam_FreeEntry(void *);
s32 WfcText_ReleaseBgCanvas(void *);
s32 WfcScrollBar_Destroy();
s32 WfcCursor_Clear();
s32 WfcUtil_HideTopMessage();
s32 WfcBgMap_Destroy();
s32 WfcFs_FreeFile(void *);
s32 WfcGx_HidePlanes(s32, s32);
s32 WfcApScan_Free();
u8 *WfcConfig_GetEdit();
s32 WfcConfig_BeginEdit(s32);
s32 WfcUtil_SetScreenFlags(s32, s32);
s32 WfcUtil_SetScene(void *);
s32 WfcConfig_SetEditSsid(void *);
s32 WfcUtil_SetEditParams(s32, s32);
s32 WfcHeap_FreeAndClear(void *);
s32 WfcButtonBar_Close();
s32 WfcButtonBar_DisableInput();
s32 WfcFade_Start(s32, s32, s32, s32);
s32 WfcFade_StartWait(s32);
s32 WfcButtonBar_GetResult();
s32 WfcSound_Play(s32);
s32 WfcApList_HighlightSearchButton();
s32 WfcScrollBar_Disable();
s32 WfcDialog_Open(s32, s32, s32, s32, s32);
s32 WfcScrollBar_GetEvent();
s32 WfcButtonBar_EnableInput();
s32 WfcScrollBar_GetPos();
s32 WfcApList_UpdateCursor();
s32 WfcTask_Add(s32, void *, s32, s32);
s32 WfcInput_IsTouchPressedIn(void *);
s32 WfcInput_IsTouchReleasedIn(void *);
s32 WfcButtonBar_SetResult(s32);
s32 WfcInput_IsKeyPressed(s32);
s32 WfcInput_IsKeyRepeat(s32);
s32 WfcInput_IsKeyReleased(s32);
s32 WfcApList_ScrollDown();
s32 WfcApList_ScrollUp();
s32 WfcApList_MoveCursor(s32);

void WfcApList_ScrollUpTask();
void WfcApList_ScrollDownTask();
void WfcApList_WaitErrorDialog();
void WfcSetupMethod_Enter();
void WfcApSearch_Enter();
void WfcTextEdit_Enter();
void WfcTestConfirm_Enter();

void WfcApList_Redraw();
void WfcApList_Exit();
void WfcApList_FadeOut();
void WfcApList_StartExit();
void WfcApList_HandleResult();
void WfcApList_HandleScrollBar();
void WfcApList_HandleInput();

void WfcApList_Redraw();
void WfcApList_Exit();
void WfcApList_FadeOut();
void WfcApList_StartExit();
void WfcApList_HandleResult();
void WfcApList_HandleScrollBar();
void WfcApList_HandleInput();
void WfcApList_HandleInput() {
    if (sWfcApList->unk_38 != 0) return;
    if (sWfcApList->unk_57 != 0) return;
    if (WfcInput_IsTouchPressedIn(gWfcScreenRect) != 0) {
        sWfcApList->unk_50 = -1;
        u32 i;
        u8 *p = (u8 *)data_ov001_0222a008;
        for (i = 0; i < 5; i++, p += 8) {
            if (WfcInput_IsTouchPressedIn(p) != 0) {
                if ((s32)i < 4) {
                    sWfcApList->unk_50 = i;
                    break;
                }
                WfcButtonBar_SetResult(1);
                sWfcApListCursor = i;
                WfcApList_UpdateCursor();
                return;
            }
        }
    }
    if (WfcInput_IsTouchReleasedIn(gWfcScreenRect) != 0) {
        u8 *p = (u8 *)data_ov001_0222a008;
        s32 i;
        for (i = 0; i < 4; i++, p += 8) {
            if (WfcInput_IsTouchReleasedIn(p) != 0) {
                if (sWfcApList->unk_50 != i) break;
                if (i >= sWfcApList->unk_51) {
                    WfcSound_Play(9);
                    break;
                }
                WfcButtonBar_SetResult(1);
                sWfcApListCursor = i;
                WfcApList_UpdateCursor();
                return;
            }
        }
    }
    if (WfcInput_IsKeyPressed(1) != 0) {
        WfcButtonBar_SetResult(1);
        WfcScrollBar_Disable();
        return;
    }
    if (WfcInput_IsKeyPressed(2) != 0) {
        WfcButtonBar_SetResult(0);
        return;
    }
    if (WfcInput_IsKeyRepeat(0x200) != 0) {
        WfcApList_ScrollDown();
        return;
    }
    if (WfcInput_IsKeyReleased(0x200) != 0) {
        sWfcApList->unk_59 = 0;
        return;
    }
    if (WfcInput_IsKeyRepeat(0x100) != 0) {
        WfcApList_ScrollUp();
        return;
    }
    if (WfcInput_IsKeyReleased(0x100) != 0) {
        sWfcApList->unk_59 = 0;
        return;
    }
    if (WfcInput_IsKeyRepeat(0x40) != 0) {
        WfcApList_MoveCursor(1);
        return;
    }
    if (WfcInput_IsKeyReleased(0x40) != 0) {
        sWfcApList->unk_59 = 0;
        return;
    }
    if (WfcInput_IsKeyRepeat(0x80) != 0) {
        WfcApList_MoveCursor(3);
        return;
    }
    if (WfcInput_IsKeyReleased(0x80) != 0) sWfcApList->unk_59 = 0;
}

void WfcApList_HandleScrollBar() {
    if (sWfcApList->unk_38 != 0) return;
    if (sWfcApList->unk_55 != 0) sWfcApList->unk_55--;
    switch (WfcScrollBar_GetEvent()) {
    case 0:
        break;
    case 1:
        sWfcApList->unk_57 = 1;
        WfcButtonBar_DisableInput();
        break;
    case 2:
        if (sWfcApList->unk_55 != 0) return;
        WfcCursor_Clear();
        sWfcApListScroll = FX_DivS32(sWfcApList->unk_40 * WfcScrollBar_GetPos(), sWfcApList->unk_53);
        WfcApList_Redraw();
        sWfcApList->unk_55 = 4;
        break;
    case 3: {
        sWfcApList->unk_57 = 0;
        WfcButtonBar_EnableInput();
        sWfcApListScroll = FX_DivS32(sWfcApList->unk_40 * WfcScrollBar_GetPos(), sWfcApList->unk_53);
        WfcSound_Play(0x13);
        WfcApList_Redraw();
        s32 r = FX_ModS32(sWfcApListScroll, 0x1c);
        if (r == 0) {
            WfcApList_UpdateCursor();
            return;
        }
        if (r < 0xe) sWfcApList->unk_38 = (void *)WfcTask_Add(0, (void *)WfcApList_ScrollUpTask, 0, 0x78);
        else sWfcApList->unk_38 = (void *)WfcTask_Add(0, (void *)WfcApList_ScrollDownTask, 0, 0x78);
        break;
    }
    case 4:
        if (sWfcApListScroll == 0) {
            if (sWfcApList->unk_58 != 0) return;
            WfcSound_Play(9);
            sWfcApList->unk_58 = 1;
        } else {
            WfcSound_Play(0x13);
            sWfcApList->unk_38 = (void *)WfcTask_Add(0, (void *)WfcApList_ScrollUpTask, 0, 0x78);
        }
        break;
    case 6:
        if (sWfcApList->unk_51 > 4) {
            if (sWfcApListScroll != sWfcApList->unk_40) goto c6b;
        }
        if (sWfcApList->unk_58 != 0) return;
        WfcSound_Play(9);
        sWfcApList->unk_58 = 1;
        break;
    c6b:
        WfcSound_Play(0x13);
        sWfcApList->unk_38 = (void *)WfcTask_Add(0, (void *)WfcApList_ScrollDownTask, 0, 0x78);
        break;
    case 5:
    case 7:
        sWfcApList->unk_58 = 0;
        break;
    }
}

void WfcApList_HandleResult() {
    if (sWfcApList->unk_38 != 0) return;
    if (sWfcApList->unk_57 != 0) return;
    switch (WfcButtonBar_GetResult()) {
    case 0:
        WfcSound_Play(7);
        break;
    case 1:
        if (sWfcApListCursor == 4) {
            sWfcApList->unk_54 = 1;
            WfcSound_Play(6);
            WfcApList_HighlightSearchButton();
        } else {
            s32 t = sWfcApListCursor + FX_DivS32(sWfcApListScroll, 0x1c);
            if (sWfcApList->unk_00[t].unk_28 == 2) {
                WfcSound_Play(9);
                WfcScrollBar_Disable();
                WfcButtonBar_DisableInput();
                WfcDialog_Open(0x42, 1, 1, -1, 0);
                WfcUtil_SetScene((void *)WfcApList_WaitErrorDialog);
                return;
            }
            sWfcApList->unk_54 = 1;
            sWfcApList->unk_52 = t;
            WfcSound_Play(6);
        }
        break;
    default:
        return;
    }
    WfcUtil_SetScene((void *)WfcApList_StartExit);
}

void WfcApList_StartExit() {
    WfcButtonBar_DisableInput();
    WfcFade_StartWait(8);
    WfcUtil_SetScene((void *)WfcApList_FadeOut);
}

void WfcApList_FadeOut() {
    if (WfcFade_IsBusy(1) != 0) return;
    if (sWfcApList->unk_54 != 0) WfcButtonBar_Close();
    else WfcButtonBar_DisableInput();
    WfcFade_Start(3, 1, 1, 8);
    WfcFade_Start(3, 0, 0x1d, 8);
    WfcUtil_SetScene((void *)WfcApList_Exit);
}

void WfcApList_Exit() {
    if (WfcFade_IsBusy(1) != 0) return;
    if (WfcFade_IsBusy(0) != 0) return;
    if (WfcButtonBar_IsClosed() == 0) return;
    WfcTask_Delete(1, (void *)sWfcApList->unk_3c);
    s32 i;
    for (i = 0; i < 5; i++) {
        if (sWfcApList->unk_10[i] != 0) WfcOam_FreeEntry(sWfcApList->unk_10[i]);
        if (sWfcApList->unk_24[i] != 0) WfcOam_FreeEntry(sWfcApList->unk_24[i]);
    }
    WfcText_ReleaseBgCanvas(sWfcApList->unk_0c);
    WfcScrollBar_Destroy();
    WfcCursor_Clear();
    WfcUtil_HideTopMessage();
    WfcBgMap_Destroy();
    WfcFs_FreeFile(sWfcApList->unk_04);
    WfcFs_FreeFile(sWfcApList->unk_08);
    WfcGx_HidePlanes(1, 1);
    WfcGx_HidePlanes(0, 0x1d);
    *(volatile u32 *)0x4000010 = 0;
    *(volatile u32 *)0x4000018 = 0;
    if (sWfcApList->unk_54 == 0) {
        WfcApScan_Free();
        WfcConfig_BeginEdit(WfcConfig_GetEdit()[0xf4]);
        WfcUtil_SetScreenFlags(2, 0);
        WfcUtil_SetScene((void *)WfcSetupMethod_Enter);
    } else if (sWfcApListCursor == 4) {
        WfcApScan_Free();
        WfcUtil_SetScreenFlags(0, 1);
        WfcUtil_SetScene((void *)WfcApSearch_Enter);
    } else {
        WfcConfig_SetEditSsid(&sWfcApList->unk_00[sWfcApList->unk_52]);
        WfcUtil_SetScreenFlags(0, 0);
        if (sWfcApList->unk_00[sWfcApList->unk_52].unk_28 != 0) {
            WfcUtil_SetScreenFlags(0, 1);
            WfcUtil_SetEditParams(1, 1);
            WfcUtil_SetScene((void *)WfcTextEdit_Enter);
        } else {
            WfcUtil_SetScreenFlags(0, 1);
            WfcUtil_SetEditParams(0, 1);
            WfcUtil_SetScene((void *)WfcTestConfirm_Enter);
        }
    }
    WfcHeap_FreeAndClear(&sWfcApList);
}

void WfcApList_Redraw() {
    s32 base = FX_DivS32(sWfcApListScroll, 0x1c);
    s32 n = sWfcApList->unk_51;
    WfcText_Clear(sWfcApList->unk_0c, 0);
    if (n > 5) n = 5;
    s32 p, i;
    for (i = 0, p = base; i < n; i++, p++) WfcApList_DrawSsid(p, i);
    for (i = 0, p = base; i < n; i++, p++) WfcApList_SetRowIcons(p, i);
    WfcText_RequestTransfer(sWfcApList->unk_0c);
    WfcApList_LayoutRows();
}

}
}

namespace F0221197c {

struct Unk_ov001_0222de74 {
    u8 *unk_00;
    u32 unk_04;
    void *unk_08;
    void *unk_0c;
    u32 *unk_10[5];
    u32 *unk_24[5];
    void *unk_38;
    u32 unk_3c;
    u16 unk_40;
    u16 unk_42[3];
    u16 unk_48[3];
    u8 pad_4e[3];
    u8 unk_51;
    u8 pad_52;
    u8 unk_53;
    u8 pad_54[2];
    u8 unk_56;
    u8 pad_57[2];
    u8 unk_59;
};

extern "C" {
extern u8 data_ov001_0222ae94[];
extern u8 GX_LoadBG2Scr[];
extern u8 sWfcAossDoneTimer;
extern u8 data_ov001_0222aea8;
extern u8 sWfcApListCursor;
extern u16 sWfcApListScroll;
extern Unk_ov001_0222de74 *sWfcApList;

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

void WfcApList_WaitDialogClosed();
void WfcApList_WaitErrorDialog();
void WfcApList_HighlightSearchButton();
void WfcApList_ScrollDown();
void WfcApList_ScrollUp();
void WfcApList_MoveCursor(s32 a);
void WfcApList_UpdateCursor();
void WfcApList_ApplyBgScrollTask();
void WfcApList_ScrollDownTask(u32 a);
void WfcApList_ScrollUpTask(u32 a);
void WfcApList_LayoutRows();
void WfcApList_SetRowIcons(s32 a, s32 b);
void WfcApList_DrawSsid(s32 a, s32 b);
void WfcApList_DrawSsid(s32 a, s32 b) {
    u16 buf[17];
    u32 r4 = a * 0x2a;
    s32 n = WfcUtil_StrNLen(sWfcApList->unk_00 + r4, 0x20);
    u32 r5 = b * 0x1c;
    s32 i;
    if (a >= sWfcApList->unk_51) return;
    if (n <= 0x10) r5 += 6;
    MI_CpuFill8(buf, 0, 0x22);
    s32 cnt = n <= 0x10 ? n : 0x10;
    for (i = 0; i < cnt; i++) buf[i] = (sWfcApList->unk_00 + r4)[i];
    WfcText_DrawMonospace(sWfcApList->unk_0c, 0xa, r5, 2, 0xa, buf, 1);
    if (n > 0x10) {
        MI_CpuFill8(buf, 0, 0x22);
        cnt = n - 0x10;
        for (i = 0; i < cnt; i++) buf[i] = (sWfcApList->unk_00 + r4)[i + 0x10];
        WfcText_DrawMonospace(sWfcApList->unk_0c, 0xa, r5 + 0xc, 2, 0xa, buf, 1);
    }
}

void WfcApList_SetRowIcons(s32 a, s32 b) {
    Unk_ov001_0222de74 *o = sWfcApList;
    if (a >= o->unk_51) return;
    u8 *rec = o->unk_00 + a * 0x2a;
    u16 *p = (u16 *)o->unk_10[b];
    p[2] = (p[2] & ~0x3ff) | o->unk_42[rec[0x28]];
    o = sWfcApList;
    rec = o->unk_00 + a * 0x2a;
    u16 *q = (u16 *)o->unk_24[b];
    q[2] = (q[2] & ~0x3ff) | o->unk_48[*(u16 *)(rec + 0x26)];
}

void WfcApList_LayoutRows() {
    s32 n = FX_ModS32(sWfcApListScroll, 0x1c);
    s32 y = 0x36 - n;
    s32 cnt = sWfcApList->unk_51;
    s32 i;
    if (cnt > 5) cnt = 5;
    for (i = 0; i < cnt; i++) {
        u32 *p = sWfcApList->unk_10[i];
        *p = (*p & 0xfe00ff00) | (u8)(y - 2) | 0xb30000;
        u32 *q = sWfcApList->unk_24[i];
        *q = (*q & 0xfe00ff00) | (u8)(y + 1) | 0xd20000;
        y += 0x1c;
    }
    sWfcApList->unk_56 = 1;
}

void WfcApList_ScrollUpTask(u32 a) {
    WfcScrollBar_Disable();
    WfcCursor_Clear();
    if (sWfcApListScroll > 4) sWfcApListScroll = sWfcApListScroll - 4;
    else sWfcApListScroll = 0;
    s32 n = FX_ModS32(sWfcApListScroll, 0x1c);
    if (n == 0x18) {
        WfcApList_Redraw();
        return;
    }
    if (n > 0x18) {
        sWfcApListScroll = sWfcApListScroll + (0x1c - n);
        n = 0;
    }
    WfcApList_LayoutRows();
    if (n != 0) return;
    WfcScrollBar_SetPos(FX_DivS32(sWfcApListScroll * sWfcApList->unk_53, sWfcApList->unk_40));
    WfcScrollBar_Enable();
    WfcApList_UpdateCursor();
    sWfcApList->unk_38 = 0;
    WfcTask_RequestDelete(0, a);
}

void WfcApList_ScrollDownTask(u32 a) {
    WfcScrollBar_Disable();
    WfcCursor_Clear();
    sWfcApListScroll += 4;
    s32 n = FX_ModS32(sWfcApListScroll, 0x1c);
    if (n >= 4) {
        WfcApList_LayoutRows();
        return;
    }
    sWfcApListScroll = sWfcApListScroll - n;
    WfcApList_Redraw();
    WfcScrollBar_SetPos(FX_DivS32(sWfcApListScroll * sWfcApList->unk_53, sWfcApList->unk_40));
    WfcScrollBar_Enable();
    WfcApList_UpdateCursor();
    sWfcApList->unk_38 = 0;
    WfcTask_RequestDelete(0, a);
}

void WfcApList_ApplyBgScrollTask() {
    if (sWfcApList->unk_56 == 0) return;
    u32 v = FX_ModS32(sWfcApListScroll, 0x1c) - 0x32;
    v = (v << 16) & 0x1ff0000;
    *(volatile u32 *)0x4000010 = v;
    *(volatile u32 *)0x4000018 = v;
    sWfcApList->unk_56 = 0;
}

void WfcApList_UpdateCursor() {
    u32 i = sWfcApListCursor;
    WfcCursor_ShowPair(i < 4 ? 2 : 3, data_ov001_0222a030[i * 4], (data_ov001_0222a030 + 2)[i * 4], (data_ov001_0222a030 + 1)[i * 4]);
}

void WfcApList_MoveCursor(s32 a) {
    s32 r = 1;
    switch (sWfcApListCursor) {
    case 0:
        if (a == 1) {
            if (sWfcApListScroll == 0) {
                sWfcApListCursor = 4;
            } else {
                WfcSound_Play(0x13);
                sWfcApList->unk_38 = WfcTask_Add(0, (void *)WfcApList_ScrollUpTask, 0, 0x78);
                return;
            }
        } else {
            if (sWfcApList->unk_51 > 1) sWfcApListCursor = sWfcApListCursor + 1;
            else r = 0;
        }
        break;
    case 1:
    case 2:
        if (a == 1) {
            sWfcApListCursor = sWfcApListCursor - 1;
        } else {
            u32 n = sWfcApListCursor + 1;
            if (sWfcApList->unk_51 > (s32)n) sWfcApListCursor = n;
            else r = 0;
        }
        break;
    case 3:
        if (a == 1) {
            sWfcApListCursor = sWfcApListCursor - 1;
        } else {
            WfcApList_ScrollDown();
            return;
        }
        break;
    case 4:
        if (a == 1) {
            r = 0;
        } else {
            sWfcApListScroll = 0;
            sWfcApListCursor = 0;
            WfcApList_Redraw();
            WfcScrollBar_SetPos(0);
        }
        break;
    }
    if (r == 0) {
        if (sWfcApList->unk_59 != 0) return;
        WfcSound_Play(9);
        sWfcApList->unk_59 = 1;
    } else {
        WfcSound_Play(8);
        WfcApList_UpdateCursor();
    }
}

void WfcApList_ScrollUp() {
    if (sWfcApListScroll == 0) {
        if (sWfcApList->unk_59 != 0) return;
        WfcSound_Play(9);
        sWfcApList->unk_59 = 1;
    } else {
        WfcSound_Play(0x13);
        sWfcApList->unk_38 = WfcTask_Add(0, (void *)WfcApList_ScrollUpTask, 0, 0x78);
    }
}

void WfcApList_ScrollDown() {
    Unk_ov001_0222de74 *o = sWfcApList;
    if (sWfcApListScroll == o->unk_40 || o->unk_51 <= 4) {
        if (o->unk_59 != 0) return;
        WfcSound_Play(9);
        sWfcApList->unk_59 = 1;
    } else {
        WfcSound_Play(0x13);
        sWfcApList->unk_38 = WfcTask_Add(0, (void *)WfcApList_ScrollDownTask, 0, 0x78);
    }
}

void WfcApList_HighlightSearchButton() {
    volatile u8 v = data_ov001_0222aea8;
    u8 t = v;
    WfcUtil_RequestPaletteLine(sWfcApList->unk_08, t, t);
}

void WfcApList_WaitErrorDialog() {
    if (WfcDialog_GetResult() != 0) return;
    WfcSound_Play(6);
    WfcDialog_Close();
    WfcUtil_SetScene((void *)WfcApList_WaitDialogClosed);
}

void WfcApList_WaitDialogClosed() {
    if (WfcDialog_IsOpen() != 0) return;
    WfcButtonBar_EnableInput();
    WfcScrollBar_Enable();
    WfcUtil_SetScene((void *)WfcApList_Update);
}

}
}
