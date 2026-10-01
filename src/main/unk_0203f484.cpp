#include "types.h"

extern "C" void func_02116048(const void *src, void *dst, u32 size);

struct Unk_0203f484_Date {
    u32 a;
    u32 b;
};

struct Unk_0203f508_Date {
    u8 b[8];
    Unk_0203f508_Date() {}
    Unk_0203f508_Date(const Unk_0203f508_Date &o) { func_02116048(&o, this, 8); }
};

struct Unk_0203f554_CalB {
    u8 b0, b1, b2, b3;
};
union Unk_0203f554_Cal {
    u32 w;
    Unk_0203f554_CalB s;
};

struct Unk_0203f554_Sub {
    u32 flags;
    s32 off;
    u32 unk_08;
};

struct Unk_0203f554_Ent {
    u16 id;
    u16 kind;
    Unk_0203f554_Cal a;
    Unk_0203f554_Cal b;
};

struct Unk_0203f554_Tbl {
    u16 id;
    u16 kind;
    Unk_0203f554_Sub a;
    Unk_0203f554_Sub b;
};

extern "C" {
void func_0209d498(void *);
extern u8 data_021c3bd8[];
extern Unk_0203f554_Ent data_021c3bdc[];
void func_0203f4c0(s32);
void func_0203f52c(Unk_0203f554_Ent *, Unk_0203f508_Date, s32);
Unk_0203f554_Cal func_0203f804(Unk_0203f554_Sub *, s32, Unk_0203f554_Cal, u32);
Unk_0203f554_Cal func_0203f7e8(Unk_0203f554_Sub *, s32, Unk_0203f554_Cal, u32);
s32 func_0203f600(Unk_0203f554_Ent *, Unk_0203f554_Tbl *, s32, Unk_0203f554_Cal);
void func_0203f678(Unk_0203f554_Ent *, Unk_0203f554_Cal);
s32 func_0203f69c(Unk_0203f554_Tbl *, Unk_0203f554_Cal, Unk_0203f554_Ent *, Unk_0203f554_Ent *, s32, s32, s32);
void func_0203f7cc(Unk_0203f554_Ent *, s32);
s32 func_0209ceac(u32, u32, u32);
s32 func_0209ce48(u32, u32);
u8 func_0203fe18(Unk_0203f554_Sub *, s32, Unk_0203f554_Cal, u32);
u8 func_0203fc7c(Unk_0203f554_Sub *, u32, Unk_0203f554_Cal, u32, u32);
void func_0203fc4c(Unk_0203f554_Sub *, Unk_0203f554_Cal *);
void func_0203fbb0(Unk_0203f554_Sub *, Unk_0203f554_Cal *, s32);
Unk_0203f554_Cal func_0203fb1c(Unk_0203f554_Sub *, u32, Unk_0203f554_Cal);
void func_0209d2c0(void *, s32);
void func_0209d164(void *, s32);
s32 func_02087444();
s32 func_0208740c();
s32 func_0208723c(void *);
s32 func_02040188(Unk_0203f554_Cal);
s32 func_020400f8(Unk_0203f554_Cal);
s32 func_020400b0(u32);
s32 func_0203ff50(u32, u32);
union Unk_0203fb1c_Pair {
    u16 h;
    u8 b[2];
};
struct Unk_0203fb1c_Rec {
    Unk_0203fb1c_Pair pr;
    u8 id;
};
Unk_0203fb1c_Rec *func_02040030(void *, u32);
void *func_020805c4(void *);
s32 func_020030b4(void *);
s32 func_0207e1f0(void *);
s32 func_0207e334(void *);
void *func_0207bf60(void *, s32);
s32 func_0207a484(void *);
u8 *func_0207fae4(void *);
s32 func_0209750c();
u8 *func_02098308(s32);
extern u8 data_021d7350[];
extern Unk_0203f554_Tbl data_020d9744[];
extern u8 data_021eca50[];
}

