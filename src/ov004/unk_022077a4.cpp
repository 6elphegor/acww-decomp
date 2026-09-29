#include "types.h"
#include "Unk_020d8c7c.h"

struct Unk_ov004_022077a4_Vec3 {
    s32 x, y, z;
};

class Unk_020e2a30 {
public:
    virtual ~Unk_020e2a30();
    virtual void vfunc_08();
    Unk_020e2a30();
    char unk_04[0x1a];
    u8 unk_1e;
};

class Unk_020d5d84 : public Unk_020d8c7c {
public:
    Unk_020d5d84();
    virtual BOOL vfunc_04();
    virtual void vfunc_08();
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_14();
    virtual BOOL vfunc_1c();
    virtual ~Unk_020d5d84();

    /* 0x50 */ u8 unk_50[0xc];
    /* 0x5c */ s32 unk_5c[3];
    /* 0x68 */ u8 pad_68[0x8e - 0x68];
    /* 0x8e */ s16 unk_8e;
    /* 0x90 */ u8 pad_90[0xd4 - 0x90];
};

struct Unk_0203e5d0_Node {
    u32 unk_00;
    Unk_0203e5d0_Node *unk_04;
    u32 unk_08;
    void *unk_0c;
};

class Unk_020d9670 : public Unk_020d5d84 {
public:
    Unk_020d9670();
    virtual ~Unk_020d9670();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_1c();
    virtual BOOL vfunc_48(Unk_020d9670 *a);
    virtual void vfunc_4c(u32 a, u8 b);
    virtual Unk_ov004_022077a4_Vec3 *vfunc_50();
    virtual BOOL vfunc_54(void *a);
    virtual BOOL vfunc_58(void *a);
    virtual BOOL vfunc_5c();

    void func_0203e624(u32 a);
    u32 func_0203e630();

    /* 0xd4 */ Unk_0203e5d0_Node unk_d4;
    /* 0xe4 */ s32 unk_e4;
    /* 0xe8 */ u16 unk_e8;
    /* 0xea */ u16 pad_ea;
};

// Pair list built by func_ov004_02206558 (count, then up to four x/y pairs)
struct Unk_ov004_02207854_List {
    u32 count;
    s32 v[4][2];
};

class Unk_ov004_022077a4;

// Set of up to four neighbour objects built by func_ov004_02206494
struct Unk_ov004_02207854_Set {
    u32 count;
    Unk_ov004_022077a4 *v[4];
};

struct Unk_ov004_022078d8_Vec {
    s32 x, y, z;
    Unk_ov004_022078d8_Vec(s32 a, s32 b, s32 c) { x = a; y = b; z = c; }
    ~Unk_ov004_022078d8_Vec() {}
};

struct Unk_ov004_02207ac4_Tmp {
    u16 v;
    u16 pad;
    Unk_ov004_02207ac4_Tmp() {}
    ~Unk_ov004_02207ac4_Tmp() {}
};

struct Unk_ov004_022077a4_Mtx {
    s64 v[6];
};

struct Unk_ov004_02207ef0_Bits {
    u32 lo : 4;
    u32 mid : 4;
    u32 id : 16;
    u32 dir : 2;
    u32 pad : 2;
    u32 flag : 1;
};

