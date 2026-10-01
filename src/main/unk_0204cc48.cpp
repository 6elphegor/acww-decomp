#include "types.h"

struct Unk_0204cf2c_Ent {
    u16 *data;
    s32 count;
};

struct Unk_0204cd00_Glyph {
    u16 v;
    u8 x;
    u8 y;
};

struct Unk_020ca2f4_Ent {
    u32 a;
    u32 b;
};

struct Unk_0204d0f4_V3 {
    s32 x, y, z;
};

struct Unk_0204d0f4_Info {
    u32 a;
    u32 b;
    u32 c;
    u32 d;
};

struct Unk_0204d0a4 {
    u32 unk_00;
    u32 unk_04;
    u32 unk_08;
    u32 unk_0c;
    u32 unk_10;
    u32 unk_14;
    u32 unk_18;
    u32 unk_1c;
    u32 unk_20;
};

extern "C" {
extern Unk_0204cf2c_Ent *data_021c47d0;
extern Unk_0204d0a4 *data_021c47d4;
extern Unk_0204d0a4 *data_021c47e8[5];
extern Unk_020ca2f4_Ent data_020ca2f4[4];
extern u32 data_021dfd8c;
extern u32 data_021e58a8;
extern u32 data_021c621c;
extern u32 data_020c8cbc;
extern u32 data_020c8cb8;

void *func_020e8628(void *heap, s32 size, s32 align);
void *func_020e8618(void *heap, s32 size);
void *func_020e8608(void *heap, s32 size);
void func_020e85fc(void *heap, void *p);
void func_020e885c(u32 v);
u32 func_0207bf60(u32 *a, s32 b);
s32 func_0207f07c(u32 h, s32 *a, s32 *b);
u32 func_0207f04c(u32 h);
void func_0207e568(u32 h, void *p);
void func_02063ee8(u32 a, void *dst, s32 size, s32 off);
void *func_020641ec(u32 a, void *heap, s32 b, s32 *sizeOut);
u32 func_020375dc(s32 a, void *heap, s32 b);
void func_020302f8(u32 h);
void func_0204edf8(u32 *a, u32 *b, u32 w, u32 h, u32 c, u32 d);
void func_02030528(u32 w, u32 h, u32 c, u32 d);
u32 func_02036c58();
u32 func_02036eb8(u32 a, u32 b);
void func_02037674(u32 h, u32 a, Unk_0204d0f4_V3 *v, u32 b, u32 c, u32 d, u32 e, u32 f, u32 g, u32 h2, u32 i);
Unk_0204d0f4_Info *func_0204ee64(s32 a, void *heap);
void *func_020604f8(u32 *a, s32 b, void *heap);
u32 func_020375d0(u32 h);
u32 func_02036f24(u32 a, u32 b);
s32 func_02037618(u32 h, s32 a, u32 b, u32 c);
u32 func_020603f4(u32 *a);
void func_020375d4(u32 h, s32 i);
void func_0205b7b0();
void func_0205b7cc();
s32 func_020b530c();
u32 func_020b533c(u32 v);
s32 func_0206057c();

void *func_0204cc90(void *a, s32 *b, s32 c, s32 d, void *heap);
s32 func_0204cea8(Unk_0204cf2c_Ent *t, s32 i, s32 j);
BOOL func_0204cf1c(Unk_0204cf2c_Ent *t, s32 i);
BOOL func_0204ce20(Unk_0204cf2c_Ent *t, void *dst, s32 i, s32 j, s32 n);
s32 func_0204cedc(Unk_0204cf2c_Ent *t, s32 i, s32 j);
BOOL func_0204cd00(Unk_0204cf2c_Ent *t, u16 *dst, s32 i, s32 j, void *heap);
u16 *func_0204ce50(void *heap, s32 align);
BOOL func_0204cdf0(u16 *dst, s32 i, s32 j, void *heap);
void func_0204cf2c(Unk_0204cf2c_Ent *t, void *heap);
BOOL func_0204cf58(Unk_0204cf2c_Ent *t, void *heap);
void func_0204d024(Unk_0204cf2c_Ent *t);
void func_0204cfa4(void *heap);
void func_0204d06c(Unk_0204d0a4 *p, void *heap);
void func_0204d040(void *heap);
void func_0204d280(Unk_0204d0a4 *p);
BOOL func_0204d0f4(Unk_0204d0a4 *p, u32 a, void *heap);
BOOL func_0204d1dc(u16 *dst, u32 b, void *heap);
Unk_0204d0f4_Info *func_0204d22c(u16 *dst, u32 b, void *heap);
BOOL func_0204d2b0(Unk_0204d0a4 *p, s32 i, void *heap);
void func_0204d370(Unk_0204d0a4 *p);
void func_0204d37c(Unk_0204d0a4 *p);
void func_0204d294(Unk_0204d0a4 *p, void *heap);
void func_0204d40c(Unk_0204d0a4 *p, s32 i);
void func_0204d54c(Unk_0204d0a4 *p);
Unk_0204d0a4 *func_0204d528(s32 i);
}

