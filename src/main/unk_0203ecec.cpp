#include "types.h"
#include "Unk_020d8c7c.h"

struct Unk_0203eb78_Entry {
    /* 0x00 */ u8 unk_00[0x0c];
    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ u8 unk_14;
    /* 0x15 */ u8 unk_15[7];
};

struct Unk_0203ebdc_List {
    /* 0x00 */ Unk_0203eb78_Entry *head;
};

struct Unk_0203ec0c {
    /* 0x00 */ s32 unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ u8 unk_08;
};

class Unk_0203ed90 {
public:
    Unk_0203ed90();
    ~Unk_0203ed90();

    /* 0x00 */ s32 unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08;
    /* 0x0c */ s16 unk_0c;
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ s32 unk_14;
};

struct Unk_0203ecec_Global {
    /* 0x00 */ u8 unk_00[4];
    /* 0x04 */ u8 unk_04;
};

struct Unk_0203f408_Entry {
    /* 0x00 */ u16 unk_00;
    /* 0x02 */ u16 unk_02;
    /* 0x04 */ u32 unk_04;
    /* 0x08 */ u32 unk_08;
};

union Unk_0203f218_Ver {
    u32 word;
    u8 b[4];
};

struct Unk_0203f218_Date {
    u8 b[8];
};

struct Unk_0203f218_Slot {
    /* 0x00 */ u16 unk_00;
    /* 0x02 */ u16 unk_02;
    /* 0x04 */ u8 unk_04[0x18];
};

extern "C" {
extern Unk_0203f218_Slot data_020d9744[99];
}

extern "C" {
extern s32 (*data_020d96d4[])(u8 *, s32);
}

extern "C" {
extern Unk_0203eb78_Entry data_021c39f0[15];
}

extern "C" {
extern u8 data_021e87d8[];
}

extern "C" {
extern s32 data_021c3070;
}

extern "C" {
extern Unk_0203ecec_Global *data_021ef2f0;
}

extern "C" {
extern s32 data_020c8cb8;
}

s32 data_021c3b94 = data_020c8cb8;
Unk_0203ed90 data_021c3ba4;

extern "C" {
extern s16 data_02135f44[];
}

extern "C" {
extern u32 data_020cbb18;
}

extern "C" {
extern s32 data_021c3bbc;
}

extern "C" {
extern u8 data_021c4890[];
}

extern "C" {
extern Unk_0203f408_Entry data_021c3bdc[7];
}

extern "C" {
extern u8 data_021c3bd8[];
}

extern "C" {
s32 MI_CpuFill8(void *dst, s32 v, s32 n);
}

extern "C" {
void MI_CpuCopy8(void *src, void *dst, s32 n);
}

extern "C" {
s32 func_020e79a0(void *list, void *node);
}

extern "C" {
void func_02065cd4(void *p);
}

extern "C" {
void func_02065cc8(void *p);
}

extern "C" {
void func_02065e70(void *p, void *q);
}

extern "C" {
void func_02065ba4(void *p, s32 q);
}

extern "C" {
void func_02065ac0(void *p);
}

extern "C" {
s32 func_0209750c(void);
}

extern "C" {
s32 func_02097980(s32 p);
}

extern "C" {
s32 func_02098878(s32 p);
}

extern "C" {
s32 func_02096acc(void *p, s32 a, s32 b);
}

extern "C" {
s32 func_02097954(s32 p, s32 v);
}

extern "C" {
s32 func_020771e4(void *p);
}

extern "C" {
s32 func_020771d8(void *p, s32 v);
}

extern "C" {
s32 func_02076f88(void *p);
}

extern "C" {
s32 _ZN12Unk_020d93b813func_0203bc7cEv(void);
}

extern "C" {
s32 FX_Div(s32 a, s32 b);
}

extern "C" {
s32 func_01ffcb0c(s32 a, s32 b);
}

extern "C" {
s32 FX_Sqrt(s32 a);
}

extern "C" {
s32 func_020e7b98(s32 a, s32 b);
}

extern "C" {
u32 func_0203efec(u32 x);
}

extern "C" {
u8 *_ZN12Unk_02097ff413func_02098314Ev(s32 p);
}

extern "C" {
s32 func_0203f048(u32 id);
}

extern "C" {
s32 func_0203f100(u8 *p, s32 i);
}

extern "C" {
s32 func_0203f0fc(u8 *p, s32 i, u32 v);
}

extern "C" {
s32 func_020a032c(void);
}

extern "C" {
s32 func_02098044(s32 p, s32 v);
}

extern "C" {
s32 func_02072e44(u32 v);
}

extern "C" {
s32 func_0203f4c0(s32 v);
}

extern "C" {
s32 func_0204ff6c(void *p);
}

extern "C" {
s32 func_0203f484(void *p);
}

