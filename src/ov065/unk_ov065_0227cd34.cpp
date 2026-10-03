// mwcc-flags: -O4,p -str reuse
#include "types.h"

namespace Nc {
// ov065_048: DWC HTTP/session context (0x0227c538..0x0227ce30)

struct Unk_ov065_0227c538_Pair {
    s32 unk_00;
    s32 unk_04;
};

struct Unk_ov065_0227c538_Sub {
    s32 unk_00;
    s32 unk_04;
    void *unk_08;
    void *unk_0c;
};

struct Unk_ov065_0227c538_Node {
    s32 unk_00;
    s32 unk_04;
    Unk_ov065_0227c538_Sub *unk_08;
    s32 unk_0c;
    s32 unk_10;
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
    u8 unk_110;
    u8 pad_111[0x1e];
    u8 unk_12f;
    u8 pad_130[0x14];
    u8 unk_144;
    u8 pad_145[0x53];
    s32 unk_198;
    s32 unk_19c;
    s32 unk_1a0;
    Unk_ov065_0227c538_Pair unk_1a4[6];
    s32 unk_1d4;
    s32 unk_1d8;
    char *unk_1dc;
    s32 unk_1e0;
    s32 unk_1e4;
    s32 unk_1e8;
    char *unk_1ec;
    s32 unk_1f0;
    char *unk_1f4;
    s32 unk_1f8;
    s32 unk_1fc;
    s32 unk_200;
    s32 unk_204;
    s32 unk_208;
    s32 unk_20c;
    s32 unk_210;
    s32 unk_214;
    u8 unk_218;
    u8 pad_219[0xff];
    u8 unk_318;
    u8 pad_319[0xff];
    s32 unk_418;
    s32 unk_41c;
    s32 unk_420;
    Unk_ov065_0227c538_Node *unk_424;
    void *unk_428;
    s32 unk_42c;
    s32 unk_430;
    s32 unk_434;
    s32 unk_438;
    s32 unk_43c;
    char *unk_440;
    s32 unk_444;
    s32 unk_448;
    s32 unk_44c;
    char *unk_450;
    s32 unk_454;
    s32 unk_458;
    s32 unk_45c;
    char *unk_460;
    s32 unk_464;
    s32 unk_468;
    s32 unk_46c;
    s32 unk_470;
    u8 pad_474[0x1c];
};

typedef Unk_ov065_0227c538_Ctx Ctx0227;
extern "C" {
extern s32 data_ov065_02290fa0;

struct Unk_ov065_0227c564_Z {
    s32 x;
    s32 y;
};

typedef s32 (*Unk_ov065_0227c564_Fn)(Ctx0227 **, void *, s32);

void func_ov065_0227e1c8(Ctx0227 **, s32);
void func_ov065_02283460(Ctx0227 **, const char *);
s32 func_ov065_0227ee64(Ctx0227 **, const char *, const char *, const char *, const char *, const char *,
                        const char *, s32, s32, s32, s32, Unk_ov065_0227c564_Fn, s32);
s32 func_ov065_0227e3d0(Ctx0227 **);
void func_ov065_0227913c(s32);
s32 func_ov065_022808dc(Ctx0227 **, Unk_ov065_0227c538_Node **, s32);
s32 func_ov065_0227df0c(Ctx0227 **, s32);
s32 func_ov065_02280f5c(Ctx0227 **);
s32 func_ov065_02281b20(Ctx0227 **);
void func_ov065_02280a2c(Ctx0227 **, Unk_ov065_0227c538_Node *);
void func_ov065_0228090c(Ctx0227 **, Unk_ov065_0227c538_Node *);
void func_ov065_0227fef0(Ctx0227 **, char **);
s32 func_ov065_0227da7c(Ctx0227 **, s32, char **, s32 *, s32, const char *);
s32 func_ov065_0227db18(Ctx0227 **, s32, char **, s32 *, s32 *, const char *);
void func_ov065_02283470(Ctx0227 **, s32, const char *);
void func_ov065_0227e160(Ctx0227 **, s32, s32);
void func_ov065_02283720(Ctx0227 **, const char *, ...);
void *func_ov065_02277ad8(void *, s32);
s32 func_ov065_02283684(Ctx0227 **, char *, s32);
s32 func_ov065_0227d040(Ctx0227 **, char *);
s32 func_ov065_022808b4(Ctx0227 **);
s32 func_ov065_02280854(Ctx0227 **, Unk_ov065_0227c538_Node *, char *);
void func_ov065_022817c8(Ctx0227 **, s32 (*)(Ctx0227 **, Unk_ov065_0227c538_Node *, s32), s32);
s32 func_ov065_022818bc(Ctx0227 **, s32, Unk_ov065_0227c538_Node **);
void func_ov065_0227de10(Ctx0227 **, char **, const char *);
void func_ov065_0227dde8(Ctx0227 **, char **, s32);
s32 func_ov065_0228176c(Unk_ov065_0227c538_Node *);
void func_ov065_02281880(Ctx0227 **, Unk_ov065_0227c538_Node *);
s32 func_ov065_02281a5c(Ctx0227 **);
void func_ov065_02279138();
void func_ov065_02279144();
void func_ov065_02277ac8(void *);
void *func_ov065_02277af0(s32);
void func_ov065_022788f0(void *);

char *func_02129f1c(const char *, const char *);
void func_02128a00(void *, const void *, s32);
void func_021289b4(void *, void *, u32);
s32 func_0212b770(const char *);
s32 strncmp(const char *, const char *, u32);
void func_0212899c(void *, s32, u32);
void func_02128c60();

s32 func_ov065_0227ca28(Ctx0227 **h);
s32 func_ov065_0227cbdc(Ctx0227 **h);
s32 func_ov065_0227cc1c(Ctx0227 **h, s32 a, s32 b);
s32 func_ov065_0227c6f0(Ctx0227 **h, s32 a);
s32 func_ov065_0227c7dc(Ctx0227 **h);
s32 func_ov065_0227cbcc(Ctx0227 **h, Unk_ov065_0227c538_Node *n, s32 m);
s32 func_ov065_0227ce30(Ctx0227 **h, Unk_ov065_0227c538_Node *n, s32 m);
}
}

