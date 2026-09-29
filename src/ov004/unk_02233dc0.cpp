#include "types.h"

struct Unk_ov004_Vec3 {
    s32 x, y, z;
};

struct Unk_ov004_02233f3c_P {
    s16 x, y;
    Unk_ov004_02233f3c_P(s16 a, s16 b) : x(a), y(b) {}
};

struct Unk_ov004_022341c0_Buf {
    u32 unk_00, unk_04;
};

struct Unk_ov004_02233f3c_World;

class Unk_ov004_0224882c {
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
    virtual void vfunc_64();
    virtual void vfunc_68();
    virtual void vfunc_6c();
    virtual void vfunc_70();
    virtual void vfunc_74();
    virtual void vfunc_78();
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();
    virtual void vfunc_88();
    virtual void vfunc_8c();
    virtual void vfunc_90();
    virtual void vfunc_94();
    virtual void vfunc_98(BOOL v);
    virtual void vfunc_9c(BOOL v);
    virtual BOOL vfunc_a0();

    BOOL func_ov004_022056bc(s32 idx);
    BOOL func_ov004_022057c8();
    BOOL func_ov004_022075b0();

    /* 0x04 */ u8 pad_04[0x5c - 4];
    /* 0x5c */ Unk_ov004_Vec3 unk_5c;
    /* 0x68 */ u8 pad_68[0x8e - 0x68];
    /* 0x8e */ s16 unk_8e;
    /* 0x90 */ u8 pad_90[0x14c - 0x90];
    /* 0x14c */ s32 unk_14c;
    /* 0x150 */ u8 pad_150[0x284 - 0x150];
    /* 0x284 */ u8 unk_284;
    /* 0x285 */ u8 pad_285[0x784 - 0x285];
    /* 0x784 */ s32 unk_784;
};

extern "C" {
s32 func_0209750c(void);
s32 func_0209888c(...);
s32 func_02097740(void *a, s32 b);
Unk_ov004_0224882c *func_02095204(s32 a);
s32 func_0204b2d4(u16 *p);
s32 func_0204b25c(u16 *p);
s32 func_02053248(s32 a);
s32 func_02052f44(s32 a);
s32 func_02052fc4(s32 a);
s32 func_020b52f8(void);
s32 func_0204b248(s32 a, s32 b);
void func_0204ee10(s32 *a, s32 *b, Unk_ov004_Vec3 *c);
void func_0204ed8c(Unk_ov004_Vec3 *out, s32 x, s32 z);
void func_020524a8(Unk_ov004_022341c0_Buf *b, void *cell);
u32 func_0205248c(Unk_ov004_022341c0_Buf *b);
s16 *func_0205242c(Unk_ov004_022341c0_Buf *b, u32 i);
void func_020524a4(Unk_ov004_022341c0_Buf *b);
void func_01ffca8c(void *, void *, void *);
void func_020e97c8(void *, s32);
void func_020e9960(void *out, void *a, void *b);
s32 func_020e7b98(s32 a, s32 b);
s32 func_020e780c(s32 a, s32 b);
s32 func_020e9650(void *, void *);
s32 func_01ffcb0c(s32 a, s32 b);
u16 *func_0204ebd8(Unk_ov004_02233f3c_World *w, s32 hx, s32 hy, s32 lx, s32 ly, u32 layer);
u16 *func_0204eba0(Unk_ov004_02233f3c_World *w, void *q, u32 z);
s32 func_0204b300(u16 *p);
s32 func_02031284(s32 x, s32 y);
extern Unk_ov004_02233f3c_World *data_021c47c4;
extern s16 data_02135f44[];
extern u8 data_021d735c[];

s32 func_ov004_0223576c(void *a);
void *func_ov004_0223584c();
Unk_ov004_0224882c *func_ov004_02235720(void *a, s32 b);
void *func_ov004_02235718();
Unk_ov004_0224882c *func_ov004_022355d8(void *a, s32 x, s32 y, s32 z);
s32 func_ov004_02235740(void *a, void *b);
s32 func_ov004_02207c04(s32 a);
void func_ov004_02206f3c(u16 *out, Unk_ov004_0224882c *o);
s32 func_ov004_022087a4(Unk_ov004_0224882c *o);
u32 func_ov004_02234af8();
u32 func_ov004_02209d58(u32 a, u32 b, u32 c, u32 d, u32 f, u32 e);

s32 func_ov004_02233ee0();
s32 func_ov004_02233f08(void *a, u16 *b, u32 c);
s32 func_ov004_02233f3c(void *out, u16 *tile, Unk_ov004_Vec3 *pos, s32 ang, s32 mode);
s32 func_ov004_02234320(s32 *ox, s32 *oy, Unk_ov004_Vec3 *pos, s32 ang, s32 idx);
s32 func_ov004_022344e8(s32 idx, u16 *p1, u16 *p2);
s32 func_ov004_022345c4(s32 *ox, s32 *oy, Unk_ov004_Vec3 *pos, s32 ang, u16 *p1, u16 *p2);
s32 func_ov004_02234464(Unk_ov004_0224882c *p);
}

