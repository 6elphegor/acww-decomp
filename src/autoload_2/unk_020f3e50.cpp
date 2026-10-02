// mwcc-flags: -nothumb -O4,p
// G012a: autoload_2 0x020f3e50-0x020f4904 (35 functions). mwcc 1.2/base, C++, ARM, -O4,p. PARTIAL: first part of the sound-effect
// "channel object" file (vtables 0x0213b98c-0x0213b9d8: classes 0x0213b9c4, 0x0213b98c, 0x0213b9a8 over the main-module base
// _ZTV12Unk_020d6f54). The symbols.txt names that are C++-mangled (_ZN12Unk_020f4080C1Ev) are extern "C" functions whose
// identifier IS the mangled name, `this` first (as in G005a); all other functions keep their func_ names. No class is defined, no vtable
// is emitted, all data and vtables stay extern. Contents: constructors / destructors of the channel objects (vptr stores), the
// random-pitch helper f3f38, the voice-volume callback f4010, the "play sound id" entry points f4158 / f41fc, the sound-position
// pan / volume curve (f450c / f45b8 / f47ac) and the listener-distance callbacks f4718 / f48f0 / f48c8 / f4704.
#include "types.h"

struct Obj {
    /* 0x00 */ u32 *vptr;
    /* 0x04 */ u8 pad04[0x30];
    /* 0x34 */ void *f34;
    /* 0x38 */ u8 pad38[4];
    /* 0x3c */ u16 h3c;
    /* 0x3e */ u8 b3e;
    /* 0x3f */ u8 b3f;
    /* 0x40 */ u8 b40;
};

struct Vec3 {
    s32 x, y, z;
};

struct PlayCtx {
    s32 w0;
    Vec3 *pos;
    s32 w8;
    s32 wc;
    s32 w10;
};

struct Ramp {
    s32 w0, w4, w8, wc, w10, w14, w18;
};

struct Seq2 {
    /* 0x00 */ void *h;
    /* 0x04 */ u8 *pat;
    /* 0x08 */ u16 id;
    /* 0x0a */ u8 active;
    /* 0x0b */ s8 pos;
    /* 0x0c */ u8 tick;
    /* 0x0d */ u8 pad0d;
    /* 0x0e */ s8 s14;
    /* 0x0f */ s8 s15;
    /* 0x10 */ s8 s16;
    /* 0x11 */ s8 s17;
};

struct Ctl2 {
    /* 0x00 */ Seq2 a;
    /* 0x14 */ Seq2 b;
    /* 0x28 */ u8 pat[16];
    /* 0x38 */ u8 b38;
    /* 0x39 */ s8 b39;
    /* 0x3a */ s8 b3a;
    /* 0x3b */ u8 b3b;
    /* 0x3c */ u8 b3c;
};

struct SndObjX {
    /* 0x00 */ u8 pad0[6];
    /* 0x06 */ u8 b6;
    /* 0x07 */ u8 pad7[5];
    /* 0x0c */ s32 w0c;
    /* 0x10 */ u8 pad10[2];
    /* 0x12 */ u8 b12;
    /* 0x13 */ u8 pad13[10];
    /* 0x1d */ u8 b1d;
};

struct Glob {
    /* 0x00 */ u8 pad0[0x28];
    /* 0x28 */ void *f28;
    /* 0x2c */ SndObjX *f2c;
    /* 0x30 */ Ctl2 *f30;
    /* 0x34 */ u8 pad34[0x19];
    /* 0x4d */ u8 f4d;
    /* 0x4e */ u8 pad4e[0x12];
    /* 0x60 */ u8 f60;
};

