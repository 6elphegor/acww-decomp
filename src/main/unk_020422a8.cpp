#include "types.h"

struct Unk_020422c0_Pos { s32 x, y; };

struct Unk_020422c0_Map {
    u8 pad[0x6c];
    u8 cells[0x400];
};

struct Unk_02042564_Obj {
    u8 y;
    u8 x;
    s16 unk_02;
    s16 unk_04;
};

struct Unk_02042578_Entry {
    u32 unk_00;
    u32 unk_04;
    s32 unk_08;
    s32 unk_0c;
    u16 unk_10;
    u16 unk_12;
    Unk_020422c0_Pos unk_14;
    u8 unk_1c;
    u8 unk_1d;
    s8 unk_1e;
    u8 pad_1f;
    s32 unk_20;
};

struct Unk_02042350_Obj {
    Unk_02042578_Entry e[3];
    u8 pad[0x46c - 0x6c];
    Unk_02042564_Obj o;
};

static inline BOOL Unk_02042660_InRange(u32 c, u32 lo, u32 hi) { BOOL r = FALSE; if (c >= lo && c <= hi) r = TRUE; return r; }
struct Unk_02042830_V3 { s32 x, y, z; };
inline BOOL Unk_02042830_IsZero(u8 v) { return v == 0 ? TRUE : FALSE; }
extern void *data_021c47c4;
extern u8 data_020e416c;
extern u8 data_020c91c4[];
extern Unk_02042578_Entry data_020ca1c8[];
extern u8 data_021c43bc[];
extern s8 data_020c9114[], data_020c911c[];
extern u8 data_020c96cc[];
extern u8 data_020c9164[];
extern Unk_02042578_Entry data_021c4350[];
extern void *data_020cbb18;
extern u8 data_021c3ea4[];

