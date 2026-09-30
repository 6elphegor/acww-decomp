// mwcc-flags: -O4,p
#include "types.h"

#define BS16(x) ((u16)((((s32)(x)) >> 8) | (((s32)(x)) << 8)))

struct Unk_ov065_02263f24_Pkt {
    u8 unk_00[0x0a];
    u16 unk_0a;
    u8 unk_0c[0x10];
    u32 unk_1c;
    u8 unk_20[0x2c];
    u8 *unk_4c;
};

struct Unk_ov065_02264298_E {
    s32 unk_00;
    u8 unk_04[6];
    u16 unk_0a;
};

extern "C" {
extern u32 data_021fcc2c[];
extern u8 data_ov065_0228b420[];
extern u8 data_ov065_0228b434[];
extern u8 data_ov065_0228eb88;
extern u16 data_ov065_0228eb90;
extern u16 data_ov065_0228eb9c;
extern u32 data_ov065_0228eba4;
extern u32 data_ov065_0228ebb8;
extern u32 data_ov065_0228ebd8;
extern void *data_ov065_0228ebe4;
extern u8 *data_ov065_0228ebe8;
extern u32 data_ov065_0228ebec;
extern u32 data_ov065_0228ebf0;
extern u8 data_ov065_0228ebf4[];
extern Unk_ov065_02264298_E data_ov065_0228ec58[8];

u32 func_01ffa2ec();
void func_01ffa3d4(u32);
u64 func_01ffa6b4();
void func_021132e0(s32);
void func_02113720(void *);
s32 func_02113774(void *);
void func_0211366c(void *);
void func_02115fb4(void *, s32, u32);
void func_02116048(const void *, void *, u32);

s32 func_ov065_0226aa14(u8 *, u8 *, u32);
u32 func_ov065_022648d4(u8 *, u32);
u32 func_ov065_022648ec(u32);
u32 func_ov065_02264900(u8 *, u32, u32);
s32 func_ov065_0226482c(u32);
s32 func_ov065_02264848(u32);

void func_ov065_02263f24(u32 a, u32 b, Unk_ov065_02263f24_Pkt *c);
void func_ov065_02263f98(u8 *p, u32 len, u8 *data, u32 n, u32 x, u8 flag);
void func_ov065_02264110(u8 *p, u32 off, u8 *data, u32 n, u32 x, u32 w);
void func_ov065_022641ec(u8 *p, u32 off, u8 *data, u32 n, u32 x, u16 w);
void func_ov065_02264298(u8 *mac, u32 ip, u32 flag);
u8 *func_ov065_02264360(u32 ip);
void func_ov065_0226439c(u32 ip);
u8 *func_ov065_02264440(u32 ip);
void func_ov065_022644cc();
u8 *func_ov065_0226450c(u32 *out);
void func_ov065_0226459c(u8 *, u8 *, u8 *, u32);
void func_ov065_022645d0(u8 *, u8 *, u8 *, u32, u8 *, u32);
void func_ov065_02264718(u8 *hdr, u32 hlen, u8 *data, u32 n);
s32 func_ov065_02264760(u16 *a, u16 *b);
s32 func_ov065_02264788(u32 ip);
s32 func_ov065_022647e0(u32 ip);
s32 func_ov065_022647fc(u32 ip);

void func_ov065_02263f24(u32 a, u32 b, Unk_ov065_02263f24_Pkt *c)
{
    u8 *h = c->unk_4c;
    u8 *q = h + 0x22;
    *(u16 *)(h + 0x22) = 8;
    *(u16 *)(q + 4) = data_021fcc2c[1];
    *(u16 *)(q + 2) = 0;
    u16 id = data_ov065_0228eb90;
    c->unk_0a = id;
    data_ov065_0228eb90 = data_ov065_0228eb90 + 1;
    *(u16 *)(q + 6) = id;
    u32 t = func_ov065_02264900(q, 8, 0);
    t = func_ov065_02264900((u8 *)a, b, t);
    u32 ck = func_ov065_022648ec((u16)t);
    *(u16 *)(q + 2) = BS16(ck);
    func_ov065_02263f98(q, 8, (u8 *)a, b, c->unk_1c, 1);
}

void func_ov065_02263f98(u8 *p, u32 len, u8 *data, u32 n, u32 x, u8 flag)
{
    u32 i;
    p[-0x14] = 0x45;
    i = 0;
    p[-0x13] = 0;
    data_ov065_0228eb9c = data_ov065_0228eb9c + 1;
    *(u16 *)(p - 0x10) = BS16(data_ov065_0228eb9c);
    p[-0xc] = 0x80;
    p[-0xb] = flag;
    *(u16 *)(p - 8) = BS16((u16)(data_ov065_0228ebd8 >> 16));
    *(u16 *)(p - 6) = BS16((u16)data_ov065_0228ebd8);
    *(u16 *)(p - 4) = BS16((u16)(x >> 16));
    *(u16 *)(p - 2) = BS16((u16)x);
    if (len > 0x5c8) {
        u8 *s = p;
        while (len > 0x5c8) {
            func_ov065_02264110(p, 0, s, 0x5c8, x, i | 0x2000);
            s += 0x5c8;
            len -= 0x5c8;
            i = (u16)(i + 0xb9);
        }
        if (len != 0) {
            if (n != 0) {
                func_ov065_02264110(p, 0, s, len, x, i | 0x2000);
            } else {
                func_ov065_02264110(p, 0, s, len, x, i);
            }
            i = (u16)(i + (len >> 3));
            len = 0;
        }
    }
    if (len + n > 0x5c8) {
        do {
            u32 c = 0x5c8 - len;
            func_ov065_02264110(p, len, data, c, x, i | 0x2000);
            data += c;
            n -= c;
            i = (u16)(i + 0xb9);
            len = 0;
        } while (n > 0x5c8);
    }
    if (len + n != 0) {
        func_ov065_02264110(p, len, data, n, x, i);
    }
}

void func_ov065_02264110(u8 *p, u32 off, u8 *data, u32 n, u32 x, u32 w)
{
    *(u16 *)(p - 0x12) = BS16((u16)(off + 0x14 + n));
    *(u16 *)(p - 0xe) = BS16((u16)w);
    *(u16 *)(p - 0xa) = 0;
    u32 ck = func_ov065_022648d4(p - 0x14, 0x14);
    *(u16 *)(p - 0xa) = BS16(ck);
    if (x != 0x7f000001 && x != data_ov065_0228ebd8) {
        func_ov065_022641ec(p - 0x14, off + 0x14, data, n, x, 0x800);
    }
    if (x == 0x7f000001 || x == data_ov065_0228ebd8 || func_ov065_022647e0(x) != 0) {
        func_02116048(data_ov065_0228b434, p - 0x1c, 8);
        u32 irq = func_01ffa2ec();
        func_ov065_022645d0(data_ov065_0228ebf4, data_ov065_0228ebf4, p - 0x1c, off + 0x1c, data, n);
        func_01ffa3d4(irq);
    }
}

void func_ov065_022641ec(u8 *p, u32 off, u8 *data, u32 n, u32 x, u16 w)
{
    *(u16 *)(p - 2) = BS16(w);
    if (func_ov065_022647e0(x) == 0) {
        u8 *r;
        u32 k = func_ov065_0226482c(x);
        if (k == 0) {
            return;
        }
        r = func_ov065_02264440(k);
        if (r == 0) {
            r = func_ov065_02264360(k);
        }
        if (r == 0) {
            return;
        }
        func_02116048(r, p - 0xe, 6);
    } else {
        p[-0xe] = 1;
        p[-0xd] = 0;
        p[-0xc] = 0x5e;
        p[-0xb] = (x >> 16) & 0x7f;
        p[-0xa] = x >> 8;
        p[-9] = x;
    }
    func_02116048(data_ov065_0228ebf4, p - 8, 6);
    func_ov065_02264718(p - 0xe, off + 0xe, data, n);
}

void func_ov065_02264298(u8 *mac, u32 ip, u32 flag)
{
    u32 now;
    s32 i;
    if (ip == 0x7f000001 || ip == data_ov065_0228ebd8) {
        return;
    }
    if (func_ov065_02264848(ip) == 0) {
        return;
    }
    if (func_ov065_022647e0(ip) != 0) {
        return;
    }
    now = (u16)(func_01ffa6b4() >> 16);
    {
        Unk_ov065_02264298_E *e;
        for (i = 0, e = data_ov065_0228ec58; (u32)i < 8; e++, i++) {
            if (ip == e->unk_00) {
                data_ov065_0228ec58[i].unk_0a = now;
                func_02116048(mac, data_ov065_0228ec58[i].unk_04, 6);
                return;
            }
        }
    }
    if (flag != 0) {
        u32 best = 0;
        u32 idx = 0;
        Unk_ov065_02264298_E *e;
        for (i = 0, e = data_ov065_0228ec58; (u32)i < 8; e++, i++) {
            if (e->unk_00 == 0) {
                idx = i;
                break;
            }
            s32 d = (s16)(now - e->unk_0a);
            if (d > (s32)best) {
                best = (u16)(now - e->unk_0a);
                idx = i;
            }
        }
        data_ov065_0228ec58[idx].unk_00 = ip;
        func_02116048(mac, data_ov065_0228ec58[idx].unk_04, 6);
        data_ov065_0228ec58[idx].unk_0a = now;
    }
}

u8 *func_ov065_02264360(u32 ip)
{
    u32 j = 0;
    u32 z = 0;
    do {
        u32 k;
        func_ov065_0226439c(ip);
        k = z;
        do {
            u8 *r;
            func_021132e0(100);
            r = func_ov065_02264440(ip);
            if (r != 0) {
                return r;
            }
            k++;
        } while (k < 0x14);
        j++;
    } while (j < 8);
    return 0;
}

void func_ov065_0226439c(u32 ip)
{
    u8 b[0x30];
    func_02115fb4(b, 0, 0x2a);
    func_02115fb4(b, 0xff, 6);
    func_02116048(data_ov065_0228ebf4, b + 6, 6);
    *(u16 *)(b + 0xc) = 0x608;
    b[0xf] = 1;
    b[0x10] = 8;
    *(u16 *)(b + 0x12) = 0x406;
    b[0x15] = 1;
    func_02116048(data_ov065_0228ebf4, b + 0x16, 6);
    *(u16 *)(b + 0x1c) = BS16((u16)(data_ov065_0228ebd8 >> 16));
    *(u16 *)(b + 0x1e) = BS16((u16)data_ov065_0228ebd8);
    *(u16 *)(b + 0x26) = BS16((u16)(ip >> 16));
    *(u16 *)(b + 0x28) = BS16((u16)ip);
    func_ov065_02264718(b, 0x2a, 0, 0);
}

u8 *func_ov065_02264440(u32 ip)
{
    u32 irq = func_01ffa2ec();
    u8 *r = 0;
    if (ip == 0x7f000001 || ip == data_ov065_0228ebd8) {
        r = data_ov065_0228ebf4;
    } else if (func_ov065_022647fc(ip) != 0 || func_ov065_022647e0(ip) != 0) {
        r = data_ov065_0228b420;
    } else {
        s32 i;
        Unk_ov065_02264298_E *e;
        for (i = 0, e = data_ov065_0228ec58; (u32)i < 8; e++, i++) {
            if (ip == e->unk_00) {
                u32 t = (u32)(func_01ffa6b4() >> 16);
                data_ov065_0228ec58[i].unk_0a = t;
                r = data_ov065_0228ec58[i].unk_04;
                break;
            }
        }
    }
    func_01ffa3d4(irq);
    return r;
}

void func_ov065_022644cc()
{
    u32 irq = func_01ffa2ec();
    u32 o = data_ov065_0228ebf0;
    u8 *base = data_ov065_0228ebe8;
    u32 lo = base[o];
    u32 v = o + (lo + ((base + o)[1] << 8));
    data_ov065_0228ebf0 = v;
    if (v >= data_ov065_0228ebec) {
        data_ov065_0228ebf0 = 0;
    }
    func_01ffa3d4(irq);
}

u8 *func_ov065_0226450c(u32 *out)
{
    u32 len;
    u32 lim;
    u8 *buf;
    while (data_ov065_0228ebf0 == data_ov065_0228ebb8) {
        data_ov065_0228ebe4 = (void *)data_021fcc2c[1];
        func_02113720(0);
        data_ov065_0228ebe4 = 0;
    }
    lim = data_ov065_0228ebec;
    buf = data_ov065_0228ebe8;
    do {
        u32 o;
        if (lim - data_ov065_0228ebf0 < 2) {
            data_ov065_0228ebf0 = 0;
        }
        o = data_ov065_0228ebf0;
        u8 *pp = buf + o;
        u32 l0 = buf[o];
        len = (u16)(l0 + (pp[1] << 8));
        if (len == 0) {
            data_ov065_0228ebf0 = 0;
        }
    } while (len == 0);
    *out = len - 2;
    return data_ov065_0228ebe8 + data_ov065_0228ebf0 + 2;
}

void func_ov065_0226459c(u8 *a, u8 *b, u8 *c, u32 d)
{
    func_ov065_022645d0(a, b, c, d, 0, 0);
    if (data_ov065_0228ebe4 != 0) {
        if (func_02113774(data_ov065_0228ebe4) == 0) {
            func_0211366c(data_ov065_0228ebe4);
        }
    }
}

void func_ov065_022645d0(u8 *a, u8 *b, u8 *c, u32 d, u8 *data, u32 n)
{
    u8 *buf = data_ov065_0228ebe8;
    u32 lim;
    u32 tot;
    u32 sz;
    u32 wr;
    u32 rd;
    u32 end;
    u32 nw;
    if (buf == 0) {
        return;
    }
    lim = data_ov065_0228ebec;
    if (lim == 0) {
        return;
    }
    tot = d + n;
    if (tot < 8 || tot > 0x5e4) {
        return;
    }
    if (c[0] != data_ov065_0228b434[0]) {
        return;
    }
    if (c[1] != data_ov065_0228b434[1]) {
        return;
    }
    if (c[2] != data_ov065_0228b434[2]) {
        return;
    }
    if (c[6] != 8) {
        return;
    }
    if (c[7] != 0 && c[7] != 6) {
        return;
    }
    sz = (u16)((tot + 9) & ~1);
    wr = data_ov065_0228ebb8;
    end = wr + sz;
    nw = end;
    rd = data_ov065_0228ebf0;
    if (wr < rd) {
        if (rd <= end) {
            return;
        }
    }
    if (end == lim) {
        nw = 0;
        if (rd == 0) {
            return;
        }
    } else if (end > lim) {
        nw = sz;
        if (rd <= sz) {
            return;
        }
    }
    if (end > lim) {
        if (lim - wr >= 2) {
            buf[wr] = 0;
            u8 *pw = data_ov065_0228ebe8 + data_ov065_0228ebb8;
            pw[1] = 0;
        }
        data_ov065_0228ebb8 = 0;
    }
    data_ov065_0228ebe8[data_ov065_0228ebb8] = sz;
    u8 *pw2 = data_ov065_0228ebe8 + data_ov065_0228ebb8;
    pw2[1] = (s32)sz >> 8;
    func_02116048(b, data_ov065_0228ebe8 + data_ov065_0228ebb8 + 2, 6);
    func_02116048(a, data_ov065_0228ebe8 + data_ov065_0228ebb8 + 8, 6);
    func_02116048(c + 6, data_ov065_0228ebe8 + data_ov065_0228ebb8 + 0xe, d - 6);
    if (data != 0 && n != 0) {
        func_02116048(data, data_ov065_0228ebe8 + data_ov065_0228ebb8 + 8 + d, n);
    }
    data_ov065_0228ebb8 = nw;
}

void func_ov065_02264718(u8 *hdr, u32 hlen, u8 *data, u32 n)
{
    s32 r;
    if (hdr + hlen != data) {
        func_02116048(data, hdr + hlen, n);
    }
    func_02116048(data_ov065_0228b434, hdr + 6, 6);
    r = func_ov065_0226aa14(hdr, hdr + 6, hlen + n - 6);
    data_ov065_0228eb88 = (r < 0) ? 1 : 0;
}

s32 func_ov065_02264760(u16 *a, u16 *b)
{
    s32 i;
    for (i = 0; i < 3; i++) {
        u32 x = *a++;
        u32 y = *b++;
        if (x != y) {
            return 1;
        }
    }
    return 0;
}

s32 func_ov065_02264788(u32 ip)
{
    BOOL r = TRUE;
    BOOL c = TRUE;
    BOOL b = TRUE;
    BOOL a = TRUE;
    u32 g = data_ov065_0228ebd8;
    if (g != 0 && ip != g) {
        a = FALSE;
    }
    if (a == 0) {
        if (ip != 0x7f000001) {
            b = FALSE;
        }
    }
    if (b == 0) {
        if (func_ov065_022647fc(ip) == 0) {
            c = FALSE;
        }
    }
    if (c == 0) {
        if (func_ov065_022647e0(ip) == 0) {
            r = FALSE;
        }
    }
    return r;
}

s32 func_ov065_022647e0(u32 ip)
{
    if ((ip & 0xf0000000) == 0xe0000000) {
        return 1;
    }
    return 0;
}

s32 func_ov065_022647fc(u32 ip)
{
    BOOL r = FALSE;
    if (func_ov065_02264848(ip) != 0) {
        u32 m = ~data_ov065_0228eba4;
        if (m == (m & ip)) {
            r = TRUE;
        }
    }
    return r;
}
}
