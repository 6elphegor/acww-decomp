#include "types.h"
#include "Unk_020d8c7c.h"

class Unk_ov068_0226fb80;

struct Unk_ov068_0225f23c_Vec {
    s32 x, y, z;
};

struct Unk_ov068_02265d34_Vec2 {
    s32 a, b;
};

struct Unk_ov068_022661c8_Blk {
    u32 v[12];
};

typedef BOOL (Unk_ov068_0226fb80::*Unk_ov068_0226fb80_Fn)();

// Sub-object at +0x680 (has a vtable)
class Unk_ov068_0226fb80_Sub680 {
public:
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
    u8 pad[0x1a4 - 4];
};

// Camera object (data_021c3070); fields used by func_ov068_0226647c and friends
struct Unk_ov068_0226647c_Cam {
    /* 0x000 */ u8 pad_000[0x174];
    /* 0x174 */ s16 unk_174;
    /* 0x176 */ u8 pad_176[0x21c - 0x176];
    /* 0x21c */ s16 unk_21c;
    /* 0x21e */ s16 unk_21e;
    /* 0x220 */ u16 unk_220;
    /* 0x222 */ u16 unk_222;
    /* 0x224 */ u8 unk_224;
    /* 0x225 */ u8 unk_225;
};

struct Unk_ov068_0226647c_Row {
    u16 a;
    u16 b;
    s16 c;
    s16 pad;
    s32 d;
};

// Result of func_020951ec(4)
struct Unk_ov068_02265ee8_Obj {
    /* 0x00 */ u8 pad_00[0x5c];
    /* 0x5c */ Unk_ov068_0225f23c_Vec unk_5c;
    /* 0x68 */ u8 pad_68[0x94 - 0x68];
    /* 0x94 */ s16 unk_94;
    /* 0x96 */ u8 pad_96[2];
    /* 0x98 */ s32 unk_98;
};

extern "C" {
extern Unk_ov068_0226fb80_Fn data_ov068_0226f870;
extern u16 data_ov068_0226f0ec;
extern u16 data_020c6cc8;
extern Unk_ov068_022661c8_Blk data_021cb69c;
extern Unk_ov068_0226647c_Row data_020c8d0c[];
extern s16 data_02135f44[];

void func_ov068_0225f838(void *, ...);
s32 func_ov068_0225f83c(void *);
void func_ov068_0225f840(void *, void *);
void func_ov068_0225f8f0(void *);
void func_ov068_0225f900(void *);
void func_ov068_0225f6b0(void *);
void func_ov068_0225f670(void *, void *);
void func_ov068_02265588(void *);
void func_ov068_022656a8(void *, void *, s32);
void func_ov068_0226581c(void *);
void func_ov068_02265c24(void *);

void *func_020805c4(void *);
s32 func_020030b4(void *);
u8 *func_0207e310(void *);
s32 func_02078574(void *);
void *func_0207e268(void *);
void *func_0209a610(void *);
void func_0209d498(void *);
s32 func_0209b3b0(s32);
s32 func_0209b354(void *);
s32 func_0209b1f0(void *, void *, s32);
s32 func_0201c784(void *);
s32 func_02063b8c(s32);
void func_02078570(void *, s32);
s32 func_02014220(void *);
s32 func_02088d38(void *, s32);
void *func_020951ec(s32);
s32 func_02002bdc(void *, void *);
void *func_0209750c();
void *func_0209888c(void *);
BOOL func_02094218(void *);
BOOL func_0207f854(void *, void *);
void func_0202d864(void *, void *);
void func_02011ec0(void *, void *, void *, s32, s32);
void func_02011dfc(void *, u32, s32);
void func_02011b98(void *, s32);
void func_0207c1e8(void *);
s32 func_0207ce24(void *);
s32 func_0202d8ec(void *);
void func_02011c38(void *);
void func_020902f8(s32);
s32 func_0201b138(void *);
void func_02011bcc(void *, void *);
s32 func_0202d948(void *);
s32 func_02078234();
s32 func_0207e334(void *);
s32 func_02078294();
u32 func_0207e278(void *);
s32 func_0202dab0(void *);
void func_0201bc28(void *, void *);
s32 func_02011f08(void *, void *);
s32 func_020785ec(void *);
void func_02011f54(void *);
s32 func_020e7500(void *);
s32 func_01ffcb0c(s32, s32);
}

