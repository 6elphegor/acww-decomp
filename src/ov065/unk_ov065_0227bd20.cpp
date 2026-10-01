// mwcc-flags: -O4,p -str reuse
#include "types.h"

namespace Nb {
// ov065_047: DWC HTTP/GHI-like API wrappers (0x0227bbf4..0x0227c4b0)

struct Unk_ov065_0227bd20_Ctx {
    u8 pad_000[0x100];
    s32 unk_100;
    u8 pad_104[4];
    s32 unk_108;
    u8 pad_10c[0x198 - 0x10c];
    s32 unk_198;
    u8 pad_19c[0x1d8 - 0x19c];
    s32 unk_1d8;
    u8 pad_1dc[0x1f4 - 0x1dc];
    char unk_1f4[0x14];
    s32 unk_208;
    s32 unk_20c;
    s32 unk_210;
    s32 unk_214;
    char unk_218[0x100];
    char unk_318[0x100];
    u8 pad_418[0x430 - 0x418];
    s32 unk_430;
};

struct Unk_ov065_0227bd20_Handle {
    Unk_ov065_0227bd20_Ctx *unk_00;
};

struct Unk_ov065_0227bbf4_Url {
    u8 pad_00[0x14];
    char *unk_14;
    char *unk_18;
    u16 unk_1c;
    u16 unk_1e;
    u16 unk_20;
    u16 unk_22;
    char *unk_24;
};

struct Unk_ov065_0227c05c_Src {
    s32 unk_00;
    s32 unk_04;
    char *unk_08;
    char *unk_0c;
    s32 unk_10;
    s32 unk_14;
};

struct Unk_ov065_0227c05c_Ent {
    s32 unk_00;
    s32 unk_04;
    Unk_ov065_0227c05c_Src *unk_08;
    s32 unk_0c;
    s32 unk_10;
    s32 unk_14;
};

struct Unk_ov065_0227c05c_Out {
    s32 unk_000;
    s32 unk_004;
    char unk_008[0x100];
    char unk_108[0x100];
    s32 unk_208;
    s32 unk_20c;
};

struct Unk_ov065_0227c400_Buf {
    u32 v[0x81];
};

typedef void (*Unk_ov065_0227c400_Cb)(void *, void *, void *);
extern "C" {
s32 func_0212a190(const char *, const char *);
s32 func_0212a15c(const char *, const char *, s32);
s32 func_02129fa0(const char *, const char *);
char *func_0212a120(const char *, s32);
s32 func_0212b770(const char *);
void *func_0212899c(void *, s32, s32);
char *func_ov065_02279100(const char *);
void func_ov065_02283460(void *, const char *);
void func_ov065_02283728(char *, const char *, s32);
s32 func_ov065_0227ced4(void *, s32, s32, s32);
s32 func_ov065_0227cd34(void *, s32);
s32 func_ov065_0227ce44(void *, s32);
s32 func_ov065_0227f54c(void *, s32, s32);
s32 func_ov065_0227f3c4(void *, s32, s32, s32, s32, s32);
s32 func_ov065_02282f90(void *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_ov065_0227de10(void *, char *, const char *);
s32 func_ov065_0227dde8(void *, char *, s32);
s32 func_ov065_022818bc(void *, s32, void *);
s32 func_ov065_02281790(void *, s32);
s32 func_ov065_0228176c(void *);
s32 func_ov065_02281880(void *, void *);
void func_ov065_02277ac8(void *);
}
}

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
s32 func_0212a15c(const char *, const char *, u32);
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

namespace Nc {
extern "C" {
s32 func_ov065_0227c6c0(Ctx0227 **h, s32 a, s32 b) {
    if (data_ov065_02290fa0 != 1) {
        return 2;
    }
    if (h == NULL) {
        return 2;
    }
    return func_ov065_0227cc1c(h, a, b);
}
}
}

namespace Nc {
extern "C" {
void func_ov065_0227c6a8(Ctx0227 **h) {
    if (h != NULL && *h != NULL) {
        func_ov065_0227cbdc(h);
    }
}
}
}

namespace Nc {
extern "C" {
s32 func_ov065_0227c670(Ctx0227 **h) {
    Ctx0227 *c;
    if (h == NULL || (c = *h) == NULL) {
        return 2;
    }
    if (c->unk_108 != 0) {
        return 0;
    }
    return func_ov065_0227c6f0(h, 0);
}
}
}

namespace Nc {
extern "C" {
s32 func_ov065_0227c624(Ctx0227 **h, s32 i, s32 x, s32 y) {
    Ctx0227 *c;
    if (h == NULL || (c = *h) == NULL) {
        return 2;
    }
    if (i < 0 || i >= 6) {
        func_ov065_02283460(h, "Invalid func.");
        return 2;
    }
    c->unk_1a4[i].unk_00 = x;
    c->unk_1a4[i].unk_04 = y;
    return 0;
}
}
}

namespace Nc {
extern "C" {
s32 func_ov065_0227c564(Ctx0227 **h, char *a, char *b, s32 c, s32 d, Unk_ov065_0227c564_Fn cb, s32 e) {
    Ctx0227 *ctx;
    if (h == NULL || (ctx = *h) == NULL) {
        return 2;
    }
    if (a == NULL || *a == 0) {
        return 2;
    }
    if (b == NULL || *b == 0) {
        return 2;
    }
    if (cb == NULL) {
        func_ov065_02283460(h, "No callback.");
        return 2;
    }
    if (ctx->unk_108 != 0) {
        s32 z[8] = {0};
        cb(h, z, e);
        return 0;
    }
    return func_ov065_0227ee64(h, "", "", "",
                               "", a, b, 0, c, 0, d, cb, e);
}
}
}

namespace Nc {
extern "C" {
void func_ov065_0227c538(Ctx0227 **h) {
    Ctx0227 *c;
    if (h != NULL) {
        c = *h;
        if (c != NULL) {
            if (c->unk_108 == 0) {
                func_ov065_0227e1c8(h, 1);
                func_ov065_0227ca28(h);
            }
        }
    }
}
}
}

namespace Nb {
struct Unk_ov065_0227c4b0_Args {
    s32 v[4];
};
extern "C" {
s32 func_ov065_0227c4b0(Unk_ov065_0227bd20_Handle *h, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, Unk_ov065_0227c400_Cb cb, void *arg) {
    Unk_ov065_0227bd20_Ctx *c;
    if (h == NULL || (c = h->unk_00) == NULL) {
        return 2;
    }
    if (cb == NULL) {
        func_ov065_02283460(h, "No callback.");
        return 2;
    }
    if (c->unk_108 != 0) {
        Unk_ov065_0227c4b0_Args l = {{0, 0, 0, 0}};
        l.v[2] = 0x601;
        cb(h, &l, arg);
        return 0;
    }
    return func_ov065_02282f90(h, a1, a2, a3, a4, a5, a6, 0, a7, (s32)cb, (s32)arg);
}
}
}

namespace Nb {
extern "C" {
s32 func_ov065_0227c400(Unk_ov065_0227bd20_Handle *h, s32 a1, s32 a2, s32 a3, Unk_ov065_0227c400_Cb cb, void *arg) {
    Unk_ov065_0227bd20_Ctx *c;
    if (h == NULL || (c = h->unk_00) == NULL || a1 == 0) {
        return 2;
    }
    if (cb == NULL) {
        func_ov065_02283460(h, "No callback.");
        return 2;
    }
    if (c->unk_108 != 0) {
        Unk_ov065_0227c400_Buf b = {{0}};
        cb(h, &b, arg);
        return 0;
    }
    if (c->unk_1d8 == 4) {
        func_ov065_02283460(h, "The connection has already been disconnected.");
        return 2;
    }
    return func_ov065_0227f3c4(h, a1, a2, a3, (s32)cb, (s32)arg);
}
}
}

namespace Nb {
extern "C" {
s32 func_ov065_0227c3b0(Unk_ov065_0227bd20_Handle *h, s32 a, s32 b) {
    Unk_ov065_0227bd20_Ctx *c;
    if (h == NULL || (c = h->unk_00) == NULL) {
        return 2;
    }
    if (c->unk_108 != 0) {
        return 0;
    }
    if (c->unk_1d8 == 4) {
        func_ov065_02283460(h, "The connection has already been disconnected.");
        return 2;
    }
    return func_ov065_0227f54c(h, a, b);
}
}
}

namespace Nb {
extern "C" {
s32 func_ov065_0227c278(Unk_ov065_0227bd20_Handle *h, s32 v, const char *s) {
    Unk_ov065_0227bd20_Ctx *c;
    char b[0x401];
    char *p;
    if (h == NULL || (c = h->unk_00) == NULL) {
        return 2;
    }
    if (c->unk_108 != 0) {
        return 0;
    }
    if (c->unk_1d8 == 4) {
        func_ov065_02283460(h, "The connection has already been disconnected.");
        return 2;
    }
    if (s == NULL) {
        func_ov065_02283460(h, "Invalid reason.");
        return 2;
    }
    func_ov065_02283728(b, s, 0x401);
    if (b[0] != 0) {
        p = b;
        do {
            if (*p == '\\') {
                *p = '/';
            }
            p++;
        } while (*p != 0);
    }
    func_ov065_0227de10(h, c->unk_1f4, "\\addbuddy\\");
    func_ov065_0227de10(h, c->unk_1f4, "\\sesskey\\");
    func_ov065_0227dde8(h, c->unk_1f4, c->unk_198);
    func_ov065_0227de10(h, c->unk_1f4, "\\newprofileid\\");
    func_ov065_0227dde8(h, c->unk_1f4, v);
    func_ov065_0227de10(h, c->unk_1f4, "\\reason\\");
    func_ov065_0227de10(h, c->unk_1f4, b);
    func_ov065_0227de10(h, c->unk_1f4, "\\final\\");
    return 0;
}
}
}

namespace Nb {
extern "C" {
s32 func_ov065_0227c224(Unk_ov065_0227bd20_Handle *h, s32 a) {
    Unk_ov065_0227bd20_Ctx *c;
    if (h == NULL || (c = h->unk_00) == NULL) {
        return 2;
    }
    if (c->unk_108 != 0) {
        return 0;
    }
    if (c->unk_1d8 == 4) {
        func_ov065_02283460(h, "The connection has already been disconnected.");
        return 2;
    }
    return func_ov065_0227ce44(h, a);
}
}
}

namespace Nb {
extern "C" {
s32 func_ov065_0227c17c(Unk_ov065_0227bd20_Handle *h, s32 a) {
    Unk_ov065_0227bd20_Ctx *c;
    s32 *e;
    if (h == NULL || (c = h->unk_00) == NULL) {
        return 2;
    }
    if (c->unk_108 != 0) {
        return 0;
    }
    if (c->unk_1d8 == 4) {
        func_ov065_02283460(h, "The connection has already been disconnected.");
        return 2;
    }
    if (func_ov065_022818bc(h, a, &e) == 0) {
        return 0;
    }
    e[5]--;
    if (c->unk_100 == 0 && e[5] <= 0) {
        func_ov065_02277ac8((void *)e[4]);
        e[4] = 0;
        if (func_ov065_0228176c(e) != 0) {
            func_ov065_02281880(h, e);
        }
    }
    return 0;
}
}
}

namespace Nb {
extern "C" {
s32 func_ov065_0227c14c(Unk_ov065_0227bd20_Handle *h, s32 *out) {
    Unk_ov065_0227bd20_Ctx *c;
    if (h == NULL || (c = h->unk_00) == NULL) {
        return 2;
    }
    if (c->unk_108 != 0) {
        *out = 0;
        return 0;
    }
    *out = c->unk_430;
    return 0;
}
}
}

namespace Nb {
extern "C" {
s32 func_ov065_0227c05c(Unk_ov065_0227bd20_Handle *h, s32 idx, Unk_ov065_0227c05c_Out *out) {
    Unk_ov065_0227bd20_Ctx *c;
    Unk_ov065_0227c05c_Ent *ent;
    Unk_ov065_0227c05c_Src *s;
    s32 n;
    if (h == NULL || (c = h->unk_00) == NULL) {
        return 2;
    }
    if (c->unk_108 != 0) {
        func_0212899c(out, 0, 0x210);
        return 0;
    }
    if (out == NULL) {
        func_ov065_02283460(h, "Invalid status.");
        return 2;
    }
    n = c->unk_430;
    if (idx < 0 || idx >= n) {
        func_ov065_02283460(h, "Invalid index.");
        return 2;
    }
    ent = (Unk_ov065_0227c05c_Ent *)func_ov065_02281790(h, idx);
    if (ent == NULL) {
        func_ov065_02283460(h, "Invalid index.");
        return 2;
    }
    s = ent->unk_08;
    out->unk_000 = ent->unk_00;
    out->unk_004 = s->unk_04;
    if (s->unk_08 != NULL) {
        func_ov065_02283728(out->unk_008, s->unk_08, 0x100);
    } else {
        *s->unk_08 = 0;
    }
    if (s->unk_0c != NULL) {
        func_ov065_02283728(out->unk_108, s->unk_0c, 0x100);
    } else {
        *s->unk_0c = 0;
    }
    out->unk_208 = s->unk_10;
    out->unk_20c = s->unk_14;
    return 0;
}
}
}

namespace Nb {
extern "C" {
s32 func_ov065_0227c000(Unk_ov065_0227bd20_Handle *h, s32 a, s32 *out) {
    Unk_ov065_0227bd20_Ctx *c;
    s32 **e;
    if (h == NULL || (c = h->unk_00) == NULL) {
        return 2;
    }
    if (c->unk_108 != 0) {
        *out = 0;
        return 0;
    }
    if (func_ov065_022818bc(h, a, &e) != 0 && e[2] != 0) {
        *out = *e[2];
    } else {
        *out = -1;
    }
    return 0;
}
}
}

namespace Nb {
extern "C" {
s32 func_ov065_0227bfb4(Unk_ov065_0227bd20_Handle *h, s32 a) {
    Unk_ov065_0227bd20_Ctx *c;
    s32 **e;
    if (h == NULL || (c = h->unk_00) == NULL) {
        return 0;
    }
    if (c->unk_108 != 0) {
        return 0;
    }
    if (func_ov065_022818bc(h, a, &e) != 0 && e[2] != 0) {
        return 1;
    }
    return 0;
}
}
}

namespace Nb {
extern "C" {
s32 func_ov065_0227bf5c(Unk_ov065_0227bd20_Handle *h, s32 a) {
    Unk_ov065_0227bd20_Ctx *c;
    if (h == NULL || (c = h->unk_00) == NULL) {
        return 2;
    }
    if (c->unk_108 != 0) {
        return 0;
    }
    if (c->unk_1d8 == 4) {
        func_ov065_02283460(h, "The connection has already been disconnected.");
        return 2;
    }
    if (func_ov065_0227cd34(h, a) == 0) {
        return 0;
    }
}
}
}

namespace Nb {
extern "C" {
s32 func_ov065_0227bd8c(Unk_ov065_0227bd20_Handle *h, s32 v, const char *s1, const char *s2) {
    Unk_ov065_0227bd20_Ctx *c;
    char b1[0x100];
    char b2[0x100];
    char *p;
    if (h == NULL || (c = h->unk_00) == NULL) {
        return 2;
    }
    if (c->unk_108 != 0) {
        return 0;
    }
    if (c->unk_1d8 == 4) {
        func_ov065_02283460(h, "The connection has already been disconnected.");
        return 2;
    }
    if (s1 == NULL) {
        func_ov065_02283460(h, "Invalid statusString.");
        return 2;
    }
    if (s2 == NULL) {
        func_ov065_02283460(h, "Invalid locationString.");
        return 2;
    }
    func_ov065_02283728(b1, s1, 0x100);
    if (b1[0] != 0) {
        p = b1;
        do {
            if (*p == '\\') {
                *p = '/';
            }
            p++;
        } while (*p != 0);
    }
    func_ov065_02283728(b2, s2, 0x100);
    if (b2[0] != 0) {
        p = b2;
        do {
            if (*p == '\\') {
                *p = '/';
            }
            p++;
        } while (*p != 0);
    }
    if (v == c->unk_214 && func_0212a190(b1, c->unk_218) == 0 && func_0212a190(b2, c->unk_318) == 0) {
        return 0;
    }
    c->unk_214 = v;
    func_ov065_02283728(c->unk_218, b1, 0x100);
    func_ov065_02283728(c->unk_318, b2, 0x100);
    func_ov065_0227de10(h, c->unk_1f4, "\\status\\");
    func_ov065_0227dde8(h, c->unk_1f4, v);
    func_ov065_0227de10(h, c->unk_1f4, "\\sesskey\\");
    func_ov065_0227dde8(h, c->unk_1f4, c->unk_198);
    func_ov065_0227de10(h, c->unk_1f4, "\\statstring\\");
    func_ov065_0227de10(h, c->unk_1f4, b1);
    func_ov065_0227de10(h, c->unk_1f4, "\\locstring\\");
    func_ov065_0227de10(h, c->unk_1f4, b2);
    func_ov065_0227de10(h, c->unk_1f4, "\\final\\");
    return 0;
}
}
}

namespace Nb {
extern "C" {
s32 func_ov065_0227bd20(Unk_ov065_0227bd20_Handle *h, s32 a, s32 b) {
    Unk_ov065_0227bd20_Ctx *c;
    if (h == NULL || (c = h->unk_00) == NULL) {
        return 2;
    }
    if (c->unk_108 != 0) {
        return 0;
    }
    if (c->unk_1d8 == 4) {
        func_ov065_02283460(h, "The connection has already been disconnected.");
        return 2;
    }
    if (b == 0) {
        func_ov065_02283460(h, "Invalid message.");
        return 2;
    }
    return func_ov065_0227ced4(h, a, 1, b);
}
}
}

// Not in the original binary: unreferenced weak function compiled right after func_ov065_0227bd20, so that the four
// shared literals are pooled first as in the original; removed by the dead-stripping link (see notes.txt).
namespace Nb {
extern "C" {
__declspec(weak) void Unk_ov065_0227bd20_pool_order(void) {
    func_ov065_02283460(0, "The connection has already been disconnected.");
    func_ov065_02283460(0, "\\sesskey\\");
    func_ov065_02283460(0, "\\final\\");
    func_ov065_02283460(0, "No callback.");
}
}
}
