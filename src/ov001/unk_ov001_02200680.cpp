// mwcc-flags: -O4,p -str reuse
#include "types.h"

struct Unk_ov001_022006e0_Rng {
    u32 seed;
    u32 mul;
    u32 add;
};

struct Unk_ov001_022008d4_Cfg {
    u32 unk_00;
    s32 (*unk_04)(s32, s32);
    s32 (*unk_08)(s32, s32);
    u32 pad_0c;
    u32 unk_10;
    u32 unk_14;
    u32 unk_18;
    u8 pad_1c[8];
    u32 unk_24;
    u32 unk_28;
    u8 pad_2c[0x2c];
};

struct Unk_ov001_02200d58_Sess {
    u8 *unk_00;
    s32 unk_04;
    u32 unk_08;
    u32 unk_0c;
    u32 unk_10;
    u32 unk_14;
    s8 unk_18;
    s8 unk_19;
};

struct Unk_ov001_02200b5c_Rc4 {
    u32 i;
    u32 j;
    u8 *s;
    u32 n;
};

struct Unk_ov001_02201d7c_Src {
    u8 pad_00[4];
    s32 len;
    u8 unk_08[0x28];
    u8 unk_30[0x40];
    u8 unk_70[0x40];
    u8 unk_b0[0x40];
    u8 unk_f0[0x40];
};

struct Unk_ov001_02202b3c_Cfg {
    u32 unk_00;
    u16 unk_04;
    u8 unk_06[0x100];
    s16 unk_106;
    s16 unk_108;
    s16 unk_10a;
    s16 unk_10c;
    s16 unk_10e;
    u8 pad_110[6];
    u8 unk_116;
};

struct Unk_ov001_02200680_S;
struct Unk_ov001_022007fc_P;
struct Unk_ov001_02201cd0_Hdr;

extern "C" s32 func_ov001_02200950(s32 a, s32 b);
extern "C" s32 func_ov001_02200938(s32 a, s32 b);

// EXTERNS
extern "C" Unk_ov001_022006e0_Rng data_ov001_0222b8e0;
extern "C" Unk_ov001_022008d4_Cfg data_ov001_0222a490;
extern "C" Unk_ov001_02200d58_Sess data_ov001_0222b8ec;
extern "C" s16 data_ov001_0222a488[2];
extern "C" s32 data_ov001_0222a484;
extern "C" s32 data_ov001_0222a48c;
extern "C" s32 data_ov001_0222b8c0;
extern "C" s32 data_ov001_0222b8d0;
extern "C" u32 data_ov001_0222b8c8;
extern "C" u32 data_ov001_0222bbec[0x100];
extern "C" u8 *data_ov001_0222b8d4;
extern "C" u8 data_ov001_0222a480[4];
extern "C" u8 data_ov001_0222b8d8[8];
extern "C" u8 data_ov001_0222b908[0x64];
extern "C" u8 data_ov001_0222b96c[0x280];
extern "C" u8 data_ov001_0222bfec[0x6a0];
extern "C" void *data_ov001_0222b8c4;
extern "C" void *data_ov001_0222b8cc;

#define FAIL(c) { o[0x116] = (c); func_ov001_02201ff8(); return -1; }
#define data_ov001_0222b90a (data_ov001_0222b908 + 2)
#define data_ov001_0222bff4 (*(Unk_ov001_02201d7c_Src *)(data_ov001_0222bfec + 0x8))
#define data_ov001_0222c124 (*(Unk_ov001_02201d7c_Src *)(data_ov001_0222bfec + 0x138))
#define data_ov001_0222c254 (*(Unk_ov001_02201d7c_Src *)(data_ov001_0222bfec + 0x268))
#define data_ov001_0222c2c4 (*(Unk_ov001_02201d7c_Src *)(data_ov001_0222bfec + 0x2d8))
#define data_ov001_0222a4e8 ((u8 *)"MELCO")
#define data_ov001_0222a4f0 ((u8 *)"ESSID-AOSS")

extern "C" {
extern u32 data_ov065_0228ebd8;
extern s32 (*data_ov001_0222c698)(s32);
extern s32 (*data_ov001_0222c68c)(s32);

void func_ov001_02200680(u32 v, Unk_ov001_02200680_S *s);
void func_ov001_02200688(Unk_ov001_02200680_S *s);
u16 func_ov001_02200694(void);
s32 func_ov001_02200710(char *s);
s32 func_ov001_02200724(s32 v);
u32 func_ov001_0220073c(u32 v);
u16 func_ov001_02200774(s32 v);
u32 func_ov001_0220078c(u32 v);
s32 func_ov001_022007c4(s32 s);
s32 func_ov001_022007cc(s32 a, u8 *b, s32 c);
s32 func_ov001_022007d8(s32 a, s32 b, s32 c);
s32 func_ov001_022007e0(s32 s, s32 l, s32 o, void *v, s32 n);
s32 func_ov001_022007e4(s32 a, s32 b, s32 c, s32 d, u8 *p, u32 v);
s32 func_ov001_022007fc(s32 a, Unk_ov001_022007fc_P *p, s32 c, s32 d, s32 *q);
s32 func_ov001_02200848(s32 a, s32 b, s32 c, s32 d, u8 *p, s32 *q);
void *func_ov001_02200864(void *p, u32 v, u32 n);
void func_ov001_02200870(void *dst, void *src, u32 n);
s32 func_ov001_02200880(u8 *a, u8 *b, s32 n);
s32 func_ov001_022008a8();
s32 func_ov001_022008d4(u32 a, u32 b, u32 c);
s32 func_ov001_02200938(s32 a, s32 b);
s32 func_ov001_02200950(s32 a, s32 b);
void func_ov001_02200974(u8 *a, s32 n, u8 *t);
void func_ov001_022009b0(char *a, u8 *b, s32 n);
void func_ov001_022009dc(s32 x, char *b, s32 n, char *key, s32 klen);
s32 func_ov001_02200a28(u8 *out, s32 n, u8 *key, s32 klen);
void func_ov001_02200ab4(u32 unused, u32 *t);
u32 func_ov001_02200af0(u32 crc, u8 *data, s32 len, s32 init, u32 *tbl);
u8 func_ov001_02200b30(u8 *data, s32 len);
u32 func_ov001_02200b5c(Unk_ov001_02200b5c_Rc4 *st);
void func_ov001_02200ba4(Unk_ov001_02200b5c_Rc4 *st, u8 *out, u8 *in, u32 n);
void func_ov001_02200bd4(Unk_ov001_02200b5c_Rc4 *st, u8 *key, u32 klen, u32 n);
s32 func_ov001_02200c40(u8 *a, u8 *b, u32 n, u32 crc, u8 *x, u8 *y, s32 z);
s32 func_ov001_02200cd4(u8 *a, u8 *b, u32 n, u8 *out, u8 *x, u8 *y, s32 z);
s32 func_ov001_02200d58(s32 a, s32 b, s32 n, s32 c);
void func_ov001_02200dc0(u16 *out, u32 x, u32 y, u32 z, s8 a5, s8 a6, u8 *in);
void func_ov001_02200e20(s32 mode, u8 *out, u8 *in, s16 *len, u16 *flag, u8 *crcout);
s32 func_ov001_02200e7c(u8 *out);
s32 func_ov001_02200f08(s32 a, u8 *b, s32 c);
s32 func_ov001_02200f78(s32 a, u8 *b, s32 c);
s32 func_ov001_0220106c(s32 unused, u8 *src, s32 arg);
s32 func_ov001_022011c4(s32 sel, s32 a, s32 b, s32 c);
BOOL func_ov001_02201228(u32 x);
s32 func_ov001_02201238(s32 idx, u8 *p, s32 len, u8 *base, u8 *extra);
s32 func_ov001_0220135c(u8 *p, void *dst);
s32 func_ov001_022013a0(u8 *p, u8 *dst);
s32 func_ov001_02201470(u8 *p, u8 *dst);
u32 func_ov001_022015d4(u8 *p, s32 n);
s32 func_ov001_022015f8(u8 *p, u8 *dst);
s32 func_ov001_022016d0(u8 *a, u8 *b);
s32 func_ov001_02201724(s32 a, u8 *b);
s32 func_ov001_0220176c(u8 *p);
s32 func_ov001_0220187c(s32 mode, u8 *q, s32 *cnt, u8 *r3);
s32 func_ov001_02201940(s32 mode, u8 *q, s32 *cnt, u8 *r3);
s32 func_ov001_02201a48(s32 a, u8 *b, s32 *cnt, void *c);
s32 func_ov001_02201b58(s32 a, u8 *b, s32 *cnt, void *c, s32 sock);
s32 func_ov001_02201c14(s32 x);
void func_ov001_02201c4c(s32 n, u8 *p, void *x);
s32 func_ov001_02201c84(u32 *p);
s32 func_ov001_02201cd0(Unk_ov001_02201cd0_Hdr *p);
s32 func_ov001_02201d58(u8 *s, s32 n);
s32 func_ov001_02201d7c(u8 *o);
s32 func_ov001_02201f8c();
s32 func_ov001_02201f98(s32 v);
void func_ov001_02201fa4(u8 *p);
void func_ov001_02201ff8();
u32 func_ov001_02202030(u32 a, u32 b);
s32 func_ov001_02202050(u8 *o);
s32 func_ov001_02202b3c(Unk_ov001_02202b3c_Cfg *a);
s32 func_0211d2e0(void *p);
s32 func_ov065_0226148c();
s32 func_ov065_022615f0();
s32 func_ov065_02261610();
s32 func_ov065_0226149c(s32, s32, s32, s32, u8 *);
s32 func_ov065_02260fa4(void *, s32, s64);
s32 func_ov065_02261524(s32, s32, s32, s32, u8 *);
s32 func_ov065_02261110();
s32 func_ov065_02261118(void *);
s32 func_ov001_02203004();
void *func_02115fb4(void *, s32, u32);
void *func_02116048(void *, void *, u32);
void func_021132e0(s32);
void *func_ov001_02202c58(s32 n);
void func_ov001_02202c44(void *p);
s32 func_ov001_02202c6c(s32 a);
s32 func_ov001_02202e74(void *pp);
void func_ov001_02202c88(s32 ms);
s32 func_ov001_02202c90(void *cmd, void *p);
}

