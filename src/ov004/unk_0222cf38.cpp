#include "types.h"

struct Unk_ov004_0222cf38_V3 {
    s32 x, y, z;
};

struct Unk_ov004_0222cf38_Mtx {
    s64 v[6];
};

struct Unk_ov004_0222cf38_Rec {
    u8 unk_00;
    u8 unk_01;
    u8 unk_02;
    u8 unk_03;
    u8 unk_04;
    u8 pad_05[0x11 - 5];
};

class Unk_ov004_0222cf38_Ent {
public:
    virtual void vfunc_00();
    virtual void vfunc_04();
    u8 pad_04[0x13 - 4];
    u8 unk_13;
    s32 unk_14;
    u8 pad_18[4];
    s32 unk_1c;
    u8 pad_20[0x40 - 0x20];
    u8 unk_40;
    u8 pad_41[0x54 - 0x41];
    s32 unk_54[4];
    u8 pad_64[0xc8 - 0x64];
    Unk_ov004_0222cf38_Mtx unk_c8;
    u8 pad_f8[0x15c - 0xf8];
    s32 unk_15c;
    s32 unk_160;
    u8 unk_164;
    u8 pad_165;
    u8 unk_166[2];
    u8 unk_168[0x1a8 - 0x168];
    Unk_ov004_0222cf38_V3 unk_1a8;
    Unk_ov004_0222cf38_V3 unk_1b4;
    s16 unk_1c0;
    s16 unk_1c2;
    s16 unk_1c4;
    u8 unk_1c6;
    u8 pad_1c7[0x1e8 - 0x1c7];
    u8 unk_1e8;
};

typedef Unk_ov004_0222cf38_Ent Ent;
typedef Unk_ov004_0222cf38_V3 V3;
typedef Unk_ov004_0222cf38_Rec Rec;
typedef Unk_ov004_0222cf38_Mtx Mtx;

class Unk_ov004_0222d564_Owner {
public:
    typedef void (Unk_ov004_0222d564_Owner::*Fn)(Unk_ov004_0222cf38_Ent **, s32);
};
typedef Unk_ov004_0222d564_Owner Owner;

extern "C" {
extern u8 data_ov004_02251d60;
extern u8 data_ov004_02251d64;
extern u8 data_ov004_0224e5f0;
extern u8 data_ov004_0224e5f4;
extern Ent *data_ov004_02251e94[];
extern Rec data_ov004_022402ec[];
extern V3 data_ov004_02251d9c;
extern u8 *data_ov004_02251d74;
extern Owner::Fn data_ov004_02251dcc[];
extern char data_ov004_0224e8c4[];
extern char data_ov004_0224e8e0[];
extern char data_ov004_0224e8f8[];
extern char data_ov004_0224e914[];
extern void *data_021f482c;
extern char data_021ed0a0[];
extern char data_021f47e0[];

s32 func_02070358(void *, u16 *);
s32 func_ov004_02231e74(s32, s32);
s32 func_ov004_0222de34(void *, s32);
s32 func_ov004_0222dd3c(void *, s32);
void func_020e85fc(void *, void *);
s32 func_0209c15c(void *);
s32 func_02003ff4(s32, s32);
void func_020547cc(void *, V3 *);
void func_020e8388(void *, s32, s32, s32);
void func_020e8404(void *, s32);
void func_020e8434(void *, s32);
s32 func_0209c25c(void *, void *);
s32 func_020639e8(char *, char *, ...);
s32 func_0209c0d0(void *, s32, char *);
s32 func_ov004_02231e3c(s32, s32);
s32 func_0209c0ac(void *);
s32 func_020555ec(void *, s32, s32);
s32 func_0209c348(s32);
s32 func_021065dc();
s32 func_021065f8(s32, s32);
s32 func_02054800(void *, s32);
s32 func_02054720(void *, s32, s32, s32, s32, s32);
s32 func_02054710(void *);
s32 func_02054b38(void *, s32);
s32 func_02088c64(void *, void *, s32, s32, s32, s32, s32, s32, s32);
s32 func_02089040(void *);
s32 func_020b50b4();
s32 func_020b6928(s32, void *);
s32 func_01ffcb0c(s32, s32);
s32 func_ov004_0222e060(void *);
s32 func_ov004_0222ca24(void *, Ent **, s32);
s32 func_0205439c(void *);
s32 func_020641ec(char *, s32, s32, s32);
s32 func_ov004_0222cde0(void *);
void *func_020e8608(void *, s32);
s32 func_ov004_02232ce4(Ent *);
s32 func_ov004_02232c88(Ent *);
s32 func_ov004_02232c24(Ent *);
s32 func_ov004_02232adc(Ent *);
s32 func_ov004_02232a64(Ent *);
s32 func_ov004_0223299c(Ent *);
s32 func_ov004_02232864(Ent *);
s32 func_ov004_02232808(Ent *);
s32 func_ov004_022327b8(Ent *);
s32 func_ov004_02232d8c(Ent *);
void func_ov004_0222d180(void *, Ent **);
s32 func_ov004_0222d1d8(void *, Ent **, s32);
void func_ov004_0222d314(void *, s32);
void func_ov004_0222d564(Owner *, Ent **, s32);
s32 func_ov004_0222d5a8(void *, Ent **, s32, s32);
}

