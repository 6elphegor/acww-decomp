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
    virtual void *vfunc_64();
};

struct Unk_ov068_02263aac_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

struct Unk_ov068_0226392c_V3 {
    s32 x, y, z;
};

class Unk_ov068_02263a40;
typedef void (Unk_ov068_02263a40::*Unk_ov068_02263b90_Fn)(Unk_ov068_Owner *);

extern "C" {
extern u8 data_021e6e4c[];
extern u8 data_021dfd8c[];
extern u8 data_021f4880[];
extern u32 data_020c6d1c;
extern u16 data_020c6cc8;
extern Unk_ov068_02263b90_Fn data_ov068_0226f910;

void *func_02071b00(void *, u8);
s32 func_02071e8c(void *, void *);
u32 func_0207bcfc(u32, u32, u32);
s32 func_0209750c();
void *func_0209888c(...);
s32 func_02094218(void *);
void *func_0207f854(u32, void *);
s32 func_02080dd8(void *);
s32 func_02063b8c(s32);
s32 func_0201c614(void *, s32, s32);
void func_0201c5f0(void *);
s32 func_020805c4(void *);
void *func_0207bd3c(void *, void *, s32);
void func_02133ef8(void *, s32);
Unk_ov068_Owner *func_0201c7f8(void *);
s32 func_0207bfb4(void *, s32);
s32 func_0207ac2c(void *, s32, s32);
void func_0207ab90(void *, s32, s32, s32);
s32 func_02014220(void *);
void func_0203d67c(void *);
void func_0201c804(void *, s32);
void func_0201c7ec(void *, s32);
void func_ov068_02265994(void *);
void func_02013464(void *);
s32 func_0201c7c0(void *);
void func_02014198(void *, s32, s32);
void func_ov068_0225f5f4(void *, void *, s32, s32, s32, void *, s32, u32, u32);
void *func_02015aac(void *);
s32 func_0201bcbc(void *, void *);
void func_020141b4(void *, s32, s32, s32);
s32 func_02015e48(void *, s32);
s32 func_02019790(void *);
void func_0201bd9c(void *, s32);
void func_0202d864(void *, void *);
s32 func_ov068_022656a8(void *, void *, s32);
s32 func_ov068_022656a4(void *, s32);
s32 func_02013568(void *, void *);
void *func_0207e310(void *);
void func_0207e334(void *);
s32 func_ov003_02218ce4();
void func_020195c8(void *, s32, s32, s32, s32, s32);
void func_020785e8(void *, s32);
void func_0207857c(void *, s32);
void *func_0207f170(void *);
void func_0204ed8c(void *, u32, u32);
void func_0201a99c(void *);
void func_0202d8e0(void *);
void func_0201c564(void *);
void func_02019614(void *, s32, u32);
s32 func_020785ec(void *);
s32 func_0207e278(void *);
s32 func_0207c618(void *, s32);
s32 func_ov068_02265434(void *, void *);
void *func_020951ec(s32);
s32 func_0201bcf8(void *, void *, s32);
void func_02013374(void *);
void func_ov068_02265fb4(void *);
void func_0207c298(void *, s32);

void *func_ov068_02263600(void *unused, void *x);
s32 func_ov068_02263668(void *unused, u32 *a, u32 *b, u32 c, u32 d);
void func_ov068_02263704(void *a, void *b, u8 *tbl, s32 n, u8 p5, u8 p6);
void func_ov068_02263738(void *a, void *o, s32 x, s32 y, u8 flag);
void func_ov068_02263768(void *a, s32 unused, s8 *t);
void func_ov068_022637c0(void *a, void *o, s8 *t);
void func_ov068_02263808(void *a, void *r1, void *r2, s8 *t);
s32 func_ov068_02263840(void *a, void *o);
s32 func_ov068_02263880(void *a, void *b);
}

class Unk_ov068_022638c0 {
public:
    /* 0x00 */ u8 pad_00[0x1c];
    /* 0x1c */ u8 unk_1c;

    s32 func_ov068_022638c0(Unk_ov068_Owner *o);
    void func_ov068_0226392c(Unk_ov068_Owner *o);
    void func_ov068_02263930(Unk_ov068_Owner *o);
    BOOL func_ov068_02263978(Unk_ov068_Owner *o);
};

