// mwcc-version: 1.2/base
#include "types.h"

struct Unk_ov068_02266680_Vec {
    s32 x, y, z;
};

class Unk_ov068_02266680;

struct Unk_ov068_02266ab8_Owner {
    u8 pad_00[0x5c];
    Unk_ov068_02266680_Vec unk_5c;
};

// Camera-mode sub-state at +0x21c of the camera
struct Unk_ov068_02266680_Sub {
    u16 unk_00;
    s16 unk_02;
    s32 unk_04, unk_08, unk_0c;
    Unk_ov068_02266680_Vec *unk_10;
    s32 unk_14;
};

struct Unk_ov068_022667c4_Ent {
    u16 lo, hi;
};

// Camera object (data_021c3070); fields used by func_ov068_0226647c and friends
struct Unk_ov068_0226647c_Cam {
    /* 0x000 */ u8 pad_000[0x174];
    /* 0x174 */ s16 unk_174;
    /* 0x176 */ u8 pad_176[0x21c - 0x176];
    /* 0x21c */ s16 unk_21c;
    /* 0x21e */ s16 unk_21e;
    /* 0x220 */ u16 unk_220;
    /* 0x222 */ u16 unk_222;
    /* 0x224 */ u8 unk_224;
    /* 0x225 */ u8 unk_225;
};

struct Unk_ov068_0226647c_Row {
    u16 a;
    u16 b;
    s16 c;
    s16 pad;
    s32 d;
};

struct Unk_ov068_02266680_Color {
    u8 a, b, c, d;
    Unk_ov068_02266680_Color(u8 a_, u8 b_, u8 c_, u8 d_) {
        a = a_;
        b = b_;
        c = c_;
        d = d_;
    }
};

extern "C" {
extern Unk_ov068_02266680_Vec data_021f4880;
extern void *data_021c47c4;
extern Unk_ov068_0226647c_Row data_020c8d0c[];
extern s16 data_02135f44[];
extern s32 data_ov068_0226fc48;
extern s32 data_ov068_0226fc40;
extern s32 data_ov068_0226fc44;
extern u16 data_ov068_0226fc94[];
extern const u32 data_ov068_0226f18c[];
extern void *data_ov068_0226fcb0[];
Unk_ov068_02266680_Vec *func_020947f0(s32 id);
void func_0203a458();
void func_0203a468();
void func_01ffcbb0(Unk_ov068_02266680_Vec *out, Unk_ov068_02266680 *self);
void VEC_Add(Unk_ov068_02266680_Vec *a, void *b, Unk_ov068_02266680_Vec *c);
void func_020e759c(void *a, s32 b, s32 c);
s32 func_020e7d4c(void *a, Unk_ov068_02266680_Vec *v, s32 c, s32 d, s32 e);
s32 func_020e769c(void *a, s32 b, s32 c);
s32 func_0204ea88(void *, s32 *, s32 *, s32 *, s32 *, u16 *, u16 *, s32, s32);
void func_0204eda4(Unk_ov068_02266680_Vec *out, s32 a, s32 b, s32 c, s32 d);
s32 func_020e7500(void *);
s32 func_01ffcb0c(s32, s32);
s32 func_02063b8c(s32);
s32 func_ov068_0226647c(Unk_ov068_0226647c_Cam *c);
void func_ov068_022665c8(Unk_ov068_0226647c_Cam *c, s32 idx);
void func_ov068_02266624(Unk_ov068_0226647c_Cam *c, s32 idx);
}

class Unk_ov068_02266680 {
public:
    void func_ov068_02266680();
    BOOL func_ov068_022666f4();
    void func_ov068_0226673c();
    BOOL func_ov068_022667ac();
    void func_ov068_022667c4();
    BOOL func_ov068_022669c8();
    void func_ov068_02266ab8();
    BOOL func_ov068_02266b24();

    u8 pad_00[0x110];
    s32 unk_110, unk_114, unk_118;
    u8 pad_11c[0x1fc - 0x11c];
    s32 unk_1fc;
    u8 pad_200[0x21c - 0x200];
    Unk_ov068_02266680_Sub unk_21c;
};

extern "C" {
void _ZN12Unk_0203b35013func_0203b350EP14Unk_0203b350_V(void *self, Unk_ov068_02266680_Vec *v);
void _ZN12Unk_0203b35013func_0203b484EP14Unk_0203b350_Viii(void *self, Unk_ov068_02266680_Vec *v, s32 a, s32 b, s32 c);
void _ZN12Unk_0203b35013func_0203b56cEv(void *self);
void _ZN12Unk_0203b35013func_0203bb0cEi(void *self, s32 a);
s32 _ZN12Unk_0203b35013func_0203bc48Ev(void *self);
s16 _ZN12Unk_020d93b813func_0203bc68Ev(void *self);
s16 _ZN12Unk_020d93b813func_0203bc7cEv(void *self);
void _ZN12Unk_020d93b813func_0203c09cEi(void *self, s32 a);
void _ZN12Unk_020d93b813func_0203c1a4EiP16Unk_0203bc68_Pos(void *self, s32 a, s32 b);
}

