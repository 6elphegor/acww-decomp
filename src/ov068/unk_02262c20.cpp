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
    virtual void vfunc_48();
    virtual void vfunc_4c();
    virtual void vfunc_50();
    virtual void vfunc_54();
    virtual void vfunc_58();
    virtual void vfunc_5c();
    virtual void vfunc_60();
    virtual s32 vfunc_64();
};

class Unk_ov068_02262da0_Obj1 {
public:
    u32 v[7];
    Unk_ov068_02262da0_Obj1();
    ~Unk_ov068_02262da0_Obj1();
};

class Unk_ov068_022632dc_Obj2 {
public:
    u32 v[8];
    Unk_ov068_022632dc_Obj2();
    ~Unk_ov068_022632dc_Obj2();
};

struct Unk_ov068_02262c20_Blk {
    u32 b[0x80];
};
struct Unk_ov068_02262c20_B8 {
    u8 b[8];
};
struct Unk_ov068_02262c20_B16 {
    u8 b[16];
};

extern "C" {
extern u32 data_021dfd8c[];
extern u8 data_ov068_0226f0e8[];
extern u8 data_ov068_0226f0f0[];
extern u8 data_ov068_0226f0f8[];
extern u8 data_ov068_0226f104[];
extern u8 data_ov068_0226f10c[];
extern u8 data_ov068_0226f114[];
extern u8 data_ov068_0226f124[];
extern u8 data_ov068_0226f12c[];
extern u8 data_ov068_0226f144[];
extern u8 data_ov068_0226f14c[];

Unk_ov068_Owner *func_0201c7f8(void *);
s32 func_ov068_02263668(void *, void *, void *, s32, s32);
u16 *func_0207fd9c(void *);
u8 *func_020805b8(void *);
u8 *func_020805c4(void *);
u8 *func_ov068_02263600(void *, void *);
void func_0207cb94(void *, void *);
void func_0207f264(void *, void *, s32);
void func_ov068_022637c0(void *, void *, void *);
void func_ov068_02263738(void *, void *, s32, s32, s32);
void func_ov068_02263704(void *, void *, void *, s32, s32, s32);
void func_ov068_02263768(void *, void *, void *);
void func_0207fd90(void *, u16 *);
void func_02016c80(void *, s32, u16 *);
s32 func_02002ff8(void *);
s32 func_020813bc(void *, s32);
void func_0207fb34(void *, void *);
void func_0207fb4c(void *, void *);
void *func_0207e310(void *);
u16 *func_0207850c(void *);
void func_0207fc8c(u16 *, void *);
void func_0207fcdc(void *, u16 *);
void func_0207fd3c(u16 *, void *);
s32 func_0204b2d4(void *);
s32 func_0204b25c(void *);
s32 func_02071e8c(void *, void *);
s32 func_020030b4(void *);
s32 func_02128930(void *, void *, s32);
void *func_0207bf60(void *, s32);
s32 func_0207e278(void *);
s32 func_0207bcfc(s32, s32, s32);
s32 func_0207c014(s32);
void func_0207fba8(void *, void *, s32);
s32 func_020a79dc(void *, void *);
s32 func_0207abd8(void *, s32, s32);
}

static inline BOOL Unk_ov068_02262c20_InRange(u16 *p) {
    BOOL r = FALSE;
    if (*p >= 0x12a8 && *p <= 0x12af) {
        r = TRUE;
    }
    return r;
}

static inline BOOL Unk_ov068_02262e5c_InRange(u16 *p) {
    BOOL r = FALSE;
    if (*p >= 0x1380 && *p <= 0x139f) {
        r = TRUE;
    }
    return r;
}

class Unk_ov068_0225fd54 {
public:
    /* 0x00 */ u8 pad_00[0x1c];
    /* 0x1c */ u8 unk_1c;
    /* 0x1d */ u8 pad_1d[3];
    /* 0x20 */ s32 unk_20;
    /* 0x24 */ u8 pad_24[4];
    /* 0x28 */ u8 *unk_28;

    BOOL func_ov068_02262c20(Unk_ov068_Owner *o);
    BOOL func_ov068_02262da0(Unk_ov068_Owner *o);
    BOOL func_ov068_02262e5c(Unk_ov068_Owner *o);
    BOOL func_ov068_02262fd8(Unk_ov068_Owner *o);
    BOOL func_ov068_022632dc(Unk_ov068_Owner *o);
    BOOL func_ov068_02263494(Unk_ov068_Owner *o);
    BOOL func_ov068_02263518(Unk_ov068_Owner *o);
};

