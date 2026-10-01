#include "types.h"

struct Unk_020434f0_P {
    s32 a;
    s32 b;
    Unk_020434f0_P() {}
    Unk_020434f0_P(const Unk_020434f0_P &o) : a(o.a), b(o.b) {}
};

extern "C" {
extern u8 data_021c4350[];
extern u8 data_021c3ea4[];
BOOL func_0204b038(u16 *p);
s32 func_0204ad98(u16 *p);
BOOL func_0204af08(u16 *p);
BOOL func_02043ba8(void);
u32 func_02042304(void *g, Unk_020434f0_P p);
BOOL func_02072e44(void *g);
s32 func_020974f8(void);
extern s32 data_020c9688[];
s32 func_0204e3a0(void *b, s32 x, s32 y);
s32 func_0204e88c(void *b, s32 x, s32 y);
BOOL func_0204962c(u16 *p);
BOOL func_0204a9c8(u16 *p);
void func_02043be4(void *a, u16 *p, u16 *q, u8 *r, u16 e);
extern u8 data_020cbb18[];
s32 func_02042588(void *g, void *a, s32 code, Unk_020434f0_P p, s32 v0, s32 v1, s32 v2, s32 v3, s32 v4, s32 v5);
BOOL func_02043e94(void *a);

s32 func_020434f0(void *a, u16 *id, Unk_020434f0_P *pos, s32 d) {
    s32 result = -1;
    if (func_02043e94(a)) {
        s32 c = *id;
        result = func_02042588(data_021c4350, a, 0xf, *pos, c, c, 0, 0, d, -1);
    }
    return result;
}

void func_02043b90(void) {
    data_021c3ea4[0x1c] = 0;
}
void func_02043b9c(void) {
    data_021c3ea4[0x1c] = 1;
}

s32 func_02072e88(void *g, s32 v);
s32 func_0209750c(void);
s32 func_02098044(s32 a, s32 b);
BOOL func_02043c28(u16 *out, u16 *out2, u16 c);
void func_02043db8(u16 *out, u8 *flag, u16 c);

struct Unk_020cbb18 {
    u8 pad[0x64];
    s32 unk_64;
};

BOOL func_02043ba8(void) {
    BOOL r = FALSE;
    Unk_020cbb18 *g = *(Unk_020cbb18 **)data_020cbb18;
    if (func_02072e88(g, g->unk_64) == 0) {
        if (func_02098044(func_0209750c(), 1) == 0) {
            if (data_021c3ea4[0x1c] == 0) {
                r = TRUE;
            }
        }
    }
    return r;
}

void func_02043be4(void *a, u16 *p, u16 *q, u8 *r, u16 e) {
    *p = e;
    *r = 1;
    if (func_02043c28(p, q, e)) {
        *r = 0;
    } else if (func_02043e94(a)) {
        func_02043db8(p, r, e);
    }
}

BOOL func_0204b08c(volatile u16 *p);
extern u16 data_020c91dc[];

static inline BOOL Unk_02043c28_InR(u16 &a, volatile u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    u16 x = *p;
    u16 b = *p;
    a = x;
    if (b >= lo && a <= hi) {
        r = TRUE;
    }
    return r;
}

static inline s32 Unk_02043c28_Idx(u32 v, u32 lo, u32 hi) {
    if (v >= lo && v <= hi) {
        return v - lo;
    }
    return -1;
}

BOOL func_02043c28(u16 *out, u16 *out2, u16 c) {
    volatile u16 t = 0xfff1;
    BOOL r = TRUE;
    t = c;
    u16 a;
    if (Unk_02043c28_InR(a, &t, 0x1408, 0x1428)) {
        *out = Unk_02043c28_Idx(a, 0x1408, 0x1428);
    } else if (a >= 0x1471 && a <= 0x1491) {
        *out = Unk_02043c28_Idx(a, 0x1471, 0x1491);
    } else if (a >= 0x137c && a <= 0x137c) {
        *out = 0x1e;
    } else if (a >= 0x14fe && a <= 0x1517) {
        u32 i = Unk_02043c28_Idx(a, 0x14fe, 0x1517);
        u16 v;
        *out = i;
        if (i < 0x21) {
            v = i + 0x1408;
        } else {
            v = 0x1408;
        }
        *out2 = v;
    } else if (a >= 0x151d && a <= 0x151e) {
        if (a == 0x151d) {
            *out = 0x26;
            *out2 = 0x26;
        } else {
            *out = 0x5d;
            *out2 = 0x5d;
        }
    } else if (func_0204b08c(&t)) {
        u16 a2;
        if (Unk_02043c28_InR(a2, &t, 0xc8, 0xcf)) {
            *out = 0xc8;
        } else {
            *out = 0x26;
        }
    } else {
        u16 a3;
        if (Unk_02043c28_InR(a3, &t, 0x1518, 0x151c)) {
            *out = data_020c91dc[Unk_02043c28_Idx(a3, 0x1518, 0x151c)];
        } else if (c == 0x1548) {
            *out = 0xc8;
        } else if (c == 0x1567) {
            *out = 0xd4;
            *out2 = 0x1408;
        } else {
            r = FALSE;
        }
    }
    return r;
}

s32 func_02043e70(s32 v);
s32 func_0204c0f4(void *p);
s32 func_0204be70(volatile u16 *p);
s32 func_0205b4f8(void);
s32 func_02063b8c(s32 n);
s32 func_0204c124(void *p);
extern u8 data_021d7350[];

struct Unk_02043db8_G {
    u8 pad[0x68];
    s32 unk_68;
};

void func_02043db8(u16 *out, u8 *flag, u16 c) {
    Unk_02043db8_G *g = *(Unk_02043db8_G **)data_020cbb18;
    if (func_02043e70(g->unk_68) == 0x136a) {
        volatile u16 t = 0xfff1;
        t = c;
        u16 a;
        if (Unk_02043c28_InR(a, &t, 0x1492, 0x14fd)) {
            u32 r7;
            *out = 0x26;
            *flag = 0;
            r7 = (u32)data_021d7350;
            if (func_0204c0f4((void *)(r7 + 0x15e54))) {
                s32 x = func_0204be70(&t);
                s32 y = func_0205b4f8();
                s32 sum = x / 1000 + y / 25;
                if (sum > 100) {
                    sum = 100;
                }
                if (func_02063b8c(100) < sum) {
                    *out = 0x57;
                    func_0204c124((void *)(r7 + 0x15e54));
                }
            }
        }
    }
}

static inline BOOL Unk_020437d0_R(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) {
        r = TRUE;
    }
    return r;
}

