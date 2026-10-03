// mwcc-flags: -O4,p -str reuse
#include "types.h"

extern "C" {
char *data_ov065_0228e928[2] = {"queryid", "final"};
void *data_ov065_022918a4;
char *data_ov065_022918a0;
}

namespace F022884fc {

// ov065_066: GameSpy transport (RC4-like cipher, connection manager) 0x022884fc..0x02288df0

struct Unk_ov065_02288538_Cipher {
    u8 s[0x100];
    u8 i;
    u8 j;
    u8 k;
    u8 l;
    u8 m;
};

struct Unk_ov065_02288b60_Sa {
    u8 len;
    u8 family;
    u16 port;
    u32 addr;
};

struct Unk_ov065_02288b60_Ent {
    u32 addr;
    u16 port;
    u16 pad_06;
    u32 addr2;
    u16 port2;
    u16 pad_0e;
    s32 unk_10;
    u8 unk_14;
    u8 unk_15;
    u16 pad_16;
    void *unk_18;
    u32 unk_1c;
    Unk_ov065_02288b60_Ent *next;
};

struct Unk_ov065_02288c78_List {
    Unk_ov065_02288b60_Ent *head;
    Unk_ov065_02288b60_Ent *tail;
    s32 count;
};

struct Unk_ov065_02288b60_Mgr;
typedef void (*Unk_ov065_02288b60_Cb)(Unk_ov065_02288b60_Mgr *m, s32 code, void *arg, void *user);

struct Unk_ov065_02288b60_Mgr {
    s32 mode;
    s32 max;
    Unk_ov065_02288c78_List active;
    Unk_ov065_02288c78_List pending;
    s32 sock;
    s32 sock2;
    u32 unk_28;
    u8 key[0x14];
    s32 keycount;
    Unk_ov065_02288b60_Cb cb;
    void *user;
};

struct Unk_ov065_02288b60_Buf13 {
    u8 b[13];
};

struct Unk_ov065_02288b60_Buf8 {
    u8 b[8];
};

extern "C" {
extern u32 data_ov065_0228e504[];
extern u8 data_ov065_0228e8fc[];
extern Unk_ov065_02288b60_Buf13 data_ov065_0228e904;
extern Unk_ov065_02288b60_Buf8 data_ov065_0228e914;
extern s32 data_ov065_02290fa0;
extern u32 data_ov065_022918a8;
extern u8 data_0213a410[];

u32 func_0213335c(u32 a, u32 b);
s32 func_02129f1c(void *a, void *b);
s32 func_02130b04(void *a, void *b);

u32 func_ov065_02279144(void);
void func_ov065_02279138(void);
s32 func_ov065_02278ee8(s32 s);
s32 func_ov065_02278cb8(s32 s, void *buf, s32 len, u32 flags, void *sa, s32 *salen);
s32 func_ov065_02278c64(s32 s, void *buf, s32 len, u32 flags, void *sa, s32 salen);
s32 func_ov065_02278dbc(s32 s);
s32 func_ov065_02278dd4(s32 a, s32 b, s32 c);
void *func_ov065_02277af0(u32 n);
void func_ov065_02277ac8(void *p);
void *func_ov065_02278928(s32 a, s32 b, s32 c, void *cmp, void *hash, void *free);
s32 func_ov065_0228ae10(u8 *buf, s32 n);
void func_ov065_0228ae2c(s32 a, void *p);
void func_ov065_02289174(void *e, u32 v, u8 *buf);
void func_ov065_02288e2c(void *e, u8 *buf, s32 n);
void func_ov065_02288f64(void *e, u8 *buf);
}

typedef Unk_ov065_02288538_Cipher Cipher;
typedef Unk_ov065_02288b60_Mgr Mgr;
typedef Unk_ov065_02288b60_Ent Ent;
typedef Unk_ov065_02288c78_List List;
typedef Unk_ov065_02288b60_Sa Sa;

extern "C" {
u32 func_ov065_02288538(Cipher *c, u32 x);
void func_ov065_02288670(Cipher *c);
u32 func_ov065_022886b4(Cipher *c, u32 n, u8 *key, u32 keylen, u8 *j, u32 *idx);
s32 func_ov065_02288c84(List *l, Ent *e);
void func_ov065_02288830(Mgr *m, s32 flag);
void func_ov065_022887d8(Mgr *m);
void func_ov065_022887a8(Mgr *m);
void func_ov065_02288b60(Mgr *m, Ent *e);
s32 func_ov065_02288930(Mgr *m, Ent *e, u8 *buf, s32 n);
void func_ov065_02288934(Mgr *m, Ent *e, u8 *buf, s32 n);
void func_ov065_022889ac(Mgr *m, Ent *e, u8 *buf, s32 n);
void func_ov065_02288c78(List *l);
Ent *func_ov065_02288cc0(List *l);
void func_ov065_02288ce0(List *l, Ent *e);
void func_ov065_02288cf8(List *l, Ent *e);
void func_ov065_02288dbc(u32 *a, u32 *b);
u32 func_ov065_02288dc8(u32 *p, u32 n);
void func_ov065_02288dd4(u32 *p);
u32 func_ov065_02288df0(u8 *s, u32 n);

}
}

