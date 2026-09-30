#include "types.h"

struct Unk_ov003_0222d350_Vec {
    s32 x, y, z;
};
typedef Unk_ov003_0222d350_Vec Vec3;

struct Unk_ov003_0222d350_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

// One 0x25c-byte entry of the tables at data_ov003_02259354 / 0225980c / 0225a17c
struct Unk_ov003_0222d350_Rec {
    u8 unk_00[0x50];                   // 0x00
    u8 unk_50[0xec - 0x50];            // 0x50
    u8 unk_ec[4];                      // 0xec
    Unk_ov003_0222d350_Bits unk_f0;    // 0xf0
    Unk_ov003_0222d350_Bits unk_f4;    // 0xf4
    u8 unk_f8[4];                      // 0xf8
    s32 unk_fc;                        // 0xfc
    u8 unk_100[0x1c8 - 0x100];         // 0x100
    Vec3 unk_1c8;                      // 0x1c8
    Vec3 unk_1d4;                      // 0x1d4
    u8 unk_1e0[0x204 - 0x1e0];         // 0x1e0
    Vec3 unk_204;                      // 0x204
    u8 unk_210[0x21c - 0x210];         // 0x210
    s32 unk_21c;                       // 0x21c
    s32 unk_220;                       // 0x220
    u8 unk_224[4];                     // 0x224
    s32 unk_228;                       // 0x228
    u8 unk_22c[0x232 - 0x22c];         // 0x22c
    s16 unk_232;                       // 0x232
    u8 unk_234[0x23a - 0x234];         // 0x234
    s16 unk_23a;                       // 0x23a
    u8 unk_23c[0x240 - 0x23c];         // 0x23c
    s16 unk_240;                       // 0x240
    s16 unk_242;                       // 0x242
    s16 unk_244;                       // 0x244
    u8 unk_246[0x24a - 0x246];         // 0x246
    u8 unk_24a;                        // 0x24a
    u8 unk_24b;                        // 0x24b
    u8 unk_24c;                        // 0x24c
    s8 unk_24d;                        // 0x24d
    u8 unk_24e;                        // 0x24e
    u8 unk_24f;                        // 0x24f
    u8 unk_250;                        // 0x250
    u8 unk_251;                        // 0x251
    u8 unk_252;                        // 0x252
    u8 unk_253;                        // 0x253
    u8 unk_254;                        // 0x254
    u8 unk_255;                        // 0x255
    u8 unk_256;                        // 0x256
    u8 unk_257;                        // 0x257
    u8 unk_258[0x25c - 0x258];         // 0x258
};
typedef Unk_ov003_0222d350_Rec Rec;

struct Unk_020cbb18_Ptr {
    u8 unk_00[0x64];
    u32 unk_64;
};

extern "C" {
extern Unk_020cbb18_Ptr *data_020cbb18;
extern s16 data_02135f44[];

BOOL func_02072e88(Unk_020cbb18_Ptr *p, u32 v);
BOOL func_020a62a0();
void *func_02095204(u32 a);
s32 func_02002bdc(void *a, void *b);
s32 func_01ffc5a4(s32 a, s32 b);
s32 func_01ffcb0c(s32 a, s32 b);
void func_01ffca8c(void *a, void *b, void *out);
void func_01ffca58(void *a, void *b, void *out);
void func_020e9960(Vec3 *out, void *a, void *b);
s32 func_020e9688(Vec3 *v);
s32 func_020e7d4c(void *a, void *b, s32 c, s32 d, s32 e);
s32 func_020e7530(s16 *a, s32 b, s32 c);
s32 func_021329d0(s32 a);
void func_0205668c(void *p, u32 a, s32 b, s32 c, u32 d);
void func_020547a4(void *p, s32 v);
s32 func_02063b8c(s32 n);

s32 func_ov003_02225ec8(Rec *self, s32 a);
s32 func_ov003_0222ab68(Vec3 *a, Vec3 *b, s32 c);
s32 func_ov003_0222c620(s32 a, s32 b);
s32 func_ov003_0222c7fc(Rec *self, Vec3 *out);
s32 func_ov003_0222cb3c(s32 a, s32 b);
s32 func_ov003_0222d1f0(Rec *self, s16 *p);
s32 func_ov003_0222d28c(Rec *self, s32 v);
s32 func_ov003_0222df80(Rec *self);
s32 func_ov003_0222e098(void *p);
s32 func_ov003_0222e1e0(Rec *self, s32 a, s32 b);
void func_ov003_0222e328(Vec3 *out, s32 a);
s32 func_ov003_0222e500(Rec *self, s32 a, s32 b);
s32 func_ov068_022687e8(Rec *self, Vec3 *p);
void func_ov068_02268864(Rec *self, s16 *p, s32 a, s32 b, s32 c, s32 d);
s32 func_ov068_02268b70(Rec *self, s16 *p);
s32 func_ov068_02269f60(Rec *self, s16 *p, Vec3 *out);
}

