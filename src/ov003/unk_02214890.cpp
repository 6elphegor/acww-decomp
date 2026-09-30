// mwcc-version: 1.2/sp2
#include "types.h"
#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "Unk_020d8c7c.h"
#undef vfunc_14
#undef vfunc_08

struct Unk_ov003_02214890_Vec {
    s32 x, y, z;
};

class Unk_020d5d84 : public Unk_020d8c7c {
public:
    virtual BOOL vfunc_04();
    virtual void vfunc_08(s32 a);
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_14(s32 a);
    virtual BOOL vfunc_1c();
    virtual BOOL vfunc_20();
    virtual BOOL vfunc_28();
    virtual BOOL vfunc_2c();

    /* 0x50 */ u8 unk_50[0xc];
    /* 0x5c */ s32 unk_5c[3];
    /* 0x68 */ u8 pad_68[0xd4 - 0x68];
};

class Unk_020d9670 : public Unk_020d5d84 {
public:
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_1c();
    virtual BOOL vfunc_48(void *a);
    virtual void vfunc_4c(u32 a, u8 b);
    virtual Unk_ov003_02214890_Vec *vfunc_50();
    virtual BOOL vfunc_54(void *a);
    virtual BOOL vfunc_58(void *a);
    virtual BOOL vfunc_5c();

    /* 0xd4 */ u8 unk_d4[0x10];
    /* 0xe4 */ s32 unk_e4;
    /* 0xe8 */ u16 unk_e8;
    /* 0xea */ u16 pad_ea;
};

class Unk_020e2a30 {
public:
    Unk_020e2a30();
    virtual ~Unk_020e2a30();
    virtual void vfunc_s08();

    /* 0x04 */ char unk_04[0x1a];
    /* 0x1e */ u8 unk_1e;
};

struct Unk_020660f8 {
    u8 pad_00[0x14];
    s32 unk_14;
};

// Secondary base at +0xec
class Unk_020ddcf0 : public Unk_020e2a30 {
public:
    Unk_020ddcf0();
    virtual ~Unk_020ddcf0();
    virtual void vfunc_s08();
    virtual void vfunc_s0c();
    virtual void vfunc_s10();
    virtual void vfunc_88();
    virtual void vfunc_s18();
    virtual BOOL vfunc_s6c();

    u8 pad_20[0x1c];
    /* 0x3c */ Unk_020660f8 *unk_3c;
    /* 0x40 */ u8 unk_40;
    u8 pad_41[3];
};

class Unk_ov009_0225e29c : public Unk_020d9670, public Unk_020ddcf0 {
public:
    Unk_ov009_0225e29c();
    virtual ~Unk_ov009_0225e29c();
    virtual void vfunc_4c(u32 a, u8 b);
    virtual void vfunc_60();
    virtual void vfunc_64();
    virtual void vfunc_68();
    virtual void vfunc_6c();
    virtual BOOL vfunc_70();
    virtual void vfunc_74();
    virtual void vfunc_78();
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();
    virtual void vfunc_88();
    virtual BOOL vfunc_8c();
    virtual void vfunc_90();
    virtual BOOL vfunc_94();
    virtual void vfunc_98();
    virtual void vfunc_9c();
    virtual void vfunc_a0();
    virtual char *vfunc_a4();
    virtual char *vfunc_a8();
    virtual char *vfunc_ac();
    virtual void vfunc_b0();
    virtual void vfunc_b4();
    virtual void vfunc_b8();

    /* 0x130 */ u8 pad_130[8];
    /* 0x138 */ u8 unk_138[0x5c];
    /* 0x194 */ void *unk_194;
    /* 0x198 */ u8 pad_198[0x2b0 - 0x198];
};

class Unk_020e45e0 {
public:
    Unk_020e45e0();
    virtual BOOL vfunc_00();
    BOOL func_020b8840(void *a, char *b, s32 c, s32 d, s32 e);
    void func_020b8930();
    u8 pad_04[0x24];
};

