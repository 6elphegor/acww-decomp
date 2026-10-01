// mwcc-flags: -O4,p
#include "types.h"

// ov065_057: GameSpy-like TCP connect / parse helpers (0x02282f90..0x02283868)

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

extern char data_ov065_0228dd84[];
extern char data_ov065_0228db1c[];
extern char data_ov065_0228dd98[];
extern char data_ov065_0228ddc0[];
extern char data_ov065_0228dadc[];
extern char data_ov065_0228ddf4[];
extern char data_ov065_0228de24[];
extern char data_ov065_0228de4c[];
extern char data_ov065_0228de54[];
extern char data_ov065_0228de60[];
extern char data_ov065_0228de64[];
extern char data_ov065_0228de7c[];
extern char data_ov065_0228de84[];
extern char data_ov065_0228deb4[];
extern char data_ov065_0228dec4[];
extern char data_ov065_0228ded4[];
extern char data_ov065_0228dee8[];
extern char data_ov065_0228df20[];
extern char data_ov065_0228df38[];
extern char data_ov065_0228df50[];
extern char data_ov065_0228df58[];
extern char data_ov065_0228df60[];
extern char data_ov065_0228df6c[];
extern char *data_ov065_0228df78;
extern char data_ov065_0228df7c[];
extern char data_ov065_0228df8c[];
extern char data_ov065_0228df9c[];
extern void *data_ov065_022910f4;

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
s32 func_021277d4(const char *);
s32 func_0212a15c(const char *, const char *, u32);
s32 func_021130d0(char *buf, const char *fmt, ...);
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

static inline BOOL Unk_ov065_02283684_B(char *p) {
    if (p != NULL) {
        return TRUE;
    }
    return FALSE;
}

extern "C" {

s32 func_ov065_02282f90(Unk_ov065_02282f90_Handle *h, char *a, char *b, char *c, char *d, char *e, s32 f, s32 g, s32 p8, s32 p9, s32 p10) {
    Unk_ov065_02282f90_Conn *cn;
    s32 r;
    if ((a == NULL || *a == 0) && (c == NULL || *c == 0) && (d == NULL || *d == 0) && (e == NULL || *e == 0) && f == 0 && (b == NULL || *b == 0)) {
        func_ov065_02283460(h, data_ov065_0228dd84);
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

s32 func_ov065_0228312c(void *h0, void *out, s32 p2) {
    Unk_ov065_02282f90_Conn *cn;
    Unk_ov065_02282f90_Handle *h = (Unk_ov065_02282f90_Handle *)h0;
    cn = (Unk_ov065_02282f90_Conn *)func_ov065_02277af0(0x144);
    if (cn == NULL) {
        func_ov065_02283460(h, data_ov065_0228db1c);
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
        func_ov065_02283460(h, data_ov065_0228db1c);
        return 1;
    }
    cn->unk_13c = 0;
    cn->unk_140 = 0;
    *(Unk_ov065_02282f90_Conn **)out = cn;
    return 0;
}

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
        func_ov065_02283460(h, data_ov065_0228db1c);
        return 1;
    }
    s->unk_04 = func_ov065_02278dd4(2, 1, 0);
    if (s->unk_04 == -1) {
        func_ov065_02283470(h, 5, data_ov065_0228dd98);
        func_ov065_0227e160(h, 3, 1);
        return 3;
    }
    if (func_ov065_0227908c(s->unk_04, 0) == 0) {
        func_ov065_02283470(h, 5, data_ov065_0228ddc0);
        func_ov065_0227e160(h, 3, 1);
        return 3;
    }
    ent = func_ov065_02261408(data_ov065_0228dadc);
    if (ent == NULL) {
        func_ov065_02283470(h, 5, data_ov065_0228ddf4);
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
            func_ov065_02283470(h, 5, data_ov065_0228de24);
            func_ov065_0227e160(h, 3, 1);
            return 3;
        }
    }
    o->unk_14 = 1;
    return 0;
}

void func_ov065_02283304(void *h, s32 p1, s32 p2, const char *p3) {
    char buf[0x40];
    s32 v[3];
    if (func_ov065_02283630(p3, data_ov065_0228de4c, buf, 0x40) != 0) {
        if (func_02128ca4(buf, data_ov065_0228de54, &v[0], &v[1], &v[2]) == 3) {
            func_ov065_02283350(h, v, p1, 2, NULL);
        }
    }
}

