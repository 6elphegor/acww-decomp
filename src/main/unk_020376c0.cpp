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
    s32 state;
    s32 timer;
    s32 lineIndex;
    u8 modelVisible;
};

void CommCautionWindowView::enterReset() {
    state = 7;
    timer = 1;
    modelVisible = 1;
}

void CommCautionWindowView::execReset() {
    timer = timer - 1;
    if (timer <= 0) {
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
