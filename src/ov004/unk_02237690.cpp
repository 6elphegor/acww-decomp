#include "types.h"
#include "Unk_020d8c7c.h"

struct Unk_ov004_022376f8_V3 {
    s32 x, y, z;
};

struct Unk_ov004_022376f8_Mtx {
    s64 v[6];
};

struct Unk_ov004_022376f8_Obj {
    u8 pad_00[0x10];
    s32 unk_10;
    u8 pad_14[4];
    s32 unk_18;
    u8 pad_1c[0x3c - 0x1c];
    u8 unk_3c;
    u8 pad_3d[0x4c - 0x3d];
};

// {flag, s16 value} per id
struct Unk_ov004_0224ecc8 {
    u8 unk_00;
    u8 pad_01;
    s16 unk_02;
};

// element type: has a polymorphic sub-object at +0 (vtable 0x0224ec70)
class Unk_ov004_0224ec70 {
public:
    Unk_ov004_0224ec70();
    virtual ~Unk_ov004_0224ec70();

    /* 0x04 */ u8 pad_04[4];
    /* 0x08 */ s32 unk_08;
    /* 0x0c */ u8 pad_0c[0x18 - 0x0c];
    /* 0x18 */ s32 *unk_18;
    /* 0x1c */ u8 pad_1c[4];
};

class Unk_ov004_022376f8 {
public:
    Unk_ov004_022376f8();
    ~Unk_ov004_022376f8();

    /* 0x000 */ Unk_ov004_0224ec70 unk_00;
    /* 0x020 */ u8 unk_20;
    /* 0x021 */ u8 pad_21[3];
    /* 0x024 */ void *unk_24;
    /* 0x028 */ u8 pad_28[0x34 - 0x28];
    /* 0x034 */ Unk_ov004_022376f8_V3 unk_34;
    /* 0x040 */ u8 pad_40[0x68 - 0x40];
    /* 0x068 */ u8 unk_68[0xb0 - 0x68];
    /* 0x0b0 */ u8 unk_b0[0x114 - 0xb0];
    /* 0x114 */ Unk_ov004_022376f8_Mtx unk_114;
    /* 0x144 */ u8 pad_144[0x168 - 0x144];
    /* 0x168 */ u16 unk_168;
    /* 0x16a */ u8 pad_16a[0x172 - 0x16a];
    /* 0x172 */ s16 unk_172;
    /* 0x174 */ u8 pad_174[4];
    /* 0x178 */ u8 unk_178[0x18];
    /* 0x190 */ s16 unk_190;
    /* 0x192 */ s16 unk_192;
    /* 0x194 */ s16 unk_194;
    /* 0x196 */ s8 unk_196;
    /* 0x197 */ u8 pad_197;
    /* 0x198 */ s32 unk_198;
    /* 0x19c */ Unk_ov004_022376f8_Obj unk_19c;
    /* 0x1e8 */ u8 unk_1e8[0x284 - 0x1e8];
    /* 0x284 */ u8 unk_284[4];
    /* 0x288 */ u8 unk_288[0x2c8 - 0x288];
    /* 0x2c8 */ Unk_ov004_022376f8_V3 unk_2c8;
    /* 0x2d4 */ void (*unk_2d4)(Unk_ov004_022376f8 *);
};

typedef Unk_ov004_022376f8 Elem;
typedef Unk_ov004_022376f8_V3 V3;
typedef Unk_ov004_022376f8_Mtx Mtx;

