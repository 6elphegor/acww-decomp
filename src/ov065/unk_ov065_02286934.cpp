// mwcc-flags: -O4,p -str reuse

#include "types.h"




namespace N022868b0 {
extern "C" {


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



extern u8 data_ov065_0228e16c[];



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


















}
}

namespace N02287200 {
extern "C" {


// ov065_064: GameSpy query-and-report style (0xfe 0xfd packets) server object helpers (0x02287200..0x02287aa4)

struct Unk_ov065_02287390_Buf {
    u8 unk_000[0x800];
    s32 unk_800;
};

struct Unk_ov065_02287390_Qr;
struct Unk_ov065_02287390_W {
    u32 v;
};

typedef s32 (*Unk_ov065_02287390_Cb88)(u32, Unk_ov065_02287390_Buf *, void *);
typedef s32 (*Unk_ov065_02287390_Cb8c)(u32, s32, Unk_ov065_02287390_Buf *, void *);
typedef s32 (*Unk_ov065_02287390_Cb94)(s32, u8 *, void *);
typedef s32 (*Unk_ov065_02287390_Cb98)(s32, void *);
typedef s32 (*Unk_ov065_02287390_Cb9c)(s32, u8 *, void *);
typedef s32 (*Unk_ov065_02287390_Cba0)(u32, void *);
typedef s32 (*Unk_ov065_02287390_Cba4)(u8 *, s32, void *);

struct Unk_ov065_02287390_Qr {
    s32 unk_00;
    u8 unk_04[0x80];
    u8 unk_84[4];
    Unk_ov065_02287390_Cb88 unk_88;
    Unk_ov065_02287390_Cb8c unk_8c;
    Unk_ov065_02287390_Cb8c unk_90;
    Unk_ov065_02287390_Cb94 unk_94;
    Unk_ov065_02287390_Cb98 unk_98;
    Unk_ov065_02287390_Cb9c unk_9c;
    Unk_ov065_02287390_Cba0 unk_a0;
    Unk_ov065_02287390_Cba4 unk_a4;
    s32 unk_a8;
    s32 unk_ac;
    s32 unk_b0;
    s32 unk_b4;
    s32 unk_b8;
    s32 unk_bc;
    s32 unk_c0;
    s32 unk_c4;
    s32 unk_c8;
    u8 unk_cc[8];
    s32 unk_d4;
    u32 unk_d8[10];
    s32 unk_100;
    s32 unk_104;
    u16 unk_108;
    u16 unk_10a;
    void *unk_10c;
};

struct Unk_ov065_0228758c_B4 {
    u8 b[4];
};

struct Unk_ov065_02287200_Sa {
    u8 unk_0;
    u8 unk_1;
    u16 unk_2;
    u32 unk_4;
};

struct Unk_ov065_02287348_Ent {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0c;
    s32 unk_10;
    u8 unk_14[0x2c];
};

struct Unk_ov065_022786bc_Vec;

typedef Unk_ov065_02287390_Qr Qr;
typedef Unk_ov065_02287390_Buf Buf;
typedef Unk_ov065_02287348_Ent Ent;
typedef Unk_ov065_022786bc_Vec Vec;

extern "C" {
extern u8 data_ov065_0228e16c[];
extern Qr *data_ov065_0228e1b4;
extern u8 data_ov065_0228e1b8[];
extern char data_ov065_0228e2d0[];
extern char data_ov065_0228e2dc[];
extern char data_ov065_0228e2e8[];
extern char data_ov065_0228e2f0[];
extern char data_ov065_0228e2f4[];
extern char data_ov065_0228e2f8[];
extern char data_ov065_0228e308[];
extern char data_ov065_0228e314[];
extern char data_ov065_0228e320[];
extern char data_ov065_0228e32c[];
extern char data_ov065_0228e340[];
extern char data_ov065_0228e348[];
extern char data_ov065_0228e34c[];
extern char *data_ov065_0228e504[];
extern Vec *data_ov065_02291544;
extern s32 data_ov065_02291748;
extern u32 data_ov065_0229174c[];

s32 func_02128930(const void *, const void *, s32);
void func_02128a00(void *, const void *, s32);
s32 func_021130d0(char *, const char *, ...);
s32 func_ov065_02278c64(s32, void *, s32, s32, void *, s32);
s32 func_ov065_02278dbc(s32);
s32 func_ov065_02279144(void);
void func_ov065_02278688(Vec *);
s32 func_ov065_02278684(Vec *);
void *func_ov065_0227866c(Vec *, s32);
void func_ov065_02278658(Vec *, void *);
void func_ov065_0227858c(Vec *, s32);
Vec *func_ov065_022786bc(s32, s32, void *);
char *func_ov065_022610f0(Unk_ov065_02287390_W);
void func_ov065_02287df8(Buf *, s32, u8 *);
void func_ov065_02288094(Buf *, const char *);
void func_ov065_022880d8(Buf *, s32);
void func_ov065_02287b18(Qr *, Buf *, u32, u8 *, u32, u8 *, u32, u8 *);
void func_ov065_02287d04(Qr *, u8 *);
void func_ov065_02287d90(Qr *, Buf *, u8 *, s32);

void func_ov065_02287324(Ent *e);
void func_ov065_02287940(Qr *q, Buf *buf, s32 kind);
void func_ov065_022878f0(Qr *q, Buf *buf);
BOOL func_ov065_022877d4(Qr *q, u32 v);
void func_ov065_02287828(Qr *q, u8 *p, s32 n);
void func_ov065_02287aa4(Qr *q, Buf *buf, u8 *p, s32 n);

#define HTONS(x) ((u16)((((x) >> 8) & 0xff) | (((x) << 8) & 0xff00)))
#define HTONL(x) (((x) >> 24 & 0xff) | ((x) >> 8 & 0xff00) | ((x) << 8 & 0xff0000) | ((x) << 24 & 0xff000000))
















}

}
}

