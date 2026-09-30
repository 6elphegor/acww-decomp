#include "types.h"

struct Unk_ov003_0220cd4c_V3 {
    s32 x, y, z;
    Unk_ov003_0220cd4c_V3() {}
    Unk_ov003_0220cd4c_V3(s32 a, s32 b, s32 c) {
        x = a;
        y = b;
        z = c;
    }
};

struct Unk_ov003_0220cd4c_P3 {
    s32 x, y, z;
};

struct Unk_ov003_0220cd4c_Blk {
    s32 v[12];
};

struct Unk_ov003_0220cd4c_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

struct Unk_ov003_0220cd4c_Rec {
    u8 unk_00;
    u8 pad_01;
    s16 unk_02;
    u8 unk_04;
};

struct Unk_ov003_0220cd4c_Sec {
    virtual void vfunc_00();
};

struct Unk_ov003_0220cd4c_P0 {
    virtual void vfunc_00();
    u8 pad_04[0x8e - 4];
    s16 unk_8e;
    u8 pad_90[0xc4 - 0x90];
    Unk_ov003_0220cd4c_V3 unk_c4;
    s16 unk_d0;
    u8 pad_d2[0xec - 0xd2];
};

struct Unk_ov003_0220cd4c_Obj : Unk_ov003_0220cd4c_P0, Unk_ov003_0220cd4c_Sec {
    u8 pad_f0[0x140 - 0xf0];
    s32 unk_140;
    u8 pad_144[4];
    s32 unk_148;
    u8 pad_14c[4];
    s32 unk_150;
    u8 pad_154[0x294 - 0x154];
    Unk_ov003_0220cd4c_Blk unk_294;
    u8 pad_2c4[0x2cc - 0x2c4];
    u8 unk_2cc[8];
    Unk_ov003_0220cd4c_Bits unk_2d4;
    u8 pad_2d8[4];
    s32 unk_2dc;
    u8 pad_2e0[0x59c - 0x2e0];
    u8 unk_59c[0x28];
    u8 unk_5c4[0x64];
    u8 pad_628[0x688 - 0x628];
    s32 unk_688;
    s32 unk_68c;
    s32 unk_690;
    Unk_ov003_0220cd4c_Blk unk_694;
    u8 pad_6c4[0x6f0 - 0x6c4];
    s32 unk_6f0;
    u8 pad_6f4[4];
    s32 unk_6f8;
    u8 pad_6fc[4];
    s32 unk_700;
    u8 pad_704[0x7d0 - 0x704];
    Unk_ov003_0220cd4c_Rec unk_7d0;
    u8 pad_7d6[0x7ec - 0x7d6];
    s32 unk_7ec;
    u8 pad_7f0[0x7f8 - 0x7f0];
    s32 unk_7f8;
    u32 unk_7fc;
    u8 pad_800[0x80c - 0x800];
    s32 unk_80c;
    u8 pad_810[0x818 - 0x810];
    s32 unk_818;
    u8 pad_81c[0x8ec - 0x81c];
    u8 unk_8ec;
};

struct Unk_ov003_0220d114_Ent {
    u8 v[20];
};

struct Unk_ov003_0220d114_Act {
    u8 pad_00[0x7e];
    s8 unk_7e;
    u8 pad_7f[0x1ff - 0x7f];
    u8 unk_1ff;
};

class Unk_ov003_0220cd4c_Msg {
public:
    Unk_ov003_0220cd4c_Msg();
    ~Unk_ov003_0220cd4c_Msg();
    void func_0200e2c0(s32 a, s32 b, s32 c);
    u8 pad_00[0xc];
    u32 unk_0c;
    u8 pad_10[8];
};

typedef Unk_ov003_0220cd4c_Obj Obj;
typedef Unk_ov003_0220cd4c_V3 V3;
typedef Unk_ov003_0220cd4c_Blk Blk;
typedef Unk_ov003_0220cd4c_Msg Msg;
typedef Unk_ov003_0220d114_Act Act;

