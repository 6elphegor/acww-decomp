#include "types.h"

struct Unk_02012810_Vec {
    s32 x, y, z;
};
struct Unk_02012b94_Pair {
    u32 x, z;
};

class Unk_02012810;
typedef s32 (Unk_02012810::*Unk_02012810_Fn)(Unk_02012810_Vec *);
typedef s32 (Unk_02012810::*Unk_02012810_Fn0)();

struct Unk_02012810_Tbl {
    Unk_02012810_Fn unk_00;
    u32 pad[2];
    Unk_02012810_Fn tbl[2][3];
};

struct Unk_02012f04_Obj {
    u32 pad_00[3];
    Unk_02012b94_Pair unk_0c;
};
struct Unk_02012e08_Pos {
    u32 x, z;
    Unk_02012e08_Pos(const Unk_02012b94_Pair &o) : x(o.x), z(o.z) {}
    Unk_02012e08_Pos(const Unk_02012e08_Pos &o) : x(o.x), z(o.z) {}
};
struct Unk_02012cbc_Ent {
    u8 x, z;
    union {
        u8 b;
        struct { u8 lo : 4; u8 hi : 4; } f;
    };
};
extern s32 data_021be028[];
struct Unk_020130f0_Dir {
    s32 x, z;
};
#define data_021be028_d ((Unk_020130f0_Dir *)data_021be028)
extern Unk_020130f0_Dir data_021be030, data_021be038, data_021be040;
extern s32 data_021be02c[];

extern Unk_02012f04_Obj *data_021c47c4;

extern "C" {
s32 func_0204e328(Unk_02012f04_Obj *o, Unk_02012810_Vec *v);
u32 func_0204ec50(Unk_02012f04_Obj *o, s32 x, s32 z);
s32 func_020e9650(Unk_02012810_Vec *a, Unk_02012810_Vec *b);

void func_0204ee20(Unk_02012b94_Pair *a, Unk_02012b94_Pair *c, Unk_02012810_Vec *v);
void func_0204eda4(Unk_02012810_Vec *out, u32 a, u32 b, u32 c, u32 d);
s32 func_02077f68(u32 x, u32 z, Unk_02012f04_Obj *o);
s32 func_0207bcfc(u32 mask, s32 n, s32 max);

s32 func_0204e350(Unk_02012f04_Obj *o, u32 x, u32 z);
void func_0204edf8(u32 *bx, u32 *bz, u32 x, u32 z, u32 a, u32 b);
s32 func_02063b8c(s32 n);

void func_0204ee10(u32 *x, u32 *z, Unk_02012810_Vec *v);
void func_0204ed8c(Unk_02012810_Vec *out, u32 x, u32 z);
void *func_02115fb4(void *, int, u32);
void *func_02116048(const void *, void *, u32);
}

class Unk_02012810 {
public:
    u32 unk_00;
    u32 unk_04;
    u32 unk_08;
    u32 unk_0c;
    u32 unk_10;
    u8 pad_14[8];
    Unk_02012b94_Pair unk_1c;
    u8 pad_24[4];
    Unk_02012810_Tbl *unk_28;
    u8 unk_2c[90];
    u32 unk_88;
    u32 unk_8c;
    u32 unk_90;
    s32 unk_94;
    s32 unk_98;

    s32 func_02012b78(s32 v);
    s32 func_02012c58(Unk_02012810_Vec *v);
    u32 func_02012cb8();
    s32 func_02012d3c(Unk_02012b94_Pair *p);
    Unk_02012cbc_Ent func_02012cbc(Unk_02012b94_Pair *p);
    void func_02012d6c(u32 hi, u32 lo, Unk_02012b94_Pair *p);
    s32 func_02012e08(Unk_02012b94_Pair *out, Unk_02012e08_Pos pos, u32 mask, Unk_02012b94_Pair *lim, Unk_02012f04_Obj *obj);
    u32 func_020130f0(Unk_02012810_Vec *v, Unk_02012f04_Obj *o);
    s32 func_020131a4(Unk_02012810_Vec *cand, Unk_02012b94_Pair *p, Unk_020130f0_Dir *d, s32 limit, Unk_02012b94_Pair *q, s32 flag, Unk_02012f04_Obj *o);
    u32 func_02012f04(Unk_02012b94_Pair *out, Unk_02012810_Vec *pos);
    void func_02012810(Unk_02012810_Vec *pos);
    s32 func_02012dd8();
    void func_02012df8();
    s32 func_02012eb0(s32 v);
    s32 func_02012ed0(Unk_02012810_Vec *v);
    void func_020132ec(Unk_02012810_Vec *v);
};

