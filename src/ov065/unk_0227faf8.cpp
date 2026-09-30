// mwcc-flags: -O4,p
#include "types.h"

// ov065_053: DWC/GameSpy-like response builder / parser (0x0227faf8..0x0227ff90)

struct Unk_ov065_0227fe88_Ctx {
    u8 pad_000[0x198];
    s32 unk_198;
    u8 pad_19c[0x2a4];
    s32 unk_440;
    s32 unk_444;
    s32 unk_448;
    s32 unk_44c;
    s32 unk_450;
    s32 unk_454;
    s32 unk_458;
};

struct Unk_ov065_0227ff90_Pair {
    s32 unk_00;
    s32 unk_04;
};

struct Unk_ov065_0227ff90_Wrap {
    Unk_ov065_0227ff90_Pair unk_00;
};

struct Unk_ov065_0227ff90_Req {
    u8 pad_00[0xc];
    Unk_ov065_0227ff90_Wrap unk_0c;
};

struct Unk_ov065_0227ff90_Node {
    s32 unk_00;
    u8 pad_04[8];
    s32 unk_0c;
    u8 pad_10[0x2c];
    Unk_ov065_0227ff90_Node *unk_3c;
};

struct Unk_ov065_0227ff90_Ctx {
    u8 pad_000[0x100];
    s32 unk_100;
    u8 pad_104[0x330];
    Unk_ov065_0227ff90_Node *unk_434;
};

struct Unk_ov065_0227ff90_Rec {
    char *unk_00;
    char *unk_04;
    char *unk_08;
    char *unk_0c;
    char *unk_10;
    char *unk_14;
    s32 unk_18;
    char unk_1c[0xb];
    char unk_27[3];
    u8 pad_2a[2];
    s32 unk_2c;
    s32 unk_30;
    char unk_34[0x80];
    s32 unk_b4;
    s32 unk_b8;
    s32 unk_bc;
    s32 unk_c0;
    s32 unk_c4;
    char *unk_c8;
    s32 unk_cc;
    s32 unk_d0;
    s32 unk_d4;
    s32 unk_d8;
    s32 unk_dc;
    s32 unk_e0;
    s32 unk_e4;
    s32 unk_e8;
    s32 unk_ec;
};

extern char data_ov065_0228d5cc[];
extern char data_ov065_0228d5f4[];
extern char data_ov065_0228d608[];
extern char data_ov065_0228d610[];
extern char data_ov065_0228d614[];
extern char data_ov065_0228d624[];
extern char data_ov065_0228d640[];
extern char data_ov065_0228d648[];
extern char data_ov065_0228d658[];
extern char data_ov065_0228d66c[];
extern char data_ov065_0228d678[];
extern char data_ov065_0228d684[];
extern char data_ov065_0228d690[];
extern char data_ov065_0228d6b4[];
extern char data_ov065_0228d6c4[];
extern char data_ov065_0228d6c8[];
extern char data_ov065_0228d6cc[];
extern char data_ov065_0228d6d0[];
extern char data_ov065_0228d6d8[];
extern char data_ov065_0228d718[];
extern char data_ov065_0228d720[];
extern char data_ov065_0228d728[];
extern char data_ov065_0228d730[];
extern char data_ov065_0228d738[];
extern char data_ov065_0228d740[];
extern char data_ov065_0228d748[];
extern char data_ov065_0228d750[];
extern char data_ov065_0228d758[];
extern char data_ov065_0228d76c[];
extern char data_ov065_0228d77c[];
extern char data_ov065_0228d78c[];
extern char data_ov065_0228d798[];
extern char data_ov065_0228d7a4[];
extern char data_ov065_0228d7b4[];
extern char data_ov065_0228d7c4[];
extern char data_ov065_0228d7d4[];
extern char data_ov065_0228d7e8[];
extern char data_ov065_0228d7f8[];
extern char data_ov065_0228d810[];
extern char data_ov065_0228d824[];
extern char data_ov065_0228d82c[];
extern char data_ov065_0228d85c[];
extern char data_ov065_0228d864[];
extern char data_ov065_0228d86c[];
extern char data_ov065_0228d874[];
extern char data_ov065_0228d87c[];

