#include "types.h"
#include "Unk_020d8c7c.h"

struct Unk_ov073_Vec {
    s32 x, y, z;
};

class Unk_ov073_022724c0;

extern "C" {
extern u16 data_020c6cc8;
extern Unk_ov073_Vec data_021f4880;
extern u8 data_021c7c88[];
extern u8 data_021ed29c[];
extern u8 data_021d7350[];
extern u8 data_0213a740[];
extern char data_ov073_022723d0[];
extern u8 data_ov073_0227220c[];
extern u32 data_ov073_02272208[];

s32 func_02098ffc(void);
s32 func_020aa514(void);
s32 func_0208653c(void *p);
void func_0208a598(void);
void func_0208a58c(void);
s32 func_0201ade4(s32 a, s32 b);
void func_0201adc8(s32 a, s32 b);
void func_02015958(void *p, s32 a, s32 b, s32 c, s32 d, s32 e);
void func_02014e60(void *p, u16 *q, s32 a, s32 b, s32 c);
void func_02067a84(void *obj, void *buf, const char *name);
s32 func_0209e170(void *p, s32 n);
void func_0209e148(void *p, s32 n);
s32 func_02099014(u16 *p, s32 a);
void func_02098f30(void *buf, s32 (*cb)(u16 *));
s32 func_0206ed18(void);
s32 func_0206e8e8(void);
s32 func_0202e1cc(s32 a, s32 b);
s32 func_0203d67c(void *p);
u32 func_0201bc4c(void *p, s32 n);
u32 func_0201bcbc(void *p, void *q);
void func_02015ab0(void *p, u32 a);
void func_020141b4(void *p, s32 a, s32 b, s32 c);
s32 func_02014220(void *p);
void func_020196b4(void *p, s32 a, s32 b, s32 c, s32 s0, s32 s1, s32 s2, s32 s3, s32 s4, s32 s5, s32 s6);
s32 func_02019790(void *p);
s32 func_020197a8(void *p);
s32 func_0201acfc(void *p);
Unk_ov073_Vec *func_0201a978(void *p);
s32 func_02002bdc(void *a, void *b);
s32 func_0201bd84(s16 a);
u32 func_02063b8c(u32 n);
void func_020e7518(void *p);
s32 func_020e7fa8(void *p);
void func_020135bc(void *p);
}

// Library base; ctor and dtor are out of line.
class Unk_020d7714 {
public:
    Unk_020d7714();
    virtual ~Unk_020d7714();
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
    virtual void vfunc_38(void *p);
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
    virtual void vfunc_78(void *out);
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();

    void func_02015a5c();
    void *func_02015aac();
    void func_02015ab0(u32 a);
    void func_02015170(u32 a, u32 b);
    void func_020151d0(s32 a);

    /* 0x04 */ u8 pad_04[0x1a];
    /* 0x1e */ u8 unk_1e;
    /* 0x1f */ u8 pad_1f[0x1d];
    /* 0x3c */ void *unk_3c;
    /* 0x40 */ u8 pad_40[0x6c];
};

class Unk_020d8b38 : public Unk_020d7714 {
public:
    Unk_020d8b38();
    virtual ~Unk_020d8b38();
};

struct Unk_ov073_Out {
    const char *unk_00;
    u8 unk_04;
};

class Unk_ov073_02272430 : public Unk_020d8b38 {
public:
    typedef void (Unk_ov073_02272430::*Fn)();

    Unk_ov073_02272430();
    virtual ~Unk_ov073_02272430();
    virtual void vfunc_08();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_78(void *out);
    virtual void vfunc_84();

    void func_02271720(s32 v);
    BOOL func_02271754();
    void func_0227188c();
    void func_02271910(s32 i);

    /* 0xac */ s32 unk_ac;
    /* 0xb0 */ s32 unk_b0;
    /* 0xb4 */ Fn unk_b4;
    /* 0xbc */ s32 unk_bc;
    /* 0xc0 */ s32 unk_c0;
    /* 0xc4 */ u8 unk_c4;
};

