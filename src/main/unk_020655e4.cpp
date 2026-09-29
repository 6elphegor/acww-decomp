#include "types.h"

class Unk_020dd458 {
public:
    virtual ~Unk_020dd458();

    /* 0x04 */ u8 unk_04[0x12];
    /* 0x16 */ u8 unk_16;
    /* 0x17 */ u8 pad_17;
};

class Unk_02065518 {
public:
    /* 0x00 */ u32 unk_00;
    /* 0x04 */ Unk_020dd458 unk_04;
    /* 0x1c */ Unk_020dd458 unk_1c;
    /* 0x34 */ u8 unk_34[0x18];
    /* 0x4c */ u8 unk_4c[0x80];
    /* 0xcc */ u8 unk_cc[0x20];
    /* 0xec */ u8 unk_ec;
    /* 0xed */ u8 unk_ed;
    /* 0xee */ u8 unk_ee;
    /* 0xef */ u8 unk_ef;
    /* 0xf0 */ u16 unk_f0;
    /* 0xf2 */ u16 pad_f2;
};

class Unk_020ddcf0 {
public:
    Unk_020ddcf0();
    virtual ~Unk_020ddcf0();
    virtual void vfunc_08();
    virtual const char *vfunc_0c();
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
    virtual void vfunc_38(u32 a);
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
    virtual u32 vfunc_68();
    virtual s32 vfunc_6c();
    virtual void vfunc_70();
    virtual void vfunc_74();

    void func_02065e88();
    void func_02065e90(u32 v);
    u32 func_02065f04();
    u32 func_02065f08();
    void *func_02065f10();

    /* 0x04 */ u32 unk_04[0x38 / 4];
    /* 0x3c */ u32 unk_3c;
    /* 0x40 */ u8 unk_40;
};

extern "C" {
void func_02003130(void *);
void func_02003100(void *);
void func_020942f8(void *);
void func_020942c8(void *);
void func_02094030(void *);
void func_02094018(void *);
void func_02093fd8(void *);
void func_02093fc0(void *);
void func_0206fcc8(void *);
void func_0206fca8(void *);
void func_0206f874(void *);
void func_0206f85c(void *);
void func_02065370(void *);
void func_02065358(void *);
}

struct Unk_02065d5c_Str {
    u32 v[3];
    Unk_02065d5c_Str() { func_02003130(this); }
    ~Unk_02065d5c_Str() { func_02003100(this); }
};
struct Unk_02065d5c_Buf18 {
    u32 v[6];
    Unk_02065d5c_Buf18() { func_020942f8(this); }
    ~Unk_02065d5c_Buf18() { func_020942c8(this); }
};
struct Unk_02065dc8_Obj1c {
    u32 v[7];
    Unk_02065dc8_Obj1c() { func_02094030(this); }
    ~Unk_02065dc8_Obj1c() { func_02094018(this); }
};
struct Unk_02065dc8_Obj18 {
    u32 v[6];
    Unk_02065dc8_Obj18() { func_02093fd8(this); }
    ~Unk_02065dc8_Obj18() { func_02093fc0(this); }
};
struct Unk_02065dc8_Obj44 {
    u32 v[0x11];
    Unk_02065dc8_Obj44() { func_0206fcc8(this); }
    ~Unk_02065dc8_Obj44() { func_0206fca8(this); }
};
struct Unk_02065a1c_Str {
    u8 pad[0xe];
    char text[0x2a];
    Unk_02065a1c_Str() { func_0206f874(this); }
    ~Unk_02065a1c_Str() { func_0206f85c(this); }
};
struct Unk_02065a1c_Static {
    u8 pad[0xe];
    char text[0x2a];
    Unk_02065a1c_Static() { func_02065370(this); }
    ~Unk_02065a1c_Static() { func_02065358(this); }
};

