#include "types.h"

// TU198: 0x020a6564-0x020a65fc. Dispatches received records to two handlers through a table in .rodata
// (0x020d07a8-0x020d07b0).

struct CommManager {
    u8 pad_00[0x104];
    u8 *unk_104;
    u8 pad_108[8];
    u8 *unk_110;

    void clearAuxLenA();
    u32 getAuxBufA();
};

extern "C" {
void MI_CpuCopy8(const void *src, void *dst, u32 n);
s32 Scene_GetCurrent();
void func_02084040();
}

extern CommManager *gCommManager;

struct Unk_020a647c_Buf {
    u16 total;
    u16 len;
    u8 id;
};

typedef void (*Unk_020a6564_Fn)(u8 *, u32);

extern "C" {
void func_020a65c8(u8 *p);
void func_020a65f8();
extern const Unk_020a6564_Fn data_020d07a8[2];
}

extern "C" const Unk_020a6564_Fn data_020d07a8[2] = {
    (Unk_020a6564_Fn)func_020a65f8,
    (Unk_020a6564_Fn)func_020a65c8,
};

extern "C" void func_020a65f8() {}

extern "C" void func_020a65c8(u8 *p) {
    u8 v = 0;
    Scene_GetCurrent();
    MI_CpuCopy8(p, &v, 1);
    if (v != 0) {
        func_02084040();
    }
}

extern "C" void func_020a6564() {
    CommManager *g = gCommManager;
    CommManager *sg = g;
    u8 *p = (u8 *)g->getAuxBufA();
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
        data_020d07a8[id](p, len);
        p += len;
        n += len;
    }
    sg->clearAuxLenA();
}