extern "C" {
BOOL func_ov003_0222d334(Rec *self);
void func_ov003_0222d350(Rec *self);
void func_ov003_0222d530(Rec *self);
void func_ov003_0222d674(Rec *self);
void func_ov003_0222d6a0(Rec *self, Vec3 *p);
s32 func_ov003_0222d720(Rec *self);
void func_ov003_0222d75c(Rec *self, s32 a, s32 b, s32 c);
void func_ov003_0222d7d8(Rec *self, s16 *p, s32 a, s32 b, u8 e, s32 f);
s32 func_ov003_0222da1c(Rec *self);
s32 func_ov003_0222da7c(Rec *self);
s32 func_ov003_0222dae0(Rec *self);
void func_ov003_0222db34(Rec *self);
void func_ov003_0222db74(Rec *self, Vec3 *p, s32 a);
s32 func_ov003_0222dbdc(s32 a, s32 b);
}

extern "C" BOOL func_ov003_0222d334(Rec *self) {
    if (self->unk_244 > 0) {
        self->unk_244--;
    } else {
        return TRUE;
    }
    return FALSE;
}

extern "C" void func_ov003_0222d350(Rec *self) {
    s16 ang;
    Vec3 v;
    Vec3 w;
    Vec3 *r7;
    s16 *r4;
    s32 r6;

    ang = self->unk_23a;
    r7 = &self->unk_204;
    r4 = &self->unk_242;
    if (self->unk_24d != 8 && self->unk_f0.mid > 9) {
        func_0205668c(&self->unk_ec, 9, 0, self->unk_21c, 0);
    }
    if (func_ov003_0222d720(self) == 2) {
        if (self->unk_24d != 8) {
            func_ov003_02225ec8(self, self->unk_21c);
        } else {
            func_ov003_02225ec8(self, 0x1000);
        }
        self->unk_24a = 0;
    }
    if (self->unk_24a != 0) {
        if (self->unk_24d != 8) {
            s32 t = func_01ffcb0c(self->unk_21c, 0x1333);
            if (t != self->unk_fc) {
                func_ov003_02225ec8(self, t);
            }
        } else {
            void *e = func_02095204(4);
            if (e != NULL) {
                func_020e9960(&w, r7, (u8 *)e + 0x5c);
                v = w;
                func_ov003_0222ab68(&v, &v, 3);
                func_01ffca8c(r7, &v, r7);
            }
        }
    } else {
        if (self->unk_24d == 8) {
            if (func_ov068_02269f60(self, r4, &v) == 0) {
                return;
            }
        } else {
            if (self->unk_21c != self->unk_fc) {
                func_ov003_02225ec8(self, self->unk_21c);
            }
            if (func_02072e88(data_020cbb18, data_020cbb18->unk_64) == 0) {
                func_ov068_02268b70(self, &ang);
            }
        }
    }
    r6 = *r4;
    r6 = r6 * 0x44 + (r6 * r6 * -10) / 2;
    if (self->unk_24c != 0 && r6 >= 0) {
        func_01ffcb0c(r6, 0x2000);
    } else if (r6 < -0x333) {
        r6 = -0x333;
    }
    *r4 = *r4 + 4;
    func_ov003_0222d1f0(self, r4);
    r7->y = r7->y + r6;
    if (self->unk_24d == 8) {
        func_ov068_02268864(self, &ang, 0xaaa, 0x14, 0x3c, self->unk_257 << 12);
    } else {
        func_ov003_0222d7d8(self, &ang, 0x38e, 0x14, 0x3c, self->unk_257 << 12);
    }
}

