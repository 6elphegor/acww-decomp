// mwcc-flags: -str reuse
#include "types.h"

// Base of the menu cursor sub-object at +0x18
class ScrollKnob {
public:
    virtual ~ScrollKnob();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    void moveTo(s32 x, s32 y);
    BOOL areAnimsDone();
    u8 unk_04[0x44];
};

class Unk_ov002_022046b0 : public ScrollKnob {
public:
    Unk_ov002_022046b0();
    ~Unk_ov002_022046b0();
    s32 func_ov002_02202e60();
    s32 func_ov002_02202e84();
    void func_ov002_02202ed0();
    void func_ov002_02202ef4();
    void func_ov002_02202f00();
    void func_ov002_02202f0c();
    BOOL func_ov002_02202f18(s32 x, s32 y);
};

// 0x40 byte sprite/text object
class Unk_020e0488 {
public:
    Unk_020e0488();
    virtual ~Unk_020e0488();
    void func_0206fc44();
    void func_0206fb9c(u32 a, u32 b, u32 c, u8 d, u8 e, s32 f);
    void func_0206fa74(s32 a, s32 b);
    void func_0206fab4(s32 a, s32 b);
    u8 unk_04[0x3c];
};

// 0x24 byte transfer object
class Unk_020e45f8 {
public:
    Unk_020e45f8();
    virtual BOOL vfunc_00();
    virtual void vfunc_04();
    BOOL func_020b86c0(u32 a, u8 b, u32 c, u32 d);
    void func_020b8670(u32 a, u8 b, u32 c);
    void func_020b87d0();
    u8 unk_04[0x20];
};

struct Unk_ov134_Date8 {
    u8 b[8];
    Unk_ov134_Date8() {
        *(u32 *)&b[0] = 0;
        *(u32 *)&b[4] = 0;
    }
};

class Unk_ov134_02291f60 {
public:
    Unk_ov134_02291f60();
    ~Unk_ov134_02291f60();
    void func_ov134_02291f60(u32 m);
    void func_ov134_02291f70(u32 m);
    BOOL func_ov134_02291f80(u32 m);
    void func_ov134_02291f94(s32 t);
    void func_ov134_02292074();
    s32 func_ov134_022920d0(s32 y);
    BOOL func_ov134_022920f4();
    BOOL func_ov134_02292134();
    BOOL func_ov134_02292170();
    s32 func_ov134_0229219c(u32 pad);
    void func_ov134_02292340(s32 y);
    s32 func_ov134_0229236c();
    s32 func_ov134_022923a0();
    void func_ov134_022923c0();
    void func_ov134_022923d4();
    void func_ov134_022923fc();
    BOOL func_ov134_02292420();
    void func_ov134_02292444();
    void func_ov134_02292450();
    void func_ov134_022924b0(s32 x);
    void func_ov134_022924d8(s32 x);
    void func_ov134_022924fc();
    BOOL func_ov134_02292530();
    BOOL func_ov134_02292558(s32 x, s32 y);
    BOOL func_ov134_0229258c(s32 v);
    BOOL func_ov134_02292620(s32 v, u8 n);
    BOOL func_ov134_02292678(s32 v, u8 n);
    BOOL func_ov134_022926d0();

    /* 0x00 */ s32 unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ u8 unk_08[0x10];
    /* 0x18 */ Unk_ov002_022046b0 unk_18;
    /* 0x60 */ s32 unk_60;
    /* 0x64 */ s32 unk_64;
    /* 0x68 */ s32 unk_68;
    /* 0x6c */ s32 unk_6c;
    /* 0x70 */ u32 unk_70;
    /* 0x74 */ void *unk_74;
    /* 0x78 */ u32 unk_78;
    /* 0x7c */ u8 *unk_7c;
    /* 0x80 */ s32 unk_80;
    /* 0x84 */ s32 unk_84;
    /* 0x88 */ s32 unk_88;
    /* 0x8c */ s32 unk_8c;
    /* 0x90 */ u16 unk_90;
    /* 0x92 */ u16 unk_92;
    /* 0x94 */ u16 unk_94;
    /* 0x96 */ u16 unk_96;
    /* 0x98 */ volatile u8 unk_98[6];
    /* 0x9e */ u8 unk_9e;
    /* 0x9f */ u8 unk_9f;
    /* 0xa0 */ u8 unk_a0;
    /* 0xa1 */ u8 unk_a1;
    /* 0xa2 */ u8 unk_a2;
    /* 0xa3 */ u8 unk_a3;
    /* 0xa4 */ u8 unk_a4;
    /* 0xa5 */ u8 unk_a5;
    /* 0xa6 */ u8 unk_a6;
    /* 0xa7 */ u8 unk_a7;
    /* 0xa8 */ u8 unk_a8;
    /* 0xa9 */ u8 unk_a9;
    /* 0xaa */ u8 unk_aa;
    /* 0xab */ u8 unk_ab;
    /* 0xac */ u8 unk_ac;
    /* 0xad */ u8 unk_ad;
    /* 0xae */ u8 unk_ae;
    /* 0xaf */ volatile u8 unk_af;
    /* 0xb0 */ u8 unk_b0;
    /* 0xb1 */ u8 unk_b1;
    /* 0xb2 */ u8 unk_b2;
    /* 0xb3 */ u8 unk_b3;
    /* 0xb4 */ u8 unk_b4;
    /* 0xb5 */ u8 unk_b5;
    /* 0xb6 */ u8 unk_b6;
    /* 0xb7 */ s8 unk_b7;
    /* 0xb8 */ Unk_ov134_Date8 unk_b8;
    /* 0xc0 */ Unk_ov134_Date8 unk_c0;
    /* 0xc8 */ Unk_ov134_Date8 unk_c8;
    /* 0xd0 */ Unk_ov134_Date8 unk_d0;
    /* 0xd8 */ Unk_020e0488 unk_d8[0x11];
    /* 0x518 */ Unk_020e45f8 unk_518;
    /* 0x53c */ Unk_020e45f8 unk_53c;
    /* 0x560 */ Unk_020e45f8 unk_560;
    /* 0x584 */ u8 unk_584[0x800];
    /* 0xd84 */ u8 unk_d84[0x800];
    /* 0x1584 */ u8 unk_1584[0x800];
    /* 0x1d84 */ u8 unk_1d84[0x800];
    /* 0x2584 */ u8 unk_2584[0x20];
    /* 0x25a4 */ u8 unk_25a4[0x20];
};

typedef Unk_ov134_02291f60 S;

