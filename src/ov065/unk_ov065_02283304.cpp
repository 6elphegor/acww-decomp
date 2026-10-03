// mwcc-flags: -O4,p -str reuse
#include "types.h"

// ov065 TU50: GP gpiTransfer/gpiUnique/gpiUtility (0x02283304..0x02283720)

namespace Na {
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
s32 STD_GetStringLength(const char *);
s32 strncmp(const char *, const char *, u32);
s32 OS_SPrintf(char *buf, const char *fmt, ...);
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
extern "C" {
void func_ov065_02283304(void *h, s32 p1, s32 p2, const char *p3);
s32 func_ov065_02283350(void *h, s32 *a, s32 b, s32 c, const char *dflt);
s32 func_ov065_022833b4(void *h, Unk_ov065_022833b4_Src *s, char *str);
void func_ov065_02283460(void *h, const char *msg);
void func_ov065_02283470(void *h, s32 code, const char *msg);
s32 func_ov065_02283498(void *h, char *buf, s32 *pos, char *out1, char *out2);
s32 func_ov065_02283590(void *h, s32 x, s32 *out);
s32 func_ov065_02283630(const char *hay, const char *needle, char *out, s32 n);
s32 func_ov065_02283684(void *h, const char *str, s32 flag);
}
}

namespace Na {
extern "C" {
s32 func_ov065_02283684(void *h, const char *str, s32 flag) {
    Unk_ov065_02282f90_Ctx *ctx = ((Unk_ov065_02282f90_Handle *)h)->unk_00;
    char buf[16];
    if (strncmp(str, "\\error\\", 7) == 0) {
        if (func_ov065_02283630(str, "\\err\\", buf, 0x10) != 0) {
            ctx->unk_418 = func_0212b770(buf);
        }
        if (func_ov065_02283630(str, "\\errmsg\\", ctx->unk_000, 0x100) == 0) {
            ctx->unk_000[0] = 0;
        }
        if (flag != 0) {
            BOOL t = Unk_ov065_02283684_B(func_02129f1c(str, "\\fatal\\"));
            func_ov065_0227e160(h, 4, t ? 1 : 0);
        }
        return 1;
    }
    return 0;
}
}
}

namespace Na {
extern "C" {
s32 func_ov065_02283630(const char *hay, const char *needle, char *out, s32 n) {
    s32 c = *needle;
    char *p = func_02129f1c(hay, needle);
    s32 i;
    s32 ch;
    if (p == NULL) {
        return 0;
    }
    p += STD_GetStringLength(needle);
    i = 0;
    while (i < n - 1 && (ch = p[i]) != 0 && ch != c) {
        out[i] = ch;
        i++;
    }
    out[i] = 0;
    return 1;
}
}
}

namespace Na {
extern "C" {
s32 func_ov065_02283590(void *h, s32 x, s32 *out) {
    s32 a = 0;
    s32 b = 0;
    s32 r = func_ov065_02278f0c(x, 0, &a, &b);
    if (r == -1) {
        func_ov065_02283720(h, "Error connecting\n");
        func_ov065_02283470(h, 5, "There was an error checking for a completed connection.");
        func_ov065_0227e160(h, 3, 1);
        return 3;
    }
    if (r > 0) {
        if (b != 0) {
            func_ov065_02283720(h, "Connection rejected\n");
            *out = 4;
            return 0;
        }
        if (a != 0) {
            func_ov065_02283720(h, "Connection accepted\n");
            *out = 3;
            return 0;
        }
    }
    *out = 0;
    return 0;
}
}
}

namespace Na {
extern "C" {
s32 func_ov065_02283498(void *h, char *buf, s32 *pos, char *out1, char *out2) {
    s32 c;
    s32 i = *pos;
    char *p = buf + i;
    if (buf[i] != '\\') {
        func_ov065_02283470(h, 1, "Parse Error.");
        func_ov065_0227e160(h, 3, 1);
        return 3;
    }
    i = 0;
    buf = p + 2;
    c = p[1];
    if (c != '\\') {
        do {
            if (c == 0) {
                func_ov065_02283470(h, 1, "Parse Error.");
                func_ov065_0227e160(h, 3, 1);
                return 3;
            }
            if (i == 0x1ff) {
                func_ov065_02283470(h, 1, "Parse Error.");
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
                func_ov065_02283470(h, 1, "Parse Error.");
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
}
}

namespace Na {
extern "C" {
void func_ov065_02283470(void *h, s32 code, const char *msg) {
    Unk_ov065_02282f90_Ctx *c = ((Unk_ov065_02282f90_Handle *)h)->unk_00;
    func_ov065_02283728(c->unk_000, msg, 0x100);
    c->unk_418 = code;
}
}
}

namespace Na {
extern "C" {
void func_ov065_02283460(void *h, const char *msg) {
    func_ov065_02283728(((Unk_ov065_02282f90_Handle *)h)->unk_00->unk_000, msg, 0x100);
}
}
}

namespace Na {
extern "C" {
s32 func_ov065_022833b4(void *h, Unk_ov065_022833b4_Src *s, char *str) {
    Unk_ov065_022833b4_Pair pr;
    s32 *p;
    s32 r;
    if (func_ov065_02283684(h, str, 1) != 0) {
        return 4;
    }
    if (strncmp(str, "\\rn\\", 4) != 0) {
        func_ov065_02283470(h, 1, "Unexpected data was received from the server.");
        func_ov065_0227e160(h, 3, 1);
        return 3;
    }
    pr = s->unk_0c;
    if (pr.v[0] != 0) {
        p = (s32 *)func_ov065_02277af0(4);
        if (p == NULL) {
            func_ov065_02283460(h, "Out of memory.");
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
}
}

namespace Na {
extern "C" {
s32 func_ov065_02283350(void *h, s32 *a, s32 b, s32 c, const char *dflt) {
    char buf[0x24];
    s32 r;
    if (dflt == NULL) {
        dflt = "";
    }
    r = func_ov065_02280c84(h, b, 0xc9, a);
    if (r != 0) {
        return r;
    }
    OS_SPrintf(buf, "\\version\\%d\\result\\%d", 1, c);
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
}
}

namespace Na {
extern "C" {
void func_ov065_02283304(void *h, s32 p1, s32 p2, const char *p3) {
    char buf[0x40];
    s32 v[3];
    if (func_ov065_02283630(p3, "\\xfer\\", buf, 0x40) != 0) {
        if (func_02128ca4(buf, "%d %u %u", &v[0], &v[1], &v[2]) == 3) {
            func_ov065_02283350(h, v, p1, 2, NULL);
        }
    }
}
}
}
