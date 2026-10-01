#include "types.h"

struct Unk_0203b350_V { s32 x, y, z; };
typedef Unk_0203b350_V V3;

extern "C" {
s32 func_01ffcb0c(s32, s32);
s32 func_01ffc854(V3 *);
void func_01ffcbb0(V3 *out, s32);
void func_01ffd070(V3 *out, V3 *a, V3 *b);
void func_020e9960(V3 *out, V3 *a, V3 *b);
s32 func_020e9688(V3 *v);
BOOL func_020e94f8(V3 *v);
void func_020e92f4(V3 *v, s32 a);
void func_020e944c(V3 *v, s32 a);
void func_020e93a0(V3 *v, s32 a);
void func_020e9888(V3 *v, s32 a);
s32 func_0203eeac(void *p, void *q);
void func_020e944c_(void);
s32 func_0203edd0(void *p);
s32 func_02063a9c(s32, s32, s32, s32, s32);
BOOL func_0203a488(void *);
s32 func_01ffc588(s32);
s32 func_0203c1a4(void *self, s32 a, s32 b);
s32 func_0202fe84(s32 *, s32 *, s32 *, s32 *);
s32 func_020b50e8(void);
s32 func_020375d0(u32);
void func_0203a058(void *, s32, s32, s32, s32);
struct Unk_021ef2f0 { u32 pad; u8 unk_04; };
struct Unk_021c47c4 { u32 unk_00; u32 *unk_04; u32 *unk_08; };
extern Unk_021ef2f0 *data_021ef2f0;
extern s32 data_020c8cb8;
extern Unk_021c47c4 *data_021c47c4;
extern u8 data_021ef414[];
extern s16 data_02135f44[];
extern V3 data_021c309c;
extern V3 data_021c3084;
extern s32 data_021c3068;
}

#define M(T, o) (*(T *)((u8 *)this + (o)))

class Unk_0203b350;
extern "C" void func_0203bac4(s32 a, s32 *x, s32 *z);
typedef BOOL (Unk_0203b350::*Unk_0203b350_Init)();
typedef void (Unk_0203b350::*Unk_0203b350_Update)();
struct Unk_021c30ec {
    Unk_0203b350_Init init;
    Unk_0203b350_Update update;
};
extern Unk_021c30ec data_021c30ec[];

class Unk_0203b350 {
public:
    u8 pad_00[0x110];
    V3 unk_110;

    s32 func_0203bc58();
    V3 *func_0203bc9c();
    void func_0203b350(V3 *p);
    void func_0203b3c4(V3 *a, V3 *b);
    s32 func_0203bbbc();
    s32 func_0203bbd0();
    s32 func_0203bbe4();
    s32 func_0203bc28();
    void func_0203b56c();
    void func_0203b730();
    void func_0203b768();
    BOOL func_0203b7ac(s32 idx);
    void func_0203baec();
    void func_0203bb0c(s32 a);
    s32 func_0203b8e0(s32 *p);
    void func_0203b910(u8 *o, V3 *v);
    BOOL func_0203b93c(s32 *p);
    void func_0203b9d4();
    s32 func_0203bc3c();
    s32 func_0203bc48();
    void func_0203b484(V3 *a, s32 r, s32 s, s32 z);
};

void Unk_0203b350::func_0203b350(V3 *p)
{
    V3 d;
    s32 len, ex;
    unk_110.y = p->y;
    func_020e9960(&d, &unk_110, p);
    len = func_020e9688(&d);
    if (len > func_0203bc58()) {
        ex = len - func_0203bc58();
        if (func_020e94f8(&d)) {
            unk_110.x -= func_01ffcb0c(d.x, ex);
            unk_110.z -= func_01ffcb0c(d.z, ex);
        }
    }
}

