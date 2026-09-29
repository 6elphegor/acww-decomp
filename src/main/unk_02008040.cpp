#include "types.h"

class Unk_020e2a30 {
public:
    virtual ~Unk_020e2a30();
    virtual void vfunc_08();
    Unk_020e2a30();
    void func_020a710c(const char *src);

    /* 0x04 */ char unk_04[0x1a];
    /* 0x1e */ u8 unk_1e;
};

// Sub-object at +0x8ec of Unk_02008040
class Unk_020080e8 {
public:
    void func_020080e8(u16 *out);
    void func_020080f8(u16 v);
    void func_02008758(s16 *out);
    void func_02008768(s16 v);
    u8 unk_00[0x10];
};

struct Unk_02008100_Msg {
    u32 unk_00;
    u32 unk_04;
    u16 unk_08;
    u16 unk_0a;
    u16 unk_0c;
    u8 unk_0e[0x0e];
};

struct Unk_020082e4_Msg {
    u32 unk_00;
    u32 unk_04;
    u16 unk_08;
    u16 unk_0a;
    u8 unk_0c;
    u8 unk_0d[0x0f];
};

struct Unk_02008404_Msg {
    u32 unk_00;
    u32 unk_04;
    u16 unk_08;
    u8 unk_0a[0x12];
};

struct Unk_02008074_Vec {
    s32 unk_00, unk_04, unk_08;
};

struct Unk_02008858_Blk {
    u32 w[12];
};

struct Unk_02008190_Ptr {
    u32 unk_00;
    s32 unk_04;
    s32 unk_08;
};

class Unk_02008040_Base {
public:
    virtual void vfunc_00();
    /* 0x004 */ u8 unk_04[0x8a];
    /* 0x08e */ s16 unk_8e;
    /* 0x090 */ u8 unk_090[0x34];
    /* 0x0c4 */ Unk_02008074_Vec unk_c4;
    /* 0x0d0 */ s16 unk_d0;
    /* 0x0d2 */ u8 unk_d2[0x1a];
};

class Unk_02008040 : public Unk_02008040_Base, public Unk_020e2a30 {
public:
    void func_02008040(void *arg);
    void func_02008074();
    BOOL func_02008100(u16 *v, u32 a, u32 b);
    void func_02008150();
    void func_02008190();
    void func_020082a8();
    BOOL func_020082ac(u32 b);
    void func_020082c0(u8 *msg);
    BOOL func_020082e4(u8 v, u32 a, u32 b);
    void func_02008320();
    void func_02008360();
    void func_0200838c();
    BOOL func_020083dc(u32 b);
    void func_020083e8(u32 a, u32 flag);
    BOOL func_02008404(u32 a, u32 b);
    void func_0200843c();
    void func_02008458();
    BOOL func_02008598(u32 b);
    void func_020085a4();
    BOOL func_020085f0(u32 a, u32 b);
    void func_0200863c();
    void func_0200865c();
    void func_0200869c();
    void func_020086dc(u32 b);
    void func_0200870c(u8 *msg);
    BOOL func_02008770(s16 v, u32 a, u32 b);
    void func_020087ac();
    void func_02008858();

