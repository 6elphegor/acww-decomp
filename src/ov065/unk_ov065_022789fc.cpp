// mwcc-flags: -O4,p -str reuse
#include "types.h"

typedef long long s64;

// ov065 TU36: GameSpy common (nonport: PRNG/base64/socket wrappers, ghttpBuffer) 0x022789fc..0x0227931c

struct Unk_ov065_02278e64_A {
    u32 unk_00;
    u32 unk_04;
    s16 unk_08;
    s16 unk_0a;
    u32 unk_0c;
};
struct Unk_ov065_02278e64_B {
    u32 *unk_00;
    u32 unk_04;
    u8 pad_08[0x10];
};
struct Unk_ov065_02291094 {
    u32 unk_00;
    u8 pad_04[0x10];
};

extern "C" {
extern const char data_ov065_0228b394[4] = "[]_";
extern const char data_ov065_0228b398[4] = "-_=";
extern const char data_ov065_0228b39c[4] = "+/=";
s32 data_ov065_0228ca30 = 1;
s32 data_ov065_02291080;
u8 data_ov065_0229107c[4];
Unk_ov065_02278e64_A data_ov065_02291084;
Unk_ov065_02291094 data_ov065_02291094;
Unk_ov065_02278e64_B data_ov065_022910a8;
}

namespace FA {
extern "C" {
extern const char data_ov065_0228b394[];
extern const char data_ov065_0228b398[];
extern const char data_ov065_0228b39c[];
extern s32 data_ov065_0228ca30;
extern s32 data_ov065_02291080;
s32 func_ov065_022610a0(s32, u32 *);
s32 func_ov065_02261390(s32, void *);
s32 func_ov065_02278dec(s32, s32);
u64 func_01ffa6b4(void);
s32 func_ov065_02278b60(void);
u32 func_ov065_02278b7c(u32);
void func_ov065_02278ac0(char *, char *, s32);
s32 func_ov065_02278bf4(s32);
s32 func_021130d0(char *, char *, s32);
}
}

namespace FB {

struct Unk_ov065_02278c64_Sa {
    u8 b[8];
};

struct Unk_ov065_02278f0c_Pfd {
    s32 fd;
    s16 events;
    s16 revents;
};

struct Unk_ov065_0227931c_Owner {
    u8 pad_00[0x38];
    s32 unk_38;
    u8 pad_3c[0x0c];
    s32 unk_48;
    s32 unk_4c;
    u8 pad_50[4];
    char *unk_54;
    u8 pad_58[4];
    s32 unk_5c;
    s32 unk_60;
    u8 pad_64[0x98];
    s32 unk_fc;
    u8 pad_100[0x64];
    u32 unk_164[6];
    s32 (*unk_17c)(Unk_ov065_0227931c_Owner *, void *, char *, s32 *, char *, s32 *);
};

struct Unk_ov065_0227931c_Buf {
    Unk_ov065_0227931c_Owner *unk_00;
    char *unk_04;
    s32 unk_08;
    s32 unk_0c;
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    s32 unk_1c;
    s32 unk_20;
};





extern "C" {
extern s32 data_ov065_02291080;
extern Unk_ov065_02291094 data_ov065_02291094;
extern u8 data_0213a410[];
extern Unk_ov065_02278e64_A data_ov065_02291084;
extern Unk_ov065_02278e64_B data_ov065_022910a8;
extern u8 data_ov065_0229107c[];
void func_02115fb4(void *p, s32 v, s32 n);
s32 func_ov065_0226149c(s32 a, s32 b, s32 c, u32 d, void *sa);
s32 func_ov065_0226150c(s32 a, s32 b, s32 c, u32 d);
s32 func_ov065_02261524(s32 a, s32 b, s32 c, u32 d, u8 *sa);
s32 func_ov065_02261588(s32 a, s32 b, s32 c, u32 d);
s32 func_ov065_0226129c(s32 a, u8 *sa);
s32 func_ov065_022612f4(s32 a, s32 b, s32 c);
s32 func_ov065_022615a0(s32 a, void *sa);
s32 func_ov065_022615f0(s32 a, void *sa);
s32 func_ov065_02261494(s32 a, s32 b, s32 c);
s32 func_ov065_0226148c(s32 a, s32 b, s32 c);
s32 func_ov065_02261610(s32 a, s32 b);
s32 func_ov065_02260fa4(Unk_ov065_02278f0c_Pfd *arr, u32 n, s64 timeout);
s32 func_ov065_0226125c(s32 a, s32 cmd, u32 flags);
u32 func_ov065_02260cb4();
s32 func_ov065_02261034(u32 v, u32 *p);
u32 func_ov065_02278be8(s32 s);
s32 func_ov065_022796a8(Unk_ov065_0227931c_Owner *o, char *buf, s32 n);
u32 func_021277d4(const char *s);
char *func_02127838(char *d, const char *s);
void *func_ov065_02277af0(u32 n);
void *func_ov065_02277ad8(void *p, s32 n);
void func_ov065_02277ac8(void *p);
void func_021132e0(s32 ms);
u64 func_01ffa6b4();
void func_02128a00(void *d, const void *s, u32 n);
void func_0212899c(void *d, s32 v, u32 n);
s32 func_021130d0(char *buf, const char *fmt, ...);

s32 func_ov065_02278dec(s32 a, s32 b);
s32 func_ov065_02278c38(s32 a, s32 b, s32 c, s32 d, s32 e);
s32 func_ov065_02278c44(s32 a, s32 b, s32 c, void *val, s32 *len);
s32 func_ov065_02278f0c(s32 sock, s32 *rd, s32 *wr, s32 *ex);
s32 func_ov065_0227931c(Unk_ov065_0227931c_Buf *o, char *s, s32 len);
s32 func_ov065_0227953c(Unk_ov065_0227931c_Buf *o, s32 n);
}
}