s32 func_ov065_02283350(void *h, s32 *a, s32 b, s32 c, const char *dflt) {
    char buf[0x24];
    s32 r;
    if (dflt == NULL) {
        dflt = data_ov065_0228de60;
    }
    r = func_ov065_02280c84(h, b, 0xc9, a);
    if (r != 0) {
        return r;
    }
    func_021130d0(buf, data_ov065_0228de64, 1, c);
    r = func_ov065_0227dc28(h, b, buf);
    if (r != 0) {
        return r;
    }
    r = func_ov065_02280c08(h, b, dflt, -1);
    if (r != 0) {
        return r;
    }
    return 0;
}

s32 func_ov065_022833b4(void *h, Unk_ov065_022833b4_Src *s, char *str) {
    Unk_ov065_022833b4_Pair pr;
    s32 *p;
    s32 r;
    if (func_ov065_02283684(h, str, 1) != 0) {
        return 4;
    }
    if (func_0212a15c(str, data_ov065_0228de7c, 4) != 0) {
        func_ov065_02283470(h, 1, data_ov065_0228de84);
        func_ov065_0227e160(h, 3, 1);
        return 3;
    }
    pr = s->unk_0c;
    if (pr.v[0] != 0) {
        p = (s32 *)func_ov065_02277af0(4);
        if (p == NULL) {
            func_ov065_02283460(h, data_ov065_0228deb4);
            return 1;
        }
        *p = 0;
        r = func_ov065_0227e0e8(h, pr, p, s, 0);
        if (r != 0) {
            return r;
        }
    }
    func_ov065_0228090c(h, s);
    return 0;
}

void func_ov065_02283460(void *h, const char *msg) {
    func_ov065_02283728(((Unk_ov065_02282f90_Handle *)h)->unk_00->unk_000, msg, 0x100);
}

void func_ov065_02283470(void *h, s32 code, const char *msg) {
    Unk_ov065_02282f90_Ctx *c = ((Unk_ov065_02282f90_Handle *)h)->unk_00;
    func_ov065_02283728(c->unk_000, msg, 0x100);
    c->unk_418 = code;
}

s32 func_ov065_02283498(void *h, char *buf, s32 *pos, char *out1, char *out2) {
    s32 c;
    s32 i = *pos;
    char *p = buf + i;
    if (buf[i] != '\\') {
        func_ov065_02283470(h, 1, data_ov065_0228dec4);
        func_ov065_0227e160(h, 3, 1);
        return 3;
    }
    i = 0;
    buf = p + 2;
    c = p[1];
    if (c != '\\') {
        do {
            if (c == 0) {
                func_ov065_02283470(h, 1, data_ov065_0228dec4);
                func_ov065_0227e160(h, 3, 1);
                return 3;
            }
            if (i == 0x1ff) {
                func_ov065_02283470(h, 1, data_ov065_0228dec4);
                func_ov065_0227e160(h, 3, 1);
                return 3;
            }
            *out1 = c;
            out1++;
            i++;
            c = *buf;
            buf++;
        } while (c != '\\');
    }
    *out1 = 0;
    {
        s32 j = 0;
        s32 d;
        while ((d = *buf++) != '\\' && d != 0) {
            if (j == 0x1ff) {
                func_ov065_02283470(h, 1, data_ov065_0228dec4);
                func_ov065_0227e160(h, 3, 1);
                return 3;
            }
            *out2 = d;
            out2++;
            j++;
        }
    }
    *out2 = 0;
    *pos = *pos + (buf - p - 1);
    return 0;
}

s32 func_ov065_02283590(void *h, s32 x, s32 *out) {
    s32 a = 0;
    s32 b = 0;
    s32 r = func_ov065_02278f0c(x, 0, &a, &b);
    if (r == -1) {
        func_ov065_02283720(h, data_ov065_0228ded4);
        func_ov065_02283470(h, 5, data_ov065_0228dee8);
        func_ov065_0227e160(h, 3, 1);
        return 3;
    }
    if (r > 0) {
        if (b != 0) {
            func_ov065_02283720(h, data_ov065_0228df20);
            *out = 4;
            return 0;
        }
        if (a != 0) {
            func_ov065_02283720(h, data_ov065_0228df38);
            *out = 3;
            return 0;
        }
    }
    *out = 0;
    return 0;
}