extern "C" s32 func_ov004_0222d558(void *o, Ent **p, s32 i) {
    return func_ov004_0222d1d8(o, p, i);
}

extern "C" void func_ov004_0222cf38(void *o) {
    s32 i = data_ov004_02251d64;
    Ent **p = &data_ov004_02251e94[i];
    u16 id = 0xfff1;
    for (; i < data_ov004_0224e5f0; p++, i++) {
        V3 *v;
        id = (u32)i < 0x38 ? (u16)(i + 0x12e8) : 0x12e8;
        if (func_02070358(data_021ed0a0, &id)) {
            v = &(*p)->unk_1a8;
            if (i >= 0x11) {
                if (i != 0x19) {
                    v->x = func_ov004_02231e74(9, 0x1a);
                    v->z = func_ov004_02231e74(5, 0xa);
                } else {
                    v->x = func_ov004_02231e74(9, 0x1a);
                    v->z = func_ov004_02231e74(0x13, 0x18);
                }
            } else {
                switch (i) {
                case 0xa:
                    v->z = 0x14a00;
                    v->x = 0xc800;
                    break;
                case 0xc:
                    v->z = 0x13900;
                    v->x = 0x15900;
                    break;
                default:
                    v->x = func_ov004_02231e74(9, 0x1a);
                    v->z = func_ov004_02231e74(0x13, 0x18);
                    break;
                }
            }
            v->y = ((data_ov004_022402ec[i].unk_04 << 12) >> 6) - 0x1000;
            {
                Ent *e = *p;
                V3 *d = &e->unk_1b4;
                e->unk_1b4.x = v->x;
                d->y = v->y;
                d->z = v->z;
            }
            (*p)->unk_164 = data_ov004_022402ec[i].unk_00;
            func_ov004_0222de34(o, i);
        }
    }
}

extern "C" s32 func_ov004_0222d068(void *o) {
    s32 i = data_ov004_02251d64;
    Ent **p;
    for (; i < data_ov004_0224e5f0; i++) {
        p = &data_ov004_02251e94[i];
        if (data_ov004_02251e94[i]) {
            func_ov004_0222dd3c(o, i);
            func_020e85fc(data_021f482c, *p);
            *p = 0;
        }
    }
    func_0209c15c((u8 *)o + 0x7f8);
    func_02003ff4(0x4da, 1);
    return TRUE;
}

