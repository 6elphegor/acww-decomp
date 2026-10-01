#include "types.h"

extern "C" {
extern u8 data_020d5b0c[];
}

extern const s32 data_020cf6c8[4];
extern const s32 data_020cf6d8[4];

struct Unk_02089270_Tbl;

class Unk_02089270 {
public:
    Unk_02089270();
    ~Unk_02089270();
    void func_02089140();
    void func_020891bc();
    BOOL func_020891d8();
    s32 func_02089210(s32 v);
    s32 func_02089228(s32 v);
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
    BOOL func_0208d9a8();
    s32 func_0208d9d0();
    void func_0208d9d4(s32 idx);
    void func_0208da58(s32 *a, s32 *b);

    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ Unk_02089270 unk_14;
    /* 0x28 */ Unk_02089270 unk_28;
    /* 0x3c */ s32 unk_3c;
    /* 0x40 */ u8 unk_40;
    /* 0x44 */ s32 unk_44;
};

enum Unk_0208d9d4_E { Unk_0208d9d4_E0 = 0 };

void Unk_020e1028::func_0208da58(s32 *a, s32 *b) {
    s32 x = 0;
    s32 y = 0;
    if (unk_3c == 2) {
        x = unk_14.func_02089228(-1);
        x -= unk_14.func_02089228(0);
        s32 t = unk_14.func_02089210(-1);
        y = t - unk_14.func_02089210(0);
    } else if (unk_3c == 3) {
        x = unk_14.func_02089228(0);
        x -= unk_14.func_02089228(-1);
        s32 t = unk_14.func_02089210(0);
        y = t - unk_14.func_02089210(-1);
    }
    *a = x;
    *b = y;
}

void Unk_020e1028::func_0208d9d4(s32 idx) {
    Unk_0208d9d4_E a;
    Unk_0208d9d4_E n;
    s32 f;
    a = (Unk_0208d9d4_E)data_020cf6d8[idx];
    n = (Unk_0208d9d4_E)(a + 1);
    f = data_020cf6c8[idx];
    unk_3c = idx;
    unk_14.func_02089268((Unk_02089270_Tbl *)(data_020d5b0c + a * 8));
    unk_14.func_02089264(f);
    unk_14.func_020891bc();
    unk_28.func_02089268((Unk_02089270_Tbl *)(data_020d5b0c + n * 8));
    unk_28.func_02089264(f);
    unk_28.func_020891bc();
    if (idx == 1) {
        unk_14.func_02089260(0);
        unk_28.func_02089260(0);
    }
}

extern const s32 data_020cf6c8[4] = {1, 1, 1, 1};
extern const s32 data_020cf6d8[4] = {0x2f, 0x2f, 0x2f, 0x31};