struct Unk_0203f820_Date {
    u32 a;
    u32 b;
    Unk_0203f820_Date() {
        a = 0;
        b = 0;
    }
};

extern "C" void func_0203f484() {
    Unk_0203f484_Date d;
    d.a = 0;
    d.b = 0;
    func_0209d498(&d);
    if (((u8 *)&d)[5] != data_021c3bd8[2] || ((u8 *)&d)[4] != data_021c3bd8[1] || ((u8 *)&d)[3] != data_021c3bd8[0]) {
        func_0203f4c0(0);
    }
}

extern "C" void func_0203f4c0(s32 x) {
    Unk_0203f484_Date d;
    d.a = 0;
    d.b = 0;
    func_0209d498(&d);
    func_0203f52c(data_021c3bdc, *(Unk_0203f508_Date *)&d, x);
    data_021c3bd8[2] = ((u8 *)&d)[5];
    data_021c3bd8[1] = ((u8 *)&d)[4];
    data_021c3bd8[0] = ((u8 *)&d)[3];
}

extern "C" s32 func_0203f554(Unk_0203f554_Ent *out, Unk_0203f508_Date d, s32 x, s32 y);

extern "C" s32 func_0203f508(Unk_0203f554_Ent *a, Unk_0203f508_Date d) {
    return func_0203f554(a, d, 1, 0);
}

extern "C" void func_0203f52c(Unk_0203f554_Ent *a, Unk_0203f508_Date d, s32 x) {
    func_0203f554(a, d, 0, x);
}

extern "C" s32 func_0203f554(Unk_0203f554_Ent *out, Unk_0203f508_Date d, s32 x, s32 y) {
    Unk_0203f554_Tbl *t;
    s32 count = 0;
    u32 year = ((u8 *)&d)[5];
    Unk_0203f554_Cal cal;
    Unk_0203f554_Ent e;
    u32 m = ((u8 *)&d)[4];
    cal.s.b3 = m;
    u32 dd = ((u8 *)&d)[3];
    cal.s.b2 = dd;
    cal.s.b1 = ((u8 *)&d)[2];
    cal.s.b0 = func_0209ceac(year, m, dd);
    func_0203f7cc(out, 7);
    t = data_020d9744;
    for (s32 j = 0; j < 99; t++, j++) {
        if (func_0203f600(&e, t, year, cal)) {
            if (!func_0203f69c(t, cal, &e, out, count, x, y)) {
                func_0203f678(&e, cal);
                out[count].id = e.id;
                out[count].kind = e.kind;
                out[count].a = e.a;
                out[count].b = e.b;
                count++;
                if (count == 7) break;
            }
        }
    }
    return count;
}

extern "C" s32 func_0203f600(Unk_0203f554_Ent *out, Unk_0203f554_Tbl *t, s32 year, Unk_0203f554_Cal cal) {
    s32 ok = 0;
    u32 key = cal.w & 0xffff0000;
    u32 id = t->id;
    out->id = id;
    out->kind = t->kind;
    out->a = func_0203f804(&t->a, year, cal, id);
    if (out->a.w != 0 && (out->a.w & 0xffff0000) <= key) {
        out->b = func_0203f7e8(&t->b, year, cal, id);
        if (out->b.w != 0 && (out->b.w & 0xffff0000) >= key) {
            ok = 1;
        }
    }
    return ok;
}

extern "C" void func_0203f678(Unk_0203f554_Ent *e, Unk_0203f554_Cal cal) {
    u8 v = cal.s.b2;
    switch (e->id) {
    case 0x16:
    case 0x18:
    case 0x19:
        e->a.s.b2 = v;
        e->a.s.b1 = 6;
        e->b.s.b2 = v;
        e->b.s.b1 = 0x18;
        break;
    }
}