extern "C" {
extern u8 data_021c9fa4[];
extern u8 data_021ca094[];
extern u8 data_021c9fd0[];
extern char data_020ddd68[];
extern u8 data_021d735c[];
extern u8 data_021dfd8c[];

void *func_02115fb4(void *dst, u32 v, u32 n);
void *func_02116048(const void *src, void *dst, u32 n);
void func_02051268(const void *src, void *dst, u32 n);
s32 func_0203cfb8(void *a, void *b, void *c, void *d, void *e, void *f);
s32 func_0203cebc(void *a, void *b, void *c, void *d, void *e1, void *e2, void *e3, void *e4, void *name);
void func_0203ce4c(s32 i, void *x);
void func_02002fc8(void *o, void *x);
void func_0200315c(void *o, void *x);
void func_02094264(void *o, void *x);
void func_020940d0(void *o, void *x);
void func_02094238(void *src, void *dst);
void func_02003140(void *src, void *dst);
void func_020030d8(void *o, void *x);
void func_020a77f8(void *o, void *x);
void func_02093f90(void *o, void *x, u32 n);
void func_020942b8(void *o, void *x);
void func_0206f9fc(void *o, u32 x);
void func_0206f964(void *o, void *x);
void func_02050fd0(void *o);
void func_02135558(void *obj, void *dtor, void *cookie);
void *func_0209750c();
void *func_0209888c(void *);
void *func_02098750(void *);
u8 *func_02097e00(void *);
void *func_02097868(void *);
void *func_0207bf60(void *);
void *func_020805c4(void *);
void func_020653cc(void *a, void *b, void *c, u32 d);
void func_020654c8(void *a, void *b);
void func_02065518(Unk_02065518 *self);
u32 func_02065564(Unk_02065518 *self, u32 v);
u32 func_02065578(Unk_02065518 *self);
void func_020655ac(Unk_02065518 *self, u32 v);
void func_02065a1c(Unk_02065518 *self, s32 *pv, void *a, void *b, void *c);
void func_0206567c(Unk_02065518 *self, void *a, void *b, void *c, s32 v);
void func_02065724(Unk_02065518 *self, void *a, void *b, void *c, s32 v, u8 *pef, u8 *ped, void *obj);
void func_02065818(Unk_02065518 *self, void *a, void *b, void *c, s32 v, u8 *ped, void *s1, void *s2);
void func_0206598c(Unk_02065518 *self, void *a, void *b, void *c, s32 v, u8 *ped, void *s1, void *s2);
void func_02065c94(Unk_02065518 *self);
void func_02065c34(Unk_02065518 *self, u32 v);
void func_02065cf0(Unk_020dd458 *self, u32 v);
void func_02065cf4(Unk_020dd458 *self);
void func_02065cfc(Unk_020dd458 *self, void *src);
void func_02065d10(Unk_020dd458 *self, void *src);
void func_02065d24(Unk_020dd458 *self, void *src);
void func_020657a0(Unk_02065518 *self, void *a1, void *a2, void *a3, void *a4, void *a5, u8 *a6, void *a7, void *a8, s32 a9);
void func_020658a8(Unk_02065518 *self, void *a1, void *a2, void *a3, void *a4, void *a5, u8 *a6, void *a7, void *a8, s32 a9);
void func_02065920(Unk_02065518 *self, void *a1, void *a2, void *a3, void *a4, void *a5, s32 a6);
Unk_020dd458 *func_02065d38(Unk_020dd458 *self);
Unk_020dd458 *func_02065d48(Unk_020dd458 *self);
void func_02065d5c(Unk_020dd458 *self, void *out);
void func_02065dc8(Unk_020dd458 *self, void *out);
}

// ---- free functions
extern "C" void func_020655e4(Unk_02065518 *self, void *out) { func_02065d5c(&self->unk_04, out); }
extern "C" void func_020655f0(Unk_02065518 *self, void *out) { func_02065d5c(&self->unk_1c, out); }
extern "C" u32 func_020655fc(Unk_02065518 *self) { return self->unk_ef; }
extern "C" void func_02065604(Unk_02065518 *self, void *out) { func_02065dc8(&self->unk_04, out); }
extern "C" void func_02065610(Unk_02065518 *self, void *out) { func_02065dc8(&self->unk_1c, out); }
extern "C" Unk_020dd458 *func_0206561c(Unk_02065518 *self) { return func_02065d38(&self->unk_04); }
extern "C" Unk_020dd458 *func_02065628(Unk_02065518 *self) { return func_02065d48(&self->unk_04); }
extern "C" Unk_020dd458 *func_02065634(Unk_02065518 *self) { return func_02065d48(&self->unk_1c); }

extern "C" void func_02065640(Unk_02065518 *self, void *a, void *b) {
    u32 out;
    func_0203cfb8(data_021c9fa4, data_021ca094, data_021c9fd0, &out, a, b);
    func_0206567c(self, data_021c9fa4, data_021ca094, data_021c9fd0, out);
}

