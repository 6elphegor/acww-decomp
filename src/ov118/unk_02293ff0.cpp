#include "types.h"

struct Unk_ov118_02292d00 {
    /* 0x00 */ u8 pad_00[0x98];
    /* 0x98 */ u16 unk_98;
    /* 0x9a */ u8 pad_9a[6];
    /* 0xa0 */ volatile u8 unk_a0;
    /* 0xa1 */ u8 pad_a1[2];
    /* 0xa3 */ u8 unk_a3;
    /* 0xa4 */ u8 unk_a4;
    /* 0xa5 */ u8 unk_a5;
    /* 0xa6 */ u8 pad_a6;
    /* 0xa7 */ u8 unk_a7;
    /* 0xa8 */ u8 pad_a8[3];
    /* 0xab */ u8 unk_ab;
    /* 0xac */ u8 unk_ac;
    /* 0xad */ u8 unk_ad;
    /* 0xae */ u8 unk_ae;
    /* 0xaf */ u8 unk_af;
    /* 0xb0 */ u8 pad_b0[0xfc - 0xb0];
    /* 0xfc */ u8 unk_fc[13 * 0x40];
    /* 0x43c */ u8 unk_43c[0x48];
    /* 0x484 */ u8 unk_484[0x64];
    /* 0x4e8 */ u8 unk_4e8[0x800];
    /* 0xce8 */ u16 unk_ce8[0x400];
    /* 0x14e8 */ u16 unk_14e8[0x400];
    /* 0x1ce8 */ u16 unk_1ce8[0x400];
    /* 0x24e8 */ u8 unk_24e8[0x2000];
    /* 0x44e8 */ u8 unk_44e8[0x100];
};

typedef Unk_ov118_02292d00 S;

extern volatile u16 data_021f47d8[];
extern u32 data_021f482c;
extern u8 data_021f4770;
extern u8 data_021f4774;
extern u8 data_021ef5ec;
extern u8 data_ov118_02295628[];
extern u8 data_ov118_02295640[];
extern u8 data_ov118_0229565c[];
extern u8 data_ov118_02295678[];
extern u8 data_ov118_02295690[];
extern u8 data_ov118_022956a8[];
extern u8 data_ov118_022956c0[];
extern u8 data_ov118_022956d8[];

