#include "types.h"

struct Unk_02048cc4_Pos {
    s32 x, y;
    Unk_02048cc4_Pos(s32 a, s32 b) : x(a), y(b) {}
    Unk_02048cc4_Pos(const Unk_02048cc4_Pos &o) : x(o.x), y(o.y) {}
};
typedef Unk_02048cc4_Pos Pos;

struct Unk_0204da0c_Size {
    s32 w;
    s32 h;
};

struct Unk_0204da0c_Map {
    u32 unk_00;
    Unk_0204da0c_Size unk_04;
};

extern "C" {
u16 *func_0204ebd8(void *m, s32 a, s32 b, s32 c, s32 d, s32 e);
BOOL func_0204b08c(u16 *p);
void func_02049790(void *m, u32 id, s32 x, s32 y);
BOOL func_0204e378(void *m, s32 x, s32 y);
s32 func_02049854(void *m, s32 x, s32 y, u32 id, s32 layer);
s32 func_02063b8c(s32 n);
s32 func_02133150(s32 a, s32 b);
s32 func_020484c0(void *m, s32 x, s32 y);
s32 func_020494bc(u16 *p);
u16 func_020492fc(u16 *a, u16 *b);
BOOL func_0204956c(void *m, Pos a, Pos b, Pos c);
BOOL func_020495b4(void *m, Pos a, Pos b, Pos c);
extern u8 data_020c9164[];
extern u8 data_020c9850[];
extern s32 data_020c97cc[][2];
extern u32 data_020ca0e4[];
extern u32 data_020ca078[];
BOOL func_02048f3c(void *m, Pos size, Pos pos, BOOL (*cb)(void *, Pos, Pos, Pos));
BOOL func_02048e70(u32 a, void *m, Pos size, Pos pos);
void func_02048e10(u32 a, void *m, u16 *cell, Pos size, s32 x, s32 y);
void func_02048da8(u32 a, void *m, u16 *cell, Pos size, s32 x, s32 y);
void func_02048ddc(u32 a, void *m, u16 *cell, Pos size, s32 x, s32 y);
void func_02048cc4(u32 a, void *m, Pos size, Pos pos);
BOOL func_02049298(void *m, Pos p, Pos q, Pos r, u16 v);
BOOL func_02048ea8(void *m, Pos size, Pos pos, u16 v);
}

static inline u16 *Cell(void *m, s32 x, s32 y, s32 layer)
{
    s32 hx = x >> 4, hy = y >> 4;
    return func_0204ebd8(m, hx, hy, x - (hx << 4), y - (hy << 4), layer);
}

static inline BOOL Match(u16 *p, BOOL z0, BOOL z1, BOOL z2, BOOL z3, BOOL z4, BOOL z5, BOOL z6, BOOL z7, BOOL z8)
{
    BOOL n0 = z0, n1 = 1, n2 = 1, n3 = 1, n4 = 1, n5 = 1, n6 = 1, n7 = 1, n8 = 1;
    u32 t = *p;
    if (t >= 0x26 && t <= 0x2a) n0 = 1;
    if (!n0 && !(t >= 0x5d && t <= 0x61)) n1 = z1;
    if (!n1 && !(t >= 0x2f && t <= 0x56)) n2 = z2;
    if (!n2 && !(t >= 0x57 && t <= 0x5b)) n3 = z3;
    if (!n3 && !(t >= 0x66 && t <= 0x68)) n4 = z4;
    if (!n4 && t != 0x69) n5 = z5;
    if (!n5 && !(t >= 0x6a && t <= 0x6c)) n6 = z6;
    if (!n6 && t != 0x6d) n7 = z7;
    if (!n7 && !(t >= 0xc8 && t <= 0xcf)) n8 = z8;
    return n8;
}

static inline u16 *CellP(void *m, const Pos &p, s32 layer)
{
    s32 x = p.x;
    s32 y = p.y;
    s32 hx = x >> 4, hy = y >> 4;
    return func_0204ebd8(m, hx, hy, x - (hx << 4), y - (hy << 4), layer);
}

extern "C" void func_02048c30(u32 a, void *m, Pos size)
{
    s32 x, y, i;
    for (i = 0; i < 3; i++) {
        for (y = 0; y < size.y; y++) {
            x = data_020c97cc[i][y & 1];
            if (x < size.x) {
                goto test;
            loop:
                {
                    u16 *cell = Cell(m, x, y, 0);
                    if (cell) {
                        if (func_0204b08c(cell)) {
                            func_02048cc4(a, m, size, Pos(x, y));
                        }
                    }
                }
                x += 4;
            test:
                if (x < size.x) goto loop;
            }
        }
    }
}

extern "C" void func_02048cc4(u32 a, void *m, Pos size, Pos pos)
{
    func_02048f3c(m, size, pos, func_0204956c);
}