extern "C" { u32 data_ov065_02291538; } //@
extern "C" { void *data_ov065_02291544; } //@
namespace N02287200 { extern "C" {
Ent *func_ov065_02287348(s32 x) {
    s32 i;
    Ent *e;
    if (data_ov065_02291544 == NULL) {
        return NULL;
    }
    for (i = 0; i < func_ov065_02278684(data_ov065_02291544); i++) {
        e = (Ent *)func_ov065_0227866c(data_ov065_02291544, i);
        if (e->unk_08 == x) {
            return e;
        }
    }
    return NULL;
}
} }

namespace N02287200 { extern "C" {
void func_ov065_02287324(Ent *e) {
    if (e->unk_00 != -1) {
        func_ov065_02278dbc(e->unk_00);
    }
    e->unk_00 = -1;
    e->unk_10 = 4;
}
} }

extern "C" { u32 data_ov065_02291540; } //@
namespace N02287200 { extern "C" {
void *func_ov065_022872c8(void) {
    Ent z = {0};
    if (data_ov065_02291544 == NULL) {
        data_ov065_02291544 = func_ov065_022786bc(0x40, 4, (void *)func_ov065_02287324);
    }
    func_ov065_02278658(data_ov065_02291544, &z);
    return func_ov065_0227866c(data_ov065_02291544, func_ov065_02278684(data_ov065_02291544) - 1);
}
} }

namespace N02287200 { extern "C" {
void func_ov065_02287280(void *key) {
    s32 i;
    for (i = 0; i < func_ov065_02278684(data_ov065_02291544); i++) {
        if (key == func_ov065_0227866c(data_ov065_02291544, i)) {
            func_ov065_0227858c(data_ov065_02291544, i);
            return;
        }
    }
}
} }

