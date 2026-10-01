#include "types.h"

extern "C" {
s32 func_02057078(u8 *hdr, const char *name);
s32 func_02057100(u8 *hdr, const char *name);
s32 func_02057110(u8 *hdr, const char *name);
u8 *func_020570b0(u8 *hdr, s32 idx);
s32 func_02057180(u32 v);
u8 *func_02057048(u8 *hdr, s32 idx);
s32 func_02056fd8(u8 *hdr, s32 idx);
s32 func_020b8a84(void *self, u8 *a, u32 b, s32 c, s32 d);
s32 func_020b8a34(void *self, u8 *a, u32 b, s32 c, s32 d);
void func_020b89c8(void *self);
s32 func_01ffc5a4(s32 a, s32 b);
u8 *func_021066e8(u8 *p, s32 z, u32 v);
u8 *func_02106778(u8 *p, u32 v);
u8 *func_02106768(u8 *p, u32 v);
s32 func_02106300(u8 *p, u8 *v);
u32 func_0212a438(const char *s);
void _ZdlPv(void *p);
}

struct Unk_02056b74;
struct Unk_020dbe7c;

class Unk_020dbe7c {
public:
    u32 unk_04;
    s32 unk_08;
    s32 unk_0c;
    s32 unk_10;
    u8 unk_14;

    inline Unk_020dbe7c() {
        unk_08 = 0;
        unk_0c = 0;
        unk_10 = 0x1000;
    }
    virtual ~Unk_020dbe7c();
    BOOL func_02056654();
    void func_0205668c(s32 frames, u8 mode, s32 speed, u16 last);
    void func_020566bc();
};

Unk_020dbe7c::~Unk_020dbe7c() {}

BOOL Unk_020dbe7c::func_02056654() {
    switch (unk_14) {
    case 1:
        if (unk_08 >= (s32)unk_04 - 0x1000) {
            return TRUE;
        }
        return FALSE;
    case 3:
        if (unk_08 == 0) {
            return TRUE;
        }
        return FALSE;
    }
    return FALSE;
}

void Unk_020dbe7c::func_0205668c(s32 frames, u8 mode, s32 speed, u16 last) {
    if (last == 0xffff) {
        last = frames - 1;
    }
    unk_04 = frames << 12;
    unk_08 = last << 12;
    unk_10 = speed;
    unk_14 = mode;
    unk_0c = unk_08;
}

void Unk_020dbe7c::func_020566bc() {
    s32 cur = unk_08;
    unk_0c = cur;
    u8 m = unk_14;
    s32 v;
    if (m & 2) {
        s32 sp = unk_10;
        if (cur >= sp) {
            v = cur - sp;
        } else if ((m & 1) == 0) {
            v = cur + (unk_04 - sp);
        } else {
            v = 0;
        }
    } else {
        v = cur + unk_10;
        if (v >= (s32)unk_04) {
            if ((m & 1) == 0) {
                v = v - unk_04;
            } else {
                v = unk_04 - 0x1000;
            }
        }
    }
    unk_08 = v;
}

struct Unk_02056e28 {
    char unk_00[17];
    Unk_02056e28();
    ~Unk_02056e28();
    char *func_02056dec();
    void func_02056df0(const char *src);
};

struct Unk_02056e38 {
    u32 unk_00[14];
    Unk_02056e38();
    ~Unk_02056e38();
    BOOL func_02056e38(u8 *hdr, const char *n1, const char *n2, u8 *x, s32 a, s32 b);
    BOOL func_02056e88(u8 *hdr, s32 i1, s32 i2, u8 *x, s32 a, s32 b);
};

class Unk_020dbe8c : public Unk_020dbe7c {
public:
    Unk_02056e38 unk_18;
    u8 *unk_50;
    Unk_02056e28 unk_54;
    Unk_02056e28 unk_65;
    u8 *unk_78;
    u8 *unk_7c;
    s32 unk_80;
    s32 unk_84;
    s32 unk_88;
    u8 unk_8c;

    Unk_020dbe8c();
    virtual ~Unk_020dbe8c();
    void func_02056d00();
    void func_02056b84(s32 *a, s32 *b);
    BOOL func_02056bf8();
    BOOL func_02056ca4(u8 *hdr, const char *n1, const char *n2, u8 *x, u8 *y, u8 flag);
};

struct Unk_02056b74 {
    u8 *unk_00;
    s8 unk_04;

    Unk_02056b74();
    ~Unk_02056b74();
    void func_02056ae8();
    BOOL func_02056b60();
    BOOL func_02056af0(u8 *hdr, s32 idx);
    BOOL func_02056b28(u8 *hdr, const char *name);
    s8 func_020567e4();
    BOOL func_020567ec(u8 *hdr2, s32 idx2);
    BOOL func_020568cc(u8 *hdr2, const char *name);
    BOOL func_020568f8(u8 *hdr2, s32 idx2);
    BOOL func_02056a4c(u8 *hdr2, const char *name);
    BOOL func_02056a78(u8 *hdr2, s32 a, s32 idx);
    BOOL func_02056ab0(u8 *hdr2, const char *n, const char *n2);
};

