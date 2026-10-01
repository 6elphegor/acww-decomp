#include "types.h"

struct Unk_ov003_02229050_Vec {
    s32 x, y, z;
};

struct Unk_ov003_02229050_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

struct Unk_ov003_02229698_Buf {
    u8 pad_00[0x30];
    s32 unk_30;
    u8 pad_34[8];
    s32 unk_3c;
};

// One 0x25c-byte entry of the tables at data_ov003_02259354 / 0225980c / 0225a17c
struct Unk_ov003_02229050_Rec {
    u8 unk_00[0xec];                   // 0x00
    u8 unk_ec[4];                      // 0xec
    Unk_ov003_02229050_Bits unk_f0;    // 0xf0
    Unk_ov003_02229050_Bits unk_f4;    // 0xf4
    u8 unk_f8[0x130 - 0xf8];           // 0xf8
    u8 unk_130[0x80];                  // 0x130
    Unk_ov003_02229050_Vec unk_1b0;    // 0x1b0
    Unk_ov003_02229050_Vec unk_1bc;    // 0x1bc
    u8 unk_1c8[0x1d4 - 0x1c8];         // 0x1c8
    Unk_ov003_02229050_Vec unk_1d4;    // 0x1d4
    Unk_ov003_02229050_Vec unk_1e0;    // 0x1e0
    u8 unk_1ec[0x204 - 0x1ec];         // 0x1ec
    Unk_ov003_02229050_Vec unk_204;    // 0x204
    Unk_ov003_02229050_Vec unk_210;    // 0x210
    s32 unk_21c;                       // 0x21c
    s32 unk_220;                       // 0x220
    s32 unk_224;                       // 0x224
    s32 unk_228;                       // 0x228
    u8 unk_22c[0x232 - 0x22c];         // 0x22c
    s16 unk_232;                       // 0x232
    u8 unk_234[2];                     // 0x234
    u16 unk_236;                       // 0x236
    s16 unk_238;                       // 0x238
    s16 unk_23a;                       // 0x23a
    u8 unk_23c[2];                     // 0x23c
    u16 unk_23e;                       // 0x23e
    u8 unk_240[4];                     // 0x240
    s16 unk_244;                       // 0x244
    u8 unk_246;                        // 0x246
    u8 unk_247[5];                     // 0x247
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
    u8 unk_258;                        // 0x258
    u8 unk_259;                        // 0x259
};

typedef Unk_ov003_02229050_Rec Rec;
typedef Unk_ov003_02229050_Vec Vec3;
typedef Unk_ov003_02229698_Buf Buf;

extern "C" {
s32 func_02063b8c(s32 a);
s32 func_01ffc5a4(s32 a, s32 b);
s32 func_01ffcb0c(s32 a, s32 b);
void func_01ffca8c(void *a, void *b, void *out);
void func_0205668c(void *p, u32 a, s32 b, s32 c, u32 d);
void func_020547a4(void *p, s32 v);
void func_020339bc(Buf *b, void *pos, s32 a, s32 c);
void func_02033988(Buf *b);
void *func_0209c0ac(void *p);
s32 func_02106054(void *p, s32 a, s32 b);

s32 func_ov003_02225ec8(Rec *self, s32 a);
void func_ov003_0222a7d4(Rec *self);
void func_ov003_0222c240(Rec *self);
void func_ov003_0222c188(Rec *self);
void func_ov003_0222b3f4(Rec *self);
void func_ov003_0222c718(Rec *self);
void func_ov003_0222d530(Rec *self);
s32 func_ov003_0222e500(Rec *self, s32 a, s32 b);
void func_ov003_0222e328(Vec3 *out, s32 a);
void func_ov003_0222d674(Rec *self);
void func_ov003_0222dd54(Rec *self, s32 a, s32 b);
s32 func_ov003_0222af48(Rec *self, s32 a);
s32 func_ov003_0222b928(Rec *self, s16 *cnt);

void func_ov003_02229050(Rec *self);
void func_ov003_022290dc(Rec *self);
void func_ov003_022290e4(Rec *self, s32 a, s32 b, s32 c, u8 d);
void func_ov003_02229144(Rec *self);
void func_ov003_02229368(Rec *self);
void func_ov003_02229370(Rec *self, s32 a, s32 b, s32 c, s32 d);
void func_ov003_022293f0(Rec *self);
void func_ov003_022293f8(Rec *self);
void func_ov003_0222941c(Rec *self);
void func_ov003_02229424(Rec *self);
void func_ov003_02229464(Rec *self);
void func_ov003_022294f0(Rec *self);
void func_ov003_022294f8(Rec *self);
void func_ov003_022295ec(Rec *self, s32 a, s32 b, s32 c, u8 d, s32 e);
void func_ov003_02229668(Rec *self);
s16 func_ov003_02229670();
void func_ov003_02229698(Rec *self, s16 a1, s32 a2, s32 a3, s16 s0, s16 s1, s32 s2, s32 s3, u32 s4, u32 s5);
void func_ov003_022297c8(Rec *self, s16 *pp);
void func_ov003_02229910(Rec *self);
void func_ov003_02229938(Rec *self);
}

