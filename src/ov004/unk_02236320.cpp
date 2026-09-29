#include "types.h"
#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "Unk_020d8c7c.h"
#undef vfunc_14
#undef vfunc_08

struct Unk_ov004_02236320_V3 {
    s32 x, y, z;
};

struct Unk_ov004_02236320_Mtx {
    s64 v[6];
};

struct Unk_ov004_02236320_Ent {
    u8 pad_00[0x5c];
    Unk_ov004_02236320_V3 unk_5c;
    u8 pad_68[0x98 - 0x68];
    s32 unk_98;
};

extern "C" {
void *func_02031c48(void *p);
s32 func_02031c10(void *p);
}

static inline u8 *Unk_ov004_02236950_Add(u8 *o) {
    o += 0x5c;
    return o;
}

struct Unk_ov004_02236950_Obj {
    u8 unk_00[0x9c];
    Unk_ov004_02236950_Obj() { func_02031c48(this); }
    ~Unk_ov004_02236950_Obj() { func_02031c10(this); }
};

class Unk_020d5d84 : public Unk_020d8c7c {
public:
    virtual BOOL vfunc_04();
    virtual void vfunc_08(s32 a);
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_14(s32 a);
    virtual BOOL vfunc_1c();
    virtual BOOL vfunc_20();
    virtual BOOL vfunc_28();
    virtual BOOL vfunc_2c();

    void func_02002b84(void *out);
    void func_02002bf4(void *v);

    /* 0x50 */ u8 pad_50[0xc];
    /* 0x5c */ Unk_ov004_02236320_V3 unk_5c;
    /* 0x68 */ u8 unk_68[4];
    /* 0x6c */ s32 unk_6c;
    /* 0x70 */ u8 pad_70[0x8e - 0x70];
    /* 0x8e */ s16 unk_8e;
    /* 0x90 */ u8 pad_90[0x98 - 0x90];
    /* 0x98 */ s32 unk_98;
    /* 0x9c */ u8 pad_9c[0xc4 - 0x9c];
    /* 0xc4 */ s32 unk_c4;
    /* 0xc8 */ u8 pad_c8[0xd0 - 0xc8];
    /* 0xd0 */ u16 unk_d0;
    /* 0xd2 */ u16 pad_d2;
};

#define F08(o) (*(u32 *)((u8 *)(o) + 8))

class Unk_ov004_0224ebec : public Unk_020d5d84 {
public:
    Unk_ov004_02236320_Ent *func_02236320();
    void func_0223638c(s32 dist, s32 delta);
    u8 func_022364d0();
    void func_02236630(u32 sel);
    BOOL func_02236694();
    BOOL func_022366cc();
    BOOL func_02236758();
    BOOL func_022367dc();
    BOOL func_02236838();
    void func_02236910();
    void func_02236950();
    void func_02236bb8();
    void func_02236004();
    void func_022361f4();
    void func_02236244();
    void func_02236db4();
    void func_02236d9c(s32 v);
    s32 func_02236da8();

    /* 0xd4 */ s32 unk_d4;
    /* 0xd8 */ s32 unk_d8;
    /* 0xdc */ u32 unk_dc[12];
    /* 0x10c */ s32 unk_10c;
    /* 0x110 */ s32 unk_110;
    /* 0x114 */ u8 unk_114[0xc];
    /* 0x120 */ u8 unk_120[0x5c];
    /* 0x17c */ u32 unk_17c;
    /* 0x180 */ u8 pad_180[4];
    /* 0x184 */ Unk_ov004_02236320_Mtx unk_184;
    /* 0x1b4 */ u8 unk_1b4[0x24];
    /* 0x1d8 */ u8 unk_1d8[0x3c];
    /* 0x214 */ u8 unk_214;
    /* 0x215 */ u8 pad_215[0x228 - 0x215];
    /* 0x228 */ s16 unk_228;
    /* 0x22a */ u8 unk_22a;
    /* 0x22b */ u8 pad_22b;
    /* 0x22c */ s16 unk_22c;
    /* 0x22e */ s16 unk_22e;
    /* 0x230 */ Unk_ov004_02236320_V3 unk_230[2];
    /* 0x248 */ Unk_ov004_02236320_V3 unk_248[2];
    /* 0x260 */ s8 unk_260;
    /* 0x261 */ u8 pad_261;
    /* 0x262 */ u8 unk_262;
    /* 0x263 */ u8 unk_263;
    /* 0x264 */ s32 unk_264;
};