static inline BOOL Unk_ov068_02266320_IsZero(s32 v) {
    return v == 0 ? TRUE : FALSE;
}

// Owner base (Unk_020d89c8), size 0x894
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
    virtual BOOL vfunc_60(u16 *p);
    virtual void *vfunc_64();
    virtual BOOL vfunc_68();
    virtual void vfunc_6c();
    virtual void vfunc_70();
    virtual void vfunc_74();
    virtual void vfunc_78();
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();
    virtual void vfunc_88();
    virtual void vfunc_8c();
    virtual void vfunc_90();
    virtual void vfunc_94();
    virtual void vfunc_98();
    virtual void vfunc_9c();
    virtual void vfunc_a0();
    virtual void vfunc_a4();
    virtual BOOL vfunc_a8();
    virtual void vfunc_ac();
    virtual BOOL vfunc_b0();
    virtual BOOL vfunc_b4();
    virtual BOOL vfunc_b8(u32 idx);
    virtual BOOL vfunc_bc();

    /* 0x004 */ u8 pad_04[0x58];
    /* 0x05c */ Unk_ov068_0225f23c_Vec unk_5c;
    /* 0x068 */ u8 pad_68[0x150 - 0x68];
    /* 0x150 */ Unk_ov068_022661c8_Blk unk_150;
    /* 0x180 */ u8 pad_180[0x478 - 0x180];
    /* 0x478 */ Unk_ov068_0225f23c_Vec unk_478;
    /* 0x484 */ Unk_ov068_0225f23c_Vec unk_484;
    /* 0x490 */ Unk_ov068_0225f23c_Vec unk_490;
    /* 0x49c */ u8 pad_49c[0x4cc - 0x49c];
    /* 0x4cc */ u8 unk_4cc[0x508 - 0x4cc];
    /* 0x508 */ u8 unk_508;
    /* 0x509 */ u8 pad_509[0x561 - 0x509];
    /* 0x561 */ u8 unk_561;
    /* 0x562 */ u8 unk_562;
    /* 0x563 */ u8 pad_563[0x618 - 0x563];
    /* 0x618 */ u8 unk_618[0x10];
    /* 0x628 */ void *unk_628;
    /* 0x62c */ u8 pad_62c[0x680 - 0x62c];
    /* 0x680 */ Unk_ov068_0226fb80_Sub680 unk_680;
    /* 0x824 */ u8 pad_824[0x82c - 0x824];
    /* 0x82c */ void *unk_82c;
    /* 0x830 */ u8 pad_830[0x894 - 0x830];
};

// Vtable 0x0226fb80
class Unk_ov068_0226fb80 : public Unk_020d89c8 {
public:
    inline Unk_ov068_0226fb80() {
        func_ov068_0225f6b0(unk_894);
        func_ov068_0226581c(unk_8b4);
        func_02011f54(unk_9b0);
        func_ov068_0225f900(unk_9f0);
    }
    virtual ~Unk_ov068_0226fb80();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_24();
    virtual BOOL vfunc_60(u16 *p);
    virtual BOOL vfunc_a8();
    virtual BOOL vfunc_b0();

    void func_ov068_02265d34();
    void func_ov068_02265dc8();
    void func_ov068_02265e6c();
    BOOL func_ov068_02265ee8();
    s32 func_ov068_02265f58();
    void func_ov068_02265fb4();
    BOOL func_ov068_022661c8();