extern "C" void func_02048cf0(u32 a, void *m, Pos size)
{
    s32 x, y;
    for (y = 0; y < size.y; y++) {
        x = 0;
        if (x < size.x) {
            goto test;
        loop:
            {
                u16 *cell = Cell(m, x, y, 0);
                if (cell && func_0204b08c(cell)) {
                    switch (*cell) {
                    case 0x5d:
                        func_02048ddc(a, m, cell, size, x, y);
                        break;
                    case 0xc8:
                        func_02048da8(a, m, cell, size, x, y);
                        break;
                    default:
                        func_02048e10(a, m, cell, size, x, y);
                        break;
                    }
                }
            }
            x++;
        test:
            if (x < size.x) goto loop;
        }
    }
}

extern "C" void func_02048da8(u32 a, void *m, u16 *cell, Pos size, s32 x, s32 y)
{
    if (y < 0x40) {
        func_02049790(m, *cell, x, y);
    } else {
        func_02048e10(a, m, cell, size, x, y);
    }
}

extern "C" void func_02048ddc(u32 a, void *m, u16 *cell, Pos size, s32 x, s32 y)
{
    if (y >= 0x30) {
        func_02049790(m, *cell, x, y);
    } else {
        func_02048e10(a, m, cell, size, x, y);
    }
}

extern "C" void func_02048e10(u32 a, void *m, u16 *cell, Pos size, s32 x, s32 y)
{
    s32 px = x;
    volatile s32 vy = y;
    if (func_0204e378(m, px, vy) != 1) {
        func_02049790(m, *cell, x, y);
    } else {
        if (!func_02048e70(a, m, size, Pos(px, vy))) {
            func_02049790(m, *cell, x, y);
        }
    }
}

extern "C" BOOL func_02048e70(u32 a, void *m, Pos size, Pos pos)
{
    BOOL r = TRUE;
    if (func_02048f3c(m, size, pos, func_020495b4)) {
        r = FALSE;
    }
    return r;
}


extern "C" BOOL func_02048ea8(void *m, Pos size, Pos pos, u16 v)
{
    s32 result = 0;
    s32 r = func_02063b8c(8);
    s32 i;
    for (i = 0; i < 8; i++) {
        u8 b = data_020c9164[r];
        s32 nx = pos.x - ((b >> 4) - 8);
        s32 ny = pos.y - ((b & 15) - 8);
        if (nx >= 0 && nx < size.x && ny >= 0 && ny < size.y) {
            if (func_02049298(m, Pos(nx, ny), pos, size, v)) {
                result = 1;
                break;
            }
        }
        r = (r + 1) % 8;
    }
    return result;
}

extern "C" BOOL func_02048f3c(void *m, Pos size, Pos pos, BOOL (*cb)(void *, Pos, Pos, Pos))
{
    s32 i;
    BOOL result = FALSE;
    u8 *p = data_020c9164;
    for (i = 0; i < 8; p++, i++) {
        u8 b = *p;
        s32 nx = pos.x - ((b >> 4) - 8);
        s32 ny = pos.y - ((b & 15) - 8);
        if (nx >= 0 && nx < size.x && ny >= 0 && ny < size.y) {
            if (nx != pos.x || ny != pos.y) {
                result = cb(m, Pos(nx, ny), pos, size);
                if (result) {
                    break;
                }
            }
        }
    }
    return result;
}

extern "C" void func_02048fc4(u32 a, void *m, s32 c)
{
    s32 x;
    Unk_0204da0c_Size *sz;
    s32 rem;
    u32 id;
    s32 y;
    u16 *cell;
    u32 t;
    s32 h;
    s32 w;
    sz = &((Unk_0204da0c_Map *)m)->unk_04;
    w = sz->w << 4;
    h = sz->h << 4;
    y = 0;
    rem = c % 7;
    for (; y < h; y++) {
        x = 0;
        if (x < w) {
            goto L_test;
        L_loop:
            {
            cell = Cell(m, x, y, 0);
            if (cell) {
                id = 0xffff;
                BOOL f = FALSE;
                t = *cell;
                if (t >= 0x6e && t <= 0x89) {
                    f = TRUE;
                }
                if (f) {
                    if (rem == 0) {
                        id = 0xfff1;
                    }
                } else if (t == 0x1e) {
                    if (rem == 0) {
                        if (func_02063b8c(100) < 0x1e) {
                            id = 0xfff1;
                        }
                    }
                } else {
                    BOOL g = FALSE;
                    if (t <= 0x1a) {
                        g = TRUE;
                    }
                    if (g) {
                        if (func_02063b8c(100) < (s32)data_020ca0e4[t]) {
                            id = (u16)(*cell + 0x6e);
                        }
                    } else if (t == 0x1d) {
                        if (func_02063b8c(100) < 0x1e) {
                            id = 0x1e;
                        }
                    }
                }
                if (id != 0xffff) {
                    func_02049854(m, x, y, id, 0);
                }
            }
        }
            x++;
        L_test:
            if (x < w) goto L_loop;
        }
    }
}

