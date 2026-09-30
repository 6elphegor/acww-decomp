#include "types.h"

struct Unk_ov003_02220a2c_V3 {
    s32 x, y, z;
    Unk_ov003_02220a2c_V3() {}
};

typedef Unk_ov003_02220a2c_V3 V3;

// owner object (passed in r0 by the state functions); only fields used here
struct Unk_ov003_02220a2c_O {
    u8 pad_00[0x80];
    s32 unk_80;
    u8 unk_84;
};

// 0x24c-byte entry, table at data_ov003_0225812c
struct Unk_ov003_0225812c {
    u8 pad_00[0x7e];
    s8 unk_7e;
    u8 unk_7f;
    s32 unk_80;
    u8 pad_84[0x120 - 0x84];
    Unk_ov003_02220a2c_V3 unk_120;
    u16 unk_12c;
    u8 pad_12e[0x138 - 0x12e];
    s16 unk_138;
    u8 pad_13a[0x13c - 0x13a];
    s32 unk_13c;
    u8 pad_140[0x144 - 0x140];
    u8 unk_144[0x1a0 - 0x144];
    void *unk_1a0;
    u8 pad_1a4[0x1e8 - 0x1a4];
    u32 unk_1e8;
    u8 pad_1ec[4];
    s32 unk_1f0;
    u8 pad_1f4[0x1fd - 0x1f4];
    u8 unk_1fd;
    u8 unk_1fe;
    u8 unk_1ff;
    u8 unk_200;
    u8 unk_201;
    u8 pad_202[2];
    s32 unk_204;
    u8 pad_208[0x214 - 0x208];
    u8 unk_214;
    u8 pad_215[3];
    V3 unk_218;
    u8 unk_224;
    u8 pad_225[0x23c - 0x225];
    u8 unk_23c;
    u8 pad_23d[3];
    u8 pad_240[4];
    s32 unk_244;
    u8 pad_248[4];
};

struct Unk_ov003_022210a4_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

struct Unk_ov003_022210a4_R {
    u8 pad_00[8];
    s32 unk_08;
    u8 pad_0c[0x18 - 0xc];
    s32 *unk_18;
};

struct Unk_ov003_02257be0 {
    u8 pad_00[0x48];
    V3 unk_48;
    s16 unk_54;
    u8 pad_56[2];
    u8 unk_58[0x11c - 0x58];
    Unk_ov003_022210a4_R unk_11c;
};

struct Unk_ov003_02220eec_Rec {
    u8 pad_00[0xe];
    u8 unk_0e;
    u8 unk_0f;
    u8 pad_10[4];
};

struct Unk_ov003_02220eec_Bits {
    u8 pad_00[0xc];
    u32 unk_0c;
};

typedef Unk_ov003_02220a2c_O O;
typedef Unk_ov003_0225812c E;

extern "C" {
extern void *data_021c3070;
extern V3 data_021c309c;
extern s32 data_020c7c1c;
extern E data_ov003_0225812c[];
extern u8 data_ov003_02257d1c[];
extern u8 data_ov003_02257e9c[];
extern u8 data_ov003_02257a74[];
extern u8 data_ov003_02257c38[];
extern u8 data_ov003_02257be0[];
extern Unk_ov003_02220eec_Rec data_ov003_022349d4[];
extern u8 data_ov003_022349dc[];
extern void *data_020cbb18;
extern u8 data_021f47e0[];

s32 func_ov003_0222034c(V3 *a, V3 *b, s32 c, s32 d, s32 e);
s32 func_ov003_02221684(O *o);
s32 func_ov003_022216f8(O *o, s32 idx);
s32 func_ov003_02222ce0(E *e);
s32 func_ov003_02220994(s32 a, V3 *v, s32 b);
s32 func_ov003_022209c8(s32 a);
s32 func_ov003_02212824(s32 a);
s32 func_ov003_022234fc(E *e);
s32 func_ov003_02222274(void *p, u8 i);
s32 func_ov003_02222658(void *p, u8 i);
s32 func_ov003_02224ae0(void *a, void *b);
s32 func_ov003_02221498(O *o, E *e, s32 idx);
s32 func_ov003_022247b8(E *e);
s32 func_ov003_022247f0(E *e);
s32 func_ov003_02222754(E *e);
s32 func_ov003_02221bfc(O *o);
s32 func_ov003_02220030(void *p, void *q);
s32 func_020947f0(s32 a);
s32 func_02090330(s32 a, V3 *v, s32 b, s32 c);
s32 func_02002bdc(s32 a, V3 *v);
s32 func_020e9650(V3 *v, s32 a);
s32 func_02003e50(void *p);
s32 func_02003c30(void *p);
s32 func_0209c224(void *a, void *b);
s32 func_020e8558(s32 a);
s32 func_0209c15c(void *p);
s32 func_02133150(s32 a, s32 b);
s32 func_020547cc(void *p, V3 *v);
s32 func_020547e4(void *p);
s32 func_02072e44(void *p);
s32 func_0203eeac(V3 *v);
s32 func_020e8388(void *m, s32 x, s32 y, s32 z);
s32 func_020e8434(void *m, s32 a);
s32 func_020e8404(void *m, s32 a);
s32 func_020309d4(void *a, void *b, void *c, s32 d, s32 e, s32 f, s32 g);
s32 func_020566bc(void *p);
}

