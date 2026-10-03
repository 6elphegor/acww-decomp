#include "types.h"

// Base of the destructor-registered buffers (defined elsewhere).
class EncodedString {
public:
    EncodedString();
    virtual ~EncodedString();
    virtual u32 vfunc_08() = 0;
    virtual u8 *vfunc_0c() = 0;
};

class Unk_020dd468 : public EncodedString {
public:
    Unk_020dd468();
    virtual ~Unk_020dd468();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();

    /* 0x04 */ u8 unk_04[0xa];
    /* 0x0e */ u8 text[0x82];
};

class Letter {
public:
    Letter();
    virtual ~Letter();

    /* 0x04 */ u8 unk_04[0x12];
    /* 0x16 */ u8 unk_16;
    /* 0x17 */ u8 pad_17;
};

// Classes of other units (constructed by this unit's __sinit).
class Unk_020ddf2c {
public:
    Unk_020ddf2c();
    virtual ~Unk_020ddf2c();
    /* 0x04 */ u8 unk_04[0x28];
};

class Unk_020ddf14 {
public:
    Unk_020ddf14();
    virtual ~Unk_020ddf14();
    /* 0x04 */ u8 unk_04[0x30];
};

class Unk_020ddefc {
public:
    Unk_020ddefc();
    virtual ~Unk_020ddefc();
    /* 0x04 */ u8 unk_04[0x90];
};

// Object with the byte/halfword state accessed by func_02065554 and friends.
class Unk_02065554 {
public:
    void func_02065518();
    BOOL func_02065554();
    void func_02065564(u32 v);
    u8 func_02065578();
    u32 func_02065588(u16 v, u32 w);
    void func_020655ac(u32 v);
    u8 func_020655c0();
    u16 func_020655d0();