extern "C" {
void func_ov134_0229288c(Unk_ov134_02291f60 *self);
void func_ov134_02292934(Unk_ov134_02291f60 *self);
s32 func_ov134_02292990(Unk_ov134_02291f60 *self);
void func_ov134_02292c18(Unk_ov134_02291f60 *self);
void func_ov134_02292c3c(Unk_ov134_02291f60 *self, s32 a);
s32 func_ov134_02292c54(Unk_ov134_02291f60 *self, s32 x, s32 y);
s32 func_ov134_02292cb0(Unk_ov134_02291f60 *self);
void func_ov134_02292df4(Unk_ov134_02291f60 *self);
void func_ov134_02292e40(Unk_ov134_02291f60 *self);
s32 func_ov134_02292ea8(Unk_ov134_02291f60 *self, s32 x, s32 y);
s32 func_ov134_02292f40(Unk_ov134_02291f60 *self);
void func_ov134_02293024(Unk_ov134_02291f60 *self, s32 idx);
void func_ov134_0229323c(Unk_ov134_02291f60 *self);
void func_ov134_022932a0(Unk_ov134_02291f60 *self, u8 v);
u8 func_ov134_022932d8(Unk_ov134_02291f60 *self);
void func_ov134_022932e0(Unk_ov134_02291f60 *self);
void func_ov134_02293320(Unk_ov134_02291f60 *self);
void func_ov134_02293350(Unk_ov134_02291f60 *self, s32 a, s32 b);
void func_ov134_022933a4(Unk_ov134_02291f60 *self, s32 idx, s32 x);
s32 func_ov134_02293474(Unk_ov134_02291f60 *self, s32 i);
s32 func_ov134_02293484(Unk_ov134_02291f60 *self, s32 i);
s32 func_ov134_022934a4(Unk_ov134_02291f60 *self, s32 i);
s32 func_ov134_022934b0(Unk_ov134_02291f60 *self, s32 i);
s32 func_ov134_022934e0(Unk_ov134_02291f60 *self, s32 i);
s32 func_ov134_02293510(Unk_ov134_02291f60 *self, s32 x, s32 y);
s32 func_ov134_02293564(Unk_ov134_02291f60 *self, s32 x, s32 y);
s32 func_ov134_022935b8(Unk_ov134_02291f60 *self, s32 x, s32 y);
s32 func_ov134_0229360c(Unk_ov134_02291f60 *self, s32 x, s32 y);
BOOL func_ov134_02293660(Unk_ov134_02291f60 *self);
BOOL func_ov134_022936ac(void *self, s32 *p, s32 target, s32 maxstep, s32 minstep);
void func_ov134_022936f4(Unk_ov134_02291f60 *self, s32 delta);
BOOL func_ov134_022938a0(void *self, s32 x, s32 y, s32 r);
s32 func_ov134_022938c4(void *self, s32 a, s32 b);
s32 func_ov134_022938fc(Unk_ov134_02291f60 *self, s32 x, s32 y, s32 t);
s32 func_ov134_02293928(void *self, s32 x, s32 y);
void func_ov134_0229393c(Unk_ov134_02291f60 *self);
void func_ov134_02293988(Unk_ov134_02291f60 *self);
void func_ov134_0229399c(Unk_ov134_02291f60 *self, u8 a, u8 b);
void func_ov134_022939e8(Unk_ov134_02291f60 *self, s32 x, s32 y);
void func_ov134_02293a14(Unk_ov134_02291f60 *self, s32 x, s32 y);
BOOL func_ov134_02293a3c(Unk_ov134_02291f60 *self);
BOOL func_ov134_02293a5c(Unk_ov134_02291f60 *self);
void func_ov134_02293b30(Unk_ov134_02291f60 *self, s32 x, s32 y);
s32 func_ov134_02293b90(S *s, u32 a, u32 b);
void func_ov134_02293c48(S *s, u8 *a, u8 *b);
void func_ov134_0229400c(S *s, u32 a, u32 b, u32 c, u32 d, u32 e, u8 f, u8 g);
void func_ov134_0229405c(S *s, u32 a, u32 b, u32 c, u32 d, u8 e, u8 f);
void func_ov134_022940a8(S *s, u32 a, u32 b, u32 c, u32 d, u32 e, u8 f, u8 g);
void func_ov134_02294108(S *s, u32 a, u32 b, u32 c, u32 d, u8 e, u8 f);
void func_ov134_02294158(S *s, u32 a, u32 b, u32 c, u32 d, u8 e, u8 f);
void func_ov134_022941b0(S *s, u32 a, u32 b, u32 c, u32 d, u8 e, u8 f);
void func_ov134_022941ec(S *s, u32 a, u32 b, u32 c, const void *d, u32 e, u8 f, u8 g, s32 h, s32 i);
void func_ov134_02294230(S *s, u32 a, u32 b, u32 c, const void *d, u32 e, u8 f, u8 g);
void func_ov134_02294274(S *s, u32 a, u32 b, u32 c, u8 d, u32 e);
void func_ov134_022942bc(S *s, u32 a, u32 b, u32 c, u8 d, s32 e, u8 f, u8 g);
void func_ov134_02294334(S *s);
void func_ov134_0229435c(S *s);
void func_ov134_02294458(S *s);
void func_ov134_02294488(S *s);
void *func_ov134_02294300(S *s);
void func_ov134_022944f0(S *s);
u32 func_ov134_0229452c(S *s, u32 a);
void func_ov134_02294534(S *s);
u32 func_ov134_02294570(S *s, u32 a);
void func_ov134_0229457c(S *s);
void func_ov134_022945b0(S *s, u32 idx, u32 v);
u32 func_ov134_022945f0(S *s, u32 idx, u8 *p);
u32 func_ov134_0229462c(S *s, u32 idx);
void func_ov134_02294638(S *s, u32 idx);
void func_ov134_02294684(S *s);
void func_ov134_022946b0(S *s);
void func_ov134_022946fc(S *s);
void func_ov134_022947b8(S *s, u8 a);
void func_ov134_022947e8(S *s);
BOOL func_ov134_022948b8(S *s);
void func_ov134_022948d8(S *s, void *src);
void func_ov134_022948e4(S *s);
void func_ov134_022949a8(S *s);
void func_ov134_022949ec(S *s);
void func_ov134_02294a28(S *s);
void func_ov134_02294a34(S *s, u32 a, u32 b, u32 c, u8 d);

extern u16 gPad;
extern s32 gCurrentHeap;
void func_020021b8(u32 a, u32 b, u32 c, u32 d, u32 e);
void func_020021fc(u32 a, s32 b, s32 c);
void MIi_CpuCopy16(void *dst, void *src, u32 n);
void MI_CpuCopy8(void *dst, void *src, u32 n);
s32 _s32_div_f(s32 a, s32 b);
void func_0206ee80(void *map, s32 a, s32 b, s32 c, s32 d, s32 e);
void Snd_PlaySe(s32 a);
void func_0200152c(u32 a);
void func_0200151c(u32 a);
void func_0200212c(u32 a);
void func_020020b8(u32 a);
void func_02004008(s32 a);
void Snd_StopSe(s32 a, s32 b);
void func_02001724(u32 a, u32 b);
u32 func_0200273c(u32 a);
void func_020016b0(u32 a);
s32 func_0209ce48(u32 a, u32 b);
s32 func_0209ceac(u32 a, u32 b, u32 c);
void func_020e761c(void *p, s32 a, s32 b);
void func_0209d164(void *p, s32 a);
void func_0209d2c0(void *p, s32 a);
void func_0209d258(void *p, s32 a);
void func_0209d0e4(void *p, s32 a);
void func_0209d124(void *p, s32 a);
void func_0209d28c(void *p, s32 a);
s32 func_0209d3d0(void *a, void *b, s32 c);
s32 func_0209d374(void *a, void *b);
void func_0209d498(void *p);
s32 func_020e7b98(s32 a, s32 b);
BOOL func_ov002_0220125c(u32 v);
BOOL func_ov002_0220126c(u32 v);
BOOL func_ov002_0220127c(u32 v);
BOOL func_ov002_0220128c(u32 v);
void func_ov002_02202e48(void *p);
void func_ov002_02202e54(void *p);
void func_02088730(u32 a, const void *b, void *c, void *d, s32 e, s32 f, s32 g);
void func_02088378(u32 a, const void *b, void *c, void *d, s32 e, s32 f, s32 g, u32 h, s32 i);
void Oam_DrawCell(u32 a, const void *b, void *c, u32 d, s32 e, s32 f, s32 g, s32 h, s32 i, s32 j, s32 k, s32 l);
void func_0206f9c8(void *o, s32 a, s32 b, s32 c, s32 d, u8 e);
void func_0206f9e4(void *a, const void *c, u32 v);
void func_0206f9fc(void *a, u32 v);
void func_02002438(void *a, s32 b, s32 c, s32 d, s32 e);
void func_0200261c(const void *name, s32 h, s32 a, s32 b, s32 c, s32 d);
void func_02002654(const void *name, s32 h, s32 a);
void func_02002688(const void *name, s32 h, s32 a, s32 b, s32 c);
void func_020026c4(const void *name, s32 h, s32 a, s32 b, s32 c, s32 d);
void File_LoadToBuffer(const void *src, void *dst, s32 n);
void *File_LoadAlloc(const void *a, s32 h, s32 b, u32 *out);
void Heap_Free(s32 h, void *p);
extern "C" const u8 data_ov134_02294c58[6];
extern "C" const u8 data_ov134_02294c60[6];
extern "C" const u8 data_ov134_02294c68[7];
extern "C" const u8 data_ov134_02294c70[12];
extern "C" const u32 data_ov134_02294c7c[6];
extern "C" const u32 data_ov134_02294c94[6];
extern "C" const u32 data_ov134_02294cac[6];
extern "C" const u32 data_ov134_02294cc4[6];
extern "C" const u32 data_ov134_02294cdc[6];
extern "C" const u32 data_ov134_02294cf4[6];
extern "C" const u32 data_ov134_02294d0c[6];
extern "C" u32 data_ov134_02294d40[1];
extern "C" u32 data_ov134_02294d44[2];
extern "C" u32 data_ov134_02294d4c[2];
extern "C" u32 data_ov134_02294d54[4];
extern "C" u32 data_ov134_02294d64[4];
extern "C" u32 data_ov134_02294d74[4];
extern "C" u32 data_ov134_02294d84[4];
extern "C" u32 data_ov134_02294d94[4];
extern "C" u32 data_ov134_02294da4[4];
extern "C" u32 data_ov134_02294db4[4];
extern "C" u32 data_ov134_02294dc4[4];
extern "C" char data_ov134_02294dd4[19];
extern "C" char data_ov134_02294de8[19];
extern "C" char data_ov134_02294dfc[19];
extern "C" char data_ov134_02294e10[19];
extern "C" char data_ov134_02294e24[22];
extern "C" char data_ov134_02294e3c[22];
extern "C" char data_ov134_02294e54[22];
extern "C" char data_ov134_02294e6c[22];
extern "C" u32 data_ov134_02294e84[6];
extern "C" u32 data_ov134_02294e9c[6];
extern "C" u32 data_ov134_02294eb4[6];
extern "C" u32 data_ov134_02294ecc[6];
extern "C" u32 data_ov134_02294ee4[6];
extern "C" u32 data_ov134_02294efc[6];
extern "C" u32 data_ov134_02294f14[6];
extern "C" u32 data_ov134_02294f2c[6];
extern "C" u32 data_ov134_02294f44[6];
extern "C" u32 data_ov134_02294f5c[6];
extern "C" char data_ov134_02294f74[30];
extern "C" u32 data_ov134_02294f94[8];
extern "C" u32 data_ov134_02294fb4[8];
extern "C" u32 data_ov134_02294fd4[8];
extern "C" u32 data_ov134_02294ff4[8];
extern "C" u32 data_ov134_02295014[8];
extern "C" u32 data_ov134_02295034[8];
extern "C" u32 data_ov134_02295054[8];
extern "C" u32 data_ov134_02295074[12];
extern "C" u32 data_ov134_022950a4[12];
extern "C" u32 data_ov134_022950d4[12];
extern "C" u32 data_ov134_02295104[12];
extern "C" u32 data_ov134_02295134[12];
extern "C" u32 data_ov134_02295164[12];
extern "C" u32 data_ov134_02295194[12];
extern "C" u32 data_ov134_022951c4[16];
extern "C" u32 data_ov134_02295204[28];
}

static inline s32 Unk_ov134_02293510_Hi(Unk_ov134_02291f60 *self, s32 i, s32 off) { return func_ov134_02293484(self, i) + off; }

Unk_ov134_02291f60::Unk_ov134_02291f60() {
}

Unk_ov134_02291f60::~Unk_ov134_02291f60() {
}

extern "C" void func_ov134_02294a34(S *s, u32 a, u32 b, u32 c, u8 d) {
    s->unk_90 = 0;
    s->unk_b7 = 0;
    s->unk_a0 = a;
    s->unk_98[0] = 0;
    switch (s->unk_a0) {
    case 0:
    case 1:
        s->unk_a1 = 0;
        break;
    case 2:
        s->unk_a1 = 1;
        break;
    case 3:
        s->unk_a1 = 2;
        break;
    }
    s->unk_a2 = b;
    s->unk_a3 = c;
    s->unk_a4 = d;
    s->unk_70 = 0;
    s->unk_74 = 0;
    s->unk_78 = 0;
    s->unk_18.func_ov002_02202f0c();
    s->unk_04 = 0;
    switch (s->unk_a0) {
    case 0:
    case 3:
        s->unk_b1 = 0;
        break;
    case 1:
        s->unk_b1 = 3;
        s->func_ov134_02291f70(0x40);
        s->func_ov134_02291f70(0x80);
        break;
    case 2:
        s->unk_b1 = 1;
        break;
    }
    if (s->unk_a0 == 2) {
        *(u32 *)&s->unk_b8.b[0] = 0;
        *(u32 *)&s->unk_b8.b[4] = 0;
        s->unk_b8.b[5] = 1;
        s->unk_b8.b[4] = 1;
        s->unk_b8.b[3] = 1;
    } else {
        func_0209d498(s->unk_b8.b);
        s->unk_b8.b[0] = 0;
        if (s->unk_a0 == 3) {
            func_0209d2c0(s->unk_b8.b, 1);
        }
        MI_CpuCopy8(s->unk_b8.b, s->unk_c8.b, 8);
        MI_CpuCopy8(s->unk_b8.b, s->unk_d0.b, 8);
        func_0209d28c(s->unk_d0.b, 0xc);
        s->unk_b2 = s->unk_c8.b[2];
        s->unk_b3 = s->unk_d0.b[2];
        s->unk_b4 = s->unk_c8.b[1];
        func_ov134_02293988(s);
    }
}

extern "C" void func_ov134_02294a28(S *s) {
    s->func_ov134_02291f70(0x80);
}

extern "C" void func_ov134_022949ec(S *s) {
    func_ov134_02294334(s);
    func_0200212c(s->unk_a4);
    s->unk_518.func_020b87d0();
    s->unk_53c.func_020b87d0();
    s->unk_560.func_020b87d0();
}

extern "C" void func_ov134_022949a8(S *s) {
    func_ov134_02294334(s);
    s->unk_518.func_020b87d0();
    s->unk_53c.func_020b87d0();
    s->unk_560.func_020b87d0();
    func_ov134_022932e0(s);
    s->unk_18.vfunc_0c();
}

extern "C" void func_ov134_022948e4(S *s) {
    s->func_ov134_02292074();
    s->unk_18.func_ov002_02202ed0();
    if (s->func_ov134_02291f80(2)) {
        if (s->unk_518.func_020b86c0((u32)s->unk_584, s->unk_a3, 0x800, 0)) {
            s->func_ov134_02291f60(2);
        }
    }
    if (s->func_ov134_02291f80(1)) {
        if (s->unk_53c.func_020b86c0((u32)s->unk_1d84, s->unk_a4, 0x800, 0)) {
            s->func_ov134_02291f60(1);
        }
    }
    s32 t = s->unk_b7;
    if (t > 0) {
        if (gPad & 0x40) {
            s->unk_b7 = 0;
        }
    } else if (t < 0) {
        if (gPad & 0x80) {
            s->unk_b7 = 0;
        }
    }
}

extern "C" void func_ov134_022948d8(S *s, void *src) {
    MI_CpuCopy8(s->unk_b8.b, src, 8);
}