s32 Unk_02012810::func_02012b78(s32 v) {
    if (v != 0) {
        v = v << 2;
        if ((v & 0xf) == 0) {
            v = (v >> 4) & 0xf;
        }
        return v;
    }
    return 0;
}

u32 Unk_02012810::func_02012cb8() {
    return unk_08;
}

s32 Unk_02012810::func_02012d3c(Unk_02012b94_Pair *p) {
    u8 *e = unk_2c;
    for (s32 i = 0; i < 30; e += 3, i++) {
        if (p->x == e[0] && p->z == e[1]) {
            return i;
        }
    }
    return -1;
}

s32 Unk_02012810::func_02012dd8() {
    u8 *e = unk_2c;
    for (s32 i = 0; i < 29; e += 3, i++) {
        if (((u32)(e[2] << 24) >> 28) == 0) {
            return i;
        }
    }
    return 29;
}

void Unk_02012810::func_02012df8() {
    func_02115fb4(unk_2c, 0, 90);
}

s32 Unk_02012810::func_02012eb0(s32 v) {
    if (v != 0) {
        for (s32 i = 0; i < 4; i++) {
            if (((v >> i) & 1) != 0) {
                return i;
            }
        }
    }
    return 4;
}

s32 Unk_02012810::func_02012c58(Unk_02012810_Vec *v) {
    Unk_02012810_Tbl *t = unk_28;
    if (t != 0 && unk_00 < 2 && unk_04 < 3) {
        Unk_02012810_Fn *pf = &t->tbl[unk_00][unk_04];
        if (*pf != 0) {
            s32 r = (this->*(*pf))(v);
            if (unk_00 == 1) {
                func_020132ec(v);
            }
            return r;
        }
    }
    return 0;
}

s32 Unk_02012810::func_02012ed0(Unk_02012810_Vec *v) {
    Unk_02012810_Tbl *t = unk_28;
    if (t != 0) {
        if (t->unk_00 != 0) {
            return (this->*(t->unk_00))(v);
        }
    }
    return 0;
}

Unk_02012cbc_Ent Unk_02012810::func_02012cbc(Unk_02012b94_Pair *p) {
    s32 idx = func_02012d3c(p);
    Unk_02012cbc_Ent out;
    func_02115fb4(&out, 0, 3);
    if (idx != -1) {
        u8 *a = unk_2c;
        u8 *b = a + idx * 3;
        func_02116048(b, &out, 3);
        b += 3;
        for (s32 i = idx; i < 29; i++) {
            func_02116048(b, a, 3);
            b += 3;
            a += 3;
        }
        func_02115fb4(unk_2c + (29 - idx) * 3, 0, (idx + 1) * 3);
    }
    return out;
}

void Unk_02012810::func_02012d6c(u32 hi, u32 lo, Unk_02012b94_Pair *p) {
    s32 n = func_02012dd8();
    u8 *e = unk_2c + n * 3;
    for (; n > 0; n--) {
        func_02116048(e - 3, e, 3);
        e -= 3;
    }
    e[2] = (e[2] & ~0xf0) | (((u8)(hi & 0xf) & 0xf) << 4);
    e[2] = (e[2] & ~0xf) | ((u8)(lo & 0xf) & 0xf);
    e[0] = p->x;
    e[1] = p->z;
}

s32 Unk_02012810::func_02012e08(Unk_02012b94_Pair *out, Unk_02012e08_Pos pos, u32 mask, Unk_02012b94_Pair *lim, Unk_02012f04_Obj *obj) {
    s32 m, dx, dz;
    s32 d = func_02012eb0(mask);
    if (d < 4) {
        dx = data_021be028[d * 2];
        dz = data_021be02c[d * 2];
        m = ~(mask | func_02012b78(mask));
        s32 cnt = 0;
        while (pos.x < lim->x && pos.z < lim->z) {
            pos.x += dx;
            pos.z += dz;
            cnt++;
            s32 r = func_0204e350(obj, pos.x, pos.z);
            if (r == 0) {
                u32 z = pos.z - dz;
                out->x = pos.x - dx;
                out->z = z;
                return -(cnt - 1);
            }
            if ((r & m) != 0) {
                out->x = pos.x;
                out->z = pos.z;
                return cnt;
            }
        }
    }
    return 0;
}

