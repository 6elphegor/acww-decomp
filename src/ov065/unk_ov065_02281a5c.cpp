// mwcc-flags: -O4,p -str reuse
#include "types.h"

// ov065 TU49: GP gpiSearch.c (0x02281a5c..0x02283304)

namespace Nb {
// ov065_057: search manager connect / parse helpers (0x02282f90..)
struct Unk_ov065_02282f90_Ctx {
    char unk_000[0x100];
    u8 pad_100[0x418 - 0x100];
    s32 unk_418;
};

struct Unk_ov065_02282f90_Handle {
    Unk_ov065_02282f90_Ctx *unk_00;
};

struct Unk_ov065_02282f90_Conn {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0c;
    s32 unk_10;
    s32 unk_14;
    char *unk_18;
    s32 unk_1c;
    s32 unk_20;
    s32 unk_24;
    char unk_28[0x1f];
    char unk_47[0x15];
    char unk_5c[0x33];
    char unk_8f[0x1f];
    char unk_ae[0x1f];
    u8 pad_cd[0x130 - 0xcd];
    s32 unk_130;
    s32 unk_134;
    s32 unk_138;
    s32 unk_13c;
    s32 unk_140;
};

struct Unk_ov065_022831c0_Sock {
    s32 unk_00;
    s32 unk_04;
    char *unk_08;
    s32 unk_0c;
};

struct Unk_ov065_022831c0_Obj {
    s32 unk_00;
    Unk_ov065_022831c0_Sock *unk_04;
    s32 unk_08;
    s32 unk_0c;
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
};

struct Unk_ov065_022831c0_Host {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 **unk_0c;
};

struct Unk_ov065_022831c0_Addr {
    u8 unk_00;
    u8 unk_01;
    u16 unk_02;
    u32 unk_04;
};

struct Unk_ov065_022833b4_Pair {
    s32 v[2];
};

struct Unk_ov065_022833b4_Src {
    u8 pad_00[0xc];
    Unk_ov065_022833b4_Pair unk_0c;
};

struct Unk_ov065_022837bc_Ent {
    u32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0c;
    s32 unk_10;
    s32 unk_14;
    void *unk_18;
};

struct Unk_ov065_02283744_Buf {
    u8 b[16];
};

extern "C" {
void func_ov065_02283ce0(char *, s32);
s32 func_ov065_022838c4(char *, s32);
s32 func_ov065_02283bd4(char *, s32);
void func_ov065_022790d0(char *);
s32 func_ov065_022809a4(void *, s32, void *, void *, s32, s32, s32);
s32 func_ov065_0227c6f0(void *, s32);
void *func_ov065_02277af0(u32);
s32 func_ov065_02278dd4(s32, s32, s32);
s32 func_ov065_0227908c(s32, s32);
Unk_ov065_022831c0_Host *func_ov065_02261408(const char *);
s32 func_ov065_02278d34(s32, void *, s32);
s32 func_ov065_02278be8(s32);
void func_ov065_0227e160(void *, s32, s32);
s32 func_ov065_02280c84(void *, s32, s32, void *);
s32 func_ov065_0227dc28(void *, s32, char *);
s32 func_ov065_02280c08(void *, s32, const char *, s32);
s32 func_ov065_0227e0e8(void *, Unk_ov065_022833b4_Pair, void *, void *, s32);
void func_ov065_0228090c(void *, void *);
s32 func_ov065_02278f0c(s32, s32, s32 *, s32 *);
s32 func_ov065_02278684(void *);
void func_ov065_02278688(void *);
void *func_ov065_0227866c(void *, s32);
void func_ov065_02278570(void *, s32);
char *func_0212a2ec(char *dst, const char *src, u32 n);
char *func_02129f1c(const char *, const char *);
s32 STD_GetStringLength(const char *);
s32 strncmp(const char *, const char *, u32);
s32 OS_SPrintf(char *buf, const char *fmt, ...);
s32 func_02128ca4(const char *, const char *, ...);
s32 func_0212b770(const char *);
s32 func_0212899c(void *, s32, u32);

void func_ov065_02283460(void *, const char *);
void func_ov065_02283470(void *, s32, const char *);
void func_ov065_02283720(void *, const char *, ...);
void func_ov065_02283728(char *, const char *, s32);
s32 func_ov065_02283630(const char *, const char *, char *, s32);
s32 func_ov065_02283684(void *, const char *, s32);
s32 func_ov065_0228312c(void *, void *, s32);
s32 func_ov065_022830d4(void *, void *, s32, s32, s32);
s32 func_ov065_022831c0(void *, void *);
s32 func_ov065_02283350(void *, s32 *, s32, s32, const char *);
s32 func_ov065_022837bc(s32, s32, s32, void *, s32);
}

}

