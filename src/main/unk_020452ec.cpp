#include "types.h"

union Unk_021c3f8c_Pos {
    u16 v;
    struct {
        u8 y;
        u8 x;
    } b;
};

struct Unk_021c3f8c {
    /* 0x00 */ u8 unk_00_a : 3;
    /* 0x00 */ u8 unk_00_k : 5;
    /* 0x01 */ u8 unk_01_a : 2;
    /* 0x01 */ u8 unk_01_b : 3;
    /* 0x01 */ u8 unk_01_c : 2;
    /* 0x01 */ u8 unk_01_d : 1;
    /* 0x02 */ u8 unk_02_a : 1;
    /* 0x02 */ u8 unk_02_b : 1;
    /* 0x02 */ s8 unk_02_c : 4;
    /* 0x02 */ s8 unk_02_d : 2;
    /* 0x03 */ u8 unk_03;
    /* 0x04 */ u32 unk_04;
    /* 0x08 */ Unk_021c3f8c_Pos unk_08;
    /* 0x0a */ u16 unk_0a;
    /* 0x0c */ u16 unk_0c;
    /* 0x0e */ u16 unk_0e;
};

struct Unk_020452ec_Pos {
    s32 x;
    s32 y;
};

extern Unk_021c3f8c data_021c3f8c[20];
extern u32 data_021c3f88;
extern u8 data_021c3e74[];

extern "C" {
Unk_021c3f8c *func_02045214(s32 i);
s32 func_02045270(u32 kind);
s32 func_020452b0();
s32 func_02045848(Unk_021c3f8c *e);
void func_02045894(Unk_021c3f8c *e);
void func_02045420(Unk_021c3f8c *e);
s32 func_02045904(Unk_021c3f8c *e);
s32 func_02045c18(Unk_021c3f8c *e);
void func_02045b3c(Unk_021c3f8c *e);
void func_02045af8(Unk_021c3f8c *e);
void *func_0204da0c();
u16 *func_0204ebd8(void *p, s32 xh, s32 yh, s32 xl, s32 yl, s32 z);
s32 func_020422c0(void *p, Unk_020452ec_Pos *pos, u32 v);
extern u8 data_021c4350[];
void func_020457fc(s32 idx, u8 kind, Unk_020452ec_Pos *pos, u16 a, u16 c, u8 k, u8 b, u8 c2, u8 d, u8 f, s8 g);
BOOL func_020457bc(Unk_020452ec_Pos *pos);
BOOL func_02045754(u8 kind, Unk_020452ec_Pos *pos, u16 a, u16 c, u8 k, u8 b, u8 c2, u8 d, u8 f, s8 g);
void func_ov003_0221b73c(Unk_021c3f8c_Pos *q, u32 kind, Unk_020452ec_Pos *pos);
void func_ov003_0221caf0(s32 x, s32 y, u32 a, u32 b);
void func_ov004_0222c49c(s32 x, s32 y, u32 a, u32 b);
BOOL func_020b5184();
s32 func_ov003_02219d08(u32 kind, Unk_020452ec_Pos *pos);
}

static inline s32 Unk_021c3f8c_GetX(Unk_021c3f8c_Pos p) { return p.v >> 8; }
static inline s32 Unk_021c3f8c_GetY(Unk_021c3f8c_Pos p) { return p.v & 0xff; }

static inline void Unk_0204548c_Unpack(Unk_021c3f8c_Pos px, Unk_021c3f8c_Pos py, Unk_020452ec_Pos *out) {
    out->x = Unk_021c3f8c_GetX(px);
    out->y = Unk_021c3f8c_GetY(py);
}

extern "C" s32 func_020452ec(s32 kind, Unk_020452ec_Pos *pos, s32 flag) {
    s32 result = -1;
    Unk_021c3f8c *e = data_021c3f8c;
    for (s32 i = 0; i < 20; e++, i++) {
        if (kind == e->unk_00_a && pos->x == Unk_021c3f8c_GetX(e->unk_08) && pos->y == Unk_021c3f8c_GetY(e->unk_08) && flag == e->unk_02_b) {
            result = i;
            break;
        }
    }
    return result;
}

extern "C" s32 func_02045354(Unk_020452ec_Pos *pos, s32 flag) {
    s32 result = -1;
    Unk_021c3f8c *e = data_021c3f8c;
    for (s32 i = 0; i < 20; e++, i++) {
        if (pos->x == Unk_021c3f8c_GetX(e->unk_08) && pos->y == Unk_021c3f8c_GetY(e->unk_08) && flag == e->unk_02_b) {
            result = i;
            break;
        }
    }
    return result;
}

