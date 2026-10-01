#include "types.h"

struct Unk_ov004_Vec3 {
    s32 x, y, z;
};

class Unk_ov004_0224882c;

struct Unk_ov004_02206558_Elem {
    u32 a;
    u32 b;
};

struct Unk_ov004_02206558 {
    u32 pad[9];
    Unk_ov004_02206558();
    ~Unk_ov004_02206558();
    u32 func_ov004_0220652c();
    Unk_ov004_02206558_Elem *func_ov004_02206520(u32 i);
};

class Unk_ov004_02235718 {
public:
    Unk_ov004_0224882c *func_ov004_022355d8(u32 a, u32 b, s32 c);
};

class Unk_ov004_02205b14_Obj {
public:
    u8 pad[0x18];
    u8 unk_18;
};

// Element of the 3-element container (0x1c bytes)
class Unk_ov004_02205b14 {
public:
    Unk_ov004_02205b14();
    ~Unk_ov004_02205b14();
    void func_ov004_02205b14();
    u32 func_ov004_02205bcc(u32 a, u32 b, u32 c);
    u32 func_ov004_02205be4(u32 a, u32 b, u32 c);

    /* 0x00 */ u8 pad_00[0x14];
    /* 0x14 */ s8 unk_14;
    /* 0x15 */ u8 pad_15[3];
    /* 0x18 */ Unk_ov004_02205b14_Obj *unk_18;
};

class Unk_ov004_022059f4 {
public:
    Unk_ov004_022059f4();
    ~Unk_ov004_022059f4();
    void func_ov004_022059f4();
    u32 func_ov004_02205a1c(u32 a, u32 b, u32 c);
    u32 func_ov004_02205a64(u32 a, u32 b);

    /* 0x00 */ Unk_ov004_02205b14 unk_00[3];
    /* 0x54 */ u8 unk_54;
};

class Unk_ov004_02205994 {
public:
    u8 func_ov004_02205994();
    BOOL func_ov004_02205998(s32 v);
    void func_ov004_022059b0(u32 v);
    void func_ov004_022059b4(void *p, u32 v);

    /* 0x00 */ s8 unk_00[4];
    /* 0x04 */ u8 unk_04;
};

class Unk_ov004_02205eb0;
class Unk_ov004_0224882c;

class Unk_ov004_02205eb0 {
public:
    void func_ov004_02205eb0(Unk_ov004_0224882c *o);
    void func_ov004_02205f58(Unk_ov004_0224882c *o);
    u32 pad[24];
};

extern "C" {
Unk_ov004_02235718 *func_ov004_02235718();
void func_020943dc(u32 id);
s32 func_020e7530(s16 *v, s32 target, s32 step);
void func_020e761c(void *dst, u32 val, u32 size);
s32 func_01ffcb0c(s32 a, s32 b);
void func_020e93a0(Unk_ov004_Vec3 *v, s16 a);
void func_01ffd070(Unk_ov004_Vec3 *out, Unk_ov004_Vec3 *a, Unk_ov004_Vec3 *b);
s32 func_02056fcc(void *p, u32 id);
s32 func_02095204(s32 a);
s32 func_0204b248(u32 a, u32 b);
s32 func_ov004_02234f6c(void *p);
s32 func_ov004_0222c570(u16 *a, Unk_ov004_Vec3 *b);
s32 func_020b231c(void *p);
s32 func_020b22ac(void *p);
s32 func_020b22b0(s32 a, s32 b, s32 c);
s32 func_0210622c(void *p, s32 a, s32 b);
s32 func_0210612c(void *p, s32 a, s32 b);
void *__cxa_vec_ctor(void *, u32, u32, void *(*)(void *), void *(*)(void *));
void *__cxa_vec_cleanup(void *, u32, u32, void *(*)(void *));
}

struct Unk_ov004_027e0148 {
    u8 pad[0x18];
    u32 unk_18;
};
extern Unk_ov004_027e0148 data_027e0148;
extern u32 data_ov004_022487ec[];
extern u32 data_ov004_022487b8[];
extern s16 data_02135f44[];

