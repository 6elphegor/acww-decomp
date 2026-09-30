// mwcc-flags: -O4,p
#include "types.h"

// ov065_047: DWC HTTP/GHI-like API wrappers (0x0227bbf4..0x0227c4b0)

struct Unk_ov065_0227bd20_Ctx {
    u8 pad_000[0x100];
    s32 unk_100;
    u8 pad_104[4];
    s32 unk_108;
    u8 pad_10c[0x198 - 0x10c];
    s32 unk_198;
    u8 pad_19c[0x1d8 - 0x19c];
    s32 unk_1d8;
    u8 pad_1dc[0x1f4 - 0x1dc];
    char unk_1f4[0x14];
    s32 unk_208;
    s32 unk_20c;
    s32 unk_210;
    s32 unk_214;
    char unk_218[0x100];
    char unk_318[0x100];
    u8 pad_418[0x430 - 0x418];
    s32 unk_430;
};

struct Unk_ov065_0227bd20_Handle {
    Unk_ov065_0227bd20_Ctx *unk_00;
};

struct Unk_ov065_0227bbf4_Url {
    u8 pad_00[0x14];
    char *unk_14;
    char *unk_18;
    u16 unk_1c;
    u16 unk_1e;
    u16 unk_20;
    u16 unk_22;
    char *unk_24;
};

struct Unk_ov065_0227c05c_Src {
    s32 unk_00;
    s32 unk_04;
    char *unk_08;
    char *unk_0c;
    s32 unk_10;
    s32 unk_14;
};

struct Unk_ov065_0227c05c_Ent {
    s32 unk_00;
    s32 unk_04;
    Unk_ov065_0227c05c_Src *unk_08;
    s32 unk_0c;
    s32 unk_10;
    s32 unk_14;
};

struct Unk_ov065_0227c05c_Out {
    s32 unk_000;
    s32 unk_004;
    char unk_008[0x100];
    char unk_108[0x100];
    s32 unk_208;
    s32 unk_20c;
};

struct Unk_ov065_0227c400_Buf {
    u32 v[0x81];
};

typedef void (*Unk_ov065_0227c400_Cb)(void *, void *, void *);

extern char data_ov065_0228cd64[];
extern char data_ov065_0228cd70[];
extern char data_ov065_0228cd78[];
extern char data_ov065_0228cd7c[];
extern char data_ov065_0228cd80[];
extern char data_ov065_0228cdb0[];
extern char data_ov065_0228cdbc[];
extern char data_ov065_0228cdc4[];
extern char data_ov065_0228cdd4[];
extern char data_ov065_0228cde8[];
extern char data_ov065_0228ce00[];
extern char data_ov065_0228ce18[];
extern char data_ov065_0228ce24[];
extern char data_ov065_0228ce34[];
extern char data_ov065_0228ce40[];
extern char data_ov065_0228ce50[];
extern char data_ov065_0228ce60[];
extern char data_ov065_0228ce70[];
extern char data_ov065_0228ce7c[];
extern char data_ov065_0228ce8c[];

