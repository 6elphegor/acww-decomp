#include "types.h"

struct Unk_0202c92c_Ent {
    u8 *unk_00;
    u8 unk_04;
};

struct Unk_0202cd5c_Obj {
    u32 v[2];
};

struct Unk_0202cb34_Size {
    s32 x, y;
};

struct Unk_0202cb34_Grid {
    u8 *unk_00;
    Unk_0202cb34_Size unk_04;
};

class Unk_0202cf9c_Scene {
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
    virtual void vfunc_24(u32 a);
    virtual void vfunc_28(u32 a);
    virtual void vfunc_2c(u32 a);
    virtual void vfunc_30(u32 a);
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
    virtual s32 vfunc_60();
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
    virtual void vfunc_98();
    virtual void vfunc_9c();
    virtual void vfunc_a0();
    virtual void vfunc_a4(u32 a, u32 b);
};

struct Unk_0202ce90_Parent {
    u8 pad_00[0x564];
    u8 unk_564[4];
};

extern "C" {
extern u8 data_020c7520[];
extern u8 data_021be614[];
extern u8 data_021be61c[];
extern u8 data_020c7504[];
extern u32 data_020c7b68[];
extern u32 data_020c7b1c[];
extern u32 data_020c7a84[];
extern u16 data_020c6cc8;
extern u32 data_0213a740[2];

void *func_02060e24(s32 a);
s32 func_02060de4(u32 a);
s32 func_02060b9c(u32 a);
s32 func_0209949c(u32 a);
s32 func_02063b8c(s32 n);
void func_02116048(const void *src, void *dst, u32 n);
void func_02115fb4(void *dst, s32 v, u32 n);
Unk_0202cb34_Grid *func_0204da0c(void);
u16 *func_02037558(void *cell, s32 a, s32 b, s32 c);
void func_0206338c(Unk_0202cd5c_Obj *o, u32 a, u32 b);
void func_02063388(Unk_0202cd5c_Obj *o);
void func_02062f94(u16 *a, Unk_0202cd5c_Obj *o, u32 b, u32 c, u32 d, u32 e, u32 f);
void func_02062f44(u16 *a, Unk_0202cd5c_Obj *o);
void func_02019614(void *p, s32 a, u16 b);
void *func_02097e68(void *p, s32 a);
u16 *func_02097f6c(void *p, s32 a);
s32 func_02097eb0(void *p, s32 a);
s32 func_02065578(void *p);
s32 func_0204b25c(void *p);
s32 func_0204b2d4(void *p);
s32 func_020143fc(void *p, s32 a);
s32 func_0209750c(void);
s32 func_0209888c(s32 a);
s32 func_0207f7cc(s32 a, s32 b);
s32 func_0207f5a4(s32 a);
s32 func_0207f86c(s32 a);
void func_02080f4c(s32 a, s32 b, s32 c, s32 d);
void func_02080ecc(s32 a, s32 b, s32 c, s32 d);
void func_02077a1c(s32 a, s32 b);
void func_0207799c(s32 a, s32 b);

s32 func_0202c908(u16 *a, s32 *b, s32 *c, s32 d, Unk_0202c92c_Ent *tbl, s32 *arr, s32 cnt);
s32 func_0202c92c(u16 *a, s32 *b, s32 *c, s32 d, Unk_0202c92c_Ent *tbl, s32 *arr, s32 cnt, u8 lo, u8 hi);
s32 func_0202ca00(u16 *a, s32 *b, s32 c, u8 *p, s32 n, s32 *arr, s32 cnt);
s32 func_0202caac(s32 c, u8 *p, s32 n, s32 *arr, s32 cnt);
s32 func_0202cb10(s32 v, s32 *arr, s32 n);
void func_0202cb34(s32 *out, s32 *cnt);
s32 func_0202ce44(u8 *p, s32 n);
void func_0202cd5c(u16 *out, u32 *tbl, s32 idx, s32 c);
s32 func_0202c7c0(u16 *a, s32 *idxOut, s32 *b, s32 *c, Unk_0202c92c_Ent *p);
s32 func_0202c84c(u16 *a, s32 lo, s32 hi, s32 d, s32 e, u8 kind);
s32 func_0202c8f0(u16 *a, s32 lo, s32 hi, u8 kind);
void func_0202cd2c(u16 *out, s32 c);
void func_0202cd44(u16 *out, s32 c);
void func_0202cdf4(u16 *out);
void *func_0202ceb0(void *p);
s32 func_0202cee4(void *p, u16 *q);
void func_0202d048(u8 *self, s32 *pa, s32 *pb, s32 c, s32 d);
}


