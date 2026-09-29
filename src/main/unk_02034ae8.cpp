#include "types.h"

class Unk_02034ae8;

class Unk_02036bf8 {
public:
    s32 unk_00;
    u16 unk_04;
    u8 pad_06[2];
    s32 unk_08;
    s32 unk_0c;
    u8 unk_10;
    u8 unk_11;
    u8 pad_12[6];
    s32 unk_18;
    Unk_02036bf8();
    void func_02036bf8();
    Unk_02036bf8(s32 a, s32 b, s32 c, s32 d, s32 e);
    ~Unk_02036bf8();
};

class Unk_02035c5c {
public:
    u8 pad[0x88];
    Unk_02035c5c(Unk_02034ae8 *o);
    ~Unk_02035c5c();
    void func_02035c34();
    void func_02035c38();
};
class Unk_02036b9c {
public:
    u8 pad[0x18];
    Unk_02036b9c();
    ~Unk_02036b9c();
    void func_02036b84();
    void func_02036b88();
};
class Unk_0203611c {
public:
    u8 pad[0x3c];
    Unk_0203611c(Unk_02034ae8 *o);
    ~Unk_0203611c();
    void func_020360ac();
    void func_020360cc();
};
class Unk_02035fb0 {
public:
    u8 pad[0x14];
    Unk_02035fb0(Unk_02034ae8 *o);
    ~Unk_02035fb0();
    void func_02035f74();
    void func_02035f7c();
};
class Unk_02035740 {
public:
    u8 pad[0x1c];
    Unk_02035740(Unk_02034ae8 *o);
    ~Unk_02035740();
    void func_0203570c();
};

class Unk_020d8e14 {
public:
    virtual ~Unk_020d8e14();
    u32 unk_04;
    u8 unk_08;
    u8 unk_09;
    u8 unk_0a;
    u8 unk_0b;
    s32 unk_0c;
    s32 unk_10;
    Unk_020d8e14(Unk_02034ae8 *o);
    void func_0203550c();
    void func_02035514();
    void func_02035284();
    BOOL func_02035328();
    BOOL func_02035338();
    void func_02035354();
    void func_0203535c(s32 i);
    void func_02035368(s32 a, s32 b);
    void func_020353b0(s32 a, s32 b);
};

class Unk_020d8df4 {
public:
    virtual ~Unk_020d8df4();
    Unk_02034ae8 *unk_04;
    u16 unk_08;
    u8 unk_0a;
    Unk_020d8df4(Unk_02034ae8 *o);
    void func_0203517c();
    void func_020351b0();
    void func_020351b8();
    void func_020351bc();
    void func_02035200();
    void func_02035214();
};

class Unk_020d8e54 {
public:
    virtual ~Unk_020d8e54();
    Unk_020d8e54();
};

class Unk_02034ae8 {
public:
    Unk_02036bf8 unk_000[16];
    s32 unk_1c0;
    Unk_02035c5c unk_1c4;
    Unk_02036b9c unk_24c;
    Unk_0203611c unk_264;
    Unk_02035fb0 unk_2a0;
    Unk_02035740 unk_2b4;
    Unk_020d8e14 unk_2d0;
    Unk_020d8df4 unk_2e4;
    Unk_020d8e54 unk_2f0;
    u8 unk_2f4;
    Unk_02034ae8();
    ~Unk_02034ae8();
    void func_02034ae8();
    void func_02034b50();
};

extern Unk_02034ae8 *data_021c1b3c;
extern u8 data_020e416c;
extern u8 data_020c8ae4[];

