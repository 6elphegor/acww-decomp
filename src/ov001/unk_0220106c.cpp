// mwcc-flags: -O4,p
#include "types.h"

extern "C" {
extern u8 data_ov001_0222a480[];
extern u8 data_ov001_0222a4e8[];
extern u8 data_ov001_0222b8d8[];
extern u8 *data_ov001_0222b8d4;
extern u32 data_ov001_0222b8ec[];
extern u8 data_ov001_0222b96c[];
extern u8 data_ov001_0222bfec[];

s32 func_ov001_02200710(void *tbl);
s32 func_ov001_02200724(u32 v);
s32 func_ov001_0220073c(u32 v);
u16 func_ov001_02200774(u32 v);
void *func_ov001_02200864(void *p, s32 v, u32 n);
void *func_ov001_02200870(void *d, const void *s, u32 n);
s32 func_ov001_02200880(const void *a, const void *b, u32 n);
s32 func_ov001_02200a28(void *buf, s32 n, void *tbl, s32 t);
s32 func_ov001_02200c40(void *a, void *b, u32 n, u32 c, void *d, void *e, s32 f);
s32 func_ov001_02200d58(void *g, s32 a, s32 b, s32 c);
s32 func_ov001_02200dc0(void *g, s32 a, s32 b, s32 c, s32 d, s32 e, void *f);
s32 func_ov001_02200e20(s32 a, void *b, void *c, s16 *d, s16 *e, s8 *f);
s32 func_ov001_02200e7c(void *p);
s32 func_ov001_02200f08(s32 a, s32 b, s32 c);
s32 func_ov001_02200f78(s32 a, s32 b, s32 c);
void func_ov001_02201c14(s32 a);
s32 func_ov001_02201f8c();
void func_ov001_02201f98(s32 a);
void func_ov001_02202c44(void *p);
void *func_ov001_02202c58(u32 n);

s32 func_ov001_0220106c(s32 unused, u8 *src, s32 arg);
s32 func_ov001_022011c4(s32 sel, s32 a, s32 b, s32 c);
BOOL func_ov001_02201228(u32 x);
s32 func_ov001_02201238(s32 idx, u8 *p, s32 len, u8 *base, u8 *extra);
s32 func_ov001_0220135c(u8 *p, void *dst);
s32 func_ov001_022013a0(u8 *p, u8 *dst);
s32 func_ov001_02201470(u8 *p, u8 *dst);
u32 func_ov001_022015d4(u8 *p, s32 n);
s32 func_ov001_022015f8(u8 *p, u8 *dst);
s32 func_ov001_022016d0(u8 *a, u8 *b);
s32 func_ov001_02201724(s32 a, u8 *b);
s32 func_ov001_0220176c(u8 *p);
s32 func_ov001_0220187c(s32 mode, u8 *q, s32 *cnt, u8 *r3);
s32 func_ov001_02201940(s32 mode, u8 *q, s32 *cnt, u8 *r3);

s32 func_ov001_0220106c(s32 unused, u8 *src, s32 arg)
{
    s8 a;
    s16 b;
    s16 c;
    u8 buf[8];
    u8 *g;
    u8 *p;
    u8 *r6;

    a = 0;
    b = 0;
    c = 0;
    g = data_ov001_0222b8d4;
    func_ov001_02200864(g, 0, 0x5dc);
    p = (u8 *)func_ov001_02202c58(0x210);
    if (p == NULL) {
        func_ov001_02201f98(2);
        return -1;
    }
    func_ov001_02200864(p, 0, 0x210);
    r6 = g + 0x18;
    func_ov001_02200870(data_ov001_0222b8d8, src, 8);
    func_ov001_02200870(buf, data_ov001_0222b8d8, 8);
    b = func_ov001_02200e7c(p + 4);
    if (b < 0) {
        func_ov001_02201f98(3);
        if (p != NULL) {
            func_ov001_02202c44(p);
        }
        return -1;
    }
    *p = 0;
    *(u16 *)(p + 2) = func_ov001_02200774((u16)b);
    b = b + 4;
    func_ov001_02200e20(0, r6, p, &b, &c, &a);
    c = c | 0x10;
    if (func_ov001_02200a28(buf, 8, data_ov001_0222a4e8, 6) != 0) {
        func_ov001_02201f98(2);
        if (p != NULL) {
            func_ov001_02202c44(p);
        }
        return -1;
    }
    func_ov001_02200dc0(g, 0x1000, b, c, a, 0x11, buf);
    b = b + 0x18;
    func_ov001_02200d58(g, b, 0xff, arg);
    if (p != NULL) {
        func_ov001_02202c44(p);
    }
    return 0;
}

s32 func_ov001_022011c4(s32 sel, s32 a, s32 b, s32 c)
{
    switch (sel) {
    case 0:
        func_ov001_02201c14(2);
        return func_ov001_0220106c(a, (u8 *)b, c);
    case 1:
        func_ov001_02201c14(3);
        return func_ov001_02200f78(a, b, c);
    case 2:
        func_ov001_02201c14(5);
        return func_ov001_02200f08(a, b, c);
    default:
        return -1;
    }
}

BOOL func_ov001_02201228(u32 x)
{
    BOOL r = FALSE;
    if ((x & 0x10) != 0) {
        r = TRUE;
    }
    return r;
}

s32 func_ov001_02201238(s32 idx, u8 *p, s32 len, u8 *base, u8 *extra)
{
    u32 flags;
    u8 *key;
    u8 *r6;
    s32 r7;
    s32 n;
    s32 r;
    u8 *x;
    u8 *rec;

    flags = 0;
    if (len <= 0) {
        return -2;
    }
    key = data_ov001_0222a480 + idx;
    do {
        rec = p;
        if (p[0] == key[0]) {
            goto found;
        }
        n = func_ov001_02200724(*(u16 *)(p + 2)) + 4;
        p += n;
        len -= n;
    } while (len > 0);
    return -4;
found:
    p += 4;
    r7 = func_ov001_02200724(*(u16 *)(rec + 2));
    r6 = base + idx * 0x350;
    x = extra + (idx + 3) * 0x80;
    do {
        switch (p[0]) {
        case 3:
            r = func_ov001_02201470(p, r6 + 8);
            flags |= 1;
            break;
        case 4:
            r = func_ov001_02201470(p, r6 + 0x138);
            flags |= 2;
            break;
        case 5:
            r = func_ov001_022013a0(p, r6 + 0x268);
            flags |= 4;
            break;
        case 6:
            r = func_ov001_022013a0(p, r6 + 0x2d8);
            flags |= 8;
            break;
        case 10:
            r = func_ov001_0220135c(p, x);
            break;
        default:
            r = -3;
            break;
        }
        if (r != 0) {
            return r;
        }
        n = func_ov001_02200724(*(u16 *)(p + 2)) + 4;
        p += n;
        r7 -= n;
    } while (r7 > 0);
    data_ov001_0222b8ec[3] |= flags;
    return 0;
}

s32 func_ov001_0220135c(u8 *p, void *dst)
{
    u8 *q = p + 6;
    s32 len = func_ov001_02200724(*(u16 *)(q + 2));
    if (len <= 0) {
        return -1;
    }
    if (q[0] != 0x70) {
        return -1;
    }
    func_ov001_02200870(dst, q + 6, len);
    return 0;
}

s32 func_ov001_022013a0(u8 *p, u8 *dst)
{
    u8 *q = p + 6;
    u32 len;
    s32 t;
    for (;;) {
        len = func_ov001_02200724(*(u16 *)(q + 2));
        t = q[0];
        switch (t) {
        case 0x30:
        case 0x40:
            if (len > 0x40) {
                return -1;
            }
            break;
        case 0x35:
        case 0x45:
            if (len > 0x21) {
                return -1;
            }
            break;
        }
        switch (t) {
        case 0x30:
        case 0x40:
            func_ov001_02200870(dst + 0x30, q + 6, len);
            *(u32 *)(dst + 4) = len;
            break;
        case 0x35:
        case 0x45:
            if (len != 0 && *(q + (len - 1) + 6) != 0) {
                return -1;
            }
            func_ov001_02200870(dst + 8, q + 6, len);
            break;
        default:
            return -1;
        }
        if (*(u16 *)(q + 4) == 0) {
            break;
        }
        q = p + 6 + func_ov001_02200724(*(u16 *)(q + 4));
    }
    return 0;
}

s32 func_ov001_02201470(u8 *p, u8 *dst)
{
    u8 *q = p + 6;
    u32 len;
    s32 t;
    for (;;) {
        len = func_ov001_02200724(*(u16 *)(q + 2));
        t = q[0];
        switch (t) {
        case 0x10:
        case 0x11:
        case 0x12:
        case 0x13:
            if (len > 5) {
                return -1;
            }
            break;
        case 0x20:
        case 0x21:
        case 0x22:
        case 0x23:
            if (len > 0xd) {
                return -1;
            }
            break;
        case 0x15:
        case 0x25:
            if (len > 0x21) {
                return -1;
            }
            break;
        }
        switch (t) {
        case 0x10:
        case 0x20:
            func_ov001_02200870(dst + 0x30, q + 6, len);
            *(u32 *)(dst + 4) = len;
            break;
        case 0x11:
        case 0x21:
            func_ov001_02200870(dst + 0x70, q + 6, len);
            *(u32 *)(dst + 4) = len;
            break;
        case 0x12:
        case 0x22:
            func_ov001_02200870(dst + 0xb0, q + 6, len);
            *(u32 *)(dst + 4) = len;
            break;
        case 0x13:
        case 0x23:
            func_ov001_02200870(dst + 0xf0, q + 6, len);
            *(u32 *)(dst + 4) = len;
            break;
        case 0x15:
        case 0x25:
            if (len != 0 && *(q + (len - 1) + 6) != 0) {
                return -1;
            }
            func_ov001_02200870(dst + 8, q + 6, len);
            break;
        default:
            return -1;
        }
        if (*(u16 *)(q + 4) == 0) {
            break;
        }
        q = p + 6 + func_ov001_02200724(*(u16 *)(q + 4));
    }
    return 0;
}

u32 func_ov001_022015d4(u8 *p, s32 n)
{
    u32 r = 0;
    s32 i;
    u8 *q = p + (n - 1);
    i = r;
    for (; i < n; i++) {
        r = (r << 8) + *q--;
    }
    return r;
}

s32 func_ov001_022015f8(u8 *p, u8 *dst)
{
    u8 *q;
    s32 len;
    func_ov001_02200864(dst, 0, 0x104);
    q = p;
    for (;;) {
        len = func_ov001_02200724(*(u16 *)(q + 2));
        if (len <= 0) {
            return -1;
        }
        switch (q[0]) {
        case 0:
            func_ov001_02200870(dst, q + 6, len);
            break;
        case 1:
            func_ov001_02200870(dst + 0x80, q + 6, len);
            break;
        case 2:
            func_ov001_02200870(dst + 0x100, q + 6, len);
            break;
        case 3:
        case 4:
            if (func_ov001_02200724(q[6]) <= 0) {
                return -2;
            }
            break;
        case 5:
            data_ov001_0222b8ec[4] = func_ov001_0220073c(func_ov001_022015d4(q + 6, len));
            break;
        case 6:
            data_ov001_0222b8ec[5] = func_ov001_0220073c(func_ov001_022015d4(q + 6, len));
            break;
        default:
            return -1;
        }
        if (*(u16 *)(q + 4) == 0) {
            break;
        }
        q = p + func_ov001_02200724(*(u16 *)(q + 4));
    }
    return 0;
}

s32 func_ov001_022016d0(u8 *a, u8 *b)
{
    s32 r = 0;
    s32 t;
    s32 x;
    t = func_ov001_02200710(data_ov001_0222a4e8);
    func_ov001_02200a28(b, 8, data_ov001_0222a4e8, t);
    if (func_ov001_02200880(a, b, 6) != 0) {
        r = -1;
    } else {
        x = func_ov001_02200724(*(u16 *)(a + 6));
        if (x + 1 != func_ov001_02200724(*(u16 *)(b + 6))) {
            r = -2;
        }
    }
    return r;
}

s32 func_ov001_02201724(s32 a, u8 *b)
{
    s32 r;
    s32 i;
    s32 f;
    u8 *t;
    r = 0;
    f = r;
    i = r;
    t = data_ov001_0222b8d8;
    do {
        if (*t != 0) { f = 1; break; }
        t++; i++;
    } while (i < 6);
    if (f != 0) {
        if (func_ov001_02200880(data_ov001_0222b8d8, b, 6) != 0) {
            r = 1;
        }
    } else if (a != 0x1000) {
        r = 2;
    }
    return r;
}

s32 func_ov001_0220176c(u8 *p)
{
    u8 buf[8];
    u8 *r4 = p + 0x18;
    u32 len;
    u8 *m;
    s32 t;
    s32 r;

    func_ov001_02200870(buf, p + 0x10, 8);
    t = func_ov001_02200710(data_ov001_0222a4e8);
    if (func_ov001_02200a28(buf, 8, data_ov001_0222a4e8, t) == -1) {
        func_ov001_02201f98(2);
        return -100;
    }
    r = func_ov001_02201724(func_ov001_02200724(*(u16 *)(p + 6)), buf);
    if (r != 0) {
        return r;
    }
    if (func_ov001_02200724(*(u16 *)(p + 6)) == 0x1000) {
        func_ov001_02200870(data_ov001_0222b8d8, buf, 8);
    }
    if ((func_ov001_02200724(*(u16 *)(p + 0xc)) & 0xf) == 0) {
        return 0;
    }
    len = func_ov001_02200724(*(u16 *)r4);
    m = (u8 *)func_ov001_02202c58(len);
    if (m == NULL) {
        func_ov001_02201f98(2);
        return 0x64;
    }
    if (func_ov001_02200c40(r4 + 4, m, len, p[0xe], r4 + 2, data_ov001_0222b8d8, 8) < 0) {
        func_ov001_02202c44(m);
        if (func_ov001_02201f8c() == 2) {
            return 0x64;
        }
        return 0xc8;
    }
    func_ov001_02200870(r4, m, len);
    *(u16 *)(p + 0xa) = func_ov001_02200774((u16)len);
    func_ov001_02202c44(m);
    return 0;
}

struct Unk_ov001_0220187c_Hdr {
    u8 pad[0x10];
    u8 mac[8];
};

s32 func_ov001_0220187c(s32 mode, u8 *q, s32 *cnt, u8 *r3)
{
    u8 *r4;
    if (mode != 2) {
        (*cnt)++;
        return mode;
    }
    r4 = q + 0x24;
    if (func_ov001_022016d0(r3 + 0x10, ((Unk_ov001_0220187c_Hdr *)(q + 0xc))->mac) < 0) {
        (*cnt)++;
        return mode;
    }
    if (r4[0] != 7) {
        (*cnt)++;
        return mode;
    }
    if (func_ov001_02200724(*(u16 *)(r4 + 2)) == 0) {
        (*cnt)++;
        return mode;
    }
    if (func_ov001_0220073c(*(u32 *)(r4 + 4)) == 0) {
        return 0x64;
    }
    if (func_ov001_0220073c(*(u32 *)(r4 + 4)) == -2) {
        func_ov001_02201f98(0x14);
        return -1;
    }
    if (func_ov001_0220073c(*(u32 *)(r4 + 4)) == -3) {
        func_ov001_02201f98(0x15);
        return -1;
    }
    func_ov001_02201f98(0x18);
    return -1;
}

s32 func_ov001_02201940(s32 mode, u8 *q, s32 *cnt, u8 *r3)
{
    u8 *r7;
    u8 *r4;
    if (mode != 1) {
        (*cnt)++;
        return mode;
    }
    r7 = q + 0xc;
    r4 = q + 0x24;
    if (func_ov001_022016d0(r3 + 8, r7 + 0x10) < 0) {
        (*cnt)++;
        return mode;
    }
    if (func_ov001_02200724(*(u16 *)(r4 + 2)) == 0) {
        (*cnt)++;
        return mode;
    }
    if (r4[0] == 7) {
        if (func_ov001_0220073c(*(u32 *)(r4 + 4)) == -2) {
            func_ov001_02201f98(0x14);
        } else if (func_ov001_0220073c(*(u32 *)(r4 + 4)) == -3) {
            func_ov001_02201f98(0x15);
        } else {
            func_ov001_02201f98(0x18);
        }
        return -1;
    }
    func_ov001_02200864(data_ov001_0222bfec, 0, 0x6a0);
    if (func_ov001_02201238(0, r4, func_ov001_02200724(*(u16 *)(r7 + 0xa)), data_ov001_0222bfec, data_ov001_0222b96c) < 0) {
        (*cnt)++;
        return mode;
    }
    if ((data_ov001_0222b8ec[3] & data_ov001_0222b8ec[2]) == 0) {
        return mode;
    }
    *cnt = 0;
    return 2;
}
}
