#include "types.h"

extern "C" {
extern u8 data_021c4d4c[];
extern u8 data_020e416c;
extern void *data_021c47c4;
extern u32 data_021c4e38;
extern void *data_020cbb18;
extern u8 data_021c4ee4[];
extern u8 data_021e58a8[];

u32 func_020a69b4(u8 *buf, u32 c);
u8 func_020a7fa8(u8 *buf);
void *func_ov004_02235718();
u8 *func_ov004_022355d8(void *p, s32 x, s32 y, s32 z);
void func_ov004_022087a4(void *p);
void *func_0204ebd8(void *p, s32 a, s32 b, s32 c, s32 d, s32 e);
s32 func_02052fc4();
s32 func_0204b2d4(void *p);
u32 func_0204b25c(void *p);
s32 func_02072e44(void *p);
s32 func_020729cc(void *p, s32 v);
void func_02052a70(void *p, s32 v);
void func_020728d4(void *p);
void func_02072824(void *p, s32 a, s32 b);
void func_020728a4(void *p, void *data, s32 size);
s32 func_020b50e8();
s32 func_020529e4(void *p, s32 a, s32 b, void *c);
void func_0204ee10(s32 *a, s32 *b, s32 c);
s32 func_020a62a0();
void func_02051ff8(s32 a, s32 b, s32 c, s32 d, s32 e);
void func_02060244(void *p, s32 a, s32 b);
void *func_0204cbc0(s32 a);
s32 func_0204eb30(void *p, void *b, s32 c, s32 d, s32 e);

u32 func_02051370(u32 c);
u32 func_02051518();
void func_02051524(s32 *p);
void func_020514a4(void *p);
void func_020515e0(s32 a, s32 b, s32 c, s32 d);
void func_0205170c(s32 a, s32 b, s32 c);
void func_020516e4(s32 a, s32 b);


struct Unk_02051a50_Pack {
    u32 unk_00;
    u32 unk_04;
};
void func_020524a8(Unk_02051a50_Pack *pk, u16 *h);
void func_020524a4(Unk_02051a50_Pack *pk);
u32 func_0205248c(Unk_02051a50_Pack *pk);
s16 *func_0205242c(Unk_02051a50_Pack *pk, u32 idx);
void func_02052554(s32 x, s32 y, s32 d, s32 e, s32 a);
void func_02052504(s32 x, s32 y, s32 g, s32 a);
void func_020524dc(s32 x, s32 y, s32 a);

s32 func_02051320(const u8 *p, s32 n, s32 k) {
    s32 i;
    for (i = 0; i < n; i++) {
        u8 c = p[i];
        if (c == 0) {
            return i;
        }
        if (c == 0x86) {
            return i + k;
        }
    }
    return i;
}

s32 func_02051348(const u8 *p, s32 n) {
    s32 sum = 0;
    s32 i;
    for (i = 0; i < n; i++) {
        sum += func_02051370(p[i]);
    }
    return sum;
}

u32 func_02051370(u32 c) {
    return data_021c4d4c[c];
}

void func_0205137c() {
    s32 i;
    u8 buf[12];
    for (i = 0; (u32)i < 0xe0; i++) {
        buf[func_020a69b4(buf, (u8)i)] = 0;
        data_021c4d4c[i] = func_020a7fa8(buf);
    }
}

BOOL func_020513b0(s32 x, s32 y) {
    BOOL r;
    if (data_020e416c == 1 ? TRUE : FALSE) {
        void *p = data_021c47c4;
        u8 *q = func_ov004_022355d8(func_ov004_02235718(), x, y, 0);
        if (p != NULL && q != NULL) {
            s32 hx = x >> 4;
            s32 hy = y >> 4;
            u16 code;
            void *o = func_0204ebd8(p, hx, hy, x - (hx << 4), y - (hy << 4), 1);
            func_ov004_022087a4(q);
            if (func_02052fc4() == 1 && o != NULL) {
                if (func_0204b2d4(o) != 0) {
                    code = 0xfff1;
                    r = func_0204b25c(o) == func_0204b25c(&code) ? TRUE : FALSE;
                } else {
                    r = *(u16 *)o == 0xfff1 ? TRUE : FALSE;
                }
                if (r) {
                    return TRUE;
                }
            }
        }
    }
    return FALSE;
}

u32 func_02051468() { return func_02051518(); }
void func_02051470(s32 *p) { func_02051524(p); }
void func_02051478() { func_020514a4(0); }
u32 func_02051484() { return func_02051518(); }
void func_0205148c(s32 *p) { func_02051524(p); }
u32 func_02051494() { return func_02051518(); }
void func_0205149c(s32 *p) { func_02051524(p); }

void func_020514a4(void *arg) {
    void *s;
    data_021c4e38 = 0;
    s = data_020cbb18;
    if (func_02072e44(s) == 0 || func_020729cc(s, 0) != 0 || func_020729cc(s, 4) != 0) {
        func_02052a70(data_021c4ee4, (s32)arg);
    } else {
        void *t = data_020cbb18;
        func_020728d4(t);
        func_02072824(t, 0x21, 0);
    }
}

u32 func_02051508() { return func_02051518(); }
void func_02051510(s32 *p) { func_02051524(p); }

u32 func_02051518() {
    return data_021c4e38;
}

void func_02051524(s32 *p) {
    void *s;
    u8 buf[3];
    data_021c4e38 = 0;
    s = data_020cbb18;
    if (func_02072e44(s) == 0 || func_020729cc(s, 0) != 0) {
        if (func_020529e4(data_021c4ee4, 0, func_020b50e8(), p) != 0) {
            data_021c4e38 = 1;
        } else {
            data_021c4e38 = 2;
        }
    } else {
        void *t;
        buf[0] = p[0] >> 9;
        buf[1] = p[2] >> 9;
        buf[2] = func_020b50e8();
        t = data_020cbb18;
        func_020728d4(t);
        func_020728a4(t, buf, 3);
        func_02072824(t, 0x1e, 0);
    }
}

void func_020515b8(s32 a, s32 b, s32 c) {
    s32 x, y;
    func_0204ee10(&x, &y, b);
    func_020515e0(a, x, y, c);
}

void func_020515e0(s32 a, s32 b, s32 c, s32 d) {
    if (func_02072e44(data_020cbb18) == 0 || func_020a62a0() != 0) {
        func_02051ff8(a, b, c, d, 1);
    } else {
        volatile u16 bits;
        void *t;
        u8 *q = func_ov004_022355d8(func_ov004_02235718(), b, c, d);
        if (q != NULL) {
            q[0x779] = 1;
        }
        bits = (bits & ~0x3f) | (a & 0x3f);
        bits = (bits & ~0x40) | ((d & 1) << 6);
        bits = (bits & ~0x780) | (((u16)b & 0xf) << 7);
        bits = (bits & ~0x7800) | (((u16)c & 0xf) << 11);
        t = data_020cbb18;
        func_020728d4(t);
        func_020728a4(t, (void *)&bits, 2);
        func_02072824(t, 0x1d, 6);
    }
}

void func_020516a4(s32 a, s32 b) {
    void *s = data_020cbb18;
    if (func_02072e44(s) == 0 || func_020729cc(s, 0) != 0) {
        func_020516e4(a, b);
    } else {
        func_0205170c(a, b, 0);
    }
}

void func_020516e4(s32 a, s32 b) {
    func_02060244(data_021e58a8, a, b);
    func_0205170c(a, b, 4);
}

void func_0205170c(s32 a, s32 b, s32 c) {
    if (func_02072e44(data_020cbb18) != 0) {
        volatile u8 bits;
        BOOL f;
        void *t;
        bits = (bits & ~0x3f) | (a & 0x3f);
        bits = (bits & ~0x40) | ((b & 1) << 6);
        f = TRUE;
        if (c == 4) {
            f = FALSE;
        }
        bits = (bits & ~0x80) | ((f & 1) << 7);
        t = data_020cbb18;
        func_020728d4(t);
        func_020728a4(t, (void *)&bits, 1);
        func_02072824(t, 0x19, c);
    }
}

void func_02051784(s32 a, s32 b, s32 c, u16 *d, u8 f) {
    void *o;
    if ((data_020e416c == 1 ? TRUE : FALSE) && a == func_020b50e8()) {
        o = data_021c47c4;
    } else {
        o = func_0204cbc0(a);
    }
    if (o != NULL && func_0204eb30(o, d, b, c, 1) != 0 && f != 0 && func_02072e44(data_020cbb18) != 0) {
        u32 bits;
        void *t;
        bits = (bits & ~0xf) | (b & 0xf);
        bits = (bits & ~0xf0) | ((c & 0xf) << 4);
        bits = (bits & 0xff0000ff) | ((*d & 0xffff) << 8);
        t = data_020cbb18;
        func_020728d4(t);
        func_020728a4(t, &bits, 4);
        func_02072824(t, 0x1a, 4);
    }
}

struct Unk_02051a50_Bits {
    u32 x : 4;
    u32 y : 4;
    u32 g : 4;
    u32 d : 1;
    u32 e : 1;
    u32 f : 1;
    u32 item : 16;
    u32 pad : 1;
};

void func_02051a50(s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g, u16 *h, u8 i) {
    void *o;
    u16 loc[3];
    Unk_02051a50_Pack pk;
    Unk_02051a50_Bits bits;
    s32 x, y;
    s32 off;
    u32 idx;
    loc[0] = *h;
    if ((data_020e416c == 1 ? TRUE : FALSE) && a == func_020b50e8()) {
        o = data_021c47c4;
    } else {
        o = func_0204cbc0(a);
    }
    if (o == NULL) {
        return;
    }
    func_020524a8(&pk, h);
    off = 0;
    for (idx = 0; idx < func_0205248c(&pk); idx++) {
        u16 *src;
        x = b + *(s16 *)((u8 *)func_0205242c(&pk, idx) + off);
        y = c + func_0205242c(&pk, idx)[1];
        if (idx == 0) {
            src = &loc[0];
        } else {
            loc[2] = 0xf031;
            src = &loc[2];
        }
        loc[1] = *src;
        if (func_0204eb30(o, &loc[1], x, y, d) == 0) {
            func_020524a4(&pk);
            return;
        }
        func_02052554(x, y, d, e, a);
        if (f != 0 && e != 0 && idx == 0) {
            func_02052504(x, y, g, a);
        }
    }
    if (func_02072e44(data_020cbb18) != 0 && i != 0) {
        void *t;
        bits.x = b;
        bits.y = c;
        bits.g = g & 0xf;
        bits.d = d;
        bits.e = e;
        bits.f = f;
        bits.item = loc[0];
        t = data_020cbb18;
        func_020728d4(t);
        func_020728a4(t, &bits, 4);
        func_02072824(t, 0x1c, 4);
    }
    func_020524a4(&pk);
}

void func_02051844(s32 a, s32 b, s32 c, s32 d, s32 e, u16 *f, s32 g, u8 h) {
    void *o;
    u32 idx;
    s32 x, y;
    BOOL k;
    u16 loc[3];
    Unk_02051a50_Pack pk;
    u32 bits;
    loc[0] = *f;
    if ((data_020e416c == 1 ? TRUE : FALSE) && a == func_020b50e8()) {
        o = data_021c47c4;
    } else {
        o = func_0204cbc0(a);
    }
    if (o == NULL) {
        return;
    }
    func_020524a8(&pk, f);
    k = FALSE;
    if (*f >= 0x45dc && *f <= 0x47d7) {
        k = TRUE;
    }
    for (idx = 0; idx < func_0205248c(&pk); idx++) {
        x = b + func_0205242c(&pk, idx)[0];
        y = c + func_0205242c(&pk, idx)[1];
        loc[1] = 0xfff1;
        if (func_0204eb30(o, &loc[1], x, y, d) == 0 ? TRUE : FALSE) {
            func_020524a4(&pk);
            return;
        }
        if (g != 0 && d == 0) {
            loc[2] = 0xfff1;
            if (func_0204eb30(o, &loc[2], x, y, 1) == 0 ? TRUE : FALSE) {
                func_020524a4(&pk);
                return;
            }
        }
        func_02052554(x, y, d, e, a);
        if (g != 0 && d == 0) {
            func_02052554(x, y, 1, e, a);
        }
        if (k != 0 && e != 0) {
            func_020524dc(x, y, a);
        }
    }
    if (func_02072e44(data_020cbb18) != 0 && h != 0) {
        void *t;
        bits = (bits & ~1) | (d & 1);
        bits = (bits & ~0x1e) | ((b & 0xf) << 1);
        bits = (bits & 0xfffffe1f) | ((c & 0xf) << 5);
        bits = (bits & 0xfffffdff) | ((g & 1) << 9);
        bits = (bits & 0xfffffbff) | ((e & 1) << 10);
        bits = (bits & 0xf80007ff) | ((loc[0] & 0xffff) << 11);
        t = data_020cbb18;
        func_020728d4(t);
        func_020728a4(t, &bits, 4);
        func_02072824(t, 0x1b, 4);
    }
    func_020524a4(&pk);
}
}
