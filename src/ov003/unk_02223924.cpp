#include "types.h"

struct Unk_ov003_02223924_V3 {
    s32 x, y, z;
};
typedef Unk_ov003_02223924_V3 V3;

class Unk_ov003_02223924_Obj;
typedef s32 (Unk_ov003_02223924_Obj::*Fn)();
struct Unk_ov003_02223924_Mp {
    Fn f;
};

struct Unk_ov003_02223924_Tbl {
    u8 *p;
    u32 q;
};

class Unk_ov003_02223924_Obj {
public:
    /* 0x000 */ u8 pad_000[0x7e];
    /* 0x07e */ s8 unk_7e;
    /* 0x07f */ u8 unk_7f;
    /* 0x080 */ u8 pad_080[0x120 - 0x80];
    /* 0x120 */ V3 unk_120;
    /* 0x12c */ u8 pad_12c[0xc];
    /* 0x138 */ u16 unk_138;
    /* 0x13a */ u8 pad_13a[2];
    /* 0x13c */ s32 unk_13c;
    /* 0x140 */ u8 pad_140[2];
    /* 0x142 */ u16 unk_142;
    /* 0x144 */ u8 pad_144[0x1fe - 0x144];
    /* 0x1fe */ u8 unk_1fe;
    /* 0x1ff */ u8 unk_1ff;
    /* 0x200 */ u8 pad_200[4];
    /* 0x204 */ s32 unk_204;
    /* 0x208 */ u8 pad_208[0x224 - 0x208];
    /* 0x224 */ u8 unk_224;
    /* 0x225 */ u8 unk_225;
    /* 0x226 */ u8 pad_226;
    /* 0x227 */ s8 unk_227;
    /* 0x228 */ u8 pad_228[4];
    /* 0x22c */ void *unk_22c;
    /* 0x230 */ u8 pad_230[0xc];
    /* 0x23c */ u8 pad_23c;
    /* 0x23d */ u8 unk_23d;
    /* 0x23e */ u8 pad_23e[2];
    /* 0x240 */ u8 unk_240;
};
typedef Unk_ov003_02223924_Obj Obj;

extern "C" {
extern Unk_ov003_02223924_Tbl data_ov003_022348c4[];
extern u8 data_020ca316[];
extern u8 data_ov003_022349d4[];
extern u8 data_ov003_022349d5[];
extern u8 data_ov003_022349e0[];
extern s16 data_02135f44[];
extern s32 data_020c7c1c;
extern Unk_ov003_02223924_Mp data_ov003_02257b50[];

void func_ov003_022201ac(void *self, s32 v);
s32 func_ov003_0222034c(void *p, void *v, s32 a, s32 b, s32 c);
s32 func_ov003_02224828(void *a, s32 b, s32 c);
s32 func_ov003_022202ec(s32, s32);
s32 func_ov003_022202cc(s32 a, u16 b);
s32 func_ov003_02222d48(Obj *o);
s32 func_ov003_02223134(Obj *self);
void func_020947c0(u16 *, s32);
s32 func_0205f92c(void *p, u32 a);
void func_0205fb40(void *);
void func_02003e70(void *, s32, s32, s32);
s32 func_020429d0(s32 a, s32 *p, s32 c);
s32 func_02002bdc(void *, void *);
s64 func_020e9600(void *, void *);
s32 func_01ffcb0c(s32 a, s32 b);
s32 func_02133150();
void func_0204ee10(s32 *, s32 *, void *);
s32 func_020312a8(s32, s32);
void func_020902d4(s32 h, V3 *v, s32 a, s32 b);
}

