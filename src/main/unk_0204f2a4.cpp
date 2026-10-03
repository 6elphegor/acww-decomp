#include "types.h"
#include "Unk_020d8c7c.h"

struct Unk_020db984_Vec3 {
    s32 x, y, z;
};

struct Unk_020db984_Ent {
    u8 pad_00[0x40];
    s32 unk_40;
    s32 unk_44;
    u8 pad_48[0x44];
    Unk_020db984_Vec3 unk_8c;
    u8 pad_98[0xb8];
    Unk_020db984_Vec3 unk_150;
    s16 unk_15c, unk_15e, unk_160;
    u8 pad_162[2];
    u32 unk_164;
    u8 unk_168;
    u8 unk_169;
    u8 pad_16a[2];
};

struct Unk_0204fd24 {
    /* 0x000 */ u8 unk_00[0x40];
    /* 0x040 */ s32 unk_40;
    /* 0x044 */ s32 unk_44;
    /* 0x048 */ u8 unk_48[4];
    /* 0x04c */ u8 unk_4c[0x40];
    /* 0x08c */ s32 unk_8c;
    /* 0x090 */ s32 unk_90;
    /* 0x094 */ s32 unk_94;
    /* 0x098 */ u8 unk_98[0xb8];
    /* 0x150 */ s32 unk_150;
    /* 0x154 */ s32 unk_154;
    /* 0x158 */ s32 unk_158;
    /* 0x15c */ u16 unk_15c;
    /* 0x15e */ u16 unk_15e;
    /* 0x160 */ u16 unk_160;
    /* 0x164 */ s32 unk_164;
    /* 0x168 */ s32 unk_168;
};

struct Unk_0204fe98_Global {
    /* 0x00 */ u32 unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ u8 unk_08;
    Unk_0204fe98_Global() {
        unk_00 = 0;
        unk_04 = -3;
    }
};

struct Unk_020db94c_Ent {
    u8 unk_00;
    u8 unk_01;
    u32 unk_04;
    u32 unk_08;
};

struct Unk_020db8b8_Rec {
    void *unk_00;
    s16 unk_04;
    s16 unk_06;
};

struct Unk_0204f98c_Mtx {
    s32 v[12];
};

class Unk_020db984;

