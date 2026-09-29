#include "types.h"

struct Unk_ov004_02223314_V3 {
    s32 x, y, z;
};

struct Unk_ov004_02223314_Rec {
    s32 unk_00;
    s32 unk_04;
    s16 unk_08;
    u8 unk_0a;
    u8 unk_0b;
};

struct Unk_ov004_02223314_Rec2 {
    s32 unk_00;
    u8 unk_04;
    u8 unk_05;
};

struct Unk_ov004_02223314_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

struct Unk_ov004_02223314_Pl {
    u8 a;
    u8 b;
    u8 pad_02[2];
    s32 c;
    s16 d;
    u8 e;
    u8 f;
};

class Unk_ov004_02223314_Msg {
public:
    Unk_ov004_02223314_Msg();
    ~Unk_ov004_02223314_Msg();
    void func_0200e2c0(u32 a, u32 b, s32 c);
    u8 pad_00[0xc];
    Unk_ov004_02223314_Pl unk_0c;
    u8 pad_18[4];
};

struct Unk_ov004_02223314_Obj {
    u8 pad_00[0x5c];
    Unk_ov004_02223314_V3 unk_5c;
    u8 pad_68[0x8e - 0x68];
    s16 unk_8e;
    u8 pad_90[0x2cc - 0x90];
    u32 unk_2cc;
    u8 pad_2d0[0x2d4 - 0x2d0];
    Unk_ov004_02223314_Bits unk_2d4;
    u8 pad_2d8[0x700 - 0x2d8];
    s32 unk_700;
    u8 pad_704[0x7d0 - 0x704];
    Unk_ov004_02223314_Rec unk_7d0;
    u8 pad_7dc[0x7ec - 0x7dc];
    s32 unk_7ec;
    u8 pad_7f0[0x7f8 - 0x7f0];
    s32 unk_7f8;
    u32 unk_7fc;
    u8 pad_800[0x814 - 0x800];
    s32 unk_814;
    u8 pad_818[0x81c - 0x818];
    u16 unk_81c;
    u16 unk_81e;
    u32 unk_820;
    s32 unk_824;
    u8 pad_828[0x82c - 0x828];
    s32 unk_82c;
    s32 unk_830;
    s32 unk_834;
    u8 pad_838[0x8ec - 0x838];
    u8 unk_8ec[8];
    u8 pad_8f4[0xc80 - 0x8f4];
    u16 unk_c80;
};

typedef Unk_ov004_02223314_Obj Obj;
typedef Unk_ov004_02223314_V3 V3;
typedef Unk_ov004_02223314_Rec Rec;
typedef Unk_ov004_02223314_Rec2 Rec2;
typedef Unk_ov004_02223314_Msg Msg;
typedef Unk_ov004_02223314_Pl Pl;

