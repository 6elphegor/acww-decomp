#include "types.h"
#include "Unk_020d8c7c.h"

struct Unk_0203e22c_State {
    /* 0x00 */ u8 pad_00[8];
    /* 0x08 */ u8 unk_08;
    /* 0x09 */ u8 pad_09[3];
    /* 0x0c */ void *unk_0c;
    /* 0x10 */ u32 unk_10;
    /* 0x14 */ u8 unk_14;
    /* 0x15 */ u8 unk_15;
    /* 0x16 */ u8 unk_16;
    /* 0x17 */ u8 unk_17;
};

class Unk_020d9670;

struct Unk_0203e5d0_Node {
    /* 0x00 */ u32 unk_00;
    /* 0x04 */ Unk_0203e5d0_Node *unk_04;
    /* 0x08 */ u32 unk_08;
    /* 0x0c */ Unk_020d9670 *unk_0c;
};

struct Unk_0203e5d0_List {
    /* 0x00 */ Unk_0203e5d0_Node *unk_00;
};

struct Unk_0203e938_Net {
    /* 0x00 */ u8 pad_00[0x64];
    /* 0x64 */ u32 unk_64;
};

struct Unk_0203e4f0_Vec {
    s32 x, y, z;
};

extern "C" {
extern Unk_0203e22c_State *data_021c39c0;
extern u32 data_021c39c4;
extern u32 data_021c39c8;
extern u32 data_021c39cc;
extern Unk_0203e5d0_List data_021c39d4;
extern u32 data_021c39dc;
extern u32 data_021c39e0[4];
extern u8 data_020d96d0;
extern Unk_0203e938_Net *volatile data_020cbb18;
extern s16 data_020c905c;
extern u8 data_0213c874[];

void func_02065328(void *);
void func_0203ebb0(void);
void func_0203d904(u32);
BOOL func_02094960(void);
void func_0203d640(u32);
BOOL func_02094c38(void);
u32 func_0206ec6c(u32);
BOOL func_0206f140(void);
BOOL func_02094e64(void);
BOOL func_02094d3c(void);
void func_0206f0f8(u32);
s32 func_020b14f0(void);
Unk_0203e22c_State *func_0203eb78(void);
void func_020e79a0(void *, void *);
s32 func_01ffcb0c(s32);
u32 func_0203d5e4(s32);
u32 func_0203d5f0(s32);
s32 func_02002bdc(Unk_0203e4f0_Vec *, Unk_0203e4f0_Vec *);
long long func_020e9630(Unk_0203e4f0_Vec *);
void *func_020652c0(void *, u32);
void func_020652dc(void *, void *);
void func_02002ee0(void *, s32);
void func_0203eb04(u8 a, u32 aid, ...);
void func_0203eab8(u32 idx);
u32 func_0203eac8(u32 idx, u32 id);
void func_0203ea08(u32);
s32 func_0203ea74(u32);
BOOL func_020729cc(void *, u32);
void *func_02095204(u32);
BOOL func_02072e44(void *);
void func_020728d4(void *);
void func_020728a4(void *, void *, u32);
void func_02072824(void *, u32, u32);
BOOL func_020a62a0(void);
void func_0203e938(u32 id, u8 x, u8 mode);
void func_0203e358(void);
void func_0203eb38(void);
Unk_020d9670 *func_0203e604(u32 id);
}

class Unk_020d5d84 : public Unk_020d8c7c {
public:
    Unk_020d5d84();
    virtual BOOL vfunc_04();
    virtual void vfunc_08();
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_14();
    virtual BOOL vfunc_1c();
    virtual ~Unk_020d5d84() { func_020e79a0(data_0213c874, &unk_50); }

    /* 0x50 */ u8 unk_50[0xc];
    /* 0x5c */ s32 unk_5c[3];
    /* 0x68 */ u8 pad_68[0xd4 - 0x68];
};

class Unk_020d9670 : public Unk_020d5d84 {
public:
    Unk_020d9670();
    virtual ~Unk_020d9670();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_1c();
    virtual BOOL vfunc_48(void *a);
    virtual void vfunc_4c(u32 a, u8 b);
    virtual Unk_0203e4f0_Vec *vfunc_50();
    virtual BOOL vfunc_54(void *a);
    virtual BOOL vfunc_58(void *a);
    virtual BOOL vfunc_5c();