extern "C" void func_ov003_02229050(Rec *self) {
    switch (self->unk_24d) {
    case 0x1d:
        func_ov003_022290e4(self, 0x3c, 0x46, 6, 1);
        break;
    case 0x1b:
        func_ov003_022290e4(self, 0x3c, 0x46, 6, 1);
        break;
    case 0xc:
        func_ov003_022290e4(self, 0x3c, 0x50, 8, 2);
        break;
    case 0xd:
        func_ov003_022290e4(self, 0x3c, 0x50, 8, 3);
        break;
    case 0x1c:
        func_ov003_022290e4(self, 0x3c, 0x46, 8, 1);
        break;
    }
}

extern "C" void func_ov003_022290dc(Rec *self) {
    func_ov003_0222c718(self);
}

extern "C" void func_ov003_022290e4(Rec *self, s32 a, s32 b, s32 c, u8 d) {
    func_ov003_02229698(self, 0x3b6, a, b, 0, func_ov003_02229670(), 0, 0, c, 0);
    self->unk_232 = (func_02063b8c(9) + 2) * 0x14;
    self->unk_259 = d;
    self->unk_204.y = 0;
}

extern "C" void func_ov003_02229144(Rec *self) {
    switch (self->unk_24d) {
    case 0x2f:
        func_ov003_02229370(self, 0x82, 0x3c, 0x16, 0x3e8);
        break;
    case 0x2e:
        func_ov003_02229370(self, 0x82, 0x3c, 0x16, 0x3e8);
        break;
    case 0x2d:
        func_ov003_02229370(self, 0x82, 0x3c, 0x16, 0x3e8);
        break;
    case 0x2c:
        func_ov003_02229370(self, 0x82, 0x3c, 0x16, 0x3e8);
        break;
    case 0x28:
        func_ov003_02229370(self, 0x82, 0x3c, 0x16, 0x3e8);
        break;
    case 0x29:
        func_ov003_02229370(self, 0x82, 0x3c, 0x16, 0x3e8);
        break;
    case 0x2a:
        func_ov003_02229370(self, 0x82, 0x3c, 0x16, 0x3e8);
        break;
    case 0x26:
        func_ov003_02229370(self, 0x82, 0x3c, 0x16, 0x3e8);
        break;
    case 0x21:
        func_ov003_02229370(self, 0x82, 0x3c, 0x16, 0x3e8);
        break;
    case 0x27:
        func_ov003_02229370(self, 0x82, 0x3c, 0x16, 0x3e8);
        break;
    case 0x2b:
        func_ov003_02229370(self, 0x82, 0x3c, 0x16, 0x3e8);
        break;
    case 0x22:
        func_ov003_02229370(self, 0x82, 0x3c, 0x16, 0x3e8);
        break;
    case 0x24:
        func_ov003_02229370(self, 0x82, 0x3c, 0x16, 0x3e8);
        break;
    case 0x1f:
        func_ov003_02229370(self, 0xfa, 0x50, 0x16, 0x1f4);
        self->unk_257 = 1;
        break;
    case 9:
        func_ov003_02229370(self, 0x96, 0x46, 0x18, 0x3e8);
        self->unk_257 = 0xa;
        func_0205668c(self->unk_ec, self->unk_f0.mid, 1, 0x1000, 0);
        break;
    case 0x10:
        func_ov003_02229370(self, 0x64, 0x50, 0x19, 0x3e8);
        break;
    case 0x11:
        func_ov003_02229370(self, 0x64, 0x50, 0x19, 0x3e8);
        break;
    case 0x12:
        func_ov003_02229370(self, 0x64, 0x50, 0x19, 0x3e8);
        break;
    case 0x13:
        func_ov003_02229370(self, 0x64, 0x50, 0x19, 0x3e8);
        break;
    case 0x14:
        func_ov003_02229370(self, 0x64, 0x50, 0x19, 0x3e8);
        self->unk_252 = 0;
        break;
    case 0x34:
        func_ov003_02229370(self, 0x82, 0x3c, 0x16, 0x3e8);
        break;
    default:
        func_ov003_02229370(self, 0x64, 0x50, 0x19, 0x3e8);
        break;
    }
}