extern "C" void func_ov003_0222d530(Rec *self) {
    s32 c = self->unk_232;
    if (c > 0x8c) {
        self->unk_251 = 9;
    } else if (func_ov003_0222e500(self, 0x50, 0xe38) != 0) {
        self->unk_232 = c + 1;
    } else {
        self->unk_232 = 0;
    }
    switch (self->unk_251) {
    case 0:
        func_ov003_0222d350(self);
        break;
    case 6:
        func_ov003_0222df80(self);
        break;
    case 9:
    case 11:
        if (self->unk_f0.mid > 9) {
            func_0205668c(&self->unk_ec, 9, 0, 0x1000, 0);
        }
        func_ov003_0222d28c(self, 0x1ccd);
        break;
    case 7: {
        s32 t;
        Vec3 *src;
        Vec3 *dst;
        self->unk_251 = 0;
        self->unk_23a = self->unk_23a + self->unk_240;
        t = self->unk_23a;
        if (func_ov003_0222e1e0(self, t, func_ov003_0222da7c(self)) != 0) {
            src = &self->unk_204;
            dst = &self->unk_1c8;
            *dst = *src;
        }
        break;
    }
    case 0x13: {
        s32 t;
        Vec3 *src;
        Vec3 *dst;
        self->unk_24a = 0;
        self->unk_251 = 0;
        t = self->unk_23a;
        if (func_ov003_0222e1e0(self, t, func_ov003_0222da7c(self)) != 0) {
            src = &self->unk_204;
            dst = &self->unk_1c8;
            *dst = *src;
        }
        break;
    }
    }
}

extern "C" void func_ov003_0222d674(Rec *self) {
    if (self->unk_f4.mid == 1) {
        func_020547a4(&self->unk_50, 2);
    } else {
        func_020547a4(&self->unk_50, 1);
    }
}

extern "C" void func_ov003_0222d6a0(Rec *self, Vec3 *p) {
    s32 c = self->unk_254;
    if (func_020a62a0()) {
        if (p->x != 0 && self->unk_24a == 0 && c >= self->unk_255) {
            self->unk_240 = func_02002bdc(p, &self->unk_204);
            self->unk_251 = 7;
            self->unk_24a = 1;
        }
    } else {
        if (self->unk_24a == 0 && c >= self->unk_255) {
            self->unk_24a = 1;
            self->unk_251 = 7;
        }
    }
}

extern "C" s32 func_ov003_0222d720(Rec *self) {
    Vec3 v;
    s32 r = func_ov003_0222c7fc(self, &v);
    if (func_02072e88(data_020cbb18, data_020cbb18->unk_64)) {
        func_ov003_0222d6a0(self, &v);
    } else {
        func_ov068_022687e8(self, &v);
    }
    return r;
}

extern "C" void func_ov003_0222d75c(Rec *self, s32 a, s32 b, s32 c) {
    Vec3 *r6 = &self->unk_204;
    s32 r4 = func_01ffc5a4(data_02135f44[((u16)a >> 4) * 2], c);
    if (self->unk_220 != self->unk_228) {
        b = func_01ffc5a4(b, 0x2000);
    }
    if ((r4 > 0 && r6->y + r4 < b + self->unk_220) || (r4 < 0 && r6->y + r4 > self->unk_220 - b)) {
        r6->y = r6->y + r4;
    }
}

static inline BOOL Gt(s32 a, s32 b) {
    if (a > b) return TRUE;
    return FALSE;
}

extern "C" void func_ov003_0222d7d8(Rec *self, s16 *p, s32 a, s32 b, u8 e, s32 f) {
    s32 rnd;
    Vec3 *r6 = &self->unk_1c8;
    Vec3 *r10 = &self->unk_1d4;
    Vec3 *r4 = &self->unk_204;
    s32 hit = func_ov003_0222e500(self, 0x50, 0xe38);
    u32 flag = self->unk_24b;
    rnd = func_02063b8c(100);
    Vec3 t;
    Vec3 d;
    if (hit != 0) {
        self->unk_23a = func_ov003_0222cb3c(self->unk_23a, hit);
        *r6 = *r4;
        {
            s32 q = self->unk_23a;
            func_ov003_0222e1e0(self, q, func_ov003_0222da7c(self));
        }
        return;
    }
    if (self->unk_24f % b == 0 && rnd > e) {
        self->unk_24b = flag == 0 ? 1 : 0;
    }
    if (rnd > self->unk_252) {
        if (flag != 0) {
            *p = *p + a;
            self->unk_23a = *p;
        } else {
            *p = *p - a;
            self->unk_23a = *p;
        }
    }
    func_ov003_0222e328(&t, *p);
    if (self->unk_24a != 0) {
        s32 m = func_021329d0(0x45a00400);
        r4->x = r4->x + func_01ffcb0c(func_01ffcb0c(f, t.x), m);
        r4->z = r4->z + func_01ffcb0c(func_01ffcb0c(f, t.z), m);
    } else {
        r4->x = r4->x + func_01ffcb0c(f, t.x);
        r4->z = r4->z + func_01ffcb0c(f, t.z);
    }
    func_020e9960(&d, r6, r4);
    s32 len = func_020e9688(&d);
    if (Gt(len, func_ov003_0222dae0(self))) {
        func_ov003_0222db74(self, r6, 0xaaa);
    }
    {
        s32 k = func_ov003_0222da1c(self);
        if (func_020e7d4c(r6, r10, 0x28, k + 0x19a, func_ov003_0222da1c(self)) == 0) {
            if (func_02072e88(data_020cbb18, data_020cbb18->unk_64)) {
                if (func_020a62a0() == 0) {
                    return;
                }
            }
            u8 *q253 = &self->unk_253;
            if (*q253 == 0) {
                s32 s = self->unk_23a;
                self->unk_23a = s + func_ov003_0222c620(6, 1);
                *r6 = *r4;
                if (self->unk_24a != 0) {
                    void *e2;
                    if (func_02072e88(data_020cbb18, data_020cbb18->unk_64)) {
                        e2 = (void *)func_ov003_0222e098(r4);
                    } else {
                        e2 = func_02095204(4);
                    }
                    if (e2 != NULL) {
                        self->unk_23a = func_02002bdc((u8 *)e2 + 0x5c, r4);
                    }
                }
                {
                    s32 q = self->unk_23a;
                    func_ov003_0222e1e0(self, q, func_ov003_0222da7c(self));
                }
            } else {
                *q253 = *q253 - 1;
            }
        }
    }
}

