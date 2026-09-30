// mwcc-flags: -O4,p
#include "types.h"

// ov065_063: GameSpy NAT negotiation client (0x022868b0..0x022871ac)

#define SWAP32(x) ((((x) << 24) & 0xff000000) | ((((x) << 8) & 0xff0000) | ((((x) >> 24) & 0xff) | (((x) >> 8) & 0xff00))))
#define SWAP16(x) ((((x) >> 8) & 0xff) | (((x) << 8) & 0xff00))

struct Unk_ov065_022868b0_InAddr {
    u32 addr;
};

struct Unk_ov065_02286c74_Sa {
    u8 len;
    u8 family;
    u16 port;
    u32 addr;
};

typedef void (*Unk_ov065_02286c74_Cb34)(s32 state, void *user);
typedef void (*Unk_ov065_02286c74_Cb38)(s32 code, s32 fd, void *arg, void *user);

struct Unk_ov065_02286c74_Ctx {
    s32 unk_00;
    s32 unk_04;
    u32 unk_08;
    s32 unk_0c;
    s32 unk_10;
    s32 unk_14[3];
    s32 unk_20;
    s32 unk_24;
    u32 unk_28;
    u32 unk_2c;
    u16 unk_30;
    u8 unk_32;
    u8 unk_33;
    Unk_ov065_02286c74_Cb34 unk_34;
    Unk_ov065_02286c74_Cb38 unk_38;
    void *unk_3c;
};

struct Unk_ov065_02286934_Buf14 {
    u8 b[0x14];
};

struct Unk_ov065_02286934_Buf15 {
    u8 b[0x15];
};

struct Unk_ov065_02286bb4_Magic {
    u8 b[6];
};

struct Unk_ov065_02286bb4_Pkt {
    u8 magic[6];
    u8 version;
    u8 type;
    u32 cookie;
    u8 unk_0c;
    u8 unk_0d;
    u8 unk_0e;
    u8 unk_0f;
    u8 unk_10;
    u8 unk_11;
    u8 unk_12;
    u8 unk_13;
    u8 unk_14;
};

struct Unk_ov065_02287000_Pkt {
    u8 magic[6];
    u8 version;
    u8 type;
    u32 cookie;
    u8 unk_0c;
    u8 unk_0d;
    u8 unk_0e;
    u8 unk_0f;
    u8 unk_10;
    u8 unk_11;
    u8 unk_12;
    u8 unk_13;
    u8 unk_14;
    char name[0x43];
};

struct Unk_ov065_02286f04_Hostent {
    char *name;
    char **aliases;
    s16 addrtype;
    s16 length;
    u32 **addr_list;
};

struct Unk_ov065_022871ac_List {
    u8 pad_00[0xc];
    u8 *unk_0c;
};

