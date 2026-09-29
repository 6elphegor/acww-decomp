// mwcc-flags: -O4,p
#include "types.h"

struct Unk_ov001_022006e0_Rng {
    u32 seed;
    u32 mul;
    u32 add;
};

struct Unk_ov001_022008d4_Cfg {
    u8 pad_00[0x10];
    u32 unk_10;
    u32 unk_14;
    u32 unk_18;
};

struct Unk_ov001_02200d58_Sess {
    u8 *unk_00;
    s32 unk_04;
    u32 unk_08;
    u32 unk_0c;
    u32 unk_10;
    s8 unk_14;
    s8 unk_15;
    s8 unk_16;
    s8 unk_17;
    s8 unk_18;
    s8 unk_19;
};

struct Unk_ov001_02200b5c_Rc4 {
    u32 i;
    u32 j;
    u8 *s;
    u32 n;
};

extern "C" {
extern u32 data_ov001_0222b8c8;
extern Unk_ov001_022006e0_Rng data_ov001_0222b8e0;
extern Unk_ov001_022008d4_Cfg data_ov001_0222a490;
extern u32 data_ov065_0228ebd8;
extern s32 (*data_ov001_0222c698)(s32);
extern s32 (*data_ov001_0222c68c)(s32);
extern u32 data_ov001_0222bbec[];
extern u8 data_ov001_0222b908[];
extern u8 data_ov001_0222b90a[];
extern u8 data_ov001_0222a4e8[];
extern u8 *data_ov001_0222b8d4;
extern u8 data_ov001_0222b8d8[];
extern Unk_ov001_02200d58_Sess data_ov001_0222b8ec;
extern u32 data_ov001_0222b8c0;

s32 func_0211d2e0(void *p);
s32 func_ov065_0226148c();
s32 func_ov065_022615f0();
s32 func_ov065_02261610();
s32 func_ov065_0226149c(s32, s32, s32, s32, u8 *);
s32 func_ov065_02260fa4(void *, s32, s64);
s32 func_ov065_02261524(s32, s32, s32, s32, u8 *);
s32 func_ov065_02261110();
s32 func_ov065_02261118(void *);
s32 func_ov001_02203004();
void *func_02115fb4(void *, s32, u32);
void *func_02116048(void *, void *, u32);
void func_021132e0(s32);
void *func_ov001_02202c58(s32);
void func_ov001_02202c44(void *);
void func_ov001_02201f98(s32);

u16 func_ov001_02200774(s32 v);
u32 func_ov001_0220078c(u32 v);
void *func_ov001_02200864(void *p, u32 v, u32 n);
void func_ov001_02200870(void *dst, void *src, u32 n);
void func_ov001_022009b0(char *a, u8 *b, s32 n);
void func_ov001_022009dc(s32 x, char *b, s32 n, char *key, s32 klen);
void func_ov001_02200974(u8 *a, s32 n, u8 *t);
s32 func_ov001_02200a28(u8 *out, s32 n, u8 *key, s32 klen);
void func_ov001_02200ab4(u32 unused, u32 *t);
u32 func_ov001_02200af0(u32 crc, u8 *data, s32 len, s32 init, u32 *tbl);
u8 func_ov001_02200b30(u8 *data, s32 len);
u32 func_ov001_02200b5c(Unk_ov001_02200b5c_Rc4 *st);
void func_ov001_02200ba4(Unk_ov001_02200b5c_Rc4 *st, u8 *out, u8 *in, u32 n);
void func_ov001_02200bd4(Unk_ov001_02200b5c_Rc4 *st, u8 *key, u32 klen, u32 n);
s32 func_ov001_02200c40(u8 *a, u8 *b, u32 n, u32 crc, u8 *x, u8 *y, s32 z);
s32 func_ov001_02200cd4(u8 *a, u8 *b, u32 n, u8 *out, u8 *x, u8 *y, s32 z);
s32 func_ov001_02200d58(s32 a, s32 b, s32 n, s32 c);
void func_ov001_02200dc0(u16 *out, u32 x, u32 y, u32 z, s8 a5, s8 a6, u8 *in);
void func_ov001_02200e20(s32 mode, u8 *out, u8 *in, s16 *len, u16 *flag, u8 *crcout);
s32 func_ov001_02200e7c(u8 *out);
s32 func_ov001_02200f08(s32 a, u8 *b, s32 c);
s32 func_ov001_02200f78(s32 a, u8 *b, s32 c);
s32 func_ov001_022007e4(s32, s32, s32, s32, u8 *, u32);

struct Unk_ov001_02200680_S {
    u32 a;
    u16 b;
    u16 c;
};

void func_ov001_02200680(u32 v, Unk_ov001_02200680_S *s) {
    s->a = v;
    s->b = 1;
}

void func_ov001_02200688(Unk_ov001_02200680_S *s) {
    s->a = 0;
    s->b = 0;
    s->c = 0;
}

u16 func_ov001_02200694(void) {
    if (data_ov001_0222b8c8 == 0) {
        u32 s = 0;
        u32 buf[3];
        func_ov001_02200864(buf, 0, 12);
        if (func_0211d2e0(buf) == 0) {
            s = s + (buf[0] << 10);
            s = s + (buf[1] << 3);
            s = s + buf[2];
        }
        data_ov001_0222b8e0.seed = s;
        data_ov001_0222b8e0.mul = 0x5d588b65;
        data_ov001_0222b8e0.add = 0x269ec3;
        data_ov001_0222b8c8 = 1;
    }
    data_ov001_0222b8e0.seed = data_ov001_0222b8e0.add + data_ov001_0222b8e0.mul * data_ov001_0222b8e0.seed;
    return (u16)(((data_ov001_0222b8e0.seed >> 16) * 0x7fff) >> 16);
}

s32 func_ov001_02200710(char *s) {
    s32 n = 0;
    while (s[n] != 0) {
        n++;
    }
    return n;
}

u16 func_ov001_02200724(s32 v) {
    return (u16)(((v >> 8) & 0xff) | ((v << 8) & 0xff00));
}

u32 func_ov001_0220073c(u32 v) {
    return ((v << 24) & 0xff000000) | (((v << 8) & 0xff0000) | (((v >> 24) & 0xff) | ((v >> 8) & 0xff00)));
}

u16 func_ov001_02200774(s32 v) {
    return (u16)(((v >> 8) & 0xff) | ((v << 8) & 0xff00));
}

u32 func_ov001_0220078c(u32 v) {
    return ((v << 24) & 0xff000000) | (((v << 8) & 0xff0000) | (((v >> 24) & 0xff) | ((v >> 8) & 0xff00)));
}

s32 func_ov001_022007c4() {
    return func_ov065_0226148c();
}

s32 func_ov001_022007cc(s32 a, u8 *b, s32 c) {
    *b = c;
    return func_ov065_022615f0();
}

s32 func_ov001_022007d8() {
    return func_ov065_02261610();
}

void func_ov001_022007e0() {
}

s32 func_ov001_022007e4(s32 a, s32 b, s32 c, s32 d, u8 *p, u32 v) {
    *p = v;
    return func_ov065_0226149c(a, b, c, d, p);
}

struct Unk_ov001_022007fc_P {
    s32 a;
    s32 b;
};

s32 func_ov001_022007fc(s32 a, Unk_ov001_022007fc_P *p, s32 c, s32 d, s32 *q) {
    s64 sum = 0;
    Unk_ov001_022007fc_P t = *p;
    sum += q[0] * 0x1ff6210 / 0x40;
    sum += q[1] * 0x1ff6210 / 0x40;
    return func_ov065_02260fa4(&t, 1, sum);
}

s32 func_ov001_02200848(s32 a, s32 b, s32 c, s32 d, u8 *p, s32 *q) {
    s32 v = *q;
    *p = v;
    return func_ov065_02261524(a, b, c, d, p);
}

void *func_ov001_02200864(void *p, u32 v, u32 n) {
    return func_02115fb4(p, (u8)v, n);
}

void func_ov001_02200870(void *dst, void *src, u32 n) {
    func_02116048(src, dst, n);
}

s32 func_ov001_02200880(u8 *a, u8 *b, s32 n) {
    s32 r = 0;
    s32 t;
    goto test;
loop:
    a++;
    b++;
test:
    t = n;
    n--;
    if (t > 0) {
        r = *a - *b;
        if (r == 0) {
            goto loop;
        }
    }
    return r;
}

s32 func_ov001_022008a8() {
    if (func_ov065_02261110() < 0) {
        return -1;
    }
    return -(func_ov001_02203004() != 0 ? 1 : 0);
}

s32 func_ov001_022008d4(u32 a, u32 b, u32 c) {
    data_ov001_0222a490.unk_10 = func_ov001_0220078c(a);
    data_ov001_0222a490.unk_14 = func_ov001_0220078c(b);
    data_ov001_0222a490.unk_18 = func_ov001_0220078c(c);
    if (func_ov065_02261118(&data_ov001_0222a490) < 0) {
        return -1;
    }
    if (data_ov065_0228ebd8 == 0) {
        do {
            func_021132e0(100);
        } while (data_ov065_0228ebd8 == 0);
    }
    return 0;
}

s32 func_ov001_02200938(s32 a, s32 b) {
    return data_ov001_0222c698(b);
}

s32 func_ov001_02200950(s32 a, s32 b) {
    if (b > 0) {
        return data_ov001_0222c68c(b);
    }
    return 0;
}

void func_ov001_02200974(u8 *a, s32 n, u8 *t) {
    s32 h = n / 2;
    func_ov001_02200870(t, a + h, h);
    func_ov001_02200870(t + h, a, h);
    func_ov001_02200870(a, t, n);
}

void func_ov001_022009b0(char *a, u8 *b, s32 n) {
    s32 h = n / 2;
    s32 i;
    for (i = 0; i < h; i++) {
        b[h + i] ^= a[i];
    }
}

void func_ov001_022009dc(s32 x, char *b, s32 n, char *key, s32 klen) {
    s32 h = n / 2;
    s32 k = x % klen;
    s32 i;
    for (i = 0; i < h; i++) {
        b[i] = i;
        b[i] ^= key[k++];
        if (k >= klen) {
            k = 0;
        }
    }
}

s32 func_ov001_02200a28(u8 *out, s32 n, u8 *key, s32 klen) {
    s32 i;
    u8 *t1;
    u8 *t2;
    t1 = (u8 *)func_ov001_02202c58(n / 2);
    if (t1 == NULL) {
        return -1;
    }
    t2 = (u8 *)func_ov001_02202c58(n);
    if (t2 == NULL) {
        func_ov001_02202c44(t1);
        return -1;
    }
    for (i = 0; i < 2; i++) {
        func_ov001_022009dc(i, (char *)t1, n, (char *)key, klen);
        func_ov001_022009b0((char *)t1, out, n);
        func_ov001_02200974(out, n, t2);
    }
    func_ov001_02202c44(t1);
    func_ov001_02202c44(t2);
    return 0;
}

void func_ov001_02200ab4(u32 unused, u32 *t) {
    u32 r;
    s32 i;
    s32 j;
    for (i = 0; i < 0x100; i++) {
        r = i;
        for (j = 0; j < 8; j++) {
            if (r & 1) {
                r = (r >> 1) ^ 0xedb88320;
            } else {
                r = r >> 1;
            }
        }
        *t++ = r;
    }
}

u32 func_ov001_02200af0(u32 crc, u8 *data, s32 len, s32 init, u32 *tbl) {
    s32 i;
    if (init == 0) {
        func_ov001_02200ab4(init, tbl);
    }
    for (i = 0; i < len; i++) {
        u32 t = crc >> 8;
        crc = crc ^ data[i];
        crc = crc & 0xff;
        crc = t ^ tbl[crc];
    }
    return crc;
}

u8 func_ov001_02200b30(u8 *data, s32 len) {
    u32 r = func_ov001_02200af0(-1, data, len, 0, data_ov001_0222bbec);
    return (u8)(r ^ -1);
}

u32 func_ov001_02200b5c(Unk_ov001_02200b5c_Rc4 *st) {
    u8 *s = st->s;
    u32 n = st->n;
    u32 i = (u8)((st->i + 1) % n);
    u32 si = s[i];
    u32 j = (u8)((si + st->j) % n);
    u32 sj = s[j];
    st->i = i;
    st->j = j;
    s[j] = si;
    s[i] = sj;
    return s[(si + sj) % st->n];
}

void func_ov001_02200ba4(Unk_ov001_02200b5c_Rc4 *st, u8 *out, u8 *in, u32 n) {
    u32 i;
    for (i = 0; i < n; i++) {
        u32 t = (u8)func_ov001_02200b5c(st);
        u32 c = in[i];
        out[i] = t ^ c;
    }
}

void func_ov001_02200bd4(Unk_ov001_02200b5c_Rc4 *st, u8 *key, u32 klen, u32 n) {
    u8 *s = st->s;
    u32 i, j, k;
    st->j = 0;
    st->i = st->j;
    st->n = n;
    for (i = 0; i < n; i++) {
        s[i] = i;
    }
    j = 0;
    k = 0;
    for (i = 0; i < n; i++) {
        u32 si = s[i];
        u32 sj;
        j = (j + key[k] + si) % st->n;
        sj = s[j];
        s[j] = si;
        s[i] = sj;
        k++;
        if (k >= klen) {
            k = 0;
        }
    }
}

s32 func_ov001_02200c40(u8 *a, u8 *b, u32 n, u32 crc, u8 *x, u8 *y, s32 z) {
    Unk_ov001_02200b5c_Rc4 st;
    st.s = (u8 *)func_ov001_02202c58(n);
    if (st.s == NULL) {
        func_ov001_02201f98(2);
        return -1;
    }
    func_ov001_02200870(data_ov001_0222b908, x, 2);
    func_ov001_02200870(data_ov001_0222b90a, y, z);
    func_ov001_02200bd4(&st, data_ov001_0222b908, z + 2, n);
    func_ov001_02200ba4(&st, b, a, n);
    u32 c = func_ov001_02200b30(b, n);
    if (c != crc) {
        func_ov001_02201f98(0x12);
        func_ov001_02202c44(st.s);
        return -1;
    }
    func_ov001_02202c44(st.s);
    return 0;
}

s32 func_ov001_02200cd4(u8 *a, u8 *b, u32 n, u8 *out, u8 *x, u8 *y, s32 z) {
    u16 v;
    Unk_ov001_02200b5c_Rc4 st;
    *out = func_ov001_02200b30(a, n);
    st.s = (u8 *)func_ov001_02202c58(n);
    if (st.s == NULL) {
        return -1;
    }
    v = func_ov001_02200694();
    func_ov001_02200870(x, &v, 2);
    func_ov001_02200870(data_ov001_0222b908, x, 2);
    func_ov001_02200870(data_ov001_0222b90a, y, z);
    func_ov001_02200bd4(&st, data_ov001_0222b908, z + 2, n);
    func_ov001_02200ba4(&st, b, a, n);
    func_ov001_02202c44(st.s);
    return 0;
}

struct Unk_ov001_02200d58_Sock {
    u8 len;
    u8 family;
    u16 port;
    u32 addr;
};

s32 func_ov001_02200d58(s32 a, s32 b, s32 n, s32 c) {
    Unk_ov001_02200d58_Sock sa;
    func_ov001_02200864(&sa, 0, 8);
    sa.family = 2;
    sa.port = func_ov001_02200774(0x5790);
    sa.addr = func_ov001_0220078c(data_ov001_0222b8ec.unk_10);
    if (n == 0xff || data_ov001_0222b8ec.unk_18 == 0) {
        sa.addr = -1;
    }
    return func_ov001_022007e4(c, a, b, 0, (u8 *)&sa, 8);
}

void func_ov001_02200dc0(u16 *out, u32 x, u32 y, u32 z, s8 a5, s8 a6, u8 *in) {
    u8 *o = (u8 *)out;
    out[0] = func_ov001_02200774(1);
    out[1] = 0;
    out[2] = 0;
    out[3] = func_ov001_02200774((u16)x);
    out[4] = 0;
    out[5] = func_ov001_02200774((u16)y);
    out[6] = func_ov001_02200774((u16)z);
    o[0xe] = a5;
    o[0xf] = a6;
    func_ov001_02200870(o + 0x10, in, 8);
}

void func_ov001_02200e20(s32 mode, u8 *out, u8 *in, s16 *len, u16 *flag, u8 *crcout) {
    if (mode == 1) {
        *flag = 1;
        func_ov001_02200cd4(in, out + 4, *len, crcout, out + 2, data_ov001_0222b8d8, 8);
        *(u16 *)out = func_ov001_02200774(*(u16 *)len);
        *len = *len + 4;
    } else {
        func_ov001_02200870(out, in, *len);
    }
}

s32 func_ov001_02200e7c(u8 *out) {
    s16 acc = 0;
    s32 len;
    s32 t;
    u8 *q;
    out[0] = data_ov001_0222b8ec.unk_19;
    out[1] = 1;
    len = (s16)data_ov001_0222b8ec.unk_04;
    func_ov001_02200870(out + 6, data_ov001_0222b8ec.unk_00, len);
    *(u16 *)(out + 2) = func_ov001_02200774((u16)len);
    t = (s16)(((s16)(len + 6) + 1) / 2 * 2);
    *(u16 *)(out + 4) = func_ov001_02200774((u16)t);
    acc += t;
    q = out + t;
    q[0] = 0x60;
    q[1] = 0;
    *(u16 *)(q + 4) = func_ov001_02200774(0);
    {
        u32 w = func_ov001_0220078c(0xe);
        func_ov001_02200870(q + 6, &w, 4);
    }
    *(u16 *)(q + 2) = func_ov001_02200774(4);
    acc += 10;
    return acc;
}

s32 func_ov001_02200f08(s32 a, u8 *b, s32 c) {
    u8 *r4 = data_ov001_0222b8d4;
    u8 buf[8];
    func_ov001_02200864(r4, 0, 0x5dc);
    func_ov001_02200870(buf, b + 0x10, 8);
    func_ov001_02200a28(buf, 8, data_ov001_0222a4e8, func_ov001_02200710((char *)data_ov001_0222a4e8));
    func_ov001_02200dc0((u16 *)r4, 0x3000, 0, 0, 0, 0x11, buf);
    func_ov001_02200d58((s32)r4, 0x18, 0, c);
    return 0;
}

struct Unk_ov001_02200f78_L {
    s8 a;
    s16 b;
    s16 c;
    u8 dat[8];
    Unk_ov001_02200d58_Sock sa;
};

s32 func_ov001_02200f78(s32 a, u8 *b, s32 c) {
    Unk_ov001_02200f78_L l;
    u8 *r4;
    l.a = 0;
    l.b = 0;
    l.c = 0;
    r4 = data_ov001_0222b8d4;
    func_ov001_02200864(&l.sa, 0, 8);
    func_ov001_02200864(r4, 0, 0x5dc);
    l.sa.len = 2;
    l.sa.family = 0;
    l.sa.port = func_ov001_02200774(4);
    l.sa.addr = data_ov001_0222b8ec.unk_08;
    l.sa.addr = func_ov001_0220078c(l.sa.addr);
    l.b = 8;
    func_ov001_02200e20(data_ov001_0222b8c0, r4 + 0x18, (u8 *)&l.sa, &l.b, (u16 *)&l.c, (u8 *)&l.a);
    func_ov001_02200870(l.dat, b + 8, 8);
    if (func_ov001_02200a28(l.dat, 8, data_ov001_0222a4e8, 6) != 0) {
        func_ov001_02201f98(2);
        return -1;
    }
    func_ov001_02200dc0((u16 *)r4, 0x2000, l.b, l.c, l.a, 0x11, l.dat);
    l.b = l.b + 0x18;
    func_ov001_02200d58((s32)r4, l.b, 0, c);
    return 0;
}
}
