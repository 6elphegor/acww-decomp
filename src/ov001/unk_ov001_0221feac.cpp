// mwcc-flags: -O4,p
#include "types.h"
#include "net/WfcRect.h"

#pragma thumb off

struct WfcDialogWork {
    void *frameObj;
    void *textObj;
    void *buttons[2];
    void *textCanvas;
    u32 task;
    u16 autoCloseTimer;
    s8 brightness;
    s8 result;
    u8 style;
    u8 closeTimer;
    u8 dimBackground;
};

extern "C" const WfcPoint data_ov001_0222a38c;
extern "C" const u8 sWfcDialogFrameCells[8];
extern "C" const u8 sWfcDialogButtonCounts[8];
extern "C" const u16 data_ov001_0222a3a0[4];
extern "C" const u8 data_ov001_0222a3a8[6][2];
extern "C" const s8 sWfcDialogKeyButtons[12];
extern "C" const u8 sWfcDialogButtonCells[6][2];
extern "C" const u8 data_ov001_0222a3cc[20];
extern "C" const u16 data_ov001_0222a3e0[12];
extern "C" const WfcPoint data_ov001_0222a3f8[6];
extern "C" const WfcPoint data_ov001_0222a410[6];
extern "C" const WfcPoint sWfcDialogButtonPos[5][2];
#define data_ov001_0222a3b5 (sWfcDialogKeyButtons + 1)
#define data_ov001_0222a3e2 (data_ov001_0222a3e0 + 1)
#define data_ov001_0222a3fa ((const WfcPoint *)((const u8 *)data_ov001_0222a3f8 + 2))
#define data_ov001_0222a412 ((const WfcPoint *)((const u8 *)data_ov001_0222a410 + 2))
#define data_ov001_0222a42a ((const u16 (*)[4])((const u8 *)sWfcDialogButtonPos + 2))
extern "C" WfcDialogWork *sWfcDialog;

extern "C" {
extern void *gWfcMsgBank[];

s32 WfcObj_GetCount(void *);
void WfcObj_GetPos(void *, s32, s32 *, s32 *);
void WfcObj_SetPos(void *, s32, s32, s32);
void WfcObj_SetPriority(void *, s32, s32);
void WfcObj_SetAffineMode(void *, s32, s32, s32);
void WfcObj_Free(void *);
void *WfcObj_GetOam(void *, s32);
void WfcText_DestroyObjCanvas(void *);
void WfcUtil_SetRect(s32, s32, s32, s32, void *);
void WfcGx_SetWindowRect(s32, s32, const void *);
void WfcTask_RequestDelete(s32, s32);
void WfcTask_SetFunc(s32, void *);
void *WfcTask_Add(s32, void *, s32, s32);
void WfcUtil_RectFromPosSize(const void *, const void *, void *);
s32 WfcInput_IsTouchPressedIn(void *);
s32 WfcInput_IsKeyPressed(s32);
void *WfcObj_Create(s32, s32, s32);
void WfcCell_Copy(s32, s32, void *);
void *WfcHeap_AllocClear(s32, s32);
void WfcHeap_FreeAndClear(void *);
void *WfcText_CreateObjCanvas(s32, s32, s32, s32, void *, s32);
void *WfcObj_Alloc(s32, s32, s32);
void *WfcUtil_GetTextFlags();
void WfcText_DrawTextRect(void *, u32, u32, u32, u32, s32, void *, s32);
void WfcText_ArrangeObj(void *, u32, u32, void *, s32);
void WfcGx_SetWindowPlanes(s32, s32, s32, s32);
void *WfcMsg_GetStringWithDigit(void *, s32, s32, s32);
void G2x_ChangeBlendBrightness_(u32, s32);
void G2x_SetBlendBrightness_(u32, s32, s32);

void WfcDialog_DestroyTask(s32 a);
void WfcDialog_UndimTask(s32 a);
void WfcDialog_SlideOutTask(s32 a);
void WfcDialog_CloseDelayTask(s32 a);
void WfcDialog_PressButton(s32 i);
void WfcDialog_ClipObj(void *a, s32 b);
void WfcDialog_SetY(s32 r);
void WfcDialog_AutoCloseTask(s32 r);
void WfcDialog_InputTask(s32 r);
void WfcDialog_SlideInTask(s32 r);
void WfcDialog_DimTask(s32 r);
BOOL WfcDialog_IsOpen();
s32 WfcDialog_GetResult();
void WfcDialog_Close();
void WfcDialog_Open(s32 a, s32 b, s32 c, s32 d, s32 e);
}// Declarations for data defined further down (definition order sets the data layout)
extern "C" const u8 sWfcDialogButtonCells[6][2];
extern "C" const WfcPoint data_ov001_0222a38c;
extern "C" const u8 sWfcDialogFrameCells[8];
extern "C" WfcDialogWork *sWfcDialog;
extern "C" const u8 sWfcDialogButtonCounts[8];
extern "C" const u16 data_ov001_0222a3a0[4];
extern "C" const u8 data_ov001_0222a3a8[6][2];
extern "C" const u8 data_ov001_0222a3cc[20];
extern "C" const u16 data_ov001_0222a3e0[12];
extern "C" const WfcPoint data_ov001_0222a3f8[6];
extern "C" const s8 sWfcDialogKeyButtons[12];
extern "C" const WfcPoint data_ov001_0222a410[6];
extern "C" const WfcPoint sWfcDialogButtonPos[5][2];

