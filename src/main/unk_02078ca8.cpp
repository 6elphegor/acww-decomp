#include "types.h"

struct Unk_02078d6c_Slot { u8 pad[0x2c]; };

struct Unk_02078d6c_Time { u32 lo; u32 hi; };

struct Unk_02078d6c_Self {
    u8 pad[8];
    s8 unk_08[4];
    u32 unk_0c;
    u32 unk_10;
};

struct Unk_02079524_Self {
    u8 pad[0x38ec];
    u16 unk_38ec_0 : 1;
    u16 unk_38ec_1 : 1;
    u16 unk_38ec_2 : 3;
};

struct Unk_020794ac_Entry { u8 *unk_00; u8 unk_04; };

extern "C" {
s8 *func_020783f8();
void func_0207857c(void *, s32);
void func_020785e8(void *, s32);
s32 func_0207c014(s32);
void func_02115fb4(void *, s32, u32);
void func_02116048(void *, void *, u32);
void func_0209d498(void *);
s32 func_020805c4(void *);
s32 func_020030b4(s32);
s32 func_020812f4();
s32 func_0207bb84(void *);
s32 func_02078234(void *);
s32 func_0209750c(void *);
s32 func_02098044(s32, s32);
s32 func_02003098(s32);
s32 func_02081288(s32, s32);
s32 func_0204bdb8();
s32 func_0207a484(s32);
s32 func_0207c764(void *);
s32 func_02063b8c(s32);
s32 func_0209d020(void *);
s32 func_0209d3d0(void *, void *, s32);
s32 func_0209d374(void *, void *);
s32 func_02094218(s32);
s32 func_0207f854(void *, s32);
s32 func_0207e278(void *);
s32 func_02060e24(s32);
void func_0207c65c(void *);
s32 func_0207bfb4(void *, s32);

BOOL func_02078d4c(void *a, u32 i);
BOOL func_02079380(u8 *self, s32 a, s32 v);
BOOL func_020792ec(Unk_02078d6c_Self *self, u32 i, s32 v);
s32 func_02078d1c(s32 a, s32 b, s32 c);
void func_02078de0(Unk_02078d6c_Self *self, u8 *p);
void func_02078e60(Unk_02078d6c_Self *self, u8 *p);
void func_02078f0c(Unk_02078d6c_Self *self, u8 *p, s32 x);
void func_02078f98(Unk_02078d6c_Self *self, s8 *out, s32 *cnt, s8 *list, u8 *players);
void func_02079008(Unk_02078d6c_Self *self, s8 *list, s32 *cnt, Unk_02078d6c_Slot *slots, s32 n);
void func_02079070(Unk_02078d6c_Self *self, s8 *list, s32 *cnt, Unk_02078d6c_Slot *slots);
void func_02078f98(Unk_02078d6c_Self *self, s8 *out, s32 *cnt, s8 *list, u8 *players);
void func_02079008(Unk_02078d6c_Self *self, s8 *list, s32 *cnt, Unk_02078d6c_Slot *slots, s32 n);
void func_02079070(Unk_02078d6c_Self *self, s8 *list, s32 *cnt, Unk_02078d6c_Slot *slots);
void func_020790d4(Unk_02078d6c_Self *self, s8 *out, s32 *cnt, s8 *list, u8 *players, s32 limit);
BOOL func_020791c0(Unk_02078d6c_Self *self, void *out);
s32 func_020792b8(Unk_02078d6c_Self *self, s32 x);
void func_020792fc(Unk_02078d6c_Self *self);
void func_0207930c(s8 *p, s32 x);
void func_0207928c(Unk_02078d6c_Self *self, s32 x);
s32 func_020794ac();
void func_020793b0(void *a, void *b);
void func_020793a4(void *a, void *b, void *c);

void func_02078ca8(s8 *a, s32 i, s32 d) {
    if (func_02078d4c(a, i)) {
        s32 t = d + a[i];
        s8 *p = &a[i];
        if (t > 127) {
            t = 127;
        } else if (t < -128) {
            t = -128;
        }
        *p = t;
    }
}

void func_02078cd8(u8 *a, s32 x) {
    s32 i;
    s32 t;
    if (func_0207c014(x)) {
        for (i = 0; i < 8; i++) {
            if (i != x) {
                t = func_02078d1c((s32)a, x, i);
                if (func_02078d4c(a, t)) {
                    a[t] = 0;
                }
            }
        }
    }
}

s32 func_02078d1c(s32 a, s32 b, s32 c) {
    s32 r = 0;
    s32 lo = b;
    s32 i;
    if (b > c) {
        lo = c;
        c = b;
    }
    for (i = 0; i < lo; i++) {
        r += 7 - i;
    }
    return r + (c - lo - 1);
}

BOOL func_02078d4c(void *a, u32 i) {
    if (i < 0x1c) {
        return TRUE;
    }
    return FALSE;
}

void func_02078d58(void *p) {
    func_02115fb4(p, 0, 0x1c);
}

void func_02078d64() {}
void func_02078d68() {}

void func_02078d6c(Unk_02078d6c_Self *self, u8 *p, s32 keep) {
    Unk_02078d6c_Time t;
    Unk_02078d6c_Slot *slots;
    s32 i;
    t.lo = 0;
    t.hi = 0;
    slots = (Unk_02078d6c_Slot *)(u8 *)func_020783f8();
    for (i = 0; i < 8; i++) {
        func_0207857c(&slots[i], 3);
    }
    func_0209d498(&t);
    if (func_020791c0(self, &t)) {
        func_02078e60(self, p);
        if (keep) {
            func_02116048(&t, &self->unk_0c, 8);
        }
    } else {
        func_02078de0(self, p);
    }
    func_02078f0c(self, p, (s32)&t);
}

void func_02078de0(Unk_02078d6c_Self *self, u8 *p) {
    Unk_02078d6c_Slot *s = (Unk_02078d6c_Slot *)(u8 *)func_020783f8();
    s32 i;
    s32 z0 = 0;
    s32 z1 = 0;
    for (i = 0; i < 8; i++) {
        if (func_020030b4(func_020805c4(p))) {
            if (func_020792b8(self, i) != ~0) {
                func_0207857c(s, z1);
                func_020785e8(s, 1);
            } else {
                func_0207857c(s, 1);
                func_020785e8(s, z0);
            }
        } else {
            func_0207857c(s, 3);
            func_020785e8(s, 7);
        }
        p += 0x700;
        s++;
    }
}

void func_02078e60(Unk_02078d6c_Self *self, u8 *p) {
    s8 l1[8];
    s8 l2[8];
    s32 a, c, n, b, i;
    Unk_02078d6c_Slot *slots;
    slots = (Unk_02078d6c_Slot *)(u8 *)func_020783f8();
    a = 0;
    b = func_020812f4();
    n = func_0207bb84(p);
    c = 0;
    for (i = 0; i < 8; i++) {
        func_0207857c(&slots[i], 3);
    }
    func_020793a4(self, l1, self);
    func_020793b0(self, self);
    func_020793b0(self, l2);
    n = n * 3;
    if (b > (n >> 2)) {
        b = n >> 2;
    }
    func_020792fc(self);
    func_02078f98(self, l2, &a, l1, p);
    func_020790d4(self, l2, &a, l1, p, b);
    func_02079070(self, l1, &c, slots);
    func_02079008(self, l2, &c, slots, a);
}

void func_02078f0c(Unk_02078d6c_Self *self, u8 *p, s32 x) {
    Unk_02078d6c_Slot *s;
    s32 i;
    s32 z = 0;
    s32 r;
    BOOL v;
    s32 t;
    s32 o = func_0209750c(self);
    if (o) {
        r = func_02098044(o, 1);
    } else {
        r = 0;
    }
    if (r) {
        v = TRUE;
    } else {
        v = FALSE;
    }
    s = (Unk_02078d6c_Slot *)(u8 *)func_020783f8();
    for (i = 0; i < 8; i++) {
        t = func_020805c4(p);
        if (func_020030b4(t)) {
            if (!v) {
                if (func_02081288(func_02003098(t), x)) {
                    func_0207857c(s, 2);
                    func_020785e8(s, z);
                }
            }
        } else {
            func_0207857c(s, 3);
            func_020785e8(s, 7);
        }
        p += 0x700;
        s++;
    }
}

void func_02078f98(Unk_02078d6c_Self *self, s8 *out, s32 *cnt, s8 *list, u8 *players) {
    s32 id = func_02078234(self);
    s32 i;
    s32 v;
    s32 z = 0;
    s32 m1;
    if (func_0207c014(id)) {
        i = 0;
        m1 = ~i;
        for (; i < 8; list++, i++) {
            v = *list;
            if (func_0207c014(v) && v == id) {
                if (func_020030b4(func_020805c4(players + v * 0x700))) {
                    out[*cnt] = v;
                    *cnt = *cnt + 1;
                }
                *list = m1;
            }
        }
    }
}

void func_02079008(Unk_02078d6c_Self *self, s8 *list, s32 *cnt, Unk_02078d6c_Slot *slots, s32 n) {
    s32 i;
    s32 v;
    Unk_02078d6c_Slot *e;
    s32 z = 0;
    for (i = 0; i < n; list++, i++) {
        v = *list;
        if (func_02079380((u8 *)self, *cnt, v)) {
            *cnt = *cnt + 1;
            e = slots + v;
            func_0207857c(e, z);
            func_020785e8(e, 1);
            func_020792ec(self, i, v);
        }
    }
}

void func_02079070(Unk_02078d6c_Self *self, s8 *list, s32 *cnt, Unk_02078d6c_Slot *slots) {
    s32 i;
    s32 v;
    Unk_02078d6c_Slot *e;
    s32 z = 0;
    s32 m1 = ~z;
    for (i = 0; i < 8; list++, i++) {
        v = *list;
        if (func_0207c014(v) && func_02079380((u8 *)self, *cnt, v)) {
            *cnt = *cnt + 1;
            e = slots + v;
            func_0207857c(e, 1);
            func_020785e8(e, z);
            *list = m1;
        }
    }
}

void func_020790d4(Unk_02078d6c_Self *self, s8 *out, s32 *cnt, s8 *list, u8 *players, s32 limit) {
    u8 mask = 0;
    s32 n = mask;
    s8 *q1;
    s32 v;
    s32 id;
    s32 i;
    s32 bit;
    s32 r;
    s8 *q2;
    s32 j;
    id = func_0207a484(func_0204bdb8() + 0x8a3c);
    q1 = list;
    for (i = 0; i < 8; q1++, i++) {
        v = *q1;
        if (func_0207c014(v) && v != id) {
            v = v * 0x700;
            if (func_0207c764(players + v)) {
                mask |= 1 << i;
                mask = (u8)mask;
                n++;
                if (n >= 6) goto done;
            }
        }
    }
done:
    while (n > 0 && *cnt < limit) {
        r = func_02063b8c(n);
        q2 = list;
        for (j = 0; j < 8; q2++, j++) {
            v = *q2;
            bit = mask;
            bit >>= j;
            bit &= 1;
            if (bit) {
                if (r == 0) {
                    out[*cnt] = v;
                    *cnt = *cnt + 1;
                    *q2 = ~0;
                    mask &= ~(1 << j);
                    mask = (u8)mask;
                    break;
                }
                r--;
            }
        }
        n--;
    }
}

BOOL func_020791c0(Unk_02078d6c_Self *self, void *out) {
    s32 r;
    s32 c;
    if (*(u64 *)&self->unk_0c == 0 || func_0209d020(&self->unk_0c)) {
        return TRUE;
    }
    r = 0;
    c = func_0209d3d0(out, &self->unk_0c, 0x3e);
    if (c == ~r) {
        r = func_0209d374(out, &self->unk_0c);
    } else if (c == 1) {
        r = func_0209d374(&self->unk_0c, out);
    }
    if (r >= 0x3c) {
        return TRUE;
    }
    return FALSE;
}

void func_02079228(Unk_02078d6c_Self *p) {
    p->unk_0c = 0;
    p->unk_10 = 0;
}

void func_02079230(s8 *out, u8 *p) {
    s32 i;
    s32 m1;
    i = 0;
    m1 = ~i;
    for (; i < 8; i++) {
        if (func_020030b4(func_020805c4(p))) {
            out[i] = i;
        } else {
            out[i] = m1;
        }
        p += 0x700;
    }
}

s32 func_02079268(Unk_02078d6c_Self *a, s32 b) {
    return func_020792b8(a, b);
}

void func_02079270(Unk_02078d6c_Self *self, s32 x) {
    func_0207930c((s8 *)self, x);
    func_0207928c(self, x);
}

void func_0207928c(Unk_02078d6c_Self *self, s32 x) {
    u32 i = func_020792b8(self, x);
    s32 n;
    if (i < 4) {
        for (n = i; n < 3; n = i) {
            i = n + 1;
            self->unk_08[n] = self->unk_08[i];
        }
        self->unk_08[3] = ~0;
    }
}

s32 func_020792b8(Unk_02078d6c_Self *self, s32 x) {
    s32 i;
    if (func_0207c014(x)) {
        for (i = 0; i < 4; i++) {
            if (x == self->unk_08[i]) {
                return i;
            }
        }
    }
    return ~0;
}

BOOL func_020792ec(Unk_02078d6c_Self *self, u32 i, s32 v) {
    if (i < 4) {
        self->unk_08[i] = v;
        return TRUE;
    }
    return FALSE;
}

void func_020792fc(Unk_02078d6c_Self *self) {
    func_02115fb4(self->unk_08, 0xff, 4);
}

void func_0207930c(s8 *p, s32 x) {
    s32 i;
    s32 n;
    if (func_0207c014(x)) {
        for (i = 0; i < 8; i++) {
            if (x == p[i]) {
                for (; i < 7; i = n) {
                    n = i + 1;
                    p[i] = p[n];
                }
                p[7] = ~0;
                break;
            }
        }
    }
}

void func_0207934c(s8 *p, s32 x) {
    s32 i;
    s32 m1;
    if (func_0207c014(x)) {
        i = 0;
        m1 = ~i;
        for (; i < 8; p++, i++) {
            if (*p == m1) {
                *p = x;
                break;
            }
        }
    }
}

BOOL func_02079380(u8 *self, s32 a, s32 v) {
    BOOL r = FALSE;
    if (func_0207c014(a)) {
        self[a] = v;
        r = TRUE;
    }
    return r;
}

void func_020793a4(void *a, void *b, void *c) {
    func_02116048(c, b, 8);
}

void func_020793b0(void *a, void *b) {
    func_02115fb4(b, 0xff, 8);
}

void func_020793c0(Unk_02078d6c_Self *self) {
    func_020793b0(self, self);
    func_020792fc(self);
    self->unk_0c = 0;
    self->unk_10 = 0;
}

void func_020793dc() {}

void func_020793e0(Unk_02078d6c_Self *p) {
    p->unk_0c = 0;
    p->unk_10 = 0;
}

void func_020793e8(u8 *p, s32 a1) {
    s32 mask, n, i, r, j, lim, bit;
    func_020783f8()[0x160] = -1;
    if (a1) {
        if (func_02094218(a1)) {
            lim = func_020794ac();
            mask = 0;
            n = 0;
            for (i = 0; i < 8; i++) {
                if (func_020030b4(func_020805c4(p)) && func_0207f854(p, a1) && !func_0207e278(p)) {
                    mask |= 1 << i;
                    mask = (u8)mask;
                    n++;
                }
                p += 0x700;
            }
            while (n > 0) {
                r = func_02063b8c(n);
                n--;
                for (j = 0; j < 8; j++) {
                    bit = (mask >> j) & 1;
                    if (bit) {
                        if (r == 0) {
                            if (func_02063b8c(100) < lim) {
                                func_020783f8()[0x160] = j;
                                n = 0;
                            }
                            mask &= ~(1 << j);
                            mask = (u8)mask;
                            break;
                        }
                        r--;
                    }
                }
            }
        }
    }
}

s32 func_020794ac() {
    Unk_02078d6c_Time t;
    Unk_020794ac_Entry *e;
    u8 *q;
    s32 prev, i, n;
    t.lo = 0;
    t.hi = 0;
    func_0209d498(&t);
    e = (Unk_020794ac_Entry *)func_02060e24(((u8 *)&t)[4] - 1);
    if (e) {
        q = e->unk_00;
        prev = 0;
        i = 0;
        n = e->unk_04;
        for (; i < n; i++) {
            if (q[0] == 0x30) {
                return q[1] - prev;
            }
            prev = q[1];
            q += 2;
        }
    }
    return 0;
}

void func_020794f4(u8 *p) {
    s32 i;
    for (i = 0; i < 8; i++) {
        if (func_020030b4(func_020805c4(p))) {
            func_0207c65c(p);
        }
        p += 0x700;
    }
}

BOOL func_02079524(Unk_02079524_Self *self, s32 u) {
    s32 r;
    if (self->unk_38ec_1) {
        r = func_0207bfb4(self, u);
        if (func_0207c014(r) && self->unk_38ec_2 == r) {
            return TRUE;
        }
        return FALSE;
    }
    return FALSE;
}

void func_02079568(Unk_02079524_Self *self, s32 u) {
    s32 r = func_0207bfb4(self, u);
    if (func_0207c014(r)) {
        u16 *h = (u16 *)((u8 *)self + 0x38ec);
        u32 t;
        u32 v;
        *h = *h | 2;
        t = *h;
        t &= ~0x1c;
        v = (u8)r;
        v &= 7;
        t |= v << 2;
        *h = t;
    }
}

void func_020795a8(Unk_02079524_Self *self) {
    self->unk_38ec_1 = 0;
    self->unk_38ec_2 = 0;
}
}
