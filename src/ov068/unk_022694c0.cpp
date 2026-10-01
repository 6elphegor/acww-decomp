#include "types.h"

class Unk_ov068_02268214 {
public:
    /* 0x000 */ u8 pad_000[0xf4];
    /* 0x0f4 */ s32 unk_f4;
    /* 0x0f8 */ u8 pad_0f8[0x130 - 0xf8];
    /* 0x130 */ u8 unk_130[0x204 - 0x130];
    /* 0x204 */ s32 unk_204[3];
    /* 0x210 */ s32 unk_210[3];
    /* 0x21c */ s32 unk_21c;
    /* 0x220 */ u8 pad_220[0x232 - 0x220];
    /* 0x232 */ s16 unk_232;
    /* 0x234 */ u8 pad_234[6];
    /* 0x23a */ s16 unk_23a;
    /* 0x23c */ u8 pad_23c[6];
    /* 0x242 */ u16 unk_242;
    /* 0x244 */ u8 pad_244[6];
    /* 0x24a */ u8 unk_24a;
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
    /* 0x256 */ u8 unk_256;
    /* 0x257 */ u8 unk_257;

    void func_ov068_022694c0();
    void func_ov068_02269714();
    void func_ov068_022697b8();
    void func_ov068_02269840(s16 *p);
    BOOL func_ov068_02269a28();
    BOOL func_ov068_02269aa4();
    void func_ov068_02269b20();
    void func_ov068_02269d18();
    void func_ov068_02269d58();
    void func_ov068_02268864(s16 *p, s32 a, s32 b, u8 thr, s32 sc);
};

extern "C" {
u8 *func_02095204(s32);
s32 func_0206f11c(void);
s32 func_02002bdc(void *, void *);
s32 func_020e9650(void *, void *);
void func_020e7530(s16 *, s32, s32);
s32 func_020e7870(s32 *, s32, s32, s32, s32);
s32 func_02133150(s32 a, s32 b);
s32 func_01ffc5a4(s32 a, s32 b);
s32 func_01ffcb0c(s32 a, s32 b);
s32 func_02063b8c(s32);
void func_ov003_0222e328(void *v, s32 a);
void func_ov003_0222dd54(void *, s32, s32);
void func_ov003_0222d674(void *);
s32 func_ov003_0222d720(void *);
void func_ov003_0222d75c(void *, s32, s32, s32);
s32 func_ov003_0222adc4(void *);
s32 func_ov003_02212680(void *);
void *func_ov003_0222eb10(s32);
s32 func_ov003_022135e4(void *);
s32 func_ov003_022135f0(void *, void *);
s32 func_ov003_02213fb4(void);
s32 func_ov003_02213fbc(void);
s32 func_ov003_0222c620(s32, s32);
s32 func_02094a08(void);
void func_02034d70(s32);
void func_02034e10(s32, s32, s32, s32);
void func_02094f00(s32, s32);
void *func_0209c0ac(void *);
void func_02106054(void *, s32, s32);
void func_02034dd0(s32, s32, s32);
void func_020547a4(void *, s32);
void func_ov068_02269424(void *, void *, s32);
s32 func_ov068_02268b70(void *, s16 *);
}

