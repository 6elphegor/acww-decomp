#include "types.h"

struct Unk_ov004_022245ac_V3 {
    s32 x, y, z;
};

class Unk_ov004_022245ac_Msg {
public:
    Unk_ov004_022245ac_Msg();
    ~Unk_ov004_022245ac_Msg();
    void func_0200e2c0(u32 a, u32 b, u32 c);
    u8 pad_00[0xc];
    u8 unk_0c;
    u8 pad_0d[0x1c - 0xd];
};

struct Unk_ov004_022245ac_Rec {
    Unk_ov004_022245ac_V3 pos;
    u8 flag;
};

struct Unk_ov004_022245ac_Obj {
    u8 pad_00[0x5c];
    Unk_ov004_022245ac_V3 unk_5c;
    u8 pad_68[0x8e - 0x68];
    s16 unk_8e;
    u8 pad_90[0x700 - 0x90];
    s32 unk_700;
    u8 pad_704[0x7d0 - 0x704];
    u8 unk_7d0;
    u8 pad_7d1[0x7ec - 0x7d1];
    s32 unk_7ec;
    u8 pad_7f0[0x7f8 - 0x7f0];
    s32 unk_7f8;
    u32 unk_7fc;
    u8 pad_800[4];
    s32 unk_804;
    u8 pad_808[0x8e6 - 0x808];
    u8 unk_8e6;
    u8 pad_8e7[0xc80 - 0x8e7];
    u16 unk_c80;
};

struct Unk_ov004_02224d10 {
    u32 unk_00;
    u32 unk_04;
    u32 unk_08[13];
    u32 unk_3c[13];
    u32 unk_70[13];
};

typedef Unk_ov004_022245ac_Obj Obj;
typedef Unk_ov004_022245ac_V3 V3;
typedef Unk_ov004_022245ac_Msg Msg;
typedef Unk_ov004_022245ac_Rec Rec;
typedef Unk_ov004_02224d10 Res;