// Base of the owner; its dtor is out of line.
class Unk_020d8bc8 : public Unk_020d8c7c_Base {
public:
    virtual ~Unk_020d8bc8();

    /* 0x004 */ u8 pad_004[0x58];
    /* 0x05c */ Unk_ov073_Vec unk_5c;
    /* 0x068 */ u8 pad_068[0x26];
    /* 0x08e */ s16 unk_8e;
    /* 0x090 */ u8 pad_090[8];
    /* 0x098 */ u32 unk_98;
    /* 0x09c */ u8 pad_09c[0x350 - 0x9c];
    /* 0x350 */ u8 unk_350[0x3aa - 0x350];
    /* 0x3aa */ u8 unk_3aa[0x558 - 0x3aa];
    /* 0x558 */ u8 unk_558[0x564 - 0x558];
    /* 0x564 */ u8 unk_564[0x618 - 0x564];
    /* 0x618 */ u8 unk_618[0x651 - 0x618];
    /* 0x651 */ u8 unk_651;
    /* 0x652 */ u8 pad_652[2];
    /* 0x654 */ s32 unk_654;
};

class Unk_ov073_022724c0 : public Unk_020d8bc8 {
public:
    virtual ~Unk_ov073_022724c0();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(s32 a);

    BOOL func_022719a0();
    BOOL func_022719a4();
    BOOL func_022719e0();
    BOOL func_022719e4();
    BOOL func_02271a14();
    BOOL func_02271a18();
    BOOL func_02271a34();
    BOOL func_02271a84();

    BOOL func_02271ccc();
    BOOL func_02271e2c(Unk_ov073_Vec *a, s32 *b);
    BOOL func_02271ebc();
    void func_02271fcc(s32 state);

    /* 0x658 */ Unk_ov073_02272430 unk_658;
};

extern "C" s32 func_ov073_02271804(u16 *p);

// ---------------------------------------------------------------------------------------------------------------------
Unk_ov073_022724c0::~Unk_ov073_022724c0() {}

void Unk_ov073_022724c0::vfunc_4c(s32 a) {
    switch (a) {
    case 0:
        func_02271fcc(0);
        break;
    case 3:
        unk_658.vfunc_08();
        unk_658.func_02015ab0(func_0201bc4c(this, 4));
        func_02271fcc(4);
        break;
    case 8:
        func_02271fcc(2);
        break;
    }
}

BOOL Unk_ov073_022724c0::vfunc_48() {
    BOOL r = FALSE;
    if (func_02014220(unk_618) == 0) {
        r = TRUE;
    }
    return r;
}

void Unk_ov073_02272430::vfunc_18() {
    u8 buf[2];
    u16 a, b, c;
    s32 res;
    s32 cmd;
    const char *str;
    func_02015a5c();
    res = func_020aa514();
    str = data_ov073_022723d0;
    cmd = 0xff;
    switch (unk_1e) {
    case 0:
        break;
    case 1:
        if (res == 0) {
            cmd = 6;
        } else {
            cmd = 2;
        }
        break;
    case 3:
        if (res == 0) {
            func_02015958(this, func_0208653c(data_021ed29c), 0, 10, 1, 0);
            cmd = 0x10;
        } else if (res == 1) {
            cmd = 0x17;
        }
        break;
    case 8:
        if (res == 0) {
            cmd = 9;
        }
        break;
    case 10:
        if (res == 0) {
            cmd = 0xb;
        }
        break;
    case 12:
        if (res == 0) {
            cmd = 0xd;
        }
        break;
    case 16:
        if (res == 0) {
            cmd = 0x12;
        } else if (res == 1) {
            cmd = 7;
        }
        break;
    case 19:
        if (res == 0) {
            s32 t = func_02098ffc();
            if (func_0201ade4(unk_b0, unk_bc) == 0) {
                cmd = 0x1b;
            } else if (t < 0) {
                cmd = 0x1c;
            } else if (func_02271754() == 0) {
                cmd = 0x14;
            } else {
                func_0201adc8(unk_b0, unk_bc);
                a = 0x1531;
                func_02014e60(this, &a, 0, 5, 0);
                unk_c4 = 0;
                cmd = 0x15;
            }
        }
        break;
    case 23:
        if (res == 0) {
            if (func_0209e170(data_021d7350, 4)) {
                cmd = 0x18;
            } else {
                func_0208a598();
                cmd = 0x19;
            }
        }
        break;
    case 25:
        if (res == 0) {
            if (func_0201ade4(unk_b0, 0x3e8) == 0) {
                cmd = 0x1b;
            } else {
                b = 0x1567;
                if (func_02099014(&b, 0)) {
                    cmd = 0x15;
                    func_0201adc8(unk_b0, 0x3e8);
                    func_0209e148(data_021d7350, 4);
                    unk_c4 = 1;
                    c = 0x1567;
                    func_02014e60(this, &c, 0, 5, 0);
                } else {
                    cmd = 0x1c;
                }
            }
        }
        break;
    }
    if (cmd != 0xff) {
        buf[0] = cmd;
        func_02067a84(unk_3c, buf, str);
    }
}

