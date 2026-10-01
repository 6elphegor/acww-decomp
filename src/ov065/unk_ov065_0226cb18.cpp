// mwcc-flags: -O4,p -str reuse
#include "types.h"
#pragma opt_strength_reduction off

extern "C" {

const u8 data_ov065_0228b374[16] = {0x05, 0x01, 0x0c, 0x04, 0x02, 0x03, 0x0a, 0x00, 0x0b, 0x07, 0x09, 0x08, 0x06, 0x00, 0x00, 0x00};
const u8 data_ov065_0228b384[16] = {0x0a, 0x0d, 0x0e, 0x08, 0x09, 0x03, 0x06, 0x00, 0x0c, 0x05, 0x02, 0x07, 0x0b, 0x01, 0x0f, 0x04};

s8 data_ov065_0228b698[16] = {0x67, 0x77, 0x69, 0x27, 0x36, 0x26, 0x66, 0x73, 0x3d, 0x30, 0x4e, 0x66, 0x7e, 0, 0, 0};
s8 data_ov065_0228b6a8[16] = {0x25, 0x28, 0x65, 0x67, 0x45, 0x72, 0x29, 0x61, 0x67, 0x28, 0x73, 0x26, 0x6d, 0, 0, 0};
u8 data_ov065_0228b6b8[24] = {0x17, 0x14, 0x11, 0x0d, 0x0b, 0x06, 0x0f, 0x0e, 0x09, 0x15, 0x0c, 0x04, 0x02, 0x01, 0x12, 0x10, 0x05, 0x03, 0x13, 0x0a, 0x07, 0x08, 0x00, 0x16};
s8 data_ov065_0228b6d0[28] = {0x33, 0x38, 0x67, 0x36, 0x7a, 0x78, 0x6a, 0x6b, 0x32, 0x30, 0x67, 0x76, 0x6d, 0x76, 0x5d, 0x36, 0x5e, 0x3d, 0x6a, 0x26, 0x25, 0x76, 0x59, 0x31, 0, 0, 0, 0};
s8 data_ov065_0228b6ec[28] = {0x39, 0x35, 0x32, 0x75, 0x79, 0x62, 0x6a, 0x6e, 0x70, 0x6d, 0x75, 0x39, 0x30, 0x33, 0x62, 0x69, 0x61, 0x40, 0x62, 0x6b, 0x35, 0x6d, 0x5b, 0x2d, 0, 0, 0, 0};

s8 *data_ov065_0228b694 = data_ov065_0228b6ec;
s8 *data_ov065_0228b68c = data_ov065_0228b698;
s8 *data_ov065_0228b688 = data_ov065_0228b6d0;
s8 *data_ov065_0228b690 = data_ov065_0228b6a8;

}

