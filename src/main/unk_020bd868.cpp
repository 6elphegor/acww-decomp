#include "types.h"

struct Unk_020d16e8 { u32 unk_00; u16 unk_04; u16 unk_06; u32 unk_08; s8 unk_0c; s8 unk_0d; s8 unk_0e; s8 unk_0f; };
extern Unk_020d16e8 data_020d16e8[];
extern s32 data_021eff48;
extern u16 data_020d0dfc;
extern u8 data_021f4398[];

struct Unk_020bd868 {
    /* 0x00 */ s32 unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ u8 unk_08;
    /* 0x09 */ u8 unk_09;
    /* 0x0a */ u16 unk_0a[15];
    /* 0x28 */ u8 unk_28[0x20];
};

extern "C" {
void func_02116048(void*, void*, u32);
void func_021145cc(void*, u32);
void func_02111df8(void*, u32, u32);
void func_02111d90(void*, u32, u32);
s32 func_020bd808(Unk_020bd868*, s32);
void func_020bd764(Unk_020bd868*, s32, s32);
void func_020bd7c0(Unk_020bd868*, s32);
void func_020bd7a8(void*, ...);
void func_02115fb4(void*, u32, u32);

void func_020bd868(Unk_020bd868* p, u8* base, u32 idx) {
    Unk_020d16e8* row = &data_020d16e8[idx];
    s32 a = row->unk_0c;
    u32 b;
    s32 res;
    if (idx - 0x1f <= 1) {
        a += p->unk_00;
    }
    b = row->unk_0d << 5;
    func_02116048(base + 0x1048 + a * 32, p->unk_28, 0x20);
    res = func_020bd808(p, row->unk_0d);
    func_021145cc(p->unk_28, 0x20);
    func_02111df8(p->unk_28, b, 0x20);
    if (data_021eff48 == 0) {
        func_02111d90(p->unk_28, b, 0x20);
    }
    if (res == 0) {
        func_020bd764(p, row->unk_0d, a);
    }
}

Unk_020bd868* func_020bd8f8(Unk_020bd868* p) {
    volatile u16 tmp;
    u16* end;
    u16* q;
    p->unk_00 = 0;
    *(u16*)&p->unk_08 = 0;
    func_020bd7c0(p, -1);
    end = (u16*)p->unk_28;
    q = p->unk_0a;
    tmp = data_020d0dfc;
    for (; q < end; q++) {
        *q = tmp;
    }
    func_02115fb4(p->unk_28, 0, 0x20);
    return p;
}

void func_020bd940(Unk_020bd868* p) {
    s32 t = p->unk_04 - 1;
    if (t <= 0) t = 0;
    p->unk_04 = t;
}

void func_020bd950(Unk_020bd868* p, s32 a) {
    p->unk_09 = 1;
    func_020bd7a8(data_021f4398, a);
}

void func_020bd964(Unk_020bd868* p, s32 v) {
    if (v != p->unk_00) {
        p->unk_08 = 0;
        p->unk_09 = 1;
        p->unk_00 = v;
    }
}

void func_020bd978(Unk_020bd868* p, s32 v, void* x) {
    p->unk_04++;
    if (v != p->unk_00) {
        p->unk_08 = 0;
        func_020bd7a8(x);
        p->unk_00 = v;
    }
}

void func_020bda7c(Unk_020bd868* p) {
    p->unk_00 = 0x34;
    p->unk_04 = 0;
    p->unk_08 = 0;
    p->unk_09 = 0;
}

void func_020bda8c(u8* p) {
    func_021145cc(p + 0x448, 0xc00);
}

struct Unk_020bd9a0_Row { u32 unk_00; u32 unk_04; u32 unk_08; u32 unk_0c; };
extern Unk_020bd9a0_Row data_020d11dc[];
void func_02111c6c(u32, u32, u32);
void func_02111c0c(u32, u32, u32);

static inline void Unk_020bd9a0_Copy(u32 d, u32 a, u32 n, u32 k, BOOL flag) {
    u32 sz = n << 5;
    u32 src = (k + a) << 5;
    func_02111c6c(d, src, sz);
    if (flag) func_02111c0c(d, src, sz);
}

void func_020bd9a0(Unk_020bd868* p, u8* base) {
    Unk_020bd9a0_Row* row;
    u32 dst;
    u32 o, k;
    BOOL flag;
    if (data_021eff48 == 0) flag = TRUE; else flag = FALSE;
    func_020bda8c(base);
    Unk_020d16e8* ent = &data_020d16e8[p->unk_00];
    row = &data_020d11dc[ent->unk_08];
    dst = (u32)base + 0x448;
    o = 0;
    k = 0x94;
    for (s32 i = 0; i < 4; i++) {
        u32 d;
        u32 n = row->unk_04;
        if (n != 0) {
            u32 a = row->unk_00;
            d = dst + (o << 5);
            d += a << 5;
            Unk_020bd9a0_Copy(d, a, n, k, flag);
        }
        o += 0xc;
        k += 0x20;
    }
    for (s32 i = 4; i < 8; i++) {
        u32 d;
        u32 n = row->unk_0c;
        if (n != 0) {
            u32 a = row->unk_08;
            d = dst + (o << 5);
            d += a << 5;
            Unk_020bd9a0_Copy(d, a, n, k, flag);
        }
        o += 0xc;
        k += 0x20;
    }
}

s32 func_02119a28(void*, const char*);
s32 func_021198b4(void*, void*, u32);
s32 func_021199e0(void*);
s32 func_02119848(void*, u32, u32);
void func_02119d78(void*);

BOOL func_020bdaa4(u8* p) {
    char name1[0x17] = "/sky/a_sky_obj_ncl.bin";
    s32 a = func_02119a28(p, name1);
    BOOL b = func_021198b4(p, p + 0x1048, 0x1c0) > 0;
    s32 c = func_021199e0(p);
    char name2[0x1c] = "/sky/a_sky_moon_obj_ncl.bin";
    s32 d = func_02119a28(p, name2);
    BOOL e = func_021198b4(p, p + 0x1208, 0x140) > 0;
    s32 f = func_021199e0(p);
    if (a && b && c && d && e && f) return TRUE;
    return FALSE;
}

extern const char* data_020d0e14[];


BOOL func_020bdb68(u8* p, s32 idx) {
    Unk_020d16e8* row = &data_020d16e8[idx];
    Unk_020bd9a0_Row* t;
    s32 a = func_02119a28(p, data_020d0e14[row->unk_00]);
    BOOL ok1 = TRUE;
    BOOL ok2 = TRUE;
    u8* src;
    s32 i;
    s32 f;
    t = &data_020d11dc[row->unk_08];
    if (row->unk_04 != 0xffff) {
        src = p + 0x448;
        ok1 &= func_02119848(p, (row->unk_04 & ~0x1f) << 5, 0);
        for (i = 0; i < 4; i++) {
            if (t->unk_04 != 0) {
                ok2 &= func_021198b4(p, p + 0x48, 0x400) > 0;
                func_02116048(p + 0x48 + ((row->unk_04 & 0x1f) << 5), src + (t->unk_00 << 5), t->unk_04 << 5);
            }
            src += 0x180;
        }
    }
    if (row->unk_06 != 0xffff) {
        src = p + 0xa48;
        ok1 &= func_02119848(p, (row->unk_06 & ~0x1f) << 5, 0);
        for (i = 4; i < 8; i++) {
            if (t->unk_0c != 0) {
                ok2 &= func_021198b4(p, p + 0x48, 0x400) > 0;
                func_02116048(p + 0x48 + ((row->unk_06 & 0x1f) << 5), src + (t->unk_08 << 5), t->unk_0c << 5);
            }
            src += 0x180;
        }
    }
    f = func_021199e0(p);
    if (a && ok1 && ok2 && f) return TRUE;
    return FALSE;
}

void func_020bdcbc(u8* p) {
    func_02119d78(p);
    func_02115fb4(p + 0x48, 0, 0x400);
    func_02115fb4(p + 0x448, 0, 0xc00);
    func_02115fb4(p + 0x1048, 0, 0x1c0);
    func_02115fb4(p + 0x1208, 0, 0x140);
    *(u32*)(p + 0x1348) = 0x12345678;
}

struct Unk_020bdd94_Out { s32 unk_00; s32 unk_04; s32 unk_08; };
struct Unk_020bdd94 {
    /* 0x00 */ u8 unk_00[0x24];
    /* 0x24 */ s32 unk_24;
    /* 0x28 */ s32 unk_28;
    /* 0x2c */ s16 unk_2c;
    /* 0x2e */ u8 unk_2e;
    /* 0x2f */ u8 unk_2f;
    /* 0x30 */ u8 unk_30[4];
    /* 0x34 */ s32 unk_34;
    /* 0x38 */ s32 unk_38;
    /* 0x3c */ s32 unk_3c;
    /* 0x40 */ u8 unk_40[0xc];
    /* 0x4c */ s32 unk_4c;
    /* 0x50 */ s32 unk_50;
};
extern u8 data_021f44ac[];
void func_020bd0d4(void*, s32, s32, void*);
void func_020bd0a4(void*, s32, s32, void*);
void func_020bdd94(Unk_020bdd94*, Unk_020bdd94_Out*);
s32 func_020bddbc(Unk_020bdd94_Out*, s32, s32, s32);
void func_020bdda4(Unk_020bdd94*, Unk_020bdd94_Out*);

void func_020bdd24(Unk_020bdd94* p, s32 a, s32 b) {
    Unk_020bdd94_Out out;
    func_020bdd94(p, &out);
    func_020bd0d4(data_021f44ac, a, b, &out);
}

struct Unk_020bdd4c_Out { s32 unk_00; s32 unk_04; s32 unk_08; s32 unk_0c; };

void func_020bdd4c(Unk_020bdd94* p, s32 a) {
    Unk_020bdd4c_Out out;
    func_020bdda4(p, (Unk_020bdd94_Out*)&out);
    func_020bd0a4(data_021f44ac, 0, a, &out);
}

void func_020bdd70(Unk_020bdd94* p, s32 a) {
    Unk_020bdd4c_Out out;
    func_020bdda4(p, (Unk_020bdd94_Out*)&out);
    func_020bd0d4(data_021f44ac, 0, a, &out);
}

void func_020bdd94(Unk_020bdd94* p, Unk_020bdd94_Out* out) {
    out->unk_00 = p->unk_34;
    out->unk_04 = p->unk_38;
    out->unk_08 = 0;
}

void func_020bdda4(Unk_020bdd94* p, Unk_020bdd94_Out* out) {
    func_020bddbc(out, p->unk_34, p->unk_38, p->unk_4c);
}

s32 func_01ffcb0c(s32, s32);
s32 func_01ffc5a4(s32, s32);
s32 func_01ffc588(s32);
s32 func_02133150(s32, s32);

s32 func_020bddbc(Unk_020bdd94_Out* out, s32 a, s32 b, s32 c) {
    s32 t = func_01ffcb0c(0x400, c);
    s32 u = func_01ffcb0c(0x1000, c);
    s32 v = func_01ffc5a4(0x1000 - t, u - t);
    if (v < 0) v = 0;
    else if (v > 0x1000) v = 0x1000;
    out->unk_00 = a;
    out->unk_04 = b;
    out->unk_08 = v;
    return v;
}

struct Unk_021f23d4 {
    /* 0x00 */ u8 unk_00[4];
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ u8 unk_08[0x2c];
    /* 0x34 */ s32 unk_34;
    /* 0x38 */ s32 unk_38;
    /* 0x3c */ u8 unk_3c[0x8];
    /* 0x44 */ s32 unk_44;
    /* 0x48 */ u8 unk_48[0x2c];
};
extern Unk_021f23d4 data_021f23d4[];
extern Unk_021f23d4 data_021f2944[];

BOOL func_020bde0c(Unk_020bdd94* p, s32 a, s32 b, s32 c) {
    s32 d;
    s32 w = func_01ffcb0c(a, p->unk_4c);
    s32 h = func_01ffcb0c(b, p->unk_50);
    s32 dy = func_01ffcb0c(c, p->unk_50);
    s32 hw = func_02133150(w, 2);
    s32 hh = func_02133150(h, 2);
    s32 y = p->unk_38 + dy;
    s32 x = p->unk_34;
    s32 left = x - hw;
    s32 right = x + hw;
    s32 top = y - hh;
    s32 bottom = y + hh;
    Unk_021f23d4* o = data_021f23d4;
    BOOL found = FALSE;
    for (; o < data_021f2944; o++) {
        if (o->unk_04 == 2 && ((u8*)o)[0x2f] != 0) {
            d = o->unk_44;
            if (d < 0) d = -d;
            s32 xl = o->unk_34 - 0x1000;
            s32 yt = o->unk_38 - 0x1000;
            s32 yb = d + (o->unk_38 + 0x1000);
            s32 xr = o->unk_34 + 0x1000;
            if (left <= xr && right >= xl && top <= yb && bottom >= yt) {
                found = TRUE;
                ((u8*)o)[0x30] = 1;
            }
        }
    }
    return found;
}

extern s32 data_020c8cb8;
extern s32 data_020c8cbc;
extern s32 data_021c3070;
extern s32 data_021ef674;
struct Unk_020bdef0_Vec { s32 unk_00[3]; Unk_020bdef0_Vec() {} };
extern Unk_020bdef0_Vec data_021c309c;
extern s16 data_02135f44[][2];
s32 func_0203a4b0();
void func_020bdef0(Unk_020bdd94*, Unk_020bdd94_Out*, s32);

void func_020bdecc(Unk_020bdd94* p, s32 a) {
    Unk_020bdd94_Out t;
    t.unk_00 = p->unk_28;
    t.unk_04 = 0;
    t.unk_08 = data_020c8cb8;
    func_020bdef0(p, &t, a);
}

void func_020bdef0(Unk_020bdd94* p, Unk_020bdd94_Out* q, s32 a) {
    Unk_020bdef0_Vec loc;
    loc.unk_00[0] = data_021c309c.unk_00[0];
    loc.unk_00[1] = data_021c309c.unk_00[1];
    loc.unk_00[2] = data_021c309c.unk_00[2];
    s32 r6, r4, r7, t, x, y, z, idx, inv;
    r4 = loc.unk_00[2] - q->unk_08;
    r6 = func_01ffc5a4(q->unk_00 - loc.unk_00[0], data_020c8cbc);
    r4 = func_01ffc5a4(r4, data_020c8cb8 << 2);
    t = func_01ffcb0c(-0x1000, r4 - 0x1000);
    r7 = func_01ffcb0c(r4, t + 0x1000);
    x = func_01ffcb0c(-0x666, r7);
    y = func_01ffcb0c(r6, x + 0xe66);
    z = func_01ffcb0c(y + 0x800, 0x1000);
    r4 = z << 8;
    r6 = func_01ffcb0c(0x50000, r7) + 0x50000;
    inv = 0x1000 - r7;
    if (data_021c3070 != 0) {
        idx = func_01ffcb0c(func_0203a4b0(), inv);
    } else {
        idx = 0;
    }
    idx = func_01ffcb0c(idx, 0x10000);
    p->unk_34 = r4;
    p->unk_38 = r6 - idx;
    p->unk_3c = 0;
    r4 = func_01ffcb0c(-0xc00, r7) + 0x1000;
    if (r4 < 0x400) r4 = 0x400;
    else if (r4 > 0x1000) r4 = 0x1000;
    z = func_01ffc588(r4);
    p->unk_4c = z;
    p->unk_50 = z;
    idx = (u16)p->unk_2c >> 4;
    z = func_01ffcb0c(data_02135f44[idx][0], a);
    z = func_01ffcb0c(z, r4);
    p->unk_38 += z;
}

BOOL func_020be018(Unk_020bdd94* p, s32 a, s32 b, s32 c) {
    BOOL r = FALSE;
    if (p->unk_2e != 0) {
        p->unk_28 += a;
        if (p->unk_28 > data_021ef674) r = TRUE;
    } else {
        p->unk_28 -= a;
        if (p->unk_28 < 0) r = TRUE;
    }
    if (!r) {
        p->unk_2c += c;
        func_020bdecc(p, b);
    }
    return r;
}

void func_020be06c(Unk_020bdd94* p, u8 a, s32 b) {
    p->unk_2e = a;
    s32 v;
    if (p->unk_2e != 0) {
        v = 0;
    } else {
        v = data_021ef674;
    }
    p->unk_28 = v;
    return func_020bdecc(p, b);
}

struct Unk_021f3010 { u8 unk_00[8]; s32 unk_08; };
extern Unk_021f3010 data_021f3010[];
extern Unk_021f3010 data_020e6544[];
void func_020be428(Unk_020bdd94*);

void func_020be094(Unk_020bdd94* p) {
    s32 i = p->unk_24;
    if (i != 6) {
        func_020bd940((Unk_020bd868*)&data_021f3010[i]);
    }
    func_020be428(p);
}

struct Unk_020be0bc {
    /* 0x00 */ u8 unk_00[0xc];
    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ u8 unk_10[1];
};
void func_02089268(void*, void*);
void func_02089264(void*, s32);
s32 func_020891bc(void*);

static inline Unk_021f3010* Unk_020be0bc_Get(s32 i) { return &data_020e6544[i]; }
void func_020be0bc(Unk_020be0bc* p) {
    Unk_021f3010* row = Unk_020be0bc_Get(p->unk_0c);
    func_02089268(p->unk_10, row);
    func_02089264(p->unk_10, row->unk_08);
    func_020891bc(p->unk_10);
}
}

