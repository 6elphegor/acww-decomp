#include "types.h"

struct Unk_ov004_0223a850_Vec {
    s32 x;
    s32 y;
    s32 z;
};

struct Unk_ov004_0223a850_Out {
    Unk_ov004_0223a850_Vec unk_00;
    s32 unk_0c;
    s32 unk_10;
    u8 unk_14;
};

struct Unk_ov004_0223aa40_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

struct Unk_ov004_0223aa40_Sub {
    u8 pad_00[0x9c];
    u8 unk_9c[4];
    s32 unk_a0;
    Unk_ov004_0223aa40_Bits unk_a4;
};

struct Unk_ov004_0223a850_Rec {
    /* 0x000 */ u8 pad_00[0x22];
    /* 0x022 */ u8 unk_22;
    /* 0x023 */ u8 pad_23[0x34 - 0x23];
    /* 0x034 */ Unk_ov004_0223a850_Vec unk_34;
    /* 0x040 */ u8 pad_40[0x4c - 0x40];
    /* 0x04c */ s32 unk_4c;
    /* 0x050 */ u8 pad_50[0x98 - 0x50];
    /* 0x098 */ s16 unk_98;
    /* 0x09a */ u8 unk_9a;
    /* 0x09b */ u8 pad_9b;
    /* 0x09c */ s16 unk_9c;
    /* 0x09e */ u8 pad_9e[0xac - 0x9e];
    /* 0x0ac */ s16 unk_ac;
    /* 0x0ae */ u8 pad_ae[0xb0 - 0xae];
    /* 0x0b0 */ u8 unk_b0[0x15c - 0xb0];
    /* 0x15c */ s32 unk_15c;
    /* 0x160 */ u8 pad_160[0x168 - 0x160];
    /* 0x168 */ s16 unk_168;
    /* 0x16a */ u8 pad_16a[0x170 - 0x16a];
    /* 0x170 */ u8 unk_170;
    /* 0x171 */ u8 pad_171;
    /* 0x172 */ s16 unk_172;
    /* 0x174 */ s32 unk_174;
    /* 0x178 */ u8 pad_178[0x192 - 0x178];
    /* 0x192 */ s16 unk_192;
    /* 0x194 */ u8 pad_194[2];
    /* 0x196 */ u8 unk_196;
    /* 0x197 */ u8 pad_197[0x2c8 - 0x197];
    /* 0x2c8 */ Unk_ov004_0223a850_Vec unk_2c8;
};