extern Unk_ov004_Vec3 data_ov004_0225203c;
extern s8 data_ov004_022406a8[];
extern u8 data_ov004_022406a4[];
extern s32 data_ov004_022406b4[];

#define TILE_ENTRY(name, base)                                              \
    extern "C" s32 name(void *a, u32 b, u32 c) {                            \
        s32 idx = func_ov004_02233ee0();                                    \
        s32 r;                                                              \
        if (idx != -1) {                                                    \
            u32 v = b + idx * 8;                                            \
            u16 t = (v < 0x20) ? (base + v * 4) : base;                     \
            r = func_ov004_02233f08(a, &t, c);                              \
        } else {                                                            \
            r = 2;                                                          \
        }                                                                   \
        return r;                                                           \
    }

TILE_ENTRY(func_ov004_02233dc0, 0x3f24)
TILE_ENTRY(func_ov004_02233e08, 0x4224)
TILE_ENTRY(func_ov004_02233e50, 0x3ea4)
TILE_ENTRY(func_ov004_02233e98, 0x3d84)

extern "C" s32 func_ov004_02233ee0() {
    if (func_0209750c() != 0) {
        return func_02097740(data_021d735c, func_0209888c());
    }
    return -1;
}

extern "C" s32 func_ov004_02233f08(void *a, u16 *b, u32 c) {
    Unk_ov004_0224882c *o = func_02095204(4);
    if (o != 0) {
        return func_ov004_02233f3c(a, b, &o->unk_5c, o->unk_8e, c);
    }
    return 0;
}

extern "C" s32 func_ov004_02234440(s32 i) {
    if (i >= 0) {
        Unk_ov004_0224882c *o = func_ov004_02235720(func_ov004_0223584c(), i);
        if (o != 0) {
            return func_ov004_02234464(o);
        }
    }
    return 0;
}

extern "C" s32 func_ov004_02234464(Unk_ov004_0224882c *p) {
    if (p != 0) {
        if (p->vfunc_a0() != 0) {
            if (p->func_ov004_022075b0() == 0) {
                return 1;
            }
        }
    }
    return 0;
}

extern "C" void func_ov004_02234490(Unk_ov004_Vec3 *v) {
    data_ov004_0225203c.x = v->x;
    data_ov004_0225203c.y = v->y;
    data_ov004_0225203c.z = v->z;
}

extern "C" Unk_ov004_Vec3 *func_ov004_022344a4(s32 idx) {
    Unk_ov004_0224882c *o = func_ov004_02235720(func_ov004_0223584c(), idx);
    if (o == 0) {
        return &data_ov004_0225203c;
    }
    if (o->unk_14c < 0x4cd) {
        return &data_ov004_0225203c;
    }
    return 0;
}

extern "C" s32 func_ov004_022344dc(s32 idx) {
    return func_ov004_022344e8(idx, 0, 0);
}

