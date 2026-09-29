#include "types.h"

class Unk_020e2a78;

class Unk_02069834;
class Unk_02069834_Owner;

class Unk_020aa72c {
public:
    u8 *func_020aa79c();
    Unk_020e2a78 *func_020aa7a0();
};

class Unk_020aa3b8 {
public:
    Unk_020aa72c *func_020aa560(s32 i);
    void func_020aa5f4();
    void func_020aa4cc(s32 v);
    s32 func_020aa4b8();
};

class Unk_020a8cf8 {
public:
    void func_020a8de0(Unk_020aa3b8 *p);
    void func_020a8d3c();
};

class Unk_020a72b0 {
public:
    u32 func_020a7478(u8 *a1, Unk_020e2a78 *a2, u8 *a3, Unk_020e2a78 *s0, u8 *s1, Unk_020e2a78 *s2, u8 *s3,
                      Unk_020e2a78 *s4, u8 *s5, Unk_020e2a78 *s6);
    u32 func_020a74fc(u8 *a1, Unk_020e2a78 *a2, u8 *a3, Unk_020e2a78 *s0, u8 *s1, Unk_020e2a78 *s2, u8 *s3,
                      Unk_020e2a78 *s4);
    u32 func_020a7574(u8 *a1, Unk_020e2a78 *a2, u8 *a3, Unk_020e2a78 *s0, u8 *s1, Unk_020e2a78 *s2);
    u32 func_020a75dc(u8 *a1, Unk_020e2a78 *a2, u8 *a3, Unk_020e2a78 *s0);
    void func_020a7634(u16 *out);
    void func_020a7754(u8 *a);
    s32 unk_00, unk_04;
    u32 unk_08;
    char *unk_0c;
    u8 *unk_10;
};

class Unk_020e2a78 {
public:
    virtual ~Unk_020e2a78();
    virtual u32 vfunc_08() = 0;
    virtual u8 *vfunc_0c() = 0;
    u32 unk_04, unk_08;
};

class Unk_020ddc34 : public Unk_020e2a78 {
public:
    virtual ~Unk_020ddc34();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();
};

class Unk_020ddcf0 {
public:
    virtual ~Unk_020ddcf0();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void vfunc_10();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_1c(s32 v);
    virtual void vfunc_20();
    virtual void vfunc_24(u32 v);
    virtual void vfunc_28(u32 v);
    virtual void vfunc_2c(u32 v);
    virtual void vfunc_30(u32 v);
    Unk_020ddc34 *func_02065f10();
};

class Unk_02069878_Obj {
public:
    virtual ~Unk_02069878_Obj();
    virtual void vfunc_08();
    virtual u8 *vfunc_0c();
};

class Unk_020e2b08 {
public:
    Unk_020e2b08();
    virtual ~Unk_020e2b08();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void vfunc_10(u32 c);
    virtual void vfunc_14(u8 *p);

    s32 func_020a8348(u8 *p);
    s32 func_020a8400(s32 n);

    /* 0x04 */ u8 *unk_04;
    /* 0x08 */ u8 unk_08[0x1c];
};

class Unk_020e2b4c : public Unk_020e2b08 {
public:
    Unk_020e2b4c() {}
    virtual ~Unk_020e2b4c() {}
    virtual BOOL vfunc_18();
};

struct Unk_02069834_Owner {
    u8 pad_00[0xb4];
    /* 0x00b4 */ u8 unk_b4[0x13b0 - 0xb4];
    /* 0x13b0 */ Unk_020ddcf0 *unk_13b0;
    u8 pad_13b4[0x16f9 - 0x13b4];
    /* 0x16f9 */ u8 unk_16f9;
    /* 0x16fa */ u8 unk_16fa;
    u8 pad_16fb[0x189c - 0x16fb];
    /* 0x189c */ Unk_02069878_Obj unk_189c;
    u8 pad_18a0[0x19d0 - 0x18a0];
    /* 0x19d0 */ Unk_02069878_Obj unk_19d0;
};

extern "C" {
u8 *func_020a72a0(s32 i);
Unk_020aa3b8 *func_020679b4(void *p);
void func_02067030(void *p);
void func_02066cf8(void *p, u32 v);
s32 func_02066d04(void *p);
u8 *func_020a6c84(u8 *p, s32 a, s32 b);
void func_0206755c(void *p, s32 a, s32 b, s32 c, s32 d);
u8 *func_0205023c();
u8 *func_02050234();
u8 *func_0205021c();
u8 *func_02050224();
u8 *func_0205022c();
void func_0200402c(s32 a);
void func_020a7768(Unk_020a72b0 *p);
}

