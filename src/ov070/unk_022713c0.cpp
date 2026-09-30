#include "types.h"
#include "Unk_020d8c7c.h"

class Unk_ov070_0227277c;
class Unk_020d7714;

struct Unk_02014254 {
    BOOL func_02014220();
    u32 pad[0x28 / 4];
};

struct Unk_ov070_02271478_Save {
    u8 pad_00[0x720];
    u8 unk_720[0x14];
    u8 unk_734;
};

struct Unk_02063380 {
    void func_0206338c(s32 a, s32 b);
    s32 unk_00;
    s32 unk_04;
};

struct Unk_020e3efc {
    Unk_020e3efc();
    ~Unk_020e3efc();
    u32 pad[0x28 / 4];
};

struct Unk_ov070_02271524_Out {
    u8 unk_00;
    u8 unk_01;
    u16 unk_02;
    u16 unk_04;
};

struct Unk_02098f30_Out {
    u16 flags;
    u8 count;
};

struct Unk_ov070_022717f0_Ent {
    u16 unk_00[3];
    u8 unk_06[3];
    u8 unk_09;
    u8 pad_0a[2];
    s32 unk_0c;
};

class Unk_0209865c {
public:
    void *func_0209868c();
    u16 *func_02098714();
    u16 *func_020986fc();
    u16 *func_0209872c();
    void func_020986f0(u16 *v);
    void func_02098708(u16 *v);
    void func_02098720(u16 *v);
    void *func_0209888c();
    void *func_020986c8();
};

class Unk_02087ad8 {
public:
    u32 func_02087bdc();
    void func_02087bc8(u32 v);
};

class Unk_020940a0 {
public:
    s32 func_0209411c();
};

extern "C" {
extern u8 data_ov070_02272718[];
extern u8 data_ov070_022726e0[];
extern u8 data_ov070_022726e4[];
extern Unk_ov070_022717f0_Ent data_ov070_022725a0[];
extern u8 data_ov070_022725a6[];
extern u8 data_ov070_022725a9[];
extern u8 data_ov070_022728e4[];

Unk_0209865c *func_0209750c();
s32 func_020aa514();
void *func_02115fb4(void *, s32, u32);
BOOL func_0202e1cc(s32 a, s32 b);
s32 func_020991fc();
void *func_020991e4();
void func_02067a84(void *self, u8 *b, void *c);
void func_020b4154(void *p);
s32 func_02133150(s32, s32);
void func_02014e60(void *self, u16 *a, u32 b, u32 c, u32 d);
s32 func_020b3270(void *p, s32 a, s32 b, s32 c, s32 d, s32 e);
void func_0203ce4c(s32 i, void *x);
void func_020656dc(void *a, void *b, const void *c, const void *d, const void *e, void *f);
u16 func_0204b318(u32 a, s32 b);
void func_0203c41c(void *a, u16 *p, s32 c);
void func_02065588(void *a, u32 b, s32 c);
s32 func_020626cc(u16 *p, s32 mode);
s32 func_02063b8c(s32 a);
void func_0208a598();
void func_0208a58c();
void func_0203ffa4(u32 id);
void func_02094b9c(u16 *p);
void func_02094ba8(u16 *p);
void func_02094bb4(u16 *p);
void func_02062f94(u16 *a, Unk_02063380 *o, s32 b, s32 c, s32 d, s32 e, s32 f);
void func_02063388(Unk_02063380 *o);
void func_0201578c(void *self, u16 *p, s32 b, s32 c);
void func_02099014(u16 *, s32);
void func_02015170(void *self, u32 a, u32 b);
void func_020151d0(void *self, s32 a);
BOOL func_0204b2d4(u16 *);
s32 func_0204b25c(u16 *);
s32 func_0204be70(u16 *);
s32 func_02098f30(Unk_02098f30_Out *out, s32 (*fn)(u16 *));
u32 func_0201bc4c(void *p, s32 n);
BOOL func_ov070_02271be4(u16 *p);
s32 func_ov070_022720e4(void *o, u8 *arr, s32 n);
void func_ov070_022721e0(Unk_ov070_0227277c *self, s32 i);
s32 func_ov070_02271e0c(Unk_ov070_0227277c *self, s32 id, s32 idx);
void func_ov070_02272334(void *self, s32 state);
}

class Unk_020d7714 {
public:
    virtual ~Unk_020d7714();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void vfunc_10();
    virtual void vfunc_14();
    virtual void vfunc_18();
    void func_02015a5c();
    void func_02015ab0(u32 a);
    u8 pad_04[0x1a];
    u8 unk_1e;
    u8 pad_1f[0x1d];
    void *unk_3c;
    u8 pad_40[0xac - 0x40];
};