    void func_0203e3b4(u32 mask);
    void func_0203e3c4(u32 mask);
    BOOL func_0203e3d4(u32 mask);
    BOOL func_0203e3e8();
    void func_0203e3f4();
    s32 func_0203e400();
    void func_0203e42c();
    void func_0203e438();
    void func_0203e450();
    void func_0203e468(s32 v);
    void func_0203e47c(s32 a);
    void func_0203e488(s32 a);
    BOOL func_0203e4a8(Unk_020d9670 *other);
    BOOL func_0203e4f0(Unk_020d9670 *other);
    BOOL func_0203e574(Unk_020d9670 *other, s16 lo, s16 hi);
    void func_0203e624(u32 a);
    u32 func_0203e630();
    void func_0203e678(s32 a);

    /* 0xd4 */ Unk_0203e5d0_Node unk_d4;
    /* 0xe4 */ s32 unk_e4;
    /* 0xe8 */ u16 unk_e8;
    /* 0xea */ u16 pad_ea;
};

class Unk_020d9620 : public Unk_020d8c7c {
public:
    Unk_020d9620() {}
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual ~Unk_020d9620();
};

extern "C" {

BOOL func_0203e22c(Unk_0203e22c_State *s) {
    switch (func_0203ea74(s->unk_10)) {
    case 2:
        s->unk_16 = 2;
        break;
    case 1:
        s->unk_16 = 1;
        break;
    case 0:
        return FALSE;
    }
    if (s->unk_15 != 7 && !func_02094960()) {
        return FALSE;
    }
    func_0203d640(s->unk_10);
    func_0203ea08(s->unk_10);
    return TRUE;
}

BOOL func_0203e278(void) {
    if (func_02094c38()) {
        return TRUE;
    }
    return FALSE;
}

u32 func_0203e290(u32 a) {
    return func_0206ec6c(a);
}

BOOL func_0203e298(Unk_0203e22c_State *s) {
    if (!func_0206f140()) {
        return FALSE;
    }
    if (!func_02094e64()) {
        return FALSE;
    }
    if (!func_02094d3c()) {
        return FALSE;
    }
    func_0206f0f8(s->unk_16);
    return TRUE;
}

BOOL func_0203e2f4(void) {
    if (data_021c39c0) {
        return TRUE;
    }
    return FALSE;
}

void func_0203e308(void) {
    func_0203e358();
    Unk_0203e22c_State *s = func_0203eb78();
    s32 r = func_020b14f0();
    if (r != 0) {
        s->unk_0c = (void *)r;
        s->unk_10 = 0;
        s->unk_15 = 0xc;
        s->unk_14 = 2;
        s->unk_16 = 7;
    } else {
        s->unk_0c = 0;
        s->unk_10 = 0;
        s->unk_15 = 4;
        s->unk_14 = 3;
        s->unk_16 = 5;
    }
    s->unk_08 = 1;
    s->unk_17 = 5;
    data_021c39c0 = s;
}

void func_0203e358(void) {
    func_02065328(&data_021c39cc);
    func_0203ebb0();
    data_021c39c0 = 0;
    data_021c39c4 = 0;
    func_0203d904(6);
}

Unk_020d9620 *func_0203e388(void) {
    return new Unk_020d9620();
}

void func_0203e6e4(void) {
    func_02065328(&data_021c39d4);
}

void func_0203e8d4(void *msg, u32 aid) {
    func_0203eab8((u8)aid);
}

void func_0203e8e0(u8 *msg) {
    data_020d96d0 = msg[0];
}

void func_0203e8ec(u8 *msg, u32 aid) {
    u32 id = (msg[4] << 24) | ((msg[3] << 16) | (msg[1] | (msg[2] << 8)));
    if (func_0203eac8((u8)aid, id)) {
        data_021c39e0[aid] = id;
        func_0203eb04(1, aid);
    } else {
        func_0203eb04(2, aid);
    }
}

void func_0203e938(u32 id, u8 x, u8 mode) {
    if (func_02072e44(data_020cbb18)) {
        u8 buf[6];
        data_020d96d0 = mode;
        buf[0] = mode;
        buf[1] = id;
        buf[2] = id >> 8;
        buf[3] = id >> 16;
        buf[4] = id >> 24;
        buf[5] = x;
        Unk_0203e938_Net *o = data_020cbb18;
        func_020728d4(o);
        func_020728a4(o, buf, 6);
        func_02072824(o, 0x17, 6);
    }
}

void func_0203e994(u32 id, u8 x) {
    func_0203e938(id, x, 5);
}

void func_0203e9a0(u32 id, u8 x) {
    func_0203e938(id, x, 4);
}

s32 func_0203e9ac(void) {
    if (!func_02072e44(data_020cbb18)) {
        return 2;
    }
    if (func_020a62a0()) {
        return 2;
    }
    return 1;
}

void func_0203e9d8(void) {
    Unk_0203e938_Net *o = data_020cbb18;
    if (func_02072e44(o)) {
        if (o->unk_64 == 0) {
            func_0203eab8(0);
        } else {
            func_0203eb04(3, 0);
        }
    }
}

void func_0203ea08(u32 id) {
    Unk_0203e938_Net *o = data_020cbb18;
    if (func_02072e44(o)) {
        if (o->unk_64 == 0) {
            data_021c39e0[o->unk_64] = id;
        } else {
            u8 buf[5];
            data_020d96d0 = 0;
            buf[0] = 0;
            buf[1] = id;
            buf[2] = id >> 8;
            buf[3] = id >> 16;
            buf[4] = id >> 24;
            Unk_0203e938_Net *p = data_020cbb18;
            func_020728d4(p);
            func_020728a4(p, buf, 5);
            func_02072824(p, 0x17, 0);
        }
    }
}

s32 func_0203ea74(u32 id) {
    Unk_0203e938_Net *o = data_020cbb18;
    if (!func_02072e44(o)) {
        return 2;
    }
    if (o->unk_64 == 0) {
        if (func_0203eac8((u8)o->unk_64, id)) {
            return 2;
        }
        return 0;
    }
    return 1;
}

void func_0203eab8(u32 idx) {
    data_021c39e0[idx] = 0;
}

u32 func_0203eac8(u32 idx, u32 id) {
    if (data_021c39e0[idx] != 0) {
        return 0;
    }
    if (data_021c39dc == id) {
        return 0;
    }
    for (s32 i = 0; i < 4; i++) {
        if (id == data_021c39e0[i]) {
            return 0;
        }
    }
    return 1;
}

void func_0203eb04(u8 a, u32 aid, ...) {
    Unk_0203e938_Net *o = data_020cbb18;
    func_020728d4(o);
    func_020728a4(o, &a, 1);
    func_02072824(o, 0x17, aid);
}

void func_0203eb38(void) {
    for (s32 i = 0; i < 4; i++) {
        data_021c39e0[i] = 0;
    }
    data_021c39dc = 0;
    data_020d96d0 = 6;
}

void func_0203e7d0(u8 *msg, u32 aid) {
    u32 r6 = msg[5];
    Unk_020d9670 *o = func_0203e604((msg[4] << 24) | ((msg[3] << 16) | (msg[1] | (msg[2] << 8))));
    void *w = func_02095204(aid);
    if (!o || !w) {
        if (msg[0] == 4) {
            if (!func_020729cc(data_020cbb18, aid)) {
                func_0203eb04(2, aid);
            } else {
                data_020d96d0 = 2;
            }
        }
    } else if (msg[0] == 5) {
        o->vfunc_4c(r6, (u8)aid);
    } else {
        BOOL r5 = FALSE;
        switch (r6) {
        case 0:
            r5 = o->vfunc_48(w);
            break;
        case 5:
            r5 = o->vfunc_54(w);
            break;
        case 1:
            r5 = o->vfunc_58(w);
            break;
        }
        if (!func_020729cc(data_020cbb18, aid)) {
            if (r5) {
                o->vfunc_4c(3, (u8)aid);
                func_0203eb04(1, aid);
            } else {
                func_0203eb04(2, aid);
            }
        } else {
            if (r5) {
                o->vfunc_4c(3, 4);
                data_020d96d0 = 1;
            } else {
                data_020d96d0 = 2;
            }
        }
    }
}

Unk_020d9670 *func_0203e5d0(Unk_020d9670 *self) {
    for (Unk_0203e5d0_Node *n = data_021c39d4.unk_00; n; n = n->unk_04) {
        Unk_020d9670 *o = n->unk_0c;
        if (o == self) {
            continue;
        }
        if (o->func_0203e4a8(self)) {
            return o;
        }
    }
    return 0;
}

Unk_020d9670 *func_0203e604(u32 id) {
    Unk_0203e5d0_Node *n = (Unk_0203e5d0_Node *)func_020652c0(&data_021c39d4, id);
    if (n) {
        return n->unk_0c;
    }
    return 0;
}

}

