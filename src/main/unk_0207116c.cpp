#include "types.h"

extern "C" {
void func_02001ea0(void *src, void *dst, s32 w, s32 h);
void func_02001fd8(void *src, void *dst, s32 x, s32 w, s32 h);
void func_020641b4(char *name, void *p, u32 size);
s32 func_020639e8(char *buf, const char *fmt, ...);
void *func_020641d8(void *p);
void *func_0206d86c(void *, s32);
s32 func_0206d8b8(void *);
s32 func_0206d940(void *, void *, s32, s32);
void func_0206d964(void *);
void func_0206d974(void *);
s32 func_02097520(s32 a);
s32 func_02098878(s32 p);
void func_02070628(u32 a, s32 b);
void func_020705a0(s32 a);
s32 func_020b50e8(void);
s32 func_020b5184(void);
void *func_ov003_02218b40(u32 a);
void func_ov003_02214e88(void);
void func_020e8558(void *p);
void *func_020e8574(u32 size);
void func_020e85fc(void *heap, void *p);
void *func_020e8608(void *heap, u32 size);
void func_0203c928(void *p);
void func_0203c764(void *self, u16 *p, void *q);
void *func_02097868(void *tbl, s32 i);
void *func_020986d4(void *p);
void *func_02071c88(void *p, u32 i);
void *func_0203c6e4(void *unused);
void *func_02071e58(void *p);
void *func_0203c6d0(void *unused);
void *func_02071e04(void *p);
void *func_02072040(void *p);
void *func_0203c6c8(void *);
s32 func_02055724(void *a, u32 b);
void *func_02055820(void *a, u32 key);
s32 func_0203c6f8(void *a, void *b);
void *func_02071b00(void *tbl, u32 i);
void func_02056fac(void *p);
void *func_02071fa0(void *p);
void *func_0209409c(void *p);
void func_02063950(u16 *p, u16 v);
void func_02094128(void *p, u16 v);
void func_02071e5c(void *p);
void func_02071e74(void *p);
void func_02071f1c(void *a, void *b);
void func_0207200c(void *a, u32 b);
void func_02071ed0(void *a, u32 b);
void func_02071fa4(void *a, void *b);
void func_020a7c04(void *dst, void *src);
void func_020940a0(void *a, void *b);
void func_02094094(void *a, void *b);
void func_020638a0(void *a, void *b);
void func_02094030(void *);
void func_02094018(void *);
void func_020942f8(void *);
void func_020942c8(void *);
void func_020639bc(void *);
void func_020639b8(void *);
void func_02063888(void *);
void func_02063870(void *);
void func_0206267c(void *);
void func_0206260c(void *);

extern u8 data_020e416c[];
extern char data_020e04ac[];
extern char data_020e04c4[];
extern char data_020e04dc[];
extern char data_020e04f8[];
extern char data_020e0514[];
extern char data_020e0524[];
extern u8 data_021cbcfc[];
extern u32 data_021cbd18[8];
extern u32 data_021cbd80[4][8];
extern u8 data_021cbd38[];
extern u8 data_021cc028[];
extern u8 data_021cbc9c;
extern u8 data_021cbcac[4];
struct Unk_02071460_Tbl { u8 pad[0xc]; u8 t[1]; };
extern Unk_02071460_Tbl data_021d7350;
extern void *data_021f482c;
extern u8 *data_021cbcb8;
extern u8 *data_021cbcb0;
extern u8 *data_021cbca4;
extern u8 *data_021cbcb4;
extern u16 data_020cb6f4;
extern u16 data_020d03d0;

void func_020715e4(void *p);
void func_02071458(void *p);
void *func_020716cc(void);
void *func_02071320(void);
}


struct Unk_020716a8 {
    u8 *unk_00;
    u8 *unk_04[16];
    Unk_020716a8();
    ~Unk_020716a8();
    void func_0207164c();
    void func_0207166c();
    void func_020716b8();
};

struct Unk_02071630 {
    Unk_02071630();
    ~Unk_02071630();
};

struct Unk_020718a4 : Unk_02071630 {
    u32 unk_00;
    Unk_020716a8 unk_04;
    Unk_020718a4();
    ~Unk_020718a4();
    void func_020718c0();
    u8 *func_020716d4(s32 i);
    void func_02071770();
    void func_020716f0();
    BOOL func_020718e8(s32 n);
    void func_02071460();
    void *func_020718e4();
    void func_0207185c(s32 bit);
    BOOL func_02071834(s32 bit);
    u32 func_020716e0(s32 i);
    u32 func_020716e8(s32 a, s32 b);
};