extern "C" const u8 sWfcDialogButtonCells[6][2] = {{0x1b, 0x19}, {0x57, 0}, {0x23, 0x1d}, {0x59, 0}, {0x23, 0x1d}, {0, 0}};

void WfcDialog_Open(s32 a, s32 b, s32 c, s32 d, s32 e)
{
    u8 buf[6] = {1, 1, 0, 0, 1, 1};
    WfcDialogWork *g;
    void *v;
    void *out;
    s32 i;

    v = WfcMsg_GetStringWithDigit(*gWfcMsgBank, a, d, e);
    g = (WfcDialogWork *)WfcHeap_AllocClear(0x20, 4);
    sWfcDialog = g;
    g->style = b;
    sWfcDialog->result = -2;
    sWfcDialog->dimBackground = c;
    G2x_SetBlendBrightness_(0x4000050, 0x1f, 0);
    sWfcDialog->frameObj = WfcObj_Create(0, sWfcDialogFrameCells[b], 0);
    WfcObj_SetPos(sWfcDialog->frameObj, -1, 0x100, 0);
    WfcObj_SetPriority(sWfcDialog->frameObj, -1, 0);
    for (i = 0; i < sWfcDialogButtonCounts[b]; i++) {
        sWfcDialog->buttons[i] = WfcObj_Create(0, sWfcDialogButtonCells[b][i], 0);
        WfcObj_SetPos(sWfcDialog->buttons[i], -1, 0x100, 0);
        WfcObj_SetPriority(sWfcDialog->buttons[i], -1, 0);
    }
    sWfcDialog->textCanvas = WfcText_CreateObjCanvas(0, 0x20, 0xc, 1, &out, 0);
    sWfcDialog->textObj = WfcObj_Alloc(0, (s32)out, 0);
    WfcText_DrawTextRect(sWfcDialog->textCanvas, 0, 0, data_ov001_0222a3e0[b * 2], data_ov001_0222a3e2[b * 2], 2, WfcUtil_GetTextFlags(), (s32)v);
    WfcText_ArrangeObj(sWfcDialog->textCanvas, 0x100, 0, sWfcDialog->textObj, 0);
    WfcGx_SetWindowPlanes(0, 0, 0x1f, 0);
    WfcGx_SetWindowPlanes(0, 1, 0x1f, buf[sWfcDialog->style]);
    WfcGx_SetWindowPlanes(0, 3, 0x1f, 1);
    WfcGx_SetWindowRect(0, 1, data_ov001_0222a3a0);
    WfcDialog_SetY(0xc0);
    {
        volatile u32 *reg = (volatile u32 *)0x4000000;
        *reg = (*reg & ~0xe000) | 0x6000;
    }
    if (c != 0) {
        sWfcDialog->task = (u32)WfcTask_Add(1, (void *)WfcDialog_DimTask, 0, 0x78);
    } else {
        sWfcDialog->task = (u32)WfcTask_Add(1, (void *)WfcDialog_SlideInTask, 0, 0x78);
    }
}

void WfcDialog_Close()
{
    WfcTask_RequestDelete(0, sWfcDialog->task);
    sWfcDialog->task = (u32)WfcTask_Add(1, (void *)WfcDialog_CloseDelayTask, 0, 0x78);
}

s32 WfcDialog_GetResult()
{
    return sWfcDialog->result;
}

BOOL WfcDialog_IsOpen()
{
    if (sWfcDialog != 0) {
        return TRUE;
    }
    return FALSE;
}

void WfcDialog_DimTask(s32 r)
{
    sWfcDialog->brightness = sWfcDialog->brightness - 1;
    G2x_ChangeBlendBrightness_(0x4000050, sWfcDialog->brightness);
    if (sWfcDialog->brightness > -12) {
        return;
    }
    WfcTask_SetFunc(r, (void *)WfcDialog_SlideInTask);
}

