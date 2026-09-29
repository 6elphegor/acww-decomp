#include "types.h"

class Unk_0201dc44;

struct Unk_0201dc44_Ret {
    void *a;
    u8 b;
};

typedef void (Unk_0201dc44::*Unk_0201dc44_State)(Unk_0201dc44_Ret *out);

struct Unk_0201dc44_Snd {
    u32 a;
    u8 b;
};

struct Unk_0201dc44_Vec {
    s32 x, y, z;
};

struct Unk_0201dca0_Vec {
    s32 x, y, z;
};

struct Unk_0201dc44_Ctx {
    u8 pad_00[0x5c];
    Unk_0201dc44_Vec unk_5c;
    u8 pad_68[0x564 - 0x68];
    u8 unk_564[4];
    u8 pad_568[0x82c - 0x568];
    void *unk_82c;
};

struct Unk_0201dc44_Id {
    u16 unk_00;
    u8 unk_02[8];
    u8 unk_0a;
    u8 unk_0b;
};

struct Unk_0201dc44_Time {
    u8 unk_00;
    u8 unk_01;
    u8 unk_02;
    u8 unk_03;
    u8 unk_04;
    u8 unk_05;
    u8 unk_06;
    u8 unk_07;
};

struct Unk_0201dc44_Lim {
    u8 unk_00;
    u8 unk_01;
    u8 unk_02;
    u8 unk_03;
};

struct Unk_0201e110_Buf {
    u8 pad[0x20];
    u8 unk_20;
    u8 unk_21;
};

extern u16 data_020c6cc8;
extern Unk_0201dc44_State data_020d7aa8;
extern Unk_0201dc44_State data_020d7de0;
extern Unk_0201dc44_State data_020d7ae8;
extern Unk_0201dc44_State data_020d7df0;
extern Unk_0201dc44_State data_020d7e98;
extern Unk_0201dc44_Snd data_020c78e8;
extern Unk_0201dc44_Snd data_020c7710;
extern Unk_0201dc44_Snd data_020c7930;
extern u8 data_021bed18[];
extern u8 data_021bec88[];
extern u8 data_021be968[];
extern u8 data_021bec70[];
extern u8 data_021becb8[];
extern u8 data_021becd0[];
extern u8 data_021bece8[];
extern u8 data_021bed00[];
extern u8 data_021be730[];
extern u8 data_021beca0[];
extern u8 data_021be668[];
extern u8 data_020c74fc[];
extern u8 data_020c7500[];
extern u8 data_021ed24c[];
extern u8 data_021d7350[];

extern "C" {
s32 func_020197a8(void *p);
s32 func_02019790(void *p);
void func_02019614(void *p, s32 a, u32 b);
void func_020196b4(void *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h, s32 i, s32 j);
s32 func_02014f38(Unk_0201dc44 *p, u32 x);
s32 func_0202d33c(Unk_0201dc44 *p, Unk_0201dc44_State s);
s32 func_0202d1c0(Unk_0201dc44 *p, Unk_0201dc44_State s);
void *func_020805c4(void *p);
void *func_02003098(void *p);
void func_0202d184(Unk_0201dc44 *p, void *a, u8 *b, s32 c, void *d, u32 e, s32 f, s32 g, u32 h);
s32 func_0202d048(Unk_0201dc44 *p, void *a, void *b, void *c, s32 d);
s32 func_0202d1d4(Unk_0201dc44 *p, void *s);
s32 func_0202d20c(Unk_0201dc44 *p);
s32 func_020209cc(Unk_0201dc44 *p);
s32 func_020219cc(Unk_0201dc44 *p);
s32 func_020218c4(Unk_0201dc44 *p);
s32 func_02021ce4(Unk_0201dc44 *p);
void func_0201fc48(Unk_0201dc44 *p);
void func_02029d84(Unk_0201dc44 *p);
void func_0202b520(Unk_0201dc44 *p);
void func_02067a84(u32 a, u8 *b, void *c);
void func_020679c0(u32 a, s32 b);
void func_0209d498(void *p);
s32 func_02063b8c(s32 a);
void func_0201c91c(Unk_0201dc44 *p, void *buf, s32 idx, void *d, void *e);
void func_0201c870(Unk_0201dc44 *p, void *buf);
s32 func_02020320(Unk_0201dc44 *p, Unk_0201dc44_Ret *out);
Unk_0201dc44_Lim *func_020812e0(void *p);
s32 func_02080a74(void *p);
void func_02080a98(void *p);
void func_02015958(Unk_0201dc44 *p, s32 a, s32 b, s32 c, s32 d, s32 e);
Unk_0201dc44_Id *func_02085828(void *p);
Unk_0201dc44_Id *func_0208586c(void *p);
s32 func_020030b4(void *p);
void func_020157b8(Unk_0201dc44 *p, void *q, s32 r);
s32 func_02128930(void *a, void *b, s32 n);
s32 func_0203f42c(s32 a);
s32 func_0209e170(void *a, s32 b);
}