class Unk_ov004_0224882c {
public:
    virtual void vfunc_00();
    virtual void vfunc_04();
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
    virtual void vfunc_64();
    virtual void vfunc_68();
    virtual void vfunc_6c();
    virtual void vfunc_70();
    virtual void vfunc_74();
    virtual void vfunc_78();
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();
    virtual void vfunc_88();
    virtual void vfunc_8c();
    virtual void vfunc_90();
    virtual void vfunc_94();
    virtual void vfunc_98(BOOL v);
    virtual void vfunc_9c(BOOL v);
    virtual BOOL vfunc_a0();

    BOOL func_ov004_02204f24();
    BOOL func_ov004_02204f8c();
    BOOL func_ov004_02204f90();
    BOOL func_ov004_02205004();
    BOOL func_ov004_0220500c();
    BOOL func_ov004_0220507c();
    BOOL func_ov004_022050b8();
    BOOL func_ov004_022050c0();
    BOOL func_ov004_02205138();
    BOOL func_ov004_022051a4();

    BOOL func_ov004_0220521c();
    BOOL func_ov004_022052f4();
    BOOL func_ov004_022053b8();
    BOOL func_ov004_022053bc();
    void func_ov004_022053c0();
    BOOL func_ov004_0220552c();
    void func_ov004_022055ec();
    BOOL func_ov004_022056bc(s32 idx);
    BOOL func_ov004_0220579c(s32 s);
    BOOL func_ov004_022057b0();
    BOOL func_ov004_022057bc();
    BOOL func_ov004_022057c8();
    BOOL func_ov004_022057f0();
    BOOL func_ov004_02205808();
    BOOL func_ov004_02205814();
    BOOL func_ov004_02205820(s16 a);
    BOOL func_ov004_022058c0(s16 a);
    BOOL func_ov004_02205954(s32 a);

    void func_ov004_02206fa0(s32 a);
    void func_ov004_02206fe0(void *p);
    void func_ov004_02207c40(Unk_ov004_02206558 *v, s32 a, s32 b);
    void func_ov004_02207854(s32 a, s32 b);
    BOOL func_ov004_02207598(Unk_ov004_Vec3 *v);
    BOOL func_ov004_022075a4();
    u32 func_ov004_02207650();
    void func_ov004_022088c0(Unk_ov004_Vec3 *v);

    /* 0x04 */ u8 pad_04[8];
    /* 0x0c */ u16 unk_0c;
    /* 0x0e */ u8 pad_0e[0x5c - 0x0e];
    /* 0x5c */ Unk_ov004_Vec3 unk_5c;
    /* 0x68 */ u8 pad_68[0x8e - 0x68];
    /* 0x8e */ s16 unk_8e;
    /* 0x90 */ u8 pad_90[0x14c - 0x90];
    /* 0x14c */ s32 unk_14c;
    /* 0x150 */ s32 unk_150;
    /* 0x154 */ s32 unk_154;
    /* 0x158 */ s32 unk_158;
    /* 0x15c */ u16 unk_15c;
    /* 0x15e */ u16 unk_15e;
    /* 0x160 */ s16 unk_160;
    /* 0x162 */ u8 pad_162[2];
    /* 0x164 */ s32 unk_164;
    /* 0x168 */ s16 unk_168;
    /* 0x16a */ u8 pad_16a[2];
    /* 0x16c */ s32 unk_16c;
    /* 0x170 */ s32 unk_170;
    /* 0x174 */ s32 unk_174;
    /* 0x178 */ u8 pad_178[0x188 - 0x178];
    /* 0x188 */ Unk_ov004_02205eb0 unk_188;
    /* 0x1e8 */ u8 pad_1e8[0x280 - 0x1e8];
    /* 0x280 */ u32 unk_280;
    /* 0x284 */ u8 unk_284;
    /* 0x285 */ u8 pad_285[0x530 - 0x285];
    /* 0x530 */ s32 unk_530;
    /* 0x534 */ u8 pad_534[0x76c - 0x534];
    /* 0x76c */ u16 unk_76c;
    /* 0x76e */ u8 pad_76e[0x784 - 0x76e];
    /* 0x784 */ s32 unk_784;
};

struct Unk_ov004_053c0_Buf { s32 v[4]; };

typedef BOOL (Unk_ov004_0224882c::*Unk_ov004_0224882c_Fn)();

// ---------------------------------------------------------------------------

static inline BOOL Unk_ov004_02205820_Is3d(u16 v) {
    if (v == 0x3d) return TRUE;
    return FALSE;
}

