// mwcc-flags: -O4,p
#include "types.h"

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

void func_ov065_0226c750(u32 r) {
    Unk_ov065_0226b488_Ctx *c = (Unk_ov065_0226b488_Ctx *)func_ov065_0226af74(0x10);
    u8 *cb = (u8 *)c;
    switch (r) {
    case 3: {
        s64 t = func_01ffa6b4();
        *(s64 *)&c->unk_cb0 = t;
        func_ov065_0226c28c(data_ov065_0228b2a4, data_ov065_0228b2ac, c->unk_d11, 0x200000);
        break;
    }
    case 4: {
        s64 t = func_01ffa6b4();
        *(s64 *)&c->unk_cb0 = t;
        u32 idx = c->unk_d0f * 0x24;
        u8 *q = cb + idx;
        func_ov065_0226c28c(data_ov065_0228b2a4, cb + 0x304 + idx, q[0x302], 0x300000);
        break;
    }
    case 5: {
        s64 t = func_01ffa6b4();
        *(s64 *)&c->unk_cb0 = t;
        u32 idx = c->unk_d0f * 0x24;
        func_ov065_0226c28c(data_ov065_0228b2a4, cb + 0x304 + idx, c->unk_d11, 0x300000);
        break;
    }
    }
}

s32 func_ov065_0226c81c(u32 n) {
    Unk_ov065_0226b488_Ctx *c = (Unk_ov065_0226b488_Ctx *)func_ov065_0226af74(0x10);
    u8 i;
    u8 cnt;
    u32 m;
    m = c->unk_d16;
    if (m == 0) {
        return -1;
    }
    i = 0;
    cnt = i;
    do {
        if (m & (1 << i)) {
            if (cnt == n) {
                return (s8)i;
            }
            cnt++;
        }
        i++;
    } while (i < 0xd);
    return -1;
}

void func_ov065_0226c878(u32 v) {
    Unk_ov065_0226b488_Ctx *c = (Unk_ov065_0226b488_Ctx *)func_ov065_0226af74(0x10);
    if (v > 0xd) {
        v = 0xd;
    }
    c->unk_d16 |= 1 << (v - 1);
}

s32 func_ov065_0226c8a4(void) {
    Unk_ov065_0226b488_Ctx *c = (Unk_ov065_0226b488_Ctx *)func_ov065_0226af74(0x10);
    s32 a = func_ov065_0226af18();
    s32 b = func_ov065_02269c9c();
    if (a == 2 && b == 3) {
        a = func_ov065_0226c700(c);
    } else if (a == 6) {
        a = func_ov065_0226c300(c, a);
    } else if (b == 3 || b == 6) {
        a = func_ov065_0226c300(c, a);
        if (a != 7) {
            if (a == 3) {
                a = func_ov065_0226c674(c);
            } else if (a == 4) {
                a = func_ov065_0226c54c(c);
            } else if (a == 5) {
                a = func_ov065_0226c44c(c);
            }
        }
    }
    return a;
}

s32 func_ov065_0226c924(void) {
    s32 a = func_ov065_02269c9c();
    Unk_ov065_0226b488_Ctx *c = (Unk_ov065_0226b488_Ctx *)func_ov065_0226af74(0x10);
    if (a == 1) {
        u32 buf[4];
        buf[0] = *((u8 *)c + 0xd0a);
        buf[1] = 0;
        buf[2] = 0;
        buf[3] = 0;
        func_ov065_0226c160();
        s32 r = func_ov065_0226a33c(buf, (void *)func_ov065_0226b78c);
        if (r == 1 || r >= 4) {
            func_ov065_0226aef8(1);
            return 0x11;
        }
    } else {
        return 1;
    }
    return 2;
}

void func_ov065_0226c988(Unk_ov065_0226b488_Ctx *c) {
    u32 buf[2];
    if (c->unk_d0d < 6) {
        u8 *q = (u8 *)c + (func_ov065_0226aec8(c->unk_d0d) << 8);
        u32 sum = q[0xcb] + (q[0xca] + (q[0xc8] + q[0xc9]));
        if (q[0xc0] == 0 && sum != 0) {
            buf[0] = func_ov065_0226ca3c(q + 0xc8);
            buf[1] = func_ov065_0226ca3c(q + 0xcc);
            func_ov065_022612fc(&buf[0], &buf[1]);
        }
    }
}

u32 func_ov065_0226c9f4(s32 n) {
    n = 0x20 - n;
    s32 i = 0;
    u32 x = -1;
    for (; i < n; i++) {
        x <<= 1;
    }
    return ((x << 24) & 0xff000000) | (((x << 8) & 0xff0000) | (((x >> 24) & 0xff) | ((x >> 8) & 0xff00)));
}

u32 func_ov065_0226ca3c(u8 *p) {
    u32 x = 0;
    x |= p[0] << 24;
    x |= p[1] << 16;
    x |= p[2] << 8;
    x |= p[3];
    return ((x << 24) & 0xff000000) | (((x << 8) & 0xff0000) | (((x >> 24) & 0xff) | ((x >> 8) & 0xff00)));
}

void func_ov065_0226ca88(u8 *a, Unk_ov065_0226b488_Ctx *b, u8 *c) {
    u32 *o = (u32 *)c;
    func_02116048(data_ov065_0228b31c, c, 0x58);
    o[1] = ((u32 *)a)[0];
    o[2] = ((u32 *)a)[1];
    if (b->unk_d0d < 6) {
        u8 *q = (u8 *)b + (func_ov065_0226aec8(b->unk_d0d) << 8);
        if (q[0xc0] != 0) {
            o[3] = 0;
            o[4] = func_ov065_0226ca3c(q + 0xc0);
            o[5] = func_ov065_0226c9f4(q[0xd0]);
            o[6] = func_ov065_0226ca3c(q + 0xc4);
            o[7] = func_ov065_0226ca3c(q + 0xc8);
            o[8] = func_ov065_0226ca3c(q + 0xcc);
        } else {
            o[3] = 1;
            o[4] = 0;
            o[5] = 0;
            o[6] = 0;
            o[7] = 0;
            o[8] = 0;
        }
    }
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

s32 func_ov065_0226cb4c(Unk_ov065_0226b488_Ctx *c) {
    func_ov065_0226aed4(c->unk_d0d);
    return 0x10;
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

s32 func_ov065_0226cbc8(void) {
    func_ov065_0226af74(8);
    if (func_ov065_0226f924() != 0) {
        func_ov065_0226aef8(3);
        return 0x11;
    }
    return 0xe;
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
    u64 r = ((u64)d << 6) / 0x1ff6210ULL;
    if (r >= 10) {
        *((u8 *)c + c->unk_d13 * 4 + 0x444) = 1;
        return 0xb;
    }
    return 0xc;
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
        if (rem > 0) {
            s32 base = (full * 3) / 4;
            for (k = 0; k < rem; k++) {
                out[base + k] = ((u8 *)&tmp)[2 - k];
            }
        }
    }
    return n;
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
    for (i = 0; i < 13; i++) {
        b[data_ov065_0228b374[i]] = tmp[i];
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

void func_ov065_0226cfb0(u8 *a, u8 *b) {
    u8 digest[0x14];
    u8 ctx[0x58];
    func_0211ae74(ctx);
    func_0211ad80(ctx, a, 0x18);
    func_0211acbc(digest, ctx);
    func_02116048(digest + 3, b, 13);
}

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
}