s32 func_020437d0(void *a, u16 *id, Unk_020434f0_P *pos, s32 mode) {
    s32 kind = 0;
    s32 v24 = 0;
    s32 result = -1;
    s32 off;
    u16 code;
    code = *id;
    if (((code >= 0x26 && code <= 0x2a) || (code >= 0x5d && code <= 0x61) || (code >= 0x2f && code <= 0x56) ||
         (code >= 0x57 && code <= 0x5b) || (code >= 0x66 && code <= 0x68) || code == 0x69 ||
         (code >= 0x6a && code <= 0x6c) || code == 0x6d || (code >= 0xc8 && code <= 0xcf)) &&
        !func_0204b08c(id)) {
        off = func_0204ad98(id) - 1;
        kind = 6;
        v24 = (u8)func_02042304(data_021c4350, *pos);
        if (mode != 2) {
            if (v24 >= data_020c9688[off]) {
                if (Unk_020437d0_R(id, 0xc8, 0xcf)) {
                    code = off + 0xd0;
                } else if ((*id >= 0x5d && *id <= 0x61) || *id == 0x6d) {
                    code = off + 0x62;
                } else if (*id >= 0x2f && *id <= 0x56) {
                    code = off + 0xff;
                } else {
                    code = off + 0x2b;
                }
            } else {
                if (Unk_020437d0_R(id, 0x26, 0x2a) || (*id >= 0x57 && *id <= 0x5b) || (*id >= 0x66 && *id <= 0x68) || *id == 0x69) {
                    code = off + 0x27;
                } else {
                    code = off + 0x5e;
                }
                if (*id == 0x67 || *id == 0x6b) {
                    if (func_02043ba8()) {
                        kind = 7;
                    } else {
                        code = *id;
                    }
                } else if ((*id >= 0x2f && *id <= 0x56) || (*id >= 0xc8 && *id <= 0xcf)) {
                    if (func_0204af08(id)) {
                        code = *id + 1;
                    } else {
                        code = *id;
                    }
                } else if (*id == 0x6d) {
                    code = *id;
                }
            }
        }
    } else {
        if (Unk_020437d0_R(id, 0xe3, 0xe7)) {
            kind = 0xd;
        } else if (*id >= 0xe8 && *id <= 0xfb) {
            kind = 0xc;
            if (!func_02072e44(*(void **)data_020cbb18)) {
                s32 q = (*id - 0xe8) / 5;
                if (q == func_020974f8()) {
                    if (mode != 2) {
                        kind = 0xe;
                    }
                }
            }
        } else {
            switch ((s32)(*id & 0xf000) >> 12) {
            case 0:
                if (*id == 0x1b || *id == 0x89) {
                    kind = 0x17;
                }
                break;
            case 1:
            case 3:
            case 4:
                kind = 0xc;
                break;
            case 2:
                break;
            }
        }
    }
    if (kind != 0) {
        s32 idv = *id;
        result = func_02042588(data_021c4350, a, kind, *pos, code, idv, v24, 0, mode, -1);
    }
    return result;
}

