#include "types.h"

// ---------------------------------------------------------------------------------------------------------------------
// Classes from other files (see unk_020a6914.cpp, unk_020a8c9c.cpp, unk_0206022c.cpp)

class Unk_020a72b0 {
public:
    void func_020a76bc(u8 *a, u8 *b, u8 *c, u8 *d);
    void func_020a76fc(u8 *a, u8 *b, u8 *c);
    void func_020a7730(u8 *a, u8 *b);
    u32 func_020a7388(u8 *a1, u8 *a2, u8 *a3, u8 *s0, u8 *s1, u8 *s2, u8 *s3, u8 *s4, class Unk_020e2a78 *s5,
                      class Unk_020e2a78 *s6);

    /* 0x00 */ s32 unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ u32 unk_08;
    /* 0x0c */ char *unk_0c;
    /* 0x10 */ u8 *unk_10;
};

class Unk_020e2a78;
class Unk_020e2c80;

class Unk_020aa72c {
public:
    u8 *func_020aa790();
    u8 *func_020aa79c();
};

class Unk_020aa3b8 {
public:
    void func_020aa4cc(s32 v);
    Unk_020e2c80 *func_020aa538();
    Unk_020e2c80 *func_020aa54c();
    Unk_020aa72c *func_020aa560(s32 i);
    void func_020aa5f4();
};

class Unk_020a8cf8 {
public:
    void func_020a8d3c();
    void func_020a8dc8(Unk_020aa3b8 *p);
};

class Unk_0206022c {
public:
    s32 func_020604c4();
};

class Unk_020e2b08 {
public:
    virtual ~Unk_020e2b08();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void vfunc_10(u32 c);
    virtual void vfunc_14(u8 *p);

    void func_020a8348(u8 *p);
    void func_020a83f4(u8 *p);
    void func_020a8400(s32 n);

    /* 0x04 */ u8 *unk_04;
    /* 0x08 */ u8 unk_08[0x1c];
};

// ---------------------------------------------------------------------------------------------------------------------

// Object with many virtuals reached through the owner at +0x24 (slot 0x0c returns text, 0x34 selects, 0x68 gets a record)
class Unk_02068f10_Obj {
public:
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
    virtual u8 *vfunc_0c();
    virtual void vfunc_10();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_1c();
    virtual void vfunc_20();
    virtual void vfunc_24();
    virtual void vfunc_28();
    virtual void vfunc_2c();
    virtual void vfunc_30();
    virtual void vfunc_34(s32 a, s32 b);
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
    virtual void vfunc_64();
    virtual void *vfunc_68();
};

extern "C" {
u32 func_0203c304();
u32 func_0203c2f4();
s32 func_0207bb7c(void *p);
s32 func_0209750c();
s32 func_0209888c();
s32 func_0209411c();
s32 func_0207f854(void *p, s32 v);
s32 func_02080dd8();
s32 func_02063b8c(s32 v);
BOOL func_02066e50(u8 *c);
BOOL func_02066d5c(u8 *c);
BOOL func_02066db0(u8 *c);
BOOL func_02066e04(u8 *c);
BOOL func_02066ea0(u8 *c);
BOOL func_02066f2c(u8 *c);
BOOL func_02066f98(u8 *c);
BOOL func_02066fe4(u8 *c);
BOOL func_020670a8(u8 *c);
void func_02067070(u8 *c);
Unk_02068f10_Obj *func_020675a8(u8 *c);
Unk_02068f10_Obj *func_020675d8(u8 *c);
Unk_02068f10_Obj *func_0206760c(u8 *c);
Unk_02068f10_Obj *func_02067648(u8 *c);
Unk_02068f10_Obj *func_0206766c(u8 *c);
Unk_02068f10_Obj *func_02067690(u8 *c);
Unk_02068f10_Obj *func_020676b4(u8 *c);
Unk_020aa3b8 *func_020679b4(u8 *c);
u8 *func_020a72a0(s32 i);
}

extern u8 data_021d7350[];
extern s32 data_020cbf90;
extern char data_020dde2c[];
extern char data_020dde38[];
extern char data_020dde40[];
extern char data_020dde4c[];
extern char data_020dde5c[];
extern char data_020dde64[];
extern char data_020dde74[];
extern char data_020dde84[];
extern char data_020dde94[];
extern char data_020ddea4[];
extern u8 data_021e58a8[];
extern u8 data_020cba1c[];