extern "C" {
extern void *data_020cbb18;
extern u8 data_ov003_022349e6[];
extern u8 data_ov003_02230ac4[];
extern u8 data_ov003_02230ac8[];

s32 func_02056654(void *p);
void func_0203ee38(V3 *a, V3 *b);
void func_02010a7c(u16 *out, Obj *o);
s32 func_02088a20(V3 *a, V3 *b, s32 c, u8 *d, s32 e);
void func_ov003_02227e08(V3 *v, u32 a);
u32 func_ov003_02227e40(u32 a);
s32 func_ov003_0220ca70(Obj *o, u8 *a, V3 *v, u8 *b);
s32 func_ov003_0220cbc8(Obj *o, V3 *a, V3 *b, V3 *c);
s32 func_ov003_0220c768(Obj *o, V3 *a, V3 *b, V3 *c);
s32 func_ov003_02226d54(u32 a);
void func_0200ecdc(Obj *o, u32 a);
s32 func_020e7b98(s32 a, s32 b);
s32 func_020e780c(s32 a, s32 b);
void func_0200f43c(V3 *out, Obj *o);
void func_02010740(Obj *o, V3 *v, s32 a, s32 b);
void func_02089040(void *p);
void func_0200f504(Obj *o, s32 a);
void func_02010914(Obj *o);
void func_02010358(Obj *o, s32 a, u32 b, u32 c);
s32 func_0205e1a0(void *p, u32 a, u32 b, u32 c);
s32 func_0200e248(Obj *o, Msg *m);
void func_0200ef08(Obj *o);
void func_0201071c(Obj *o);
s32 func_020729bc(void *g, u32 a);
s32 func_02007c08(Obj *o, s32 a);
void func_020103b4(Obj *o, s32 a, u32 b, u32 c);
Act *func_0205fbb8(void *p);
void func_0205fbc0(void *p, u32 a);
void func_0205fb20(void *p);
void func_0205fb08(void *p);
void func_ov003_02212034(Blk *b, u32 a);
void func_ov003_02223400(Act *a, V3 *b, V3 *c);
void func_ov003_02223450(V3 *v, s32 a);
void func_ov003_02223258(u32 a);
void func_0200ce98(Obj *o, s32 a, s32 b, s32 c);
void func_02099124(void *p);
s32 func_0206e7a4(u32 a, Act *b);
s32 func_0206ec6c();
s32 func_0206ed18();
s32 func_0200ec44(Obj *o, u32 a);
void func_0200ec1c(Obj *o, u32 a);
void func_0203e47c(Obj *o, Unk_ov003_0220cd4c_Sec *s);
void func_0203d7f8();
s32 func_0206e750();
s32 func_02042bbc(u32 a, u32 b);
void func_ov003_02205e58(Obj *o, void *d, u32 a, u32 b, s32 c);
void func_0200e7f4(Obj *o);
void func_0200f4c0(Obj *o, s32 a);

void func_ov003_0220cd4c(Obj *o);
void func_ov003_0220cf30(Obj *o);
void func_ov003_0220cf68(Obj *o);
void func_ov003_0220cf78(Obj *o);
s32 func_ov003_0220cfc0(Obj *o, s16 b);
void func_ov003_0220cfcc(Obj *o, u8 *b);
s32 func_ov003_0220d00c(Obj *o, s32 a, s32 b);
void func_ov003_0220d084(Obj *o);
void func_ov003_0220d0c4(Obj *o);
void func_ov003_0220d114(Obj *o);
s32 func_ov003_0220d568(Obj *o, s16 a);
void func_ov003_0220d590(Obj *o, u8 *b);
u32 func_ov003_0220d5c4(u8 *p);
void func_ov003_0220d5c8(u8 *p, u32 v);
s32 func_ov003_0220d5cc(Obj *o, u32 a, s32 b, s32 c);
void func_ov003_0220d608(Obj *o);
void func_ov003_0220d6f4(Obj *o);
}

static inline BOOL Rng(volatile u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    u32 b = *p;
    u32 a = *p;
    if (a >= lo && b <= hi) r = TRUE;
    return r;
}

