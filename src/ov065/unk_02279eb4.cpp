// mwcc-flags: -O4,p
#include "types.h"

// ov065_044: HTTP-like connection open/poll and multipart body sending (0x02279eb4..0x0227a788)

struct Unk_ov065_0227a4e8_Part {
    s32 unk_00;
    char *unk_04;
    char *unk_08;
    s32 unk_0c;
    s32 unk_10;
    s32 unk_14;
};

struct Unk_ov065_0227a4e8_Slot {
    Unk_ov065_0227a4e8_Part *unk_00;
    s32 unk_04;
    u32 unk_08;
    s32 unk_0c;
};

struct Unk_ov065_0227a3f4_List {
    void *unk_00;
    s32 unk_04;
};

struct Unk_ov065_0227a4e8_Req {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0c;
};

struct Unk_ov065_02279c7c {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0c;
    s32 unk_10;
    void *unk_14;
    void *unk_18;
    s32 unk_1c;
    u16 unk_20;
    void *unk_24;
    void *unk_28;
    s32 unk_2c;
    s32 unk_30;
    s32 unk_34;
    s32 unk_38;
    void *unk_3c;
    void *unk_40;
    u32 unk_44;
    s32 unk_48;
    s32 unk_4c;
    u32 unk_50[3];
    s32 unk_5c;
    s32 unk_60;
    u32 unk_64[4];
    u32 unk_74;
    u8 *unk_78;
    s32 unk_7c;
    s32 unk_80;
    s32 unk_84;
    s32 unk_88;
    u32 unk_8c[3];
    u32 unk_98;
    u8 *unk_9c;
    u32 unk_a0;
    s32 unk_a4;
    s32 unk_a8;
    u32 unk_ac[4];
    u32 unk_bc;
    u32 unk_c0;
    u32 unk_c4[5];
    u32 unk_d8;
    u32 unk_dc;
    s32 unk_e0;
    s32 unk_e4;
    s32 unk_e8;
    s32 unk_ec;
    s32 unk_f0;
    s32 unk_f4;
    s32 unk_f8;
    s32 unk_fc;
    u32 unk_100;
    u32 unk_104;
    void *unk_108;
    s32 unk_10c;
    s32 unk_110;
    u32 unk_114[6];
    s32 unk_12c;
    s32 unk_130;
    u32 unk_134;
    u32 unk_138;
    Unk_ov065_0227a4e8_Req *unk_13c;
    void *unk_140;
    s32 unk_144;
    u32 unk_148;
};

