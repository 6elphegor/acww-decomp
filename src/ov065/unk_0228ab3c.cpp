// mwcc-flags: -O4,p
#include "types.h"

// ov065_070: GameSpy-like server-browser context (0x0228ab3c..0x0228b258)

struct Unk_ov065_0228ad34_Ctx {
    s32 unk_00;
    void *unk_04;
    s32 unk_08;
    char unk_0c[0x24];
    char unk_30[0x24];
    char unk_54[0x28];
    char *unk_7c;
    s32 unk_80;
    u8 pad_84[0x480 - 0x84];
    s32 unk_480;
    s32 unk_484;
    void (*unk_488)(Unk_ov065_0228ad34_Ctx *, s32, u32, u32);
    s32 unk_48c;
    u32 unk_490;
    u32 unk_494;
    char *unk_498;
    s32 unk_49c;
    s32 unk_4a0;
    s32 unk_4a4;
    u8 pad_4a8[0x4b0 - 0x4a8];
    s32 unk_4b0;
    u8 pad_4b4[0x4b8 - 0x4b4];
    s32 unk_4b8;
    u8 pad_4bc[0x5cc - 0x4bc];
    s32 unk_5cc;
    void *unk_5d0;
};

struct Unk_ov065_0228ae2c_Ent {
    char *unk_00;
    s32 unk_04;
};

struct Unk_ov065_0228ab8c_Ip {
    u8 v[4];
};

struct Unk_ov065_0228ab8c_Sa {
    u8 unk_0;
    u8 unk_1;
    u16 unk_2;
    union {
        u32 w;
        Unk_ov065_0228ab8c_Ip ip;
    } unk_4;
};

struct Unk_ov065_0228ab8c_Host {
    u32 unk_00;
    u32 unk_04;
    u32 unk_08;
    Unk_ov065_0228ab8c_Ip **unk_0c;
};

typedef Unk_ov065_0228ad34_Ctx Ctx070;

static inline void Cp4(Unk_ov065_0228ab8c_Ip *d, Unk_ov065_0228ab8c_Ip *s) {
    *d = *s;
}

extern char *data_ov065_022918ac;
extern char data_ov065_0228e974[];
extern char *data_ov065_0228e954;
extern u32 data_ov065_022918a8;
extern s32 data_ov065_02290fa0;
extern char data_ov065_0228e970[];
extern Ctx070 *data_ov065_022918b0;
extern u8 data_0213a410[];

