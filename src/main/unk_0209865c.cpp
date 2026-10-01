#include "types.h"

extern "C" {
s32 func_02097ff4(void *, u32);
s32 func_0209801c(void *, u32);
void func_02098044(void *, u32);
void func_020982e8(void *);
void func_0209832c(void *);
s32 func_02098e30(void *);
void func_020030b4_dummy();
s32 func_02094048(void *);
void func_020941b4(void *, u32, u32, u32, u32);
s32 func_02094218(void *);
void func_02094294(void *);
void func_020942c8(void *);
void func_020942f8(void *);
void func_02097fa4(void *);
void func_02097ac4(void *, u32, u32);
void func_02071d08(void *, void *);
void func_020acf58(void *);
void func_0203c638(void *);
void func_02096e28(void *);
void func_02096e00(void *);
void func_02076c9c(void *);
void func_02076db8(void *);
void func_02087c80(void *);
void func_020877cc(void *);
void func_02097418(void *);
void func_0203f0ec(void *);
s32 func_0209cf88();
void func_02115fb4(void *, s32, u32);
void func_0203c640(void *);
void func_02099dc8(void *);
void func_020acf60(void *);
void func_02098e30_dummy();
void func_02096e20(void *);
void func_020874c8(void *);
void func_020877d8(void *);
void func_02087c84(void *);
void func_020acf68(void *);
void func_02087880(void *);
void func_02097420(void *);
void func_02076dd8(void *);
void func_02076cc0(void *);
void func_02099dfc(void *);
void func_02096e58(void *);
void func_0203ca88(void *);
void func_0203c6a0(void *);
void func_0203c6a4(void *);
void func_0203ca8c(void *);
void func_02096e68(void *);
void func_02099e38(void *);
void func_02076cd4(void *);
void func_02076df4(void *);
void func_02097424(void *);
void func_02087884(void *);
void func_020acf78(void *);
void func_02087c88(void *);
void func_020877dc(void *);
void func_020874d8(void *);
void func_02096e24(void *);
s32 func_02099c68(void *, void *, void *);
u16 *func_02097f6c(void *, u32);
s32 func_02097e98(void *, s32);
s32 func_0204b2d4(void *);
s32 func_0204b25c(void *);
void func_02098ff4(void *);
BOOL func_020030b4(void *);
void func_020030d8(void *, void *);
void func_020030e8(void *);
void func_02003100(void *);
void func_02003130(void *);
void func_02063990(void *, void *);
BOOL func_02063954(void *);
void func_020639a0(void *);
void func_020639b8(void *);
void func_020639bc(void *);
s32 func_02063b8c(s32);
void func_02062f94(u16 *, void *, u32, u32, u32, u32, u32);
void func_02063388(void *);
extern u32 data_020d0538[];
void func_02098e6c(void *);
void func_02098e54(void *);
}

class Unk_0209865c;
extern "C" Unk_0209865c *func_0209750c();

class Unk_02071c5c {
public:
    Unk_02071c5c();
    ~Unk_02071c5c();
    u8 unk_00[0x1148];
};

class Unk_0209865c_Elem1 {
public:
    Unk_0209865c_Elem1();
    ~Unk_0209865c_Elem1();
    u8 unk_00[0xf4];
};

class Unk_0209865c_Elem2 {
public:
    Unk_0209865c_Elem2();
    ~Unk_0209865c_Elem2();
    u16 unk_00;
};

struct Unk_0209865c_Nib {
    u8 lo : 4;
    u8 hi : 4;
};

struct Unk_0209865c_Tri {
    u8 lo : 3;
    u8 mid : 3;
    u8 hi : 2;
};

struct Unk_0209865c_Bits {
    u16 a : 7;
    u16 b : 4;
    u16 c : 5;
};

struct Unk_0209865c_Grp {
    Unk_0209865c_Elem1 a[10];
    u8 gap[0x52];
    Unk_0209865c_Elem2 b[15];
};

class Unk_0209865c : public Unk_02071c5c {
public:
    Unk_0209865c();
    ~Unk_0209865c();