extern "C" {
s32 func_02072e44(void *);
void _ZN12Unk_0209c15cD1Ev(void *);
void _ZN12Unk_0209c15c13func_0209c15cEv(void *);
void *__cxa_vec_cleanup(void *p, u32 n, u32 size, void *dtor);
s32 func_0204fcb8(void);
u32 func_0204f4e0(u32 i);
s32 _ZN12Unk_020dbe7c13func_020565e8Ei(void *, s32);
void func_0204f674(Unk_020db984_Ent *, Unk_020db984_Vec3 *);
void _ZN12Unk_020dbd5413func_020547ccEPv(void *, void *);
void func_0204f4f8(u32 a, u32 b, s32 c, u32 d, u32 e);
extern s32 data_020db8b4;
extern Unk_020db984 *data_021c488c;
extern u8 data_020ca314[];
extern u8 data_020e416c;
void *_ZN12Unk_0209c15c13func_0209c25cEPt(void *, void *);
s32 _ZN12Unk_0209c0ac13func_0209c0d0EP12Unk_0209c2f4PKc(void *, void *, const char *);
void *_ZN12Unk_0209c0ac13func_0209c0acEv(void *);
void _ZN12Unk_020dbe3413func_020555ecEP16Unk_020553f8_Resj(void *, void *, s32);
void *_ZN12Unk_0209c2f413func_0209c348Ev(void *);
void *func_020641ec(void *, void *, s32, s32);
s32 func_021065dc(void);
s32 func_021065f8(s32, s32);
s32 _ZN12Unk_020dbd5413func_02054800EPv(void *, void *);
void _ZN12Unk_0205454c13func_02054720Eiiitt(void *, s32, s32, s32, s32, s32);
void _ZN12Unk_020dbd5413func_02054710Ev(void *);
void NNS_G3dMdlSetMdlAlpha(void *, s32, u32);
s32 func_0203ef38(void *, void *);
void func_020e8388(void *, s32, s32, s32);
void func_020e8434(void *, s32);
void func_020e8464(void *, s32, s32, s32);
void func_020e8404(void *, s32);
void func_020e83d4(void *, s32);
s32 func_020639e8(char *, const char *, ...);
extern u8 data_021f47e0[];
void _ZN12Unk_0209c15c13func_0209c1a4EjPvS0_jPFS0_jjEPFvvE(void *p, s32 n, s32 a, s32 b, s32 c, void *d, void *e, const char *f);
void func_0205bfb8(void);
void func_0205bf9c(void);
void _ZN12Unk_02003c3013func_02003e50Ev(void *p);
void _ZN12Unk_02003c3013func_02003eccEv(void *p);
void _ZN12Unk_020dbd5413func_020546ecEv(void *p);
void _ZN12Unk_0209c0ac13func_0209c0b4Ev(void *p);
void _ZN12Unk_020dbd3413func_02054b14Ev(void *p);
void _ZN12Unk_0209c15c13func_0209c224EPt(void *p, void *q);
void _ZN12Unk_0209c0ac13func_0209c0c8Ev(void *p);
void _ZN12Unk_020dbd54D1Ev(void *p);
void _ZN12Unk_0209c0acD1Ev(void *p);
void func_0209c364(void *p);
void func_020f43fc(void *p);
void func_020f440c(void *p);
void func_0209c370(void *p);
void _ZN12Unk_0209c0acC1Ev(void *p);
void _ZN12Unk_020dbd54C1Ev(void *p);
void _ZN12Unk_0209c15cC1Ev(void *p);
void *__cxa_vec_ctor(void *p, s32 n, s32 size, void *ctor, void *dtor);
void _ZN12Unk_020dbd5413func_020547e4Ev(void *);
void _ZN12Unk_02003c4013func_02003e80EP16Unk_02003a6c_Vec(void *, void *);
void func_02003e70(void *, u32, u32, u32);
s32 MI_CpuCopy8(void *src, void *dst, s32 n);
void func_02076a2c(void *buf, s32 *a, s32 *b);
}

extern "C" {
Unk_0204fd24 *func_0204fd24(Unk_0204fd24 *p);
Unk_0204fd24 *func_0204fcfc(Unk_0204fd24 *p);
Unk_020db984 *func_0204fdb0(void);
}

class Unk_020db984 : public Unk_020d8c7c {
public:
    inline Unk_020db984();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_24();
    ~Unk_020db984() {
        _ZN12Unk_0209c15cD1Ev(unk_600);
        __cxa_vec_cleanup(unk_50, 4, 0x16c, (void *)func_0204fcfc);
    }
    void func_0204fbec(s32);
    BOOL func_0204fc64(s32);
    void func_0204f98c(Unk_020db984_Ent *);
    BOOL func_0204f738(void *, Unk_020db984_Ent *);
    BOOL func_0204f808(void *, Unk_020db984_Ent *);
    BOOL func_0204f874(void *, Unk_020db984_Ent *);

    Unk_020db984_Ent unk_50[4];
    u8 unk_600[0x18];
};

extern "C" {
Unk_0204fd24 *func_0204fd24(Unk_0204fd24 *p);
Unk_0204fd24 *func_0204fcfc(Unk_0204fd24 *p);
Unk_020db984 *func_0204fdb0(void);
}

// Declarations for data defined further down (definition order sets the data layout)
extern char *data_020db8b0;
extern void *data_020db8ac;
extern char data_020db8cc[];
extern char data_020db8e4[];
extern char data_020db8fc[];
extern char data_020db914[];
extern char data_020db930[];
extern Unk_020db8b8_Rec data_020db8b8;
extern char *data_020db8c0[3];
extern Unk_020db94c_Ent data_020db94c[4];
extern const u8 data_020ca318[0x160];
extern Unk_0204fe98_Global data_021c4890;

