#include "types.h"

extern "C" {
void NNS_G3dGetTex();
}

class Unk_020b83b0 {
public:
    u32 unk_04;
    u32 unk_08;
    u8 unk_0c;

    Unk_020b83b0() : unk_04(0), unk_08(0), unk_0c(0xff) {}
};

class VramTask : public Unk_020b83b0 {
public:
    u8 unk_0d;
    u8 unk_0e;
    u8 unk_0f;

    VramTask();
    virtual BOOL execute() = 0;
};

extern "C" void Wallpaper_GetTex() {
    NNS_G3dGetTex();
}

VramTask::VramTask() {
    unk_0d = 0;
    unk_0e = 0xa;
    unk_0f = 1;
}