void Unk_ov073_02272430::vfunc_14() {
    u8 buf[2];
    s32 cmd;
    const char *str = data_ov073_022723d0;
    cmd = 0xff;
    switch (unk_1e) {
    case 0x12:
        func_0208a598();
        func_02015170(0x3a, 0);
        func_020151d0(2);
        func_02271910(0);
        break;
    case 0x15:
        if (unk_c4 != 0) {
            cmd = 0x1a;
        } else {
            cmd = 0x16;
        }
        break;
    }
    if (cmd != 0xff) {
        buf[0] = cmd;
        func_02067a84(unk_3c, buf, str);
    }
}

void Unk_ov073_02272430::vfunc_78(void *p) {
    Unk_ov073_Out *out = (Unk_ov073_Out *)p;
    if (unk_ac == 0) {
        if (func_0202e1cc(3, 1)) {
            unk_ac = 1;
        }
    }
    if (unk_ac >= 0 && unk_ac < 3) {
        out->unk_04 = data_ov073_0227220c[unk_ac * 8];
        out->unk_00 = (const char *)*(u32 *)((u8 *)data_ov073_02272208 + unk_ac * 8);
    }
}

void Unk_ov073_02272430::func_02271720(s32 v) {
    vfunc_08();
    unk_b0 = v;
    unk_ac = 0;
    unk_bc = 0;
    unk_c0 = 0;
    unk_c4 = 0;
}

BOOL Unk_ov073_02272430::func_02271754() {
    s32 n = 0;
    s32 t = func_02098ffc();
    s32 i = 0;
    s32 m;
    u8 buf[8];
    u16 a, b;
    for (; i < 10; i++) {
        if (unk_c0 >= 10) {
            unk_c0 = unk_c0 - 10;
            n++;
        }
    }
    m = n;
    if (unk_c0 != 0) {
        m = n + 1;
    }
    func_02098f30(buf, func_ov073_02271804);
    if (t < 0 || buf[2] < m) {
        return FALSE;
    }
    while (n > 0) {
        a = 0x153a;
        func_02099014(&a, 0);
        n--;
    }
    if (unk_c0 > 0) {
        unk_c0 = unk_c0 - 1;
        b = unk_c0 + 0x1531;
        func_02099014(&b, 0);
    }
    return TRUE;
}

