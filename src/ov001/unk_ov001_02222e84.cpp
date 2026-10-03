// mwcc-flags: -O4,p
#include "types.h"

#pragma thumb off

struct Unk_ov001_0222df2c_Rec {
    u16 unk_00;
    u8 pad_02[0x42];
};

struct Unk_ov001_0222df2c {
    u32 pad_000[0x40];
    Unk_ov001_0222df2c_Rec unk_100[2];
    u8 pad_188[0x200 - 0x188];
    u16 unk_200;
    u16 unk_202;
    u32 unk_204;
    u32 unk_208[16];
    u8 pad_248[0x648 - 0x248];
    u16 unk_648;
    u16 unk_64a;
    u8 unk_64c[0xa50 - 0x64c];
    u8 unk_a50[0x40];
    u8 unk_a90;
    u8 unk_a91;
    u8 unk_a92;
    u8 unk_a93;
    u32 unk_a94;
    u32 unk_a98;
    u32 unk_a9c;
    u32 unk_aa0[1];
    u8 *unk_aa4;
    u8 pad_aa8[4];
    u8 unk_aac;
    u8 pad_aad[3];
    void *unk_ab0;
    u32 unk_ab4;
    u32 unk_ab8;
    u32 unk_abc;
    u32 unk_ac0;
    u32 unk_ac4;
    u32 unk_ac8;
    u8 unk_acc;
    u8 pad_acd[0x33];
    u8 unk_b00[1];
};

extern "C" {
void MI_CpuFill8(void *, s32, s32);
void MI_CpuCopy8(void *, void *, s32);
void MB_End();
s32 MB_CommGetChildUser(s32);
void Fatal_Trap();
u64 OS_GetTick();
u32 WM_GetNextTgid();
void func_020fefb0(void *);

s32 func_ov001_02220ad8(s32);
s32 func_ov001_02220ba0();
s32 func_ov001_02220d18();
s32 func_ov001_02220cb8(s32);
s32 func_ov001_02221200();
s32 func_ov001_022210f0();
s32 func_ov001_022210d0();
void func_ov001_02221278();
s32 func_ov001_022216d0(void *, u16);
s32 func_ov001_02221734(void *, u16);
s32 func_ov001_022218a4();
s32 func_ov001_02221908();
s32 func_ov001_02221a84();
s32 func_ov001_02221ab4(void *);
void *func_ov001_02221b74(u32);
void func_ov001_02221ba0(void *);
s32 func_ov001_02221bb4(s32, u16, u16);
void func_ov001_02221e48();
void func_ov001_02221854(void *);
s32 func_ov001_02221fd0();
s32 func_ov001_02222228();
s32 func_ov001_0222230c();
s32 func_ov001_02222320();
void func_ov001_02222334(u32);
u8 *func_ov001_0221e014();

s32 func_ov001_02222e84();
void func_ov001_02222e9c();
void func_ov001_02222f94(u32 a, u32 b, void *src);
void func_ov001_02223100();
s32 func_ov001_02223150(s32 a);
s32 func_ov001_02223194();
void func_ov001_022231d8();
void func_ov001_022231f0();
void func_ov001_02223408();
void func_ov001_02223440();
void func_ov001_02223664();
void func_ov001_02223688();
void func_ov001_02223d10();
BOOL func_ov001_02223ca8();
}

extern "C" Unk_ov001_0222df2c *data_ov001_0222df2c = 0;

#define H (data_ov001_0222df2c)

void func_ov001_02223d10();