struct Unk_ov003_02214e04 {
    Unk_ov003_02214e04();
    ~Unk_ov003_02214e04();
    BOOL func_ov003_02214e04(void *res, void *b);
    void func_ov003_02214dfc();

    Unk_020e45e0 unk_00;
    u8 unk_28[4];
};

struct Unk_ov003_02214890_Buf {
    s32 w0;
    s32 w1;
};

class Unk_020ad700 {
public:
    u32 func_020ad618(void *w);
};

extern "C" {
extern u8 data_021ed2c0[];
extern u8 data_021ecc7c[];
void func_020ad778(void *);
void func_020ad760(void *);
Unk_020ad700 *func_020ad3bc(void *);
void func_02067a3c(void *, s32, void *);
void func_0209d498(void *);
void func_02116048(void *, void *, s32);
s32 func_0203f2e0(u32, void *, u32);
s32 func_020b50e8();
void func_02083d84(void *, s32, void *);
extern u16 data_ov003_02231144;
extern u8 data_ov003_02231430[];
extern u8 data_ov003_02231434[];
extern u8 data_ov003_0223144c[];
extern u8 data_ov003_02231464[];
extern char data_ov003_0223524c[];
extern char data_ov003_02235204[];
extern char data_ov003_02235228[];
extern u32 data_ov003_022312c8[];
extern u32 data_ov003_02235278;
extern u32 data_ov003_0223527c;
extern u32 data_ov003_02235280;
void func_0203c924(void *);
void func_0203c928(void *);
BOOL func_0203c6f8(void *a, void *b);
void *func_0203c6c8(void *);
s32 func_020b23a0(void *);
s32 func_020b249c(s32);
void func_020b24a4(s32, void *);
s32 func_020b24ac(s32);
void func_020547e4(void *);
void func_0204ee10(s32 *, s32 *, s32 *);
BOOL func_0203006c(s32, s32, s32);
s32 func_020639e8(char *buf, const char *fmt, ...);
s32 func_ov003_02218da8();
void func_0200402c(u32);
u32 func_ov003_02214f3c();
s32 func_ov003_02214f54();
}

class Unk_ov003_02231168 : public Unk_ov009_0225e29c {
public:
    Unk_ov003_02231168();
    virtual ~Unk_ov003_02231168();
    virtual BOOL vfunc_70();
};

class Unk_ov003_022312f4 : public Unk_ov009_0225e29c {
public:
    Unk_ov003_022312f4();
    virtual ~Unk_ov003_022312f4();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_24();
    virtual BOOL vfunc_70();
    virtual BOOL vfunc_94();
    virtual char *vfunc_a4();
    virtual char *vfunc_a8();
    virtual char *vfunc_ac();

    /* 0x2b0 */ Unk_ov003_02214e04 unk_2b0;
    /* 0x2dc */ u8 pad_2dc[0x59c - 0x2dc];
};

struct Unk_ov003_022150f0_Obj {
    u8 pad_00[0x2b0];
    u8 unk_2b0;
    u8 unk_2b1;
    u8 unk_2b2;
    u8 pad_2b3[0x2d4 - 0x2b3];
    u8 unk_2d4;
    u8 unk_2d5;
};

class Unk_ov003_02230ff0 : public Unk_ov009_0225e29c {
public:
    Unk_ov003_02230ff0();
    virtual ~Unk_ov003_02230ff0();
    virtual BOOL vfunc_18();
    virtual void vfunc_4c(u32 a, u8 b);
    virtual BOOL vfunc_70();
    virtual void vfunc_88();
    virtual BOOL vfunc_8c();
    virtual void vfunc_s10();
    virtual void vfunc_s18();
    virtual BOOL vfunc_s6c();