namespace Nd {
// ov065_049: DWC HTTP request setup (0x0227ce44..0x0227d8e0)

struct Unk_ov065_0227c538_Pair {
    s32 unk_00;
    s32 unk_04;
};

struct Unk_ov065_0227c538_Sub {
    s32 unk_00;
    s32 unk_04;
    char *unk_08;
    char *unk_0c;
    s32 unk_10;
    s32 unk_14;
};

struct Unk_ov065_0227c538_Node {
    s32 unk_00;
    s32 unk_04;
    Unk_ov065_0227c538_Sub *unk_08;
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
    u8 unk_110;
    u8 pad_111[0x1e];
    u8 unk_12f;
    u8 pad_130[0x14];
    u8 unk_144;
    u8 pad_145[0x53];
    s32 unk_198;
    s32 unk_19c;
    s32 unk_1a0;
    Unk_ov065_0227c538_Pair unk_1a4[6];
    s32 unk_1d4;
    s32 unk_1d8;
    char *unk_1dc;
    s32 unk_1e0;
    s32 unk_1e4;
    s32 unk_1e8;
    char *unk_1ec;
    s32 unk_1f0;
    char *unk_1f4;
    s32 unk_1f8;
    s32 unk_1fc;
    s32 unk_200;
    s32 unk_204;
    s32 unk_208;
    s32 unk_20c;
    s32 unk_210;
    s32 unk_214;
    u8 unk_218;
    u8 pad_219[0xff];
    u8 unk_318;
    u8 pad_319[0xff];
    s32 unk_418;
    s32 unk_41c;
    s32 unk_420;
    Unk_ov065_0227c538_Node *unk_424;
    void *unk_428;
    s32 unk_42c;
    s32 unk_430;
    s32 unk_434;
    s32 unk_438;
    s32 unk_43c;
    char *unk_440;
    s32 unk_444;
    s32 unk_448;
    s32 unk_44c;
    char *unk_450;
    s32 unk_454;
    s32 unk_458;
    s32 unk_45c;
    char *unk_460;
    s32 unk_464;
    s32 unk_468;
    s32 unk_46c;
    s32 unk_470;
    u8 pad_474[0x1c];
};

typedef Unk_ov065_0227c538_Ctx Ctx0227;
extern "C" {
s32 func_ov065_022818bc(Ctx0227 **, s32, Unk_ov065_0227c538_Node **);
void func_ov065_02283460(Ctx0227 **, const char *);
s32 func_ov065_0227d8e0(Ctx0227 **, Unk_ov065_0227c538_Node *);
void func_ov065_02277ac8(void *);
s32 func_ov065_0228176c(Unk_ov065_0227c538_Node *);
void func_ov065_02281880(Ctx0227 **, Unk_ov065_0227c538_Node *);
s32 func_ov065_02280f38(Ctx0227 **);
s32 func_ov065_02280eb8(Ctx0227 **, s32, s32);
s32 func_ov065_02280e7c(Ctx0227 **, s32);
s32 func_ov065_02280d70(Ctx0227 **, s32);
s32 func_ov065_02280cb4(Ctx0227 **, s32, s32, s32);
void func_ov065_02283728(char *, const char *, s32);
void func_ov065_0227de10(Ctx0227 **, char **, const char *);
void func_ov065_0227dde8(Ctx0227 **, char **, s32);
s32 func_ov065_02283630(const char *, const char *, char *, s32);
void func_ov065_02283470(Ctx0227 **, s32, const char *);
void func_ov065_0227e160(Ctx0227 **, s32, s32);
s32 func_ov065_02278bc0(s32);
void *func_ov065_02277af0(s32);
char *func_ov065_02279100(const char *);
s32 func_ov065_0227e0e8(Ctx0227 **, Unk_ov065_0227c538_Pair, void *, s32, s32);
Unk_ov065_0227c538_Node *func_ov065_022818f4(Ctx0227 **, s32);

s32 func_0212b770(const char *);
s32 STD_GetStringLength(const char *);
char *func_02127838(char *, const char *);
char *func_02129f1c(const char *, const char *);

s32 func_ov065_0227cf78(Ctx0227 **h, s32 a, s32 b, const char *s);
s32 func_ov065_0227ced4(Ctx0227 **h, s32 id, s32 b, s32 t);
}
}

