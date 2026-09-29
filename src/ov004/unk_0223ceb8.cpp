#include "types.h"

struct Unk_ov004_0223ceb8_Vec {
    s32 x, y, z;
};

struct Unk_ov004_0223ceb8_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

struct Unk_ov004_0223ceb8_Sub {
    u8 pad_00[0x9c];
    u8 unk_9c[4];
    Unk_ov004_0223ceb8_Bits unk_a0;
    Unk_ov004_0223ceb8_Bits unk_a4;
};

struct Unk_ov004_0223ceb8 {
    /* 0x00 */ u8 pad_00[0x22];
    /* 0x22 */ u8 unk_22;
    /* 0x23 */ u8 pad_23;
    /* 0x24 */ u8 unk_24[4];
    /* 0x28 */ u8 pad_28[0x40 - 0x28];
    /* 0x40 */ Unk_ov004_0223ceb8_Vec unk_40;
    /* 0x4c */ s32 unk_4c;
    /* 0x50 */ u8 unk_50;
    /* 0x51 */ u8 pad_51[3];
    /* 0x54 */ s32 unk_54;
    /* 0x58 */ u8 pad_58[0x9a - 0x58];
    /* 0x9a */ u8 unk_9a;
    /* 0x9b */ u8 pad_9b;
    /* 0x9c */ s16 unk_9c;
    /* 0x9e */ s16 unk_9e;
    /* 0xa0 */ s32 unk_a0;
    /* 0xa4 */ u8 pad_a4[4];
    /* 0xa8 */ s32 unk_a8;
    /* 0xac */ s16 unk_ac;
    /* 0xae */ u8 unk_ae;
    /* 0xaf */ u8 pad_af;
    /* 0xb0 */ Unk_ov004_0223ceb8_Sub unk_b0;
    /* 0x158 */ u8 pad_158[0x168 - 0x158];
    /* 0x168 */ s16 unk_168;
    /* 0x16a */ s16 unk_16a;
    /* 0x16c */ s32 unk_16c;
    /* 0x170 */ u8 unk_170;
    /* 0x171 */ u8 pad_171;
    /* 0x172 */ s16 unk_172;
    /* 0x174 */ s32 unk_174;
    /* 0x178 */ u8 pad_178[0x192 - 0x178];
    /* 0x192 */ s16 unk_192;
    /* 0x194 */ u8 pad_194[2];
    /* 0x196 */ s8 unk_196;
    /* 0x197 */ u8 pad_197[0x2c8 - 0x197];
    /* 0x2c8 */ Unk_ov004_0223ceb8_Vec unk_2c8;
};

extern "C" {
extern u8 data_ov004_022523e4;
extern s16 data_02135f44[];
s32 func_02063b8c(u32 n);
s32 func_02133150(s32 a, s32 b);
s32 func_01ffcb0c(s32 a, s32 b);
s32 func_01ffc5a4(s32 a, s32 b);
s32 func_01ffca58(void *a, void *b, void *c);
s32 func_01ffca8c(void *a, void *b, void *c);
s32 func_02002bdc(void *a, void *b);
s32 func_020e9650(void *a, void *b);
s32 func_020e7530(void *a, s32 b, s32 c);
u8 *func_02095204(s32 a);
void func_02003c40(void *o, s32 id);
void func_02003c50(void *o, s32 id);
void func_020547a4(void *o, s32 v);
s32 func_0205668c(void *o, s32 a, s32 b, s32 c, s32 d);
void func_ov004_0223a524(void *a, void *b, s32 c);
void func_ov004_0223d980(void *out, s32 a);

s32 func_ov004_0223d020(Unk_ov004_0223ceb8 *self, void *out);
void func_ov004_0223d264(Unk_ov004_0223ceb8 *self, s16 *a, s32 *b, Unk_ov004_0223ceb8_Vec *c);
void func_ov004_0223d3b4(Unk_ov004_0223ceb8 *self, s32 a, s32 b, u32 c);
s32 func_ov004_0223d4ac(s32 a, s32 b);
s32 func_ov004_0223d5e8(Unk_ov004_0223ceb8 *self);
void func_ov004_0223d608(Unk_ov004_0223ceb8 *self);
void func_ov004_0223d720(Unk_ov004_0223ceb8 *self);
void func_ov004_0223cf44(Unk_ov004_0223ceb8 *self);
s32 func_ov004_0223d2cc(Unk_ov004_0223ceb8 *self);
}