namespace F02288e2c {

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
extern char *data_ov065_0228e928[2];
extern char *data_ov065_0228e504[];
extern u16 data_0213a510[];
extern s32 data_ov065_02290fa0;
extern s32 data_ov065_022918a8;

s32 strcmp(const char *, const char *);
u32 STD_GetStringLength(const char *);
s32 OS_SPrintf(char *, const char *, ...);
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

}
}

namespace F02288e2c {
extern "C" {
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
            if (i + (s32)STD_GetStringLength(data_ov065_0228e504[*pj]) + 1 >= 0x100) {
                break;
            }
            i += OS_SPrintf(buf + i, "\\%s", data_ov065_0228e504[*pj]);
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
}
}

namespace F02288e2c {
extern "C" {
s32 func_ov065_02289364(void *o, s32 a, s32 b, u8 *c, s32 e, s32 f, s32 g) {
    return func_ov065_02289384(o, a, b, c, e, f, 0x80, g);
}
}
}

namespace F02288e2c {
extern "C" {
s32 func_ov065_02289324(Unk_ov065_02289460_Obj *o, s32 a, u16 b, s32 c, s32 e) {
    s32 x = func_ov065_02278bf4(a);
    return func_ov065_02289880(&o->unk_4c, x, Unk_ov065_02289044_Htons(b), c, e);
}
}
}

namespace F02288e2c {
extern "C" {
s32 func_ov065_022892ec(Unk_ov065_02289460_Obj *o, s32 a, u16 b, s32 c) {
    s32 x = func_ov065_02278bf4(a);
    return func_ov065_02289808(&o->unk_4c, x, Unk_ov065_02289044_Htons(b), c);
}
}
}

namespace F02288e2c {
extern "C" {
void func_ov065_022892c8(Unk_ov065_02289460_Obj *o) {
    s32 r = func_ov065_0228b030(&o->unk_4c);
    if (r != -1) {
        func_ov065_0228af68(&o->unk_4c, r);
    }
}
}
}

namespace F02288e2c {
extern "C" {
s32 func_ov065_022892b0(void *o) {
    func_ov065_0228876c(o);
    return func_ov065_022896dc(&((Unk_ov065_02289460_Obj *)o)->unk_4c);
}
}
}

namespace F02288e2c {
extern "C" {
s32 func_ov065_02289298(void *o) {
    func_ov065_0228a718(&((Unk_ov065_02289460_Obj *)o)->unk_4c);
    return func_ov065_02288af4(o);
}
}
}

namespace F02288e2c {
extern "C" {
void func_ov065_02289280(Unk_ov065_02289460_Obj *o) {
    func_ov065_02289298(o);
    func_ov065_0228aed0(&o->unk_4c);
}
}
}

namespace F02288e2c {
extern "C" {
s32 func_ov065_02289274(Unk_ov065_02289460_Obj *o) {
    return func_ov065_0228af48(&o->unk_4c);
}
}
}

namespace F02288e2c {
extern "C" {
s32 func_ov065_02289268(Unk_ov065_02289460_Obj *o) {
    return func_ov065_0228af5c(&o->unk_4c);
}
}
}

namespace F02288e2c {
extern "C" {
s32 func_ov065_02289258(Unk_ov065_02289460_Obj *o) {
    Unk_ov065_02289258_Pad pad;
    func_ov065_0228b0a4(&o->unk_4c);
}
}
}

namespace F02288e2c {
extern "C" {
s32 func_ov065_0228924c(Unk_ov065_02289460_Obj *o) {
    return o->unk_4ec;
}
}
}

namespace F02288e2c {
extern "C" {
s32 func_ov065_02289240(void **p) {
    return func_ov065_02288df0(*p);
}
}
}

namespace F02288e2c {
extern "C" {
s32 func_ov065_02289234(char **a, char **b) {
    return func_02130b04(*a, *b);
}
}
}

namespace F02288e2c {
extern "C" {
s32 func_ov065_02289228(void **p) {
    return func_ov065_02277ac8(*p);
}
}
}

namespace F02288e2c {
extern "C" {
void *func_ov065_022891e8() {
    if (data_ov065_022918a4 == NULL) {
        data_ov065_022918a4 = func_ov065_02278928(8, 100, 2, (void *)func_ov065_02289240, (void *)func_ov065_02289234, (void *)func_ov065_02289228);
    }
    return data_ov065_022918a4;
}
}
}

