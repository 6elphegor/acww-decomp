#include "types.h"

struct Unk_020499c4_Pair {
    s32 a;
    s32 b;
};

struct Unk_020499c4_Pos {
    Unk_020499c4_Pair p;
};

struct Unk_020499c4_CellFlags {
    s32 f0 : 1;
    s32 f1 : 1;
    s32 f2 : 1;
    s32 f3 : 1;
    s32 f4 : 1;
    s32 f5 : 1;
    s32 nib : 4;
    s32 f10 : 1;
    s32 f11 : 2;
    s32 f13 : 1;
    s32 f14 : 1;
};

struct Unk_020499c4_Cell {
    s32 unk_00;
    u8 unk_04;
    u8 unk_05;
    u8 unk_06;
    u8 unk_07;
    u16 unk_08;
    u16 unk_0a;
    u16 unk_0c;
    u16 unk_0e;
    Unk_020499c4_Pos unk_10;
    u16 unk_18;
    u8 pad_1a[3];
    u8 unk_1d;
    u8 pad_1e[2];
    Unk_020499c4_CellFlags unk_20;
};

struct Unk_020499c4_Row {
    Unk_020499c4_Cell cells[4];
};

struct Unk_020499c4_AFlags {
    s32 nib : 4;
    s32 f4 : 1;
    s32 f5 : 1;
    s32 f6 : 1;
    s32 f7 : 1;
};

struct Unk_020499c4_Dim {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
};

struct Unk_020499c4 {
    s32 unk_00;
    u8 pad_04[0x14];
    u8 unk_18[0xc];
    u8 unk_24;
    u8 unk_25;
    u16 unk_26;
    u16 unk_28;
    u16 unk_2a;
    u8 unk_2c;
    u8 unk_2d;
    u8 unk_2e;
    u8 pad_2f;
    Unk_020499c4_AFlags unk_30;
    s32 unk_34;
    s32 unk_38;
    Unk_020499c4_Pos unk_3c;
    Unk_020499c4_Row rows[4];
};