namespace FB {
extern "C" {
s32 func_ov065_022792a4(Unk_ov065_0227931c_Buf *o, char *a, char *b) {
    if (!func_ov065_0227931c(o, a, 0)) {
        return FALSE;
    }
    if (!func_ov065_0227931c(o, ": ", 2)) {
        return FALSE;
    }
    if (!func_ov065_0227931c(o, b, 0)) {
        return FALSE;
    }
    if (func_ov065_0227931c(o, "\r\n", 2)) {
        return TRUE;
    }
    return FALSE;
}
}
}

namespace FB {
extern "C" {
s32 func_ov065_02279280(Unk_ov065_0227931c_Buf *o, u8 c) {
    u8 t = c;
    if (o != 0) {
        return func_ov065_0227931c(o, (char *)&t, 1);
    }
    return FALSE;
}
}
}

namespace FB {
extern "C" {
s32 func_ov065_02279258(Unk_ov065_0227931c_Buf *o, s32 x) {
    char buf[16];
    func_021130d0(buf, "%d", x);
    return func_ov065_0227931c(o, buf, 0);
}
}
}

namespace FB {
extern "C" {
void func_ov065_0227924c(Unk_ov065_0227931c_Buf *o) {
    o->unk_0c = 0;
    o->unk_10 = 0;
    *o->unk_04 = 0;
}
}
}

namespace FB {
extern "C" {
s32 func_ov065_022791c0(Unk_ov065_0227931c_Owner *o) {
    s32 *pp = &o->unk_60;
    s32 z = 0;
    s32 w, e;
    s32 r;
    do {
        s32 t = func_ov065_02278f0c(o->unk_48, (s32 *)z, &w, &e);
        if (t == ~z || e != 0) {
            o->unk_fc = 1;
            o->unk_38 = 5;
            o->unk_4c = func_ov065_02278be8(o->unk_48);
            return FALSE;
        }
        if (w == 0) {
            return TRUE;
        }
        r = func_ov065_022796a8(o, o->unk_54 + o->unk_60, o->unk_5c - o->unk_60);
        if (r == ~z) {
            return FALSE;
        }
        *pp += r;
    } while (o->unk_60 < o->unk_5c);
    return TRUE;
}
}
}

namespace FB {
extern "C" {
s32 func_ov065_02279168(Unk_ov065_0227931c_Buf *o, char *dst, s32 *len) {
    s32 n = *len;
    s32 avail;
    if (n == 0) {
        return FALSE;
    }
    avail = o->unk_0c - o->unk_10;
    if (avail <= 0) {
        return FALSE;
    }
    if (n >= avail) {
        n = avail;
    }
    func_02128a00(dst, o->unk_04 + o->unk_10, n);
    dst[n] = 0;
    *len = n;
    o->unk_10 += n;
    return TRUE;
}
}
}

namespace FB {
extern "C" {
u32 func_ov065_02279144() {
    return (u64)((s64)(func_01ffa6b4() << 6) / 0x82ea);
}
}
}

namespace FB {
extern "C" {
void func_ov065_0227913c(s32 ms) {
    func_021132e0(ms);
}
}
}

namespace FB {
extern "C" {
void func_ov065_02279138() {
}
}
}

namespace FB {
extern "C" {
void func_ov065_02279134() {
}
}
}

