#include "types.h"

struct Unk_02042588_Pos {
    s32 x, y;
    Unk_02042588_Pos(s32 a, s32 b) : x(a), y(b) {}
    Unk_02042588_Pos(const Unk_02042588_Pos &o) : x(o.x), y(o.y) {}
};
typedef Unk_02042588_Pos Pos;

struct Unk_02042d10_Vec {
    s32 x, y, z;
    Unk_02042d10_Vec(const Unk_02042d10_Vec &o) : x(o.x), y(o.y), z(o.z) {}
};

struct Unk_02042d10_Entry {
    s32 f00;
    s32 f04;
    s32 f08;
    s32 f0c;
    u16 f10;
    u16 f12;
    Unk_02042588_Pos pos;
    u8 f1c;
    u8 f1d;
    u8 f1e;
    u8 pad_1f;
    s32 f20;
};

struct Unk_02042d10_Obj {
    u8 pad[0x64];
    s32 f64;
};

extern Unk_02042d10_Entry data_021c4350[];
extern void *data_021c47c4;
extern Unk_02042d10_Obj *data_020cbb18;
extern u16 data_020c91f4[];

static inline BOOL Unk_0204301c_Rng(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) {
        r = TRUE;
    }
    return r;
}

extern "C" {
s32 func_02042588(void *tbl, s32 a, s32 b, Pos p, u16 c, u16 d, u8 e, u8 f, s32 g, s8 h);
s32 func_02043ec0(s32 a);
s32 func_02043e94(s32 a);
u16 *func_020451c4(s32 a);
s32 func_020429d0(s32 a, s32 *pos, void *out);
void func_02043c28(u16 *a, u16 *b, s32 c);
s32 func_02072e44(void *o);
void *func_0204ebd8(void *m, s32 a, s32 b, s32 c, s32 d, s32 e);
u8 *func_02095204(s32 a);
s32 func_0204b08c(u16 *p);
s32 func_0204ad08(u16 *p);
void func_ov003_022197e8(s32 a, u16 b, Pos p, Unk_02042d10_Vec v);
void func_ov003_02219ae0(s32 a, u16 b, Pos p);
void func_02045570(Pos p, u8 a);
s32 func_020b5184();
void *func_0204da0c();
s32 func_0204e88c(void *o, s32 x, s32 y);
s32 func_0204e3a0(void *o, s32 x, s32 y);
s32 func_020439f8(s32 a, void *m, Pos p, s32 d);
s32 func_020437d0(s32 a, void *m, Pos p, s32 d);
s32 func_02043540(s32 a, void *o, void *m, Pos p, u16 e, s32 d);
s32 func_020434f0(s32 a, void *m, Pos p, s32 d);
s32 func_0204341c(s32 a, Pos *p, s32 sel, s32 c, u16 e);
s32 func_02043344(s32 a, Pos *p, s32 c);
s32 func_020431a8(s32 a, Pos *p);
s32 func_020430d8(s32 a, Pos *p);
s32 func_0204301c(s32 a, Pos *p, s32 c);
s32 func_02042c64(s32 a, u16 b);
s32 func_02042c9c(s32 a, s32 b, u16 c);
}

extern "C" s32 func_02042bbc(s32 a, u16 b) {
    return func_02042c64(func_02043ec0(a), b);
}

extern "C" s32 func_02042bd0(s32 a, u16 b) {
    if (!func_02043e94(a)) {
        return -1;
    }
    return func_02042c9c(a, func_020451c4(a) ? 0x12 : 0x10, b);
}

extern "C" s32 func_02042c08(s32 a, u16 b) {
    s32 r = -1;
    if (!func_02043e94(a)) {
        return -1;
    }
    u16 *p = func_020451c4(a);
    if (p) {
        u16 v = *p;
        r = func_02042588(data_021c4350, a, 0x11, Pos(v >> 8, v & 0xff), b, b, 0, 0, 0, -1);
    }
    return r;
}

extern "C" s32 func_02042c64(s32 a, u16 b) {
    volatile u16 id = 0xfff1;
    id = b;
    BOOL in = FALSE;
    u16 v1 = id;
    u16 v2 = id;
    if (v2 >= 0xa7 && v1 <= 0xc6) {
        in = TRUE;
    }
    return func_02042c9c(a, in ? 0x1a : 0x10, b);
}