class Unk_ov068_02263a40 {
public:
    /* 0x00 */ u8 pad_00[0x1c];
    /* 0x1c */ u8 unk_1c;
    /* 0x1d */ u8 pad_1d[0x34 - 0x1d];
    /* 0x34 */ s16 unk_34;
    /* 0x36 */ u8 pad_36[0xf8 - 0x36];
    /* 0xf8 */ s32 unk_f8;

    s32 func_ov068_02263a40(Unk_ov068_Owner *o);
    void func_ov068_02263aac(Unk_ov068_Owner *o);
    void func_ov068_02263b90(Unk_ov068_Owner *o);
    BOOL func_ov068_02263c20(Unk_ov068_Owner *o);
};

class Unk_ov068_02263cf0 {
public:
    /* 0x00 */ u8 pad_00[0x1c];
    /* 0x1c */ u8 unk_1c;

    s32 func_ov068_02263cf0(Unk_ov068_Owner *o);
    void func_ov068_02263d5c(Unk_ov068_Owner *o);
    void func_ov068_02263d6c(Unk_ov068_Owner *o);
    BOOL func_ov068_02263d74(Unk_ov068_Owner *o);
};

class Unk_ov068_02263e4c {
public:
    /* 0x00 */ u8 pad_00[0x1c];
    /* 0x1c */ u8 unk_1c;
    /* 0x1d */ u8 pad_1d[3];
    /* 0x20 */ s32 unk_20;
    /* 0x24 */ u8 pad_24[0x3c - 0x24];
    /* 0x3c */ u8 unk_3c[0xf8 - 0x3c];
    /* 0xf8 */ s32 unk_f8;

    s32 func_ov068_02263e4c(Unk_ov068_Owner *o);
    void func_ov068_02263eb8(Unk_ov068_Owner *o);
    void func_ov068_02264000(Unk_ov068_Owner *o);
};

extern "C" {

void *func_ov068_02263600(void *unused, void *x) {
    if ((u32)data_021e6e4c != 0) {
        u32 i; u16 mask; u32 cnt; mask = 0; cnt = 0; i = 0;
        goto test0;
    loop0:
        if (x == 0 || func_02071e8c(func_02071b00(data_021e6e4c, i), x) == 0) {
            mask |= 1 << i;
            cnt++;
        }
        i++;
    test0:
        if (i < 8) goto loop0;
        u32 r = func_0207bcfc(mask, cnt, 8);
        if (r < 8) {
            return func_02071b00(data_021e6e4c, r);
        }
    }
    return 0;
}

s32 func_ov068_02263668(void *unused, u32 *a, u32 *b, u32 c, u32 d) {
    void *g;
    if (func_0209750c() != 0) {
        g = func_0209888c(func_0209750c());
    } else {
        g = 0;
    }
    if (g != 0 && func_02094218(g) != 0) {
        s32 va = -128;
        s32 vb = -128;
        void *p1 = func_0207f854(c, g);
        void *p2 = func_0207f854(d, g);
        if (p1 != 0) {
            va = func_02080dd8(p1);
        }
        if (p2 != 0) {
            vb = func_02080dd8(p2);
        }
        if (va > vb || (va == vb && func_02063b8c(2) == 0)) {
            *a = c;
            *b = d;
            return 0;
        }
        *a = d;
        *b = c;
        return 1;
    }
    *a = c;
    *b = d;
    return 0;
}

void func_ov068_02263704(void *a, void *b, u8 *tbl, s32 n, u8 p5, u8 p6) {
    u8 v = tbl[func_02063b8c(n)];
    if (v == 0) {
        p5 = 0;
    }
    func_ov068_02263738(a, b, v, p5, p6);
}

void func_ov068_02263738(void *a, void *o, s32 x, s32 y, u8 flag) {
    func_0201c614((u8 *)o + 0x838, x, y);
    if (flag != 0) {
        func_0201c5f0((u8 *)o + 0x838);
    }
}

void func_ov068_02263768(void *a, s32 unused, s8 *t) {
    void *g = data_021dfd8c;
    if (g != 0) {
        void *q = func_0207bd3c(g, 0, 0);
        if (q != 0) {
            void *r4 = (void *)func_020805c4(q);
            u32 buf;
            func_02133ef8(&buf, 4);
            buf = (u32)r4;
            void *q2 = func_0207bd3c(g, &buf, 1);
            if (q2 != 0) {
                func_ov068_02263808(a, r4, (void *)func_020805c4(q2), t);
            }
        }
    }
}

void func_ov068_022637c0(void *a, void *o, s8 *t) {
    Unk_ov068_Owner *p = func_0201c7f8(o);
    void *x = ((Unk_ov068_Owner *)o)->vfunc_64();
    void *y = p->vfunc_64();
    s32 a1 = func_020805c4(x);
    s32 a2 = func_020805c4(y);
    func_ov068_02263808(a, (void *)a1, (void *)a2, t);
}

void func_ov068_02263808(void *a, void *r1, void *r2, s8 *t) {
    void *g = data_021dfd8c;
    if (g != 0) {
        s32 k = func_ov068_02263880(r1, r2);
        if (k < 5) {
            func_0207ab90(g, (s32)r1, (s32)r2, t[k]);
        }
    }
}

s32 func_ov068_02263840(void *a, void *o) {
    Unk_ov068_Owner *p = func_0201c7f8(o);
    void *x = ((Unk_ov068_Owner *)o)->vfunc_64();
    void *y = p->vfunc_64();
    void *a1 = (void *)func_020805c4(x);
    void *a2 = (void *)func_020805c4(y);
    return func_ov068_02263880(a1, a2);
}

s32 func_ov068_02263880(void *a, void *b) {
    void *g = data_021dfd8c;
    s32 res = 2;
    if (g != 0) {
        s32 a1 = func_0207bfb4(g, (s32)a);
        s32 a2 = func_0207bfb4(g, (s32)b);
        s32 r = func_0207ac2c(g, a1, a2);
        if (r < 5) {
            res = r;
        }
    }
    return res;
}

}