extern "C" {
extern u8 data_ov004_022489d0[];
extern u8 data_ov004_022489d8[];
extern u8 data_ov004_022489e0[];
extern u8 data_ov004_02240008[];
extern u8 data_021f47e0[];
extern u32 data_021c47c4;
extern u8 data_021c3084[];
extern u8 data_021c309c[];
extern u16 data_ov004_0224f600;
extern u16 data_ov004_0224f5fc;

s32 func_020b50e8();
s32 func_020b530c(s32 a);
s32 func_ov004_02234c2c(void *fn);
void func_ov004_02209dd8(s32 a);
void func_020516a4(s32 a, s32 b);
void func_02064478(s32 a, s32 b, s32 c);
u32 func_ov004_02205c7c(void *p);
s32 func_ov004_02205be4(void *p, void *a, void *b, u32 c);
void func_ov004_02206558(Unk_ov004_02207854_List *l);
Unk_ov004_02207854_Set *func_ov004_02206494(Unk_ov004_02207854_Set *s, Unk_ov004_02207854_List *l, u32 m);
Unk_ov004_022077a4 *func_ov004_02206474(Unk_ov004_02207854_Set *s, u32 i);
u32 func_ov004_02206480(Unk_ov004_02207854_Set *s);
void func_ov004_02206484(Unk_ov004_02207854_Set *s);
void func_ov004_02206554(Unk_ov004_02207854_List *l);
s32 *func_ov004_02206520(Unk_ov004_02207854_List *l, u32 i);
u32 func_ov004_0220652c(Unk_ov004_02207854_List *l);
s32 func_ov004_02206530(Unk_ov004_02207854_List *l, s32 x, s32 y);
u16 func_0204b248(s32 a, s32 b);
BOOL func_0204b2d4(u16 *p);
void *func_0204ebd8(void *grid, s32 hx, s32 hy, s32 lx, s32 ly, u32 layer);
void func_02051844(s32 a, s32 x, s32 y, u32 layer, u32 c, void *p, s32 b, s32 a2);
void func_02051a50(s32 a, s32 x, s32 y, u32 layer, u32 c, u32 r7, s32 v18, void *p, s32 one);
void func_ov004_02235d10(s32 a);
s32 func_ov004_02235718();
void func_ov004_0223568c(s32 a, void *self, s32 x, s32 y, u32 layer);
void func_ov004_02235648(s32 a, void *self, s32 x, s32 y, u32 layer);
s32 func_ov004_02235624(s32 a, s32 x, s32 y, s32 one);
void func_01ffca8c(void *a, void *b, void *c);
void func_01ffb898(void *a, void *b, void *c);
void func_0204ee10(s32 *x, s32 *y, void *v);
void func_02135558(void *obj, void (*dtor)(), void *reg);
void func_02000c8c();
s32 func_ov004_0223584c();
s32 func_ov004_02235740(s32 a, void *self);
void func_02055440(void *self, u32 v);
void func_02055488(void *self, s32 fn, void *arg);
s32 func_02056fcc(void *self, s32 str);
void func_ov004_02205d5c(void *self, s32 a, s32 b);
void func_ov004_022059b4(void *self, s32 a, s32 b);
s32 func_ov004_02206a2c(void *self);
s32 func_ov004_02206a14(void *self);
void func_021039ec(s32 a, s32 b);
void func_02103830(s32 a, s32 b);
void func_ov004_02209e14();
void func_0204eda4(void *p, s32 a, s32 b, u32 c, u32 d);
s32 func_ov004_02234f6c(void *p);
s32 func_020e9960(void *out, void *a, void *b);
s32 func_020e94f8(void *v);
s32 func_01ffcb0c(s32 a, s32 b);
s32 func_020534a4(s32 a);
s32 func_0205346c(s32 a);
s32 func_02053248(s32 a);
s32 func_020533c8(s32 a);
s32 func_0205338c(s32 a);
u32 func_02052f44(s32 a);
u32 func_02052f04(s32 a);
s32 func_02052fc4(s32 a);
s32 func_02052e80(s32 a);
void func_ov004_02205e20(void *p, u32 a, u32 b, s32 c);
void func_ov004_02205cdc(void *p, void *q);
s32 func_020e7b98(s32 x, s32 z);
void func_ov004_02209d10();
s32 func_ov004_0220784c(s32 a);
u32 func_ov004_02207c04(s32 x);
}

class Unk_ov004_022077a4 : public Unk_020d9670 {
public:
    virtual void vfunc_60();
    virtual void vfunc_64();
    virtual void vfunc_68();
    virtual void vfunc_6c();
    virtual void vfunc_70();
    virtual void vfunc_74();
    virtual s32 vfunc_78();

    BOOL func_ov004_02206f84();
    BOOL func_ov004_02206f8c();
    u32 func_ov004_02206f6c();
    u32 func_ov004_022071cc(void *x, s32 y);
    void func_ov004_02207c40(Unk_ov004_02207854_List *l, void *x, s32 y);
    void func_ov004_0220865c(void *x, s32 y);
    void func_ov004_02208554();
    void func_ov004_02208198();
    void func_ov004_0220838c();
    void func_ov004_022077a4();
    void func_ov004_02207854(void *a, s32 b);
    void func_ov004_022078d8(s32 unused, void *x, s32 y, u8 flag);
    void func_ov004_02207ac4(s32 a, s32 b);
    void func_ov004_02207e14();
    void func_ov004_02207e48();
    void func_ov004_02207ef0();

