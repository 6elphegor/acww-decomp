#include "types.h"
#include "Unk_020d8c7c.h"

class Unk_020dd458 {
public:
    Unk_020dd458();
    virtual ~Unk_020dd458();

    u8 func_02065578();
    u32 func_02065588(u32 v, u32 w);
    void func_02065b28();
    void func_02065c94();
    void func_02065e70(Unk_020dd458 *src);

    /* 0x04 */ u8 unk_04[0xec];
    /* 0xf0 */ u16 unk_f0;
    /* 0xf2 */ u16 pad_f2;
};

// Array of ten elements, indexed table getter at 0x02097020.
class Unk_02097020 {
public:
    Unk_02097020();
    ~Unk_02097020();
    Unk_020dd458 *func_02097020(s32 i);
    void func_02096fd4();
    BOOL func_02096fa0(u32 mask);
    void func_02096fb8(u32 mask);
    u8 *func_02096fc8();

    /* 0x000 */ Unk_020dd458 unk_00[10];
    /* 0x988 */ u8 unk_988;
    /* 0x989 */ u8 unk_989;
    /* 0x98a */ u8 unk_98a;
    /* 0x98b */ u8 unk_98b;
    /* 0x98c */ u16 unk_98c;
    /* 0x98e */ u16 pad_98e;
};

class Unk_020970b8 {
public:
    Unk_020970b8();
    ~Unk_020970b8();
    Unk_020dd458 *func_020970b8(s32 i);
    void func_02097078(u32 v);
    u32 func_02097084();
    void func_02097090();

    /* 0x000 */ Unk_020dd458 unk_00[10];
    /* 0x988 */ u16 unk_988;
    /* 0x98a */ u16 pad_98a;
};

class Unk_02096d10 {
public:
    void func_02096d10(u32 v);
    u8 func_02096d1c();
    BOOL func_02096d28(s32 i);
    void func_02096d4c(s32 i);
    void func_02096d6c(s32 i);
    BOOL func_02096d8c(u32 mask);
    void func_02096d9c(u32 mask);
    void func_02096da4(s32 *v);
    BOOL func_02096dbc(s32 *v);
    void func_02096e00();

    /* 0x00 */ u8 unk_00;
    /* 0x01 */ u8 unk_01;
    /* 0x02 */ u8 unk_02;
    /* 0x03 */ u8 unk_03;
    /* 0x04 */ u8 unk_04[15];
    /* 0x13 */ u8 pad_13;
};

class Unk_02096e28 : public Unk_020dd458 {
public:
    void func_02096e28();
    u8 *func_02096e50();

    /* 0xf4 */ u8 unk_f4;
    /* 0xf5 */ u8 unk_f5;
    /* 0xf6 */ u8 unk_f6;
    /* 0xf7 */ u8 unk_f7;
};

class Unk_02096e78 : public Unk_020dd458 {
public:
    s32 func_02096e78();
    void func_02096ed4();
    BOOL func_02096ee8(s32 i);
    void func_02096f10(s32 i);
    void func_02096f30();

    /* 0xf4 */ u8 unk_f4[5];
};

class Unk_02096f68 {
public:
    void func_02096f68();
    Unk_020dd458 *func_02096f88(s32 i);

    /* 0x000 */ Unk_020dd458 unk_00[75];
};

// Vtable at 0x020e1db0.
class Unk_020e1db0 : public Unk_020d8c7c {
public:
    virtual ~Unk_020e1db0();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_24();

    void func_02096c58(u32 mask);
    void func_02096c68(u32 mask);
    BOOL func_02096c78(u32 mask);
    void func_02096c8c();

    /* 0x50 */ u16 unk_50;
    /* 0x52 */ u16 pad_52;
};

extern "C" {
void func_020966f8(void *);
void func_020795c4(void *, void *);
s32 func_020969b8(Unk_020dd458 *);
s32 func_02096960(Unk_020dd458 *);
s32 func_02096914(Unk_020dd458 *, s32);
BOOL func_02096acc(Unk_020dd458 *e, s32 idx, u32 flag);
BOOL func_02096aac(Unk_020dd458 *e);
void func_02096a9c(Unk_020dd458 *e);
s32 func_0209750c(void);
s32 func_02098878(s32);
s32 func_02098320(s32);
s32 func_0209888c(s32);
s32 func_02098044(s32, s32);
s32 func_02097ff4(s32, s32);
s32 func_0209801c(s32, s32);
s32 func_02097414(s32);
s32 func_02097410(s32, s32);
u32 func_020973e8(s32);
s32 func_0206e844(void);
s32 func_020b50f4(void);
void func_02065cc8(void *);
void func_02065cd4(void *);
s32 func_02063b8c(s32);
s32 func_02133150(s32, s32);
void func_020656dc(void *, void *, void *, void *, void *, s32);
void func_02063888(void *);
void func_02063870(void *);
void func_020638d0(void *, void *);
void func_0203ce4c(s32, void *);
void func_020b4154(void *);
void func_020b413c(void *);
void func_020b3270(void *, s32, s32, s32, s32, s32);
extern u8 data_021d7352[];
extern u8 data_020e1dfc[];
extern u8 data_020e1e00[];
extern u8 data_020e1e04[];
extern u8 data_020e1e08[];
extern u8 data_020e1e0c[];
extern u8 data_020e1e10[];
extern u8 data_020e1df8[];
extern u8 data_021dfd8c[];
}
extern Unk_02097020 data_021eb98c;
extern Unk_020970b8 data_021e935c[];