void Unk_0203b350::func_0203b3c4(V3 *a, V3 *b)
{
    V3 d;
    s32 ang = func_0203eeac(&M(u8, 0x188), a);
    func_0203eeac(&M(u8, 0x194), b);
    M(s32, 0x1a0) = 0;
    M(s32, 0x1a4) = 0x1000;
    M(s32, 0x1a8) = 0;
    s32 i = (u16)ang >> 4;
    M(s32, 0x1a4) = data_02135f44[i * 2 + 1];
    M(s32, 0x1a8) = data_02135f44[i * 2];
    func_020e92f4((V3 *)&M(u8, 0x1a0), M(s16, 0x174));
    data_021c309c.x = a->x;
    data_021c309c.y = a->y;
    data_021c309c.z = a->z;
    data_021c3084.x = b->x;
    data_021c3084.y = b->y;
    data_021c3084.z = b->z;
    func_020e9960(&d, a, b);
    data_021c3068 = func_01ffc854(&d);
}

void Unk_0203b350::func_0203b484(V3 *a, s32 r, s32 s, s32 z)
{
    V3 t, o;
    t.x = 0;
    t.y = 0;
    t.z = z;
    func_020e944c(&t, (s16)-r);
    func_020e93a0(&t, s);
    func_01ffd070(&o, a, &t);
    M(s32, 0x168) = o.x;
    M(s32, 0x16c) = o.y;
    M(s32, 0x170) = o.z;
    s32 ang = func_0203eeac(&M(u8, 0x188), a);
    func_0203eeac(&M(u8, 0x194), func_0203bc9c());
    M(s32, 0x1a0) = 0;
    M(s32, 0x1a4) = 0x1000;
    M(s32, 0x1a8) = 0;
    func_020e944c((V3 *)&M(u8, 0x1a0), ang);
    func_020e92f4((V3 *)&M(u8, 0x1a0), M(s16, 0x174));
    data_021c309c.x = a->x;
    data_021c309c.y = a->y;
    data_021c309c.z = a->z;
    V3 *c = func_0203bc9c();
    data_021c3084.x = c->x;
    data_021c3084.y = c->y;
    data_021c3084.z = c->z;
    data_021c3068 = z;
}

void Unk_0203b350::func_0203b56c()
{
    V3 t1, t2, o1, o2;
    s32 a, b, c, d;
    if (func_0203a488(this)) {
        a = func_0203bc28();
        b = func_0203bbe4();
        c = func_0203bbd0();
        d = func_0203bbbc();
        a = func_02063a9c(M(s32, 0xc8), a, b, c, d);
        func_020e9960(&t1, (V3 *)&M(u8, 0x110), (V3 *)&M(u8, 0x15c));
        func_020e9888(&t1, a);
        func_01ffd070(&o1, (V3 *)&M(u8, 0x15c), &t1);
        M(s32, 0x15c) = o1.x;
        M(s32, 0x160) = o1.y;
        M(s32, 0x164) = o1.z;
        func_020e9960(&t2, (V3 *)&M(u8, 0x104), (V3 *)&M(u8, 0x150));
        func_020e9888(&t2, a);
        func_01ffd070(&o2, (V3 *)&M(u8, 0x150), &t2);
        M(s32, 0x150) = o2.x;
        M(s32, 0x154) = o2.y;
        M(s32, 0x158) = o2.z;
        M(s16, 0x14a) += func_01ffcb0c(M(s16, 0xfe) - M(s16, 0x14a), a);
        M(s16, 0x148) += func_01ffcb0c(M(s16, 0xfc) - M(s16, 0x148), a);
        M(s32, 0x14c) += func_01ffcb0c(M(s32, 0x100) - M(s32, 0x14c), a);
        M(s32, 0x1e8) += func_01ffcb0c(M(s32, 0x1e4) - M(s32, 0x1e8), a);
        M(s32, 0xc8) += 0x1000;
    } else {
        M(s32, 0x15c) = M(s32, 0x110);
        M(s32, 0x160) = M(s32, 0x114);
        M(s32, 0x164) = M(s32, 0x118);
        M(s32, 0x150) = M(s32, 0x104);
        M(s32, 0x154) = M(s32, 0x108);
        M(s32, 0x158) = M(s32, 0x10c);
        M(s16, 0x14a) = M(s16, 0xfe);
        M(s16, 0x148) = M(s16, 0xfc);
        M(s32, 0x14c) = M(s32, 0x100);
        M(s32, 0x1e8) = M(s32, 0x1e4);
    }
}

