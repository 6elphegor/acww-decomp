#include "types.h"

typedef void (*Unk_0209a5b8_Fn)(void *);

extern "C" {
void *func_0209ad80(void *p);
void func_0209ada0(void *p);
void *func_0209ada4(void *p);
s32 func_0209ab8c(void *p, u16 *v);
s32 func_0209ac64(void *p);
s32 func_0209ac68(void *p, s32 *out);
s32 func_0209ac78(s32 *out, s32 kind);
s32 func_0209acb8(s32 kind);
s32 func_0209acf8(u32 *out, s32 x);
s32 func_0209ad28(void *p);
s32 func_0209ad34(s32 x);
s32 func_0209ad68(void *p);
s32 func_0209ad54(void *p, s32 a, u16 *b, s32 c);
u32 func_0209abc4(void *p);
void func_0209abb4(void *p, s32 v);
s32 func_0209ab98(void *p, s32 v);
s32 func_0209ac44(void *p);
s32 func_0209b354(void *p);
s32 func_0209b358(void *p);
s32 func_0209b3bc(void *p);
s32 func_0209b3ec(void *p);
s32 func_0209b408(void *p);
s32 func_0209ab54(void *p);
s32 func_0209ab6c(void *p);
s32 func_0209b334(void *p);
s32 func_0209b570(u32 *a, s32 i);
s32 func_0209d498(s32 x);
s32 func_020030b4(void *p);
void func_020030d8(void *p, s32 v);
void func_020030e8(void *p);
void func_02003100(void *p);
void func_02003130(void *p);
void func_02002fc8(void *a, void *b);
s32 func_0200301c(void *a, void *b, s32 c, const void *d);
void func_0203ce4c(s32 a, void *b);
void func_02094030(void *p);
void func_02094018(void *p);
void func_02094294(void *p);
void func_020942b8(void *p, s32 v);
void func_020a71d0(void *p);
void func_020a71b8(void *p);
void func_020a7c3c(void *p);
s32 func_020b35ac(void *a, u8 *b, s32 c);
s32 func_02063b8c(s32 n);
void func_0206338c(void *p, s32 a, s32 b);
void func_02063388(void *p);
void func_02062f94(void *out, void *x, s32 a, s32 b, s32 c, s32 d, s32 e);
s32 func_020657a0(void *a, u8 *b, u8 *c, u8 *d, u8 *e, void *f, const void *g, void *h, void *i, s32 j);
s32 func_02072e44(void *p);
s32 func_02052c54(u16 *p);
s32 func_0204b2d4(void *p);
void *func_0204b25c(void *p);
s32 func_0205304c(void *p);
s32 func_02053358(void *p);
s32 func_02053324(void *p);
s32 func_020530f0(void *p);
s32 func_020531d4(void *p);
s32 func_020532d0(void *p);
void func_02115fb4(void *p, u32 v, u32 n);
void __cxa_vec_cleanup(void *p, u32 n, u32 sz, void (*d)(void *));
void __cxa_vec_ctor(void *p, u32 n, u32 sz, void (*c)(void *), void (*d)(void *));
extern void *data_020cbb18;
extern u8 data_020d05a4[];
extern u8 data_020d05d4[];
extern u32 data_020d05f0[];
extern u8 data_020d05bc[];
extern u8 data_020e218c[];
extern u8 data_020e220c[];
}

struct Unk_0209a4f4_Ent;

struct Unk_0209a5dc {
    u8 unk_00[0xc];
    u8 unk_0c[2][0xc];
    u8 unk_24;
};

struct Unk_0209a4f4_Ent {
    BOOL (Unk_0209a5dc::*unk_00)();
    u32 unk_08[3];
};

extern "C" Unk_0209a4f4_Ent data_020e21fc[];

struct Unk_0209ab18 {
    u8 unk_00[0xc];
    u8 unk_0c[0x22 - 0xc];
    u8 unk_22;
    u8 pad_23;
    u16 unk_24;
    u8 unk_26;
    u8 unk_27;
    u8 unk_28;
};

extern "C" {
u8 func_0209a230(void *unused, s32 v);
u8 func_0209a208(void *unused, s32 v);
void *func_0209a940(void *p);
u8 func_0209a938(void *p);
void func_0209a930(void *p, u8 v);
u8 func_0209a6dc(void *p);
BOOL func_0209a670(void *p);
u16 *func_0209a8e8(Unk_0209ab18 *p);
void *func_0209a92c(Unk_0209ab18 *p);
s32 func_0209a8f4(s32 x);
void func_0209a8c8(Unk_0209ab18 *p, u32 v);
s32 func_0209aaa0(void *p);
void func_0209aae4(Unk_0209ab18 *p, s32 a, u16 *b);
void func_0209ab08(void *p, s32 a, u16 *b);
void func_0209ab18(void *p);
void func_0209a894(Unk_0209ab18 *p);
}

