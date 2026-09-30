#include "types.h"
#include "Unk_020d8c7c.h"

extern "C" {
extern void *data_020cbb18;
extern u8 data_021d7350[];
extern u8 data_021ed0a0[];
extern char data_ov047_0225b980[];

void func_ov047_0225a5c0(void *self);
void func_ov047_0225a864(void *self);
void func_ov047_0225a944(void *self, s32 v);
u32 func_0212a438(const char *s);
s32 func_0212a15c(const char *a, const char *b, u32 n);
BOOL func_020a032c();
BOOL func_02072e44(void *g);
BOOL func_0202e148();
s16 *func_0209c37c(s32 a, s32 b);
s32 func_02014918(void *self);
s32 func_02014a4c(void *self);
void func_0201517c(void *self, void (*cb)(void *), u32 a, u32 b);
void func_020151d0(void *self, s32 a);
void func_0201578c(void *self, void *p, u32 a, u32 b);
BOOL func_0209e170(void *g, u32 n);
void func_0209e148(void *g, u32 n);
BOOL func_0206ff9c(void *g);
BOOL func_02070060(void *g);
BOOL func_0207001c(void *g);
BOOL func_0206ff58(void *g);
BOOL func_0206ffdc(void *g);
BOOL func_02070358(void *g, u16 *p);
void func_020701d0(void *g, u16 *p);
void *func_0209750c();
void func_0209801c(void *p, u32 v);
s32 func_02062ad4(u16 *a, u32 b, u32 c, void *d, u32 e, u32 f, u32 g, u32 h, u32 i, u32 j);
void func_0209909c(u16 *a, s32 b, s32 c);
void func_02099064(s32 h);
s32 func_02063b8c(s32 n);
BOOL func_0204b2d4(u16 *p);
s32 func_0204b25c(u16 *p);
s32 func_02052c54(u16 *p);
s32 func_02052c18(s32 id);
s32 func_0206fe34(void *g, s32 id);
void func_02067a84(void *owner, u8 *msg, const char *name);
}

class Unk_020d9670 : public Unk_020d8c7c_Base {
public:
    Unk_020d9670();
    virtual ~Unk_020d9670();
    char unk_04[0x1a];
    u8 unk_1e;
    u8 pad_1f[0x3c - 0x1f];
    void *unk_3c;
    u8 pad_40[0xc4 - 0x40];
    s32 unk_c4;
    u8 unk_c8;
    u8 pad_c9;
    u16 unk_ca;
    s32 unk_cc;
    u8 pad_d0[0xea - 0xd0];
};

class Unk_ov047_0225b5d4 : public Unk_020d9670 {
public:
    virtual BOOL vfunc_14();

    void func_ov047_0225955c();
    void func_ov047_02259580();
    void func_ov047_022595a0();
    void func_ov047_0225965c();
    void func_ov047_022596e8();
    void func_ov047_0225977c();
    void func_ov047_022597b0();
    void func_ov047_022597d8();
    void func_ov047_02259804();
    void func_ov047_02259818();
    void func_ov047_02259880();
    void func_ov047_022598e4();
    void func_ov047_022599cc();
    void func_ov047_022599ec();
    void func_ov047_02259a14();
    void func_ov047_02259a28();
    void func_ov047_02259a3c();
    void func_ov047_02259a64();
    void func_ov047_02259fd8();
};

typedef void (Unk_ov047_0225b5d4::*Unk_ov047_02259a8c_Fn)();

struct Unk_ov047_02259a8c_Ent {
    u32 id;
    Unk_ov047_02259a8c_Fn fn;
};

static inline BOOL Unk_ov047_022596e8_IsNoneT(u16 *p, u16 &v) {
    BOOL ok;
    if (func_0204b2d4(p)) {
        v = 0xfff1;
        if (func_0204b25c(p) == func_0204b25c(&v)) {
            ok = TRUE;
        } else {
            ok = FALSE;
        }
    } else {
        if (*p == 0xfff1) {
            ok = TRUE;
        } else {
            ok = FALSE;
        }
    }
    return ok;
}