struct Unk_02071460_Buf { u32 v[0xb1]; };

static inline BOOL Unk_0207116c_Eq1(u8 *p) { return *p == 1 ? TRUE : FALSE; }
static inline BOOL Unk_0207116c_Eq0(u8 *p) { return *p == 0 ? TRUE : FALSE; }

extern "C" {

BOOL func_0207116c(s32 cmd, s32 x) {
    switch (cmd) {
    case 0:
    case 9: {
        s32 t = func_02097520(0);
        if (t != 0) {
            s32 v = func_02098878(t);
            if (v != -1) func_02070628((u8)(v & 3), x);
        }
        return TRUE;
    }
    case 4:
        if (Unk_0207116c_Eq1(data_020e416c)) {
            if (func_020b50e8() == 10) {
                func_020705a0(x);
                ((Unk_020718a4 *)func_020716cc())->func_0207185c(x & 7);
            }
        }
        return TRUE;
    case 5:
        if (Unk_0207116c_Eq0(data_020e416c)) {
            if (func_020b5184()) {
                if (func_ov003_02218b40(0x500b)) func_ov003_02214e88();
            }
        }
        return TRUE;
    case 1:
    case 2:
    case 3:
    case 6:
    case 7:
    case 8:
    default:
        return FALSE;
    }
}

BOOL func_0207122c(void *a, void *b) {
    func_02001ea0(a, b, 4, 4);
    return TRUE;
}

void func_02071240(void *dst, s32 n) {
    char buf[0x28];
    func_020639e8(buf, data_020e04ac, n + 2);
    func_020641b4(buf, dst, 0x200);
}

void func_0207126c(void *p) {}

BOOL func_02071270(void *a, void *b) {
    func_02001ea0(a, b, 4, 4);
    return TRUE;
}

void func_02071284(void *p) { func_020641b4(data_020e04c4, p, 0x200); }

void func_0207129c(void *p) {}

BOOL func_020712a0(void *a, void *b, s32 x) {
    if (x < 0 || x >= 8) return FALSE;
    func_02001fd8(a, b, x * 4, 4, 4);
    return TRUE;
}

void func_020712c4(void *p) { func_020641b4(data_020e04dc, p, 0x1000); }

void func_020712dc(void *p) {}

BOOL func_020712e0(void *a, void *b, s32 x) {
    if (x < 0 || x >= 8) return FALSE;
    func_02001fd8(a, b, x * 4, 4, 4);
    return TRUE;
}

void func_02071304(void *p) { func_020641b4(data_020e04f8, p, 0x1000); }

void func_0207131c(void *p) {}

void *func_02071320(void) { return data_021cbcfc; }

BOOL func_02071328(void *tbl, void *dst, s32 idx) {
    if (idx < 0x32) {
        u8 *rec = (u8 *)func_0206d86c(tbl, idx);
        if (rec != 0) {
            struct { u8 o0[0x24]; u8 o1[0x1c]; u8 o2[0x1c]; u8 o3[8]; u16 pad; u8 o4[0x16]; } l;
            func_0206267c(l.o0);
            func_020a7c04(l.o0, rec + 2);
            func_02071f1c(dst, l.o0);
            func_0207200c(dst, rec[0]);
            func_02071ed0(dst, rec[1]);
            func_02063888(l.o1);
            func_020a7c04(l.o1, rec + 0x1e);
            func_02094030(l.o2);
            func_020a7c04(l.o2, rec + 0x13);
            func_020639bc(l.o3);
            func_020638a0(l.o3, l.o1);
            func_020942f8(l.o4);
            func_020940a0(l.o4, l.o2);
            func_02094094(l.o4, l.o3);
            func_02071fa4(dst, l.o4);
            func_020942c8(l.o4);
            func_020639b8(l.o3);
            func_02094018(l.o2);
            func_02063870(l.o1);
            func_0206260c(l.o0);
            return TRUE;
        }
    }
    return FALSE;
}

s32 func_020713e8(void *p) { return func_0206d8b8(p); }

void func_020713f0(void *p) { func_0206d940(p, data_020e0514, 0x2c, 0x32); }

void *func_02071408(void *p) {
    func_0206d964(p);
    return p;
}

void *func_02071418(void *p) {
    func_0206d974(p);
    return p;
}

u32 func_02071428(void *self, s32 i) { return data_021cbd18[i & 7]; }

u32 func_02071438(void *self, s32 a, s32 b) { return data_021cbd80[a & 3][b & 7]; }

void func_02071458(void *p) { func_020715e4(p); }

u8 *func_02071640(u8 **self, s32 i) { return *(u8 **)((u8 *)self + ((i & 15) << 2) + 4); }

void *func_020716cc(void) { return data_021cbd38; }

void *func_020718dc(void) { return data_021cc028; }

void *func_02071990(void *p) {
    func_02071e5c(p);
    return p;
}

void *func_020719a0(void *p) {
    func_02071e74(p);
    return p;
}

struct Unk_020719b0_B8 { u8 v[8]; };
struct Unk_020719b0_B16 { u8 v[16]; };
struct Unk_020719b0_B512 { u32 v[128]; };
struct Unk_020719b0 {
    Unk_020719b0_B512 a;
    u16 b;
    Unk_020719b0_B8 c;
    u16 d;
    Unk_020719b0_B8 e;
    s8 f;
    u8 g;
    Unk_020719b0_B16 h;
    u8 i;
};

void func_020719b0(Unk_020719b0 *dst, Unk_020719b0 *src) {
    dst->a = src->a;
    dst->b = src->b;
    dst->c = src->c;
    dst->d = src->d;
    dst->e = src->e;
    dst->f = src->f;
    dst->g = src->g;
    dst->h = src->h;
    dst->i = src->i;
}


void func_02071a4c(void) {}

}