extern "C" void func_0206567c(Unk_02065518 *self, void *a, void *b, void *c, s32 v) {
    func_02065c94(self);
    self->unk_ed = 0xc;
    func_02065564(self, 5);
    func_02065cf0(&self->unk_1c, 4);
    func_02065cf4(&self->unk_04);
    if (v < 0) {
        func_02065cf0(&self->unk_04, 6);
        v = 0;
    }
    self->unk_ef = 0xc;
    func_02065a1c(self, &v, a, b, c);
}

extern "C" void func_020656dc(Unk_02065518 *self, void *a, void *b, u8 *pef, u8 *ped, void *obj) {
    u32 out;
    func_0203cfb8(data_021c9fa4, data_021ca094, data_021c9fd0, &out, a, b);
    func_02065724(self, data_021c9fa4, data_021ca094, data_021c9fd0, out, pef, ped, obj);
}

extern "C" void func_02065724(Unk_02065518 *self, void *a, void *b, void *c, s32 v, u8 *pef, u8 *ped, void *obj) {
    Unk_02065d5c_Buf18 tmp;
    func_020942b8(&tmp, obj);
    func_02065c94(self);
    self->unk_ed = *ped;
    self->unk_ef = *pef;
    func_02065cf0(&self->unk_1c, 4);
    func_02065d10(&self->unk_04, &tmp);
    if (v < 0) {
        func_02065cf0(&self->unk_04, 6);
        v = 0;
    }
    func_02065564(self, 2);
    func_02065a1c(self, &v, a, b, c);
}

extern "C" void func_020657a0(Unk_02065518 *self, void *a1, void *a2, void *a3, void *a4, void *a5, u8 *a6, void *a7, void *a8, s32 a9) {
    u32 out;
    if (a9 != 0xb) {
        Unk_02065dc8_Obj1c o;
        func_02002fc8(a7, &o);
        func_0203ce4c(a9, &o);
    }
    func_0203cebc(data_021c9fa4, data_021ca094, data_021c9fd0, &out, a1, a2, a3, a4, a5);
    func_02065818(self, data_021c9fa4, data_021ca094, data_021c9fd0, out, a6, a7, a8);
}

extern "C" void func_02065818(Unk_02065518 *self, void *a, void *b, void *c, s32 v, u8 *ped, void *s1, void *s2) {
    Unk_02065d5c_Str l1;
    Unk_02065d5c_Str l2;
    func_020030d8(&l1, s1);
    func_020030d8(&l2, s2);
    func_02065c94(self);
    self->unk_ed = *ped;
    self->unk_ef = 0;
    func_02065d24(&self->unk_1c, &l1);
    func_02065d24(&self->unk_04, &l2);
    if (v < 0) {
        func_02065cf0(&self->unk_04, 5);
        v = 0;
    }
    func_02065564(self, 7);
    func_02065a1c(self, &v, a, b, c);
}

extern "C" void func_020658a8(Unk_02065518 *self, void *a1, void *a2, void *a3, void *a4, void *a5, u8 *a6, void *a7, void *a8, s32 a9) {
    u32 out;
    if (a9 != 0xb) {
        Unk_02065dc8_Obj1c o;
        func_02002fc8(a7, &o);
        func_0203ce4c(a9, &o);
    }
    func_0203cebc(data_021c9fa4, data_021ca094, data_021c9fd0, &out, a1, a2, a3, a4, a5);
    func_0206598c(self, data_021c9fa4, data_021ca094, data_021c9fd0, out, a6, a7, a8);
}

extern "C" void func_02065920(Unk_02065518 *self, void *a1, void *a2, void *a3, void *a4, void *a5, s32 a6) {
    u32 out;
    if (a6 != 0xb) {
        Unk_02065dc8_Obj1c o;
        func_02002fc8(a4, &o);
        func_0203ce4c(a6, &o);
    }
    func_0203cfb8(data_021c9fa4, data_021ca094, data_021c9fd0, &out, a1, a2);
    func_0206598c(self, data_021c9fa4, data_021ca094, data_021c9fd0, out, (u8 *)a3, a4, a5);
}

