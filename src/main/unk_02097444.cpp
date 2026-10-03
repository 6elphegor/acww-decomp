#include "types.h"

// element of the function-local static table in func_020975f0 (destructor is another unit's, at 0x02004b60)
struct Unk_0203442c {
    u16 v;
    Unk_0203442c(u16 x) { v = x; }
    ~Unk_0203442c();
};

struct Unk_02097ac4 {
    u8 pad[0x9f8];
    s32 unk_9f8;
};

struct Unk_020973e4_Pl {
    u8 pad[0x64];
    u32 unk_64;
    u32 unk_68;
};

// 0x228c-byte element (constructor 0x02098be4 and destructor 0x02098af0 belong to another unit)
class Unk_0209865c {
public:
    Unk_0209865c();
    ~Unk_0209865c();
    u8 pad[0x228c];
};

// the three-element object at data_021d0910 (constructor func_020975c4, destructor func_020975a4)
class Unk_020975c4 {
public:
    Unk_020975c4();
    ~Unk_020975c4();
    Unk_0209865c unk_00[3];
};

extern "C" {
extern u8 data_021d735c[];
extern u8 data_021e935c[];
extern u8 data_021ec780[];
extern Unk_020973e4_Pl *data_020cbb18;

s32 func_020978fc(u32 idx);
s32 func_020978c8(u8 *base, s32 idx);
u8 *func_02097868(u8 *base, s32 idx);
u8 *func_0209788c(u8 *base, u16 *p);
s32 func_02097554(s32 idx);
s32 func_02097534(s32 idx);
u8 *func_0209759c();
s32 _ZN12Unk_0209865c13func_02098a48Ev(void *p);
s32 _ZN12Unk_0209865c13func_02098a58Ev(void *p);
void *_ZN12Unk_0209865cD1Ev(void *p, s32 f);
void *_ZN12Unk_0209865cC1Ev(void *p, s32 f);
u32 func_020952e0(u32 a);
u32 func_020974a0(s32 a);
u32 func_02097520(u32 a);
s32 func_02097578(void *p);
void __cxa_vec_cleanup(void *, u32, u32, void *(*)(void *, s32));
void *__cxa_vec_ctor(void *, u32, u32, void *(*)(void *, s32), void *(*)(void *, s32));
void *_ZN12Unk_0209865c13func_0209888cEv(void *p);
s32 _ZN12Unk_020940a013func_02094218Ev(void *p);
u16 _ZN12Unk_020940a013func_0209412cEv(void *p);
u32 func_02094154(u16 *p, u32 n);
s32 _ZN12Unk_020940a013func_020941e8EPS_(void *a, void *b);
s32 _ZN12Unk_0209865c13func_02098898EjjjjhhhhhjPt(void *, s32, u32, s32, u32, u32, u32, u32, u32, u32, u32, u16 *);
s32 _ZN12Unk_0209865c13func_020986d8EPt(void *, void *);
s32 memcmp(void *, void *, u32);
void *MI_CpuFill8(void *, s32, u32);
s32 func_02097740(u8 *base, u16 *p);
u32 func_020978a4(u8 *base);
u32 func_02063b8c();
s32 _ZN12Unk_02097ff413func_02098338Ei(void *, s32);
s32 _ZN12Unk_0209865c13func_02098878Ev(void *);
void _ZN12Unk_020970b813func_02097078Ej(void *, s32);
s32 _ZN12Unk_020970b813func_02097084Ev(void *);
u8 *func_020a03ac();
s32 _ZN12Unk_02097d1c13func_02097d1cEi(u8 *, s32);
s32 _ZN12Unk_02097d1c13func_02097d38Ei(u8 *, s32);
s32 func_02097b00(u8 *, s32);
s32 func_02097b68(u8 *, s32);
s32 func_02097c0c(u8 *);
s32 func_02097c50(u8 *, s32);
s32 func_02097ce4(u8 *, s32, s32);
u16 *_ZN12Unk_02097d1c13func_02097f6cEi(u8 *, s32);
s32 _ZN12Unk_02097d1c13func_02097f30EPtij(u8 *, u16 *, s32, s32);
s32 _ZN12Unk_02097d1c13func_02097eb0Ei(u8 *, s32);
s32 func_0204be70(u16 *);
}