extern "C" {
void *func_02135714(void *p, u32 n, u32 size, void *ctor, void *dtor);
void *func_021355f0(void *p, u32 n, u32 size, void *dtor);
void func_02000c8c();
void func_02000c98();
void func_0209c128(void *p);
void func_0209c364(void *p);
void func_02054e24(void *p);
void func_02088bb0(void *p);
void func_020548a0(void *p);
void func_0203239c(void *p);
void func_020323b0(void *p);
void func_020548d0(void *p);
void func_02088bc8(void *p);
void func_02054e3c(void *p);
void func_0209c370(void *p);
void func_0209c140(void *p);
void func_0209c0c8(void *p);
void func_0209c15c(void *p);
s32 func_0209c0ac(void *p);
u32 func_02106020(u32 a, u32 b);
void func_020547cc(void *obj, void *arg);
void func_020547e4(void *obj);
void func_020abdd0(void *p, s32 a, u32 b, u8 c);
s32 func_02070358(void *tbl, u16 *v);
void func_02031c48(void *p);
void func_02031c10(void *p);
u8 func_02031908(void *p, u32 a, u32 b, u32 c, V3 *r, s32 d, s32 e);
void func_020318cc(void *p);
void func_02088c64(void *obj, V3 *v, s32 a, s32 b, u32 mode, u32 c0, u32 z, u32 ff, u32 k);
void func_02089040(void *obj);
s32 func_02088d38(void *obj, u32 flag);
s32 func_020553cc(void *obj, void *buf, s32 z);
void func_0203ee38(V3 *a, V3 *b);
s32 func_0203ef38(V3 *out, V3 *in);
void func_020309d4(void *obj, V3 *pos, V3 *prev, s32 a, s32 b, s32 c, s32 d);
void func_020566bc(void *e);
s32 func_ov004_0223d4ac(s8 id, s32 z);
void func_02003c70(void *obj, V3 *v);
void func_020e8388(void *m, s32 x, s32 y, s32 z);
void func_020e8434(void *m, s16 a);
void func_020e8404(void *m, s32 a);
void func_020e83d4(void *m, s32 a);

extern s8 data_ov004_0224ec4c;
extern s8 data_ov004_0224ec50;
extern V3 data_ov004_0224ec5c;
extern Unk_ov004_0224ecc8 data_ov004_0224ecc8[];
extern u8 data_ov004_022523e4;
extern Elem data_ov004_022523f4[0x20];
extern Mtx data_021f47e0;
extern u8 data_021ed0a0[];
extern u8 data_0213b91c[];
extern u8 data_0213b954[];
}

// manager with vtable 0x0224ec80
class Unk_ov004_0224ec80 : public Unk_020d8c7c {
public:
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_24();

    void func_ov004_022375b8(s32 idx);
    void func_ov004_022380a4(Elem *e);
    void func_ov004_02238064(Elem *e, V3 *v);
    void func_ov004_022383d8(s8 id);
    BOOL func_ov004_02237860(u32 idx);
    void func_ov004_022378e4();
    BOOL func_ov004_0223798c(Elem *e);
    void func_ov004_02237ad8();
    BOOL func_ov004_02237d60(u32 id, u8 flag);
    void func_ov004_02237de4(Elem *e);

    /* 0x050 */ u8 unk_50[4][0x4c];
    /* 0x180 */ u8 unk_180[4];
};

Unk_ov004_022376f8::Unk_ov004_022376f8() {
    unk_24 = data_0213b91c;
    unk_24 = data_0213b954;
    func_020323b0(unk_68);
    func_020548d0(unk_b0);
    func_02135714(unk_178, 2, 0xc, (void *)func_02000c98, (void *)func_02000c8c);
    func_02088bc8(&unk_19c);
    func_02054e3c(unk_1e8);
    func_0209c370(unk_284);
    func_0209c140(unk_288);
    unk_196 = -1;
    func_0209c0c8(unk_288);
    unk_2d4 = 0;
    unk_198 = 0;
}

Unk_ov004_022376f8::~Unk_ov004_022376f8() {
    func_0209c128(unk_288);
    func_0209c364(unk_284);
    func_02054e24(unk_1e8);
    func_02088bb0(&unk_19c);
    func_021355f0(unk_178, 2, 0xc, (void *)func_02000c8c);
    func_020548a0(unk_b0);
    func_0203239c(unk_68);
}