extern "C" void func_ov003_0220cd4c(Obj *o) {
    struct {
        u8 a, b, c, pad;
        volatile u16 w;
    } st;
    V3 v0c, v18, v24, v30, v3c;
    volatile Unk_ov003_0220cd4c_P3 v48;
    V3 v54;
    Unk_ov003_0220cd4c_Rec *r5;
    if (o->unk_2dc == 0) return;
    if (func_02056654(o->unk_2cc)) return;
    if (o->unk_2d4.mid < 3) return;
    st.a = 0;
    st.b = 0;
    v0c = V3(o->unk_688, o->unk_68c, o->unk_690);
    func_0203ee38(&v0c, &v0c);
    v18.x = v0c.x;
    v18.y = v0c.y;
    v18.z = v0c.z;
    func_ov003_0220cbc8(o, &v18, &v24, &v30);
    r5 = &o->unk_7d0;
    if (r5->unk_00 == 0 && o->unk_2d4.mid < 6) {
        func_02010a7c((u16 *)&st.w, o);
        s32 id;
        if (Rng(&st.w, 0x1376, 0x1376))
            id = 0xa00;
        else
            id = 0xd1f;
        if (func_02088a20(&v18, &v24, id, &st.c, 0)) {
            st.a = 1;
            func_ov003_02227e08(&v3c, st.c);
            st.b = func_ov003_02227e40(st.c);
            if (st.b != 0) v3c.z += 0x100;
        }
    }
    switch (func_ov003_0220ca70(o, &st.a, &v3c, &st.b)) {
    case 1:
        if (func_ov003_02226d54(st.c) == 0) return;
        r5->unk_00 = 1;
        r5->unk_04 = st.c;
        func_0200ecdc(o, 0x847);
        return;
    case 2:
        return;
    case 3:
        if (r5->unk_00 != 0) return;
        r5->unk_00 = 1;
        r5->unk_04 = 0xff;
        func_0200ecdc(o, 0x847);
        return;
    case 0:
    default:
        break;
    }
    v54.x = v0c.x;
    v54.y = v0c.y;
    v54.z = v0c.z;
    s32 r = func_ov003_0220c768(o, &v54, &v24, &v30);
    if (st.a == 0) return;
    s32 ang;
    if (r) {
        s32 dx = v3c.x - v30.x;
        v48.x = dx;
        s32 dz = v3c.z - v30.z;
        v48.z = dz;
        ang = func_020e7b98(dx, dz);
    } else {
        ang = 0x7fff;
    }
    if (func_020e780c(ang, 0) > 0x4000) {
        if (func_ov003_02226d54(st.c) == 0) return;
        r5->unk_00 = 1;
        r5->unk_04 = st.c;
        func_0200ecdc(o, 0x847);
    }
}

extern "C" void func_ov003_0220cf30(Obj *o) {
    V3 v;
    func_0200f43c(&v, o);
    func_02010740(o, &v, 0x99a, 0x1000);
    func_02089040((u8 *)o + 0x1c0);
}

extern "C" void func_ov003_0220cf68(Obj *o) {
    func_0200f504(o, *(s16 *)((u8 *)o + 0x7d2));
}

extern "C" void func_ov003_0220cf78(Obj *o) {
    BOOL r;
    if (func_02056654(o->unk_2cc))
        r = TRUE;
    else
        r = FALSE;
    func_02010914(o);
    if (r == 0) {
        if (func_02056654(o->unk_2cc)) func_0200ecdc(o, 0x848);
    }
}

extern "C" s32 func_ov003_0220cfc0(Obj *o, s16 b) {
    return func_ov003_0220d00c(o, 6, b);
}

extern "C" void func_ov003_0220cfcc(Obj *o, u8 *b) {
    Unk_ov003_0220cd4c_Rec *r = &o->unk_7d0;
    u32 z = 0;
    r->unk_00 = z;
    r->unk_02 = *(s16 *)(b + 0xc);
    r->unk_04 = 0xff;
    func_02010358(o, 0x5b, 3, z);
    func_0205e1a0(o->unk_59c, 3, 3, 0);
}

extern "C" s32 func_ov003_0220d00c(Obj *o, s32 a, s32 b) {
    Msg m;
    u16 *p = (u16 *)&m.unk_0c;
    m.func_0200e2c0(0x56, a, b);
    if (o->unk_140 == 2) {
        *p = func_020e7b98(o->unk_148 - o->unk_6f0, o->unk_150 - o->unk_6f8);
    } else {
        *p = o->unk_8e;
    }
    s32 r = func_0200e248(o, &m);
    return r;
}

