// mwcc-version: 1.2/sp2p3
// mwcc-flags: -O4,p
#include "types.h"

// SSL 3.0 record layer (MD5/SHA-1 MAC, key block derivation, Finished checks)

struct Unk_ov065_02265a5c_St {
    u8 *unk_00;
    u8 unk_04[2];
    u16 unk_06;
    u8 unk_08[0x20];
    u8 unk_28[0x20];
    u8 unk_48[0x48];
    u8 *unk_90;
    u8 *unk_94;
    u8 *unk_98;
    u8 unk_9c[0x104];
    u8 unk_1a0[8];
    u8 *unk_1a8;
    u8 *unk_1ac;
    u8 *unk_1b0;
    u8 unk_1b4[0x104];
    u8 unk_2b8[8];
    u8 unk_2c0[0x5c];
    u8 unk_31c[0x5c];
    u8 unk_378[0x58];
    u8 unk_3d0[0x58];
    u8 unk_428;
    u8 unk_429;
    u8 unk_42a;
    u8 unk_42b[0x7f0 - 0x42b];
    u32 unk_7f0;
    u32 unk_7f4;
    u8 *unk_7f8;
    u32 unk_7fc;
    u32 unk_800;
};

struct Unk_ov065_02265a5c_Sess {
    u8 unk_00[0xc];
    Unk_ov065_02265a5c_St *unk_0c;
};

typedef Unk_ov065_02265a5c_St St;
typedef Unk_ov065_02265a5c_Sess Sess;

