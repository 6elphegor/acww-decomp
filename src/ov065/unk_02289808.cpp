// mwcc-flags: -O4,p
#include "types.h"

// ov065_068: GameSpy-style client message parser (0x02289808..0x0228a20c)

struct Unk_ov065_02289808_Ctx;

typedef void (*Unk_ov065_02289808_Cb0)(Unk_ov065_02289808_Ctx *, s32, u32, u32);
typedef void (*Unk_ov065_02289808_Cb1)(Unk_ov065_02289808_Ctx *, void *, u32, s32, void *, u32);
typedef void (*Unk_ov065_02289808_Cb2)(Unk_ov065_02289808_Ctx *, void *, u32, u32, u32, void *, u32);

struct Unk_ov065_02289808_B2 {
    u8 b[2];
};

struct Unk_ov065_02289808_B4 {
    u8 b[4];
};

struct Unk_ov065_02289808_Ctx {
    s32 unk_00;
    u8 unk_04[4];
    void *unk_08;
    u8 unk_0c[0x70];
    u8 *unk_7c;
    s32 unk_80;
    u32 unk_84[0xff];
    s32 unk_480;
    s32 unk_484;
    Unk_ov065_02289808_Cb0 unk_488;
    Unk_ov065_02289808_Cb1 unk_48c;
    Unk_ov065_02289808_Cb2 unk_490;
    u32 unk_494;
    u8 unk_498[8];
    u8 unk_4a0[8];
    u16 unk_4a8;
    u16 unk_4aa;
    u32 unk_4ac;
    s32 unk_4b0;
    u8 unk_4b4[8];
    u8 unk_4bc[0x108];
    u32 unk_5c4;
    s32 unk_5c8;
};

struct Unk_ov065_02289808_Elem {
    void *unk_00;
    u32 unk_04;
};

extern u32 data_ov065_022918a8;

extern "C" {
s32 func_ov065_0228a7f0(Unk_ov065_02289808_Ctx *, s32, s32, s32, s32);
s32 func_ov065_0228a9c0(Unk_ov065_02289808_Ctx *, u8 *, s32);
s32 func_ov065_02278ca0(s32, void *, s32, s32);
s32 func_ov065_02278ce0(s32, void *, s32, s32);
s32 func_ov065_02278ee8(s32);
void func_ov065_0228aca8(Unk_ov065_02289808_Ctx *);
void func_ov065_02288510(void *, void *, s32);
void func_021289b4(void *, void *, s32);
s32 func_ov065_0228a4f4(Unk_ov065_02289808_Ctx *, u8 *, s32, u32 *, u16 *);
s32 func_ov065_0228afd8(Unk_ov065_02289808_Ctx *, u32, u32);
s32 func_ov065_02288d44(Unk_ov065_02289808_Ctx *, u32, u32);
s32 func_ov065_02288d18();
s32 func_ov065_0228af48(Unk_ov065_02289808_Ctx *, s32);
s32 func_ov065_0228af68(Unk_ov065_02289808_Ctx *, s32);
s32 func_ov065_0228a300(Unk_ov065_02289808_Ctx *, s32, u8 *, s32, s32);
s32 func_ov065_0228b070(Unk_ov065_02289808_Ctx *, s32);
s32 func_ov065_0228ae10(u8 *, s32);
void *func_ov065_0228ae64(Unk_ov065_02289808_Ctx *, u8 *);
s32 func_ov065_0228a76c(Unk_ov065_02289808_Ctx *);
void *func_ov065_022786bc(s32, s32, s32);
s32 func_ov065_02278658(void *, void *);
s32 func_ov065_02278684(void *);
s32 func_ov065_0228a678(Unk_ov065_02289808_Ctx *, u8 *);
s32 func_ov065_0228a20c(Unk_ov065_02289808_Ctx *, u8 *);
s32 func_ov065_0228a218(Unk_ov065_02289808_Ctx *, u8 *, s32);

s32 func_ov065_02289880(Unk_ov065_02289808_Ctx *c, u32 a1, u32 a2, u8 *data, s32 len);
s32 func_ov065_02289a00(Unk_ov065_02289808_Ctx *c);

s32 func_ov065_02289b28(Unk_ov065_02289808_Ctx *c, u8 *p, s32 n);
s32 func_ov065_02289bdc(Unk_ov065_02289808_Ctx *c, u8 *p, s32 n);
s32 func_ov065_02289c34(Unk_ov065_02289808_Ctx *c, u8 *p, s32 n);
s32 func_ov065_02289d44(Unk_ov065_02289808_Ctx *c, u8 *p, s32 n);
s32 func_ov065_02289e88(Unk_ov065_02289808_Ctx *c, u8 *p, s32 n);
s32 func_ov065_02289f28(Unk_ov065_02289808_Ctx *c);
}