extern "C" void func_ov003_0220d084(Obj *o) {
    func_02010914(o);
    func_0200ef08(o);
    func_0201071c(o);
    if (func_020729bc(data_020cbb18, o->unk_7fc)) {
        func_ov003_0220d114(o);
    } else {
        func_ov003_0220d0c4(o);
    }
}

extern "C" void func_ov003_0220d0c4(Obj *o) {
    if (func_02056654(o->unk_2cc)) {
        o->unk_7f8 = func_02007c08(o, o->unk_7ec);
        func_020103b4(o, 0x6c, 6, 6);
        func_0205e1a0(o->unk_59c, 0x13, 6, 0);
    }
}

extern "C" void func_ov003_0220d114(Obj *o) {
    u16 v[4];
    V3 vf;
    Blk bl;
    V3 v48;
    Act *p5 = func_0205fbb8(o->unk_5c4);
    s32 f;
    if (o->unk_700 == 0x5a) {
        f = *(s32 *)&o->unk_2d4 >> 12;
        if ((u16)f < 6) {
            if (p5) {
                s32 k = ((u32)data_ov003_022349e6[p5->unk_1ff * 20] << 12) / 100;
                f = (s16)(k - k * (u16)f / 6);
            } else {
                f = (s16)(0x1000 - (u16)f * 0x2ab);
            }
        } else {
            f = 0;
        }
    } else {
        f = 0;
    }
    vf.x = f;
    vf.y = f;
    vf.z = f;
    bl = o->unk_694;
    func_ov003_02212034(&bl, 0);
    v48.x = ((V3 *)&bl.v[9])->x;
    v48.y = ((V3 *)&bl.v[9])->y;
    v48.z = ((V3 *)&bl.v[9])->z;
    v[0] = 0xfff1;
    if (p5) {
        V3 a, b;
        func_0203ee38(&v48, &v48);
        a.x = v48.x;
        a.y = v48.y;
        a.z = v48.z;
        b.x = vf.x;
        b.y = vf.y;
        b.z = vf.z;
        func_ov003_02223400(p5, &a, &b);
        v[0] = p5->unk_7e + 0x12e8;
        if (f == 0) func_ov003_02223258(o->unk_7fc);
    }
    u8 *r6 = &o->unk_7d0.unk_00;
    u8 *r7 = &o->unk_8ec;
    switch (*r6) {
    case 0:
        if (!func_02056654(o->unk_2cc)) return;
        o->unk_7f8 = func_02007c08(o, o->unk_7ec);
        func_0200ce98(o, 6, 1, -1);
        if (func_020729bc(data_020cbb18, o->unk_7fc)) {
            v[3] = v[0];
            func_02099124(&v[3]);
        }
        func_0205fb20(o->unk_5c4);
        break;
    case 1:
        if (o->unk_700 == 0x5a) {
            if (!func_02056654(o->unk_2cc)) return;
            func_020103b4(o, 0x6c, 6, 6);
            func_0205e1a0(o->unk_59c, 0x13, 6, 0);
        }
        if (func_020729bc(data_020cbb18, o->unk_7fc)) {
            if (o->unk_818 == 5) {
                if (!func_0206e7a4(v[0], p5)) return;
                o->unk_818 = 6;
            } else if (o->unk_818 == 6) {
                if (!func_0206ec6c()) return;
                o->unk_818 = 0xf;
                if (func_0206ed18()) {
                    func_0205fbc0(o->unk_5c4, 0);
                    if (func_0200ec44(o, 0x11)) {
                        func_0200ec1c(o, 0x11);
                        func_0203e47c(o, o);
                    }
                    func_0203d7f8();
                    v[1] = func_0206e750();
                    o->unk_7f8 = func_02007c08(o, o->unk_7ec);
                    if (Rng(&v[1], 0x12e8, 0x131f)) {
                        func_ov003_02205e58(o, data_ov003_02230ac4, 0, 6, -1);
                    } else {
                        func_0200ce98(o, 6, 1, -1);
                        *r6 = 2;
                    }
                    return;
                }
                goto l378;
            } else if (o->unk_818 >= 0xf) {
            l378:
                if (Rng(&v[0], 0x1320, 0x1322)) {
                    *r6 = 3;
                    if (o->unk_80c == -1) {
                        o->unk_80c = func_02042bbc(o->unk_7fc, v[0]);
                        if (o->unk_80c != -1) *r6 = 2;
                    }
                } else {
                    if (p5) {
                        V3 a, b;
                        func_ov003_02223450(&vf, p5->unk_7e);
                        a.x = v48.x;
                        a.y = v48.y;
                        a.z = v48.z;
                        b.x = vf.x;
                        b.y = vf.y;
                        b.z = vf.z;
                        func_ov003_02223400(p5, &a, &b);
                    }
                    func_ov003_02205e58(o, data_ov003_02230ac8, 0, 6, -1);
                    func_ov003_0220d5c8(r7, 2);
                }
                func_0205fb08(o->unk_5c4);
                if (func_0200ec44(o, 0x11)) {
                    func_0200ec1c(o, 0x11);
                    func_0203e47c(o, o);
                }
                func_0203d7f8();
            }
        } else {
            o->unk_7f8 = func_02007c08(o, o->unk_7ec);
            if (func_ov003_0220d5c4(r7) == 2) {
                if (p5) {
                    V3 a, b;
                    func_ov003_02223450(&vf, p5->unk_7e);
                    a.x = v48.x;
                    a.y = v48.y;
                    a.z = v48.z;
                    b.x = vf.x;
                    b.y = vf.y;
                    b.z = vf.z;
                    func_ov003_02223400(p5, &a, &b);
                }
                func_0205fb08(o->unk_5c4);
                *r6 = 2;
                func_020103b4(o, 0, 6, 6);
            }
        }
        break;
    case 2:
        o->unk_7f8 = func_02007c08(o, o->unk_7ec);
        func_0200ce98(o, 6, 1, -1);
        break;
    case 3:
        if (o->unk_80c == -1) {
            o->unk_80c = func_02042bbc(o->unk_7fc, v[0]);
            if (o->unk_80c != -1) *r6 = 2;
        }
        break;
    }
}

