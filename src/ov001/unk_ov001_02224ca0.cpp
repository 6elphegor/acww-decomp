// mwcc-flags: -O4,p
#include "types.h"

#pragma thumb off

struct WfcObjGroup {
    WfcObjGroup *prev;
    WfcObjGroup *next;
    void *oams;
    u8 numOams;
};

struct WfcPool {
    u16 capacity;
    u8 head;
    u8 top;
    void *entries[1];
};

struct WfcFadeState {
    s32 task;
    s16 frame;
    u16 duration;
    u8 fadeType;
    u8 isBusy;
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

WfcObjGroup *WfcPool_Get(WfcPool *r);
void WfcPool_Put(WfcPool *r, void *v);
void WfcPool_Destroy(void *a, ...);
WfcPool *WfcPool_CreateFrom(s32 count, u8 *base, u32 stride);
WfcPool *WfcPool_Create(s32 count);
void WfcFade_WaitTask(s32 a, WfcFadeState *st);
s32 WfcFade_StartWait(u32 v);
void WfcFade_Task(s32 a, WfcFadeState *st);
u32 WfcFade_Start(u32 idx, u32 mode, s32 val, u32 h);
u8 WfcFade_IsBusy(u32 mode);
void WfcFade_Shutdown();
void WfcFade_Init();

WfcFadeState *sWfcFade;
}

extern "C" u8 sWfcFadeFlags[4] = {0x11, 0x10, 0x01, 0x00};
extern "C" u8 sWfcFadeEndValues[4] = {0x00, 0xf0, 0x00, 0x10};
extern "C" Unk_ov001_02224ff8_Four sWfcFadeStartValues = {{0xf0, 0x00, 0x10, 0x00}};

void WfcFade_Init() {
    sWfcFade = (WfcFadeState *)WfcHeap_AllocClear(0x18, 4);
    G2x_SetBlendBrightness_((void *)0x4000050, 0x3f, 0x10);
    G2x_SetBlendBrightness_((void *)0x4001050, 0x3f, 0x10);
}

void WfcFade_Shutdown() {
    WfcHeap_FreeAndClear(&sWfcFade);
}

u8 WfcFade_IsBusy(u32 mode) {
    WfcFadeState *p;
    if (mode == 1) {
        p = sWfcFade;
    } else {
        p = (WfcFadeState *)((u8 *)sWfcFade + 0xc);
    }
    return p->isBusy;
}

u32 WfcFade_Start(u32 idx, u32 mode, s32 val, u32 h) {
    Unk_ov001_02224ff8_Four arr = sWfcFadeStartValues;
    WfcFadeState *p = mode == 1 ? sWfcFade : (WfcFadeState *)((u8 *)sWfcFade + 0xc);
    if (p->isBusy != 0) {
        return 0;
    }
    if (mode == 1) {
        G2x_SetBlendBrightness_((void *)0x4001050, val, ((s8 *)arr.v)[idx]);
    } else {
        G2x_SetBlendBrightness_((void *)0x4000050, val, ((s8 *)arr.v)[idx]);
    }
    p->task = WfcTask_Add(1, (void *)WfcFade_Task, p, 0xc8);
    p->frame = 0;
    p->fadeType = idx;
    p->duration = h;
    p->isBusy = 1;
    return 1;
}

void WfcFade_Task(s32 a, WfcFadeState *st) {
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
    st->frame = st->frame + 1;
    s32 r = FX_DivS32(st->frame << 4, st->duration);
    u32 f = ((u8 *)lo)[st->fadeType];
    if (f & 1) r = 0x10 - r;
    if (f & 0x10) r = -r;
    if (st == sWfcFade) G2x_ChangeBlendBrightness_(0x4001050, r);
    else G2x_ChangeBlendBrightness_(0x4000050, r);
    if (st->frame < st->duration) return;
    if (st == sWfcFade) G2x_ChangeBlendBrightness_(0x4001050, hi[st->fadeType]);
    else G2x_ChangeBlendBrightness_(0x4000050, hi[st->fadeType]);
    st->isBusy = 0;
    WfcTask_RequestDelete(1, a);
}

s32 WfcFade_StartWait(u32 v) {
    WfcFadeState *s = sWfcFade;
    if (s->isBusy != 0) return 0;
    s->task = WfcTask_Add(1, (void *)WfcFade_WaitTask, s, 200);
    s->frame = 0;
    s->duration = v;
    s->isBusy = 1;
    return 1;
}

void WfcFade_WaitTask(s32 a, WfcFadeState *st) {
    st->frame = st->frame + 1;
    if (st->frame < st->duration) return;
    st->isBusy = 0;
    WfcTask_RequestDelete(1, a);
}

WfcPool *WfcPool_Create(s32 count) {
    WfcPool *r = (WfcPool *)WfcHeap_Alloc((count + 1) * 4 + 8, 4);
    r->capacity = count + 1;
    r->head = 0;
    r->top = 0;
    return r;
}

WfcPool *WfcPool_CreateFrom(s32 count, u8 *base, u32 stride) {
    WfcPool *r = WfcPool_Create(count);
    s32 i;
    for (i = 0; i < count; i++) {
        r->entries[i] = base;
        base += stride;
    }
    r->top = count;
    return r;
}

void WfcPool_Destroy(void *a, ...) {
    WfcHeap_FreeAndClear(&a);
}

void WfcPool_Put(WfcPool *r, void *v) {
    s32 irq = OS_DisableIrqMask(1);
    u32 n = FX_ModS32(r->top + 1, r->capacity);
    if (n == r->head) Fatal_Trap();
    r->entries[r->top] = v;
    r->top = n;
    OS_EnableIrqMask(irq);
}

WfcObjGroup *WfcPool_Get(WfcPool *r) {
    WfcObjGroup *res = 0;
    s32 irq = OS_DisableIrqMask(1);
    u32 t = r->top;
    u32 h = r->head;
    if (h != t) {
        r->top = FX_ModS32(t + r->capacity - 1, r->capacity);
        res = (WfcObjGroup *)r->entries[r->top];
    }
    OS_EnableIrqMask(irq);
    return res;
}

