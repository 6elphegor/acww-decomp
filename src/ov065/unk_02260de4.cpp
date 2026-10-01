// mwcc-flags: -O4,p
#include "types.h"

// ov065_003: socket-library style free functions (0x02260de4..0x02261638)

struct Unk_ov065_02260de4_Ring {
    u8 pad_00[0xf8];
    s32 unk_f8;
    u8 pad_fc[8];
    u32 unk_104_dummy;
};

struct Unk_ov065_02260de4_Buf {
    u8 pad_00[4];
    u16 unk_04;
};

struct Unk_ov065_02260de4_Ctx {
    u8 pad_00[0xf8];
    s32 unk_f8;
    u8 pad_fc[8];
    Unk_ov065_02260de4_Buf *unk_104;
};

struct Unk_ov065_02260de4 {
    u8 pad_00[8];
    u8 unk_08;
    u8 pad_09[0x3b];
    s32 unk_44;
    u8 pad_48[0x1c];
    Unk_ov065_02260de4_Ctx *unk_64;
    u8 pad_68[8];
    volatile s16 unk_70;
    s8 unk_72;
    s8 unk_73;
    u16 unk_74;
    u8 pad_76[6];
    Unk_ov065_02260de4 *unk_7c;
};

struct Unk_ov065_02260fa4_Ent {
    Unk_ov065_02260de4 *unk_00;
    s16 unk_04;
    u16 unk_06;
};

struct Unk_ov065_0226129c_Sa {
    u8 unk_00;
    u8 unk_01;
    u16 unk_02;
    u32 unk_04;
};

struct Unk_ov065_02261118_Cfg {
    u32 unk_00;
    u32 unk_04;
    u32 unk_08;
    u32 unk_0c;
    u32 unk_10;
    u32 unk_14;
    void *unk_18;
    void *unk_1c;
    u32 unk_20;
    u8 pad_24[0xc];
    u32 unk_30;
    u32 unk_34;
};

struct Unk_ov065_02261118_Src {
    u8 pad_00[4];
    void *unk_04;
    void *unk_08;
    u32 unk_0c;
    u32 unk_10;
    u32 unk_14;
    u32 unk_18;
    u32 unk_1c;
    u32 unk_20;
    u8 pad_24[8];
    u32 unk_2c;
    u32 unk_30;
};

struct Unk_ov065_02261408_Hostent {
    char *unk_00;
    char **unk_04;
    s16 unk_08;
    s16 unk_0a;
    char **unk_0c;
};

typedef void (*Unk_ov065_02261118_Free)(s32, void *, u32);
typedef void *(*Unk_ov065_02261118_Alloc)(s32, u32);