extern "C" s32 func_0203f69c(Unk_0203f554_Tbl *t, Unk_0203f554_Cal cal, Unk_0203f554_Ent *e, Unk_0203f554_Ent *out, s32 count, s32 x, s32 y) {
    u32 lo;
    u32 hi;
    u32 olo;
    u32 ohi;
    s32 i;
    s32 kind;
    kind = t->kind;
    if (kind == 5) return 0;
    if (x == 0) {
        if (func_020400b0(e->id)) return 1;
    }
    if (kind == 4) {
        if (y != 0) {
            if (func_0203ff50(e->id, cal.s.b0)) return 1;
        } else {
            if (func_0203ff50(e->id, cal.s.b0) && func_0203ff50(e->id, (u8)(cal.s.b0 - 1))) return 1;
        }
        if (func_02087444() || func_0208740c()) return 1;
        return 0;
    }
    lo = e->a.w & ~0xff;
    hi = e->b.w & ~0xff;
    for (i = 0; i < count; out++, i++) {
        if (out->kind != 5 && kind >= out->kind) {
            olo = out->a.w & ~0xff;
            ohi = out->b.w & ~0xff;
            if ((lo < ohi && hi > olo) || (olo < hi && ohi > lo)) return 1;
        }
    }
    if (kind >= 2) {
        if (func_02087444() || func_0208740c()) return 1;
    }
    if (kind >= 3) {
        if (func_0208723c(data_021eca50)) return 1;
    }
    switch (e->id) {
    case 0x3c:
        return func_02040188(cal);
    case 0x3d:
        return func_020400f8(cal);
    default:
        return 0;
    }
}
extern "C" void func_0203f7cc(Unk_0203f554_Ent *p, s32 n) {
    for (s32 i = 0; i < n; p++, i++) {
        p->id = 0x63;
        p->kind = 5;
    }
}

extern "C" Unk_0203f554_Cal func_0203f820(Unk_0203f554_Sub *, s32, Unk_0203f554_Cal, u32);

extern "C" Unk_0203f554_Cal func_0203f7e8(Unk_0203f554_Sub *e, s32 year, Unk_0203f554_Cal cal, u32 id) {
    return func_0203f820(e, year, cal, id);
}

extern "C" Unk_0203f554_Cal func_0203f804(Unk_0203f554_Sub *e, s32 year, Unk_0203f554_Cal cal, u32 id) {
    return func_0203f820(e, year, cal, id);
}

extern "C" BOOL func_0203fc10(void *a, s32 b) {
    BOOL r = FALSE;
    if (func_020030b4(func_020805c4(a))) {
        if (func_0207e1f0(a) == 3) {
            s32 x = func_0207e334(a);
            if (x != -1 && x != b) {
                r = TRUE;
            }
        }
    }
    return r;
}

extern "C" void func_0203fc4c(Unk_0203f554_Sub *e, Unk_0203f554_Cal *out) {
    if (func_0209750c()) {
        u8 *p = func_02098308(func_0209750c());
        if (p) {
            out->s.b3 = p[1];
            out->s.b2 = p[0];
            out->s.b1 = e->unk_08;
        }
    }
}

extern "C" void func_0203fbb0(Unk_0203f554_Sub *e, Unk_0203f554_Cal *out, s32 n) {
    u8 *base = data_021d7350;
    out->w = 0;
    if (n < 0 || n > 7) n -= 0x4b;
    void *r6 = func_0207bf60(base + 0x8a3c, n);
    if (func_0203fc10(r6, func_0207a484(base + 0x8a3c))) {
        u8 *p = func_0207fae4(r6);
        if (p) {
            out->s.b3 = p[0];
            out->s.b2 = p[1];
            out->s.b1 = e->unk_08;
        }
    }
}