extern "C" BOOL func_ov134_022948b8(S *s) {
    if (func_0209d3d0(s->unk_c8.b, s->unk_b8.b, 0x3f) == 1) {
        return TRUE;
    }
    return FALSE;
}

extern "C" void func_ov134_022947e8(S *s) {
    s32 h = gCurrentHeap;
    func_0200261c("menu/clock/b_tim_bg.bch", h, s->unk_a2, 0x10, 0x10, 0x80);
    func_020026c4("menu/clock/b_tim_bg.bpl", h, s->unk_a2, 1, 1, 10);
    func_020026c4((const void *)data_ov134_02294d64[s->unk_a0], h, s->unk_a2, 1, 1, 2);
    func_02002654("menu/clock/bga.bsc", h, s->unk_a2);
    File_LoadToBuffer((const void *)data_ov134_02294d94[s->unk_a0], s->unk_584, 0x800);
    func_ov134_02293320(s);
    File_LoadToBuffer("menu/clock/b_tim_b1_bg.bsc", s->unk_d84, 0x800);
    File_LoadToBuffer("menu/clock/b_tim_bg_9.bpl", s->unk_2584, 0x20);
}

extern "C" void func_ov134_022947b8(S *s, u8 a) {
    func_ov134_02294684(s);
    func_ov134_022942bc(s, s->unk_a2, 0x54, 0x10, a, 1, 0xf, 0xe);
}

extern "C" void func_ov134_022946fc(S *s) {
    s32 h = gCurrentHeap;
    func_020026c4("menu/clock/b_tim_obj.bpl", h, 8, 4, 4, 10);
    func_0200261c("menu/clock/b_tim_obj.bch", h, 8, 0xc0, 0xc0, 0x1df);
    u32 v = s->unk_a1;
    u32 out;
    u8 *buf = (u8 *)File_LoadAlloc((const void *)data_ov134_02294d40[v >> 2], h, -4, &out);
    u8 *p = buf + ((s32)v % 4) * 0x100;
    s32 x = 0xc0;
    s32 i = 0;
    do {
        func_02002438(p, 8, x, x, x + 7);
        p += 0x400;
        x += 0x20;
        i++;
    } while (i < 8);
    Heap_Free(h, buf);
    func_02002688("menu/clock/b_tim_ten0_obj.bpl", h, 8, s->unk_a1, 4);
}

extern "C" void func_ov134_022946b0(S *s) {
    s32 i = func_0209ceac(s->unk_b8.b[5], s->unk_b8.b[4], s->unk_b8.b[3]);
    func_ov134_022942bc(s, s->unk_a3, 0x1a8, 7, data_ov134_02294c68[i], 1, 0xf, 0);
}

extern "C" void func_ov134_02294684(S *s) {
    func_ov134_0229457c(s);
    func_ov134_02294534(s);
    func_ov134_022944f0(s);
    func_ov134_02294488(s);
    func_ov134_02294458(s);
    func_ov134_022946b0(s);
}

extern "C" void func_ov134_02294638(S *s, u32 idx) {
    switch (idx) {
    case 0:
        func_ov134_0229457c(s);
        break;
    case 1:
        func_ov134_02294534(s);
        break;
    case 2:
        func_ov134_022944f0(s);
        break;
    case 3:
        func_ov134_02294488(s);
        break;
    case 4:
        func_ov134_02294458(s);
        break;
    case 5:
        func_ov134_022946b0(s);
        break;
    }
}

extern "C" u32 func_ov134_0229462c(S *s, u32 idx) {
    return func_ov134_022945f0(s, idx, s->unk_b8.b);
}

extern "C" u32 func_ov134_022945f0(S *s, u32 idx, u8 *p) {
    switch (idx) {
    case 0:
        return p[5];
    case 1:
        return p[4];
    case 2:
        return p[3];
    case 3:
        return p[2];
    case 4:
        return p[1];
    case 5:
        return 0;
    }
    return 0xff;
}

extern "C" void func_ov134_022945b0(S *s, u32 idx, u32 v) {
    switch (idx) {
    case 0:
        s->unk_b8.b[5] = v;
        break;
    case 1:
        s->unk_b8.b[4] = v + 1;
        break;
    case 2:
        s->unk_b8.b[3] = v + 1;
        break;
    case 3:
        s->unk_b8.b[2] = v;
        break;
    case 4:
        s->unk_b8.b[1] = v;
        break;
    case 5:
        break;
    }
}

extern "C" void func_ov134_0229457c(S *s) {
    func_ov134_0229405c(s, s->unk_a3, 0x180, 4, 0x7d0 + s->unk_b8.b[5], 0xf, 0);
}

extern "C" u32 func_ov134_02294570(S *s, u32 a) {
    return data_ov134_02294c70[a - 1];
}

extern "C" void func_ov134_02294534(S *s) {
    u32 r = func_ov134_02294570(s, s->unk_b8.b[4]);
    func_ov134_02294230(s, s->unk_a3, 0x18e, 8, "st_day_month", r, 0xf, 0);
}

extern "C" u32 func_ov134_0229452c(S *s, u32 a) {
    return (u8)(a + 0xc);
}

extern "C" void func_ov134_022944f0(S *s) {
    u32 r = func_ov134_0229452c(s, s->unk_b8.b[3]);
    func_ov134_02294230(s, s->unk_a3, 0x19e, 5, "st_day_month", r, 0xf, 0);
}

extern "C" void func_ov134_02294488(S *s) {
    u32 r4 = *((u8 *)s + 0xba);
    u32 r1 = 0x37;
    if ((s32)r4 >= 0xc) {
        r1 = 0x38;
    }
    func_ov134_02294230(s, s->unk_a3, 0x1ce, 4, "st_general", r1, 0xf, 0);
    if ((s32)r4 > 0xc) {
        r4 -= 0xc;
    }
    if (r4 == 0) {
        r4 = 0xc;
    }
    func_ov134_0229405c(s, s->unk_a3, 0x1b6, 6, r4, 0xf, 0);
}

extern "C" void func_ov134_02294458(S *s) {
    func_ov134_022940a8(s, s->unk_a3, 0x1c2, 6, *((u8 *)s + 0xb9), 0, 0xf, 0);
}

extern "C" void func_ov134_0229435c(S *s) {
    u32 r5 = func_ov134_022934a4(s, s->unk_a5);
    u32 r1 = s->unk_ad;
    u32 r2 = s->unk_a5;
    switch (r2) {
    case 0:
        r1 += 0x7d0;
        break;
    case 1:
    case 2:
        r1 += 1;
        break;
    }
    switch (r2) {
    case 1:
        func_ov134_02294230(s, 8, 0xcb, r5, "st_day_month", func_ov134_02294570(s, r1), 0xf, 0);
        break;
    case 2:
        func_ov134_02294230(s, 8, 0xcb, r5, "st_day_month", func_ov134_0229452c(s, r1), 0xf, 0);
        break;
    case 3:
        func_ov134_022941ec(s, 8, 0xcb, r5, "st_general", r1 + 0x1e, 0xf, 0, 0, 6);
        break;
    case 4:
        func_ov134_022940a8(s, 8, 0xcb, r5, r1, 0, 0xf, 0);
        break;
    case 0:
    default:
        func_ov134_0229405c(s, 8, 0xcb, r5, r1, 0xf, 0);
        break;
    }
}

extern "C" void func_ov134_02294334(S *s) {
    s32 i;
    s->unk_9f = 0;
    for (i = 0; i < 0x11; i++) {
        ((Unk_020e0488 *)((u8 *)s + 0xd8))[i].func_0206fc44();
    }
}

extern "C" void *func_ov134_02294300(S *s) {
    if (*(volatile u8 *)&s->unk_9f >= 0x11) {
        return (u8 *)s + 0x4d8;
    }
    s->unk_9f = s->unk_9f + 1;
    return (u8 *)s + 0xd8 + (s->unk_9f - 1) * 0x40;
}

extern "C" void func_ov134_022942bc(S *s, u32 a, u32 b, u32 c, u8 d, s32 e, u8 f, u8 g) {
    Unk_020e0488 *p = (Unk_020e0488 *)func_ov134_02294300(s);
    func_0206f9fc(p, d);
    p->func_0206fb9c(a, b, c, f, g, 0);
    p->func_0206fab4(e, 0);
}

extern "C" void func_ov134_02294274(S *s, u32 a, u32 b, u32 c, u8 d, u32 e) {
    Unk_020e0488 *p = (Unk_020e0488 *)func_ov134_02294300(s);
    func_0206f9fc(p, d);
    p->func_0206fb9c(a, b, c, 0xf, 0, 0);
    p->func_0206fa74(1, -((c - e) * 4));
}

extern "C" void func_ov134_02294230(S *s, u32 a, u32 b, u32 c, const void *d, u32 e, u8 f, u8 g) {
    Unk_020e0488 *p = (Unk_020e0488 *)func_ov134_02294300(s);
    func_0206f9e4(p, d, e);
    p->func_0206fb9c(a, b, c, f, g, 0);
    p->func_0206fab4(1, 0);
}

extern "C" void func_ov134_022941ec(S *s, u32 a, u32 b, u32 c, const void *d, u32 e, u8 f, u8 g, s32 h, s32 i) {
    Unk_020e0488 *p = (Unk_020e0488 *)func_ov134_02294300(s);
    func_0206f9e4(p, d, e);
    p->func_0206fb9c(a, b, c, f, g, 0);
    p->func_0206fa74(h, i);
}

extern "C" void func_ov134_022941b0(S *s, u32 a, u32 b, u32 c, u32 d, u8 e, u8 f) {
    func_ov134_02294230(s, a, b, c, "st_day_month", func_ov134_02294570(s, d), e, f);
}

extern "C" void func_ov134_02294158(S *s, u32 a, u32 b, u32 c, u32 d, u8 e, u8 f) {
    Unk_020e0488 *p = (Unk_020e0488 *)func_ov134_02294300(s);
    func_0206f9e4(p, "st_day_month", func_ov134_0229452c(s, d));
    p->func_0206fb9c(a, b, c, e, f, 0);
    p->func_0206fa74(1, (c - 5) * 4);
}

extern "C" void func_ov134_02294108(S *s, u32 a, u32 b, u32 c, u32 d, u8 e, u8 f) {
    Unk_020e0488 *p = (Unk_020e0488 *)func_ov134_02294300(s);
    func_0206f9e4(p, "st_general", d + 0x1e);
    p->func_0206fb9c(a, b, c, e, f, 0);
    p->func_0206fa74(0, (c - 6) * 8 + 6);
}

extern "C" void func_ov134_022940a8(S *s, u32 a, u32 b, u32 c, u32 d, u32 e, u8 f, u8 g) {
    Unk_020e0488 *p = (Unk_020e0488 *)func_ov134_02294300(s);
    func_0206f9c8(p, d, 2, 6, 0, 0);
    p->func_0206fb9c(a, b, c, f, g, 0);
    if (e != 0) {
        p->func_0206fa74(1, (c - e) * 4);
    } else {
        p->func_0206fab4(1, 0);
    }
}

extern "C" void func_ov134_0229405c(S *s, u32 a, u32 b, u32 c, u32 d, u8 e, u8 f) {
    Unk_020e0488 *p = (Unk_020e0488 *)func_ov134_02294300(s);
    func_0206f9c8(p, d, 4, 0, 0, 0);
    p->func_0206fb9c(a, b, c, e, f, 0);
    p->func_0206fab4(1, 0);
}