struct Unk_02042c9c_Loc {
    u8 f0;
    u8 pad;
    u16 f2;
    u16 f4;
};

extern "C" s32 func_02042c9c(s32 a, s32 b, u16 c) {
    Unk_02042c9c_Loc l;
    s32 pos[2];
    pos[0] = 0;
    pos[1] = 0;
    s32 r = -1;
    if (func_020429d0(b, pos, &l)) {
        if (b == 0x18) {
            func_02043c28(&l.f2, &l.f4, c);
        } else {
            l.f2 = c;
            l.f4 = c;
        }
        r = func_02042588(data_021c4350, a, b, Pos(pos[0], pos[1]), l.f2, l.f4, 0, l.f0, 0, -1);
    }
    return r;
}

extern "C" s32 func_02042d10(s32 idx) {
    void *map = data_021c47c4;
    s32 r = 0;
    Unk_02042d10_Entry *e = &data_021c4350[idx];
    Unk_02042d10_Obj *obj;
    if (e->f08 == 0 || e->f0c == 0 ||
        (obj = data_020cbb18, func_02072e44(obj) != 0 && e->f00 != obj->f64)) {
        return 2;
    }
    if (map == NULL) {
        return 0;
    }
    s32 x = e->pos.x;
    s32 y = e->pos.y;
    s32 xh = x >> 4;
    s32 yh = y >> 4;
    u16 *m = (u16 *)func_0204ebd8(map, xh, yh, x - (xh << 4), y - (yh << 4), 0);
    if (m == NULL) {
        return 0;
    }
    switch (e->f08) {
    case 2:
        switch (e->f0c) {
        case 0x13: {
            if (e->f10 != 0xfff1) {
                u8 *o = func_02095204(4);
                if (o) {
                    u16 v = e->f12;
                    Unk_02042d10_Vec *q = (Unk_02042d10_Vec *)(o + 0x5c);
                    volatile u16 id = 0xfff1;
                    id = e->f10;
                    if (func_0204b08c((u16 *)&id)) {
                        BOOL in = FALSE;
                        u16 v1 = id;
                        u16 v2 = id;
                        if (v2 >= 0x2f && v1 <= 0x56) {
                            in = TRUE;
                        }
                        if (in) {
                            v = data_020c91f4[func_0204ad08((u16 *)&id)];
                        } else if (e->f10 == 0xc8) {
                            v = 0x1548;
                        }
                    }
                    func_ov003_022197e8(e->f00, v, e->pos, *q);
                }
            }
            r = 1;
            break;
        }
        case 3:
        case 0x15:
            if (*m == 0xfff1) {
                u8 f = e->f1c;
                func_02045570(e->pos, f);
                r = 2;
            } else {
                r = 1;
            }
            break;
        case 0x18:
        case 0x1a:
            if (func_02072e44(obj) == 0) {
                func_ov003_02219ae0(e->f00, e->f10, e->pos);
            }
            r = 1;
            break;
        default:
            r = 1;
            break;
        }
        break;
    case 3:
        r = 2;
        break;
    }
    return r;
}

extern "C" s32 func_02042e98(s8 a, Pos *p) {
    if (!func_020b5184()) {
        return -1;
    }
    void *o = func_0204da0c();
    s32 r = -1;
    if (o) {
        s32 x = p->x;
        s32 y = p->y;
        s32 xh = x >> 4;
        s32 yh = y >> 4;
        u16 *m = (u16 *)func_0204ebd8(o, xh, yh, x - (xh << 4), y - (yh << 4), 0);
        if (m && *m == 0x1566 && func_0204e88c(o, p->x, p->y)) {
            u16 t = 0xfd;
            if (!func_0204e3a0(o, p->x, p->y)) {
                t = 0xfc;
            }
            r = func_02042588(data_021c4350, 0, 0x19, Pos(*p), t, 0xfff1, 0, 0, 0, a);
        }
    }
    return r;
}