BOOL Unk_ov068_0225fd54::func_ov068_02262c20(Unk_ov068_Owner *o) {
    u16 h0, h1;
    void *a;
    void *b;
    Unk_ov068_Owner *other = func_0201c7f8(o);
    a = 0;
    b = 0;
    s32 x = o->vfunc_64();
    s32 y = other->vfunc_64();
    if (func_ov068_02263668(this, &a, &b, x, y) == 0) {
        unk_28 = (u8 *)o;
    } else {
        unk_28 = (u8 *)other;
    }
    u8 *rec = 0;
    if (Unk_ov068_02262c20_InRange(func_0207fd9c(a))) {
        rec = func_020805b8(a);
    }
    rec = func_ov068_02263600(this, rec);
    if (rec != 0) {
    func_0207cb94(b, a);
    func_0207f264(b, a, 0);
    func_ov068_022637c0(this, o, data_ov068_0226f144);
    func_ov068_02263738(this, unk_28, 1, 2, 0);
    u8 *dst = func_020805b8(a);
    *(Unk_ov068_02262c20_Blk *)dst = *(Unk_ov068_02262c20_Blk *)rec;
    *(u16 *)(dst + 0x200) = *(u16 *)(rec + 0x200);
    *(Unk_ov068_02262c20_B8 *)(dst + 0x202) = *(Unk_ov068_02262c20_B8 *)(rec + 0x202);
    *(u16 *)(dst + 0x20a) = *(u16 *)(rec + 0x20a);
    *(Unk_ov068_02262c20_B8 *)(dst + 0x20c) = *(Unk_ov068_02262c20_B8 *)(rec + 0x20c);
    *(s8 *)(dst + 0x214) = *(s8 *)(rec + 0x214);
    *(u8 *)(dst + 0x215) = *(u8 *)(rec + 0x215);
    *(Unk_ov068_02262c20_B16 *)(dst + 0x216) = *(Unk_ov068_02262c20_B16 *)(rec + 0x216);
    *(u8 *)(dst + 0x226) = *(u8 *)(rec + 0x226);
    h0 = 0x12a8;
    func_0207fd90(a, &h0);
    h1 = 0x12a8;
    func_02016c80(unk_28 + 0x564, 1, &h1);
    unk_1c = 2;
    return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov068_0225fd54::func_ov068_02262da0(Unk_ov068_Owner *o) {
    void *a;
    void *b;
    Unk_ov068_Owner *other = func_0201c7f8(o);
    a = 0;
    b = 0;
    s32 x = o->vfunc_64();
    s32 y = other->vfunc_64();
    func_ov068_02263668(this, &a, &b, x, y);
    func_0207cb94(b, a);
    func_0207f264(b, a, 0);
    func_ov068_02263768(this, o, data_ov068_0226f12c);
    Unk_ov068_02262da0_Obj1 obj;
    if (func_020813bc(&obj, func_02002ff8(func_020805c4(b))) != 0) {
        func_0207fb34(b, &obj);
    }
    func_ov068_02263704(this, o, data_ov068_0226f0f8, 4, 2, 1);
    func_ov068_02263704(this, other, data_ov068_0226f0f8, 4, 2, 1);
    unk_1c = 3;
    return TRUE;
}

BOOL Unk_ov068_0225fd54::func_ov068_02262e5c(Unk_ov068_Owner *o) {
    u16 v0 = 0xfff1;
    u16 v1, v2;
    void *a = 0;
    void *b = 0;
    Unk_ov068_Owner *other = func_0201c7f8(o);
    s32 x = o->vfunc_64();
    s32 y = other->vfunc_64();
    s32 r = func_ov068_02263668(this, &a, &b, x, y);
    func_0207cb94(b, a);
    func_0207f264(b, a, 0);
    if (r == 0) {
        unk_28 = (u8 *)o;
    } else {
        unk_28 = (u8 *)other;
    }
    func_ov068_02263768(this, o, data_ov068_0226f104);
    if (Unk_ov068_02262e5c_InRange(func_0207850c(func_0207e310(a))) == 0) {
        func_0207fc8c(&v1, a);
        v0 = v1;
        func_0207fcdc(a, &v0);
    }
    func_0207fd3c(&v2, a);
    v0 = v2;
    u16 *p = func_0207fd9c(a);
    BOOL same;
    if (func_0204b2d4(p) != 0) {
        if (func_0204b25c(p) == func_0204b25c(&v0)) {
            same = TRUE;
        } else {
            same = FALSE;
        }
    } else {
        if (*p == v0) {
            same = TRUE;
        } else {
            same = FALSE;
        }
    }
    if (same == 0) {
        func_ov068_02263704(this, o, data_ov068_0226f0f0, 4, 2, 0);
        func_ov068_02263704(this, other, data_ov068_0226f0f0, 4, 2, 0);
        func_0207fd90(a, &v0);
        func_02016c80(unk_28 + 0x564, 1, &v0);
        unk_1c = 2;
    } else {
        func_ov068_02263704(this, o, data_ov068_0226f0f0, 4, 2, 1);
        func_ov068_02263704(this, other, data_ov068_0226f0f0, 4, 2, 1);
        unk_1c = 3;
    }
    return TRUE;
}

BOOL Unk_ov068_0225fd54::func_ov068_02262fd8(Unk_ov068_Owner *o) {
    u16 h0, h1;
    void *a;
    void *b;
    Unk_ov068_Owner *other = func_0201c7f8(o);
    a = 0;
    b = 0;
    s32 x = o->vfunc_64();
    s32 y = other->vfunc_64();
    if (func_ov068_02263668(this, &a, &b, x, y) == 0) {
        unk_28 = (u8 *)other;
    } else {
        unk_28 = (u8 *)o;
    }
    BOOL ok = TRUE;
    if (Unk_ov068_02262c20_InRange(func_0207fd9c(a))) {
    u8 *rec = func_020805b8(a);
    func_0207cb94(b, a);
    func_0207f264(b, a, 0);
    if (Unk_ov068_02262c20_InRange(func_0207fd9c(b)) && func_02071e8c(func_020805b8(b), rec) != 0) {
        u8 *r7 = func_020805c4(a);
        u8 *p10 = func_020805c4(b);
        ok = FALSE;
        b = 0;
        if ((u32)data_021dfd8c != 0) {
            void *e;
            u32 mask = 0, cnt = 0;
            s32 i = 0;
            for (i = 0; i < 8; i++) {
                e = func_0207bf60(data_021dfd8c, i);
                if (e != 0) {
                    u8 *q = func_020805c4(e);
                    if (func_020030b4(q) != 0) {
                        BOOL s1 = FALSE, s2 = FALSE;
                        u32 t = *(u16 *)q;
                        if (t == *(u16 *)r7) {
                            if (func_02128930(q + 2, r7 + 2, 8) == 0) {
                                s2 = TRUE;
                            }
                        }
                        if (s2) {
                            if (q[0xb] == r7[0xb]) {
                                s1 = TRUE;
                            }
                        }
                        if (s1 == 0) {
                            if (t == *(u16 *)p10 && func_02128930(q + 2, p10 + 2, 8) == 0 && q[0xb] == p10[0xb]) {
                            } else {
                                if (!Unk_ov068_02262c20_InRange(func_0207fd9c(e)) ||
                                    func_02071e8c(func_020805b8(e), rec) == 0) {
                                    if (func_0207e278(e) != 0) {
                                        mask |= 1 << i;
                                        mask = (u8)mask;
                                        cnt++;
                                    }
                                }
                            }
                        }
                    }
                }
            }
            s32 m = func_0207bcfc(mask, cnt, 8);
            if (func_0207c014(m) != 0) {
                b = func_0207bf60(data_021dfd8c, m);
            }
        }
    }
    if (b != 0) {
        u8 *dst = func_020805b8(b);
        *(Unk_ov068_02262c20_Blk *)dst = *(Unk_ov068_02262c20_Blk *)rec;
        *(u16 *)(dst + 0x200) = *(u16 *)(rec + 0x200);
        *(Unk_ov068_02262c20_B8 *)(dst + 0x202) = *(Unk_ov068_02262c20_B8 *)(rec + 0x202);
        *(u16 *)(dst + 0x20a) = *(u16 *)(rec + 0x20a);
        *(Unk_ov068_02262c20_B8 *)(dst + 0x20c) = *(Unk_ov068_02262c20_B8 *)(rec + 0x20c);
        *(s8 *)(dst + 0x214) = *(s8 *)(rec + 0x214);
        *(u8 *)(dst + 0x215) = *(u8 *)(rec + 0x215);
        *(Unk_ov068_02262c20_B16 *)(dst + 0x216) = *(Unk_ov068_02262c20_B16 *)(rec + 0x216);
        *(u8 *)(dst + 0x226) = *(u8 *)(rec + 0x226);
        h0 = 0x12a8;
        func_0207fd90(b, &h0);
    }
    func_ov068_022637c0(this, o, data_ov068_0226f114);
    if (ok && b != 0) {
        func_ov068_02263738(this, o, 1, 2, 0);
        func_ov068_02263738(this, other, 1, 2, 0);
        h1 = 0x12a8;
        func_02016c80(unk_28 + 0x564, 1, &h1);
        unk_1c = 2;
    } else {
        func_ov068_02263738(this, o, 1, 2, 1);
        func_ov068_02263738(this, other, 1, 2, 1);
        unk_1c = 3;
    }
    return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov068_0225fd54::func_ov068_022632dc(Unk_ov068_Owner *o) {
    void *a;
    void *b;
    Unk_ov068_Owner *other = func_0201c7f8(o);
    a = 0;
    b = 0;
    s32 x = o->vfunc_64();
    s32 y = other->vfunc_64();
    func_ov068_02263668(this, &a, &b, x, y);
    Unk_ov068_022632dc_Obj2 s1;
    Unk_ov068_022632dc_Obj2 s2;
    func_0207fba8(a, &s1, 0);
    func_0207fba8(b, &s2, 0);
    func_0207cb94(b, a);
    func_0207f264(b, a, 0);
    if (func_020a79dc(&s1, &s2) != 0) {
        u8 *r6 = func_020805c4(a);
        u8 *r7 = func_020805c4(b);
        b = 0;
        if ((u32)data_021dfd8c != 0) {
            void *e;
            u32 mask = 0, cnt = 0;
            s32 i = 0;
            for (i = 0; i < 8; i++) {
                e = func_0207bf60(data_021dfd8c, i);
                if (e != 0) {
                    u8 *q = func_020805c4(e);
                    if (func_020030b4(q) != 0) {
                        BOOL t1 = FALSE, t2 = FALSE;
                        u32 t = *(u16 *)q;
                        if (t == *(u16 *)r6) {
                            if (func_02128930(q + 2, r6 + 2, 8) == 0) {
                                t2 = TRUE;
                            }
                        }
                        if (t2) {
                            if (q[0xb] == r6[0xb]) {
                                t1 = TRUE;
                            }
                        }
                        if (t1 == 0) {
                            if (t == *(u16 *)r7 && func_02128930(q + 2, r7 + 2, 8) == 0 && q[0xb] == r7[0xb]) {
                            } else {
                                func_0207fba8(e, &s2, 0);
                                if (func_020a79dc(&s1, &s2) == 0) {
                                    mask |= 1 << i;
                                    mask = (u8)mask;
                                    cnt++;
                                }
                            }
                        }
                    }
                }
            }
            s32 m = func_0207bcfc(mask, cnt, 8);
            if (func_0207c014(m) != 0) {
                b = func_0207bf60(data_021dfd8c, m);
            }
        }
    }
    if (b != 0) {
        func_0207fb4c(b, &s1);
    }
    func_ov068_02263768(this, o, data_ov068_0226f14c);
    func_ov068_02263738(this, o, 1, 2, 1);
    func_ov068_02263738(this, other, 1, 2, 1);
    unk_1c = 3;
    return TRUE;
}

BOOL Unk_ov068_0225fd54::func_ov068_02263494(Unk_ov068_Owner *o) {
    void *a;
    void *b;
    Unk_ov068_Owner *other = func_0201c7f8(o);
    a = 0;
    b = 0;
    s32 x = o->vfunc_64();
    s32 y = other->vfunc_64();
    func_ov068_02263668(this, &a, &b, x, y);
    func_0207cb94(b, a);
    func_0207f264(b, a, 0);
    func_ov068_02263768(this, o, data_ov068_0226f124);
    func_ov068_02263738(this, o, 0, 0, 1);
    func_ov068_02263738(this, other, 0, 0, 1);
    unk_1c = 3;
    return TRUE;
}

BOOL Unk_ov068_0225fd54::func_ov068_02263518(Unk_ov068_Owner *o) {
    void *a;
    void *b;
    Unk_ov068_Owner *other = func_0201c7f8(o);
    s32 vx = o->vfunc_64();
    s32 vy = other->vfunc_64();
    a = 0;
    b = 0;
    s32 x = o->vfunc_64();
    s32 y = other->vfunc_64();
    func_ov068_02263668(this, &a, &b, x, y);
    func_0207cb94(b, a);
    func_0207f264(b, a, 0);
    func_ov068_02263768(this, o, data_ov068_0226f10c);
    switch (func_0207abd8(data_021dfd8c, vx, vy)) {
    case 0:
    case 1:
        func_ov068_02263738(this, o, 1, 2, 1);
        func_ov068_02263738(this, other, 1, 2, 1);
        break;
    case 2:
        break;
    case 3:
    case 4:
        func_ov068_02263704(this, o, data_ov068_0226f0e8, 2, 2, 1);
        func_ov068_02263704(this, other, data_ov068_0226f0e8, 2, 2, 1);
        break;
    }
    unk_1c = 3;
    return TRUE;
}
