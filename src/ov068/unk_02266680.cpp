#include "types.h"
#include "Unk_020d8c7c.h"

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

extern "C" {
extern Unk_ov068_02266680_Vec data_021f4880;
extern void *data_021c47c4;
extern u16 data_020c6cc8;
extern s32 data_ov068_0226fc48;
extern s32 data_ov068_0226fc40;
extern s32 data_ov068_0226fc44;
extern u8 data_ov068_0226fc94[];
extern u32 data_ov068_0226f18c[];
extern void *data_ov068_0226fcb0[];
Unk_ov068_02266680_Vec *func_020947f0(s32 id);
void func_0203a458();
void func_0203a468();
void func_01ffcbb0(Unk_ov068_02266680_Vec *out, Unk_ov068_02266680 *self);
void func_01ffca8c(Unk_ov068_02266680_Vec *a, void *b, Unk_ov068_02266680_Vec *c);
void func_020e759c(void *a, s32 b, s32 c);
s32 func_020e7d4c(void *a, Unk_ov068_02266680_Vec *v, s32 c, s32 d, s32 e);
s32 func_020e769c(void *a, s32 b, s32 c);
s32 func_0204ea88(void *, s32 *, s32 *, s32 *, s32 *, u16 *, u16 *, s32, s32);
void func_0204eda4(Unk_ov068_02266680_Vec *out, s32 a, s32 b, s32 c, s32 d);
s32 func_ov068_0226647c(Unk_ov068_02266680 *self);
void func_ov068_02266624(Unk_ov068_02266680 *self, s32 a);
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

    void func_0203b350(Unk_ov068_02266680_Vec *v);
    void func_0203b484(Unk_ov068_02266680_Vec *v, s32 a, s32 b, s32 c);
    void func_0203b56c();
    void func_0203bb0c(s32 a);
    void func_0203c09c(s32 a);
    void func_0203c1a4(s32 a, s32 b);
    s16 func_0203bc7c();
    s16 func_0203bc68();
    s32 func_0203bc48();

    u8 pad_00[0x110];
    s32 unk_110, unk_114, unk_118;
    u8 pad_11c[0x1fc - 0x11c];
    s32 unk_1fc;
    u8 pad_200[0x21c - 0x200];
    Unk_ov068_02266680_Sub unk_21c;
};


// ---------------------------------------------------------------------------------------------------------------------
// Scene object derived from Unk_020d8bc8 (vtable 0x0226ff34)
class Unk_020d8bc8 : public Unk_020d8c7c_Base {
public:
    virtual ~Unk_020d8bc8();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(s32 a);

    /* 0x004 */ u8 pad_04[0x650];
};

class Unk_ov068_0226ff34_Sub {
public:
    void func_ov068_02266f94();
    u32 pad[2];
};

class Unk_ov068_0226ff34 : public Unk_020d8bc8 {
public:
    virtual ~Unk_ov068_0226ff34();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(s32 a);

    s32 func_ov068_02267238(s32 a);

    /* 0x654 */ s32 unk_654;
    /* 0x658 */ Unk_ov068_0226ff34_Sub unk_658;
};

// Menu-state object (vtable 0x0226fea4)
class Unk_ov068_0226fb80;

struct Unk_ov068_02266bd0_Scene {
    u8 pad_00[4];
    s32 unk_04, unk_08;
    u8 pad_0c[8];
    s32 unk_14;
};

struct Unk_ov068_02266f30_Out {
    void *unk_00;
    u8 unk_04;
};

class Unk_020d8b38 {
public:
    virtual ~Unk_020d8b38();
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
    virtual void vfunc_78(Unk_ov068_02266f30_Out *out);
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();

    /* 0x04 */ u8 pad_04[0x18];
    /* 0x1c */ u8 unk_1c[2];
    /* 0x1e */ u8 unk_1e;
    /* 0x1f */ u8 pad_1f[0x1d];
    /* 0x3c */ Unk_ov068_02266bd0_Scene *unk_3c;
    /* 0x40 */ u8 pad_40[0x6c];
};

class Unk_ov068_0226fea4;

struct Unk_ov068_0226fea4_Ent {
    void (Unk_ov068_0226fea4::*fn)();
    u32 pad;
};

struct Unk_ov068_0226fea4_Flag {
    u8 flag;
    u8 pad[11];
};

