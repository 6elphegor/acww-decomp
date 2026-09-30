#include "types.h"

struct Unk_ov003_02222fe4_V3 {
    s32 x, y, z;
};
typedef Unk_ov003_02222fe4_V3 V3;

struct Unk_ov003_02222fe4_Ent {
    u8 pad_00[8];
    V3 unk_08;
    u8 pad_14[0x3c - 0x14];
    s32 unk_3c;
};
typedef Unk_ov003_02222fe4_Ent Ent;

struct Unk_ov003_02257e9c_Rec {
    u8 pad_00[0x40];
    s32 unk_40;
    void *unk_44;
    s32 unk_48;
    u8 pad_4c[8];
    V3 unk_54;
    V3 unk_60;
    V3 unk_6c;
    u8 pad_78[8];
    u8 unk_80;
    u8 pad_81[3];
    V3 unk_84;
    s32 unk_90;
    u8 pad_94;
    u8 pad_95;
    s16 unk_96;
    s16 unk_98;
    s16 unk_9a;
    s32 unk_9c;
    u8 unk_a0;
    u8 pad_a1[3];
};
typedef Unk_ov003_02257e9c_Rec Rec;

struct Unk_ov003_0225812c_Obj {
    u8 pad_000[0x7e];
    s8 unk_7e;
    u8 unk_7f;
    u8 pad_80[0x120 - 0x80];
    V3 unk_120;
    u8 pad_12c[0x138 - 0x12c];
    s16 unk_138;
    u8 pad_13a[2];
    s32 unk_13c;
    u16 unk_140;
    u8 pad_142[0x1e0 - 0x142];
    u8 unk_1e0[8];
    s32 unk_1e8;
    u8 pad_1ec[0x1ff - 0x1ec];
    u8 unk_1ff;
    u8 unk_200;
    u8 pad_201[3];
    s32 unk_204;
    u8 pad_208[0x211 - 0x208];
    u8 unk_211;
    u8 pad_212[0x224 - 0x212];
    u8 unk_224;
    u8 unk_225;
    u8 pad_226;
    s8 unk_227;
    u8 pad_228[4];
    Ent *unk_22c;
    V3 unk_230;
    u8 unk_23c;
    u8 pad_23d;
    u8 unk_23e;
    u8 unk_23f;
    u8 pad_240[0x24c - 0x240];
};
typedef Unk_ov003_0225812c_Obj Obj;