extern "C" void func_ov134_0229400c(S *s, u32 a, u32 b, u32 c, u32 d, u32 e, u8 f, u8 g) {
    Unk_020e0488 *p = (Unk_020e0488 *)func_ov134_02294300(s);
    func_0206f9c8(p, d, 4, 0, 0, 0);
    p->func_0206fb9c(a, b, c, f, g, 0);
    p->func_0206fa74(1, (c - e) * 4);
}

extern "C" void func_ov134_02293c48(S *s, u8 *a, u8 *b) {
    u8 *r6 = a + 0x80;
    u8 *r7 = b + 0x60;
    if (s->unk_a1 == 0) {
        void *p = a + 0x38;
        u8 *q = b + 0x34;
        func_02088730(1, data_ov134_02294e84, p, q, -1, 2, 0);
        func_02088378(1, data_ov134_02294e84 + 2, p, q, -1, 2, 0x1000, s->unk_92, 0);
        func_02088378(1, data_ov134_02294e84 + 4, p, q, -1, 2, 0x1000, s->unk_94, 0);
    }
    Oam_DrawCell(1, data_ov134_02294d44, r6, (u32)r7, -1, 2, 0x1000, 0x1000, 0, -1, 0, 0);
    if (s->func_ov134_02291f80(4)) {
        s->unk_18.vfunc_08();
    }
    if (s->unk_74 != 0) {
        Oam_DrawCell(1, data_ov134_02294d74, s->unk_7c - 8, s->unk_b5, -1, 1, 0x1000, 0x1000, 0, -1, 0, 0);
        Oam_DrawCell(1, s->unk_74, s->unk_7c - 8, s->unk_b5, -1, 1, 0x1000, 0x1000, 0, -1, 0, 0);
    }
    if (s->unk_78 != 0) {
        Oam_DrawCell(1, (void *)s->unk_78, s->unk_7c - 8, s->unk_b6, -1, 1, 0x1000, 0x1000, 0, -1, 0, 0);
    }
    if (s->unk_70 != 0) {
        Oam_DrawCell(1, (void *)s->unk_70, s->unk_7c, s->unk_80, -1, 1, 0x1000, 0x1000, 0, -1, 0, 0);
    }
    switch (s->unk_a0) {
    case 0:
        Oam_DrawCell(1, data_ov134_02294db4, r6, (u32)r7, -1, 2, 0x1000, 0x1000, 0, -1, 0, 0);
    case 3: {
        s32 i;
        Oam_DrawCell(1, data_ov134_02294f44, r6, (u32)r7, -1, 2, 0x1000, 0x1000, 0, -1, 0, 0);
        for (i = 0; i < 5; i++) {
            if (s->unk_a0 == 3) {
                if (i == 3) continue;
                if (i == 4) continue;
            }
            Oam_DrawCell(1, (const void *)data_ov134_02294e9c[i], r6, (u32)r7, i == s->unk_b1 ? 7 : -1, 2, 0x1000, 0x1000, 0, -1, 0, 0);
        }
        Oam_DrawCell(1, (const void *)data_ov134_02294e9c[5], r6, (u32)r7, s->func_ov134_02291f80(8) ? 10 : 9, 2, 0x1000, 0x1000, 0, -1, 0, 0);
        break;
    }
    case 2: {
        s32 v1, v2;
        u32 b1 = s->unk_b1;
        if (b1 == 1) {
            v1 = 7;
            v2 = 6;
        } else if (b1 == 2) {
            v2 = 7;
            v1 = 6;
        } else {
            v1 = 6;
            v2 = 6;
        }
        Oam_DrawCell(1, data_ov134_02295104, r6, (u32)r7, v1, 2, 0x1000, 0x1000, 0, -1, 0, 0);
        Oam_DrawCell(1, data_ov134_02295034, r6, (u32)r7, v2, 2, 0x1000, 0x1000, 0, -1, 0, 0);
        break;
    }
    case 1: {
        s32 v1, v2;
        u32 b1;
        Oam_DrawCell(1, data_ov134_02294d54, r6, (u32)r7, -1, 2, 0x1000, 0x1000, 0, -1, 0, 0);
        Oam_DrawCell(1, data_ov134_02295204, r6, (u32)r7, -1, 2, 0x1000, 0x1000, 0, -1, 0, 0);
        b1 = s->unk_b1;
        if (b1 == 3) {
            v1 = 7;
            v2 = 6;
        } else if (b1 == 4) {
            v2 = 7;
            v1 = 6;
        } else {
            v1 = 6;
            v2 = 6;
        }
        Oam_DrawCell(1, data_ov134_022950d4, r6, (u32)r7, v1, 2, 0x1000, 0x1000, 0, -1, 0, 0);
        Oam_DrawCell(1, data_ov134_02295014, r6, (u32)r7, v2, 2, 0x1000, 0x1000, 0, -1, 0, 0);
        break;
    }
    }
}

extern "C" s32 func_ov134_02293b90(S *s, u32 a, u32 b) {
    s32 r6, r0;
    s32 r4;
    if (!func_ov134_022938a0(s, a, b, 0x28)) {
        return FALSE;
    }
    r6 = func_ov134_02293928(s, a, b);
    r0 = func_ov134_022938c4(s, r6, s->unk_92);
    r4 = 0;
    if (r0 >= -0x800 && r0 < 0x800) {
        s->unk_9e = r4;
        r4 = 1;
        s->unk_96 = s->unk_92;
    } else {
        r0 = func_ov134_022938c4(s, r6, s->unk_94);
        if (r0 >= -0x800 && r0 < 0x800) {
            r4 = 1;
            s->unk_9e = r4;
            s->unk_96 = s->unk_94;
        }
    }
    if (r4) {
        func_ov134_022932a0(s, 6);
        MI_CpuCopy8(s->unk_b8.b, (u8 *)s + 0xc0, 8);
        s->func_ov134_02291f60(0x30);
        return TRUE;
    }
    return FALSE;
}

extern "C" void func_ov134_02293b30(Unk_ov134_02291f60 *self, s32 x, s32 y) {
    u32 w;
    s32 t;
    switch (self->unk_9e) {
    case 0:
        func_ov134_02293a14(self, x, y);
        w = self->unk_92;
        break;
    case 1:
        func_ov134_022939e8(self, x, y);
        w = self->unk_94;
        break;
    default:
        return;
    }
    t = func_ov134_022938c4(self, self->unk_96, w);
    if (t < -1000 || t > 1000) {
        Snd_PlaySe(0x1a);
        self->unk_96 = w;
    }
}