extern "C" Unk_0203f554_Cal func_0203fb1c(Unk_0203f554_Sub *e, u32 id, Unk_0203f554_Cal cal) {
    Unk_0203fb1c_Pair x, y;
    u8 *base = data_021d7350;
    Unk_0203f554_Cal ret;
    ret.w = 0;
    if (id == 0x45) {
        Unk_0203fb1c_Rec *p = func_02040030(base + 0x15e18, cal.s.b0);
        if (p && id == p->id) {
            x = p->pr;
            ret.s.b3 = x.b[1];
            ret.s.b2 = x.b[0];
            ret.s.b1 = e->unk_08;
        }
    } else {
        if (id == 0x60) id = 0x40;
        s32 n = cal.s.b0 - 1;
        for (s32 i = 0; i < 2; n++, i++) {
            Unk_0203fb1c_Rec *p = func_02040030(base + 0x15e18, n);
            if (p && id == p->id) {
                y = p->pr;
                ret.s.b3 = y.b[1];
                ret.s.b2 = y.b[0];
                ret.s.b1 = e->unk_08;
                break;
            }
        }
    }
    return ret;
}


extern "C" u8 func_0203fc7c(Unk_0203f554_Sub *e, u32 year, Unk_0203f554_Cal cal, u32 mon, u32 id) {
    s32 s;
    u32 b;
    s32 k;
    u32 c, cm;
    s32 dim, x, r6, r2;
    u32 w = e->flags;
    b = (w >> 8) & 7;
    c = (w >> 1) & 7;
    dim = func_0209ce48(year, mon);
    cm = ((volatile Unk_0203f554_CalB *)&cal)->b3;
    x = func_0209ce48(year, cm);
    switch (b) {
    case 0:
        return e->off;
    case 6: {
        s32 wd = func_0209ceac((u8)year, mon, (u8)dim);
        if (wd < cal.s.b0) {
            return dim - 7 + (cal.s.b0 - wd);
        } else {
            return dim - (wd - cal.s.b0);
        }
    }
    case 7: {
        s32 v;
        u32 t = cal.s.b0;
        if (c < t) {
            v = (u8)(cal.s.b2 + (c - t + 7));
        } else {
            v = (u8)(cal.s.b2 + (c - t));
        }
        if (cm != mon && v > x) {
            v -= x;
        }
        return v;
    }
    default:
        r6 = cal.s.b0 - ((cal.s.b2 - 1) % 7);
        if (r6 < 0) r6 += 7;
        if (mon != cm) {
            s = 0;
            k = mon;
            if (mon == 1 && cm == 12) k = 13;
            if (k < cm) {
                cm = cal.s.b3;
                for (; k < (s32)cm; k++) {
                    s += func_0209ce48(year, (u8)k);
                }
                s = (s % 7);
                r6 = ((r6 - s + 7) % 7);
            } else {
                for (; (s32)cm < k; cm++) {
                    s += func_0209ce48(year, (u8)cm);
                }
                r6 = ((r6 + s) % 7);
            }
        }
        if (r6 <= c) {
            r2 = c - r6 + 1;
        } else {
            r2 = c - r6 + 8;
        }
        switch ((s32)id) {
        case 9:
        case 0x14:
        case 0x25:
        case 0x26:
        case 0x46:
            if (mon == 2 || mon == 4 || mon == 10) {
                b = 4;
            }
        }
        return r2 + (b - 1) * 7;
    }
}

