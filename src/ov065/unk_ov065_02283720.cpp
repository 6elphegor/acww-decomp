// mwcc-flags: -O4,p -str reuse

#include "types.h"

extern "C" u8 data_ov065_0228df8c[16];



namespace N02282f90 {
extern "C" {


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

















typedef void (*Unk_ov065_022837bc_Cb0)(s32, s32, s32, void *, s32);
typedef void (*Unk_ov065_022837bc_Cb1)(s32, s32, s32, s32, s32, s32, void *, s32, s32);
typedef void (*Unk_ov065_022837bc_Cb2)(s32, s32, s32, s32, s32, s32, s32);
typedef void (*Unk_ov065_022837bc_Cb3)(s32, s32, s32, s32);



}

}
}

namespace N022838c4 {
extern "C" {


// ov065_058: GameSpy-style pauthr/getpidr/setpdr reply handling, string buffer helpers (0x022838c4..0x022841a4)

struct Unk_ov065_022786bc_Vec;

struct Unk_ov065_02284100_Buf {
    char *unk_00;
    s32 unk_04;
    s32 unk_08;
};

struct Unk_ov065_0228412c_Obj {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0c;
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    s32 unk_1c;
    s32 unk_20;
    s32 unk_24;
    s32 (*unk_28)(Unk_ov065_0228412c_Obj *, Unk_ov065_0228412c_Obj *, s32, s32, s32, s32, s32);
    s32 (*unk_2c)(Unk_ov065_0228412c_Obj *, Unk_ov065_0228412c_Obj *, s32, s32, s32, s32, s32);
    s32 (*unk_30)(Unk_ov065_0228412c_Obj *, s32, s32, s32, s32);
};

extern "C" {
extern Unk_ov065_022786bc_Vec *data_ov065_022910f4;
extern s32 data_ov065_0228df74;
extern s32 data_ov065_022910f8;
extern char *data_ov065_022910f0;
extern s32 data_ov065_02291100;
extern s32 data_ov065_022910ec;
extern volatile s32 data_ov065_022910fc;
extern char data_ov065_02291304[];
extern char *data_ov065_0228df78;



s32 func_0212a15c(const char *, const char *, u32);
s32 func_0212b770(const char *);
char *func_02129f1c(const char *, const char *);
u32 func_021277d4(const char *);
void func_021277a4(char *, const char *);
void func_021289b4(void *, void *, u32);
void func_02128a00(void *, const void *, s32);
s32 func_02128c70();
void func_02128c60(s32);
s32 func_02127b40(s32);

void *func_ov065_0227866c(Unk_ov065_022786bc_Vec *, s32);
s32 func_ov065_02278684(Unk_ov065_022786bc_Vec *);
void func_ov065_022837bc(s32, s32, s32, char *, s32);
s32 func_ov065_02283868(char *, s32);
void func_ov065_02283744();
s32 func_ov065_02278ee8(s32);
s32 func_ov065_02278ce0(s32, char *, s32, s32);
void func_ov065_02278da4(s32, s32);
void func_ov065_02278dbc(s32);
void func_ov065_02277ac8(void *);
void *func_ov065_02277ad8(void *, s32);
void *func_ov065_02277af0(s32);
s32 func_ov065_02279144(u8 *);
void func_ov065_02286564(Unk_ov065_0228412c_Obj *);

void func_ov065_02283af0(char *, s32);
void func_ov065_02283a88(char *, s32);
void func_ov065_022839e4(char *, s32);
s32 func_ov065_02283974(char *, s32);
s32 func_ov065_02283b68(s32, s32, s32);
char *func_ov065_02283c34(char *, char *);
char *func_ov065_02283c4c(char *, char *);
s32 func_ov065_02283c2c(s32);
void func_ov065_02283e00();
s32 func_ov065_02283fdc(u8 *);



























}

}
}