    /* 0x00 */ u32 unk_00;
    /* 0x04 */ Letter unk_04;
    /* 0x1c */ Letter unk_1c;
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

// Object filled by func_02065388 (0x52 bytes).
struct Unk_02065388_Obj {
    /* 0x00 */ u8 unk_00[0x18];
    /* 0x18 */ u8 unk_18[0x18];
    /* 0x30 */ u8 unk_30[0x20];
    /* 0x50 */ u8 unk_50;
    /* 0x51 */ u8 unk_51;
};

struct Unk_020653cc_Buf {
    /* 0x00 */ u32 unk_00[3];
    /* 0x0c */ u8 unk_0c[2];
    /* 0x0e */ u8 unk_0e[0x2e];
};

extern "C" {
void func_02003130(void *);
void func_02003100(void *);
void _ZN8PlayerIdC1EPv(void *);
void _ZN8PlayerIdC1Ev(void *);
void _ZN12Unk_020e1c64C1Ev(void *);
void _ZN12Unk_020e1c64D1Ev(void *);
void _ZN12Unk_020e1c4cC1Ev(void *);
void _ZN12Unk_020e1c4cD1Ev(void *);
void _ZN12Unk_020e0488C1Ev(void *);
void _ZN12Unk_020e0488D1Ev(void *);
void _ZN12Unk_020e0470C1Ev(void *);
void _ZN12Unk_020e0470D1Ev(void *);
}

struct Unk_02065d5c_Str {
    u32 v[3];
    Unk_02065d5c_Str() { func_02003130(this); }
    ~Unk_02065d5c_Str() { func_02003100(this); }
};
struct Unk_02065d5c_Buf18 {
    u32 v[6];
    Unk_02065d5c_Buf18() { _ZN8PlayerIdC1EPv(this); }
    ~Unk_02065d5c_Buf18() { _ZN8PlayerIdC1Ev(this); }
};
struct Unk_02065dc8_Obj1c {
    u32 v[7];
    Unk_02065dc8_Obj1c() { _ZN12Unk_020e1c64C1Ev(this); }
    ~Unk_02065dc8_Obj1c() { _ZN12Unk_020e1c64D1Ev(this); }
};
struct Unk_02065dc8_Obj18 {
    u32 v[6];
    Unk_02065dc8_Obj18() { _ZN12Unk_020e1c4cC1Ev(this); }
    ~Unk_02065dc8_Obj18() { _ZN12Unk_020e1c4cD1Ev(this); }
};
struct Unk_02065dc8_Obj44 {
    u32 v[0x11];
    Unk_02065dc8_Obj44() { _ZN12Unk_020e0488C1Ev(this); }
    ~Unk_02065dc8_Obj44() { _ZN12Unk_020e0488D1Ev(this); }
};
struct Unk_02065a1c_Str {
    u8 pad[0xe];
    char text[0x2a];
    Unk_02065a1c_Str() { _ZN12Unk_020e0470C1Ev(this); }
    ~Unk_02065a1c_Str() { _ZN12Unk_020e0470D1Ev(this); }
};

extern Unk_020ddf2c data_021c9fa4;
extern Unk_020ddefc data_021ca094;
extern Unk_020ddf14 data_021c9fd0;
extern u8 data_021d735c[];
extern u8 data_021dfd8c[];

extern "C" {
void *MI_CpuFill8(void *dst, u32 v, u32 n);
void *MI_CpuCopy8(const void *src, void *dst, u32 n);
void Mem_Copy(const void *src, void *dst, u32 n);
void Mem_Clear(void *p, s32 n);
s32 func_02051320(void *p, s32 n, s32 z);
s32 func_020512e0(void *p, s32 n);
s32 MailText_LoadLetter(void *a, void *b, void *c, void *d, void *e, void *f);
s32 MailText_LoadLetterZ(void *a, void *b, void *c, void *d, void *e1, void *e2, void *e3, void *e4, void *name);
void MailText_SetSlot(s32 i, void *x);
void _ZN12Unk_02002fc813func_02002fc8Ej(void *o, void *x);
void func_0200315c(void *o, void *x);
void _ZN8PlayerId13func_02094264EPS_(void *o, void *x);
void _ZN8PlayerId13func_020940d0EP9MsgString(void *o, void *x);
void _ZN8PlayerId13func_02094238EPS_(void *src, void *dst);
void func_02003140(void *src, void *dst);
void func_020030d8(void *o, void *x);
void _ZN13EncodedString13fromMsgStringEP9MsgString(void *o, void *x);
void _ZN12Unk_020e1c4c13func_02093f90EPvj(void *o, void *x, u32 n);
void _ZN8PlayerId13func_020942b8EPv(void *o, void *x);
void func_0206f9fc(void *o, u32 x);
void func_0206f964(void *o, void *x);
void StrBuf_ClearAlt(void *o);
void String_Load2d(void *dst, void *code, void *z);
void *PlayerData_GetCurrent();
void *_ZN10PlayerData11getPlayerIdEv(void *);
void *_ZN10PlayerData13func_02098750Ev(void *);
u8 *_ZN15PlayerInventory9getUnk988Ev(void *);
void *PlayerData_GetResident(void *);
void *func_0207bf60(void *);
void *_ZN12VillagerData13func_020805c4Ev(void *);

void func_02065388(Unk_02065388_Obj *o);
void func_020653cc(u8 *code, u8 *dst, u8 *lenOut, u8 *extra);
void func_02065470(Unk_02065388_Obj *a, Unk_02065554 *b);
void func_020654c8(Unk_02065554 *o, u8 *p);
u32 func_020655d8(Unk_02065554 *self);
void func_02065610(Unk_02065554 *self, void *out);
void func_02065a1c(Unk_02065554 *self, s32 *pv, void *a, void *b, void *c);
void func_0206567c(Unk_02065554 *self, void *a, void *b, void *c, s32 v);
void func_02065724(Unk_02065554 *self, void *a, void *b, void *c, s32 v, u8 *pef, u8 *ped, void *obj);
void func_02065818(Unk_02065554 *self, void *a, void *b, void *c, s32 v, u8 *ped, void *s1, void *s2);
void func_0206598c(Unk_02065554 *self, void *a, void *b, void *c, s32 v, u8 *ped, void *s1, void *s2);
void func_02065c94(Unk_02065554 *self);
void func_02065c34(Unk_02065554 *self, u32 v);
u32 func_02065ce0(Letter *self, u32 t);
void func_02065cf0(Letter *self, u32 v);
void func_02065cf4(Letter *self);
void func_02065cfc(Letter *self, void *src);
void func_02065d10(Letter *self, void *src);
void func_02065d24(Letter *self, void *src);
Letter *func_02065d38(Letter *self);
Letter *func_02065d48(Letter *self);
void func_02065d5c(Letter *self, void *out);
void func_02065dc8(Letter *self, void *out);
}

extern "C" Unk_02065554 *func_02065e70(Unk_02065554 *self, const Unk_02065554 *src) {
    MI_CpuCopy8(src, self, 0xf4);
    return self;
}

extern "C" void func_02065dc8(Letter *self, void *out) {
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
        Mem_Copy((u8 *)self + 0xc, out, 8);
        break;
    case 3:
        func_0200315c(&c, self);
        _ZN12Unk_02002fc813func_02002fc8Ej(&c, &a);
        _ZN13EncodedString13fromMsgStringEP9MsgString(&b, &a);
        _ZN12Unk_020e1c4c13func_02093f90EPvj(&b, out, 8);
        break;
    case 7:
        func_0206f9fc(&d, 0x43);
        func_0206f964(&d, out);
        break;
    }
}