extern "C" {
s32 func_02034690(Unk_02034ae8 *o);
void func_02034894(Unk_02034ae8 *o, s32 a, s32 b);
void func_020348bc(Unk_02034ae8 *o, s32 a);
void func_020348e4(Unk_02034ae8 *o, Unk_02036bf8 *e);
s32 func_020b8fbc(void);
void func_020b8fc8(s32 *a, s32 *b);
s32 func_020b50e8(void);
s32 func_020b50dc(void);
s32 func_020b5184(void);
s32 func_020b5164(void);
s32 func_020b4934(void);
s32 func_020b49a8(void);
s32 func_02003bcc(s32 a);
void func_02003bdc(s32 a);
void func_02003bec(s32 a);
void func_020947c0(void *p, s32 n);
s32 func_0204b2d4(void *p);
s32 func_0204b25c(void *p);
void func_02034d70(s32 a);
void func_02034d84(s32 a);
void func_02034dd0(s32 a, s32 b, s32 c);
void func_02034e10(s32 a, s32 b, s32 c, s32 d);
void func_02034e48(s32 a);
void func_02034e9c(void);
struct Unk_020353b0_Rec { s32 unk_00; u16 unk_04; };
Unk_020353b0_Rec *func_02034910(void);
}

Unk_02034ae8::Unk_02034ae8() : unk_1c0(0), unk_1c4(this), unk_264(this), unk_2a0(this), unk_2b4(this), unk_2d0(this), unk_2e4(this) {
    unk_2f4 = 0;
}
Unk_02034ae8::~Unk_02034ae8() {}

void Unk_02034ae8::func_02034ae8() {
    unk_2e4.func_020351b0();
    unk_2d0.func_0203550c();
    unk_2b4.func_0203570c();
    unk_2a0.func_02035f74();
    unk_264.func_020360ac();
    unk_24c.func_02036b84();
    unk_1c4.func_02035c34();
    data_021c1b3c = 0;
}

void Unk_02034ae8::func_02034b50() {
    Unk_02036bf8 *p, *end;
    data_021c1b3c = this;
    end = (Unk_02036bf8 *)&unk_1c0;
    for (p = unk_000; p < end; p++) {
        p->func_02036bf8();
    }
    unk_1c0 = 0;
    unk_1c4.func_02035c38();
    unk_24c.func_02036b88();
    unk_264.func_020360cc();
    unk_2a0.func_02035f7c();
    unk_2b4.func_0203570c();
    unk_2d0.func_02035514();
    unk_2e4.func_020351b8();
    unk_2f4 = 0;
}

extern "C" {
void func_02034d04(void) { data_021c1b3c->unk_2f4 = 1; }
void func_02034d18(void) { data_021c1b3c->unk_2f4 = 0; }
u16 func_02034d2c(void) {
    s32 i = func_02034690(data_021c1b3c);
    u16 r = 0xffff;
    if (i >= 0) r = data_021c1b3c->unk_000[i].unk_04;
    return r;
}
void func_02034d5c(s32 a) { func_02034894(data_021c1b3c, a, 1); }
void func_02034d70(s32 a) { func_020348bc(data_021c1b3c, a); }
void func_02034d84(s32 a) { func_02034894(data_021c1b3c, a, 0); }
void func_02034d98(s32 a, s32 b) {
    Unk_02036bf8 e(a, b, 0x7f, 0, 0);
    e.unk_11 = 1;
    func_020348e4(data_021c1b3c, &e);
}

void func_02034dd0(s32 a, s32 b, s32 c) {
    Unk_02036bf8 e(a, 0xffff, 0, b, 0);
    if (c > 0) e.unk_18 = c;
    func_020348e4(data_021c1b3c, &e);
}
void func_02034e10(s32 a, s32 b, s32 c, s32 d) {
    Unk_02036bf8 e(a, b, c, 0, d);
    func_020348e4(data_021c1b3c, &e);
}
void func_02034e48(s32 x) {
    s32 r = func_020b8fbc();
    s32 a, b;
    BOOL c, d, e;
    func_020b8fc8(&a, &b);
    if (b >= 3) c = TRUE; else c = FALSE;
    d = FALSE;
    if (c && r == 1) d = TRUE;
    e = FALSE;
    if (c && r == 2) e = TRUE;
    s32 v;
    if (d) v = 0xc;
    else if (e) v = 0xd;
    else v = 0xb;
    func_02003bcc(v);
}
}

