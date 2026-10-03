// mwcc-flags: -O4,p
#include "types.h"

struct Unk_ov001_02226778_Node {
    Unk_ov001_02226778_Node *unk_00;
    Unk_ov001_02226778_Node *unk_04;
};

struct Unk_ov001_022269e0_Node {
    Unk_ov001_022269e0_Node *unk_00;
    Unk_ov001_022269e0_Node *unk_04;
    u16 unk_08;
    u16 unk_0a;
};

struct Unk_ov001_022269e0_Rec {
    u8 pad_000[0x180];
    Unk_ov001_022269e0_Node unk_180;
    Unk_ov001_022269e0_Node unk_18c;
    Unk_ov001_02226778_Node *unk_198;
    void *unk_19c;
};

struct Unk_ov001_0222df74 {
    Unk_ov001_022269e0_Rec unk_00[2];
};

extern "C" {
void *WfcHeap_AllocClear(s32, s32);
void *WfcPool_Get(void *);
void *WfcPool_CreateFrom(s32, void *, s32);
void WfcPool_Put(void *, void *);
void WfcList_PushFront(Unk_ov001_02226778_Node *head, Unk_ov001_02226778_Node *node);
void WfcList_PushBack(Unk_ov001_02226778_Node *head, Unk_ov001_02226778_Node *node);
void WfcList_InsertBefore(Unk_ov001_02226778_Node *head, Unk_ov001_02226778_Node *node);
void WfcList_Remove(Unk_ov001_02226778_Node *node);
Unk_ov001_02226778_Node *WfcList_Create();
void Fatal_Trap();
s32 OS_DisableIrqMask(s32);
s32 OS_EnableIrqMask(s32);
void WfcVram_FreeObjChar(Unk_ov001_02226778_Node *p);
Unk_ov001_022269e0_Node *WfcVram_AllocObjChar(s32 idx, s32 size, s32 flag, u32 *out);
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
        Unk_ov001_02226b60_R.unk_19c = WfcPool_CreateFrom(0x20, &Unk_ov001_02226b60_R, 0xc);
        Unk_ov001_02226b60_R.unk_198 = WfcList_Create();
        Unk_ov001_02226b60_R.unk_180.unk_08 = 0x300;
        Unk_ov001_02226b60_R.unk_18c.unk_08 = 0x400;
        WfcList_PushFront(Unk_ov001_02226b60_R.unk_198, (Unk_ov001_02226778_Node *)&Unk_ov001_02226b60_R.unk_180);
        WfcList_PushBack(Unk_ov001_02226b60_R.unk_198, (Unk_ov001_02226778_Node *)&Unk_ov001_02226b60_R.unk_18c);
    }
#undef Unk_ov001_02226b60_R
}

Unk_ov001_022269e0_Node *WfcVram_AllocObjChar(s32 idx, s32 size, s32 flag, u32 *out)
{
    Unk_ov001_022269e0_Node *blk;
    Unk_ov001_022269e0_Node *cur;
    Unk_ov001_022269e0_Node *end;
    Unk_ov001_0222df74 *base;
    s32 words;
    s32 old;
    s32 start;
    u32 off = idx * 0x1a0;
    blk = (Unk_ov001_022269e0_Node *)WfcPool_Get(((Unk_ov001_022269e0_Rec *)((u8 *)sWfcVram + off))->unk_19c);
    words = (size + 3) & ~3;
    words >>= 2;
    blk->unk_0a = words;
    old = OS_DisableIrqMask(1);
    if (flag != 0) {
        base = sWfcVram;
        cur = &base->unk_00[idx].unk_180;
        if (cur != &base->unk_00[idx].unk_18c) {
            do {
                Unk_ov001_022269e0_Node *nx = cur->unk_04;
                start = cur->unk_08 + cur->unk_0a;
                if (start + words <= nx->unk_08) {
                    blk->unk_08 = start;
                    WfcList_InsertBefore((Unk_ov001_02226778_Node *)nx, (Unk_ov001_02226778_Node *)blk);
                    break;
                }
                cur = nx;
            } while (cur != (Unk_ov001_022269e0_Node *)((u8 *)base + off + 0x18c));
        }
        if (cur == (Unk_ov001_022269e0_Node *)((u8 *)sWfcVram + off + 0x18c)) Fatal_Trap();
    } else {
        base = sWfcVram;
        cur = &base->unk_00[idx].unk_18c;
        if (cur != &base->unk_00[idx].unk_180) {
            do {
                Unk_ov001_022269e0_Node *nx = cur->unk_00;
                start = cur->unk_08 - words;
                if (start >= nx->unk_08 + nx->unk_0a) {
                    blk->unk_08 = start;
                    WfcList_InsertBefore((Unk_ov001_02226778_Node *)cur, (Unk_ov001_02226778_Node *)blk);
                    break;
                }
                cur = nx;
            } while (cur != (Unk_ov001_022269e0_Node *)((u8 *)base + off + 0x180));
        }
        if (cur == (Unk_ov001_022269e0_Node *)((u8 *)sWfcVram + off + 0x180)) Fatal_Trap();
    }
    *out = blk->unk_08;
    OS_EnableIrqMask(old);
    return blk;
}

void WfcVram_FreeObjChar(Unk_ov001_02226778_Node *p)
{
    s32 z = 0;
    WfcList_Remove(p);
    Unk_ov001_0222df74 *b = sWfcVram;
    if ((u32)p >= (u32)b + 0x1a0) z = 1;
    WfcPool_Put(b->unk_00[z].unk_19c, p);
}

