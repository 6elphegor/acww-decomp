#include "types.h"

void operator delete(void *p);

struct Unk_020cbb18 {
    void func_02072368(u32 x);
};

class Unk_020e0ef4 {
public:
    void func_0208aa28();
    void func_0208aa30();
};

extern "C" {
extern Unk_020cbb18 *data_020cbb18;
extern u8 data_021d7350[];
extern u8 data_021ed32c[];
extern u8 data_021edb5c[];
extern u8 data_020e2934[];
extern u8 data_021e7f8c[];
extern u8 data_020e24ec;

u32 func_020a071c(void);
s32 func_020a0210(void);
void func_020a3ebc(void *p, s32 x);
void *func_02067918(u32 x);
void func_02067a78(void *o);
void func_02067a84(void *o, void *a, void *b);
void func_02067990(void *o);
s32 func_02067a6c(void *o);
void func_0206799c(void *o, u32 x);
s32 func_02073090(s32 x);
void func_0207312c(void);
s32 func_02074894(void);
s32 func_02074860(u8 *p);
s32 func_02074828(u8 *p);
s32 func_020747c0(void);
s32 func_02074b58(u32 a, u32 b);
u32 func_020720f8(void);
s32 func_020eaca0(u32 x);
u32 func_020eaf28(void);
s32 func_020eaf90(s32 x);
Unk_020e0ef4 *func_0208a570(void);
void func_0208f174(void *p);
void *func_0209750c(void);
u32 func_020974a0(u32 x);
s32 func_020974f8(void);
s32 func_02097ff4(void *p, u32 x);
void *func_02098a58(void *p);
void func_0209d624(void *p);
void func_0209d70c(void *p, u32 x);
void func_0209df30(void *p, s32 x);
void func_0209e148(void *p, u32 x);
void func_0209eb6c(void *p);
void func_0209eb74(void *p);
u32 func_0209f000(void *p);
void func_0209f1c4(void);
void func_0209f898(void *self, u8 *st, u32 a, u32 b, u32 c, u32 d);
void func_02073348(void);
void func_0203ca94(void);
void func_02116048(const void *src, void *dst, u32 size);
}

class Unk_020ddcf0 {
public:
    Unk_020ddcf0();
    virtual ~Unk_020ddcf0();
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
    virtual void vfunc_38(u32 a);
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
    virtual s32 vfunc_6c();
    virtual void vfunc_70();
    virtual void vfunc_74();

    /* 0x04 */ u32 unk_04[0x38 / 4];
    /* 0x3c */ u32 unk_3c;
    /* 0x40 */ u8 unk_40;
};

struct Unk_020e2824_Nib {
    u8 lo : 4;
    u8 hi : 4;
};

class Unk_020e2824 : public Unk_020ddcf0 {
public:
    Unk_020e2824();
    virtual ~Unk_020e2824();
    virtual void vfunc_14();
    virtual void vfunc_18();

    u8 func_020a0b08(u32 x);
    s32 func_020a1158(u32 x);
    s32 func_020a1224();
    s32 func_020a12f0();
    s32 func_020a1330();
    s32 func_020a1374();
    s32 func_020a13c4();
    void func_020a1464(u32 i, u8 v);
    u32 func_020a1470(u32 i);
    void func_020a147c(u32 i, u8 v);
    u32 func_020a1484(u32 i);
    u32 func_020a148c();
    void func_020a1494();
    void func_020a14ac();
    void func_020a1574(u32 v);
    BOOL func_020a15c8(u32 v);
    void func_020a15f8();
    void func_020a1614();
    void func_020a1648();
    void func_020a167c();
    void func_020a1950();
    void func_020a1974();

    typedef s32 (Unk_020e2824::*Fn)();