extern "C" {

s32 func_ov003_02223924(Obj *self)
{
    u8 *p = (u8 *)self->unk_22c;
    u8 *q;
    s32 idx;
    if (p == 0) {
        return 0;
    }
    if (self->unk_227 == -1) {
        return 0;
    }
    q = p + 8;
    func_ov003_022201ac(self, 0x18);
    {
        u16 out[2];
        BOOL ok;
        u16 a, b;
        func_020947c0(out, self->unk_227);
        ok = FALSE;
        {
            volatile u16 *pv = &out[0];
            a = *pv;
            b = *pv;
        }
        if (b >= 0x1374 && a <= 0x1374) {
            ok = TRUE;
        }
        if (ok) {
            idx = 0;
        } else if (a >= 0x1375 && a <= 0x1375) {
            idx = 1;
        } else {
            return 0;
        }
    }
    {
        s32 cur = self->unk_13c;
        u8 *lim = data_ov003_022348c4[idx].p;
        if (cur >= lim[data_020ca316[self->unk_7e * 6]]) {
            self->unk_13c = 0;
            func_0205f92c(p, 4);
            return 0;
        }
    }
    switch (self->unk_225 - 6) {
    case 0: {
        s32 dv = ((u32)data_ov003_022349d4[self->unk_1ff * 0x14] << 12) / 100;
        s32 ang = func_02002bdc(&self->unk_120, q);
        func_ov003_02224828(&self->unk_120, 0x180, ang);
        func_ov003_02224828(&self->unk_120, 0xc0, (s16)(ang + 0x4000));
        if (func_ov003_0222034c(&self->unk_120, q, dv, dv, dv)) {
            self->unk_225 = 8;
        } else {
            self->unk_225 = 7;
        }
        break;
    }
    case 1: {
        s32 dv = ((u32)data_ov003_022349d4[self->unk_1ff * 0x14] << 12) / 100;
        s32 ang = func_02002bdc(&self->unk_120, q);
        func_ov003_02224828(&self->unk_120, 0x180, ang);
        func_ov003_02224828(&self->unk_120, 0xc0, (s16)(ang - 0x4000));
        if (func_ov003_0222034c(&self->unk_120, q, dv, dv, dv)) {
            self->unk_225 = 8;
        } else {
            self->unk_225 = 6;
        }
        break;
    }
    case 2: {
        s32 dv = ((u32)data_ov003_022349d5[self->unk_1ff * 0x14] << 12) / 100;
        s32 r;
        s32 ang = func_02002bdc(q, &self->unk_120);
        func_ov003_02224828(&self->unk_120, 0x180, ang);
        r = func_ov003_022202ec(0, 100);
        if (func_ov003_0222034c(&self->unk_120, q, dv, dv, dv) == 0) {
            if (r >= 0x46) {
                self->unk_225 = 6;
            } else {
                self->unk_225 = 9;
            }
        }
        break;
    }
    case 3:
        if (func_ov003_022202ec(0, 100) <= 0x32) {
            self->unk_225 = 7;
        }
        break;
    }
    self->unk_138 = func_02002bdc(&self->unk_120, q);
    return 1;
}


s32 func_ov003_02223b64(Obj *self)
{
    BOOL r = FALSE;
    u8 *p = (u8 *)self->unk_22c;
    u8 *q;
    s32 base;
    s32 dv, sq, ang;
    if (p == 0) {
        return r;
    }
    q = p + 8;
    if (self->unk_13c >= self->unk_240) {
        s32 dv = ((u32)data_ov003_022349d4[self->unk_1ff * 0x14] << 12) / 100;
        if (func_ov003_0222034c(&self->unk_120, q, dv, dv, dv)) {
            self->unk_13c = r;
            func_0205f92c(p, 5);
            func_02003e70(self, 0x84f, 0x7f, r);
            {
                s32 t = self->unk_7e;
                if (t != 0x38 && t != 0x39 && t != 0x3a) {
                    goto plain;
                }
                {
                    s32 arr[2];
                    arr[1] = arr[0] = 0;
                    if (func_020429d0(0x10, arr, 0)) {
                        self->unk_224 = 4;
                        self->unk_225 = 6;
                        r = TRUE;
                    }
                }
                goto done;
            plain:
                self->unk_224 = 4;
                self->unk_225 = 6;
                r = TRUE;
            done:;
            }
            return r;
        }
    }
    base = (u32)data_ov003_022349d4[self->unk_1ff * 0x14] << 12;
    switch (self->unk_225) {
    case 3: {
        dv = base / 100;
        s32 s = self->unk_23d << 4;
        s64 d;
        if (s >= 0x100) {
            s = 0x100;
        }
        func_ov003_02224828(&self->unk_120, s, func_02002bdc(&self->unk_120, q));
        d = func_020e9600(&self->unk_120, q);
        if ((s64)func_01ffcb0c(dv, dv) >= d) {
            self->unk_23d = 0;
            func_0205fb40(p);
            self->unk_225 = 4;
        }
        func_ov003_022201ac(self, 0x18);
        break;
    }
    case 4: {
        s32 lim = func_ov003_022202ec(10, 0x14);
        if (func_ov003_022202ec(0, 100) < 0x32) {
            ang = func_02002bdc(q, &self->unk_120);
        } else {
            ang = func_02002bdc(&self->unk_120, q);
            if (func_ov003_022202ec(0, 100) < 5) {
                func_0205fb40(p);
            }
        }
        func_ov003_02224828(&self->unk_120, 0x100, ang);
        if (self->unk_23d > lim) {
            self->unk_23d = 0;
            self->unk_225 = 5;
        }
        break;
    }
    case 5: {
        s32 dv = ((u32)*(u16 *)(data_ov003_022349e0 + self->unk_1ff * 0x14) << 12) / 100;
        s32 s = 0x100 - (self->unk_23d << 4);
        if (s < 0) {
            s = 0;
        }
        func_ov003_02224828(&self->unk_120, s, func_02002bdc(q, &self->unk_120));
        if (s == 0 || func_ov003_0222034c(&self->unk_120, q, dv, dv, dv) == 0) {
            self->unk_23d = 0;
            self->unk_225 = 3;
        }
        func_ov003_022201ac(self, 0x10);
        break;
    }
    }
    {
        sq = base >> 9;
        s64 d = func_020e9600(&self->unk_120, q);
        if (d >= (s64)func_01ffcb0c(sq, sq)) {
            self->unk_138 = func_02002bdc(&self->unk_120, q);
        }
    }
    self->unk_23d = self->unk_23d + 1;
    return 1;
}

s32 func_ov003_02223dd8(Obj *self)
{
    u8 *p = (u8 *)self->unk_22c;
    u8 *q;
    if (p == 0) {
        return 0;
    }
    q = p + 8;
    switch (self->unk_225) {
    case 0: {
        s32 s, dv;
        dv = ((u32)data_ov003_022349d4[self->unk_1ff * 0x14] << 12) / 100;
        s = self->unk_23d << 4;
        if (s >= 0x100) {
            s = 0x100;
        }
        self->unk_138 = func_02002bdc(&self->unk_120, q);
        func_ov003_02224828(&self->unk_120, s, (s16)self->unk_138);
        if (func_ov003_0222034c(&self->unk_120, q, dv, dv, dv)) {
            self->unk_23d = 0;
            func_0205fb40(p);
            self->unk_225 = 1;
        }
        break;
    }
    case 1: {
        s32 lim = func_ov003_022202ec(10, 15);
        if (func_ov003_022202ec(0, 100) < 0x32) {
            self->unk_138 = func_02002bdc(q, &self->unk_120);
        } else {
            self->unk_138 = func_02002bdc(&self->unk_120, q);
        }
        func_ov003_02224828(&self->unk_120, 0x100, (s16)self->unk_138);
        self->unk_138 = func_02002bdc(&self->unk_120, q);
        if (self->unk_23d > lim) {
            self->unk_23d = 0;
            self->unk_138 = (s16)self->unk_138 + (s16)(func_ov003_022202cc(1, 2) * 0x1554);
            self->unk_225 = 2;
        }
        break;
    }
    case 2: {
        s32 dv = ((u32)*(u16 *)(data_ov003_022349e0 + self->unk_1ff * 0x14) << 12) / 100;
        func_ov003_02224828(&self->unk_120, 0x14c, (s16)self->unk_138);
        if (func_ov003_0222034c(&self->unk_120, q, dv, dv, dv) == 0) {
            if (func_ov003_02222d48(self) == 0) {
                func_ov003_02223134(self);
            }
        }
        break;
    }
    }
    func_ov003_022201ac(self, 0x18);
    self->unk_23d = self->unk_23d + 1;
    return 1;
}

s32 func_ov003_02223f78(Obj *self)
{
    u8 *p = (u8 *)self->unk_22c;
    s32 dv, s;
    if (p == 0) {
        return 0;
    }
    p = (u8 *)((u32)p + 8);
    dv = ((u32)data_ov003_022349d4[self->unk_1ff * 0x14] << 12) / 100;
    s = self->unk_23d << 4;
    if (s >= 0x100) {
        s = 0x100;
    }
    self->unk_138 = func_02002bdc(&self->unk_120, p);
    func_ov003_02224828(&self->unk_120, s, (s16)self->unk_138);
    func_ov003_022201ac(self, 0x18);
    if (func_ov003_0222034c(&self->unk_120, p, dv, dv, dv)) {
        s32 r = func_ov003_022202ec(0, 100);
        s32 lim = 0x5f;
        s32 a, b;
        func_0204ee10(&a, &b, p);
        switch (self->unk_1fe) {
        case 0:
        case 1:
        case 2:
        case 3:
            if (func_020312a8(a, b) == 1) {
                lim = 0x64;
            }
            break;
        case 4:
            break;
        case 5:
        case 6:
            if (func_020312a8(a, b) == 2) {
                lim = 0x64;
            }
            break;
        }
        if (r <= lim) {
            self->unk_240 = func_ov003_022202ec(4, 0xb4);
            self->unk_13c = 0;
            self->unk_23d = 0;
            self->unk_225 = 3;
            self->unk_224 = 3;
            self->unk_138 = func_02002bdc(&self->unk_120, p);
        } else {
            self->unk_23d = 0;
            self->unk_225 = 0;
            self->unk_224 = 2;
            self->unk_138 = func_02002bdc(&self->unk_120, p);
        }
    }
    self->unk_23d = self->unk_23d + 1;
    return 1;
}

s32 func_ov003_022240d4(Obj *self)
{
    if (self->unk_22c == 0) {
        return 0;
    }
    self->unk_224 = 1;
    return 1;
}

void func_ov003_022240f4(Obj *self)
{
    if ((self->*data_ov003_02257b50[self->unk_224].f)() == 0) {
        func_ov003_02223134(self);
    }
    self->unk_13c = self->unk_13c + 1;
}

void func_ov003_02224144()
{
}

void func_ov003_02224148(Obj *self)
{
    s32 a, x, y, sq;
    s32 t, s142, s138;
    u16 *pf;
    a = self->unk_13c << 7;
    if (a > 0x215) {
        a = 0x215;
    }
    pf = &self->unk_142;
    *pf = (s16)*pf + 0x2000;
    s142 = data_02135f44[(*pf >> 4) * 2];
    s138 = data_02135f44[(self->unk_138 >> 4) * 2];
    sq = a >> 5;
    t = func_01ffcb0c(a, s138);
    x = t + func_01ffcb0c(sq, s142);
    t = func_01ffcb0c(a, data_02135f44[((self->unk_138 >> 4) * 2) + 1]);
    y = t + func_01ffcb0c(sq, data_02135f44[(self->unk_142 >> 4) * 2]);
    self->unk_120.x += x;
    self->unk_120.z += y;
    if (self->unk_7f) {
        if (self->unk_13c >= 10) {
            func_ov003_022201ac(self, 3);
        } else if (self->unk_13c >= 5) {
            func_ov003_022201ac(self, 0x10);
        } else {
            func_ov003_022201ac(self, 0x20);
        }
    } else {
        func_ov003_022201ac(self, 0x20);
    }
    {
        V3 v;
        v.x = self->unk_120.x;
        v.y = self->unk_120.y;
        v.z = self->unk_120.z;
        v.y = data_020c7c1c;
        func_020902d4(self->unk_204, &v, 0, 0);
    }
}

}
