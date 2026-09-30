#include "types.h"

struct Unk_ov003_0225980c_V3 {
    s32 x, y, z;
    Unk_ov003_0225980c_V3() {}
    Unk_ov003_0225980c_V3(s32 a, s32 b, s32 c) {
        x = a;
        y = b;
        z = c;
    }
};
typedef Unk_ov003_0225980c_V3 V3;

// One 0x25c-byte entry of the tables at data_ov003_02259354 (2), 0225980c (4), 0225a17c (8)
struct Unk_ov003_0225980c_Rec {
    u8 unk_00[0x50];
    u8 unk_50[0x9c];       // 0x50 model sub-object
    u8 unk_ec[4];          // 0xec animation sub-object
    s32 unk_f0;
    u32 unk_f4;
    u8 unk_f8[8];
    u8 unk_100;
    u8 pad_101[0x130 - 0x101];
    u8 unk_130[0x1d4 - 0x130];
    V3 unk_1d4;
    u8 pad_1e0[0x204 - 0x1e0];
    V3 unk_204;
    s32 unk_210;
    s32 unk_214;
    s32 unk_218;
    s32 unk_21c;
    u8 pad_220[8];
    s32 unk_228;
    u8 pad_22c[0x232 - 0x22c];
    s16 unk_232;
    u8 pad_234[4];
    s16 unk_238;
    s16 unk_23a;
    s16 unk_23c;
    u8 pad_23e[4];
    s16 unk_242;
    u8 pad_244[2];
    u8 unk_246;
    u8 pad_247[0x24a - 0x247];
    u8 unk_24a;
    u8 unk_24b;
    u8 unk_24c;
    s8 unk_24d;
    u8 pad_24e[3];
    u8 unk_251;
    u8 unk_252;
    u8 pad_253;
    u8 unk_254;
    u8 pad_255[0x25c - 0x255];
};
typedef Unk_ov003_0225980c_Rec Rec;

struct Unk_ov003_0222abc0_Obj {
    u32 pad_00[12];
    s32 unk_30;
    u32 pad_34[4];
};

extern "C" {
extern s16 data_02135f44[];

s32 func_01ffc5a4(s32 a, s32 b);
s32 func_01ffcb0c(s32 a, s32 b);
void func_01ffca8c(V3 *dst, V3 *a, V3 *b);
s32 func_02063b8c(s32 n);
s32 func_02133150(s32 a, s32 b);
void func_0205668c(void *p, u32 a, s32 b, s32 c, u32 d);
void func_020547a4(void *p, u16 v);
s32 func_0209c0ac(void *p);
u32 func_02106020(u32 a, u32 b);
s32 func_02106054(s32 p, s32 a, s32 b);
void func_0204ee10(s32 *x, s32 *y, void *p);
void *func_0204da0c(void);
u16 *func_0204ebd8(void *g, s32 hx, s32 hy, s32 lx, s32 ly, u32 layer);
s32 func_020a62a0(void);
void func_020339bc(Unk_ov003_0222abc0_Obj *o, V3 *p, s32 a, s32 b);
s32 func_020338d0(Unk_ov003_0222abc0_Obj *o, s32 v);
void func_02033988(Unk_ov003_0222abc0_Obj *o);
s32 func_020e7d4c(V3 *a, V3 *b, s32 c, s32 d, s32 e);
s32 func_02002bdc(V3 *a, V3 *b);

void func_ov003_0222e328(V3 *out, s32 ang);
void func_ov003_0222dd54(Rec *self, s32 a, s32 b);
s32 func_ov003_0222e500(Rec *self, s32 a, s32 b);
s32 func_ov003_0222af48(Rec *self, s32 a);
void func_ov003_02229910(Rec *self);
void func_ov003_0222de04(Rec *self);
s32 func_ov003_0222b784(Rec *self);
s32 func_ov003_0222e1e0(Rec *self, s32 a, s32 b);
void func_ov003_0222a1c8(Rec *self, s16 *cnt);
void func_ov003_0222a090(Rec *self, s16 *cnt);
void func_ov003_0222a24c(Rec *self, s16 *cnt);
void func_ov003_0222b928(Rec *self, s16 *cnt);
void func_ov003_0222bb28(Rec *self, s16 *cnt);
s32 func_ov068_02269a28(Rec *self);
s32 func_ov068_02269aa4(Rec *self);
}

