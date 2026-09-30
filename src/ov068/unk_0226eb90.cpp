#include "types.h"
#include "Unk_020d8c7c.h"

class Unk_ov068_02270afc;
typedef BOOL (Unk_ov068_02270afc::*Unk_ov068_02270afc_Fn)();

struct Unk_ov068_0226eda4_V {
    s32 a, b;
};

// Grid header (data_021c47c4 points at one)
struct Unk_ov068_0226ee74_Grid {
    void *cells;
    u8 *w;
    u8 *h;
};

struct Unk_ov068_0226eee0_P0 {
    u8 pad[0x88];
};
struct Unk_ov068_0226eee0_Q0 {
    u8 pad[0xc];
};
struct Unk_ov068_0226eee0_Q1 {
    u32 pad;
};
struct Unk_ov068_0226eee0_Mid : Unk_ov068_0226eee0_Q0, Unk_ov068_0226eee0_Q1 {};
struct Unk_ov068_0226eee0_Top : Unk_ov068_0226eee0_P0, Unk_ov068_0226eee0_Mid {};

extern "C" {
extern Unk_ov068_0226ee74_Grid *data_021c47c4;
extern Unk_ov068_02270afc_Fn data_ov068_02270a24;
extern Unk_ov068_02270afc *data_ov068_022712ac;

void func_ov068_0226e638(void *, s32);
void func_ov068_0226e54c(void *);

void *func_0209750c();
u8 *func_0209865c(void *);
s32 func_0209abb4(void *, s32);
s32 func_0209abc4(void *);
s32 func_02063b8c(s32);
void func_02116048(void *, void *, u32);
void func_0209d258(void *, s32);
void func_0209d498(void *);
s32 func_0209d3d0(void *, void *, s32);
s32 func_0201a8d0(void *, s32, s32, s32, s32);
s32 func_02014220(void *);
void *func_0209888c(void *);
void *func_0207f55c(void *, void *);
void func_02080ecc(void *, s32, s32, s32);
s32 func_02037558(void *, s32, s32, s32);
s32 func_0204b288();
void func_0203002c(s32, s32);
s32 func_0202d928(void *);
s32 func_0202d948(void *);
void func_020135c4(void *);
void func_020b50dc();
s32 func_020b5198();
void func_020b1028();
void func_0205b124(void *);
void func_0205b120(void *);
void *func_0205afdc(void *, void *);
s32 func_0201b138(void *);
s32 func_0202dab0(void *);
void func_0201bc28(void *, void *);
}

// Menu base (unk_0202d0e4.cpp), only the parts used here
class Unk_02015b54 {
public:
    Unk_02015b54();
    virtual ~Unk_02015b54();
};

class Unk_020d89c8;

class Unk_020d8938 : public Unk_02015b54 {
public:
    Unk_020d8938();
    virtual ~Unk_020d8938();
    void func_0202d388(Unk_020d89c8 *owner, u32 idx);

    u8 pad_04[0x1a0 - 4];
};

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

    /* 0x004 */ u8 pad_04[0x350 - 4];
    /* 0x350 */ u8 unk_350[0x558 - 0x350];
    /* 0x558 */ u8 unk_558[8];
    /* 0x560 */ u8 unk_560;
    /* 0x561 */ u8 pad_561[0x618 - 0x561];
    /* 0x618 */ u8 unk_618[0x82c - 0x618];
    /* 0x82c */ void *unk_82c;
    /* 0x830 */ u8 pad_830[0x894 - 0x830];
};

// Sub-object at +0x898 (vtable 0x02270a6c)
class Unk_ov068_02270a6c : public Unk_020d8938 {
public:
    inline Unk_ov068_02270a6c() {}
    void func_ov068_0226eb90(Unk_ov068_02270afc *owner);

    /* 0x1a0 */ void *unk_1a0;
};

// Vtable 0x02270afc
class Unk_ov068_02270afc : public Unk_020d89c8 {
public:
    inline Unk_ov068_02270afc() {}
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_24();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(u32 idx, u32 v);
    virtual BOOL vfunc_68();

