#include "types.h"

extern "C" {
void FS_InitFile(void *);
s32 FS_OpenFile(void *, const char *);
void FS_ReadFile(void *, void *, s32);
void FS_CloseFile(void *);
void OS_ResetSystem(s32);
}

u8 data_021c21e4[0x20];

class Unk_020376f4 {
public:
    void func_020376f4();
    void func_0203771c();

    u8 pad_00[0xbc];
    s32 unk_bc;
    s32 unk_c0;
    s32 unk_c4;
    u8 unk_c8;
};

void Unk_020376f4::func_0203771c() {
    unk_bc = 7;
    unk_c0 = 1;
    unk_c8 = 1;
}

void Unk_020376f4::func_020376f4() {
    unk_c0 = unk_c0 - 1;
    if (unk_c0 <= 0) {
        OS_ResetSystem(0);
    }
}

extern "C" void func_020376c0() {
    u8 buf[0x4c];
    FS_InitFile(buf);
    if (FS_OpenFile(buf, "/BUILDTIME") == 1) {
        FS_ReadFile(buf, data_021c21e4, 0x20);
        FS_CloseFile(buf);
    }
}
