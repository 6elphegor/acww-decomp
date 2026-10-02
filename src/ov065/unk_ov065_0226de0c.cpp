// mwcc-flags: -O4,p -str reuse
#include "types.h"

typedef unsigned long long u64;
typedef long long s64;

typedef void *(*Unk_ov065_0226e3ac_Alloc)(const char *, u32);
typedef void (*Unk_ov065_0226e3ac_Free)(const char *, void *, u32);

struct Unk_ov065_0226e3ac_Buf {
    u8 *unk_00;
    u8 *unk_04;
    u8 *unk_08;
    s32 unk_0c;
};

struct Unk_ov065_0226e3ac_Cfg {
    s32 v[8];
};

struct Unk_ov065_0226e3ac_Ctx {
    u8 unk_00;
    u8 unk_01[3];
    u32 unk_04;
    s32 unk_08;
    u8 *unk_0c;
    s32 unk_10;
    Unk_ov065_0226e3ac_Alloc unk_14;
    Unk_ov065_0226e3ac_Free unk_18;
    s32 unk_1c;
    s32 unk_20;
    s32 unk_24;
    char unk_28[0xa8 - 0x28];
    char *unk_a8;
    char *unk_ac;
    s32 unk_b0;
    u8 unk_b4[0x118 - 0xb4];
    u8 unk_118[0x91c - 0x118];
    void *unk_91c;
    void *unk_920;
    s32 unk_924;
    Unk_ov065_0226e3ac_Buf unk_928;
    Unk_ov065_0226e3ac_Buf unk_938;
    u8 unk_948[0x960 - 0x948];
    s32 unk_960;
    char *unk_964;
    u8 unk_968[0x9d4 - 0x968];
    s32 unk_9d4;
    u8 unk_9d8[0xa28 - 0x9d8];
    u8 unk_a28[0xa40 - 0xa28];
    s32 unk_a40;
    u8 unk_a44[0x1a60 - 0xa44];
};

struct Unk_ov065_0226e554_Conn {
    u8 unk_00[0xc];
    void *unk_0c;
    u8 unk_10[0x3c - 0x10];
    s32 unk_3c;
    void *unk_40;
    u8 unk_44[4];
    s32 unk_48;
    void *unk_4c;
    u8 unk_50[0x64 - 0x50];
};

struct Unk_ov065_0226e554_Ssl {
    u8 unk_00[0x7d4];
    char *unk_7d4;
    u8 unk_7d8[0x7e4 - 0x7d8];
    u32 (*unk_7e4)(u32);
    u8 unk_7e8[0x804 - 0x7e8];
};

