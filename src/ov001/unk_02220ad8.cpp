// mwcc-flags: -O4,p
#include "types.h"

#pragma thumb off

struct Unk_ov001_02220ad8_Ent { u8 pad_00[0x16]; u8 mac[6]; u16 id; };
struct Unk_ov001_02220ad8_S {
    u16 state;
    u16 m[6];
    u8 pad_0e[0x16];
    u8 ents[1][0x1e];
};
struct Unk_ov001_02220ad8_Z { u8 pad[0x1b140]; s32 unk_140; s32 unk_144; };

extern "C" {
extern Unk_ov001_02220ad8_S *data_ov001_0222df08;
extern u16 *data_ov001_0222df0c[6];

u32 func_01ffa2ec();
void func_01ffa3d4(u32);
void func_02116048(void *, void *, u32);
s32 func_02122eb0(s32, s32);
s32 func_02122fac(s32);
s32 func_02123008(s32);
void func_02124a94(s32);
void func_02124c40();
void func_0206d49c();
void func_ov001_02221454(s32);
void func_ov001_02221540(s32);
u32 func_ov001_02220d18();
void func_ov001_02220d2c(u32);
u32 func_ov001_02220bd4(u32);
void func_ov001_02221368(u32);

u32 func_ov001_02220ad8(u8 *mac)
{
    Unk_ov001_02220ad8_S *s = data_ov001_0222df08;
    u16 i;
    u16 mask = s->m[0];
    for (i = 1; i < 2; i++) {
        if (mask & (1 << i)) {
            u8 *e = (u8 *)s + 0x24 + (i - 1) * 0x1e;
            if (mac[0] == e[0] && mac[1] == e[1] && mac[2] == e[2] && mac[3] == e[3] && mac[4] == e[4] && mac[5] == e[5]) {
                return *(u16 *)((u8 *)s + (i - 1) * 0x1e + 0x2a);
            }
        }
    }
    return 0;
}

u8 *func_ov001_02220ba0(u32 id)
{
    Unk_ov001_02220ad8_S *s = data_ov001_0222df08;
    if (s->m[0] & (1 << id)) {
        return (u8 *)s + 0xe + (id - 1) * 0x1e;
    }
    return 0;
}

u32 func_ov001_02220bd4(u32 id)
{
    u16 buf[7];
    u32 r = func_01ffa2ec();
    u16 bit = 1 << id;
    Unk_ov001_02220ad8_S *s = data_ov001_0222df08;
    if (!(s->m[0] & bit)) {
        func_01ffa3d4(r);
        return 0;
    }
    func_02116048(s, buf, 0xe);
    func_01ffa3d4(r);
    if (buf[2] & bit) return 2;
    if (buf[3] & bit) return 3;
    if (buf[4] & bit) return 4;
    if (buf[5] & bit) return 5;
    if (buf[6] & bit) return 6;
    return 1;
}

u32 func_ov001_02220cb8(u32 i)
{
    Unk_ov001_02220ad8_S *s = data_ov001_0222df08;
    data_ov001_0222df0c[0] = &s->m[0];
    data_ov001_0222df0c[1] = &s->m[1];
    data_ov001_0222df0c[2] = &s->m[2];
    data_ov001_0222df0c[3] = &s->m[3];
    data_ov001_0222df0c[4] = &s->m[4];
    data_ov001_0222df0c[5] = &s->m[5];
    return *data_ov001_0222df0c[i];
}

u32 func_ov001_02220d18()
{
    return data_ov001_0222df08->state;
}

void func_ov001_02220d2c(u32 v)
{
    data_ov001_0222df08->state = v;
}

void func_ov001_02220d40(u32 id, u32 cmd, u8 *data)
{
    switch (cmd) {
    case 1:
    case 4:
    case 5:
    case 6:
    case 8:
    case 11:
        break;
    case 2: {
        if (func_ov001_02220d18() != 2) return;
        Unk_ov001_02220ad8_S *s = data_ov001_0222df08;
        u32 r = func_01ffa2ec();
        s->m[0] = s->m[0] | (1 << id);
        func_01ffa3d4(r);
        u8 *e = (u8 *)data_ov001_0222df08 + 0x24 + (id - 1) * 0x1e;
        e[0] = data[0xa];
        e[1] = data[0xb];
        e[2] = data[0xc];
        e[3] = data[0xd];
        e[4] = data[0xe];
        e[5] = data[0xf];
        *(u16 *)((u8 *)data_ov001_0222df08 + (id - 1) * 0x1e + 0x2a) = id;
        break;
    }
    case 3: {
        if (func_ov001_02220bd4(id) == 6) return;
        u16 k = ~(1 << id);
        u32 r = func_01ffa2ec();
        data_ov001_0222df08->m[0] &= k;
        data_ov001_0222df08->m[1] &= k;
        data_ov001_0222df08->m[2] &= k;
        data_ov001_0222df08->m[3] &= k;
        data_ov001_0222df08->m[4] &= k;
        data_ov001_0222df08->m[5] &= k;
        func_01ffa3d4(r);
        break;
    }
    case 10: {
        if (func_ov001_02220d18() != 2) {
            func_ov001_02221454(id);
            return;
        }
        Unk_ov001_02220ad8_S *s = data_ov001_0222df08;
        s->m[1] = s->m[1] | (1 << id);
        func_ov001_02221540(id);
        s32 r = func_02123008(id);
        if (r == 0) return;
        func_02116048((void *)r, (u8 *)data_ov001_0222df08 + 0xe + (id - 1) * 0x1e, 0x16);
        break;
    }
    case 14: {
        Unk_ov001_02220ad8_S *s = data_ov001_0222df08;
        u32 one = 1;
        s->m[1] = s->m[1] & ~(one << id);
        s = data_ov001_0222df08;
        s->m[2] = s->m[2] | (one << id);
        if (func_ov001_02220d18() != 3) return;
        func_ov001_02221368(id);
        break;
    }
    case 7: {
        Unk_ov001_02220ad8_S *s = data_ov001_0222df08;
        u32 one = 1;
        s->m[3] = s->m[3] & ~(one << id);
        s = data_ov001_0222df08;
        s->m[4] = s->m[4] | (one << id);
        break;
    }
    case 9: {
        Unk_ov001_02220ad8_S *s = data_ov001_0222df08;
        u32 one = 1;
        s->m[4] = s->m[4] & ~(one << id);
        s = data_ov001_0222df08;
        s->m[5] = s->m[5] | (one << id);
        s = data_ov001_0222df08;
        if (s->m[0] != s->m[5]) return;
        func_02124c40();
        break;
    }
    case 12: {
        if (func_ov001_02220d18() == 4) {
            func_ov001_02220d2c(5);
        } else {
            func_ov001_02220d2c(0);
        }
        Unk_ov001_02220ad8_Z *z = (Unk_ov001_02220ad8_Z *)data_ov001_0222df08;
        if (z->unk_144 != 0) z->unk_144 = 0;
        z = (Unk_ov001_02220ad8_Z *)data_ov001_0222df08;
        if (z->unk_140 != 0) z->unk_140 = 0;
        break;
    }
    case 13: {
        s32 v = *(u16 *)data;
        switch (v) {
        case 1:
        case 2:
        case 9:
            func_ov001_02220d2c(7);
            break;
        case 8:
            break;
        }
        break;
    }
    default:
        func_0206d49c();
        break;
    }
}

void func_ov001_022210d0()
{
    func_ov001_02220d2c(6);
    func_02124c40();
}

void func_ov001_022210f0()
{
    u16 i, ok;
    ok = 0;
    for (i = 1; i < 16; i++) {
        u32 bit = 1 << i;
        if (data_ov001_0222df08->m[4] & bit) {
            if (func_02122eb0(i, 3)) {
                ok = ok | bit;
            } else {
                u16 k = ~bit;
                u32 r = func_01ffa2ec();
                data_ov001_0222df08->m[0] &= k;
                data_ov001_0222df08->m[1] &= k;
                data_ov001_0222df08->m[2] &= k;
                data_ov001_0222df08->m[3] &= k;
                data_ov001_0222df08->m[4] &= k;
                data_ov001_0222df08->m[5] &= k;
                func_01ffa3d4(r);
                func_02124a94(i);
            }
        }
    }
    if (ok == 0) {
        func_ov001_02220d2c(7);
    } else {
        func_ov001_02220d2c(4);
    }
}

u32 func_ov001_02221200()
{
    if (data_ov001_0222df08->m[0] == 0) return 0;
    u16 i;
    for (i = 1; i < 16; i++) {
        if (data_ov001_0222df08->m[0] & (1 << i)) {
            if (func_02122fac(i) == 0) return 0;
        }
    }
    return 1;
}

void func_ov001_02221278()
{
    func_ov001_02220d2c(3);
    u16 i;
    for (i = 1; i < 16; i++) {
        u32 bit = 1 << i;
        if (data_ov001_0222df08->m[0] & bit) {
            if (!(data_ov001_0222df08->m[1] & bit)) {
                if (!(data_ov001_0222df08->m[2] & bit)) {
                    u16 k = ~bit;
                    u32 r = func_01ffa2ec();
                    data_ov001_0222df08->m[0] &= k;
                    data_ov001_0222df08->m[1] &= k;
                    data_ov001_0222df08->m[2] &= k;
                    data_ov001_0222df08->m[3] &= k;
                    data_ov001_0222df08->m[4] &= k;
                    data_ov001_0222df08->m[5] &= k;
                    func_01ffa3d4(r);
                    func_02124a94(i);
                } else {
                    func_ov001_02221368(i);
                }
            }
        }
    }
}

void func_ov001_02221368(u32 id)
{
    if (func_02122eb0(id, 2) == 0) {
        u16 k = ~(1 << id);
        u32 r = func_01ffa2ec();
        data_ov001_0222df08->m[0] &= k;
        data_ov001_0222df08->m[1] &= k;
        data_ov001_0222df08->m[2] &= k;
        data_ov001_0222df08->m[3] &= k;
        data_ov001_0222df08->m[4] &= k;
        data_ov001_0222df08->m[5] &= k;
        func_01ffa3d4(r);
        func_02124a94(id);
    } else {
        u32 r = func_01ffa2ec();
        u32 one = 1;
        Unk_ov001_02220ad8_S *s = data_ov001_0222df08;
        s->m[2] = s->m[2] & ~(one << id);
        s = data_ov001_0222df08;
        s->m[3] = s->m[3] | (one << id);
        func_01ffa3d4(r);
    }
}

}
