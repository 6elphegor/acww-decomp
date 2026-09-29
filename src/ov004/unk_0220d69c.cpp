#include "types.h"
#include "Unk_020d8c7c.h"

struct Unk_ov004_0220d69c_Vec {
    s32 x, y, z;
};

class Unk_020d5d84 : public Unk_020d8c7c {
public:
    Unk_020d5d84();
    virtual ~Unk_020d5d84();

    /* 0x50 */ u8 unk_50[0xc];
    /* 0x5c */ s32 unk_5c[3];
    /* 0x68 */ u8 pad_68[0xec - 0x68];
};

class Unk_020d9670 : public Unk_020d5d84 {
public:
    Unk_020d9670();
    virtual ~Unk_020d9670();
    virtual BOOL vfunc_48(void *a);
    virtual void vfunc_4c(u32 a, u8 b);
    virtual void *vfunc_50();
    virtual BOOL vfunc_54(void *a);
    virtual BOOL vfunc_58(void *a);
    virtual BOOL vfunc_5c();
};

class Unk_ov004_0224b614 {
public:
    virtual void vfunc_00();
};

class Unk_ov004_0224b568;

extern "C" {
extern u8 data_ov004_02240040[];
extern void *data_020cbb18;

s32 func_ov004_02205c44(void *, s32, s32);
s32 func_ov004_02205c6c(void *);
s32 func_ov004_02205c7c(void *);
s32 func_ov004_02206be4(void *);
u16 *func_ov004_022063c8(s32, s32);
s32 func_ov004_02206f8c(Unk_ov004_0224b568 *);
s32 func_ov004_02207650(Unk_ov004_0224b568 *);
s32 func_ov004_02208750(Unk_ov004_0224b568 *);
s32 func_ov004_0220878c(Unk_ov004_0224b568 *);
s32 func_ov004_022087a4(Unk_ov004_0224b568 *);
s32 func_ov004_02208968(Unk_ov004_0224b568 *);
s32 func_ov004_02208ba8(Unk_ov004_0224b568 *, s32, s32, s32, u16);
s32 func_ov004_02208de0(Unk_ov004_0224b568 *, s32, s32, s32, s32);
s32 func_ov004_02209108(Unk_ov004_0224b568 *);
s32 func_ov004_02209150(Unk_ov004_0224b568 *);
void *func_ov004_02209ef0(u32);
s32 func_ov004_022330f8(void);
s32 func_ov004_02233bf4(void);
s32 func_ov004_022337bc(s32);
s32 func_ov004_02235464(s32, Unk_ov004_0224b568 *);
s32 func_ov004_022354d8(void);
s32 func_ov004_022354e8(s32);

s32 func_02003a4c(void *);
s32 func_02003a54(void *);
s32 func_02003a5c(void *, s32);
s32 func_02003a64(void *);
s32 func_02003a6c(void *, Unk_ov004_0220d69c_Vec *);
s32 func_02003ab8(void *, s32);
s32 func_02003ac0(void *);
s32 func_0204ee10(s32 *, s32 *, void *);
s32 func_020515b8(s32, void *, s32);
s32 func_02052504(s32, s32, u32, s32);
s32 func_020524dc(s32, s32, s32);
s32 func_0205252c(s32, s32, s32);
s32 func_0205436c(void *, s32, u16, s32, s32, s32, s32);
s32 func_0205439c(void *);
s32 func_020543b4(void *, void *);
s32 func_02054420(void *, void *);
s32 func_02054720(void *, s32, s32, s32, s32, s32);
s32 func_02054b38(void *, s32);
s32 func_02072e44(void *);
s32 func_020943dc(void);
s32 func_0209c348(void);
s32 func_020b50e8(void);
s32 func_020b51a4(void);
}

struct Unk_ov004_0220dcbc_Obj {
    u8 pad_00[0xb4];
    u8 *unk_b4;
    u8 pad_b8[0xd4 - 0xb8];
    u8 *unk_d4;
};

