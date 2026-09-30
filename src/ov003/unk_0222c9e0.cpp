#include "types.h"

struct Unk_ov003_0222c9e0_V3 {
    s32 x, y, z;
};
typedef Unk_ov003_0222c9e0_V3 V3;

struct Unk_ov003_0222c9e0_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

// One 0x25c-byte entry of the tables at data_ov003_02259354 (2), 0225980c (4), 0225a17c (8)
struct Unk_ov003_0222c9e0_Rec {
    u8 unk_00[0x50];                   // 0x00
    u8 unk_50[0xf4 - 0x50];            // 0x50
    Unk_ov003_0222c9e0_Bits unk_f4;    // 0xf4
    u8 unk_f8[0x1d4 - 0xf8];           // 0xf8
    V3 unk_1d4;                        // 0x1d4
    u8 pad_1e0[0x204 - 0x1e0];         // 0x1e0
    V3 unk_204;                        // 0x204
    u8 pad_210[0x21c - 0x210];         // 0x210
    u32 unk_21c;                       // 0x21c
    s32 unk_220;                       // 0x220
    u8 pad_224[4];                     // 0x224
    s32 unk_228;                       // 0x228
    u8 pad_22c[0x23a - 0x22c];         // 0x22c
    s16 unk_23a;                       // 0x23a
    u8 pad_23c[2];                     // 0x23c
    s16 unk_23e;                       // 0x23e
    s16 unk_240;                       // 0x240
    s16 unk_242;                       // 0x242
    s16 unk_244;                       // 0x244
    u8 pad_246[0x24a - 0x246];         // 0x246
    u8 unk_24a;                        // 0x24a
    u8 pad_24b;                        // 0x24b
    u8 unk_24c;                        // 0x24c
    s8 unk_24d;                        // 0x24d
    u8 pad_24e;                        // 0x24e
    u8 unk_24f;                        // 0x24f
    u8 pad_250;                        // 0x250
    u8 unk_251;                        // 0x251
    u8 pad_252[0x256 - 0x252];         // 0x252
    u8 unk_256;                        // 0x256
    u8 unk_257;                        // 0x257
    u8 pad_258;                        // 0x258
    u8 unk_259;                        // 0x259
    u8 pad_25a[0x25c - 0x25a];         // 0x25a
};
typedef Unk_ov003_0222c9e0_Rec Rec;

struct Unk_020cbb18_Ptr {
    u8 unk_00[0x64];
    u32 unk_64;
};

extern "C" {
extern Unk_020cbb18_Ptr *data_020cbb18;

BOOL func_02072e88(Unk_020cbb18_Ptr *p, u32 v);
BOOL func_020a62a0();
s32 func_01ffc5a4(s32 a, s32 b);
s32 func_01ffcb0c(s32 a, s32 b);
void func_01ffca8c(V3 *dst, V3 *a, V3 *b);
s32 func_02002bdc(V3 *a, V3 *b);
s32 func_02063b8c(s32 n);
s32 func_02133150(s32 a, s32 b);
void func_020547a4(void *p, s32 v);
void func_0204ee10(s32 *x, s32 *y, void *p);
s32 func_020e7530(s16 *a, s32 b, s32 c);
s32 func_020e7d4c(V3 *a, V3 *b, s32 c, s32 d, s32 e);
s32 func_020e7870(s32 *a, s32 b, s32 c, s32 d, s32 e);

s32 func_ov003_0222c620(u8 a, s32 b);
void func_ov003_02229910(Rec *self);
s32 func_ov003_0222af48(Rec *self, s32 a);
void func_ov003_0222d674(Rec *self);
void func_ov003_0222d720(Rec *self);
s32 func_ov003_0222d334(Rec *self);
s32 func_ov003_0222e1e0(Rec *self, s32 a, s32 b);
void func_ov003_0222e2e0(Rec *self, s32 a);
void func_ov003_0222e328(V3 *out, s32 ang);
s32 func_ov003_0222e500(Rec *self, s32 a, s32 b);
void func_ov068_0226a1a0(Rec *self);
void func_ov068_0226a4f0(Rec *self);
}