    /* 0x44 */ u32 unk_44;
    /* 0x48 */ u8 pad_48[0x9c - 0x48];
    /* 0x9c */ u8 unk_9c;
    /* 0x9d */ u8 unk_9d;
    /* 0x9e */ u8 pad_9e[0xb8 - 0x9e];
    /* 0xb8 */ void *unk_b8;
    /* 0xbc */ void *unk_bc;
    /* 0xc0 */ u8 pad_c0[0xd4 - 0xc0];
    /* 0xd4 */ u8 unk_d4;
    /* 0xd5 */ u8 pad_d5[0xeb - 0xd5];
    /* 0xeb */ u8 unk_eb[0x12];
    /* 0xfd */ u8 unk_fd;
    /* 0xfe */ u8 unk_fe;
    /* 0xff */ u8 unk_ff[4];
    /* 0x103 */ u8 unk_103[4];
    /* 0x107 */ u8 unk_107;
    /* 0x108 */ u8 unk_108;
    /* 0x109 */ Unk_020e2824_Nib unk_109;
    /* 0x10a */ Unk_020e2824_Nib unk_10a;
};

s32 Unk_020e2824::func_020a1224() {
    s32 r = 0;
    if (unk_109.lo == 1 || unk_109.hi == 1) {
        r = 1;
    } else if (unk_109.hi != 0 && unk_109.lo != 0) {
        unk_10a.lo = 1;
        unk_10a.hi = 0;
        r = 4;
    } else if (unk_109.hi != 0) {
        unk_10a.lo = 1;
        unk_10a.hi = 0;
    } else if (unk_109.lo != 0) {
        unk_10a.lo = 0;
        unk_10a.hi = 1;
    } else {
        unk_10a.lo = (u8)func_020a071c();
        if (unk_10a.lo == 1) {
            unk_10a.hi = 0;
        } else {
            unk_10a.hi = 1;
        }
    }
    unk_9c = 6;
    return r;
}

s32 Unk_020e2824::func_020a12f0() {
    unk_109.lo = func_020a0b08(1);
    if (unk_109.lo == 3) {
        return 3;
    }
    unk_9c = unk_9c + 1;
    return 3;
}

s32 Unk_020e2824::func_020a1330() {
    unk_109.hi = func_020a0b08(0);
    if (unk_109.hi == 3) {
        return 3;
    }
    unk_9c = unk_9c + 1;
    return 3;
}

s32 Unk_020e2824::func_020a1374() {
    unk_109.hi = 3;
    unk_109.lo = 3;
    unk_10a.lo = 3;
    unk_10a.hi = 3;
    unk_9c = unk_9c + 1;
    return 3;
}

s32 Unk_020e2824::func_020a13c4() {
    s32 r = 0;
    static Fn tbl[4] = {&Unk_020e2824::func_020a1374, &Unk_020e2824::func_020a1330, &Unk_020e2824::func_020a12f0,
                        &Unk_020e2824::func_020a1224};
    if (tbl[unk_9c] != 0) {
        r = (this->*tbl[unk_9c])();
    }
    if (r != 3) {
        unk_9c = 0;
        return r;
    }
    return 3;
}

void Unk_020e2824::func_020a1464(u32 i, u8 v) {
    unk_103[i] = v;
}

u32 Unk_020e2824::func_020a1470(u32 i) {
    return unk_103[i];
}

void Unk_020e2824::func_020a147c(u32 i, u8 v) {
    unk_ff[i] = v;
}

u32 Unk_020e2824::func_020a1484(u32 i) {
    return unk_ff[i];
}

u32 Unk_020e2824::func_020a148c() {
    return unk_fe;
}

void Unk_020e2824::func_020a1494() {
    func_02116048(unk_bc, data_021e7f8c, 0x84c);
}

namespace Unk_020a14ac_Ns {
extern "C" s32 func_02116048(const void *src, void *dst, u32 size);
}

void Unk_020e2824::func_020a14ac() {
    u8 *const g = data_021e7f8c;
    func_0208f174(g);
    Unk_020a14ac_Ns::func_02116048(g, unk_bc, 0x84c);
}

extern "C" void func_020a14d8(void) {
    void *o = func_0209750c();
    func_02116048(o, (void *)func_020974a0(data_020e24ec), 0x228c);
}

void Unk_020e2824::vfunc_18() {
}

void Unk_020e2824::vfunc_14() {
    void *o = func_02067918(0);
    switch (((u8 *)unk_04)[0x1a]) {
    case 0xa:
        func_02067a78(o);
        break;
    case 8:
        func_02067a84(o, data_021edb5c, 0);
        break;
    case 0x27:
        func_02067a84(o, data_021edb5c, 0);
        break;
    case 0x26:
        func_02067a78(o);
        func_020a3ebc((void *)unk_44, 0x1e);
        break;
    case 0x69:
        func_02067a84(o, data_021edb5c, 0);
        break;
    }
}