    /* 0x10c */ u8 unk_10c[0x1c];
    /* 0x128 */ Unk_02008190_Ptr *unk_128;
    /* 0x12c */ u8 unk_12c[0x168];
    /* 0x294 */ Unk_02008858_Blk unk_294;
    /* 0x2c4 */ u8 unk_2c4[8];
    /* 0x2cc */ u8 unk_2cc[8];
    /* 0x2d4 */ u32 unk_2d4;
    /* 0x2d8 */ u8 unk_2d8[0x2c4];
    /* 0x59c */ u8 unk_59c[0x28];
    /* 0x5c4 */ u8 unk_5c4[0xd0];
    /* 0x694 */ Unk_02008858_Blk unk_694;
    /* 0x6c4 */ u8 unk_6c4[0x18];
    /* 0x6dc */ u8 unk_6dc[0x24];
    /* 0x700 */ s32 unk_700;
    /* 0x704 */ u8 unk_704[0xcc];
    /* 0x7d0 */ u8 unk_7d0[0x1c];
    /* 0x7ec */ s32 unk_7ec;
    /* 0x7f0 */ u8 unk_7f0[8];
    /* 0x7f8 */ s32 unk_7f8;
    /* 0x7fc */ s32 unk_7fc;
    /* 0x800 */ u8 unk_800[0x1c];
    /* 0x81c */ u16 unk_81c;
    /* 0x81e */ u16 unk_81e;
    /* 0x820 */ s32 unk_820, unk_824, unk_828, unk_82c, unk_830, unk_834;
    /* 0x838 */ u8 unk_838[0xb4];
    /* 0x8ec */ Unk_020080e8 unk_8ec;
};

extern "C" {
extern void *data_020cbb18;
extern char data_020d6ee4[];
extern char data_020d6ef4[];
extern char data_020d6f04[];
extern char data_020d6f18[];
extern char data_021f5b80[];
extern u8 data_020e416c;

u16 func_0207694c(void *);
void func_02076964(void *, u16);
s16 func_020769ac(void *);
void func_020769c4(void *, s16);
BOOL func_020729bc(void *, s32);
void func_02010914(Unk_02008040 *);
void func_0201071c(Unk_02008040 *);
void func_0200ef08(Unk_02008040 *);
void func_02007ebc(Unk_02008074_Vec *, Unk_02008040 *, u32);
s32 func_02010358(Unk_02008040 *, u32, u32, u32);
s32 func_020103b4(Unk_02008040 *, u32, u32, u32);
s32 func_0200ce98(Unk_02008040 *, u32, u32, s32);
s32 func_02007c08(Unk_02008040 *, s32);
void func_0200e7f4(Unk_02008040 *);
void func_ov003_02226fac(u32);
void func_ov003_02227248(u32, u32);
void func_ov003_02212034(void *, void *);
void func_ov003_022261ec(u32, void *, void *, u32);
void func_ov003_02223450(void *, s32);
void func_ov003_02223400(void *, void *, void *);
void func_ov003_0220dc0c(Unk_02008040 *, u32, u32, s32);
void func_ov003_0220c4ac(Unk_02008040 *, u32, u32, u32, u32, s32);
void func_ov003_02210628(Unk_02008040 *, u32, u32, u32, u32, u32, u32, s32);
void func_0203ee38(void *, void *);
void *func_0205fbb8(void *);
void func_0205e1a0(void *, u32, u32, u32);
void func_02010a7c(void *, Unk_02008040 *);
BOOL func_0204b2d4(void *);
u32 func_0204b25c(void *);
BOOL func_0200f660(Unk_02008040 *);
void func_0203d76c();
void func_0200ecdc(Unk_02008040 *, u32);
void func_0200ec30(Unk_02008040 *, u32);
void func_0200ec1c(Unk_02008040 *, u32);
void func_0200f4c0(Unk_02008040 *, u32);
void *func_0200e2e0(void *);
void func_0200e2c0(void *, u32, u32, u32);
BOOL func_0200e248(Unk_02008040 *, void *);
void *func_0200e2d0(void *);
BOOL func_0203d820();
void func_0203d7f8();
void func_0203e488(Unk_02008040 *, Unk_020e2a30 *);
void func_0203e47c(Unk_02008040 *, Unk_020e2a30 *);
void func_0202e8c8();
void func_0203a598();
void func_0203a844();
void func_02034d70(u32);
void func_02034dd0(u32, u32, u32);
BOOL func_020565e8(void *, u32);
BOOL func_02056654(void *);
void func_020f0a68(void *, u32);
void func_02090330(u32, void *, u32, u32);
void func_02010dbc(void *, s32, u32, u32, u32);
void func_02010a58(Unk_02008040 *, void *);
}

