#include "types.h"

class Unk_020d8938;
typedef void (Unk_020d8938::*Unk_020d8938_Fn)();
typedef void (Unk_020d8938::*Unk_020d8938_ArgFn)(void *arg);

class Unk_020d89c8 {
public:
    virtual BOOL vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_10();
    BOOL func_0202d8c0();
    void func_0202d8d4();
    void func_0202d8e0();

    u8 pad_04[0x148 - 4];
    u32 unk_148;
    u8 pad_14c[0x82c - 0x14c];
    void *unk_82c;
    u8 pad_830[4];
    u8 unk_834;
};
typedef Unk_020d89c8 Unk_020d8938_Parent;

class Unk_0202d648 {
public:
    u16 *func_0202d648();
    void func_0202d64c();
    BOOL func_0202d664(Unk_020d89c8 *parent, u16 *id);
    void *func_0202d71c(Unk_020d89c8 *parent, u16 *id);
    BOOL func_0202d7a4(Unk_020d89c8 *parent, u16 *id);
    Unk_0202d648 *func_0202d7e0();
    Unk_0202d648 *func_0202d7f4();

    u8 pad_00[0x28];
    u16 unk_28;
    u8 pad_2a[2];
    u8 unk_2c[4];
};

static inline BOOL Unk_0202d664_Range(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) {
        r = TRUE;
    }
    return r;
}

struct Unk_020d8938_Tbl {
    Unk_020d8938_Fn a;
    Unk_020d8938_Fn b;
    Unk_020d8938_Fn c;
};

extern "C" {
extern Unk_020d8938_Fn data_0213a740;
extern Unk_020d8938_Tbl data_021bf10c[];
extern u8 data_021be6c0[];
extern "C++" {}
extern u32 data_020d786c;
extern u32 data_020c6cf0;
u32 func_02015708();
void func_02015ad0(void *);
void func_02015b04(void *);
void func_02015b54(void *);
u32 func_0201c7f8(void *);
void func_0201c8fc(void *);
void func_0200303c(void *, s32, u32, u32);
void func_0202d184(void *self, void *buf, u8 *out, s32 a3, u8 s0, u32 s1, u8 s2, s32 s3, u8 s4);
s32 func_02063b8c(s32);
void *func_0209750c();
void *func_0209888c(void *);
s32 func_0207f7cc(void *, void *);
s32 func_0207f86c(void *, s32);
void func_02115fb4(void *, s32, s32);
void *func_020805c4(void *);
s32 func_020030b4(void *);
void *func_0207e310(void *);
void func_02078504(void *, void *);
u16 *func_0207850c(void *);
void func_020b8930(void *);
void func_020b895c(void *);
s32 func_020b8840(void *, u32, u32, void *, u32, u32);
s32 func_0208211c(void *);
void *func_02081f44(void *);
void func_02081f88(void *);
void func_02081fa0(void *);
s32 func_02082140(void *);
s32 func_0208202c(void *);
s32 func_0204b2d4(void *);
u32 func_0204b25c(void *);
void func_0205ca94(void *, void *, s32, s32, s32);
void func_0205ca2c(void *, void *);
s32 func_0205c91c(void *);
void *func_0203c6a8();
s32 func_0201b0ec(void *);
void func_0201c6e4(void *);
s32 func_0203e650(void *);
void func_0208161c(void *);
s32 func_0208162c(void *, void *);
s32 func_0201b6f0(void *);
s32 func_02019cac(void *, void *);
s32 func_020162c4(void *, void *, u32);
void func_020197ac(void *, void *, s32, s32, s32, s32, s32, s32, s32);
u16 *func_0207fd9c(void *);
s32 func_0201bdec(void *);
void func_02088c98(void *, void *, s32, s32, s32, s32, s32, s32, s32);
void *func_020805b8(void *);
extern "C" s32 func_0202da64(void *);
}

class Unk_02015b54 {
public:
    Unk_02015b54();
    virtual ~Unk_02015b54();
};