namespace FB {
extern "C" {
char *func_ov065_02279100(const char *s) {
    char *r;
    if (s == 0) {
        return 0;
    }
    r = (char *)func_ov065_02277af0(func_021277d4(s) + 1);
    if (r != 0) {
        func_02127838(r, s);
    }
    return r;
}
}
}

namespace FB {
extern "C" {
char *func_ov065_022790d0(char *s) {
    s32 c;
    char *r = s;
    c = *s;
    if (c != 0) {
        do {
            if (c >= 0 && c < 0x80) {
                c = data_0213a410[c];
            }
            *s = c;
            s++;
            c = *s;
        } while (c != 0);
    }
    return r;
}
}
}

namespace FB {
extern "C" {
s32 func_ov065_0227908c(s32 sock, s32 flag) {
    u32 v = func_ov065_0226125c(sock, 3, 0);
    if (flag) {
        v = v & ~4;
    } else {
        v = v | 4;
    }
    if (func_ov065_0226125c(sock, 4, v) == 0) {
        return TRUE;
    }
    return FALSE;
}
}
}

namespace FB {
extern "C" {
s32 func_ov065_0227905c(s32 sock, s32 val) {
    s32 t = func_ov065_02278c38(sock, 0xffff, 0x1002, (s32)&val, 4);
    BOOL r = FALSE;
    if (t != -1) {
        r = TRUE;
    }
    return r;
}
}
}

namespace FB {
extern "C" {
s32 func_ov065_0227902c(s32 sock, s32 val) {
    s32 t = func_ov065_02278c38(sock, 0xffff, 0x1001, (s32)&val, 4);
    BOOL r = FALSE;
    if (t != -1) {
        r = TRUE;
    }
    return r;
}
}
}

namespace FB {
extern "C" {
s32 func_ov065_02278ffc(s32 sock) {
    s32 v;
    s32 len = 4;
    s32 r = func_ov065_02278c44(sock, 0xffff, 0x1002, &v, &len);
    s32 m = -1;
    if (r != m) {
        m = v;
    }
    return m;
}
}
}

namespace FB {
extern "C" {
s32 func_ov065_02278fcc(s32 sock) {
    s32 v;
    s32 len = 4;
    s32 r = func_ov065_02278c44(sock, 0xffff, 0x1001, &v, &len);
    s32 m = -1;
    if (r != m) {
        m = v;
    }
    return m;
}
}
}

namespace FB {
extern "C" {
s32 func_ov065_02278f0c(s32 sock, s32 *rd, s32 *wr, s32 *ex) {
    Unk_ov065_02278f0c_Pfd pfd;
    s32 r;
    pfd.fd = sock;
    pfd.events = 0;
    if (rd) {
        pfd.events |= 1;
    }
    if (wr) {
        pfd.events |= 8;
    }
    pfd.revents = 0;
    r = func_ov065_02260fa4(&pfd, 1, 0);
    if (r < 0) {
        return -1;
    }
    if (rd) {
        if (r > 0 && (pfd.revents & 0x41) != 0) {
            *rd = 1;
        } else {
            *rd = 0;
        }
    }
    if (wr) {
        if (r > 0 && (pfd.revents & 8) != 0) {
            *wr = 1;
        } else {
            *wr = 0;
        }
    }
    if (ex) {
        if (r > 0 && (pfd.revents & 0x20) != 0) {
            *ex = 1;
        } else {
            *ex = 0;
        }
    }
    return r;
}
}
}

namespace FB {
extern "C" {
s32 func_ov065_02278ee8(s32 a) {
    s32 out = 0;
    if (func_ov065_02278f0c(a, &out, 0, 0) == 1) {
        return out;
    }
    return 0;
}
}
}

namespace FB {
extern "C" {
s32 func_ov065_02278ec4(s32 a) {
    s32 out = 0;
    if (func_ov065_02278f0c(a, 0, &out, 0) == 1) {
        return out;
    }
    return 0;
}
}
}

namespace FB {
extern "C" {
s32 func_ov065_02278e64() {
    data_ov065_02291084.unk_00 = (u32)"localhost";
    data_ov065_02291084.unk_04 = (u32)data_ov065_0229107c;
    data_ov065_02291084.unk_08 = 2;
    data_ov065_02291084.unk_0a = 0;
    data_ov065_02291084.unk_0c = (u32)&data_ov065_022910a8;
    data_ov065_02291094.unk_00 = 0;
    func_ov065_02261034(func_ov065_02260cb4(), (u32 *)&data_ov065_02291094);
    if (data_ov065_02291094.unk_00 == 0) {
        return 0;
    }
    data_ov065_022910a8.unk_00 = (u32 *)&data_ov065_02291094;
    data_ov065_02291084.unk_0a = 4;
    data_ov065_022910a8.unk_04 = 0;
    return (s32)&data_ov065_02291084;
}
}
}

