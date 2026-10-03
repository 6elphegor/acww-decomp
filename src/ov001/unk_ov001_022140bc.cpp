// mwcc-flags: -O4,p
#include "types.h"

struct Unk_ov001_02214154_S {
    u32 unk_00;
    u32 *unk_04;
    u8 name[12];
    u8 unk_14;
    u8 unk_15;
};

struct Unk_ov001_02214154_Tbl { u8 b[4]; };

struct Unk_ov001_02214358_T {
    u32 v[5];
};

typedef void (*Unk_ov001_02214dd8_Fn)(void *);

struct Unk_ov001_02214dd8_Fns { Unk_ov001_02214dd8_Fn v[5]; };
struct Unk_ov001_02214dd8_Ids { u8 v[5]; };

#pragma thumb off
extern "C" {
extern u8 GX_LoadOBJPltt[];

s32 WfcDialog_IsOpen();
s32 WfcDialog_GetResult();
s32 WfcDialog_Close();
s32 WfcDialog_Open(u32 a, u32 b, u32 c, s32 d, u32 e);
s32 WfcUtil_SetScene(void *p);
s32 WfcUtil_GetEditParams(void *p, void *q);
s32 WfcUtil_SetScreenFlags(u32 a, u32 b);
s32 WfcUtil_SetEditParams(u32 a, u32 b);
s32 WfcSound_Play(u32 a);
s32 WfcUtil_ParseIpDigits(void *a, void *b);
s32 WfcText_Clear(u32 a, u32 b);
s32 WfcText_DrawTextRect(u32 a, u32 b, u32 c, u32 d, u32 e, u32 f, u32 g, void *h);
s32 WfcText_RequestTransfer(u32 a);
s32 WfcUtil_HideTopMessage();
s32 WfcOam_FreeEntry(void *a);
s32 WfcText_DestroyBgCanvas(u32 a);
s32 WfcUtil_LoadFileTo(const char *a, void *b);
s32 WfcGx_HidePlanes(u32 a, u32 b);
s32 WfcHeap_FreeAndClear(void *a);
s32 WfcNumPad_Exists();
s32 WfcFade_IsBusy(u32 a);
s32 WfcNumPad_Close();
s32 WfcFade_StartWait(u32 a);
s32 WfcNumPad_GetKey();
s32 WfcNumPad_SetDeleteEnabled(u32 a);
s32 WfcNumPad_SetInsertEnabled(u32 a);
s32 WfcNumPad_SetDotEnabled(u32 a);
s32 WfcNumPad_Create();
s32 WfcFade_Start(s32, s32, s32, s32);
s32 WfcGx_ShowPlanes(s32, s32);
s32 WfcHeap_AllocClear(s32, s32);
s32 WfcHighlight_Set(s32);
s32 WfcUtil_ShowTopMessage(s32, s32, s32);
s32 WfcUtil_ShowStepIndicator(s32);
s32 WfcText_CreateBgCanvas(s32, s32);
s32 WfcObj_CreateSingle(s32, s32);
s32 func_020fedcc(void *a);
s32 MI_CpuCopy8(void *a, void *b, u32 c);
s32 MI_CpuFill8(void *a, u32 b, u32 c);
s32 func_0212b770(void *a);
s32 memcmp(void *, const char *, s32);
s32 GX_LoadBG2Char(void);
s32 GX_LoadBGPltt(void);
s32 GX_LoadBG2Scr(void);

void WfcManualSetup_Enter();
void WfcConfig_FormatEditDns2();
void WfcConfig_FormatEditDns1();
void WfcConfig_FormatEditGateway();
void WfcConfig_FormatEditSubnetMask();
void WfcConfig_FormatEditIp();
void WfcConfig_SetEditDns2();
void WfcConfig_SetEditDns1();
void WfcConfig_SetEditGateway();
void WfcConfig_SetEditSubnetMask();
void WfcConfig_SetEditIp();
void WfcAddrEdit_Update();
void WfcAddrEdit_WaitKeypad();
void WfcAddrEdit_OpenKeypad();
void WfcAddrEdit_FadeIn();
void WfcAddrEdit_LoadBg();
void WfcAddrEdit_Enter();
void WfcAddrEdit_ReturnToInput();
void WfcAddrEdit_WaitErrorDialog();
s32 WfcAddrEdit_ValidateAddress();
void WfcAddrEdit_NormalizeOctets();
void WfcAddrEdit_ApplyAndExit();
void WfcAddrEdit_WaitConfirmDialog();
void WfcAddrEdit_UpdateCaret();
void WfcAddrEdit_DrawText();
void WfcAddrEdit_Exit();
void WfcAddrEdit_WaitKeypadClosed();
void WfcAddrEdit_CloseKeypad();
void WfcAddrEdit_StartExit();
void WfcAddrEdit_Idle();
s32 WfcAddrEdit_IsOctetFull(s32 a);
void WfcAddrEdit_HandleKey();

const u16 data_ov001_0222a070[2] = {0x0b, 0x10};
const u8 data_ov001_0222a074[12] = {0x31, 0x3d, 0x49, 0x5a, 0x66, 0x72, 0x83, 0x8f, 0x9b, 0xac, 0xb8, 0xc4};
u8 data_ov001_0222af7c[4] = {0x32, 0x35, 0x35, 0};
u8 sWfcAddrEditTitleMsgs[8] = {0x91, 0x92, 0x93, 0x94, 0x95, 0, 0, 0};
u16 data_ov001_0222af88[4] = {0, 0x29, 0, 0};
void *sWfcAddrEditLoadFuncs[5] = {(void *)WfcConfig_FormatEditIp, (void *)WfcConfig_FormatEditSubnetMask, (void *)WfcConfig_FormatEditGateway, (void *)WfcConfig_FormatEditDns1, (void *)WfcConfig_FormatEditDns2};
void *sWfcAddrEditStoreFuncs[5] = {(void *)WfcConfig_SetEditIp, (void *)WfcConfig_SetEditSubnetMask, (void *)WfcConfig_SetEditGateway, (void *)WfcConfig_SetEditDns1, (void *)WfcConfig_SetEditDns2};
Unk_ov001_02214154_S *sWfcAddrEdit;

void WfcAddrEdit_Enter() {
    Unk_ov001_02214dd8_Fns fns = *(Unk_ov001_02214dd8_Fns *)sWfcAddrEditLoadFuncs;
    Unk_ov001_02214dd8_Ids ids = *(Unk_ov001_02214dd8_Ids *)sWfcAddrEditTitleMsgs;
    s32 idx;
    sWfcAddrEdit = (Unk_ov001_02214154_S *)WfcHeap_AllocClear(0x18, 4);
    WfcUtil_GetEditParams(&idx, 0);
    fns.v[idx](sWfcAddrEdit->name);
    Unk_ov001_02214154_S *o = sWfcAddrEdit;
    if (memcmp(o->name, "  0", 3) != 0) {
        o->unk_14 = 3;
    } else {
        MI_CpuFill8(o->name, 0, 12);
        sWfcAddrEdit->unk_14 = 0;
    }
    WfcAddrEdit_LoadBg();
    WfcHighlight_Set(idx + 0xb);
    WfcUtil_ShowTopMessage(ids.v[idx], -1, 0);
    WfcUtil_ShowStepIndicator(2);
    sWfcAddrEdit->unk_00 = WfcText_CreateBgCanvas(0, 0);
    sWfcAddrEdit->unk_04 = (u32 *)WfcObj_CreateSingle(0, 0x3f);
    u16 *p = (u16 *)((u32)sWfcAddrEdit->unk_04 + 4);
    *p = (*p & ~0xc00) | 0xc00;
    WfcAddrEdit_UpdateCaret();
    WfcAddrEdit_DrawText();
    WfcUtil_SetScene((void *)WfcAddrEdit_FadeIn);
}

void WfcAddrEdit_LoadBg() {
    WfcUtil_LoadFileTo("char/ybObjKb.ncl.l", (void *)GX_LoadOBJPltt);
    WfcUtil_LoadFileTo("char/jbBgStep3.ncg.l", (void *)GX_LoadBG2Char);
    WfcUtil_LoadFileTo("char/ybBgStep3.ncl.l", (void *)GX_LoadBGPltt);
    WfcUtil_LoadFileTo("char/xb4EditAddr.nsc.l", (void *)GX_LoadBG2Scr);
    volatile u16 *r1 = (volatile u16 *)0x4001008;
    volatile u16 *r2 = (volatile u16 *)0x400100a;
    volatile u16 *r3 = (volatile u16 *)0x4000008;
    volatile u16 *r4 = (volatile u16 *)0x400000a;
    volatile u16 *r5 = (volatile u16 *)0x400000c;
    *r1 = (*r1 & ~3) | 3;
    *r2 = (*r2 & ~3) | 3;
    *r3 = (*r3 & ~3) | 2;
    *r4 = (*r4 & ~3) | 3;
    *r5 = (*r5 & ~3) | 3;
}

void WfcAddrEdit_FadeIn() {
    WfcFade_Start(2, 1, 1, 8);
    WfcFade_Start(2, 0, 0x15, 8);
    WfcGx_ShowPlanes(1, 1);
    WfcGx_ShowPlanes(0, 0x15);
    WfcUtil_SetScene((void *)WfcAddrEdit_OpenKeypad);
}

void WfcAddrEdit_OpenKeypad() {
    if (WfcFade_IsBusy(1) != 0) return;
    if (WfcFade_IsBusy(0) != 0) return;
    WfcNumPad_Create();
    WfcSound_Play(0x14);
    if (sWfcAddrEdit->unk_14 == 0) {
        WfcNumPad_SetDeleteEnabled(0);
        WfcNumPad_SetDotEnabled(0);
    } else {
        if (WfcAddrEdit_IsOctetFull(0x1a) != 0) {
            WfcNumPad_SetInsertEnabled(0);
        }
        WfcNumPad_SetDotEnabled(0);
    }
    WfcUtil_SetScene((void *)WfcAddrEdit_WaitKeypad);
}

void WfcAddrEdit_WaitKeypad() {
    if (WfcNumPad_GetKey() == 0x1f) return;
    WfcUtil_SetScene((void *)WfcAddrEdit_Update);
}

void WfcAddrEdit_Update() {
    WfcAddrEdit_HandleKey();
    WfcAddrEdit_Idle();
}

void WfcAddrEdit_HandleKey() {
    s32 r = WfcNumPad_GetKey();
    Unk_ov001_02214154_S *g;
    switch (r) {
    case 0:
        return;
    case 0x10:
        g = sWfcAddrEdit;
        if (g->unk_14 == 0 && g->name[2] == 0) goto end;
        WfcSound_Play(3);
        {
            u32 k = sWfcAddrEdit->unk_14;
            if (sWfcAddrEdit->name[k * 3 + 2] == 0) sWfcAddrEdit->unk_14 = k - 1;
        }
        MI_CpuFill8(&sWfcAddrEdit->name[sWfcAddrEdit->unk_14 * 3], 0, 3);
        g = sWfcAddrEdit;
        if (g->unk_14 == 0 && g->name[2] == 0) WfcNumPad_SetDeleteEnabled(0);
        WfcNumPad_SetInsertEnabled(1);
        WfcNumPad_SetDotEnabled(0);
        goto end;
    case 0x11: {
        g = sWfcAddrEdit;
        u32 k = g->unk_14;
        if (k >= 3) goto end;
        if (g->name[k * 3 + 2] == 0) goto end;
        WfcSound_Play(1);
        sWfcAddrEdit->unk_14 = sWfcAddrEdit->unk_14 + 1;
        WfcNumPad_SetDotEnabled(0);
        goto end;
    }
    case 0x12:
        sWfcAddrEdit->unk_15 = 0;
        WfcSound_Play(7);
        WfcUtil_SetScene((void *)WfcAddrEdit_StartExit);
        return;
    case 0x13:
        if (WfcAddrEdit_ValidateAddress()) {
            WfcSound_Play(6);
            sWfcAddrEdit->unk_15 = 1;
        } else {
            sWfcAddrEdit->unk_15 = 2;
            WfcSound_Play(9);
        }
        sWfcAddrEdit->unk_14 = 3;
        {
            volatile u32 *reg = sWfcAddrEdit->unk_04;
            *reg = (*reg & 0xc1fffcff) | 0x200;
        }
        WfcAddrEdit_UpdateCaret();
        WfcAddrEdit_NormalizeOctets();
        WfcUtil_SetScene((void *)WfcAddrEdit_StartExit);
        return;
    default: {
        if (sWfcAddrEdit->unk_14 == 3) {
            if (WfcAddrEdit_IsOctetFull(0x1a) != 0) goto end;
        }
        WfcSound_Play(1);
        {
            Unk_ov001_02214154_S *h = sWfcAddrEdit;
            u32 idx = h->unk_14;
            u8 *base = h->name;
            u32 lr = idx * 3;
            u8 *ip = base + (lr + 2);
            u32 t = *ip;
            if (t == 0) {
                *ip = r;
            } else {
                u8 *p1 = base + (lr + 1);
                u32 c = *p1;
                if (c == 0) {
                    *p1 = t;
                    *ip = r;
                    if (WfcAddrEdit_IsOctetFull(0x1a) != 0) {
                        if (sWfcAddrEdit->unk_14 < 3) sWfcAddrEdit->unk_14++;
                    }
                } else {
                    base[lr] = c;
                    *p1 = *ip;
                    *ip = r;
                    if (sWfcAddrEdit->unk_14 < 3) sWfcAddrEdit->unk_14++;
                }
            }
        }
        WfcNumPad_SetDeleteEnabled(1);
        if (sWfcAddrEdit->unk_14 < 3) {
            WfcNumPad_SetDotEnabled(1);
        } else {
            WfcNumPad_SetDotEnabled(0);
        }
        if (sWfcAddrEdit->unk_14 == 3) {
            if (WfcAddrEdit_IsOctetFull(0x1a) != 0) WfcNumPad_SetInsertEnabled(0);
        }
    }
    }
end:
    WfcAddrEdit_DrawText();
    WfcAddrEdit_UpdateCaret();
}

s32 WfcAddrEdit_IsOctetFull(s32 n) {
    u8 buf[4];
    s32 i;
    Unk_ov001_02214154_S *g = sWfcAddrEdit;
    u8 *p = &g->name[g->unk_14 * 3];
    u32 c = *p;
    u8 *q;
    if (c != 0 && c != 0x20) return 1;
    MI_CpuCopy8(p, buf, 3);
    buf[3] = 0;
    q = buf;
    for (i = 0; i < 3; i++) {
        if (*q != 0) break;
        *q++ = 0x20;
    }
    if (func_0212b770(buf) >= n) return 1;
    return 0;
}

void WfcAddrEdit_Idle() {
}

void WfcAddrEdit_StartExit() {
    WfcFade_StartWait(8);
    WfcUtil_SetScene((void *)WfcAddrEdit_CloseKeypad);
}

void WfcAddrEdit_CloseKeypad() {
    if (WfcFade_IsBusy(1)) return;
    WfcNumPad_Close();
    WfcSound_Play(0x15);
    WfcUtil_SetScene((void *)WfcAddrEdit_WaitKeypadClosed);
}

void WfcAddrEdit_WaitKeypadClosed() {
    if (WfcNumPad_Exists()) return;
    u32 t = sWfcAddrEdit->unk_15;
    if (t == 0) {
        WfcUtil_SetScene((void *)WfcAddrEdit_Exit);
        return;
    }
    if (t == 2) {
        WfcDialog_Open(0x2f, 3, 1, -1, 0);
        WfcUtil_SetScene((void *)WfcAddrEdit_WaitErrorDialog);
        return;
    }
    WfcDialog_Open(0x9b, 2, 1, -1, 0);
    WfcUtil_SetScene((void *)WfcAddrEdit_WaitConfirmDialog);
}

void WfcAddrEdit_Exit() {
    s32 v;
    WfcUtil_HideTopMessage();
    WfcOam_FreeEntry((void *)sWfcAddrEdit->unk_04);
    WfcText_DestroyBgCanvas(0);
    WfcUtil_LoadFileTo("char/ybObjMain.ncl.l", (void *)GX_LoadOBJPltt);
    WfcGx_HidePlanes(1, 1);
    WfcGx_HidePlanes(0, 0x15);
    WfcUtil_GetEditParams(&v, 0);
    if (v >= 3) v = v + 1;
    WfcUtil_SetScreenFlags(2, 1);
    WfcUtil_SetEditParams(0, v + 3);
    WfcUtil_SetScene((void *)WfcManualSetup_Enter);
    WfcHeap_FreeAndClear((void *)&sWfcAddrEdit);
}

void WfcAddrEdit_DrawText() {
    u16 v[6];
    s32 i;
    const u8 *q;
    v[0] = data_ov001_0222af88[0];
    v[1] = data_ov001_0222af88[1];
    v[2] = data_ov001_0222af88[2];
    v[3] = data_ov001_0222af88[3];
    v[2] = data_ov001_0222a070[0];
    v[3] = data_ov001_0222a070[1];
    WfcText_Clear(sWfcAddrEdit->unk_00, 0);
    v[5] = 0;
    q = data_ov001_0222a074;
    for (i = 0; i < 12; i++, q++) {
        Unk_ov001_02214154_S *g = sWfcAddrEdit;
        u32 t;
        v[4] = g->name[i];
        t = *q;
        v[0] = t;
        WfcText_DrawTextRect(g->unk_00, t, v[1], v[2], v[3], 2, 0x480, &v[4]);
    }
    WfcText_RequestTransfer(sWfcAddrEdit->unk_00);
}

void WfcAddrEdit_UpdateCaret() {
    s32 idx = sWfcAddrEdit->unk_14;
    if (idx > 3) idx = 3;
    u32 t = data_ov001_0222a074[idx * 3 + 2];
    u32 *reg = sWfcAddrEdit->unk_04;
    *reg = ((t & 0x1ff) << 16) | ((*reg & 0xfe00ff00) | 0x28);
}

void WfcAddrEdit_WaitConfirmDialog() {
    sWfcAddrEdit->unk_15 = WfcDialog_GetResult();
    switch (sWfcAddrEdit->unk_15) {
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
    WfcUtil_SetScene((void *)WfcAddrEdit_ApplyAndExit);
}

void WfcAddrEdit_ApplyAndExit() {
    Unk_ov001_02214358_T t = *(Unk_ov001_02214358_T *)sWfcAddrEditStoreFuncs;
    s32 v;
    if (WfcDialog_IsOpen()) return;
    if (sWfcAddrEdit->unk_15 == 0) {
        *sWfcAddrEdit->unk_04 &= 0xc1fffcff;
        WfcUtil_SetScene((void *)WfcAddrEdit_OpenKeypad);
        return;
    }
    WfcUtil_GetEditParams(&v, 0);
    ((void (*)(void *))t.v[v])(sWfcAddrEdit->name);
    WfcUtil_SetScene((void *)WfcAddrEdit_Exit);
}

void WfcAddrEdit_NormalizeOctets() {
    u8 *p;
    s32 i;
    s32 j;
    s32 off;
    i = 0; off = i;
    for (; i < 4; i++, off += 3) {
        p = sWfcAddrEdit->name + off;
        for (j = 0; j < 3; j++) {
            u32 c = p[j];
            if (c == 0x30 || c == 0x20 || c == 0) {
                p[j] = (j == 2) ? 0x30 : 0x20;
            } else {
                break;
            }
        }
    }
    WfcAddrEdit_DrawText();
}

s32 WfcAddrEdit_ValidateAddress() {
    u8 *p;
    s32 i, off, j;
    Unk_ov001_02214154_Tbl tbl = *(Unk_ov001_02214154_Tbl *)data_ov001_0222af7c;
    s32 v;
    u8 out[4];
    Unk_ov001_02214154_S *g = sWfcAddrEdit;
    for (i = 0, off = 0; i < 4; i++, off += 3) {
        p = g->name + off;
        if (*p != 0x20) {
            for (j = 0; j < 3; j++) {
                if (p[j] > tbl.b[j]) return 0;
                if (p[j] < tbl.b[j]) break;
            }
        }
    }
    WfcUtil_ParseIpDigits(g->name, out);
    WfcUtil_GetEditParams(&v, 0);
    if (v == 1) {
        BOOL seen = FALSE;
        for (i = 0; i < 4; i++) {
            for (j = 0; j < 8; j++) {
                if (seen) {
                    if (out[i] & (1 << (7 - j))) return 0;
                } else {
                    if ((out[i] & (1 << (7 - j))) == 0) seen = TRUE;
                }
            }
        }
        return 1;
    }
    if (func_020fedcc(out) != 0) return 1;
    return 0;
}

void WfcAddrEdit_WaitErrorDialog() {
    if (WfcDialog_GetResult()) return;
    WfcSound_Play(6);
    WfcDialog_Close();
    WfcUtil_SetScene((void *)WfcAddrEdit_ReturnToInput);
}

void WfcAddrEdit_ReturnToInput() {
    if (WfcDialog_IsOpen()) return;
    *sWfcAddrEdit->unk_04 &= 0xc1fffcff;
    WfcUtil_SetScene((void *)WfcAddrEdit_OpenKeypad);
}
}
#pragma thumb reset
