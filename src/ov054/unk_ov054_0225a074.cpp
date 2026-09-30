#include "types.h"

struct Unk_ov054_0225b9c4_Out {
    u32 unk_00;
    u8 unk_04;
};

struct Unk_ov054_0225b9c4_Owner {
    u8 pad_00[0xea];
    u16 unk_ea;
    u8 pad_ec[0x804 - 0xec];
    s32 unk_804;
    s32 unk_808;
    u8 pad_80c[4];
    u8 unk_810;
};

extern "C" {
extern u32 data_ov054_0225b96c[][3];
extern u8 data_ov054_0225b340[];
extern u8 data_ov054_0225b3c4[];
extern u8 data_ov054_0225bb08[];
extern u8 data_021e58a8[];
extern u8 data_021d7350[];

void func_02014f74(void *self);
void func_02014ce4(void *self, u16 *p, s32 a, s32 b, s32 c);
void func_02014e60(void *self, u16 *p, s32 a, s32 b, s32 c);
void func_02015958(void *self, s32 a, s32 b, s32 c, s32 d, s32 e);
void func_02015878(void *self, u32 a, u32 b);
void func_02015848(void *self, u32 a, u32 b);

BOOL func_020a0884();
BOOL func_020a08a8();
void func_02067990(void *m);
void func_02067a6c(void *m);
s32 func_02067a84(void *m, void *buf, u32 cb);
void func_020a0948();
BOOL func_ov054_02258e58(void *owner);
BOOL func_ov054_02258e44(void *owner);
BOOL func_ov054_02258e34(void *owner);
BOOL func_0206ed18();
void *func_0209750c();
void *func_0209865c(void *p);
void *func_02099864(void *p);
BOOL func_0202e148(void *p);
s32 func_0206ed38();
u32 func_02099048(s32 a);
void func_02099064(s32 a);
BOOL func_0204b2d4(u16 *p);
s32 func_0204b25c(u16 *p);
BOOL func_02099f98(void *a, void *b);
void *func_0209a108(void *p);
void func_0209abb4(void *p, s32 a);
void *func_02098320(void *p);
s32 func_02097414(void *p);
s32 func_02133150(s32 a, s32 b);
s32 func_02060388(void *p);
void *func_020850e0();
void func_020851a4(void *p, s32 a);
void func_0209e120(void *p, s32 a);
void func_0206e8b8(void *p);
void func_0206e9bc();
s32 func_0206e8e8();
s32 func_02097404(void *p);
void func_020973ec(s32 a);
s32 func_0206e98c();
BOOL func_020968b8(s32 a);
BOOL func_0206e90c();
s32 func_0206e960();
BOOL func_0206e974();
BOOL func_0206e944();
BOOL func_020a032c();
BOOL func_02098044(void *p, s32 a);
BOOL func_020a0318();
BOOL func_020a0304();
void func_0209801c(void *p, s32 a);
BOOL func_0202e18c(void *owner, void *buf, s32 n);
BOOL func_02073a78();
s32 func_0209f1c4();
void _ZdlPv(void *p);
}

// Base of the dialog-state object (ctor func_0202e2bc, D2 func_0202e26c), size 0xac.
class Unk_0202e2bc {
public:
    Unk_0202e2bc();
    virtual ~Unk_0202e2bc();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void vfunc_10();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_1c();
    virtual void vfunc_20();
    virtual void vfunc_24();
    virtual void vfunc_28();
    virtual void vfunc_2c();
    virtual void vfunc_30();
    virtual void vfunc_34();
    virtual void vfunc_38();
    virtual void vfunc_3c();
    virtual void vfunc_40();
    virtual void vfunc_44();
    virtual void vfunc_48();
    virtual void vfunc_4c();
    virtual void vfunc_50();
    virtual void vfunc_54();
    virtual void vfunc_58();
    virtual void vfunc_5c();
    virtual void vfunc_60();
    virtual void vfunc_64();
    virtual void vfunc_68();
    virtual void vfunc_6c();
    virtual void vfunc_70();
    virtual void vfunc_74();
    virtual void vfunc_78(Unk_ov054_0225b9c4_Out *out);
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();
    virtual void vfunc_88();

    u8 pad_04[0x38];
    void *unk_3c;
    u32 pad_40[(0xac - 0x40) / 4];
};

class Unk_ov054_0225b9c4;
typedef void (Unk_ov054_0225b9c4::*Unk_ov054_0225b9c4_Fn)();

struct Unk_ov054_0225b9c4_Ent {
    Unk_ov054_0225b9c4_Fn fn;
    u8 flag;
};

extern "C" Unk_ov054_0225b9c4_Ent data_ov054_0225bb00[];