namespace FB {
extern "C" {
static inline u32 Unk_ov065_02278dfc_Ntohl(u32 x) {
    return ((x << 24) & 0xff000000) | (((x << 8) & 0xff0000) | (((x >> 24) & 0xff) | ((x >> 8) & 0xff00)));
}

s32 func_ov065_02278dfc(u32 *p) {
    u32 v = Unk_ov065_02278dfc_Ntohl(*p);
    u32 a = (v >> 24) & 0xff;
    s32 b = (v >> 16) & 0xff;
    if (a == 10) {
        return TRUE;
    }
    if (a == 0xac && b >= 0x10 && b <= 0x1f) {
        return TRUE;
    }
    if (a == 0xc0 && b == 0xa8) {
        return TRUE;
    }
    return FALSE;
}
}
}

namespace FB {
extern "C" {
s32 func_ov065_02278dec(s32 a, s32 b) {
    if (a >= 0) {
        return a;
    }
    data_ov065_02291080 = a;
    return b;
}
}
}

namespace FB {
extern "C" {
s32 func_ov065_02278dd4(s32 a, s32 b) {
    return func_ov065_02278dec(func_ov065_02261610(a, b), -1);
}
}
}

namespace FB {
extern "C" {
s32 func_ov065_02278dbc(s32 a, s32 b, s32 c) {
    return func_ov065_02278dec(func_ov065_0226148c(a, b, c), -1);
}
}
}

namespace FB {
extern "C" {
s32 func_ov065_02278da4(s32 a, s32 b, s32 c) {
    return func_ov065_02278dec(func_ov065_02261494(a, b, c), -1);
}
}
}

namespace FB {
extern "C" {
s32 func_ov065_02278d64(s32 a, Unk_ov065_02278c64_Sa *src, u32 len) {
    Unk_ov065_02278c64_Sa l;
    if (*(u16 *)&src->b[2] == 0) {
        return 0;
    }
    l = *src;
    l.b[0] = len;
    return func_ov065_02278dec(func_ov065_022615f0(a, &l), -1);
}
}
}

namespace FB {
extern "C" {
s32 func_ov065_02278d34(s32 a, Unk_ov065_02278c64_Sa *src, u32 len) {
    Unk_ov065_02278c64_Sa l;
    l = *src;
    l.b[0] = len;
    return func_ov065_02278dec(func_ov065_022615a0(a, &l), -1);
}
}
}

namespace FB {
extern "C" {
s32 func_ov065_02278d1c(s32 a, s32 b, s32 c) {
    return func_ov065_02278dec(func_ov065_022612f4(a, b, c), -1);
}
}
}

namespace FB {
extern "C" {
s32 func_ov065_02278cf8(s32 a, u8 *sa, s32 *len) {
    s32 r;
    *sa = *len;
    r = func_ov065_0226129c(a, sa);
    *len = *sa;
    return func_ov065_02278dec(r, -1);
}
}
}

namespace FB {
extern "C" {
s32 func_ov065_02278ce0(s32 a, s32 b, s32 c, u32 d) {
    return func_ov065_02278dec(func_ov065_02261588(a, b, c, d), -1);
}
}
}

namespace FB {
extern "C" {
s32 func_ov065_02278cb8(s32 a, s32 b, s32 c, u32 d, u8 *sa, s32 *len) {
    s32 r;
    *sa = *len;
    r = func_ov065_02261524(a, b, c, d, sa);
    *len = *sa;
    return func_ov065_02278dec(r, -1);
}
}
}

namespace FB {
extern "C" {
s32 func_ov065_02278ca0(s32 a, s32 b, s32 c, u32 d) {
    return func_ov065_02278dec(func_ov065_0226150c(a, b, c, d), -1);
}
}
}

namespace FB {
extern "C" {
s32 func_ov065_02278c64(s32 a, s32 b, s32 c, u32 d, Unk_ov065_02278c64_Sa *addr, u32 len) {
    Unk_ov065_02278c64_Sa l;
    *(len ? &l : &l) = *addr;
    l.b[0] = len;
    return func_ov065_02278dec(func_ov065_0226149c(a, b, c, d, &l), -1);
}
}
}

namespace FB {
extern "C" {
s32 func_ov065_02278c44(s32 a, s32 b, s32 c, void *val, s32 *len) {
    func_02115fb4(val, 0, *len);
    return func_ov065_02278dec(0, -1);
}
}
}