class Unk_0201dc44 {
public:
    void func_0201dc44();
    void func_0201dca0();
    void func_0201dd1c();
    void func_0201dd3c(Unk_0201dc44_Ret *out);
    void func_0201ddd4(Unk_0201dc44_Ret *out);
    void func_0201de08(Unk_0201dc44_Ret *out);
    void func_0201de3c(Unk_0201dc44_Ret *out);
    void func_0201de70();
    void func_0201de78();
    void func_0201de80();
    void func_0201ded4(Unk_0201dc44_Ret *out);
    void func_0201df34(Unk_0201dc44_Ret *out);
    void func_0201df94(Unk_0201dc44_Ret *out);
    void func_0201dff4(Unk_0201dc44_Ret *out);
    void func_0201e08c(Unk_0201dc44_Ret *out);
    void func_0201e110();
    void func_0201e18c();
    void func_0201e194();
    void func_0201e1e8();
    void func_0201e1f0(Unk_0201dc44_Ret *out);
    void func_0201e334();
    void func_0201e33c();
    void func_0201e344();
    void func_0201e398(Unk_0201dc44_Ret *out);
    void func_0201e3f8(Unk_0201dc44_Ret *out);
    void func_0201e4ac(Unk_0201dc44_Ret *out);

    /* 0x00 */ u8 pad_00[0x3c];
    /* 0x3c */ u32 unk_3c;
    /* 0x40 */ u8 pad_40[0xac - 0x40];
    /* 0xac */ Unk_0201dc44_State unk_ac;
    /* 0xb4 */ u8 pad_b4[0xec - 0xb4];
    /* 0xec */ Unk_0201dc44_State unk_ec;
    /* 0xf4 */ Unk_0201dc44_State unk_f4;
    /* 0xfc */ Unk_0201dc44_Ctx *unk_fc;
    /* 0x100 */ u8 unk_100[0x1e];
    /* 0x11e */ u8 unk_11e;
    /* 0x11f */ u8 pad_11f[5];
    /* 0x124 */ u32 unk_124;
    /* 0x128 */ void *unk_128;
};

void Unk_0201dc44::func_0201dc44() {
    if (func_020197a8(unk_fc->unk_564) == 2) {
        if (func_02019790(unk_fc->unk_564)) {
            func_02019614(unk_fc->unk_564, 2, data_020c6cc8);
            unk_ec = data_020d7aa8;
        }
    }
}

void Unk_0201dc44::func_0201dca0() {
    volatile Unk_0201dca0_Vec v;
    Unk_0201dc44_Ctx *volatile *pc = &unk_fc;
    Unk_0201dc44_Vec *pv = &(*pc)->unk_5c;
    s32 x, z;
    v.x = x = pv->x;
    v.y = pv->y;
    v.z = z = pv->z;
    v.x = x + 0x1e00;
    z -= 0x2800;
    v.z = z;
    func_020196b4((*pc)->unk_564, 2, 2, v.x, z, 0, 0, 0, 0, data_020c6cc8, 0);
    unk_ec = data_020d7de0;
}

void Unk_0201dc44::func_0201dd1c() {
    func_02014f38(this, 0);
    func_0202d33c(this, data_020d7ae8);
}

void Unk_0201dc44::func_0201dd3c(Unk_0201dc44_Ret *out) {
    func_0202d184(this, unk_100, &unk_11e, 0x1e, func_02003098(func_020805c4(unk_fc->unk_82c)), data_020c78e8.a, 1, 0, data_020c78e8.b);
    out->a = unk_100;
    out->b = unk_11e;
    func_0202d048(this, &unk_128, &unk_124, unk_fc->unk_82c, 0);
    unk_f4 = data_020d7df0;
}

void Unk_0201dc44::func_0201ddd4(Unk_0201dc44_Ret *out) {
    func_020209cc(this);
    func_020219cc(this);
    out->a = unk_100;
    out->b = unk_11e;
    func_0202d20c(this);
}

void Unk_0201dc44::func_0201de08(Unk_0201dc44_Ret *out) {
    func_020209cc(this);
    func_020218c4(this);
    out->a = unk_100;
    out->b = unk_11e;
    func_0202d20c(this);
}

