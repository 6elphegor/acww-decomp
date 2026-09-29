#include "types.h"
#include "text/Unk_02050288.h"

extern "C" {
void func_02115fb4(void *, s32, u32);
u8 *func_0205021c(void);
u8 *func_02050224(void);
u8 *func_0205022c(void);
u8 *func_02050234(void);
u8 *func_0205023c(void);
u32 func_020a6c84(u32 a, s32 b, s32 c);
BOOL func_0206774c(void);
}

extern "C" Unk_02050288 *func_020a8054(u32 a, s32 b, s32 c);
extern "C" void func_020a7fd8(Unk_02050288 *obj);

// polymorphic object seen through the owner's member objects
struct Unk_0206b950_Obj {
    virtual ~Unk_0206b950_Obj();
    virtual void vfunc_08();
    virtual u8 *vfunc_0c();
};
extern "C" {
Unk_0206b950_Obj *func_020675a8(void *);
Unk_0206b950_Obj *func_020675d8(void *);
Unk_0206b950_Obj *func_0206760c(void *);
Unk_0206b950_Obj *func_02067648(void *);
Unk_0206b950_Obj *func_0206766c(void *);
Unk_0206b950_Obj *func_02067690(void *);
Unk_0206b950_Obj *func_020676b4(void *);
}

class Unk_020ddcf0 {
public:
    Unk_0206b950_Obj *func_02065f10();
};

// library object, 0x34 bytes (polymorphic)
struct Unk_020a71d0 {
    u8 pad[0x34];
};

// big owner object (Unk_02067c70), only the parts used here
class Unk_020668a0 {
public:
    BOOL func_02066d04();
    BOOL func_02066d5c();
    BOOL func_02066db0();
    BOOL func_02066e04();
    BOOL func_02066e50();
    BOOL func_02066ea0();
    BOOL func_02066f2c();
    BOOL func_02066f98();
    BOOL func_02066fe4();
    BOOL func_02067030();
    BOOL func_02067070();
    BOOL func_020670a8();

    u8 pad_0000[0x13b0];
    /* 0x13b0 */ Unk_020ddcf0 *unk_13b0;
    u8 pad_13b4[0xc];
    /* 0x13c0 */ Unk_020a71d0 unk_13c0[11];
    /* 0x15fc */ Unk_020a71d0 unk_15fc[4];
    u8 pad_16cc[0x194];
    /* 0x1860 */ u8 unk_1860[0x20];
    /* 0x1880 */ u8 unk_1880[0x1c];
    /* 0x189c */ u8 unk_189c[0x1c];
    /* 0x18b8 */ u8 unk_18b8[0x1c];
    /* 0x18d4 */ u8 unk_18d4[0x1c];
    /* 0x18f0 */ u8 unk_18f0[0x1c];
    /* 0x190c */ u8 unk_190c[0x1c];
    /* 0x1928 */ u8 unk_1928[0x34];
    /* 0x195c */ u8 unk_195c[0x34];
    /* 0x1990 */ u8 unk_1990[0x1c];
    /* 0x19ac */ u8 unk_19ac[0x24];
    /* 0x19d0 */ u8 unk_19d0[0x24];
};

// Script command token, 0x14 bytes
class Unk_020a72b0 {
public:
    Unk_020a72b0();
    void func_020a72c4(u32 *a, char **b, char **c);

    /* 0x00 */ s32 unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ u32 unk_08;
    /* 0x0c */ char *unk_0c;
    /* 0x10 */ u8 *unk_10;
};

class Unk_020e2b08 {
public:
    Unk_020e2b08();
    virtual ~Unk_020e2b08();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void vfunc_10(u32 c);
    virtual void vfunc_14(u8 *p);

    void func_020a8348(u8 *p);
    void func_020a8400(s32 n);

    /* 0x04 */ u8 *unk_04;
    /* 0x08 */ u8 unk_08[0x1c];
};

class Unk_020e2ac8;

class Unk_020e2a90 : public Unk_02050288 {
public:
    Unk_020e2a90(s32 arg1, s32 arg2, s32 arg3);
    virtual ~Unk_020e2a90();
    virtual void func_08();
    virtual u32 func_0c();
};

class Unk_020e2ac8 : public Unk_020e2b08 {
public:
    Unk_020e2ac8(u8 flag);
    virtual ~Unk_020e2ac8();

    /* 0x24 */ Unk_020e2a90 *unk_24;
    /* 0x28 */ u8 unk_28;
};

struct Unk_0206b7dc_Arg {
    u32 unk_00, unk_04, unk_08;
    s32 unk_0c;
};

