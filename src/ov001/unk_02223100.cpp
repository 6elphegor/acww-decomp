// mwcc-flags: -O4,p
#include "types.h"

#pragma thumb off

struct Unk_ov001_0222df2c_S {
    u8 pad_000[0x200];
    u16 unk_200;
    u8 pad_202[2];
    u32 unk_204;
    u8 pad_208[0x600 - 0x208];
    u8 pad_600[0x48];
    u16 unk_648;
    u16 unk_64a;
    u8 pad_64c[0xa90 - 0x64c];
    u8 unk_a90;
    u8 unk_a91;
    u8 pad_a92[6];
    s32 unk_a98;
    s32 unk_a9c;
    u32 unk_aa0[1];
    u8 *unk_aa4;
    u8 pad_aa8[4];
    u8 unk_aac;
    u8 pad_aad[3];
    void *unk_ab0;
    u8 unk_ab4[0x14];
    void *unk_ac8;
};

extern "C" {
extern Unk_ov001_0222df2c_S *data_ov001_0222df2c;

s32 func_02115fb4(void *, s32, s32);
s32 func_ov001_02220ad8(s32);
s32 func_ov001_02220ba0();
s32 func_ov001_0222230c();
s32 func_ov001_022218a4();
s32 func_ov001_02221bb4(s32, u16, u16);
s32 func_ov001_02222f94(s32, s32, void *);
s32 func_ov001_02222e9c();
s32 func_ov001_02222e84();
s32 func_ov001_02220d18();
s32 func_ov001_02220cb8(s32);
s32 func_ov001_022216d0(void *, u16);
s32 func_ov001_02221200();
s32 func_ov001_022210f0();
s32 func_ov001_022210d0();
s32 func_ov001_02221fd0();
s32 func_ov001_02222228();
s32 func_ov001_02221a84();
s32 func_ov001_02221908();
s32 func_ov001_02221734(void *, u16);
s32 func_ov001_02221ba0(void *);
s32 func_02124c40();
s32 func_02123008(s32);
void func_0206d49c();
s32 func_ov001_02223ca8();

void func_ov001_02223100() {
    func_02115fb4((u8 *)data_ov001_0222df2c + 0x100, 0, 0x100);
    func_02115fb4(data_ov001_0222df2c, 0, 0x100);
    data_ov001_0222df2c->unk_ab0 = data_ov001_0222df2c;
}

s32 func_ov001_02223150(s32 a) {
    s32 r = func_ov001_02220ad8(a + 10);
    if (r == 0) return 0;
    data_ov001_0222df2c->unk_aa0[r - 1] = func_ov001_02220ba0();
    return 1;
}

s32 func_ov001_02223194() {
    if (func_ov001_0222230c() != 1) return 0;
    func_ov001_022218a4();
    data_ov001_0222df2c->unk_a90 = 1;
    return 1;
}

void func_ov001_022231d8() {
    data_ov001_0222df2c->unk_a90 = 12;
}

void func_ov001_022231f0() {
    switch (func_ov001_0222230c()) {
    case 1:
        func_ov001_02221bb4(4, data_ov001_0222df2c->unk_648 + 1, data_ov001_0222df2c->unk_64a);
        return;
    case 4:
    case 5:
    case 6: {
        s32 v = data_ov001_0222df2c->unk_200;
        func_ov001_02222f94(0, v, data_ov001_0222df2c->unk_aa4 + (v % 16) * 0x40);
        func_ov001_02222e9c();
        if (data_ov001_0222df2c->unk_a90 == 0x1b) return;
        if (data_ov001_0222df2c->unk_204 > 0x1e0) {
            data_ov001_0222df2c->unk_a90 = 0x1b;
            return;
        }
        if (func_ov001_02222e84() == 0x10 || func_ov001_02222e84() == 0x20) {
            func_ov001_02222e84();
            data_ov001_0222df2c->unk_a90 = 10;
            return;
        }
        if (func_ov001_02222e84() == 0x40) { data_ov001_0222df2c->unk_a90 = 11; return; }
        if (func_ov001_02222e84() == 0xff) { data_ov001_0222df2c->unk_a90 = 0x1b; return; }
        if (func_ov001_02222e84() == 0x50) { data_ov001_0222df2c->unk_a90 = 0x15; return; }
        if (func_ov001_02222e84() == 0x60) { data_ov001_0222df2c->unk_a90 = 0x18; return; }
        if (func_ov001_02222e84() == 0x70) { data_ov001_0222df2c->unk_a90 = 0x1b; return; }
        if (func_ov001_02222e84() == 0) { data_ov001_0222df2c->unk_a90 = 8; return; }
        if (func_ov001_02222e84() == 0xbd) data_ov001_0222df2c->unk_a90 = 9;
        else data_ov001_0222df2c->unk_a90 = 0x1f;
        break;
    }
    }
}

void func_ov001_02223408() {
    func_ov001_02223100();
    func_ov001_02221ba0((void *)func_ov001_02223150);
    data_ov001_0222df2c->unk_a90 = 8;
}

void func_ov001_02223440() {
    switch (func_ov001_02220d18()) {
    case 1:
        func_ov001_022216d0((u8 *)data_ov001_0222df2c + 0xab4, data_ov001_0222df2c->unk_64a);
        return;
    case 2:
        if (func_ov001_02220cb8(2) != 0) { data_ov001_0222df2c->unk_a90 = 5; return; }
        if (func_ov001_02220cb8(3) != 0 || func_ov001_02220cb8(4) != 0) { data_ov001_0222df2c->unk_a90 = 6; return; }
        if (data_ov001_0222df2c->unk_a90 != 5) return;
        if (func_ov001_02220cb8(2) == 0) data_ov001_0222df2c->unk_a90 = 0xd;
        return;
    case 3:
        if (func_ov001_02221200() != 0) { func_ov001_022210f0(); return; }
        if ((u8)(data_ov001_0222df2c->unk_a90 + 0xfa) > 1) return;
        if (func_ov001_02220cb8(3) == 0) data_ov001_0222df2c->unk_a90 = 0x12;
        return;
    case 5:
        data_ov001_0222df2c->unk_a90 = 7;
        return;
    case 7:
        func_ov001_022210d0();
        data_ov001_0222df2c->unk_a90 = 1;
        return;
    case 0:
        switch (func_ov001_0222230c()) {
        case 1: func_ov001_022218a4(); return;
        case 0: data_ov001_0222df2c->unk_a90 = 0x1f; return;
        case 3: return;
        default: data_ov001_0222df2c->unk_a90 = 0x1f; return;
        }
    }
}

void func_ov001_02223664() {
    func_ov001_02221734(data_ov001_0222df2c->unk_ac8, data_ov001_0222df2c->unk_648);
}

void func_ov001_02223688() {
    switch (func_ov001_0222230c()) {
    case 1:
        func_ov001_02222228();
        return;
    case 7:
        data_ov001_0222df2c->unk_64a = func_ov001_02221fd0();
        data_ov001_0222df2c->unk_a98 = 0;
        data_ov001_0222df2c->unk_a90 = 3;
        return;
    case 0:
        data_ov001_0222df2c->unk_a98 = 0;
        data_ov001_0222df2c->unk_a90 = 3;
        return;
    case 9:
        func_ov001_02221a84();
        return;
    default:
        func_0206d49c();
    case 3:
        return;
    }
}

s32 func_ov001_0222375c() {
    return func_02123008(1);
}

void func_ov001_0222376c(u8 *a, u8 *b) {
    *a = data_ov001_0222df2c->unk_a90;
    if (data_ov001_0222df2c->unk_a90 != data_ov001_0222df2c->unk_a91) *b = 1;
    else *b = 0;
    data_ov001_0222df2c->unk_a91 = data_ov001_0222df2c->unk_a90;
}

void func_ov001_022237b4() {
    switch (data_ov001_0222df2c->unk_a90) {
    case 1:
        if (data_ov001_0222df2c->unk_aac == 1) {
            data_ov001_0222df2c->unk_aac = 0;
            func_ov001_02223ca8();
            return;
        }
        if (data_ov001_0222df2c->unk_aac != 2) return;
        data_ov001_0222df2c->unk_aac = 0;
        data_ov001_0222df2c->unk_a90 = 0x22;
        return;
    case 2:
        func_ov001_02223688();
        return;
    case 3:
        func_ov001_02223664();
        data_ov001_0222df2c->unk_a90 = 4;
        return;
    case 4:
        data_ov001_0222df2c->unk_a98++;
        func_ov001_02223440();
        return;
    case 5:
    case 6:
        func_ov001_02223440();
        return;
    case 7:
        func_ov001_02223408();
        return;
    case 8:
    case 9:
    case 10:
        func_ov001_022231f0();
        return;
    case 11:
        func_ov001_022231d8();
        return;
    case 16:
        data_ov001_0222df2c->unk_a9c = 0;
        data_ov001_0222df2c->unk_a90 = 0x11;
        return;
    case 17:
        if ((u32)data_ov001_0222df2c->unk_a9c++ <= 0x1e) return;
        func_ov001_02223194();
        return;
    case 18:
        func_02124c40();
        data_ov001_0222df2c->unk_a9c = 0;
        data_ov001_0222df2c->unk_a90 = 0x16;
        return;
    case 19:
        if ((u32)data_ov001_0222df2c->unk_a9c++ <= 0x1e) return;
        if (func_ov001_0222230c() != 1) return;
        func_ov001_022218a4();
        data_ov001_0222df2c->unk_a90 = 0x14;
        return;
    case 21:
        func_ov001_02221908();
        data_ov001_0222df2c->unk_a9c = 0;
        data_ov001_0222df2c->unk_a90 = 0x16;
        return;
    case 22:
        if ((u32)data_ov001_0222df2c->unk_a9c++ <= 0x1e) return;
        if (func_ov001_0222230c() != 1) return;
        func_ov001_022218a4();
        data_ov001_0222df2c->unk_a90 = 0x17;
        return;
    case 24:
        func_ov001_02221908();
        data_ov001_0222df2c->unk_a9c = 0;
        data_ov001_0222df2c->unk_a90 = 0x19;
        return;
    case 25:
        if ((u32)data_ov001_0222df2c->unk_a9c++ <= 0x1e) return;
        if (func_ov001_0222230c() != 1) return;
        func_ov001_022218a4();
        data_ov001_0222df2c->unk_a90 = 0x1a;
        return;
    case 27:
        func_ov001_02221908();
        data_ov001_0222df2c->unk_a9c = 0;
        data_ov001_0222df2c->unk_a90 = 0x1c;
        return;
    case 28: {
        u32 c = data_ov001_0222df2c->unk_a9c++;
        if (c <= 0x1e) return;
        if (func_ov001_0222230c() == 1) {
            func_ov001_022218a4();
            data_ov001_0222df2c->unk_a90 = 0x1d;
            return;
        }
        u32 t = data_ov001_0222df2c->unk_a9c;
        if (t % 30 != 1) return;
        if (t <= 0x37) return;
        func_ov001_02221908();
        return;
    }
    case 32:
        func_ov001_02221908();
        data_ov001_0222df2c->unk_a9c = 0;
        data_ov001_0222df2c->unk_a90 = 0x21;
        return;
    case 33:
        if ((u32)data_ov001_0222df2c->unk_a9c++ <= 0x1e) return;
        if (func_ov001_0222230c() != 1) return;
        func_ov001_022218a4();
        data_ov001_0222df2c->unk_a90 = 0x22;
        return;
    case 30:
        func_ov001_02221908();
        break;
    case 34:
        break;
    }
}
}
