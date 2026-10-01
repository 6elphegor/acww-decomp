// mwcc-flags: -O4,p
#include "types.h"

// ov065_042: socket wrappers (getsockopt/connect/poll stubs), private-IP check, string buffer

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

extern s32 data_ov065_02291080;
struct Unk_ov065_02291094 {
    u32 unk_00;
};
extern Unk_ov065_02291094 data_ov065_02291094;
extern char data_ov065_0228ca40[];
extern char data_ov065_0228ca44[];
extern char data_ov065_0228ca48[];
extern u8 data_0213a410[];

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
};
extern Unk_ov065_02278e64_A data_ov065_02291084;
extern Unk_ov065_02278e64_B data_ov065_022910a8;
extern u8 data_ov065_0228ca34[];
extern u8 data_ov065_0229107c[];

extern "C" {
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
u64 func_02132ef8(u64 a, u32 b, u32 c);
void func_02128a00(void *d, const void *s, u32 n);
void func_0212899c(void *d, s32 v, u32 n);
s32 func_021130d0(char *buf, const char *fmt, ...);

s32 func_ov065_02278dec(s32 a, s32 b);
s32 func_ov065_02278c38(s32 a, s32 b, s32 c, s32 d, s32 e);
s32 func_ov065_02278c44(s32 a, s32 b, s32 c, void *val, s32 *len);
s32 func_ov065_02278f0c(s32 sock, s32 *rd, s32 *wr, s32 *ex);
s32 func_ov065_0227931c(Unk_ov065_0227931c_Buf *o, char *s, s32 len);
s32 func_ov065_0227953c(Unk_ov065_0227931c_Buf *o, s32 n);

s32 func_ov065_02278c38(s32 a, s32 b, s32 c, s32 d, s32 e) {
    return func_ov065_02278dec(0, -1);
}

s32 func_ov065_02278c44(s32 a, s32 b, s32 c, void *val, s32 *len) {
    func_02115fb4(val, 0, *len);
    return func_ov065_02278dec(0, -1);
}

s32 func_ov065_02278c64(s32 a, s32 b, s32 c, u32 d, Unk_ov065_02278c64_Sa *addr, u32 len) {
    Unk_ov065_02278c64_Sa l;
    *(len ? &l : &l) = *addr;
    l.b[0] = len;
    return func_ov065_02278dec(func_ov065_0226149c(a, b, c, d, &l), -1);
}

s32 func_ov065_02278ca0(s32 a, s32 b, s32 c, u32 d) {
    return func_ov065_02278dec(func_ov065_0226150c(a, b, c, d), -1);
}

s32 func_ov065_02278cb8(s32 a, s32 b, s32 c, u32 d, u8 *sa, s32 *len) {
    s32 r;
    *sa = *len;
    r = func_ov065_02261524(a, b, c, d, sa);
    *len = *sa;
    return func_ov065_02278dec(r, -1);
}

s32 func_ov065_02278ce0(s32 a, s32 b, s32 c, u32 d) {
    return func_ov065_02278dec(func_ov065_02261588(a, b, c, d), -1);
}

s32 func_ov065_02278cf8(s32 a, u8 *sa, s32 *len) {
    s32 r;
    *sa = *len;
    r = func_ov065_0226129c(a, sa);
    *len = *sa;
    return func_ov065_02278dec(r, -1);
}

s32 func_ov065_02278d1c(s32 a, s32 b, s32 c) {
    return func_ov065_02278dec(func_ov065_022612f4(a, b, c), -1);
}

s32 func_ov065_02278d34(s32 a, Unk_ov065_02278c64_Sa *src, u32 len) {
    Unk_ov065_02278c64_Sa l;
    l = *src;
    l.b[0] = len;
    return func_ov065_02278dec(func_ov065_022615a0(a, &l), -1);
}

s32 func_ov065_02278d64(s32 a, Unk_ov065_02278c64_Sa *src, u32 len) {
    Unk_ov065_02278c64_Sa l;
    if (*(u16 *)&src->b[2] == 0) {
        return 0;
    }
    l = *src;
    l.b[0] = len;
    return func_ov065_02278dec(func_ov065_022615f0(a, &l), -1);
}

s32 func_ov065_02278da4(s32 a, s32 b, s32 c) {
    return func_ov065_02278dec(func_ov065_02261494(a, b, c), -1);
}

s32 func_ov065_02278dbc(s32 a, s32 b, s32 c) {
    return func_ov065_02278dec(func_ov065_0226148c(a, b, c), -1);
}

s32 func_ov065_02278dd4(s32 a, s32 b) {
    return func_ov065_02278dec(func_ov065_02261610(a, b), -1);
}

s32 func_ov065_02278dec(s32 a, s32 b) {
    if (a >= 0) {
        return a;
    }
    data_ov065_02291080 = a;
    return b;
}

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

s32 func_ov065_02278e64() {
    data_ov065_02291084.unk_00 = (u32)data_ov065_0228ca34;
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

s32 func_ov065_02278ec4(s32 a) {
    s32 out = 0;
    if (func_ov065_02278f0c(a, 0, &out, 0) == 1) {
        return out;
    }
    return 0;
}

s32 func_ov065_02278ee8(s32 a) {
    s32 out = 0;
    if (func_ov065_02278f0c(a, &out, 0, 0) == 1) {
        return out;
    }
    return 0;
}

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

s32 func_ov065_0227902c(s32 sock, s32 val) {
    s32 t = func_ov065_02278c38(sock, 0xffff, 0x1001, (s32)&val, 4);
    BOOL r = FALSE;
    if (t != -1) {
        r = TRUE;
    }
    return r;
}

s32 func_ov065_0227905c(s32 sock, s32 val) {
    s32 t = func_ov065_02278c38(sock, 0xffff, 0x1002, (s32)&val, 4);
    BOOL r = FALSE;
    if (t != -1) {
        r = TRUE;
    }
    return r;
}

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

void func_ov065_02279134() {
}

void func_ov065_02279138() {
}

void func_ov065_0227913c(s32 ms) {
    func_021132e0(ms);
}

u32 func_ov065_02279144() {
    return func_02132ef8(func_01ffa6b4() << 6, 0x82ea, 0);
}

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

void func_ov065_0227924c(Unk_ov065_0227931c_Buf *o) {
    o->unk_0c = 0;
    o->unk_10 = 0;
    *o->unk_04 = 0;
}

s32 func_ov065_02279258(Unk_ov065_0227931c_Buf *o, s32 x) {
    char buf[16];
    func_021130d0(buf, data_ov065_0228ca40, x);
    return func_ov065_0227931c(o, buf, 0);
}

s32 func_ov065_02279280(Unk_ov065_0227931c_Buf *o, u8 c) {
    u8 t = c;
    if (o != 0) {
        return func_ov065_0227931c(o, (char *)&t, 1);
    }
    return FALSE;
}

s32 func_ov065_022792a4(Unk_ov065_0227931c_Buf *o, char *a, char *b) {
    if (!func_ov065_0227931c(o, a, 0)) {
        return FALSE;
    }
    if (!func_ov065_0227931c(o, data_ov065_0228ca44, 2)) {
        return FALSE;
    }
    if (!func_ov065_0227931c(o, b, 0)) {
        return FALSE;
    }
    if (func_ov065_0227931c(o, data_ov065_0228ca48, 2)) {
        return TRUE;
    }
    return FALSE;
}

s32 func_ov065_0227931c(Unk_ov065_0227931c_Buf *o, char *s, s32 len) {
    Unk_ov065_0227931c_Owner *ow = o->unk_00;
    s32 n;
    s32 r;
    if (o == 0) {
        return FALSE;
    }
    if (s == 0) {
        return FALSE;
    }
    if (len < 0) {
        return FALSE;
    }
    if (len == 0) {
        len = func_021277d4(s);
    }
    if (o->unk_20 == 1) {
        do {
            n = o->unk_08 - o->unk_0c;
            r = ow->unk_17c(ow, &ow->unk_164, s, &len, o->unk_04 + o->unk_0c, &n);
            if (r == 2) {
                if (o->unk_18 != 0) {
                    o->unk_00->unk_fc = 1;
                    o->unk_00->unk_38 = 2;
                    return FALSE;
                }
                if (func_ov065_0227953c(o, o->unk_14) != 0) {
                    o->unk_00->unk_fc = 1;
                    o->unk_00->unk_38 = 1;
                    return FALSE;
                }
            } else {
                o->unk_0c += n;
            }
        } while (r == 2);
    } else {
        s32 t = o->unk_0c + len;
        while (t >= o->unk_08) {
            if (o->unk_18 != 0) {
                o->unk_00->unk_fc = 1;
                o->unk_00->unk_38 = 2;
                return FALSE;
            }
            if (func_ov065_0227953c(o, o->unk_14) == 0) {
                o->unk_00->unk_fc = 1;
                o->unk_00->unk_38 = 1;
                return FALSE;
            }
        }
        func_02128a00(o->unk_04 + o->unk_0c, s, len);
        o->unk_0c = t;
        o->unk_04[o->unk_0c] = 0;
    }
    return TRUE;
}

void func_ov065_0227946c(Unk_ov065_0227931c_Buf *o) {
    if (o != 0 && o->unk_04 != 0) {
        if (o->unk_1c == 0) {
            func_ov065_02277ac8(o->unk_04);
        }
        func_0212899c(o, 0, 0x24);
    }
}

s32 func_ov065_02279494(Unk_ov065_0227931c_Owner *ow, Unk_ov065_0227931c_Buf *o, char *buf, s32 size) {
    if (ow == 0) {
        return FALSE;
    }
    if (o == 0) {
        return FALSE;
    }
    if (buf == 0) {
        return FALSE;
    }
    if (size <= 0) {
        return FALSE;
    }
    o->unk_00 = ow;
    o->unk_04 = buf;
    o->unk_08 = size;
    o->unk_0c = 0;
    o->unk_14 = 0;
    o->unk_18 = 1;
    o->unk_1c = 1;
    o->unk_20 = 0;
    *o->unk_04 = 0;
    return TRUE;
}

s32 func_ov065_022794d0(Unk_ov065_0227931c_Owner *ow, Unk_ov065_0227931c_Buf *o, s32 size, s32 grow) {
    if (ow == 0) {
        return FALSE;
    }
    if (o == 0) {
        return FALSE;
    }
    if (size <= 0) {
        return FALSE;
    }
    if (grow <= 0) {
        return FALSE;
    }
    o->unk_00 = ow;
    o->unk_04 = 0;
    o->unk_08 = 0;
    o->unk_0c = 0;
    o->unk_10 = 0;
    o->unk_14 = grow;
    o->unk_18 = 0;
    o->unk_1c = 0;
    o->unk_20 = 0;
    if (func_ov065_0227953c(o, size) == 0) {
        return FALSE;
    }
    *o->unk_04 = 0;
    return TRUE;
}

s32 func_ov065_0227953c(Unk_ov065_0227931c_Buf *o, s32 n) {
    s32 newsize;
    void *p;
    if (o == 0) {
        return FALSE;
    }
    if (n <= 0) {
        return FALSE;
    }
    newsize = o->unk_08 + n;
    p = func_ov065_02277ad8(o->unk_04, newsize);
    if (p == 0) {
        return FALSE;
    }
    o->unk_04 = (char *)p;
    o->unk_08 = newsize;
    return TRUE;
}
}
