// mwcc-flags: -O4,p
#include "types.h"

// ov065_024: config/thread setup and simple text-table/buffer helpers (0x0226da64..0x0226e2e4)

typedef void *(*Unk_ov065_0226dd2c_Alloc)(const char *, u32);
typedef void (*Unk_ov065_0226dd2c_Free)(const char *, void *, u32);

struct Unk_ov065_0226dd2c_Cfg {
    u32 v[11];
};

struct Unk_ov065_02290600 {
    u32 unk_00;
    s32 unk_04;
    u8 unk_08[0x1c4];
    Unk_ov065_0226dd2c_Cfg unk_1cc;
    u8 unk_1f8[0x2f8 - 0x1f8];
    u32 unk_2f8;
    u8 unk_2fc[0x368 - 0x2fc];
    s32 unk_368;
    u8 unk_36c[0x3bc - 0x36c];
    u8 unk_3bc[0x3d4 - 0x3bc];
    s32 unk_3d4;
    u8 unk_3d8[0x13e0 - 0x3d8];
};

struct Unk_ov065_0228b778 {
    char *unk_00;
    u32 unk_04;
    u32 unk_08;
    u32 unk_0c;
    Unk_ov065_0226dd2c_Alloc unk_10;
    Unk_ov065_0226dd2c_Free unk_14;
    s32 unk_18;
};

struct Unk_ov065_0226de90_Ent {
    const char *unk_00;
    char *unk_04;
};

struct Unk_ov065_0226ded4_List {
    Unk_ov065_0226de90_Ent *unk_00;
    s32 unk_04;
    s32 unk_08;
};

struct Unk_ov065_0226e0a8_Ctx {
    u8 unk_00[0x28];
    char unk_28[0x80];
    char *unk_a8;
    char *unk_ac;
    s32 unk_b0;
};

struct Unk_ov065_0226e170_Buf {
    u8 *unk_00;
    u8 *unk_04;
    u8 *unk_08;
    s32 unk_0c;
};

struct Unk_ov065_0226e170_Ctx {
    u8 unk_00[0x14];
    void *(*unk_14)(const char *, u32);
    void (*unk_18)(const char *, void *, u32);
    u8 unk_1c[0x924 - 0x1c];
    s32 unk_924;
    Unk_ov065_0226e170_Buf unk_928;
};

