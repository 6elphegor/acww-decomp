// mwcc-flags: -O4,p
// mwcc-version: 1.2/sp2p3
#include "types.h"

struct Unk_ov065_02261fd8_B {
    s32 unk_00;
    s32 unk_04;
    u8 unk_08;
    u8 unk_09[7];
    s32 unk_10;
    u16 unk_14;
    u16 unk_16;
    u16 unk_18;
    u16 unk_1a;
    s32 unk_1c;
    s32 unk_20;
};

struct Unk_ov065_02261fd8_N {
    u8 unk_00[0x68];
    Unk_ov065_02261fd8_N *unk_68;
    u8 unk_6c[0x38];
    Unk_ov065_02261fd8_B *unk_a4;
};

struct Unk_ov065_02261fd8_H {
    u8 unk_00[8];
    Unk_ov065_02261fd8_N *unk_08;
};

struct Unk_ov065_02261fd8_E {
    s32 unk_00;
    u8 unk_04[6];
    u16 unk_0a;
};

struct Unk_ov065_02261fd8_Q {
    u32 unk_00;
    u16 unk_04;
    u16 unk_06;
    u8 unk_08[0x24];
    s32 unk_2c;
    u32 unk_30;
    u32 unk_34;
};

struct Unk_ov065_02261e94_R {
    u64 unk_00;
    u64 unk_08;
    u64 unk_10;
};

extern "C" {
extern u8 data_ov065_0228ef2a[];
extern s32 (*data_ov065_0228ebac)(void);
extern void (*data_ov065_0228ebcc)(void);
extern void (*data_ov065_0228ebd0)(u32);
extern u32 data_ov065_0228eba0;
extern u32 data_ov065_0228eba4;
extern u32 data_ov065_0228ebb0;
extern u32 data_ov065_0228ebbc;
extern u32 data_ov065_0228ebc0;
extern u32 data_ov065_0228ebc4;
extern u32 data_ov065_0228ebd4;
extern u32 data_ov065_0228ebd8;
extern u32 data_ov065_0228ebdc;
extern u32 data_ov065_0228ebe0;
extern u32 data_ov065_0228ebf4[];
extern u32 data_ov065_0228ebfc[2];
extern Unk_ov065_02261e94_R data_ov065_0228ec04;
extern Unk_ov065_02261fd8_E data_ov065_0228ec58[8];
extern u32 data_ov065_0228ecb8[25];
extern u32 data_ov065_0228ef00;
extern u32 data_ov065_0228f080;
extern Unk_ov065_02261fd8_Q data_ov065_0228f200[8];
extern u8 data_ov065_0228b428[];
extern Unk_ov065_02261fd8_H data_021fcc2c;

u64 func_01ffa6b4(void);
void func_02115fb4(void *dst, s32 v, s32 n);
void func_02116048(const void *src, void *dst, s32 n);
void func_021132e0(s32 ms);
void func_0211366c(s32 a);
u64 func_02133100(u64 a, u64 b);

void func_ov065_02262334(u8 *buf, u32 len);
u8 *func_ov065_022626b8(u32 *len);
void func_ov065_02262640(u32 len);
s32 func_ov065_022622ec(void);
void func_ov065_02264c20(void);
void func_ov065_02264c44(s32 a);
void func_ov065_02264d24(u32 a);
s32 func_ov065_02264760(const void *a, const void *b);
void func_ov065_022629b0(void);
void func_ov065_02262a18(void);
void func_ov065_022629d0(u32 a, u32 b, s32 c);
void func_ov065_02262998(void);
void func_ov065_02262a34(void);
void func_ov065_02262a44(void *a);
void func_ov065_02262240(void);
}

static inline u32 RD16(const u8 *p) { return (u16)(p[0] << 8 | p[1]); }
#define BS16(x) ((u16)((((s32)(x)) >> 8) | (((s32)(x)) << 8)))