// Script command handlers: member functions reached through pointer tables at 0x020dd6b4..0x020ddbf8
class Unk_02068f10 : public Unk_020e2b08 {
public:
    void func_02068f10();
    void func_02068f9c();
    void func_02068ffc();
    void func_0206905c();
    void func_020690d0();
    void func_0206912c();
    void func_020691bc();
    void func_0206920c();
    void func_02069258();
    void func_02069360();
    void func_020693a0();
    void func_020693fc();
    void func_02069400();
    void func_0206945c();
    void func_0206949c();
    void func_020694a8();
    void func_020694b4();
    void func_020694c0();
    void func_020694cc();
    void func_020694d8();
    void func_020694e4();
    void func_020694f0();
    void func_020694fc();
    void func_02069508();
    void func_02069514();
    void func_02069520();
    void func_0206952c();
    void func_02069538();
    void func_02069544();
    void func_02069550();
    void func_020695bc();
    void func_02069618();
    void func_02069674();
    void func_020696d0();
    void func_020696f0();
    void func_02069710();
    void func_02069730();
    void func_02069750();
    void func_02069770();
    void func_02069790();
    void func_020697b0();
    void func_020697f4();

    void func_0206ac98(u8 *p);
    void func_0206ad58(s32 k);
    void func_0206adb8(s32 k);
    void func_0206afa0(s32 line, const char *file);

    /* 0x24 */ u8 *unk_24;
    /* 0x28 */ u32 unk_28;
    /* 0x2c */ u32 unk_2c;
    /* 0x30 */ s32 unk_30;
    /* 0x34 */ u32 unk_34;
    /* 0x38 */ Unk_020a72b0 unk_38;
    /* 0x4c */ u32 unk_4c;
    /* 0x50 */ u32 unk_50;
    /* 0x54 */ u32 unk_54;
    /* 0x58 */ u32 unk_58;
    /* 0x5c */ s32 unk_5c;
    /* 0x60 */ u8 unk_60[0xd8 - 0x60];
    /* 0xd8 */ u8 unk_d8;
};

static inline Unk_02068f10_Obj *Sel(u8 *ctx) { return *(Unk_02068f10_Obj **)(ctx + 0x13b0); }
static inline Unk_02068f10_Obj *At(u8 *ctx, u32 off) { return (Unk_02068f10_Obj *)(ctx + off); }


void Unk_02068f10::func_02068f10() {
    u8 r[5];
    Sel(unk_24)->vfunc_34(7, 4);
    unk_38.func_020a76bc(&r[1], &r[2], &r[3], &r[4]);
    u32 g = (u32)data_021d7350;
    s32 n;
    if (g != 0) n = func_0207bb7c((u8 *)g + 0x8a3c);
    else n = 0;
    s32 i;
    if (n <= data_020cbf90) i = 0;
    else if (n == data_020cbf90 + 1) i = 1;
    else if (n >= 8) i = 3;
    else i = 2;
    u8 *q = &r[1];
    r[0] = q[i];
    func_0206ac98(r);
}

void Unk_02068f10::func_02068f9c() {
    u8 r[4];
    Sel(unk_24)->vfunc_34(6, 3);
    unk_38.func_020a76fc(&r[1], &r[2], &r[3]);
    u32 t = func_0203c304();
    s32 i;
    if (t == 0x38) i = 2;
    else if (t >= 0x21) i = 1;
    else i = 0;
    u8 *q = &r[1];
    r[0] = q[i];
    func_0206ac98(r);
}

void Unk_02068f10::func_02068ffc() {
    u8 r[4];
    Sel(unk_24)->vfunc_34(5, 3);
    unk_38.func_020a76fc(&r[1], &r[2], &r[3]);
    u32 t = func_0203c2f4();
    s32 i;
    if (t == 0x38) i = 2;
    else if (t >= 0x21) i = 1;
    else i = 0;
    u8 *q = &r[1];
    r[0] = q[i];
    func_0206ac98(r);
}

void Unk_02068f10::func_0206905c() {
    u8 r[5];
    Sel(unk_24)->vfunc_34(4, 4);
    unk_38.func_020a76bc(&r[1], &r[2], &r[3], &r[4]);
    s32 t = ((Unk_0206022c *)data_021e58a8)->func_020604c4();
    s32 i;
    if (t == 0) i = 0;
    else if (t >= 1 && t <= 2) i = 1;
    else if (t == 3) i = 2;
    else i = 3;
    u8 *q = &r[1];
    r[0] = q[i];
    func_0206ac98(r);
}

