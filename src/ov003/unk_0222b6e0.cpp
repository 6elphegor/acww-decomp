#include "types.h"

struct Unk_ov003_0222b6e0_V3 {
    s32 x, y, z;
};
typedef Unk_ov003_0222b6e0_V3 V3;

struct Unk_ov003_0222b6e0_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

// One 0x25c-byte entry of the tables at data_ov003_02259354 / 0225980c / 0225a17c
struct Unk_ov003_0222b6e0_Rec {
    u8 unk_00[0x50];                   // 0x00
    u8 unk_50[0xec - 0x50];            // 0x50
    u8 unk_ec[8];                      // 0xec
    Unk_ov003_0222b6e0_Bits unk_f4;    // 0xf4
    u8 unk_f8[0x130 - 0xf8];           // 0xf8
    u8 unk_130[0x1d4 - 0x130];         // 0x130
    V3 unk_1d4;                        // 0x1d4
    u8 pad_1e0[0x204 - 0x1e0];         // 0x1e0
    V3 unk_204;                        // 0x204
    u8 pad_210[0x21c - 0x210];         // 0x210
    s32 unk_21c;                       // 0x21c
    u8 pad_220[0x228 - 0x220];         // 0x220
    s32 unk_228;                       // 0x228
    u8 pad_22c[0x232 - 0x22c];         // 0x22c
    s16 unk_232;                       // 0x232
    u8 pad_234[2];                     // 0x234
    s16 unk_236;                       // 0x236
    s16 unk_238;                       // 0x238
    s16 unk_23a;                       // 0x23a
    s16 unk_23c;                       // 0x23c
    s16 unk_23e;                       // 0x23e
    s16 unk_240;                       // 0x240
    s16 unk_242;                       // 0x242
    s16 unk_244;                       // 0x244
    u8 pad_246;                        // 0x246
    u8 unk_247;                        // 0x247
    u8 pad_248[2];                     // 0x248
    u8 unk_24a;                        // 0x24a
    u8 unk_24b;                        // 0x24b
    u8 unk_24c;                        // 0x24c
    s8 unk_24d;                        // 0x24d
    s8 unk_24e;                        // 0x24e
    u8 pad_24f;                        // 0x24f
    u8 pad_250;                        // 0x250
    u8 unk_251;                        // 0x251
    u8 unk_252;                        // 0x252
    u8 pad_253;                        // 0x253
    u8 unk_254;                        // 0x254
    u8 unk_255;                        // 0x255
    u8 pad_256;                        // 0x256
    u8 unk_257;                        // 0x257
    u8 pad_258[0x25c - 0x258];         // 0x258
};
typedef Unk_ov003_0222b6e0_Rec Rec;

struct Unk_020cbb18_Ptr {
    u8 unk_00[0x64];
    u32 unk_64;
};

struct Unk_ov003_0222bb28_V3 : V3 {
    Unk_ov003_0222bb28_V3() {}
};

class Unk_0203389c {
public:
    u8 pad_00[0x24];
    s32 unk_24, unk_28, unk_2c;
    s32 unk_30;
    s32 unk_34;
    u8 pad_38[4];
    s32 unk_3c;
    BOOL func_020338d0(s32 a);
    s32 func_02033914(s32 a);
};

class Unk_0203398c : public Unk_0203389c {
public:
    Unk_0203398c() {}
    Unk_0203398c *func_020339bc(V3 *v, s32 a, s32 b);
    ~Unk_0203398c();
};