class Unk_ov054_0225b9c4 : public Unk_0202e2bc {
public:
    Unk_ov054_0225b9c4();
    virtual ~Unk_ov054_0225b9c4();
    virtual void vfunc_78(Unk_ov054_0225b9c4_Out *out);
    virtual void vfunc_80();
    virtual void vfunc_84();

    void func_ov054_0225a074();
    void func_ov054_0225a08c();
    void func_ov054_0225a100();
    void func_ov054_0225a124();
    void func_ov054_0225a240();
    void func_ov054_0225a318();
    void func_ov054_0225a3cc();
    void func_ov054_0225a460();
    void func_ov054_0225a4c4();
    void func_ov054_0225a580();
    void func_ov054_0225a5cc();
    void func_ov054_0225a690(s32 v);
    void func_ov054_0225a720();
    u32 func_ov054_0225a758();
    u8 func_ov054_0225a770();
    u32 func_ov054_0225a78c();
    u32 func_ov054_0225a7a8();
    void func_ov054_0225a928(Unk_ov054_0225b9c4_Owner *o);

    Unk_ov054_0225b9c4_Owner *unk_ac;
    s32 unk_b0;
    s32 unk_b4;
    u8 unk_b8;
    u8 pad_b9[3];
    s32 unk_bc;
    s32 unk_c0;
};

void Unk_ov054_0225b9c4::func_ov054_0225a074() {
    func_02014f74(this);
    func_ov054_0225a690(0);
}

void Unk_ov054_0225b9c4::func_ov054_0225a08c() {
    void *m = unk_3c;
    if (func_020a0884()) {
        u8 buf[1];
        func_02067990(m);
        func_02067a6c(m);
        buf[0] = 2;
        func_02067a84(m, buf, data_ov054_0225b96c[unk_ac->unk_804][0]);
        func_ov054_0225a690(0);
    } else if (func_020a08a8()) {
        func_02067990(m);
        func_02067a6c(m);
        func_ov054_0225a690(0);
    }
}

void Unk_ov054_0225b9c4::func_ov054_0225a100() {
    if (func_ov054_02258e58(unk_ac)) {
        func_020a0948();
        func_ov054_0225a690(9);
    }
}

void Unk_ov054_0225b9c4::func_ov054_0225a124() {
    void *m = unk_3c;
    void *p;
    u32 cb = data_ov054_0225b96c[unk_ac->unk_804][0];
    s32 r4 = 0x51;
    u16 v[3];
    if (func_0206ed18()) {
        p = func_02099864(func_0209865c(func_0209750c()));
        if (func_0202e148(p)) {
            BOOL same;
            s32 r5 = func_0206ed38();
            v[1] = func_02099048(r5);
            if (r5 >= 0) {
                func_02099064(r5);
            }
            if (func_0204b2d4(&v[1])) {
                v[2] = 0xfff1;
                s32 a = func_0204b25c(&v[1]);
                if (a == func_0204b25c(&v[2])) {
                    same = TRUE;
                } else {
                    same = FALSE;
                }
            } else {
                if (v[1] == 0xfff1) {
                    same = TRUE;
                } else {
                    same = FALSE;
                }
            }
            if (!same) {
                func_02014ce4(this, &v[1], 2, 5, 1);
                if (!func_02099f98(p, &unk_ac->unk_ea)) {
                    r4 = 0x57;
                } else {
                    r4 = 0x50;
                }
                func_0209abb4(func_0209a108(p), 1);
            }
        }
    }
    func_ov054_0225a690(0);
    *(u8 *)v = r4;
    func_02067a84(m, v, cb);
}

void Unk_ov054_0225b9c4::func_ov054_0225a240() {
    void *m = unk_3c;
    u32 cb = data_ov054_0225b96c[unk_ac->unk_804][0];
    s32 r4;
    u16 v[3];
    if (func_0206ed18()) {
        s32 r6 = func_02097414(func_02098320(func_0209750c()));
        func_02015958(this, r6, 5, 10, 1, 0);
        func_02015958(this, func_02133150(r6, 200), 6, 10, 1, 0);
        r4 = 0x17;
        if (r6 > unk_bc) {
            v[1] = 0x149b;
            func_02014ce4(this, &v[1], 0, 5, 1);
        } else {
            v[2] = 0x149b;
            func_02014e60(this, &v[2], 0, 5, 1);
        }
        func_ov054_0225a690(10);
    } else {
        r4 = 0x18;
        func_02014f74(this);
        func_ov054_0225a690(0);
    }
    *(u8 *)v = r4;
    func_02067a84(m, v, cb);
}

