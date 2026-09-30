#include "types.h"

struct Unk_ov068_02268b70_Vec {
    s32 x, y, z;
};

struct Unk_ov068_02268b70_S50 {
    u8 pad_00[0x9c];
    u32 unk_9c;
    u32 unk_a0;
    u32 unk_a4;
    u8 pad_a8[0x8];
};

// Actor owned by overlay 3 (fields used by the ov068 helpers).
struct Unk_ov068_02268b70_Obj {
    /* 0x000 */ u8 pad_00[0x50];
    /* 0x050 */ Unk_ov068_02268b70_S50 unk_50;
    /* 0x100 */ u8 pad_100[0x30];
    /* 0x130 */ u8 unk_130[4];
    /* 0x134 */ u8 pad_134[0x1c8 - 0x134];
    /* 0x1c8 */ Unk_ov068_02268b70_Vec unk_1c8;
    /* 0x1d4 */ Unk_ov068_02268b70_Vec unk_1d4;
    /* 0x1e0 */ u8 pad_1e0[0x204 - 0x1e0];
    /* 0x204 */ Unk_ov068_02268b70_Vec unk_204;
    /* 0x210 */ Unk_ov068_02268b70_Vec unk_210;
    /* 0x21c */ s32 unk_21c;
    /* 0x220 */ s32 unk_220;
    /* 0x224 */ s32 unk_224;
    /* 0x228 */ s32 unk_228;
    /* 0x22c */ u8 pad_22c[6];
    /* 0x232 */ s16 unk_232;
    /* 0x234 */ u8 pad_234[6];
    /* 0x23a */ s16 unk_23a;
    /* 0x23c */ u8 pad_23c[2];
    /* 0x23e */ s16 unk_23e;
    /* 0x240 */ u8 pad_240[2];
    /* 0x242 */ s16 unk_242;
    /* 0x244 */ u16 unk_244;
    /* 0x246 */ u8 pad_246;
    /* 0x247 */ u8 unk_247;
    /* 0x248 */ u8 pad_248;
    /* 0x249 */ u8 unk_249;
    /* 0x24a */ u8 pad_24a;
    /* 0x24b */ u8 unk_24b;
    /* 0x24c */ u8 unk_24c;
    /* 0x24d */ s8 unk_24d;
    /* 0x24e */ u8 pad_24e;
    /* 0x24f */ u8 unk_24f;
    /* 0x250 */ u8 pad_250;
    /* 0x251 */ u8 unk_251;
    /* 0x252 */ u8 unk_252;
    /* 0x253 */ u8 pad_253;
    /* 0x254 */ u8 unk_254;
    /* 0x255 */ u8 unk_255;
};

typedef Unk_ov068_02268b70_Obj Obj_t;
typedef Unk_ov068_02268b70_Vec Vec_t;