s32 func_0202c7c0(u16 *a, s32 *idxOut, s32 *b, s32 *c, Unk_0202c92c_Ent *p) {
    s32 result = 0;
    Unk_0202c92c_Ent *tbl = (Unk_0202c92c_Ent *)func_02060e24(p->unk_04 - 1);
    s32 arr[4];
    s32 cnt;
    s32 i;
    s32 idx;
    if (tbl != NULL) {
        cnt = 0;
        func_02116048(data_020c7520, data_021be614, 5);
        func_0202cb34(arr, &cnt);
        for (i = 0; i < 5; i++) {
            idx = func_0202ce44(data_021be614, 5);
            if (idx < 0 || idx >= 5) {
                break;
            }
            if (func_0202c908(a, b, c, idx, tbl, arr, cnt) == 1) {
                *idxOut = idx;
                result = 1;
                break;
            }
            data_021be614[idx] = 0;
        }
    }
    return result;
}

s32 func_0202c84c(u16 *a, s32 lo, s32 hi, s32 d, s32 e, u8 kind) {
    Unk_0202c92c_Ent *tbl = (Unk_0202c92c_Ent *)func_02060e24(kind - 1);
    s32 out0, out1;
    u8 mask;
    s32 n;
    s32 i;
    s32 z;
    if (tbl != NULL) {
        mask = 0;
        n = hi - lo + 1;
        out0 = 0;
        out1 = 0;
        for (; lo <= hi; lo++) {
            mask = mask | (1 << lo);
        }
        z = 0;
        for (; n > 0; n--) {
            s32 k = func_02063b8c(n);
            for (i = z; i < 5; i++) {
                if (((mask >> i) & 1) != 0) {
                    if (k == 0) {
                        if (((s32(*)(u16 *, s32 *, s32 *, s32, Unk_0202c92c_Ent *, s32 *, s32, s32, s32))func_0202c92c)(a, &out0, &out1, i, tbl, (s32 *)z, z, d, e) != 0) {
                            return 1;
                        }
                        mask = mask & ~(1 << i);
                        break;
                    } else {
                        k--;
                    }
                }
            }
        }
    }
    return 0;
}

s32 func_0202c8f0(u16 *a, s32 lo, s32 hi, u8 kind) {
    return func_0202c84c(a, lo, hi, 0, 0x17, kind);
}

s32 func_0202c908(u16 *a, s32 *b, s32 *c, s32 d, Unk_0202c92c_Ent *tbl, s32 *arr, s32 cnt) {
    return func_0202c92c(a, b, c, d, tbl, arr, cnt, 0, 0x17);
}

s32 func_0202c92c(u16 *a, s32 *b, s32 *c, s32 d, Unk_0202c92c_Ent *tbl, s32 *arr, s32 cnt, u8 lo, u8 hi) {
    s32 n = 0;
    s32 result = 0;
    s32 prev;
    s32 r;
    s32 i;
    s32 k;
    s32 end;
    u8 *flag;
    if (tbl != NULL) {
        prev = 6;
        func_02115fb4(data_021be61c, 0, prev);
        i = lo;
        end = hi;
        for (; i <= end; i++) {
            r = func_02060de4((u8)i);
            flag = &data_021be61c[r];
            if (*flag == 0 && r != prev) {
                if (func_0202caac(d, tbl[r].unk_00, tbl[r].unk_04, arr, cnt) > 0) {
                    *flag = 1;
                    n++;
                }
                prev = r;
            }
        }
        if (n > 0) {
            k = func_02063b8c(n);
            for (n = 0; n < 6; n++) {
                if (data_021be61c[n] != 0) {
                    if (k == 0) {
                        result = func_0202ca00(a, b, d, tbl->unk_00, tbl->unk_04, arr, cnt);
                        *c = n;
                        break;
                    } else {
                        k--;
                    }
                }
                tbl++;
            }
        }
    }
    return result;
}

