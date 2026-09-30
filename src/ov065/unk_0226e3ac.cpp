// mwcc-flags: -O4,p
#include "types.h"

// ov065_025: HTTP-like client request/response (0x0226e3ac..0x0226eca0)

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
    u8 unk_28[0xa8 - 0x28];
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

struct Unk_ov065_02290620 {
    s32 unk_00;
    s32 unk_04;
    u8 unk_08[0x1dc - 8];
    u8 unk_1dc[4];
};

struct Unk_ov065_0226eacc_Tbl {
    u32 unk_00;
    u32 unk_04;
};

extern "C" {

extern char data_ov065_0228b968[];
extern char data_ov065_0228b990[];
extern char data_ov065_0228b9d8[];
extern char data_ov065_0228b9e4[];
extern char data_ov065_0228ba38[];
extern char data_ov065_0228ba58[];
extern char data_ov065_0228ba6c[];
extern char data_ov065_0228ba80[];
extern char data_ov065_0228ba94[];
extern char data_ov065_0228baa0[];
extern char data_ov065_0228baa8[];
extern char data_ov065_0228baac[];
extern char data_ov065_0228b93c[];
extern u32 data_ov065_0228ebd8;
extern s32 data_ov065_02290618;
extern Unk_ov065_0226eacc_Tbl data_021fcc2c;
extern Unk_ov065_02290620 *data_ov065_02290620;

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

// other groups
s32 func_ov065_0226e170(void *c, Unk_ov065_0226e3ac_Buf *b, s32 n);
void func_ov065_0226e1e8(void *c, Unk_ov065_0226e3ac_Buf *b);
s32 func_ov065_0226e210(void *c, Unk_ov065_0226e3ac_Buf *b, s32 n);
u32 func_ov065_0226e25c(u32 v);
s32 func_ov065_0226e0a8(void *c, char *s);
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

s32 func_ov065_0226ea40(Unk_ov065_0226e3ac_Ctx *c);

s32 func_ov065_0226e3ac(Unk_ov065_0226e3ac_Ctx *c, const char *a1, const char *a2) {
    s32 n, avail;
    Unk_ov065_0226e3ac_Buf *b = &c->unk_928;
    char *p;
    s8 saved;
    n = func_0212a438(a2);
    n += func_0212a438(data_ov065_0228b9d8) - 4 + func_0212a438(a1);
    avail = b->unk_08 - b->unk_04;
    if (n + 1 > avail) {
        if (func_ov065_0226e170(c, b, n - avail + 1) == 0) {
            return 1;
        }
    }
    p = func_02129f1c((char *)b->unk_00, data_ov065_0228b968) + 2;
    saved = p[0];
    func_021289b4(p + n, p, func_0212a438(p) + 1);
    s32 r = func_02113088(p, n + 1, data_ov065_0228b9d8, a1, a2);
    p[r] = saved;
    b->unk_04 = b->unk_04 + n;
    return 0;
}

s32 func_ov065_0226e44c(Unk_ov065_0226e3ac_Ctx *c) {
    Unk_ov065_0226e3ac_Buf *b = &c->unk_928;
    const char *fmt = c->unk_08 == 0 ? data_ov065_0228b9e4 : data_ov065_0228ba38;
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

void func_ov065_0226e4dc(Unk_ov065_0226e3ac_Ctx *c) {
    if (c != NULL) {
        if (c->unk_0c == NULL) {
            func_ov065_0226e1e8(c, &c->unk_938);
        }
        func_ov065_0226e1e8(c, &c->unk_928);
        if (c->unk_91c != NULL) {
            c->unk_18(data_ov065_0228ba58, c->unk_91c, 0);
            c->unk_91c = NULL;
        }
        if (c->unk_920 != NULL) {
            c->unk_18(data_ov065_0228ba6c, c->unk_920, 0);
            c->unk_920 = NULL;
        }
        func_02115fb4(c, 0, 0x1a60);
    }
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
                    if (func_02129f1c(p, data_ov065_0228b968) != NULL) {
                        hdr = 1;
                        c->unk_964 = func_02129f1c(p, data_ov065_0228b968) + 4;
                        q = func_02129f1c((char *)rb->unk_00, data_ov065_0228ba80);
                        if (q != NULL) {
                            q = q + func_0212a438(data_ov065_0228ba80);
                            q2 = func_02129f1c(q, data_ov065_0228b990);
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

s32 func_ov065_0226eb6c(Unk_ov065_0226e3ac_Ctx *c) {
    char buf[8];
    s32 n;
    if (func_ov065_0226e3ac(c, data_ov065_0228ba94, data_ov065_0228baa0) != 0) {
        return 1;
    }
    n = func_0212a438(func_02129f1c((char *)c->unk_928.unk_00, data_ov065_0228b968) + 4);
    if (n != 0) {
        func_02113088(buf, 7, data_ov065_0228baa8, n);
        if (func_ov065_0226e3ac(c, data_ov065_0228baac, buf) != 0) {
            return 1;
        }
    }
    return 0;
}

s32 func_ov065_0226ebe4(Unk_ov065_0226e3ac_Ctx *c, Unk_ov065_0226e3ac_Cfg *cfg) {
    func_02115fb4(c, 0, 0x1a60);
    c->unk_960 = -1;
    *(Unk_ov065_0226e3ac_Cfg *)&c->unk_04 = *cfg;
    c->unk_91c = c->unk_14(data_ov065_0228ba58, 0xb68);
    if (c->unk_91c == NULL) {
        c->unk_24 = 1;
        return 1;
    }
    c->unk_920 = c->unk_14(data_ov065_0228ba6c, 0x5ea);
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

s32 func_ov065_0226ec94(void) {
    return data_ov065_02290620->unk_04;
}

void func_ov065_0226eca0(s32 v) {
    func_02114480(data_ov065_02290620->unk_1dc);
    data_ov065_02290620->unk_00 = v;
    func_02114410(data_ov065_02290620->unk_1dc);
}

}