extern "C" void func_0206598c(Unk_02065518 *self, void *a, void *b, void *c, s32 v, u8 *ped, void *s1, void *s2) {
    Unk_02065d5c_Str l1;
    Unk_02065d5c_Buf18 l2;
    func_020030d8(&l1, s1);
    func_020942b8(&l2, s2);
    func_02065c94(self);
    self->unk_ed = *ped;
    self->unk_ef = 0;
    func_02065d24(&self->unk_1c, &l1);
    func_02065d10(&self->unk_04, &l2);
    if (v < 0) {
        func_02065cf0(&self->unk_04, 5);
        v = 0;
    }
    func_02065564(self, 2);
    func_02065a1c(self, &v, a, b, c);
}

extern "C" void func_02065a1c(Unk_02065518 *self, s32 *pv, void *a, void *b, void *c) {
    self->unk_ec = *pv;
    Unk_02065a1c_Str l;
    func_020a77f8(&l, a);
    func_02051268(l.text, self->unk_34, 0x18);
    static Unk_02065a1c_Static s;
    func_02050fd0(&s);
    func_020a77f8(&s, b);
    func_02051268(s.text, self->unk_4c, 0x80);
    func_020a77f8(&l, c);
    func_02051268(l.text, self->unk_cc, 0x20);
}

extern "C" void func_02065ac0(Unk_02065518 *self) {
    func_02065564(self, 2);
    self->unk_ef = 0x11;
    if (self->unk_f0 != 0xfff1) {
        func_020655ac(self, 1);
    }
}

extern "C" void func_02065af0(Unk_02065518 *self) {
    switch (func_02065578(self)) {
    case 2:
        func_02065564(self, 3);
        break;
    case 5:
        func_02065564(self, 6);
        break;
    case 7:
        func_02065564(self, 8);
        break;
    }
}

extern "C" void func_02065b28(Unk_02065518 *self) {
    switch (func_02065578(self)) {
    case 1:
        func_02065564(self, 2);
        break;
    case 4:
        func_02065564(self, 5);
        break;
    default:
        return;
    }
    func_020655ac(self, 1);
}

extern "C" void func_02065b5c(Unk_02065518 *self) {
    void *a = func_0209750c();
    void *b = func_0209888c(a);
    if (self->unk_04.unk_16 != 1) {
        u8 *c = func_02097e00(func_02098750(a));
        func_02051268(c + 0x18, self->unk_34, 0x18);
        self->unk_ec = c[0x51];
    }
    func_02065cfc(&self->unk_04, b);
}

extern "C" void func_02065ba4(Unk_02065518 *self) {
    void *r = func_0209888c(func_02097868(data_021d735c));
    func_02065518(self);
    func_02065d10(&self->unk_04, r);
}

extern "C" void func_02065bd0(Unk_02065518 *self) {
    void *r = func_020805c4(func_0207bf60(data_021dfd8c));
    func_02065518(self);
    func_02065d24(&self->unk_04, r);
}

extern "C" void func_02065bfc(Unk_02065518 *self) {
    u8 c;
    func_02065c34(self, 0xc);
    func_02065564(self, 4);
    func_02065cf4(&self->unk_04);
    c = 0x23;
    func_020653cc(&c, self->unk_34, &self->unk_ec, 0);
}

extern "C" void func_02065c34(Unk_02065518 *self, u32 v) {
    void *r = func_0209750c();
    func_02065c94(self);
    self->unk_ed = v;
    self->unk_ef = 0;
    self->unk_1c.unk_16 = 2;
    func_02094238(func_0209888c(r), &self->unk_1c);
    func_02065564(self, 1);
    func_020654c8(self, func_02097e00(func_02098750(r)) + 0x30);
}

extern "C" u32 func_02065c8c(Unk_02065518 *self) { return self->unk_ed; }

extern "C" void func_02065c94(Unk_02065518 *self) {
    func_02115fb4(self, 0, 0xf4);
    self->unk_f0 = 0xfff1;
}

Unk_020dd458::~Unk_020dd458() {}

