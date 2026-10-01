// mwcc-flags: -O4,p
#include "types.h"

// ov065_056: ghttp connection table / request building (0x02281790..0x02281bf4)

struct Unk_ov065_02281974_Pair {
    s32 a;
    s32 b;
};

struct Unk_ov065_02281974_Nest {
    Unk_ov065_02281974_Pair p;
};

struct Unk_ov065_02281790_Sub {
    s32 unk_00;
    s32 unk_04;
    void *unk_08;
    void *unk_0c;
};

struct Unk_ov065_02281790_Elem {
    s32 unk_00;
    s32 unk_04;
    Unk_ov065_02281790_Sub *unk_08;
    s32 unk_0c;
    void *unk_10;
    s32 unk_14;
    void *unk_18;
};

struct Unk_ov065_02281790_Conn {
    s32 unk_00;
    s32 unk_04;
    char *unk_08;
    u8 pad_0c[0x18 - 0x0c];
    char *unk_18;
    u8 pad_1c[0x28 - 0x1c];
    char unk_28[0x1f];
    char unk_47[0x15];
    char unk_5c[0x33];
    char unk_8f[0x1f];
    char unk_ae[0x1f];
    char unk_cd[0x1f];
    char unk_ec[0x130 - 0xec];
    s32 unk_130;
    s32 unk_134;
    s32 unk_138;
    s32 unk_13c;
    s32 unk_140;
};

struct Unk_ov065_02281790_Node {
    s32 unk_00;
    Unk_ov065_02281790_Conn *unk_04;
    Unk_ov065_02281790_Sub *unk_08;
    Unk_ov065_02281974_Nest unk_0c;
    s32 unk_14;
    s32 unk_18;
    s32 unk_1c;
    Unk_ov065_02281790_Node *unk_20;
};

struct Unk_ov065_02281790_Ctx {
    u8 pad_000[0x198];
    s32 unk_198;
    u8 pad_19c[4];
    s32 unk_1a0;
    u8 pad_1a4[0x210 - 0x1a4];
    s32 unk_210;
    u8 pad_214[0x418 - 0x214];
    s32 unk_418;
    u8 pad_41c[0x424 - 0x41c];
    Unk_ov065_02281790_Node *unk_424;
    void *unk_428;
    s32 unk_42c;
    s32 unk_430;
    u8 pad_434[0x46c - 0x434];
    s32 unk_46c;
    s32 unk_470;
};

typedef Unk_ov065_02281790_Ctx Ctx0228;
typedef Unk_ov065_02281790_Node Node0228;
typedef Unk_ov065_02281790_Elem Elem0228;
typedef Unk_ov065_02281790_Conn Conn0228;