struct Unk_020be0f4 {
    s32 unk_00;
    void func_020be4d0();
    void func_020be61c();
    void func_020be7b4();
    void func_020be7dc();
    void func_020bef24();
    void func_020bef90();
    void func_020bf1d0();
    void func_020bf4ac();
    void func_020bf620();
    void func_020bfa08();
    void func_020bfb60();
    void func_020bfcc8();
    void func_020bfe30();
    void func_020be0f4();
};
void Unk_020be0f4::func_020be0f4() {
    static void (Unk_020be0f4::*tbl[13])() = {
        &Unk_020be0f4::func_020bfe30,
        &Unk_020be0f4::func_020bfcc8,
        &Unk_020be0f4::func_020bfb60,
        &Unk_020be0f4::func_020bfa08,
        &Unk_020be0f4::func_020bf620,
        &Unk_020be0f4::func_020bf4ac,
        &Unk_020be0f4::func_020bf1d0,
        &Unk_020be0f4::func_020bef90,
        &Unk_020be0f4::func_020bef24,
        &Unk_020be0f4::func_020be7dc,
        &Unk_020be0f4::func_020be7b4,
        &Unk_020be0f4::func_020be61c,
        &Unk_020be0f4::func_020be4d0,
    };
    void (Unk_020be0f4::*fn)() = tbl[unk_00];
    if (fn) (this->*fn)();
}
