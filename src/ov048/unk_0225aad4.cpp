#include "types.h"

struct Unk_ov048_0225b144_Global {
    u8 pad_00[0x64];
    s32 unk_64;
};

struct Unk_ov048_0225b240_Rec {
    u8 pad_00[4];
    s32 unk_04;
};

struct Unk_ov048_0225b278_Vec {
    s32 x, y, z;
};

struct Unk_ov048_0225b278_Ent {
    u8 pad_00[0x5c];
    Unk_ov048_0225b278_Vec unk_5c;
    u8 pad_68[0x8e - 0x68];
    s16 unk_8e;
};

struct Unk_ov048_0225ae04_Out {
    const char *unk_00;
    u8 unk_04;
};

struct Unk_ov048_0225ae04_Row {
    const char *name;
    u8 id;
};

class Unk_ov048_0225cbc8;
typedef BOOL (Unk_ov048_0225cbc8::*Unk_ov048_0225cbc8_BFn)();

extern "C" {
s32 func_020721b4();
s32 func_020ea434(s32);
extern Unk_ov048_0225b144_Global *data_020cbb18;
extern const char *data_ov048_0225c6e0;

s32 func_02067a84(void *, u8 *, const char *);
void func_02072368(void *, s32);
s32 func_020eaf18();
void func_02015170(void *, s32, s32);
s32 func_020151d0(void *, s32);
void func_0201514c(void *, void *, void *, s32);
s32 func_02067990(void *);
s32 func_02067a6c(void *);
s32 func_0206799c(void *, s32);
s32 func_02067a78(void *);
s32 func_02073340();
s32 func_020729cc(void *, s32);
void *func_0209750c();
void *func_02098680(void *);
void *func_02076c80(void *);
s64 func_020ea3c4(void *);
s32 func_020a032c();
s32 func_ov004_02225e9c();
s32 func_ov004_02225ee0();
s32 func_0202e148();
s32 func_02098044(void *, s32);
s32 func_0209801c(void *, s32);
u32 func_0209ccd0();
void *func_02098674(void *);
void *func_02076db4(void *);
void *func_02076cf0(void *);
s32 func_02076f04(void *);
u64 func_02132ef8(u64, u64);
u64 func_02133100(u64, u64);
s32 func_02015958(void *, s32, s32, s32, s32, s32);
s32 func_0209f1e4();
s32 func_0209f204();
s32 func_02073bf8(s32, s32, s32);
s32 func_02073a78();
s32 func_0209f1c4();
s32 func_0201ba88(void *);
s32 func_0201b9e8(void *, s32 *, s32 *);
s32 func_0201b9fc(void *, s32, s32, s32);
s32 func_020a62a0();
s32 func_0201bc4c(void *, s32);
void func_02015ab0(void *, s32);
Unk_ov048_0225b240_Rec *func_02067918(s32);
void func_020a0978();
void *func_020b4934();
s32 func_020b4f58(void *, s32, s32, s32);
void *func_020850e0();
void *func_02085180(void *);
Unk_ov048_0225b278_Ent *func_02095204(s32);
void func_0204ee10(s32 *, s32 *, Unk_ov048_0225b278_Vec *);
void func_02086f00(void *, s32);
void func_02086ef8(void *, s32);
s32 func_020b4aa8(void *, s32, Unk_ov048_0225b278_Vec *, s32, s32, s32, s32);
void func_0203a3d8();
void func_020a090c();
void func_020a0930();
s32 func_020b4f18(void *, s32, Unk_ov048_0225b278_Vec *, s32, s32, s32, s32);
void func_02015b04(void *);
void func_02015b54(void *);
void func_020872dc(void *);
void func_0203ec50(void *);
void func_0203eccc(void *);
void func_02071e5c(void *);
void func_02071e74(void *);
void func_0203ecdc(void *);
void func_0203ec54(void *);
void func_020872ec(void *);
void func_ov048_0225bfb4(void *, s32);
}

class Unk_02015b54 {
public:
    Unk_02015b54();
    virtual ~Unk_02015b54();
    virtual void vfunc_08();
};

struct Unk_ov048_0225b0f8_M0 {
    u8 pad_00[0x2e0 - 0xb8];
    u8 unk_2e0[0x14];
    u8 unk_2f4[0xe0];
    s32 unk_3d4;
    Unk_ov048_0225b0f8_M0();
    ~Unk_ov048_0225b0f8_M0();
};

