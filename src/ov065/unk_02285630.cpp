// mwcc-flags: -O4,p
#include "types.h"

// ov065_061: SSL/TLS-like handshake state machine (0x02285630..0x02285eb8)

struct Unk_ov065_02285630_Item {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    u16 unk_0c;
    u16 unk_0e;
};

struct Unk_ov065_02285630_Item8 {
    u8 pad_00[8];
    u16 unk_08;
};

struct Unk_ov065_02285630_Peer {
    u8 pad_00[0x20];
    s32 unk_20;
};

struct Unk_ov065_02285630_Buf {
    u8 *unk_00;
    s32 unk_04;
};

struct Unk_ov065_02285630_Conn {
    s32 unk_00;
    u16 unk_04;
    u8 pad_06[2];
    Unk_ov065_02285630_Peer *unk_08;
    s32 unk_0c;
    u8 pad_10[0x24];
    s32 unk_34;
    void *unk_38;
    s32 unk_3c;
    u8 pad_40[4];
    Unk_ov065_02285630_Buf unk_44;
    s32 unk_4c;
    u8 pad_50[0xc];
    void *unk_5c;
    void *unk_60;
    u8 pad_64[2];
    u16 unk_66;
    u8 unk_68[0x24];
    s32 unk_8c;
    s32 unk_90;
    s32 unk_94;
};

struct Unk_ov065_022856f8_B4 { u8 a, b, c, d; };

typedef Unk_ov065_02285630_Conn Cn;
typedef Unk_ov065_02285630_Item It;

