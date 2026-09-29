#include "types.h"

// Record (12 bytes): u16 id, 8 bytes, type byte at +0x0a, key byte at +0x0b
class Unk_02003130 {
public:
    Unk_02003130();
    Unk_02003130(s32 v);
    ~Unk_02003130();

    /* 0x00 */ u16 unk_00;
    /* 0x02 */ u8 unk_02[8];
    /* 0x0a */ u8 unk_0a;
    /* 0x0b */ u8 unk_0b;
};

// Record (12 bytes): two words, u16 at +8, type byte at +0x0a, bits at +0x0b
class Unk_0209ada4 {
public:
    Unk_0209ada4();
    ~Unk_0209ada4();

    /* 0x00 */ u32 unk_00;
    /* 0x04 */ u32 unk_04;
    /* 0x08 */ u16 unk_08;
    /* 0x0a */ u8 unk_0a;
    /* 0x0b */ u8 unk_0b;
};

// Slot: Y record, two records, flag byte at +0x24 (0x28 bytes)
class Unk_0209a5dc : public Unk_0209ada4 {
public:
    Unk_0209a5dc();
    ~Unk_0209a5dc();

    /* 0x0c */ Unk_02003130 unk_0c[2];
    /* 0x24 */ u8 unk_24;
};

// Y record with an index byte and a flag byte (0x10 bytes)
class Unk_02099f98 : public Unk_0209ada4 {
public:
    /* 0x0c */ u8 unk_0c;
    /* 0x0d */ u8 unk_0d;
};

class Unk_02099f5c : public Unk_02003130 {
public:
    Unk_02099f5c();
    ~Unk_02099f5c();

    /* 0x0c */ Unk_0209ada4 unk_0c;
    /* 0x18 */ u32 unk_18;
    /* 0x1c */ u32 unk_1c;
    /* 0x20 */ u8 unk_20[8];
};

class Unk_02099e38 {
public:
    Unk_02099e38();
    ~Unk_02099e38();

    /* 0x00 */ Unk_0209a5dc unk_00[2];
    /* 0x50 */ Unk_02003130 unk_50[3];
    /* 0x74 */ u8 unk_74;
    /* 0x78 */ Unk_02099f98 unk_78;
    /* 0x88 */ Unk_02099f5c unk_88;
};

extern u8 data_021dfd8c[];
extern u16 data_020d05c8[];
extern u16 data_020d059c[];
extern u8 data_021ed104[];

extern "C" {
Unk_0209a5dc *func_02099db4(Unk_02099e38 *m, s32 i);
BOOL func_02099c1c(Unk_02099e38 *m);
void func_02099c48(Unk_02099e38 *m);
void func_02099bd8(Unk_02099e38 *m);
void func_02099f1c(Unk_02099f5c *x);
void func_02099ab4(void *p);
void func_0209a178(Unk_02099f98 *z, s32 i);
s32 func_0209a19c(Unk_02099f98 *z, s32 mask);
s32 func_0209a208(Unk_02099f98 *z, s32 v);
s32 func_0209a230(Unk_02099f98 *z, u32 mask);
void func_0209a254(Unk_02099f98 *z);

s32 func_0209a588(Unk_0209a5dc *e);
Unk_0209ada4 *func_0209a4f0(Unk_0209a5dc *e);
Unk_02003130 *func_0209a4e4(Unk_0209a5dc *e, s32 i);
void func_0209a4f4(Unk_0209a5dc *e, s32 a, s32 b, void *c);
void *func_0209a108(Unk_02099f98 *z);
void *func_0209a0dc(Unk_02099f98 *z, s32 v);
void func_0209ab8c(Unk_02099f98 *z, u16 *v);
u16 *func_0209ab94(Unk_0209ada4 *y);
void func_0209abb4(Unk_0209ada4 *y, s32 v);
u32 func_0209abc4(Unk_0209ada4 *y);
u32 func_0209abcc(Unk_0209ada4 *y);
void func_0209ac48(Unk_0209ada4 *y, s32 v);
u32 func_0209ac64(Unk_0209ada4 *y);
void func_0209ad54(Unk_0209ada4 *y, s32 t, u16 *v, s32 k);
s32 func_0209ad68(Unk_0209ada4 *y);
void func_0209ad80(Unk_0209ada4 *y);

s32 func_020030b4(Unk_02003130 *r);
void func_020030d8(Unk_02003130 *r, Unk_02003130 *o);
void func_020030e8(Unk_02003130 *r);
Unk_02003130 *func_020805c4(void *p);
void *func_0207bc44(void *g, Unk_02003130 **a, s32 n);
s32 func_02065578(void *p);
s32 func_0206561c(void *p);
s32 func_0209750c();
void *func_0209865c(void *p);
void func_02133ef8(void *p, s32 n);
s32 func_02128930(void *a, void *b, u32 n);
void func_02116048(void *src, void *dst, u32 n);
void func_02115fb4(void *p, u32 v, u32 n);
s32 func_0204b2d4(u16 *p);
s32 func_0204b25c(u16 *p);
u32 func_02063b8c(u32 n);
s32 func_020814ec(void *p, u16 *v);
u32 func_02002fc8(Unk_02003130 *r, u32 a);
s32 func_0209888c(s32 v);
s32 func_02094058(s32 v);
s32 func_020ac7a8();
s32 func_020ae940(void *p);
}