inline Unk_020db984::Unk_020db984() {
    __cxa_vec_ctor(unk_50, 4, 0x16c, (void *)func_0204fd24, (void *)func_0204fcfc);
    _ZN12Unk_0209c15cC1Ev(unk_600);
}

extern const u8 data_020ca318[];

static inline BOOL Unk_0204f4f8_IsZero(u8 v) {
    return v == 0 ? TRUE : FALSE;
}

extern "C" void func_0204fe44(s8 *p, u32 v) {
    s32 a, b;
    u8 buf[8];
    s32 c = p[1];
    MI_CpuCopy8(p + 2, buf, 5);
    func_02076a2c(buf, &a, &b);
    func_0204f4f8((u8)v, 0, c, a, b);
}

extern "C" void func_0204fe28(void *p, u32 v) {
    func_0204f4f8((u8)v, 1, -1, 0, 0);
}

extern "C" void func_0204fe0c(void *p, u32 v) {
    func_0204f4f8((u8)v, 2, -1, 0, 0);
}

extern "C" Unk_020db984 *func_0204fdb0(void) {
    return new Unk_020db984();
}

extern "C" Unk_0204fd24 *func_0204fd24(Unk_0204fd24 *e) {
    func_020f440c(e);
    func_0209c370(e->unk_48);
    _ZN12Unk_0209c0acC1Ev(e->unk_4c);
    _ZN12Unk_020dbd54C1Ev(e->unk_98);
    e->unk_40 = -1;
    e->unk_44 = 0;
    _ZN12Unk_0209c0ac13func_0209c0c8Ev(e->unk_4c);
    e->unk_8c = 0x1000;
    e->unk_90 = 0x1000;
    e->unk_94 = 0x1000;
    e->unk_150 = 0x1000;
    e->unk_154 = 0x1000;
    e->unk_158 = 0x1000;
    e->unk_15c = 0;
    e->unk_15e = 0;
    e->unk_160 = 0;
    e->unk_164 = 0x1f;
    return e;
}

extern "C" Unk_0204fd24 *func_0204fcfc(Unk_0204fd24 *e) {
    _ZN12Unk_020dbd54D1Ev(e->unk_98);
    _ZN12Unk_0209c0acD1Ev(e->unk_4c);
    func_0209c364(e->unk_48);
    func_020f43fc(e);
    return e;
}

extern "C" s32 func_0204fcb8(void) {
    s32 i = 0;
    s32 r = -1;
    if (data_021c488c != NULL) {
        Unk_0204fd24 *e = (Unk_0204fd24 *)data_021c488c->unk_50;
        for (; i < data_020db8b4; e++, i++) {
            if (e->unk_44 == 0) {
                r = i;
                e->unk_44 = 1;
                break;
            }
        }
    }
    return r;
}

BOOL Unk_020db984::func_0204fc64(s32 idx) {
    BOOL r = FALSE;
    if (data_021c488c == NULL) {
        return FALSE;
    }
    if (idx != -1) {
        Unk_0204fd24 *e = (Unk_0204fd24 *)&data_021c488c->unk_50[idx];
        e->unk_44 = 2;
        _ZN12Unk_0209c15c13func_0209c25cEPt(unk_600, e->unk_48);
        _ZN12Unk_0209c0ac13func_0209c0c8Ev(e->unk_4c);
        _ZN12Unk_02003c3013func_02003eccEv(e);
        r = TRUE;
    }
    return r;
}

void Unk_020db984::func_0204fbec(s32 idx) {
    if (idx >= 0 && idx < data_020db8b4 && data_021c488c != NULL) {
        Unk_0204fd24 *e = (Unk_0204fd24 *)&data_021c488c->unk_50[idx];
        if (e->unk_44 != 0 && e->unk_44 != 1) {
            _ZN12Unk_02003c3013func_02003e50Ev(e);
        }
        e->unk_40 = -1;
        e->unk_44 = 0;
        _ZN12Unk_020dbd5413func_020546ecEv(e->unk_98);
        _ZN12Unk_0209c0ac13func_0209c0b4Ev(e->unk_4c);
        _ZN12Unk_020dbd3413func_02054b14Ev(e->unk_98);
        _ZN12Unk_0209c15c13func_0209c224EPt(unk_600, e->unk_48);
    }
}

