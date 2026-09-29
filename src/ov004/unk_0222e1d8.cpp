#include "types.h"

struct Unk_ov004_0222e1d8_Rec {
    u8 unk_00;
    u8 unk_01;
    u8 unk_02;
    u8 unk_03;
    u8 unk_04;
    u8 pad_05[0x11 - 5];
};

class Unk_ov004_0222e1d8_Ent {
public:
    u8 pad_00[0x40];
    u8 unk_40;
    u8 pad_41[0x4c - 0x41];
    Unk_ov004_0222e1d8_Ent *unk_4c;
    u8 pad_50[0x110 - 0x50];
    s32 unk_110;
    u8 pad_114[0x158 - 0x114];
    s32 unk_158;
    s32 unk_15c;
    u8 pad_160[4];
    u8 unk_164;
    u8 pad_165[0x1a8 - 0x165];
    s32 unk_1a8;
    s32 unk_1ac;
    s32 unk_1b0;
    u8 pad_1b4[0x1c0 - 0x1b4];
    s16 unk_1c0;
    s16 unk_1c2;
    u8 pad_1c4[0x1c8 - 0x1c4];
    u8 unk_1c8;
    u8 unk_1c9;
    s8 unk_1ca;
    u8 pad_1cb;
    s32 unk_1cc;
    u8 pad_1d0[0x1e8 - 0x1d0];
    u8 unk_1e8;
    u8 unk_1e9;
    u8 unk_1ea;
    u8 pad_1eb;
    s16 unk_1ec;
    u8 unk_1ee;
    u8 pad_1ef[2];
    u8 unk_1f1;
    u8 pad_1f2[0x202 - 0x1f2];
    u8 unk_202;
    u8 unk_203;
    u8 unk_204;
    u8 unk_205;
    u8 pad_206[0x20c - 0x206];
    s32 unk_20c;
    s32 unk_210;
    u8 pad_214[4];
    s32 unk_218;
    u8 pad_21c[0x228 - 0x21c];
    s32 unk_228;
    u8 pad_22c[3];
    u8 unk_22f;
    u8 pad_230[0x23c - 0x230];
    s32 unk_23c;
    u8 pad_240[0x24c - 0x240];
    s16 unk_24c;
    u8 pad_24e[0x252 - 0x24e];
    u8 unk_252;
    u8 unk_253;
    u8 unk_254;
};

typedef Unk_ov004_0222e1d8_Ent Ent;
typedef Unk_ov004_0222e1d8_Rec Rec;

extern "C" {
extern Ent *data_ov004_02251e94[];
extern Rec data_ov004_022402ec[];
extern u8 data_ov004_022402ef[];
extern u8 data_ov004_022402f0[];

s32 func_02133150(s32, s32);
s32 func_01ffc5a4(s32, s32);
s32 func_01ffcb0c(s32, s32);
s32 func_020e769c(void *, s32, s32);
s32 func_020e7754(void *, s32, s32, s32);
s32 func_02002bdc(void *, void *);
void func_ov004_0222e0f0(Ent *, Ent **, Ent **);
void func_ov004_0222e820(Ent *);
void func_ov004_0222e48c(Ent *);
void func_ov004_0222e390(Ent *, Ent **);
void func_ov004_0222e4f0(Ent *);
void func_ov004_0222ed24(Ent *, void *);
void func_ov004_0223257c(void *, s32, s32);
s32 func_ov004_02231e28(s32, s32);
s32 func_ov004_02231e3c(s32, s32);
}

extern "C" void func_ov004_0222e1d8(Ent *e, s32 a, s32 idx) {
    Ent *q0 = e->unk_4c;
    if (q0) {
        Ent *p = q0;
        if ((u32)idx >= 0x38) {
            p->unk_1ea |= 0x20;
        } else {
            if (data_ov004_022402ec[idx].unk_00 != 0 || (u32)idx < 0x23) {
                Ent **q = &data_ov004_02251e94[idx];
                func_ov004_0222e0f0(e, &p, q);
                func_ov004_0222e0f0(e, q, &p);
            }
        }
    }
}