extern "C" {
extern void *data_020cbb18;
extern void *data_021c620c;
extern void *data_021f482c;
extern char data_ov004_0224d550[];
extern char data_ov004_0224d554[];
extern char data_ov004_0224d564[];
extern char data_ov004_0224d574[];
extern char data_ov004_0224d584[];

Obj *func_02095774(u32 idx);
s32 func_02095180(s32 a, s32 b);
s32 func_0200e248(Obj *o, Msg *m);
s32 func_020729bc(void *g, u32 a);
s32 func_0200ef08(Obj *o);
s32 func_02010914(Obj *o);
void func_0201065c(Obj *o);
BOOL func_020b52d0(void);
s32 func_0200d640(Obj *o);
s32 func_0200d5e0(Obj *o);
s32 func_0200e1dc(Obj *o);
s32 func_02063c54(s16 a);
s32 func_02010cf8(Obj *o);
void func_0200ecdc(Obj *o, u32 a);
void func_020103b4(Obj *o, s32 a, u32 b, u32 c);
void func_02010358(Obj *o, s32 a, u32 b, u32 c);
s32 func_0203d76c(void);
s32 func_02007c08(Obj *o, s32 a);
s32 func_0200ebe8(Obj *o);
s32 func_0200ec44(Obj *o, u32 a);
void func_0200ec1c(Obj *o, u32 a);
void func_0200ec30(Obj *o, u32 a);
void func_02010cb0(u16 *p, Obj *o);
void func_02010af0(u16 *p, Obj *o);
s32 func_02010c9c(Obj *o);
s32 func_02010c88(Obj *o);
s32 func_0200fab8(Obj *o, u16 *v, s32 a, s32 b, u32 c);
void func_0200fd90(Obj *o, u16 *v);
s32 func_02003e60(s32 a, s32 b, s32 c, s32 d);
s32 func_02003e70(s32 a, s32 b, s32 c, s32 d);
s32 func_02003e50(s32 a);
s32 func_02003e80(s32 a, V3 *v);
s32 func_02003ecc(s32 a);
void func_020f43fc(void *p);
void func_020f440c(void *p);
s32 func_020641ec(u32 id, void *g, s32 a, u32 b);
void *func_0210629c(s32 a);
void func_02055724(void *p, u32 a);
u32 func_0205588c(void *p, void *g);
void func_020e8558(s32 a);
void func_020e85fc(void *g, u32 p);
s32 func_020639e8(char *buf, char *fmt, ...);
s32 func_02101340(void *buf, char *name, u32 data);
void *func_021012bc(char *name);
void func_02101310(void *buf);
void *func_021062dc(void *p);
void *func_021065dc(void *p);
u32 func_021065f8(void *p, u32 a);
void *func_02106618(void *p);
u32 func_02106634(void *p, u32 a);
void *func_02106654(void *p);
u32 func_02106670(void *p, u32 a);

s32 func_ov004_02224070(Obj *o, u32 a, u32 b, u32 c);
s32 func_ov004_02234ed8(void *p, s32 a);
s32 func_ov004_02234e80(void *p, s32 a);
s32 func_ov004_0221f6dc(Obj *o, u32 a, u32 b);
s32 func_ov004_022236b8(Obj *o, u32 a, u32 b);
s32 func_ov004_022217c4(Obj *o, u32 a, u32 b, u32 c);
s32 func_ov004_0221f7c4(Obj *o, u32 a, u32 b);
s32 func_ov004_0221f96c(Obj *o, u32 a, u32 b);
s32 func_ov004_0221fcec(Obj *o, u32 a, u32 b, u32 c, s32 e);
s32 func_ov004_022209ac(Obj *o, s32 a, s32 b);
s32 func_ov004_02220ac8(Obj *o, u32 a, u32 b, u32 c, u32 d, u32 e, u32 f, s32 g);
s32 func_ov004_0221f204(Obj *o, V3 *v, u32 a, u32 b);
s32 func_ov004_0222085c(Obj *o, s32 a, s32 b);
s32 func_ov004_02220c88(Obj *o, u32 a, s32 b, s32 c);
s32 func_ov004_02220ff0(Obj *o, u8 b, u32 x, u32 y, s16 c, s32 d, s32 e);
s32 func_ov004_02221218(Obj *o, s32 a, s32 b);
s32 func_ov004_022214dc(Obj *o, s32 a, s32 b);
s32 func_ov004_022215a8(Obj *o, u32 a, u32 b);
s32 func_ov004_0222213c(Obj *o, u32 a, u32 b, s16 c, u32 d, s32 e, s32 f);
s32 func_ov004_0222439c(Obj *o, u32 a, u32 b, u32 c, s32 d);
s32 func_ov004_02223bdc(Obj *o, u32 a, u32 b, s32 c, u32 d, s32 e, s32 f);

void func_ov004_0222459c(Rec *r, V3 *v, u32 f);
s32 func_ov004_022245ac(Obj *o, u32 a, u32 b, u32 c);
void func_ov004_022245ec(u8 *p, u32 v);
void func_ov004_022245f0(Obj *o);
s32 func_ov004_02224628(Obj *o);
void func_ov004_022246bc(Obj *o, s32 a);
void func_ov004_02224708(Obj *o, s32 a);
void func_ov004_02224734(Obj *o, u8 *p, s32 c);
void func_ov004_022247b4(u8 *p, u32 v);
s32 func_ov004_022247b8(Obj *o, u32 a, u32 b, u32 c);
void func_ov004_022247f8(u8 *p, u32 v);
s32 func_ov004_02224c3c(V3 *out, u32 idx, s32 st);
}

extern "C" void func_ov004_0222459c(Rec *r, V3 *v, u32 f) {
    r->pos.x = v->x;
    r->pos.y = v->y;
    r->pos.z = v->z;
    r->flag = f;
}

extern "C" s32 func_ov004_022245ac(Obj *o, u32 a, u32 b, u32 c) {
    Msg m;
    m.func_0200e2c0(9, b, c);
    func_ov004_022245ec(&m.unk_0c, a);
    s32 r = func_0200e248(o, &m);
    return r;
}

extern "C" void func_ov004_022245ec(u8 *p, u32 v) {
    *p = v;
}

extern "C" void func_ov004_022245f0(Obj *o) {
    func_0200ef08(o);
    func_02010914(o);
    func_0201065c(o);
    if (func_020729bc(data_020cbb18, o->unk_7fc)) {
        func_ov004_02224628(o);
    }
}

