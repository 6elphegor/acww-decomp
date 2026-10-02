#include "types.h"

// 0x0209eb0c-0x0209eb94: the last 13 functions of the file that U193 (0x0209e394-0x0209eb0c) comes from
// (members of the 4-byte record class Unk_0209ea50 whose first methods are in U193, and of Unk_0209eb0c).

extern "C" {
u32 func_02063b8c(s32 n);
}

class Unk_0209ea50 {
public:
    BOOL func_0209ea50();
    void func_0209ea60();
    void func_0209eacc(void *src);
    void func_0209eaf4();
    u8 func_0209eb14();
    void func_0209eb18(u8 v);
    void func_0209eb1c();
    BOOL func_0209eb48();
    BOOL func_0209eb5c();
    void func_0209eb6c();
    void func_0209eb74();
    void func_0209eb7c();
    void func_0209eb84();
    void func_0209eb8c();
    void func_0209eb90();

    /* 0x00 */ u8 unk_00;
    /* 0x01 */ u8 unk_01;
    /* 0x02 */ u8 unk_02;
    /* 0x03 */ u8 unk_03;
};

class Unk_0209eb0c {
public:
    u16 func_0209eb0c();
    void func_0209eb10(u16 v);
    u16 unk_00;
};

void Unk_0209ea50::func_0209eb90() {}

void Unk_0209ea50::func_0209eb8c() {}

void Unk_0209ea50::func_0209eb84() {
    unk_02 = 2;
}

void Unk_0209ea50::func_0209eb7c() {
    unk_02 = 0;
}

void Unk_0209ea50::func_0209eb74() {
    unk_02 = 0x1c;
}

void Unk_0209ea50::func_0209eb6c() {
    unk_02 = 2;
}

BOOL Unk_0209ea50::func_0209eb5c() {
    if (unk_02 == 2) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_0209ea50::func_0209eb48() {
    if (unk_02 == 2 || unk_02 == 0x1c) {
        return FALSE;
    }
    return TRUE;
}

void Unk_0209ea50::func_0209eb1c() {
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

void Unk_0209ea50::func_0209eb18(u8 v) {
    unk_03 = v;
}

u8 Unk_0209ea50::func_0209eb14() {
    return unk_03;
}

void Unk_0209eb0c::func_0209eb10(u16 v) {
    unk_00 = v;
}

u16 Unk_0209eb0c::func_0209eb0c() {
    return unk_00;
}