Unk_02056b74::Unk_02056b74() {
    func_02056ae8();
}

Unk_02056b74::~Unk_02056b74() {}

void Unk_02056b74::func_02056ae8() {
    unk_04 = -1;
}

BOOL Unk_02056b74::func_02056b60() {
    if (unk_04 != -1) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_02056b74::func_02056af0(u8 *hdr, s32 idx) {
    if (!func_02056b60()) {
        if (idx != -1 && idx < *(u8 *)(hdr + *(s32 *)(hdr + 8) + 5)) {
            unk_04 = idx;
            unk_00 = hdr;
            return TRUE;
        }
        return FALSE;
    }
    return FALSE;
}

BOOL Unk_02056b74::func_02056b28(u8 *hdr, const char *name) {
    if (!func_02056b60()) {
        s32 idx = (s8)func_02057110(hdr, name);
        if (idx != -1) {
            return func_02056af0(hdr, idx);
        }
        return FALSE;
    }
    return FALSE;
}

s8 Unk_02056b74::func_020567e4() {
    return unk_04;
}

BOOL Unk_02056b74::func_020567ec(u8 *hdr2, s32 idx2) {
    u8 *r6;
    u8 *r5;
    u8 *r4;
    u16 stride2;
    u8 *r7;
    u32 r3;
    u32 r2;
    u8 *g;
    u8 *tb2;
    u32 sum;
    u8 *e;
    u32 v5;
    u8 *lst2;
    u32 v1;
    if (func_02056b60()) {
        r4 = NULL;
        if (idx2 != -1) {
            u8 *h = unk_00;
            r6 = h + *(s32 *)(h + 8);
            r5 = r6 + *(u16 *)(r6 + 2);
            for (r3 = 0; r3 < r5[1]; r3++) {
                u8 *tb = r5 + *(u16 *)(r5 + 6) + 4;
                u16 stride = *(u16 *)(r5 + *(u16 *)(r5 + 6));
                r7 = tb + stride * r3;
                u8 *lst = r6 + *(u16 *)(tb + stride * r3);
                for (r2 = 0; r2 < r7[2]; r2++) {
                    if (unk_04 == lst[r2]) {
                        r4 = r7;
                        break;
                    }
                }
                if (r4 != NULL) {
                    break;
                }
            }
            if (r4 != NULL) {
                g = hdr2 + *(u16 *)(hdr2 + 0x34);
                tb2 = g + *(u16 *)(g + 6) + 4;
                stride2 = *(u16 *)(g + *(u16 *)(g + 6));
                e = tb2 + stride2 * idx2;
                v5 = *(u16 *)(tb2 + stride2 * idx2);
                v1 = (u16) * (u32 *)(hdr2 + 0x2c);
                if ((*(u16 *)(e + 2) & 1) == 0) {
                    v5 = (u32)(v5 << 15) >> 16;
                    v1 = (u32)(v1 << 15) >> 16;
                }
                lst2 = r6 + *(u16 *)r4;
                u32 n = 0;
                goto test;
            body:
                {
                    u8 *b4 = r6 + 4;
                    u8 *t = b4 + *(u16 *)(r6 + 0xa);
                    u16 st = *(u16 *)(b4 + *(u16 *)(r6 + 0xa));
                    u8 *ent = r6 + *(s32 *)(t + st * lst2[n] + 4);
                    *(u16 *)(ent + 0x1c) = v5 + v1;
                }
                n++;
            test:
                if (n < r4[2]) {
                    goto body;
                }
                r4[3] |= 1;
                return TRUE;
            }
        }
    }
    return FALSE;
}

BOOL Unk_02056b74::func_020568cc(u8 *hdr2, const char *name) {
    if (name != NULL) {
        return func_020567ec(hdr2, func_02057078(hdr2, name));
    }
    return TRUE;
}

BOOL Unk_02056b74::func_020568f8(u8 *hdr2, s32 idx2) {
    u8 *r5;
    u8 *r6;
    u8 *r4;
    u32 r3;
    u32 r7;
    u32 v;
    u8 *lst;
    u8 *tb2;
    u16 stride2;
    u8 *e;
    u8 *lst2;
    u32 hi;
    u32 e4;
    u32 lo;
    u8 *q;
    u32 c;
    u8 *ent;
    u32 *w;
    if (func_02056b60()) {
        r5 = NULL;
        if (idx2 != -1) {
            u8 *h = unk_00;
            r6 = h + *(s32 *)(h + 8);
            r4 = r6 + *(u16 *)r6;
            for (r3 = 0; r3 < r4[1]; r3++) {
                u8 *tb = r4 + *(u16 *)(r4 + 6) + 4;
                u16 stride = *(u16 *)(r4 + *(u16 *)(r4 + 6));
                u8 *it = tb + stride * r3;
                lst = r6 + *(u16 *)(tb + stride * r3);
                u32 j;
                for (j = 0; j < it[2]; j++) {
                    if (unk_04 == lst[j]) {
                        r5 = it;
                        break;
                    }
                }
                if (r5 != NULL) {
                    break;
                }
            }
            if (r5 != NULL) {
                q = hdr2 + 0x3c;
                tb2 = q + *(u16 *)(hdr2 + 0x42) + 4;
                stride2 = *(u16 *)(q + *(u16 *)(hdr2 + 0x42));
                e = tb2 + stride2 * idx2;
                if (((*(u32 *)e >> 26) & 7) != 5) {
                    v = *(u32 *)(hdr2 + 8);
                    v = v & 0xffff;
                } else {
                    v = *(u32 *)(hdr2 + 0x18);
                    v = v & 0xffff;
                }
                lst2 = r6 + *(u16 *)r5;
                r7 = 0;
                goto test;
            body:
                {
                    u8 *b4 = r6 + 4;
                    u8 *t = b4 + *(u16 *)(r6 + 0xa);
                    u16 st = *(u16 *)(b4 + *(u16 *)(r6 + 0xa));
                    ent = r6 + *(s32 *)(t + st * lst2[r7] + 4);
                    w = (u32 *)(ent + 0x14);
                    *w = *w & 0xc00f0000;
                    *w = *w | (*(u32 *)e + v);
                    e4 = *(u32 *)(e + 4);
                    lo = e4 & 0x7ff;
                    hi = (e4 >> 11) & 0x7ff;
                    c = *(u16 *)(ent + 0x20);
                    *(s32 *)(ent + 0x24) = lo != c ? func_01ffc5a4(lo << 12, c << 12) : 0x1000;
                    c = *(u16 *)(ent + 0x22);
                    *(s32 *)(ent + 0x28) = hi != c ? func_01ffc5a4(hi << 12, c << 12) : 0x1000;
                }
                r7++;
            test:
                if (r7 < r5[2]) {
                    goto body;
                }
                r5[3] |= 1;
                return TRUE;
            }
        }
    }
    return FALSE;
}

BOOL Unk_02056b74::func_02056a4c(u8 *hdr2, const char *name) {
    if (name != NULL) {
        return func_020568f8(hdr2, func_02057100(hdr2, name));
    }
    return TRUE;
}

BOOL Unk_02056b74::func_02056a78(u8 *hdr2, s32 a, s32 idx) {
    BOOL ok = (func_020568f8(hdr2, a) & 1) ? TRUE : FALSE;
    if (ok & func_020567ec(hdr2, idx)) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_02056b74::func_02056ab0(u8 *hdr2, const char *n, const char *n2) {
    BOOL ok = (func_02056a4c(hdr2, n) & 1) ? TRUE : FALSE;
    if (ok & func_020568cc(hdr2, n2)) {
        return TRUE;
    }
    return FALSE;
}

extern "C" {
s32 func_02056744(u8 *hdr, const char *name, s32 p, s32 q, s32 r) {
    Unk_02056b74 l;
    if (l.func_02056b28(hdr, name)) {
        s32 res = l.func_02056a78((u8 *)p, q, r);
        l.func_02056ae8();
        return res;
    }
    return 0;
}

s32 func_02056794(u8 *hdr, const char *name, s32 p, s32 q, s32 r) {
    Unk_02056b74 l;
    if (l.func_02056b28(hdr, name)) {
        s32 res = l.func_02056ab0((u8 *)p, (const char *)q, (const char *)r);
        l.func_02056ae8();
        return res;
    }
    return 0;
}
}

void Unk_020dbe8c::func_02056b84(s32 *a, s32 *b) {
    *b = -1;
    *a = *b;
    u8 *r7 = func_021066e8(unk_7c, 0, (u32)(unk_08 << 4) >> 16);
    if (r7 != NULL) {
        u8 *first = func_02106778(unk_7c, r7[2]);
        r7 = func_02106768(unk_7c, r7[3]);
        *a = first != NULL ? func_02106300(unk_78 + 0x3c, first) : -1;
        u8 *h = unk_78;
        u8 *tbl = h + *(u16 *)(h + 0x34);
        *b = r7 != NULL ? func_02106300(tbl, r7) : -1;
    }
}

BOOL Unk_020dbe8c::func_02056bf8() {
    s32 xy[2];
    unk_88 = unk_84;
    func_020566bc();
    func_02056b84(&xy[0], &xy[1]);
    if (unk_84 == xy[0] || unk_8c != 0) {
        xy[0] = -1;
    }
    if (unk_80 == xy[1]) {
        xy[1] = -1;
    }
    char *n1 = unk_54.func_02056dec();
    char *n2 = unk_65.func_02056dec();
    if (unk_18.func_02056e38(unk_50, n1, n2, unk_78, xy[0], xy[1])) {
        if (xy[0] != -1) {
            unk_84 = xy[0];
        }
        if (xy[1] != -1) {
            unk_80 = xy[1];
        }
        return TRUE;
    }
    return FALSE;
}

void Unk_020dbe8c::func_02056d00() {
    unk_50 = NULL;
    unk_78 = NULL;
    unk_7c = NULL;
    unk_80 = -1;
    unk_84 = -1;
}

BOOL Unk_020dbe8c::func_02056ca4(u8 *hdr, const char *n1, const char *n2, u8 *x, u8 *y, u8 flag) {
    func_02056d00();
    unk_8c = flag;
    unk_54.func_02056df0(n1);
    unk_65.func_02056df0(n2);
    unk_50 = hdr;
    unk_78 = x;
    unk_7c = y;
    func_0205668c(*(u16 *)(y + 4), 0, 0x1000, 0);
    func_02056bf8();
    return TRUE;
}

Unk_020dbe8c::~Unk_020dbe8c() {
    func_02056d00();
}

Unk_020dbe8c::Unk_020dbe8c() {
    unk_50 = NULL;
    unk_78 = NULL;
    unk_7c = NULL;
    unk_80 = -1;
    unk_84 = -1;
    unk_88 = -1;
}

char *Unk_02056e28::func_02056dec() {
    return unk_00;
}

void Unk_02056e28::func_02056df0(const char *src) {
    if (src != NULL) {
        u32 n = func_0212a438(src) + 1;
        for (u32 i = 0; i < 0x11; i++) {
            if (i < n) {
                unk_00[i] = src[i];
            } else {
                unk_00[i] = 0;
            }
        }
    }
}

Unk_02056e28::~Unk_02056e28() {}

Unk_02056e28::Unk_02056e28() {
    for (u32 i = 0; i < 0x11; i++) {
        unk_00[i] = 0;
    }
}

BOOL Unk_02056e38::func_02056e38(u8 *hdr, const char *n1, const char *n2, u8 *x, s32 a, s32 b) {
    s32 i1;
    s32 i2;
    if (n1 != NULL) {
        i1 = func_02057100(hdr, n1);
    } else {
        i1 = -1;
    }
    if (n2 != NULL) {
        i2 = func_02057078(hdr, n2);
    } else {
        i2 = -1;
    }
    return func_02056e88(hdr, i1, i2, x, a, b);
}

static inline u8 *Unk_02056e88_Ent(u8 *d, s32 idx) {
    u16 off = *(u16 *)(d + 6);
    u8 *t = d + off + 4;
    u16 stride = *(u16 *)(d + off);
    return t + stride * idx;
}

BOOL Unk_02056e38::func_02056e88(u8 *hdr, s32 i1, s32 i2, u8 *x, volatile s32 a, volatile s32 b) {
    u8 *p1;
    u8 *e2;
    u8 *r7;
    u8 *e3;
    p1 = Unk_02056e88_Ent(hdr + 0x3c, i1);
    {
        u8 *g = hdr + *(u16 *)(hdr + 0x34);
        u16 off = *(u16 *)(g + 6);
        u8 *tb = g + off + 4;
        u16 stride = *(u16 *)(g + off);
        e2 = tb + stride * i2;
    }
    s32 ta = a;
    r7 = NULL;
    if (ta != -1) {
        r7 = Unk_02056e88_Ent(x + 0x3c, ta);
    }
    s32 tb = b;
    e3 = NULL;
    if (tb != -1) {
        e3 = Unk_02056e88_Ent(x + *(u16 *)(x + 0x34), tb);
    }
    if (p1 != NULL) {
        func_02057180(*(u32 *)p1);
        u32 r6 = *(u32 *)p1 + (u16) * (u32 *)(hdr + 8);
        if (r7 != NULL) {
            u8 *t = func_020570b0(x, a);
            s32 r3 = func_02057180(*(u32 *)r7);
            if (!func_020b8a84(this, t, (r6 & 0xffff) << 3, r3, 2)) {
                return FALSE;
            }
        }
        if (e2 != NULL && e3 != NULL) {
            s32 bb = b;
            u8 *t = func_02057048(x, bb);
            s32 r3 = func_02056fd8(x, bb);
            if (!func_020b8a34((u8 *)unk_00 + 0x1c, t, (*(u16 *)e2 + (u16) * (u32 *)(hdr + 0x2c)) << 3, r3, 3)) {
                func_020b89c8(this);
                return FALSE;
            }
        }
    }
    return TRUE;
}