namespace Nf {
// ov065_050: DWC HTTP socket send/recv + growable string buffer + callback list (0x0227d8e0..0x0227e1c8)

struct Unk_ov065_0227d8e0_Buf {
    char *unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0c;
};

struct Unk_ov065_0227d8e0_Pair {
    s32 unk_00;
    s32 unk_04;
};

struct Unk_ov065_0227e0e8_Wrap {
    Unk_ov065_0227d8e0_Pair unk_00;
};

struct Unk_ov065_0227d8e0_Node {
    void (*unk_00)(void *, void *, s32);
    s32 unk_04;
    void *unk_08;
    s32 unk_0c;
    void *unk_10;
    Unk_ov065_0227d8e0_Node *unk_14;
};

struct Unk_ov065_0227d8e0_Ctx {
    u8 pad_000[0x198];
    s32 unk_198;
    s32 unk_19c;
    s32 unk_1a0;
    Unk_ov065_0227e0e8_Wrap unk_1a4[6];
    s32 unk_1d4;
    s32 unk_1d8;
    char *unk_1dc;
    u8 pad_1e0[0x1ec - 0x1e0];
    char *unk_1ec;
    u8 pad_1f0[4];
    Unk_ov065_0227d8e0_Buf unk_1f4;
    s32 unk_204;
    u8 pad_208[0x418 - 0x208];
    s32 unk_418;
    s32 unk_41c;
    u8 pad_420[4];
    void *unk_424;
    u8 pad_428[0x434 - 0x428];
    void *unk_434;
    Unk_ov065_0227d8e0_Node *unk_438;
    Unk_ov065_0227d8e0_Node *unk_43c;
    void *unk_440;
    u8 pad_444[0x450 - 0x444];
    void *unk_450;
};

struct Unk_ov065_0227d8e0_Handle {
    Unk_ov065_0227d8e0_Ctx *unk_00;
};

struct Unk_ov065_0227d8e0_Arg {
    u8 pad_00[0x10];
    char *unk_10;
};

struct Unk_ov065_0227dc48_Conn {
    u8 pad_00[8];
    s32 unk_08;
    u8 pad_0c[0x28 - 0xc];
    Unk_ov065_0227d8e0_Buf unk_28;
    s32 unk_38;
};

struct Unk_ov065_0227dfd8_D3 {
    u8 pad_00[0x38];
    s32 unk_38;
    s32 *unk_3c;
    s32 *unk_40;
};

struct Unk_ov065_0227dfd8_D4 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0c;
    s32 unk_10;
};

