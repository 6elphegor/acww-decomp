#include "types.h"
#include "Unk_020d8c7c.h"

class Unk_020d77a4;
class Unk_ov049_0225bf04;

struct Unk_ov049_02258ee0_Vec {
    s32 x, y, z;
};

struct Unk_ov049_02258ee0_Pos {
    s32 x, y, z;
};

struct Unk_020cbb18_Ov049 {
    u8 pad_00[0x64];
    s32 unk_64;
};

extern "C" {
extern Unk_020cbb18_Ov049 *data_020cbb18;
extern u8 data_021ef5d0[];
extern u8 data_021ef5cc[];
extern u16 data_021f47d8[];
extern s16 data_02135f44[];
extern u8 data_021edb68[];
extern char *data_ov049_0225bc58[];

s32 func_02072e44(void *g);
s16 *func_0209c37c(s32 a, s32 b);
void *func_020947f0(s32 a);
s32 func_0202ff64(void *p);
void func_0203d704(void *self, s32 a);
void *func_02095204(s32 a);
s32 func_0203e2f4();
s32 func_02014220(void *self);
s32 func_01ffcb0c(s32 a, s32 b);
void func_0204ee10(s32 *bx, s32 *by, void *pos);
void *func_ov004_02235718();
void *func_ov004_022355d8(void *self, s32 a, s32 b, s32 c);
void *func_020b50b4();
void *func_020b6048(void *a, s32 b, s32 c);
void func_020b60b0(void *a, void *b);
u16 *func_ov004_0223ea90(s32 a, s32 b);
s32 func_0204b2d4(u16 *p);
s32 func_0204b25c(u16 *p);
void func_02061478(u16 *a, u16 *b);
s32 func_ov049_0225aa48(void *dlg);
void func_ov049_0225aa50(void *dlg, s32 v);
void func_0201adc8(void *o, s32 v);
void func_02099014(void *p, s32 v);
void func_020ac8fc(s32 a, s32 b, s32 c);
s32 func_020787d4();
void func_02015ab0(void *self, s32 v);
void *func_0209750c();
void *func_0206ed38();
void *func_020986d4(void *h);
void func_02071c68(void *a, s32 b);
void *func_02071e04();
void func_02071ed0(void *a, u32 b);
void *func_020679b4(void *ctx);
void func_020679c0(void *ctx, s32 a);
void func_020aa680(void *h, s32 a, s32 b);
void func_020aa638(void *h, s32 a, u8 *b, s32 c, u8 *d, char *e, s32 f);
void func_020aa608(void *h);
void func_02067a84(void *ctx, void *msg, void *tbl);
s32 func_0206ed18();
void *func_0209865c(void *h);
void *func_02099864(void *h);
s32 func_0202e148();
s32 func_02099048();
void func_02099064(s32 a);
void func_02014ce4(void *self, u16 *p, u32 a, u32 b, u32 c);
void *func_0209a108(void *p);
void func_0209abb4(void *p, s32 a);
s32 func_ov004_02224c84();
void func_ov004_02233d08(s32 a, s32 b);
void func_ov004_02233d64(s32 a, s32 b);
s32 func_02095154(s32 a, s32 b);
void func_02067a6c(void *ctx);
u16 *func_0206eb9c();
s32 func_0204be70(u16 *p);
s32 func_02133150(s32 a, s32 b);
BOOL func_020a62a0();
void func_02015958(void *self, s32 a, s32 b, s32 c, s32 d, s32 e);
}

#define MEMBER(name, size) \
    struct name { \
        u8 unk_00[size]; \
        name(); \
        ~name(); \
    }
struct Unk_02053d3c {
    u8 pad_00[0xa4];
    s32 unk_a4;
    u8 pad_a8[0x2a0 - 0xec - 0xa8];
    Unk_02053d3c();
    ~Unk_02053d3c();
};
MEMBER(Unk_0201ad3c, 0xc);
MEMBER(Unk_02019dd8, 0x334 - 0x2ac);
MEMBER(Unk_02016350, 0x1c);
MEMBER(Unk_0201accc, 0x3a8 - 0x350);
struct Unk_0201a8bc { u8 unk_00[2]; Unk_0201a8bc(); };
struct Unk_0201ad18 { u8 unk_00[6]; Unk_0201ad18(); };
MEMBER(Unk_0201a794, 0x418 - 0x3b0);
MEMBER(Unk_0201a194, 8);
MEMBER(Unk_0201a13c, 0x49c - 0x420);
MEMBER(Unk_020323b0, 0x30);
struct Unk_02088d00 {
    u8 pad_00[0x1c];
    u32 unk_1c;
    u8 pad_20[0x514 - 0x4cc - 0x20];
    Unk_02088d00();
    ~Unk_02088d00();
};
struct Unk_020135e4 {
    u8 pad_00[8];
    u8 unk_08;
    u8 pad_09[2];
    u8 unk_0b;
    Unk_020135e4();
    ~Unk_020135e4();
};
MEMBER(Unk_02019858, 0x618 - 0x564);
MEMBER(Unk_02014254, 0x28);
struct Unk_02082014 { u8 unk_00[8]; Unk_02082014(); };

