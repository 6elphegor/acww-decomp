#include "types.h"

struct Unk_0202be64_Rec {
    u32 v[2];
    u8 b(u32 i) { return ((u8 *)this)[i]; }
};

class Unk_0202be64_Host {
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
    virtual void *vfunc_64();
};

struct Unk_0202c60c_Entry {
    u8 unk_00;
    u8 unk_01;
    u8 unk_02;
};

struct Unk_0202c60c {
    Unk_0202c60c_Entry *unk_00;
    u8 unk_04;
};

struct Unk_0202c148_Tbl {
    Unk_0202c60c **unk_00;
};

struct Unk_0202c224_Local {
    u32 unk_00;
    u32 unk_04;
};

extern "C" {
void *func_0209a940(void *);
s32 func_0209ac64(void *);
s32 func_0209a938(void *);
s32 func_02063b8c(s32);
u16 *func_0209ab94(void *);
u16 *func_0209a8e8(void *);
Unk_0202be64_Rec *func_0209a8ec(void *);
s32 func_0209ad68(void *);
s32 func_0209abc4(void *);
s32 func_0209ad28(void *);
s32 func_0209a8f4();
void *func_0209a92c(void *);
s32 func_02094218(void *);
s32 func_0209d3d0(void *, void *, s32);
s32 func_0209d374(void *, void *);
void func_02077520(void *, void *);
s32 func_0202ce44(void *, s32);
s32 func_0202c8f0(u16 *, s32, s32, u32);
s32 func_0202ca00(u16 *, s32 *, s32, void *, u32, void *, s32);
void func_0202cb34(void *, s32 *);
s32 func_0202c654(u16 *, s32, s32, s32);
s32 func_ov003_02227e08(void *, u32);
s32 func_020e9650(void *, void *);
s32 func_0204f0f4(u32);
s32 func_0204f100(u32);
Unk_0202c148_Tbl *func_0204f234(s32, s32);
s32 func_0209948c(u32);
void *func_02060e24(s32);
s32 func_02060de4(u32);
void func_0209d498(void *);
void func_02115fb4(void *, s32, s32);
void func_02116048(void *, void *, s32);
extern s8 data_020c7510[];
extern u8 data_020c7528[];
extern u8 data_020e416c;
extern u8 data_021be60c[];
extern u8 data_021be5e4[];
extern u8 data_021be5e0[];
}

static inline BOOL Unk_0202be64_InRange(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) {
        r = TRUE;
    }
    return r;
}

static inline BOOL Unk_0202c094_IsZero(u8 v) {
    return v == 0 ? TRUE : FALSE;
}