extern "C" {

struct Unk_020499c4_Counts {
    s32 unk_00;
    s32 counts[5];
};
extern Unk_020499c4_Counts data_021c40cc;
extern s32 data_021c40d0[];
s32 func_02049e1c(Unk_020499c4 *a, s32 v);
void func_02049e40(Unk_020499c4_Cell *cell, Unk_020499c4_Dim *b, s32 i, s32 j);
void func_0204a1c0(Unk_020499c4_Cell *cell, Unk_020499c4_Dim *b, s32 i, s32 j);
void func_0204a6b8(void *out, Unk_020499c4_Pair *p, Unk_020499c4_Cell *cell);
void func_02049bcc(Unk_020499c4 *a, Unk_020499c4_Dim *b, s32 w, s32 h);
s32 func_02049990(void *a, s32 *p, s32 w, s32 h);

void func_020499c4(Unk_020499c4 *a, Unk_020499c4_Dim *b) {
    s32 w, h;
    s32 best;
    s32 v;
    s32 by, bx;
    s32 i, j, k;
    by = -1;
    bx = -1;
    best = 10000;
    a->unk_24 = 0;
    a->unk_26 = 0;
    a->unk_25 = 0;
    a->unk_28 = 0;
    a->unk_2a = 0;
    a->unk_2c = 0;
    a->unk_2d = 0;
    a->unk_34 = by;
    a->unk_38 = by;
    a->unk_3c.p.a = by;
    a->unk_3c.p.b = by;
    
    a->unk_2e = 0;
    *(u8 *)&a->unk_30 = 0;
    for (k = 0; k < 5; k++) {
        data_021c40cc.counts[k] = 0;
    }
    w = b->unk_04 - 2;
    h = b->unk_08 - 2;
    for (i = 0; i < w; i++) {
        for (j = 0; j < h; j++) {
            Unk_020499c4_Cell *cell = &a->rows[i].cells[j];
            func_02049e40(cell, b, i + 1, j + 1);
            if (cell->unk_20.f1) a->unk_24++;
            if (cell->unk_20.f2) a->unk_25++;
            if (cell->unk_20.f4) a->unk_2c++;
            if (cell->unk_1d) a->unk_2d += cell->unk_1d;
            a->unk_30.f5 = a->unk_30.f5 | cell->unk_20.f13;
            a->unk_2a += cell->unk_04 + cell->unk_06 + cell->unk_05 + cell->unk_07;
            a->unk_26 += cell->unk_0e;
            a->unk_28 += cell->unk_08;
            s32 t = cell->unk_0c;
            if (t > 0) a->unk_30.f7 = 1;
            a->unk_30.f6 = a->unk_30.f6 | cell->unk_20.f14;
            v = cell->unk_00;
            data_021c40cc.counts[func_02049e1c(a, v)]++;
            if (v < best) {
                by = i;
                bx = j;
                best = v;
            }
            if (cell->unk_20.f0) {
                a->unk_34 = i;
                a->unk_38 = j;
                { s32 yy = cell->unk_10.p.b; s32 xx = cell->unk_10.p.a; a->unk_3c.p.a = xx; a->unk_3c.p.b = yy; }
            }
        }
    }
    Unk_020499c4_Pair pr;
    pr.a = by;
    pr.b = bx;
    func_0204a6b8(a->unk_18, &pr, &a->rows[by].cells[bx]);
    a->unk_00 = func_02049990(a, data_021c40d0, w, h);
}


void func_02049bcc(Unk_020499c4 *a, Unk_020499c4_Dim *b, s32 w, s32 h) {
    s32 i;
    s32 v;
    s32 by;
    s32 bx;
    s32 best;
    s32 j;
    s32 k;
    by = -1;
    bx = -1;
    best = 0;
    a->unk_24 = 0;
    a->unk_26 = 0;
    a->unk_25 = 0;
    a->unk_28 = 0;
    a->unk_2a = 0;
    a->unk_2c = 0;
    a->unk_2d = 0;
    a->unk_34 = by;
    a->unk_38 = by;
    a->unk_3c.p.a = by;
    a->unk_3c.p.b = by;
    
    a->unk_2e = 0;
    *(u8 *)&a->unk_30 = 0;
    for (k = 0; k < 5; k++) {
        data_021c40cc.counts[k] = 0;
    }
    for (j = 0; j < h; j++) {
        for (i = 0; i < w; i++) {
            Unk_020499c4_Cell *cell = &a->rows[i].cells[j];
            func_02049e40(cell, b, i + 1, j + 1);
            if (cell->unk_20.f1) a->unk_24++;
            if (cell->unk_20.f2) a->unk_25++;
            if (cell->unk_20.f4) a->unk_2c++;
            if (cell->unk_1d) a->unk_2d += cell->unk_1d;
            a->unk_2e += cell->unk_18;
            a->unk_30.nib = a->unk_30.nib | cell->unk_20.nib;
            a->unk_30.f4 = a->unk_30.f4 | cell->unk_20.f10;
            a->unk_30.f5 = a->unk_30.f5 | cell->unk_20.f13;
            a->unk_2a += cell->unk_04 + cell->unk_06 + cell->unk_05 + cell->unk_07;
            a->unk_26 += cell->unk_0e;
            a->unk_28 += cell->unk_08;
            s32 t = cell->unk_0c;
            if (t > 0) a->unk_30.f7 = 1;
            a->unk_30.f6 = a->unk_30.f6 | cell->unk_20.f14;
            v = cell->unk_00;
            data_021c40cc.counts[func_02049e1c(a, v)]++;
            if (v < best) {
                by = i;
                bx = j;
                best = v;
            }
            if (cell->unk_20.f0) {
                a->unk_34 = i;
                a->unk_38 = j;
                { s32 yy = cell->unk_10.p.b; s32 xx = cell->unk_10.p.a; a->unk_3c.p.a = xx; a->unk_3c.p.b = yy; }
            }
        }
    }
    Unk_020499c4_Pair pr;
    pr.a = by;
    pr.b = bx;
    func_0204a6b8(a->unk_18, &pr, &a->rows[by].cells[bx]);
    a->unk_00 = func_02049990(a, data_021c40d0, w, h);
}


}


struct Unk_020492fc_Entry {
    s32 weight;
    u16 value;
};