extern "C" void func_ov004_0222e238(Ent *e) {
    if (e->unk_1ee != 1) {
        s32 x = e->unk_1a8;
        if (x > 0x5000 && x < 0x1e000) {
        } else {
            func_ov004_0222e820(e);
            if (e->unk_1ee == 6) {
                e->unk_1ee = 2;
            }
        }
    }
}

extern "C" void func_ov004_0222e280() {}

extern "C" void func_ov004_0222e284() {}

extern "C" void func_ov004_0222e288(Ent *e, s32 lo) {
    s32 v;
    u8 m = e->unk_1ee;
    if (m == 1) {
        v = 0x1800;
    } else {
        s32 t = e->unk_20c;
        if (m == 3) {
            t = t * 3;
        } else if (m == 5) {
            t = func_02133150(t, 3);
        }
        v = func_01ffcb0c(func_01ffc5a4(t, e->unk_210), 0x1800);
        if (v < lo) {
            v = lo;
        } else if (v > 0x1800) {
            v = 0x1800;
        }
    }
    e->unk_110 = v;
}

extern "C" void func_ov004_0222e2f4(Ent *e) {
    if (e->unk_20c > 0x99a || e->unk_1ee != 5) {
        if (e->unk_1ee != 1) {
            if (e->unk_22f != 0) {
                BOOL r;
                if (data_ov004_022402ec[e->unk_15c].unk_00 >= 4) {
                    r = func_020e769c(&e->unk_1c0, e->unk_1c2, 0x88) ? TRUE : FALSE;
                } else {
                    r = func_020e769c(&e->unk_1c0, e->unk_1c2, 0x16c) ? TRUE : FALSE;
                }
                if (r) {
                    e->unk_22f = 0;
                }
            }
        }
    }
}

extern "C" void func_ov004_0222e390(Ent *a, Ent **b) {
    if (a->unk_1cc < (*b)->unk_1cc) {
        a->unk_1ca = -1;
        Ent *o = *b;
        if (o->unk_1c9 == 0) {
            o->unk_1ca = 1;
        }
    } else {
        a->unk_1ca = 1;
        Ent *o = *b;
        if (o->unk_1c9 == 0) {
            o->unk_1ca = -1;
        }
    }
}

extern "C" s32 func_ov004_0222e3e0(Ent *a, Ent **b) {
    s32 r4 = (*b)->unk_1c0;
    s32 y, x;
    s32 t = (s16)(func_02002bdc(&a->unk_1a8, &(*b)->unk_1a8) - 0x4000);
    x = (s16)(a->unk_1c0 - t);
    y = (s16)(r4 - t);
    if (x * y < 0) {
        if (x < 0) x = -x;
        if (y < 0) y = -y;
        if ((x - 0x4000) * (y - 0x4000) < 0) return 0x40;
        return 0x80;
    } else if (x < 0) {
        if (x < 0) x = -x;
        if (y < 0) y = -y;
        if ((x - 0x4000) * (y - 0x4000) < 0) return 8;
        return 0x10;
    } else {
        if (x < 0) x = -x;
        if (y < 0) y = -y;
        if ((x - 0x4000) * (y - 0x4000) < 0) return 2;
        return 4;
    }
}

extern "C" void func_ov004_0222e48c(Ent *e) {
    e->unk_1ea = 0;
    e->unk_1c9 = 0;
    e->unk_1ec = e->unk_1c0;
    u32 t = e->unk_1e8;
    if (t != (u32)e->unk_15c) {
        Ent *o = data_ov004_02251e94[t];
        if (o) {
            o->unk_1c9 = 0;
        }
        e->unk_1e8 = e->unk_15c;
        e->unk_1e9 = e->unk_15c;
    }
}