namespace N022838c4 { extern "C" {
char *func_ov065_02283e88(char *out, char *in) {
    s32 ok;
    s32 klen;
    s32 i;
    s32 j;
    klen = func_021277d4("3b8dd8995f7c40a9a5c5b7dd5b481341");
    ok = func_ov065_02283fdc((u8 *)in);
    i = 0;
    j = 0;
    for (; i < 0x20; i++) {
        if (ok == 0 || i == 0 || i == 0xd) {
            out[i] = func_02128c70() % 0x5d + 0x21;
        } else {
            s8 c;
            s32 t;
            s32 x;
            if (i == 1 || i == 0xe) {
                c = in[i];
            } else {
                c = in[i - 1];
            }
            t = (u8)in[i];
            x = ("3b8dd8995f7c40a9a5c5b7dd5b481341"[(i + t) % klen] + i * t) % 0x20;
            out[i] = func_02127b40((u8)in[x] ^ "3b8dd8995f7c40a9a5c5b7dd5b481341"[(c * j) % klen]) % 0x5d + 0x21;
        }
        j += 0x4647;
    }
    return out;
}
} }

extern "C" char *data_ov065_0228df78 = (char *)data_ov065_0228df8c; //@
extern "C" { s32 data_ov065_02291100; } //@
namespace N022838c4 { extern "C" {
BOOL func_ov065_02283e5c(u8 *a, u8 *b) {
    s32 i;
    for (i = 0; i < 0x20; i++) {
        if (i == 0 || i == 0xd) {
            continue;
        }
        if (a[i] != b[i]) {
            return FALSE;
        }
    }
    return TRUE;
}
} }

extern "C" u8 data_ov065_0228df7c[16] = {0x13, 0x1d, 0x01, 0x04, 0x00, 0x00, 0x00, 0x28, 0x1f, 0x06, 0x45, 0x34, 0x3f, 0x01, 0x1b, 0x00}; //@
namespace N022838c4 { extern "C" {
void func_ov065_02283e00() {
    if (data_ov065_0228df74 != -1) {
        func_ov065_02278da4(data_ov065_0228df74, 2);
        func_ov065_02278dbc(data_ov065_0228df74);
    }
    data_ov065_0228df74 = -1;
    func_ov065_02283744();
    if (data_ov065_022910f0 != 0) {
        func_ov065_02277ac8(data_ov065_022910f0);
        data_ov065_022910f0 = 0;
        data_ov065_02291100 = 0;
        data_ov065_022910ec = 0;
    }
}
} }

extern "C" { u8 data_ov065_02291104[0x100]; } //@
namespace N022838c4 { extern "C" {
s32 func_ov065_02283d14() {
    s32 r;
    if (data_ov065_0228df74 == -1) {
        return 0;
    }
    if (data_ov065_022910f8 != 5) {
        return 0;
    }
    if (func_ov065_02283c2c(data_ov065_0228df74) != 0) {
        do {
            if (data_ov065_02291100 - data_ov065_022910ec < 0x80) {
                if (data_ov065_02291100 < 0x100) {
                    data_ov065_02291100 = 0x100;
                } else {
                    data_ov065_02291100 = data_ov065_02291100 * 2;
                }
                data_ov065_022910f0 = (char *)func_ov065_02277ad8(data_ov065_022910f0, data_ov065_02291100 + 1);
                if (data_ov065_022910f0 == 0) {
                    return 0;
                }
            }
            r = func_ov065_02278ce0(data_ov065_0228df74, data_ov065_022910f0 + data_ov065_022910ec, data_ov065_02291100 - data_ov065_022910ec, 0);
            if (r <= 0) {
                func_ov065_02283e00();
                return 0;
            }
            data_ov065_022910ec += r;
            data_ov065_022910f0[data_ov065_022910ec] = 0;
            r = func_ov065_02283868(data_ov065_022910f0, data_ov065_022910ec);
            if (r == data_ov065_022910ec) {
                data_ov065_022910ec = 0;
            } else {
                func_021289b4(data_ov065_022910f0, data_ov065_022910f0 + r, data_ov065_022910ec - r);
                data_ov065_022910ec -= r;
            }
        } while (func_ov065_02283c2c(data_ov065_0228df74) != 0);
    }
    if (data_ov065_0228df74 == -1) {
        return 0;
    }
    return 1;
}
} }