extern "C" void func_02012b94(Unk_02012b94_Pair *out, s32 unused, Unk_02012b94_Pair *p, Unk_02012f04_Obj *obj) {
    u32 bx = 0, bz = 0;
    u16 mask[16];
    s32 cnt = 0;
    s32 z, x;
    func_02115fb4(mask, 0, 32);
    func_0204edf8(&bx, &bz, p->x, p->z, 0, 0);
    for (z = 0; z < 16; z++) {
        for (x = 0; x < 16; x++) {
            if (func_0204e350(obj, bx + x, bz + z) != 0) {
                mask[z] |= 1 << x;
                cnt++;
            }
        }
    }
    if (cnt > 0) {
        s32 k = func_02063b8c(cnt);
        u16 *row;
        s32 xx, zz;
        for (zz = 0; zz < 16; zz++) {
            for (xx = 0, row = &mask[zz]; xx < 16; xx++) {
                if (((*row >> xx) & 1) != 0) {
                    if (k == 0) {
                        out->x = 0;
                        out->z = 0;
                        out->x = bx + xx;
                        out->z = bz + zz;
                        return;
                    }
                    k--;
                }
            }
        }
    }
    out->x = 0;
    out->z = 0;
}

u32 Unk_02012810::func_020130f0(Unk_02012810_Vec *v, Unk_02012f04_Obj *o) {
    u8 mask = 0;
    Unk_02012b94_Pair a, c, out;
    s32 n, i;
    u32 dir;
    a.x = 0;
    a.z = 0;
    c.x = 0;
    c.z = 0;
    out.x = 0;
    out.z = 0;
    n = 0;
    func_0204ee20(&a, &c, v);
    for (i = 0; i < 4; i++) {
        u32 x = c.x + data_021be028_d[i].x;
        u32 z = c.z + data_021be028_d[i].z;
        if (x < 16 && z < 16) {
            func_0204edf8(&out.x, &out.z, a.x, a.z, x, z);
            if (func_02077f68(out.x, out.z, o) != 0) {
                mask = mask | (1 << i);
                n++;
            }
        }
    }
    dir = func_0207bcfc(mask, n, 4);
    if (dir < 4) {
        s32 off = dir * 8;
        func_0204eda4(v, a.x, a.z, c.x + *(s32 *)((u8 *)data_021be028 + off), c.z + *(s32 *)((u8 *)data_021be02c + off));
        return dir;
    }
    return 4;
}

u32 Unk_02012810::func_02012f04(Unk_02012b94_Pair *out, Unk_02012810_Vec *pos) {
    Unk_02012810_Vec best;
    Unk_02012810_Vec cand[4];
    u8 mask;
    Unk_02012f04_Obj *o;
    Unk_02012b94_Pair p, q;
    s32 dir;
    s32 x0, z0, x1, z1, flag, off, bestd;
    o = data_021c47c4;
    best.x = pos->x;
    best.y = pos->y;
    best.z = pos->z;
    mask = 0;
    p.x = 0;
    p.z = 0;
    q.x = 0;
    q.z = 0;
    dir = 4;
    if (o == 0) {
        return 4;
    }
    func_0204ee10(&p.x, &p.z, pos);
    Unk_02012b94_Pair *pq = &o->unk_0c;
    q.x = pq->x;
    q.z = pq->z;
    if (func_0204e328(o, pos) != 0) {
        return 4;
    }
    for (s32 i = 0; i < 4; i++) {
        cand[i].x = pos->x;
        cand[i].y = pos->y;
        cand[i].z = pos->z;
    }
    func_0204ee10(&p.x, &p.z, pos);
    flag = (func_0204ec50(o, pos->x >> 17, pos->z >> 17) & 0x7f000) != 0 ? 1 : 0;
    x0 = p.x & 0xfff0;
    z0 = p.z & 0xfff0;
    x1 = x0 + 16;
    z1 = z0 + 16;
    if (func_020131a4(&cand[0], &p, data_021be028_d, p.z - z0, &q, flag, o)) {
        mask |= 1;
    }
    if (func_020131a4(&cand[2], &p, &data_021be038, z1 - p.z, &q, flag, o)) {
        mask |= 4;
    }
    if (func_020131a4(&cand[1], &p, &data_021be030, p.x - x0, &q, flag, o)) {
        mask |= 2;
    }
    if (func_020131a4(&cand[3], &p, &data_021be040, x1 - p.x, &q, flag, o)) {
        mask |= 8;
    }
    if (mask != 0) {
        bestd = -4096;
        for (s32 i = 0; i < 4; i++) {
            s32 d;
            Unk_02012810_Vec *pc = cand;
            d = func_020e9650(pos, &pc[i]);
            if (((mask >> i) & 1) != 0) {
                if (bestd < 0 || d < bestd) {
                    best = pc[i];
                    bestd = d;
                    dir = i;
                }
            }
        }
    } else {
        u32 r = func_020130f0(&best, o);
        if (r < 4) {
            dir = r;
        }
    }
    func_0204ee10(&out->x, &out->z, &best);

    return dir;
}