struct Unk_ov001_02201cd0_Ent {
    s32 len;
    u8 name[0x4c];
    u32 flag;
};

struct Unk_ov001_02201cd0_Hdr {
    s32 count;
    Unk_ov001_02201cd0_Ent e[64];
};

struct Unk_ov001_02202050_Buf {
    s32 sock;
    s32 unk_04;
    u8 unk_08[4];
    u8 unk_0c[0x5ec];
};

struct Unk_ov001_02202050_Retry {
    s16 v[2];
};

struct Unk_ov001_02202050_Addr {
    u8 len;
    u8 family;
    u16 port;
    u32 addr;
};

struct Unk_ov001_0220187c_Hdr {
    u8 pad[0x10];
    u8 mac[8];
};

struct Unk_ov001_02200680_S {
    u32 a;
    u16 b;
    u16 c;
};

struct Unk_ov001_022007fc_P {
    s32 a;
    s32 b;
};

struct Unk_ov001_02200d58_Sock {
    u8 len;
    u8 family;
    u16 port;
    u32 addr;
};

struct Unk_ov001_02200f78_L {
    s8 a;
    s16 b;
    s16 c;
    u8 dat[8];
    Unk_ov001_02200d58_Sock sa;
};

extern "C" s32 func_ov001_02202b3c(Unk_ov001_02202b3c_Cfg *a) {
    s32 r;
    if (a->unk_106 == 0 || a->unk_106 < -1 || a->unk_108 < -1 || a->unk_10a == 0 || a->unk_10a < -1
        || a->unk_10c < -1 || a->unk_10e < -1 || a->unk_04 == 0 || a->unk_04 > 0x100
        || a->unk_06[a->unk_04 - 1] != 0) {
        r = -1;
    } else {
        r = 0;
    }
    if (data_ov001_0222c68c == 0 || data_ov001_0222c698 == 0) {
        r = -1;
    }
    if (r == -1) {
        a->unk_116 = 0xf;
        func_ov001_02201ff8();
        return -1;
    }
    data_ov001_0222b8d4 = (u8 *)func_ov001_02202c58(0x5f8);
    if (data_ov001_0222b8d4 == 0) {
        a->unk_116 = 0xf;
        func_ov001_02201ff8();
        return -1;
    }
    func_ov001_02201c14(-1);
    s32 res = func_ov001_02202050((u8 *)a);
    func_ov001_02202c44(data_ov001_0222b8d4);
    func_ov001_02201ff8();
    s32 t = data_ov001_0222a484;
    if (t != -1) {
        func_ov001_022007c4(t);
    }
    return res;
}

