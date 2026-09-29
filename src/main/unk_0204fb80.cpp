#include "types.h"
#include "Unk_020d8c7c.h"

struct Unk_0204fe98_Global {
    /* 0x00 */ u32 unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ u8 unk_08;
};

struct Unk_0204fd24 {
    /* 0x000 */ u8 unk_00[0x40];
    /* 0x040 */ s32 unk_40;
    /* 0x044 */ s32 unk_44;
    /* 0x048 */ u8 unk_48[4];
    /* 0x04c */ u8 unk_4c[0x40];
    /* 0x08c */ s32 unk_8c;
    /* 0x090 */ s32 unk_90;
    /* 0x094 */ s32 unk_94;
    /* 0x098 */ u8 unk_98[0xb8];
    /* 0x150 */ s32 unk_150;
    /* 0x154 */ s32 unk_154;
    /* 0x158 */ s32 unk_158;
    /* 0x15c */ u16 unk_15c;
    /* 0x15e */ u16 unk_15e;
    /* 0x160 */ u16 unk_160;
    /* 0x164 */ s32 unk_164;
    /* 0x168 */ s32 unk_168;
};

class Unk_020db984 : public Unk_020d8c7c {
public:
    inline Unk_020db984();
    virtual BOOL vfunc_00();
    void func_0204fbec(s32 idx);
    BOOL func_0204fc64(s32 idx);

    /* 0x050 */ Unk_0204fd24 unk_50[4];
    /* 0x600 */ u8 unk_600[0x18];
};

extern "C" {
extern Unk_020db984 *data_021c488c;
extern s32 data_020db8b4;
extern u32 data_020dba2c;
void func_0209c1a4(void *p, s32 n, s32 a, s32 b, s32 c, void *d, void *e, void *f);
void func_0205bfb8(void);
void func_0205bf9c(void);
void func_02003e50(void *p);
void func_02003ecc(void *p);
void func_020546ec(void *p);
void func_0209c0b4(void *p);
void func_02054b14(void *p);
void func_0209c224(void *p, void *q);
void func_0209c25c(void *p, void *q);
void func_0209c0c8(void *p);
void func_020548a0(void *p);
void func_0209c128(void *p);
void func_0209c364(void *p);
void func_020f43fc(void *p);
void func_020f440c(void *p);
void func_0209c370(void *p);
void func_0209c140(void *p);
void func_020548d0(void *p);
void func_0209c2dc(void *p);
void *func_02135714(void *p, s32 n, s32 size, void *ctor, void *dtor);
Unk_0204fd24 *func_0204fcfc(Unk_0204fd24 *p);
Unk_0204fd24 *func_0204fd24(Unk_0204fd24 *p);
}

inline Unk_020db984::Unk_020db984() {
    func_02135714(unk_50, 4, 0x16c, (void *)func_0204fd24, (void *)func_0204fcfc);
    func_0209c2dc(unk_600);
}