extern "C" s32 func_ov073_02271804(u16 *p) {
    if (*p == 0xfff1) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov073_02272430::vfunc_08() {
    Unk_020d7714::vfunc_08();
    unk_b4 = *(Fn *)data_0213a740;
}

Unk_ov073_02272430::~Unk_ov073_02272430() {}

Unk_ov073_02272430::Unk_ov073_02272430() {}

void Unk_ov073_02272430::func_0227188c() {
    void *obj = unk_3c;
    u8 buf[2];
    buf[0] = 0x11;
    if (func_0206ed18()) {
        s32 a = func_0206e8e8() * 10;
        unk_c0 = func_0206e8e8();
        unk_bc = a * func_0208653c(data_021ed29c);
        func_02015958(this, a, 1, 3, 1, 0);
        func_02015958(this, unk_bc, 2, 10, 1, 0);
        buf[0] = 0x13;
    }
    func_02067a84(obj, buf, data_ov073_022723d0);
}

void Unk_ov073_02272430::func_02271910(s32 i) {
    static Fn tbl[1] = { (Fn)0 };
    unk_b4 = tbl[i];
}

void Unk_ov073_02272430::vfunc_84() {
    if (unk_b4) {
        (this->*unk_b4)();
        unk_b4 = *(Fn *)data_0213a740;
    }
}

BOOL Unk_ov073_022724c0::func_022719a0() {
    return TRUE;
}

BOOL Unk_ov073_022724c0::func_022719a4() {
    void *p = unk_658.func_02015aac();
    s32 x = unk_8e;
    if (p != NULL) {
        x = func_0201bcbc(this, p);
    }
    func_020141b4(unk_618, 0, x, 0);
    return TRUE;
}

BOOL Unk_ov073_022724c0::func_022719e0() {
    return TRUE;
}

BOOL Unk_ov073_022724c0::func_022719e4() {
    if (func_02014220(unk_618) == 0) {
        func_0203d67c(this);
        func_0208a58c();
        func_02271fcc(1);
    }
    return TRUE;
}

BOOL Unk_ov073_022724c0::func_02271a14() {
    return TRUE;
}

BOOL Unk_ov073_022724c0::func_02271a18() {
    if (func_02271ebc()) {
        func_02271fcc(2);
    }
    return TRUE;
}

BOOL Unk_ov073_022724c0::func_02271a34() {
    func_020196b4(unk_564, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    unk_651 = 0;
    func_020135bc(unk_558);
    return TRUE;
}

#define ZERO_CALL(p) func_020196b4(p, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0)

BOOL Unk_ov073_022724c0::func_02271a84() {
    Unk_ov073_Vec va;
    Unk_ov073_Vec vb;
    void *r4 = unk_564;
    BOOL r6 = func_02271ebc();
    func_020e7518(&unk_651);
    if (r6 != 0) {
        if (func_02271ccc() == 0) {
            if (func_02019790(r4)) {
                if (func_0201acfc(unk_3aa) == 2) {
                    ZERO_CALL(r4);
                } else if ((func_020e7fa8(data_021c7c88) & 7) == 0) {
                    va = data_021f4880;
                    if (func_02271e2c(&va, &va.z)) {
                        s32 t = func_02002bdc(&unk_5c, &va);
                        if (func_0201bd84(t - unk_8e)) {
                            u32 k = 1;
                            if (func_02063b8c(4) == 0) {
                                k = 2;
                            }
                            if (k != func_020197a8(unk_564)) {
                                func_020196b4(r4, k, 1, va.x, va.z, 0, 0, 0, 0, data_020c6cc8, 0);
                                unk_651 = 100;
                            }
                        } else if (func_020197a8(unk_564) != 4) {
                            func_020196b4(r4, 4, 1, va.x, va.z, 0, t, 0, 0, data_020c6cc8, 0);
                            unk_651 = 0x50;
                        }
                    } else {
                        ZERO_CALL(r4);
                    }
                } else {
                    ZERO_CALL(r4);
                }
            } else if (unk_98 != 0) {
                if (func_020197a8(unk_564) == 1 || func_020197a8(unk_564) == 2 || func_020197a8(unk_564) == 4) {
                    if (unk_651 == 0) {
                        ZERO_CALL(r4);
                    } else {
                        vb = *func_0201a978(unk_350);
                        s32 t = func_02002bdc(&unk_5c, &vb);
                        if (func_0201bd84(t - unk_8e) == 0) {
                            ZERO_CALL(r4);
                        }
                    }
                }
            }
        }
    } else if (unk_98 != 0) {
        func_02271fcc(3);
    }
    return FALSE;
}