extern "C" s32 func_ov001_02202050(u8 *o)
{
    s32 usec;
    s32 t;
    s32 state;
    s32 res;
    s32 ip;
    Unk_ov001_02202050_Buf *buf;
    s32 sec;
    s32 m1;
    s32 res2;
    s32 r;
    s32 i;
    s32 ret;
    s32 sl;
    s32 z;
    u32 a;

    volatile Unk_ov001_02202050_Retry v01 = *(Unk_ov001_02202050_Retry *)data_ov001_0222a488;
    volatile Unk_ov001_02202050_Retry v23 = { 0, 0 };
    state = 0;
    s32 opt = 1;
    s32 tries = state;
    s32 sa40[2];
    s32 len48;
    s32 fdset[2];
    s32 tv[2];
    Unk_ov001_02202050_Addr sa5c;
    u8 st64[0x18];
    u8 cmd7c[0x3c];
    s32 pkt[5];
    ip = state;
    func_ov001_02200864(st64, state, 0x18);
    v01.v[0] = *(s16 *)(o + 0x106);
    if (v01.v[0] == -1) {
        v01.v[0] = 10;
    }
    v23.v[0] = *(s16 *)(o + 0x10a);
    if (v23.v[0] == -1) {
        v23.v[0] = 10;
    }
    v01.v[1] = *(s16 *)(o + 0x108);
    if (v01.v[1] == -1) {
        v01.v[1] = 100;
    }
    v23.v[1] = *(s16 *)(o + 0x10c);
    if (v23.v[1] == -1) {
        v23.v[1] = 100;
    }
    t = *(s16 *)(o + 0x10e);
    if (t == -1) {
        t = 0x7d0;
    }
    func_ov001_02201fa4(o);
    if ((data_ov001_0222b8ec.unk_08 & 1) != 1) {
        func_ov001_02201f98(0x13);
        FAIL(0xf);
    }
    i = 0;
    func_ov001_02201c14(i);
    sl = v01.v[1];
    z = i;
    for (;;) {
        if (data_ov001_0222b8c4 != 0) {
            func_ov001_02202c44(data_ov001_0222b8c4);
            data_ov001_0222b8c4 = (void *)z;
        }
        if (func_ov001_02202e74(&data_ov001_0222b8c4) == -1) {
            FAIL(0xf);
        }
        r = func_ov001_02201cd0((Unk_ov001_02201cd0_Hdr *)data_ov001_0222b8c4);
        if (r == 4) {
            FAIL(2);
        }
        if (r == 0) {
            break;
        }
        if (i >= v01.v[0]) {
            FAIL(1);
        }
        func_ov001_02202c88(sl);
        i = (s16)(i + 1);
    }
    func_ov001_02201c14(1);
    func_ov001_02200864(cmd7c, 0, 0x3c);
    if (func_ov001_02201c84((u32 *)cmd7c) != 0) {
        FAIL(0xf);
    }
    data_ov001_0222b8cc = func_ov001_02202c58(0x58);
    if (data_ov001_0222b8cc == 0) {
        FAIL(0xf);
    }
    func_ov001_02200864(data_ov001_0222b8cc, 0, 0x58);
    i = 0;
    if (v01.v[0] > 0) {
        do {
            r = func_ov001_02202c90(cmd7c, data_ov001_0222b8cc);
            if (r == -1) {
                FAIL(0xf);
            }
            if (r == 0) {
                if (r != 0) {
                    break;
                }
                if (*(s32 *)data_ov001_0222b8cc == 1) {
                    break;
                }
            }
            func_ov001_02202c88(sl);
            i = (s16)(i + 1);
        } while (i < v01.v[0]);
    }
    if (i == v01.v[0]) {
        FAIL(0xf);
    }
    if (func_ov001_022008d4(0xc0a80b65, -256, 0xc0a80b65) != 0) {
        func_ov001_02201f98(0xc);
        FAIL(0xf);
    }
    func_ov001_02201ff8();
    func_ov001_02201c4c(3, st64, o + 0x110);
    data_ov001_0222a484 = func_ov001_022007d8(2, 2, 0);
    if (data_ov001_0222a484 < 0) {
        FAIL(0xf);
    }
    if (func_ov001_022007e0(data_ov001_0222a484, 0xffff, 1, &opt, 4) < 0) {
        func_ov001_02201f98(0xb);
        FAIL(0xf);
    }
    func_ov001_02200864(&sa5c, 0, 8);
    sa5c.family = 2;
    sa5c.addr = func_ov001_0220078c(0xc0a80b65);
    sa5c.port = func_ov001_02200774(0x5790);
    if (func_ov001_022007cc(data_ov001_0222a484, (u8 *)&sa5c, 8) < 0) {
        FAIL(0xf);
    }
    a = (u32)pkt;
    z = 0;
    m1 = -1;
top:
    buf = (Unk_ov001_02202050_Buf *)data_ov001_0222b8d4;
    func_ov001_02200864((void *)a, z, 0x14);
    pkt[4] = 0xc0a80b65;
    pkt[0] = 0xc0a80b01;
    usec = t;
    t = usec;
    sec = t / 1000;
    usec = (t % 1000) * 1000;
again:
    if (state == 1 && data_ov001_0222b8ec.unk_18 != 1) {
        if (data_ov001_0222a484 != -1) {
            func_ov001_022007c4(data_ov001_0222a484);
        }
        data_ov001_0222a484 = m1;
        if (func_ov001_022008a8() != 0) {
            FAIL(0xf);
        }
        if (data_ov001_0222b8c4 != 0) {
            func_ov001_02202c44(data_ov001_0222b8c4);
            data_ov001_0222b8c4 = (void *)z;
        }
        data_ov001_0222b8c4 = func_ov001_02202c58(0x58);
        if (data_ov001_0222b8c4 == 0) {
            FAIL(0xf);
        }
        for (;;) {
            res2 = func_ov001_02202e74(&data_ov001_0222b8c4);
            if (res2 == -1) {
                FAIL(0xf);
            }
            r = func_ov001_02201cd0((Unk_ov001_02201cd0_Hdr *)data_ov001_0222b8c4);
            if (r == 4) {
                FAIL(2);
            }
            if (r == 0) {
                break;
            }
            if (i >= v01.v[0]) {
                FAIL(1);
            }
            func_ov001_02202c88(sl);
            i = (s16)(i + 1);
        }
        if (res2 == -1) {
            FAIL(0xf);
        }
        data_ov001_0222b8cc = func_ov001_02202c58(0x58);
        if (data_ov001_0222b8cc == 0) {
            FAIL(0xf);
        }
        func_ov001_02200864(data_ov001_0222b8cc, z, 0x58);
        i = z;
        if (v01.v[0] > 0) {
            do {
                r = func_ov001_02202c90(cmd7c, data_ov001_0222b8cc);
                if (r == -1) {
                    FAIL(0xf);
                }
                if (r == 0) {
                    if (r != 0) {
                        break;
                    }
                    if (*(s32 *)data_ov001_0222b8cc == 1) {
                        break;
                    }
                }
                func_ov001_02202c88(sl);
                i = (s16)(i + 1);
            } while (i < v01.v[0]);
        }
        if (i == v01.v[0]) {
            FAIL(0xf);
        }
        ip = func_ov001_02202030(data_ov001_0222b8ec.unk_10, data_ov001_0222b8ec.unk_14);
        if (func_ov001_022008d4(ip, data_ov001_0222b8ec.unk_14, ip) != 0) {
            func_ov001_02201f98(0xc);
            FAIL(0xf);
        }
        data_ov001_0222b8ec.unk_18 = 1;
        func_ov001_02201ff8();
        data_ov001_0222a484 = func_ov001_022007d8(2, 2, z);
        if (data_ov001_0222a484 < 0) {
            FAIL(0xf);
        }
        if (func_ov001_022007e0(data_ov001_0222a484, 0xffff, 1, &opt, 4) < 0) {
            func_ov001_02201f98(0xb);
            FAIL(0xf);
        }
        func_ov001_02200864(&sa5c, z, 8);
        sa5c.family = 2;
        sa5c.addr = func_ov001_0220078c(ip);
        sa5c.port = func_ov001_02200774(0x5790);
        if (func_ov001_022007cc(data_ov001_0222a484, (u8 *)&sa5c, 8) < 0) {
            FAIL(0xf);
        }
    }
    r = func_ov001_022011c4(state, (s32)pkt, (s32)st64, data_ov001_0222a484);
    if (r == -1) {
        func_ov001_02201f98(state + 0x1000);
        FAIL(0xf);
    }
    func_ov001_02200864(buf, z, 0x5f8);
    func_ov001_02200688((Unk_ov001_02200680_S *)fdset);
    func_ov001_02200680(data_ov001_0222a484, (Unk_ov001_02200680_S *)fdset);
    tv[0] = sec;
    tv[1] = usec;
    if (func_ov001_022007fc(data_ov001_0222a484 + 1, (Unk_ov001_022007fc_P *)fdset, z, z, tv) <= 0) {
        tries++;
        if (tries > v23.v[0]) {
            if (state == 0) {
                func_ov001_02201f98(0xf);
            } else if (state == 1) {
                func_ov001_02201f98(0x10);
            } else {
                func_ov001_02201f98(0x11);
            }
            ret = -1;
            goto done;
        }
        func_ov001_02202c88(v23.v[1]);
        goto again;
    }
    len48 = 8;
    r = func_ov001_02200848(data_ov001_0222a484, (s32)((u8 *)buf + 0xc), 0x5dc, z, (u8 *)sa40, &len48);
    buf->sock = data_ov001_0222a484;
    buf->unk_04 = (u32)func_ov001_02200724((u16)r);
    res = func_ov001_02201b58(state, (u8 *)buf, &tries, st64, data_ov001_0222a484);
    if (res == 100) {
        ret = 0;
        goto done;
    }
    if (res == -1) {
        ret = -1;
        goto done;
    }
    if (state != res) {
        if (res == 2) {
            if (data_ov001_0222a484 != -1) {
                func_ov001_022007c4(data_ov001_0222a484);
            }
            data_ov001_0222a484 = m1;
            if (func_ov001_022008a8() != 0) {
                FAIL(0xf);
            }
            i = z;
            func_ov001_02201c14(4);
            for (;;) {
                if (data_ov001_0222b8c4 != 0) {
                    func_ov001_02202c44(data_ov001_0222b8c4);
                    data_ov001_0222b8c4 = (void *)z;
                }
                if (func_ov001_02202e74(&data_ov001_0222b8c4) == -1) {
                    FAIL(0xf);
                }
                r = func_ov001_02201cd0((Unk_ov001_02201cd0_Hdr *)data_ov001_0222b8c4);
                if (r == 4) {
                    FAIL(2);
                }
                if (r == 0) {
                    break;
                }
                if (i >= v01.v[0]) {
                    FAIL(1);
                }
                func_ov001_02202c88(sl);
                i = (s16)(i + 1);
            }
            data_ov001_0222b8cc = func_ov001_02202c58(0x58);
            if (data_ov001_0222b8cc == 0) {
                FAIL(0xf);
            }
            func_ov001_02200864(data_ov001_0222b8cc, z, 0x58);
            i = z;
            if (v01.v[0] > 0) {
                do {
                    r = func_ov001_02202c90(cmd7c, data_ov001_0222b8cc);
                    if (r == -1) {
                        FAIL(0xf);
                    }
                    if (r == 0) {
                        if (r != 0) {
                            break;
                        }
                        if (*(s32 *)data_ov001_0222b8cc == 1) {
                            break;
                        }
                    }
                    func_ov001_02202c88(sl);
                    i = (s16)(i + 1);
                } while (i < v01.v[0]);
            }
            if (i == v01.v[0]) {
                FAIL(0xf);
            }
            if (func_ov001_022008d4(ip, data_ov001_0222b8ec.unk_14, ip) != 0) {
                func_ov001_02201f98(0xc);
                FAIL(0xf);
            }
            func_ov001_02201ff8();
            data_ov001_0222a484 = func_ov001_022007d8(2, 2, z);
            if (data_ov001_0222a484 < 0) {
                FAIL(0xf);
            }
            if (func_ov001_022007e0(data_ov001_0222a484, 0xffff, 1, &opt, 4) < 0) {
                func_ov001_02201f98(0xb);
                FAIL(0xf);
            }
            func_ov001_02200864(&sa5c, z, 8);
            sa5c.family = 2;
            sa5c.addr = func_ov001_0220078c(ip);
            sa5c.port = func_ov001_02200774(0x5790);
            if (func_ov001_022007cc(data_ov001_0222a484, (u8 *)&sa5c, 8) < 0) {
                FAIL(0xf);
            }
        }
        state = res;
        goto top;
    }
    state = res;
    if (tries > v23.v[0]) {
        if (res == 0) {
            func_ov001_02201f98(0xf);
        } else if (res == 1) {
            func_ov001_02201f98(0x10);
        } else {
            func_ov001_02201f98(0x11);
        }
        ret = -1;
        goto done;
    }
    func_ov001_02202c88(v23.v[1]);
    goto top;
done:
    if (data_ov001_0222a484 != -1) {
        func_ov001_022007c4(data_ov001_0222a484);
    }
    data_ov001_0222a484 = -1;
    if (func_ov001_022008a8() != 0) {
        FAIL(0xf);
    }
    if (ret != 0) {
        u8 code;
        switch (func_ov001_02201f8c()) {
        case 0xf:
            code = 3;
            break;
        case 0x10:
            code = 4;
            break;
        case 0x11:
            code = 5;
            break;
        case 0x14:
            code = 7;
            break;
        case 0x15:
            code = 8;
            break;
        default:
            code = 0xf;
            break;
        }
        FAIL(code);
    }
    if (func_ov001_02201d7c(o) != 0) {
        FAIL(6);
    }
    return 0;
}