class Unk_02069834 : public Unk_020e2b4c {
public:
    void func_02069834();
    void func_02069878();
    void func_020698bc();
    void func_020698e8();
    void func_02069914();
    void func_02069940();
    void func_0206996c();
    void func_0206998c();
    void func_020699a4();
    void func_020699bc();
    void func_020699d4();
    void func_020699ec();
    void func_02069ad0();
    void func_02069b94();
    void func_02069c34();
    void func_02069cb8();
    void func_02069cd8();
    void func_02069cfc();
    void func_02069d20();
    void func_02069d44();
    void func_02069d68();
    void func_02069d8c();
    void func_02069dc0();
    void func_02069df0();
    void func_02069e24();
    void func_02069e28();
    void func_02069e70();
    void func_02069e88();
    void func_02069ea0();
    void func_02069ec4();
    void func_02069ee8();
    void func_02069efc();
    void func_02069f28();
    void func_02069f40();
    void func_02069f58();
    void func_02069f70();
    void func_02069f88();
    void func_02069fa0();

    /* 0x24 */ Unk_02069834_Owner *unk_24;
    u8 pad_28[8];
    /* 0x30 */ s32 unk_30;
    u8 pad_34[4];
    /* 0x38 */ Unk_020a72b0 unk_38;
    u8 pad_4c[2];
    /* 0x4e */ u8 unk_4e;
    /* 0x4f */ u8 unk_4f;
    u8 pad_50[8];
    /* 0x58 */ u32 unk_58;
    /* 0x5c */ s32 unk_5c;
};

class Unk_02069fa4 {
public:
    void func_02069fa4();
    void func_02068950();
    void func_020689a0();
    void func_02068b44();
    void func_02068b3c();
    void func_02068b34();
    void func_02068b2c();
    void func_02068b18();
    void func_02068b04();
    void func_02068af0();
    void func_02068adc();
    void func_02068ac8();
    void func_02068aac();
    void func_02068a90();
    void func_02068a74();
    void func_02068a58();
    void func_02068a3c();
    void func_02068a20();
    void func_02068a0c();
    void func_020689f8();
    void func_020689e4();
    void func_020689d0();
    void func_02069fa0();
    void func_0206a024();
    /* 0x00 */ u8 pad_00[0x3c];
    /* 0x3c */ u32 unk_3c;
};

void Unk_02069834::func_02069834() {
    func_020a8348(func_020a72a0(unk_5c));
    func_020a8348(unk_24->unk_13b0->func_02065f10()->vfunc_0c());
    func_020a8348(func_020a72a0(6));
}

void Unk_02069834::func_02069878() {
    func_02067030(unk_24);
    func_020a8348(func_020a72a0(unk_5c));
    func_020a8348(unk_24->unk_189c.vfunc_0c());
    func_020a8348(func_020a72a0(5));
}

void Unk_02069834::func_020698bc() {
    Unk_020ddcf0 *o = unk_24->unk_13b0;
    u8 v[4];
    unk_38.func_020a7754(v);
    o->vfunc_30(v[0]);
}

void Unk_02069834::func_020698e8() {
    Unk_020ddcf0 *o = unk_24->unk_13b0;
    u8 v[4];
    unk_38.func_020a7754(v);
    o->vfunc_2c(v[0]);
}

void Unk_02069834::func_02069914() {
    Unk_020ddcf0 *o = unk_24->unk_13b0;
    u8 v[4];
    unk_38.func_020a7754(v);
    o->vfunc_28(v[0]);
}

void Unk_02069834::func_02069940() {
    Unk_020ddcf0 *o = unk_24->unk_13b0;
    u8 v[4];
    unk_38.func_020a7754(v);
    o->vfunc_24(v[0]);
}

void Unk_02069834::func_0206996c() {
    Unk_020ddcf0 *o = unk_24->unk_13b0;
    func_020a7768(&unk_38);
    o->vfunc_20();
}

void Unk_02069834::func_0206998c() {
    func_020699ec();
    func_020679b4(unk_24)->func_020aa4b8();
}

void Unk_02069834::func_020699a4() {
    func_02069ad0();
    func_020679b4(unk_24)->func_020aa4b8();
}

void Unk_02069834::func_020699bc() {
    func_02069b94();
    func_020679b4(unk_24)->func_020aa4b8();
}

void Unk_02069834::func_020699d4() {
    func_02069c34();
    func_020679b4(unk_24)->func_020aa4b8();
}

