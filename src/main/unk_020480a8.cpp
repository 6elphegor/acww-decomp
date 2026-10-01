#include "types.h"

struct Unk_020480a8_Cell {
    s32 f00;
    u8 b[2][2];
    u8 pad[0x18];
    s32 b0 : 1;
    s32 b1 : 1;
    s32 b2 : 1;
    s32 b3 : 1;
    s32 b4 : 1;
    s32 b5 : 1;
    s32 b6 : 1;
    s32 b7 : 25;
};

struct Unk_020481b8_Pos {
    s32 x, y;
};

struct Unk_02048758_Slot {
    s32 kind;
    s32 count;
    Unk_020481b8_Pos pos[64];
    u16 id[64];
};

struct Unk_020485d4_Size {
    s32 w, h;
    Unk_020485d4_Size(s32 a, s32 b) : w(a), h(b) {}
};

struct Unk_020485d4_Q {
    s32 f0;
    Unk_020481b8_Pos pos;
};

struct Unk_02048104_Hdr {
    u8 pad[0xc];
    u8 v;
};

extern Unk_020480a8_Cell data_021c4110[][4];
extern Unk_02048104_Hdr data_021c40ec;
extern void *data_020cbb18;

extern "C" {
s32 func_02063b8c(s32);
s32 func_020481b8(void *a, void *b, s32 x, s32 y, s32 e);
u16 *func_0204ebd8(void *q, s32 a, s32 b, s32 c, s32 d, s32 e);
void func_0204edf8(s32 *x, s32 *y, s32 a, s32 b, s32 c, s32 d);
void func_02049854(void *b, s32 x, s32 y, u16 id, s32 z);
s32 func_02072e44(void *);
void func_0204eb30(void *b, u16 *id, s32 x, s32 y, s32 z);
void func_0204e978(void *b, s32 x, s32 y);
void func_0204e914(void *b, s32 x, s32 y);
void *func_020b50e8();
void func_0205f094(s32 x, s32 y, void *r, u16 id, s32 g);
s32 func_0204e3c8();
s32 func_0204e3a0();
s32 func_0204e378();
s32 func_0204e3f0();
s32 func_0204962c(u16 *t);
void func_02048cf0(void *a, void *q, Unk_020485d4_Size *p);
void func_02048c30(void *a, void *q, Unk_020485d4_Size *p);
void func_020489cc(void *a, void *q, Unk_020485d4_Size *p);
void func_02048758(void *a, void *q, s32 w, s32 h);
void func_02048634(void *a, void *q, Unk_020485d4_Size *p);
void func_02049748(void *q, u16 *t, s32 x, s32 y);
void func_020488c0(Unk_02048758_Slot (*s)[2], Unk_020480a8_Cell *c);
void func_02048874(Unk_02048758_Slot (*s)[2], u16 id, s32 x, s32 y, s32 i, s32 j);
void func_02048838(Unk_02048758_Slot (*s)[2]);
s32 func_0204b08c(u16 *t);
void func_02048904(Unk_02048758_Slot *s);
void func_02049790(void *o, u16 id, s32 x, s32 y);
void *func_0204da0c();
void func_0204897c(Unk_02048758_Slot *s, u16 id, s32 x, s32 y);
void func_020489ac(Unk_02048758_Slot *s, Unk_020480a8_Cell *c, s32 i, s32 j);
s32 func_020483b0(void *a, Unk_020481b8_Pos *arr, void *c, s32 d, s32 e, s32 (*fn)(void *, s32, s32));
s32 func_02048324(void *a, void *b, s32 n, Unk_020481b8_Pos *arr, u16 e, s32 g);
}

extern "C" void func_020480a8(void *a, void *b, s32 w, s32 h) {
    s32 x, y;
    for (y = 0; y < h; y++) {
        for (x = 0; x < w; x++) {
            if (data_021c4110[x][y].b5 == 0) {
                func_020481b8(a, b, x + 1, y + 1, 2);
            }
        }
    }
}

