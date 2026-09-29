#include "types.h"
#include "Unk_020d8c7c.h"

struct Unk_02034250_Id {
    u16 v;
};

// Sub-objects of Unk_02034518 (opaque)
struct Unk_0203517c { u8 pad[0xc]; void func_0203517c(); void func_020351ac(); };
struct Unk_020354d8 { u8 pad[0x14]; void func_020354d8(); void func_02035504(); };
struct Unk_020356b8 { u8 pad[0x1c]; void func_020356b8(); void func_0203570c(); void func_02035730(s32 v); void func_02035738(); };
struct Unk_02035ed4 { u8 pad[0x14]; void func_02035ed4(); void func_02035f18(); void func_02035f38(); void func_02035f58(); };
struct Unk_0203600c { u8 pad[0x3c]; void func_0203600c(); void func_0203603c(); void func_0203606c(); void func_0203608c(); };
struct Unk_02036a98 { u8 pad[0x18]; void func_02036a98(); BOOL func_02036aa8(); void func_02036b68(); void func_02036b7c(); };
struct Unk_02035bdc { u8 pad[0x88]; void func_02035bdc(); void func_02035c0c(); };
struct Unk_02034f4c { u8 pad[4]; void func_02034f4c(); };

class Unk_02036ba4;
typedef BOOL (Unk_02036ba4::*Unk_02034574_Fn)();

class Unk_02036ba4 {
public:
    BOOL func_02036ba4();
    void func_02036bbc(Unk_02036ba4 *src);
    void func_02036bf8();

    /* 0x00 */ s32 unk_00;
    /* 0x04 */ u16 unk_04;
    /* 0x06 */ u8 pad_06[2];
    /* 0x08 */ s32 unk_08;
    /* 0x0c */ u8 pad_0c[5];
    /* 0x11 */ u8 unk_11;
    /* 0x12 */ u8 unk_12;
    /* 0x13 */ u8 unk_13;
    /* 0x14 */ u8 unk_14;
    /* 0x15 */ u8 pad_15[7];
};

extern "C" {
extern u8 data_020e416c;
extern u8 data_021c1ad4[];
extern u8 data_021c1a6c[];
extern u8 data_021c1a44[];
extern void *data_020cbb18;
extern u8 data_021d735c[];
extern Unk_02034574_Fn data_020d8dac;

void *func_ov004_0222aa74();
void *func_ov004_0222aa1c();
void *func_ov004_0222aacc(u16 *id, s32 a, s32 b);
void *func_ov004_0222ab80(u16 *id, s32 a, s32 b);
void *func_02034250(u16 *id, s32 a, s32 b, s32 c);
void *func_020342cc(u16 *id, s32 a, s32 b, s32 c);
void func_02034320(u16 *id, s32 a, s32 b, s32 c);
void func_020343b0(u16 *out, s32 a);
void func_02004b60();
s32 func_0204b640(u16 *out, s32 a, s32 b);
BOOL func_0209750c();
u32 func_0209888c();
u32 func_02097740(void *a, u32 b);
BOOL func_02072e44(void *p);
s32 func_020b50e8();
void func_020728d4(void *p);
void func_020728a4(void *p, void *q, s32 n);
void func_02072824(void *p, s32 a, s32 b);
BOOL func_020b5364(s32 v);
BOOL func_020b5184();
BOOL func_020b0f0c();
void func_0206da6c();
void __cxa_vec_cleanup(void *p, u32 n, u32 sz, void (*d)());
}

class Unk_02034518 {
public:
    Unk_02034518();
    ~Unk_02034518();

    void func_02034518();
    void func_02034ae8();
    void func_02034b50();
    void func_02034574(Unk_02034574_Fn fn);
    void func_020345c4(s32 idx);
    Unk_02036ba4 *func_02034608(s32 n);
    s32 func_02034630(u16 id);
    s32 func_02034660(s32 v);
    s32 func_02034690();
    s32 func_020346c4(Unk_02036ba4 *key);
    void func_020346f8();
    void func_02034738();
    void func_02034784();
    void func_0203478c();
    void func_020347f0();
    void func_02034850();
    void func_02034894(u16 id);
    void func_020348bc(s32 v);
    void func_020348e4(Unk_02036ba4 *e);
    s32 func_02034514();
    void func_02034a90();