extern "C" {
extern u32 data_0213b9c4[];
extern u32 data_0213b98c[];
extern u32 data_0213b9a8[];
extern u32 _ZTV12Unk_020d6f54[];
extern Glob data_021f5b80;
extern Ramp data_021f5c0c;
extern s32 data_021f5c00;
extern s32 data_021f5c04;
extern s32 data_021f5c08;
extern u8 data_021f5bfc;
extern u8 data_021f5bc0[];

void _ZdlPv(void *p);
u32 func_020f07f0(void *g, u32 n);
void func_0210a26c(void *p, s32 v);
void func_0210a2a0(s32 a, s32 b, u32 c);
void func_020eda80(void *a, s32 b, s32 c, s32 d, s32 e, s32 f);
s32 func_020edfbc(void *g, u32 a, u32 b, s32 c, s16 d);
s32 func_020ee0c4(void *g, u32 a, u32 b, s32 c, s16 d);
void func_020ee1b0(void *g, void *src);
void func_020ee46c(void *g);
void func_020ee478(void *g);
void func_020ee558(void *g, s32 x);
void func_020ee84c(s32 (*f)(PlayCtx *));
void func_020ee85c(s32 (*f)(PlayCtx *));
void func_020ee86c(s32 (*f)(PlayCtx *));
s32 func_01ffc5a4(s32 a, s32 b);

void func_020f4424(Obj *self);
void func_020f43c8(Obj *self);
Obj *func_020f40c0(Obj *self);
void func_020f4100(Obj *self);
void func_020f4010(void *p, s32 idx);
u16 func_020f3f38(Obj *self, u16 s);
BOOL func_020f41fc(Obj *self, s32 id, s32 c, s16 d);
s32 func_020f48f0(PlayCtx *p);
s32 func_020f48c8(PlayCtx *p);
s32 func_020f4704(PlayCtx *p);
s32 func_020f48d8(s32 x);
s32 func_020f4718(Vec3 *p, s32 m);
s32 func_020f4904(Vec3 *p, s32 m);
s32 func_020f450c(Ramp *r, s32 x);
}

static inline s32 FX_Mul(s32 a, s32 b) {
    return (s32)(((s64)a * b + 0x800) >> 12);
}

// listener callback: distance of the listener at p->pos (mode 0)
extern "C" s32 func_020f48f0(PlayCtx *p) {
    return func_020f4904(p->pos, 0);
}

// volume of the pan curve at x
extern "C" s32 func_020f48d8(s32 x) {
    return func_020f450c(&data_021f5c0c, x);
}

// listener callback: volume from the distance w10
extern "C" s32 func_020f48c8(PlayCtx *p) {
    return func_020f48d8(p->w10);
}

// left / right volume (0..127) from the depth z
extern "C" void func_020f47ac(s32 z, s32 *a, s32 *b) {
    s32 l;
    s32 r;
    if (z <= 0) {
        l = 0;
    } else if (z <= 0x99a) {
        l = FX_Mul(data_021f5c00, z) >> 12;
    } else if (z > 0x1000) {
        l = 0;
    } else {
        l = (0x7f000 - FX_Mul(data_021f5c08, z - 0x99a)) >> 12;
    }
    if (z <= 0x99a) {
        r = 0;
    } else if (z >= 0xccd) {
        r = 127;
    } else {
        r = FX_Mul(data_021f5c04, z - 0x99a) >> 12;
    }
    if (l > 127) {
        l = 127;
    } else if (l < 0) {
        l = 0;
    }
    *a = l;
    if (r > 127) {
        r = 127;
    } else if (r < 0) {
        r = 0;
    }
    *b = r;
}

// pan value (-128..127) of a position: mode 0 spread, 1 sign, 2 offset from the screen centre
extern "C" s32 func_020f4718(Vec3 *p, s32 m) {
    s32 r;
    s32 x;
    if (p == 0) return 0;
    x = p->x >> 12;
    switch (m) {
    case 0:
        r = (x + 42) * 221 / 83 - 111;
        break;
    case 1:
        if (x > 0) {
            r = 1;
        } else {
            r = -(x < 0);
        }
        break;
    case 2:
        r = x - 128;
        break;
    }
    if (r < -128) {
        r = -128;
    } else if (r > 127) {
        r = 127;
    }
    return r;
}

// listener callback: pan of the listener at p->pos (mode 0)
extern "C" s32 func_020f4704(PlayCtx *p) {
    return func_020f4718(p->pos, 0);
}

// clear the Ramp
extern "C" void func_020f46d4(Ramp *r) {
    r->w4 = r->w8 = r->wc = r->w10 = 0;
    r->w14 = r->w18 = 0;
}

// rebuild the pan curve Ramp for a new centre value (cached in w0)
extern "C" void func_020f45b8(Ramp *r, s32 v) {
    s32 t;
    if (r->w0 == v) return;
    r->w0 = v;
    t = r->w0 - 0xb000;
    r->w4 = 0x7f000 - FX_Mul(t, 0x3000);
    r->w8 = 0x68000 - FX_Mul(t, 0x4000);
    r->wc = FX_Mul(func_01ffc5a4(0x2000, 0x3000), t) + 0x4000;
    r->w10 = FX_Mul(func_01ffc5a4(0x4000, 0x3000), t) + 0x11000;
    r->w14 = func_01ffc5a4(r->w4 - r->w8, r->wc - r->w0);
    r->w18 = func_01ffc5a4(r->w8, r->w0 - r->w10);
}