#define R_TAIL(V) \
    _ZN12Unk_0203b35013func_0203b56cEv(this); \
    func_01ffcbb0(&V, this); \
    s32 a = _ZN12Unk_020d93b813func_0203bc7cEv(this); \
    s32 b = _ZN12Unk_020d93b813func_0203bc68Ev(this); \
    _ZN12Unk_0203b35013func_0203b484EP14Unk_0203b350_Viii(this, &V, a, b, _ZN12Unk_0203b35013func_0203bc48Ev(this));

// Definition order below reproduces the original data order (heapsort model); colours = sinit store order.
extern "C" Unk_ov068_02266680_Vec data_ov068_0226fc64;
extern "C" Unk_ov068_02266680_Vec data_ov068_0226fccc[4];
extern "C" Unk_ov068_02266680_Vec data_ov068_0226fc88;
extern "C" Unk_ov068_02266680_Vec data_ov068_0226fc4c;
extern "C" Unk_ov068_02266680_Vec data_ov068_0226fc58;
extern "C" Unk_ov068_02266680_Vec data_ov068_0226fc70;
extern "C" Unk_ov068_02266680_Vec data_ov068_0226fc7c;
extern "C" s32 data_ov068_0226fc48 = 0x100;
extern "C" void *data_ov068_0226fcb0[7] = {&data_ov068_0226fc64, data_ov068_0226fccc, &data_ov068_0226fc7c,
                                           &data_ov068_0226fc88, &data_ov068_0226fc4c, &data_ov068_0226fc58,
                                           &data_ov068_0226fc70};
extern "C" Unk_ov068_02266680_Vec data_ov068_0226fc7c = {-0xc00, 0, 0x1c00};
extern "C" Unk_ov068_02266680_Color data_ov068_02270fd4(0x1f, 0x14, 0x14, 0x1f);
extern "C" const u32 data_ov068_0226f18c[7] = {1, 2, 0, 0x800, 2, 0x200, 0x400};
extern "C" Unk_ov068_02266680_Vec data_ov068_0226fccc[4] = {{-0xc00, 0, 0x2400}, {-0xc00, 0, 0x1400},
                                                            {-0x2000, 0, 0x2400}, {-0x2c00, 0, 0x2400}};
extern "C" Unk_ov068_02266680_Color data_ov068_02270fd0(0x14, 0x14, 0x1f, 0x1f);
extern "C" Unk_ov068_02266680_Color data_ov068_02270fc4(0x1f, 0x1f, 0x14, 0x1f);
extern "C" Unk_ov068_02266680_Color data_ov068_02270fc8(0x14, 0x1f, 0x14, 0x1f);
extern "C" Unk_ov068_02266680_Vec data_ov068_0226fc58 = {0, 0, 0x1c00};
extern "C" s32 data_ov068_0226fc44 = 0x80;
extern "C" Unk_ov068_02266680_Vec data_ov068_0226fc88 = {0, 0, 0xc00};
extern "C" Unk_ov068_02266680_Color data_ov068_02270fd8(0x14, 0x1f, 0x1f, 0x1f);
extern "C" Unk_ov068_02266680_Vec data_ov068_0226fc4c = {-0xc00, 0, 0x2400};
extern "C" Unk_ov068_02266680_Vec data_ov068_0226fc64 = {0, 0, 0x1c00};
extern "C" Unk_ov068_02266680_Vec data_ov068_0226fc70 = {0x1000, 0, 0x1000};
extern "C" u16 data_ov068_0226fc94[14] = {0x5014, 0x501a, 0x500d, 0x500d, 0x5001, 0x5001, 0x5011,
                                          0x5011, 0x500c, 0x500c, 0x5000, 0x5000, 0x500b, 0x500b};
extern "C" s32 data_ov068_0226fc40 = 1;
extern "C" Unk_ov068_02266680_Color data_ov068_02270fcc(0x14, 0x18, 0x18, 0x1f);

BOOL Unk_ov068_02266680::func_ov068_02266b24() {
    _ZN12Unk_020d93b813func_0203c1a4EiP16Unk_0203bc68_Pos(this, 0, 0);
    _ZN12Unk_020d93b813func_0203c09cEi(this, 0);
    func_0203a468();
    return TRUE;
}

