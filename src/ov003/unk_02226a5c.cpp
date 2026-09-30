#include "types.h"

struct Unk_ov003_0225980c_V3 {
    s32 x, y, z;
    Unk_ov003_0225980c_V3() {}
};
typedef Unk_ov003_0225980c_V3 V3;

struct Unk_ov003_0225980c_Blk {
    s32 v[12];
};
typedef Unk_ov003_0225980c_Blk Blk;

struct Unk_ov003_02234b06_Rec {
    u16 a, b, c;
};

struct Unk_ov003_0225980c_Obj {
    u8 pad_000[0x50];
    Blk unk_50;
    u8 pad_80[0xb4 - 0x80];
    Blk unk_b4;
    u8 pad_e4[0x130 - 0xe4];
    u8 unk_130[0x50];
    Blk unk_180;
    u8 pad_1b0[0x204 - 0x1b0];
    V3 unk_204;
    s32 unk_210;
    s32 unk_214;
    s32 unk_218;
    s32 unk_21c;
    u8 pad_220[0x22c - 0x220];
    s32 unk_22c;
    u8 pad_230[2];
    s16 unk_232;
    u8 pad_234[4];
    s16 unk_238;
    s16 unk_23a;
    s16 unk_23c;
    u8 pad_23e[4];
    s16 unk_242;
    u8 pad_244[0x24d - 0x244];
    s8 unk_24d;
    u8 pad_24e[2];
    u8 unk_250;
    u8 unk_251;
    u8 pad_252[0x25c - 0x252];
};
typedef Unk_ov003_0225980c_Obj Obj;

struct Unk_ov003_02226d54_Net {
    u8 pad_00[0x64];
    s32 unk_64;
};

extern "C" {
extern Obj data_ov003_0225a17c[];
extern Obj data_ov003_02259354[];
extern Obj data_ov003_0225980c[];
extern Unk_ov003_02234b06_Rec data_ov003_02234b06[];
extern u8 data_ov003_02258efc;
extern Unk_ov003_02226d54_Net *data_020cbb18;
extern Blk data_021f47e0;
extern s16 data_02135f44[];

s32 func_ov003_022273b4(Obj *self, void *a, s32 n);
s32 func_0203ef38(V3 *out, void *in);
void func_0203ee38(V3 *a, V3 *b);
s32 func_020e8388(void *m, s32 x, s32 y, s32 z);
s32 func_020e8404(void *m, s32 a);
s32 func_020e83d4(void *m, s32 a);
s32 func_020e8434(void *m, s32 a);
s32 func_01ffcb0c(s32 a, s32 b);
s32 func_01ffc5a4(s32 a, s32 b);
void func_01ffb898(V3 *a, Blk *b, V3 *c);
s32 func_02090330(s32 a, V3 *v, s32 b, u16 *c);
s32 func_020902d4(s32 h, V3 *v, s32 a, u16 *c);
s32 func_020902f8(s32 h);
void *func_0209c0ac(void *p);
s32 func_02106020(void *a, s32 b);
s32 func_02106054(void *p, s32 a, s32 b);
s32 func_020547cc(void *p, void *q);
void func_020abdd0(void *p, s32 a, u32 b, u8 c);
BOOL func_02072e88(void *p, s32 i);
BOOL func_020a62a0();
void *func_02095204(s32 a);
BOOL func_020729cc(void *g, s32 a);
void func_020728d4(void *g);
void func_020728a4(void *g, void *buf, s32 n);
void func_02072824(void *g, s32 a, s32 b);

s32 func_ov003_02226a5c(Obj *self);
void func_ov003_02226a9c(void *a, Obj *o, s32 flag);
BOOL func_ov003_02226c14(void *a, Obj *o);
void func_ov003_02226c88(void *a, Obj *o);
void func_ov003_02226d08(Obj *o, s32 v);
s32 func_ov003_02226d54(u8 id);
void func_ov003_02226e70(s32 id);
s32 func_ov003_02226ee8(s32 id);
s32 func_ov003_02226fac(u8 id);
void func_ov003_02227074(u8 id, s32 flag);
void func_ov003_02227100(s32 id);
BOOL func_ov003_0222716c(s32 t);
void func_ov003_022271a8(s32 id);
void func_ov003_02227248(s32 t, s32 idx);
V3 *func_ov003_02227320(s32 idx);
BOOL func_ov003_0222733c(s32 a, s32 t);
}