BOOL Unk_020db984::vfunc_00() {
    if (*(s32 *)&unk_04[4] == 0) {
        data_020db8b4 = 4;
    } else if (*(s32 *)&unk_04[4] == 1) {
        data_020db8b4 = 1;
    }
    _ZN12Unk_0209c15c13func_0209c1a4EjPvS0_jPFS0_jjEPFvvE(unk_600, data_020db8b4, 0x800, 0x80, 0x134c, (void *)func_0205bfb8, (void *)func_0205bf9c, "fish_disp");
    data_021c488c = this;
    return TRUE;
}

BOOL Unk_020db984::vfunc_18() {
    volatile s32 v0, v4;
    Unk_020db984 *g = data_021c488c;
    if (g == NULL) return FALSE;
    Unk_020db984_Ent *e = g->unk_50;
    s32 i = 0;
    v4 = 0;
    v0 = 0;
    for (; i < data_020db8b4; e++, i++) {
        switch (e->unk_44) {
        case 1:
            if (e->unk_40 != -1) {
                func_0204fc64(i);
            }
            break;
        case 2: {
            s32 t = e->unk_40;
            if ((u32)(t - 0x38) <= 2) {
                func_0204f808(unk_600, e);
            } else if (t == 0x3b) {
                func_0204f738(unk_600, e);
            } else {
                func_0204f874(unk_600, e);
            }
            break;
        }
        case 3:
            if (e->unk_40 == 0x3b) {
                _ZN12Unk_020dbd5413func_020547e4Ev((u8 *)e + 0x98);
                NNS_G3dMdlSetMdlAlpha(_ZN12Unk_0209c0ac13func_0209c0acEv((u8 *)e + 0x4c), v0, *(u32 *)((u8 *)e + 0x164));
            } else if (e->unk_40 == 0x38 || e->unk_40 == 0x39 || e->unk_40 == 0x3a) {
            } else {
                _ZN12Unk_020dbd5413func_020547e4Ev((u8 *)e + 0x98);
                if (e->unk_169 != 0) {
                    Unk_020db984_Vec3 *p = &e->unk_8c;
                    Unk_020db984_Vec3 t;
                    t.x = p->x;
                    t.y = p->y;
                    t.z = p->z;
                    _ZN12Unk_02003c4013func_02003e80EP16Unk_02003a6c_Vec(e, &t);
                    if (_ZN12Unk_020dbe7c13func_020565e8Ei((u8 *)e + 0x134, 1)) {
                        func_02003e70(e, 0x84d, 0x7f, v4);
                    }
                }
            }
            func_0204f98c(e);
            break;
        case 4:
            func_0204fbec(i);
            break;
        }
    }
    return TRUE;
}

void Unk_020db984::func_0204f98c(Unk_020db984_Ent *e) {
    u8 *m = (u8 *)e + 0x98;
    s32 id = e->unk_40;
    Unk_020db984_Vec3 v;
    Unk_020db984_Vec3 o;
    s32 ang;
    Unk_020db984_Vec3 *pv = &e->unk_8c;
    v.x = pv->x; v.y = pv->y; v.z = pv->z;
    s32 mode = *(s32 *)((u8 *)this + 8);
    if (mode == 0) {
        ang = func_0203ef38(&o, &v);
    } else if (mode == 1) {
        ang = 0;
        o = v;
    }
    func_020e8388(data_021f47e0, o.x, o.y, o.z);
    func_020e8434(data_021f47e0, ang);
    if (id != 0xf) {
        func_020e8464(data_021f47e0, e->unk_15c, e->unk_15e, e->unk_160);
    } else {
        func_020e8404(data_021f47e0, e->unk_15e);
        func_020e83d4(data_021f47e0, e->unk_160);
        func_020e8434(data_021f47e0, e->unk_15c);
    }
    *(Unk_0204f98c_Mtx *)(m + 0x64) = *(Unk_0204f98c_Mtx *)data_021f47e0;
}

