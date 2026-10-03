// mwcc-flags: -O4,p
#include "types.h"

#pragma thumb off

struct Unk_ov001_02224670 {
    Unk_ov001_02224670 *unk_00;
    Unk_ov001_02224670 *unk_04;
    void *unk_08;
    u8 unk_0c;
};

struct Unk_ov001_02224ca0 {
    u16 unk_00;
    u8 unk_02;
    u8 unk_03;
    void *unk_04[1];
};

struct Unk_ov001_0222df40 {
    s32 unk_00;
    s16 unk_04;
    u16 unk_06;
    u8 unk_08;
    u8 unk_09;
    u8 pad_0a[2];
};

struct Unk_ov001_02224ff8_Four {
    u8 v[4];
};

extern "C" {
s32 OS_DisableIrqMask(s32);
void OS_EnableIrqMask(s32);
s32 FX_ModS32(s32, s32);
s32 FX_DivS32(s32, s32);
void G2x_ChangeBlendBrightness_(u32, s32);
s32 G2x_SetBlendBrightness_(void *, s32, s32);
void Fatal_Trap();
void *WfcHeap_AllocClear(u32, u32);
void *WfcHeap_Alloc(u32, u32);
void WfcHeap_FreeAndClear(void *);
s32 WfcTask_RequestDelete(s32, s32);
s32 WfcTask_Add(s32, void *, void *, s32);

Unk_ov001_02224670 *WfcPool_Get(Unk_ov001_02224ca0 *r);
void WfcPool_Put(Unk_ov001_02224ca0 *r, void *v);
void WfcPool_Destroy(void *a, ...);
Unk_ov001_02224ca0 *WfcPool_CreateFrom(s32 count, u8 *base, u32 stride);
Unk_ov001_02224ca0 *WfcPool_Create(s32 count);
void WfcFade_WaitTask(s32 a, Unk_ov001_0222df40 *st);
s32 WfcFade_StartWait(u32 v);
void WfcFade_Task(s32 a, Unk_ov001_0222df40 *st);
u32 WfcFade_Start(u32 idx, u32 mode, s32 val, u32 h);
u8 WfcFade_IsBusy(u32 mode);
void WfcFade_Shutdown();
void WfcFade_Init();

Unk_ov001_0222df40 *sWfcFade;
}

extern "C" u8 sWfcFadeFlags[4] = {0x11, 0x10, 0x01, 0x00};
extern "C" u8 sWfcFadeEndValues[4] = {0x00, 0xf0, 0x00, 0x10};
extern "C" Unk_ov001_02224ff8_Four sWfcFadeStartValues = {{0xf0, 0x00, 0x10, 0x00}};

void WfcFade_Init() {
    sWfcFade = (Unk_ov001_0222df40 *)WfcHeap_AllocClear(0x18, 4);
    G2x_SetBlendBrightness_((void *)0x4000050, 0x3f, 0x10);
    G2x_SetBlendBrightness_((void *)0x4001050, 0x3f, 0x10);
}

void WfcFade_Shutdown() {
    WfcHeap_FreeAndClear(&sWfcFade);
}

u8 WfcFade_IsBusy(u32 mode) {
    Unk_ov001_0222df40 *p;
    if (mode == 1) {
        p = sWfcFade;
    } else {
        p = (Unk_ov001_0222df40 *)((u8 *)sWfcFade + 0xc);
    }
    return p->unk_09;
}

u32 WfcFade_Start(u32 idx, u32 mode, s32 val, u32 h) {
    Unk_ov001_02224ff8_Four arr = sWfcFadeStartValues;
    Unk_ov001_0222df40 *p = mode == 1 ? sWfcFade : (Unk_ov001_0222df40 *)((u8 *)sWfcFade + 0xc);
    if (p->unk_09 != 0) {
        return 0;
    }
    if (mode == 1) {
        G2x_SetBlendBrightness_((void *)0x4001050, val, ((s8 *)arr.v)[idx]);
    } else {
        G2x_SetBlendBrightness_((void *)0x4000050, val, ((s8 *)arr.v)[idx]);
    }
    p->unk_00 = WfcTask_Add(1, (void *)WfcFade_Task, p, 0xc8);
    p->unk_04 = 0;
    p->unk_08 = idx;
    p->unk_06 = h;
    p->unk_09 = 1;
    return 1;
}