extern "C" {
s32 func_ov065_022617e4(const u8 *name, u32 type, s32 xid);
u32 func_ov065_022617bc(const u8 *p, const u8 **end);
u8 *func_ov065_02261980(u8 *p);
u8 *func_ov065_02261e94(u8 *buf, u32 msgtype, u32 *xidout);
u8 *func_ov065_02261e74(u32 a, u32 size, u8 *dst, u32 used);
u32 func_ov065_02261d60(u32 mode);
u32 func_ov065_02261e00(void);
s32 func_ov065_02261af8(u32 xid, s32 i);
s32 func_ov065_022619f8(u32 *out, s32 mode);
s32 func_ov065_02261aac(void);
void func_ov065_022619a4(void);

s32 func_ov065_02261718(const u8 *a, const u8 *b, s32 c) {
    s32 r;
    if (b == NULL) {
        return -1;
    } else {
        func_ov065_022629b0();
        func_ov065_02262a18();
        func_ov065_022629d0(0, 0x35, (s32)b);
        r = func_ov065_022617e4(a, 1, c);
        func_ov065_02262998();
    }
    return r;
}

s32 func_ov065_02261758(const u8 *s, u32 *out) {
    const u8 *end;
    u32 acc = 0;
    s32 i = 0;
    do {
        acc <<= 8;
        u32 v = func_ov065_022617bc(s, &end);
        if (s == end) {
            return 0;
        }
        s = end;
        if (v > 0xff || (i != 3 && (s = end + 1, *end != '.')) || (i == 3 && *s != 0)) {
            return 0;
        }
        acc |= v;
        i++;
    } while (i < 4);
    *out = acc;
    return 1;
}

u32 func_ov065_022617bc(const u8 *p, const u8 **end) {
    *end = p;
    u32 n = 0;
    for (;;) {
        u8 d = *p - '0';
        if (d > 9) {
            break;
        }
        n = n * 10 + d;
        p++;
        *end = p;
    }
    return n;
}

s32 func_ov065_022617e4(const u8 *name, u32 type, s32 xid) {
    struct {
        u32 len;
        u16 id;
        u16 flags;
        u16 qd;
        u16 an;
        u16 ns;
        u16 ar;
        u8 name[0x30];
    } l;
    u8 *w;
    u8 *lp;
    u32 c;
    s32 result;

    l.id = BS16(xid);
    if (type == 1) {
        l.flags = 1;
    } else {
        l.flags = 0x1001;
    }
    l.qd = 0x100;
    l.an = 0;
    l.ns = 0;
    l.ar = 0;
    lp = l.name;
    w = lp + 1;
    l.len = 0;
    c = *name++;
    while (c != 0) {
        if (c != '.') {
            if (w - (u8 *)&l.id >= 0x3c) {
                return -1;
            }
            *w = c;
            w++;
            l.len++;
        } else {
            *lp = l.len;
            lp = w;
            w++;
            l.len = 0;
        }
        c = *name++;
    }
    *lp = l.len;
    *w = 0;
    w[1] = type >> 8;
    w[2] = type;
    w[3] = 0;
    w[4] = 1;
    func_ov065_02262334((u8 *)&l.id, (w + 5) - (u8 *)&l.id);

    result = 0;
    u32 start = (u32)(func_01ffa6b4() >> 16);
    goto test;
loop:
    if (func_ov065_022622ec() == 0) {
        func_ov065_02264c20();
        goto test;
    }
    {
        u8 *p = func_ov065_022626b8(&l.len);
        if (l.len > 0xc) {
            u32 id = BS16(*(u16 *)p);
            if (xid == id) {
                u32 rc = p[3] & 0xf;
                if (rc == 3) {
                    result = -1;
                } else if (rc == 0) {
                    u32 qd;
                    u32 n;
                    u8 *end;
                    u8 *q;
                    end = p + l.len;
                    qd = (u16)(p[4] << 8 | p[5]);
                    q = p + 0xc;
                    n = qd - 1;
                    if (qd != 0) {
                        do {
                            q = func_ov065_02261980(q) + 4;
                        } while (n--);
                    }
                    while (q < end) {
                        u32 rdl;
                        u8 *a;
                        u8 *b;
                        u8 *pa;
                        u8 *pb;
                        q = func_ov065_02261980(q);
                        rdl = RD16(q + 8);
                        if (type == RD16(q)) {
                            a = q + 8;
                            pa = a + rdl;
                            b = q + 6;
                            pb = b + rdl;
                            result = (RD16(pb) << 16) | RD16(pa);
                            break;
                        }
                        q += rdl + 10;
                    }
                }
            }
        }
        func_ov065_02262640(l.len);
    }
test:
    if (data_ov065_0228ebac() != 0 && result == 0) {
        u32 now = (u32)(func_01ffa6b4() >> 16);
        if ((s32)(now - start) < 15) {
            goto loop;
        }
    }
    return result;
}

u8 *func_ov065_02261980(u8 *p) {
    u32 c = *p++;
    while (c != 0) {
        if ((c & 0xc0) == 0xc0) {
            p++;
            return p;
        }
        u8 *n = p + c;
        p = n + 1;
        c = *n;
    }
    return p;
}

void func_ov065_022619a4(void) {
    func_ov065_022629b0();
    func_ov065_02262a18();
    func_ov065_022629d0(0x44, 0x43, data_ov065_0228ebb0);
    u8 *const buf = data_ov065_0228ef2a;
    u8 *p = func_ov065_02261e94(buf, 7, 0);
    *p = 0xff;
    p++;
    u8 *e = func_ov065_02261e74(0, 0x12c, p, p - buf);
    func_ov065_02262334(buf, e - buf);
    func_ov065_02262998();
}
s32 func_ov065_022619f8(u32 *out, s32 mode) {
    s32 r;
    s32 i;
    u32 v;
    func_ov065_022629b0();
    func_ov065_02262a18();
    if (mode == 1) {
        func_ov065_022629d0(0x44, 0x43, data_ov065_0228ebb0);
    } else {
        func_ov065_022629d0(0x44, 0x43, -1);
    }
    for (i = 0; i < 4; i++) {
        r = func_ov065_02261af8(func_ov065_02261d60(mode), i);
        if (r != 0) {
            break;
        }
    }
    func_ov065_02262998();
    if (r == 2) {
        *out = data_ov065_0228ebdc >> 1;
        data_ov065_0228ebc4 = (data_ov065_0228ebdc * 3) >> 3;
        return 1;
    }
    v = data_ov065_0228ebc4 >> 1;
    data_ov065_0228ebc4 = v;
    *out = v;
    switch (mode) {
    case 1:
        if (v < 0x3c) {
            *out = 1;
            data_ov065_0228ebc4 = data_ov065_0228ebdc >> 3;
        }
        break;
    case 2:
        if (v < 0x3c) {
            *out = 1;
        }
        break;
    }
    return 0;
}

s32 func_ov065_02261aac(void) {
    s32 r;
    s32 i;
    func_ov065_022629b0();
    func_ov065_02262a18();
    func_ov065_022629d0(0x44, 0x43, -1);
    for (i = 0; i < 4; i++) {
        r = func_ov065_02261af8(func_ov065_02261e00(), i);
        if (r == 1) {
            break;
        }
    }
    func_ov065_02262998();
    if (r == 1) {
        return 1;
    }
    return 0;
}

s32 func_ov065_02261af8(u32 xid, s32 i) {
    u32 len;
    s32 result;
    u32 start;
    s32 timeout;
    u8 *p;

    timeout = (i + 1) * 15;
    start = (u32)(func_01ffa6b4() >> 16);
    result = 0;
    goto test;
loop:
    if (func_ov065_022622ec() == 0) {
        func_ov065_02264c20();
        goto test;
    }
    {
        p = func_ov065_022626b8(&len);
        if (len > 0xf0 && p[0] == 2) {
            u32 rx = (BS16(*(u16 *)(p + 4)) << 16) | BS16(*(u16 *)(p + 6));
            if (xid == rx && func_ov065_02264760(p + 0x1c, data_ov065_0228ebf4) == 0) {
                u32 ip;
                u8 *end;
                u8 *o;
                result = 3;
                ip = ((u16)(p[0x10] << 8 | p[0x11]) << 16) | (u16)(p[0x12] << 8 | p[0x13]);
                end = p + len;
                if (p[0xec] == 0x63 && p[0xed] == 0x82 && p[0xee] == 0x53 && p[0xef] == 0x63) {
                    o = p + 0xf0;
                    while (o < end) {
                        s32 c = *o++;
                        if (c == 0xff) {
                            break;
                        }
                        switch (c) {
                        case 0:
                            continue;
                        case 1:
                            data_ov065_0228eba4 = ((u16)(o[1] << 8 | o[2]) << 16) | (u16)(o[3] << 8 | o[4]);
                            break;
                        case 3:
                            data_ov065_0228ebc0 = ((u16)(o[1] << 8 | o[2]) << 16) | (u16)(o[3] << 8 | o[4]);
                            break;
                        case 6:
                            if (o[0] < 8) {
                                data_ov065_0228ebfc[1] = 0;
                            } else {
                                data_ov065_0228ebfc[1] = ((u16)(o[5] << 8 | o[6]) << 16) | (u16)(o[7] << 8 | o[8]);
                            }
                            data_ov065_0228ebfc[0] = ((u16)(o[1] << 8 | o[2]) << 16) | (u16)(o[3] << 8 | o[4]);
                            break;
                        case 0x33:
                            data_ov065_0228ebdc = ((u16)(o[1] << 8 | o[2]) << 16) | (u16)(o[3] << 8 | o[4]);
                            break;
                        case 0x35:
                            if (o[1] == 2) {
                                data_ov065_0228ebe0 = ip;
                                result = 1;
                            } else if (o[1] == 5) {
                                data_ov065_0228ebd8 = ip;
                                result = 2;
                            }
                            break;
                        case 0x36:
                            data_ov065_0228ebb0 = ((u16)(o[1] << 8 | o[2]) << 16) | (u16)(o[3] << 8 | o[4]);
                            break;
                        }
                        o += o[0] + 1;
                    }
                }
            }
        }
        func_ov065_02262640(len);
    }
test:
    if (data_ov065_0228ebac() != 0 && result == 0) {
        u32 now = (u32)(func_01ffa6b4() >> 16);
        if ((s32)(now - start) < timeout) {
            goto loop;
        }
    }
    return result;
}

u32 func_ov065_02261d60(u32 mode) {
    u32 xid;
    u8 *const buf = data_ov065_0228ef2a;
    u8 *p = func_ov065_02261e94(buf, 3, &xid);
    if (mode == 0) {
        p[0] = 0x32;
        p[1] = 4;
        p[2] = (u16)(data_ov065_0228ebe0 >> 16) >> 8;
        p[3] = data_ov065_0228ebe0 >> 16;
        p[4] = (u16)data_ov065_0228ebe0 >> 8;
        p[5] = data_ov065_0228ebe0;
        p[6] = 0x36;
        p[7] = 4;
        p[8] = (u16)(data_ov065_0228ebb0 >> 16) >> 8;
        p[9] = data_ov065_0228ebb0 >> 16;
        p[10] = (u16)data_ov065_0228ebb0 >> 8;
        p[11] = data_ov065_0228ebb0;
        p += 12;
    }
    *p = 0xff;
    p++;
    u8 *e = func_ov065_02261e74(0, 0x12c, p, p - buf);
    func_ov065_02262334(buf, e - buf);
    return xid;
}

u32 func_ov065_02261e00(void) {
    u32 xid;
    u8 *const buf = data_ov065_0228ef2a;
    u8 *p = func_ov065_02261e94(buf, 1, &xid);
    if (data_ov065_0228ebe0 != 0) {
        p[0] = 0x32;
        p[1] = 4;
        p[2] = (u16)(data_ov065_0228ebe0 >> 16) >> 8;
        p[3] = data_ov065_0228ebe0 >> 16;
        p[4] = (u16)data_ov065_0228ebe0 >> 8;
        p[5] = data_ov065_0228ebe0;
        p += 6;
    }
    *p = 0xff;
    p++;
    u8 *e = func_ov065_02261e74(0, 0x12c, p, p - buf);
    func_ov065_02262334(buf, e - buf);
    return xid;
}

u8 *func_ov065_02261e74(u32 a, u32 size, u8 *dst, u32 used) {
    if (used < size) {
        u32 n = size - used;
        func_02115fb4(dst, a, n);
        dst += n;
    }
    return dst;
}

u8 *func_ov065_02261e94(u8 *buf, u32 msgtype, u32 *xidout) {
    u64 m;
    u32 hi;
    func_02115fb4(buf, 0, 0xec);
    *(u16 *)(buf + 0) = 0x101;
    buf[2] = 6;
    m = func_02133100(data_ov065_0228ec04.unk_08, data_ov065_0228ec04.unk_00);
    data_ov065_0228ec04.unk_00 = data_ov065_0228ec04.unk_10 + m;
    m = data_ov065_0228ec04.unk_00;
    hi = (u32)(m >> 32);
    if (xidout != 0) {
        *xidout = hi;
    }
    *(u16 *)(buf + 4) = BS16((u16)(hi >> 16));
    *(u16 *)(buf + 6) = BS16((u16)hi);
    *(u16 *)(buf + 0xc) = BS16((u16)(data_ov065_0228ebd8 >> 16));
    *(u16 *)(buf + 0xe) = BS16((u16)data_ov065_0228ebd8);
    func_02116048(data_ov065_0228ebf4, buf + 0x1c, 6);
    *(u16 *)(buf + 0xec) = 0x8263;
    *(u16 *)(buf + 0xee) = 0x6353;
    *(u16 *)(buf + 0xf0) = 0x135;
    buf[0xf2] = msgtype;
    buf[0xf3] = 0x3d;
    buf[0xf4] = 7;
    buf[0xf5] = 1;
    func_02116048(data_ov065_0228ebf4, buf + 0xf6, 6);
    buf[0xfc] = 0xc;
    buf[0xfd] = 0xa;
    func_02116048(data_ov065_0228b428, buf + 0xfe, 0xa);
    buf[0x108] = 0x37;
    buf[0x109] = 3;
    buf[0x10a] = 1;
    buf[0x10b] = 3;
    buf[0x10c] = 6;
    return buf + 0x10d;
}

void func_ov065_02261fd8(void) {
    s32 state;
    s32 first;
    u32 cnt;
    u32 now;
    s32 i;
    Unk_ov065_02261fd8_E *e;
    Unk_ov065_02261fd8_N *n;
    s32 j;
    Unk_ov065_02261fd8_Q *q;

    data_ov065_0228ebd4 = 0;
    func_02115fb4(data_ov065_0228ecb8, 0, 0x64);
    data_ov065_0228ecb8[15] = 0x180;
    data_ov065_0228ecb8[16] = (u32)&data_ov065_0228f080;
    data_ov065_0228ecb8[18] = 0x180;
    data_ov065_0228ecb8[19] = (u32)&data_ov065_0228ef00;
    func_ov065_02262a44(data_ov065_0228ecb8);
    state = 0;
    first = 1;
    cnt = 1;
    data_ov065_0228eba0 = 1;
    for (;;) {
        func_021132e0(1000);
        if (data_ov065_0228ebd4 != 0) {
            break;
        }
        now = (u32)(func_01ffa6b4() >> 16);
        if (data_ov065_0228ebac() != 0) {
            cnt--;
            if (cnt == 0) {
                if ((data_ov065_0228ebbc & 1) != 0) {
                    if (state == 0) {
                        func_ov065_02262240();
                        state = 1;
                    }
                } else {
                    switch (state) {
                    case 0:
                        if (first != 0) {
                            data_ov065_0228eba0 = 2;
                            first = 0;
                        }
                        if (func_ov065_02261aac() == 0 || func_ov065_022619f8(&cnt, 0) == 0) {
                            func_ov065_02262240();
                            state = 3;
                        } else {
                            state = 1;
                        }
                        break;
                    case 1:
                        if (func_ov065_022619f8(&cnt, 1) == 0) {
                            if (cnt < 0x3c) {
                                state = 2;
                            }
                        }
                        break;
                    case 2:
                        if (func_ov065_022619f8(&cnt, 2) != 0) {
                            state = 1;
                        } else if (cnt < 0x3c) {
                            func_ov065_02264c44(3);
                            state = 0;
                            cnt = 1;
                        }
                        break;
                    case 3:
                        break;
                    }
                }
            }
        } else {
            func_ov065_02264c44(1);
            state = 0;
            cnt = 1;
        }
        for (i = 0, e = data_ov065_0228ec58; i < 8; e++, i++) {
            if (e->unk_00 != 0) {
                if ((s16)(now - e->unk_0a) > 0x3bd) {
                    e->unk_00 = 0;
                }
            }
        }
        for (n = data_021fcc2c.unk_08; n != NULL; n = n->unk_68) {
            Unk_ov065_02261fd8_B *b = n->unk_a4;
            if (b != NULL && b->unk_00 != 0) {
                u32 st = b->unk_08;
                if (st == 3 && (s32)(now - b->unk_10) > 0x27) {
                    b->unk_08 = 1;
                    b->unk_18 = b->unk_1a;
                    b->unk_1c = b->unk_20;
                } else if (st == 2 && (s32)(now - b->unk_10) > 0x27) {
                    if (b->unk_04 == 1) {
                        b->unk_08 = 0;
                        b->unk_04 = 0;
                        func_0211366c(b->unk_00);
                    }
                }
            }
        }
        for (j = 0, q = data_ov065_0228f200; j < 8; q++, j++) {
            if (q->unk_04 != 0) {
                if ((s32)(now - q->unk_2c) > 0xef) {
                    data_ov065_0228ebd0(q->unk_34);
                    q->unk_04 = 0;
                }
            }
        }
        func_ov065_02264d24(now);
        if (data_ov065_0228ebcc != NULL) {
            data_ov065_0228ebcc();
        }
    }
    if ((data_ov065_0228ebbc & 1) == 0 && state != 3) {
        func_ov065_022619a4();
    }
    func_ov065_02262a34();
}

}