struct Unk_020492fc_Cell {
    s32 count;
    Unk_020492fc_Entry *entries;
};

extern "C" {

s32 func_02063b8c(s32 n);
extern Unk_020492fc_Cell *data_020da300[][10];
s32 func_02049370(u16 *p);
u16 *func_0204ebd8(void *a, s32 x, s32 y, s32 lx, s32 ly, s32 z);
BOOL func_0204b08c(u16 *p);
BOOL func_0204b1e4(u16 *p);
void func_02049790(void *a, u32 v, s32 x, s32 y);
BOOL func_020495e8(u16 *p);
BOOL func_0204962c(u16 *p);

s32 func_020494bc(u16 *p);

s32 func_020494bc(u16 *p) {
    s32 r = 7;
    BOOL a = FALSE;
    u16 v = *p;
    if (v <= 5) a = TRUE;
    if (a || (v >= 0x8a && v <= 0x8f) || (v >= 0x6e && v <= 0x73)) {
        r = 0;
    } else if ((v >= 6 && v <= 0xb) || (v >= 0x90 && v <= 0x95) || (v >= 0x74 && v <= 0x79)) {
        r = 1;
    } else if ((v >= 0xc && v <= 0x11) || (v >= 0x96 && v <= 0x9b) || (v >= 0x7a && v <= 0x7f)) {
        r = 2;
    } else if ((v >= 0x12 && v <= 0x19) || v == 0x1c || (v >= 0x9c && v <= 0xa3) || v == 0xa5 || (v >= 0x80 && v <= 0x87)) {
        r = 3;
    } else {
        switch (v) {
        case 0x1a:
        case 0x88:
        case 0xa4:
            r = 4;
            break;
        case 0x1d:
            r = 5;
            break;
        case 0x1e:
            r = 6;
            break;
        }
    }
    return r;
}


s32 func_02049370(u16 *p) {
    s32 r = 1;
    BOOL d = TRUE, c = TRUE, b = TRUE, a = FALSE;
    u16 v = *p;
    if (v <= 5) a = TRUE;
    if (!a) {
        if (!(v >= 6 && v <= 0xb)) b = FALSE;
    }
    if (!b) {
        if (!(v >= 0xc && v <= 0x11)) c = FALSE;
    }
    if (!c) {
        if (!((v >= 0x12 && v <= 0x19) || v == 0x1c)) d = FALSE;
    }
    if (d) {
        switch (func_020494bc(p)) {
        case 0:
            r = *p + 1;
            break;
        case 1:
            r = *p - 5;
            break;
        case 2:
            r = *p - 0xb;
            break;
        case 3:
            if (*p == 0x1c) r = 9;
            else r = *p - 0x11;
            break;
        }
    } else if ((v >= 0x8a && v <= 0x8f) || (v >= 0x90 && v <= 0x95) || (v >= 0x96 && v <= 0x9b) || (v >= 0x9c && v <= 0xa3) || v == 0xa5) {
        switch (func_020494bc(p)) {
        case 0:
            r = *p - 0x89;
            break;
        case 1:
            r = *p - 0x8f;
            break;
        case 2:
            r = *p - 0x95;
            break;
        case 3:
            if (*p == 0xa5) r = 7;
            else r = *p - 0x9b;
            break;
        }
    } else if ((v >= 0x6e && v <= 0x73) || (v >= 0x74 && v <= 0x79) || (v >= 0x7a && v <= 0x7f) || (v >= 0x80 && v <= 0x87)) {
        switch (func_020494bc(p)) {
        case 0:
            r = *p - 0x6d;
            break;
        case 1:
            r = *p - 0x73;
            break;
        case 2:
            r = *p - 0x79;
            break;
        case 3:
            r = *p - 0x7f;
            break;
        }
    }
    return r;
}


u16 func_020492fc(u16 *a, u16 *b) {
    s32 kind, rnd;
    u16 result;
    rnd = func_02063b8c(100);
    result = 0xfff1;
    kind = func_020494bc(a);
    s32 lo = func_02049370(a);
    s32 hi = func_02049370(b);
    if (lo > hi) {
        s32 t = lo;
        lo = hi;
        hi = t;
    }
    s32 n;
    Unk_020492fc_Entry *e;
    e = (data_020da300[kind][lo] + hi)->entries;
    if (e != NULL) {
        n = data_020da300[kind][lo][hi].count;
        for (; n != 0; e++, n--) {
            rnd -= e->weight;
            if (rnd <= 0) {
                result = e->value;
                break;
            }
        }
    }
    return result;
}


s32 func_0204956c(void *a, s32 *pos) {
    s32 x = pos[0];
    s32 y = pos[1];
    s32 bx = x >> 4;
    s32 by = y >> 4;
    u16 *p = func_0204ebd8(a, bx, by, x - (bx << 4), y - (by << 4), 0);
    if (p != NULL) {
        if (func_0204b08c(p)) {
            func_02049790(a, *p, pos[0], pos[1]);
        }
    }
    return 0;
}

BOOL func_020495b4(void *a, s32 *pos) {
    BOOL r = FALSE;
    s32 x = pos[0];
    s32 y = pos[1];
    s32 bx = x >> 4;
    s32 by = y >> 4;
    u16 *p = func_0204ebd8(a, bx, by, x - (bx << 4), y - (by << 4), 0);
    if (p != NULL) {
        r = func_020495e8(p);
    }
    return r;
}

BOOL func_020495e8(u16 *p) {
    BOOL r = FALSE;
    if (func_0204962c(p)) {
        r = TRUE;
    } else {
        BOOL b = TRUE, a = r;
        u16 v = *p;
        if (v >= 0xe3 && v <= 0xe7) a = TRUE;
        if (!a) {
            if (!(v >= 0xe8 && v <= 0xfb)) b = FALSE;
        }
        if (b) r = TRUE;
    }
    return r;
}

BOOL func_0204962c(u16 *p) {
    BOOL result = FALSE;
    if (func_0204b1e4(p)) {
        result = TRUE;
    } else {
        BOOL h = TRUE;
        BOOL a = TRUE;
        BOOL b = TRUE;
        BOOL c = TRUE;
        BOOL d = TRUE;
        BOOL e = TRUE;
        BOOL f = TRUE;
        BOOL g = TRUE;
        BOOL i = FALSE;
        u16 v = *p;
        if (v >= 0x26 && v <= 0x2a) i = TRUE;
        if (!i) {
            if (!(v >= 0x5d && v <= 0x61)) g = FALSE;
        }
        if (!g) {
            if (!(v >= 0x2f && v <= 0x56)) f = FALSE;
        }
        if (!f) {
            if (!(v >= 0x57 && v <= 0x5b)) e = FALSE;
        }
        if (!e) {
            if (!(v >= 0x66 && v <= 0x68)) d = FALSE;
        }
        if (!d) {
            if (v != 0x69) c = FALSE;
        }
        if (!c) {
            if (!(v >= 0x6a && v <= 0x6c)) b = FALSE;
        }
        if (!b) {
            if (v != 0x6d) a = FALSE;
        }
        if (!a) {
            if (!(v >= 0xc8 && v <= 0xcf)) h = FALSE;
        }
        if (h && !func_0204b08c(p)) {
            result = TRUE;
        } else {
            BOOL d4 = TRUE, d3 = TRUE, d2 = TRUE, d1 = FALSE;
            u16 w = *p;
            if (w >= 0x2b && w <= 0x2e) d1 = TRUE;
            if (!d1) {
                if (!(w >= 0xff && w <= 0x102)) d2 = FALSE;
            }
            if (!d2) {
                if (!(w >= 0x62 && w <= 0x65)) d3 = FALSE;
            }
            if (!d3) {
                if (!(w >= 0xd0 && w <= 0xd3)) d4 = FALSE;
            }
            if (d4) result = TRUE;
        }
    }
    return result;
}

}