class Unk_020ddc64 : public Unk_020e2ac8 {
public:
    Unk_020ddc64(u8 *owner);
    virtual ~Unk_020ddc64();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void vfunc_10(u32 c);
    virtual void vfunc_14(u8 *p);

    s32 func_0206c630(u32 a, BOOL b);
    void func_0206c45c(Unk_0206b7dc_Arg *a);
    void func_0206c4b4();
    void func_0206c4fc(s32 idx);
    void func_0206c534(s32 idx);

    void func_0206b7a4();
    void func_0206b7dc();
    void func_0206b7f0();
    void func_0206b804();
    void func_0206b818();
    void func_0206b82c();
    void func_0206b848();
    void func_0206b864();
    void func_0206b880();
    void func_0206b89c();
    void func_0206b8b8();
    void func_0206b8d4();
    void func_0206b8e8();
    void func_0206b8fc();
    void func_0206b910();
    void func_0206b924();
    void func_0206b938();
    void func_0206b940();
    void func_0206b948();
    void func_0206b950();
    void func_0206b978();
    void func_0206b9a0();
    void func_0206b9c8();
    void func_0206b9f0();
    void func_0206b9fc();
    void func_0206ba08();
    void func_0206ba14();
    void func_0206ba20();
    void func_0206ba2c();
    void func_0206ba38();
    void func_0206ba44();
    void func_0206ba50();
    void func_0206ba5c();
    void func_0206ba68();
    void func_0206ba74();
    void func_0206ba80();
    void func_0206ba8c();
    void func_0206ba98();
    void func_0206baa4();
    void func_0206bacc();
    void func_0206baf4();
    void func_0206bb1c();
    void func_0206bb44();
    void func_0206bb64();
    void func_0206bb84();
    void func_0206bba4();
    void func_0206bbc4();
    void func_0206bbe4();
    void func_0206bc04();
    void func_0206bc24();
    void func_0206bc4c();
    void func_0206bc74();
    void func_0206bc9c();
    void func_0206bcc4();
    void func_0206bcc8();
    void func_0206bd10();
    void func_0206bd28();
    void func_0206bd40();
    void func_0206bd58();
    void func_0206bd70();
    void func_0206bd88();

    /* 0x2c */ Unk_020668a0 *unk_2c;
    /* 0x30 */ Unk_020e2a90 *unk_30;
    /* 0x34 */ Unk_020a72b0 unk_34;
    /* 0x48 */ u8 *unk_48;
    /* 0x4c */ u8 *unk_4c;
    /* 0x50 */ u32 unk_50;
};

struct Unk_02067c70;

// Buffer of queued messages plus up to three text objects
class Unk_0206b754 {
public:
    Unk_0206b754(Unk_02067c70 *o);
    ~Unk_0206b754();
    void func_0206b434();
    void func_0206b4e4();
    void func_0206b518();
    void func_0206b548();
    void func_0206b590(u8 v);
    void func_0206b59c(u32 v);
    void func_0206b5c0(u32 v);
    void func_0206b618(void *m);
    BOOL func_0206b628(s32 c0);
    BOOL func_0206b664(s8 *src, u32 n);
    void func_0206b6b0(u32 v);
    void func_0206b6d0(u32 v);
    void func_0206b72c();

    /* 0x000 */ u8 unk_00[0x400];
    /* 0x400 */ u32 unk_400;
    /* 0x404 */ u8 *unk_404[3];
    /* 0x410 */ u32 unk_410;
    /* 0x414 */ u32 unk_414[3];
    /* 0x420 */ Unk_02050288 *unk_420[3];
    /* 0x42c */ u32 unk_42c[3];
    /* 0x438 */ u8 unk_438[3];
    /* 0x43b */ u8 unk_43b;
    /* 0x43c */ Unk_020ddc64 unk_43c;
};


// ---- Unk_0206b754
void Unk_0206b754::func_0206b4e4() {
    volatile s32 z = 0;
    u32 i;
    for (i = 0; i < 3; i++) {
        Unk_02050288 *p = unk_420[i];
        if (p) {
            p->func_02050c68(z);
            p->unk_10 = 0;
        }
    }
}

void Unk_0206b754::func_0206b518() {
    u32 i;
    for (i = 0; i < 3; i++) {
        if (unk_420[i]) {
            func_020a7fd8(unk_420[i]);
            unk_420[i] = 0;
        }
    }
}