namespace Na {
// ov065_056: search result parsing (0x02281a5c..0x02282f90)
struct Unk_ov065_02281974_Pair {
    s32 a;
    s32 b;
};

struct Unk_ov065_02281974_Nest {
    Unk_ov065_02281974_Pair p;
};

struct Unk_ov065_02281790_Sub {
    s32 unk_00;
    s32 unk_04;
    void *unk_08;
    void *unk_0c;
};

struct Unk_ov065_02281790_Elem {
    s32 unk_00;
    s32 unk_04;
    Unk_ov065_02281790_Sub *unk_08;
    s32 unk_0c;
    void *unk_10;
    s32 unk_14;
    void *unk_18;
};

struct Unk_ov065_02281790_Conn {
    s32 unk_00;
    s32 unk_04;
    char *unk_08;
    u8 pad_0c[0x18 - 0x0c];
    char *unk_18;
    u8 pad_1c[0x28 - 0x1c];
    char unk_28[0x1f];
    char unk_47[0x15];
    char unk_5c[0x33];
    char unk_8f[0x1f];
    char unk_ae[0x1f];
    char unk_cd[0x1f];
    char unk_ec[0x130 - 0xec];
    s32 unk_130;
    s32 unk_134;
    s32 unk_138;
    s32 unk_13c;
    s32 unk_140;
};

struct Unk_ov065_02281790_Node {
    s32 unk_00;
    Unk_ov065_02281790_Conn *unk_04;
    Unk_ov065_02281790_Sub *unk_08;
    Unk_ov065_02281974_Nest unk_0c;
    s32 unk_14;
    s32 unk_18;
    s32 unk_1c;
    Unk_ov065_02281790_Node *unk_20;
};

struct Unk_ov065_02281790_Ctx {
    u8 pad_000[0x198];
    s32 unk_198;
    u8 pad_19c[4];
    s32 unk_1a0;
    u8 pad_1a4[0x210 - 0x1a4];
    s32 unk_210;
    u8 pad_214[0x418 - 0x214];
    s32 unk_418;
    u8 pad_41c[0x424 - 0x41c];
    Unk_ov065_02281790_Node *unk_424;
    void *unk_428;
    s32 unk_42c;
    s32 unk_430;
    u8 pad_434[0x46c - 0x434];
    s32 unk_46c;
    s32 unk_470;
};

typedef Unk_ov065_02281790_Ctx Ctx0228;
typedef Unk_ov065_02281790_Node Node0228;
typedef Unk_ov065_02281790_Elem Elem0228;
typedef Unk_ov065_02281790_Conn Conn0228;



extern "C" {
extern char data_ov065_02290fe4[];

typedef s32 (*Unk_ov065_022817c8_Cb)(Ctx0228 **, Node0228 *, void *);

s32 func_ov065_02278758(void *, s32 (*)(void *, void *), void *);
s32 func_ov065_02278810(void *, void *);
void *func_ov065_022787c4(void *, void *);
s32 func_ov065_0227885c(void *, void *);
void *func_ov065_02278980(s32, s32, s32 (*)(s32 *, s32), s32 (*)(s32 *, s32 *), void (*)(void *));
void func_ov065_02277ac8(void *);
void *func_ov065_02277af0(s32);
void func_ov065_02283460(Ctx0228 **, const char *);
void func_ov065_02283470(Ctx0228 **, s32, const char *);
s32 func_ov065_02283684(Ctx0228 **, char *, s32);
s32 func_ov065_02283630(char *, const char *, void *, s32);
s32 func_ov065_02283590(Ctx0228 **, s32, void *);
void func_ov065_0227e160(Ctx0228 **, s32, s32);
s32 func_ov065_0227e0e8(Ctx0228 **, Unk_ov065_02281974_Pair, void *, void *, s32);
void func_ov065_0228090c(Ctx0228 **, Node0228 *);
void func_ov065_0227f2a4(void *);
s32 strncmp(const char *, const char *, s32);
s32 func_0212a190(const char *, const char *);
s32 func_0212b770(void *);

s32 func_ov065_02281bf4(Ctx0228 **, Node0228 *);
s32 func_ov065_022817b0(Ctx0228 **, Node0228 *, void *);
s32 func_ov065_022817fc(Node0228 *, void *);
s32 func_ov065_02281844(Ctx0228 **, Node0228 *, void *);
s32 func_ov065_022818bc(Ctx0228 **, s32, void *);
void func_ov065_02281ab4(void *);
s32 func_ov065_022817c8(Ctx0228 **, Unk_ov065_022817c8_Cb, void *);
s32 func_ov065_02281b04(s32 *, s32 *);
s32 func_ov065_02281b0c(s32 *, s32);

struct Unk_ov065_02281790_L1 {
    s32 a;
    Node0228 *r;
};

s32 func_ov065_02283498(Ctx0228 **, char *, s32 *, char *, char *);
void func_ov065_0227de10(Ctx0228 **, char **, const char *);
void func_ov065_0227dde8(Ctx0228 **, char **, s32);
s32 func_ov065_0227da7c(Ctx0228 **, s32, char **, s32 *, s32, const char *);
s32 func_ov065_0227db18(Ctx0228 **, s32, char **, s32 *, s32 *, const char *);
void *func_ov065_02277ad8(void *, s32);
void func_ov065_02283728(char *, const char *, s32);
void *func_0212899c(void *, s32, s32);
char *func_02127838(char *, const char *);
char *func_02129f1c(const char *, const char *);
void func_ov065_0227913c(s32);
s32 func_ov065_02282f90(Ctx0228 **, char *, char *, char *, char *, char *, s32, s32, void *, s32, s32);

struct Unk_ov065_02281bf4_Rec {
    s32 unk_00;
    char unk_04[0x1f];
    char unk_23[0x15];
    char unk_38[0x1f];
    char unk_57[0x1f];
    char unk_76[0x33];
    u8 pad_a9[3];
};

struct Unk_ov065_02281bf4_Res2 {
    s32 unk_00;
    char unk_04[0x34];
    s32 unk_38;
};

struct Unk_ov065_02281bf4_Res3 {
    s32 unk_00;
    char unk_04[0x34];
    s32 unk_38;
    char **unk_3c;
    char **unk_40;
};

struct Unk_ov065_02281bf4_Ent {
    s32 unk_00;
    char unk_04[0x1f];
    u8 pad_23;
    s32 unk_24;
    char unk_28[0x100];
};

struct Unk_ov065_02281bf4_Res4 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    Unk_ov065_02281bf4_Ent *unk_0c;
};

struct Unk_ov065_02281bf4_Res7 {
    s32 unk_00;
    s32 unk_04;
    Unk_ov065_02281bf4_Rec *unk_08;
};

struct Unk_ov065_02281bf4_Res8 {
    s32 unk_00;
    s32 unk_04;
    char **unk_08;
};

struct Unk_ov065_02281bf4_Res5 {
    s32 unk_00;
    s32 unk_04;
};

struct Unk_ov065_02281bf4_S1 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    Unk_ov065_02281bf4_Rec *unk_0c;
};