class Unk_ov004_0224b694 : public Unk_020d9670, public Unk_ov004_0224b614 {
public:
    Unk_ov004_0224b694();
    virtual ~Unk_ov004_0224b694();
    virtual BOOL vfunc_60();
    virtual BOOL vfunc_64();
    virtual BOOL vfunc_68(u32 a, void *o);
    virtual void vfunc_6c(s32 idx, Unk_ov004_0220dcbc_Obj *o);
    virtual BOOL vfunc_70(u32 idx, u32 x);
    virtual u32 vfunc_74(u32 idx);
    virtual u32 vfunc_78();
    virtual BOOL vfunc_7c();
    virtual BOOL vfunc_80();
    virtual BOOL vfunc_84();
};

class Unk_ov004_0224b568 : public Unk_ov004_0224b694 {
public:
    static void *operator new(unsigned long, void *p) { return p; }
    Unk_ov004_0224b568();
    virtual ~Unk_ov004_0224b568();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_68(u32 a, void *o);
    virtual void vfunc_6c(s32 idx, Unk_ov004_0220dcbc_Obj *o);
    virtual BOOL vfunc_70(u32 idx, u32 x);
    virtual u32 vfunc_74(u32 idx);
    virtual BOOL vfunc_7c();
    virtual BOOL vfunc_80();
    virtual BOOL vfunc_84();

    void func_ov004_0220d614();
    BOOL func_ov004_0220d69c();
    void func_ov004_0220d6f8();
    BOOL func_ov004_0220d7bc();
    void func_ov004_0220d98c();
    BOOL func_ov004_0220d9e4();
    void func_ov004_0220da7c();
    s32 func_ov004_0220db9c();
    u32 func_ov004_0220dbc4();
    void func_ov004_0220dbec(u32 v);
    void func_ov004_0220dc10(u32 v);
    void func_ov004_0220dc34();
    s32 func_ov004_0220dc5c(Unk_ov004_0220d69c_Vec *v);
    void func_ov004_0220dc94(u32 v);
    void func_ov004_0220dec8(BOOL b);

    /* 0x0f0 */ u8 pad_f0[0x534 - 0xf0];
    /* 0x534 */ u8 unk_534[0x6c8 - 0x534];
    /* 0x6c8 */ u8 unk_6c8[0x73c - 0x6c8];
    /* 0x73c */ u8 unk_73c[0x768 - 0x73c];
    /* 0x768 */ s32 unk_768;
    /* 0x76c */ u8 pad_76c[0x778 - 0x76c];
    /* 0x778 */ u8 unk_778;
    /* 0x779 */ u8 pad_779;
    /* 0x77a */ u8 unk_77a;
    /* 0x77b */ u8 pad_77b;
    /* 0x77c */ s32 unk_77c;
    /* 0x780 */ u8 pad_780[0x840 - 0x780];
    /* 0x840 */ u8 unk_840[0x854 - 0x840];
    /* 0x854 */ u8 unk_854;
    /* 0x855 */ u8 pad_855[3];
    /* 0x858 */ s32 unk_858;
    /* 0x85c */ u16 unk_85c;
    /* 0x85e */ u8 unk_85e;
    /* 0x85f */ u8 pad_85f;
};

typedef void (Unk_ov004_0224b568::*Unk_ov004_0220da7c_Fn)();
typedef BOOL (Unk_ov004_0224b568::*Unk_ov004_0220daf8_Fn)();

BOOL Unk_ov004_0224b568::func_ov004_0220d69c() {
    func_ov004_02205c44(unk_73c, 1, 0);
    func_ov004_02208ba8(this, 0, 0, 0x1000, 0);
    u16 *r = func_ov004_022063c8(func_ov004_02206be4(unk_6c8), 0);
    func_02054720(unk_534, (s32)r, 0, 0, 0, 0);
    return TRUE;
}