extern "C" {
extern u8 data_021edb68;
extern u8 data_021edb5c[];
extern u8 data_021e58a8[];
extern u8 data_021d735c[];
extern void *data_ov068_0226fcfc;
extern Unk_ov068_0226fea4_Flag data_ov068_0226fe1c[];
extern Unk_ov068_0226fea4_Ent data_ov068_0226fe14[];
void func_02034d70(s32 a);
void func_02034e10(s32 a, s32 b, s32 c, s32 d);
void func_02094f48(s32 a, s32 b);
s32 func_02019790(void *p);
s32 func_020197a8(void *p);
void func_020196b4(void *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_020a0318();
s32 func_020a0304();
void func_02067a84(void *self, u8 *buf, void *p);
void func_0203a680(Unk_ov068_02266680_Vec *v);
void *func_0209750c();
void func_02097ff4(void *self, s32 a);
void *func_02060388(void *self);
s32 func_020978a4(void *self);
void func_02015958(void *self, void *a, s32 b, s32 c, s32 d, s32 e);
}


class Unk_ov068_0226fea4 : public Unk_020d8b38 {
public:
    virtual ~Unk_ov068_0226fea4();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_78(Unk_ov068_02266f30_Out *out);
    virtual void vfunc_80();
    virtual void vfunc_84();

    void func_ov068_02266bd0();
    void func_ov068_02266d64(s32 a);
    void func_ov068_02266f58(Unk_ov068_0226fb80 *o);

    /* 0xac */ s32 unk_ac;
    /* 0xb0 */ u8 unk_b0;
    /* 0xb1 */ u8 pad_b1[3];
    /* 0xb4 */ Unk_ov068_0226fb80 *unk_b4;
};

struct Unk_ov068_02266bd0_Owner {
    u8 pad_00[0x5c];
    Unk_ov068_02266680_Vec unk_5c;
    u8 pad_68[0x564 - 0x68];
    u8 unk_564[0x1b0];
    Unk_ov068_02266680_Vec unk_714;
};

#define R_TAIL(V) \
    func_0203b56c(); \
    func_01ffcbb0(&V, this); \
    s32 a = func_0203bc7c(); \
    s32 b = func_0203bc68(); \
    func_0203b484(&V, a, b, func_0203bc48());

void Unk_ov068_02266680::func_ov068_02266680() {
    Unk_ov068_02266680_Vec v;
    unk_110 = data_021f4880.x;
    unk_114 = data_021f4880.y;
    unk_118 = data_021f4880.z;
    unk_114 += func_ov068_0226647c(this);
    R_TAIL(v)
}

BOOL Unk_ov068_02266680::func_ov068_022666f4() {
    func_0203c1a4(0x10, 0);
    func_0203c09c(0);
    if (unk_1fc == 2) {
        func_0203a458();
    } else {
        func_0203a468();
    }
    func_0203bb0c(0x1c71);
    func_ov068_02266624(this, 0);
    return TRUE;
}

void Unk_ov068_02266680::func_ov068_0226673c() {
    Unk_ov068_02266680_Vec d;
    d = data_021f4880;
    Unk_ov068_02266680_Vec *p = func_020947f0(4);
    if (p) {
        d = *p;
    }
    func_0203b350(&d);
    Unk_ov068_02266680_Vec v;
    R_TAIL(v)
}

BOOL Unk_ov068_02266680::func_ov068_022667ac() {
    func_0203c1a4(0x1a, 0);
    func_0203a468();
    return TRUE;
}

void Unk_ov068_02266680::func_ov068_022667c4() {
    Unk_ov068_02266680_Sub *s = &unk_21c;
    Unk_ov068_02266680_Vec v;
    v.x = s->unk_04;
    v.y = s->unk_08;
    v.z = s->unk_0c;
    func_01ffca8c(&v, s->unk_10, &v);
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

BOOL Unk_ov068_02266680::func_ov068_022669c8() {
    u16 e[2];
    func_0203c1a4(0, 0);
    func_0203c09c(0);
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
    func_0203b350(&d);
    Unk_ov068_02266680_Vec v;
    R_TAIL(v)
}

BOOL Unk_ov068_02266680::func_ov068_02266b24() {
    func_0203c1a4(0, 0);
    func_0203c09c(0);
    func_0203a468();
    return TRUE;
}

// ---------------------------------------------------------------------------------------------------------------------
Unk_ov068_0226ff34::~Unk_ov068_0226ff34() {
    unk_658.func_ov068_02266f94();
}

void Unk_ov068_0226ff34::vfunc_4c(s32 a) {
    switch (a) {
    case 1:
        func_ov068_02267238(2);
        break;
    case 8:
        func_ov068_02267238(5);
        break;
    }
}

BOOL Unk_ov068_0226ff34::vfunc_48() {
    BOOL r = FALSE;
    if (unk_654 == 0) {
        r = TRUE;
    }
    return r;
}

void Unk_ov068_0226fea4::func_ov068_02266bd0() {
    switch (unk_b0) {
    case 0:
        if (unk_3c->unk_04 == 5) {
            func_02034d70(0x13);
            func_02034e10(0x15, 0x47, 0x7f, 1);
            func_02094f48(0, 4);
            Unk_ov068_02266bd0_Owner *o = (Unk_ov068_02266bd0_Owner *)unk_b4;
            Unk_ov068_02266680_Vec *pv = &o->unk_5c;
            Unk_ov068_02266680_Vec *pd = &o->unk_714;
            pd->x = pv->x;
            pd->y = pv->y;
            pd->z = pv->z;
            o = (Unk_ov068_02266bd0_Owner *)unk_b4;
            o->unk_714.x += 0x6000;
            o = (Unk_ov068_02266bd0_Owner *)unk_b4;
            func_020196b4(o->unk_564, 2, 2, o->unk_714.x, o->unk_714.z, 0, 0, 0, 0, data_020c6cc8, 0);
            unk_b0 = 1;
        }
        break;
    case 1: {
        Unk_ov068_02266bd0_Owner *o = (Unk_ov068_02266bd0_Owner *)unk_b4;
        if (func_02019790(o->unk_564) != 0) {
            o = (Unk_ov068_02266bd0_Owner *)unk_b4;
            if (func_020197a8(o->unk_564) == 2) {
                o = (Unk_ov068_02266bd0_Owner *)unk_b4;
                func_020196b4(o->unk_564, 0, 2, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
                unk_b0 = 2;
            }
        }
        break;
    }
    case 2: {
        Unk_ov068_02266bd0_Owner *o = (Unk_ov068_02266bd0_Owner *)unk_b4;
        if (func_02019790(o->unk_564) != 0) {
            o = (Unk_ov068_02266bd0_Owner *)unk_b4;
            if (func_020197a8(o->unk_564) == 0) {
                Unk_ov068_02266bd0_Scene *sc = unk_3c;
                volatile u8 buf = data_021edb68;
                if (func_020a0318() != 0) {
                    buf = 0xd;
                } else {
                    buf = 0xa;
                }
                func_02067a84(sc, (u8 *)&buf, data_ov068_0226fcfc);
                sc->unk_08 = 1;
                o = (Unk_ov068_02266bd0_Owner *)unk_b4;
                Unk_ov068_02266680_Vec t;
                Unk_ov068_02266680_Vec *pt = &o->unk_5c;
                t.x = pt->x;
                t.y = pt->y;
                t.z = pt->z;
                t.y += 0x2000;
                func_0203a680(&t);
                func_ov068_02266d64(0);
            }
        }
        break;
    }
    }
}

void Unk_ov068_0226fea4::func_ov068_02266d64(s32 a) {
    unk_ac = a;
    unk_b0 = 0;
}

void Unk_ov068_0226fea4::vfunc_84() {
    if (data_ov068_0226fe1c[unk_ac].flag == 0) {
        if (data_ov068_0226fe14[unk_ac].fn) {
            (this->*data_ov068_0226fe14[unk_ac].fn)();
            func_ov068_02266d64(0);
        }
    }
}

void Unk_ov068_0226fea4::vfunc_80() {
    if (data_ov068_0226fe1c[unk_ac].flag != 0) {
        if (data_ov068_0226fe14[unk_ac].fn) {
            (this->*data_ov068_0226fe14[unk_ac].fn)();
        }
    }
}

void Unk_ov068_0226fea4::vfunc_18() {
}

void Unk_ov068_0226fea4::vfunc_14() {
    Unk_ov068_02266bd0_Scene *sc = unk_3c;
    volatile u8 buf = data_021edb68;
    buf = 0;
    switch (unk_1e) {
    case 0x22:
        func_02067a84(sc, data_021edb5c, 0);
        sc->unk_14 = 0;
        func_ov068_02266d64(1);
        break;
    case 10:
    case 13: {
        void *p = func_02060388(data_021e58a8);
        if (p == 0) {
            buf = 0xf;
        } else {
            func_02015958(this, p, 1, 0xa, 1, 0);
            if (func_020a0318() != 0) {
                buf = 0x1c;
            } else if (func_020978a4(data_021d735c) <= 1) {
                buf = 0x27;
            } else {
                buf = 0xb;
            }
        }
        break;
    }
    case 11:
    case 0x1c:
    case 0x27:
        if (func_020a0304() == 0 && func_020a0318() == 0) {
            buf = 0xe;
        } else {
            buf = 0xc;
        }
        break;
    case 15:
        if (func_020a0304() == 0 && func_020a0318() == 0) {
            buf = 0x10;
        } else {
            buf = 0x11;
        }
        break;
    }
    if (buf != 0) {
        func_02067a84(sc, (u8 *)&buf, data_ov068_0226fcfc);
    }
}

void Unk_ov068_0226fea4::vfunc_78(Unk_ov068_02266f30_Out *out) {
    void *p = func_0209750c();
    if (p != 0) {
        func_02097ff4(p, 0x23);
    }
    out->unk_00 = data_ov068_0226fcfc;
    out->unk_04 = 0x22;
}

void Unk_ov068_0226fea4::func_ov068_02266f58(Unk_ov068_0226fb80 *o) {
    vfunc_08();
    unk_b4 = o;
}

Unk_ov068_0226fea4::~Unk_ov068_0226fea4() {
}
