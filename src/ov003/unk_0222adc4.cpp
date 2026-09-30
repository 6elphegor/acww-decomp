#include "types.h"

struct Unk_ov003_0222adc4_V3 {
    s32 x, y, z;
};
typedef Unk_ov003_0222adc4_V3 V3;

struct Unk_ov003_0222aff0_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

// One 0x25c-byte entry of the tables at data_ov003_02259354 / 0225980c / 0225a17c
struct Unk_ov003_0222aff0_A {
    u8 pad_00[0x9c];
};
struct Unk_ov003_0222aff0_B {
    u8 pad_00[8];
    Unk_ov003_0222aff0_Bits bits;
    u8 pad_0c[0x44 - 0xc];
};
struct Unk_ov003_0222aff0_Sub : Unk_ov003_0222aff0_A, Unk_ov003_0222aff0_B {
};

struct Unk_ov003_0222adc4_Rec {
    u8 unk_00[0x50];                   // 0x00
    Unk_ov003_0222aff0_Sub unk_50;     // 0x50
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
    u8 pad_238[2];                     // 0x238
    s16 unk_23a;                       // 0x23a
    u8 pad_23c[2];                     // 0x23c
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
    u8 pad_252[2];                     // 0x252
    u8 unk_254;                        // 0x254
    u8 unk_255;                        // 0x255
    u8 pad_256;                        // 0x256
    u8 unk_257;                        // 0x257
    u8 pad_258[0x25c - 0x258];         // 0x258
};
typedef Unk_ov003_0222adc4_Rec Rec;

struct Unk_020cbb18_Ptr {
    u8 unk_00[0x64];
    u32 unk_64;
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

BOOL func_02072e88(Unk_020cbb18_Ptr *p, u32 v);
BOOL func_020a62a0();
s32 func_0206f11c();
s32 func_0209c0ac(void *p);
s32 func_02106020(void *a, s32 b);
s32 func_02106054(void *p, s32 a, s32 b);
s32 func_01ffc5a4(s32 a, s32 b);
s32 func_01ffcb0c(s32 a, s32 b);
s32 func_02002bdc(void *a, void *b);
void func_0205668c(void *p, u32 a, s32 b, s32 c, u32 d);
void func_020547a4(void *p, s32 v);
s32 func_02030814(u32 a);
s32 func_02063b8c(s32 n);
s32 func_020e7530(s16 *a, s32 b, s32 c);

BOOL func_ov003_02211fd0();
s32 func_ov003_022126d0(V3 *a, s32 b);
void func_ov003_02226d08(Rec *o, s32 v);
void func_ov003_02229910(Rec *e);
void func_ov003_0222a36c(Rec *o, s16 *p);
BOOL func_ov003_0222abc0(Rec *o);
void func_ov003_0222b928(Rec *o, s16 *p);
void func_ov003_0222bb28(Rec *o, s16 *p);
s32 func_ov003_0222b784(Rec *o);
s32 func_ov003_0222c620(s32 a, s32 b);
void func_ov003_0222c7fc(Rec *o, s32 *out);
s32 func_ov003_0222d28c(Rec *o, s32 v, u8 *p);
s32 func_ov003_0222d334(Rec *o);
s32 func_ov003_0222d350(Rec *o);
s32 func_ov003_0222dd54(Rec *o, s32 a, s32 b);
s32 func_ov003_0222dd90(Rec *o, V3 *p);
void func_ov003_0222de04(Rec *o);
void *func_ov003_0222e098(void *p);
void func_ov003_0222e1e0(Rec *o, s32 a, s32 b);
void func_ov003_0222e328(V3 *v, s32 a);
s32 func_ov068_02269040(Rec *o, s16 *p);
void func_ov068_02269110(Rec *o, s16 *p, s32 r);
void func_ov068_02269b20(Rec *o);
void func_ov068_02269d18(Rec *o);
void func_ov068_0226a004(Rec *o);
}

