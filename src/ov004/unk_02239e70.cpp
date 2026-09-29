#include "types.h"

struct Unk_ov004_02239e70_V3 {
    s32 x, y, z;
};

struct Unk_ov004_02239e70_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

struct Unk_ov004_02239e70_Buf {
    u32 v[0x44 / 4];
};

extern "C" {
extern u8 data_ov004_022523e4;
extern s16 data_02136744[];
s32 func_0205668c(void *p, u32 a, u32 b, u32 c, u32 d);
s32 func_02063b8c(s32 a);
s32 func_02133150(s32 a, s32 b);
s32 func_01ffcb0c(s32 a, s32 b);
void *func_0209c0ac(void *p);
void func_02106054(void *c, s32 i, u32 v);
void *func_02095204(s32 a);
s32 func_020e9650(void *a, void *b);
void func_020e9960(Unk_ov004_02239e70_V3 *out, Unk_ov004_02239e70_V3 *a, Unk_ov004_02239e70_V3 *b);
s32 func_020e94f8(void *v);
s32 func_020e95cc(void *a, void *b);
void func_020e7530(s16 *p, s32 target, s32 step);
s32 func_02002bdc(void *a, void *b);
void func_020339bc(void *out, void *pos, s32 a, s32 b);
s32 func_02033914(void *p, s32 flag);
void func_02033988(void *p);
void func_020547a4(void *p, s32 v);
void func_ov004_0223d12c(void *self);
s32 func_ov004_0223d5a8(void *self, s32 v);
s32 func_ov004_0223d5e8(void *self);
void func_ov004_0223d8e8(void *self);
void func_ov004_0223d980(Unk_ov004_02239e70_V3 *out, s16 ang);
s32 func_ov004_0223bac0(void *self);
}

struct Unk_ov004_02239e70_Anim {
    u32 vptr;
    union {
        u32 unk_04;
        Unk_ov004_02239e70_Bits unk_04b;
    };
    union {
        s32 unk_08;
        Unk_ov004_02239e70_Bits unk_08b;
    };
};

struct Unk_ov004_02239e70_Model {
    u8 pad_00[0x9c];
    Unk_ov004_02239e70_Anim anim;
};

class Unk_ov004_02239e70 {
public:
    /* 0x00 */ u8 pad_00[0x22];
    /* 0x22 */ u8 unk_22;
    /* 0x23 */ u8 pad_23[0x4c - 0x23];
    /* 0x4c */ s32 unk_4c;
    /* 0x50 */ u8 unk_50;
    /* 0x51 */ u8 pad_51[0x98 - 0x51];
    /* 0x98 */ s16 unk_98;
    /* 0x9a */ u8 pad_9a[2];
    /* 0x9c */ s16 unk_9c;
    /* 0x9e */ s16 unk_9e;
    /* 0xa0 */ u8 pad_a0[8];
    /* 0xa8 */ s32 unk_a8;
    /* 0xac */ u8 pad_ac[4];
    /* 0xb0 */ Unk_ov004_02239e70_Model unk_b0;
    /* 0x158 */ u8 pad_158[0x160 - 0x158];
    /* 0x160 */ u8 unk_160;
    /* 0x161 */ u8 pad_161[0x168 - 0x161];
    /* 0x168 */ s16 unk_168;
    /* 0x16a */ u8 pad_16a[2];
    /* 0x16c */ s32 unk_16c;
    /* 0x170 */ u8 unk_170;
    /* 0x171 */ u8 pad_171;
    /* 0x172 */ s16 unk_172;
    /* 0x174 */ s32 unk_174;
    /* 0x178 */ u8 pad_178[0x190 - 0x178];
    /* 0x190 */ s16 unk_190;
    /* 0x192 */ s16 unk_192;
    /* 0x194 */ s16 unk_194;
    /* 0x196 */ s8 unk_196;
    /* 0x197 */ u8 pad_197[0x288 - 0x197];
    /* 0x288 */ u8 unk_288[0x40];
    /* 0x2c8 */ Unk_ov004_02239e70_V3 unk_2c8;

    void func_02239e70();
    void func_02239f50(volatile s16 *p);
    void func_0223a048(volatile s16 *p);
    void func_0223a104(volatile s16 *p);
    void func_0223a1c0();
    void func_0223a25c();
    BOOL func_0223a304(s16 *p);
    BOOL func_0223a38c();
    void func_0223a3c0();
    s32 func_0223a570();
    void func_0223a6e8(Unk_ov004_02239e70_V3 *v);
};