void Unk_0206b754::func_0206b548() {
    u32 i, a;
    for (i = 0, a = 0x11; i < 3; i++, a += 0x28) {
        Unk_02050288 *p = func_020a8054(a, 0x14, 2);
        if (p) {
            unk_420[i] = p;
            p->unk_50 = 2;
            p->unk_39 = 0xe;
            p->func_02050c68(0);
        }
    }
}

void Unk_0206b754::func_0206b590(u8 v) { unk_43b = v; }

void Unk_0206b754::func_0206b59c(u32 v) {
    u32 i;
    for (i = unk_410; i < 3; i++) {
        unk_414[i] = v;
    }
}

void Unk_0206b754::func_0206b5c0(u32 v) {
    if (unk_410 < 3) {
        unk_42c[unk_410] = unk_43c.func_0206c630(v, unk_43b);
        u32 n = unk_410;
        unk_410 = n + 1;
        unk_404[n] = &unk_00[unk_400];
    }
}

struct Unk_0206b618_Msg {
    u8 pad[8];
    s32 unk_08;
    u8 pad2[4];
    s32 unk_10;
};

void Unk_0206b754::func_0206b618(void *m) {
    Unk_0206b618_Msg *q = (Unk_0206b618_Msg *)m;
    func_0206b664((s8 *)q->unk_10, q->unk_08 + 5);
}

BOOL Unk_0206b754::func_0206b628(s32 c0) {
    s8 c = (s8)c0;
    u32 pos = unk_400;
    BOOL ok;
    if (0x400 - pos > 1) {
        ok = TRUE;
    } else {
        ok = FALSE;
    }
    if (ok) {
        unk_400++;
        unk_00[pos] = c;
        func_0206b434();
    }
    return ok;
}

BOOL Unk_0206b754::func_0206b664(s8 *src, u32 n) {
    u32 pos = unk_400;
    BOOL ok;
    if (0x400 - pos > n) {
        ok = TRUE;
    } else {
        ok = FALSE;
    }
    if (ok) {
        u32 i;
        for (i = 0; i < n; i++) {
            (&unk_00[unk_400])[i] = src[i];
        }
        unk_400 += n;
        func_0206b434();
    }
    return ok;
}

void Unk_0206b754::func_0206b6b0(u32 v) {
    s32 i;
    for (i = 0; (u32)i < 3; i++) {
        unk_414[i] = v;
    }
}

void Unk_0206b754::func_0206b6d0(u32 v) {
    s32 i;
    unk_400 = 0;
    func_02115fb4(this, 0, 0x400);
    for (i = 0; (u32)i < 3; i++) {
        unk_404[i] = 0;
        unk_438[i] = 0;
        unk_42c[i] = 0;
    }
    unk_410 = 0;
    func_0206b6b0(v);
}

void Unk_0206b754::func_0206b72c() { func_0206b6d0(0); }

Unk_0206b754::~Unk_0206b754() {
    func_0206b518();
}

Unk_0206b754::Unk_0206b754(Unk_02067c70 *o) : unk_400(0), unk_410(0), unk_43b(0), unk_43c((u8 *)o) {
    func_0206b72c();
    s32 i;
    for (i = 0; (u32)i < 3; i++) {
        unk_420[i] = 0;
    }
}

// ---- Unk_020ddc64 state handlers
void Unk_020ddc64::func_0206b7a4() {
    u32 x;
    char *y;
    char *z;
    unk_34.func_020a72c4(&x, &y, &z);
    if (!func_0206774c()) {
        func_020a8400(x * 2);
        func_020a8348((u8 *)z);
        unk_48 = (u8 *)y;
    }
}

#define A15(I) { Unk_020a71d0 *p = unk_2c->unk_15fc; func_0206c45c((Unk_0206b7dc_Arg *)(p + (I))); }
#define A13(I) { Unk_020a71d0 *p = unk_2c->unk_13c0; func_0206c45c((Unk_0206b7dc_Arg *)(p + (I))); }
void Unk_020ddc64::func_0206b7dc() A15(3)
void Unk_020ddc64::func_0206b7f0() A15(2)
void Unk_020ddc64::func_0206b804() A15(1)
void Unk_020ddc64::func_0206b818() A15(0)
void Unk_020ddc64::func_0206b82c() A13(10)
void Unk_020ddc64::func_0206b848() A13(9)
void Unk_020ddc64::func_0206b864() A13(8)
void Unk_020ddc64::func_0206b880() A13(7)
void Unk_020ddc64::func_0206b89c() A13(6)
void Unk_020ddc64::func_0206b8b8() A13(5)
void Unk_020ddc64::func_0206b8d4() A13(4)
void Unk_020ddc64::func_0206b8e8() A13(3)
void Unk_020ddc64::func_0206b8fc() A13(2)
void Unk_020ddc64::func_0206b910() A13(1)
void Unk_020ddc64::func_0206b924() A13(0)
void Unk_020ddc64::func_0206b938() { func_0206c4b4(); }
void Unk_020ddc64::func_0206b940() { unk_50 = 2; }
void Unk_020ddc64::func_0206b948() { unk_50 = 1; }