// pan curve: piecewise-linear mapping of x (fixed point) through the Ramp points, clamped to 0..127
extern "C" s32 func_020f450c(Ramp *r, s32 x) {
    s32 v;
    if (x >= (r->w10 >> 12)) {
        v = 0;
    } else if (x <= (r->wc >> 12)) {
        v = r->w4 >> 12;
    } else if (x <= (r->w0 >> 12)) {
        v = (r->w4 + FX_Mul((x << 12) - r->wc, r->w14)) >> 12;
    } else {
        v = (r->w8 + FX_Mul((x << 12) - r->w0, r->w18)) >> 12;
    }
    if (v > 127) return 127;
    if (v < 0) return 0;
    return v;
}

// address of the pan curve data_021f5c0c (Ramp)
extern "C" Ramp *func_020f4500(void) {
    return &data_021f5c0c;
}

// set data_021f5bfc (byte flag)
extern "C" void func_020f44f0(u8 v) {
    data_021f5bfc = v;
}

// deleting dtor (D0) of class 0x0213b9c4
extern "C" Obj *func_020f44c4(Obj *self) {
    self->vptr = data_0213b9c4;
    func_020f43c8(self);
    _ZdlPv(self);
    return self;
}

// dtor (D1) of class 0x0213b9c4
extern "C" Obj *func_020f44a0(Obj *self) {
    self->vptr = data_0213b9c4;
    func_020f43c8(self);
    return self;
}

// install the three listener callbacks f48f0 / f48c8 / f4704
extern "C" void func_020f4468(void) {
    func_020ee85c(func_020f48f0);
    func_020ee84c(func_020f48c8);
    func_020ee86c(func_020f4704);
}

// clear the three sound callbacks (func_020ee85c / 84c / 86c)
extern "C" void func_020f443c(void) {
    func_020ee85c(0);
    func_020ee84c(0);
    func_020ee86c(0);
}

// base ctor: vptr 0x0213b9a8, kind byte 0
extern "C" void func_020f4424(Obj *self) {
    self->vptr = data_0213b9a8;
    self->b3e = 0;
}

// base ctor (kind byte 0), same code as f4424
extern "C" void func_020f440c(Obj *self) {
    self->vptr = data_0213b9a8;
    self->b3e = 0;
}

// alias _ZN17Unk_020dc034_DtorD1Ev: same code as f43c8
extern "C" void func_020f43fc(Obj *self) {
    self->vptr = data_0213b9a8;
}

// deleting dtor of the base class (vptr, _ZdlPv)
extern "C" Obj *func_020f43d8(Obj *self) {
    self->vptr = data_0213b9a8;
    _ZdlPv(self);
    return self;
}

// alias _ZN12Unk_020f43c8D2Ev: base class dtor, only stores the vptr (object pointer 0x0213b9a8)
extern "C" void func_020f43c8(Obj *self) {
    self->vptr = data_0213b9a8;
}

// alias _ZN12Unk_020f43c88vfunc_08Ev: reset the sub-object (func_020ee478, func_020ee558(.., 1)), clear the sound id (+0x3c)
extern "C" void func_020f4394(Obj *self) {
    void *q;
    func_020ee478(self ? (void *)((u8 *)self + 4) : (void *)self);
    q = self;
    if (self) q = (u8 *)self + 4;
    func_020ee558(q, 1);
    self->h3c = 0;
}

// alias _ZN12Unk_020f43c88vfunc_0cEv: forward to func_020ee1b0 with the sub-object at this+4
extern "C" void func_020f4380(Obj *self, void *src) {
    return func_020ee1b0(self ? (void *)((u8 *)self + 4) : (void *)self, src);
}

// like f4158 but a kind-99 object with the sound manager on plays through the global voice (data_021f5bc0); ids 123/127 get a random variant
extern "C" BOOL func_020f41fc(Obj *self, s32 id, s32 c, s16 d) {
    s32 x;
    if (self->b3e == 99 && data_021f5b80.f60 != 0) {
        void *p = data_021f5bc0;
        func_020eda80(p, 10, -1, -1, id / 1000, id % 1000);
        func_0210a26c(p, 100);
        return TRUE;
    }
    switch (id) {
    case 0x838:
    case 0x839:
    case 0x83a:
        func_020f4100(self);
        break;
    }
    x = id;
    if (id == 123 || id == 127) {
        x += func_020f07f0(&data_021f5b80, 4);
        if (x == self->h3c) {
            if (x == id) {
                x++;
            } else if (x == id + 3) {
                x--;
            }
        }
        self->h3c = x;
    }
    return func_020ee0c4(self ? (void *)((u8 *)self + 4) : (void *)self, id / 1000, x % 1000, c, d);
}

