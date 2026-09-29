#include "types.h"

struct Vec3 {
    s32 x, y, z;
};

struct StaticVec {
    s32 x, y, z;
    StaticVec(s32 a, s32 b, s32 c) : x(a), y(b), z(c) {}
    ~StaticVec();
};

static inline void setVec(Vec3* o, s32 x, s32 y, s32 z) {
    o->x = x;
    o->y = y;
    o->z = z;
}

struct Bits14 {
    u8 pad : 2;
    u8 v : 6;
};

static inline BOOL is0(u8 v) {
    if (v == 0) return TRUE;
    return FALSE;
}
static inline BOOL is1(u8 v) {
    if (v == 1) return TRUE;
    return FALSE;
}

// 0x1c-byte table entry
struct TileEntry {
    u8 type;      // 0x00
    u8 flag;      // 0x01
    s16 unk_02;   // 0x02
    Vec3 pos;     // 0x04
    u32 unk_10;   // 0x10
    u8 unk_14;    // 0x14
    u8 unk_15;    // 0x15
    s16 unk_16;   // 0x16
    u8 unk_18;    // 0x18
};

// 0x15-byte record
struct TileInfo {
    Vec3 pos;     // 0x00
    u32 unk_0c;   // 0x0c
    s16 unk_10;   // 0x10
    u8 unk_12;    // 0x12
    s8 unk_13;    // 0x13
    s8 unk_14;    // 0x14
};

struct TileTable {
    TileEntry* entries;
    u8 count;
};

struct TileData {
    u32 unk_00, unk_04, unk_08;
    TileTable* table;
};

struct Obj7 {
    u8 pad[0x64];
    u32 unk_64;
};

