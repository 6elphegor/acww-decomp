#include "types.h"

struct Unk_02047798_Map {
    u8 pad_00[4];
    s32 unk_04;
    s32 unk_08;
};

struct Unk_02047830_Pos {
    s32 x;
    s32 y;
};

struct Unk_021c40cc {
    u32 unk_00;
    u8 pad_04[0x2c];
    s32 unk_30_0 : 4;
    s32 unk_30_4 : 1;
    s32 unk_30_5 : 1;
    s32 unk_34;
    s32 unk_38;
    s32 unk_3c;
    s32 unk_40;
};

struct Unk_021c40ec {
    u8 pad_00[4];
    u8 unk_04;
    u8 pad_05[8];
    u8 unk_0d;
    u8 unk_0e;
};

struct Unk_021c4110_Cell {
    u8 pad_00[0x18];
    u16 unk_18;
    u8 pad_1a[6];
    s32 unk_20_0 : 1;
    s32 unk_20_1 : 1;
};

struct Unk_021c4110 {
    Unk_021c4110_Cell cell[4];
};

extern "C" {
extern volatile Unk_021c40cc data_021c40cc;
extern Unk_021c40ec data_021c40ec;
extern Unk_021c4110 data_021c4110[];
extern u8 data_021c47bc[];
extern u8 data_021dfd8c[];
extern u16 data_020c912c[];
extern u16 data_020c9754[];
extern u8 data_020c96b8[];

s32 func_02063b8c(s32 n);
s32 func_02133150(s32 a, s32 b);
Unk_02047798_Map *func_0204da0c();
u16 *func_0204ebd8(void *map, s32 x, s32 y, s32 a, s32 b, s32 c);
void func_0204edf8(s32 *ox, s32 *oy, s32 x, s32 y, s32 a, s32 b);
s32 func_020497f8(void *a, void *map, s32 x, s32 y, s32 b, s32 c, s32 d, s32 e);
s32 func_02049854(void *a, s32 x, s32 y, u32 v, s32 w);
s32 func_020482b0(void *a, void *b, s32 x, s32 y, s32 id, void *fn, s32 f);
s32 func_02048324(void *a, void *b, s32 cnt, Unk_02047830_Pos *arr, s32 id, s32 z);
s32 func_02048f3c(void *a, Unk_02047830_Pos *from, Unk_02047830_Pos *to, void *fn);
s32 func_02042564(void *p);
s32 func_02116048(void *src, void *dst, s32 n);
s32 func_0203f2e0(s32 a, void *b, s32 c);
s32 func_0207a484(void *p);
void *func_0207bf60(void *p, s32 i);
s32 func_0203fc10(void *a, s32 b);
s32 func_0207e268(void *p);
s32 func_0209a610();
s32 func_0209b354();
u8 *func_0207f170(void *p);
s32 func_02081038(void *p);
s32 func_0204814c(void *a, void *b, s32 c, s32 d);
s32 func_02048104(void *a, void *b, s32 c, s32 d);
s32 func_020480a8(void *a, void *b, s32 c, s32 d);

void func_020484dc();
void func_0204844c();
void func_02048564();
void func_0204854c();
void func_020491bc();
BOOL func_020484c0(void *a, s32 x, s32 y);
BOOL func_02047904(void *a, void *b, Unk_021c4110_Cell *cell, s32 d, s32 e, s32 f);
s32 func_02047890(void *a, void *b, s32 c, s32 d, s32 e, s32 f);
s32 func_02047b14(void *a, void *b, s32 c, s32 d);
s32 func_02047ac0(void *a, void *b);
void func_02047b8c(void *a, void *b, s32 c, s32 d);
void func_02047bcc(Unk_02047830_Pos *out, void *a, s32 c, s32 d);
void func_02047e64(void *a, void *b, s32 c, s32 d);
void func_02047edc(void *a, void *b, Unk_02047830_Pos *pos, s32 d);
BOOL func_0204804c(void *a, Unk_02047830_Pos *pos, Unk_02047830_Pos *arr, s32 n);
}

static inline BOOL Unk_02047798_InRange(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) r = TRUE;
    return r;
}

