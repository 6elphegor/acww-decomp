// mwcc-flags: -nothumb -O4,p
// G012b: autoload_2 0x020f4a5c-0x020f5b9c (40 functions). mwcc 1.2/base, C++, ARM, -O4,p. PARTIAL: second part of the sound-effect
// file: the two "sequence" players (Seq1 at f4a5c-f4fbc, Seq2 / Ctl2 at f5018-f5b84) that step through note / event patterns and
// start sound ids through func_0210cf78 / func_020edad0. All functions are extern "C" under their func_ names, the object first;
// no class is defined, all data is extern.
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

struct Seq1 {
    /* 0x00 */ void *h;
    /* 0x04 */ u16 id;
    /* 0x06 */ s8 step;
    /* 0x07 */ u8 tick;
    /* 0x08 */ s8 v8;
    /* 0x09 */ s8 v9;
    /* 0x0a */ u8 active;
    /* 0x0b */ u8 limit;
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
extern Glob data_021f5b80;
extern u8 data_0213b9d8;
extern u16 data_021f5c28;
extern u8 *data_021f5c2c;
extern u8 data_0213599c[][16];
extern u8 data_0213598c[];
extern u8 data_0213597c[];

u32 func_020f07f0(void *g, u32 n);
void func_0210a26c(void *p, s32 v);
void func_0210a27c(void *p);
void func_0210a148(void *p, u32 a, s32 b);
void func_0210a0e8(void *p, u32 a, s32 b);
void func_0210a0b8(void *p, s32 v);
void func_0210a024(void *p, u32 a, void *out);
void func_020eda30(void *p, u32 v);
void func_020eda60(void *p);
void func_020edad0(u16 a, u16 b, void *out);
void *func_020edc88(void);
void func_0210bd58(void *a, u32 b);
void func_0210cc84(u32 id, void *h);
void func_0210cc4c(u32 id, void *h);
BOOL func_0210cf78(void *a, u32 b, u32 c);
s32 func_01ffc5a4(s32 a, s32 b);

s32 func_020f48d8(s32 x);
s32 func_020f4718(Vec3 *p, s32 m);
s32 func_020f4904(Vec3 *p, s32 m);
void func_020f4a5c(void *obj, Vec3 *pos);
BOOL func_020f4ab4(Seq1 *self);
void func_020f4b50(Seq1 *self, Vec3 *pos);
void func_020f4c48(Seq1 *self);
u8 *func_020f53fc(Ctl2 *c);
void func_020f5034(void *c, u32 id);
void func_020f5018(void *c, u32 id);
void func_020f5a34(Seq2 *s, u16 v);
void func_020f5a3c(Seq2 *s, u32 idx);
void func_020f5aa8(Seq2 *s, u8 *pat);
void func_020f5b08(Seq2 *s, u16 id, u8 *pat);
void func_020f5b68(Seq2 *s);
void func_020f5a24(void *p);
void func_020f59f0(Seq2 *s);
s32 func_020f5480(Seq2 *s);
BOOL func_020f5534(Seq2 *s);
void func_020f5654(Seq2 *s);
u8 func_020f582c(Seq2 *s, u8 idx);
void func_020f5968(Seq2 *s);
}

static inline s32 FX_Mul(s32 a, s32 b) {
    return (s32)(((s64)a * b + 0x800) >> 12);
}

static inline BOOL nz(void *p) {
    return p != 0;
}

// dtor D1 (alias _ZN12Unk_020f5b84D1Ev): func_0210a27c(this)
extern "C" Obj *func_020f5b84(Obj *self) {
    func_0210a27c(self);
    return self;
}

// Seq2: init
extern "C" void func_020f5b68(Seq2 *self) {
    func_020f59f0(self);
    func_020eda60(self);
}

// Seq2: start with id and pattern
extern "C" void func_020f5b08(Seq2 *self, u16 id, u8 *pat) {
    func_020f59f0(self);
    if (nz(self->h)) func_020eda30(self, 0);
    self->id = id;
    self->pat = pat;
    self->active = 1;
    func_020edad0(0, self->id, self);
}

