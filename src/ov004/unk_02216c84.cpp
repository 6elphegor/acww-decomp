#include "types.h"
#include "Unk_020d8c7c.h"

class Unk_ov004_0224c38c;
class Unk_ov004_02216ff4;

typedef BOOL (Unk_ov004_02216ff4::*Unk_ov004_02216ff4_Fn)(Unk_ov004_0224c38c *);
typedef void (Unk_ov004_02216ff4::*Unk_ov004_02216ff4_VFn)(Unk_ov004_0224c38c *);

struct Unk_ov004_0221745c_Dir {
    s32 dx;
    s32 dy;
};

struct Unk_ov004_02216ff4_Entry {
    Unk_ov004_02216ff4_Fn enter;
    Unk_ov004_02216ff4_Fn update;
};

struct Unk_ov004_022170e0_Global {
    u8 pad_00[0x64];
    s32 unk_64;
};

extern "C" {
extern void *data_ov004_02250584;
extern Unk_ov004_02216ff4_Entry data_ov004_02250678[];
extern Unk_ov004_0221745c_Dir data_ov004_02250658[];
extern Unk_ov004_0221745c_Dir data_ov004_0225065c[];
extern Unk_ov004_02216ff4_Fn data_ov004_0224c31c;
extern Unk_ov004_022170e0_Global *data_020cbb18;
extern u16 data_020c6cc8;

s32 func_0201b9fc(void *, u32, u32, u32);
s32 func_0201ba88(void *);
s32 func_0201b9e8(void *, s32 *, s32 *);
s32 func_0201b9bc(void *);
s32 func_0201c784(void *);
s32 func_0207e1f0(void *);
s32 func_0201bc4c(void *, u32);
void func_0202d388(void *, void *, s32);
void func_02015ab0(void *, s32);
s32 func_020a62a0();
s32 func_02014220(void *);
s32 func_020197a8(void *);
s32 func_02019790(void *);
void func_02019614(void *, u32, u32);
s32 func_0201bc70(void *, u32);
void func_020196b4(void *, u32, u32, u32, u32, u32, u32, u32, u32, u32, u32);
void func_0201c5f0(void *);
void func_0203d67c(void *);
void *func_02015aac(void *);
s32 func_0201bcbc(void *, void *);
void func_020141b4(void *, u32, s32, u32);
s32 func_02063b8c(u32);
void func_0204ee10(s32 *, s32 *, void *);
void func_0204ed8c(s32 *, s32, s32);
s32 func_02083eb4(void *, s32, s32);
s32 func_02083ed4(void *, s32, s32);
}

class Unk_020d8938 {
public:
    Unk_020d8938();
    virtual ~Unk_020d8938();
    u8 pad_04[0x1cc - 4];
};

class Unk_020d89c8 : public Unk_020d8c7c_Base {
public:
    Unk_020d89c8();
    virtual ~Unk_020d89c8();

    /* 0x004 */ u8 pad_04[0x8e - 4];
    /* 0x08e */ s16 unk_8e;
    /* 0x090 */ u8 pad_90[0x560 - 0x90];
    /* 0x560 */ u8 unk_560;
    /* 0x561 */ u8 pad_561[3];
    /* 0x564 */ u8 unk_564[0x54];
    /* 0x5b8 */ u8 pad_5b8[0x618 - 0x5b8];
    /* 0x618 */ u8 unk_618[0x68];
    /* 0x680 */ u8 unk_680[0x1a4];
    /* 0x824 */ u8 pad_824[0x82c - 0x824];
    /* 0x82c */ void *unk_82c;
    /* 0x830 */ u8 pad_830[8];
    /* 0x838 */ u8 unk_838[0x5c];
};

class Unk_ov004_0224c198 : public Unk_020d8938 {
public:
    Unk_ov004_0224c198() {}
};

class Unk_ov004_0224c228 : public Unk_020d89c8 {
public:
    Unk_ov004_0224c228() {}
    virtual ~Unk_ov004_0224c228();

    /* 0x894 */ u32 unk_894;
    /* 0x898 */ Unk_ov004_0224c198 unk_898;
};

class Unk_ov004_02084038 {
public:
    ~Unk_ov004_02084038();
    u8 pad_00[0x24];
};

