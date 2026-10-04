// mwcc-flags: -O4,p
#include "types.h"

struct Unk_ov001_0222de78_Hw {
    u32 flags;
    u16 attr2;
};

struct Unk_ov001_0222de78 {
    void *textCanvas;
    Unk_ov001_0222de78_Hw *caretOam;
    u8 text[0x20];
    u8 unk_28;
    u8 textLen;
    u8 result;
};

static inline void Unk_ov001_0221381c_Clr(volatile u16 *p) {
    p[0] = 0;
    p[1] = 0;
    p[2] = 0;
    p[3] = 0;
}

#pragma thumb off
extern "C" {
extern u8 GX_LoadOBJPltt[];
extern u8 GX_LoadBG2Char[];
extern u8 GX_LoadBGPltt[];
extern u8 GX_LoadBG2Scr[];

s32 WfcText_Clear(void *a, s32 b);
s32 WfcText_DrawTextRect(void *a, u32 b, u32 c, u32 d, u32 e, u32 f, u32 g, void *h);
s32 WfcText_RequestTransfer(void *a);
s32 WfcUtil_HideTopMessage();
s32 WfcOam_FreeEntry(void *a);
s32 WfcText_DestroyBgCanvas(u32 a);
s32 WfcUtil_LoadFileTo(const char *a, void *b);
s32 WfcGx_HidePlanes(u32 a, u32 b);
s32 WfcUtil_GetEditParams(void *a, void *b);
s32 WfcUtil_SetScreenFlags(u32 a, u32 b);
s32 WfcUtil_SetEditParams(u32 a, u32 b);
s32 WfcUtil_SetScene(void *p);
s32 WfcHeap_FreeAndClear(void *a);
s32 WfcTextKb_Exists();
s32 WfcDialog_Open(u32 a, u32 b, u32 c, s32 d, u32 e);
s32 WfcFade_IsBusy(u32 a);
s32 WfcTextKb_Close();
s32 WfcSound_Play(u32 a);
s32 WfcFade_StartWait(u32 a);
s32 WfcTextKb_GetKey();
s32 WfcTextKb_SetDeleteEnabled(u32 a);
s32 WfcTextKb_SetInsertEnabled(u32 a);
s32 WfcTextKb_Create();
s32 WfcFade_Start(u32 a, u32 b, u32 c, u32 d);
s32 WfcGx_ShowPlanes(u32 a, u32 b);
void *WfcHeap_AllocClear(u32 a, u32 b);
s32 WfcConfig_GetEditSsid(void *a);
s32 WfcUtil_StrNLen(void *a, u32 b);
s32 WfcHighlight_Set(u32 a);
s32 WfcUtil_ShowTopMessage(u32 a, s32 b, u32 c);
s32 WfcUtil_ShowStepIndicator(u32 a);
void *WfcText_CreateBgCanvas(u32 a, u32 b);
void *WfcObj_CreateSingle(u32 a, u32 b);
s32 WfcDialog_IsOpen();
s32 WfcDialog_GetResult();
s32 WfcDialog_Close();

void WfcManualSetup_Enter();
void WfcApList_Enter();
void WfcTestConfirm_Enter();
void WfcConfig_FormatEditDns2();
void WfcConfig_SetEditWepKey();
void WfcConfig_SetEditSsid();
void WfcTextEdit_ReturnToInput();
void WfcTextEdit_WaitErrorDialog();
BOOL WfcTextEdit_ValidateInput();
void WfcTextEdit_ApplyAndExit();
void WfcTextEdit_WaitConfirmDialog();
void WfcTextEdit_UpdateCaret();
void WfcTextEdit_DrawText();
void WfcTextEdit_Exit();
void WfcTextEdit_WaitKeyboardClosed();
void WfcTextEdit_CloseKeyboard();
void WfcTextEdit_StartExit();
void WfcTextEdit_Idle();
void WfcTextEdit_HandleKey();
void WfcTextEdit_Update();
void WfcTextEdit_WaitKeyboard();
void WfcTextEdit_OpenKeyboard();
void WfcTextEdit_FadeIn();
void WfcTextEdit_LoadBg();
void WfcTextEdit_Enter();

const u8 data_ov001_0222a058[4] = {0x20, 0x31, 0, 0};
const u16 data_ov001_0222a05c[2] = {0x0e, 0x10};
const u8 data_ov001_0222a060[0x10] = {0x08, 0x17, 0x26, 0x35, 0x44, 0x53, 0x62, 0x71, 0x80, 0x8f, 0x9e, 0xad, 0xbc, 0xcb, 0xda, 0xe9};
u8 sWfcTextEditTitleMsgs[4] = {0x90, 0x8f, 0, 0};
u32 sWfcTextEditConfirmMsgs[2] = {0x9b, 0x9c};
void *sWfcTextEditStoreFuncs[2] = {(void *)WfcConfig_SetEditSsid, (void *)WfcConfig_SetEditWepKey};
Unk_ov001_0222de78 *sWfcTextEdit;

void WfcTextEdit_Enter() {
    u8 b[2];
    u32 idx[2];
    b[0] = sWfcTextEditTitleMsgs[0];
    b[1] = sWfcTextEditTitleMsgs[1];
    sWfcTextEdit = (Unk_ov001_0222de78 *)WfcHeap_AllocClear(0x2c, 4);
    WfcUtil_GetEditParams(&idx[0], &idx[1]);
    if (idx[0] == 0) {
        WfcConfig_GetEditSsid(sWfcTextEdit->text);
        sWfcTextEdit->textLen = WfcUtil_StrNLen(sWfcTextEdit->text, 0x20);
    }
    WfcTextEdit_LoadBg();
    WfcHighlight_Set(idx[0] + 9);
    if (idx[1] == 1) {
        WfcUtil_ShowTopMessage(0x81, -1, 0);
    } else {
        WfcUtil_ShowTopMessage(b[idx[0]], -1, 0);
    }
    WfcUtil_ShowStepIndicator(2);
    sWfcTextEdit->textCanvas = WfcText_CreateBgCanvas(0, 0);
    sWfcTextEdit->caretOam = (Unk_ov001_0222de78_Hw *)WfcObj_CreateSingle(0, 0x3e);
    sWfcTextEdit->caretOam->attr2 = (sWfcTextEdit->caretOam->attr2 & ~0xc00) | 0xc00;
    WfcTextEdit_UpdateCaret();
    WfcTextEdit_DrawText();
    WfcUtil_SetScene((void *)WfcTextEdit_FadeIn);
}

void WfcTextEdit_LoadBg() {
    WfcUtil_LoadFileTo("char/ybObjKb.ncl.l", GX_LoadOBJPltt);
    WfcUtil_LoadFileTo("char/jbBgStep3.ncg.l", GX_LoadBG2Char);
    WfcUtil_LoadFileTo("char/ybBgStep3.ncl.l", GX_LoadBGPltt);
    WfcUtil_LoadFileTo("char/xb4Edit.nsc.l", GX_LoadBG2Scr);
    *(volatile u16 *)0x4001008 = (*(volatile u16 *)0x4001008 & ~3) | 3;
    *(volatile u16 *)0x400100a = (*(volatile u16 *)0x400100a & ~3) | 3;
    *(volatile u16 *)0x4000008 = (*(volatile u16 *)0x4000008 & ~3) | 2;
    *(volatile u16 *)0x400000a = (*(volatile u16 *)0x400000a & ~3) | 3;
    *(volatile u16 *)0x400000c = (*(volatile u16 *)0x400000c & ~3) | 3;
}

void WfcTextEdit_FadeIn() {
    WfcFade_Start(2, 1, 1, 8);
    WfcFade_Start(2, 0, 0x15, 8);
    WfcGx_ShowPlanes(1, 1);
    WfcGx_ShowPlanes(0, 0x15);
    WfcUtil_SetScene((void *)WfcTextEdit_OpenKeyboard);
}

void WfcTextEdit_OpenKeyboard() {
    if (WfcFade_IsBusy(1) != 0) return;
    if (WfcFade_IsBusy(0) != 0) return;
    WfcTextKb_Create();
    WfcSound_Play(0x14);
    if (sWfcTextEdit->textLen == 0) WfcTextKb_SetDeleteEnabled(0);
    if (sWfcTextEdit->textLen == 0x20) WfcTextKb_SetInsertEnabled(0);
    WfcUtil_SetScene((void *)WfcTextEdit_WaitKeyboard);
}

void WfcTextEdit_WaitKeyboard() {
    if (WfcTextKb_GetKey() == 0xff) return;
    WfcUtil_SetScene((void *)WfcTextEdit_Update);
}

void WfcTextEdit_Update() {
    WfcTextEdit_HandleKey();
    WfcTextEdit_Idle();
}

void WfcTextEdit_HandleKey() {
    s32 r = WfcTextKb_GetKey();
    switch (r) {
    case 0x80:
        if (sWfcTextEdit->textLen != 0) {
            WfcSound_Play(3);
            sWfcTextEdit->textLen--;
            sWfcTextEdit->text[sWfcTextEdit->textLen] = 0;
            if (sWfcTextEdit->textLen == 0) WfcTextKb_SetDeleteEnabled(0);
            WfcTextKb_SetInsertEnabled(1);
        }
        break;
    case 0x82:
        WfcSound_Play(7);
        sWfcTextEdit->result = 0;
        WfcUtil_SetScene((void *)WfcTextEdit_StartExit);
        return;
    case 0x83:
        if (WfcTextEdit_ValidateInput() != 0) {
            WfcSound_Play(6);
            sWfcTextEdit->result = 1;
        } else {
            sWfcTextEdit->result = 2;
            WfcSound_Play(9);
        }
        sWfcTextEdit->caretOam->flags = (sWfcTextEdit->caretOam->flags & 0xc1fffcff) | 0x200;
        WfcUtil_SetScene((void *)WfcTextEdit_StartExit);
        return;
    case 0:
        break;
    case 0xe01d:
    default:
        if (sWfcTextEdit->textLen != 0x20) {
            WfcSound_Play(1);
            sWfcTextEdit->text[sWfcTextEdit->textLen] = r;
            sWfcTextEdit->textLen++;
            WfcTextKb_SetDeleteEnabled(1);
            if (sWfcTextEdit->textLen == 0x20) WfcTextKb_SetInsertEnabled(0);
        }
        break;
    }
    WfcTextEdit_DrawText();
    WfcTextEdit_UpdateCaret();
}

void WfcTextEdit_Idle() {}

void WfcTextEdit_StartExit() {
    WfcFade_StartWait(8);
    WfcUtil_SetScene((void *)WfcTextEdit_CloseKeyboard);
}

void WfcTextEdit_CloseKeyboard() {
    if (WfcFade_IsBusy(1) != 0) return;
    WfcTextKb_Close();
    WfcSound_Play(0x15);
    WfcUtil_SetScene((void *)WfcTextEdit_WaitKeyboardClosed);
}

void WfcTextEdit_WaitKeyboardClosed() {
    u32 v[2];
    u32 idx;
    v[0] = sWfcTextEditConfirmMsgs[0];
    v[1] = sWfcTextEditConfirmMsgs[1];
    if (WfcTextKb_Exists() != 0) return;
    u32 t = sWfcTextEdit->result;
    if (t == 0) {
        WfcUtil_SetScene((void *)WfcTextEdit_Exit);
    } else if (t == 2) {
        WfcDialog_Open(0x2f, 3, 1, -1, 0);
        WfcUtil_SetScene((void *)WfcTextEdit_WaitErrorDialog);
    } else {
        WfcUtil_GetEditParams(0, &idx);
        WfcDialog_Open(v[idx], 2, 1, -1, 0);
        WfcUtil_SetScene((void *)WfcTextEdit_WaitConfirmDialog);
    }
}

void WfcTextEdit_Exit() {
    u32 a, b;
    WfcUtil_HideTopMessage();
    WfcOam_FreeEntry(sWfcTextEdit->caretOam);
    WfcText_DestroyBgCanvas(0);
    WfcUtil_LoadFileTo("char/ybObjMain.ncl.l", GX_LoadOBJPltt);
    WfcGx_HidePlanes(1, 1);
    WfcGx_HidePlanes(0, 0x15);
    WfcUtil_GetEditParams(&a, &b);
    if (b == 0) {
        WfcUtil_SetScreenFlags(2, 1);
        WfcUtil_SetEditParams(0, a);
        WfcUtil_SetScene((void *)WfcManualSetup_Enter);
    } else if (sWfcTextEdit->result == 0) {
        WfcUtil_SetScreenFlags(0, 1);
        WfcUtil_SetEditParams(1, 0);
        WfcUtil_SetScene((void *)WfcApList_Enter);
    } else {
        WfcUtil_SetScreenFlags(0, 0);
        WfcUtil_SetEditParams(0, 1);
        WfcUtil_SetScene((void *)WfcTestConfirm_Enter);
    }
    WfcHeap_FreeAndClear(&sWfcTextEdit);
}

void WfcTextEdit_DrawText() {
    u16 v[4] = {0, 0, 0, 0};
    u16 w[2];
    s32 j, i;
    v[1] = data_ov001_0222a058[0];
    v[2] = data_ov001_0222a05c[0];
    v[3] = data_ov001_0222a05c[1];
    WfcText_Clear(sWfcTextEdit->textCanvas, 0);
    w[1] = 0;
    u8 hi = data_ov001_0222a058[1];
    i = 0; j = 0;
    for (; i < 0x20; i++, j++) {
        Unk_ov001_0222de78 *g = sWfcTextEdit;
        if (i == 0x10) {
            j = 0;
            v[1] = hi;
        }
        u32 c = g->text[i];
        if (c == 0x20) w[0] = 0xe01d; else w[0] = c;
        u32 t = data_ov001_0222a060[j];
        v[0] = t;
        WfcText_DrawTextRect(g->textCanvas, v[0], v[1], v[2], v[3], 2, 0x480, w);
    }
    WfcText_RequestTransfer(sWfcTextEdit->textCanvas);
}

void WfcTextEdit_UpdateCaret() {
    Unk_ov001_0222de78 *g = sWfcTextEdit;
    s32 n = g->textLen;
    s32 a = n & 0xf;
    s32 b = n >> 4;
    if ((u32)n >= 0x20) { a = 0xf; b = 1; }
    u32 x = data_ov001_0222a060[a];
    u32 y = data_ov001_0222a058[b];
    Unk_ov001_0222de78_Hw *hw = g->caretOam;
    hw->flags = (hw->flags & 0xfe00ff00) | (y & 0xff) | ((x & 0x1ff) << 16);
}

void WfcTextEdit_WaitConfirmDialog() {
    sWfcTextEdit->result = WfcDialog_GetResult();
    switch (sWfcTextEdit->result) {
    case 0:
        WfcSound_Play(7);
        break;
    case 1:
        WfcSound_Play(0xe);
        break;
    default:
        return;
    }
    WfcDialog_Close();
    WfcUtil_SetScene((void *)WfcTextEdit_ApplyAndExit);
}

void WfcTextEdit_ApplyAndExit() {
    void *tbl[2];
    s32 idx;
    tbl[0] = sWfcTextEditStoreFuncs[0];
    tbl[1] = sWfcTextEditStoreFuncs[1];
    if (WfcDialog_IsOpen() != 0) return;
    if (sWfcTextEdit->result == 0) {
        sWfcTextEdit->caretOam->flags &= 0xc1fffcff;
        WfcUtil_SetScene((void *)WfcTextEdit_OpenKeyboard);
        return;
    }
    WfcUtil_GetEditParams(&idx, 0);
    ((void (*)(void *))tbl[idx])(sWfcTextEdit->text);
    WfcUtil_SetScene((void *)WfcTextEdit_Exit);
}

BOOL WfcTextEdit_ValidateInput() {
    s32 a, b, r, i;
    u32 c;
    WfcUtil_GetEditParams(&a, &b);
    if (b == 1) {
        WfcUtil_ShowTopMessage(0x81, -1, 0);
    }
    WfcUtil_GetEditParams(&a, &b);
    if (a == 0) {
        return sWfcTextEdit->text[0] != 0 ? 1 : 0;
    }
    if (b == 1) {
        if (sWfcTextEdit->text[0] == 0) return 0;
    }
    r = WfcUtil_StrNLen(sWfcTextEdit->text, 0x20);
    switch (r) {
    case 0:
    case 5:
    case 13:
    case 16:
        return 1;
    case 10:
    case 26:
    case 32: {
        i = 0;
        if (r > 0) {
            u8 *p = (u8 *)sWfcTextEdit;
            do {
                c = p[8];
                if (c >= 0x30 && c <= 0x39) goto next;
                if (c >= 0x41 && c <= 0x46) goto next;
                if (c >= 0x61 && c <= 0x66) goto next;
                return 0;
            next:
                i++;
                p++;
            } while (i < r);
        }
        return 1;
    }
    }
    return 0;
}

void WfcTextEdit_WaitErrorDialog() {
    if (WfcDialog_GetResult() != 0) return;
    WfcSound_Play(6);
    WfcDialog_Close();
    WfcUtil_SetScene((void *)WfcTextEdit_ReturnToInput);
}

void WfcTextEdit_ReturnToInput() {
    if (WfcDialog_IsOpen() != 0) return;
    sWfcTextEdit->caretOam->flags &= 0xc1fffcff;
    WfcUtil_SetScene((void *)WfcTextEdit_OpenKeyboard);
}
}
#pragma thumb reset