struct Unk_020f4080 {
    u8 unk_00[0x558 - 0x514];
    Unk_020f4080();
    ~Unk_020f4080();
};

class Unk_020d9670 : public Unk_020d8c7c_Base {
public:
    Unk_020d9670();
    virtual ~Unk_020d9670();
    void func_0203e468(s32 v);
    u8 pad_04[0x58];
    s32 unk_5c, unk_60, unk_64;
    u8 pad_68[0x8e - 0x68];
    s16 unk_8e;
    u8 pad_90[4];
    s16 unk_94;
    u8 pad_96[0xea - 0x96];
};

class Unk_020d77a4 : public Unk_020d9670 {
public:
    Unk_020d77a4() : unk_ea(0xfff1) {}
    virtual ~Unk_020d77a4() {}
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(u32 a, s32 b);
    virtual void vfunc_50();
    virtual void vfunc_54();
    virtual BOOL vfunc_58();
    virtual void vfunc_5c();
    virtual void vfunc_60();
    virtual void vfunc_64();
    virtual BOOL vfunc_68();
    virtual u8 *vfunc_6c();
    virtual u8 *vfunc_70();
    virtual void vfunc_74();
    virtual void vfunc_78();
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();
    virtual void vfunc_88();
    virtual void vfunc_8c();
    virtual void vfunc_90();
    virtual void vfunc_94();
    virtual void vfunc_98();
    virtual void vfunc_9c();
    virtual void vfunc_a0();
    virtual void vfunc_a4();
    virtual s32 vfunc_a8();

    BOOL func_0201b9bc();
    void func_0201b964(void *dst, s32 n);
    BOOL func_0201b980(u8 *src, u32 n);
    s32 func_0201b9e8(s32 *a, s32 *b);
    void func_0201b9fc(u32 a, u32 b, u32 c, ...);
    BOOL func_0201ba88();
    void func_0201bc28(void *p);
    s32 func_0201bc4c(u32 id);
    s32 func_0201bcbc(Unk_020d77a4 *other);
    void func_0201bd9c(s32 v);

    u16 unk_ea;
    Unk_02053d3c unk_ec;
    Unk_0201ad3c unk_2a0;
    Unk_02019dd8 unk_2ac;
    Unk_02016350 unk_334;
    Unk_0201accc unk_350;
    Unk_0201a8bc unk_3a8;
    Unk_0201ad18 unk_3aa;
    Unk_0201a794 unk_3b0;
    Unk_0201a194 unk_418;
    Unk_0201a13c unk_420;
    Unk_020323b0 unk_49c;
    Unk_02088d00 unk_4cc;
    Unk_020f4080 unk_514;
    Unk_020135e4 unk_558;
    Unk_02019858 unk_564;
    Unk_02014254 unk_618;
};

class Unk_020d8bc8 : public Unk_020d77a4 {
public:
    Unk_020d8bc8() {}
    virtual ~Unk_020d8bc8();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_10();
    virtual s32 vfunc_a8();
    void func_0202e548(s32 a, s32 b);

    Unk_02082014 unk_640;
    s32 unk_648;
    s32 unk_64c;
    u8 unk_650;
};


class Unk_02015b54 {
public:
    Unk_02015b54();
    virtual ~Unk_02015b54();
    virtual void vfunc_08();
};

class Unk_ov049_0225be74 : public Unk_02015b54 {
public:
    virtual ~Unk_ov049_0225be74();

    void func_ov049_02259484();
    void func_ov049_022594e0(void *rec, s32 x);
    void func_ov049_0225955c();
    void func_ov049_02259620();
    void func_ov049_02259654();
    void func_ov049_022596b8();
    void func_ov049_02259a8c(s32 v);

    /* 0x04 */ u8 pad_04[0x3c - 4];
    /* 0x3c */ void *unk_3c;
    /* 0x40 */ u8 pad_40[0xac - 0x40];
    /* 0xac */ Unk_ov049_0225bf04 *unk_ac;
    /* 0xb0 */ s32 unk_b0;
    /* 0xb4 */ s32 unk_b4;
    /* 0xb8 */ s32 unk_b8;
    /* 0xbc */ s32 unk_bc;
    /* 0xc0 */ u8 pad_c0[0xcc - 0xc0];
};