Unk_02071630::Unk_02071630() { func_020715e4(this); }
Unk_02071630::~Unk_02071630() {}

Unk_020716a8::Unk_020716a8() { func_020716b8(); }
Unk_020716a8::~Unk_020716a8() {}

void Unk_020716a8::func_020716b8() {
    unk_00 = 0;
    for (u32 i = 0; i < 16; i++) unk_04[i] = 0;
}

void Unk_020716a8::func_0207164c() {
    if (unk_00 != 0) {
        func_020e8558(unk_00);
        unk_00 = 0;
    }
    func_020716b8();
}

void Unk_020716a8::func_0207166c() {
    if (unk_00 == 0) {
        unk_00 = (u8 *)func_020641d8(data_020e0524);
        if (unk_00 != 0) {
            for (u32 i = 0; i < 16; i++) unk_04[i] = unk_00 + i * 32;
        }
    }
}

Unk_020718a4::Unk_020718a4() { func_020718c0(); }
Unk_020718a4::~Unk_020718a4() {}

namespace Unk_020718c0_Calls {
extern "C" s32 func_02071870(void *p);
}

void Unk_020718a4::func_020718c0() {
    unk_04.func_020716b8();
    func_020715e4(this);
    Unk_020718c0_Calls::func_02071870(this);
}

u8 *Unk_020718a4::func_020716d4(s32 i) { return func_02071640((u8 **)&unk_04, i); }

u32 Unk_020718a4::func_020716e0(s32 i) { return func_02071428(this, i); }

u32 Unk_020718a4::func_020716e8(s32 a, s32 b) { return func_02071438(this, a, b); }

void Unk_020718a4::func_020716f0() {
    unk_04.func_0207164c();
    ::func_02071458(this);
    void *h = data_021f482c;
    if (data_021cbcb8 != 0) {
        func_020e85fc(h, data_021cbcb8);
        data_021cbcb8 = 0;
    }
    if (data_021cbcb0 != 0) {
        func_020e85fc(h, data_021cbcb0);
        data_021cbcb0 = 0;
    }
    if (data_021cbca4 != 0) {
        func_020e85fc(h, data_021cbca4);
        data_021cbca4 = 0;
    }
    if (data_021cbcb4 != 0) {
        func_020e85fc(h, data_021cbcb4);
        data_021cbcb4 = 0;
    }
}