extern "C" {
extern u8 data_020e416c;
extern void *data_020cbb18;
extern void *data_021c47c4;
extern V3 data_ov004_0224013c;
extern u8 data_ov004_02240148[];

s32 func_0200ec44(Obj *o, s32 a);
void func_0200ec30(Obj *o, s32 a);
void func_0200ec1c(Obj *o, s32 a);
void func_0200f004(Obj *o, s32 a);
s32 func_0200e248(Obj *o, Msg *m);
s32 func_02010914(Obj *o);
void func_0201071c(Obj *o);
void func_0200ef08(Obj *o);
void func_0200ecdc(Obj *o, u32 a);
s32 func_020565e8(void *p, s32 n);
s32 func_02056654(void *p);
s32 func_020729bc(void *g, u32 a);
s32 func_02007c08(Obj *o, s32 a);
void func_0200ce98(Obj *o, s32 a, s32 b, s32 c);
void func_02010358(Obj *o, s32 a, s32 b, s32 c);
void func_020103b4(Obj *o, s32 a, u32 b, u32 c);
void func_02010a58(Obj *o, s16 *a);
void func_02010e68(void *p, s32 a, u32 b, u32 c, u32 d);
s32 func_0200f3ec(V3 *out, Obj *o, void *pos, void *ang, u32 arg);
void func_0200f478(Obj *o, s32 a);
void func_0200f528(Obj *o, s32 a, s32 b);
void func_0200f594(Obj *o, s32 a, s32 b, s32 c);
s32 func_0203a278(V3 *v);
s32 func_02063c18(s16 a);
s32 func_02051494(void);
void func_0205149c(V3 *v);
void func_02076a2c(void *a, s32 *b, s32 *c);
void func_02076a6c(void *a, s32 b, s32 c);
s32 func_020769ac(void *a);
void func_020769c4(void *a, s32 b);
s32 func_0204ed8c(void *p, u32 a, s32 b);
u16 *func_0204eba0(void *g, void *p, s32 a);
s32 func_02098ffc(void);
s32 func_020b52f8(void);
u32 func_020b0f54(void);
s32 func_0204b2d4(void *p);
s32 func_0204b25c(void *p);
void func_02045570(void *p, s32 a);

s32 func_ov004_022344a4(void);
s32 func_ov004_02234f6c(void *p);
void func_ov004_022344e8(s32 a, void *b, void *c);
void func_ov004_022330cc(V3 *v);
s32 func_ov004_022247b8(Obj *o, u32 a, s32 b, s32 c);
void func_ov004_02223c38(void *out, s32 x, s32 z, s32 h, u32 e, u32 f);

void func_ov004_02223314(Obj *o);
void func_ov004_022233bc(Obj *o);
void func_ov004_02223454(void);
void func_ov004_02223458(Obj *o, Msg *m);
s32 func_ov004_022235ec(Obj *o, s32 *p, s32 c, u32 b, s16 d);
void func_ov004_0222363c(void *out, s32 *in, s32 c);
void func_ov004_02223648(Obj *o);
void func_ov004_02223664(Obj *o);
void func_ov004_02223688(void);
void func_ov004_0222368c(Obj *o);
s32 func_ov004_022236b8(Obj *o, s32 a, s32 b);
void func_ov004_022236f0(Obj *o);
void func_ov004_02223710(Obj *o);
void func_ov004_02223740(Obj *o);
void func_ov004_02223794(Obj *o);
void func_ov004_022237fc(Obj *o);
void func_ov004_0222381c(Obj *o, u32 a);
void func_ov004_0222386c(Obj *o, Msg *m);
void func_ov004_022238f8(u8 *src, u8 *out, s32 *x, s32 *z);
void func_ov004_02223910(u8 *dst, u32 k, s32 a, s32 b);
void func_ov004_02223920(Rec *r, s32 a, s32 b, s32 c, u8 d);
s32 func_ov004_02223934(Obj *o, u8 b, s32 x, s32 z, u8 e, s32 f, s32 g);
void func_ov004_02223984(void *out, u8 b, s32 x, s32 z, u8 e);
void func_ov004_02223998(Obj *o);
void func_ov004_022239b8(Obj *o);
void func_ov004_02223a54(Obj *o);
void func_ov004_02223a70(Obj *o);
void func_ov004_02223a80(Obj *o, u32 a);
void func_ov004_02223ac4(Obj *o, Msg *m);
void func_ov004_02223b7c(u8 *src, s32 *x, s32 *z, s16 *h, u8 *b);
void func_ov004_02223ba0(u8 *dst, s32 x, s32 z, s32 h, u8 b);
void func_ov004_02223bc4(Rec *r, s32 a, s32 b, s16 c, u8 d, u8 e);
s32 func_ov004_02223bdc(Obj *o, s32 x, s32 z, s32 h, u8 a, s32 b, s32 c);
}

static inline BOOL Unk_ov004_02223314_IsOne(u8 v) {
    return v == 1 ? TRUE : FALSE;
}

extern "C" void func_ov004_02223314(Obj *o) {
    s32 *p;
    s32 r;
    if (func_0200ec44(o, 0xd) == 0) {
        p = (s32 *)((u8 *)o + 0x7d0);
        if (*p < 0) return;
        if (func_ov004_022344a4() == 0) return;
        func_0200ec30(o, 0xd);
        *p = -1;
    }
    if (o->unk_700 != 0x19) {
        o->unk_82c = 0;
        o->unk_830 = 0;
        o->unk_834 = 0;
        return;
    }
    if (o->unk_2d4.mid < 8) return;
    r = 0x1000 - (s32)((o->unk_2d4.mid - 8) << 12) / 7;
    if (r < 0) {
        r = 0;
        func_0200ec1c(o, 0xd);
    }
    o->unk_82c = r;
    o->unk_830 = r;
    o->unk_834 = r;
    func_0200f004(o, r);
}