s32 func_0202ca00(u16 *a, s32 *b, s32 c, u8 *p, s32 n, s32 *arr, s32 cnt) {
    s32 result = 0;
    s32 i;
    s32 prev;
    s32 k;
    s32 d;
    s32 q;
    u16 t;
    if (n > 0 && p != NULL) {
        k = func_0202caac(c, p, n, arr, cnt);
        if (k > 0) {
            k = func_02063b8c(k);
            prev = 0;
            for (i = 0; i < n; i++) {
                d = p[1] - prev;
                if (d > 0) {
                    if (c == func_0209949c((u8)d)) {
                        q = func_02060b9c(p[0]);
                        if (func_0202cb10(q, arr, cnt) == 0) {
                            if (k == 0) {
                                if (p[0] < 0x38) {
                                    t = p[0] + 0x12b0;
                                } else {
                                    t = 0x12b0;
                                }
                                *a = t;
                                *b = q;
                                result = 1;
                                break;
                            } else {
                                k--;
                            }
                        }
                    }
                }
                prev = p[1];
                p += 2;
            }
        }
    }
    return result;
}

s32 func_0202caac(s32 c, u8 *p, s32 n, s32 *arr, s32 cnt) {
    s32 result = 0;
    s32 prev;
    s32 i;
    s32 d;
    if (p != NULL && n > 0) {
        prev = 0;
        for (i = 0; i < n; i++) {
            d = p[1] - prev;
            if (d > 0) {
                if (c == func_0209949c((u8)d)) {
                    if (func_0202cb10(func_02060b9c(p[0]), arr, cnt) == 0) {
                        result++;
                    }
                }
            } else {
                result = 0;
                break;
            }
            prev = p[1];
            p += 2;
        }
    }
    return result;
}

s32 func_0202cb10(s32 v, s32 *arr, s32 n) {
    s32 i;
    if (arr != NULL) {
        for (i = 0; i < n; i++) {
            if (*arr == v) {
                return 1;
            }
            arr++;
        }
    }
    return 0;
}

void func_0202cd2c(u16 *out, s32 c) {
    func_0202cd5c(out, data_020c7b68, 4, c);
}

void func_0202cd44(u16 *out, s32 c) {
    func_0202cd5c(out, data_020c7b1c, 3, c);
}

void func_0202cd5c(u16 *out, u32 *tbl, s32 idx, s32 c) {
    u16 h[2];
    u32 len;
    Unk_0202cd5c_Obj o1, o3, o2, o4;
    s32 r;
    r = func_02063b8c(idx);
    *out = 0xfff1;
    tbl = tbl + r * 2;
    len = tbl[1];
    func_0206338c(&o1, tbl[0], tbl[1]);
    o2.v[0] = o1.v[0];
    o2.v[1] = o1.v[1];
    func_02062f94(&h[0], &o2, c, 0, 1, 1, (u32)&len);
    *out = h[0];
    func_02063388(&o2);
    if (*out == 0xfff1) {
        func_0206338c(&o3, tbl[0], len);
        o4.v[0] = o3.v[0];
        o4.v[1] = o3.v[1];
        func_02062f44(&h[1], &o4);
        *out = h[1];
        func_02063388(&o4);
        func_02063388(&o3);
    }
    func_02063388(&o1);
}

void func_0202cdf4(u16 *out) {
    Unk_0202cd5c_Obj o1, o2;
    u32 zero;
    func_0206338c(&o1, data_020c7a84[func_02063b8c(4)], 0);
    o2.v[0] = o1.v[0];
    o2.v[1] = o1.v[1];
    zero = 0;
    func_02062f94(out, &o2, zero, zero, 1, 1, 0);
    func_02063388(&o2);
    func_02063388(&o1);
}