extern "C" {
s32 func_021277d4(const char *s);
void *func_02128a00(void *d, const void *s, u32 n);
char *func_02127838(char *d, const char *s);
s32 func_021130d0(char *buf, const char *fmt, ...);
s32 func_0212a15c(const char *a, const char *b, u32 n);
s32 func_0212a190(const char *a, const char *b);
s32 func_02130b04(const char *a, const char *b);
void func_02128c60(u32 seed);

s32 func_ov065_02278bf4(char *s);
Unk_ov065_0228ab8c_Host *func_ov065_02261408(char *name);
s32 func_ov065_02278dd4(s32 a, s32 b, s32 c);
s32 func_ov065_02278dbc(s32 fd);
s32 func_ov065_02278d34(s32 fd, void *sa, s32 len);
s32 func_ov065_0228a20c(Ctx070 *c, ...);
void func_ov065_0228a718(Ctx070 *c);
void *func_ov065_022891e8(Ctx070 *c);
void *func_ov065_022787c4(void *t, void *key);
void func_ov065_02278810(void *t, void *key);
void func_ov065_0227885c(void *t, void *key);
char *func_ov065_02279100(char *s);
void *func_ov065_022786bc(s32 a, s32 b, s32 c);
void *func_ov065_0227866c(void *v, s32 i);
s32 func_ov065_02278684(void *v);
void func_ov065_02278420(void *v);
void func_ov065_02278570(void *v, s32 i);
void func_ov065_02278658(void *v, s32 *p);
void func_ov065_02278538(void *v, void *cmp);
void *func_ov065_0228903c(void *p);
void func_ov065_022891a0(void *p);
void func_ov065_02289040(void *a, void *b);
u32 func_ov065_02289098(void *e);
u32 func_ov065_02289078(void *e);
char *func_ov065_0228911c(void *rec, char *key, char *dflt);
double func_ov065_0228909c(void *rec, char *key, s32 a, s32 b);
s32 func_ov065_022890b8(void *rec, char *key, s32 a);
u32 func_ov065_02279144();
void func_ov065_02279138();

void func_ov065_0228ab3c(char **p, u8 c, s32 *n);
void func_ov065_0228ab50(char **p, char *s, s32 *n);
s32 func_ov065_0228ab8c(Ctx070 *c);
u32 func_ov065_0228ac6c(const char *s, u32 n);
void func_ov065_0228aca8(Ctx070 *c);
void func_ov065_0228ad34(Ctx070 *c, char *a, char *b, char *d, s32 e, s32 f, void *g, u32 h);
s32 func_ov065_0228ae10(const char *s, s32 n);
void func_ov065_0228ae2c(Ctx070 *c, s32 key);
u32 func_ov065_0228ae64(Ctx070 *c, s32 key);
void func_ov065_0228aeb0(Ctx070 *c);
void func_ov065_0228aed0(Ctx070 *c);
void func_ov065_0228af0c(Ctx070 *c);
u32 func_ov065_0228af48(Ctx070 *c, s32 i);
s32 func_ov065_0228af5c(Ctx070 *c);
void func_ov065_0228af68(Ctx070 *c, s32 i);
void func_ov065_0228afa8(Ctx070 *c, void *x);
s32 func_ov065_0228afd8(Ctx070 *c, s32 a, s32 b);
s32 func_ov065_0228b030(Ctx070 *c, u32 key);
void func_ov065_0228b070(Ctx070 *c, s32 a, s32 b, s32 d);
void func_ov065_0228b0a4(Ctx070 *c, s32 a, char *b, u32 mode);
s32 func_ov065_0228b108(void **a, void **b);
s32 func_ov065_0228b160(void **a, void **b);
s32 func_ov065_0228b1b8(void **a, void **b);
s32 func_ov065_0228b258(void **a, void **b);

void func_ov065_0228ab3c(char **p, u8 c, s32 *n) {
    **p = c;
    ++*n;
    ++*p;
}

void func_ov065_0228ab50(char **p, char *s, s32 *n) {
    s32 len;
    if (s == NULL) {
        s = data_ov065_0228e970;
    }
    len = func_021277d4(s) + 1;
    func_02128a00(*p, s, len);
    *n += len;
    *p += len;
}

s32 func_ov065_0228ab8c(Ctx070 *c) {
    struct {
        Unk_ov065_0228ab8c_Sa sa;
        char host[0x80];
    } l;
    u32 h = func_ov065_0228ac6c(c->unk_0c, 0x14);
    if (data_ov065_022918ac != NULL) {
        func_02127838(l.host, data_ov065_022918ac);
    } else {
        func_021130d0(l.host, data_ov065_0228e974, c->unk_0c, h);
    }
    l.sa.unk_1 = 2;
    l.sa.unk_2 = 0xee70;
    l.sa.unk_4.w = func_ov065_02278bf4(l.host);
    if (l.sa.unk_4.w == (u32)-1) {
        Unk_ov065_0228ab8c_Host *ent = func_ov065_02261408(l.host);
        if (ent == NULL) {
            return 2;
        }
        u8 *d = &l.sa.unk_4.ip.v[0];
        u8 *s2 = (u8 *)*ent->unk_0c;
        d[0] = s2[0];
        d[1] = s2[1];
        d[2] = s2[2];
        d[3] = s2[3];
    }
    if (c->unk_4b0 == -1) {
        c->unk_4b0 = func_ov065_02278dd4(2, 1, 0);
        if (c->unk_4b0 == -1) {
            return 1;
        }
    }
    if (func_ov065_02278d34(c->unk_4b0, &l.sa, 8) != 0) {
        func_ov065_02278dbc(c->unk_4b0);
        c->unk_4b0 = -1;
        return 3;
    }
    return 0;
}

u32 func_ov065_0228ac6c(const char *s, u32 n) {
    s32 ch;
    u32 h = 0;
    ch = *s;
    while (ch != 0) {
        if (ch >= 0 && ch < 0x80) {
            ch = data_0213a410[ch];
        }
        h = h * 0x9ccf9319;
        h += ch;
        s++;
        ch = *s;
    }
    return h % n;
}

void func_ov065_0228aca8(Ctx070 *c) {
    if (c->unk_80 > 0 && (u32)c->unk_80 > (u32)func_021277d4(data_ov065_0228e954)) {
        char *s = data_ov065_0228e954;
        s32 len = func_021277d4(s);
        if (func_0212a15c(c->unk_7c, s, len) == 0) {
            func_ov065_0228a20c(c, c->unk_7c + func_021277d4(s));
            c->unk_488(c, 5, data_ov065_022918a8, c->unk_494);
        }
    }
    c->unk_488(c, 4, data_ov065_022918a8, c->unk_494);
    func_ov065_0228a718(c);
}

void func_ov065_0228ad34(Ctx070 *c, char *a, char *b, char *d, s32 e, s32 f, void *g, u32 h) {
    if (f != 0 || data_ov065_02290fa0 == 1) {
        char *dp = data_ov065_0228e970;
        s32 neg = -1;
        c->unk_00 = 1;
        func_ov065_0228aeb0(c);
        func_ov065_022891e8(c);
        func_02127838(c->unk_0c, a);
        func_02127838(c->unk_30, b);
        func_02127838(c->unk_54, d);
        c->unk_488 = (void (*)(Ctx070 *, s32, u32, u32))g;
        c->unk_48c = 0;
        c->unk_494 = h;
        c->unk_498 = dp;
        c->unk_4a0 = 0;
        c->unk_4b0 = neg;
        c->unk_7c = 0;
        c->unk_80 = 0;
        c->unk_08 = 0;
        c->unk_484 = neg;
        c->unk_480 = 0;
        c->unk_4a4 = 0;
        c->unk_4b8 = e;
        func_ov065_0228a20c(c, dp);
        c->unk_5cc = 0;
        func_02128c60(func_ov065_02279144());
        func_ov065_02279138();
    }
}

s32 func_ov065_0228ae10(const char *s, s32 n) {
    s32 i;
    for (i = 0; i < n; i++) {
        if (s[i] == 0) {
            return i + 1;
        }
    }
    return -1;
}

void func_ov065_0228ae2c(Ctx070 *c, s32 key) {
    s32 k = key;
    Unk_ov065_0228ae2c_Ent *e = (Unk_ov065_0228ae2c_Ent *)func_ov065_022787c4(func_ov065_022891e8(c), &k);
    if (e != NULL) {
        e->unk_04--;
        if (e->unk_04 == 0) {
            func_ov065_02278810(func_ov065_022891e8(c), &k);
        }
    }
}

u32 func_ov065_0228ae64(Ctx070 *c, s32 key) {
    Unk_ov065_0228ae2c_Ent l;
    Unk_ov065_0228ae2c_Ent *e;
    l.unk_00 = (char *)key;
    e = (Unk_ov065_0228ae2c_Ent *)func_ov065_022787c4(func_ov065_022891e8(c), &l);
    if (e != NULL) {
        e->unk_04++;
        return (u32)e->unk_00;
    }
    l.unk_00 = func_ov065_02279100((char *)key);
    l.unk_04 = 1;
    func_ov065_0227885c(func_ov065_022891e8(c), &l);
    return (u32)l.unk_00;
}

void func_ov065_0228aeb0(Ctx070 *c) {
    c->unk_04 = func_ov065_022786bc(4, 0x64, 0);
    c->unk_5d0 = NULL;
}

void func_ov065_0228aed0(Ctx070 *c) {
    s32 n = func_ov065_02278684(c->unk_04);
    s32 i;
    for (i = 0; i < n; i++) {
        void *p = func_ov065_0227866c(c->unk_04, i);
        func_ov065_0228afa8(c, *(void **)p);
    }
    func_ov065_02278420(c->unk_04);
    func_ov065_0228af0c(c);
}

void func_ov065_0228af0c(Ctx070 *c) {
    if (c->unk_5d0 != NULL) {
        void *cur = c->unk_5d0;
        while (cur != NULL) {
            void *next = func_ov065_0228903c(cur);
            func_ov065_022891a0(&cur);
            cur = next;
        }
        c->unk_5d0 = NULL;
    }
}

u32 func_ov065_0228af48(Ctx070 *c, s32 i) {
    return *(u32 *)func_ov065_0227866c(c->unk_04, i);
}

s32 func_ov065_0228af5c(Ctx070 *c) {
    return func_ov065_02278684(c->unk_04);
}

void func_ov065_0228af68(Ctx070 *c, s32 i) {
    u32 v = *(u32 *)func_ov065_0227866c(c->unk_04, i);
    c->unk_488(c, 2, v, c->unk_494);
    func_ov065_02278570(c->unk_04, i);
    func_ov065_0228afa8(c, (void *)v);
}

void func_ov065_0228afa8(Ctx070 *c, void *x) {
    void *t = c->unk_5d0;
    if (t == NULL) {
        func_ov065_02289040(x, NULL);
    } else {
        func_ov065_02289040(x, t);
    }
    c->unk_5d0 = x;
}

s32 func_ov065_0228afd8(Ctx070 *c, s32 a, s32 b) {
    void *e;
    s32 i;
    s32 n = func_ov065_02278684(c->unk_04);
    for (i = 0; i < n; i++) {
        e = *(void **)func_ov065_0227866c(c->unk_04, i);
        if ((u32)a == func_ov065_02289098(e) && (u32)b == func_ov065_02289078(e)) {
            return i;
        }
    }
    return -1;
}

s32 func_ov065_0228b030(Ctx070 *c, u32 key) {
    s32 n = func_ov065_02278684(c->unk_04);
    s32 i;
    for (i = 0; i < n; i++) {
        if (key == *(u32 *)func_ov065_0227866c(c->unk_04, i)) {
            return i;
        }
    }
    return -1;
}

void func_ov065_0228b070(Ctx070 *c, s32 a, s32 b, s32 d) {
    func_ov065_02278658(c->unk_04, &a);
    c->unk_488(c, 0, a, c->unk_494);
}

void func_ov065_0228b0a4(Ctx070 *c, s32 a, char *b, u32 mode) {
    void *cmp;
    switch (mode) {
    case 0:
        cmp = (void *)func_ov065_0228b258;
        break;
    case 1:
        cmp = (void *)func_ov065_0228b1b8;
        break;
    case 2:
        cmp = (void *)func_ov065_0228b160;
        break;
    case 3:
        cmp = (void *)func_ov065_0228b108;
        break;
    default:
        cmp = (void *)func_ov065_0228b108;
        break;
    }
    c->unk_498 = b;
    c->unk_49c = a;
    data_ov065_022918b0 = c;
    func_ov065_02278538(c->unk_04, cmp);
}

s32 func_ov065_0228b108(void **a, void **b) {
    char *s1 = func_ov065_0228911c(*a, data_ov065_022918b0->unk_498, data_ov065_0228e970);
    char *s2 = func_ov065_0228911c(*b, data_ov065_022918b0->unk_498, data_ov065_0228e970);
    s32 r = func_02130b04(s1, s2);
    if (data_ov065_022918b0->unk_49c == 0) {
        r = -r;
    }
    return r;
}

s32 func_ov065_0228b160(void **a, void **b) {
    char *s1 = func_ov065_0228911c(*a, data_ov065_022918b0->unk_498, data_ov065_0228e970);
    char *s2 = func_ov065_0228911c(*b, data_ov065_022918b0->unk_498, data_ov065_0228e970);
    s32 r = func_0212a190(s1, s2);
    if (data_ov065_022918b0->unk_49c == 0) {
        r = -r;
    }
    return r;
}

s32 func_ov065_0228b1b8(void **a, void **b) {
    void *ra = *(void *volatile *)a;
    void *rb = *b;
    double d1 = func_ov065_0228909c(ra, data_ov065_022918b0->unk_498, 0, 0);
    double d2 = func_ov065_0228909c(rb, data_ov065_022918b0->unk_498, 0, 0);
    double d = d1 - d2;
    if (data_ov065_022918b0->unk_49c == 0) {
        d = 0 - d;
    }
    if ((float)d > 0) {
        return 1;
    }
    return (float)d < 0 ? -1 : 0;
}

s32 func_ov065_0228b258(void **a, void **b) {
    void *ra = *(void *volatile *)a;
    void *rb = *b;
    s32 r = func_ov065_022890b8(ra, data_ov065_022918b0->unk_498, 0);
    r -= func_ov065_022890b8(rb, data_ov065_022918b0->unk_498, 0);
    if (data_ov065_022918b0->unk_49c == 0) {
        r = -r;
    }
    return r;
}
}