extern "C" s32 func_ov003_0222da1c(Rec *self) {
    switch (self->unk_24d) {
    case 0:
    case 1:
    case 2:
    case 3:
        return 0xf6;
    case 4:
        return 0x171;
    case 5:
        return 0x1ec;
    case 6:
        return 0x2b8;
    case 7:
        return 0x266;
    case 0x25:
        return 0xcd;
    }
    return 0;
}

extern "C" s32 func_ov003_0222da7c(Rec *self) {
    switch (self->unk_24d) {
    case 0:
    case 1:
        return 0x5000;
    case 2:
    case 3:
        return 0x4600;
    case 4:
        return 0x7800;
    case 5:
    case 6:
        return 0x5000;
    case 7:
        return 0xc800;
    case 0x25:
        return 0x3c00;
    }
    return 0;
}

extern "C" s32 func_ov003_0222dae0(Rec *self) {
    switch (self->unk_24d) {
    case 0:
    case 1:
    case 2:
    case 3:
        return 0xccd;
    case 4:
        return 0xb33;
    case 5:
        return 0xccd;
    case 6:
        return 0xb33;
    case 7:
    case 0x25:
        return 0xccd;
    }
    return 0;
}

extern "C" void func_ov003_0222db34(Rec *self) {
    switch (self->unk_24d) {
    case 0: case 1: case 2: case 3: case 4: case 5: case 6: case 7:
    case 0x25:
        self->unk_253 = 0x14;
        break;
    }
}

extern "C" void func_ov003_0222db74(Rec *self, Vec3 *p, s32 a) {
    s16 ang;
    Vec3 v;
    Vec3 *r6;
    ang = self->unk_23a;
    v = *p;
    r6 = &self->unk_204;
    func_020e7530(&ang, func_02002bdc(r6, p), a);
    self->unk_23a = ang;
    func_01ffca58(&v, r6, &v);
    func_ov003_0222ab68(&v, &v, 1);
    func_01ffca8c(r6, &v, r6);
}

extern "C" s32 func_ov003_0222dbdc(s32 a, s32 b) {
    switch (a) {
    case 51:
        return 0x823;
    case 11: case 58:
        if (b == 0) return 0x830;
        return 0x837;
    case 54:
        if (b == 1) return 0x834;
        return 0x833;
    case 55:
        if (b == 1) return 0x836;
        return 0x835;
    case 10:
        return 0x831;
    case 50:
        return 0x828;
    case 29:
        return 0x825;
    case 27:
        return 0x826;
    case 28:
        return 0x82c;
    case 12:
        return 0x82b;
    case 13:
        return 0x82d;
    case 15: case 25: case 32: case 57:
        return 0x812;
    case 14: case 33: case 34: case 35: case 38: case 39: case 40: case 41: case 42: case 43: case 44: case 52:
        return 0x811;
    case 36: case 45: case 46: case 47:
        return 0x810;
    case 20:
        if (b != 0) return 0x811;
        return -1;
    case 16:
        if (b == 0) return 0x822;
        return 0x80f;
    case 17:
        if (b == 0) return 0x827;
        return 0x80f;
    case 18:
        if (b == 0) return 0x82e;
        return 0x80f;
    case 19:
        if (b == 0) return 0x824;
        return 0x80f;
    case 30:
        if (b == 0) return 0x829;
        return 0x82a;
    }
    return -1;
}