extern "C" {

s32 func_0212a15c(const char *, const char *, s32);
s32 func_0212b770(const char *);
s32 func_021130d0(char *, const char *, ...);
void func_ov065_02277ac8(void *);
void *func_ov065_02277af0(s32);
char *func_ov065_02279100(const char *);
s32 func_ov065_0227de10(void *, char *, const char *);
s32 func_ov065_0227dde8(void *, char *, s32);
void func_ov065_0227e160(void *, s32, s32);
s32 func_ov065_0227e0e8(void *, Unk_ov065_0227ff90_Pair, void *, void *, s32);
s32 func_ov065_0227f324(void *, u32 *, Unk_ov065_0227ff90_Rec *);
s32 func_ov065_022804b8(Unk_ov065_0227ff90_Rec *, void *);
s32 func_ov065_022806e8(void *, s32, s32 *, s32 *, s32 *);
void func_ov065_0228090c(void *, void *);
s32 func_ov065_022818bc(void *, s32, u32 **);
u32 *func_ov065_022818f4(void *, s32);
void func_ov065_02283460(void *, const char *);
void func_ov065_02283470(void *, s32, const char *);
s32 func_ov065_02283630(const char *, const char *, char *, s32);
s32 func_ov065_02283684(void *, const char *, s32);

s32 func_ov065_0227fe88(void *h, char *a, char *b);
s32 func_ov065_0227febc(void *h, char *a, char *b);

s32 func_ov065_0227faf8(void *h, s32 code, s32 val) {
    char buf[16];
    s32 r;
    switch (code) {
    case 0x708:
        if (val < 0) {
            func_ov065_02283460(h, data_ov065_0228d758);
            return 2;
        }
        func_021130d0(buf, data_ov065_0228d610, val);
        r = func_ov065_0227febc(h, data_ov065_0228d690, buf);
        if (r != 0) {
            return r;
        }
        break;
    case 0x70b:
        switch (val) {
        case 0x500:
            r = func_ov065_0227febc(h, data_ov065_0228d6d0, data_ov065_0228d6c4);
        if (r != 0) {
            return r;
        }
            break;
        case 0x501:
            r = func_ov065_0227febc(h, data_ov065_0228d6d0, data_ov065_0228d6c8);
        if (r != 0) {
            return r;
        }
            break;
        case 0x502:
            r = func_ov065_0227febc(h, data_ov065_0228d6d0, data_ov065_0228d6cc);
        if (r != 0) {
            return r;
        }
            break;
        default:
            func_ov065_02283460(h, data_ov065_0228d76c);
            return 2;
        }
        break;
    case 0x706:
        func_021130d0(buf, data_ov065_0228d610, val);
        r = func_ov065_0227febc(h, data_ov065_0228d6d8, buf);
        if (r != 0) {
            return r;
        }
        break;
    case 0x70c:
        func_021130d0(buf, data_ov065_0228d610, val);
        r = func_ov065_0227fe88(h, data_ov065_0228d77c, buf);
        if (r != 0) {
            return r;
        }
        break;
    case 0x70d:
        func_021130d0(buf, data_ov065_0228d610, val);
        r = func_ov065_0227fe88(h, data_ov065_0228d78c, buf);
        if (r != 0) {
            return r;
        }
        break;
    case 0x70e:
        func_021130d0(buf, data_ov065_0228d610, val / 16);
        r = func_ov065_0227fe88(h, data_ov065_0228d798, buf);
        if (r != 0) {
            return r;
        }
        break;
    case 0x710:
        func_021130d0(buf, data_ov065_0228d610, val / 4);
        r = func_ov065_0227fe88(h, data_ov065_0228d7a4, buf);
        if (r != 0) {
            return r;
        }
        break;
    case 0x712:
        func_021130d0(buf, data_ov065_0228d610, val / 4);
        r = func_ov065_0227fe88(h, data_ov065_0228d7b4, buf);
        if (r != 0) {
            return r;
        }
        break;
    case 0x713:
        func_021130d0(buf, data_ov065_0228d610, val);
        r = func_ov065_0227fe88(h, data_ov065_0228d7c4, buf);
        if (r != 0) {
            return r;
        }
        break;
    case 0x714:
        func_021130d0(buf, data_ov065_0228d610, val);
        r = func_ov065_0227fe88(h, data_ov065_0228d7d4, buf);
        if (r != 0) {
            return r;
        }
        break;
    case 0x715:
        if (val != 0) {
            val = 1;
        }
        func_021130d0(buf, data_ov065_0228d610, val);
        r = func_ov065_0227fe88(h, data_ov065_0228d7e8, buf);
        if (r != 0) {
            return r;
        }
        break;
    case 0x718:
        func_021130d0(buf, data_ov065_0228d610, val);
        r = func_ov065_0227febc(h, data_ov065_0228d720, buf);
        if (r != 0) {
            return r;
        }
        break;
    case 0x719:
        func_021130d0(buf, data_ov065_0228d610, val);
        r = func_ov065_0227febc(h, data_ov065_0228d728, buf);
        if (r != 0) {
            return r;
        }
        break;
    case 0x71a:
        func_021130d0(buf, data_ov065_0228d610, val);
        r = func_ov065_0227febc(h, data_ov065_0228d730, buf);
        if (r != 0) {
            return r;
        }
        break;
    case 0x71b:
        func_021130d0(buf, data_ov065_0228d610, val);
        r = func_ov065_0227febc(h, data_ov065_0228d738, buf);
        if (r != 0) {
            return r;
        }
        break;
    case 0x71c:
        func_021130d0(buf, data_ov065_0228d610, val);
        r = func_ov065_0227febc(h, data_ov065_0228d740, buf);
        if (r != 0) {
            return r;
        }
        break;
    case 0x71d:
        func_021130d0(buf, data_ov065_0228d610, val);
        r = func_ov065_0227febc(h, data_ov065_0228d748, buf);
        if (r != 0) {
            return r;
        }
        break;
    case 0x71e:
        func_021130d0(buf, data_ov065_0228d610, val);
        r = func_ov065_0227febc(h, data_ov065_0228d750, buf);
        if (r != 0) {
            return r;
        }
        break;
    default:
        func_ov065_02283460(h, data_ov065_0228d614);
        return 2;
    }
    return 0;
}

s32 func_ov065_0227fe88(void *h, char *a, char *b) {
    Unk_ov065_0227fe88_Ctx *c = *(Unk_ov065_0227fe88_Ctx **)h;
    s32 r = func_ov065_0227de10(h, (char *)&c->unk_450, a);
    if (r != 0) {
        return r;
    }
    r = func_ov065_0227de10(h, (char *)&c->unk_450, b);
    if (r != 0) {
        return r;
    }
    return 0;
}

s32 func_ov065_0227febc(void *h, char *a, char *b) {
    Unk_ov065_0227fe88_Ctx *c = *(Unk_ov065_0227fe88_Ctx **)h;
    s32 r = func_ov065_0227de10(h, (char *)&c->unk_440, a);
    if (r != 0) {
        return r;
    }
    r = func_ov065_0227de10(h, (char *)&c->unk_440, b);
    if (r != 0) {
        return r;
    }
    return 0;
}

s32 func_ov065_0227fef0(void *h, char *p) {
    Unk_ov065_0227fe88_Ctx *c = *(Unk_ov065_0227fe88_Ctx **)h;
    if (c->unk_448 > 0) {
        func_ov065_0227de10(h, p, data_ov065_0228d7f8);
        func_ov065_0227dde8(h, p, c->unk_198);
        func_ov065_0227de10(h, p, (const char *)c->unk_440);
        func_ov065_0227de10(h, p, data_ov065_0228d608);
        c->unk_448 = 0;
    }
    if (c->unk_458 > 0) {
        func_ov065_0227de10(h, p, data_ov065_0228d810);
        func_ov065_0227dde8(h, p, c->unk_198);
        func_ov065_0227de10(h, p, (const char *)c->unk_450);
        func_ov065_0227de10(h, p, data_ov065_0228d608);
        c->unk_458 = 0;
    }
    return 0;
}


#define FIND(key, dst, n) func_ov065_02283630(str, key, dst, n)

s32 func_ov065_0227ff90(void *h, Unk_ov065_0227ff90_Req *req, char *str) {
    Unk_ov065_0227ff90_Ctx *ctx = *(Unk_ov065_0227ff90_Ctx **)h;
    struct {
        u32 *e;
        Unk_ov065_0227ff90_Wrap p;
        char buf[0x40];
        char a[0x1f];
        char b[0x15];
        char c[0x33];
        char d[0x1f];
        char e2[0x1f];
        char g[0x33];
    } l;
    s32 r5;
    s32 flag;
    Unk_ov065_0227ff90_Node *n;
    void *node;

    if (func_ov065_02283684(h, str, 1) != 0) {
        return 4;
    }
    if (func_0212a15c(str, data_ov065_0228d824, 4) != 0) {
        func_ov065_02283470(h, 1, data_ov065_0228d82c);
        func_ov065_0227e160(h, 3, 1);
        return 3;
    }
    if (FIND(data_ov065_0228d5f4, l.buf, 0x40) == 0) {
        func_ov065_02283470(h, 1, data_ov065_0228d82c);
        func_ov065_0227e160(h, 3, 1);
        return 3;
    }
    r5 = func_0212b770(l.buf);
    func_ov065_022818bc(h, r5, &l.e);
    Unk_ov065_0227ff90_Rec s = {0};
    char f[0x4c];
    s.unk_00 = l.a;
    s.unk_04 = l.b;
    s.unk_08 = l.c;
    s.unk_0c = l.d;
    s.unk_10 = l.e2;
    s.unk_14 = f;
    s.unk_c8 = l.g;
    if (FIND(data_ov065_0228d640, s.unk_00, 0x1f) == 0) {
        s.unk_00[0] = 0;
    }
    if (FIND(data_ov065_0228d648, s.unk_04, 0x15) == 0) {
        s.unk_04[0] = 0;
    }
    if (FIND(data_ov065_0228d658, s.unk_08, 0x33) == 0) {
        s.unk_08[0] = 0;
    }
    if (FIND(data_ov065_0228d66c, s.unk_0c, 0x1f) == 0) {
        s.unk_0c[0] = 0;
    }
    if (FIND(data_ov065_0228d678, s.unk_10, 0x1f) == 0) {
        s.unk_10[0] = 0;
    }
    if (FIND(data_ov065_0228d6d8, l.buf, 0x40) == 0) {
        s.unk_18 = -1;
    } else {
        s.unk_18 = func_0212b770(l.buf);
    }
    if (FIND(data_ov065_0228d684, s.unk_14, 0x4c) == 0) {
        s.unk_14[0] = 0;
    }
    if (FIND(data_ov065_0228d690, s.unk_1c, 0xb) == 0) {
        s.unk_1c[0] = 0;
    }
    if (FIND(data_ov065_0228d6b4, s.unk_27, 3) == 0) {
        s.unk_27[0] = 0;
    }
    s.unk_2c = 0;
    s.unk_30 = 0;
    if (FIND(data_ov065_0228d85c, s.unk_34, 0x80) == 0) {
        s.unk_34[0] = 0;
    }
    if (FIND(data_ov065_0228d624, l.buf, 0x40) == 0) {
        s.unk_b4 = 0;
        s.unk_b8 = 0;
        s.unk_bc = 0;
    } else {
        s32 r = func_ov065_022806e8(h, func_0212b770(l.buf), &s.unk_b4, &s.unk_b8, &s.unk_bc);
        if (r != 0) {
            return r;
        }
    }
    if (FIND(data_ov065_0228d6d0, l.buf, 0x40) == 0) {
        s.unk_c0 = 0x502;
    } else if (l.buf[0] == 0x30) {
        s.unk_c0 = 0x500;
    } else if (l.buf[0] == 0x31) {
        s.unk_c0 = 0x501;
    } else {
        s.unk_c0 = 0x502;
    }
    if (FIND(data_ov065_0228d864, l.buf, 0x40) == 0) {
        s.unk_c4 = -1;
    } else {
        s.unk_c4 = func_0212b770(l.buf);
    }
    if (FIND(data_ov065_0228d718, s.unk_c8, 0x33) == 0) {
        s.unk_c8[0] = 0;
    }
    if (FIND(data_ov065_0228d720, l.buf, 0x40) == 0) {
        s.unk_cc = 0;
    } else {
        s.unk_cc = func_0212b770(l.buf);
    }
    if (FIND(data_ov065_0228d728, l.buf, 0x40) == 0) {
        s.unk_d0 = 0;
    } else {
        s.unk_d0 = func_0212b770(l.buf);
    }
    if (FIND(data_ov065_0228d730, l.buf, 0x40) == 0) {
        s.unk_d4 = 0;
    } else {
        s.unk_d4 = func_0212b770(l.buf);
    }
    if (FIND(data_ov065_0228d738, l.buf, 0x40) == 0) {
        s.unk_d8 = 0;
    } else {
        s.unk_d8 = func_0212b770(l.buf);
    }
    if (FIND(data_ov065_0228d740, l.buf, 0x40) == 0) {
        s.unk_dc = 0;
    } else {
        s.unk_dc = func_0212b770(l.buf);
    }
    if (FIND(data_ov065_0228d748, l.buf, 0x40) == 0) {
        s.unk_e0 = 0;
    } else {
        s.unk_e0 = func_0212b770(l.buf);
    }
    if (FIND(data_ov065_0228d750, l.buf, 0x40) == 0) {
        s.unk_e4 = 0;
    } else {
        s.unk_e4 = func_0212b770(l.buf);
    }
    if (FIND(data_ov065_0228d86c, l.buf, 0x40) == 0) {
        s.unk_e8 = 0;
    } else {
        s.unk_e8 = func_0212b770(l.buf);
    }
    if (FIND(data_ov065_0228d874, l.buf, 0x40) == 0) {
        s.unk_ec = 0;
    } else {
        s.unk_ec = func_0212b770(l.buf);
    }
    if (FIND(data_ov065_0228d87c, l.buf, 0x40) == 0) {
        func_ov065_02283470(h, 1, data_ov065_0228d82c);
        func_ov065_0227e160(h, 3, 1);
        return 3;
    }
    flag = ctx->unk_100;
    for (n = ctx->unk_434; n != NULL; n = n->unk_3c) {
        if (n->unk_0c == r5 && n->unk_00 == 0x65) {
            if (l.e == NULL) {
                l.e = func_ov065_022818f4(h, r5);
            }
            n->unk_00 = 0x66;
            flag = 1;
        }
    }
    if (l.e == NULL && ctx->unk_100 != 0) {
        l.e = func_ov065_022818f4(h, r5);
    }
    if (flag != 0) {
        func_ov065_02277ac8((void *)l.e[6]);
        l.e[6] = 0;
        l.e[6] = (u32)func_ov065_02279100(l.buf);
    }
    if (ctx->unk_100 != 0) {
        func_ov065_0227f324(h, l.e, &s);
    }
    l.p = req->unk_0c;
    if (l.p.unk_00.unk_00 != 0) {
        node = func_ov065_02277af0(0x204);
        if (node == NULL) {
            func_ov065_02283460(h, data_ov065_0228d5cc);
            return 1;
        }
        func_ov065_022804b8(&s, node);
        ((s32 *)node)[0] = 0;
        ((s32 *)node)[1] = r5;
        {
            s32 r = func_ov065_0227e0e8(h, l.p.unk_00, node, req, 0);
            if (r != 0) {
                return r;
            }
        }
    }
    func_ov065_0228090c(h, req);
    return 0;
}

}
