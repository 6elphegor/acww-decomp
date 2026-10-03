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
void *func_ov001_02225db0(s32, s32);
void *func_ov001_02224ca0(void *);
void *func_ov001_02224d84(s32, void *, s32);
void func_ov001_02224cfc(void *, void *);
void func_ov001_022266b0(Unk_ov001_02226778_Node *head, Unk_ov001_02226778_Node *node);
void func_ov001_022266c0(Unk_ov001_02226778_Node *head, Unk_ov001_02226778_Node *node);
void func_ov001_022266d0(Unk_ov001_02226778_Node *head, Unk_ov001_02226778_Node *node);
void func_ov001_02226710(Unk_ov001_02226778_Node *node);
Unk_ov001_02226778_Node *func_ov001_02226778();
void func_0206d49c();
s32 OS_DisableIrqMask(s32);
s32 OS_EnableIrqMask(s32);
void func_ov001_02226994(Unk_ov001_02226778_Node *p);
Unk_ov001_022269e0_Node *func_ov001_022269e0(s32 idx, s32 size, s32 flag, u32 *out);
void func_ov001_02226b60();
}

extern "C" Unk_ov001_0222df74 *data_ov001_0222df74 = 0;

#pragma thumb off

void func_ov001_02226b60()
{
#define Unk_ov001_02226b60_R (*(Unk_ov001_022269e0_Rec *)((u8 *)data_ov001_0222df74 + off))
    s32 i;
    u32 off;
    data_ov001_0222df74 = (Unk_ov001_0222df74 *)func_ov001_02225db0(0x340, 4);
    for (i = 0, off = 0; i < 2; i++, off += 0x1a0) {
        Unk_ov001_02226b60_R.unk_19c = func_ov001_02224d84(0x20, &Unk_ov001_02226b60_R, 0xc);
        Unk_ov001_02226b60_R.unk_198 = func_ov001_02226778();
        Unk_ov001_02226b60_R.unk_180.unk_08 = 0x300;
        Unk_ov001_02226b60_R.unk_18c.unk_08 = 0x400;
        func_ov001_022266b0(Unk_ov001_02226b60_R.unk_198, (Unk_ov001_02226778_Node *)&Unk_ov001_02226b60_R.unk_180);
        func_ov001_022266c0(Unk_ov001_02226b60_R.unk_198, (Unk_ov001_02226778_Node *)&Unk_ov001_02226b60_R.unk_18c);
    }
#undef Unk_ov001_02226b60_R
}

Unk_ov001_022269e0_Node *func_ov001_022269e0(s32 idx, s32 size, s32 flag, u32 *out)
{
    Unk_ov001_022269e0_Node *blk;
    Unk_ov001_022269e0_Node *cur;
    Unk_ov001_022269e0_Node *end;
    Unk_ov001_0222df74 *base;
    s32 words;
    s32 old;
    s32 start;
    u32 off = idx * 0x1a0;
    blk = (Unk_ov001_022269e0_Node *)func_ov001_02224ca0(((Unk_ov001_022269e0_Rec *)((u8 *)data_ov001_0222df74 + off))->unk_19c);
    words = (size + 3) & ~3;
    words >>= 2;
    blk->unk_0a = words;
    old = OS_DisableIrqMask(1);
    if (flag != 0) {
        base = data_ov001_0222df74;
        cur = &base->unk_00[idx].unk_180;
        if (cur != &base->unk_00[idx].unk_18c) {
            do {
                Unk_ov001_022269e0_Node *nx = cur->unk_04;
                start = cur->unk_08 + cur->unk_0a;
                if (start + words <= nx->unk_08) {
                    blk->unk_08 = start;
                    func_ov001_022266d0((Unk_ov001_02226778_Node *)nx, (Unk_ov001_02226778_Node *)blk);
                    break;
                }
                cur = nx;
            } while (cur != (Unk_ov001_022269e0_Node *)((u8 *)base + off + 0x18c));
        }
        if (cur == (Unk_ov001_022269e0_Node *)((u8 *)data_ov001_0222df74 + off + 0x18c)) func_0206d49c();
    } else {
        base = data_ov001_0222df74;
        cur = &base->unk_00[idx].unk_18c;
        if (cur != &base->unk_00[idx].unk_180) {
            do {
                Unk_ov001_022269e0_Node *nx = cur->unk_00;
                start = cur->unk_08 - words;
                if (start >= nx->unk_08 + nx->unk_0a) {
                    blk->unk_08 = start;
                    func_ov001_022266d0((Unk_ov001_02226778_Node *)cur, (Unk_ov001_02226778_Node *)blk);
                    break;
                }
                cur = nx;
            } while (cur != (Unk_ov001_022269e0_Node *)((u8 *)base + off + 0x180));
        }
        if (cur == (Unk_ov001_022269e0_Node *)((u8 *)data_ov001_0222df74 + off + 0x180)) func_0206d49c();
    }
    *out = blk->unk_08;
    OS_EnableIrqMask(old);
    return blk;
}

void func_ov001_02226994(Unk_ov001_02226778_Node *p)
{
    s32 z = 0;
    func_ov001_02226710(p);
    Unk_ov001_0222df74 *b = data_ov001_0222df74;
    if ((u32)p >= (u32)b + 0x1a0) z = 1;
    func_ov001_02224cfc(b->unk_00[z].unk_19c, p);
}