s32 func_0202ce44(u8 *p, s32 n) {
    s32 result = -1;
    u8 sum = 0;
    s32 i;
    u8 r;
    for (i = 0; i < n; i++) {
        sum = sum + p[i];
    }
    if (sum != 0) {
        r = func_02063b8c(sum);
        sum = 0;
        for (i = 0; i < n; i++) {
            sum = sum + p[i];
            if (r < sum) {
                result = i;
                break;
            }
        }
    }
    return result;
}

class Unk_0202ce90_Base {
public:
    void func_0202ce90();
    u8 pad_00[0xfc];
    Unk_0202ce90_Parent *unk_fc;
};

void Unk_0202ce90_Base::func_0202ce90() {
    func_02019614(unk_fc->unk_564, 2, data_020c6cc8);
}

void *func_0202ceb0(void *p) {
    u8 *e = (u8 *)func_02097e68(p, 0);
    void *r = NULL;
    s32 i;
    for (i = 0; i < 10; i++) {
        if ((u8)(func_02065578(e) + 0xf9) <= 1) {
            r = e;
            break;
        }
        e += 0xf4;
    }
    return r;
}

s32 func_0202cee4(void *p, u16 *q) {
    u16 *e = func_02097f6c(p, 0);
    s32 i;
    BOOL v;
    for (i = 0; i < 15; i++) {
        if (func_02097eb0(p, i) == 2) {
            if (func_0204b2d4(e) != 0) {
                v = (func_0204b25c(e) == func_0204b25c(q)) ? TRUE : FALSE;
            } else {
                v = (e[0] == q[0]) ? TRUE : FALSE;
            }
            if (v) {
                return i;
            }
        }
        e++;
    }
    return -1;
}

class Unk_020d8938;
typedef void (Unk_020d8938::*Unk_020d8938_Fn)();

class Unk_020d8938 {
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
    virtual void vfunc_24(u32 a);
    virtual void vfunc_28(u32 a);
    virtual void vfunc_2c(u32 a);
    virtual void vfunc_30(u32 a);
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
    virtual s32 vfunc_60();
    virtual void vfunc_64();
    virtual void vfunc_68();
    virtual void vfunc_6c();
    virtual void vfunc_70();

    Unk_0202cf9c_Scene *func_02015738();

    u8 pad_04[0xf0];
    Unk_020d8938_Fn unk_f4;
};

void Unk_020d8938::vfunc_70() {
    if (unk_f4 != 0) {
        (this->*unk_f4)();
        unk_f4 = *(Unk_020d8938_Fn *)data_0213a740;
    }
}

void Unk_020d8938::vfunc_30(u32 a) {
    Unk_0202cf9c_Scene *s = func_02015738();
    if (s != NULL) {
        s->vfunc_a4(4, a);
    }
}

void Unk_020d8938::vfunc_2c(u32 a) {
    Unk_0202cf9c_Scene *s = func_02015738();
    if (s != NULL) {
        s->vfunc_a4(3, a);
    }
}

void Unk_020d8938::vfunc_28(u32 a) {
    Unk_0202cf9c_Scene *s = func_02015738();
    if (s != NULL) {
        s->vfunc_a4(2, a);
    }
}

void Unk_020d8938::vfunc_24(u32 a) {
    Unk_0202cf9c_Scene *s = func_02015738();
    if (s != NULL) {
        s->vfunc_a4(1, a);
    }
}

void Unk_020d8938::vfunc_20() {
    Unk_0202cf9c_Scene *s = func_02015738();
    if (s != NULL) {
        s->vfunc_a4(0, 0);
    }
}

s32 Unk_020d8938::vfunc_60() {
    return func_020143fc(this, 0);
}

void func_0202d048(u8 *self, s32 *pa, s32 *pb, s32 c, s32 d) {
    if (self[0x138] == 0) {
        if (d == 0) {
            if (func_0209750c() != 0) {
                d = func_0209888c(func_0209750c());
            }
        }
        if (d != 0 && c != 0) {
            if (*pa == 0) {
                *pb = func_0207f7cc(c, d);
                if (*pb == -1) {
                    *pb = func_0207f5a4(c);
                    if (*pb != -1) {
                        *pa = func_0207f86c(c);
                        func_02080f4c(*pa, d, 0, 0);
                        func_02077a1c(c, *pb);
                    }
                }
            } else {
                func_02080ecc(*pa, d, 0, 0);
                func_0207799c(c, *pb);
            }
        }
    }
}

