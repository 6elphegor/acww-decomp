#include "types.h"

struct Unk_ov003_0220d6f4_V3 {
    s32 x, y, z;
    Unk_ov003_0220d6f4_V3() {}
};

struct Unk_ov003_0220d6f4_Blk {
    s32 v[12];
};

struct Unk_ov003_0220d6f4_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

struct Unk_ov003_0220d6f4_Rec {
    s16 unk_00;
    u8 unk_02;
    u8 unk_03;
    u8 unk_04;
    u8 unk_05;
};

struct Unk_ov003_0220d6f4_Net {
    u32 pad_00;
    s32 unk_04;
    s32 unk_08;
};

struct Unk_ov003_0220d6f4_Sec {
    virtual void vfunc_00();
};

struct Unk_ov003_0220d6f4_P0 {
    virtual void vfunc_00();
    u8 pad_04[0x8e - 4];
    s16 unk_8e;
    u8 pad_90[0x98 - 0x90];
    s32 unk_98;
    u8 pad_9c[0xec - 0x9c];
};

struct Unk_ov003_0220d6f4_Obj : Unk_ov003_0220d6f4_P0, Unk_ov003_0220d6f4_Sec {
    u8 pad_f0[0x10a - 0xf0];
    u8 unk_10a;
    u8 pad_10b[0x128 - 0x10b];
    Unk_ov003_0220d6f4_Net *unk_128;
    u8 pad_12c[0x2cc - 0x12c];
    u8 unk_2cc[4];
    Unk_ov003_0220d6f4_Bits unk_2d0;
    Unk_ov003_0220d6f4_Bits unk_2d4;
    u8 pad_2d8[0x59c - 0x2d8];
    u8 unk_59c[0x28];
    u8 unk_5c4[0x64];
    u8 pad_628[0x694 - 0x628];
    Unk_ov003_0220d6f4_Blk unk_694;
    u8 pad_6c4[0x700 - 0x6c4];
    s32 unk_700;
    u8 pad_704[0x7d0 - 0x704];
    Unk_ov003_0220d6f4_Rec unk_7d0;
    u8 pad_7d6[0x7ec - 0x7d6];
    s32 unk_7ec;
    u8 pad_7f0[0x7f8 - 0x7f0];
    s32 unk_7f8;
    u32 unk_7fc;
    u8 pad_800[0x80c - 0x800];
    s32 unk_80c;
    u8 pad_810[0x818 - 0x810];
    s32 unk_818;
    u16 unk_81c;
    u16 unk_81e;
    u8 pad_820[0x8c0 - 0x820];
    s32 unk_8c0;
    s32 unk_8c4;
    s32 unk_8c8;
    u8 pad_8cc[0x8ec - 0x8cc];
    u8 unk_8ec;
};

struct Unk_ov003_0220d6f4_Act {
    u8 pad_00[0x7e];
    s8 unk_7e;
};

class Unk_ov003_0220d6f4_Msg {
public:
    Unk_ov003_0220d6f4_Msg();
    ~Unk_ov003_0220d6f4_Msg();
    void func_0200e2c0(s32 a, s32 b, s16 c);
    u8 pad_00[0xc];
    u8 unk_0c[0x10];
};

typedef Unk_ov003_0220d6f4_Obj Obj;
typedef Unk_ov003_0220d6f4_V3 V3;
typedef Unk_ov003_0220d6f4_Blk Blk;
typedef Unk_ov003_0220d6f4_Msg Msg;
typedef Unk_ov003_0220d6f4_Act Act;
typedef Unk_ov003_0220d6f4_Sec Sec;
typedef Unk_ov003_0220d6f4_Rec Rec;