BOOL Unk_ov004_0224882c::func_ov004_022057b0() { return func_ov004_0220579c(7); }
BOOL Unk_ov004_0224882c::func_ov004_022057bc() { return func_ov004_0220579c(5); }
BOOL Unk_ov004_0224882c::vfunc_a0() { return func_ov004_0220579c(1); }
BOOL Unk_ov004_0224882c::func_ov004_02205808() { return func_ov004_0220579c(1); }
BOOL Unk_ov004_0224882c::func_ov004_02205814() { return func_ov004_022056bc(6); }

BOOL Unk_ov004_0224882c::func_ov004_022057c8() {
    if (vfunc_a0() == 0) return TRUE;
    return FALSE;
}

BOOL Unk_ov004_0224882c::func_ov004_022057f0() {
    if (func_ov004_02205808() == 0) return TRUE;
    return FALSE;
}

BOOL Unk_ov004_0224882c::func_ov004_0220521c() {
    s32 d = (s16)(unk_168 - unk_8e);
    BOOL neg;
    if (d < 0) neg = TRUE; else neg = FALSE;
    vfunc_9c(neg);
    if (unk_284 == 0 && unk_784 == 1) {
        Unk_ov004_02206558 v;
        func_ov004_02207c40(&v, 0, 0);
        for (u32 i = 0; i < v.func_ov004_0220652c(); i++) {
            Unk_ov004_02235718 *mgr = func_ov004_02235718();
            Unk_ov004_02206558_Elem *e = v.func_ov004_02206520(i);
            Unk_ov004_0224882c *o = mgr->func_ov004_022355d8(e->a, v.func_ov004_02206520(i)->b, 1);
            if (o) o->vfunc_9c(neg);
        }
    }
    if (func_020e7530(&unk_8e, unk_168, 0x700)) {
        func_ov004_022056bc(1);
        unk_188.func_ov004_02205eb0(this);
    }
}

BOOL Unk_ov004_0224882c::func_ov004_022052f4() {
    unk_188.func_ov004_02205f58(this);
    s32 d = (s16)(unk_168 - unk_8e);
    func_ov004_02207854(0, d);
    if (d < 0) d = 1; else d = 0;
    vfunc_98(d);
    if (unk_284 == 0 && unk_784 == 1) {
        Unk_ov004_02206558 v;
        func_ov004_02207c40(&v, 0, 0);
        for (u32 i = 0; i < v.func_ov004_0220652c(); i++) {
            Unk_ov004_02235718 *mgr = func_ov004_02235718();
            Unk_ov004_02206558_Elem *e = v.func_ov004_02206520(i);
            Unk_ov004_0224882c *o = mgr->func_ov004_022355d8(e->a, v.func_ov004_02206520(i)->b, 1);
            if (o) o->vfunc_98(d);
        }
    }
    return TRUE;
}

BOOL Unk_ov004_0224882c::func_ov004_022053b8() {}
BOOL Unk_ov004_0224882c::func_ov004_022053bc() { return TRUE; }


void Unk_ov004_0224882c::func_ov004_022053c0() {
    func_020e761c(&unk_158, 0x1000, 0x88);
    if (unk_15c < 0xf) {
        unk_15c = unk_15c + 1;
        unk_76c = 0;
        if (unk_15c == 0xc) func_020943dc(0x4c7);
        if (unk_15c == 0xf) {
            Unk_ov004_053c0_Buf buf;
            func_ov004_022088c0((Unk_ov004_Vec3 *)&buf);
            func_ov004_02206fe0(&buf);
        }
    } else if (unk_15c < 0x11) {
        unk_15c = unk_15c + 1;
    } else {
        s16 r6 = unk_15e;
        u16 r4;
        u16 *q = (u16 *)&unk_15e;
        *q = *q + unk_160;
        r4 = *q;
        s32 m = func_01ffcb0c(unk_164, data_02135f44[((u16)(volatile s16)r4 >> 4) * 2]);
        s32 t = 0x1000;
        unk_150 = m + t;
        s32 *pp = &unk_14c;
        *pp = t - m;
        unk_154 = *pp;
        s32 c = func_01ffcb0c(data_02135f44[((u16)r6 >> 4) * 2], data_02135f44[((u16)(volatile s16)r4 >> 4) * 2]);
        if (c < 0) {
            unk_164 = func_01ffcb0c(unk_164, 0x4cd);
            unk_160 = unk_160 + 0x960;
        }
        if (unk_158 == 0x1000) {
            s32 v = unk_164;
            if (v < 0) v = -v;
            if (v < 0x52) func_ov004_022056bc(1);
        }
        switch (unk_76c) {
        case 0:
            func_ov004_02206fa0(0);
            func_ov004_02206fa0(2);
            break;
        case 2:
            func_ov004_02206fa0(1);
            func_ov004_02206fa0(3);
            break;
        }
        unk_76c = unk_76c + 1;
    }
}