struct Unk_02043540_L {
    u8 b;
    u16 v1;
    u16 v2;
};

static inline BOOL Unk_02043540_Or(u16 *p) {
    BOOL r = TRUE;
    BOOL k = FALSE;
    if (*p >= 0xd4 && *p <= 0xda) {
        k = TRUE;
    }
    if (!k) {
        if (!(*p >= 0xdb && *p <= 0xe1)) {
            r = FALSE;
        }
    }
    return r;
}

s32 func_02043540(void *a, void *b, u16 *id, Unk_020434f0_P *pos, u16 e, s32 f) {
    s32 kind = 0x17;
    s32 result = -1;
    Unk_02043540_L l;
    u32 c;
    l.v1 = func_0204e3a0(b, pos->a, pos->b) == 0 ? 0xfc : 0xfd;
    l.b = 0;
    l.v2 = *id;
    c = *id;
    if (c == 0xfff1) {
        switch (func_0204e3a0(b, pos->a, pos->b)) {
        case 0:
        case 1:
            kind = 8;
            break;
        case 2:
            kind = 0xc;
            l.v1 = c;
            break;
        case 3:
            kind = 0x17;
            l.v1 = c;
            break;
        }
    } else if (c >= 0xe3 && c <= 0xe7) {
        kind = 0xd;
        l.v1 = c;
    } else if (c >= 0xe8 && c <= 0xfb) {
        kind = 0xc;
        l.v1 = c;
        if (!func_02072e44(*(void **)data_020cbb18)) {
            s32 q = (*id - 0xe8) / 5;
            if (q == func_020974f8()) {
                kind = 0xe;
            }
        }
    } else if (c >= 0xfc && c <= 0xfd) {
        l.v1 = e;
        l.v2 = e;
        kind = 0x13;
        if (e != 0xfff1) {
            func_02043be4(a, &l.v1, &l.v2, &l.b, e);
        }
    } else if ((c >= 0x2b && c <= 0x2e) || (c >= 0xff && c <= 0x102) || (c >= 0x62 && c <= 0x65) || (c >= 0xd0 && c <= 0xd3)) {
        kind = 0xb;
    } else if (func_0204962c(id) || c == 0x1b || c == 0x89) {
        kind = 0xc;
        l.v1 = *id;
    } else {
        BOOL k2 = TRUE;
        BOOL k1 = TRUE;
        u32 d = *id;
        if (!(d == 0x25 || d == 0x5c)) k1 = FALSE;
        if (!k1 && d != 0xc7) k2 = FALSE;
        if (k2 || (((d >= 0x26 && d <= 0x2a) || (d >= 0x5d && d <= 0x61) || (d >= 0x2f && d <= 0x56) ||
                    (d >= 0x57 && d <= 0x5b) || (d >= 0x66 && d <= 0x68) || d == 0x69 || (d >= 0x6a && d <= 0x6c) ||
                    d == 0x6d || (d >= 0xc8 && d <= 0xcf)) &&
                   func_0204b08c(id))) {
            kind = 0xb;
        } else if (func_0204a9c8(id) || Unk_020437d0_R(id, 0x21, 0x24) || (*id >= 0x1f && *id <= 0x20) || *id == 0xe2) {
            kind = 8;
        } else {
            s32 r = func_0204e88c(b, pos->a, pos->b);
            if (r != 0 || Unk_02043540_Or(id)) {
                kind = 9;
                if (Unk_020437d0_R(id, 0xd4, 0xda)) {
                    l.v2 = *id + 0x1467;
                } else {
                    l.v2 = *id + 0x1460;
                }
            } else {
                switch ((s32)(*id & 0xf000) >> 12) {
                case 1:
                case 3:
                case 4:
                    kind = 0xc;
                    l.v1 = *id;
                    break;
                }
            }
        }
    }
    if (kind != 0) {
        result = func_02042588(data_021c4350, a, kind, *pos, l.v1, l.v2, l.b, 0, f, -1);
    }
    return result;
}