void Unk_020080e8::func_020080e8(u16 *out) {
    *out = func_0207694c(this);
}

void Unk_020080e8::func_020080f8(u16 v) {
    func_02076964(this, v);
}

void Unk_020080e8::func_02008758(s16 *out) {
    *out = func_020769ac(this);
}

void Unk_020080e8::func_02008768(s16 v) {
    func_020769c4(this, v);
}

void Unk_02008040::func_02008040(void *arg) {
    u16 a, b;
    unk_8ec.func_020080e8(&a);
    b = a;
    func_02008100(&b, 6, (u32)arg);
}

void Unk_02008040::func_02008074() {
    s32 t;
    unk_8ec.func_020080f8(unk_81c);
    Unk_02008074_Vec v;
    func_02007ebc(&v, this, 0);
    unk_820 = v.unk_00;
    unk_824 = v.unk_04;
    unk_828 = v.unk_08;
    t = 0x1000;
    unk_82c = t;
    unk_830 = t;
    unk_834 = t;
    func_02010358(this, 0x7e, 3, 0);
}

BOOL Unk_02008040::func_02008100(u16 *v, u32 a, u32 b) {
    Unk_02008100_Msg m;
    BOOL r;
    func_0200e2e0(&m);
    func_0200e2c0(&m, 0x85, a, b);
    unk_81e = *v;
    unk_81c = unk_81e;
    r = func_0200e248(this, &m);
    func_0200e2d0(&m);
    return r;
}

void Unk_02008040::func_02008150() {
    func_02010914(this);
    if (func_020729bc(data_020cbb18, unk_7fc)) {
        func_0201071c(this);
    } else {
        func_0200ef08(this);
        func_0201071c(this);
    }
    func_02008190();
}

void Unk_02008040::func_02008190() {
    u8 *st;
    if (func_020729bc(data_020cbb18, unk_7fc)) {
        st = &unk_7d0[1];
        switch (*st) {
        case 0:
            if (func_0203d820()) {
                *st = 1;
                func_0203e488(this, this);
                func_0200ec30(this, 0x11);
                func_020a710c(data_020d6ee4);
                unk_1e = 0x1e;
                unk_128->unk_08 = 1;
                func_0202e8c8();
            } else {
                unk_7f8 = func_02007c08(this, unk_7ec);
                func_0200ce98(this, 3, 1, -1);
            }
            break;
        case 1:
            if (unk_128 != NULL) {
                if (unk_128->unk_04 != 0) {
                    *st = 2;
                }
            }
            break;
        case 2:
            if (unk_128 != NULL) {
                if (unk_128->unk_04 == 0) {
                    func_0203e47c(this, this);
                    func_0200ec1c(this, 0x11);
                    func_0203d7f8();
                    unk_7f8 = func_02007c08(this, unk_7ec);
                    func_0200ce98(this, 3, 1, -1);
                }
            }
            break;
        }
    } else {
        unk_7f8 = func_02007c08(this, unk_7ec);
    }
}

void Unk_02008040::func_020082a8() {}

BOOL Unk_02008040::func_020082ac(u32 b) {
    return func_020082e4(0, 6, b);
}

void Unk_02008040::func_020082c0(u8 *msg) {
    u8 *p = &unk_7d0[0];
    p[0] = msg[0xc];
    p[1] = 0;
    func_020103b4(this, 0, 3, 3);
}

BOOL Unk_02008040::func_020082e4(u8 v, u32 a, u32 b) {
    Unk_020082e4_Msg m;
    BOOL r;
    func_0200e2e0(&m);
    func_0200e2c0(&m, 0x84, a, b);
    m.unk_0c = v;
    r = func_0200e248(this, &m);
    func_0200e2d0(&m);
    return r;
}

