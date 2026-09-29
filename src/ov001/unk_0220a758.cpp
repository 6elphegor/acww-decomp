// mwcc-flags: -O4,p
#include "types.h"

struct Unk_ov001_0220a7f0_Reg { u32 w0; u16 h4; };

struct Unk_ov001_0220a7f0_Pos {
    volatile u16 x, y, w, h;
    Unk_ov001_0220a7f0_Pos() { x = 0; y = 0; w = 0; h = 0; }
};

struct Unk_ov001_0220a7f0_H {
    u16 v;
    u16 v2;
    u16 v3;
    u16 v4;
    Unk_ov001_0220a7f0_H() { v = 0; v2 = 0; v3 = 0; v4 = 0; }
};

struct Unk_ov001_0222dddc {
    void *unk_000[3][4];
    Unk_ov001_0220a7f0_Reg *unk_030[0x2f];
    Unk_ov001_0220a7f0_Reg *unk_0ec[4];
    void *unk_0fc[2];
    void *unk_104[4];
    void *unk_114;
    void *unk_118;
    u8 unk_11c;
    u8 unk_11d;
    u8 pad_11e[3];
    u8 unk_121;
    u8 pad_122;
    u8 unk_123;
    u8 unk_124;
};

struct Unk_ov001_0222dde0 {
    void *unk_000[4];
    Unk_ov001_0220a7f0_Reg *unk_010[10];
    void *unk_038[2];
    void *unk_040[2];
    void *unk_048[4];
    void *unk_058;
    u8 pad_05c[7];
    s8 unk_063;
    s8 unk_064;
};

