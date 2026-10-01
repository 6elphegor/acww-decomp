// mwcc-version: 1.2/base
#include "types.h"

// TU26 of ov003: the 0x80-byte table of eight 0x10-byte records (bss 0x0225b468)
struct Unk_ov003_0222e5e0_Rec {
    u32 a, b, c;
    s8 d;
    u8 e;
    u8 pad[2];
    Unk_ov003_0222e5e0_Rec() {}
    ~Unk_ov003_0222e5e0_Rec() {}
};

struct Unk_020cbb18_Ptr {
    u8 unk_00[0x64];
    u32 unk_64;
};

extern "C" {
extern Unk_020cbb18_Ptr *data_020cbb18;

BOOL func_020a62a0();
BOOL _ZN12Unk_020cbb1813func_02072e44Ev(void *g);
u8 *_ZN12Unk_020cbb1813func_02072970Ej(void *self, u32 a);
void func_02076a2c(void *p, s32 *a, s32 *b);
void func_02076a6c(void *p, s32 a, s32 b);
s32 func_020766e0(s32 a);
s32 func_02076280(s32 a, s32 b, s32 c, s32 d);
void func_02116048(void *, void *, s32);
}

Unk_ov003_0222e5e0_Rec data_ov003_0225b468[8];

extern "C" void _ZN18Unk_ov003_0222e708C2Ev() {}

extern "C" void _ZN18Unk_ov003_0222e708D2Ev() {}

extern "C" BOOL func_ov003_0222e694(s32 unused, s32 idx, s32 v, s32 *p, u8 e, s32 f) {
    if (func_020a62a0()) {
        if (_ZN12Unk_020cbb1813func_02072e44Ev(data_020cbb18)) {
            func_02076280(idx + 0x18, (s32)&f, 0, 0);
            s32 off = idx << 4;
            s8 *pd = &data_ov003_0225b468[0].d;
            u32 *pa = &data_ov003_0225b468[0].a;
            u32 *pb = &data_ov003_0225b468[0].b;
            u32 *pc = &data_ov003_0225b468[0].c;
            u8 *pe = &data_ov003_0225b468[0].e;
            pd[off] = v;
            *(u32 *)((u8 *)pa + off) = p[0];
            *(u32 *)((u8 *)pb + off) = p[1];
            *(u32 *)((u8 *)pc + off) = p[2];
            pe[off] = e;
            return TRUE;
        }
    }
    return FALSE;
}

extern "C" void func_ov003_0222e640(void *dst, s32 idx) {
    u32 off = (idx - 0x18) << 4;
    u8 rec[8];
    u32 *pa = &data_ov003_0225b468[0].a;
    u32 *pc = &data_ov003_0225b468[0].c;
    s8 *pd = &data_ov003_0225b468[0].d;
    u8 *pe = &data_ov003_0225b468[0].e;
    func_02076a6c(rec, *(s32 *)((u8 *)pa + off), *(s32 *)((u8 *)pc + off));
    rec[5] = pd[off];
    rec[6] = pe[off];
    func_02116048(rec, dst, func_020766e0(idx));
}

extern "C" BOOL func_ov003_0222e5e0(s32 a, s32 b, s8 *c, s32 *d, s32 *e, u8 *f) {
    if (!func_020a62a0()) {
        Unk_020cbb18_Ptr *g = data_020cbb18;
        if (_ZN12Unk_020cbb1813func_02072e44Ev(g)) {
            s8 *r = (s8 *)_ZN12Unk_020cbb1813func_02072970Ej(g, b + 0x18);
            if (r != 0) {
                func_02076a2c(r, d, e);
                if (*e > 0) {
                    *c = r[5];
                    *f = ((u8 *)r)[6];
                    return TRUE;
                }
            }
        }
    }
    return FALSE;
}