void Unk_ov068_02268214::func_ov068_022694c0() {
    u8 *tp = func_02095204(4);
    s32 ang, dist;
    s32 *pos = unk_204;
    s32 cur = unk_23a;
    s16 h = cur;
    s32 v[3];
    s32 w[3];
    s32 t = unk_232;
    u8 *cnt = &unk_256;
    if (t > 0) {
        unk_232 = t - 1;
    } else if (func_0206f11c() != 0) {
        h = h + 0x1554;
        unk_23a = h;
        func_ov003_0222e328(v, h);
        pos[0] += func_01ffcb0c(0x23000, v[0]);
        pos[2] += func_01ffcb0c(0x23000, v[2]);
        func_ov068_02269424(unk_210, (u8 *)this + 0x50, cur - h);
        *cnt = 9;
        return;
    }
    if (tp == 0) {
        return;
    }
    u8 *pp = tp + 0x5c;
    ang = func_02002bdc(pos, pp);
    s32 r6 = unk_257 + unk_21c;
    dist = func_020e9650(pos, pp);
    if (dist < 0x1000) {
        unk_251 = 3;
        unk_242 = 0;
        return;
    }
    if (*cnt != 0) {
        *cnt = *cnt - 1;
        func_020e7530(&h, ang, 0xe38);
    } else if (r6 < 0xfa) {
        func_020e7530(&h, ang, 0x93e);
    } else if (r6 < 0x104) {
        func_020e7530(&h, ang, 0x7d2);
    } else {
        func_020e7530(&h, ang, 0x666);
    }
    s32 hh = h;
    s32 diff = func_02133150(ang - hh, 0xb6);
    if (diff < 0) {
        diff = -diff;
    }
    if ((u8)diff > 0xf && r6 > 0xb4) {
        r6 -= 2;
        unk_21c = r6;
    } else if (r6 < 0x122) {
        r6 += 7;
        unk_21c = r6;
    }
    unk_23a = hh;
    func_ov003_0222e328(w, h);
    if (dist > 0xe000) {
        r6 <<= 12;
        pos[0] += func_01ffc5a4(func_01ffcb0c(r6, w[0]), 0x3800);
        pos[2] += func_01ffc5a4(func_01ffcb0c(r6, w[2]), 0x3800);
    } else {
        r6 <<= 12;
        pos[0] += func_01ffc5a4(func_01ffcb0c(r6, w[0]), 0x5000);
        pos[2] += func_01ffc5a4(func_01ffcb0c(r6, w[2]), 0x5000);
    }
    func_ov068_02269424(unk_210, (u8 *)this + 0x50, (cur - h) * 5);
}

extern "C" void func_ov068_022696e4(s32 *v, s32 up) {
    if (up == 0) {
        v[2] = v[2] - 0x52;
    } else {
        v[2] = v[2] + 0x52;
    }
    s32 t = v[2];
    if (t < 0x1000) {
        v[2] = 0x1000;
        return;
    }
    if (t > 0x2000) {
        v[2] = 0x2000;
    }
}

void Unk_ov068_02268214::func_ov068_02269714() {
    s32 *pos = unk_204;
    s32 *v = unk_210;
    s32 t = v[0];
    BOOL flag = FALSE;
    if (func_020e7870(&t, 0x1000, 0x200, 0x1000, 0x19a) == 0) {
        flag = TRUE;
    }
    v[0] = t;
    v[1] = t;
    v[2] = t;
    if (func_020e7870((s32 *)((u8 *)pos + 4), 0x2800, 0x199, 0x1000, 0x400) == 0 && flag) {
        unk_251 = 0;
        v[0] = 0x1000;
        v[1] = 0x1000;
        v[2] = 0x1000;
        func_02034d70(0x19);
        func_02034e10(0x1a, 0x3f, 0x7f, 0);
        func_02094f00(0x1a, 4);
    }
}

void Unk_ov068_02268214::func_ov068_022697b8() {
    u8 *tp = func_02095204(4);
    s32 *v = unk_210;
    if (tp != 0) {
        unk_23a = func_02002bdc(unk_204, tp + 0x5c);
    }
    func_02106054(func_0209c0ac(unk_130), 0, 0x1f);
    unk_251 = 2;
    v[0] = 1;
    v[1] = 1;
    v[2] = 1;
    unk_232 = 0x28;
    unk_f4 = 0x2d000;
    unk_21c = 0xf0;
    func_02034dd0(0x19, 0, 0);
}