extern "C" BOOL func_ov134_02293a5c(Unk_ov134_02291f60 *self) {
    s32 a;
    func_ov134_02293320(self);
    if (self->func_ov134_02291f80(0x40) && self->func_ov134_02291f80(0x10)) {
        a = func_ov134_0229462c(self, 4);
        self->unk_88 = a + func_ov134_0229462c(self, 3) * 0x3c;
        while (self->unk_88 > self->unk_84) {
            self->unk_88 = self->unk_88 - 0x2d0;
        }
        func_02004008(0x54);
        return TRUE;
    }
    if (self->func_ov134_02291f80(0x80) && self->func_ov134_02291f80(0x20)) {
        a = func_ov134_0229462c(self, 4);
        self->unk_88 = a + func_ov134_0229462c(self, 3) * 0x3c;
        while (self->unk_88 < self->unk_84) {
            self->unk_88 = self->unk_88 + 0x2d0;
        }
        func_02004008(0x54);
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL func_ov134_02293a3c(Unk_ov134_02291f60 *self) {
    if (func_ov134_02293660(self)) {
        func_ov134_02293988(self);
        return TRUE;
    }
    return FALSE;
}

extern "C" void func_ov134_02293a14(Unk_ov134_02291f60 *self, s32 x, s32 y) {
    s32 t = func_ov134_022938fc(self, x, y, self->unk_92);
    if (t != 0) {
        func_ov134_022936f4(self, (t * 0x3c) >> 16);
    }
}

extern "C" void func_ov134_022939e8(Unk_ov134_02291f60 *self, s32 x, s32 y) {
    s32 t = func_ov134_022938fc(self, x, y, self->unk_94);
    if (t != 0) {
        func_ov134_022936f4(self, (t * 0x2d0) >> 16);
    }
}

extern "C" void func_ov134_0229399c(Unk_ov134_02291f60 *self, u8 a, u8 b) {
    self->unk_84 = a * 0x3c + b;
    if (a >= 0xc) {
        a = a - 0xc;
    }
    self->unk_94 = ((b + a * 0x3c) << 16) / 0x2d0;
    self->unk_92 = b * 0x444;
}

extern "C" void func_ov134_02293988(Unk_ov134_02291f60 *self) {
    func_ov134_0229399c(self, self->unk_b8.b[2], self->unk_b8.b[1]);
}

extern "C" void func_ov134_0229393c(Unk_ov134_02291f60 *self) {
    s32 t = self->unk_84;
    while (t < 0) t += 0x2d0;
    while (t >= 0x2d0) t -= 0x2d0;
    self->unk_94 = (t << 16) / 0x2d0;
    self->unk_92 = (t % 0x3c) * 0x444;
}

extern "C" s32 func_ov134_02293928(void *self, s32 x, s32 y) {
    return func_020e7b98((x - 0x38) << 12, -(y - 0x34) << 12);
}

extern "C" s32 func_ov134_022938fc(Unk_ov134_02291f60 *self, s32 x, s32 y, s32 t) {
    if (x == 0x38 && y == 0x34) {
        return 0;
    }
    return func_ov134_022938c4(self, func_ov134_02293928(self, x, y), t);
}

extern "C" s32 func_ov134_022938c4(void *self, s32 a, s32 b) {
    s32 x = a - b;
    s32 y = b - a;
    while (x < 0) x += 0x10000;
    while (x >= 0x10000) x -= 0x10000;
    while (y < 0) y += 0x10000;
    while (y >= 0x10000) y -= 0x10000;
    if (x > y) {
        x = -y;
    }
    return x;
}

extern "C" BOOL func_ov134_022938a0(void *self, s32 x, s32 y, s32 r) {
    s32 dx = x - 0x38;
    dx = dx * dx;
    s32 dy = y - 0x34;
    dy = dy * dy;
    if (dx + dy < r * r) return TRUE;
    return FALSE;
}

extern "C" void func_ov134_022936f4(Unk_ov134_02291f60 *self, s32 delta) {
    u8 buf[6];
    s32 i;
    BOOL r;
    s32 v;
    u8 *pc;
    if (delta == 0) return;
    for (i = 0; i <= 4; i++) {
        buf[i] = func_ov134_0229462c(self, i);
    }
    buf[5] = 0;
    if (delta > 0) {
        func_0209d258(self->unk_c0.b, delta);
    } else {
        func_0209d0e4(self->unk_c0.b, -delta);
    }
    r = TRUE;
    if (self->func_ov134_02291f80(0x40)) {
        if (func_0209d3d0(self->unk_d0.b, self->unk_c0.b, 0x3f) == -1) {
            v = func_0209d374(self->unk_d0.b, self->unk_c0.b);
            r = FALSE;
            MI_CpuCopy8(self->unk_d0.b, self->unk_b8.b, 8);
            self->func_ov134_02291f70(0x10);
            pc = self->unk_c0.b;
            while (v >= 0x2d0) {
                func_0209d124(pc, 0xc);
                v -= 0x2d0;
            }
        } else {
            self->func_ov134_02291f60(0x10);
        }
    }
    if (self->func_ov134_02291f80(0x80)) {
        if (func_0209d3d0(self->unk_c8.b, self->unk_c0.b, 0x3f) == 1) {
            v = func_0209d374(self->unk_c0.b, self->unk_c8.b);
            r = FALSE;
            MI_CpuCopy8(self->unk_c8.b, self->unk_b8.b, 8);
            self->func_ov134_02291f70(0x20);
            pc = self->unk_c0.b;
            while (v >= 0x2d0) {
                func_0209d28c(pc, 0xc);
                v -= 0x2d0;
            }
        } else {
            self->func_ov134_02291f60(0x20);
        }
    }
    if (r) {
        MI_CpuCopy8(self->unk_c0.b, self->unk_b8.b, 8);
        func_ov134_02293988(self);
    } else {
        func_ov134_0229399c(self, self->unk_c0.b[2], self->unk_c0.b[1]);
    }
    for (i = 0; i <= 4; i++) {
        if (buf[i] != func_ov134_0229462c(self, i)) {
            self->unk_98[i] = 10;
            func_ov134_022933a4(self, i, 5);
            func_ov134_02294638(self, i);
            if (i >= 0 && i <= 2) {
                buf[5] = 1;
            }
        }
    }
    if (buf[5] != 0) {
        self->unk_98[5] = 10;
        func_ov134_022933a4(self, 5, 5);
        func_ov134_022946b0(self);
    }
}

extern "C" BOOL func_ov134_022936ac(void *self, s32 *p, s32 target, s32 maxstep, s32 minstep) {
    s32 d;
    s32 step;
    s32 cur = *p;
    if (cur > target) { d = cur - target; } else { d = target - cur; }
    if (d < minstep) { *p = target; return TRUE; }
    step = d >> 1;
    if (step > maxstep) { step = maxstep; } else if (step < minstep) { step = minstep; }
    if (cur > target) { *p = *p - step; } else { *p = *p + step; }
    return FALSE;
}

extern "C" BOOL func_ov134_02293660(Unk_ov134_02291f60 *self) {
    BOOL r;
    if (self->unk_84 == self->unk_88) {
        r = TRUE;
    } else {
        r = func_ov134_022936ac(self, &self->unk_84, self->unk_88, 0x30, 3);
        func_ov134_0229393c(self);
    }
    if (r == TRUE) {
        Snd_StopSe(0x54, 1);
        Snd_PlaySe(0x2e);
    }
    return r;
}

extern "C" s32 func_ov134_0229360c(Unk_ov134_02291f60 *self, s32 x, s32 y) {
    s32 i;
    s32 hx = x >> 3;
    s32 hy = y >> 3;
    for (i = 0; i <= 4; i++) {
        if (func_ov134_022934e0(self, i) > hx) continue;
        if (Unk_ov134_02293510_Hi(self, i, 0) < hx) continue;
        if (func_ov134_022934b0(self, i) > hy) continue;
        if (func_ov134_02293474(self, i) < hy) continue;
        return i;
    }
    return 6;
}

extern "C" s32 func_ov134_022935b8(Unk_ov134_02291f60 *self, s32 x, s32 y) {
    s32 i;
    s32 hx = x >> 3;
    s32 hy = y >> 3;
    for (i = 0; i <= 2; i++) {
        if (func_ov134_022934e0(self, i) > hx) continue;
        if (Unk_ov134_02293510_Hi(self, i, 3) < hx) continue;
        if (func_ov134_022934b0(self, i) > hy) continue;
        if (func_ov134_02293474(self, i) < hy) continue;
        return i;
    }
    return 6;
}

extern "C" s32 func_ov134_02293564(Unk_ov134_02291f60 *self, s32 x, s32 y) {
    s32 i;
    s32 hx = x >> 3;
    s32 hy = y >> 3;
    for (i = 1; i <= 2; i++) {
        if (func_ov134_022934e0(self, i) > hx) continue;
        if (Unk_ov134_02293510_Hi(self, i, 0) < hx) continue;
        if (func_ov134_022934b0(self, i) > hy) continue;
        if (func_ov134_02293474(self, i) < hy) continue;
        return i;
    }
    return 6;
}

extern "C" s32 func_ov134_02293510(Unk_ov134_02291f60 *self, s32 x, s32 y) {
    s32 i;
    s32 hx = x >> 3;
    s32 hy = y >> 3;
    for (i = 3; i <= 4; i++) {
        if (func_ov134_022934e0(self, i) > hx) continue;
        if (Unk_ov134_02293510_Hi(self, i, 0) < hx) continue;
        if (func_ov134_022934b0(self, i) > hy) continue;
        if (func_ov134_02293474(self, i) < hy) continue;
        return i;
    }
    return 6;
}

extern "C" s32 func_ov134_022934e0(Unk_ov134_02291f60 *self, s32 i) {
    u32 m = self->unk_a0;
    if (m == 2) return data_ov134_02294cac[i];
    if (m == 1) return data_ov134_02294cdc[i];
    return data_ov134_02294cc4[i];
}

extern "C" s32 func_ov134_022934b0(Unk_ov134_02291f60 *self, s32 i) {
    u32 m = self->unk_a0;
    if (m == 2) return data_ov134_02294cf4[i];
    if (m == 1) return data_ov134_02294d0c[i];
    return data_ov134_02294c7c[i];
}

extern "C" s32 func_ov134_022934a4(Unk_ov134_02291f60 *self, s32 i) {
    return data_ov134_02294c94[i];
}

extern "C" s32 func_ov134_02293484(Unk_ov134_02291f60 *self, s32 i) {
    s32 a = func_ov134_022934e0(self, i);
    return a + func_ov134_022934a4(self, i) - 1;
}

extern "C" s32 func_ov134_02293474(Unk_ov134_02291f60 *self, s32 i) {
    return func_ov134_022934b0(self, i) + 1;
}

extern "C" void func_ov134_022933a4(Unk_ov134_02291f60 *self, s32 idx, s32 x) {
    s32 t;
    s32 a;
    s32 b;
    s32 c;
    if (self->unk_a0 == 1) {
        if (idx == 0) return;
        if (idx == 1 || idx == 2 || idx == 5) {
            if (x == 3) x = 4;
            if (x == 5) x = 7;
        }
    } else if (self->unk_a0 == 2) {
        if (idx != 1 && idx != 2) return;
    }
    if (idx == 5 && x == 3) {
        if (func_0209ceac(self->unk_b8.b[5], self->unk_b8.b[4], self->unk_b8.b[3]) == 0) {
            x = 8;
            self->func_ov134_02291f70(x);
        } else {
            self->func_ov134_02291f60(8);
        }
    }
    if (self->unk_b1 == idx && x == 3) x = 5;
    t = func_ov134_022934e0(self, idx);
    a = func_ov134_022934b0(self, idx);
    b = func_ov134_02293484(self, idx);
    c = func_ov134_02293474(self, idx);
    func_0206ee80(self->unk_584, t, a, b, c, x);
    self->func_ov134_02291f70(2);
}

extern "C" void func_ov134_02293350(Unk_ov134_02291f60 *self, s32 a, s32 b) {
    s32 x = func_ov134_02293484(self, a) + 1;
    s32 y = func_ov134_022934b0(self, a);
    s32 z;
    if (self->unk_a0 == 0 && a == 3) {
        z = x + 1;
    } else {
        z = x + 2;
    }
    func_0206ee80(self->unk_584, x, y, z, y + 1, b);
    self->func_ov134_02291f70(2);
}

extern "C" void func_ov134_02293320(Unk_ov134_02291f60 *self) {
    s32 i;
    s32 j;
    for (i = 0; i <= 5; i++) {
        func_ov134_022933a4(self, i, 3);
    }
    for (j = 0; j <= 5; j++) {
        self->unk_98[j] = 0;
    }
}

extern "C" void func_ov134_022932e0(Unk_ov134_02291f60 *self) {
    s32 i;
    for (i = 0; i <= 5; i++) {
        if (self->unk_98[i] != 0) {
            self->unk_98[i] = self->unk_98[i] - 1;
            if (self->unk_98[i] == 0) {
                func_ov134_022933a4(self, i, 3);
            }
        }
    }
}

extern "C" u8 func_ov134_022932d8(Unk_ov134_02291f60 *self) {
    return self->unk_b1;
}

extern "C" void func_ov134_022932a0(Unk_ov134_02291f60 *self, u8 v) {
    u32 old = self->unk_b1;
    if (old == v) return;
    self->unk_b1 = v;
    if (old != 6) {
        func_ov134_022933a4(self, old, 3);
    }
    if (v != 6) {
        func_ov134_022933a4(self, v, 3);
    }
}

extern "C" void func_ov134_0229323c(Unk_ov134_02291f60 *self) {
    switch (self->unk_a0) {
    case 0:
    case 1:
        if (self->unk_b1 < 4) {
            func_ov134_022932a0(self, self->unk_b1 + 1);
        } else {
            func_ov134_022932a0(self, 6);
        }
        break;
    case 2:
    case 3:
        if (self->unk_b1 < 2) {
            func_ov134_022932a0(self, self->unk_b1 + 1);
        } else {
            func_ov134_022932a0(self, 6);
        }
        break;
    }
}

extern "C" void func_ov134_02293024(Unk_ov134_02291f60 *self, s32 idx) {
    s32 h, lim, i, j, off;
    s32 z;
    s32 r6;
    u16 *row;
    Snd_PlaySe(0x13);
    self->unk_a5 = idx;
    self->unk_a9 = 0;
    func_0200212c(self->unk_a4);
    self->unk_a7 = func_ov134_022934e0(self, idx);
    self->unk_a8 = func_ov134_022934b0(self, idx);
    MIi_CpuCopy16(self->unk_d84, self->unk_1584, 0x800);
    h = func_ov134_022934a4(self, idx);
    lim = 8 - h;
    row = (u16 *)self->unk_1584;
    i = 0;
    off = ((lim - 1) & 0x1f) << 1;
    z = 0;
    for (; i < 0x20; row += 0x20, i++) {
        for (j = z; j < lim; j++) {
            row[j] = 0x10;
        }
        *(u16 *)(off + (u32)row) = 0x3079;
    }
    self->unk_aa = (self->unk_a7 - lim) << 3;
    self->unk_ab = 0x28;
    self->unk_ac = data_ov134_02294c60[idx];
    if (idx == 2) {
        self->unk_ac = func_0209ce48(self->unk_b8.b[5], self->unk_b8.b[4]);
    }
    self->unk_8c = (self->unk_ac - 8) << 4;
    for (i = 0; i < 0x10; i++) {
        self->unk_08[i] = 0xff;
    }
    r6 = func_ov134_0229462c(self, self->unk_a5);
    if ((u8)(self->unk_a5 + 0xff) <= 1) {
        r6 = (u8)(r6 - 1);
    }
    {
        s32 v = (r6 << 4) - ((self->unk_a8 << 3) - self->unk_ab);
        if (v < 0) {
            v = 0;
        } else if (v > self->unk_8c) {
            v = self->unk_8c;
        }
        func_ov134_02292c3c(self, v);
    }
    self->func_ov134_022923fc();
    func_ov134_022932a0(self, (u8)idx);
    self->unk_7c = (u8 *)(func_ov134_022934e0(self, self->unk_a5) << 3);
    self->unk_ae = func_ov134_02293474(self, idx) << 3;
    self->unk_b5 = self->unk_ae - 8;
    self->unk_b6 = self->unk_ae + 8;
    func_ov134_02294274(self, 8, 0x1aa, 8, data_ov134_02294c58[idx], h + 1);
    self->unk_74 = (void *)data_ov134_02294f14[idx];
    self->unk_78 = data_ov134_02294f2c[idx];
    self->unk_af = 3;
    func_0200151c(1);
    func_02001724(0x1f, 1);
    func_020016b0(~func_0200273c(self->unk_a4) & 0x1f);
    self->func_ov134_02291f94(0);
    self->unk_b0 = r6 + 1;
    self->unk_04 = 0;
}

extern "C" s32 func_ov134_02292f40(Unk_ov134_02291f60 *self) {
    switch (self->unk_a9) {
    case 0:
        self->unk_a9 = 1;
        func_020020b8(self->unk_a4);
        func_0200152c(1);
        self->unk_af = self->unk_af - 1;
        func_ov134_02292934(self);
        break;
    case 1:
        if (self->unk_af != 0) {
            self->unk_af = self->unk_af - 1;
            func_ov134_02292934(self);
        } else {
            func_0200151c(1);
            self->unk_a9 = 2;
            self->unk_af = 0;
            self->func_ov134_02291f70(4);
            self->unk_60 = func_ov134_02293484(self, self->unk_a5) << 3;
            self->func_ov134_022923c0();
        }
        break;
    case 2:
        if (self->unk_af < 3) {
            self->unk_af = self->unk_af + 1;
            self->func_ov134_02291f94(self->unk_af);
        } else {
            self->unk_a9 = 8;
        }
        break;
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
        break;
    case 8:
        return 1;
    }
    return 0;
}

extern "C" s32 func_ov134_02292ea8(Unk_ov134_02291f60 *self, s32 x, s32 y) {
    s32 r6, u, m, t, r4;
    if (y <= 0x28 || y >= 0xa8) {
        return 0;
    }
    r6 = x >> 3;
    if (func_ov134_022934e0(self, self->unk_a5) > r6 || func_ov134_02293484(self, self->unk_a5) < r6) {
        return 0;
    }
    u = self->unk_00;
    m = u & 15;
    if (y >= 0xb2 - m) {
        return 2;
    }
    if (y <= (((16 - m) & 15) + 0x1e)) {
        return 2;
    }
    t = y - (self->unk_ab - u);
    if (t < 0) {
        return 2;
    }
    r4 = t >> 4;
    if (r4 >= self->unk_ac) {
        return 2;
    }
    if (self->func_ov134_0229258c(r4)) {
        return 2;
    }
    self->unk_ad = r4;
    return 1;
}

extern "C" void func_ov134_02292e40(Unk_ov134_02291f60 *self) {
    Snd_PlaySe(0x29);
    self->unk_a9 = 3;
    self->unk_af = 3;
    func_0200151c(1);
    func_02001724(0x1f, 1);
    func_020016b0(~func_0200273c(self->unk_a4) & 0x1f);
    func_ov134_0229435c(self);
    self->unk_80 = self->unk_ab + (self->unk_ad << 4) - self->unk_00;
    self->func_ov134_02291f60(4);
}

extern "C" void func_ov134_02292df4(Unk_ov134_02291f60 *self) {
    Snd_PlaySe(0x2a);
    self->unk_a9 = 4;
    self->unk_af = 3;
    func_0200151c(1);
    func_02001724(0x1f, 1);
    func_020016b0(~func_0200273c(self->unk_a4) & 0x1f);
    self->func_ov134_02291f60(4);
}

extern "C" s32 func_ov134_02292cb0(Unk_ov134_02291f60 *self) {
    switch (self->unk_a9) {
    case 0:
    case 1:
    case 2:
        break;
    case 3:
        self->unk_a9 = 5;
        self->unk_70 = data_ov134_02294f5c[self->unk_a5];
        break;
    case 4:
        self->unk_a9 = 5;
        break;
    case 5:
        if (self->unk_af != 0) {
            self->unk_af = self->unk_af - 1;
            self->func_ov134_02291f94(self->unk_af);
        } else {
            Snd_PlaySe(0x14);
            self->unk_a9 = 6;
            self->unk_af = 3;
            func_0200152c(1);
            self->unk_af = self->unk_af - 1;
            func_ov134_0229288c(self);
        }
        break;
    case 6:
        if (self->unk_af != 0) {
            self->unk_af = self->unk_af - 1;
            func_ov134_0229288c(self);
        } else {
            func_0200212c(self->unk_a4);
            func_0200151c(1);
            func_ov134_02293350(self, self->unk_a5, 3);
            self->unk_74 = 0;
            self->unk_78 = 0;
            if (self->unk_70 != 0) {
                if (self->func_ov134_022926d0()) {
                    self->unk_a9 = 7;
                    func_02004008(0x54);
                } else {
                    self->unk_a9 = 8;
                }
                self->unk_70 = 0;
                func_ov134_0229323c(self);
            } else {
                self->unk_a9 = 8;
            }
        }
        break;
    case 7:
        if (func_ov134_02293660(self)) {
            func_ov134_02293988(self);
            self->unk_a9 = 8;
        }
        break;
    case 8:
        return 1;
    }
    return 0;
}

extern "C" s32 func_ov134_02292c54(Unk_ov134_02291f60 *self, s32 x, s32 y) {
    switch (func_ov134_02292ea8(self, x, y)) {
    case 1:
        return 0;
    case 2:
        return 4;
    }
    if (self->func_ov134_02292558(x, y)) {
        return 3;
    }
    if (y >= 0x20 && y <= 0xa8) {
        s32 t = self->unk_60;
        if (x <= t + 0x18 && x >= t) {
            self->unk_18.func_ov002_02202f00();
            return 2;
        }
    }
    return 1;
}

extern "C" void func_ov134_02292c3c(Unk_ov134_02291f60 *self, s32 a) {
    self->unk_00 = a;
    func_ov134_02292c18(self);
    func_ov134_02292990(self);
}

extern "C" void func_ov134_02292c18(Unk_ov134_02291f60 *self) {
    func_020021fc(self->unk_a4, -self->unk_aa, -(self->unk_ab - self->unk_00));
}

extern "C" s32 func_ov134_02292990(Unk_ov134_02291f60 *self) {
    u16 *row;
    s32 dx, h, lim, off, i, j, k, t;
    u32 c, ac;
    MIi_CpuCopy16(self->unk_1584, self->unk_1d84, 0x800);
    dx = self->unk_ab - self->unk_00;
    h = func_ov134_022934a4(self, self->unk_a5);
    lim = 8 - func_ov134_022934a4(self, self->unk_a5);
    if (dx > 0) {
        i = (16 - ((dx + 15) >> 4)) * 2;
        row = (u16 *)(self->unk_1d84 + (i << 6));
        for (; i < 0x20; row += 0x20, i++) {
            for (j = lim; j < 8; j++) {
                row[j] = 0x3074;
            }
        }
    }
    off = (self->unk_00 - self->unk_ab) >> 4;
    for (k = 0; k < 0x10; k++) {
        s32 r5 = k + off;
        s32 r6 = r5 & 15;
        if (r5 < 0 || r5 >= self->unk_ac) {
            continue;
        }
        if (self->func_ov134_0229258c(r5)) {
            func_0206ee80(self->unk_1d84, lim, r6 * 2, 7, r6 * 2 + 1, 6);
        }
        if (r5 == self->unk_08[r6]) {
            continue;
        }
        self->unk_08[r6] = r5;
        c = self->unk_a5;
        if (c == 0) {
            r5 += 0x7d0;
        }
        if ((u8)(c + 0xff) <= 1) {
            r5++;
        }
        switch (c) {
        case 1:
            func_ov134_022941b0(self, self->unk_a4, (r6 << 4) + 0x80, 8, r5, 15, 14);
            break;
        case 2:
            func_ov134_02294158(self, self->unk_a4, (r6 << 4) + 0x80, 8, r5, 15, 14);
            break;
        case 3:
            func_ov134_02294108(self, self->unk_a4, (r6 << 4) + 0x80, 8, r5, 15, 14);
            break;
        case 4:
            func_ov134_022940a8(self, self->unk_a4, (r6 << 4) + 0x80, 8, r5, h, 15, 14);
            break;
        case 0:
        default:
            func_ov134_0229400c(self, self->unk_a4, (r6 << 4) + 0x80, 8, r5, h, 15, 14);
            break;
        }
    }
    ac = self->unk_ac;
    t = self->unk_ab - self->unk_00;
    t = t + (ac << 4);
    if (t < 0xc0) {
        s32 yb;
        s32 n;
        u16 *rowb;
        s32 jb;
        s32 ib;
        n = ((0xcf - t) >> 4) << 1;
        yb = (ac << 1) & 0x1f;
        for (ib = 0; ib < n; ib++) {
            rowb = (u16 *)(self->unk_1d84 + (yb << 6));
            for (jb = lim; jb < 8; jb++) {
                rowb[jb] = 0x3074;
            }
            yb = (yb + 1) & 0x1f;
        }
    }
    {
        s32 y;
        u16 *row2;
        s32 i2;
        s32 j2;
        y = ((self->unk_00 - self->unk_ab + 0x20) & 0xff) >> 3;
        for (i2 = 0; i2 < 5; i2++) {
            row2 = (u16 *)(self->unk_1d84 + (y << 6));
            for (j2 = 0; j2 < 10; j2++) {
                row2[j2] = 0x10;
            }
            row2[0x1f] = 0x10;
            y = (y - 1) & 0x1f;
        }
    }
    {
        s32 y;
        u16 *row2;
        s32 i2;
        s32 j2;
        y = ((self->unk_00 - self->unk_ab + 0xb0) & 0xff) >> 3;
        for (i2 = 0; i2 < 3; i2++) {
            row2 = (u16 *)(self->unk_1d84 + (y << 6));
            for (j2 = 0; j2 < 10; j2++) {
                row2[j2] = 0x10;
            }
            row2[0x1f] = 0x10;
            y = (y + 1) & 0x1f;
        }
    }
    self->func_ov134_02291f70(1);
}

extern "C" void func_ov134_02292934(Unk_ov134_02291f60 *self) {
    if (self->unk_af != 0) {
        self->unk_b5 = (self->unk_b5 + 0x28) >> 1;
        self->unk_b6 = (self->unk_b6 + 0xa8) >> 1;
    } else {
        self->unk_b5 = 0x28;
        self->unk_b6 = 0xa8;
    }
    func_020021b8(2, 0, self->unk_b5, 0xff, self->unk_b6);
}

extern "C" void func_ov134_0229288c(Unk_ov134_02291f60 *self) {
    if (self->unk_af != 0) {
        self->unk_b5 = (self->unk_ae - 8 + self->unk_b5) >> 1;
        self->unk_b6 = (self->unk_ae + 8 + self->unk_b6) >> 1;
    } else {
        self->unk_b5 = self->unk_ae - 8;
        self->unk_b6 = self->unk_ae + 8;
    }
    func_020021b8(2, 0, self->unk_b5, 0xff, self->unk_b6);
    s32 v = self->unk_b5;
    if (self->unk_80 < v) {
        self->unk_80 = v;
    }
    v = self->unk_b6 - 8;
    if (self->unk_80 > v) {
        self->unk_80 = v;
    }
}

BOOL Unk_ov134_02291f60::func_ov134_022926d0() {
    u16 m = 0;
    u32 cur = func_ov134_0229462c(this, unk_a5);
    func_ov134_022945b0(this, unk_a5, unk_ad);
    m |= 1 << unk_a5;
    s32 r = func_0209ce48(unk_b8.b[5], unk_b8.b[4]);
    if (r < unk_b8.b[3]) {
        unk_b8.b[3] = r;
        m |= 4;
    }
    if (unk_a5 <= 2) {
        func_ov134_022933a4(this, 5, 3);
        m |= 0x20;
    }
    s32 dir = 0;
    if (unk_a5 == 3 && unk_a0 == 1) {
        u8 lo = unk_b2;
        if (cur < lo) {
            if (unk_ad >= lo) {
                func_0209d164(unk_b8.b, 1);
                dir = -1;
            }
        } else {
            if (unk_ad < lo) {
                func_0209d2c0(unk_b8.b, 1);
                dir = 1;
            }
        }
        if (dir != 0) {
            m |= 0x27;
        }
    }
    if (func_ov134_02291f80(0x80)) {
        if (func_0209d3d0(unk_c8.b, unk_b8.b, 0x3f) == 1) {
            MI_CpuCopy8(unk_c8.b, unk_b8.b, 8);
            m = 0xffff;
        }
    }
    if (func_ov134_02291f80(0x40)) {
        if (func_0209d3d0(unk_d0.b, unk_b8.b, 0x3f) == -1) {
            MI_CpuCopy8(unk_d0.b, unk_b8.b, 8);
            m = 0xffff;
        }
    }
    u8 i;
    for (i = 0; i <= 5; i++) {
        if (m & (1 << i)) {
            func_ov134_02294638(this, i);
        }
    }
    if ((u8)(unk_a5 + 0xfd) <= 1) {
        if (cur == unk_ad) {
            return FALSE;
        }
        u32 a = func_ov134_0229462c(this, 4);
        u32 b = func_ov134_0229462c(this, 3);
        unk_88 = a + b * 0x3c;
        unk_88 = unk_88 + dir * 0x5a0;
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov134_02291f60::func_ov134_02292678(s32 v, u8 n) {
    u8 i;
    for (i = 0; i < n; i++) {
        u32 a = func_ov134_0229462c(this, i);
        if (a != func_ov134_022945f0(this, i, unk_d0.b)) {
            return FALSE;
        }
    }
    if (v > (s32)func_ov134_022945f0(this, n, unk_d0.b)) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov134_02291f60::func_ov134_02292620(s32 v, u8 n) {
    u8 i;
    for (i = 0; i < n; i++) {
        u32 a = func_ov134_0229462c(this, i);
        if (a != func_ov134_022945f0(this, i, unk_c8.b)) {
            return FALSE;
        }
    }
    if (v < (s32)func_ov134_022945f0(this, n, unk_c8.b)) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov134_02291f60::func_ov134_0229258c(s32 v) {
    u32 t = unk_a5;
    if (t == 1) goto inc;
    if (t == 2) {
inc:
        v++;
    }
    if (unk_a0 == 1 && t == 3) {
        u8 hi = unk_b3;
        u8 lo = unk_b2;
        if (lo < hi) {
            if (v < lo || v > hi) {
                return TRUE;
            }
        } else {
            if (v < lo && v > hi) {
                return TRUE;
            }
        }
        return FALSE;
    }
    if (func_ov134_02291f80(0x80)) {
        if (func_ov134_02292620(v, unk_a5)) {
            return TRUE;
        }
    }
    if (func_ov134_02291f80(0x40)) {
        return func_ov134_02292678(v, unk_a5);
    }
    return FALSE;
}

BOOL Unk_ov134_02291f60::func_ov134_02292558(s32 x, s32 y) {
    if (unk_18.func_ov002_02202f18(x, y)) {
        unk_68 = unk_64 - y;
        unk_18.func_ov002_02202f00();
        unk_6c = unk_64;
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov134_02291f60::func_ov134_02292530() {
    if (unk_b0 == 0) {
        unk_18.func_ov002_02202f00();
        func_ov002_02202e48(&unk_18);
        return TRUE;
    }
    return FALSE;
}

void Unk_ov134_02291f60::func_ov134_022924fc() {
    func_ov134_022923d4();
    func_ov134_022923c0();
    s32 t = unk_6c - unk_64;
    if (t >= 4 || t <= -4) {
        func_ov002_02202e54(&unk_18);
        unk_6c = unk_64;
    }
}

void Unk_ov134_02291f60::func_ov134_022924d8(s32 x) {
    unk_64 = x + unk_68;
    if (unk_64 < 0x20) {
        unk_64 = 0x20;
    }
    if (unk_64 > 0xa0) {
        unk_64 = 0xa0;
    }
    func_ov134_022924fc();
}

void Unk_ov134_02291f60::func_ov134_022924b0(s32 x) {
    x -= 8;
    if (x < 0x20) {
        x = 0x20;
    }
    if (x > 0xa0) {
        x = 0xa0;
    }
    func_020e761c(&unk_64, x, 8);
    func_ov134_022924fc();
}

void Unk_ov134_02291f60::func_ov134_02292450() {
    s32 old = unk_64;
    u32 k = gPad;
    if (k & 0x40) {
        unk_64 = old - 4;
        if (unk_64 < 0x20) {
            unk_64 = 0x20;
        }
    } else if (k & 0x80) {
        unk_64 = old + 4;
        if (unk_64 > 0xa0) {
            unk_64 = 0xa0;
        }
    }
    if (old != unk_64) {
        func_ov134_022923d4();
        func_ov134_022923c0();
        func_ov002_02202e54(&unk_18);
    }
}

void Unk_ov134_02291f60::func_ov134_02292444() {
    unk_18.func_ov002_02202ef4();
}

BOOL Unk_ov134_02291f60::func_ov134_02292420() {
    if (unk_18.areAnimsDone()) {
        unk_18.func_ov002_02202f0c();
        return TRUE;
    }
    return FALSE;
}

void Unk_ov134_02291f60::func_ov134_022923fc() {
    unk_64 = _s32_div_f(unk_00 << 7, unk_8c) + 0x20;
    func_ov134_022923c0();
}

void Unk_ov134_02291f60::func_ov134_022923d4() {
    func_ov134_02292c3c(this, _s32_div_f(unk_8c * (unk_64 - 0x20), 0x80));
    unk_04 = 0;
}

void Unk_ov134_02291f60::func_ov134_022923c0() {
    unk_18.moveTo(unk_60 - 0x78, unk_64 - 0x60);
}

s32 Unk_ov134_02291f60::func_ov134_022923a0() {
    if (unk_b0 == 0) {
        return unk_18.func_ov002_02202e84();
    }
    return unk_60;
}

s32 Unk_ov134_02291f60::func_ov134_0229236c() {
    if (unk_b0 == 0) {
        return unk_18.func_ov002_02202e60();
    }
    return unk_ab + ((unk_b0 - 1) << 4) - unk_00 + 8 - unk_04;
}

void Unk_ov134_02291f60::func_ov134_02292340(s32 y) {
    if (unk_b0 != 0) {
        if (y < 0x28) {
            y = 0x28;
        } else if (y > 0xa8) {
            y = 0xa8;
        }
        unk_b0 = func_ov134_022920d0(y) + 1;
    }
}

s32 Unk_ov134_02291f60::func_ov134_0229219c(u32 pad) {
    if (unk_b0 == 0) {
        unk_b7 = 0;
        if (func_ov002_0220126c(pad)) {
            unk_b0 = 1;
            func_ov134_02292340(unk_18.func_ov002_02202e60());
            return 1;
        }
    } else {
        if (func_ov002_0220125c(pad)) {
            unk_b0 = 0;
            unk_b7 = 0;
            return 1;
        }
        s32 v = unk_b7;
        if (v >= 6) {
            if (gPad & 0x40) {
                if (func_ov134_02292134()) {
                    if (unk_04 != 0) {
                        func_ov134_02292c3c(this, unk_00 + unk_04);
                        unk_04 = 0;
                        func_ov134_022923fc();
                    }
                    if (func_ov134_02291f80(0x100)) {
                        func_ov134_02291f60(0x100);
                        Snd_PlaySe(0xb);
                    } else {
                        func_ov134_02291f70(0x100);
                    }
                    return 3;
                }
            } else {
                unk_b7 = 0;
            }
        } else if (v <= -6) {
            if (gPad & 0x80) {
                if (func_ov134_022920f4()) {
                    if (unk_04 != 0) {
                        func_ov134_02292c3c(this, unk_00 + unk_04);
                        unk_04 = 0;
                        func_ov134_022923fc();
                    }
                    if (func_ov134_02291f80(0x100)) {
                        func_ov134_02291f60(0x100);
                        Snd_PlaySe(0xb);
                    } else {
                        func_ov134_02291f70(0x100);
                    }
                    return 3;
                }
            } else {
                unk_b7 = 0;
            }
        }
        if (func_ov002_0220128c(pad)) {
            s32 t = unk_b7;
            if (t < 0) {
                unk_b7 = 1;
            } else {
                unk_b7 = t + 1;
            }
            if (func_ov134_02292134()) {
                return 2;
            }
        } else if (func_ov002_0220127c(pad)) {
            s32 t = unk_b7;
            if (t > 0) {
                unk_b7 = -1;
            } else {
                unk_b7 = t - 1;
            }
            if (func_ov134_022920f4()) {
                return 2;
            }
        }
    }
    return 0;
}

BOOL Unk_ov134_02291f60::func_ov134_02292170() {
    s32 t = unk_b0 - 1;
    if (func_ov134_0229258c(t)) {
        return FALSE;
    }
    unk_ad = t;
    return TRUE;
}

BOOL Unk_ov134_02291f60::func_ov134_02292134() {
    if (*(volatile u8 *)&unk_b0 > 1) {
        unk_b0 = *(volatile u8 *)&unk_b0 - 1;
        s32 t = func_ov134_0229236c();
        if (t < 0x30) {
            unk_04 = unk_04 - (0x30 - t);
        }
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov134_02291f60::func_ov134_022920f4() {
    if ((s32)*(volatile u8 *)&unk_b0 < (s32)*(volatile u8 *)&unk_ac) {
        unk_b0 = *(volatile u8 *)&unk_b0 + 1;
        s32 t = func_ov134_0229236c();
        if (t > 0xa0) {
            unk_04 = unk_04 + (t - 0xa0);
        }
        return TRUE;
    }
    return FALSE;
}

s32 Unk_ov134_02291f60::func_ov134_022920d0(s32 y) {
    s32 d = unk_ab;
    d -= unk_00;
    s32 v = y - d;
    if (v < 0) {
        v = 0;
    }
    v >>= 4;
    s32 lim = unk_ac;
    if (v >= lim) {
        v = lim - 1;
    }
    return v;
}

void Unk_ov134_02291f60::func_ov134_02292074() {
    if (func_ov134_02291f80(1)) {
        return;
    }
    s32 a = unk_00;
    s32 b = unk_04;
    if (b > 0) {
        if (b < 8) {
            a += b;
            unk_04 = 0;
        } else {
            a += 8;
            unk_04 = b - 8;
        }
    } else if (b < 0) {
        if (b > -8) {
            a += b;
            unk_04 = 0;
        } else {
            a -= 8;
            unk_04 = b + 8;
        }
    }
    if (a != unk_00) {
        func_ov134_02292c3c(this, a);
        func_ov134_022923fc();
    }
}

void Unk_ov134_02291f60::func_ov134_02291f94(s32 t) {
    u8 *p = (u8 *)this;
    MIi_CpuCopy16(p + 0x2584, p + 0x25a4, 0x20);
    s32 c1 = *(u16 *)(p + 0x25a0);
    u8 r = c1 & 0x1f;
    u8 g = (c1 & 0x3e0) >> 5;
    u8 b = (c1 & 0x7c00) >> 10;
    s32 w = 3 - t;
    s32 c2 = *(u16 *)(p + 0x25a2);
    r = ((u8)(c2 & 0x1f) * t + r * w) / 3;
    g = ((u8)((c2 & 0x3e0) >> 5) * t + g * w) / 3;
    b = ((u8)((c2 & 0x7c00) >> 10) * t + b * w) / 3;
    *(u16 *)(p + 0x25c2) = r | (g << 5) | (b << 10);
    ((Unk_020e45f8 *)(p + 0x560))->func_020b8670((u32)(p + 0x25a4), unk_a4, 9);
}

BOOL Unk_ov134_02291f60::func_ov134_02291f80(u32 m) {
    if (unk_90 & m) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov134_02291f60::func_ov134_02291f70(u32 m) {
    unk_90 |= m;
}

void Unk_ov134_02291f60::func_ov134_02291f60(u32 m) {
    unk_90 &= ~m;
}

extern "C" u32 data_ov134_02294dc4[4] = {0x80004000, 0x50cb, 0x208000, 0xffff50cf};
extern "C" u32 data_ov134_02294fb4[8] = {0x81e84004, 0x6554, 0x41e84014, 0x6594, 0x81c84004, 0x6554, 0x41c84014, 0xffff6594};
extern "C" u32 data_ov134_02294d40[1] = {(u32)data_ov134_02294f74};
extern "C" char data_ov134_02294e3c[22] = "menu/clock/bgb_us.bsc";
extern "C" u32 data_ov134_02294d44[2] = {0xc19800b3, 0xffff44c0};
extern "C" u32 data_ov134_02294d4c[2] = {0x80004000, 0xffff50cb};
extern "C" u32 data_ov134_02294f5c[6] = {(u32)data_ov134_02294d4c, (u32)data_ov134_02294d84, (u32)data_ov134_02294dc4, (u32)data_ov134_02294da4, (u32)data_ov134_02294da4, (u32)data_ov134_02294ee4};
extern "C" u32 data_ov134_02294fd4[8] = {0x80004004, 0x6554, 0x40004014, 0x6594, 0x800f4004, 0x6554, 0x400f4014, 0xffff6594};
extern "C" char data_ov134_02294e6c[22] = "menu/clock/bgd_us.bsc";
extern "C" u32 data_ov134_02294ff4[8] = {0x90264024, 0x6552, 0x50264034, 0x6592, 0x80084024, 0x6552, 0x40084034, 0xffff6592};
extern "C" u32 data_ov134_022950a4[12] = {0x1ff0030, 0x6559, 0x1ff0028, 0x6559, 0x91de4024, 0x6552, 0x51de4034, 0x6592, 0x81c04024, 0x6552, 0x41c04034, 0xffff6592};
extern "C" u32 data_ov134_022950d4[12] = {0x40028, 0x6559, 0x40020, 0x6559, 0x91e4401c, 0x6552, 0x51e4402c, 0x6592, 0x81cc401c, 0x6552, 0x41cc402c, 0xffff6592};
extern "C" const u8 data_ov134_02294c68[7] = {0xaa, 0xab, 0xac, 0xad, 0xae, 0xaf, 0xb0};
extern "C" u32 data_ov134_02295104[12] = {0x81d0400c, 0x6555, 0x41d0401c, 0x6595, 0x91e8400c, 0x6552, 0x51e8401c, 0x6592, 0x81b8400c, 0x6552, 0x41b8401c, 0xffff6592};
extern "C" u32 data_ov134_02294d54[4] = {0x80444023, 0x65b2, 0x40640023, 0xffff65b6};
extern "C" u32 data_ov134_02294db4[4] = {0x8044402b, 0x65b2, 0x4064002b, 0xffff65b6};
extern "C" u32 data_ov134_02295204[28] = {0x268000, 0x84ca, 0x1e88000, 0x84ca, 0x81c740fc, 0x8554, 0x41c7400c, 0x8594, 0x81e740fc, 0x8554, 0x41e7400c, 0x8594, 0x801740fc, 0x8554, 0x4017400c, 0x8594, 0x81f740fc, 0x8554, 0x41f7400c, 0x8594, 0x903740fc, 0x8552, 0x5037400c, 0x8592, 0x81a740fc, 0x8552, 0x41a7400c, 0xffff8592};
extern "C" u32 data_ov134_02295194[12] = {0x800040e8, 0x6108, 0x800a40e8, 0x610c, 0x402800e8, 0x6110, 0x400040f8, 0x6148, 0x400a40f8, 0x614c, 0x2840f8, 0xffff6150};
extern "C" u32 data_ov134_02294f2c[6] = {(u32)data_ov134_02294efc, (u32)data_ov134_02295054, (u32)data_ov134_02294ecc, (u32)data_ov134_02294eb4, (u32)data_ov134_02294eb4, (u32)data_ov134_02294eb4};
extern "C" u32 data_ov134_02294f14[6] = {(u32)data_ov134_02295194, (u32)data_ov134_022951c4, (u32)data_ov134_02295164, (u32)data_ov134_02295134, (u32)data_ov134_02295134, (u32)data_ov134_02295134};
extern "C" u32 data_ov134_02294efc[6] = {0x80004000, 0x6168, 0x800a4000, 0x616c, 0x40280000, 0xffff6170};
extern "C" const u32 data_ov134_02294d0c[6] = {0x0, 0xc, 0xc, 0x10, 0x10, 0xc};
extern "C" u32 data_ov134_02294eb4[6] = {0x80004000, 0x6168, 0x80184000, 0x616c, 0x40380000, 0xffff6170};
extern "C" char data_ov134_02294dfc[19] = "menu/clock/bg2.bpl";
extern "C" u32 data_ov134_02294ecc[6] = {0x80004000, 0x6168, 0x80104000, 0x616c, 0x40300000, 0xffff6170};
extern "C" const u32 data_ov134_02294cdc[6] = {0x0, 0x6, 0xe, 0xa, 0x12, 0x13};
extern "C" char data_ov134_02294e24[22] = "menu/clock/bge_us.bsc";
extern "C" u32 data_ov134_02294d84[4] = {0x80004000, 0x50cb, 0x80204000, 0xffff50cf};
extern "C" u32 data_ov134_02295074[12] = {0x902e4004, 0x6554, 0x502e4014, 0x6594, 0x90344004, 0x6554, 0x50344014, 0x6594, 0x904f4004, 0x6552, 0x504f4014, 0xffff6592};
extern "C" const u32 data_ov134_02294c94[6] = {0x4, 0x8, 0x5, 0x6, 0x6, 0x7};
extern "C" const u8 data_ov134_02294c70[12] = {0x0, 0x1, 0x2, 0x3, 0x4, 0x5, 0x6, 0x7, 0x8, 0x9, 0xa, 0xb};
extern "C" u32 data_ov134_02294da4[4] = {0x80004000, 0x50cb, 0x40200000, 0xffff50cf};
extern "C" char data_ov134_02294e54[22] = "menu/clock/bgc_us.bsc";
extern "C" u32 data_ov134_02295014[8] = {0x9024401c, 0x6552, 0x5024402c, 0x6592, 0x800c401c, 0x6552, 0x400c402c, 0xffff6592};
extern "C" const u8 data_ov134_02294c58[6] = {0xb2, 0xb3, 0xb4, 0xb5, 0xb6, 0xaa};
extern "C" u32 data_ov134_02295134[12] = {0x800040e8, 0x6108, 0x801840e8, 0x610c, 0x403800e8, 0x6110, 0x400040f8, 0x6148, 0x401840f8, 0x614c, 0x3840f8, 0xffff6150};
extern "C" u32 data_ov134_02294d64[4] = {(u32)data_ov134_02294dd4, (u32)data_ov134_02294de8, (u32)data_ov134_02294dfc, (u32)data_ov134_02294e10};
extern "C" u32 data_ov134_02295164[12] = {0x800040e8, 0x6108, 0x801040e8, 0x610c, 0x403000e8, 0x6110, 0x400040f8, 0x6148, 0x401040f8, 0x614c, 0x3040f8, 0xffff6150};
extern "C" u32 data_ov134_02294e9c[6] = {(u32)data_ov134_02295074, (u32)data_ov134_02294fb4, (u32)data_ov134_02294fd4, (u32)data_ov134_022950a4, (u32)data_ov134_02294ff4, (u32)data_ov134_02294f94};
extern "C" const u32 data_ov134_02294cac[6] = {0x0, 0x8, 0x12, 0x0, 0x0, 0x0};
extern "C" u32 data_ov134_02294d74[4] = {0x800a40ee, 0x61aa, 0x802a40ee, 0xffff61ae};
extern "C" u32 data_ov134_02294ee4[6] = {0x80004000, 0x50cb, 0x40200000, 0x50cf, 0x308000, 0xffff50d1};
extern "C" u32 data_ov134_02294f94[8] = {0x91a84004, 0x9554, 0x51a84014, 0x9594, 0x81884004, 0x9552, 0x41884014, 0xffff9592};
extern "C" u32 data_ov134_022951c4[16] = {0x802840e8, 0x610c, 0x402840f8, 0x614c, 0x800040e8, 0x6108, 0x802040e8, 0x610c, 0x404800e8, 0x6110, 0x400040f8, 0x6148, 0x402040f8, 0x614c, 0x4840f8, 0xffff6150};
extern "C" const u8 data_ov134_02294c60[6] = {0x64, 0xc, 0x1f, 0x18, 0x3c, 0x7};
extern "C" u32 data_ov134_02295034[8] = {0x9020400c, 0x6552, 0x5020401c, 0x6592, 0x8008400c, 0x6552, 0x4008401c, 0xffff6592};
extern "C" u32 data_ov134_02294e84[6] = {0x1fc00fc, 0x54e8, 0x81f000e0, 0x54d8, 0x81f000e0, 0xffff54d4};
extern "C" char data_ov134_02294dd4[19] = "menu/clock/bg0.bpl";
extern "C" const u32 data_ov134_02294cc4[6] = {0x17, 0x9, 0x11, 0x9, 0x12, 0x2};
extern "C" const u32 data_ov134_02294cf4[6] = {0x0, 0xe, 0xe, 0x0, 0x0, 0x0};
extern "C" char data_ov134_02294f74[30] = "menu/clock/b_tim_ten0_obj.bch";
extern "C" u32 data_ov134_02295054[8] = {0x80284000, 0x616c, 0x80004000, 0x6168, 0x80204000, 0x616c, 0x40480000, 0xffff6170};
extern "C" char data_ov134_02294e10[19] = "menu/clock/bg3.bpl";
extern "C" u32 data_ov134_02294f44[6] = {0x2e8008, 0x64ca, 0x78008, 0x64ca, 0x1c88008, 0xffff64ca};
extern "C" const u32 data_ov134_02294c7c[6] = {0xd, 0xd, 0xd, 0x11, 0x11, 0xd};
extern "C" char data_ov134_02294de8[19] = "menu/clock/bg1.bpl";
extern "C" u32 data_ov134_02294d94[4] = {(u32)data_ov134_02294e3c, (u32)data_ov134_02294e54, (u32)data_ov134_02294e6c, (u32)data_ov134_02294e24};
