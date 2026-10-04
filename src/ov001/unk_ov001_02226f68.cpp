// mwcc-flags: -O4,p
#include "types.h"

struct WfcTask {
    void *prev;
    WfcTask *next;
    void (*unk_08)(WfcTask *, void *);
    void *work;
    u8 priority;
    u8 ownsWork;
};

struct WfcTaskList {
    void *nodePool;
    void *deleteQueue;
    void *list;
    void *headNode;
    WfcTask *firstTask;
    u8 pad_14[8];
    u8 headPriority;
    u8 pad_1d[3];
    u8 tailNode[0x10];
    u8 tailPriority;
    u8 pad_31[3];
    s32 capacity;
    u8 isActive;
    u8 pad_39[3];
    void *nodeBuffer;
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
void WfcTask_SetFunc(WfcTask *n, void *v);
void *WfcTask_AddEx(u32 i, void *a, void *b, u32 c, u8 d);
void *WfcTask_Add(u32 i, void *a, void *b, u32 c);
void WfcTask_RunList(u32 i);
void WfcTask_Shutdown();
void WfcTask_Init();
}

extern "C" const u8 sWfcTaskListSizes[2] = {0x80, 0x20};
extern "C" WfcTaskList *sWfcTaskLists = 0;

#pragma thumb off

void WfcTask_Init() {
    s32 i;
    const u8 *pa;
    sWfcTaskLists = (WfcTaskList *)WfcHeap_Alloc(0x80, 4);
    pa = sWfcTaskListSizes;
    for (i = 0; i < 2; i++) {
        sWfcTaskLists[i].capacity = *pa;
        sWfcTaskLists[i].nodeBuffer = WfcHeap_Alloc(*pa * 0x14, 4);
        sWfcTaskLists[i].nodePool = WfcPool_CreateFrom(*pa, sWfcTaskLists[i].nodeBuffer, 0x14);
        sWfcTaskLists[i].deleteQueue = WfcPool_Create(*pa);
        sWfcTaskLists[i].list = WfcList_Create();
        sWfcTaskLists[i].headPriority = 0;
        sWfcTaskLists[i].tailPriority = 0xff;
        WfcList_PushFront(sWfcTaskLists[i].list, &sWfcTaskLists[i].headNode);
        WfcList_PushBack(sWfcTaskLists[i].list, &sWfcTaskLists[i].tailNode);
        sWfcTaskLists[i].isActive = 1;
        pa++;
    }
}

void WfcTask_Shutdown() {
    s32 i = 0;
    do {
        WfcList_Destroy(sWfcTaskLists[i].list);
        WfcPool_Destroy(sWfcTaskLists[i].nodePool);
        i++;
    } while (i < 2);
    WfcHeap_FreeAndClear(&sWfcTaskLists);
}

void WfcTask_RunList(u32 i) {
    WfcTaskList *s = &sWfcTaskLists[i];
    if (s->isActive == 0) return;
    WfcTask *n = s->firstTask;
    if (n != (WfcTask *)s->tailNode) {
        do {
            n->unk_08(n, n->work);
            n = n->next;
        } while (n != (WfcTask *)sWfcTaskLists[i].tailNode);
    }
    s32 k = 0;
    if (sWfcTaskLists[i].capacity > 0) {
        do {
            void *e = WfcPool_Get(sWfcTaskLists[i].deleteQueue);
            if (e == 0) return;
            WfcTask_Release(i, e);
            k++;
        } while (k < sWfcTaskLists[i].capacity);
    }
}

void *WfcTask_Add(u32 i, void *a, void *b, u32 c) {
    return WfcTask_AddEx(i, a, b, c, 0);
}

void *WfcTask_AddEx(u32 i, void *a, void *b, u32 c, u8 d) {
    WfcTask *n = (WfcTask *)WfcPool_Get(sWfcTaskLists[i].nodePool);
    n->unk_08 = (void (*)(WfcTask *, void *))a;
    n->work = b;
    n->priority = c;
    n->ownsWork = d;
    s32 irq = OS_DisableIrqMask(1);
    WfcTask *q = sWfcTaskLists[i].firstTask;
loop:
    if (c >= q->priority) goto next;
    WfcList_InsertBefore(q, n);
    goto done;
next:
    q = q->next;
    goto loop;
done:
    OS_EnableIrqMask(irq);
    return n;
}

void WfcTask_SetFunc(WfcTask *n, void *v) {
    n->unk_08 = (void (*)(WfcTask *, void *))v;
}

void WfcTask_RequestDelete(u32 i, void *p) {
    WfcPool_Put(sWfcTaskLists[i].deleteQueue, p);
}

void WfcTask_Delete(u32 i, void *p) {
    WfcTask_Release(i, p);
}

void WfcTask_Release(u32 i, void *p) {
    WfcTask *n = (WfcTask *)p;
    if (n->ownsWork != 0) {
        WfcHeap_FreeAndClear(&n->work);
    }
    WfcList_Remove(n);
    WfcPool_Put(sWfcTaskLists[i].nodePool, n);
}

void WfcTask_SetListActive(u32 i, u32 v) {
    sWfcTaskLists[i].isActive = v;
}