struct Unk_ov065_0227dfd8_D9 {
    s32 unk_00;
    s32 unk_04;
    s32 *unk_08;
};

struct Unk_ov065_0227e0e8_G {
    u8 pad_00[0x18];
    void *unk_18;
};

struct Unk_ov065_0227e160_Cb {
    s32 unk_00;
    s32 unk_04;
    void *unk_08;
    s32 unk_0c;
};

typedef Unk_ov065_0227d8e0_Handle Unk_H;
typedef Unk_ov065_0227d8e0_Ctx Unk_C;
typedef Unk_ov065_0227d8e0_Buf Unk_B;
typedef Unk_ov065_0227d8e0_Node Unk_N;
extern "C" {
char *func_0212a120(const char *, s32);
s32 strncmp(const char *, const char *, s32);
s32 func_0212b770(const char *);
u32 STD_GetStringLength(const char *);
void func_021289b4(void *, void *, s32);
void func_02128a00(void *, const void *, s32);
s32 OS_SPrintf(char *, const char *, ...);
s32 func_ov065_02283630(const char *, const char *, char *, s32);
void func_ov065_02283460(void *, const char *);
void func_ov065_02283470(void *, s32, const char *);
void func_ov065_02283720(void *, const char *, ...);
void *func_ov065_02277ad8(void *, s32);
void *func_ov065_02277af0(s32);
s32 func_ov065_02277ac8(void *);
s32 func_ov065_02278ce0(s32, void *, s32, s32);
s32 func_ov065_02278ca0(s32, void *, s32, s32);
s32 func_ov065_02278be8(s32);
s32 func_ov065_02278684(s32);
s32 func_ov065_02278da4(s32, s32);
s32 func_ov065_02278dbc(s32);
s32 func_ov065_0228090c(void *, void *);
s32 func_ov065_022810fc(void *, void *);
s32 func_ov065_022817c8(void *, s32, s32);
s32 func_ov065_0227e350(void);

s32 func_ov065_0227dd38(void *, s32, char *, s32, s32 *, s32 *, const char *);
s32 func_ov065_0227dde8(Unk_H *, Unk_B *, s32);
s32 func_ov065_0227de10(Unk_H *, Unk_B *, const char *);
s32 func_ov065_0227de30(Unk_H *, Unk_B *, const char *, s32);
s32 func_ov065_0227deb4(Unk_H *, Unk_B *, char);
s32 func_ov065_0227dc48(Unk_H *, Unk_ov065_0227dc48_Conn *, const char *, s32);
s32 func_ov065_0227da7c(Unk_H *, s32, Unk_B *, s32 *, s32, const char *);
s32 func_ov065_0227dfd8(Unk_H *, Unk_N *);
s32 func_ov065_0227e0e8(Unk_H *, Unk_ov065_0227e0e8_Wrap, Unk_N *, Unk_ov065_0227e0e8_G *, s32);
void func_ov065_0227e160(Unk_H *, s32, s32);
}
}

namespace Nf {
extern "C" {
s32 func_ov065_0227d8e0(Unk_H *h, Unk_ov065_0227d8e0_Arg *a) {
    Unk_C *c = h->unk_00;
    func_ov065_0227de10(h, &c->unk_1f4, "\\authadd\\");
    func_ov065_0227de10(h, &c->unk_1f4, "\\sesskey\\");
    func_ov065_0227dde8(h, &c->unk_1f4, c->unk_198);
    func_ov065_0227de10(h, &c->unk_1f4, "\\fromprofileid\\");
    func_ov065_0227dde8(h, &c->unk_1f4, *(s32 *)a);
    func_ov065_0227de10(h, &c->unk_1f4, "\\sig\\");
    func_ov065_0227de10(h, &c->unk_1f4, a->unk_10);
    func_ov065_0227de10(h, &c->unk_1f4, "\\final\\");
    return 0;
}
}
}