extern "C" s32 func_ov004_02224628(Obj *o) {
    s32 r;
    if (!func_020b52d0()) {
        if (func_0200d640(o) > 0) {
            s32 t = func_0200d5e0(o);
            u8 *p = &o->unk_8e6;
            u32 n = t + 1;
            if (*p != n) {
                *p = n;
                switch (t) {
                case 0:
                    r = func_ov004_02234ed8(&o->unk_5c, o->unk_8e);
                    break;
                case 1:
                    r = func_ov004_02234e80(&o->unk_5c, o->unk_8e);
                    break;
                }
                if (r == 1) {
                    func_ov004_02224070(o, t == 0 ? 1 : 0, 6, -1);
                } else if (r == 2) {
                    func_ov004_022245ac(o, t == 0 ? 1 : 0, 6, -1);
                }
            }
        }
    }
}

extern "C" void func_ov004_022246bc(Obj *o, s32 a) {
    if (func_020b52d0() && a == 10 && o->unk_7d0 == 0) {
        if (func_02010cf8(o)) {
            func_0200ecdc(o, 0x4cd);
        } else {
            func_0200ecdc(o, 0x4cc);
        }
    }
}

extern "C" void func_ov004_02224708(Obj *o, s32 a) {
    if (o->unk_7ec == 8) {
        o->unk_c80 = a;
    } else {
        func_ov004_022247b8(o, 0, 6, a);
    }
}

extern "C" void func_ov004_02224734(Obj *o, u8 *p, s32 c) {
    u8 *q = p + 0xc;
    u8 *rec = &o->unk_7d0;
    if (o->unk_700 != 0x11) {
        if (c == 0xf || c == 0xd || !func_020729bc(data_020cbb18, o->unk_7fc)) {
            func_020103b4(o, 0x11, 0, 0);
        } else {
            func_020103b4(o, 0x11, 3, 0);
        }
    }
    func_ov004_022247b4(rec, *q);
    if (*rec == 0 && func_020729bc(data_020cbb18, o->unk_7fc)) {
        func_0203d76c();
    }
}

extern "C" void func_ov004_022247b4(u8 *p, u32 v) {
    *p = v;
}

extern "C" s32 func_ov004_022247b8(Obj *o, u32 a, u32 b, u32 c) {
    Msg m;
    m.func_0200e2c0(8, b, c);
    func_ov004_022247f8(&m.unk_0c, a);
    s32 r = func_0200e248(o, &m);
    return r;
}

extern "C" void func_ov004_022247f8(u8 *p, u32 v) {
    *p = v;
}

extern "C" BOOL func_ov004_022247fc(void) {
    Obj *o = func_02095774(4);
    if (o) {
        func_02010358(o, 0x98, 0, 0);
        return TRUE;
    }
    return FALSE;
}

extern "C" s32 func_ov004_02224820(void) {
    Obj *o = func_02095774(4);
    if (o) {
        return func_ov004_0221f6dc(o, 6, -1);
    }
    return 0;
}

extern "C" s32 func_ov004_02224844(void) {
    Obj *o = func_02095774(4);
    if (o) {
        o->unk_7f8 = func_02007c08(o, o->unk_7ec);
        return func_ov004_022236b8(o, 5, -1);
    }
    return 0;
}

extern "C" s32 func_ov004_0222487c(void) {
    Obj *o = func_02095774(4);
    if (o) {
        return func_ov004_022217c4(o, 10, 6, -1);
    }
    return 0;
}

extern "C" s32 func_ov004_022248a0(void) {
    Obj *o = func_02095774(4);
    if (o) {
        return func_ov004_0221f7c4(o, 6, -1);
    }
    return 0;
}

extern "C" s32 func_ov004_022248c4(void) {
    Obj *o = func_02095774(4);
    if (o) {
        return func_ov004_0221f96c(o, 6, -1);
    }
    return 0;
}

extern "C" s32 func_ov004_022248e8(u8 *a, u8 *b) {
    Obj *o = func_02095774(4);
    if (o) {
        return func_ov004_0221fcec(o, *a, *b, 6, -1);
    }
    return 0;
}

extern "C" s32 func_ov004_02224918(void) {
    Obj *o = func_02095774(4);
    if (o) {
        return func_ov004_022209ac(o, 6, -1);
    }
    return 0;
}

extern "C" s32 func_ov004_0222493c(u32 a, u32 *b, u8 *c, u32 *d, u32 e) {
    Obj *o = func_02095774(4);
    if (o) {
        return func_ov004_02220ac8(o, a, *b, *c, *d, e, 6, -1);
    }
    return 0;
}

