// mwcc-flags: -O4,p
#include "types.h"

#pragma thumb off

struct Unk_ov001_02224670 {
    Unk_ov001_02224670 *unk_00;
    Unk_ov001_02224670 *unk_04;
    void *unk_08;
    u8 unk_0c;
};

struct Unk_ov001_02224ca0 {
    u16 unk_00;
    u8 unk_02;
    u8 unk_03;
    void *unk_04[1];
};

struct Unk_ov001_0222df40 {
    s32 unk_00;
    s16 unk_04;
    u16 unk_06;
    u8 unk_08;
    u8 unk_09;
    u8 pad_0a[2];
};

struct Unk_ov001_02224ff8_Four {
    u8 v[4];
};

extern "C" {
s32 OS_DisableIrqMask(s32);
void OS_EnableIrqMask(s32);
s32 FX_ModS32(s32, s32);
s32 FX_DivS32(s32, s32);
void G2x_ChangeBlendBrightness_(u32, s32);
s32 G2x_SetBlendBrightness_(void *, s32, s32);
void Fatal_Trap();
void *func_ov001_02225db0(u32, u32);
void *func_ov001_02225dd8(u32, u32);
void func_ov001_02225d58(void *);
s32 func_ov001_02226fdc(s32, s32);
s32 func_ov001_02227094(s32, void *, void *, s32);

Unk_ov001_02224670 *func_ov001_02224ca0(Unk_ov001_02224ca0 *r);
void func_ov001_02224cfc(Unk_ov001_02224ca0 *r, void *v);
void func_ov001_02224d60(void *a, ...);
Unk_ov001_02224ca0 *func_ov001_02224d84(s32 count, u8 *base, u32 stride);
Unk_ov001_02224ca0 *func_ov001_02224dc8(s32 count);
void func_ov001_02224e00(s32 a, Unk_ov001_0222df40 *st);
s32 func_ov001_02224e4c(u32 v);
void func_ov001_02224eb8(s32 a, Unk_ov001_0222df40 *st);
u32 func_ov001_02224ff8(u32 idx, u32 mode, s32 val, u32 h);
u8 func_ov001_022250e0(u32 mode);
void func_ov001_02225104();
void func_ov001_02225118();

Unk_ov001_0222df40 *data_ov001_0222df40;
}

extern "C" u8 data_ov001_0222b884[4] = {0x11, 0x10, 0x01, 0x00};
extern "C" u8 data_ov001_0222b880[4] = {0x00, 0xf0, 0x00, 0x10};
extern "C" Unk_ov001_02224ff8_Four data_ov001_0222b888 = {{0xf0, 0x00, 0x10, 0x00}};

void func_ov001_02225118() {
    data_ov001_0222df40 = (Unk_ov001_0222df40 *)func_ov001_02225db0(0x18, 4);
    G2x_SetBlendBrightness_((void *)0x4000050, 0x3f, 0x10);
    G2x_SetBlendBrightness_((void *)0x4001050, 0x3f, 0x10);
}

void func_ov001_02225104() {
    func_ov001_02225d58(&data_ov001_0222df40);
}

u8 func_ov001_022250e0(u32 mode) {
    Unk_ov001_0222df40 *p;
    if (mode == 1) {
        p = data_ov001_0222df40;
    } else {
        p = (Unk_ov001_0222df40 *)((u8 *)data_ov001_0222df40 + 0xc);
    }
    return p->unk_09;
}

u32 func_ov001_02224ff8(u32 idx, u32 mode, s32 val, u32 h) {
    Unk_ov001_02224ff8_Four arr = data_ov001_0222b888;
    Unk_ov001_0222df40 *p = mode == 1 ? data_ov001_0222df40 : (Unk_ov001_0222df40 *)((u8 *)data_ov001_0222df40 + 0xc);
    if (p->unk_09 != 0) {
        return 0;
    }
    if (mode == 1) {
        G2x_SetBlendBrightness_((void *)0x4001050, val, ((s8 *)arr.v)[idx]);
    } else {
        G2x_SetBlendBrightness_((void *)0x4000050, val, ((s8 *)arr.v)[idx]);
    }
    p->unk_00 = func_ov001_02227094(1, (void *)func_ov001_02224eb8, p, 0xc8);
    p->unk_04 = 0;
    p->unk_08 = idx;
    p->unk_06 = h;
    p->unk_09 = 1;
    return 1;
}