    void func_ov003_02214870();
    void func_ov003_02214800();
    void func_ov003_02214738();
    void func_ov003_02214704();
    void func_ov003_022146c8();
    void func_ov003_02214644();
    void func_ov003_0221461c();
    void func_ov003_022145dc();
    void func_ov003_02214578();
    void func_ov003_02214494();
    BOOL func_ov003_02214890();
    BOOL func_ov003_02214848();
    BOOL func_ov003_0221475c();
    BOOL func_ov003_02214734();
    BOOL func_ov003_02214700();
    BOOL func_ov003_022146c4();
    BOOL func_ov003_02214640();
    BOOL func_ov003_02214608();
    BOOL func_ov003_022145cc();
    BOOL func_ov003_02214568();
    void func_ov003_02214894();
    BOOL func_ov003_02214974(s32 i);

    /* 0x2b0 */ s32 unk_2b0;
    /* 0x2b4 */ u8 pad_2b4[3];
    /* 0x2b7 */ u8 unk_2b7;
};

BOOL Unk_ov003_02230ff0::func_ov003_02214890() {
    return TRUE;
}

void Unk_ov003_02230ff0::func_ov003_02214894() {
    static void (Unk_ov003_02230ff0::*tbl[10])() = {
        &Unk_ov003_02230ff0::func_ov003_02214870, &Unk_ov003_02230ff0::func_ov003_02214800,
        &Unk_ov003_02230ff0::func_ov003_02214738, &Unk_ov003_02230ff0::func_ov003_02214704,
        &Unk_ov003_02230ff0::func_ov003_022146c8, &Unk_ov003_02230ff0::func_ov003_02214644,
        &Unk_ov003_02230ff0::func_ov003_0221461c, &Unk_ov003_02230ff0::func_ov003_022145dc,
        &Unk_ov003_02230ff0::func_ov003_02214578, &Unk_ov003_02230ff0::func_ov003_02214494,
    };
    s32 i = unk_2b0;
    if (i < 10) {
        (this->*tbl[i])();
    }
}

BOOL Unk_ov003_02230ff0::func_ov003_02214974(s32 i) {
    static BOOL (Unk_ov003_02230ff0::*tbl[10])() = {
        &Unk_ov003_02230ff0::func_ov003_02214890, &Unk_ov003_02230ff0::func_ov003_02214848,
        &Unk_ov003_02230ff0::func_ov003_0221475c, &Unk_ov003_02230ff0::func_ov003_02214734,
        &Unk_ov003_02230ff0::func_ov003_02214700, &Unk_ov003_02230ff0::func_ov003_022146c4,
        &Unk_ov003_02230ff0::func_ov003_02214640, &Unk_ov003_02230ff0::func_ov003_02214608,
        &Unk_ov003_02230ff0::func_ov003_022145cc, &Unk_ov003_02230ff0::func_ov003_02214568,
    };
    if (i < 10) {
        if ((this->*tbl[i])()) {
            unk_2b0 = i;
            return TRUE;
        }
    }
    return FALSE;
}

BOOL Unk_ov003_02230ff0::vfunc_s6c() {
    return FALSE;
}

void Unk_ov003_02230ff0::vfunc_s18() {
}

void Unk_ov003_02230ff0::vfunc_88() {
    switch (unk_1e) {
    case 2:
        unk_3c->unk_14 = 1;
        func_ov003_02214974(4);
        break;
    case 3:
    case 0x32:
        func_ov003_02214974(6);
        break;
    }
}

void Unk_ov003_02230ff0::vfunc_s10() {
    if (unk_1e == 2) {
        u32 obj[0x38 / 4];
        func_020ad778(obj);
        if (func_020ad3bc(data_021ed2c0)->func_020ad618(obj)) {
            func_02067a3c(unk_3c, 0, obj);
        }
        func_020ad760(obj);
    }
}