struct Unk_02097c50_Pad {
    s32 v[2];
    Unk_02097c50_Pad() {}
    ~Unk_02097c50_Pad() {}
};

extern "C" s32 func_02097ce4(u8 *p, s32 mode, s32 arg) {
    s32 x = 99999 - _ZN12Unk_02097d1c13func_02097d1cEi(p, 0);
    if (x < 0) x = 0;
    if (mode == 1) x += _ZN12Unk_02097d1c13func_02097d38Ei(p, arg);
    return x;
}

extern "C" s32 func_02097c50(u8 *p, s32 mode) {
    Unk_02097c50_Pad pad;
    u16 *q = _ZN12Unk_02097d1c13func_02097f6cEi(p, 0);
    s32 lim = mode == 1 ? 0x6b : 0x6a;
    s32 i = 0;
    s32 best = -1;
    for (; i < 15; q++, i++) {
        BOOL f1 = FALSE;
        u32 h = *q;
        if (h >= 0x1492 && h <= 0x14fd) f1 = TRUE;
        if (f1 && _ZN12Unk_02097d1c13func_02097eb0Ei(p, i) == 0) {
            BOOL f2 = FALSE;
            s32 v;
            h = *q;
            if (h >= 0x1492 && h <= 0x14fd) f2 = TRUE;
            if (f2) v = h - 0x1492;
            else v = -1;
            if (v < lim || (best == ~0 && v == lim)) {
                lim = v;
                best = i;
            }
        }
    }
    return best;
}

extern "C" s32 func_02097c0c(u8 *p) {
    u16 *q = _ZN12Unk_02097d1c13func_02097f6cEi(p, 0);
    s32 i = 0;
    s32 r = -1;
    for (; i < 15; q++, i++) {
        if (*q == 0xfff1) {
            r = i;
            break;
        }
    }
    if (r == -1) r = func_02097c50(p, 0);
    return r;
}

extern "C" s32 func_02097b68(u8 *p, s32 n) {
    u16 b[2];
    s32 a;
    b[0] = 0x14fd;
    a = func_0204be70(b);
    b[1] = 0xfff1;
    while ((u32)n > 99999) {
        s32 t = func_02097c0c(p);
        if (t == -1) break;
        b[1] = *_ZN12Unk_02097d1c13func_02097f6cEi(p, t);
        volatile u16 *vp = b;
        BOOL rr = FALSE;
        u32 c = vp[1];
        u32 a2 = vp[1];
        if (a2 >= 0x1492 && c <= 0x14fd) rr = TRUE;
        if (rr) {
            _ZN12Unk_02097d1c13func_02097f30EPtij(p, b, t, 0);
            n -= a - func_0204be70(&b[1]);
        } else {
            if (c != 0xfff1) break;
            _ZN12Unk_02097d1c13func_02097f30EPtij(p, b, t, 0);
            n -= a;
        }
    }
    return n;
}

extern "C" s32 func_02097b00(u8 *p, s32 n) {
    u16 b[2];
    if (n < 0) n = 0;
    b[0] = 0xfff1;
    while (n > 0) {
        s32 t = func_02097c50(p, 1);
        if (t == -1) break;
        b[0] = *_ZN12Unk_02097d1c13func_02097f6cEi(p, t);
        b[1] = 0xfff1;
        _ZN12Unk_02097d1c13func_02097f30EPtij(p, &b[1], t, 0);
        n -= func_0204be70(b);
    }
    if (n != 0) n = -n;
    return n;
}

extern "C" void func_02097ac4(Unk_02097ac4 *p, s32 v, s32 mode) {
    if (v < 0) v = 0;
    if ((u32)v > 99999) {
        if (mode == 1) {
            v = func_02097b68((u8 *)p, v);
            if ((u32)v > 99999) v = 99999;
        } else {
            v = 99999;
        }
    }
    p->unk_9f8 = v;
}

extern "C" BOOL func_02097a90(u8 *p, s32 v, s32 a, s32 b) {
    BOOL r = FALSE;
    if (v >= 0) {
        if (v <= func_02097ce4(p, a, b)) r = TRUE;
    } else {
        if (-v <= _ZN12Unk_02097d1c13func_02097d1cEi(p, a)) r = TRUE;
    }
    return r;
}