extern "C" {

void func_020998b8(Unk_02099e38 *m) {
    if (func_02099c1c(m)) {
        func_0209a588(func_02099db4(m, 0));
    }
}

void func_020998d8(Unk_02099e38 *m) {
    Unk_0209ada4 *r = func_0209a4f0(func_02099db4(m, 0));
    if (func_0209ad68(r)) {
        if (func_0209ac64(r) == 0x12) {
            if (func_0209abc4(r) == 0) {
                func_0209abb4(r, 1);
            }
        }
    }
}

void func_02099910(Unk_02099e38 *m) {
    func_0209a4f4(func_02099db4(m, 0), 0x12, 0, 0);
}

void func_0209992c(Unk_02099e38 *m) {
    func_0209a4f4(func_02099db4(m, 0), 0x11, 0, &m->unk_50[1]);
}

void func_02099948(Unk_02099e38 *m) {
    Unk_0209a5dc *e = func_02099db4(m, 0);
    Unk_02003130 *a[2];
    func_02133ef8(a, 8);
    s32 n = 0, i = n;
    for (; i < 2; i++) {
        Unk_02003130 *r = &m->unk_50[i];
        if (func_020030b4(r)) {
            a[n] = r;
            n++;
        }
    }
    void *t = func_0207bc44(data_021dfd8c, a, n);
    func_0209a4f4(e, 0x10, 0, func_020805c4(t));
    func_020030d8(&m->unk_50[2], func_020805c4(t));
}

BOOL func_020999c0(Unk_02099e38 *m, void *p) {
    if (p && func_02065578(p)) {
        Unk_0209a5dc *e = func_02099db4(m, 0);
        Unk_0209ada4 *y = func_0209a4f0(e);
        if (func_0209ac64(y) == 0xf) {
            s32 v = func_0206561c(p);
            if (v) {
                Unk_02003130 tmp(v);
                if (func_020030b4(&tmp)) {
                    Unk_02003130 *q = func_0209a4e4(e, 1);
                    if (q->unk_00 == tmp.unk_00 && func_02128930(q->unk_02, tmp.unk_02, 8) == 0 && q->unk_0b == tmp.unk_0b) {
                        if (func_0209abc4(y) < 2) {
                            func_0209abb4(y, 2);
                            return TRUE;
                        }
                        goto out;
                    }
                }
                if (func_0209abc4(y) == 0) {
                    func_0209abb4(y, 1);
                    return TRUE;
                }
            out:;
            } else {
                if (func_0209abc4(y) == 0) {
                    func_0209abb4(y, 1);
                    return TRUE;
                }
            }
        }
    }
    return FALSE;
}

void func_02099a98() {
    void *r = (void *)func_0209750c();
    if (r) {
        func_02099ab4(func_0209865c(r));
    }
}

void func_02099ab4(void *p) {
    Unk_0209ada4 *y = func_0209a4f0(func_02099db4((Unk_02099e38 *)p, 0));
    if (func_0209ac64(y) == 0xf) {
        if (func_0209abc4(y) == 0) {
            func_0209abb4(y, 1);
        }
    }
}

void func_02099ae4(Unk_02099e38 *m) {
    Unk_0209a5dc *e = func_02099db4(m, 0);
    func_0209a4f0(e);
    Unk_02003130 *a[1];
    func_02133ef8(a, 4);
    s32 n = 0;
    if (func_020030b4(&m->unk_50[0])) {
        a[0] = &m->unk_50[0];
        n = 1;
    }
    void *t = func_0207bc44(data_021dfd8c, a, n);
    func_0209a4f4(e, 0xf, 0, func_020805c4(t));
    func_020030d8(&m->unk_50[1], func_020805c4(t));
}

void func_02099b4c(Unk_02099e38 *m) {
    Unk_0209a5dc *e = func_02099db4(m, 0);
    void *t = func_0207bc44(data_021dfd8c, 0, 0);
    func_0209a4f4(e, 0xe, 0, func_020805c4(t));
    func_020030d8(&m->unk_50[0], func_020805c4(t));
}

void func_02099b90(Unk_02099e38 *m) {
    func_0209a4f4(func_02099db4(m, 0), 0xd, 0, 0);
}

void func_02099bac(Unk_02099e38 *m) {
    func_0209a4f4(func_02099db4(m, 0), 0xc, 0, 0);
}

BOOL func_02099bc8(Unk_02099e38 *m) {
    if (m->unk_74 == 1) {
        return TRUE;
    }
    return FALSE;
}

void func_02099bd8(Unk_02099e38 *m) {
    m->unk_74 = 0;
}

void func_02099be0(Unk_02099e38 *m) {
    m->unk_74 = 1;
}

void func_02099be8(Unk_02099e38 *m) {
    Unk_0209a5dc *e = func_02099db4(m, 0);
    func_0209a588(e);
    func_0209a4f4(e, 0xb, 0, 0);
    func_02099c48(m);
    func_02099bd8(m);
}

BOOL func_02099c1c(Unk_02099e38 *m) {
    Unk_0209ada4 *y = func_0209a4f0(func_02099db4(m, 0));
    if (func_0209ad68(y) && func_0209abcc(y) == 1) {
        return TRUE;
    }
    return FALSE;
}

void func_02099c48(Unk_02099e38 *m) {
    for (s32 i = 0; i < 3; i++) {
        func_020030e8(&m->unk_50[i]);
    }
}

void *func_02099c68(Unk_02099e38 *m, s32 a, u16 *p) {
    void *ret = 0;
    BOOL in = FALSE;
    if (*p >= 0x155f && *p <= 0x1560) {
        in = TRUE;
    }
    if (in) {
        if (func_0209ad68((Unk_0209ada4 *)func_0209a108(&m->unk_78))) {
            ret = func_0209a0dc(&m->unk_78, a);
            goto end;
        }
    }
    {
        s32 k = 0;
        BOOL in2 = FALSE;
        if (*p >= 0x1561 && *p <= 0x1564) {
            in2 = TRUE;
        }
        if (in2) {
            k = 0;
        }
        Unk_0209a5dc *e = func_02099db4(m, k);
        if (e) {
            Unk_0209ada4 *y = func_0209a4f0(e);
            if (func_0209ad68(y)) {
                u16 *q = func_0209ab94(y);
                BOOL same;
                if (func_0204b2d4(q)) {
                    if (func_0204b25c(q) == func_0204b25c(p)) {
                        same = TRUE;
                    } else {
                        same = FALSE;
                    }
                } else {
                    if (*q == *p) {
                        same = TRUE;
                    } else {
                        same = FALSE;
                    }
                }
                if (same) {
                    ret = (void *)func_02002fc8(func_0209a4e4(e, 1), a);
                }
            }
        }
    }
end:
    return ret;
}

Unk_0209a5dc *func_02099d44(Unk_0209a5dc *arr, Unk_02003130 *p, s32 idx) {
    Unk_0209a5dc *ret = 0;
    if (func_020030b4(p)) {
        s32 i;
        for (i = 0; i < 2; i++) {
            Unk_0209a5dc *e = &arr[i];
            if (func_0209ad68(func_0209a4f0(e))) {
                Unk_02003130 *q = func_0209a4e4(e, idx);
                if (q->unk_00 == p->unk_00 && func_02128930(q->unk_02, p->unk_02, 8) == 0 && q->unk_0b == p->unk_0b) {
                    ret = e;
                    break;
                }
            }
        }
    }
    return ret;
}

Unk_0209a5dc *func_02099db4(Unk_02099e38 *m, s32 i) {
    Unk_0209a5dc *r = 0;
    if (i >= 0 && i < 2) {
        r = &m->unk_00[i];
    }
    return r;
}

void func_02099dc8(Unk_02099e38 *m) {
    for (s32 i = 0; i < 2; i++) {
        func_0209a588(&m->unk_00[i]);
    }
    func_02099c48(m);
    func_0209a254(&m->unk_78);
    func_02099f1c(&m->unk_88);
}


void func_02099e88(Unk_02099f5c *x, Unk_02003130 *r, void *src) {
    func_02099f1c(x);
    u16 v = 0xfff1;
    func_0209ad54(&x->unk_0c, 0x15, &v, 0);
    func_0209ac48(&x->unk_0c, 0);
    func_020030d8(x, r);
    func_02116048(src, &x->unk_18, 8);
}

BOOL func_02099ed4(Unk_02099f5c *x, Unk_02003130 *p) {
    if (func_0209ad68(&x->unk_0c) && func_020030b4(p) && p->unk_00 == x->unk_00 &&
        func_02128930(p->unk_02, x->unk_02, 8) == 0 && p->unk_0b == x->unk_0b) {
        return TRUE;
    }
    return FALSE;
}

void func_02099f1c(Unk_02099f5c *x) {
    func_0209ad80(&x->unk_0c);
    func_020030e8(x);
    x->unk_18 = 0;
    x->unk_1c = 0;
    func_02115fb4(x->unk_20, 0, 1);
}

BOOL func_02099f98(Unk_02099f98 *z, u16 *p) {
    if (z->unk_0c < 5 && func_0209750c() && !func_02094058(func_0209888c(func_0209750c()))) {
        if (((s32)(*p & 0xf000) >> 12) == 0xd && func_0209ad68(z) && func_0209abc4(z) == 0) {
            BOOL in = FALSE;
            if (*p >= 0xd019 && *p <= 0xd01c) {
                in = TRUE;
            }
            if (in) {
                if (z->unk_0c == 0) {
                    return TRUE;
                }
            } else {
                u16 v = data_020d05c8[z->unk_0c];
                BOOL same;
                if (func_0204b2d4(p)) {
                    u16 t = v;
                    if (func_0204b25c(p) == func_0204b25c(&t)) {
                        same = TRUE;
                    } else {
                        same = FALSE;
                    }
                } else {
                    if (*p == v) {
                        same = TRUE;
                    } else {
                        same = FALSE;
                    }
                }
                if (same) {
                    return TRUE;
                }
            }
        }
    }
    return FALSE;
}

BOOL func_0209a05c(Unk_02099f98 *z) {
    if (z->unk_0d) {
        u32 r = func_0209a19c(z, z->unk_0d);
        if (r < 5) {
            func_0209a178(z, r);
            z->unk_0c = r;
            func_0209abb4(z, 0);
            u16 v = data_020d059c[func_02063b8c(10) & 1];
            func_0209ab8c(z, &v);
            r = func_0209a208(z, z->unk_0d);
            if ((r == 2 && (func_02063b8c(10) & 1)) || r == 1) {
                z->unk_0d = 0;
            }
            return TRUE;
        } else {
            z->unk_0d = 0;
        }
    }
    return FALSE;
}

void *func_0209a0dc(Unk_02099f98 *z, s32 v) {
    if (z->unk_0c < 5) {
        u16 t = data_020d05c8[z->unk_0c];
        return (void *)func_020814ec((void *)v, &t);
    }
    return 0;
}

void *func_0209a108(Unk_02099f98 *z) {
    return z;
}

void func_0209a10c(Unk_02099f98 *z) {
    u32 r = func_02063b8c(10) & 1;
    func_0209a254(z);
    u16 v = data_020d059c[r];
    func_0209ad54(z, 0x14, &v, 0);
    for (s32 i = 0; i < 5; i++) {
        z->unk_0d |= 1 << i;
    }
    r = func_0209a19c(z, z->unk_0d);
    if (r < 5) {
        func_0209a178(z, r);
        z->unk_0c = r;
    }
}

void func_0209a178(Unk_02099f98 *z, s32 i) {
    if ((u32)(i - 2) <= 1) {
        z->unk_0d &= ~4;
        z->unk_0d &= ~8;
    } else {
        z->unk_0d &= ~(1 << i);
    }
}

s32 func_0209a19c(Unk_02099f98 *z, s32 m) {
    if (func_020ac7a8() == 0) {
        m = (u8)(m & ~3);
    } else if (func_020ae940(data_021ed104)) {
        m = (u8)(m & ~1);
    }
    s32 n = func_0209a230(z, m);
    if (n > 0) {
        s32 r = func_02063b8c(n);
        for (s32 i = 0; i < 5; i++) {
            if ((m >> i) & 1) {
                if (r == 0) {
                    return i;
                }
                r--;
            }
        }
    }
    return -1;
}

}

Unk_02099e38::~Unk_02099e38() {}

Unk_02099e38::Unk_02099e38() {}

Unk_02099f5c::Unk_02099f5c() : unk_18(0), unk_1c(0) {
    func_020030e8(this);
    func_0209ad80(&unk_0c);
    unk_18 = 0;
    unk_1c = 0;
    func_02115fb4(unk_20, 0, 1);
}

Unk_02099f5c::~Unk_02099f5c() {}