void Unk_ov003_02230ff0::vfunc_4c(u32 a, u8 b) {
    switch (a) {
    case 6:
        Unk_ov009_0225e29c::vfunc_4c(a, b);
        break;
    case 0:
    case 1:
        func_ov003_02214974(1);
        break;
    case 2:
    case 3:
    case 4:
    case 5:
    case 7:
        break;
    case 8:
        func_ov003_02214974(0);
        break;
    }
}

BOOL Unk_ov003_02230ff0::vfunc_8c() {
    Unk_ov003_02214890_Buf l;
    l.w0 = 0;
    l.w1 = 0;
    func_0209d498(&l);
    if (((u8 *)&l)[2] < 6) {
        goto no;
    }
    if (unk_2b7 >= 6) {
        goto yes;
    }
    return FALSE;
yes:
    return TRUE;
no:
    return FALSE;
}

BOOL Unk_ov003_02230ff0::vfunc_18() {
    func_ov003_02214894();
    return TRUE;
}

BOOL Unk_ov003_02230ff0::vfunc_70() {
    Unk_ov003_02214890_Buf l;
    l.w0 = 0;
    l.w1 = 0;
    func_0209d498(&l);
    unk_2b7 = ((u8 *)&l)[2];
    return TRUE;
}

Unk_ov003_02230ff0::~Unk_ov003_02230ff0() {
}

Unk_ov003_02230ff0::Unk_ov003_02230ff0() {
}

extern "C" void func_ov003_02214c1c() {
    new Unk_ov003_02230ff0;
}