void Unk_02012810::func_02012810(Unk_02012810_Vec *pos) {
    Unk_02012f04_Obj *o = data_021c47c4;
    s32 dirs, found;
    s32 lo2, present, dirs2, cand, bestd, i, hi, lo, w, bx, bz;
    Unk_02012b94_Pair q, p, r;
    Unk_02012810_Vec uv, tv;

    if (o == 0) {
        return;
    }
    present = func_0204e328(o, pos);
    if (present == 0) {
        unk_90 = func_02012f04(&unk_1c, pos);
        unk_04 = 0;
        func_02012df8();
        unk_88 = 0;
        unk_8c = 2;
        return;
    }
    dirs2 = dirs = func_02012b78(unk_88);
    Unk_02012b94_Pair *pq = &o->unk_0c;
    q.x = pq->x;
    q.z = pq->z;
    bx = 0;
    p.x = 0;
    p.z = 0;
    bz = 0;
    found = 0;
    r.x = 0;
    r.z = 0;
    bestd = -4096;
    func_0204ee10(&p.x, &p.z, pos);
    if ((present & ~dirs) == 0) {
        if (func_02012e08(&r, p, dirs, &q, o)) {
            unk_1c.x = r.x;
            unk_1c.z = r.z;
            unk_8c = 1;
            unk_88 = dirs;
        }
    } else if (unk_8c != 1) {
        hi = found;
        lo = unk_88;
        if (func_02012d3c(&p) != -1) {
            Unk_02012cbc_Ent e1 = func_02012cbc(&p);
            hi = e1.f.hi;
            lo = e1.f.lo;
            dirs2 = dirs2 | hi;
        }
        func_0204ed8c(&tv, unk_0c, unk_10);
        for (i = 0; i < 4; i++) {
            if (((dirs2 >> i) & 1) == 0) {
                cand = present & (1 << i);
                if (cand != 0) {
                    if (func_02012e08(&r, p, cand, &q, o)) {
                        s32 d;
                        func_0204ed8c(&uv, r.x, r.z);
                        d = func_020e9650(&tv, &uv);
                        if (bestd < 0 || d < bestd) {
                            bx = r.x;
                            bz = r.z;
                            bestd = d;
                            found = cand;
                        }
                    }
                }
            }
        }
        if (found != 0) {
            if (unk_8c == 0) {
                func_02012d6c(hi | found, lo, &p);
            }
            unk_1c.x = bx;
            unk_1c.z = bz;
            unk_8c = 0;
            unk_88 = found;
        } else {
                if (func_02012e08(&r, p, dirs, &q, o)) {
                unk_1c.x = r.x;
                unk_1c.z = r.z;
                unk_8c = 1;
                unk_88 = dirs;
            }
        }
        unk_04 = 1;
    } else if (unk_8c == 1) {
        s32 cand2, j;
        Unk_02012cbc_Ent e2 = func_02012cbc(&p);
        lo2 = e2.f.lo;
        w = func_02012b78(lo2);
        func_0204ed8c(&tv, unk_0c, unk_10);
        dirs = dirs | w;
        for (j = 0; j < 4; j++) {
            if (((dirs >> j) & 1) == 0) {
                cand2 = present & (1 << j);
                if (cand2 != 0) {
                    if (func_02012e08(&r, p, cand2, &q, o)) {
                        s32 d;
                        func_0204ed8c(&uv, r.x, r.z);
                        d = func_020e9650(&tv, &uv);
                        if (bestd < 0 || d < bestd) {
                            bx = r.x;
                            bz = r.z;
                            bestd = d;
                            found = cand2;
                        }
                    }
                }
            }
        }
        if (found != 0) {
            if (lo2 == 0) {
                lo2 = unk_88;
            }
            unk_1c.x = bx;
            unk_1c.z = bz;
            func_02012d6c(e2.f.hi | found, lo2, &p);
            unk_8c = 0;
            unk_88 = found;
        } else {
                if (func_02012e08(&r, p, w, &q, o)) {
                unk_1c.x = r.x;
                unk_1c.z = r.z;
                unk_8c = 1;
                unk_88 = w;
            }
        }
        unk_04 = 1;
    }
    unk_90 = 4;
}