extern "C" {
extern void *data_020cbb18;
extern u8 data_ov003_02230b18[];
extern u8 data_ov003_02230ac0[];
extern u8 data_ov003_02230aec[];

void func_0200f4c0(Obj *o, s32 a);
Act *func_0205fbb8(void *p);
void func_ov003_02223450(V3 *v, s32 a);
void func_ov003_02212034(Blk *b, V3 *v);
void func_0203ee38(V3 *a, V3 *b);
void func_ov003_02223400(Act *a, V3 *b, V3 *c);
s32 func_020565e8(void *p, u32 a);
void func_0203a598();
s32 func_0203d820();
void func_0203e488(Obj *o, Sec *s);
void func_0200ec30(Obj *o, u32 a);
void func_020a710c(Sec *s, void *d);
void func_0203c2d0(u16 *p);
void func_02034d70(u32 a);
void func_02034dd0(u32 a, u32 b, u32 c);
void func_02034e10(u32 a, u32 b, u32 c, u32 d);
s32 func_0203c338();
s32 func_02098ffc();
s32 func_020429d0(u32 a, u32 *b);
void func_0203e47c(Obj *o, Sec *s);
void func_0200ec1c(Obj *o, u32 a);
void func_0203d7f8();
s32 func_ov003_0220d5cc(Obj *o, u32 a, s32 b, s32 c);
void func_0203a844();
s32 func_02042bbc(u32 a, u32 b);
void func_0205fb08(void *p);
s32 func_02007c08(Obj *o, s32 a);
void func_ov003_02205e58(Obj *o, void *d, u32 a, u32 b, s32 c);
void func_02008e50(Obj *o, u32 a, u32 b, u32 c, u32 d, s32 e);
s32 func_020729bc(void *g, u32 a);
void func_02078840(void *p);
void func_0208a578();
void func_0208c114();
void func_02010358(Obj *o, s32 a, u32 b, u32 c);
void func_0205e1a0(void *p, u32 a, u32 b, u32 c);
s32 func_0200e248(Obj *o, Msg *m);
void func_02010914(Obj *o);
s32 func_0200ef08(Obj *o);
void func_0201071c(Obj *o);
s32 func_02056654(void *p);
s32 func_0205fb34(void *p);
void func_0200ecdc(Obj *o, u32 a);
void func_020109c4(Obj *o);
s32 func_02010d5c(s32 a, s32 b, s32 c);
void func_02010a34(Obj *o, s32 *a);
void func_0200ce98(Obj *o, s32 a, s32 b, s32 c);
void func_020085f0(Obj *o, s32 a, s32 b);
void func_ov003_0220e030(u8 *p, u32 v);

void func_ov003_0220dc00(u8 *p, u8 *out);
void func_ov003_0220dc08(u8 *p, u32 v);
s32 func_ov003_0220dc0c(Obj *o, u32 a, s32 b, s16 c);
void func_ov003_0220dc80(Obj *o);
s32 func_ov003_0220dd28(Obj *o, s32 a, s16 b);
void func_ov003_0220ddb4(Obj *o);
s32 func_ov003_0220de60(Obj *o, s32 a, s16 b);
void func_ov003_0220deb8(Obj *o);
void func_ov003_0220dfe0(u8 *p, u8 *out);
void func_ov003_0220dfe8(u8 *p, u32 v);
void func_ov003_0220dfec(u8 *p, u32 v);
s32 func_ov003_0220dff0(Obj *o, u32 a, s32 b, s16 c);

void func_ov003_0220d6f4(Obj *o);
void func_ov003_0220db30(Obj *o, s16 a);
void func_ov003_0220db5c(Obj *o, u8 *p);
void func_ov003_0220dc48(Obj *o);
s32 func_ov003_0220dcb8(Obj *o, s16 a);
void func_ov003_0220dcc4(Obj *o);
void func_ov003_0220dd60(Obj *o);
s32 func_ov003_0220de20(Obj *o, s16 a);
void func_ov003_0220de2c(Obj *o);
void func_ov003_0220de98(Obj *o);
void func_ov003_0220df10(Obj *o, s16 a);
void func_ov003_0220df3c(Obj *o, u8 *p);
}

static inline BOOL Rng(volatile u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    u32 a = *p;
    u32 b = *p;
    if (a >= lo && b <= hi) r = TRUE;
    return r;
}