namespace Nd {
struct Unk_ov065_0227d040_PW {
    Unk_ov065_0227c538_Pair p;
};

#define SWAP32(x) ((((x) << 24) & 0xff000000) | ((((x) << 8) & 0xff0000) | ((((x) >> 24) & 0xff) | (((x) >> 8) & 0xff00))))

static inline u16 Swap16(u16 x) {
    return (u16)(((x >> 8) & 0xff) | ((x << 8) & 0xff00));
}

#define ERR3() \
    do { \
        func_ov065_02283470(h, 1, "Unexpected data was received from the server."); \
        func_ov065_0227e160(h, 3, 1); \
        return 3; \
    } while (0)

#define ERR1() \
    do { \
        func_ov065_02283460(h, "Out of memory."); \
        return 1; \
    } while (0)
extern "C" {
s32 func_ov065_0227d040(Ctx0227 **h, const char *s) {
    Ctx0227 *c = *h;
    s32 code;
    s32 v;
    s32 w;
    Unk_ov065_0227d040_PW p;
    Unk_ov065_0227d040_PW p4;
    Unk_ov065_0227d040_PW p3;
    Unk_ov065_0227d040_PW p2;
    char tmp[0x10];
    char buf[0x1000];
    char buf3[0x100];

    if (func_ov065_02283630(s, "\\bm\\", buf, 0x1000) == 0) {
        ERR3();
    }
    code = func_0212b770(buf);
    if (func_ov065_02283630(s, "\\f\\", buf, 0x1000) == 0) {
        ERR3();
    }
    v = func_0212b770(buf);
    if (func_ov065_02283630(s, "\\date\\", buf, 0x1000) != 0) {
        w = func_0212b770(buf);
    } else {
        w = func_ov065_02278bc0(0);
    }
    switch (code) {
    case 1: {
        Unk_ov065_0227c538_Sub *r5;
        p = *(Unk_ov065_0227d040_PW *)&c->unk_1a4[3];
        if (p.p.unk_00 == 0) {
            break;
        }
        r5 = (Unk_ov065_0227c538_Sub *)func_ov065_02277af0(0xc);
        if (r5 == NULL) {
            ERR1();
        }
        if (func_ov065_02283630(s, "\\msg\\", buf, 0x1000) == 0) {
            ERR3();
        }
        r5->unk_08 = (char *)func_ov065_02277af0(STD_GetStringLength(buf) + 1);
        if (r5->unk_08 == NULL) {
            ERR1();
        }
        func_02127838(r5->unk_08, buf);
        r5->unk_00 = v;
        r5->unk_04 = w;
        {
            s32 r = func_ov065_0227e0e8(h, p.p, r5, 0, 2);
            if (r != 0) {
                return r;
            }
        }
        break;
    }
    case 2: {
        Unk_ov065_0227c538_Node *n;
        char *t;
        n = func_ov065_022818f4(h, v);
        if (n == NULL) {
            ERR1();
        }
        if (func_ov065_02283630(s, "\\msg\\", buf, 0x1000) == 0) {
            ERR3();
        }
        t = func_02129f1c(buf, "|signed|");
        if (t == NULL) {
            ERR3();
        }
        *t = 0;
        if (STD_GetStringLength(t + 8) != 0x20) {
            ERR3();
        }
        func_ov065_02277ac8(n->unk_10);
        n->unk_10 = 0;
        n->unk_10 = func_ov065_02279100(t + 8);
        n->unk_14 = n->unk_14 + 1;
        p2 = *(Unk_ov065_0227d040_PW *)&c->unk_1a4[1];
        if (p2.p.unk_00 == 0) {
            break;
        }
        {
            Unk_ov065_0227c538_Sub *r5 = (Unk_ov065_0227c538_Sub *)func_ov065_02277af0(0x40c);
            if (r5 == NULL) {
                ERR1();
            }
            func_ov065_02283728((char *)r5 + 8, buf, 0x401);
            r5->unk_00 = v;
            r5->unk_04 = w;
            {
                s32 r = func_ov065_0227e0e8(h, p2.p, r5, 0, 6);
                if (r != 0) {
                    return r;
                }
            }
        }
        break;
    }
    case 100: {
        Unk_ov065_0227c538_Node *n;
        Unk_ov065_0227c538_Sub *r5;
        n = func_ov065_022818f4(h, v);
        if (n == NULL) {
            ERR1();
        }
        if (n->unk_08 == NULL) {
            u8 *q;
            u8 *k;
            n->unk_08 = (Unk_ov065_0227c538_Sub *)func_ov065_02277af0(0x18);
            if (n->unk_08 == NULL) {
                ERR1();
            }
            q = (u8 *)n->unk_08;
            k = (u8 *)0x18;
            do {
                *q++ = 0;
                k--;
            } while (k != NULL);
            {
                s32 *cnt = &c->unk_430;
                s32 o = *cnt;
                *cnt = o + 1;
                n->unk_08->unk_00 = o;
            }
        }
        r5 = n->unk_08;
        if (func_ov065_02283630(s, "\\msg\\", buf, 0x1000) == 0) {
            ERR3();
        }
        if (func_ov065_02283630(buf, "|s|", tmp, 0x10) == 0) {
            ERR3();
        }
        r5->unk_04 = func_0212b770(tmp);
        func_ov065_02277ac8(r5->unk_08);
        r5->unk_08 = NULL;
        if (func_ov065_02283630(buf, "|ss|", buf3, 0x100) == 0) {
            buf3[0] = 0;
        }
        r5->unk_08 = func_ov065_02279100(buf3);
        if (r5->unk_08 == NULL) {
            ERR1();
        }
        func_ov065_02277ac8(r5->unk_0c);
        r5->unk_0c = NULL;
        if (func_ov065_02283630(buf, "|ls|", buf3, 0x100) == 0) {
            buf3[0] = 0;
        }
        r5->unk_0c = func_ov065_02279100(buf3);
        if (r5->unk_0c == NULL) {
            ERR1();
        }
        if (func_ov065_02283630(buf, "|ip|", tmp, 0x10) == 0) {
            r5->unk_10 = 0;
        } else {
            r5->unk_10 = SWAP32((u32)func_0212b770(tmp));
        }
        if (func_ov065_02283630(buf, "|p|", tmp, 0x10) == 0) {
            r5->unk_14 = 0;
        } else {
            r5->unk_14 = Swap16(func_0212b770(tmp));
        }
        p3 = *(Unk_ov065_0227d040_PW *)&c->unk_1a4[2];
        if (p3.p.unk_00 == 0) {
            break;
        }
        {
            Unk_ov065_0227c538_Sub *m = (Unk_ov065_0227c538_Sub *)func_ov065_02277af0(0xc);
            if (m == NULL) {
                ERR1();
            }
            m->unk_00 = v;
            m->unk_08 = (char *)(s32)r5->unk_00;
            m->unk_04 = w;
            {
                s32 r = func_ov065_0227e0e8(h, p3.p, m, 0, 5);
                if (r != 0) {
                    return r;
                }
            }
        }
        break;
    }
    case 101: {
        char *t;
        char *t2;
        s32 q;
        Unk_ov065_0227c538_Sub *r5;
        if (func_ov065_02283630(s, "\\msg\\", buf, 0x1000) == 0) {
            ERR3();
        }
        t = func_02129f1c(buf, "|p|");
        if (t == NULL) {
            ERR3();
        }
        if (t[3] == 0) {
            ERR3();
        }
        q = func_0212b770(t + 3);
        t2 = func_02129f1c(buf, "|l|");
        if (t2 != NULL) {
            func_ov065_02283728(buf3, t2 + 3, 0x100);
        } else {
            buf3[0] = 0;
        }
        p4 = *(Unk_ov065_0227d040_PW *)&c->unk_1a4[4];
        if (p4.p.unk_00 == 0) {
            break;
        }
        r5 = (Unk_ov065_0227c538_Sub *)func_ov065_02277af0(0x108);
        if (r5 == NULL) {
            ERR1();
        }
        r5->unk_00 = v;
        r5->unk_04 = q;
        func_02127838((char *)r5 + 8, buf3);
        {
            s32 r = func_ov065_0227e0e8(h, p4.p, r5, 0, 0);
            if (r != 0) {
                return r;
            }
        }
        break;
    }
    case 102:
        if (func_ov065_02283630(s, "\\msg\\", buf, 0x1000) == 0) {
            ERR3();
        }
        func_ov065_0227ced4(h, v, 0x67, (s32)"1");
        break;
    }
    return 0;
}
}
}

