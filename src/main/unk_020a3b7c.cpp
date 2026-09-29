#include "types.h"
#include "Unk_020d8c7c.h"

struct Unk_020cbb18 {
    u8 pad_00[0x64];
    s32 unk_64;
    BOOL func_02072e44();
    BOOL func_02072e88(s32 i);
};

class Unk_020e27d4;
typedef void (Unk_020e27d4::*Unk_020e27d4_Fn)();

struct Unk_020e27d4_Ent {
    Unk_020e27d4_Fn enter;
    Unk_020e27d4_Fn exec;
};

struct Unk_020e27d4_Nib {
    u8 lo : 4;
    u8 hi : 4;
};

extern "C" {
extern Unk_020cbb18 *data_020cbb18;
extern u8 data_021c3cc0;
extern u8 data_021c3cb8;
extern u8 data_021d726c;
extern s32 data_021ed3c8;
extern void *data_021ed3b0;
extern void *data_021ed3b4;
extern u8 data_021ed398;
extern void *data_021f482c;
extern u8 data_021dfd8c[];
extern u8 data_021ed1a4[];
extern char data_020e2920[];
extern char data_020e2934[];
extern char data_020e2948[];
extern u8 data_020e2970;
extern u16 data_020e2974;
extern u8 data_021eda60;
extern u8 data_021eda5c;
extern volatile u8 data_021eda54;
extern u32 data_021d72e8;
extern Unk_020e27d4_Ent data_021ed624[];

s32 func_020b50e8(void);
void func_020a0990(void *p, char *name, s32 id);
s32 func_0203ca94(void);
s32 func_020a15c8(void *p, s32 v);
s32 func_02073340(void);
BOOL func_0209f000(void *p);
s32 func_0209f1c4(void);
s32 func_020a13c4(void *p);
s32 func_020a1158(void *p, u32 v);
s32 func_020a1648(void *p);
s32 func_020a15f8(void *p);
void *func_0209750c(void);
s32 func_0206e7f8(void);
s32 func_02097ff4(void *p, s32 v);
s32 func_0204c3c0(void *p);
s32 func_02079cc8(void *p);
s32 func_020e85fc(void *heap, void *p);
void *func_020e8608(void *heap, u32 size);
s32 func_0209f0c0(void);
s32 func_0204da0c(void);
s32 func_0204dab4(s32 v);
s32 func_0204da24(s32 v);
s32 func_0204c6a4(s32 v);
s32 func_0204d42c(void);
s32 func_0204d3d8(void);
void func_020a1574(void *p, void *q);
s32 func_020a0c0c(s32 v);
void *func_020a03ac(void);
s32 func_0204ff18(void *p, u32 v);
s32 func_0209d610(void *p);
s32 func_02115fb4(void *p, s32 v, u32 n);
s32 func_0209d5f8(void *p);
s32 func_0209f0dc(void *p);
s32 func_0209eb7c(void *p);
void func_020a15b0(void *p);
s32 func_020ed188(void *p);
s32 func_0203e358(void);
s32 func_0203eb38(void);
s32 func_020a5ec8(void);
s32 func_020a5ed8(s32 v);
s32 func_02115468(s32 v);
s32 func_0202e880(u32 a, u32 b, s32 c, s32 d);
s32 func_020739b8(s32 v);
s32 func_020a5c30(void);
s32 func_02045c68(void);
s32 func_0204137c(u32 a, u32 b);
s32 func_020412f0(u32 a, u32 b, u32 c);
s32 func_020eca8c(void *p);
void func_020a4414(u32 a, u32 b, u32 c, u32 d);
}

static inline BOOL Unk_020a42c4_IsTwo(u8 v) { return v == 2 ? TRUE : FALSE; }
static inline BOOL Unk_020a42c4_IsZero(u8 v) { return v == 0 ? TRUE : FALSE; }

class Unk_020e27d4 : public Unk_020d8c7c {
public:
    Unk_020e27d4() {
        func_020a15b0(&unk_54);
        unk_d8 = 0;
        unk_dc = 0;
    }
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_18();
    virtual ~Unk_020e27d4();

    void func_020a3b7c();
    void func_020a3b9c();
    void func_020a3c84();
    void func_020a3cc4();
    void func_020a3dac();
    void func_020a3dec();
    void func_020a3eb8();
    void func_020a3ebc(s32 idx);