extern "C" void func_ov003_0220d6f4(Obj *o) {
    Rec *r6;
    u8 *r5;
    Act *a;
    struct {
        u16 pad0;
        u16 t;
        u32 pad1;
    } tmp;
    u32 buf[2];
    Blk b;
    V3 v48;
    V3 v54;
    V3 v60;
    V3 v6c;
    V3 v78;
    func_0200f4c0(o, 0x400);
    r6 = &o->unk_7d0;
    a = func_0205fbb8(o->unk_5c4);
    if (a) {
        b = o->unk_694;
        func_ov003_02223450(&v54, a->unk_7e);
        v48.x = 0x4cd;
        v48.y = 0;
        v48.z = 0;
        u32 m = o->unk_2d4.mid;
        if (r6->unk_04 != 0) {
            v48.x = 0x800;
            v48.y = 0x19a;
            v48.z = -0x19a;
        } else if ((s32)m >= 0x10) {
            s32 q = (m - 15) * 0x19a / (s32)(o->unk_2d0.mid - 0x10);
            v48.x = v48.x + q * 2;
            v48.y = v48.y + q;
            v48.z = v48.z - q;
        }
        func_ov003_02212034(&b, &v48);
        v60.x = b.v[9];
        v60.y = b.v[10];
        v60.z = b.v[11];
        func_0203ee38(&v60, &v60);
        v6c.x = v60.x;
        v6c.y = v60.y;
        v6c.z = v60.z;
        v78.x = v54.x;
        v78.y = v54.y;
        v78.z = v54.z;
        func_ov003_02223400(a, &v6c, &v78);
    }
    r5 = &r6->unk_02;
    if (o->unk_700 == 0x59) {
        if (func_020565e8(o->unk_2cc, 3)) func_0203a598();
    }
    if (o->unk_2d4.mid < 0x11 && *r5 < 5 && r6->unk_04 == 0) return;
    switch (*r5) {
    case 0:
        if (func_0203d820()) {
            *r5 = 1;
            func_0203e488(o, o);
            func_0200ec30(o, 0x11);
            Sec &s = *o;
            func_020a710c(&s, data_ov003_02230b18);
            u32 v = r6->unk_03;
            o->unk_10a = v;
            tmp.t = v + 0x12e8;
            func_0203c2d0(&tmp.t);
            o->unk_81c = o->unk_81e = tmp.t;
            o->unk_128->unk_08 = 1;
            func_02034d70(0x12);
            func_02034dd0(0xc, 0, 4);
            func_02034e10(0xd, 0x39, 0x7f, 1);
        }
    case 1:
        if (o->unk_128 == 0) return;
        if (o->unk_128->unk_04 == 0) return;
        if (func_0203c338() && r6->unk_05 == 0) {
            *r5 = 5;
            o->unk_818 = 0xe;
        } else {
            *r5 = 2;
            o->unk_818 = 8;
        }
        return;
    case 2: {
        s32 c = func_02098ffc();
        if (c == -1) {
            buf[0] = 0;
            buf[1] = 0;
            if (func_020429d0(0x10, buf)) {
                *r5 = 3;
                BOOL in = FALSE;
                u32 h = o->unk_81c;
                if (h >= 0x1320 && h <= 0x1322) in = TRUE;
                if (in) {
                    o->unk_818 = 4;
                } else {
                    o->unk_818 = 0;
                }
            } else {
                *r5 = 4;
                o->unk_818 = 1;
            }
        } else {
            if (o->unk_128 == 0) return;
            if (o->unk_128->unk_04 != 0) return;
            func_0203e47c(o, o);
            func_0200ec1c(o, 0x11);
            func_0203d7f8();
            func_ov003_0220d5cc(o, 0, 6, -1);
            func_0203a844();
        }
        return;
    }
    case 3:
        if (o->unk_818 >= 0xf) {
            BOOL in = FALSE;
            u32 h = o->unk_81c;
            if (h >= 0x1320 && h <= 0x1322) in = TRUE;
            if (in) {
                *r5 = 6;
                if (o->unk_80c != -1) return;
                o->unk_80c = func_02042bbc(o->unk_7fc, o->unk_81c);
                if (o->unk_80c == -1) return;
                *r5 = 4;
            } else {
                *r5 = 4;
            }
        } else {
            if (o->unk_128 == 0) return;
            if (o->unk_128->unk_04 != 0) return;
            func_0203e47c(o, o);
            func_0200ec1c(o, 0x11);
            func_ov003_0220d5cc(o, 1, 6, -1);
            func_0203a844();
        }
        return;
    case 4:
        if (o->unk_128 == 0) return;
        if (o->unk_128->unk_04 != 0) return;
        func_0205fb08(o->unk_5c4);
        func_0203e47c(o, o);
        func_0200ec1c(o, 0x11);
        func_0203d7f8();
        o->unk_7f8 = func_02007c08(o, o->unk_7ec);
        func_ov003_02205e58(o, data_ov003_02230ac0, 0, 6, -1);
        func_0203a844();
        return;
    case 5:
        if (o->unk_128 == 0) return;
        if (o->unk_128->unk_04 != 0) return;
        func_0203e47c(o, o);
        func_0200ec1c(o, 0x11);
        func_0203d7f8();
        func_02008e50(o, 1, r6->unk_03, 0, 6, -1);
        return;
    case 6:
        if (o->unk_80c != -1) return;
        o->unk_80c = func_02042bbc(o->unk_7fc, o->unk_81c);
        if (o->unk_80c == -1) return;
        *r5 = 4;
        return;
    }
}