extern "C" u32 func_ov001_02202030(u32 a, u32 b)
{
    u32 m = a & b;
    u32 nb = ~b;
    u32 lo = (a & nb) + 1;
    u32 x = m | lo;
    if (x >= (m | nb)) {
        x = m | 1;
    }
    return x;
}

extern "C" void func_ov001_02201ff8()
{
    if (data_ov001_0222b8cc != 0) {
        func_ov001_02202c44(data_ov001_0222b8cc);
        data_ov001_0222b8cc = 0;
    }
    if (data_ov001_0222b8c4 != 0) {
        func_ov001_02202c44(data_ov001_0222b8c4);
        data_ov001_0222b8c4 = 0;
    }
}

extern "C" void func_ov001_02201fa4(u8 *p)
{
    func_ov001_02200864(data_ov001_0222b8d8, 0, 8);
    data_ov001_0222b8d0 = 1;
    func_ov001_02200864(&data_ov001_0222b8ec, 0, 0x1c);
    data_ov001_0222b8ec.unk_00 = p + 6;
    data_ov001_0222b8ec.unk_04 = *(u16 *)(p + 4);
    data_ov001_0222b8ec.unk_08 = *(u16 *)p & 0xf;
    data_ov001_0222b8ec.unk_19 = p[2];
    data_ov001_0222b8ec.unk_0c = 0;
    data_ov001_0222b8ec.unk_10 = 0xc0a80b01;
    data_ov001_0222b8ec.unk_18 = 0;
}

extern "C" s32 func_ov001_02201f98(s32 v)
{
    data_ov001_0222b8d0 = v;
}

extern "C" s32 func_ov001_02201f8c()
{
    return data_ov001_0222b8d0;
}

extern "C" s32 func_ov001_02201d7c(u8 *o)
{
    u8 *r5 = o + 0x117;
    Unk_ov001_02201d7c_Src *a = &data_ov001_0222bff4;
    Unk_ov001_02201d7c_Src *b = &data_ov001_0222c124;
    Unk_ov001_02201d7c_Src *c = &data_ov001_0222c254;
    Unk_ov001_02201d7c_Src *d = &data_ov001_0222c2c4;
    if (r5 == 0) {
        return -1;
    }
    *(u16 *)o = data_ov001_0222b8ec.unk_08 & data_ov001_0222b8ec.unk_0c;
    func_ov001_02200864(r5, 0, 0x154);
    if ((*(u16 *)o & 1) != 0) {
        func_ov001_02200870(r5, a->unk_30, a->len);
        func_ov001_02200870(r5 + 6, a->unk_70, a->len);
        func_ov001_02200870(r5 + 0xc, a->unk_b0, a->len);
        func_ov001_02200870(r5 + 0x12, a->unk_f0, a->len);
        if (func_ov001_02201d58(a->unk_08, func_ov001_02200710((char *)a->unk_08)) != 0) {
            goto fail;
        }
        func_ov001_02200870(r5 + 0x18, a->unk_08, func_ov001_02200710((char *)a->unk_08));
    }
    if ((*(u16 *)o & 2) != 0) {
        func_ov001_02200870(r5 + 0x39, b->unk_30, b->len);
        func_ov001_02200870(r5 + 0x47, b->unk_70, b->len);
        func_ov001_02200870(r5 + 0x55, b->unk_b0, b->len);
        func_ov001_02200870(r5 + 0x63, b->unk_f0, b->len);
        if (func_ov001_02201d58(b->unk_08, func_ov001_02200710((char *)b->unk_08)) != 0) {
            goto fail;
        }
        func_ov001_02200870(r5 + 0x71, b->unk_08, func_ov001_02200710((char *)b->unk_08));
    }
    if ((*(u16 *)o & 4) != 0) {
        if (func_ov001_02201d58(c->unk_30, c->len - 1) != 0) {
            goto fail;
        }
        func_ov001_02200870(r5 + 0x92, c->unk_30, c->len);
        if (func_ov001_02201d58(c->unk_08, func_ov001_02200710((char *)c->unk_08)) != 0) {
            goto fail;
        }
        func_ov001_02200870(r5 + 0xd2, c->unk_08, func_ov001_02200710((char *)c->unk_08));
    }
    if ((*(u16 *)o & 8) != 0) {
        if (func_ov001_02201d58(d->unk_30, d->len - 1) != 0) {
            goto fail;
        }
        func_ov001_02200870(r5 + 0xf3, d->unk_30, d->len);
        if (func_ov001_02201d58(d->unk_08, func_ov001_02200710((char *)d->unk_08)) != 0) {
            goto fail;
        }
        func_ov001_02200870(r5 + 0x133, d->unk_08, func_ov001_02200710((char *)d->unk_08));
    }
    o[0x116] = 0;
    return 0;
fail:
    func_ov001_02200864(r5, 0, 0x154);
    return -1;
}

extern "C" s32 func_ov001_02201d58(u8 *s, s32 n)
{
    s32 i;
    for (i = 0; i < n; i++) {
        u32 c = *s++;
        if (c < 0x20 || c > 0x7f) {
            return -1;
        }
    }
    return 0;
}

extern "C" s32 func_ov001_02201cd0(Unk_ov001_02201cd0_Hdr *p)
{
    s32 n;
    s32 r = 0;
    s32 cnt = 0;
    s32 i;
    n = p->count;
    if (n == 0) {
        return 5;
    }
    if ((u32)n > 0x40) {
        n = 0x40;
    }
    for (i = 0; i < n; i++) {
        if ((p->e[i].flag & 1) != 0) {
            if (p->e[i].len == func_ov001_02200710((char *)data_ov001_0222a4f0)) {
                if (func_ov001_02200880(p->e[i].name, data_ov001_0222a4f0, func_ov001_02200710((char *)data_ov001_0222a4f0)) == 0) {
                    cnt++;
                }
            }
        }
    }
    if (cnt > 1) {
        r = 4;
    }
    if (cnt == 0) {
        r = 5;
    }
    return r;
}

extern "C" s32 func_ov001_02201c84(u32 *p)
{
    p[0] = func_ov001_02200710((char *)data_ov001_0222a4f0);
    func_ov001_02200870(p + 1, data_ov001_0222a4f0, p[0]);
    p[9] = 1;
    p[10] = func_ov001_02200710((char *)data_ov001_0222a4e8);
    if (p[10] > 0xd) {
        return -1;
    }
    func_ov001_02200870(p + 11, data_ov001_0222a4e8, p[10]);
    return 0;
}

extern "C" void func_ov001_02201c4c(s32 n, u8 *p, void *x)
{
    s32 i;
    for (i = 0; i < n; i++) {
        func_ov001_02200870(p, x, 6);
        *(u16 *)(p + 6) = func_ov001_02200694();
        *(u16 *)(p + 6) = func_ov001_02200774(*(u16 *)(p + 6));
        p += 8;
    }
}

extern "C" s32 func_ov001_02201c14(s32 x)
{
    s32 z = 0;
    if (x == -1) {
        data_ov001_0222a48c = x;
        return z;
    }
    if (data_ov001_0222a48c != x) {
        data_ov001_0222a48c = x;
        return func_ov001_02202c6c(x);
    }
    return z;
}

extern "C" s32 func_ov001_02201b58(s32 a, u8 *b, s32 *cnt, void *c, s32 sock)
{
    u8 *p = b + 0xc;
    if ((u32)func_ov001_02200724(*(u16 *)(b + 0xc)) < 1) {
        (*cnt)++;
        return a;
    }
    if (p[0xf] != 0x11) {
        (*cnt)++;
        return a;
    }
    if (func_ov001_0220176c(b + 0xc) > 0) {
        (*cnt)++;
        return a;
    }
    switch ((u32)func_ov001_02200724(*(u16 *)(p + 6))) {
    case 0x1010:
        a = func_ov001_02201a48(a, b, cnt, c);
        break;
    case 0x2010:
        a = func_ov001_02201940(a, b, cnt, (u8 *)c);
        break;
    case 0x3010:
        a = func_ov001_0220187c(a, b, cnt, (u8 *)c);
        break;
    }
    return a;
}