BOOL Unk_020db984::func_0204f874(void *p, Unk_020db984_Ent *e) {
    BOOL r = FALSE;
    char buf[0x18];
    if (p == NULL || e == NULL) return FALSE;
    s32 id = e->unk_40;
    void *x = _ZN12Unk_0209c15c13func_0209c25cEPt(p, (u8 *)e + 0x48);
    void *t;
    void *y = (u8 *)e + 0x4c;
    s32 q = id / 16;
    if (id < 10) {
        func_020639e8(buf, "/fish/0%d/fish0%d.nsbmd", q, id);
    } else {
        func_020639e8(buf, "/fish/0%d/fish%d.nsbmd", q, id);
    }
    if (_ZN12Unk_0209c0ac13func_0209c0d0EP12Unk_0209c2f4PKc(y, x, buf)) {
        u8 *m = (u8 *)e + 0x98;
        _ZN12Unk_020dbe3413func_020555ecEP16Unk_020553f8_Resj(m, _ZN12Unk_0209c0ac13func_0209c0acEv(y), 0);
        t = _ZN12Unk_0209c2f413func_0209c348Ev(x);
        if (id < 10) {
            func_020639e8(buf, "/fish/0%d/fish0%d.nsbca", q, id);
        } else {
            func_020639e8(buf, "/fish/0%d/fish%d.nsbca", q, id);
        }
        func_020641ec(buf, t, 4, 0);
        s32 u = func_021065f8(func_021065dc(), 0);
        s32 flag = 0x1000;
        if (e->unk_168 == 0) flag = 0;
        if (_ZN12Unk_020dbd5413func_02054800EPv(m, t)) {
            _ZN12Unk_0205454c13func_02054720Eiiitt(m, u, 0, flag, 1, 0);
            _ZN12Unk_020dbd5413func_02054710Ev(m);
            e->unk_44 = 3;
            func_0204f98c(e);
            r = TRUE;
        }
    }
    return r;
}

BOOL Unk_020db984::func_0204f808(void *p, Unk_020db984_Ent *e) {
    BOOL r = FALSE;
    if (p == NULL || e == NULL) return FALSE;
    s32 id = e->unk_40;
    void *x = _ZN12Unk_0209c15c13func_0209c25cEPt(p, (u8 *)e + 0x48);
    void *y = (u8 *)e + 0x4c;
    if (_ZN12Unk_0209c0ac13func_0209c0d0EP12Unk_0209c2f4PKc(y, x, data_020db8c0[id - 0x38])) {
        _ZN12Unk_020dbe3413func_020555ecEP16Unk_020553f8_Resj((u8 *)e + 0x98, _ZN12Unk_0209c0ac13func_0209c0acEv(y), r);
        e->unk_44 = 3;
        func_0204f98c(e);
        r = TRUE;
    }
    return r;
}

BOOL Unk_020db984::func_0204f738(void *p, Unk_020db984_Ent *e) {
    BOOL r = FALSE;
    if (p == NULL || e == NULL) return FALSE;
    s32 id = e->unk_40;
    void *x = _ZN12Unk_0209c15c13func_0209c25cEPt(p, (u8 *)e + 0x48);
    void *y = (u8 *)e + 0x4c;
    if (_ZN12Unk_0209c0ac13func_0209c0d0EP12Unk_0209c2f4PKc(y, x, data_020db8b0)) {
        u8 *m = (u8 *)e + 0x98;
        _ZN12Unk_020dbe3413func_020555ecEP16Unk_020553f8_Resj(m, _ZN12Unk_0209c0ac13func_0209c0acEv(y), r);
        void *t = _ZN12Unk_0209c2f413func_0209c348Ev(x);
        func_020641ec(data_020db8ac, t, 4, r);
        s32 u = func_021065f8(func_021065dc(), r);
        if (_ZN12Unk_020dbd5413func_02054800EPv(m, t)) {
            _ZN12Unk_0205454c13func_02054720Eiiitt(m, u, r, 0x1000, 1, r);
            _ZN12Unk_020dbd5413func_02054710Ev(m);
            e->unk_44 = 3;
            func_0204f98c(e);
            if (id == 0x3b) {
                NNS_G3dMdlSetMdlAlpha(_ZN12Unk_0209c0ac13func_0209c0acEv(y), r, e->unk_164);
            }
            r = TRUE;
        }
    }
    return r;
}