extern "C" Elem *func_ov004_022377a0() {
    s32 i = data_ov004_0224ec50;
    if (i >= 0) {
        return &data_ov004_022523f4[i];
    }
    Elem *e = data_ov004_022523f4;
    u8 j;
    for (j = 0; j < 0x20; e++, j++) {
        if (e->unk_196 == 0x38 && e->unk_198 != 0) {
            data_ov004_0224ec50 = j;
            return e;
        }
    }
    return 0;
}

extern "C" Elem *func_ov004_02237800() {
    s32 i = data_ov004_0224ec4c;
    if (i >= 0) {
        return &data_ov004_022523f4[i];
    }
    Elem *e = data_ov004_022523f4;
    u8 j;
    for (j = 0; j < 0x20; e++, j++) {
        if (e->unk_196 == 0x37 && e->unk_198 != 0) {
            data_ov004_0224ec4c = j;
            return e;
        }
    }
    return 0;
}

BOOL Unk_ov004_0224ec80::func_ov004_02237860(u32 idx) {
    switch (idx) {
    case 0x0: case 0x1: case 0x2: case 0x3: case 0x4: case 0x5: case 0x6: case 0x7:
    case 0x8: case 0xa: case 0xe: case 0xf: case 0x19: case 0x1a: case 0x1e: case 0x20:
    case 0x24: case 0x25: case 0x2d: case 0x2e: case 0x2f: case 0x30: case 0x32: case 0x33:
    case 0x34:
        return FALSE;
    }
    return TRUE;
}

void Unk_ov004_0224ec80::func_ov004_022378e4() {
    u32 v = *(s32 *)&unk_04[4];
    v = (u8)v;
    BOOL flag = FALSE;
    u8 i = flag;
    for (; i < 0x39; i++) {
        if (v == func_ov004_02237860(i)) {
            u16 tmp;
            u16 t;
            if (i < 0x38) {
                t = 0x12b0 + i;
            } else {
                t = 0x12b0;
            }
            tmp = t;
            if (i == 0x38) {
                if (flag) {
                    func_ov004_022383d8(i);
                }
            } else if (func_02070358(data_021ed0a0, &tmp)) {
                func_ov004_022383d8(i);
                if (i == 0x23) {
                    flag = TRUE;
                }
            }
        }
    }
}

BOOL Unk_ov004_0224ec80::vfunc_0c() {
    s32 i;
    for (i = 0; i < 0x20; i++) {
        func_ov004_022375b8(i);
    }
    func_0209c15c(unk_180);
    return TRUE;
}

BOOL Unk_ov004_0224ec80::func_ov004_0223798c(Elem *e) {
    switch (e->unk_196) {
    case 0x9: case 0x10: case 0x11: case 0x12: case 0x13: case 0x14: case 0x18: case 0x19:
    case 0x1f: case 0x21: case 0x22: case 0x23: case 0x24: case 0x26: case 0x27: case 0x28:
    case 0x29: case 0x2a: case 0x2b: case 0x2c: case 0x2d: case 0x2e: case 0x2f: case 0x30:
    case 0x32: case 0x33: case 0x38:
        return FALSE;
    case 0x1e:
        if (e->unk_172 == 0x19) {
            return FALSE;
        }
        return TRUE;
    }
    return TRUE;
}

BOOL Unk_ov004_0224ec80::vfunc_24() {
    Elem *e = data_ov004_022523f4;
    s32 z0 = 0;
    s32 z1 = 0;
    u8 i = 0;
    for (; i < 0x20; e++, i++) {
        if (e->unk_198 == 2) {
            s8 id = e->unk_196;
            u8 *obj = e->unk_b0;
            if (id == 0x30) {
                V3 v = data_ov004_0224ec5c;
                func_020547cc(obj, &v);
            } else {
                func_020547cc(obj, (void *)z0);
            }
            if (func_ov004_0223798c(e)) {
                u32 r = func_02106020(func_0209c0ac(e->unk_288), z1);
                func_020abdd0(&e->unk_2c8, data_ov004_0224ecc8[id].unk_02, 0x9000, (u8)r);
            }
        }
    }
    return TRUE;
}