extern "C" {
s32 func_02040264(s32 v);
}

extern "C" {
s32 func_020400b0(void);
}

extern "C" {
s32 func_0203f14c(void);
}

extern "C" {
void func_0203f52c(void *out, void *in, s32 v);
}

extern "C" {
s32 func_0209d374(void *a, void *b);
}

extern "C" {
void func_0209d498(void *a);
}

extern "C" {
s32 func_0209d3a4(void *a, void *b);
}

extern "C" {
u32 func_0209ceac(u32 v, u32 a, u32 b);
}

extern "C" {
void func_0203f7cc(void *a, s32 n);
}

extern "C" {
s32 func_0203f600(Unk_0203f408_Entry *out, Unk_0203f218_Slot *e, u32 v, Unk_0203f218_Ver w);
}

extern "C" {
s32 func_0203f69c(Unk_0203f218_Slot *e, Unk_0203f218_Ver w, Unk_0203f408_Entry *tmp, Unk_0203f408_Entry *out, s32 n, s32 x, s32 y);
}

extern "C" {
void func_0203f678(Unk_0203f408_Entry *tmp, Unk_0203f218_Ver w);
}

extern "C" {
s32 func_0203f31c(s32 a, u8 *b, s32 c);
}

extern "C" {
s32 func_0203f3a0(s32 a, u8 *b, Unk_0203f408_Entry *c);
}

extern "C" {
Unk_0203f408_Entry *func_0203f408(u32 id, Unk_0203f408_Entry *tbl);
}

static inline BOOL IsOne(u8 v) { return v == 1 ? TRUE : FALSE; }
static inline BOOL IsZero(u8 v) { return v == 0 ? TRUE : FALSE; }

// prototypes (test harness)
extern "C" s32 func_0203f100(u8 *p, s32 i);
extern "C" s32 func_0203f0fc(u8 *p, s32 i, u32 v);
extern "C" void func_0203f0ec(u8 *p);
extern "C" s32 func_0203f0c0(void);
extern "C" s32 func_0203f0b4(void);
extern "C" void func_0203f094(s32 i, s32 v);
extern "C" s32 func_0203f07c(s32 i);
extern "C" s32 func_0203f048(u32 id);
extern "C" u32 func_0203efec(u32 x);
extern "C" s32 func_0203ef38(Unk_0203ed90 *out, Unk_0203ed90 *in);
extern "C" s32 func_0203eeac(Unk_0203ed90 *out, Unk_0203ed90 *in);
extern "C" s32 func_0203ee38(Unk_0203ed90 *out, Unk_0203ed90 *in);
extern "C" s16 func_0203edd0(Unk_0203ed90 *o);
extern "C" s32 func_0203edc8(void);
extern "C" s32 func_0203edc0(void);
extern "C" void func_0203ecec(Unk_0203ed90 *o, Unk_0203ed90 *in);

extern "C" s32 func_0203f100(u8 *p, s32 i) { return p[i]; }

extern "C" s32 func_0203f0fc(u8 *p, s32 i, u32 v) { p[i] = v; }

extern "C" void func_0203f0ec(u8 *p) {
    for (s32 i = 0; i < 4; i++) {
        p[i] = 0xff;
    }
}

extern "C" s32 func_0203f0c0(void) {
    u8 *p; s32 i, n;
    p = _ZN12Unk_02097ff413func_02098314Ev(func_0209750c());
    n = 0;
    for (i = 0; i < 4; i++) {
        if (func_0203f100(p, i) != 0xff) {
            n++;
        }
    }
    return n;
}

extern "C" s32 func_0203f0b4(void) { return func_0203f048(0xff); }

extern "C" void func_0203f094(s32 i, s32 v) { func_0203f0fc(_ZN12Unk_02097ff413func_02098314Ev(func_0209750c()), i, v); }

extern "C" s32 func_0203f07c(s32 i) { return func_0203f100(_ZN12Unk_02097ff413func_02098314Ev(func_0209750c()), i); }

extern "C" s32 func_0203f048(u32 id) {
    u8 *p = _ZN12Unk_02097ff413func_02098314Ev(func_0209750c());
    for (s32 i = 0; i < 4; i++) {
        if (id == (u32)func_0203f100(p, i)) {
            return i;
        }
    }
    return -1;
}

#pragma thumb off
extern "C" u32 func_0203efec(u32 x) {
    s32 v = FX_Div((x & 0xffff) << 12, 0x10000000);
    return (s32)(((s64)v * 0xc4ec6 + 0x800) >> 12);
}
#pragma thumb on