namespace Nd {
extern "C" {
s32 func_ov065_0227cf78(Ctx0227 **h, s32 a, s32 b, const char *s) {
    Ctx0227 *c = *h;
    char buf[0xdad];
    func_ov065_02283728(buf, s, 0xdad);
    func_ov065_0227de10(h, &c->unk_1f4, "\\bm\\");
    func_ov065_0227dde8(h, &c->unk_1f4, b);
    func_ov065_0227de10(h, &c->unk_1f4, "\\sesskey\\");
    func_ov065_0227dde8(h, &c->unk_1f4, c->unk_198);
    func_ov065_0227de10(h, &c->unk_1f4, "\\t\\");
    func_ov065_0227dde8(h, &c->unk_1f4, a);
    func_ov065_0227de10(h, &c->unk_1f4, "\\msg\\");
    func_ov065_0227de10(h, &c->unk_1f4, buf);
    func_ov065_0227de10(h, &c->unk_1f4, "\\final\\");
    return 0;
}
}
}

namespace Nd {
extern "C" {
s32 func_ov065_0227ced4(Ctx0227 **h, s32 id, s32 b, s32 t) {
    Unk_ov065_0227c538_Node *n;
    s32 r6;
    r6 = func_ov065_02280f38(h);
    if (r6 == 0) {
        if (!(func_ov065_022818bc(h, id, &n) != 0 && n->unk_08 != NULL && n->unk_08->unk_14 != 0)) {
            return func_ov065_0227cf78(h, id, b, (const char *)t);
        }
        r6 = func_ov065_02280eb8(h, id, 1);
        if (r6 == 0) {
            return 1;
        }
        if (n->unk_18 == 0) {
            s32 q = func_ov065_02280e7c(h, r6);
            if (q != 0) {
                return q;
            }
        } else {
            s32 q = func_ov065_02280d70(h, r6);
            if (q != 0) {
                return q;
            }
        }
    }
    {
        s32 r = func_ov065_02280cb4(h, r6, b, t);
        if (r != 0) {
            return r;
        }
        return 0;
    }
}
}
}