extern "C" {
extern s32 data_ov065_022910d8;
extern void *data_ov065_022910c4;
extern u32 data_ov065_0228ca4c;
extern s32 data_ov065_0228ca50;
extern char data_ov065_0228ca54[];
extern char data_ov065_0228ca58[4];
extern char data_ov065_0228ca5c[];
extern char data_ov065_0228ca88[];
extern char data_ov065_0228ca8c[];
extern char data_ov065_0228ca94[];
extern char data_ov065_0228cabc[];
extern char data_ov065_0228cae8[];
extern char data_ov065_0228cb18[];
extern char data_ov065_0228cb6c[];
extern char data_ov065_0228cbb0[];

s32 func_ov065_0227ac34(void *, const char *, const char *);
s32 func_ov065_0227acfc();
void func_ov065_02279b08(s32 (*)(Unk_ov065_02279c7c *));
char *func_ov065_02279100(const char *);
Unk_ov065_02279c7c *func_ov065_02279c7c();
BOOL func_ov065_02279b58(Unk_ov065_02279c7c *);
BOOL func_ov065_0227a8ec(Unk_ov065_02279c7c *);
void func_ov065_0227913c(s32);
void func_ov065_0227bb5c(Unk_ov065_02279c7c *);
void func_ov065_0227b9c4(Unk_ov065_02279c7c *);
void func_ov065_0227b8e4(Unk_ov065_02279c7c *);
void func_ov065_0227b72c(Unk_ov065_02279c7c *);
void func_ov065_0227b6dc(Unk_ov065_02279c7c *);
void func_ov065_0227b68c(Unk_ov065_02279c7c *);
void func_ov065_0227b51c(Unk_ov065_02279c7c *);
void func_ov065_0227ae94(Unk_ov065_02279c7c *);
void func_ov065_0227ada4(Unk_ov065_02279c7c *);
void func_ov065_02279a64(Unk_ov065_02279c7c *);
void func_ov065_0227960c(Unk_ov065_02279c7c *);
void func_ov065_022799f4();
void func_ov065_022799f8();
void func_ov065_022799fc();
void func_ov065_02279a00();
void func_ov065_02279a04();
void func_ov065_02277ac8(void *);
s32 func_ov065_02278684(void *);
Unk_ov065_0227a4e8_Slot *func_ov065_0227866c(void *);
s32 func_ov065_022791c0(Unk_ov065_02279c7c *);
void func_ov065_0227924c(void *);
s32 func_ov065_02279654(Unk_ov065_02279c7c *, const void *, s32);
s32 func_ov065_022796a8(Unk_ov065_02279c7c *, const void *, s32);
BOOL func_ov065_02279494(Unk_ov065_02279c7c *, void *, void *, s32);
BOOL func_ov065_022794d0(Unk_ov065_02279c7c *, void *, s32, s32);
void func_ov065_02279280(void *, s32);
BOOL func_ov065_0227931c(void *, const void *, s32);
s32 func_021130d0(char *, const char *, ...);
s32 func_021277d4(const char *);
s32 func_0212a120(const char *, s32);
s32 func_02128030(void *, s32, s32, u32);

s32 func_ov065_0227a284(Unk_ov065_02279c7c *);
void func_ov065_0227a350(Unk_ov065_02279c7c *);
s32 func_ov065_0227a4e8(Unk_ov065_0227a4e8_Slot *, Unk_ov065_02279c7c *, s32);
s32 func_ov065_0227a624(Unk_ov065_0227a4e8_Slot *, Unk_ov065_02279c7c *);
s32 func_ov065_0227a694(Unk_ov065_0227a4e8_Slot *, Unk_ov065_02279c7c *);
s32 func_ov065_0227a788(Unk_ov065_0227a4e8_Slot *, Unk_ov065_02279c7c *);
void func_ov065_0227a244();
}