extern "C" void func_02047798(void *a) {
    s32 w;
    s32 j;
    s32 x;
    s32 y;
    s32 i;
    s32 h;
    Unk_02047798_Map *m;
    m = func_0204da0c();
    if (m) {
        w = m->unk_04 - 2;
        h = m->unk_08 - 2;
        for (y = 1; y <= h; y++) {
            for (x = 1; x <= w; x++) {
                for (i = 0; i < 16; i++) {
                    for (j = 0; j < 16; j++) {
                        u16 *p = func_0204ebd8(m, x, y, j, i, 0);
                        if (p && Unk_02047798_InRange(p, 0xfc, 0xfd)) {
                            func_020497f8(a, m, x, y, j, i, 0xfff1, 0);
                        }
                    }
                }
            }
        }
    }
}

extern "C" void func_02047830(void *a, void *b, s32 c, s32 d) {
    s32 cnt = data_021c40ec.unk_0e;
    s32 i;
    for (i = 0; i < 4; i++) {
        if (cnt <= 0) return;
        if ((1 << i & data_021c40cc.unk_30_0) == 0) {
            if (func_02047890(a, b, c, d, i, cnt)) cnt--;
        }
    }
    func_02042564(data_021c47bc);
}

extern "C" s32 func_02047890(void *a, void *b, s32 c, s32 d, s32 e, s32 f) {
    s32 r = func_02063b8c(f);
    s32 x, y;
    for (y = 0; y < d; y++) {
        for (x = 0; x < c; x++) {
            Unk_021c4110_Cell *cell = &data_021c4110[x].cell[y];
            s32 v = cell->unk_18;
            if (v > 0) {
                r -= v;
                if (r < 0) {
                    if (func_02047904(a, b, cell, e, x, y)) return 1;
                }
            }
        }
    }
    return 0;
}

extern "C" BOOL func_02047904(void *a, void *b, Unk_021c4110_Cell *cell, s32 d, s32 e, s32 f) {
    s32 x, y;
    s32 ox, oy;
    s32 v = cell->unk_18;
    s32 n = func_02063b8c(v);
    cell->unk_18 = v - 1;
    for (y = 0; y < 16; y++) {
        for (x = 0; x < 16; x++) {
            u16 *p = func_0204ebd8(b, e + 1, f + 1, x, y, 0);
            if (p) {
                BOOL ok = FALSE;
                u32 t = *p;
                if (t >= 0xe3 && t <= 0xe7) ok = TRUE;
                if (ok) {
                    n--;
                    if (n < 0) {
                        func_0204edf8(&ox, &oy, e + 1, f + 1, x, y);
                        s32 q = (s32)(t - 0xe3) % 5;
                        s32 w = data_020c912c[d];
                        func_02049854(b, ox, oy, (u16)(w + q), 0);
                        return TRUE;
                    }
                }
            }
        }
    }
    return FALSE;
}

extern "C" void func_020479bc(void *a, void *b, s32 c, s32 d) {
    if (data_021c40cc.unk_30_5 == 0) {
        s32 x = func_02063b8c(c - 1);
        s32 y = func_02063b8c(d - 1);
        func_020482b0(a, b, x + 1, y + 1, 0x1566, (void *)func_020484dc, 1);
    }
}

extern "C" void func_02047a10(void *a, void *b, s32 c, s32 d) {
    s32 n = 3 - data_021c40ec.unk_0d;
    s32 x = func_02063b8c(c - 1);
    s32 y = func_02063b8c(d - 1);
    for (; n > 0; n--) {
        x = (x + 1 + func_02063b8c(c - 1)) % c;
        y = (y + 1 + func_02063b8c(d - 1)) % d;
        func_020482b0(a, b, x + 1, y + 1, 0x1549, (void *)func_0204844c, 1);
    }
}

static inline u16 *Unk_02047ac0_Get(void *b, Unk_021c40cc *s, s32 u, s32 v, s32 x, s32 y) {
    return func_0204ebd8(b, x + 1, y + 1, u, v, 0);
}

static inline void Unk_02047ac0_Set(void *a, void *b, s32 u, s32 v, s32 x, s32 y) {
    func_020497f8(a, b, x + 1, y + 1, u, v, 0x89, 0);
}

extern "C" s32 func_02047a90(void *a, void *b, s32 c, s32 d) {
    s32 x = data_021c40cc.unk_00;
    s32 y;
    if (x == 0) {
        x = data_021c40cc.unk_34;
        y = data_021c40cc.unk_38;
        if (x < 0 && y < 0) func_02047b14(a, b, c, d);
    } else {
        func_02047ac0(a, b);
    }
}