extern "C" s32 func_0203ef38(Unk_0203ed90 *out, Unk_0203ed90 *in) {
    if (IsOne(data_021ef2f0->unk_04)) {
        s32 base = in->unk_04 + 0x1f576;
        if (in->unk_08 <= (*(volatile s32 *)&data_021c3ba4.unk_08) - data_021c3ba4.unk_10) {
            s32 t = in->unk_08 - ((*(volatile s32 *)&data_021c3ba4.unk_08) - data_021c3ba4.unk_10);
            if (t < 0) {
                t = -t;
            }
            base -= func_01ffcb0c(data_021c3ba4.unk_14, t);
        }
        s32 ang = (FX_Div(in->unk_08, data_021c3b94) * 0x2999) << 4 >> 16;
        out->unk_00 = in->unk_00;
        s32 idx = (u16)ang >> 4;
        out->unk_04 = func_01ffcb0c(base, data_02135f44[idx * 2 + 1]);
        out->unk_08 = func_01ffcb0c(base, data_02135f44[idx * 2]);
        return ang;
    }
    out->unk_00 = in->unk_00;
    out->unk_04 = in->unk_04;
    out->unk_08 = in->unk_08;
    return 0;
}

extern "C" s32 func_0203eeac(Unk_0203ed90 *out, Unk_0203ed90 *in) {
    if (IsOne(data_021ef2f0->unk_04)) {
        s32 base = in->unk_04 + 0x1f576;
        s32 ang = (FX_Div(in->unk_08, data_021c3b94) * 0x2999) << 4 >> 16;
        out->unk_00 = in->unk_00;
        s32 idx = (u16)ang >> 4;
        out->unk_04 = func_01ffcb0c(base, data_02135f44[idx * 2 + 1]);
        out->unk_08 = func_01ffcb0c(base, data_02135f44[idx * 2]);
        return ang;
    }
    out->unk_00 = in->unk_00;
    out->unk_04 = in->unk_04;
    out->unk_08 = in->unk_08;
    return 0;
}

extern "C" s32 func_0203ee38(Unk_0203ed90 *out, Unk_0203ed90 *in) {
    if (IsOne(data_021ef2f0->unk_04)) {
        s32 ang = func_020e7b98(in->unk_08, in->unk_04);
        out->unk_00 = in->unk_00;
        s32 a = func_01ffcb0c(in->unk_08, in->unk_08);
        s32 b = func_01ffcb0c(in->unk_04, in->unk_04);
        out->unk_04 = FX_Sqrt(b + a) - 0x1f576;
        out->unk_08 = func_0203efec(ang);
        return ang;
    }
    out->unk_00 = in->unk_00;
    out->unk_04 = in->unk_04;
    out->unk_08 = in->unk_08;
    return 0;
}

extern "C" s16 func_0203edd0(Unk_0203ed90 *o) {
    if (IsOne(data_021ef2f0->unk_04)) {
        s32 a = func_01ffcb0c(o->unk_08, o->unk_08);
        s32 b = func_01ffcb0c(o->unk_04, o->unk_04);
        s32 c = func_01ffcb0c(0x1f576, 0x1f576);
        s32 r = FX_Sqrt(b + a - c);
        s32 x = func_020e7b98(o->unk_08, o->unk_04);
        s32 y = func_020e7b98(r, 0x1f576);
        return x - y;
    }
    return 0;
}

extern "C" s32 func_0203edc8(void) { return 0x2999; }

extern "C" s32 func_0203edc0(void) { return 0x1f576; }

Unk_0203ed90::Unk_0203ed90() {
    unk_00 = 0;
    unk_04 = 0;
    unk_08 = 0;
    unk_0c = 0;
    unk_14 = FX_Div(0x1000, 0xa000);
    unk_10 = 0xe000;
}

Unk_0203ed90::~Unk_0203ed90() {}

extern "C" void func_0203ecec(Unk_0203ed90 *o, Unk_0203ed90 *in) {
    o->unk_00 = in->unk_00;
    o->unk_04 = in->unk_04;
    o->unk_08 = in->unk_08;
    if (data_021c3070) {
        s32 v = _ZN12Unk_020d93b813func_0203bc7cEv();
        if (v > 0x27f7) {
            v = 0x27f7;
        } else if (v < 0x21fd) {
            v = 0x21fd;
        }
        o->unk_10 = func_01ffcb0c(-0x2c00, FX_Div((v - 0x27f7) << 12, (s32)0xffa06000)) + 0xe000;
    }
    if (IsOne(data_021ef2f0->unk_04)) {
        o->unk_0c = (FX_Div(o->unk_08, data_021c3b94) * 0x2999) >> 12;
    } else {
        o->unk_0c = 0;
    }
}

class Unk_020d96fc : public Unk_020d8c7c {
public:
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_24();
    virtual ~Unk_020d96fc();
};

extern "C" {
union Unk_0203f3a0_L {
    u32 w[3];
    u8 b[12];
};
}

extern "C" {
union Unk_0203f42c_L {
    u32 w[4];
    u8 b[16];
};
}