namespace Unk_0209a944 {
extern "C" s32 func_0209a930(void *p, u8 v);
}

extern "C" {

u8 func_0209a208(void *unused, s32 v) {
    u8 n = func_0209a230(unused, v);
    if ((v >> 2) & 1) {
        if ((v >> 3) & 1) {
            n = n - 1;
        }
    }
    return n;
}

u8 func_0209a230(void *unused, s32 v) {
    u8 n = 0;
    s32 i = 0;
    for (; i < 5; i++) {
        if ((v >> i) & 1) {
            n = n + 1;
        }
    }
    return n;
}

void func_0209a254(u8 *p) {
    func_0209ad80(p);
    p[0xc] = 5;
    p[0xd] = 0;
}

BOOL func_0209a26c(void *p) {
    u16 v = 0x1564;
    func_0209ab8c(p, &v);
    return TRUE;
}

BOOL func_0209a288(void *p) {
    u16 v = 0x1561;
    func_0209ab8c(p, &v);
    return TRUE;
}

BOOL func_0209a2a4(void *p) {
    u16 v = 0x1563;
    func_0209ab8c(p, &v);
    return TRUE;
}

void func_0209a2c0(Unk_0209a5dc *self, void *arg) {
    u8 b[5];
    u32 cnt;
    u8 buf[0x1e];
    u32 X[7];
    u32 Y[13];
    s32 i;
    s32 r;
    if (func_020030b4(self->unk_0c[0]) && func_020030b4(self->unk_0c[1])) {
        func_02094030(X);
        func_020a71d0(Y);
        cnt = 0;
        func_02002fc8(self->unk_0c[1], X);
        func_0203ce4c(0, X);
        func_020a7c3c(X);
        func_02002fc8(self->unk_0c[0], X);
        func_0203ce4c(1, X);
        for (i = 0; i < 6; i++) {
            r = func_0209b570(&cnt, i);
            func_020a7c3c(Y);
            b[0] = cnt;
            func_020b35ac(Y, b, r);
            func_0203ce4c(i + 2, Y);
        }
        func_0200301c(self->unk_0c[0], buf, 0x1e, data_020d05bc);
        b[1] = func_02063b8c(10);
        b[2] = func_02063b8c(10);
        b[3] = func_02063b8c(10);
        b[4] = func_02063b8c(10);
        func_020657a0(arg, &b[1], &b[2], &b[3], &b[4], buf, data_020e218c, self->unk_0c[0], self->unk_0c[1], 1);
        func_020a71b8(Y);
        func_02094018(X);
    }
}

BOOL func_0209a3c8(void *p) {
    u16 v = 0x1565;
    func_0209ab8c(p, &v);
    return TRUE;
}

BOOL func_0209a3e4(void *p) {
    u32 x[2];
    u16 out;
    func_0206338c(x, 2, 0);
    func_02062f94(&out, x, 0, 0, 1, 1, 0);
    func_02063388(x);
    func_0209ab8c(p, &out);
    return TRUE;
}

u8 *func_0209a420(u8 *p) {
    return p + 0x24;
}

void func_0209a424(u8 *p, u32 v) {
    p[0x24] = v;
}

s32 func_0209a444(void *self, s32 kind) {
    BOOL r = FALSE;
    s32 idx;
    if (func_0209ad68(self)) {
        if (func_0209acb8(kind) == 1) {
            if (kind == func_0209ac64(self)) {
                if (func_0209ac68(self, &idx)) {
                    if (func_0209abc4(self) > data_020e220c[idx * 0x14]) {
                        r = TRUE;
                    }
                }
            }
        }
    }
    return r;
}

s32 func_0209a42c(void *self) {
    return func_0209a444(self, func_0209ac64(self));
}

BOOL func_0209a49c(s32 a, void *b) {
    s32 t;
    BOOL r;
    if (func_02072e44(data_020cbb18)) {
        return FALSE;
    }
    t = func_0209b334(b);
    r = FALSE;
    switch (a) {
    case 10:
        if (t == 1) r = TRUE;
        break;
    case 19:
        if (t == 1) r = TRUE;
        break;
    }
    return r;
}

u8 *func_0209a4e4(Unk_0209a5dc *p, s32 i) {
    return p->unk_0c[i];
}

void func_0209a4f0(void) {
}

BOOL func_0209a4f4(Unk_0209a5dc *self, s32 kind, s32 r6, s32 r3) {
    BOOL r = FALSE;
    s32 idx = 0;
    u16 v;
    if (func_0209acb8(kind) == 1) {
        if (func_0209ac78(&idx, kind)) {
            v = 0xfff1;
            func_0209ad54(self, kind, &v, r);
            {
                Unk_0209a4f4_Ent *e = &data_020e21fc[idx];
                if (e->unk_00) {
                    (self->*(e->unk_00))();
                }
            }
            if (r6) {
                func_020030d8(self->unk_0c[0], r6);
            }
            if (r3) {
                func_020030d8(self->unk_0c[1], r3);
            }
            r = TRUE;
        }
    }
    return r;
}

void func_0209a588(Unk_0209a5dc *self) {
    s32 i;
    func_0209ad80(self);
    for (i = 0; i < 2; i++) {
        func_020030e8(self->unk_0c[i]);
    }
    self->unk_24 = 0;
}

Unk_0209a5dc *func_0209a5b8(Unk_0209a5dc *self) {
    __cxa_vec_cleanup(self->unk_0c, 2, 0xc, func_02003100);
    func_0209ada0(self);
    return self;
}

Unk_0209a5dc *func_0209a5dc(Unk_0209a5dc *self) {
    func_0209ada4(self);
    __cxa_vec_ctor(self->unk_0c, 2, 0xc, func_02003130, func_02003100);
    return self;
}

u8 *func_0209a60c(u8 *p) {
    return p + 0x24;
}

void *func_0209a610(void *p) {
    return p;
}

s32 func_0209a614(void *p) {
    func_0209b358(p);
    return func_0209b354(p);
}

void func_0209a628(u8 *p) {
    func_0209b3bc(p);
    func_0209ab18(p + 0x24);
}

u8 *func_0209a640(u8 *p) {
    func_0209ab54(p + 0x24);
    func_0209b3ec(p);
    return p;
}

u8 *func_0209a658(u8 *p) {
    func_0209b408(p);
    func_0209ab6c(p + 0x24);
    return p;
}

BOOL func_0209a670(void *self) {
    void *o = func_0209a940(self);
    s32 t;
    if (func_0209ad68(o)) {
        if (func_0209ac64(o) == 4) {
            t = func_0209a938(self);
            if (t < 6) {
                if (func_0209a6dc(self) >= data_020d05a4[t]) {
                    return TRUE;
                }
                return FALSE;
            }
        }
    }
    return FALSE;
}

u8 func_0209a6c0(Unk_0209ab18 *p, s32 n) {
    s32 t = p->unk_26 + n;
    if (t > 14) {
        t = 14;
    }
    p->unk_26 = t;
    return p->unk_26;
}

u8 func_0209a6dc(void *p) {
    return ((u8 *)p)[0x26];
}

s32 func_0209a6e4(void *self, u32 kind, s32 val) {
    s32 r = 0;
    if (func_0204b2d4(self)) {
        {
            switch (kind) {
            case 0:
                if (val == func_0205304c(self)) r = 2;
                break;
            case 1:
                self = func_0204b25c(self);
                if (val == func_02053358(self)) r = 1;
                if (val == func_02053324(self)) r++;
                break;
            case 2:
                if (val == func_020530f0(self)) r = 2;
                break;
            case 3:
                if (val == func_020531d4(self)) r = 2;
                break;
            case 4:
                if (val == func_020532d0(self)) r = 2;
                break;
            }
        }
    }
    return r;
}

void func_0209a774(u16 *out, s32 a, s32 b) {
    u16 tmp;
    u32 i;
    *out = 0xfff1;
    tmp = 0xfff1;
    for (i = 0; i < 0x34; i++) {
        tmp = i < 0x34 ? 0x450c + i * 4 : 0x450c;
        if (a == func_02052c54(&tmp)) {
            u32 k = i + b;
            *out = k < 0x34 ? 0x450c + k * 4 : 0x450c;
            break;
        }
    }
}

u8 func_0209a7d0(u16 *p, s32 n) {
    u8 f[10];
    s32 cnt = 10;
    s32 i;
    s32 j;
    s32 k;
    func_02115fb4(f, 0, cnt);
    for (i = 0; i < n; i++, p++) {
        BOOL in = FALSE;
        if (*p >= 0x450c && *p <= 0x45db) {
            in = TRUE;
        }
        if (in) {
            for (j = 0; j < 10; j++) {
                if (data_020d05d4[j] == func_02052c54(p)) {
                    if (f[j] == 0) {
                        f[j] = 1;
                        cnt--;
                        break;
                    }
                }
            }
        }
    }
    k = func_02063b8c(cnt);
    j = 0;
    while (k >= 0) {
        if (f[j] == 0) {
            if (k == 0) break;
            k--;
            j++;
        } else {
            j++;
        }
    }
    return data_020d05d4[j];
}

s32 func_0209a874(u32 v) {
    s32 i;
    for (i = 0; i < 10; i++) {
        if (v == data_020d05d4[i]) {
            return i;
        }
    }
    return -1;
}

void func_0209a894(Unk_0209ab18 *p) {
    p->unk_28 = 0;
}

BOOL func_0209a89c(Unk_0209ab18 *p, u32 i) {
    if (i < 3) {
        if ((p->unk_28 >> i) & 1) {
            return TRUE;
        }
    }
    return FALSE;
}

void func_0209a8b4(Unk_0209ab18 *p, s32 i) {
    p->unk_28 |= (1 << i);
}


u8 func_0209a8e0(Unk_0209ab18 *p) {
    return p->unk_27;
}


s32 func_0209a8ec(void *p) {
    return func_0209ac44(p);
}

s32 func_0209a8f4(s32 x) {
    u32 idx;
    if (func_0209ad34(x) == 0) {
        idx = 0;
        if (func_0209acf8(&idx, x)) {
            return data_020d05f0[idx];
        }
    }
    return 0;
}





void func_0209a944(Unk_0209ab18 *self) {
    void *o = func_0209a940(self);
    s32 t;
    s32 a;
    s32 ok;
    if (func_0209ad68(o)) {
        if (func_0209ad28(o) == 0) {
            t = func_0209a8f4(func_0209ac64(o));
            a = func_0209a938(self);
            if (a < t - 1) {
                if (func_0209ac64(o) == 4) {
                    ok = func_0209a670(self);
                } else {
                    ok = 1;
                }
                func_0209aaa0(self);
                if (ok ? TRUE : FALSE) {
                    Unk_0209a944::func_0209a930(self, a + 1);
                }
            }
        }
    }
}

void func_0209a9bc(void *p) {
    void *o = func_0209a940(p);
    if (func_0209ad68(o)) {
        if (func_0209ad28(o) == 0) {
            if (func_0209abc4(o) == 1) {
                func_0209abb4(o, 2);
            }
        }
    }
}

void func_0209a9f0(Unk_0209ab18 *self, s32 a1, u16 *p, void *obj, u8 flag) {
    if (flag) {
        func_0209aae4(self, a1, p);
    } else {
        func_0209abb4(func_0209a940(self), 0);
        func_0209ab8c(func_0209a940(self), p);
        if (func_0209ac64(func_0209a940(self)) == 2) {
            if (func_0209a938(self) == 2) {
                BOOL r = FALSE;
                if (*p >= 0x450c && *p <= 0x45db) {
                    r = TRUE;
                }
                if (r) {
                    func_0209a8c8(self, (u8)func_02052c54(p));
                }
            }
        }
    }
    if (obj) {
        func_020942b8(func_0209a92c(self), (s32)obj);
        func_0209d498(func_0209ac44(func_0209a940(self)));
        func_0209ab98(func_0209a940(self), 0);
    } else {
        func_02094294(func_0209a92c(self));
    }
}

s32 func_0209aaa0(void *pp) {
    Unk_0209ab18 *self = (Unk_0209ab18 *)pp;
    u16 v;
    func_0209abb4(func_0209a940(self), 0);
    v = 0xfff1;
    func_0209ab8c(func_0209a940(self), &v);
    func_02094294(func_0209a92c(self));
    *func_0209a8e8(self) = 0xfff1;
}

void func_0209aae4(Unk_0209ab18 *self, s32 a, u16 *b) {
    func_0209ab18(self);
    func_0209ab08(self, a, b);
    self->unk_22 = 0;
}

void func_0209ab08(void *p, s32 a, u16 *b) {
    func_0209ad54(p, a, b, 0);
}

void func_0209ab18(void *pp) {
    Unk_0209ab18 *self = (Unk_0209ab18 *)pp;
    func_0209ad80(self);
    func_02094294(self->unk_0c);
    self->unk_22 = 7;
    self->unk_24 = 0xfff1;
    self->unk_26 = 0;
    self->unk_27 = 0x18;
    self->unk_28 = 0;
}


void func_0209a8c8(Unk_0209ab18 *p, u32 v) {
    func_0209a894(p);
    p->unk_27 = v;
}

u16 *func_0209a8e8(Unk_0209ab18 *p) {
    return &p->unk_24;
}

void *func_0209a92c(Unk_0209ab18 *p) {
    return p->unk_0c;
}

void func_0209a930(void *p, u8 v) {
    ((u8 *)p)[0x22] = v;
}

u8 func_0209a938(void *p) {
    return ((u8 *)p)[0x22];
}

void *func_0209a940(void *p) {
    return p;
}

}