void Unk_ov068_02266680::func_ov068_02266ab8() {
    Unk_ov068_02266680_Vec d;
    Unk_ov068_02266ab8_Owner *o = *(Unk_ov068_02266ab8_Owner **)((u8 *)this + 0x21c);
    d.x = 0;
    d.y = 0;
    d.z = 0;
    if (o) {
        Unk_ov068_02266680_Vec *pv = &o->unk_5c;
        d.x = pv->x;
        d.y = pv->y;
        d.z = pv->z;
    }
    _ZN12Unk_0203b35013func_0203b350EP14Unk_0203b350_V(this, &d);
    Unk_ov068_02266680_Vec v;
    R_TAIL(v)
}

BOOL Unk_ov068_02266680::func_ov068_022669c8() {
    u16 e[2];
    _ZN12Unk_020d93b813func_0203c1a4EiP16Unk_0203bc68_Pos(this, 0, 0);
    _ZN12Unk_020d93b813func_0203c09cEi(this, 0);
    func_0203a468();
    void *g = data_021c47c4;
    s32 a = 0, b = 0, c = 0, d = 0;
    Unk_ov068_02266680_Sub *s = &unk_21c;
    s->unk_00 = 0x3c;
    s->unk_02 = 0;
    if (g) {
        e[0] = 0x5014;
        e[1] = 0x501a;
        if (func_0204ea88(g, &a, &b, &c, &d, &e[0], &e[1], 1, 0) == 1) {
            Unk_ov068_02266680_Vec pos;
            func_0204eda4(&pos, a, b, c, d);
            s->unk_10 = (Unk_ov068_02266680_Vec *)data_ov068_0226fcb0[0];
            unk_110 = pos.x;
            unk_114 = pos.y;
            unk_118 = pos.z;
        }
    }
    s->unk_04 = unk_110;
    s->unk_08 = unk_114;
    s->unk_0c = unk_118;
    unk_110 += s->unk_10->x;
    unk_114 += s->unk_10->y;
    unk_118 += s->unk_10->z;
    s->unk_14 = 0;
    return TRUE;
}

void Unk_ov068_02266680::func_ov068_022667c4() {
    Unk_ov068_02266680_Sub *s = &unk_21c;
    Unk_ov068_02266680_Vec v;
    v.x = s->unk_04;
    v.y = s->unk_08;
    v.z = s->unk_0c;
    VEC_Add(&v, s->unk_10, &v);
    func_020e759c(&s->unk_14, data_ov068_0226fc48, data_ov068_0226fc40);
    if (func_020e7d4c(&unk_110, &v, data_ov068_0226fc44, s->unk_14, 8) == 0) {
        if (func_020e769c(s, 0, 1) != 0) {
            s->unk_00 = 0x3c;
            if (func_020e769c(&s->unk_02, 7, 1) != 0) {
                s->unk_02 = 0;
            }
            void *g = data_021c47c4;
            s32 cnt = 0;
            struct { u16 a, b; } out;
            s32 a = 0, b = 0, c = 0, d = 0;
            if (g != 0) {
                Unk_ov068_022667c4_Ent *tbl = (Unk_ov068_022667c4_Ent *)data_ov068_0226fc94;
                do {
                    Unk_ov068_022667c4_Ent *e = &tbl[s->unk_02];
                    u16 t = e->lo;
                    BOOL r1;
                    if (t >= 0x5001 && t <= 0x5008) {
                        r1 = TRUE;
                    } else {
                        r1 = FALSE;
                    }
                    if (r1) {
                        e->lo++;
                        if (tbl[s->unk_02].lo > 0x5008) {
                            tbl[s->unk_02].lo = 0x5001;
                        }
                        tbl[s->unk_02].hi = tbl[s->unk_02].lo;
                    } else {
                        BOOL r2;
                        if (t >= 0x500d && t <= 0x5010) {
                            r2 = TRUE;
                        } else {
                            r2 = FALSE;
                        }
                        if (r2) {
                            e->lo++;
                            if (tbl[s->unk_02].lo > 0x5010) {
                                tbl[s->unk_02].lo = 0x500d;
                            }
                            tbl[s->unk_02].hi = tbl[s->unk_02].lo;
                            cnt = tbl[s->unk_02].lo - 0x500d;
                        }
                    }
                    out.a = tbl[s->unk_02].lo;
                    out.b = tbl[s->unk_02].hi;
                } while (func_0204ea88(g, &a, &b, &c, &d, &out.a, &out.b, data_ov068_0226f18c[s->unk_02], 0) == 0);
                Unk_ov068_02266680_Vec pos;
                func_0204eda4(&pos, a, b, c, d);
                s->unk_04 = pos.x;
                s->unk_08 = pos.y;
                s->unk_0c = pos.z;
                u8 *bs = (u8 *)data_ov068_0226fcb0[s->unk_02];
                cnt = cnt * 12;
                s->unk_10 = (Unk_ov068_02266680_Vec *)(bs + cnt);
                s->unk_14 = 0;
            }
        }
    }
    Unk_ov068_02266680_Vec vv;
    R_TAIL(vv)
}