void Unk_02068f10::func_020690d0() {
    u8 r[4];
    Sel(unk_24)->vfunc_34(3, 2);
    unk_38.func_020a7730(&r[1], &r[2]);
    func_0209750c();
    func_0209888c();
    s32 i;
    if (func_0209411c() != 0) i = 1;
    else i = 0;
    u8 *q = &r[1];
    r[0] = q[i];
    func_0206ac98(r);
}

void Unk_02068f10::func_0206912c() {
    u8 r[4];
    Unk_02068f10_Obj *o = Sel(unk_24);
    o->vfunc_34(2, 2);
    unk_38.func_020a76fc(&r[0], &r[2], &r[3]);
    s32 k = 0;
    void *p = o->vfunc_68();
    func_0209750c();
    if (p) {
        s32 v = func_0209888c();
        if (func_0207f854(p, v) != 0) {
            if (func_02080dd8() < r[0]) k = 1;
        }
    } else {
        func_0206afa0(0xd64, data_020dde2c);
    }
    u8 *q = &r[2];
    r[1] = q[k];
    func_0206ac98(&r[1]);
}

void Unk_02068f10::func_020691bc() {
    u8 r[4];
    Sel(unk_24)->vfunc_34(1, 3);
    unk_38.func_020a76fc(&r[1], &r[2], &r[3]);
    u8 *q = &r[1];
    r[0] = q[func_02063b8c(3)];
    func_0206ac98(r);
}

void Unk_02068f10::func_0206920c() {
    u8 r[4];
    Sel(unk_24)->vfunc_34(0, 2);
    unk_38.func_020a7730(&r[1], &r[2]);
    u8 *q = &r[1];
    r[0] = q[func_02063b8c(2)];
    func_0206ac98(r);
}

void Unk_02068f10::func_02069258() {
    if (unk_d8 != 0) {
        unk_d8 = 0;
        Unk_020aa3b8 *o = func_020679b4(unk_24);
        Unk_020aa72c *a = o->func_020aa560(0);
        Unk_020aa72c *b = o->func_020aa560(1);
        Unk_020aa72c *c = o->func_020aa560(2);
        Unk_020aa72c *d = o->func_020aa560(3);
        o->func_020aa5f4();
        u8 *a0 = a->func_020aa790();
        u8 *a1 = a->func_020aa79c();
        u8 *b0 = b->func_020aa790();
        u8 *b1 = b->func_020aa79c();
        u8 *c0 = c->func_020aa790();
        u8 *c1 = c->func_020aa79c();
        u8 *d0 = d->func_020aa790();
        u8 *d1 = d->func_020aa79c();
        Unk_020e2c80 *e0 = o->func_020aa54c();
        Unk_020e2c80 *e1 = o->func_020aa538();
        func_020a8400(unk_38.func_020a7388(a0, a1, b0, b1, c0, c1, d0, d1, (Unk_020e2a78 *)e0, (Unk_020e2a78 *)e1));
        o->func_020aa4cc(4);
        ((Unk_020a8cf8 *)(unk_24 + 0xb4))->func_020a8dc8(o);
        ((Unk_020a8cf8 *)(unk_24 + 0xb4))->func_020a8d3c();
        unk_30 = 5;
    } else {
        func_020a83f4((u8 *)unk_38.unk_10);
        unk_d8 = 1;
        func_020a8348(data_020cba1c);
    }
}

void Unk_02068f10::func_02069360() {
    if (!func_02066e50(unk_24)) func_0206afa0(0xcb5, data_020dde38);
    func_020a8348(At(unk_24, 0x1928)->vfunc_0c());
}

void Unk_02068f10::func_020693a0() {
    if (!func_02066d5c(unk_24)) func_0206afa0(0xca4, data_020dde40);
    func_020a8348(func_020a72a0(unk_5c));
    func_020a8348(At(unk_24, 0x19ac)->vfunc_0c());
    func_020a8348(func_020a72a0(2));
}

void Unk_02068f10::func_020693fc() {}

