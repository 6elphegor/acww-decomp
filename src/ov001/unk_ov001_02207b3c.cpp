// mwcc-flags: -O4,p
#include "types.h"

struct Unk_ov001_02207b3c_S2 {
    void *unk_00[2];
    void *unk_08;
    u32 unk_0c;
    u32 unk_10;
    u16 unk_14;
    s8 unk_16;
    u8 unk_17;
    u8 unk_18;
    u8 unk_19;
};

typedef void (*Unk_ov001_02207904_Task)(u32);

extern "C" Unk_ov001_02207b3c_S2 *sWfcButtonBar = 0;
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
    sWfcButtonBar = (Unk_ov001_02207b3c_S2 *)WfcHeap_AllocClear(0x1c, 4);
    sWfcButtonBar->unk_16 = -2;
    sWfcButtonBar->unk_17 = idx;
    i = 0;
    if (i < n) {
        q = data_ov001_02229b54 + idx * 2;
        do {
            sWfcButtonBar->unk_00[i] = WfcObj_Create(0, *q, 1);
            WfcObj_SetPriority(sWfcButtonBar->unk_00[i], -1, 1);
            i++;
            q++;
        } while (i < n);
    }
    sWfcButtonBar->unk_08 = WfcObj_Create(0, 1, 1);
    WfcObj_SetPriority(sWfcButtonBar->unk_08, -1, 1);
    WfcButtonBar_SetY(0xc0);
    sWfcButtonBar->unk_0c = WfcTask_Add(0, WfcButtonBar_SlideInTask, 0, 0x78);
}

extern "C" void WfcButtonBar_Close() {
    sWfcButtonBar->unk_19 = 1;
    WfcTask_SetFunc(sWfcButtonBar->unk_0c, WfcButtonBar_SlideOutTask);
}

extern "C" s32 WfcButtonBar_GetResult() {
    return sWfcButtonBar->unk_16;
}

extern "C" void WfcButtonBar_SetResult(s32 v) {
    if (sWfcButtonBar->unk_16 == -1) {
        sWfcButtonBar->unk_16 = v;
    }
}

extern "C" void WfcButtonBar_ForceResult(s32 v) {
    sWfcButtonBar->unk_16 = v;
}

extern "C" BOOL WfcButtonBar_IsClosed() {
    if (sWfcButtonBar == NULL) {
        return TRUE;
    }
    return sWfcButtonBar->unk_19 == 0 ? TRUE : FALSE;
}

extern "C" void WfcButtonBar_EnableInput() {
    sWfcButtonBar->unk_18 = 0;
}

extern "C" void WfcButtonBar_DisableInput() {
    sWfcButtonBar->unk_18 = 1;
}

extern "C" void WfcButtonBar_SetY(s32 y) {
    Unk_ov001_02207b3c_S2 *g = sWfcButtonBar;
    s32 n = data_ov001_02229b44[g->unk_17];
    s32 a = y + data_ov001_02229b4c[0][1];
    s32 b = a - data_ov001_02229b3c[1];
    s32 i;
    WfcObj_SetPos(g->unk_08, -1, data_ov001_02229b3c[0], y);
    for (i = 0; i < n; i++) {
        Unk_ov001_02207b3c_S2 *s = sWfcButtonBar;
        const u8 *q = data_ov001_02229b64 + s->unk_17 * 2;
        u32 p = q[i] * 2;
        WfcObj_SetPos(s->unk_00[i], -1, data_ov001_02229b4c[0][p], b);
    }
}

extern "C" void WfcButtonBar_SlideInTask(u32 task) {
    s32 v[2];
    WfcObj_GetPos(sWfcButtonBar->unk_08, 0, &v[0], &v[1]);
    v[1] -= 4;
    WfcButtonBar_SetY(v[1]);
    if (v[1] > data_ov001_02229b3c[1]) {
        return;
    }
    WfcButtonBar_SetY(data_ov001_02229b3c[1]);
    WfcTask_SetFunc(task, WfcButtonBar_SettleTask);
}

