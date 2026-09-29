#include "types.h"

class Unk_020a72b0 {
public:
    void func_020a76bc(u8 *a, u8 *b, u8 *c, u8 *d);

    /* 0x00 */ s32 unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ u32 unk_08;
    /* 0x0c */ char *unk_0c;
    /* 0x10 */ u8 *unk_10;
};

class Unk_020e2b08 {
public:
    virtual ~Unk_020e2b08();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void vfunc_10(u32 c);
    virtual void vfunc_14(u8 *p);

    /* 0x04 */ u8 *unk_04;
    /* 0x08 */ u8 unk_08[0x1c];
};

class Unk_02068f10_Obj {
public:
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
    virtual u8 *vfunc_0c();
    virtual void vfunc_10();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_1c();
    virtual void vfunc_20();
    virtual void vfunc_24();
    virtual void vfunc_28();
    virtual void vfunc_2c();
    virtual void vfunc_30();
    virtual void vfunc_34(s32 a, s32 b);
};

class Unk_020ddccc : public Unk_020e2b08 {
public:
    void func_02068e9c();
    s32 func_0206ac98(u8 *p);

    /* 0x24 */ u8 *unk_24;
    u8 pad_28[0x10];
    /* 0x38 */ Unk_020a72b0 unk_38;
};

static inline Unk_02068f10_Obj *Sel(u8 *ctx) { return *(Unk_02068f10_Obj **)(ctx + 0x13b0); }

void Unk_020ddccc::func_02068e9c() {
    u8 r[5];
    Sel(unk_24)->vfunc_34(8, 4);
    unk_38.func_020a76bc(&r[1], &r[2], &r[3], &r[4]);
    s32 v = *(s32 *)(unk_24 + 0x1718);
    s32 i = 0;
    if (v == 0) {
    } else if (v == 1) i = 1;
    else if (v == 2) i = 2;
    else if (v == 3) i = 3;
    u8 *q = &r[1];
    r[0] = q[i];
    func_0206ac98(r);
}