extern "C" {
extern Unk_020cbb18_Ptr *data_020cbb18;
extern u8 data_020e12cc[];

BOOL func_02072e88(Unk_020cbb18_Ptr *p, u32 v);
BOOL func_020a62a0();
BOOL func_02031218(s32 x, s32 y);
s32 func_0209c0ac(void *p);
s32 func_02106054(void *p, s32 a, s32 b);
s32 func_01ffc5a4(s32 a, s32 b);
s32 func_01ffcb0c(s32 a, s32 b);
s32 func_02002bdc(void *a, void *b);
s32 func_020e9650(void *a, void *b);
void func_020547a4(void *p, s32 v);
s32 func_02030814(u32 a);
void func_02041868();
void *func_0204da0c();
void func_0204ee10(s32 *a, s32 *b, void *c);
u16 *func_0204ebd8(void *g, s32 hx, s32 hy, s32 lx, s32 ly, u32 layer);
void func_0208fc88(u32 a, void *b, u32 c, void *d);

void func_ov003_02229910(Rec *e);
void func_ov003_02229ab4(Rec *o);
BOOL func_ov003_022260e8(void *p);
BOOL func_ov003_0222abc0(Rec *o);
BOOL func_ov003_0222adc4(Rec *o);
s32 func_ov003_0222af48(Rec *o, s32 a);
void func_ov003_0222b450(Rec *o, s16 *p);
void func_ov003_0222b518(Rec *o);
void func_ov003_0222b620(Rec *o);
s32 func_ov003_0222d28c(Rec *o, s32 v);
void func_ov003_0222d674(Rec *o);
s32 func_ov003_0222dd54(Rec *o, s32 a, s32 b);
s32 func_ov003_0222dd90(Rec *o, V3 *p);
void func_ov003_0222de04(Rec *o);
void func_ov003_0222df80(Rec *o);
void *func_ov003_0222e098(void *p);
void func_ov003_0222e1e0(Rec *o, s32 a, s32 b);
void func_ov003_0222e328(V3 *v, s32 a);
s32 func_ov003_0222e500(Rec *o, s32 a, s32 b);
void func_ov068_02269d58(Rec *o);

void func_ov003_0222b838(Rec *self, s16 *cnt);
void func_ov003_0222b928(Rec *self, s16 *cnt);
void func_ov003_0222bb28(Rec *self, s16 *cnt);
void func_ov003_0222bd60(Rec *self, s16 *cnt);
}

extern "C" void func_ov003_0222b6e0(Rec *self) {
    s16 *cnt = &self->unk_242;
    switch (self->unk_251) {
    case 4:
    case 17:
        func_ov003_0222b518(self);
        break;
    case 11:
        if (self->unk_f4.mid == 1) {
            func_020547a4(self->unk_50, 0);
        }
    case 5:
        func_ov003_0222bb28(self, cnt);
        break;
    case 9:
        func_ov003_0222b928(self, cnt);
        break;
    case 7:
        func_ov003_0222b620(self);
        break;
    case 19:
        func_ov003_0222b450(self, cnt);
        if (self->unk_f4.mid != 0) {
            func_020547a4(self->unk_50, 0);
        }
        break;
    }
}

extern "C" s32 func_ov003_0222b784(Rec *self) {
    s32 t = func_ov003_0222e500(self, 0x50, 0xe38);
    s32 ret = 0;
    u32 c = self->unk_252;
    if (t != 0) {
        s32 m = self->unk_24d;
        s32 r;
        if (m == 0x35) {
            r = self->unk_23c;
        } else {
            r = self->unk_23a;
        }
        if (t == 3) {
            if (c == 1 || c == 10) {
                r = (s16)(r - 0xaaa);
            } else {
                r = (s16)(r + 0xaaa);
            }
        } else if (t == 1 || c == 1) {
            r = (s16)(r - 0x38e);
            c = 1;
        } else if (t == 2 || c == 2) {
            r = (s16)(r + 0x38e);
            c = 2;
        }
        if (m == 0x35) {
            self->unk_23c = r;
        } else {
            self->unk_23a = r;
        }
        ret = 1;
    } else if (c < 10) {
        c = (u8)(c * 10);
    }
    self->unk_252 = c;
    return ret;
}

extern "C" void func_ov003_0222b838(Rec *self, s16 *cnt) {
    s32 r4 = self->unk_232;
    if (func_02072e88(data_020cbb18, data_020cbb18->unk_64)) {
        if (func_ov003_0222abc0(self) != 0) {
            return;
        }
    } else {
        if (func_ov003_0222adc4(self) == 0) {
            return;
        }
    }
    self->unk_232 = r4 - 1;
    if (r4 == 5) {
        s32 x, y;
        func_0204ee10(&x, &y, &self->unk_204);
        if (func_02031218(x, y) == 0 && func_02072e88(data_020cbb18, data_020cbb18->unk_64) == 0) {
            func_0208fc88(0x80, &self->unk_204, 0, data_020e12cc);
        } else {
            self->unk_251 = 9;
        }
    } else if (r4 <= 0) {
        s32 c = *cnt;
        if (c < 2) {
            self->unk_23a = self->unk_23a - 0xaaa;
        } else {
            r4 = c + 1;
            if (r4 % 4 == 0) {
                self->unk_23a = self->unk_23a + 0xaaa;
            } else if (r4 % 2 == 0) {
                self->unk_23a = self->unk_23a - 0xaaa;
            }
        }
        *cnt = 0;
        func_ov003_02229910(self);
    }
}