extern "C" { s32 data_ov065_022910ec; } //@
namespace N022838c4 { extern "C" {
void func_ov065_02283ce0(char *p, s32 n) {
    s32 i;
    char *k;
    k = data_ov065_0228df78;
    for (i = 0; i < n; i++) {
        p[i] ^= *k++;
        if (k[0] == 0) {
            k = data_ov065_0228df78;
        }
    }
}
} }

namespace N022838c4 { extern "C" {
char *func_ov065_02283c4c(char *s, char *key) {
    char buf[256] = "\\";
    char *f;
    char *d;
    data_ov065_022910fc ^= 1;
    func_021277a4(buf, key);
    func_021277a4(buf, "\\");
    f = func_02129f1c(s, buf);
    if (f == 0) {
        return 0;
    }
    f += func_021277d4(buf);
    {
        char *r = data_ov065_02291304 + (data_ov065_022910fc << 8);
        d = r;
        while (*f != 0 && *f != '\\') {
            *d++ = *f++;
        }
        *d = 0;
        return r;
    }
}
} }

extern "C" u8 data_ov065_0228df8c[16] = {0x00, 0x61, 0x6d, 0x65, 0x53, 0x70, 0x79, 0x33, 0x44, 0, 0, 0, 0, 0, 0, 0}; //@
namespace N022838c4 { extern "C" {
char *func_ov065_02283c34(char *s, char *key) {
    char *r = func_ov065_02283c4c(s, key);
    if (r == 0) {
        r = "";
    }
    return r;
}
} }

namespace N022838c4 { extern "C" {
s32 func_ov065_02283c2c(s32 a) {
    return func_ov065_02278ee8(a);
}
} }

namespace N022838c4 { extern "C" {
char *func_ov065_02283bd4(char *s, s32 len) {
    char *p = s;
    s32 n = len - 6;
    if (n > 0) {
        do {
            if (p[0] == '\\' && p[1] == 'f' && p[2] == 'i' && p[3] == 'n' && p[4] == 'a' && p[5] == 'l' && p[6] == '\\') {
                return p;
            }
            p++;
        } while (p - s < n);
    }
    return 0;
}
} }

namespace N022838c4 { extern "C" {
s32 func_ov065_02283b68(s32 a, s32 b, s32 c) {
    s32 i;
    if (data_ov065_022910f4 == 0) {
        return -1;
    }
    i = 0;
    if (i < func_ov065_02278684(data_ov065_022910f4)) {
        do {
            s32 *e = (s32 *)func_ov065_0227866c(data_ov065_022910f4, i);
            if (e[0] == a && e[1] == b && e[2] == c) {
                return i;
            }
            i++;
        } while (i < func_ov065_02278684(data_ov065_022910f4));
    }
    return -1;
}
} }

extern "C" u8 data_ov065_0228df9c[16] = {0x00, 0x72, 0x6f, 0x6a, 0x65, 0x63, 0x74, 0x41, 0x70, 0x68, 0x65, 0x78, 0, 0, 0, 0}; //@
namespace N022838c4 { extern "C" {
void func_ov065_02283af0(char *s, s32 len) {
    s32 a = func_0212b770(func_ov065_02283c34(s, "pauthr"));
    s32 b = func_0212b770(func_ov065_02283c34(s, "lid"));
    char *m = func_ov065_02283c34(s, "errmsg");
    s32 i = func_ov065_02283b68(0, b, 0);
    if (i != -1) {
        s32 *e = (s32 *)func_ov065_0227866c(data_ov065_022910f4, i);
        e[2] = a;
        func_ov065_022837bc(i, a > 0 ? 1 : 0, 0, m, 0);
    }
}
} }