extern "C" {

s32 func_ov003_0222c9e0(Rec *self, u32 a) {
    BOOL result = FALSE;
    s16 ang = self->unk_23a;
    if (self->unk_251 != 0xb) {
        if (func_020a62a0() == 0 && func_02072e88(data_020cbb18, data_020cbb18->unk_64) != 0) {
            if (self->unk_204.x != self->unk_1d4.x && self->unk_204.z != self->unk_1d4.z) {
                self->unk_251 = 4;
                self->unk_24c = a;
            }
        } else {
            V3 *p = &self->unk_204;
            V3 *q = &self->unk_1d4;
            u32 fl = self->unk_21c;
            if ((p->x == q->x && p->z == q->z) || (fl & 0xf00) != 0) {
                u8 n = self->unk_259;
                n = n + func_02063b8c(3);
                if (self->unk_24a != 0) {
                    n = n + (u8)(func_02063b8c(2) + 2);
                }
                if (func_ov003_0222e1e0(self, self->unk_240, n << 12) != 0) {
                    self->unk_240 = func_02002bdc(&self->unk_204, &self->unk_1d4);
                    fl &= 0xf0ff;
                    self->unk_21c = fl;
                } else {
                    fl &= 0xf0ff;
                    self->unk_21c = fl;
                }
            }
            if (func_020e7530(&ang, self->unk_240, 0xe38) != 0) {
                self->unk_251 = 4;
                self->unk_24c = a;
                result = TRUE;
            }
            self->unk_23a = ang;
        }
    } else {
        func_ov003_0222e1e0(self, self->unk_23a, ((u32)(self->unk_259 << 25) >> 24) << 12);
        self->unk_24c = a;
    }
    return result;
}

s32 func_ov003_0222cb3c(s32 a, s32 mode) {
    s32 orig = a;
    if (mode == 3) {
        s32 r = func_02063b8c(100);
        a = (s16)(a + 0x8000);
        if (r < 5) {
            a = (s16)(a + 0x2aaa);
        } else if (r < 10) {
            a = (s16)(a - 0x2aaa);
        }
    } else {
        if (mode == 1) {
            if (a < -0x4000) goto neg;
            if (a >= 0 && a < 0x4000) goto neg;
        }
        if (mode == 2) {
            if (a > 0x4000) goto neg;
            if (a <= 0 && a > -0x4000) {
            neg:
                a = (s16)-a;
                goto tail;
            }
        }
        if (a >= 0) {
            a = (s16)(0x8000 - a);
        } else {
            a = (s16)(-0x8000 - a);
        }
    }
tail:
    if (func_02063b8c(100) < 10) {
        if (a >= 0) {
            a = (s16)(a + 0xaaa);
        } else {
            a = (s16)(a - 0xaaa);
        }
    }
    if (a == orig) {
        if (a >= 0) {
            a = (s16)(a + 0xaaa);
        } else {
            a = (s16)(a - 0xaaa);
        }
    }
    return a;
}

void func_ov003_0222cc14(Rec *self) {
    s32 m = func_ov003_0222e500(self, 0x50, 0xe38);
    if (m != 0) {
        if (self->unk_24a != 0) {
            self->unk_251 = 0xf;
            self->unk_21c |= 0xf00;
        } else {
            self->unk_251 = 0xd;
        }
        self->unk_240 = func_ov003_0222cb3c(self->unk_23a, m);
        self->unk_21c++;
        self->unk_242 = 0;
        V3 *s = &self->unk_204;
        V3 *d = &self->unk_1d4;
        d->x = s->x;
        d->y = s->y;
        d->z = s->z;
    }
}

void func_ov003_0222cca8(Rec *self, s16 *cnt) {
    V3 *p = &self->unk_204;
    s32 t;
    V3 v;
    if (self->unk_251 == 0xb && func_ov003_0222e500(self, 0x50, 0xe38) == 0) {
        func_ov003_0222e328(&v, self->unk_23a);
        p->x += func_01ffcb0c(v.x, 0x10000);
        p->z += func_01ffcb0c(v.z, 0x10000);
    }
    t = *cnt << 12;
    s32 a = func_01ffcb0c(0x44000, t);
    s32 b = func_01ffcb0c(t, t);
    s32 c = func_01ffc5a4(b, 0x2000);
    p->y += (a >> 12) + (c >> 12);
    (*cnt)++;
    if (func_ov003_0222af48(self, 1) != 0) {
        func_ov003_02229910(self);
    }
}

void func_ov003_0222cd58(Rec *self) {
    s32 r6, s;
    V3 *q = &self->unk_1d4;
    V3 *p = &self->unk_204;
    r6 = func_02133150(0x1000, self->unk_257);
    s8 t = self->unk_24d;
    switch (t) {
    case 0x15:
        s = 0xcd;
        break;
    case 0x16:
        s = 0x266;
        break;
    default:
        s = 0x385;
        break;
    }
    if (self->unk_24a != 0) {
        s = func_01ffcb0c(s, 0x2000);
    }
    if (func_020e7d4c(p, q, r6, 0x1000, s) == 0) {
        self->unk_251 = 0x13;
    } else {
        s32 x, y;
        self->unk_23a = func_02002bdc(p, q);
        if (func_02072e88(data_020cbb18, data_020cbb18->unk_64) != 0) {
            if (func_020a62a0() == 0) {
                func_0204ee10(&x, &y, p);
                if (x < 0x10 || x > 0x4f || y < 0x10) {
                    self->unk_251 = 0x13;
                }
            }
        }
    }
    if (self->unk_24c != 0) {
        func_020e7870(&p->y, self->unk_228, r6, 0x1ec, 0xcd);
    } else {
        if (func_020e7870(&p->y, self->unk_228 - 0x1000, r6, 0x333, 0xcd) == 0) {
            self->unk_24c = 1;
        }
    }
}

void func_ov003_0222ce78(Rec *self, s16 *cnt) {
    V3 *p = &self->unk_204;
    s32 r = func_02063b8c(100);
    if (func_02072e88(data_020cbb18, data_020cbb18->unk_64) != 0 && func_020a62a0() == 0) {
        V3 *q = &self->unk_1d4;
        if (q->x != p->x || q->z != p->z) {
            self->unk_251 = 4;
            *cnt = 0;
            return;
        }
    } else {
        s32 c = *cnt;
        if ((c == 0 && r > 0x5f) || (c == 10 && r > 0x50) || ((c == 0x14 || c == 0x1e) && r > 0x32) || c >= 0x28) {
            if (self->unk_251 != 0xd && self->unk_251 != 0xe) {
                s32 m;
                if (self->unk_24d == 0x17) {
                    m = 5;
                } else {
                    m = 0xd;
                }
                s32 old = self->unk_23a;
                s32 g = func_ov003_0222c620(m, 1);
                self->unk_240 = g + old;
                V3 *s = &self->unk_204;
                V3 *d = &self->unk_1d4;
                d->x = s->x;
                d->y = s->y;
                d->z = s->z;
            }
            self->unk_251 = 3;
            self->unk_21c |= 0xf00;
            *cnt = 0;
            return;
        }
    }
    if (*cnt % 10 < 5) {
        if (p->y < self->unk_228 + 0x800) {
            p->y += 0x80;
        }
    } else {
        if (p->y > self->unk_228 - 0x800) {
            p->y -= 0x80;
        }
    }
    (*cnt)++;
}

void func_ov003_0222cfb0(Rec *self) {
    s16 *cnt = &self->unk_242;
    s32 lvl = ((s32)self->unk_21c & 0xf0) >> 4;
    BOOL flag = FALSE;
    if (lvl > 0 && self->unk_251 == 0x13) {
        if (self->unk_24f % 0x14 == 0) {
            s32 r = func_02063b8c(100);
            if (self->unk_f4.mid == 0 && r > 0x5c) {
                func_020547a4(self->unk_50, 2);
            } else if (r > 0x32) {
                func_020547a4(self->unk_50, 0);
            }
        } else if (self->unk_f4.mid != 0) {
            func_ov003_0222d674(self);
        }
    } else {
        func_ov003_0222d674(self);
    }
    if (self->unk_251 != 0xb && self->unk_251 != 9) {
        func_ov003_0222d720(self);
    }
    func_ov003_0222e2e0(self, 5);
    u8 *st = &self->unk_251;
    switch (*st) {
    case 15:
        flag = TRUE;
    case 3:
        if (func_ov003_0222c9e0(self, 0) != 0) {
            if (flag != FALSE) {
                self->unk_251 = 0x12;
            }
        }
        break;
    case 4:
        if (lvl > 0) {
            func_ov068_0226a1a0(self);
        } else {
            func_ov003_0222cd58(self);
        }
        func_ov003_0222cc14(self);
        *cnt = 0;
        break;
    case 12:
    case 13:
    case 14:
        if (self->unk_24d == 0x17) {
            *cnt = 100;
        }
        func_ov003_0222ce78(self, cnt);
        break;
    case 7: {
        *st = 3;
        V3 *s = &self->unk_204;
        V3 *d = &self->unk_1d4;
        d->x = s->x;
        d->y = s->y;
        d->z = s->z;
        self->unk_21c |= 0xf00;
        break;
    }
    case 9:
    case 11:
        func_ov003_0222cca8(self, cnt);
        break;
    default:
        if (lvl > 0) {
            (*cnt)++;
            if ((*cnt > 0x28 && *cnt % 10 == 0 && func_02063b8c(100) > 0x50) || *cnt > 0xc8) {
                self->unk_21c &= 0xff0f;
                *cnt = 0;
                self->unk_251 = 0xc;
                self->unk_244 = 100;
            }
        } else {
            s32 r = func_ov003_0222d334(self);
            *cnt = 0;
            if (self->unk_24a == 0 && r != 0 && func_02072e88(data_020cbb18, data_020cbb18->unk_64) == 0) {
                func_ov068_0226a4f0(self);
            }
            if (self->unk_251 == 0x12) {
                self->unk_251 = 4;
            } else {
                self->unk_24a = 0;
                self->unk_251 = 0xc;
                self->unk_21c &= 0xfff0;
            }
        }
        break;
    }
}

s32 func_ov003_0222d1dc(s32 a) {
    if (a == 2) {
        return 0xf;
    }
    if (a == 3) {
        return 0xf;
    }
    return 0x3f;
}

enum Unk_ov003_0222d1f0_K { K_300 = 0x300 };

void func_ov003_0222d1f0(Rec *self, s16 *cnt) {
    s32 top;
    Unk_ov003_0222d1f0_K base = K_300;
    s32 a = self->unk_228;
    u8 flag = self->unk_24c;
    V3 *p = &self->unk_204;
    u8 *c = &self->unk_256;
    s32 b = self->unk_220;
    if (a != b) {
        top = base + b;
        a = b;
    } else {
        top = base + a;
    }
    if (*c < *cnt) {
        if (flag != 0) {
            *cnt = 0;
            *c = 0x10;
        } else {
            *cnt = 8;
            *c = 0x14;
        }
    }
    if (flag != 0) {
        if (p->y > top) {
            self->unk_24c = 0;
        }
    }
    if (p->y < a) {
        if (p->y > a - 0x320) {
            p->y = a;
        }
        self->unk_24c = 1;
    }
}

void func_ov003_0222d28c(Rec *self, s32 a) {
    V3 *p = &self->unk_204;
    s16 *cnt = &self->unk_242;
    V3 v;
    func_ov003_0222e328(&v, self->unk_23a);
    if (func_ov003_0222af48(self, 1) != 0) {
        func_ov003_02229910(self);
    }
    s32 c = *cnt;
    s32 t = func_01ffcb0c(a, (c * 0x44) << 12);
    v.y = t >> (func_01ffc5a4((c * c) << 12, 0x1000) + 12);
    if (func_ov003_0222e500(self, 0x50, 0xe38) == 0) {
        v.x = func_01ffcb0c(v.x, 0x10000);
        v.z = func_01ffcb0c(v.z, 0x10000);
    }
    (*cnt)++;
    func_01ffca8c(p, &v, p);
}

}
