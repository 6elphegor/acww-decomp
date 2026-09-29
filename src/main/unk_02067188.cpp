#include "types.h"

extern "C" {
s32 func_02066f7c(void *p);
s32 func_02066f08(void *p);
s32 func_020670e4(void *p);
s32 func_02067098(void *p);
s32 func_02067060(void *p);
s32 func_02067020(void *p);
s32 func_02066fd4(void *p);
s32 func_02066e90(void *p);
s32 func_02066e40(void *p);
s32 func_02066df4(void *p);
s32 func_02066da0(void *p);
s32 func_02066d4c(void *p);
}

class Unk_020660f8 {
public:
    void func_02067188();
    void func_020671ec();

    u8 pad_00[0x12c0];
    /* 0x12c0 */ u8 unk_12c0[0x30];
};

class Unk_020ddccc {
public:
    void func_0206b110();
};

void Unk_020660f8::func_02067188() {
    ((Unk_020ddccc *)unk_12c0)->func_0206b110();
    func_02066f7c(this);
    func_02066f08(this);
    func_020670e4(this);
    func_02067098(this);
    func_02067060(this);
    func_02067020(this);
    func_02066fd4(this);
    func_02066e90(this);
    func_02066e40(this);
    func_02066df4(this);
    func_02066da0(this);
    func_02066d4c(this);
    func_020671ec();
}
