// mwcc-flags: -O4,p
#include "types.h"

extern "C" {
void func_02115640();
void func_02128a00(void *d, const void *s, u32 n);
void func_0212899c(void *d, s32 v, u32 n);
s32 func_02128930(const void *a, const void *b, u32 n);
u32 func_0212a438(const void *s);
void func_ov001_022055bc(u8 *dst, u8 *src, s32 n, u8 *extra, u32 k);
void func_ov001_022057b0(u8 *dst, u8 *src, s32 n, u8 *extra, u32 k);
u8 *func_ov001_02206584(u8 *out, u32 id, u8 *data, u32 len);
s32 func_ov001_022065ec(u8 *pkt, u32 type, u8 *hdr, u32 len, u8 *extra);
u8 *func_ov001_0220673c(u8 *pkt, s32 *type, s32 *len);
u8 *func_ov001_022066e8(u8 **cur, u8 *end, s32 *type, s32 *len);
}

struct Unk_ov001_022067b8_Hdr {
    u8 a;
    u8 b;
    u16 c;
    s32 d;
};

extern "C" {
s32 func_ov001_022067b8(u8 *a, u8 *b, u32 c);
s32 func_ov001_022067fc(u8 *a, Unk_ov001_022067b8_Hdr *hdr, u8 *out, u8 *d, u32 e);
u8 *func_ov065_02260cb4();
void func_ov065_02261034(u8 *a, u8 *out);
s32 func_ov065_0226149c(u8 *a, u8 *d, u32 e, u32 f, Unk_ov001_022067b8_Hdr *hdr);
}

struct Unk_ov001_02206b08_Ent {
    u32 len;
    u8 name[0x20];
    u8 unk_24[4];
    u8 unk_28[4];
    u16 unk_2c;
    u16 unk_2e;
};

struct Unk_ov001_02206b08_Tbl {
    u32 count;
    Unk_ov001_02206b08_Ent e[1];
};

extern u8 data_ov001_0222a540[];

struct Unk_ov001_0220681c_Mac {
    u8 b[6];
};

struct Unk_ov001_0220681c_Src {
    u8 unk_00[4];
    Unk_ov001_0220681c_Mac mac;
    u16 len;
    u8 name[0x20];
    u8 pad[0xc0 - 0x2c - 2];
    u16 flags;
};

extern "C" {
u8 *func_ov001_02203e08(u32 a, u32 size);
u32 func_ov001_02203e34();
s32 func_ov001_02207340(u32 a, u32 b, u32 c, u32 d);
s32 func_ov001_02207008();
s32 func_ov001_0220744c(u8 *a, s32 b);
void func_ov001_02203df4(u8 *p);
void func_ov001_02203b1c();
void func_ov001_02203d7c(u8 *p);
void func_ov001_02206fc0();
void func_02115094(u8 *p);
void func_021152e4(u8 *p);
void func_0211512c(u8 *p, u32 a, u32 b, void (*cb)(), u32 c);
void func_021132e0(u32 n);
void func_0212a360(u8 *d, u8 *s);
}

extern s32 data_ov001_0222c8c0;
extern u32 data_ov001_0222a538;
extern s32 data_ov001_0222c860;
extern u8 *data_ov001_0222c8ac;
extern s32 data_ov001_0222c888;
extern s32 data_ov001_0222c868;
extern u8 data_ov001_0222c964[];
extern u8 data_ov001_0222c8dc[];

extern u8 *data_ov001_0222a52c;
extern s32 data_ov001_0222c8a0;
extern u8 data_ov001_0222a548[];
extern u8 data_ov001_0222c8d4[];
extern u8 data_ov001_0222cd84[];

#define Bswap(v) ((u16)((((u16)(v) >> 8) & 0xff) | (((u16)(v) << 8) & 0xff00)))

struct Unk_ov001_02206584_Hdr {
    u16 id;
    u16 len;
};

