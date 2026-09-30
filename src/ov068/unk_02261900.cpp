#include "types.h"

class Unk_ov068_Owner {
public:
    virtual void vfunc_00();
    virtual void vfunc_04();
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
    virtual void vfunc_38();
    virtual void vfunc_3c();
    virtual void vfunc_40();
    virtual void vfunc_44();
    virtual BOOL vfunc_48(s32 a);
    virtual void vfunc_4c();
    virtual void vfunc_50();
    virtual void vfunc_54();
    virtual void vfunc_58();
    virtual void vfunc_5c();
    virtual void vfunc_60();
    virtual s32 vfunc_64();
};

struct Unk_ov068_02261cd4_Vec {
    s32 x;
    s32 y;
    s32 z;
};

struct Unk_ov068_02261cd4_Pad {
    u8 pad_00[0x5c];
};

struct Unk_ov068_02261cd4_Tgt : Unk_ov068_02261cd4_Pad, Unk_ov068_02261cd4_Vec {
};

struct Unk_ov068_02262044_Ent {
    u16 a;
    u8 b;
    u8 c;
};

struct Unk_ov068_02262044_Vec {
    s32 x, y, z;
};

extern "C" {
extern s16 data_ov068_0226f0e4;
extern s16 data_ov068_02270c24;
extern u16 data_020c6cc8;
extern u32 data_020c6d1c;
extern u8 data_021f4880[];
extern Unk_ov068_02262044_Ent data_ov068_0226f164[];

s32 func_ov068_0225f83c(void *);
void func_ov068_0225f838(...);
s32 func_ov068_022656a8(void *, void *, s32);
s32 func_ov068_02264aa0(void *, void *);
void func_ov068_02265994(void *);
void func_ov068_0225f5f4(void *, void *, s32, s32, s32, void *, s32, u32, u32);

s32 func_020197a8(void *);
s32 func_02019790(void *);
void func_02019614(void *, s32, u32);
s32 func_0201bc70(void *, s32);
void func_020196b4(void *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
void func_0202d8d4(void *);
void func_0202d8e0(void *);
void func_0201c56c(void *);
s32 func_0201c7c0(void *);
s32 func_0201bd38(void *, void *);
s32 func_0201bc58(void *, void *);
s32 func_0201bcbc(void *, void *);
s32 func_020e96a4(void *, void *);
void func_0201a9ec(void *, void *);
s32 func_02015e48(void *, s32);
s32 func_02063b8c(s32);
void func_02090330(u32, void *, void *, s32);
void func_02003ddc(void *, s32, s32, s32);
void func_0207c1e8(s32);
void func_0207c190(s32, s32);
void *func_020951ec(s32);
void func_020195c8(void *, s32, s32, s32, u32, s32);
}

class Unk_ov068_02261900 {
public:
    /* 0x00 */ u8 pad_00[0x1c];
    /* 0x1c */ u8 unk_1c;
    /* 0x1d */ u8 pad_1d[3];
    /* 0x20 */ s32 unk_20;
    /* 0x24 */ u8 pad_24[0xe4 - 0x24];
    /* 0xe4 */ Unk_ov068_02261cd4_Tgt *unk_e4;
    /* 0xe8 */ s32 unk_e8;
    /* 0xec */ s32 unk_ec;
    /* 0xf0 */ s32 unk_f0;
    /* 0xf4 */ u32 unk_f4;

    s32 func_ov068_02261900(Unk_ov068_Owner *o);
    void func_ov068_0226196c(Unk_ov068_Owner *o);
    void func_ov068_022619e8(Unk_ov068_Owner *o);
    BOOL func_ov068_02261a2c(Unk_ov068_Owner *o);
    s32 func_ov068_02261ab4(Unk_ov068_Owner *o);
    BOOL func_ov068_02261ab8(Unk_ov068_Owner *o);
    s32 func_ov068_02261ae8(Unk_ov068_Owner *o);
    void func_ov068_02261b4c(Unk_ov068_Owner *o);
    BOOL func_ov068_02261b90(Unk_ov068_Owner *o);
    s32 func_ov068_02261c38(Unk_ov068_Owner *o);
    void func_ov068_02261cd4(Unk_ov068_Owner *o);
    void func_ov068_02261db0(Unk_ov068_Owner *o);
    void func_ov068_02261e10(Unk_ov068_Owner *o);
    void func_ov068_02261f08(Unk_ov068_Owner *o);
    void func_ov068_02262044(Unk_ov068_Owner *o);
    BOOL func_ov068_0226218c(Unk_ov068_Owner *o, s32 r);
    BOOL func_ov068_022621d4(Unk_ov068_Owner *o);
    BOOL func_ov068_022621fc(Unk_ov068_Owner *o);
};

s32 Unk_ov068_02261900::func_ov068_02261900(Unk_ov068_Owner *o) {
    static void (Unk_ov068_02261900::*tbl[2])(Unk_ov068_Owner *) = {&Unk_ov068_02261900::func_ov068_022619e8,
                                                                     &Unk_ov068_02261900::func_ov068_0226196c};
    if (unk_1c < 2) {
        (this->*tbl[unk_1c])(o);
    }
    return 0;
}

void Unk_ov068_02261900::func_ov068_0226196c(Unk_ov068_Owner *o) {
    if (func_ov068_0225f83c((u8 *)o + 0x9f0) == 0) {
        unk_1c = 2;
        func_ov068_022656a8(this, o, 0);
    } else if (*(u16 *)((u8 *)o + 0xa02) >= data_ov068_0226f0e4) {
        func_ov068_0225f838((u8 *)o + 0x9f0);
        func_ov068_022656a8(this, o, 0x15);
    } else if (func_ov068_02264aa0(this, o) != 0) {
        func_ov068_0225f838((u8 *)o + 0x9f0, 0);
        func_ov068_022656a8(this, o, 0x13);
    }
}

void Unk_ov068_02261900::func_ov068_022619e8(Unk_ov068_Owner *o) {
    if (func_020197a8((u8 *)o + 0x564) == 3 && func_02019790((u8 *)o + 0x564) != 0) {
        func_02019614((u8 *)o + 0x564, 1, data_020c6cc8);
        unk_1c = 1;
    }
}

BOOL Unk_ov068_02261900::func_ov068_02261a2c(Unk_ov068_Owner *o) {
    s32 t = func_0201bc70(o, 4);
    func_ov068_02265994(o);
    func_020196b4((u8 *)o + 0x564, 3, 1, 0, 0, 0, t, 0, 0, data_020c6cc8, 0);
    func_ov068_0225f5f4((u8 *)o + 0x894, o, 1, 0, 0, data_021f4880, 4, data_020c6d1c, 1);
    func_0202d8d4(o);
    func_0201c56c((u8 *)o + 0x838);
    return TRUE;
}

s32 Unk_ov068_02261900::func_ov068_02261ab4(Unk_ov068_Owner *o) {
    return 0;
}

BOOL Unk_ov068_02261900::func_ov068_02261ab8(Unk_ov068_Owner *o) {
    func_ov068_02265994(o);
    func_02019614((u8 *)o + 0x564, 2, data_020c6cc8);
    func_0202d8e0(o);
    return TRUE;
}

s32 Unk_ov068_02261900::func_ov068_02261ae8(Unk_ov068_Owner *o) {
    static void (Unk_ov068_02261900::*tbl[1])(Unk_ov068_Owner *) = {&Unk_ov068_02261900::func_ov068_02261b4c};
    if (unk_1c < 1) {
        (this->*tbl[unk_1c])(o);
    }
    return 0;
}

void Unk_ov068_02261900::func_ov068_02261b4c(Unk_ov068_Owner *o) {
    if (func_020197a8((u8 *)o + 0x564) == 3 && func_02019790((u8 *)o + 0x564) != 0) {
        func_02019614((u8 *)o + 0x564, 2, data_020c6cc8);
        unk_1c = 1;
    }
}

BOOL Unk_ov068_02261900::func_ov068_02261b90(Unk_ov068_Owner *o) {
    func_ov068_02265994(o);
    if (func_0201c7c0(o) != 0 || *(s32 *)((u8 *)o + 0xa08) != 3 || *(u8 *)((u8 *)o + 0xa00) != 0) {
        unk_1c = 1;
    } else {
        s32 t = func_0201bc70(o, *(u8 *)((u8 *)o + 0x560));
        func_020196b4((u8 *)o + 0x564, 3, 2, 0, 0, 0, t, 0, 0, data_020c6cc8, 0);
        func_ov068_0225f5f4((u8 *)o + 0x894, o, 1, 0, 0, data_021f4880, 4, data_020c6d1c, 1);
        unk_1c = 0;
    }
    return TRUE;
}

s32 Unk_ov068_02261900::func_ov068_02261c38(Unk_ov068_Owner *o) {
    static void (Unk_ov068_02261900::*tbl[5])(Unk_ov068_Owner *) = {
        &Unk_ov068_02261900::func_ov068_02262044, &Unk_ov068_02261900::func_ov068_02261f08,
        &Unk_ov068_02261900::func_ov068_02261e10, &Unk_ov068_02261900::func_ov068_02261db0,
        &Unk_ov068_02261900::func_ov068_02261cd4};
    if (unk_1c < 5) {
        (this->*tbl[unk_1c])(o);
    }
    return 0;
}

void Unk_ov068_02261900::func_ov068_02261cd4(Unk_ov068_Owner *o) {
    if (*(u16 *)((u8 *)o + 0xa02) >= data_ov068_0226f0e4) {
        func_ov068_022656a8(this, o, 0x15);
    } else if (func_ov068_02264aa0(this, o) != 0) {
        func_ov068_022656a8(this, o, 0x13);
    } else if (unk_20 == 0) {
        if (func_ov068_0226218c(o, 0x3000) != 0) {
            func_020196b4((u8 *)o + 0x564, 0xb, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
            unk_1c = 2;
            unk_20 = 0xc8;
        } else if (func_020197a8((u8 *)o + 0x564) == 0 && func_02019790((u8 *)o + 0x564) != 0) {
            Unk_ov068_02261cd4_Tgt *p = unk_e4;
            Unk_ov068_02261cd4_Vec *pv = (Unk_ov068_02261cd4_Vec *)((u8 *)p + 0x5c);
            func_020196b4((u8 *)o + 0x564, 2, 1, pv->x, pv->z, 0, 0, 0, 0, data_020c6cc8, 0);
            unk_1c = 1;
            unk_20 = 0xc8;
        }
    }
}

void Unk_ov068_02261900::func_ov068_02261db0(Unk_ov068_Owner *o) {
    if (func_020197a8((u8 *)o + 0x564) == 3 && func_02019790((u8 *)o + 0x564) != 0) {
        func_02019614((u8 *)o + 0x564, 1, data_020c6cc8);
        unk_1c = 4;
        unk_20 = 10;
    } else if (func_ov068_02264aa0(this, o) != 0) {
        func_ov068_022656a8(this, o, 0x13);
    }
}

void Unk_ov068_02261900::func_ov068_02261e10(Unk_ov068_Owner *o) {
    if (unk_e4 != 0) {
        if (func_ov068_0226218c(o, 0x5000) == 0) {
            s32 t = func_0201bcbc(o, unk_e4);
            func_020196b4((u8 *)o + 0x564, 3, 1, 0, 0, 0, t, 0, 0, data_020c6cc8, 0);
            unk_1c = 3;
        } else if (*(u16 *)((u8 *)o + 0xa02) >= data_ov068_0226f0e4) {
            func_ov068_022656a8(this, o, 0x15);
        } else if (func_ov068_02264aa0(this, o) != 0) {
            func_ov068_022656a8(this, o, 0x13);
        } else if (unk_20 == 0) {
            func_ov068_022656a8(this, o, 0);
            unk_f4 = 0x4b0;
            if (o->vfunc_64() != 0) {
                func_0207c1e8(o->vfunc_64());
            }
        }
    } else {
        func_ov068_022656a8(this, o, 0);
        unk_f4 = 0x4b0;
        if (o->vfunc_64() != 0) {
            func_0207c190(o->vfunc_64(), -1);
        }
    }
}

void Unk_ov068_02261900::func_ov068_02261f08(Unk_ov068_Owner *o) {
    void *q = (u8 *)o + 0x350;
    if (unk_e4 != 0) {
        if (func_ov068_0226218c(o, 0x3000) != 0) {
            func_020196b4((u8 *)o + 0x564, 0xb, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
            unk_1c = 2;
            unk_20 = 0xc8;
        } else if (*(u16 *)((u8 *)o + 0xa02) >= data_ov068_0226f0e4) {
            func_ov068_022656a8(this, o, 0x15);
        } else if (func_ov068_02264aa0(this, o) != 0) {
            func_ov068_022656a8(this, o, 0x13);
        } else if (unk_20 == 0) {
            func_ov068_022656a8(this, o, 0);
            unk_f4 = 0x4b0;
            if (o->vfunc_64() != 0) {
                func_0207c1e8(o->vfunc_64());
            }
        } else if (func_ov068_022621d4(o) != 0) {
            func_0201a9ec(q, (u8 *)unk_e4 + 0x5c);
        } else {
            func_ov068_022656a8(this, o, 0);
            unk_f4 = 0x4b0;
            if (o->vfunc_64() != 0) {
                func_0207c1e8(o->vfunc_64());
            }
        }
    } else {
        func_ov068_022656a8(this, o, 0);
        unk_f4 = 0x4b0;
        if (o->vfunc_64() != 0) {
            func_0207c190(o->vfunc_64(), -1);
        }
    }
}

void Unk_ov068_02261900::func_ov068_02262044(Unk_ov068_Owner *o) {
    if (unk_e4 != 0) {
        if (func_02019790((u8 *)o + 0x564) != 0) {
            if (func_ov068_0226218c(o, 0x3000) != 0) {
                func_020196b4((u8 *)o + 0x564, 0xb, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
                unk_1c = 2;
                unk_20 = 0xc8;
            } else {
                Unk_ov068_02261cd4_Tgt *p = unk_e4;
                Unk_ov068_02261cd4_Vec *pv = (Unk_ov068_02261cd4_Vec *)((u8 *)p + 0x5c);
                func_020196b4((u8 *)o + 0x564, 2, 1, pv->x, pv->z, 0, 0, 0, 0, data_020c6cc8, 0);
                unk_1c = 1;
                unk_20 = 0xc8;
            }
        } else if (func_02015e48((u8 *)o + 0x334, 0) == 0xdf && ((*(u32 *)((u8 *)o + 0x190) << 4) >> 16) == 9) {
            Unk_ov068_02262044_Vec v;
            s16 h;
            v.x = *(s32 *)((u8 *)o + 0x478);
            v.y = *(s32 *)((u8 *)o + 0x47c);
            v.z = *(s32 *)((u8 *)o + 0x480);
            h = *(s16 *)((u8 *)o + 0x8e);
            Unk_ov068_02262044_Ent *e = &data_ov068_0226f164[func_02063b8c(2)];
            func_02090330(e->a, &v, &h, 0);
            func_02003ddc((u8 *)o + 0x514, e->b + 0x84, 0x7f, 0);
        }
    } else {
        func_ov068_022656a8(this, o, 0);
        unk_f4 = 0x4b0;
        if (o->vfunc_64() != 0) {
            func_0207c190(o->vfunc_64(), -1);
        }
    }
}

BOOL Unk_ov068_02261900::func_ov068_0226218c(Unk_ov068_Owner *o, s32 r) {
    BOOL res = FALSE;
    if (func_0201bd38(o, unk_e4) <= r) {
        s32 v = func_0201bc58(o, unk_e4);
        s32 lim = data_ov068_02270c24;
        if (v >= -lim && v <= lim) {
            res = TRUE;
        }
    }
    return res;
}

BOOL Unk_ov068_02261900::func_ov068_022621d4(Unk_ov068_Owner *o) {
    if (func_020e96a4((u8 *)o + 0x5c, &unk_e8) <= 0xc000) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov068_02261900::func_ov068_022621fc(Unk_ov068_Owner *o) {
    func_ov068_02265994(o);
    unk_e4 = (Unk_ov068_02261cd4_Tgt *)func_020951ec(4);
    Unk_ov068_02261cd4_Vec *pv = (Unk_ov068_02261cd4_Vec *)((u8 *)o + 0x5c);
    unk_e8 = *(s32 *)((u8 *)o + 0x5c);
    unk_ec = pv->y;
    unk_f0 = pv->z;
    func_020195c8((u8 *)o + 0x564, 1, 0xdf, 1, data_020c6cc8, 0);
    func_ov068_0225f5f4((u8 *)o + 0x894, o, 1, 0, 0, data_021f4880, 4, data_020c6d1c, 1);
    unk_1c = 0;
    func_0202d8d4(o);
    return TRUE;
}