BOOL Unk_ov068_02266680::func_ov068_022667ac() {
    _ZN12Unk_020d93b813func_0203c1a4EiP16Unk_0203bc68_Pos(this, 0x1a, 0);
    func_0203a468();
    return TRUE;
}

void Unk_ov068_02266680::func_ov068_0226673c() {
    Unk_ov068_02266680_Vec d;
    d = data_021f4880;
    Unk_ov068_02266680_Vec *p = func_020947f0(4);
    if (p) {
        d = *p;
    }
    _ZN12Unk_0203b35013func_0203b350EP14Unk_0203b350_V(this, &d);
    Unk_ov068_02266680_Vec v;
    R_TAIL(v)
}

BOOL Unk_ov068_02266680::func_ov068_022666f4() {
    _ZN12Unk_020d93b813func_0203c1a4EiP16Unk_0203bc68_Pos(this, 0x10, 0);
    _ZN12Unk_020d93b813func_0203c09cEi(this, 0);
    if (unk_1fc == 2) {
        func_0203a458();
    } else {
        func_0203a468();
    }
    _ZN12Unk_0203b35013func_0203bb0cEi(this, 0x1c71);
    func_ov068_02266624((Unk_ov068_0226647c_Cam *)this, 0);
    return TRUE;
}

void Unk_ov068_02266680::func_ov068_02266680() {
    Unk_ov068_02266680_Vec v;
    unk_110 = data_021f4880.x;
    unk_114 = data_021f4880.y;
    unk_118 = data_021f4880.z;
    unk_114 += func_ov068_0226647c((Unk_ov068_0226647c_Cam *)this);
    R_TAIL(v)
}

extern "C" void func_ov068_02266624(Unk_ov068_0226647c_Cam *c, s32 idx) {
    c->unk_224 = idx;
    if (c->unk_224 >= 4) {
        c->unk_224 = 0;
    }
    c->unk_220 = data_020c8d0c[c->unk_224].a;
    c->unk_220 += func_02063b8c(data_020c8d0c[c->unk_224].b);
    c->unk_21c = 0;
}

extern "C" void func_ov068_022665c8(Unk_ov068_0226647c_Cam *c, s32 idx) {
    c->unk_225 = idx;
    if (c->unk_225 >= 4) {
        c->unk_225 = 0;
    }
    c->unk_222 = data_020c8d0c[c->unk_225].a;
    c->unk_222 += func_02063b8c(data_020c8d0c[c->unk_225].b);
    c->unk_21e = 0;
}

extern "C" s32 func_ov068_0226647c(Unk_ov068_0226647c_Cam *c) {
    if (func_020e7500(&c->unk_220) == 0) {
        s16 a = c->unk_21c;
        if (a < 0) {
            a = -a;
        }
        if (a < 0x100) {
            u8 s = c->unk_224;
            if (s == 0) {
                if (func_02063b8c(100) < 80) {
                    c->unk_224 = 1;
                } else {
                    c->unk_224 = 2;
                }
            } else if (s == 2) {
                c->unk_224 = 1;
            } else {
                c->unk_224 = 0;
            }
            func_ov068_02266624(c, c->unk_224);
        }
    }
    if (func_020e7500(&c->unk_222) == 0) {
        s16 a = c->unk_21e;
        if (a < 0) {
            a = -a;
        }
        if (a < 0x100) {
            u8 s = c->unk_225;
            if (s == 0) {
                c->unk_225 = 1;
            } else if (s == 2) {
                c->unk_225 = 1;
            } else {
                c->unk_225 = 0;
            }
            func_ov068_022665c8(c, c->unk_225);
        }
    }
    s32 d = data_020c8d0c[c->unk_225].c;
    if (d != 0) {
        c->unk_21e = c->unk_21e + d;
        u32 idx = ((u16)c->unk_21e >> 4) * 2;
        c->unk_174 = func_01ffcb0c(data_02135f44[idx], data_020c8d0c[c->unk_225].d);
    }
    d = data_020c8d0c[c->unk_224].c;
    if (d != 0) {
        c->unk_21c = c->unk_21c + d;
        u32 idx = ((u16)c->unk_21c >> 4) * 2;
        return func_01ffcb0c(data_02135f44[idx], data_020c8d0c[c->unk_224].d);
    }
    return 0;
}