extern "C" s32 func_02047ac0(void *a, void *b) {
    s32 u, v, x, y;
    u = data_021c40cc.unk_3c; v = data_021c40cc.unk_40; x = data_021c40cc.unk_34; y = data_021c40cc.unk_38;
    if (func_0204ebd8(b, x + 1, y + 1, u, v, 0)) {
        u = data_021c40cc.unk_3c; v = data_021c40cc.unk_40; x = data_021c40cc.unk_34; y = data_021c40cc.unk_38;
        func_020497f8(a, b, x + 1, y + 1, u, v, 0x89, 0);
    }
}

extern "C" s32 func_02047b14(void *a, void *b, s32 c, s32 d) {
    s32 x = func_02063b8c(c);
    s32 y = func_02063b8c(d);
    func_020482b0(a, b, x + 1, y + 1, 0x1b, (void *)func_020484dc, 0);
}

extern "C" void func_02047b54(void *a, void *b, s32 c, s32 d) {
    if (data_021c40cc.unk_00 == 4) {
        if (func_02063b8c(100) < 50) func_02047b8c(a, b, c, d);
    }
}

extern "C" void func_02047b8c(void *a, void *b, s32 c, s32 d) {
    Unk_02047830_Pos out;
    func_02047bcc(&out, a, c, d);
    s32 x = out.x;
    s32 y = out.y;
    if (x != -1) {
        func_020482b0(a, b, x + 1, y + 1, 0x1a, (void *)func_020484dc, 0);
    }
}

extern "C" void func_02047bcc(Unk_02047830_Pos *out, void *a, s32 c, s32 d) {
    s32 t = c * d - data_021c40ec.unk_04;
    if (t > 0) {
        s32 n = func_02063b8c(t);
        s32 x, y;
        for (y = 0; y < d; y++) {
            for (x = 0; x < c; x++) {
                if (data_021c4110[x].cell[y].unk_20_1 == 0) {
                    if (n == 0) {
                        out->x = x;
                        out->y = y;
                        return;
                    }
                    n--;
                }
            }
        }
    }
    out->x = -1;
    out->y = -1;
}

extern "C" void func_02047c44(void *a, void *b, s32 c, s32 d) {
    s32 x = func_02063b8c(c);
    s32 y = func_02063b8c(d);
    s32 id = func_02063b8c(100) < 2 ? 0x20 : 0x1f;
    func_020482b0(a, b, x + 1, y + 1, id, (void *)func_02048564, 0);
}

extern "C" void func_02047c90(void *a, void *b, s32 c, s32 d) {
    s32 x = func_02063b8c(c);
    s32 y = func_02063b8c(d);
    func_020482b0(a, b, x + 1, y + 1, 0x1d, (void *)func_0204854c, 0);
}

extern "C" void func_02047dd0(void *a, void *b, s32 c, s32 d) {
    s32 x = func_02063b8c(c);
    s32 y = func_02063b8c(d);
    s32 i = func_02063b8c(12);
    func_020482b0(a, b, x + 1, y + 1, data_020c9754[i], (void *)func_020484c0, 0);
}

extern "C" void func_02047e1c(void *a, void *b, void *c, s32 d) {
    u8 buf[8];
    func_02116048(c, buf, 8);
    if (func_0203f2e0(14, buf, 0) != 2 ? TRUE : FALSE) {
        if (d > 7) d = 7;
        func_02047e64(a, b, 0, d);
    }
}

struct Unk_02047e64_Pos : Unk_02047830_Pos {
    Unk_02047e64_Pos(s32 px, s32 py) { x = px; y = py; }
};

extern "C" void func_02047e64(void *a, void *b, s32 c, s32 d) {
    s32 r = func_0207a484(data_021dfd8c);
    u8 *q;
    void *p;
    s32 i;
    for (i = 0; i < 8; i++) {
        p = func_0207bf60(data_021dfd8c, i);
        if (func_0203fc10(p, r)) {
            if (c == 0) {
                func_0207e268(p);
                func_0209a610();
                if (func_0209b354() != 5) continue;
            }
            q = func_0207f170(p);
            if (func_02081038(q)) {
                Unk_02047e64_Pos pos(q[0], q[1]);
                func_02047edc(a, b, &pos, d);
            }
        }
    }
}