void Unk_ov004_0224b568::func_ov004_0220d6f8() {
    func_ov004_0220dc5c((Unk_ov004_0220d69c_Vec *)unk_5c);
    if (unk_85c != 0) {
        func_0205439c(unk_534);
        unk_85c--;
    }
    if (unk_85c == 0) {
        vfunc_70(2, vfunc_78());
    } else {
        s32 r = func_ov004_0220db9c();
        if (r >= 0) {
            unk_85c = r;
            u16 *q = func_ov004_022063c8(func_ov004_02206be4(unk_6c8), 0);
            func_0205436c(unk_534, (s32)q, (u16)r, 0, 0, 0, 0);
        }
    }
    if (func_ov004_02205c6c(unk_73c)) {
        func_ov004_02205c44(unk_73c, 1, 0);
        s32 s = func_020b50e8();
        func_020515b8(s, unk_5c, func_ov004_02208750(this));
    }
}

BOOL Unk_ov004_0224b568::func_ov004_0220d7bc() {
    s32 a, b;
    func_ov004_02209150(this);
    func_ov004_02205c44(unk_73c, 1, 0);
    unk_85c = 0xffff;
    func_0204ee10(&a, &b, unk_5c);
    if (unk_77a != 0) {
        if (unk_768 != 0 || func_020b51a4() != 0) {
            func_02003ab8(unk_840, 1);
            u32 r5 = func_02003a54(unk_840) & 0xf;
            func_02052504(a, b, (u8)r5, func_020b50e8());
            unk_778 = r5;
            u16 *q = func_ov004_022063c8(func_ov004_02206be4(unk_6c8), 0);
            func_02054720(unk_534, (s32)q, 0, 0, 0, 0);
            func_0205439c(unk_534);
            unk_85c = 0;
        } else {
            func_ov004_0220dc10(2);
            u32 r5 = func_0205252c(a, b, func_020b50e8()) & 0xf;
            func_ov004_0220dbec((u8)r5);
            unk_778 = r5;
            s32 q = func_ov004_022337bc(func_ov004_02233bf4());
            func_02054720(unk_534, q, 0, 0, 0, 0);
            func_0205439c(unk_534);
        }
    } else if (func_02072e44(data_020cbb18) != 0 && vfunc_78() != 0xff) {
        func_ov004_0220dc10(1);
        u32 r5 = vfunc_78();
        u32 t = r5 & 0xf;
        func_02052504(a, b, (u8)t, func_020b50e8());
        s32 q = func_ov004_022337bc(func_ov004_02233bf4());
        func_02054720(unk_534, q, 0, 0, 0, 0);
        func_0205439c(unk_534);
    } else {
        func_ov004_0220dc10(1);
        u32 r5 = func_ov004_0220dbc4() & 0xf;
        func_02052504(a, b, (u8)r5, func_020b50e8());
        unk_778 = r5;
        s32 q = func_ov004_022337bc(func_ov004_02233bf4());
        func_02054720(unk_534, q, 0, 0, 0, 0);
        func_0205439c(unk_534);
    }
    return TRUE;
}

void Unk_ov004_0224b568::func_ov004_0220d98c() {
    func_ov004_0220dc5c((Unk_ov004_0220d69c_Vec *)unk_5c);
    func_0205439c(unk_534);
    if (func_ov004_02205c6c(unk_73c)) {
        func_ov004_02205c44(unk_73c, 0, 0);
        s32 s = func_020b50e8();
        func_020515b8(s, unk_5c, func_ov004_02208750(this));
    }
}

