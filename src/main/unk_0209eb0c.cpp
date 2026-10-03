#include "types.h"

// 0x0209eb0c-0x0209eb94: the last 13 functions of the file that U193 (0x0209e394-0x0209eb0c) comes from
// (members of the 4-byte record class SaveRecord4 whose first methods are in U193, and of SaveChecksum).

extern "C" {
u32 func_02063b8c(s32 n);
}

class SaveRecord4 {
public:
    BOOL func_0209ea50();
    void func_0209ea60();
    void func_0209eacc(void *src);
    void func_0209eaf4();
    u8 getStamp();
    void setStamp(u8 v);
    void newStamp();
    BOOL isStateUnset();
    BOOL isStateValid();
    void setStateValidAlt();
    void markInterrupted();
    void clearState();
    void setStateValid();
    void func_0209eb8c();
    void func_0209eb90();

    /* 0x00 */ u8 unk_00;
    /* 0x01 */ u8 unk_01;
    /* 0x02 */ u8 unk_02;
    /* 0x03 */ u8 unk_03;
};

class SaveChecksum {
public:
    u16 get();
    void set(u16 v);
    u16 unk_00;
};

void SaveRecord4::func_0209eb90() {}

void SaveRecord4::func_0209eb8c() {}

void SaveRecord4::setStateValid() {
    unk_02 = 2;
}

void SaveRecord4::clearState() {
    unk_02 = 0;
}

void SaveRecord4::markInterrupted() {
    unk_02 = 0x1c;
}

void SaveRecord4::setStateValidAlt() {
    unk_02 = 2;
}

BOOL SaveRecord4::isStateValid() {
    if (unk_02 == 2) {
        return TRUE;
    }
    return FALSE;
}

BOOL SaveRecord4::isStateUnset() {
    if (unk_02 == 2 || unk_02 == 0x1c) {
        return FALSE;
    }
    return TRUE;
}

void SaveRecord4::newStamp() {
    u8 old = unk_03;
    unk_03 = func_02063b8c(0xff);
    if (unk_03 == old) {
        if (unk_03 < 0xff) {
            unk_03++;
        } else {
            unk_03--;
        }
    }
}

void SaveRecord4::setStamp(u8 v) {
    unk_03 = v;
}

u8 SaveRecord4::getStamp() {
    return unk_03;
}

void SaveChecksum::set(u16 v) {
    unk_00 = v;
}

u16 SaveChecksum::get() {
    return unk_00;
}
