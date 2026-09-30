// mwcc-flags: -O4,p
#include "types.h"

// ov065_009: socket/SSL library: checksum, init, record send/receive buffering (0x0226482c..0x02265074)

struct Unk_ov065_02264a48_Cfg {
    u32 unk_00;
    void *(*unk_04)(u32);
    void (*unk_08)(void *);
    s32 (*unk_0c)(void);
    s32 (*unk_10)(void);
    u32 unk_14;
    u32 unk_18;
    u32 unk_1c;
    u32 unk_20;
    u32 unk_24;
    u32 unk_28;
    u32 unk_2c;
};

struct Unk_ov065_02264a48_Rng {
    u64 unk_00;
    u64 unk_08;
    u64 unk_10;
};

struct Unk_ov065_02264c44_Ent {
    u8 unk_00[4];
    u16 unk_04;
    u8 unk_06[0x2e];
    void *unk_34;
};

struct Unk_ov065_02264c44_Sub {
    void *unk_00;
    void *unk_04;
    u8 unk_08;
    u8 unk_09;
};

struct Unk_ov065_02264c44_Thr {
    u8 unk_00[0x68];
    Unk_ov065_02264c44_Thr *unk_68;
    u8 unk_6c[0x38];
    Unk_ov065_02264c44_Sub *unk_a4;
};

struct Unk_ov065_02264c44_Info {
    u32 unk_00;
    Unk_ov065_02264c44_Thr *unk_04;
    Unk_ov065_02264c44_Thr *unk_08;
};

struct Unk_ov065_02264d24_Ent {
    u8 unk_00[0x50];
    s32 unk_50;
    u8 unk_54[6];
    u8 unk_5a;
    u8 unk_5b;
};

struct Unk_ov065_02264d80_Conn {
    u8 unk_000[0x2c0];
    u8 unk_2c0[0xb8];
    u8 unk_378[0xb0];
    u8 unk_428;
    u8 unk_429;
    u8 unk_42a;
    u8 unk_42b[0x3cd];
    u8 *unk_7f8;
    u32 unk_7fc;
    u32 unk_800;
};

struct Unk_ov065_02264d80_Obj {
    u8 unk_00[8];
    u8 unk_08;
    u8 unk_09[3];
    Unk_ov065_02264d80_Conn *unk_0c;
    u8 unk_10[0x34];
    u32 unk_44;
};