extern "C" {
void *func_02095204(u32 n);
s32 func_020339bc(void *o, void *v, s32 a, s32 b);
void func_02033988(void *o);
s32 func_02033914(void *o, s32 a);
void func_020323b0(void *o);
void func_0203239c(void *o);
void func_020309d4(void *a, void *b, void *c, s32 d, u32 e, void *f, u32 g);
s32 func_01ffcb0c(s32 a, s32 b);
s32 func_01ffc5a4(s32 a, s32 b);
s32 func_020b5328();
void *func_02031c48(void *p);
s32 func_02031c10(void *p);
s32 func_02031908(void *p, s32 a, s32 b, s32 c, void *d, s32 e, s32 f);
s32 func_020318cc(void *p);
void func_02003c30(void *p);
void func_02003c40(void *p, u32 id);
void func_02003c50(void *p, u32 id);
s32 func_02003c70(void *p, void *v);
void func_02054b14(void *p);
void func_02055440(void *p, s32 a);
void func_021061bc(u32 a, u32 b, u32 c);
void func_020553f8(void *p, u32 v);
void func_020547cc(void *p, u32 v);
void func_020547e4(void *p);
void func_020abc10(void *p, s32 a, s32 b, s32 c);
BOOL func_02088d38(void *p, u32 mask);
u32 func_0203ef38(void *a, void *b);
void func_020902b0(u32 a, void *v, s32 b, s32 c);
s32 func_02063b8c(s32 n);
extern Unk_ov004_02236320_Ent *data_ov004_022523d4;
}

BOOL Unk_ov004_0224ebec::func_02236838() {
    u32 t;
    unk_263 = 0;
    t = F08(this);
    if (t >= 0x1f) {
        if (unk_110 == 1) {
            if (data_ov004_022523d4 == NULL) {
                func_02236db4();
            }
            func_02236758();
            func_022361f4();
            func_02236bb8();
            func_022367dc();
            if (unk_22a != 0) {
                func_020547e4(unk_120);
            }
        } else {
            F08(this) = t - 1;
        }
    } else {
        if (unk_110 == 1) {
            F08(this) = t + 2;
            func_02236910();
        } else {
            F08(this) = t - 1;
        }
    }
    if (F08(this) != 0) {
        Unk_ov004_02236320_Mtx buf;
        unk_d0 = func_0203ef38(&unk_c4, &unk_5c);
        func_02002b84(&buf);
        unk_184 = buf;
    } else {
        func_02236694();
    }
    if (unk_263 == 0) {
        func_02236d9c(0);
    }
    return TRUE;
}

void Unk_ov004_0224ebec::func_02236bb8() {
    Unk_ov004_02236320_V3 v;
    if (unk_10c != 2) {
        func_02236950();
    }
    switch (unk_10c) {
    case 0:
        func_02236244();
        break;
    case 1:
        unk_98 = unk_d4;
        if (unk_22c-- > 0) {
            break;
        }
        if (unk_22a != 0) {
            break;
        }
        unk_10c = 0;
        unk_22c = (func_02063b8c(10) + 3) * 20;
        break;
    case 2:
        func_020902b0(0x50, &unk_5c, 0, 0);
        F08(this) = F08(this) - 1;
        unk_110 = 2;
        func_02236630(2);
        break;
    case 3:
        if (func_02063b8c(100) > 0x32) {
            unk_10c = 0;
            unk_22c = (func_02063b8c(10) + 3) * 20;
        } else {
            unk_10c = 1;
            unk_22c = (func_02063b8c(4) + 3) * 20;
        }
        break;
    }
    Unk_ov004_02236320_V3 *pv = &unk_5c;
    v.x = unk_5c.x;
    v.y = pv->y;
    v.z = pv->z;
    func_02003c70(unk_114, &v);
}

void Unk_ov004_0224ebec::func_02236910() {
    Unk_ov004_02236320_V3 v;
    unk_98 = unk_d4;
    func_02236950();
    unk_5c.y = unk_6c;
    Unk_ov004_02236320_V3 *pv = &unk_5c;
    v.x = unk_5c.x;
    v.y = pv->y;
    v.z = pv->z;
    func_02003c70(unk_114, &v);
}