extern "C" BOOL func_ov003_0222adc4(Rec *self) {
    BOOL result;
    s16 *cnt;
    V3 v;
    Unk_0203398c g;
    V3 *pos = &self->unk_204;
    cnt = &self->unk_242;
    s32 r6 = 2;
    result = TRUE;
    g.func_020339bc(pos, 0, result);
    s8 r7 = self->unk_24d;
    func_ov003_0222e328(&v, self->unk_23a);
    if (g.unk_30 != 0) {
        if (g.func_020338d0(pos->y)) {
            func_ov003_02229910(self);
            func_ov003_0222de04(self);
            result = FALSE;
        } else {
            pos->y -= 0x200;
        }
    } else {
        pos->y -= 0x200;
    }
    if (func_ov003_0222b784(self)) {
        self->unk_24b = 0;
        return TRUE;
    }
    if ((u8)(s8)(r7 - 0x36) <= 1) {
        if (self->unk_251 == 5) {
            if (self->unk_23e > 0 && r7 != 0x37) {
                r6 = 12;
            } else {
                r6 = 7;
            }
        } else {
            r6 = 4;
        }
    }
    s32 o;
    s32 sp;
    if (self->unk_24d == 0x37) {
        sp = 0x71c;
    } else {
        sp = 0xaaa;
    }
    s32 c = *cnt;
    if (c == 0) {
        o = self->unk_23a;
        self->unk_23a = o + func_01ffc5a4(sp, 0x2000);
    } else if (c % 4 == 0) {
        self->unk_23a = sp + self->unk_23a;
    } else if (c % 2 == 0) {
        self->unk_23a = self->unk_23a - sp;
    }
    pos->x += func_01ffcb0c(v.x, (r6 * self->unk_257) << 12);
    pos->z += func_01ffcb0c(v.z, (r6 * self->unk_257) << 12);
    *cnt = *cnt + 1;
    self->unk_24b = 1;
    return result;
}

extern "C" BOOL func_ov003_0222af48(Rec *self, s32 a) {
    u8 *p = self->unk_130;
    s32 t = func_02106020((void *)func_0209c0ac(p), 0);
    if (t > 7) {
        func_02106054((void *)func_0209c0ac(p), 0, t - a);
    } else {
        return TRUE;
    }
    return FALSE;
}

extern "C" void func_ov003_0222af84(Rec *self) {
    switch (self->unk_251) {
    case 4:
        func_ov068_02269b20(self);
        break;
    case 5:
        func_ov068_02269d18(self);
        break;
    case 9:
    case 11:
        func_ov003_0222a36c(self, &self->unk_242);
        break;
    case 0x13:
        func_020547a4(&self->unk_50, 3);
        self->unk_251 = 4;
        break;
    }
}