class Unk_020d8938 : public Unk_02015b54 {
public:
    Unk_020d8938();
    virtual ~Unk_020d8938();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void vfunc_10();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_1c();
    virtual void vfunc_20();
    virtual void vfunc_24();
    virtual void vfunc_28();
    virtual void vfunc_2c();
    virtual void vfunc_30();
    virtual void vfunc_34();
    virtual void vfunc_38();
    virtual void vfunc_3c();
    virtual void vfunc_40();
    virtual void vfunc_44();
    virtual void vfunc_48();
    virtual void vfunc_4c();
    virtual void vfunc_50();
    virtual void vfunc_54();
    virtual void vfunc_58();
    virtual void vfunc_5c();
    virtual void vfunc_60();
    virtual void *vfunc_64();
    virtual u32 vfunc_68();
    virtual void vfunc_6c();
    virtual void vfunc_70();
    virtual void vfunc_74();
    virtual void vfunc_78(void *arg);
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();

    u32 func_0202d114();
    void func_0202d120(u32 v);
    void *func_0202d158(s32 idx);
    void func_0202d1c0(Unk_020d8938_Fn fn);
    void func_0202d1d4(Unk_020d8938_Tbl *t);
    void func_0202d20c();
    void func_0202d294(Unk_020d8938_Fn fn);
    void func_0202d328(Unk_020d8938_Fn fn);
    void func_0202d33c(Unk_020d8938_Fn fn);
    void func_0202d388(Unk_020d8938_Parent *owner, u32 idx);
    void func_0202d814(void *arg);

    u8 pad_04[0xac - 4];
    Unk_020d8938_Fn unk_ac;
    Unk_020d8938_Fn unk_b4;
    Unk_020d8938_Fn unk_bc;
    Unk_020d8938_Fn unk_c4;
    Unk_020d8938_Fn unk_cc;
    Unk_020d8938_Fn unk_d4;
    Unk_020d8938_Fn unk_dc;
    Unk_020d8938_Fn unk_e4;
    Unk_020d8938_Fn unk_ec;
    Unk_020d8938_Fn unk_f4;
    Unk_020d8938_Parent *unk_fc;
    u8 pad_100[0x120 - 0x100];
    u16 unk_120;
    u8 pad_122[2];
    s32 unk_124;
    s32 unk_128;
    s32 unk_12c;
    s32 unk_130;
    s32 unk_134;
    u8 unk_138;
    u8 pad_139[0x150 - 0x139];
    u32 unk_150;
    u8 unk_154;
    u8 unk_155;
    u8 pad_156[2];
    u32 unk_158;
    u32 unk_15c;
    u32 unk_160;
    u32 unk_164;
    Unk_020d8938_Fn unk_168;
    Unk_020d8938_Fn unk_170;
    Unk_020d8938_Fn unk_178;
    Unk_020d8938_Fn unk_180;
    Unk_020d8938_Fn unk_188;
    u8 pad_190[8];
    u16 unk_198;
    u8 unk_19a;
    u8 pad_19b;
    u32 unk_19c;
};

void Unk_020d8938::vfunc_78(void *arg) {
    if (unk_ac) {
        (this->*reinterpret_cast<Unk_020d8938_ArgFn>(unk_ac))(arg);
    }
    return;
}
u32 Unk_020d8938::func_0202d114() { return unk_150; }
void Unk_020d8938::func_0202d120(u32 v) { unk_150 = v; }

u32 Unk_020d8938::vfunc_68() {
    u32 r = 0;
    Unk_020d8938_Parent *p = (Unk_020d8938_Parent *)func_0202d158(func_02015708());
    if (p) {
        r = (u32)p->unk_82c;
    }
    return r;
}

void *Unk_020d8938::func_0202d158(s32 idx) {
    switch (idx) {
    case 0:
        return unk_fc;
    case 1:
        if (unk_fc) {
            return (void *)func_0201c7f8(unk_fc);
        }
    }
    return 0;
}

void Unk_020d8938::vfunc_7c() {
    if (unk_e4) {
        (this->*unk_e4)();
        unk_e4 = data_0213a740;
    }
}

void Unk_020d8938::vfunc_80() {
    func_02015ad0(this);
    if (unk_ec) {
        (this->*unk_ec)();
    }
}

void Unk_020d8938::vfunc_84() {
    Unk_020d8938_Fn t;
    if (unk_d4) {
        (this->*unk_d4)();
        t = data_0213a740;
        unk_d4 = t;
        if (unk_dc) {
            unk_d4 = unk_dc;
        }
        unk_dc = t;
    }
}