extern "C" s32 func_ov004_0222d0d4(void *o) {
    s32 i = data_ov004_02251d64;
    Ent **p = &data_ov004_02251e94[i];
    for (; i < data_ov004_0224e5f0; p++, i++) {
        if (*p) {
            if ((*p)->unk_160 == 2) {
                V3 v;
                switch ((*p)->unk_15c) {
                case 0xb:
                    v.x = 0x1000;
                    v.y = 0x1000;
                    v.z = 0x1000;
                    func_ov004_0222d180(o, p);
                    break;
                case 0x24:
                    if (data_ov004_02251d74) {
                        V3 *q = (V3 *)(data_ov004_02251d74 + 0x258);
                        v.x = q->x;
                        v.y = q->y;
                        v.z = q->z;
                    } else {
                        v.x = 0x1000;
                        v.y = 0x1000;
                        v.z = 0x1000;
                    }
                    break;
                default:
                    v.x = 0x1000;
                    v.y = 0x1000;
                    v.z = 0x1000;
                    break;
                }
                func_020547cc((u8 *)(*p) + 0x64, &v);
            }
        }
    }
    return TRUE;
}

extern "C" void func_ov004_0222d180(void *o, Ent **p) {
    Ent *e = *p;
    V3 *v = &e->unk_1a8;
    func_020e8388(data_021f47e0, v->x, v->y, v->z);
    func_020e8404(data_021f47e0, (*p)->unk_1c0);
    func_020e8434(data_021f47e0, (*p)->unk_1c4);
    e->unk_c8 = *(Mtx *)data_021f47e0;
}

extern "C" s32 func_ov004_0222d1d8(void *o, Ent **p, s32 idx) {
    s32 res = 0;
    s32 n = (*p)->unk_15c;
    s32 a = func_0209c25c((u8 *)o + 0x7f8, (*p)->unk_166);
    void *b = (*p)->unk_168;
    char buf[0x18];
    s32 k = n / 10 + 10;
    if (n < 10) {
        func_020639e8(buf, data_ov004_0224e8c4, k, n);
    } else {
        func_020639e8(buf, data_ov004_0224e8e0, k, n);
    }
    if (func_0209c0d0(b, a, buf)) {
        void *q;
        s32 c, d;
        (*p)->unk_1c0 = func_ov004_02231e3c(0x168, 0);
        (*p)->unk_1c2 = (*p)->unk_1c0;
        (*p)->vfunc_00();
        q = (u8 *)(*p) + 0x64;
        func_020555ec(q, func_0209c0ac(b), 0);
        c = func_0209c348(a);
        if ((*p)->unk_54[0] == 0) {
            func_ov004_0222dd3c(o, idx);
            return 0;
        }
        d = func_021065f8(func_021065dc(), 0);
        if (func_02054800(q, c)) {
            func_02054720(q, d, 0, 0x1000, 1, 0);
            func_02054710(q);
            func_02054b38(q, func_0209c348(a));
            (*p)->unk_160 = 2;
            (*p)->unk_1e8 = (*p)->unk_15c;
            func_ov004_0222d180(o, p);
            res = 1;
        }
    }
    return res;
}

extern "C" void func_ov004_0222d314(void *o, s32 n) {
    s32 i;
    u32 z = 0;
    for (i = 0; i < n; i++) {
        s32 off = i * 0x64;
        u8 *s = (u8 *)o + off;
        void *obj = (u8 *)o + 0x50 + off;
        func_02088c64(obj, (u8 *)o + 0xa0 + off, *(s32 *)(s + 0xac), *(s32 *)(s + 0xb0), 0x102, 0x140, z, 0xff, 0x1000);
        func_02089040(obj);
    }
    if (data_ov004_02251d60 == 1) {
        func_02088c64((u8 *)o + 0x244, (u8 *)o + 0x294, *(s32 *)((u8 *)o + 0x2a0), *(s32 *)((u8 *)o + 0x2a4), 0x202, 0x140, 0, 0xff, 0x1000);
        func_02089040((u8 *)o + 0x244);
    }
}

extern "C" s32 func_ov004_0222d3cc(void *o) {
    s32 i;
    Ent **p;
    if (data_ov004_02251d60 == 0) {
        func_020b6928(func_020b50b4(), (u8 *)o + 0x2a8);
        func_020b6928(func_020b50b4(), (u8 *)o + 0x550);
    } else if (data_ov004_02251d60 == 1) {
        func_020b6928(func_020b50b4(), (u8 *)o + 0x2a8);
    }
    i = data_ov004_0224e5f0 - 1;
    p = &data_ov004_02251e94[i];
    for (; i >= data_ov004_02251d64; p--, i--) {
        if (*p) {
            func_ov004_0222d564((Owner *)o, p, i);
        }
    }
    func_ov004_0222d314(o, data_ov004_0224e5f4);
    return TRUE;
}

