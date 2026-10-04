#include "types.h"
#include "gfx/Unk_0206fd10_Mtx.h"
#include "save/MuseumData.h"




extern "C" {
extern Unk_0206fd10_Mtx data_021cb69c;
s32 Item_GetFossilGroup(u16 *p);
}

Unk_0206fde4_Mtx sCpuMtxStack[31];

static inline u32 Unk_0206fe34_Id(u32 i) {
    if (i < 0x34) {
        return i * 4 + 0x450c;
    }
    return 0x450c;
}

extern "C" s32 Museum_CountDonatedFossilsInGroup(u32 a, s32 b) {
    s32 cnt = 0;
    u32 i;
    for (i = 0; i < 0x34; i++) {
        u16 v = Unk_0206fe34_Id(i);
        if (b == Item_GetFossilGroup(&v)) {
            if (((MuseumData *)a)->isDonated(&v)) {
                cnt++;
            }
        }
    }
    return cnt;
}

extern "C" void CpuMtx_StoreToStack(u32 i) {
    sCpuMtxStack[i] = *(Unk_0206fde4_Mtx *)&data_021cb69c;
}

extern "C" void CpuMtx_RestoreFromStack(u32 i) {
    *(Unk_0206fde4_Mtx *)&data_021cb69c = sCpuMtxStack[i];
}