struct Unk_ov003_02226a9c_Pad { Unk_ov003_02226a9c_Pad() {} ~Unk_ov003_02226a9c_Pad() {} };

extern "C" s32 func_ov003_02226a5c(Obj *self) {
    s32 r = func_ov003_022273b4(self, data_ov003_0225a17c, 8);
    r &= func_ov003_022273b4(self, data_ov003_02259354, 2);
    r &= func_ov003_022273b4(self, data_ov003_0225980c, 4);
    return r;
}

extern "C" void func_ov003_02226a9c(void *a, Obj *o, s32 flag) {
    V3 v;
    u8 *pb = (u8 *)&o->unk_50;
    s32 r6 = func_0203ef38(&v, &o->unk_204);
    if (flag) {
        data_021f47e0 = o->unk_180;
        func_020e8434(&data_021f47e0, o->unk_238);
    } else {
        func_020e8388(&data_021f47e0, v.x, v.y, v.z);
        func_020e8434(&data_021f47e0, (s16)(r6 + o->unk_238));
    }
    if (o->unk_23a != 0) func_020e8404(&data_021f47e0, o->unk_23a);
    if (o->unk_23c != 0) func_020e83d4(&data_021f47e0, o->unk_23c);
    pb += 0x64;
    *(Blk *)pb = data_021f47e0;
    if (flag && o->unk_24d == 0x39) {
        Blk m = data_021f47e0;
        V3 pos;
        pos.x = m.v[9];
        pos.y = m.v[10];
        pos.z = m.v[11];
        pb = (u8 *)o + 0x22c;
        s32 *h = (s32 *)pb;
        m.v[11] = 0;
        m.v[10] = 0;
        m.v[9] = 0;
        Blk m2 = m;
        V3 vin;
        V3 vout;
        u16 arr[2];
        vin.y = 0;
        vin.x = 0;
        vin.z = func_01ffcb0c(o->unk_210, -0x333);
        func_01ffb898(&vin, &m2, &vout);
        pos.x += vout.x;
        pos.y += vout.y;
        pos.z += vout.z;
        func_0203ee38(&pos, &pos);
        if (o->unk_21c == 0) {
            arr[0] = o->unk_210;
            *h = func_02090330(0x3a, &pos, 0, &arr[0]);
            o->unk_21c = 1;
        } else {
            arr[1] = o->unk_210;
            s32 t = *h;
            if (t != -1) func_020902d4(t, &pos, 0, &arr[1]);
        }
    }
}

extern "C" BOOL func_ov003_02226c14(void *a, Obj *o) {
    s32 idx = o->unk_24d;
    if (data_ov003_02234b06[idx].a <= 1) return FALSE;
    switch (idx) {
    case 0x1e:
    case 0x31:
        if (o->unk_251 == 0x13) return FALSE;
        return TRUE;
    case 0x18:
    case 0x30:
    case 0x32:
    case 0x33:
    case 0x3a:
    case 0x3b:
        return FALSE;
    }
    return TRUE;
}

extern "C" void func_ov003_02226c88(void *a, Obj *o) {
    s32 *p = &o->unk_210;
    if (*p > 0) {
        void *t = func_0209c0ac(&o->unk_130);
        s32 r = func_02106020(t, 0);
        u32 c;
        r = (31 - r) << 1;
        if (r > 31) c = 0;
        else c = 31 - r;
        func_020547cc(&o->unk_50, p);
        if (func_ov003_02226c14(a, o)) {
            func_020abdd0(&o->unk_204, data_ov003_02234b06[o->unk_24d].a, 0x9000, (u8)c);
        }
    }
}