static inline s32 Unk_ov004_0222d460_Clamp(s32 a) {
    s32 t = a < 0 ? -a : a;
    if (t > 0x8f) {
        s32 s;
        if (a > 0) {
            s = 1;
        } else {
            s = -1;
        }
        a = s * 0x8f;
    }
    return a;
}

extern "C" void func_ov004_0222d460(void *o, Ent **p, s32 x) {
    V3 *v = &(*p)->unk_1a8;
    if (data_ov004_02251d60 == 0) {
        s32 a = func_01ffcb0c((*p)->unk_14, 0x99a);
        s32 b = func_01ffcb0c((*p)->unk_1c, 0x99a);
        if ((*p)->unk_40 != 0) {
            s32 lv = (*p)->unk_13;
            if (lv >= 0x38) {
                a = Unk_ov004_0222d460_Clamp(a);
                b = Unk_ov004_0222d460_Clamp(b);
            }
            v->x = v->x + a;
            v->z = v->z + b;
        }
    } else if (data_ov004_02251d60 == 1) {
        s32 a = func_01ffcb0c((*p)->unk_14, 0x866);
        s32 b = func_01ffcb0c((*p)->unk_1c, 0x866);
        if ((*p)->unk_40 != 0) {
            v->x = v->x + a;
            v->z = v->z + b;
        }
    }
    (*p)->vfunc_04();
    func_ov004_0222e060(*p);
    func_ov004_0222ca24(o, p, x);
    func_ov004_0222d180(o, p);
    func_0205439c((u8 *)(*p) + 0x64);
}

extern "C" void func_ov004_0222d560() {
}

extern "C" void func_ov004_0222d564(Owner *o, Ent **p, s32 i) {
    Ent *e = *p;
    u32 k = (u8)e->unk_160;
    if (k < 3) {
        (o->*data_ov004_02251dcc[k])(p, i);
    }
}

extern "C" s32 func_ov004_0222d5a8(void *o, Ent **p, s32 idx, s32 n) {
    s32 k = idx / 10 + 10;
    s32 i = 0;
    s32 z = 0;
    char buf[0x1c];
    for (; i < n; i++) {
        if (idx < 10) {
            func_020639e8(buf, data_ov004_0224e8f8, k, idx, i);
        } else {
            func_020639e8(buf, data_ov004_0224e914, k, idx, i);
        }
        (*p)->unk_54[i] = func_020641ec(buf, (s32)data_021f482c, 4, z);
        if ((*p)->unk_54[i] == 0) {
            return 0;
        }
    }
    return 1;
}