extern "C" void func_ov004_022233bc(Obj *o) {
    Rec2 *r = (Rec2 *)&o->unk_7d0;
    if (r->unk_05 >= 6) {
        func_02010914(o);
        return;
    }
    if (r->unk_04 == 2) {
        if (func_020565e8(&o->unk_2cc, 7)) {
            o->unk_7f8 = func_02007c08(o, o->unk_7ec);
            func_0200ce98(o, 3, 1, -1);
            return;
        }
    } else if (r->unk_04 == 0) {
        if (o->unk_2d4.mid < 7) {
            if (o->unk_814 == 2) {
                r->unk_04 = 2;
            } else if (o->unk_814 == 1) {
                r->unk_04 = 1;
                func_0200ec30(o, 0xd);
            }
        }
    }
    func_02010914(o);
}

extern "C" void func_ov004_02223454(void) {
}

extern "C" void func_ov004_02223458(Obj *o, Msg *m) {
    Pl *pl = &m->unk_0c;
    s32 b = pl->c;
    Rec2 *r = (Rec2 *)&o->unk_7d0;
    u8 a;
    u32 c;
    u16 *p;
    r->unk_04 = 0;
    r->unk_05 = 0;
    r->unk_00 = b;
    a = pl->a;
    c = pl->b;
    func_0204ed8c(&o->unk_820, a, c);
    o->unk_824 = func_ov004_02234f6c(&o->unk_820);
    o->unk_82c = 0x1000;
    o->unk_830 = 0x1000;
    o->unk_834 = 0x1000;
    if (b < 0) {
        p = func_0204eba0(data_021c47c4, &o->unk_820, 1);
        if (p == 0) {
            o->unk_7f8 = func_02007c08(o, o->unk_7ec);
            func_0200ce98(o, 3, 1, -1);
            return;
        }
        o->unk_81e = *p;
        o->unk_81c = o->unk_81e;
    }
    if (func_02098ffc() == -1 && func_020b52f8()) {
        BOOL ok;
        if (func_0204b2d4(&o->unk_81c)) {
            u16 t = 0xfff1;
            s32 x = func_0204b25c(&o->unk_81c);
            if (x == func_0204b25c(&t)) {
                ok = TRUE;
            } else {
                ok = FALSE;
            }
        } else {
            if (o->unk_81c == 0xfff1) {
                ok = TRUE;
            } else {
                ok = FALSE;
            }
        }
        if (!ok) {
            func_020103b4(o, 0, 3, 0);
            r->unk_05 = 6;
            o->unk_81e = 0xfff1;
            o->unk_81c = o->unk_81e;
            return;
        }
    }
    if (func_020b0f54() <= 1) {
        if (b < 0) {
            struct {
                s32 a;
                s32 c;
            } v;
            func_0200ec30(o, 0xd);
            v.a = a;
            v.c = c;
            func_02045570(&v, 1);
        } else {
            func_ov004_022344e8(b, &o->unk_81c, &o->unk_81e);
        }
        func_02010358(o, 0x19, 3, 0);
        func_0200ecdc(o, 0x52);
    } else {
        r->unk_05 = 10;
        func_020103b4(o, 0, 3, 0);
    }
}

extern "C" s32 func_ov004_022235ec(Obj *o, s32 *p, s32 c, u32 b, s16 d) {
    Msg m;
    struct {
        s32 x;
        s32 z;
    } v;
    m.func_0200e2c0(0x1c, b, d);
    v.x = p[0];
    v.z = p[1];
    func_ov004_0222363c(&m.unk_0c, &v.x, c);
    s32 r = func_0200e248(o, &m);
    return r;
}

extern "C" void func_ov004_0222363c(void *out, s32 *in, s32 c) {
    ((u8 *)out)[0] = in[0];
    ((u8 *)out)[1] = in[1];
    *(s32 *)((u8 *)out + 4) = c;
}

extern "C" void func_ov004_02223648(Obj *o) {
    func_02010914(o);
    func_ov004_02223664(o);
    func_0201071c(o);
}

extern "C" void func_ov004_02223664(Obj *o) {
    func_0200f478(o, 0x400);
    func_0200f528(o, data_ov004_0224013c.x, data_ov004_0224013c.z);
}

extern "C" void func_ov004_02223688(void) {
}