extern "C" void func_020453ac() {
    Unk_021c3f8c *e = func_02045214(0);
    for (s32 i = 0; i < 20; e++, i++) {
        func_02045848(e);
    }
    data_021c3f88 = 0;
}

extern "C" void func_020453dc() {
    data_021c3f88 = 1;
}

extern "C" s32 func_020453e8(Unk_020452ec_Pos *pos, s32 flag) {
    Unk_020452ec_Pos t;
    t.x = pos->x;
    t.y = pos->y;
    return func_02045354(&t, flag);
}

extern "C" void func_02045400(u32 kind) {
    s32 i = func_02045270(kind);
    if (i >= 0) {
        func_02045c18(&data_021c3f8c[i]);
    }
}

extern "C" void func_02045420(Unk_021c3f8c *e) {
    Unk_021c3f8c *p = data_021c3f8c;
    for (s32 i = 0; i < 20; p++, i++) {
        if (p->unk_00_a == e->unk_00_a && p->unk_01_d != 0) {
            p->unk_01_d = 0;
        }
    }
    func_02045894(e);
}

extern "C" void func_02045460(Unk_020452ec_Pos *pos, s32 flag) {
    Unk_020452ec_Pos t;
    t.x = pos->x;
    t.y = pos->y;
    s32 i = func_02045354(&t, flag);
    if (i >= 0) {
        func_02045420(&data_021c3f8c[i]);
    }
}

extern "C" void func_0204548c(Unk_020452ec_Pos *pos, s32 flag) {
    Unk_020452ec_Pos t;
    t.x = pos->x;
    t.y = pos->y;
    s32 i = func_02045354(&t, flag);
    if (i >= 0) {
        Unk_021c3f8c *e = &data_021c3f8c[i];
        Unk_020452ec_Pos xy;
        Unk_0204548c_Unpack(e->unk_08, e->unk_08, &xy);
        if (func_ov003_02219d08(data_021c3f8c[i].unk_00_a, &xy) == 0) {
            switch (e->unk_00_k) {
            case 4:
            case 10:
            case 22:
            case 25:
                func_02045420(e);
                break;
            default:
                func_02045904(e);
                break;
            }
        }
    }
}

extern "C" void func_02045510(Unk_020452ec_Pos *pos, u32 v, s32 flag) {
    Unk_020452ec_Pos t;
    t.x = pos->x;
    t.y = pos->y;
    s32 i = func_02045354(&t, flag);
    if (i >= 0) {
        Unk_021c3f8c *e = &data_021c3f8c[i];
        if ((u8)(v & 3) == data_021c3f8c[i].unk_00_a) {
            func_02045904(e);
        }
    }
}

extern "C" void func_02045554(s32 i) {
    if (i >= 0) {
        func_02045904(&data_021c3f8c[i]);
    }
}

extern "C" void func_02045570(Unk_020452ec_Pos *pos, s32 flag) {
    Unk_020452ec_Pos t;
    t.x = pos->x;
    t.y = pos->y;
    func_02045554(func_02045354(&t, flag));
}

extern "C" s32 func_02045848(Unk_021c3f8c *e) {
    if (e->unk_08.v != 0xffff) {
        switch (e->unk_00_k) {
        case 4:
        case 10:
        case 22:
        case 25:
            func_02045c18(e);
            break;
        default:
            func_02045904(e);
            break;
        }
    }
}

extern "C" s32 func_0204588c(Unk_021c3f8c *e) {
    return func_02045c18(e);
}

extern "C" void func_02045894(Unk_021c3f8c *e) {
    switch (e->unk_00_k) {
    case 4:
    case 22:
    case 25:
        func_02045b3c(e);
        e->unk_01_d = 1;
        e->unk_02_a = 0;
        break;
    case 10:
        func_02045b3c(e);
        e->unk_01_d = 1;
        e->unk_02_a = 0;
        e->unk_0a = e->unk_0c;
        e->unk_01_a = 1;
        break;
    default:
        func_02045904(e);
        break;
    }
}

struct Unk_02045af8_Pad {
    u32 pad[2];
    Unk_02045af8_Pad() {}
    ~Unk_02045af8_Pad() {}
};

