#include "types.h"
#include "sys/Unk_020b83b0.h"

extern "C" {
void NNS_G3dGetTex();
}


class VramTask : public Unk_020b83b0 {
public:
    u8 state;
    u8 kind;
    u8 cost;

    VramTask();
    virtual BOOL execute() = 0;
};

extern "C" void Wallpaper_GetTex() {
    NNS_G3dGetTex();
}

VramTask::VramTask() {
    state = 0;
    kind = 0xa;
    cost = 1;
}