void Unk_ov004_02239e70::func_02239e70() {
    func_ov004_0223d12c(this);
    if (unk_196 == 0x14) {
        Unk_ov004_02239e70_Model *p = &unk_b0;
        if (unk_9c >= unk_9e || unk_50 != 0) {
            if (p->anim.unk_08b.mid == 0) {
                func_0205668c(&p->anim, 4, 1, 0x1000, 0);
                unk_50 = 0x3c;
            } else if (unk_50 != 0) {
                unk_50 = unk_50 - 1;
            }
        } else {
            s32 v = p->anim.unk_08 >> 12;
            if ((u16)v != 0 || p->anim.unk_04b.mid != 0) {
                func_0205668c(&p->anim, 0, 3, 0x1000, (u16)v);
            }
        }
    }
    if (unk_22 != 0) {
        if (unk_9c < unk_9e) {
            if (unk_50 == 0) {
                func_ov004_0223d5a8(this, 0);
            } else {
                unk_50 = unk_50 - 1;
            }
        } else {
            unk_50 = 0x3c;
        }
    }
}

void Unk_ov004_02239e70::func_02239f50(volatile s16 *p) {
    s32 a = unk_192;
    s32 v = *p;
    if (v == 0) {
        if (func_02063b8c(100) < 0x32) {
            *p = *p + 1;
        } else {
            *p = *p - 1;
        }
    } else {
        if ((v > 0 && v <= 6) || (v > 0x12 && v <= 0x18) || (v < -6 && v >= -0x12)) {
            if (v > 0) {
                *p = *p + 1;
                unk_190 = unk_190 + 0xb6;
            } else {
                *p = *p - 1;
                unk_190 = unk_190 - 0xb6;
            }
            a = (s16)(a + 0x16b);
        } else if ((v > 6 && v <= 0x12) || (v < 0 && v >= -6) || (v < -0x12 && v >= -0x18)) {
            if (v > 0) {
                *p = *p + 1;
                unk_190 = unk_190 - 0xb6;
            } else {
                *p = *p - 1;
                unk_190 = unk_190 + 0xb6;
            }
            a = (s16)(a - 0x16b);
        } else {
            *p = 0;
            unk_172 = 0x19;
        }
    }
    unk_192 = a;
}

void Unk_ov004_02239e70::func_0223a048(volatile s16 *p) {
    s32 lim = unk_a8 - 0x100;
    Unk_ov004_02239e70_V3 *pos = &unk_2c8;
    s32 v = *p;
    if ((v >= 0 && v < 2) || (v >= 6 && v < 8)) {
        *p = *p + 1;
        unk_192 = unk_192 + 0x2aa;
        unk_190 = unk_190 + 0xaa;
        pos->y = pos->y - 0x20;
    } else if (v >= 2 && v < 6) {
        *p = *p + 1;
        unk_192 = unk_192 - 0x2aa;
        unk_190 = unk_190 - 0xaa;
        pos->y = pos->y - 0x20;
    } else {
        if (func_02063b8c(100) > 0x46) {
            unk_172 = 0x19;
            *p = 0;
        } else {
            if (*p >= 8) {
                *p = 0;
            }
        }
    }
    if (pos->y < lim) {
        pos->y = lim;
    }
}

void Unk_ov004_02239e70::func_0223a104(volatile s16 *p) {
    s32 lim = unk_a8 + 0x400;
    Unk_ov004_02239e70_V3 *pos = &unk_2c8;
    s32 v = *p;
    if ((v >= 0 && v < 2) || (v >= 6 && v < 8)) {
        *p = *p + 1;
        unk_192 = unk_192 + 0x2aa;
        unk_190 = unk_190 + 0xaa;
        pos->y = pos->y + 0x20;
    } else if (v >= 2 && v < 6) {
        *p = *p + 1;
        unk_192 = unk_192 - 0x2aa;
        unk_190 = unk_190 - 0xaa;
        pos->y = pos->y + 0x20;
    } else {
        if (func_02063b8c(100) > 0x46) {
            unk_172 = 1;
            *p = 0;
        } else {
            if (*p >= 8) {
                *p = 0;
            }
        }
    }
    if (pos->y > lim) {
        pos->y = lim;
    }
}