extern "C" {
s32 func_0212a190(const char *, const char *);
s32 func_0212a15c(const char *, const char *, s32);
s32 func_02129fa0(const char *, const char *);
char *func_0212a120(const char *, s32);
s32 func_0212b770(const char *);
void *func_0212899c(void *, s32, s32);
char *func_ov065_02279100(const char *);
void func_ov065_02283460(void *, const char *);
void func_ov065_02283728(char *, const char *, s32);
s32 func_ov065_0227ced4(void *, s32, s32, s32);
s32 func_ov065_0227cd34(void *, s32);
s32 func_ov065_0227ce44(void *, s32);
s32 func_ov065_0227f54c(void *, s32, s32);
s32 func_ov065_0227f3c4(void *, s32, s32, s32, s32, s32);
s32 func_ov065_02282f90(void *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_ov065_0227de10(void *, char *, const char *);
s32 func_ov065_0227dde8(void *, char *, s32);
s32 func_ov065_022818bc(void *, s32, void *);
s32 func_ov065_02281790(void *, s32);
s32 func_ov065_0228176c(void *);
s32 func_ov065_02281880(void *, void *);
void func_ov065_02277ac8(void *);

BOOL func_ov065_0227bbf4(Unk_ov065_0227bbf4_Url *u) {
    char *p;
    char *e;
    BOOL https;
    char saved;
    s32 n;
    char *q;
    if (u == NULL) {
        return FALSE;
    }
    p = u->unk_14;
    if (p == NULL) {
        return FALSE;
    }
    if (func_0212a15c(p, data_ov065_0228cd70, 7) == 0) {
        https = FALSE;
        p += 7;
    } else if (func_0212a15c(p, data_ov065_0228cd64, 8) == 0) {
        https = TRUE;
        p += 8;
    } else {
        return FALSE;
    }
    n = func_02129fa0(p, data_ov065_0228cd78);
    e = p + n;
    saved = p[n];
    p[n] = 0;
    u->unk_18 = func_ov065_02279100(p);
    if (u->unk_18 == NULL) {
        return FALSE;
    }
    *e = saved;
    p += n;
    if (*p == ':') {
        p++;
        u->unk_20 = func_0212b770(p);
        if (u->unk_20 == 0) {
            return FALSE;
        }
        do {
            p++;
        } while (*p != 0 && *p != '/');
    } else if (https) {
        u->unk_20 = 0x1bb;
    } else {
        u->unk_20 = 0x50;
    }
    if (*p == 0) {
        p = data_ov065_0228cd7c;
    }
    u->unk_24 = func_ov065_02279100(p);
    p = u->unk_24;
    q = func_0212a120(p, 0x20);
    while (q != NULL) {
        *q = '+';
        p = u->unk_24;
        q = func_0212a120(p, 0x20);
    }
    if (p != NULL) {
        return TRUE;
    }
    return FALSE;
}

s32 func_ov065_0227bd20(Unk_ov065_0227bd20_Handle *h, s32 a, s32 b) {
    Unk_ov065_0227bd20_Ctx *c;
    if (h == NULL || (c = h->unk_00) == NULL) {
        return 2;
    }
    if (c->unk_108 != 0) {
        return 0;
    }
    if (c->unk_1d8 == 4) {
        func_ov065_02283460(h, data_ov065_0228cd80);
        return 2;
    }
    if (b == 0) {
        func_ov065_02283460(h, data_ov065_0228cdd4);
        return 2;
    }
    return func_ov065_0227ced4(h, a, 1, b);
}

s32 func_ov065_0227bd8c(Unk_ov065_0227bd20_Handle *h, s32 v, const char *s1, const char *s2) {
    Unk_ov065_0227bd20_Ctx *c;
    char b1[0x100];
    char b2[0x100];
    char *p;
    if (h == NULL || (c = h->unk_00) == NULL) {
        return 2;
    }
    if (c->unk_108 != 0) {
        return 0;
    }
    if (c->unk_1d8 == 4) {
        func_ov065_02283460(h, data_ov065_0228cd80);
        return 2;
    }
    if (s1 == NULL) {
        func_ov065_02283460(h, data_ov065_0228cde8);
        return 2;
    }
    if (s2 == NULL) {
        func_ov065_02283460(h, data_ov065_0228ce00);
        return 2;
    }
    func_ov065_02283728(b1, s1, 0x100);
    if (b1[0] != 0) {
        p = b1;
        do {
            if (*p == '\\') {
                *p = '/';
            }
            p++;
        } while (*p != 0);
    }
    func_ov065_02283728(b2, s2, 0x100);
    if (b2[0] != 0) {
        p = b2;
        do {
            if (*p == '\\') {
                *p = '/';
            }
            p++;
        } while (*p != 0);
    }
    if (v == c->unk_214 && func_0212a190(b1, c->unk_218) == 0 && func_0212a190(b2, c->unk_318) == 0) {
        return 0;
    }
    c->unk_214 = v;
    func_ov065_02283728(c->unk_218, b1, 0x100);
    func_ov065_02283728(c->unk_318, b2, 0x100);
    func_ov065_0227de10(h, c->unk_1f4, data_ov065_0228ce18);
    func_ov065_0227dde8(h, c->unk_1f4, v);
    func_ov065_0227de10(h, c->unk_1f4, data_ov065_0228cdb0);
    func_ov065_0227dde8(h, c->unk_1f4, c->unk_198);
    func_ov065_0227de10(h, c->unk_1f4, data_ov065_0228ce24);
    func_ov065_0227de10(h, c->unk_1f4, b1);
    func_ov065_0227de10(h, c->unk_1f4, data_ov065_0228ce34);
    func_ov065_0227de10(h, c->unk_1f4, b2);
    func_ov065_0227de10(h, c->unk_1f4, data_ov065_0228cdbc);
    return 0;
}

s32 func_ov065_0227bf5c(Unk_ov065_0227bd20_Handle *h, s32 a) {
    Unk_ov065_0227bd20_Ctx *c;
    if (h == NULL || (c = h->unk_00) == NULL) {
        return 2;
    }
    if (c->unk_108 != 0) {
        return 0;
    }
    if (c->unk_1d8 == 4) {
        func_ov065_02283460(h, data_ov065_0228cd80);
        return 2;
    }
    if (func_ov065_0227cd34(h, a) == 0) {
        return 0;
    }
}

s32 func_ov065_0227bfb4(Unk_ov065_0227bd20_Handle *h, s32 a) {
    Unk_ov065_0227bd20_Ctx *c;
    s32 **e;
    if (h == NULL || (c = h->unk_00) == NULL) {
        return 0;
    }
    if (c->unk_108 != 0) {
        return 0;
    }
    if (func_ov065_022818bc(h, a, &e) != 0 && e[2] != 0) {
        return 1;
    }
    return 0;
}

s32 func_ov065_0227c000(Unk_ov065_0227bd20_Handle *h, s32 a, s32 *out) {
    Unk_ov065_0227bd20_Ctx *c;
    s32 **e;
    if (h == NULL || (c = h->unk_00) == NULL) {
        return 2;
    }
    if (c->unk_108 != 0) {
        *out = 0;
        return 0;
    }
    if (func_ov065_022818bc(h, a, &e) != 0 && e[2] != 0) {
        *out = *e[2];
    } else {
        *out = -1;
    }
    return 0;
}

s32 func_ov065_0227c05c(Unk_ov065_0227bd20_Handle *h, s32 idx, Unk_ov065_0227c05c_Out *out) {
    Unk_ov065_0227bd20_Ctx *c;
    Unk_ov065_0227c05c_Ent *ent;
    Unk_ov065_0227c05c_Src *s;
    s32 n;
    if (h == NULL || (c = h->unk_00) == NULL) {
        return 2;
    }
    if (c->unk_108 != 0) {
        func_0212899c(out, 0, 0x210);
        return 0;
    }
    if (out == NULL) {
        func_ov065_02283460(h, data_ov065_0228ce40);
        return 2;
    }
    n = c->unk_430;
    if (idx < 0 || idx >= n) {
        func_ov065_02283460(h, data_ov065_0228ce50);
        return 2;
    }
    ent = (Unk_ov065_0227c05c_Ent *)func_ov065_02281790(h, idx);
    if (ent == NULL) {
        func_ov065_02283460(h, data_ov065_0228ce50);
        return 2;
    }
    s = ent->unk_08;
    out->unk_000 = ent->unk_00;
    out->unk_004 = s->unk_04;
    if (s->unk_08 != NULL) {
        func_ov065_02283728(out->unk_008, s->unk_08, 0x100);
    } else {
        *s->unk_08 = 0;
    }
    if (s->unk_0c != NULL) {
        func_ov065_02283728(out->unk_108, s->unk_0c, 0x100);
    } else {
        *s->unk_0c = 0;
    }
    out->unk_208 = s->unk_10;
    out->unk_20c = s->unk_14;
    return 0;
}

s32 func_ov065_0227c14c(Unk_ov065_0227bd20_Handle *h, s32 *out) {
    Unk_ov065_0227bd20_Ctx *c;
    if (h == NULL || (c = h->unk_00) == NULL) {
        return 2;
    }
    if (c->unk_108 != 0) {
        *out = 0;
        return 0;
    }
    *out = c->unk_430;
    return 0;
}

s32 func_ov065_0227c17c(Unk_ov065_0227bd20_Handle *h, s32 a) {
    Unk_ov065_0227bd20_Ctx *c;
    s32 *e;
    if (h == NULL || (c = h->unk_00) == NULL) {
        return 2;
    }
    if (c->unk_108 != 0) {
        return 0;
    }
    if (c->unk_1d8 == 4) {
        func_ov065_02283460(h, data_ov065_0228cd80);
        return 2;
    }
    if (func_ov065_022818bc(h, a, &e) == 0) {
        return 0;
    }
    e[5]--;
    if (c->unk_100 == 0 && e[5] <= 0) {
        func_ov065_02277ac8((void *)e[4]);
        e[4] = 0;
        if (func_ov065_0228176c(e) != 0) {
            func_ov065_02281880(h, e);
        }
    }
    return 0;
}

s32 func_ov065_0227c224(Unk_ov065_0227bd20_Handle *h, s32 a) {
    Unk_ov065_0227bd20_Ctx *c;
    if (h == NULL || (c = h->unk_00) == NULL) {
        return 2;
    }
    if (c->unk_108 != 0) {
        return 0;
    }
    if (c->unk_1d8 == 4) {
        func_ov065_02283460(h, data_ov065_0228cd80);
        return 2;
    }
    return func_ov065_0227ce44(h, a);
}

s32 func_ov065_0227c278(Unk_ov065_0227bd20_Handle *h, s32 v, const char *s) {
    Unk_ov065_0227bd20_Ctx *c;
    char b[0x401];
    char *p;
    if (h == NULL || (c = h->unk_00) == NULL) {
        return 2;
    }
    if (c->unk_108 != 0) {
        return 0;
    }
    if (c->unk_1d8 == 4) {
        func_ov065_02283460(h, data_ov065_0228cd80);
        return 2;
    }
    if (s == NULL) {
        func_ov065_02283460(h, data_ov065_0228ce60);
        return 2;
    }
    func_ov065_02283728(b, s, 0x401);
    if (b[0] != 0) {
        p = b;
        do {
            if (*p == '\\') {
                *p = '/';
            }
            p++;
        } while (*p != 0);
    }
    func_ov065_0227de10(h, c->unk_1f4, data_ov065_0228ce70);
    func_ov065_0227de10(h, c->unk_1f4, data_ov065_0228cdb0);
    func_ov065_0227dde8(h, c->unk_1f4, c->unk_198);
    func_ov065_0227de10(h, c->unk_1f4, data_ov065_0228ce7c);
    func_ov065_0227dde8(h, c->unk_1f4, v);
    func_ov065_0227de10(h, c->unk_1f4, data_ov065_0228ce8c);
    func_ov065_0227de10(h, c->unk_1f4, b);
    func_ov065_0227de10(h, c->unk_1f4, data_ov065_0228cdbc);
    return 0;
}

s32 func_ov065_0227c3b0(Unk_ov065_0227bd20_Handle *h, s32 a, s32 b) {
    Unk_ov065_0227bd20_Ctx *c;
    if (h == NULL || (c = h->unk_00) == NULL) {
        return 2;
    }
    if (c->unk_108 != 0) {
        return 0;
    }
    if (c->unk_1d8 == 4) {
        func_ov065_02283460(h, data_ov065_0228cd80);
        return 2;
    }
    return func_ov065_0227f54c(h, a, b);
}

s32 func_ov065_0227c400(Unk_ov065_0227bd20_Handle *h, s32 a1, s32 a2, s32 a3, Unk_ov065_0227c400_Cb cb, void *arg) {
    Unk_ov065_0227bd20_Ctx *c;
    if (h == NULL || (c = h->unk_00) == NULL || a1 == 0) {
        return 2;
    }
    if (cb == NULL) {
        func_ov065_02283460(h, data_ov065_0228cdc4);
        return 2;
    }
    if (c->unk_108 != 0) {
        Unk_ov065_0227c400_Buf b = {{0}};
        cb(h, &b, arg);
        return 0;
    }
    if (c->unk_1d8 == 4) {
        func_ov065_02283460(h, data_ov065_0228cd80);
        return 2;
    }
    return func_ov065_0227f3c4(h, a1, a2, a3, (s32)cb, (s32)arg);
}

struct Unk_ov065_0227c4b0_Args {
    s32 v[4];
};

s32 func_ov065_0227c4b0(Unk_ov065_0227bd20_Handle *h, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, Unk_ov065_0227c400_Cb cb, void *arg) {
    Unk_ov065_0227bd20_Ctx *c;
    if (h == NULL || (c = h->unk_00) == NULL) {
        return 2;
    }
    if (cb == NULL) {
        func_ov065_02283460(h, data_ov065_0228cdc4);
        return 2;
    }
    if (c->unk_108 != 0) {
        Unk_ov065_0227c4b0_Args l = {{0, 0, 0, 0}};
        l.v[2] = 0x601;
        cb(h, &l, arg);
        return 0;
    }
    return func_ov065_02282f90(h, a1, a2, a3, a4, a5, a6, 0, a7, (s32)cb, (s32)arg);
}
}