    /* 0x894 */ u8 unk_894[0x18];
    /* 0x8ac */ Unk_ov068_0226fb80_Fn unk_8ac;
    /* 0x8b4 */ u8 unk_8b4[0xfc];
    /* 0x9b0 */ u8 unk_9b0[0x3c];
    /* 0x9ec */ u8 unk_9ec;
    /* 0x9ed */ u8 pad_9ed[3];
    /* 0x9f0 */ u8 unk_9f0[4];
    /* 0x9f4 */ void *unk_9f4;
    /* 0x9f8 */ s32 unk_9f8;
    /* 0x9fc */ s32 unk_9fc;
    /* 0xa00 */ u8 unk_a00;
    /* 0xa01 */ u8 unk_a01;
    /* 0xa02 */ u16 unk_a02;
    /* 0xa04 */ u8 unk_a04;
    /* 0xa05 */ u8 unk_a05;
    /* 0xa06 */ u8 pad_a06[2];
    /* 0xa08 */ s32 unk_a08;
};

// ---------------------------------------------------------------------------------------------------------------------
void Unk_ov068_0226fb80::func_ov068_02265d34() {
    void *a = vfunc_64();
    if (a != NULL) {
        if (func_020030b4(func_020805c4(a)) != 0) {
            s32 t = func_02078574(func_0207e310(a));
            void *p = func_0209a610(func_0207e268(a));
            Unk_ov068_02265d34_Vec2 buf;
            buf.a = 0;
            buf.b = 0;
            func_0209d498(&buf);
            if (func_0209b3b0(t) != 0 || t == 8) {
                if (t == func_0209b354(p) || func_0209b1f0(p, &buf, 3) != 0) {
                    if (func_0201c784(this) != 3 && func_0201c784(this) != 4 && func_0201c784(this) != 5) {
                        return;
                    }
                }
            }
            func_ov068_02265dc8();
        }
    }
}

void Unk_ov068_0226fb80::func_ov068_02265dc8() {
    void *a = vfunc_64();
    if (a != NULL) {
        if (func_020030b4(func_020805c4(a)) != 0) {
            s32 r5 = 8;
            void *p = func_0209a610(func_0207e268(a));
            s32 r4 = func_0209b354(p);
            s32 r7 = func_02063b8c(100);
            Unk_ov068_02265d34_Vec2 buf;
            buf.a = 0;
            buf.b = 0;
            func_0209d498(&buf);
            if (r7 < 30) {
                if (func_0209b1f0(p, &buf, 3) != 0) {
                    r4 = (u8)func_02063b8c(r5);
                }
            }
            if (func_0209b3b0(r4) != 0 || r4 == 8) {
                r5 = r4;
            }
            switch (func_0201c784(this)) {
            case 3:
                r5 = 1;
                break;
            case 4:
                r5 = 0;
                break;
            case 5:
                r5 = 5;
                break;
            }
            func_02078570(func_0207e310(a), r5);
        }
    }
}

void Unk_ov068_0226fb80::func_ov068_02265e6c() {
    if (unk_562 != 0 && unk_561 != 0 && unk_8ac != 0 && func_02014220(unk_618) == 0 && func_ov068_02265f58() != 0) {
        if (func_ov068_02265ee8()) {
            unk_a02++;
            if ((s32)unk_a02 >= 100) {
                unk_a02 = 100;
            }
        } else {
            unk_a02 = 0;
        }
    } else {
        unk_a02 = 0;
    }
}

BOOL Unk_ov068_0226fb80::func_ov068_02265ee8() {
    if (unk_508 != 0 && func_02088d38(unk_4cc, 4) != 0) {
        Unk_ov068_02265ee8_Obj *p = (Unk_ov068_02265ee8_Obj *)func_020951ec(4);
        if (p != NULL && p->unk_98 != 0) {
            s16 d = func_02002bdc(&p->unk_5c, &unk_5c) - p->unk_94;
            if (d < 0) {
                d = -d;
            }
            if (d < 0x31c6) {
                return TRUE;
            }
        }
    }
    return FALSE;
}

s32 Unk_ov068_0226fb80::func_ov068_02265f58() {
    void *x;
    void *p;
    if (func_0209750c() != NULL) {
        x = func_0209888c(func_0209750c());
    } else {
        x = NULL;
    }
    p = vfunc_64();
    if (x != NULL && func_02094218(x) && p != NULL && func_020030b4(func_020805c4(p)) != 0) {
        return func_0207f854(p, x);
    }
    return 0;
}