    /* 0xec */ u8 pad_ec[0x14c - 0xec];
    /* 0x14c */ s32 unk_14c, unk_150, unk_154, unk_158;
    /* 0x15c */ u8 pad_15c[0x178 - 0x15c];
    /* 0x178 */ u8 unk_178[0x250 - 0x178];
    /* 0x250 */ Unk_ov004_022077a4_Mtx unk_250;
    /* 0x280 */ s32 unk_280;
    /* 0x284 */ u8 unk_284;
    /* 0x285 */ u8 unk_285;
    /* 0x286 */ u8 pad_286[0x534 - 0x286];
    /* 0x534 */ u8 unk_534[0x590 - 0x534];
    /* 0x590 */ void *unk_590;
    /* 0x594 */ u8 pad_594[0x6c8 - 0x594];
    /* 0x6c8 */ u8 unk_6c8[0x73c - 0x6c8];
    /* 0x73c */ u8 unk_73c[2];
    /* 0x73e */ u8 unk_73e[6];
    /* 0x744 */ u8 unk_744[0x760 - 0x744];
    /* 0x760 */ u8 unk_760[8];
    /* 0x768 */ s32 unk_768;
    /* 0x76c */ u8 pad_76c[4];
    /* 0x770 */ s32 unk_770, unk_774;
    /* 0x778 */ u8 pad_778[4];
    /* 0x77c */ s32 unk_77c;
    /* 0x780 */ s32 unk_780;
    /* 0x784 */ s32 unk_784;
    /* 0x788 */ u8 unk_788, unk_789;
    /* 0x78a */ u8 pad_78a[2];
    /* 0x78c */ s32 unk_78c;
    /* 0x790 */ s32 unk_790;
};


extern "C" {

s32 func_ov004_02207838() {
    return func_ov004_0220784c(func_020b50e8());
}

void func_ov004_02207bdc(u16 *out, Unk_ov004_022077a4 *obj, s32 ang) {
    *out = func_0204b248(obj->unk_280, func_ov004_02207c04(ang));
}

u32 func_ov004_02207c04(s32 v) {
    u32 x = (u16)v;
    if (x >= 0xe000 || x < 0x2000) {
        return 0;
    }
    if (x < 0x6000) {
        return 1;
    }
    if (x < 0xa000) {
        return 2;
    }
    return 3;
}

s32 func_ov004_0220784c(s32 a) {
    return func_020b530c(a);
}

}

void Unk_ov004_022077a4::func_ov004_022077a4() {
    if (func_ov004_02206f84()) {
        void *v = unk_590;
        u32 t = func_ov004_02205c7c(unk_73c);
        func_ov004_02205be4(unk_744, v, data_ov004_022489d0, t);
        if (func_ov004_02207838()) {
            s32 r = func_ov004_02234c2c((void *)func_ov004_02209d10);
            if (func_ov004_02205c7c(unk_73c) != 0 && r == 1) {
                if (unk_768 != 0) {
                    func_ov004_02209dd8(unk_790);
                    func_020516a4(func_020b50e8(), 1);
                } else {
                    func_02064478(0, 1, 0);
                }
            }
        }
    }
}

void Unk_ov004_022077a4::func_ov004_02207e14() {
    s32 r = func_ov004_02235740(func_ov004_0223584c(), this);
    if (r != -1) {
        func_02055440(unk_534, data_ov004_02240008[r]);
    }
}

void Unk_ov004_022077a4::func_ov004_02207e48() {
    void *p = unk_590;
    s32 a = func_02056fcc(p, (s32)data_ov004_022489d8);
    s32 b = func_02056fcc(p, (s32)data_ov004_022489e0);
    func_ov004_02205d5c(unk_73e, (s8)a, (s8)b);
    func_02055488(unk_534, (s32)func_ov004_02209e14, this);
    func_ov004_022059b4(unk_760, (s32)unk_590, 1);
    s32 t = func_ov004_02206a2c(unk_6c8);
    func_021039ec(t, func_ov004_02206a14(unk_6c8));
    t = func_ov004_02206a2c(unk_6c8);
    func_02103830(t, func_ov004_02206a14(unk_6c8));
    func_ov004_02207e14();
}

void Unk_ov004_022077a4::func_ov004_02207854(void *a, s32 b) {
    Unk_ov004_02207854_List l;
    Unk_ov004_02207854_Set set;
    u32 i;
    func_ov004_02206558(&l);
    func_ov004_02207c40(&l, 0, 0);
    func_ov004_02206494(&set, &l, unk_284);
    func_ov004_02207ac4(1, 1);
    func_ov004_022078d8(1, a, b, 1);
    for (i = 0; i < func_ov004_02206480(&set); i++) {
        Unk_ov004_022077a4 *o = func_ov004_02206474(&set, i);
        if (o != 0) {
            o->func_ov004_022078d8(1, a, b, 1);
        }
    }
    func_ov004_02206484(&set);
    func_ov004_02206554(&l);
}

