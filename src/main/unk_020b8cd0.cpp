#include "types.h"
#include "sys/PrioListNode.h"
#include "gfx/VramTask.h"

extern "C" {
void NNS_G3dGetTex();
}



extern "C" void Wallpaper_GetTex() {
    NNS_G3dGetTex();
}

VramTask::VramTask() {
    state = 0;
    kind = 0xa;
    cost = 1;
}