#define ST(NAME, CHK, FLD) \
void Unk_020ddc64::NAME() { \
    unk_2c->CHK(); \
    func_020a8348(((Unk_0206b950_Obj *)unk_2c->FLD)->vfunc_0c()); \
}
ST(func_0206b950, func_02066e50, unk_1928)
ST(func_0206b978, func_02066d5c, unk_19ac)
ST(func_0206b9a0, func_02066db0, unk_1990)
ST(func_0206b9c8, func_02066e04, unk_195c)

void Unk_020ddc64::func_0206b9f0() { func_0206c4fc(3); }
void Unk_020ddc64::func_0206b9fc() { func_0206c4fc(2); }
void Unk_020ddc64::func_0206ba08() { func_0206c4fc(1); }
void Unk_020ddc64::func_0206ba14() { func_0206c4fc(0); }
void Unk_020ddc64::func_0206ba20() { func_0206c534(10); }
void Unk_020ddc64::func_0206ba2c() { func_0206c534(9); }
void Unk_020ddc64::func_0206ba38() { func_0206c534(8); }
void Unk_020ddc64::func_0206ba44() { func_0206c534(7); }
void Unk_020ddc64::func_0206ba50() { func_0206c534(6); }
void Unk_020ddc64::func_0206ba5c() { func_0206c534(5); }
void Unk_020ddc64::func_0206ba68() { func_0206c534(4); }
void Unk_020ddc64::func_0206ba74() { func_0206c534(3); }
void Unk_020ddc64::func_0206ba80() { func_0206c534(2); }
void Unk_020ddc64::func_0206ba8c() { func_0206c534(1); }
void Unk_020ddc64::func_0206ba98() { func_0206c534(0); }

ST(func_0206baa4, func_02066ea0, unk_190c)
ST(func_0206bacc, func_02066f2c, unk_18f0)
ST(func_0206baf4, func_02066f98, unk_18d4)
ST(func_0206bb1c, func_02066fe4, unk_18b8)

#define SF(NAME, CALLEE) \
void Unk_020ddc64::NAME() { \
    func_020a8348(CALLEE(unk_2c)->vfunc_0c()); \
}
SF(func_0206bb44, func_020675a8)
SF(func_0206bb64, func_020675d8)
SF(func_0206bb84, func_0206760c)
SF(func_0206bba4, func_02067648)
SF(func_0206bbc4, func_0206766c)
SF(func_0206bbe4, func_02067690)
SF(func_0206bc04, func_020676b4)

ST(func_0206bc24, func_02067070, unk_1880)
ST(func_0206bc4c, func_020670a8, unk_1860)

void Unk_020ddc64::func_0206bc74() {
    func_020a8348(unk_2c->unk_13b0->func_02065f10()->vfunc_0c());
}

ST(func_0206bc9c, func_02067030, unk_189c)

void Unk_020ddc64::func_0206bcc4() {}

void Unk_020ddc64::func_0206bcc8() {
    u32 base = (u32)unk_04;
    u32 r = func_020a6c84(base, 1, 7);
    if (r) {
        if (unk_2c->func_02066d04()) {
            func_020a8400(r - base);
            func_020a8348(((Unk_0206b950_Obj *)unk_2c->unk_19d0)->vfunc_0c());
        }
    }
}

void Unk_020ddc64::func_0206bd10() { func_020a8348(func_0205023c()); }
void Unk_020ddc64::func_0206bd28() { func_020a8348(func_02050234()); }
void Unk_020ddc64::func_0206bd40() { func_020a8348(func_0205021c()); }
void Unk_020ddc64::func_0206bd58() { func_020a8348(func_02050224()); }
void Unk_020ddc64::func_0206bd70() { func_020a8348(func_0205022c()); }

typedef void (Unk_020ddc64::*Unk_0206bd88_Fn)();

void Unk_020ddc64::func_0206bd88() {
    static Unk_0206bd88_Fn tbl[3] = { 0, 0, &Unk_020ddc64::func_0206b7a4 };
    Unk_0206bd88_Fn f = tbl[unk_34.unk_04];
    if (f != 0) (this->*f)();
}