extern "C" void func_02048104(void *a, void *b, s32 c, s32 d) {
    s32 n = 2 - data_021c40ec.v;
    while (n != 0) {
        s32 x = func_02063b8c(c);
        s32 y = func_02063b8c(d);
        func_020481b8(a, b, x + 1, y + 1, 0);
        n--;
    }
}

extern "C" void func_0204814c(void *a, void *b, s32 w, s32 h) {
    BOOL ok;
    s32 x, y;
    for (x = 0; x < w; x++) {
        ok = TRUE;
        for (y = 0; y < h; y++) {
            if (data_021c4110[x][y].b3 != 0) {
                ok = FALSE;
                break;
            }
        }
        if (ok) {
            s32 r = func_02063b8c(h) + 1;
            func_020481b8(a, b, x + 1, r, 1);
        }
    }
}

struct Unk_020481b8_PosZ { s32 x, y; Unk_020481b8_PosZ() { x = 0; y = 0; } };
extern "C" s32 func_020481b8(void *a, void *b, s32 x, s32 y, s32 e) {
    Unk_020481b8_PosZ pos[256];
    u16 id[256];
    s32 j, i, n;
    s32 result;
    n = 0;
    result = 0;
    for (i = 0; i < 16; i++) {
        for (j = 0; j < 16; j++) {
            u16 *t = func_0204ebd8(b, x, y, j, i, 0);
            if (t != NULL) {
                s32 px, py;
                func_0204edf8(&px, &py, x, y, j, i);
                switch (*t) {
                case 0x2a:
                    pos[n].x = px;
                    pos[n].y = py;
                    id[n] = 0x66;
                    n++;
                    break;
                case 0x61:
                    pos[n].x = px;
                    pos[n].y = py;
                    id[n] = 0x6a;
                    n++;
                    break;
                }
            }
        }
    }
    if (n > 0) {
        s32 k = func_02063b8c(n);
        func_02049854(b, pos[k].x, pos[k].y, (u16)(e + id[k]), 0);
        result = 1;
    }
    return result;
}

extern "C" BOOL func_020482b0(void *a, void *b, void *c, s32 d, u16 e, s32 (*f)(void *, s32, s32), s32 g) {
    Unk_020481b8_Pos arr[256];
    s32 i, n;
    BOOL result;
    Unk_020481b8_Pos *pp = arr;
    Unk_020481b8_Pos *endp;
    result = FALSE;
    endp = arr + 256;
    do {
        pp->x = 0;
        pp->y = 0;
        pp++;
    } while (pp != endp);
    n = func_020483b0(a, arr, b, (s32)c, d, f);
    if (func_02048324(a, b, n, arr, e, g) >= 0) {
        result = TRUE;
    }
    return result;
}

extern "C" s32 func_02048324(void *a, void *b, s32 n, Unk_020481b8_Pos *arr, u16 e, s32 g) {
    s32 r = -1;
    Unk_020481b8_Pos *p;
    if (n > 0) {
        u16 t;
        r = func_02063b8c(n);
        p = arr + r;
        if (func_02072e44(data_020cbb18) == 0) {
            t = e;
            func_0204eb30(b, &t, p->x, p->y, 0);
            if (g != 0) {
                func_0204e978(b, p->x, p->y);
            } else {
                func_0204e914(b, p->x, p->y);
            }
        } else {
            void *o = func_020b50e8();
            func_0205f094((s8)p->x, (s8)p->y, o, e, g);
        }
    }
    return r;
}

extern "C" s32 func_020483b0(void *a, Unk_020481b8_Pos *arr, void *c, s32 d, s32 e, s32 (*fn)(void *, s32, s32)) {
    s32 j, n, i;
    n = 0;
    i = 0;
    u32 ee = e;
    for (; i < 16; i++) {
        for (j = 0; j < 16; j++) {
            u16 *t = func_0204ebd8(c, d, ee, j, i, 0);
            if (t != NULL && *t == 0xfff1) {
                s32 px, py;
                func_0204edf8(&px, &py, d, ee, j, i);
                if (fn(c, px, py) != 0) {
                    arr->x = px;
                    arr->y = py;
                    arr++;
                    n++;
                }
            }
        }
    }
    return n;
}