namespace F02288e2c {
extern "C" {
void func_ov065_022891bc() {
    if (data_ov065_022918a4 != NULL) {
        if (func_ov065_022788b0(data_ov065_022918a4) == 0) {
            func_ov065_022788f0(data_ov065_022918a4);
            data_ov065_022918a4 = NULL;
        }
    }
}
}
}

namespace F02288e2c {
extern "C" {
void func_ov065_022891a0(Unk_ov065_02289174_Ctx **pp) {
    Unk_ov065_02289174_Ctx *q = *pp;
    func_ov065_022788f0(q->unk_18);
    q->unk_18 = NULL;
    func_ov065_02277ac8(q);
}
}
}

namespace F02288e2c {
extern "C" {
s32 func_ov065_02289174(Unk_ov065_02289174_Ctx *a, char *k, char *v) {
    Unk_ov065_02289174_KV kv;
    kv.unk_00 = func_ov065_0228ae64(0, k);
    kv.unk_04 = func_ov065_0228ae64(0, v);
    return func_ov065_0227885c(a->unk_18, &kv);
}
}
}

namespace F02288e2c {
extern "C" {
void func_ov065_0228914c(void *a, char *b) {
    char buf[0x14];
    OS_SPrintf(buf, "%d");
    func_ov065_02289174((Unk_ov065_02289174_Ctx *)a, b, buf);
}
}
}

namespace F02288e2c {
extern "C" {
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
}
}

namespace F02288e2c {
extern "C" {
s32 func_ov065_022890b8(void *a, char *b, s32 c) {
    char *v;
    s32 t;
    if (strcmp(b, "ping") == 0) {
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
}
}

namespace F02288e2c {
extern "C" {
u64 func_ov065_0228909c(void *a, char *b, u64 v) {
    func_ov065_0228911c(a, b, 0);
    return v;
}
}
}

namespace F02288e2c {
extern "C" {
s32 func_ov065_02289098(s32 *o) {
    return o[0];
}
}
}

namespace F02288e2c {
extern "C" {
u16 func_ov065_0228907c(Unk_ov065_02289044_Hdr *o) {
    return Unk_ov065_02289044_Htons(o->unk_04);
}
}
}

namespace F02288e2c {
extern "C" {
u16 func_ov065_02289078(Unk_ov065_02289044_Hdr *o) {
    return o->unk_04;
}
}
}

namespace F02288e2c {
extern "C" {
BOOL func_ov065_02289064(Unk_ov065_02289044_Hdr *o) {
    if ((o->unk_15 & 2) == 2) {
        return TRUE;
    }
    return FALSE;
}
}
}

namespace F02288e2c {
extern "C" {
s32 func_ov065_02289060(s32 *o) {
    return o[2];
}
}
}

namespace F02288e2c {
extern "C" {
u16 func_ov065_02289044(Unk_ov065_02289044_Hdr *o) {
    return Unk_ov065_02289044_Htons(o->unk_0c);
}
}
}

namespace F02288e2c {
extern "C" {
void func_ov065_02289040(Unk_ov065_0228903c_Obj *o, s32 v) {
    o->unk_20 = v;
}
}
}

namespace F02288e2c {
extern "C" {
s32 func_ov065_0228903c(Unk_ov065_0228903c_Obj *o) {
    return o->unk_20;
}
}
}

namespace F02288e2c {
extern "C" {
s32 func_ov065_02288ffc(char *s) {
    Unk_ov065_02288ffc_W l = *(Unk_ov065_02288ffc_W *)data_ov065_0228e928;
    u32 i;
    char **p = l.v;
    for (i = 0; i < 2; i++) {
        if (strcmp(s, *p) == 0) {
            return 0;
        }
        p++;
    }
    return 1;
}
}
}

namespace F02288e2c {
extern "C" {
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
}
}

namespace F02288e2c {
extern "C" {
void func_ov065_02288f64(Unk_ov065_02289174_Ctx *c, char *s) {
    char *k;
    char *v;
    k = func_ov065_02288fb8(s + 1, 0x5c);
    if (k != NULL) {
        do {
            v = func_ov065_02288fb8(NULL, 0x5c);
            if (v == NULL) {
                v = "";
            }
            if (func_ov065_02288ffc(k) != 0) {
                func_ov065_02289174(c, k, v);
            }
            k = func_ov065_02288fb8(NULL, 0x5c);
        } while (k != NULL);
    }
}
}
}

namespace F02288e2c {
extern "C" {
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
                OS_SPrintf(buf, "%s%d", s, j);
                func_ov065_02289174(c, buf, p);
                p += r;
                len -= r;
                s += STD_GetStringLength(s) + 1;
            }
        }
    }
}
}
}