extern "C" {
extern void *(*data_ov065_0228ebc8)(u32);
extern void (*data_ov065_0228ebd0)(void *);
extern u8 data_ov065_0228b494[];
extern u8 data_ov065_0228b49c[];

// main module
void *func_02115fb4(void *, s32, u32);
void *func_02116048(const void *, void *, u32);
s32 func_02128930(const void *, const void *, u32);

// same overlay, out of range
u8 *func_ov065_02262708(u32 *, Sess *);
void func_ov065_02262670(u32, Sess *);
void func_ov065_022667b0(St *, u8 *);
void func_ov065_022679f8(void *, const void *, u32);
void func_ov065_022679a4(void *, void *);
void func_ov065_02267a84(void *);
void func_ov065_02267480(void *, const void *, u32);
void func_ov065_0226742c(void *, void *);
void func_ov065_0226750c(void *);
void func_ov065_0226813c(void *, void *, u32);
void func_ov065_0226818c(void *, void *, u32);
void func_ov065_02266744(St *, u8 *);
void func_ov065_022668cc(St *, u8 *);
void func_ov065_02266948(St *, u8 *);
void func_ov065_022665d8(u8 *, u8 *, u32);
void func_ov065_0226650c(St *);

// in range
u8 func_ov065_02265a5c(Sess *);
void func_ov065_02265b9c(St *, u8 *);
s32 func_ov065_02265d5c(u8 *, s32, Sess *);
s32 func_ov065_02265dac(St *, u8 *);
s32 func_ov065_02265f38(St *, u8 *);
s32 func_ov065_022660dc(St *, u8 *, s32);
void func_ov065_022660f4(u8 *);
void func_ov065_02266110(St *, u8 *);
void func_ov065_022661c0(St *, u8 *, u32);
void func_ov065_02266264(St *, u8 *, u32);
void func_ov065_02266308(St *, u8 *);
void func_ov065_02266338(St *);

u8 func_ov065_02265a5c(Sess *s) {
    St *st = s->unk_0c;
    u32 len;
    u8 *p;
    u8 *buf;

    do {
        p = func_ov065_02262708(&len, s);
        if (len == 0) {
            st->unk_429 = 9;
            return 9;
        }
    } while (len < 5);

    if (p[0] == 0x80) {
        if (st->unk_428 != 0 && st->unk_429 == 0) {
            len = p[1];
            func_ov065_02262670(2, s);
            buf = (u8 *)data_ov065_0228ebc8(len);
            if (buf == 0) {
                st->unk_429 = 9;
                return 9;
            }
            if (func_ov065_02265d5c(buf, len, s) == 0 && buf[0] == 1) {
                func_ov065_022667b0(st, buf + 1);
            } else {
                st->unk_429 = 9;
            }
            func_ov065_022679f8(st->unk_2c0, buf, len);
            func_ov065_02267480(st->unk_378, buf, len);
            data_ov065_0228ebd0(buf);
        } else {
            st->unk_429 = 9;
        }
    } else {
        len = ((p[3] << 8) + p[4]) + 5;
        if (len > 0x4805) {
            st->unk_429 = 9;
            return 9;
        }
        buf = (u8 *)data_ov065_0228ebc8(len);
        if (buf == 0) {
            st->unk_429 = 9;
            return 9;
        }
        if (func_ov065_02265d5c(buf, len, s) != 0) {
            data_ov065_0228ebd0(buf);
            st->unk_429 = 9;
            return 9;
        }
        func_ov065_02265b9c(st, buf);
    }
    return st->unk_429;
}

void func_ov065_02265b9c(St *st, u8 *buf) {
    u32 len;
    u32 type;
    u8 *p;
    s32 h;
    u32 n;
    u32 n4;

    if (st->unk_429 == 9) {
        data_ov065_0228ebd0(buf);
        return;
    }
    type = buf[0];
    len = (buf[3] << 8) + buf[4] + 5;
    if ((((u8)(st->unk_429 + 0xf9) <= 1) && type != 0x15) || (type == 0x15 && len > 7)) {
        len = func_ov065_02265f38(st, buf);
    }
    p = buf + 5;
    len -= 5;
    switch (type - 0x14) {
    case 0:
        func_02115fb4(st->unk_2b8, 0, 8);
        st->unk_429 = 7;
        break;
    case 1:
        if (p[0] == 2) {
            st->unk_429 = 9;
        }
        break;
    case 2:
        do {
            h = p[0];
            n = p[3] + ((p[1] << 16) + (p[2] << 8));
            p += 4;
            switch (h) {
            case 1:
                if (st->unk_428 != 0 && st->unk_429 == 0) {
                    func_ov065_02266744(st, p);
                }
                break;
            case 2:
                func_ov065_022668cc(st, p);
                break;
            case 0xb:
                func_ov065_02266948(st, p);
                break;
            case 0xe:
                st->unk_429 = 4;
                break;
            case 0x14:
                func_ov065_02266110(st, p);
                break;
            case 0x10:
                func_ov065_02266308(st, p);
                break;
            default:
                st->unk_429 = 9;
                break;
            }
            n4 = n + 4;
            func_ov065_022679f8(st->unk_2c0, p - 4, n4);
            func_ov065_02267480(st->unk_378, p - 4, n4);
            p += n;
            len -= n4;
            if (len == 0) {
                break;
            }
        } while (st->unk_429 != 9);
        break;
    case 3:
        st->unk_7f8 = buf;
        st->unk_800 = 5;
        st->unk_7fc = len + 5;
        st->unk_42a = 1;
        return;
    default:
        st->unk_429 = 9;
        break;
    }
    data_ov065_0228ebd0(buf);
}

s32 func_ov065_02265d5c(u8 *dst, s32 n, Sess *s) {
    u32 len;
    u8 *p;
    do {
        p = func_ov065_02262708(&len, s);
        if (len == 0) {
            return -1;
        }
        if (len > (u32)n) {
            len = n;
        }
        func_02116048(p, dst, len);
        func_ov065_02262670(len, s);
        dst += len;
        n -= len;
    } while (n > 0);
    return 0;
}

s32 func_ov065_02265dac(St *st, u8 *buf) {
    u8 *mac = 0;
    u8 pad[0x30];
    s32 len;
    void *ctx;

    len = (buf[3] << 8) + buf[4];
    mac = buf + 5 + len;
    switch (st->unk_06) {
    case 4:
        ctx = st->unk_3d0;
        func_ov065_0226750c(ctx);
        func_ov065_02267480(ctx, st->unk_90, 0x10);
        func_02115fb4(pad, 0x36, 0x30);
        func_ov065_02267480(ctx, pad, 0x30);
        func_ov065_02267480(ctx, st->unk_1a0, 8);
        func_ov065_02267480(ctx, buf, 1);
        func_ov065_02267480(ctx, buf + 3, 2);
        func_ov065_02267480(ctx, buf + 5, len);
        func_ov065_0226742c(ctx, mac);
        func_ov065_0226750c(ctx);
        func_ov065_02267480(ctx, st->unk_90, 0x10);
        func_02115fb4(pad, 0x5c, 0x30);
        func_ov065_02267480(ctx, pad, 0x30);
        func_ov065_02267480(ctx, mac, 0x10);
        func_ov065_0226742c(ctx, mac);
        len += 0x10;
        break;
    case 5:
        ctx = st->unk_31c;
        func_ov065_02267a84(ctx);
        func_ov065_022679f8(ctx, st->unk_90, 0x14);
        func_02115fb4(pad, 0x36, 0x28);
        func_ov065_022679f8(ctx, pad, 0x28);
        func_ov065_022679f8(ctx, st->unk_1a0, 8);
        func_ov065_022679f8(ctx, buf, 1);
        func_ov065_022679f8(ctx, buf + 3, 2);
        func_ov065_022679f8(ctx, buf + 5, len);
        func_ov065_022679a4(ctx, mac);
        func_ov065_02267a84(ctx);
        func_ov065_022679f8(ctx, st->unk_90, 0x14);
        func_02115fb4(pad, 0x5c, 0x28);
        func_ov065_022679f8(ctx, pad, 0x28);
        func_ov065_022679f8(ctx, mac, 0x14);
        func_ov065_022679a4(ctx, mac);
        len += 0x14;
        break;
    }
    buf[3] = len >> 8;
    buf[4] = len;
    func_ov065_0226813c(st->unk_9c, buf + 5, len);
    func_ov065_022660f4(st->unk_1a0 + 8);
    return len + 5;
}

s32 func_ov065_02265f38(St *st, u8 *buf) {
    u8 digest[0x14];
    u8 pad[0x30];
    s32 len;
    s32 n;
    void *ctx;

    len = func_ov065_022660dc(st, buf + 5, (buf[3] << 8) + buf[4]);
    switch (st->unk_06) {
    case 4:
        len -= 0x10;
        buf[3] = len >> 8;
        buf[4] = len;
        ctx = st->unk_3d0;
        func_ov065_0226750c(ctx);
        func_ov065_02267480(ctx, st->unk_1a8, 0x10);
        func_02115fb4(pad, 0x36, 0x30);
        func_ov065_02267480(ctx, pad, 0x30);
        func_ov065_02267480(ctx, st->unk_2b8, 8);
        func_ov065_02267480(ctx, buf, 1);
        func_ov065_02267480(ctx, buf + 3, 2);
        func_ov065_02267480(ctx, buf + 5, len);
        func_ov065_0226742c(ctx, digest);
        func_ov065_0226750c(ctx);
        func_ov065_02267480(ctx, st->unk_1a8, 0x10);
        func_02115fb4(pad, 0x5c, 0x30);
        func_ov065_02267480(ctx, pad, 0x30);
        func_ov065_02267480(ctx, digest, 0x10);
        func_ov065_0226742c(ctx, digest);
        n = 0x10;
        break;
    case 5:
        len -= 0x14;
        buf[3] = len >> 8;
        buf[4] = len;
        ctx = st->unk_31c;
        func_ov065_02267a84(ctx);
        func_ov065_022679f8(ctx, st->unk_1a8, 0x14);
        func_02115fb4(pad, 0x36, 0x28);
        func_ov065_022679f8(ctx, pad, 0x28);
        func_ov065_022679f8(ctx, st->unk_2b8, 8);
        func_ov065_022679f8(ctx, buf, 1);
        func_ov065_022679f8(ctx, buf + 3, 2);
        func_ov065_022679f8(ctx, buf + 5, len);
        func_ov065_022679a4(ctx, digest);
        func_ov065_02267a84(ctx);
        func_ov065_022679f8(ctx, st->unk_1a8, 0x14);
        func_02115fb4(pad, 0x5c, 0x28);
        func_ov065_022679f8(ctx, pad, 0x28);
        func_ov065_022679f8(ctx, digest, 0x14);
        func_ov065_022679a4(ctx, digest);
        n = 0x14;
        break;
    }
    if (func_02128930(buf + 5 + len, digest, n) != 0) {
        st->unk_429 = 9;
    }
    func_ov065_022660f4(st->unk_2b8 + 8);
    return len + 5;
}

s32 func_ov065_022660dc(St *st, u8 *buf, s32 len) {
    func_ov065_0226813c(st->unk_1b4, buf, len);
    return len;
}

void func_ov065_022660f4(u8 *p) {
    s32 i = 8;
    do {
        u32 v;
        p--;
        v = (u8)(*p + 1);
        *p = v;
        if (v != 0) {
            return;
        }
        i--;
    } while (i != 0);
}

void func_ov065_02266110(St *st, u8 *in) {
    u8 out[0x14];

    func_02116048(st->unk_378, st->unk_3d0, 0x58);
    func_ov065_02266264(st, out, 1);
    func_02116048(st->unk_3d0, st->unk_378, 0x58);
    if (func_02128930(in, out, 0x10) != 0) {
        st->unk_429 = 9;
        return;
    }
    func_02116048(st->unk_2c0, st->unk_31c, 0x5c);
    func_ov065_022661c0(st, out, 1);
    func_02116048(st->unk_31c, st->unk_2c0, 0x5c);
    if (func_02128930(in + 0x10, out, 0x14) != 0) {
        st->unk_429 = 9;
        return;
    }
    st->unk_429 = 6;
}

void func_ov065_022661c0(St *st, u8 *out, u32 who) {
    u8 pad[0x28];
    u8 *ctx = st->unk_2c0;

    if ((st->unk_428 ^ who) != 0) {
        func_ov065_022679f8(ctx, data_ov065_0228b494, 4);
    } else {
        func_ov065_022679f8(ctx, data_ov065_0228b49c, 4);
    }
    func_ov065_022679f8(ctx, st->unk_00 + 0x20, 0x30);
    func_02115fb4(pad, 0x36, 0x28);
    func_ov065_022679f8(ctx, pad, 0x28);
    func_ov065_022679a4(ctx, out);
    func_ov065_02267a84(ctx);
    func_ov065_022679f8(ctx, st->unk_00 + 0x20, 0x30);
    func_02115fb4(pad, 0x5c, 0x28);
    func_ov065_022679f8(ctx, pad, 0x28);
    func_ov065_022679f8(ctx, out, 0x14);
    func_ov065_022679a4(ctx, out);
}

void func_ov065_02266264(St *st, u8 *out, u32 who) {
    u8 pad[0x30];
    u8 *ctx = st->unk_378;

    if ((st->unk_428 ^ who) != 0) {
        func_ov065_02267480(ctx, data_ov065_0228b494, 4);
    } else {
        func_ov065_02267480(ctx, data_ov065_0228b49c, 4);
    }
    func_ov065_02267480(ctx, st->unk_00 + 0x20, 0x30);
    func_02115fb4(pad, 0x36, 0x30);
    func_ov065_02267480(ctx, pad, 0x30);
    func_ov065_0226742c(ctx, out);
    func_ov065_0226750c(ctx);
    func_ov065_02267480(ctx, st->unk_00 + 0x20, 0x30);
    func_02115fb4(pad, 0x5c, 0x30);
    func_ov065_02267480(ctx, pad, 0x30);
    func_ov065_02267480(ctx, out, 0x10);
    func_ov065_0226742c(ctx, out);
}

void func_ov065_02266308(St *st, u8 *p) {
    func_ov065_022665d8(st->unk_00 + 0x20, p, st->unk_7f0);
    func_ov065_0226650c(st);
    func_ov065_02266338(st);
    st->unk_429 = 5;
}

void func_ov065_02266338(St *st) {
    s32 a, b, c;
    s32 total;
    s32 i;
    s32 off;
    u8 tmp[0x1c];

    switch (st->unk_06) {
    case 4:
        a = 0x10;
        b = 0x10;
        c = 0;
        break;
    case 5:
        a = 0x14;
        b = 0x10;
        c = 0;
        break;
    }
    total = (a + b + c) * 2;
    i = 0;
    if (total > 0) {
        s32 off = 0;
        do {
            s32 j;
            void *ctx = st->unk_31c;
            func_ov065_02267a84(ctx);
            tmp[0] = 0x41 + i;
            j = 0;
            while (j < i + 1) {
                func_ov065_022679f8(ctx, tmp, 1);
                j++;
            }
            func_ov065_022679f8(ctx, st->unk_00 + 0x20, 0x30);
            func_ov065_022679f8(ctx, st->unk_28, 0x20);
            func_ov065_022679f8(ctx, st->unk_08, 0x20);
            func_ov065_022679a4(ctx, tmp + 1);
            ctx = st->unk_3d0;
            func_ov065_0226750c(ctx);
            func_ov065_02267480(ctx, st->unk_00 + 0x20, 0x30);
            func_ov065_02267480(ctx, tmp + 1, 0x14);
            func_ov065_0226742c(ctx, st->unk_48 + off);
            off += 0x10;
            i++;
        } while (off < total);
    }
    if (st->unk_428 != 0) {
        st->unk_1a8 = st->unk_48;
        st->unk_1ac = st->unk_1a8 + a * 2;
        st->unk_1b0 = st->unk_1ac + b * 2;
        st->unk_90 = st->unk_48 + a;
        st->unk_94 = st->unk_90 + a + b;
        st->unk_98 = st->unk_94 + b + c;
    } else {
        st->unk_90 = st->unk_48;
        st->unk_94 = st->unk_90 + a * 2;
        st->unk_98 = st->unk_94 + b * 2;
        st->unk_1a8 = st->unk_48 + a;
        st->unk_1ac = st->unk_1a8 + a + b;
        st->unk_1b0 = st->unk_1ac + b + c;
    }
    func_ov065_0226818c(st->unk_1b4, st->unk_1ac, 0x10);
    func_ov065_0226818c(st->unk_9c, st->unk_94, 0x10);
}

}