void Unk_ov054_0225b9c4::func_ov054_0225a318() {
    void *m = unk_3c;
    u32 cb = data_ov054_0225b96c[unk_ac->unk_804][0];
    s32 r5;
    u16 v[2];
    if (func_0206ed18()) {
        r5 = func_02060388(data_021e58a8);
        func_02015958(this, r5, 4, 10, 1, 0);
        if (r5 == 0) {
            r5 = 0x15;
            func_020851a4(func_020850e0(), 0);
            func_0209e120(data_021d7350, 0x10);
        } else {
            r5 = 0x14;
        }
        v[1] = 0x149b;
        func_02014ce4(this, &v[1], 0, 5, 1);
        func_ov054_0225a690(10);
    } else {
        r5 = 0x13;
        func_02014f74(this);
        func_ov054_0225a690(0);
    }
    *(u8 *)v = r5;
    func_02067a84(m, v, cb);
}

struct Unk_ov054_0225a3cc_Data {
    u32 w0;
    u32 w1;
};

struct Unk_ov054_0225a3cc_Msg {
    u8 id;
    u8 pad[3];
    Unk_ov054_0225a3cc_Data d;
};

void Unk_ov054_0225b9c4::func_ov054_0225a3cc() {
    void *m = unk_3c;
    volatile u32 cb = data_ov054_0225b96c[unk_ac->unk_804][0];
    s32 r4;
    Unk_ov054_0225a3cc_Msg l;
    if (func_0206ed18()) {
        r4 = 0xc;
        l.d.w0 = 0;
        l.d.w1 = 0;
        func_0206e8b8(&l.d);
        u8 *q = (u8 *)&l;
        u32 b8 = q[8];
        u32 b7 = q[7];
        func_02015958(this, q[9] + 0x7d0, 1, 4, 0, 0);
        func_02015878(this, b8, 2);
        func_02015848(this, b7, 3);
    } else {
        r4 = 0xe;
        func_0206e9bc();
    }
    func_ov054_0225a690(0);
    l.id = r4;
    func_02067a84(m, &l, cb);
}

void Unk_ov054_0225b9c4::func_ov054_0225a460() {
    void *m = unk_3c;
    u32 cb = data_ov054_0225b96c[unk_ac->unk_804][0];
    u8 buf[1];
    s32 r4;
    if (func_ov054_02258e44(unk_ac)) {
        if (func_0206ed18()) {
            r4 = 0x63;
        } else {
            r4 = 0x64;
        }
    } else {
        if (func_0206ed18()) {
            r4 = 0x5d;
        } else {
            r4 = 0x5e;
        }
    }
    func_ov054_0225a690(0);
    buf[0] = r4;
    func_02067a84(m, buf, cb);
}

void Unk_ov054_0225b9c4::func_ov054_0225a4c4() {
    void *m = unk_3c;
    u32 cb = data_ov054_0225b96c[unk_ac->unk_804][0];
    s32 r4, r6;
    u16 v[3];
    if (func_0206ed18()) {
        r4 = func_0206e8e8();
        func_02015958(this, r4, 7, 10, 1, 0);
        if (r4 >= 0x1388) {
            r6 = 0x1d;
        } else {
            r6 = 0x1e;
        }
        v[1] = 0x149b;
        func_02014ce4(this, &v[1], 0, 5, 1);
        func_ov054_0225a690(10);
        unk_c0 = func_02097404(func_02098320(func_0209750c()));
        func_020973ec(unk_c0 + r4);
    } else {
        r6 = 0x1c;
        func_02014f74(this);
        func_ov054_0225a690(0);
    }
    *(u8 *)v = r6;
    func_02067a84(m, v, cb);
}

void Unk_ov054_0225b9c4::func_ov054_0225a580() {
    void *m = unk_3c;
    u32 cb = data_ov054_0225b96c[unk_ac->unk_804][0];
    u8 buf[1];
    s32 r1;
    if (func_0206ed18()) {
        r1 = 0x54;
    } else {
        r1 = 0x53;
    }
    buf[0] = r1;
    func_02067a84(m, buf, cb);
    func_ov054_0225a690(0);
}

void Unk_ov054_0225b9c4::func_ov054_0225a5cc() {
    void *m = unk_3c;
    u32 cb = data_ov054_0225b96c[unk_ac->unk_804][0];
    s32 r4 = 0;
    u16 v[2];
    unk_b8 = r4;
    if (func_0206ed18()) {
        switch (func_0206e98c()) {
        case 0:
            r4 = func_ov054_0225a7a8();
            if (r4 == 9) {
                r4 = 7;
            }
            break;
        case 1:
            if (func_020968b8(r4)) {
                r4 = 0xf;
            } else {
                r4 = 0xb;
            }
            break;
        case 2:
            r4 = 0x5c;
            break;
        case 3:
            r4 = 0x62;
            break;
        }
        v[1] = 0x1565;
        func_02014ce4(this, &v[1], 0, 5, 1);
        func_ov054_0225a690(10);
    } else {
        r4 = 3;
        func_02014f74(this);
        func_ov054_0225a690(0);
    }
    *(u8 *)v = r4;
    func_02067a84(m, v, cb);
}

