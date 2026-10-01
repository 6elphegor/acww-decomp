#include "types.h"

extern "C" {
extern void *data_021c61d8;
extern u8 *data_020cbb18;
extern char data_021c651c[0x14];

void *func_020e8628(void *heap, s32 size, s32 align);
void func_020e885c(void *p);
void func_020e877c(void *p);
s32 func_020639e8(char *buf, const char *fmt, ...);
s32 func_020641b4(void *path, void *buf, s32 size);
s32 func_0205be04();
s32 func_0205be20();
s32 func_0205d418();
void *func_0205d420(u32 x);
void func_0205d3d0(u32 *arr);
}

struct Unk_0205d3a0 {
    u32 ptr[4];
    Unk_0205d3a0();
    ~Unk_0205d3a0();
    void *func_0205d3a0(u32 idx);
    void func_0205d3a8();
};

struct Unk_0205d340 {
    u8 v;
    Unk_0205d340();
    ~Unk_0205d340();
    void *func_0205d340();
    s32 func_0205d354(u32 idx);
    void func_0205d388(u32 x);
    void func_0205d38c(u32 x);
};

char data_021c651c[0x14];
Unk_0205d3a0 data_021c650c;

extern "C" void func_0205d458() {
    func_0205be20();
    func_0205d3d0(data_021c650c.ptr);
    if (data_021c61d8) {
        func_020e877c(data_021c61d8);
    }
}

extern "C" void func_0205d440() {
    data_021c650c.func_0205d3a8();
    func_0205be04();
}

extern "C" void *func_0205d420(u32 x) {
    func_020639e8(data_021c651c, "/PFcTx/%d/%d.nsbtx", x >> 5, x);
    return data_021c651c;
}

extern "C" s32 func_0205d418() { return 0x2e30; }

Unk_0205d3a0::Unk_0205d3a0() {}

Unk_0205d3a0::~Unk_0205d3a0() {}

extern "C" void func_0205d3d0(u32 *arr) {
    void *heap = data_021c61d8;
    u32 n = *(u8 *)(data_020cbb18 + 0x6c);
    u32 i;
    for (i = 0; i < n; i++) {
        arr[i] = (u32)func_020e8628(heap, func_0205d418(), 4);
    }
}

void Unk_0205d3a0::func_0205d3a8() {
    for (s32 i = 0; i < 4; i++) ptr[i] = 0;
    if (data_021c61d8) func_020e885c(data_021c61d8);
}

void *Unk_0205d3a0::func_0205d3a0(u32 idx) { return (void *)ptr[idx]; }

Unk_0205d340::Unk_0205d340() { v = 4; }

Unk_0205d340::~Unk_0205d340() {}

void Unk_0205d340::func_0205d38c(u32 x) { func_0205d388(x); }

void Unk_0205d340::func_0205d388(u32 x) { v = x; }

s32 Unk_0205d340::func_0205d354(u32 idx) {
    void *p = data_021c650c.func_0205d3a0(v);
    void *name = func_0205d420(idx);
    return func_020641b4(name, p, func_0205d418());
}

void *Unk_0205d340::func_0205d340() { return data_021c650c.func_0205d3a0(v); }