BOOL Unk_ov004_0224882c::func_ov004_0220552c() {
    unk_158 = 0x555;
    unk_14c = 0;
    unk_150 = 0;
    unk_154 = 0;
    unk_15c = 0;
    unk_15e = 0;
    unk_160 = 0x2710;
    unk_164 = 0x800;
    if (func_02095204(4)) {
        Unk_ov004_Vec3 pos;
        u16 t;
        func_ov004_022088c0(&pos);
        if (unk_284 == 0) pos.y = 0;
        else pos.y = func_ov004_02234f6c(&pos);
        pos.y += 0x800;
        t = func_0204b248(unk_280, 0);
        Unk_ov004_Vec3 c;
        c.x = pos.x;
        c.y = pos.y;
        c.z = pos.z;
        return func_ov004_0222c570(&t, &c);
    }
    return TRUE;
}

void Unk_ov004_0224882c::func_ov004_022055ec() {
    static Unk_ov004_0224882c_Fn tbl[9] = {
        (Unk_ov004_0224882c_Fn)&Unk_ov004_0224882c::func_ov004_022053c0, &Unk_ov004_0224882c::func_ov004_022053b8,
        &Unk_ov004_0224882c::func_ov004_0220521c, &Unk_ov004_0224882c::func_ov004_02205138,
        &Unk_ov004_0224882c::func_ov004_022050b8, &Unk_ov004_0224882c::func_ov004_0220500c,
        &Unk_ov004_0224882c::func_ov004_02204f90, &Unk_ov004_0224882c::func_ov004_022053b8,
        &Unk_ov004_0224882c::func_ov004_02204f24,
    };
    if (unk_530 < 9) (this->*tbl[unk_530])();
}

BOOL Unk_ov004_0224882c::func_ov004_022056bc(s32 idx) {
    static Unk_ov004_0224882c_Fn tbl[9] = {
        &Unk_ov004_0224882c::func_ov004_0220552c, &Unk_ov004_0224882c::func_ov004_022053bc,
        &Unk_ov004_0224882c::func_ov004_022052f4, &Unk_ov004_0224882c::func_ov004_022051a4,
        &Unk_ov004_0224882c::func_ov004_022050c0, &Unk_ov004_0224882c::func_ov004_0220507c,
        &Unk_ov004_0224882c::func_ov004_02205004, &Unk_ov004_0224882c::func_ov004_022053bc,
        &Unk_ov004_0224882c::func_ov004_02204f8c,
    };
    if (idx < 9) {
        if ((this->*tbl[idx])()) {
            unk_530 = idx;
            return TRUE;
        }
    }
    return FALSE;
}

BOOL Unk_ov004_0224882c::func_ov004_0220579c(s32 s) {
    if (unk_530 == s) return TRUE;
    return FALSE;
}