extern "C" void func_ov003_02226d08(Obj *o, s32 v) {
    if (v == 100) {
        o->unk_210 = 0x1000;
        o->unk_214 = 0x1000;
        o->unk_218 = 0x1000;
    } else {
        s32 *p = &o->unk_210;
        *p = func_01ffc5a4(v << 12, 0x64000);
        o->unk_214 = *p;
        o->unk_218 = *p;
    }
}

extern "C" s32 func_ov003_02226d54(u8 id) {
    Obj *o;
    s32 idx = (u8)(id & 0xf);
    if ((id >> 4) & 1) o = &data_ov003_0225a17c[idx];
    else if ((id >> 5) & 1) o = &data_ov003_02259354[idx];
    else return 0;
    u32 t6 = o->unk_251;
    u32 c4 = (u8)o->unk_24d;
    if (c4 == -1 || o->unk_250 != 3 || t6 == 0xb || t6 == 9 || t6 == 0x10) return 0;
    if (c4 == 0x31 || c4 == 0x1e || c4 == 0x35) {
        if (func_02106020(func_0209c0ac(&o->unk_130), 0) < 0x1f) return 0;
    }
    if (c4 == 0x35 && t6 == 0x13) return 0;
    s32 c = o->unk_24d;
    if (c != 0x3a && c != 0x3b) {
        func_02106054(func_0209c0ac(&o->unk_130), 0, 0);
        o->unk_251 = 0x10;
    }
    if (func_02072e88(data_020cbb18, data_020cbb18->unk_64)) {
        if (!func_020a62a0()) {
            data_ov003_02258efc = 2;
            Unk_ov003_02226d54_Net *g = data_020cbb18;
            func_020728d4(g);
            func_020728a4(g, &id, 1);
            func_02072824(g, 0x28, 6);
        }
    }
    return 1;
}

extern "C" void func_ov003_02226e70(s32 id) {
    Obj *o;
    s32 idx = (u8)(id & 0xf);
    if ((id >> 4) & 1) o = &data_ov003_0225a17c[idx];
    else if ((id >> 5) & 1) o = &data_ov003_02259354[idx];
    if (o->unk_251 == 0x10 && o->unk_24d >= 0) {
        o->unk_251 = 0x13;
        func_02106054(func_0209c0ac(&o->unk_130), 0, 0x1f);
    }
}

extern "C" s32 func_ov003_02226ee8(s32 id) {
    Obj *o = 0;
    s32 r = 0;
    s32 idx = (u8)(id & 0xf);
    if ((id >> 4) & 1) o = &data_ov003_0225a17c[idx];
    else if ((id >> 5) & 1) o = &data_ov003_02259354[idx];
    else r = 1;
    if (o == 0) r = 1;
    if (r != 1) {
        if (func_02072e88(data_020cbb18, data_020cbb18->unk_64)) {
            if (!func_020a62a0()) r = data_ov003_02258efc;
        }
    }
    if (r == 1) {
        u8 b;
        func_ov003_02226e70(id);
        b = id;
        if (func_02072e88(data_020cbb18, data_020cbb18->unk_64)) {
            if (!func_020a62a0()) {
                Unk_ov003_02226d54_Net *g = data_020cbb18;
                func_020728d4(g);
                func_020728a4(g, &b, 1);
                func_02072824(g, 0x2f, 4);
            }
        }
    }
    return (u8)r;
}

extern "C" s32 func_ov003_02226fac(u8 id) {
    Obj *o;
    s32 idx = (u8)(id & 0xf);
    if ((id >> 4) & 1) o = &data_ov003_0225a17c[idx];
    else if ((id >> 5) & 1) o = &data_ov003_02259354[idx];
    o->unk_242 = 0;
    o->unk_250 = 4;
    if (func_02072e88(data_020cbb18, data_020cbb18->unk_64)) {
        Unk_ov003_02226d54_Net *g = data_020cbb18;
        func_020728d4(g);
        func_020728a4(g, &id, 1);
        func_02072824(g, 0x30, 4);
    }
    s32 c = o->unk_24d;
    switch (c) {
    case 0x3a:
        o->unk_251 = 8;
        o->unk_250 = 3;
        return 0xb;
    case 0x3b:
        o->unk_251 = 8;
        o->unk_250 = 3;
        return 0x18;
    }
    return c;
}