extern "C" {

s32 func_0202bf84(Unk_0202be64_Host *a, void *b, Unk_0202be64_Rec *y, u32 flag);
s32 func_0202c60c(s32 key, Unk_0202c60c *p);
s32 func_0202c558(s32 key, Unk_0202c60c **p);
s32 func_0202c584(u16 *a, s32 *b, s32 key, Unk_0202c60c *row);
s32 func_0202c4d8(u16 *a, s32 *b, s32 key, Unk_0202c60c **p);
s32 func_0202c420(u16 *a, s32 *b, s32 *c, s32 key, Unk_0202c148_Tbl *g, u8 lo, u8 hi);
s32 func_0202c404(u16 *a, s32 *b, s32 c, s32 d, Unk_0202c148_Tbl *e);
s32 func_0202c35c(u16 *a, s32 lo, s32 hi, s32 d, u8 e, u8 x, u8 y);

void func_0202be64(Unk_0202be64_Host *a, void *b, u8 *arr, void *c, u8 flag, Unk_0202be64_Rec *rec) {
    void *s = func_0209a940(b);
    if (func_0209ac64(s) == 0) {
        s32 r6 = func_0209a938(b);
        if (func_0202bf84(a, b, rec, flag)) {
            s32 r7;
            if (r6 < 5) {
                r7 = arr[r6];
            } else {
                r7 = 0;
            }
            s32 rnd = func_02063b8c(100);
            u16 val = *func_0209ab94(s);
            switch (r6) {
            case 0:
                break;
            case 1:
            case 3:
            case 4:
                if (rnd < r7) {
                    if (func_0202c654(&val, rec->b(2), rec->b(2), rec->b(4))) {
                        *func_0209a8e8(b) = val;
                    }
                }
                break;
            case 2:
                if (rnd < r7) {
                    s32 k = func_0202ce44(c, 4);
                    if (func_0202c8f0(&val, k, k + 1, rec->b(4))) {
                        *func_0209a8e8(b) = val;
                    }
                }
                break;
            }
            if (a->vfunc_64() != NULL) {
                if (Unk_0202be64_InRange(func_0209a8e8(b), 0x12b0, 0x12e7)) {
                    func_02077520(a->vfunc_64(), func_0209a8e8(b));
                }
            }
            u32 x = rec->v[0];
            u32 y = rec->v[1];
            Unk_0202be64_Rec *d = func_0209a8ec(b);
            d->v[0] = x;
            d->v[1] = y;
        }
    }
}

s32 func_0202bf84(Unk_0202be64_Host *a, void *b, Unk_0202be64_Rec *y, u32 flag) {
    void *s = func_0209a940(b);
    s32 r4 = func_0209a938(b);
    s32 r6;
    if (func_0209ad68(s) != 0 && func_0209abc4(s) == 0 && func_0209ad28(s) == 0 && r4 != 0
        && func_02094218(func_0209a92c(b)) != 0) {
        r6 = func_0209ac64(s);
        if (r4 < func_0209a8f4()) {
            if (r6 == 0) {
                if (!Unk_0202be64_InRange(func_0209a8e8(b), 0x12b0, 0x12e7)) {
                    goto ok;
                }
            }
            if (r6 != 1) {
                goto fail;
            }
            if (Unk_0202be64_InRange(func_0209a8e8(b), 0x12e8, 0x131f)) {
                goto fail;
            }
        ok:
            Unk_0202be64_Rec *rec = func_0209a8ec(b);
            if (flag == 0) {
                return 1;
            }
            if (*(long long *)rec == 0) {
                goto fail;
            }
            s32 r0 = func_0209d3d0(y, rec, 0x3f);
            if (r0 == 1) {
                s32 t;
                if (r4 < 5) {
                    t = data_020c7510[r4];
                } else {
                    t = 0;
                }
                if (t > 0) {
                    if (func_0209d374(rec, y) >= t) {
                        return 1;
                    }
                }
            } else if (r0 == -1) {
                return 1;
            }
        }
    }
fail:
    return 0;
}

s32 func_0202c0fc(s32 key, s8 *arr, s32 n);

s32 func_0202c094(void *a, void *b, s32 c, void *d, s32 e) {
    if (Unk_0202c094_IsZero(data_020e416c)) {
        s32 i;
        for (i = 0; i < 8; i++) {
            s32 t = func_0202c0fc(func_ov003_02227e08(a, (u8)i), (s8 *)b, c);
            if (t != -1) {
                if (func_020e9650(d, a) < e) {
                    return t;
                }
            }
        }
    }
    return -1;
}

s32 func_0202c0fc(s32 key, s8 *arr, s32 n) {
    s32 i;
    for (i = 0; i < n; arr++, i++) {
        if (*arr == key) {
            return key;
        }
    }
    return -1;
}

s32 func_0202c120(s32 v) {
    switch (v) {
    case 12:
        return 0;
    case 1:
    case 2:
    case 4:
        return 1;
    }
    return 2;
}

s32 func_0202c148(u16 *p, s32 lo, s32 hi, s32 id, u8 e) {
    if (Unk_0202be64_InRange(p, 0x12e8, 0x131f)) {
        Unk_0202c148_Tbl *tbl = func_0204f234(id, func_0204f0f4(e));
        if (tbl != NULL && tbl->unk_00 != NULL) {
            s32 prev = 3;
            u32 idx = (u8)(Unk_0202be64_InRange(p, 0x12e8, 0x131f) ? *p - 0x12e8 : -1);
            for (; lo <= hi; lo++) {
                s32 t = func_0204f100((u8)lo);
                if (t != prev) {
                    Unk_0202c60c *row = tbl->unk_00[t];
                    if (row != NULL) {
                        Unk_0202c60c_Entry *en;
                        s32 j;
                        for (j = 0; j < 2; row++, j++) {
                            en = row->unk_00;
                            if (en != NULL && row->unk_04 != 0) {
                                s32 k;
                                for (k = 0; k < row->unk_04; en++, k++) {
                                    if (en->unk_00 < 0x38 && en->unk_00 == idx && en->unk_02 != 0) {
                                        return 1;
                                    }
                                }
                            }
                        }
                    }
                    prev = t;
                }
            }
        }
    }
    return 0;
}

void func_0202c224(u16 *p) {
    Unk_0202c224_Local s;
    u8 buf[5];
    s32 out;
    s32 n;
    s.unk_00 = 0;
    s.unk_04 = 0;
    n = 5;
    func_0209d498(&s);
    u32 b4 = ((u8 *)&s)[4];
    Unk_0202c148_Tbl *tbl = func_0204f234(b4, func_0204f0f4(((u8 *)&s)[3]));
    if (tbl != NULL && tbl->unk_00 != NULL) {
        s32 t = func_0204f100(((u8 *)&s)[2]);
        if ((u32)t < 3) {
            Unk_0202c60c **row = tbl->unk_00 + t;
            func_02115fb4(buf, 0, n);
            while (n > 0) {
                s32 r = func_02063b8c(n);
                s32 j;
                for (j = 0; j < 5; j++) {
                    if (buf[j] == 0) {
                        if (r == 0) {
                            func_0202c4d8(p, &out, j, row);
                            buf[j] = 1;
                            break;
                        }
                        r--;
                    }
                }
                if (Unk_0202be64_InRange(p, 0x12e8, 0x131f)) {
                    break;
                }
                n--;
            }
        }
    }
}

s32 func_0202c2d0(u16 *a, s32 *outb, s32 c, s32 d, Unk_0202c148_Tbl *e) {
    s32 result = 0;
    s32 i;
    func_02116048(data_020c7528, data_021be60c, 5);
    for (i = 0; i < 5; i++) {
        s32 r4 = func_0202ce44(data_021be60c, 5);
        if (r4 < 0 || r4 >= 5) {
            break;
        }
        if (func_0202c404(a, (s32 *)c, d, r4, e) == 1) {
            *outb = r4;
            result = 1;
            break;
        }
        data_021be60c[r4] = 0;
    }
    return result;
}

s32 func_0202c33c(u16 *a, s32 b, s32 c, s32 d, u8 e) {
    return func_0202c35c(a, b, c, d, e, 0, 0x17);
}

s32 func_0202c35c(u16 *a, s32 lo, s32 hi, s32 d, u8 e, u8 x, u8 y) {
    Unk_0202c148_Tbl *tbl = func_0204f234(d, func_0204f0f4(e));
    if (tbl != NULL) {
        u8 mask = 0;
        s32 n = hi - lo + 1;
        s32 c1 = 0;
        s32 c2 = 0;
        for (; lo <= hi; lo++) {
            mask = mask | (1 << lo);
        }
        for (; n > 0; n--) {
            s32 r = func_02063b8c(n);
            s32 j;
            for (j = 0; j < 5; j++) {
                if ((mask >> j) & 1) {
                    if (r == 0) {
                        if (func_0202c420(a, &c1, &c2, j, tbl, x, y)) {
                            return 1;
                        }
                        mask &= ~(1 << j);
                        break;
                    }
                    r--;
                }
            }
        }
    }
    return 0;
}

s32 func_0202c404(u16 *a, s32 *b, s32 c, s32 d, Unk_0202c148_Tbl *e) {
    return func_0202c420(a, b, (s32 *)c, d, e, 0, 0x17);
}

s32 func_0202c420(u16 *a, s32 *b, s32 *c, s32 key, Unk_0202c148_Tbl *g, u8 lo0, u8 hi0) {
    Unk_0202c60c **r5 = g->unk_00;
    s32 result = 0;
    if (r5 != NULL) {
        s32 prev = 3;
        s32 cnt = 0;
        s32 i, t;
        func_02115fb4(data_021be5e4, cnt, prev);
        s32 lo = lo0;
        s32 hi = hi0;
        for (; lo <= hi; lo++) {
            t = func_0204f100((u8)lo);
            u8 *fl = data_021be5e4 + t;
            if (*fl == 0 && t != prev) {
                if (func_0202c558(key, r5 + t) > 0) {
                    *fl = 1;
                    cnt++;
                }
                prev = t;
            }
        }
        if (cnt > 0) {
            s32 r = func_02063b8c(cnt);
            for (i = 0; i < 3; r5++, i++) {
                if (data_021be5e4[i] == 1) {
                    if (r == 0) {
                        result = func_0202c4d8(a, b, key, r5);
                        *c = i;
                        break;
                    }
                    r--;
                }
            }
        }
    }
    return result;
}

s32 func_0202c4d8(u16 *a, s32 *b, s32 key, Unk_0202c60c **p) {
    Unk_0202c60c *r5 = *p;
    s32 result = 0;
    if (r5 != NULL) {
        s32 cnt = 0;
        s32 i;
        func_02115fb4(data_021be5e0, result, 2);
        for (i = 0; i < 2; i++) {
            if (func_0202c60c(key, r5 + i) > 0) {
                data_021be5e0[i] = 1;
                cnt++;
            }
        }
        if (cnt > 0) {
            s32 r = func_02063b8c(cnt);
            for (i = 0; i < 2; r5++, i++) {
                if (data_021be5e0[i] == 1) {
                    if (r == 0) {
                        result = func_0202c584(a, b, key, r5);
                        break;
                    }
                    r--;
                }
            }
        }
    }
    return result;
}

s32 func_0202c558(s32 key, Unk_0202c60c **p) {
    Unk_0202c60c *r6 = *p;
    s32 sum = 0;
    if (r6 != NULL) {
        s32 i;
        for (i = 0; i < 2; i++) {
            sum += func_0202c60c(key, r6 + i);
        }
    }
    return sum;
}

s32 func_0202c584(u16 *a, s32 *b, s32 key, Unk_0202c60c *row) {
    Unk_0202c60c_Entry *en = row->unk_00;
    s32 result = 0;
    s32 n;
    if (en != NULL && row->unk_04 != 0 && (n = func_0202c60c(key, row)) > 0) {
        s32 r = func_02063b8c(n);
        s32 i;
        for (i = 0; i < row->unk_04; en++, i++) {
            if (en->unk_02 != 0 && en->unk_00 < 0x38 && key == func_0209948c(en->unk_02)) {
                if (r == 0) {
                    u16 v;
                    if (en->unk_00 < 0x38) {
                        v = en->unk_00 + 0x12e8;
                    } else {
                        v = 0x12e8;
                    }
                    *a = v;
                    *b = en->unk_01;
                    result = 1;
                    break;
                }
                r--;
            }
        }
    }
    return result;
}

s32 func_0202c60c(s32 key, Unk_0202c60c *p) {
    Unk_0202c60c_Entry *en = p->unk_00;
    s32 cnt = 0;
    if (en != NULL && p->unk_04 != 0) {
        s32 i;
        for (i = 0; i < p->unk_04; en++, i++) {
            if (en->unk_00 < 0x38 && en->unk_02 != 0 && key == func_0209948c(en->unk_02)) {
                cnt++;
            }
        }
    }
    return cnt;
}

struct Unk_0202c654_Row {
    u8 *unk_00;
    u8 unk_04;
};

s32 func_0202c654(u16 *p, s32 lo, s32 hi, s32 id) {
    u8 *e;
    u8 n;
    s32 last;
    Unk_0202c654_Row *tbl;
    s32 d;
    u32 idx;
    s32 t;
    s32 cur;
    s32 k;
    s32 prev;

    if (Unk_0202be64_InRange(p, 0x12b0, 0x12e7)) {
        tbl = (Unk_0202c654_Row *)func_02060e24(id - 1);
        if (tbl != NULL) {
            prev = 6;
            idx = (u8)(Unk_0202be64_InRange(p, 0x12b0, 0x12e7) ? *p - 0x12b0 : -1);
            for (; lo <= hi; lo++) {
                t = func_02060de4((u8)lo);
                if (t != prev) {
                    e = tbl[t].unk_00;
                    if (e != NULL) {
                        last = 0;
                        k = 0;
                        n = tbl[0].unk_04;
                        for (; k < n; k++) {
                            cur = e[1];
                            d = cur - last;
                            if (idx == e[0] && d > 0) {
                                return 1;
                            }
                            last = cur;
                            e += 2;
                        }
                    }
                    prev = t;
                }
            }
        }
    }
    return 0;
}

void func_0202c708(u16 *p) {
    Unk_0202c224_Local s;
    u8 buf[5];
    s32 out;
    s32 v;
    u32 loc[4];
    s32 t;
    Unk_0202c654_Row *row;
    s32 n;
    Unk_0202c654_Row *tbl;
    s.unk_00 = 0;
    s.unk_04 = 0;
    n = 5;
    out = 0;
    func_0209d498(&s);
    t = func_02060de4(((u8 *)&s)[2]);
    tbl = (Unk_0202c654_Row *)func_02060e24(((u8 *)&s)[4] - 1);
    if (tbl != NULL && t >= 0 && t < 6) {
        v = 0;
        row = tbl + t;
        func_02115fb4(buf, 0, n);
        func_0202cb34(loc, &v);
        while (n > 0) {
            s32 r = func_02063b8c(n);
            s32 j;
            for (j = 0; j < 5; j++) {
                if (buf[j] == 0) {
                    if (r == 0) {
                        func_0202ca00(p, &out, j, row->unk_00, row->unk_04, loc, v);
                        buf[j] = 1;
                        break;
                    }
                    r--;
                }
            }
            if (Unk_0202be64_InRange(p, 0x12b0, 0x12e7)) {
                break;
            }
            n--;
        }
    }
}

}