extern "C" {
extern s32 data_ov065_02291504;
extern char data_ov065_02291508[];
extern char data_ov065_0228e15c[];
extern char data_ov065_0228e164[];
extern char data_ov065_0228e168[];
extern u8 data_ov065_0228e16c[];
extern char data_ov065_0228e174[];
extern char data_ov065_0228e190[];
extern char data_ov065_0228e1ac[];
extern char data_ov065_02290fe4[];
extern s32 data_ov065_02290fa0;
extern u32 data_ov065_02291534;
extern u32 data_ov065_02291538;
extern u32 data_ov065_0229153c;
extern u32 data_ov065_02291540;
extern void *data_ov065_02291544;
extern u8 data_ov065_02291548[];

s32 func_021130d0(char *buf, const char *fmt, ...);
s32 func_02113088(char *buf, s32 n, const char *fmt, ...);
char *func_02127838(char *dst, const char *src);
u32 func_021277d4(const char *s);

char *func_ov065_022610f0(Unk_ov065_022868b0_InAddr a);
Unk_ov065_02286f04_Hostent *func_ov065_02261408(const char *name);
s32 func_ov065_0227866c(void *list, s32 i);
s32 func_ov065_02278684(void *list);
s32 func_ov065_02278bf4(const char *s);
s32 func_ov065_02278c14(s32 fd, Unk_ov065_02286c74_Sa *sa, s32 *len);
s32 func_ov065_02278cb8(s32 fd, void *buf, s32 n, s32 flags, Unk_ov065_02286c74_Sa *from, s32 *len);
s32 func_ov065_02278dbc(s32 fd);
s32 func_ov065_02278dd4(s32 a, s32 b, s32 c);
Unk_ov065_022871ac_List *func_ov065_02278e64();
s32 func_ov065_02278dfc(void *p);
s32 func_ov065_02278ee8(s32 fd);
u32 func_ov065_02279144();
s32 func_ov065_0228723c();
s32 func_ov065_02287200(s32 fd, u32 addr, u32 port, void *buf, s32 len);
s32 func_ov065_02287280(Unk_ov065_02286c74_Ctx *ctx);
s32 func_ov065_022872c8();
Unk_ov065_02286c74_Ctx *func_ov065_02287348(u32 cookie);

u32 func_ov065_022871ac();
u32 func_ov065_02287188(s32 fd);
void func_ov065_02287000(Unk_ov065_02286c74_Ctx *ctx);
void func_ov065_02286f34(Unk_ov065_02286c74_Ctx *ctx);
u32 func_ov065_02286f04(const char *name);
u32 func_ov065_02286ed8(const char *name, const char *s);
s32 func_ov065_02286e70();
void func_ov065_02286da0(u32 cookie);
void func_ov065_02286c74(Unk_ov065_02286c74_Ctx *ctx);
void func_ov065_02286bb4(Unk_ov065_02286c74_Ctx *ctx, Unk_ov065_02286c74_Sa *sa);
void func_ov065_02286b34(Unk_ov065_02286c74_Ctx *ctx, u8 *pkt, Unk_ov065_02286c74_Sa *sa);
void func_ov065_02286aa8(Unk_ov065_02286c74_Ctx *ctx, u8 *pkt, Unk_ov065_02286c74_Sa *sa);
void func_ov065_02286a0c(Unk_ov065_02286c74_Ctx *ctx, u8 *pkt, Unk_ov065_02286c74_Sa *sa);
void func_ov065_02286934(u8 *pkt, s32 len, Unk_ov065_02286c74_Sa *sa);
}

extern "C" char *func_ov065_022868b0(u32 ip, const char *port, char *buf) {
    Unk_ov065_022868b0_InAddr a;
    if (buf == NULL) {
        data_ov065_02291504 = data_ov065_02291504 ^ 1;
        buf = data_ov065_02291508 + data_ov065_02291504 * 0x16;
    }
    if (ip != 0) {
        a.addr = ip;
        if (port != NULL) {
            func_021130d0(buf, data_ov065_0228e15c, func_ov065_022610f0(a), port);
        } else {
            func_021130d0(buf, data_ov065_0228e164, func_ov065_022610f0(a));
        }
    } else if (port != NULL) {
        func_021130d0(buf, data_ov065_0228e168, port);
    } else {
        buf[0] = 0;
    }
    return buf;
}

extern "C" void func_ov065_02286934(u8 *pkt, s32 len, Unk_ov065_02286c74_Sa *sa) {
    Unk_ov065_02286934_Buf14 h;
    Unk_ov065_02286934_Buf15 g;
    if (func_ov065_0228723c() == 0) {
        return;
    }
    u32 type = pkt[7];
    if (type == 5 || type == 7) {
        if (len < 0x14) {
            return;
        }
        h = *(Unk_ov065_02286934_Buf14 *)pkt;
        u32 c = *(u32 *)&h.b[8];
        Unk_ov065_02286c74_Ctx *ctx = func_ov065_02287348(SWAP32(c));
        if (ctx == NULL) {
            return;
        }
        if (type == 5) {
            func_ov065_02286b34(ctx, h.b, sa);
        } else {
            func_ov065_02286aa8(ctx, h.b, sa);
        }
    } else {
        if (len < 0x15) {
            return;
        }
        g = *(Unk_ov065_02286934_Buf15 *)pkt;
        u32 c = *(u32 *)&g.b[8];
        Unk_ov065_02286c74_Ctx *ctx = func_ov065_02287348(SWAP32(c));
        if (ctx == NULL) {
            return;
        }
        func_ov065_02286a0c(ctx, g.b, sa);
    }
}