Unk_020d9620::~Unk_020d9620() {}
BOOL Unk_020d9620::vfunc_00() {
    func_0203e358();
    func_0203eb38();
    data_021c39c8 = 0;
    return TRUE;
}
BOOL Unk_020d9620::vfunc_0c() { return TRUE; }

void Unk_020d9670::func_0203e3b4(u32 mask) { unk_e8 = unk_e8 & ~mask; }
void Unk_020d9670::func_0203e3c4(u32 mask) { unk_e8 = unk_e8 | mask; }
BOOL Unk_020d9670::func_0203e3d4(u32 mask) {
    if (unk_e8 & mask) {
        return TRUE;
    }
    return FALSE;
}
BOOL Unk_020d9670::func_0203e3e8() { return func_0203e3d4(4); }
void Unk_020d9670::func_0203e3f4() { func_0203e3c4(4); }
s32 Unk_020d9670::func_0203e400() {
    if (func_0203e3d4(1)) {
        return 0;
    }
    if (func_0203e3d4(2)) {
        return 1;
    }
    return 2;
}
void Unk_020d9670::func_0203e42c() { func_0203e3b4(3); }
void Unk_020d9670::func_0203e438() {
    func_0203e3b4(3);
    func_0203e3c4(2);
}
void Unk_020d9670::func_0203e450() {
    func_0203e3b4(3);
    func_0203e3c4(1);
}
void Unk_020d9670::func_0203e468(s32 v) { unk_e4 = func_01ffcb0c(v); }
void Unk_020d9670::func_0203e47c(s32 a) { func_0203d5e4(a); }
void Unk_020d9670::func_0203e488(s32 a) { func_0203d5f0(a); }
BOOL Unk_020d9670::vfunc_48(void *a) { return FALSE; }
void Unk_020d9670::vfunc_4c(u32 a, u8 b) {}
Unk_0203e4f0_Vec *Unk_020d9670::vfunc_50() { return (Unk_0203e4f0_Vec *)unk_5c; }
BOOL Unk_020d9670::vfunc_54(void *a) { return FALSE; }
BOOL Unk_020d9670::vfunc_58(void *a) { return FALSE; }
BOOL Unk_020d9670::vfunc_5c() { return FALSE; }