extern "C" {
extern Obj data_ov003_0225812c[];
extern Rec data_ov003_02257e9c[];
extern V3 data_ov003_02257ef0;
extern s32 data_ov003_02257a80;
extern u8 data_ov003_022349d4[];
extern u8 data_ov003_022349d6[];
extern u8 data_ov003_022349d7[];
extern u8 data_ov003_022349de[];
extern u8 data_ov003_022349e6[];
extern u8 *data_ov003_022348c4[];
extern u8 data_020ca314[];
extern u8 data_020ca316[];
extern u8 data_021f4770;
extern void *data_020cbb18;
extern s32 data_020c7c1c;

Ent *func_0205ffe4();
void func_0205fbbc(Ent *e, void *o);
void func_0205f92c(Ent *e, s32 a);
BOOL func_02072e44(void *g);
BOOL func_020729cc(void *g, s32 a);
void func_020728d4(void *g);
void func_020728a4(void *g, void *buf, s32 n);
void func_02072824(void *g, s32 a, s32 b);
s32 func_02133150(s32 a, s32 b);
void *func_020947f0(s32 a);
void func_020947c0(u16 *out, s32 a);
void *func_02095204(s32 a);
s32 func_02002bdc(void *a, void *b);
BOOL func_02030d78(V3 *out, void *pos, s32 ang, s32 a, s32 b, s32 c);
BOOL func_0204f364(void *o, s32 a);
BOOL func_020565e8(void *o, s32 a);
void func_020902d4(s32 h, V3 *v, s32 a, s32 b);

BOOL func_ov003_02222f28(V3 *v, s32 a, s32 b, s32 c);
BOOL func_ov003_02222f08();
void func_ov003_02222ef4();
BOOL func_ov003_0222034c(V3 *a, V3 *b, s32 c, s32 d, s32 e);
s32 func_ov003_022202cc(s32 a, u16 b);
s32 func_ov003_022202ec(s32 a, u16 b);
void func_ov003_022201ac(void *self, s32 v);
BOOL func_ov003_02220b00(Obj *o, void *p);
BOOL func_ov003_02222d9c(Obj *o, u32 a);
BOOL func_ov003_02222d48(Obj *o);
s32 func_ov003_02224828(void *a, s32 b, s32 c);

BOOL func_ov003_02222fe4(Obj *self);
BOOL func_ov003_02223134(Obj *self);
void func_ov003_0222316c(Rec *self, s32 a, s32 t);
BOOL func_ov003_0222323c(Rec *self);
BOOL func_ov003_02223258(s32 idx);
V3 *func_ov003_022232c8(s32 idx);
BOOL func_ov003_022232e8(s32 idx);
BOOL func_ov003_02223310(s32 idx, s32 flag);
BOOL func_ov003_02223400(Obj *o, V3 *a, V3 *b);
void func_ov003_02223450(V3 *out, s32 idx);
BOOL func_ov003_02223498(Obj *o);
BOOL func_ov003_022234c4(Obj *o);
s32 func_ov003_022234fc(Obj *o);
BOOL func_ov003_02223554(Obj *o);
void func_ov003_022236dc(Obj *o);
BOOL func_ov003_02223730(Obj *o);
BOOL func_ov003_022237dc(Obj *o);

BOOL func_ov003_02222fe4(Obj *self) {
    s32 res = 0;
    Ent *e = func_0205ffe4();
    s32 who;
    Obj *p;
    s32 ok;
    s32 i;
    if (e == NULL) {
        return FALSE;
    }
    void *g = data_020cbb18;
    if (func_02072e44(g)) {
        s32 t = e->unk_3c;
        if (t < 0) {
            return FALSE;
        }
        who = ((s32 *)g)[0x64 / 4];
        if (t != who) {
            return FALSE;
        }
    } else {
        who = 0;
    }
    p = data_ov003_0225812c;
    ok = 1;
    for (i = 0; i < 6; p++, i++) {
        if (self != p && who == p->unk_227) {
            ok = 0;
            break;
        }
    }
    if (ok != 0) {
        V3 v8;
        V3 v14;
        V3 *p120 = &self->unk_120;
        v14.x = p120->x;
        v14.y = p120->y;
        v14.z = p120->z;
        if (func_ov003_02222f28(&v14, self->unk_138, who, self->unk_7e)) {
            s32 sc = func_02133150(data_ov003_022349d4[self->unk_1ff * 0x14] << 12, 100);
            V3 *pv = &e->unk_08;
            v8.x = e->unk_08.x;
            v8.y = pv->y;
            v8.z = pv->z;
            if (func_ov003_02222f08() && func_ov003_0222034c(&self->unk_120, &v8, sc, sc, sc)) {
                if (self->unk_200 != 2) {
                    self->unk_200 = 2;
                }
                s32 r = func_ov003_022202cc(0x5000, 0x7fff);
                self->unk_138 = self->unk_138 + (s16)r;
                self->unk_140 = 0x14;
            } else {
                self->unk_227 = (s8)who;
                self->unk_22c = e;
                func_0205fbbc(e, self);
                res = 1;
                self->unk_23c = 1;
            }
        }
        func_ov003_02222ef4();
    }
    return res;
}

void func_ov003_0222316c(Rec *self, s32 a, s32 t) {
    s16 *p96 = &self->unk_96;
    s16 *p98 = &self->unk_98;
    s16 *p9a = &self->unk_9a;
    switch (t) {
    case 0xa:
    case 0xb:
    case 0x2d:
    case 0x2e:
    case 0x2f:
    case 0x30:
        *p9a = *p9a + 0x7fff;
        *p98 = -a;
        *p96 = *p96 + 0x4000;
        break;
    case 0xf:
        *p9a = *p9a + 0x6000;
        *p98 = a;
        *p96 = *p96 + 0x4000;
        break;
    case 0x23:
    case 0x24:
    case 0x25:
        *p98 = a;
        break;
    case 0x35:
    case 0x36:
        *p96 = *p96 + 0x4000;
        *p98 = a;
        break;
    default:
        *p9a = *p9a + 0x4000;
        *p96 = a;
        *p96 = *p96 + 0x4000;
        break;
    }
}

BOOL func_ov003_0222323c(Rec *self) {
    BOOL r = FALSE;
    if (func_0204f364(self->unk_44, 1)) {
        r = TRUE;
    }
    return r;
}

BOOL func_ov003_02223258(s32 idx) {
    BOOL r = FALSE;
    if (idx < 0 || idx >= 4) {
        return FALSE;
    }
    Rec *p = &data_ov003_02257e9c[idx];
    if (p->unk_40 != 3 && p->unk_40 != 2) {
        return r;
    }
    if (p->unk_a0 == 0) {
        u8 b = 1;
        void *g = data_020cbb18;
        func_020728d4(g);
        func_020728a4(g, &b, 1);
        func_02072824(g, 0x2a, 4);
        r = TRUE;
        p->unk_a0 = r;
    }
    return r;
}

V3 *func_ov003_022232c8(s32 idx) {
    if (idx < 0 || idx >= 4) {
        return &data_ov003_02257ef0;
    }
    return &data_ov003_02257e9c[idx].unk_54;
}

BOOL func_ov003_022232e8(s32 idx) {
    if (idx < 0 || idx >= 4) {
        return TRUE;
    }
    Rec *p = &data_ov003_02257e9c[idx];
    if (p->unk_40 != 0) {
        return TRUE;
    }
    return FALSE;
}

BOOL func_ov003_02223310(s32 idx, s32 flag) {
    s32 t;
    s32 ang;
    V3 *pos;
    if (idx < 0 || idx > 3) {
        return FALSE;
    }
    u8 *ob = (u8 *)func_02095204(idx);
    if (ob == NULL) {
        return FALSE;
    }
    pos = (V3 *)(ob + 0x5c);
    Rec *rec = &data_ov003_02257e9c[idx];
    t = rec->unk_90;
    if ((u32)(t - 0x38) <= 2) {
        if (flag != 0) {
            return TRUE;
        }
        rec->unk_40 = 4;
        return TRUE;
    }
    V3 *q = &rec->unk_60;
    ang = func_02002bdc(&rec->unk_6c, q);
    V3 tmp;
    if (func_02030d78(&tmp, pos, ang, 0x7800, 0x2000, 0xc)) {
        q->x = tmp.x;
        q->y = tmp.y;
        q->z = tmp.z;
    }
    func_ov003_0222316c(rec, ang, t);
    if (flag != 0) {
        rec->unk_40 = 1;
    }
    rec->unk_48 = 3;
    void *g = data_020cbb18;
    if (func_02072e44(g)) {
        if (func_020729cc(g, idx)) {
            u8 b = 2;
            g = data_020cbb18;
            func_020728d4(g);
            func_020728a4(g, &b, 1);
            func_02072824(g, 0x2a, 4);
        }
    }
    return TRUE;
}

BOOL func_ov003_02223400(Obj *o, V3 *a, V3 *b) {
    if (o == NULL) {
        return FALSE;
    }
    s32 i = o->unk_227;
    if (i == -1) {
        return FALSE;
    }
    Rec *r = &data_ov003_02257e9c[i];
    V3 *pd = &r->unk_54;
    pd->x = a->x;
    pd->y = a->y;
    pd->z = a->z;
    pd = &r->unk_84;
    pd->x = b->x;
    pd->y = b->y;
    pd->z = b->z;
    return TRUE;
}

void func_ov003_02223450(V3 *out, s32 idx) {
    if (idx < 0 || idx >= 0x3b) {
        out->x = 0x1000;
        out->y = 0x1000;
        out->z = 0x1000;
    } else {
        s32 v = func_02133150(data_ov003_022349e6[data_020ca314[idx * 6] * 0x14] << 12, 100);
        out->x = v;
        out->y = v;
        out->z = v;
    }
}

BOOL func_ov003_02223498(Obj *o) {
    if (o == NULL) {
        return FALSE;
    }
    s32 i = o->unk_227;
    BOOL r = FALSE;
    if (i != -1) {
        Rec *p = &data_ov003_02257e9c[i];
        p->unk_40 = 4;
        r = TRUE;
    }
    return r;
}

BOOL func_ov003_022234c4(Obj *o) {
    BOOL r = FALSE;
    if (o == NULL) {
        return r;
    }
    s32 i = o->unk_227;
    if (i == -1) {
        return r;
    }
    Rec *p = &data_ov003_02257e9c[i];
    if (p->unk_80 != 0) {
        r = TRUE;
    }
    return r;
}

s32 func_ov003_022234fc(Obj *o) {
    s32 r = 0;
    if (o == NULL) {
        return r;
    }
    if (o->unk_224 != 5) {
        return r;
    }
    if (o->unk_13c >= o->unk_23f) {
        if (func_ov003_02222d9c(o, o->unk_211)) {
            r = 2;
        } else {
            func_ov003_02223134(o);
            r = 1;
        }
    }
    return r;
}

BOOL func_ov003_02223554(Obj *o) {
    BOOL r = FALSE;
    if (o == NULL) {
        return r;
    }
    Ent *e = o->unk_22c;
    if (e == NULL) {
        func_ov003_02223134(o);
        return r;
    }
    switch (o->unk_224) {
    case 4: {
        u16 buf[1];
        func_020947c0(buf, o->unk_227);
        u32 k = 0;
        u32 a = *(volatile u16 *)buf;
        u32 b = *(volatile u16 *)buf;
        s32 m;
        if (b >= 0x1374 && a <= 0x1374) {
            k = 1;
        }
        if (k) {
            m = 0;
        } else if (a >= 0x1375 && a <= 0x1375) {
            m = 1;
        } else {
            func_ov003_02223134(o);
            return FALSE;
        }
        if (data_021f4770 == 0) {
            s32 cur = o->unk_13c;
            u8 *tbl = data_ov003_022348c4[m * 2];
            if (cur > tbl[data_020ca316[o->unk_7e * 6]] - 1) {
                func_ov003_02223134(o);
                return FALSE;
            }
        }
        o->unk_224 = 5;
        o->unk_225 = 10;
        o->unk_13c = 0;
        func_0205f92c(e, 6);
        o->unk_23e = func_ov003_022202ec(0, 2) != 0;
        o->unk_23f = func_ov003_022202ec(data_ov003_022349d6[o->unk_1ff * 0x14], data_ov003_022349d7[o->unk_1ff * 0x14]);
        V3 *ps = &e->unk_08;
        V3 *pd = &o->unk_230;
        pd->x = e->unk_08.x;
        pd->y = ps->y;
        pd->z = ps->z;
        if (o->unk_23e != 0) {
            o->unk_138 = o->unk_138 - 0x4000;
        } else {
            o->unk_138 = o->unk_138 + 0x4000;
        }
        r = TRUE;
        break;
    }
    case 3:
        func_ov003_02223134(o);
        break;
    case 6:
        break;
    default:
        if (func_ov003_02222d48(o) == 0) {
            func_ov003_02223134(o);
        }
        break;
    }
    return r;
}

void func_ov003_022236dc(Obj *o) {
    if (o->unk_23c == 1) {
        switch (o->unk_224) {
        case 3:
        case 4:
        case 5:
            func_ov003_02223134(o);
            break;
        case 6:
            break;
        default:
            if (func_ov003_02222d48(o) == 0) {
                func_ov003_02223134(o);
            }
            break;
        }
    }
}

BOOL func_ov003_02223730(Obj *o) {
    func_ov003_022201ac(o, 0x1c);
    s32 c = o->unk_13c;
    s32 v = (c + 10) * 25;
    if (v >= 0x180) {
        v = 0x180;
    }
    if (o->unk_7f != 0) {
        if (c >= 0x14) {
            func_ov003_022201ac(o, 3);
        } else if (c >= 0xf) {
            func_ov003_022201ac(o, 0x10);
        } else {
            func_ov003_022201ac(o, 0x20);
        }
    }
    func_ov003_02224828(&o->unk_120, v, o->unk_138);
    V3 t;
    t.x = o->unk_120.x;
    t.y = o->unk_120.y;
    t.z = o->unk_120.z;
    t.y = data_020c7c1c;
    func_020902d4(o->unk_204, &t, 0, 0);
    return TRUE;
}

BOOL func_ov003_022237dc(Obj *o) {
    Ent *e = o->unk_22c;
    if (e == NULL) {
        return FALSE;
    }
    s32 step;
    s32 ang;
    if (o->unk_1ff >= 3) {
        step = 0x1000;
    } else {
        step = 0x1249;
    }
    if (o->unk_23e != 0) {
        if (func_020565e8(o->unk_1e0, 4)) {
            o->unk_1e8 = 0x3000;
        }
        o->unk_138 = o->unk_138 + step;
        ang = (s16)(o->unk_138 - 0x4000);
    } else {
        if (func_020565e8(o->unk_1e0, 0xb)) {
            o->unk_1e8 = 0xa000;
        }
        o->unk_138 = o->unk_138 - step;
        ang = (s16)(o->unk_138 + 0x4000);
    }
    s32 d = func_ov003_022202cc(3, 10);
    s32 s = data_ov003_02257a80 + d;
    data_ov003_02257a80 = s;
    if (s < -12) {
        data_ov003_02257a80 = -12;
    } else if (s > 0x14) {
        data_ov003_02257a80 = 0x14;
    }
    s32 d2 = func_ov003_022202cc(0, 0xf);
    s32 sum = data_ov003_02257a80 + d2 + *(u16 *)&data_ov003_022349de[o->unk_1ff * 0x14];
    s32 sc = func_02133150(sum << 12, 100);
    V3 v;
    V3 *ps = &e->unk_08;
    v.x = e->unk_08.x;
    v.y = ps->y;
    v.z = ps->z;
    o->unk_120.x = v.x;
    o->unk_120.z = v.z;
    func_ov003_02224828(&o->unk_120, sc, ang);
    void *m = func_020947f0(4);
    if (m != NULL) {
        s32 a2 = func_02002bdc(m, &v);
        func_ov003_02224828(&o->unk_120, 0xa00, a2);
    }
    return TRUE;
}

BOOL func_ov003_02223134(Obj *self) {
    BOOL r = FALSE;
    if (self == NULL) {
        return r;
    }
    void *p = func_020947f0(4);
    if (p == NULL) {
        return r;
    }
    if (func_ov003_02220b00(self, p)) {
        r = TRUE;
    }
    return r;
}
}
