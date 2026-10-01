// mwcc-flags: -O4,p
#include "types.h"

// ov065_067: GameSpy-like key/value parsing, hash table wrappers, connection object (0x02288e2c..0x02289720)

struct Unk_ov065_02289258_Pad {
    s32 v[1];
    Unk_ov065_02289258_Pad() {}
    ~Unk_ov065_02289258_Pad() {}
};

struct Unk_ov065_02288ffc_W {
    char *v[2];
};

struct Unk_ov065_0228909c_P {
    u32 a;
    u32 b;
};

struct Unk_ov065_02289044_Hdr {
    u8 pad_00[4];
    u16 unk_04;
    u8 pad_06[6];
    u16 unk_0c;
    u8 pad_0e[7];
    u8 unk_15;
};

struct Unk_ov065_02289174_Ctx {
    u8 pad_00[0x18];
    void *unk_18;
};

struct Unk_ov065_0228911c_Ent {
    s32 unk_00;
    s32 unk_04;
};

struct Unk_ov065_02289174_KV {
    s32 unk_00;
    s32 unk_04;
};

struct Unk_ov065_0228903c_Obj {
    u8 pad_00[0x20];
    s32 unk_20;
};

struct Unk_ov065_02289578_Pkt {
    u32 unk_00;
    u16 unk_04;
    u8 pad_06[8];
    u8 unk_0e[6];
    u8 unk_14;
    u8 unk_15;
};

struct Unk_ov065_02289720_Sub {
    s32 unk_00;
    u8 pad_04[0x484];
    void (*unk_488)(Unk_ov065_02289720_Sub *, s32, s32, void *);
    u8 pad_48c[8];
    void *unk_494;
    u8 pad_498[0x18];
    s32 unk_4b0;
    u32 unk_4b4;
};

struct Unk_ov065_02289460_Obj {
    u8 pad_00[0x10];
    s32 unk_10;
    u8 pad_14[0x2c];
    s32 unk_40;
    u8 pad_44[8];
    s32 unk_4c;
    u8 pad_50[0x49c];
    s32 unk_4ec;
    u8 pad_4f0[0x130];
    s32 unk_620;
    s32 unk_624;
    u32 unk_628;
    u16 unk_62c;
    u8 pad_62e[2];
    void (*unk_630)(Unk_ov065_02289460_Obj *, s32, void *, void *);
    void *unk_634;
};

struct Unk_ov065_02289578_Sub {
    s32 unk_00;
    void *unk_04;
};

static inline u16 Unk_ov065_02289044_Htons(u16 x) {
    return (x >> 8 & 0xff) | ((x << 8) & 0xff00);
}

