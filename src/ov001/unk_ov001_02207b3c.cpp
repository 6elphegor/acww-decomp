// mwcc-flags: -O4,p
#include "types.h"

struct WfcButtonBar {
    void *buttonObjs[2];
    void *barObj;
    u32 task;
    u32 pressAnimTask;
    u16 timer;
    s8 result;
    u8 kind;
    u8 isInputDisabled;
    u8 isClosing;
};

typedef void (*Unk_ov001_02207904_Task)(u32);

extern "C" WfcButtonBar *sWfcButtonBar = 0;
extern "C" const u16 data_ov001_02229b3c[2] = {0, 0xa8};
extern "C" const u8 data_ov001_02229b44[8] = {2, 1, 1, 2, 1, 1, 2, 0};
extern "C" const u16 data_ov001_02229b4c[2][2] = {{8, 0xac}, {0x84, 0xac}};
extern "C" const u16 data_ov001_02229b40[2] = {0x78, 0x10};
extern "C" const u8 data_ov001_02229b54[16] = {0x27, 0x1f, 0x25, 0, 0x27, 0, 0x23, 0x1d, 0x21, 0, 0x59, 0, 0x27, 0x21, 0, 0};
extern "C" const u8 data_ov001_02229b64[16] = {0, 1, 0, 0, 0, 0, 0, 1, 1, 0, 1, 0, 0, 1, 0, 0};
#define data_ov001_02229b4e ((const u16 *)((const u8 *)data_ov001_02229b4c + 2))

extern "C" {
void *WfcHeap_AllocClear(u32, u32);
void WfcCell_Copy(u32, u32, void *);
void *WfcObj_Create(u32, u32, u32);
void *WfcObj_GetOam(void *, u32);
void WfcObj_Free(void *);
void WfcObj_SetPriority(void *, s32, s32);
void WfcObj_GetPos(void *, u32, s32 *, s32 *);
void WfcObj_SetPos(void *, s32, s32, s32);
void WfcTask_RequestDelete(u32, u32);
void WfcTask_SetFunc(u32, Unk_ov001_02207904_Task);
u32 WfcTask_Add(u32, Unk_ov001_02207904_Task, u32, u32);
void WfcHeap_FreeAndClear(void *);
void WfcUtil_RectFromPosSize(void *, void *, void *);
s32 WfcInput_IsTouchPressedIn(void *);
void WfcButtonBar_DestroyTask(u32 task);
void WfcButtonBar_SetY(s32 y);
void WfcButtonBar_PressAnimTask(u32 task);
void WfcButtonBar_SlideOutTask(u32 task);
void WfcButtonBar_InputTask(u32 task);
void WfcButtonBar_PressAnimTask(u32 task);
void WfcButtonBar_DestroyTask(u32 task);
void WfcButtonBar_SlideOutTask(u32 task);
void WfcButtonBar_InputTask(u32 task);
void WfcButtonBar_SettleTask(u32 task);
void WfcButtonBar_SlideInTask(u32 task);
void WfcButtonBar_SetY(s32 y);
}

#pragma thumb off

extern "C" void WfcButtonBar_Create(u32 idx) {
    s32 n = data_ov001_02229b44[idx];
    s32 i;
    const u8 *q;
    sWfcButtonBar = (WfcButtonBar *)WfcHeap_AllocClear(0x1c, 4);
    sWfcButtonBar->result = -2;
    sWfcButtonBar->kind = idx;
    i = 0;
    if (i < n) {
        q = data_ov001_02229b54 + idx * 2;
        do {
            sWfcButtonBar->buttonObjs[i] = WfcObj_Create(0, *q, 1);
            WfcObj_SetPriority(sWfcButtonBar->buttonObjs[i], -1, 1);
            i++;
            q++;
        } while (i < n);
    }
    sWfcButtonBar->barObj = WfcObj_Create(0, 1, 1);
    WfcObj_SetPriority(sWfcButtonBar->barObj, -1, 1);
    WfcButtonBar_SetY(0xc0);
    sWfcButtonBar->task = WfcTask_Add(0, WfcButtonBar_SlideInTask, 0, 0x78);
}

extern "C" void WfcButtonBar_Close() {
    sWfcButtonBar->isClosing = 1;
    WfcTask_SetFunc(sWfcButtonBar->task, WfcButtonBar_SlideOutTask);
}

extern "C" s32 WfcButtonBar_GetResult() {
    return sWfcButtonBar->result;
}

extern "C" void WfcButtonBar_SetResult(s32 v) {
    if (sWfcButtonBar->result == -1) {
        sWfcButtonBar->result = v;
    }
}

extern "C" void WfcButtonBar_ForceResult(s32 v) {
    sWfcButtonBar->result = v;
}

extern "C" BOOL WfcButtonBar_IsClosed() {
    if (sWfcButtonBar == NULL) {
        return TRUE;
    }
    return sWfcButtonBar->isClosing == 0 ? TRUE : FALSE;
}

extern "C" void WfcButtonBar_EnableInput() {
    sWfcButtonBar->isInputDisabled = 0;
}

extern "C" void WfcButtonBar_DisableInput() {
    sWfcButtonBar->isInputDisabled = 1;
}

