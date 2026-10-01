// mwcc-flags: -O4,p
#include "types.h"

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
extern char data_ov065_0228e128[];
extern char data_ov065_0228e108[];

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

static const char Unk_ov065_022838c4_k[] = "\\getpidr\\";

void func_ov065_022838c4(char *s, s32 len) {
    s[len] = 0;
    if (func_0212a15c(s, "\\pauthr\\", 8) == 0) {
        func_ov065_02283af0(s, len);
    } else if (func_0212a15c(s, Unk_ov065_022838c4_k, 9) == 0) {
        func_ov065_02283a88(s, len);
    } else if (func_0212a15c(s, Unk_ov065_022838c4_k, 9) == 0) {
        func_ov065_02283a88(s, len);
    } else if (func_0212a15c(s, "\\getpdr\\", 8) == 0) {
        func_ov065_022839e4(s, len);
    } else if (func_0212a15c(s, "\\setpdr\\", 8) == 0) {
        func_ov065_02283974(s, len);
    }
}

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
            q = data_ov065_0228e108;
        } else {
            q = p + 6;
        }
        func_ov065_022837bc(i, a, d, q, e);
    }
}

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

s32 func_ov065_02283c2c(s32 a) {
    return func_ov065_02278ee8(a);
}

char *func_ov065_02283c34(char *s, char *key) {
    char *r = func_ov065_02283c4c(s, key);
    if (r == 0) {
        r = data_ov065_0228e108;
    }
    return r;
}

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

char *func_ov065_02283e88(char *out, char *in) {
    s32 ok;
    s32 klen;
    s32 i;
    s32 j;
    klen = func_021277d4(data_ov065_0228e128);
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
            x = (data_ov065_0228e128[(i + t) % klen] + i * t) % 0x20;
            out[i] = func_02127b40((u8)in[x] ^ data_ov065_0228e128[(c * j) % klen]) % 0x5d + 0x21;
        }
        j += 0x4647;
    }
    return out;
}

char *func_ov065_02283f34(u8 *out) {
    u32 t2;
    u32 b;
    u8 *p;
    u32 c;
    s32 i;
    u32 t1;
    u32 v[9];
    u32 acc;
    func_02128c60(func_ov065_02279144(out));
    out[0] = func_02128c70() % 0x5d + 0x21;
    acc = 0;
    i = 1;
    v[1] = 0;
    v[0] = 1;
    v[3] = 0;
    v[2] = 1;
    v[5] = 1;
    v[4] = 1;
    v[6] = 1;
    v[7] = 1;
    for (; i < 0x20; i++) {
        b = out[i - 1];
        c = out[0];
        if (b < c) {
            t1 = v[0];
        } else {
            t1 = v[1];
        }
        if (c < 0x4f) {
            t2 = v[2];
        } else {
            t2 = v[3];
        }
        c &= v[5];
        v[8] = i;
        v[8] = v[8] ^ b;
        v[8] = v[8] & v[4];
        acc ^= v[8];
        c ^= acc;
        c ^= t2;
        acc = c;
        acc ^= t1;
        p = out + i;
        out[i] = func_02128c70() % 0x5d + 0x21;
        if ((acc != 0 && (*p & v[6]) == 0) || (acc == 0 && (*p & v[7]) == 1)) {
            (*p)++;
        }
    }
    return (char *)out;
}

BOOL func_ov065_02283fdc(u8 *p) {
    u32 t2;
    u32 t1;
    u32 v[8];
    u32 acc;
    s32 i;
    u32 c;
    u32 b;
    u32 x;
    acc = 0;
    i = 1;
    c = p[0];
    v[0] = c;
    v[0] &= i;
    v[2] = 0;
    v[1] = 1;
    v[4] = 0;
    v[3] = 1;
    v[6] = 1;
    v[5] = 1;
    v[7] = 1;
    for (; i < 0x20; i++) {
        b = p[i - 1];
        if (b < c) {
            t1 = v[1];
        } else {
            t1 = v[2];
        }
        if (c < 0x4f) {
            t2 = v[3];
        } else {
            t2 = v[4];
        }
        x = i;
        x ^= b;
        x &= v[5];
        acc ^= x;
        b = v[0];
        b ^= acc;
        b ^= t2;
        acc = b;
        acc ^= t1;
        if ((acc != 0 && (p[i] & v[6]) == 0) || (acc == 0 && (p[i] & v[7]) == 1)) {
            return FALSE;
        }
    }
    return TRUE;
}

void func_ov065_0228405c(Unk_ov065_02284100_Buf *b, s32 pos, s32 n) {
    if (pos == -1) {
        pos = b->unk_08 - n;
    }
    func_021289b4(b->unk_00 + pos, b->unk_00 + pos + n, b->unk_08 - pos - n);
    b->unk_08 -= n;
}

void func_ov065_02284090(Unk_ov065_02284100_Buf *b, char *s, s32 n) {
    if (s != 0 && n != 0) {
        if (n == -1) {
            n = func_021277d4(s);
        }
        func_02128a00(b->unk_00 + b->unk_08, s, n);
        b->unk_08 += n;
    }
}

void func_ov065_022840cc(Unk_ov065_02284100_Buf *b, s32 v) {
    b->unk_00[b->unk_08++] = v >> 8;
    b->unk_00[b->unk_08++] = v;
}

void func_ov065_022840ec(Unk_ov065_02284100_Buf *b, s32 v) {
    b->unk_00[b->unk_08++] = v;
}

s32 func_ov065_022840f8(Unk_ov065_02284100_Buf *b) {
    return b->unk_04 - b->unk_08;
}

s32 func_ov065_02284100(Unk_ov065_02284100_Buf *b, s32 size) {
    b->unk_00 = (char *)func_ov065_02277af0(size);
    if (b->unk_00 == 0) {
        return 0;
    }
    b->unk_04 = size;
    return 1;
}

s32 func_ov065_0228412c(Unk_ov065_0228412c_Obj *o, s32 a1, s32 a2, s32 a3, s32 a4, s32 *out) {
    *out = 0;
    if (o == 0) {
        return 1;
    }
    if (o->unk_30 == 0) {
        return 1;
    }
    if (a4 == 0 || a3 == 0) {
        a3 = 0;
        a4 = 0;
    }
    o->unk_1c++;
    *out = o->unk_30(o, a1, a2, a3, a4);
    o->unk_1c--;
    if (o->unk_14 != 0 && o->unk_1c == 0) {
        func_ov065_02286564(o);
        return 0;
    }
    return 1;
}

s32 func_ov065_022841a4(Unk_ov065_0228412c_Obj *o, Unk_ov065_0228412c_Obj *x, s32 u2, s32 u3, s32 s4, s32 s5, s32 s6, s32 s7) {
    s32 (*f)(Unk_ov065_0228412c_Obj *, Unk_ov065_0228412c_Obj *, s32, s32, s32, s32, s32);
    if (o == 0) {
        return 1;
    }
    if (s7 != 0) {
        f = o->unk_28;
    } else {
        f = o->unk_2c;
    }
    if (f == 0) {
        return 1;
    }
    if (s6 == 0 || s5 == 0) {
        s5 = 0;
        s6 = 0;
    }
    o->unk_1c++;
    if (x != 0) {
        x->unk_24++;
    }
    f(o, x, u2, u3, s4, s5, s6);
    o->unk_1c--;
    if (x != 0) {
        x->unk_24--;
    }
    if (o->unk_14 != 0 && o->unk_1c == 0) {
        func_ov065_02286564(o);
        return 0;
    }
    return 1;
}
}