void Unk_ov054_0225b9c4::vfunc_84() {
    s32 i = unk_b4;
    if (data_ov054_0225bb08[i * 12] == 0) {
        Unk_ov054_0225b9c4_Ent *e = &data_ov054_0225bb00[i];
        if (e->fn) {
            (this->*e->fn)();
        }
    }
}

void Unk_ov054_0225b9c4::vfunc_80() {
    s32 i = unk_b4;
    if (data_ov054_0225bb08[i * 12] != 0) {
        Unk_ov054_0225b9c4_Ent *e = &data_ov054_0225bb00[i];
        if (e->fn) {
            (this->*e->fn)();
        }
    }
}

void Unk_ov054_0225b9c4::func_ov054_0225a720() {
    if (unk_b8 == 0) {
        u16 v = 0x1565;
        func_02014e60(this, &v, 0, 5, 1);
        unk_b8 = 1;
    }
}

u32 Unk_ov054_0225b9c4::func_ov054_0225a758() {
    if (func_0206e90c()) {
        return 5;
    }
    return 9;
}

u8 Unk_ov054_0225b9c4::func_ov054_0225a770() {
    s32 r = func_0206e960();
    if (r) {
        return r + 0x58;
    }
    return 9;
}

u32 Unk_ov054_0225b9c4::func_ov054_0225a78c() {
    if (func_0206e974()) {
        return 0x58;
    }
    return func_ov054_0225a770();
}

u32 Unk_ov054_0225b9c4::func_ov054_0225a7a8() {
    if (func_0206e944()) {
        return 0x61;
    }
    return func_ov054_0225a78c();
}

struct Unk_ov054_0225a7c4_Bits {
    u8 lo : 2;
    u8 mid : 3;
    u8 hi : 3;
};

void Unk_ov054_0225b9c4::vfunc_78(Unk_ov054_0225b9c4_Out *out) {
    void *g0 = func_0209750c();
    s32 r4 = 0;
    void *g1 = func_02099864(func_0209865c(g0));
    BOOL r7 = r4;
    u16 v[3];
    if (func_ov054_02258e34(unk_ac)) {
        r7 = TRUE;
        goto end;
    }
    if (func_020a032c()) {
        if (!func_02098044(g0, 9)) {
            if (func_020a0318() || func_020a0304()) {
                out->unk_04 = 0x12;
            } else {
                out->unk_04 = 0x20;
            }
            func_0209801c(g0, 9);
        } else {
            out->unk_04 = 7;
        }
        r4 = 2;
        goto end;
    }
    v[1] = 0xd006;
    if (func_02099f98(g1, &v[1]) || (v[2] = 0xd007, func_02099f98(g1, &v[2]))) {
        out->unk_04 = 0x5f;
        r4 = 0;
        goto end;
    }
    if (unk_ac->unk_810 == 0) {
        if (func_0202e18c(unk_ac, v, r4)) {
            Unk_ov054_0225a7c4_Bits *b = (Unk_ov054_0225a7c4_Bits *)v;
            out->unk_04 = *(data_ov054_0225b3c4 + b->mid * 6 + b->hi);
            r4 = 1;
            unk_ac->unk_810 = r4;
            goto end;
        }
    }
    r7 = TRUE;
end:
    if (r7) {
        out->unk_04 = data_ov054_0225b340[unk_ac->unk_808];
        r4 = 0;
        if (unk_ac->unk_808 == 0) {
            if (func_ov054_02258e44(unk_ac)) {
                out->unk_04 = 8;
            }
        }
    }
    out->unk_00 = data_ov054_0225b96c[unk_ac->unk_804][r4];
}

void Unk_ov054_0225b9c4::func_ov054_0225a690(s32 v) {
    unk_b4 = v;
}

extern "C" BOOL func_ov054_0225a218(u16 *p, s32 k) {
    if (k == 2) {
        BOOL r = FALSE;
        u32 v = *p;
        if (v >= 0x155f && v <= 0x1560) {
            r = TRUE;
        }
        return r;
    }
    return FALSE;
}

extern "C" void func_ov054_0225a910() {
    if (func_02073a78()) {
        func_0209f1c4();
    }
}

void Unk_ov054_0225b9c4::func_ov054_0225a928(Unk_ov054_0225b9c4_Owner *o) {
    vfunc_08();
    unk_ac = o;
}

Unk_ov054_0225b9c4::~Unk_ov054_0225b9c4() {}

Unk_ov054_0225b9c4::Unk_ov054_0225b9c4() {}