extern "C" {
extern Unk_0204fe98_Global data_021c4890;
extern void (*data_020dba38[])(u8 *, u32);
extern u32 data_020ca478[];

s32 func_0204f4f8(u32 a, s32 b, s32 c, s32 d, s32 e);
void func_02116048(void *src, void *dst, s32 n);
void func_02076a2c(void *buf, s32 *a, s32 *b);
s32 func_01ffa6b4(void);
void func_0211dc4c(void);
s32 func_0211dc7c(void);
s32 func_0211d6f0(void);
void func_0211d680(u16 v);
void func_02112428(u16 v);
s32 func_021123d0(void);
void func_0211d690(u16 v);
s32 func_0211dde4(u32 a, u32 b, u32 c, s32 d, s32 e, s32 f, s32 g, s32 h, s32 i);
s32 func_0211d704(void);
void func_0211e0ac(void);
void func_0211dc88(s32 v);
s32 func_0211ddd0(void);
s32 func_0204ff6c(Unk_0204fe98_Global *p);
void func_0204ff40(Unk_0204fe98_Global *p);
void func_0205018c(Unk_0204fe98_Global *p, s32 n, const char *name);
u16 func_0204ff18(u16 *p, u32 n);

void func_0204fe0c(void *p, u32 v) {
    func_0204f4f8((u8)v, 2, -1, 0, 0);
}

void func_0204fe28(void *p, u32 v) {
    func_0204f4f8((u8)v, 1, -1, 0, 0);
}

void func_0204fe44(s8 *p, u32 v) {
    s32 a, b;
    u8 buf[8];
    s32 c = p[1];
    func_02116048(p + 2, buf, 5);
    func_02076a2c(buf, &a, &b);
    func_0204f4f8((u8)v, 0, c, a, b);
}

void func_0204fe7c(u8 *p, u32 v) {
    if (*p < 3) {
        data_020dba38[*p](p, v);
    }
}

void func_0204fe98(void) {
    if (func_0204ff6c(&data_021c4890) == 3) {
        s32 t = func_01ffa6b4();
        func_0211dc4c();
        do {
            if (func_0211dc7c() != 0) break;
        } while ((u32)(func_01ffa6b4() - t) < 0xcc8d);
        if (data_021c4890.unk_04 != -3) {
            func_0211d680((u16)data_021c4890.unk_04);
            func_02112428((u16)data_021c4890.unk_04);
        }
    }
}

u16 func_0204fef4(u16 *p, u32 n, u32 m) {
    u16 t = func_0204ff18(p, n) - m;
    return (u16)((~t & 0xffff) + 1);
}

u16 func_0204ff18(u16 *p, u32 n) {
    u16 sum = 0;
    if ((n & 1) == 0) {
        for (; n != 0; p++, n -= 2) {
            sum = sum + *p;
        }
    }
    return sum;
}

void func_0204ff40(Unk_0204fe98_Global *g) {
    if (g->unk_04 != -3) {
        func_0211d680((u16)g->unk_04);
        func_02112428((u16)g->unk_04);
        g->unk_04 = -3;
    }
}

s32 func_0204ff6c(Unk_0204fe98_Global *g) {
    s32 r;
    if (g->unk_04 == -3) {
        r = 4;
    } else if (func_0211dc7c() == 0) {
        r = 3;
    } else if (func_0211d6f0() == 0) {
        r = 0;
    } else {
        r = 1;
    }
    return r;
}

s32 func_0204ffa0(Unk_0204fe98_Global *g, u32 a, u32 b, u32 c) {
    s32 r = 1;
    if (c + b <= g->unk_00) {
        g->unk_04 = func_021123d0();
        if (g->unk_04 != -3) {
            func_0211d690((u16)g->unk_04);
            func_0211dde4(c, a, b, 0, 0, r, 6, r, 0);
            if (func_0204ff6c(g) == 3) {
                r = 3;
            } else {
                func_0204ff40(g);
            }
        }
    }
    return r;
}

s32 func_02050008(Unk_0204fe98_Global *g, u32 a, u32 b, u32 c) {
    s32 r = 1;
    if (c + b <= g->unk_00) {
        g->unk_04 = func_021123d0();
        if (g->unk_04 != -3) {
            func_0211d690((u16)g->unk_04);
            if (func_0211dde4(c, a, b, 0, 0, 0, 6, r, 0) != 0) {
                r = 0;
            }
            func_0211d680((u16)g->unk_04);
            func_02112428((u16)g->unk_04);
            g->unk_04 = -3;
        }
    }
    return r;
}

s32 func_0205007c(Unk_0204fe98_Global *g, u32 a, u32 b, u32 c) {
    s32 r = 1;
    if (a + c > g->unk_00) {
        return r;
    }
    g->unk_04 = func_021123d0();
    if (g->unk_04 == -3) {
        return r;
    }
    func_0211d690((u16)g->unk_04);
    func_0211dde4(b, a, c, 0, 0, r, 7, 10, 2);
    if (func_0204ff6c(g) == 3) {
        r = 3;
    } else {
        func_0204ff40(g);
    }
    return r;
}

s32 func_020500f0(Unk_0204fe98_Global *g, u32 a, u32 b, u32 c) {
    s32 r = 1;
    if (a + c > g->unk_00) {
        return r;
    }
    g->unk_04 = func_021123d0();
    if (g->unk_04 == -3) {
        return r;
    }
    func_0211d690((u16)g->unk_04);
    if (func_0211dde4(b, a, c, 0, 0, 0, 7, 10, 2) != 0) {
        r = 0;
    }
    func_0211d680((u16)g->unk_04);
    func_02112428((u16)g->unk_04);
    g->unk_04 = -3;
    return r;
}

void func_02050170(void) {
    func_0205018c(&data_021c4890, 0x1202, (const char *)data_020ca478);
}

void func_0205018c(Unk_0204fe98_Global *g, s32 n, const char *name) {
    s32 t;
    if (func_0211d704() == 0) {
        func_0211e0ac();
    }
    t = func_021123d0();
    func_0211d690((u16)t);
    func_0211dc88(n);
    g->unk_00 = func_0211ddd0();
    func_0211d680((u16)t);
    func_02112428((u16)t);
    g->unk_08 = 4;
}
}