void Unk_ov004_02239e70::func_0223a1c0() {
    u32 r = unk_b0.anim.unk_08b.mid;
    if (r == 0xd || r < 9) {
        func_0205668c(&unk_b0.anim, 9, 1, 0, 9);
    }
    if (data_ov004_022523e4 > 0x50) {
        if (unk_22 != 0) {
            if (func_02063b8c(100) > 0x5c) {
                if (r < 0xa) {
                    func_0205668c(&unk_b0.anim, 0xe, 1, 0x1000, 9);
                }
            }
        } else if (data_ov004_022523e4 % 5 == 0) {
            if (func_02063b8c(100) > 0x5c) {
                if (r < 0xa) {
                    func_0205668c(&unk_b0.anim, 0xe, 1, 0x1000, 9);
                }
            }
        }
    }
}

void Unk_ov004_02239e70::func_0223a25c() {
    switch (unk_172) {
    case 3:
        func_02239f50(&unk_168);
        break;
    case 2:
        func_0223a104(&unk_168);
        break;
    case 1:
        func_0223a048(&unk_168);
        break;
    default:
        if (unk_196 == 9) {
            func_0223a1c0();
        } else if (unk_22 != 0) {
            if (data_ov004_022523e4 % 0x14 == 0) {
                if (func_02063b8c(100) < 0x46) {
                } else {
                    goto pick;
                }
            }
        } else if (data_ov004_022523e4 % 0x28 == 0) {
            if (func_02063b8c(100) >= 0x55) {
            pick:
                if (func_02063b8c(100) < 0x32) {
                    unk_172 = 3;
                } else {
                    unk_172 = 2;
                }
            }
        }
        break;
    }
}

void Unk_ov004_02239e70::func_0223a3c0() {
    s16 *cnt = &unk_98;
    switch (unk_172) {
    case 2: {
        if (unk_170 != 0) {
            unk_170 = 0;
            unk_194 = 0x5b;
        } else {
            unk_170 = 1;
            unk_194 = -0x5b;
        }
        if (unk_b0.anim.unk_08b.mid == 0x38) {
            unk_172 = 0x19;
            unk_194 = 0;
            unk_2c8.x = unk_4c;
            func_02106054(func_0209c0ac(unk_288), 0, 0);
            unk_98 = (func_02063b8c(4) + 3) * 20;
        }
        break;
    }
    case 1:
        if (unk_b0.anim.unk_08b.mid == 0x20) {
            unk_98 = (func_02063b8c(3) + 2) * 20;
            unk_172 = 0x12;
            unk_168 = 0;
        }
        break;
    case 0x12:
        if (func_0223a304(&unk_168) && *cnt <= 0) {
            unk_192 = 0;
            unk_172 = 2;
            func_0205668c(&unk_b0.anim, 0x39, 1, 0x1000, 0x20);
        } else {
            *cnt = *cnt - 1;
        }
        break;
    default:
        if (func_0223a38c()) {
            if (*cnt > 0) {
                *cnt = *cnt - 1;
            } else {
                unk_172 = 1;
                unk_9c = 0;
                func_0205668c(&unk_b0.anim, 0x21, 1, 0x1000, 0);
                func_02106054(func_0209c0ac(unk_288), 0, 0x1f);
            }
        } else {
            unk_160 = 1;
        }
        break;
    }
}

BOOL Unk_ov004_02239e70::func_0223a304(s16 *p) {
    s32 a = unk_192;
    if (*p == 0) {
        if (func_02063b8c(100) > 0x32) {
            unk_170 = 0;
        } else {
            unk_170 = 1;
        }
    }
    if (unk_170 != 0) {
        if (a > 0xaaa) {
            unk_170 = 0;
        }
    } else if (a < (s32)0xfffff556) {
        unk_170 = 1;
    }
    if (unk_170 != 0) {
        unk_192 = a + 0x222;
    } else {
        unk_192 = a - 0x222;
    }
    *p = *p + 1;
    return TRUE;
}

BOOL Unk_ov004_02239e70::func_0223a38c() {
    u8 *r = (u8 *)func_02095204(4);
    if (r != NULL) {
        if (func_020e9650(r + 0x5c, &unk_2c8) < 0x4800) {
            return TRUE;
        }
    }
    return FALSE;
}

extern "C" void func_ov004_0223a524(Unk_ov004_02239e70_V3 *out, Unk_ov004_02239e70_V3 *in, s32 lim) {
    s32 l = func_01ffcb0c(lim << 12, 0x40);
    out->x = in->x;
    out->y = in->y;
    out->z = in->z;
    out->y = 0;
    s32 x = in->x;
    if (x > l) {
        out->x = l;
    } else if (x < -l) {
        out->x = -l;
    }
    s32 z = in->z;
    if (z > l) {
        out->z = l;
    } else if (z < -l) {
        out->z = -l;
    }
}