s32 Unk_ov068_022638c0::func_ov068_022638c0(Unk_ov068_Owner *o) {
    static void (Unk_ov068_022638c0::*tbl[2])(Unk_ov068_Owner *) = {&Unk_ov068_022638c0::func_ov068_02263930,
                                                                     &Unk_ov068_022638c0::func_ov068_0226392c};
    if (unk_1c < 2) {
        (this->*tbl[unk_1c])(o);
    }
    return 0;
}

void Unk_ov068_022638c0::func_ov068_0226392c(Unk_ov068_Owner *o) {}

void Unk_ov068_022638c0::func_ov068_02263930(Unk_ov068_Owner *o) {
    if (func_02014220((u8 *)o + 0x618) == 0) {
        func_0201c5f0((u8 *)o + 0x838);
        func_0203d67c(o);
        func_0201c804(o, 0);
        func_0201c7ec(o, 0);
        unk_1c = 1;
    }
}

BOOL Unk_ov068_022638c0::func_ov068_02263978(Unk_ov068_Owner *o) {
    func_ov068_02265994(o);
    func_02013464(o);
    if (func_0201c7c0(o) != 0) {
        func_02014198((u8 *)o + 0x618, 1, 0);
    } else if (*((u8 *)o + 0xa00) != 0) {
        func_02014198((u8 *)o + 0x618, 0, 0);
        func_ov068_0225f5f4((u8 *)o + 0x894, o, 1, 0, 0, data_021f4880, 4, data_020c6d1c, 1);
    } else {
        void *p = func_02015aac((u8 *)o + 0x680);
        s32 v = 0;
        if (p != 0) {
            v = func_0201bcbc(o, p);
        }
        func_ov068_0225f5f4((u8 *)o + 0x894, o, 1, 0, 0, data_021f4880, 4, data_020c6d1c, 1);
        func_020141b4((u8 *)o + 0x618, 0, v, 0);
    }
    return TRUE;
}