void Unk_02008040::func_02008320() {
    func_0200838c();
    if (func_020729bc(data_020cbb18, unk_7fc)) {
        func_0201071c(this);
        func_02008360();
    } else {
        func_0200ef08(this);
        func_0201071c(this);
    }
}

void Unk_02008040::func_02008360() {
    if (((*(vu16 *)0x027fffa8 & 0x8000) >> 15) == 0) {
        func_0200ce98(this, 3, 1, -1);
    }
}

void Unk_02008040::func_0200838c() {
    func_02010914(this);
    if (func_020565e8(unk_2cc, 1)) {
        if (func_020729bc(data_020cbb18, unk_7fc)) {
            func_020f0a68(data_021f5b80, 0x79);
        } else {
            func_0200ecdc(this, 0x79);
        }
    }
}

BOOL Unk_02008040::func_020083dc(u32 b) {
    return func_02008404(1, b);
}

void Unk_02008040::func_020083e8(u32 a, u32 flag) {
    u32 t = 0;
    if (flag) {
        t = 5;
    }
    func_020103b4(this, 0x81, t, t);
}

BOOL Unk_02008040::func_02008404(u32 a, u32 b) {
    Unk_02008404_Msg m;
    BOOL r;
    func_0200e2e0(&m);
    func_0200e2c0(&m, 0x83, a, b);
    r = func_0200e248(this, &m);
    func_0200e2d0(&m);
    return r;
}

void Unk_02008040::func_0200843c() {
    func_02010914(this);
    func_0201071c(this);
    func_02008458();
}

void Unk_02008040::func_02008458() {
    u8 *st = &unk_7d0[0];
    if (unk_700 == 0x76) {
        if (func_02056654(unk_2cc)) {
            func_020103b4(this, 0x77, 0, 0);
            if (!func_020729bc(data_020cbb18, unk_7fc)) {
                *st = 3;
                unk_7f8 = func_02007c08(this, unk_7ec);
            }
        }
    } else {
        func_0200f4c0(this, 0x400);
        switch (*st) {
        case 0:
            if (func_0203d820()) {
                *st = 1;
                func_0203e488(this, this);
                func_0200ec30(this, 0x11);
                func_020a710c(data_020d6ef4);
                unk_1e = 0x15;
                unk_128->unk_08 = 1;
                func_0203a598();
            }
        case 1:
            if (unk_128 != NULL) {
                if (unk_128->unk_04 != 0) {
                    *st = 2;
                }
            }
            break;
        case 2:
            if (unk_128 != NULL) {
                if (unk_128->unk_04 == 0) {
                    func_0203e47c(this, this);
                    func_0200ec1c(this, 0x11);
                    func_0203d7f8();
                    unk_7f8 = func_02007c08(this, unk_7ec);
                    func_0200ce98(this, 3, 1, -1);
                    func_0200ec1c(this, 8);
                    func_0203a844();
                    func_02034d70(0xc);
                }
            }
            break;
        }
    }
}

BOOL Unk_02008040::func_02008598(u32 b) {
    return func_020085f0(5, b);
}

void Unk_02008040::func_020085a4() {
    func_02010358(this, 0x76, 3, 0);
    unk_7d0[0] = 0;
    if (func_020729bc(data_020cbb18, unk_7fc)) {
        func_02034dd0(0xc, 0xf, 0);
    }
    func_0200ecdc(this, 0x83a);
}

BOOL Unk_02008040::func_020085f0(u32 a, u32 b) {
    Unk_02008404_Msg m;
    func_0200e2e0(&m);
    func_0200e2c0(&m, 0x79, a, b);
    if (func_0200e248(this, &m)) {
        func_0200ec30(this, 8);
        func_0200e2d0(&m);
        return TRUE;
    }
    func_0200e2d0(&m);
    return FALSE;
}

void Unk_02008040::func_0200863c() {
    func_02010914(this);
    func_0200869c();
    func_0201071c(this);
    func_0200865c();
}