BOOL Unk_020db984::vfunc_24() {
    Unk_020db984 *g = data_021c488c;
    if (g == NULL) return FALSE;
    Unk_020db984_Ent *e = g->unk_50;
    for (s32 i = 0; i < data_020db8b4; e++, i++) {
        if (e->unk_44 == 3) {
            Unk_020db984_Vec3 v;
            v.x = e->unk_150.x;
            v.y = e->unk_150.y;
            v.z = e->unk_150.z;
            _ZN12Unk_020dbd5413func_020547ccEPv((u8 *)e + 0x98, &v);
        }
    }
    return TRUE;
}

BOOL Unk_020db984::vfunc_0c() {
    for (s32 i = 0; i < data_020db8b4; i++) {
        func_0204fbec(i);
    }
    _ZN12Unk_0209c15c13func_0209c15cEv(unk_600);
    data_021c488c = NULL;
    return TRUE;
}

extern "C" void func_0204f674(Unk_020db984_Ent *e, Unk_020db984_Vec3 *v) {
    e->unk_150.x = v->x;
    e->unk_150.y = v->y;
    e->unk_150.z = v->z;
}

extern "C" void func_0204f4f8(u32 a, u32 b, s32 c, u32 d, u32 e) {
    if (a < 4 && c < 0x38) {
        switch (b) {
        case 0:
            data_020db94c[a].unk_00 = b;
            data_020db94c[a].unk_01 = c;
            data_020db94c[a].unk_04 = d;
            data_020db94c[a].unk_08 = e;
            break;
        case 3:
            data_020db94c[a].unk_00 = b;
            break;
        case 1:
            if (Unk_0204f4f8_IsZero(data_020e416c)) {
                if (func_0204f4e0(a) == 3) {
                    data_020db94c[a].unk_00 = b;
                } else {
                    data_020db94c[a].unk_00 = 8;
                }
                data_020db94c[a].unk_01 = c;
                data_020db94c[a].unk_04 = d;
                data_020db94c[a].unk_08 = e;
            } else {
                data_020db94c[a].unk_00 = 8;
                data_020db94c[a].unk_01 = c;
                data_020db94c[a].unk_04 = d;
                data_020db94c[a].unk_08 = e;
            }
            break;
        case 2:
            if (Unk_0204f4f8_IsZero(data_020e416c)) {
                if (func_0204f4e0(a) == 3 || func_0204f4e0(a) == 8 || func_0204f4e0(a) == 1) {
                    data_020db94c[a].unk_00 = b;
                } else {
                    data_020db94c[a].unk_00 = 8;
                }
                data_020db94c[a].unk_01 = c;
                data_020db94c[a].unk_04 = d;
                data_020db94c[a].unk_08 = e;
            } else {
                data_020db94c[a].unk_00 = 8;
                data_020db94c[a].unk_01 = c;
                data_020db94c[a].unk_04 = d;
                data_020db94c[a].unk_08 = e;
            }
            break;
        case 4:
            data_020db94c[a].unk_00 = b;
            break;
        case 5:
            data_020db94c[a].unk_00 = b;
            break;
        case 8:
            data_020db94c[a].unk_00 = 8;
            data_020db94c[a].unk_01 = c;
            data_020db94c[a].unk_04 = d;
            data_020db94c[a].unk_08 = e;
            break;
        case 6:
        case 7:
        default:
            data_020db94c[a].unk_00 = b;
            break;
        }
    }
}

extern "C" u32 func_0204f4e0(u32 i) {
    if (i >= 4) return 9;
    return data_020db94c[i].unk_00;
}

extern "C" u32 func_0204f4c8(u32 i) {
    if (i >= 4) return 0xff;
    return data_020db94c[i].unk_01;
}