// Seq2: start with a pattern
extern "C" void func_020f5aa8(Seq2 *self, u8 *pat) {
    func_020f59f0(self);
    if (nz(self->h)) func_020eda30(self, 0);
    self->pat = pat;
    self->active = 1;
    func_020edad0(0, self->id, self);
}

// Seq2: play event idx + 20
extern "C" void func_020f5a3c(Seq2 *self, u32 idx) {
    func_020f59f0(self);
    if (idx > 13) return;
    if (nz(self->h)) func_020eda30(self, 0);
    func_020edad0(idx + 20, 0xd3, self);
}

// Seq2: set id
extern "C" void func_020f5a34(Seq2 *s, u16 v) {
    s->id = v;
}

// cancel (func_020eda30(p, 5))
extern "C" void func_020f5a24(void *p) {
    return func_020eda30(p, 5);
}

// Seq2: reset state
extern "C" void func_020f59f0(Seq2 *self) {
    self->active = 0;
    self->pos = -1;
    self->tick = 0;
    self->s14 = self->s15 = self->s16 = self->s17 = -1;
}

// Seq2: read the four parameters of the playing sound
extern "C" void func_020f5968(Seq2 *self) {
    s16 a, b, c, d;
    d = -1;
    c = -1;
    b = -1;
    a = -1;
    func_0210a024(self, 0, &a);
    func_0210a024(self, 1, &b);
    func_0210a024(self, 2, &c);
    func_0210a024(self, 3, &d);
    self->s14 = a;
    self->s15 = b;
    self->s16 = c;
    self->s17 = d;
}

// Seq2: pattern value for step idx (mode 0 plain, 1 / 2 pairs, 3 table lookup)
extern "C" u8 func_020f582c(Seq2 *self, u8 idx) {
    u8 r;
    switch (self->s16) {
    case 0:
        r = self->pat[idx];
        break;
    case 1: {
        u8 m = idx % 3;
        if (m == 1) {
            r = 14;
        } else {
            u8 q = idx / 3;
            if (m == 0) {
                r = self->pat[q * 2];
            } else {
                r = self->pat[q * 2 + 1];
            }
        }
        break;
    }
    case 2: {
        u8 m = idx % 3;
        if (m == 2) {
            r = 14;
        } else {
            u8 q = idx / 3;
            if (m == 0) {
                r = self->pat[q * 2];
            } else {
                r = self->pat[q * 2 + 1];
            }
        }
        break;
    }
    case 3: {
        s32 found = 0;
        s32 j;
        for (j = 0; j < 13; j++) {
            if (idx == data_0213597c[j]) {
                r = self->pat[j];
                found = 1;
            }
        }
        if (found == 0) r = 14;
        break;
    }
    }
    return r;
}

// Seq2: start the sound of the current step, volume by position
extern "C" void func_020f5654(Seq2 *self) {
    u32 v = func_020f582c(self, self->pos);
    s32 d = 153600 / (self->s14 * 120);
    switch (v) {
    case 13:
        func_020edad0(v + 1 + func_020f07f0(&data_021f5b80, 6), self->id, self);
        func_0210a0b8(self, d);
        break;
    case 14:
    case 15:
        break;
    default:
        func_020edad0(v + 1, self->id, self);
        func_0210a0b8(self, d);
        break;
    }
    if (self->s16 != 3) return;
    {
        u8 *t = data_0213597c;
        s32 p = self->pos;
        s32 vol;
        if (p == t[0]) vol = 64;
        else if (p == t[1]) vol = 80;
        else if (p == t[2]) vol = 96;
        else if (p == t[3]) vol = 112;
        else if (p == t[4]) vol = 127;
        else if (p == t[5]) vol = 127;
        else if (p == t[6]) vol = 112;
        else if (p == t[7]) vol = 96;
        else if (p == t[8]) vol = 80;
        else if (p == t[9]) vol = 64;
        else if (p == t[10]) vol = 48;
        else if (p == t[11]) vol = 32;
        else if (p == t[12]) vol = 16;
        else vol = -1;
        if (vol != -1) func_0210a26c(self, vol);
    }
    {
        Ctl2 *c = data_021f5b80.f30;
        func_0210a148(self, 0xff, c->b39);
        func_0210a0e8(self, 0xff, c->b3a);
    }
}