static inline BOOL Unk_ov047_022596e8_IsNone(u16 *p) {
    u16 v;
    return Unk_ov047_022596e8_IsNoneT(p, v);
}

void Unk_ov047_0225b5d4::func_ov047_022596e8() {
    if (unk_1e == 0x32) {
        if (!Unk_ov047_022596e8_IsNone(&unk_ca)) {
            BOOL f = FALSE;
            u32 v = unk_ca;
            if (v >= 0x12b0 && v <= 0x12e7) {
                f = TRUE;
            }
            s32 x;
            if (f) {
                x = v - 0x12b0;
            } else {
                x = -1;
            }
            unk_cc = (u8)(x + 0x6e);
        }
    }
}

void Unk_ov047_0225b5d4::func_ov047_0225977c() {
    func_ov047_02259fd8();
    if (func_0206ff9c(data_021ed0a0)) {
        unk_cc = 0x31;
    } else {
        unk_cc = 0x27;
    }
    func_02014a4c(this);
}

void Unk_ov047_0225b5d4::func_ov047_022597b0() {
    if (func_02070060(data_021ed0a0)) {
        unk_cc = 0x2a;
    } else {
        unk_cc = 0x2b;
    }
}

void Unk_ov047_0225b5d4::func_ov047_022597d8() {
    func_02014a4c(this);
    func_ov047_02259fd8();
    if (unk_c8 == 0) {
        unk_cc = 0x27;
    } else {
        unk_cc = 0x20;
    }
}

void Unk_ov047_0225b5d4::func_ov047_02259804() {
    func_02014918(this);
    unk_cc = 0x20;
}

void Unk_ov047_0225b5d4::func_ov047_02259818() {
    if (func_02072e44(data_020cbb18) != 0 || *func_0209c37c(0, 0x4a) != 0) {
        func_02014918(this);
        unk_cc = 0x20;
    } else if (func_0202e148() != 0 && func_02070358(data_021ed0a0, &unk_ca) == 0) {
        unk_cc = 0x1e;
    } else {
        func_02014918(this);
        unk_cc = 0x20;
    }
}

void Unk_ov047_0225b5d4::func_ov047_02259880() {
    if (unk_c8 == 0) {
        if (func_02072e44(data_020cbb18) == 0 && *func_0209c37c(0, 0x4a) == 0 && func_0202e148() != 0 &&
            func_02070358(data_021ed0a0, &unk_ca) == 0) {
            unk_cc = 0x69;
        } else {
            unk_cc = 0x6a;
        }
    } else {
        unk_cc = 0x1d;
    }
}

void Unk_ov047_0225b5d4::func_ov047_022598e4() {
    u16 bufa, bufb;
    if (!Unk_ov047_022596e8_IsNone(&unk_ca)) {
        void *p = func_0209750c();
        func_0209801c(p, 0x35);
        func_02062ad4(&bufb, 0x450c, 0x34, 0, 0, 0, 1, 10, 0, 1);
        unk_ca = bufb;
        if (unk_c4 >= 0) {
            func_0209909c(&unk_ca, 0, unk_c4);
        }
        func_0201578c(this, &unk_ca, 0, 7);
        func_02062ad4(&bufa, 0x450c, 0x34, &unk_ca, 1, 0, 1, 10, 0, 1);
        func_0201578c(this, &bufa, 1, 7);
    }
    unk_cc = (u8)(func_02063b8c(3) + 0x1a);
}

void Unk_ov047_0225b5d4::func_ov047_022599cc() {
    if (unk_ca != 0xfff1) {
        func_02014918(this);
    }
}

void Unk_ov047_0225b5d4::func_ov047_02259a14() {
    func_02014918(this);
    unk_cc = 0x6b;
}

void Unk_ov047_0225b5d4::func_ov047_02259a28() {
    func_02014918(this);
    func_ov047_022599ec();
}

void Unk_ov047_0225b5d4::func_ov047_02259a3c() {
    func_0201517c(this, func_ov047_0225a5c0, 0xd, 1);
    func_020151d0(this, 0);
    func_ov047_0225a944(this, 1);
}