void Unk_0201dc44::func_0201de3c(Unk_0201dc44_Ret *out) {
    func_020209cc(this);
    func_02021ce4(this);
    out->a = unk_100;
    out->b = unk_11e;
    func_0202d20c(this);
}

void Unk_0201dc44::func_0201de70() { func_0201fc48(this); }
void Unk_0201dc44::func_0201de78() { func_02029d84(this); }

void Unk_0201dc44::func_0201de80() {
    Unk_0201dc44_Ret r;
    u8 b;
    func_0202d1d4(this, data_021bed18);
    if (unk_ac) {
        (this->*unk_ac)(&r);
    }
    b = r.b;
    func_02067a84(unk_3c, &b, r.a);
}

void Unk_0201dc44::func_0201ded4(Unk_0201dc44_Ret *out) {
    func_0202d184(this, unk_100, &unk_11e, 0x1e, func_02003098(func_020805c4(unk_fc->unk_82c)), data_020c7710.a, 1, 0x12, 3);
    out->a = unk_100;
    out->b = unk_11e;
}

void Unk_0201dc44::func_0201df34(Unk_0201dc44_Ret *out) {
    func_0202d184(this, unk_100, &unk_11e, 0x1e, func_02003098(func_020805c4(unk_fc->unk_82c)), data_020c7710.a, 1, 0x10, data_020c7710.b);
    out->a = unk_100;
    out->b = unk_11e;
}

void Unk_0201dc44::func_0201df94(Unk_0201dc44_Ret *out) {
    func_0202d184(this, unk_100, &unk_11e, 0x1e, func_02003098(func_020805c4(unk_fc->unk_82c)), data_020c7710.a, 1, 0xe, data_020c7710.b);
    out->a = unk_100;
    out->b = unk_11e;
}

void Unk_0201dc44::func_0201dff4(Unk_0201dc44_Ret *out) {
    Unk_0201dc44_Time t;
    s32 x;
    *(u32 *)&t = 0;
    *((u32 *)&t + 1) = 0;
    func_0209d498(&t);
    if (t.unk_02 < 0x17 || (t.unk_02 == 0x17 && t.unk_01 < 0x1e)) {
        x = 6;
    } else if (t.unk_01 < 0x37) {
        x = 8;
    } else if (t.unk_01 < 0x3b) {
        x = 10;
    } else {
        x = 12;
    }
    func_0202d184(this, unk_100, &unk_11e, 0x1e, func_02003098(func_020805c4(unk_fc->unk_82c)), data_020c7710.a, 1, x, data_020c7710.b);
    out->a = unk_100;
    out->b = unk_11e;
}

void Unk_0201dc44::func_0201e08c(Unk_0201dc44_Ret *out) {
    Unk_0201dc44_Time t;
    s32 x;
    *(u32 *)&t = 0;
    *((u32 *)&t + 1) = 0;
    func_0209d498(&t);
    if (t.unk_02 < 0xc) {
        x = 0;
    } else if (t.unk_02 < 0x11) {
        x = 2;
    } else {
        x = 4;
    }
    func_0202d184(this, unk_100, &unk_11e, 0x1e, func_02003098(func_020805c4(unk_fc->unk_82c)), data_020c7710.a, 1, x, data_020c7710.b);
    out->a = unk_100;
    out->b = unk_11e;
}

void Unk_0201dc44::func_0201e110() {
    Unk_0201e110_Buf buf;
    u8 *p = data_021be730;
    if ((func_02063b8c(10) & 1) == 0) {
        p = data_021beca0;
    }
    func_0201c91c(this, &buf, 0, data_020c74fc, p);
    func_0201c91c(this, &buf, 1, data_020c7500, data_021be668);
    buf.unk_20 = 2;
    buf.unk_21 = buf.unk_20 - 1;
    func_0201c870(this, &buf);
    func_0202d1c0(this, data_020d7e98);
    func_020679c0(unk_3c, 1);
}

void Unk_0201dc44::func_0201e18c() { func_02029d84(this); }

void Unk_0201dc44::func_0201e194() {
    Unk_0201dc44_Ret r;
    u8 b;
    func_0202d1d4(this, data_021bec88);
    if (unk_ac) {
        (this->*unk_ac)(&r);
    }
    b = r.b;
    func_02067a84(unk_3c, &b, r.a);
}

void Unk_0201dc44::func_0201e1e8() { func_0202b520(this); }