extern "C" Unk_0203f554_Cal func_0203f820(Unk_0203f554_Sub *e, s32 year, Unk_0203f554_Cal cal, u32 id) {
    Unk_0203f554_Cal ret;
    ret.w = 0;
    u32 w = e->flags;
    u32 a = (w >> 4) & 0xf;
    u32 b = (w >> 8) & 7;
    u32 c = (w >> 1) & 7;
    u32 d = w & 1;
    u32 type = (w >> 13) & 7;
    switch (type) {
    case 3: {
        u32 m = cal.s.b3;
        switch (m) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 10:
        case 11:
        case 12:
            ret.s.b3 = m;
            break;
        default:
            ret.s.b3 = 1;
            break;
        }
        ret.s.b2 = func_0203fc7c(e, year, cal, ret.s.b3, id);
        ret.s.b1 = e->unk_08;
        break;
    }
    case 4: {
        u32 m = cal.s.b3;
        switch (m) {
        case 6:
        case 7:
        case 8:
        case 9:
            ret.s.b3 = m;
            break;
        default:
            ret.s.b3 = 6;
            break;
        }
        ret.s.b2 = func_0203fc7c(e, year, cal, ret.s.b3, id);
        ret.s.b1 = e->unk_08;
        break;
    }
    case 0:
        ret.s.b3 = func_0203fe18(e, year, cal, id);
        ret.s.b2 = func_0203fc7c(e, year, cal, ret.s.b3, id);
        ret.s.b1 = e->unk_08;
        break;
    case 1:
        func_0203fc4c(e, &ret);
        break;
    case 2:
        func_0203fbb0(e, &ret, id);
        break;
    case 5: {
        s32 s;
        s32 r5;
        u32 r4;
        ret.s.b3 = a;
        r5 = cal.s.b0 - (cal.s.b2 - 1) % 7;
        if (r5 < 0) r5 += 7;
        r4 = cal.s.b3;
        if (a != r4) {
            s = 0;
            if (a < r4) {
                for (s32 m = a; m < (s32)r4; m++) {
                    s += func_0209ce48(year, (u8)m);
                }
                s %= 7;
                r5 = (r5 - s + 7) % 7;
            } else {
                for (; r4 < a; r4++) {
                    s += func_0209ce48(year, (u8)r4);
                }
                r5 = (r5 + s) % 7;
            }
        }
        {
            s32 r2;
            if (r5 <= c) {
                r2 = c - r5 + 1;
            } else {
                r2 = c - r5 + 8;
            }
            ret.s.b2 = r2 + (b - 1) * 7;
        }
        ret.s.b1 = e->unk_08;
        break;
    }
    case 6:
        switch ((s32)id) {
        case 0x3d:
        case 0x3e:
        case 0x3f:
        case 0x40:
        case 0x41:
        case 0x42:
        case 0x43:
        case 0x44:
        case 0x45:
        case 0x60:
            ret = func_0203fb1c(e, id, cal);
            break;
        case 0x61:
        case 0x62:
            if (d != 0) {
                if (cal.s.b3 == 1) {
                    ret.s.b3 = 12;
                    ret.s.b2 = 0x1f;
                    ret.s.b1 = 6;
                } else {
                    d = 0;
                    ret.s.b3 = 12;
                    ret.s.b2 = 0x1f;
                    ret.s.b1 = 0x18;
                }
            } else {
                if (cal.s.b3 == 1) {
                    ret.s.b3 = 1;
                    ret.s.b2 = 1;
                    ret.s.b1 = 0;
                } else {
                    ret.s.b3 = 12;
                    ret.s.b2 = 0x1f;
                    ret.s.b1 = 6;
                }
            }
            break;
        }
        break;
    }
    if (ret.w != 0) {
        Unk_0203f820_Date dt;
        dt.a = 0;
        dt.b = 0;
        ((u8 *)&dt)[5] = year;
        ((u8 *)&dt)[4] = ret.s.b3;
        ((u8 *)&dt)[3] = ret.s.b2;
        s32 dim = func_0209ce48(year, ret.s.b3);
        if (ret.s.b2 > dim) {
            ((u8 *)&dt)[3] = dim;
            func_0209d2c0(&dt, ret.s.b2 - dim);
        }
        if (d != 0) {
            s32 off = e->off;
            if (off < 0) {
                func_0209d164(&dt, off < 0 ? -off : off);
            } else {
                func_0209d2c0(&dt, off);
            }
        }
        ret.s.b3 = ((u8 *)&dt)[4];
        ret.s.b2 = ((u8 *)&dt)[3];
    }
    return ret;
}