void WfcFade_Task(s32 a, Unk_ov001_0222df40 *st) {
    s8 lo[4];
    s8 hi[4];
    lo[0] = sWfcFadeFlags[0];
    lo[1] = sWfcFadeFlags[1];
    lo[2] = sWfcFadeFlags[2];
    lo[3] = sWfcFadeFlags[3];
    hi[0] = sWfcFadeEndValues[0];
    hi[1] = sWfcFadeEndValues[1];
    hi[2] = sWfcFadeEndValues[2];
    hi[3] = sWfcFadeEndValues[3];
    st->unk_04 = st->unk_04 + 1;
    s32 r = FX_DivS32(st->unk_04 << 4, st->unk_06);
    u32 f = ((u8 *)lo)[st->unk_08];
    if (f & 1) r = 0x10 - r;
    if (f & 0x10) r = -r;
    if (st == sWfcFade) G2x_ChangeBlendBrightness_(0x4001050, r);
    else G2x_ChangeBlendBrightness_(0x4000050, r);
    if (st->unk_04 < st->unk_06) return;
    if (st == sWfcFade) G2x_ChangeBlendBrightness_(0x4001050, hi[st->unk_08]);
    else G2x_ChangeBlendBrightness_(0x4000050, hi[st->unk_08]);
    st->unk_09 = 0;
    WfcTask_RequestDelete(1, a);
}

s32 WfcFade_StartWait(u32 v) {
    Unk_ov001_0222df40 *s = sWfcFade;
    if (s->unk_09 != 0) return 0;
    s->unk_00 = WfcTask_Add(1, (void *)WfcFade_WaitTask, s, 200);
    s->unk_04 = 0;
    s->unk_06 = v;
    s->unk_09 = 1;
    return 1;
}

void WfcFade_WaitTask(s32 a, Unk_ov001_0222df40 *st) {
    st->unk_04 = st->unk_04 + 1;
    if (st->unk_04 < st->unk_06) return;
    st->unk_09 = 0;
    WfcTask_RequestDelete(1, a);
}

Unk_ov001_02224ca0 *WfcPool_Create(s32 count) {
    Unk_ov001_02224ca0 *r = (Unk_ov001_02224ca0 *)WfcHeap_Alloc((count + 1) * 4 + 8, 4);
    r->unk_00 = count + 1;
    r->unk_02 = 0;
    r->unk_03 = 0;
    return r;
}

Unk_ov001_02224ca0 *WfcPool_CreateFrom(s32 count, u8 *base, u32 stride) {
    Unk_ov001_02224ca0 *r = WfcPool_Create(count);
    s32 i;
    for (i = 0; i < count; i++) {
        r->unk_04[i] = base;
        base += stride;
    }
    r->unk_03 = count;
    return r;
}

void WfcPool_Destroy(void *a, ...) {
    WfcHeap_FreeAndClear(&a);
}

void WfcPool_Put(Unk_ov001_02224ca0 *r, void *v) {
    s32 irq = OS_DisableIrqMask(1);
    u32 n = FX_ModS32(r->unk_03 + 1, r->unk_00);
    if (n == r->unk_02) Fatal_Trap();
    r->unk_04[r->unk_03] = v;
    r->unk_03 = n;
    OS_EnableIrqMask(irq);
}

Unk_ov001_02224670 *WfcPool_Get(Unk_ov001_02224ca0 *r) {
    Unk_ov001_02224670 *res = 0;
    s32 irq = OS_DisableIrqMask(1);
    u32 t = r->unk_03;
    u32 h = r->unk_02;
    if (h != t) {
        r->unk_03 = FX_ModS32(t + r->unk_00 - 1, r->unk_00);
        res = (Unk_ov001_02224670 *)r->unk_04[r->unk_03];
    }
    OS_EnableIrqMask(irq);
    return res;
}

