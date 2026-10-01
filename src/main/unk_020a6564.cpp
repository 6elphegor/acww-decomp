#include "types.h"

// TU198: 0x020a6564-0x020a65fc. Dispatches received records to two handlers through a table in .rodata
// (0x020d07a8-0x020d07b0).

struct Unk_020cbb18 {
    u8 pad_00[0x104];
    u8 *unk_104;
    u8 pad_108[8];
    u8 *unk_110;

    void func_020724c4();
    u32 func_020724d8();
};

extern "C" {
void func_02116048(const void *src, void *dst, u32 n);
s32 func_020b50e8();
void func_02084040();
}

extern Unk_020cbb18 *data_020cbb18;

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
    func_020b50e8();
    func_02116048(p, &v, 1);
    if (v != 0) {
        func_02084040();
    }
}

extern "C" void func_020a6564() {
    Unk_020cbb18 *g = data_020cbb18;
    Unk_020cbb18 *sg = g;
    u8 *p = (u8 *)g->func_020724d8();
    Unk_020a647c_Buf b;
    u32 n;
    func_02116048(p, &b.total, 2);
    u32 total = b.total;
    n = 0;
    p += 2;
    n += 2;
    while (n < total) {
        func_02116048(p, &b.len, 4);
        p += 4;
        n += 4;
        u32 len = b.len;
        u32 id = *(volatile u8 *)&b.id;
        data_020d07a8[id](p, len);
        p += len;
        n += len;
    }
    sg->func_020724c4();
}
