#include "types.h"

struct Unk_02091404_Rec {
    /* 0x00 */ s32 x;
    /* 0x04 */ s32 y;
    /* 0x08 */ s32 z;
    /* 0x0c */ s16 unk_0c;
    /* 0x0e */ s16 unk_0e;
    /* 0x10 */ s16 unk_10;
    /* 0x12 */ s16 unk_12;
    /* 0x14 */ s32 unk_14;
    /* 0x18 */ s32 unk_18;
};

struct Unk_02091404_Ext {
    Unk_02091404_Rec rec;
    u16 unk_1c;
};

struct Unk_02091404_Idx {
    u8 b[4];
};

struct Unk_02091404_V {
    s32 x, y, z;
};

struct Unk_02091404_Sub {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0c;
};

struct Unk_02091404_Node {
    /* 0x00 */ Unk_02091404_Node *next;
    /* 0x04 */ u8 unk_04[0x1c];
    /* 0x20 */ u16 unk_20;
    /* 0x22 */ u16 unk_22;
    /* 0x24 */ u16 unk_24;
    /* 0x26 */ u16 unk_26;
    /* 0x28 */ u8 unk_28[8];
    /* 0x30 */ s32 unk_30;
};

struct Unk_02091404_Obj {
    /* 0x00 */ u8 unk_00[8];
    /* 0x08 */ Unk_02091404_Node *unk_08;
    /* 0x0c */ u8 unk_0c[0x0c];
    /* 0x18 */ Unk_02091404_Sub **unk_18;
    /* 0x1c */ s32 unk_1c;
    /* 0x20 */ s32 unk_20;
    /* 0x24 */ s32 unk_24;
    /* 0x28 */ s32 unk_28;
    /* 0x2c */ u8 unk_2c[0x10];
    /* 0x3c */ s16 unk_3c;
    /* 0x3e */ s16 unk_3e;
    /* 0x40 */ s16 unk_40;
    /* 0x42 */ u8 unk_42[10];
    /* 0x4c */ s32 unk_4c;
    /* 0x50 */ s32 unk_50;
    /* 0x54 */ s32 unk_54;
    /* 0x58 */ u8 unk_58[0x10];
    /* 0x68 */ u8 unk_68;
    /* 0x69 */ u8 unk_69;
    /* 0x6a */ u8 unk_6a[0x0e];
    /* 0x78 */ void (*unk_78)(Unk_02091404_Obj *, s32);
};

struct Unk_02091404_Arg {
    /* 0x00 */ u8 unk_00[4];
    /* 0x04 */ Unk_02091404_Idx idx;
    /* 0x08 */ u8 unk_08[4];
    /* 0x0c */ Unk_02091404_Obj *unk_0c;
};

extern Unk_02091404_Rec data_021d04b0[];
extern Unk_02091404_Ext data_021d0830;
extern char data_020e166c[], data_020e164c[], data_020e156c[], data_020e1544[], data_020d0324[];
extern char data_020e155c[], data_020e1554[], data_020e16d4[], data_020d030c[], data_020e14a0[];
extern char data_020e1784[], data_020e1734[];
extern Unk_02091404_V data_020d02c4;
extern s16 data_02135f44[];

