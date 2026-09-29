#include "types.h"

extern "C" {
s32 func_02067a84(void *p, u8 *a, void *b);
s32 func_020668a0(void *p);
s32 func_02066a50(void *p);
s32 func_02067254(void *p);
}
extern u8 data_021edb60;

class Unk_020e2a30 {
public:
    Unk_020e2a30();
    virtual ~Unk_020e2a30();
    virtual void vfunc_08();
    void func_020a710c(const char *src);
    /* 0x04 */ char unk_04[0x1a];
    /* 0x1e */ u8 unk_1e;
};

class Unk_020ddcf0 : public Unk_020e2a30 {
public:
    Unk_020ddcf0();
    virtual ~Unk_020ddcf0();
    virtual void vfunc_08();
};

class Unk_020660f8 {
public:
    void func_0206684c();

    u8 pad_00[0x13b0];
    /* 0x13b0 */ Unk_020ddcf0 *unk_13b0;
    u8 pad_13b4[0x19f7 - 0x13b4];
    /* 0x19f7 */ u8 unk_19f7;
    /* 0x19f8 */ s8 unk_19f8;
};

void Unk_020660f8::func_0206684c() {
    unk_13b0->unk_1e = unk_19f7;
    if (unk_19f8 != 0) {
        unk_13b0->func_020a710c((const char *)&unk_19f8);
    }
    func_02067a84(this, &data_021edb60, 0);
    func_020668a0(this);
    func_02066a50(this);
    func_02067254(this);
}
