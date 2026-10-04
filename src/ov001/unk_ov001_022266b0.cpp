// mwcc-flags: -O4,p
#include "types.h"

struct WfcListNode {
    WfcListNode *prev;
    WfcListNode *next;
};

struct Unk_ov001_0222df70 {
    u8 pad_000[0x800];
    void *entryPools[2];
    void *transferTask;
};

extern "C" {
void WfcHeap_FreeAndClear(void *);
void *WfcHeap_Alloc(s32, s32);
void *WfcPool_Get(void *);
void *WfcPool_CreateFrom(s32, void *, s32);
void WfcPool_Put(void *, void *);
void WfcTask_Delete(s32, void *);
void *WfcTask_Add(s32, void *, s32, s32);
s32 OS_DisableIrqMask(s32);
s32 OS_EnableIrqMask(s32);
void DC_FlushRange(void *, u32);
void GX_LoadOAM(void *, s32, u32);
void GXS_LoadOAM(void *, s32, u32);
void MIi_CpuCopy32(void *, void *, u32);
void MIi_CpuClearFast(u32, void *, u32);
void WfcList_PushFront(WfcListNode *head, WfcListNode *node);
void WfcList_PushBack(WfcListNode *head, WfcListNode *node);
void WfcList_InsertBefore(WfcListNode *head, WfcListNode *node);
void WfcList_Remove(WfcListNode *node);
void WfcList_Destroy(void *a, ...);
WfcListNode *WfcList_Create();
u8 *WfcOam_GetEntry(s32 a, s32 b);
void WfcOam_FreeEntry(u32 *p);
void *WfcOam_AllocEntry(s32 idx, void *dst);
void WfcOam_Shutdown();
void WfcOam_TransferTask();
void WfcOam_Init();
}

extern "C" Unk_ov001_0222df70 *sWfcOamBuf = 0;

#pragma thumb off

void WfcOam_Init()
{
    volatile u32 v;
    Unk_ov001_0222df70 *b = (Unk_ov001_0222df70 *)WfcHeap_Alloc(0x80c, 4);
    s32 i;
    sWfcOamBuf = b;
    v = 0x200;
    MIi_CpuClearFast(v, b, 0x800);
    for (i = 0; i < 2; i++) {
        sWfcOamBuf->entryPools[i] = WfcPool_CreateFrom(0x40, (u8 *)sWfcOamBuf + i * 0x400, 8);
    }
    sWfcOamBuf->transferTask = WfcTask_Add(1, (void *)WfcOam_TransferTask, 0, 0xc8);
}

void WfcOam_TransferTask()
{
    DC_FlushRange(sWfcOamBuf, 0x800);
    GX_LoadOAM(sWfcOamBuf, 0, 0x400);
    GXS_LoadOAM((u8 *)sWfcOamBuf + 0x400, 0, 0x400);
}

void WfcOam_Shutdown()
{
    WfcTask_Delete(1, sWfcOamBuf->transferTask);
    WfcHeap_FreeAndClear(&sWfcOamBuf);
}

void *WfcOam_AllocEntry(s32 idx, void *dst)
{
    void *r = WfcPool_Get(sWfcOamBuf->entryPools[idx]);
    MIi_CpuCopy32(dst, r, 8);
    return r;
}

void WfcOam_FreeEntry(u32 *p)
{
    s32 z = 0;
    *p = (*p & 0xc1fffcff) | 0x200;
    if ((u32)p >= (u32)sWfcOamBuf + 0x400) z = 1;
    WfcPool_Put(sWfcOamBuf->entryPools[z], p);
}

u8 *WfcOam_GetEntry(s32 a, s32 b)
{
    return (u8 *)sWfcOamBuf + (a << 10) + (b << 3);
}

WfcListNode *WfcList_Create()
{
    WfcListNode *n = (WfcListNode *)WfcHeap_Alloc(0x10, 4);
    n[0].prev = 0;
    n[0].next = &n[1];
    n[1].prev = n;
    n[1].next = 0;
    return n;
}

void WfcList_Destroy(void *a, ...)
{
    WfcHeap_FreeAndClear(&a);
}

void WfcList_Remove(WfcListNode *node)
{
    s32 old = OS_DisableIrqMask(1);
    node->prev->next = node->next;
    node->next->prev = node->prev;
    node->prev = node->next = 0;
    OS_EnableIrqMask(old);
}

void WfcList_InsertBefore(WfcListNode *head, WfcListNode *node)
{
    s32 old = OS_DisableIrqMask(1);
    head->prev->next = node;
    node->prev = head->prev;
    node->next = head;
    head->prev = node;
    OS_EnableIrqMask(old);
}

void WfcList_PushBack(WfcListNode *head, WfcListNode *node)
{
    WfcList_InsertBefore(head + 1, node);
}

void WfcList_PushFront(WfcListNode *head, WfcListNode *node)
{
    WfcList_InsertBefore(head->next, node);
}