BOOL Unk_ov004_0224b568::func_ov004_0220d9e4() {
    s32 a, b;
    func_0204ee10(&a, &b, unk_5c);
    unk_778 = 0xff;
    func_020524dc(a, b, func_020b50e8());
    func_ov004_0220dc10(0);
    func_ov004_02209108(this);
    func_ov004_02205c44(unk_73c, 0, 0);
    if (func_ov004_02233bf4() != 0) {
        s32 q = func_ov004_022337bc(func_ov004_02233bf4());
        if (unk_77a != 0) {
            func_02054720(unk_534, q, 0, 0, 0, 0);
        } else {
            func_0205436c(unk_534, q, 0x20, 0, 0, 0, 0);
        }
    }
    return TRUE;
}

void Unk_ov004_0224b568::func_ov004_0220da7c() {
    static Unk_ov004_0220da7c_Fn tbl[3] = {
        &Unk_ov004_0224b568::func_ov004_0220d614,
        &Unk_ov004_0224b568::func_ov004_0220d6f8,
        &Unk_ov004_0224b568::func_ov004_0220d98c,
    };
    u32 i = unk_85e;
    if (i < 3) {
        (this->*tbl[i])();
    }
}

BOOL Unk_ov004_0224b568::vfunc_70(u32 idx, u32 x) {
    func_ov004_0220878c(this);
    static Unk_ov004_0220daf8_Fn tbl[3] = {
        &Unk_ov004_0224b568::func_ov004_0220d9e4,
        &Unk_ov004_0224b568::func_ov004_0220d7bc,
        &Unk_ov004_0224b568::func_ov004_0220d69c,
    };
    if (idx < 3) {
        if ((this->*tbl[idx])()) {
            unk_85e = idx;
            return TRUE;
        }
    }
    return FALSE;
}

u32 Unk_ov004_0224b568::vfunc_74(u32 idx) {
    if (idx < 3) {
        return data_ov004_02240040[idx];
    }
    return 0;
}

s32 Unk_ov004_0224b568::func_ov004_0220db9c() {
    if (unk_854 != 0) {
        return func_02003a4c(unk_840);
    }
    return -1;
}

u32 Unk_ov004_0224b568::func_ov004_0220dbc4() {
    if (unk_854 != 0) {
        return func_02003a54(unk_840);
    }
    return 0;
}

void Unk_ov004_0224b568::func_ov004_0220dbec(u32 v) {
    if (unk_854 != 0) {
        func_02003a5c(unk_840, v);
    }
}

void Unk_ov004_0224b568::func_ov004_0220dc10(u32 v) {
    if (unk_854 != 0) {
        func_02003ab8(unk_840, v);
    }
}

void Unk_ov004_0224b568::func_ov004_0220dc34() {
    if (unk_854 != 0) {
        func_02003a64(unk_840);
        unk_854 = 0;
    }
}

s32 Unk_ov004_0224b568::func_ov004_0220dc5c(Unk_ov004_0220d69c_Vec *v) {
    if (unk_854 != 0) {
        Unk_ov004_0220d69c_Vec t;
        t.x = v->x;
        t.y = v->y;
        t.z = v->z;
        return func_02003a6c(unk_840, &t);
    }
    return -1;
}

void Unk_ov004_0224b568::func_ov004_0220dc94(u32 v) {
    if (unk_854 == 0) {
        func_02003ac0(unk_840);
        unk_854 = 1;
    }
}

void Unk_ov004_0224b568::vfunc_6c(s32 idx, Unk_ov004_0220dcbc_Obj *o) {
    u8 *d = o->unk_d4;
    u32 off = *(u16 *)(d + 6);
    u8 *tbl = d + off;
    u32 esz = *(u16 *)tbl;
    u8 *rec = d + *(u32 *)(tbl + esz * idx + 4);
    s32 *v = (s32 *)(rec + 4);
    u8 *m = o->unk_b4;
    *(s32 *)(m + 0x4c) = v[0];
    *(s32 *)(m + 0x50) = v[1];
    *(s32 *)(m + 0x54) = v[2];
    func_020543b4(unk_534, o);
}

BOOL Unk_ov004_0224b568::vfunc_68(u32 a, void *o) {
    func_02054420(unk_534, o);
}