static inline BOOL Unk_02043400_Or(BOOL prev, u32 c, u32 lo, u32 hi) {
    BOOL r = TRUE;
    if (!prev) {
        if (!(c >= lo && c <= hi)) {
            r = FALSE;
        }
    }
    return r;
}
static inline BOOL Unk_02043400_Eq(BOOL prev, u32 c, u32 v) {
    BOOL r = TRUE;
    if (!prev) {
        if (c != v) {
            r = FALSE;
        }
    }
    return r;
}
static inline BOOL Unk_02043400_K(u32 c) {
    volatile BOOL k1 = FALSE;
    if (c >= 0x26 && c <= 0x2a) k1 = TRUE;
    BOOL k2 = Unk_02043400_Or(k1, c, 0x5d, 0x61);
    BOOL k3 = Unk_02043400_Or(k2, c, 0x2f, 0x56);
    BOOL k4 = Unk_02043400_Or(k3, c, 0x57, 0x5b);
    BOOL k5 = Unk_02043400_Or(k4, c, 0x66, 0x68);
    BOOL k6 = Unk_02043400_Eq(k5, c, 0x69);
    BOOL k7 = Unk_02043400_Or(k6, c, 0x6a, 0x6c);
    BOOL k8 = Unk_02043400_Eq(k7, c, 0x6d);
    BOOL k9 = Unk_02043400_Or(k8, c, 0xc8, 0xcf);
    return k9;
}

s32 func_020439f8(void *a, u16 *id, Unk_020434f0_P *pos, s32 mode) {
    s32 result = -1;
    BOOL k9 = TRUE, k8 = TRUE, k7 = TRUE, k6 = TRUE, k5 = TRUE, k4 = TRUE, k3 = TRUE, k2 = TRUE, k1 = FALSE;
    u16 code;
    u32 cc = *id;
    if (cc >= 0x26 && cc <= 0x2a) k1 = TRUE;
    if (!k1) { if (!(cc >= 0x5d && cc <= 0x61)) k2 = FALSE; }
    if (!k2) { if (!(cc >= 0x2f && cc <= 0x56)) k3 = FALSE; }
    if (!k3) { if (!(cc >= 0x57 && cc <= 0x5b)) k4 = FALSE; }
    if (!k4) { if (!(cc >= 0x66 && cc <= 0x68)) k5 = FALSE; }
    if (!k5) { if (cc != 0x69) k6 = FALSE; }
    if (!k6) { if (!(cc >= 0x6a && cc <= 0x6c)) k7 = FALSE; }
    if (!k7) { if (cc != 0x6d) k8 = FALSE; }
    if (!k8) { if (!(cc >= 0xc8 && cc <= 0xcf)) k9 = FALSE; }
    if (k9) {
        if (!func_0204b08c(id)) {
            if (!func_0204b038(id)) {
                s32 kind = 1;
                s32 off = func_0204ad98(id) - 1;
                if (Unk_020437d0_R(id, 0x26, 0x2a) || (*id >= 0x57 && *id <= 0x5b) || (*id >= 0x66 && *id <= 0x68) || *id == 0x69) {
                    code = off + 0x27;
                } else {
                    code = off + 0x5e;
                }
                if (*id == 0x67 || *id == 0x6b) {
                    if (func_02043ba8()) {
                        kind = 2;
                    } else {
                        code = *id;
                    }
                } else if ((*id >= 0x2f && *id <= 0x56) || (*id >= 0xc8 && *id <= 0xcf)) {
                    if (func_0204af08(id)) {
                        code = *id + 1;
                    } else {
                        code = *id;
                    }
                } else if (*id >= 0x57 && *id <= 0x5b) {
                    if (!func_0204af08(id)) {
                        code = *id;
                    }
                } else if (*id == 0x6d) {
                    code = *id;
                }
                s32 idv = *id;
                result = func_02042588(data_021c4350, a, kind, *pos, code, idv, 0, 0, mode, -1);
            }
        }
    }
    return result;
}

}