extern "C" {

extern char data_ov065_0228da88[];
extern char data_ov065_0228da90[];
extern char data_ov065_0228dac0[];
extern char data_ov065_0228dacc[];
extern char data_ov065_0228db1c[];

typedef s32 (*Unk_ov065_022817c8_Cb)(Ctx0228 **, Node0228 *, void *);

s32 func_ov065_02278758(void *, s32 (*)(void *, void *), void *);
s32 func_ov065_02278810(void *, void *);
void *func_ov065_022787c4(void *, void *);
s32 func_ov065_0227885c(void *, void *);
void *func_ov065_02278980(s32, s32, s32 (*)(s32 *, s32), s32 (*)(s32 *, s32 *), void (*)(void *));
void func_ov065_02277ac8(void *);
void *func_ov065_02277af0(s32);
void func_ov065_02283460(Ctx0228 **, const char *);
void func_ov065_02283470(Ctx0228 **, s32, const char *);
s32 func_ov065_02283684(Ctx0228 **, char *, s32);
s32 func_ov065_02283630(char *, const char *, void *, s32);
s32 func_ov065_02283590(Ctx0228 **, s32, void *);
void func_ov065_0227e160(Ctx0228 **, s32, s32);
s32 func_ov065_0227e0e8(Ctx0228 **, Unk_ov065_02281974_Pair, void *, void *, s32);
void func_ov065_0228090c(Ctx0228 **, Node0228 *);
void func_ov065_0227f2a4(void *);
s32 func_0212a15c(const char *, const char *, s32);
s32 func_0212a190(const char *, const char *);
s32 func_0212b770(void *);

s32 func_ov065_02281bf4(Ctx0228 **, Node0228 *);
s32 func_ov065_022817b0(Ctx0228 **, Node0228 *, void *);
s32 func_ov065_022817fc(Node0228 *, void *);
s32 func_ov065_02281844(Ctx0228 **, Node0228 *, void *);
s32 func_ov065_022818bc(Ctx0228 **, s32, void *);
void func_ov065_02281ab4(void *);
s32 func_ov065_022817c8(Ctx0228 **, Unk_ov065_022817c8_Cb, void *);
s32 func_ov065_02281b04(s32 *, s32 *);
s32 func_ov065_02281b0c(s32 *, s32);

struct Unk_ov065_02281790_L1 {
    s32 a;
    Node0228 *r;
};

void *func_ov065_02281790(Ctx0228 **h, s32 a) {
    Unk_ov065_02281790_L1 l;
    l.a = a;
    l.r = 0;
    func_ov065_022817c8(h, func_ov065_022817b0, &l);
    return l.r;
}

s32 func_ov065_022817b0(Ctx0228 **, Node0228 *n, void *arg) {
    Unk_ov065_02281790_L1 *l = (Unk_ov065_02281790_L1 *)arg;
    if (n->unk_08 != 0 && l->a == n->unk_08->unk_00) {
        l->r = n;
        return 0;
    }
    return 1;
}

struct Unk_ov065_022817c8_Args {
    Ctx0228 **h;
    Unk_ov065_022817c8_Cb cb;
    void *arg;
};

s32 func_ov065_022817c8(Ctx0228 **h, Unk_ov065_022817c8_Cb cb, void *arg) {
    Unk_ov065_022817c8_Args a;
    Ctx0228 *c = *h;
    a.h = h;
    a.cb = cb;
    a.arg = arg;
    if (func_ov065_02278758(c->unk_428, (s32 (*)(void *, void *))func_ov065_022817fc, &a) == 0) {
        return 1;
    }
    return 0;
}

s32 func_ov065_022817fc(Node0228 *n, void *p) {
    Unk_ov065_022817c8_Args *a = (Unk_ov065_022817c8_Args *)p;
    return a->cb(a->h, n, a->arg);
}

struct Unk_ov065_02281814_L {
    s32 a;
    s32 b;
    s32 *out;
    s32 f;
};

s32 func_ov065_02281814(Ctx0228 **h, s32 a, s32 b, s32 *out) {
    Unk_ov065_02281814_L l;
    l.a = a;
    l.b = b;
    l.out = out;
    l.f = 0;
    func_ov065_022817c8(h, func_ov065_02281844, &l);
    if (l.f == 0) {
        *out = 0;
    }
    return 0;
}

s32 func_ov065_02281844(Ctx0228 **, Node0228 *n, void *arg) {
    Unk_ov065_02281814_L *l = (Unk_ov065_02281814_L *)arg;
    char **e = (char **)n->unk_0c.p.a;
    if (e != 0) {
        if (func_0212a190((const char *)l->a, e[0]) == 0) {
            if (func_0212a190((const char *)l->b, e[2]) == 0) {
                *(Node0228 **)l->out = n;
                l->f = 1;
                return 0;
            }
        }
    }
    return 1;
}

s32 func_ov065_02281880(Ctx0228 **h, void *n) {
    return func_ov065_02278810((*h)->unk_428, n);
}

void func_ov065_02281894(Ctx0228 **h, s32 a) {
    Ctx0228 *c = *h;
    void *out;
    if (func_ov065_022818bc(h, a, &out) != 0) {
        func_ov065_02278810(c->unk_428, out);
    }
}

s32 func_ov065_022818bc(Ctx0228 **h, s32 a, void *out) {
    Elem0228 key;
    void *r;
    Ctx0228 *c = *h;
    key.unk_00 = a;
    r = func_ov065_022787c4(c->unk_428, &key);
    if (out != 0) {
        *(void **)out = r;
    }
    if (r != 0) {
        return TRUE;
    }
    return FALSE;
}

static inline void Unk_ov065_022818f4_Zero(Elem0228 *e) {
    e->unk_00 = 0;
    e->unk_04 = 0;
    e->unk_08 = 0;
    e->unk_0c = 0;
    e->unk_10 = 0;
    e->unk_14 = 0;
    e->unk_18 = 0;
}

s32 func_ov065_022818f4(Ctx0228 **h, s32 a) {
    void *out;
    void **t = &(*h)->unk_428;
    if (a <= 0) {
        return 0;
    }
    if (func_ov065_022818bc(h, a, &out) != 0) {
        return (s32)out;
    }
    Elem0228 tmp;
    u32 ad = (u32)&tmp;
    Unk_ov065_022818f4_Zero((Elem0228 *)ad);
    tmp.unk_00 = a;
    tmp.unk_04 = 0;
    tmp.unk_0c = 0;
    tmp.unk_10 = 0;
    tmp.unk_18 = 0;
    tmp.unk_14 = 0;
    func_ov065_0227885c(*t, (Elem0228 *)ad);
    ((s32 *)t)[1]++;
    if (func_ov065_022818bc(h, a, &out) != 0) {
        return (s32)out;
    }
    return 0;
}

s32 func_ov065_02281974(Ctx0228 **h, Node0228 *n, char *s) {
    char buf[0x10];
    s32 v;
    Unk_ov065_02281974_Nest pr;
    void *p;
    if (func_ov065_02283684(h, s, 1) != 0) {
        return 4;
    }
    if (func_0212a15c(s, data_ov065_0228da88, 5) != 0) {
        func_ov065_02283470(h, 1, data_ov065_0228da90);
        func_ov065_0227e160(h, 3, 1);
        return 3;
    }
    if (func_ov065_02283630(s, data_ov065_0228dac0, buf, 0x10) == 0) {
        func_ov065_02283470(h, 1, data_ov065_0228da90);
        func_ov065_0227e160(h, 3, 1);
        return 3;
    }
    v = func_0212b770(buf);
    pr = n->unk_0c;
    if (pr.p.a != 0) {
        p = func_ov065_02277af0(8);
        if (p == 0) {
            func_ov065_02283460(h, data_ov065_0228dacc);
            return 1;
        }
        ((s32 *)p)[1] = v;
        ((s32 *)p)[0] = 0;
        s32 r = func_ov065_0227e0e8(h, pr.p, p, n, 0);
        if (r != 0) {
            return r;
        }
    }
    func_ov065_0228090c(h, n);
    return 0;
}

s32 func_ov065_02281a5c(Ctx0228 **h) {
    Ctx0228 *c = *h;
    c->unk_430 = 0;
    c->unk_42c = 0;
    c->unk_428 = func_ov065_02278980(0x1c, 4, func_ov065_02281b0c, func_ov065_02281b04, func_ov065_02281ab4);
    if (c->unk_428 != 0) {
        return 1;
    }
    return 0;
}

void func_ov065_02281ab4(void *p) {
    Elem0228 *e = (Elem0228 *)p;
    if (e->unk_08 != 0) {
        func_ov065_02277ac8(e->unk_08->unk_08);
        e->unk_08->unk_08 = 0;
        func_ov065_02277ac8(e->unk_08->unk_0c);
        e->unk_08->unk_0c = 0;
        func_ov065_02277ac8(e->unk_08);
        e->unk_08 = 0;
    }
    func_ov065_0227f2a4(e);
    func_ov065_02277ac8(e->unk_10);
    e->unk_10 = 0;
    func_ov065_02277ac8(e->unk_18);
    e->unk_18 = 0;
}

s32 func_ov065_02281b04(s32 *a, s32 *b) {
    return *a - *b;
}

s32 func_ov065_02281b0c(s32 *p, s32 n) {
    return *p % n;
}

s32 func_ov065_02281b20(Ctx0228 **h) {
    Ctx0228 *c = *h;
    s32 n = 0;
    s32 i;
    Node0228 **arr;
    Node0228 *nd;
    s32 z = 0;
    if (c->unk_210 > 0) {
        arr = (Node0228 **)func_ov065_02277af0(c->unk_210 * 4);
        if (arr == 0) {
            func_ov065_02283460(h, data_ov065_0228db1c);
            return 1;
        }
        for (nd = c->unk_424; nd != 0; nd = nd->unk_20) {
            if (nd->unk_00 == 3 && nd->unk_14 != 5 && nd->unk_04->unk_13c == 0) {
                arr[n++] = nd;
                nd->unk_04->unk_13c = 1;
            }
        }
        for (i = 0; i < n; i++) {
            s32 r = func_ov065_02281bf4(h, arr[i]);
            if (r != 0) {
                arr[i]->unk_1c = r;
            }
        }
        for (i = 0; i < n; i++) {
            Conn0228 *s = arr[i]->unk_04;
            s->unk_13c = z;
            if (s->unk_140 != 0) {
                func_ov065_0228090c(h, arr[i]);
            }
        }
        func_ov065_02277ac8(arr);
    }
    return 0;
}


extern char data_ov065_0228db30[];
extern char data_ov065_0228db5c[];
extern char data_ov065_0228db68[];
extern char data_ov065_0228db74[];
extern char data_ov065_0228db80[];
extern char data_ov065_0228db90[];
extern char data_ov065_0228db98[];
extern char data_ov065_0228dba8[];
extern char data_ov065_0228dbb0[];
extern char data_ov065_0228dbbc[];
extern char data_ov065_0228dbc8[];
extern char data_ov065_0228dbd4[];
extern char data_ov065_0228dbdc[];
extern char data_ov065_0228dbe4[];
extern char data_ov065_0228dbec[];
extern char data_ov065_0228dbf4[];
extern char data_ov065_0228dc00[];
extern char data_ov065_0228dc0c[];
extern char data_ov065_0228dc14[];
extern char data_ov065_0228dc20[];
extern char data_ov065_0228dc2c[];
extern char data_ov065_0228dc34[];
extern char data_ov065_0228dc40[];
extern char data_ov065_0228dc50[];
extern char data_ov065_0228dc60[];
extern char data_ov065_0228dc6c[];
extern char data_ov065_0228dc74[];
extern char data_ov065_0228dca0[];
extern char data_ov065_0228dca8[];
extern char data_ov065_0228dcb0[];
extern char data_ov065_0228dcb4[];
extern char data_ov065_0228dcb8[];
extern char data_ov065_0228dcc0[];
extern char data_ov065_0228dccc[];
extern char data_ov065_0228dcd8[];
extern char data_ov065_0228dce4[];
extern char data_ov065_0228dcec[];
extern char data_ov065_0228dd14[];
extern char data_ov065_0228dd18[];
extern char data_ov065_0228dd1c[];
extern char data_ov065_0228dd24[];
extern char data_ov065_0228dd2c[];
extern char data_ov065_0228dd30[];
extern char data_ov065_0228dd38[];
extern char data_ov065_0228dd44[];
extern char data_ov065_0228dd48[];
extern char data_ov065_0228dd50[];
extern char data_ov065_0228dd54[];
extern char data_ov065_0228dd5c[];
extern char data_ov065_0228dd64[];
extern char data_ov065_0228dd68[];
extern char data_ov065_0228dd70[];
extern char data_ov065_0228dd78[];
extern char data_ov065_0228dd7c[];
extern char data_ov065_0228db2c[];
extern char data_ov065_02290fe4[];
extern char data_ov065_0228db1c[];

s32 func_ov065_02283498(Ctx0228 **, char *, s32 *, char *, char *);
void func_ov065_0227de10(Ctx0228 **, char **, const char *);
void func_ov065_0227dde8(Ctx0228 **, char **, s32);
s32 func_ov065_0227da7c(Ctx0228 **, s32, char **, s32 *, s32, const char *);
s32 func_ov065_0227db18(Ctx0228 **, s32, char **, s32 *, s32 *, const char *);
void *func_ov065_02277ad8(void *, s32);
void func_ov065_02283728(char *, const char *, s32);
void *func_0212899c(void *, s32, s32);
char *func_02127838(char *, const char *);
char *func_02129f1c(const char *, const char *);
void func_ov065_0227913c(s32);
s32 func_ov065_02282f90(Ctx0228 **, char *, char *, char *, char *, char *, s32, s32, void *, s32, s32);

struct Unk_ov065_02281bf4_Rec {
    s32 unk_00;
    char unk_04[0x1f];
    char unk_23[0x15];
    char unk_38[0x1f];
    char unk_57[0x1f];
    char unk_76[0x33];
    u8 pad_a9[3];
};

struct Unk_ov065_02281bf4_Res2 {
    s32 unk_00;
    char unk_04[0x34];
    s32 unk_38;
};

struct Unk_ov065_02281bf4_Res3 {
    s32 unk_00;
    char unk_04[0x34];
    s32 unk_38;
    char **unk_3c;
    char **unk_40;
};

struct Unk_ov065_02281bf4_Ent {
    s32 unk_00;
    char unk_04[0x1f];
    u8 pad_23;
    s32 unk_24;
    char unk_28[0x100];
};

struct Unk_ov065_02281bf4_Res4 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    Unk_ov065_02281bf4_Ent *unk_0c;
};