extern "C" void func_ov003_0220db30(Obj *o, s16 a) {
    u8 t;
    func_ov003_0220dc00(&o->unk_8ec, &t);
    func_ov003_0220dc0c(o, t, 6, a);
}

extern "C" void func_ov003_0220db5c(Obj *o, u8 *p) {
    u32 b = p[0xc];
    Rec *r = &o->unk_7d0;
    r->unk_04 = b;
    r->unk_00 = 0x39;
    r->unk_05 = func_0203c338();
    if (b == 0) {
        if (func_020729bc(data_020cbb18, o->unk_7fc)) {
            Act *a = func_0205fbb8(o->unk_5c4);
            s8 v = a->unk_7e;
            r->unk_03 = v;
            if (v < 0x38) {
                func_02078840((u8 *)o + 0x5c);
                func_0208a578();
                func_0208c114();
            }
        }
        r->unk_02 = 0;
        func_02010358(o, 0x59, 3, 0);
        func_0205e1a0(o->unk_59c, 0x1c, 3, 1);
    } else {
        r->unk_02 = 2;
        r->unk_00 = 0x3a;
        o->unk_818 = 8;
    }
    func_ov003_0220dc08(&o->unk_8ec, b);
}

extern "C" void func_ov003_0220dc00(u8 *p, u8 *out) {
    *out = *p;
}

extern "C" void func_ov003_0220dc08(u8 *p, u32 v) {
    *p = v;
}

extern "C" s32 func_ov003_0220dc0c(Obj *o, u32 a, s32 b, s16 c) {
    Msg m;
    m.func_0200e2c0(0x54, b, c);
    m.unk_0c[0] = a;
    s32 r = func_0200e248(o, &m);
    return r;
}

extern "C" void func_ov003_0220dc48(Obj *o) {
    func_02010914(o);
    func_0200ef08(o);
    func_0201071c(o);
    if (func_020729bc(data_020cbb18, o->unk_7fc)) func_ov003_0220dc80(o);
}

extern "C" void func_ov003_0220dc80(Obj *o) {
    if (func_02056654(o->unk_2cc)) {
        if (func_0205fb34(o->unk_5c4)) func_ov003_0220dc0c(o, 0, 6, -1);
    }
}

extern "C" s32 func_ov003_0220dcb8(Obj *o, s16 a) {
    return func_ov003_0220dd28(o, 6, a);
}

extern "C" void func_ov003_0220dcc4(Obj *o) {
    func_02010358(o, 0x58, 3, 0);
    func_0205e1a0(o->unk_59c, 0x1b, 3, 1);
    func_0200ecdc(o, 0x84c);
    func_0200ecdc(o, 0x84e);
    s32 *p = (s32 *)(o->unk_5c4 + 8);
    o->unk_8c0 = p[0];
    o->unk_8c4 = p[1];
    o->unk_8c8 = p[2];
}