void WfcDialog_SlideInTask(s32 r)
{
    s32 x, y;
    s32 k;
    WfcObj_GetPos(sWfcDialog->frameObj, 0, &x, &y);
    y -= 12;
    k = data_ov001_0222a3fa[sWfcDialog->style].x;
    if (y > k) {
        WfcDialog_SetY(y);
        return;
    }
    WfcDialog_SetY(k);
    if (sWfcDialog->style == 5) {
        sWfcDialog->task = (u32)WfcTask_Add(0, (void *)WfcDialog_AutoCloseTask, 0, 0x78);
    } else {
        sWfcDialog->task = (u32)WfcTask_Add(0, (void *)WfcDialog_InputTask, 0, 0x78);
    }
    WfcTask_RequestDelete(1, r);
}

void WfcDialog_InputTask(s32 r)
{
    s32 i;
    u32 loc[2];
    WfcDialogWork *g;

    for (i = 0; i < sWfcDialogButtonCounts[sWfcDialog->style]; i++) {
        u32 idx = data_ov001_0222a3a8[sWfcDialog->style][i];
        WfcUtil_RectFromPosSize(&sWfcDialogButtonPos[sWfcDialog->style][idx],
                            &data_ov001_0222a3cc[sWfcDialog->style * 4], loc);
        if (WfcInput_IsTouchPressedIn(loc) != 0) {
            sWfcDialog->result = i;
            break;
        }
    }
    if (WfcInput_IsKeyPressed(1) != 0) {
        sWfcDialog->result = sWfcDialogKeyButtons[sWfcDialog->style * 2];
    }
    if (WfcInput_IsKeyPressed(2) != 0) {
        sWfcDialog->result = data_ov001_0222a3b5[sWfcDialog->style * 2];
    }
    g = sWfcDialog;
    for (i = 0; i < sWfcDialogButtonCounts[*(volatile u8 *)&g->style]; i++) {
        if (i == g->result) {
            WfcDialog_PressButton(i);
            return;
        }
    }
    g->result = -1;
}

void WfcDialog_AutoCloseTask(s32 r)
{
    WfcDialogWork *g = sWfcDialog;
    g->result = -1;
    sWfcDialog->autoCloseTimer = sWfcDialog->autoCloseTimer + 1;
    if (sWfcDialog->autoCloseTimer < 0x78) {
        return;
    }
    WfcTask_RequestDelete(0, r);
    sWfcDialog->task = (u32)WfcTask_Add(1, (void *)WfcDialog_CloseDelayTask, 0, 0x78);
}

void WfcDialog_SetY(s32 r)
{
    s32 k;
    s32 i;
    WfcDialogWork *g;

    g = sWfcDialog;
    WfcObj_SetPos(g->frameObj, -1, data_ov001_0222a3f8[g->style].x, r);
    g = sWfcDialog;
    WfcObj_SetPos(g->textObj, -1, data_ov001_0222a38c.x + data_ov001_0222a3f8[g->style].x, r + data_ov001_0222a38c.y);
    WfcDialog_ClipObj(sWfcDialog->frameObj, r);
    WfcDialog_ClipObj(sWfcDialog->textObj, r);
    for (i = 0; i < sWfcDialogButtonCounts[k = sWfcDialog->style]; i++) {
        g = sWfcDialog;
        u32 idx = data_ov001_0222a3a8[g->style][i];
        WfcObj_SetPos(g->buttons[i], -1, sWfcDialogButtonPos[g->style][idx].x,
                            r + sWfcDialogButtonPos[g->style][idx].y - data_ov001_0222a3f8[g->style].y);
        WfcDialog_ClipObj(sWfcDialog->buttons[i], r);
    }
    {
        s32 t = r & 0xff;
        s32 y1, y2;
        if (t >= 0xc0) {
            y2 = 0;
            y1 = 0;
        } else {
            y1 = t;
            y2 = t + data_ov001_0222a412[k].x;
        }
        s32 loc[2];
        if (y2 > 0xc0) {
            y2 = 0xc0;
        }
        WfcUtil_SetRect(data_ov001_0222a3f8[k].x, y1, data_ov001_0222a3f8[k].x + data_ov001_0222a410[k].x, y2, loc);
        WfcGx_SetWindowRect(0, 0, loc);
    }
}

void WfcDialog_ClipObj(void *a, s32 b)
{
    s32 n = WfcObj_GetCount(a);
    s32 i;
    s32 x, y;
    for (i = 0; i < n; i++) {
        WfcObj_GetPos(a, i, &x, &y);
        s32 v;
        if (y >= b && y < 0xc0) {
            v = 0;
        } else {
            v = 0x200;
        }
        WfcObj_SetAffineMode(a, i, v, 0);
    }
}