// Seq2: end-of-pattern test (positions 15 / 23 / table+6 depending on the mode); starts the next step
extern "C" BOOL func_020f5534(Seq2 *self) {
    s8 k = self->s16;
    u32 v;
    if (k == 0) {
        if (self->pos == 15) {
            func_020eda30(self, 0);
            data_021f5b80.f30->b3c = 0;
            return TRUE;
        }
    } else if ((u8)(s8)(k - 1) <= 1) {
        if (self->pos == 23) {
            func_020eda30(self, 0);
            data_021f5b80.f30->b3c = 0;
            return TRUE;
        }
    } else if (k == 3) {
        if (self->pos == data_0213597c[12] + 6) {
            func_020eda30(self, 0);
            data_021f5b80.f30->b3c = 0;
            return TRUE;
        }
    }
    v = func_020f582c(self, self->pos + 1);
    if (v != 14 && (v != 15 || self->s17 != 1)) func_020eda30(self, 0);
    return FALSE;
}

// Seq2: per-frame update; returns the current position or -1
extern "C" s32 func_020f5480(Seq2 *self) {
    s32 r = -1;
    if (self->active) {
        if (self->s14 == -1) {
            func_020f5968(self);
        } else {
            BOOL t = 0;
            if (self->tick == self->s15) t = func_020f5534(self);
            if (t) {
                func_020f59f0(self);
            } else {
                if (self->tick == 0 || self->tick == self->s14) {
                    self->tick = 0;
                    self->pos++;
                    func_020f5654(self);
                }
                self->tick++;
            }
            r = self->pos;
        }
    }
    return r;
}

// Ctl2 ctor: registers itself in data_021f5b80+0x30
extern "C" void func_020f5430(Ctl2 *c) {
    data_021f5b80.f30 = c;
    func_020f5b68(&c->b);
    func_020f5b68(&c->a);
    func_020f5a34(&c->a, 0);
    c->b38 = 0;
    c->b39 = -1;
    c->b3a = 0;
    c->b3b = 0;
}

// address of data_0213598c
extern "C" u8 *func_020f5424(void) {
    return data_0213598c;
}

// Ctl2: copy a 16-byte pattern
extern "C" void func_020f5404(Ctl2 *c, u8 *src) {
    s32 i;
    for (i = 0; i < 16; i++) {
        c->pat[i] = src[i];
    }
}

// Ctl2: address of the pattern (+0x28)
extern "C" u8 *func_020f53fc(Ctl2 *c) {
    return c->pat;
}

// Ctl2: start by index with a given pattern (400 = special)
extern "C" void func_020f5340(Ctl2 *c, u32 v, u8 *pat) {
    u32 w;
    c->b3c = 1;
    c->b39 = -1;
    if (v == 400) {
        func_020f5b08(&c->b, 0xd3, pat);
        return;
    }
    if (v < 200) {
        func_020f5034(c, v + 0x1df);
        w = v + 4;
        func_020f5018(c, w);
        func_020f5b08(&c->b, w, pat);
    } else {
        func_020f5034(c, v + 0x1ad);
        w = v - 0x2e;
        func_020f5018(c, w);
        func_020f5b08(&c->b, w, pat);
    }
}

// Ctl2: start by index with the stored pattern (index < 200 or >= 200)
extern "C" void func_020f5298(Ctl2 *c, u32 v) {
    u32 w;
    c->b3c = 1;
    c->b39 = -1;
    if (v < 200) {
        func_020f5034(c, v + 0x1df);
        w = v + 4;
        func_020f5018(c, w);
        func_020f5b08(&c->b, w, c->pat);
    } else {
        func_020f5034(c, v + 0x1ad);
        w = v - 0x2e;
        func_020f5018(c, w);
        func_020f5b08(&c->b, w, c->pat);
    }
}