extern "C" void func_ov003_0222a36c(Rec *self, s16 *cnt) {
    s32 t, mode;
    V3 *pos;
    u32 st;
    pos = &self->unk_204;
    st = (self->unk_f4 << 4) >> 16;
    mode = self->unk_24d;
    t = func_01ffc5a4(*cnt << 12, 0x4000);
    u8 *s = self->unk_50;
    V3 v;
    func_ov003_0222e328(&v, self->unk_23a);
    if (*cnt == 0) {
        func_ov003_0222dd54(self, 1, 0);
    }
    v.y = func_01ffcb0c(func_01ffcb0c(0x100, t), t);
    if (func_ov003_0222e500(self, 0x50, 0xe38) == 0) {
        v.x = v.x << 4;
        v.z = v.z << 4;
    }
    func_01ffca8c(pos, &v, pos);
    (*cnt)++;
    if (mode == 0x14) {
        if (((*(u32 *)(s + 0xa0) << 4) >> 16) < 0x18) {
            func_0205668c(s + 0x9c, 0x1a, 0, 0x1000, 0x18);
        } else if (((*(u32 *)(s + 0xa4) << 4) >> 16) < 0x18) {
            *(u32 *)(s + 0xa4) = 0x18000;
        }
    } else if (self->unk_24d == 9) {
        if (*(u8 *)(s + 0xb0) != 0) {
            func_0205668c(s + 0x9c, 9, 0, 0x1000, 0);
        }
    } else {
        func_020547a4(s, st == 1 ? 2 : 1);
    }
    if (func_ov003_0222af48(self, 1)) {
        func_ov003_02229910(self);
    }
}

extern "C" void func_ov003_0222a4a0(Rec *self, s16 *cnt) {
    s32 ang = self->unk_23a;
    s32 c = *cnt;
    if (c == 0) {
        if (func_02063b8c(100) < 0x32) {
            *cnt = 1;
        } else {
            *cnt = -1;
        }
    } else if ((c > 0 && c <= 6) || (c > 0x12 && c <= 0x18) || !(c >= -6 || c < -0x12)) {
        if (c > 0) {
            (*cnt)++;
            self->unk_238 += 0xb6;
        } else {
            (*cnt)--;
            self->unk_238 -= 0xb6;
        }
        ang = (s16)(ang + 0x16b);
    } else if ((c > 6 && c <= 0x12) || (c < 0 && c >= -6) || !(c >= -0x12 || c < -0x18)) {
        if (c > 0) {
            (*cnt)++;
            self->unk_238 -= 0xb6;
        } else {
            (*cnt)--;
            self->unk_238 += 0xb6;
        }
        ang = (s16)(ang - 0x16b);
    } else {
        *cnt = 0;
        self->unk_251 = 0x13;
    }
    self->unk_23a = ang;
}

extern "C" void func_ov003_0222a594(Rec *self, s16 *cnt) {
    s32 ang = self->unk_23a;
    s32 lim = self->unk_228 - 0x100;
    V3 *pos = &self->unk_204;
    s32 c = *cnt;
    if (c >= 8) {
        if (func_02063b8c(100) > 0x46) {
            self->unk_251 = 0x13;
        }
        *cnt = 0;
    } else {
        if (c >= 2 && c < 6) {
            ang = (s16)(ang - 0x16b);
            self->unk_238 -= 0xb6;
        } else {
            ang = (s16)(ang + 0x16b);
            self->unk_238 += 0xb6;
        }
        pos->y -= 0x20;
        (*cnt)++;
        if (pos->y < lim) {
            pos->y = lim;
        }
    }
    self->unk_23a = ang;
}

extern "C" void func_ov003_0222a630(Rec *self, s16 *cnt) {
    s32 ang = self->unk_23a;
    s32 lim = self->unk_228 + 0x400;
    V3 *pos = &self->unk_204;
    s32 c = *cnt;
    if (c >= 8) {
        if (func_02063b8c(100) > 0x46) {
            self->unk_251 = 1;
        }
        *cnt = 0;
    } else {
        if (c >= 2 && c < 6) {
            ang = (s16)(ang - 0x16b);
            self->unk_238 -= 0xb6;
        } else {
            ang = (s16)(ang + 0x16b);
            self->unk_238 += 0xb6;
        }
        pos->y += 0x20;
        (*cnt)++;
        if (pos->y > lim) {
            pos->y = lim;
        }
    }
    self->unk_23a = ang;
}