void WfcDialog_PressButton(s32 i)
{
    void *o = WfcObj_GetOam(sWfcDialog->buttons[i], 0);
    WfcCell_Copy(0, ((const u8 *)sWfcDialogButtonCells + sWfcDialog->style * 2)[i] + 1, o);
    u32 t = sWfcDialog->style;
    void *p = sWfcDialog->buttons[i];
    u32 off = ((const u8 *)data_ov001_0222a3a8 + t * 2)[i] << 2;
    WfcObj_SetPos(p, -1, *(u16 *)(off + (u32)sWfcDialogButtonPos[t]), *(u16 *)(off + (u32)data_ov001_0222a42a[t]));
    WfcObj_SetPriority(sWfcDialog->buttons[i], -1, 0);
}

void WfcDialog_CloseDelayTask(s32 a)
{
    sWfcDialog->closeTimer++;
    if (sWfcDialog->closeTimer < 8) {
        return;
    }
    WfcTask_SetFunc(a, (void *)WfcDialog_SlideOutTask);
}

void WfcDialog_SlideOutTask(s32 a)
{
    s32 x, y;
    WfcObj_GetPos(sWfcDialog->frameObj, 0, &x, &y);
    y += 0xc;
    WfcDialog_SetY(y);
    if (y < 0xc0) {
        return;
    }
    if (sWfcDialog->dimBackground != 0) {
        WfcTask_SetFunc(a, (void *)WfcDialog_UndimTask);
    } else {
        WfcTask_SetFunc(a, (void *)WfcDialog_DestroyTask);
    }
}

void WfcDialog_UndimTask(s32 a)
{
    sWfcDialog->brightness++;
    G2x_ChangeBlendBrightness_(0x4000050, sWfcDialog->brightness);
    if (sWfcDialog->brightness < 0) {
        return;
    }
    WfcTask_SetFunc(a, (void *)WfcDialog_DestroyTask);
}

void WfcDialog_DestroyTask(s32 a)
{
    s32 i;
    *(volatile u32 *)0x4000000 &= ~0xe000;
    WfcObj_Free(sWfcDialog->frameObj);
    WfcObj_Free(sWfcDialog->textObj);
    for (i = 0; i < sWfcDialogButtonCounts[sWfcDialog->style]; i++) {
        if (sWfcDialog->buttons[i] != NULL) {
            WfcObj_Free(sWfcDialog->buttons[i]);
        }
    }
    WfcText_DestroyObjCanvas(sWfcDialog->textCanvas);
    WfcTask_RequestDelete(1, a);
    WfcHeap_FreeAndClear(&sWfcDialog);
}

extern "C" const WfcPoint data_ov001_0222a38c = {8, 8};

extern "C" const u8 sWfcDialogFrameCells[8] = {0, 0, 0x46, 0x46, 0x4f, 0x2f, 0, 0};

extern "C" WfcDialogWork *sWfcDialog = 0;

extern "C" const u8 sWfcDialogButtonCounts[8] = {2, 1, 2, 1, 2, 0, 0, 0};

extern "C" const u16 data_ov001_0222a3a0[4] = {4, 0x1d, 0xfc, 0x44};

extern "C" const u8 data_ov001_0222a3a8[6][2] = {{0, 1}, {1, 0}, {0, 1}, {1, 0}, {0, 1}, {0, 0}};

extern "C" const u8 data_ov001_0222a3cc[20] = {0x6c, 0, 0x10, 0, 0x6c, 0, 0x10, 0, 0x78, 0, 0x10, 0, 0x78, 0, 0x10, 0, 0x78, 0, 0x10, 0};

extern "C" const u16 data_ov001_0222a3e0[12] = {0xd8, 0x50, 0xd8, 0x50, 0xe6, 0x4f, 0xe6, 0x4f, 0xe6, 0x48, 0xda, 0x5c};

extern "C" const WfcPoint data_ov001_0222a3f8[6] = {{0xb, 0x27}, {0xb, 0x27}, {4, 0x4c}, {4, 0x4c}, {4, 0x54}, {0xb, 0x27}};

extern "C" const s8 sWfcDialogKeyButtons[12] = {1, 0, 0, -1, 1, 0, 0, -1, 1, 0, 0, 0};

extern "C" const WfcPoint data_ov001_0222a410[6] = {{0xea, 0x72}, {0xea, 0x72}, {0xf8, 0x70}, {0xf8, 0x70}, {0x64, 0x70}, {0xea, 0x72}};

extern "C" const WfcPoint sWfcDialogButtonPos[5][2] = {{{0x10, 0x84}, {0x84, 0x84}}, {{0x10, 0x84}, {0x84, 0x84}}, {{9, 0xa7}, {0x83, 0xa7}}, {{9, 0xa7}, {0x83, 0xa7}}, {{9, 0xa7}, {0x83, 0xa7}}};