extern "C" {
extern u32 data_ov065_0228ebc0;
extern u32 data_ov065_0228eba4;
extern u32 data_ov065_0228ebd8;
extern u32 data_ov065_0228b41c;
extern u8 data_ov065_0228ee40[];
extern u8 data_ov065_0228ed80[];
extern u32 data_ov065_0228ebe4;
extern u32 data_ov065_0228ebe8;
extern u32 data_ov065_0228ebec;
extern void (*data_ov065_0228ebcc)(void);
extern u32 data_ov065_0228ebd4;
extern u32 data_ov065_0228eba0;
extern u32 data_ov065_0228ebfc[2];
extern u32 data_ov065_0228ebb0;
extern u8 data_ov065_0228ec58[];
extern Unk_ov065_02264c44_Info data_021fcc2c;
extern Unk_ov065_02264c44_Ent data_ov065_0228f200[8];
extern void (*data_ov065_0228ebd0)(void *);
extern u32 data_ov065_0228ebb4;
extern Unk_ov065_02264d24_Ent data_ov065_02290438[4];
extern void *(*data_ov065_0228ebc8)(u32);
extern void *(*data_ov065_0228eba8)(void);
extern s32 (*data_ov065_0228ebac)(void);
extern u32 data_ov065_0228ebbc;
extern u16 data_ov065_0228eb94;
extern u32 data_ov065_0228ebe0;
extern u32 data_ov065_0228ebf0;
extern u32 data_ov065_0228ebb8;
extern u16 data_ov065_0228eb98;
extern u8 data_ov065_0228ebf4[];
extern u8 data_ov065_0228eb8c;
extern Unk_ov065_02264a48_Rng data_ov065_0228ec04;
extern u8 data_ov065_022903c0[];
extern u8 data_ov065_0228fbc0[];

void func_ov065_02262ae4(void);
void func_ov065_02261fd8(void);
u32 func_ov065_02265dac(void *, void *);
u32 func_ov065_0226242c(void *, u32, u32, u32, Unk_ov065_02264d80_Obj *);
u8 *func_ov065_02262708(u32 *, Unk_ov065_02264d80_Obj *);
void func_ov065_02262670(u32, Unk_ov065_02264d80_Obj *);
void func_ov065_02265b9c(void *, void *);
s32 func_ov065_02265d5c(void *, u32, Unk_ov065_02264d80_Obj *);
s32 func_ov065_02265a5c(Unk_ov065_02264d80_Obj *);

u64 func_01ffa6b4(void);
u32 func_01ffa2ec(void);
void func_01ffa3d4(u32);
void func_02000b44(u32);
void func_02113384(void *, u32);
void func_02113788(void *);
void func_021138d0(void *);
s32 func_02113774(void *);
void func_0211366c(void *);
void func_02113498(void);
void func_021132e0(void);
void func_02113a70(void *, void *, u32, void *, u32, u32);
void func_02115640(void *);
void *func_02115fb4(void *, s32, u32);
void func_02116048(void *, void *, u32);

u32 func_ov065_02264900(u8 *p, u32 len, u32 sum);
s32 func_ov065_02264848(u32 a);
void func_ov065_02264c44(u32 a);
s32 func_ov065_02264a08(void);
void func_ov065_02264d0c(void);
void func_ov065_02264f28(Unk_ov065_02264d80_Obj *o);
s32 func_ov065_02264c18(void);
void func_ov065_02264c1c(void);
}