namespace Nd {
extern "C" {
s32 func_ov065_0227ce44(Ctx0227 **h, s32 id) {
    Ctx0227 *c = *h;
    Unk_ov065_0227c538_Node *n;
    s32 r;
    if (func_ov065_022818bc(h, id, &n) == 0) {
        func_ov065_02283460(h, "Invalid profile.");
        return 2;
    }
    if (n->unk_10 == 0) {
        func_ov065_02283460(h, "Invalid profile.");
        return 2;
    }
    r = func_ov065_0227d8e0(h, n);
    if (r != 0) {
        return r;
    }
    n->unk_14 = n->unk_14 - 1;
    if (c->unk_100 == 0) {
        if (n->unk_14 <= 0) {
            func_ov065_02277ac8(n->unk_10);
            n->unk_10 = 0;
            if (func_ov065_0228176c(n) != 0) {
                func_ov065_02281880(h, n);
            }
        }
    }
    return 0;
}
}
}

namespace Nc {
extern "C" {
s32 func_ov065_0227ce30(Ctx0227 **h, Unk_ov065_0227c538_Node *n, s32 m) {
    Unk_ov065_0227c538_Sub *s = n->unk_08;
    if (s != NULL) {
        if (s->unk_00 > m) {
            s->unk_00 = s->unk_00 - 1;
        }
    }
    return 1;
}
}
}

namespace Nc {
extern "C" {
s32 func_ov065_0227cd34(Ctx0227 **h, s32 x) {
    Ctx0227 *c = *h;
    Unk_ov065_0227c538_Node *n;
    if (func_ov065_022818bc(h, x, &n) == 0) {
        func_ov065_02283460(h, "Invalid profile.");
        return 2;
    }
    func_ov065_0227de10(h, &c->unk_1f4, "\\delbuddy\\");
    func_ov065_0227de10(h, &c->unk_1f4, "\\sesskey\\");
    func_ov065_0227dde8(h, &c->unk_1f4, c->unk_198);
    func_ov065_0227de10(h, &c->unk_1f4, "\\delprofileid\\");
    func_ov065_0227dde8(h, &c->unk_1f4, n->unk_00);
    func_ov065_0227de10(h, &c->unk_1f4, "\\final\\");
    if (n->unk_08 != NULL) {
        s32 r6 = n->unk_08->unk_00;
        func_ov065_02277ac8(n->unk_08->unk_08);
        n->unk_08->unk_08 = 0;
        func_ov065_02277ac8(n->unk_08->unk_0c);
        n->unk_08->unk_0c = 0;
        func_ov065_02277ac8(n->unk_08);
        n->unk_08 = 0;
        if (func_ov065_0228176c(n) != 0) {
            func_ov065_02281880(h, n);
        }
        c->unk_430 = c->unk_430 - 1;
        func_ov065_022817c8(h, func_ov065_0227ce30, r6);
    }
    return 0;
}
}
}