extern "C" u32 func_02065ce0(Unk_020dd458 *self, u32 t) {
    if (self->unk_16 == t) return TRUE;
    return FALSE;
}
extern "C" void func_02065cf0(Unk_020dd458 *self, u32 v) { self->unk_16 = v; }
extern "C" void func_02065cf4(Unk_020dd458 *self) { self->unk_16 = 7; }
extern "C" void func_02065cfc(Unk_020dd458 *self, void *src) {
    self->unk_16 = 1;
    func_02094238(src, self);
}
extern "C" void func_02065d10(Unk_020dd458 *self, void *src) {
    self->unk_16 = 2;
    func_02094238(src, self);
}
extern "C" void func_02065d24(Unk_020dd458 *self, void *src) {
    self->unk_16 = 3;
    func_02003140(src, self);
}
extern "C" Unk_020dd458 *func_02065d38(Unk_020dd458 *self) {
    if (self->unk_16 != 3 && self->unk_16 != 5) return 0;
    return self;
}
extern "C" Unk_020dd458 *func_02065d48(Unk_020dd458 *self) {
    if (self->unk_16 != 1 && self->unk_16 != 2 && self->unk_16 != 6) return 0;
    return self;
}

extern "C" void func_02065d5c(Unk_020dd458 *self, void *out) {
    Unk_02065d5c_Str a;
    Unk_02065d5c_Buf18 b;
    switch (self->unk_16) {
    case 0:
    case 4:
        break;
    case 1:
    case 2:
    case 6:
        func_02094264(&b, self);
        func_020940d0(&b, out);
        break;
    case 3:
    case 5:
        func_0200315c(&a, self);
        func_02002fc8(&a, out);
        break;
    }
}

extern "C" void func_02065dc8(Unk_020dd458 *self, void *out) {
    Unk_02065dc8_Obj1c a;
    Unk_02065dc8_Obj18 b;
    Unk_02065d5c_Str c;
    Unk_02065dc8_Obj44 d;
    switch (self->unk_16) {
    case 0:
    case 4:
    case 5:
    case 6:
        break;
    case 1:
    case 2:
        func_02051268((u8 *)self + 0xc, out, 8);
        break;
    case 3:
        func_0200315c(&c, self);
        func_02002fc8(&c, &a);
        func_020a77f8(&b, &a);
        func_02093f90(&b, out, 8);
        break;
    case 7:
        func_0206f9fc(&d, 0x43);
        func_0206f964(&d, out);
        break;
    }
}

extern "C" Unk_02065518 *func_02065e70(Unk_02065518 *self, const Unk_02065518 *src) {
    func_02116048(src, self, 0xf4);
    return self;
}

void Unk_020ddcf0::func_02065e88() { unk_3c = 0; }
void Unk_020ddcf0::func_02065e90(u32 v) { unk_3c = v; }
void Unk_020ddcf0::vfunc_70() {}
void Unk_020ddcf0::vfunc_74() {}
s32 Unk_020ddcf0::vfunc_6c() { return 5; }
u32 Unk_020ddcf0::vfunc_68() { return 0; }
void Unk_020ddcf0::vfunc_64() {}
void Unk_020ddcf0::vfunc_60() {}
void Unk_020ddcf0::vfunc_5c() {}
void Unk_020ddcf0::vfunc_58() {}
void Unk_020ddcf0::vfunc_54() {}
void Unk_020ddcf0::vfunc_50() {}
void Unk_020ddcf0::vfunc_4c() {}
void Unk_020ddcf0::vfunc_48() {}
void Unk_020ddcf0::vfunc_44() {}
void Unk_020ddcf0::vfunc_40() {}
void Unk_020ddcf0::vfunc_3c() {}
void Unk_020ddcf0::vfunc_38(u32 a) {}
void Unk_020ddcf0::vfunc_34() {}
void Unk_020ddcf0::vfunc_30() {}
void Unk_020ddcf0::vfunc_2c() {}
void Unk_020ddcf0::vfunc_28() {}
void Unk_020ddcf0::vfunc_24() {}
void Unk_020ddcf0::vfunc_20() {}
void Unk_020ddcf0::vfunc_1c() {}
void Unk_020ddcf0::vfunc_18() {}
void Unk_020ddcf0::vfunc_14() {}
void Unk_020ddcf0::vfunc_10() {}
const char *Unk_020ddcf0::vfunc_0c() { return data_020ddd68; }
u32 Unk_020ddcf0::func_02065f04() { return unk_04[(0x2c - 4) / 4]; }
u32 Unk_020ddcf0::func_02065f08() { return unk_40; }
void *Unk_020ddcf0::func_02065f10() { return &unk_04[(0x20 - 4) / 4]; }