void Unk_02068f10::func_02069400() {
    if (!func_02066db0(unk_24)) func_0206afa0(0xc8b, data_020dde4c);
    func_020a8348(func_020a72a0(unk_5c));
    func_020a8348(At(unk_24, 0x1990)->vfunc_0c());
    func_020a8348(func_020a72a0(5));
}

void Unk_02068f10::func_0206945c() {
    if (!func_02066e04(unk_24)) func_0206afa0(0xc7d, data_020dde5c);
    func_020a8348(At(unk_24, 0x195c)->vfunc_0c());
}

void Unk_02068f10::func_0206949c() { func_0206ad58(3); }

void Unk_02068f10::func_020694a8() { func_0206ad58(2); }

void Unk_02068f10::func_020694b4() { func_0206ad58(1); }

void Unk_02068f10::func_020694c0() { func_0206ad58(0); }

void Unk_02068f10::func_020694cc() { func_0206adb8(10); }

void Unk_02068f10::func_020694d8() { func_0206adb8(9); }

void Unk_02068f10::func_020694e4() { func_0206adb8(8); }

void Unk_02068f10::func_020694f0() { func_0206adb8(7); }

void Unk_02068f10::func_020694fc() { func_0206adb8(6); }

void Unk_02068f10::func_02069508() { func_0206adb8(5); }

void Unk_02068f10::func_02069514() { func_0206adb8(4); }

void Unk_02068f10::func_02069520() { func_0206adb8(3); }

void Unk_02068f10::func_0206952c() { func_0206adb8(2); }

void Unk_02068f10::func_02069538() { func_0206adb8(1); }

void Unk_02068f10::func_02069544() { func_0206adb8(0); }

void Unk_02068f10::func_02069550() {
    if (!func_02066ea0(unk_24)) func_0206afa0(0xbee, data_020dde64);
    func_020a8348(func_020a72a0(unk_5c));
    func_020a8348(At(unk_24, 0x190c)->vfunc_0c());
    s32 k = 5;
    if (unk_24[0x19f6] != 0) k = 6;
    func_020a8348(func_020a72a0(k));
}

void Unk_02068f10::func_020695bc() {
    if (!func_02066f2c(unk_24)) func_0206afa0(0xbdd, data_020dde74);
    func_020a8348(func_020a72a0(unk_5c));
    func_020a8348(At(unk_24, 0x18f0)->vfunc_0c());
    func_020a8348(func_020a72a0(6));
}

void Unk_02068f10::func_02069618() {
    if (!func_02066f98(unk_24)) func_0206afa0(0xbcd, data_020dde84);
    func_020a8348(func_020a72a0(unk_5c));
    func_020a8348(At(unk_24, 0x18d4)->vfunc_0c());
    func_020a8348(func_020a72a0(6));
}

void Unk_02068f10::func_02069674() {
    if (!func_02066fe4(unk_24)) func_0206afa0(0xbbd, data_020dde94);
    func_020a8348(func_020a72a0(unk_5c));
    func_020a8348(At(unk_24, 0x18b8)->vfunc_0c());
    func_020a8348(func_020a72a0(6));
}

void Unk_02068f10::func_020696d0() { func_020a8348(func_020675a8(unk_24)->vfunc_0c()); }

void Unk_02068f10::func_020696f0() { func_020a8348(func_020675d8(unk_24)->vfunc_0c()); }

void Unk_02068f10::func_02069710() { func_020a8348(func_0206760c(unk_24)->vfunc_0c()); }

void Unk_02068f10::func_02069730() { func_020a8348(func_02067648(unk_24)->vfunc_0c()); }

void Unk_02068f10::func_02069750() { func_020a8348(func_0206766c(unk_24)->vfunc_0c()); }

void Unk_02068f10::func_02069770() { func_020a8348(func_02067690(unk_24)->vfunc_0c()); }

void Unk_02068f10::func_02069790() { func_020a8348(func_020676b4(unk_24)->vfunc_0c()); }

void Unk_02068f10::func_020697b0() {
    func_02067070(unk_24);
    func_020a8348(func_020a72a0(unk_5c));
    func_020a8348(At(unk_24, 0x1880)->vfunc_0c());
    func_020a8348(func_020a72a0(8));
}

void Unk_02068f10::func_020697f4() {
    if (!func_020670a8(unk_24)) func_0206afa0(0xb58, data_020ddea4);
    func_020a8348(At(unk_24, 0x1860)->vfunc_0c());
}