void Unk_ov068_02268214::func_ov068_02269840(s16 *p) {
    s32 dist;
    u32 rnd;
    u8 *tp = func_02095204(4);
    s32 *pos = unk_204;
    s32 ang = 0;
    s32 v[3];
    v[0] = ang;
    v[1] = ang;
    v[2] = ang;
    *p = *p + 0xaaa;
    func_ov003_0222dd54(this, 0, 1);
    func_ov003_0222d674(this);
    if (tp != 0) {
        u8 *pp = tp + 0x5c;
        dist = func_020e9650(pp, pos);
        rnd = (u8)func_02063b8c(0x64);
        s32 c = unk_254;
        s32 h = unk_23a;
        ang = (s16)(func_02002bdc(pos, pp) - h);
        if (unk_24a != 0) {
            if (c < 0xfe) {
                c = (s16)(c + 1);
                unk_254 = c;
            }
            if (c >= 0x3c) {
                if (dist < func_01ffc5a4(0x1000, 0x10000)) {
                    if (func_02094a08() != 0) {
                        unk_24a = 0;
                        *p = 0;
                        unk_251 = 9;
                    }
                }
            }
        }
        if (dist < 0x2000) {
            if (dist < func_01ffc5a4(0x1000, 0x4000) && unk_24a == 0) {
                unk_24a = 1;
                unk_254 = 0;
            }
            if (ang < -0x555 || ang > 0x555) {
                if (ang > 0 && rnd > 0xf) {
                    ang = 0x555;
                } else if (ang < 0 && rnd > 0xf) {
                    ang = -0x555;
                } else {
                    ang = 0;
                }
            }
        } else {
            if (dist > func_01ffc5a4(0x1000, 0x2000) && unk_24a != 0 && c < 0x3c) {
                unk_24a = 0;
                unk_254 = 0;
            }
            s32 lim = (s16)func_01ffc5a4(0x555, 0x4000);
            s32 nlim = -lim;
            if (ang < (s16)nlim || ang > lim) {
                if (ang > 0 && rnd > 0x14) {
                    ang = lim;
                } else if (ang < 0 && rnd > 0x14) {
                    ang = (s16)nlim;
                } else {
                    ang = 0;
                }
            }
        }
    }
    s16 na = ang + unk_23a;
    unk_23a = na;
    func_ov003_0222e328(v, na);
    pos[0] += func_01ffcb0c(v[0], 0x8000);
    pos[2] += func_01ffcb0c(v[2], 0x8000);
    s32 r = func_02063b8c(8);
    func_ov003_0222d75c(this, *p, 0x2800, (r + 0x12) << 12);
}

BOOL Unk_ov068_02268214::func_ov068_02269a28() {
    s16 a = unk_23a;
    s32 b = (s16)(unk_232 - 1);
    if (b < 0) {
        return TRUE;
    }
    if (unk_24c != 0) {
        if (a > 0xaaa) {
            unk_24c = 0;
        }
    } else {
        if (a < -0xaaa) {
            unk_24c = 1;
        }
    }
    if (unk_24c != 0) {
        a += 0x222;
    } else {
        a -= 0x222;
    }
    unk_23a = a;
    unk_232 = b;
    return FALSE;
}

BOOL Unk_ov068_02268214::func_ov068_02269aa4() {
    s32 *v = unk_204;
    if (func_ov003_02212680(v) != 0) {
        u8 *p = func_02095204(4);
        if (p != 0) {
            if (v[0] < *(s32 *)(p + 0x5c)) {
                v[0] = v[0] - func_01ffc5a4(0x14000, 0x10000);
            } else {
                v[0] = v[0] + func_01ffc5a4(0x14000, 0x10000);
            }
            if (func_02063b8c(0x64) > 0x32) {
                unk_24c = 0;
            } else {
                unk_24c = 1;
            }
            return TRUE;
        }
    }
    return FALSE;
}