extern "C" BOOL func_0204f4a4(u32 *a, u32 *b, u32 i) {
    if (i >= 4) return FALSE;
    *a = data_020db94c[i].unk_04;
    *b = data_020db94c[i].unk_08;
    return TRUE;
}

extern "C" s32 func_0204f49c(void) {
    return func_0204fcb8();
}

extern "C" BOOL func_0204f3e4(s32 idx, s32 id, Unk_020db984_Vec3 *pos, Unk_020db984_Vec3 *vec, s16 a5, s16 a6, s16 a7, u8 a8, u8 a9, u32 a10) {
    BOOL r = FALSE;
    Unk_020db984 *g = data_021c488c;
    if (g != NULL && idx >= 0 && idx < data_020db8b4 && id >= 0 && id < 0x3c) {
        Unk_020db984_Ent *e = &g->unk_50[idx];
        e->unk_40 = id;
        Unk_020db984_Vec3 *d = &e->unk_8c;
        d->x = pos->x; d->y = pos->y; d->z = pos->z;
        Unk_020db984_Vec3 t;
        t.x = vec->x; t.y = vec->y; t.z = vec->z;
        func_0204f674(e, &t);
        e->unk_15c = a5;
        e->unk_15e = a6;
        e->unk_160 = a7;
        e->unk_168 = a8;
        e->unk_169 = a9;
        e->unk_164 = a10;
        r = TRUE;
    }
    return r;
}

extern "C" void func_0204f3b4(s32 idx) {
    if (data_021c488c != NULL && idx >= 0 && idx < data_020db8b4) {
        data_021c488c->unk_50[idx].unk_44 = 4;
    }
}

extern "C" BOOL func_0204f364(s32 idx, s32 unused) {
    BOOL r = FALSE;
    if (idx >= 0 && idx < data_020db8b4) {
        Unk_020db984_Ent *e = &data_021c488c->unk_50[idx];
        s32 t = e->unk_40;
        if (t < 0 || t >= 0x38) return FALSE;
        if (_ZN12Unk_020dbe7c13func_020565e8Ei((u8 *)e + 0x134, unused)) r = TRUE;
    }
    return r;
}

extern "C" u32 func_0204f34c(u32 x) {
    if (x >= 0x38) return 10;
    return *(u16 *)(data_020ca318 + x * 6);
}

// ---------------------------------------------------------------- functions
extern "C" u32 func_0204f334(u32 x) {
    if (x >= 0x3b) return 3;
    return data_020ca314[x * 6];
}

char *data_020db8b0 = data_020db914;

void *data_020db8ac = data_020db930;

// ---------------------------------------------------------------- data
char data_020db8cc[] = "/fish/03/fish56.nsbmd";

char data_020db8e4[] = "/fish/03/fish57.nsbmd";

char data_020db8fc[] = "/fish/03/fish58.nsbmd";

char data_020db914[] = "/fish/03/fish_shadow.nsbmd";

char data_020db930[] = "/fish/03/fish_shadow.nsbca";

s32 data_020db8b4 = 4;

Unk_020db8b8_Rec data_020db8b8 = {(void *)func_0204fdb0, 0xc2, 8};

char *data_020db8c0[3] = {data_020db8cc, data_020db8e4, data_020db8fc};

Unk_020db94c_Ent data_020db94c[4] = {
    {8, 0xff, 0, 0},
    {8, 0xff, 0, 0},
    {8, 0xff, 0, 0},
    {8, 0xff, 0, 0},
};