BOOL Unk_ov004_0224ec80::func_ov004_02237d60(u32 id, u8 flag) {
    switch (id) {
    case 0x9: case 0xb: case 0x10: case 0x11: case 0x12: case 0x13: case 0x14: case 0x19:
    case 0x1f: case 0x21: case 0x22: case 0x23: case 0x24: case 0x26: case 0x27: case 0x28:
    case 0x29: case 0x2a: case 0x2b: case 0x2c: case 0x2d: case 0x2e: case 0x2f: case 0x31:
    case 0x35:
        return FALSE;
    case 0x1e:
        if (flag != 4 && flag != 3) {
            return FALSE;
        }
        break;
    }
    return TRUE;
}

void Unk_ov004_0224ec80::func_ov004_02237ad8() {
    V3 pos[4];
    s32 sb[4];
    s32 sc[4];
    s32 z = 0;
    u8 n;
    u8 i;
    if (*(s32 *)&unk_04[4] == 1) {
        pos[0].x = 0x13000;
        pos[0].y = 0x800;
        pos[0].z = 0xe300;
        sb[0] = 0x1000;
        sc[0] = 0x1000;
        pos[1].x = 0x19400;
        pos[1].y = 0x800;
        pos[1].z = 0xf300;
        sb[1] = 0x1000;
        sc[1] = 0x1000;
        pos[2].x = 0x10800;
        pos[2].y = 0x600;
        pos[2].z = 0xc600;
        sb[2] = 0xc00;
        sc[2] = 0x600;
        pos[3].x = 0x10800;
        pos[3].y = 0x600;
        pos[3].z = 0x15700;
        sb[3] = 0xc00;
        sc[3] = 0x600;
        n = 4;
    } else {
        pos[0].x = 0x7900;
        pos[0].y = 0x800;
        pos[0].z = 0xe100;
        sb[0] = 0x3c00;
        sc[0] = 0x800;
        pos[1].x = 0xaa00;
        pos[1].y = 0x800;
        pos[1].z = 0xcd00;
        sb[1] = 0x3c00;
        sc[1] = 0x800;
        n = 2;
    }
    for (i = 0; i < n; i++) {
        u8 *obj;
        func_02088c64(obj = unk_50[i], &pos[i], sc[i], sb[i], 0x42, 0x80, z, 0xff, 0x1000);
        func_02089040(obj);
    }
}

BOOL Unk_ov004_0224ec80::vfunc_18() {
    u8 r[6];
    V3 rect[3];
    u8 obj0[0x9c];
    u8 obj1[0x9c];
    u8 obj2[0x9c];
    u8 n;
    s32 k = 0;
    s32 z = 0;
    u8 i = 0;
    u8 *q;
    func_02031c48(obj0);
    func_02031c48(obj1);
    func_02031c48(obj2);
    if (*(s32 *)&unk_04[4] == 0) {
        rect[0].x = 0x3800;
        rect[0].z = 0x8000;
        r[3] = 0;
        rect[1].x = 0x3800;
        rect[1].z = 0x1a000;
        r[4] = 0;
        rect[2].x = 0x16000;
        rect[2].z = 0x1c800;
        r[5] = 1;
        n = 3;
    } else {
        rect[0].x = 0x1c800;
        rect[0].z = 0x8000;
        r[3] = 0;
        rect[1].x = 0x1c800;
        rect[1].z = 0x1a000;
        r[4] = 0;
        n = 2;
    }
    q = &r[3];
    for (i = 0; i < n; i++) {
        if (q[i]) {
            r[i] = func_02031908(&obj0[i * 0x9c], 0x4000, 0x1000, 0x6000, &rect[i], k, k);
        } else {
            r[i] = func_02031908(&obj0[i * 0x9c], 0x1000, 0x4000, 0x6000, &rect[i], z, z);
        }
    }
    Elem *e = data_ov004_022523f4;
    data_ov004_022523e4++;
    func_ov004_02237ad8();
    for (i = 0; i < 0x20; e++, i++) {
        switch (e->unk_198) {
        case 1:
            func_ov004_022380a4(e);
            break;
        case 2:
            func_ov004_02237de4(e);
            break;
        }
    }
    for (i = 0; i < n; i++) {
        if (r[i]) {
            func_020318cc(&obj0[i * 0x9c]);
        }
    }
    func_02031c10(obj2);
    func_02031c10(obj1);
    func_02031c10(obj0);
    return TRUE;
}