BOOL Unk_ov004_0224882c::func_ov004_02205820(s16 a) {
    Unk_ov004_Vec3 v;
    v.x = 0;
    v.y = 0;
    v.z = 0x2000;
    func_020e93a0(&v, (s16)(a + 0x8000));
    if (func_ov004_02207598(&v)) {
        Unk_ov004_Vec3 w;
        func_01ffd070(&w, &unk_5c, &v);
        unk_16c = w.x;
        unk_170 = w.y;
        unk_174 = w.z;
        unk_168 = a;
        func_ov004_022056bc(4);
        if (!Unk_ov004_02205820_Is3d(unk_0c)) {
            u32 t = func_ov004_02207650();
            if (t != 0xffff) func_020943dc(t);
        }
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov004_0224882c::func_ov004_022058c0(s16 a) {
    Unk_ov004_Vec3 v;
    v.x = 0;
    v.y = 0;
    v.z = 0x2000;
    func_020e93a0(&v, a);
    if (func_ov004_02207598(&v)) {
        Unk_ov004_Vec3 w;
        func_01ffd070(&w, &unk_5c, &v);
        unk_16c = w.x;
        unk_170 = w.y;
        unk_174 = w.z;
        unk_168 = a;
        func_ov004_022056bc(3);
        if (!Unk_ov004_02205820_Is3d(unk_0c)) {
            u32 t = func_ov004_02207650();
            if (t != 0xffff) func_020943dc(t);
        }
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov004_0224882c::func_ov004_02205954(s32 a) {
    if (func_ov004_022075a4()) {
        unk_168 = unk_8e + a;
        func_ov004_022056bc(2);
        func_020943dc(0x4c4);
        return TRUE;
    }
    return FALSE;
}

u8 Unk_ov004_02205994::func_ov004_02205994() { return unk_04; }

BOOL Unk_ov004_02205994::func_ov004_02205998(s32 v) {
    for (u32 i = 0; i < 4; i++) {
        if (v == unk_00[i]) return TRUE;
    }
    return FALSE;
}

void Unk_ov004_02205994::func_ov004_022059b0(u32 v) { unk_04 = v; }

void Unk_ov004_02205994::func_ov004_022059b4(void *p, u32 v) {
    if (p) {
        for (u32 i = 0; i < 4; i++) {
            unk_00[i] = func_02056fcc(p, data_ov004_022487ec[i]);
        }
        func_ov004_022059b0(v);
    }
}

extern "C" void func_ov004_022059ec() {}
extern "C" void func_ov004_022059f0() {}

void Unk_ov004_022059f4::func_ov004_022059f4() {
    if (unk_54 != 0) {
        Unk_ov004_02205b14 *p = unk_00;
        Unk_ov004_02205b14 *end = (Unk_ov004_02205b14 *)&unk_54;
        for (; p < end; p++) p->func_ov004_02205b14();
    }
}

u32 Unk_ov004_022059f4::func_ov004_02205a1c(u32 a, u32 b, u32 c) {
    u32 r = 0;
    if (unk_54 != 0) {
        u32 z = 0;
        for (Unk_ov004_02205b14 *p = unk_00; p < (Unk_ov004_02205b14 *)&unk_54; p++) {
            r |= p->func_ov004_02205bcc(a, b, c);
            if (r != 0) r = 1; else r = z;
        }
    }
    return r;
}

u32 Unk_ov004_022059f4::func_ov004_02205a64(u32 a, u32 b) {
    u32 i = 0;
    unk_54 = 0;
    u8 *pf = &unk_54;
    u32 z = 0;
    for (i = 0; i < 3; i++) {
        u32 r = unk_00[i].func_ov004_02205be4(a, data_ov004_022487b8[i], b);
        u32 t = *pf | r;
        if (t != 0) t = 1; else t = z;
        *pf = t;
    }
    return unk_54;
}

Unk_ov004_022059f4::~Unk_ov004_022059f4() {}

Unk_ov004_022059f4::Unk_ov004_022059f4() {
    unk_54 = 0;
}

extern "C" u16 func_ov004_02205b04() {
    return (u16)(data_027e0148.unk_18 >> 16);
}

void Unk_ov004_02205b14::func_ov004_02205b14() {
    if (unk_14 != -1) {
        func_020b231c(this);
        s32 x = func_020b22ac(this);
        if (x) {
            func_0210622c(unk_18, 1, 0x400);
            s32 col = func_ov004_02205b04();
            s32 r7 = func_020b22b0(x, ((col >> 10) & 0x1f) << 12, 0x1f000);
            s32 g = func_020b22b0(x, (col & 0x1f) << 12, 0x1f000);
            s32 b = func_020b22b0(x, ((col >> 5) & 0x1f) << 12, 0x1f000);
            u32 r7c = (u16)(((r7 >> 12) << 10) | ((g >> 12) | ((b >> 12) << 5)));
            for (s32 i = 0; i < unk_18->unk_18; i++) {
                func_0210612c(unk_18, i, i == unk_14 ? r7c : col);
            }
        } else {
            func_0210622c(unk_18, 0, 0x400);
        }
    }
}