const u8 data_020ca318[0x160] = {
    0x0a, 0x00, 0x00, 0x03, 0x03, 0x00, 0x0f, 0x00, 0x01, 0x03, 0x04, 0x00, 0x1e, 0x00, 0x01, 0x03,
    0x03, 0x00, 0x23, 0x00, 0x02, 0x02, 0x03, 0x00, 0x32, 0x00, 0x03, 0x02, 0x03, 0x00, 0x4b, 0x00,
    0x03, 0x02, 0x03, 0x00, 0x4b, 0x00, 0x00, 0x02, 0x03, 0x00, 0x0f, 0x00, 0x00, 0x02, 0x03, 0x00,
    0x0f, 0x00, 0x00, 0x02, 0x02, 0x00, 0x04, 0x00, 0x00, 0x04, 0x04, 0x00, 0x0c, 0x00, 0x00, 0x04,
    0x03, 0x00, 0x0c, 0x00, 0x00, 0x02, 0x04, 0x00, 0x0f, 0x00, 0x00, 0x03, 0x03, 0x00, 0x14, 0x00,
    0x02, 0x02, 0x04, 0x00, 0x3c, 0x00, 0x07, 0x01, 0x01, 0x00, 0x64, 0x00, 0x03, 0x02, 0x01, 0x00,
    0x50, 0x00, 0x01, 0x04, 0x04, 0x00, 0x19, 0x00, 0x01, 0x01, 0x01, 0x00, 0x23, 0x00, 0x02, 0x02,
    0x02, 0x00, 0x32, 0x00, 0x00, 0x03, 0x03, 0x00, 0x0f, 0x00, 0x01, 0x02, 0x01, 0x00, 0x19, 0x00,
    0x01, 0x01, 0x01, 0x00, 0x23, 0x00, 0x02, 0x01, 0x01, 0x00, 0x32, 0x00, 0x03, 0x02, 0x02, 0x00,
    0x46, 0x00, 0x04, 0x00, 0x01, 0x00, 0x96, 0x00, 0x04, 0x02, 0x01, 0x00, 0x5a, 0x00, 0x05, 0x02,
    0x01, 0x00, 0xa0, 0x00, 0x00, 0x02, 0x03, 0x00, 0x04, 0x00, 0x00, 0x02, 0x02, 0x00, 0x0c, 0x00,
    0x01, 0x04, 0x03, 0x00, 0x1e, 0x00, 0x03, 0x03, 0x02, 0x00, 0x46, 0x00, 0x04, 0x01, 0x00, 0x00,
    0x64, 0x00, 0x05, 0x03, 0x01, 0x00, 0xbe, 0x00, 0x05, 0x01, 0x01, 0x00, 0x2c, 0x01, 0x00, 0x00,
    0x02, 0x00, 0x03, 0x00, 0x01, 0x02, 0x04, 0x00, 0x19, 0x00, 0x00, 0x01, 0x01, 0x00, 0x08, 0x00,
    0x00, 0x02, 0x01, 0x00, 0x0f, 0x00, 0x01, 0x03, 0x03, 0x00, 0x1e, 0x00, 0x01, 0x02, 0x02, 0x00,
    0x23, 0x00, 0x01, 0x03, 0x03, 0x00, 0x28, 0x00, 0x02, 0x02, 0x00, 0x00, 0x3c, 0x00, 0x04, 0x03,
    0x02, 0x00, 0x64, 0x00, 0x03, 0x02, 0x01, 0x00, 0x5a, 0x00, 0x02, 0x02, 0x02, 0x00, 0x32, 0x00,
    0x03, 0x01, 0x01, 0x00, 0x50, 0x00, 0x01, 0x03, 0x02, 0x00, 0x23, 0x00, 0x02, 0x03, 0x02, 0x00,
    0x3c, 0x00, 0x02, 0x03, 0x03, 0x00, 0x3c, 0x00, 0x05, 0x01, 0x00, 0x00, 0xe6, 0x00, 0x05, 0x01,
    0x00, 0x00, 0xdc, 0x00, 0x06, 0x00, 0x01, 0x00, 0x2c, 0x01, 0x06, 0x01, 0x01, 0x00, 0xfa, 0x00,
    0x06, 0x01, 0x00, 0x00, 0x1c, 0x02, 0x04, 0x00, 0x00, 0x00, 0x96, 0x00, 0x01, 0x03, 0x03, 0x00,
    0x00, 0x00, 0x02, 0x02, 0x03, 0x00, 0x00, 0x00, 0x03, 0x02, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00,
};

Unk_020db984 *data_021c488c;

Unk_0204fe98_Global data_021c4890;
