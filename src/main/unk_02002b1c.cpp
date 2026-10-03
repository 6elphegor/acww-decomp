#include "types.h"
#include "Unk_020d8c7c.h"

typedef volatile u16 vu16;
typedef volatile u32 vu32;

// ---------------------------------------------------------------------------------------------------------------------
// Externs

extern "C" {
extern u16 data_0213c7a8;
}

extern "C" {
extern u32 data_0213c7ac;
}

extern "C" {
extern u16 data_020d47e4[32];
}

extern "C" {
extern u8 data_0213c7b0[];
}

extern "C" {
extern u8 data_02135934[];
}

extern "C" {
extern u32 data_020d5d44[];
}

extern "C" {
extern u32 data_020d5d60[];
}

extern "C" {
extern u32 data_020d5dfc[];
}

extern "C" {
extern u32 data_020d5de4[];
}

extern "C" {
extern s16 data_02135f44[];
}

extern "C" {
extern u32 **data_021f59e4;
}

extern "C" {
extern u32 data_021d7352;
}

extern "C" {
extern u32 data_020c6140[];
}

extern "C" {
extern void *data_021eda68;
}

extern "C" {
extern u8 data_021ef414[];
}

extern "C" {
void G3X_SetClearColor(u16 a, u32 b, u32 c, u32 d, u32 e);
}

extern "C" {
void DC_FlushRange(void *p, u32 n);
}

extern "C" {
void func_02110de8(void *p);
}

extern "C" {
void MTX_Inverse43(void *a, void *b);
}

extern "C" {
void G3X_Reset(void);
}

extern "C" {
void GX_SetBankForTex(u32 a);
}

extern "C" {
void GX_SetBankForTexPltt(u32 a);
}

extern "C" {
void func_02114b00(void);
}

extern "C" {
void G3X_Init(void);
}

extern "C" {
void func_02110d00(void);
}

extern "C" {
void G3X_InitMtxStack(void);
}

extern "C" {
void G3i_PerspectiveW_(u32 a, u32 b, u32 c, u32 d, u32 e, u32 f, u32 g, u32 h);
}

extern "C" {
void func_02105d98(void);
}

extern "C" {
void GX_LoadOBJ(void *p, u32 a, u32 b);
}

extern "C" {
void GXS_LoadOBJ(void *p, u32 a, u32 b);
}

extern "C" {
void GX_LoadOBJPltt(void *p, u32 a, u32 b);
}

extern "C" {
void GXS_LoadOBJPltt(void *p, u32 a, u32 b);
}

extern "C" {
void func_020e8558(void *p);
}

extern "C" {
void *func_020641d8(void *p);
}

extern "C" {
void FS_InitFile(void *p);
}

extern "C" {
void func_020e79a0(void *list, void *node);
}

extern "C" {
void func_020e7968(void *list, void *node);
}

extern "C" {
void func_020e8388(void *m, s32 a, s32 b, s32 c);
}

extern "C" {
void func_020e8434(void *m, s32 a);
}

extern "C" {
void func_020e8404(void *m, s32 a);
}

extern "C" {
void func_020e7b98(s32 a, s32 b);
}

extern "C" {
s32 func_01ffcb0c(s32 a, s32 b);
}

extern "C" {
void VEC_Add(void *a, void *b, void *c);
}

extern "C" {
void func_02063990(void *p, void *s);
}

extern "C" {
u32 func_02063954(void *p);
}

extern "C" {
void func_020639a0(void *p);
}

extern "C" {
u32 func_02081550(u32 a, u32 b);
}

extern "C" {
void func_020639e8(void *buf, void *fmt, u32 a, u32 b);
}

extern "C" {
void MI_CpuFill8(void *p, u32 v, u32 n);
}

extern "C" {
void *func_020ed4bc(void *list, u32 id, void *p);
}

extern "C" {
void *func_020ed508(void *list, u32 id);
}

extern "C" {
void func_0202e880(void *a, void *b, void *c, u32 d);
}

class Unk_02039eb8 {
public:
    s32 func_02039eb8(void *m, void *v, s32 r, s32 *out);
};