extern "C" void func_ov003_02227074(u8 id, s32 flag) {
    Obj *o = &data_ov003_0225980c[id];
    Unk_ov003_02226d54_Net *g = data_020cbb18;
    if (func_02072e88(g, g->unk_64) && flag && func_020729cc(g, id)) {
        Unk_ov003_02226d54_Net *g2 = data_020cbb18;
        func_020728d4(g2);
        func_020728a4(g2, &id, 1);
        func_02072824(g2, 0x30, 4);
    }
    if (o->unk_22c != -1) {
        func_020902f8(o->unk_22c);
        o->unk_22c = -1;
    }
    o->unk_251 = 10;
}

extern "C" void func_ov003_02227100(s32 id) {
    Obj *o;
    s32 idx = (u8)(id & 0xf);
    if ((id >> 4) & 1) o = &data_ov003_0225a17c[idx];
    else if ((id >> 5) & 1) o = &data_ov003_02259354[idx];
    if (o->unk_250 == 3) {
        func_02106054(func_0209c0ac(&o->unk_130), 0, 0);
    }
    o->unk_251 = 0x10;
}

extern "C" BOOL func_ov003_0222716c(s32 t) {
    switch (t) {
    case 0xc:
    case 0xd:
    case 0x1b:
    case 0x1c:
    case 0x1d:
    case 0x1e:
    case 0x31:
        return TRUE;
    }
    return FALSE;
}

extern "C" void func_ov003_022271a8(s32 id) {
    Obj *o;
    s32 idx = (u8)(id & 0xf);
    if ((id >> 4) & 1) o = &data_ov003_0225a17c[idx];
    else if ((id >> 5) & 1) o = &data_ov003_02259354[idx];
    o->unk_242 = 0;
    u32 st = o->unk_251;
    if (func_ov003_0222716c(o->unk_24d) && o->unk_250 != 4 && st != 0x10 && st != 10) {
        if (st != 0x11 && o->unk_232 > 6) {
            o->unk_232 = 6;
            o->unk_251 = 0x11;
        }
    } else {
        o->unk_250 = 4;
    }
}

extern "C" void func_ov003_02227248(s32 t, s32 idx) {
    Obj *o = &data_ov003_0225980c[idx];
    u8 *e = (u8 *)func_02095204(idx);
    if (e != 0) {
        V3 *pv = (V3 *)(e + 0x5c);
        V3 *d = &o->unk_204;
        d->x = *(s32 *)(e + 0x5c);
        d->y = pv->y;
        d->z = pv->z;
        d->y += 0x1b34;
        s16 ang = *(s16 *)(e + 0x8e);
        o->unk_23a = ang;
        s32 a = ((u16)ang >> 4) * 2;
        o->unk_204.x += func_01ffcb0c(0xfae, data_02135f44[a * 1]);
        d->z += func_01ffcb0c(0xfae, data_02135f44[a + 1]);
    }
    o->unk_250 = 1;
    o->unk_251 = 0x10;
    switch (t) {
    case 0x25:
        o->unk_24d = 0x39;
        break;
    case 0x3a:
        o->unk_24d = 0xb;
        break;
    case 0x3b:
        o->unk_24d = 0x18;
        break;
    default:
        o->unk_24d = t;
        break;
    }
}

extern "C" V3 *func_ov003_02227320(s32 idx) {
    Obj *o = &data_ov003_0225980c[idx];
    return &o->unk_204;
}

extern "C" BOOL func_ov003_0222733c(s32 a, s32 t) {
    switch (t) {
    case 9:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 31:
    case 33:
    case 34:
    case 35:
    case 36:
    case 38:
    case 39:
    case 40:
    case 41:
    case 42:
    case 43:
    case 44:
    case 45:
    case 46:
    case 47:
    case 52:
    case 53:
        return TRUE;
    }
    return FALSE;
}
