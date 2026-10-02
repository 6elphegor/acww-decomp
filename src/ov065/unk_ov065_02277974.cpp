// mwcc-flags: -O4,p -str reuse
#include "types.h"

typedef long long s64;

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

typedef void *(*Unk_ov065_02290f98_Fn)(s32, s32, s32);
typedef void *(*Unk_ov065_02290f94_Fn)(s32, void *, s32);

extern "C" {

u64 func_01ffa6b4();
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

Unk_ov065_02290f94_Fn data_ov065_02290f94;
s32 data_ov065_02290fa0;
Unk_ov065_02290f9c *data_ov065_02290f9c;
Unk_ov065_02290f98_Fn data_ov065_02290f98;
char data_ov065_02290fa4[0x40];
char data_ov065_02290fe4[0x40];
extern u32 data_ov065_0228b440;

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

void func_ov065_02277e30(Unk_ov065_02290f9c *p, s32 x, s32 y, u32 z);
void func_ov065_02277e1c(Unk_ov065_02290f9c *p);
void func_ov065_02277dd4(s32 x);
void func_ov065_02277d68();
BOOL func_ov065_02277d30();
void func_ov065_02277cdc();
s32 func_ov065_02277c68();
void func_ov065_02277c34();
BOOL func_ov065_02277bdc();
BOOL func_ov065_02277bc0();
void func_ov065_02277bb8();
void func_ov065_02277ba4(Unk_ov065_02290f98_Fn a, Unk_ov065_02290f94_Fn b);
void *func_ov065_02277b8c(s32 a, s32 b);
void *func_ov065_02277b78(s32 a, s32 b, s32 c);
void *func_ov065_02277b64(s32 a, void *b, s32 c);
void *func_ov065_02277b50(s32 a, s32 b, s32 c, s32 d);
void *func_ov065_02277afc(s32 a, void *b, s32 c, s32 d, s32 e);
void *func_ov065_02277af0(s32 a);
void *func_ov065_02277ad8(s32 a, s32 b);
void *func_ov065_02277ac8(s32 a);
s32 func_ov065_02277a9c(s32 a, s32 b, char *dst, s32 d);
s32 func_ov065_02277a6c(s32 a, s32 b, char *s, s32 d);
s32 func_ov065_02277998(char *key, char *out, char *src, s32 sep);
u64 func_ov065_02277974();
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

void func_ov065_02277dd4(s32 x) {
    switch (x) {
    case 0:
        func_ov065_0226de00("https://nas.test.nintendowifi.net/ac");
        break;
    case 1:
        func_ov065_0226de00("https://nas.dev.nintendowifi.net/ac");
        break;
    case 2:
        func_ov065_0226de00("https://nas.nintendowifi.net/ac");
        break;
    }
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

BOOL func_ov065_02277bc0() {
    if (data_ov065_02290f9c != NULL && data_ov065_02290f9c->unk_04 == 6) {
        return TRUE;
    }
    return FALSE;
}

void func_ov065_02277bb8() {
    func_ov065_0226ad84();
}

void func_ov065_02277ba4(Unk_ov065_02290f98_Fn a, Unk_ov065_02290f94_Fn b) {
    data_ov065_02290f98 = a;
    data_ov065_02290f94 = b;
}

void *func_ov065_02277b8c(s32 a, s32 b) {
    return data_ov065_02290f98(a, b, 0x20);
}

void *func_ov065_02277b78(s32 a, s32 b, s32 c) {
    return data_ov065_02290f98(a, b, c);
}

void *func_ov065_02277b64(s32 a, void *b, s32 c) {
    return data_ov065_02290f94(a, b, c);
}

void *func_ov065_02277b50(s32 a, s32 b, s32 c, s32 d) {
    return func_ov065_02277afc(a, (void *)b, c, d, 0x20);
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

void *func_ov065_02277af0(s32 a) {
    return func_ov065_02277b8c(5, a);
}

void *func_ov065_02277ad8(s32 a, s32 b) {
    return func_ov065_02277b50(5, a, b, b);
}

void *func_ov065_02277ac8(s32 a) {
    return func_ov065_02277b64(5, (void *)a, 0);
}

s32 func_ov065_02277a9c(s32 a, s32 b, char *dst, s32 d) {
    func_02113088(dst, 0x1000, "%c%s%c%s", d, a, d, b);
    return func_021277d4(dst);
}

s32 func_ov065_02277a6c(s32 a, s32 b, char *s, s32 d) {
    char *e = func_0212a120(s, 0);
    func_ov065_02277a9c(a, b, e, d);
    return func_021277d4(s);
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

u64 func_ov065_02277974() {
    return (func_01ffa6b4() << 6) / 0x82ea;
}