extern "C" {
void func_0202cb34(s32 *out, s32 *cnt) {
    Unk_0202cb34_Grid *g;
    u8 flags;
    s32 i, j, x;
    u16 * volatile v;
    s32 z;
    u16 val;
    s32 w, h;
    g = func_0204da0c();
    flags = 0;
    *cnt = 0;
    if (g != NULL) {
        volatile Unk_0202cb34_Size sz;
        Unk_0202cb34_Size *ps = &g->unk_04;
        sz.x = ps->x;
        sz.y = ps->y;
        volatile s32 y = 1;
        volatile s32 x0 = 1;
        volatile s32 nul = 0;
        volatile s32 zero = 0;
        volatile s32 i0 = 0;
        volatile s32 j0 = 0;
        volatile s32 f0 = 0;
        volatile s32 t1 = 1;
        volatile s32 t2 = 1;
        volatile s32 F1 = 0, F2 = 0, F3 = 0, F4 = 0, F5 = 0, F6 = 0, F7 = 0, F8 = 0;
        for (; y < sz.y - 1; y++) {
            for (x = x0; x < sz.x - 1; x++) {
                u8 *cell;
                if ((u32)x < (u32)g->unk_04.x && (u32)y < (u32)g->unk_04.y && g->unk_00 != NULL) {
                    cell = g->unk_00 + (y * g->unk_04.x + x) * 0x28;
                } else {
                    cell = (u8 *)nul;
                }
                if (cell == NULL) {
                    continue;
                }
                z = zero;
                v = func_02037558(cell, z, z, z);
                if (v == NULL) {
                    continue;
                }
                for (i = i0; i < 16; i++) {
                    for (j = j0; j < 16; j++) {
                        s32 a, b8, b7, b6, b5, b4, b3, b2, b1;
                        val = *v;
                        a = f0;
                        if (val >= 0xc8 && val <= 0xcf) {
                            a = t1;
                        }
                        if (a == 1) {
                            if ((flags & 2) != 0) {
                                flags |= 2;
                            }
                        } else {
                            b8 = b7 = b6 = b5 = b4 = b3 = b2 = t2;
                            b1 = F1;
                            if (val <= 5) {
                                b1 = t2;
                            }
                            if (b1 == 0) {
                                if (val < 6 || val > 0xb) {
                                    b2 = F2;
                                }
                            }
                            if (b2 == 0) {
                                if (val < 0xc || val > 0x11) {
                                    b3 = F3;
                                }
                            }
                            if (b3 == 0) {
                                if ((val < 0x12 || val > 0x19) && val != 0x1c) {
                                    b4 = F4;
                                }
                            }
                            if (b4 == 0) {
                                if ((val < 0x8a || val > 0x8f) && (val < 0x90 || val > 0x95) && (val < 0x96 || val > 0x9b) && (val < 0x9c || val > 0xa3) && val != 0xa5) {
                                    b5 = F5;
                                }
                            }
                            if (b5 == 0) {
                                if (val != 0x1a) {
                                    b6 = F6;
                                }
                            }
                            if (b6 == 0) {
                                if (val != 0xa4) {
                                    b7 = F7;
                                }
                            }
                            if (b7 == 0) {
                                if (val != 0x1d) {
                                    b8 = F8;
                                }
                            }
                            if (b8 == 1) {
                                if ((flags & 4) != 0) {
                                    flags |= 4;
                                }
                            }
                        }
                        if (flags == 6) {
                            break;
                        }
                        v++;
                    }
                    if (flags == 6) {
                        break;
                    }
                }
                if (flags == 6) {
                    break;
                }
            }
            if (flags == 6) {
                break;
            }
        }
    }
    for (i = 0; i < 4; i++) {
        if (((flags >> i) & 1) == 0) {
            *out = data_020c7504[i];
            (*cnt)++;
            out++;
        }
    }
}
}