struct Unk_02071e04 {
    u8 unk_00[0x964 - 0x738];
    Unk_02071e04();
    ~Unk_02071e04();
};

class Unk_ov049_0225bf04 : public Unk_020d8bc8 {
public:
    Unk_ov049_0225bf04() {}
    virtual ~Unk_ov049_0225bf04();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(u32 cmd, s32 arg);
    virtual BOOL vfunc_58();

    BOOL func_ov049_02258e4c();
    BOOL func_ov049_02258ec0();
    BOOL func_ov049_02258ee0();
    void func_ov049_02259140(u32 y);
    void func_ov049_0225b458(s32 state);

    /* 0x654 */ s32 unk_654;
    /* 0x658 */ Unk_ov049_0225be74 unk_658;
    /* 0x724 */ s32 unk_724;
    /* 0x728 */ s32 unk_728;
    /* 0x72c */ u8 pad_72c[0x734 - 0x72c];
    /* 0x734 */ u16 unk_734;
    /* 0x736 */ u8 pad_736[2];
    /* 0x738 */ Unk_02071e04 unk_738;
    /* 0x964 */ u8 unk_964;
};

// ---------------------------------------------------------------------------------------------------------------------
// Owner object

Unk_ov049_0225bf04::~Unk_ov049_0225bf04() {}

