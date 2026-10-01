#include "types.h"
#include "text/Unk_02050288.h"

extern "C" {
void func_02087e70(u32 a, void *h, s32 x, s32 y, s32 s0, s32 s1, s32 s2, s32 s3, s32 s4, s32 s5, s32 s6, s32 s7);
}

extern "C" {
s32 func_0203e2f4();
}

extern "C" {
s32 func_020b50e8();
}

extern "C" {
s32 func_02095134(s32 v);
}

extern "C" {
void func_021145cc(void *p, u32 size);
}

extern "C" {
void func_02111df8(void *p, u32 src, u32 size);
}

extern "C" {
void func_02111d90(void *p, u32 src, u32 size);
}

extern "C" {
Unk_02050288 *func_020a8054(u32 a, s32 b, s32 c);
}

extern "C" {
void func_020a7fd8(Unk_02050288 *obj);
}

class Unk_020e2a78 {
public:
    static void func_020a7bd8(Unk_020e2a78 *p);
};

extern s32 data_021c5384;
extern u8 data_020d4694[];
extern u8 data_020d468c[];
struct Unk_02089270_Tbl { u32 unk_00; u32 unk_04; };
extern Unk_02089270_Tbl data_020d5b0c[];
extern u16 data_021ceb00[2];
extern const u8 data_020cf6ec[4];
extern const u32 data_020cf6f0[2];
extern const u8 data_020cf6e8[4];
extern const s32 data_020cf708[4];
extern const s32 data_020cf6f8[4];

class Unk_02089270 {
public:
    Unk_02089270();
    ~Unk_02089270();
    void func_02089140();
    void func_020891bc();
    BOOL func_020891d8();
    s32 func_02089210(s32 v);
    s32 func_02089228(s32 v);
    void *func_02089248();
    void func_02089260(s32 v);
    void func_02089264(s32 v);
    void func_02089268(Unk_02089270_Tbl *v);

    /* 0x00 */ u8 unk_00[0x14];
};

class Unk_020e0db4 {
public:
    Unk_020e0db4();
    virtual ~Unk_020e0db4();
    virtual void vfunc_08() = 0;
    virtual void vfunc_0c() = 0;
    virtual void vfunc_10(s32 a, s32 b);
    s32 func_02089f64();
    s32 func_02089f68();

    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08;
};

class Unk_020e1028 : public Unk_020e0db4 {
public:
    Unk_020e1028(u32 flag);
    virtual ~Unk_020e1028();
    virtual void vfunc_08();
    virtual void vfunc_0c();

    void func_0208d9d4();
    void func_0208dae4(s32 v);
    void func_0208dae8(s32 x, s32 y);

    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ Unk_02089270 unk_14;
    /* 0x28 */ Unk_02089270 unk_28;
    /* 0x3c */ s32 unk_3c;
    /* 0x40 */ u8 unk_40;
    /* 0x44 */ s32 unk_44;
};

class Unk_020e1064 : public Unk_020e0db4 {
public:
    Unk_020e1064();
    virtual ~Unk_020e1064();
    virtual void vfunc_08();
    virtual void vfunc_0c();

    void func_0208ddb8();
    void func_0208ddd8();
    void func_0208de10();
    void func_0208de30();

    /* 0x0c */ Unk_02089270 unk_0c;
    /* 0x20 */ s32 unk_20;
};

extern Unk_020e1064 data_021ceadc;

class Unk_020e1098 : public Unk_020e0db4 {
public:
    Unk_020e1098(u32 flag);
    virtual ~Unk_020e1098();
    virtual void vfunc_08();
    virtual void vfunc_0c();

    void func_0208dff4();
    void func_0208e074();
    void func_0208e08c();
    BOOL func_0208e110();
    s32 func_0208e138();
    void func_0208e13c(s32 v);
    void func_0208e1fc(s32 *outx, s32 *outy);
    void func_0208e288(s32 x, s32 y);
    void func_0208e290();
    void func_0208e2c8();
    void func_0208e2d0();
    void func_0208e2d8();

    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ s32 unk_14;
    /* 0x18 */ s32 unk_18;
    /* 0x1c */ Unk_02089270 unk_1c;
    /* 0x30 */ Unk_02089270 unk_30;
    /* 0x44 */ s32 unk_44;
    /* 0x48 */ Unk_02050288 *unk_48;
    /* 0x4c */ StrBuf unk_4c;
    /* 0x50 */ u32 unk_50[6];
    /* 0x68 */ u16 unk_68;
    /* 0x6a */ u8 unk_6a;
    /* 0x6b */ u8 unk_6b;
    /* 0x6c */ u8 unk_6c;
    /* 0x6d */ u8 unk_6d;
};