extern "C" void func_ov003_0222a6cc(Rec *self, s16 *cnt) {
    if ((u8)(s8)(self->unk_24d - 0x10) <= 4) {
        u8 f = self->unk_246;
        if (f != 0 && self->unk_254 < 10) {
            u8 c = self->unk_252;
            if (c == 0 && f != 0) {
                func_ov003_0222dd54(self, 0, 1);
            } else {
                self->unk_252 = c - 1;
            }
        } else {
            self->unk_252 = 0x3c;
        }
    } else {
        u8 rnd = func_02063b8c(100);
        if (self->unk_24d == 9) {
            u32 st = (self->unk_f4 << 4) >> 16;
            if (st == 0xd || st < 9) {
                func_0205668c(self->unk_ec, 9, 1, 0, 9);
            }
            if (*cnt > 0x50) {
                if (rnd > 0x5c && st < 0xa) {
                    func_0205668c(self->unk_ec, 0xe, 1, 0x1000, 9);
                }
                if (*cnt > 0xa0) {
                    *cnt = 0;
                }
            }
            (*cnt)++;
        } else if (rnd > 0x46) {
            (*cnt)++;
            if (*cnt % 0x14 == 0) {
                if (rnd < 0x55) {
                    self->unk_251 = 3;
                } else {
                    self->unk_251 = 2;
                }
                *cnt = 0;
            }
        }
    }
}

extern "C" void func_ov003_0222a7d4(Rec *self) {
    s16 *cnt = &self->unk_242;
    u32 st = self->unk_251;
    if (st != 0xb && st != 9 && st != 7) {
        if (self->unk_24d == 0x1f) {
            func_ov003_0222a1c8(self, cnt);
        } else {
            func_ov003_0222a090(self, cnt);
            self->unk_24a = 0;
        }
    }
    switch (st) {
    case 3:
        func_ov003_0222a4a0(self, cnt);
        break;
    case 2:
        func_ov003_0222a630(self, cnt);
        break;
    case 1:
        func_ov003_0222a594(self, cnt);
        break;
    case 9:
        func_ov003_0222b928(self, cnt);
        (*cnt)++;
        break;
    case 11:
        if (self->unk_24d != 0x1f) {
            func_ov003_0222a36c(self, cnt);
        } else {
            func_ov003_0222bb28(self, cnt);
        }
        break;
    case 7:
        self->unk_24a = 1;
        func_ov003_0222a24c(self, cnt);
        break;
    case 8:
        if (func_ov003_0222af48(self, 2)) {
            func_ov003_02229910(self);
        }
        break;
    case 0:
    case 4:
    case 5:
    case 6:
    case 10:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
        break;
    case 19:
        func_ov003_0222a6cc(self, cnt);
        break;
    }
}

static inline BOOL Unk_ov003_0222a8d0_Chk(u16 *p) {
    BOOL f9 = TRUE, f8 = TRUE, f7 = TRUE, f6 = TRUE, f5 = TRUE, f4 = TRUE, f3 = TRUE, f2 = TRUE, f1 = FALSE;
    u32 v = *p;
    if (v >= 0x26 && v <= 0x2a) {
        f1 = TRUE;
    }
    if (!f1) {
        if (v < 0x5d || v > 0x61) {
            f2 = FALSE;
        }
    }
    if (!f2) {
        if (v < 0x2f || v > 0x56) {
            f3 = FALSE;
        }
    }
    if (!f3) {
        if (v < 0x57 || v > 0x5b) {
            f4 = FALSE;
        }
    }
    if (!f4) {
        if (v < 0x66 || v > 0x68) {
            f5 = FALSE;
        }
    }
    if (!f5) {
        if (v != 0x69) {
            f6 = FALSE;
        }
    }
    if (!f6) {
        if (v < 0x6a || v > 0x6c) {
            f7 = FALSE;
        }
    }
    if (!f7) {
        if (v != 0x6d) {
            f8 = FALSE;
        }
    }
    if (!f8) {
        if (v < 0xc8 || v > 0xcf) {
            f9 = FALSE;
        }
    }
    return f9;
}