void Unk_020718a4::func_02071770() {
    func_020718c0();
    unk_04.func_0207166c();
    func_02071460();
    void *h = data_021f482c;
    u8 *a, *b, *c, *d;
    u32 i, j;
    data_021cbcb8 = (u8 *)func_020e8608(h, 0x1620);
    b = (u8 *)func_020e8608(h, 0x1c0);
    data_021cbcb0 = b;
    a = data_021cbcb8;
    for (i = 0; i < 8; i++) {
        if (a != 0) func_0203c928(a);
        if (b != 0) func_02056fac(b);
        a += 0x2c4;
        b += 0x38;
    }
    data_021cbca4 = (u8 *)func_020e8608(h, 0x1620);
    d = (u8 *)func_020e8608(h, 0x1c0);
    data_021cbcb4 = d;
    c = data_021cbca4;
    for (j = 0; j < 8; j++) {
        if (c != 0) func_0203c928(c);
        if (d != 0) func_02056fac(d);
        c += 0x2c4;
        d += 0x38;
    }
}

BOOL Unk_020718a4::func_02071834(s32 bit) {
    BOOL r;
    if (((data_021cbc9c >> bit) & 1) == 0) r = FALSE; else r = TRUE;
    data_021cbc9c &= ~(1 << bit);
    return r;
}

void Unk_020718a4::func_0207185c(s32 bit) { data_021cbc9c |= 1 << bit; }


BOOL Unk_020718a4::func_020718e8(s32 n) {
    if ((u32)n < 0x20) {
        void *buf = func_020e8574(0x200);
        if (buf != 0) {
            if (buf != 0) func_0207126c(buf);
            func_02071240(buf, n);
            func_0207122c(buf, func_02071e58(func_020718e4()));
            void *g = func_02071320();
            func_02071328(g, func_02071e04(func_020718e4()), n + 0x12);
            func_02063950((u16 *)func_0209409c(func_02071fa0(func_02071e04(func_020718e4()))), data_020cb6f4);
            func_02094128(func_02071fa0(func_02071e04(func_020718e4())), data_020d03d0);
            func_020e8558(buf);
        }
        return TRUE;
    }
    return FALSE;
}

void Unk_020718a4::func_02071460() {
    Unk_02071460_Buf *a = (Unk_02071460_Buf *)func_020e8574(0x2c4);
    Unk_02071460_Buf *b = (Unk_02071460_Buf *)func_020e8574(0x2c4);
    if (a != 0) {
        if (b != 0) {
            u8 i, j;
            u32 k1, k2;
            u16 v;
            s32 t;
            void *e;
            u32 *row;
            u8 *src, *p;
            u16 *q, *sp;
            if (a != 0) func_0203c928(a);
            if (b != 0) func_0203c928(b);
            v = 0x11a8;
            func_0203c764(a, &v, 0);
            i = 0;
        loop1:
            {
                j = 0;
                row = (u32 *)data_021cbd80 + i * 8;
            loop0:
                e = func_02071c88(func_020986d4(func_02097868(((Unk_02071460_Tbl *)(u32)&data_021d7350)->t, i)), j);
                *b = *a;
                p = (u8 *)func_0203c6e4(b);
                src = (u8 *)func_02071e58(e);
                for (k1 = 0; k1 < 0x200; k1++) *p++ = *src++;
                q = (u16 *)func_0203c6d0(b);
                sp = (u16 *)func_02072040(func_02071e04(e));
                for (k2 = 0; k2 < 0x10; k2++) *q++ = *sp++;
                if (func_02055724(func_0203c6c8(b), 0)) {
                    row[j] = (u32)func_02055820(func_0203c6c8(b), 0x4e554c4c);
                }
                j++;
                if (j < 8) goto loop0;
            }
            i++;
            if (i < 4) goto loop1;
            t = func_020b50e8();
            if (t == 10) {
                s32 o = (t == 10) ? 0xfafc : 0xfafc;
                for (j = 0; j < 8; j++) {
                    func_0203c6f8(b, func_02071b00((u8 *)&data_021d7350 + o, j));
                    if (func_02055724(func_0203c6c8(b), 0)) {
                        data_021cbd18[j] = (u32)func_02055820(func_0203c6c8(b), 0x4e554c4c);
                    }
                }
            }
            func_020e8558(a);
            func_020e8558(b);
        }
    }
}

extern "C" {
void func_020715e4(void *p) {
    u8 i, j;
    for (i = 0; i < 4; i++)
        for (j = 0; j < 8; j++) data_021cbd80[i][j] = 0;
    for (j = 0; j < 8; j++) data_021cbd18[j] = 0;
}

}

extern "C" void func_02071870(void *p) {
    u32 i;
    for (i = 0; i < 4; i++) data_021cbcac[i] = 0;
    data_021cbc9c = 0;
}

void *Unk_020718a4::func_020718e4() { return this; }