namespace N02287200 { extern "C" {
void func_ov065_02287260(void) {
    if (data_ov065_02291544 != NULL) {
        func_ov065_02278688(data_ov065_02291544);
        data_ov065_02291544 = NULL;
    }
}
} }

namespace N02287200 { extern "C" {
BOOL func_ov065_0228723c(void *p) {
    if (func_02128930(p, data_ov065_0228e16c, 6) == 0) {
        return TRUE;
    }
    return FALSE;
}
} }

extern "C" { u8 data_ov065_02291548[0x200]; } //@
namespace N02287200 { extern "C" {
s32 func_ov065_02287200(s32 sock, u32 ip, s32 port, void *buf, s32 len) {
    Unk_ov065_02287200_Sa sa;
    sa.unk_1 = 2;
    sa.unk_2 = HTONS(port);
    sa.unk_4 = ip;
    return func_ov065_02278c64(sock, buf, len, 0, &sa, 8);
}
} }

namespace N022868b0 { extern "C" {
extern "C" u32 func_ov065_022871ac() {
    u32 r = 0;
    Unk_ov065_022871ac_List *list = func_ov065_02278e64();
    if (list == NULL) {
        return r;
    }
    // in_addr.s_addr is unsigned long, the result is unsigned int: the long->int copy is not propagated
    s32 i;
    unsigned long *e;
    for (i = 0;; i++) {
        e = ((unsigned long **)list->unk_0c)[i];
        if (e == NULL) {
            break;
        }
        if (*e == 0x100007f) {
            continue;
        }
        r = *e;
        if (func_ov065_02278dfc(e) != 0) {
            return r;
        }
    }
    return r;
}
} }

extern "C" u8 data_ov065_0228e16c[6] = {0xfd, 0xfc, 0x1e, 0x66, 0x6a, 0xb2}; //@
namespace N022868b0 { extern "C" {
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
} }

namespace N022868b0 { extern "C" {
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
} }

namespace N022868b0 { extern "C" {
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
} }

namespace N022868b0 { extern "C" {
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
} }

namespace N022868b0 { extern "C" {
extern "C" u32 func_ov065_02286ed8(const char *name, const char *s) {
    char buf[0x80];
    if (name == NULL) {
        func_02113088(buf, 0x80, "%s.%s", data_ov065_02290fe4, s);
        name = buf;
    }
    return func_ov065_02286f04(name);
}
} }

namespace N022868b0 { extern "C" {
extern "C" s32 func_ov065_02286e70() {
    if (data_ov065_02291540 == 0) {
        data_ov065_02291540 = func_ov065_02286ed8((const char *)data_ov065_02291538, "natneg1.gs.nintendowifi.net");
    }
    if (data_ov065_0229153c == 0) {
        data_ov065_0229153c = func_ov065_02286ed8((const char *)data_ov065_02291534, "natneg2.gs.nintendowifi.net");
    }
    if (data_ov065_02291540 == 0 || data_ov065_0229153c == 0) {
        return 0;
    }
    return 1;
}
} }

namespace N022868b0 { extern "C" {
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
} }

extern "C" { u32 data_ov065_0229153c; } //@
namespace N022868b0 { extern "C" {
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
} }

namespace N022868b0 { extern "C" {
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
} }

namespace N022868b0 { extern "C" {
extern "C" void func_ov065_02286c3c() {
    if (data_ov065_02291544 != NULL) {
        s32 i;
        for (i = func_ov065_02278684(data_ov065_02291544) - 1; i >= 0; i--) {
            func_ov065_02286c74((Unk_ov065_02286c74_Ctx *)func_ov065_0227866c(data_ov065_02291544, i));
        }
    }
}
} }

namespace N022868b0 { extern "C" {
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
} }

extern "C" { u32 data_ov065_02291534; } //@
namespace N022868b0 { extern "C" {
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
} }

namespace N022868b0 { extern "C" {
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
} }

namespace N022868b0 { extern "C" {
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
} }

namespace N022868b0 { extern "C" {
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
} }