void Unk_020e2824::func_020a1574(u32 v) {
    unk_44 = v;
}

Unk_020e2824::~Unk_020e2824() {
}

Unk_020e2824::Unk_020e2824() {
}

BOOL Unk_020e2824::func_020a15c8(u32 v) {
    void *o = func_02067918(0);
    if (((u32 *)o)[1] == 2) {
        if (v != 0) {
            func_0206799c(o, 1);
        } else {
            func_0206799c(o, 0);
        }
        return TRUE;
    }
    return FALSE;
}

void Unk_020e2824::func_020a15f8() {
    void *o = func_02067918(0);
    func_02067990(o);
    func_02067a6c(o);
}

void Unk_020e2824::func_020a1614() {
    u8 b;
    void *o = func_02067918(0);
    func_02067990(o);
    func_02067a6c(o);
    b = 0xb;
    func_02067a84(o, &b, data_020e2934);
}

void Unk_020e2824::func_020a1648() {
    u8 b;
    void *o = func_02067918(0);
    func_02067990(o);
    func_02067a6c(o);
    b = 0xa;
    func_02067a84(o, &b, data_020e2934);
}

void Unk_020e2824::func_020a167c() {
    switch (unk_9d) {
    case 0:
        if (func_02073090(1)) {
            func_0207312c();
        } else if (func_02074894()) {
            unk_9d = 1;
        }
        break;
    case 1:
        if (func_02073090(1)) {
            func_0207312c();
        } else if (func_02074860(&unk_d4)) {
            unk_d4 = 0;
            unk_9d = 2;
        }
        break;
    case 2:
        if (func_02073090(1)) {
            func_0207312c();
        } else if (func_02074828(&unk_d4)) {
            unk_d4 = 0;
            unk_9d = 3;
        }
        break;
    case 3:
        if (func_02073090(1)) {
            func_0207312c();
        } else if (func_020747c0()) {
            unk_9d = 4;
        }
        break;
    case 4:
        if (func_02073090(1)) {
            func_0207312c();
        } else if (func_020eaca0(func_020720f8())) {
            func_0208a570()->func_0208aa30();
            func_02116048(func_0209750c(), unk_b8, 0x228c);
            func_02098a58(func_0209750c());
            func_0209df30(data_021d7350, func_020974f8());
            unk_9d = 5;
        }
        break;
    case 5:
        if (func_02073090(1)) {
            func_0207312c();
        } else {
            s32 r = func_020a13c4();
            if (r == 1) {
                unk_9d = 0xb;
            } else if (r != 3) {
                data_020cbb18->func_02072368(2);
                unk_9d = 6;
            }
        }
        break;
    case 6: {
        func_02073090(1);
        s32 r = func_020a1158(unk_10a.hi);
        if (r == 1) {
            data_020cbb18->func_02072368(0);
            unk_9d = 0xb;
        } else if (r == 0) {
            unk_9d = 7;
        }
        break;
    }
    case 7:
        if (func_02073090(1)) {
            func_0209eb74(data_021ed32c);
            unk_9d = 0xa;
        } else if (func_02074b58(1, 1)) {
            unk_9d = 8;
        }
        break;
    case 8:
        if (func_02073090(1)) {
            func_0209eb74(data_021ed32c);
            unk_9d = 0xa;
        } else if (func_020eaca0(func_020720f8())) {
            u32 t = unk_eb[0];
            if (t == 1) {
                data_020cbb18->func_02072368(0);
                unk_9d = 9;
            } else if (t == 2) {
                func_0209eb74(data_021ed32c);
                unk_9d = 0xa;
            }
        }
        break;
    case 9:
        if (func_0209f000(this)) {
            func_0209f1c4();
        }
        func_02116048(unk_b8, func_0209750c(), 0x228c);
        func_0208a570()->func_0208aa28();
        unk_9d = 0x16;
        break;
    case 10: {
        func_02073090(1);
        s32 r = func_020a1158(unk_10a.hi);
        if (r == 1) {
            data_020cbb18->func_02072368(0);
            unk_9d = 0xb;
        } else if (r == 0) {
            data_020cbb18->func_02072368(0);
            unk_9d = 0x11;
        }
        break;
    }
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
        func_0209f898(this, &unk_9d, 0xb, 0x11, 1, 1);
        break;
    default:
        func_020a3ebc(this, 0);
        break;
    }
}