extern "C" BOOL func_02096a0c(Unk_020dd458 *e) {
    s32 r = func_020969b8(e);
    if (r == -2) {
        return FALSE;
    }
    if (r == -1) {
        r = func_02096960(e);
        if (r == -2) {
            return FALSE;
        }
        if (r == -1) {
            return FALSE;
        }
    }
    return TRUE;
}

extern "C" BOOL func_02096a50(Unk_020dd458 *e, BOOL flag) {
    s32 i;
    Unk_020dd458 *p = data_021eb98c.func_02097020(0);
    for (i = 0; i < 10; p++, i++) {
        if (p->func_02065578() == 0) {
            p->func_02065e70(e);
            if (flag) {
                p->func_02065b28();
            }
            return TRUE;
        }
    }
    return FALSE;
}

extern "C" void func_02096a9c(Unk_020dd458 *e) {
    func_020795c4(data_021dfd8c, e);
}

extern "C" BOOL func_02096aac(Unk_020dd458 *e) {
    s32 i = func_020969b8(e);
    if (i < 0) {
        return FALSE;
    }
    return func_02096acc(e, i, 0);
}

extern "C" BOOL func_02096acc(Unk_020dd458 *e, s32 idx, u32 flag) {
    Unk_020dd458 *p = data_021e935c[idx].func_020970b8(0);
    s32 i;
    for (i = 0; i < 10; p++, i++) {
        if (p->func_02065578() == 0) {
            p->func_02065e70(e);
            if (flag) {
                p->func_02065b28();
            }
            return TRUE;
        }
    }
    return FALSE;
}

extern "C" BOOL func_02096b24(s32 idx) {
    if (idx == -1) {
        idx = func_02098878(func_0209750c());
    }
    Unk_020dd458 *p = data_021e935c[idx].func_020970b8(0);
    s32 i;
    for (i = 0; i < 10; p++, i++) {
        if (p->func_02065578() == 0) {
            return FALSE;
        }
    }
    return TRUE;
}

extern "C" s32 func_02096b74(void) {
    Unk_020dd458 *base = data_021eb98c.func_02097020(0);
    s32 n = func_02096914(base, 10);
    s32 i;
    volatile s32 flag = 0;
    volatile s32 zero = 0;
    for (i = 0; i < n; i++) {
        Unk_020dd458 *p = &base[i];
        if (p->func_02065578() != 0) {
            s32 idx = func_020969b8(p);
            if (idx == -2) {
                p->func_02065c94();
            } else if (idx != ~zero) {
                if (func_02096acc(p, idx, flag) != 0) {
                    p->func_02065c94();
                }
            } else {
                if (func_02096960(p) < 0) {
                    p->func_02065c94();
                } else {
                    func_02096a9c(p);
                    p->func_02065c94();
                }
            }
        }
    }
    return func_02096914(base, 10);
}

Unk_020e1db0::~Unk_020e1db0() {}

BOOL Unk_020e1db0::vfunc_00() {
    unk_50 = 0;
    func_02096c68(1);
    return TRUE;
}

BOOL Unk_020e1db0::vfunc_0c() {
    return TRUE;
}

BOOL Unk_020e1db0::vfunc_18() {
    if (func_02096c78(1)) {
        if (func_020b50f4()) {
            func_02096c8c();
        }
        func_02096c58(1);
    }
    return TRUE;
}

BOOL Unk_020e1db0::vfunc_24() {
    return TRUE;
}

void Unk_020e1db0::func_02096c58(u32 mask) {
    unk_50 = unk_50 & ~mask;
}

void Unk_020e1db0::func_02096c68(u32 mask) {
    unk_50 = unk_50 | mask;
}

BOOL Unk_020e1db0::func_02096c78(u32 mask) {
    if (unk_50 & mask) {
        return TRUE;
    }
    return FALSE;
}

void Unk_020e1db0::func_02096c8c() {
    func_020966f8(this);
}

extern "C" Unk_020e1db0 *func_02096ce4() {
    return new Unk_020e1db0();
}