#define ERR3() { func_ov065_02283470(h, 1, "Error reading from the search server."); func_ov065_0227e160(h, 3, 1); return 3; }
#define ERRMEM(m) { func_ov065_02283460(h, m); return 1; }
#define GETTOK(t) r = func_ov065_02283498(h, c->unk_08, &pos, t, buf); if (r != 0) { return r; }

}
}

namespace Nb {
extern "C" {

char data_ov065_0228dadc[0x40] = "gpsp.gs.nintendowifi.net";
}
}
namespace Nb {
extern "C" {
s32 func_ov065_022831c0(void *h0, void *o0) {
    Unk_ov065_02282f90_Handle *h = (Unk_ov065_02282f90_Handle *)h0;
    Unk_ov065_022831c0_Obj *o = (Unk_ov065_022831c0_Obj *)o0;
    Unk_ov065_022831c0_Sock *s = o->unk_04;
    Unk_ov065_022831c0_Host *ent;
    Unk_ov065_022831c0_Addr sa;
    s32 r;
    s32 m;
    s->unk_0c = 0x1000;
    s->unk_08 = (char *)func_ov065_02277af0(s->unk_0c + 1);
    if (s->unk_08 == NULL) {
        func_ov065_02283460(h, "Out of memory.");
        return 1;
    }
    s->unk_04 = func_ov065_02278dd4(2, 1, 0);
    if (s->unk_04 == -1) {
        func_ov065_02283470(h, 5, "There was an error creating a socket.");
        func_ov065_0227e160(h, 3, 1);
        return 3;
    }
    if (func_ov065_0227908c(s->unk_04, 0) == 0) {
        func_ov065_02283470(h, 5, "There was an error making a socket non-blocking.");
        func_ov065_0227e160(h, 3, 1);
        return 3;
    }
    ent = func_ov065_02261408(data_ov065_0228dadc);
    if (ent == NULL) {
        func_ov065_02283470(h, 5, "Could not resolve search mananger host name.");
        func_ov065_0227e160(h, 3, 1);
        return 3;
    }
    u32 *w = (u32 *)&sa;
    w[0] = 0;
    w[1] = 0;
    sa.unk_01 = 2;
    sa.unk_04 = **ent->unk_0c;
    sa.unk_02 = 0xcd74;
    if (func_ov065_02278d34(s->unk_04, &sa, 8) == -1) {
        r = func_ov065_02278be8(s->unk_04);
        if (r != -6 && r != -0x1a && r != -0x4c) {
            func_ov065_02283470(h, 5, "There was an error connecting a socket.");
            func_ov065_0227e160(h, 3, 1);
            return 3;
        }
    }
    o->unk_14 = 1;
    return 0;
}

s32 func_ov065_0228312c(void *h0, void *out, s32 p2) {
    Unk_ov065_02282f90_Conn *cn;
    Unk_ov065_02282f90_Handle *h = (Unk_ov065_02282f90_Handle *)h0;
    cn = (Unk_ov065_02282f90_Conn *)func_ov065_02277af0(0x144);
    if (cn == NULL) {
        func_ov065_02283460(h, "Out of memory.");
        return 1;
    }
    func_0212899c(cn, 0, 0x144);
    cn->unk_00 = p2;
    cn->unk_04 = -1;
    cn->unk_08 = 0;
    cn->unk_10 = 0;
    cn->unk_14 = 0;
    cn->unk_0c = 0;
    cn->unk_20 = 0;
    cn->unk_24 = 0;
    cn->unk_1c = 0x1000;
    cn->unk_18 = (char *)func_ov065_02277af0(cn->unk_1c + 1);
    if (cn->unk_18 == NULL) {
        func_ov065_02283460(h, "Out of memory.");
        return 1;
    }
    cn->unk_13c = 0;
    cn->unk_140 = 0;
    *(Unk_ov065_02282f90_Conn **)out = cn;
    return 0;
}

s32 func_ov065_022830d4(void *h0, void *cn, s32 p2, s32 p3, s32 p4) {
    Unk_ov065_02282f90_Handle *h = (Unk_ov065_02282f90_Handle *)h0;
    Unk_ov065_022831c0_Obj *o;
    s32 r;
    *(s32 *)((u8 *)h->unk_00 + 0x210) += 1;
    r = func_ov065_022809a4(h, 3, cn, &o, p2, p3, p4);
    if (r != 0) {
        return r;
    }
    r = func_ov065_022831c0(h, o);
    if (r != 0) {
        return r;
    }
    if (o->unk_08 != 0) {
        r = func_ov065_0227c6f0(h, o->unk_18);
        if (r != 0) {
            return r;
        }
    }
    return 0;
}

s32 func_ov065_02282f90(Unk_ov065_02282f90_Handle *h, char *a, char *b, char *c, char *d, char *e, s32 f, s32 g, s32 p8, s32 p9, s32 p10) {
    Unk_ov065_02282f90_Conn *cn;
    s32 r;
    if ((a == NULL || *a == 0) && (c == NULL || *c == 0) && (d == NULL || *d == 0) && (e == NULL || *e == 0) && f == 0 && (b == NULL || *b == 0)) {
        func_ov065_02283460(h, "No search criteria.");
        return 2;
    }
    r = func_ov065_0228312c(h, &cn, 1);
    if (r != 0) {
        return r;
    }
    if (a == NULL) {
        cn->unk_28[0] = 0;
    } else {
        func_ov065_02283728(cn->unk_28, a, 0x1f);
    }
    if (b == NULL) {
        cn->unk_47[0] = 0;
    } else {
        func_ov065_02283728(cn->unk_47, b, 0x15);
    }
    if (c == NULL) {
        cn->unk_5c[0] = 0;
    } else {
        func_ov065_02283728(cn->unk_5c, c, 0x33);
    }
    func_ov065_022790d0(cn->unk_5c);
    if (d == NULL) {
        cn->unk_8f[0] = 0;
    } else {
        func_ov065_02283728(cn->unk_8f, d, 0x1f);
    }
    if (e == NULL) {
        cn->unk_ae[0] = 0;
    } else {
        func_ov065_02283728(cn->unk_ae, e, 0x1f);
    }
    cn->unk_130 = f;
    if (g < 0) {
        g = 0;
    }
    cn->unk_134 = g;
    r = func_ov065_022830d4(h, cn, p8, p9, p10);
    if (r != 0) {
        return r;
    }
    return 0;
}

}
}