extern "C" {
extern Unk_ov001_0222dddc *data_ov001_0222dddc;
extern Unk_ov001_0222dde0 *data_ov001_0222dde0;
extern u16 data_ov001_02229bf4[];
extern u8 data_ov001_02229be8[];
extern u8 data_ov001_02229be0[];
extern u16 data_ov001_02229bec[];
extern u16 *data_ov001_0222a868[];
extern u16 data_ov001_02229f14[];
extern u16 data_ov001_02229f16[];
extern s8 data_ov001_02229f4c[][4];

extern void *func_ov001_02225db0(s32, s32);
extern Unk_ov001_0220a7f0_Reg *func_ov001_02224b60(s32, s32);
extern void *func_ov001_02224b14(s32, s32, s32);
extern void func_ov001_02224704(void *, s32, s32, s32);
extern void func_ov001_022244d8(void *, s32, s32);
extern void func_ov001_02224558(void *, s32, s32, s32);
extern void *func_ov001_02225748(s32, s32, s32, s32, void *, s32);
extern void func_ov001_02225254(void *, u32, u32, u32, u32, s32, u32, void *);
extern void *func_ov001_02224870(s32, s32, s32);
extern void *func_ov001_022247d4(void *, s32);
extern void func_ov001_022247e0(void *);
extern void func_ov001_02225718(void *);
extern void func_ov001_022267c8(void *);
extern void func_ov001_02225d58(void *);
extern void func_ov001_02226fdc(s32, s32);
extern void func_ov001_02226ffc(s32, void *);
extern u32 func_ov001_02227094(s32, void *, s32, s32);
extern void func_ov001_02209698(u32, s32, s32);
extern void func_ov001_02208f20();
extern void func_ov001_0220a6a0();
extern void func_ov001_0220b148(s32, s32);
extern void func_ov001_02224b9c(s32, u32, u32);
extern void func_ov001_0221e9a0(s32);
void func_ov001_0220afcc();
void func_ov001_0220aba4(s32);
void func_ov001_0220ac6c(s32);
void func_ov001_0220acec(s32);
void func_ov001_0220ad6c(s32);
void func_ov001_0220adec(s32);

#pragma thumb off

BOOL func_ov001_0220a758() {
    return data_ov001_0222dddc != NULL ? TRUE : FALSE;
}

void func_ov001_0220a774(u32 v) {
    data_ov001_0222dddc->unk_124 = v;
}

void func_ov001_0220a788(u32 v) {
    data_ov001_0222dddc->unk_123 = v;
}

u32 func_ov001_0220a79c() {
    return data_ov001_0222dddc->unk_11c;
}

void func_ov001_0220a7b0() {
    func_ov001_022247e0(data_ov001_0222dddc->unk_114);
    func_ov001_02226ffc((s32)data_ov001_0222dddc->unk_118, (void *)func_ov001_02208f20);
}

void func_ov001_0220a7f0() {
    struct { Unk_ov001_0220a7f0_H ps[1]; u32 t; u16 v; u16 d; } l;
    u8 *p, *q;
    s32 m;
    s32 i, idx, j, k;
    l.ps[0].v3 = data_ov001_02229bf4[0];
    l.ps[0].v4 = data_ov001_02229bf4[1];
    data_ov001_0222dddc = (Unk_ov001_0222dddc *)func_ov001_02225db0(0x128, 4);
    data_ov001_0222dddc->unk_11c = 0xff;
    data_ov001_0222dddc->unk_121 = 0;
    data_ov001_0222dddc->unk_123 = 1;
    data_ov001_0222dddc->unk_124 = 1;
    for (i = 0; i < 0x2f; i++) {
        data_ov001_0222dddc->unk_030[i] = func_ov001_02224b60(0, 0x34);
        data_ov001_0222dddc->unk_030[i]->w0 = (data_ov001_0222dddc->unk_030[i]->w0 & 0xc1fffcff) | 0x200;
        data_ov001_0222dddc->unk_030[i]->h4 = (data_ov001_0222dddc->unk_030[i]->h4 & ~0xc00) | 0xc00;
    }
    p = data_ov001_02229be8;
    for (i = 0; i < 4; i++) {
        data_ov001_0222dddc->unk_0ec[i] = func_ov001_02224b60(0, *p);
        p++;
        data_ov001_0222dddc->unk_0ec[i]->w0 = (data_ov001_0222dddc->unk_0ec[i]->w0 & 0xc1fffcff) | 0x200;
        data_ov001_0222dddc->unk_0ec[i]->h4 = (data_ov001_0222dddc->unk_0ec[i]->h4 & ~0xc00) | 0xc00;
    }
    q = data_ov001_02229be0;
    for (m = 0; m < 2; m++) {
        data_ov001_0222dddc->unk_0fc[m] = func_ov001_02224b14(0, *q, 1);
        func_ov001_02224704(data_ov001_0222dddc->unk_0fc[m], -1, 0x200, 0);
        func_ov001_022244d8(data_ov001_0222dddc->unk_0fc[m], -1, 3);
        q++;
    }
    l.d = 0;
    u32 bh = data_ov001_02229bec[1];
    u32 bw = data_ov001_02229bec[0];
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            data_ov001_0222dddc->unk_000[i][j] = func_ov001_02225748(0, bw, bh, 0, &l.t, 0);
            idx = j * 12;
            l.ps[0].v = 0;
            for (k = 0; k < 12; k++, l.ps[0].v += 0x12, idx++) {
                l.v = data_ov001_0222a868[i][idx];
                func_ov001_02225254(data_ov001_0222dddc->unk_000[i][j], l.ps[0].v, l.ps[0].v2, l.ps[0].v3, l.ps[0].v4, 2, 0x480, &l.v);
            }
            if (i == 0) {
                data_ov001_0222dddc->unk_104[j] = func_ov001_02224870(0, l.t, 1);
            }
        }
    }
    data_ov001_0222dddc->unk_114 = func_ov001_02224b14(0, 0x40, 1);
    func_ov001_02224704(data_ov001_0222dddc->unk_114, -1, 0x200, 0);
    func_ov001_022244d8(data_ov001_0222dddc->unk_114, -1, 2);
    data_ov001_0222dddc->unk_118 = (void *)func_ov001_02227094(0, (void *)func_ov001_0220a6a0, 0, 0x78);
    func_ov001_02209698(data_ov001_0222dddc->unk_11d, 0, 0xc0);
}

void func_ov001_0220aba4(s32 a) {
    s32 i;
    func_ov001_02226fdc(0, a);
    for (i = 0; i < 4; i++) {
        func_ov001_022247e0(data_ov001_0222dde0->unk_048[i]);
        func_ov001_02225718(data_ov001_0222dde0->unk_000[i]);
    }
    for (i = 0; i < 2; i++) {
        func_ov001_022247e0(data_ov001_0222dde0->unk_040[i]);
    }
    for (i = 0; i < 2; i++) {
        func_ov001_022267c8(data_ov001_0222dde0->unk_038[i]);
    }
    for (i = 0; i < 10; i++) {
        func_ov001_022267c8(data_ov001_0222dde0->unk_010[i]);
    }
    func_ov001_02225d58(&data_ov001_0222dde0);
}

