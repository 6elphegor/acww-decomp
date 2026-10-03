// mwcc-flags: -O4,p
#include "types.h"

struct Unk_ov001_02226f80_Node {
    void *unk_00;
    Unk_ov001_02226f80_Node *unk_04;
    void (*unk_08)(Unk_ov001_02226f80_Node *, void *);
    void *unk_0c;
    u8 unk_10;
    u8 unk_11;
};

struct Unk_ov001_02226f80_Slot {
    void *unk_00;
    void *unk_04;
    void *unk_08;
    void *unk_0c;
    Unk_ov001_02226f80_Node *unk_10;
    u8 pad_14[8];
    u8 unk_1c;
    u8 pad_1d[3];
    u8 unk_20[0x10];
    u8 unk_30;
    u8 pad_31[3];
    s32 unk_34;
    u8 unk_38;
    u8 pad_39[3];
    void *unk_3c;
};

extern "C" {
s32 OS_DisableIrqMask(s32);
void OS_EnableIrqMask(s32);
void WfcHeap_FreeAndClear(void *);
void WfcList_Remove(void *);
void WfcPool_Put(void *, void *);
void *WfcPool_Get(void *);
void WfcList_InsertBefore(void *, void *);
void WfcList_Destroy(void *);
void WfcPool_Destroy(void *);
void *WfcHeap_Alloc(s32, s32);
void *WfcPool_CreateFrom(s32, void *, s32);
void *WfcPool_Create(s32);
void *WfcList_Create();
void WfcList_PushFront(void *, void *);
void WfcList_PushBack(void *, void *);
void WfcTask_SetListActive(u32 i, u32 v);
void WfcTask_Release(u32 i, void *p);
void WfcTask_Delete(u32 i, void *p);
void WfcTask_RequestDelete(u32 i, void *p);
void WfcTask_SetFunc(Unk_ov001_02226f80_Node *n, void *v);
void *WfcTask_AddEx(u32 i, void *a, void *b, u32 c, u8 d);
void *WfcTask_Add(u32 i, void *a, void *b, u32 c);
void WfcTask_RunList(u32 i);
void WfcTask_Shutdown();
void WfcTask_Init();
}

extern "C" const u8 sWfcTaskListSizes[2] = {0x80, 0x20};
extern "C" Unk_ov001_02226f80_Slot *sWfcTaskLists = 0;

#pragma thumb off

void WfcTask_Init() {
    s32 i;
    const u8 *pa;
    sWfcTaskLists = (Unk_ov001_02226f80_Slot *)WfcHeap_Alloc(0x80, 4);
    pa = sWfcTaskListSizes;
    for (i = 0; i < 2; i++) {
        sWfcTaskLists[i].unk_34 = *pa;
        sWfcTaskLists[i].unk_3c = WfcHeap_Alloc(*pa * 0x14, 4);
        sWfcTaskLists[i].unk_00 = WfcPool_CreateFrom(*pa, sWfcTaskLists[i].unk_3c, 0x14);
        sWfcTaskLists[i].unk_04 = WfcPool_Create(*pa);
        sWfcTaskLists[i].unk_08 = WfcList_Create();
        sWfcTaskLists[i].unk_1c = 0;
        sWfcTaskLists[i].unk_30 = 0xff;
        WfcList_PushFront(sWfcTaskLists[i].unk_08, &sWfcTaskLists[i].unk_0c);
        WfcList_PushBack(sWfcTaskLists[i].unk_08, &sWfcTaskLists[i].unk_20);
        sWfcTaskLists[i].unk_38 = 1;
        pa++;
    }
}

void WfcTask_Shutdown() {
    s32 i = 0;
    do {
        WfcList_Destroy(sWfcTaskLists[i].unk_08);
        WfcPool_Destroy(sWfcTaskLists[i].unk_00);
        i++;
    } while (i < 2);
    WfcHeap_FreeAndClear(&sWfcTaskLists);
}

void WfcTask_RunList(u32 i) {
    Unk_ov001_02226f80_Slot *s = &sWfcTaskLists[i];
    if (s->unk_38 == 0) return;
    Unk_ov001_02226f80_Node *n = s->unk_10;
    if (n != (Unk_ov001_02226f80_Node *)s->unk_20) {
        do {
            n->unk_08(n, n->unk_0c);
            n = n->unk_04;
        } while (n != (Unk_ov001_02226f80_Node *)sWfcTaskLists[i].unk_20);
    }
    s32 k = 0;
    if (sWfcTaskLists[i].unk_34 > 0) {
        do {
            void *e = WfcPool_Get(sWfcTaskLists[i].unk_04);
            if (e == 0) return;
            WfcTask_Release(i, e);
            k++;
        } while (k < sWfcTaskLists[i].unk_34);
    }
}

void *WfcTask_Add(u32 i, void *a, void *b, u32 c) {
    return WfcTask_AddEx(i, a, b, c, 0);
}

void *WfcTask_AddEx(u32 i, void *a, void *b, u32 c, u8 d) {
    Unk_ov001_02226f80_Node *n = (Unk_ov001_02226f80_Node *)WfcPool_Get(sWfcTaskLists[i].unk_00);
    n->unk_08 = (void (*)(Unk_ov001_02226f80_Node *, void *))a;
    n->unk_0c = b;
    n->unk_10 = c;
    n->unk_11 = d;
    s32 irq = OS_DisableIrqMask(1);
    Unk_ov001_02226f80_Node *q = sWfcTaskLists[i].unk_10;
loop:
    if (c >= q->unk_10) goto next;
    WfcList_InsertBefore(q, n);
    goto done;
next:
    q = q->unk_04;
    goto loop;
done:
    OS_EnableIrqMask(irq);
    return n;
}

void WfcTask_SetFunc(Unk_ov001_02226f80_Node *n, void *v) {
    n->unk_08 = (void (*)(Unk_ov001_02226f80_Node *, void *))v;
}

void WfcTask_RequestDelete(u32 i, void *p) {
    WfcPool_Put(sWfcTaskLists[i].unk_04, p);
}

void WfcTask_Delete(u32 i, void *p) {
    WfcTask_Release(i, p);
}

void WfcTask_Release(u32 i, void *p) {
    Unk_ov001_02226f80_Node *n = (Unk_ov001_02226f80_Node *)p;
    if (n->unk_11 != 0) {
        WfcHeap_FreeAndClear(&n->unk_0c);
    }
    WfcList_Remove(n);
    WfcPool_Put(sWfcTaskLists[i].unk_00, n);
}

void WfcTask_SetListActive(u32 i, u32 v) {
    sWfcTaskLists[i].unk_38 = v;
}

