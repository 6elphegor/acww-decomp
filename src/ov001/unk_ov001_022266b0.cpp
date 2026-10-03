// mwcc-flags: -O4,p
#include "types.h"

struct Unk_ov001_02226778_Node {
    Unk_ov001_02226778_Node *unk_00;
    Unk_ov001_02226778_Node *unk_04;
};

struct Unk_ov001_0222df70 {
    u8 pad_000[0x800];
    void *unk_800[2];
    void *unk_808;
};

extern "C" {
void func_ov001_02225d58(void *);
void *func_ov001_02225dd8(s32, s32);
void *func_ov001_02224ca0(void *);
void *func_ov001_02224d84(s32, void *, s32);
void func_ov001_02224cfc(void *, void *);
void func_ov001_02226fd0(s32, void *);
void *func_ov001_02227094(s32, void *, s32, s32);
s32 OS_DisableIrqMask(s32);
s32 OS_EnableIrqMask(s32);
void DC_FlushRange(void *, u32);
void GX_LoadOAM(void *, s32, u32);
void GXS_LoadOAM(void *, s32, u32);
void MIi_CpuCopy32(void *, void *, u32);
void MIi_CpuClearFast(u32, void *, u32);
void func_ov001_022266b0(Unk_ov001_02226778_Node *head, Unk_ov001_02226778_Node *node);
void func_ov001_022266c0(Unk_ov001_02226778_Node *head, Unk_ov001_02226778_Node *node);
void func_ov001_022266d0(Unk_ov001_02226778_Node *head, Unk_ov001_02226778_Node *node);
void func_ov001_02226710(Unk_ov001_02226778_Node *node);
void func_ov001_02226754(void *a, ...);
Unk_ov001_02226778_Node *func_ov001_02226778();
u8 *func_ov001_022267b0(s32 a, s32 b);
void func_ov001_022267c8(u32 *p);
void *func_ov001_02226814(s32 idx, void *dst);
void func_ov001_0222685c();
void func_ov001_02226890();
void func_ov001_022268e4();
}

extern "C" Unk_ov001_0222df70 *data_ov001_0222df70 = 0;

#pragma thumb off

void func_ov001_022268e4()
{
    volatile u32 v;
    Unk_ov001_0222df70 *b = (Unk_ov001_0222df70 *)func_ov001_02225dd8(0x80c, 4);
    s32 i;
    data_ov001_0222df70 = b;
    v = 0x200;
    MIi_CpuClearFast(v, b, 0x800);
    for (i = 0; i < 2; i++) {
        data_ov001_0222df70->unk_800[i] = func_ov001_02224d84(0x40, (u8 *)data_ov001_0222df70 + i * 0x400, 8);
    }
    data_ov001_0222df70->unk_808 = func_ov001_02227094(1, (void *)func_ov001_02226890, 0, 0xc8);
}

void func_ov001_02226890()
{
    DC_FlushRange(data_ov001_0222df70, 0x800);
    GX_LoadOAM(data_ov001_0222df70, 0, 0x400);
    GXS_LoadOAM((u8 *)data_ov001_0222df70 + 0x400, 0, 0x400);
}

void func_ov001_0222685c()
{
    func_ov001_02226fd0(1, data_ov001_0222df70->unk_808);
    func_ov001_02225d58(&data_ov001_0222df70);
}

void *func_ov001_02226814(s32 idx, void *dst)
{
    void *r = func_ov001_02224ca0(data_ov001_0222df70->unk_800[idx]);
    MIi_CpuCopy32(dst, r, 8);
    return r;
}

void func_ov001_022267c8(u32 *p)
{
    s32 z = 0;
    *p = (*p & 0xc1fffcff) | 0x200;
    if ((u32)p >= (u32)data_ov001_0222df70 + 0x400) z = 1;
    func_ov001_02224cfc(data_ov001_0222df70->unk_800[z], p);
}

u8 *func_ov001_022267b0(s32 a, s32 b)
{
    return (u8 *)data_ov001_0222df70 + (a << 10) + (b << 3);
}

Unk_ov001_02226778_Node *func_ov001_02226778()
{
    Unk_ov001_02226778_Node *n = (Unk_ov001_02226778_Node *)func_ov001_02225dd8(0x10, 4);
    n[0].unk_00 = 0;
    n[0].unk_04 = &n[1];
    n[1].unk_00 = n;
    n[1].unk_04 = 0;
    return n;
}

void func_ov001_02226754(void *a, ...)
{
    func_ov001_02225d58(&a);
}

void func_ov001_02226710(Unk_ov001_02226778_Node *node)
{
    s32 old = OS_DisableIrqMask(1);
    node->unk_00->unk_04 = node->unk_04;
    node->unk_04->unk_00 = node->unk_00;
    node->unk_00 = node->unk_04 = 0;
    OS_EnableIrqMask(old);
}

void func_ov001_022266d0(Unk_ov001_02226778_Node *head, Unk_ov001_02226778_Node *node)
{
    s32 old = OS_DisableIrqMask(1);
    head->unk_00->unk_04 = node;
    node->unk_00 = head->unk_00;
    node->unk_04 = head;
    head->unk_00 = node;
    OS_EnableIrqMask(old);
}

void func_ov001_022266c0(Unk_ov001_02226778_Node *head, Unk_ov001_02226778_Node *node)
{
    func_ov001_022266d0(head + 1, node);
}

void func_ov001_022266b0(Unk_ov001_02226778_Node *head, Unk_ov001_02226778_Node *node)
{
    func_ov001_022266d0(head->unk_04, node);
}