extern "C" void func_ov003_02229368(Rec *self) {
    func_ov003_0222a7d4(self);
}

extern "C" void func_ov003_02229370(Rec *self, s32 a, s32 b, s32 c, s32 d) {
    Vec3 *v = &self->unk_204;
    if (self->unk_24d == 0x1f && self->unk_251 == 0xb) {
        func_ov003_02229698(self, 0, a, b, 0, 0, 0, 0, 0, 0);
    } else {
        func_ov003_02229698(self, 0, a, b, 0x3556, -0x8000, c, 0, 0, 0);
        v->z += d;
        self->unk_246 = 1;
    }
}

extern "C" void func_ov003_022293f0(Rec *self) {
    func_ov003_0222c240(self);
}

extern "C" void func_ov003_022293f8(Rec *self) {
    func_ov003_02229698(self, 0, 0, 0, 0, 0, 0x19, 0, 0x19, 0);
}

extern "C" void func_ov003_0222941c(Rec *self) {
    func_ov003_0222c188(self);
}

extern "C" void func_ov003_02229424(Rec *self) {
    s32 t = self->unk_21c;
    func_ov003_02229698(self, 0, 0x5a, 0x3c, 0, 0, 0x3c, 0, 6, 1);
    self->unk_21c = t;
    self->unk_252 = 0x3c;
}

extern "C" void func_ov003_02229464(Rec *self) {
    Vec3 *d = &self->unk_1e0;
    func_ov003_02229698(self, 0x384, 0xc8, 0x28, 1, -0x8000, 0x2f, 0, 0xa, 0);
    self->unk_252 = 0x3c;
    self->unk_256 = func_02063b8c(0x12);
    self->unk_24c = 1;
    self->unk_220 = 0;
    Vec3 *s = &self->unk_204;
    self->unk_1e0.x = s->x;
    d->y = s->y;
    d->z = s->z;
    func_ov003_02225ec8(self, 0x1000);
}

extern "C" void func_ov003_022294f0(Rec *self) {
    func_ov003_0222b3f4(self);
}

extern "C" void func_ov003_022294f8(Rec *self) {
    switch (self->unk_24d) {
    case 0:
        func_ov003_022295ec(self, 0x64, 0x50, 0x25, 8, 0x119a);
        break;
    case 1:
        func_ov003_022295ec(self, 0x64, 0x50, 0x25, 8, 0x119a);
        break;
    case 2:
        func_ov003_022295ec(self, 0x50, 0x50, 0x28, 9, 0x1000);
        break;
    case 3:
        func_ov003_022295ec(self, 0x50, 0x50, 0x28, 9, 0x1000);
        break;
    case 4:
        func_ov003_022295ec(self, 0x3c, 0x50, 0x2f, 0xa, 0xe66);
        break;
    case 5:
        func_ov003_022295ec(self, 0x46, 0x50, 0x14, 0xc, 0x1000);
        break;
    case 6:
        func_ov003_022295ec(self, 0x64, 0x1e, 0x32, 0xf, 0x1000);
        break;
    case 7:
        func_ov003_022295ec(self, 0x3c, 0x50, 0x34, 0xc, 0x1000);
        break;
    default:
        func_ov003_022295ec(self, 0x3c, 0x50, 0x2d, 0xa, 0x1000);
        break;
    }
}

extern "C" void func_ov003_022295ec(Rec *self, s32 a, s32 b, s32 c, u8 d, s32 e) {
    s32 r = func_02063b8c(3);
    func_ov003_02229698(self, (s16)((r + 5) * 0x14), a, b, 0, func_ov003_02229670(), c, 0, d, 0);
    self->unk_252 = 0x28;
    self->unk_256 = func_02063b8c(0x12);
    self->unk_24c = 1;
    self->unk_21c = e;
    self->unk_232 = 0;
}

extern "C" void func_ov003_02229668(Rec *self) {
    func_ov003_0222d530(self);
}

extern "C" s16 func_ov003_02229670() {
    u32 r = (u8)func_02063b8c(0x10);
    if (r > 8) {
        r = -(r - 8);
    }
    return (s16)(r * 0xaaa);
}