    /* 0x50 */ s32 unk_50;
    /* 0x54 */ u8 unk_54[0x49];
    /* 0x9d */ u8 unk_9d;
    /* 0x9e */ u8 unk_9e[0xa8 - 0x9e];
    /* 0xa8 */ void *unk_a8;
    /* 0xac */ void *unk_ac;
    /* 0xb0 */ void *unk_b0;
    /* 0xb4 */ void *unk_b4;
    /* 0xb8 */ void *unk_b8;
    /* 0xbc */ void *unk_bc;
    /* 0xc0 */ void *unk_c0;
    /* 0xc4 */ void *unk_c4;
    /* 0xc8 */ void *unk_c8;
    /* 0xcc */ u8 unk_cc[0xd8 - 0xcc];
    /* 0xd8 */ u32 unk_d8;
    /* 0xdc */ u32 unk_dc;
    /* 0xe0 */ u8 unk_e0[0x10a - 0xe0];
    /* 0x10a */ Unk_020e27d4_Nib unk_10a;
};

class Unk_020e2988 : public Unk_020d8c7c {
public:
    virtual BOOL vfunc_1c();
    virtual BOOL vfunc_20();
    virtual BOOL vfunc_28();
    virtual BOOL vfunc_2c();
    virtual ~Unk_020e2988();
};

void Unk_020e27d4::func_020a3b7c() {
    func_020a0990(this, data_020e2948, 0x28);
    func_0203ca94();
    unk_9d = 0;
}

void Unk_020e27d4::func_020a3b9c() {
    switch (unk_9d) {
    case 0:
        if (func_020a15c8(this, 0) != 0) {
            if (data_020cbb18->func_02072e88(data_020cbb18->unk_64) != 0) {
                func_02073340();
                if (func_0209f000(this) != 0) {
                    func_0209f1c4();
                }
            }
            unk_9d = 1;
        }
        break;
    case 1: {
        s32 r = func_020a13c4(this);
        if (r == 1) {
            unk_9d = 4;
        } else if (r != 3) {
            unk_9d = 2;
        }
        break;
    }
    case 2: {
        s32 r = func_020a1158(this, unk_10a.hi);
        if (r == 1) {
            unk_9d = 4;
        } else if (r == 0) {
            unk_9d = 3;
        }
        break;
    }
    case 3: {
        s32 r = func_020a1158(this, unk_10a.lo);
        if (r == 1) {
            unk_9d = 4;
        } else if (r == 0) {
            unk_9d = 6;
        }
        break;
    }
    case 4:
        func_020a1648(this);
        unk_9d = 5;
        break;
    case 5:
        break;
    default:
        func_020a15f8(this);
        func_020a3ebc(0xd);
        break;
    }
}

void Unk_020e27d4::func_020a3c84() {
    void *r5 = func_0209750c();
    func_020a0990(this, data_020e2920, 0x66);
    func_0206e7f8();
    func_02097ff4(r5, 2);
    func_0204c3c0(data_021ed1a4);
    unk_9d = 0;
}

void Unk_020e27d4::func_020a3cc4() {
    switch (unk_9d) {
    case 0:
        if (func_020a15c8(this, 0) != 0) {
            if (data_020cbb18->func_02072e88(data_020cbb18->unk_64) != 0) {
                func_02073340();
                if (func_0209f000(this) != 0) {
                    func_0209f1c4();
                }
            }
            unk_9d = 1;
        }
        break;
    case 1: {
        s32 r = func_020a13c4(this);
        if (r == 1) {
            unk_9d = 4;
        } else if (r != 3) {
            unk_9d = 2;
        }
        break;
    }
    case 2: {
        s32 r = func_020a1158(this, unk_10a.hi);
        if (r == 1) {
            unk_9d = 4;
        } else if (r == 0) {
            unk_9d = 3;
        }
        break;
    }
    case 3: {
        s32 r = func_020a1158(this, unk_10a.lo);
        if (r == 1) {
            unk_9d = 4;
        } else if (r == 0) {
            unk_9d = 6;
        }
        break;
    }
    case 4:
        func_020a1648(this);
        unk_9d = 5;
        break;
    case 5:
        break;
    default:
        func_020a15f8(this);
        func_020a3ebc(0xc);
        break;
    }
}

void Unk_020e27d4::func_020a3dac() {
    void *r5 = func_0209750c();
    func_020a0990(this, data_020e2934, 1);
    func_0206e7f8();
    func_02097ff4(r5, 2);
    func_0204c3c0(data_021ed1a4);
    unk_9d = 0;
}