extern "C" s32 func_02042f44(s32 a, Pos *p) {
    if (!func_020b5184()) {
        return -1;
    }
    void *o = func_0204da0c();
    s32 r = -1;
    if (o) {
        s32 x = p->x;
        s32 y = p->y;
        s32 xh = x >> 4;
        s32 yh = y >> 4;
        u16 *m = (u16 *)func_0204ebd8(o, xh, yh, x - (xh << 4), y - (yh << 4), 0);
        if (m && *m == 0x1566 && func_0204e88c(o, p->x, p->y)) {
            u16 t = 0xfd;
            s32 q = func_02043ec0(a);
            if (!func_0204e3a0(o, p->x, p->y)) {
                t = 0xfc;
            }
            r = func_02042588(data_021c4350, q, 0x19, Pos(*p), t, 0xfff1, 0, 0, 0, -1);
        }
    }
    return r;
}

extern "C" s32 func_02042ff8(s32 a, Pos *p, s32 c) {
    s32 t = func_02043ec0(a);
    Pos q(*p);
    return func_0204301c(t, &q, c);
}

extern "C" s32 func_0204301c(s32 a, Pos *p, s32 c) {
    void *map = data_021c47c4;
    s32 r = -1;
    if (map) {
        s32 x = p->x;
        s32 y = p->y;
        s32 xh = x >> 4;
        s32 yh = y >> 4;
        u16 *m = (u16 *)func_0204ebd8(map, xh, yh, x - (xh << 4), y - (yh << 4), 0);
        if (m) {
            s32 v = 0;
            u16 id = 0xfff1;
            BOOL in = Unk_0204301c_Rng(m, 0xfc, 0xfd);
            if (in && c != 2) {
                v = 0x14;
                id = 0xfff1;
            }
            if (v) {
                r = func_02042588(data_021c4350, a, v, Pos(*p), id, id, 1, 0, 0, -1);
            }
        }
    }
    return r;
}

extern "C" s32 func_020430b4(s32 a, Pos *p, s32 c) {
    s32 t = func_02043ec0(a);
    Pos q(*p);
    return func_02043344(t, &q, c);
}

extern "C" s32 func_020430d8(s32 a, Pos *p) {
    void *map = data_021c47c4;
    s32 z = 0;
    s32 r = -1;
    if (map) {
        s32 x = p->x;
        s32 y = p->y;
        s32 xh = x >> 4;
        s32 yh = y >> 4;
        u16 *m = (u16 *)func_0204ebd8(map, xh, yh, x - (xh << 4), y - (yh << 4), z);
        if (m) {
            s32 z2 = z;
            s32 w = z2;
            u16 c = *m;
            u16 s20;
            u8 s24;
            if (((c & 0xf000) >> 12) == 1) {
                w = 3;
                s20 = c;
                s24 = z2;
            } else {
                s32 x2 = p->x;
                s32 y2 = p->y;
                s32 xh2 = x2 >> 4;
                s32 yh2 = y2 >> 4;
                u16 *m2 = (u16 *)func_0204ebd8(map, xh2, yh2, x2 - (xh2 << 4), y2 - (yh2 << 4), 1);
                if (m2) {
                    u16 c2 = *m2;
                    if (((c2 & 0xf000) >> 12) == 1) {
                        w = 3;
                        s20 = c2;
                        s24 = 1;
                    }
                }
            }
            if (w) {
                r = func_02042588(data_021c4350, a, w, Pos(*p), 0xfff1, s20, 0, s24, 0, -1);
            }
        }
    }
    return r;
}