    /* 0x1148 */ Unk_0209865c_Grp unk_1148;
    /* 0x1b40 */ u8 unk_1b40[8];
    /* 0x1b48 */ u8 unk_1b48[0x123];
    /* 0x1c6b */ u8 unk_1c6b[1];
    /* 0x1c6c */ u8 unk_1c6c[0xf8];
    /* 0x1d64 */ u8 unk_1d64[0xac];
    /* 0x1e10 */ u8 unk_1e10[0x50];
    /* 0x1e60 */ u8 unk_1e60[0x384];
    /* 0x21e4 */ u8 unk_21e4[8];
    /* 0x21ec */ u8 unk_21ec[4];
    /* 0x21f0 */ u8 unk_21f0[0x18];
    /* 0x2208 */ u8 unk_2208[2];
    /* 0x220a */ u16 unk_220a;
    /* 0x220c */ u16 unk_220c;
    /* 0x220e */ u16 unk_220e;
    /* 0x2210 */ u16 unk_2210;
    /* 0x2212 */ u16 unk_2212;
    /* 0x2214 */ u16 unk_2214;
    /* 0x2216 */ s16 unk_2216;
    /* 0x2218 */ u8 unk_2218[2];
    /* 0x221a */ u8 unk_221a[0x11];
    /* 0x222b */ u8 unk_222b[5];
    /* 0x2230 */ u8 unk_2230[0xc];
    /* 0x223c */ Unk_0209865c_Nib unk_223c;
    /* 0x223d */ Unk_0209865c_Tri unk_223d;
    /* 0x223e */ u8 unk_223e[0x15];
    /* 0x2253 */ u8 unk_2253;
    /* 0x2254 */ u8 unk_2254[8];
    /* 0x225c */ u8 unk_225c[0x1a];
    /* 0x2276 */ u8 unk_2276[0x16];

    void *func_0209865c();
    void *func_02098668();
    void *func_02098674();
    void *func_02098680();
    void *func_0209868c();
    void *func_02098698();
    void *func_020986a4();
    void *func_020986b0();
    void *func_020986bc();
    void *func_020986c8();
    void func_020986d4();
    void func_020986d8(u16 *v);
    void *func_020986e4();
    void func_020986f0(u16 *v);
    void *func_020986fc();
    void func_02098708(u16 *v);
    void *func_02098714();
    void func_02098720(u16 *v);
    void *func_0209872c();
    void func_02098738(u16 *v);
    void *func_02098744();
    void *func_02098750();
    void func_02098784(u8 v);
    u32 func_020987a0();
    void func_020987b0(Unk_0209865c_Bits v);
    s32 func_020987c4();
    void func_020987d0(u8 v);
    u32 func_020987ec();
    void func_020987fc(u8 v);
    u32 func_02098814();
    void func_02098824(u8 v);
    u32 func_02098840();
    void func_02098850(u8 v);
    u32 func_02098868();
    void func_02098878();
    void func_02098898(u32 p1, u32 p2, u32 p3, u32 s0, u8 s1, u8 s2, u8 s3, u8 s4, u8 s5, u32 s6, u16 *s7);
    void func_02098a48();
    void func_02098a58();
    void func_02098ae0();
    void *func_0209888c();
};

void Unk_0209865c::func_020986d4() {}

void *Unk_0209865c::func_0209865c() { return &unk_1d64; }
void *Unk_0209865c::func_02098668() { return &unk_1c6b; }
void *Unk_0209865c::func_02098674() { return &unk_1e60; }
void *Unk_0209865c::func_02098680() { return &unk_1e10; }
void *Unk_0209865c::func_0209868c() { return &unk_221a; }
void *Unk_0209865c::func_02098698() { return &unk_21f0; }
void *Unk_0209865c::func_020986a4() { return &unk_2230; }
void *Unk_0209865c::func_020986b0() { return &unk_222b; }
void *Unk_0209865c::func_020986bc() { return &unk_2208; }
void *Unk_0209865c::func_020986c8() { return &unk_1b48; }
void Unk_0209865c::func_020986d8(u16 *v) { unk_2212 = *v; }
void *Unk_0209865c::func_020986e4() { return &unk_2212; }
void Unk_0209865c::func_020986f0(u16 *v) { unk_2210 = *v; }
void *Unk_0209865c::func_020986fc() { return &unk_2210; }
void Unk_0209865c::func_02098708(u16 *v) { unk_220e = *v; }
void *Unk_0209865c::func_02098714() { return &unk_220e; }
void Unk_0209865c::func_02098720(u16 *v) { unk_220c = *v; }
void *Unk_0209865c::func_0209872c() { return &unk_220c; }
void Unk_0209865c::func_02098738(u16 *v) { unk_220a = *v; }
void *Unk_0209865c::func_02098744() { return &unk_220a; }
void *Unk_0209865c::func_02098750() { return &unk_1148; }
void Unk_0209865c::func_02098784(u8 v) { unk_223d.hi = v; }
u32 Unk_0209865c::func_020987a0() { return unk_223d.hi; }
void Unk_0209865c::func_020987b0(Unk_0209865c_Bits v) { unk_2216 = *(u16 *)&v; }
s32 Unk_0209865c::func_020987c4() { return unk_2216; }
void Unk_0209865c::func_020987d0(u8 v) { unk_223d.mid = v; }
u32 Unk_0209865c::func_020987ec() { return unk_223d.mid; }
void Unk_0209865c::func_020987fc(u8 v) { unk_223d.lo = v; }
u32 Unk_0209865c::func_02098814() { return unk_223d.lo; }
void Unk_0209865c::func_02098824(u8 v) { unk_223c.hi = v; }
u32 Unk_0209865c::func_02098840() { return unk_223c.hi; }
void Unk_0209865c::func_02098850(u8 v) { unk_223c.lo = v; }
u32 Unk_0209865c::func_02098868() { return unk_223c.lo; }
void *Unk_0209865c::func_0209888c() { return &unk_2276; }