extern "C" {

// main module
s32 func_01ffa2ec();
s32 func_01ffa3d4(s32);
s32 func_021132e0(s32);
s32 func_02116048(s32, void *, s32);
s32 func_02113088(char *, u32, const char *, ...);
s32 func_021277fc(char *, s32, s32);
s64 func_02133100(s64, s64);

// same overlay, out of range
s32 func_ov065_02260598(Unk_ov065_02260de4 *);
s32 func_ov065_02260c40();
u32 func_ov065_02260cb4();
s32 func_ov065_02260cfc(u32, u32);
u32 func_ov065_02260d2c(u32);
u32 func_ov065_02260d68(s32);
s32 func_ov065_0225f344(void *);
s32 func_ov065_0225f9a8(s32, u16 *, u32 *);
s32 func_ov065_0225fa6c(s32, s32, s32);
s32 func_ov065_0225fbbc(s32, u32, u32);
s32 func_ov065_0225fc98(s32, u32);
s32 func_ov065_0225f84c(void *);
s32 func_ov065_02260a84(s32, s32, s32);
s32 func_ov065_022607ec(s32, s32, s32);
s32 func_ov065_022606e8(s32, s32, s32, u32, u32, u32);
s32 func_ov065_02260254(s32, s32, s32, u16 *, u32 *, u32);
s32 func_ov065_02261718(s32, u32, u32);
s32 func_ov065_02261758(s32, s32 *);

// data
extern Unk_ov065_02260de4 *data_ov065_0228ea10;
extern Unk_ov065_02260de4 *data_ov065_0228ea14;
extern u32 data_ov065_0228ea18;
extern Unk_ov065_02261118_Free data_ov065_0228ea1c;
extern Unk_ov065_02261118_Alloc data_ov065_0228ea20;
extern char *data_ov065_0228ea24[2];
extern Unk_ov065_02261408_Hostent data_ov065_0228ea2c;
extern char data_ov065_0228ea3c[16];
extern Unk_ov065_02261118_Cfg data_ov065_0228ea4c;
extern char data_ov065_0228ea84[];
extern char data_ov065_0228b40c[];
extern u8 data_ov065_0228b3dc[];
extern u8 data_ov065_0228b3c4[];
extern u32 data_ov065_0228ebfc[2];

struct Unk_ov065_02261638_Rng {
    u64 unk_00;
    s64 unk_08;
    s64 unk_10;
};
extern Unk_ov065_02261638_Rng data_ov065_0228ec04;

static inline u32 HTONL(u32 x) {
    return ((x << 24) & 0xff000000) | (((x << 8) & 0xff0000) | (((x >> 24) & 0xff) | ((x >> 8) & 0xff00)));
}

static inline u16 HTONS(u16 x) {
    return (x >> 8 & 0xff) | ((x << 8) & 0xff00);
}

s32 func_ov065_02260de4(Unk_ov065_02260de4 *o) {
    s32 r;
    Unk_ov065_02260de4_Ctx *c;
    c = o->unk_64;
    r = 0;
    if (c != NULL) {
        s32 m = o->unk_73;
        if (m == 1) {
            Unk_ov065_02260de4_Buf *b = c->unk_104;
            if (b != NULL) {
                r = b->unk_04;
            }
        } else if (m == 0 || m == 4) {
            r = o->unk_44 - c->unk_f8;
        }
    }
    return r;
}

s32 func_ov065_02260f04(s32 x);

u32 func_ov065_02260e18(Unk_ov065_02260de4 *o) {
    u32 r = 0;
    BOOL ok;
    if (func_ov065_02260f04((s32)o)) {
        r |= 0x80;
    } else {
        if (o->unk_70 & 0x40) {
            r |= 0x20;
        }
        if (o->unk_73 == 1 || (o->unk_70 & 4)) {
            s32 h = func_01ffa2ec();
            if (func_ov065_02260de4(o) > 0) {
                r |= 1;
            }
            if (func_ov065_02260598(o) > 0) {
                r |= 8;
            }
            func_01ffa3d4(h);
        }
        ok = TRUE;
        if (o->unk_73 != 0 && o->unk_73 != 4) {
            ok = FALSE;
        }
        if (ok) {
            if ((o->unk_70 & 4) && o->unk_08 != 4 && (r & 1) == 0) {
                o->unk_70 &= ~6;
            }
            if ((o->unk_70 & 2) == 0 && (o->unk_70 & 4) == 0) {
                r |= 0x40;
            }
        }
    }
    return r;
}

u32 func_ov065_02260ed8(u32 x) {
    return (x + 3) & ~3;
}

Unk_ov065_02260de4 **func_ov065_02260f3c(Unk_ov065_02260de4 **pp, Unk_ov065_02260de4 *n);

BOOL func_ov065_02260ee0(Unk_ov065_02260de4 *n) {
    if (func_ov065_02260f3c(&data_ov065_0228ea14, n) == NULL) {
        return FALSE;
    }
    return TRUE;
}

s32 func_ov065_02260f04(s32 x) {
    if (x <= 0 || func_ov065_02260f3c(&data_ov065_0228ea10, (Unk_ov065_02260de4 *)x) == NULL) {
        return 1;
    }
    return 0;
}

void func_ov065_02260f54(Unk_ov065_02260de4 **pp, Unk_ov065_02260de4 *n);

void func_ov065_02260f2c(Unk_ov065_02260de4 *n) {
    func_ov065_02260f54(&data_ov065_0228ea14, n);
}

Unk_ov065_02260de4 **func_ov065_02260f3c(Unk_ov065_02260de4 **pp, Unk_ov065_02260de4 *n) {
    Unk_ov065_02260de4 *p = *pp;
    if (p != NULL) {
        do {
            if (p == n) {
                return pp;
            }
            pp = &p->unk_7c;
            p = p->unk_7c;
        } while (p != NULL);
    }
    return NULL;
}

void func_ov065_02260f54(Unk_ov065_02260de4 **pp, Unk_ov065_02260de4 *n) {
    Unk_ov065_02260de4 **l = func_ov065_02260f3c(pp, n);
    if (l != NULL) {
        *l = n->unk_7c;
    }
}

void func_ov065_02260f6c(Unk_ov065_02260de4 *n) {
    func_ov065_02260f54(&data_ov065_0228ea10, n);
}

void func_ov065_02260f8c(Unk_ov065_02260de4 **pp, Unk_ov065_02260de4 *n);

void func_ov065_02260f7c(Unk_ov065_02260de4 *n) {
    func_ov065_02260f8c(&data_ov065_0228ea14, n);
}

void func_ov065_02260f8c(Unk_ov065_02260de4 **pp, Unk_ov065_02260de4 *n) {
    n->unk_7c = *pp;
    *pp = n;
}

void func_ov065_02260f94(Unk_ov065_02260de4 *n) {
    func_ov065_02260f8c(&data_ov065_0228ea10, n);
}

s32 func_ov065_02260fa4(Unk_ov065_02260fa4_Ent *arr, u32 n, s64 timeout) {
    s32 cnt;
    BOOL finite = (timeout != -1) ? TRUE : FALSE;
    for (;;) {
        Unk_ov065_02260fa4_Ent *p;
        u32 i;
        p = arr;
        i = cnt = 0;
        if (i < n) {
            do {
                s32 ev = p->unk_04;
                ev |= 0xe0;
                ev &= func_ov065_02260e18(p->unk_00);
                if (ev != 0) {
                    cnt++;
                }
                p->unk_06 = ev;
                p++;
                i++;
            } while (i < n);
        }
        if (cnt > 0) {
            break;
        }
        if (finite && timeout <= 0) {
            break;
        }
        func_021132e0(1);
        timeout = timeout - 0x20b;
    }
    return cnt;
}

void func_ov065_02261034(u32 v, u8 *p) {
    p[0] = v >> 24;
    p[1] = v >> 16;
    p[2] = v >> 8;
    p[3] = v;
}

char *func_ov065_02261044(s32 mode, s32 x, char *buf, u32 len) {
    u8 b[8];
    if (mode != 2) {
        return NULL;
    }
    if (len < 0x10) {
        return NULL;
    }
    func_02116048(x, b, 4);
    func_ov065_02261034(*(u32 *)b, b + 4);
    func_02113088(buf, 0x10, data_ov065_0228b40c, b[7], b[6], b[5], b[4]);
    return buf;
}

s32 func_ov065_022610a0(u32 a, u32 *out) {
    u32 r = func_ov065_02260d2c(a);
    if (r == 0) {
        return 0;
    }
    *out = HTONL(r);
    return 1;
}

char *func_ov065_022610f0(u32 a, ...) {
    func_ov065_02261044(2, (s32)&a, data_ov065_0228ea3c, 0x10);
    return data_ov065_0228ea3c;
}

s32 func_ov065_02261110() {
    return func_ov065_02260c40();
}

void *func_ov065_0226123c(u32 sz);
void func_ov065_0226121c(void *p);

s32 func_ov065_02261118(Unk_ov065_02261118_Src *s) {
    u32 t;
    Unk_ov065_02261118_Cfg *c;
    if (s->unk_0c == 1) {
        t = 1;
    } else {
        t = 0;
    }
    c = &data_ov065_0228ea4c;
    c->unk_00 = t;
    c->unk_04 = HTONL(s->unk_10);
    c->unk_08 = HTONL(s->unk_14);
    c->unk_0c = HTONL(s->unk_18);
    c->unk_10 = HTONL(s->unk_1c);
    c->unk_14 = HTONL(s->unk_20);
    c->unk_18 = (void *)func_ov065_0226123c;
    c->unk_1c = (void *)func_ov065_0226121c;
    data_ov065_0228ea20 = (Unk_ov065_02261118_Alloc)s->unk_04;
    data_ov065_0228ea1c = (Unk_ov065_02261118_Free)s->unk_08;
    c->unk_20 = 0x40;
    c->unk_30 = s->unk_2c;
    c->unk_34 = s->unk_30;
    return func_ov065_0225f344(c);
}

void func_ov065_0226121c(void *p) {
    u32 *q = (u32 *)p;
    if (q != NULL) {
        q--;
        data_ov065_0228ea1c(0, q, *q);
    }
}

void *func_ov065_0226123c(u32 sz) {
    u32 n = sz + 4;
    u32 *q = (u32 *)data_ov065_0228ea20(0, n);
    if (q != NULL) {
        *q = n;
        q++;
    }
    return q;
}

s32 func_ov065_0226125c(Unk_ov065_02260de4 *o, s32 cmd, u32 flags) {
    if (o == NULL) {
        return -1;
    }
    switch (cmd) {
    case 3:
        if (o->unk_72 == 1) {
            return 0;
        }
        return 4;
    case 4:
        if (flags & 4) {
            o->unk_72 = 0;
        } else {
            o->unk_72 = 1;
        }
        break;
    }
    return 0;
}

s32 func_ov065_0226129c(s32 a, Unk_ov065_0226129c_Sa *sa) {
    u16 port;
    u32 addr;
    s32 r = func_ov065_0225f9a8(a, &port, &addr);
    if (r >= 0) {
        sa->unk_02 = HTONS(port);
        sa->unk_04 = HTONL(addr);
    }
    return r;
}

s32 func_ov065_022612f4(s32 a, s32 b, s32 c) {
    return func_ov065_0225fa6c(a, b, c);
}

s32 func_ov065_022612fc(u32 *a, u32 *b) {
    return func_ov065_02260cfc(HTONL(*a), HTONL(*b));
}

u32 func_ov065_02261358() {
    return HTONL(func_ov065_02260cb4());
}

s32 func_ov065_02261390(Unk_ov065_02260de4 *o, Unk_ov065_0226129c_Sa *sa) {
    u32 ip;
    u32 port;
    if (o == NULL) {
        return -0x27;
    }
    ip = func_ov065_02260cb4();
    if (o != NULL) {
        port = o->unk_74;
    } else {
        port = 0;
    }
    if (ip == 0) {
        port = 0;
    }
    sa->unk_00 = 8;
    sa->unk_01 = 2;
    sa->unk_02 = HTONS(port);
    sa->unk_04 = HTONL(ip);
    return 0;
}

Unk_ov065_02261408_Hostent *func_ov065_02261408(s32 x) {
    u32 ip = func_ov065_02260d68(x);
    if (ip == 0) {
        return NULL;
    }
    func_021277fc(data_ov065_0228ea84, x, 0x101);
    Unk_ov065_02261408_Hostent *h = &data_ov065_0228ea2c;
    h->unk_00 = data_ov065_0228ea84;
    h->unk_04 = NULL;
    h->unk_08 = 2;
    h->unk_0a = 4;
    h->unk_0c = data_ov065_0228ea24;
    data_ov065_0228ea24[0] = (char *)&data_ov065_0228ea18;
    data_ov065_0228ea24[1] = NULL;
    data_ov065_0228ea18 = HTONL(ip);
    return h;
}

s32 func_ov065_0226148c(s32 a, s32 b, s32 c) {
    return func_ov065_02260a84(a, b, c);
}

s32 func_ov065_02261494(s32 a, s32 b, s32 c) {
    return func_ov065_022607ec(a, b, c);
}

s32 func_ov065_0226149c(s32 a, s32 b, s32 c, u32 d, Unk_ov065_0226129c_Sa *sa) {
    u32 port;
    u32 ip;
    if (sa != NULL) {
        port = HTONS(sa->unk_02);
        ip = HTONL(sa->unk_04);
    } else {
        port = 0;
        ip = port;
    }
    return func_ov065_022606e8(a, b, c, port, ip, d);
}

s32 func_ov065_0226150c(s32 a, s32 b, s32 c, u32 d) {
    return func_ov065_022606e8(a, b, c, 0, 0, d);
}

s32 func_ov065_02261524(s32 a, s32 b, s32 c, u32 d, Unk_ov065_0226129c_Sa *sa) {
    u16 port;
    u32 ip;
    s32 r = func_ov065_02260254(a, b, c, &port, &ip, d);
    if (r >= 0) {
        Unk_ov065_0226129c_Sa *q = *(Unk_ov065_0226129c_Sa *volatile *)&sa;
        if (q != NULL) {
            q->unk_02 = HTONS(port);
            q->unk_04 = HTONL(ip);
        }
    }
    return r;
}

s32 func_ov065_02261588(s32 a, s32 b, s32 c, u32 d) {
    return func_ov065_02260254(a, b, c, 0, 0, d);
}

s32 func_ov065_022615a0(s32 a, Unk_ov065_0226129c_Sa *sa) {
    return func_ov065_0225fbbc(a, HTONS(sa->unk_02), HTONL(sa->unk_04));
}

s32 func_ov065_022615f0(s32 a, Unk_ov065_0226129c_Sa *sa) {
    return func_ov065_0225fc98(a, HTONS(sa->unk_02));
}

s32 func_ov065_02261610(s32 a, s32 b) {
    if (b == 1) {
        return func_ov065_0225f84c(data_ov065_0228b3dc);
    }
    return func_ov065_0225f84c(data_ov065_0228b3c4);
}

s32 func_ov065_02261638(s32 self) {
    struct {
        u8 flag[2];
        s32 res;
        u16 port[2];
    } l;
    s32 i;
    u8 *pf;
    u16 *pp;
    u32 *pt;
    s32 j;
    Unk_ov065_02261638_Rng *g = &data_ov065_0228ec04;
    g->unk_00 = func_02133100(g->unk_08, g->unk_00) + g->unk_10;
    l.port[0] = (u32)(((g->unk_00 >> 32) * 0x10000) >> 32);
    g->unk_00 = func_02133100(g->unk_08, g->unk_00) + g->unk_10;
    l.port[1] = (u32)(((g->unk_00 >> 32) * 0x10000) >> 32);
    if (func_ov065_02261758(self, &l.res)) {
        return l.res;
    }
    l.flag[0] = 1;
    l.flag[1] = 1;
    for (i = 0; i < 3; i++) {
        j = 0;
        pf = l.flag;
        pp = l.port;
        pt = data_ov065_0228ebfc;
        for (; j < 2; pf++, pp++, pt++, j++) {
            if (*pf) {
                l.res = func_ov065_02261718(self, *pt, *pp);
                if (l.res != 0 && l.res != -1) {
                    goto done;
                }
                if (l.res == -1) {
                    *pf = 0;
                }
            }
        }
    }
done:
    if (l.res == -1) {
        l.res = 0;
    }
    return l.res;
}

}