void Unk_ov047_0225b5d4::func_ov047_02259a64() {
    func_0201517c(this, func_ov047_0225a864, 0xd, 1);
    func_020151d0(this, 0);
    func_ov047_0225a944(this, 0);
}

BOOL Unk_ov047_0225b5d4::vfunc_14() {
    void *volatile p;
    volatile u8 hdr[4];
    volatile u16 tt[3];
    if (func_020a032c()) {
        goto end;
    }
    if (func_0212a15c((char *)&unk_04, data_ov047_0225b980, func_0212a438(data_ov047_0225b980)) != 0) {
        goto end;
    }
    if ((s32)unk_1e < 0xc) {
        if (func_0209e170(data_021d7350, 0xc)) {
            unk_cc = 0x44;
        } else {
            unk_cc = 0xc;
        }
        hdr[0] = unk_cc;
        func_02067a84(unk_3c, (u8 *)&hdr[0], data_ov047_0225b980);
        goto end;
    }
    if (unk_1e == 0x33 || ((s32)unk_1e >= 0x6e && (s32)unk_1e <= 0xa5)) {
        func_ov047_02259fd8();
        if (func_0207001c(data_021ed0a0)) {
            unk_cc = 0x34;
        } else {
            unk_cc = 0x27;
        }
        func_02014a4c(this);
        hdr[1] = unk_cc;
        func_02067a84(unk_3c, (u8 *)&hdr[1], data_ov047_0225b980);
        goto end;
    }
    if ((s32)unk_1e >= 0xaa && (s32)unk_1e <= 0xe1) {
        func_ov047_02259fd8();
        if (func_0206ff58(data_021ed0a0)) {
            unk_cc = 0x36;
        } else {
            unk_cc = 0x27;
        }
        func_02014a4c(this);
        hdr[2] = unk_cc;
        func_02067a84(unk_3c, (u8 *)&hdr[2], data_ov047_0225b980);
        goto end;
    }
    p = func_0209750c();
    unk_cc = 0xff;
    static Unk_ov047_02259a8c_Ent tbl[35] = {
        {0x14, &Unk_ov047_0225b5d4::func_ov047_02259a64}, {0x15, &Unk_ov047_0225b5d4::func_ov047_022599cc},
        {0x16, &Unk_ov047_0225b5d4::func_ov047_02259a3c}, {0x17, &Unk_ov047_0225b5d4::func_ov047_02259a3c},
        {0x18, &Unk_ov047_0225b5d4::func_ov047_022599ec}, {0x19, &Unk_ov047_0225b5d4::func_ov047_022598e4},
        {0x1a, &Unk_ov047_0225b5d4::func_ov047_02259880}, {0x1b, &Unk_ov047_0225b5d4::func_ov047_02259880},
        {0x1c, &Unk_ov047_0225b5d4::func_ov047_02259880}, {0x1d, &Unk_ov047_0225b5d4::func_ov047_02259818},
        {0x1f, &Unk_ov047_0225b5d4::func_ov047_02259804}, {0x26, &Unk_ov047_0225b5d4::func_ov047_022597d8},
        {0x29, &Unk_ov047_0225b5d4::func_ov047_022597b0}, {0x2e, &Unk_ov047_0225b5d4::func_ov047_0225977c},
        {0x2f, &Unk_ov047_0225b5d4::func_ov047_0225977c}, {0x30, &Unk_ov047_0225b5d4::func_ov047_0225977c},
        {0x31, &Unk_ov047_0225b5d4::func_ov047_022597b0}, {0x32, &Unk_ov047_0225b5d4::func_ov047_022596e8},
        {0x33, &Unk_ov047_0225b5d4::func_ov047_022596e8}, {0x34, &Unk_ov047_0225b5d4::func_ov047_022597b0},
        {0x35, &Unk_ov047_0225b5d4::func_ov047_0225965c}, {0x36, &Unk_ov047_0225b5d4::func_ov047_022597b0},
        {0x37, &Unk_ov047_0225b5d4::func_ov047_022595a0}, {0x38, &Unk_ov047_0225b5d4::func_ov047_022595a0},
        {0x39, &Unk_ov047_0225b5d4::func_ov047_022595a0}, {0x3a, &Unk_ov047_0225b5d4::func_ov047_02259580},
        {0x3b, &Unk_ov047_0225b5d4::func_ov047_02259580}, {0x3c, &Unk_ov047_0225b5d4::func_ov047_02259580},
        {0x3d, &Unk_ov047_0225b5d4::func_ov047_02259580}, {0x3f, &Unk_ov047_0225b5d4::func_ov047_0225955c},
        {0x40, &Unk_ov047_0225b5d4::func_ov047_022599ec}, {0x41, &Unk_ov047_0225b5d4::func_ov047_022599ec},
        {0x42, &Unk_ov047_0225b5d4::func_ov047_02259a28}, {0x43, &Unk_ov047_0225b5d4::func_ov047_02259a28},
        {0x6a, &Unk_ov047_0225b5d4::func_ov047_02259a14},
    };
    u8 *pid = &unk_1e;
    Unk_ov047_02259a8c_Ent *tp = tbl;
    u32 i = 0;
    goto test;
loop:
    u32 ida = tp[i].id;
    u32 idb = *pid;
    if (ida == idb) {
        (this->*tp[i].fn)();
    }
    i++;
test:
    if (i < 0x23) goto loop;
    s32 v50 = *(volatile u8 *)&unk_1e;
    if (v50 >= 0x50 && v50 <= 0x67) {
        if (func_0206ffdc(data_021ed0a0)) {
            unk_cc = 0x29;
        } else if (unk_c8 == 0) {
            unk_cc = 0x27;
        } else {
            unk_cc = 0x20;
        }
        unk_ca = 0xfff1;
        func_02014a4c(this);
    }
    if (unk_1e == 0x25 || unk_1e == 0x2c || unk_1e == 0x2d || unk_1e == 0x69) {
        if (!Unk_ov047_022596e8_IsNoneT(&unk_ca, *(u16 *)&tt[0])) {
            void *g = data_021ed0a0;
            s32 a, b, r;
            func_020701d0(g, &unk_ca);
            func_0209e148(data_021d7350, 0xc);
            func_0209801c(p, 8);
            if (unk_c4 >= 0) {
                func_02099064(unk_c4);
                unk_c4 = -1;
            }
            a = func_02052c54(&unk_ca);
            b = func_02052c18(a);
            r = func_0206fe34(g, a);
            if (b == 1) {
                if (unk_1e == 0x2d) {
                    if (!Unk_ov047_022596e8_IsNoneT(&unk_ca, *(u16 *)&tt[1])) {
                        unk_cc = (u8)(a + 0x50);
                    }
                } else {
                    unk_cc = 0x2d;
                }
            } else if (b == r) {
                if (!Unk_ov047_022596e8_IsNoneT(&unk_ca, *(u16 *)&tt[2])) {
                    unk_cc = (u8)(a + 0x50);
                }
            } else {
                unk_cc = 0x26;
            }
        }
    }
    if (unk_cc != 0xff) {
        hdr[3] = unk_cc;
        func_02067a84(unk_3c, (u8 *)&hdr[3], data_ov047_0225b980);
    }
end:;
}

void Unk_ov047_0225b5d4::func_ov047_02259fd8() {
    if (!Unk_ov047_022596e8_IsNone(&unk_ca)) {
        void *p = func_0209750c();
        func_020701d0(data_021ed0a0, &unk_ca);
        func_0209e148(data_021d7350, 0xc);
        func_0209801c(p, 8);
        if (unk_c4 >= 0) {
            func_02099064(unk_c4);
            unk_c4 = -1;
        }
        unk_ca = 0xfff1;
    }
}

void Unk_ov047_0225b5d4::func_ov047_022599ec() {
    if (func_0209e170(data_021d7350, 0xc)) {
        unk_cc = 0x46;
    } else {
        unk_cc = 0x45;
    }
}