// Ctl2: start by index (0..200), random pattern row
extern "C" void func_020f5208(Ctl2 *c, u32 v) {
    u32 w;
    c->b3c = 1;
    c->b39 = -1;
    if (v > 200) return;
    func_020f5034(c, v + 0x1df);
    w = v + 4;
    func_020f5018(c, w);
    c->b3b = func_020f07f0(&data_021f5b80, 0x30);
    func_020f5b08(&c->b, w, data_0213599c[c->b3b]);
}

// Ctl2: copy a random-chosen pattern row (16 bytes) from data_0213599c
extern "C" u8 *func_020f51d4(Ctl2 *c) {
    u8 *src = data_0213599c[c->b3b];
    s32 i;
    for (i = 0; i < 16; i++) {
        c->pat[i] = src[i];
    }
    return c->pat;
}

// Ctl2: stop the second player
extern "C" void func_020f51b4(Ctl2 *c) {
    func_020f5a24(&c->b);
    c->b.active = 0;
}

// Ctl2: start the first player with the stored pattern
extern "C" void func_020f51a4(Ctl2 *c) {
    return func_020f5aa8(&c->a, c->pat);
}

// Ctl2: start the event of the given mode with listener volume / pan from a position
extern "C" void func_020f50c0(Ctl2 *c, Vec3 *pos, u32 mode) {
    u32 a;
    u32 b;
    if ((u8)(c->b3c + 255) <= 1) return;
    c->b39 = func_020f48d8(func_020f4904(pos, 0));
    c->b3a = func_020f4718(pos, 0);
    c->b3c = 4;
    switch (mode) {
    case 0:
        a = 0x1db;
        b = 0xd4;
        break;
    case 1:
        a = 0x1de;
        b = 0xd7;
        break;
    case 2:
        a = 0x1dc;
        b = 0xd5;
        break;
    case 3:
        a = 0x1dd;
        b = 0xd6;
        break;
    default:
        return;
    }
    func_020f5034(c, a);
    func_020f5018(c, b);
    func_020f5b08(&c->b, b, c->pat);
}

// Ctl2: start event on the second player
extern "C" void func_020f50b0(Ctl2 *c, u32 idx) {
    return func_020f5a3c(&c->b, idx);
}

// Ctl2: update both Seq2 players, +0x38 = first one is active
extern "C" void func_020f5084(Ctl2 *c) {
    c->b38 = func_020f5480(&c->a) >= 0;
    func_020f5480(&c->b);
}

// Ctl2: byte +0x38 (playing flag)
extern "C" u8 func_020f507c(Ctl2 *c) {
    return c->b38;
}

// forward to func_020f5a34 (set id)
extern "C" void func_020f5070(Seq2 *s, u16 v) {
    return func_020f5a34(s, v);
}

// same with volume reset (func_0210bd58(stream, 0)) and func_0210cc4c
extern "C" void func_020f5034(void *c, u32 id) {
    void *h = data_021f5b80.f28;
    func_0210bd58(h, 0);
    func_0210cc4c(id, h);
}

// start sound id in the stream of the sound manager (data_021f5b80+0x28)
extern "C" void func_020f5018(void *c, u32 id) {
    func_0210cc84(id, data_021f5b80.f28);
}

// empty
extern "C" void func_020f5014(void) {
}

// empty
extern "C" void func_020f5010(void) {
}

// Seq1: init (pattern table from func_020f53fc)
extern "C" void func_020f4fbc(Seq1 *self) {
    data_021f5c2c = func_020f53fc(data_021f5b80.f30);
    func_020eda60(self);
    self->active = 0;
    self->step = -1;
    self->tick = 0;
    self->v8 = self->v9 = -1;
}

// Seq1: stop
extern "C" void func_020f4f7c(Seq1 *self) {
    self->active = 0;
    if (nz(self->h)) func_020eda30(self, 0);
    func_0210a27c(self);
}