extern "C" {
void func_020030b4_dummy(void);
}

struct Unk_02002804_Buf {
    u16 unk_00[32];
};

// 0x30-byte record copied around by func_02002848 and func_02002898
struct Unk_02002848_Data {
    u32 unk_00[12];
};

extern Unk_02002848_Data data_0213c7e0;
extern Unk_02002848_Data data_02135934_;

// Object with two heap pointers at +0x48 and +0x4c, first method func_020029e8
class Unk_020029e8 {
public:
    Unk_020029e8();
    ~Unk_020029e8();
    void func_020029e8();
    void func_02002a14();
    void func_02002a3c();
    void func_02002a54();
    BOOL func_02002a6c();
    BOOL func_02002a8c();

    /* 0x00 */ u8 unk_00[0x48];
    /* 0x48 */ void *unk_48;
    /* 0x4c */ void *unk_4c;
};

extern Unk_020029e8 data_0213c81c;

struct Unk_02002f14_Node {
    /* 0x00 */ void *unk_00;
    /* 0x04 */ void *unk_04;
    /* 0x08 */ void *unk_08;
};

struct Unk_02002cb0_Vec {
    /* 0x00 */ u8 unk_00[0x10];
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ s32 unk_14;
    /* 0x18 */ s32 unk_18;
};

struct Unk_02002f14_S16Vec {
    s16 unk_00;
    s16 unk_02;
    s16 unk_04;
};

struct Unk_02002f14_S32Vec {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
};

// list head (8 bytes, zeroed by an inline constructor: the unit's __sinit) and two pointers
struct Unk_0213c874 {
    u32 unk_00;
    u32 unk_04;
    Unk_0213c874() {
        unk_00 = 0;
        unk_04 = 0;
    }
};

Unk_0213c874 data_0213c874;
void *data_0213c870;
void *data_0213c86c;

class Unk_020d5d84 : public Unk_020d8c7c {
public:
    Unk_020d5d84();
    virtual BOOL vfunc_04();
    virtual void vfunc_08();
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_14();
    virtual BOOL vfunc_1c();
    virtual BOOL vfunc_20();
    virtual BOOL vfunc_28();
    virtual BOOL vfunc_2c();
    virtual ~Unk_020d5d84() { func_020e79a0(&data_0213c874, &unk_50); }

    void func_02002b84(void *out);
    void func_02002bf4(Unk_02002cb0_Vec *v);
    void func_02002c10();
    void func_02002cb0(Unk_02002cb0_Vec *v);
    void func_02002ce0(s32 a, s32 b, s32 c);
    static void func_02002cf8(void *a, void *b, void *c, void *d, void *e);
    static void func_02002d28(void *a, void *b);
    static void *func_02002d3c(u32 id, Unk_020d5d84 *o);
    static void *func_02002d74(u32 id);

    /* 0x50 */ Unk_02002f14_Node unk_50;
    /* 0x5c */ s32 unk_5c;
    /* 0x60 */ s32 unk_60;
    /* 0x64 */ s32 unk_64;
    /* 0x68 */ s32 unk_68;
    /* 0x6c */ s32 unk_6c;
    /* 0x70 */ s32 unk_70;
    /* 0x74 */ u8 unk_74[0x18];
    /* 0x8c */ s16 unk_8c;
    /* 0x8e */ s16 unk_8e;
    /* 0x90 */ s16 unk_90;
    /* 0x92 */ s16 unk_92;
    /* 0x94 */ u16 unk_94;
    /* 0x96 */ s16 unk_96;
    /* 0x98 */ s32 unk_98;
    /* 0x9c */ s32 unk_9c;
    /* 0xa0 */ s32 unk_a0;
    /* 0xa4 */ s32 unk_a4;
    /* 0xa8 */ s32 unk_a8;
    /* 0xac */ s32 unk_ac;
    /* 0xb0 */ u32 unk_b0;
    /* 0xb4 */ s32 unk_b4;
    /* 0xb8 */ s32 unk_b8;
    /* 0xbc */ s32 unk_bc;
    /* 0xc0 */ u32 unk_c0;
    /* 0xc4 */ s32 unk_c4;
    /* 0xc8 */ s32 unk_c8;
    /* 0xcc */ s32 unk_cc;
    /* 0xd0 */ u16 unk_d0;
};