class Unk_020d8b38 : public Unk_020d7714 {
public:
    virtual ~Unk_020d8b38();
};

class Unk_ov070_0227277c : public Unk_020d8b38 {
public:
    virtual ~Unk_ov070_0227277c();
    virtual void vfunc_14();
    virtual void vfunc_18();

    BOOL func_ov070_022717f0();
    BOOL func_ov070_02271a8c();
    void func_ov070_02271bf8();

    /* 0xac */ void *unk_ac;
    /* 0xb0 */ Unk_ov070_02271478_Save *unk_b0;
    /* 0xb4 */ u32 unk_b4;
    /* 0xb8 */ u32 unk_b8;
    /* 0xbc */ s32 unk_bc;
    /* 0xc0 */ u16 unk_c0[3];
};

class Unk_020d8bc8 : public Unk_020d8c7c_Base {
public:
    virtual ~Unk_020d8bc8();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(s32 a);

    /* 0x004 */ u8 pad_04[0x614];
    /* 0x618 */ Unk_02014254 unk_618;
    /* 0x640 */ u8 pad_640[0x14];
};

class Unk_ov070_0227280c : public Unk_020d8bc8 {
public:
    virtual ~Unk_ov070_0227280c();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(s32 a);

    /* 0x654 */ s32 unk_654;
    /* 0x658 */ Unk_ov070_0227277c unk_658;
};

// ---------------------------------------------------------------------------------------------------------------------
Unk_ov070_0227280c::~Unk_ov070_0227280c() {}

void Unk_ov070_0227280c::vfunc_4c(s32 a) {
    switch (a) {
    case 0:
        unk_658.vfunc_08();
        unk_658.func_02015ab0(func_0201bc4c(this, 4));
        func_ov070_02272334(this, 1);
        break;
    case 8:
        func_ov070_02272334(this, 0);
        break;
    }
}

BOOL Unk_ov070_0227280c::vfunc_48() {
    BOOL r = FALSE;
    if (unk_618.func_02014220() == 0) {
        r = TRUE;
    }
    return r;
}

static inline BOOL Unk_ov070_IsNone(u16 *p) {
    BOOL ok;
    if (func_0204b2d4(p)) {
        u16 v = 0xfff1;
        if (func_0204b25c(p) == func_0204b25c(&v)) {
            ok = TRUE;
        } else {
            ok = FALSE;
        }
    } else {
        if (*p == 0xfff1) {
            ok = TRUE;
        } else {
            ok = FALSE;
        }
    }
    return ok;
}