extern "C" s32 func_ov004_022344e8(s32 idx, u16 *p1, u16 *p2) {
    if (p1 != 0) *p1 = 0xfff1;
    if (p2 != 0) *p2 = 0xfff1;
    Unk_ov004_0224882c *o = func_ov004_02235720(func_ov004_0223584c(), idx);
    if (o != 0) {
        o->func_ov004_022056bc(5);
        if (p1 != 0) {
            u16 t[2];
            func_ov004_02206f3c(t, o);
            *p1 = t[0];
        }
        if (p2 != 0) {
            *p2 = func_0204b248(func_ov004_022087a4(o), 0);
        }
        return 1;
    }
    return 0;
}

extern "C" u8 func_ov004_02234550(u32 i) {
    if (i < func_ov004_02234af8()) {
        if (func_ov004_02235720(func_ov004_0223584c(), i) != 0) {
            return func_ov004_02235720(func_ov004_0223584c(), i)->unk_284;
        }
    }
    return 0;
}

extern "C" s32 func_ov004_02234588(s32 *a, s32 *b, u16 *c, u16 *d) {
    Unk_ov004_0224882c *o = func_02095204(4);
    if (o != 0) {
        return func_ov004_022345c4(a, b, &o->unk_5c, o->unk_8e, c, d);
    }
    return -1;
}

extern "C" s32 func_ov004_02234320(s32 *ox, s32 *oy, Unk_ov004_Vec3 *pos, s32 ang, s32 idx) {
    static Unk_ov004_02233f3c_P dirs[16] = {
        Unk_ov004_02233f3c_P(0, 1),  Unk_ov004_02233f3c_P(1, 1),   Unk_ov004_02233f3c_P(1, 1),
        Unk_ov004_02233f3c_P(1, 0),  Unk_ov004_02233f3c_P(1, 0),   Unk_ov004_02233f3c_P(1, -1),
        Unk_ov004_02233f3c_P(1, -1), Unk_ov004_02233f3c_P(0, -1),  Unk_ov004_02233f3c_P(0, -1),
        Unk_ov004_02233f3c_P(-1, -1), Unk_ov004_02233f3c_P(-1, -1), Unk_ov004_02233f3c_P(-1, 0),
        Unk_ov004_02233f3c_P(-1, 0), Unk_ov004_02233f3c_P(-1, 1),  Unk_ov004_02233f3c_P(-1, 1),
        Unk_ov004_02233f3c_P(0, 1)};
    func_0204ee10(ox, oy, pos);
    if (idx == 0) {
        return 1;
    }
    if (idx < 4) {
        if (idx != 0) {
            s32 t = (ang >> 12) & 0xf;
            s32 k = (t + data_ov004_022406a8[idx]) & 0xf;
            *ox = *ox + dirs[k].x;
            *oy = *oy + dirs[k].y;
        }
        return 1;
    }
    return 0;
}

namespace Unk_ov004_02233f3c_Ns {
extern "C" s32 func_ov004_022341c0(void *out, s32 x, s32 y, s32 dir, s32 pl, u8 layer, s32 cx, s32 cy);
}

struct Unk_ov004_02233f3c_V3 {
    s32 x, y, z;
    Unk_ov004_02233f3c_V3() {}
    ~Unk_ov004_02233f3c_V3() {}
};