    /* 0x000 */ Unk_02036ba4 unk_00[16];
    /* 0x1c0 */ s32 unk_1c0;
    /* 0x1c4 */ Unk_02035bdc unk_1c4;
    /* 0x24c */ Unk_02036a98 unk_24c;
    /* 0x264 */ Unk_0203600c unk_264;
    /* 0x2a0 */ Unk_02035ed4 unk_2a0;
    /* 0x2b4 */ Unk_020356b8 unk_2b4;
    /* 0x2d0 */ Unk_020354d8 unk_2d0;
    /* 0x2e4 */ Unk_0203517c unk_2e4;
    /* 0x2f0 */ Unk_02034f4c unk_2f0;
    /* 0x2f4 */ u8 unk_2f4;
    /* 0x2f5 */ u8 pad_2f5[3];
};

extern "C" Unk_02034518 *data_021c1b3c;

// Vtable at 0x020d8e74.
class Unk_020d8e74 : public Unk_020d8c7c {
public:
    Unk_020d8e74();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_18();
    virtual ~Unk_020d8e74();
    static Unk_020d8e74 *func_020344f8();

    /* 0x50 */ Unk_02034518 unk_50;
};

static inline BOOL Unk_020341c0_IsOne(u8 v) { return v == 1 ? TRUE : FALSE; }