extern "C" void func_02065d5c(Letter *self, void *out) {
    Unk_02065d5c_Str a;
    Unk_02065d5c_Buf18 b;
    switch (self->unk_16) {
    case 0:
    case 4:
        break;
    case 1:
    case 2:
    case 6:
        _ZN8PlayerId13func_02094264EPS_(&b, self);
        _ZN8PlayerId13func_020940d0EP9MsgString(&b, out);
        break;
    case 3:
    case 5:
        func_0200315c(&a, self);
        _ZN12Unk_02002fc813func_02002fc8Ej(&a, out);
        break;
    }
}

extern "C" Letter *func_02065d48(Letter *self) {
    if (self->unk_16 != 1 && self->unk_16 != 2 && self->unk_16 != 6) return 0;
    return self;
}

extern "C" Letter *func_02065d38(Letter *self) {
    if (self->unk_16 != 3 && self->unk_16 != 5) return 0;
    return self;
}

extern "C" void func_02065d24(Letter *self, void *src) {
    self->unk_16 = 3;
    func_02003140(src, self);
}

extern "C" void func_02065d10(Letter *self, void *src) {
    self->unk_16 = 2;
    _ZN8PlayerId13func_02094238EPS_(src, self);
}

extern "C" void func_02065cfc(Letter *self, void *src) {
    self->unk_16 = 1;
    _ZN8PlayerId13func_02094238EPS_(src, self);
}

extern "C" void func_02065cf4(Letter *self) { self->unk_16 = 7; }

extern "C" void func_02065cf0(Letter *self, u32 v) { self->unk_16 = v; }

extern "C" u32 func_02065ce0(Letter *self, u32 t) {
    if (self->unk_16 == t) return TRUE;
    return FALSE;
}

Letter::Letter() {}

Letter::~Letter() {}

extern "C" void func_02065c94(Unk_02065554 *self) {
    MI_CpuFill8(self, 0, 0xf4);
    self->unk_f0 = 0xfff1;
}

extern "C" u32 func_02065c8c(Unk_02065554 *self) { return self->unk_ed; }

extern "C" void func_02065c34(Unk_02065554 *self, u32 v) {
    void *r = PlayerData_GetCurrent();
    func_02065c94(self);
    self->unk_ed = v;
    self->unk_ef = 0;
    self->unk_1c.unk_16 = 2;
    _ZN8PlayerId13func_02094238EPS_(_ZN10PlayerData11getPlayerIdEv(r), &self->unk_1c);
    self->func_02065564(1);
    func_020654c8(self, _ZN15PlayerInventory9getUnk988Ev(_ZN10PlayerData13func_02098750Ev(r)) + 0x30);
}

extern "C" void func_02065bfc(Unk_02065554 *self) {
    u8 c;
    func_02065c34(self, 0xc);
    self->func_02065564(4);
    func_02065cf4(&self->unk_04);
    c = 0x23;
    func_020653cc(&c, self->unk_34, &self->unk_ec, 0);
}

extern "C" void func_02065bd0(Unk_02065554 *self) {
    void *r = _ZN12VillagerData13func_020805c4Ev(func_0207bf60(data_021dfd8c));
    self->func_02065518();
    func_02065d24(&self->unk_04, r);
}

