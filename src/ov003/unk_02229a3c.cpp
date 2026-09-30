#include "types.h"

struct Unk_ov003_02229a3c_V3 {
    s32 x, y, z;
    Unk_ov003_02229a3c_V3() {}
    Unk_ov003_02229a3c_V3(s32 a, s32 b, s32 c) {
        x = a;
        y = b;
        z = c;
    }
};
typedef Unk_ov003_02229a3c_V3 V3;

struct Unk_ov003_02229a3c_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

// One 0x25c-byte entity record (see ov003_058)
struct Unk_ov003_02229a3c_Rec {
    u8 unk_00[0x50];
    u8 unk_50[0x9c];
    u8 unk_ec[4];
    Unk_ov003_02229a3c_Bits unk_f0;
    Unk_ov003_02229a3c_Bits unk_f4;
    u8 pad_f8[0x130 - 0xf8];
    u8 unk_130[0x1b0 - 0x130];
    V3 unk_1b0;
    V3 unk_1bc;
    u8 pad_1c8[0x204 - 0x1c8];
    V3 unk_204;
    u8 pad_210[0x21c - 0x210];
    s32 unk_21c;
    u8 pad_220[4];
    s32 unk_224;
    u8 pad_228[0x238 - 0x228];
    u16 unk_238;
    s16 unk_23a;
    u8 pad_23c[0x240 - 0x23c];
    s16 unk_240;
    s16 unk_242;
    u8 pad_244[0x24a - 0x244];
    u8 unk_24a;
    u8 unk_24b;
    u8 pad_24c;
    s8 unk_24d;
    u8 pad_24e;
    u8 unk_24f;
    u8 pad_250;
    u8 unk_251;
    u8 unk_252;
    u8 pad_253;
    u8 unk_254;
    u8 unk_255;
    u8 pad_256;
    u8 unk_257;
    u8 pad_258[4];
};
typedef Unk_ov003_02229a3c_Rec Rec;

extern "C" {
s32 func_02063b8c(s32 n);
s32 func_01ffc5a4(s32 a, s32 b);
s32 func_01ffcb0c(s32 a, s32 b);
void *func_02095204(s32 n);
s32 func_020e9650(void *a, void *b);
s32 func_0205668c(void *o, s32 a, s32 b, s32 c, s32 d);
void func_020547a4(void *o, s32 v);
void *func_0204da0c(void);
void func_0204ee10(s32 *x, s32 *y, void *p);
u16 *func_0204ebd8(void *g, s32 hx, s32 hy, s32 lx, s32 ly, u32 layer);
s32 func_02002bdc(void *a, void *b);
void *func_0209c0ac(void *p);
void func_02106054(void *a, s32 b, s32 c);

void func_ov003_02229910(Rec *o);
void func_ov003_022297c8(Rec *o, s16 *p);
void func_ov003_0222bb28(Rec *o, s16 *p);
void func_ov003_0222e328(V3 *v, s32 a);
void func_ov003_0222d720(Rec *o);
s32 func_ov003_0222dd54(Rec *o, s32 a, s32 b);
void func_ov003_0222c7fc(Rec *o, s32 *out);
s32 func_ov003_0222af48(Rec *o, s32 a);
void func_ov003_0222d674(Rec *o);

BOOL func_ov003_02229dcc(void *p);
void func_ov003_02229ab4(Rec *o);
void func_ov003_02229c1c(Rec *o, s16 *p);
}

extern "C" void func_ov003_02229a3c(Rec *o) {
    V3 *p = &o->unk_204;
    if (func_02063b8c(2) == 0) {
        p->x += func_01ffc5a4(0x7000, 0x10000);
        p->y = func_01ffc5a4(0xc000, 0x10000);
        p->z += func_01ffc5a4(0x3000, 0x10000);
    } else {
        p->x -= func_01ffc5a4(0x7000, 0x10000);
        p->y = func_01ffc5a4(0xc000, 0x10000);
        p->z += func_01ffc5a4(0x3000, 0x10000);
    }
}