extern "C" void func_ov003_0222aff0(Rec *self) {
    s32 r = 0;
    u8 st = self->unk_251;
    V3 *pos = &self->unk_204;
    s16 *p23e = &self->unk_23e;
    Unk_ov003_0222aff0_Sub *sub = &self->unk_50;
    if (func_0206f11c() == 0) {
        if (func_ov003_02211fd0()) {
            self->unk_247 = 1;
        } else {
            self->unk_247 = 0;
        }
    }
    if (self->unk_24c == 0 && st != 0xb && st != 9) {
        r = func_ov068_02269040(self, &self->unk_236);
        if (self->unk_251 != 5) {
            if (r == 1) {
                return;
            }
            if (self->unk_24d == 0x37 && r == 0) {
                u32 m = sub->bits.mid;
                if (m > 3) {
                    func_0205668c((Unk_ov003_0222aff0_B *)&(Unk_ov003_0222aff0_B &)*sub, 3, 3, 0x1000, m);
                } else if (m == 3) {
                    func_0205668c((Unk_ov003_0222aff0_B *)&(Unk_ov003_0222aff0_B &)*sub, 3, 0, 0x1000, 0);
                }
            }
        }
    }
    switch (st) {
    case 4:
    case 5:
    case 7:
        func_ov068_02269110(self, &self->unk_23e, r);
        break;
    case 11:
        func_ov003_0222bb28(self, &self->unk_242);
        break;
    case 9:
        func_ov003_0222dd54(self, 0, 1);
        func_ov003_0222b928(self, &self->unk_242);
        break;
    case 3: {
        volatile u32 w32;
        *(volatile s16 *)&w32 = self->unk_23a;
        if (func_020e7530((s16 *)&w32, self->unk_240, 0x666)) {
            self->unk_251 = 4;
        }
        self->unk_23a = *(volatile s16 *)&w32;
        break;
    }
    case 0x13:
        if (self->unk_24c != 0) {
            s32 k = *p23e;
            if (k == 0 || self->unk_24d == 0x37) {
                self->unk_251 = 3;
                self->unk_244 = 100;
                s32 j = self->unk_23a;
                s32 t = func_ov003_0222c620(8, 1);
                self->unk_240 = t + j + 0x8000;
                *p23e = 0;
            } else if (pos->y > 0 && self->unk_24d == 0x36) {
                s32 t = func_01ffcb0c(func_01ffc5a4(0x1000, 0x12000), k << 12);
                pos->y += t + k * k * -10;
                *p23e = *p23e + 3;
                if (pos->y <= 0) {
                    *p23e = 0;
                }
            }
        } else if (func_ov003_0222d334(self)) {
            self->unk_251 = 3;
            self->unk_244 = func_02063b8c(3) * 20;
            s32 j = self->unk_23a;
            s32 t = func_ov003_0222c620(16, 1);
            self->unk_240 = t + j;
        }
        break;
    }
}

extern "C" void func_ov003_0222b224(Rec *self) {
    u32 st = self->unk_251;
    switch (st) {
    case 6:
        func_ov003_0222b784(self);
        if (func_ov003_0222d334(self)) {
            self->unk_251 = 0xb;
        }
        break;
    case 11: {
        s16 *p = &self->unk_242;
        V3 *pos = &self->unk_204;
        s32 rnd, d1, d2;
        volatile V3 save;
        save.x = pos->x;
        save.y = pos->y;
        save.z = pos->z;
        s32 y0 = self->unk_228;
        Unk_0203398c g;
        g.func_020339bc(pos, 0, 1);
        func_ov003_02226d08(self, 200);
        if (func_ov003_0222b784(self) == 0) {
            V3 v;
            func_ov003_0222e328(&v, self->unk_23a);
            pos->x += func_01ffcb0c(self->unk_257 << 12, v.x);
            pos->z += func_01ffcb0c(self->unk_257 << 12, v.z);
        }
        if (y0 > 0x1000) {
            d1 = *p << 12;
            pos->y = y0 + func_01ffcb0c(0x59a - func_01ffcb0c(0xcd, d1), d1);
        } else {
            d2 = *p << 12;
            pos->y = y0 + func_01ffcb0c(0x99a - func_01ffcb0c(0xcd, d2), d2);
        }
        if (g.unk_30 != 0) {
            y0 = g.unk_3c;
        } else {
            y0 = g.func_02033914(1);
            y0 += func_02030814(0);
            if (y0 > 0x1000) {
                if (y0 > 0x4000) {
                    y0 = func_02030814(0);
                } else {
                    pos->x = save.x;
                    pos->z = save.z;
                }
            }
        }
        if (pos->y < y0) {
            rnd = func_02063b8c(3);
            *p = 0;
            pos->y = y0;
            if (g.func_020338d0(pos->y)) {
                func_ov003_02229910(self);
                func_ov003_0222de04(self);
            } else {
                self->unk_251 = 6;
                self->unk_244 = 4;
                self->unk_228 = y0;
                s32 t;
                if (func_02063b8c(100) > 0x32 && (t = self->unk_21c - rnd) > 0) {
                    self->unk_257 = t;
                } else {
                    self->unk_257 = rnd + self->unk_21c;
                }
            }
        } else {
            *p = *p + 1;
        }
        if (func_ov003_0222af48(self, 1)) {
            func_ov003_02229910(self);
        }
        break;
    }
    }
}