extern "C" void func_0209875c(void *p, u32 flag) {
    if (flag) {
        func_0209801c(p, 0);
    } else {
        func_02097ff4(p, 0);
    }
}

extern "C" void func_02098778(void *p) { func_02098044(p, 0); }

void Unk_0209865c::func_02098878() { func_02094048(func_0209888c()); }

void Unk_0209865c::func_02098898(u32 p1, u32 p2, u32 p3, u32 s0, u8 s1, u8 s2, u8 s3, u8 s4, u8 s5, u32 s6, u16 *s7) {
    Unk_0209865c_Bits bits;
    func_020941b4(&unk_2276, p1, p2, p3, s0);
    func_02098850(s1);
    func_02098824(s2);
    func_020987fc(s3);
    func_020987d0(s4);
    func_02098784(0);
    func_0209875c(this, s5);
    func_02097fa4(&unk_1148);
    func_02097ac4(&unk_1148, s6, 1);
    unk_220a = *s7;
    func_02071d08(this, &unk_2276);
    func_020acf58(&unk_2208);
    func_0203c638(&unk_1b48);
    func_02096e28(&unk_1c6c);
    func_02096e00(&unk_223e);
    func_02076c9c(&unk_1e10);
    func_02076db8(&unk_1e60);
    unk_2212 = 0x3884;
    bits.a = 0;
    bits.b = 1;
    bits.c = 1;
    func_020987b0(bits);
    func_020982e8(this);
    unk_220c = 0x11a8;
    func_02087c80(&unk_221a);
    unk_2210 = 0xfff1;
    unk_220e = 0xfff1;
    unk_2214 = 0x11fa;
    func_020877cc(&unk_222b);
    func_02097418(&unk_21e4);
    func_0203f0ec(&unk_21ec);
    func_0209832c(this);
    func_0209cf88();
    func_02115fb4(&unk_2254, 0xff, 8);
}

void Unk_0209865c::func_02098a48() { func_02094218(&unk_2276); }

void Unk_0209865c::func_02098a58() {
    func_02098ae0();
    func_02094294(&unk_2276);
    func_02097fa4(&unk_1148);
    func_0203c640(&unk_1b48);
    func_02099dc8(&unk_1d64);
    unk_220a = 0xfff1;
    func_020acf60(&unk_2208);
    unk_2212 = 0xfff1;
    unk_2253 = 0xff;
    func_02115fb4(&unk_2254, 0xff, 8);
    func_02098e30(&unk_225c);
}

void Unk_0209865c::func_02098ae0() { func_02115fb4(this, 0, 0x228c); }

Unk_0209865c::~Unk_0209865c() {
    func_020942c8(&unk_2276);
    func_02098e54(&unk_225c);
    func_02096e20(&unk_223e);
    func_020874c8(&unk_2230);
    func_020877d8(&unk_222b);
    func_02087c84(&unk_221a);
    func_020acf68(&unk_2208);
    func_02087880(&unk_21f0);
    func_02097420(&unk_21e4);
    func_02076dd8(&unk_1e60);
    func_02076cc0(&unk_1e10);
    func_02099dfc(&unk_1d64);
    func_02096e58(&unk_1c6c);
    func_0203ca88(&unk_1c6b);
    func_0203c6a0(&unk_1b48);
}