extern "C" void func_ov065_02286a0c(Unk_ov065_02286c74_Ctx *ctx, u8 *pkt, Unk_ov065_02286c74_Sa *sa) {
    switch (pkt[7]) {
    case 1: {
        u32 i = pkt[0xc];
        if (i <= 2) {
            ctx->unk_14[i] = 1;
            if (ctx->unk_10 == 0 && ctx->unk_14[1] != 0 && ctx->unk_14[2] != 0) {
                if (ctx->unk_04 == -1 || ctx->unk_14[0] != 0) {
                    ctx->unk_10 = 1;
                    ctx->unk_28 = func_ov065_02279144() + 10000;
                    ctx->unk_34(ctx->unk_10, ctx->unk_3c);
                }
            }
        }
        break;
    }
    case 2: {
        pkt[7] = 3;
        u16 p = sa->port;
        func_ov065_02287200(ctx->unk_00, sa->addr, (u16)SWAP16(p), pkt, 0x15);
        break;
    }
    }
}

extern "C" void func_ov065_02286aa8(Unk_ov065_02286c74_Ctx *ctx, u8 *pkt, Unk_ov065_02286c74_Sa *sa) {
    if (ctx->unk_10 >= 2) {
        ctx->unk_2c = sa->addr;
        u16 p = sa->port;
        ctx->unk_30 = SWAP16(p);
        ctx->unk_32 = 1;
        if (pkt[0x12] == 0) {
            func_ov065_02286f34(ctx);
            return;
        }
        if (ctx->unk_10 == 2) {
            if (ctx->unk_33 == 0) {
                func_ov065_02286f34(ctx);
            }
            ctx->unk_10 = 3;
            ctx->unk_28 = func_ov065_02279144() + 5000;
            if (ctx->unk_04 != -1) {
                ctx->unk_38(0, ctx->unk_04, sa, ctx->unk_3c);
            }
        } else if (pkt[0x13] == 0) {
            func_ov065_02286f34(ctx);
        }
    }
}

extern "C" void func_ov065_02286b34(Unk_ov065_02286c74_Ctx *ctx, u8 *pkt, Unk_ov065_02286c74_Sa *sa) {
    if (pkt[0x13] == 0) {
        func_ov065_02286bb4(ctx, sa);
    }
    if (ctx->unk_10 < 2) {
        u32 r = pkt[0x13];
        if (r != 0) {
            s32 code = 3;
            if (r == 1) {
                code = 1;
            } else if (r == 2) {
                code = 2;
            }
            ctx->unk_38(code, -1, 0, ctx->unk_3c);
            func_ov065_02286da0(ctx->unk_08);
        } else {
            ctx->unk_2c = *(u32 *)&pkt[0xc];
            u16 p = *(u16 *)&pkt[0x10];
            ctx->unk_30 = SWAP16(p);
            ctx->unk_20 = 0;
            ctx->unk_10 = 2;
            ctx->unk_34(ctx->unk_10, ctx->unk_3c);
            func_ov065_02286f34(ctx);
        }
    }
}

extern "C" void func_ov065_02286bb4(Unk_ov065_02286c74_Ctx *ctx, Unk_ov065_02286c74_Sa *sa) {
    Unk_ov065_02286bb4_Pkt pkt;
    u8 *d = (u8 *)&pkt;
    const u8 *m = data_ov065_0228e16c;
    d[0] = m[0];
    d[1] = m[1];
    d[2] = m[2];
    d[3] = m[3];
    d[4] = m[4];
    d[5] = m[5];
    pkt.version = 2;
    pkt.type = 6;
    pkt.unk_0d = ctx->unk_0c;
    u32 c = ctx->unk_08;
    pkt.cookie = SWAP32(c);
    u16 p = sa->port;
    func_ov065_02287200(ctx->unk_00, sa->addr, (u16)SWAP16(p), d, 0x15);
}

extern "C" void func_ov065_02286c3c() {
    if (data_ov065_02291544 != NULL) {
        s32 i;
        for (i = func_ov065_02278684(data_ov065_02291544) - 1; i >= 0; i--) {
            func_ov065_02286c74((Unk_ov065_02286c74_Ctx *)func_ov065_0227866c(data_ov065_02291544, i));
        }
    }
}