extern "C" {

u32 func_ov065_0226482c(u32 a) {
    if (func_ov065_02264848(a) == 0) {
        a = data_ov065_0228ebc0;
    }
    return a;
}

s32 func_ov065_02264848(u32 a) {
    s32 r = TRUE;
    s32 z = 0;
    if (a != (u32)-1) {
        if (a != 0x7f000001) {
            u32 m = data_ov065_0228eba4;
            if ((a & m) != (data_ov065_0228ebd8 & m)) {
                r = z;
            }
        }
    }
    return r;
}

s32 func_ov065_02264884(u8 *a, u32 b, u8 *c, u32 d) {
    u32 s = func_ov065_02264900(a, b, d);
    s = func_ov065_02264900(c + 0xc, 8, s);
    s += b;
    if ((s & 0x10000) != 0) {
        s = (s + 1) & 0xffff;
    }
    if (s != 0xffff) {
        return 1;
    }
    return 0;
}

u32 func_ov065_022648ec(u32 x);

u32 func_ov065_022648d4(u8 *a, u32 b) {
    return func_ov065_022648ec((u16)func_ov065_02264900(a, b, 0));
}

u32 func_ov065_022648ec(u32 x) {
    x = (u16)(x ^ 0xffff);
    if (x == 0) {
        x = 0xffff;
    }
    return x;
}

u32 func_ov065_02264900(u8 *p, u32 len, u32 sum) {
    u32 t;
    if (((u32)p & 1) != 0) {
        while (len > 1) {
            t = (u16)((p[0] << 8) | p[1]);
            sum += t;
            p += 2;
            len -= 2;
        }
    } else {
        u32 w;
        u32 v;
        u16 h = sum;
        sum = (u16)((h >> 8) | (h << 8));
        while (len > 1) {
            w = *(u16 *)p;
            sum += w;
            p += 2;
            len -= 2;
        }
        v = ((sum >> 8) & 0xff00ff) | ((sum << 8) & 0xff00ff00);
        sum = (v >> 16) | (v << 16);
    }
    if (len != 0) {
        sum += p[0] << 8;
    }
    t = (sum & 0xffff) + (sum >> 16);
    t = t + (t >> 16);
    return (u16)t;
}

void func_ov065_0226498c(u32 a) {
    data_ov065_0228b41c = a;
    func_02113384(data_ov065_0228ee40, a);
    func_02113384(data_ov065_0228ed80, a);
}

void func_ov065_022649b8(void) {
    func_ov065_02264a08();
    func_02113788(data_ov065_0228ed80);
    func_021138d0(data_ov065_0228ee40);
    data_ov065_0228ebe4 = 0;
    func_ov065_02264c44(0);
    data_ov065_0228ebe8 = 0;
    data_ov065_0228ebec = 0;
}

void func_ov065_022649fc(void (*f)(void)) {
    data_ov065_0228ebcc = f;
}

s32 func_ov065_02264a08(void) {
    u32 s = func_01ffa2ec();
    s32 r = func_02113774(data_ov065_0228ed80);
    if (r == 0) {
        if (data_ov065_0228ebd4 == 0) {
            data_ov065_0228ebd4 = 1;
            func_0211366c(data_ov065_0228ed80);
        }
    }
    func_01ffa3d4(s);
    return r;
}

void func_ov065_02264a48(Unk_ov065_02264a48_Cfg *c) {
    func_02000b44(0x2000bfc);
    u64 seed = *(u64 *)&c->unk_14;
    if (seed != 0) {
        data_ov065_0228ec04.unk_00 = seed;
        data_ov065_0228ec04.unk_08 = 0x5d588b656c078965ULL;
        data_ov065_0228ec04.unk_10 = 0x269ec3;
    } else {
        data_ov065_0228ec04.unk_00 = func_01ffa6b4();
        data_ov065_0228ec04.unk_08 = 0x5d588b656c078965ULL;
        data_ov065_0228ec04.unk_10 = 0x269ec3;
    }
    if (c->unk_04 != 0 && c->unk_08 != 0) {
        data_ov065_0228ebc8 = c->unk_04;
        data_ov065_0228ebd0 = c->unk_08;
    } else {
        data_ov065_0228ebc8 = (void *(*)(u32))func_ov065_02264c1c;
        data_ov065_0228ebd0 = (void (*)(void *))func_ov065_02264c1c;
    }
    data_ov065_0228ebbc = c->unk_00;
    if (c->unk_24 != 0) {
        data_ov065_0228eb94 = c->unk_24;
    } else {
        data_ov065_0228eb94 = 0x5b4;
    }
    data_ov065_0228ebe0 = c->unk_28;
    data_ov065_0228ebb4 = c->unk_2c;
    if (c->unk_0c != 0) {
        data_ov065_0228eba8 = (void *(*)(void))c->unk_0c;
    } else {
        data_ov065_0228eba8 = (void *(*)(void))func_ov065_02264c1c;
    }
    if (c->unk_10 != 0) {
        data_ov065_0228ebac = c->unk_10;
    } else {
        data_ov065_0228ebac = func_ov065_02264c18;
    }
    data_ov065_0228ebe8 = c->unk_1c;
    data_ov065_0228ebec = c->unk_20;
    data_ov065_0228ebf0 = 0;
    data_ov065_0228ebb8 = 0;
    {
        Unk_ov065_02264a48_Rng *r = &data_ov065_0228ec04;
        r->unk_00 = r->unk_08 * r->unk_00 + r->unk_10;
        u32 hi = (u32)(r->unk_00 >> 32);
        data_ov065_0228eb98 = (((u64)hi * 0xf88) >> 32) + 0x400;
    }
    func_02115640(data_ov065_0228ebf4);
    data_ov065_0228eb8c = 0;
    func_02113a70(data_ov065_0228ee40, (void *)func_ov065_02262ae4, 0, data_ov065_022903c0, 0x800, data_ov065_0228b41c);
    func_02113a70(data_ov065_0228ed80, (void *)func_ov065_02261fd8, 0, data_ov065_0228fbc0, 0x800, data_ov065_0228b41c);
    func_0211366c(data_ov065_0228ee40);
    func_0211366c(data_ov065_0228ed80);
}

s32 func_ov065_02264c18(void) {
    return 1;
}

void func_ov065_02264c1c(void) {
}

void func_ov065_02264c20(void) {
    if (data_ov065_0228ebb4 == 0) {
        func_02113498();
    } else {
        func_021132e0();
    }
}

void func_ov065_02264c44(u32 a) {
    BOOL f;
    if (data_ov065_0228ebd8 != 0) {
        f = TRUE;
    } else {
        f = FALSE;
    }
    data_ov065_0228eba0 = a;
    data_ov065_0228ebd8 = 0;
    data_ov065_0228eba4 = 0;
    data_ov065_0228ebc0 = 0;
    data_ov065_0228ebfc[0] = 0;
    data_ov065_0228ebfc[1] = 0;
    data_ov065_0228ebb0 = 0;
    if (f) {
        func_02115fb4(data_ov065_0228ec58, 0, 0x60);
        {
            Unk_ov065_02264c44_Thr *t = data_021fcc2c.unk_08;
            if (t != 0) {
                do {
                    Unk_ov065_02264c44_Sub *s = t->unk_a4;
                    if (s != 0) {
                        if (s->unk_00 != 0) {
                            if (s->unk_08 != 10 && s->unk_08 != 11) {
                                s->unk_08 = 0;
                            }
                            if (s->unk_04 != 0) {
                                s->unk_04 = 0;
                                func_0211366c(s->unk_00);
                            }
                        }
                    }
                    t = t->unk_68;
                } while (t != 0);
            }
        }
        {
            s32 i;
            Unk_ov065_02264c44_Ent *e;
            for (i = 0, e = data_ov065_0228f200; i < 8; e++, i++) {
                if (e->unk_04 != 0) {
                    data_ov065_0228ebd0(e->unk_34);
                    e->unk_04 = 0;
                }
            }
        }
        func_ov065_02264d0c();
    }
}

void func_ov065_02264d0c(void) {
    func_02115fb4(data_ov065_02290438, 0, 0x170);
}

void func_ov065_02264d24(s32 now) {
    s32 i;
    Unk_ov065_02264d24_Ent *e;
    for (i = 0, e = data_ov065_02290438; i < 4; e++, i++) {
        if (e->unk_5a != 0) {
            if (now - e->unk_50 > 0xef) {
                e->unk_5a = 0;
            }
        }
    }
}

void func_ov065_02264d58(u32 v) {
    func_02000b44(0x2000c14);
    Unk_ov065_02264c44_Sub *s = ((Unk_ov065_02264c44_Thr *)data_021fcc2c.unk_04)->unk_a4;
    if (s != 0) {
        s->unk_09 = v;
    }
}

void func_ov065_02264d80(Unk_ov065_02264d80_Obj *o) {
    Unk_ov065_02264d80_Conn *c = o->unk_0c;
    if (c->unk_429 == 8) {
        u8 b[32];
        u32 n;
        b[0] = 0x15;
        b[1] = 3;
        b[2] = 0;
        b[3] = 0;
        b[4] = 2;
        b[5] = 1;
        b[6] = 0;
        n = func_ov065_02265dac(c, b);
        func_ov065_0226242c(b, n, 0, 0, o);
    }
    c->unk_429 = 0;
}

u32 func_ov065_02264dd4(u8 *p1, u32 n1, u8 *p2, u32 n2, Unk_ov065_02264d80_Obj *o) {
    Unk_ov065_02264d80_Conn *c = o->unk_0c;
    s32 total = n1 + n2;
    u32 c2;
    u32 sent = 0;
    u32 z1 = 0, z2 = 0, z3 = 0;
    u8 *rec;
    s32 chunk;
    for (;;) {
        u32 c1, len;
        if (total > 0xb4f) {
            chunk = 0xb4f;
        } else {
            chunk = total;
        }
        rec = (u8 *)data_ov065_0228ebc8(chunk + 0x19);
        if (rec == 0) {
            break;
        }
        c1 = n1 >= chunk ? chunk : n1;
        c2 = chunk - c1;
        func_02116048(p1, rec + 5, c1);
        p1 += c1;
        n1 -= c1;
        func_02116048(p2, rec + 5 + c1, c2);
        p2 += c2;
        rec[0] = 0x17;
        rec[1] = 3;
        rec[2] = z1;
        rec[3] = chunk >> 8;
        rec[4] = chunk;
        len = func_ov065_02265dac(c, rec);
        if (func_ov065_0226242c(rec, len, z2, z2, o) < len) {
            chunk = z3;
        }
        data_ov065_0228ebd0(rec);
        total -= chunk;
        sent += chunk;
        if (total == 0) {
            break;
        }
        if (chunk == 0) {
            break;
        }
    }
    return sent;
}

s32 func_ov065_02264eac(Unk_ov065_02264d80_Obj *o) {
    Unk_ov065_02264d80_Conn *c = o->unk_0c;
    if (c->unk_7f8 == 0 || c->unk_42a == 0) {
        func_ov065_02264f28(o);
    }
    if (c->unk_7f8 != 0 && c->unk_42a != 0) {
        return c->unk_7fc - c->unk_800;
    }
    if (c->unk_7f8 == 0) {
        if (o->unk_08 != 4 || c->unk_429 == 9) {
            return -1;
        }
    }
    return 0;
}

void func_ov065_02264f28(Unk_ov065_02264d80_Obj *o) {
    Unk_ov065_02264d80_Conn *c = o->unk_0c;
    u32 len;
    u8 *src;
    BOOL flag;
    if (c->unk_7f8 == 0) {
        if (o->unk_44 < 5) {
            return;
        }
        src = func_ov065_02262708(&len, o);
        len = (src[3] << 8) + src[4] + 5;
        if (len > 0x4805) {
            c->unk_429 = 9;
            return;
        }
        c->unk_7f8 = (u8 *)data_ov065_0228ebc8(len);
        if (c->unk_7f8 == 0) {
            c->unk_429 = 9;
            return;
        }
        c->unk_7fc = len;
        c->unk_800 = 0;
        c->unk_42a = 0;
    } else {
        if (o->unk_44 == 0) {
            return;
        }
    }
    src = func_ov065_02262708(&len, o);
    {
        u32 avail = c->unk_7fc - c->unk_800;
        if (len >= avail) {
            len = avail;
            flag = TRUE;
        } else {
            flag = FALSE;
        }
    }
    func_02116048(src, c->unk_7f8 + c->unk_800, len);
    func_ov065_02262670(len, o);
    if (flag) {
        func_ov065_02265b9c(c, c->unk_7f8);
        if (c->unk_42a != 0) {
            return;
        }
        c->unk_7f8 = 0;
        return;
    }
    c->unk_800 += len;
    return;
}

void func_ov065_0226502c(u32 n, Unk_ov065_02264d80_Obj *o) {
    Unk_ov065_02264d80_Conn *c = o->unk_0c;
    if (n >= c->unk_7fc - c->unk_800) {
        if (c->unk_7f8 != 0) {
            data_ov065_0228ebd0(c->unk_7f8);
        }
        c->unk_7f8 = 0;
    } else {
        c->unk_800 += n;
    }
}

u8 *func_ov065_02265074(u32 *out, Unk_ov065_02264d80_Obj *o) {
    Unk_ov065_02264d80_Conn *c = o->unk_0c;
    u8 **pb;
    if (c->unk_7f8 != 0 && c->unk_42a == 0) {
        if (func_ov065_02265d5c(c->unk_7f8 + c->unk_800, c->unk_7fc - c->unk_800, o) != 0) {
            data_ov065_0228ebd0(c->unk_7f8);
            c->unk_7f8 = 0;
            *out = 0;
            return 0;
        }
        func_ov065_02265b9c(c, c->unk_7f8);
        if (c->unk_42a == 0) {
            c->unk_7f8 = 0;
        }
    }
    pb = &c->unk_7f8;
    if (*pb == 0) {
        do {
            if (func_ov065_02265a5c(o) == 9) {
                *out = 0;
                return 0;
            }
        } while (*pb == 0);
    }
    *out = c->unk_7fc - c->unk_800;
    return c->unk_7f8 + c->unk_800;
}

}