extern "C" {
void *func_02115fb4(void *, s32, s32);
u16 *func_0204ebd8(void *m, s32 a, s32 b, s32 c, s32 d, s32 e);
s32 func_0204e474(void *m, s32 x, s32 y);
void func_0204568c(s32, void *, u32, u32, s32, s32, s32, s32, s32, s32);
void *func_0204da0c(void);
s32 func_0205b4f8(void);
void func_020424cc(Unk_02042564_Obj *);
s32 func_02072e44(void *);
s32 func_02045354(void *, s32);
s32 func_02133150(s32, s32);
void func_02049928(s32, s32, u32, s32);
s32 func_020991e4(void);
s32 func_02098ffc(void);
s32 func_020b50e8(void);
u32 func_020a6018(s32);
void func_02044dd8(u8, u32);
void func_02047714(void *, void *);
s32 func_02043ec0(void *);
s32 func_02042c08(s32, void *);
s32 func_02063ba4(s32);
void func_0204ee10(void *, void *, void *);
s32 func_020453e8(void *, s32);
s32 func_0204512c(void *, s32);
s32 func_020b5184(void);
s32 func_020513b0(s32, s32);
s32 func_02030f10(s32, s32, s32, s32, s32);
s32 func_0204e378(void *, s32, s32);
u16 *func_02042aec(u32, void *, s32, s32, Unk_020422c0_Pos *);
BOOL func_ov003_02219ae0(u32, u32, Unk_020422c0_Pos *);
BOOL func_ov003_02219ccc(u32, u32, Unk_020422c0_Pos *, Unk_02042830_V3 *);
BOOL func_ov004_0222bf80(u32, u32, Unk_020422c0_Pos *, Unk_02042830_V3 *, u32);
void *func_02095204(u32);
u32 func_02043e70(void *);
u16 func_02046ba8(void *, void *, s32);
void func_0205f094(s32, s32, s32, u32, s32);
void func_0204ed8c(void *, s32, s32);
s32 func_0207878c(void *);
void func_02042578(Unk_02042578_Entry *, s32);
void func_02042570(Unk_02042564_Obj *);
void func_02042564(Unk_02042564_Obj *);

void func_020422a8(void) {
    func_02115fb4(data_021c43bc, 0, 0x400);
}

void func_020422c0(Unk_020422c0_Map *m, Unk_020422c0_Pos *p, u32 v) {
    s32 idx = ((p->x - 0x10) >> 2) + ((p->y - 0x10) << 4);
    s32 sh = (p->x & 3) << 1;
    if (idx < 0 || idx >= 0x400) {
        idx = 0;
        sh = idx;
    }
    m->cells[idx] = (v << sh) | (m->cells[idx] & ~(3 << sh));
}

s32 func_02042304(Unk_020422c0_Map *m, Unk_020422c0_Pos *p) {
    s32 idx = ((p->x - 0x10) >> 2) + ((p->y - 0x10) << 4);
    s32 sh = (p->x & 3) << 1;
    if (idx < 0 || idx >= 0x400) {
        idx = 0;
        sh = idx;
    }
    return (m->cells[idx] >> sh) & 3;
}

void func_02042340(u8 *p) {
    func_020424cc((Unk_02042564_Obj *)(p + 0x46c));
}

void func_02042350(u8 *p) {
    s32 i;
    for (i = 0; i < 3; i++) {
        func_02042578((Unk_02042578_Entry *)p, i);
    }
    func_02042570((Unk_02042564_Obj *)(p + 0x46c));
}

BOOL func_0204237c(Unk_02042564_Obj *self, void *m, Unk_020422c0_Pos *p) {
    BOOL r = FALSE;
    s32 x = p->x, y = p->y;
    s32 hx = x >> 4, hy = y >> 4;
    u16 *t = func_0204ebd8(m, hx, hy, x - (hx << 4), y - (hy << 4), 0);
    if (t != NULL && *t == 0xfff1) {
        if (func_0204e474(m, p->x, p->y) != 0) {
            Unk_020422c0_Pos q;
            s32 qy = p->y;
            q.x = p->x;
            q.y = qy;
            func_0204568c(0, &q, ((u16 *)data_020c96cc)[self->unk_02], 0xfff1, 0, 0, 0, 3, 0, -1);
            r = TRUE;
        }
    }
    return r;
}

struct Unk_020423fc_Sz { s32 w, h; };
struct Unk_020423fc_Map { s32 unk_00; Unk_020423fc_Sz sz; };

void func_020423fc(Unk_02042564_Obj *self, Unk_020422c0_Pos *p) {
    Unk_020423fc_Map *m = (Unk_020423fc_Map *)func_0204da0c();
    if (m != NULL) {
        Unk_020423fc_Sz *sz = &m->sz;
        s32 w = sz->w << 4;
        s32 h = sz->h << 4;
        u8 *d = data_020c9164;
        s32 i;
        for (i = 0; i < 8; d++, i++) {
            u8 b = *d;
            s32 nx = p->x - ((b >> 4) - 8);
            s32 ny = p->y - ((b & 0xf) - 8);
            if (nx >= 0 && nx < w && ny >= 0 && ny < h) {
                if (nx == p->x && ny == p->y) {
                    continue;
                }
                Unk_020422c0_Pos q;
                q.x = nx;
                q.y = ny;
                if (func_0204237c(self, m, &q)) {
                    break;
                }
            }
        }
    }
}

void func_02042478(Unk_02042564_Obj *self, Unk_020422c0_Pos *p) {
    Unk_020422c0_Pos q;
    if (self->unk_04 < 0) {
        s32 py = p->y;
        self->x = p->x;
        self->y = py;
        self->unk_04 = ((func_0205b4f8() * 0x3c0) >> 12) + 150;
    }
    self->unk_02 = self->unk_02 + 1;
    if (self->unk_02 >= 8) {
        self->unk_02 = 8;
    }
    q.x = p->x;
    q.y = p->y;
    func_020423fc(self, &q);
}

void func_020424cc(Unk_02042564_Obj *self) {
    if (func_02072e44(data_020cbb18) == 0) {
        if (self->unk_04 > 0) {
            self->unk_04--;
        }
        if (self->unk_04 == 0) {
            u16 v = *(u16 *)self;
            s32 x = v >> 8;
            s32 y = v & 0xff;
            Unk_020422c0_Pos q;
            q.x = x;
            q.y = y;
            if (func_02045354(&q, 0) < 0) {
                u32 t = 0xe3;
                void *m = func_0204da0c();
                self->unk_04 = -1;
                if (m != NULL) {
                    s32 hx = x >> 4, hy = y >> 4;
                    u16 *tile = func_0204ebd8(m, hx, hy, x - (hx << 4), y - (hy << 4), 0);
                    if (tile != NULL) {
                        t = (u16)((*tile - 0xe8) % 5 + 0xe3);
                    }
                }
                u16 w = *(u16 *)self;
                func_02049928(w >> 8, w & 0xff, t, 0);
            }
        }
    }
}

void func_02042564(Unk_02042564_Obj *self) {
    self->unk_02 = 0;
    self->unk_04 = -1;
}

void func_02042570(Unk_02042564_Obj *self) {
    func_02042564(self);
}

void func_02042578(Unk_02042578_Entry *e, s32 i) {
    Unk_02042578_Entry *q = &e[i];
    q->unk_08 = 0;
    q->unk_0c = 0;
}

s32 func_02042588(Unk_02042578_Entry *e, u32 a1, s32 type, Unk_020422c0_Pos *pos, u16 a5, u16 a6, u8 a7, u8 a8, s32 a9, s8 a10) {
    s32 i, res = -1;
    for (i = 0; i < 3; e++, i++) {
        if (e->unk_08 == 0 && e->unk_0c == 0) {
            if (type == 3 || type == 9 || type == 0x15) {
                if (a6 == 0x1520) {
                    if (func_020991e4() == 0) {
                        type++;
                    }
                } else if (func_02098ffc() < 0) {
                    type++;
                }
            }
            e->unk_00 = a1;
            e->unk_04 = func_020a6018(func_020b50e8());
            e->unk_08 = 1;
            e->unk_0c = type;
            e->unk_10 = a5;
            e->unk_12 = a6;
            s32 py = pos->y;
            e->unk_14.x = pos->x;
            e->unk_14.y = py;
            e->unk_1c = a8;
            e->unk_1d = a7;
            e->unk_20 = a9;
            e->unk_1e = a10;
            func_02044dd8(i, a9);
            res = i;
            break;
        }
    }
    return res;
}

Unk_02042578_Entry *func_0204262c(s32 i) {
    return &data_021c4350[i];
}

void func_0204263c(s32 *p) {
    s32 q[3];
    q[0] = p[0];
    q[1] = p[1];
    q[2] = p[2];
    func_02047714(data_021c3ea4, q);
}

void func_02042820(s32 i) {
    func_02042578(data_021c4350, i);
}

void func_02042660(void *self, Unk_020422c0_Pos *p) {
    s32 flag, found, i;
    void *m, *o;
    u16 *t;
    s32 y, x;
    s32 r;
    Unk_020422c0_Pos q;
    s8 *dx, *dy;
    m = func_0204da0c();
    o = func_02095204(4);
    if (m == NULL || o == NULL) {
        return;
    }
    flag = 0;
    found = 0;
    if (func_02043e70(self) == 0x1379) {
        flag = 1;
    }
    dx = data_020c9114;
    dy = data_020c911c;
    for (i = 0; i < 5; dx++, dy++, i++) {
        x = p->x + *dx;
        y = p->y + *dy;
        q.x = x;
        q.y = y;
        if (func_02045354(&q, 0) < 0) {
            s32 hx = x >> 4, hy = y >> 4;
            t = func_0204ebd8(m, hx, hy, x - (hx << 4), y - (hy << 4), 0);
            if (t != NULL) {
                r = func_02046ba8(data_021c3ea4, t, flag);
                if (r != 0xfff1) {
                    found = 1;
                    func_0205f094((s8)x, (s8)y, func_020b50e8(), r, 0);
                }
                {
                    u32 v = *t;
                    BOOL s4 = 1, s3 = 1, s2 = 1, s1 = 0;
                    if (v <= 5) {
                        s1 = 1;
                    }
                    if (!s1) {
                        if (!Unk_02042660_InRange(v, 6, 0xb)) {
                            s2 = 0;
                        }
                    }
                    if (!s2) {
                        if (!Unk_02042660_InRange(v, 0xc, 0x11)) {
                            s3 = 0;
                        }
                    }
                    if (!s3) {
                        if (!Unk_02042660_InRange(v, 0x12, 0x19) && v != 0x1c) {
                            s4 = 0;
                        }
                    }
                    if (s4 || Unk_02042660_InRange(v, 0x8a, 0x8f) || Unk_02042660_InRange(v, 0x90, 0x95) ||
                        Unk_02042660_InRange(v, 0x96, 0x9b) || Unk_02042660_InRange(v, 0x9c, 0xa3) || v == 0xa5 ||
                        Unk_02042660_InRange(v, 0x6e, 0x73) || Unk_02042660_InRange(v, 0x74, 0x79) ||
                        Unk_02042660_InRange(v, 0x7a, 0x7f) || Unk_02042660_InRange(v, 0x80, 0x87) || v == 0x1a ||
                        v == 0x88 || v == 0xa4 || (u16)(v + 0xffe3) <= 1) {
                        found = 1;
                    }
                }
            }
        }
    }
    if (found != 0) {
        if (func_02072e44(data_020cbb18) == 0) {
            u8 buf[12];
            func_0204ed8c(buf, p->x, p->y);
            func_0207878c(buf);
        }
    }
}

s32 func_02042830(s32 idx) {
    void *w = data_021c47c4;
    s32 res = 0;
    Unk_02042578_Entry *e = &data_021c4350[idx];
    if (w == NULL) {
        return 0;
    }
    switch (e->unk_08) {
    case 2: {
        u8 *o = (u8 *)func_02095204(4);
        if (w != NULL && o != NULL) {
            Unk_02042830_V3 *pv = (Unk_02042830_V3 *)(o + 0x5c);
            if (Unk_02042830_IsZero(data_020e416c)) {
                volatile u16 tmp;
                tmp = 0xfff1;
                tmp = e->unk_10;
                BOOL s8 = 1, s7 = 1, s6 = 1, s5 = 1, s4 = 1, s3 = 1, s2 = 1, s1 = 0;
                u32 v = tmp;
                if (tmp <= 5) {
                    s1 = 1;
                }
                if (!s1) {
                    if (!Unk_02042660_InRange(v, 6, 0xb)) {
                        s2 = 0;
                    }
                }
                if (!s2) {
                    if (!Unk_02042660_InRange(v, 0xc, 0x11)) {
                        s3 = 0;
                    }
                }
                if (!s3) {
                    if (!Unk_02042660_InRange(v, 0x12, 0x19) && v != 0x1c) {
                        s4 = 0;
                    }
                }
                if (!s4) {
                    if (!Unk_02042660_InRange(v, 0x8a, 0x8f) && !Unk_02042660_InRange(v, 0x90, 0x95) &&
                        !Unk_02042660_InRange(v, 0x96, 0x9b) && !Unk_02042660_InRange(v, 0x9c, 0xa3) && v != 0xa5) {
                        s5 = 0;
                    }
                }
                if (!s5) {
                    if (v != 0x1a) {
                        s6 = 0;
                    }
                }
                if (!s6) {
                    if (v != 0xa4) {
                        s7 = 0;
                    }
                }
                if (!s7 && v != 0x1d) {
                    s8 = 0;
                }
                if (s8 || Unk_02042660_InRange(v, 0xa7, 0xc6) || v == 0x1e) {
                    Unk_020422c0_Pos q;
                    q.x = e->unk_14.x;
                    q.y = e->unk_14.y;
                    if (func_ov003_02219ae0(e->unk_00, e->unk_10, &q)) {
                        res = 1;
                    }
                } else {
                    Unk_02042830_V3 a;
                    a.x = pv->x;
                    a.y = pv->y;
                    a.z = pv->z;
                    Unk_020422c0_Pos q;
                    q.x = e->unk_14.x;
                    q.y = e->unk_14.y;
                    if (func_ov003_02219ccc(e->unk_00, e->unk_10, &q, &a)) {
                        res = 1;
                    }
                }
            } else {
                Unk_02042830_V3 a;
                a.x = pv->x;
                a.y = pv->y;
                a.z = pv->z;
                u32 b = e->unk_1c;
                Unk_020422c0_Pos q;
                q.x = e->unk_14.x;
                q.y = e->unk_14.y;
                if (func_ov004_0222bf80(e->unk_00, e->unk_10, &q, &a, b)) {
                    res = 1;
                }
            }
        }
        break;
    }
    case 3:
        res = 2;
        break;
    }
    return res;
}

u16 *func_02042aec(u32 a, void *m, s32 x, s32 y, Unk_020422c0_Pos *p) {
    s32 hx = x >> 4;
    s32 hy = y >> 4;
    u16 *t = func_0204ebd8(m, hx, hy, x - (hx << 4), y - (hy << 4), 0);
    if (t != NULL) {
        if (*t != 0xfff1) {
            t = NULL;
        } else {
            switch (a) {
            case 0x10:
            case 0x11:
            case 0x12:
                if (!func_02030f10(p->x, p->y, x, y, 0)) {
                    t = NULL;
                }
                break;
            case 0x13:
            case 0x14:
            case 0x15:
            case 0x16:
            case 0x17:
                break;
            case 0x18: {
                s32 r = func_0204e378(m, x, y);
                if (r != 0 && r != 1) {
                    t = NULL;
                }
                break;
            }
            case 0x19:
                break;
            case 0x1a:
                if (!func_02030f10(p->x, p->y, x, y, 1)) {
                    t = NULL;
                }
                break;
            }
        }
    }
    return t;
}

s32 func_020429d0(void *self, Unk_020422c0_Pos *p, u8 *out) {
    s32 res;
    s32 *ent;
    s32 i;
    u8 *w, *o, *g;
    s32 z;
    w = (u8 *)data_021c47c4;
    o = (u8 *)func_02095204(4);
    res = 0;
    if (w != NULL && o != NULL) {
        ent = (s32 *)&data_020ca1c8[func_02063ba4(*(s16 *)(o + 0x8e))];
        func_0204ee10(p, &p->y, o + 0x5c);
        i = 0;
        g = *(u8 **)&data_020cbb18;
        z = i;
        for (; i < 9; ent++, i++) {
            u8 b = data_020c91c4[*ent];
            s32 x = p->x + ((b >> 4) - 8);
            s32 y = p->y + ((b & 0xf) - 8);
            Unk_020422c0_Pos q;
            u16 *t;
            q = *p;
            t = func_02042aec((u32)self, w, x, y, &q);
            if (t != NULL && *t == 0xfff1) {
                Unk_020422c0_Pos q2;
                q2.x = x;
                q2.y = y;
                if (func_020453e8(&q2, z) < 0) {
                    Unk_020422c0_Pos q3;
                    s32 k = *(s32 *)(g + 0x68);
                    q3.x = x;
                    q3.y = y;
                    if (func_0204512c(&q3, k)) {
                        p->x = x;
                        p->y = y;
                        if (out != NULL) {
                            *out = 0;
                        }
                        res = 1;
                        break;
                    }
                }
            }
            if (func_020b5184() == 0) {
                if (func_020513b0(x, y)) {
                    p->x = x;
                    p->y = y;
                    if (out != NULL) {
                        *out = 1;
                    }
                    res = 1;
                    break;
                }
            }
        }
    }
    return res;
}

s32 func_02042ba8(void *a, void *b) {
    return func_02042c08(func_02043ec0(a), b);
}
}