extern "C" void func_ov004_0222e4f0(Ent *e) {
    s32 a;
    Ent** slot;
    s32* v;
    Ent* o;
    s32 c;
    s32 b;
    slot = &data_ov004_02251e94[e->unk_1e8];
    o = *slot;
    if (o) {
        v = &o->unk_1a8;
        a = e->unk_1c0;
        if (a < 0) a = -a;
        b = o->unk_1c0;
        if (b < 0) c = -b; else c = b;
        if (a >= 0x4000 && c >= 0x4000) {
            if (e->unk_1b0 > v[2]) {
                e->unk_1ec = b + 0x8000;
            } else if (o->unk_1c9 == 0) {
                o->unk_1c9 = 1;
                (*slot)->unk_1e9 = e->unk_15c;
                (*slot)->unk_1ec = e->unk_1c0 + 0x8000;
            }
            func_ov004_0222e390(e, slot);
        } else if (a <= 0x4000 && c <= 0x4000) {
            if (e->unk_1b0 < v[2]) {
                e->unk_1ec = b + 0x8000;
            } else if (o->unk_1c9 == 0) {
                o->unk_1c9 = 1;
                (*slot)->unk_1e9 = e->unk_15c;
                (*slot)->unk_1ec = e->unk_1c0 + 0x8000;
            }
            func_ov004_0222e390(e, slot);
        } else {
            s32 r = func_02002bdc(v, &e->unk_1a8);
            s32 d = (s16)(r - e->unk_1c0);
            if (d < 0) {
                e->unk_1ec = r - 0x4000;
            } else {
                e->unk_1ec = r + 0x4000;
            }
        }
    }
}

extern "C" void func_ov004_0222e61c(Ent *e) {
    if (e->unk_1ee != 1) {
        if (e->unk_40 != 0) {
            if (e->unk_1f1 == 0) {
                func_ov004_0222e48c(e);
                e->unk_1ca = 1;
            } else {
                u32 c5 = e->unk_1e8;
                if (e->unk_252 != c5) {
                    e->unk_252 = c5;
                    e->unk_254 = 0;
                } else {
                    u8 *c = &e->unk_254;
                    *c = *c + 1;
                    u32 n = *c;
                    if (n >= 0x7d) {
                        Ent *o = data_ov004_02251e94[e->unk_1e8];
                        if (!o) {
                            return;
                        } else {
                            u32 ra = data_ov004_022402ef[e->unk_15c * 0x11];
                            u32 rb = data_ov004_022402ef[o->unk_15c * 0x11];
                            if (ra <= rb) {
                                func_ov004_0222ed24(e, &o->unk_1a8);
                                e->unk_254 = 0;
                                return;
                            } else if (n >= 0x91) {
                                func_ov004_0222ed24(e, &o->unk_1a8);
                                e->unk_254 = 0;
                                return;
                            }
                        }
                    }
                }
                {
                    if (e->unk_1ee == 6 || (e->unk_1ee == 5 && e->unk_15c >= 0x23)) {
                        e->unk_1ee = 2;
                    }
                    u32 m = e->unk_1ea;
                    if ((m & 8) != 0 || (m & 0x10) != 0) {
                        if (e->unk_1ee != 4) {
                            u32 a = data_ov004_022402ec[e->unk_15c].unk_00;
                            u32 b = data_ov004_022402ec[e->unk_1e8].unk_00;
                            if (a <= b) {
                                e->unk_1ee = 4;
                                e->unk_158 = 0;
                            }
                        }
                    }
                    m = e->unk_1ea;
                    if (m >= 0x40) {
                        if (e->unk_1c9 == 0) {
                            func_ov004_0222e4f0(e);
                        }
                    } else if ((m & 0x20) != 0) {
                        e->unk_1ca = 1;
                        e->unk_1c9 = 1;
                    }
                    func_020e769c(&e->unk_1c0, e->unk_1ec, 0x38e);
                }
            }
        } else {
            func_ov004_0222e48c(e);
        }
    }
}