void Unk_ov004_0224ebec::func_02236950() {
    s32 ang;
    Unk_ov004_02236320_V3 *p;
    Unk_ov004_02236950_Obj o0;
    Unk_ov004_02236950_Obj o1;
    Unk_ov004_02236950_Obj o2;
    Unk_ov004_02236950_Obj o3;
    u8 fr[4];
    u8 fm[4];
    Unk_ov004_02236320_V3 v[4];
    s32 z1;
    s32 z2;
    u32 n;
    u8 i;
    s32 t;
    p = (Unk_ov004_02236320_V3 *)this;
    p = (Unk_ov004_02236320_V3 *)((u8 *)p + 0x5c);
    n = 1;
    ang = unk_8e;
    t = func_01ffc5a4(0x1000, 0x2000);
    switch (func_020b5328()) {
    case 1:
    case 4:
        v[0].x = func_01ffcb0c(0x20000, t);
        v[0].z = func_01ffcb0c(0x39000, t);
        fm[0] = n;
        break;
    case 2:
        v[0].x = func_01ffcb0c(0x13000, t);
        v[0].z = func_01ffcb0c(0x35000, t);
        fm[0] = 0;
        break;
    case 3:
        v[0].x = func_01ffcb0c(0x2c000, t);
        v[0].z = func_01ffcb0c(0x37000, t);
        fm[0] = 0;
        break;
    case 0:
        n = 4;
        v[0].x = func_01ffcb0c(0xf000, t);
        v[0].z = func_01ffcb0c(0x34000, t);
        fm[0] = 0;
        v[1].x = func_01ffcb0c(0x31000, t);
        v[1].z = func_01ffcb0c(0x34000, t);
        fm[1] = 0;
        v[2].x = func_01ffcb0c(0x20000, t);
        v[2].z = func_01ffcb0c(0x39000, t);
        fm[2] = 1;
        v[3].x = func_01ffcb0c(0x20000, t);
        v[3].z = func_01ffcb0c(0x17000, t);
        fm[3] = 1;
        break;
    }
    z1 = 0;
    z2 = z1;
    for (i = 0; i < n; i++) {
        if (fm[i] != 0) {
            s32 a = func_01ffcb0c(0x4000, 0x1000);
            s32 b = func_01ffcb0c(0xa000, 0x1000);
            fr[i] = func_02031908((u8 *)&o0 + i * 0x9c, a, 0x1000, b, &v[i], z2, z2);
        } else {
            s32 a = func_01ffcb0c(0x4000, 0x1000);
            s32 b = func_01ffcb0c(0xa000, 0x1000);
            fr[i] = func_02031908((u8 *)&o0 + i * 0x9c, 0x1000, a, b, &v[i], z1, z1);
        }
    }
    if (unk_10c != 0) {
        func_02236004();
    }
    func_02002bf4(&unk_1d8);
    func_020309d4(&unk_dc, p, &unk_68, ang, 0x666, this, 0xf);
    for (i = 0; i < n; i++) {
        if (fr[i] != 0) {
            func_020318cc((u8 *)&o0 + i * 0x9c);
        }
    }
}

BOOL Unk_ov004_0224ebec::func_02236758() {
    Unk_ov004_02236320_Ent *pl = (Unk_ov004_02236320_Ent *)func_02095204(4);
    if (unk_214 != 0) {
        if (unk_22a == 0) {
            if (pl != NULL) {
                if (pl->unk_98 > 0) {
                    if (func_02088d38(unk_1d8, 4) != 0) {
                        unk_10c = 2;
                        return TRUE;
                    }
                }
            }
            if (data_ov004_022523d4 != NULL) {
                if (data_ov004_022523d4->unk_98 > 0) {
                    if (func_02088d38(unk_1d8, 8) != 0) {
                        unk_10c = 2;
                        return TRUE;
                    }
                }
            }
        }
    }
    return FALSE;
}

BOOL Unk_ov004_0224ebec::func_022367dc() {
    if (unk_5c.y >= 0xc00) {
        unk_5c.y = unk_6c;
        if ((unk_dc[1] & 1) != 0) {
            u8 buf[0x40];
            unk_10c = 2;
            func_020339bc(buf, &unk_5c, 0, 0);
            unk_5c.y = func_02033914(buf, 1);
            func_02033988(buf);
            return TRUE;
        }
    }
    return FALSE;
}

BOOL Unk_ov004_0224ebec::func_02236694() {
    func_02054b14(unk_120);
    unk_110 = 4;
    F08(this) = 0xffff;
    func_02003c30(unk_114);
    return TRUE;
}

void Unk_ov004_0224ebec::func_02236630(u32 sel) {
    switch (sel) {
    case 0:
        unk_263 = 1;
        if (func_02236da8() == 2) {
            func_02003c40(unk_114, 0x1d2);
        } else {
            func_02236d9c(1);
        }
        break;
    case 1:
        func_02003c50(unk_114, 0x1d3);
        break;
    default:
        func_02003c50(unk_114, 0x1d4);
        break;
    }
}