// Class with a type byte at +0x0a and an id byte at +0x0b (base class unknown, 0xc bytes in total)
class Unk_02002fc8 {
public:
    u32 func_02002fc8(u32 arg);
    void func_0200301c(void *buf, u32 size, u32 arg);
    u32 func_02003070();
    void func_0200309c(u32 id, u32 type, void *s);
    u32 func_020030b4();

    /* 0x00 */ u8 unk_00[0xa];
    /* 0x0a */ u8 unk_0a;
    /* 0x0b */ u8 unk_0b;
};

extern "C" u32 func_02003098(Unk_02002fc8 *o);
extern "C" u32 func_02003084(u32 t);
extern "C" u32 func_02002fec(u32 id);
extern "C" u32 func_02003008(u32 t);
extern "C" void func_0200303c(void *buf, u32 size, u32 arg, u32 idx);

extern "C" void func_02002918(void);
// prototypes (test harness)
extern "C" u32 func_02002ffc(Unk_02002fc8 *o);
extern "C" u32 func_02002ff8(Unk_02002fc8 *o);
extern "C" u32 func_02002fec(u32 id);
extern "C" void func_02002bdc(s32 *a, s32 *b);

extern "C" u32 func_02002ffc(Unk_02002fc8 *o) { return func_02003008(o->unk_0a); }

extern "C" u32 func_02002ff8(Unk_02002fc8 *o) { return o->unk_0b; }

extern "C" u32 func_02002fec(u32 id) {
    if (id < 0x96) return TRUE;
    return FALSE;
}

u32 Unk_02002fc8::func_02002fc8(u32 arg) {
    u32 r = 0;
    if (func_020030b4() == 1) r = func_02081550(arg, unk_0b);
    return r;
}

Unk_020d5d84::Unk_020d5d84() {
    unk_50.unk_00 = 0;
    unk_50.unk_04 = 0;
    unk_50.unk_08 = this;
    func_020e7968(&data_0213c874, &unk_50);
    Unk_02002f14_S32Vec *v = (Unk_02002f14_S32Vec *)data_0213c870;
    if (v) {
        unk_5c = v->unk_00;
        unk_60 = v->unk_04;
        unk_64 = v->unk_08;
    }
    Unk_02002f14_S16Vec *w = (Unk_02002f14_S16Vec *)data_0213c86c;
    if (w) {
        unk_8c = w->unk_00;
        unk_8e = w->unk_02;
        unk_90 = w->unk_04;
        Unk_02002f14_S16Vec *x = (Unk_02002f14_S16Vec *)data_0213c86c;
        unk_92 = x->unk_00;
        unk_94 = x->unk_02;
        unk_96 = x->unk_04;
    }
    u32 *e = data_021f59e4[*(u16 *)&unk_04[8]];
    unk_b0 = e[2];
    func_02002ce0(e[3], e[4], e[5]);
}

BOOL Unk_020d5d84::vfunc_04() {
    if (Unk_020d8c7c_Base::vfunc_04()) return TRUE;
    return FALSE;
}

void Unk_020d5d84::vfunc_08() {
    Unk_020d8c7c::vfunc_08();
    unk_b0 |= 4;
}

BOOL Unk_020d5d84::vfunc_10() {
    if (Unk_020d8c7c_Base::vfunc_10()) return TRUE;
    return FALSE;
}

BOOL Unk_020d5d84::vfunc_14() { return Unk_020d8c7c_Base::vfunc_14(); }