extern "C" void func_ov003_02229698(Rec *self, s16 a1, s32 a2, s32 a3, s16 s0, s16 s1, s32 s2, s32 s3, u32 s4, u32 s5) {
    Buf b;
    Vec3 *p = &self->unk_204;
    func_020339bc(&b, p, 0, 0);
    Vec3 *q = &self->unk_210;
    s32 r6 = func_01ffc5a4(s2 << 12, 0x10000);
    s32 r0 = func_01ffc5a4(a3 << 12, 0x10000);
    if (self->unk_251 != 0xb && self->unk_251 != 0x10) {
        self->unk_251 = 0x13;
        self->unk_23a = s1;
        Vec3 *d = &self->unk_1d4;
        d->x = p->x;
        d->y = p->y;
        d->z = p->z;
        if (*(u8 *)&s5) {
            p->y = r6 + b.unk_3c;
        } else {
            p->y = r6;
        }
    }
    self->unk_238 = s0;
    self->unk_255 = a2;
    self->unk_224 = r0;
    if (self->unk_24d != 0x23) {
        self->unk_21c = 0;
    }
    self->unk_257 = *(u8 *)&s4;
    self->unk_23e = 0;
    self->unk_254 = 0;
    self->unk_228 = p->y + s3;
    self->unk_244 = a1;
    q->x = 0x1000;
    q->y = 0x1000;
    q->z = 0x1000;
    self->unk_220 = self->unk_228;
    self->unk_236 = 0;
    self->unk_24e = 0;
    func_02033988(&b);
}

extern "C" void func_ov003_022297c8(Rec *self, s16 *pp) {
    if (self->unk_24d != 0x1a) {
        Vec3 *r6 = &self->unk_204;
        Vec3 v;
        if (func_ov003_0222e500(self, 0x50, 0xe38) == 0) {
            func_ov003_0222e328(&v, self->unk_23a);
            if (self->unk_251 == 0xb) {
                v.x = func_01ffcb0c(v.x, 0xa000);
                v.z = func_01ffcb0c(v.z, 0xa000);
            } else {
                v.x = func_01ffcb0c(v.x, 0xf000);
                v.z = func_01ffcb0c(v.z, 0xf000);
            }
        } else {
            v.x = 0;
            v.z = 0;
        }
        s32 t = *pp;
        v.y = t * ((t + 0xc) * 2);
        if ((u8)(s8)(self->unk_24d - 0xe) <= 1) {
            if (self->unk_f0.mid != 0xb) {
                func_0205668c(self->unk_ec, 0xb, 0, 0x1000, 9);
            } else if (self->unk_f4.mid < 9) {
                *(u32 *)&self->unk_f4 = 0x9000;
            }
        } else {
            func_ov003_0222d674(self);
        }
        if (*pp == 0) {
            func_ov003_0222dd54(self, 1, 0);
        }
        if (func_ov003_0222af48(self, 1)) {
            func_ov003_02229910(self);
        }
        func_01ffca8c(r6, &v, r6);
    } else {
        func_ov003_0222b928(self, pp);
        u32 m = self->unk_f4.mid;
        if (m == 0) {
            func_020547a4((u8 *)self + 0x50, 1);
        } else if (m == 1) {
            func_020547a4((u8 *)self + 0x50, 2);
        }
    }
}

extern "C" void func_ov003_02229910(Rec *self) {
    self->unk_250 = 4;
    func_02106054(func_0209c0ac(self->unk_130), 0, 0);
}

extern "C" void func_ov003_02229938(Rec *self) {
    Vec3 *r5 = &self->unk_204;
    Vec3 *r4 = &self->unk_1b0;
    Vec3 *r6 = &self->unk_1bc;
    if (self->unk_24d == 0x33) {
        r4->x = r5->x - func_01ffc5a4(0x6000, 0x10000);
        r4->y = func_01ffc5a4(0xa000, 0x10000);
        r4->z = r5->z - func_01ffc5a4(0x4000, 0x10000);
        r6->x = r5->x + func_01ffc5a4(0x6000, 0x10000);
        r6->y = func_01ffc5a4(0xc000, 0x10000);
        r6->z = r5->z + func_01ffc5a4(0x4000, 0x10000);
    } else if (self->unk_24d == 0x19) {
        r4->x = r5->x - 0x6000;
        r4->z = r5->z + 0x6000;
        r6->x = r5->x + 0x6000;
        r6->z = r5->z - 0x6000;
    } else {
        r4->x = r5->x - func_01ffc5a4(0x9000, 0x10000);
        r4->y = func_01ffc5a4(0x9000, 0x10000);
        r4->z = r5->z - func_01ffc5a4(0x2000, 0x10000);
        r6->x = r5->x + func_01ffc5a4(0x9000, 0x10000);
        r6->y = 0x1000;
        r6->z = r5->z + func_01ffc5a4(0x5000, 0x10000);
    }
}