void Unk_020d8938::func_0202d1c0(Unk_020d8938_Fn fn) { unk_cc = fn; }
void Unk_020d8938::func_0202d294(Unk_020d8938_Fn fn) { unk_e4 = fn; }
void Unk_020d8938::func_0202d328(Unk_020d8938_Fn fn) { unk_dc = fn; }
void Unk_020d8938::func_0202d33c(Unk_020d8938_Fn fn) { unk_d4 = fn; }

void Unk_020d8938::func_0202d1d4(Unk_020d8938_Tbl *t) {
    unk_ac = t->a;
    unk_b4 = t->b;
    unk_bc = t->c;
}

void Unk_020d8938::func_0202d20c() {
    unk_ac = data_0213a740;
    Unk_020d8938_Fn t = data_0213a740;
    unk_b4 = t;
    unk_bc = t;
}

Unk_020d8938::Unk_020d8938() {
    unk_120 = 0xfff1;
    unk_198 = 0xfff1;
}

Unk_020d8938::~Unk_020d8938() {
}

void Unk_020d8938::func_0202d388(Unk_020d8938_Parent *owner, u32 idx) {
    void *r6;
    if (func_0209750c() != 0) {
        r6 = func_0209888c(func_0209750c());
    } else {
        r6 = 0;
    }
    vfunc_08();
    unk_fc = owner;
    if (idx < 0x11) {
        func_0202d1d4(&data_021bf10c[idx]);
    }
    unk_c4 = data_0213a740;
    unk_cc = data_0213a740;
    Unk_020d8938_Fn t = data_0213a740;
    unk_d4 = t;
    unk_dc = t;
    unk_e4 = t;
    unk_ec = t;
    unk_f4 = t;
    unk_120 = 0xfff1;
    unk_134 = 0;
    unk_124 = -1;
    unk_128 = 0;
    unk_12c = -1;
    unk_130 = 0;
    if (r6 != 0 && unk_fc != 0) {
        unk_124 = func_0207f7cc(unk_fc->unk_82c, r6);
        unk_128 = func_0207f86c(unk_fc->unk_82c, unk_124);
    }
    func_0201c8fc(this);
    unk_150 = 0;
    unk_154 = 0;
    unk_155 = 0;
    unk_158 = 0;
    unk_15c = 0;
    unk_160 = 0;
    unk_164 = 0;
    Unk_020d8938_Fn t2 = data_0213a740;
    unk_168 = t2;
    unk_170 = t2;
    unk_178 = t2;
    unk_180 = t2;
    unk_188 = t2;
    unk_198 = 0xfff1;
    unk_19a = 0;
    unk_19c = 0;
    func_02115fb4(data_021be6c0, 0, 0x20);
    unk_138 = 0;
}

void Unk_020d8938::func_0202d814(void *arg) {
    if (vfunc_64() != 0) {
        if (func_020030b4(func_020805c4(vfunc_64())) != 0) {
            if (func_0207e310(vfunc_64()) != 0) {
                func_02078504(func_0207e310(vfunc_64()), arg);
            }
        }
    }
}

extern "C" void func_0202d864(u16 *out, Unk_020d8938 *obj) {
    *out = 0xfff1;
    if (obj->vfunc_64() != 0) {
        if (func_020030b4(func_020805c4(obj->vfunc_64())) != 0) {
            if (func_0207e310(obj->vfunc_64()) != 0) {
                *out = *func_0207850c(func_0207e310(obj->vfunc_64()));
            }
        }
    }
}

u16 *Unk_0202d648::func_0202d648() { return &unk_28; }
void Unk_0202d648::func_0202d64c() {
    func_020b8930(this);
    func_0208211c(unk_2c);
}

BOOL Unk_0202d648::func_0202d664(Unk_020d89c8 *parent, u16 *id) {
    BOOL result = FALSE;
    BOOL same;
    void *p;
    if (func_0204b2d4(id)) {
        u32 a = func_0204b25c(id);
        if (a == func_0204b25c(&unk_28)) {
            same = TRUE;
        } else {
            same = FALSE;
        }
    } else {
        if (*id == unk_28) {
            same = TRUE;
        } else {
            same = FALSE;
        }
    }
    if (!same || (Unk_0202d664_Range(id, 0x12a8, 0x12af) && Unk_0202d664_Range(&unk_28, 0x12a8, 0x12af))) {
        p = func_0202d71c(parent, id);
        if (p) {
            result = func_020b8840(this, parent->unk_148, data_020d786c, p, 0, 0);
            unk_28 = *id;
        }
    }
    return result;
}