extern "C" {

extern Unk_ov065_02290600 *data_ov065_02290600;
extern Unk_ov065_0228b778 data_ov065_0228b778;
extern char data_ov065_0228b758[];
extern char data_ov065_02290604[];
extern char data_ov065_0228b92c[];
extern char data_ov065_0228b934[];
extern char data_ov065_0228b968[];
extern char data_ov065_0228b970[];
extern char data_ov065_0228b974[];
extern char data_ov065_0228b980[];
extern char data_ov065_0228b984[];
extern char data_ov065_0228b990[];
extern char data_ov065_0228b994[];
extern char data_ov065_0228b998[];
extern char data_ov065_0228b99c[];
extern char data_ov065_0228b9a0[];
extern char data_ov065_0228b9a8[];
extern char data_ov065_0228b9b4[];
extern char data_ov065_0228b9b8[];
extern char data_ov065_0228b9c8[];
extern char data_ov065_0228b9cc[];
extern char data_ov065_0228b9d0[];

s32 func_0212a190(const char *a, const char *b);
s32 func_0212a438(const char *s);
char *func_0212a360(char *dst, const char *src);
char *func_0212a2ec(char *dst, const char *src, u32 n);
s32 func_0212a15c(const char *a, const char *b, u32 n);
char *func_02129f1c(const char *hay, const char *needle);
void func_02115fb4(void *dst, u32 v, u32 n);
void func_02116048(const void *src, void *dst, u32 n);
s32 func_020ff0bc(const char *s);
s32 func_02114480(void *m);
s32 func_02114410(void *m);
s32 func_0211450c(void *m);
s32 func_02113788(void *t);
s32 func_02113774(void *t);
s32 func_0211366c(void *t);
s32 func_02113a70(void *t, s32 (*fn)(void *), void *arg, void *stack, u32 size, u32 prio);
s32 func_02113088(char *buf, s32 size, const char *fmt, const char *arg);

s32 func_ov065_0226ebe4(u32 a, void *b);
void *func_ov065_0226d158(u32 a, void *b, void *c, void *d, u32 e, u32 f);
s32 func_ov065_0226eb6c(u32 a);
s32 func_ov065_0226eacc(u32 a);
s32 func_ov065_0226e4dc(void);
s32 func_ov065_0226ea84(void);
s32 func_ov065_0226d860(void *);
s32 func_ov065_0226f9e0(const char *s, s32 len, char *dst, u32 size);
s32 func_ov065_0226fb08(void *a, s32 b, void *c, s32 d);

s32 func_ov065_0226da64(s32 a) {
    if (func_0212a190(data_ov065_0228b778.unk_00, data_ov065_0228b758)) {
        data_ov065_0228b778.unk_18 = 1;
    }
    if (func_ov065_0226ebe4(data_ov065_02290600->unk_2f8, &data_ov065_0228b778)) {
        return 4;
    }
    if (a == 1) {
        func_020ff0bc(data_ov065_02290604);
    }
    data_ov065_02290600->unk_04 = (s32)func_ov065_0226d158(
        data_ov065_02290600->unk_2f8, (u8 *)data_ov065_02290600 + 0x1e2, (u8 *)data_ov065_02290600 + 0x1cc,
        (u8 *)data_ov065_02290600 + 0x1f8, 0x20, 0);
    if (data_ov065_02290600->unk_04 != 0) {
        return 4;
    }
    if (func_ov065_0226eb6c(data_ov065_02290600->unk_2f8)) {
        return 4;
    }
    func_ov065_0226eacc(data_ov065_02290600->unk_2f8);
    return 0;
}

void func_ov065_0226db28(s32 *p) {
    if (data_ov065_02290600 == NULL) {
        func_02115fb4(p, 0, 0x1c4);
    }
    func_02116048(data_ov065_02290600->unk_08, p, 0x1c4);
    s32 v = p[0];
    if (v >= 0) {
        if (v < 20000 || v >= 30000) {
            p[0] = -20998;
        }
    } else if (v > -20000 || v <= -30000) {
        p[0] = -20998;
    }
}

s32 func_ov065_0226db98(void) {
    s32 r;
    if (data_ov065_02290600 == NULL) {
        return 0x15;
    }
    func_02114480(data_ov065_02290600->unk_3bc);
    r = data_ov065_02290600->unk_04;
    func_02114410(data_ov065_02290600->unk_3bc);
    return r;
}

void func_ov065_0226dbd0(void) {
    if (data_ov065_02290600->unk_368) {
        func_02113788(data_ov065_02290600->unk_2fc);
    }
}

void func_ov065_0226dbfc(void) {
    if (data_ov065_02290600 != NULL) {
        if (data_ov065_02290600->unk_2f8) {
            func_ov065_0226e4dc();
        }
        ((Unk_ov065_0226dd2c_Free)data_ov065_02290600->unk_1cc.v[10])(data_ov065_0228b92c, data_ov065_02290600, 0);
        data_ov065_02290600 = NULL;
    }
}

void func_ov065_0226dc40(void) {
    if (data_ov065_02290600 != NULL) {
        func_02114480(data_ov065_02290600->unk_3bc);
        data_ov065_02290600->unk_3d4 = 1;
        func_02114410(data_ov065_02290600->unk_3bc);
        if (data_ov065_02290600->unk_2f8) {
            func_ov065_0226ea84();
        }
        if (data_ov065_02290600->unk_368) {
            func_02113788(data_ov065_02290600->unk_2fc);
        }
    }
}

void func_ov065_0226dcac(void) {
    func_0211450c(data_ov065_02290600->unk_3bc);
    data_ov065_02290600->unk_3d4 = 0;
    if (data_ov065_02290600->unk_368 == 0 || func_02113774(data_ov065_02290600->unk_2fc) != 0) {
        func_02113a70(data_ov065_02290600->unk_2fc, func_ov065_0226d860, &data_ov065_02290600,
                      (u8 *)data_ov065_02290600 + 0x13e0, 0x1000, 0x10);
        func_0211366c(data_ov065_02290600->unk_2fc);
    }
}

s32 func_ov065_0226dd2c(Unk_ov065_0226dd2c_Cfg *cfg, u32 a) {
    if (data_ov065_02290600 != NULL) {
        return 2;
    }
    void *p = ((Unk_ov065_0226dd2c_Alloc)cfg->v[9])(data_ov065_0228b934, 0x13e0);
    if (p == NULL) {
        return 2;
    }
    data_ov065_02290600 = (Unk_ov065_02290600 *)p;
    func_02115fb4(p, 0, 0x13e0);
    data_ov065_02290600->unk_2f8 = a;
    func_02115fb4(data_ov065_02290600->unk_08, 0, 0x1c4);
    *(s32 *)data_ov065_02290600->unk_08 = -1;
    data_ov065_02290600->unk_1cc = *cfg;
    *((u8 *)data_ov065_02290600 + 0x1e0) = 0;
    *((u8 *)data_ov065_02290600 + 0x1e1) = 0;
    *((u8 *)data_ov065_02290600 + 0x1ed) = 0;
    data_ov065_0228b778.unk_10 = (Unk_ov065_0226dd2c_Alloc)cfg->v[9];
    data_ov065_0228b778.unk_14 = (Unk_ov065_0226dd2c_Free)cfg->v[10];
    data_ov065_02290600->unk_04 = func_ov065_0226da64(1);
    if (data_ov065_02290600->unk_04 == 0) {
        func_ov065_0226dcac();
        return 0;
    }
    return data_ov065_02290600->unk_04;
}

void func_ov065_0226de00(char *s) {
    data_ov065_0228b778.unk_00 = s;
}

char *func_ov065_0226de90(Unk_ov065_0226de90_Ent *tbl, s32 n, const char *key);

s32 func_ov065_0226de0c(Unk_ov065_0226de90_Ent *tbl, s32 n, const char *key, char *dst, s32 size) {
    char *s = func_ov065_0226de90(tbl, n, key);
    if (s == NULL) {
        return 0;
    }
    if (func_0212a438(s) >= size) {
        return 0;
    }
    func_0212a360(dst, s);
    return 1;
}

s32 func_ov065_0226de4c(Unk_ov065_0226de90_Ent *tbl, s32 n, const char *key, char *dst, u32 size) {
    char *s = func_ov065_0226de90(tbl, n, key);
    if (s == NULL) {
        return 0;
    }
    s32 r = func_ov065_0226f9e0(s, func_0212a438(s), dst, size);
    if (r != -1 && (u32)r < size) {
        dst[r] = 0;
    }
    return r;
}

char *func_ov065_0226de90(Unk_ov065_0226de90_Ent *tbl, s32 n, const char *key) {
    s32 i = 0;
    Unk_ov065_0226de90_Ent *p;
    if (n > 0) {
        p = tbl;
        do {
            if (p->unk_00 == NULL) {
                break;
            }
            if (func_0212a190(key, p->unk_00) == 0) {
                return tbl[i].unk_04;
            }
            p++;
            i++;
        } while (i < n);
    }
    return NULL;
}

s32 func_ov065_0226e07c(Unk_ov065_0226ded4_List *l, const char *k, char *v);

s32 func_ov065_0226ded4(Unk_ov065_0226de90_Ent *tbl, s32 n, s32 flag, char *text) {
    Unk_ov065_0226ded4_List l;
    char *p;
    char *q;
    char *r;
    char *end;
    char *tx;
    char *t;
    l.unk_00 = tbl;
    l.unk_04 = n;
    l.unk_08 = 0;
    func_02115fb4(tbl, 0, n * 8);
    p = func_02129f1c(text, data_ov065_0228b968);
    if (p == NULL) {
        return 0;
    }
    end = p + 4 + func_0212a438(p + 4);
    q = func_02129f1c(text, data_ov065_0228b970);
    if (q == NULL) {
        return 0;
    }
    r = q + 1;
    r[3] = 0;
    if (func_ov065_0226e07c(&l, data_ov065_0228b974, r) != 1) {
        return 0;
    }
    if (flag == 1 || func_0212a15c(r, data_ov065_0228b980, 3) != 0) {
        if (func_ov065_0226e07c(&l, data_ov065_0228b984, p + 4) != 1) {
            return 0;
        }
        return 1;
    }
    q = func_02129f1c(r + 4, data_ov065_0228b990);
    if (q == NULL) {
        return 0;
    }
    tx = q + 2;
    while (tx[0] != 0xd && tx[1] != 0xa) {
        q = func_02129f1c(tx, data_ov065_0228b994);
        if (q == NULL) {
            break;
        }
        q[1] = 0;
        q[0] = q[1];
        t = q + 2;
        q = func_02129f1c(t, data_ov065_0228b990);
        if (q == NULL) {
            break;
        }
        q[1] = 0;
        q[0] = q[1];
        if (func_ov065_0226e07c(&l, tx, t) != 1) {
            return 0;
        }
        tx = t + func_0212a438(t) + 2;
    }
    t = p + 4;
    while ((u32)t < (u32)end) {
        q = func_02129f1c(t, data_ov065_0228b998);
        if (q == NULL) {
            break;
        }
        q[0] = 0;
        tx = q + 1;
        q = func_02129f1c(tx, data_ov065_0228b99c);
        if (q == NULL) {
            q = func_02129f1c(tx, data_ov065_0228b990);
        }
        if (q != NULL) {
            q[0] = 0;
        }
        if (func_ov065_0226e07c(&l, t, tx) != 1) {
            return 0;
        }
        t = tx + func_0212a438(tx) + 1;
    }
    return 1;
}

s32 func_ov065_0226e07c(Unk_ov065_0226ded4_List *l, const char *k, char *v) {
    if (l->unk_08 > l->unk_04) {
        return 0;
    }
    l->unk_00[l->unk_08].unk_00 = k;
    l->unk_00[l->unk_08].unk_04 = v;
    l->unk_08++;
    return 1;
}

s32 func_ov065_0226e0a8(Unk_ov065_0226e0a8_Ctx *c, char *s) {
    char *q;
    u32 n;
    if ((u32)func_0212a438(s) >= 0x80) {
        return 0;
    }
    func_0212a2ec(c->unk_28, s, 0x80);
    n = func_0212a438(s);
    if (n != (u32)func_0212a438(c->unk_28)) {
        return 0;
    }
    if (func_02129f1c(c->unk_28, data_ov065_0228b9a0)) {
        c->unk_a8 = c->unk_28 + 7;
        c->unk_b0 = 0;
    } else {
        q = func_02129f1c(c->unk_28, data_ov065_0228b9a8);
        if (q == NULL) {
            return 0;
        }
        c->unk_a8 = q + 8;
        c->unk_b0 = 1;
    }
    q = func_02129f1c(c->unk_a8, data_ov065_0228b9b4);
    if (q == NULL) {
        c->unk_ac = NULL;
    } else {
        *q = 0;
        c->unk_ac = q + 1;
    }
    return 1;
}

s32 func_ov065_0226e170(Unk_ov065_0226e170_Ctx *c, Unk_ov065_0226e170_Buf *b, s32 n) {
    u8 *p;
    if (n <= 0) {
        return 0;
    }
    p = (u8 *)c->unk_14(NULL, b->unk_0c + n);
    if (p == NULL) {
        return 0;
    }
    func_02116048(b->unk_00, p, b->unk_0c);
    c->unk_18(NULL, b->unk_00, 0);
    if (p == NULL) {
        return 0;
    }
    b->unk_04 = b->unk_04 + (p - b->unk_00);
    b->unk_0c = b->unk_0c + n;
    b->unk_00 = p;
    b->unk_08 = p + b->unk_0c;
    return 1;
}

void func_ov065_0226e1e8(Unk_ov065_0226e170_Ctx *c, Unk_ov065_0226e170_Buf *b) {
    if (b->unk_00 != NULL) {
        c->unk_18(data_ov065_0228b9b8, b->unk_00, 0);
    }
    func_02115fb4(b, 0, 0x10);
}

s32 func_ov065_0226e210(Unk_ov065_0226e170_Ctx *c, Unk_ov065_0226e170_Buf *b, s32 n) {
    if (n == 0) {
        return 0;
    }
    b->unk_00 = (u8 *)c->unk_14(data_ov065_0228b9b8, n);
    if (b->unk_00 == NULL) {
        return 0;
    }
    b->unk_04 = b->unk_00;
    b->unk_0c = n;
    b->unk_08 = b->unk_00 + b->unk_0c;
    return 1;
}

u32 func_ov065_0226e25c(u32 v) {
    if (v & 0x8000) {
        v &= ~0x8000;
    }
    return v;
}

s32 func_ov065_0226e274(Unk_ov065_0226e170_Ctx *c, const char *s) {
    s32 n, avail, r;
    Unk_ov065_0226e170_Buf *b = &c->unk_928;
    n = func_0212a438(s);
    avail = b->unk_08 - b->unk_04;
    if (n > avail) {
        if (func_ov065_0226e170(c, b, n - avail + 1) == 0) {
            return 1;
        }
        avail = b->unk_08 - b->unk_04;
    }
    r = func_02113088((char *)b->unk_04, avail, data_ov065_0228b9c8, s);
    if (r != n) {
        return 1;
    }
    b->unk_04 = b->unk_04 + r;
    return 0;
}

s32 func_ov065_0226e2e4(Unk_ov065_0226e170_Ctx *c, const char *a1, void *a2, s32 a3) {
    Unk_ov065_0226e170_Buf *b = &c->unk_928;
    const char *fmt = c->unk_924 == 0 ? data_ov065_0228b9cc : data_ov065_0228b9d0;
    s32 r7, len, tot, avail, r;
    c->unk_924++;
    r7 = func_ov065_0226fb08(a2, a3, NULL, 0);
    len = func_0212a438(fmt);
    tot = r7 + (len - 2 + func_0212a438(a1));
    avail = b->unk_08 - b->unk_04;
    if (tot > avail) {
        if (func_ov065_0226e170(c, b, tot - avail + 1) == 0) {
            return 1;
        }
        avail = b->unk_08 - b->unk_04;
    }
    r = func_02113088((char *)b->unk_04, avail, fmt, a1);
    b->unk_04 = b->unk_04 + r;
    if (func_ov065_0226fb08(a2, a3, b->unk_04, b->unk_08 - b->unk_04 - 1) < 0) {
        return 1;
    }
    b->unk_04 = b->unk_04 + r7;
    *b->unk_04 = 0;
    return 0;
}

}
