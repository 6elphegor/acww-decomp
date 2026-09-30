// mwcc-flags: -O4,p
#include "types.h"

// ov065_052: DWC/GameSpy GP connection setup helpers (0x0227ee64..0x0227f54c)

struct Unk_ov065_0227c538_Pair {
    s32 unk_00;
    s32 unk_04;
};

struct Unk_ov065_0227c538_Node {
    s32 unk_00;
    s32 unk_04;
    void *unk_08;
    s32 unk_0c;
    char *unk_10;
    s32 unk_14;
    s32 unk_18;
    s32 unk_1c;
    Unk_ov065_0227c538_Node *unk_20;
};

struct Unk_ov065_0227c538_Ctx {
    u8 unk_000;
    u8 pad_001[0xff];
    s32 unk_100;
    s32 unk_104;
    s32 unk_108;
    s32 unk_10c;
    char unk_110[0x1f];
    char unk_12f[0x15];
    char unk_144[0x33];
    char unk_177[0x1f];
    u8 pad_196[0x2];
    s32 unk_198;
    u8 pad_19c[0x38];
    s32 unk_1d4;
    s32 unk_1d8;
    u8 pad_1dc[0x18];
    char *unk_1f4;
    u8 pad_1f8[0xc];
    s32 unk_204;
    s32 unk_208;
};

struct Unk_ov065_0227ee64_Obj {
    u8 pad_000[0xc2];
    char unk_0c2[0x100];
    char unk_1c2[0x100];
    char unk_2c2[0x42];
    s32 unk_304;
};

struct Unk_ov065_0227f00c_Sa {
    u8 unk_0;
    u8 unk_1;
    u16 unk_2;
    u32 unk_4;
};

struct Unk_ov065_0227f00c_Host {
    u8 pad_00[0xc];
    u32 **unk_0c;
};

struct Unk_ov065_0227f324_Rec {
    char *unk_00[6];
    u8 pad_18[0xc8 - 0x18];
    char *unk_c8;
    u8 pad_cc[0xf0 - 0xcc];
};

struct Unk_ov065_0227f324_Copy {
    s64 v[30];
};

struct Unk_ov065_0227f324_Owner {
    u8 pad_00[0xc];
    Unk_ov065_0227f324_Rec *unk_0c;
};

typedef Unk_ov065_0227c538_Ctx Ctx0227;
typedef Unk_ov065_0227c538_Node Node0227;
typedef Unk_ov065_0227c538_Pair Pair0227;