extern "C" void func_02045af8(Unk_021c3f8c *e) {
    Unk_02045af8_Pad pad;
    u16 v = e->unk_0a;
    if (v >= 0x154a && v <= 0x1553) {
        data_021c3e74[1] = 1;
    } else if (v >= 0x1320 && v <= 0x1322) {
        data_021c3e74[0] = 1;
    }
}

extern "C" void func_02045b3c(Unk_021c3f8c *e) {
    if (func_020b5184()) {
        func_ov003_0221caf0(e->unk_08.v >> 8, e->unk_08.v & 0xff, e->unk_0a, e->unk_01_a);
        func_02045af8(e);
    } else {
        func_ov004_0222c49c(e->unk_08.v >> 8, e->unk_08.v & 0xff, e->unk_0a, e->unk_02_b);
    }
}

extern "C" void func_02045b80(Unk_021c3f8c *e, u8 kind, u16 pos, u16 a, u16 c, u8 k, u8 b, u8 c2, u8 d, u8 f, s8 g) {
    e->unk_00_a = kind;
    e->unk_08.v = pos;
    e->unk_0a = a;
    e->unk_0c = c;
    e->unk_00_k = k;
    e->unk_01_a = b;
    e->unk_01_c = c2;
    e->unk_01_b = d;
    e->unk_02_b = f;
    e->unk_02_c = g;
    e->unk_02_a = 1;
}

extern "C" void func_020457fc(s32 idx, u8 kind, Unk_020452ec_Pos *pos, u16 a, u16 c, u8 k, u8 b, u8 c2, u8 d, u8 f, s8 g) {
    Unk_021c3f8c_Pos p;
    p.b.x = pos->x;
    p.b.y = pos->y;
    func_02045b80(&data_021c3f8c[idx], kind, p.v, a, c, k, b, c2, d, f, g);
}

extern "C" BOOL func_020457bc(Unk_020452ec_Pos *pos) {
    BOOL result = TRUE;
    Unk_020452ec_Pos t;
    t.x = pos->x;
    t.y = pos->y;
    s32 i = func_02045354(&t, 0);
    if (i >= 0) {
        if (func_02045214(i)->unk_00_k == 26) {
            func_02045554(i);
        } else {
            result = FALSE;
        }
    }
    return result;
}

extern "C" BOOL func_02045754(u8 kind, Unk_020452ec_Pos *pos, u16 a, u16 c, u8 k, u8 b, u8 c2, u8 d, u8 f, s8 g) {
    BOOL result = FALSE;
    Unk_020452ec_Pos t;
    t.x = pos->x;
    t.y = pos->y;
    if (func_020457bc(&t)) {
        s32 i = func_020452b0();
        if (i >= 0) {
            Unk_020452ec_Pos t2;
            t2.x = pos->x;
            t2.y = pos->y;
            func_020457fc(i, kind, &t2, a, c, k, b, c2, d, f, g);
            result = TRUE;
        }
    }
    return result;
}

extern "C" BOOL func_0204568c(u8 kind, Unk_020452ec_Pos *pos, u16 a, u16 c, u8 k, u8 b, u8 c2, u8 d, u8 f, s8 g) {
    BOOL result = FALSE;
    Unk_020452ec_Pos t;
    t.x = pos->x;
    t.y = pos->y;
    s32 i = func_02045354(&t, f);
    if (i >= 0) {
        Unk_021c3f8c *e = &data_021c3f8c[i];
        if ((kind & 3) == data_021c3f8c[i].unk_00_a && e->unk_01_d != 0) {
            Unk_020452ec_Pos t2;
            t2.x = pos->x;
            t2.y = pos->y;
            func_020457fc(i, kind, &t2, a, c, k, b, c2, d, f, g);
            result = TRUE;
        }
    } else {
        Unk_020452ec_Pos t3;
        t3.x = pos->x;
        t3.y = pos->y;
        result = func_02045754(kind, &t3, a, c, k, b, c2, d, f, g);
    }
    return result;
}