void Unk_020e27d4::func_020a3dec() {
    s32 m = func_020b50e8();
    if (Unk_020a42c4_IsTwo(data_021c3cc0) != 0) {
        if (m == 9) {
            s32 t = data_021ed3c8;
            if (t == 0x12 || t == 0x1f) {
                func_020a3ebc(*(volatile s32 *)&data_021ed3c8);
                data_021ed3c8 = 0;
            }
        } else if (m == 0xb) {
            if (data_021ed3c8 == 0x13) {
                func_020a3ebc(data_021ed3c8);
                data_021ed3c8 = 0;
            }
        } else if (m == 6) {
            if ((u32)(data_021ed3c8 - 3) <= 1) {
                func_020a3ebc(data_021ed3c8);
                data_021ed3c8 = 0;
            }
        } else if (m == 0x2e) {
            func_020a3ebc(data_021ed3c8);
            data_021ed3c8 = 0;
        }
        if (m == 0xc && data_021ed3c8 == 0x14) {
            func_020a3ebc(data_021ed3c8);
            data_021ed3c8 = 0;
        }
        if (m == 0x2f || m == 0xd) {
            func_020a3ebc(data_021ed3c8);
            data_021ed3c8 = 0;
        }
    }
}

void Unk_020e27d4::func_020a3eb8() {}

BOOL Unk_020e27d4::vfunc_18() {
    if (data_021ed624[unk_50].exec) {
        (this->*data_021ed624[unk_50].exec)();
    }
    return TRUE;
}

BOOL Unk_020e27d4::vfunc_0c() {
    if (func_020b50e8() == 6) {
        func_02079cc8(data_021dfd8c);
    }
    if (data_020cbb18->func_02072e44()) {
        if (func_020b50e8() == 0xb || func_020b50e8() == 9) {
            return TRUE;
        }
    }
    data_021ed3b0 = 0;
    if (func_020b50e8() == 0x2e || func_020b50e8() == 6 || func_020b50e8() == 9 || func_020b50e8() == 0xb) {
        func_020e85fc(unk_a8, unk_ac);
        func_020e85fc(unk_a8, unk_b0);
        func_020e85fc(unk_a8, unk_c0);
    }
    if (func_020b50e8() == 9) {
        func_020e85fc(unk_a8, unk_b8);
    }
    if (data_021ed3b4) {
        func_020e85fc(unk_a8, data_021ed3b4);
        data_021ed3b4 = 0;
    }
    if (unk_c8) {
        func_0209f0c0();
        func_020e85fc(unk_a8, unk_c8);
        unk_c8 = 0;
    }
    if (unk_c4) {
        func_020e85fc(unk_a8, unk_c4);
    }
    if (func_020b50e8() == 0x2e) {
        func_020e85fc(unk_a8, unk_b4);
        func_020e85fc(unk_a8, unk_bc);
    }
    return TRUE;
}

BOOL Unk_020e27d4::vfunc_00() {
    if (func_020b50e8() == 6) {
        if (func_0204da0c() != 0) {
            func_0204dab4(func_0204da0c());
            func_0204da24(func_0204da0c());
            func_0204c6a4(func_0204da0c());
        }
        func_0204d42c();
        func_0204d3d8();
    }
    data_021ed398 = 0;
    if (data_020cbb18->func_02072e44()) {
        if (func_020b50e8() == 0xb || func_020b50e8() == 9) {
            return FALSE;
        }
    }
    data_021ed3b0 = this;
    func_020a1574(&unk_54, this);
    unk_a8 = data_021f482c;
    if (func_020b50e8() == 0x2e || func_020b50e8() == 6 || func_020b50e8() == 9 || func_020b50e8() == 0xb) {
        unk_ac = func_020e8608(unk_a8, 0x15fe0);
        unk_b0 = func_020e8608(unk_a8, 0x15fe0);
        unk_c0 = func_020e8608(unk_a8, 0x11df4);
        func_020a0c0c(2);
        void *r4 = func_020a03ac();
        s32 r6 = func_0204ff18(r4, 0x11df4);
        if (func_0209d610(r4) == 0 || r6 != 0) {
            func_02115fb4(r4, 0, 0x11df4);
        }
        func_0209d5f8(r4);
    }
    if (func_020b50e8() == 9) {
        unk_b8 = func_020e8608(unk_a8, 0x228c);
    }
    if (func_020b50e8() == 0x2e) {
        unk_b4 = func_020e8608(unk_a8, 0x15fe0);
        unk_bc = func_020e8608(unk_a8, 0x84c);
    }
    if (data_021ed3c8 == 0x14 || data_021ed3c8 == 0x15) {
        unk_c4 = func_020e8608(unk_a8, 0x15fe4);
        unk_c8 = func_020e8608(unk_a8, 0x10cc);
        func_0209f0dc(unk_c8);
    }
    if (data_021ed3c8 == 0x14) {
        void *p = func_020e8608(unk_a8, 0x15fe0);
        data_021ed3b4 = p;
        func_0209eb7c((u8 *)p + 0x15fdc);
    }
    return TRUE;
}

