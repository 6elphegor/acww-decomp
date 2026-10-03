// mwcc-flags: -O4,p -str reuse
#include "types.h"

// ov065 TU44: GP gpiConnect.c (0x0227e160..0x0227f2a4)

extern "C" {
char data_ov065_0228d1a4[0x40] = "gpcm.gs.nintendowifi.net";
}

namespace Na {
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

extern char data_ov065_0228cfdc[];
extern char data_ov065_0228cff8[];
extern char data_ov065_0228d094[];
extern char data_ov065_0228d0a0[];
extern char data_ov065_0228d0b0[];
extern char data_ov065_0228d0b8[];
extern char data_ov065_0228d0c0[];
extern char data_ov065_0228d0c4[];
extern char data_ov065_0228d0cc[];
extern char data_ov065_0228d0dc[];
extern char data_ov065_0228d108[];
extern char data_ov065_0228d12c[];
extern char data_ov065_0228d140[];
extern char data_ov065_0228d144[];
extern char data_ov065_0228d148[];
extern char data_ov065_0228d170[];
extern char data_ov065_0228d194[];

extern "C" {
char *func_0212a120(const char *, s32);
s32 strncmp(const char *, const char *, s32);
s32 func_0212b770(const char *);
u32 STD_GetStringLength(const char *);
void memmove(void *, void *, s32);
void memcpy(void *, const void *, s32);
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

namespace Nb {
extern "C" char data_ov065_02290fe4[];
// ov065_051: DWC/GameSpy-like response parser (0x0227e350..0x0227eb60)

struct Unk_ov065_0227e350_Pair {
    s32 unk_00;
    s32 unk_04;
};

struct Unk_ov065_0227e350_Pair2 {
    Unk_ov065_0227e350_Pair p;
};

struct Unk_ov065_0227e350_Sub {
    s32 unk_00;
    s32 unk_04;
    void *unk_08;
    void *unk_0c;
};

struct Unk_ov065_0227e350_Node {
    s32 unk_00;
    void *unk_04;
    Unk_ov065_0227e350_Sub *unk_08;
    Unk_ov065_0227e350_Pair2 unk_0c;
    s32 unk_14;
    s32 unk_18;
};

struct Unk_ov065_0227e350_Ctx {
    u8 unk_000;
    u8 pad_001[0xff];
    s32 unk_100;
    s32 unk_104;
    s32 unk_108;
    s32 unk_10c;
    char unk_110[0x1f];
    char unk_12f[0x15];
    char unk_144[0x33];
    char unk_177[0x21];
    s32 unk_198;
    s32 unk_19c;
    s32 unk_1a0;
    u8 pad_1a4[0x30];
    s32 unk_1d4;
    s32 unk_1d8;
    u8 pad_1dc[0x18];
    char unk_1f4[0x14];
    s32 unk_208;
    u8 pad_20c[0x20c];
    s32 unk_418;
    u8 pad_41c[0x50];
    s32 unk_46c;
    s32 unk_470;
    char unk_474[0x1c];
};

struct Unk_ov065_0227e438_Req {
    u8 pad_00[0x80];
    char unk_80[0x21];
    char unk_a1[0x21];
    char unk_c2[0x100];
    char unk_1c2[0x100];
    char unk_2c2[0x42];
    s32 unk_304;
};

typedef Unk_ov065_0227e350_Ctx Ctx0227;
typedef Unk_ov065_0227e350_Node Node0227;
typedef Unk_ov065_0227e438_Req Req0227;


extern "C" {

s32 strncmp(const char *, const char *, s32);
char *func_02129f1c(const char *, const char *);
s32 func_0212b770(const char *);
s32 STD_GetStringLength(const char *);
s32 OS_SPrintf(char *, const char *, ...);
s32 memcmp(const void *, const void *, s32);
void *func_0212899c(void *, s32, s32);
void func_ov065_02277ac8(void *);
void *func_ov065_02277af0(s32);
void func_ov065_02278b44(u32);
s32 func_ov065_02278b24(s32, s32);
void func_ov065_0227899c(char *, s32, char *);
void func_ov065_022789fc(char *, char *, s32, s32);
s32 func_ov065_0227de10(Ctx0227 **, char *, const char *);
s32 func_ov065_0227dde8(Ctx0227 **, char *, s32);
void func_ov065_0227e160(Ctx0227 **, s32, s32);
s32 func_ov065_0227e0e8(Ctx0227 **, Unk_ov065_0227e350_Pair, void *, Node0227 *, s32);
void func_ov065_0227f270(void *, s32);
void func_ov065_02281814(Ctx0227 **, char *, char *, u32 **);
void func_ov065_02281880(Ctx0227 **, Node0227 *);
void func_ov065_02281894(Ctx0227 **);
u32 *func_ov065_022818f4(Ctx0227 **, s32);
void func_ov065_0228090c(Ctx0227 **, Node0227 *);
void func_ov065_02283460(Ctx0227 **, const char *);
void func_ov065_02283470(Ctx0227 **, s32, const void *);
s32 func_ov065_02283590(Ctx0227 **, s32, s32 *);
s32 func_ov065_02283630(char *, const char *, char *, s32);
s32 func_ov065_02283684(Ctx0227 **, char *, s32);
void func_ov065_02283728(void *, char *, s32);
s32 func_ov065_0227e964(Ctx0227 **, Req0227 *);
s32 func_ov065_0227eb60(Ctx0227 **, Req0227 *);






}
}

namespace Nc {
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
s32 func_ov065_0227908c(s32, s32);
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
u32 rand(void);
s32 func_0212b770(const char *);
s32 STD_GetStringLength(const char *);
char *func_02127838(char *, const char *);

s32 func_ov065_0227f4c8(Ctx0227 **, s32, s32);
s32 func_ov065_0227f00c(Ctx0227 **, Node0227 *);

#define GP_FAIL(str) \
    { \
        func_ov065_02283470(h, 5, str); \
        func_ov065_0227e160(h, 3, 1); \
        return 3; \
    }








#define CK_NONEMPTY \
    if (*val == 0) { \
        func_ov065_02283460(h, data_ov065_0228d630); \
        return 2; \
    }


}
}

namespace Nc {
extern "C" {
void func_ov065_0227f270(char *buf, s32 n) {
    s32 i;
    for (i = 0; i < n; i++) {
        buf[i] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789"[rand() % 0x3e];
    }
    buf[i] = 0;
}
}
}

namespace Nc {
extern "C" {
s32 func_ov065_0227f00c(Ctx0227 **h, Node0227 *n) {
    Ctx0227 *ctx = *h;
    Unk_ov065_0227f00c_Sa sa;
    s32 len;
    Unk_ov065_0227f00c_Host *host;
    s32 e;
    u32 *w;
    if (ctx->unk_10c == 0) {
        ctx->unk_204 = func_ov065_02278dd4(2, 1, 0);
        if (-1 == ctx->unk_204) GP_FAIL("There was an error creating a socket.")
        if (func_ov065_0227908c(ctx->unk_204, 0) == 0) GP_FAIL("There was an error making a socket non-blocking.")
        w = (u32 *)&sa;
        w[0] = 0;
        w[1] = 0;
        sa.unk_1 = 2;
        if (func_ov065_02278d64(ctx->unk_204, w, 8) == -1) GP_FAIL("There was an error binding a socket.")
        if (func_ov065_02278d1c(ctx->unk_204, 5) == -1) GP_FAIL("There was an error listening on a socket.")
        len = 8;
        if (func_ov065_02278c14(ctx->unk_204, &sa, &len) == -1) GP_FAIL("There was an error getting a socket's addres.")
        ctx->unk_208 = sa.unk_2;
    } else {
        ctx->unk_204 = -1;
        ctx->unk_208 = 0;
    }
    {
        ctx->unk_1d4 = func_ov065_02278dd4(2, 1, 0);
        if (-1 == ctx->unk_1d4) GP_FAIL("There was an error creating a socket.")
    }
    if (func_ov065_0227908c(ctx->unk_1d4, 0) == 0) GP_FAIL("There was an error making a socket non-blocking.")
    host = func_ov065_02261408(data_ov065_0228d1a4);
    if (host == 0) GP_FAIL("Could not resolve connection mananger host name.")
    w = (u32 *)&sa;
    w[0] = 0;
    w[1] = 0;
    sa.unk_1 = 2;
    sa.unk_4 = **host->unk_0c;
    sa.unk_2 = 0xcc74;
    if (func_ov065_02278d34(ctx->unk_1d4, &sa, 8) == -1) {
        e = func_ov065_02278be8(ctx->unk_1d4);
        if (e != -6 && e != -0x1a && e != -0x4c) GP_FAIL("There was an error connecting a socket.")
    }
    n->unk_14 = 1;
    ctx->unk_1d8 = 1;
    return 0;
}
}
}

namespace Nc {
extern "C" {
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
        func_ov065_02283460(h, "Invalid connection.");
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
        func_ov065_02283460(h, "Invalid firewall.");
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
        func_ov065_02283460(h, "Out of memory.");
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
}
}

namespace Nb {
extern "C" {
s32 func_ov065_0227eb60(Ctx0227 **h, Req0227 *req) {
    Ctx0227 *c = *h;
    u32 *out;
    char b1[0x21];
    char b2[0x200];
    char b3[0x50];
    char *p;
    char *q;
    func_ov065_0227f270(req->unk_80, 0x20);
    if (req->unk_1c2[0] != 0) {
        p = req->unk_1c2;
    } else {
        p = c->unk_177;
    }
    func_ov065_0227899c(p, STD_GetStringLength(p), req->unk_a1);
    if (req->unk_c2[0] != 0) {
        q = req->unk_c2;
    } else if (c->unk_12f[0] != 0) {
        q = c->unk_12f;
    } else {
        OS_SPrintf(b3, "%s@%s", c->unk_110, c->unk_144);
        q = b3;
    }
    OS_SPrintf(b2, "%s%s%s%s%s%s", req->unk_a1, "                                                ", q, req->unk_80, req, req->unk_a1);
    func_ov065_0227899c(b2, STD_GetStringLength(b2), b1);
    if (c->unk_100 != 0) {
        func_ov065_02281814(h, c->unk_110, c->unk_144, &out);
        if (out != NULL) {
            c->unk_19c = out[1];
            c->unk_1a0 = out[0];
        }
    }
    func_ov065_0227de10(h, c->unk_1f4, "\\login\\");
    func_ov065_0227de10(h, c->unk_1f4, "\\challenge\\");
    func_ov065_0227de10(h, c->unk_1f4, req->unk_80);
    if (req->unk_c2[0] != 0) {
        func_ov065_0227de10(h, c->unk_1f4, "\\authtoken\\");
        func_ov065_0227de10(h, c->unk_1f4, req->unk_c2);
    } else if (c->unk_12f[0] != 0) {
        func_ov065_0227de10(h, c->unk_1f4, "\\uniquenick\\");
        func_ov065_0227de10(h, c->unk_1f4, c->unk_12f);
    } else {
        func_ov065_0227de10(h, c->unk_1f4, "\\user\\");
        func_ov065_0227de10(h, c->unk_1f4, c->unk_110);
        func_ov065_0227de10(h, c->unk_1f4, "@");
        func_ov065_0227de10(h, c->unk_1f4, c->unk_144);
    }
    if (c->unk_19c != 0) {
        func_ov065_0227de10(h, c->unk_1f4, "\\userid\\");
        func_ov065_0227dde8(h, c->unk_1f4, c->unk_19c);
    }
    if (c->unk_1a0 != 0) {
        func_ov065_0227de10(h, c->unk_1f4, "\\profileid\\");
        func_ov065_0227dde8(h, c->unk_1f4, c->unk_1a0);
    }
    func_ov065_0227de10(h, c->unk_1f4, "\\response\\");
    func_ov065_0227de10(h, c->unk_1f4, b1);
    if (c->unk_10c == 1) {
        func_ov065_0227de10(h, c->unk_1f4, "\\firewall\\1");
    }
    func_ov065_0227de10(h, c->unk_1f4, "\\port\\");
    {
        s32 t = (u16)c->unk_208;
        s32 sw = (s16)(u16)(((t >> 8) & 0xff) | ((t << 8) & 0xff00));
        func_ov065_0227dde8(h, c->unk_1f4, sw);
    }
    func_ov065_0227de10(h, c->unk_1f4, "\\productid\\");
    func_ov065_0227dde8(h, c->unk_1f4, c->unk_46c);
    func_ov065_0227de10(h, c->unk_1f4, "\\gamename\\");
    func_ov065_0227de10(h, c->unk_1f4, data_ov065_02290fe4);
    func_ov065_0227de10(h, c->unk_1f4, "\\namespaceid\\");
    func_ov065_0227dde8(h, c->unk_1f4, c->unk_470);
    func_ov065_0227de10(h, c->unk_1f4, "\\id\\1");
    func_ov065_0227de10(h, c->unk_1f4, "\\final\\");
    return 0;
}
}
}

namespace Nb {
extern "C" {
s32 func_ov065_0227e964(Ctx0227 **h, Req0227 *req) {
    Ctx0227 *c = *h;
    char a1[0x1f];
    char b1[0x2d];
    char a2[0x41];
    char b2[0x5f];
    volatile s32 z0;
    volatile s32 z1;
    u32 len;
    u32 i;
    len = STD_GetStringLength(c->unk_177);
    func_ov065_02278b44(0x79707367);
    i = 0;
    if (i < len) {
        char *p = a1;
        z0 = i;
        do {
            s8 r = func_ov065_02278b24(z0, 0xff);
            *p++ = r ^ c->unk_177[i];
        } while (++i < len);
    }
    a1[i] = 0;
    func_ov065_022789fc(a1, b1, len, 1);
    func_ov065_0227de10(h, c->unk_1f4, "\\newuser\\");
    func_ov065_0227de10(h, c->unk_1f4, "\\email\\");
    func_ov065_0227de10(h, c->unk_1f4, c->unk_144);
    func_ov065_0227de10(h, c->unk_1f4, "\\nick\\");
    func_ov065_0227de10(h, c->unk_1f4, c->unk_110);
    func_ov065_0227de10(h, c->unk_1f4, "\\passwordenc\\");
    func_ov065_0227de10(h, c->unk_1f4, b1);
    func_ov065_0227de10(h, c->unk_1f4, "\\productid\\");
    func_ov065_0227dde8(h, c->unk_1f4, c->unk_46c);
    func_ov065_0227de10(h, c->unk_1f4, "\\gamename\\");
    func_ov065_0227de10(h, c->unk_1f4, data_ov065_02290fe4);
    func_ov065_0227de10(h, c->unk_1f4, "\\namespaceid\\");
    func_ov065_0227dde8(h, c->unk_1f4, c->unk_470);
    func_ov065_0227de10(h, c->unk_1f4, "\\uniquenick\\");
    func_ov065_0227de10(h, c->unk_1f4, c->unk_12f);
    if (req->unk_2c2[0] != 0) {
        len = STD_GetStringLength(req->unk_2c2);
        func_ov065_02278b44(0x79707367);
        i = 0;
        if (i < len) {
            char *p = a2;
            z1 = i;
            do {
                s8 r = func_ov065_02278b24(z1, 0xff);
                *p++ = r ^ req->unk_2c2[i];
            } while (++i < len);
        }
        a2[i] = 0;
        func_ov065_022789fc(a2, b2, len, 1);
        func_ov065_0227de10(h, c->unk_1f4, "\\cdkeyenc\\");
        func_ov065_0227de10(h, c->unk_1f4, b2);
    }
    func_ov065_0227de10(h, c->unk_1f4, "\\id\\1");
    func_ov065_0227de10(h, c->unk_1f4, "\\final\\");
    return 0;
}
}
}

namespace Nb {
extern "C" {
s32 func_ov065_0227e438(Ctx0227 **h, Node0227 *n, char *line) {
    Ctx0227 *c = *h;
    Req0227 *req;
    Unk_ov065_0227e350_Pair2 pr;
    char b1[0x21];
    char b2[0x15];
    char b3[0x200];
    char b4[0x50];
    char *p;
    s32 t;
    if (func_ov065_02283684(h, line, 0) != 0) {
        t = c->unk_418;
        if (t == 0x106 && c->unk_1a0 != 0) {
            func_ov065_02281894(h);
            c->unk_19c = 0;
            c->unk_1a0 = 0;
        } else if (t == 0x201) {
            if (func_ov065_02283630(line, "\\pid\\", b3, 0x200) != 0) {
                c->unk_1a0 = func_0212b770(b3);
            }
        }
        if (func_02129f1c(line, "\\fatal\\") != 0) {
            func_ov065_02283470(h, c->unk_418, c);
            func_ov065_0227e160(h, 4, 1);
            return 4;
        }
        func_ov065_02283470(h, c->unk_418, c);
        func_ov065_0227e160(h, 4, 0);
        return 4;
    }
    req = (Req0227 *)n->unk_04;
    switch (n->unk_14) {
    case 1:
        if (strncmp(line, "\\lc\\1", 5) != 0) {
            func_ov065_02283470(h, 1, "Unexpected data was received from the server.");
            func_ov065_0227e160(h, 3, 1);
            return 3;
        }
        if (func_ov065_02283630(line, "\\challenge\\", (char *)req, 0x80) == 0) {
            func_ov065_02283470(h, 1, "Unexpected data was received from the server.");
            func_ov065_0227e160(h, 3, 1);
            return 3;
        }
        if (req->unk_304 != 0) {
            t = func_ov065_0227e964(h, req);
            if (t != 0) {
                return t;
            }
            n->unk_14 = 3;
        } else {
            t = func_ov065_0227eb60(h, req);
            if (t != 0) {
                return t;
            }
            n->unk_14 = 2;
        }
        break;
    case 3:
        if (strncmp(line, "\\nur\\", 5) != 0) {
            func_ov065_02283470(h, 1, "Unexpected data was received from the server.");
            func_ov065_0227e160(h, 3, 1);
            return 3;
        }
        if (func_ov065_02283630(line, "\\userid\\", b3, 0x200) == 0) {
            func_ov065_02283470(h, 1, "Unexepected data was received from the server.");
            func_ov065_0227e160(h, 3, 1);
            return 3;
        }
        c->unk_19c = func_0212b770(b3);
        if (func_ov065_02283630(line, "\\profileid\\", b3, 0x200) == 0) {
            func_ov065_02283470(h, 1, "Unexepected data was received from the server.");
            func_ov065_0227e160(h, 3, 1);
            return 3;
        }
        c->unk_1a0 = func_0212b770(b3);
        t = func_ov065_0227eb60(h, req);
        if (t != 0) {
            return t;
        }
        n->unk_14 = 2;
        break;
    case 2:
        if (strncmp(line, "\\lc\\2", 5) != 0) {
            func_ov065_02283470(h, 1, "Unexpected data was received from the server.");
            func_ov065_0227e160(h, 3, 1);
            return 3;
        }
        if (func_ov065_02283630(line, "\\sesskey\\", b3, 0x200) == 0) {
            func_ov065_02283470(h, 1, "Unexepected data was received from the server.");
            func_ov065_0227e160(h, 3, 1);
            return 3;
        }
        c->unk_198 = func_0212b770(b3);
        if (func_ov065_02283630(line, "\\userid\\", b3, 0x200) == 0) {
            func_ov065_02283470(h, 1, "Unexepected data was received from the server.");
            func_ov065_0227e160(h, 3, 1);
            return 3;
        }
        c->unk_19c = func_0212b770(b3);
        if (func_ov065_02283630(line, "\\profileid\\", b3, 0x200) == 0) {
            func_ov065_02283470(h, 1, "Unexepected data was received from the server.");
            func_ov065_0227e160(h, 3, 1);
            return 3;
        }
        c->unk_1a0 = func_0212b770(b3);
        if (func_ov065_02283630(line, "\\uniquenick\\", b2, 0x15) == 0) {
            b2[0] = 0;
        }
        if (func_ov065_02283630(line, "\\lt\\", c->unk_474, 0x19) == 0) {
            c->unk_474[0] = 0;
        }
        if (req->unk_c2[0] != 0) {
            p = req->unk_c2;
        } else if (c->unk_12f[0] != 0) {
            p = c->unk_12f;
        } else {
            OS_SPrintf(b4, "%s@%s", c->unk_110, c->unk_144);
            p = b4;
        }
        OS_SPrintf(b3, "%s%s%s%s%s%s", req->unk_a1, "                                                ", p, req, req->unk_80, req->unk_a1);
        func_ov065_0227899c(b3, STD_GetStringLength(b3), b1);
        if (func_ov065_02283630(line, "\\proof\\", b3, 0x200) == 0) {
            func_ov065_02283470(h, 1, "Unexepected data was received from the server.");
            func_ov065_0227e160(h, 3, 1);
            return 3;
        }
        if (memcmp(b1, b3, 0x20) != 0) {
            func_ov065_02283470(h, 0x108, "Could not authenticate server.");
            func_ov065_0227e160(h, 3, 1);
            return 3;
        }
        if (c->unk_100 != 0) {
            u32 *e = func_ov065_022818f4(h, c->unk_1a0);
            e[0] = c->unk_1a0;
            e[1] = c->unk_19c;
        }
        c->unk_1d8 = 3;
        pr = n->unk_0c;
        if (pr.p.unk_00 != 0) {
            u32 *q = (u32 *)func_ov065_02277af0(0x20);
            if (q == NULL) {
                func_ov065_02283460(h, "Out of memory.");
                return 1;
            }
            func_0212899c(q, 0, 0x20);
            q[1] = c->unk_1a0;
            q[0] = 0;
            func_ov065_02283728(q + 2, b2, 0x15);
            t = func_ov065_0227e0e8(h, pr.p, q, n, 0);
            if (t != 0) {
                return t;
            }
        }
        func_ov065_0228090c(h, n);
        break;
    }
    return 0;
}
}
}

namespace Nb {
extern "C" {
s32 func_ov065_0227e3d0(Ctx0227 **h) {
    Ctx0227 *c = *h;
    s32 out;
    s32 r = func_ov065_02283590(h, c->unk_1d4, &out);
    if (r == 0) {
        if (out == 4) {
            func_ov065_02283470(h, 0x107, "The server has refused the connection.");
            func_ov065_0227e160(h, 4, 1);
            return 4;
        }
        if (out == 0) {
            return 0;
        }
        c->unk_1d8 = 2;
        return 0;
    }
    return r;
}
}
}

namespace Nb {
extern "C" {
s32 func_ov065_0227e350(Ctx0227 **h, Node0227 *n) {
    Ctx0227 *c = *h;
    if (n->unk_08 != NULL) {
        if (c->unk_104 == 0) {
            func_ov065_02277ac8(n->unk_08->unk_08);
            n->unk_08->unk_08 = NULL;
            func_ov065_02277ac8(n->unk_08->unk_0c);
            n->unk_08->unk_0c = NULL;
            func_ov065_02277ac8(n->unk_08);
            n->unk_08 = NULL;
        }
    }
    func_ov065_02277ac8((void *)n->unk_0c.p.unk_04);
    n->unk_0c.p.unk_04 = 0;
    func_ov065_02277ac8((void *)n->unk_18);
    n->unk_18 = 0;
    n->unk_14 = 0;
    if (n->unk_0c.p.unk_00 == 0 || (c->unk_104 == 1 && n->unk_08 == NULL)) {
        func_ov065_02281880(h, n);
        return 0;
    }
    return 1;
}
}
}

namespace Na {
extern "C" {
s32 func_ov065_0227e1c8(Unk_H *h, s32 a) {
    Unk_C *ctx = h->unk_00;
    s32 st = ctx->unk_1d8;
    s32 out;
    void *p;
    Unk_N *n;
    Unk_N *cur;
    if (st != 4) {
    if (st != 0) {
        if (a != 0 && st == 3) {
            func_ov065_0227de10(h, &ctx->unk_1f4, "\\logout\\\\sesskey\\");
            func_ov065_0227dde8(h, &ctx->unk_1f4, ctx->unk_198);
            func_ov065_0227de10(h, &ctx->unk_1f4, "\\final\\");
        }
        func_ov065_0227da7c(h, ctx->unk_1d4, &ctx->unk_1f4, &out, 1, "CM");
        if (ctx->unk_1d4 != -1) {
            func_ov065_02278da4(ctx->unk_1d4, 2);
            func_ov065_02278dbc(ctx->unk_1d4);
            ctx->unk_1d4 = -1;
        }
        if (ctx->unk_204 != -1) {
            func_ov065_02278da4(ctx->unk_204, 2);
            func_ov065_02278dbc(ctx->unk_204);
            ctx->unk_204 = -1;
        }
        ctx->unk_1d8 = 4;
        ctx->unk_19c = 0;
        ctx->unk_1a0 = 0;
    }
    func_ov065_02277ac8(ctx->unk_1dc);
    ctx->unk_1dc = NULL;
    func_ov065_02277ac8(ctx->unk_1ec);
    ctx->unk_1ec = NULL;
    func_ov065_02277ac8(ctx->unk_1f4.unk_00);
    ctx->unk_1f4.unk_00 = NULL;
    func_ov065_02277ac8(ctx->unk_440);
    ctx->unk_440 = NULL;
    func_ov065_02277ac8(ctx->unk_450);
    ctx->unk_450 = NULL;
    while (ctx->unk_424 != NULL) {
        func_ov065_0228090c(h, ctx->unk_424);
    }
    ctx->unk_424 = NULL;
    n = (Unk_N *)ctx->unk_434;
    while (n != NULL) {
        cur = n;
        n = *(Unk_N **)((u8 *)n + 0x3c);
        func_ov065_022810fc(h, cur);
    }
    ctx->unk_434 = NULL;
    while (func_ov065_022817c8(h, (s32)func_ov065_0227e350, 0) == 0) {
    }
    }
}
}
}

namespace Na {
extern "C" {
void func_ov065_0227e160(Unk_H *h, s32 a, s32 b) {
    Unk_C *ctx = h->unk_00;
    Unk_ov065_0227e0e8_Wrap p;
    Unk_ov065_0227e160_Cb *m;
    if (b == 1) {
        ctx->unk_41c = 1;
    }
    p = ctx->unk_1a4[0];
    if (p.unk_00.unk_00 != 0) {
        m = (Unk_ov065_0227e160_Cb *)func_ov065_02277af0(0x10);
        if (m != NULL) {
            m->unk_00 = a;
            m->unk_0c = b;
            m->unk_04 = ctx->unk_418;
            m->unk_08 = ctx;
        }
        func_ov065_0227e0e8(h, p, (Unk_N *)m, NULL, 1);
    }
}
}
}