// Seq1: start pattern/sound id (switches the stream pair 1 / 2 through data_0213b9d8)
extern "C" void func_020f4e04(Seq1 *self, u16 id) {
    Ctl2 *c = data_021f5b80.f30;
    SndObjX *o;
    void *h;
    u32 ok;
    if (c->b3c == 1) return;
    func_020eda30(self, 0);
    c->b3c = 2;
    data_021f5c28 = self->id;
    self->id = id;
    ok = 0;
    self->active = 1;
    self->step = -1;
    if (func_0210cf78(self, self->id, ok)) {
        if (data_021f5c28 == self->id) ok = 1;
        func_020eda30(self, 0);
    }
    if (ok) return;
    o = data_021f5b80.f2c;
    if (o == 0) return;
    if (o->b6 != 0) {
        data_0213b9d8 = 2;
    } else {
        data_0213b9d8 = (data_0213b9d8 == 1) ? 2 : 1;
    }
    if (data_0213b9d8 == 1) {
        h = func_020edc88();
        func_0210bd58(h, o->b1d + 1);
    } else if (data_0213b9d8 == 2) {
        h = data_021f5b80.f28;
        func_020edc88();
        func_0210bd58(h, 0);
    }
    {
        u32 sid = self->id;
        func_0210cc84(sid, h);
        func_0210cc4c(sid + 0x1db, h);
    }
}

// Seq1: per-frame update of the pattern player
extern "C" void func_020f4c98(Seq1 *self, Vec3 *pos) {
    SndObjX *o;
    u8 flag;
    s32 v;
    s32 w;
    if (self->active == 0) return;
    if (self->v8 == -1) {
        if (!nz(self->h)) func_020edad0(0, self->id, self);
        func_020f4c48(self);
        return;
    }
    self->tick++;
    o = data_021f5b80.f2c;
    flag = o->b12;
    if (self->tick >= self->limit) {
        BOOL done = func_020f4ab4(self);
        self->tick = 0;
        if (done) return;
    }
    if (flag == 0) return;
    self->step++;
    self->tick = 0;
    if (self->step < 16) {
        func_020f4b50(self, pos);
    } else if (self->step >= 16) {
        func_020f4ab4(self);
        return;
    }
    v = self->v8;
    w = o->w0c;
    if (v == 100) {
        self->limit = w >> 12;
        return;
    }
    self->limit = FX_Mul(w, func_01ffc5a4(v << 12, 100 << 12)) >> 12;
}

// Seq1: read the two pattern parameters (ids 4 and 3) of the playing sound
extern "C" void func_020f4c48(Seq1 *self) {
    s16 a, b;
    b = -1;
    a = -1;
    func_0210a024(self, 4, &a);
    func_0210a024(self, 3, &b);
    self->v8 = a;
    self->v9 = b;
}

// Seq1: start the sound of the current pattern step (13 = random variant)
extern "C" void func_020f4b50(Seq1 *self, Vec3 *pos) {
    u32 v = data_021f5c2c[self->step];
    switch (v) {
    case 13:
        if (nz(self->h)) func_020eda30(self, 0);
        func_0210cf78(self, self->id, (u16)(v + 1 + func_020f07f0(&data_021f5b80, 6)));
        func_020f4a5c(self, pos);
        return;
    case 14:
    case 15:
        return;
    }
    if (nz(self->h)) func_020eda30(self, 0);
    func_0210cf78(self, self->id, (u16)(v + 1));
    func_020f4a5c(self, pos);
}

// Seq1: advance to the next pattern step or end the sequence (returns TRUE at the end)
extern "C" BOOL func_020f4ab4(Seq1 *self) {
    s32 s = self->step;
    if (s >= 15) {
        func_020eda30(self, 0);
        data_021f5b80.f30->b3c = 0;
        self->active = 0;
        self->step = -1;
        self->tick = 0;
        return TRUE;
    }
    u32 v = data_021f5c2c[s + 1];
    if (v != 14) {
        if (v == 15) {
            if (self->v9 != 1) func_020eda30(self, 0);
        } else {
            func_020eda30(self, 0);
        }
    }
    return FALSE;
}

// set the volume (id 15) and pan (id 15) of a voice from a position
extern "C" void func_020f4a5c(void *obj, Vec3 *pos) {
    s32 a = func_020f48d8(func_020f4904(pos, 0));
    s32 b = func_020f4718(pos, 0);
    func_0210a148(obj, 15, a);
    func_0210a0e8(obj, 15, b);
}