struct Unk_ov048_0225b0f8_M1 {
    u8 pad_00[0x108];
    Unk_ov048_0225b0f8_M1();
    ~Unk_ov048_0225b0f8_M1();
};

struct Unk_ov048_0225b0f8_M2 {
    u8 pad_00[0xd4];
    Unk_ov048_0225b0f8_M2();
    ~Unk_ov048_0225b0f8_M2();
};

struct Unk_ov048_0225b0f8_Sub {
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
};

struct Unk_ov048_0225b0f8_M3 {
    u8 pad_00[0xa4];
    u8 unk_a4[0x22c - 0xa4];
    Unk_ov048_0225b0f8_M3();
    ~Unk_ov048_0225b0f8_M3();
};

class Unk_ov048_0225cbc8 : public Unk_02015b54 {
public:
    Unk_ov048_0225cbc8();
    virtual ~Unk_ov048_0225cbc8();
    virtual void vfunc_78(void *out);

    void func_ov048_0225aad4();
    void func_ov048_0225aafc();
    void func_ov048_0225ab60();
    void func_ov048_0225ab88();
    void func_ov048_0225ab98();
    void func_ov048_0225aba8();
    void func_ov048_0225ac0c();
    void func_ov048_0225ac58();
    void func_ov048_0225ac7c();
    void func_ov048_0225acac();
    void func_ov048_0225ace0();
    void func_ov048_0225ad18();
    void func_ov048_0225ad28();
    void func_ov048_0225ad38();
    void func_ov048_0225ad50(s32 flag);
    void func_ov048_0225ad78();
    void func_ov048_0225adb0();
    void func_ov048_0225adec();
    BOOL func_ov048_0225af0c();
    s32 func_ov048_0225af48(s64 v);
    void func_ov048_0225afd8(s32 a, s32 b);
    void func_ov048_0225b018();
    s32 func_ov048_0225b030();
    void func_ov048_0225b038(s32 v);
    void func_ov048_0225b040(u8 *p);
    BOOL func_ov048_0225b13c();
    BOOL func_ov048_0225b140();
    BOOL func_ov048_0225b144();
    BOOL func_ov048_0225b19c();
    BOOL func_ov048_0225b1a0();
    BOOL func_ov048_0225b23c();
    BOOL func_ov048_0225b240();
    BOOL func_ov048_0225b274();
    BOOL func_ov048_0225b278();
    BOOL func_ov048_0225b314();
    BOOL func_ov048_0225b318();
    BOOL func_ov048_0225b3a4();
    BOOL func_ov048_0225b3a8();

    // out of range
    void func_ov048_0225a078(s32 state);
    s32 func_ov048_02259420();
    u32 func_ov048_022593bc();
    BOOL func_ov048_0225b454();
    BOOL func_ov048_0225b46c();
    BOOL func_ov048_0225b49c();
    BOOL func_ov048_0225b4e4();

    u8 pad_04[0x1e - 0x4];
    u8 unk_1e;
    u8 pad_1f[0x3c - 0x1f];
    u8 *unk_3c;
    u8 pad_40[0x8e - 0x40];
    s16 unk_8e;
    u8 pad_90[0xac - 0x90];
    s32 unk_ac;
    s32 unk_b0;
    u8 *unk_b4;
    Unk_ov048_0225b0f8_M0 unk_b8;
    Unk_ov048_0225b0f8_M1 unk_3d8;
    Unk_ov048_0225b0f8_M2 unk_4e0;
    Unk_ov048_0225b0f8_M3 unk_5b4;
    u8 unk_7e0;
    u8 unk_7e1;
    u8 unk_7e2;
    u8 unk_7e3;
    u8 pad_7e4[0xe41 - 0x7e4];
    u8 unk_e41;
};

// ---------------------------------------------------------------------------------------------------------------------

void Unk_ov048_0225cbc8::func_ov048_0225aad4() {
    func_ov048_0225ad50(1);
    *(u16 *)(unk_b4 + 0xe3e) = 200;
    func_ov048_0225a078(8);
}

void Unk_ov048_0225cbc8::func_ov048_0225aafc() {
    u8 buf[2];
    if (unk_7e0 != 0) {
        func_ov048_0225af48(func_020ea3c4(func_02076c80(func_02098680(func_0209750c()))));
        buf[0] = 0x76;
        func_02067a84(unk_3c, buf, data_ov048_0225c6e0);
    } else {
        buf[1] = func_ov048_02259420();
        func_02067a84(unk_3c, &buf[1], data_ov048_0225c6e0);
    }
}