extern "C" s32 func_ov003_0220d568(Obj *o, s16 a) {
    return func_ov003_0220d5cc(o, func_ov003_0220d5c4(&o->unk_8ec), 6, a);
}

extern "C" void func_ov003_0220d590(Obj *o, u8 *b) {
    u8 v = b[0xc];
    o->unk_7d0.unk_00 = v;
    func_ov003_0220d5c8(&o->unk_8ec, v);
    func_02010358(o, 0x5a, 3, 3);
    func_0200ecdc(o, 0x4f);
}

extern "C" s32 func_ov003_0220d5cc(Obj *o, u32 a, s32 b, s32 c) {
    Msg m;
    m.func_0200e2c0(0x55, b, c);
    *(u8 *)((u8 *)&m + 0xc) = a;
    s32 r = func_0200e248(o, &m);
    return r;
}

extern "C" void func_ov003_0220d608(Obj *o) {
    func_02010914(o);
    volatile Unk_ov003_0220cd4c_P3 sv;
    V3 *pv = &o->unk_c4;
    sv.x = pv->x;
    sv.y = pv->y;
    sv.z = pv->z;
    s16 h = o->unk_d0;
    Blk b0 = o->unk_294;
    Blk b1 = o->unk_694;
    func_0200e7f4(o);
    func_0200ef08(o);
    func_0201071c(o);
    if (func_020729bc(data_020cbb18, o->unk_7fc)) {
        func_ov003_0220d6f4(o);
    } else {
        o->unk_7f8 = func_02007c08(o, o->unk_7ec);
        func_0200f4c0(o, 0x400);
    }
    o->unk_c4.x = sv.x;
    o->unk_c4.y = sv.y;
    o->unk_c4.z = sv.z;
    o->unk_d0 = h;
    o->unk_294 = b0;
    o->unk_694 = b1;
}

extern "C" u32 func_ov003_0220d5c4(u8 *p) {
    return *p;
}

extern "C" void func_ov003_0220d5c8(u8 *p, u32 v) {
    *p = v;
}