extern "C" void func_ov004_0222368c(Obj *o) {
    V3 v;
    func_020103b4(o, 0x9b, 3, 0);
    v.x = data_ov004_0224013c.x;
    v.y = data_ov004_0224013c.y;
    v.z = data_ov004_0224013c.z;
    func_0203a278(&v);
}

extern "C" s32 func_ov004_022236b8(Obj *o, s32 a, s32 b) {
    Msg m;
    m.func_0200e2c0(0x12, a, b);
    s32 r = func_0200e248(o, &m);
    return r;
}

extern "C" void func_ov004_022236f0(Obj *o) {
    func_ov004_02223794(o);
    func_ov004_02223740(o);
    func_0201071c(o);
    func_ov004_02223710(o);
}

extern "C" void func_ov004_02223710(Obj *o) {
    if (func_02056654(&o->unk_2cc)) {
        func_ov004_022247b8(o, o->unk_7d0.unk_0a, 6, -1);
    }
}

extern "C" void func_ov004_02223740(Obj *o) {
    V3 v;
    func_02010914(o);
    if (func_020565e8(&o->unk_2cc, 0xd)) {
        if (Unk_ov004_02223314_IsOne(data_020e416c)) {
            Rec *r = &o->unk_7d0;
            s32 z = r->unk_04;
            s32 y = o->unk_5c.y;
            s32 x = r->unk_00;
            v.x = x;
            v.y = y;
            v.z = z;
            func_ov004_022330cc(&v);
        }
    }
}

extern "C" void func_ov004_02223794(Obj *o) {
    Rec *r = &o->unk_7d0;
    u8 *p;
    s32 v;
    if (func_020729bc(data_020cbb18, o->unk_7fc)) {
        p = (u8 *)o;
        p += 0x5c;
        if ((r->unk_08 & 0x4000) != 0) {
            v = r->unk_00;
        } else {
            p += 8;
            v = r->unk_04;
        }
        func_02010e68(p, v, 0x399, 0x1ec, 0x31);
    } else {
        func_0200ef08(o);
    }
}

extern "C" void func_ov004_022237fc(Obj *o) {
    Rec *r = &o->unk_7d0;
    V3 *p = &o->unk_5c;
    p->x = r->unk_00;
    p->z = r->unk_04;
    func_02010a58(o, &r->unk_08);
}

extern "C" void func_ov004_0222381c(Obj *o, u32 a) {
    if (o->unk_7ec == 0xf) {
        o->unk_c80 = a;
    } else {
        u8 b;
        s32 x, z;
        func_ov004_022238f8(o->unk_8ec, &b, &x, &z);
        func_ov004_02223934(o, b, x, z, 0, 6, a);
    }
}

extern "C" void func_ov004_0222386c(Obj *o, Msg *m) {
    Pl *pl = &m->unk_0c;
    u8 k = pl->a;
    Rec *r;
    s32 t, h, x, z;
    func_02010358(o, k == 0 ? 8 : 7, 3, 0);
    func_0200ecdc(o, 0x4c5);
    r = &o->unk_7d0;
    t = func_02063c18(o->unk_8e);
    t = (t << 30) >> 16;
    x = pl->c;
    z = *(s32 *)((u8 *)pl + 8);
    if (k == 0) {
        h = (s16)(t + 0x4000);
    } else {
        h = (s16)(t - 0x4000);
    }
    func_ov004_02223920(r, x, z, h, ((u8 *)pl)[0xc]);
    func_ov004_02223910(o->unk_8ec, k, x, z);
}

extern "C" void func_ov004_022238f8(u8 *src, u8 *out, s32 *x, s32 *z) {
    *out = src[0];
    func_02076a2c(src + 1, x, z);
}

extern "C" void func_ov004_02223910(u8 *dst, u32 k, s32 a, s32 b) {
    dst[0] = k;
    func_02076a6c(dst + 1, a, b);
}

extern "C" void func_ov004_02223920(Rec *r, s32 a, s32 b, s32 c, u8 d) {
    r->unk_00 = a;
    r->unk_04 = b;
    r->unk_08 = c;
    r->unk_0a = d;
}

extern "C" s32 func_ov004_02223934(Obj *o, u8 b, s32 x, s32 z, u8 e, s32 f, s32 g) {
    Msg m;
    m.func_0200e2c0(0xf, f, *(s16 *)&g);
    func_ov004_02223984(&m.unk_0c, b, x, z, e);
    s32 r = func_0200e248(o, &m);
    return r;
}