void Unk_ov048_0225cbc8::func_ov048_0225ab60() {
    u8 buf[2];
    buf[0] = func_ov048_022593bc();
    func_02067a84(unk_3c, buf, data_ov048_0225c6e0);
}

void Unk_ov048_0225cbc8::func_ov048_0225ab88() {
    func_ov048_0225bfb4(unk_b4, 0xa);
}

void Unk_ov048_0225cbc8::func_ov048_0225ab98() {
    func_ov048_0225bfb4(unk_b4, 8);
}

void Unk_ov048_0225cbc8::func_ov048_0225aba8() {
    func_02072368(data_020cbb18, 1);
    if (func_020eaf18() != 4) {
        func_ov048_0225ace0();
    } else {
        s32 t;
        func_ov048_0225ad50(1);
        t = unk_b8.unk_3d4;
        func_020721b4();
        func_020ea434(t);
        *(u16 *)(unk_b4 + 0xe3e) = 0x960;
        func_ov048_0225a078(5);
    }
}

void Unk_ov048_0225cbc8::func_ov048_0225ac0c() {
    func_ov048_0225ad50(1);
    if (func_020eaf18() == 2) {
        func_02072368(data_020cbb18, 1);
    } else {
        func_ov048_0225afd8(2, 1);
    }
    *(u16 *)(unk_b4 + 0xe3e) = 200;
    func_ov048_0225a078(4);
}

void Unk_ov048_0225cbc8::func_ov048_0225ac58() {
    func_02015170(this, 0x3c, 0);
    func_020151d0(this, 2);
    func_ov048_0225a078(2);
}

void Unk_ov048_0225cbc8::func_ov048_0225ac7c() {
    func_0201514c(this, unk_b8.unk_2f4, unk_b8.unk_2e0, 0);
    func_020151d0(this, 4);
    func_ov048_0225a078(3);
}

void Unk_ov048_0225cbc8::func_ov048_0225acac() {
    func_ov048_0225ad50(1);
    func_ov048_0225afd8(2, 2);
    *(u16 *)(unk_b4 + 0xe3e) = 200;
    func_ov048_0225a078(1);
}

void Unk_ov048_0225cbc8::func_ov048_0225ace0() {
    func_ov048_0225ad50(1);
    func_ov048_0225afd8(4, 2);
    *(u16 *)(unk_b4 + 0xe3e) = 0x960;
    func_ov048_0225a078(0xa);
}

void Unk_ov048_0225cbc8::func_ov048_0225ad18() {
    func_ov048_0225bfb4(unk_b4, 6);
}

void Unk_ov048_0225cbc8::func_ov048_0225ad28() {
    func_ov048_0225bfb4(unk_b4, 5);
}

void Unk_ov048_0225cbc8::func_ov048_0225ad38() {
    u8 *p = unk_3c;
    func_02067990(p);
    func_02067a6c(p);
}

void Unk_ov048_0225cbc8::func_ov048_0225ad50(s32 flag) {
    u8 *p = unk_3c;
    if (flag != 0) {
        func_0206799c(p, 1);
    } else {
        func_0206799c(p, 0);
    }
    func_02067a78(p);
}

void Unk_ov048_0225cbc8::func_ov048_0225ad78() {
    func_ov048_0225bfb4(unk_b4, 7);
    func_02073340();
    if (func_020eaf18() == 3 || func_020eaf18() == 4) {
        func_ov048_0225a078(0x14);
    } else {
        func_ov048_0225b018();
    }
}

void Unk_ov048_0225cbc8::func_ov048_0225adb0() {
    u8 buf[2];
    s32 v;
    if (func_020729cc(data_020cbb18, 0) != 0) {
        v = 0x10;
    } else {
        v = 0xf;
    }
    buf[0] = v;
    func_02067a84(unk_3c, buf, data_ov048_0225c6e0);
}

void Unk_ov048_0225cbc8::func_ov048_0225adec() {
    func_ov048_0225ad50(0);
    func_ov048_0225a078(0x15);
}

