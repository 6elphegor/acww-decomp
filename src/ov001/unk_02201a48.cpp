// mwcc-flags: -O4,p
#include "types.h"

extern "C" {
u32 func_ov001_02200724(u32 a);
s32 func_ov001_0220073c(s32 a);
s32 func_ov001_022016d0(void *a, void *b);
s32 func_ov001_022015f8(void *a, void *b);
s32 func_ov001_02201228();
s32 func_ov001_0220176c(void *a);
s32 func_ov001_02201940(s32 a, void *b, s32 *c, void *d);
s32 func_ov001_0220187c(s32 a, void *b, s32 *c, void *d);
s32 func_ov001_02202c6c(s32 a);
void func_ov001_02200870(void *d, void *s, s32 n);
void func_ov001_02200864(void *d, s32 v, s32 n);
s32 func_ov001_02200880(void *a, void *b, s32 n);
s32 func_ov001_02200710(void *a);
u32 func_ov001_02200694();
u32 func_ov001_02200774(u32 a);

extern u8 data_ov001_0222b96c[];
extern s32 data_ov001_0222b8c0;
extern s32 data_ov001_0222a48c;
extern u8 data_ov001_0222a4f0[];
extern u8 data_ov001_0222a4e8[];
struct Unk_ov001_02201d7c_Src {
    u8 pad_00[4];
    s32 len;
    u8 unk_08[0x28];
    u8 unk_30[0x40];
    u8 unk_70[0x40];
    u8 unk_b0[0x40];
    u8 unk_f0[0x40];
};
extern Unk_ov001_02201d7c_Src data_ov001_0222bff4;
extern Unk_ov001_02201d7c_Src data_ov001_0222c124;
extern Unk_ov001_02201d7c_Src data_ov001_0222c254;
extern Unk_ov001_02201d7c_Src data_ov001_0222c2c4;
struct Unk_ov001_0222b8ec {
    u32 pad_00[2];
    u32 unk_08;
    u32 unk_0c;
    u32 unk_10;
    u32 unk_14;
    u8 unk_18;
    u8 unk_19;
};
extern Unk_ov001_0222b8ec data_ov001_0222b8ec;
extern s32 data_ov001_0222b8d0;
extern s16 data_ov001_0222a488[];
extern s32 data_ov001_0222a484;
struct Unk_ov001_02202050_Buf;
extern Unk_ov001_02202050_Buf *data_ov001_0222b8d4;
s32 func_ov001_02202e74(void *pp);
void func_ov001_02202c88(s32 ms);
void *func_ov001_02202c58(s32 n);
s32 func_ov001_02202c90(void *cmd, void *p);
s32 func_ov001_022008d4(u32 a, u32 b, u32 c);
s32 func_ov001_022007d8(s32 a, s32 b, s32 c);
s32 func_ov001_022007e0(s32 s, s32 l, s32 o, void *v, s32 n);
u32 func_ov001_0220078c(u32 ip);
u32 func_ov001_02200774(u32 p);
s32 func_ov001_022007cc(s32 s, void *sa, s32 n);
s32 func_ov001_022011c4(s32 st, void *pkt, void *arr, s32 sock);
void func_ov001_02200688(void *p);
void func_ov001_02200680(s32 s, void *p);
s32 func_ov001_022007fc(s32 n, void *rd, s32 a, s32 b, void *tv);
s32 func_ov001_02200848(s32 s, void *b, s32 n, s32 f, void *sa, s32 *len);
void func_ov001_022007c4(s32 s);
s32 func_ov001_022008a8();
s32 func_ov001_02201d7c(u8 *o);

extern void *data_ov001_0222b8cc;
extern void *data_ov001_0222b8c4;
void func_ov001_02202c44(void *p);
extern u8 data_ov001_0222b8d8[];


s32 func_ov001_02201f98(s32 v);
s32 func_ov001_02201a48(s32 a, u8 *b, s32 *cnt, void *c);
s32 func_ov001_02201b58(s32 a, u8 *b, s32 *cnt, void *c, s32 sock);
s32 func_ov001_02201c14(s32 x);
void func_ov001_02201c4c(s32 n, u8 *p, void *x);
s32 func_ov001_02201c84(u32 *p);
s32 func_ov001_02201d58(u8 *s, s32 n);

s32 func_ov001_02201a48(s32 a, u8 *b, s32 *cnt, void *c)
{
    u8 *p;
    u8 *q;
    if (a != 0) {
        (*cnt)++;
        return a;
    }
    p = b + 0xc;
    q = b + 0x24;
    if (func_ov001_022016d0(c, p + 0x10) < 0) {
        (*cnt)++;
        return a;
    }
    if (func_ov001_02200724(*(u16 *)(q + 2)) == 0) {
        (*cnt)++;
        return a;
    }
    if (q[0] == 7) {
        s32 *w = (s32 *)(q + 4);
        if (func_ov001_0220073c(*(s32 *)(q + 4)) == -2) {
            func_ov001_02201f98(0x14);
        } else if (func_ov001_0220073c(w[0]) == -3) {
            func_ov001_02201f98(0x15);
        } else {
            func_ov001_02201f98(0x18);
        }
        return -1;
    }
    if (q[0] != 1) {
        (*cnt)++;
        return a;
    }
    s32 r = func_ov001_022015f8(q + 4, data_ov001_0222b96c);
    if (r < 0) {
        if (r == -2) {
            func_ov001_02201f98(0x16);
            return -1;
        }
        (*cnt)++;
        return a;
    }
    func_ov001_02200724(*(u16 *)(p + 0xc));
    data_ov001_0222b8c0 = func_ov001_02201228();
    *cnt = 0;
    return 1;
}

s32 func_ov001_02201b58(s32 a, u8 *b, s32 *cnt, void *c, s32 sock)
{
    u8 *p = b + 0xc;
    if (func_ov001_02200724(*(u16 *)(b + 0xc)) < 1) {
        (*cnt)++;
        return a;
    }
    if (p[0xf] != 0x11) {
        (*cnt)++;
        return a;
    }
    if (func_ov001_0220176c(b + 0xc) > 0) {
        (*cnt)++;
        return a;
    }
    switch (func_ov001_02200724(*(u16 *)(p + 6))) {
    case 0x1010:
        a = func_ov001_02201a48(a, b, cnt, c);
        break;
    case 0x2010:
        a = func_ov001_02201940(a, b, cnt, c);
        break;
    case 0x3010:
        a = func_ov001_0220187c(a, b, cnt, c);
        break;
    }
    return a;
}

s32 func_ov001_02201c14(s32 x)
{
    s32 z = 0;
    if (x == -1) {
        data_ov001_0222a48c = x;
        return z;
    }
    if (data_ov001_0222a48c != x) {
        data_ov001_0222a48c = x;
        return func_ov001_02202c6c(x);
    }
    return z;
}

void func_ov001_02201c4c(s32 n, u8 *p, void *x)
{
    s32 i;
    for (i = 0; i < n; i++) {
        func_ov001_02200870(p, x, 6);
        *(u16 *)(p + 6) = func_ov001_02200694();
        *(u16 *)(p + 6) = func_ov001_02200774(*(u16 *)(p + 6));
        p += 8;
    }
}

s32 func_ov001_02201c84(u32 *p)
{
    p[0] = func_ov001_02200710(data_ov001_0222a4f0);
    func_ov001_02200870(p + 1, data_ov001_0222a4f0, p[0]);
    p[9] = 1;
    p[10] = func_ov001_02200710(data_ov001_0222a4e8);
    if (p[10] > 0xd) {
        return -1;
    }
    func_ov001_02200870(p + 11, data_ov001_0222a4e8, p[10]);
    return 0;
}

struct Unk_ov001_02201cd0_Ent {
    s32 len;
    u8 name[0x4c];
    u32 flag;
};

struct Unk_ov001_02201cd0_Hdr {
    s32 count;
    Unk_ov001_02201cd0_Ent e[64];
};

s32 func_ov001_02201cd0(Unk_ov001_02201cd0_Hdr *p)
{
    s32 n;
    s32 r = 0;
    s32 cnt = 0;
    s32 i;
    n = p->count;
    if (n == 0) {
        return 5;
    }
    if ((u32)n > 0x40) {
        n = 0x40;
    }
    for (i = 0; i < n; i++) {
        if ((p->e[i].flag & 1) != 0) {
            if (p->e[i].len == func_ov001_02200710(data_ov001_0222a4f0)) {
                if (func_ov001_02200880(p->e[i].name, data_ov001_0222a4f0, func_ov001_02200710(data_ov001_0222a4f0)) == 0) {
                    cnt++;
                }
            }
        }
    }
    if (cnt > 1) {
        r = 4;
    }
    if (cnt == 0) {
        r = 5;
    }
    return r;
}

s32 func_ov001_02201d58(u8 *s, s32 n)
{
    s32 i;
    for (i = 0; i < n; i++) {
        u32 c = *s++;
        if (c < 0x20 || c > 0x7f) {
            return -1;
        }
    }
    return 0;
}

s32 func_ov001_02201d7c(u8 *o)
{
    u8 *r5 = o + 0x117;
    Unk_ov001_02201d7c_Src *a = &data_ov001_0222bff4;
    Unk_ov001_02201d7c_Src *b = &data_ov001_0222c124;
    Unk_ov001_02201d7c_Src *c = &data_ov001_0222c254;
    Unk_ov001_02201d7c_Src *d = &data_ov001_0222c2c4;
    if (r5 == 0) {
        return -1;
    }
    *(u16 *)o = data_ov001_0222b8ec.unk_08 & data_ov001_0222b8ec.unk_0c;
    func_ov001_02200864(r5, 0, 0x154);
    if ((*(u16 *)o & 1) != 0) {
        func_ov001_02200870(r5, a->unk_30, a->len);
        func_ov001_02200870(r5 + 6, a->unk_70, a->len);
        func_ov001_02200870(r5 + 0xc, a->unk_b0, a->len);
        func_ov001_02200870(r5 + 0x12, a->unk_f0, a->len);
        if (func_ov001_02201d58(a->unk_08, func_ov001_02200710(a->unk_08)) != 0) {
            goto fail;
        }
        func_ov001_02200870(r5 + 0x18, a->unk_08, func_ov001_02200710(a->unk_08));
    }
    if ((*(u16 *)o & 2) != 0) {
        func_ov001_02200870(r5 + 0x39, b->unk_30, b->len);
        func_ov001_02200870(r5 + 0x47, b->unk_70, b->len);
        func_ov001_02200870(r5 + 0x55, b->unk_b0, b->len);
        func_ov001_02200870(r5 + 0x63, b->unk_f0, b->len);
        if (func_ov001_02201d58(b->unk_08, func_ov001_02200710(b->unk_08)) != 0) {
            goto fail;
        }
        func_ov001_02200870(r5 + 0x71, b->unk_08, func_ov001_02200710(b->unk_08));
    }
    if ((*(u16 *)o & 4) != 0) {
        if (func_ov001_02201d58(c->unk_30, c->len - 1) != 0) {
            goto fail;
        }
        func_ov001_02200870(r5 + 0x92, c->unk_30, c->len);
        if (func_ov001_02201d58(c->unk_08, func_ov001_02200710(c->unk_08)) != 0) {
            goto fail;
        }
        func_ov001_02200870(r5 + 0xd2, c->unk_08, func_ov001_02200710(c->unk_08));
    }
    if ((*(u16 *)o & 8) != 0) {
        if (func_ov001_02201d58(d->unk_30, d->len - 1) != 0) {
            goto fail;
        }
        func_ov001_02200870(r5 + 0xf3, d->unk_30, d->len);
        if (func_ov001_02201d58(d->unk_08, func_ov001_02200710(d->unk_08)) != 0) {
            goto fail;
        }
        func_ov001_02200870(r5 + 0x133, d->unk_08, func_ov001_02200710(d->unk_08));
    }
    o[0x116] = 0;
    return 0;
fail:
    func_ov001_02200864(r5, 0, 0x154);
    return -1;
}

s32 func_ov001_02201f8c()
{
    return data_ov001_0222b8d0;
}

s32 func_ov001_02201f98(s32 v)
{
    data_ov001_0222b8d0 = v;
}

void func_ov001_02201fa4(u8 *p)
{
    func_ov001_02200864(data_ov001_0222b8d8, 0, 8);
    data_ov001_0222b8d0 = 1;
    func_ov001_02200864(&data_ov001_0222b8ec, 0, 0x1c);
    data_ov001_0222b8ec.pad_00[0] = (u32)(p + 6);
    data_ov001_0222b8ec.pad_00[1] = *(u16 *)(p + 4);
    data_ov001_0222b8ec.unk_08 = *(u16 *)p & 0xf;
    data_ov001_0222b8ec.unk_19 = p[2];
    data_ov001_0222b8ec.unk_0c = 0;
    data_ov001_0222b8ec.unk_10 = 0xc0a80b01;
    data_ov001_0222b8ec.unk_18 = 0;
}

void func_ov001_02201ff8()
{
    if (data_ov001_0222b8cc != 0) {
        func_ov001_02202c44(data_ov001_0222b8cc);
        data_ov001_0222b8cc = 0;
    }
    if (data_ov001_0222b8c4 != 0) {
        func_ov001_02202c44(data_ov001_0222b8c4);
        data_ov001_0222b8c4 = 0;
    }
}

u32 func_ov001_02202030(u32 a, u32 b)
{
    u32 m = a & b;
    u32 nb = ~b;
    u32 lo = (a & nb) + 1;
    u32 x = m | lo;
    if (x >= (m | nb)) {
        x = m | 1;
    }
    return x;
}

#define FAIL(c) { o[0x116] = (c); func_ov001_02201ff8(); return -1; }

struct Unk_ov001_02202050_Buf {
    s32 sock;
    s32 unk_04;
    u8 unk_08[4];
    u8 unk_0c[0x5ec];
};

s32 func_ov001_02202050(u8 *o)
{
    struct {
        s16 v[4];
        s32 opt;
        s32 tries;
        s32 sa40[2];
        s32 len48;
        s32 fdset[2];
        s32 tv[2];
        u8 sa5c[8];
        u8 st64[0x18];
        u8 cmd7c[0x3c];
        s32 pkt[5];
    } L;
    s32 usec;
    s32 t;
    s32 state;
    s32 res;
    s32 ip;
    Unk_ov001_02202050_Buf *buf;
    s32 sec;
    s32 m1;
    s32 r;
    s32 i;
    s32 ret;
    s32 sl;
    s32 z;

    L.v[0] = ((u16 *)data_ov001_0222a488)[0];
    L.v[1] = ((u16 *)data_ov001_0222a488)[1];
    state = 0;
    L.v[2] = 0;
    L.v[3] = 0;
    L.opt = 1;
    L.tries = state;
    ip = state;
    func_ov001_02200864(L.st64, state, 0x18);
    L.v[0] = *(s16 *)(o + 0x106);
    if (L.v[0] == -1) {
        L.v[0] = 10;
    }
    L.v[2] = *(s16 *)(o + 0x10a);
    if (L.v[2] == -1) {
        L.v[2] = 10;
    }
    L.v[1] = *(s16 *)(o + 0x108);
    if (L.v[1] == -1) {
        L.v[1] = 100;
    }
    L.v[3] = *(s16 *)(o + 0x10c);
    if (L.v[3] == -1) {
        L.v[3] = 100;
    }
    t = *(s16 *)(o + 0x10e);
    if (t == -1) {
        t = 0x7d0;
    }
    func_ov001_02201fa4(o);
    if ((data_ov001_0222b8ec.unk_08 & 1) != 1) {
        func_ov001_02201f98(0x13);
        FAIL(0xf);
    }
    i = 0;
    func_ov001_02201c14(i);
    sl = L.v[1];
    z = i;
    for (;;) {
        if (data_ov001_0222b8c4 != 0) {
            func_ov001_02202c44(data_ov001_0222b8c4);
            data_ov001_0222b8c4 = (void *)z;
        }
        if (func_ov001_02202e74(&data_ov001_0222b8c4) == -1) {
            FAIL(0xf);
        }
        r = func_ov001_02201cd0((Unk_ov001_02201cd0_Hdr *)data_ov001_0222b8c4);
        if (r == 4) {
            FAIL(2);
        }
        if (r == 0) {
            break;
        }
        if (i >= L.v[0]) {
            FAIL(1);
        }
        func_ov001_02202c88(sl);
        i = (s16)(i + 1);
    }
    func_ov001_02201c14(1);
    func_ov001_02200864(L.cmd7c, 0, 0x3c);
    if (func_ov001_02201c84((u32 *)L.cmd7c) != 0) {
        FAIL(0xf);
    }
    data_ov001_0222b8cc = func_ov001_02202c58(0x58);
    if (data_ov001_0222b8cc == 0) {
        FAIL(0xf);
    }
    func_ov001_02200864(data_ov001_0222b8cc, 0, 0x58);
    i = 0;
    if (L.v[0] > 0) {
        do {
            r = func_ov001_02202c90(L.cmd7c, data_ov001_0222b8cc);
            if (r == -1) {
                FAIL(0xf);
            }
            if (r == 0) {
                if (r != 0) {
                    break;
                }
                if (*(s32 *)data_ov001_0222b8cc == 1) {
                    break;
                }
            }
            func_ov001_02202c88(sl);
            i = (s16)(i + 1);
        } while (i < L.v[0]);
    }
    if (i == L.v[0]) {
        FAIL(0xf);
    }
    if (func_ov001_022008d4(0xc0a80b65, -256, 0xc0a80b65) != 0) {
        func_ov001_02201f98(0xc);
        FAIL(0xf);
    }
    func_ov001_02201ff8();
    func_ov001_02201c4c(3, L.st64, o + 0x110);
    data_ov001_0222a484 = func_ov001_022007d8(2, 2, 0);
    if (data_ov001_0222a484 < 0) {
        FAIL(0xf);
    }
    if (func_ov001_022007e0(data_ov001_0222a484, 0xffff, 1, &L.opt, 4) < 0) {
        func_ov001_02201f98(0xb);
        FAIL(0xf);
    }
    func_ov001_02200864(L.sa5c, 0, 8);
    L.sa5c[1] = 2;
    *(u32 *)(L.sa5c + 4) = func_ov001_0220078c(0xc0a80b65);
    *(u16 *)(L.sa5c + 2) = func_ov001_02200774(0x5790);
    if (func_ov001_022007cc(data_ov001_0222a484, L.sa5c, 8) < 0) {
        FAIL(0xf);
    }
    z = 0;
    m1 = -1;
    for (;;) {
        buf = data_ov001_0222b8d4;
        func_ov001_02200864(L.pkt, z, 0x14);
        L.pkt[4] = 0xc0a80b65;
        L.pkt[0] = 0xc0a80b01;
        sec = t / 1000;
        usec = (t % 1000) * 1000;
    again:
        if (state == 1 && data_ov001_0222b8ec.unk_18 != 1) {
            if (data_ov001_0222a484 != -1) {
                func_ov001_022007c4(data_ov001_0222a484);
            }
            data_ov001_0222a484 = -1;
            if (func_ov001_022008a8() != 0) {
                FAIL(0xf);
            }
            if (data_ov001_0222b8c4 != 0) {
                func_ov001_02202c44(data_ov001_0222b8c4);
                data_ov001_0222b8c4 = (void *)z;
            }
            data_ov001_0222b8c4 = func_ov001_02202c58(0x58);
            if (data_ov001_0222b8c4 == 0) {
                FAIL(0xf);
            }
            for (;;) {
                res = func_ov001_02202e74(&data_ov001_0222b8c4);
                if (res == -1) {
                    FAIL(0xf);
                }
                r = func_ov001_02201cd0((Unk_ov001_02201cd0_Hdr *)data_ov001_0222b8c4);
                if (r == 4) {
                    FAIL(2);
                }
                if (r == 0) {
                    break;
                }
                if (i >= L.v[0]) {
                    FAIL(1);
                }
                func_ov001_02202c88(sl);
                i = (s16)(i + 1);
            }
            if (res == -1) {
                FAIL(0xf);
            }
            data_ov001_0222b8cc = func_ov001_02202c58(0x58);
            if (data_ov001_0222b8cc == 0) {
                FAIL(0xf);
            }
            func_ov001_02200864(data_ov001_0222b8cc, z, 0x58);
            i = z;
            if (L.v[z] > 0) {
                do {
                    r = func_ov001_02202c90(L.cmd7c, data_ov001_0222b8cc);
                    if (r == -1) {
                        FAIL(0xf);
                    }
                    if (r == 0) {
                        if (r != 0) {
                            break;
                        }
                        if (*(s32 *)data_ov001_0222b8cc == 1) {
                            break;
                        }
                    }
                    func_ov001_02202c88(sl);
                    i = (s16)(i + 1);
                } while (i < L.v[z]);
            }
            if (i == L.v[z]) {
                FAIL(0xf);
            }
            ip = func_ov001_02202030(data_ov001_0222b8ec.unk_10, data_ov001_0222b8ec.unk_14);
            if (func_ov001_022008d4(ip, data_ov001_0222b8ec.unk_14, ip) != 0) {
                func_ov001_02201f98(0xc);
                FAIL(0xf);
            }
            data_ov001_0222b8ec.unk_18 = 1;
            func_ov001_02201ff8();
            data_ov001_0222a484 = func_ov001_022007d8(2, 2, z);
            if (data_ov001_0222a484 < 0) {
                FAIL(0xf);
            }
            if (func_ov001_022007e0(data_ov001_0222a484, 0xffff, 1, &L.opt, 4) < 0) {
                func_ov001_02201f98(0xb);
                FAIL(0xf);
            }
            func_ov001_02200864(L.sa5c, z, 8);
            L.sa5c[1] = 2;
            *(u32 *)(L.sa5c + 4) = func_ov001_0220078c(ip);
            *(u16 *)(L.sa5c + 2) = func_ov001_02200774(0x5790);
            if (func_ov001_022007cc(data_ov001_0222a484, L.sa5c, 8) < 0) {
                FAIL(0xf);
            }
        }
        res = func_ov001_022011c4(state, L.pkt, L.st64, data_ov001_0222a484);
        if (res == -1) {
            func_ov001_02201f98(state + 0x1000);
            FAIL(0xf);
        }
        func_ov001_02200864(buf, z, 0x5f8);
        func_ov001_02200688(L.fdset);
        func_ov001_02200680(data_ov001_0222a484, L.fdset);
        L.tv[0] = sec;
        L.tv[1] = usec;
        if (func_ov001_022007fc(data_ov001_0222a484 + 1, L.fdset, z, z, L.tv) <= 0) {
            L.tries++;
            if (L.tries > L.v[2]) {
                if (state == 0) {
                    func_ov001_02201f98(0xf);
                } else if (state == 1) {
                    func_ov001_02201f98(0x10);
                } else {
                    func_ov001_02201f98(0x11);
                }
                ret = -1;
                goto done;
            }
            func_ov001_02202c88(L.v[3]);
            goto again;
        }
        L.len48 = 8;
        r = func_ov001_02200848(data_ov001_0222a484, (u8 *)buf + 0xc, 0x5dc, z, L.sa40, &L.len48);
        buf->sock = data_ov001_0222a484;
        buf->unk_04 = func_ov001_02200724((u16)r);
        res = func_ov001_02201b58(state, (u8 *)buf, &L.tries, L.st64, data_ov001_0222a484);
        if (res == 100) {
            ret = 0;
            goto done;
        }
        if (res == -1) {
            ret = -1;
            goto done;
        }
        if (state == res) {
            state = res;
            if (L.tries > L.v[2]) {
                if (res == 0) {
                    func_ov001_02201f98(0xf);
                } else if (res == 1) {
                    func_ov001_02201f98(0x10);
                } else {
                    func_ov001_02201f98(0x11);
                }
                ret = -1;
                goto done;
            }
            func_ov001_02202c88(L.v[3]);
            continue;
        }
        if (res == 2) {
            if (data_ov001_0222a484 != -1) {
                func_ov001_022007c4(data_ov001_0222a484);
            }
            data_ov001_0222a484 = -1;
            if (func_ov001_022008a8() != 0) {
                FAIL(0xf);
            }
            i = z;
            func_ov001_02201c14(4);
            for (;;) {
                if (data_ov001_0222b8c4 != 0) {
                    func_ov001_02202c44(data_ov001_0222b8c4);
                    data_ov001_0222b8c4 = (void *)z;
                }
                if (func_ov001_02202e74(&data_ov001_0222b8c4) == -1) {
                    FAIL(0xf);
                }
                r = func_ov001_02201cd0((Unk_ov001_02201cd0_Hdr *)data_ov001_0222b8c4);
                if (r == 4) {
                    FAIL(2);
                }
                if (r == 0) {
                    break;
                }
                if (i >= L.v[0]) {
                    FAIL(1);
                }
                func_ov001_02202c88(sl);
                i = (s16)(i + 1);
            }
            data_ov001_0222b8cc = func_ov001_02202c58(0x58);
            if (data_ov001_0222b8cc == 0) {
                FAIL(0xf);
            }
            func_ov001_02200864(data_ov001_0222b8cc, z, 0x58);
            i = z;
            if (L.v[z] > 0) {
                do {
                    r = func_ov001_02202c90(L.cmd7c, data_ov001_0222b8cc);
                    if (r == -1) {
                        FAIL(0xf);
                    }
                    if (r == 0) {
                        if (r != 0) {
                            break;
                        }
                        if (*(s32 *)data_ov001_0222b8cc == 1) {
                            break;
                        }
                    }
                    func_ov001_02202c88(sl);
                    i = (s16)(i + 1);
                } while (i < L.v[z]);
            }
            if (i == L.v[z]) {
                FAIL(0xf);
            }
            if (func_ov001_022008d4(ip, data_ov001_0222b8ec.unk_14, ip) != 0) {
                func_ov001_02201f98(0xc);
                FAIL(0xf);
            }
            func_ov001_02201ff8();
            data_ov001_0222a484 = func_ov001_022007d8(2, 2, z);
            if (data_ov001_0222a484 < 0) {
                FAIL(0xf);
            }
            if (func_ov001_022007e0(data_ov001_0222a484, 0xffff, 1, &L.opt, 4) < 0) {
                func_ov001_02201f98(0xb);
                FAIL(0xf);
            }
            func_ov001_02200864(L.sa5c, z, 8);
            L.sa5c[1] = 2;
            *(u32 *)(L.sa5c + 4) = func_ov001_0220078c(ip);
            *(u16 *)(L.sa5c + 2) = func_ov001_02200774(0x5790);
            if (func_ov001_022007cc(data_ov001_0222a484, L.sa5c, 8) < 0) {
                FAIL(0xf);
            }
        }
        state = res;
    }
done:
    if (data_ov001_0222a484 != -1) {
        func_ov001_022007c4(data_ov001_0222a484);
    }
    data_ov001_0222a484 = -1;
    if (func_ov001_022008a8() != 0) {
        FAIL(0xf);
    }
    if (ret != 0) {
        u8 code;
        switch (func_ov001_02201f8c()) {
        case 0xf:
            code = 3;
            break;
        case 0x10:
            code = 4;
            break;
        case 0x11:
            code = 5;
            break;
        case 0x12:
        case 0x13:
            code = 0xf;
            break;
        case 0x14:
            code = 7;
            break;
        case 0x15:
            code = 8;
            break;
        default:
            code = 0xf;
            break;
        }
        FAIL(code);
    }
    if (func_ov001_02201d7c(o) != 0) {
        FAIL(6);
    }
    return 0;
}
}