struct Unk_ov065_0226eacc_Tbl {
    u32 unk_00;
    u32 unk_04;
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

typedef Unk_ov065_0226e3ac_Ctx Unk_ov065_0226e170_Ctx;
typedef Unk_ov065_0226e3ac_Buf Unk_ov065_0226e170_Buf;
typedef Unk_ov065_0226e3ac_Ctx Unk_ov065_0226e0a8_Ctx;

extern "C" {

extern char data_ov065_0228bc0c[];
extern char data_ov065_0228bd58[];
extern char data_ov065_0228bea8[];
extern char data_ov065_0228bf90[];
extern char data_ov065_0228c054[];
extern char data_ov065_0228c13c[];
extern char data_ov065_0228c25c[];
extern char data_ov065_0228c374[];
extern char data_ov065_0228c4a0[];
extern char data_ov065_0228c654[];
extern char data_ov065_0228c730[];
extern u32 data_ov065_0228ebd8;
extern Unk_ov065_0226eacc_Tbl data_021fcc2c;

s32 func_0212a438(const char *s);
char *func_02129f1c(const char *hay, const char *needle);
void func_02115fb4(void *dst, u32 v, u32 n);
void func_02116048(const void *src, void *dst, u32 n);
void func_021289b4(void *dst, void *src, u32 n);
s32 func_0212b770(const char *s);
s32 func_02113088(char *buf, s32 size, const char *fmt, ...);
void func_021132e0(s32 ms);
void func_021157f4(void *p);
u32 func_0211337c(u32 v);
s32 func_02114480(void *m);
s32 func_02114410(void *m);
s32 func_0211450c(void *m);
s32 func_02113788(void *t);
s32 func_02113774(void *t);
s32 func_0211366c(void *t);
s32 func_02113a70(void *t, s32 (*fn)(void *), void *arg, void *stack, u32 size, u32 prio);
u64 func_01ffa6b4(void);
s32 func_0212a190(const char *a, const char *b);
char *func_0212a360(char *dst, const char *src);
char *func_0212a2ec(char *dst, const char *src, u32 n);
s32 func_0212a15c(const char *a, const char *b, u32 n);

// other TUs
s32 func_ov065_0226f9e0(const char *s, s32 len, char *dst, u32 size);
s32 func_ov065_0226fb08(void *a, s32 b, void *c, s32 d);
s32 func_ov065_02261638(void *);
void func_ov065_02262a44(void *);
void func_ov065_022629b0();
void func_ov065_022629d0(u32, u32, u32);
void func_ov065_022672ec(void *, u32);
void func_ov065_02264d58(u32);
void func_ov065_02265950(u8 *, u32);
s32 func_ov065_02262874();
void func_ov065_02262998();
void func_ov065_02262a34();
void func_ov065_022622c0();
s32 func_ov065_022622ec();
u32 func_ov065_02262334(u32, u32);
u8 *func_ov065_022626b8(u32 *);
void func_ov065_02262640(u32);
void func_ov065_02262788();
void func_ov065_022627d4();

// this unit
s32 func_ov065_0226de0c(Unk_ov065_0226de90_Ent *tbl, s32 n, const char *key, char *dst, s32 size);
s32 func_ov065_0226de4c(Unk_ov065_0226de90_Ent *tbl, s32 n, const char *key, char *dst, u32 size);
char *func_ov065_0226de90(Unk_ov065_0226de90_Ent *tbl, s32 n, const char *key);
s32 func_ov065_0226ded4(Unk_ov065_0226de90_Ent *tbl, s32 n, s32 flag, char *text);
s32 func_ov065_0226e07c(Unk_ov065_0226ded4_List *l, const char *k, char *v);
s32 func_ov065_0226e0a8(Unk_ov065_0226e3ac_Ctx *c, char *s);
s32 func_ov065_0226e170(Unk_ov065_0226e3ac_Ctx *c, Unk_ov065_0226e3ac_Buf *b, s32 n);
void func_ov065_0226e1e8(Unk_ov065_0226e3ac_Ctx *c, Unk_ov065_0226e3ac_Buf *b);
s32 func_ov065_0226e210(Unk_ov065_0226e3ac_Ctx *c, Unk_ov065_0226e3ac_Buf *b, s32 n);
u32 func_ov065_0226e25c(u32 v);
s32 func_ov065_0226e274(Unk_ov065_0226e3ac_Ctx *c, const char *s);
s32 func_ov065_0226e2e4(Unk_ov065_0226e3ac_Ctx *c, const char *a1, void *a2, s32 a3);
s32 func_ov065_0226e3ac(Unk_ov065_0226e3ac_Ctx *c, const char *a1, const char *a2);
s32 func_ov065_0226e44c(Unk_ov065_0226e3ac_Ctx *c);
void func_ov065_0226e4dc(Unk_ov065_0226e3ac_Ctx *c);
void func_ov065_0226e554(Unk_ov065_0226e3ac_Ctx *c);
s32 func_ov065_0226ea40(Unk_ov065_0226e3ac_Ctx *c);
void func_ov065_0226ea84(Unk_ov065_0226e3ac_Ctx *c);
void func_ov065_0226eacc(Unk_ov065_0226e3ac_Ctx *c);
s32 func_ov065_0226eb6c(Unk_ov065_0226e3ac_Ctx *c);
s32 func_ov065_0226ebe4(Unk_ov065_0226e3ac_Ctx *c, Unk_ov065_0226e3ac_Cfg *cfg);

// data
void *data_ov065_0228b93c[11] = {data_ov065_0228c4a0, data_ov065_0228c374, data_ov065_0228c654, data_ov065_0228c730,
                                 data_ov065_0228bc0c, data_ov065_0228bea8, data_ov065_0228bf90, data_ov065_0228bd58,
                                 data_ov065_0228c25c, data_ov065_0228c13c, data_ov065_0228c054};
s32 data_ov065_02290618;

s32 func_ov065_0226ebe4(Unk_ov065_0226e3ac_Ctx *c, Unk_ov065_0226e3ac_Cfg *cfg) {
    func_02115fb4(c, 0, 0x1a60);
    c->unk_960 = -1;
    *(Unk_ov065_0226e3ac_Cfg *)&c->unk_04 = *cfg;
    c->unk_91c = c->unk_14("http->lowrecvbuf", 0xb68);
    if (c->unk_91c == NULL) {
        c->unk_24 = 1;
        return 1;
    }
    c->unk_920 = c->unk_14("http->lowsendbuf", 0x5ea);
    if (c->unk_920 == NULL) {
        c->unk_24 = 1;
        return 1;
    }
    func_ov065_0226e0a8(c, (char *)cfg->v[0]);
    c->unk_24 = func_ov065_0226e44c(c);
    if (c->unk_24 == 0) {
        c->unk_00 = 0xff;
    }
    return c->unk_24;
}

s32 func_ov065_0226eb6c(Unk_ov065_0226e3ac_Ctx *c) {
    char buf[8];
    s32 n;
    if (func_ov065_0226e3ac(c, "Connection", "close") != 0) {
        return 1;
    }
    n = func_0212a438(func_02129f1c((char *)c->unk_928.unk_00, "\r\n\r\n") + 4);
    if (n != 0) {
        func_02113088(buf, 7, "%d", n);
        if (func_ov065_0226e3ac(c, "Content-Length", buf) != 0) {
            return 1;
        }
    }
    return 0;
}

void func_ov065_0226eacc(Unk_ov065_0226e3ac_Ctx *c) {
    u32 prio = func_0211337c(data_021fcc2c.unk_04);
    c->unk_a40 = 0;
    func_0211450c(&c->unk_a28);
    func_0211450c(&c->unk_948);
    if (c->unk_1c == 1) {
        data_ov065_02290618 = 1;
    } else {
        data_ov065_02290618 = 0;
    }
    if (c->unk_9d4 == 0 || func_02113774(&c->unk_968) != 0) {
        func_02113a70(&c->unk_968, (s32 (*)(void *))func_ov065_0226e554, c, (u8 *)c + 0x1a60, 0x1000, prio - 1);
        func_0211366c(&c->unk_968);
    }
}

void func_ov065_0226ea84(Unk_ov065_0226e3ac_Ctx *c) {
    if (c->unk_00 == 0xff) {
        func_02114480(&c->unk_a28);
        c->unk_a40 = 1;
        func_02114410(&c->unk_a28);
        if (c->unk_9d4 != 0) {
            func_02113788(&c->unk_968);
        }
    }
}

s32 func_ov065_0226ea40(Unk_ov065_0226e3ac_Ctx *c) {
    func_02114480(&c->unk_a28);
    if (c->unk_a40 == 1) {
        func_02114410(&c->unk_a28);
        return 0;
    }
    func_02114410(&c->unk_a28);
    func_021132e0(10);
    return 1;
}

void func_ov065_0226e554(Unk_ov065_0226e3ac_Ctx *c) {
    s32 timeout;
    Unk_ov065_0226e554_Ssl *ssl;
    s32 host;
    u64 start;
    u64 mark;
    s32 hdr;
    Unk_ov065_0226e554_Conn *conn;
    Unk_ov065_0226e3ac_Buf *rb;
    s32 i, len, r, got;
    u8 tmp[0x20];
    char *p, *q, *q2;
    s8 ch;
    u8 *data;

    hdr = 0;
    conn = (Unk_ov065_0226e554_Conn *)&c->unk_b4;
    ssl = (Unk_ov065_0226e554_Ssl *)&c->unk_118;
    rb = &c->unk_938;
    timeout = c->unk_20;
    if (timeout <= 0) {
        timeout = 0xea60;
    }
    func_02115fb4(conn, 0, 0x64);
    conn->unk_3c = 0xb68;
    conn->unk_40 = c->unk_91c;
    conn->unk_48 = 0x5ea;
    conn->unk_4c = c->unk_920;
    func_ov065_02262a44(conn);
    i = 0;
    do {
        host = func_ov065_02261638(c->unk_a8);
        if (host != 0) {
            break;
        }
        func_021132e0(500);
        i++;
    } while (i < 3);
    if (host == 0) {
        c->unk_24 = 2;
        return;
    }
    func_ov065_022629b0();
    u32 port;
    if (c->unk_b0 == 1) {
        func_02115fb4(ssl, 0, 0x804);
        ssl->unk_7e4 = func_ov065_0226e25c;
        ssl->unk_7d4 = c->unk_a8;
        conn->unk_0c = ssl;
        func_ov065_022672ec(data_ov065_0228b93c, 0xb);
        func_ov065_02264d58(1);
        port = 0x1bb;
    } else {
        port = 0x50;
    }
    func_ov065_022629d0(0, (u16)port, host);
    start = func_01ffa6b4();
    if (c->unk_b0 == 1) {
        func_021157f4(tmp);
        func_ov065_02265950(tmp, 0x20);
        mark = start;
    }
    i = 0;
    do {
        r = func_ov065_02262874();
        if (r == 0) {
            break;
        }
        func_021132e0(500);
        i++;
    } while (i < 3);
    if (r != 0) {
        c->unk_24 = 3;
        func_ov065_02262998();
        func_ov065_02262a34();
        return;
    }
    c->unk_928.unk_04 = c->unk_928.unk_00;
    p = (char *)c->unk_928.unk_00;
    c->unk_928.unk_08 = (u8 *)p + func_0212a438(p);
    if (c->unk_928.unk_04 < c->unk_928.unk_08) {
        do {
            if (data_ov065_0228ebd8 == 0) {
                c->unk_24 = 5;
                goto fail;
            }
            len = c->unk_928.unk_08 - c->unk_928.unk_04;
            if (len > 0x2bc) {
                len = 0x2bc;
            }
            len = func_ov065_02262334((u32)c->unk_928.unk_04, len);
            if (len <= 0) {
                c->unk_24 = 5;
                goto fail;
            }
            func_ov065_022622c0();
            u64 now = func_01ffa6b4();
            u64 el = ((now - start) << 6) / 0x82ea;
            if ((u64)(s64)timeout < el) {
                c->unk_24 = 4;
                goto fail;
            }
            if (c->unk_b0 == 1) {
                el = ((now - mark) << 6) / 0x82ea;
                if (1000 < el) {
                    func_021157f4(tmp);
                    func_ov065_02265950(tmp, 0x20);
                    mark = now;
                }
            }
            c->unk_928.unk_04 = c->unk_928.unk_04 + len;
            if (func_ov065_0226ea40(c) == 0) {
                c->unk_24 = 7;
                goto fail;
            }
        } while (c->unk_928.unk_04 < c->unk_928.unk_08);
    }
    func_ov065_0226e1e8(c, &c->unk_928);
    func_02114480(&c->unk_948);
    if (c->unk_0c == NULL) {
        if (func_ov065_0226e210(c, &c->unk_938, c->unk_10) == 0) {
            c->unk_24 = 1;
            func_02114410(&c->unk_948);
            goto fail;
        }
    } else {
        c->unk_938.unk_00 = c->unk_0c;
        c->unk_938.unk_04 = c->unk_938.unk_00;
        c->unk_938.unk_08 = c->unk_938.unk_00 + c->unk_10;
        c->unk_938.unk_0c = c->unk_10;
    }
    rb->unk_04 = rb->unk_00;
    rb->unk_08 = rb->unk_00 + rb->unk_0c;
    func_02114410(&c->unk_948);
    {
        for (;;) {
            if (data_ov065_0228ebd8 == 0) {
                c->unk_24 = 5;
                goto fail;
            }
            func_02114480(&c->unk_948);
            if (rb->unk_04 >= rb->unk_08 - 1) {
                func_02114410(&c->unk_948);
                goto done8;
            }
            len = func_ov065_022622ec();
            if (len > 0) {
                data = func_ov065_022626b8((u32 *)&len);
                if (data == NULL) {
                    func_02114410(&c->unk_948);
                    goto done8;
                }
                s32 room = rb->unk_08 - 1 - rb->unk_04;
                got = len;
                if (got >= room) {
                    got = room;
                }
                func_02116048(data, rb->unk_04, got);
                rb->unk_04 = rb->unk_04 + got;
                *rb->unk_04 = 0;
                if (hdr != 1) {
                    p = (char *)rb->unk_00;
                    if (func_02129f1c(p, "\r\n\r\n") != NULL) {
                        hdr = 1;
                        c->unk_964 = func_02129f1c(p, "\r\n\r\n") + 4;
                        q = func_02129f1c((char *)rb->unk_00, "Content-Length: ");
                        if (q != NULL) {
                            q = q + func_0212a438("Content-Length: ");
                            q2 = func_02129f1c(q, "\r\n");
                            ch = q2[0];
                            q2[0] = 0;
                            c->unk_960 = func_0212b770(q);
                            q2[0] = ch;
                        }
                    }
                }
                if ((u32)len > (u32)got) {
                    func_ov065_02262640(len);
                    func_02114410(&c->unk_948);
                    goto done8;
                }
                func_ov065_02262640(got);
            }
            if (len < 0) {
                func_02114410(&c->unk_948);
                goto done8;
            }
            if (c->unk_960 > 0 && len > 0 && (u8 *)c->unk_964 + c->unk_960 <= rb->unk_04) {
                func_02114410(&c->unk_948);
                goto done8;
            }
            u64 now = func_01ffa6b4();
            u64 el = ((now - start) << 6) / 0x82ea;
            if ((u64)(s64)timeout < el) {
                c->unk_24 = 6;
                func_02114410(&c->unk_948);
                goto fail;
            }
            if (c->unk_b0 == 1) {
                el = ((now - mark) << 6) / 0x82ea;
                if (1000 < el) {
                    func_021157f4(tmp);
                    func_ov065_02265950(tmp, 0x20);
                    mark = now;
                }
            }
            func_02114410(&c->unk_948);
            if (func_ov065_0226ea40(c) == 0) {
                c->unk_24 = 7;
                goto fail;
            }
        }
    }
done8:
    func_ov065_022627d4();
    func_ov065_02262788();
    func_ov065_02262998();
    func_ov065_02262a34();
    c->unk_24 = 8;
    return;
fail:
    func_ov065_022627d4();
    func_ov065_02262788();
    func_ov065_02262998();
    func_ov065_02262a34();
    return;
}

void func_ov065_0226e4dc(Unk_ov065_0226e3ac_Ctx *c) {
    if (c != NULL) {
        if (c->unk_0c == NULL) {
            func_ov065_0226e1e8(c, &c->unk_938);
        }
        func_ov065_0226e1e8(c, &c->unk_928);
        if (c->unk_91c != NULL) {
            c->unk_18("http->lowrecvbuf", c->unk_91c, 0);
            c->unk_91c = NULL;
        }
        if (c->unk_920 != NULL) {
            c->unk_18("http->lowsendbuf", c->unk_920, 0);
            c->unk_920 = NULL;
        }
        func_02115fb4(c, 0, 0x1a60);
    }
}

s32 func_ov065_0226e44c(Unk_ov065_0226e3ac_Ctx *c) {
    Unk_ov065_0226e3ac_Buf *b = &c->unk_928;
    const char *fmt = c->unk_08 == 0 ? "POST /%s HTTP/1.0\r\nContent-type: application/x-www-form-urlencoded\r\nHost: %s\r\n\r\n" : "GET /%s HTTP/1.0\r\nHost: %s\r\n\r\n";
    s32 n, r, sz;
    n = func_0212a438(c->unk_a8);
    n += func_0212a438(fmt) - 4 + func_0212a438(c->unk_ac);
    sz = n + 0x400;
    if (func_ov065_0226e210(c, &c->unk_928, sz) != 1) {
        return 1;
    }
    r = func_02113088((char *)b->unk_04, b->unk_0c, fmt, c->unk_ac, c->unk_a8);
    b->unk_04 = b->unk_04 + r;
    return 0;
}

s32 func_ov065_0226e3ac(Unk_ov065_0226e3ac_Ctx *c, const char *a1, const char *a2) {
    s32 n, avail;
    Unk_ov065_0226e3ac_Buf *b = &c->unk_928;
    char *p;
    s8 saved;
    n = func_0212a438(a2);
    n += func_0212a438("%s: %s\r\n") - 4 + func_0212a438(a1);
    avail = b->unk_08 - b->unk_04;
    if (n + 1 > avail) {
        if (func_ov065_0226e170(c, b, n - avail + 1) == 0) {
            return 1;
        }
    }
    p = func_02129f1c((char *)b->unk_00, "\r\n\r\n") + 2;
    saved = p[0];
    func_021289b4(p + n, p, func_0212a438(p) + 1);
    s32 r = func_02113088(p, n + 1, "%s: %s\r\n", a1, a2);
    p[r] = saved;
    b->unk_04 = b->unk_04 + n;
    return 0;
}

s32 func_ov065_0226e2e4(Unk_ov065_0226e170_Ctx *c, const char *a1, void *a2, s32 a3) {
    Unk_ov065_0226e170_Buf *b = &c->unk_928;
    const char *fmt = c->unk_924 == 0 ? "%s=" : "&%s=";
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
    r = func_02113088((char *)b->unk_04, avail, "%s", s);
    if (r != n) {
        return 1;
    }
    b->unk_04 = b->unk_04 + r;
    return 0;
}

u32 func_ov065_0226e25c(u32 v) {
    if (v & 0x8000) {
        v &= ~0x8000;
    }
    return v;
}

s32 func_ov065_0226e210(Unk_ov065_0226e170_Ctx *c, Unk_ov065_0226e170_Buf *b, s32 n) {
    if (n == 0) {
        return 0;
    }
    b->unk_00 = (u8 *)c->unk_14("DWCHttpBuffer", n);
    if (b->unk_00 == NULL) {
        return 0;
    }
    b->unk_04 = b->unk_00;
    b->unk_0c = n;
    b->unk_08 = b->unk_00 + b->unk_0c;
    return 1;
}

void func_ov065_0226e1e8(Unk_ov065_0226e170_Ctx *c, Unk_ov065_0226e170_Buf *b) {
    if (b->unk_00 != NULL) {
        c->unk_18("DWCHttpBuffer", b->unk_00, 0);
    }
    func_02115fb4(b, 0, 0x10);
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
    if (func_02129f1c(c->unk_28, "http://")) {
        c->unk_a8 = c->unk_28 + 7;
        c->unk_b0 = 0;
    } else {
        q = func_02129f1c(c->unk_28, "https://");
        if (q == NULL) {
            return 0;
        }
        c->unk_a8 = q + 8;
        c->unk_b0 = 1;
    }
    q = func_02129f1c(c->unk_a8, "/");
    if (q == NULL) {
        c->unk_ac = NULL;
    } else {
        *q = 0;
        c->unk_ac = q + 1;
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
    p = func_02129f1c(text, "\r\n\r\n");
    if (p == NULL) {
        return 0;
    }
    end = p + 4 + func_0212a438(p + 4);
    q = func_02129f1c(text, " ");
    if (q == NULL) {
        return 0;
    }
    r = q + 1;
    r[3] = 0;
    if (func_ov065_0226e07c(&l, "httpresult", r) != 1) {
        return 0;
    }
    if (flag == 1 || func_0212a15c(r, "200", 3) != 0) {
        if (func_ov065_0226e07c(&l, "httpbody", p + 4) != 1) {
            return 0;
        }
        return 1;
    }
    q = func_02129f1c(r + 4, "\r\n");
    if (q == NULL) {
        return 0;
    }
    tx = q + 2;
    while (tx[0] != 0xd && tx[1] != 0xa) {
        q = func_02129f1c(tx, ": ");
        if (q == NULL) {
            break;
        }
        q[1] = 0;
        q[0] = q[1];
        t = q + 2;
        q = func_02129f1c(t, "\r\n");
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
        q = func_02129f1c(t, "=");
        if (q == NULL) {
            break;
        }
        q[0] = 0;
        tx = q + 1;
        q = func_02129f1c(tx, "&");
        if (q == NULL) {
            q = func_02129f1c(tx, "\r\n");
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

}