extern "C" Unk_020e27d4 *func_020a4238() {
    return new Unk_020e27d4;
}

Unk_020e2988::~Unk_020e2988() {}

extern "C" {
void func_020a42c4(void *p) {
    if (data_021d726c != 0) {
        u8 m = data_021c3cc0;
        if (Unk_020a42c4_IsTwo(m) == 0) {
            if (Unk_020a42c4_IsZero(m) != 0) {
                func_020a4414(0xd4, 0, 0, 0);
                func_020ed188(p);
                func_0203e358();
                func_0203eb38();
            }
        }
    } else if (data_020e2974 != 0xd8) {
        u8 m = data_021c3cc0;
        if (Unk_020a42c4_IsTwo(m) == 0) {
            if (data_021c3cb8 == 0) {
                if (Unk_020a42c4_IsZero(m) != 0) {
                    if (data_020cbb18->func_02072e88(data_020cbb18->unk_64) != 0) {
                        switch (func_020a5ec8()) {
                        case 5:
                            func_020ed188(p);
                            func_020a5ed8(6);
                            break;
                        case 12:
                            func_020ed188(p);
                            func_020a5ed8(0xd);
                            break;
                        }
                    } else {
                        func_020ed188(p);
                    }
                }
            }
        }
    }
}

BOOL func_020a4394(void) {
    if (data_020e2970 != 0 || data_020e2974 == 0xd8) {
        return FALSE;
    }
    if (data_020e2974 == 2) {
        func_02115468(1);
    }
    s32 r = func_0202e880(data_020e2974, data_021d72e8, 0, 2);
    if (r != 0) {
        data_020e2974 = 0xd8;
        data_020e2970 = 1;
        return r;
    }
    return FALSE;
}

void func_020a43ec(void) {
    data_020e2974 = 1;
    data_021eda60 = 3;
    data_021eda5c = 3;
    data_020e2970 = 0;
}

void func_020a4414(u32 a, u32 b, u32 c, u32 d) {
    data_020e2974 = a;
    data_021eda60 = b;
    data_021eda5c = c;
}
}

BOOL Unk_020e2988::vfunc_2c() { return Unk_020d8c7c_Base::vfunc_2c(); }

BOOL Unk_020e2988::vfunc_28() {
    if (Unk_020d8c7c_Base::vfunc_28()) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_020e2988::vfunc_20() { return Unk_020d8c7c_Base::vfunc_20(); }

BOOL Unk_020e2988::vfunc_1c() {
    func_020739b8(0);
    func_020a5c30();
    func_02045c68();
    if (Unk_020d8c7c_Base::vfunc_1c() == 0) {
        return FALSE;
    }
    if (data_021d726c != 0) {
        if (Unk_020a42c4_IsTwo(data_021c3cc0) != 0) {
            data_021eda60 = 2;
            data_021eda5c = 0;
            func_0204137c(2, 0x10);
        }
        return FALSE;
    }
    if (data_020e2974 != 0xd8) {
        if (Unk_020a42c4_IsTwo(data_021c3cc0) != 0 || data_021c3cb8 != 0) {
            func_0204137c(data_021eda60, 0xf);
        }
        return FALSE;
    }
    if (unk_04[0xf] & 1) {
        if (func_020eca8c(this) == 0) {
            unk_04[0xf] &= ~1;
            unk_04[0xf] &= ~4;
        } else {
            return FALSE;
        }
    }
    if (data_021eda54 != 0) {
        if (Unk_020a42c4_IsZero(data_021c3cc0) != 0) {
            data_021eda54 = data_021eda54 - 1;
            if (data_021eda54 == 0) {
                if (func_020412f0(data_021eda5c, 0xf, 0) == 0) {
                    data_021eda54 = 1;
                }
            }
        }
    }
    return TRUE;
}

void Unk_020e27d4::func_020a3ebc(s32 idx) {
    if (data_021ed624[idx].enter) {
        (this->*data_021ed624[idx].enter)();
    }
    unk_50 = idx;
}