BOOL Unk_ov049_0225bf04::func_ov049_02258e4c() {
    if (func_02072e44(data_020cbb18) != 0 || *func_0209c37c(0, 0x4a) != 0) {
        return FALSE;
    }
    Unk_ov049_02258ee0_Vec *src = (Unk_ov049_02258ee0_Vec *)func_020947f0(4);
    Unk_ov049_02258ee0_Vec v;
    v.x = src->x;
    v.y = src->y;
    v.z = src->z;
    if (func_0202ff64(&v)) {
        func_ov049_0225aa50(&unk_658, 3);
        func_0203d704(this, 0);
        func_ov049_0225b458(0xf);
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov049_0225bf04::func_ov049_02258ec0() {
    if (func_ov049_02258ee0()) {
        func_0203d704(this, 0);
        return TRUE;
    }
    return FALSE;
}

static inline BOOL Unk_ov049_02258ee0_Flags() {
    if (data_021ef5d0[0] && data_021ef5cc[0]) {
        return TRUE;
    }
    return FALSE;
}

static inline BOOL Unk_ov049_02258ee0_Eq(u16 *p, u16 *k) {
    if (func_0204b2d4(p)) {
        *k = 0xfff1;
        s32 a = func_0204b25c(p);
        if (a == func_0204b25c(k)) return TRUE;
        return FALSE;
    }
    if (*p == 0xfff1) return TRUE;
    return FALSE;
}

BOOL Unk_ov049_0225bf04::func_ov049_02258ee0() {
    u16 t[3];
    s32 bx, by;
    Unk_ov049_02258ee0_Vec v;
    Unk_020d9670 *p = (Unk_020d9670 *)func_02095204(4);
    BOOL f = Unk_ov049_02258ee0_Flags() ? TRUE : FALSE;
    if (p == 0 || func_0203e2f4() != 0 || func_02014220(&unk_618) != 0 || ((data_021f47d8[1] & 1) == 0 && f == 0)) {
        return FALSE;
    }
    unk_734 = 0xfff1;
    Unk_ov049_02258ee0_Pos *pv = (Unk_ov049_02258ee0_Pos *)&p->unk_5c;
    v.x = p->unk_5c;
    v.y = pv->y;
    v.z = pv->z;
    u32 ang = p->unk_8e;
    bx = 0;
    by = 0;
    s32 idx = ((u16)ang >> 4) * 2;
    v.x += func_01ffcb0c(0x2000, data_02135f44[idx]);
    v.z += func_01ffcb0c(0x2000, data_02135f44[idx + 1]);
    func_0204ee10(&bx, &by, &v);
    if (f) {
        void *o = func_ov004_022355d8(func_ov004_02235718(), bx, by, 0);
        if (o != 0) {
            if (o != func_020b6048(func_020b50b4(), 0, 0)) {
                return FALSE;
            }
        } else {
            s32 bx2 = 0, by2 = 0;
            Unk_ov049_02258ee0_Vec v2;
            func_020b60b0(func_020b50b4(), &v2);
            func_0204ee10(&bx2, &by2, &v2);
            if (bx2 != bx || by2 != by) {
                return FALSE;
            }
        }
    }
    t[0] = *func_ov004_0223ea90(bx, by);
    if (Unk_ov049_02258ee0_Eq(&t[0], &t[2])) {
        return FALSE;
    }
    {
        BOOL r = FALSE;
        volatile u16 *pv = &t[0];
        u32 x = *pv;
        u32 y = *pv;
        if (y < 0x3984 || x > 0x3d83) {
        } else {
            r = TRUE;
        }
        if (r != 0 || (x >= 0x3fa4 && x <= 0x40a3) || (x >= 0x40a4 && x <= 0x4123) || (x >= 0x4124 && x <= 0x4223) ||
            (x >= 0x3e24 && x <= 0x3ea3)) {
            func_02061478(&t[1], &t[0]);
            t[0] = t[1];
            func_ov049_0225aa50(&unk_658, 4);
        } else if (x >= 0x3e04 && x <= 0x3e23) {
            func_ov049_0225aa50(&unk_658, 5);
        } else {
            return FALSE;
        }
    }
    unk_734 = t[0];
    unk_724 = bx;
    unk_728 = by;
    unk_964 = 0;
    return TRUE;
}

void Unk_ov049_0225bf04::func_ov049_02259140(u32 y) {
    void *h = func_0209750c();
    void *n = func_0206ed38();
    func_02071c68(func_020986d4(h), (s32)n);
    func_02071ed0(func_02071e04(), y);
}

void Unk_ov049_0225bf04::vfunc_4c(u32 cmd, s32 arg) {
    Unk_020cbb18_Ov049 *g;
    s32 a, b;
    switch (cmd) {
    case 3:
        *(u8 *)&unk_558.unk_08 = arg;
        if (arg != 4) {
            func_0201b9fc(1, data_020cbb18->unk_64, arg);
            func_ov049_0225b458(0xc);
        } else if (func_0201ba88()) {
            u32 t = data_020cbb18->unk_64;
            func_0201b9fc(1, t, t);
            func_ov049_0225b458(0xc);
        }
        break;
    case 1:
        unk_558.unk_08 = arg;
        if (arg != 4 && arg != data_020cbb18->unk_64) {
            func_0201b9fc(1, arg, arg);
            func_ov049_0225b458(9);
        } else if (func_0201ba88()) {
            g = data_020cbb18;
            func_0201b9fc(1, g->unk_64, g->unk_64);
            if (func_ov049_0225aa48(&unk_658) == 1 || func_ov049_0225aa48(&unk_658) == 0) {
                unk_658.vfunc_08();
                func_02015ab0(&unk_658, func_0201bc4c(4));
                func_ov049_0225b458(4);
            } else if (func_ov049_0225aa48(&unk_658) == 3) {
                unk_658.vfunc_08();
                func_02015ab0(&unk_658, func_0201bc4c(4));
                func_ov049_0225b458(5);
            } else if (func_02072e44(g) != 0 || *func_0209c37c(0, 0x4a) != 0) {
                unk_658.vfunc_08();
                func_02015ab0(&unk_658, func_0201bc4c(4));
                func_ov049_0225b458(4);
            } else {
                func_ov049_0225b458(0xd);
            }
        }
        break;
    case 0:
        unk_558.unk_08 = arg;
        if (arg != 4 && arg != data_020cbb18->unk_64) {
            func_0201b9fc(1, arg, arg);
            func_ov049_0225b458(9);
        } else if (func_0201ba88()) {
            func_0201b9fc(1, data_020cbb18->unk_64, data_020cbb18->unk_64);
            unk_658.vfunc_08();
            func_02015ab0(&unk_658, func_0201bc4c(4));
            func_ov049_0225aa50(&unk_658, 2);
            func_ov049_0225b458(4);
        }
        break;
    case 8:
        if (arg == 4) {
            if (func_020a62a0()) {
                g = data_020cbb18;
                func_0201b9fc(1, g->unk_64, 4);
                if (func_02072e44(g) != 0 || *func_0209c37c(0, 0x4a) != 0) {
                    func_ov049_0225b458(0xa);
                } else if (func_ov049_0225aa48(&unk_658) != 3) {
                    func_ov049_0225b458(1);
                }
            } else {
                func_0201b9fc(1, 4, data_020cbb18->unk_64);
                func_ov049_0225b458(8);
            }
        }
        break;
    case 4:
        if (func_0201b9bc()) {
            if (func_0201ba88()) {
                a = 4;
                b = 4;
                if (func_0201b9e8(&a, &b)) {
                    if (arg == 4) goto x4;
                    if (arg == b) goto y4;
                x4:
                    if (arg != 4) break;
                y4:
                    func_0201b9fc(1, data_020cbb18->unk_64, 4);
                    func_ov049_0225b458(0xa);
                }
            }
        }
        break;
    }
    Unk_020d8bc8::vfunc_4c(cmd, arg);
}

BOOL Unk_ov049_0225bf04::vfunc_58() {
    if (func_02014220(&unk_618) != 0 || func_0201b9bc() != 0) {
        return FALSE;
    }
    return TRUE;
}

BOOL Unk_ov049_0225bf04::vfunc_48() {
    if (func_02014220(&unk_618) != 0 || func_0201b9bc() != 0 || func_ov049_02258ec0() != 0) {
        return FALSE;
    }
    return TRUE;
}

// ---------------------------------------------------------------------------------------------------------------------
// Dialog

void Unk_ov049_0225be74::func_ov049_02259484() {
    unk_ac->unk_964 = 1;
    func_0201adc8(unk_ac, unk_b8);
    func_02099014(&unk_ac->unk_734, 0);
    func_020ac8fc(unk_ac->unk_724, unk_ac->unk_728, 10);
    func_020787d4();
}

struct Unk_ov049_022594e0_Rec {
    u8 *unk_00;
    u8 unk_04;
};

void Unk_ov049_0225be74::func_ov049_022594e0(void *rec, s32 x) {
    void *ctx = unk_3c;
    void *h = func_020679b4(unk_3c);
    Unk_ov049_022594e0_Rec *r = (Unk_ov049_022594e0_Rec *)rec;
    u8 *p = r->unk_00;
    s32 n = r->unk_04;
    s32 z = 0;
    s32 i;
    if (x != -1) {
        func_020aa680(h, n, x);
    } else {
        func_020aa680(h, n, -1);
    }
    i = z;
    for (; i < n; i++) {
        u8 buf[2];
        buf[0] = p[i];
        buf[1] = 6;
        func_020aa638(h, i, buf, z, &buf[1], data_ov049_0225bc58[0], z);
    }
    func_020aa608(h);
    func_020679c0(ctx, 1);
}

void Unk_ov049_0225be74::func_ov049_0225955c() {
    void *ctx = unk_3c;
    char *tbl = data_ov049_0225bc58[0];
    u32 msg = 0x30;
    u16 v[3];
    void *hh;
    if (func_0206ed18()) {
        hh = func_02099864(func_0209865c(func_0209750c()));
        if (func_0202e148()) {
            s32 n = (s32)func_0206ed38();
            v[1] = func_02099048();
            if (n >= 0) {
                func_02099064(n);
            }
            if (!Unk_ov049_02258ee0_Eq(&v[1], &v[2])) {
                func_02014ce4(this, &v[1], 2, 5, 0);
                msg = 0x2f;
                func_0209abb4(func_0209a108(hh), 1);
            }
        }
    }
    *(u8 *)v = msg;
    func_02067a84(ctx, v, tbl);
}

void Unk_ov049_0225be74::func_ov049_02259620() {
    if (func_ov004_02224c84()) {
        func_ov004_02233d08(unk_ac->unk_724, unk_ac->unk_728);
        func_ov049_02259a8c(0);
    }
}

void Unk_ov049_0225be74::func_ov049_02259654() {
    if (func_ov004_02224c84()) {
        func_ov004_02233d64(unk_ac->unk_724, unk_ac->unk_728);
    }
    if (func_02095154(0x10, 4)) {
        void *ctx = unk_3c;
        u8 msg;
        func_02067a6c(ctx);
        msg = 0x2d;
        func_02067a84(ctx, &msg, data_ov049_0225bc58[0]);
        func_ov049_02259a8c(0);
    }
}

void Unk_ov049_0225be74::func_ov049_022596b8() {
    u8 msg;
    u16 v[1];
    void *ctx;
    s32 i;
    unk_b8 = 0;
    unk_bc = 0;
    ctx = unk_3c;
    msg = data_021edb68[0];
    if (func_0206ed18()) {
        u16 *tbl = func_0206eb9c();
        v[0] = 0xfff1;
        for (i = 0; i < 15; i++) {
            u16 t = tbl[i];
            if (t == 0xfff1) break;
            v[0] = t;
            unk_b8 += func_0204be70(v) / 4;
        }
        unk_bc = i;
        if (unk_b8 == 0) {
            msg = 0x17;
        } else {
            func_02015958(this, unk_b8, 1, 10, 1, 0);
            msg = 0x1b;
        }
    } else {
        msg = 0x15;
    }
    func_02067a84(ctx, &msg, data_ov049_0225bc58[0]);
}
