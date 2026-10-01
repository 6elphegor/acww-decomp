// mwcc-flags: -O4,p -str reuse
#include "types.h"

// ov065_050: DWC HTTP socket send/recv + growable string buffer + callback list (0x0227d8e0..0x0227e1c8)

struct Unk_ov065_0227d8e0_Buf {
    char *unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0c;
};

struct Unk_ov065_0227d8e0_Pair {
    s32 unk_00;
    s32 unk_04;
};

struct Unk_ov065_0227e0e8_Wrap {
    Unk_ov065_0227d8e0_Pair unk_00;
};

struct Unk_ov065_0227d8e0_Node {
    void (*unk_00)(void *, void *, s32);
    s32 unk_04;
    void *unk_08;
    s32 unk_0c;
    void *unk_10;
    Unk_ov065_0227d8e0_Node *unk_14;
};

struct Unk_ov065_0227d8e0_Ctx {
    u8 pad_000[0x198];
    s32 unk_198;
    s32 unk_19c;
    s32 unk_1a0;
    Unk_ov065_0227e0e8_Wrap unk_1a4[6];
    s32 unk_1d4;
    s32 unk_1d8;
    char *unk_1dc;
    u8 pad_1e0[0x1ec - 0x1e0];
    char *unk_1ec;
    u8 pad_1f0[4];
    Unk_ov065_0227d8e0_Buf unk_1f4;
    s32 unk_204;
    u8 pad_208[0x418 - 0x208];
    s32 unk_418;
    s32 unk_41c;
    u8 pad_420[4];
    void *unk_424;
    u8 pad_428[0x434 - 0x428];
    void *unk_434;
    Unk_ov065_0227d8e0_Node *unk_438;
    Unk_ov065_0227d8e0_Node *unk_43c;
    void *unk_440;
    u8 pad_444[0x450 - 0x444];
    void *unk_450;
};

struct Unk_ov065_0227d8e0_Handle {
    Unk_ov065_0227d8e0_Ctx *unk_00;
};

struct Unk_ov065_0227d8e0_Arg {
    u8 pad_00[0x10];
    char *unk_10;
};

struct Unk_ov065_0227dc48_Conn {
    u8 pad_00[8];
    s32 unk_08;
    u8 pad_0c[0x28 - 0xc];
    Unk_ov065_0227d8e0_Buf unk_28;
    s32 unk_38;
};

struct Unk_ov065_0227dfd8_D3 {
    u8 pad_00[0x38];
    s32 unk_38;
    s32 *unk_3c;
    s32 *unk_40;
};

struct Unk_ov065_0227dfd8_D4 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0c;
    s32 unk_10;
};

struct Unk_ov065_0227dfd8_D9 {
    s32 unk_00;
    s32 unk_04;
    s32 *unk_08;
};

struct Unk_ov065_0227e0e8_G {
    u8 pad_00[0x18];
    void *unk_18;
};

struct Unk_ov065_0227e160_Cb {
    s32 unk_00;
    s32 unk_04;
    void *unk_08;
    s32 unk_0c;
};

typedef Unk_ov065_0227d8e0_Handle Unk_H;
typedef Unk_ov065_0227d8e0_Ctx Unk_C;
typedef Unk_ov065_0227d8e0_Buf Unk_B;
typedef Unk_ov065_0227d8e0_Node Unk_N;
extern "C" {
char *func_0212a120(const char *, s32);
s32 func_0212a15c(const char *, const char *, s32);
s32 func_0212b770(const char *);
u32 func_021277d4(const char *);
void func_021289b4(void *, void *, s32);
void func_02128a00(void *, const void *, s32);
s32 func_021130d0(char *, const char *, ...);
s32 func_ov065_02283630(const char *, const char *, char *, s32);
void func_ov065_02283460(void *, const char *);
void func_ov065_02283470(void *, s32, const char *);
void func_ov065_02283720(void *, const char *, ...);
void *func_ov065_02277ad8(void *, s32);
void *func_ov065_02277af0(s32);
s32 func_ov065_02277ac8(void *);
s32 func_ov065_02278ce0(s32, void *, s32, s32);
s32 func_ov065_02278ca0(s32, void *, s32, s32);
s32 func_ov065_02278be8(s32);
s32 func_ov065_02278684(s32);
s32 func_ov065_02278da4(s32, s32);
s32 func_ov065_02278dbc(s32);
s32 func_ov065_0228090c(void *, void *);
s32 func_ov065_022810fc(void *, void *);
s32 func_ov065_022817c8(void *, s32, s32);
s32 func_ov065_0227e350(void);

s32 func_ov065_0227dd38(void *, s32, char *, s32, s32 *, s32 *, const char *);
s32 func_ov065_0227dde8(Unk_H *, Unk_B *, s32);
s32 func_ov065_0227de10(Unk_H *, Unk_B *, const char *);
s32 func_ov065_0227de30(Unk_H *, Unk_B *, const char *, s32);
s32 func_ov065_0227deb4(Unk_H *, Unk_B *, char);
s32 func_ov065_0227dc48(Unk_H *, Unk_ov065_0227dc48_Conn *, const char *, s32);
s32 func_ov065_0227da7c(Unk_H *, s32, Unk_B *, s32 *, s32, const char *);
s32 func_ov065_0227dfd8(Unk_H *, Unk_N *);
s32 func_ov065_0227e0e8(Unk_H *, Unk_ov065_0227e0e8_Wrap, Unk_N *, Unk_ov065_0227e0e8_G *, s32);
void func_ov065_0227e160(Unk_H *, s32, s32);
}