namespace N022838c4 { extern "C" {
void func_ov065_02283a88(char *s, s32 len) {
    s32 i;
    s32 a = func_0212b770(func_ov065_02283c34(s, "getpidr"));
    s32 b = func_0212b770(func_ov065_02283c34(s, "lid"));
    i = func_ov065_02283b68(3, b, 0);
    if (i != -1) {
        s32 *e = (s32 *)func_ov065_0227866c(data_ov065_022910f4, i);
        e[2] = a;
        func_ov065_022837bc(i, a > 0 ? 1 : 0, 0, 0, 0);
    }
}
} }

extern "C" { s32 data_ov065_022910f8; } //@
namespace N022838c4 { extern "C" {
void func_ov065_022839e4(char *s, s32 len) {
    s32 a = func_0212b770(func_ov065_02283c34(s, "getpdr"));
    s32 b = func_0212b770(func_ov065_02283c34(s, "lid"));
    s32 c = func_0212b770(func_ov065_02283c34(s, "pid"));
    s32 d = func_0212b770(func_ov065_02283c34(s, "mod"));
    s32 i = func_ov065_02283b68(1, b, c);
    if (i != -1) {
        s32 e = func_0212b770(func_ov065_02283c34(s, "length"));
        char *p = func_02129f1c(s, "\\data\\");
        char *q;
        if (p == 0) {
            e = 0;
            q = "";
        } else {
            q = p + 6;
        }
        func_ov065_022837bc(i, a, d, q, e);
    }
}
} }

namespace N022838c4 { extern "C" {
s32 func_ov065_02283974(char *s, s32 len) {
    s32 a = func_0212b770(func_ov065_02283c34(s, "setpdr"));
    s32 b = func_0212b770(func_ov065_02283c34(s, "pid"));
    s32 c = func_0212b770(func_ov065_02283c34(s, "lid"));
    s32 d = func_0212b770(func_ov065_02283c34(s, "mod"));
    s32 i = func_ov065_02283b68(2, c, b);
    if (i != -1) {
        func_ov065_022837bc(i, a, d, 0, 0);
    }
}
} }

extern "C" { char data_ov065_02291304[0x200]; } //@
namespace N022838c4 { extern "C" {
void func_ov065_022838c4(char *s, s32 len) {
    s[len] = 0;
    if (func_0212a15c(s, "\\pauthr\\", 8) == 0) {
        func_ov065_02283af0(s, len);
    } else if (func_0212a15c(s, "\\getpidr\\", 9) == 0) {
        func_ov065_02283a88(s, len);
    } else if (func_0212a15c(s, "\\getpidr\\", 9) == 0) {
        func_ov065_02283a88(s, len);
    } else if (func_0212a15c(s, "\\getpdr\\", 8) == 0) {
        func_ov065_022839e4(s, len);
    } else if (func_0212a15c(s, "\\setpdr\\", 8) == 0) {
        func_ov065_02283974(s, len);
    }
}
} }

extern "C" s32 data_ov065_0228df74 = -1; //@
namespace N02282f90 { extern "C" {
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
} }

namespace N02282f90 { extern "C" {
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
} }

extern "C" { volatile s32 data_ov065_022910fc; } //@
extern "C" { char *data_ov065_022910f0; } //@
namespace N02282f90 { extern "C" {
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
} }

namespace N02282f90 { extern "C" {
void func_ov065_02283728(char *dst, const char *src, s32 n) {
    func_0212a2ec(dst, src, n);
    *(dst + n - 1) = 0;
}
} }

namespace N02282f90 { extern "C" {
void func_ov065_02283720(void *h, const char *fmt, ...) {
}
} }

extern "C" { u8 data_ov065_02291204[0x100]; } //@

extern "C" { void *data_ov065_022910f4; } //@