void Unk_02008040::func_0200865c() {
    if (func_02056654(unk_2cc)) {
        unk_7f8 = func_02007c08(this, unk_7ec);
        func_0200ce98(this, 3, 1, -1);
    }
}

void Unk_02008040::func_0200869c() {
    s16 v = unk_8e;
    func_02010dbc(&v, *(s16 *)&unk_7d0[0], 0x800, 0x1770000, 0xc0000);
    func_02010a58(this, &v);
}

void Unk_02008040::func_020086dc(u32 b) {
    s16 v;
    unk_8ec.func_02008758(&v);
    func_02008770(v, 6, b);
}

void Unk_02008040::func_0200870c(u8 *msg) {
    s16 v = *(s16 *)(msg + 0xc);
    func_02010358(this, 0x70, 3, 0);
    func_02090330(0x43, unk_6dc, 0, 0);
    func_0200ecdc(this, 0x86);
    *(s16 *)&unk_7d0[0] = v;
    unk_8ec.func_02008768(v);
}

BOOL Unk_02008040::func_02008770(s16 v, u32 a, u32 b) {
    Unk_02008100_Msg m;
    BOOL r;
    func_0200e2e0(&m);
    func_0200e2c0(&m, 0x77, a, b);
    m.unk_0c = v;
    r = func_0200e248(this, &m);
    func_0200e2d0(&m);
    return r;
}

struct Unk_020087ac_Saved {
    Unk_02008074_Vec v;
    Unk_02008858_Blk blk1;
    Unk_02008858_Blk blk2;
};

void Unk_02008040::func_020087ac() {
    Unk_020087ac_Saved sv;
    s16 d;
    func_02010914(this);
    sv.v = unk_c4;
    d = unk_d0;
    sv.blk1 = unk_294;
    sv.blk2 = unk_694;
    func_0200e7f4(this);
    func_0201071c(this);
    func_02008858();
    unk_c4 = sv.v;
    unk_d0 = d;
    unk_294 = sv.blk1;
    unk_694 = sv.blk2;
}

struct Unk_02008858_S16x2 {
    s16 unk_00, unk_02;
};

struct Unk_02008858_S16x3 {
    s16 unk_00, unk_02, unk_04;
};

static inline BOOL Unk_02008858_IsZero(u8 v) {
    return v == 0 ? TRUE : FALSE;
}

