#include "types.h"

extern "C" {
void FS_InitFile(void *);
s32 FS_OpenFile(void *, const char *);
void FS_ReadFile(void *, void *, s32);
void FS_CloseFile(void *);
void OS_ResetSystem(s32);
}

u8 gBuildTime[0x20];

class CommCautionWindowView {
public:
    void execReset();
    void enterReset();

    u8 pad_00[0xbc];
    s32 unk_bc;
    s32 unk_c0;
    s32 unk_c4;
    u8 unk_c8;
};

void CommCautionWindowView::enterReset() {
    unk_bc = 7;
    unk_c0 = 1;
    unk_c8 = 1;
}

void CommCautionWindowView::execReset() {
    unk_c0 = unk_c0 - 1;
    if (unk_c0 <= 0) {
        OS_ResetSystem(0);
    }
}

extern "C" void Main_LoadBuildTime() {
    u8 buf[0x4c];
    FS_InitFile(buf);
    if (FS_OpenFile(buf, "/BUILDTIME") == 1) {
        FS_ReadFile(buf, gBuildTime, 0x20);
        FS_CloseFile(buf);
    }
}