extern "C" void func_ov003_0222b928(Rec *self, s16 *cnt) {
    V3 *pos = &self->unk_204;
    s32 mul = 2;
    s8 r7 = self->unk_24d;
    V3 v;
    s16 r6;
    Unk_0203398c g;
    g.func_020339bc(pos, 0, 1);
    if (func_ov003_0222af48(self, 1)) {
        func_ov003_02229910(self);
    }
    if (func_ov003_0222b784(self)) {
        return;
    }
    if (g.unk_30 != 0) {
        if (g.func_020338d0(pos->y)) {
            func_ov003_02229910(self);
            func_ov003_0222de04(self);
        } else {
            pos->y = pos->y - 0x100;
        }
        return;
    }
    pos->y = pos->y - 0x200;
    if (r7 == 0x35) {
        r6 = self->unk_23c;
        func_ov003_0222e328(&v, r6);
    } else {
        if ((u8)(s8)(r7 - 0x36) <= 1) {
            mul = 4;
        }
        r6 = self->unk_23a;
        func_ov003_0222e328(&v, r6);
    }
    if (r7 == 0x1f) {
        s32 c = *cnt;
        if (c == 0) {
            r6 = r6 + func_01ffc5a4(0x2000, 0x6000);
        } else if (c % 16 == 0) {
            r6 = r6 + 0x71c;
        } else if (c % 8 == 0) {
            r6 = r6 - 0x71c;
        }
    } else {
        s32 c = *cnt;
        if (c == 0) {
            r6 = r6 + func_01ffc5a4(0x2000, 0x6000);
        } else if (c % 4 == 0) {
            r6 = r6 + 0xaaa;
        } else if (c % 2 == 0) {
            r6 = r6 - 0xaaa;
        }
    }
    if (r7 == 0x35) {
        self->unk_23c = r6;
        self->unk_23a = 0;
    } else {
        self->unk_23a = r6;
    }
    if (r7 == 0x1a) {
        pos->z += func_01ffcb0c(func_01ffcb0c(self->unk_257 << 12, v.z), 0x400);
        pos->x += func_01ffcb0c(func_01ffcb0c(self->unk_257 << 12, v.x), 0x400);
    } else {
        pos->x += func_01ffcb0c(v.x, (mul * self->unk_257) << 12);
        s32 vz = *(volatile s32 *)&v.z;
        mul = mul * self->unk_257;
        pos->z += func_01ffcb0c(vz, mul << 12);
    }
    *cnt = *cnt + 1;
}

extern "C" void func_ov003_0222bb28(Rec *self, s16 *cnt) {
    V3 *pos = &self->unk_204;
    volatile V3 saved;
    saved.x = pos->x;
    saved.y = pos->y;
    saved.z = pos->z;
    V3 v;
    s32 lim;
    Unk_0203398c g;
    g.func_020339bc(pos, 0, 1);
    if (self->unk_24d == 0x35) {
        self->unk_23a = 0;
        func_ov003_0222e328(&v, self->unk_23c);
    } else {
        func_ov003_0222e328(&v, self->unk_23a);
    }
    if (self->unk_251 == 5 || func_ov003_0222e500(self, 0x50, 0xe38) == 0) {
        pos->x += func_01ffcb0c((self->unk_257 + 2) << 12, v.x);
        pos->z += func_01ffcb0c((self->unk_257 + 2) << 12, v.z);
    }
    if (self->unk_251 == 9 || self->unk_251 == 11) {
        switch (self->unk_24d) {
        case 0x1f:
        case 0x18:
        case 0x35:
        case 0x36:
        case 0x37: {
            s32 n = *cnt;
            pos->y = pos->y - n * (n * 10);
            break;
        }
        default: {
            s32 n = *cnt;
            pos->y = pos->y + n * (160 - n * 11);
            break;
        }
        }
    } else {
        s32 n = *cnt;
        pos->y = pos->y + n * (200 - n * 11);
    }
    if (g.unk_30 != 0) {
        lim = g.unk_3c;
    } else {
        lim = g.func_02033914(0);
        if (lim > 0x4000) {
            lim = 0;
            pos->x = saved.x;
            pos->z = saved.z;
        }
    }
    if (pos->y <= lim && *cnt > 0) {
        if (g.func_020338d0(pos->y)) {
            func_ov003_02229910(self);
            func_ov003_0222de04(self);
        } else {
            if (self->unk_251 == 0xb) {
                if (self->unk_24d == 0x1f) {
                    self->unk_257 = 4;
                } else if (self->unk_24d == 0x31) {
                    self->unk_232 = 0;
                    if (self->unk_f4.mid != 1) {
                        func_020547a4(self->unk_50, 1);
                    }
                }
                self->unk_251 = 9;
            } else {
                self->unk_251 = 4;
                if (self->unk_24d == 0x31) {
                    func_020547a4(self->unk_50, 1);
                }
                if (self->unk_24d == 0x31 || self->unk_24d == 0x1e) {
                    if (func_02072e88(data_020cbb18, data_020cbb18->unk_64) && func_020a62a0()) {
                        func_ov003_0222e1e0(self, self->unk_23a, 0xc000);
                    }
                }
            }
            self->unk_254 = 0;
            *cnt = 0;
            pos->y = lim + func_02030814(0);
            if (self->unk_24d != 0x35) {
                self->unk_238 = 0;
            }
        }
    } else {
        *cnt = *cnt + 2;
    }
}