BOOL Unk_02096d10::func_02096dbc(s32 *v) {
    if (func_02096d8c(0x80)) {
        if (unk_02 == v[0] && unk_01 == v[1] && unk_00 == v[2]) {
            return TRUE;
        }
        return FALSE;
    }
    func_02096da4(v);
    return TRUE;
}

void Unk_02096d10::func_02096d10(u32 v) {
    unk_03 = v | (unk_03 & 0x80);
}

u8 Unk_02096d10::func_02096d1c() {
    return unk_03 & 0x7f;
}

BOOL Unk_02096d10::func_02096d28(s32 i) {
    BOOL r = TRUE;
    if (((r << (i & 7)) & unk_04[i >> 3]) == 0) {
        r = FALSE;
    }
    return r;
}

void Unk_02096d10::func_02096d4c(s32 i) {
    u8 *p = unk_04;
    s32 k = i >> 3;
    p[k] &= ~(1 << (i & 7));
}

void Unk_02096d10::func_02096d6c(s32 i) {
    u8 *p = unk_04;
    s32 k = i >> 3;
    p[k] |= (1 << (i & 7));
}

BOOL Unk_02096d10::func_02096d8c(u32 mask) {
    if (unk_03 & mask) {
        return TRUE;
    }
    return FALSE;
}

void Unk_02096d10::func_02096da4(s32 *v) {
    unk_02 = v[0];
    unk_01 = v[1];
    unk_00 = v[2];
    func_02096d9c(0x80);
}

void Unk_02096d10::func_02096d9c(u32 mask) {
    unk_03 = unk_03 | mask;
}

void Unk_02096d10::func_02096e00() {
    s32 i;
    unk_00 = 1;
    unk_01 = 1;
    unk_02 = 0;
    unk_03 = 0;
    for (i = 0; i < 15; i++) {
        unk_04[i] = 0;
    }
    unk_03 = 100;
}

extern "C" void func_02096e20() {}
extern "C" void func_02096e24() {}

void Unk_02096e28::func_02096e28() {
    func_02065c94();
    unk_f4 = 1;
    unk_f5 = 1;
    unk_f6 = 0;
    unk_f7 = 0;
}

u8 *Unk_02096e28::func_02096e50() {
    return &unk_f4;
}

extern "C" void func_02096e54() {}

extern "C" Unk_020dd458 *func_02096e58(Unk_020dd458 *p) {
    func_02065cc8(p);
    return p;
}

extern "C" Unk_020dd458 *func_02096e68(Unk_020dd458 *p) {
    func_02065cd4(p);
    return p;
}

s32 Unk_02096e78::func_02096e78() {
    s32 i;
    s32 cnt = 0;
    i = cnt;
    for (; i < 0x28; i++) {
        if (func_02096ee8(i) == 0) {
            cnt++;
        }
    }
    if (cnt == 0) {
        func_02096ed4();
        cnt = 0x28;
    }
    s32 r = func_02063b8c(cnt);
    for (cnt = 0; cnt < 0x28; cnt++) {
        if (func_02096ee8(cnt) == 0) {
            if (r > 0) {
                r--;
            } else {
                return cnt;
            }
        }
    }
    return 0;
}

void Unk_02096e78::func_02096ed4() {
    s32 i;
    for (i = 0; i < 5; i++) {
        unk_f4[i] = 0;
    }
}

BOOL Unk_02096e78::func_02096ee8(s32 i) {
    BOOL r = TRUE;
    if (((r << (i & 7)) & unk_f4[i >> 3]) == 0) {
        r = FALSE;
    }
    return r;
}

void Unk_02096e78::func_02096f10(s32 i) {
    u8 *p = unk_f4;
    s32 k = i >> 3;
    p[k] |= (1 << (i & 7));
}

void Unk_02096e78::func_02096f30() {
    func_02065c94();
    func_02096ed4();
}

extern "C" void func_02096f44() {}

extern "C" Unk_020dd458 *func_02096f48(Unk_020dd458 *p) {
    func_02065cc8(p);
    return p;
}

extern "C" Unk_020dd458 *func_02096f58(Unk_020dd458 *p) {
    func_02065cd4(p);
    return p;
}

void Unk_02096f68::func_02096f68() {
    s32 i;
    for (i = 0; i < 75; i++) {
        unk_00[i].func_02065c94();
    }
}

Unk_020dd458 *Unk_02096f68::func_02096f88(s32 i) {
    if (i >= 0 && i < 3) {
        return &unk_00[i * 25];
    }
    return NULL;
}

BOOL Unk_02097020::func_02096fa0(u32 mask) {
    if (unk_98c & mask) {
        return TRUE;
    }
    return FALSE;
}

void Unk_02097020::func_02096fb8(u32 mask) {
    unk_98c = unk_98c | mask;
}

u8 *Unk_02097020::func_02096fc8() {
    return &unk_988;
}