extern "C" s32 func_ov001_02201a48(s32 a, u8 *b, s32 *cnt, void *c)
{
    u8 *p;
    u8 *q;
    if (a != 0) {
        (*cnt)++;
        return a;
    }
    p = b + 0xc;
    q = b + 0x24;
    if (func_ov001_022016d0((u8 *)c, p + 0x10) < 0) {
        (*cnt)++;
        return a;
    }
    if ((u32)func_ov001_02200724(*(u16 *)(q + 2)) == 0) {
        (*cnt)++;
        return a;
    }
    if (q[0] == 7) {
        s32 *w = (s32 *)(q + 4);
        if (func_ov001_0220073c(*(s32 *)(q + 4)) == -2) {
            func_ov001_02201f98(0x14);
        } else if (func_ov001_0220073c(w[0]) == -3) {
            func_ov001_02201f98(0x15);
        } else {
            func_ov001_02201f98(0x18);
        }
        return -1;
    }
    if (q[0] != 1) {
        (*cnt)++;
        return a;
    }
    s32 r = func_ov001_022015f8(q + 4, data_ov001_0222b96c);
    if (r < 0) {
        if (r == -2) {
            func_ov001_02201f98(0x16);
            return -1;
        }
        (*cnt)++;
        return a;
    }
    (u32)func_ov001_02200724(*(u16 *)(p + 0xc));
    data_ov001_0222b8c0 = ((s32 (*)())func_ov001_02201228)();
    *cnt = 0;
    return 1;
}

extern "C" s32 func_ov001_02201940(s32 mode, u8 *q, s32 *cnt, u8 *r3)
{
    u8 *r7;
    u8 *r4;
    if (mode != 1) {
        (*cnt)++;
        return mode;
    }
    r7 = q + 0xc;
    r4 = q + 0x24;
    if (func_ov001_022016d0(r3 + 8, r7 + 0x10) < 0) {
        (*cnt)++;
        return mode;
    }
    if (func_ov001_02200724(*(u16 *)(r4 + 2)) == 0) {
        (*cnt)++;
        return mode;
    }
    if (r4[0] == 7) {
        if (func_ov001_0220073c(*(u32 *)(r4 + 4)) == -2) {
            func_ov001_02201f98(0x14);
        } else if (func_ov001_0220073c(*(u32 *)(r4 + 4)) == -3) {
            func_ov001_02201f98(0x15);
        } else {
            func_ov001_02201f98(0x18);
        }
        return -1;
    }
    func_ov001_02200864(data_ov001_0222bfec, 0, 0x6a0);
    if (func_ov001_02201238(0, r4, func_ov001_02200724(*(u16 *)(r7 + 0xa)), data_ov001_0222bfec, data_ov001_0222b96c) < 0) {
        (*cnt)++;
        return mode;
    }
    if ((data_ov001_0222b8ec.unk_0c & data_ov001_0222b8ec.unk_08) == 0) {
        return mode;
    }
    *cnt = 0;
    return 2;
}

extern "C" s32 func_ov001_0220187c(s32 mode, u8 *q, s32 *cnt, u8 *r3)
{
    u8 *r4;
    if (mode != 2) {
        (*cnt)++;
        return mode;
    }
    r4 = q + 0x24;
    if (func_ov001_022016d0(r3 + 0x10, ((Unk_ov001_0220187c_Hdr *)(q + 0xc))->mac) < 0) {
        (*cnt)++;
        return mode;
    }
    if (r4[0] != 7) {
        (*cnt)++;
        return mode;
    }
    if (func_ov001_02200724(*(u16 *)(r4 + 2)) == 0) {
        (*cnt)++;
        return mode;
    }
    if (func_ov001_0220073c(*(u32 *)(r4 + 4)) == 0) {
        return 0x64;
    }
    if (func_ov001_0220073c(*(u32 *)(r4 + 4)) == -2) {
        func_ov001_02201f98(0x14);
        return -1;
    }
    if (func_ov001_0220073c(*(u32 *)(r4 + 4)) == -3) {
        func_ov001_02201f98(0x15);
        return -1;
    }
    func_ov001_02201f98(0x18);
    return -1;
}

extern "C" s32 func_ov001_0220176c(u8 *p)
{
    u8 buf[8];
    u8 *r4 = p + 0x18;
    u32 len;
    u8 *m;
    s32 t;
    s32 r;

    func_ov001_02200870(buf, p + 0x10, 8);
    t = func_ov001_02200710((char *)data_ov001_0222a4e8);
    if (func_ov001_02200a28(buf, 8, data_ov001_0222a4e8, t) == -1) {
        func_ov001_02201f98(2);
        return -100;
    }
    r = func_ov001_02201724(func_ov001_02200724(*(u16 *)(p + 6)), buf);
    if (r != 0) {
        return r;
    }
    if (func_ov001_02200724(*(u16 *)(p + 6)) == 0x1000) {
        func_ov001_02200870(data_ov001_0222b8d8, buf, 8);
    }
    if ((func_ov001_02200724(*(u16 *)(p + 0xc)) & 0xf) == 0) {
        return 0;
    }
    len = func_ov001_02200724(*(u16 *)r4);
    m = (u8 *)func_ov001_02202c58(len);
    if (m == NULL) {
        func_ov001_02201f98(2);
        return 0x64;
    }
    if (func_ov001_02200c40(r4 + 4, m, len, p[0xe], r4 + 2, data_ov001_0222b8d8, 8) < 0) {
        func_ov001_02202c44(m);
        if (func_ov001_02201f8c() == 2) {
            return 0x64;
        }
        return 0xc8;
    }
    func_ov001_02200870(r4, m, len);
    *(u16 *)(p + 0xa) = func_ov001_02200774((u16)len);
    func_ov001_02202c44(m);
    return 0;
}

extern "C" s32 func_ov001_02201724(s32 a, u8 *b)
{
    s32 r;
    s32 i;
    s32 f;
    u8 *t;
    r = 0;
    f = r;
    i = r;
    t = data_ov001_0222b8d8;
    do {
        if (*t != 0) { f = 1; break; }
        t++; i++;
    } while (i < 6);
    if (f != 0) {
        if (func_ov001_02200880(data_ov001_0222b8d8, b, 6) != 0) {
            r = 1;
        }
    } else if (a != 0x1000) {
        r = 2;
    }
    return r;
}

extern "C" s32 func_ov001_022016d0(u8 *a, u8 *b)
{
    s32 r = 0;
    s32 t;
    s32 x;
    t = func_ov001_02200710((char *)data_ov001_0222a4e8);
    func_ov001_02200a28(b, 8, data_ov001_0222a4e8, t);
    if (func_ov001_02200880(a, b, 6) != 0) {
        r = -1;
    } else {
        x = func_ov001_02200724(*(u16 *)(a + 6));
        if (x + 1 != func_ov001_02200724(*(u16 *)(b + 6))) {
            r = -2;
        }
    }
    return r;
}

extern "C" s32 func_ov001_022015f8(u8 *p, u8 *dst)
{
    u8 *q;
    s32 len;
    func_ov001_02200864(dst, 0, 0x104);
    q = p;
    for (;;) {
        len = func_ov001_02200724(*(u16 *)(q + 2));
        if (len <= 0) {
            return -1;
        }
        switch (q[0]) {
        case 0:
            func_ov001_02200870(dst, q + 6, len);
            break;
        case 1:
            func_ov001_02200870(dst + 0x80, q + 6, len);
            break;
        case 2:
            func_ov001_02200870(dst + 0x100, q + 6, len);
            break;
        case 3:
        case 4:
            if (func_ov001_02200724(q[6]) <= 0) {
                return -2;
            }
            break;
        case 5:
            data_ov001_0222b8ec.unk_10 = func_ov001_0220073c(func_ov001_022015d4(q + 6, len));
            break;
        case 6:
            data_ov001_0222b8ec.unk_14 = func_ov001_0220073c(func_ov001_022015d4(q + 6, len));
            break;
        default:
            return -1;
        }
        if (*(u16 *)(q + 4) == 0) {
            break;
        }
        q = p + func_ov001_02200724(*(u16 *)(q + 4));
    }
    return 0;
}

