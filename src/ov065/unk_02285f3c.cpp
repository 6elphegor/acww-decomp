// mwcc-flags: -O4,p
#include "types.h"

// ov065_062: DWC/GameSpy-like UDP reliable-peer table (0x02285f3c..0x022867c0)

struct Unk_ov065_0228659c_Conn;

struct Unk_ov065_02285f3c_Peer {
    u32 unk_00;
    u16 unk_04;
    Unk_ov065_0228659c_Conn *unk_08;
    s32 unk_0c;
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    u32 unk_1c;
    s32 unk_20;
    s32 unk_24;
    u8 pad_28[0x44 - 0x28];
    void *unk_44;
    u8 pad_48[0x50 - 0x48];
    void *unk_50;
    s32 unk_54;
    s32 unk_58;
    void *unk_5c;
    void *unk_60;
    u16 unk_64;
    u16 unk_66;
    u8 pad_68[0x88 - 0x68];
    u32 unk_88;
    u8 pad_8c[0x98 - 0x8c];
    void *unk_98;
    void *unk_9c;
};

struct Unk_ov065_0228659c_Conn {
    s32 unk_00;
    u32 unk_04;
    u16 unk_08;
    void *unk_0c;
    void *unk_10;
    s32 unk_14;
    s32 unk_18;
    s32 unk_1c;
    s32 unk_20;
    s32 unk_24;
    s32 unk_28;
    u8 pad_2c[0x38 - 0x2c];
    u32 unk_38;
    u32 unk_3c;
};

struct Unk_ov065_0228627c_Sa {
    u8 unk_0;
    u8 unk_1;
    u16 unk_2;
    u32 unk_4;
};

struct Unk_ov065_022867c0_Host {
    char *unk_00;
    char **unk_04;
    s16 unk_08;
    s16 unk_0a;
    u32 **unk_0c;
};

typedef Unk_ov065_02285f3c_Peer Peer062;
typedef Unk_ov065_0228659c_Conn Conn062;
typedef Unk_ov065_0228627c_Sa Sa062;

extern char data_ov065_0228e158[];
extern u16 data_0213a510[];

extern "C" {
void func_ov065_02277ac8(void *p);
void *func_ov065_02277af0(s32 n);
void *func_ov065_0227866c(void *v, s32 i);
void func_ov065_02278570(void *v, s32 i);
s32 func_ov065_02278684(void *v);
void func_ov065_02278688(void *v);
void *func_ov065_022786bc(s32 size, s32 cap, void *dtor);
void *func_ov065_02278758(void *t, BOOL (*cb)(Peer062 **, u32 *), void *arg);
void *func_ov065_022787c4(void *t, void *key);
void func_ov065_02278810(void *t, void *key);
void func_ov065_0227885c(void *t, void *key);
void func_ov065_022788f0(void *t);
void *func_ov065_02278928(s32 esize, s32 n, s32 cap, u32 (*hash)(Peer062 **, u32), s32 (*cmp)(Peer062 **, Peer062 **),
                          void *dtor);
s32 func_ov065_02278be8(s32 fd);
s32 func_ov065_02278bf4(char *s);
s32 func_ov065_02278c14(s32 fd, Sa062 *sa, s32 *len);
s32 func_ov065_02278c64(s32 fd, char *buf, s32 len, u32 flags, Sa062 *sa, u32 salen);
s32 func_ov065_02278d64(s32 fd, Sa062 *sa, u32 len);
s32 func_ov065_02278dbc(s32 fd);
s32 func_ov065_02278dd4(s32 a, s32 b, s32 c);
s32 func_ov065_02278ec4(s32 fd);
void func_ov065_02279134();
void func_ov065_02279138();
u32 func_ov065_02279144();
Unk_ov065_022867c0_Host *func_ov065_02261408(char *name);
s32 func_ov065_0228405c(void *p, s32 a, s32 b);
s32 func_ov065_02284100(void *p, u32 n);
s32 func_ov065_022841a4(Conn062 *c, Peer062 *p, u32 ip, u32 port, s32 a, char *buf, s32 len, s32 b);
s32 func_ov065_02284240(Peer062 *p, s32 a, s32 b, s32 c, s32 d);
s32 func_ov065_022843c0(Peer062 *p, s32 a);
s32 func_ov065_02284420(Peer062 *p, s32 a, s32 b, s32 c);
s32 func_ov065_02284498(Peer062 *p, s32 a, s32 b, s32 c);
s32 func_ov065_022845a4(Conn062 *c);
void func_ov065_022845f4(Peer062 *p);
void func_ov065_02284654(Peer062 *p);
s32 func_ov065_022846c4(Peer062 *p, u32 now);
s32 func_ov065_02284ca4(Peer062 *p);
s32 func_ov065_022849f8(Conn062 *c);
s32 func_ov065_02285398(Conn062 *c, u32 ip, u32 port);
s32 func_ov065_02286110(Peer062 *p);
s32 func_ov065_0228611c(Peer062 *p, s32 a, s32 b);
s16 func_ov065_02286180(u32 a, u32 b);
void func_ov065_022861b0(Conn062 *c);
void func_ov065_0228638c(Peer062 *p);
Peer062 *func_ov065_0228671c(Conn062 *c, u32 ip, u16 port);
void func_ov065_02286564(Conn062 *c);
void *func_ov065_02286554();
void func_ov065_02286788(char **s, s32 *len);
s32 func_ov065_022867c0(char *s, u32 *ip, u16 *port);
void func_0212899c(void *p, s32 v, u32 n);
void func_02128a00(void *d, void *s, u32 n);
char *func_0212a120(char *s, s32 c);
s32 func_0212b770(char *s);
u32 func_021277d4(char *s);
}