void Unk_0203b350::func_0203b730()
{
    M(s32, 0x1b0) = 0x1548;
    M(s32, 0x1b4) = 0xf6;
    M(s32, 0x1b8) = 0x3e800;
    func_0203bb0c(M(s16, 0x1c8));
}

void Unk_0203b350::func_0203b768()
{
    s32 i = M(s32, 0x1f8);
    if (i < 0x15) {
        (this->*data_021c30ec[i].update)();
        func_0203baec();
    }
}

BOOL Unk_0203b350::func_0203b7ac(s32 idx)
{
    if (idx < 0x15) {
        if (idx != M(s32, 0x1f8)) {
            M(s32, 0x1fc) = M(s32, 0x1f8);
            if (idx != M(s32, 0x200)) {
                M(s16, 0x11c) = M(s16, 0xfc);
                M(s16, 0x11e) = M(s16, 0xfe);
                M(s32, 0x120) = M(s32, 0x100);
                M(s32, 0x124) = M(s32, 0x104);
                M(s32, 0x128) = M(s32, 0x108);
                M(s32, 0x12c) = M(s32, 0x10c);
                M(s32, 0x130) = M(s32, 0x110);
                M(s32, 0x134) = M(s32, 0x114);
                M(s32, 0x138) = M(s32, 0x118);
                M(s32, 0x13c) = M(s32, 0x168);
                M(s32, 0x140) = M(s32, 0x16c);
                M(s32, 0x144) = M(s32, 0x170);
            }
        }
        M(u8, 0x1f4) = 0;
        if ((this->*data_021c30ec[idx].init)()) {
            func_0203b730();
            M(s32, 0x1f8) = idx;
            func_0203b768();
            return TRUE;
        }
    }
    return FALSE;
}

s32 Unk_0203b350::func_0203b8e0(s32 *p)
{
    s32 v = *p;
    if (v < M(s32, 0x178) + 0x5000) {
        return 1;
    }
    if (v > M(s32, 0x17c) - 0x5000) {
        return 2;
    }
    return 0;
}

void Unk_0203b350::func_0203b910(u8 *o, V3 *v)
{
    if (o == NULL) {
        o = &M(u8, 0xfc);
    }
    func_0203c1a4(this, 0xb, 0);
    ((V3 *)(o + 0x14))->x = v->x;
    ((V3 *)(o + 0x14))->y = v->y;
    ((V3 *)(o + 0x14))->z = v->z;
}

BOOL Unk_0203b350::func_0203b93c(s32 *p)
{
    BOOL r = FALSE;
    if (M(s32, 0x17c) - M(s32, 0x178) <= 0xa000) {
        p[0] = (M(s32, 0x17c) + M(s32, 0x178)) >> 1;
        r = TRUE;
    } else if (p[0] < M(s32, 0x178) + 0x5000) {
        p[0] = M(s32, 0x178) + 0x5000;
        r = TRUE;
    } else if (p[0] > M(s32, 0x17c) - 0x5000) {
        p[0] = M(s32, 0x17c) - 0x5000;
        r = TRUE;
    }
    if (M(s32, 0x184) - M(s32, 0x180) <= 0x7000) {
        p[2] = (M(s32, 0x184) + M(s32, 0x180)) >> 1;
        r = TRUE;
    } else if (p[2] < M(s32, 0x180) + 0x2000) {
        p[2] = M(s32, 0x180) + 0x2000;
        r = TRUE;
    } else if (p[2] > M(s32, 0x184) - 0x5000) {
        p[2] = M(s32, 0x184) - 0x5000;
        r = TRUE;
    }
    return r;
}