extern "C" void func_02065ba4(Unk_02065554 *self) {
    void *r = _ZN10PlayerData11getPlayerIdEv(PlayerData_GetResident(data_021d735c));
    self->func_02065518();
    func_02065d10(&self->unk_04, r);
}

extern "C" void func_02065b5c(Unk_02065554 *self) {
    void *a = PlayerData_GetCurrent();
    void *b = _ZN10PlayerData11getPlayerIdEv(a);
    if (self->unk_04.unk_16 != 1) {
        u8 *c = _ZN15PlayerInventory9getUnk988Ev(_ZN10PlayerData13func_02098750Ev(a));
        Mem_Copy(c + 0x18, self->unk_34, 0x18);
        self->unk_ec = c[0x51];
    }
    func_02065cfc(&self->unk_04, b);
}

extern "C" void func_02065b28(Unk_02065554 *self) {
    switch (self->func_02065578()) {
    case 1:
        self->func_02065564(2);
        break;
    case 4:
        self->func_02065564(5);
        break;
    default:
        return;
    }
    self->func_020655ac(1);
}

extern "C" void func_02065af0(Unk_02065554 *self) {
    switch (self->func_02065578()) {
    case 2:
        self->func_02065564(3);
        break;
    case 5:
        self->func_02065564(6);
        break;
    case 7:
        self->func_02065564(8);
        break;
    }
}

extern "C" void func_02065ac0(Unk_02065554 *self) {
    self->func_02065564(2);
    self->unk_ef = 0x11;
    if (self->unk_f0 != 0xfff1) {
        self->func_020655ac(1);
    }
}

extern "C" void func_02065a1c(Unk_02065554 *self, s32 *pv, void *a, void *b, void *c) {
    self->unk_ec = *pv;
    Unk_02065a1c_Str l;
    _ZN13EncodedString13fromMsgStringEP9MsgString(&l, a);
    Mem_Copy(l.text, self->unk_34, 0x18);
    static Unk_020dd468 s;
    StrBuf_ClearAlt(&s);
    _ZN13EncodedString13fromMsgStringEP9MsgString(&s, b);
    Mem_Copy(s.text, self->unk_4c, 0x80);
    _ZN13EncodedString13fromMsgStringEP9MsgString(&l, c);
    Mem_Copy(l.text, self->unk_cc, 0x20);
}

extern "C" void func_0206598c(Unk_02065554 *self, void *a, void *b, void *c, s32 v, u8 *ped, void *s1, void *s2) {
    Unk_02065d5c_Str l1;
    Unk_02065d5c_Buf18 l2;
    func_020030d8(&l1, s1);
    _ZN8PlayerId13func_020942b8EPv(&l2, s2);
    func_02065c94(self);
    self->unk_ed = *ped;
    self->unk_ef = 0;
    func_02065d24(&self->unk_1c, &l1);
    func_02065d10(&self->unk_04, &l2);
    if (v < 0) {
        func_02065cf0(&self->unk_04, 5);
        v = 0;
    }
    self->func_02065564(2);
    func_02065a1c(self, &v, a, b, c);
}

extern "C" void func_02065920(Unk_02065554 *self, void *a1, void *a2, void *a3, void *a4, void *a5, s32 a6) {
    u32 out;
    if (a6 != 0xb) {
        Unk_02065dc8_Obj1c o;
        _ZN12Unk_02002fc813func_02002fc8Ej(a4, &o);
        MailText_SetSlot(a6, &o);
    }
    MailText_LoadLetter(&data_021c9fa4, &data_021ca094, &data_021c9fd0, &out, a1, a2);
    func_0206598c(self, &data_021c9fa4, &data_021ca094, &data_021c9fd0, out, (u8 *)a3, a4, a5);
}

extern "C" void func_020658a8(Unk_02065554 *self, void *a1, void *a2, void *a3, void *a4, void *a5, u8 *a6, void *a7, void *a8, s32 a9) {
    u32 out;
    if (a9 != 0xb) {
        Unk_02065dc8_Obj1c o;
        _ZN12Unk_02002fc813func_02002fc8Ej(a7, &o);
        MailText_SetSlot(a9, &o);
    }
    MailText_LoadLetterZ(&data_021c9fa4, &data_021ca094, &data_021c9fd0, &out, a1, a2, a3, a4, a5);
    func_0206598c(self, &data_021c9fa4, &data_021ca094, &data_021c9fd0, out, a6, a7, a8);
}