extern "C" s32 func_ov004_02233f3c(void *out, u16 *tile, Unk_ov004_Vec3 *pos, s32 ang, s32 mode) {
    s32 pl, kind, base;
    s32 bx, by;
    s32 layer, n;
    u32 k;
    s16 d;
    u32 e, cnt, i, m;
    s32 px, py, dr, z, q3c, r7, y3c;
    u16 s48;
    s32 c54, c58;
    Unk_ov004_022341c0_Buf buf;
    Unk_ov004_02233f3c_V3 v64, v70, v7c, v88;
    if (func_0204b2d4(tile) == 0) {
        return 0;
    }
    if (func_ov004_0223576c(func_ov004_0223584c()) == 0) {
        return 1;
    }
    if (mode == 2) {
        *(u32 *)out = func_ov004_02209d58(0, 0, func_0204b25c(tile), 0, 0, 2);
        return 3;
    }
    if (func_020b52f8() == 0) {
        return 0;
    }
    pl = func_0204b25c(tile);
    kind = func_02053248(pl);
    base = func_ov004_02207c04((s16)(ang + 0x8000));
    func_0204ee10(&bx, &by, pos);
    static Unk_ov004_02233f3c_P dirs[4] = {Unk_ov004_02233f3c_P(0, 0), Unk_ov004_02233f3c_P(-1, 0),
                                           Unk_ov004_02233f3c_P(0, -1), Unk_ov004_02233f3c_P(-1, -1)};
    n = layer = 1;
    goto testL;
loopL:
    k = 0;
    goto testK;
loopK:
    if (func_ov004_02234320(&c54, &c58, pos, ang, k) == 0) {
        goto nextK;
    }
    func_0204ed8c((Unk_ov004_Vec3 *)&v64, c54, c58);
    d = 0;
    goto testD;
loopD:
    r7 = (base + data_ov004_022406a4[d]) & 3;
    if (kind == 2) {
        cnt = 4;
    } else {
        cnt = n;
    }
    e = 0;
    goto testE;
loopE:
    px = c54 + dirs[e].x;
    py = c58 + dirs[e].y;
    if (Unk_ov004_02233f3c_Ns::func_ov004_022341c0(out, px, py, r7, pl, layer, bx, by) == 3) {
        if (kind == 1) {
            s48 = func_0204b248(pl, r7);
            dr = (s32)(r7 << 30) >> 16;
            func_020524a8(&buf, &s48);
            v70.x = 0;
            v70.y = 0;
            v70.z = 0;
            m = func_0205248c(&buf);
            i = 0;
            z = i;
            for (; i < m; i++) {
                q3c = px + *(s16 *)((u8 *)func_0205242c(&buf, i) + z);
                y3c = py + func_0205242c(&buf, i)[1];
                func_0204ed8c((Unk_ov004_Vec3 *)&v7c, q3c, y3c);
                func_01ffca8c(&v70, &v7c, &v70);
            }
            func_020e97c8(&v70, m << 12);
            func_020e9960(&v88, pos, &v70);
            if (func_020e780c(dr, func_020e7b98(v88.x, v88.z)) > 0x4000) {
                s16 *p1 = func_0205242c(&buf, 1);
                s16 *p2 = func_0205242c(&buf, 1);
                if (Unk_ov004_02233f3c_Ns::func_ov004_022341c0(out, px + p1[0], py + p2[1], (r7 + 2) & 3, pl, layer, bx, by) == 3) {
                    func_020524a4(&buf);
                    return 3;
                }
            }
            func_020524a4(&buf);
        }
        return 3;
    }
    e++;
testE:
    if (e < cnt) goto loopE;
    d = d + 1;
testD:
    if (d < 4) goto loopD;
nextK:
    k++;
testK:
    if (k < 4) goto loopK;
    layer--;
testL:
    if (layer >= 0) goto loopL;
    return 2;
}

