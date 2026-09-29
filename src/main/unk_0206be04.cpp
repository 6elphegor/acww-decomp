#include "types.h"
#include "text/Unk_02050288.h"

extern "C" {
void func_0206c56c_dummy_unused();
}

// Script command token, 0x14 bytes
class Unk_020a72b0 {
public:
    Unk_020a72b0();
    void func_020a72f0(char **a, char **b, char **c);
    void func_020a7338(char **a, char **b);
    u32 func_020a7404();
    void func_020a777c(u8 *p);

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

    void func_020a832c();
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

    void func_020a7eac(u32 c);
    void func_020a7ecc();
    void func_020a7eec();
    void func_020a7f0c(Unk_020e2ac8 *v);
};

class Unk_020e2ac8 : public Unk_020e2b08 {
public:
    Unk_020e2ac8(u8 flag);
    virtual ~Unk_020e2ac8();

    /* 0x24 */ Unk_020e2a90 *unk_24;
    /* 0x28 */ u8 unk_28;
};

struct Unk_0206c4fc_Ent {
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
    virtual u8 *vfunc_0c();
    u32 unk_04;
    u8 unk_08[0x2c];
};

struct Unk_0206c56c_Obj {
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
    virtual u8 *vfunc_0c();
};

struct Unk_0206c45c_Arg {
    u32 unk_00, unk_04, unk_08;
    s32 unk_0c;
};

extern "C" {
Unk_020e2a90 *func_020a8054(u32 a, u32 len, u32 b);
void func_020a7fd8(Unk_020e2a90 *p);
Unk_0206c56c_Obj *func_020b3078(u8 *key);
void *func_0209750c();
void *func_0209888c(void *);
s32 func_0209411c(void *);
}

class Unk_020ddc64;
typedef void (Unk_020ddc64::*Unk_020ddc64_Fn)();

class Unk_020ddc64 : public Unk_020e2ac8 {
public:
    Unk_020ddc64(u8 *owner);
    virtual ~Unk_020ddc64();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void vfunc_10(u32 c);
    virtual void vfunc_14(u8 *p);

    void func_0206be04();
    void func_0206bf78();
    void func_0206c1c8();
    void func_0206c1e0();
    void func_0206c2a8();
    void func_0206c36c();
    void func_0206c45c(Unk_0206c45c_Arg *a);
    void func_0206c4b4();
    void func_0206c4fc(s32 idx);
    void func_0206c534(s32 idx);
    void func_0206c56c(Unk_0206c4fc_Ent *e);
    s32 func_0206c630(u32 a, BOOL b);
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

    /* 0x2c */ u8 *unk_2c;
    /* 0x30 */ Unk_020e2a90 *unk_30;
    /* 0x34 */ Unk_020a72b0 unk_34;
    /* 0x48 */ u8 *unk_48;
    /* 0x4c */ u8 *unk_4c;
    /* 0x50 */ u32 unk_50;
};

void Unk_020ddc64::func_0206be04() {
    static Unk_020ddc64_Fn tbl[20] = { 0, &Unk_020ddc64::func_0206b948, &Unk_020ddc64::func_0206b940, 0, &Unk_020ddc64::func_0206b938, &Unk_020ddc64::func_0206b924, &Unk_020ddc64::func_0206b910, &Unk_020ddc64::func_0206b8fc, &Unk_020ddc64::func_0206b8e8, &Unk_020ddc64::func_0206b8d4, &Unk_020ddc64::func_0206b8b8, &Unk_020ddc64::func_0206b89c, &Unk_020ddc64::func_0206b880, &Unk_020ddc64::func_0206b864, &Unk_020ddc64::func_0206b848, &Unk_020ddc64::func_0206b82c, &Unk_020ddc64::func_0206b818, &Unk_020ddc64::func_0206b804, &Unk_020ddc64::func_0206b7f0, &Unk_020ddc64::func_0206b7dc };
    Unk_020ddc64_Fn f = tbl[unk_34.unk_04];
    if (f != 0) (this->*f)();
}