namespace Na {
extern "C" {
s32 func_ov065_02281bf4(Ctx0228 **h, Node0228 *node) {
    s32 done, save1;
    Ctx0228 *ctx = *h;
    s32 done2;
    Unk_ov065_02281bf4_Res4 *p4;
    Unk_ov065_02281bf4_Res7 *p7;
    s32 cnt;
    s32 retry;
    Conn0228 *c = node->unk_04;
    s32 r;
    s32 v8c;
    s32 pos;
    Unk_ov065_02281974_Nest pr1;
    s32 vv[2];
    Unk_ov065_02281974_Nest pr8, pr7, pr6, pr5, pr4, pr3, pr2;
    Unk_ov065_02281bf4_S1 s1;
    char tok[0x200];
    char buf[0x200];

    if (node->unk_08 != 0) {
        retry = 1;
    } else {
        retry = 0;
    }
again:
    r = func_ov065_0227da7c(h, c->unk_04, &c->unk_18, &vv[1], 1, "SM");
    if (r != 0) {
        return r;
    }
    if (node->unk_14 == 1) {
        r = func_ov065_02283590(h, c->unk_04, &v8c);
        if (r != 0) {
            return r;
        }
        if (v8c == 4) {
            func_ov065_02283470(h, 0xd01, "Could not connect to the search manager.");
            func_ov065_0227e160(h, 4, 0);
            return 4;
        }
        if (v8c != 3) {
            goto endchk;
        }
        if (c->unk_00 == 1) {
            func_ov065_0227de10(h, &c->unk_18, "\\search\\");
            func_ov065_0227de10(h, &c->unk_18, "\\sesskey\\");
            func_ov065_0227dde8(h, &c->unk_18, ctx->unk_198);
            func_ov065_0227de10(h, &c->unk_18, "\\profileid\\");
            func_ov065_0227dde8(h, &c->unk_18, ctx->unk_1a0);
            func_ov065_0227de10(h, &c->unk_18, "\\namespaceid\\");
            func_ov065_0227dde8(h, &c->unk_18, ctx->unk_470);
            if (c->unk_28[0] != 0) {
                func_ov065_0227de10(h, &c->unk_18, "\\nick\\");
                func_ov065_0227de10(h, &c->unk_18, c->unk_28);
            }
            if (c->unk_47[0] != 0) {
                func_ov065_0227de10(h, &c->unk_18, "\\uniquenick\\");
                func_ov065_0227de10(h, &c->unk_18, c->unk_47);
            }
            if (c->unk_5c[0] != 0) {
                func_ov065_0227de10(h, &c->unk_18, "\\email\\");
                func_ov065_0227de10(h, &c->unk_18, c->unk_5c);
            }
            if (c->unk_8f[0] != 0) {
                func_ov065_0227de10(h, &c->unk_18, "\\firstname\\");
                func_ov065_0227de10(h, &c->unk_18, c->unk_8f);
            }
            if (c->unk_ae[0] != 0) {
                func_ov065_0227de10(h, &c->unk_18, "\\lastname\\");
                func_ov065_0227de10(h, &c->unk_18, c->unk_ae);
            }
            if (c->unk_130 != 0) {
                func_ov065_0227de10(h, &c->unk_18, "\\icquin\\");
                func_ov065_0227dde8(h, &c->unk_18, c->unk_130);
            }
            if (c->unk_134 > 0) {
                func_ov065_0227de10(h, &c->unk_18, "\\skip\\");
                func_ov065_0227dde8(h, &c->unk_18, c->unk_134);
            }
        } else if (c->unk_00 == 2) {
            func_ov065_0227de10(h, &c->unk_18, "\\valid\\");
            func_ov065_0227de10(h, &c->unk_18, "\\email\\");
            func_ov065_0227de10(h, &c->unk_18, c->unk_5c);
        } else if (c->unk_00 == 3) {
            func_ov065_0227de10(h, &c->unk_18, "\\nicks\\");
            func_ov065_0227de10(h, &c->unk_18, "\\email\\");
            func_ov065_0227de10(h, &c->unk_18, c->unk_5c);
            func_ov065_0227de10(h, &c->unk_18, "\\pass\\");
            func_ov065_0227de10(h, &c->unk_18, c->unk_cd);
            func_ov065_0227de10(h, &c->unk_18, "\\namespaceid\\");
            func_ov065_0227dde8(h, &c->unk_18, ctx->unk_470);
        } else if (c->unk_00 == 4) {
            func_ov065_0227de10(h, &c->unk_18, "\\pmatch\\");
            func_ov065_0227de10(h, &c->unk_18, "\\sesskey\\");
            func_ov065_0227dde8(h, &c->unk_18, ctx->unk_198);
            func_ov065_0227de10(h, &c->unk_18, "\\profileid\\");
            func_ov065_0227dde8(h, &c->unk_18, ctx->unk_1a0);
            func_ov065_0227de10(h, &c->unk_18, "\\productid\\");
            func_ov065_0227dde8(h, &c->unk_18, c->unk_138);
        } else if (c->unk_00 == 5) {
            func_ov065_0227de10(h, &c->unk_18, "\\check\\");
            func_ov065_0227de10(h, &c->unk_18, "\\nick\\");
            func_ov065_0227de10(h, &c->unk_18, c->unk_28);
            func_ov065_0227de10(h, &c->unk_18, "\\email\\");
            func_ov065_0227de10(h, &c->unk_18, c->unk_5c);
            func_ov065_0227de10(h, &c->unk_18, "\\pass\\");
            func_ov065_0227de10(h, &c->unk_18, c->unk_cd);
        } else if (c->unk_00 == 6) {
            func_ov065_0227de10(h, &c->unk_18, "\\newuser\\");
            func_ov065_0227de10(h, &c->unk_18, "\\nick\\");
            func_ov065_0227de10(h, &c->unk_18, c->unk_28);
            func_ov065_0227de10(h, &c->unk_18, "\\email\\");
            func_ov065_0227de10(h, &c->unk_18, c->unk_5c);
            func_ov065_0227de10(h, &c->unk_18, "\\pass\\");
            func_ov065_0227de10(h, &c->unk_18, c->unk_cd);
            func_ov065_0227de10(h, &c->unk_18, "\\productID\\");
            func_ov065_0227dde8(h, &c->unk_18, ctx->unk_46c);
            func_ov065_0227de10(h, &c->unk_18, "\\namespaceid\\");
            func_ov065_0227dde8(h, &c->unk_18, ctx->unk_470);
            func_ov065_0227de10(h, &c->unk_18, "\\uniquenick\\");
            func_ov065_0227de10(h, &c->unk_18, c->unk_47);
            if (c->unk_ec[0] != 0) {
                func_ov065_0227de10(h, &c->unk_18, "\\cdkey\\");
                func_ov065_0227de10(h, &c->unk_18, c->unk_ec);
            }
        } else if (c->unk_00 == 7) {
            func_ov065_0227de10(h, &c->unk_18, "\\others\\");
            func_ov065_0227de10(h, &c->unk_18, "\\sesskey\\");
            func_ov065_0227dde8(h, &c->unk_18, ctx->unk_198);
            func_ov065_0227de10(h, &c->unk_18, "\\profileid\\");
            func_ov065_0227dde8(h, &c->unk_18, ctx->unk_1a0);
            func_ov065_0227de10(h, &c->unk_18, "\\namespaceid\\");
            func_ov065_0227dde8(h, &c->unk_18, ctx->unk_470);
        } else if (c->unk_00 == 8) {
            func_ov065_0227de10(h, &c->unk_18, "\\uniquesearch\\");
            func_ov065_0227de10(h, &c->unk_18, "\\preferrednick\\");
            func_ov065_0227de10(h, &c->unk_18, c->unk_47);
            func_ov065_0227de10(h, &c->unk_18, "\\namespaceid\\");
            func_ov065_0227dde8(h, &c->unk_18, ctx->unk_470);
        }
        func_ov065_0227de10(h, &c->unk_18, "\\gamename\\");
        func_ov065_0227de10(h, &c->unk_18, data_ov065_02290fe4);
        func_ov065_0227de10(h, &c->unk_18, "\\final\\");
        node->unk_14 = 4;
        goto endchk;
    }
    if (node->unk_14 != 4) {
        goto endchk;
    }
    r = func_ov065_0227db18(h, c->unk_04, &c->unk_08, &vv[0], &vv[1], "SM");
    if (r != 0) {
        if (r != 3) {
            return r;
        }
        func_ov065_02283470(h, 0xd01, "There was an error reading from the server.");
        func_ov065_0227e160(h, 3, 0);
        return 3;
    }
    if (func_02129f1c(c->unk_08, "\\final\\") == 0) {
        goto endchk;
    }
    pos = 0;
    node->unk_14 = 5;
    if (func_ov065_02283684(h, c->unk_08, 1) != 0) {
        c->unk_140 = 1;
        return 4;
    }
    if (c->unk_00 == 1) {
        done = 0;
        s1.unk_00 = 0;
        s1.unk_04 = 0;
        s1.unk_0c = 0;
        s1.unk_08 = 0x601;
        do {
            GETTOK(tok)
            if (func_0212a190(tok, "bsrdone") == 0) {
                GETTOK(tok)
                if (func_0212a190(tok, "more") == 0) {
                    if (func_0212a190(buf, "0") != 0) {
                        s1.unk_08 = 0x600;
                    }
                }
                done = 1;
            } else if (func_0212a190(tok, "bsr") == 0) {
                Unk_ov065_02281bf4_Rec *e;
                s32 idx;
                Unk_ov065_02281bf4_Rec *base;
                s1.unk_04++;
                base = (Unk_ov065_02281bf4_Rec *)func_ov065_02277ad8(s1.unk_0c, s1.unk_04 * 0xac);
                s1.unk_0c = base;
                if (base == 0) ERRMEM("Out of memory.")
                idx = s1.unk_04 - 1;
                e = &base[idx];
                func_0212899c(e, 0, 0xac);
                base[idx].unk_00 = func_0212b770(buf);
                done2 = 0;
                do {
                    save1 = pos;
                    GETTOK(tok)
                    if (func_0212a190(tok, "nick") == 0) {
                        func_ov065_02283728(e->unk_04, buf, 0x1f);
                    } else if (func_0212a190(tok, "uniquenick") == 0) {
                        func_ov065_02283728(e->unk_23, buf, 0x15);
                    } else if (func_0212a190(tok, "firstname") == 0) {
                        func_ov065_02283728(e->unk_38, buf, 0x1f);
                    } else if (func_0212a190(tok, "lastname") == 0) {
                        func_ov065_02283728(e->unk_57, buf, 0x1f);
                    } else if (func_0212a190(tok, "email") == 0) {
                        func_ov065_02283728(e->unk_76, buf, 0x33);
                    } else if (func_0212a190(tok, "bsr") == 0 || func_0212a190(tok, "bsrdone") == 0) {
                        done2 = 1;
                        pos = save1;
                    }
                } while (done2 == 0);
            } else {
                ERR3()
            }
        } while (done == 0);
        {
            s32 t = s1.unk_08;
            pr1 = node->unk_0c;
            if (pr1.p.a != 0) {
                ((void (*)(Ctx0228 **, void *, s32))pr1.p.a)(h, &s1, pr1.p.b);
            }
            if (t == 0x600 && s1.unk_08 == 0x600) {
                r = func_ov065_02282f90(h, c->unk_28, c->unk_47, c->unk_5c, c->unk_8f, c->unk_ae, c->unk_130, s1.unk_04 + c->unk_134, node->unk_08, node->unk_0c.p.a, node->unk_0c.p.b);
                if (r != 0) {
                    return r;
                }
            }
        }
        func_ov065_02277ac8(s1.unk_0c);
        s1.unk_0c = 0;
        goto done;
    } else if (c->unk_00 == 2) {
        Unk_ov065_02281bf4_Res2 *p;
        pr2 = node->unk_0c;
        if (pr2.p.a == 0) {
            goto done;
        }
        GETTOK(tok)
        if (func_0212a190(tok, "vr") != 0) ERR3()
        p = (Unk_ov065_02281bf4_Res2 *)func_ov065_02277af0(0x3c);
        if (p == 0) ERRMEM("Out of memory.")
        p->unk_00 = 0;
        func_ov065_02283728(p->unk_04, c->unk_5c, 0x33);
        if (buf[0] == 0x30) {
            p->unk_38 = 0;
        } else {
            p->unk_38 = 1;
        }
        r = func_ov065_0227e0e8(h, pr2.p, p, node, 0);
        if (r == 0) {
            goto done;
        }
        return r;
    } else if (c->unk_00 == 3) {
        Unk_ov065_02281bf4_Res3 *p;
        pr3 = node->unk_0c;
        if (pr3.p.a == 0) {
            goto done;
        }
        p = (Unk_ov065_02281bf4_Res3 *)func_ov065_02277af0(0x44);
        if (p == 0) ERRMEM("Out of memory.")
        p->unk_00 = 0;
        func_02127838(p->unk_04, c->unk_5c);
        p->unk_38 = 0;
        p->unk_3c = 0;
        p->unk_40 = 0;
        GETTOK(tok)
        if (func_0212a190(tok, "nr") != 0) ERR3()
        done = 0;
        do {
            GETTOK(tok)
            if (func_0212a190(tok, "nick") == 0) {
                void *t = func_ov065_02277ad8(p->unk_3c, (p->unk_38 + 1) * 4);
                if (t == 0) ERRMEM("Out of memory.")
                p->unk_3c = (char **)t;
                t = func_ov065_02277af0(0x1f);
                if (t == 0) ERRMEM("Out of memory.")
                p->unk_3c[p->unk_38] = (char *)t;
                func_ov065_02283728(p->unk_3c[p->unk_38], buf, 0x1f);
                p->unk_38++;
            } else if (func_0212a190(tok, "uniquenick") == 0) {
                if (p->unk_38 > 0) {
                    void *t = func_ov065_02277ad8(p->unk_40, p->unk_38 * 4);
                    if (t == 0) ERRMEM("Out of memory.")
                    p->unk_40 = (char **)t;
                    t = func_ov065_02277af0(0x15);
                    if (t == 0) ERRMEM("Out of memory.")
                    p->unk_40[p->unk_38 - 1] = (char *)t;
                    func_ov065_02283728(p->unk_40[p->unk_38 - 1], buf, 0x15);
                }
            } else if (func_0212a190(tok, "ndone") == 0) {
                done = 1;
            } else {
                ERR3()
            }
        } while (done == 0);
        r = func_ov065_0227e0e8(h, pr3.p, p, node, 3);
        if (r == 0) {
            goto done;
        }
        return r;
    } else if (c->unk_00 == 4) {
        pr4 = node->unk_0c;
        if (pr4.p.a == 0) {
            goto done;
        }
        p4 = (Unk_ov065_02281bf4_Res4 *)func_ov065_02277af0(0x10);
        if (p4 == 0) ERRMEM("Out of memory.")
        p4->unk_04 = c->unk_138;
        done = 0;
        p4->unk_00 = 0;
        p4->unk_08 = 0;
        p4->unk_0c = 0;
        do {
            GETTOK(tok)
            if (func_0212a190(tok, "psrdone") == 0) {
                done = 1;
            } else if (func_0212a190(tok, "psr") == 0) {
                Unk_ov065_02281bf4_Ent *e;
                s32 idx;
                Unk_ov065_02281bf4_Ent *base;
                p4->unk_08++;
                p4->unk_0c = (Unk_ov065_02281bf4_Ent *)func_ov065_02277ad8(p4->unk_0c, p4->unk_08 * 0x128);
                base = p4->unk_0c;
                if (base == 0) ERRMEM("Out of memory.")
                idx = p4->unk_08 - 1;
                e = &base[idx];
                func_0212899c(e, 0, 0x128);
                e->unk_24 = 1;
                base[idx].unk_00 = func_0212b770(buf);
                done2 = 0;
                do {
                    save1 = pos;
                    GETTOK(tok)
                    if (func_0212a190(tok, "status") == 0) {
                        func_ov065_02283728(e->unk_28, buf, 0x100);
                    } else if (func_0212a190(tok, "nick") == 0) {
                        func_ov065_02283728(e->unk_04, buf, 0x1f);
                    }
                    if (func_0212a190(tok, "statuscode") == 0) {
                        e->unk_24 = func_0212b770(buf);
                    } else if (func_0212a190(tok, "psr") == 0 || func_0212a190(tok, "psrdone") == 0) {
                        done2 = 1;
                        pos = save1;
                    }
                } while (done2 == 0);
            } else {
                ERR3()
            }
        } while (done == 0);
        r = func_ov065_0227e0e8(h, pr4.p, p4, node, 4);
        if (r == 0) {
            goto done;
        }
        return r;
    } else if (c->unk_00 == 5) {
        s32 a4;
        s32 a6;
        Unk_ov065_02281bf4_Res5 *p;
        pr5 = node->unk_0c;
        if (pr5.p.a == 0) {
            goto done;
        }
        GETTOK(tok)
        if (func_0212a190(tok, "cur") != 0) ERR3()
        a4 = func_0212b770(buf);
        if (a4 != 0) {
            ctx->unk_418 = a4;
            a6 = 0;
        } else {
            if (func_ov065_02283630(c->unk_08, "\\pid\\", buf, 0x200) == 0) ERR3()
            a6 = func_0212b770(buf);
        }
        p = (Unk_ov065_02281bf4_Res5 *)func_ov065_02277af0(8);
        if (p == 0) ERRMEM("Out of memory.")
        p->unk_00 = a4;
        p->unk_04 = a6;
        r = func_ov065_0227e0e8(h, pr5.p, p, node, 0);
        if (r == 0) {
            goto done;
        }
        return r;
    } else if (c->unk_00 == 6) {
        s32 a4;
        s32 a6;
        Unk_ov065_02281bf4_Res5 *p;
        pr6 = node->unk_0c;
        if (pr6.p.a == 0) {
            goto done;
        }
        GETTOK(tok)
        if (func_0212a190(tok, "nur") != 0) ERR3()
        a4 = func_0212b770(buf);
        if (a4 != 0) {
            ctx->unk_418 = a4;
        }
        if (func_ov065_02283630(c->unk_08, "\\pid\\", buf, 0x200) == 0) {
            if (a4 == 0) ERR3()
            a6 = 0;
        } else {
            a6 = func_0212b770(buf);
        }
        p = (Unk_ov065_02281bf4_Res5 *)func_ov065_02277af0(8);
        if (p == 0) ERRMEM("Out of memory.")
        p->unk_00 = a4;
        p->unk_04 = a6;
        r = func_ov065_0227e0e8(h, pr6.p, p, node, 0);
        if (r == 0) {
            goto done;
        }
        return r;
    } else if (c->unk_00 == 7) {
        pr7 = node->unk_0c;
        if (pr7.p.a == 0) {
            goto done;
        }
        p7 = (Unk_ov065_02281bf4_Res7 *)func_ov065_02277af0(0xc);
        if (p7 == 0) ERRMEM("Out of memory.")
        p7->unk_00 = 0;
        p7->unk_04 = 0;
        p7->unk_08 = 0;
        GETTOK(tok)
        if (func_0212a190(tok, "others") != 0) ERR3()
        done = 0;
        do {
            GETTOK(tok)
            if (func_0212a190(tok, "odone") == 0) {
                done = 1;
            } else if (func_0212a190(tok, "o") == 0) {
                Unk_ov065_02281bf4_Rec *e;
                s32 idx;
                Unk_ov065_02281bf4_Rec *base;
                void *t = func_ov065_02277ad8(p7->unk_08, (p7->unk_04 + 1) * 0xac);
                if (t == 0) ERRMEM("Out of memory.")
                p7->unk_08 = (Unk_ov065_02281bf4_Rec *)t;
                base = p7->unk_08;
                idx = p7->unk_04;
                e = &base[idx];
                func_0212899c(e, 0, 0xac);
                p7->unk_04++;
                base[idx].unk_00 = func_0212b770(buf);
                done2 = 0;
                do {
                    save1 = pos;
                    GETTOK(tok)
                    if (func_0212a190(tok, "nick") == 0) {
                        func_ov065_02283728(e->unk_04, buf, 0x1f);
                    } else if (func_0212a190(tok, "uniquenick") == 0) {
                        func_ov065_02283728(e->unk_23, buf, 0x15);
                    } else if (func_0212a190(tok, "first") == 0) {
                        func_ov065_02283728(e->unk_38, buf, 0x1f);
                    } else if (func_0212a190(tok, "last") == 0) {
                        func_ov065_02283728(e->unk_57, buf, 0x1f);
                    } else if (func_0212a190(tok, "email") == 0) {
                        func_ov065_02283728(e->unk_76, buf, 0x33);
                    } else if (func_0212a190(tok, "o") == 0 || func_0212a190(tok, "odone") == 0) {
                        done2 = 1;
                        pos = save1;
                    }
                } while (done2 == 0);
            } else {
                ERR3()
            }
        } while (done == 0);
        r = func_ov065_0227e0e8(h, pr7.p, p7, node, 8);
        if (r == 0) {
            goto done;
        }
        return r;
    } else if (c->unk_00 == 8) {
        Unk_ov065_02281bf4_Res8 *p;
        pr8 = node->unk_0c;
        if (pr8.p.a == 0) {
            goto done;
        }
        cnt = 0;
        p = (Unk_ov065_02281bf4_Res8 *)func_ov065_02277af0(0xc);
        if (p == 0) ERRMEM("Out of memory.")
        p->unk_00 = 0;
        p->unk_04 = 0;
        p->unk_08 = 0;
        GETTOK(tok)
        if (func_0212a190(tok, "us") != 0) ERR3()
        p->unk_04 = func_0212b770(buf);
        p->unk_08 = (char **)func_ov065_02277af0(p->unk_04 * 4);
        if (p->unk_08 == 0) ERRMEM("Out of memory.")
        done = 0;
        do {
            GETTOK(tok)
            if (func_0212a190(tok, "nick") == 0) {
                p->unk_08[cnt] = (char *)func_ov065_02277af0(0x15);
                if (p->unk_08[cnt] == 0) ERRMEM("Out of memory.")
                func_ov065_02283728(p->unk_08[cnt], buf, 0x15);
                cnt++;
            } else if (func_0212a190(tok, "usdone") == 0) {
                p->unk_04 = cnt;
                done = 1;
            } else {
                ERR3()
            }
        } while (done == 0);
        r = func_ov065_0227e0e8(h, pr8.p, p, node, 9);
        if (r != 0) {
            return r;
        }
    }
done:
    c->unk_140 = 1;
    retry = 0;
endchk:
    if (retry != 0) {
        func_ov065_0227913c(10);
    }
    if (retry != 0) {
        goto again;
    }
    return 0;
}

s32 func_ov065_02281b20(Ctx0228 **h) {
    Ctx0228 *c = *h;
    s32 n = 0;
    s32 i;
    Node0228 **arr;
    Node0228 *nd;
    s32 z = 0;
    if (c->unk_210 > 0) {
        arr = (Node0228 **)func_ov065_02277af0(c->unk_210 * 4);
        if (arr == 0) {
            func_ov065_02283460(h, "Out of memory.");
            return 1;
        }
        for (nd = c->unk_424; nd != 0; nd = nd->unk_20) {
            if (nd->unk_00 == 3 && nd->unk_14 != 5 && nd->unk_04->unk_13c == 0) {
                arr[n++] = nd;
                nd->unk_04->unk_13c = 1;
            }
        }
        for (i = 0; i < n; i++) {
            s32 r = func_ov065_02281bf4(h, arr[i]);
            if (r != 0) {
                arr[i]->unk_1c = r;
            }
        }
        for (i = 0; i < n; i++) {
            Conn0228 *s = arr[i]->unk_04;
            s->unk_13c = z;
            if (s->unk_140 != 0) {
                func_ov065_0228090c(h, arr[i]);
            }
        }
        func_ov065_02277ac8(arr);
    }
    return 0;
}

s32 func_ov065_02281b0c(s32 *p, s32 n) {
    return *p % n;
}

s32 func_ov065_02281b04(s32 *a, s32 *b) {
    return *a - *b;
}

void func_ov065_02281ab4(void *p) {
    Elem0228 *e = (Elem0228 *)p;
    if (e->unk_08 != 0) {
        func_ov065_02277ac8(e->unk_08->unk_08);
        e->unk_08->unk_08 = 0;
        func_ov065_02277ac8(e->unk_08->unk_0c);
        e->unk_08->unk_0c = 0;
        func_ov065_02277ac8(e->unk_08);
        e->unk_08 = 0;
    }
    func_ov065_0227f2a4(e);
    func_ov065_02277ac8(e->unk_10);
    e->unk_10 = 0;
    func_ov065_02277ac8(e->unk_18);
    e->unk_18 = 0;
}

s32 func_ov065_02281a5c(Ctx0228 **h) {
    Ctx0228 *c = *h;
    c->unk_430 = 0;
    c->unk_42c = 0;
    c->unk_428 = func_ov065_02278980(0x1c, 4, func_ov065_02281b0c, func_ov065_02281b04, func_ov065_02281ab4);
    if (c->unk_428 != 0) {
        return 1;
    }
    return 0;
}

}
}
