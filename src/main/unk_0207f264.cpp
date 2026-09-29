#include "types.h"

struct Unk_0207f264_Str {
    u32 v[7];
    Unk_0207f264_Str();
    ~Unk_0207f264_Str();
};
struct Unk_0207fb4c_Str {
    u32 v[7];
};

struct Unk_0207f264_Entry {
    u8 b[0x68];
};

extern "C" {
void *func_0209750c();
void *func_0209888c(void *);
s32 func_02094218(void *);
u32 func_020805c4(u32);
s32 func_020030b4(u32);
s32 func_02002ff8(u32);
u8 *func_020815b4(u32);
void func_020940d0(void *, void *);
void func_02080d4c(void *, void *);
s32 func_020a79dc(void *, void *);
void func_020a7c3c(void *);
void func_02080cf8(void *, void *);
void func_02080ccc(void *, u32, u32);
s32 func_02080dd8(void *);
s32 func_02080f94(void *);
s32 func_02080de0(void *, void *);
u16 *func_02080e1c(void *);
u32 func_02080e18(void *);
s32 func_02128930(void *, void *, u32);
void func_02080f4c(void *, void *, u32, u32);
u16 *func_0209409c();
s32 func_02097740(u32, u32);
s32 func_02063954(void *);
s32 func_02080d90(void *);
void *func_02080ec8(void *);
s32 func_0209d3d0(void *, void *, u32);
s32 func_0209d374(void *, void *);
s32 func_020941e8(u32, void *);
void func_02135558(void *, void *, void *);
void func_020942c8();
u32 func_0207cdb0();
u8 func_0209a6e4(u32, u32, u32);
u32 func_02081318(u8 *);
u32 func_0207a484(u32);
u32 func_0204bdb8();
u32 func_0207e334(u32);
s32 func_0207e1f0(u32);
u32 func_0209865c(void *);
s32 func_02099ed4(void *, u32);
void func_0209d498(void *);
void func_02116048(void *, void *, u32);
s32 func_0203f508(void *, void *);
void func_0209d2c0(void *, u32);
void func_02115fb4(void *, u32, u32);
void func_020811cc(void *, void *, u32);
void func_02081218(void *);
void func_02050fd0(void *);
void func_020a77f8(void *, u32);
void func_02081200(void *);

extern u16 data_021d7352[];
extern u8 data_021d735c[];
extern u32 data_021cc850;
extern u8 data_021cc8fc[];
extern u8 data_021cc868[];
extern u8 data_020cc060[];

Unk_0207f264_Entry *func_0207f854(u32 a, void *b);
s32 func_0207f88c(Unk_0207f264_Entry *t, void *id);
s32 func_0207f804(Unk_0207f264_Entry *t);
s32 func_0207f480(Unk_0207f264_Entry *t);
s32 func_0207fda8(Unk_0207f264_Entry *t);
s32 func_0207f79c(Unk_0207f264_Entry *t);
s32 func_0207f728(Unk_0207f264_Entry *t, void *o);
s32 func_0207f660(Unk_0207f264_Entry *t, s32 (*cb)(void *, void *, void *));
s32 func_0207f5e0(void *a, u16 *p, void *c);
s32 func_0207f61c(u32 a, u16 *p, u32 c);
s32 func_0207f5d0(Unk_0207f264_Entry *t);
s32 func_0207f60c(Unk_0207f264_Entry *t);
s32 func_0207f5a4(Unk_0207f264_Entry *t);
Unk_0207f264_Entry *func_0207f58c(Unk_0207f264_Entry *t);
Unk_0207f264_Entry *func_0207f86c(Unk_0207f264_Entry *t, u32 i);
BOOL func_0207f8c0(Unk_0207f264_Entry *t, u32 i);
u8 *func_0207f91c(Unk_0207f264_Entry *t, u32 i);
u32 func_0207f9a4(u32 a);
u8 *func_0207fae4(u32 a);
void func_0207fb34(u32 a, void *b);

void func_0207f264(u32 a, u32 b, void *c) {
    Unk_0207f264_Entry *e1, *e2;
    void *t;
    if (c == NULL) {
        c = func_0209750c();
    }
    if (c != NULL) {
        t = func_0209888c(c);
        if (func_02094218(t) != 0 && func_020030b4(func_020805c4(a)) != 0 && func_020030b4(func_020805c4(b)) != 0) {
            Unk_0207f264_Entry *r6 = NULL, *r7 = NULL;
            e1 = func_0207f854(b, t);
            e2 = func_0207f854(a, t);
            Unk_0207f264_Str s1;
            Unk_0207f264_Str s2;
            if (e1 != NULL && e2 != NULL) {
                func_020940d0(t, &s2);
                func_02080d4c(e1, &s1);
                if (func_020a79dc(&s2, &s1) == 0) {
                    r7 = e1;
                    r6 = e2;
                } else {
                    func_020a7c3c(&s1);
                    func_02080d4c(e2, &s1);
                    if (func_020a79dc(&s2, &s1) == 0) {
                        r7 = e2;
                        r6 = e1;
                    }
                }
                if (r7 != NULL && r6 != NULL) {
                    func_020a7c3c(&s1);
                    func_02080d4c(r7, &s1);
                    func_02080cf8(r6, &s1);
                }
            }
        }
    }
}

Unk_0207f264_Entry *func_0207f344(u32 a, u32 b, u32 c, void *d) {
    Unk_0207f264_Entry *e = func_0207f854(a, d);
    if (e != NULL) {
        func_02080ccc(e, b, c);
    }
    return e;
}

Unk_0207f264_Entry *func_0207f368(u32 a, void *b, void *c) {
    Unk_0207f264_Entry *e = func_0207f854(a, c);
    if (e != NULL) {
        func_02080cf8(e, b);
    }
    return e;
}

void func_0207f38c(u32 a, void *b, void *c) {
    Unk_0207f264_Entry *e = func_0207f854(a, c);
    if (e == NULL || func_02094218(c) == 0 || func_02080dd8(e) <= -10) {
        func_020940d0(c, b);
    } else {
        func_02080d4c(e, b);
    }
}

BOOL func_0207f3d0(u32 a, u32 b, void *c) {
    s32 x, y;
    if (func_020030b4(func_020805c4(a)) == 0) {
        return FALSE;
    }
    if (func_020030b4(func_020805c4(b)) == 0) {
        return TRUE;
    }
    x = func_0207f480((Unk_0207f264_Entry *)a);
    y = func_0207f480((Unk_0207f264_Entry *)b);
    if (x > y) {
        return TRUE;
    }
    if (x < y) {
        return FALSE;
    }
    x = func_0207fda8((Unk_0207f264_Entry *)a);
    y = func_0207fda8((Unk_0207f264_Entry *)b);
    if (x != 0) {
        if (y == 0) {
            return TRUE;
        }
    } else if (y != 0) {
        return FALSE;
    }
    x = func_0207f79c((Unk_0207f264_Entry *)a);
    y = func_0207f79c((Unk_0207f264_Entry *)b);
    if (x > y) {
        return TRUE;
    }
    if (x < y) {
        return FALSE;
    }
    x = func_0207f728((Unk_0207f264_Entry *)a, c);
    y = func_0207f728((Unk_0207f264_Entry *)b, c);
    if (x < y) {
        return TRUE;
    }
    return FALSE;
}

s32 func_0207f480(Unk_0207f264_Entry *t) {
    s32 n = 0;
    s32 i = 0;
    do {
        if (func_02080f94(t) != 0) {
            n++;
        }
        t++;
        i++;
    } while (i < 8);
    return n;
}

s32 func_0207f4a4(Unk_0207f264_Entry *t, Unk_0207f264_Entry **out, void *id, s32 mode) {
    s32 n = 0;
    if ((u32)data_021d7352 != 0 && func_02094218(id) != 0) {
        s32 i = 0;
        do {
            Unk_0207f264_Entry *e = &t[i];
            if (func_02080f94(e) != 0 && func_02080de0(e, id) == 0) {
                switch (mode) {
                case 0: {
                    u16 *p = func_02080e1c(e);
                    if (p[0] == data_021d7352[0] && func_02128930(p + 1, (void *)((u8 *)data_021d7352 + 2), 8) == 0) {
                        out[n] = e;
                        n++;
                    }
                    break;
                }
                case 1: {
                    u16 *p = func_02080e1c(e);
                    if (p[0] != data_021d7352[0] || func_02128930(p + 1, (void *)((u8 *)data_021d7352 + 2), 8) != 0) {
                        out[n] = e;
                        n++;
                    }
                    break;
                }
                default:
                    out[n] = e;
                    n++;
                    break;
                }
            }
            i++;
        } while (i < 8);
    }
    return n;
}

Unk_0207f264_Entry *func_0207f55c(Unk_0207f264_Entry *t, void *b) {
    Unk_0207f264_Entry *e = func_0207f854((u32)t, b);
    if (e == NULL) {
        e = func_0207f58c(t);
        if (e != NULL) {
            func_02080f4c(e, b, 0, 0);
        }
    }
    return e;
}

Unk_0207f264_Entry *func_0207f58c(Unk_0207f264_Entry *t) {
    return func_0207f86c(t, func_0207f5a4(t));
}

s32 func_0207f5a4(Unk_0207f264_Entry *t) {
    s32 r = func_0207f804(t);
    if (r == -1) {
        r = func_0207f60c(t);
    }
    if (r == -1) {
        r = func_0207f5d0(t);
    }
    return r;
}

s32 func_0207f5d0(Unk_0207f264_Entry *t) {
    return func_0207f660(t, (s32 (*)(void *, void *, void *))func_0207f5e0);
}

s32 func_0207f5e0(void *a, u16 *p, void *c) {
    u16 *q = func_0209409c();
    if (p[0] != q[0] || func_02128930(p + 1, q + 1, 8) != 0) {
        return 1;
    }
    return 0;
}

s32 func_0207f60c(Unk_0207f264_Entry *t) {
    return func_0207f660(t, (s32 (*)(void *, void *, void *))func_0207f61c);
}

s32 func_0207f61c(u32 a, u16 *p, u32 c) {
    BOOL r = FALSE;
    u16 *q = func_0209409c();
    if (p[0] == q[0] && func_02128930(p + 1, q + 1, 8) == 0) {
        if (func_02097740(c, a) == ~r) {
            r = TRUE;
        }
    }
    return r;
}

s32 func_0207f660(Unk_0207f264_Entry *t, s32 (*cb)(void *, void *, void *)) {
    s32 res = -1;
    if (func_02063954(data_021d7352) != 0) {
        Unk_0207f264_Entry *best = NULL;
        s32 i = 0;
        do {
            if (func_02080f94(t) != 0) {
                if (cb((void *)func_02080e18(t), data_021d7352, data_021d735c) != 0) {
                    if (best != NULL) {
                        if (func_02080d90(best) == func_02080d90(t)) {
                            if (func_02080dd8(best) > func_02080dd8(t)) {
                                best = t;
                                res = i;
                            } else if (func_02080dd8(best) == func_02080dd8(t)) {
                                void *pa = func_02080ec8(best);
                                void *pb = func_02080ec8(t);
                                if (func_0209d3d0(pa, pb, 0x3f) == 1) {
                                    best = t;
                                    res = i;
                                }
                            }
                        } else if (func_02080d90(t) == 0) {
                            best = t;
                            res = i;
                        }
                    } else {
                        best = t;
                        res = i;
                    }
                }
            }
            t++;
            i++;
        } while (i < 8);
    }
    return res;
}

s32 func_0207f728(Unk_0207f264_Entry *t, void *o) {
    s32 best = 0x7fffffff;
    s32 i = 0;
    for (; i < 8; t++, i++) {
        if (func_02080f94(t) != 0) {
            void *p = func_02080ec8(t);
            s32 r = func_0209d3d0(o, p, 0x3f);
            if (r == 1) {
                s32 d = func_0209d374(p, o);
                if (d < best) {
                    best = d;
                }
            } else if (r == -1) {
                s32 d = func_0209d374(o, p);
                if (d < best) {
                    best = d;
                }
            } else {
                return 0;
            }
        }
    }
    return best;
}

s32 func_0207f79c(Unk_0207f264_Entry *t) {
    s32 best = -0x80;
    s32 i = 0;
    do {
        if (func_02080f94(t) != 0) {
            s32 v = func_02080dd8(t);
            if (v > best) {
                best = v;
            }
        }
        t++;
        i++;
    } while (i < 8);
    return best;
}

s32 func_0207f7cc(Unk_0207f264_Entry *t, void *id) {
    s32 i = 0;
    for (; i < 8; i++) {
        if (func_020941e8(func_02080e18(&t[i]), id) != 0) {
            return i;
        }
    }
    return -1;
}

struct Unk_0207f804_Str {
    u32 v[4];
    Unk_0207f804_Str();
    ~Unk_0207f804_Str();
    void func_02094294();
};

s32 func_0207f804(Unk_0207f264_Entry *t) {
    static Unk_0207f804_Str s;
    s.func_02094294();
    return func_0207f88c(t, &s);
}

Unk_0207f264_Entry *func_0207f854(u32 a, void *b) {
    return func_0207f86c((Unk_0207f264_Entry *)a, func_0207f88c((Unk_0207f264_Entry *)a, b));
}

Unk_0207f264_Entry *func_0207f86c(Unk_0207f264_Entry *t, u32 i) {
    Unk_0207f264_Entry *e = NULL;
    if (func_0207f8c0(t, i)) {
        e = &t[i];
    }
    return e;
}

s32 func_0207f88c(Unk_0207f264_Entry *t, void *id) {
    s32 i = 0;
    for (; i < 8; i++) {
        if (func_02080de0(&t[i], id) != 0) {
            return i;
        }
    }
    return -1;
}

BOOL func_0207f8c0(Unk_0207f264_Entry *t, u32 i) {
    if (i < 8) {
        return TRUE;
    }
    return FALSE;
}

u8 *func_0207f8cc(u32 a) {
    u8 *p = func_020815b4(func_02002ff8(func_020805c4(a)));
    if (p != NULL) {
        return p + 0x3a;
    }
    return NULL;
}

u8 func_0207f8ec(u32 a, u32 b) {
    u8 *p = func_0207f91c((Unk_0207f264_Entry *)a, func_0207cdb0());
    if (p != NULL) {
        return func_0209a6e4(b, p[0], p[1]);
    }
    return 0;
}

u8 *func_0207f91c(Unk_0207f264_Entry *t, u32 i) {
    u8 *r = NULL;
    if (i < 6) {
        u8 *p = func_020815b4(func_02002ff8(func_020805c4((u32)t)));
        if (p != NULL) {
            r = p + 0x1a + i * 2;
        }
    }
    return r;
}

u8 *func_0207f948(u32 a) {
    u8 *r = NULL;
    u8 *p = func_020815b4(func_02002ff8(func_020805c4(a)));
    if (p != NULL) {
        r = p;
    }
    return r;
}

u8 *func_0207f968(u32 a) {
    u8 *r = NULL;
    u8 *p = func_020815b4(func_02002ff8(func_020805c4(a)));
    if (p != NULL) {
        r = p;
        r += 0x29;
    }
    return r;
}

u32 func_0207f988(u32 a) {
    u32 i = func_0207f9a4(a);
    if (i >= 0x21) {
        i = 0;
    }
    return data_020cc060[i];
}

u32 func_0207f9a4(u32 a) {
    u32 r = 0x21;
    u8 *p = func_020815b4(func_02002ff8(func_020805c4(a)));
    if (p != NULL) {
        r = p[0x4c];
    }
    return r;
}

u32 func_0207f9c4(u32 a) {
    u8 *p = func_0207fae4(a);
    u32 r = 0xc;
    if (p != NULL) {
        r = func_02081318(p);
    }
    return r;
}

BOOL func_0207f9e0(u32 a) {
    if (func_020030b4(func_020805c4(a)) != 0) {
        u32 r7 = func_0207a484(func_0204bdb8() + 0x8a3c);
        void *r6 = func_0209750c();
        BOOL r = FALSE;
        if (r7 != func_0207e334(a) && func_0207e1f0(a) == 3 && r6 != NULL) {
            u32 q = func_0209865c(r6);
            u32 u = func_020805c4(a);
            if (func_02099ed4((void *)(q + 0x88), u) == 0) {
                r = TRUE;
            }
        }
        return r;
    }
    return FALSE;
}

struct Unk_0207fa50_Rec {
    u16 id;
    u8 pad[10];
};

s32 func_0207fa50(u32 a, s32 b, u8 *c) {
    if (func_020030b4(func_020805c4(a)) != 0 && func_0207e334(a) != -1) {
        u32 id = func_0207e334(a);
        u32 v[2];
        u32 w[2];
        Unk_0207fa50_Rec recs[7];
        s32 i;
        s32 j;
        s32 n;
        v[0] = 0;
        v[1] = 0;
        if (c == NULL) {
            func_0209d498(v);
        } else {
            func_02116048(c, v, 8);
        }
        for (i = 0; i <= b; i++) {
            Unk_0207fa50_Rec *e = recs;
            func_02116048(v, w, 8);
            n = func_0203f508(recs, w);
            for (j = 0; j < n; e++, j++) {
                if (e->id == id) {
                    return ((u8 *)v)[5];
                }
            }
            func_0209d2c0(v, 1);
        }
    }
    return -1;
}

u8 *func_0207fae4(u32 a) {
    u8 *r = NULL;
    u8 *p = func_020815b4(func_02002ff8(func_020805c4(a)));
    if (p != NULL) {
        r = p + 0x26;
    }
    return r;
}

void func_0207fb04(u32 a, void *b, s32 c) {
    func_02115fb4((void *)(a + 0x6de), 0, 10);
    if (c > 10) {
        c = 10;
    }
    func_02116048(b, (void *)(a + 0x6de), c);
}


void func_0207fb4c(u32 a, u32 b) {
    Unk_0207fb4c_Str s;
    func_02081218(&s);
    func_02050fd0(&s);
    func_020a77f8(&s, b);
    func_0207fb34(a, &s);
    func_02081200(&s);
}

void func_0207fb34(u32 a, void *b) {
    func_020811cc(b, (void *)(a + 0x6de), 10);
}
}