extern "C" {
extern char *data_ov065_022918a0;
extern void *data_ov065_022918a4;
extern char data_ov065_0228e940[];
extern char data_ov065_0228e944[];
extern char data_ov065_0228e938[];
extern char data_ov065_0228e94c[];
extern char data_ov065_0228e950[];
extern char *data_ov065_0228e928[2];
extern char *data_ov065_0228e504[];
extern u16 data_0213a510[];
extern s32 data_ov065_02290fa0;
extern s32 data_ov065_022918a8;

s32 func_0212a190(const char *, const char *);
u32 func_021277d4(const char *);
s32 func_021130d0(char *, const char *, ...);
s32 func_0212b770(char *);
s32 func_02130b04(char *, char *);

s32 func_ov065_02277ac8(void *);
void *func_ov065_02277af0(s32);
s32 func_ov065_02278684(void *);
void *func_ov065_022787c4(void *, void *);
s32 func_ov065_0227885c(void *, void *);
s32 func_ov065_022788b0(void *);
s32 func_ov065_022788f0(void *);
void *func_ov065_02278928(s32, s32, s32, void *, void *, void *);
s32 func_ov065_02278bf4(s32);
s32 func_ov065_02278cb8(s32, void *, s32, s32, void *, void *);
s32 func_ov065_02278dbc(s32);
s32 func_ov065_02278ee8(s32);
s32 func_ov065_0227913c(s32);
u32 func_ov065_02279144();
s32 func_ov065_02288734(void *, void *);
s32 func_ov065_02288758(void *, s32);
s32 func_ov065_0228876c(void *);
s32 func_ov065_02288a70(void *, void *, s32, s32);
s32 func_ov065_02288acc(void *);
s32 func_ov065_02288af4(void *);
s32 func_ov065_02288b0c(void *, s32);
s32 func_ov065_02288b10(void *, s32, s32, s32, void *, void *);
s32 func_ov065_02288d18(void *);
s32 func_ov065_02288d40(void *, s32);
void *func_ov065_02288d44(void *, u32, u32);
s32 func_ov065_02288db8(void *);
s32 func_ov065_02288df0(void *);
s32 func_ov065_0228a6f0(void *);
s32 func_ov065_0228a718(void *);
s32 func_ov065_0228a7f0(void *, char *, s32, s32, s32);
s32 func_ov065_0228ad34(void *, s32, s32, s32, s32, s32, void *, void *);
s32 func_ov065_0228ae10(char *, s32);
s32 func_ov065_0228ae64(s32, char *);
s32 func_ov065_0228aed0(void *);
s32 func_ov065_0228af0c(void *);
s32 func_ov065_0228af48(void *);
s32 func_ov065_0228af5c(void *);
s32 func_ov065_0228af68(void *, s32);
s32 func_ov065_0228afd8(void *, u32, u32);
s32 func_ov065_0228b030(void *);
s32 func_ov065_0228b070(void *, void *);
s32 func_ov065_0228b0a4(void *);
s32 func_ov065_0228993c(void *);
s32 func_ov065_02289808(void *, s32, s32, s32);
s32 func_ov065_02289880(void *, s32, s32, s32, s32);

s32 func_ov065_02289174(Unk_ov065_02289174_Ctx *a, char *k, char *v);
char *func_ov065_02288fb8(char *s, s32 ch);
s32 func_ov065_02288ffc(char *s);
s32 func_ov065_0228911c(void *a, char *k, s32 d);
s32 func_ov065_02289298(void *o);
s32 func_ov065_022892b0(void *o);
s32 func_ov065_02289384(void *o, s32 a, s32 b, u8 *data, s32 n, s32 c, s32 d, s32 e);
void func_ov065_02289500(void *, s32, Unk_ov065_02289578_Pkt *, Unk_ov065_02289460_Obj *);
void func_ov065_02289578(Unk_ov065_02289578_Sub *, s32, Unk_ov065_02289578_Pkt *, Unk_ov065_02289460_Obj *);
s32 func_ov065_022896dc(void *);
s32 func_ov065_02289720(Unk_ov065_02289720_Sub *);
s32 func_ov065_02289234(char **, char **);
s32 func_ov065_02289228(void **);
s32 func_ov065_02289240(void **);

void func_ov065_02288e2c(Unk_ov065_02289174_Ctx *c, char *p, s32 len) {
    s32 r;
    char *q;
    char *name;
    char *val;
    char *s;
    u16 cnt;
    s32 n;
    s32 i;
    s32 j;
    s32 k;
    char buf[0x80];
    while (*p != 0) {
        r = func_ov065_0228ae10(p, len);
        if (r < 0) {
            return;
        }
        name = p;
        p += r;
        len -= r;
        r = func_ov065_0228ae10(p, len);
        if (r < 0) {
            return;
        }
        val = p;
        p += r;
        len -= r;
        func_ov065_02289174(c, name, val);
    }
    p++;
    len--;
    for (i = 0; i < 2; i++) {
        if (len < 2) {
            return;
        }
        {
            u8 *b = (u8 *)&cnt;
            b[0] = ((u8 *)p)[0];
            b[1] = ((u8 *)p)[1];
        }
        cnt = Unk_ov065_02289044_Htons(cnt);
        p += 2;
        len -= 2;
        q = p;
        n = 0;
        while (*p != 0) {
            r = func_ov065_0228ae10(p, len);
            if (r < 0 || r > 100) {
                return;
            }
            n++;
            p += r;
            len -= r;
        }
        p++;
        len--;
        for (j = 0; j < cnt; j++) {
            s = q;
            for (k = 0; k < n; k++) {
                r = func_ov065_0228ae10(p, len);
                if (r < 0) {
                    return;
                }
                func_021130d0(buf, data_ov065_0228e938, s, j);
                func_ov065_02289174(c, buf, p);
                p += r;
                len -= r;
                s += func_021277d4(s) + 1;
            }
        }
    }
}

void func_ov065_02288f64(Unk_ov065_02289174_Ctx *c, char *s) {
    char *k;
    char *v;
    k = func_ov065_02288fb8(s + 1, 0x5c);
    if (k != NULL) {
        do {
            v = func_ov065_02288fb8(NULL, 0x5c);
            if (v == NULL) {
                v = data_ov065_0228e940;
            }
            if (func_ov065_02288ffc(k) != 0) {
                func_ov065_02289174(c, k, v);
            }
            k = func_ov065_02288fb8(NULL, 0x5c);
        } while (k != NULL);
    }
}

char *func_ov065_02288fb8(char *s, s32 ch) {
    char *start;
    char *p;
    s8 c;
    if (s != NULL) {
        data_ov065_022918a0 = s;
    }
    start = data_ov065_022918a0;
    goto test;
loop:
    data_ov065_022918a0++;
test:
    p = data_ov065_022918a0;
    c = *p;
    if (c == 0) {
        goto out;
    }
    if (c != ch) {
        goto loop;
    }
out:
    if (p == start) {
        start = NULL;
    }
    if (c != 0) {
        data_ov065_022918a0++;
        *p = 0;
    }
    return start;
}

s32 func_ov065_02288ffc(char *s) {
    Unk_ov065_02288ffc_W l = *(Unk_ov065_02288ffc_W *)data_ov065_0228e928;
    u32 i;
    char **p = l.v;
    for (i = 0; i < 2; i++) {
        if (func_0212a190(s, *p) == 0) {
            return 0;
        }
        p++;
    }
    return 1;
}

s32 func_ov065_0228903c(Unk_ov065_0228903c_Obj *o) {
    return o->unk_20;
}

void func_ov065_02289040(Unk_ov065_0228903c_Obj *o, s32 v) {
    o->unk_20 = v;
}

u16 func_ov065_02289044(Unk_ov065_02289044_Hdr *o) {
    return Unk_ov065_02289044_Htons(o->unk_0c);
}

s32 func_ov065_02289060(s32 *o) {
    return o[2];
}

BOOL func_ov065_02289064(Unk_ov065_02289044_Hdr *o) {
    if ((o->unk_15 & 2) == 2) {
        return TRUE;
    }
    return FALSE;
}

u16 func_ov065_02289078(Unk_ov065_02289044_Hdr *o) {
    return o->unk_04;
}

u16 func_ov065_0228907c(Unk_ov065_02289044_Hdr *o) {
    return Unk_ov065_02289044_Htons(o->unk_04);
}

s32 func_ov065_02289098(s32 *o) {
    return o[0];
}

u64 func_ov065_0228909c(void *a, char *b, u64 v) {
    func_ov065_0228911c(a, b, 0);
    return v;
}

s32 func_ov065_022890b8(void *a, char *b, s32 c) {
    char *v;
    s32 t;
    if (func_0212a190(b, data_ov065_0228e944) == 0) {
        return func_ov065_02288db8(a);
    }
    v = (char *)func_ov065_0228911c(a, b, 0);
    if (v != NULL) {
        s32 ch = *(u8 *)v;
        if (ch < 0 || ch >= 0x80) {
            t = 0;
        } else {
            t = data_0213a510[ch] & 8;
        }
        if (t != 0) {
            goto call;
        }
    }
    return c;
call:
    return func_0212b770(v);
}

s32 func_ov065_0228911c(void *a, char *k, s32 d) {
    Unk_ov065_0228911c_Ent *e;
    s32 key[2];
    if (a == NULL) {
        return 0;
    }
    key[0] = (s32)k;
    e = (Unk_ov065_0228911c_Ent *)func_ov065_022787c4(((Unk_ov065_02289174_Ctx *)a)->unk_18, key);
    if (e != NULL) {
        d = e->unk_04;
    }
    return d;
}

void func_ov065_0228914c(void *a, char *b) {
    char buf[0x14];
    func_021130d0(buf, data_ov065_0228e94c);
    func_ov065_02289174((Unk_ov065_02289174_Ctx *)a, b, buf);
}

s32 func_ov065_02289174(Unk_ov065_02289174_Ctx *a, char *k, char *v) {
    Unk_ov065_02289174_KV kv;
    kv.unk_00 = func_ov065_0228ae64(0, k);
    kv.unk_04 = func_ov065_0228ae64(0, v);
    return func_ov065_0227885c(a->unk_18, &kv);
}

void func_ov065_022891a0(Unk_ov065_02289174_Ctx **pp) {
    Unk_ov065_02289174_Ctx *q = *pp;
    func_ov065_022788f0(q->unk_18);
    q->unk_18 = NULL;
    func_ov065_02277ac8(q);
}

void func_ov065_022891bc() {
    if (data_ov065_022918a4 != NULL) {
        if (func_ov065_022788b0(data_ov065_022918a4) == 0) {
            func_ov065_022788f0(data_ov065_022918a4);
            data_ov065_022918a4 = NULL;
        }
    }
}

void *func_ov065_022891e8() {
    if (data_ov065_022918a4 == NULL) {
        data_ov065_022918a4 = func_ov065_02278928(8, 100, 2, (void *)func_ov065_02289240, (void *)func_ov065_02289234, (void *)func_ov065_02289228);
    }
    return data_ov065_022918a4;
}

s32 func_ov065_02289228(void **p) {
    return func_ov065_02277ac8(*p);
}

s32 func_ov065_02289234(char **a, char **b) {
    return func_02130b04(*a, *b);
}

s32 func_ov065_02289240(void **p) {
    return func_ov065_02288df0(*p);
}

s32 func_ov065_0228924c(Unk_ov065_02289460_Obj *o) {
    return o->unk_4ec;
}

s32 func_ov065_02289258(Unk_ov065_02289460_Obj *o) {
    Unk_ov065_02289258_Pad pad;
    func_ov065_0228b0a4(&o->unk_4c);
}

s32 func_ov065_02289268(Unk_ov065_02289460_Obj *o) {
    return func_ov065_0228af5c(&o->unk_4c);
}

s32 func_ov065_02289274(Unk_ov065_02289460_Obj *o) {
    return func_ov065_0228af48(&o->unk_4c);
}

void func_ov065_02289280(Unk_ov065_02289460_Obj *o) {
    func_ov065_02289298(o);
    func_ov065_0228aed0(&o->unk_4c);
}

s32 func_ov065_02289298(void *o) {
    func_ov065_0228a718(&((Unk_ov065_02289460_Obj *)o)->unk_4c);
    return func_ov065_02288af4(o);
}

s32 func_ov065_022892b0(void *o) {
    func_ov065_0228876c(o);
    return func_ov065_022896dc(&((Unk_ov065_02289460_Obj *)o)->unk_4c);
}

void func_ov065_022892c8(Unk_ov065_02289460_Obj *o) {
    s32 r = func_ov065_0228b030(&o->unk_4c);
    if (r != -1) {
        func_ov065_0228af68(&o->unk_4c, r);
    }
}

s32 func_ov065_022892ec(Unk_ov065_02289460_Obj *o, s32 a, u16 b, s32 c) {
    s32 x = func_ov065_02278bf4(a);
    return func_ov065_02289808(&o->unk_4c, x, Unk_ov065_02289044_Htons(b), c);
}

s32 func_ov065_02289324(Unk_ov065_02289460_Obj *o, s32 a, u16 b, s32 c, s32 e) {
    s32 x = func_ov065_02278bf4(a);
    return func_ov065_02289880(&o->unk_4c, x, Unk_ov065_02289044_Htons(b), c, e);
}

s32 func_ov065_02289364(void *o, s32 a, s32 b, u8 *c, s32 e, s32 f, s32 g) {
    return func_ov065_02289384(o, a, b, c, e, f, 0x80, g);
}

s32 func_ov065_02289384(void *op, s32 a, s32 b, u8 *data, s32 n, s32 c, s32 d, s32 e) {
    Unk_ov065_02289460_Obj *o = (Unk_ov065_02289460_Obj *)op;
    char buf[0x100] = {0};
    s32 i;
    s32 j;
    s32 r;
    s32 t;
    i = 0;
    o->unk_620 = b;
    o->unk_40 = 0;
    j = 0;
    if (n > 0) {
        do {
            u8 *pj = data + j;
            if (i + (s32)func_021277d4(data_ov065_0228e504[*pj]) + 1 >= 0x100) {
                break;
            }
            i += func_021130d0(buf + i, data_ov065_0228e950, data_ov065_0228e504[*pj]);
            func_ov065_02288758(o, *pj);
            j++;
        } while (j < n);
    }
    r = func_ov065_0228a7f0(&o->unk_4c, buf, c, d, e);
    if (r == 0 && a == 0) {
        t = 10;
        while (o->unk_4c == 3 || (o->unk_10 > 0 && r == 0)) {
            func_ov065_0227913c(t);
            r = func_ov065_022892b0(o);
        }
    }
}

void func_ov065_02289444(Unk_ov065_02289460_Obj *o) {
    func_ov065_0228a6f0(&o->unk_4c);
    func_ov065_02288acc(o);
    func_ov065_02277ac8(o);
}

Unk_ov065_02289460_Obj *func_ov065_02289460(s32 a, s32 b, s32 c, s32 d, s32 s5, s32 s6, s32 s7, void *s8, void *s9) {
    Unk_ov065_02289460_Obj *o;
    if (s7 == 0 && data_ov065_02290fa0 != 1) {
        return NULL;
    }
    o = (Unk_ov065_02289460_Obj *)func_ov065_02277af0(0x638);
    if (o == NULL) {
        return NULL;
    }
    o->unk_630 = (void (*)(Unk_ov065_02289460_Obj *, s32, void *, void *))s8;
    o->unk_634 = s9;
    o->unk_624 = 0;
    func_ov065_0228ad34(&o->unk_4c, a, b, c, d, s7, (void *)func_ov065_02289578, o);
    func_ov065_02288b10(o, s5, s6, s7, (void *)func_ov065_02289500, o);
    return o;
}

void func_ov065_02289500(void *a, s32 code, Unk_ov065_02289578_Pkt *p, Unk_ov065_02289460_Obj *o) {
    switch (code) {
    case 1:
        o->unk_630(o, 2, p, o->unk_634);
        break;
    case 0:
        o->unk_630(o, 1, p, o->unk_634);
        break;
    case 2:
        o->unk_630(o, 4, p, o->unk_634);
        break;
    }
    if (p != NULL) {
        if (p->unk_00 == o->unk_628 && p->unk_04 == o->unk_62c) {
            o->unk_628 = 0;
        }
    }
}

void func_ov065_02289578(Unk_ov065_02289578_Sub *s, s32 code, Unk_ov065_02289578_Pkt *p, Unk_ov065_02289460_Obj *o) {
    switch (code) {
    case 0:
        o->unk_630(o, 0, p, o->unk_634);
        if ((p->unk_14 & 3) != 0) {
            if ((p->unk_14 & 0x40) != 0) {
                break;
            }
        }
        if ((p->unk_14 & 0x2c) != 0) {
            break;
        }
        if (o->unk_624 != 0) {
            break;
        }
        {
            s32 m;
            if ((p->unk_15 & 1) != 0) {
                if (o->unk_4c == 0 || o->unk_40 == 0) {
                    m = 1;
                } else {
                    m = 0;
                }
            } else {
                m = 2;
            }
            func_ov065_02288a70(o, p, 0, m);
        }
        break;
    case 1:
        if ((p->unk_14 & 0x43) == 0) {
            o->unk_630(o, 2, p, o->unk_634);
        } else {
            o->unk_630(o, 1, p, o->unk_634);
        }
        break;
    case 2:
        if ((p->unk_14 & 0x2c) != 0) {
            func_ov065_02288734(o, p);
        }
        o->unk_630(o, 3, p, o->unk_634);
        break;
    case 3:
        if (o->unk_620 != 0) {
            func_ov065_0228a718(s);
        }
        if (func_ov065_02278684(s->unk_04) == 0 || o->unk_10 == 0) {
            o->unk_630(o, 4, NULL, o->unk_634);
        }
        break;
    case 4:
        break;
    case 5:
        o->unk_630(o, 5, NULL, o->unk_634);
        break;
    case 6:
        func_ov065_02288b0c(o, o->unk_4ec);
        break;
    }
    if (p != NULL) {
        if (p->unk_00 == o->unk_628 && p->unk_04 == o->unk_62c) {
            o->unk_628 = 0;
        }
    }
}

s32 func_ov065_022896dc(void *sub) {
    func_ov065_0228af0c(sub);
    switch (*(s32 *)sub) {
    case 2:
    case 3:
        return func_ov065_0228993c(sub);
    case 0:
        return func_ov065_02289720((Unk_ov065_02289720_Sub *)sub);
    case 1:
        break;
    }
    return 0;
}

s32 func_ov065_02289720(Unk_ov065_02289720_Sub *s) {
    struct Unk_ov065_02289720_Addr {
        u16 fam;
        u16 port;
        u32 ip;
    } addr;
    s32 len;
    u8 buf[0x5dc];
    s32 r;
    void *e;
    len = 8;
    if (func_ov065_02278ee8(s->unk_4b0) != 0) {
        do {
            r = func_ov065_02278cb8(s->unk_4b0, buf, 0x5db, 0, &addr, &len);
            if (r != -1) {
                r = func_ov065_0228afd8(s, addr.ip, addr.port);
                if (r == -1) {
                    e = func_ov065_02288d44(s, addr.ip, addr.port);
                    if (func_ov065_02288d18(e) != 0) {
                        return 5;
                    }
                    func_ov065_02288d40(e, 0x11);
                    func_ov065_0228b070(s, e);
                }
            }
        } while (func_ov065_02278ee8(s->unk_4b0) != 0);
    }
    if (func_ov065_02279144() - s->unk_4b4 > 2000) {
        func_ov065_02278dbc(s->unk_4b0);
        s->unk_4b0 = -1;
        s->unk_00 = 1;
        s->unk_488(s, 3, data_ov065_022918a8, s->unk_494);
    }
    return 0;
}
}