BOOL Unk_020db984::vfunc_00() {
    if (*(s32 *)&unk_04[4] == 0) {
        data_020db8b4 = 4;
    } else if (*(s32 *)&unk_04[4] == 1) {
        data_020db8b4 = 1;
    }
    func_0209c1a4(unk_600, data_020db8b4, 0x800, 0x80, 0x134c, (void *)func_0205bfb8, (void *)func_0205bf9c, &data_020dba2c);
    data_021c488c = this;
    return TRUE;
}

void Unk_020db984::func_0204fbec(s32 idx) {
    if (idx >= 0 && idx < data_020db8b4 && data_021c488c != NULL) {
        Unk_0204fd24 *e = &data_021c488c->unk_50[idx];
        if (e->unk_44 != 0 && e->unk_44 != 1) {
            func_02003e50(e);
        }
        e->unk_40 = -1;
        e->unk_44 = 0;
        func_020546ec(e->unk_98);
        func_0209c0b4(e->unk_4c);
        func_02054b14(e->unk_98);
        func_0209c224(unk_600, e->unk_48);
    }
}

BOOL Unk_020db984::func_0204fc64(s32 idx) {
    BOOL r = FALSE;
    if (data_021c488c == NULL) {
        return FALSE;
    }
    if (idx != -1) {
        Unk_0204fd24 *e = &data_021c488c->unk_50[idx];
        e->unk_44 = 2;
        func_0209c25c(unk_600, e->unk_48);
        func_0209c0c8(e->unk_4c);
        func_02003ecc(e);
        r = TRUE;
    }
    return r;
}

extern "C" {
s32 func_0204fcb8(void) {
    s32 i = 0;
    s32 r = -1;
    if (data_021c488c != NULL) {
        Unk_0204fd24 *e = data_021c488c->unk_50;
        for (; i < data_020db8b4; e++, i++) {
            if (e->unk_44 == 0) {
                r = i;
                e->unk_44 = 1;
                break;
            }
        }
    }
    return r;
}

Unk_0204fd24 *func_0204fcfc(Unk_0204fd24 *e) {
    func_020548a0(e->unk_98);
    func_0209c128(e->unk_4c);
    func_0209c364(e->unk_48);
    func_020f43fc(e);
    return e;
}

Unk_0204fd24 *func_0204fd24(Unk_0204fd24 *e) {
    func_020f440c(e);
    func_0209c370(e->unk_48);
    func_0209c140(e->unk_4c);
    func_020548d0(e->unk_98);
    e->unk_40 = -1;
    e->unk_44 = 0;
    func_0209c0c8(e->unk_4c);
    e->unk_8c = 0x1000;
    e->unk_90 = 0x1000;
    e->unk_94 = 0x1000;
    e->unk_150 = 0x1000;
    e->unk_154 = 0x1000;
    e->unk_158 = 0x1000;
    e->unk_15c = 0;
    e->unk_15e = 0;
    e->unk_160 = 0;
    e->unk_164 = 0x1f;
    return e;
}
}


extern "C" Unk_020db984 *func_0204fdb0(void) {
    return new Unk_020db984();
}