extern "C" void func_ov004_0222e7a4(Ent *e) {
    s32 lo, hi;
    if (e->unk_1c8 == 1) {
        lo = 0;
        hi = 0x22;
    } else {
        lo = -2;
        hi = 0x24;
    }
    s32 x = e->unk_1a8 >> 12;
    if (x <= lo) {
        e->unk_1c0 = 0x4000;
        e->unk_1ac = (data_ov004_022402f0[e->unk_15c * 0x11] << 12) >> 6;
    } else if (x >= hi) {
        e->unk_1c0 = -0x4000;
        e->unk_1ac = (data_ov004_022402f0[e->unk_15c * 0x11] << 12) >> 6;
    }
}

extern "C" void func_ov004_0222e820(Ent *e) {
    s32 v = e->unk_1c0;
    s32 t;
    if (v < 0) t = -v; else t = v;
    if (t > 0x5554) {
        if (v >= 0) {
            e->unk_1c0 = 0x5554;
            return;
        }
        e->unk_1c0 = -0x5554;
        return;
    } else if (t < 0x2aac) {
        if (v >= 0) {
            e->unk_1c0 = 0x2aac;
            return;
        }
        e->unk_1c0 = -0x2aac;
    }
}

extern "C" void func_ov004_0222e874(Ent *e) {
    s32 t = e->unk_210;
    s32 *p = &e->unk_20c;
    *p = t - e->unk_218 * e->unk_158;
    func_ov004_0223257c(&e->unk_1a8, *p, e->unk_1c0);
    if (e->unk_20c <= 0xf6) {
        e->unk_20c = 0xf6;
        e->unk_158 = 3;
        e->unk_1ee = 2;
    }
}

extern "C" void func_ov004_0222e8d8(Ent *e) {
    e->unk_158 = 1;
    e->unk_202 = func_ov004_02231e28(e->unk_205, e->unk_204);
    e->unk_203 = 0;
    e->unk_23c = 0;
    if (e->unk_1f1 != 0) {
        e->unk_1c2 += func_ov004_02231e3c(0x1e, 0xf);
    }
    if (e->unk_1e8 == e->unk_15c) {
        if (e->unk_1ac >= e->unk_1cc) {
            e->unk_1ca = -1;
        } else if (e->unk_1ac <= e->unk_228) {
            e->unk_1ca = 1;
        } else {
            e->unk_1ca = func_ov004_02231e28(0, 2) > 0 ? 1 : -1;
        }
    }
    e->unk_1ee = 3;
}

extern "C" void func_ov004_0222e9a8() {}

extern "C" void func_ov004_0222e9ac(Ent *e) {
    if (e->unk_158 <= 0x28) {
        if ((u8)(e->unk_164 + 0xfc) <= 1) {
            func_020e7754(&e->unk_1c0, e->unk_24c, 3, 0xaaa);
        } else {
            func_020e7754(&e->unk_1c0, e->unk_24c, 2, 0x4000);
        }
        s32 *p = &e->unk_20c;
        *p = e->unk_210;
        func_ov004_0223257c(&e->unk_1a8, *p, e->unk_1c0);
    } else {
        e->unk_253 = 0;
        e->unk_1ee = 2;
    }
}

extern "C" void func_ov004_0222ea40(Ent *e) {
    e->unk_20c = 0;
    if (e->unk_158 >= e->unk_203) {
        e->unk_158 = 0;
        e->unk_1ee = 2;
    }
}

extern "C" void func_ov004_0222ea74(Ent *e) {
    s32 t = e->unk_210;
    s32 *p = &e->unk_20c;
    *p = t - e->unk_218 * e->unk_158;
    func_ov004_0223257c(&e->unk_1a8, *p, e->unk_1c0);
    if (e->unk_20c <= 0) {
        e->unk_20c = 0;
        e->unk_158 = 0;
        e->unk_1ee = 6;
    }
}

extern "C" void func_ov004_0222ead8(Ent *e) {
    s32 *p = &e->unk_20c;
    *p = e->unk_210;
    func_ov004_0223257c(&e->unk_1a8, *p, e->unk_1c0);
    if (e->unk_158 >= e->unk_202) {
        e->unk_158 = 0;
        e->unk_1ee = 5;
    }
}
