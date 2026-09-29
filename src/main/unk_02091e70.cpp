#include "types.h"

struct Unk_02092388_Vec {
    s32 x, y, z;
};

struct Unk_02092388_Data {
    Unk_02092388_Vec pos;
    s16 ang;
};

struct Unk_02092388_Sub {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0c;
};

struct Unk_02092388_Sub2 {
    Unk_02092388_Sub *unk_00;
};

struct Unk_02092388_Node {
    Unk_02092388_Node *unk_00;
    u8 pad_04[0x1c];
    u16 unk_20;
    u16 unk_22;
    u16 unk_24;
    u16 unk_26;
};

struct Unk_02092388_Obj {
    u8 pad_00[8];
    Unk_02092388_Node *unk_08;
    s32 unk_0c;
    u8 pad_10[8];
    Unk_02092388_Sub2 *unk_18;
    u32 unk_1c;
    s32 unk_20;
    s32 unk_24;
    s32 unk_28;
    u8 pad_2c[0x10];
    s16 unk_3c;
    s16 unk_3e;
    s16 unk_40;
    u8 pad_42[0xa];
    s32 unk_4c;
    s32 unk_50;
    u8 pad_54[4];
    u16 unk_58;
    u8 pad_5a[0xe];
    u8 unk_68;
    u8 unk_69;
    u8 pad_6a[0xe];
    void *unk_78;
};

struct Unk_02092528_Outer {
    u32 unk_00;
    u8 unk_04[4];
    u32 unk_08;
    Unk_02092388_Obj *unk_0c;
};

struct Unk_02092528_Idx {
    u8 b[4];
};

struct Unk_02092528_Entry {
    s32 x, y, z;
    s16 ang;
    s16 cnt;
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
};

struct Unk_02091fa4_Color {
    u16 r : 5;
    u16 g : 5;
    u16 b : 5;
    u16 x : 1;
};

struct Unk_020926d4_Obj {
    u32 unk_00;
    Unk_02092388_Vec unk_04;
    Unk_02092388_Vec unk_10;
    s16 unk_1c;
    s16 unk_1e;
    s16 unk_20;
};

extern "C" {
extern u8 data_020d02c4[];
extern u8 data_020d02dc[];
extern u8 data_020d02ac[];
extern u8 data_020d0294[];
extern u8 data_020d0288[];
extern u8 data_020d0270[];
extern u8 data_020d0234[];
extern u8 data_020d0228[];
extern u8 data_020d0378[];
extern u8 data_020d036c[];
extern u8 data_020d0360[];
extern u8 data_020d0354[];
extern u8 data_020d0348[];
extern u8 data_020d033c[];
extern u8 data_020e15cc[];
extern u8 data_020e149c[];
extern u8 data_020e14f4[];
extern u8 data_020e159c[];
extern u8 data_020e14c0[];
extern u8 data_020e15fc[];
extern u8 data_020e16f4[];
extern u8 data_020e1488[];
extern u8 data_020e14b0[];
extern u8 data_020e14a4[];
extern u8 data_020e1478[];
extern u8 data_020e14ac[];
extern u8 data_020e1484[];
extern u8 data_020e16d4[];
extern u8 data_020e15bc[];
extern u8 data_020e175c[];
extern u8 data_020e165c[];
extern u8 data_020e14c4[];
extern u8 data_020e416c;
extern Unk_02092388_Data data_021d0830;
extern Unk_02092528_Entry data_021d04b0[];
extern s16 data_02135f44[];

s32 func_02093c94(void *a, s32 b, void *c);
s32 func_02093c28(void *a, s32 b, void *c);
s32 func_02093da4(void *a, void *b, void *c);
s32 func_02093bb4(s32 id, s32 a, s32 b, s32 c, s32 d, void *e);
s32 func_02093d54(s32 id, s32 a, s32 b, s32 c, s32 d, void *e);
s32 func_020904f0(void *a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g);
s32 func_0208fc88(s32 a, s32 b, s32 c, void *d);
s32 func_02093998(Unk_02092388_Obj *o, s32 a, void *b, s32 c, s32 d, s32 e, void *f, s32 g, void *h);
s32 func_0209389c(s32 a, s32 b, s32 c, s32 d, s32 e, void *f);
void func_02090538(void *e);
void func_0208fe0c(void *o);
s32 func_020b8fe8();
s32 func_020b50bc();
void func_020339bc(void *buf, s32 pos, s32 a, s32 b);
void func_02033988(void *buf);
s32 func_020baa04(s32 a);
void func_02093f50(void *a);
s32 func_02133150(s32 a, s32 b);
void func_020e93a0(Unk_02092388_Vec *v, s16 a);
void func_01ffca8c(Unk_02092388_Vec *a, void *b, Unk_02092388_Vec *c);
s32 func_020e7b98(s32 a, s32 b);

void func_02091ed0(Unk_02092528_Outer *o, u8 a, s32 b, s32 c);
s32 func_02092310(s32 a, s32 b, s32 c, s32 d, s32 e, void *f);
void func_02092388(Unk_02092388_Obj *o, Unk_02092388_Vec *v, s32 ang);
void func_0209241c(Unk_02092388_Obj *o, s32 flag);
s32 func_020920fc(s32 a, s32 b, s32 c, s32 d, s32 e);
void func_020926d4(Unk_020926d4_Obj *o);
}