static inline BOOL Unk_ov003_02214ce0_Chk(void *m) {
    if (func_0203f2e0(0x40, m, 0)) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov003_02231168::vfunc_70() {
    Unk_ov003_02214890_Buf l;
    Unk_ov003_02214890_Buf m;
    l.w0 = 0;
    l.w1 = 0;
    func_0209d498(&l);
    func_02116048(&l, &m, 8);
    if (Unk_ov003_02214ce0_Chk(&m)) {
        func_02083d84(&data_ov003_02231144, func_020b50e8(), &unk_5c);
    }
    return TRUE;
}

Unk_ov003_02231168::~Unk_ov003_02231168() {
}

Unk_ov003_02231168::Unk_ov003_02231168() {
}

extern "C" void func_ov003_02214da8() {
    new Unk_ov003_02231168;
}

extern "C" BOOL func_ov003_02214e88(Unk_ov003_022312f4 *self) {
    void *t = self->unk_194;
    self->unk_2b0.func_ov003_02214e04(t, (void *)func_020b249c(func_020b23a0(data_021ecc7c)));
    return TRUE;
}

BOOL Unk_ov003_022312f4::vfunc_94() {
    return FALSE;
}

char *Unk_ov003_022312f4::vfunc_ac() {
    u32 x = func_ov003_02214f3c();
    s32 y = func_ov003_02218da8();
    func_020639e8(data_ov003_0223524c, (const char *)data_ov003_02231434, x, y);
    return data_ov003_0223524c;
}

char *Unk_ov003_022312f4::vfunc_a8() {
    u32 x = func_ov003_02214f3c();
    s32 y = func_ov003_02218da8();
    func_020639e8(data_ov003_02235204, (const char *)data_ov003_0223144c, x, y);
    return data_ov003_02235204;
}

char *Unk_ov003_022312f4::vfunc_a4() {
    u32 x = func_ov003_02214f3c();
    s32 y = func_ov003_02218da8();
    func_020639e8(data_ov003_02235228, (const char *)data_ov003_02231464, x, y);
    return data_ov003_02235228;
}

extern "C" u32 func_ov003_02214f3c() {
    return data_ov003_022312c8[func_ov003_02214f54()];
}

extern "C" s32 func_ov003_02214f54() {
    return func_020b24ac(func_020b23a0(data_021ecc7c));
}

BOOL Unk_ov003_022312f4::vfunc_0c() {
    unk_2b0.func_ov003_02214dfc();
    return TRUE;
}

BOOL Unk_ov003_022312f4::vfunc_24() {
    return TRUE;
}

BOOL Unk_ov003_022312f4::vfunc_18() {
    func_020547e4(unk_138);
    return TRUE;
}

BOOL Unk_ov003_022312f4::vfunc_70() {
    void *t = unk_194;
    unk_2b0.func_ov003_02214e04(t, (void *)func_020b249c(func_020b23a0(data_021ecc7c)));
    s32 x;
    s32 y;
    func_0204ee10(&x, &y, unk_5c);
    s32 i;
    for (i = -2; i <= 2; i++) {
        func_0203006c(x + i, y - 1, 0xf);
    }
    return TRUE;
}

Unk_ov003_022312f4::~Unk_ov003_022312f4() {
}

Unk_ov003_022312f4::Unk_ov003_022312f4() {
}

extern "C" void func_ov003_02215098() {
    new Unk_ov003_022312f4;
}

BOOL Unk_ov003_02214e04::func_ov003_02214e04(void *res, void *b) {
    if (func_0203c6f8(unk_28, b)) {
        if (unk_00.func_020b8840(res, (char *)data_ov003_02231430, (s32)func_0203c6c8(unk_28), 0, 0)) {
            func_020b24a4(func_020b23a0(data_021ecc7c), b);
            return TRUE;
        }
    }
    return FALSE;
}

Unk_ov003_02214e04::~Unk_ov003_02214e04() {
    func_0203c924(unk_28);
}

void Unk_ov003_02214e04::func_ov003_02214dfc() {
    unk_00.func_020b8930();
}

Unk_ov003_02214e04::Unk_ov003_02214e04() {
    func_0203c928(unk_28);
}

extern "C" void func_ov003_022150f0(Unk_ov003_022150f0_Obj *o) {
    if (o->unk_2d4 != 0) {
        Unk_ov003_02214890_Buf l;
        l.w0 = 0;
        l.w1 = 0;
        func_0209d498(&l);
        if (((u8 *)&l)[4] == 1) {
            goto clr;
        }
        switch (o->unk_2b0) {
        case 0:
            o->unk_2b1 = (data_ov003_02235278 / 10) & 1;
            break;
        case 1:
            o->unk_2b1 = data_ov003_02235278 % 10;
            break;
        case 2:
            o->unk_2b1 = data_ov003_02235280 / 10;
            break;
        case 3:
            o->unk_2b1 = data_ov003_02235280 % 10;
            break;
        case 4:
            o->unk_2b1 = data_ov003_0223527c / 10;
            break;
        case 5:
            o->unk_2b1 = data_ov003_0223527c % 10;
            break;
        }
        s32 r = -1;
        if (data_ov003_02235278 != 0) {
            goto done;
        }
        if (func_020b50e8() == 0x2c) {
            goto done;
        }
        if (data_ov003_02235280 == 1 && data_ov003_0223527c == 0) {
            r = 3;
        } else if (data_ov003_02235280 == 0 && data_ov003_0223527c != 0) {
            if (data_ov003_0223527c <= 10) {
                r = 2;
            } else {
                r = 3;
            }
        }
        if (o->unk_2b2 == o->unk_2b1) {
            goto done;
        }
        if (r != -1 && o->unk_2b0 == 5) {
            switch (r) {
            case 1:
                if (o->unk_2d5 == 0) {
                    func_0200402c(0x61);
                }
                break;
            case 2:
                if (o->unk_2d5 == 0) {
                    func_0200402c(0x60);
                }
                break;
            case 3:
                if (o->unk_2d5 == 0) {
                    func_0200402c(0x62);
                }
                break;
            }
            o->unk_2d5 = 0;
        } else {
            o->unk_2d5 = 0;
        }
        goto done;
    clr:
        o->unk_2d4 = 0;
    }
done:
    o->unk_2b2 = o->unk_2b1;
}

extern "C" BOOL func_ov003_022150ec() {
    return FALSE;
}