void Unk_020e1098::func_0208e2d8() { unk_6b = 1; }

void Unk_020e1098::func_0208e2d0() { unk_6c = 1; }

void Unk_020e1098::func_0208e2c8() { unk_6c = 0; }

void Unk_020e1098::func_0208e290() {
    Unk_020e2a78::func_020a7bd8((Unk_020e2a78 *)&unk_4c);
    Unk_02050288 *o = unk_48;
    if (o != NULL) {
        o->unk_10 = (u32)unk_4c.data();
        unk_48->func_02050c44();
        unk_48->func_02050c90();
        unk_6d = 1;
    }
}

void Unk_020e1098::func_0208e288(s32 x, s32 y) { unk_0c = x; unk_10 = y; }

void Unk_020e1098::func_0208e1fc(s32 *outx, s32 *outy) {
    s32 x = 0;
    s32 y = x;
    if (unk_44 == 2) {
        x = unk_1c.func_02089228(-1) - unk_1c.func_02089228(0);
        y = unk_1c.func_02089210(-1) - unk_1c.func_02089210(0);
    } else if (unk_44 == 3) {
        x = unk_1c.func_02089228(0) - unk_1c.func_02089228(-1);
        y = unk_1c.func_02089210(0) - unk_1c.func_02089210(-1);
    }
    *outx = x;
    *outy = y;
}

void Unk_020e1098::func_0208e13c(s32 v) {
    s32 i = data_020cf6e8[unk_18] + data_020cf708[v];
    s32 j = i + 1;
    s32 k = data_020cf6f8[v];
    unk_44 = v;
    unk_1c.func_02089268(&data_020d5b0c[i]);
    unk_1c.func_02089264(k);
    unk_1c.func_020891bc();
    unk_30.func_02089268(&data_020d5b0c[v ? j : j]);
    unk_30.func_02089264(k);
    unk_30.func_020891bc();
    if (v == 1) {
        unk_1c.func_02089260(0);
        unk_30.func_02089260(0);
    }
    if (v == 0) {
        func_0208e074();
    } else {
        func_0208e08c();
        unk_68 = unk_44 == 2 ? 0x7d5f : 0x50c0;
        unk_6d = 1;
    }
}

s32 Unk_020e1098::func_0208e138() { return unk_44; }

BOOL Unk_020e1098::func_0208e110() {
    if (unk_1c.func_020891d8() && unk_30.func_020891d8()) {
        return TRUE;
    }
    return FALSE;
}

void Unk_020e1098::func_0208e08c() {
    if (unk_48 == NULL) {
        unk_48 = func_020a8054(data_020cf6f0[unk_18], 6, 2);
        if (unk_48 != NULL) {
            unk_48->unk_2c = 4;
            Unk_02050288 *t = unk_48;
            t->unk_10 = (u32)unk_4c.data();
            if (unk_6a != 0) {
                unk_48->unk_50 = 2;
            }
            unk_48->unk_55 = 1;
            unk_48->func_02050c44();
            unk_48->unk_39 = 0;
            unk_48->unk_38 = data_020cf6ec[unk_18];
            unk_48->func_02050c90();
            unk_6d = 1;
        }
    }
}

void Unk_020e1098::func_0208e074() {
    if (unk_48 != NULL) {
        func_020a7fd8(unk_48);
        unk_48 = NULL;
    }
}

// ---------------------------------------------------------------------------------------------------------------------
// Unk_020e1098

void Unk_020e1098::func_0208dff4() {
    if (unk_6d == 0) {
        if (unk_68 != data_021ceb00[unk_18]) {
            unk_6d = 1;
        }
    }
    if (unk_6d != 0) {
        u32 n = data_020cf6ec[unk_18] * 2;
        func_021145cc(&unk_68, 2);
        func_02111df8(&unk_68, n, 2);
        func_02111d90(&unk_68, n, 2);
        data_021ceb00[unk_18] = unk_68;
        unk_6d = 0;
    }
}

// Declarations for data defined further down (definition order sets the data layout)
extern const s32 data_020cf6f8[4];
extern const s32 data_020cf708[4];
extern const u32 data_020cf6f0[2];
extern const u8 data_020cf6ec[4];
extern const u8 data_020cf6e8[4];
extern u16 data_021ceb00[2];

const s32 data_020cf6f8[4] = {1, 1, 1, 1};

const s32 data_020cf708[4] = {0x33, 0x33, 0x33, 0x35};

const u32 data_020cf6f0[2] = {0x14, 0x1a};

const u8 data_020cf6ec[4] = {0xe, 0xf, 0, 0};

const u8 data_020cf6e8[4] = {0, 4, 0, 0};

u16 data_021ceb00[2];