extern "C" void func_02047edc(void *a, void *b, Unk_02047830_Pos *pos, s32 d) {
    Unk_02047830_Pos arr[17];
    Unk_02047830_Pos *q;
    s32 cnt;
    s32 x, y, xh, yh, i;
    s32 z = 0;
    q = arr;
    do { q->x = z; q->y = z; q++; } while (q != &arr[17]);
    cnt = z;
    for (i = 0; i < 17; i++) {
        u32 v = data_020c96b8[i];
        x = pos->x + (((s32)v >> 4) - 8);
        y = pos->y + ((v & 15) - 8);
        xh = x >> 4;
        yh = y >> 4;
        u16 *p = func_0204ebd8(b, xh, yh, x - (xh << 4), y - (yh << 4), 0);
        if (p && *p == 0xfff1 && func_020484c0(b, x, y)) {
            arr[cnt].x = x;
            arr[cnt].y = y;
            cnt++;
        }
    }
    s32 n = d * 2;
    for (; cnt > 0; cnt--) {
        i = func_02048324(a, b, cnt, arr, data_020c9754[func_02063b8c(12)], 0);
        n--;
        if (n <= 0) break;
        for (; i < 16; i++) {
            arr[i].x = arr[i + 1].x;
            arr[i].y = arr[i + 1].y;
        }
    }
}

extern "C" void func_02047fbc(void *a, void *b) {
    s32 r;
    Unk_02047830_Pos pos;
    Unk_02047830_Pos arr[3];
    s32 cnt = 0;
    s32 i;
    s32 z = 0;
    pos.x = 0; pos.y = 0;
    arr[0].x = 0; arr[0].y = 0; arr[1].x = 0; arr[1].y = 0;
    arr[2].x = 0; arr[2].y = 0;
    for (i = 0; i < 3; i++) {
        do {
            r = func_02063b8c(16);
            pos.x = r % 4;
            pos.y = r / 4;
        } while (func_0204804c(a, &pos, arr, cnt));
        func_020482b0(a, b, pos.x + 1, pos.y + 1, (u16)(func_02063b8c(4) + 0x21), (void *)func_020484dc, z);
        arr[cnt].x = pos.x;
        arr[cnt].y = pos.y;
        cnt++;
    }
}

extern "C" BOOL func_0204804c(void *a, Unk_02047830_Pos *pos, Unk_02047830_Pos *arr, s32 n) {
    BOOL r = FALSE;
    for (; n != 0; arr++, n--) {
        if (pos->x == arr->x && pos->y == arr->y) {
            r = TRUE;
            break;
        }
    }
    return r;
}

extern "C" void func_02048078(void *a, void *b, s32 c, s32 d) {
    func_0204814c(a, b, c, d);
    func_02048104(a, b, c, d);
    func_020480a8(a, b, c, d);
}

extern "C" void func_02047cd0(void *a, Unk_02047798_Map *b, s32 c, s32 d) {
    s32 cnt, y, x;
    for (y = 0; y < d; y++) {
        for (x = 0; x < c; x++) {
            if (func_02063b8c(100) < 20) {
                s32 i, j, k;
                s32 ox, oy;
                Unk_02047830_Pos from, to;
                Unk_02047830_Pos arr[256];
                Unk_02047830_Pos *q;
                Unk_02047830_Pos *end = &arr[256];
                q = arr;
                do { q->x = 0; q->y = 0; q++; } while (q != end);
                cnt = 0;
                for (i = 0; i < 16; i++) {
                    for (j = 0; j < 16; j++) {
                        u16 *p = func_0204ebd8(b, x + 1, y + 1, j, i, 0);
                        if (p) {
                            BOOL ok = FALSE;
                            if (*p <= 0x19) ok = TRUE;
                            if (ok) {
                                func_0204edf8(&ox, &oy, x + 1, y + 1, j, i);
                                arr[cnt].x = ox;
                                arr[cnt].y = oy;
                                cnt++;
                            }
                        }
                    }
                }
                if (cnt > 0) {
                    k = func_02063b8c(cnt);
                    Unk_02047830_Pos *bp = (Unk_02047830_Pos *)((u8 *)b + 4);
                    s32 fx = bp->x << 4;
                    s32 fy = bp->y << 4;
                    to.x = arr[k].x;
                    to.y = arr[k].y;
                    from.x = fx;
                    from.y = fy;
                    func_02048f3c(b, &from, &to, (void *)func_020491bc);
                }
            }
        }
    }
}
