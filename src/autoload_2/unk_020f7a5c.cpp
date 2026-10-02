// mwcc-flags: -nothumb -O4,p
// G011a: autoload_2 0x020f7a5c-0x020f8604 (16 functions). mwcc 1.2/base, C++, ARM, -O4,p. PARTIAL: plain func_ names, nothing defined but the functions.
// BGM-synchronised animation object (func_020f7a5c..func_020f80d8: Fo, vtable 0x0213bb84), its base class (vtable 0x0213bb90) and the beat reader func_020f83fc.
// FX_Div = func_01ffc5a4 (ITCM). data_021f5b80 = sound manager (G006), data_021f5bbc = BGM info handle.
#include "types.h"

// BGM descriptor: u16 id at +0x38 (240 = a special track whose values are halved)
struct Hd {
    u8 pad[0x38];
    u16 id;
};

// data_021f5bbc: BGM info handle, first word = pointer to Hd, queried with func_0210a024(&handle, selector, &out)
struct Hr {
    Hd *p;
};

struct Q {
    u8 pad[0x16];
    s16 s16v;
    u8 p18[2];
    s16 s1a;
};

struct Fo;
// view of data_021f5b80 (sound manager of G006): +0 current object, +0x2c Q*, +0x3c Hd* (same word as data_021f5bbc)
struct Mg {
    Fo *cur;
    u8 p4[0x28];
    Q *q;
    u8 p30[0xc];
    Hd *h;
};

// object with the sub-struct at +0x14
struct Sub {
    s8 s0;
    s8 s1;
    s8 s2;
    s8 s3;
    s8 s4;
    u8 pad5[3];
    u32 w8;
    u32 w12;
    u32 w16;
};

// object stored in data_021f5b80[0] (vtable 0x0213bb84, derived from the base at vtable 0x0213bb90); sub-struct Sub at +0x14
struct Fo {
    u32 *vptr;
    u32 w4;
    u8 pad8[0xc];
    s8 c14;
    s8 c15;
    s8 c16;
    s8 c17;
    s8 c18;
    u8 pad19[3];
    s32 w1c;
    s32 w20;
    s32 w24;
    u8 c28;
    u8 c29;
    u8 c2a;
    u8 pad2b;
    s16 s2c;
    u8 c2e;
};

// base object (vtable 0x0213bb90), view A (+4 is an fx32 value)
struct Ra {
    u32 *vptr;
    s32 w4;
    u8 c8;
    s8 c9;
    s8 c10;
    s8 c11;
    s8 c12;
    u8 pad13;
    s16 h14;
    s8 c16;
    u8 pad17;
    u16 h18;
};

// view B of the base object: state machine (c8 = 0 off / 1 beat-sync / 2 wait), +4 and +6 are u16 here
struct Rb {
    u32 w0;
    u16 h4;
    u16 h6;
    u8 c8;
    s8 c9;
    s8 c10;
    s8 c11;
    s8 c12;
    s8 c13;
    s8 c14;
    u8 c15;
    u8 c16;
};

// SPL-style particle manager: ResInfo = emitter resource header, Entry = live emitter, Mgr = manager
struct ResInfo {
    u32 pad0 : 14;
    u32 f14 : 1;
    u32 pad15 : 17;
    u32 w4;
    u32 w8;
    u32 wc;
    u8 pad10[0x22];
    u16 h32;
    u8 pad34[4];
    u16 h38;
};

struct Res {
    ResInfo *p0;
};

struct Fl {
    u32 b0 : 1;
    u32 b1 : 1;
    u32 b2 : 1;
    u32 b3 : 1;
    u32 b4 : 1;
    u32 pad : 27;
};

struct Entry {
    Entry *next;
    u8 p4[8];
    u32 w12;
    u32 w16;
    u32 w20;
    Res *res;
    Fl fl;
    s32 px;
    s32 py;
    s32 pz;
    u8 p2c[0xc];
    u16 h38;
    u8 p3a[0x2e];
    u32 pad68a : 16;
    u32 f16 : 3;
    u32 pad68b : 13;
};

struct Mgr {
    u32 w0;
    Entry *act;
    u32 w8;
    Entry *fr;
    u8 p10[0xc];
    u8 *tab;
    u8 p20[0x14];
    Entry *cur;
    u32 w38;
};

// resource-table entries (texture / palette loader, callbacks supplied by the caller)
extern "C" {
extern Mg data_021f5b80;
extern Hr data_021f5bbc;
extern s16 data_021f5c30;
extern s16 data_021f5c34;
extern u32 data_0213bb90[];
extern u32 data_0213bb84[];
s32 func_01ffc5a4(s32 a, s32 b);
void func_0210a024(void *p, u32 sel, void *out);
void func_0210a008(u32 sel, void *out);
void func_0210d010(void *p, u32 v);
void func_020eda30(void *p, u32 v);
void func_02109fb4(u32 a, s32 b);
u32 func_021172cc(u32 a);
void func_021094f8(void);
void func_02117028(u32 a);
s32 func_02109f80(void *p, void *out);
s32 func_02109f4c(void *p, u32 a, void *out);
void func_020f81dc(Ra *self);
void func_020f8164(Ra *self);
void func_020f7cc0(Fo *self);
void func_020f7d84(Fo *self);
void func_020f7a5c(Fo *self);
}

