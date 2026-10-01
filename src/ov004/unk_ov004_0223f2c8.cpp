// mwcc-version: 1.2/base
#include "types.h"

// Static tile entries built by __sinit (ctor = main func_020b4f8c, dtor = main func_020b4fc0).
struct Unk_ov004_Vec3 {
    s32 x, y, z;
};

extern "C" void func_020b4f8c(void *e, u8 id, Unk_ov004_Vec3 *v, u32 w, s16 s, u8 p, u8 q, s16 r, u8 t);

struct Unk_020b4fc0 {
    u8 type;
    u8 flag;
    s16 unk_02;
    Unk_ov004_Vec3 pos;
    u32 unk_10;
    u8 unk_14;
    u8 unk_15;
    s16 unk_16;
    u8 unk_18;
    Unk_020b4fc0(u8 id, const Unk_ov004_Vec3 &v, u32 w, s16 s, u8 p, u8 q, s16 r, u8 t) {
        func_020b4f8c(this, id, (Unk_ov004_Vec3 *)&v, w, s, p, q, r, t);
    }
    ~Unk_020b4fc0();
};

struct Unk_ov004_Vec3C : Unk_ov004_Vec3 {
    Unk_ov004_Vec3C(s32 a, s32 b, s32 c) {
        x = a;
        y = b;
        z = c;
    }
};

extern "C" {
extern void *data_021c6210;
// linker-provided absolute symbol (overlay id 93), no relocation in the original
extern u32 OVERLAY_93_ID[];

// ov093 methods of Unk_ov093_022918e0, called through their real symbols (object passed first)
s32 _ZN18Unk_ov093_022918e013func_02291dd8Ev(void *self);
void _ZN18Unk_ov093_022918e013func_02291de4Ev(void *self);
void _ZN18Unk_ov093_022918e013func_02291e6cEi(void *self, s32 a);
void _ZN18Unk_ov093_022918e013func_02291f5cEv(void *self);
void _ZN18Unk_ov093_022918e013func_02291f70Ev(void *self);
void _ZN18Unk_ov093_022918e013func_02291ff0Ev(void *self);
void _ZN18Unk_ov093_022918e013func_0229212cEv(void *self);
void _ZN18Unk_ov093_022918e0D1Ev(void *self);
void _ZN18Unk_ov093_022918e0C1Ev(void *self);
#define func_ov093_02291dd8 _ZN18Unk_ov093_022918e013func_02291dd8Ev
#define func_ov093_02291de4 _ZN18Unk_ov093_022918e013func_02291de4Ev
#define func_ov093_02291e6c _ZN18Unk_ov093_022918e013func_02291e6cEi
#define func_ov093_02291f5c _ZN18Unk_ov093_022918e013func_02291f5cEv
#define func_ov093_02291f70 _ZN18Unk_ov093_022918e013func_02291f70Ev
#define func_ov093_02291ff0 _ZN18Unk_ov093_022918e013func_02291ff0Ev
#define func_ov093_0229212c _ZN18Unk_ov093_022918e013func_0229212cEv
#define func_ov093_02292174 _ZN18Unk_ov093_022918e0D1Ev
#define func_ov093_022921b8 _ZN18Unk_ov093_022918e0C1Ev
void func_020e85fc(void *heap, void *p);
void *func_020e8608(void *heap, u32 size);
void func_0204eee4(u32 id);
void func_0204ef2c(u32 id);
}

extern "C" {

extern u8 data_ov004_02258910;
extern void *data_ov004_02258914;

void func_ov004_0223f3f4(void) {
    func_0204ef2c((u32)OVERLAY_93_ID);
    data_ov004_02258914 = func_020e8608(data_021c6210, 0x1fc4);
    if (data_ov004_02258914) {
        func_ov093_022921b8(data_ov004_02258914);
    }
    func_ov093_0229212c(data_ov004_02258914);
    data_ov004_02258910 = 1;
}

void func_ov004_0223f3cc(void) {
    if (data_ov004_02258910 & 1) {
        func_ov093_02291ff0(data_ov004_02258914);
    }
}

void func_ov004_0223f3a4(void) {
    if (data_ov004_02258910 & 1) {
        func_ov093_02291f70(data_ov004_02258914);
    }
}

void func_ov004_0223f350() {
    if (data_ov004_02258910 & 1) {
        func_ov093_02291f5c(data_ov004_02258914);
        void *heap = data_021c6210;
        func_ov093_02292174(data_ov004_02258914);
        func_020e85fc(heap, data_ov004_02258914);
        data_ov004_02258914 = 0;
        func_0204eee4((u32)OVERLAY_93_ID);
    }
    data_ov004_02258910 = 0;
}

void func_ov004_0223f31c(s32 a) {
    if (data_ov004_02258910 & 1) {
        if (a <= 0) a = 0x1400;
        func_ov093_02291e6c(data_ov004_02258914, a);
    }
}

void func_ov004_0223f2f4() {
    if (data_ov004_02258910 & 1) func_ov093_02291de4(data_ov004_02258914);
}

s32 func_ov004_0223f2c8() {
    if (data_ov004_02258910 & 1) return func_ov093_02291dd8(data_ov004_02258914);
    return 0;
}

}

// file-scope objects (the static initialiser); the definition order sets the data/bss order
extern Unk_020b4fc0 data_ov004_0225893c;

u8 data_ov004_02258910;
void *data_ov004_02258914;
// {pointer to the first static entry, count}
Unk_020b4fc0 *data_ov004_0224f2cc = &data_ov004_0225893c;
extern "C" u32 data_ov004_0224f2d0 = 3;  // unreferenced: kept by its symbols.txt name
Unk_020b4fc0 data_ov004_0225893c(1, Unk_ov004_Vec3C(0xf000, 0x200, 0x1d000), 0x11000000, 0x4000, 2, 2, -0x4000, 2);
u32 data_ov004_0224f2d4 = 0x11;
Unk_020b4fc0 data_ov004_02258958(5, Unk_ov004_Vec3C(0x11000, 0x200, 0x1d000), 0x11000000, -0x4000, 2, 2, 0x4000, 2);
Unk_020b4fc0 data_ov004_02258974(0x3e, Unk_ov004_Vec3C(0, 0, 0), 0x800000, 0, 2, 2, 0, 0);
// list of 17 ids
u32 data_ov004_0224f2d8[17] = {0xc9, 0xca, 0xe, 0x7, 0x8c, 0x8e, 0xc6, 0x8b, 0xd6, 0xc5, 0x89, 0xd5, 0xbf, 0xd1, 0xd2, 0x8d, 0x2a};