extern "C" {
extern u8 data_ov065_0228e150[];
s32 func_02128930(void *, const void *, u32);
s32 func_ov065_02277ac8(void *);
s32 func_ov065_0227866c(void *, s32);
s32 func_ov065_02278684(void *);
s32 func_ov065_02278570(void *, s32);
s32 func_ov065_022785c8(void *, void *, void *);
s32 func_ov065_02279144();
s32 func_ov065_02283e5c(void *, void *);
s32 func_ov065_02283e88(void *, void *);
s32 func_ov065_02283f34(void *);
s32 func_ov065_0228405c(void *, s32, s32);
s32 func_ov065_02284090(void *, void *, s32);
s32 func_ov065_022840f8(void *);
s32 func_ov065_02284360(Cn *, s32);
s32 func_ov065_02284498(Cn *, s32, void *, s32);
s32 func_ov065_02284514(void *, Cn *, s32, s32, s32, void *, s32);
s32 func_ov065_02284654(Cn *);
s32 func_ov065_02284c0c(Cn *, void *);
s32 func_ov065_02284ca4(Cn *);
s32 func_ov065_02284cb4(Cn *, void *, s32);
s32 func_ov065_02284d34(Cn *, u16, u16);
s32 func_ov065_02284fd0(Cn *, void *, void *, s32);
s32 func_ov065_0228503c(Cn *, void *, void *);
s32 func_ov065_022860ec(Cn *);
s32 func_ov065_02286110(Cn *);
s32 func_ov065_0228611c(Cn *, s32, s32);
s32 func_ov065_02286180(u32, u32);
s32 func_ov065_02286194(void *, s32);
s32 func_ov065_02286034(Cn *, s32);

s32 func_ov065_02285824(Cn *c, void *p, s32 n);
s32 func_ov065_02285780(Cn *c, void *p, s32 n);
s32 func_ov065_02285778(Cn *c, void *p, s32 n);
s32 func_ov065_022856f8(Cn *c, void *p, s32 n);
s32 func_ov065_022856c0(Cn *c);
void func_ov065_02285964(Cn *c);
s32 func_ov065_02285988(Cn *c);
void func_ov065_022859e4(Cn *c, It *e, s32 i);
s32 func_ov065_02285a44(Cn *c, s32 a, u32 seq, void *p, s32 n, s32 *out);
s32 func_ov065_02285b6c(It *a, It *b);
s32 func_ov065_02285b78(Cn *c, s32 mode, void *p, s32 n);
s32 func_ov065_02285c44(Cn *c);
s32 func_ov065_02285c80(Cn *c, void *p, s32 n);
s32 func_ov065_02285cdc(Cn *c);
s32 func_ov065_02285d20(Cn *c, void *p, s32 n);
s32 func_ov065_02285e04(Cn *c, void *p, s32 n);
s32 func_ov065_02285eb8(Cn *c, void *p, s32 n);
s32 func_ov065_02285f3c(Cn *c, void *p, s32 n);

BOOL func_ov065_02285630(Cn *c, s32 t, s32 a, s32 b)
{
    s32 x = a + 3;
    s32 y = b - 3;
    if (t == 100) {
        if (func_ov065_02285824(c, (void *)x, y) == 0) return FALSE;
    } else if (t == 101) {
        if (func_ov065_02285780(c, (void *)x, y) == 0) return FALSE;
    } else if (t == 102) {
        if (func_ov065_02285778(c, (void *)a, b) == 0) return FALSE;
    } else if (t == 103) {
        if (func_ov065_022856f8(c, (void *)x, y) == 0) return FALSE;
    } else if (t == 104) {
        if (func_ov065_022856c0(c) == 0) return FALSE;
    }
    return TRUE;
}

BOOL func_ov065_022856c0(Cn *c)
{
    if (c->unk_0c == 7) return TRUE;
    s32 f;
    switch (c->unk_0c) { case 6: f = 0; break; default: f = 1; break; }
    if (func_ov065_0228611c(c, 2, f) == 0) return FALSE;
    return TRUE;
}

BOOL func_ov065_022856f8(Cn *c, void *p, s32 n)
{
    Unk_ov065_022856f8_B4 t;
    s32 now;
    if (c->unk_34 == 0) return TRUE;
    if (n != 8) return TRUE;
    if (func_02128930(p, data_ov065_0228e150, 4) != 0) return TRUE;
    u32 a = (u32)&t;
    Unk_ov065_022856f8_B4 *q = (Unk_ov065_022856f8_B4 *)((u8 *)p + 4);
    ((Unk_ov065_022856f8_B4 *)a)->a = q->a;
    ((Unk_ov065_022856f8_B4 *)a)->b = q->b;
    ((Unk_ov065_022856f8_B4 *)a)->c = q->c;
    ((Unk_ov065_022856f8_B4 *)a)->d = q->d;
    now = ((s32 (*)(void *))func_ov065_02279144)((void *)a);
    if (func_ov065_02284360(c, now - *(s32 *)&t) != 0) return TRUE;
    return FALSE;
}

s32 func_ov065_02285778(Cn *c, void *p, s32 n)
{
    return func_ov065_02284cb4(c, p, n);
}

BOOL func_ov065_02285780(Cn *c, void *p, s32 n)
{
    s32 lo = func_ov065_02286194(p, 0);
    s32 hi;
    s32 cnt;
    s32 i;
    if (n == 2) {
        hi = lo;
    } else if (n == 4) {
        hi = func_ov065_02286194(p, 2);
    } else {
        if (func_ov065_02286110(c) != 0) return TRUE;
        return FALSE;
    }
    cnt = func_ov065_02278684(c->unk_60);
    for (i = 0; i < cnt; i++) {
        Unk_ov065_02285630_Item8 *e = (Unk_ov065_02285630_Item8 *)func_ov065_0227866c(c->unk_60, i);
        if (func_ov065_02286180(e->unk_08, lo) >= 0 && func_ov065_02286180(e->unk_08, hi) <= 0) {
            if (func_ov065_02284c0c(c, e) == 0) return FALSE;
        }
    }
    return TRUE;
}

BOOL func_ov065_02285824(Cn *c, void *p, s32 n)
{
    if (n != 2) {
        if (func_ov065_02286110(c) != 0) return TRUE;
        return FALSE;
    }
    if (func_ov065_02286034(c, func_ov065_02286194(p, 0)) != 0) return TRUE;
    return FALSE;
}

BOOL func_ov065_02285868(Cn *c, s32 a, void *p, s32 n)
{
    u32 v;
    if (n < 7) {
        if (func_ov065_02286110(c) != 0) return TRUE;
        return FALSE;
    }
    v = func_ov065_02286194(p, 3);
    if (func_ov065_02286034(c, func_ov065_02286194(p, 5)) == 0) return FALSE;
    if (v == c->unk_66) {
        func_ov065_02285964(c);
        if (func_ov065_02285b78(c, a, (u8 *)p + 7, n - 7) == 0) return FALSE;
        if (func_ov065_02285988(c) != 0) return TRUE;
        return FALSE;
    }
    if (func_ov065_02286180(v, c->unk_66) < 0) {
        func_ov065_02285964(c);
        return TRUE;
    }
    {
        s32 flag;
        if (func_ov065_02285a44(c, a, v, (u8 *)p + 7, n - 7, &flag) == 0) return FALSE;
        if (flag != 0) {
            if (func_ov065_022860ec(c) == 0) return FALSE;
        }
    }
    return TRUE;
}

void func_ov065_02285964(Cn *c)
{
    if (c->unk_90 == 0) {
        c->unk_90 = 1;
        c->unk_94 = func_ov065_02279144();
    }
}

BOOL func_ov065_02285988(Cn *c)
{
    s32 i;
    It *e;
again:
    i = func_ov065_02278684(c->unk_5c) - 1;
    while (i >= 0) {
        e = (It *)func_ov065_0227866c(c->unk_5c, i);
        if (e->unk_0c == c->unk_66) {
            if (func_ov065_02285b78(c, e->unk_08, c->unk_44.unk_00 + e->unk_00, e->unk_04) == 0) return FALSE;
            func_ov065_022859e4(c, e, i);
            goto again;
        }
        i--;
    }
    return TRUE;
}

void func_ov065_022859e4(Cn *c, It *e, s32 idx)
{
    s32 mx = 0;
    s32 start = e->unk_00;
    s32 len = e->unk_04;
    s32 n;
    s32 i;
    func_ov065_02278570(c->unk_5c, idx);
    n = func_ov065_02278684(c->unk_5c);
    for (i = 0; i < n; i++) {
        It *q = (It *)func_ov065_0227866c(c->unk_5c, i);
        if (q->unk_00 > start) {
            q->unk_00 = q->unk_00 - len;
            {
                s32 t = q->unk_00 + q->unk_04;
                if (mx <= t) mx = t;
            }
        }
    }
    func_ov065_0228405c(&c->unk_44, start, len);
}

BOOL func_ov065_02285a44(Cn *c, s32 a, u32 seq, void *p, s32 n, s32 *out)
{
    s32 cnt = func_ov065_02278684(c->unk_5c);
    s32 i;
    It rec;
    for (i = 0; i < cnt; i++) {
        It *q = (It *)func_ov065_0227866c(c->unk_5c, i);
        if (q->unk_0c == seq) {
            *out = 0;
            return TRUE;
        }
        if (func_ov065_02286180(q->unk_0c, seq) > 0) break;
    }
    if (func_ov065_022840f8(&c->unk_44) < n) {
        *out = 1;
        return TRUE;
    }
    rec.unk_00 = c->unk_4c;
    rec.unk_04 = n;
    rec.unk_08 = a;
    rec.unk_0c = seq;
    func_ov065_022785c8(c->unk_5c, &rec, (void *)func_ov065_02285b6c);
    if (cnt + 1 != func_ov065_02278684(c->unk_5c)) {
        *out = 1;
        return TRUE;
    }
    func_ov065_02284090(&c->unk_44, p, n);
    if (cnt == 0) {
        if (func_ov065_02284d34(c, c->unk_66, seq - 1) == 0) return FALSE;
    } else {
        It *q = (It *)func_ov065_0227866c(c->unk_5c, cnt);
        if (q->unk_0c == seq) {
            It *r = (It *)func_ov065_0227866c(c->unk_5c, cnt - 1);
            if ((u16)func_ov065_02286180(seq, r->unk_0c) > 1) {
                if (func_ov065_02284d34(c, r->unk_0c + 1, seq - 1) == 0) return FALSE;
            }
        }
    }
    *out = 0;
    return TRUE;
}

s32 func_ov065_02285b6c(It *a, It *b)
{
    return func_ov065_02286180(a->unk_0c, b->unk_0c);
}

BOOL func_ov065_02285b78(Cn *c, s32 mode, void *p, s32 n)
{
    c->unk_66 = c->unk_66 + 1;
    if (mode == 0) {
        if (func_ov065_02285f3c(c, p, n) == 0) return FALSE;
    } else if (mode == 1) {
        if (func_ov065_02285eb8(c, p, n) == 0) return FALSE;
    } else if (mode == 2) {
        if (func_ov065_02285e04(c, p, n) == 0) return FALSE;
    } else if (mode == 3) {
        if (func_ov065_02285d20(c, p, n) == 0) return FALSE;
    } else if (mode == 4) {
        if (func_ov065_02285cdc(c) == 0) return FALSE;
    } else if (mode == 5) {
        if (func_ov065_02285c80(c, p, n) == 0) return FALSE;
    } else if (mode == 6) {
        if (func_ov065_02285c44(c) == 0) return FALSE;
    }
    return TRUE;
}

BOOL func_ov065_02285c44(Cn *c)
{
    if (func_ov065_02284ca4(c) == 0) return FALSE;
    s32 f;
    switch (c->unk_0c) { case 6: f = 0; break; default: f = 1; break; }
    if (func_ov065_0228611c(c, 2, f) == 0) return FALSE;
    return TRUE;
}

BOOL func_ov065_02285c80(Cn *c, void *p, s32 n)
{
    if (c->unk_0c != 1) {
        if (func_ov065_02286110(c) != 0) return TRUE;
        return FALSE;
    }
    func_ov065_02284654(c);
    if (func_ov065_02284ca4(c) == 0) return FALSE;
    if (func_ov065_02284498(c, 2, p, n) != 0) return TRUE;
    return FALSE;
}

BOOL func_ov065_02285cdc(Cn *c)
{
    if (c->unk_0c != 1) {
        if (func_ov065_02286110(c) != 0) return TRUE;
        return FALSE;
    }
    c->unk_0c = 5;
    if (func_ov065_02284498(c, 0, 0, 0) != 0) return TRUE;
    return FALSE;
}

BOOL func_ov065_02285d20(Cn *c, void *p, s32 n)
{
    if (c->unk_0c != 3) {
        if (func_ov065_02286110(c) != 0) return TRUE;
        return FALSE;
    }
    if (n < 0x20) {
        if (func_ov065_02286110(c) != 0) return TRUE;
        return FALSE;
    }
    if (func_ov065_02283e5c(p, c->unk_68) == 0) {
        if (func_ov065_02286110(c) != 0) return TRUE;
        return FALSE;
    }
    if (c->unk_08->unk_20 == 0) {
        if (func_ov065_02284ca4(c) == 0) return FALSE;
        func_ov065_02284654(c);
        return TRUE;
    }
    c->unk_0c = 4;
    if (func_ov065_02284514(c->unk_08, c, c->unk_00, c->unk_04, func_ov065_02279144() - c->unk_8c, (u8 *)p + 0x20, n - 0x20) != 0) return TRUE;
    return FALSE;
}

BOOL func_ov065_02285e04(Cn *c, void *p, s32 n)
{
    u8 buf[0x20];
    if (c->unk_0c != 0) {
        if (func_ov065_02286110(c) != 0) return TRUE;
        return FALSE;
    }
    if (n < 0x40) {
        if (func_ov065_02286110(c) != 0) return TRUE;
        return FALSE;
    }
    if (func_ov065_02283e5c(p, c->unk_68) == 0) {
        if (func_ov065_02286110(c) != 0) return TRUE;
        return FALSE;
    }
    func_ov065_02283e88(buf, (u8 *)p + 0x20);
    if (func_ov065_02284fd0(c, buf, c->unk_38, c->unk_3c) == 0) return FALSE;
    if (c->unk_38 != 0) {
        func_ov065_02277ac8(c->unk_38);
        c->unk_38 = 0;
    }
    c->unk_0c = 1;
    return TRUE;
}

BOOL func_ov065_02285eb8(Cn *c, void *p, s32 n)
{
    u8 a[0x20];
    u8 b[0x20];
    if (c->unk_0c != 2) {
        if (func_ov065_02286110(c) != 0) return TRUE;
        return FALSE;
    }
    if (n < 0x20) {
        if (func_ov065_02286110(c) != 0) return TRUE;
        return FALSE;
    }
    func_ov065_02283e88(a, p);
    func_ov065_02283f34(b);
    func_ov065_02283e88(c->unk_68, b);
    if (func_ov065_0228503c(c, a, b) == 0) return FALSE;
    c->unk_0c = 3;
    return TRUE;
}
}