BOOL Unk_ov004_0224b568::vfunc_0c() {
    func_ov004_0220dc34();
    return TRUE;
}

BOOL Unk_ov004_0224b568::vfunc_84() {
    vfunc_80();
    return TRUE;
}

BOOL Unk_ov004_0224b568::vfunc_80() {
    func_ov004_0220da7c();
    unk_858++;
    return TRUE;
}

BOOL Unk_ov004_0224b568::vfunc_7c() {
    unk_858 = 0;
    unk_778 = 0xff;
    func_ov004_022087a4(this);
    func_ov004_0220dc94(func_ov004_022330f8());
    func_ov004_02208de0(this, 0, 1, 0x1000, 0);
    func_ov004_02208968(this);
    func_02054b38(unk_534, func_0209c348());
    if (unk_768 == 1) {
        func_ov004_02205c44(unk_73c, 0, 0);
        s32 s = func_020b50e8();
        func_020515b8(s, unk_5c, func_ov004_02208750(this));
    } else if (func_ov004_02206f8c(this) != 0) {
        vfunc_70(0, 0xff);
    } else if (func_ov004_02205c7c(unk_73c) != 0) {
        vfunc_70(1, 0xff);
    } else {
        vfunc_70(0, 0xff);
    }
    return TRUE;
}

Unk_ov004_0224b568::~Unk_ov004_0224b568() {
}

Unk_ov004_0224b568::Unk_ov004_0224b568() {
    unk_778 = 0xff;
}

extern "C" void func_ov004_0220deac() {
    void *m = func_ov004_02209ef0(0x860);
    new (m) Unk_ov004_0224b568();
}

void Unk_ov004_0224b568::func_ov004_0220dec8(BOOL b) {
    s32 p = func_ov004_02235464(func_ov004_022354d8(), this);
    BOOL c = FALSE;
    if (p != 0) {
        u16 *rec = func_ov004_022063c8(func_ov004_02206be4(unk_6c8), c);
        if (unk_77c == 0x16) {
            if (func_ov004_022354e8(p) == 2) {
                if (b) {
                    if (func_ov004_02209150(this) != 0) c = TRUE;
                    func_ov004_02208ba8(this, 0, 1, 0x1000, 0);
                } else {
                    if (func_ov004_02209150(this) != 0) c = TRUE;
                    func_ov004_02208ba8(this, 0, 3, 0x1000, rec[2] - 1);
                }
            } else if (func_ov004_022354e8(p) == 0) {
                if (b) {
                    if (func_ov004_02209150(this) != 0) c = TRUE;
                    func_ov004_02208ba8(this, 0, 3, 0x1000, rec[2] - 1);
                } else {
                    if (func_ov004_02209150(this) != 0) c = TRUE;
                    func_ov004_02208ba8(this, 0, 1, 0x1000, 0);
                }
            }
        } else {
            if (func_ov004_022354e8(p) == 3) {
                if (b) {
                    if (func_ov004_02209150(this) != 0) c = TRUE;
                    func_ov004_02208ba8(this, 0, 1, 0x1000, 0);
                } else {
                    if (func_ov004_02209150(this) != 0) c = TRUE;
                    func_ov004_02208ba8(this, 0, 3, 0x1000, rec[2] - 1);
                }
            } else if (func_ov004_022354e8(p) == 1) {
                if (b) {
                    if (func_ov004_02209150(this) != 0) c = TRUE;
                    func_ov004_02208ba8(this, 0, 3, 0x1000, rec[2] - 1);
                } else {
                    if (func_ov004_02209150(this) != 0) c = TRUE;
                    func_ov004_02208ba8(this, 0, 1, 0x1000, 0);
                }
            }
        }
    }
    if (c == 0) {
        if (func_ov004_02207650(this) != 0xffff) {
            func_020943dc();
        }
    }
}