extern "C" void func_02065818(Unk_02065554 *self, void *a, void *b, void *c, s32 v, u8 *ped, void *s1, void *s2) {
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
    self->func_02065564(7);
    func_02065a1c(self, &v, a, b, c);
}

extern "C" void func_020657a0(Unk_02065554 *self, void *a1, void *a2, void *a3, void *a4, void *a5, u8 *a6, void *a7, void *a8, s32 a9) {
    u32 out;
    if (a9 != 0xb) {
        Unk_02065dc8_Obj1c o;
        _ZN12Unk_02002fc813func_02002fc8Ej(a7, &o);
        MailText_SetSlot(a9, &o);
    }
    MailText_LoadLetterZ(&data_021c9fa4, &data_021ca094, &data_021c9fd0, &out, a1, a2, a3, a4, a5);
    func_02065818(self, &data_021c9fa4, &data_021ca094, &data_021c9fd0, out, a6, a7, a8);
}

extern "C" void func_02065724(Unk_02065554 *self, void *a, void *b, void *c, s32 v, u8 *pef, u8 *ped, void *obj) {
    Unk_02065d5c_Buf18 tmp;
    _ZN8PlayerId13func_020942b8EPv(&tmp, obj);
    func_02065c94(self);
    self->unk_ed = *ped;
    self->unk_ef = *pef;
    func_02065cf0(&self->unk_1c, 4);
    func_02065d10(&self->unk_04, &tmp);
    if (v < 0) {
        func_02065cf0(&self->unk_04, 6);
        v = 0;
    }
    self->func_02065564(2);
    func_02065a1c(self, &v, a, b, c);
}

extern "C" void func_020656dc(Unk_02065554 *self, void *a, void *b, u8 *pef, u8 *ped, void *obj) {
    u32 out;
    MailText_LoadLetter(&data_021c9fa4, &data_021ca094, &data_021c9fd0, &out, a, b);
    func_02065724(self, &data_021c9fa4, &data_021ca094, &data_021c9fd0, out, pef, ped, obj);
}

extern "C" void func_0206567c(Unk_02065554 *self, void *a, void *b, void *c, s32 v) {
    func_02065c94(self);
    self->unk_ed = 0xc;
    self->func_02065564(5);
    func_02065cf0(&self->unk_1c, 4);
    func_02065cf4(&self->unk_04);
    if (v < 0) {
        func_02065cf0(&self->unk_04, 6);
        v = 0;
    }
    self->unk_ef = 0xc;
    func_02065a1c(self, &v, a, b, c);
}

extern "C" void func_02065640(Unk_02065554 *self, void *a, void *b) {
    u32 out;
    MailText_LoadLetter(&data_021c9fa4, &data_021ca094, &data_021c9fd0, &out, a, b);
    func_0206567c(self, &data_021c9fa4, &data_021ca094, &data_021c9fd0, out);
}

extern "C" Letter *func_02065634(Unk_02065554 *self) { return func_02065d48(&self->unk_1c); }

extern "C" Letter *func_02065628(Unk_02065554 *self) { return func_02065d48(&self->unk_04); }

extern "C" Letter *func_0206561c(Unk_02065554 *self) { return func_02065d38(&self->unk_04); }

extern "C" void func_02065610(Unk_02065554 *self, void *out) { func_02065dc8(&self->unk_1c, out); }

extern "C" void func_02065604(Unk_02065554 *self, void *out) { func_02065dc8(&self->unk_04, out); }

extern "C" u32 func_020655fc(Unk_02065554 *self) { return self->unk_ef; }

extern "C" void func_020655f0(Unk_02065554 *self, void *out) { func_02065d5c(&self->unk_1c, out); }

// ---- free functions
extern "C" void func_020655e4(Unk_02065554 *self, void *out) { func_02065d5c(&self->unk_04, out); }

extern "C" u32 func_020655d8(Unk_02065554 *self) { return func_02065ce0(&self->unk_04, 7); }

u16 Unk_02065554::func_020655d0() {
    return unk_f0;
}