extern "C" {
extern u8 data_ov004_022523e4;
extern s16 data_02135f44[];

s32 func_ov004_0223d020(Unk_ov004_0223a850_Rec *r, Unk_ov004_0223a850_Out *out);
void func_ov004_0223a6e8(Unk_ov004_0223a850_Rec *r, Unk_ov004_0223a850_Out *out);
s32 func_ov004_0223d5e8(Unk_ov004_0223a850_Rec *r);
s32 func_ov004_0223d800(Unk_ov004_0223a850_Rec *r, Unk_ov004_0223a850_Vec *v);
s32 func_ov004_0223d188(s32 a, void *p);
s32 func_ov004_02239a24(s32 a);
void func_ov004_0223d980(Unk_ov004_0223a850_Vec *out, s32 ang);
void func_ov004_0223b464(Unk_ov004_0223a850_Rec *r, s32 ang, s32 cnt);
void *func_ov004_0223a570(Unk_ov004_0223a850_Rec *r);
Unk_ov004_0223a850_Rec *func_ov004_02237800();
Unk_ov004_0223a850_Rec *func_ov004_022377a0();
void func_ov004_02213b90();

s32 func_02002bdc(void *a, void *b);
s32 func_020e9650(void *a, void *b);
s32 func_020e7530(s16 *v, s32 target, s32 step);
s32 func_020e7870(u32 *v, s32 a, s32 b, s32 c, s32 d);
s32 func_02063b8c(s32 n);
void func_020e98f4(Unk_ov004_0223a850_Vec *out, Unk_ov004_0223a850_Vec *in, s32 s);
void func_01ffca58(void *a, void *b, void *c);
void func_01ffca8c(void *a, void *b, void *c);
s32 func_01ffcb0c(s32 a, s32 b);
void func_0205668c(void *p, s32 a, s32 b, s32 c, s32 d);
void func_020547a4(void *p, s32 a);

void func_ov004_0223a850(Unk_ov004_0223a850_Rec *r) {
    Unk_ov004_0223a850_Out l;
    s16 ang;
    s32 t = func_ov004_0223d020(r, &l);
    if (r->unk_9c > 0x50) {
        r->unk_9c = 0x50;
    }
    switch (r->unk_172) {
    case 4:
        func_ov004_0223a6e8(r, &l);
        break;
    case 3:
        ang = r->unk_192;
        if (func_020e7530(&ang, r->unk_ac, 0x2000) != 0) {
            r->unk_172 = 4;
        }
        r->unk_192 = ang;
        break;
    default:
        if (t == 3) {
            r->unk_ac = func_02002bdc(&l, &r->unk_2c8);
            r->unk_174 = (func_02063b8c(4) + 2) * 0x14;
            r->unk_172 = 3;
        } else if (func_ov004_0223d5e8(r) != 0) {
            r->unk_172 = 4;
            r->unk_174 = (func_02063b8c(4) + 1) * 0x14;
        }
        break;
    }
    if (r->unk_4c == 0) {
        if (l.unk_14 != 0) {
            if (l.unk_14 != 0) {
                if (l.unk_0c > 0) {
                    if (r->unk_98 == 0) {
                        if (func_020e9650(&l, &r->unk_2c8) < 0xe66) {
                            func_ov004_02213b90();
                            r->unk_4c = 1;
                        }
                    }
                }
            }
        }
    }
}

void func_ov004_0223a950(Unk_ov004_0223a850_Rec *r) {
    Unk_ov004_0223a850_Rec *p;
    u8 c = r->unk_196;
    if (c == 0x23) {
        p = func_ov004_022377a0();
    }
    switch (r->unk_172) {
    case 4: {
        u32 tmp = r->unk_15c;
        if (func_020e7870(&tmp, 0x1000, 0x66, 0x1000, 0x29) == 0) {
            r->unk_172 = 5;
        }
        r->unk_15c = tmp;
        break;
    }
    case 5:
        if (func_ov004_0223d5e8(r) != 0) {
            r->unk_172 = 0x19;
            r->unk_15c = 0;
            if (c == 0x23) {
                s16 v = (func_02063b8c(3) + 2) * 0x14;
                if (r->unk_22 == 0) {
                    v = v * 3;
                }
                r->unk_174 = v;
                p->unk_98 = v;
            } else {
                r->unk_174 = r->unk_98;
            }
        }
        break;
    default:
        if (func_ov004_0223d5e8(r) != 0) {
            r->unk_172 = 4;
            if (c == 0x23) {
                s16 v = (func_02063b8c(9) + 2) * 0x14;
                r->unk_174 = v;
                p->unk_98 = v;
            } else {
                s32 v = r->unk_98;
                if (v > 0) {
                    r->unk_174 = v;
                }
            }
        }
        break;
    }
}

BOOL func_ov004_0223aa40(Unk_ov004_0223a850_Rec *r) {
    Unk_ov004_0223a850_Out l;
    s16 ang;
    s32 t = func_ov004_0223d020(r, &l);
    Unk_ov004_0223a850_Vec *pos = &r->unk_2c8;
    s16 *pw = &r->unk_98;
    if (l.unk_14 != 0 && (t == 3 || *pw != 0)) {
        s32 a = func_02002bdc(pos, &l);
        ang = r->unk_192;
        Unk_ov004_0223aa40_Sub *s = (Unk_ov004_0223aa40_Sub *)((u8 *)r + 0xb0);
        func_020e7530(&ang, a, 0x38e);
        r->unk_192 = ang;
        if ((s8)r->unk_196 == 0x37) {
            s32 x = s->unk_a0 >> 12;
            if ((u16)x < 0xb && s->unk_a4.mid <= 2) {
                func_0205668c(s->unk_9c, 0xb, 1, 0x1000, 3);
            } else if ((u16)x < 0xe && s->unk_a4.mid < 0xa) {
                func_0205668c(s->unk_9c, 0xe, 0, 0x1000, 0xa);
            } else if (s->unk_a4.mid == 0xd && (u16)x > 0xa) {
                func_020547a4(s, 0xa);
            }
        }
        if (*pw > 0) {
            *pw = *pw - 1;
        } else {
            *pw = 0x3c;
        }
        return TRUE;
    }
    return FALSE;
}

void func_ov004_0223ab48(Unk_ov004_0223a850_Rec *r) {
    void *p = func_ov004_0223a570(r);
    if (func_ov004_0223d800(r, &r->unk_2c8) != 0) {
        r->unk_172 = 3;
        return;
    }
    if (func_ov004_0223d5e8(r) != 0) {
        if (p != 0) {
            r->unk_ac = func_ov004_0223d188(r->unk_192, p);
        } else {
            r->unk_ac = func_ov004_02239a24(0x10);
        }
        r->unk_9a = 0;
        r->unk_172 = 0x19;
        if (r->unk_22 != 0) {
            s16 v = (func_02063b8c(6) + 1) * 0x14;
            r->unk_174 = v;
        } else {
            s16 v = (func_02063b8c(0x1e) + 5) * 0x14;
            r->unk_174 = v;
        }
    }
}

void func_ov004_0223abf0(Unk_ov004_0223a850_Rec *r) {
    Unk_ov004_0223a850_Rec *o = func_ov004_02237800();
    Unk_ov004_0223a850_Vec *a = &r->unk_2c8;
    Unk_ov004_0223a850_Vec *b = &o->unk_2c8;
    s16 *cnt = &r->unk_168;
    if (func_020e9650(a, b) < 0x2000) {
        Unk_ov004_0223a850_Vec v1, v2, w1, w2;
        s32 ang1 = func_02002bdc(b, a);
        o->unk_192 = ang1;
        func_ov004_0223d980(&v1, ang1);
        func_ov004_0223b464(o, ang1, *cnt);
        s32 ang2 = func_02002bdc(a, b);
        r->unk_192 = ang2;
        func_ov004_0223d980(&v2, ang2);
        func_ov004_0223b464(r, ang2, *cnt);
        func_020e98f4(&w1, &v2, 0x4000);
        func_01ffca58(a, &w1, a);
        func_020e98f4(&w2, &v1, 0x4000);
        func_01ffca58(b, &w2, b);
        *cnt = *cnt + 1;
    } else if (func_ov004_0223d5e8(r) != 0) {
        r->unk_172 = 0x19;
        *cnt = 0;
    }
}

void func_ov004_0223acc4(Unk_ov004_0223a850_Rec *r) {
    if (func_ov004_0223d5e8(r) != 0) {
        r->unk_172 = 0x19;
        func_ov004_02237800()->unk_15c = 0x1000;
        r->unk_168 = 0;
    }
}

void func_ov004_0223acfc(Unk_ov004_0223a850_Rec *r) {
    Unk_ov004_0223a850_Rec *o = func_ov004_02237800();
    Unk_ov004_0223a850_Vec *a = &r->unk_2c8;
    Unk_ov004_0223a850_Vec *b = &o->unk_2c8;
    Unk_ov004_0223a850_Vec *c = &r->unk_34;
    s32 ang = func_02002bdc(b, a);
    s16 *cnt = &r->unk_168;
    s32 v4c = r->unk_4c;
    if (data_ov004_022523e4 % 10 == 0) {
        if (func_02063b8c(100) > 0x32) {
            r->unk_170 = 1;
        } else {
            r->unk_170 = 0;
        }
    }
    u32 f = r->unk_170;
    if (f != 0 && v4c < 0x1554) {
        ang = (s16)(ang + 0xb6);
        v4c += 0xb6;
    } else if (f == 0 && v4c > 0) {
        ang = (s16)(ang - 0xb6);
        v4c -= 0xb6;
    } else if (f != 0) {
        r->unk_170 = 0;
    } else {
        r->unk_170 = 1;
    }
    s32 d = func_020e9650(c, b);
    s32 idx = ((u16)ang >> 4) * 2;
    a->x = b->x + func_01ffcb0c(data_02135f44[idx], d);
    a->z = b->z + func_01ffcb0c(data_02135f44[idx + 1], d);
    o->unk_192 = ang;
    s32 res = func_02002bdc(a, b);
    r->unk_192 = res;
    func_ov004_0223b464(r, res, *cnt);
    r->unk_4c = v4c;
    *cnt = *cnt + 1;
    if (func_ov004_0223d5e8(r) != 0) {
        r->unk_172 = 0x19;
        *cnt = 0;
    }
}

void func_ov004_0223ae38(Unk_ov004_0223a850_Rec *r) {
    Unk_ov004_0223a850_Rec *o = func_ov004_02237800();
    Unk_ov004_0223a850_Vec *a = &r->unk_2c8;
    Unk_ov004_0223a850_Vec *b = &o->unk_2c8;
    Unk_ov004_0223a850_Vec *c = &o->unk_34;
    s32 ang = func_02002bdc(a, b);
    s16 *cnt = &r->unk_168;
    s32 v4c = r->unk_4c;
    if (data_ov004_022523e4 % 10 == 0) {
        if (func_02063b8c(100) > 0x32) {
            r->unk_170 = 1;
        } else {
            r->unk_170 = 0;
        }
    }
    u32 f = r->unk_170;
    if (f != 0 && v4c < 0x1554) {
        ang = (s16)(ang + 0xb6);
        v4c += 0xb6;
    } else if (f == 0 && v4c > 0) {
        ang = (s16)(ang - 0xb6);
        v4c -= 0xb6;
    } else if (f != 0) {
        r->unk_170 = 0;
    } else {
        r->unk_170 = 1;
    }
    s32 d = func_020e9650(c, a);
    s32 idx = ((u16)ang >> 4) * 2;
    b->x = a->x + func_01ffcb0c(data_02135f44[idx], d);
    b->z = a->z + func_01ffcb0c(data_02135f44[idx + 1], d);
    r->unk_192 = ang;
    s32 res = func_02002bdc(b, a);
    o->unk_192 = res;
    func_ov004_0223b464(o, res, *cnt);
    r->unk_4c = v4c;
    *cnt = *cnt + 1;
    if (func_ov004_0223d5e8(r) != 0) {
        r->unk_172 = 0x19;
        *cnt = 0;
    }
}

void func_ov004_0223af70(Unk_ov004_0223a850_Rec *r) {
    Unk_ov004_0223a850_Rec *o = func_ov004_02237800();
    Unk_ov004_0223a850_Vec *rp = &r->unk_2c8;
    Unk_ov004_0223a850_Vec *op = &o->unk_2c8;
    s32 a1 = func_02002bdc(op, rp);
    s32 v4c;
    s32 dist;
    s32 f1;
    s32 f2;
    s16 *cnt;
    cnt = &r->unk_168;
    v4c = r->unk_4c;
    dist = func_020e9650(rp, op);
    f1 = 1;
    f2 = 1;
    s16 *pw = &r->unk_98;
    Unk_ov004_0223a850_Vec v1, v2;
    func_ov004_0223d980(&v1, a1);
    s32 a2 = func_02002bdc(rp, op);
    func_ov004_0223d980(&v2, a2);
    if (data_ov004_022523e4 % 15 == 0) {
        v4c = func_02063b8c(100);
        r->unk_4c = v4c;
        *pw = func_02063b8c(5) + 5;
        if (func_02063b8c(100) > 0x32) {
            *pw = -*pw;
        }
    }
    s32 t = *pw;
    if (t > 0) {
        *pw = t - 1;
    } else if (t < 0) {
        *pw = t + 1;
    }
    if (v4c < 0x1e && dist < 0xccd) {
        f1 = 0;
        if (*pw <= 0) {
            Unk_ov004_0223a850_Vec w;
            func_020e98f4(&w, &v2, 0x2000);
            func_01ffca8c(rp, &w, rp);
        } else {
            Unk_ov004_0223a850_Vec w;
            func_020e98f4(&w, &v1, 0x2000);
            func_01ffca58(op, &w, op);
        }
    } else if (v4c < 0x3c && dist < 0xccd) {
        f2 = 0;
        if (*pw <= 0) {
            Unk_ov004_0223a850_Vec w;
            func_020e98f4(&w, &v2, 0x2000);
            func_01ffca58(rp, &w, rp);
        } else {
            Unk_ov004_0223a850_Vec w;
            func_020e98f4(&w, &v1, 0x2000);
            func_01ffca8c(op, &w, op);
        }
    } else if ((dist > 0x5800 || v4c < 0x50) && dist > 0x99a) {
        if (*pw <= 0) {
            Unk_ov004_0223a850_Vec w;
            func_020e98f4(&w, &v2, 0xa000);
            func_01ffca8c(rp, &w, rp);
        } else {
            Unk_ov004_0223a850_Vec w;
            func_020e98f4(&w, &v1, 0xa000);
            func_01ffca8c(op, &w, op);
        }
    } else if (dist < 0x5800) {
        if (v4c < 0x5a) {
            if (*pw <= 0) {
                func_01ffca58(rp, &v2, rp);
            } else {
                func_01ffca58(op, &v1, op);
            }
        } else if (v4c < 0x64) {
            if (*pw <= 0) {
                Unk_ov004_0223a850_Vec w;
                func_020e98f4(&w, &v2, 0x5000);
                func_01ffca58(rp, &w, rp);
            } else {
                Unk_ov004_0223a850_Vec w;
                func_020e98f4(&w, &v1, 0x5000);
                func_01ffca58(op, &w, op);
            }
        }
    }
    if (f2 != 0) {
        func_ov004_0223b464(r, func_02002bdc(rp, op), *cnt);
    } else {
        r->unk_192 = func_02002bdc(rp, op);
    }
    if (f1 != 0) {
        func_ov004_0223b464(o, a1, *cnt);
    } else {
        o->unk_192 = func_02002bdc(op, rp);
    }
    *cnt = *cnt + 1;
    if (func_ov004_0223d5e8(r) != 0) {
        r->unk_172 = 0x19;
        *cnt = 0;
    }
}
}