extern "C" {

extern char data_ov065_0228d1a4[];
extern char data_ov065_0228d370[];
extern char data_ov065_0228d428[];
extern char data_ov065_0228d43c[];
extern char data_ov065_0228d450[];
extern char data_ov065_0228d478[];
extern char data_ov065_0228d4ac[];
extern char data_ov065_0228d4d4[];
extern char data_ov065_0228d500[];
extern char data_ov065_0228d530[];
extern char data_ov065_0228d564[];
extern char data_ov065_0228d58c[];
extern char data_ov065_0228d5cc[];
extern char data_ov065_0228d5dc[];
extern char data_ov065_0228d5f4[];
extern char data_ov065_0228d600[];
extern char data_ov065_0228d608[];
extern char data_ov065_0228d614[];
extern char data_ov065_0228d630[];
extern char data_ov065_0228d640[];
extern char data_ov065_0228d648[];
extern char data_ov065_0228d658[];
extern char data_ov065_0228d660[];
extern char data_ov065_0228d66c[];
extern char data_ov065_0228d678[];
extern char data_ov065_0228d684[];
extern char data_ov065_0228d690[];
extern char data_ov065_0228d69c[];
extern char data_ov065_0228d6b4[];
extern char data_ov065_0228d6c4[];
extern char data_ov065_0228d6c8[];
extern char data_ov065_0228d6cc[];
extern char data_ov065_0228d6d0[];
extern char data_ov065_0228d6d8[];
extern char data_ov065_0228d6e4[];
extern char data_ov065_0228d6f8[];
extern char data_ov065_0228d70c[];
extern char data_ov065_0228d718[];
extern char data_ov065_0228d720[];
extern char data_ov065_0228d728[];
extern char data_ov065_0228d730[];
extern char data_ov065_0228d738[];
extern char data_ov065_0228d740[];
extern char data_ov065_0228d748[];
extern char data_ov065_0228d750[];
extern u8 data_0213a490[];

s32 func_ov065_0227ca28(Ctx0227 **);
void func_ov065_02283460(Ctx0227 **, const char *);
void func_ov065_02283470(Ctx0227 **, s32, const char *);
void func_ov065_0227e160(Ctx0227 **, s32, s32);
void func_ov065_02283728(char *, const char *, s32);
void func_ov065_022790d0(char *);
void *func_ov065_02277af0(s32);
void func_ov065_02277ac8(void *);
char *func_ov065_02279100(const char *);
s32 func_ov065_022809a4(Ctx0227 **, s32, void *, Node0227 **, s32, s32, s32);
void func_ov065_02280a2c(Ctx0227 **, Node0227 *);
s32 func_ov065_0227e1c8(Ctx0227 **, s32);
s32 func_ov065_0227c6f0(Ctx0227 **, s32);
s32 func_ov065_02278dd4(s32, s32, s32);
s32 func_ov065_02278d64(s32, void *, s32);
s32 func_ov065_02278d1c(s32, s32);
s32 func_ov065_02278c14(s32, void *, s32 *);
s32 func_ov065_02278d34(s32, void *, s32);
s32 func_ov065_02278be8(s32);
s32 func_ov065_0227908c(void);
Unk_ov065_0227f00c_Host *func_ov065_02261408(char *);
s32 func_ov065_022818bc(Ctx0227 **, s32, Node0227 **);
void func_ov065_022804b8(s32, void *);
s32 func_ov065_0228090c(Ctx0227 **, Node0227 *);
s32 func_ov065_0227e0e8(Ctx0227 **, Pair0227, void *, Node0227 *, s32);
s32 func_ov065_0227de10(Ctx0227 **, char **, const char *);
s32 func_ov065_0227dde8(Ctx0227 **, char **, s32);
s32 func_ov065_0227febc(Ctx0227 **, const char *, const char *);
s32 func_ov065_0227fe88(Ctx0227 **, const char *, const char *);
s32 func_ov065_0227faf8(Ctx0227 **, s32, s32);

void *func_0212899c(void *, s32, u32);
u32 func_02128c70(void);
s32 func_0212b770(const char *);
s32 func_021277d4(const char *);
char *func_02127838(char *, const char *);

s32 func_ov065_0227f4c8(Ctx0227 **, s32, s32);
s32 func_ov065_0227f00c(Ctx0227 **, Node0227 *);

#define GP_FAIL(str) \
    { \
        func_ov065_02283470(h, 5, str); \
        func_ov065_0227e160(h, 3, 1); \
        return 3; \
    }

s32 func_ov065_0227ee64(Ctx0227 **h, const char *a1, const char *a2, const char *a3, const char *a4, const char *a5,
                        const char *a6, const char *a7, s32 mode, s32 a9, s32 a10, s32 a11, s32 a12) {
    Ctx0227 *ctx = *h;
    Unk_ov065_0227ee64_Obj *obj;
    Node0227 *node;
    s32 r;
    if (ctx->unk_1d8 == 4) {
        r = func_ov065_0227ca28(h);
        if (r != 0) {
            return r;
        }
    }
    if (ctx->unk_1d8 != 0) {
        func_ov065_02283460(h, data_ov065_0228d428);
        return 2;
    }
    switch (mode) {
    case 1:
        ctx->unk_10c = 1;
        break;
    case 0:
        ctx->unk_10c = 0;
        break;
    default:
        func_ov065_02283460(h, data_ov065_0228d43c);
        return 2;
    }
    ctx->unk_10c = 1;
    func_ov065_02283728(ctx->unk_110, a1, 0x1f);
    func_ov065_02283728(ctx->unk_12f, a2, 0x15);
    func_ov065_02283728(ctx->unk_144, a3, 0x33);
    func_ov065_02283728(ctx->unk_177, a4, 0x1f);
    func_ov065_022790d0(ctx->unk_144);
    obj = (Unk_ov065_0227ee64_Obj *)func_ov065_02277af0(0x308);
    if (obj == 0) {
        func_ov065_02283460(h, data_ov065_0228d370);
        return 1;
    }
    func_0212899c(obj, 0, 0x308);
    obj->unk_304 = a9;
    if (*a5 != 0 && *a6 != 0) {
        func_ov065_02283728(obj->unk_0c2, a5, 0x100);
        func_ov065_02283728(obj->unk_1c2, a6, 0x100);
    }
    if (a7 != 0) {
        func_ov065_02283728(obj->unk_2c2, a7, 0x41);
    }
    r = func_ov065_022809a4(h, 0, obj, &node, a10, a11, a12);
    if (r != 0) {
        return r;
    }
    r = func_ov065_0227f00c(h, node);
    if (r != 0) {
        node->unk_1c = r;
        func_ov065_02280a2c(h, node);
        func_ov065_0227e1c8(h, 0);
        return r;
    }
    if (node->unk_08 != 0) {
        r = func_ov065_0227c6f0(h, node->unk_18);
        if (r != 0) {
            return r;
        }
    }
    return 0;
}

s32 func_ov065_0227f00c(Ctx0227 **h, Node0227 *n) {
    Ctx0227 *ctx = *h;
    Unk_ov065_0227f00c_Sa sa;
    s32 len;
    Unk_ov065_0227f00c_Host *host;
    s32 e;
    u32 *w;
    if (ctx->unk_10c == 0) {
        ctx->unk_204 = func_ov065_02278dd4(2, 1, 0);
        if (-1 == ctx->unk_204) GP_FAIL(data_ov065_0228d450)
        if (func_ov065_0227908c() == 0) GP_FAIL(data_ov065_0228d478)
        w = (u32 *)&sa;
        w[0] = 0;
        w[1] = 0;
        sa.unk_1 = 2;
        if (func_ov065_02278d64(ctx->unk_204, w, 8) == -1) GP_FAIL(data_ov065_0228d4ac)
        if (func_ov065_02278d1c(ctx->unk_204, 5) == -1) GP_FAIL(data_ov065_0228d4d4)
        len = 8;
        if (func_ov065_02278c14(ctx->unk_204, &sa, &len) == -1) GP_FAIL(data_ov065_0228d500)
        ctx->unk_208 = sa.unk_2;
    } else {
        ctx->unk_204 = -1;
        ctx->unk_208 = 0;
    }
    {
        ctx->unk_1d4 = func_ov065_02278dd4(2, 1, 0);
        if (-1 == ctx->unk_1d4) GP_FAIL(data_ov065_0228d450)
    }
    if (func_ov065_0227908c() == 0) GP_FAIL(data_ov065_0228d478)
    host = func_ov065_02261408(data_ov065_0228d1a4);
    if (host == 0) GP_FAIL(data_ov065_0228d530)
    w = (u32 *)&sa;
    w[0] = 0;
    w[1] = 0;
    sa.unk_1 = 2;
    sa.unk_4 = **host->unk_0c;
    sa.unk_2 = 0xcc74;
    if (func_ov065_02278d34(ctx->unk_1d4, &sa, 8) == -1) {
        e = func_ov065_02278be8(ctx->unk_1d4);
        if (e != -6 && e != -0x1a && e != -0x4c) GP_FAIL(data_ov065_0228d564)
    }
    n->unk_14 = 1;
    ctx->unk_1d8 = 1;
    return 0;
}

void func_ov065_0227f270(char *buf, s32 n) {
    s32 i;
    for (i = 0; i < n; i++) {
        buf[i] = data_ov065_0228d58c[func_02128c70() % 0x3e];
    }
    buf[i] = 0;
}

void func_ov065_0227f2a4(Unk_ov065_0227f324_Owner *p) {
    if (p->unk_0c != 0) {
        func_ov065_02277ac8(p->unk_0c->unk_00[0]);
        p->unk_0c->unk_00[0] = 0;
        func_ov065_02277ac8(p->unk_0c->unk_00[1]);
        p->unk_0c->unk_00[1] = 0;
        func_ov065_02277ac8(p->unk_0c->unk_00[2]);
        p->unk_0c->unk_00[2] = 0;
        func_ov065_02277ac8(p->unk_0c->unk_00[3]);
        p->unk_0c->unk_00[3] = 0;
        func_ov065_02277ac8(p->unk_0c->unk_00[4]);
        p->unk_0c->unk_00[4] = 0;
        func_ov065_02277ac8(p->unk_0c->unk_00[5]);
        p->unk_0c->unk_00[5] = 0;
        func_ov065_02277ac8(p->unk_0c->unk_c8);
        p->unk_0c->unk_c8 = 0;
        func_ov065_02277ac8(p->unk_0c);
        p->unk_0c = 0;
    }
}

s32 func_ov065_0227f324(Ctx0227 **h, Unk_ov065_0227f324_Owner *p, Unk_ov065_0227f324_Rec *q) {
    Unk_ov065_0227f324_Rec *d;
    if ((*h)->unk_100 == 0) {
        return 1;
    }
    func_ov065_0227f2a4(p);
    p->unk_0c = (Unk_ov065_0227f324_Rec *)func_ov065_02277af0(0xf0);
    d = p->unk_0c;
    if (d != 0) {
        *(Unk_ov065_0227f324_Copy *)d = *(Unk_ov065_0227f324_Copy *)q;
        p->unk_0c->unk_00[0] = func_ov065_02279100(q->unk_00[0]);
        p->unk_0c->unk_00[1] = func_ov065_02279100(q->unk_00[1]);
        p->unk_0c->unk_00[2] = func_ov065_02279100(q->unk_00[2]);
        p->unk_0c->unk_00[3] = func_ov065_02279100(q->unk_00[3]);
        p->unk_0c->unk_00[4] = func_ov065_02279100(q->unk_00[4]);
        p->unk_0c->unk_00[5] = func_ov065_02279100(q->unk_00[5]);
        p->unk_0c->unk_c8 = func_ov065_02279100(q->unk_c8);
    }
    if (p->unk_0c != 0) {
        return 1;
    }
    return 0;
}

s32 func_ov065_0227f3c4(Ctx0227 **h, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5) {
    void *m;
    Node0227 *n;
    Node0227 *out2;
    Pair0227 pr;
    s32 ok;
    Ctx0227 *ctx;
    ctx = *h;
    out2 = 0;
    ok = 0;
    s32 p5;
    s32 r;
    if (a2 == 1) {
        ok = 1;
    }
    if (ctx->unk_100 == 0) {
        ok = 0;
    }
    if (a4 != 0 && ok != 0 && func_ov065_022818bc(h, a1, &n) != 0 && n->unk_0c != 0) {
        m = func_ov065_02277af0(0x204);
        if (m == 0) {
            func_ov065_02283460(h, data_ov065_0228d5cc);
            return 1;
        }
        func_ov065_022804b8(n->unk_0c, m);
        ((s32 *)m)[0] = 0;
        ((s32 *)m)[1] = a1;
        pr.unk_00 = a4;
        pr.unk_04 = a5;
        r = func_ov065_022809a4(h, 2, 0, &out2, 1, a4, a5);
        if (r != 0) {
            return r;
        }
        p5 = out2->unk_18;
        r = func_ov065_0227e0e8(h, pr, m, out2, 0);
        if (r != 0) {
            return r;
        }
        func_ov065_0228090c(h, out2);
    } else {
        r = func_ov065_022809a4(h, 2, 0, &out2, a3, a4, a5);
        if (r != 0) {
            return r;
        }
        p5 = out2->unk_18;
        r = func_ov065_0227f4c8(h, a1, p5);
        if (r != 0) {
            return r;
        }
    }
    if (a3 != 0) {
        r = func_ov065_0227c6f0(h, p5);
        if (r != 0) {
            return r;
        }
    }
    return 0;
}

s32 func_ov065_0227f4c8(Ctx0227 **h, s32 a1, s32 a2) {
    Ctx0227 *ctx = *h;
    func_ov065_0227de10(h, &ctx->unk_1f4, data_ov065_0228d5dc);
    func_ov065_0227dde8(h, &ctx->unk_1f4, ctx->unk_198);
    func_ov065_0227de10(h, &ctx->unk_1f4, data_ov065_0228d5f4);
    func_ov065_0227dde8(h, &ctx->unk_1f4, a1);
    func_ov065_0227de10(h, &ctx->unk_1f4, data_ov065_0228d600);
    func_ov065_0227dde8(h, &ctx->unk_1f4, a2);
    func_ov065_0227de10(h, &ctx->unk_1f4, data_ov065_0228d608);
    return 0;
}

#define CK_NONEMPTY \
    if (*val == 0) { \
        func_ov065_02283460(h, data_ov065_0228d630); \
        return 2; \
    }

s32 func_ov065_0227f54c(Ctx0227 **h, s32 cmd, char *val) {
    Ctx0227 *ctx = *h;
    char buf[0x100];
    s32 r;
    char ch;
    s32 c;
    if (val == 0) {
        func_ov065_02283460(h, data_ov065_0228d630);
        return 2;
    }
    switch (cmd) {
    case 0x700:
        CK_NONEMPTY
        func_ov065_02283728(buf, val, 0x1f);
        func_ov065_02283728(ctx->unk_110, buf, 0x1f);
        r = func_ov065_0227febc(h, data_ov065_0228d640, buf);
        if (r != 0) return r;
        break;
    case 0x701:
        CK_NONEMPTY
        func_ov065_02283728(buf, val, 0x15);
        func_ov065_02283728(ctx->unk_12f, buf, 0x15);
        r = func_ov065_0227febc(h, data_ov065_0228d648, buf);
        if (r != 0) return r;
        break;
    case 0x702:
        CK_NONEMPTY
        func_ov065_02283728(buf, val, 0x33);
        func_ov065_022790d0(buf);
        func_ov065_02283728(ctx->unk_144, buf, 0x33);
        r = func_ov065_0227fe88(h, data_ov065_0228d658, buf);
        if (r != 0) return r;
        break;
    case 0x703:
        CK_NONEMPTY
        func_ov065_02283728(buf, val, 0x1f);
        func_ov065_02283728(ctx->unk_177, buf, 0x1f);
        r = func_ov065_0227fe88(h, data_ov065_0228d660, buf);
        if (r != 0) return r;
        break;
    case 0x704:
        func_ov065_02283728(buf, val, 0x1f);
        r = func_ov065_0227febc(h, data_ov065_0228d66c, buf);
        if (r != 0) return r;
        break;
    case 0x705:
        func_ov065_02283728(buf, val, 0x1f);
        r = func_ov065_0227febc(h, data_ov065_0228d678, buf);
        if (r != 0) return r;
        break;
    case 0x707:
        func_ov065_02283728(buf, val, 0x4c);
        r = func_ov065_0227febc(h, data_ov065_0228d684, buf);
        if (r != 0) return r;
        break;
    case 0x708:
        func_ov065_02283728(buf, val, 0xb);
        r = func_ov065_0227febc(h, data_ov065_0228d690, buf);
        if (r != 0) return r;
        break;
    case 0x709:
        if (func_021277d4(val) != 2) {
            func_ov065_02283460(h, data_ov065_0228d69c);
            return 2;
        }
        func_ov065_02283728(buf, val, 3);
        r = func_ov065_0227febc(h, data_ov065_0228d6b4, buf);
        if (r != 0) return r;
        break;
    case 0x70b:
        c = *val;
        if (c >= 0 && c < 0x80) {
            c = data_0213a490[c];
        }
        ch = c;
        if (ch == 0x4d) {
            func_02127838(buf, data_ov065_0228d6c4);
        } else if (ch == 0x46) {
            func_02127838(buf, data_ov065_0228d6c8);
        } else {
            func_02127838(buf, data_ov065_0228d6cc);
        }
        r = func_ov065_0227febc(h, data_ov065_0228d6d0, buf);
        if (r != 0) return r;
        break;
    case 0x706:
        func_ov065_02283728(buf, val, 0x100);
        r = func_ov065_0227febc(h, data_ov065_0228d6d8, buf);
        if (r != 0) return r;
        break;
    case 0x70d:
        r = func_ov065_0227faf8(h, 0x70d, func_0212b770(val));
        if (r != 0) return r;
        break;
    case 0x70e:
        r = func_ov065_0227faf8(h, 0x70e, func_0212b770(val));
        if (r != 0) return r;
        break;
    case 0x70f:
        func_ov065_02283728(buf, val, 0x100);
        r = func_ov065_0227febc(h, data_ov065_0228d6e4, buf);
        if (r != 0) return r;
        break;
    case 0x710:
        r = func_ov065_0227faf8(h, 0x710, func_0212b770(val));
        if (r != 0) return r;
        break;
    case 0x711:
        func_ov065_02283728(buf, val, 0x100);
        r = func_ov065_0227febc(h, data_ov065_0228d6f8, buf);
        if (r != 0) return r;
        break;
    case 0x712:
        r = func_ov065_0227faf8(h, 0x712, func_0212b770(val));
        if (r != 0) return r;
        break;
    case 0x714:
        r = func_ov065_0227faf8(h, 0x714, func_0212b770(val));
        if (r != 0) return r;
        break;
    case 0x715:
        r = func_ov065_0227faf8(h, 0x715, func_0212b770(val));
        if (r != 0) return r;
        break;
    case 0x716:
        func_ov065_02283728(buf, val, 0x100);
        r = func_ov065_0227febc(h, data_ov065_0228d70c, buf);
        if (r != 0) return r;
        break;
    case 0x717:
        func_ov065_02283728(buf, val, 0x33);
        r = func_ov065_0227febc(h, data_ov065_0228d718, buf);
        if (r != 0) return r;
        break;
    case 0x718:
        func_ov065_02283728(buf, val, 0x100);
        r = func_ov065_0227febc(h, data_ov065_0228d720, buf);
        if (r != 0) return r;
        break;
    case 0x719:
        func_ov065_02283728(buf, val, 0x100);
        r = func_ov065_0227febc(h, data_ov065_0228d728, buf);
        if (r != 0) return r;
        break;
    case 0x71a:
        func_ov065_02283728(buf, val, 0x100);
        r = func_ov065_0227febc(h, data_ov065_0228d730, buf);
        if (r != 0) return r;
        break;
    case 0x71b:
        func_ov065_02283728(buf, val, 0x100);
        r = func_ov065_0227febc(h, data_ov065_0228d738, buf);
        if (r != 0) return r;
        break;
    case 0x71c:
        func_ov065_02283728(buf, val, 0x100);
        r = func_ov065_0227febc(h, data_ov065_0228d740, buf);
        if (r != 0) return r;
        break;
    case 0x71d:
        func_ov065_02283728(buf, val, 0x100);
        r = func_ov065_0227febc(h, data_ov065_0228d748, buf);
        if (r != 0) return r;
        break;
    case 0x71e:
        func_ov065_02283728(buf, val, 0x100);
        r = func_ov065_0227febc(h, data_ov065_0228d750, buf);
        if (r != 0) return r;
        break;
    default:
        func_ov065_02283460(h, data_ov065_0228d614);
        return 2;
    }
    return 0;
}

}
