#include "types.h"

// TU210: 0x020afeb4-0x020b0774. Owns data_021ee27c (.bss, autoload_3 0x021ee27c-0x021ee284).

struct Entry {
    u16 unk_00;
    u8 pad_02[0x14];
    u8 name[0x10];
    u16 slots[0x10];
};

struct Base {
    Entry entries[16];
    u16 pad_460;
    u16 mask;
};

struct B8 {
    u8 b[8];
};

struct Vec3 {
    s32 x, y, z;
};

struct Node {
    u16 unk_00;
    s16 x;
    s16 y;
    s16 z;
    u8 pad_08[8];
    u32 unk_10;
};

struct List {
    u32 unk_00;
    Node *nodes;
};

extern "C" {
extern Base data_021ec31c;
u32 data_021ee27c[2];  // .bss, autoload_3 0x021ee27c
extern u8 data_020e2f84[];
extern u32 OVERLAY_127_ID[];
extern u32 data_020e2f04[];
extern u8 data_021e7f8c[];

// external
void _ZN12Unk_020d5d8413func_02002cf8EPvS0_S0_S0_S0_(u32 a, u32 b, Vec3 *v, void *c, u32 d);
u64 func_01ffa6b4(void);
BOOL func_02051218(const u8 *a, const u8 *b, s32 len);
void func_0205125c(void *dst, u32 size);
s32 func_02051268(const void *src, void *dst, u32 size);
Entry *_ZN12Unk_0208f23813func_0208f154Ev(void *p);
BOOL _ZN12Unk_0208f23813func_0208f1c0Ev(void *p);
void func_020b0a30(void *e);
BOOL func_020b0980(Base *b, s32 i);
void func_020b0998(Base *b, s32 i);
void func_020b09ac(Base *b, s32 i);
void func_020b0a18(void *dst, void *src);
s32 func_020b8ec0(void *a, s32 x, s32 y);
s32 func_020b8f98(void);
s32 func_020b8f8c(void);
void func_020a78a4(void *buf, const void *src, s32 len);
void _ZN12Unk_020e2a7813func_020a7aa0EP12Unk_020e2a60ii(void *self, void *buf, s32 a, s32 b);
void _ZN12Unk_020e2f5cC2Ev(void *buf);
void _ZN12Unk_020e2f5cD1Ev(void *buf);
void func_0209d498(void *p);
s32 func_02002580(void *a, u32 b, u32 c, u32 d, u32 e);
void func_020641b4(u32 a, void *b, u32 c);
void *func_020b87d0(void *p);
u32 func_02063b8c(u32 n);
void func_0204eee4(u32 a);
void func_0204ef2c(u32 a);
void *func_0209750c(void);
u8 *_ZN12Unk_0209865c13func_0209888cEv(void *p);
// 0x02291f60 exists in every overlay of the slot (relocs.txt: module:overlays(113,123,...)); the
// call names the first one's symbol.
s32 _ZN18Unk_ov113_02293640D1Ev(void *p);
void func_02116048(const void *src, void *dst, u32 size);
u64 func_02132ef8(u64 a, u64 b);

// this file
void func_020b04f8(Entry *e, s32 idx, s32 flag);
BOOL func_020b0074(s32 n);
s32 func_020b005c(s32 x, s32 y);
void func_020b0008(u16 *p, u32 slot, s32 r);
void func_020affd4(u16 *p, Entry *e, s32 r);
void func_020affac(u16 *p);
BOOL func_020b0084(const u8 *name, s32 skip);
BOOL func_020b01b0(Entry *e);
void func_020b01f8(void);
void func_020b0208(void);
Base *func_020b05bc(void);
Entry *func_020b04a4(s32 i);
Entry *func_020b053c(s32 i);
s32 func_020b058c(void);
void func_020b05c4(u16 *p, s32 *a, s32 *b);
BOOL func_020b02bc(s32 x, s32 y, s32 px, s32 py);
BOOL func_020b0708(s32 n);
void func_020b073c(s32 n);
void func_020b0764(void);
u8 *func_020b0774(s32 n);

inline void setv(Vec3 *v, s32 x, s32 y, s32 z) {
    v->x = x;
    v->y = y;
    v->z = z;
}

void func_020b0764(void) {
    data_021ee27c[1] = 0;
    data_021ee27c[0] = 0;
}

void func_020b073c(s32 n) {
    if (n >= 0x20) {
        data_021ee27c[1] |= 1 << (n - 0x20);
    } else {
        data_021ee27c[0] |= 1 << n;
    }
}

BOOL func_020b0708(s32 n) {
    if (n >= 0x20) {
        return (data_021ee27c[1] & (1 << (n - 0x20))) != 0;
    }
    return (data_021ee27c[0] & (1 << n)) != 0;
}

void func_020b05c4(u16 *p, s32 *outA, s32 *outB) {
    u8 *d;
    s32 minv, maxv, i, j, t, a, b;
    s32 f1, f2, f3, f4;
    func_020b0764();
    minv = 0x20;
    maxv = -1;
    for (i = 0; i < 16; i++) {
        if (p[i] != 0xffff) {
            d = func_020b0774(p[i]);
            for (j = 0; j < 4; j++) {
                u8 x = d[0];
                u8 y = d[1];
                d += 2;
                if (x != 0xff) {
                    func_020b073c(x);
                    if (minv > y) {
                        minv = y;
                    }
                    if (maxv < y) {
                        maxv = y;
                    }
                } else {
                    j = 4;
                }
            }
        }
    }
    t = 0;
    while (t < 0x40 && !func_020b0708(t)) {
        t++;
    }
    a = (t - 1) & 0x3f;
    b = t;
    f1 = 0;
    f2 = 0;
    while (!f1 && a != b) {
        if (func_020b0708(a)) {
            f2 = 0;
            b = a;
        } else if (f2) {
            f1 = 1;
        } else {
            f2 = 1;
        }
        a = (a - 1) & 0x3f;
    }
    if (f1) {
        a = (t + 1) & 0x3f;
        f3 = 0;
        f4 = 0;
        while (!f3 && a != t) {
            if (func_020b0708(a)) {
                f4 = 0;
                t = a;
            } else if (f4) {
                f3 = 1;
            } else {
                f4 = 1;
            }
            a = (a + 1) & 0x3f;
        }
    } else {
        t = 0;
        b = 0;
    }
    if (b <= t) {
        *outA = (b + t + 1) * 4;
    } else {
        *outA = ((b + 0x41 + t) * 4) & 0x1ff;
    }
    *outB = (minv * 8 + (maxv * 8 + 8)) >> 1;
}

Base *func_020b05bc(void) {
    return &data_021ec31c;
}

s32 func_020b058c(void) {
    Base *base = func_020b05bc();
    s32 i;
    for (i = 0; i < 16; i++) {
        if (!func_020b0980(base, i)) {
            return i;
        }
    }
    return -1;
}

s32 func_020b0564(void) {
    Base *base = func_020b05bc();
    s32 i, n;
    i = n = 0;
    for (; i < 16; i++) {
        if (!func_020b0980(base, i)) {
            n++;
        }
    }
    return n;
}

Entry *func_020b053c(s32 idx) {
    Base *base = func_020b05bc();
    if (func_020b0980(base, idx) == 0) {
        return NULL;
    }
    return base->entries + idx;
}

void func_020b04f8(Entry *e, s32 idx, s32 flag) {
    Base *base = func_020b05bc();
    func_020b09ac(base, idx);
    func_020b0a18(&base->entries[idx], e);
    if (flag) {
        base->mask |= 1 << idx;
    }
}

void func_020b04cc(s32 idx) {
    Base *base = func_020b05bc();
    func_020b0998(base, idx);
    base->mask &= ~(1 << idx);
}

Entry *func_020b04a4(s32 idx) {
    Base *base = func_020b05bc();
    if (func_020b0980(base, idx) == 0) {
        return NULL;
    }
    return base->entries + idx;
}

void func_020b0450(u8 *dst) {
    u8 *src = _ZN12Unk_0209865c13func_0209888cEv(func_0209750c());
    *(u16 *)dst = *(u16 *)src;
    *(B8 *)(dst + 2) = *(B8 *)(src + 2);
    *(u16 *)(dst + 0xa) = *(u16 *)(src + 0xa);
    *(B8 *)(dst + 0xc) = *(B8 *)(src + 0xc);
    *(s8 *)(dst + 0x14) = *(s8 *)(src + 0x14);
    dst[0x15] = src[0x15];
}

void func_020b0428(u8 *src, s32 idx) {
    func_02051268(src, func_020b05bc()->entries[idx].name, 16);
}

void func_020b03f0(u8 *dst, s32 idx) {
    Base *base = func_020b05bc();
    func_0205125c(dst, 16);
    if (func_020b0980(base, idx)) {
        func_02051268(base->entries[idx].name, dst, 16);
    }
}

BOOL func_020b03a0(void *self, s32 idx) {
    u32 buf[9];
    Entry *e;
    if (!func_020b0980(func_020b05bc(), idx)) {
        return FALSE;
    }
    e = func_020b053c(idx);
    _ZN12Unk_020e2f5cC2Ev(buf);
    func_020a78a4(buf, e->name, 16);
    _ZN12Unk_020e2a7813func_020a7aa0EP12Unk_020e2a60ii(self, buf, 0, 0);
    _ZN12Unk_020e2f5cD1Ev(buf);
    return TRUE;
}

s32 func_020b0334(s32 *out) {
    Base *base;
    s32 i;
    *out = -1;
    base = func_020b05bc();
    for (i = 0; i < 16; i++) {
        u32 bit = 1 << i;
        if (base->mask & bit) {
            if (func_020b0980(base, i)) {
                if (*out == -1) {
                    *out = i;
                } else {
                    return 2;
                }
            } else {
                base->mask &= ~bit;
            }
        }
    }
    if (*out != -1) {
        return 1;
    }
    return 0;
}

void func_020b031c(void) {
    func_020b05bc()->mask = 0;
}

void func_020b02ec(void *a, s32 idx) {
    s32 x, y;
    Entry *e = func_020b053c(idx);
    func_020b05c4(e->slots, &x, &y);
    x -= 0x80;
    y -= 0x60;
    func_020b8ec0(a, x, y);
}

BOOL func_020b02bc(s32 x, s32 y, s32 px, s32 py) {
    if (py < y + 0x10 || py > y + 0x88) {
        return FALSE;
    }
    if (px < x + 0x40 || px > x + 0xc0) {
        return FALSE;
    }
    return TRUE;
}

s32 func_020b0218(void) {
    u32 tm[2];
    s32 d, px, py, x, y, dx, i, bestd, dy, best;
    tm[0] = 0;
    tm[1] = 0;
    func_0209d498(tm);
    if (((u8 *)tm)[2] >= 6 && ((u8 *)tm)[2] < 0x12) {
        return -1;
    }
    x = func_020b8f98();
    y = func_020b8f8c();
    best = -1;
    for (i = 0; i < 16; i++) {
        Entry *e = func_020b053c(i);
        if (e) {
            func_020b05c4(e->slots, &px, &py);
            if (px < x) {
                px += 0x200;
            }
            if (func_020b02bc(x, y, px, py)) {
                dy = py - (y + 0x60);
                dx = px - (x + 0x80);
                d = dx * dx + dy * dy;
                if (best == -1 || bestd > d) {
                    best = i;
                    bestd = d;
                }
            }
        }
    }
    return best;
}

void func_020b0208(void) {
    func_0204ef2c((u32)OVERLAY_127_ID);
}

void func_020b01f8(void) {
    func_0204eee4((u32)OVERLAY_127_ID);
}

BOOL func_020b01b0(Entry *e) {
    s32 idx = func_020b058c();
    s32 r;
    if (idx == -1) {
        return FALSE;
    }
    if (func_020b0084(e->name, -1)) {
        return FALSE;
    }
    func_020b0208();
    r = _ZN18Unk_ov113_02293640D1Ev(e);
    func_020b01f8();
    if (r) {
        func_020b04f8(e, idx, 1);
    }
    return r;
}

void func_020b013c(void) {
    Entry *e;
    Base *base;
    s32 n, i;
    e = _ZN12Unk_0208f23813func_0208f154Ev(data_021e7f8c);
    func_020b0a30(e);
    n = 0;
    base = func_020b05bc();
    for (i = 0; i < 16; i++) {
        if (func_020b0980(base, i)) {
            n++;
        }
    }
    if (n != 0) {
        n = func_02063b8c(n);
        for (i = 0; i < 16; i++) {
            if (func_020b0980(base, i)) {
                if (n > 0) {
                    n--;
                } else {
                    func_020b0a18(e, func_020b053c(i));
                    break;
                }
            }
        }
    }
}

void func_020b00c4(void) {
    Entry *e;
    s32 i, j;
    s32 count;
    u8 *p = data_021e7f8c;
    if (_ZN12Unk_0208f23813func_0208f1c0Ev(p)) {
        e = _ZN12Unk_0208f23813func_0208f154Ev(p);
        count = 0;
        for (i = 0; i < 16; i++) {
            if (e->slots[i] != 0xffff) {
                count++;
                for (j = 0; j < i; j++) {
                    if (e->slots[i] == e->slots[j]) {
                        func_020b0a30(e);
                        return;
                    }
                }
            }
        }
        if (count != 0) {
            if (func_020b01b0(e)) {
                func_020b0a30(e);
            }
        }
    }
}

BOOL func_020b0084(const u8 *name, s32 skip) {
    s32 i;
    for (i = 0; i < 16; i++) {
        if (skip != i) {
            Entry *e = func_020b053c(i);
            if (e) {
                if (func_02051218(name, e->name, 16)) {
                    return TRUE;
                }
            }
        }
    }
    return FALSE;
}

BOOL func_020b0074(s32 n) {
    if (n >= 0x13 && n <= 0x1f) {
        return TRUE;
    }
    return FALSE;
}

s32 func_020b005c(s32 x, s32 y) {
    s32 off = 0;
    if (x >= 0x20) {
        off += 0x400;
        x -= 0x20;
    }
    return off + (x + y * 32);
}

void func_020b0008(u16 *p, u32 slot, s32 r) {
    u8 *d = func_020b0774(slot);
    s32 j, i;
    j = i = 0;
    r &= 0xf;
    for (; j < 4; j++) {
        u8 x, y;
        s32 idx;
        if (d[i] == 0xff) {
            break;
        }
        x = d[i];
        y = d[i + 1];
        i += 2;
        idx = func_020b005c(x, y);
        p[idx] = (p[idx] & 0xfff) | (r << 12);
    }
}

void func_020affd4(u16 *p, Entry *e, s32 r) {
    s32 i;
    for (i = 0; i < 16; i++) {
        if (e->slots[i] != 0xffff) {
            func_020b0008(p, e->slots[i], r);
        }
    }
}

void func_020affac(u16 *p) {
    s32 i;
    for (i = 0; i < 16; i++) {
        Entry *e = func_020b04a4(i);
        if (e) {
            func_020affd4(p, e, 7);
        }
    }
}

void func_020aff60(u16 *p) {
    s32 i;
    func_020affac(p);
    for (i = 0; i < 0x800; p++, i++) {
        if (func_020b0074(*p & 0x3ff)) {
            if (((*p & 0xf000) >> 12) != 7) {
                *p = 0x4010;
            }
        }
    }
}

BOOL func_020afeb4(List *self, u8 *idxp, u64 start) {
    s32 i;
    BOOL result;
    Node *n;
    if (idxp != NULL) {
        i = *idxp;
    } else {
        i = 0;
    }
    n = &self->nodes[i];
    result = TRUE;
    while (TRUE) {
        Vec3 v;
        setv(&v, (n->x << 12) >> 4, (n->y << 12) >> 4, (n->z << 12) >> 4);
        _ZN12Unk_020d5d8413func_02002cf8EPvS0_S0_S0_S0_(n->unk_00, n->unk_10, &v, &n->pad_08[0], 0);
        n++;
        i++;
        if (idxp != NULL) {
            (*idxp)++;
        }
        if (i >= ((u8 *)self)[1]) {
            goto end;
        }
        if (idxp != NULL) {
            if ((u32)(((func_01ffa6b4() - start) << 6) / 0x82ea) > 0x28) {
                result = FALSE;
                goto end;
            }
        }
    }
end:
    return result != 0;
}
}