extern "C" BOOL func_0204842c() {
    BOOL r = FALSE;
    if (func_0204e3c8() != 0) r = TRUE;
    return r;
}

extern "C" s32 func_02048444() {
    return func_0204e3c8();
}

extern "C" BOOL func_0204844c(void *p, s32 x, s32 y) {
    BOOL r = FALSE;
    s32 bx;
    s32 k = func_0204e3a0();
    switch (k) {
    case 0:
    case 1: {
        s32 t = y + 1;
        bx = x >> 4;
        s32 ty = t >> 4;
        u16 *a = func_0204ebd8(p, bx, ty, x - (bx << 4), t - (ty << 4), 0);
        if (a != NULL && func_0204962c(a) == 0) {
            s32 t2 = y + 2;
            s32 ty2 = t2 >> 4;
            u16 *b = func_0204ebd8(p, bx, ty2, x - ((u32)bx << 4), t2 - (ty2 << 4), 0);
            if (b != NULL && func_0204962c(b) == 0) {
                r = TRUE;
            }
        }
        break;
    }
    }
    return r;
}

extern "C" BOOL func_020484c0() {
    BOOL r = FALSE;
    switch (func_0204e378()) {
    case 0:
    case 1:
        r = TRUE;
    }
    return r;
}

extern "C" BOOL func_0204854c();

extern "C" BOOL func_020484dc(void *p, s32 x, s32 y) {
    BOOL r = FALSE;
    s32 bx;
    if (func_0204854c() != 0) {
        s32 t = y + 1;
        bx = x >> 4;
        s32 ty = t >> 4;
        u16 *a = func_0204ebd8(p, bx, ty, x - (bx << 4), t - (ty << 4), 0);
        if (a != NULL && func_0204962c(a) == 0) {
            s32 t2 = y + 2;
            s32 ty2 = t2 >> 4;
            u16 *b = func_0204ebd8(p, bx, ty2, x - ((u32)bx << 4), t2 - (ty2 << 4), 0);
            if (b != NULL && func_0204962c(b) == 0) {
                r = TRUE;
            }
        }
    }
    return r;
}

extern "C" BOOL func_0204854c() {
    BOOL r = FALSE;
    if (func_0204e378() == 1) r = TRUE;
    return r;
}

extern "C" BOOL func_02048564(void *p, s32 x, s32 y) {
    BOOL r = FALSE;
    s32 bx;
    if (func_0204e3f0() != 0) {
        s32 t = y + 1;
        bx = x >> 4;
        s32 ty = t >> 4;
        u16 *a = func_0204ebd8(p, bx, ty, x - (bx << 4), t - (ty << 4), 0);
        if (a != NULL && func_0204962c(a) == 0) {
            s32 t2 = y + 2;
            s32 ty2 = t2 >> 4;
            u16 *b = func_0204ebd8(p, bx, ty2, x - ((u32)bx << 4), t2 - (ty2 << 4), 0);
            if (b != NULL && func_0204962c(b) == 0) {
                r = TRUE;
            }
        }
    }
    return r;
}

extern "C" void func_020485d4(void *a, void *q, s32 c, s32 d) {
    Unk_020485d4_Q *qq = (Unk_020485d4_Q *)q;
    Unk_020481b8_Pos *pp = &qq->pos;
    s32 h = pp->y << 4;
    s32 w = pp->x << 4;
    Unk_020485d4_Size s1(w, h);
    func_02048cf0(a, q, &s1);
    Unk_020485d4_Size s2(w, h);
    func_02048c30(a, q, &s2);
    Unk_020485d4_Size s3(w, h);
    func_020489cc(a, q, &s3);
    func_02048758(a, q, c, d);
    Unk_020485d4_Size s4(w, h);
    func_02048634(a, q, &s4);
}