void Unk_02097020::func_02096fd4() {
    s32 i;
    for (i = 0; i < 10; i++) {
        unk_00[i].func_02065c94();
    }
    unk_98c = 0;
    unk_988 = 1;
    unk_989 = 1;
    unk_98a = 0;
    unk_98b = 0;
}

Unk_020dd458 *Unk_02097020::func_02097020(s32 i) {
    if (i >= 0 && i < 10) {
        return &unk_00[i];
    }
    return NULL;
}

Unk_02097020::~Unk_02097020() {}

Unk_02097020::Unk_02097020() {}

void Unk_020970b8::func_02097078(u32 v) {
    unk_988 = v;
}

u32 Unk_020970b8::func_02097084() {
    return unk_988;
}

void Unk_020970b8::func_02097090() {
    s32 i;
    for (i = 0; i < 10; i++) {
        unk_00[i].func_02065c94();
    }
    unk_988 = 0;
}

Unk_020dd458 *Unk_020970b8::func_020970b8(s32 i) {
    if (i >= 0 && i < 10) {
        return &unk_00[i];
    }
    return NULL;
}

Unk_020970b8::~Unk_020970b8() {}

Unk_020970b8::Unk_020970b8() {}

extern "C" void func_02097110(s32 n) {
    s32 s = func_0209750c();
    s32 o = func_02098320(s);
    if (n > 0) {
        if (func_02098044(s, 0x16)) {
            s32 id = func_020973e8(o);
            Unk_020dd458 e;
            u8 ch;
            ch = id;
            u32 v;
            func_020656dc(&e, &ch, data_020e1e10, data_020e1df8, data_020e1e0c, func_0209888c(s));
            v = 0xfff1;
            if (id > 13) goto hi;
            if (id >= 13) goto c13;
            switch (id) {
            case 0: goto done;
            case 1: goto c1;
            case 4: goto c4;
            case 7: goto c7;
            case 10: goto c10;
            }
            goto done;
        hi:
            if (id > 16) goto hi2;
            switch (id) {
            case 16: goto c16;
            }
            goto done;
        hi2:
            switch (id) {
            case 20: goto c20;
            }
            goto done;
        c1: v = 0x13fe; goto done;
        c4: v = 0x13ff; goto done;
        c7: v = 0x1400; goto done;
        c10: v = 0x1401; goto done;
        c13: v = 0x1402; goto done;
        c16: v = 0x1403; goto done;
        c20: v = 0x1404;
        done:
            if (v != 0xfff1) {
                e.func_02065588(v, 1);
            }
            if (func_02096aac(&e)) {
                func_02097ff4(s, 0x16);
            }
        }
    }
}

extern "C" void func_02097214(s32 n) {
    s32 s = func_0209750c();
    s32 o = func_02098320(s);
    if (n > 0) {
        s32 m = func_02097414(o);
        if (m >= 1000000) {
            u32 col = 0x37dc;
            s32 k = 0;
            if (m == 999999999) {
                k = 4;
                col = 0x3874;
            } else if (m >= 500000000) {
                k = 3;
                col = 0x4a44;
            } else if (m >= 100000000) {
                k = 2;
                col = 0x4a40;
            } else if (m >= 10000000) {
                k = 1;
                col = 0x3700;
            }
            s32 bit = k + 0x11;
            if (func_02098044(s, bit) == 0) {
                u8 ch;
                ch = k + 0x15;
                Unk_020dd458 e;
                u32 buf[7];
                func_02063888(buf);
                func_020638d0(data_021d7352, buf);
                func_0203ce4c(0, buf);
                func_020656dc(&e, &ch, data_020e1e10, data_020e1e00, data_020e1dfc, func_0209888c(s));
                e.func_02065588(col, 1);
                if (func_02096aac(&e)) {
                    func_0209801c(s, bit);
                }
                func_02063870(buf);
            }
        }
    }
}

extern "C" void func_02097318(s32 n) {
    s32 s = func_0209750c();
    s32 o = func_02098320(s);
    if (func_0206e844() == 0) {
        if (n > 0) {
            s32 m = func_02097414(o);
            s32 q = func_02133150(m, 2000);
            n = q * n * 10;
            if (n > 99999) {
                n = 99999;
            }
            if (n != 0) {
                if (m != 999999999) {
                    s32 t = m + n;
                    if (t > 999999999) {
                        t = 999999999;
                    }
                    func_02097410(o, t);
                    Unk_020dd458 e;
                    u8 ch;
                    u32 buf[11];
                    ch = 0;
                    func_020b4154(buf);
                    func_020b3270(buf, n, 10, 1, 0, 0);
                    func_0203ce4c(1, buf);
                    func_020656dc(&e, &ch, data_020e1e10, data_020e1e08, data_020e1e04, func_0209888c(s));
                    func_02096aac(&e);
                    func_020b413c(buf);
                }
            }
        }
    }
}