extern "C" void func_ov003_02229ab4(Rec *o) {
    V3 *hi = &o->unk_1bc;
    V3 *lo = &o->unk_1b0;
    s16 a = o->unk_23a;
    u8 flip = o->unk_24b;
    struct { V3 d; V3 save; } l;
    l.d.x = 0;
    l.d.y = 0;
    l.d.z = 0;
    V3 *p = &o->unk_204;
    l.save.x = p->x;
    l.save.y = p->y;
    l.save.z = p->z;
#define d l.d
#define save l.save
    if (func_02063b8c(100) > 0x50) {
        if (o->unk_24f % 20 == 0) {
            if (flip == 0) {
                flip = 1;
            } else {
                flip = 0;
            }
            o->unk_24b = flip;
        }
        if (flip != 0) {
            if (o->unk_24d == 0x33) {
                a = a + (s16)o->unk_21c;
            } else {
                a = a + 0xaaa;
            }
        } else {
            if (o->unk_24d == 0x33) {
                a = a + 0xaaa;
            } else {
                a = a - (s16)o->unk_21c;
            }
        }
    }
    func_ov003_0222e328(&d, a);
    o->unk_23a = a;
    p->z += func_01ffc5a4(func_01ffcb0c(o->unk_257 << 12, d.z), 0x20000);
    p->x += func_01ffc5a4(func_01ffcb0c(o->unk_257 << 12, d.x), 0x20000);
    if (p->x < lo->x || p->x > hi->x) {
        p->x = save.x;
    }
    if (p->z < lo->z || p->z > hi->z) {
        p->z = save.z;
    }
    if (o->unk_24d != 0x33) {
        if (p->z != save.z) {
            p->y = p->y - (p->z - save.z);
        }
        if (p->y < lo->y && p->y > hi->y) {
            p->y = save.y;
        }
    }
}

#undef d
#undef save

extern "C" void func_ov003_02229c1c(Rec *o, s16 *p) {
    void *r4 = func_02095204(4);
    V3 *q = &o->unk_204;
    if (func_ov003_02229dcc(q) == 0) {
        o->unk_254 = 0xfe;
    }
    o->unk_24a = 0;
    func_ov003_0222d720(o);
    if (r4 != 0) {
        s32 d = func_020e9650((u8 *)r4 + 0x5c, q);
        s32 n = o->unk_254;
        s32 st;
        if (d <= 0xccd) {
            o->unk_251 = 9;
            *p = 0;
        } else if (st = o->unk_24d, (u8)(s8)(st - 0xe) <= 1) {
            if (n > 0x14) {
                func_0205668c(o->unk_ec, 9, 1, 0x1000, o->unk_f4.mid);
                o->unk_252 = 0x3c;
            } else if (o->unk_252 != 0) {
                o->unk_252--;
            } else if (d < o->unk_224) {
                u32 m = o->unk_f4.mid;
                if (m == 0) {
                    func_0205668c(o->unk_ec, 4, 1, 0x1000, 0);
                } else if (m > 4) {
                    func_0205668c(o->unk_ec, 4, 3, 0x1000, m);
                }
            } else {
                u32 m = o->unk_f4.mid;
                if (m != 0) {
                    func_0205668c(o->unk_ec, 0, 3, 0x1000, m);
                }
            }
        } else if (st == 0x1a) {
            if (n > 0x14) {
                u32 m = o->unk_f4.mid;
                if (m == 2) {
                    func_020547a4(o->unk_50, 1);
                } else if (m == 1) {
                    func_020547a4(o->unk_50, 0);
                    o->unk_251 = 0x13;
                    o->unk_252 = 0x3c;
                }
            } else {
                s32 t = (s32)(*(u32 *)&o->unk_f4) >> 12;
                if ((u16)t == 0 && o->unk_252 == 0) {
                    func_020547a4(o->unk_50, 1);
                } else if ((u16)t == 1) {
                    func_020547a4(o->unk_50, 2);
                } else if (o->unk_252 != 0) {
                    o->unk_252--;
                }
            }
        }
    }
}