extern "C" void func_02097a48(u8 *p, s32 v, s32 mode) {
    s32 x = v + _ZN12Unk_02097d1c13func_02097d1cEi(p, 0);
    if (x < 0) {
        if (mode == 1) {
            x = func_02097b00(p, -x);
            if (x < 0) x = 0;
            else if ((u32)x > 99999) x = 99999;
        } else {
            x = 0;
        }
    }
    func_02097ac4((Unk_02097ac4 *)p, x, mode);
}

extern "C" u8 *func_02097a3c(u8 *p) { return p + 0x1c6c; }

extern "C" u8 *func_02097a30(u8 *p) { return p + 0x223e; }

extern "C" u8 *func_02097a04(void *p) {
    s32 s = _ZN12Unk_0209865c13func_02098878Ev(p);
    if (s >= 0 && s < 4) {
        u8 *q = func_020a03ac();
        if (q != 0) return q + s * 0x477c;
    }
    return 0;
}

extern "C" u8 *func_020979d8(void *p) {
    s32 s = _ZN12Unk_0209865c13func_02098878Ev(p);
    if (s >= 0 && s < 4) return data_021e935c + s * 0x98c;
    return 0;
}

extern "C" u8 *func_020979b0(void *p) {
    s32 s = _ZN12Unk_0209865c13func_02098878Ev(p);
    if (s >= 0 && s < 4) return data_021ec780 + s * 0xb4;
    return 0;
}

extern "C" s32 func_02097980(void *p) {
    s32 s = _ZN12Unk_0209865c13func_02098878Ev(p);
    if (s >= 0 && s < 4) return _ZN12Unk_020970b813func_02097084Ev(data_021e935c + s * 0x98c);
    return 0;
}

extern "C" void func_02097954(void *p, s32 v) {
    s32 s = _ZN12Unk_0209865c13func_02098878Ev(p);
    if (s >= 0 && s < 4) _ZN12Unk_020970b813func_02097078Ej(data_021e935c + s * 0x98c, v);
}

extern "C" void *func_02097928(void *p) {
    __cxa_vec_ctor(p, 4, 0x228c, _ZN12Unk_0209865cC1Ev, _ZN12Unk_0209865cD1Ev);
    return p;
}

extern "C" void *func_02097908(void *p) {
    __cxa_vec_cleanup(p, 4, 0x228c, _ZN12Unk_0209865cD1Ev);
    return p;
}

extern "C" s32 func_020978fc(u32 idx) {
    if (idx < 4) return 1;
    return 0;
}

extern "C" s32 func_020978c8(u8 *base, s32 idx) {
    if (func_020978fc(idx) != 0) {
        if (_ZN12Unk_0209865c13func_02098a48Ev(base + idx * 0x228c) != 0) return 1;
    }
    return 0;
}

extern "C" u32 func_020978a4(u8 *base) {
    s32 i;
    u32 n = 0;
    for (i = n; i < 4; i++) {
        if (func_020978c8(base, i) != 0) n++;
    }
    return n;
}

extern "C" u8 *func_0209788c(u8 *base, u16 *p) { return func_02097868(base, func_02097740(base, p)); }

extern "C" u8 *func_02097868(u8 *base, s32 idx) {
    u8 *r = 0;
    if (func_020978fc(idx) != 0) r = base + idx * 0x228c;
    return r;
}

extern "C" u8 *func_020977d0(u8 *base, u16 *p) {
    u8 *r;
    s32 n;
    if (p == 0 || func_0209788c(base, p) == 0) n = func_020978a4(base);
    else n = func_020978a4(base) - 1;
    r = 0;
    if (n > 0) {
        u32 t = func_02063b8c();
        s32 i;
        for (i = 0; i < 4; i++) {
            u8 *e = base + i * 0x228c;
            if (_ZN12Unk_0209865c13func_02098a48Ev(e) == 1) {
                if (p != 0) {
                    u16 *q = (u16 *)_ZN12Unk_0209865c13func_0209888cEv(e);
                    if (p[0] == q[0]) {
                        if (memcmp(p + 1, q + 1, 8) == 0) {
                            if (_ZN12Unk_020940a013func_020941e8EPS_(p, q) != 0) continue;
                        }
                    }
                }
                if (t == 0) {
                    r = e;
                    break;
                }
                t--;
            }
        }
    }
    return r;
}

extern "C" void func_020977ac(void *p) {
    s32 i;
    for (i = 0; i < 4; i++) _ZN12Unk_0209865c13func_02098a58Ev((u8 *)p + i * 0x228c);
}