    void func_ov068_0226ee18();
    void func_ov068_0226ee3c();
    void func_ov068_0226ee74();
    BOOL func_ov068_0226ef58();

    /* 0x894 */ s32 unk_894;
    /* 0x898 */ Unk_ov068_02270a6c unk_898;
    /* 0xa3c */ Unk_ov068_02270afc_Fn unk_a3c;
    /* 0xa44 */ u8 unk_a44[8];
    /* 0xa4c */ void *unk_a4c;
    /* 0xa50 */ u8 pad_a50[4];
    /* 0xa54 */ u8 unk_a54;
    /* 0xa55 */ u8 pad_a55;
    /* 0xa56 */ s16 unk_a56;
    /* 0xa58 */ u8 unk_a58;
    /* 0xa59 */ u8 pad_a59[0xa74 - 0xa59];
};

// ---------------------------------------------------------------------------------------------------------------------
void Unk_ov068_02270a6c::func_ov068_0226eb90(Unk_ov068_02270afc *owner) {
    func_0202d388((Unk_020d89c8 *)owner, 0x11);
    unk_1a0 = owner;
}

extern "C" void func_ov068_0226ebb0(void *) {
    func_0209abb4(func_0209865c(func_0209750c()) + 0x94, 3);
}

extern "C" BOOL func_ov068_0226ebcc(void *) {
    if (func_0209abc4(func_0209865c(func_0209750c()) + 0x94) == 2) {
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL func_ov068_0226ec14(void *);
extern "C" void func_ov068_0226ebf0(void *p) {
    if (func_ov068_0226ec14(p) == 0) {
        func_0209abb4(func_0209865c(func_0209750c()) + 0x94, 2);
    }
}

extern "C" BOOL func_ov068_0226ec14(void *) {
    if ((u32)func_0209abc4(func_0209865c(func_0209750c()) + 0x94) > 1) {
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL func_ov068_0226ec5c(void *);
extern "C" void func_ov068_0226ec38(void *p) {
    if (func_ov068_0226ec5c(p) == 0) {
        func_0209abb4(func_0209865c(func_0209750c()) + 0x94, 1);
    }
}

extern "C" BOOL func_ov068_0226ec5c(void *) {
    if (func_0209abc4(func_0209865c(func_0209750c()) + 0x94) != 0) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov068_02270afc::vfunc_4c(u32 idx, u32 v) {
    switch (idx) {
    case 3:
        unk_560 = v;
        if (unk_894 != 0) {
            if (unk_894 == 5) {
                unk_a56 = (func_02063b8c(0x28) + 0x3c) * 0x3c;
            }
            func_ov068_0226e638(this, 7);
        }
        break;
    case 0:
        unk_560 = v;
        unk_898.func_ov068_0226eb90(this);
        func_ov068_0226e638(this, 8);
        break;
    case 1:
        unk_560 = v;
        unk_898.func_ov068_0226eb90(this);
        if (unk_894 == 0) {
            func_ov068_0226e638(this, 1);
        } else {
            func_ov068_0226e638(this, 8);
        }
        break;
    case 8:
        unk_a58 = 0x14;
        func_ov068_0226ee3c();
        if (unk_894 != 0xa && unk_894 != 5) {
            func_ov068_0226e638(this, 6);
        }
        break;
    case 4:
        func_ov068_0226e638(this, 6);
        break;
    case 2:
    case 5:
    case 6:
    case 7:
        break;
    }
}

BOOL Unk_ov068_02270afc::vfunc_48() {
    if (func_02014220(unk_618) != 0) {
        return FALSE;
    }
    if ((u32)(unk_894 - 5) <= 1) {
        return TRUE;
    }
    return FALSE;
}

extern "C" void func_ov068_0226ed88(void *) {
    func_0209abb4(func_0209865c(func_0209750c()) + 0x94, 4);
}

extern "C" BOOL func_ov068_0226eda4(void *) {
    Unk_ov068_0226eda4_V a, b, c;
    func_02116048(func_0209865c(func_0209750c()) + 0xa0, &a, 8);
    func_02116048(&a, &b, 8);
    func_0209d258(&b, 0x1e);
    c.a = 0;
    c.b = 0;
    func_0209d498(&c);
    if (func_0209d3d0(&a, &c, 0x3e) == -1 || func_0209d3d0(&a, &c, 0x3e) == 0) {
        if (func_0209d3d0(&c, &b, 0x3e) == -1) {
            return TRUE;
        }
    }
    return FALSE;
}

void Unk_ov068_02270afc::func_ov068_0226ee18() {
    func_0201a8d0(unk_350, 1, 0x100, 0x19, 0x33);
}

void Unk_ov068_02270afc::func_ov068_0226ee3c() {
    void *p = func_0209750c();
    if (p != NULL) {
        if (unk_82c != NULL) {
            func_02080ecc(func_0207f55c(unk_82c, func_0209888c(p)), 0, 0, 0);
        }
    }
}

void Unk_ov068_02270afc::func_ov068_0226ee74() {
    Unk_ov068_0226ee74_Grid *g = data_021c47c4;
    void *grid;
    s32 y, x;
    s32 z;
    if (g->w > (u8 *)0 && g->h > (u8 *)0 && g->cells != NULL) {
        grid = g->cells;
    } else {
        grid = NULL;
    }
    y = 0;
    z = 0;
    for (; y < 16; y++) {
        for (x = 0; x < 16; x++) {
            if (func_02037558(grid, x, y, z) != 0) {
                if (func_0204b288() != 0) {
                    func_0203002c(x, y);
                }
            }
        }
    }
}

BOOL Unk_ov068_02270afc::vfunc_68() {
    func_ov068_0226e54c(this);
    return TRUE;
}

BOOL Unk_ov068_02270afc::vfunc_10() {
    if (func_0202d928(this) == 0) {
        return FALSE;
    }
    Unk_ov068_0226eee0_Top *t = (Unk_ov068_0226eee0_Top *)func_0209865c(func_0209750c());
    Unk_ov068_0226eee0_Mid &m = *t;
    Unk_ov068_0226eee0_Q1 &q = m;
    if (func_0209abc4(&q) == 1) {
        Unk_ov068_0226eee0_Q1 &q2 = m;
        func_0209abb4(&q2, 2);
    }
    data_ov068_022712ac = NULL;
    return TRUE;
}

BOOL Unk_ov068_02270afc::vfunc_24() {
    if (unk_a3c) {
        return (this->*unk_a3c)();
    }
    return TRUE;
}

BOOL Unk_ov068_02270afc::func_ov068_0226ef58() {
    if (func_0201b138(this) != 0) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov068_02270afc::vfunc_00() {
    if (func_0202d948(this) == 0) {
        return FALSE;
    }
    unk_a3c = data_ov068_02270a24;
    func_ov068_0226ee74();
    func_020135c4(unk_558);
    unk_a56 = -1;
    unk_a54 = 3;
    unk_a58 = 0xb0;
    func_020b50dc();
    if (func_020b5198() != 0) {
        func_ov068_0226e638(this, 0);
    } else if (func_ov068_0226ec5c(&unk_898) != 0) {
        u32 buf[6];
        func_020b1028();
        unk_a56 = (func_02063b8c(0x14) + 0x28) * 0x3c;
        unk_a54 = func_02063b8c(4) + 2;
        func_0205b124(buf);
        unk_a4c = func_0205afdc(buf, unk_a44);
        func_ov068_0226e638(this, 6);
        func_0205b120(buf);
    } else {
        unk_a56 = (func_02063b8c(0x28) + 0x3c) * 0x3c;
        unk_a54 = func_02063b8c(4) + 7;
        func_ov068_0226e638(this, 0);
    }
    return TRUE;
}

BOOL Unk_ov068_02270afc::vfunc_04() {
    if (func_0202dab0(this) == 0) {
        return FALSE;
    }
    data_ov068_022712ac = this;
    func_0201bc28(this, &unk_898);
    unk_898.func_ov068_0226eb90(this);
    return TRUE;
}

extern "C" Unk_ov068_02270afc *func_ov068_0226f0a8() {
    return new Unk_ov068_02270afc;
}