u8 Unk_02065554::func_020655c0() {
    return (u8)((unk_ee & 0xc0) >> 6);
}

void Unk_02065554::func_020655ac(u32 v) {
    unk_ee = (unk_ee & 0x3f) | (v << 6);
}

u32 Unk_02065554::func_02065588(u16 v, u32 w) {
    u16 old = unk_f0;
    if (w == 0xff) w = 0;
    unk_f0 = v;
    func_020655ac(w);
    return old;
}

u8 Unk_02065554::func_02065578() {
    return unk_ee & 0x3f;
}

void Unk_02065554::func_02065564(u32 v) {
    unk_ee = (unk_ee & 0xc0) | v;
}

BOOL Unk_02065554::func_02065554() {
    if (unk_04.unk_16 == 1) return TRUE;
    return FALSE;
}

void Unk_02065554::func_02065518() {
    if ((u8)(unk_04.unk_16 + 0xfe) <= 1) return;
    u8 *p = (u8 *)_ZN15PlayerInventory9getUnk988Ev(_ZN10PlayerData13func_02098750Ev(PlayerData_GetCurrent()));
    Mem_Copy(p, unk_34, 0x18);
    unk_ec = p[0x50];
}

extern "C" void func_020654c8(Unk_02065554 *o, u8 *p) {
    u8 buf[0x10];
    if (p[0] != 0) {
        Mem_Copy(p, o->unk_cc, 0x20);
    } else {
        Mem_Clear(buf + 2, 8);
        func_02065610(o, buf + 2);
        buf[0] = 0x24;
        func_020653cc(buf, o->unk_cc, buf + 1, buf + 2);
    }
}

extern "C" void func_02065470(Unk_02065388_Obj *a, Unk_02065554 *b) {
    Mem_Copy(b->unk_cc, a->unk_30, 0x20);
    if (func_020655d8(b) == 0) {
        u8 *dst;
        if (b->func_02065554()) {
            dst = a->unk_18;
            a->unk_51 = b->unk_ec;
        } else {
            dst = a->unk_00;
            a->unk_50 = b->unk_ec;
        }
        Mem_Copy(b->unk_34, dst, 0x18);
    }
}

extern "C" void func_020653cc(u8 *code, u8 *dst, u8 *lenOut, u8 *extra) {
    u32 src[16];
    Unk_020653cc_Buf out;
    s32 n;
    s32 m;
    _ZN12Unk_020e0488C1Ev(src);
    _ZN12Unk_020e0470C1Ev(&out);
    String_Load2d(src, code, NULL);
    _ZN13EncodedString13fromMsgStringEP9MsgString(&out, src);
    n = func_02051320(out.unk_0e, 0x29, 0);
    *lenOut = n;
    if (n != 0) {
        Mem_Copy(out.unk_0e, dst, n);
    }
    m = n;
    if (extra != NULL) {
        s32 t = func_020512e0(extra, 8);
        Mem_Copy(extra, dst + n, t);
        m = n + t;
    }
    if (out.unk_0e[n] == 0x86) {
        s32 off = n + 1;
        u8 *p = out.unk_0e + off;
        s32 k = func_02051320(p, 0x29 - off, 0);
        if (k != 0) {
            Mem_Copy(p, dst + m, k);
        }
    }
    _ZN12Unk_020e0470D1Ev(&out);
    _ZN12Unk_020e0488D1Ev(src);
}

extern "C" void func_02065388(Unk_02065388_Obj *o) {
    u8 code[2];
    MI_CpuFill8(o, 0, 0x52);
    code[0] = 0x23;
    func_020653cc(&code[0], (u8 *)o, &o->unk_50, NULL);
    code[1] = 0x26;
    func_020653cc(&code[1], o->unk_18, &o->unk_51, NULL);
}

Unk_020dd468::Unk_020dd468() {
}

Unk_020dd468::~Unk_020dd468() {
}

u32 Unk_020dd468::vfunc_08() {
    return 0x80;
}

// ---- Unk_020dd468 (vtable owner)

u8 *Unk_020dd468::vfunc_0c() {
    return (u8 *)this + 0xe;
}

// ---- bss (in __sinit construction order)
Unk_020ddf2c data_021c9fa4;
Unk_020ddefc data_021ca094;
Unk_020ddf14 data_021c9fd0;