extern "C" void func_ov001_02223ecc(Unk_ov001_0222df2c *self, u32 *a) {
    data_ov001_0222df2c = self;
    func_ov001_02221854(self->unk_b00);
    data_ov001_0222df2c->unk_648 = 0;
    data_ov001_0222df2c->unk_64a = 0;
    data_ov001_0222df2c->unk_a90 = 1;
    data_ov001_0222df2c->unk_a91 = 1;
    data_ov001_0222df2c->unk_a9c = 0;
    func_ov001_02223100();
    data_ov001_0222df2c->unk_ab4 = a[0];
    data_ov001_0222df2c->unk_ab8 = a[1];
    data_ov001_0222df2c->unk_abc = a[2];
    data_ov001_0222df2c->unk_ac0 = a[3];
    data_ov001_0222df2c->unk_ac4 = a[4];
    data_ov001_0222df2c->unk_ac8 = a[5];
    data_ov001_0222df2c->unk_a92 = *(u8 *)&a[6];
    data_ov001_0222df2c->unk_acc = 2;
    OS_GetTick();
    func_020fefb0(data_ov001_0222df2c->unk_64c);
    OS_GetTick();
    data_ov001_0222df2c->unk_aa4 = func_ov001_0221e014();
}

extern "C" BOOL func_ov001_02223d9c() {
    Unk_ov001_0222df2c *s = data_ov001_0222df2c;
    u32 st = s->unk_a90;
    if (st == 1 || st == 0x14 || st == 0x17 || st == 0x1a || st == 0x1d) {
        s->unk_a90 = 0x22;
        data_ov001_0222df2c->unk_aac = 0;
        return TRUE;
    }
    if (st == 4 || st == 5 || st == 6 || st == 0xd) {
        if (st == 4) {
            if (s->unk_a98 < 6) {
                return FALSE;
            }
        }
        MB_End();
        data_ov001_0222df2c->unk_a90 = 0x10;
        data_ov001_0222df2c->unk_aac = 2;
        return TRUE;
    }
    if ((u8)(st + 0xf7) <= 1) {
        s->unk_a90 = 0x20;
        return TRUE;
    }
    if (st == 0xc) {
        s->unk_a90 = 0x22;
        return TRUE;
    }
    BOOL r = FALSE;
    if (st == 2) {
        r = FALSE;
    } else {
        r = st - st;
    }
    return r;
}

extern "C" void func_ov001_02223d10() {
    func_ov001_02222334(data_ov001_0222df2c->unk_ac8);
    data_ov001_0222df2c->unk_a90 = 1;
    data_ov001_0222df2c->unk_648 = WM_GetNextTgid();
    MI_CpuCopy8(data_ov001_0222df2c->unk_aa4, data_ov001_0222df2c->unk_a50, 0x40);
    data_ov001_0222df2c->unk_a93 = 0;
    data_ov001_0222df2c->unk_204 = 0;
    data_ov001_0222df2c->unk_648 = data_ov001_0222df2c->unk_648 + 1;
}