extern "C" void func_ov065_02286c74(Unk_ov065_02286c74_Ctx *ctx) {
    Unk_ov065_02286c74_Sa from;
    s32 len;
    Unk_ov065_02286c74_Sa out;
    len = 8;
    if (ctx->unk_10 == 4) {
        func_ov065_02287280(ctx);
        return;
    }
    while (ctx->unk_00 != -1) {
        if (func_ov065_02278ee8(ctx->unk_00) == 0) {
            break;
        }
        s32 n = func_ov065_02278cb8(ctx->unk_00, data_ov065_02291548, 0x200, 0, &from, &len);
        if (n == -1) {
            break;
        }
        func_ov065_02286934(data_ov065_02291548, n, &from);
        if (ctx->unk_10 == 4) {
            break;
        }
    }
    if (ctx->unk_10 == 0 || ctx->unk_10 == 2) {
        if (func_ov065_02279144() > ctx->unk_28) {
            s32 a = ctx->unk_20;
            if (a > ctx->unk_24) {
                ctx->unk_38(2, -1, 0, ctx->unk_3c);
                func_ov065_02286da0(ctx->unk_08);
            } else {
                ctx->unk_20 = a + 1;
                if (ctx->unk_10 == 0) {
                    func_ov065_02287000(ctx);
                } else {
                    func_ov065_02286f34(ctx);
                }
            }
        }
    }
    if (ctx->unk_10 == 3) {
        if (func_ov065_02279144() > ctx->unk_28) {
            if (ctx->unk_04 == -1) {
                out.family = 2;
                u16 p = ctx->unk_30;
                out.port = SWAP16(p);
                out.addr = ctx->unk_2c;
                ctx->unk_38(0, ctx->unk_00, &out, ctx->unk_3c);
                ctx->unk_00 = -1;
            }
            func_ov065_02286da0(ctx->unk_08);
        }
    }
    if (ctx->unk_10 == 1) {
        if (func_ov065_02279144() > ctx->unk_28) {
            ctx->unk_38(1, -1, 0, ctx->unk_3c);
            func_ov065_02286da0(ctx->unk_08);
        }
    }
}

extern "C" void func_ov065_02286da0(u32 cookie) {
    Unk_ov065_02286c74_Ctx *ctx = func_ov065_02287348(cookie);
    if (ctx != NULL) {
        if (ctx->unk_00 != -1) {
            func_ov065_02278dbc(ctx->unk_00);
        }
        ctx->unk_00 = -1;
        ctx->unk_10 = 4;
    }
}

extern "C" s32 func_ov065_02286dcc(u32 a, u32 b, s32 c, s32 d, void *e, void *f) {
    if (data_ov065_02290fa0 != 1) {
        return 2;
    }
    if (func_ov065_02286e70() == 0) {
        return 3;
    }
    Unk_ov065_02286c74_Ctx *ctx = (Unk_ov065_02286c74_Ctx *)func_ov065_022872c8();
    if (ctx == NULL) {
        return 1;
    }
    ctx->unk_04 = a;
    ctx->unk_0c = c;
    ctx->unk_08 = b;
    ctx->unk_34 = (Unk_ov065_02286c74_Cb34)d;
    ctx->unk_38 = (Unk_ov065_02286c74_Cb38)e;
    ctx->unk_3c = f;
    ctx->unk_00 = func_ov065_02278dd4(2, 2, 0);
    ctx->unk_20 = 0;
    ctx->unk_32 = 0;
    ctx->unk_33 = 0;
    ctx->unk_2c = 0;
    ctx->unk_30 = 0;
    ctx->unk_24 = 0;
    if (ctx->unk_00 == -1) {
        func_ov065_02287280(ctx);
        return 2;
    }
    func_ov065_02287000(ctx);
    return 0;
}

extern "C" s32 func_ov065_02286e70() {
    if (data_ov065_02291540 == 0) {
        data_ov065_02291540 = func_ov065_02286ed8((const char *)data_ov065_02291538, data_ov065_0228e174);
    }
    if (data_ov065_0229153c == 0) {
        data_ov065_0229153c = func_ov065_02286ed8((const char *)data_ov065_02291534, data_ov065_0228e190);
    }
    if (data_ov065_02291540 == 0 || data_ov065_0229153c == 0) {
        return 0;
    }
    return 1;
}

extern "C" u32 func_ov065_02286ed8(const char *name, const char *s) {
    char buf[0x80];
    if (name == NULL) {
        func_02113088(buf, 0x80, data_ov065_0228e1ac, data_ov065_02290fe4, s);
        name = buf;
    }
    return func_ov065_02286f04(name);
}

extern "C" u32 func_ov065_02286f04(const char *name) {
    u32 r = func_ov065_02278bf4(name);
    if (r == (u32)-1) {
        Unk_ov065_02286f04_Hostent *h = func_ov065_02261408(name);
        if (h == NULL) {
            return 0;
        }
        r = **h->addr_list;
    }
    return r;
}