extern "C" {

void func_ov003_02220a2c(O *o, E *e, s32 idx) {
    if (e->unk_23c == 0 || e->unk_224 == 6) {
        if (data_021c3070 != NULL) {
            V3 v = data_021c309c;
            if (func_ov003_0222034c(&e->unk_120, &v, 0xa000, 0x10000, 0xa000) == 0) {
                if (e->unk_200 == 5 || e->unk_224 == 6) {
                    if (e->unk_7f != 0) {
                        func_ov003_02221684(o);
                    }
                    func_ov003_022216f8(o, idx);
                } else {
                    if ((u32)(e->unk_1fe - 4) <= 2) {
                        if (func_ov003_02222ce0(e) != 0) {
                            e->unk_244 = 0x12c;
                        } else {
                            e->unk_244 = 0x4b0;
                        }
                    } else {
                        e->unk_244 = 0x4b0;
                    }
                    e->unk_80 = 4;
                }
            }
        }
    }
}

BOOL func_ov003_02220b00(E *e, s32 a) {
    if (e == NULL) {
        return FALSE;
    }
    if (e->unk_200 == 5 || e->unk_224 == 6 || e->unk_80 != 3) {
        return FALSE;
    }
    if (e->unk_23c == 0) {
        e->unk_200 = 5;
    } else {
        e->unk_224 = 6;
    }
    e->unk_1fd = 0x1e;
    e->unk_13c = 0;
    u16 *pa = (u16 *)&e->unk_138;
    V3 *pv = &e->unk_120;
    V3 v = *pv;
    if (e->unk_7f != 0) {
        *pa = 0;
    } else {
        *pa = func_02002bdc(a, &v);
    }
    u32 k = e->unk_1ff;
    s32 *pr = &e->unk_204;
    V3 w = v;
    w.y = data_020c7c1c;
    switch (k) {
    case 0: *pr = func_02090330(0x1a, &w, 0, 0); break;
    case 1: *pr = func_02090330(0x1b, &w, 0, 0); break;
    case 2: *pr = func_02090330(0x1c, &w, 0, 0); break;
    case 3: *pr = func_02090330(0x1d, &w, 0, 0); break;
    case 4: *pr = func_02090330(0x1e, &w, 0, 0); break;
    case 5: *pr = func_02090330(0x1f, &w, 0, 0); break;
    case 6: *pr = func_02090330(0x21, &w, 0, 0); break;
    case 7: *pr = func_02090330(0x20, &w, 0, 0); break;
    }
    return TRUE;
}

BOOL func_ov003_02220c68(E *e, s32 a) {
    BOOL r = FALSE;
    if (e == NULL) {
        return r;
    }
    if (e->unk_23c == 1) {
        return r;
    }
    if (func_ov003_02220b00(e, a) != 0) {
        r = TRUE;
    }
    return r;
}

BOOL func_ov003_02220c98(s32 a, s32 b, E *e) {
    BOOL r = FALSE;
    if (func_ov003_02220994(a, &e->unk_120, b) != 0) {
        if (func_ov003_02212824(b) != 0) {
            r = TRUE;
        } else if (func_ov003_022209c8(b) != 0) {
            u8 *pc = &e->unk_214;
            u32 t = *pc;
            if (t != 0) {
                *pc = t - 1;
            } else {
                r = TRUE;
            }
        } else {
            e->unk_214 = 6;
        }
    } else {
        e->unk_214 = 6;
    }
    return r;
}

BOOL func_ov003_02220cf8(s32 a, E *e) {
    BOOL r = FALSE;
    if (func_ov003_02220c98(a, 4, e) != 0) {
        s32 t = func_020947f0(4);
        if (t == 0) {
            return r;
        }
        func_ov003_02220c68(e, t);
        r = TRUE;
    }
    return r;
}

void func_ov003_02220d30(O *o, E *e, s32 idx) {
    u32 t = e->unk_1fd;
    if (t == 0x1f) {
        func_ov003_02220cf8((s32)o, e);
    } else if (t != 0x1f) {
        if (e->unk_7f == 0) {
            e->unk_1fd = t - 1;
        }
    }
    if (e->unk_1fd <= 1) {
        e->unk_1fd = 0x1f;
        if (func_ov003_022234fc(e) == 2) {
            if (e->unk_7f != 0) {
                func_ov003_02221684(o);
            }
        }
        func_ov003_022216f8(o, idx);
    }
}

void func_ov003_02220d94(O *o, E *e, s32 idx) {
    func_ov003_02220d30(o, e, idx);
    func_ov003_02220a2c(o, e, idx);
}

BOOL func_ov003_02220db0(s32 a, s32 b) {
    s32 i;
    E *e;
    BOOL r = FALSE;
    e = data_ov003_0225812c;
    i = 0;
    for (; i < 6; i++) {
        V3 *pv = &e->unk_120;
        V3 v = *pv;
        if (func_020e9650(&v, a) <= b) {
            if (func_ov003_02220c68(e, a) != 0) {
                r = TRUE;
            }
        }
        e = (E *)((u8 *)e + 0x24c);
    }
    return r;
}

void func_ov003_02220e10(s32 a) {
    u8 *p = data_ov003_02257d1c;
    s32 i;
    for (i = 0; i < 4; i++) {
        p[0x30] = 0;
        *(s32 *)(p + 0x58) = 0;
        p += 0x60;
    }
}

void func_ov003_02220e2c(s32 a) {
    u8 *p = data_ov003_02257e9c;
    s32 i;
    for (i = 0; i < 4; i++) {
        func_ov003_02222274(p, i);
        func_02003e50(p);
        p += 0xa4;
    }
}

void func_ov003_02220e58(O *o) {
    BOOL f = FALSE;
    E *e = data_ov003_0225812c;
    s32 i;
    for (i = 0; i < 6; i++) {
        if (e->unk_7f != 0) {
            f = TRUE;
        }
        func_ov003_022216f8(o, i);
        func_0209c224((u8 *)o + 0x50, (u8 *)e + 0x7c);
        func_02003e50(e);
        func_02003c30((u8 *)e + 0x40);
        e = (E *)((u8 *)e + 0x24c);
    }
    func_020e8558(o->unk_80);
    func_0209c15c((u8 *)o + 0x50);
    if (f != FALSE) {
        func_ov003_02221684(o);
    }
    func_0209c15c((u8 *)o + 0x68);
}

BOOL func_ov003_02220ed0(O *o) {
    func_ov003_02220e58(o);
    func_ov003_02220e2c((s32)o);
    func_ov003_02220e10((s32)o);
    return TRUE;
}

BOOL func_ov003_02220eec(void) {
    E *e = data_ov003_0225812c;
    s32 i;
    for (i = 0; i < 6; i++) {
        if (e->unk_80 == 3) {
            Unk_ov003_02220eec_Rec *rec = &data_ov003_022349d4[e->unk_1ff];
            V3 v;
            v.x = func_02133150(rec->unk_0e << 12, 100);
            v.y = 0x1000;
            v.z = func_02133150(rec->unk_0f << 12, 100);
            u8 *p0 = (u8 *)e->unk_1a0;
            u8 *b = p0 + *(s32 *)(p0 + 8);
            u8 *c = b + *(u16 *)(b + 0xa);
            Unk_ov003_02220eec_Bits *q = (Unk_ov003_02220eec_Bits *)(b + *(s32 *)(c + 8));
            s32 n = e->unk_1fd;
            if (q != NULL && n > 0) {
                q->unk_0c = q->unk_0c & 0xffe0ffff;
                q->unk_0c = q->unk_0c | ((n & 0x1f) << 16);
            }
            func_020547cc(e->unk_144, &v);
            if (e->unk_7f != 0) {
                V3 v2;
                v2.x = func_02133150(rec->unk_0e << 12, 100);
                v2.y = 0x1000;
                v2.z = func_02133150(rec->unk_0f << 12, 100);
                func_020547cc(data_ov003_02257c38, &v2);
            }
        }
        e = (E *)((u8 *)e + 0x24c);
    }
    return TRUE;
}

void func_ov003_02220fc8(O *o) {
    if (func_02072e44(data_020cbb18) != 0) {
        func_ov003_02221bfc(o);
    }
    s32 i;
    u8 *p = data_ov003_02257e9c;
    u8 *q = data_ov003_02257d1c;
    for (i = 0; i < 4; i++) {
        func_ov003_02222658(p, i);
        p += 0xa4;
        func_ov003_02224ae0(data_ov003_02257a74, q);
        q += 0x60;
    }
}

BOOL func_ov003_0222101c(O *o) {
    E *e = data_ov003_0225812c;
    s32 i;
    for (i = 0; i < 6; e = (E *)((u8 *)e + 0x24c), i++) {
        func_ov003_02221498(o, e, i);
    }
    o->unk_84 = 0;
    func_ov003_02220fc8(o);
    return TRUE;
}

void func_ov003_0222105c(O *a, void *b, void *dstv, s32 ang) {
    u8 *dst = (u8 *)dstv;
    V3 v;
    s32 r = func_0203eeac(&v);
    func_020e8388(data_021f47e0, v.x, v.y, v.z);
    func_020e8434(data_021f47e0, r);
    func_020e8404(data_021f47e0, ang);
    struct T { s32 v[12]; };
    *(T *)(dst + 0x64) = *(T *)data_021f47e0;
}

void func_ov003_022210a4(O *o, E *e) {
    Unk_ov003_02257be0 *p = (Unk_ov003_02257be0 *)data_ov003_02257be0;
    V3 *pv = &e->unk_120;
    p->unk_48.x = pv->x;
    p->unk_48.y = pv->y;
    p->unk_48.z = pv->z;
    s16 ang = e->unk_138;
    p->unk_54 = ang;
    u8 *q = p->unk_58;
    *(s32 *)(q + 0xac) = e->unk_1f0;
    *(u32 *)(q + 0xa4) = (u32)(u16)(((Unk_ov003_022210a4_Bits *)&e->unk_1e8)->mid + 1) << 12;
    func_ov003_0222105c(o, pv, q, ang);
    func_020547e4(e->unk_144);
    func_020547e4(q);
    Unk_ov003_022210a4_R *r = &p->unk_11c;
    func_020566bc(r);
    *r->unk_18 = r->unk_08;
}

void func_ov003_02221134(O *o, E *e, s32 x) {
    func_ov003_022247b8(e);
    V3 *pb = &e->unk_218;
    V3 *pa = &e->unk_120;
    s32 t = func_02133150(data_ov003_022349dc[e->unk_1ff * 0x14] << 12, 10);
    func_020309d4((u8 *)e + 0x4c, pa, pb, e->unk_138, t, 0, 0xb);
    pb->x = e->unk_120.x;
    pb->y = pa->y;
    pb->z = pa->z;
    V3 v;
    v.x = e->unk_120.x;
    v.y = pa->y;
    v.z = pa->z;
    v.y = -0x1333;
    func_ov003_0222105c(o, &v, e->unk_144, e->unk_138);
    if (e->unk_7f != 0) {
        func_ov003_022210a4(o, e);
    } else {
        func_020547e4(e->unk_144);
    }
    func_ov003_02220d94(o, e, x);
}

void func_ov003_022211f8(void) {
}

void func_ov003_022211fc(O *o, E *e, s32 idx) {
    if (data_021c3070 != NULL) {
        V3 v = data_021c309c;
        if (func_ov003_0222034c(&e->unk_120, &v, 0xa000, 0x10000, 0xa000) != 0) {
            e->unk_80 = 3;
            e->unk_244 = -1;
        } else {
            s32 t = e->unk_244;
            s32 m = -1;
            if (t != m) {
                if (t == 0) {
                    if (e->unk_7f != 0) {
                        func_ov003_02221684(o);
                    }
                    func_ov003_022216f8(o, idx);
                } else {
                    e->unk_244 = t - 1;
                }
            }
        }
    }
}

void func_ov003_02221290(void) {
}

void func_ov003_02221294(O *o, E *e) {
    s32 ang;
    V3 *pv;
    if (e->unk_7f != 0) {
        u8 *p = data_ov003_02257be0;
        if (func_ov003_02220030(p, (u8 *)o + 0x68) != 0) {
            func_ov003_022247f0(e);
            e->unk_80 = 3;
            e->unk_1fd = 0x1f;
            pv = &e->unk_120;
            ang = e->unk_138;
            func_ov003_0222105c(o, pv, e->unk_144, ang);
            p = p + 0x58;
            func_ov003_0222105c(o, pv, p, ang);
        }
    } else {
        func_ov003_022247f0(e);
        if (e->unk_201 > 3 || e->unk_200 == 3) {
            e->unk_80 = 3;
            e->unk_1fd = 0x1f;
            e->unk_201 = 0;
            func_ov003_0222105c(o, &e->unk_120, e->unk_144, e->unk_138);
            if (e->unk_7e == 11) {
                func_ov003_02222754(e);
            }
        }
    }
}

}