BOOL Unk_020d9670::func_0203e4a8(Unk_020d9670 *other) {
    if (func_0203e4f0(other)) {
        s16 t = data_020c905c;
        if (func_0203e574(other, -t, t)) {
            return vfunc_48(other);
        }
    }
    return FALSE;
}

BOOL Unk_020d9670::func_0203e4f0(Unk_020d9670 *other) {
    Unk_0203e4f0_Vec d;
    if (unk_e4 == 0) {
        return TRUE;
    }
    d.x = other->vfunc_50()->x - vfunc_50()->x;
    d.y = other->vfunc_50()->y - vfunc_50()->y;
    d.z = other->vfunc_50()->z - vfunc_50()->z;
    if (func_020e9630(&d) < (long long)unk_e4) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_020d9670::func_0203e574(Unk_020d9670 *other, s16 lo, s16 hi) {
    Unk_0203e4f0_Vec a, b;
    a = *other->vfunc_50();
    b = *vfunc_50();
    s16 d = func_02002bdc(&a, &b) - *(s16 *)((u8 *)other + 0x8e);
    if (d >= lo && d <= hi) {
        return TRUE;
    }
    return FALSE;
}

void Unk_020d9670::func_0203e624(u32 a) {
    unk_d4.unk_08 = a | (*(u16 *)((u8 *)this + 0xc) << 16);
}
u32 Unk_020d9670::func_0203e630() { return unk_d4.unk_08; }

BOOL Unk_020d9670::vfunc_1c() {
    if (Unk_020d5d84::vfunc_1c()) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_020d9670::vfunc_10() {
    if (!Unk_020d5d84::vfunc_10()) {
        return FALSE;
    }
    func_020e79a0(&data_021c39d4, &unk_d4);
    return TRUE;
}

void Unk_020d9670::func_0203e678(s32 a) {
    if (a == 2) {
        func_020652dc(&data_021c39d4, &unk_d4);
    }
    func_02002ee0(this, a);
}

BOOL Unk_020d9670::vfunc_04() {
    if (!Unk_020d5d84::vfunc_04()) {
        return FALSE;
    }
    unk_d4.unk_08 = 0;
    unk_d4.unk_0c = this;
    func_0203e468(0x3000);
    unk_e8 = 0;
    func_0203e438();
    return TRUE;
}

Unk_020d9670::~Unk_020d9670() {}

Unk_020d9670::Unk_020d9670() {
    unk_d4.unk_00 = 0;
    unk_d4.unk_04 = 0;
    unk_d4.unk_08 = 0;
}