void Unk_ov068_0226fb80::func_ov068_02265fb4() {
    u16 a;
    u16 b;
    func_0202d864(&a, this);
    if (a != 0xfff1) {
        func_0202d864(&b, this);
        func_02011ec0(unk_9b0, this, &b, 0, 0);
        func_02011dfc(unk_9b0, data_020c6cc8, 0);
        func_02011b98(unk_9b0, 0x1000);
        unk_9ec = 1;
    }
}

BOOL Unk_ov068_0226fb80::vfunc_b0() {
    if (func_ov068_0225f83c(unk_9f0) != 0) {
        func_ov068_0225f838(unk_9f0, 0);
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov068_0226fb80::vfunc_60(u16 *p) {
    BOOL result = FALSE;
    BOOL r = FALSE;
    u32 v = *p;
    if (v >= 0x1376 && v <= 0x1376) {
        r = TRUE;
    }
    if (r || (v >= 0x1377 && v <= 0x1377)) {
        if (vfunc_64() != NULL) {
            func_0207c1e8(vfunc_64());
        }
        if (func_0207ce24(unk_82c) != 0) {
            func_ov068_0225f840(unk_9f0, this);
            func_ov068_0225f838(unk_9f0, data_ov068_0226f0ec);
            result = TRUE;
        } else if (func_ov068_02265f58() != 0) {
            unk_a01 = 1;
        }
    }
    return result;
}

BOOL Unk_ov068_0226fb80::vfunc_0c() {
    if (func_0202d8ec(this) == 0) {
        return FALSE;
    }
    func_02011c38(unk_9b0);
    unk_628 = NULL;
    if (unk_9fc != -1) {
        func_020902f8(unk_9fc);
        unk_9fc = -1;
    }
    return TRUE;
}

BOOL Unk_ov068_0226fb80::vfunc_24() {
    BOOL r = TRUE;
    if (unk_8ac != 0) {
        r = (this->*unk_8ac)();
    } else {
        Unk_ov068_0225f23c_Vec *pv = &unk_5c;
        unk_478.x = unk_5c.x;
        unk_478.y = pv->y;
        unk_478.z = pv->z;
        unk_484.x = unk_5c.x;
        unk_484.y = pv->y;
        unk_484.z = pv->z;
        unk_490.x = unk_5c.x;
        unk_490.y = pv->y;
        unk_490.z = pv->z;
    }
    return r;
}

BOOL Unk_ov068_0226fb80::vfunc_00() {
    void *a = vfunc_64();
    if (func_0202d948(this) == 0) {
        return FALSE;
    }
    unk_8ac = data_ov068_0226f870;
    func_ov068_0225f670(unk_894, this);
    s32 t = func_02078234();
    func_ov068_02265588(unk_8b4);
    if (t == func_0207e334(a)) {
        func_ov068_022656a8(unk_8b4, this, 0xd);
    } else if (func_02078294() == func_0207e334(a)) {
        func_ov068_022656a8(unk_8b4, this, 0xc);
    } else {
        switch (func_0207e278(a)) {
        case 0: {
            u16 buf;
            func_ov068_022656a8(unk_8b4, this, 0);
            func_0202d864(&buf, this);
            if (buf != 0xfff1) {
                func_ov068_02265fb4();
            }
            break;
        }
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
            func_ov068_022656a8(unk_8b4, this, 0xc);
            break;
        default:
            func_ov068_022656a8(unk_8b4, this, 3);
            break;
        }
    }
    func_ov068_0225f8f0(unk_9f0);
    return TRUE;
}

BOOL Unk_ov068_0226fb80::vfunc_04() {
    if (func_0202dab0(this) == 0) {
        return FALSE;
    }
    func_0201bc28(this, &unk_680);
    unk_680.vfunc_08();
    unk_9f4 = NULL;
    unk_9f8 = 0;
    unk_a08 = 3;
    u16 buf = 0xfff1;
    if (Unk_ov068_02266320_IsZero(func_02011f08(unk_9b0, &buf))) {
        return FALSE;
    }
    unk_628 = unk_9b0;
    unk_9fc = -1;
    unk_a00 = 0;
    unk_a01 = 0;
    unk_a02 = 0;
    unk_a04 = 0xff;
    unk_a05 = 0;
    func_ov068_02265d34();
    func_ov068_02265c24(this);
    return TRUE;
}

BOOL Unk_ov068_0226fb80::vfunc_a8() {
    BOOL r = FALSE;
    BOOL f = FALSE;
    if (unk_82c != NULL) {
        if (func_0207e310(unk_82c) != NULL) {
            f = TRUE;
        }
    }
    if (f) {
        if (func_020785ec(func_0207e310(unk_82c)) == 1) {
            r = TRUE;
        }
    }
    return r;
}

extern "C" Unk_ov068_0226fb80 *func_ov068_02266424() {
    return new Unk_ov068_0226fb80();
}

BOOL Unk_ov068_0226fb80::func_ov068_022661c8() {
    data_021cb69c = unk_150;
    if (func_0201b138(this) == 0) {
        return FALSE;
    }
    func_02011bcc(unk_9b0, this);
    return TRUE;
}

extern "C" s32 func_ov068_0226647c(Unk_ov068_0226647c_Cam *c);
extern "C" void func_ov068_022665c8(Unk_ov068_0226647c_Cam *c, s32 idx);
extern "C" void func_ov068_02266624(Unk_ov068_0226647c_Cam *c, s32 idx);

extern "C" s32 func_ov068_0226647c(Unk_ov068_0226647c_Cam *c) {
    if (func_020e7500(&c->unk_220) == 0) {
        s16 a = c->unk_21c;
        if (a < 0) {
            a = -a;
        }
        if (a < 0x100) {
            u8 s = c->unk_224;
            if (s == 0) {
                if (func_02063b8c(100) < 80) {
                    c->unk_224 = 1;
                } else {
                    c->unk_224 = 2;
                }
            } else if (s == 2) {
                c->unk_224 = 1;
            } else {
                c->unk_224 = 0;
            }
            func_ov068_02266624(c, c->unk_224);
        }
    }
    if (func_020e7500(&c->unk_222) == 0) {
        s16 a = c->unk_21e;
        if (a < 0) {
            a = -a;
        }
        if (a < 0x100) {
            u8 s = c->unk_225;
            if (s == 0) {
                c->unk_225 = 1;
            } else if (s == 2) {
                c->unk_225 = 1;
            } else {
                c->unk_225 = 0;
            }
            func_ov068_022665c8(c, c->unk_225);
        }
    }
    s32 d = data_020c8d0c[c->unk_225].c;
    if (d != 0) {
        c->unk_21e = c->unk_21e + d;
        u32 idx = ((u16)c->unk_21e >> 4) * 2;
        c->unk_174 = func_01ffcb0c(data_02135f44[idx], data_020c8d0c[c->unk_225].d);
    }
    d = data_020c8d0c[c->unk_224].c;
    if (d != 0) {
        c->unk_21c = c->unk_21c + d;
        u32 idx = ((u16)c->unk_21c >> 4) * 2;
        return func_01ffcb0c(data_02135f44[idx], data_020c8d0c[c->unk_224].d);
    }
    return 0;
}

extern "C" void func_ov068_022665c8(Unk_ov068_0226647c_Cam *c, s32 idx) {
    c->unk_225 = idx;
    if (c->unk_225 >= 4) {
        c->unk_225 = 0;
    }
    c->unk_222 = data_020c8d0c[c->unk_225].a;
    c->unk_222 += func_02063b8c(data_020c8d0c[c->unk_225].b);
    c->unk_21e = 0;
}

extern "C" void func_ov068_02266624(Unk_ov068_0226647c_Cam *c, s32 idx) {
    c->unk_224 = idx;
    if (c->unk_224 >= 4) {
        c->unk_224 = 0;
    }
    c->unk_220 = data_020c8d0c[c->unk_224].a;
    c->unk_220 += func_02063b8c(data_020c8d0c[c->unk_224].b);
    c->unk_21c = 0;
}
