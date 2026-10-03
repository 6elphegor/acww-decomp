#include "types.h"

struct CommManager {
    u8 pad_00[0x104];
    u8 *unk_104;
    u8 pad_108[8];
    u8 *unk_110;

    void setAuxLenB(u32 v);
    void clearAuxLenB();
    u32 getAuxBufB();
};

extern "C" {
void MI_CpuCopy8(const void *src, void *dst, u32 n);
s32 Scene_GetCurrent();
void func_020a64e0();
void func_020a6560();
}

extern CommManager *gCommManager;

extern void (*const data_020d07a0[1])(s32);
extern void (*const data_020d07a4[1])(u8 *, u32);

void (*const data_020d07a0[1])(s32) = {(void (*)(s32))func_020a6560};
void (*const data_020d07a4[1])(u8 *, u32) = {(void (*)(u8 *, u32))func_020a64e0};

struct Unk_020a647c_Buf {
    u16 total;
    u16 len;
    u8 id;
};

extern "C" void func_020a6560() {}

extern "C" void func_020a64e4() {
    CommManager *g = gCommManager;
    g->clearAuxLenB();
    u8 *base = (u8 *)g->getAuxBufB();
    u8 *p = base + 2;
    s32 m = Scene_GetCurrent();
    g->unk_110 = p + 4;
    u8 *start = g->unk_110;
    data_020d07a0[0](m);
    u8 *cur = g->unk_110;
    Unk_020a647c_Buf b;
    s32 diff = cur - start;
    if (diff != 0) {
        b.len = diff;
        b.id = 0;
        MI_CpuCopy8(&b.len, p, 4);
        p = cur;
    }
    s32 tot = p - base;
    b.total = tot - 2;
    MI_CpuCopy8(&b.total, base, 2);
    g->setAuxLenB(tot);
}

extern "C" void func_020a64e0() {}

extern "C" void func_020a647c() {
    CommManager *g = gCommManager;
    CommManager *sg = g;
    u8 *p = (u8 *)g->getAuxBufB();
    Unk_020a647c_Buf b;
    u32 n;
    MI_CpuCopy8(p, &b.total, 2);
    u32 total = b.total;
    n = 0;
    p += 2;
    n += 2;
    while (n < total) {
        MI_CpuCopy8(p, &b.len, 4);
        p += 4;
        n += 4;
        u32 len = b.len;
        u32 id = *(volatile u8 *)&b.id;
        data_020d07a4[id](p, len);
        p += len;
        n += len;
    }
    sg->clearAuxLenB();
}