extern "C" BOOL func_020341c0(s32 a) {
    if (Unk_020341c0_IsOne(data_020e416c)) {
        func_02034250((u16 *)func_ov004_0222aa74(), 0, 0, a);
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL func_020341f4(s32 a) {
    if (Unk_020341c0_IsOne(data_020e416c)) {
        func_020342cc((u16 *)func_ov004_0222aa1c(), 0, 0, a);
        return TRUE;
    }
    return FALSE;
}

extern "C" void *func_02034228(s32 a, s32 b, s32 c, s32 d) {
    u16 id;
    func_020343b0(&id, a);
    return func_02034250(&id, b, c, d);
}

extern "C" void *func_02034250(u16 *id, s32 a, s32 b, s32 c) {
    u16 t = *id;
    void *r;
    if (Unk_020341c0_IsOne(data_020e416c)) {
        r = func_ov004_0222aacc(&t, a, b);
        if (c != 0) {
            func_02034320(&t, a, 0, b);
        }
        return r;
    }
    return data_021c1a44;
}

extern "C" void *func_020342a4(s32 a, s32 b, s32 c, s32 d) {
    u16 id;
    func_020343b0(&id, a);
    return func_020342cc(&id, b, c, d);
}

extern "C" void *func_020342cc(u16 *id, s32 a, s32 b, s32 c) {
    u16 t = *id;
    void *r;
    if (Unk_020341c0_IsOne(data_020e416c)) {
        r = func_ov004_0222ab80(&t, a, b);
        if (c != 0) {
            func_02034320(&t, a, 1, b);
        }
        return r;
    }
    return data_021c1a44;
}

struct Unk_02034320_Pkt {
    u16 a;
    u16 b;
};

extern "C" void func_02034320(u16 *id, s32 a, s32 b, s32 c) {
    if (func_02072e44(data_020cbb18)) {
        Unk_02034320_Pkt pkt;
        pkt.a = *id;
        pkt.b = (pkt.b & ~0x3f) | (func_020b50e8() & 0x3f);
        pkt.b = (pkt.b & ~0x40) | ((b & 1) << 6);
        pkt.b = (pkt.b & ~0x80) | (((u16)a & 1) << 7);
        pkt.b = (pkt.b & ~0x100) | ((c & 1) << 8);
        void *obj = data_020cbb18;
        func_020728d4(obj);
        func_020728a4(obj, &pkt, 4);
        func_02072824(obj, 0x14, 4);
    }
}

extern "C" void func_020343b0(u16 *out, s32 a) {
    u32 x = a & 7;
    u32 y = 0;
    if (func_0209750c()) {
        y = func_02097740(data_021d735c, func_0209888c()) & 3;
    }
    func_0204b640(out, y, x);
}

extern "C" void func_020343ec() { __cxa_vec_cleanup(data_021c1ad4, 0x33, 2, func_02004b60); }
extern "C" void func_0203440c() { __cxa_vec_cleanup(data_021c1a6c, 0x33, 2, func_02004b60); }
extern "C" void func_0203442c(u16 *p) { *p = 0xfff1; }

BOOL Unk_020d8e74::vfunc_0c() {
    unk_50.func_02034ae8();
    return TRUE;
}
BOOL Unk_020d8e74::vfunc_18() {
    unk_50.func_02034a90();
    return TRUE;
}
BOOL Unk_020d8e74::vfunc_00() {
    unk_50.func_02034b50();
    return TRUE;
}
Unk_020d8e74::~Unk_020d8e74() {}
Unk_020d8e74::Unk_020d8e74() {}
Unk_020d8e74 *Unk_020d8e74::func_020344f8() { return new Unk_020d8e74(); }


void Unk_02034518::func_02034518() {
    if (unk_24c.func_02036aa8()) {
        BOOL ok = TRUE;
        if (!func_020b5364(1)) {
            ok = FALSE;
        }
        if (func_020b5184()) {
            if (func_020b0f0c()) {
                ok = FALSE;
            }
        }
        if (unk_2f4) {
            ok = FALSE;
        }
        if (ok) {
            unk_24c.func_02036a98();
            func_0206da6c();
        }
    }
}

void Unk_02034518::func_02034574(Unk_02034574_Fn fn) {
    s32 i;
    for (i = 0; i < unk_1c0; i++) {
        (unk_00[i].*fn)();
    }
}

void Unk_02034518::func_020345c4(s32 idx) {
    s32 i;
    if (unk_1c0 > 0) {
        for (i = unk_1c0 - 1; i >= idx; i--) {
            unk_00[i + 1].func_02036bbc(&unk_00[i]);
        }
    }
    unk_1c0++;
}

Unk_02036ba4 *Unk_02034518::func_02034608(s32 n) {
    Unk_02036ba4 *r = NULL;
    s32 i;
    for (i = 0; i < n; i++) {
        Unk_02036ba4 *p = &unk_00[i];
        if (p->unk_13 == 0) {
            r = p;
            break;
        }
    }
    return r;
}

s32 Unk_02034518::func_02034630(u16 id) {
    s32 r = -1;
    s32 i;
    for (i = 0; i < unk_1c0; i++) {
        u16 c = unk_00[i].unk_04;
        if (c == id) {
            r = i;
            break;
        }
    }
    return r;
}

s32 Unk_02034518::func_02034660(s32 v) {
    s32 r = -1;
    s32 i;
    for (i = 0; i < unk_1c0; i++) {
        s32 c = unk_00[i].unk_00;
        if (c == v) {
            r = i;
            break;
        }
    }
    return r;
}

s32 Unk_02034518::func_02034690() {
    s32 r = -1;
    s32 i;
    for (i = 0; i < unk_1c0; i++) {
        if (unk_00[i].unk_12 != 0) {
            r = i;
            break;
        }
    }
    return r;
}

s32 Unk_02034518::func_020346c4(Unk_02036ba4 *key) {
    s32 r = -1;
    s32 n = unk_1c0;
    if (n < 16) {
        for (r = 0; r < n; r++) {
            if (unk_00[r].unk_00 > key->unk_00) {
                break;
            }
        }
    }
    return r;
}

void Unk_02034518::func_020346f8() {
    Unk_02036ba4 *end = &unk_00[unk_1c0];
    Unk_02036ba4 *p;
    for (p = unk_00; p < end; p++) {
        if (p->func_02036ba4()) {
            p->unk_13 = 1;
        }
        if (p != unk_00 && p->unk_11 != 0) {
            p->unk_13 = 1;
        }
    }
}

void Unk_02034518::func_02034738() {
    if (unk_1c0 > 0 && unk_00[0].unk_12 == 0) {
        if (unk_00[0].unk_04 != 0xffff) {
            unk_2b4.func_02035738();
            unk_00[0].unk_14 = 1;
        }
        func_02034574(data_020d8dac);
        unk_00[0].unk_12 = 1;
    }
}

void Unk_02034518::func_02034784() { unk_00[0].unk_12 = 0; }

void Unk_02034518::func_0203478c() {
    s32 i, j, last;
    for (i = unk_1c0 - 1; i >= 0; i--) {
        if (unk_00[i].unk_13 != 0) {
            last = unk_1c0 - 1;
            for (j = i; j < last; j++) {
                unk_00[j].func_02036bbc(&unk_00[j + 1]);
            }
            unk_00[last].func_02036bf8();
            unk_1c0 = last;
        }
    }
}

void Unk_02034518::func_020347f0() {
    s32 i = func_02034690();
    Unk_02036ba4 *p;
    if (i >= 0) {
        p = &unk_00[i];
        if (p->unk_04 != 0xffff) {
            BOOL done = FALSE;
            if (i > 0) {
                Unk_02036ba4 *q = func_02034608(i);
                if (q != NULL) {
                    unk_2b4.func_02035730(q->unk_08);
                    done = TRUE;
                }
            }
            if (!done) {
                if (p->unk_13 != 0) {
                    unk_2b4.func_02035730(p->unk_08);
                }
            }
        }
    }
}

void Unk_02034518::func_02034850() {
    func_020347f0();
    func_0203478c();
    func_02034738();
    unk_1c4.func_02035c0c();
    unk_2b4.func_020356b8();
    unk_2f0.func_02034f4c();
    func_020346f8();
}

void Unk_02034518::func_02034894(u16 id) {
    s32 i = func_02034630(id);
    if (i >= 0 && i < unk_1c0) {
        unk_00[i].unk_13 = 1;
    }
}

void Unk_02034518::func_020348bc(s32 v) {
    s32 i = func_02034660(v);
    if (i >= 0 && i < unk_1c0) {
        unk_00[i].unk_13 = 1;
    }
}

void Unk_02034518::func_020348e4(Unk_02036ba4 *e) {
    s32 i = func_020346c4(e);
    if (i >= 0) {
        func_020345c4(i);
        unk_00[i].func_02036bbc(e);
    }
}

extern "C" Unk_02036ba4 *func_02034910() {
    s32 i = data_021c1b3c->func_02034690();
    Unk_02036ba4 *p = NULL;
    if (i >= 0) {
        p = &data_021c1b3c->unk_00[i];
    }
    return p;
}

static inline BOOL Unk_02034938_IsA() { return data_020e416c == 0; }
static inline BOOL Unk_02034938_IsB() { return data_020e416c == 1; }

extern "C" void func_02034938() {
    if (Unk_02034938_IsA()) {
        data_021c1b3c->unk_264.func_0203600c();
    } else if (Unk_02034938_IsB()) {
        data_021c1b3c->unk_2a0.func_02035ed4();
    }
}

extern "C" void func_0203498c() {
    if (Unk_02034938_IsA()) {
        data_021c1b3c->unk_264.func_0203603c();
    } else if (Unk_02034938_IsB()) {
        data_021c1b3c->unk_2a0.func_02035f18();
    }
}

extern "C" void func_020349e0() {
    Unk_02034518 *p;
    Unk_02036ba4 *e, *end;
    data_021c1b3c->unk_2e4.func_0203517c();
    data_021c1b3c->unk_2d0.func_020354d8();
    data_021c1b3c->unk_2b4.func_0203570c();
    data_021c1b3c->unk_2a0.func_02035f38();
    data_021c1b3c->unk_264.func_0203606c();
    data_021c1b3c->unk_24c.func_02036b68();
    data_021c1b3c->unk_1c4.func_02035bdc();
    e = data_021c1b3c->unk_00;
    end = &data_021c1b3c->unk_00[16];
    for (; e < end; e++) {
        e->func_02036bf8();
    }
    data_021c1b3c->unk_1c0 = 0;
    data_021c1b3c->unk_2f4 = 0;
}

void Unk_02034518::func_02034a90() {
    unk_2e4.func_020351ac();
    unk_2d0.func_02035504();
    unk_24c.func_02036b7c();
    unk_264.func_0203608c();
    unk_2a0.func_02035f58();
    func_02034850();
    func_02034518();
    func_02034514();
}
s32 Unk_02034518::func_02034514() {}