void Unk_020e2824::func_020a1950() {
    func_020eaf90(func_02097ff4(func_0209750c(), 2));
    func_02073348();
    unk_9d = 0;
}

void Unk_020e2824::func_020a1974() {
    switch (unk_9d) {
    case 0:
        if (func_02073090(-1)) {
            func_0207312c();
        } else if (func_020a15c8(0)) {
            unk_9d = 1;
        }
        break;
    case 1:
        if (func_02073090(-1)) {
            func_0207312c();
        } else {
            s32 r = func_020a0210();
            if (r > 0) {
                if (r < 4) {
                    unk_9d = 2;
                }
            }
        }
        break;
    case 2:
        if (func_02073090(-1)) {
            func_0207312c();
        } else if (unk_fd != 0) {
            if (unk_107 == 0) {
                func_0209d70c(data_021d7350, 5);
                func_0209d624(data_021d7350);
            } else {
                func_0209e148(data_021d7350, 0x12);
            }
            func_0203ca94();
            unk_9d = 3;
        }
        break;
    case 3:
        if (func_02073090(-1)) {
            func_0207312c();
        } else {
            s32 r = func_020a1158(2);
            if (r == 1) {
                unk_9d = 0xb;
            } else if (r == 0) {
                unk_9d = 4;
            }
        }
        break;
    case 4:
        if (func_02073090(-1)) {
            func_0207312c();
        } else {
            s32 r = func_020a13c4();
            if (r == 1) {
                unk_9d = 0xb;
            } else if (r != 3) {
                func_0209eb74(data_021ed32c);
                unk_9d = 5;
            }
        }
        break;
    case 5:
        if (func_02073090(-1)) {
            func_0207312c();
        } else {
            s32 r = func_020a1158(unk_10a.hi);
            if (r == 1) {
                unk_9d = 0xb;
            } else if (r == 0) {
                unk_9d = 6;
            }
        }
        break;
    case 6:
        if (func_02073090(-1)) {
            func_0207312c();
        } else {
            u32 t = unk_eb[func_020a0210()];
            if (t == 1) {
                func_0209eb6c(data_021ed32c);
                unk_eb[func_020a0210()] = 0;
                data_020cbb18->func_02072368(2);
                unk_9d = 7;
            } else if (t == 2) {
                unk_9d = 0x11;
            }
        }
        break;
    case 7: {
        func_02073090(-1);
        s32 r = func_020a1158(unk_10a.hi);
        if (r == 1) {
            data_020cbb18->func_02072368(0);
            unk_9d = 0xb;
        } else if (r == 0) {
            unk_9d = 8;
        }
        break;
    }
    case 8:
        if (func_02073090(-1)) {
            func_0209eb74(data_021ed32c);
            unk_9d = 0xa;
        } else {
            s32 i = func_020a0210();
            if (func_02074b58(1, (u16)(1 << i))) {
                data_020cbb18->func_02072368(0);
                unk_9d = 9;
            }
        }
        break;
    case 9: {
        u32 m = func_020eaf28();
        if ((m & (1 << func_020a0210())) == 0) {
            if (func_0209f000(this)) {
                func_0209f1c4();
            }
            unk_9d = 0x16;
        }
        break;
    }
    case 10: {
        func_02073090(-1);
        s32 r = func_020a1158(unk_10a.hi);
        if (r == 1) {
            data_020cbb18->func_02072368(0);
            unk_9d = 0xb;
        } else if (r == 0) {
            data_020cbb18->func_02072368(0);
            unk_9d = 0x11;
        }
        break;
    }
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 21: {
        s32 i = func_020a0210();
        func_0209f898(this, &unk_9d, 0xb, 0x11, (u16)(1 << i), 1);
        break;
    }
    default:
        func_020a15f8();
        func_020a3ebc(this, 0xe);
        break;
    }
}