// play sound id (group id/1000, index id%1000) through the sub-object; ids 0x7f6 stop the effects first; refused when data_021f5b80+0x4d == 1
extern "C" BOOL func_020f4158(Obj *self, s32 id, s32 c, s16 d) {
    Glob *g = &data_021f5b80;
    if (g->f4d == 1) return FALSE;
    if (id == 0x7f6) func_020f4100(self);
    return func_020edfbc(self ? (void *)((u8 *)self + 4) : (void *)self, id / 1000, id % 1000, c, d);
}

// alias _ZN12Unk_020f43c88vfunc_10Ev: forward to func_020ee46c with the sub-object at this+4
extern "C" void func_020f4144(Obj *self) {
    return func_020ee46c(self ? (void *)((u8 *)self + 4) : (void *)self);
}

// stop the effect sound ids 82..96 and 54 on channel 2 (the argument is only passed through)
extern "C" void func_020f4100(Obj *self) {
    s32 i;
    for (i = 82; i < 97; i++) {
        func_0210a2a0(2, i, 0);
    }
    func_0210a2a0(2, 54, 0);
}

// same as _ZN12Unk_020f4080C1Ev (the original has the code twice)
extern "C" Obj *func_020f40c0(Obj *self) {
    func_020f4424(self);
    self->vptr = _ZTV12Unk_020d6f54 + 2;
    self->f34 = (void *)func_020f4010;
    self->b3e = 1;
    self->b3f = 0;
    return self;
}

// ctor of Unk_020d6f54 (alias _ZN12Unk_020d6f54C1Ev): vptr, volume callback f4010, kind byte 1
extern "C" Obj *_ZN12Unk_020f4080C1Ev(Obj *self) {
    func_020f4424(self);
    self->vptr = _ZTV12Unk_020d6f54 + 2;
    self->f34 = (void *)func_020f4010;
    self->b3e = 1;
    self->b3f = 0;
    return self;
}

// volume callback installed at +0x34 by the base ctor: sub-object volume slot idx = kind-volume * 40 / 100
extern "C" void func_020f4010(void *p, s32 idx) {
    if (data_021f5b80.f60 == 0) return;
    void *slot = (u8 *)p + 8 + idx * 12;
    Obj *o = p ? (Obj *)((u8 *)p - 4) : (Obj *)p;
    func_0210a26c(slot, o->b40 * 40 / 100);
}

// advance the sound id by 1..3 (random, flags in b3f decide: bit0 toggles every call, bit1/bit2 mark the last step)
extern "C" u16 func_020f3f38(Obj *self, u16 s) {
    u32 r = func_020f07f0(&data_021f5b80, 4);
    u8 f = self->b3f;
    u32 b = f & 2;
    u32 c = f & 4;
    if (f & 1) {
        if (r == 0 && b == 0 && c == 0) {
            s = s + 2;
            self->b3f = f | 2;
        } else {
            self->b3f &= ~2;
        }
    } else {
        if (r == 0 && b == 0 && c == 0) {
            s = s + 3;
            self->b3f = f | 4;
        } else {
            s = s + 1;
            self->b3f &= ~4;
        }
    }
    self->b3f ^= 1;
    return s;
}

// play the next sound id of the f3f38 sequence at volume 127
extern "C" void func_020f3f10(Obj *self, u16 s) {
    func_020f41fc(self, func_020f3f38(self, s), 127, 0);
}

// ctor (alias _ZN12Unk_020f3ee4C1Ev) of class 0x0213b98c: base ctor f40c0, kind byte 99
extern "C" Obj *func_020f3ee4(Obj *self) {
    func_020f40c0(self);
    self->vptr = data_0213b98c;
    self->b3e = 99;
    return self;
}

// dtor (D1, alias _ZN12Unk_020f3ee4D1Ev) of class 0x0213b98c
extern "C" Obj *func_020f3eb4(Obj *self) {
    self->vptr = data_0213b98c;
    self->vptr = _ZTV12Unk_020d6f54 + 2;
    func_020f43c8(self);
    return self;
}

// deleting dtor (D0) of class 0x0213b98c: vptr of its base Unk_020d6f54, base dtor f43c8, _ZdlPv
extern "C" Obj *func_020f3e7c(Obj *self) {
    self->vptr = data_0213b98c;
    self->vptr = _ZTV12Unk_020d6f54 + 2;
    func_020f43c8(self);
    _ZdlPv(self);
    return self;
}

// ctor of class 0x0213b9c4 (alias _ZN12Unk_0213b9c4C1Ev): base ctor f4424, vptr, kind byte 2
extern "C" Obj *func_020f3e50(Obj *self) {
    func_020f4424(self);
    self->vptr = data_0213b9c4;
    self->b3e = 2;
    return self;
}