void Unk_ov048_0225cbc8::vfunc_78(void *arg) {
    Unk_ov048_0225ae04_Out *out = (Unk_ov048_0225ae04_Out *)arg;
    static Unk_ov048_0225ae04_Row tbl[11] = {
        {data_ov048_0225c6e0, 0}, {data_ov048_0225c6e0, 4}, {data_ov048_0225c6e0, 5},
        {data_ov048_0225c6e0, 6}, {data_ov048_0225c6e0, 7}, {data_ov048_0225c6e0, 0xa},
        {data_ov048_0225c6e0, 0x68}, {data_ov048_0225c6e0, 0xd}, {"sp_etc_sequence4", 9},
        {data_ov048_0225c6e0, 0x47}, {data_ov048_0225c6e0, 0x48},
    };
    void *h;
    unk_7e1 = 0;
    unk_7e0 = 0;
    h = func_0209750c();
    if (func_020a032c() != 0) {
        func_ov048_0225b038(8);
    } else if (func_ov048_0225b030() == 6) {
        if (func_ov004_02225e9c() == 0) {
            func_ov004_02225ee0();
        }
    } else if (func_ov048_0225b030() != 7 && func_ov048_0225b030() != 9 && func_ov048_0225b030() != 0xa) {
        if (func_0202e148() == 0) {
            func_ov048_0225b038(5);
        } else if (func_02098044(h, 5) == 0) {
            func_ov048_0225b038(0);
            func_0209801c(h, 5);
        } else {
            s32 t = func_0209ccd0() + 1;
            func_ov048_0225b038(t);
        }
    }
    if (unk_ac >= 0 && unk_ac < 0xb) {
        out->unk_04 = tbl[unk_ac].id;
        out->unk_00 = tbl[unk_ac].name;
    }
}

BOOL Unk_ov048_0225cbc8::func_ov048_0225af0c() {
    u8 *arr = (u8 *)func_02076db4(func_02098674(func_0209750c()));
    s32 i;
    for (i = 0; i < 0x20; i++) {
        if (func_02076f04(func_02076cf0(arr + i * 0x1c)) != 0) {
            return TRUE;
        }
    }
    return FALSE;
}

s32 Unk_ov048_0225cbc8::func_ov048_0225af48(s64 v) {
    s64 q1 = v / 100000000;
    s64 m1 = q1 * 100000000;
    s64 rem = v - m1;
    s64 q2 = rem / 10000;
    func_02015958(this, (s32)q1, 5, 4, 6, 0);
    func_02015958(this, (s32)q2, 8, 4, 6, 0);
    func_02015958(this, (s32)v - (s32)(q2 * 10000) - (s32)m1, 9, 4, 6, 0);
}

void Unk_ov048_0225cbc8::func_ov048_0225afd8(s32 a, s32 b) {
    switch (a) {
    case 3:
    case 4:
        func_0209f1e4();
        break;
    case 1:
    case 2:
        func_0209f204();
        break;
    case 0:
        break;
    }
    func_02073bf8(a, 4, b);
}

void Unk_ov048_0225cbc8::func_ov048_0225b018() {
    if (func_02073a78() != 0) {
        func_0209f1c4();
    }
}

s32 Unk_ov048_0225cbc8::func_ov048_0225b030() {
    return unk_ac;
}

void Unk_ov048_0225cbc8::func_ov048_0225b038(s32 v) {
    unk_ac = v;
}

void Unk_ov048_0225cbc8::func_ov048_0225b040(u8 *p) {
    vfunc_08();
    unk_b4 = p;
    unk_ac = 0xb;
}

Unk_ov048_0225cbc8::~Unk_ov048_0225cbc8() {
}

Unk_ov048_0225cbc8::Unk_ov048_0225cbc8() {
}

BOOL Unk_ov048_0225cbc8::func_ov048_0225b13c() {
    return TRUE;
}

BOOL Unk_ov048_0225cbc8::func_ov048_0225b140() {
    return TRUE;
}

BOOL Unk_ov048_0225cbc8::func_ov048_0225b144() {
    s32 a, b;
    if (func_0201ba88(this) != 0) {
        a = 4;
        b = 4;
        if (func_0201b9e8(this, &a, &b) != 0) {
            if (a == 4) {
                if (func_020a62a0() != 0) {
                    func_0201b9fc(this, 1, data_020cbb18->unk_64, 4);
                    func_ov048_0225bfb4(this, 4);
                }
            }
        }
    }
    return TRUE;
}