void *Unk_0202d648::func_0202d71c(Unk_020d89c8 *parent, u16 *id) {
    void *r4 = func_02081f44(unk_2c);
    void *r6 = 0;
    if (r4) {
        BOOL in = FALSE;
        if (*id >= 0x11a8 && *id <= 0x12a7) {
            in = TRUE;
        }
        if (in == 1) {
            func_0205ca94(r4, id, 0, 1, 1);
        } else if (parent->unk_82c) {
            func_0205ca2c(r4, func_020805b8(parent->unk_82c));
        } else {
            func_0205ca94(r4, id, 0, 1, 1);
        }
        if (func_0205c91c(r4)) {
            r6 = func_0203c6a8();
        }
    }
    return r6;
}

BOOL Unk_0202d648::func_0202d7a4(Unk_020d89c8 *parent, u16 *id) {
    unk_28 = 0xffff;
    if (!func_02082140(unk_2c)) {
        return FALSE;
    }
    if (func_0202d664(parent, id)) {
        return TRUE;
    }
    return FALSE;
}

Unk_0202d648 *Unk_0202d648::func_0202d7e0() {
    func_02081f88(unk_2c);
    return this;
}

Unk_0202d648 *Unk_0202d648::func_0202d7f4() {
    func_020b895c(this);
    unk_28 = 0xfff1;
    func_02081fa0(unk_2c);
    return this;
}

BOOL Unk_020d89c8::func_0202d8c0() {
    if (unk_834) {
        return TRUE;
    }
    return FALSE;
}
void Unk_020d89c8::func_0202d8d4() { unk_834 = 0; }
void Unk_020d89c8::func_0202d8e0() { unk_834 = 1; }

BOOL Unk_020d89c8::vfunc_0c() {
    if (!func_0201b0ec(this)) {
        return FALSE;
    }
    func_0208211c((u8 *)this + 0x824);
    ((Unk_0202d648 *)((u8 *)this + 0x64c))->func_0202d64c();
    func_0201c6e4((u8 *)this + 0x838);
    return TRUE;
}

BOOL Unk_020d89c8::vfunc_10() {
    if (!func_0203e650(this)) {
        return FALSE;
    }
    func_0208161c((u8 *)this + 0xea);
    return TRUE;
}

BOOL Unk_020d89c8::vfunc_00() {
    u16 h = 0x11a8;
    if (!func_0201b6f0(this)) {
        return FALSE;
    }
    if (!func_0208202c((u8 *)this + 0x824)) {
        if (!func_02082140((u8 *)this + 0x824)) {
            return FALSE;
        }
        if (!func_0202da64(this)) {
            return FALSE;
        }
    }
    if (!func_02019cac((u8 *)this + 0x2ac, this)) {
        return FALSE;
    }
    if (!func_020162c4((u8 *)this + 0x334, this, data_020c6cf0)) {
        return FALSE;
    }
    func_020197ac((u8 *)this + 0x564, this, 0, 1, 0, 0, 0, 0, 0);
    if (unk_82c) {
        h = *func_0207fd9c(unk_82c);
    }
    if (!((Unk_0202d648 *)((u8 *)this + 0x64c))->func_0202d7a4(this, &h)) {
        return FALSE;
    }
    func_02088c98((u8 *)this + 0x4cc, this, 0x1000, 0x2000, 8, 0x2fc, 2, (u8)func_0201bdec(this), 0x1000);
    if (func_0208162c(this, (u8 *)this + 0xea)) {
    } else {
        return FALSE;
    }
    return TRUE;
}

extern "C" void func_0202d184(void *self, void *buf, u8 *out, s32 a3, u8 s0, u32 s1, u8 s2, s32 s3, u8 s4) {
    u32 k = s2;
    u8 t = k * s3;
    if (s4) {
        k = s4;
    }
    func_0200303c(buf, a3, s1, s0);
    *out = t + func_02063b8c(k);
}