extern "C" u32 func_ov001_022015d4(u8 *p, s32 n)
{
    u32 r = 0;
    s32 i;
    u8 *q = p + (n - 1);
    i = r;
    for (; i < n; i++) {
        r = (r << 8) + *q--;
    }
    return r;
}

extern "C" s32 func_ov001_02201470(u8 *p, u8 *dst)
{
    u8 *q = p + 6;
    u32 len;
    s32 t;
    for (;;) {
        len = func_ov001_02200724(*(u16 *)(q + 2));
        t = q[0];
        switch (t) {
        case 0x10:
        case 0x11:
        case 0x12:
        case 0x13:
            if (len > 5) {
                return -1;
            }
            break;
        case 0x20:
        case 0x21:
        case 0x22:
        case 0x23:
            if (len > 0xd) {
                return -1;
            }
            break;
        case 0x15:
        case 0x25:
            if (len > 0x21) {
                return -1;
            }
            break;
        }
        switch (t) {
        case 0x10:
        case 0x20:
            func_ov001_02200870(dst + 0x30, q + 6, len);
            *(u32 *)(dst + 4) = len;
            break;
        case 0x11:
        case 0x21:
            func_ov001_02200870(dst + 0x70, q + 6, len);
            *(u32 *)(dst + 4) = len;
            break;
        case 0x12:
        case 0x22:
            func_ov001_02200870(dst + 0xb0, q + 6, len);
            *(u32 *)(dst + 4) = len;
            break;
        case 0x13:
        case 0x23:
            func_ov001_02200870(dst + 0xf0, q + 6, len);
            *(u32 *)(dst + 4) = len;
            break;
        case 0x15:
        case 0x25:
            if (len != 0 && *(q + (len - 1) + 6) != 0) {
                return -1;
            }
            func_ov001_02200870(dst + 8, q + 6, len);
            break;
        default:
            return -1;
        }
        if (*(u16 *)(q + 4) == 0) {
            break;
        }
        q = p + 6 + func_ov001_02200724(*(u16 *)(q + 4));
    }
    return 0;
}

extern "C" s32 func_ov001_022013a0(u8 *p, u8 *dst)
{
    u8 *q = p + 6;
    u32 len;
    s32 t;
    for (;;) {
        len = func_ov001_02200724(*(u16 *)(q + 2));
        t = q[0];
        switch (t) {
        case 0x30:
        case 0x40:
            if (len > 0x40) {
                return -1;
            }
            break;
        case 0x35:
        case 0x45:
            if (len > 0x21) {
                return -1;
            }
            break;
        }
        switch (t) {
        case 0x30:
        case 0x40:
            func_ov001_02200870(dst + 0x30, q + 6, len);
            *(u32 *)(dst + 4) = len;
            break;
        case 0x35:
        case 0x45:
            if (len != 0 && *(q + (len - 1) + 6) != 0) {
                return -1;
            }
            func_ov001_02200870(dst + 8, q + 6, len);
            break;
        default:
            return -1;
        }
        if (*(u16 *)(q + 4) == 0) {
            break;
        }
        q = p + 6 + func_ov001_02200724(*(u16 *)(q + 4));
    }
    return 0;
}

extern "C" s32 func_ov001_0220135c(u8 *p, void *dst)
{
    u8 *q = p + 6;
    s32 len = func_ov001_02200724(*(u16 *)(q + 2));
    if (len <= 0) {
        return -1;
    }
    if (q[0] != 0x70) {
        return -1;
    }
    func_ov001_02200870(dst, q + 6, len);
    return 0;
}

extern "C" s32 func_ov001_02201238(s32 idx, u8 *p, s32 len, u8 *base, u8 *extra)
{
    u32 flags;
    u8 *key;
    u8 *r6;
    s32 r7;
    s32 n;
    s32 r;
    u8 *x;
    u8 *rec;

    flags = 0;
    if (len <= 0) {
        return -2;
    }
    key = data_ov001_0222a480 + idx;
    do {
        rec = p;
        if (p[0] == key[0]) {
            goto found;
        }
        n = func_ov001_02200724(*(u16 *)(p + 2)) + 4;
        p += n;
        len -= n;
    } while (len > 0);
    return -4;
found:
    p += 4;
    r7 = func_ov001_02200724(*(u16 *)(rec + 2));
    r6 = base + idx * 0x350;
    x = extra + (idx + 3) * 0x80;
    do {
        switch (p[0]) {
        case 3:
            r = func_ov001_02201470(p, r6 + 8);
            flags |= 1;
            break;
        case 4:
            r = func_ov001_02201470(p, r6 + 0x138);
            flags |= 2;
            break;
        case 5:
            r = func_ov001_022013a0(p, r6 + 0x268);
            flags |= 4;
            break;
        case 6:
            r = func_ov001_022013a0(p, r6 + 0x2d8);
            flags |= 8;
            break;
        case 10:
            r = func_ov001_0220135c(p, x);
            break;
        default:
            r = -3;
            break;
        }
        if (r != 0) {
            return r;
        }
        n = func_ov001_02200724(*(u16 *)(p + 2)) + 4;
        p += n;
        r7 -= n;
    } while (r7 > 0);
    data_ov001_0222b8ec.unk_0c |= flags;
    return 0;
}

extern "C" BOOL func_ov001_02201228(u32 x)
{
    BOOL r = FALSE;
    if ((x & 0x10) != 0) {
        r = TRUE;
    }
    return r;
}

extern "C" s32 func_ov001_022011c4(s32 sel, s32 a, s32 b, s32 c)
{
    switch (sel) {
    case 0:
        func_ov001_02201c14(2);
        return func_ov001_0220106c(a, (u8 *)b, c);
    case 1:
        func_ov001_02201c14(3);
        return func_ov001_02200f78(a, (u8 *)b, c);
    case 2:
        func_ov001_02201c14(5);
        return func_ov001_02200f08(a, (u8 *)b, c);
    default:
        return -1;
    }
}

extern "C" s32 func_ov001_0220106c(s32 unused, u8 *src, s32 arg)
{
    s8 a;
    s16 b;
    s16 c;
    u8 buf[8];
    u8 *g;
    u8 *p;
    u8 *r6;

    a = 0;
    b = 0;
    c = 0;
    g = data_ov001_0222b8d4;
    func_ov001_02200864(g, 0, 0x5dc);
    p = (u8 *)func_ov001_02202c58(0x210);
    if (p == NULL) {
        func_ov001_02201f98(2);
        return -1;
    }
    func_ov001_02200864(p, 0, 0x210);
    r6 = g + 0x18;
    func_ov001_02200870(data_ov001_0222b8d8, src, 8);
    func_ov001_02200870(buf, data_ov001_0222b8d8, 8);
    b = func_ov001_02200e7c(p + 4);
    if (b < 0) {
        func_ov001_02201f98(3);
        if (p != NULL) {
            func_ov001_02202c44(p);
        }
        return -1;
    }
    *p = 0;
    *(u16 *)(p + 2) = func_ov001_02200774((u16)b);
    b = b + 4;
    func_ov001_02200e20(0, r6, p, &b, (u16 *)&c, (u8 *)&a);
    c = c | 0x10;
    if (func_ov001_02200a28(buf, 8, data_ov001_0222a4e8, 6) != 0) {
        func_ov001_02201f98(2);
        if (p != NULL) {
            func_ov001_02202c44(p);
        }
        return -1;
    }
    func_ov001_02200dc0((u16 *)g, 0x1000, b, c, a, 0x11, buf);
    b = b + 0x18;
    func_ov001_02200d58((s32)g, b, 0xff, arg);
    if (p != NULL) {
        func_ov001_02202c44(p);
    }
    return 0;
}

extern "C" s32 func_ov001_02200f78(s32 a, u8 *b, s32 c) {
    Unk_ov001_02200f78_L l;
    u8 *r4;
    l.a = 0;
    l.b = 0;
    l.c = 0;
    r4 = data_ov001_0222b8d4;
    func_ov001_02200864(&l.sa, 0, 8);
    func_ov001_02200864(r4, 0, 0x5dc);
    l.sa.len = 2;
    l.sa.family = 0;
    l.sa.port = func_ov001_02200774(4);
    l.sa.addr = data_ov001_0222b8ec.unk_08;
    l.sa.addr = func_ov001_0220078c(l.sa.addr);
    l.b = 8;
    func_ov001_02200e20(data_ov001_0222b8c0, r4 + 0x18, (u8 *)&l.sa, &l.b, (u16 *)&l.c, (u8 *)&l.a);
    func_ov001_02200870(l.dat, b + 8, 8);
    if (func_ov001_02200a28(l.dat, 8, data_ov001_0222a4e8, 6) != 0) {
        func_ov001_02201f98(2);
        return -1;
    }
    func_ov001_02200dc0((u16 *)r4, 0x2000, l.b, l.c, l.a, 0x11, l.dat);
    l.b = l.b + 0x18;
    func_ov001_02200d58((s32)r4, l.b, 0, c);
    return 0;
}