namespace B20 { extern "C" s16 func_02002bdc(void *, void *); }
void Unk_ov068_02268214::func_ov068_02269b20() {
    u8 *a = (u8 *)func_ov003_0222eb10(unk_21c);
    s32 *pos = unk_204;
    s32 w2[3];
    s32 w[3];
    s16 ang;
    u8 *volatile q;
    volatile s32 c;
    volatile s32 tmp;
    if (a != 0) {
        s32 rot, r6;
        q = a;
        q = a + 0x5c;
        r6 = func_ov003_022135e4(a);
        ang = B20::func_02002bdc(q, pos);
        rot = ang;
        w[0] = *(s32 *)(a + 0x5c);
        w[1] = *(s32 *)(q + 4);
        w[2] = *(s32 *)(q + 8);
        static s32 base = (tmp = func_ov003_02213fb4(), tmp - func_ov003_02213fbc());
        r6 -= func_01ffcb0c(0x4cd, func_01ffc5a4(r6 - func_ov003_02213fbc(), base));
        if (unk_24f % 0x14 == 0) {
            s32 t = (s32)(func_ov003_0222c620(6, 1) << 17) >> 16;
            ang += t;
            unk_232 = t;
        } else {
            s32 u = *(volatile s16 *)&unk_232;
            ang += u;
        }
        s32 cv = unk_24f;
        c = cv;
        if (cv % 4 == 0) {
            rot = (s16)(rot + 0x38e);
        } else if (c % 2 == 0) {
            rot = (s16)(rot - 0x38e);
        }
        unk_23a = rot;
        func_ov003_0222e328(w2, ang);
        w[0] = w[0] - func_01ffcb0c(w2[0], 0x2666);
        w[2] = w[2] - func_01ffcb0c(w2[2], 0x2666);
        s32 d = func_020e9650(w, pos);
        if (d < r6) {
            pos[0] = pos[0] - w2[0];
            pos[2] = pos[2] - w2[2];
        } else if (d > r6 + 0x333) {
            pos[0] = pos[0] - func_01ffcb0c(w2[0], 0x3000);
            pos[2] = pos[2] - func_01ffcb0c(w2[2], 0x3000);
        } else {
            pos[0] = pos[0] - func_01ffcb0c(w2[0], 0x2666);
            pos[2] = pos[2] - func_01ffcb0c(w2[2], 0x2666);
        }
        if (func_ov003_022135f0(a, w) == 0) {
            unk_251 = 5;
            func_020547a4((u8 *)this + 0x50, 0);
            unk_232 = func_02063b8c(0x14) + 0x28;
        }
    } else {
        unk_251 = 5;
        func_020547a4((u8 *)this + 0x50, 0);
        unk_232 = func_02063b8c(0x14) + 0x28;
    }
}

void Unk_ov068_02268214::func_ov068_02269d18() {
    s32 t = unk_232;
    if (func_ov003_0222adc4(this) != 0) {
        if (t <= 0) {
            unk_251 = 9;
            unk_242 = 0;
        } else {
            unk_232 = t - 1;
        }
    }
}

void Unk_ov068_02268214::func_ov068_02269d58() {
    s16 h = unk_23a;
    s32 t = unk_232;
    func_ov003_0222d674(this);
    if (func_ov003_0222d720(this) == 2) {
        unk_24a = 0;
    }
    func_ov003_0222dd54(this, 0, 1);
    if (unk_24a == 0 && func_ov068_02268b70(this, &h) == 0 && unk_24d == 10) {
        unk_242 = 0;
        unk_251 = 9;
        return;
    }
    func_ov068_02268864(&h, 0xaaa, 0x1e, 0x46, unk_257 << 12);
    if (unk_24d == 10) {
        s32 x = func_01ffc5a4(0x12000, 0x10000);
        func_ov003_0222d75c(this, t, x, (func_02063b8c(8) + 10) << 12);
        unk_232 = t + 0xaaa;
    } else {
        func_ov003_0222d75c(this, t, 0x19a, (func_02063b8c(8) + 0x12) << 12);
        unk_232 = t + 0x1554;
    }
}