extern "C" s32 func_ov004_0222497c(void) {
    Obj *o = func_02095774(4);
    if (o) {
        if (o->unk_804 == 4) {
            V3 v;
            V3 *pv = &o->unk_5c;
            v.x = o->unk_5c.x;
            v.y = pv->y;
            v.z = pv->z;
            v.z += 0x6000;
            return func_ov004_0221f204(o, &v, 6, -1);
        }
        return func_ov004_0222085c(o, 6, -1);
    }
    return 0;
}

extern "C" s32 func_ov004_022249d4(u32 *p) {
    Obj *o = func_02095774(4);
    if (o) {
        return func_ov004_02220c88(o, *p, 6, -1);
    }
    return 0;
}

extern "C" s32 func_ov004_022249f8(u32 *a, u32 *b, u32 *c, s16 *d) {
    Obj *o = func_02095774(4);
    if (o) {
        return func_ov004_02220ff0(o, *a, *b, *c, *d, 6, -1);
    }
    return 0;
}

extern "C" s32 func_ov004_02224a38(s32 t) {
    Obj *o = func_02095774(4);
    if (o) {
        switch (t) {
        case 0:
            func_ov004_02221218(o, 6, -1);
            break;
        case 1:
            func_ov004_022214dc(o, 6, -1);
            break;
        case 2:
            func_ov004_022215a8(o, 6, -1);
            break;
        }
    }
    return 0;
}

enum Unk_ov004_02224a80_Limit { Unk_ov004_02224a80_LIMIT_6 = 6 };

extern "C" s32 func_ov004_02224a80(u32 *a, u32 *b, s16 *c, u8 *d) {
    Obj *o = func_02095774(4);
    if (o) {
        Unk_ov004_02224a80_Limit k = Unk_ov004_02224a80_LIMIT_6;
        if (k <= func_0200e1dc(o)) {
            return 0;
        }
        return func_ov004_0222213c(o, *a, *b, *c + 0x8000, *d, k, -1);
    }
    return 0;
}

extern "C" s32 func_ov004_02224ad8(u32 a, u32 b) {
    Obj *o = func_02095774(4);
    if (o) {
        if (func_ov004_0222439c(o, a, b, 6, -1)) {
            func_0200ebe8(o);
            return 1;
        }
    }
    return 0;
}

extern "C" s32 func_ov004_02224b14(u32 *a, u32 *b, s16 *c, s32 d) {
    Obj *o = func_02095774(4);
    if (o) {
        Unk_ov004_02224a80_Limit k = Unk_ov004_02224a80_LIMIT_6;
        if (k <= func_0200e1dc(o)) {
            return 0;
        }
        u32 f = func_02063c54(*c - d) == 1 ? 1 : 0;
        return func_ov004_02223bdc(o, *a, *b, *c, f, k, -1);
    }
    return 0;
}

extern "C" s32 func_ov004_02224b78(u32 a) {
    Obj *o = func_02095774(4);
    if (o) {
        u16 v[2];
        u16 t[2];
        if (a) {
            if (func_0200ec44(o, 0xc)) {
                func_02010cb0(&t[0], o);
                v[0] = t[0];
                func_02010af0(&t[1], o);
                v[1] = t[1];
                func_0200ec1c(o, 0xc);
            } else {
                return 1;
            }
        } else {
            if (!func_0200ec44(o, 0xc)) {
                v[1] = 0xfff1;
                v[0] = 0xfff1;
                func_0200ec30(o, 0xc);
            } else {
                return 1;
            }
        }
        s32 r4 = func_02010c9c(o);
        s32 r3 = func_02010c88(o);
        if (func_0200fab8(o, v, r4, r3, 1)) {
            func_0200fd90(o, &v[1]);
        }
        return 1;
    }
    return 0;
}

extern "C" s32 func_ov004_02224c24(V3 *out, u32 idx) {
    return func_ov004_02224c3c(out, idx, 8);
}

extern "C" s32 func_ov004_02224c30(V3 *out, u32 idx) {
    return func_ov004_02224c3c(out, idx, 0x28);
}

extern "C" s32 func_ov004_02224c3c(V3 *out, u32 idx, s32 st) {
    Obj *o = func_02095774(idx);
    if (o && o->unk_7ec == st) {
        V3 *pv = &o->unk_5c;
        out->x = o->unk_5c.x;
        out->y = pv->y;
        out->z = pv->z;
        return 1;
    }
    return 0;
}

extern "C" s32 func_ov004_02224c78(void) {
    return func_02095180(2, 4);
}

