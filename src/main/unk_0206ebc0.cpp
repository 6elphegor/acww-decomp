#include "types.h"

extern "C" {
u32 func_0209750c();
s32 func_02098750(u32 a);
void func_0209909c(u16 *a, u32 b, u32 c);
extern u16 data_021cb548[];
extern u8 data_021cb528[];
}

extern "C" void func_0206ebc0() {
    u16 tmp[1];
    s32 i;
    func_02098750(func_0209750c());
    tmp[0] = 0xfff1;
    for (i = 0; i < 15; i++) {
        tmp[0] = data_021cb548[i];
        func_0209909c(tmp, data_021cb528[i], i);
    }
}