extern "C" s32 func_ov001_02200f08(s32 a, u8 *b, s32 c) {
    u8 *r4 = data_ov001_0222b8d4;
    u8 buf[8];
    func_ov001_02200864(r4, 0, 0x5dc);
    func_ov001_02200870(buf, b + 0x10, 8);
    func_ov001_02200a28(buf, 8, data_ov001_0222a4e8, func_ov001_02200710((char *)data_ov001_0222a4e8));
    func_ov001_02200dc0((u16 *)r4, 0x3000, 0, 0, 0, 0x11, buf);
    func_ov001_02200d58((s32)r4, 0x18, 0, c);
    return 0;
}

extern "C" s32 func_ov001_02200e7c(u8 *out) {
    s16 acc = 0;
    s32 len;
    s32 t;
    u8 *q;
    out[0] = data_ov001_0222b8ec.unk_19;
    out[1] = 1;
    len = (s16)data_ov001_0222b8ec.unk_04;
    func_ov001_02200870(out + 6, data_ov001_0222b8ec.unk_00, len);
    *(u16 *)(out + 2) = func_ov001_02200774((u16)len);
    t = (s16)(((s16)(len + 6) + 1) / 2 * 2);
    *(u16 *)(out + 4) = func_ov001_02200774((u16)t);
    acc += t;
    q = out + t;
    q[0] = 0x60;
    q[1] = 0;
    *(u16 *)(q + 4) = func_ov001_02200774(0);
    {
        u32 w = func_ov001_0220078c(0xe);
        func_ov001_02200870(q + 6, &w, 4);
    }
    *(u16 *)(q + 2) = func_ov001_02200774(4);
    acc += 10;
    return acc;
}

extern "C" void func_ov001_02200e20(s32 mode, u8 *out, u8 *in, s16 *len, u16 *flag, u8 *crcout) {
    if (mode == 1) {
        *flag = 1;
        func_ov001_02200cd4(in, out + 4, *len, crcout, out + 2, data_ov001_0222b8d8, 8);
        *(u16 *)out = func_ov001_02200774(*(u16 *)len);
        *len = *len + 4;
    } else {
        func_ov001_02200870(out, in, *len);
    }
}

extern "C" void func_ov001_02200dc0(u16 *out, u32 x, u32 y, u32 z, s8 a5, s8 a6, u8 *in) {
    u8 *o = (u8 *)out;
    out[0] = func_ov001_02200774(1);
    out[1] = 0;
    out[2] = 0;
    out[3] = func_ov001_02200774((u16)x);
    out[4] = 0;
    out[5] = func_ov001_02200774((u16)y);
    out[6] = func_ov001_02200774((u16)z);
    o[0xe] = a5;
    o[0xf] = a6;
    func_ov001_02200870(o + 0x10, in, 8);
}

extern "C" s32 func_ov001_02200d58(s32 a, s32 b, s32 n, s32 c) {
    Unk_ov001_02200d58_Sock sa;
    func_ov001_02200864(&sa, 0, 8);
    sa.family = 2;
    sa.port = func_ov001_02200774(0x5790);
    sa.addr = func_ov001_0220078c(data_ov001_0222b8ec.unk_10);
    if (n == 0xff || data_ov001_0222b8ec.unk_18 == 0) {
        sa.addr = -1;
    }
    return func_ov001_022007e4(c, a, b, 0, (u8 *)&sa, 8);
}

extern "C" s32 func_ov001_02200cd4(u8 *a, u8 *b, u32 n, u8 *out, u8 *x, u8 *y, s32 z) {
    u16 v;
    Unk_ov001_02200b5c_Rc4 st;
    *out = func_ov001_02200b30(a, n);
    st.s = (u8 *)func_ov001_02202c58(n);
    if (st.s == NULL) {
        return -1;
    }
    v = func_ov001_02200694();
    func_ov001_02200870(x, &v, 2);
    func_ov001_02200870(data_ov001_0222b908, x, 2);
    func_ov001_02200870(data_ov001_0222b90a, y, z);
    func_ov001_02200bd4(&st, data_ov001_0222b908, z + 2, n);
    func_ov001_02200ba4(&st, b, a, n);
    func_ov001_02202c44(st.s);
    return 0;
}

extern "C" s32 func_ov001_02200c40(u8 *a, u8 *b, u32 n, u32 crc, u8 *x, u8 *y, s32 z) {
    Unk_ov001_02200b5c_Rc4 st;
    st.s = (u8 *)func_ov001_02202c58(n);
    if (st.s == NULL) {
        func_ov001_02201f98(2);
        return -1;
    }
    func_ov001_02200870(data_ov001_0222b908, x, 2);
    func_ov001_02200870(data_ov001_0222b90a, y, z);
    func_ov001_02200bd4(&st, data_ov001_0222b908, z + 2, n);
    func_ov001_02200ba4(&st, b, a, n);
    u32 c = func_ov001_02200b30(b, n);
    if (c != crc) {
        func_ov001_02201f98(0x12);
        func_ov001_02202c44(st.s);
        return -1;
    }
    func_ov001_02202c44(st.s);
    return 0;
}

extern "C" void func_ov001_02200bd4(Unk_ov001_02200b5c_Rc4 *st, u8 *key, u32 klen, u32 n) {
    u8 *s = st->s;
    u32 i, j, k;
    st->j = 0;
    st->i = st->j;
    st->n = n;
    for (i = 0; i < n; i++) {
        s[i] = i;
    }
    j = 0;
    k = 0;
    for (i = 0; i < n; i++) {
        u32 si = s[i];
        u32 sj;
        j = (j + key[k] + si) % st->n;
        sj = s[j];
        s[j] = si;
        s[i] = sj;
        k++;
        if (k >= klen) {
            k = 0;
        }
    }
}

extern "C" void func_ov001_02200ba4(Unk_ov001_02200b5c_Rc4 *st, u8 *out, u8 *in, u32 n) {
    u32 i;
    for (i = 0; i < n; i++) {
        u32 t = (u8)func_ov001_02200b5c(st);
        u32 c = in[i];
        out[i] = t ^ c;
    }
}

extern "C" u32 func_ov001_02200b5c(Unk_ov001_02200b5c_Rc4 *st) {
    u8 *s = st->s;
    u32 n = st->n;
    u32 i = (u8)((st->i + 1) % n);
    u32 si = s[i];
    u32 j = (u8)((si + st->j) % n);
    u32 sj = s[j];
    st->i = i;
    st->j = j;
    s[j] = si;
    s[i] = sj;
    return s[(si + sj) % st->n];
}

extern "C" u8 func_ov001_02200b30(u8 *data, s32 len) {
    u32 r = func_ov001_02200af0(-1, data, len, 0, data_ov001_0222bbec);
    return (u8)(r ^ -1);
}

extern "C" u32 func_ov001_02200af0(u32 crc, u8 *data, s32 len, s32 init, u32 *tbl) {
    s32 i;
    if (init == 0) {
        func_ov001_02200ab4(init, tbl);
    }
    for (i = 0; i < len; i++) {
        u32 t = crc >> 8;
        crc = crc ^ data[i];
        crc = crc & 0xff;
        crc = t ^ tbl[crc];
    }
    return crc;
}

extern "C" void func_ov001_02200ab4(u32 unused, u32 *t) {
    u32 r;
    s32 i;
    s32 j;
    for (i = 0; i < 0x100; i++) {
        r = i;
        for (j = 0; j < 8; j++) {
            if (r & 1) {
                r = (r >> 1) ^ 0xedb88320;
            } else {
                r = r >> 1;
            }
        }
        *t++ = r;
    }
}

extern "C" s32 func_ov001_02200a28(u8 *out, s32 n, u8 *key, s32 klen) {
    s32 i;
    u8 *t1;
    u8 *t2;
    t1 = (u8 *)func_ov001_02202c58(n / 2);
    if (t1 == NULL) {
        return -1;
    }
    t2 = (u8 *)func_ov001_02202c58(n);
    if (t2 == NULL) {
        func_ov001_02202c44(t1);
        return -1;
    }
    for (i = 0; i < 2; i++) {
        func_ov001_022009dc(i, (char *)t1, n, (char *)key, klen);
        func_ov001_022009b0((char *)t1, out, n);
        func_ov001_02200974(out, n, t2);
    }
    func_ov001_02202c44(t1);
    func_ov001_02202c44(t2);
    return 0;
}