extern "C" {
s32 func_ov065_0227deb4(Unk_H *h, Unk_B *b, char c) {
    s32 len = b->unk_08;
    s32 cap = b->unk_04;
    char *data = b->unk_00;
    if (cap == len) {
        cap += 0x800;
        data = (char *)func_ov065_02277ad8(data, cap + 1);
        if (data == NULL) {
            func_ov065_02283460(h, "Out of memory.");
            return 1;
        }
    }
    data[len] = c;
    data[len + 1] = 0;
    b->unk_08 = b->unk_08 + 1;
    b->unk_04 = cap;
    b->unk_00 = data;
    return 0;
}
}

extern "C" {
s32 func_ov065_0227de30(Unk_H *h, Unk_B *b, const char *s, s32 n) {
    s32 len;
    s32 cap;
    char *data;
    if (s == NULL) {
        return 0;
    }
    len = b->unk_08;
    cap = b->unk_04;
    data = b->unk_00;
    if (cap - len < n) {
        cap += (n < 0x800) ? 0x800 : n;
        data = (char *)func_ov065_02277ad8(data, cap + 1);
        if (data == NULL) {
            func_ov065_02283460(h, "Out of memory.");
            return 1;
        }
    }
    func_02128a00(data + len, s, n);
    data[len + n] = 0;
    b->unk_08 = b->unk_08 + n;
    b->unk_04 = cap;
    b->unk_00 = data;
    return 0;
}
}

extern "C" {
s32 func_ov065_0227de10(Unk_H *h, Unk_B *b, const char *s) {
    return func_ov065_0227de30(h, b, s, func_021277d4(s));
}
}

extern "C" {
s32 func_ov065_0227dde8(Unk_H *h, Unk_B *b, s32 n) {
    char tmp[0x14];
    func_021130d0(tmp, "%d", n);
    return func_ov065_0227de10(h, b, tmp);
}
}

extern "C" {
s32 func_ov065_0227dd38(void *h, s32 fd, char *buf, s32 len, s32 *pflag, s32 *pcnt, const char *str) {
    s32 n;
    s32 e;
    n = func_ov065_02278ca0(fd, buf, len, 0);
    if (n == -1) {
        e = func_ov065_02278be8(fd);
        if (e != -6 && e != -0x1a && e != -0x4c) {
            if (str[0] == 'P' && str[1] == 'R') {
                return 3;
            }
            func_ov065_02283470(h, 5, "There was an error sending on a socket.");
            func_ov065_0227e160((Unk_H *)h, 3, 0);
            return 3;
        }
        *pcnt = 0;
        *pflag = 0;
    } else if (n == 0) {
        func_ov065_02283720(h, "SENDXXXX(%s): Connection closed\n", str);
        *pcnt = 0;
        *pflag = 1;
    } else {
        *pcnt = n;
        *pflag = 0;
    }
    return 0;
}
}

extern "C" {
s32 func_ov065_0227dccc(Unk_H *h, Unk_ov065_0227dc48_Conn *c, char ch) {
    s32 flag;
    s32 cnt;
    s32 r;
    if (c->unk_28.unk_08 - c->unk_28.unk_0c == 0 && func_ov065_02278684(c->unk_38) == 0) {
        r = func_ov065_0227dd38(h, c->unk_08, &ch, 1, &flag, &cnt, "PT");
        if (r != 0) {
            return r;
        }
        if (cnt != 0) {
            return 0;
        }
    }
    return func_ov065_0227deb4(h, &c->unk_28, ch);
}
}

extern "C" {
s32 func_ov065_0227dc48(Unk_H *h, Unk_ov065_0227dc48_Conn *c, const char *s, s32 n) {
    s32 sent = 0;
    s32 flag;
    s32 cnt;
    s32 r;
    if (n == 0) {
        return sent;
    }
    if (c->unk_28.unk_08 - c->unk_28.unk_0c == 0 && func_ov065_02278684(c->unk_38) == 0) {
        do {
            r = func_ov065_0227dd38(h, c->unk_08, (char *)s + sent, n, &flag, &cnt, "PT");
            if (r != 0) {
                return r;
            }
            if (cnt != 0) {
                sent += cnt;
                n -= cnt;
            }
        } while (cnt != 0 && n != 0);
    }
    if (n != 0) {
        r = func_ov065_0227de30(h, &c->unk_28, s + sent, n);
        if (r != 0) {
            return r;
        }
    }
    return 0;
}
}