extern "C" {
extern TileInfo data_021ef348;
extern TileInfo data_021ef360;
extern TileData* data_021ef2f0;
extern s32 data_020c8cc0;
extern Obj7* data_020cbb18;
extern u8 data_020e416c;
extern u8 data_020e4170;
extern u8 data_020e4174;
extern u16 data_020e2974;
extern u8 data_021e5890[];
extern u8 data_021ef3bc[];

void* func_020b4934();
u8 func_020b49a8(u8* p);
BOOL func_020b4fe4(u32 id);
s32 func_020b4d38(s32 a, s32 id, u8* type, Vec3* pos, u32* w, s16* s, s32* x, s32* y, u8* p, u8* q);
s32 func_020b4c64(s32 a, s32 id, u8* type, Vec3* pos, u32* w, s16* s, u8* p, u8* q, s32* ox, s32* oy);
BOOL func_020b4f18(struct TileEntry* e, u8 id, Vec3* v, u32 w, s16 s, u8 p, u8 q);
void func_020b5014(TileInfo* info, s32 id, Vec3* pos, u32 w, s16 s, s32 p, s32 q);
u32 func_0209501c(Vec3* a, s16* b);
void func_0204ee10(s32* a, s32* b, Vec3* c);
void func_0204edd8(Vec3* out, Vec3* in);
void func_020a4414(s32 a, s32 b, s32 c, s32 d);
s32 func_0209c098(s32 a);
BOOL func_020b52e4(u32 a);
s32 func_020b5298(u32 a);
void* func_0204da0c();
BOOL func_0204d700(void* o, Vec3* v, s32* a, s32* b);
BOOL func_0204d684(void* o, Vec3* v, s32* a, s32* b);
BOOL func_02072e88(Obj7* o, u32 v);
u8 func_020b5000(TileInfo* i);
Vec3* func_020b5010(TileInfo* i);
u32 func_020b500c(TileInfo* i);
s32 func_020b5004(TileInfo* i);
s32 func_020b4ff8(TileInfo* i);
s32 func_020b4ff0(TileInfo* i);
u32 func_020b50e8();
BOOL func_020b5130(u32 a);
BOOL func_020b51b8(u32 a);
s32 func_020b51e8(u32 a);
BOOL func_020b5210(u32 a);
s32 func_020b5240(u32 a);
BOOL func_020b5178(u32 a);
BOOL func_020b5198(u32 a);
BOOL func_020b50d0(s32 a);
BOOL func_020b5268(u32 a);
void func_020b503c(TileInfo* info);

u8 func_020b493c(TileEntry* e) { return e->unk_15; }
void func_020b4940(TileEntry* e, u8 v) { e->unk_14 = v; }
u8 func_020b4944(TileEntry* e) { return e->unk_14; }
BOOL func_020b4948(TileEntry* e) {
    if (e->flag != 0) return TRUE;
    return FALSE;
}
u32 func_020b4958(TileEntry* e) { return e->unk_10; }
s32 func_020b495c(TileEntry* e) { return e->unk_02; }
Vec3* func_020b4964(TileEntry* e) { return &e->pos; }

void func_020b4968(s32 a, s32 b) {
    if (data_020e2974 != 5) {
        func_020a4414(5, a, 3, 1);
        func_0209c098(b);
    }
}

u8 func_020b4994() { return func_020b49a8((u8*)func_020b4934()); }
u8 func_020b49a8(u8* p) { return *p; }
void func_020b49ac(u8* p) { *p = 0x3f; }
void func_020b49b4() { func_020b503c(&data_021ef360); }

BOOL func_020b49c4(s32 unused, s32 id, Vec3* pos, u32 w, s16 s, s32 p, s32 q) {
    if (func_020b4fe4(id)) {
        func_020b5014(&data_021ef360, id, pos, w, s, p, q);
        return TRUE;
    }
    return FALSE;
}
BOOL func_020b4aa8(s32 unused, s32 id, Vec3* pos, u32 w, s16 s, s32 p, s32 q) {
    if (func_020b4fe4(id)) {
        func_020b5014(&data_021ef348, id, pos, w, s, p, q);
        return TRUE;
    }
    return FALSE;
}
BOOL func_020b4b68(s32 unused, s32 id, u32* type, s16* s) {
    *type = 0;
    *s = 0;
    if (id != -1) {
        TileData* d = data_021ef2f0;
        if (d) {
            TileTable* t = d->table;
            if (t) {
                TileEntry* e = t->entries;
                if (e) {
                    u8 n = t->count;
                    if (id >= 0 && id < n) {
                        TileEntry* p = &e[id];
                        if (type) *type = p->unk_18;
                        if (s) *s = p->unk_16;
                        return TRUE;
                    }
                }
            }
        }
    }
    return FALSE;
}

BOOL func_020b4aec(s32 a, s32 id, Vec3* out, Vec3* in) {
    u32 type;
    s16 s;
    Vec3 t;
    if (func_020b4b68(a, id, &type, &s)) {
        func_0204edd8(&t, in);
        setVec(out, t.x, in->y, t.z);
        if (s == 0 || s == -0x8000) {
            out->x = in->x;
            return TRUE;
        } else if (s == 0x4000 || s == -0x4000) {
            out->z = in->z;
            return TRUE;
        }
        return TRUE;
    }
    out->x = in->x;
    out->y = in->y;
    out->z = in->z;
    return FALSE;
}

BOOL func_020b4f18(TileEntry* e, u8 id, Vec3* v, u32 w, s16 s, u8 p, u8 q) {
    if (e->type == 0x3f) {
        e->type = id;
        e->pos.x = v->x;
        e->pos.y = v->y;
        e->pos.z = v->z;
        e->unk_10 = w;
        e->unk_02 = s;
        e->flag = 0;
        e->unk_14 = p;
        e->unk_15 = q;
        return TRUE;
    }
    return FALSE;
}

BOOL func_020b4f58(TileEntry* e, u8 id, u8 p, u8 q) {
    if (e->type == 0x3f) {
        e->type = id;
        e->unk_14 = p;
        e->unk_15 = q;
        e->flag = 1;
        return TRUE;
    }
    return FALSE;
}

BOOL func_020b4f78(TileEntry* e, u8 id) {
    if (e->type == 0x3f) {
        e->type = id;
        e->flag = 1;
        return TRUE;
    }
    return FALSE;
}

void func_020b4f8c(TileEntry* e, u8 id, Vec3* v, u32 w, s16 s, u8 p, u8 q, s16 r, u8 t) {
    e->type = id;
    e->pos.x = v->x;
    e->pos.y = v->y;
    e->pos.z = v->z;
    e->unk_10 = w;
    e->unk_02 = s;
    e->unk_14 = p;
    e->unk_15 = q;
    e->unk_16 = r;
    e->unk_18 = t;
}

void func_020b4fc0() {}

void func_020b4fc4(TileEntry* e) {
    e->type = 0x3f;
    e->pos.x = 0;
    e->pos.y = 0;
    e->pos.z = 0;
    e->unk_10 = 0;
    e->unk_02 = 0;
    e->flag = 1;
    e->unk_14 = 2;
    e->unk_15 = 2;
    e->unk_16 = 0;
    e->unk_18 = 0;
}

BOOL func_020b4fe4(u32 id) {
    if (id < 0x33) return TRUE;
    return FALSE;
}

s32 func_020b4ff0(TileInfo* i) { return i->unk_14; }
s32 func_020b4ff8(TileInfo* i) { return i->unk_13; }
u8 func_020b5000(TileInfo* i) { return i->unk_12; }
s32 func_020b5004(TileInfo* i) { return i->unk_10; }
u32 func_020b500c(TileInfo* i) { return i->unk_0c; }
Vec3* func_020b5010(TileInfo* i) { return &i->pos; }

void func_020b5014(TileInfo* i, s32 id, Vec3* v, u32 w, s16 s, s32 p, s32 q) {
    i->unk_12 = id;
    i->pos.x = v->x;
    i->pos.y = v->y;
    i->pos.z = v->z;
    i->unk_0c = w;
    i->unk_10 = s;
    i->unk_13 = p;
    i->unk_14 = q;
}

void func_020b503c(TileInfo* i) {
    static StaticVec v(0x30000, 0, 0x30000);
    func_020b5014(i, 0, (Vec3*)&v, 0x800000, 0, -1, -1);
}

void func_020b50a0() {}

TileInfo* func_020b50a4(TileInfo* i) {
    func_020b503c(i);
    return i;
}

u8* func_020b50b4() { return data_021ef3bc; }

BOOL func_020b50bc() { return func_020b50d0(((Bits14*)&data_021e5890[0x14])->v); }
BOOL func_020b50d0(s32 a) {
    if (a < 9) return FALSE;
    return TRUE;
}
u8 func_020b50dc() { return data_020e4174; }
u32 func_020b50e8() { return data_020e4170; }

BOOL func_020b50f4() {
    u8 v = data_020e416c;
    if (is0(v) || is1(v)) return func_020b5130(func_020b50e8());
    return FALSE;
}

BOOL func_020b5130(u32 a) {
    if (func_020b52e4(a) || a == 0x2c || a == 0x2d || a == 0x2e || a == 0x2f || (u8)(a + 0xf4) <= 2) return FALSE;
    return TRUE;
}

BOOL func_020b5164() { return func_020b5178(func_020b50e8()); }
BOOL func_020b5178(u32 a) {
    if (a == 0x31) return TRUE;
    return FALSE;
}
BOOL func_020b5184() { return func_020b5198(func_020b50e8()); }
BOOL func_020b5198(u32 a) {
    if (a == 0) return TRUE;
    return FALSE;
}
BOOL func_020b51a4() { return func_020b51b8(func_020b50e8()); }
BOOL func_020b51b8(u32 a) {
    if (func_020b51e8(a) != -1) return TRUE;
    return FALSE;
}
s32 func_020b51d4() { return func_020b51e8(func_020b50e8()); }
s32 func_020b51e8(u32 a) {
    if (a >= 0x11 && a <= 0x18) return a - 0x11;
    return -1;
}
BOOL func_020b51fc() { return func_020b5210(func_020b50e8()); }
BOOL func_020b5210(u32 a) {
    if (func_020b5240(a) != -1) return TRUE;
    return FALSE;
}
s32 func_020b522c() { return func_020b5240(func_020b50e8()); }
s32 func_020b5240(u32 a) {
    if (a >= 0x20 && a <= 0x29) return a - 0x20;
    return -1;
}
BOOL func_020b5254() { return func_020b5268(func_020b50e8()); }
BOOL func_020b5268(u32 a) {
    if (func_020b5298(a) != -1) return TRUE;
    return FALSE;
}

void func_020b4a08(s32 unused, s32 add) {
    static s32 minZ = data_020c8cc0 + 0x1000;
    s16 s;
    s32 p, q;
    Vec3 v;
    u32 r = func_0209501c(&v, &s);
    p = 0;
    q = 0;
    func_0204ee10(&p, &q, &v);
    if (func_020b50e8() == 0xb && v.z < minZ) v.z = minZ;
    v.z += add;
    func_020b4aa8((s32)func_020b4934(), func_020b50e8(), &v, (r << 22) & 0x3fc00000, s, p, q);
}


s32 func_020b4d38(s32 a, s32 id, u8* type, Vec3* pos, u32* w, s16* s, s32* x, s32* y, u8* p, u8* q) {
    if (id != -1) {
        TileData* d = data_021ef2f0;
        if (d) {
            TileTable* t = d->table;
            if (t) {
                TileEntry* entries = t->entries;
                if (entries) {
                    u8 n = t->count;
                    if (id >= 0 && id < n) {
                        TileEntry* e = &entries[id];
                        void* o = func_0204da0c();
                        s32 va, vb;
                        Vec3 v;
                        switch (entries[id].type) {
                        case 0x3e:
                            if (func_0204d700(o, &v, &va, &vb)) {
                                v.z += 0x1000;
                                *type = 0;
                                pos->x = v.x;
                                pos->y = v.y;
                                pos->z = v.z;
                                *w = 0xf000000;
                                *s = 0;
                                *x = va;
                                *y = vb;
                                *p = e->unk_14;
                                *q = e->unk_15;
                            }
                            return 3;
                        case 0x3d:
                            if (func_0204d684(o, &v, &va, &vb)) {
                                v.z += 0x1000;
                                *type = 0;
                                pos->x = v.x;
                                pos->y = v.y;
                                pos->z = v.z;
                                *w = 0xf000000;
                                *s = 0;
                                *x = va;
                                *y = vb;
                                *p = e->unk_14;
                                *q = e->unk_15;
                            }
                            return 3;
                        case 0x3f:
                            *type = func_020b5000(&data_021ef348);
                            {
                                Vec3* src = func_020b5010(&data_021ef348);
                                pos->x = src->x;
                                pos->y = src->y;
                                pos->z = src->z;
                            }
                            *w = func_020b500c(&data_021ef348);
                            *s = func_020b5004(&data_021ef348);
                            *x = func_020b4ff8(&data_021ef348);
                            *y = func_020b4ff0(&data_021ef348);
                            *p = e->unk_14;
                            *q = e->unk_15;
                            return 2;
                        case 0x3c:
                            *type = func_020b5000(&data_021ef360);
                            {
                                Vec3* src = func_020b5010(&data_021ef360);
                                pos->x = src->x;
                                pos->y = src->y;
                                pos->z = src->z;
                            }
                            *w = func_020b500c(&data_021ef360);
                            *s = func_020b5004(&data_021ef360);
                            *x = func_020b4ff8(&data_021ef360);
                            *y = func_020b4ff0(&data_021ef360);
                            *p = e->unk_14;
                            *q = e->unk_15;
                            return 3;
                        default:
                            return 1;
                        }
                    }
                }
            }
        }
    }
    return 1;
}

s32 func_020b4c64(s32 a, s32 id, u8* type, Vec3* pos, u32* w, s16* s, u8* p, u8* q, s32* ox, s32* oy) {
    s32 x, y;
    s32 r = func_020b4d38(a, id, type, pos, w, s, &x, &y, p, q);
    if (ox) *ox = x;
    if (oy) *oy = y;
    if (r == 1) {
        if (id != -1) {
            TileData* d = data_021ef2f0;
            if (d) {
                TileTable* t = d->table;
                if (t) {
                    TileEntry* entries = t->entries;
                    if (entries) {
                        u8 n = t->count;
                        if (id >= 0 && id < n) {
                            TileEntry* e = &entries[id];
                            u8 ty = e->type;
                            if (e->pos.y == 0) e->pos.y = 0x200;
                            if (func_02072e88(data_020cbb18, data_020cbb18->unk_64) && ty == 7) ty = 8;
                            *type = ty;
                            pos->x = e->pos.x;
                            pos->y = e->pos.y;
                            pos->z = e->pos.z;
                            *w = e->unk_10;
                            *s = e->unk_02;
                            *p = e->unk_14;
                            *q = e->unk_15;
                            return r;
                        }
                    }
                }
            }
        }
        return 0;
    }
    return r;
}

BOOL func_020b4bbc(s32 a, s32 id) {
    u8 t, u, v;
    s16 s;
    s32 w, x, y;
    Vec3 vec;
    s32 r = func_020b4c64(a, id, &t, &vec, (u32*)&w, &s, &u, &v, &x, &y);
    switch (r) {
    case 0:
        goto fail;
    case 2:
        func_020b5014(&data_021ef348, t, &vec, w, s, x, y);
        break;
    case 3:
        func_020b5014(&data_021ef360, t, &vec, w, s, x, y);
        break;
    }
    if (func_020b4f18((TileEntry*)a, t, &vec, w, s, u, v)) return TRUE;
fail:
    return FALSE;
}

}