struct Unk_02049790_Cell {
    u32 unk_00;
    u8 sub[2][2];
    u8 pad_08[0x24 - 8];
};

struct Unk_02049790_Row {
    Unk_02049790_Cell cells[4];
};

extern "C" {

extern Unk_02049790_Row data_021c4110[];
BOOL func_0204aecc(u16 *p);
BOOL func_0204af08(u16 *p);
void func_02049854(void *a, s32 x, s32 y, u32 v, s32 flag);
void func_0204eb5c(void *a, u16 *t, s32 x, s32 y, s32 p4, s32 p5, s32 z);
void func_0204e99c(void *a, s32 x, s32 y, s32 p4, s32 p5);
void func_0204e938(void *a, s32 x, s32 y, s32 p4, s32 p5);
void func_0204eb30(void *a, u16 *t, s32 x, s32 y, s32 z);
void func_0204e978(void *a, s32 x, s32 y);
void func_0204e914(void *a, s32 x, s32 y);
BOOL func_020b5198(void *a);
BOOL func_020b5178(void *a);
BOOL func_020b5184();
BOOL func_020b5164();
void *func_0204da0c();
void *func_0204d500(void *a);
void func_ov003_0221caf0(void *a, void *b, void *c, void *d);
void func_ov004_0222c49c(void *a, void *b, void *c, s32 d);

void func_02049748(void *a, u16 *p, s32 x, s32 y) {
    u16 v = *p;
    if (func_0204aecc(p)) {
        v = v - 3;
    } else if (!func_0204af08(p)) {
        v = v + 1;
    }
    func_02049854(a, x, y, v, 0);
}

void func_02049790(void *a, u32 v, s32 x, s32 y) {
    u32 nv = 0x25;
    switch (v) {
    case 0x26:
        break;
    case 0x5d:
        nv = 0x5c;
        break;
    case 0xc8:
        nv = 0xc7;
        break;
    }
    s32 bx = x >> 4;
    s32 by = y >> 4;
    u8 *p = &data_021c4110[bx].cells[by].sub[0][0];
    p += ((x - (bx << 4)) >> 3) * 2;
    s32 yi = (y - (by << 4)) >> 3;
    p[yi]--;
    func_02049854(a, x, y, nv, 0);
}

void func_020497f8(void *a0, void *a1, s32 a2, s32 a3, s32 a4, s32 a5, u16 a6, s32 a7) {
    u16 t = 0xfff1;
    t = a6;
    u32 l5 = a5, l4 = a4;
    func_0204eb5c(a1, &t, a2, a3, l4, l5, 0);
    if (a7) {
        func_0204e99c(a1, a2, a3, l4, l5);
    } else {
        func_0204e938(a1, a2, a3, l4, l5);
    }
}

void func_02049854(void *a, s32 x, s32 y, u32 v, s32 flag) {
    u16 t = 0xfff1;
    t = v;
    func_0204eb30(a, &t, x, y, 0);
    if (flag) {
        func_0204e978(a, x, y);
    } else {
        func_0204e914(a, x, y);
    }
}

void func_0204989c(void *a, s32 x, s32 y, u32 v, s32 flag) {
    void *q;
    if (func_020b5198(a) || func_020b5178(a)) {
        q = func_0204da0c();
        if (q != NULL) {
            u16 t = 0xfff1;
            t = v;
            func_0204eb30(q, &t, x, y, 0);
            if (flag) {
                func_0204e978(q, x, y);
            } else {
                func_0204e914(q, x, y);
            }
        }
    } else {
        q = func_0204d500(a);
        if (q != NULL) {
            u16 t = 0xfff1;
            t = v;
            func_0204eb30(q, &t, x, y, 0);
        }
    }
}

void func_02049928(void *a, void *b, void *c, void *d) {
    if (func_020b5184() || func_020b5164()) {
        func_ov003_0221caf0(a, b, c, d);
    } else {
        func_ov004_0222c49c(a, b, c, 0);
    }
}

void func_02049968(u8 *a, void *b, s32 i, s32 j) {
    func_02049e40((Unk_020499c4_Cell *)(a + 0x44 + i * 0x90 + j * 0x24), (Unk_020499c4_Dim *)b, i + 1, j + 1);
}

s32 func_02049990(void *a, s32 *p, s32 w, s32 h) {
    if (p[0] == w * h) return 0;
    if (p[0] > 0 || p[1] > 0) return 1;
    if (p[2] > 0) return 2;
    if (p[4] < 8) return 3;
    return 4;
}

}