void Unk_ov004_022077a4::func_ov004_02207ac4(s32 a, s32 b) {
    if (!func_ov004_02206f8c()) {
        Unk_ov004_02207854_List l;
        void *grid;
        u32 i;
        func_ov004_02206558(&l);
        func_ov004_02207c40(&l, 0, 0);
        grid = (void *)data_021c47c4;
        {
            volatile u16 tmp[1];
            tmp[0] = 0xfff1;
            func_ov004_02235d10(func_020b50e8());
            i = 0;
            for (; i < func_ov004_0220652c(&l); i++) {
                s32 x = func_ov004_02206520(&l, i)[0];
                s32 y = func_ov004_02206520(&l, i)[1];
                s32 hx = x >> 4;
                s32 hy = y >> 4;
                void *p = func_0204ebd8(grid, hx, hy, x - (hx << 4), y - (hy << 4), unk_284);
                if (p != 0 && func_0204b2d4((u16 *)p)) {
                    s32 t = func_020b50e8();
                    func_02051844(t, x, y, unk_284, func_ov004_02205c7c(unk_73c), p, b, a);
                }
                func_ov004_02235648(func_ov004_02235718(), this, x, y, unk_284);
                if (b != 0 && unk_284 == 0) {
                    s32 c = func_ov004_02235624(func_ov004_02235718(), x, y, 1);
                    if (c != -1) {
                        func_ov004_02235648(func_ov004_02235718(), this, x, y, 1);
                    }
                }
            }
        }
        func_ov004_02206554(&l);
    }
}

void Unk_ov004_022077a4::func_ov004_02207c40(Unk_ov004_02207854_List *l, void *x, s32 y) {
    Unk_ov004_022077a4_Vec3 c;
    Unk_ov004_022077a4_Vec3 d;
    Unk_ov004_022077a4_Vec3 e;
    s32 ox, oy;
    c.x = unk_5c[0];
    c.y = unk_5c[1];
    c.z = unk_5c[2];
    if (x != 0) {
        func_01ffca8c(&c, x, &c);
    }
    static Unk_ov004_022078d8_Vec arr[2] = {Unk_ov004_022078d8_Vec(0, 0, 0), Unk_ov004_022078d8_Vec(0x2000, 0, 0)};
    d.x = c.x;
    d.y = c.y;
    d.z = c.z;
    switch (unk_780) {
    case 0:
        if (x != 0 || y != 0) {
            func_ov004_0220865c(x, y);
        } else {
            *(Unk_ov004_022077a4_Mtx *)data_021f47e0 = unk_250;
        }
        {
            static Unk_ov004_022078d8_Vec s(0, 0, 0);
            func_01ffb898(&s, data_021f47e0, &d);
        }
        func_0204ee10(&ox, &oy, &d);
        func_ov004_02206530(l, ox, oy);
        break;
    case 1: {
        if (x != 0 || y != 0) {
            func_ov004_0220865c(x, y);
        } else {
            *(Unk_ov004_022077a4_Mtx *)data_021f47e0 = unk_250;
        }
        s32 i;
        for (i = 0; i < 2; i++) {
            e.x = arr[i].x;
            e.y = arr[i].y;
            e.z = arr[i].z;
            func_01ffb898(&e, data_021f47e0, &d);
            func_0204ee10(&ox, &oy, &d);
            func_ov004_02206530(l, ox, oy);
        }
        break;
    }
    default:
        d.x = c.x - 0x1000;
        d.z = c.z - 0x1000;
        func_0204ee10(&ox, &oy, &d);
        func_ov004_02206530(l, ox, oy);
        func_ov004_02206530(l, ox + 1, oy);
        func_ov004_02206530(l, ox, oy + 1);
        func_ov004_02206530(l, ox + 1, oy + 1);
        break;
    }
}

