#include "types.h"

// Owner object (actor-like, vtable slots up to 0x64).
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
    virtual BOOL vfunc_64();
};


struct Unk_ov068_02260f90_V3 {
    s32 x, y, z;
};

extern "C" {
extern u16 data_020c6cc8;
extern u32 data_020c6d1c;
extern u8 data_021f4880[];
extern void *data_021c47c4;

s32 func_ov068_02265670(void *, void *);
s32 func_ov068_022656a8(void *, void *, s32);
void func_ov068_02265994(void *);
void func_ov068_0225f5f4(void *, void *, s32, s32, s32, void *, s32, u32, u32);

s32 func_02015e48(void *, s32);
s32 func_02019790(void *);
s32 func_020197a8(void *);
void func_02011ec0(void *, void *, void *, s32, s32);
s32 func_02011bb0(void *);
void func_02011b98(void *, s32);
void func_02011e9c(void *, s32, s32, s32);
void *func_02011b7c(void *);
void func_0205668c(void *, s32, s32, s32, s32);
void func_020195c8(void *, s32, s32, s32, u32, s32);
void func_02003ddc(void *, s32, s32, s32);
void func_0202d864(void *);
void func_0202d8e0(void *);
void func_0202d814(void *, void *);
void func_0201c564(void *);
void func_02015fe0(void *, void *, void *, s32, s32);
void func_0203d67c(void *);
void func_02019614(void *, s32, u32);
void func_0203d93c(void);
void func_0203d704(void *, s32);
void func_02094f00(s32, s32);
void func_0203a844(void);
s32 func_02014220(void *);
void *func_02015aac(void *);
s32 func_0201bcbc(void *, void *);
void func_020135c4(void *);
void func_020141b4(void *, s32, s32, s32);
void func_020196b4(void *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_0204ea88(void *, s32 *, s32 *, s32 *, s32 *, u16 *, u16 *, s32, s32);
void func_0204ed70(Unk_ov068_02260f90_V3 *, s32, s32, s32, s32);
s16 func_02002bdc(Unk_ov068_02260f90_V3 *, Unk_ov068_02260f90_V3 *);
void func_0201a99c(void *, s32);
void func_02034dd0(s32, s32, s32);
void func_0207824c(s32);
void func_0203d948(void);
}

struct Unk_ov068_02261644_V3 {
    s32 x, y, z;
    Unk_ov068_02261644_V3() {}
    ~Unk_ov068_02261644_V3() {}
    Unk_ov068_02261644_V3(const Unk_ov068_02261644_V3 &o) {
        x = o.x;
        y = o.y;
        z = o.z;
    }
};

static inline BOOL Unk_ov068_02261118_InRange(volatile u16 *p) {
    BOOL r = FALSE;
    u16 a = *p;
    u16 b = *p;
    if (!(b < 0x1380 || a > 0x139f)) {
        r = TRUE;
    }
    return r;
}

class Unk_ov068_02260f90 {
public:
    /* 0x00 */ u8 pad_00[0x1c];
    /* 0x1c */ u8 unk_1c;
    /* 0x1d */ u8 pad_1d[3];
    /* 0x20 */ s32 unk_20;

    s32 func_ov068_02260f90(Unk_ov068_Owner *o);
    void func_ov068_02260ffc(Unk_ov068_Owner *o);
    void func_ov068_02261084(Unk_ov068_Owner *o);
    BOOL func_ov068_02261118(Unk_ov068_Owner *o);
};

class Unk_ov068_02261290 {
public:
    /* 0x00 */ u8 pad_00[0x1c];
    /* 0x1c */ u8 unk_1c;

    s32 func_ov068_02261290(Unk_ov068_Owner *o);
    void func_ov068_022612fc(Unk_ov068_Owner *o);
    void func_ov068_02261394(Unk_ov068_Owner *o);
    BOOL func_ov068_02261444(Unk_ov068_Owner *o);
};

class Unk_ov068_02261574 {
public:
    /* 0x00 */ u8 pad_00[0x1c];
    /* 0x1c */ u8 unk_1c;
    /* 0x1d */ u8 pad_1d[3];
    /* 0x20 */ s32 unk_20;

    s32 func_ov068_02261574(Unk_ov068_Owner *o);
    void func_ov068_022615f0(Unk_ov068_Owner *o);
    void func_ov068_02261644(Unk_ov068_Owner *o);
    void func_ov068_022616c4(Unk_ov068_Owner *o);
    BOOL func_ov068_02261714(Unk_ov068_Owner *o);
};

class Unk_ov068_0226179c {
public:
    s32 func_ov068_0226179c(Unk_ov068_Owner *o);
    BOOL func_ov068_022617b8(Unk_ov068_Owner *o);
};

s32 Unk_ov068_02260f90::func_ov068_02260f90(Unk_ov068_Owner *o) {
    static void (Unk_ov068_02260f90::*tbl[2])(Unk_ov068_Owner *) = {&Unk_ov068_02260f90::func_ov068_02261084,
                                                                    &Unk_ov068_02260f90::func_ov068_02260ffc};
    if (unk_1c < 2) {
        (this->*tbl[unk_1c])(o);
    }
    return 0;
}

void Unk_ov068_02260f90::func_ov068_02260ffc(Unk_ov068_Owner *o) {
    if (func_02015e48((u8 *)o + 0x334, 0) == 0xcd) {
        if (func_02019790((u8 *)o + 0x564) != 0) {
            unk_1c = 2;
            if (func_ov068_02265670(this, o) == 0) {
                func_ov068_022656a8(this, o, 0);
            }
        } else if (((*(u32 *)((u8 *)o + 0x190) << 4) >> 16) == 5) {
            u16 t[1];
            t[0] = 0xfff1;
            func_02011ec0((u8 *)o + 0x9b0, o, t, 0, 3);
            *((u8 *)o + 0x9ec) = 0;
        }
    }
}

void Unk_ov068_02260f90::func_ov068_02261084(Unk_ov068_Owner *o) {
    if (func_02015e48((u8 *)o + 0x334, 0) == 0xd6) {
        if (func_02019790((u8 *)o + 0x564) != 0) {
            u16 t[1];
            t[0] = 0xfff1;
            func_02011ec0((u8 *)o + 0x9b0, o, t, 0, 3);
            unk_1c = 2;
            if (func_ov068_02265670(this, o) == 0) {
                func_ov068_022656a8(this, o, 0);
            }
        } else {
            s32 v = func_02011bb0((u8 *)o + 0x9b0);
            if (v != 0) {
                v -= 0x249;
                if (v < 0) {
                    v = 0;
                }
            }
            func_02011b98((u8 *)o + 0x9b0, v);
        }
    }
}

BOOL Unk_ov068_02260f90::func_ov068_02261118(Unk_ov068_Owner *o) {
    u16 pos[2];
    func_0202d864(pos);
    func_ov068_02265994(o);
    func_ov068_0225f5f4((u8 *)o + 0x894, o, 0, 0, 0, data_021f4880, 4, data_020c6d1c, 1);
    if (Unk_ov068_02261118_InRange(&pos[0])) {
        u16 w = data_020c6cc8;
        func_020195c8((u8 *)o + 0x564, 1, 0xcd, 3, w, 0);
        func_02011ec0((u8 *)o + 0x9b0, o, pos, 0xcd, w);
        func_02011e9c((u8 *)o + 0x9b0, 0x26, 1, 3);
        void *p = func_02011b7c((u8 *)o + 0x9b0);
        if (p != 0) {
            u32 bits = (*(u32 *)((u8 *)p + 0xa0) << 4) >> 16;
            func_0205668c((u8 *)p + 0x9c, bits, 3, 0x1000, (u16)(bits - 1));
        }
        func_02011b98((u8 *)o + 0x9b0, 0x1000);
        func_02003ddc((u8 *)o + 0x514, 0x858, 0x7f, 0);
        unk_1c = 1;
    } else {
        u16 w = data_020c6cc8;
        func_020195c8((u8 *)o + 0x564, 1, 0xd6, 1, w, 0);
        func_02011ec0((u8 *)o + 0x9b0, o, pos, 0xd6, w);
        func_02011b98((u8 *)o + 0x9b0, 0x1000);
        *((u8 *)o + 0x9ec) = 1;
        unk_1c = 0;
    }
    func_0202d8e0(o);
    func_02003ddc((u8 *)o + 0x514, 0x4f, 0x7f, 0);
    pos[1] = 0xfff1;
    func_0202d814(o, &pos[1]);
    func_0201c564((u8 *)o + 0x838);
    return TRUE;
}

s32 Unk_ov068_02261290::func_ov068_02261290(Unk_ov068_Owner *o) {
    static void (Unk_ov068_02261290::*tbl[2])(Unk_ov068_Owner *) = {&Unk_ov068_02261290::func_ov068_02261394,
                                                                    &Unk_ov068_02261290::func_ov068_022612fc};
    if (unk_1c < 2) {
        (this->*tbl[unk_1c])(o);
    }
    return 0;
}

void Unk_ov068_02261290::func_ov068_022612fc(Unk_ov068_Owner *o) {
    if (func_02015e48((u8 *)o + 0x334, 0) == 0xcd) {
        if (func_02019790((u8 *)o + 0x564) != 0) {
            func_02015fe0((u8 *)o + 0x334, o, (u8 *)o + 0x9b0, 0, 7);
            unk_1c = 2;
            if (func_ov068_02265670(this, o) == 0) {
                func_ov068_022656a8(this, o, 0);
            }
        } else if (((*(u32 *)((u8 *)o + 0x190) << 4) >> 16) == 7) {
            *((u8 *)o + 0x9ec) = 1;
            func_02003ddc((u8 *)o + 0x514, 0x857, 0x7f, 0);
        }
    }
}

void Unk_ov068_02261290::func_ov068_02261394(Unk_ov068_Owner *o) {
    if (func_02015e48((u8 *)o + 0x334, 0) == 0xd6) {
        if (func_02019790((u8 *)o + 0x564) != 0) {
            unk_1c = 2;
            if (func_ov068_02265670(this, o) == 0) {
                func_ov068_022656a8(this, o, 0);
            }
        } else if (((*(u32 *)((u8 *)o + 0x190) << 4) >> 16) < 8) {
            s32 v = func_02011bb0((u8 *)o + 0x9b0);
            if (((*(u32 *)((u8 *)o + 0x190) << 4) >> 16) == 7) {
                func_02015fe0((u8 *)o + 0x334, o, (u8 *)o + 0x9b0, 0, 7);
            }
            if (v != 0x1000) {
                v += 0x249;
                if (v > 0x1000) {
                    v = 0x1000;
                }
            }
            func_02011b98((u8 *)o + 0x9b0, v);
        }
    }
}

BOOL Unk_ov068_02261290::func_ov068_02261444(Unk_ov068_Owner *o) {
    u16 pos[2];
    func_0202d864(pos);
    func_ov068_02265994(o);
    func_ov068_0225f5f4((u8 *)o + 0x894, o, 0, 0, 0, data_021f4880, 4, data_020c6d1c, 1);
    if (Unk_ov068_02261118_InRange(&pos[0])) {
        u16 w = data_020c6cc8;
        func_020195c8((u8 *)o + 0x564, 1, 0xcd, 1, w, 0);
        func_02011ec0((u8 *)o + 0x9b0, o, pos, 0xcd, w);
        func_02011e9c((u8 *)o + 0x9b0, 0x26, w, 1);
        func_02011b98((u8 *)o + 0x9b0, 0x1000);
        *((u8 *)o + 0x9ec) = 0;
        unk_1c = 1;
    } else {
        u16 w = data_020c6cc8;
        func_020195c8((u8 *)o + 0x564, 1, 0xd6, 3, w, 0);
        func_02011ec0((u8 *)o + 0x9b0, o, pos, 0xd6, w);
        func_02011b98((u8 *)o + 0x9b0, 0);
        *((u8 *)o + 0x9ec) = 1;
        unk_1c = 0;
    }
    func_0202d8e0(o);
    func_02003ddc((u8 *)o + 0x514, 0x4f, 0x7f, 0);
    func_0201c564((u8 *)o + 0x838);
    return TRUE;
}

s32 Unk_ov068_02261574::func_ov068_02261574(Unk_ov068_Owner *o) {
    static void (Unk_ov068_02261574::*tbl[3])(Unk_ov068_Owner *) = {&Unk_ov068_02261574::func_ov068_022616c4,
                                                                    &Unk_ov068_02261574::func_ov068_02261644,
                                                                    &Unk_ov068_02261574::func_ov068_022615f0};
    if (unk_1c < 3) {
        (this->*tbl[unk_1c])(o);
    }
    return 0;
}

void Unk_ov068_02261574::func_ov068_022615f0(Unk_ov068_Owner *o) {
    if ((func_020197a8((u8 *)o + 0x564) == 2 && func_02019790((u8 *)o + 0x564) != 0) || unk_20 == 0) {
        func_0203d67c(o);
        func_02019614((u8 *)o + 0x564, 1, data_020c6cc8);
        func_0203d93c();
        unk_1c = 3;
    }
}

void Unk_ov068_02261574::func_ov068_02261644(Unk_ov068_Owner *o) {
    if (func_020197a8((u8 *)o + 0x564) == 3 && func_02019790((u8 *)o + 0x564) != 0) {
        Unk_ov068_02261644_V3 *pv = (Unk_ov068_02261644_V3 *)((u8 *)o + 0x5c);
        Unk_ov068_02261644_V3 vv(*pv);
        vv.x -= 0x2000;
        vv.z += 0x8000;
        func_020196b4((u8 *)o + 0x564, 2, 1, vv.x, vv.z, 0, 0, 0, 0, data_020c6cc8, 0);
        unk_20 = 0xc8;
        unk_1c = 2;
    }
}

void Unk_ov068_02261574::func_ov068_022616c4(Unk_ov068_Owner *o) {
    if (func_02014220((u8 *)o + 0x618) == 0) {
        func_0203a844();
        func_020196b4((u8 *)o + 0x564, 3, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
        unk_1c = 1;
    }
}

BOOL Unk_ov068_02261574::func_ov068_02261714(Unk_ov068_Owner *o) {
    void *p = func_02015aac((u8 *)o + 0x680);
    s32 v = 0;
    if (p != 0) {
        v = func_0201bcbc(o, p);
    }
    func_020135c4((u8 *)o + 0x558);
    func_ov068_0225f5f4((u8 *)o + 0x894, o, 1, 0, 0, data_021f4880, 4, data_020c6d1c, 1);
    func_020141b4((u8 *)o + 0x618, 0, v, 1);
    func_0201c564((u8 *)o + 0x838);
    unk_1c = 0;
    return TRUE;
}

s32 Unk_ov068_0226179c::func_ov068_0226179c(Unk_ov068_Owner *o) {
    func_0203d704(o, 0);
    func_02094f00(0x1d, 4);
    return 0;
}

BOOL Unk_ov068_0226179c::func_ov068_022617b8(Unk_ov068_Owner *o) {
    void *g = data_021c47c4;
    u16 s[2];
    s32 a = 0, b = 0, c = 0, d = 0;
    if (g != 0) {
        s[0] = 0x5014;
        s[1] = 0x501a;
        if (func_0204ea88(g, &a, &b, &c, &d, &s[0], &s[1], 1, 0) != 0) {
            Unk_ov068_02260f90_V3 q, p;
            p.x = 0;
            p.y = 0;
            p.z = 0;
            func_0204ed70(&p, a, b, c, d);
            q.x = p.x;
            q.y = p.y;
            q.z = p.z;
            q.x -= 0x2000;
            q.z += 0x8000;
            q.y = 0;
            Unk_ov068_02260f90_V3 *pv = (Unk_ov068_02260f90_V3 *)((u8 *)o + 0x5c);
            *pv = q;
            Unk_ov068_02260f90_V3 *pw = (Unk_ov068_02260f90_V3 *)((u8 *)o + 0x68);
            *pw = *pv;
            *(s16 *)((u8 *)o + 0x8e) = func_02002bdc(&q, &p);
            *(s16 *)((u8 *)o + 0x94) = *(s16 *)((u8 *)o + 0x8e);
            func_0201a99c((u8 *)o + 0x350, *(s16 *)((u8 *)o + 0x8e));
        }
    }
    *(s32 *)((u8 *)o + 0xa08) = 0;
    func_02019614((u8 *)o + 0x564, 1, data_020c6cc8);
    func_ov068_0225f5f4((u8 *)o + 0x894, o, 1, 0, 0, data_021f4880, 4, data_020c6d1c, 1);
    func_02034dd0(0x12, 0xf, 0);
    func_0207824c(-1);
    func_0201c564((u8 *)o + 0x838);
    func_0203d948();
    return TRUE;
}