static inline BOOL nz(u32 v) { return v != 0; }

extern "C" s32 func_020f83fc(Rb *r) {
    s32 sc;
    s32 rv;
    s16 a;
    s16 b;
    s32 d;
    if (r->c9 == 1 || r->c9 == 3) {
        a = r->c12;
        d = data_021f5c30 - a;
        if (d < 0) d += 16;
        rv = d << 14;
        if (data_021f5b80.q == 0) return 0;
        if (data_021f5b80.q->s1a == 1) {
            s32 w = data_021f5c34;
            if (w < 32) {
                rv += (w << 14) >> 5;
            } else {
                rv += ((w - 32) << 14) >> 4;
            }
        } else {
            rv += func_01ffc5a4(data_021f5c34 << 14, 0x18000);
        }
        if (r->c10 == 2) {
            rv <<= 1;
            if (rv > 0x40000) rv -= 0x40000;
        }
    } else {
    func_0210a024(r, 7, &a);
    func_0210a024(r, 12, &b);
    d = data_021f5c30 - a;
    if (d < 0) d += 16;
    switch (r->c10) {
    case 1:
    case 2:
    case 4:
        sc = r->c10;
        break;
    case 99:
        sc = r->c14;
        break;
    }
    if (data_021f5b80.q == 0) return 0;
    switch (data_021f5b80.q->s1a) {
    case 0:
        rv = 24;
        break;
    case 1: {
        s32 w = data_021f5c34;
        if (w < 32) {
            rv = 32;
        } else {
            data_021f5c34 = w - 32;
            rv = 16;
        }
        break;
    }
    }
    if (r->c16 == 0) {
        if (d >= sc) r->c16 = 1;
    }
    if (r->c16 != 0) {
        if (r->c11 == 0) r->c16 = 0;
    }
    if (r->c16 != 0) {
        rv = 0;
    } else {
        rv = func_01ffc5a4((d * rv + data_021f5c34) << 12, (sc * rv) << 12) << 6;
    }
    }
    return rv;
}

extern "C" Ra *func_020f839c(Ra *self) {
    self->vptr = data_0213bb90;
    self->w4 = 0;
    self->c8 = 0;
    self->c9 = 0;
    self->c10 = 0;
    self->c11 = -1;
    self->c12 = -1;
    self->h14 = 120;
    self->c16 = -1;
    func_02109fb4(2, -1);
    func_02109fb4(1, -1);
    return self;
}

extern "C" Ra *func_020f833c(Ra *self) {
    self->vptr = data_0213bb90;
    self->w4 = 0;
    self->c8 = 0;
    self->c9 = 0;
    self->c10 = 0;
    self->c11 = -1;
    self->c12 = -1;
    self->h14 = 120;
    self->c16 = -1;
    func_02109fb4(2, -1);
    func_02109fb4(1, -1);
    return self;
}

extern "C" Ra *func_020f831c(Ra *self) {
    self->vptr = data_0213bb90;
    data_021f5b80.cur = 0;
    return self;
}

extern "C" Ra *func_020f82fc(Ra *self) {
    self->vptr = data_0213bb90;
    data_021f5b80.cur = 0;
    return self;
}

extern "C" void func_020f8290(Ra *self, u8 v) {
    self->c8 = v;
    self->c11 = -1;
    self->c12 = -1;
    self->c9 = 0;
    if (self->c8 != 0) {
        self->h14 = 120;
        self->w4 = func_01ffc5a4(0x258000, (s32)self->h14 << 12);
    } else {
        self->h14 = 120;
        func_020eda30(&data_021f5bbc, 0);
    }
}

extern "C" void func_020f81dc(Ra *self) {
    s16 a[3];
    if (!nz((u32)data_021f5b80.h)) func_0210d010(&data_021f5bbc, 248);
    func_0210a008(1, &a[0]);
    func_0210a008(2, &a[1]);
    func_0210a024(&data_021f5bbc, 6, &a[2]);
    self->c10 = (a[1] != self->c16);
    self->c16 = a[1];
    self->h18 = a[2];
    if (self->c8 != 0) return;
    func_020f8164(self);
}

extern "C" void func_020f8164(Ra *self) {
    Hr *const h = &data_021f5bbc;
    u16 buf[8];
    while (func_021172cc(0) != 0)
        ;
    func_021094f8();
    func_02117028(0);
    if (func_02109f80(h, buf) == 0) return;
    self->h14 = buf[3];
    self->w4 = func_01ffc5a4(0x258000, (s32)self->h14 << 12);
}