extern "C" {
s32 func_02090424(void *a, void *b, s32 c);
void func_02090538(void *r);
s32 func_02093bb4(s32 id, s32 a, s32 b, s32 c, s32 d, const char *e);
s32 func_02093d54(s32 id, s32 a, s32 b, s32 c, s32 d, const char *e);
s32 func_02093c28(void *p, const char *a, const char *b);
s32 func_02093c94(void *p, const char *a, const char *b);
s32 func_02093914(void *p, s32 a, const char *b, s32 c, const char *d, s32 e, const char *f, s32 g, s32 h);
s32 func_02093c1c(void *p);
s32 func_0208fe0c(void *p);
s32 func_0208fb20(s32 a, s32 b, s32 c, const char *d);
s32 func_020904f0(void *p, u32 a, s32 b, s32 c, s32 d, s32 e, s32 f);
void func_02116048(void *, void *, u32);
void func_020339bc(void *buf, s32 b, s32 c, s32 d);
void func_02033988(void *buf);
s32 func_020b8fe8(void);
s32 func_020b50bc(void);
void func_020e93a0(Unk_02091404_V *v, s16 a);
s32 func_020e7b98(s32 a, s32 b);
void func_020918f4(Unk_02091404_Obj *o, s32 k);

s32 func_02091404(Unk_02091404_Arg *p)
{
    return func_02090424(data_021d04b0, p, 0xb);
}

s32 func_02091418(s32 a, s32 b, s32 c, s32 d)
{
    return func_02093bb4(0x53, a, b, c, d, data_020e166c);
}

s32 func_02091440(Unk_02091404_Arg *p)
{
    Unk_02091404_Idx i = p->idx;
    Unk_02091404_Rec *r = &data_021d04b0[i.b[0]];
    BOOL ok = FALSE;
    if (r->unk_14 != -1 && r->unk_0e != 0) {
        Unk_02091404_Obj *o = p->unk_0c;
        o->unk_20 = r->x + (*o->unk_18)->unk_04;
        o->unk_24 = r->y + (*o->unk_18)->unk_08;
        o->unk_28 = r->z + (*o->unk_18)->unk_0c;
        if (r->unk_0e > 0) {
            p->unk_0c->unk_69 = (r->unk_0e * 0x2955) >> 12;
            r->unk_0e = r->unk_0e - 1;
        }
        ok = TRUE;
    }
    if (!ok) {
        func_02090538(r);
    }
    return ok;
}

s32 func_020914d4(void *p)
{
    return func_02093c94(p, NULL, NULL);
}

s32 func_020914e0(s32 a, s32 b, s32 c, s32 d)
{
    return func_02093bb4(0x92, a, b, c, d, data_020e164c);
}

s32 func_02091508(s32 a, s32 b, s32 c, s32 d)
{
    return func_02093bb4(0x4f, a, b, c, d, data_020e156c);
}

s32 func_02091530(void *p)
{
    return func_02093c28(p, data_020d0324, NULL);
}

s32 func_02091540(void *p)
{
    return func_02093c94(p, data_020d0324, NULL);
}

s32 func_02091550(s32 a, s32 b, s32 c, s32 d)
{
    return func_02093bb4(0x8d, a, b, c, d, data_020e1544);
}

s32 func_02091578(Unk_02091404_Arg *p)
{
    Unk_02091404_Idx i = p->idx;
    Unk_02091404_Rec *r = &data_021d04b0[i.b[0]];
    BOOL ok = FALSE;
    if (r->unk_14 != -1 && r->unk_0e != 0) {
        volatile Unk_02091404_V v;
        s32 t0 = r->x;
        v.x = t0;
        v.y = r->y;
        v.z = r->z;
        Unk_02091404_Obj *o = p->unk_0c;
        o->unk_20 = t0 + (*o->unk_18)->unk_04;
        o->unk_24 = v.y + (*o->unk_18)->unk_08;
        o->unk_28 = v.z + (*o->unk_18)->unk_0c;
        if (r->unk_0e > 0) {
            r->unk_0e = r->unk_0e - 1;
        }
        p->unk_0c->unk_54 = r->unk_10;
        Unk_02091404_Node *n;
        for (n = p->unk_0c->unk_08; n != NULL; n = n->next) {
            n->unk_30 = r->unk_10;
        }
        ok = TRUE;
    }
    if (!ok) {
        Unk_02091404_Node *n;
        for (n = p->unk_0c->unk_08; n != NULL; n = n->next) {
            n->unk_26 = n->unk_24;
        }
        func_02090538(r);
    }
    return ok;
}

s32 func_0209162c(Unk_02091404_Arg *p)
{
    Unk_02091404_Ext *const e = &data_021d0830;
    Unk_02091404_Idx i = p->idx;
    volatile Unk_02091404_V v;
    s32 t = e->rec.x;
    v.x = t;
    v.y = e->rec.y;
    v.z = e->rec.z;
    Unk_02091404_Obj *o = p->unk_0c;
    o->unk_20 = t + (*o->unk_18)->unk_04;
    o->unk_24 = v.y + (*o->unk_18)->unk_08;
    o->unk_28 = v.z + (*o->unk_18)->unk_0c;
    func_0208fe0c(p->unk_0c);
    func_02116048(e, &data_021d04b0[i.b[0]], 0x1c);
}

s32 func_020916a0(s32 a, s32 b, s32 c, s32 d)
{
    u32 buf[17];
    s32 result;
    s32 k;
    func_020339bc(buf, b, 0, 0);
    k = buf[13];
    result = 3;
    if (k == 0x16 || func_020b8fe8() == 1) {
        if (func_02093bb4(0x85, a, b, c, d, data_020e155c) == 0) {
            result = 2;
        }
    } else if (k == 3 && func_020b50bc() != 0) {
        if (func_02093bb4(0x86, a, b, c, d, data_020e1554) == 0) {
            result = 2;
        }
    } else if (k == 0x13) {
        result = func_02093d54(0x84, a, b, c, d, NULL);
    } else {
        result = func_02093d54(0x83, a, b, c, d, NULL);
    }
    func_02033988(buf);
    return result;
}

s32 func_02091754(void *p)
{
    return func_02093914(p, 0x1f, data_020e16d4, 0x1d, data_020e16d4, 0x1d, data_020e16d4, -1, 0);
}

s32 func_0209177c(void *p)
{
    return func_02093914(p, 0x1f, data_020e16d4, 0x1d, data_020e16d4, 0x1d, data_020e16d4, -1, 0);
}

s32 func_020917a4(void *p)
{
    return func_02093c94(p, NULL, data_020d030c);
}

s32 func_020917b4(s32 a, s32 b, s32 c, s32 d)
{
    u32 buf[17];
    s32 k;
    s32 id;
    s32 r;
    func_020339bc(buf, b, 0, 0);
    k = buf[13];
    id = -1;
    if (func_020b50bc() != 0 && k == 3) {
        id = 0x8a;
    } else if (k == 0x13) {
        id = 0x89;
    }
    if (id != -1) {
        r = func_02093d54(id, a, b, c, d, data_020e14a0);
        func_02033988(buf);
        return r;
    }
    func_02033988(buf);
    return 3;
}

s32 func_02091820(s32 a, s32 b, s32 c, s32 d)
{
    u32 buf[17];
    s32 k;
    s32 id;
    s32 r;
    func_020339bc(buf, b, 0, 0);
    k = buf[13];
    id = -1;
    if (func_020b50bc() != 0 && k == 3) {
        id = 0x88;
    } else if (k == 0x13) {
        id = 0x87;
    }
    if (id != -1) {
        r = func_02093d54(id, a, b, c, d, data_020e14a0);
        func_02033988(buf);
        return r;
    }
    func_02033988(buf);
    return 3;
}

void func_0209188c(Unk_02091404_Obj *p)
{
    Unk_02091404_Ext *const e = &data_021d0830;
    u32 ang = (u16)e->rec.unk_0c;
    p->unk_20 = e->rec.x + (*p->unk_18)->unk_04;
    p->unk_24 = e->rec.y + (*p->unk_18)->unk_08;
    p->unk_28 = e->rec.z + (*p->unk_18)->unk_0c;
    s32 idx = ((s32)ang >> 4) * 2;
    p->unk_3c = data_02135f44[idx];
    p->unk_3e = 0;
    p->unk_40 = data_02135f44[idx + 1];
    func_0208fe0c(p);
    p->unk_78 = func_020918f4;
}

void func_020918f4(Unk_02091404_Obj *o, s32 k)
{
    if (k == 1) {
        Unk_02091404_Node *n = o->unk_08;
        if (n != NULL) {
            n->unk_20 = func_020e7b98(o->unk_3c, o->unk_40);
            o->unk_78 = NULL;
        }
    }
}

s32 func_02091920(s32 a, s32 b, s32 c, s32 d)
{
    Unk_02091404_Ext *e = &data_021d0830;
    s32 r = 3;
    func_020904f0(e, e->unk_1c, a, b, c, d, -0xb5);
    if (func_0208fb20(0x7f, b, c, data_020e1784) != 0) {
        r = 0;
    }
    func_02090538(e);
    return r;
}

s32 func_02091970(Unk_02091404_Arg *p)
{
    Unk_02091404_Idx i = p->idx;
    Unk_02091404_Rec *r = &data_021d04b0[i.b[0]];
    BOOL ok = FALSE;
    if (r->unk_14 != -1 && r->unk_0e != 0) {
        volatile Unk_02091404_V v;
        s32 t0 = r->x;
        v.x = t0;
        v.y = r->y;
        v.z = r->z;
        s32 t = ((volatile Unk_02091404_Rec *)r)->unk_0e;
        Unk_02091404_Obj *o = p->unk_0c;
        o->unk_20 = t0 + (*o->unk_18)->unk_04;
        o->unk_24 = v.y + (*o->unk_18)->unk_08;
        o->unk_28 = v.z + (*o->unk_18)->unk_0c;
        if (t > 0) {
            r->unk_0e = r->unk_0e - 1;
            p->unk_0c->unk_68 = 5;
        } else if (t < -1) {
            u16 val;
            r->unk_0e = r->unk_0e + 1;
            s32 q = r->unk_0e;
            if (q <= -0x29) {
                val = 1;
            } else {
                val = ((q + 0x28) * 0x19a >> 12) + 1;
            }
            p->unk_0c->unk_68 = val;
        } else {
            p->unk_0c->unk_68 = 5;
        }
        ok = TRUE;
    }
    if (!ok) {
        func_02090538(r);
    }
    return ok;
}

void func_02091a40(Unk_02091404_Arg *p)
{
    func_02093c1c(p);
    p->unk_0c->unk_68 = 1;
}

s32 func_02091a58(s32 a, s32 b, s32 c, s32 d)
{
    Unk_02091404_Ext *e = &data_021d0830;
    s32 r = 3;
    func_020904f0(e, e->unk_1c, a, b, c, d, -0xb5);
    if (func_0208fb20(0x7e, b, c, data_020e1734) != 0) {
        r = 0;
    }
    func_02090538(e);
    return r;
}

s32 func_02091aa8(Unk_02091404_Arg *p)
{
    Unk_02091404_Idx i = p->idx;
    Unk_02091404_Rec *r = &data_021d04b0[i.b[0]];
    BOOL ok = FALSE;
    if (r->unk_14 != -1 && r->unk_0e != 0) {
        volatile Unk_02091404_V v;
        Unk_02091404_V v2;
        s32 t0 = r->x;
        v.x = t0;
        v.y = r->y;
        v.z = r->z;
        s32 t = ((volatile Unk_02091404_Rec *)r)->unk_0e;
        v2.x = data_020d02c4.x;
        v2.y = data_020d02c4.y;
        v2.z = data_020d02c4.z;
        Unk_02091404_Obj *o = p->unk_0c;
        o->unk_20 = t0 + (*o->unk_18)->unk_04;
        o->unk_24 = v.y + (*o->unk_18)->unk_08;
        o->unk_28 = v.z + (*o->unk_18)->unk_0c;
        func_020e93a0(&v2, r->unk_0c);
        s32 vy = v2.y;
        s32 vz = v2.z;
        o = p->unk_0c;
        o->unk_3c = v2.x;
        o->unk_3e = vy;
        o->unk_40 = vz;
        if (t > 0) {
            r->unk_0e = r->unk_0e - 1;
            p->unk_0c->unk_54 = 0;
            p->unk_0c->unk_4c = 0x3d;
            p->unk_0c->unk_50 = 0x466;
        } else if (t < -1) {
            u8 a8;
            s16 b16, c16;
            r->unk_0e = r->unk_0e + 1;
            s32 q = r->unk_0e;
            if (q <= -0xa1) {
                s32 w = q + 0xb4;
                a8 = (w * 0xc00) >> 12;
                b16 = (s16)(w * 3) + 0x3d;
                c16 = (s16)(w * 0x38) + 0x466;
            } else if (q <= -0x3d) {
                a8 = 0xf;
                b16 = 0x7b;
                c16 = 0x8cd;
            } else {
                q = -q;
                a8 = (q * 0x400) >> 12;
                b16 = (s16)q + 0x3d;
                c16 = (s16)(q * 0x13) + 0x466;
            }
            p->unk_0c->unk_69 = a8;
            p->unk_0c->unk_4c = b16;
            p->unk_0c->unk_50 = c16;
        } else {
            p->unk_0c->unk_69 = 0;
            p->unk_0c->unk_4c = 0x3d;
            p->unk_0c->unk_50 = 0x466;
        }
        ok = TRUE;
    }
    if (!ok) {
        func_02090538(r);
    }
    return ok;
}

s32 func_02091cb4(Unk_02091404_Arg *p, s32 a, s32 b, s32 c, s32 d0, s16 e1, s16 e2, s16 e3, s32 d4, s16 e5, s16 e6, s16 e7)
{
    Unk_02091404_Idx i = p->idx;
    Unk_02091404_Rec *r = &data_021d04b0[i.b[0]];
    Unk_02091404_V v2;
    BOOL ok;
    v2.x = data_020d02c4.x;
    v2.y = data_020d02c4.y;
    v2.z = data_020d02c4.z;
    ok = FALSE;
    if (r->unk_14 != -1 && r->unk_0e != 0) {
        volatile Unk_02091404_V v;
        s32 t0 = r->x;
        v.x = t0;
        v.y = r->y;
        v.z = r->z;
        s32 t = ((volatile Unk_02091404_Rec *)r)->unk_0e;
        Unk_02091404_Obj *o = p->unk_0c;
        o->unk_20 = t0 + (*o->unk_18)->unk_04;
        o->unk_24 = v.y + (*o->unk_18)->unk_08;
        o->unk_28 = v.z + (*o->unk_18)->unk_0c;
        func_020e93a0(&v2, r->unk_0c);
        s32 vy = v2.y;
        s32 vz = v2.z;
        o = p->unk_0c;
        o->unk_3c = v2.x;
        o->unk_3e = vy;
        o->unk_40 = vz;
        if (t > 0) {
            r->unk_0e = r->unk_0e - 1;
            p->unk_0c->unk_68 = 5;
            p->unk_0c->unk_4c = d0;
            p->unk_0c->unk_50 = d4;
        } else if (t < -1) {
            u16 x8;
            s16 b16, c16;
            r->unk_0e = r->unk_0e + 1;
            s32 q = r->unk_0e;
            if (q <= -0xa1) {
                s32 w;
                x8 = a + 1 + ((b * (-0xa1 - q)) >> 12);
                w = q + 0xb4;
                b16 = d0 + (s16)(e2 * w);
                c16 = d4 + (s16)(e6 * w);
            } else if (q <= -0x3d) {
                x8 = a;
                b16 = e1;
                c16 = e5;
            } else {
                x8 = a + 1 + ((c * (q + 0x3c)) >> 12);
                q = -q;
                b16 = d0 + (s16)(e3 * q);
                c16 = d4 + (s16)(e7 * q);
            }
            p->unk_0c->unk_68 = x8;
            p->unk_0c->unk_4c = b16;
            p->unk_0c->unk_50 = c16;
        } else {
            p->unk_0c->unk_68 = 5;
            p->unk_0c->unk_4c = d0;
            p->unk_0c->unk_50 = d4;
        }
        ok = TRUE;
    }
    if (!ok) {
        func_02090538(r);
    }
    return ok;
}

void func_02091c28(Unk_02091404_Arg *p)
{
    func_02091cb4(p, 1, 0x333, 0x111, 0xe1, 0x1c3, 0xb, 4, 0x266, 0x4cd, 0x1f, 0xa);
}

void func_02091c70(Unk_02091404_Arg *p)
{
    func_02091cb4(p, 2, 0x266, 0xcd, 0xcd, 0x19a, 0xa, 3, 0x200, 0x400, 0x1a, 9);
}
}