void Unk_020ddc64::func_0206bf78() {
    static Unk_020ddc64_Fn tbl[35] = { &Unk_020ddc64::func_0206bc9c, &Unk_020ddc64::func_0206bc74, &Unk_020ddc64::func_0206bc4c, &Unk_020ddc64::func_0206bc24, &Unk_020ddc64::func_0206bc04, &Unk_020ddc64::func_0206bbe4, &Unk_020ddc64::func_0206bbc4, &Unk_020ddc64::func_0206bba4, &Unk_020ddc64::func_0206bb84, &Unk_020ddc64::func_0206bb64, &Unk_020ddc64::func_0206bb44, &Unk_020ddc64::func_0206bb1c, &Unk_020ddc64::func_0206baf4, &Unk_020ddc64::func_0206bacc, &Unk_020ddc64::func_0206baa4, &Unk_020ddc64::func_0206ba98, &Unk_020ddc64::func_0206ba8c, &Unk_020ddc64::func_0206ba80, &Unk_020ddc64::func_0206ba74, &Unk_020ddc64::func_0206ba68, &Unk_020ddc64::func_0206ba5c, &Unk_020ddc64::func_0206ba50, &Unk_020ddc64::func_0206ba44, &Unk_020ddc64::func_0206ba38, &Unk_020ddc64::func_0206ba2c, &Unk_020ddc64::func_0206ba20, &Unk_020ddc64::func_0206ba14, &Unk_020ddc64::func_0206ba08, &Unk_020ddc64::func_0206b9fc, &Unk_020ddc64::func_0206b9f0, &Unk_020ddc64::func_0206b9c8, &Unk_020ddc64::func_0206b9a0, 0, &Unk_020ddc64::func_0206b978, &Unk_020ddc64::func_0206b950 };
    Unk_020ddc64_Fn f = tbl[unk_34.unk_04];
    if (f != 0) (this->*f)();
}

void Unk_020ddc64::func_0206c1c8() {
    func_020a8400(unk_34.func_020a7404());
}