extern "C" void WfcButtonBar_SettleTask(u32 task) {
    sWfcButtonBar->unk_16 = -1;
    sWfcButtonBar->unk_14++;
    if (sWfcButtonBar->unk_14 < 4) {
        return;
    }
    sWfcButtonBar->unk_14 = 0;
    WfcTask_SetFunc(task, WfcButtonBar_InputTask);
}

extern "C" void WfcButtonBar_InputTask(u32 task) {
    Unk_ov001_02207b3c_S2 *g = sWfcButtonBar;
    s32 n = data_ov001_02229b44[g->unk_17];
    s32 i;
    u8 out[8];
    if (g->unk_18 == 0) {
        if (g->unk_16 != -1) {
            return;
        }
        for (i = 0; i < n; i++) {
            const u8 *q = data_ov001_02229b64 + sWfcButtonBar->unk_17 * 2;
            WfcUtil_RectFromPosSize((void *)&data_ov001_02229b4c[q[i]], (void *)data_ov001_02229b40, out);
            if (WfcInput_IsTouchPressedIn(out) != 0) {
                Unk_ov001_02207b3c_S2 *s = sWfcButtonBar;
                if (s->unk_10 != 0) {
                    break;
                }
                const u8 *q1 = data_ov001_02229b54 + s->unk_17 * 2;
                u32 id = q1[i] + 1;
                WfcCell_Copy(0, id, WfcObj_GetOam(s->unk_00[i], 0));
                s = sWfcButtonBar;
                const u8 *q2 = data_ov001_02229b64 + s->unk_17 * 2;
                u32 p = q2[i] << 2;
                WfcObj_SetPos(s->unk_00[i], -1, *(u16 *)((u8 *)data_ov001_02229b4c + p), *(u16 *)((u8 *)data_ov001_02229b4e + p));
                WfcObj_SetPriority(sWfcButtonBar->unk_00[i], -1, 1);
                sWfcButtonBar->unk_10 = WfcTask_Add(0, WfcButtonBar_PressAnimTask, 0, 0x6e);
                sWfcButtonBar->unk_16 = i;
                return;
            }
        }
    }
    sWfcButtonBar->unk_16 = -1;
}

extern "C" void WfcButtonBar_SlideOutTask(u32 task) {
    s32 v[2];
    WfcObj_GetPos(sWfcButtonBar->unk_08, 0, &v[0], &v[1]);
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
    if (sWfcButtonBar->unk_10 != 0) {
        WfcTask_RequestDelete(0, sWfcButtonBar->unk_10);
    }
    for (i = 0; i < 2; i++) {
        if (sWfcButtonBar->unk_00[i] != NULL) {
            WfcObj_Free(sWfcButtonBar->unk_00[i]);
        }
    }
    WfcObj_Free(sWfcButtonBar->unk_08);
    WfcHeap_FreeAndClear(&sWfcButtonBar);
}

extern "C" void WfcButtonBar_PressAnimTask(u32 task) {
    Unk_ov001_02207b3c_S2 *g = sWfcButtonBar;
    g->unk_14++;
    if (sWfcButtonBar->unk_14 < 0x10) {
        return;
    }
    s32 n = data_ov001_02229b44[sWfcButtonBar->unk_17];
    s32 i;
    for (i = 0; i < n; i++) {
        Unk_ov001_02207b3c_S2 *s = sWfcButtonBar;
        const u8 *q = data_ov001_02229b54 + s->unk_17 * 2;
        u32 id = q[i];
        WfcCell_Copy(0, id, WfcObj_GetOam(s->unk_00[i], 0));
        WfcObj_SetPriority(sWfcButtonBar->unk_00[i], -1, 1);
    }
    WfcButtonBar_SetY(data_ov001_02229b3c[1]);
    sWfcButtonBar->unk_14 = 0;
    sWfcButtonBar->unk_16 = -1;
    if (sWfcButtonBar->unk_10 != 0) {
        sWfcButtonBar->unk_10 = 0;
        WfcTask_RequestDelete(0, task);
    }
}

#pragma thumb reset