extern "C" {
s32 func_ov065_0227dc28(Unk_H *h, Unk_ov065_0227dc48_Conn *c, const char *s) {
    return func_ov065_0227dc48(h, c, s, func_021277d4(s));
}
}

// Not in the original binary: unreferenced weak function compiled right after func_ov065_0227db18, so that the literal
// "%d" is pooled where the original has it (before "PT"); removed by the dead-stripping link (see notes.txt).
extern "C" {
__declspec(weak) void Unk_ov065_0227dc00_pool_order(void) {
    func_021130d0((char *)0, "%d");
}
}

extern "C" {
s32 func_ov065_0227db18(Unk_H *h, s32 fd, Unk_B *b, s32 *pout, s32 *pflag, const char *str) {
    char *data = b->unk_00;
    s32 len = b->unk_08;
    s32 cap = b->unk_04;
    s32 total = 0;
    s32 flag = 0;
    volatile s32 z0 = 0;
    volatile s32 z1 = 0;
    volatile s32 z2 = 0;
    volatile s32 z3 = 0;
    s32 n;
    s32 e;
    for (;;) {
        if (len + 0x800 > cap) {
            cap = len + 0x800;
            data = (char *)func_ov065_02277ad8(data, cap + 1);
            if (data == NULL) {
                func_ov065_02283460(h, "Out of memory.");
                return 1;
            }
        }
        n = func_ov065_02278ce0(fd, data + len, cap - len, z0);
        if (n == ~z2) {
            e = func_ov065_02278be8(fd);
            if (e != -6 && e != -0x1a && e != -0x4c) {
                func_ov065_02283460(h, "There was an error reading from a socket.");
                return 3;
            }
        } else if (n == 0) {
            flag = 1;
            func_ov065_02283720(h, "RECVXXXX(%s): Connection closed\n", str);
        } else {
            len += n;
            total += n;
        }
        data[len] = z1;
        if (n == ~z3 || flag != 0 || total >= 0x20000) {
            break;
        }
    }
    if (total != 0) {
        func_ov065_02283720(h, "RECVTOTL(%s): %d\n", str, total);
    }
    b->unk_00 = data;
    b->unk_08 = len;
    b->unk_04 = cap;
    *pout = total;
    s32 *pf = pflag;
    *pf = flag;
    return 0;
}
}

extern "C" {
s32 func_ov065_0227da7c(Unk_H *h, s32 fd, Unk_B *b, s32 *pout, s32 compact, const char *str) {
    char *data = b->unk_00;
    s32 len = b->unk_08;
    s32 pos = b->unk_0c;
    s32 sent;
    s32 rem = len - pos;
    sent = 0;
    s32 flag;
    s32 cnt;
    s32 r;
    if (rem == 0) {
        return sent;
    }
    do {
        r = func_ov065_0227dd38(h, fd, data + (pos + sent), rem, &flag, &cnt, str);
        if (r != 0) {
            return r;
        }
        if (cnt != 0) {
            sent += cnt;
            rem -= cnt;
        }
    } while (cnt != 0 && rem != 0);
    if (compact != 0) {
        if (sent > 0) {
            func_021289b4(data, data + sent, rem + 1);
            len -= sent;
        }
    } else {
        pos += sent;
    }
    b->unk_08 = len;
    b->unk_0c = pos;
    if (pout != NULL) {
        *pout = flag;
    }
    return 0;
}
}

extern "C" {
s32 func_ov065_0227d9b0(void *h, Unk_B *b, char **pp, s32 *plen, s32 *pval) {
    char line[16];
    char *p;
    s32 n;
    s32 k;
    *pp = NULL;
    if (b->unk_08 < 5) {
        return 0;
    }
    {
        p = func_0212a120(b->unk_00, 10);
        if (p != NULL) {
            if (func_0212a15c(p - 5, "\\msg\\", 5) != 0) {
                return 3;
            }
            *p = 0;
            if (func_ov065_02283630(b->unk_00, "\\m\\", line, 16) == 0) {
                return 3;
            }
            *plen = func_0212b770(line);
            if (func_ov065_02283630(b->unk_00, "\\len\\", line, 16) == 0) {
                return 3;
            }
            n = func_0212b770(line);
            k = n + 1;
            if (b->unk_08 > k + (p - b->unk_00)) {
                if (p[k] != 0) {
                    return 3;
                }
                *pp = p + 1;
                *pval = n;
                b->unk_0c = k + (p - b->unk_00) + 1;
            } else {
                *p = 10;
            }
        }
    }
    return 0;
}
}

extern "C" {
s32 func_ov065_0227d96c(void *h, Unk_B *b) {
    if (b == NULL || b->unk_00 == NULL || b->unk_0c == 0) {
        return 0;
    }
    b->unk_08 = b->unk_08 - b->unk_0c;
    if (b->unk_08 != 0) {
        func_021289b4(b->unk_00, b->unk_00 + b->unk_0c, b->unk_08);
    }
    b->unk_00[b->unk_08] = 0;
    b->unk_0c = 0;
    return 0;
}
}