s32 Unk_ov004_02239e70::func_0223a570() {
    Unk_ov004_02239e70_V3 *pos = &unk_2c8;
    Unk_ov004_02239e70_V3 saved;
    saved.x = pos->x;
    saved.y = pos->y;
    saved.z = pos->z;
    s16 *cnt = &unk_168;
    s32 speed = 5;
    s32 res = func_ov004_0223bac0(this);
    u32 st = *(u8 *)&unk_196;
    Unk_ov004_02239e70_V3 dir;
    s32 hit, a, c, mul, k;
    func_ov004_0223d980(&dir, unk_192);
    if (st == 0x1e) {
        speed = 4;
    }
    if (res == 0 || st == 0x34) {
        mul = (speed + unk_16c) << 12;
        pos->x = pos->x + func_01ffcb0c(mul, dir.x);
        pos->z = pos->z + func_01ffcb0c(mul, dir.z);
        if (st == 0x34 || st == 0x30) {
            Unk_ov004_02239e70_Buf buf;
            func_020339bc(&buf, pos, 0, 0);
            if (func_02033914(&buf, 0) > 0x200) {
                hit = 1;
            } else {
                hit = 0;
            }
            func_02033988(&buf);
            if (hit != 0) {
                if (res == 0 && st == 0x34) {
                    if (func_02063b8c(100) < 0x32) {
                        unk_192 = unk_192 + 0x38e;
                    } else {
                        unk_192 = unk_192 - 0x38e;
                    }
                }
                pos->x = saved.x;
                pos->y = saved.y;
                pos->z = saved.z;
            }
        }
        if (st == 0x37) {
            k = 0x71c;
        } else {
            k = 0xaaa;
        }
        c = *cnt;
        if (c == 0) {
            a = unk_192;
            unk_192 = a + func_01ffcb0c(k, 0x800);
        } else if (c % 4 == 0) {
            unk_192 = k + unk_192;
        } else if (c % 2 == 0) {
            unk_192 = unk_192 - k;
        }
        *cnt = *cnt + 1;
        if ((u8)(st + 0xca) <= 1) {
            func_ov004_0223d5a8(this, 0);
        }
        return res;
    }
    return res;
}

void Unk_ov004_02239e70::func_0223a6e8(Unk_ov004_02239e70_V3 *v) {
    s16 *cnt = &unk_98;
    Unk_ov004_02239e70_V3 *pos = &unk_2c8;
    s32 res = func_0223a570();
    s16 ang = unk_192;
    Unk_ov004_02239e70_V3 d1;
    func_020e9960(&d1, v, (Unk_ov004_02239e70_V3 *)((u8 *)this + 0x2c8));
    Unk_ov004_02239e70_V3 d0;
    func_ov004_0223d980(&d0, ang);
    func_020e94f8(&d0);
    func_020e94f8(&d1);
    s32 dot = func_020e95cc(&d0, &d1);
    if (*((u8 *)v + 0x14) != 0 && dot > 0) {
        if (func_020e9650(pos, v) < 0x1800) {
            if (dot > data_02136744[1]) {
                *cnt = *cnt + 1;
            }
        } else if (func_020e9650(pos, v) < 0x2800) {
            if (res == 0) {
                func_020e7530(&ang, func_02002bdc(v, pos), 0xaaa);
                unk_192 = ang;
            }
        }
    }
    s32 c = *cnt;
    if (c > 0) {
        s32 m = c << 12;
        pos->y = func_01ffcb0c(0x99a - func_01ffcb0c(0xcd, m), m);
        if (pos->y < 3) {
            pos->y = 3;
            *cnt = 0;
        } else {
            *cnt = *cnt + 1;
        }
        func_ov004_0223d8e8(this);
        func_ov004_0223d5a8(this, 1);
    } else {
        func_ov004_0223d5a8(this, 0);
        if (unk_b0.anim.unk_08b.mid != 0) {
            func_020547a4(&unk_b0, 0);
        }
    }
    if (func_ov004_0223d5e8(this) != 0 && *cnt == 0) {
        unk_174 = (func_02063b8c(10) + 3) * 20;
        unk_172 = 0x19;
    }
}