extern "C" void func_ov003_0222bd60(Rec *self, s16 *cnt) {
    V3 *pos = &self->unk_204;
    void *o = func_ov003_0222e098(pos);
    if (func_ov003_0222dd90(self, pos)) {
        if (o != 0) {
            s32 a = func_02002bdc(pos, (u8 *)o + 0x5c);
            self->unk_251 = 5;
            func_02106054((void *)func_0209c0ac(self->unk_130), 0, 0x1f);
            self->unk_23a = a + 0x8000;
            *cnt = 0;
        }
    } else {
        if (o != 0) {
            if (func_020e9650(pos, (u8 *)o + 0x5c) < 0x5000) {
                self->unk_252 = 0x3c;
            }
        }
        s32 t = self->unk_252;
        if (t > 0) {
            func_ov003_0222dd54(self, 0, 1);
            self->unk_252 = t - 1;
        }
    }
}

extern "C" void func_ov003_0222be0c(Rec *self) {
    s16 *cnt = &self->unk_242;
    switch (self->unk_251) {
    case 4:
    case 17:
        func_ov003_0222dd54(self, 1, 1);
        func_ov003_0222b838(self, cnt);
        break;
    case 5:
    case 11:
        func_ov003_0222bb28(self, cnt);
        break;
    case 9:
        func_ov003_0222b928(self, cnt);
        break;
    case 19:
        func_ov003_0222bd60(self, cnt);
        break;
    }
}

extern "C" void func_ov003_0222be88(Rec *self) {
    switch (self->unk_251) {
    case 11:
        func_ov003_0222bb28(self, &self->unk_242);
        break;
    case 9:
        func_ov003_0222b928(self, &self->unk_242);
        break;
    case 7:
    case 8:
        if (func_ov003_0222af48(self, 4)) {
            func_02106054((void *)func_0209c0ac(self->unk_130), 0, 0);
            self->unk_251 = 0x13;
            V3 *p = &self->unk_204;
            p->x = 0;
            p->y = 0;
            p->z = 0;
            func_02041868();
        }
        break;
    case 18: {
        void *g = func_0204da0c();
        V3 *pos = &self->unk_204;
        s32 x, y;
        func_0204ee10(&x, &y, pos);
        s32 lx = *(volatile s32 *)&x;
        s32 ly = *(volatile s32 *)&y;
        s32 hx = lx >> 4;
        s32 hy = ly >> 4;
        u16 *p = func_0204ebd8(g, hx, hy, lx - (hx << 4), ly - (hy << 4), 0);
        BOOL r = FALSE;
        u32 v = *p;
        if (v >= 0x154a && v <= 0x1553) {
            r = TRUE;
        }
        if (r == 0 || func_ov003_022260e8(pos) != 0) {
            self->unk_251 = 7;
        }
        break;
    }
    }
}

extern "C" void func_ov003_0222bf7c(Rec *self) {
    switch (self->unk_251) {
    case 0:
        func_ov068_02269d58(self);
        break;
    case 6:
        func_ov003_02229ab4(self);
        func_ov003_0222df80(self);
        break;
    case 9:
    case 11:
        func_ov003_0222d674(self);
        func_ov003_0222dd54(self, 0, 1);
        func_ov003_0222d28c(self, 0x1ccd);
        break;
    case 7:
        self->unk_251 = 0;
        if (self->unk_24a != 0) {
            self->unk_23a = self->unk_23a + self->unk_240;
        }
        break;
    case 19:
        self->unk_24a = 0;
        self->unk_251 = 0;
        break;
    }
}