extern "C" s32 func_020977a0(void *p) { return _ZN12Unk_02097ff413func_02098338Ei(p, 4); }

extern "C" s32 func_02097740(u8 *base, u16 *p) {
    if (_ZN12Unk_020940a013func_02094218Ev(p) == 1) {
        s32 i;
        for (i = 0; i < 4; i++) {
            u16 *q = (u16 *)_ZN12Unk_0209865c13func_0209888cEv(base + i * 0x228c);
            if (p[0] == q[0]) {
                if (memcmp(p + 1, q + 1, 8) == 0) {
                    if (_ZN12Unk_020940a013func_020941e8EPS_(p, q) != 0) return i;
                }
            }
        }
    }
    return -1;
}

extern "C" u8 *func_020975f0(u8 *base, s32 a1, s32 a2, u32 idx) {
    u8 *r = 0;
    if (func_020978fc(idx) == 1) {
        static Unk_0203442c tbl[4] = {Unk_0203442c(0x3884), Unk_0203442c(0x3888), Unk_0203442c(0x388c), Unk_0203442c(0x3890)};
        u16 hdr;
        u16 v[3];
        s32 i;
        r = base + idx * 0x228c;
        u16 cnt = 0;
        MI_CpuFill8(v, 0, 6);
        for (i = 0; i < 4; i++) {
            if (i != idx) {
                u8 *q = base + i * 0x228c;
                if (_ZN12Unk_020940a013func_02094218Ev(_ZN12Unk_0209865c13func_0209888cEv(q)) == 1) {
                    v[cnt] = _ZN12Unk_020940a013func_0209412cEv(_ZN12Unk_0209865c13func_0209888cEv(q));
                    cnt++;
                }
            }
        }
        _ZN12Unk_0209865c13func_02098a58Ev(r);
        hdr = 0xfff1;
        {
            u32 s = func_02094154(v, cnt);
            _ZN12Unk_0209865c13func_02098898EjjjjhhhhhjPt(r, a1, s, a2, 0, 0, 0, 0, 0, 0, 0, &hdr);
        }
        idx &= 3;
        _ZN12Unk_0209865c13func_020986d8EPt(r, &tbl[idx]);
    }
    return r;
}

// bss: constructed by __sinit
Unk_020975c4 data_021d0910;

Unk_020975c4::Unk_020975c4() {}

Unk_020975c4::~Unk_020975c4() {}

extern "C" u8 *func_0209759c() { return (u8 *)&data_021d0910; }

extern "C" s32 func_02097578(void *p) {
    s32 i;
    for (i = 0; i < 3; i++) _ZN12Unk_0209865c13func_02098a58Ev((u8 *)p + i * 0x228c);
}

extern "C" void func_02097564() { func_02097578(func_0209759c()); }

extern "C" s32 func_02097554(s32 idx) {
    if (idx >= 4 && idx < 7) return 1;
    return 0;
}

extern "C" s32 func_02097534(s32 idx) {
    s32 r = -1;
    if (func_02097554(idx) == 1) r = idx - 4;
    return r;
}

extern "C" u32 func_02097520(u32 a) { return func_020974a0(func_020952e0(a)); }

extern "C" u32 func_0209750c() { return func_02097520(data_020cbb18->unk_68); }

extern "C" u32 func_020974f8() { return func_020952e0(data_020cbb18->unk_68); }

extern "C" u32 func_020974a0(s32 idx) {
    u32 r = 0;
    if (func_020978fc(idx) == 1) {
        if ((u32)data_021d735c != 0) r = (u32)func_02097868(data_021d735c, idx);
    } else if (func_02097554(idx) == 1) {
        if (func_0209759c() != 0) {
            r = (u32)func_0209759c();
            r += func_02097534(idx) * 0x228c;
        }
    }
    return r;
}

extern "C" s32 func_02097444(s32 idx) {
    s32 r = 0;
    if (func_020978fc(idx) == 1) {
        if ((u32)data_021d735c != 0) r = func_020978c8(data_021d735c, idx);
    } else if (func_02097554(idx) == 1) {
        if (func_0209759c() != 0) {
            s32 t = func_02097534(idx);
            r = _ZN12Unk_0209865c13func_02098a48Ev(func_0209759c() + t * 0x228c);
        }
    }
    return r;
}