struct Unk_ov004_02237de4_Buf {
    u8 pad_00[0x24];
    V3 unk_24;
};

void Unk_ov004_0224ec80::func_ov004_02237de4(Elem *e) {
    V3 prev;
    V3 p2;
    Unk_ov004_02237de4_Buf buf;
    V3 t;
    V3 out;
    V3 q;
    u32 mode;
    s32 a;
    if (e->unk_2d4 != 0) {
        Unk_ov004_022376f8_Obj *obj = &e->unk_19c;
        V3 *pos = &e->unk_2c8;
        u8 id = e->unk_196;
        prev = *pos;
        if (obj->unk_3c != 0) {
            pos->x = pos->x + obj->unk_10;
            pos->z = pos->z + obj->unk_18;
            func_ov004_02238064(e, &prev);
            if (func_02088d38(obj, 0x40)) {
                V3 *pv = &e->unk_34;
                *pv = *pos;
                if (id == 0x17) {
                    e->unk_20 = 1;
                }
            } else if (func_02088d38(obj, 0x80)) {
                e->unk_20 = 1;
            }
        }
        e->unk_2d4(e);
        if (func_ov004_02237d60(id, e->unk_172)) {
            p2 = *pos;
            if (id == 0x38) {
                if (func_020553cc(e->unk_b0, &buf, 0)) {
                    q = buf.unk_24;
                    func_0203ee38(&p2, &q);
                }
                mode = 0x42;
                a = 0x1200;
            } else {
                switch (id) {
                case 0x0e:
                case 0x0f:
                case 0x1a:
                case 0x20:
                    mode = 0x82;
                    break;
                case 0x00: case 0x01: case 0x02: case 0x03: case 0x04: case 0x05: case 0x06: case 0x07:
                case 0x0a:
                case 0x25:
                case 0x33:
                    if (e->unk_172 != 0) {
                        mode = 0x82;
                        break;
                    }
                default:
                    mode = 0x80;
                }
                a = data_ov004_0224ecc8[id].unk_02;
            }
            func_020309d4(e->unk_68, pos, &prev, e->unk_192, data_ov004_0224ecc8[id].unk_02, 0, 0xb);
            func_02088c64(obj, &p2, data_ov004_0224ecc8[id].unk_02, a, mode, 0xc0, 0, 0xff, 0x1000);
            func_02089040(obj);
        }
        if (data_ov004_0224ecc8[id].unk_00 == 0) {
            func_020547e4(e->unk_b0);
            if (id == 0x18) {
                func_020566bc(e);
                *e->unk_00.unk_18 = e->unk_00.unk_08;
            }
        }
        if (func_ov004_0223d4ac((s8)id, 0) > 0) {
            t = *pos;
            func_02003c70(&e->unk_24, &t);
        }
        s32 r = func_0203ef38(&out, &e->unk_2c8);
        func_020e8388(&data_021f47e0, out.x, out.y, out.z);
        func_020e8434(&data_021f47e0, r + e->unk_190);
        func_020e8404(&data_021f47e0, e->unk_192);
        func_020e83d4(&data_021f47e0, e->unk_194);
        e->unk_114 = data_021f47e0;
    }
}