extern "C" void WfcButtonBar_SetY(s32 y) {
    WfcButtonBar *g = sWfcButtonBar;
    s32 n = data_ov001_02229b44[g->kind];
    s32 a = y + data_ov001_02229b4c[0][1];
    s32 b = a - data_ov001_02229b3c[1];
    s32 i;
    WfcObj_SetPos(g->barObj, -1, data_ov001_02229b3c[0], y);
    for (i = 0; i < n; i++) {
        WfcButtonBar *s = sWfcButtonBar;
        const u8 *q = data_ov001_02229b64 + s->kind * 2;
        u32 p = q[i] * 2;
        WfcObj_SetPos(s->buttonObjs[i], -1, data_ov001_02229b4c[0][p], b);
    }
}

extern "C" void WfcButtonBar_SlideInTask(u32 task) {
    s32 v[2];
    WfcObj_GetPos(sWfcButtonBar->barObj, 0, &v[0], &v[1]);
    v[1] -= 4;
    WfcButtonBar_SetY(v[1]);
    if (v[1] > data_ov001_02229b3c[1]) {
        return;
    }
    WfcButtonBar_SetY(data_ov001_02229b3c[1]);
    WfcTask_SetFunc(task, WfcButtonBar_SettleTask);
}

extern "C" void WfcButtonBar_SettleTask(u32 task) {
    sWfcButtonBar->result = -1;
    sWfcButtonBar->timer++;
    if (sWfcButtonBar->timer < 4) {
        return;
    }
    sWfcButtonBar->timer = 0;
    WfcTask_SetFunc(task, WfcButtonBar_InputTask);
}

extern "C" void WfcButtonBar_InputTask(u32 task) {
    WfcButtonBar *g = sWfcButtonBar;
    s32 n = data_ov001_02229b44[g->kind];
    s32 i;
    u8 out[8];
    if (g->isInputDisabled == 0) {
        if (g->result != -1) {
            return;
        }
        for (i = 0; i < n; i++) {
            const u8 *q = data_ov001_02229b64 + sWfcButtonBar->kind * 2;
            WfcUtil_RectFromPosSize((void *)&data_ov001_02229b4c[q[i]], (void *)data_ov001_02229b40, out);
            if (WfcInput_IsTouchPressedIn(out) != 0) {
                WfcButtonBar *s = sWfcButtonBar;
                if (s->pressAnimTask != 0) {
                    break;
                }
                const u8 *q1 = data_ov001_02229b54 + s->kind * 2;
                u32 id = q1[i] + 1;
                WfcCell_Copy(0, id, WfcObj_GetOam(s->buttonObjs[i], 0));
                s = sWfcButtonBar;
                const u8 *q2 = data_ov001_02229b64 + s->kind * 2;
                u32 p = q2[i] << 2;
                WfcObj_SetPos(s->buttonObjs[i], -1, *(u16 *)((u8 *)data_ov001_02229b4c + p), *(u16 *)((u8 *)data_ov001_02229b4e + p));
                WfcObj_SetPriority(sWfcButtonBar->buttonObjs[i], -1, 1);
                sWfcButtonBar->pressAnimTask = WfcTask_Add(0, WfcButtonBar_PressAnimTask, 0, 0x6e);
                sWfcButtonBar->result = i;
                return;
            }
        }
    }
    sWfcButtonBar->result = -1;
}

extern "C" void WfcButtonBar_SlideOutTask(u32 task) {
    s32 v[2];
    WfcObj_GetPos(sWfcButtonBar->barObj, 0, &v[0], &v[1]);
    v[1] += 4;
    WfcButtonBar_SetY(v[1]);
    if (v[1] < 0xc0) {
        return;
    }
    WfcTask_SetFunc(task, WfcButtonBar_DestroyTask);
}

extern "C" void WfcButtonBar_DestroyTask(u32 task) {
    s32 i;
    WfcTask_RequestDelete(0, task);
    if (sWfcButtonBar->pressAnimTask != 0) {
        WfcTask_RequestDelete(0, sWfcButtonBar->pressAnimTask);
    }
    for (i = 0; i < 2; i++) {
        if (sWfcButtonBar->buttonObjs[i] != NULL) {
            WfcObj_Free(sWfcButtonBar->buttonObjs[i]);
        }
    }
    WfcObj_Free(sWfcButtonBar->barObj);
    WfcHeap_FreeAndClear(&sWfcButtonBar);
}

extern "C" void WfcButtonBar_PressAnimTask(u32 task) {
    WfcButtonBar *g = sWfcButtonBar;
    g->timer++;
    if (sWfcButtonBar->timer < 0x10) {
        return;
    }
    s32 n = data_ov001_02229b44[sWfcButtonBar->kind];
    s32 i;
    for (i = 0; i < n; i++) {
        WfcButtonBar *s = sWfcButtonBar;
        const u8 *q = data_ov001_02229b54 + s->kind * 2;
        u32 id = q[i];
        WfcCell_Copy(0, id, WfcObj_GetOam(s->buttonObjs[i], 0));
        WfcObj_SetPriority(sWfcButtonBar->buttonObjs[i], -1, 1);
    }
    WfcButtonBar_SetY(data_ov001_02229b3c[1]);
    sWfcButtonBar->timer = 0;
    sWfcButtonBar->result = -1;
    if (sWfcButtonBar->pressAnimTask != 0) {
        sWfcButtonBar->pressAnimTask = 0;
        WfcTask_RequestDelete(0, task);
    }
}

#pragma thumb reset