class Unk_ov004_02216ff4 {
public:
    ~Unk_ov004_02216ff4();
    BOOL func_ov004_02216ff4(Unk_ov004_0224c38c *o);
    void func_ov004_02217240(Unk_ov004_0224c38c *o);
    BOOL func_ov004_022172b4(Unk_ov004_0224c38c *o);
    BOOL func_ov004_02216f84(Unk_ov004_0224c38c *o);
    BOOL func_ov004_02217188(Unk_ov004_0224c38c *o);
    BOOL func_ov004_02216ff8(Unk_ov004_0224c38c *o);
    BOOL func_ov004_022170dc(Unk_ov004_0224c38c *o);
    BOOL func_ov004_022170e0(Unk_ov004_0224c38c *o);
    void func_ov004_02217244(Unk_ov004_0224c38c *o);
    BOOL func_ov004_022171d4(Unk_ov004_0224c38c *o);
    BOOL func_ov004_0221727c(Unk_ov004_0224c38c *o);
    void func_ov004_02217144(Unk_ov004_0224c38c *o);
    BOOL func_ov004_02217404(Unk_ov004_0224c38c *o);
    BOOL func_ov004_0221745c(s32 *o1, s32 *o2, Unk_ov004_0224c38c *o);
    BOOL func_ov004_02217508(Unk_ov004_0224c38c *o);
    void func_ov004_02217528();
    void func_ov004_02217530(Unk_ov004_0224c38c *o, s32 idx);
    void func_ov004_0221757c(Unk_ov004_0224c38c *o);

    /* 0x00 */ s32 unk_00;
    /* 0x04 */ Unk_ov004_02216ff4_Entry *unk_04;
    /* 0x08 */ s32 unk_08;
    /* 0x0c */ u8 unk_0c;
    /* 0x0d */ u8 pad_0d[3];
    /* 0x10 */ s32 unk_10;
};

class Unk_ov004_0224c38c : public Unk_020d89c8 {
public:
    virtual ~Unk_ov004_0224c38c();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(u32 idx, u32 v);

    /* 0x894 */ Unk_ov004_02216ff4_Fn unk_894;
    /* 0x89c */ Unk_ov004_02216ff4 unk_89c;
    /* 0x8b0 */ Unk_ov004_02084038 unk_8b0;
    /* 0x8d4 */ s32 unk_8d4;
};

// ---------------------------------------------------------------------------------------------------------------------
extern "C" void *func_ov004_02216c84() {
    return data_ov004_02250584;
}

extern "C" Unk_ov004_0224c228 *func_ov004_02216c90() {
    return new Unk_ov004_0224c228;
}

Unk_ov004_0224c38c::~Unk_ov004_0224c38c() {}

void Unk_ov004_0224c38c::vfunc_4c(u32 idx, u32 v) {
    switch (idx) {
    case 3:
        unk_560 = v;
        if (v != 4) {
            func_0201b9fc(this, 1, data_020cbb18->unk_64, v);
            unk_89c.func_ov004_02217530(this, 2);
        } else {
            if (func_0201ba88(this) == 0) {
                return;
            }
            s32 g = data_020cbb18->unk_64;
            func_0201b9fc(this, 1, g, g);
            if (unk_82c != 0 && func_0207e1f0(unk_82c) != 3) {
                unk_8d4 = 12;
            } else {
                switch (func_0201c784(this)) {
                case 1:
                    unk_8d4 = 3;
                    break;
                case 0:
                    unk_8d4 = 5;
                    break;
                case 8:
                case 9:
                    unk_8d4 = 11;
                    break;
                default:
                    unk_8d4 = 0;
                    break;
                }
            }
            unk_89c.func_ov004_02217530(this, 2);
        }
        break;
    case 0:
        unk_560 = v;
        if (v != 4 && v != data_020cbb18->unk_64) {
            func_0201b9fc(this, 1, v, v);
            unk_89c.func_ov004_02217530(this, 4);
        } else {
            if (func_0201ba88(this) != 0) {
                s32 g = data_020cbb18->unk_64;
                func_0201b9fc(this, 1, g, g);
                func_0202d388(unk_680, this, unk_8d4);
                func_02015ab0(unk_680, func_0201bc4c(this, 4));
                unk_89c.func_ov004_02217530(this, 1);
                unk_8d4 = 0;
            }
        }
        break;
    case 8:
        if (v == 4) {
            if (func_020a62a0() != 0) {
                func_0201b9fc(this, 1, data_020cbb18->unk_64, 4);
                if (unk_89c.func_ov004_02217508(this) == 0) {
                    unk_89c.func_ov004_02217530(this, 0);
                }
            } else {
                func_0201b9fc(this, 1, 4, data_020cbb18->unk_64);
                unk_89c.func_ov004_02217530(this, 3);
            }
        }
        break;
    case 4:
        if (func_0201b9bc(this) != 0) {
            if (func_0201ba88(this) != 0) {
                s32 a = 4;
                s32 b = 4;
                if (func_0201b9e8(this, &a, &b) != 0) {
                    if (v == 4) {
                        goto chk;
                    }
                    if (v == b) {
                        goto body;
                    }
                chk:
                    if (v != 4) {
                        break;
                    }
                body:
                    func_0201b9fc(this, 1, data_020cbb18->unk_64, 4);
                    if (unk_89c.func_ov004_02217508(this) == 0) {
                        unk_89c.func_ov004_02217530(this, 0);
                    }
                }
            }
        }
        break;
    }
}