extern "C" s32 func_020431a8(s32 a, Pos *p) {
    volatile s32 r;
    volatile s32 t0;
    void *volatile map = data_021c47c4;
    volatile s32 t1;
    s32 z = 0;
    r = ~z;
    if (map) {
        s32 x = p->x;
        s32 y = p->y;
        s32 xh = x >> 4;
        s32 yh = y >> 4;
        u16 *m = (u16 *)func_0204ebd8(map, xh, yh, x - (xh << 4), y - (yh << 4), z);
        if (m) {
            u16 c = *m;
            s32 v = 0;
            if (c == 0xfff1) {
                r = ~v;
            } else {
                if ((c >= 0x21 && c <= 0x24) || c == 0x1f) {
                    v = 5;
                } else {
                    goto other;
                }
            }
            goto done;
        other:
            if (((c & 0xf000) >> 12) == 1) {
                if (!func_0204e88c(map, p->x, p->y)) {
                    goto v3;
                }
            }
            {
                s32 t3 = 1;
                s32 t2 = t3;
                t1 = 1;
                t0 = 0;
                u16 c2 = *m;
                if (c2 <= 5) {
                    t0 = 1;
                }
                if (t0 == 0) {
                    if (c2 < 6 || c2 > 0xb) {
                        t1 = 0;
                    }
                }
                if (t1 == 0) {
                    if (c2 < 0xc || c2 > 0x11) {
                        t2 = 0;
                    }
                }
                if (t2 == 0) {
                    if ((c2 < 0x12 || c2 > 0x19) && c2 != 0x1c) {
                        t3 = 0;
                    }
                }
                if (t3 != 0 || c == 0x1a || c == 0x1d || c == 0x1e) {
                    goto v3;
                }
                switch ((c2 & 0xf000) >> 12) {
                case 3:
                case 4:
                    if (!func_0204e88c(map, p->x, p->y)) {
                        goto v3;
                    }
                }
                BOOL in = FALSE;
                c2 = *m;
                if (c2 >= 0xa7 && c2 <= 0xc6) {
                    in = TRUE;
                }
                if (in) {
                v3:
                    v = 3;
                } else if ((c2 >= 0x6e && c2 <= 0x73) || (c2 >= 0x74 && c2 <= 0x79) || (c2 >= 0x7a && c2 <= 0x7f) ||
                    (c2 >= 0x80 && c2 <= 0x87) || (c2 >= 0x8a && c2 <= 0x8f) || (c2 >= 0x90 && c2 <= 0x95) ||
                    (c2 >= 0x96 && c2 <= 0x9b) || (c2 >= 0x9c && c2 <= 0xa3) || c2 == 0xa5 || c == 0x88 || c == 0xa4) {
                    v = 5;
                } else if (c == 0x20) {
                    v = 0x15;
                }
                goto done;
            }
        done:
            if (v) {
                r = func_02042588(data_021c4350, a, v, Pos(*p), 0xfff1, c, 0, 0, 0, -1);
            }
        }
    }
    return r;
}

extern "C" s32 func_02043344(s32 a, Pos *p, s32 c) {
    if (func_020b5184()) {
        Pos q(*p);
        return func_020431a8(a, &q);
    }
    Pos q(*p);
    return func_020430d8(a, &q);
}

extern "C" s32 func_02043380(s32 a, s32 b, s32 c, u16 d);

extern "C" s32 func_0204339c(s32 a, s32 b, s32 c, u16 d);

extern "C" s32 func_02043380(s32 a, s32 b, s32 c, u16 d) {
    return func_0204339c(func_02043ec0(a), b, c, d);
}

extern "C" s32 func_0204339c(s32 a, s32 b, s32 c, u16 d) {
    s32 r = -1;
    if (!func_02043e94(a)) {
        return -1;
    }
    u16 *p = func_020451c4(a);
    if (p) {
        u16 v = *p;
        Pos q(v >> 8, v & 0xff);
        r = func_0204341c(a, &q, b, c, d);
    }
    return r;
}

extern "C" s32 func_020433ec(s32 a, Pos *p, s32 c, s32 d, u16 e) {
    s32 t = func_02043ec0(a);
    Pos q(*p);
    return func_0204341c(t, &q, c, d, e);
}

extern "C" s32 func_0204341c(s32 a, Pos *p, s32 sel, s32 d, u16 e) {
    void *o = func_0204da0c();
    s32 r = -1;
    if (o) {
        s32 x = p->x;
        s32 y = p->y;
        s32 xh = x >> 4;
        s32 yh = y >> 4;
        void *m = func_0204ebd8(o, xh, yh, x - (xh << 4), y - (yh << 4), 0);
        if (m) {
            switch (sel) {
            case 0:
                r = func_020439f8(a, m, Pos(*p), d);
                break;
            case 1:
                r = func_020437d0(a, m, Pos(*p), d);
                break;
            case 2:
                r = func_02043540(a, o, m, Pos(*p), e, d);
                break;
            case 3:
                break;
            case 4:
                r = func_020434f0(a, m, Pos(*p), d);
                break;
            }
        }
    }
    return r;
}