extern "C" {
BOOL func_ov001_02206364() {
    func_02115640();
    return TRUE;
}

struct Unk_ov001_02206374_Seven {
    u8 b[7];
};

struct Unk_ov001_02206374_Buf {
    u16 a;
    Unk_ov001_02206374_Seven b;
};

void func_ov001_02206374(u8 *pkt) {
    u8 t[9];
    *(u16 *)t = 0x100;
    *(Unk_ov001_02206374_Seven *)(t + 2) = *(Unk_ov001_02206374_Seven *)data_ov001_0222a548;
    u8 *r = func_ov001_02206584(data_ov001_0222a52c, 1, t, 2);
    r = func_ov001_02206584(r, 2, t, 2);
    if (data_ov001_0222c8a0 != 0) {
        r = func_ov001_02206584(r, 5, t, 2);
    }
    r = func_ov001_02206584(r, 3, t + 2, 7);
    if (data_ov001_0222c8a0 != 0) {
        r = func_ov001_02206584(r, 4, data_ov001_0222c8d4, 6);
    }
    func_ov001_022065ec(pkt, 2, data_ov001_0222cd84, (u32)r - (u32)data_ov001_0222a52c + 8, 0);
}

s32 func_ov001_02206418(u8 *pkt, s32 type, u8 *dst, u8 *extra) {
    s32 t, n;
    u8 *r = func_ov001_0220673c(pkt, &t, &n);
    if (r == 0) return 0;
    if (t != type) return 0;
    if (extra != 0) {
        func_ov001_022055bc(dst, r, n, extra, 0x10);
        n -= 8;
    } else {
        func_02128a00(dst, r, n);
    }
    return n;
}

BOOL func_ov001_02206478(u8 *pkt, s32 *out) {
    volatile u32 v2, v3;
    s32 type, len, t, l;
    u8 *cur;
    u8 *r = func_ov001_0220673c(pkt, &type, &len);
    cur = r;
    u32 v1 = 0;
    v2 = 0;
    v3 = 0;
    if (r == 0) return v1;
    if (type != 1) return v1;
    u8 *end = r + len;
    cur = r + 8;
    u8 *p = func_ov001_022066e8(&cur, end, &t, &l);
    if (p != 0) {
        do {
            switch (t) {
            case 1:
                v1 = Bswap(*(u16 *)p);
                break;
            case 2:
                v2 = Bswap(*(u16 *)p);
                break;
            case 5:
                v3 = Bswap(*(u16 *)p);
                break;
            }
            p = func_ov001_022066e8(&cur, end, &t, &l);
        } while (p != 0);
    }
    if (v1 != 1 || v2 != 1) {
        return FALSE;
    }
    if ((s32)v3 >= 1) *out = 1; else *out = 0;
    return TRUE;
}

s32 func_ov001_02206558(u8 *p, u32 id, u8 *data, u32 len) {
    p[0] = 0; p[1] = 0; p[2] = 0; p[3] = 0; p[4] = 0; p[5] = 0; p[6] = 0; p[7] = 0;
    s32 t = (s32)(func_ov001_02206584(p + 8, id, data, len) - p);
    *(u16 *)p = (u16)(t - 8);
    return t;
}

u8 *func_ov001_02206584(u8 *out, u32 id0, u8 *data, u32 len) {
    u16 id = (u16)id0;
    u32 pad;
    out[0] = 0; out[1] = 0; out[2] = 0; out[3] = 0;
    *(u16 *)out = Bswap(id);
    pad = ((len + 11) & ~7) - 4;
    *(u16 *)(out + 2) = Bswap((u16)len);
    out += 4;
    func_0212899c(out, 0, pad);
    func_02128a00(out, data, len);
    out += pad;
    return out;
}

s32 func_ov001_022065ec(u8 *pkt, u32 type, u8 *hdr, u32 len, u8 *extra) {
    u8 *q = pkt;
    u32 sum = 0;
    hdr[0] = 0; hdr[1] = 0; hdr[2] = 0; hdr[3] = 0; hdr[4] = 0; hdr[5] = 0; hdr[6] = 0; hdr[7] = 0;
    *(u16 *)hdr = Bswap((u16)(len - 8));
    if (extra != 0) {
        func_ov001_022057b0(pkt + 6, hdr, len, extra, 0x10);
        len += 8;
    } else {
        func_02128a00(pkt + 6, hdr, len);
    }
    pkt[0] = 0; pkt[1] = 0; pkt[2] = 0; pkt[3] = 0; pkt[4] = 0; pkt[5] = 0;
    *(u16 *)pkt = Bswap((u16)type);
    *(u16 *)(pkt + 2) = Bswap((u16)len);
    q = q + 6;
    q = q + len;
    u8 *p;
    for (p = pkt; p < q; p++) sum += *p;
    *(u16 *)q = Bswap((u16)sum);
    return (s32)(q + 2 - pkt);
}

u8 *func_ov001_022066b0(u8 *pkt, s32 *a, s32 *b) {
    u8 *cur = pkt + 8;
    return func_ov001_022066e8(&cur, cur + Bswap(*(u16 *)pkt), a, b);
}

u8 *func_ov001_022066e8(u8 **cur, u8 *end, s32 *type, s32 *len) {
    u8 *p = *cur;
    if (p >= end) return 0;
    *type = Bswap(*(u16 *)p);
    *len = Bswap(*(u16 *)(p + 2));
    p += 4;
    *cur = p + ((((*len) + 11) & ~7) - 4);
    return p;
}

u8 *func_ov001_0220673c(u8 *pkt, s32 *type, s32 *len) {
    u32 sum = 0;
    *type = Bswap(*(u16 *)pkt);
    *len = Bswap(*(u16 *)(pkt + 2));
    u8 *end = pkt + 6 + *len;
    u8 *p;
    for (p = pkt; p < end; p++) sum += *p;
    if ((u16)sum != Bswap(*(u16 *)end)) return 0;
    return pkt + 6;
}

s32 func_ov001_022067ac(u8 *a, u8 *b, u8 *c, u32 d) {
    return func_ov001_022067b8(a, c, d);
}

s32 func_ov001_022067b8(u8 *a, u8 *b, u32 c) {
    Unk_ov001_022067b8_Hdr h;
    u8 out[4];
    h.a = 8;
    h.b = 2;
    h.d = -1;
    h.c = 0x1e6;
    func_ov065_02261034(func_ov065_02260cb4(), out);
    return func_ov001_022067fc(a, &h, out, b, c);
}

s32 func_ov001_022067fc(u8 *a, Unk_ov001_022067b8_Hdr *hdr, u8 *out, u8 *d, u32 e) {
    s32 r = func_ov065_0226149c(a, d, e, 0, hdr);
    if (r < 0) r = -4;
    return r;
}

BOOL func_ov001_02206b08(Unk_ov001_02206b08_Tbl *a, Unk_ov001_02206b08_Tbl *b, s32 *out) {
    BOOL found = FALSE;
    BOOL ret = FALSE;
    BOOL flagA;
    BOOL flagB;
    Unk_ov001_02206b08_Ent *e1 = a->e;
    Unk_ov001_02206b08_Ent *e2 = b->e;
    u32 cnt;
    u32 i = found;
    if ((u8 *)a->count > (u8 *)0) {
        do {
            u8 buf[0x22] = {0};
            func_02128a00(buf, e1->name, 0x20);
            buf[e1->len] = 0;
            u32 j = 0;
            cnt = b->count;
            if ((u8 *)cnt > (u8 *)0) {
                u32 len = e1->len;
                do {
                    if (len == 0 || len > 0x20) break;
                    if (len == 1) {
                        u32 c = e1->name[0];
                        if (c == 0 || c == 0x20) break;
                    }
                    u32 n = func_0212a438(buf);
                    if (func_02128930(buf, e2->name, n) == 0 && func_02128930(e1->unk_28, e2->unk_28, 4) == 0 &&
                        e1->unk_2e != e2->unk_2e && e1->unk_2e == 0) {
                        found = TRUE;
                        break;
                    }
                    e2++;
                    j++;
                } while (j < cnt);
            }
            if (found != 0) break;
            e1++;
            e2 = b->e;
            i++;
        } while (i < a->count);
    }
    if (found == 0) {
        u8 buf2[0x22] = {0};
        flagB = flagA = FALSE;
        e1 = a->e;
        e2 = b->e;
        u32 m = flagA;
        if ((u8 *)b->count > (u8 *)0) {
            do {
                func_02128a00(buf2, e2->name, 0x20);
                buf2[e2->len] = flagA;
                u32 n = func_0212a438(data_ov001_0222a540);
                if (func_02128930(buf2, data_ov001_0222a540, n) == 0 && e2->unk_2e == 0) {
                    flagB = TRUE;
                    break;
                }
                e2++;
                m++;
            } while (m < b->count);
        }
        i = 0;
        u32 zz = i;
        if ((u8 *)a->count > (u8 *)0) {
            do {
                func_02128a00(buf2, e1->name, 0x20);
                buf2[e1->len] = zz;
                u32 x = func_0212a438(buf2);
                u32 y = func_0212a438(data_ov001_0222a540);
                if (x == y) {
                    u32 n = func_0212a438(data_ov001_0222a540);
                    if (func_02128930(buf2, data_ov001_0222a540, n) == 0 && e1->unk_2e == 0) {
                        flagA = TRUE;
                        break;
                    }
                }
                e1++;
                i++;
            } while (i < a->count);
        }
        if (flagA != 0 && flagB == 0) found = TRUE;
    }
    if (found != 0) {
        *out = i;
        ret = TRUE;
    }
    return ret;
}

s32 func_ov001_0220681c() {
    s32 result = -1;
    s32 iter;
    s32 i;
    volatile s32 j;
    u32 size;
    u8 *buf1;
    u8 *buf2;
    u8 *p1c;
    u8 *p20;
    u8 *p24;
    u32 z0;
    u32 z1;
    u32 z2;
    u32 z3;
    u32 z4;
    u32 z5;
    u32 z6;
    u32 z7;
    s32 idx;
    u8 unkbuf[0x20];
    u8 name[0x30];
    s32 cont;
    s32 t;
    s32 sc;
    u32 zr;
    Unk_ov001_0220681c_Mac *macp;

    idx = 0;
    buf2 = 0;
    size = data_ov001_0222c8c0;
    size = size * 0x30;
    size = size + 0x34;
    buf1 = func_ov001_02203e08(1, size);
    if (buf1 == 0) goto cleanup;
    buf2 = func_ov001_02203e08(1, size);
    if (buf2 == 0) goto cleanup;
    iter = 0;
    z7 = 0;
    z5 = 0;
    z4 = 0;
    z3 = 0;
    zr = 0;
    z0 = 0;
    z1 = 0;
    z2 = 0;
    z6 = 0;
    goto test;
body:
    if (func_ov001_02203e34() >= data_ov001_0222a538) goto end2;
    if (func_ov001_02207340(z0, z0, z0, 0x30bffe) == 0) {
        result = -2;
        goto cleanup;
    }
    func_021152e4(name);
    func_0211512c(name, 0xffb10, z1, func_ov001_02206fc0, 0x13);
    cont = 1;
    result = z2;
    do {
        func_021132e0(10);
        if (func_ov001_02203e34() >= data_ov001_0222a538) break;
        if (data_ov001_0222c860 != 0) break;
        t = func_ov001_02207008();
        while (t != 0) {
            switch (t) {
            case 0x13:
                cont = zr;
                break;
            case 5:
                sc = func_ov001_0220744c(data_ov001_0222c8ac, data_ov001_0222c8c0);
                if (sc > result) {
                    result = sc;
                    func_02115094(name);
                    func_0211512c(name, 0xffb10, z3, func_ov001_02206fc0, 0x13);
                }
                break;
            case 10:
                cont = z4;
                break;
            case 0: case 1: case 2: case 3: case 6: case 7: case 9:
            case 11: case 12: case 13: case 14: case 15: case 16: case 17:
            default:
                cont = z5;
                break;
            case 4: case 8: case 0x12:
                break;
            }
            t = func_ov001_02207008();
        }
    } while (cont != 0);
    func_02115094(name);
    while (func_ov001_02207008() != 0) {}
    if (data_ov001_0222c860 != 0) goto end2;
    if (result >= data_ov001_0222c8c0) {
        result = -6;
        goto cleanup;
    }
    p1c = data_ov001_0222c8ac;
    if (result > 0) {
        p20 = buf1 + 8;
        p24 = buf1;
        macp = (Unk_ov001_0220681c_Mac *)(buf1 + 0x2c);
        i = z6;
        j = z6;
        do {
            Unk_ov001_0220681c_Src *src = (Unk_ov001_0220681c_Src *)p1c;
            func_02128a00(p20, src->name, 0x20);
            *(u32 *)(p24 + 4) = src->len;
            *(p24 + src->len + 8) = z7;
            if ((src->flags & 0x10) != 0) sc = 1; else sc = z7;
            *(u16 *)(p24 + 0x32) = sc;
            *macp = src->mac;
            p20 += 0x30;
            p24 += 0x30;
            macp = (Unk_ov001_0220681c_Mac *)((u8 *)macp + 0x30);
            j++;
            i++;
            p1c += 0xc0;
        } while (i < result);
    }
    *(u32 *)buf1 = result;
    if (data_ov001_0222c888 != 1) {
        if (func_ov001_02206b08((Unk_ov001_02206b08_Tbl *)buf1, (Unk_ov001_02206b08_Tbl *)buf2, &idx) != 0) {
            Unk_ov001_02206b08_Ent *e = (Unk_ov001_02206b08_Ent *)(buf1 + 4) + idx;
            data_ov001_0222c868 = idx;
            func_0212a360(data_ov001_0222c964, (u8 *)e + 4);
            *(Unk_ov001_0220681c_Mac *)data_ov001_0222c8dc = *(Unk_ov001_0220681c_Mac *)e->unk_28;
            func_ov001_02203d7c(unkbuf);
            goto end2;
        }
    }
    func_02128a00(buf2, buf1, size);
    data_ov001_0222c888 = 2;
    func_ov001_02203b1c();
    iter++;
test:
    if (iter >= 0x1e) goto end2;
    if (data_ov001_0222c860 != 0) goto end2;
    goto body;
end2:
    if (iter >= 0x1e) {
        result = -3;
    } else if (func_ov001_02203e34() > data_ov001_0222a538) {
        result = -3;
    } else if (data_ov001_0222c860 != 0) {
        result = -8;
    } else {
        result = 1;
    }
cleanup:
    if (buf1 != 0) func_ov001_02203df4(buf1);
    if (buf2 != 0) func_ov001_02203df4(buf2);
    return result;
}
}
