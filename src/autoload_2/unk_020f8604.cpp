// mwcc-flags: -nothumb -O4,p
// G011 draft
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

struct Fx3 {
    s32 x;
    s32 y;
    s32 z;
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
struct EBits {
    u32 kind : 4;
    u32 pad : 13;
    u32 isref : 1;
    u32 idx : 8;
    u32 pad2 : 6;
};

struct SEnt {
    u32 w0;
    EBits b;
    u32 w8;
    u32 wc;
    u32 w16;
};

struct Slot {
    SEnt *e;
    u32 w4;
    u32 w8;
    u32 w12;
    u32 w16;
};

typedef u32 (*Cb)(u32, u32);

struct Fp {
    void *(*alloc)(u32);
    u8 p4[0x18];
    u8 *p1c;
    Slot *tab;
    u16 h24;
    u16 h26;
};

// per-resource header: bits 8-11 and 16 = optional blocks, bits 24-29 = field types (each gets a handler function)
struct HdrBits {
    u32 pad0 : 8;
    u32 b8 : 1;
    u32 b9 : 1;
    u32 b10 : 1;
    u32 b11 : 1;
    u32 pad12 : 4;
    u32 b16 : 1;
    u32 pad17 : 7;
    u32 b24 : 1;
    u32 b25 : 1;
    u32 b26 : 1;
    u32 b27 : 1;
    u32 b28 : 1;
    u32 b29 : 1;
    u32 pad30 : 2;
};

struct Item8 {
    void *fn;
    u8 *p4;
};

struct Pool32 {
    u8 *p0;
    u8 *p4;
    u8 *p8;
    u8 *pc;
    u8 *p10;
    u8 *p14;
    Item8 *p18;
    u16 h1c;
    u16 pad1e;
};

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
void func_020eda60(void *p);
void func_0210a27c(void *p);
void func_0210a26c(void *p, s32 v);
void func_0210a0e8(void *p, u32 a, s32 b);
void func_0210a0b8(void *p, s32 v);
void func_02109fd0(void *p, u32 a, s32 b);
void func_02109fb4(u32 a, s32 b);
s32 func_020f4904(u32 a, u32 b);
s32 func_020f48d8(s32 d);
s32 func_020f4718(u32 a, u32 b);
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
void func_020f86c0(Rb *r);
void func_020f87b4(Rb *r);
void func_020f88b4(Rb *r);
void func_020f8604(Rb *r, void *arg);
s32 func_020f83fc(Rb *r);
void func_020f8a80(Rb *r, u32 mode);
void func_020f9690(Entry *e, void *list);
void func_020fa0f4(Entry *e, void *tab, void *v);
Entry *func_020fe35c(void *list);
void func_020fe3a0(void *list, Entry *e);
Entry *func_020fe2f0(void *list, Entry *e);
void func_020f969c(Mgr *m, u32 a);
void func_020f98ac(Mgr *m, Entry *e);
extern u16 data_021f5c38;
void func_020fe2bc(void);
void func_020fe1f4(void);
void func_020fe170(void);
void func_020fe098(void);
void func_020fdf7c(void);
void func_020fdee8(void);
void func_02111ff0(void);
void func_02111f7c(void *dst, u32 a, u32 n);
void func_02111f24(void);
void func_0211220c(void);
void func_021120a8(void *dst, u32 a, u32 n);
void func_02112038(void);
s32 func_020f8e98(Fp *self, Cb cb);
u32 func_020f9620(u32 a, u32 b);
s32 func_020f8f4c(Fp *self, Cb cb);
u32 func_020f9658(u32 a, u32 b);
void *func_02115fb4(void *p, u32 v, u32 n);
}

static inline BOOL nz(u32 v) { return v != 0; }

extern "C" void func_020f8604(Rb *r, void *arg) {
    s32 a, b;
    if (arg == 0) return;
    a = func_020f48d8(func_020f4904((u32)arg, 0));
    b = func_020f4718((u32)arg, 0);
    func_0210a26c(r, a);
    func_0210a0e8(r, 15, b);
    if (data_021f5b80.q == 0) return;
    s32 x = func_01ffc5a4(data_021f5b80.q->s16v << 20, 0x78000) >> 12;
    if (!nz((u32)data_021f5b80.h)) return;
    if (data_021f5b80.h->id == 240) x >>= 1;
    func_0210a0b8(r, x);
}