s32 Unk_ov068_02263a40::func_ov068_02263a40(Unk_ov068_Owner *o) {
    static void (Unk_ov068_02263a40::*tbl[2])(Unk_ov068_Owner *) = {&Unk_ov068_02263a40::func_ov068_02263b90,
                                                                     &Unk_ov068_02263a40::func_ov068_02263aac};
    if (unk_1c < 2) {
        (this->*tbl[unk_1c])(o);
    }
    return 0;
}

void Unk_ov068_02263a40::func_ov068_02263aac(Unk_ov068_Owner *o) {
    if (func_02015e48((u8 *)o + 0x334, 0) == 0x3d) {
        if (func_02019790((u8 *)o + 0x564) != 0) {
            u16 buf;
            *((u8 *)o + 0x511) = 1;
            func_0201bd9c(o, 0xd00);
            *(u32 *)((u8 *)o + 0x4e8) &= ~2;
            func_0202d864(&buf, o);
            if (buf != 0xfff1) {
                func_ov068_022656a8(this, o, 0xf);
                func_ov068_022656a4(this, 0);
                unk_34 += 0x12c;
            } else {
                func_ov068_022656a8(this, o, 0);
            }
        } else {
            s32 t = ((Unk_ov068_02263aac_Bits *)((u8 *)o + 0x190))->mid;
            if (t <= 0x1c) {
                if (t >= 0x1c) goto hit;
                if (t <= 0x11) {
                    if (t < 0xd) goto done;
                    if (t == 0xd) goto hit;
                    switch (t) { case 0x11: goto hit; default: goto done; }
                } else {
                    switch (t) { case 0x17: goto hit; default: goto done; }
                }
            } else {
                if (t <= 0x25) {
                    switch (t) { case 0x25: goto hit; default: goto done; }
                }
                if (t != 0x28) goto done;
            }
        hit:
            func_02013568((u8 *)o + 0x558, o);
        done:;
        }
    }
}

void Unk_ov068_02263a40::func_ov068_02263b90(Unk_ov068_Owner *o) {
    void *ow = o->vfunc_64();
    void *r6 = func_0207e310(ow);
    func_0207e334(ow);
    if (func_ov003_02218ce4() != 0) {
        func_020195c8((u8 *)o + 0x564, 2, 0x3d, 1, 1, 0);
        *(Unk_ov068_02263b90_Fn *)((u8 *)o + 0x8ac) = data_ov068_0226f910;
        func_020785e8(r6, 1);
        func_0207857c(r6, 0);
        *((u8 *)o + 0x561) = 1;
        *((u8 *)o + 0x562) = 1;
        func_0201bd9c(o, 0);
        unk_1c = 1;
    }
}

BOOL Unk_ov068_02263a40::func_ov068_02263c20(Unk_ov068_Owner *o) {
    u8 *t = (u8 *)func_0207f170(o->vfunc_64());
    func_ov068_02265994(o);
    func_ov068_0225f5f4((u8 *)o + 0x894, o, 0, 0, 0, data_021f4880, 4, data_020c6d1c, 1);
    func_0204ed8c((u8 *)o + 0x5c, t[0], t[1] + 1);
    *(u16 *)((u8 *)o + 0x8e) = 0;
    *(u16 *)((u8 *)o + 0x94) = 0;
    func_0201a99c((u8 *)o + 0x350);
    *(s32 *)((u8 *)o + 0x64) += 0x1000;
    Unk_ov068_0226392c_V3 *s = (Unk_ov068_0226392c_V3 *)((u8 *)o + 0x5c);
    Unk_ov068_0226392c_V3 *d = (Unk_ov068_0226392c_V3 *)((u8 *)o + 0x68);
    *d = *s;
    func_0202d8e0(o);
    *(u32 *)((u8 *)o + 0x4e8) |= 2;
    unk_f8 = -1;
    *((u8 *)o + 0x9ec) = 0;
    func_0201c564((u8 *)o + 0x838);
    return TRUE;
}

s32 Unk_ov068_02263cf0::func_ov068_02263cf0(Unk_ov068_Owner *o) {
    static void (Unk_ov068_02263cf0::*tbl[2])(Unk_ov068_Owner *) = {&Unk_ov068_02263cf0::func_ov068_02263d6c,
                                                                     &Unk_ov068_02263cf0::func_ov068_02263d5c};
    if (unk_1c < 2) {
        (this->*tbl[unk_1c])(o);
    }
    return 0;
}