extern "C" {
s32 func_ov003_0222d334(Obj_t *);
s32 func_ov068_02268a30(Obj_t *, s16 *, s32 *, Vec_t *);
s32 func_01ffc5a4(s32, s32);
s32 func_01ffcb0c(s32, s32);
s32 func_02063b8c(s32);
s32 func_ov003_02229938(Obj_t *);
s32 func_01ffca58(void *, void *, void *);
s32 func_01ffca8c(void *, void *, void *);
s32 func_ov003_0222ab68(void *, void *, s32);
s32 func_0209c0ac(void *);
s32 func_02106020(s32, s32);
s32 func_020e9650(void *, void *);
s32 func_ov003_02212338(s32);
s32 func_0205668c(void *, s32, s32, s32, s32);
s16 func_02002bdc(void *, void *);
s32 func_ov003_0222dd54(Obj_t *, s32, s32);
s32 func_ov003_0222af48(Obj_t *, s32);
s32 func_ov003_02229910(Obj_t *);
s32 func_020e7530(s16 *, s32, s32);
void *func_02095204(s32);
s32 func_ov003_0222c7fc(Obj_t *, Vec_t *);
s32 func_ov068_02268ce8(Obj_t *, u32, u32, s16 *);
s32 func_ov068_02268e8c(Obj_t *, u32, u32);
s32 func_ov003_0222adc4(Obj_t *);
s32 func_02133150(s32, s32);
s32 func_ov003_0222e2fc(void *);
s32 func_ov003_0221227c();
void func_ov003_0222e328(Vec_t *, s32);
void func_02043b90();
s32 func_02106054(void *, s32, s32);
void func_ov068_02269424(Vec_t *, Unk_ov068_02268b70_S50 *, s32);
void func_ov068_022696e4(Vec_t *, s32);

s32 func_ov068_02268b70(Obj_t *o, s16 *p) {
    s32 inside = func_ov003_0222d334(o);
    Vec_t *v = &o->unk_204;
    s16 a;
    s32 b;
    Vec_t c;
    if (func_ov068_02268a30(o, &a, &b, &c) != 0) {
        if (inside != 0) {
            if (b <= func_01ffc5a4(0x1000, 0x4000) && v->y <= c.y + func_01ffc5a4(0x1000, 0x8000) &&
                v->y >= c.y - func_01ffc5a4(0x1000, 0x8000)) {
                o->unk_251 = 6;
                o->unk_244 = (func_02063b8c(5) + 0x10) * 0x14;
                o->unk_242 = 0;
                if (o->unk_24d == 0x33) {
                    if (o->unk_21c != 1) {
                        o->unk_251 = 0;
                    } else {
                        func_ov003_02229938(o);
                    }
                }
            } else {
                u32 t = o->unk_252;
                if (func_02063b8c(100) > (s32)(t - 0x14)) {
                    Vec_t *d = &o->unk_1d4;
                    if (d->x != *(volatile s32 *)&c.x || d->z != *(volatile s32 *)&c.z) {
                        Vec_t *d2 = &o->unk_1d4;
                        Vec_t *e2;
                        d2->x = c.x;
                        d2->y = c.y;
                        d2->z = c.z;
                        e2 = &o->unk_1c8;
                        e2->x = v->x;
                        e2->y = v->y;
                        e2->z = v->z;
                    }
                    if (b <= 0x3000) {
                        o->unk_220 = c.y;
                    } else {
                        o->unk_220 = o->unk_228;
                    }
                    *p = *p + a;
                    func_01ffca58(&c, v, &c);
                    func_ov003_0222ab68(&c, &c, 1);
                    func_01ffca8c(v, &c, v);
                }
            }
        } else {
            o->unk_220 = o->unk_228;
        }
        return 1;
    }
    o->unk_220 = o->unk_228;
    return 0;
}

s32 func_ov068_02268ce8(Obj_t *o, u32 mode, u32 q, s16 *p) {
    Vec_t *v = &o->unk_204;
    if (o->unk_247 != 0 && (*p == 0 || *p > 0x1f) && func_02106020(func_0209c0ac(o->unk_130), 0) == 0x1f) {
        if (mode == 3 || mode == 1) {
            if (func_020e9650((void *)q, v) < 0x1000) {
                s16 *pp = &o->unk_23e;
                if (func_ov003_02212338(o->unk_24d == 0x37 ? 1 : 0)) {
                    o->unk_251 = 0x13;
                    o->unk_24c = 1;
                    func_0205668c(&o->unk_50.unk_9c, 0, 2, 0x1000, (u32)(o->unk_50.unk_a4 << 4) >> 16);
                } else {
                    s32 t = *pp;
                    if (t > 0 && o->unk_24d == 0x36) {
                        v->y = v->y + (func_01ffcb0c(func_01ffc5a4(0x1000, 0x12000), t << 12) + t * t * -10);
                        *pp = *pp + 3;
                        if (v->y <= 0) {
                            *pp = 0;
                        }
                    }
                }
                return 1;
            }
            o->unk_251 = 5;
            return 2;
        }
        if (o->unk_251 == 7) {
            o->unk_251 = 4;
            *p = 0;
        }
    } else {
    if ((mode == 1 || mode == 3) && *p == 0) {
        *p = 0x12c;
    } else {
        if (*p < 0x1f) {
            if (func_ov003_0222af48(o, 1)) {
                func_ov003_02229910(o);
            }
        } else if (o->unk_24b) {
            s16 t = o->unk_23a;
            func_ov003_0222dd54(o, 0, 1);
            func_020e7530(&t, func_02002bdc((void *)q, v), 0x666);
            o->unk_23a = t;
            o->unk_251 = 7;
        }
    }
    *p = *p - 1;
    }
    return 0;
}

s32 func_ov068_02268e8c(Obj_t *o, u32 mode, u32 q) {
    Vec_t *v = &o->unk_204;
    s32 c232 = o->unk_232;
    s16 t23a = o->unk_23a;
    s16 *r6 = &o->unk_23e;
    Unk_ov068_02268b70_S50 *s = &o->unk_50;
    if (*r6 == 0 || o->unk_24d == 0x37) {
        if (func_02106020(func_0209c0ac(o->unk_130), 0) == 0x1f) {
            if (mode == 1) {
                if (*r6 == 0) {
                    func_ov003_0222dd54(o, 1, 0);
                    t23a = func_02002bdc(v, (void *)q);
                }
                *r6 = *r6 + 1;
            }
            if (c232 > 0) {
                o->unk_232 = c232 - 1;
            } else if (mode == 0) {
                o->unk_232 = 0x3c;
                if (o->unk_24d == 0x37) {
                    if ((u32)(s->unk_a4 << 4) >> 16 < 4 && (u32)(s->unk_a0 << 4) >> 16 < 0xb) {
                        func_ov003_0222dd54(o, 1, 0);
                    }
                }
            }
            if (o->unk_24b) {
                if (func_020e9650(v, (void *)q) < 0x2000) {
                    func_020e7530(&t23a, func_02002bdc(v, (void *)q), 0xe38);
                } else {
                    func_020e7530(&t23a, func_02002bdc(v, (void *)q), 0x71c);
                }
                o->unk_23a = t23a;
            }
        }
    }
    if (o->unk_24d == 0x37) {
        s32 a = (s32)s->unk_a0 >> 12;
        if ((u16)a == 0xe && (u32)(s->unk_a4 << 4) >> 16 == 0xd) {
            s->unk_a4 = 0xa000;
        } else {
            s32 b = (s32)s->unk_a4 >> 12;
            if ((u16)b < 4 && (u16)a < 0xb) {
                func_0205668c(&s->unk_9c, 0xb, 1, 0x1000, 4);
            } else if ((u16)a == 0xb && (u16)b == 0xa) {
                func_0205668c(&s->unk_9c, 0xe, 0, 0x1000, 10);
            }
        }
    }
    return 1;
}

s32 func_ov068_02269040(Obj_t *o, s16 *p) {
    s32 r = 0;
    void *q = func_02095204(4);
    if (q) {
        u32 qq = (u32)q + 0x5c;
        Vec_t vec;
        s32 st = (s8)func_ov003_0222c7fc(o, &vec);
        s16 c = o->unk_254;
        if (c > 0) {
            s32 lim = o->unk_224;
            if (func_020e9650(&vec, &o->unk_204) > lim) {
                c = c - 3;
                o->unk_254 = c > 0 ? c : 0;
            }
        }
        if (c >= 0x14 || o->unk_232 > 0) {
            if (o->unk_247) {
                r = func_ov068_02268e8c(o, (u8)st, qq);
            } else {
                st = 1;
            }
        }
        if (c >= 0x14 && o->unk_247 == 0) goto call;
        if (c >= o->unk_255) goto call;
        if (*p <= 0) goto done;
    call:
        r = func_ov068_02268ce8(o, (u8)st, qq, p);
    }
done:
    return r;
}

void func_ov068_02269110(Obj_t *o, s16 *p, u32 mode) {
    func_ov003_0222adc4(o);
    if (o->unk_251 == 4) {
        func_ov003_0222dd54(o, 0, 1);
        if (func_ov003_0222d334(o)) {
            o->unk_251 = 0x13;
            o->unk_244 = (func_02063b8c(9) + 2) * 0x14;
        }
    } else if (o->unk_251 == 5) {
        if (o->unk_24d == 0x36 &&
            (*p > 0 || (o->unk_24f % 10 == 0 && func_02063b8c(100) > 0x4b))) {
            s32 t = *p;
            o->unk_204.y = o->unk_204.y + (func_01ffcb0c(func_01ffc5a4(0x1000, 0x12000), t << 12) + t * t * -10);
            if (*p == 0) {
                void *q = func_02095204(4);
                if (q) {
                    o->unk_23a = func_02002bdc(&o->unk_204, (u8 *)q + 0x5c);
                    func_ov003_0222dd54(o, 1, 0);
                }
            }
            *p = *p + 3;
            if (*p > 3) {
                if (func_ov003_0222e2fc(&o->unk_204) == 0 && o->unk_204.y <= 0) {
                    *p = 0;
                }
            }
        } else {
            func_ov003_0222dd54(o, 0, 1);
        }
        if (o->unk_24d == 0x37 || *p == 0) {
            if (mode != 2) {
                o->unk_251 = 0x13;
                *p = 0;
            }
        }
    }
}

void func_ov068_02269250(Obj_t *o) {
    s16 *r7 = &o->unk_242;
    Vec_t *r4 = &o->unk_210;
    Vec_t *r6 = &o->unk_204;
    u32 st = o->unk_251;
    if (st == 3) {
        void *q = func_02095204(4);
        if (q) {
            s16 c = o->unk_23a;
            s16 buf = c;
            Vec_t vec;
            func_020e7530(&buf, func_02002bdc(r6, (u8 *)q + 0x5c), 0x1554);
            o->unk_23a = buf;
            func_ov003_0222e328(&vec, buf);
            r6->x = r6->x + func_01ffcb0c(0x23000, vec.x);
            r6->z = r6->z + func_01ffcb0c(0x23000, vec.z);
            func_ov068_02269424(&o->unk_210, &o->unk_50, c - buf);
        }
        if (*r7 == 0) {
            if (func_ov003_0221227c()) {
                func_ov003_0222dd54(o, 1, 0);
                *r7 = *r7 + 1;
            } else {
                func_ov003_0222dd54(o, 0, 1);
            }
        } else {
            *r7 = *r7 + 1;
            if (*r7 > 0x42) {
                o->unk_251 = 7;
                *r7 = 0;
            }
        }
    } else {
        Vec_t vec;
        func_ov003_0222e328(&vec, o->unk_23a);
        if (st == 7) {
            r6->x = r6->x + func_01ffcb0c(vec.x, 0x64000);
            r6->z = r6->z + func_01ffcb0c(vec.z, 0x64000);
            r4->x = r4->x + 0x266;
            r4->y = r4->y + 0x266;
            r4->z = r4->z + 0x266;
            func_ov068_02269424(r4, &o->unk_50, 0);
        } else {
            r6->x = r6->x + func_01ffc5a4(func_01ffcb0c(vec.x, o->unk_21c << 12), 0x5000);
            r6->z = r6->z + func_01ffc5a4(func_01ffcb0c(vec.z, o->unk_21c << 12), 0x5000);
            r4->x = r4->x + 0x333;
            r4->y = r4->y + 0x333;
            r4->z = r4->z + 0x333;
        }
        if (func_ov003_0222af48(o, 4)) {
            Vec_t *z;
            o->unk_251 = 0x13;
            o->unk_249 = 0;
            z = &o->unk_204;
            z->x = 0;
            z->y = 0;
            z->z = 0;
            o->unk_21c = 0;
            func_02043b90();
            func_02106054((void *)func_0209c0ac(o->unk_130), 0, 0);
        }
    }
}

void func_ov068_02269424(Vec_t *a, Unk_ov068_02268b70_S50 *b, s32 d) {
    s32 ang = (s16)((u32)(b->unk_a4 << 4) >> 16);
    s32 t = d;
    if (d < 0) t = -d;
    if (t > 0x38e) {
        func_ov068_022696e4(a, 0);
        if (d > 0) {
            func_0205668c(&b->unk_9c, 0, 3, 0x4000, (u16)ang);
        } else {
            func_0205668c(&b->unk_9c, 0x5a, 1, 0x4000, (u16)ang);
        }
    } else {
        func_ov068_022696e4(a, 1);
        if (ang > 0x2d) {
            func_0205668c(&b->unk_9c, 0x2e, 3, 0x4000, (u16)ang);
        } else {
            func_0205668c(&b->unk_9c, 0x2e, 1, 0x4000, (u16)ang);
        }
    }
}
}