extern "C" s32 func_ov004_02224c84(void) {
    return func_02095180(15, 4);
}

extern "C" s32 func_ov004_02224c90(s32 a, s32 b) {
    return func_02003e60(a, b, 0x7f, 0);
}

extern "C" s32 func_ov004_02224ca4(s32 a, s32 b) {
    return func_02003e70(a, b, 0x7f, 0);
}

extern "C" s32 func_ov004_02224cb8(s32 a) {
    return func_02003e50(a);
}

extern "C" s32 func_ov004_02224cc0(s32 a, V3 *p) {
    V3 v;
    v.x = p->x;
    v.y = p->y;
    v.z = p->z;
    return func_02003e80(a, &v);
}

extern "C" s32 func_ov004_02224cdc(s32 a) {
    return func_02003ecc(a);
}

extern "C" Res *func_ov004_02224ce4(Res *p) {
    func_020f43fc(p);
    return p;
}

extern "C" Res *func_ov004_02224cf4(Res *p) {
    func_020f440c(p);
    return p;
}

extern "C" u32 func_ov004_02224d04(Res *p) {
    return p->unk_00;
}

extern "C" void func_ov004_02224d08(Res *p) {
    p->unk_00 = 0;
}

extern "C" s32 func_ov004_02224d10(Res *self, u32 id) {
    s32 r4 = func_020641ec(id, data_021f482c, -4, 0);
    if (r4) {
        void *r6 = func_0210629c(r4);
        func_02055724(r6, 0);
        self->unk_00 = func_0205588c(r6, data_021c620c);
        func_020e8558(r4);
        return 1;
    }
    return 0;
}

extern "C" void func_ov004_02224d5c(void) {
}

extern "C" void func_ov004_02224d60(Res *p) {
    p->unk_00 = 0;
}

extern "C" u32 func_ov004_02224d68(Res *p) {
    return p->unk_04;
}

extern "C" u32 func_ov004_02224d6c(Res *p, u32 i) {
    if (i < 13) {
        return p->unk_70[i];
    }
    return 0;
}

extern "C" u32 func_ov004_02224d7c(Res *p, u32 i) {
    if (i < 13) {
        return p->unk_3c[i];
    }
    return 0;
}

extern "C" u32 func_ov004_02224d8c(Res *p, u32 i) {
    if (i < 13) {
        return p->unk_08[i];
    }
    return 0;
}

extern "C" void func_ov004_02224d9c(Res *p) {
    if (p->unk_00) {
        func_020e85fc(data_021c620c, p->unk_00);
        p->unk_00 = 0;
    }
}

extern "C" s32 func_ov004_02224dbc(Res *self, u32 id) {
    if (self->unk_00 == 0) {
        char buf[0x24];
        u8 res[0x68];
        self->unk_00 = func_020641ec(id, data_021c620c, 4, 0);
        if (self->unk_00) {
            if (func_02101340(res, data_ov004_0224d550, self->unk_00)) {
                u32 i, z;
                void *h = func_021012bc(data_ov004_0224d554);
                if (h) {
                    u8 *r = (u8 *)func_021062dc(h);
                    self->unk_04 = (u32)(r + *(u32 *)(r + *(u16 *)(r + 0xe) + 0xc));
                }
                for (i = 0, z = i; i < 13;) {
                    func_020639e8(buf, data_ov004_0224d564, i);
                    { void *h = func_021012bc(buf); if (h) {
                        self->unk_08[i] = func_021065f8(func_021065dc(h), z);
                    } }
                    if (self->unk_08[i] == 0) {
                        break;
                    }
                    i++;
                }
                for (i = 0, z = i; i < 13;) {
                    func_020639e8(buf, data_ov004_0224d574, i);
                    { void *h = func_021012bc(buf); if (h) {
                        self->unk_3c[i] = func_02106634(func_02106618(h), z);
                    } }
                    if (self->unk_3c[i] == 0) {
                        break;
                    }
                    i++;
                }
                for (i = 0, z = i; i < 13;) {
                    func_020639e8(buf, data_ov004_0224d584, i);
                    { void *h = func_021012bc(buf); if (h) {
                        self->unk_70[i] = func_02106670(func_02106654(h), z);
                    } }
                    if (self->unk_70[i] == 0) {
                        break;
                    }
                    i++;
                }
                func_02101310(res);
                return 1;
            }
        }
    }
    return 0;
}