extern "C" {
void func_02034e9c(void) {
    s32 r = func_020b50e8();
    s32 a22 = (r == 0x22) ? 1 : 0;
    s32 a23 = (r == 0x23) ? 1 : 0;
    s32 a24 = (r == 0x24) ? 1 : 0;
    s32 a25 = (r == 0x25) ? 1 : 0;
    s32 a26 = (r == 0x26) ? 1 : 0;
    s32 a27 = (r == 0x27) ? 1 : 0;
    s32 a28 = (r == 0x28) ? 1 : 0;
    s32 a29 = (r == 0x29) ? 1 : 0;
    s32 v = 0;
    if (r == 0x20) v = 6;
    else if (a23 || a24 || a27 || a28) v = 0xb;
    else if (a29) v = 0xc;
    else if (a25 || a26) v = 0xd;
    else if (a22) v = 0xe;
    if (v) func_02003bec(v);
}
void func_02034f4c(s32 a) {
    if (func_020b5184() || func_020b5164()) func_02034e48(a);
}
void func_02034f6c(s32 a, s32 b) {
    if (b == 0x62) func_02034e9c();
}
void func_02034f80(void) {
    if (func_020b50e8() == 0x22) func_02003bdc(5);
}
void func_02034f98(void) {
    if (func_020b50e8() == 0x22) func_02003bec(5);
}
void func_02034fb0(void) {
    s32 t = func_020b50dc();
    s32 r = func_020b50e8();
    s32 e20 = (t == 0x20) ? 1 : 0;
    s32 a22 = (t == 0x22) ? 1 : 0;
    s32 a23 = (t == 0x23) ? 1 : 0;
    s32 a25 = (t == 0x25) ? 1 : 0;
    s32 a27 = (t == 0x27) ? 1 : 0;
    s32 a29 = (t == 0x29) ? 1 : 0;
    s32 b22 = (r == 0x22) ? 1 : 0;
    s32 b25 = (r == 0x25) ? 1 : 0;
    s32 b29 = (r == 0x29) ? 1 : 0;
    s32 v = 0;
    if (r == 0x20 && (a22 || a23 || a25 || a27 || a29)) v = 1;
    else if (b29 && e20) v = 2;
    else if (b25 && e20) v = 3;
    else if (b22 && e20) v = 4;
    if (v) func_02003bdc(v);
}
void func_0203507c(void) {
    s32 r = func_020b50e8();
    s32 s;
    func_020b4934();
    s = func_020b49a8();
    s32 a22 = (r == 0x22) ? 1 : 0;
    s32 a25 = (r == 0x25) ? 1 : 0;
    s32 a29 = (r == 0x29) ? 1 : 0;
    s32 e20 = (s == 0x20) ? 1 : 0;
    s32 b22 = (s == 0x22) ? 1 : 0;
    s32 b23 = (s == 0x23) ? 1 : 0;
    s32 b25 = (s == 0x25) ? 1 : 0;
    s32 b27 = (s == 0x27) ? 1 : 0;
    s32 b29 = (s == 0x29) ? 1 : 0;
    s32 v = 0;
    if (r == 0x20 && (b22 || b23 || b25 || b27 || b29)) v = 1;
    else if (a29 && e20) v = 2;
    else if (a25 && e20) v = 3;
    else if (a22 && e20) v = 4;
    if (v) func_02003bec(v);
}
Unk_020d8e14 *func_02035234(void);
void func_020351ac(void) {}
}

Unk_020d8df4::~Unk_020d8df4() {}
Unk_020d8df4::Unk_020d8df4(Unk_02034ae8 *o) {
    unk_04 = o;
    unk_08 = 0xffff;
    unk_0a = 0;
}
void Unk_020d8df4::func_0203517c() {
    if (unk_08 != 0xffff) {
        func_02034d84(unk_08);
        unk_08 = 0xffff;
    }
    if (unk_0a) {
        func_02034d70(10);
        unk_0a = 0;
    }
}
void Unk_020d8df4::func_020351b0() { func_0203517c(); }
void Unk_020d8df4::func_020351b8() {}
void Unk_020d8df4::func_020351bc() {
    if (unk_08 != 0xffff) {
        func_02034dd0(10, 5, 5);
        func_02034d84(unk_08);
        unk_08 = 0xffff;
    }
    if (unk_0a) {
        func_02034d70(10);
        func_02034dd0(10, 5, 5);
        unk_0a = 0;
    }
}
void Unk_020d8df4::func_02035200() {
    unk_0a = 1;
    func_02034dd0(10, 15, 0);
}
void Unk_020d8df4::func_02035214() {
    unk_08 = 0x41;
    func_02034e10(0xb, 0x41, 0x7f, 1);
    func_02035234()->func_02035354();
}