BOOL Unk_ov048_0225cbc8::func_ov048_0225b19c() {
    return TRUE;
}

BOOL Unk_ov048_0225cbc8::func_ov048_0225b1a0() {
    s32 a, b;
    if (func_0201ba88(this) != 0) {
        a = 4;
        b = 4;
        s32 u;
        s32 x;
        if (func_0201b9e8(this, &a, &b) != 0 && (x = a, u = data_020cbb18->unk_64, x == u) && x == b) {
            func_0201b9fc(this, 1, u, u);
            ((Unk_ov048_0225b0f8_Sub *)((u8 *)this + 0x658))->vfunc_08();
            func_02015ab0((u8 *)this + 0x658, func_0201bc4c(this, 4));
            func_ov048_0225bfb4(this, 2);
        } else if (func_020a62a0() != 0 && b == 4) {
            func_0201b9fc(this, 1, data_020cbb18->unk_64, 4);
            func_ov048_0225bfb4(this, 1);
        }
    }
    return TRUE;
}

BOOL Unk_ov048_0225cbc8::func_ov048_0225b23c() {
    return TRUE;
}

BOOL Unk_ov048_0225cbc8::func_ov048_0225b240() {
    if (func_02067918(0)->unk_04 == 5) {
        func_020a0978();
        func_020b4f58(func_020b4934(), 0x2e, 2, 3);
        func_ov048_0225bfb4(this, 3);
    }
    return TRUE;
}

BOOL Unk_ov048_0225cbc8::func_ov048_0225b274() {
    return TRUE;
}

BOOL Unk_ov048_0225cbc8::func_ov048_0225b278() {
    if (func_02067918(0)->unk_04 == 5) {
        void *h;
        s32 a, b;
        s32 s;
        Unk_ov048_0225b278_Vec v;
        Unk_ov048_0225b278_Ent *e;
        h = func_02085180(func_020850e0());
        e = func_02095204(4);
        Unk_ov048_0225b278_Vec *pv = &e->unk_5c;
        v.x = pv->x;
        v.y = pv->y;
        v.z = pv->z;
        s = e->unk_8e;
        a = 0;
        b = 0;
        func_0204ee10(&a, &b, &v);
        func_02086f00(h, 2);
        func_02086ef8(h, unk_8e);
        func_020b4aa8(func_020b4934(), 0xc, &v, 0x800000, s, a, b);
        func_0203a3d8();
        func_020a090c();
        func_020b4f58(func_020b4934(), 0x2e, 2, 3);
        func_ov048_0225bfb4(this, 3);
    }
    return TRUE;
}

BOOL Unk_ov048_0225cbc8::func_ov048_0225b314() {
    return TRUE;
}

BOOL Unk_ov048_0225cbc8::func_ov048_0225b318() {
    if (func_02067918(0)->unk_04 == 5) {
        void *h;
        s32 a, b;
        s32 s;
        Unk_ov048_0225b278_Vec v;
        Unk_ov048_0225b278_Ent *e;
        h = func_02085180(func_020850e0());
        e = func_02095204(4);
        Unk_ov048_0225b278_Vec *pv = &e->unk_5c;
        v.x = pv->x;
        v.y = pv->y;
        v.z = pv->z;
        s = e->unk_8e;
        a = 0;
        b = 0;
        func_0204ee10(&a, &b, &v);
        func_02086f00(h, 1);
        func_02086ef8(h, unk_8e);
        func_0203a3d8();
        func_020a0930();
        func_020b4f18(func_020b4934(), 0xc, &v, 0x800000, s, 2, 2);
        func_ov048_0225bfb4(this, 3);
    }
    return TRUE;
}

BOOL Unk_ov048_0225cbc8::func_ov048_0225b3a4() {
    return TRUE;
}

BOOL Unk_ov048_0225cbc8::func_ov048_0225b3a8() {
    static Unk_ov048_0225cbc8_BFn tbl[4] = {
        &Unk_ov048_0225cbc8::func_ov048_0225b4e4,
        &Unk_ov048_0225cbc8::func_ov048_0225b49c,
        &Unk_ov048_0225cbc8::func_ov048_0225b46c,
        &Unk_ov048_0225cbc8::func_ov048_0225b454,
    };
    if (unk_e41 < 4) {
        if ((this->*tbl[unk_e41])() != 0) {
            unk_e41++;
        }
    }
    return TRUE;
}