extern "C" void func_ov065_02286f34(Unk_ov065_02286c74_Ctx *ctx) {
    Unk_ov065_02286bb4_Pkt pkt;
    u8 *d = (u8 *)&pkt;
    const u8 *m = (const u8 *)data_ov065_0228e16c;
    d[0] = m[0];
    d[1] = m[1];
    d[2] = m[2];
    d[3] = m[3];
    d[4] = m[4];
    d[5] = m[5];
    pkt.version = 2;
    pkt.type = 7;
    u32 c = ctx->unk_08;
    pkt.cookie = SWAP32(c);
    *(u32 *)&pkt.unk_0c = ctx->unk_2c;
    u16 p = ctx->unk_30;
    *(u16 *)&pkt.unk_10 = SWAP16(p);
    pkt.unk_12 = ctx->unk_32;
    pkt.unk_13 = ctx->unk_10 == 2 ? 0 : 1;
    s32 fd = ctx->unk_04;
    if (fd == -1) {
        fd = ctx->unk_00;
    }
    func_ov065_02287200(fd, ctx->unk_2c, ctx->unk_30, &pkt, 0x14);
    ctx->unk_28 = func_ov065_02279144() + 0x2bc;
    ctx->unk_24 = 0xc;
    if (ctx->unk_32 != 0) {
        ctx->unk_33 = 1;
    }
}

extern "C" void func_ov065_02287000(Unk_ov065_02286c74_Ctx *ctx) {
    Unk_ov065_02287000_Pkt pkt;
    u8 *p = (u8 *)&pkt;
    const u8 *m = (const u8 *)data_ov065_0228e16c;
    p[0] = m[0];
    p[1] = m[1];
    p[2] = m[2];
    p[3] = m[3];
    p[4] = m[4];
    p[5] = m[5];
    p[6] = 2;
    p[7] = 0;
    p[0xd] = ctx->unk_0c;
    u32 c = ctx->unk_08;
    *(u32 *)(p + 8) = SWAP32(c);
    u8 flag = 0;
    if (ctx->unk_04 != -1) {
        flag = 1;
    }
    p[0xe] = flag;
    u32 ip = SWAP32(func_ov065_022871ac());
    pkt.unk_0f = ip >> 24;
    pkt.unk_10 = ip >> 16;
    pkt.unk_11 = ip >> 8;
    pkt.unk_12 = ip;
    pkt.unk_13 = 0;
    pkt.unk_14 = 0;
    func_02127838(pkt.name, data_ov065_02290fe4);
    s32 len = func_021277d4(data_ov065_02290fe4) + 0x16;
    if (p[0xe] != 0 && ctx->unk_14[0] == 0) {
        p[0xc] = 0;
        func_ov065_02287200(ctx->unk_04, data_ov065_02291540, 0x6cfd, p, len);
    }
    if (ctx->unk_14[1] == 0) {
        p[0xc] = 1;
        func_ov065_02287200(ctx->unk_00, data_ov065_02291540, 0x6cfd, p, len);
    }
    s32 port = SWAP16((s32)func_ov065_02287188(p[0xe] != 0 ? ctx->unk_04 : ctx->unk_00));
    port = (u16)port;
    pkt.unk_13 = port >> 8;
    pkt.unk_14 = port;
    if (ctx->unk_14[2] == 0) {
        p[0xc] = 2;
        func_ov065_02287200(ctx->unk_00, data_ov065_0229153c, 0x6cfd, p, len);
    }
    ctx->unk_28 = func_ov065_02279144() + 0x1f4;
    ctx->unk_24 = 0x1e;
}

extern "C" u32 func_ov065_02287188(s32 fd) {
    Unk_ov065_02286c74_Sa sa;
    s32 len = 8;
    s32 r = func_ov065_02278c14(fd, &sa, &len);
    u32 port = 0;
    if (r != -1) {
        port = sa.port;
    }
    return port;
}

extern "C" u32 func_ov065_022871ac() {
    u32 r = 0;
    Unk_ov065_022871ac_List *list = func_ov065_02278e64();
    if (list == NULL) {
        return r;
    }
    u32 off = r;
    u32 k = 0x100007f;
    u32 *e;
    for (;;) {
        e = *(u32 **)(list->unk_0c + off);
        if (e == NULL) {
            goto done;
        }
        if (*e != k) {
            r = *(s32 *)e;
            if (func_ov065_02278dfc(e) != 0) {
                return r;
            }
        }
        off += 4;
    }
done:
    return r;
}