extern "C" void func_ov003_0222a8d0(Rec *self) {
    s16 *cnt = &self->unk_242;
    func_02106020(func_0209c0ac(self->unk_130), 0);
    s32 st = self->unk_251;
    if (st != 0xb && st != 9) {
        s32 xy[2];
        V3 q(self->unk_21c, 0, self->unk_204.z + 0x3e8);
        func_0204ee10(&xy[0], &xy[1], &q);
        void *g = func_0204da0c();
        if (g) {
            s32 x = *(volatile s32 *)&xy[0];
            s32 y = *(volatile s32 *)&xy[1];
            s32 hx = x >> 4;
            s32 hy = y >> 4;
            u16 *cell = func_0204ebd8(g, hx, hy, x - (hx << 4), y - (hy << 4), 0);
            if (cell) {
                if (!Unk_ov003_0222a8d0_Chk(cell)) {
                    if (func_ov003_0222af48(self, 3)) {
                        func_ov003_02229910(self);
                        return;
                    }
                }
            }
        }
    }
    switch (st) {
    case 2:
        if (self->unk_24c != 0) {
            self->unk_24c = 0;
            self->unk_23c = 0x6b;
        } else {
            self->unk_24c = 1;
            self->unk_23c = -0x6b;
        }
        if (((self->unk_f4 << 4) >> 16) == 0x38) {
            self->unk_251 = 0x13;
            self->unk_23c = 0;
            self->unk_204.x = self->unk_21c;
            func_02106054(func_0209c0ac(self->unk_130), 0, 0);
        }
        break;
    case 1:
        if (((self->unk_f4 << 4) >> 16) == 0x20) {
            self->unk_232 = (func_02063b8c(4) + 0xc) * 0x14;
            self->unk_251 = 0x12;
            *cnt = 0;
        }
        break;
    case 11:
        func_ov003_0222bb28(self, cnt);
        break;
    case 9:
        func_ov003_0222b928(self, cnt);
        break;
    case 0x12:
        if (func_ov068_02269a28(self)) {
            self->unk_23a = 0;
            self->unk_251 = 2;
            func_0205668c(self->unk_ec, 0x39, 1, 0x1000, 0x20);
        }
        break;
    case 0x13:
        if (func_ov068_02269aa4(self)) {
            self->unk_251 = 1;
            self->unk_254 = 0;
            func_0205668c(self->unk_ec, 0x21, 1, 0x1000, 0);
            func_02106054(func_0209c0ac(self->unk_130), 0, 0x1f);
        } else {
            self->unk_100 = 1;
        }
        break;
    }
}

extern "C" void func_ov003_0222ab68(V3 *out, V3 *in, s32 c) {
    s32 lim = func_01ffc5a4(c << 12, 0x40000);
    out->x = in->x;
    out->y = in->y;
    out->z = in->z;
    out->y = 0;
    s32 x = in->x;
    if (x >= 0) {
        if (x > lim) {
            out->x = lim;
        }
    } else {
        s32 n = -lim;
        if (x < n) {
            out->x = n;
        }
    }
    s32 z = in->z;
    if (z >= 0) {
        if (z > lim) {
            out->z = lim;
        }
    } else {
        lim = -lim;
        if (z < lim) {
            out->z = lim;
        }
    }
}

extern "C" s32 func_ov003_0222abc0(Rec *self) {
    V3 *pos = &self->unk_204;
    s16 *cnt = &self->unk_242;
    s32 ret = 0;
    Unk_ov003_0222abc0_Obj o;
    func_020339bc(&o, pos, ret, 1);
    V3 *vel = &self->unk_1d4;
    V3 dir;
    func_ov003_0222e328(&dir, self->unk_23a);
    s32 nang;
    if (func_020a62a0() != 0 || self->unk_251 == 0x11) {
        if (o.unk_30 != 0) {
            if (func_020338d0(&o, pos->y) != 0) {
                func_ov003_02229910(self);
                func_ov003_0222de04(self);
                ret = 2;
            } else {
                pos->y = pos->y - 0x200;
                ret = 1;
            }
        }
    }
    if (func_ov003_0222b784(self) != 0) {
        self->unk_24b = 0;
        s32 c = *cnt;
        if (c < 2) {
            nang = (s16)(self->unk_23a - 0xaaa);
        } else {
            s32 n = c + 1;
            if (n % 4 == 0) {
                nang = (s16)(self->unk_23a + 0xaaa);
            } else if (n % 2 == 0) {
                nang = (s16)(self->unk_23a - 0xaaa);
            }
        }
        func_ov003_0222e1e0(self, nang, 0xc000);
        func_02033988(&o);
        return 0;
    }
    s32 r;
    if (self->unk_24d == 0x1e) {
        r = func_020e7d4c(pos, vel, 0x28, 0x1000, 0x19a);
    } else {
        r = func_020e7d4c(pos, vel, 8, 0x1000, 0x52);
    }
    if (r == 0) {
        if (func_020a62a0() != 0) {
            if (func_ov003_0222e1e0(self, self->unk_23a, 0xc000) == 0) {
                vel->x += data_02135f44[((u16)self->unk_23a >> 4) * 2];
                vel->z += data_02135f44[(((u16)self->unk_23a >> 4) * 2 + 1)];
                func_02033988(&o);
                return 0;
            }
        }
    } else {
        self->unk_23a = func_02002bdc(pos, vel);
    }
    s32 c = *cnt;
    if (c == 0) {
        s32 a = self->unk_23a;
        self->unk_23a = a + func_01ffc5a4(0x2000, 0x6000);
    } else if (c % 4 == 0) {
        self->unk_23a = self->unk_23a + 0xaaa;
    } else if (c % 2 == 0) {
        self->unk_23a = self->unk_23a - 0xaaa;
    }
    (*cnt)++;
    self->unk_24b = 1;
    func_02033988(&o);
    return ret;
}