extern "C" {

s32 func_ov065_02279eb4(void *a, const char *b, const char *c) {
    if (a == 0) {
        return 0;
    }
    if (b == 0 || *b == 0) {
        return 0;
    }
    if (c == 0) {
        c = data_ov065_0228ca54;
    }
    return func_ov065_0227ac34(a, b, c);
}

s32 func_ov065_02279eec() {
    return func_ov065_0227acfc();
}

void func_ov065_02279ef4() {
    func_ov065_02279b08(func_ov065_0227a284);
}

s32 func_ov065_02279f04(const char *a, const char *b, Unk_ov065_0227a4e8_Req *c, u32 d, s32 e, u32 f, u32 g, u32 h) {
    Unk_ov065_02279c7c *conn;
    if (a == 0 || *a == 0) {
        return -1;
    }
    if (c == 0) {
        return -1;
    }
    if (data_ov065_022910d8 == 0) {
        func_ov065_0227a244();
    }
    conn = func_ov065_02279c7c();
    if (conn == 0) {
        return -1;
    }
    conn->unk_0c = 4;
    conn->unk_14 = func_ov065_02279100(a);
    if (conn->unk_14 == 0) {
        func_ov065_02279b58(conn);
        return -1;
    }
    if (b != 0 && *b != 0) {
        conn->unk_28 = func_ov065_02279100(b);
        if (conn->unk_28 == 0) {
            func_ov065_02279b58(conn);
            return -1;
        }
    }
    conn->unk_13c = c;
    conn->unk_30 = e;
    conn->unk_3c = (void *)f;
    conn->unk_40 = (void *)g;
    conn->unk_44 = h;
    conn->unk_134 = d;
    if (c != 0) {
        if (func_ov065_0227a8ec(conn) == 0) {
            func_ov065_02279b58(conn);
            return -1;
        }
    }
    if (e != 0) {
        if (func_ov065_0227a284(conn) == 0) {
            s32 t = 10;
            do {
                func_ov065_0227913c(t);
            } while (func_ov065_0227a284(conn) == 0);
        }
        return 0;
    }
    return conn->unk_04;
}

s32 func_ov065_0227a024(const char *a, Unk_ov065_0227a4e8_Req *b, s32 c, u32 d, u32 e) {
    return func_ov065_02279f04(a, 0, b, 0, c, 0, d, e);
}

s32 func_ov065_0227a048(const char *a, const char *b, void *c, s32 d, Unk_ov065_0227a4e8_Req *e, u32 f, s32 g, u32 h, u32 i, u32 j) {
    Unk_ov065_02279c7c *conn;
    if (a == 0 || *a == 0) {
        return -1;
    }
    if (d < 0) {
        return -1;
    }
    if (c != 0 && d == 0) {
        return -1;
    }
    if (data_ov065_022910d8 == 0) {
        func_ov065_0227a244();
    }
    conn = func_ov065_02279c7c();
    if (conn == 0) {
        return -1;
    }
    conn->unk_0c = 0;
    conn->unk_14 = func_ov065_02279100(a);
    if (conn->unk_14 == 0) {
        func_ov065_02279b58(conn);
        return -1;
    }
    if (b != 0 && *b != 0) {
        conn->unk_28 = func_ov065_02279100(b);
        if (conn->unk_28 == 0) {
            func_ov065_02279b58(conn);
            return -1;
        }
    }
    conn->unk_13c = e;
    conn->unk_30 = g;
    conn->unk_3c = (void *)h;
    conn->unk_40 = (void *)i;
    conn->unk_44 = j;
    conn->unk_134 = f;
    conn->unk_e0 = (c != 0) ? 1 : 0;
    BOOL ok;
    if (conn->unk_e0 != 0) {
        ok = func_ov065_02279494(conn, &conn->unk_bc, c, d);
    } else {
        ok = func_ov065_022794d0(conn, &conn->unk_bc, 0x800, 0x800);
    }
    if (ok == 0) {
        func_ov065_02279b58(conn);
        return -1;
    }
    if (e != 0) {
        if (func_ov065_0227a8ec(conn) == 0) {
            func_ov065_02279b58(conn);
            return -1;
        }
    }
    if (g != 0) {
        if (func_ov065_0227a284(conn) == 0) {
            s32 t = 10;
            do {
                func_ov065_0227913c(t);
            } while (func_ov065_0227a284(conn) == 0);
        }
        return 0;
    }
    return conn->unk_04;
}

s32 func_ov065_0227a1d4(const char *a, s32 b, u32 c, u32 d) {
    return func_ov065_0227a048(a, 0, 0, 0, 0, 0, b, 0, c, d);
}

void func_ov065_0227a1f8() {
    func_ov065_022799f8();
    if (--data_ov065_022910d8 == 0) {
        func_ov065_02279a04();
        if (data_ov065_022910c4 != 0) {
            func_ov065_02277ac8(data_ov065_022910c4);
            data_ov065_022910c4 = 0;
        }
        func_ov065_022799f4();
        func_ov065_022799fc();
    } else {
        func_ov065_022799f4();
    }
}

void func_ov065_0227a244() {
    func_ov065_022799f8();
    if (++data_ov065_022910d8 == 1) {
        func_ov065_02279a00();
        data_ov065_0228ca50 = 0x7d;
        data_ov065_0228ca4c = 0xfa;
    } else {
        func_ov065_022799f4();
    }
}

s32 func_ov065_0227a284(Unk_ov065_02279c7c *c) {
    s32 r;
    if (c->unk_12c != 0) {
        return 0;
    }
    c->unk_12c = 1;
    if (c->unk_10 == 0) {
        func_ov065_0227bb5c(c);
    }
    if (c->unk_10 == 1) {
        func_ov065_0227b9c4(c);
    }
    if (c->unk_10 == 2) {
        func_ov065_0227b8e4(c);
    }
    if (c->unk_10 == 3) {
        func_ov065_0227b72c(c);
    }
    if (c->unk_10 == 4) {
        func_ov065_0227b6dc(c);
    }
    if (c->unk_10 == 5) {
        func_ov065_0227b68c(c);
    }
    if (c->unk_10 == 6) {
        func_ov065_0227b51c(c);
    }
    if (c->unk_10 == 7) {
        func_ov065_0227ae94(c);
    }
    if (c->unk_10 == 8) {
        func_ov065_0227ada4(c);
    }
    if (c->unk_108 != 0) {
        func_ov065_02279a64(c);
    }
    r = c->unk_fc;
    if (r != 0) {
        func_ov065_0227a350(c);
        func_ov065_0227960c(c);
        func_ov065_02279b58(c);
    } else {
        c->unk_12c = 0;
    }
    return r;
}

void func_ov065_0227a350(Unk_ov065_02279c7c *c) {
    s32 code = c->unk_ec;
    switch (code / 100) {
    case 0:
        break;
    case 1:
    case 2:
    case 3:
        return;
    case 4:
        switch (code) {
        case 401:
            c->unk_38 = 9;
            return;
        case 402:
        case 405:
        case 406:
        case 407:
        case 408:
        case 409:
            break;
        case 403:
            c->unk_38 = 10;
            return;
        case 404:
        case 410:
            c->unk_38 = 11;
            return;
        }
        c->unk_38 = 8;
        return;
    case 5:
        c->unk_38 = 12;
        break;
    }
}

s32 func_ov065_0227a3f4(Unk_ov065_02279c7c *c) {
    Unk_ov065_0227a3f4_List *l = (Unk_ov065_0227a3f4_List *)&c->unk_140;
    s32 cnt = func_ov065_02278684(l->unk_00);
    if (c->unk_5c != 0) {
        if (func_ov065_022791c0(c) == 0) {
            return 0;
        }
        if (c->unk_60 < c->unk_5c) {
            return 2;
        }
        func_ov065_0227924c(&c->unk_50);
        if (c->unk_144 == cnt) {
            return 1;
        }
    }
    for (; l->unk_04 < cnt; l->unk_04++) {
        Unk_ov065_0227a4e8_Slot *s = func_ov065_0227866c(l->unk_00);
        s32 r = func_ov065_0227a4e8(s, c, l->unk_04 == 0 ? 1 : 0);
        if (r == 0) {
            return 0;
        }
        if (r == 2) {
            return 2;
        }
    }
    if (c->unk_13c->unk_0c != 0) {
        s32 n = func_021277d4(data_ov065_0228ca5c);
        if (func_ov065_02279654(c, data_ov065_0228ca5c, n) == 0) {
            return 0;
        }
    }
    if (c->unk_5c != 0) {
        return 2;
    }
    return 1;
}

s32 func_ov065_0227a4e8(Unk_ov065_0227a4e8_Slot *st, Unk_ov065_02279c7c *c, s32 first) {
    char buf[2048];
    if (st->unk_04 == -1) {
        st->unk_04 = 0;
        if (c->unk_13c->unk_0c == 0) {
            if (first != 0) {
                func_021130d0(buf, data_ov065_0228ca88, st->unk_00->unk_04);
            } else {
                func_021130d0(buf, data_ov065_0228ca8c, st->unk_00->unk_04);
            }
        } else {
            Unk_ov065_0227a4e8_Part *p = st->unk_00;
            if (p->unk_00 == 0) {
                func_021130d0(buf, data_ov065_0228cae8, first != 0 ? data_ov065_0228ca94 : data_ov065_0228cabc, p->unk_04);
            } else if (p->unk_00 == 1 || p->unk_00 == 2) {
                s32 a, b;
                if (p->unk_00 == 1) {
                    a = p->unk_0c;
                    b = p->unk_10;
                } else {
                    a = p->unk_10;
                    b = p->unk_14;
                }
                func_021130d0(buf, data_ov065_0228cb18, first != 0 ? data_ov065_0228ca94 : data_ov065_0228cabc, p->unk_04, a, b);
            }
        }
        s32 r = func_ov065_02279654(c, buf, func_021277d4(buf));
        if (r == 0) {
            return 0;
        }
        if (r == 2) {
            return 2;
        }
    }
    if (st->unk_00->unk_00 == 0) {
        return func_ov065_0227a788(st, c);
    }
    if (st->unk_00->unk_00 == 1) {
        return func_ov065_0227a694(st, c);
    }
    return func_ov065_0227a624(st, c);
}

s32 func_ov065_0227a624(Unk_ov065_0227a4e8_Slot *st, Unk_ov065_02279c7c *c) {
    Unk_ov065_0227a4e8_Part *p = st->unk_00;
    s32 len = p->unk_0c;
    if (len == 0) {
        return 1;
    }
    do {
        s32 n = len - st->unk_04;
        if (n >= 0x8000) {
            n = 0x8000;
        }
        s32 r = func_ov065_022796a8(c, p->unk_08 + st->unk_04, n);
        if (r == -1) {
            return 0;
        }
        st->unk_04 = st->unk_04 + r;
        p = st->unk_00;
        len = p->unk_0c;
        if (len == st->unk_04) {
            return 1;
        }
        if (r == 0) {
            return 2;
        }
    } while (1);
}

s32 func_ov065_0227a694(Unk_ov065_0227a4e8_Slot *st, Unk_ov065_02279c7c *c) {
    char buf[0x1000];
    s32 r;
    do {
        s32 n = func_02128030(buf, 1, 0x1000, st->unk_08);
        if (n <= 0) {
            c->unk_fc = 1;
            c->unk_38 = 14;
            return 0;
        }
        st->unk_04 = st->unk_04 + n;
        if (st->unk_04 > st->unk_0c) {
            c->unk_fc = 1;
            c->unk_38 = 14;
            return 0;
        }
        r = func_ov065_02279654(c, buf, n);
        if (r == 0) {
            return 0;
        }
        if (st->unk_04 == st->unk_0c) {
            return 1;
        }
    } while (r == 1);
    return 2;
}

s32 func_ov065_0227a788(Unk_ov065_0227a4e8_Slot *st, Unk_ov065_02279c7c *c) {
    Unk_ov065_0227a4e8_Part *q = st->unk_00;
    if (q->unk_0c == 0) {
        return 1;
    }
    if (c->unk_13c->unk_0c == 0 && q->unk_10 != 0) {
        char *s = q->unk_08;
        struct T4 {
            char b[4];
        };
        T4 tmp = *(T4 *)data_ov065_0228ca58;
        s32 i = 0;
        char ch = s[i];
        if (ch != 0) {
            do {
                if (func_0212a120(data_ov065_0228cb6c, ch) != 0) {
                    func_ov065_02279280(&c->unk_50, ch);
                } else if (ch == 0x20) {
                    func_ov065_02279280(&c->unk_50, 0x2b);
                } else {
                    tmp.b[1] = data_ov065_0228cbb0[ch / 16];
                    tmp.b[2] = data_ov065_0228cbb0[ch % 16];
                    func_ov065_0227931c(&c->unk_50, &tmp, 3);
                }
                i++;
                ch = s[i];
            } while (ch != 0);
        }
        return 1;
    }
    s32 n = q->unk_0c - st->unk_04;
    s32 r = func_ov065_022796a8(c, q->unk_08, n);
    if (r == -1) {
        return 0;
    }
    st->unk_04 = st->unk_04 + r;
    if (r == n) {
        return 1;
    }
    return 2;
}

}