void Unk_0203b350::func_0203b9d4()
{
    if (data_021ef2f0->unk_04 == 0) {
        func_0202fe84(&M(s32, 0x178), &M(s32, 0x17c), &M(s32, 0x180), &M(s32, 0x184));
        s32 m = data_020c8cb8;
        if (M(s32, 0x184) < m) {
            M(s32, 0x184) = m;
        }
    }
    if (func_020b50e8() == 0x29) {
        M(s32, 0x17c) += 0x4000;
        M(s32, 0x184) += 0x4000;
    } else {
        Unk_021c47c4 *g = data_021c47c4;
        u32 arg;
        if (g->unk_04 > (u32 *)0 && g->unk_08 > (u32 *)0 && g->unk_00 != 0) {
            arg = g->unk_00;
        } else {
            arg = 0;
        }
        switch (func_020375d0(arg) - 0x1009) {
        case 0:
        case 3:
            M(s32, 0x178) += 0x2000;
            break;
        case 1:
            M(s32, 0x17c) -= 0x2000;
            break;
        case 2:
        case 4:
            M(s32, 0x178) += 0x2000;
            M(s32, 0x17c) -= 0x2000;
            break;
        }
    }
}

extern "C" void func_0203bac4(s32 a, s32 *x, s32 *z)
{
    V3 t;
    func_01ffcbb0(&t, a);
    *x = t.x >> 17;
    *z = t.z >> 17;
}

void Unk_0203b350::func_0203baec()
{
    M(s16, 0x1ac) = func_0203edd0(&M(u8, 0x194));
}

void Unk_0203b350::func_0203bb0c(s32 a)
{
    M(s16, 0x1c8) = a;
    s32 i = (u16)((s16)(M(s16, 0x1c8) + M(s16, 0x98)) >> 1) >> 4;
    M(s32, 0x1bc) = data_02135f44[i * 2];
    i = (u16)((s16)(M(s16, 0x1c8) + M(s16, 0x98)) >> 1) >> 4;
    M(s32, 0x1c0) = data_02135f44[i * 2 + 1];
    M(s32, 0x1c4) = func_01ffcb0c(M(s32, 0x1bc), func_01ffc588(M(s32, 0x1c0)));
    func_0203a058(data_021ef414, M(s32, 0x1b0), (s16)(M(s16, 0x1c8) + M(s16, 0x98)), M(s32, 0x1b4) + M(s32, 0x90),
                  M(s32, 0x1b8) + M(s32, 0x94));
}

s32 Unk_0203b350::func_0203bbbc()
{
    s32 r = M(s32, 0xc4) + M(s32, 0xb4);
    if (r < 0) r = 0;
    return r;
}

s32 Unk_0203b350::func_0203bbd0()
{
    s32 r = M(s32, 0xc0) + M(s32, 0xb0);
    if (r < 0) r = 0;
    return r;
}

s32 Unk_0203b350::func_0203bc28()
{
    s32 r = M(s32, 0xb8) + M(s32, 0xa8);
    if (r < 0) r = 0;
    return r;
}

s32 Unk_0203b350::func_0203bbe4()
{
    s32 a = func_0203bbbc();
    s32 b = func_0203bc28();
    s32 tot = a + (b + func_0203bbd0());
    if (M(s32, 0xbc) < tot) M(s32, 0xbc) = tot;
    s32 t = M(s32, 0xbc) + M(s32, 0xac);
    if (t >= tot) tot = t;
    return tot;
}

s32 Unk_0203b350::func_0203bc3c()
{
    return M(s32, 0x1c4);
}

s32 Unk_0203b350::func_0203bc48()
{
    return M(s32, 0x14c) + M(s32, 0x80);
}
