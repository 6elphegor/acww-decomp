// mwcc-flags: -O4,p
#include "types.h"

// ov065_040: DWC net helpers: tick->ms, string key lookup, alloc wrappers, WiFi state machine, HTTP-ish task (0x02277974..0x02278250)

struct Unk_ov065_02290f9c {
    s32 unk_00;
    u16 unk_04;
    u16 unk_06;
    u16 unk_08;
    u16 unk_0a;
};

struct Unk_ov065_02277d68_Args {
    void *unk_00;
    void *unk_04;
    u8 unk_08;
    u8 unk_09;
};

struct Unk_ov065_02277f70_Ctx {
    u32 unk_00;
    void (*unk_04)(s32, s32, s32, u32);
};

struct Unk_ov065_02291024 {
    s32 unk_00;
    u8 unk_04[2];
    u16 unk_06;
    u8 unk_08[4];
    u8 unk_0c;
    u8 unk_0d[0x3f];
    u32 unk_4c;
    u32 unk_50;
    u32 unk_54;
};

typedef void *(*Unk_ov065_02290f98_Fn)(s32, s32, s32);
typedef void *(*Unk_ov065_02290f94_Fn)(s32, void *, s32);

extern "C" {

u64 func_01ffa6b4();
u64 func_02132ef8(u64, u32, u32);
char *func_0212a120(const char *, s32);
s32 func_021277d4(const char *);
s32 func_0212a15c(const char *, const char *, s32);
void func_0212a2ec(void *, const void *, s32);
s32 func_02113088(char *, s32, const char *, ...);
void func_02116048(void *, void *, s32);
void func_02115fb4(void *, s32, s32);
void func_021132e0(s32);
s32 func_02128930(const void *, const void *, s32);
void func_02127838(void *, const void *);
s32 func_021130d0(char *, const char *, ...);
void func_02128a00(void *, const void *, s32);

extern char data_ov065_0228c988[];
extern char data_ov065_0228c994[];
extern char data_ov065_0228c9bc[];
extern char data_ov065_0228c9e0[];
extern char data_ov065_0228ca00[];
extern char data_ov065_0228ca04[];
extern Unk_ov065_02290f94_Fn data_ov065_02290f94;
extern Unk_ov065_02290f98_Fn data_ov065_02290f98;
extern Unk_ov065_02290f9c *data_ov065_02290f9c;
extern u32 data_ov065_0228b440;
extern s32 data_ov065_02290fa0;
extern char data_ov065_02290fa4[];
extern char data_ov065_02290fe4[];
extern char data_ov065_0229102c[];
extern char data_ov065_02291028[];
extern char data_ov065_02291035[];
extern Unk_ov065_02291024 data_ov065_02291024;

void func_ov065_0226ad84();
s32 func_ov065_0226b110();
s32 func_ov065_0226b16c();
void *func_ov065_0226b1e0();
s32 func_ov065_0226b27c(void *);
s32 func_ov065_02269c9c();
void func_ov065_02270e34(s32, s32);
void func_ov065_0226de00(const char *);
s32 func_ov065_0227a1d4(s32, s32, void *, void *);
s32 func_ov065_0227a024(s32, s32, s32, void *, void *);
s32 func_ov065_02279eb4(s32);
s32 func_ov065_02279eec();
void func_ov065_02279ef4();
void func_ov065_0227a1f8();
void func_ov065_0227a244();
s32 func_ov065_02278ee8(s32 fd);
s32 func_ov065_02278cb8(s32, void *, s32, s32, void *, void *);
void func_ov065_02278dbc(s32);
u32 func_ov065_02279144();
void func_ov065_02279138();
void func_ov065_022782f4();
s32 func_ov065_02278dd4(s32, s32, s32);
s32 func_ov065_02278328(const char *, s32, const char *);
s32 func_ov065_02278070(s32, s32, s32, s32, Unk_ov065_02277f70_Ctx *);
s32 func_ov065_022781b0(s8 *, s32, u8 *, u32 *);

void *func_ov065_02277b64(s32 a, void *b, s32 c);
void *func_ov065_02277b50(s32 a, s32 b, s32 c, s32 d);
void *func_ov065_02277b8c(s32 a, s32 b);
s32 func_ov065_02277a9c(s32 a, s32 b, char *dst, s32 d);

u64 func_ov065_02277974() {
    return (func_01ffa6b4() << 6) / 0x82ea;
}

s32 func_ov065_02277998(char *key, char *out, char *src, s32 sep) {
    char *p;
    char *q;
    s32 len;
    if (out == NULL) {
        return -1;
    }
    p = func_0212a120(src, sep);
    if (p == NULL) {
        return -1;
    }
    for (;;) {
        if (func_0212a15c(p + 1, key, func_021277d4(key)) == 0) {
            if (sep == (s8)p[func_021277d4(key) + 1]) {
                break;
            }
        }
        q = func_0212a120(p + 1, sep);
        if (q == NULL) {
            return -1;
        }
        p = func_0212a120(q + 1, sep);
        if (p == NULL) {
            return -1;
        }
    }
    p = func_0212a120(p + 1, sep);
    if (p == NULL) {
        return -1;
    }
    q = func_0212a120(p + 1, sep);
    if (q != NULL) {
        len = q - (p + 1);
    } else {
        len = func_021277d4(p + 1);
    }
    func_0212a2ec(out, p + 1, len);
    out[len] = 0;
    return len;
}

s32 func_ov065_02277a6c(s32 a, s32 b, char *s, s32 d) {
    char *e = func_0212a120(s, 0);
    func_ov065_02277a9c(a, b, e, d);
    return func_021277d4(s);
}

s32 func_ov065_02277a9c(s32 a, s32 b, char *dst, s32 d) {
    func_02113088(dst, 0x1000, data_ov065_0228c988, d, a, d, b);
    return func_021277d4(dst);
}

void *func_ov065_02277ac8(s32 a) {
    return func_ov065_02277b64(5, (void *)a, 0);
}

void *func_ov065_02277ad8(s32 a, s32 b) {
    return func_ov065_02277b50(5, a, b, b);
}

void *func_ov065_02277af0(s32 a) {
    return func_ov065_02277b8c(5, a);
}

void *func_ov065_02277afc(s32 a, void *b, s32 c, s32 d, s32 e) {
    void *r = data_ov065_02290f98(a, d, e);
    if (r == NULL) {
        return NULL;
    }
    if (b != NULL) {
        func_02116048(b, r, d);
        data_ov065_02290f94(a, b, c);
    }
    return r;
}

void *func_ov065_02277b50(s32 a, s32 b, s32 c, s32 d) {
    return func_ov065_02277afc(a, (void *)b, c, d, 0x20);
}

void *func_ov065_02277b64(s32 a, void *b, s32 c) {
    return data_ov065_02290f94(a, b, c);
}

void *func_ov065_02277b78(s32 a, s32 b, s32 c) {
    return data_ov065_02290f98(a, b, c);
}

void *func_ov065_02277b8c(s32 a, s32 b) {
    return data_ov065_02290f98(a, b, 0x20);
}

void func_ov065_02277ba4(Unk_ov065_02290f98_Fn a, Unk_ov065_02290f94_Fn b) {
    data_ov065_02290f98 = a;
    data_ov065_02290f94 = b;
}

void func_ov065_02277bb8() {
    func_ov065_0226ad84();
}

BOOL func_ov065_02277bc0() {
    if (data_ov065_02290f9c != NULL && data_ov065_02290f9c->unk_04 == 6) {
        return TRUE;
    }
    return FALSE;
}

BOOL func_ov065_02277bdc() {
    Unk_ov065_02290f9c *s = data_ov065_02290f9c;
    if (s == NULL) {
        return TRUE;
    }
    if (s->unk_04 == 8) {
        return FALSE;
    }
    if (s->unk_04 == 1) {
        data_ov065_02290f9c = NULL;
        return TRUE;
    }
    s->unk_04 = 5;
    if (func_ov065_0226b110() != 0) {
        data_ov065_02290f9c = NULL;
        return TRUE;
    }
    return FALSE;
}

void func_ov065_02277c34() {
    if (data_ov065_02290f9c != NULL) {
        if (func_ov065_0226b110() == 0) {
            do {
                func_021132e0(10);
            } while (func_ov065_0226b110() == 0);
        }
        data_ov065_02290f9c = NULL;
    }
}

s32 func_ov065_02277c68() {
    s32 st = 0;
    if (data_ov065_02290f9c != NULL) {
        s32 t = func_ov065_0226b16c();
        if (t == 5) {
            st = 4;
            data_ov065_02290f9c->unk_04 = st;
            data_ov065_02290f9c->unk_06 = 1;
            return st;
        }
        if (t < 0) {
            if (t >= -10) {
                st = 8;
                func_ov065_02270e34(st, t - 0x2bc);
                data_ov065_02290f9c->unk_04 = st;
                return st;
            }
            st = 7;
            func_ov065_02270e34(5, t);
            data_ov065_02290f9c->unk_04 = st;
            return st;
        }
        st = 2;
    }
    return st;
}

void func_ov065_02277cdc() {
    Unk_ov065_02290f9c *s = data_ov065_02290f9c;
    if (s != NULL && s->unk_04 == 2) {
        data_ov065_02290f9c->unk_00 = (s32)func_ov065_0226b1e0();
        return;
    }
    if (s != NULL && s->unk_04 == 4 && s->unk_06 != 0 && func_ov065_02269c9c() != 9) {
        data_ov065_02290f9c->unk_06 = 0;
        data_ov065_02290f9c->unk_04 = 6;
    }
}

BOOL func_ov065_02277d30() {
    Unk_ov065_02290f9c *s = data_ov065_02290f9c;
    if (s == NULL) {
        return FALSE;
    }
    if (s->unk_00 != 0) {
        s->unk_04 = 3;
        func_ov065_02277c68();
        return TRUE;
    }
    return FALSE;
}

void func_ov065_02277d68() {
    Unk_ov065_02277d68_Args l;
    if (data_ov065_02290f9c != NULL) {
        if (data_ov065_02290f9c->unk_04 == 1) {
            Unk_ov065_02290f9c *s;
            func_02115fb4(&l, 0, 12);
            s = data_ov065_02290f9c;
            l.unk_08 = s->unk_08;
            l.unk_09 = s->unk_0a;
            l.unk_00 = (void *)func_ov065_02277b8c;
            l.unk_04 = (void *)func_ov065_02277b64;
            s->unk_04 = 2;
            if (func_ov065_0226b27c(&l) == 0) {
                func_ov065_02270e34(8, -6);
            }
        }
    } else {
        func_ov065_02270e34(8, -4);
    }
}

void func_ov065_02277dd4(s32 x) {
    switch (x) {
    case 0:
        func_ov065_0226de00(data_ov065_0228c994);
        break;
    case 1:
        func_ov065_0226de00(data_ov065_0228c9bc);
        break;
    case 2:
        func_ov065_0226de00(data_ov065_0228c9e0);
        break;
    }
}

void func_ov065_02277e30(Unk_ov065_02290f9c *p, s32 x, s32 y, u32 z) {
    if (data_ov065_02290f9c == NULL) {
        func_02115fb4(p, 0, 12);
        p->unk_08 = x;
        p->unk_0a = 1;
        p->unk_04 = 1;
        p->unk_06 = 0;
        data_ov065_02290f9c = p;
        func_ov065_02277dd4(0);
        data_ov065_0228b440 = z;
    }
}

void func_ov065_02277e1c(Unk_ov065_02290f9c *p) {
    func_ov065_02277e30(p, 3, 1, 0x14);
}

s32 func_ov065_02277e70(s32 e) {
    s32 b = -0x17ed0;
    s32 a = 6;
    if (e == 0) {
        return 0;
    }
    switch (e) {
    case -7:
        b -= 0x320;
        break;
    case -6:
        b -= 0x32a;
        break;
    case -5:
        b -= 0x348;
        break;
    case -4:
    case -3:
    case -2:
        b -= 0x334;
        break;
    case -1:
        b -= 0x33e;
        break;
    case 1:
    case 20:
        a = 8;
        b -= 1;
        break;
    case 2:
        b -= 0x348;
        break;
    case 3:
        b -= 0x352;
        break;
    case 4:
        b -= 0x1e;
        break;
    case 5:
        b -= 0x32;
        break;
    case 6:
    case 11:
    case 12:
        b -= 0x14;
        break;
    case 7:
        b -= 0x35c;
        break;
    case 8:
    case 9:
    case 10:
        b -= 0x366;
        break;
    case 13:
    case 14:
        b -= 0x370;
        break;
    case 15:
        b -= 0x37a;
        break;
    case 16:
        b -= 0x384;
        break;
    case 17:
        b -= 0x38e;
        break;
    case 0:
    case 18:
    case 19:
        break;
    }
    func_ov065_02270e34(a, b);
    return e;
}

s32 func_ov065_02277f70(s32 a, void (*cb)(s32, s32, s32, u32), u32 ud) {
    Unk_ov065_02277f70_Ctx *p;
    s32 r;
    p = (Unk_ov065_02277f70_Ctx *)func_ov065_02277b8c(4, 8);
    if (p == NULL) {
        func_ov065_02277e70(0x14);
        cb(0, 0, 0x14, p->unk_00);
        return 0x14;
    }
    p->unk_00 = ud;
    p->unk_04 = cb;
    r = func_ov065_0227a1d4(a, 0, (void *)func_ov065_02278070, p);
    if (r < 0) {
        func_ov065_02277e70(r);
        cb(0, 0, r, p->unk_00);
        func_ov065_02277b64(4, p, 0);
    }
    return r;
}

s32 func_ov065_02277fe0(s32 a, s32 *pa, void (*cb)(s32, s32, s32, u32), u32 ud) {
    Unk_ov065_02277f70_Ctx *p;
    s32 r;
    p = (Unk_ov065_02277f70_Ctx *)func_ov065_02277b8c(4, 8);
    if (p == NULL) {
        func_ov065_02277e70(0x14);
        cb(0, 0, 0x14, p->unk_00);
        return 0x14;
    }
    p->unk_00 = ud;
    p->unk_04 = cb;
    r = func_ov065_0227a024(a, *pa, 0, (void *)func_ov065_02278070, p);
    if (r < 0) {
        func_ov065_02277e70(r);
        cb(0, 0, r, p->unk_00);
        func_ov065_02277b64(4, p, 0);
    }
    return r;
}

s32 func_ov065_02278054(s32 *p) {
    return func_ov065_02279eb4(*p);
}

void func_ov065_02278060(s32 *p) {
    *p = func_ov065_02279eec();
}

s32 func_ov065_02278070(s32 a, s32 e, s32 c, s32 d, Unk_ov065_02277f70_Ctx *p) {
    void (*cb)(s32, s32, s32, u32) = p->unk_04;
    if (cb != NULL) {
        if (e == 0) {
            cb(c, d, e, p->unk_00);
        } else {
            func_ov065_02277e70(e);
            cb(0, 0, e, p->unk_00);
        }
    }
    func_ov065_02277b64(4, p, 0);
    return 1;
}

s32 func_ov065_022780b0() {
    func_ov065_02279ef4();
    return 1;
}

s32 func_ov065_022780c0() {
    func_ov065_0227a1f8();
    return 1;
}

s32 func_ov065_022780d0() {
    func_ov065_0227a244();
    return 1;
}

s32 func_ov065_022780e0() {
    u32 addr[2];
    s32 len;
    u32 flags;
    u8 buf[0x40];
    len = 8;
    if (data_ov065_02291024.unk_00 == -1) {
        data_ov065_02290fa0 = 1;
        return 1;
    }
    if (func_ov065_02278ee8(data_ov065_02291024.unk_00) != 0) {
        s32 n = func_ov065_02278cb8(data_ov065_02291024.unk_00, buf, 0x40, 0, addr, &len);
        if (func_ov065_022781b0((s8 *)buf, n, (u8 *)addr, &flags) == 0) {
            func_ov065_02278dbc(data_ov065_02291024.unk_00);
            if ((flags & 1) != 0) {
                data_ov065_02290fa0 = 2;
            } else if ((flags & 2) != 0) {
                data_ov065_02290fa0 = 3;
            } else {
                data_ov065_02290fa0 = 1;
            }
            return data_ov065_02290fa0;
        }
    }
    if (func_ov065_02279144() > data_ov065_02291024.unk_50 + 0x7d0) {
        if (data_ov065_02291024.unk_54 == 1) {
            func_ov065_02278dbc(data_ov065_02291024.unk_00);
            data_ov065_02290fa0 = 1;
            return 1;
        }
        func_ov065_022782f4();
        data_ov065_02291024.unk_54++;
    }
    return 0;
}

s32 func_ov065_022781b0(s8 *b, s32 n, u8 *addr, u32 *out) {
    if (n < 7) {
        return 1;
    }
    if (func_02128930(addr + 4, data_ov065_0229102c, 4) != 0) {
        return 1;
    }
    if (*(u16 *)(addr + 2) != data_ov065_02291024.unk_06) {
        return 1;
    }
    if (func_02128930(b, data_ov065_0228ca00, 3) != 0) {
        return 1;
    }
    u32 v = ((s32)b[3] << 24) & 0xff000000;
    v |= ((s32)b[4] << 16) & 0xff0000;
    v |= ((s32)b[5] << 8) & 0xff00;
    v |= (s32)b[6] & 0xff;
    *out = v;
    return 0;
}

void func_ov065_02278250(char *url) {
    char buf[0x44];
    s8 c;
    func_02127838(data_ov065_02290fe4, url);
    data_ov065_02291024.unk_00 = -1;
    func_ov065_02279138();
    c = data_ov065_02290fa4[0];
    if (c == 0) {
        func_021130d0(buf, data_ov065_0228ca04, url);
    }
    if (func_ov065_02278328(c != 0 ? data_ov065_02290fa4 : buf, 0x6cfc, data_ov065_02291028) != 0) {
        s32 s = func_ov065_02278dd4(2, 2, 0);
        data_ov065_02291024.unk_00 = s;
        if (s != -1) {
            s32 n;
            data_ov065_02291024.unk_0c = 9;
            n = func_021277d4(url);
            func_02128a00(data_ov065_02291035, url, n + 1);
            data_ov065_02291024.unk_4c = n + 6;
            func_ov065_022782f4();
            data_ov065_02291024.unk_54 = 0;
        }
    }
}

} // extern "C"