extern "C" void func_ov001_022009dc(s32 x, char *b, s32 n, char *key, s32 klen) {
    s32 h = n / 2;
    s32 k = x % klen;
    s32 i;
    for (i = 0; i < h; i++) {
        b[i] = i;
        b[i] ^= key[k++];
        if (k >= klen) {
            k = 0;
        }
    }
}

extern "C" void func_ov001_022009b0(char *a, u8 *b, s32 n) {
    s32 h = n / 2;
    s32 i;
    for (i = 0; i < h; i++) {
        b[h + i] ^= a[i];
    }
}

extern "C" void func_ov001_02200974(u8 *a, s32 n, u8 *t) {
    s32 h = n / 2;
    func_ov001_02200870(t, a + h, h);
    func_ov001_02200870(t + h, a, h);
    func_ov001_02200870(a, t, n);
}

extern "C" s32 func_ov001_02200950(s32 a, s32 b) {
    if (b > 0) {
        return data_ov001_0222c68c(b);
    }
    return 0;
}

extern "C" s32 func_ov001_02200938(s32 a, s32 b) {
    return data_ov001_0222c698(b);
}

extern "C" s32 func_ov001_022008d4(u32 a, u32 b, u32 c) {
    data_ov001_0222a490.unk_10 = func_ov001_0220078c(a);
    data_ov001_0222a490.unk_14 = func_ov001_0220078c(b);
    data_ov001_0222a490.unk_18 = func_ov001_0220078c(c);
    if (func_ov065_02261118(&data_ov001_0222a490) < 0) {
        return -1;
    }
    if (data_ov065_0228ebd8 == 0) {
        do {
            func_021132e0(100);
        } while (data_ov065_0228ebd8 == 0);
    }
    return 0;
}

extern "C" s32 func_ov001_022008a8() {
    if (func_ov065_02261110() < 0) {
        return -1;
    }
    return -(func_ov001_02203004() != 0 ? 1 : 0);
}

extern "C" s32 func_ov001_02200880(u8 *a, u8 *b, s32 n) {
    s32 r = 0;
    s32 t;
    goto test;
loop:
    a++;
    b++;
test:
    t = n;
    n--;
    if (t > 0) {
        r = *a - *b;
        if (r == 0) {
            goto loop;
        }
    }
    return r;
}

extern "C" void func_ov001_02200870(void *dst, void *src, u32 n) {
    func_02116048(src, dst, n);
}

extern "C" void *func_ov001_02200864(void *p, u32 v, u32 n) {
    return func_02115fb4(p, (u8)v, n);
}

extern "C" s32 func_ov001_02200848(s32 a, s32 b, s32 c, s32 d, u8 *p, s32 *q) {
    s32 v = *q;
    *p = v;
    return func_ov065_02261524(a, b, c, d, p);
}

extern "C" s32 func_ov001_022007fc(s32 a, Unk_ov001_022007fc_P *p, s32 c, s32 d, s32 *q) {
    s64 sum = 0;
    Unk_ov001_022007fc_P t = *p;
    sum += q[0] * 0x1ff6210 / 0x40;
    sum += q[1] * 0x1ff6210 / 0x40;
    return func_ov065_02260fa4(&t, 1, sum);
}

extern "C" s32 func_ov001_022007e4(s32 a, s32 b, s32 c, s32 d, u8 *p, u32 v) {
    *p = v;
    return func_ov065_0226149c(a, b, c, d, p);
}

extern "C" s32 func_ov001_022007e0(s32 s, s32 l, s32 o, void *v, s32 n) {
}

extern "C" s32 func_ov001_022007d8(s32 a, s32 b, s32 c) {
    return func_ov065_02261610();
}

extern "C" s32 func_ov001_022007cc(s32 a, u8 *b, s32 c) {
    *b = c;
    return func_ov065_022615f0();
}

extern "C" s32 func_ov001_022007c4(s32 s) {
    return func_ov065_0226148c();
}

extern "C" u32 func_ov001_0220078c(u32 v) {
    return ((v << 24) & 0xff000000) | (((v << 8) & 0xff0000) | (((v >> 24) & 0xff) | ((v >> 8) & 0xff00)));
}

extern "C" u16 func_ov001_02200774(s32 v) {
    return (u16)(((v >> 8) & 0xff) | ((v << 8) & 0xff00));
}

extern "C" u32 func_ov001_0220073c(u32 v) {
    return ((v << 24) & 0xff000000) | (((v << 8) & 0xff0000) | (((v >> 24) & 0xff) | ((v >> 8) & 0xff00)));
}

extern "C" s32 func_ov001_02200724(s32 v) {
    return (u16)(((v >> 8) & 0xff) | ((v << 8) & 0xff00));
}

extern "C" s32 func_ov001_02200710(char *s) {
    s32 n = 0;
    while (s[n] != 0) {
        n++;
    }
    return n;
}

extern "C" u16 func_ov001_02200694(void) {
    if (data_ov001_0222b8c8 == 0) {
        u32 s = 0;
        u32 buf[3];
        func_ov001_02200864(buf, 0, 12);
        if (func_0211d2e0(buf) == 0) {
            s = s + (buf[0] << 10);
            s = s + (buf[1] << 3);
            s = s + buf[2];
        }
        data_ov001_0222b8e0.seed = s;
        data_ov001_0222b8e0.mul = 0x5d588b65;
        data_ov001_0222b8e0.add = 0x269ec3;
        data_ov001_0222b8c8 = 1;
    }
    data_ov001_0222b8e0.seed = data_ov001_0222b8e0.add + data_ov001_0222b8e0.mul * data_ov001_0222b8e0.seed;
    return (u16)(((data_ov001_0222b8e0.seed >> 16) * 0x7fff) >> 16);
}

extern "C" void func_ov001_02200688(Unk_ov001_02200680_S *s) {
    s->a = 0;
    s->b = 0;
    s->c = 0;
}

extern "C" void func_ov001_02200680(u32 v, Unk_ov001_02200680_S *s) {
    s->a = v;
    s->b = 1;
}

// Declarations for data defined further down (definition order sets the data layout)
extern "C" s32 data_ov001_0222b8d0;
extern "C" u8 data_ov001_0222b908[0x64];
extern "C" u32 data_ov001_0222b8c8;
extern "C" u32 data_ov001_0222bbec[0x100];
extern "C" void *data_ov001_0222b8cc;
extern "C" u8 data_ov001_0222b8d8[8];
extern "C" void *data_ov001_0222b8c4;
extern "C" u8 *data_ov001_0222b8d4;
extern "C" s32 data_ov001_0222a48c;
extern "C" s16 data_ov001_0222a488[2];
extern "C" u8 data_ov001_0222a480[4];
extern "C" Unk_ov001_022008d4_Cfg data_ov001_0222a490;
extern "C" s32 data_ov001_0222b8c0;
extern "C" Unk_ov001_022006e0_Rng data_ov001_0222b8e0;
extern "C" u8 data_ov001_0222bfec[0x6a0];
extern "C" Unk_ov001_02200d58_Sess data_ov001_0222b8ec;
extern "C" s32 data_ov001_0222a484;
extern "C" u8 data_ov001_0222b96c[0x280];

extern "C" s32 data_ov001_0222b8d0 = 0;

extern "C" u8 data_ov001_0222b908[0x64] = {0};

extern "C" u32 data_ov001_0222b8c8 = 0;

extern "C" u32 data_ov001_0222bbec[0x100] = {0};

extern "C" void *data_ov001_0222b8cc = 0;

extern "C" u8 data_ov001_0222b8d8[8] = {0};

extern "C" void *data_ov001_0222b8c4 = 0;

extern "C" u8 *data_ov001_0222b8d4 = 0;

extern "C" s32 data_ov001_0222a48c = -1;

extern "C" s16 data_ov001_0222a488[2] = {-1, -1};

extern "C" u8 data_ov001_0222a480[4] = {9, 8, 0, 0};

extern "C" Unk_ov001_022008d4_Cfg data_ov001_0222a490 = {0x01000000, func_ov001_02200950, func_ov001_02200938, 0, 0, 0, 0, {0}, 0x1000, 0x1000, {0}};

extern "C" s32 data_ov001_0222b8c0 = 0;

extern "C" Unk_ov001_022006e0_Rng data_ov001_0222b8e0 = {0};

extern "C" u8 data_ov001_0222bfec[0x6a0] = {0};

extern "C" Unk_ov001_02200d58_Sess data_ov001_0222b8ec = {0};

extern "C" s32 data_ov001_0222a484 = -1;

extern "C" u8 data_ov001_0222b96c[0x280] = {0};