struct Unk_ov065_02281bf4_Res7 {
    s32 unk_00;
    s32 unk_04;
    Unk_ov065_02281bf4_Rec *unk_08;
};

struct Unk_ov065_02281bf4_Res8 {
    s32 unk_00;
    s32 unk_04;
    char **unk_08;
};

struct Unk_ov065_02281bf4_Res5 {
    s32 unk_00;
    s32 unk_04;
};

struct Unk_ov065_02281bf4_S1 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    Unk_ov065_02281bf4_Rec *unk_0c;
};

#define ERR3() { func_ov065_02283470(h, 1, data_ov065_0228dcec); func_ov065_0227e160(h, 3, 1); return 3; }
#define ERRMEM(m) { func_ov065_02283460(h, m); return 1; }
#define GETTOK(t) r = func_ov065_02283498(h, c->unk_08, &pos, t, buf); if (r != 0) { return r; }
#define S(x) data_ov065_0228##x

s32 func_ov065_02281bf4(Ctx0228 **h, Node0228 *node) {
    s32 done, save1;
    Ctx0228 *ctx = *h;
    s32 done2;
    Unk_ov065_02281bf4_Res4 *p4;
    Unk_ov065_02281bf4_Res7 *p7;
    s32 cnt, f3c, f40, f44, f48, f4c, f50, save7, save4;
    s32 retry;
    Conn0228 *c = node->unk_04;
    s32 r;
    s32 v8c;
    s32 pos;
    Unk_ov065_02281974_Nest pr1;
    s32 vv[2];
    Unk_ov065_02281974_Nest pr8, pr7, pr6, pr5, pr4, pr3, pr2;
    Unk_ov065_02281bf4_S1 s1;
    char tok[0x200];
    char buf[0x200];

    if (node->unk_08 != 0) {
        retry = 1;
    } else {
        retry = 0;
    }
again:
    r = func_ov065_0227da7c(h, c->unk_04, &c->unk_18, &vv[1], 1, S(db2c));
    if (r != 0) {
        return r;
    }
    if (node->unk_14 == 1) {
        r = func_ov065_02283590(h, c->unk_04, &v8c);
        if (r != 0) {
            return r;
        }
        if (v8c == 4) {
            func_ov065_02283470(h, 0xd01, S(db30));
            func_ov065_0227e160(h, 4, 0);
            return 4;
        }
        if (v8c != 3) {
            goto endchk;
        }
        if (c->unk_00 == 1) {
            func_ov065_0227de10(h, &c->unk_18, S(db5c));
            func_ov065_0227de10(h, &c->unk_18, S(db68));
            func_ov065_0227dde8(h, &c->unk_18, ctx->unk_198);
            func_ov065_0227de10(h, &c->unk_18, S(db74));
            func_ov065_0227dde8(h, &c->unk_18, ctx->unk_1a0);
            func_ov065_0227de10(h, &c->unk_18, S(db80));
            func_ov065_0227dde8(h, &c->unk_18, ctx->unk_470);
            if (c->unk_28[0] != 0) {
                func_ov065_0227de10(h, &c->unk_18, S(db90));
                func_ov065_0227de10(h, &c->unk_18, c->unk_28);
            }
            if (c->unk_47[0] != 0) {
                func_ov065_0227de10(h, &c->unk_18, S(db98));
                func_ov065_0227de10(h, &c->unk_18, c->unk_47);
            }
            if (c->unk_5c[0] != 0) {
                func_ov065_0227de10(h, &c->unk_18, S(dba8));
                func_ov065_0227de10(h, &c->unk_18, c->unk_5c);
            }
            if (c->unk_8f[0] != 0) {
                func_ov065_0227de10(h, &c->unk_18, S(dbb0));
                func_ov065_0227de10(h, &c->unk_18, c->unk_8f);
            }
            if (c->unk_ae[0] != 0) {
                func_ov065_0227de10(h, &c->unk_18, S(dbbc));
                func_ov065_0227de10(h, &c->unk_18, c->unk_ae);
            }
            if (c->unk_130 != 0) {
                func_ov065_0227de10(h, &c->unk_18, S(dbc8));
                func_ov065_0227dde8(h, &c->unk_18, c->unk_130);
            }
            if (c->unk_134 > 0) {
                func_ov065_0227de10(h, &c->unk_18, S(dbd4));
                func_ov065_0227dde8(h, &c->unk_18, c->unk_134);
            }
        } else if (c->unk_00 == 2) {
            func_ov065_0227de10(h, &c->unk_18, S(dbdc));
            func_ov065_0227de10(h, &c->unk_18, S(dba8));
            func_ov065_0227de10(h, &c->unk_18, c->unk_5c);
        } else if (c->unk_00 == 3) {
            func_ov065_0227de10(h, &c->unk_18, S(dbe4));
            func_ov065_0227de10(h, &c->unk_18, S(dba8));
            func_ov065_0227de10(h, &c->unk_18, c->unk_5c);
            func_ov065_0227de10(h, &c->unk_18, S(dbec));
            func_ov065_0227de10(h, &c->unk_18, c->unk_cd);
            func_ov065_0227de10(h, &c->unk_18, S(db80));
            func_ov065_0227dde8(h, &c->unk_18, ctx->unk_470);
        } else if (c->unk_00 == 4) {
            func_ov065_0227de10(h, &c->unk_18, S(dbf4));
            func_ov065_0227de10(h, &c->unk_18, S(db68));
            func_ov065_0227dde8(h, &c->unk_18, ctx->unk_198);
            func_ov065_0227de10(h, &c->unk_18, S(db74));
            func_ov065_0227dde8(h, &c->unk_18, ctx->unk_1a0);
            func_ov065_0227de10(h, &c->unk_18, S(dc00));
            func_ov065_0227dde8(h, &c->unk_18, c->unk_138);
        } else if (c->unk_00 == 5) {
            func_ov065_0227de10(h, &c->unk_18, S(dc0c));
            func_ov065_0227de10(h, &c->unk_18, S(db90));
            func_ov065_0227de10(h, &c->unk_18, c->unk_28);
            func_ov065_0227de10(h, &c->unk_18, S(dba8));
            func_ov065_0227de10(h, &c->unk_18, c->unk_5c);
            func_ov065_0227de10(h, &c->unk_18, S(dbec));
            func_ov065_0227de10(h, &c->unk_18, c->unk_cd);
        } else if (c->unk_00 == 6) {
            func_ov065_0227de10(h, &c->unk_18, S(dc14));
            func_ov065_0227de10(h, &c->unk_18, S(db90));
            func_ov065_0227de10(h, &c->unk_18, c->unk_28);
            func_ov065_0227de10(h, &c->unk_18, S(dba8));
            func_ov065_0227de10(h, &c->unk_18, c->unk_5c);
            func_ov065_0227de10(h, &c->unk_18, S(dbec));
            func_ov065_0227de10(h, &c->unk_18, c->unk_cd);
            func_ov065_0227de10(h, &c->unk_18, S(dc20));
            func_ov065_0227dde8(h, &c->unk_18, ctx->unk_46c);
            func_ov065_0227de10(h, &c->unk_18, S(db80));
            func_ov065_0227dde8(h, &c->unk_18, ctx->unk_470);
            func_ov065_0227de10(h, &c->unk_18, S(db98));
            func_ov065_0227de10(h, &c->unk_18, c->unk_47);
            if (c->unk_ec[0] != 0) {
                func_ov065_0227de10(h, &c->unk_18, S(dc2c));
                func_ov065_0227de10(h, &c->unk_18, c->unk_ec);
            }
        } else if (c->unk_00 == 7) {
            func_ov065_0227de10(h, &c->unk_18, S(dc34));
            func_ov065_0227de10(h, &c->unk_18, S(db68));
            func_ov065_0227dde8(h, &c->unk_18, ctx->unk_198);
            func_ov065_0227de10(h, &c->unk_18, S(db74));
            func_ov065_0227dde8(h, &c->unk_18, ctx->unk_1a0);
            func_ov065_0227de10(h, &c->unk_18, S(db80));
            func_ov065_0227dde8(h, &c->unk_18, ctx->unk_470);
        } else if (c->unk_00 == 8) {
            func_ov065_0227de10(h, &c->unk_18, S(dc40));
            func_ov065_0227de10(h, &c->unk_18, S(dc50));
            func_ov065_0227de10(h, &c->unk_18, c->unk_47);
            func_ov065_0227de10(h, &c->unk_18, S(db80));
            func_ov065_0227dde8(h, &c->unk_18, ctx->unk_470);
        }
        func_ov065_0227de10(h, &c->unk_18, S(dc60));
        func_ov065_0227de10(h, &c->unk_18, data_ov065_02290fe4);
        func_ov065_0227de10(h, &c->unk_18, S(dc6c));
        node->unk_14 = 4;
        goto endchk;
    }
    if (node->unk_14 != 4) {
        goto endchk;
    }
    r = func_ov065_0227db18(h, c->unk_04, &c->unk_08, &vv[0], &vv[1], S(db2c));
    if (r != 0) {
        if (r != 3) {
            return r;
        }
        func_ov065_02283470(h, 0xd01, S(dc74));
        func_ov065_0227e160(h, 3, 0);
        return 3;
    }
    if (func_02129f1c(c->unk_08, S(dc6c)) == 0) {
        goto endchk;
    }
    pos = 0;
    node->unk_14 = 5;
    if (func_ov065_02283684(h, c->unk_08, 1) != 0) {
        c->unk_140 = 1;
        return 4;
    }
    if (c->unk_00 == 1) {
        done = 0;
        s1.unk_00 = 0;
        s1.unk_04 = 0;
        s1.unk_0c = 0;
        s1.unk_08 = 0x601;
        do {
            GETTOK(tok)
            if (func_0212a190(tok, S(dca0)) == 0) {
                GETTOK(tok)
                if (func_0212a190(tok, S(dca8)) == 0) {
                    if (func_0212a190(buf, S(dcb0)) != 0) {
                        s1.unk_08 = 0x600;
                    }
                }
                done = 1;
            } else if (func_0212a190(tok, S(dcb4)) == 0) {
                Unk_ov065_02281bf4_Rec *e;
                s32 idx;
                Unk_ov065_02281bf4_Rec *base;
                s1.unk_04++;
                base = (Unk_ov065_02281bf4_Rec *)func_ov065_02277ad8(s1.unk_0c, s1.unk_04 * 0xac);
                s1.unk_0c = base;
                if (base == 0) ERRMEM(S(db1c))
                idx = s1.unk_04 - 1;
                e = &base[idx];
                func_0212899c(e, 0, 0xac);
                base[idx].unk_00 = func_0212b770(buf);
                done2 = 0;
                do {
                    save1 = pos;
                    GETTOK(tok)
                    if (func_0212a190(tok, S(dcb8)) == 0) {
                        func_ov065_02283728(e->unk_04, buf, 0x1f);
                    } else if (func_0212a190(tok, S(dcc0)) == 0) {
                        func_ov065_02283728(e->unk_23, buf, 0x15);
                    } else if (func_0212a190(tok, S(dccc)) == 0) {
                        func_ov065_02283728(e->unk_38, buf, 0x1f);
                    } else if (func_0212a190(tok, S(dcd8)) == 0) {
                        func_ov065_02283728(e->unk_57, buf, 0x1f);
                    } else if (func_0212a190(tok, S(dce4)) == 0) {
                        func_ov065_02283728(e->unk_76, buf, 0x33);
                    } else if (func_0212a190(tok, S(dcb4)) == 0 || func_0212a190(tok, S(dca0)) == 0) {
                        done2 = 1;
                        pos = save1;
                    }
                } while (done2 == 0);
            } else {
                ERR3()
            }
        } while (done == 0);
        {
            s32 t = s1.unk_08;
            pr1 = node->unk_0c;
            if (pr1.p.a != 0) {
                ((void (*)(Ctx0228 **, void *, s32))pr1.p.a)(h, &s1, pr1.p.b);
            }
            if (t == 0x600 && s1.unk_08 == 0x600) {
                r = func_ov065_02282f90(h, c->unk_28, c->unk_47, c->unk_5c, c->unk_8f, c->unk_ae, c->unk_130, s1.unk_04 + c->unk_134, node->unk_08, node->unk_0c.p.a, node->unk_0c.p.b);
                if (r != 0) {
                    return r;
                }
            }
        }
        func_ov065_02277ac8(s1.unk_0c);
        s1.unk_0c = 0;
        goto done;
    } else if (c->unk_00 == 2) {
        Unk_ov065_02281bf4_Res2 *p;
        pr2 = node->unk_0c;
        if (pr2.p.a == 0) {
            goto done;
        }
        GETTOK(tok)
        if (func_0212a190(tok, S(dd14)) != 0) ERR3()
        p = (Unk_ov065_02281bf4_Res2 *)func_ov065_02277af0(0x3c);
        if (p == 0) ERRMEM(S(db1c))
        p->unk_00 = 0;
        func_ov065_02283728(p->unk_04, c->unk_5c, 0x33);
        if (buf[0] == 0x30) {
            p->unk_38 = 0;
        } else {
            p->unk_38 = 1;
        }
        r = func_ov065_0227e0e8(h, pr2.p, p, node, 0);
        if (r == 0) {
            goto done;
        }
        return r;
    } else if (c->unk_00 == 3) {
        Unk_ov065_02281bf4_Res3 *p;
        pr3 = node->unk_0c;
        if (pr3.p.a == 0) {
            goto done;
        }
        p = (Unk_ov065_02281bf4_Res3 *)func_ov065_02277af0(0x44);
        if (p == 0) ERRMEM(S(db1c))
        p->unk_00 = 0;
        func_02127838(p->unk_04, c->unk_5c);
        p->unk_38 = 0;
        p->unk_3c = 0;
        p->unk_40 = 0;
        GETTOK(tok)
        if (func_0212a190(tok, S(dd18)) != 0) ERR3()
        f48 = 0;
        do {
            GETTOK(tok)
            if (func_0212a190(tok, S(dcb8)) == 0) {
                void *t = func_ov065_02277ad8(p->unk_3c, (p->unk_38 + 1) * 4);
                if (t == 0) ERRMEM(S(db1c))
                p->unk_3c = (char **)t;
                t = func_ov065_02277af0(0x1f);
                if (t == 0) ERRMEM(S(db1c))
                p->unk_3c[p->unk_38] = (char *)t;
                func_ov065_02283728(p->unk_3c[p->unk_38], buf, 0x1f);
                p->unk_38++;
            } else if (func_0212a190(tok, S(dcc0)) == 0) {
                if (p->unk_38 > 0) {
                    void *t = func_ov065_02277ad8(p->unk_40, p->unk_38 * 4);
                    if (t == 0) ERRMEM(S(db1c))
                    p->unk_40 = (char **)t;
                    t = func_ov065_02277af0(0x15);
                    if (t == 0) ERRMEM(S(db1c))
                    p->unk_40[p->unk_38 - 1] = (char *)t;
                    func_ov065_02283728(p->unk_40[p->unk_38 - 1], buf, 0x15);
                }
            } else if (func_0212a190(tok, S(dd1c)) == 0) {
                f48 = 1;
            } else {
                ERR3()
            }
        } while (f48 == 0);
        r = func_ov065_0227e0e8(h, pr3.p, p, node, 3);
        if (r == 0) {
            goto done;
        }
        return r;
    } else if (c->unk_00 == 4) {
        pr4 = node->unk_0c;
        if (pr4.p.a == 0) {
            goto done;
        }
        p4 = (Unk_ov065_02281bf4_Res4 *)func_ov065_02277af0(0x10);
        if (p4 == 0) ERRMEM(S(db1c))
        p4->unk_04 = c->unk_138;
        f44 = 0;
        p4->unk_00 = 0;
        p4->unk_08 = 0;
        p4->unk_0c = 0;
        do {
            GETTOK(tok)
            if (func_0212a190(tok, S(dd24)) == 0) {
                f44 = 1;
            } else if (func_0212a190(tok, S(dd2c)) == 0) {
                Unk_ov065_02281bf4_Ent *e;
                s32 idx;
                Unk_ov065_02281bf4_Ent *base;
                p4->unk_08++;
                p4->unk_0c = (Unk_ov065_02281bf4_Ent *)func_ov065_02277ad8(p4->unk_0c, p4->unk_08 * 0x128);
                base = p4->unk_0c;
                if (base == 0) ERRMEM(S(db1c))
                idx = p4->unk_08 - 1;
                e = &base[idx];
                func_0212899c(e, 0, 0x128);
                e->unk_24 = 1;
                base[idx].unk_00 = func_0212b770(buf);
                f50 = 0;
                do {
                    save4 = pos;
                    GETTOK(tok)
                    if (func_0212a190(tok, S(dd30)) == 0) {
                        func_ov065_02283728(e->unk_28, buf, 0x100);
                    } else if (func_0212a190(tok, S(dcb8)) == 0) {
                        func_ov065_02283728(e->unk_04, buf, 0x1f);
                    }
                    if (func_0212a190(tok, S(dd38)) == 0) {
                        e->unk_24 = func_0212b770(buf);
                    } else if (func_0212a190(tok, S(dd2c)) == 0 || func_0212a190(tok, S(dd24)) == 0) {
                        f50 = 1;
                        pos = save4;
                    }
                } while (f50 == 0);
            } else {
                ERR3()
            }
        } while (f44 == 0);
        r = func_ov065_0227e0e8(h, pr4.p, p4, node, 4);
        if (r == 0) {
            goto done;
        }
        return r;
    } else if (c->unk_00 == 5) {
        s32 a4;
        s32 a6;
        Unk_ov065_02281bf4_Res5 *p;
        pr5 = node->unk_0c;
        if (pr5.p.a == 0) {
            goto done;
        }
        GETTOK(tok)
        if (func_0212a190(tok, S(dd44)) != 0) ERR3()
        a4 = func_0212b770(buf);
        if (a4 != 0) {
            ctx->unk_418 = a4;
            a6 = 0;
        } else {
            if (func_ov065_02283630(c->unk_08, S(dd48), buf, 0x200) == 0) ERR3()
            a6 = func_0212b770(buf);
        }
        p = (Unk_ov065_02281bf4_Res5 *)func_ov065_02277af0(8);
        if (p == 0) ERRMEM(S(db1c))
        p->unk_00 = a4;
        p->unk_04 = a6;
        r = func_ov065_0227e0e8(h, pr5.p, p, node, 0);
        if (r == 0) {
            goto done;
        }
        return r;
    } else if (c->unk_00 == 6) {
        s32 a4;
        s32 a6;
        Unk_ov065_02281bf4_Res5 *p;
        pr6 = node->unk_0c;
        if (pr6.p.a == 0) {
            goto done;
        }
        GETTOK(tok)
        if (func_0212a190(tok, S(dd50)) != 0) ERR3()
        a4 = func_0212b770(buf);
        if (a4 != 0) {
            ctx->unk_418 = a4;
        }
        if (func_ov065_02283630(c->unk_08, S(dd48), buf, 0x200) == 0) {
            if (a4 == 0) ERR3()
            a6 = 0;
        } else {
            a6 = func_0212b770(buf);
        }
        p = (Unk_ov065_02281bf4_Res5 *)func_ov065_02277af0(8);
        if (p == 0) ERRMEM(S(db1c))
        p->unk_00 = a4;
        p->unk_04 = a6;
        r = func_ov065_0227e0e8(h, pr6.p, p, node, 0);
        if (r == 0) {
            goto done;
        }
        return r;
    } else if (c->unk_00 == 7) {
        pr7 = node->unk_0c;
        if (pr7.p.a == 0) {
            goto done;
        }
        p7 = (Unk_ov065_02281bf4_Res7 *)func_ov065_02277af0(0xc);
        if (p7 == 0) ERRMEM(S(db1c))
        p7->unk_00 = 0;
        p7->unk_04 = 0;
        p7->unk_08 = 0;
        GETTOK(tok)
        if (func_0212a190(tok, S(dd54)) != 0) ERR3()
        f40 = 0;
        do {
            GETTOK(tok)
            if (func_0212a190(tok, S(dd5c)) == 0) {
                f40 = 1;
            } else if (func_0212a190(tok, S(dd64)) == 0) {
                Unk_ov065_02281bf4_Rec *e;
                s32 idx;
                Unk_ov065_02281bf4_Rec *base;
                void *t = func_ov065_02277ad8(p7->unk_08, (p7->unk_04 + 1) * 0xac);
                if (t == 0) ERRMEM(S(db1c))
                p7->unk_08 = (Unk_ov065_02281bf4_Rec *)t;
                base = p7->unk_08;
                idx = p7->unk_04;
                e = &base[idx];
                func_0212899c(e, 0, 0xac);
                p7->unk_04++;
                base[idx].unk_00 = func_0212b770(buf);
                f4c = 0;
                do {
                    save7 = pos;
                    GETTOK(tok)
                    if (func_0212a190(tok, S(dcb8)) == 0) {
                        func_ov065_02283728(e->unk_04, buf, 0x1f);
                    } else if (func_0212a190(tok, S(dcc0)) == 0) {
                        func_ov065_02283728(e->unk_23, buf, 0x15);
                    } else if (func_0212a190(tok, S(dd68)) == 0) {
                        func_ov065_02283728(e->unk_38, buf, 0x1f);
                    } else if (func_0212a190(tok, S(dd70)) == 0) {
                        func_ov065_02283728(e->unk_57, buf, 0x1f);
                    } else if (func_0212a190(tok, S(dce4)) == 0) {
                        func_ov065_02283728(e->unk_76, buf, 0x33);
                    } else if (func_0212a190(tok, S(dd64)) == 0 || func_0212a190(tok, S(dd5c)) == 0) {
                        f4c = 1;
                        pos = save7;
                    }
                } while (f4c == 0);
            } else {
                ERR3()
            }
        } while (f40 == 0);
        r = func_ov065_0227e0e8(h, pr7.p, p7, node, 8);
        if (r == 0) {
            goto done;
        }
        return r;
    } else if (c->unk_00 == 8) {
        Unk_ov065_02281bf4_Res8 *p;
        s32 off;
        pr8 = node->unk_0c;
        if (pr8.p.a == 0) {
            goto done;
        }
        cnt = 0;
        p = (Unk_ov065_02281bf4_Res8 *)func_ov065_02277af0(0xc);
        if (p == 0) ERRMEM(S(db1c))
        p->unk_00 = 0;
        p->unk_04 = 0;
        p->unk_08 = 0;
        GETTOK(tok)
        if (func_0212a190(tok, S(dd78)) != 0) ERR3()
        p->unk_04 = func_0212b770(buf);
        p->unk_08 = (char **)func_ov065_02277af0(p->unk_04 * 4);
        if (p->unk_08 == 0) ERRMEM(S(db1c))
        off = 0;
        f3c = 0;
        do {
            GETTOK(tok)
            if (func_0212a190(tok, S(dcb8)) == 0) {
                char *t = (char *)func_ov065_02277af0(0x15);
                *(char **)((u8 *)p->unk_08 + off) = t;
                if (*(char **)((u8 *)p->unk_08 + off) == 0) ERRMEM(S(db1c))
                func_ov065_02283728(*(char **)((u8 *)p->unk_08 + off), buf, 0x15);
                off += 4;
                cnt++;
            } else if (func_0212a190(tok, S(dd7c)) == 0) {
                p->unk_04 = cnt;
                f3c = 1;
            } else {
                ERR3()
            }
        } while (f3c == 0);
        r = func_ov065_0227e0e8(h, pr8.p, p, node, 9);
        if (r != 0) {
            return r;
        }
    }
done:
    c->unk_140 = 1;
    retry = 0;
endchk:
    if (retry != 0) {
        func_ov065_0227913c(10);
    }
    if (retry != 0) {
        goto again;
    }
    return 0;
}

}