s32 func_ov065_02283630(const char *hay, const char *needle, char *out, s32 n) {
    s32 c = *needle;
    char *p = func_02129f1c(hay, needle);
    s32 i;
    s32 ch;
    if (p == NULL) {
        return 0;
    }
    p += func_021277d4(needle);
    i = 0;
    while (i < n - 1 && (ch = p[i]) != 0 && ch != c) {
        out[i] = ch;
        i++;
    }
    out[i] = 0;
    return 1;
}

s32 func_ov065_02283684(void *h, const char *str, s32 flag) {
    Unk_ov065_02282f90_Ctx *ctx = ((Unk_ov065_02282f90_Handle *)h)->unk_00;
    char buf[16];
    if (func_0212a15c(str, data_ov065_0228df50, 7) == 0) {
        if (func_ov065_02283630(str, data_ov065_0228df58, buf, 0x10) != 0) {
            ctx->unk_418 = func_0212b770(buf);
        }
        if (func_ov065_02283630(str, data_ov065_0228df60, ctx->unk_000, 0x100) == 0) {
            ctx->unk_000[0] = 0;
        }
        if (flag != 0) {
            BOOL t = Unk_ov065_02283684_B(func_02129f1c(str, data_ov065_0228df6c));
            func_ov065_0227e160(h, 4, t ? 1 : 0);
        }
        return 1;
    }
    return 0;
}

void func_ov065_02283720(void *h, const char *fmt, ...) {
}

void func_ov065_02283728(char *dst, const char *src, s32 n) {
    func_0212a2ec(dst, src, n);
    *(dst + n - 1) = 0;
}

void func_ov065_02283744(void) {
    if (data_ov065_022910f4 != NULL) {
        s32 i = func_ov065_02278684(data_ov065_022910f4) - 1;
        if (i >= 0) {
            do {
                Unk_ov065_02283744_Buf buf = *(Unk_ov065_02283744_Buf *)data_ov065_0228df7c;
                data_ov065_0228df78 = data_ov065_0228df9c;
                func_ov065_02283ce0((char *)&buf, 15);
                func_ov065_022837bc(i, 0, 0, &buf, 0);
                i--;
            } while (i >= 0);
        }
        func_ov065_02278688(data_ov065_022910f4);
        data_ov065_022910f4 = NULL;
    }
}

typedef void (*Unk_ov065_022837bc_Cb0)(s32, s32, s32, void *, s32);
typedef void (*Unk_ov065_022837bc_Cb1)(s32, s32, s32, s32, s32, s32, void *, s32, s32);
typedef void (*Unk_ov065_022837bc_Cb2)(s32, s32, s32, s32, s32, s32, s32);
typedef void (*Unk_ov065_022837bc_Cb3)(s32, s32, s32, s32);

s32 func_ov065_022837bc(s32 idx, s32 a, s32 b, void *p3, s32 p4) {
    if (idx >= 0 && idx < func_ov065_02278684(data_ov065_022910f4)) {
        Unk_ov065_022837bc_Ent *e = (Unk_ov065_022837bc_Ent *)func_ov065_0227866c(data_ov065_022910f4, idx);
        void *cb = e->unk_18;
        if (cb != NULL) {
            switch (e->unk_00) {
            case 0:
                ((Unk_ov065_022837bc_Cb0)cb)(e->unk_04, e->unk_08, a, p3, e->unk_14);
                break;
            case 1:
                ((Unk_ov065_022837bc_Cb1)cb)(e->unk_04, e->unk_08, e->unk_0c, e->unk_10, a, b, p3, p4, e->unk_14);
                break;
            case 2:
                ((Unk_ov065_022837bc_Cb2)cb)(e->unk_04, e->unk_08, e->unk_0c, e->unk_10, a, b, e->unk_14);
                break;
            case 3:
                ((Unk_ov065_022837bc_Cb3)cb)(e->unk_04, e->unk_08, a, e->unk_14);
                break;
            }
        }
        func_ov065_02278570(data_ov065_022910f4, idx);
    }
}

s32 func_ov065_02283868(char *p, s32 n) {
    s32 total = n;
    char *q = (char *)func_ov065_02283bd4(p, n);
    while (n > 0 && q != NULL) {
        s32 len;
        data_ov065_0228df78 = data_ov065_0228df8c;
        len = q - p;
        func_ov065_02283ce0(p, len);
        func_ov065_022838c4(p, len);
        n -= len + 7;
        p = q + 7;
        if (n > 0) {
            q = (char *)func_ov065_02283bd4(p, n);
        }
    }
    return total - n;
}

}