namespace FB {
extern "C" {
s32 func_ov065_02278c38(s32 a, s32 b, s32 c, s32 d, s32 e) {
    return func_ov065_02278dec(0, -1);
}
}
}

namespace FA {
extern "C" {
s32 func_ov065_02278c14(s32 a, u8 *p1, u32 *p2) {
    *p1 = *p2;
    a = func_ov065_02261390(a, p1);
    *p2 = *p1;
    return func_ov065_02278dec(a, -1);
}
}
}

namespace FA {
extern "C" {
s32 func_ov065_02278bf4(s32 a) {
    u32 v;
    if (func_ov065_022610a0(a, &v) == 0) {
        return -1;
    }
    return v;
}
}
}

namespace FA {
extern "C" {
u32 func_ov065_02278be8(void) {
    return data_ov065_02291080;
}
}
}

namespace FA {
extern "C" {
void func_ov065_02278bc0(u32 *out) {
    u64 t = func_01ffa6b4();
    u64 v = (u64)((s64)(t << 6) / 0x1ff6210);
    if (out != NULL) {
        *out = (u32)v;
    }
}
}
}

namespace FA {
extern "C" {
u32 func_ov065_02278b7c(u32 x) {
    u32 hi;
    u32 r = (x & 0xffff) * 0x41a7;
    hi = (x >> 16) * 0x41a7;
    r += (hi & 0x7fff) << 16;
    if (r > 0x7fffffff) {
        r = (r & 0x7fffffff) + 1;
    }
    r += hi >> 15;
    if (r > 0x7fffffff) {
        r = (r & 0x7fffffff) + 1;
    }
    return r;
}
}
}

namespace FA {
extern "C" {
s32 func_ov065_02278b60(void) {
    s32 r = func_ov065_02278b7c(data_ov065_0228ca30);
    data_ov065_0228ca30 = r;
    return r;
}
}
}

namespace FA {
extern "C" {
void func_ov065_02278b44(u32 seed) {
    if (seed != 0) {
        seed &= 0x7fffffff;
    } else {
        seed = 1;
    }
    data_ov065_0228ca30 = seed;
}
}
}

namespace FA {
extern "C" {
s32 func_ov065_02278b24(s32 a, s32 b) {
    s32 d = b - a;
    if (d == 0) {
        return a;
    }
    s32 q = func_ov065_02278b60();
    s32 m = q % d;
    return m + a;
}
}
}

namespace FA {
extern "C" {
void func_ov065_02278ac0(char *in, char *out, s32 n) {
    u8 buf[3];
    s32 i = 0;
    u8 *p;
    if (n > 0) {
        p = buf;
        do {
            *p = in[i];
            p++;
            i++;
        } while (i < n);
    }
    if (i < 3) {
        p = buf + i;
        do {
            *p = 0;
            p++;
            i++;
        } while (i < 3);
    }
    out[0] = buf[0] >> 2;
    out[1] = ((buf[0] & 3) << 4) | (buf[1] >> 4);
    out[2] = ((buf[1] & 0xf) << 2) | (buf[2] >> 6);
    out[3] = buf[2] & 0x3f;
}
}
}

namespace FA {
extern "C" {
void func_ov065_022789fc(char *in, char *out, s32 n, s32 mode) {
    char *start = out;
    s32 rem = n;
    const char *tbl;
    char *end;
    s32 m;
    switch (mode) {
    case 1:
        tbl = data_ov065_0228b394;
        break;
    case 2:
        tbl = data_ov065_0228b398;
        break;
    default:
        tbl = data_ov065_0228b39c;
        break;
    }
    while (rem > 0) {
        func_ov065_02278ac0(in, out, n >= 3 ? 3 : n);
        out += 4;
        in += 3;
        rem -= 3;
    }
    end = out;
    m = n % 3;
    if (m == 1) {
        end = out - 2;
    } else if (m == 2) {
        end = out - 1;
    }
    *out = 0;
    if (out > start) {
        do {
            char c;
            out--;
            if (out >= end) {
                *out = tbl[2];
            } else {
                c = *out;
                if (c <= 0x19) {
                    *out = c + 0x41;
                } else if (c <= 0x33) {
                    *out = c + 0x47;
                } else if (c <= 0x3d) {
                    *out = c - 4;
                } else if (c == 0x3e) {
                    *out = tbl[0];
                } else if (c == 0x3f) {
                    *out = tbl[1];
                }
            }
        } while (out > start);
    }
}
}
}