void Unk_0201dc44::func_0201e1f0(Unk_0201dc44_Ret *out) {
    void *o = unk_fc->unk_82c;
    Unk_0201dc44_Time t;
    u32 mn;
    u8 hi, lo;
    *(u32 *)&t = 0;
    *((u32 *)&t + 1) = 0;
    func_0209d498(&t);
    hi = t.unk_03;
    lo = t.unk_02;
    mn = t.unk_01;
    if (hi != 0x1f || lo >= 0x17) {
        if (func_02020320(this, out)) {
            func_0202d048(this, &unk_128, &unk_124, o, 0);
            return;
        }
    }
    if (hi == 0x1f) {
        if (lo < 0x17) {
            func_0202d1d4(this, data_021bec70);
        } else {
            func_0202d1d4(this, data_021becb8);
        }
    } else {
        Unk_0201dc44_Lim *q = func_020812e0(func_02003098(func_020805c4(o)));
        if (lo < q->unk_02 || (lo == q->unk_02 && mn < q->unk_03)) {
            func_0202d1d4(this, data_021becd0);
        } else if (unk_128 == 0 || func_02080a74(unk_128) == 0) {
            func_0202d1d4(this, data_021bece8);
        } else {
            func_0202d1d4(this, data_021bed00);
        }
        func_02015958(this, t.unk_05 + 0x7d0, 0, 4, 0, 0);
    }
    if (unk_ac) {
        (this->*unk_ac)(out);
    }
    func_0202d048(this, &unk_128, &unk_124, o, 0);
    if (unk_128) {
        func_02080a98(unk_128);
    }
}

void Unk_0201dc44::func_0201e334() { func_0201fc48(this); }
void Unk_0201dc44::func_0201e33c() { func_02029d84(this); }

void Unk_0201dc44::func_0201e344() {
    Unk_0201dc44_Ret r;
    u8 b;
    func_0202d1d4(this, data_021be968);
    if (unk_ac) {
        (this->*unk_ac)(&r);
    }
    b = r.b;
    func_02067a84(unk_3c, &b, r.a);
}

void Unk_0201dc44::func_0201e398(Unk_0201dc44_Ret *out) {
    func_0202d184(this, unk_100, &unk_11e, 0x1e, func_02003098(func_020805c4(unk_fc->unk_82c)), data_020c7930.a, 1, 0, data_020c7930.b);
    out->a = unk_100;
    out->b = unk_11e;
}

void Unk_0201dc44::func_0201e3f8(Unk_0201dc44_Ret *out) {
    Unk_0201dc44_Id *p = func_02085828(data_021ed24c);
    Unk_0201dc44_Id *q = (Unk_0201dc44_Id *)func_020805c4(unk_fc->unk_82c);
    s32 x;
    if (p->unk_00 == q->unk_00 && func_02128930(p->unk_02, q->unk_02, 8) == 0 && p->unk_0b == q->unk_0b) {
        x = 0xc;
    } else {
        x = 0xf;
    }
    if (func_020030b4(p)) {
        func_020157b8(this, p, 1);
    }
    func_0202d184(this, unk_100, &unk_11e, 0x1e, func_02003098(func_020805c4(unk_fc->unk_82c)), data_020c7930.a, 1, x, data_020c7930.b);
    out->a = unk_100;
    out->b = unk_11e;
}

void Unk_0201dc44::func_0201e4ac(Unk_0201dc44_Ret *out) {
    void *o = unk_fc->unk_82c;
    Unk_0201dc44_Id *p = func_0208586c(data_021ed24c);
    s32 v = func_0203f42c(0x11);
    s32 a, b;
    if (v < 0) {
        v = 0;
    }
    if (v == 0) {
        a = 2;
        b = 3;
    } else if (v >= 1 && v <= 5) {
        a = 3;
        b = 5;
    } else if (func_0209e170(data_021d7350, 0x11) && func_020030b4(p)) {
        Unk_0201dc44_Id *q = (Unk_0201dc44_Id *)func_020805c4(o);
        if (p->unk_00 == q->unk_00 && func_02128930(p->unk_02, q->unk_02, 8) == 0 && p->unk_0b == q->unk_0b) {
            a = 1;
            b = 0xb;
        } else {
            a = 3;
            b = 8;
        }
        func_020157b8(this, p, 0);
    } else {
        a = 2;
        b = 0x12;
    }
    func_0202d184(this, unk_100, &unk_11e, 0x1e, func_02003098(func_020805c4(unk_fc->unk_82c)), data_020c7930.a, 1, b, (u8)a);
    out->a = unk_100;
    out->b = unk_11e;
}
