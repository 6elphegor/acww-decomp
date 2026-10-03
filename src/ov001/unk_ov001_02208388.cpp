// mwcc-flags: -O4,p
#include "types.h"

typedef void (*Unk_ov001_02208594_Fn)(void *, s32, u32);

extern "C" {
extern void *data_ov001_0222de1c;

extern void DC_FlushRange(void *, u32);
extern void *func_0212a2ec(void *, void *, u32);

extern void *func_ov001_0222558c(s32, s32);
extern void *func_ov001_0220cc10(void *, s32);
extern u32 func_ov001_0220c5e0();
extern void func_ov001_02225254(void *, u32, u32, u32, u32, s32, u32, void *);
extern void func_ov001_0222516c(void *);
extern void func_ov001_022253a8(void *, u32, u32, s32, s32, s32);
extern void func_ov001_0220c62c(void *, void *);
extern s32 func_ov001_02208144(s32);
extern s32 func_ov001_0221f584(s32);
extern s32 func_ov001_0221efb0(s32);
extern void *func_ov001_02224074(void *, void *, u32);
extern void func_ov001_02224038(void *);

s32 func_ov001_02208594(void *a, Unk_ov001_02208594_Fn fn);
u8 *func_ov001_022085e0(u8 *p);
u32 func_ov001_02208388();
}

extern "C" const u8 data_ov001_02229b7c[8] = {0x6a, 0x65, 0x66, 0x67, 0x69, 0x73, 0, 0};
extern "C" const u16 data_ov001_02229b84[4] = {0x0d, 0x28, 0xe6, 0x70};
extern "C" const u16 data_ov001_02229b8c[4] = {0x0d, 0x3c, 0xe6, 0x5e};
extern "C" const u32 data_ov001_02229b94[6] = {0x480, 0x280, 0x280, 0x280, 0x280, 0x280};
extern "C" const u16 data_ov001_02229bac[12] = {0x6b, 0x22, 0x6c, 0x22, 0x7c, 0x22, 0x5d, 0x22, 0x5f, 0x22, 0x7d, 0x22};
extern "C" {
u8 data_ov001_0222dd90[0x40];
}

#pragma thumb off

extern "C" u8 *func_ov001_022085e0(u8 *p) {
    func_0212a2ec(data_ov001_0222dd90, p, 0x3f);
    if (p[5] == 0x78) return data_ov001_0222dd90;
    u32 r = func_ov001_0220c5e0();
    if (p[5] == 0x79) {
        if (r != 0) return data_ov001_0222dd90;
    }
    data_ov001_0222dd90[5] = data_ov001_02229b7c[r];
    return data_ov001_0222dd90;
}

extern "C" s32 func_ov001_02208594(void *a, Unk_ov001_02208594_Fn fn) {
    u32 sz;
    void *h = func_ov001_02224074(func_ov001_022085e0((u8 *)a), &sz, 4);
    DC_FlushRange(h, sz);
    fn(h, 0, sz);
    func_ov001_02224038(h);
}

extern "C" void func_ov001_02208538(s32 a) {
    u32 out;
    func_ov001_0220c62c(&out, 0);
    if (out == 1) func_ov001_0221f584(a);
    else if (out == 2) func_ov001_0221efb0(a);
}

extern "C" void func_ov001_022084f8(s32 a) {
    u32 out;
    func_ov001_0220c62c(0, &out);
    if (out == 1) func_ov001_02208144(a);
}

extern "C" void func_ov001_02208478(s32 a) {
    void *r5 = func_ov001_0222558c(0, 0);
    void *r4 = func_ov001_0220cc10(data_ov001_0222de1c, a);
    u32 t = func_ov001_02208388();
    const u16 *s = data_ov001_02229b84;
    func_ov001_02225254(r5, s[0], s[1], s[2], s[3], 2, t, r4);
    func_ov001_0222516c(r5);
}

extern "C" void func_ov001_022083ac(s32 a, s32 b) {
    void *r4 = func_ov001_0222558c(0, 0);
    void *r6 = func_ov001_0220cc10(data_ov001_0222de1c, b);
    u32 t = func_ov001_02208388();
    const u16 *s = data_ov001_02229b8c;
    func_ov001_02225254(r4, s[0], s[1], s[2], s[3], 2, t, r6);
    u32 i = func_ov001_0220c5e0();
    u32 j = func_ov001_0220c5e0();
    func_ov001_022253a8(r4, data_ov001_02229bac[i * 2], ((const u16 *)((const u8 *)data_ov001_02229bac + 2))[j * 2], 2, 0x209, a);
    func_ov001_0222516c(r4);
}

extern "C" u32 func_ov001_02208388() {
    return data_ov001_02229b94[func_ov001_0220c5e0()];
}

#pragma thumb reset
