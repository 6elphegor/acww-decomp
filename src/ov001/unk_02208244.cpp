// mwcc-flags: -O4,p
#include "types.h"

typedef void (*Unk_ov001_02208594_Fn)(void *, s32, u32);

extern "C" {
extern u8 data_ov001_0222dd8c;
extern u8 data_ov001_0222dd90[];
extern u32 data_ov001_02229b94[];
extern u8 data_ov001_02229b7c[];
extern void *data_ov001_0222de1c;
extern u16 data_ov001_02229b74[];
extern u16 data_ov001_02229b8c[];
extern u16 data_ov001_02229b84[];
extern u16 data_ov001_02229bac[];
extern u16 data_ov001_02229bae[];
extern u8 data_ov001_0222a5fc[];
extern u8 data_ov001_0222a830[];
extern void *data_ov001_0222a7e0[];
extern void **data_ov001_0222ddd0;
extern u8 *data_ov001_0222ddd4;
extern u8 data_ov001_02229bc4[];
extern u16 data_ov001_02229bcc[];
extern u8 data_ov001_02229bd0[];
struct Unk_ov001_02208a24_Reg { u32 w0; u16 h4; };
struct Unk_ov001_02208a24_Obj { Unk_ov001_02208a24_Reg *reg; u32 unk_04; s8 unk_08; };
extern Unk_ov001_02208a24_Obj *data_ov001_0222ddd8;


extern void func_02111ba4(void *, s32, u32);
extern void func_02111b3c(void *, s32, u32);
extern void func_021117fc(void *, s32, u32);
extern void func_021145cc(void *, u32);
extern void func_02115ef4(void *, void *, u32);
extern void *func_0212a2ec(void *, void *, u32);
extern u32 func_0211f800();
extern u32 func_0211f73c();

extern void func_ov001_022253d4(s32);
extern void *func_ov001_0222558c(s32, s32);
extern void *func_ov001_0220cbd0(void *, s32, s32, s32);
extern void *func_ov001_0220cc10(void *, s32);
extern u32 func_ov001_0220c5e0();
extern u32 func_ov001_0220c5c8();
extern void func_ov001_02225254(void *, u32, u32, u32, u32, s32, u32, void *);
extern void func_ov001_0222516c(void *);
extern void func_ov001_022253a8(void *, u32, u32, s32, s32, s32);
extern void func_ov001_0220c62c(void *, void *);
extern s32 func_ov001_02208144(s32);
extern s32 func_ov001_0221f584(s32);
extern s32 func_ov001_0221efb0(s32);
extern void *func_ov001_02224074(void *, void *, u32);
extern void func_ov001_02224038(void *);
extern void func_ov001_022247e0(void *);
extern void *func_ov001_02224b14(s32, s32, s32);
extern void func_ov001_022244d8(void *, s32, s32);
extern void func_ov001_02224558(void *, s32, s32, s32);
extern void func_ov001_02225d58(void *);
extern void *func_ov001_02225db0(s32, s32);
extern void *func_ov001_02225dd8(s32, s32);
extern void func_ov001_02226fdc(s32, s32);
extern void func_ov001_02227094(s32, void *, s32, s32);
extern u8 *func_ov001_0221e8b4();
extern void func_ov001_02224b9c(s32, u32, u32);
extern void func_ov001_02226fd0(s32, u32);
extern void func_ov001_022267c8(u32);

s32 func_ov001_02208594(void *a, Unk_ov001_02208594_Fn fn);
u8 *func_ov001_022085e0(u8 *p);
void func_ov001_0220864c();
s32 func_ov001_0220891c(s32 n);
u32 func_ov001_02208388();
void func_ov001_02208890(s32 a);

#pragma thumb off

s32 func_ov001_02208244() {
    if (data_ov001_0222dd8c == 0) return 0;
    func_ov001_022253d4(1);
    data_ov001_0222dd8c = 0;
    return 1;
}

s32 func_ov001_02208290(s32 a, s32 b, s32 c) {
    void *r4, *r5;
    if (data_ov001_0222dd8c != 0) return 0;
    func_ov001_02208594(data_ov001_0222a5fc, func_02111ba4);
    *(volatile u32 *)0x4001010 = 0x1920000;
    r4 = func_ov001_0222558c(1, 0);
    r5 = func_ov001_0220cbd0(data_ov001_0222de1c, a, b, c);
    u32 t = func_ov001_02208388();
    u16 *s = data_ov001_02229b74;
    func_ov001_02225254(r4, s[0], s[1], s[2], s[3], 2, t, r5);
    func_ov001_0222516c(r4);
    data_ov001_0222dd8c = 1;
    return 1;
}

void func_ov001_02208374() {
    data_ov001_0222dd8c = 0;
}

u32 func_ov001_02208388() {
    return data_ov001_02229b94[func_ov001_0220c5e0()];
}

void func_ov001_022083ac(s32 a, s32 b) {
    void *r4 = func_ov001_0222558c(0, 0);
    void *r6 = func_ov001_0220cc10(data_ov001_0222de1c, b);
    u32 t = func_ov001_02208388();
    u16 *s = data_ov001_02229b8c;
    func_ov001_02225254(r4, s[0], s[1], s[2], s[3], 2, t, r6);
    u32 i = func_ov001_0220c5e0();
    u32 j = func_ov001_0220c5e0();
    func_ov001_022253a8(r4, data_ov001_02229bac[i * 2], data_ov001_02229bae[j * 2], 2, 0x209, a);
    func_ov001_0222516c(r4);
}

void func_ov001_02208478(s32 a) {
    void *r5 = func_ov001_0222558c(0, 0);
    void *r4 = func_ov001_0220cc10(data_ov001_0222de1c, a);
    u32 t = func_ov001_02208388();
    u16 *s = data_ov001_02229b84;
    func_ov001_02225254(r5, s[0], s[1], s[2], s[3], 2, t, r4);
    func_ov001_0222516c(r5);
}

void func_ov001_022084f8(s32 a) {
    u32 out;
    func_ov001_0220c62c(0, &out);
    if (out == 1) func_ov001_02208144(a);
}

void func_ov001_02208538(s32 a) {
    u32 out;
    func_ov001_0220c62c(&out, 0);
    if (out == 1) func_ov001_0221f584(a);
    else if (out == 2) func_ov001_0221efb0(a);
}

s32 func_ov001_02208594(void *a, Unk_ov001_02208594_Fn fn) {
    u32 sz;
    void *h = func_ov001_02224074(func_ov001_022085e0((u8 *)a), &sz, 4);
    func_021145cc(h, sz);
    fn(h, 0, sz);
    func_ov001_02224038(h);
}

u8 *func_ov001_022085e0(u8 *p) {
    func_0212a2ec(data_ov001_0222dd90, p, 0x3f);
    if (p[5] == 0x78) return data_ov001_0222dd90;
    u32 r = func_ov001_0220c5e0();
    if (p[5] == 0x79) {
        if (r != 0) return data_ov001_0222dd90;
    }
    data_ov001_0222dd90[5] = data_ov001_02229b7c[r];
    return data_ov001_0222dd90;
}

void func_ov001_0220864c() {
    s32 i;
    for (i = 0; i < 4; i++) {
        if (data_ov001_0222ddd0[i] != 0) {
            func_ov001_022247e0(data_ov001_0222ddd0[i]);
            data_ov001_0222ddd0[i] = 0;
        }
    }
}

void func_ov001_02208690(s32 a, s32 b, s32 c, s32 d) {
    s32 k = 6;
    s32 i;
    func_ov001_0220864c();
    for (i = 0; i < 4; i++, k++) {
        data_ov001_0222ddd0[i] = func_ov001_02224b14(0, k, 1);
        func_ov001_022244d8(data_ov001_0222ddd0[i], -1, 1);
    }
    func_ov001_02224558(data_ov001_0222ddd0[0], -1, a, c);
    func_ov001_02224558(data_ov001_0222ddd0[1], -1, b, c);
    func_ov001_02224558(data_ov001_0222ddd0[2], -1, a, d);
    func_ov001_02224558(data_ov001_0222ddd0[3], -1, b, d);
}

void func_ov001_02208780(s32 idx, s32 a, s32 b, s32 c) {
    s32 i;
    u8 *p;
    func_ov001_0220864c();
    p = &data_ov001_02229bc4[idx * 2];
    for (i = 0; i < 2; i++, p++) {
        data_ov001_0222ddd0[i] = func_ov001_02224b14(0, *p, 1);
        func_ov001_022244d8(data_ov001_0222ddd0[i], -1, 1);
    }
    func_ov001_02224558(data_ov001_0222ddd0[0], -1, a, c);
    func_ov001_02224558(data_ov001_0222ddd0[1], -1, b, c);
}

void func_ov001_02208840() {
    func_ov001_0220864c();
    func_ov001_02225d58(&data_ov001_0222ddd0);
}

void func_ov001_02208864() {
    data_ov001_0222ddd0 = (void **)func_ov001_02225db0(0x10, 4);
}

void func_ov001_02208890(s32 a) {
    func_021145cc(data_ov001_0222ddd4, 0xc0);
    func_02111b3c(data_ov001_0222ddd4, 0, 0xc0);
    func_ov001_02226fdc(1, a);
}

void func_ov001_022088d4() {
    func_ov001_0220891c(func_ov001_0221e8b4()[0xf4] + 2);
}

void func_ov001_022088f8() {
    func_ov001_0220891c(func_ov001_0221e8b4()[0xf4] + 5);
}

s32 func_ov001_0220891c(s32 n) {
    void *h = func_ov001_02224074(func_ov001_022085e0((u8 *)data_ov001_0222a7e0[n]), 0, 4);
    func_02115ef4(h, data_ov001_0222ddd4, 0xc0);
    func_ov001_02224038(h);
    func_ov001_02227094(1, (void *)func_ov001_02208890, 0, 0x78);
}

void func_ov001_0220897c() {
    func_ov001_02225d58(&data_ov001_0222ddd4);
}

void func_ov001_02208990() {
    data_ov001_0222ddd4 = (u8 *)func_ov001_02225dd8(0xc0, 4);
    func_ov001_02208594(data_ov001_0222a830, func_021117fc);
    switch (func_ov001_0220c5c8()) {
    case 0:
        func_ov001_02208594(data_ov001_0222a7e0[0], func_02111b3c);
        break;
    case 1:
        func_ov001_02208594(data_ov001_0222a7e0[1], func_02111b3c);
        break;
    }
}

void func_ov001_02208a24() {
    volatile u16 *ime = (volatile u16 *)0x4000208;
    u16 saved = *ime;
    u32 x = 0;
    *ime = 0;
    if (func_0211f800() != 0x8000) x = func_0211f73c();
    *ime;
    *ime = saved;
    u8 *q = data_ov001_02229bd0 + data_ov001_0222ddd8->unk_08 * 4;
    func_ov001_02224b9c(0, q[x], (u32)data_ov001_0222ddd8->reg);
    u16 *p = data_ov001_02229bcc;
    Unk_ov001_02208a24_Reg *r = data_ov001_0222ddd8->reg;
    r->w0 = (r->w0 & 0xfe00ff00) | (p[1] & 0xff) | ((p[0] & 0x1ff) << 16);
    r = data_ov001_0222ddd8->reg;
    r->h4 = (r->h4 & ~0xc00) | 0x800;
}

void func_ov001_02208af8() {
    if (data_ov001_0222ddd8 == 0) return;
    func_ov001_02226fd0(0, data_ov001_0222ddd8->unk_04);
    func_ov001_022267c8((u32)data_ov001_0222ddd8->reg);
    func_ov001_02225d58(&data_ov001_0222ddd8);
}

#pragma thumb reset
}