extern "C" s32 func_ov003_0220dd28(Obj *o, s32 a, s16 b) {
    Msg m;
    m.func_0200e2c0(0x53, a, b);
    s32 r = func_0200e248(o, &m);
    return r;
}

extern "C" void func_ov003_0220dd60(Obj *o) {
    s32 t;
    func_02010914(o);
    if (func_0200ef08(o)) func_020109c4(o);
    func_0201071c(o);
    s32 v = o->unk_98;
    if (v < 0) v = -v;
    t = func_02010d5c(v, 0, 0xc5) * -1;
    func_02010a34(o, &t);
    func_ov003_0220ddb4(o);
}

extern "C" void func_ov003_0220ddb4(Obj *o) {
    if (func_02056654(o->unk_2cc)) {
        if (func_020729bc(data_020cbb18, o->unk_7fc)) func_0203a844();
        o->unk_7f8 = func_02007c08(o, o->unk_7ec);
        func_0200ce98(o, 3, 1, -1);
        func_0205e1a0(o->unk_59c, 0x13, 3, 0);
    }
}

extern "C" s32 func_ov003_0220de20(Obj *o, s16 a) {
    return func_ov003_0220de60(o, 6, a);
}

extern "C" void func_ov003_0220de2c(Obj *o) {
    func_02010a34(o, (s32 *)data_ov003_02230aec);
    func_02010358(o, 0x57, 3, 0);
    func_0205e1a0(o->unk_59c, 0x1a, 3, 0);
}

extern "C" s32 func_ov003_0220de60(Obj *o, s32 a, s16 b) {
    Msg m;
    m.func_0200e2c0(0x52, a, b);
    s32 r = func_0200e248(o, &m);
    return r;
}

extern "C" void func_ov003_0220de98(Obj *o) {
    func_02010914(o);
    func_0200ef08(o);
    func_0201071c(o);
    func_ov003_0220deb8(o);
}

extern "C" void func_ov003_0220deb8(Obj *o) {
    if (func_02056654(o->unk_2cc)) {
        o->unk_7f8 = func_02007c08(o, o->unk_7ec);
        if (*(u8 *)&o->unk_7d0) {
            func_020085f0(o, 5, -1);
        } else {
            func_0200ce98(o, 3, 1, -1);
        }
    }
}

extern "C" void func_ov003_0220df10(Obj *o, s16 a) {
    u8 t;
    func_ov003_0220dfe0(&o->unk_8ec, &t);
    func_ov003_0220dff0(o, t, 6, a);
}

extern "C" void func_ov003_0220df3c(Obj *o, u8 *p) {
    u32 b = p[0xc];
    func_ov003_0220dfec((u8 *)&o->unk_7d0, b);
    func_ov003_0220dfe8(&o->unk_8ec, b);
    func_02010358(o, 0x56, 3, 0);
    func_0205e1a0(o->unk_59c, 0x19, 3, 0);
    func_0200ecdc(o, 0x84c);
    func_0200ecdc(o, 0x84e);
    s32 *q = (s32 *)(o->unk_5c4 + 8);
    o->unk_8c0 = q[0];
    o->unk_8c4 = q[1];
    o->unk_8c8 = q[2];
    if (func_020729bc(data_020cbb18, o->unk_7fc)) func_0203a844();
}

extern "C" void func_ov003_0220dfe0(u8 *p, u8 *out) {
    *out = *p;
}

extern "C" void func_ov003_0220dfe8(u8 *p, u32 v) {
    *p = v;
}

extern "C" void func_ov003_0220dfec(u8 *p, u32 v) {
    *p = v;
}

extern "C" s32 func_ov003_0220dff0(Obj *o, u32 a, s32 b, s16 c) {
    Msg m;
    m.func_0200e2c0(0x51, b, c);
    func_ov003_0220e030(m.unk_0c, a);
    s32 r = func_0200e248(o, &m);
    return r;
}