void Unk_02069834::func_020699ec() {
    Unk_020aa3b8 *l = func_020679b4(unk_24);
    Unk_020aa72c *a = l->func_020aa560(0);
    Unk_020aa72c *b = l->func_020aa560(1);
    Unk_020aa72c *c = l->func_020aa560(2);
    Unk_020aa72c *d = l->func_020aa560(3);
    Unk_020aa72c *e = l->func_020aa560(4);
    l->func_020aa5f4();
    u8 *a1 = a->func_020aa79c();
    Unk_020e2a78 *a2 = a->func_020aa7a0();
    u8 *b1 = b->func_020aa79c();
    Unk_020e2a78 *b2 = b->func_020aa7a0();
    u8 *c1 = c->func_020aa79c();
    Unk_020e2a78 *c2 = c->func_020aa7a0();
    u8 *d1 = d->func_020aa79c();
    Unk_020e2a78 *d2 = d->func_020aa7a0();
    u8 *e1 = e->func_020aa79c();
    Unk_020e2a78 *e2 = e->func_020aa7a0();
    func_020a8400(unk_38.func_020a7478(a1, a2, b1, b2, c1, c2, d1, d2, e1, e2));
    l->func_020aa4cc(5);
    ((Unk_020a8cf8 *)unk_24->unk_b4)->func_020a8de0(l);
    ((Unk_020a8cf8 *)unk_24->unk_b4)->func_020a8d3c();
    unk_30 = 5;
}

void Unk_02069834::func_02069ad0() {
    Unk_020aa3b8 *l = func_020679b4(unk_24);
    Unk_020aa72c *a = l->func_020aa560(0);
    Unk_020aa72c *b = l->func_020aa560(1);
    Unk_020aa72c *c = l->func_020aa560(2);
    Unk_020aa72c *d = l->func_020aa560(3);
    l->func_020aa5f4();
    u8 *a1 = a->func_020aa79c();
    Unk_020e2a78 *a2 = a->func_020aa7a0();
    u8 *b1 = b->func_020aa79c();
    Unk_020e2a78 *b2 = b->func_020aa7a0();
    u8 *c1 = c->func_020aa79c();
    Unk_020e2a78 *c2 = c->func_020aa7a0();
    u8 *d1 = d->func_020aa79c();
    Unk_020e2a78 *d2 = d->func_020aa7a0();
    func_020a8400(unk_38.func_020a74fc(a1, a2, b1, b2, c1, c2, d1, d2));
    l->func_020aa4cc(4);
    ((Unk_020a8cf8 *)unk_24->unk_b4)->func_020a8de0(l);
    ((Unk_020a8cf8 *)unk_24->unk_b4)->func_020a8d3c();
    unk_30 = 5;
}

void Unk_02069834::func_02069b94() {
    Unk_020aa3b8 *l = func_020679b4(unk_24);
    Unk_020aa72c *a = l->func_020aa560(0);
    Unk_020aa72c *b = l->func_020aa560(1);
    Unk_020aa72c *c = l->func_020aa560(2);
    l->func_020aa5f4();
    u8 *a1 = a->func_020aa79c();
    Unk_020e2a78 *a2 = a->func_020aa7a0();
    u8 *b1 = b->func_020aa79c();
    Unk_020e2a78 *b2 = b->func_020aa7a0();
    u8 *c1 = c->func_020aa79c();
    Unk_020e2a78 *c2 = c->func_020aa7a0();
    func_020a8400(unk_38.func_020a7574(a1, a2, b1, b2, c1, c2));
    l->func_020aa4cc(3);
    ((Unk_020a8cf8 *)unk_24->unk_b4)->func_020a8de0(l);
    ((Unk_020a8cf8 *)unk_24->unk_b4)->func_020a8d3c();
    unk_30 = 5;
}

void Unk_02069834::func_02069c34() {
    Unk_020aa3b8 *l = func_020679b4(unk_24);
    Unk_020aa72c *a = l->func_020aa560(0);
    Unk_020aa72c *b = l->func_020aa560(1);
    l->func_020aa5f4();
    u8 *a1 = a->func_020aa79c();
    Unk_020e2a78 *a2 = a->func_020aa7a0();
    u8 *b1 = b->func_020aa79c();
    Unk_020e2a78 *b2 = b->func_020aa7a0();
    func_020a8400(unk_38.func_020a75dc(a1, a2, b1, b2));
    l->func_020aa4cc(2);
    ((Unk_020a8cf8 *)unk_24->unk_b4)->func_020a8de0(l);
    ((Unk_020a8cf8 *)unk_24->unk_b4)->func_020a8d3c();
    unk_30 = 5;
}

void Unk_02069834::func_02069cb8() {
    u8 v[4];
    unk_38.func_020a7754(v);
    func_02066cf8(unk_24, v[0]);
}

void Unk_02069834::func_02069cd8() {
    Unk_020ddcf0 *o = unk_24->unk_13b0;
    func_020a7768(&unk_38);
    o->vfunc_1c(4);
}