static inline BOOL Unk_0204cd00_R(Unk_0204cd00_Glyph *g) {
    u32 y = g->y;
    u32 x = g->x;
    BOOL r = FALSE;
    if (x < 0x10 && y < 0x10) r = TRUE;
    return r;
}

extern "C" {

void *func_0204cc48(void *a, s32 *b, s32 c, void *d) {
    u32 h = func_0207bf60(&data_021dfd8c, c);
    s32 x = 2, y = 0;
    if (h && func_0207f07c(h, &x, &y)) {
        return func_0204cc90(a, b, x, y, d);
    }
    return 0;
}

void *func_0204cc90(void *a, s32 *b, s32 c, s32 d, void *heap) {
    Unk_0204cf2c_Ent *t = (Unk_0204cf2c_Ent *)a;
    s32 n = func_0204cea8(t, c, d);
    if (n > 0 && (n & 3) == 0 && func_0204cf1c(t, c)) {
        void *buf = func_020e8628(heap, n, 4);
        if (buf) {
            if (func_0204ce20(t, buf, c, d, n)) {
                *b = n >> 2;
                return buf;
            }
            func_020e85fc(heap, buf);
        }
    }
    return 0;
}

BOOL func_0204cd00(Unk_0204cf2c_Ent *t, u16 *dst, s32 i, s32 j, void *heap) {
    s32 n = func_0204cea8(t, i, j);
    BOOL result = FALSE;
    if (dst && n > 0 && (n & 3) == 0 && func_0204cf1c(t, i)) {
        void *buf = func_020e8618(heap, n);
        Unk_0204cd00_Glyph *p = (Unk_0204cd00_Glyph *)buf;
        if (p) {
            if (func_0204ce20(t, buf, i, j, n)) {
                s32 cnt = n >> 2;
                s32 k;
                for (k = 0; k < cnt; p++, k++) {
                    if (Unk_0204cd00_R(p)) {
                        dst[(p->y << 4) + p->x] = p->v;
                    }
                }
            }
            func_020e85fc(heap, buf);
            result = TRUE;
        }
    }
    return result;
}

u16 *func_0204cda0(u16 *dst, s32 b, void *heap, s32 d) {
    u16 *r = 0;
    if (data_021c47d0) {
        r = func_0204ce50(heap, d);
        if (r) {
            if (!func_0204cd00(data_021c47d0, r, (s32)dst, b, heap)) {
                func_020e85fc(heap, r);
                r = 0;
            }
        }
    }
    return r;
}

BOOL func_0204cdf0(u16 *dst, s32 i, s32 j, void *heap) {
    BOOL r = FALSE;
    if (data_021c47d0) {
        r = func_0204cd00(data_021c47d0, dst, i, j, heap);
    }
    return r;
}

BOOL func_0204ce20(Unk_0204cf2c_Ent *t, void *dst, s32 i, s32 j, s32 n) {
    s32 off = func_0204cedc(t, i, j);
    Unk_020ca2f4_Ent *e = &data_020ca2f4[i];
    func_02063ee8(e->b, dst, n, off);
    return TRUE;
}

u16 *func_0204ce50(void *heap, s32 align) {
    u16 *p = (u16 *)func_020e8628(heap, 0x200, align);
    if (p) {
        s32 i;
        for (i = 0; i < 0x100; i++) {
            p[i] = 0xfff1;
        }
    }
    return p;
}

BOOL func_0204ce80(s32 a, s32 b) {
    BOOL r = FALSE;
    if (data_021c47d0) {
        if (func_0204cea8(data_021c47d0, a, b) > 0) r = TRUE;
    }
    return r;
}

s32 func_0204cea8(Unk_0204cf2c_Ent *t, s32 i, s32 j) {
    s32 r = 0;
    if (func_0204cf1c(t, i)) {
        Unk_0204cf2c_Ent *e = &t[i];
        u16 *d = e->data;
        if (d && j < e->count) {
            r = d[j];
        }
    }
    return r;
}

s32 func_0204cedc(Unk_0204cf2c_Ent *t, s32 i, s32 j) {
    s32 r = 0;
    if (func_0204cf1c(t, i)) {
        Unk_0204cf2c_Ent *e = &t[i];
        u16 *d = e->data;
        if (d && j < e->count) {
            s32 k;
            for (k = 0; k < j; d++, k++) {
                r += *d;
            }
        }
    }
    return r;
}

BOOL func_0204cf1c(Unk_0204cf2c_Ent *t, s32 i) {
    if (i >= 0 && i < 4) return TRUE;
    return FALSE;
}

void func_0204cf2c(Unk_0204cf2c_Ent *t, void *heap) {
    s32 i;
    for (i = 0; i < 4; i++) {
        if (t->data) {
            func_020e85fc(heap, t->data);
            t->data = 0;
            t->count = 0;
            t++;
        }
    }
}

BOOL func_0204cf58(Unk_0204cf2c_Ent *t, void *heap) {
    Unk_020ca2f4_Ent *e = data_020ca2f4;
    s32 i = 0;
    s32 size = 0;
    BOOL r = TRUE;
    for (; i < 4; t++, e++, i++) {
        t->data = (u16 *)func_020641ec(e->a, heap, 4, &size);
        if (t->data) {
            t->count = (u32)size >> 1;
        } else {
            r = FALSE;
            t->count = 0;
            break;
        }
    }
    return r;
}

void func_0204cfa4(void *heap) {
    if (data_021c47d0) {
        func_0204cf2c(data_021c47d0, heap);
        func_020e85fc(heap, data_021c47d0);
        data_021c47d0 = 0;
    }
}

BOOL func_0204cfd0(void *heap) {
    BOOL r = FALSE;
    if (!data_021c47d0) {
        data_021c47d0 = (Unk_0204cf2c_Ent *)func_020e8608(heap, 0x20);
        if (data_021c47d0) {
            if (data_021c47d0) func_0204d024(data_021c47d0);
            if (func_0204cf58(data_021c47d0, heap)) {
                r = TRUE;
            } else {
                func_0204cfa4(heap);
                data_021c47d0 = 0;
            }
        }
    }
    return r;
}

void func_0204d024(Unk_0204cf2c_Ent *t) {
    s32 i;
    for (i = 0; i < 4; i++) {
        t[i].data = 0;
        t[i].count = 0;
    }
}

void func_0204d040(void *heap) {
    if (data_021c47d4) {
        func_0204d06c(data_021c47d4, heap);
        func_020e85fc(heap, data_021c47d4);
        data_021c47d4 = 0;
    }
}

void func_0204d06c(Unk_0204d0a4 *p, void *heap) {
    if (p->unk_00) {
        func_020e85fc(heap, (void *)p->unk_00);
        p->unk_00 = 0;
    }
    if (p->unk_20) {
        func_020e85fc(heap, (void *)p->unk_20);
        p->unk_20 = 0;
    }
    func_020302f8(p->unk_1c);
}

Unk_0204d0a4 *func_0204d0a4(u32 a, void *heap) {
    Unk_0204d0a4 *r = 0;
    if (!data_021c47d4) {
        data_021c47d4 = (Unk_0204d0a4 *)func_020e8618(heap, 0x24);
        if (data_021c47d4) {
            if (data_021c47d4) func_0204d280(data_021c47d4);
            if (func_0204d0f4(data_021c47d4, a, heap)) {
                r = data_021c47d4;
            } else {
                func_0204d040(heap);
            }
        }
    }
    return r;
}

BOOL func_0204d0f4(Unk_0204d0a4 *p, u32 a, void *heap) {
    BOOL r = FALSE;
    Unk_0204d0f4_Info *info;
    struct { Unk_0204d0f4_V3 v, w; } l;
    p->unk_1c = 7;
    if (!p->unk_00) {
        p->unk_00 = func_020375dc(1, heap, -4);
    }
    if (!p->unk_20) {
        p->unk_20 = (u32)func_0204ce50(heap, -4);
    }
    info = func_0204d22c((u16 *)p->unk_20, a, heap);
    if (p->unk_00 && info && p->unk_20) {
        l.v.x = 0; l.v.y = 0; l.v.z = 0;
        p->unk_04 = 1;
        p->unk_08 = 1;
        p->unk_14 = data_020c8cbc;
        p->unk_18 = data_020c8cb8;
        func_0204edf8(&p->unk_0c, &p->unk_10, p->unk_04, p->unk_08, 0, 0);
        func_02030528(p->unk_04, p->unk_08, 0, p->unk_1c);
        l.v.x = 0; l.v.z = 0;
        u32 t = func_02036eb8(func_02036c58(), info->a);
        l.w = l.v;
        func_02037674(p->unk_00, info->a, &l.w, info->b, info->c, info->d, 0, t, 0, 0, p->unk_1c);
        func_020e85fc(heap, info);
        r = TRUE;
    }
    return r;
}

BOOL func_0204d1dc(u16 *dst, u32 b, void *heap) {
    s32 x, y;
    u32 h;
    BOOL r;
    x = 2;
    y = 0;
    r = FALSE;
    h = func_0207bf60(&data_021dfd8c, b);
    if (h) func_0207f07c(h, &x, &y);
    if (h) {
        if (func_0204cdf0(dst, x, y, heap)) {
            func_0207e568(h, dst);
            r = TRUE;
        }
    }
    return r;
}

Unk_0204d0f4_Info *func_0204d22c(u16 *dst, u32 b, void *heap) {
    Unk_0204d0f4_Info *p = func_0204ee64(1, heap);
    if (p) {
        u32 h = func_0207bf60(&data_021dfd8c, b);
        if (h) {
            p->a = func_0207f04c(h);
        } else {
            p->a = 0x1010;
        }
        func_0204d1dc(dst, b, heap);
        p->b = (u32)dst;
        p->c = 0;
        p->d = 0;
    }
    return p;
}

void func_0204d280(Unk_0204d0a4 *p) {
    p->unk_04 = 0;
    p->unk_08 = 0;
    p->unk_0c = 0;
    p->unk_10 = 0;
    p->unk_00 = 0;
    p->unk_1c = 7;
    p->unk_20 = 0;
}

void func_0204d294(Unk_0204d0a4 *p, void *heap) {
    if (p->unk_00) {
        func_020e85fc(heap, (void *)p->unk_00);
        p->unk_00 = 0;
    }
}

BOOL func_0204d2b0(Unk_0204d0a4 *p, s32 i, void *heap) {
    BOOL r = FALSE;
    Unk_0204d0f4_Info *info;
    struct { Unk_0204d0f4_V3 v, w; } l;
    p->unk_1c = i + 2;
    if (!p->unk_00) {
        p->unk_00 = func_020375dc(1, heap, 4);
    }
    info = (Unk_0204d0f4_Info *)func_020604f8(&data_021e58a8, i, heap);
    if (p->unk_00 && info) {
        l.v.x = 0; l.v.y = 0; l.v.z = 0;
        p->unk_04 = 1;
        p->unk_08 = 1;
        p->unk_14 = data_020c8cbc;
        p->unk_18 = data_020c8cb8;
        func_0204edf8(&p->unk_0c, &p->unk_10, p->unk_04, p->unk_08, 0, 0);
        func_02030528(p->unk_04, p->unk_08, 0, p->unk_1c);
        l.v.x = 0; l.v.z = 0;
        l.w = l.v;
        func_02037674(p->unk_00, info->a, &l.w, info->b, info->c, info->d, 0, 0, 0, 0, p->unk_1c);
        func_020e85fc(heap, info);
        r = TRUE;
    }
    return r;
}

void func_0204d370(Unk_0204d0a4 *p) {
    func_020302f8(p->unk_1c);
}

void func_0204d37c(Unk_0204d0a4 *p) {
    u32 h;
    func_02030528(p->unk_04, p->unk_08, 0, p->unk_1c);
    if ((u8 *)p->unk_04 > (u8 *)0 && (u8 *)p->unk_08 > (u8 *)0) {
        h = p->unk_00;
        if (h != 0) goto join;
    }
    h = 0;
join:
    if (h) {
        u32 a = func_020375d0(h);
        u32 g = data_021c621c;
        func_02036c58();
        func_02037618(h, 0, func_02036f24(a, g), p->unk_1c);
    }
}

void func_0204d3d8() {
    s32 i;
    func_020e885c(data_021c621c);
    for (i = 0; i < 5; i++) {
        if (data_021c47e8[i]) func_0204d37c(data_021c47e8[i]);
    }
}

void func_0204d40c(Unk_0204d0a4 *p, s32 i) {
    u32 v = func_020603f4(&data_021e58a8);
    if (p->unk_00) func_020375d4(p->unk_00, v);
}

void func_0204d42c() {
    s32 i;
    for (i = 0; i < 5; i++) {
        if (data_021c47e8[i]) func_0204d40c(data_021c47e8[i], i);
    }
}

void func_0204d454(void *heap) {
    s32 i;
    for (i = 0; i < 5; i++) {
        Unk_0204d0a4 **e = &data_021c47e8[i];
        if (*e) {
            func_0204d370(*e);
            func_0204d294(*e, heap);
            func_020e85fc(heap, *e);
            *e = 0;
        }
    }
    func_0205b7b0();
}

BOOL func_0204d498(void *heap) {
    BOOL r = TRUE;
    s32 i;
    func_0205b7cc();
    for (i = 0; i < 5; i++) {
        Unk_0204d0a4 **e = &data_021c47e8[i];
        if (!*e) {
            *e = (Unk_0204d0a4 *)func_020e8608(heap, 0x20);
            if (*e) {
                if (*e) func_0204d54c(*e);
                if (!func_0204d2b0(*e, i, heap)) {
                    r = FALSE;
                    break;
                }
            } else {
                r = FALSE;
                break;
            }
        }
    }
    if (!r) func_0204d454(heap);
    return r;
}

Unk_0204d0a4 *func_0204d500(s32 a) {
    Unk_0204d0a4 *r = 0;
    if (func_020b530c()) {
        r = func_0204d528(func_020b533c(a));
    }
    return r;
}

Unk_0204d0a4 *func_0204d528(s32 i) {
    Unk_0204d0a4 *r = 0;
    if (func_0206057c()) r = data_021c47e8[i];
    return r;
}

void func_0204d54c(Unk_0204d0a4 *p) {
    p->unk_04 = 0;
    p->unk_08 = 0;
    p->unk_0c = 0;
    p->unk_10 = 0;
    p->unk_00 = 0;
    p->unk_1c = 2;
}

}