namespace Unk_02091ea0_Ns {
extern "C" s32 func_02091ed0(Unk_02092528_Outer *o, u8 a, s32 b, s32 c);
}

extern "C" {

void func_02091e70(Unk_02092528_Outer *o) {
    func_02093c94(o, 0, data_020d02c4);
    o->unk_0c->unk_69 = 0;
    o->unk_0c->unk_4c = 0x3d;
    o->unk_0c->unk_50 = 0x466;
}

void func_02091ea0(Unk_02092528_Outer *o) {
    Unk_02091ea0_Ns::func_02091ed0(o, 5, 0xe1, 0x266);
}

void func_02091eb8(Unk_02092528_Outer *o) {
    Unk_02091ea0_Ns::func_02091ed0(o, 5, 0xcd, 0x200);
}

void func_02091ed0(Unk_02092528_Outer *o, u8 a, s32 b, s32 c) {
    func_02093c94(o, 0, data_020d02c4);
    o->unk_0c->unk_68 = a;
    o->unk_0c->unk_4c = b;
    o->unk_0c->unk_50 = c;
}

s32 func_02091f00(s32 a, s32 b, s32 c, s32 d) {
    return func_02093bb4(0x52, a, b, c, d, 0);
}

s32 func_02091f24(s32 a, s32 b, s32 c, s32 d) {
    if (func_020b8fe8() == 1) {
        return func_02093bb4(0x74, a, b, c, d, data_020e15cc);
    }
    return 3;
}

s32 func_02091f5c(void *a) {
    return func_02093c28(a, 0, data_020d02dc);
}

s32 func_02091f6c(void *a) {
    return func_02093c94(a, 0, data_020d02dc);
}

s32 func_02091f7c(s32 a, s32 b, s32 c, s32 d) {
    return func_02093d54(0x63, a, b, c, d, data_020e149c);
}

void func_02091fa4(u8 *p) {
    Unk_02091fa4_Color col[4];
    func_02093f50(p);
    *(u16 *)&col[0] = func_020baa04(3);
    col[3] = col[0];
    col[1] = col[3];
    *(u16 *)&col[2] = 0x7fff;
    col[1].r = func_02133150(col[2].r * col[1].r, 31);
    col[1].g = func_02133150(col[2].g * col[1].g, 31);
    col[1].b = func_02133150(col[2].b * col[1].b, 31);
    *(u16 *)(p + 0x5a) = *(u16 *)&col[1];
}

s32 func_02092054(s32 a, s32 b, s32 c, s32 d) {
    return func_02093bb4(0x7a, a, b, c, d, data_020e14f4);
}

s32 func_0209207c(void *a) {
    Unk_02092388_Vec v;
    v.x = 0;
    v.y = 0;
    v.z = 0x1000;
    return func_02093c28(a, 0, &v);
}

s32 func_0209209c(void *a) {
    return func_02093c94(a, 0, data_020d02c4);
}

s32 func_020920ac(s32 a, s32 b, s32 c, s32 d) {
    return func_02093bb4(0x79, a, b, c, d, data_020e159c);
}

s32 func_020920d4(s32 a, s32 b, s32 c, s32 d) {
    return func_020920fc(a, b, c, d, 0x78);
}

s32 func_020920e8(s32 a, s32 b, s32 c, s32 d) {
    return func_020920fc(a, b, c, d, 0x77);
}

s32 func_020920fc(s32 a, s32 b, s32 c, s32 d, s32 e) {
    func_020904f0(&data_021d0830, -1, a, b, c, d, -1);
    if (func_0208fc88(e, b, c, data_020e14c0) != 0) {
        for (s32 i = 0; i < 3; i++) {
            if (func_0208fc88(0x54, b, c, data_020e15fc + i * 4) == 0) {
                return 3;
            }
        }
        return 1;
    }
    return 3;
}

s32 func_02092168(void *a) {
    return func_02093da4(a, data_020d02ac, 0);
}

s32 func_02092178(void *a) {
    return func_02093da4(a, data_020d0294, 0);
}

s32 func_02092188(void *a) {
    return func_02093da4(a, data_020d0288, 0);
}

s32 func_02092198(s32 a, s32 b, s32 c, s32 d) {
    s32 r = 3;
    func_020904f0(&data_021d0830, -1, a, b, c, d, -1);
    if (func_0208fc88(0x76, b, c, data_020e14c0) && func_0208fc88(0x54, b, c, data_020e16f4)) {
        r = 1;
    }
    return r;
}

s32 func_020921f0(void *a) {
    return func_02093da4(a, 0, data_020d0270);
}

s32 func_02092200(s32 a, s32 b, s32 c, s32 d) {
    if (func_02092310(a, b, c, d, 0x57, data_020e1488) == 1) {
        return func_02092310(a, b, c, d, 0x57, data_020e14b0);
    }
    return 3;
}

void func_02092244(Unk_02092388_Obj *o) {
    func_02092388(o, (Unk_02092388_Vec *)data_020d0234, 0);
}

void func_02092254(Unk_02092388_Obj *o) {
    func_02092388(o, (Unk_02092388_Vec *)data_020d0228, 0);
}

s32 func_02092264(s32 a, s32 b, s32 c, s32 d) {
    if (func_02092310(a, b, c, d, 0x57, data_020e14a4) == 1) {
        return func_02092310(a, b, c, d, 0x57, data_020e1478);
    }
    return 3;
}

void func_020922a8(Unk_02092388_Obj *o) {
    func_02092388(o, (Unk_02092388_Vec *)data_020d0378, 0);
}

void func_020922b8(Unk_02092388_Obj *o) {
    func_02092388(o, (Unk_02092388_Vec *)data_020d036c, 0);
}

s32 func_020922c8(s32 a, s32 b, s32 c, s32 d) {
    return func_02092310(a, b, c, d, 0x58, data_020e14ac);
}

void func_020922e4(Unk_02092388_Obj *o) {
    func_02092388(o, (Unk_02092388_Vec *)data_020d0360, 0);
}

s32 func_020922f4(s32 a, s32 b, s32 c, s32 d) {
    return func_02092310(a, b, c, d, 0x58, data_020e1484);
}

s32 func_02092310(s32 a, s32 b, s32 c, s32 d, s32 e, void *f) {
    u32 buf[16];
    func_020339bc(buf, b, 0, 0);
    u32 t = buf[13];
    s32 r = -1;
    if (t == 0x13 || (func_020b50bc() && t == 3)) {
        r = e;
    }
    if (r != -1) {
        s32 res = func_02093d54(e, a, b, c, d, f);
        func_02033988(buf);
        return res;
    }
    func_02033988(buf);
    return 3;
}

void func_02092374(Unk_02092388_Obj *o) {
    func_02092388(o, (Unk_02092388_Vec *)data_020d0354, -0x7530);
}

void func_02092388(Unk_02092388_Obj *o, Unk_02092388_Vec *v, s32 ang) {
    Unk_02092388_Data *const d = &data_021d0830;
    s16 a = (s16)(*(volatile s16 *)&d->ang + ang);
    Unk_02092388_Vec t;
    t.x = v->x;
    t.y = v->y;
    t.z = v->z;
    func_020e93a0(&t, *(volatile s16 *)&d->ang);
    func_01ffca8c(&t, &d->pos, &t);
    s32 idx = ((u16)a >> 4) * 2;
    o->unk_20 = t.x + o->unk_18->unk_00->unk_04;
    o->unk_24 = t.y + o->unk_18->unk_00->unk_08;
    o->unk_28 = t.z + o->unk_18->unk_00->unk_0c;
    o->unk_3c = data_02135f44[idx];
    o->unk_3e = 0;
    o->unk_40 = data_02135f44[idx + 1];
    func_0208fe0c(o);
    o->unk_78 = (void *)func_0209241c;
}

void func_0209241c(Unk_02092388_Obj *o, s32 flag) {
    if (flag == 1) {
        Unk_02092388_Node *n = o->unk_08;
        if (n != 0) {
            n->unk_20 = func_020e7b98(o->unk_3c, o->unk_40);
            o->unk_78 = 0;
        }
    }
}

s32 func_02092448(s32 a, s32 b, s32 c, s32 d) {
    u32 buf[16];
    func_020339bc(buf, b, 0, 0);
    u32 t = buf[13];
    if (t == 0x13 || (func_020b50bc() && t == 3)) {
        s32 res = func_02093d54(0x56, a, b, c, d, data_020e16d4);
        func_02033988(buf);
        return res;
    }
    func_02033988(buf);
    return 3;
}

s32 func_020924a4(s32 a, s32 b, s32 c, s32 d) {
    u32 buf[16];
    func_020339bc(buf, b, 0, 0);
    u32 t = buf[13];
    if (t == 0x13 || (func_020b50bc() && t == 3)) {
        s32 res = func_02093d54(0x55, a, b, c, d, data_020e16d4);
        func_02033988(buf);
        return res;
    }
    func_02033988(buf);
    return 3;
}

s32 func_02092500(s32 a, s32 b, s32 c, s32 d) {
    return func_02093bb4(0x70, a, b, c, d, data_020e15bc);
}

s32 func_02092528(Unk_02092528_Outer *o) {
    s32 r;
    Unk_02092528_Idx idx;
    Unk_02092388_Vec vec;
    idx = *(Unk_02092528_Idx *)o->unk_04;
    Unk_02092528_Entry *e = data_021d04b0 + idx.b[0];
    r = 0;
    if (e->unk_14 != -1 && e->cnt != 0) {
        vec.x = r;
        vec.y = r;
        vec.z = 0x1000;
        Unk_02092388_Obj *in = o->unk_0c;
        in->unk_20 = e->x + in->unk_18->unk_00->unk_04;
        in->unk_24 = e->y + in->unk_18->unk_00->unk_08;
        in->unk_28 = e->z + in->unk_18->unk_00->unk_0c;
        func_020e93a0(&vec, e->ang);
        s32 ty = vec.y;
        s32 tz = vec.z;
        Unk_02092388_Obj *p = o->unk_0c;
        s32 tx = vec.x;
        p->unk_3c = tx;
        p->unk_3e = ty;
        p->unk_40 = tz;
        func_02093998(o->unk_0c, 0x71, data_020e16d4, -1, r, 0x71, data_020e16d4, 0x72, data_020e16d4);
        if (e->cnt > 0) {
            e->cnt = e->cnt - 1;
        }
        r = 1;
    }
    if (r == 0) {
        o->unk_0c->unk_1c |= 2;
        if (o->unk_0c->unk_0c > 0) {
            r = func_02093998(o->unk_0c, 0x71, data_020e16d4, -1, 0, 0x71, data_020e16d4, 0x72, data_020e16d4);
        }
    }
    if (r == 0) {
        func_02090538(e);
    }
    return r;
}

s32 func_02092620(void *a) {
    return func_02093c94(a, 0, data_020d02c4);
}

s32 func_02092630(s32 a, s32 b, s32 c, s32 d) {
    return func_02093bb4(0x5a, a, b, c, d, data_020e175c);
}

s32 func_02092658(Unk_02092528_Outer *o) {
    if (func_02093c28(o, 0, 0) == 0) {
        for (Unk_02092388_Node *n = o->unk_0c->unk_08; n != 0; n = n->unk_00) {
            n->unk_26 = n->unk_24;
        }
        return 0;
    }
    return 1;
}

s32 func_02092684(s32 a, s32 b, s32 c, s32 d) {
    s32 r = 3;
    if (func_02093d54(0x59, a, b, c, d, data_020e165c) < 3) {
        func_0209389c(r, a, b, c, d, (void *)func_020926d4);
        r = 1;
    }
    return r;
}

void func_020926d4(Unk_020926d4_Obj *o) {
    Unk_02092388_Data *const d = &data_021d0830;
    Unk_02092388_Vec *pv = &o->unk_04;
    pv->x = d->pos.x;
    pv->y = d->pos.y;
    pv->z = d->pos.z;
    Unk_02092388_Vec *ps = &o->unk_10;
    ps->x = 0x1000;
    ps->y = 0x1000;
    ps->z = 0x1000;
    o->unk_1c = 0;
    o->unk_1e = d->ang;
    o->unk_20 = 0;
}

s32 func_02092708(void *a) {
    return func_02093da4(a, 0, data_020d0348);
}

s32 func_02092718(s32 a, s32 b, s32 c, s32 d) {
    u32 buf[16];
    func_020339bc(buf, b, 0, 0);
    s32 id;
    if (buf[13] == 0x13) {
        id = 0x6f;
    } else {
        id = 0x6e;
    }
    s32 res = func_02093d54(id, a, b, c, d, data_020e14c4);
    func_02033988(buf);
    return res;
}

s32 func_02092760(void *a) {
    return func_02093da4(a, 0, data_020d033c);
}

static inline BOOL Unk_02092770_IsOne(u8 v) {
    return v == 1 ? TRUE : FALSE;
}

s32 func_02092770(s32 a, s32 b, s32 c, s32 d) {
    u32 buf[17];
    s32 r;
    func_020339bc(buf, b, 0, 0);
    u32 t = buf[13];
    r = 3;
    if (Unk_02092770_IsOne(data_020e416c)) {
        if (t == 9 || t == 3) {
            r = func_02093d54(0x4b, a, b, c, d, 0);
        }
    } else if (t == 0x16 || func_020b8fe8() == 1) {
        r = func_02093d54(0x4d, a, b, c, d, 0);
    } else if (t == 3 && func_020b50bc()) {
        r = func_02093d54(0x4e, a, b, c, d, 0);
    } else {
        r = func_02093d54(t == 0x13 ? 0x4c : 0x4b, a, b, c, d, 0);
    }
    func_02033988(buf);
    return r;
}

}