namespace N_d080 {
extern "C" {

typedef unsigned long long u64;
typedef long long s64;

struct Unk_ov065_0226d158_Form {
    void *unk_00;
    s32 unk_04;
    s32 unk_08;
};

struct Unk_ov065_0226d158_Date {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0c;
};

struct Unk_ov065_0226d158_Time {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
};

struct Unk_ov065_0226d158_Kv {
    const char *key;
    const char *val;
};

struct Unk_ov065_0226d158_Owner {
    u8 unk_00;
    u8 unk_01;
    u8 unk_02;
    u8 unk_03;
    u16 unk_04[10];
    u16 unk_18;
    u16 unk_1a[26];
    u16 unk_4e;
};

struct Unk_ov065_02290604_S {
    u64 unk_00;
    u64 unk_08;
    u16 unk_10;
};

struct Unk_ov065_02290600_Obj {
    u8 pad_00[0x24];
    s32 unk_24;
    u8 pad_28[0x938 - 0x28];
    void *unk_938;
    u8 pad_93c[0x968 - 0x93c];
    u8 unk_968[0x9d4 - 0x968];
    s32 unk_9d4;
};

typedef void *(*Unk_ov065_02290600_Alloc)(const char *, u32);
typedef void (*Unk_ov065_02290600_Free)(const char *, void *, u32);

struct Unk_ov065_02290600_S {
    u8 pad_00[4];
    s32 unk_04;
    s32 unk_08;
    char unk_0c[4];
    char unk_10[0xf];
    char unk_1f[0x33];
    char unk_52[0x12d];
    char unk_17f[9];
    char unk_188[0x41];
    u8 pad_1c9[0x1f0 - 0x1c9];
    Unk_ov065_02290600_Alloc unk_1f0;
    Unk_ov065_02290600_Free unk_1f4;
    u8 unk_1f8[0x2f8 - 0x1f8];
    Unk_ov065_02290600_Obj *unk_2f8;
    u8 pad_2fc[0x3bc - 0x2fc];
    u8 unk_3bc[0x18];
    s32 unk_3d4;
};

typedef Unk_ov065_02290600_S S;

extern "C" {
extern S *data_ov065_02290600;
extern Unk_ov065_02290604_S data_ov065_02290604;
extern u32 data_0220064c;
extern char data_ov065_0228b708[];
extern char data_ov065_0228b714[];
extern char *data_ov065_0228b73c[];
extern char data_ov065_0228b798[];
extern char data_ov065_0228b7a0[];
extern char data_ov065_0228b7ac[];
extern char data_ov065_0228b7c8[];
extern char data_ov065_0228b7d0[];
extern char data_ov065_0228b7dc[];
extern char data_ov065_0228b7e4[];
extern char data_ov065_0228b7ec[];
extern char data_ov065_0228b7f4[];
extern char data_ov065_0228b7fc[];
extern char data_ov065_0228b804[];
extern char data_ov065_0228b80c[];
extern char data_ov065_0228b814[];
extern char data_ov065_0228b81c[];
extern char data_ov065_0228b838[];
extern char data_ov065_0228b848[];
extern char data_ov065_0228b850[];
extern char data_ov065_0228b858[];
extern char data_ov065_0228b860[];
extern char data_ov065_0228b864[];
extern char data_ov065_0228b86c[];
extern char data_ov065_0228b874[];
extern char data_ov065_0228b87c[];
extern char data_ov065_0228b884[];
extern char data_ov065_0228b88c[];
extern char data_ov065_0228b894[];
extern char data_ov065_0228b8a0[];
extern char data_ov065_0228b8b4[];
extern char data_ov065_0228b8c4[];
extern char data_ov065_0228b8cc[];
extern char data_ov065_0228b8d8[];
extern char data_ov065_0228b8e4[];
extern char data_ov065_0228b8f0[];
extern char data_ov065_0228b8f8[];
extern char data_ov065_0228b900[];
extern char data_ov065_0228b90c[];
extern char data_ov065_0228b918[];
extern char data_ov065_0228b924[];

extern s32 func_02128930(const void *a, const void *b, u32 n);
extern void func_02116048(const void *src, void *dst, u32 n);
extern void func_02115fb4(void *dst, u32 v, u32 n);
extern void func_02115640(void *p);
extern void func_021155c4(void *p);
extern s32 func_0211d3a0(void *p);
extern s32 func_0211d2e0(void *p);
extern u32 func_01ffa2ec(void);
extern void func_01ffa3d4(u32 v);
extern s32 func_021130d0(char *buf, const char *fmt, ...);
extern s32 func_02113088(char *buf, u32 n, const char *fmt, ...);
extern s32 func_0212a438(const char *s);
extern s32 func_0212dcb4(const void *s);
extern void func_020ff0bc(void *p);
extern void func_02114480(void *m);
extern void func_02114410(void *m);
extern s32 func_0212b770(void);
extern s32 func_0212b784(const char *s, char **end, s32 base);
extern s32 func_020ff6f4(void *p, u32 v);
extern void func_020ff5cc(void *p);
extern void func_020ff734(u32 v);
extern void func_02113788(void *p);
extern u64 func_01ffa6b4(void);
extern void func_021132e0(u32 ms);

extern void func_ov065_0226cec0(void *p);
extern void func_ov065_0226cfe4(void *in, void *out);
extern void func_ov065_0226cfb0(void *in, void *p);
extern u8 *func_ov065_0226abb0(void);
extern u8 *func_ov065_0226ab5c(u16 *out);
extern u32 func_ov065_0226b148(void);
extern s32 func_ov065_0226e07c(Unk_ov065_0226d158_Form *f, const char *k, const char *v);
extern s32 func_ov065_0226e3ac(void *a, const char *k, const char *v);
extern s32 func_ov065_0226e2e4(void *a, const char *k, const char *v, u32 n);
extern s32 func_ov065_0226de90(void *buf, u32 n, const char *key);
extern s32 func_ov065_0226de4c(void *buf, u32 n, const char *key, void *out, u32 max);
extern s32 func_ov065_0226de0c(void *buf, u32 n, const char *key, void *out, u32 max);
extern s32 func_ov065_0226ded4(void *buf, u32 n, u32 a, void *b);
extern s32 func_ov065_0226e4dc(void *p);
extern s32 func_ov065_0226da64(s32 a);











void func_ov065_0226d080(u8 *p);
s32 func_ov065_0226d08c(void *p);
void func_ov065_0226d0b0(void *a, void *dst);
void func_ov065_0226d0e0(void *a, void *b);
s32 func_ov065_0226d0fc(void *a);

s32 func_ov065_0226d0fc(void *a) {
    u8 buf[0x1c];
    func_ov065_0226cfe4(a, buf);
    if (func_02128930(buf, "NDWCSHAP", 8) == 0) {
        return TRUE;
    }
    return FALSE;
}

void func_ov065_0226d0e0(void *a, void *b) {
    u8 buf[0x18];
    func_ov065_0226cfe4(a, buf);
    func_ov065_0226cfb0(buf, b);
}

void func_ov065_0226d0b0(void *a, void *dst) {
    u8 buf[0x18];
    func_ov065_0226cfe4(a, buf);
    if (func_02128930(buf, "NDWCSHAP", 8) == 0) {
        func_02116048(buf + 8, dst, 10);
    }
}

s32 func_ov065_0226d08c(void *p) {
    if (func_02128930(p, "NWCUSBAP", 8) == 0) {
        return TRUE;
    }
    return FALSE;
}

void func_ov065_0226d080(u8 *p) {
    func_ov065_0226cec0(p + 0xc);
}

}
}
}  // namespace N_d080

