#include "types.h"

struct Unk_0206fd10_Mtx {
    s32 m[9];
    s32 x;
    s32 y;
    s32 z;
};

struct Unk_0206fde4_Mtx {
    s32 v[12];
};

class Unk_0206fe80 {
public:
    BOOL func_02070358(u16 *id);
};

extern "C" {
extern Unk_0206fd10_Mtx data_021cb69c;
s32 Item_GetFossilGroup(u16 *p);
}

Unk_0206fde4_Mtx data_021cb6cc[31];

static inline u32 Unk_0206fe34_Id(u32 i) {
    if (i < 0x34) {
        return i * 4 + 0x450c;
    }
    return 0x450c;
}

extern "C" s32 func_0206fe34(u32 a, s32 b) {
    s32 cnt = 0;
    u32 i;
    for (i = 0; i < 0x34; i++) {
        u16 v = Unk_0206fe34_Id(i);
        if (b == Item_GetFossilGroup(&v)) {
            if (((Unk_0206fe80 *)a)->func_02070358(&v)) {
                cnt++;
            }
        }
    }
    return cnt;
}

extern "C" void func_0206fe0c(u32 i) {
    data_021cb6cc[i] = *(Unk_0206fde4_Mtx *)&data_021cb69c;
}

extern "C" void func_0206fde4(u32 i) {
    *(Unk_0206fde4_Mtx *)&data_021cb69c = data_021cb6cc[i];
}