extern "C" s32 func_ov004_022341c0(void *out, s32 x, s32 y, s32 dir, s32 pl, u32 layer, s32 cx, s32 cy) {
    s32 l18 = func_02052f44(pl);
    s32 l1c = func_02053248(pl);
    s32 l20 = func_02052fc4(pl);
    s32 z2, z;
    s32 py, px;
    u16 s34;
    Unk_ov004_022341c0_Buf b;
    s34 = func_0204b248(pl, dir);
    func_020524a8(&b, &s34);
    Unk_ov004_02233f3c_World *w = data_021c47c4;
    BOOL ok = TRUE;
    u32 i = 0;
    z2 = i;
    z = i;
    for (; i < func_0205248c(&b); i++) {
        px = x + *(s16 *)((u8 *)func_0205242c(&b, i) + z);
        py = y + func_0205242c(&b, i)[1];
        s32 hx = px >> 4;
        s32 hy = py >> 4;
        u16 *cell = func_0204ebd8(w, hx, hy, px - (hx << 4), py - (hy << 4), layer);
        if (l18 == 0 && px == cx && py == cy) {
            ok = FALSE;
            break;
        }
        if (cell == 0) {
            ok = FALSE;
            break;
        }
        if (*cell != 0xfff1) {
            ok = FALSE;
            break;
        }
        if (func_02031284(px, py) == 0) {
            ok = FALSE;
            break;
        }
        if (layer == 1) {
            if (l1c != 0) {
                ok = FALSE;
                break;
            }
            if (l20 != 2) {
                ok = FALSE;
                break;
            }
            Unk_ov004_0224882c *o = func_ov004_022355d8(func_ov004_02235718(), px, py, z2);
            if (o == 0 || (o != 0 && o->unk_784 != 1) || (o != 0 && o->func_ov004_022057c8() != 0)) {
                ok = FALSE;
                break;
            }
        }
    }
    if (ok) {
        *(u32 *)out = func_ov004_02209d58(x, y, pl, dir, layer, 1);
        func_020524a4(&b);
        return 3;
    }
    func_020524a4(&b);
    return 2;
}

extern "C" s32 func_ov004_022345c4(s32 *ox, s32 *oy, Unk_ov004_Vec3 *pos, s32 ang, u16 *p1, u16 *p2) {
    s32 i;
    Unk_ov004_02233f3c_World *w;
    s32 b24, b28;
    s32 c2c, c30;
    s32 layer;
    s32 t, idx;
    s32 hx, hy, sx, sy;
    u16 tmp;
    Unk_ov004_0224882c *o;
    u16 *cell;
    u16 *cell2;
    Unk_ov004_02233f3c_V3 v34;
    Unk_ov004_02233f3c_V3 v40;
    if (p1 != 0) *p1 = 0xfff1;
    if (p2 != 0) *p2 = 0xfff1;
    func_0204ee10(&b24, &b28, pos);
    w = data_021c47c4;
    if (w != 0) {
        idx = ((s32)(u16)ang >> 4) * 2;
        t = pos->z + func_01ffcb0c(data_02135f44[idx + 1], 0x10cd);
        v34.x = pos->x + func_01ffcb0c(data_02135f44[idx], 0x10cd);
        v34.y = 0;
        v34.z = t;
        cell = func_0204eba0(w, &v34, 0);
        if (cell != 0) {
            if (func_0204b300(cell) != 0) {
                return -1;
            }
        }
    }
    for (i = 0; (u32)i < 4; i++) {
        for (layer = 1; layer >= 0; layer--) {
            if (func_ov004_02234320(&c2c, &c30, pos, ang, i) == 0) {
                continue;
            }
            func_0204ed8c((Unk_ov004_Vec3 *)&v40, c2c, c30);
            if (func_020e9650(pos, &v40) > data_ov004_022406b4[layer & 1]) {
                continue;
            }
            o = func_ov004_022355d8(func_ov004_02235718(), c2c, c30, (u8)layer);
            *ox = c2c;
            *oy = c30;
            if (o != 0 && o->vfunc_a0() != 0 && o->func_ov004_022075b0() == 0) {
                if (p1 != 0) {
                    func_ov004_02206f3c(&tmp, o);
                    *p1 = tmp;
                }
                if (p2 != 0) {
                    *p2 = func_0204b248(func_ov004_022087a4(o), 0);
                }
                return func_ov004_02235740(func_ov004_0223584c(), o);
            }
            if (layer == 1 && o == 0) {
                sx = *(volatile s32 *)&c2c;
                sy = *(volatile s32 *)&c30;
                hx = sx >> 4;
                hy = sy >> 4;
                cell2 = func_0204ebd8(w, hx, hy, sx - (hx << 4), sy - (hy << 4), (u8)layer);
                if (cell2 != 0 && func_0204b300(cell2) != 0) {
                    if (p1 != 0) *p1 = *cell2;
                    if (p2 != 0) *p2 = *cell2;
                    return -2;
                }
            }
        }
    }
    return -1;
}