void Unk_020ddc64::func_0206c1e0() {
    static Unk_020ddc64_Fn tbl[17] = { 0, 0, 0, 0, 0, 0, &Unk_020ddc64::func_0206bcc8, &Unk_020ddc64::func_0206bcc4, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
    Unk_020ddc64_Fn f = tbl[unk_34.unk_04];
    if (f != 0) (this->*f)();
}

void Unk_020ddc64::func_0206c2a8() {
    static Unk_020ddc64_Fn tbl[11] = { &Unk_020ddc64::func_0206bd70, &Unk_020ddc64::func_0206bd58, 0, 0, 0, 0, &Unk_020ddc64::func_0206bd40, &Unk_020ddc64::func_0206bd28, &Unk_020ddc64::func_0206bd10, 0, 0 };
    Unk_020ddc64_Fn f = tbl[unk_34.unk_04];
    (this->*f)();
}

void Unk_020ddc64::func_0206c36c() {
    static Unk_020ddc64_Fn tbl[12] = { &Unk_020ddc64::func_0206c2a8, &Unk_020ddc64::func_0206c1e0, &Unk_020ddc64::func_0206c1c8, 0, &Unk_020ddc64::func_0206bf78, 0, 0, 0, 0, 0, 0, &Unk_020ddc64::func_0206be04 };
    s32 i = unk_34.unk_00;
    Unk_020ddc64_Fn f = 0;
    if (i == 0xff) f = &Unk_020ddc64::func_0206bd88;
    else if (i < 12) f = tbl[i];
    if (f != 0) (this->*f)();
}

void Unk_020ddc64::func_0206c45c(Unk_0206c45c_Arg *a) {
    char *p0, *p1, *p2;
    unk_34.func_020a72f0(&p0, &p1, &p2);
    if (a->unk_0c == 0) {
        if (p0 != 0) func_020a8348((u8 *)p0);
    } else if (a->unk_0c == 1) {
        if (p1 != 0) func_020a8348((u8 *)p1);
    } else if (a->unk_0c == 2) {
        if (p2 != 0) {
            unk_4c = unk_04;
            func_020a8348((u8 *)p2);
        }
    }
}

void Unk_020ddc64::func_0206c4b4() {
    char *p0, *p1;
    unk_34.func_020a7338(&p0, &p1);
    if (func_0209411c(func_0209888c(func_0209750c())) == 0) {
        if (p0 != 0) func_020a8348((u8 *)p0);
    } else {
        if (p1 != 0) {
            unk_4c = unk_04;
            func_020a8348((u8 *)p1);
        }
    }
}

void Unk_020ddc64::func_0206c4fc(s32 idx) {
    Unk_0206c4fc_Ent *e = (Unk_0206c4fc_Ent *)(unk_2c + 0x15fc + idx * 0x34);
    func_020a8348(e->vfunc_0c());
    func_0206c56c(e);
}

void Unk_020ddc64::func_0206c534(s32 idx) {
    Unk_0206c4fc_Ent *e = (Unk_0206c4fc_Ent *)(unk_2c + 0x13c0 + idx * 0x34);
    func_020a8348(e->vfunc_0c());
    func_0206c56c(e);
}

void Unk_020ddc64::func_0206c56c(Unk_0206c4fc_Ent *e) {
    u8 *k = e->unk_08 - 0;
    Unk_0206c56c_Obj *o = 0;
    if (unk_50 == 0) {
        o = func_020b3078(k + 8);
    } else if (unk_50 == 1) {
        o = func_020b3078(k + 9);
    }
    if (o != 0) func_020a8348(o->vfunc_0c());
    unk_50 = 0;
}

void Unk_020ddc64::vfunc_14(u8 *p) {
    unk_34.func_020a777c(p);
    func_0206c36c();
}

void Unk_020ddc64::vfunc_10(u32 c) {
    if (unk_30 != 0) unk_30->func_020a7eac(c);
    if (unk_04 == unk_48) {
        unk_48 = 0;
        func_020a832c();
    }
    if (unk_04 == unk_4c) {
        unk_4c = 0;
        func_020a832c();
    }
}

void Unk_020ddc64::vfunc_0c() {
    if (unk_30 != 0) unk_30->func_020a7ecc();
}

void Unk_020ddc64::vfunc_08() {
    if (unk_30 != 0) {
        unk_50 = 0;
        unk_48 = 0;
        unk_4c = 0;
        unk_30->func_020a7eec();
    }
}

s32 Unk_020ddc64::func_0206c630(u32 a, BOOL b) {
    s32 r = 0;
    if (b != 0) {
        if (unk_30 != 0) {
            unk_30->unk_10 = a;
            unk_30->func_02050c44();
            r = unk_30->unk_30;
            unk_30->unk_10 = 0;
        }
    }
    return r;
}

Unk_020ddc64::Unk_020ddc64(u8 *owner) : Unk_020e2ac8(1), unk_2c(owner), unk_30(0) {
    unk_48 = 0;
    unk_4c = 0;
    unk_50 = 0;
    unk_30 = func_020a8054(0, 0x14, 2);
    if (unk_30 != 0) unk_30->func_020a7f0c(this);
}

Unk_020ddc64::~Unk_020ddc64() {
    if (unk_30 != 0) func_020a7fd8(unk_30);
}

// Member of Unk_02067c70 at +0xa1c
class Unk_0206c74c {
public:
    u32 func_0206c6f4();
    u8 *func_0206c6fc();
    void func_0206c700();

    /* 0x00 */ u32 unk_00[0xa4 / 4];
    /* 0xa4 */ u8 unk_a4[0x800];
};

u32 Unk_0206c74c::func_0206c6f4() {
    return 0x800;
}

u8 *Unk_0206c74c::func_0206c6fc() {
    return unk_a4;
}

extern "C" void func_02115fb4(void *dst, u32 value, u32 size);

void Unk_0206c74c::func_0206c700() {
    func_02115fb4(unk_a4, 0, 0x800);
}