Unk_020d8e54::~Unk_020d8e54() {}
Unk_020d8e54::Unk_020d8e54() {}

extern "C" Unk_020d8e14 *func_02035234(void) { return &data_021c1b3c->unk_2d0; }

static inline BOOL IsZero(u8 v) { return v == 0 ? TRUE : FALSE; }
void Unk_020d8e14::func_02035284() {
    if (unk_0c > 0) {
        unk_0c--;
        if (unk_0c <= 0) {
            s32 v = 1;
            if (IsZero(data_020e416c) && func_020b5184()) {
                u16 buf[2];
                BOOL ok;
                func_020947c0(buf, 4);
                if (func_0204b2d4(buf)) {
                    buf[1] = 0xfff1;
                    if (func_0204b25c(buf) == func_0204b25c(&buf[1])) ok = TRUE;
                    else ok = FALSE;
                } else {
                    if (buf[0] == 0xfff1) ok = TRUE;
                    else ok = FALSE;
                }
                if (!ok) v = 20;
            }
            unk_10 = v;
        }
    }
    if (unk_10 > 0) {
        unk_10--;
        if (unk_10 <= 0) func_02034d70(7);
    }
}
BOOL Unk_020d8e14::func_02035328() {
    if (unk_0b) return TRUE;
    return FALSE;
}
BOOL Unk_020d8e14::func_02035338() {
    if (unk_08 || unk_09 || unk_0a) return TRUE;
    return FALSE;
}
void Unk_020d8e14::func_02035354() { unk_0a = 1; }
void Unk_020d8e14::func_0203535c(s32 i) { unk_0c = data_020c8ae4[i]; }
void Unk_020d8e14::func_02035368(s32 a, s32 b) {
    if (unk_0b == 2) {
        unk_0b = 3;
    } else {
        BOOL c = (a == 0) ? TRUE : FALSE;
        BOOL d = (a == 1) ? TRUE : FALSE;
        BOOL e = FALSE;
        if (a == 2 && b == 6) e = TRUE;
        if (c || d || !e) unk_08 = 1;
    }
}
void Unk_020d8e14::func_020353b0(s32 a, s32 b) {
    s32 res = 0;
    s32 f = 0;
    if (func_020b5184()) {
        s32 a0 = (a == 0) ? 1 : 0;
        s32 a1 = (a == 1) ? 1 : 0;
        s32 a2 = (a == 2) ? 1 : 0;
        s32 b9 = (b == 9) ? 1 : 0;
        s32 b6 = (b == 6) ? 1 : 0;
        Unk_020353b0_Rec *rec = func_02034910();
        u32 x;
        s32 y;
        if (rec) x = rec->unk_04; else x = 0xffff;
        if (rec) y = rec->unk_00; else y = 0x25;
        s32 ff = (x == 0xffff) ? 1 : 0;
        s32 y24 = (y == 0x24) ? 1 : 0;
        s32 y1a = (y == 0x1a) ? 1 : 0;
        if (a1) {
            if (b6) res = 1;
            else if (b9) {
                if (y1a || ff) res = 1;
                else if (y24) {
                    if ((u16)(x + 0xffd4) <= 1) res = 1;
                }
            } else {
                if (y1a || ff) res = 1;
            }
        } else if (a2) {
            if (b6) {
                res = 1;
                f = 1;
            } else if (b9) {
            } else if (y1a || ff) res = 1;
        } else if (a0) {
            if (y1a || ff) res = 1;
        }
    } else {
        res = 1;
        f = 1;
    }
    if (!res) unk_08 = 1;
    if (f) unk_0b = 1;
}