void Unk_02008040::func_02008858() {
    u8 *p, *st;
    u8 kind, sub;
    s32 lim;
    void *g;
    u16 t[8];
    Unk_02008858_Blk blk;
    Unk_02008074_Vec v1, v2, v3, v4, v5;
    BOOL r;

    func_0200f4c0(this, 0x400);
    p = &unk_7d0[0];
    kind = p[2];
    sub = p[5];
    st = p + 3;
    blk = unk_694;
    switch (kind) {
    case 0:
        if (*st == 3) {
            *st = 0;
            func_ov003_02226fac(p[6]);
            func_ov003_02227248(sub, (u8)unk_7fc);
        }
        if (sub == 9) {
            v1.unk_00 = 0x119a;
            v1.unk_04 = 0x4cd;
            v1.unk_08 = -0x4cd;
        } else {
            v1.unk_00 = 0xb33;
            v1.unk_04 = 0x19a;
            v1.unk_08 = -0x19a;
        }
        func_ov003_02212034(&blk, &v1);
        t[5] = 0x64;
        t[6] = 0x64;
        t[7] = 0x64;
        v1 = *(Unk_02008074_Vec *)&blk.w[9];
        func_0203ee38(&v1, &v1);
        func_ov003_022261ec((u8)unk_7fc, &t[5], &blk, 0);
        break;
    case 1:
        void *o = func_0205fbb8(unk_5c4);
        if (o != NULL) {
            v1.unk_00 = 0xb33;
            v1.unk_04 = 0x19a;
            v1.unk_08 = -0x19a;
            func_ov003_02212034(&blk, &v1);
            v2 = *(Unk_02008074_Vec *)&blk.w[9];
            func_0203ee38(&v2, &v2);
            func_ov003_02223450(&v3, *((s8 *)o + 0x7e));
            v4 = v2;
            v5 = v3;
            func_ov003_02223400(o, &v4, &v5);
        }
        break;
    }
    switch (unk_700) {
    case 0x87:
        if (!func_02056654(unk_2cc)) {
            return;
        }
        func_02010358(this, 0x88, 0, 0);
        func_0205e1a0(unk_59c, 0xa, 0, 1);
        return;
    case 0x89:
        if (!func_02056654(unk_2cc)) {
            return;
        }
        func_02010358(this, 0x8a, 0, 0);
        func_0205e1a0(unk_59c, 0x20, 0, 1);
        return;
    case 0x86:
        lim = 0x19;
        if (func_020729bc(data_020cbb18, unk_7fc)) {
            if (func_020565e8(unk_2cc, 0xc)) {
                func_0203a598();
            }
        }
        break;
    default:
        lim = 5;
        break;
    }
    if ((s32)((unk_2d4 << 4) >> 16) < lim) {
        return;
    }
    g = data_020cbb18;
    if (!func_020729bc(g, unk_7fc)) {
        unk_7f8 = func_02007c08(this, unk_7ec);
        return;
    }
    switch (*st) {
    case 0:
        if (func_0203d820()) {
            *st = 1;
            func_0203e488(this, this);
            func_0200ec30(this, 0x11);
            switch (kind) {
            case 0:
                func_020a710c(data_020d6f04);
                unk_1e = 0x40;
                break;
            case 1:
                func_020a710c(data_020d6f18);
                unk_1e = 0x40;
                break;
            case 2:
                func_020a710c(data_020d6ef4);
                unk_1e = 0x28;
                break;
            case 3:
                func_020a710c(data_020d6ef4);
                unk_1e = 0x29;
                break;
            case 7:
                func_020a710c(data_020d6ef4);
                unk_1e = 0x22;
                break;
            default:
                func_020a710c(data_020d6ef4);
                unk_1e = kind + 0x1a;
                break;
            }
            unk_128->unk_08 = 1;
        }
    case 1:
        if (unk_128 != NULL) {
            if (unk_128->unk_04 != 0) {
                *st = 2;
            }
        }
        break;
    case 2:
        if (kind < 2) {
            if (unk_128 == NULL) {
                break;
            }
            if (*((u8 *)unk_128 + 0x19f7) != 0xfe) {
                break;
            }
            if (kind == 1) {
                func_ov003_0220dc0c(this, 1, 6, -1);
            } else {
                func_ov003_0220c4ac(this, 3, sub, sub, 6, -1);
            }
            break;
        }
        if (unk_128 == NULL) {
            break;
        }
        if (unk_128->unk_04 != 0) {
            break;
        }
        func_0203e47c(this, this);
        func_0200ec1c(this, 0x11);
        func_0203d7f8();
        if (func_020729bc(g, unk_7fc)) {
            func_0203a844();
        }
        unk_7f8 = func_02007c08(this, unk_7ec);
        func_02010a7c(&t[3], this);
        if (func_0204b2d4(&t[3])) {
            t[4] = 0xfff1;
            r = func_0204b25c(&t[3]) == func_0204b25c(&t[4]) ? TRUE : FALSE;
        } else {
            r = t[3] == 0xfff1 ? TRUE : FALSE;
        }
        if (!r && !func_0200f660(this) && Unk_02008858_IsZero(data_020e416c)) {
            func_ov003_02210628(this, 2, 2, 0, 0, 0, 6, -1);
            break;
        }
        if (Unk_02008858_IsZero(data_020e416c)) {
            func_0203d76c();
            func_0200ec30(this, 0);
        }
        func_0200ce98(this, 3, 1, -1);
        break;
    }
}