void Unk_02069834::func_02069cfc() {
    Unk_020ddcf0 *o = unk_24->unk_13b0;
    func_020a7768(&unk_38);
    o->vfunc_1c(3);
}

void Unk_02069834::func_02069d20() {
    Unk_020ddcf0 *o = unk_24->unk_13b0;
    func_020a7768(&unk_38);
    o->vfunc_1c(2);
}

void Unk_02069834::func_02069d44() {
    Unk_020ddcf0 *o = unk_24->unk_13b0;
    func_020a7768(&unk_38);
    o->vfunc_1c(1);
}

void Unk_02069834::func_02069d68() {
    Unk_020ddcf0 *o = unk_24->unk_13b0;
    func_020a7768(&unk_38);
    o->vfunc_1c(0);
}

void Unk_02069834::func_02069d8c() {
    func_0200402c(8);
    func_0206755c(unk_24, 0x11000, 0xa66, 0xccc, 0x1000);
}

void Unk_02069834::func_02069dc0() {
    func_0200402c(7);
    func_0206755c(unk_24, 0xa000, 0x800, 0x800, 0x1333);
}

void Unk_02069834::func_02069df0() {
    func_0200402c(6);
    func_0206755c(unk_24, 0x6000, 0x666, 0x4cc, 0x1199);
}

void Unk_02069834::func_02069e24() {}

void Unk_02069834::func_02069e28() {
    u8 *base = unk_04;
    u8 *p = func_020a6c84(base, 1, 7);
    if (p != 0) {
        if (func_02066d04(unk_24) != 0) {
            func_020a8400(p - base);
            func_020a8348(unk_24->unk_19d0.vfunc_0c());
        }
    }
}

void Unk_02069834::func_02069e70() {
    func_020a7768(&unk_38);
    unk_4f = 0;
}

void Unk_02069834::func_02069e88() {
    func_020a7768(&unk_38);
    unk_4f = 1;
}

void Unk_02069834::func_02069ea0() {
    func_020a7768(&unk_38);
    unk_4e = 0;
    unk_24->unk_16f9 = 0;
}

void Unk_02069834::func_02069ec4() {
    func_020a7768(&unk_38);
    unk_4e = 1;
    unk_24->unk_16f9 = 1;
}

void Unk_02069834::func_02069ee8() {
    func_020a7768(&unk_38);
    unk_30 = 4;
}

void Unk_02069834::func_02069efc() {
    u16 v[2];
    unk_38.func_020a7634(v);
    unk_58 = v[0] << 12;
    unk_24->unk_16fa = 1;
}

void Unk_02069834::func_02069f28() { func_020a8348(func_0205023c()); }
void Unk_02069834::func_02069f40() { func_020a8348(func_02050234()); }
void Unk_02069834::func_02069f58() { func_020a8348(func_0205021c()); }
void Unk_02069834::func_02069f70() { func_020a8348(func_02050224()); }
void Unk_02069834::func_02069f88() { func_020a8348(func_0205022c()); }
void Unk_02069834::func_02069fa0() {}

typedef void (Unk_02069fa4::*Unk_02069fa4_Fn)();

void Unk_02069fa4::func_02069fa4() {
    static Unk_02069fa4_Fn tbl[3] = {&Unk_02069fa4::func_020689a0, 0, &Unk_02069fa4::func_02068950};
    Unk_02069fa4_Fn f = tbl[unk_3c];
    (this->*f)();
}

void Unk_02069fa4::func_0206a024() {
    static Unk_02069fa4_Fn tbl[20] = {
        &Unk_02069fa4::func_02069fa0,
        &Unk_02069fa4::func_02068b44,
        &Unk_02069fa4::func_02068b3c,
        &Unk_02069fa4::func_02068b34,
        &Unk_02069fa4::func_02068b2c,
        &Unk_02069fa4::func_02068b18,
        &Unk_02069fa4::func_02068b04,
        &Unk_02069fa4::func_02068af0,
        &Unk_02069fa4::func_02068adc,
        &Unk_02069fa4::func_02068ac8,
        &Unk_02069fa4::func_02068aac,
        &Unk_02069fa4::func_02068a90,
        &Unk_02069fa4::func_02068a74,
        &Unk_02069fa4::func_02068a58,
        &Unk_02069fa4::func_02068a3c,
        &Unk_02069fa4::func_02068a20,
        &Unk_02069fa4::func_02068a0c,
        &Unk_02069fa4::func_020689f8,
        &Unk_02069fa4::func_020689e4,
        &Unk_02069fa4::func_020689d0};
    Unk_02069fa4_Fn f = tbl[unk_3c];
    (this->*f)();
}
