#include "types.h"
#include "Unk_020d8c7c.h"

class Unk_ov004_0224cb98;
class Unk_ov004_0224cb08;

typedef BOOL (Unk_ov004_0224cb98::*Unk_ov004_0224cb98_BFn)();
typedef void (Unk_ov004_0224cb98::*Unk_ov004_0224cb98_VFn)();

struct Unk_ov004_0221a650_Msg {
    u32 unk_00;
    s32 unk_04;
    u32 unk_08;
    u32 unk_0c;
    u32 unk_10;
    u32 unk_14;
};

struct Unk_ov004_0221af1c_Out {
    u32 unk_00;
    u8 unk_04;
};

struct Unk_ov004_0221a7d4_Vec {
    s32 x, y, z;
};

extern "C" {
extern u16 data_020c6cc8;
extern u32 data_021f4768;
extern u8 data_021dfd8c[];
extern u8 data_021edb60[];
extern u8 data_ov004_02250984[];
extern u8 data_ov004_0225095c[];
extern u8 data_ov004_0224cc58[];
extern u8 data_ov004_0224cc64[];
extern u8 data_ov004_0224cc70[];
extern u8 data_ov004_0224cc7c[];

void *func_020679b4(void *);
s32 func_020aa514(void *);
void func_020aa680(void *, s32, s32);
void func_020aa638(void *, s32, u8 *, s32, u8 *, s32, s32);
void func_020aa608(void *);
void func_020679c0(void *, s32);
s32 func_02067a84(void *, u8 *, u8 *);
void *func_020805c4(void *);
void func_0200301c(void *, u8 *, s32, u8 *);
s32 func_0206ea84(void *);
s32 func_0206ead4(s32, u32);
s32 func_0203d67c(void *);
void *func_02095204(u32);
s32 func_0201bcbc(void *, void *);
void func_020141b4(void *, u32, s32, u32);
s32 func_02019638(void *, u32, u32, u32);
s32 func_02019614(void *, u32, u32);
s32 func_020197a8(void *);
s32 func_02019790(void *);
s32 func_020196b4(void *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
void func_0201c3e8(void *, void *);
s32 func_0201bb3c(void *, void *);
void func_0201a9ec(void *, void *);
s32 func_020e96ec(void *, void *);
s32 func_020e9650(void *, void *);
s32 func_02063b8c(s32);
u16 func_ov004_02216ba4(void *, void *, s32);
void *func_0207a4b8(void *);
void *func_02099700(void *);
void func_020157e8(void *, void *, s32);
s32 func_0200402c(s32);
BOOL func_ov004_0221b3f8(u16 *p, s32 x);
BOOL func_ov004_0221b0c0(void *o);
}

class Unk_020d8938 {
public:
    Unk_020d8938();
    virtual ~Unk_020d8938();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void vfunc_10();
    virtual void vfunc_14();
    virtual s32 vfunc_18();
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
    virtual void vfunc_78(Unk_ov004_0221af1c_Out *out);
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84(u32 a);

    u8 pad_04[0x1e - 4];
    u8 unk_1e;
    u8 pad_1f[0x3c - 0x1f];
    void *unk_3c;
    u8 pad_40[0x1a0 - 0x40];
};

class Unk_020d89c8 : public Unk_020d8c7c_Base {
public:
    Unk_020d89c8();
    virtual ~Unk_020d89c8();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(u32 idx, u32 v);
    virtual void vfunc_50();
    virtual void vfunc_54();
    virtual void vfunc_58();
    virtual void vfunc_5c();
    virtual void vfunc_60();
    virtual void vfunc_64();
    virtual BOOL vfunc_68();

    /* 0x004 */ u8 pad_04[0x58];
    /* 0x05c */ s32 unk_5c;
    /* 0x060 */ s32 unk_60;
    /* 0x064 */ s32 unk_64;
    /* 0x068 */ u8 pad_68[0x8e - 0x68];
    /* 0x08e */ s16 unk_8e;
    /* 0x090 */ u8 pad_90[0x350 - 0x90];
    /* 0x350 */ u8 unk_350[0x60];
    /* 0x3b0 */ u8 pad_3b0[0x508 - 0x3b0];
    /* 0x508 */ u8 unk_508;
    /* 0x509 */ u8 pad_509[0x564 - 0x509];
    /* 0x564 */ u8 unk_564[0xb4];
    /* 0x618 */ u8 unk_618[0x28];
    /* 0x640 */ u8 pad_640[0x82c - 0x640];
    /* 0x82c */ void *unk_82c;
    /* 0x830 */ u8 pad_830[8];
    /* 0x838 */ u8 unk_838[0x5b];
    /* 0x893 */ u8 unk_893;
};

class Unk_ov004_0224cb08 : public Unk_020d8938 {
public:
    Unk_ov004_0224cb08() {}
    virtual void vfunc_10();
    virtual void vfunc_14();
    virtual s32 vfunc_18();
    virtual void vfunc_78(Unk_ov004_0221af1c_Out *out);

    u8 func_ov004_0221b0e4();

    /* 0x1a0 */ u8 unk_1a0;
    /* 0x1a1 */ u8 pad_1a1[3];
    /* 0x1a4 */ Unk_ov004_0224cb98 *unk_1a4;
};

class Unk_ov004_0224cb98 : public Unk_020d89c8 {
public:
    virtual ~Unk_ov004_0224cb98();

    BOOL func_ov004_0221ab40(s32 s);
    void func_ov004_0221aa7c();

    void func_ov004_0221a638();
    BOOL func_ov004_0221a644();
    void func_ov004_0221a648();
    BOOL func_ov004_0221a64c();
    void func_ov004_0221a650();
    BOOL func_ov004_0221a684();
    void func_ov004_0221a694();
    BOOL func_ov004_0221a6b4();
    void func_ov004_0221a6b8();
    BOOL func_ov004_0221a6c4();
    void func_ov004_0221a6f8();
    BOOL func_ov004_0221a6fc();
    void func_ov004_0221a72c();
    BOOL func_ov004_0221a7a0();
    void func_ov004_0221a7d4();
    BOOL func_ov004_0221aa60();

    /* 0x894 */ u8 unk_894;
    /* 0x895 */ u8 unk_895;
    /* 0x896 */ u8 pad_896[2];
    /* 0x898 */ u32 unk_898;
    /* 0x89c */ Unk_ov004_0224cb08 unk_89c;
    /* 0xa44 */ Unk_ov004_0224cb98_BFn unk_a44;
    /* 0xa4c */ u8 pad_a4c[0xa6c - 0xa4c];
    /* 0xa6c */ s16 unk_a6c;
    /* 0xa6e */ u16 unk_a6e;
    /* 0xa70 */ Unk_ov004_0221a7d4_Vec unk_a70;
    /* 0xa7c */ Unk_ov004_0221a7d4_Vec unk_a7c;
    /* 0xa88 */ u8 unk_a88;
};

// ---------------------------------------------------------------------------------------------------------------------
void Unk_ov004_0224cb98::func_ov004_0221a638() {
    func_ov004_0221ab40(4);
}
BOOL Unk_ov004_0224cb98::func_ov004_0221a644() { return TRUE; }
void Unk_ov004_0224cb98::func_ov004_0221a648() {}
BOOL Unk_ov004_0224cb98::func_ov004_0221a64c() { return TRUE; }

void Unk_ov004_0224cb98::func_ov004_0221a650() {
    Unk_ov004_0221a650_Msg *m = (Unk_ov004_0221a650_Msg *)unk_89c.unk_3c;
    if (m->unk_04 == 5) {
        if (func_0206ead4(func_0206ea84((void *)func_ov004_0221b3f8), 0xd) != 0) {
            func_ov004_0221ab40(6);
        }
    }
}

BOOL Unk_ov004_0224cb98::func_ov004_0221a684() {
    ((Unk_ov004_0221a650_Msg *)unk_89c.unk_3c)->unk_14 = 1;
    return TRUE;
}

void Unk_ov004_0224cb98::func_ov004_0221a694() {
    Unk_ov004_0221a650_Msg *o = (Unk_ov004_0221a650_Msg *)unk_89c.unk_3c;
    if (o != 0) {
        if (o->unk_04 == 0) {
            func_0203d67c(this);
        }
    }
}

BOOL Unk_ov004_0224cb98::func_ov004_0221a6b4() { return TRUE; }

void Unk_ov004_0224cb98::func_ov004_0221a6b8() {
    func_ov004_0221ab40(4);
}

BOOL Unk_ov004_0224cb98::func_ov004_0221a6c4() {
    BOOL r;
    void *o = func_02095204(4);
    if (o != 0) {
        func_020141b4(unk_618, 0, func_0201bcbc(this, o), 0);
        r = TRUE;
    } else {
        r = FALSE;
    }
    return r;
}

void Unk_ov004_0224cb98::func_ov004_0221a6f8() {}

BOOL Unk_ov004_0224cb98::func_ov004_0221a6fc() {
    if (unk_898 == 1) {
        func_02019638(unk_564, 2, 0, data_020c6cc8);
    }
    return TRUE;
}

void Unk_ov004_0224cb98::func_ov004_0221a72c() {
    switch (unk_a88) {
    case 0x45:
        func_02019638(unk_564, 1, 7, data_020c6cc8);
        break;
    case 1:
        func_02019638(unk_564, 1, 0, data_020c6cc8);
        unk_a6e = func_02063b8c(0x14) + 0x14;
        break;
    case 0:
        if (func_ov004_0221ab40(0)) {
            return;
        }
        break;
    }
    if (unk_a88 != 0) {
        unk_a88--;
    }
}

BOOL Unk_ov004_0224cb98::func_ov004_0221a7a0() {
    if (func_02019614(unk_564, 1, data_020c6cc8)) {
        unk_a88 = 0x46;
        return TRUE;
    }
    return FALSE;
}

void Unk_ov004_0224cb98::func_ov004_0221a7d4() {
    Unk_ov004_0221a7d4_Vec v;
    if (unk_893 != 0) {
        if (func_020197a8(unk_564) == 1) {
            if (data_021f4768 % 14 == 0) {
                func_0201c3e8(unk_838, this);
            }
        }
    }
    if (unk_508 != 0) {
        if (func_020197a8(unk_564) == 1) {
            if (func_ov004_0221ab40(1)) {
                return;
            }
        }
    }
    if (func_020197a8(unk_564) == 0) {
        if (unk_a6e != 0) {
            unk_a6e--;
        }
        if (unk_a6e == 0) {
            unk_a6c = func_ov004_02216ba4(&unk_a7c, (u8 *)this + 0x5c, unk_8e);
            unk_a70.x = unk_a7c.x;
            unk_a70.y = unk_a7c.y;
            unk_a70.z = unk_a7c.z;
            if (unk_a6c != unk_8e) {
                if (func_020196b4(unk_564, 3, 1, 0, 0, 0, unk_a6c, 0, 0, data_020c6cc8, 0) == 0) {
                    return;
                }
                if (unk_893 != 0) {
                    unk_a6e = func_02063b8c(0x46) + 0x32;
                } else {
                    unk_a6e = func_02063b8c(0x46) + 0x14;
                }
            } else {
                if (func_020196b4(unk_564, 1, 1, unk_a7c.x, unk_a7c.z, 0, 0, 0, 0, data_020c6cc8, 0) == 0) {
                    return;
                }
                if (unk_893 != 0) {
                    unk_a6e = func_02063b8c(0x46) + 0x32;
                } else {
                    unk_a6e = func_02063b8c(0x50) + 0x14;
                }
            }
        } else {
            if (func_02019790(unk_564) != 0) {
                func_02019614(unk_564, 1, data_020c6cc8);
            }
        }
    } else {
        if (func_020197a8(unk_564) == 3) {
            if (func_02019790(unk_564) != 0) {
                func_020196b4(unk_564, 1, 1, unk_a7c.x, unk_a7c.z, 0, 0, 0, 0, data_020c6cc8, 0);
            }
        } else if (func_020197a8(unk_564) == 1) {
            switch (func_0201bb3c(this, &v)) {
            case 1:
                func_02019614(unk_564, 1, data_020c6cc8);
                break;
            case 2:
                unk_a70 = v;
                func_0201a9ec(unk_350, &unk_a70);
                break;
            default:
                if (func_020e96ec(&unk_a70, &unk_a7c) != 0) {
                    unk_a70 = unk_a7c;
                    func_0201a9ec(unk_350, &unk_a7c);
                } else if (func_020e9650(&unk_a7c, (u8 *)this + 0x5c) < 0x200) {
                    func_ov004_0221ab40(1);
                }
                break;
            }
        }
    }
}

BOOL Unk_ov004_0224cb98::func_ov004_0221aa60() {
    return func_02019614(unk_564, 1, data_020c6cc8);
}

void Unk_ov004_0224cb98::func_ov004_0221aa7c() {
    static Unk_ov004_0224cb98_VFn tbl[8] = {
        &Unk_ov004_0224cb98::func_ov004_0221a7d4, &Unk_ov004_0224cb98::func_ov004_0221a72c,
        &Unk_ov004_0224cb98::func_ov004_0221a6f8, &Unk_ov004_0224cb98::func_ov004_0221a6b8,
        &Unk_ov004_0224cb98::func_ov004_0221a694, &Unk_ov004_0224cb98::func_ov004_0221a650,
        &Unk_ov004_0224cb98::func_ov004_0221a648, &Unk_ov004_0224cb98::func_ov004_0221a638,
    };
    s32 s = unk_898;
    if (s < 8) {
        (this->*tbl[s])();
    }
}

BOOL Unk_ov004_0224cb98::func_ov004_0221ab40(s32 s) {
    static Unk_ov004_0224cb98_BFn tbl[8] = {
        &Unk_ov004_0224cb98::func_ov004_0221aa60, &Unk_ov004_0224cb98::func_ov004_0221a7a0,
        &Unk_ov004_0224cb98::func_ov004_0221a6fc, &Unk_ov004_0224cb98::func_ov004_0221a6c4,
        &Unk_ov004_0224cb98::func_ov004_0221a6b4, &Unk_ov004_0224cb98::func_ov004_0221a684,
        &Unk_ov004_0224cb98::func_ov004_0221a64c, &Unk_ov004_0224cb98::func_ov004_0221a644,
    };
    if (s < 8) {
        if ((this->*tbl[s])()) {
            unk_898 = s;
            return TRUE;
        }
    }
    return FALSE;
}

s32 Unk_ov004_0224cb08::vfunc_18() {
    u8 buf[6];
    s32 t = func_020aa514(func_020679b4(unk_1a4->unk_89c.unk_3c));
    if (unk_1a4->unk_893 == 0) {
        func_0200301c(func_020805c4(unk_1a4->unk_82c), data_ov004_02250984, 0x28, data_ov004_0224cc58);
        unk_1a4->unk_895 = 1;
    } else {
        func_0200301c(func_020805c4(unk_1a4->unk_82c), data_ov004_02250984, 0x28, data_ov004_0224cc64);
        unk_1a4->unk_895 = 1;
    }
    if (unk_1a4->unk_894 == 0) {
        switch (t) {
        case 0:
            if (func_0206ea84((void *)func_ov004_0221b3f8) != 0) {
                buf[0] = func_02063b8c(3) + 7;
                func_02067a84(unk_1a4->unk_89c.unk_3c, &buf[0], data_ov004_02250984);
            } else {
                buf[1] = func_02063b8c(3) + 10;
                func_02067a84(unk_1a4->unk_89c.unk_3c, &buf[1], data_ov004_02250984);
            }
            break;
        case 1:
            buf[2] = func_02063b8c(4);
            func_02067a84(unk_1a4->unk_89c.unk_3c, &buf[2], data_ov004_02250984);
            break;
        default:
            buf[3] = func_02063b8c(3) + 4;
            func_02067a84(unk_1a4->unk_89c.unk_3c, &buf[3], data_ov004_02250984);
            break;
        }
    } else {
        if (t == 0) {
            buf[4] = func_02063b8c(3) + 0x13;
            func_02067a84(unk_1a4->unk_89c.unk_3c, &buf[4], data_ov004_02250984);
        } else {
            buf[5] = func_02063b8c(3) + 4;
            func_02067a84(unk_1a4->unk_89c.unk_3c, &buf[5], data_ov004_02250984);
        }
    }
}

void Unk_ov004_0224cb08::vfunc_14() {
    u8 b[6];
    Unk_ov004_0224cb98 *o = unk_1a4;
    if (o->unk_895 == 0) {
        switch (unk_1e) {
        case 0:
        case 1:
        case 2: {
            void *h = func_020679b4(unk_3c);
            if (h == 0) break;
            func_020aa680(h, 3, 2);
            b[0] = 0x15;
            func_020aa638(h, 0, &b[0], 0, data_021edb60, 0, 0);
            b[1] = 0x16;
            func_020aa638(h, 1, &b[1], 0, data_021edb60, 0, 0);
            b[2] = func_02063b8c(10) + 10;
            func_020aa638(h, 2, &b[2], 0, data_021edb60, 0, 0);
            func_020aa608(h);
            func_020679c0(unk_3c, 1);
            break;
        }
        case 3:
        case 4:
        case 5: {
            void *h = func_020679b4(unk_3c);
            if (h == 0) break;
            func_020aa680(h, 2, 1);
            b[3] = 0x17;
            func_020aa638(h, 0, &b[3], 0, data_021edb60, 0, 0);
            b[4] = func_02063b8c(10) + 0x78;
            func_020aa638(h, 1, &b[4], 0, data_021edb60, 0, 0);
            func_020aa608(h);
            func_020679c0(unk_3c, 1);
            break;
        }
        }
    } else {
        switch (unk_1e) {
        case 7:
        case 8:
        case 9:
            o->func_ov004_0221ab40(5);
            break;
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
            break;
        case 16:
        case 17:
        case 18:
            func_0200402c(0x5f);
            break;
        }
    }
}

void Unk_ov004_0224cb08::vfunc_10() {
    void *p = func_0207a4b8(data_021dfd8c);
    if (p != 0) {
        if (func_02099700(p) != 0) {
            func_020157e8(this, func_02099700(p), 0);
        }
    }
}

void Unk_ov004_0224cb08::vfunc_78(Unk_ov004_0221af1c_Out *out) {
    out->unk_00 = (u32)data_ov004_0225095c;
    func_ov004_0221b0e4();
    if (unk_1a4->unk_893 == 0) {
        func_0200301c(func_020805c4(unk_1a4->unk_82c), data_ov004_0225095c, 0x28, data_ov004_0224cc70);
    } else {
        func_0200301c(func_020805c4(unk_1a4->unk_82c), data_ov004_0225095c, 0x28, data_ov004_0224cc7c);
    }
    unk_1a4->unk_895 = 0;
    if (func_ov004_0221b0c0(this)) {
        out->unk_04 = func_02063b8c(3) + 3;
        unk_1a4->unk_894 = 1;
    } else {
        out->unk_04 = func_02063b8c(3);
        unk_1a4->unk_894 = 0;
    }
}
