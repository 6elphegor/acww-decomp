#include "types.h"

struct Unk_02004b60 {
    u16 v;
    Unk_02004b60(u16 x) { v = x; }
    ~Unk_02004b60();
};

struct Unk_02097ac4 {
    u8 pad[0x9f8];
    s32 unk_9f8;
};

struct Unk_020973e4 {
    u32 unk_00;
    u8 unk_04;
};

struct Unk_020973ec_G {
    u32 unk_00;
    u32 unk_04;
    s32 unk_08;
};


struct Unk_020973e4_Pl {
    u8 pad[0x64];
    u32 unk_64;
    u32 unk_68;
};

extern "C" {
extern Unk_020973ec_G data_021e9350;
extern u8 data_021cb3b8;
extern u8 data_021d735c[];
extern u8 data_021d0910[];
extern u8 data_021e935c[];
extern u8 data_021ec780[];
extern Unk_020973e4_Pl *data_020cbb18;
extern u32 data_021d08c8;
extern u16 data_021d08cc[];

s32 func_020978fc(u32 idx);
s32 func_020978c8(u8 *base, s32 idx);
u8 *func_02097868(u8 *base, s32 idx);
u8 *func_0209788c(u8 *base, u16 *p);
s32 func_02097554(s32 idx);
s32 func_02097534(s32 idx);
u8 *func_0209759c();
s32 func_02098a48(void *p);
s32 func_02098a58(void *p);
void *func_02098af0(void *p, s32 f);
void *func_02098be4(void *p, s32 f);
u32 func_020952e0(u32 a);
u32 func_020974a0(s32 a);
u32 func_02097520(u32 a);
void func_0211ea4c(s32 (*f)());
s32 func_02097438();
s32 func_02097578(void *p);
void __cxa_vec_cleanup(void *, u32, u32, void *(*)(void *, s32));
void *__cxa_vec_ctor(void *, u32, u32, void *(*)(void *, s32), void *(*)(void *, s32));
void *func_0209888c(void *p);
s32 func_02094218(void *p);
u16 func_0209412c(void *p);
u32 func_02094154(u16 *p, u32 n);
s32 func_020941e8(void *a, void *b);
s32 func_02098898(void *, s32, u32, s32, u32, u32, u32, u32, u32, u32, u32, u16 *);
s32 func_020986d8(void *, void *);
s32 func_02128930(void *, void *, u32);
void *func_02115fb4(void *, s32, u32);
s32 func_02097740(u8 *base, u16 *p);
u32 func_020978a4(u8 *base);
u32 func_02063b8c();
s32 func_02098338(void *, s32);
s32 func_02098878(void *);
void func_02097078(void *, s32);
s32 func_02097084(void *);
u8 *func_020a03ac();
s32 func_02097d1c(u8 *, s32);
s32 func_02097d38(u8 *, s32);
struct Unk_02097ac4;
void func_02097ac4(Unk_02097ac4 *, s32, s32);
s32 func_02097b00(u8 *, s32);
s32 func_02097b68(u8 *, s32);
s32 func_02097c0c(u8 *);
s32 func_02097c50(u8 *, s32);
s32 func_02097ce4(u8 *, s32, s32);
u16 *func_02097f6c(u8 *, s32);
s32 func_02097f30(u8 *, u16 *, s32, s32);
s32 func_02097eb0(u8 *, s32);
s32 func_0204be70(u16 *);

void func_020973e4(Unk_020973e4 *p, u32 v) { p->unk_04 = v; }
u8 func_020973e8(Unk_020973e4 *p) { return p->unk_04; }

void func_020973ec(s32 v) {
    if (v > 999999999) v = 999999999;
    data_021e9350.unk_08 = v;
}

s32 func_02097404() { return data_021e9350.unk_08; }
void func_02097410(Unk_020973e4 *p, u32 v) { p->unk_00 = v; }
u32 func_02097414(Unk_020973e4 *p) { return p->unk_00; }
void func_02097418(Unk_020973e4 *p) {
    p->unk_00 = 0;
    p->unk_04 = 0;
}
void func_02097420() {}
void func_02097424() {}

void func_02097428() { func_0211ea4c(func_02097438); }
s32 func_02097438() {
    data_021cb3b8 = 1;
    return 1;
}

s32 func_02097444(s32 idx) {
    s32 r = 0;
    if (func_020978fc(idx) == 1) {
        if ((u32)data_021d735c != 0) r = func_020978c8(data_021d735c, idx);
    } else if (func_02097554(idx) == 1) {
        if (func_0209759c() != 0) {
            s32 t = func_02097534(idx);
            r = func_02098a48(func_0209759c() + t * 0x228c);
        }
    }
    return r;
}

u32 func_020974a0(s32 idx) {
    u32 r = 0;
    if (func_020978fc(idx) == 1) {
        if ((u32)data_021d735c != 0) r = (u32)func_02097868(data_021d735c, idx);
    } else if (func_02097554(idx) == 1) {
        if (func_0209759c() != 0) {
            r = (u32)func_0209759c();
            r += func_02097534(idx) * 0x228c;
        }
    }
    return r;
}

u32 func_020974f8() { return func_020952e0(data_020cbb18->unk_68); }
u32 func_0209750c() { return func_02097520(data_020cbb18->unk_68); }
u32 func_02097520(u32 a) { return func_020974a0(func_020952e0(a)); }

s32 func_02097534(s32 idx) {
    s32 r = -1;
    if (func_02097554(idx) == 1) r = idx - 4;
    return r;
}

s32 func_02097554(s32 idx) {
    if (idx >= 4 && idx < 7) return 1;
    return 0;
}

void func_02097564() { func_02097578(func_0209759c()); }

s32 func_02097578(void *p) {
    s32 i;
    for (i = 0; i < 3; i++) func_02098a58((u8 *)p + i * 0x228c);
}


void *func_020975a4(void *p) {
    __cxa_vec_cleanup(p, 3, 0x228c, func_02098af0);
    return p;
}

void *func_020975c4(void *p) {
    __cxa_vec_ctor(p, 3, 0x228c, func_02098be4, func_02098af0);
    return p;
}

u8 *func_020975f0(u8 *base, s32 a1, s32 a2, u32 idx) {
    u8 *r = 0;
    if (func_020978fc(idx) == 1) {
        static Unk_02004b60 tbl[4] = {Unk_02004b60(0x3884), Unk_02004b60(0x3888), Unk_02004b60(0x388c), Unk_02004b60(0x3890)};
        u16 hdr;
        u16 v[3];
        s32 i;
        r = base + idx * 0x228c;
        u16 cnt = 0;
        func_02115fb4(v, 0, 6);
        for (i = 0; i < 4; i++) {
            if (i != idx) {
                u8 *q = base + i * 0x228c;
                if (func_02094218(func_0209888c(q)) == 1) {
                    v[cnt] = func_0209412c(func_0209888c(q));
                    cnt++;
                }
            }
        }
        func_02098a58(r);
        hdr = 0xfff1;
        {
            u32 s = func_02094154(v, cnt);
            func_02098898(r, a1, s, a2, 0, 0, 0, 0, 0, 0, 0, &hdr);
        }
        idx &= 3;
        func_020986d8(r, &tbl[idx]);
    }
    return r;
}

s32 func_02097740(u8 *base, u16 *p) {
    if (func_02094218(p) == 1) {
        s32 i;
        for (i = 0; i < 4; i++) {
            u16 *q = (u16 *)func_0209888c(base + i * 0x228c);
            if (p[0] == q[0]) {
                if (func_02128930(p + 1, q + 1, 8) == 0) {
                    if (func_020941e8(p, q) != 0) return i;
                }
            }
        }
    }
    return -1;
}

s32 func_020977a0(void *p) { return func_02098338(p, 4); }

void func_020977ac(void *p) {
    s32 i;
    for (i = 0; i < 4; i++) func_02098a58((u8 *)p + i * 0x228c);
}

u8 *func_020977d0(u8 *base, u16 *p) {
    u8 *r;
    s32 n;
    if (p == 0 || func_0209788c(base, p) == 0) n = func_020978a4(base);
    else n = func_020978a4(base) - 1;
    r = 0;
    if (n > 0) {
        u32 t = func_02063b8c();
        s32 i;
        for (i = 0; i < 4; i++) {
            u8 *e = base + i * 0x228c;
            if (func_02098a48(e) == 1) {
                if (p != 0) {
                    u16 *q = (u16 *)func_0209888c(e);
                    if (p[0] == q[0]) {
                        if (func_02128930(p + 1, q + 1, 8) == 0) {
                            if (func_020941e8(p, q) != 0) continue;
                        }
                    }
                }
                if (t == 0) {
                    r = e;
                    break;
                }
                t--;
            }
        }
    }
    return r;
}

u8 *func_02097868(u8 *base, s32 idx) {
    u8 *r = 0;
    if (func_020978fc(idx) != 0) r = base + idx * 0x228c;
    return r;
}

u8 *func_0209788c(u8 *base, u16 *p) { return func_02097868(base, func_02097740(base, p)); }

u32 func_020978a4(u8 *base) {
    s32 i;
    u32 n = 0;
    for (i = n; i < 4; i++) {
        if (func_020978c8(base, i) != 0) n++;
    }
    return n;
}

s32 func_020978c8(u8 *base, s32 idx) {
    if (func_020978fc(idx) != 0) {
        if (func_02098a48(base + idx * 0x228c) != 0) return 1;
    }
    return 0;
}

s32 func_020978fc(u32 idx) {
    if (idx < 4) return 1;
    return 0;
}

void *func_02097908(void *p) {
    __cxa_vec_cleanup(p, 4, 0x228c, func_02098af0);
    return p;
}

void *func_02097928(void *p) {
    __cxa_vec_ctor(p, 4, 0x228c, func_02098be4, func_02098af0);
    return p;
}

void func_02097954(void *p, s32 v) {
    s32 s = func_02098878(p);
    if (s >= 0 && s < 4) func_02097078(data_021e935c + s * 0x98c, v);
}

s32 func_02097980(void *p) {
    s32 s = func_02098878(p);
    if (s >= 0 && s < 4) return func_02097084(data_021e935c + s * 0x98c);
    return 0;
}

u8 *func_020979b0(void *p) {
    s32 s = func_02098878(p);
    if (s >= 0 && s < 4) return data_021ec780 + s * 0xb4;
    return 0;
}

u8 *func_020979d8(void *p) {
    s32 s = func_02098878(p);
    if (s >= 0 && s < 4) return data_021e935c + s * 0x98c;
    return 0;
}

u8 *func_02097a04(void *p) {
    s32 s = func_02098878(p);
    if (s >= 0 && s < 4) {
        u8 *q = func_020a03ac();
        if (q != 0) return q + s * 0x477c;
    }
    return 0;
}

u8 *func_02097a30(u8 *p) { return p + 0x223e; }
u8 *func_02097a3c(u8 *p) { return p + 0x1c6c; }

void func_02097a48(u8 *p, s32 v, s32 mode) {
    s32 x = v + func_02097d1c(p, 0);
    if (x < 0) {
        if (mode == 1) {
            x = func_02097b00(p, -x);
            if (x < 0) x = 0;
            else if ((u32)x > 99999) x = 99999;
        } else {
            x = 0;
        }
    }
    func_02097ac4((Unk_02097ac4 *)p, x, mode);
}

BOOL func_02097a90(u8 *p, s32 v, s32 a, s32 b) {
    BOOL r = FALSE;
    if (v >= 0) {
        if (v <= func_02097ce4(p, a, b)) r = TRUE;
    } else {
        if (-v <= func_02097d1c(p, a)) r = TRUE;
    }
    return r;
}

void func_02097ac4(Unk_02097ac4 *p, s32 v, s32 mode) {
    if (v < 0) v = 0;
    if ((u32)v > 99999) {
        if (mode == 1) {
            v = func_02097b68((u8 *)p, v);
            if ((u32)v > 99999) v = 99999;
        } else {
            v = 99999;
        }
    }
    p->unk_9f8 = v;
}

s32 func_02097b00(u8 *p, s32 n) {
    u16 b[2];
    if (n < 0) n = 0;
    b[0] = 0xfff1;
    while (n > 0) {
        s32 t = func_02097c50(p, 1);
        if (t == -1) break;
        b[0] = *func_02097f6c(p, t);
        b[1] = 0xfff1;
        func_02097f30(p, &b[1], t, 0);
        n -= func_0204be70(b);
    }
    if (n != 0) n = -n;
    return n;
}

static inline BOOL Unk_02097b68_R(volatile u16 *p, u32 &c) {
    BOOL r = FALSE;
    c = *p;
    u32 a = *p;
    if (a >= 0x1492 && c <= 0x14fd) r = TRUE;
    return r;
}

s32 func_02097b68(u8 *p, s32 n) {
    u16 b[2];
    s32 a;
    b[0] = 0x14fd;
    a = func_0204be70(b);
    b[1] = 0xfff1;
    while ((u32)n > 99999) {
        s32 t = func_02097c0c(p);
        if (t == -1) break;
        b[1] = *func_02097f6c(p, t);
        volatile u16 *vp = b;
        BOOL rr = FALSE;
        u32 c = vp[1];
        u32 a2 = vp[1];
        if (a2 >= 0x1492 && c <= 0x14fd) rr = TRUE;
        if (rr) {
            func_02097f30(p, b, t, 0);
            n -= a - func_0204be70(&b[1]);
        } else {
            if (c != 0xfff1) break;
            func_02097f30(p, b, t, 0);
            n -= a;
        }
    }
    return n;
}

s32 func_02097c0c(u8 *p) {
    u16 *q = func_02097f6c(p, 0);
    s32 i = 0;
    s32 r = -1;
    for (; i < 15; q++, i++) {
        if (*q == 0xfff1) {
            r = i;
            break;
        }
    }
    if (r == -1) r = func_02097c50(p, 0);
    return r;
}

struct Unk_02097c50_Pad {
    s32 v[2];
    Unk_02097c50_Pad() {}
    ~Unk_02097c50_Pad() {}
};

s32 func_02097c50(u8 *p, s32 mode) {
    Unk_02097c50_Pad pad;
    u16 *q = func_02097f6c(p, 0);
    s32 lim = mode == 1 ? 0x6b : 0x6a;
    s32 i = 0;
    s32 best = -1;
    for (; i < 15; q++, i++) {
        BOOL f1 = FALSE;
        u32 h = *q;
        if (h >= 0x1492 && h <= 0x14fd) f1 = TRUE;
        if (f1 && func_02097eb0(p, i) == 0) {
            BOOL f2 = FALSE;
            s32 v;
            h = *q;
            if (h >= 0x1492 && h <= 0x14fd) f2 = TRUE;
            if (f2) v = h - 0x1492;
            else v = -1;
            if (v < lim || (best == ~0 && v == lim)) {
                lim = v;
                best = i;
            }
        }
    }
    return best;
}

s32 func_02097ce4(u8 *p, s32 mode, s32 arg) {
    s32 x = 99999 - func_02097d1c(p, 0);
    if (x < 0) x = 0;
    if (mode == 1) x += func_02097d38(p, arg);
    return x;
}

u8 *func_0209759c() { return data_021d0910; }

}