BOOL Unk_ov004_0224c38c::vfunc_48() {
    if (func_02014220(unk_618) != 0 || func_0201b9bc(this) != 0) {
        return FALSE;
    }
    return TRUE;
}

BOOL Unk_ov004_02216ff4::func_ov004_02217404(Unk_ov004_0224c38c *o) {
    o->unk_894 = data_ov004_0224c31c;
    func_020196b4(o->unk_564, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    unk_10 = 0;
    return TRUE;
}

BOOL Unk_ov004_02216ff4::func_ov004_022172b4(Unk_ov004_0224c38c *o) {
    u8 *sub = o->unk_564;
    s32 a, b;
    if (func_02019790(sub) != 0) {
        a = 0;
        b = 0;
        if (func_02063b8c(7) == 0) {
            if ((o->unk_8e & 0x3fff) != 0) {
                s32 v = (s32)(func_02063b8c(4) << 30) >> 16;
                if (v == o->unk_8e) {
                    v = (s16)(v + 0x4000);
                }
                func_020196b4(sub, 3, 1, 0, 0, 0, v, 0, 0, data_020c6cc8, 0);
            } else {
                if (func_02063b8c(3) != 0 && func_ov004_0221745c(&a, &b, o) != 0) {
                    func_020196b4(sub, 1, 1, a, b, 0, 0, 0, 0, data_020c6cc8, 0);
                    unk_10 = 0x3c;
                } else {
                    s32 v = (s32)(func_02063b8c(4) << 30) >> 16;
                    if (v == o->unk_8e) {
                        v = (s16)(v + 0x4000);
                    }
                    func_020196b4(sub, 3, 1, 0, 0, 0, v, 0, 0, data_020c6cc8, 0);
                }
            }
        } else {
            func_020196b4(sub, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
        }
    } else {
        if (unk_10 == 0 && func_020197a8(sub) == 1) {
            func_020196b4(sub, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
        }
    }
    return FALSE;
}

BOOL Unk_ov004_02216ff4::func_ov004_02216f84(Unk_ov004_0224c38c *o) {
    if (func_0201ba88(o) != 0) {
        s32 a = 4;
        s32 b = 4;
        if (func_0201b9e8(o, &a, &b) != 0) {
            if (a == 4) {
                if (func_020a62a0() != 0) {
                    func_0201b9fc(o, 1, data_020cbb18->unk_64, 4);
                    if (o->unk_89c.func_ov004_02217508(o) == 0) {
                        o->unk_89c.func_ov004_02217530(o, 0);
                    }
                }
            }
        }
    }
    return FALSE;
}

BOOL Unk_ov004_02216ff4::func_ov004_02216ff8(Unk_ov004_0224c38c *o) {
    if (func_0201ba88(o) != 0) {
        s32 a = 4;
        s32 b = 4;
        s32 la;
        void *w = o->unk_82c;
        s32 g;
        if (func_0201b9e8(o, &a, &b) != 0 && ((la = a), la == (g = data_020cbb18->unk_64)) && la == b) {
            func_0201b9fc(o, 1, g, g);
            if (w != 0 && func_0207e1f0(w) != 3) {
                o->unk_8d4 = 12;
            } else {
                o->unk_8d4 = 0;
            }
            func_0202d388(o->unk_680, o, o->unk_8d4);
            func_02015ab0(o->unk_680, func_0201bc4c(o, 4));
            o->unk_89c.func_ov004_02217530(o, 1);
        } else {
            if (func_020a62a0() != 0 && b == 4) {
                func_0201b9fc(o, 1, data_020cbb18->unk_64, 4);
                if (o->unk_89c.func_ov004_02217508(o) == 0) {
                    o->unk_89c.func_ov004_02217530(o, 0);
                }
            }
        }
    }
    return FALSE;
}

BOOL Unk_ov004_02216ff4::func_ov004_02216ff4(Unk_ov004_0224c38c *o) {
    return TRUE;
}

void Unk_ov004_02216ff4::func_ov004_02217240(Unk_ov004_0224c38c *o) {}

BOOL Unk_ov004_02216ff4::func_ov004_022170dc(Unk_ov004_0224c38c *o) {
    return TRUE;
}

BOOL Unk_ov004_02216ff4::func_ov004_022170e0(Unk_ov004_0224c38c *o) {
    static Unk_ov004_02216ff4_VFn tbl[1] = {&Unk_ov004_02216ff4::func_ov004_02217144};
    if (unk_0c < 1) {
        (this->*tbl[unk_0c])(o);
    }
    return FALSE;
}

void Unk_ov004_02216ff4::func_ov004_02217144(Unk_ov004_0224c38c *o) {
    if (func_020197a8(o->unk_564) == 3) {
        if (func_02019790(o->unk_564) != 0) {
            func_02019614(o->unk_564, 2, data_020c6cc8);
            unk_0c = 1;
        }
    }
}

BOOL Unk_ov004_02216ff4::func_ov004_02217188(Unk_ov004_0224c38c *o) {
    s32 t = func_0201bc70(o, o->unk_560);
    func_020196b4(o->unk_564, 3, 2, 0, 0, 0, t, 0, 0, data_020c6cc8, 0);
    unk_0c = 0;
    return TRUE;
}

BOOL Unk_ov004_02216ff4::func_ov004_022171d4(Unk_ov004_0224c38c *o) {
    static Unk_ov004_02216ff4_VFn tbl[2] = {&Unk_ov004_02216ff4::func_ov004_02217244, &Unk_ov004_02216ff4::func_ov004_02217240};
    if (unk_0c < 2) {
        (this->*tbl[unk_0c])(o);
    }
    return FALSE;
}

void Unk_ov004_02216ff4::func_ov004_02217244(Unk_ov004_0224c38c *o) {
    if (func_02014220(o->unk_618) == 0) {
        func_0201c5f0(o->unk_838);
        func_0203d67c(o);
        unk_0c = 1;
    }
}

BOOL Unk_ov004_02216ff4::func_ov004_0221727c(Unk_ov004_0224c38c *o) {
    void *t = func_02015aac(o->unk_680);
    s32 r = 0;
    if (t != 0) {
        r = func_0201bcbc(o, t);
    }
    func_020141b4(o->unk_618, 0, r, 0);
    return TRUE;
}

BOOL Unk_ov004_02216ff4::func_ov004_0221745c(s32 *o1, s32 *o2, Unk_ov004_0224c38c *o) {
    s32 x, y;
    s32 v[3];
    v[0] = 0;
    v[1] = 0;
    v[2] = 0;
    x = 0;
    y = 0;
    u8 dir = (o->unk_8e >> 14) & 3;
    func_0204ee10(&x, &y, (u8 *)o + 0x5c);
    s32 px = x;
    s32 py = y;
    px += data_ov004_02250658[dir].dx;
    py += data_ov004_0225065c[dir].dx;
    if ((u32) * (volatile s32 *)&y < 0xe) {
        if (func_02083eb4(&o->unk_8b0, px, py) != 0) {
            func_0204ed8c(v, px, py);
            *o1 = v[0];
            *o2 = v[2];
            return TRUE;
        }
    } else {
        if (func_02083ed4(&o->unk_8b0, px, py) != 0) {
            func_0204ed8c(v, px, py);
            *o1 = v[0];
            *o2 = v[2];
            return TRUE;
        }
    }
    return FALSE;
}

BOOL Unk_ov004_02216ff4::func_ov004_02217508(Unk_ov004_0224c38c *o) {
    BOOL r = FALSE;
    if (unk_08 < 5) {
        func_ov004_02217530(o, unk_08);
        func_ov004_02217528();
        r = TRUE;
    }
    return r;
}

void Unk_ov004_02216ff4::func_ov004_0221757c(Unk_ov004_0224c38c *o) {
    if (unk_04 != 0) {
        (this->*unk_04->update)(o);
    }
    if (unk_10 > 0) {
        unk_10--;
    }
}

void Unk_ov004_02216ff4::func_ov004_02217528() {
    unk_08 = 5;
}

void Unk_ov004_02216ff4::func_ov004_02217530(Unk_ov004_0224c38c *o, s32 idx) {
    if (idx >= 0 && idx < 5) {
        unk_00 = idx;
        unk_04 = &data_ov004_02250678[unk_00];
        unk_0c = 0;
        Unk_ov004_02216ff4_Entry *e = unk_04;
        if (e != 0 && e->enter != 0) {
            (this->*e->enter)(o);
        }
    }
}