extern "C" void func_0204558c(u8 kind, Unk_020452ec_Pos *pos, u16 a, u16 c, u8 k, u8 b, u8 c2, u8 d, u8 f, s8 g) {
    Unk_020452ec_Pos t;
    t.x = pos->x;
    t.y = pos->y;
    s32 i = func_02045354(&t, f);
    if (i >= 0) {
        Unk_021c3f8c *e = &data_021c3f8c[i];
        if (e->unk_01_d == 0) {
            switch (e->unk_00_k) {
            case 1:
            case 2:
            case 6:
            case 7: {
                Unk_021c3f8c_Pos q;
                q.v = 0xfff1;
                q.v = e->unk_0c;
                Unk_020452ec_Pos t2;
                t2.x = pos->x;
                t2.y = pos->y;
                func_ov003_0221b73c(&q, e->unk_00_a, &t2);
                break;
            }
            }
            func_02045904(e);
        }
        Unk_020452ec_Pos t3;
        t3.x = pos->x;
        t3.y = pos->y;
        func_020457fc(i, kind, &t3, a, c, k, b, c2, d, f, g);
    } else {
        Unk_020452ec_Pos t4;
        t4.x = pos->x;
        t4.y = pos->y;
        func_02045754(kind, &t4, a, c, k, b, c2, d, f, g);
    }
}

extern "C" s32 func_02045904(Unk_021c3f8c *e) {
    s32 flag = 0;
    if (func_020b5184()) {
        void *p = func_0204da0c();
        if (p) {
            s32 x, y;
            y = e->unk_08.v & 0xff;
            x = e->unk_08.v >> 8;
            s32 xh = x >> 4;
            s32 yh = y >> 4;
            u16 *r = func_0204ebd8(p, xh, yh, x - (xh << 4), y - (yh << 4), 0);
            if (r) {
                switch (e->unk_00_k) {
                case 18:
                    func_02045400(e->unk_00_a);
                case 17:
                case 19:
                case 24:
                case 26: {
                    BOOL x8 = TRUE, x7 = TRUE, x6 = TRUE, x5 = TRUE, x4 = TRUE, x3 = TRUE, x2 = TRUE, x1 = FALSE;
                    u16 t = *r;
                    if (t <= 5) {
                        x1 = TRUE;
                    }
                    if (!x1) {
                        if (t < 6 || t > 11) {
                            x2 = FALSE;
                        }
                    }
                    if (!x2) {
                        if (t < 12 || t > 17) {
                            x3 = FALSE;
                        }
                    }
                    if (!x3) {
                        if ((t < 18 || t > 25) && t != 28) {
                            x4 = FALSE;
                        }
                    }
                    if (!x4) {
                        if ((t < 0x8a || t > 0x8f) && (t < 0x90 || t > 0x95) && (t < 0x96 || t > 0x9b) && (t < 0x9c || t > 0xa3) && t != 0xa5) {
                            x5 = FALSE;
                        }
                    }
                    if (!x5) {
                        if (t != 0x1a) {
                            x6 = FALSE;
                        }
                    }
                    if (!x6) {
                        if (t != 0xa4) {
                            x7 = FALSE;
                        }
                    }
                    if (!x7) {
                        if (t != 0x1d) {
                            x8 = FALSE;
                        }
                    }
                    if (!x8) {
                        if (t >= 0x26 && t <= 0x2a) break;
                        if (t >= 0x5d && t <= 0x61) break;
                        if (t >= 0x2f && t <= 0x56) break;
                        if (t >= 0x57 && t <= 0x5b) break;
                        if (t >= 0x66 && t <= 0x68) break;
                        if (t == 0x69) break;
                        if (t >= 0x6a && t <= 0x6c) break;
                        if (t == 0x6d) break;
                        if (t >= 0xc8 && t <= 0xcf) break;
                        if (e->unk_01_a != 0) {
                            flag = 1;
                        }
                    }
                    break;
                }
                case 6:
                case 7: {
                    if (e->unk_01_c != 2) {
                        u32 a = e->unk_01_a;
                        Unk_020452ec_Pos q;
                        q.x = x;
                        q.y = y;
                        func_020422c0(data_021c4350, &q, (a + 1) & 3);
                    }
                    break;
                }
                case 10:
                    flag = e->unk_01_a;
                    break;
                case 25:
                    if (e->unk_02_c >= 0) {
                        e->unk_0a = 0xfff1;
                    }
                    break;
                case 8:
                case 9:
                case 11:
                case 12:
                case 13:
                case 14:
                case 15:
                case 16:
                case 20:
                case 21:
                case 22:
                case 23:
                    break;
                }
            }
        }
    }
    e->unk_01_a = (u8)flag;
    func_02045b3c(e);
    func_02045c18(e);
}