extern "C" void func_020490c8(u32 a, void *m)
{
    s32 y;
    BOOL f;
    u32 t;
    u32 id;
    BOOL g;
    s32 h;
    s32 w;
    u16 *cell;
    s32 x;
    Unk_0204da0c_Size *sz;
    sz = &((Unk_0204da0c_Map *)m)->unk_04;
    w = sz->w << 4;
    h = sz->h << 4;
    for (y = 0; y < h; y++) {
        x = 0;
        if (x < w) {
            goto test;
        loop:
            cell = Cell(m, x, y, 0);
            if (cell) {
                id = 0xffff;
                f = FALSE;
                t = *cell;
                if (t >= 0x6e && t <= 0x89) {
                    f = TRUE;
                }
                if (f) {
                    id = 0xfff1;
                } else {
                    g = FALSE;
                    if (t <= 0x1a) {
                        g = TRUE;
                    }
                    if (g) {
                        if (func_02063b8c(100) < (s32)data_020ca078[t]) {
                            id = (u16)(*cell + 0x6e);
                        }
                    } else if (t == 0x1d) {
                        if (func_02063b8c(100) < 0x1e) {
                            id = 0x1e;
                        }
                    } else if (t >= 0x8a && t <= 0xa4) {
                        id = (u16)(t - 0x8a);
                    } else if (t == 0xa5) {
                        id = 0x1c;
                    }
                }
                if (id != 0xffff) {
                    func_02049854(m, x, y, id, 0);
                }
            }
            x++;
        test:
            if (x < w) goto loop;
        }
    }
}

extern "C" BOOL func_020491bc(void *m, Pos p, Pos q, Pos r)
{
    BOOL result = FALSE;
    u16 *c1 = CellP(m, p, 0);
    if (c1) {
        BOOL f = FALSE;
        if (*c1 <= 0x19) {
            f = TRUE;
        }
        if (f) {
            u16 *c2 = CellP(m, q, 0);
            s32 t1 = func_020494bc(c2);
            s32 t2 = func_020494bc(c1);
            if (t1 == t2) {
                u16 v = func_020492fc(c2, c1);
                if (v != 0xfff1) {
                    if (func_02048ea8(m, r, q, v)) {
                        result = 1;
                    } else {
                        result = func_02048ea8(m, r, p, v);
                    }
                }
            }
        }
    }
    return result;
}

extern "C" BOOL func_02049298(void *m, Pos p, Pos q, Pos r, u16 v)
{
    BOOL result = FALSE;
    u16 *cell = CellP(m, p, 0);
    if (cell && *cell == 0xfff1) {
        if (func_020484c0(m, p.x, p.y)) {
            func_02049854(m, p.x, p.y, v, 0);
            result = TRUE;
        }
    }
    return result;
}

static inline BOOL Unk_020489cc_Check(u16 *p) {
    BOOL f9 = TRUE, f8 = TRUE, f7 = TRUE, f6 = TRUE, f5 = TRUE, f4 = TRUE, f3 = TRUE, f2 = TRUE, f1 = FALSE;
    u32 v = *p;
    if (v >= 0x26 && v <= 0x2a) f1 = TRUE;
    if (!f1 && !(v >= 0x5d && v <= 0x61)) f2 = FALSE;
    if (!f2 && !(v >= 0x2f && v <= 0x56)) f3 = FALSE;
    if (!f3 && !(v >= 0x57 && v <= 0x5b)) f4 = FALSE;
    if (!f4 && !(v >= 0x66 && v <= 0x68)) f5 = FALSE;
    if (!f5 && !(v == 0x69)) f6 = FALSE;
    if (!f6 && !(v >= 0x6a && v <= 0x6c)) f7 = FALSE;
    if (!f7 && !(v == 0x6d)) f8 = FALSE;
    if (!f8 && !(v >= 0xc8 && v <= 0xcf)) f9 = FALSE;
    return f9;
}
extern "C" void func_020489cc(u32 a, void *m, Pos size)
{
    s32 x, y, i, count;
    for (y = 0; y < size.y; y++) {
        x = 0;
        if (x < size.x) {
            goto L_test;
        L_loop:
            {
            u16 *cell = Cell(m, x, y, 0);
            if (cell) {
                if (Unk_020489cc_Check(cell)) {
                    if (func_0204b08c(cell)) {
                        u8 *p = data_020c9850;
                        count = 0;
                        for (i = 0; i < 0x30; p++, i++) {
                            u8 b = *p;
                            s32 nx = x - ((b >> 4) - 8);
                            s32 ny = y - ((b & 15) - 8);
                            if (nx >= 0 && nx < size.x && ny >= 0 && ny < size.y) {
                                u16 *c2 = Cell(m, nx, ny, 0);
                                if (c2) {
                                    if (Match(c2, 0, 0, 0, 0, 0, 0, 0, 0, 0)) {
                                        count++;
                                    }
                                }
                            }
                        }
                        if (count >= 8) {
                            func_02049790(m, *cell, x, y);
                        }
                    }
                }
            }
        }
            x++;
        L_test:
            if (x < size.x) goto L_loop;
        }
    }
}