extern "C" {
void func_0206fc44(void *p);
void func_02115e48(void *dst, void *src, u32 n);
void func_02115e30(u32 v, void *dst, u32 n);
u8 *func_ov118_02293d70(S *self);
void func_ov118_02292e10(S *self, u32 v);
void func_ov118_02292e00(S *self, u32 v);
s32 func_ov118_02292e20(S *self, u32 v);
void func_ov118_02293994(S *self, u32 v);
void func_ov118_02293924(S *self, u32 v);
void func_ov002_02200a58(S *self, u32 v);
void func_ov118_02293274(S *self);
void func_0208d9d4(void *p, u32 v);
void func_ov118_022933cc(S *self);
void func_ov002_02200980(S *self);
void func_ov118_022932ec(S *self);
s32 func_ov002_022009d4(S *self);
void func_ov118_02293254(S *self);
u32 func_ov090_02291a38(u32 v);
u32 func_ov090_02291a58(u32 v);
void func_ov118_02294df8(S *self, u32 v);
u32 func_ov090_02291944(u32 v);
void func_ov002_02202be0(void *p);
s32 func_ov118_02293d50(S *self);
u32 func_ov118_02293a48(S *self, u32 a, u32 b);
void func_ov002_02202a40(void *p, u32 a, u32 b);
s32 func_0208d9a8(void *p);
void func_ov118_02293234(S *self);
void func_ov118_022935a0(S *self);
s32 func_0208d4fc(void *p);
void func_ov118_02293214(S *self);
s32 func_ov118_02292e78(S *self);
void func_ov118_022937b0(S *self, u32 v);
s32 func_ov002_022028f0(void *p);
void func_ov118_02294f14(S *self);
u32 func_ov002_022009c8(S *self);
s32 func_ov118_02292f7c(S *self, u32 v);
void func_ov118_022937a0(S *self, u32 v);
void func_020e761c(void *p, s32 a, s32 b);
void func_ov118_02293604(S *self, u32 v);
s32 func_ov002_02200a14(S *self, u32 v);
s32 func_ov118_02293524(S *self);
void func_0200402c(u32 v);
s32 func_ov118_02293660(S *self);
void func_ov002_02202f00(void *p);
s32 func_ov118_02293aa8(S *self);
void func_ov118_02292e34(S *self, u32 v);
s32 func_ov118_02293cd0(S *self);
void func_020026c4(void *a, u32 b, u32 c, u32 d, u32 e, u32 f);
void func_0200261c(void *a, u32 b, u32 c, u32 d, u32 e, u32 f);
void func_ov117_022923bc(u32 v);
void func_ov117_02292c88(void *p);
void func_ov094_02292360(void *a, void *b);
void func_02002438(void *a, u32 b, u32 c, u32 d, u32 e);
void func_ov118_02293ae0(S *self, void *p);
void func_ov117_022923d8();
void func_ov117_022923a0(u32 v);
void func_020641b4(void *a, void *b, u32 c);
void func_020024f0(void *a, u32 b, u32 c, u32 d);
void func_0206ee80(void *a, u32 b, u32 c, u32 d, u32 e, u32 f);

u8 *func_ov118_02293ff0(S *self) {
    if (self->unk_a0 >= 13) {
        return self->unk_fc + 12 * 0x40;
    }
    self->unk_a0 = self->unk_a0 + 1;
    return self->unk_fc + (self->unk_a0 - 1) * 0x40;
}

void func_ov118_02294024(S *self) {
    s32 i = 0;
    self->unk_a0 = 0;
    u8 *p = self->unk_fc;
    do {
        func_0206fc44(p + i * 0x40);
        i++;
    } while (i < 13);
}

s32 func_ov118_0229404c(S *self, u32 x, s32 idx) {
    if (x == 0) return 7;
    if (x < 6) return 0;
    if (x >= 6 && x < 14) return 1;
    switch (x - 14) {
    case 2: return 2;
    case 0: return 3;
    case 3: return 4;
    case 1: return 5;
    case 4: return 6;
    }
    return 7;
}

void func_ov118_022940a0(S *self) {
    s32 i;
    u8 *tbl;
    func_02115e48(self->unk_1ce8, self->unk_14e8, 0x800);
    tbl = func_ov118_02293d70(self);
    for (i = 0; i < 13; i++) {
        s32 a = func_ov118_0229404c(self, tbl[i], i) * 0x40 + 0x13;
        s32 b = i * 0x40 + 0x13;
        self->unk_14e8[b] = self->unk_1ce8[a];
        self->unk_14e8[b + 1] = self->unk_1ce8[a + 1];
        self->unk_14e8[b + 0x20] = self->unk_1ce8[a + 0x20];
        self->unk_14e8[b + 0x21] = self->unk_1ce8[a + 0x21];
    }
    func_ov118_02292e10(self, 2);
}

void func_ov118_02294138(S *self) {
    volatile u16 v0, v1, v2, v3;
    s32 off, j, i, n;
    func_02115e48(self->unk_14e8, self->unk_ce8, 0x800);
    n = self->unk_98 >> 4;
    self->unk_a3 = n;
    off = 0x13;
    for (i = 0; i < n; i++) {
        v0 = 0x10;
        func_02115e30(v0, self->unk_ce8 + off, 0x14);
        v1 = 0x10;
        func_02115e30(v1, self->unk_ce8 + (off + 0x20), 0x14);
        off += 0x40;
    }
    j = n + 7;
    off = j * 0x40 + 0x13;
    for (; j < 13; j++) {
        v2 = 0x10;
        func_02115e30(v2, self->unk_ce8 + off, 0x14);
        v3 = 0x10;
        func_02115e30(v3, self->unk_ce8 + (off + 0x20), 0x14);
        off += 0x40;
    }
    func_ov118_02292e10(self, 2);
}

void func_ov118_022941f4(S *self) {
    func_ov118_02293994(self, 0);
    func_ov118_02293924(self, 0xe);
    func_ov118_02292e00(self, 0x800);
    func_ov002_02200a58(self, 3);
    func_ov118_02293274(self);
}

void func_ov118_02294228(S *self) {
    func_0208d9d4(self->unk_43c, 1);
    func_ov118_022933cc(self);
    func_ov002_02200980(self);
    if (func_ov118_02292e20(self, 0x800)) {
        func_ov002_02200a58(self, 0xa);
    } else {
        func_ov002_02200a58(self, 3);
    }
}

void func_ov118_02294270(S *self) {
    func_ov118_022932ec(self);
    func_ov002_02200a58(self, 0);
}

void func_ov118_02294288(S *self) {
    s32 trg, x, y, cur, ox, oy;
    if (func_ov002_022009d4(self)) {
        func_ov118_02294270(self);
        return;
    }
    trg = data_021f47d8[1];
    if ((trg & 1) && self->unk_ad != 0xe) {
        func_ov118_02293254(self);
        return;
    }
    if (trg & 0x100) {
        func_ov118_02294df8(self, func_ov090_02291a38(5));
        return;
    }
    if (trg & 0x200) {
        func_ov118_02294df8(self, func_ov090_02291a58(5));
        return;
    }
    ox = self->unk_ae;
    x = ox;
    oy = self->unk_af;
    y = oy;
    cur = data_021f47d8[0];
    if (cur & 0x40) {
        y = oy - 4;
    } else if (cur & 0x80) {
        y = oy + 4;
    }
    if (y < 0x30) {
        self->unk_ac = func_ov090_02291944(ox);
        func_ov002_02202be0(self->unk_484);
        func_ov118_022941f4(self);
        return;
    }
    if (y > 0xb0) y = 0xb0;
    if (cur & 0x20) {
        x = x - 4;
    } else if (cur & 0x10) {
        x = x + 4;
    }
    if (x < 0x18) {
        x = 0x18;
    } else if (x > 0x98) {
        if (y < 0x50) {
            self->unk_ac = 9;
        } else {
            y = (y - 0x50) >> 4;
            if (y >= func_ov118_02293d50(self)) {
                y = func_ov118_02293d50(self) - 1;
            }
            y += 0xa;
            self->unk_ac = y;
        }
        func_ov118_022941f4(self);
        return;
    }
    if (x == ox && y == oy) return;
    self->unk_ae = x;
    self->unk_af = y;
    self->unk_ad = func_ov118_02293a48(self, self->unk_ae, self->unk_af);
    func_ov002_02202a40(self->unk_484, self->unk_ae, self->unk_af);
}

void func_ov118_022943f4(S *self) {
    if (func_0208d9a8(self->unk_43c)) {
        func_ov118_02293234(self);
        func_ov118_02292e00(self, 0x1000);
    }
}

void func_ov118_02294420(S *self) {
    if ((data_021f47d8[0] & 1) == 0) {
        func_0208d9d4(self->unk_43c, 3);
        func_ov002_02200a58(self, 9);
    } else {
        func_ov118_022935a0(self);
    }
}

void func_ov118_02294458(S *self) {
    if (func_0208d9a8(self->unk_43c)) {
        func_ov002_02200a58(self, 8);
    }
}

void func_ov118_0229447c(S *self) {
    if (func_0208d4fc(self->unk_484)) {
        func_ov118_02293214(self);
        if (func_ov118_02292e20(self, 0x800)) {
            func_ov002_02200a58(self, 0xa);
        } else {
            func_ov002_02200a58(self, 3);
        }
    }
}

void func_ov118_022944c0(S *self) {
    if (func_0208d4fc(self->unk_484)) {
        s32 r = func_ov118_02292e78(self);
        if (r != 1) {
            if (r == 2) {
                func_ov118_022937b0(self, 0);
                self->unk_a3 = 0xff;
                func_ov118_02293234(self);
            } else {
                func_ov118_02293234(self);
            }
        }
    }
}

void func_ov118_02294508(S *self) {
    if (func_ov002_022028f0(self->unk_484) == 0) {
        func_ov002_02200a58(self, self->unk_ab);
        func_ov118_02294f14(self);
    }
}

void func_ov118_02294534(S *self) {
    if (func_ov002_022009d4(self)) {
        func_ov118_02294270(self);
        return;
    }
    switch (func_ov118_02292f7c(self, func_ov002_022009c8(self))) {
    case 1:
        if (func_ov118_02292e20(self, 8)) {
            u8 t = self->unk_ac;
            if (t >= 0xa && t <= 0xf) {
                func_ov118_022937a0(self, self->unk_98 & ~0xf);
            }
        }
        func_ov118_02293274(self);
        break;
    case 2:
        func_ov118_02293994(self, 0);
        func_ov118_02293924(self, 0xe);
        self->unk_ad = func_ov118_02293a48(self, self->unk_ae, self->unk_af);
        func_ov118_02292e10(self, 0x800);
        func_ov002_02200a58(self, 0xa);
        func_ov118_02293274(self);
        break;
    case 3:
        func_ov118_02293274(self);
        break;
    default: {
        u32 trg = data_021f47d8[1];
        if (trg & 1) {
            func_ov118_02293254(self);
        } else if (trg & 0x100) {
            func_ov118_02294df8(self, func_ov090_02291a38(5));
        } else if (trg & 0x200) {
            func_ov118_02294df8(self, func_ov090_02291a58(5));
        }
        break;
    }
    }
}

void func_ov118_0229463c(S *self) {
    u32 v;
    if (data_021f4770 == 0) {
        func_0208d9d4(self->unk_43c, 3);
        func_ov118_02294270(self);
    }
    v = self->unk_a4;
    func_020e761c(&v, data_021ef5ec - 0x54, 8);
    func_ov118_02293604(self, v);
}

void func_ov118_0229468c(S *self) {
    if (data_021f4770 == 0) {
        func_0208d9d4(self->unk_43c, 3);
        func_ov118_02294270(self);
    }
    func_ov118_02293604(self, self->unk_a7 + (data_021ef5ec - self->unk_a5));
}

static inline BOOL Unk_ov118_022946d4_Both() {
    if (data_021f4770 != 0 && data_021f4774 != 0) return TRUE;
    return FALSE;
}

void func_ov118_022946d4(S *self) {
    if (func_ov002_02200a14(self, 1)) {
        func_ov118_02294228(self);
        return;
    }
    if (Unk_ov118_022946d4_Both()) {
        if (func_ov118_02293524(self)) {
            func_0200402c(0x36);
        } else if (func_ov118_02293660(self)) {
            func_ov002_02202f00(self->unk_43c);
        } else if (func_ov118_02293aa8(self)) {
            func_ov118_02292e34(self, 0x38);
        } else if (func_ov118_02293cd0(self)) {
            func_ov118_02292e34(self, 0x37);
        }
    }
}

void func_ov118_02294764() {
    u32 p = data_021f482c;
    func_020026c4(data_ov118_02295628, p, 8, 6, 6, 0xe);
    func_0200261c(data_ov118_02295640, p, 8, 0xc0, 0xc0, 0xff);
    func_0200261c(data_ov118_0229565c, p, 8, 0x180, 0x180, 0x1ff);
}

void func_ov118_022947c4(S *self) {
    u8 *a, *b;
    func_ov117_022923bc(3);
    a = self->unk_24e8;
    func_ov117_02292c88(self->unk_44e8);
    b = self->unk_44e8;
    func_ov094_02292360(a, b);
    func_02002438(a, 4, 0x60, 0x60, 0x15f);
    func_ov118_02293ae0(self, b);
}

s32 func_ov118_02294814() {
    func_ov117_022923bc(1);
    func_ov117_022923bc(2);
}

s32 func_ov118_0229482c() {
    func_ov117_022923d8();
    func_ov117_022923bc(0);
    func_ov117_022923a0(0);
    func_ov117_022923a0(1);
}

void func_ov118_0229484c(S *self) {
    u32 p = data_021f482c;
    func_020026c4(data_ov118_02295678, p, 4, 1, 1, 0xf);
    func_0200261c(data_ov118_02295690, p, 4, 0x11, 0x11, 0x5f);
    func_0200261c(data_ov118_022956a8, p, 4, 0x230, 0x230, 0x25f);
    func_020641b4(data_ov118_022956c0, self->unk_4e8, 0x800);
    func_020024f0(self->unk_4e8, 4, 0x800, 0);
    func_020641b4(data_ov118_022956d8, self->unk_1ce8, 0x800);
    func_0206ee80(self->unk_1ce8, 0x13, 0, 0x1c, 1, 4);
}
}