extern "C" s32 func_ov004_0222d62c(void *o) {
    s32 i = 0x23;
    Ent **p;
    void *heap;
    data_ov004_02251d64 = 0x23;
    data_ov004_0224e5f0 = 0x38;
    data_ov004_02251d9c.x = 0x11000;
    data_ov004_02251d9c.y = 0;
    data_ov004_02251d9c.z = 0x136e1;
    heap = data_021f482c;
    for (; i < data_ov004_0224e5f0; i++) {
        switch (i - 0x23) {
        case 1: {
            u32 off = i << 2;
            p = &data_ov004_02251e94[i];
            *(Ent **)((u8 *)data_ov004_02251e94 + off) = (Ent *)func_020e8608(heap, 0x28c);
            if (*(Ent **)((u8 *)data_ov004_02251e94 + off)) func_ov004_02232ce4(*(Ent **)((u8 *)data_ov004_02251e94 + off));
            break;
        }
        case 15:
        case 16: {
            u32 off = i << 2;
            p = &data_ov004_02251e94[i];
            *(Ent **)((u8 *)data_ov004_02251e94 + off) = (Ent *)func_020e8608(heap, 0x258);
            if (*(Ent **)((u8 *)data_ov004_02251e94 + off)) func_ov004_02232c88(*(Ent **)((u8 *)data_ov004_02251e94 + off));
            break;
        }
        case 17:
        case 18:
        case 19: {
            u32 off = i << 2;
            p = &data_ov004_02251e94[i];
            *(Ent **)((u8 *)data_ov004_02251e94 + off) = (Ent *)func_020e8608(heap, 0x258);
            if (*(Ent **)((u8 *)data_ov004_02251e94 + off)) func_ov004_02232c24(*(Ent **)((u8 *)data_ov004_02251e94 + off));
            break;
        }
        case 0: {
            u32 off = i << 2;
            p = &data_ov004_02251e94[i];
            *(Ent **)((u8 *)data_ov004_02251e94 + off) = (Ent *)func_020e8608(heap, 0x278);
            if (*(Ent **)((u8 *)data_ov004_02251e94 + off)) func_ov004_02232adc(*(Ent **)((u8 *)data_ov004_02251e94 + off));
            break;
        }
        case 2: {
            u32 off = i << 2;
            p = &data_ov004_02251e94[i];
            *(Ent **)((u8 *)data_ov004_02251e94 + off) = (Ent *)func_020e8608(heap, 0x26c);
            if (*(Ent **)((u8 *)data_ov004_02251e94 + off)) func_ov004_02232a64(*(Ent **)((u8 *)data_ov004_02251e94 + off));
            break;
        }
        case 5: {
            u32 off = i << 2;
            p = &data_ov004_02251e94[i];
            *(Ent **)((u8 *)data_ov004_02251e94 + off) = (Ent *)func_020e8608(heap, 0x25c);
            if (*(Ent **)((u8 *)data_ov004_02251e94 + off)) func_ov004_0223299c(*(Ent **)((u8 *)data_ov004_02251e94 + off));
            break;
        }
        case 3: {
            u32 off = i << 2;
            p = &data_ov004_02251e94[i];
            *(Ent **)((u8 *)data_ov004_02251e94 + off) = (Ent *)func_020e8608(heap, 0x27c);
            if (*(Ent **)((u8 *)data_ov004_02251e94 + off)) func_ov004_02232864(*(Ent **)((u8 *)data_ov004_02251e94 + off));
            break;
        }
        case 12: {
            u32 off = i << 2;
            p = &data_ov004_02251e94[i];
            *(Ent **)((u8 *)data_ov004_02251e94 + off) = (Ent *)func_020e8608(heap, 0x258);
            if (*(Ent **)((u8 *)data_ov004_02251e94 + off)) func_ov004_02232808(*(Ent **)((u8 *)data_ov004_02251e94 + off));
            break;
        }
        case 13: {
            u32 off = i << 2;
            p = &data_ov004_02251e94[i];
            *(Ent **)((u8 *)data_ov004_02251e94 + off) = (Ent *)func_020e8608(heap, 0x1fc);
            if (*(Ent **)((u8 *)data_ov004_02251e94 + off)) func_ov004_022327b8(*(Ent **)((u8 *)data_ov004_02251e94 + off));
            break;
        }
        case 4: case 6: case 7: case 8: case 9: case 10: case 11: case 14:
        default: {
            u32 off = i << 2;
            p = &data_ov004_02251e94[i];
            *(Ent **)((u8 *)data_ov004_02251e94 + off) = (Ent *)func_020e8608(heap, 0x258);
            if (*(Ent **)((u8 *)data_ov004_02251e94 + off)) func_ov004_02232d8c(*(Ent **)((u8 *)data_ov004_02251e94 + off));
            break;
        }
        }
        if (*p == 0) {
            return 0;
        }
        if (data_ov004_022402ec[i].unk_01 == 3) {
            (*p)->unk_1c6 = 1;
        }
        if (!func_ov004_0222d5a8(o, p, i, data_ov004_022402ec[i].unk_01)) {
            func_ov004_0222dd3c(o, i);
            (*p)->unk_1c6 = 0;
            return 0;
        }
    }
    func_ov004_0222cde0(o);
    return TRUE;
}