static inline BOOL Unk_02048634_Check(u16 *p) {
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
extern "C" void func_02048634(void *a, void *q, Unk_020485d4_Size *sz) {
    s32 x, y;
    for (y = 0; y < sz->h; y++) {
        x = 0;
        if (x < sz->w) {
            goto test;
        loop:
            {
                s32 bx = x >> 4;
                s32 by = y >> 4;
                u16 *t = func_0204ebd8(q, bx, by, x - (bx << 4), y - (by << 4), 0);
                if (t != NULL) {
                    if (Unk_02048634_Check(t)) func_02049748(q, t, x, y);
                }
            }
            x++;
        test:
            if (x < sz->w) goto loop;
        }
    }
}

extern "C" void func_02048758(void *a, void *q, s32 w, s32 h) {
    Unk_02048758_Slot s[2][2];
    s32 x, y, i;
    u16 *t;
    Unk_02048758_Slot *sl = &s[0][0];
    Unk_020481b8_Pos *pp;
    y = 0;
    do {
        pp = sl->pos;
        do {
            pp->x = y;
            pp->y = y;
            pp++;
        } while (pp != sl->pos + 64);
        sl++;
    } while (sl != &s[0][0] + 4);
    for (y = 0; y < h; y++) {
        for (x = 0; x < w; x++) {
            t = func_0204ebd8(q, x + 1, y + 1, 0, 0, 0);
            func_020488c0(s, &data_021c4110[x][y]);
            for (i = 0; i < 256; t++, i++) {
                if (t != NULL && func_0204b08c(t) != 0) {
                    func_02048874(s, *t, x + 1, y + 1, i & 15, (i >> 4) & 15);
                }
            }
            func_02048838(s);
        }
    }
}

extern "C" void func_02048838(Unk_02048758_Slot (*s)[2]) {
    s32 x, y;
    for (y = 0; y < 2; y++) {
        for (x = 0; x < 2; x++) {
            func_02048904(&s[x][y]);
        }
    }
}

extern "C" void func_02048874(Unk_02048758_Slot (*s)[2], u16 id, s32 x, s32 y, s32 i, s32 j) {
    s32 px, py;
    func_0204edf8(&px, &py, x, y, i, j);
    func_0204897c(&s[(i >> 3) & 1][(j >> 3) & 1], id, px, py);
}

extern "C" void func_020488c0(Unk_02048758_Slot (*s)[2], Unk_020480a8_Cell *c) {
    s32 x, y;
    for (y = 0; y < 2; y++) {
        for (x = 0; x < 2; x++) {
            func_020489ac(&s[x][y], c, x, y);
        }
    }
}

extern "C" void func_02048904(Unk_02048758_Slot *s) {
    if (s->kind >= 7) {
        s32 n = s->kind - 6;
        if (n > s->count) n = s->count;
        void *o = func_0204da0c();
        s32 cnt = s->count;
        s32 m1 = -1;
        for (; n != 0; n--) {
            s32 c = func_02063b8c(s->count);
            s32 j;
            for (j = 0; j < cnt; j++) {
                if (s->pos[j].x >= 0) {
                    c--;
                    if (c < 0) {
                        func_02049790(o, s->id[j], s->pos[j].x, s->pos[j].y);
                        s->pos[j].x = m1;
                        s->pos[j].y = m1;
                        s->count--;
                        break;
                    }
                }
            }
        }
    }
}

extern "C" void func_0204897c(Unk_02048758_Slot *s, u16 id, s32 x, s32 y) {
    s->id[s->count] = id;
    s->pos[s->count].x = x;
    s->pos[s->count].y = y;
    s->count++;
}

extern "C" void func_020489ac(Unk_02048758_Slot *s, Unk_020480a8_Cell *c, s32 i, s32 j) {
    s32 k;
    s->kind = c->b[i][j];
    s->count = 0;
    for (k = 0; k < 64; k++) {
        s->pos[k].x = -1;
        s->pos[k].y = -1;
    }
}