void Unk_ov068_02263cf0::func_ov068_02263d5c(Unk_ov068_Owner *o) {
    *((u8 *)o + 0x561) = 0;
    unk_1c = 2;
}

void Unk_ov068_02263cf0::func_ov068_02263d6c(Unk_ov068_Owner *o) {
    unk_1c = 1;
}

BOOL Unk_ov068_02263cf0::func_ov068_02263d74(Unk_ov068_Owner *o) {
    void *ow = o->vfunc_64();
    u8 *r4 = (u8 *)func_0207e310(ow);
    u8 *t = (u8 *)func_0207f170(ow);
    func_02019614((u8 *)o + 0x564, 1, data_020c6cc8);
    func_ov068_0225f5f4((u8 *)o + 0x894, o, 0, 0, 0, data_021f4880, 4, data_020c6d1c, 1);
    if (func_020785ec(r4) == 1) {
        func_020785e8(r4, 0);
    }
    r4[0x1d] &= ~2;
    func_0202d8e0(o);
    *((u8 *)o + 0x562) = 0;
    *((u8 *)o + 0x563) = 1;
    func_0204ed8c((u8 *)o + 0x5c, t[0], t[1]);
    Unk_ov068_0226392c_V3 *s = (Unk_ov068_0226392c_V3 *)((u8 *)o + 0x5c);
    Unk_ov068_0226392c_V3 *d = (Unk_ov068_0226392c_V3 *)((u8 *)o + 0x68);
    *d = *s;
    *((u8 *)o + 0x9ec) = 0;
    func_0201c564((u8 *)o + 0x838);
    return TRUE;
}

s32 Unk_ov068_02263e4c::func_ov068_02263e4c(Unk_ov068_Owner *o) {
    static void (Unk_ov068_02263e4c::*tbl[2])(Unk_ov068_Owner *) = {&Unk_ov068_02263e4c::func_ov068_02264000,
                                                                     &Unk_ov068_02263e4c::func_ov068_02263eb8};
    if (unk_1c < 2) {
        (this->*tbl[unk_1c])(o);
    }
    return 0;
}

void Unk_ov068_02263e4c::func_ov068_02263eb8(Unk_ov068_Owner *o) {
    void *ow = o->vfunc_64();
    BOOL r = FALSE;
    *((u8 *)o + 0x561) = r;
    if (func_0207e278(ow) == 2) {
        if (func_0207c618(ow, r) == 0) {
            if (func_0207e310(ow) != 0) {
                func_0207857c(func_0207e310(ow), r);
                unk_20 = func_02063b8c(0x28) + 0x258;
            }
            r = TRUE;
        }
    } else if (unk_20 == 0) {
        r = TRUE;
    }
    if (r != 0) {
        if (func_ov068_02265434(this, o) != 0) {
            if (func_0201bcf8(o, func_020951ec(4), 0x6000) == 0) {
                func_02013374(unk_3c);
                func_ov068_022656a8(this, o, 4);
            }
        } else {
            void *x = func_0207e310(ow);
            u8 *y = (u8 *)func_0207f170(ow);
            func_020785e8(x, 1);
            func_0207857c(x, 0);
            func_0204ed8c((u8 *)o + 0x5c, y[0], y[1] + 1);
            Unk_ov068_0226392c_V3 *s = (Unk_ov068_0226392c_V3 *)((u8 *)o + 0x5c);
            Unk_ov068_0226392c_V3 *d = (Unk_ov068_0226392c_V3 *)((u8 *)o + 0x68);
            *d = *s;
            func_02013374(unk_3c);
            func_ov068_022656a8(this, o, 0);
            u16 buf;
            func_0202d864(&buf, o);
            if (buf != 0xfff1) {
                func_ov068_02265fb4(o);
            }
        }
    } else if (unk_f8 == 0) {
        if (o->vfunc_64() != 0) {
            func_0207c298(o->vfunc_64(), 0);
        }
        unk_f8 = 0x384;
    }
}