void Unk_ov004_022077a4::func_ov004_022078d8(s32 unused, void *x, s32 y, u8 flag) {
    if (!func_ov004_02206f8c()) {
        Unk_ov004_02207854_List l;
        u16 a, b, c;
        u32 r7;
        s32 v18;
        u32 i;
        func_ov004_02206558(&l);
        func_ov004_02207c40(&l, x, y);
        a = 0xfff1;
        if (unk_284 == 1) {
            Unk_ov004_022077a4_Vec3 v1, v2;
            static Unk_ov004_022078d8_Vec s0(0, 0, 0);
            static Unk_ov004_022078d8_Vec s1(0, 0, 0x1000);
            func_01ffb898(&s0, data_021f47e0, &v1);
            func_01ffb898(&s1, data_021f47e0, &v2);
            s32 ang = func_020e7b98(v2.x - v1.x, v2.z - v1.z);
            func_ov004_02207bdc(&b, this, ang);
            a = b;
        } else {
            func_ov004_02207bdc(&c, this, (s16)(unk_8e + y));
            a = c;
        }
        func_ov004_02235d10(func_020b50e8());
        if (unk_285 == 0) {
            r7 = 0;
        } else {
            r7 = func_ov004_02206f6c();
        }
        v18 = vfunc_78();
        for (i = 0; i < func_ov004_0220652c(&l); i++) {
            if (i == 0) {
                u32 s = func_ov004_02205c7c(unk_73c);
                s32 t = func_020b50e8();
                s32 *p1 = func_ov004_02206520(&l, i);
                s32 *p2 = func_ov004_02206520(&l, i);
                func_02051a50(t, p1[0], p2[1], unk_284, s, r7, v18, &a, 1);
            }
            s32 o = func_ov004_02235718();
            s32 *p3 = func_ov004_02206520(&l, i);
            s32 *p4 = func_ov004_02206520(&l, i);
            func_ov004_0223568c(o, this, p3[0], p4[1], unk_284);
        }
        if (flag != 0) {
            u32 r = func_ov004_022071cc(x, y);
            if (r != func_0203e630()) {
                func_0203e624(r);
            }
        }
        func_ov004_02206554(&l);
    }
}

void Unk_ov004_022077a4::func_ov004_02207ef0() {
    if (unk_285 == 0) {
        struct {
            volatile u16 tmp;
            u16 pad;
            Unk_ov004_02207ef0_Bits bits;
            u32 pad2;
        } f;
        f.bits = *(Unk_ov004_02207ef0_Bits *)&unk_04[4];
        Unk_ov004_022077a4_Vec3 p1, p2, r;
        volatile Unk_ov004_022077a4_Vec3 q;
        if (!func_ov004_02206f8c()) {
            func_0204eda4(unk_5c, 0, 0, f.bits.lo, f.bits.mid);
            unk_5c[1] = func_ov004_02234f6c(unk_5c);
            unk_14c = 0x1000;
            unk_150 = 0x1000;
            unk_154 = 0x1000;
            unk_158 = 0x1000;
        } else {
            p1 = *(Unk_ov004_022077a4_Vec3 *)data_021c3084;
            p2 = *(Unk_ov004_022077a4_Vec3 *)data_021c309c;
            func_020e9960(&r, &p2, &p1);
            func_020e94f8(&r);
            s32 qz = func_01ffcb0c(r.z, 0x4000);
            s32 qy = func_01ffcb0c(r.y, 0x4000);
            s32 qx = func_01ffcb0c(r.x, 0x4000);
            q.x = qx;
            q.y = qy;
            q.z = qz;
            unk_5c[0] = p1.x + qx;
            unk_5c[1] = p1.y + q.y;
            unk_5c[2] = p1.z + q.z;
            unk_14c = 0x400;
            unk_150 = 0x400;
            unk_154 = 0x400;
            unk_158 = 0x1000;
            data_ov004_0224f600 = func_020e7b98(r.z, r.y) - 0xb000;
            data_ov004_0224f5fc = func_020e7b98(r.x, r.z) + 0x8000;
        }
        unk_8e = f.bits.dir << 14;
        unk_280 = f.bits.id;
        if (unk_280 >= 0x6e9) {
            unk_280 = 0x6e8;
        }
        f.tmp = func_0204b248(unk_280, 0);
        unk_284 = f.bits.flag;
        if (!func_ov004_02206f8c() && unk_284 == 0) {
            unk_5c[1] = 0;
            if (func_020b50e8() == 10) {
                unk_5c[1] = func_ov004_02234f6c(unk_5c);
            }
        }
        unk_77c = func_020534a4(unk_280);
        unk_78c = func_0205346c(unk_280);
        unk_780 = func_02053248(unk_280);
        unk_770 = func_020533c8(unk_280);
        unk_774 = func_0205338c(unk_280);
        unk_788 = func_02052f44(unk_280);
        unk_789 = func_02052f04(unk_280);
        unk_784 = func_02052fc4(unk_280);
        unk_790 = func_02052e80(unk_280);
        if (!func_ov004_02206f8c()) {
            if (unk_780 == 2) {
                unk_5c[0] += 0x1000;
                unk_5c[2] += 0x1000;
            }
            if (unk_284 == 1) {
                func_ov004_02205e20(unk_178, f.bits.lo, f.bits.mid, unk_8e);
            }
        }
        func_ov004_02208554();
        func_ov004_02205cdc(unk_73c, this);
        func_ov004_022078d8(1, 0, 0, 0);
        func_ov004_02208198();
        func_ov004_0220838c();
        unk_285 = 1;
    }
}