BOOL Unk_020d5d84::vfunc_1c() {
    s32 r4;
    if (!Unk_020d8c7c_Base::vfunc_1c()) return FALSE;
    unk_68 = unk_5c;
    unk_6c = unk_60;
    unk_70 = unk_64;
    if (unk_b8) {
        s32 x = unk_cc + func_01ffcb0c(unk_b4, data_02135f44[(unk_d0 >> 4) * 2]);
        s32 z = unk_c8 + func_01ffcb0c(unk_b4, data_02135f44[(unk_d0 >> 4) * 2 + 1]);
        s32 v[3];
        v[0] = unk_c4;
        v[1] = z;
        v[2] = x;
        r4 = ((Unk_02039eb8 *)data_021ef414)->func_02039eb8(&data_0213c7e0, v, unk_b8, (s32 *)unk_74);
    }
    unk_b0 &= ~4;
    if (unk_b0 & 3) {
        if (r4 > unk_bc) {
            unk_b0 |= 4;
            if (unk_b0 & 1) return FALSE;
        }
    }
    return TRUE;
}

BOOL Unk_020d5d84::vfunc_20() { return Unk_020d8c7c_Base::vfunc_20(); }

BOOL Unk_020d5d84::vfunc_28() {
    if (!Unk_020d8c7c_Base::vfunc_28()) return FALSE;
    if ((unk_b0 & 4) && (unk_b0 & 2)) return FALSE;
    return TRUE;
}

BOOL Unk_020d5d84::vfunc_2c() { return Unk_020d8c7c_Base::vfunc_2c(); }

void *Unk_020d5d84::func_02002d74(u32 id) {
    void *r = func_020ed508(&data_0213c874, id);
    if (r) return ((Unk_02002f14_Node *)r)->unk_08;
    return 0;
}

void *Unk_020d5d84::func_02002d3c(u32 id, Unk_020d5d84 *o) {
    void *r;
    if (o != 0) {
        r = func_020ed4bc(&data_0213c874, id, &o->unk_50);
    } else {
        r = func_020ed4bc(&data_0213c874, id, 0);
    }
    if (r) return ((Unk_02002f14_Node *)r)->unk_08;
    return 0;
}

void Unk_020d5d84::func_02002d28(void *a, void *b) {
    data_0213c870 = a;
    data_0213c86c = b;
}

void Unk_020d5d84::func_02002cf8(void *a, void *b, void *c, void *d, void *e) {
    void *t = e;
    if (t == 0) t = data_021eda68;
    func_02002d28(c, d);
    func_0202e880(a, t, b, 3);
}

void Unk_020d5d84::func_02002ce0(s32 a, s32 b, s32 c) {
    unk_b4 = a;
    unk_b8 = b;
    unk_bc = c;
}

void Unk_020d5d84::func_02002cb0(Unk_02002cb0_Vec *v) {
    VEC_Add(&unk_5c, &unk_a4, &unk_5c);
    if (v) {
        unk_5c = unk_5c + v->unk_10;
        unk_64 = unk_64 + v->unk_18;
    }
}

void Unk_020d5d84::func_02002c10() {
    if (unk_98 == 0) {
        s32 v = unk_a0;
        s32 w = unk_a8 + unk_9c;
        if (w >= v) v = w;
        unk_a4 = 0;
        unk_a8 = v;
        unk_ac = 0;
    } else {
        s32 r = func_01ffcb0c(unk_98, data_02135f44[(unk_94 >> 4) * 2 + 1]);
        s32 v = unk_a0;
        s32 w = unk_a8 + unk_9c;
        if (w >= v) v = w;
        unk_a4 = func_01ffcb0c(unk_98, data_02135f44[(unk_94 >> 4) * 2]);
        unk_a8 = v;
        unk_ac = r;
    }
}

void Unk_020d5d84::func_02002bf4(Unk_02002cb0_Vec *v) {
    func_02002c10();
    func_02002cb0(v);
}

extern "C" void func_02002bdc(s32 *a, s32 *b) {
    func_020e7b98(b[0] - a[0], b[2] - a[2]);
}

void Unk_020d5d84::func_02002b84(void *out) {
    u32 m[12];
    func_020e8388(m, unk_c4, unk_c8, unk_cc);
    func_020e8434(m, (s16)unk_d0);
    func_020e8404(m, unk_8e);
    if (unk_8c != 0) func_020e8434(m, unk_8c);
    *(Unk_02002848_Data *)out = *(Unk_02002848_Data *)m;
}