static inline BOOL Unk_ov003_02229dcc_Chk(u16 *p) {
    BOOL f8 = TRUE, f7 = TRUE, f6 = TRUE, f5 = TRUE, f4 = TRUE, f3 = TRUE, f2 = TRUE;
    BOOL f1 = FALSE;
    u32 v = *p;
    if (v <= 5) {
        f1 = TRUE;
    }
    if (f1 == FALSE) {
        if (v < 6 || v > 0xb) {
            f2 = FALSE;
        }
    }
    if (f2 == FALSE) {
        if (v < 0xc || v > 0x11) {
            f3 = FALSE;
        }
    }
    if (f3 == FALSE) {
        if (v < 0x12 || v > 0x19) {
            if (v != 0x1c) {
                f4 = FALSE;
            }
        }
    }
    if (f4 == FALSE) {
        if (v < 0x8a || v > 0x8f) {
            if (v < 0x90 || v > 0x95) {
                if (v < 0x96 || v > 0x9b) {
                    if (v < 0x9c || v > 0xa3) {
                        if (v != 0xa5) {
                            f5 = FALSE;
                        }
                    }
                }
            }
        }
    }
    if (f5 == FALSE) {
        if (v != 0x1a) {
            f6 = FALSE;
        }
    }
    if (f6 == FALSE) {
        if (v != 0xa4) {
            f7 = FALSE;
        }
    }
    if (f7 == FALSE) {
        if (v != 0x1d) {
            f8 = FALSE;
        }
    }
    return f8;
}

extern "C" BOOL func_ov003_02229dcc(void *pp) {
    void *g = func_0204da0c();
    if (g != 0) {
        s32 xy[2];
        func_0204ee10(&xy[0], &xy[1], pp);
        s32 hy, hx, x, y;
        y = xy[1];
        x = xy[0];
        hx = x >> 4;
        hy = y >> 4;
        u16 *c = func_0204ebd8(g, hx, hy, x - (hx << 4), y - (hy << 4), 0);
        if (c != 0) {
            if (Unk_ov003_02229dcc_Chk(c)) {
                return TRUE;
            }
        }
    }
    return FALSE;
}

extern "C" void func_ov003_02229eac(Rec *o) {
    s16 *p = &o->unk_242;
    if ((u8)(s8)(o->unk_24d - 0xe) <= 1 && o->unk_f4.mid != 0) {
        if (o->unk_251 == 4 || o->unk_251 == 0x13) {
            void *r = func_02095204(4);
            if (r != 0) {
                o->unk_23a = func_02002bdc(&o->unk_204, (u8 *)r + 0x5c);
            }
            o->unk_251 = 0x13;
        }
    }
    switch (o->unk_251) {
    case 4:
        func_ov003_02229ab4(o);
        if (o->unk_24d == 0x1a) {
            if (*p > 0x140 || (*p % 20 == 0 && func_02063b8c(100) > 0x5a && *p > 0xa0)) {
                o->unk_251 = 0x13;
                *p = 0;
            }
        } else {
            if (*p > 0xa0 || (*p % 20 == 0 && func_02063b8c(100) > 0x5a && *p > 0x50)) {
                o->unk_251 = 0x13;
                *p = 0;
            }
        }
        func_ov003_02229c1c(o, p);
        break;
    case 7:
        o->unk_251 = 9;
        o->unk_23a = o->unk_240;
        *p = 0;
    case 9:
        func_ov003_022297c8(o, p);
        break;
    case 11:
        if (o->unk_24d == 0x1a) {
            func_ov003_0222bb28(o, p);
        } else {
            func_ov003_022297c8(o, p);
        }
        break;
    case 0x13:
        if (o->unk_24d == 0x1a) {
            if (o->unk_f4.mid == 2) {
                if (*p > 0xa0 || (*p % 20 == 0 && func_02063b8c(100) > 0x55 && *p >= 0x28)) {
                    *p = 0;
                    o->unk_251 = 4;
                }
            }
        } else {
            if (*p > 0x38 || (*p % 5 == 0 && func_02063b8c(100) > 0x55 && *p > 0)) {
                o->unk_251 = 4;
                *p = 0;
            }
        }
        func_ov003_02229c1c(o, p);
        break;
    }
    *p = *p + 1;
}