void func_ov001_0220ac6c(s32 a) {
    volatile s32 s[2];
    Unk_ov001_0220a7f0_Reg *r = data_ov001_0222dde0->unk_010[0];
    s32 t;
    s[0] = (*(volatile u32 *)&r->w0 & 0x1ff0000) >> 16;
    t = *(volatile u32 *)&r->w0 & 0xff;
    s[1] = t;
    t += 0xc;
    s[1] = t;
    func_ov001_0220b148(0, t);
    if (s[1] < 0xc0) return;
    func_ov001_02226ffc(a, (void *)func_ov001_0220aba4);
}

void func_ov001_0220acec(s32 a) {
    volatile s32 s[2];
    Unk_ov001_0220a7f0_Reg *r = data_ov001_0222dde0->unk_010[3];
    s32 t;
    s[0] = (*(volatile u32 *)&r->w0 & 0x1ff0000) >> 16;
    t = *(volatile u32 *)&r->w0 & 0xff;
    s[1] = t;
    t += 0xc;
    s[1] = t;
    func_ov001_0220b148(1, t);
    if (s[1] < 0xc0) return;
    func_ov001_02226ffc(a, (void *)func_ov001_0220ac6c);
}

void func_ov001_0220ad6c(s32 a) {
    volatile s32 s[2];
    Unk_ov001_0220a7f0_Reg *r = data_ov001_0222dde0->unk_010[6];
    s32 t;
    s[0] = (*(volatile u32 *)&r->w0 & 0x1ff0000) >> 16;
    t = *(volatile u32 *)&r->w0 & 0xff;
    s[1] = t;
    t += 0xc;
    s[1] = t;
    func_ov001_0220b148(2, t);
    if (s[1] < 0xc0) return;
    func_ov001_02226ffc(a, (void *)func_ov001_0220acec);
}

void func_ov001_0220adec(s32 a) {
    volatile s32 s[2];
    Unk_ov001_0220a7f0_Reg *r = data_ov001_0222dde0->unk_010[9];
    s32 t;
    s[0] = (*(volatile u32 *)&r->w0 & 0x1ff0000) >> 16;
    t = *(volatile u32 *)&r->w0 & 0xff;
    s[1] = t;
    t += 0xc;
    s[1] = t;
    func_ov001_0220b148(3, t);
    if (s[1] < 0xc0) return;
    func_ov001_02226ffc(a, (void *)func_ov001_0220ad6c);
}

void func_ov001_0220ae6c(s32 a) {
    volatile s32 s[2];
    Unk_ov001_0220a7f0_Reg *r = (Unk_ov001_0220a7f0_Reg *)func_ov001_022247d4(data_ov001_0222dde0->unk_040[0], 0);
    s32 t;
    s[0] = (*(volatile u32 *)&r->w0 & 0x1ff0000) >> 16;
    t = *(volatile u32 *)&r->w0 & 0xff;
    s[1] = t;
    t += 0xc;
    s[1] = t;
    func_ov001_0220b148(4, t);
    if (s[1] < 0xc0) return;
    func_ov001_02226ffc(a, (void *)func_ov001_0220adec);
}

void func_ov001_0220aef4(s32 a) {
    Unk_ov001_0222dde0 *g = data_ov001_0222dde0;
    s32 old = g->unk_063;
    g->unk_063 = data_ov001_02229f4c[old][a];
    g = data_ov001_0222dde0;
    s32 n = g->unk_063;
    if (n == 0xd && (a == 1 || a == 3)) {
        g->unk_064 = old;
    } else if (n == -1) {
        if (g->unk_064 == 1 || g->unk_064 == 0xa) {
            g->unk_063 = 0xa;
        } else {
            g->unk_063 = 0xb;
        }
    } else if (n == -2) {
        if (g->unk_064 == 1 || g->unk_064 == 0xa) {
            g->unk_063 = 1;
        } else {
            g->unk_063 = 2;
        }
    }
    func_ov001_0220afcc();
    func_ov001_0221e9a0(8);
}

void func_ov001_0220afcc() {
    s32 t;
    s32 idx = data_ov001_0222dde0->unk_063;
    if (idx <= 0xb) t = 0x44;
    else t = 0x45;
    void *r = func_ov001_022247d4(data_ov001_0222dde0->unk_058, 0);
    func_ov001_02224b9c(0, t, (u32)r);
    func_ov001_022244d8(data_ov001_0222dde0->unk_058, -1, 2);
    s32 i2 = data_ov001_0222dde0->unk_063 << 2;
    func_ov001_02224558(data_ov001_0222dde0->unk_058, -1, *(u16 *)((u8 *)data_ov001_02229f14 + i2), *(u16 *)((u8 *)data_ov001_02229f16 + i2));
}

#pragma thumb reset
}