namespace F022884fc {
extern "C" {
u32 func_ov065_02288df0(u8 *s, u32 n) {
    s32 c;
    u32 h = 0;
    c = *(s8 *)s;
    if (c != 0) {
        do {
            if (c >= 0 && c < 0x80) {
                c = data_0213a410[c];
            }
            h = h * 0x9ccf9319;
            h += c;
            s++;
            c = *(s8 *)s;
        } while (c != 0);
    }
    return h % n;
}
}
}

namespace F022884fc {
extern "C" {
void func_ov065_02288dd4(u32 *p) {
    func_ov065_0228ae2c(0, (void *)p[0]);
    func_ov065_0228ae2c(0, (void *)p[1]);
}
}
}

namespace F022884fc {
extern "C" {
u32 func_ov065_02288dc8(u32 *p, u32 n) {
    return func_ov065_02288df0((u8 *)*p, n);
}
}
}

namespace F022884fc {
extern "C" {
void func_ov065_02288dbc(u32 *a, u32 *b) {
    func_02130b04((void *)*a, (void *)*b);
}
}
}

namespace F022884fc {
extern "C" {
u32 func_ov065_02288db8(Ent *e) {
    return e->unk_1c;
}
}
}

namespace F022884fc {
extern "C" {
Ent *func_ov065_02288d44(s32 unused, u32 addr, u32 port) {
    Ent *e = (Ent *)func_ov065_02277af0(0x24);
    if (e == 0) {
        return 0;
    }
    e->unk_18 = func_ov065_02278928(8, 8, 4, (void *)func_ov065_02288dc8, (void *)func_ov065_02288dbc, (void *)func_ov065_02288dd4);
    if (e->unk_18 == 0) {
        func_ov065_02277ac8(e);
        return 0;
    }
    e->unk_14 = 0;
    e->unk_15 = 0;
    e->next = 0;
    e->unk_1c = 0;
    e->unk_10 = 0;
    e->addr = addr;
    e->port = port;
    e->addr2 = 0;
    e->port2 = 0;
    return e;
}
}
}

namespace F022884fc {
extern "C" {
void func_ov065_02288d40(Ent *e, u32 v) {
    e->unk_15 = v;
}
}
}

namespace F022884fc {
extern "C" {
void func_ov065_02288d38(Ent *e, u32 addr, u32 port) {
    e->addr2 = addr;
    e->port2 = port;
}
}
}

namespace F022884fc {
extern "C" {
void func_ov065_02288d34(Ent *e, s32 v) {
    e->unk_10 = v;
}
}
}

namespace F022884fc {
extern "C" {
void func_ov065_02288d30(Ent *e, u32 v) {
    e->unk_14 = v;
}
}
}

namespace F022884fc {
extern "C" {
u32 func_ov065_02288d2c(Ent *e) {
    return e->unk_14;
}
}
}

namespace F022884fc {
extern "C" {
BOOL func_ov065_02288d18(u32 v) {
    if (v == data_ov065_022918a8) {
        return TRUE;
    }
    return FALSE;
}
}
}

namespace F022884fc {
extern "C" {
void func_ov065_02288cf8(List *l, Ent *e) {
    if (l->tail != 0) {
        l->tail->next = e;
    }
    l->tail = e;
    e->next = 0;
    if (l->head == 0) {
        l->head = e;
    }
    l->count = l->count + 1;
}
}
}

namespace F022884fc {
extern "C" {
void func_ov065_02288ce0(List *l, Ent *e) {
    e->next = l->head;
    l->head = e;
    if (l->tail == 0) {
        l->tail = e;
    }
    l->count = l->count + 1;
}
}
}

namespace F022884fc {
extern "C" {
Ent *func_ov065_02288cc0(List *l) {
    Ent *e = l->head;
    if (e != 0) {
        l->head = e->next;
        if (l->head == 0) {
            l->tail = 0;
        }
        l->count = l->count - 1;
    }
    return e;
}
}
}

namespace F022884fc {
extern "C" {
s32 func_ov065_02288c84(List *l, Ent *e) {
    Ent *cur;
    Ent *prev;
    prev = 0;
    cur = l->head;
    if (cur != 0) {
        do {
            if (cur == e) {
                if (prev != 0) {
                    prev->next = cur->next;
                }
                if (l->head == cur) {
                    l->head = cur->next;
                }
                if (l->tail == cur) {
                    l->tail = prev;
                }
                l->count = l->count - 1;
                return 1;
            }
            prev = cur;
            cur = cur->next;
        } while (cur != 0);
    }
    return 0;
}
}
}

namespace F022884fc {
extern "C" {
void func_ov065_02288c78(List *l) {
    l->tail = 0;
    l->head = l->tail;
    l->count = 0;
}
}
}