extern "C" void func_ov004_02223984(void *out, u8 b, s32 x, s32 z, u8 e) {
    u8 *p = (u8 *)out;
    p[0] = b;
    *(s32 *)(p + 4) = x;
    *(s32 *)(p + 8) = z;
    p[0xc] = e;
}

extern "C" void func_ov004_02223998(Obj *o) {
    func_ov004_02223a54(o);
    func_02010914(o);
    func_0201071c(o);
    func_ov004_022239b8(o);
}

extern "C" void func_ov004_022239b8(Obj *o) {
    Rec *r = &o->unk_7d0;
    if (func_020729bc(data_020cbb18, o->unk_7fc) == 0) {
        o->unk_7f8 = func_02007c08(o, o->unk_7ec);
    } else {
        switch (func_02051494()) {
        case 0:
            break;
        case 2:
            o->unk_7f8 = func_02007c08(o, o->unk_7ec);
            func_0200ce98(o, 3, 1, -1);
            break;
        case 1:
        default:
            if (r->unk_08 == o->unk_8e) {
                func_ov004_02223934(o, r->unk_0a, r->unk_00, r->unk_04, r->unk_0b, 6, -1);
            }
            break;
        }
    }
}

extern "C" void func_ov004_02223a54(Obj *o) {
    func_0200f594(o, o->unk_5c.x, o->unk_5c.z, o->unk_7d0.unk_08);
}

extern "C" void func_ov004_02223a70(Obj *o) {
    func_02010a58(o, &o->unk_7d0.unk_08);
}

extern "C" void func_ov004_02223a80(Obj *o, u32 a) {
    struct L {
        u8 b;
        s16 h;
    } l;
    s32 x, z;
    L *q = &l;
    func_ov004_02223b7c(o->unk_8ec, &x, &z, &l.h, &l.b);
    func_ov004_02223bdc(o, x, z, q->h, q->b, 6, a);
}

extern "C" void func_ov004_02223ac4(Obj *o, Msg *m) {
    Pl *pl = &m->unk_0c;
    V3 v;
    s16 h;
    V3 tmp;
    void *g;
    u8 r6;
    Rec *r7;
    s32 c = pl->c;
    v.x = *(s32 *)pl;
    v.y = 0;
    v.z = c;
    h = pl->d;
    r6 = pl->e;
    r7 = &o->unk_7d0;
    g = data_020cbb18;
    if (func_020729bc(g, o->unk_7fc)) {
        func_0200f3ec(&tmp, o, &v, &h, (u32)data_ov004_02240148);
        v.x = tmp.x;
        v.y = tmp.y;
        v.z = tmp.z;
    }
    func_ov004_02223bc4(r7, v.x, v.z, h, r6, pl->f);
    func_ov004_02223ba0(o->unk_8ec, v.x, v.z, h, r6);
    if (func_020729bc(g, o->unk_7fc)) {
        func_0205149c(&v);
    }
    func_020103b4(o, 0x1a, 3, 0);
}

extern "C" void func_ov004_02223b7c(u8 *src, s32 *x, s32 *z, s16 *h, u8 *b) {
    func_02076a2c(src, x, z);
    *h = func_020769ac(src + 5);
    *b = src[7];
}

extern "C" void func_ov004_02223ba0(u8 *dst, s32 x, s32 z, s32 h, u8 b) {
    func_02076a6c(dst, x, z);
    func_020769c4(dst + 5, h);
    dst[7] = b;
}

extern "C" void func_ov004_02223bc4(Rec *r, s32 a, s32 b, s16 c, u8 d, u8 e) {
    r->unk_00 = a;
    r->unk_04 = b;
    r->unk_08 = c;
    r->unk_0a = d;
    r->unk_0b = e;
}

extern "C" s32 func_ov004_02223bdc(Obj *o, s32 x, s32 z, s32 h, u8 a, s32 b, s32 c) {
    Msg m;
    m.func_0200e2c0(0xe, b, *(s16 *)&c);
    func_ov004_02223c38(&m.unk_0c, x, z, h, a, b == 6 ? 1 : 0);
    s32 r = func_0200e248(o, &m);
    return r;
}