Unk_0209865c::Unk_0209865c() {
    func_0203c6a4(&unk_1b48);
    func_0203ca8c(&unk_1c6b);
    func_02096e68(&unk_1c6c);
    func_02099e38(&unk_1d64);
    func_02076cd4(&unk_1e10);
    func_02076df4(&unk_1e60);
    func_02097424(&unk_21e4);
    func_02087884(&unk_21f0);
    func_020acf78(&unk_2208);
    unk_220a = 0xfff1;
    unk_220c = 0xfff1;
    unk_220e = 0xfff1;
    unk_2210 = 0xfff1;
    unk_2212 = 0xfff1;
    unk_2214 = 0xfff1;
    func_02087c88(&unk_221a);
    func_020877dc(&unk_222b);
    func_020874d8(&unk_2230);
    func_02096e24(&unk_223e);
    func_02098e6c(&unk_225c);
    func_020942f8(&unk_2276);
}

struct Unk_02098d20_Tmp {
    u32 unk_00;
    u32 unk_04;
    Unk_02098d20_Tmp() {}
    ~Unk_02098d20_Tmp();
    void func_0206338c(u32 a, s32 b);
};

class Unk_02098d20 {
public:
    Unk_02098d20();
    ~Unk_02098d20();
    u8 unk_00[0xa];
    u8 unk_0a[0xc];
    u16 unk_16;
    s8 unk_18;

    BOOL func_02098d20(void *a1, s32 a2, void *a3);
    void func_02098de4(void *a1, s32 a2, void *a3, u16 *p);
    BOOL func_02098e0c();
    void func_02098e30();
};

BOOL Unk_02098d20::func_02098d20(void *a1, s32 a2, void *a3) {
    if (func_020030b4(a1) && func_02063954(a3)) {
        u16 local = 0xfff1;
        u16 out;
        if (func_02063b8c(4) == 0) {
            Unk_02098d20_Tmp t1;
            t1.func_0206338c(data_020d0538[func_02063b8c(3)], 0);
            Unk_02098d20_Tmp t2(t1);
            func_02062f94(&out, &t2, 0, 0, 1, 1, 0);
            local = out;
        }
        if (func_02098e0c()) {
            if (a2 >= unk_18) {
                func_02098de4(a1, a2, a3, &local);
                return TRUE;
            }
        } else {
            func_02098de4(a1, a2, a3, &local);
            return TRUE;
        }
    }
    return FALSE;
}

void Unk_02098d20::func_02098de4(void *a1, s32 a2, void *a3, u16 *p) {
    func_02063990(this, a3);
    func_020030d8(&unk_0a, a1);
    unk_16 = *p;
    unk_18 = a2;
}

BOOL Unk_02098d20::func_02098e0c() {
    if (func_02063954(this) && func_020030b4(&unk_0a)) return TRUE;
    return FALSE;
}

void Unk_02098d20::func_02098e30() {
    func_020639a0(this);
    func_020030e8(&unk_0a);
    unk_16 = 0xfff1;
    unk_18 = -0x80;
}

Unk_02098d20::~Unk_02098d20() {
    func_02003100(&unk_0a);
    func_020639b8(this);
}

Unk_02098d20::Unk_02098d20() {
    func_020639bc(this);
    func_02003130(&unk_0a);
    unk_16 = 0xfff1;
}

extern "C" void func_02098e8c() {}

extern "C" s32 func_02098e90(void *a, void *b) {
    Unk_0209865c *o = func_0209750c();
    func_02099c68(o->func_0209865c(), a, b);
}

extern "C" s32 func_02098eb0(u16 *a) {
    Unk_0209865c *o = func_0209750c();
    u16 *p = func_02097f6c(o->func_02098750(), 0);
    s32 i;
    for (i = 0; i < 15; i++) {
        if (func_02097e98(o->func_02098750(), i)) {
            s32 off = i << 1;
            u16 *e = (u16 *)((u32)p + off);
            BOOL r;
            if (func_0204b2d4(e)) {
                r = (func_0204b25c(e) == func_0204b25c(a)) ? TRUE : FALSE;
            } else {
                u32 x = *(u16 *)((u8 *)p + off);
                u32 y = *a;
                r = (x == y) ? TRUE : FALSE;
            }
            if (r) return i;
        }
    }
    return -1;
}

struct Unk_02098f30_Out {
    u16 flags;
    u8 count;
};

extern "C" s32 func_02098f30(Unk_02098f30_Out *out, s32 (*fn)(u16 *)) {
    Unk_0209865c *o = func_0209750c();
    func_02098ff4(out);
    u16 *p = func_02097f6c(o->func_02098750(), 0);
    s32 i;
    for (i = 0; i < 15; i++) {
        if (func_02097e98(o->func_02098750(), i)) {
            if (fn(p + i)) {
                out->flags |= 1 << i;
                out->count++;
            }
        }
    }
    return out->count;
}