extern "C" BOOL func_ov001_02223ca8() {
    u32 st = data_ov001_0222df2c->unk_a90;
    if (st == 1 || st == 0x1a || st == 0x1d) {
        func_ov001_02223d10();
        func_ov001_02221e48();
        data_ov001_0222df2c->unk_a90 = 2;
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL func_ov001_02223c60() {
    Unk_ov001_0222df2c *s = data_ov001_0222df2c;
    if (s->unk_a90 != 5) {
        return FALSE;
    }
    s->unk_a90 = 6;
    func_ov001_02221278();
    return TRUE;
}

extern "C" void func_ov001_022237b4() {
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
        MB_End();
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

extern "C" void func_ov001_0222376c(u8 *a, u8 *b) {
    *a = data_ov001_0222df2c->unk_a90;
    if (data_ov001_0222df2c->unk_a90 != data_ov001_0222df2c->unk_a91) *b = 1;
    else *b = 0;
    data_ov001_0222df2c->unk_a91 = data_ov001_0222df2c->unk_a90;
}

extern "C" s32 func_ov001_0222375c() {
    return MB_CommGetChildUser(1);
}

extern "C" void func_ov001_02223688() {
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
        Fatal_Trap();
    case 3:
        return;
    }
}

extern "C" void func_ov001_02223664() {
    func_ov001_02221734((void *)data_ov001_0222df2c->unk_ac8, data_ov001_0222df2c->unk_648);
}

extern "C" void func_ov001_02223440() {
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

extern "C" void func_ov001_02223408() {
    func_ov001_02223100();
    func_ov001_02221ba0((void *)func_ov001_02223150);
    data_ov001_0222df2c->unk_a90 = 8;
}

extern "C" void func_ov001_022231f0() {
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

extern "C" void func_ov001_022231d8() {
    data_ov001_0222df2c->unk_a90 = 12;
}

extern "C" s32 func_ov001_02223194() {
    if (func_ov001_0222230c() != 1) return 0;
    func_ov001_022218a4();
    data_ov001_0222df2c->unk_a90 = 1;
    return 1;
}

extern "C" s32 func_ov001_02223150(s32 a) {
    s32 r = func_ov001_02220ad8(a + 10);
    if (r == 0) return 0;
    data_ov001_0222df2c->unk_aa0[r - 1] = func_ov001_02220ba0();
    return 1;
}

extern "C" void func_ov001_02223100() {
    MI_CpuFill8((u8 *)data_ov001_0222df2c + 0x100, 0, 0x100);
    MI_CpuFill8(data_ov001_0222df2c, 0, 0x100);
    data_ov001_0222df2c->unk_ab0 = data_ov001_0222df2c;
}

extern "C" void func_ov001_02222f94(u32 a, u32 b, void *src) {
    Unk_ov001_0222df2c *h = H;
    u16 i;
    if (h->unk_a93 == 1) {
        *(u16 *)h->unk_ab0 = a;
        *((u16 *)H->unk_ab0 + 1) = b;
        MI_CpuCopy8(src, (u8 *)H->unk_ab0 + 4, 0x40);
    } else {
        h->unk_204 = h->unk_204 + 1;
        *(u16 *)H->unk_ab0 = 0xbc;
        *((u8 *)H->unk_ab0 + 4) = H->unk_a92;
    }
    if (func_ov001_0222230c() != 5) {
        return;
    }
    if (func_ov001_02221ab4(H) == 0) {
        H->unk_204 = H->unk_204 + 4;
        return;
    }
    h = H;
    if (h->unk_a93 == 0) {
        h->unk_204 = h->unk_204 + 1;
    } else {
        h->unk_204 = 0;
        if (func_ov001_02222320() != 3) {
            H->unk_a90 = 0x1b;
            return;
        }
    }
    for (i = 0; i < 2; i++) {
        void *s = func_ov001_02221b74(i);
        if (s != 0) {
            MI_CpuCopy8(s, &H->unk_100[i], 0x44);
            H->unk_208[i] = 1;
        } else {
            H->unk_208[i] = 0;
        }
    }
}

extern "C" void func_ov001_02222e9c() {
    s32 i;
    for (i = 0; i < 16; i++) {
        Unk_ov001_0222df2c *h = H;
        if (h->unk_208[i] != 0) {
            Unk_ov001_0222df2c_Rec *r = &h->unk_100[(u32)i];
            if (i == 1) {
                if (h->unk_a93 == 1) {
                    if (r->unk_00 != 0x10) {
                        return;
                    }
                    h->unk_a94 = h->unk_a94 + 1;
                    h = H;
                    if ((h->unk_a94 & 1) == 0) {
                        h->unk_200 = h->unk_200 + 1;
                        h = H;
                        if (h->unk_200 >= 0x24) {
                            h->unk_200 = 0;
                        }
                    }
                } else {
                    h->unk_202 = 0xbc;
                    if (r->unk_00 == 0xbd) {
                        H->unk_a93 = 1;
                        H->unk_200 = 0;
                        H->unk_a94 = 0;
                    }
                }
            }
        }
    }
}

extern "C" s32 func_ov001_02222e84() {
    return *(u16 *)((u8 *)H + 0x144);
}