struct Unk_ov004_0223d020_Rec {
    s32 x, y, z;
    s32 c;
    s32 d;
    u8 e;
};

extern "C" {

void func_ov004_0223ceb8(Unk_ov004_0223ceb8 *self, s16 *p) {
    s32 hi = 0x300;
    s32 a = self->unk_a8;
    u8 flag = self->unk_170;
    Unk_ov004_0223ceb8_Vec *v = &self->unk_2c8;
    s32 b = self->unk_54;
    if (a != b) {
        a = b;
    }
    hi += a;
    if (self->unk_16a < *p) {
        *p = 0;
        if (flag != 0) {
            *p = 0;
            self->unk_16a = 0x10;
        } else {
            *p = 8;
            self->unk_16a = 0x14;
        }
    }
    if (flag != 0 && v->y > hi) {
        self->unk_170 = 0;
    } else {
        s32 y = v->y;
        if (y < a) {
            if (y > a - 0x320) {
                v->y = a;
            }
            self->unk_170 = 1;
        }
    }
}

void func_ov004_0223cf44(Unk_ov004_0223ceb8 *self) {
    Unk_ov004_0223ceb8_Vec *v = &self->unk_2c8;
    s16 *pa = &self->unk_168;
    s32 t = *pa;
    t = t * (0x44 - t * 5);
    Unk_ov004_0223ceb8_Sub *sb = &self->unk_b0;
    if (sb->unk_a0.mid > 9) {
        func_0205668c(sb->unk_9c, 9, 0, self->unk_4c, 0);
    }
    if (self->unk_170 != 0 && t >= 0) {
        t = func_01ffcb0c(t, 0x2000);
    } else if (t < -0x333) {
        t = -0x333;
    }
    v->y += t;
    func_ov004_0223ceb8(self, pa);
    *pa = *pa + 4;
    func_ov004_0223d720(self);
    func_ov004_0223d3b4(self, 0xaaa, 0x14, 0x3c);
}

void func_ov004_0223cfe8(Unk_ov004_0223ceb8 *self) {
    switch (self->unk_172) {
    case 0:
        func_ov004_0223cf44(self);
        break;
    case 6:
        func_ov004_0223d608(self);
        break;
    default:
        self->unk_9a = 0;
        self->unk_172 = 0;
        self->unk_9c = 0;
        break;
    }
}

s32 func_ov004_0223d020(Unk_ov004_0223ceb8 *self, void *out_) {
    Unk_ov004_0223d020_Rec *out = (Unk_ov004_0223d020_Rec *)out_;
    volatile s32 old;
    s16 r4 = self->unk_9c;
    old = r4;
    s32 r7 = self->unk_9e;
    u8 *p = func_02095204(4);
    if (p != 0) {
        out->e = 1;
        out->c = *(s32 *)(p + 0x98);
        Unk_ov004_0223ceb8_Vec *pv = (Unk_ov004_0223ceb8_Vec *)(p + 0x5c);
        out->x = pv->x;
        out->y = pv->y;
        out->z = pv->z;
        out->d = func_020e9650(&self->unk_2c8, out);
        s32 t = out->d;
        if (t < 0x2000) {
            r4 += 0x19;
        } else if (t > self->unk_a0 || out->c == 0) {
            r4 -= 1;
        } else if (out->c <= 0x3e8) {
            r4 += 1;
        } else if (out->c <= 0x44c) {
            r4 = r4 + 3;
        } else if (out->c <= 0x490) {
            r4 = r4 + 5;
        } else if (out->c == 0x491) {
            r4 = r4 + 8;
        } else {
            r4 += 0xf;
        }
        if (r4 < 0) {
            r4 = 0;
        } else if (r4 > 0xff) {
            r4 = 0xff;
        }
        self->unk_9c = (u8)r4;
        if (r7 <= r4) {
            if (r7 > old) {
                return 1;
            }
            return 3;
        } else if (r7 > r4 && r7 <= old) {
            return 2;
        }
    } else {
        out->e = 0;
        return -1;
    }
    return 0;
}

s32 func_ov004_0223d12c(Unk_ov004_0223ceb8 *self) {
    Unk_ov004_0223d020_Rec rec;
    return func_ov004_0223d020(self, &rec);
}

void func_ov004_0223d13c(Unk_ov004_0223ceb8 *self, u32 a, s32 b) {
    s16 sv[2];
    sv[0] = self->unk_192;
    if (func_020e7530(sv, self->unk_ac, 0xe38) != 0) {
        self->unk_172 = b;
        self->unk_170 = a;
    }
    self->unk_192 = sv[0];
}

s32 func_ov004_0223d188(s32 a, s32 b) {
    s32 orig = a;
    u32 r = (u8)func_02063b8c(100);
    if (b == 3) {
        a = (s16)(a + 0x8000);
        if (r < 5) {
            a = (s16)(a + 0x2aaa);
        } else if (r < 10) {
            a = (s16)(a - 0x2aaa);
        }
    } else {
        if (b == 1 && (a < -0x4000 || (a >= 0 && a < 0x4000)) || b == 2 && (a > 0x4000 || (a <= 0 && a > -0x4000))) {
            a = (s16)(-a);
        } else if (a >= 0) {
            a = (s16)(0x8000 - a);
        } else {
            a = (s16)(-0x8000 - a);
        }
    }
    if (r > 0x50) {
        if (a - orig >= 0) {
            a = (s16)(a + 0x1554);
        } else {
            a = (s16)(a - 0x1554);
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

void func_ov004_0223d264(Unk_ov004_0223ceb8 *self, s16 *a, s32 *b, Unk_ov004_0223ceb8_Vec *c) {
    Unk_ov004_0223ceb8_Vec *p6 = &self->unk_2c8;
    Unk_ov004_0223ceb8_Vec *pv = &self->unk_40;
    c->x = pv->x;
    c->y = pv->y;
    c->z = pv->z;
    s32 r7 = self->unk_192;
    *a = func_02002bdc(p6, c) - r7;
    s16 t = *a;
    if (t > 0x38e) {
        *a = 0x38e;
    } else if (t < -0x38e) {
        *a = -0x38e;
    }
    *b = func_020e9650(c, p6);
}

s32 func_ov004_0223d2cc(Unk_ov004_0223ceb8 *self) {
    Unk_ov004_0223d020_Rec rec;
    s32 r = func_ov004_0223d020(self, &rec);
    if (rec.e != 0 && self->unk_9a == 0 && self->unk_9c >= self->unk_9e) {
        self->unk_ac = func_02002bdc(&rec, &self->unk_2c8);
        self->unk_174 = (func_02063b8c(4) + 10) * 20;
        self->unk_172 = 7;
        self->unk_9a = 1;
        self->unk_54 = self->unk_a8;
    }
    return r;
}

void func_ov004_0223d344(Unk_ov004_0223ceb8 *self, u32 a, s32 b, s32 c) {
    s32 r5;
    Unk_ov004_0223ceb8_Vec *v = &self->unk_2c8;
    s32 idx = ((u16)a >> 4) * 2;
    r5 = func_01ffc5a4(data_02135f44[idx], c);
    s32 r7 = b;
    if (self->unk_54 != self->unk_a8) {
        r7 = func_01ffcb0c(r7, 0x800);
    }
    if (r5 > 0 && v->y + r5 < r7 + self->unk_54 || r5 < 0 && v->y + r5 > self->unk_54 - r7) {
        v->y = v->y + r5;
    }
}

void func_ov004_0223d3b4(Unk_ov004_0223ceb8 *self, s32 a, s32 b, u32 c) {
    s32 r6 = self->unk_192;
    u8 r7 = self->unk_ae;
    u32 rnd = (u8)func_02063b8c(100);
    Unk_ov004_0223ceb8_Vec *v = &self->unk_2c8;
    Unk_ov004_0223ceb8_Vec o;
    if (data_ov004_022523e4 % b == 0 && rnd > c) {
        if (r7 == 0) {
            r7 = 1;
        } else {
            r7 = 0;
        }
        self->unk_ae = r7;
    }
    if (rnd > self->unk_50) {
        if (r7 != 0) {
            r6 = (s16)(r6 + a);
        } else {
            r6 = (s16)(r6 - a);
        }
    }
    func_ov004_0223d980(&o, r6);
    self->unk_192 = r6;
    if (self->unk_9a != 0) {
        v->x = v->x + func_01ffcb0c(func_01ffcb0c(0x1800, self->unk_16c << 12), o.x);
        v->z = v->z + func_01ffcb0c(func_01ffcb0c(0x1800, self->unk_16c << 12), o.z);
    } else {
        v->x = v->x + func_01ffcb0c(self->unk_16c << 12, o.x);
        v->z = v->z + func_01ffcb0c(self->unk_16c << 12, o.z);
    }
}

s32 func_ov004_0223d4ac(s32 a, s32 b) {
    switch (a) {
    case 0xa: return 0x831;
    case 0x33: return 0x823;
    case 0x1d: return 0x825;
    case 0x1b: return 0x826;
    case 0x1c: return 0x82c;
    case 0x10: return 0x822;
    case 0x11: return 0x827;
    case 0x12: return 0x82e;
    case 0x13: return 0x824;
    case 0x32: return 0x828;
    case 0x1e:
        if (b == 0) return 0x829;
        return 0x82a;
    case 0x36: return 0x833;
    case 0x37: return 0x835;
    case 0x34:
        switch (b) {
        case 0: return 0x1d2;
        case 1: return 0x1d3;
        }
        break;
    }
    return -1;
}

BOOL func_ov004_0223d5a8(Unk_ov004_0223ceb8 *self, s32 b) {
    s32 id = func_ov004_0223d4ac(self->unk_196, b);
    if (id >= 0) {
        if (b == 1) {
            func_02003c50(self->unk_24, id);
        } else {
            func_02003c40(self->unk_24, id);
        }
        return TRUE;
    }
    return FALSE;
}

s32 func_ov004_0223d5e8(Unk_ov004_0223ceb8 *self) {
    s32 t = (s16)self->unk_174;
    if (t > 0) {
        self->unk_174 = t - 1;
        return 0;
    }
    return 1;
}

void func_ov004_0223d608(Unk_ov004_0223ceb8 *self) {
    u8 st = *(u8 *)&self->unk_196;
    func_ov004_0223d2cc(self);
    if (func_ov004_0223d5e8(self) == 0 || self->unk_22 == 0) {
        if (self->unk_9a == 0) {
            if (st == 0xa || st == 0x33) {
                if (self->unk_b0.unk_a4.mid != 0) {
                    func_020547a4(&self->unk_b0, 0);
                }
            } else if (self->unk_b0.unk_a0.mid < 0xc) {
                func_0205668c(self->unk_b0.unk_9c, 0x11, 1, 0x1000, 9);
            } else if (self->unk_b0.unk_a4.mid == 0x10) {
                if (self->unk_22 != 0 || data_ov004_022523e4 % 10 == 0) {
                    if (func_02063b8c(100) > 0x5f) {
                        func_0205668c(self->unk_b0.unk_9c, 0x11, 1, 0x1000, 9);
                    }
                }
            }
            return;
        }
    }
    self->unk_172 = 0x19;
    self->unk_54 = self->unk_a8;
    self->unk_174 = (func_02063b8c(10) + 0x10) * 20;
    if (st != 0xa && st != 0x33) {
        func_0205668c(self->unk_b0.unk_9c, 9, 0, self->unk_4c, 0);
    } else {
        func_020547a4(&self->unk_b0, 1);
    }
}

void func_ov004_0223d720(Unk_ov004_0223ceb8 *self) {
    if (func_ov004_0223d5e8(self) != 0) {
        Unk_ov004_0223ceb8_Vec *r4 = &self->unk_2c8;
        s16 a;
        s32 b;
        Unk_ov004_0223ceb8_Vec c;
        func_ov004_0223d264(self, &a, &b, &c);
        if (b <= 0x400 && r4->y <= c.y + 0x200 && r4->y >= c.y - 0x200) {
            self->unk_172 = 6;
            self->unk_174 = (s16)((func_02063b8c(10) + 10) * 20);
            self->unk_168 = 0;
        } else {
            s32 r6 = self->unk_50;
            if (func_02063b8c(100) > r6 - 0x14) {
                if (b <= 0x3000) {
                    self->unk_54 = c.y;
                } else {
                    self->unk_54 = self->unk_a8;
                }
                self->unk_192 = a + self->unk_192;
                func_01ffca58(&c, r4, &c);
                func_ov004_0223a524(&c, &c, 1);
                func_01ffca8c(r4, &c, r4);
            }
        }
    } else {
        self->unk_54 = self->unk_a8;
    }
}

}
