#include "types.h"

struct Unk_ov134_02291f60 {
    s32 unk_00;
    s32 unk_04;
    u8 unk_08[0x10];
    u8 unk_18[0x48];
    s32 unk_60;
    u8 pad_64[0xc];
    s32 unk_70;
    s32 unk_74;
    s32 unk_78;
    s32 unk_7c;
    s32 unk_80;
    u8 pad_84[8];
    s32 unk_8c;
    u8 pad_90[0x14];
    u8 unk_a4;
    u8 unk_a5;
    u8 unk_a6;
    u8 unk_a7;
    u8 unk_a8;
    u8 unk_a9;
    u8 unk_aa;
    u8 unk_ab;
    u8 unk_ac;
    u8 unk_ad;
    u8 unk_ae;
    volatile u8 unk_af;
    u8 unk_b0;
    u8 pad_b1[4];
    u8 unk_b5;
    u8 unk_b6;
    u8 pad_b7[5];
    u8 unk_bc;
    u8 unk_bd;
    u8 pad_be[0xd84 - 0xbe];
    u8 unk_d84[0x800];
    u8 unk_1584[0x800];
    u8 unk_1d84[0x800];
};

extern "C" {
extern u8 data_ov134_02294c58[];
extern u8 data_ov134_02294c60[];
extern u32 data_ov134_02294f14[];
extern u32 data_ov134_02294f2c[];
extern u32 data_ov134_02294f5c[];

void func_020021b8(u32 a, u32 b, u32 c, u32 d, u32 e);
void func_020021fc(u32 a, s32 b, s32 c);
void func_02115e48(void *src, void *dst, u32 n);
void func_0206ee80(void *map, s32 a, s32 b, s32 c, s32 d, s32 e);
void func_0200402c(u32 a);
void func_0200152c(u32 a);
void func_0200151c(u32 a);
void func_0200212c(u32 a);
void func_020020b8(u32 a);
void func_02004008(u32 a);
void func_02001724(u32 a, u32 b);
u32 func_0200273c(u32 a);
void func_020016b0(u32 a);
u32 func_0209ce48(u32 a, u32 b);
void func_ov002_02202f00(void *p);

s32 func_ov134_022934a4(Unk_ov134_02291f60 *self, u32 a);
s32 func_ov134_022934e0(Unk_ov134_02291f60 *self, u32 a);
s32 func_ov134_022934b0(Unk_ov134_02291f60 *self, u32 a);
s32 func_ov134_02293484(Unk_ov134_02291f60 *self, u32 a);
s32 func_ov134_02293474(Unk_ov134_02291f60 *self, u32 a);
s32 func_ov134_0229258c(Unk_ov134_02291f60 *self, s32 a);
s32 func_ov134_02292558(Unk_ov134_02291f60 *self, s32 a, s32 b);
s32 func_ov134_022926d0(Unk_ov134_02291f60 *self);
u32 func_ov134_0229462c(Unk_ov134_02291f60 *self, u32 a);
void func_ov134_022941b0(Unk_ov134_02291f60 *self, u32 a, u32 b, u32 c, s32 d, s32 e, s32 f);
void func_ov134_02294158(Unk_ov134_02291f60 *self, u32 a, u32 b, u32 c, s32 d, s32 e, s32 f);
void func_ov134_02294108(Unk_ov134_02291f60 *self, u32 a, u32 b, u32 c, s32 d, s32 e, s32 f);
void func_ov134_022940a8(Unk_ov134_02291f60 *self, u32 a, u32 b, u32 c, s32 d, s32 e, s32 f, s32 g);
void func_ov134_0229400c(Unk_ov134_02291f60 *self, u32 a, u32 b, u32 c, s32 d, s32 e, s32 f, s32 g);
void func_ov134_02294274(Unk_ov134_02291f60 *self, u32 a, u32 b, u32 c, u32 d, s32 e);
void func_ov134_0229435c(Unk_ov134_02291f60 *self);
void func_ov134_02291f60(Unk_ov134_02291f60 *self, u32 a);
void func_ov134_02291f70(Unk_ov134_02291f60 *self, u32 a);
void func_ov134_02291f94(Unk_ov134_02291f60 *self, u32 a);
void func_ov134_02292934(Unk_ov134_02291f60 *self);
void func_ov134_0229288c(Unk_ov134_02291f60 *self);
void func_ov134_02292c18(Unk_ov134_02291f60 *self);
void func_ov134_02292c3c(Unk_ov134_02291f60 *self, s32 a);
s32 func_ov134_02292990(Unk_ov134_02291f60 *self);
s32 func_ov134_02292ea8(Unk_ov134_02291f60 *self, s32 x, s32 y);
void func_ov134_02293350(Unk_ov134_02291f60 *self, u32 a, u32 b);
void func_ov134_0229323c(Unk_ov134_02291f60 *self);
s32 func_ov134_02293660(Unk_ov134_02291f60 *self);
void func_ov134_02293988(Unk_ov134_02291f60 *self);
void func_ov134_022923c0(Unk_ov134_02291f60 *self);
void func_ov134_022923fc(Unk_ov134_02291f60 *self);
void func_ov134_022932a0(Unk_ov134_02291f60 *self, u32 a);

void func_ov134_0229288c(Unk_ov134_02291f60 *self) {
    if (self->unk_af != 0) {
        self->unk_b5 = (self->unk_ae - 8 + self->unk_b5) >> 1;
        self->unk_b6 = (self->unk_ae + 8 + self->unk_b6) >> 1;
    } else {
        self->unk_b5 = self->unk_ae - 8;
        self->unk_b6 = self->unk_ae + 8;
    }
    func_020021b8(2, 0, self->unk_b5, 0xff, self->unk_b6);
    s32 v = self->unk_b5;
    if (self->unk_80 < v) {
        self->unk_80 = v;
    }
    v = self->unk_b6 - 8;
    if (self->unk_80 > v) {
        self->unk_80 = v;
    }
}

void func_ov134_02292934(Unk_ov134_02291f60 *self) {
    if (self->unk_af != 0) {
        self->unk_b5 = (self->unk_b5 + 0x28) >> 1;
        self->unk_b6 = (self->unk_b6 + 0xa8) >> 1;
    } else {
        self->unk_b5 = 0x28;
        self->unk_b6 = 0xa8;
    }
    func_020021b8(2, 0, self->unk_b5, 0xff, self->unk_b6);
}

s32 func_ov134_02292990(Unk_ov134_02291f60 *self) {
    u16 *row;
    s32 dx, h, lim, off, i, j, k, t;
    u32 c, ac;
    func_02115e48(self->unk_1584, self->unk_1d84, 0x800);
    dx = self->unk_ab - self->unk_00;
    h = func_ov134_022934a4(self, self->unk_a5);
    lim = 8 - func_ov134_022934a4(self, self->unk_a5);
    if (dx > 0) {
        i = (16 - ((dx + 15) >> 4)) * 2;
        row = (u16 *)(self->unk_1d84 + (i << 6));
        for (; i < 0x20; row += 0x20, i++) {
            for (j = lim; j < 8; j++) {
                row[j] = 0x3074;
            }
        }
    }
    off = (self->unk_00 - self->unk_ab) >> 4;
    for (k = 0; k < 0x10; k++) {
        s32 r5 = k + off;
        s32 r6 = r5 & 15;
        if (r5 < 0 || r5 >= self->unk_ac) {
            continue;
        }
        if (func_ov134_0229258c(self, r5)) {
            func_0206ee80(self->unk_1d84, lim, r6 * 2, 7, r6 * 2 + 1, 6);
        }
        if (r5 == self->unk_08[r6]) {
            continue;
        }
        self->unk_08[r6] = r5;
        c = self->unk_a5;
        if (c == 0) {
            r5 += 0x7d0;
        }
        if ((u8)(c + 0xff) <= 1) {
            r5++;
        }
        switch (c) {
        case 1:
            func_ov134_022941b0(self, self->unk_a4, (r6 << 4) + 0x80, 8, r5, 15, 14);
            break;
        case 2:
            func_ov134_02294158(self, self->unk_a4, (r6 << 4) + 0x80, 8, r5, 15, 14);
            break;
        case 3:
            func_ov134_02294108(self, self->unk_a4, (r6 << 4) + 0x80, 8, r5, 15, 14);
            break;
        case 4:
            func_ov134_022940a8(self, self->unk_a4, (r6 << 4) + 0x80, 8, r5, h, 15, 14);
            break;
        case 0:
        default:
            func_ov134_0229400c(self, self->unk_a4, (r6 << 4) + 0x80, 8, r5, h, 15, 14);
            break;
        }
    }
    ac = self->unk_ac;
    t = self->unk_ab - self->unk_00;
    t = t + (ac << 4);
    if (t < 0xc0) {
        s32 yb;
        s32 n;
        u16 *rowb;
        s32 jb;
        s32 ib;
        n = ((0xcf - t) >> 4) << 1;
        yb = (ac << 1) & 0x1f;
        for (ib = 0; ib < n; ib++) {
            rowb = (u16 *)(self->unk_1d84 + (yb << 6));
            for (jb = lim; jb < 8; jb++) {
                rowb[jb] = 0x3074;
            }
            yb = (yb + 1) & 0x1f;
        }
    }
    {
        s32 y;
        u16 *row2;
        s32 i2;
        s32 j2;
        y = ((self->unk_00 - self->unk_ab + 0x20) & 0xff) >> 3;
        for (i2 = 0; i2 < 5; i2++) {
            row2 = (u16 *)(self->unk_1d84 + (y << 6));
            for (j2 = 0; j2 < 10; j2++) {
                row2[j2] = 0x10;
            }
            row2[0x1f] = 0x10;
            y = (y - 1) & 0x1f;
        }
    }
    {
        s32 y;
        u16 *row2;
        s32 i2;
        s32 j2;
        y = ((self->unk_00 - self->unk_ab + 0xb0) & 0xff) >> 3;
        for (i2 = 0; i2 < 3; i2++) {
            row2 = (u16 *)(self->unk_1d84 + (y << 6));
            for (j2 = 0; j2 < 10; j2++) {
                row2[j2] = 0x10;
            }
            row2[0x1f] = 0x10;
            y = (y + 1) & 0x1f;
        }
    }
    func_ov134_02291f70(self, 1);
}

void func_ov134_02292c18(Unk_ov134_02291f60 *self) {
    func_020021fc(self->unk_a4, -self->unk_aa, -(self->unk_ab - self->unk_00));
}

void func_ov134_02292c3c(Unk_ov134_02291f60 *self, s32 a) {
    self->unk_00 = a;
    func_ov134_02292c18(self);
    func_ov134_02292990(self);
}

s32 func_ov134_02292c54(Unk_ov134_02291f60 *self, s32 x, s32 y) {
    switch (func_ov134_02292ea8(self, x, y)) {
    case 1:
        return 0;
    case 2:
        return 4;
    }
    if (func_ov134_02292558(self, x, y)) {
        return 3;
    }
    if (y >= 0x20 && y <= 0xa8) {
        s32 t = self->unk_60;
        if (x <= t + 0x18 && x >= t) {
            func_ov002_02202f00(self->unk_18);
            return 2;
        }
    }
    return 1;
}

s32 func_ov134_02292cb0(Unk_ov134_02291f60 *self) {
    switch (self->unk_a9) {
    case 0:
    case 1:
    case 2:
        break;
    case 3:
        self->unk_a9 = 5;
        self->unk_70 = data_ov134_02294f5c[self->unk_a5];
        break;
    case 4:
        self->unk_a9 = 5;
        break;
    case 5:
        if (self->unk_af != 0) {
            self->unk_af = self->unk_af - 1;
            func_ov134_02291f94(self, self->unk_af);
        } else {
            func_0200402c(0x14);
            self->unk_a9 = 6;
            self->unk_af = 3;
            func_0200152c(1);
            self->unk_af = self->unk_af - 1;
            func_ov134_0229288c(self);
        }
        break;
    case 6:
        if (self->unk_af != 0) {
            self->unk_af = self->unk_af - 1;
            func_ov134_0229288c(self);
        } else {
            func_0200212c(self->unk_a4);
            func_0200151c(1);
            func_ov134_02293350(self, self->unk_a5, 3);
            self->unk_74 = 0;
            self->unk_78 = 0;
            if (self->unk_70 != 0) {
                if (func_ov134_022926d0(self)) {
                    self->unk_a9 = 7;
                    func_02004008(0x54);
                } else {
                    self->unk_a9 = 8;
                }
                self->unk_70 = 0;
                func_ov134_0229323c(self);
            } else {
                self->unk_a9 = 8;
            }
        }
        break;
    case 7:
        if (func_ov134_02293660(self)) {
            func_ov134_02293988(self);
            self->unk_a9 = 8;
        }
        break;
    case 8:
        return 1;
    }
    return 0;
}

void func_ov134_02292df4(Unk_ov134_02291f60 *self) {
    func_0200402c(0x2a);
    self->unk_a9 = 4;
    self->unk_af = 3;
    func_0200151c(1);
    func_02001724(0x1f, 1);
    func_020016b0(~func_0200273c(self->unk_a4) & 0x1f);
    func_ov134_02291f60(self, 4);
}

void func_ov134_02292e40(Unk_ov134_02291f60 *self) {
    func_0200402c(0x29);
    self->unk_a9 = 3;
    self->unk_af = 3;
    func_0200151c(1);
    func_02001724(0x1f, 1);
    func_020016b0(~func_0200273c(self->unk_a4) & 0x1f);
    func_ov134_0229435c(self);
    self->unk_80 = self->unk_ab + (self->unk_ad << 4) - self->unk_00;
    func_ov134_02291f60(self, 4);
}

s32 func_ov134_02292ea8(Unk_ov134_02291f60 *self, s32 x, s32 y) {
    s32 r6, u, m, t, r4;
    if (y <= 0x28 || y >= 0xa8) {
        return 0;
    }
    r6 = x >> 3;
    if (func_ov134_022934e0(self, self->unk_a5) > r6 || func_ov134_02293484(self, self->unk_a5) < r6) {
        return 0;
    }
    u = self->unk_00;
    m = u & 15;
    if (y >= 0xb2 - m) {
        return 2;
    }
    if (y <= (((16 - m) & 15) + 0x1e)) {
        return 2;
    }
    t = y - (self->unk_ab - u);
    if (t < 0) {
        return 2;
    }
    r4 = t >> 4;
    if (r4 >= self->unk_ac) {
        return 2;
    }
    if (func_ov134_0229258c(self, r4)) {
        return 2;
    }
    self->unk_ad = r4;
    return 1;
}

s32 func_ov134_02292f40(Unk_ov134_02291f60 *self) {
    switch (self->unk_a9) {
    case 0:
        self->unk_a9 = 1;
        func_020020b8(self->unk_a4);
        func_0200152c(1);
        self->unk_af = self->unk_af - 1;
        func_ov134_02292934(self);
        break;
    case 1:
        if (self->unk_af != 0) {
            self->unk_af = self->unk_af - 1;
            func_ov134_02292934(self);
        } else {
            func_0200151c(1);
            self->unk_a9 = 2;
            self->unk_af = 0;
            func_ov134_02291f70(self, 4);
            self->unk_60 = func_ov134_02293484(self, self->unk_a5) << 3;
            func_ov134_022923c0(self);
        }
        break;
    case 2:
        if (self->unk_af < 3) {
            self->unk_af = self->unk_af + 1;
            func_ov134_02291f94(self, self->unk_af);
        } else {
            self->unk_a9 = 8;
        }
        break;
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
        break;
    case 8:
        return 1;
    }
    return 0;
}

void func_ov134_02293024(Unk_ov134_02291f60 *self, s32 idx) {
    s32 h, lim, i, j, off;
    s32 z;
    s32 r6;
    u16 *row;
    func_0200402c(0x13);
    self->unk_a5 = idx;
    self->unk_a9 = 0;
    func_0200212c(self->unk_a4);
    self->unk_a7 = func_ov134_022934e0(self, idx);
    self->unk_a8 = func_ov134_022934b0(self, idx);
    func_02115e48(self->unk_d84, self->unk_1584, 0x800);
    h = func_ov134_022934a4(self, idx);
    lim = 8 - h;
    row = (u16 *)self->unk_1584;
    i = 0;
    off = ((lim - 1) & 0x1f) << 1;
    z = 0;
    for (; i < 0x20; row += 0x20, i++) {
        for (j = z; j < lim; j++) {
            row[j] = 0x10;
        }
        *(u16 *)(off + (u32)row) = 0x3079;
    }
    self->unk_aa = (self->unk_a7 - lim) << 3;
    self->unk_ab = 0x28;
    self->unk_ac = data_ov134_02294c60[idx];
    if (idx == 2) {
        self->unk_ac = func_0209ce48(self->unk_bd, self->unk_bc);
    }
    self->unk_8c = (self->unk_ac - 8) << 4;
    for (i = 0; i < 0x10; i++) {
        self->unk_08[i] = 0xff;
    }
    r6 = func_ov134_0229462c(self, self->unk_a5);
    if ((u8)(self->unk_a5 + 0xff) <= 1) {
        r6 = (u8)(r6 - 1);
    }
    {
        s32 v = (r6 << 4) - ((self->unk_a8 << 3) - self->unk_ab);
        if (v < 0) {
            v = 0;
        } else if (v > self->unk_8c) {
            v = self->unk_8c;
        }
        func_ov134_02292c3c(self, v);
    }
    func_ov134_022923fc(self);
    func_ov134_022932a0(self, (u8)idx);
    self->unk_7c = func_ov134_022934e0(self, self->unk_a5) << 3;
    self->unk_ae = func_ov134_02293474(self, idx) << 3;
    self->unk_b5 = self->unk_ae - 8;
    self->unk_b6 = self->unk_ae + 8;
    func_ov134_02294274(self, 8, 0x1aa, 8, data_ov134_02294c58[idx], h + 1);
    self->unk_74 = data_ov134_02294f14[idx];
    self->unk_78 = data_ov134_02294f2c[idx];
    self->unk_af = 3;
    func_0200151c(1);
    func_02001724(0x1f, 1);
    func_020016b0(~func_0200273c(self->unk_a4) & 0x1f);
    func_ov134_02291f94(self, 0);
    self->unk_b0 = r6 + 1;
    self->unk_04 = 0;
}
}