BOOL Unk_ov070_0227277c::func_ov070_02271a8c() {
    Unk_02098f30_Out o;
    u8 n;
    func_02098f30(&o, func_ov070_02271be4);
    n = 0;
    func_ov070_02271bf8();
    if (!Unk_ov070_IsNone(&unk_c0[0])) {
        BOOL r = FALSE;
        if (unk_c0[0] >= 0x1429 && unk_c0[0] <= 0x1430) {
            r = TRUE;
        }
        if (!r) {
            n++;
        }
    }
    if (!Unk_ov070_IsNone(&unk_c0[1])) {
        n++;
    }
    if (!Unk_ov070_IsNone(&unk_c0[2])) {
        BOOL r = FALSE;
        if (unk_c0[2] >= 0x12a8 && unk_c0[2] <= 0x12af) {
            r = TRUE;
        }
        if (!r) {
            n++;
        }
    }
    if (o.count >= n) {
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL func_ov070_02271be4(u16 *p) {
    if (*p == 0xfff1) {
        return TRUE;
    }
    return FALSE;
}

static inline u32 Unk_ov070_02271bf8_Sh(u32 x) {
    return (x << 25) >> 24;
}

void Unk_ov070_0227277c::func_ov070_02271bf8() {
    s32 t;
    Unk_0209865c *r6 = func_0209750c();
    Unk_02087ad8 *r4 = (Unk_02087ad8 *)r6->func_0209868c();
    unk_c0[0] = *r6->func_02098714();
    if (!Unk_ov070_IsNone(&unk_c0[0])) {
        BOOL r = FALSE;
        if (unk_c0[0] >= 0x1429 && unk_c0[0] <= 0x1430) {
            r = TRUE;
        }
        if (!r) {
            r4->func_02087bc8(Unk_ov070_02271bf8_Sh(func_ov070_02271e0c(this, func_0204be70(&unk_c0[0]), 0)));
        } else {
            t = func_02063b8c(10);
            r4->func_02087bc8(Unk_ov070_02271bf8_Sh(t + 1));
        }
    } else {
        t = func_02063b8c(3);
        r4->func_02087bc8(Unk_ov070_02271bf8_Sh((u8)(t + 1)));
    }
    unk_c0[1] = *r6->func_020986fc();
    if (!Unk_ov070_IsNone(&unk_c0[1])) {
        r4->func_02087bc8(Unk_ov070_02271bf8_Sh(func_ov070_02271e0c(this, func_0204be70(&unk_c0[1]), 1)));
    } else {
        t = func_02063b8c(3);
        r4->func_02087bc8(Unk_ov070_02271bf8_Sh((u8)(t + 1)));
    }
    unk_c0[2] = *r6->func_0209872c();
    if (!Unk_ov070_IsNone(&unk_c0[2])) {
        BOOL r = FALSE;
        if (unk_c0[0] >= 0x12a8 && unk_c0[0] <= 0x12af) {
            r = TRUE;
        }
        if (!r) {
            r4->func_02087bc8(Unk_ov070_02271bf8_Sh(func_ov070_02271e0c(this, func_0204be70(&unk_c0[2]), 2)));
        } else {
            t = func_02063b8c(10);
            r4->func_02087bc8(Unk_ov070_02271bf8_Sh(t + 1));
        }
    }
}

static inline BOOL Unk_ov070_IsNone2(u16 *p) {
    BOOL ok;
    if (func_0204b2d4(p)) {
        u16 v = 0xfff1;
        ok = (func_0204b25c(p) == func_0204b25c(&v)) ? TRUE : FALSE;
    } else {
        ok = (*p == 0xfff1) ? TRUE : FALSE;
    }
    return ok;
}

BOOL Unk_ov070_0227277c::func_ov070_022717f0() {
    u8 t4 = func_02063b8c(4);
    u8 idx = 6;
    u16 a = 0xfff1;
    BOOL res;
    func_ov070_02271bf8();
    s32 i;
    for (i = 0; i < 7; i++) {
        if (data_ov070_022725a0[i].unk_0c >= unk_bc) {
            idx = i;
            break;
        }
    }
    Unk_0209865c *r7 = func_0209750c();
    if (t4 < 3) {
        u16 b = 0xfff1;
        r7->func_020986f0(&b);
        u8 *p6 = data_ov070_022725a6 + idx * 16;
        if (p6[t4] == 0) {
            u16 val = ((u16 *)((u8 *)data_ov070_022725a0 + idx * 16))[t4];
            u16 g = val;
            func_02094b9c(&g);
            u16 h = val;
            r7->func_02098708(&h);
            u16 ii = 0xfff1;
            func_02094ba8(&ii);
            u16 j = 0xfff1;
            r7->func_020986f0(&j);
        } else {
            u16 val = ((u16 *)((u8 *)data_ov070_022725a0 + idx * 16))[t4];
            u16 k = val;
            func_02094ba8(&k);
            u16 l = val;
            r7->func_020986f0(&l);
            u16 m = 0xfff1;
            func_02094b9c(&m);
            u16 n = 0xfff1;
            r7->func_02098708(&n);
        }
    } else {
        u16 c = 0xfff1;
        r7->func_020986f0(&c);
        u16 d = 0xfff1;
        r7->func_02098708(&d);
        u16 e = 0xfff1;
        func_02094ba8(&e);
        u16 f = 0xfff1;
        func_02094b9c(&f);
    }
    u16 o;
    u16 pp;
    if (data_ov070_022725a9[idx * 16] >= (u8)func_02063b8c(0x65)) {
        Unk_02063380 o1;
        o1.func_0206338c(2, 0x22);
        func_02062f94(&o, &o1, 0, 0, 1, 1, 0);
        a = o;
        func_02063388(&o1);
        res = TRUE;
    } else {
        Unk_02063380 o2;
        o2.func_0206338c(2, 0);
        func_02062f94(&pp, &o2, 0, 0, 1, 1, 0);
        a = pp;
        func_02063388(&o2);
        res = FALSE;
    }
    if (!Unk_ov070_IsNone(&a)) {
        u16 q = a;
        func_02094bb4(&q);
        r7->func_02098720(&a);
        func_0201578c(this, &a, 0, 7);
    }
    for (i = 0; i < 3; i++) {
        if (!Unk_ov070_IsNone2(&unk_c0[i])) {
            BOOL k = FALSE;
            u16 v = unk_c0[i];
            if (v >= 0x1429 && v <= 0x1430) {
                k = TRUE;
            }
            if (!k) {
                if (v >= 0x12a8 && v <= 0x12af) {
                } else {
                    func_02099014(&unk_c0[i], 0);
                }
            }
        }
    }
    return res;
}

void Unk_ov070_0227277c::vfunc_18() {
    func_02015a5c();
    s32 r4 = func_020aa514();
    u8 *r6 = data_ov070_02272718;
    u8 code = 0xff;
    s32 c = unk_1e;
    if (c >= 0xf && c < 0x23) {
        if (unk_b0->unk_734 < 5) {
            s32 i = func_ov070_022720e4(unk_b0, unk_b0->unk_720, 0x14);
            u8 *arr = unk_b0->unk_720;
            if (arr[i] == 0) {
                arr[i] = 1;
            }
            code = i + 0xf;
        } else {
            func_02115fb4(unk_b0->unk_720, 0, 0x14);
            func_0202e1cc(8, 1);
            code = 0x23;
        }
    }
    if (unk_1e == 9 && r4 == 0) {
        if (func_020991fc() != -1) {
            code = 0xb;
        } else {
            code = 0xc;
        }
    }
    if (code != 0xff) {
        u8 buf = code;
        func_02067a84(unk_3c, &buf, r6);
    }
}

void Unk_ov070_0227277c::vfunc_14() {
    Unk_ov070_02271524_Out s;
    u8 code = 0xff;
    Unk_0209865c *r7 = func_0209750c();
    s32 c = unk_1e;
    if (c >= 0xf && c <= 0x22) {
        u8 n = unk_b0->unk_734;
        if (n < 5) {
            code = n + 0x46;
        }
    }
    if (c == 0xe || (c >= 0x47 && c <= 0x4a)) {
        s32 i = func_ov070_022720e4(unk_b0, unk_b0->unk_720, 0x14);
        u8 *arr = unk_b0->unk_720;
        if (arr[i] == 0) {
            arr[i] = 1;
        }
        code = i + 0xf;
        unk_b0->unk_734++;
    }
    if (unk_1e == 0x24) {
        if (func_020991fc() != -1) {
            void *obj = func_020991e4();
            if (obj != NULL) {
                Unk_02087ad8 *p = (Unk_02087ad8 *)r7->func_0209868c();
                Unk_020e3efc str;
                u32 lvl = 0;
                s.unk_00 = 0;
                func_ov070_02271bf8();
                if (p->func_02087bdc() > 0x15) {
                    lvl = (u8)func_02133150((u8)(p->func_02087bdc() - 0x15), 10);
                }
                if (lvl > 7) {
                    lvl = 7;
                }
                s.unk_00 = lvl;
                s.unk_02 = 0x1565;
                func_02014e60(this, &s.unk_02, 0, 5, 0);
                func_020b3270(&str, p->func_02087bdc(), 10, 0, 0, 0);
                func_0203ce4c(0, &str);
                func_020656dc(obj, &s, data_ov070_02272718, data_ov070_022726e0, data_ov070_022726e4, r7->func_0209888c());
                if (r7 != NULL) {
                    s.unk_04 = func_0204b318(0x10, 4);
                    func_0203c41c(r7->func_020986c8(), &s.unk_04, 0);
                }
                if (lvl <= 2) {
                    func_02065588(obj, 0x12a7, 1);
                } else if (lvl <= 4) {
                    func_02065588(obj, 0x1248, 1);
                }
            }
        }
    }
    c = unk_1e;
    switch (c) {
    case 0:
        if (func_020626cc(r7->func_0209872c(), 0) == 0x22) {
            if (((Unk_020940a0 *)r7->func_0209888c())->func_0209411c() == 0) {
                code = func_02063b8c(2) + 1;
            } else {
                code = func_02063b8c(2) + 3;
            }
        } else {
            if (((Unk_020940a0 *)r7->func_0209888c())->func_0209411c() == 0) {
                code = func_02063b8c(2) + 5;
            } else {
                code = func_02063b8c(2) + 7;
            }
        }
        break;
    case 0x25:
        code = func_02063b8c(10) + 0x3a;
        unk_b0->unk_734 = 0;
        break;
    case 0x28:
    case 0x2b:
        if (func_ov070_02271a8c()) {
            code = 0x2c;
            func_0208a598();
        } else {
            code = 0x39;
        }
        break;
    case 0x2c:
    case 0x31:
        if (func_ov070_02271a8c()) {
            func_02015170(this, 0x39, 0);
            func_020151d0(this, 2);
            func_ov070_022721e0(this, 0);
        } else {
            code = 0x39;
        }
        break;
    case 0x36:
        func_0208a58c();
        if (func_ov070_022717f0() == 0) {
            code = 0x37;
        } else {
            code = 0x34;
        }
        func_0202e1cc(9, 1);
        break;
    case 0x38:
        func_0203ffa4(0x40);
        break;
    }
    if (code != 0xff) {
        s.unk_01 = code;
        func_02067a84(unk_3c, &s.unk_01, data_ov070_02272718);
    }
}