extern "C" void func_ov003_0222b3f4(Rec *self) {
    u8 *p;
    p = &self->unk_251;
    switch (*p) {
    case 0:
        func_ov068_0226a004(self);
        break;
    case 9:
    case 11:
        func_ov003_0222d28c(self, 0x1ccd, p);
        break;
    case 7:
        func_ov003_0222d350(self);
        break;
    case 0x13:
        self->unk_24a = 0;
        *p = 0;
        break;
    }
}

extern "C" BOOL func_ov003_0222b450(Rec *self, s16 *out) {
    s8 *p = &self->unk_24e;
    V3 *sub = &self->unk_204;
    if (*p <= 0) {
        if (func_02072e88(data_020cbb18, data_020cbb18->unk_64)) {
            s8 i;
            for (i = 0; i < 4; i++) {
                *p = func_ov003_022126d0(sub, i);
                if (*p > 0) {
                    break;
                }
            }
        } else {
            *p = func_ov003_022126d0(sub, 4);
        }
    }
    s8 c = *p;
    if (c > 0) {
        c--;
        *p = c;
        if (*p == 0) {
            void *o = func_ov003_0222e098(sub);
            if (o) {
                s32 v = func_02002bdc(sub, (u8 *)o + 0x5c);
                self->unk_251 = 5;
                func_02106054((void *)func_0209c0ac(self->unk_130), 0, 0x1f);
                self->unk_23a = v + 0x8000;
                *out = 0;
                return TRUE;
            }
        }
    }
    return FALSE;
}

extern "C" void func_ov003_0222b518(Rec *self) {
    V3 *pos = &self->unk_204;
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
    V3 out;
    func_ov003_0222c7fc(self, &out.x);
    if (self->unk_254 >= self->unk_255 &&
        (func_02072e88(data_020cbb18, data_020cbb18->unk_64) == 0 || func_020a62a0() != 0 ||
         (self->unk_1d4.x == self->unk_204.x && self->unk_1d4.z == self->unk_204.z))) {
        self->unk_251 = 7;
        func_020547a4(&self->unk_50, 0);
        if (func_02072e88(data_020cbb18, data_020cbb18->unk_64) && func_020a62a0()) {
            V3 *src = &self->unk_204;
            V3 *dst = &self->unk_1d4;
            dst->x = src->x;
            dst->y = src->y;
            dst->z = src->z;
        }
    } else if (r4 <= 0) {
        if (func_ov003_0222af48(self, 1)) {
            func_ov003_02229910(self);
        }
    } else {
        if (func_ov003_0222dd90(self, pos)) {
            r4 = 1;
        }
        self->unk_232 = r4 - 1;
    }
}

extern "C" void func_ov003_0222b620(Rec *self) {
    s32 r4 = self->unk_232;
    V3 *pos = &self->unk_204;
    if (func_ov003_0222dd90(self, pos)) {
        r4 = 1;
    }
    if (r4 <= 0) {
        if (func_ov003_0222af48(self, 1)) {
            func_ov003_02229910(self);
        }
    } else {
        V3 out;
        func_ov003_0222c7fc(self, &out.x);
        if (out.x != 0) {
            self->unk_232 = r4 - 1;
            if (self->unk_254 < self->unk_255) {
                self->unk_251 = 4;
                func_020547a4(&self->unk_50, 1);
                s32 a = func_02002bdc(pos, &out);
                self->unk_23a = a + 0x8000;
                if (func_02072e88(data_020cbb18, data_020cbb18->unk_64) && func_020a62a0()) {
                    func_ov003_0222e1e0(self, self->unk_23a, 0xc000);
                }
            }
        }
    }
}