extern "C" void func_ov003_0222a090(Rec *o, s16 *p) {
    V3 *pos = &o->unk_204;
    s32 n = o->unk_254;
    V3 tv;
    func_ov003_0222c7fc(o, (s32 *)&tv);
    if (tv.x != 0 && o->unk_24a == 0) {
        s32 lim = o->unk_255;
        if (n >= lim) {
            s32 a;
            if (tv.x > pos->x) {
                a = (s16)0xffff9554;
            } else {
                a = 0x6aac;
            }
            o->unk_23a = a;
            o->unk_238 = 0xd55;
            o->unk_251 = 7;
            o->unk_24a = 1;
            func_020547a4(o->unk_50, 1);
            s32 z = 0;
            *p = z;
            func_ov003_0222dd54(o, 1, z);
            if (o->unk_24d == 9) {
                func_0205668c(o->unk_ec, 9, 0, 0x1000, 0);
            }
        } else if (o->unk_24d == 0x14) {
            if (n * 2 >= lim || o->unk_252 != 0) {
                if (o->unk_f4.mid == 0) {
                    func_0205668c(o->unk_ec, 4, 1, 0x1000, 0);
                    o->unk_252 = 0x3c;
                } else if (o->unk_252 != 0) {
                    o->unk_252--;
                }
            } else {
                s32 m = (s32)(*(u32 *)&o->unk_f4) >> 12;
                if ((u16)m != 0 || o->unk_f0.mid != 0) {
                    func_0205668c(o->unk_ec, 0, 3, 0x1000, (u16)m);
                }
            }
        }
    }
}

extern "C" void func_ov003_0222a1c8(Rec *o, s16 *p) {
    if (o->unk_254 == 0xfe) {
        o->unk_251 = 8;
    } else {
        V3 tv;
        func_ov003_0222c7fc(o, (s32 *)&tv);
        if (tv.x != 0) {
            s16 v = ((o->unk_255 - o->unk_254) * 31) / o->unk_255;
            if (v <= 0) {
                func_ov003_02229910(o);
                o->unk_24a = 1;
                *p = 0;
            } else {
                if (v > 0x1f) {
                    v = 0x1f;
                }
                func_02106054(func_0209c0ac(o->unk_130), 0, v);
            }
        }
    }
}

extern "C" void func_ov003_0222a24c(Rec *o, s16 *p) {
    V3 *pos = &o->unk_204;
    s32 st = o->unk_24d;
    if (st != 0x10 && st != 0x11 && st != 0x12 && st != 0x13) {
        func_ov003_0222dd54(o, 0, 1);
    }
    if (o->unk_23a >= 0) {
        pos->x += 0x200;
    } else {
        pos->x -= 0x200;
    }
    if (func_ov003_0222af48(o, 1)) {
        func_ov003_02229910(o);
    } else {
        s32 t = func_01ffc5a4(*p << 12, 0x4000);
        pos->y += func_01ffcb0c(func_01ffcb0c(0x100, t), t);
        *p = *p + 1;
        if (o->unk_251 == 0xb && (o->unk_23a == 0x6001 || o->unk_23a == -0x6001)) {
            pos->z -= 0x100;
        } else {
            pos->z += 0x100;
        }
        if (st == 0x14) {
            if (o->unk_f0.mid < 0x18) {
                func_0205668c(o->unk_ec, 0x1a, 0, 0x1000, 0x18);
            } else if (o->unk_f4.mid < 0x18) {
                *(u32 *)&o->unk_f4 = 0x18000;
            }
        } else {
            func_ov003_0222d674(o);
        }
    }
}