static inline void Cpy2(u8 *d, u8 *s) {
    d[0] = s[0];
    d[1] = s[1];
}
static inline void Cpy4(u8 *d, u8 *s) {
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
    d[3] = s[3];
}
#define HTONS(x) ((u16)((((x) >> 8) & 0xff) | (((x) << 8) & 0xff00)))
static inline void Get16(u8 *d, u8 *s) {
    d[0] = s[0];
    d[1] = s[1];
}
static inline void Get16b(u16 *dd, u8 *s) {
    u8 *d = (u8 *)dd;
    d[0] = s[0];
    d[1] = s[1];
}
static inline u32 Swap32(u32 x) {
    return ((x << 24) & 0xff000000) | (((x << 8) & 0xff0000) | (((x >> 24) & 0xff) | ((x >> 8) & 0xff00)));
}
#define HTONL(x) Swap32(x)

extern "C" {

s32 func_ov065_02289808(Unk_ov065_02289808_Ctx *c, u32 a1, u32 a2, u32 ip) {
    u8 buf[10];
    u8 *d;
    u8 *s;
    buf[0] = 0xfd;
    buf[1] = 0xfc;
    buf[2] = 0x1e;
    buf[3] = 0x66;
    buf[4] = 0x6a;
    buf[5] = 0xb2;
    ip = HTONL(ip);
    d = &buf[6];
    s = (u8 *)&ip;
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
    d[3] = s[3];
    return func_ov065_02289880(c, a1, a2, buf, 10);
}

s32 func_ov065_02289880(Unk_ov065_02289808_Ctx *c, u32 a1, u32 a2, u8 *data, s32 len) {
    struct {
        u16 t;
        u8 pkt[9];
        u8 pad[13];
    } l;
    u8 *d;
    u8 *sp;
    s32 r;
    if (c->unk_00 == 1) {
        func_ov065_0228a7f0(c, 0, 0, 2, 0);
    }
    if (c->unk_00 == 1) {
        return 3;
    }
    l.t = HTONS((u16)(len + 9));
    d = l.pkt;
    sp = (u8 *)&l.t;
    d[0] = sp[0];
    d[1] = sp[1];
    l.pkt[2] = 2;
    d = &l.pkt[3];
    sp = (u8 *)&a1;
    d[0] = sp[0];
    d[1] = sp[1];
    d[2] = sp[2];
    d[3] = sp[3];
    d = &l.pkt[7];
    sp = (u8 *)&a2;
    d[0] = sp[0];
    d[1] = sp[1];
    r = func_ov065_0228a9c0(c, l.pkt, 9);
    if (r == 0) {
        if (func_ov065_02278ca0(c->unk_4b0, data, len, 0) < 0) {
            return 3;
        }
        r = 0;
    }
    return r;
}

s32 func_ov065_0228993c(Unk_ov065_02289808_Ctx *c) {
    s32 old;
    s32 r;
    s32 res;
    if (func_ov065_02278ee8(c->unk_4b0) == 0) {
        return 0;
    }
    old = c->unk_80;
    r = func_ov065_02278ce0(c->unk_4b0, c->unk_7c + old, 0x1000 - old, 0);
    if (r == 0 || r == -1) {
        func_ov065_0228aca8(c);
        return 3;
    }
    c->unk_80 = c->unk_80 + r;
    res = 0;
    if (c->unk_00 == 2 || c->unk_5c8 > 0) {
        func_ov065_02288510(c->unk_4bc, c->unk_7c + old, c->unk_80 - old);
    }
    if (c->unk_00 == 3) {
        res = func_ov065_02289f28(c);
    }
    if (res != 0) {
        return res;
    }
    if (c->unk_00 == 2 && c->unk_80 > 0) {
        return func_ov065_02289a00(c);
    }
    return 0;
}

s32 func_ov065_02289a00(Unk_ov065_02289808_Ctx *c) {
    s32 r = 0;
    volatile s32 z;
    u32 lw;
    u8 *p;
    u8 *d;
    u16 *lp;
    if (c->unk_80 >= 3) {
        z = r;
        lp = (u16 *)&lw;
        do {
            Get16((u8 *)&lw, c->unk_7c);
            *lp = HTONS(*lp);
            if (*lp > 0x1000) {
                r = 4;
                break;
            }
            if (c->unk_80 < *lp) {
                return 0;
            }
            p = c->unk_7c;
            switch ((s8)p[2]) {
            case 0:
                break;
            case 1:
                r = func_ov065_02289e88(c, p + 3, *lp - 3);
                break;
            case 2:
                r = func_ov065_02289b28(c, p + 3, *lp - 3);
                break;
            case 3:
                if (func_ov065_02278ca0(c->unk_4b0, p, *lp, z) <= 0) {
                    return 3;
                }
                break;
            case 4:
                r = func_ov065_02289bdc(c, p + 3, *lp - 3);
                break;
            case 5:
                r = func_ov065_02289c34(c, p + 3, *lp - 3);
                break;
            case 6:
                r = func_ov065_02289d44(c, p + 3, *lp - 3);
                break;
            }
            c->unk_80 = c->unk_80 - *lp;
            if (c->unk_80 != 0 && c->unk_7c != 0) {
                func_021289b4(c->unk_7c, c->unk_7c + *lp, c->unk_80);
            }
        } while (r == 0 && c->unk_80 >= 3);
    }
    if (r != 0) {
        func_ov065_0228aca8(c);
    }
    return r;
}

s32 func_ov065_02289b28(Unk_ov065_02289808_Ctx *c, u8 *p, s32 n) {
    u32 a;
    u16 b;
    s32 r4;
    s32 r6;
    if (n < 5) {
        return 4;
    }
    func_ov065_0228a4f4(c, p, n, &a, &b);
    r4 = func_ov065_0228afd8(c, a, b);
    if (r4 == -1) {
        r6 = func_ov065_02288d44(c, a, b);
        if (func_ov065_02288d18() != 0) {
            return 5;
        }
    } else {
        r6 = func_ov065_0228af48(c, r4);
    }
    if (func_ov065_0228a300(c, r6, p, n, 0) < 0) {
        return 4;
    }
    if (r4 == -1) {
        func_ov065_0228b070(c, r6);
    }
    c->unk_488(c, 1, r6, c->unk_494);
    return 0;
}

s32 func_ov065_02289bdc(Unk_ov065_02289808_Ctx *c, u8 *p, s32 n) {
    u32 a;
    u16 b;
    u8 *d;
    u8 *s;
    s32 r;
    if (n < 6) {
        return 4;
    }
    d = (u8 *)&a;
    d[0] = p[0];
    d[1] = p[1];
    d[2] = p[2];
    d[3] = p[3];
    d = (u8 *)&b;
    s = p + 4;
    d[0] = s[0];
    s++;
    d[1] = s[0];
    r = func_ov065_0228afd8(c, a, b);
    if (r != -1) {
        func_ov065_0228af68(c, r);
        return 0;
    }
    return 0;
}

s32 func_ov065_02289c34(Unk_ov065_02289808_Ctx *c, u8 *p, s32 n) {
    u16 b;
    u32 d;
    u32 a;
    u8 *ptrs[16];
    u8 *dd;
    u8 *s;
    s32 r;
    s32 x;
    s32 cnt;
    s32 i;
    s32 l;
    if (n < 11) {
        return 4;
    }
    dd = (u8 *)&a;
    dd[0] = p[0];
    dd[1] = p[1];
    dd[2] = p[2];
    dd[3] = p[3];
    dd = (u8 *)&b;
    s = p + 4;
    dd[0] = s[0];
    s++;
    dd[1] = s[0];
    r = func_ov065_0228afd8(c, a, b);
    if (r == -1) {
        return 0;
    }
    x = func_ov065_0228af48(c, r);
    dd = (u8 *)&d;
    s = p + 6;
    dd[0] = s[0];
    s++;
    dd[1] = s[0];
    dd[2] = s[1];
    dd[3] = s[2];
    d = HTONL(d);
    cnt = p[10];
    p += 11;
    n -= 11;
    i = 0;
    while (i < cnt && i < 16) {
        if (n < 1) {
            break;
        }
        l = func_ov065_0228ae10(p, n);
        if (l == -1) {
            return 4;
        }
        ptrs[i] = p;
        p += l;
        n -= l;
        i++;
    }
    if (c->unk_48c == 0) {
        return 0;
    }
    c->unk_48c(c, (void *)x, d, i, ptrs, c->unk_494);
    return 0;
}

s32 func_ov065_02289d44(Unk_ov065_02289808_Ctx *c, u8 *p, s32 n) {
    s32 l;
    u32 flag;
    s32 i;
    s32 cnt;
    s32 l2;
    u8 *s1;
    u8 *dd;
    u8 *s;
    u16 y;
    u32 x;
    u32 z;
    if (n < 2) {
        return 4;
    }
    flag = p[0];
    cnt = p[1];
    p += 2;
    n -= 2;
    i = 0;
    if (cnt > 0) {
        do {
            s1 = p;
            l = func_ov065_0228ae10(p, n);
            if (l == -1) {
                return 4;
            }
            p += l;
            n -= l;
            if (n < 11) {
                return 4;
            }
            dd = (u8 *)&x;
            dd[0] = p[0];
            dd[1] = p[1];
            dd[2] = p[2];
            dd[3] = p[3];
            dd = (u8 *)&y;
            s = p + 4;
            dd[0] = s[0];
            s++;
            dd[1] = s[0];
            dd = (u8 *)&z;
            s = p + 6;
            dd[0] = s[0];
            dd[1] = s[1];
            dd[2] = s[2];
            dd[3] = s[3];
            z = HTONL(z);
            p += 10;
            n -= 10;
            l2 = func_ov065_0228ae10(p, n);
            if (l2 == -1) {
                return 4;
            }
            c->unk_490(c, s1, x, y, z, p, c->unk_494);
            p += l2;
            n -= l2;
            i++;
        } while (i < cnt);
    }
    if (flag != 0) {
        c->unk_490(c, 0, 0, 0, 0, 0, c->unk_494);
    }
    return 0;
}

s32 func_ov065_02289e88(Unk_ov065_02289808_Ctx *c, u8 *p, s32 n) {
    s32 cnt;
    s32 i;
    s32 l;
    Unk_ov065_02289808_Elem e;
    cnt = p[0];
    p++;
    n--;
    if (c->unk_08 != 0) {
        func_ov065_0228a76c(c);
    }
    c->unk_08 = func_ov065_022786bc(8, cnt, 0);
    if (c->unk_08 == 0) {
        return 5;
    }
    i = 0;
    if (cnt > 0) {
        do {
            if (n < 2) {
                return 4;
            }
            l = func_ov065_0228ae10(p + 1, n - 1);
            if (l == -1) {
                return 4;
            }
            e.unk_04 = p[0];
            e.unk_00 = func_ov065_0228ae64(c, p + 1);
            func_ov065_02278658(c->unk_08, &e);
            l = l + 1;
            p += l;
            n -= l;
            i++;
        } while (i < cnt);
    }
    return 0;
}

s32 func_ov065_02289f28(Unk_ov065_02289808_Ctx *c) {
    u8 *p = c->unk_7c;
    s32 n = c->unk_80;
    s32 a, b, l, r;
    u8 *dd;
    u8 *sp;
    Unk_ov065_02289808_Elem e;
    switch (c->unk_5c8) {
    case 0:
        if (n < 1) goto end;
        a = (p[0] ^ 0xec) + 2;
        if (n < a) goto end;
        b = a + (p[a - 1] ^ 0xea);
        if (n < b) goto end;
        func_ov065_0228a678(c, p + a);
        c->unk_5c8 = 1;
        p += b;
        n -= b;
        func_ov065_02288510(c->unk_4bc, p, n);
    case 1:
        if (n < 6) goto end;
        dd = c->unk_4a0;
        dd[0] = p[0];
        dd[1] = p[1];
        dd[2] = p[2];
        dd[3] = p[3];
        c->unk_488(c, 6, data_ov065_022918a8, c->unk_494);
        dd = (u8 *)&c->unk_4a8;
        sp = p + 4;
        dd[0] = sp[0];
        sp++;
        dd[1] = sp[0];
        if (*(u16 *)dd == 0xffff) {
            if (func_ov065_0228ae10(p + 6, n - 6) == -1) goto end;
            func_ov065_0228a20c(c, p + 6);
            c->unk_488(c, 5, data_ov065_022918a8, c->unk_494);
            if (c->unk_7c == 0) goto end;
        }
        p += 6;
        n -= 6;
        if ((c->unk_5c4 & 2) != 0 || c->unk_4a8 == 0xffff) {
            c->unk_5c8 = 5;
            c->unk_00 = 2;
            goto end;
        }
        c->unk_5c8 = 2;
        c->unk_484 = -1;
    case 2:
        if (c->unk_484 == -1) {
            if (n < 1) goto end;
            c->unk_484 = p[0];
            c->unk_08 = func_ov065_022786bc(8, c->unk_484, 0);
            if (c->unk_08 == 0) return 5;
            p++;
            n--;
        }
        while (c->unk_484 > func_ov065_02278684(c->unk_08)) {
            if (n < 2) break;
            l = func_ov065_0228ae10(p + 1, n - 1);
            if (l == -1) break;
            e.unk_04 = p[0];
            e.unk_00 = func_ov065_0228ae64(c, p + 1);
            func_ov065_02278658(c->unk_08, &e);
            l = l + 1;
            p += l;
            n -= l;
        }
        if (c->unk_484 > func_ov065_02278684(c->unk_08)) goto end;
        c->unk_5c8 = 3;
        c->unk_484 = -1;
    case 3:
        if (c->unk_484 == -1) {
            if (n < 1) goto end;
            c->unk_484 = p[0];
            c->unk_480 = 0;
            p++;
            n--;
        }
        while (c->unk_484 > c->unk_480) {
            l = func_ov065_0228ae10(p, n);
            if (l == -1) break;
            b = (s32)func_ov065_0228ae64(c, p);
            c->unk_84[c->unk_480++] = b;
            p += l;
            n -= l;
        }
        if (c->unk_484 > c->unk_480) goto end;
        c->unk_5c8 = 4;
    case 4:
        if (n < 5) goto end;
        r = 0;
        do {
            l = func_ov065_0228a218(c, p, n);
            if (l == -2) return 5;
            if (l == -1) {
                n -= 5;
                p += 5;
                c->unk_5c8 = 5;
                c->unk_00 = 2;
                c->unk_488(c, 3, data_ov065_022918a8, c->unk_494);
                goto end;
            }
            p += l;
            n -= l;
            if (c->unk_7c == 0) l = 0;
        } while (l != 0);
        break;
    default:
        break;
    }
end:
    if (c->unk_7c == 0) {
        return 0;
    }
    if (n != 0) {
        func_021289b4(c->unk_7c, p, n);
    }
    c->unk_80 = n;
    return 0;
}

}