BOOL Unk_ov004_0224ebec::func_022366cc() {
    if (unk_110 != 4) {
        Unk_ov004_02236320_V3 *pv = &unk_5c;
        if (F08(this) > 0x1f) {
            F08(this) = 0x1f;
        }
        func_02055440(unk_120, 3);
        func_021061bc(unk_17c, 1, 0x1f0000);
        func_020553f8(unk_120, (u8)F08(this));
        func_020547cc(unk_120, 0);
        if (F08(this) >= 0x1f && unk_110 == 1) {
            func_020abc10(pv, 0x400, 0x4000, 0x1000);
        }
    }
    return TRUE;
}

u8 Unk_ov004_0224ebec::func_022364d0() {
    u8 r6 = 0;
    Unk_ov004_02236320_V3 &r4r = unk_230[0];
    u32 o1[12];
    u32 o2[16];
    u32 o3[16];
    volatile s16 t1;
    s16 t2;
    s16 ang;
    func_020323b0(o1);
    func_020339bc(o2, &r4r, r6, r6);
    ang = unk_8e;
    if (unk_248[0].x == 0 || unk_248[0].z == 0) {
        unk_248[0].x = unk_230[0].x;
        unk_248[0].y = unk_230[0].y;
        unk_248[0].z = unk_230[0].z;
    }
    func_020309d4(o1, &r4r, &unk_248[0], ang, 0x19a, this, 0xf);
    t1 = ((u8 *)o1)[0x10];
    if (func_02033914(o2, 1) > 0x200 || unk_230[0].y > 0x1000 || t1 > 0) {
        r6++;
    }
    func_020339bc(o3, &(&r4r)[1], 0, 0);
    if (unk_248[1].x == 0 || unk_248[1].z == 0) {
        unk_248[1].x = unk_230[1].x;
        unk_248[1].y = unk_230[1].y;
        unk_248[1].z = unk_230[1].z;
    }
    func_020309d4(o1, &(&r4r)[1], &unk_248[1], ang, 0x19a, this, 0xf);
    t2 = ((u8 *)o1)[0x10];
    if (func_02033914(o3, 1) > 0x200 || unk_230[1].y > 0x1000 || t2 > 0) {
        r6 += 2;
    }
    func_02033988(o3);
    func_02033988(o2);
    func_0203239c(o1);
    return r6;
}

extern "C" s16 data_02135f44[];

void Unk_ov004_0224ebec::func_0223638c(s32 dist, s32 delta) {
    Unk_ov004_02236320_V3 *pv = &unk_5c;
    s16 ang = unk_8e;
    u32 idx;
    unk_230[0].x = unk_5c.x;
    unk_230[0].y = pv->y;
    unk_230[0].z = pv->z;
    unk_230[1].x = unk_5c.x;
    unk_230[1].y = pv->y;
    unk_230[1].z = pv->z;
    unk_248[0].x = unk_230[0].x;
    unk_248[0].y = unk_230[0].y;
    unk_248[0].z = unk_230[0].z;
    unk_248[1].x = unk_230[1].x;
    unk_248[1].y = unk_230[1].y;
    unk_248[1].z = unk_230[1].z;
    idx = ((u16)(s16)(ang + delta) >> 4) * 2;
    unk_230[0].x += (dist * data_02135f44[idx]) / 100;
    unk_230[0].z += (dist * data_02135f44[idx + 1]) / 100;
    unk_230[0].y = 0x200;
    idx = ((u16)(s16)(ang - delta) >> 4) * 2;
    unk_230[1].x += (dist * data_02135f44[idx]) / 100;
    unk_230[1].z += (dist * data_02135f44[idx + 1]) / 100;
    unk_230[1].y = 0x200;
}

Unk_ov004_02236320_Ent *Unk_ov004_0224ebec::func_02236320() {
    Unk_ov004_02236320_Ent *p = (Unk_ov004_02236320_Ent *)func_02095204(4);
    Unk_ov004_02236320_Ent *g = data_ov004_022523d4;
    if (g != NULL) {
        if (p != NULL) {
            Unk_ov004_02236320_V3 *a = &unk_5c;
            Unk_ov004_02236320_V3 *b = &p->unk_5c;
            Unk_ov004_02236320_V3 *c = &g->unk_5c;
            s32 d1, d2, d3, d4;
            d1 = unk_5c.x - p->unk_5c.x;
            if (d1 < 0) d1 = -d1;
            d2 = a->z - b->z;
            if (d2 < 0) d2 = -d2;
            d3 = unk_5c.x - c->x;
            if (d3 < 0) d3 = -d3;
            d4 = a->z - c->z;
            if (d4 < 0) d4 = -d4;
            if (d1 + d2 > d3 + d4) goto retg;
            return p;
        }
        retg:
        return g;
    }
    return p;
}