void func_ov001_02224eb8(s32 a, Unk_ov001_0222df40 *st) {
    s8 lo[4];
    s8 hi[4];
    lo[0] = data_ov001_0222b884[0];
    lo[1] = data_ov001_0222b884[1];
    lo[2] = data_ov001_0222b884[2];
    lo[3] = data_ov001_0222b884[3];
    hi[0] = data_ov001_0222b880[0];
    hi[1] = data_ov001_0222b880[1];
    hi[2] = data_ov001_0222b880[2];
    hi[3] = data_ov001_0222b880[3];
    st->unk_04 = st->unk_04 + 1;
    s32 r = FX_DivS32(st->unk_04 << 4, st->unk_06);
    u32 f = ((u8 *)lo)[st->unk_08];
    if (f & 1) r = 0x10 - r;
    if (f & 0x10) r = -r;
    if (st == data_ov001_0222df40) G2x_ChangeBlendBrightness_(0x4001050, r);
    else G2x_ChangeBlendBrightness_(0x4000050, r);
    if (st->unk_04 < st->unk_06) return;
    if (st == data_ov001_0222df40) G2x_ChangeBlendBrightness_(0x4001050, hi[st->unk_08]);
    else G2x_ChangeBlendBrightness_(0x4000050, hi[st->unk_08]);
    st->unk_09 = 0;
    func_ov001_02226fdc(1, a);
}

s32 func_ov001_02224e4c(u32 v) {
    Unk_ov001_0222df40 *s = data_ov001_0222df40;
    if (s->unk_09 != 0) return 0;
    s->unk_00 = func_ov001_02227094(1, (void *)func_ov001_02224e00, s, 200);
    s->unk_04 = 0;
    s->unk_06 = v;
    s->unk_09 = 1;
    return 1;
}

void func_ov001_02224e00(s32 a, Unk_ov001_0222df40 *st) {
    st->unk_04 = st->unk_04 + 1;
    if (st->unk_04 < st->unk_06) return;
    st->unk_09 = 0;
    func_ov001_02226fdc(1, a);
}

Unk_ov001_02224ca0 *func_ov001_02224dc8(s32 count) {
    Unk_ov001_02224ca0 *r = (Unk_ov001_02224ca0 *)func_ov001_02225dd8((count + 1) * 4 + 8, 4);
    r->unk_00 = count + 1;
    r->unk_02 = 0;
    r->unk_03 = 0;
    return r;
}

Unk_ov001_02224ca0 *func_ov001_02224d84(s32 count, u8 *base, u32 stride) {
    Unk_ov001_02224ca0 *r = func_ov001_02224dc8(count);
    s32 i;
    for (i = 0; i < count; i++) {
        r->unk_04[i] = base;
        base += stride;
    }
    r->unk_03 = count;
    return r;
}

void func_ov001_02224d60(void *a, ...) {
    func_ov001_02225d58(&a);
}

void func_ov001_02224cfc(Unk_ov001_02224ca0 *r, void *v) {
    s32 irq = OS_DisableIrqMask(1);
    u32 n = FX_ModS32(r->unk_03 + 1, r->unk_00);
    if (n == r->unk_02) Fatal_Trap();
    r->unk_04[r->unk_03] = v;
    r->unk_03 = n;
    OS_EnableIrqMask(irq);
}

Unk_ov001_02224670 *func_ov001_02224ca0(Unk_ov001_02224ca0 *r) {
    Unk_ov001_02224670 *res = 0;
    s32 irq = OS_DisableIrqMask(1);
    u32 t = r->unk_03;
    u32 h = r->unk_02;
    if (h != t) {
        r->unk_03 = FX_ModS32(t + r->unk_00 - 1, r->unk_00);
        res = (Unk_ov001_02224670 *)r->unk_04[r->unk_03];
    }
    OS_EnableIrqMask(irq);
    return res;
}