namespace N_c750 {
extern "C" {

struct Unk_ov065_0226b488_Rec {
    u8 unk_00;
    u8 unk_01;
    u16 unk_02;
    u8 unk_04[6];
    u16 unk_0a;
    u8 unk_0c[0x2c - 0xc];
    u16 unk_2c;
    u8 pad2e[0x36 - 0x2e];
    u16 unk_36;
    u8 pad38[0xc0 - 0x38];
};

struct Unk_ov065_0226b488_Entry {
    u8 lo : 4;
    u8 hi : 4;
    u8 unk_01;
    u8 unk_02;
    u8 unk_03;
    u8 unk_04[0x20];
};

struct Unk_ov065_0226b488_Ctx {
    u8 pad000[0x300];
    Unk_ov065_0226b488_Entry unk_300[9];
    u8 unk_444[0x2c];
    Unk_ov065_0226b488_Rec unk_470[11];
    u32 unk_cb0;
    u32 unk_cb4;
    u8 unk_cb8[0x52];
    u8 padd0a;
    u8 unk_d0b_lo : 2;
    u8 unk_d0b_hi : 2;
    u8 unk_d0b_pad : 4;
    u8 unk_d0c_st : 4;
    u8 unk_d0c_mid : 2;
    u8 unk_d0c_mode : 2;
    u8 unk_d0d;
    u8 unk_d0e;
    u8 unk_d0f;
    u8 unk_d10;
    s8 unk_d11;
    u8 unk_d12;
    u8 unk_d13;
    u8 unk_d14;
    u8 unk_d15;
    u16 unk_d16;
};

struct Unk_ov065_0226cfe4_Buf {
    u8 b[24];
};

extern u8 data_ov065_0228b2a4[];
extern u8 data_ov065_0228b2ac[];
extern u8 data_ov065_0228b31c[];
extern u32 data_ov065_0228e9a4;
extern s8 *data_ov065_0228b68c;
extern s8 *data_ov065_0228b690;
extern s8 *data_ov065_0228b694;
extern s8 *data_ov065_0228b688;
extern u8 data_ov065_0228b374[];
extern u8 data_ov065_0228b384[];
extern u8 data_ov065_0228b6b8[];

extern "C" {
u8 *func_ov065_0226af74(u32 id);
s32 func_ov065_0226af18(void);
s32 func_ov065_02269c9c(void);
s32 func_ov065_0226aec8(u32 v);
void func_ov065_0226aed4(u32 v);
s32 func_ov065_0226aef8(s32 v);
s32 func_ov065_0226a33c(void *a, void *b);
s32 func_ov065_0226b78c(void *a);
void func_ov065_0226c160(void);
void func_ov065_0226c28c(void *a, void *b, s32 c, u32 d);
s32 func_ov065_0226c300(void *ctx, s32 v);
s32 func_ov065_0226c44c(void *ctx);
s32 func_ov065_0226c54c(void *ctx);
s32 func_ov065_0226c674(void *ctx);
s32 func_ov065_0226c700(void *ctx);
void func_ov065_022612fc(void *a, void *b);
s32 func_ov065_02261358(void);
s32 func_ov065_02261118(void *p);
s32 func_ov065_02261110(void);
s32 func_ov065_02260b68(void);
s32 func_ov065_0226ecd0(void);
u32 func_ov065_0226ec94(void);
s32 func_ov065_0226f7c8(void);
s32 func_ov065_0226f878(void);
s32 func_ov065_0226f924(void);
s64 func_01ffa6b4(void);
void func_02116048(void *src, void *dst, u32 n);
void func_0211ae74(void *ctx);
void func_0211ad80(void *ctx, void *p, u32 n);
void func_0211acbc(void *out, void *ctx);

s32 func_ov065_0226ce78(u32 c);
u32 func_ov065_0226c9f4(s32 n);
u32 func_ov065_0226ca3c(u8 *p);
s32 func_ov065_0226cd84(u8 *in, u8 *out, u32 len, u32 max);
s32 func_ov065_0226cb18(void);
s32 func_ov065_0226cb4c(Unk_ov065_0226b488_Ctx *c);
s32 func_ov065_0226cb64(Unk_ov065_0226b488_Ctx *c);
s32 func_ov065_0226cbc8(void);
s32 func_ov065_0226cbf0(Unk_ov065_0226b488_Ctx *c);
s32 func_ov065_0226cc80(Unk_ov065_0226b488_Ctx *c);
void func_ov065_0226ca88(u8 *a, Unk_ov065_0226b488_Ctx *b, u8 *c);
void func_ov065_0226c988(Unk_ov065_0226b488_Ctx *c);






















s32 func_ov065_0226cb18(void);
s32 func_ov065_0226cb4c(Unk_ov065_0226b488_Ctx *c);
s32 func_ov065_0226cb64(Unk_ov065_0226b488_Ctx *c);
s32 func_ov065_0226cbc8(void);
s32 func_ov065_0226cbf0(Unk_ov065_0226b488_Ctx *c);
s32 func_ov065_0226cc80(Unk_ov065_0226b488_Ctx *c);
s32 func_ov065_0226ccc8(void);
s32 func_ov065_0226cd84(u8 *in, u8 *out, u32 len, u32 max);
s32 func_ov065_0226ce78(u32 c);
void func_ov065_0226cec0(u8 *a, u8 *b);
void func_ov065_0226cfb0(u8 *a, u8 *b);
void func_ov065_0226cfe4(u8 *a, u8 *b);

void func_ov065_0226cfe4(u8 *a, u8 *b) {
    s32 i;
    Unk_ov065_0226cfe4_Buf t;
    t = *(Unk_ov065_0226cfe4_Buf *)data_ov065_0228b6b8;
    func_ov065_0226cd84(a, b, 0x20, 0x18);
    s32 j;
    for (j = 0; j < 0x18; j++) {
        b[j] ^= data_ov065_0228b694[j];
    }
    for (i = 0; i < 0x18; i++) {
        u32 j = (u8)i;
        u32 cur = j;
        u8 s = b[i];
        if (t.b[j] != 0xff) {
            do {
                u8 *slot = &t.b[cur];
                cur = t.b[cur];
                u8 nv = b[cur];
                b[t.b[j]] = s;
                j = cur;
                *slot = 0xff;
                s = nv;
            } while (t.b[cur] != 0xff);
        }
    }
    for (j = 0; j < 0x18; j++) {
        b[j] ^= data_ov065_0228b688[j];
    }
}

void func_ov065_0226cfb0(u8 *a, u8 *b) {
    u8 digest[0x14];
    u8 ctx[0x58];
    func_0211ae74(ctx);
    func_0211ad80(ctx, a, 0x18);
    func_0211acbc(digest, ctx);
    func_02116048(digest + 3, b, 13);
}

void func_ov065_0226cec0(u8 *a, u8 *b) {
    u8 tmp[13];
    s32 i;
    s32 j;
    for (i = 0; i < 13; i++) {
        b[i] = a[i] ^ a[13 + i % 7];
    }
    for (j = 0; j < 7; j++) {
        b[j + 3] ^= a[13 + j];
    }
    for (j = 0; j < 13; j++) {
        b[j] ^= data_ov065_0228b68c[j];
    }
    func_02116048(b, tmp, 13);
    {
        u8 *pt;
        u8 *pk;
        i = 0;
        pt = tmp;
        pk = (u8 *)data_ov065_0228b374;
        for (; i < 13; i++) {
            b[*pk] = *pt;
            pt++;
            pk++;
        }
    }
    for (j = 0; j < 13; j++) {
        b[j] ^= data_ov065_0228b690[j];
    }
    for (i = 0; i < 13; i++) {
        u8 v = b[i];
        b[i] = (data_ov065_0228b384[(v >> 4) & 15] << 4) | data_ov065_0228b384[v & 15];
    }
    for (i = 0; i < 3; i++) {
        b[i] ^= b[i + 6];
        b[i + 3] ^= b[i + 9];
        b[i + 6] ^= b[i + 3];
        b[i + 9] ^= b[i];
        b[12] ^= b[i];
    }
}

s32 func_ov065_0226ce78(u32 c) {
    if (c >= 0x41 && c <= 0x5a) {
        return c - 0x41;
    }
    if (c >= 0x61 && c <= 0x7a) {
        s32 r = c - 0x61;
        return r + 0x1a;
    }
    if (c >= 0x30 && c <= 0x39) {
        s32 r = c - 0x30;
        return r + 0x34;
    }
    if (c == 0x2b) {
        return 0x3e;
    }
    if (c == 0x2f) {
        return 0x3f;
    }
    s32 t;
    if (c == 0x3d) {
        t = 0;
    } else {
        t = 1;
    }
    return -t;
}

s32 func_ov065_0226cd84(u8 *in, u8 *out, u32 len, u32 max) {
    s32 rem;
    s32 full;
    u32 cnt;
    u32 n;
    n = (len * 3) >> 2;
    if (max >= n) {
        rem = len & 3;
        full = len - rem;
    } else {
        return -1;
    }
    s32 i = 0;
    if (full > 0) {
        cnt = 0;
        do {
            u32 v = 0;
            s32 j;
            for (j = 0; j < 4; j++) {
                v |= func_ov065_0226ce78(in[i + j]) << ((3 - j) * 6);
            }
            u32 tmp = v;
            s32 k = 0;
            s32 o = cnt * 3;
            for (; k < 3; k++) {
                out[o] = ((u8 *)&tmp)[2 - k];
                o++;
            }
            cnt++;
            i += 4;
        } while (i < full);
    }
    if (rem != 0) {
        u32 v = 0;
        u32 tmp = 0;
        s32 j;
        s32 k;
        for (j = 0; j < rem; j++) {
            v |= func_ov065_0226ce78(in[full + j]) << ((3 - j) * 6);
            tmp |= v;
        }
        k = 0;
        if (rem > 0) {
            s32 base = (full * 3) / 4;
            do {
                out[base] = ((u8 *)&tmp)[2 - k];
                base++;
                k++;
            } while (k < rem);
        }
    }
    return n;
}

s32 func_ov065_0226ccc8(void) {
    s32 a = func_ov065_0226af18();
    Unk_ov065_0226b488_Ctx *c = (Unk_ov065_0226b488_Ctx *)func_ov065_0226af74(0x10);
    if (func_ov065_02269c9c() == 9) {
        switch (a) {
        case 10:
            a = func_ov065_0226cc80(c);
            break;
        case 12:
            a = func_ov065_0226cbf0(c);
            break;
        case 13:
            a = func_ov065_0226cbc8();
            break;
        case 14:
            a = func_ov065_0226cb64(c);
            break;
        case 15:
            a = func_ov065_0226cb4c(c);
            break;
        case 11:
            a = func_ov065_0226cb18();
            break;
        }
    } else {
        switch (a) {
        case 0xf:
            a = func_ov065_0226cb4c(c);
            break;
        case 0xb:
            a = func_ov065_0226cb18();
            break;
        case 0xe:
            func_ov065_0226f7c8();
            func_ov065_0226f878();
        default:
            *((u8 *)c + c->unk_d13 * 4 + 0x444) = 2;
            a = 0xb;
            break;
        }
    }
    return a;
}

s32 func_ov065_0226cc80(Unk_ov065_0226b488_Ctx *c) {
    u8 *p = func_ov065_0226af74(1);
    u8 *q = func_ov065_0226af74(4);
    func_ov065_0226ca88(p, c, q);
    data_ov065_0228e9a4 = 4;
    if (func_ov065_02261118(q) != 0) {
        func_ov065_0226aef8(2);
        return 0x11;
    }
    return 0xc;
}

s32 func_ov065_0226cbf0(Unk_ov065_0226b488_Ctx *c) {
    if (func_ov065_02261358() != 0) {
        func_ov065_0226c988(c);
        if (c->unk_d0c_mid == 1) {
            return 0xf;
        }
        return 0xd;
    }
    s64 now = func_01ffa6b4();
    s64 d = now - *(s64 *)&c->unk_cb0;
    u64 r = (u64)((s64)((u64)d << 6) / 0x1ff6210LL);
    if (r >= 10) {
        *((u8 *)c + c->unk_d13 * 4 + 0x444) = 1;
        return 0xb;
    }
    return 0xc;
}

s32 func_ov065_0226cbc8(void) {
    func_ov065_0226af74(8);
    if (func_ov065_0226f924() != 0) {
        func_ov065_0226aef8(3);
        return 0x11;
    }
    return 0xe;
}

s32 func_ov065_0226cb64(Unk_ov065_0226b488_Ctx *c) {
    u8 *p = func_ov065_0226af74(1);
    s32 r = func_ov065_0226ecd0();
    if (r != 0) {
        s32 x = func_ov065_0226aec8(c->unk_d0d);
        if (p[0x15] == x) {
            *(u32 *)(p + 0x10) = func_ov065_0226ec94();
        }
        func_ov065_0226f878();
        if (r != 0xb) {
            *((u8 *)c + c->unk_d13 * 4 + 0x444) = 1;
            return 0xb;
        }
        return 0xf;
    }
    return 0xe;
}

s32 func_ov065_0226cb4c(Unk_ov065_0226b488_Ctx *c) {
    func_ov065_0226aed4(c->unk_d0d);
    return 0x10;
}

s32 func_ov065_0226cb18(void) {
    if (func_ov065_02260b68() != 0) {
        return 0xb;
    }
    s32 r = func_ov065_02261110();
    if (r == 0 || r == -0x27) {
        return 9;
    }
    return 0xb;
}

}
}
}  // namespace N_c750