extern "C" {

BOOL func_ov065_02285f3c(Peer062 *p, s32 x, s32 y) {
    if (p->unk_0c != 5 && p->unk_0c != 6) {
        if (func_ov065_02286110(p) == 0) {
            return FALSE;
        }
    } else {
        if (func_ov065_02278684(p->unk_9c) != 0) {
            if (func_ov065_02284240(p, 0, x, y, 1) != 0) {
                return TRUE;
            }
            return FALSE;
        }
        if (func_ov065_02284420(p, x, y, 1) == 0) {
            return FALSE;
        }
    }
    return TRUE;
}

BOOL func_ov065_02285fbc(Peer062 *p, s32 x, s32 y) {
    if (p->unk_0c != 5 && p->unk_0c != 6) {
        return TRUE;
    }
    if (func_ov065_02278684(p->unk_9c) != 0) {
        if (func_ov065_02284240(p, 0, x, y, 0) != 0) {
            return TRUE;
        }
        return FALSE;
    }
    if (func_ov065_02284420(p, x, y, 0) != 0) {
        return TRUE;
    }
    return FALSE;
}

struct Unk_ov065_02286034_Ent {
    s32 unk_00;
    s32 unk_04;
    u16 unk_08;
};

BOOL func_ov065_02286034(Peer062 *p, u32 ack) {
    s32 n, i, base;
    n = func_ov065_02278684(p->unk_60);
    if (n == 0) {
        return TRUE;
    }
    for (i = 0; i < n; i++) {
        Unk_ov065_02286034_Ent *e = (Unk_ov065_02286034_Ent *)func_ov065_0227866c(p->unk_60, i);
        if (func_ov065_02286180(e->unk_08, ack) >= 0) {
            break;
        }
    }
    if (i == 0) {
        return TRUE;
    }
    while (i-- != 0) {
        func_ov065_02278570(p->unk_60, i);
    }
    n = func_ov065_02278684(p->unk_60);
    if (n == 0) {
        p->unk_58 = 0;
        return TRUE;
    }
    base = ((Unk_ov065_02286034_Ent *)func_ov065_0227866c(p->unk_60, 0))->unk_00;
    for (i = 0; i < n; i++) {
        Unk_ov065_02286034_Ent *e = (Unk_ov065_02286034_Ent *)func_ov065_0227866c(p->unk_60, i);
        e->unk_00 = e->unk_00 - base;
    }
    func_ov065_0228405c(&p->unk_50, 0, base);
    return TRUE;
}

BOOL func_ov065_022860ec(Peer062 *p) {
    if (func_ov065_02284ca4(p) != 0) {
        return func_ov065_0228611c(p, 1, 4);
    }
    return FALSE;
}

s32 func_ov065_02286110(Peer062 *p) {
    return func_ov065_0228611c(p, 7, 2);
}

s32 func_ov065_0228611c(Peer062 *p, s32 a, s32 b) {
    s32 st = p->unk_0c;
    if (st < 5) {
        if (p->unk_10 != 0) {
            func_ov065_02284654(p);
            if (func_ov065_02284498(p, a, 0, 0) == 0) {
                return FALSE;
            }
        } else {
            if (st == 4) {
                p->unk_14 = 1;
            }
            func_ov065_02284654(p);
        }
    } else if (st != 7) {
        func_ov065_02284654(p);
        if (func_ov065_022843c0(p, b) == 0) {
            return FALSE;
        }
    }
    return TRUE;
}

s16 func_ov065_02286180(u32 a, u32 b) {
    return a - b;
}

void func_ov065_02286188(u8 *buf, s32 off, s32 v) {
    buf[off] = v >> 8;
    buf[off + 1] = v;
}

u32 func_ov065_02286194(u8 *buf, s32 off) {
    u16 t = (buf[off] << 8) & 0xff00;
    return t | buf[off + 1];
}

void func_ov065_022861b0(Conn062 *c) {
    if (c->unk_18 == 0) {
        c->unk_18 = 1;
        func_ov065_022849f8(c);
        if (func_ov065_022845a4(c) != 0) {
            func_ov065_02286564(c);
        }
    }
}

void func_ov065_022861d8(Conn062 *c) {
    s32 i = func_ov065_02278684(c->unk_10) - 1;
    for (; i >= 0; i--) {
        func_ov065_0228638c(*(Peer062 **)func_ov065_0227866c(c->unk_10, i));
    }
}

BOOL func_ov065_0228623c(Peer062 **pp, u32 *pnow);

BOOL func_ov065_02286208(Conn062 *c) {
    u32 now = func_ov065_02279144();
    if (func_ov065_02278758(c->unk_0c, func_ov065_0228623c, &now) == 0) {
        return TRUE;
    }
    return FALSE;
}

BOOL func_ov065_0228623c(Peer062 **pp, u32 *pnow) {
    Peer062 *p = *pp;
    u32 now = *pnow;
    if (p->unk_0c != 7) {
        if (func_ov065_022846c4(p, now) == 0) {
            return FALSE;
        }
    }
    if (p->unk_0c == 7 && p->unk_14 == 0 && p->unk_24 == 0) {
        func_ov065_0228638c(p);
    }
    return TRUE;
}

BOOL func_ov065_0228627c(Conn062 *c, u32 ip, u16 port, char *buf, s32 len) {
    Sa062 sa;
    u32 *w;
    s32 r;
    func_ov065_02286788(&buf, &len);
    if (func_ov065_02278ec4(c->unk_00) == 0) {
        return TRUE;
    }
    w = (u32 *)&sa;
    w[0] = 0;
    w[1] = 0;
    sa.unk_1 = 2;
    sa.unk_4 = ip;
    sa.unk_2 = ((port >> 8) & 0xff) | ((port << 8) & 0xff00);
    r = func_ov065_02278c64(c->unk_00, buf, len, 0, (Sa062 *)w, 8);
    if (r == -1) {
        r = func_ov065_02278be8(c->unk_00);
        if (r == -15) {
            if (func_ov065_02285398(c, ip, port) == 0) {
                return FALSE;
            }
        } else if (r == -42 || r == -6) {
            return TRUE;
        } else if (r != -35) {
            func_ov065_022861b0(c);
            return FALSE;
        }
    } else if (c->unk_28 != 0) {
        Peer062 *p = func_ov065_0228671c(c, ip, port);
        if (func_ov065_022841a4(c, p, ip, port, 0, buf, len, 1) == 0) {
            return FALSE;
        }
    }
    return TRUE;
}

void func_ov065_0228638c(Peer062 *p) {
    if (p->unk_14 == 0 && p->unk_24 == 0) {
        if (p->unk_0c == 7) {
            s32 n = func_ov065_02278684(*(void **)((u8 *)p->unk_08 + 0x10));
            s32 i = 0;
            for (; i < n; i++) {
                Peer062 *q = p;
                if (q == *(Peer062 **)func_ov065_0227866c(q->unk_08->unk_10, i)) {
                    func_ov065_02278570(q->unk_08->unk_10, i);
                    return;
                }
            }
        } else {
            func_ov065_02278810(p->unk_08->unk_0c, &p);
        }
    }
}

s32 func_ov065_022863f8(Conn062 *c, Peer062 **out, u32 ip, u16 port) {
    Peer062 *p = NULL;
    if (func_ov065_0228671c(c, ip, port) != 0) {
        return 5;
    }
    p = (Peer062 *)func_ov065_02286554();
    if (p != 0) {
        func_0212899c(p, 0, 0xa0);
        p->unk_00 = ip;
        p->unk_04 = port;
        p->unk_08 = c;
        p->unk_1c = func_ov065_02279144();
        p->unk_88 = p->unk_1c;
        p->unk_64 = 0;
        p->unk_66 = 0;
        if (func_ov065_02284100(&p->unk_44, c->unk_3c) != 0 && func_ov065_02284100(&p->unk_50, c->unk_38) != 0) {
            p->unk_5c = func_ov065_022786bc(0x10, 0x40, 0);
            if (p->unk_5c != 0) {
                p->unk_60 = func_ov065_022786bc(0x10, 0x40, 0);
                if (p->unk_60 != 0) {
                    p->unk_98 = func_ov065_022786bc(4, 2, 0);
                    if (p->unk_98 != 0) {
                        p->unk_9c = func_ov065_022786bc(4, 2, 0);
                        if (p->unk_9c != 0) {
                            func_ov065_0227885c(c->unk_0c, &p);
                            *out = func_ov065_0228671c(c, ip, port);
                            if (*out != 0) {
                                return 0;
                            }
                        }
                    }
                }
            }
        }
    }
    if (p != 0) {
        func_ov065_02277ac8(p->unk_44);
        func_ov065_02277ac8(p->unk_50);
        if (p->unk_5c != 0) {
            func_ov065_02278688(p->unk_5c);
        }
        if (p->unk_60 != 0) {
            func_ov065_02278688(p->unk_60);
        }
        if (p->unk_98 != 0) {
            func_ov065_02278688(p->unk_98);
        }
        if (p->unk_9c != 0) {
            func_ov065_02278688(p->unk_9c);
        }
        func_ov065_02277ac8(p);
    }
    return 1;
}

void *func_ov065_02286554() {
    return func_ov065_02277af0(0xa0);
}

void func_ov065_02286560(Conn062 *c, s32 v) {
    c->unk_20 = v;
}

void func_ov065_02286564(Conn062 *c) {
    if (c->unk_1c != 0) {
        c->unk_14 = 1;
        return;
    }
    func_ov065_02278dbc(c->unk_00);
    func_ov065_022788f0(c->unk_0c);
    func_ov065_02278688(c->unk_10);
    func_ov065_02277ac8(c);
    func_ov065_02279134();
}

u32 func_ov065_02286770(Peer062 **pp, u32 n);
s32 func_ov065_02286754(Peer062 **a, Peer062 **b);
void func_ov065_02286748(Peer062 **p);

s32 func_ov065_0228659c(Conn062 **out, char *addr, u32 rsz, u32 ssz, s32 arg) {
    struct {
        u16 port;
        Sa062 sa;
        s32 ip;
        s32 len;
    } l;
    Conn062 *c;
    u32 *w;
    func_ov065_02279138();
    if (ssz == 0) {
        ssz = 0x10000;
    }
    if (rsz == 0) {
        rsz = 0x10000;
    }
    if (func_ov065_022867c0(addr, (u32 *)&l.ip, &l.port) == 0) {
        return 4;
    }
    c = (Conn062 *)func_ov065_02277af0(0x44);
    if (c == 0) {
        return 1;
    }
    func_0212899c(c, 0, 0x44);
    c->unk_00 = -1;
    c->unk_3c = ssz;
    c->unk_38 = rsz;
    c->unk_24 = arg;
    c->unk_0c = func_ov065_02278928(4, 0x20, 2, func_ov065_02286770, func_ov065_02286754, 0);
    if (c->unk_0c == 0) {
        func_ov065_02277ac8(c);
        return 1;
    }
    c->unk_10 = func_ov065_022786bc(4, 4, (void *)func_ov065_02286748);
    if (c->unk_10 == 0) {
        func_ov065_022788f0(c->unk_0c);
        func_ov065_02277ac8(c);
        return 1;
    }
    c->unk_00 = func_ov065_02278dd4(2, 2, 0);
    if (c->unk_00 == -1) {
        func_ov065_022788f0(c->unk_0c);
        func_ov065_02278688(c->unk_10);
        func_ov065_02277ac8(c);
        return 3;
    }
    w = (u32 *)&l.sa;
    w[0] = 0;
    w[1] = 0;
    l.sa.unk_1 = 2;
    l.sa.unk_4 = l.ip;
    {
        u16 t = l.port;
        l.sa.unk_2 = ((t >> 8) & 0xff) | ((t << 8) & 0xff00);
    }
    if (func_ov065_02278d64(c->unk_00, (Sa062 *)w, 8) == -1) {
        func_ov065_02278dbc(c->unk_00);
        func_ov065_022788f0(c->unk_0c);
        func_ov065_02278688(c->unk_10);
        func_ov065_02277ac8(c);
        return 3;
    }
    l.len = 8;
    func_ov065_02278c14(c->unk_00, &l.sa, &l.len);
    c->unk_04 = l.sa.unk_4;
    {
        u16 t = l.sa.unk_2;
        c->unk_08 = ((t >> 8) & 0xff) | ((t << 8) & 0xff00);
    }
    *out = c;
    return 0;
}

Peer062 *func_ov065_0228671c(Conn062 *c, u32 ip, u16 port) {
    Peer062 *key;
    Peer062 tmp;
    Peer062 **e;
    tmp.unk_00 = ip;
    tmp.unk_04 = port;
    key = &tmp;
    e = (Peer062 **)func_ov065_022787c4(c->unk_0c, &key);
    if (e != 0) {
        return *e;
    }
    return 0;
}

void func_ov065_02286748(Peer062 **p) {
    func_ov065_022845f4(*p);
}

s32 func_ov065_02286754(Peer062 **a, Peer062 **b) {
    Peer062 *x = *a;
    Peer062 *y = *b;
    if (x->unk_00 != y->unk_00) {
        return x->unk_00 - y->unk_00;
    }
    return (s16)(x->unk_04 - y->unk_04);
}

u32 func_ov065_02286770(Peer062 **pp, u32 n) {
    Peer062 *p = *pp;
    return (p->unk_00 * p->unk_04) % n;
}

void func_ov065_02286788(char **s, s32 *len) {
    char *p = *s;
    if (p == 0) {
        *s = data_ov065_0228e158;
        *len = 0;
    } else if (*len == -1) {
        *len = func_021277d4(p) + 1;
    }
}

BOOL func_ov065_022867c0(char *s, u32 *pip, u16 *pport) {
    char host[0x100];
    u32 ip;
    u32 port;
    char *colon;
    char *q;
    s32 c, r;
    if (s == 0 || *s == 0) {
        ip = 0;
        port = 0;
    } else {
        colon = func_0212a120(s, ':');
        port = (u32)colon;
        if (colon == 0) {
            port = 0;
        } else {
            if (colon == s) {
                s = 0;
                ip = 0;
            } else {
                s32 n = colon - s;
                func_02128a00(host, s, n);
                host[n] = 0;
                s = host;
            }
            q = colon + 1;
            c = *q;
            if (c != 0) {
                do {
                    if (c < 0 || c >= 0x80) {
                        c = 0;
                    } else {
                        c = data_0213a510[c] & 8;
                    }
                    if (c == 0) {
                        return FALSE;
                    }
                    q++;
                    c = *q;
                } while (c != 0);
            }
            r = func_0212b770(colon + 1);
            if (r < 0 || r > 0xffff) {
                return FALSE;
            }
            port = (u16)r;
        }
        if (s != 0) {
            ip = func_ov065_02278bf4(s);
            if (ip == -1) {
                Unk_ov065_022867c0_Host *h = func_ov065_02261408(s);
                if (h == 0) {
                    return FALSE;
                }
                ip = **h->unk_0c;
            }
        }
    }
    if (pip != 0) {
        *pip = ip;
    }
    if (pport != 0) {
        *pport = port;
    }
    return TRUE;
}

}