extern "C" void func_020f8134(Sub *s) {
    s->s1 = -1;
    s->s2 = -1;
    s->s3 = -1;
    s->s4 = -1;
    s->w16 = 0;
    s->w12 = s->w16;
    s->w8 = s->w12;
}

extern "C" Fo *func_020f80d8(Fo *self) {
    func_020f839c((Ra *)self);
    self->vptr = data_0213bb84;
    func_020f8134((Sub *)&self->c14);
    self->c14 = -1;
    self->c28 = 0;
    self->c2a = 0;
    self->c29 = 1;
    self->s2c = -1;
    self->c2e = 1;
    *(Fo **)&data_021f5b80 = self;
    return self;
}

extern "C" Ra *func_020f80ac(Ra *self) {
    self->vptr = data_0213bb84;
    func_020f831c(self);
    func_020f82fc(self);
    return self;
}

extern "C" void func_020f80a4(Fo *self, u8 v) {
    self->c28 = v;
}

extern "C" void func_020f7ebc(Fo *self) {
    s16 v;
    if (self->c28 == 0) return;
    func_020f81dc((Ra *)self);
    func_020f7d84(self);
    func_020f7cc0(self);
    if (self->c14 == -1) {
        Hr *h = &data_021f5bbc;
        s32 id;
        if (!nz((u32)h->p)) return;
        func_0210a024(h, 4, &v);
        self->c14 = v;
        self->w1c = 0;
        self->w20 = 0;
        self->w24 = 0;
        id = h->p->id;
        switch (id) {
        case 109:
        case 163:
            self->c29 = 1;
            break;
        case 110:
            self->c29 = 2;
            break;
        }
        switch (id) {
        case 109:
        case 159:
        case 162:
        case 164:
            self->c2a = 1;
            return;
        case 103:
        case 104:
        case 108:
        case 110:
        case 111:
        case 119:
        case 133:
        case 158:
        case 166:
            self->c2a = 2;
            return;
        case 148:
            self->c2a = 3;
            return;
        default:
            self->c2a = 0;
            return;
        }
    } else {
        func_020f7a5c(self);
    }
}

extern "C" void func_020f7d84(Fo *self) {
    Hr *const h = &data_021f5bbc;
    s32 i;
    u8 buf[28];
    self->c15 = -1;
    for (i = 2; i <= 13; i++) {
        if (func_02109f4c(h, i, buf) == 0) continue;
        if (i == 10) continue;
        if (buf[9] == 0) continue;
        switch (i) {
        case 11:
            self->c15 = 0;
            return;
        case 6:
            self->c15 = 1;
            return;
        case 3:
        case 9:
            self->c15 = 2;
            return;
        case 5:
        case 8:
            self->c15 = 3;
            return;
        case 2:
        case 7:
        case 12:
            self->c15 = 4;
            return;
        case 4:
        case 13:
            self->c15 = 5;
            return;
        default:
            self->c15 = 0;
            return;
        }
    }
}

extern "C" void func_020f7cc0(Fo *self) {
    Hr *const h = &data_021f5bbc;
    s16 v[4];
    if (!nz((u32)h->p)) return;
    func_0210a024(h, 1, &v[0]);
    func_0210a024(h, 0, &v[1]);
    func_0210a024(h, 2, &v[2]);
    func_0210a024(h, 3, &v[3]);
    self->c16 = v[1];
    self->c17 = v[2];
    self->c18 = v[3];
    if (self->s2c > v[0]) self->c2e = (self->c2e == 0);
    self->s2c = v[0];
}

extern "C" void func_020f7a5c(Fo *self) {
    s16 t;
    s32 den;
    s32 d;
    self->w1c = func_01ffc5a4(self->s2c << 12, 0x3000);
    t = self->s2c;
    switch (self->c14) {
    case 3:
        den = 0x4800;
        break;
    case 4:
    default:
        switch (self->c2a) {
        case 0:
        default:
            t = t % 96;
            den = 0x3000;
            break;
        case 1:
            t = t % 48;
            den = 0x1800;
            break;
        case 2:
            t = t % 192;
            den = 0x6000;
            break;
        }
        break;
    }
    d = func_01ffc5a4(t << 12, den) + 0xc000;
    if (d >= 0x20000) d -= 0x20000;
    self->w24 = d;
    t = self->s2c;
    switch (self->c14) {
    case 4:
    default:
        switch (self->c2a) {
        case 0:
        default:
            t = t % 96;
            den = 0x4ccd;
            break;
        case 1:
            t = t % 48;
            den = 0x2666;
            break;
        case 2:
            t = t % 192;
            den = 0x999a;
            break;
        }
        break;
    case 3:
        if (self->c2a == 3) {
            if (self->c2e == 0) t = t + 0x90;
            den = 0xe666;
        } else {
            if (self->c2e == 0) t = t + 0x30;
            t = t % 96;
            den = 0x4ccd;
        }
        break;
    }
    d = func_01ffc5a4(t << 12, den) + 0x4000;
    if (d >= 0x14000) d -= 0x14000;
    self->w20 = d;
}

