// mwcc-flags: -O4,p
#include "types.h"
#include "net/WfcListNode.h"


struct WfcVramBlock {
    WfcVramBlock *prev;
    WfcVramBlock *next;
    u16 blockStart;
    u16 blockSize;
};

struct Unk_ov001_022269e0_Rec {
    u8 pad_000[0x180];
    WfcVramBlock headNode;
    WfcVramBlock tailNode;
    WfcListNode *list;
    void *nodePool;
};

struct Unk_ov001_0222df74 {
    Unk_ov001_022269e0_Rec heaps[2];
};

extern "C" {
void *WfcHeap_AllocClear(s32, s32);
void *WfcPool_Get(void *);
void *WfcPool_CreateFrom(s32, void *, s32);
void WfcPool_Put(void *, void *);
void WfcList_PushFront(WfcListNode *head, WfcListNode *node);
void WfcList_PushBack(WfcListNode *head, WfcListNode *node);
void WfcList_InsertBefore(WfcListNode *head, WfcListNode *node);
void WfcList_Remove(WfcListNode *node);
WfcListNode *WfcList_Create();
void Fatal_Trap();
s32 OS_DisableIrqMask(s32);
s32 OS_EnableIrqMask(s32);
void WfcVram_FreeObjChar(WfcListNode *p);
WfcVramBlock *WfcVram_AllocObjChar(s32 idx, s32 size, s32 flag, u32 *out);
void WfcVram_Init();
}

extern "C" Unk_ov001_0222df74 *sWfcVram = 0;

#pragma thumb off

void WfcVram_Init()
{
#define Unk_ov001_02226b60_R (*(Unk_ov001_022269e0_Rec *)((u8 *)sWfcVram + off))
    s32 i;
    u32 off;
    sWfcVram = (Unk_ov001_0222df74 *)WfcHeap_AllocClear(0x340, 4);
    for (i = 0, off = 0; i < 2; i++, off += 0x1a0) {
        Unk_ov001_02226b60_R.nodePool = WfcPool_CreateFrom(0x20, &Unk_ov001_02226b60_R, 0xc);
        Unk_ov001_02226b60_R.list = WfcList_Create();
        Unk_ov001_02226b60_R.headNode.blockStart = 0x300;
        Unk_ov001_02226b60_R.tailNode.blockStart = 0x400;
        WfcList_PushFront(Unk_ov001_02226b60_R.list, (WfcListNode *)&Unk_ov001_02226b60_R.headNode);
        WfcList_PushBack(Unk_ov001_02226b60_R.list, (WfcListNode *)&Unk_ov001_02226b60_R.tailNode);
    }
#undef Unk_ov001_02226b60_R
}

WfcVramBlock *WfcVram_AllocObjChar(s32 idx, s32 size, s32 flag, u32 *out)
{
    WfcVramBlock *blk;
    WfcVramBlock *cur;
    WfcVramBlock *end;
    Unk_ov001_0222df74 *base;
    s32 words;
    s32 old;
    s32 start;
    u32 off = idx * 0x1a0;
    blk = (WfcVramBlock *)WfcPool_Get(((Unk_ov001_022269e0_Rec *)((u8 *)sWfcVram + off))->nodePool);
    words = (size + 3) & ~3;
    words >>= 2;
    blk->blockSize = words;
    old = OS_DisableIrqMask(1);
    if (flag != 0) {
        base = sWfcVram;
        cur = &base->heaps[idx].headNode;
        if (cur != &base->heaps[idx].tailNode) {
            do {
                WfcVramBlock *nx = cur->next;
                start = cur->blockStart + cur->blockSize;
                if (start + words <= nx->blockStart) {
                    blk->blockStart = start;
                    WfcList_InsertBefore((WfcListNode *)nx, (WfcListNode *)blk);
                    break;
                }
                cur = nx;
            } while (cur != (WfcVramBlock *)((u8 *)base + off + 0x18c));
        }
        if (cur == (WfcVramBlock *)((u8 *)sWfcVram + off + 0x18c)) Fatal_Trap();
    } else {
        base = sWfcVram;
        cur = &base->heaps[idx].tailNode;
        if (cur != &base->heaps[idx].headNode) {
            do {
                WfcVramBlock *nx = cur->prev;
                start = cur->blockStart - words;
                if (start >= nx->blockStart + nx->blockSize) {
                    blk->blockStart = start;
                    WfcList_InsertBefore((WfcListNode *)cur, (WfcListNode *)blk);
                    break;
                }
                cur = nx;
            } while (cur != (WfcVramBlock *)((u8 *)base + off + 0x180));
        }
        if (cur == (WfcVramBlock *)((u8 *)sWfcVram + off + 0x180)) Fatal_Trap();
    }
    *out = blk->blockStart;
    OS_EnableIrqMask(old);
    return blk;
}

void WfcVram_FreeObjChar(WfcListNode *p)
{
    s32 z = 0;
    WfcList_Remove(p);
    Unk_ov001_0222df74 *b = sWfcVram;
    if ((u32)p >= (u32)b + 0x1a0) z = 1;
    WfcPool_Put(b->heaps[z].nodePool, p);
}

