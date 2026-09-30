// mwcc-flags: -O4,p
#include "types.h"

struct Unk_ov066_02262074_Flags {
    u32 f0 : 1;
    u32 f1 : 1;
    u32 f2 : 1;
    u32 f3 : 1;
    u32 f4 : 1;
    u32 f5 : 1;
    u32 f6 : 1;
    u32 f7 : 1;
    u32 f8 : 1;
    u32 f9 : 1;
    u32 f10 : 1;
    u32 rest : 21;
};

struct Unk_ov066_02262074_Ent {
    u8 b[6];
};

struct Unk_ov066_02262074_Row {
    u8 pad[0x28];
    Unk_ov066_02262074_Ent e;
};

struct Unk_ov066_02262074_Rec {
    void *unk_00;
    u16 unk_04;
    u16 pad06;
    u32 unk_08;
    u16 unk_0c;
    u16 unk_0e;
    u16 unk_10;
    u16 unk_12;
    u16 unk_14;
    u16 unk_16;
    u16 unk_18;
    u8 pad1a[0x32 - 0x1a];
    u16 unk_32;
    u16 unk_34;
    u16 unk_36;
};

struct Unk_ov066_02262074_Rec2 {
    u16 unk_00;
    u16 unk_02;
    u8 unk_04;
    u8 unk_05;
    u8 unk_06;
};

struct Unk_ov066_02262074_Buf {
    u32 unk_00;
    u8 *unk_04;
};

struct Unk_ov066_02262074_Data {
    u8 pad[0x17e];
    u16 unk_17e;
};

struct Unk_ov066_02262074_A {
    u32 unk_00;
    u32 unk_04;
    u8 unk_08;
    u8 pad09;
    u8 unk_0a;
    u8 pad0b[2];
    u8 unk_0d;
    u8 pad0e[0x18 - 0xe];
    u16 unk_18;
    u16 unk_1a;
    u16 unk_1c;
    u16 unk_1e;
    u16 unk_20;
    u8 pad22[6];
    u32 unk_28;
};

struct Unk_ov066_02262074_B {
    Unk_ov066_02262074_Rec *unk_00;
    Unk_ov066_02262074_Buf *unk_04;
    Unk_ov066_02262074_Rec2 *unk_08;
    void *unk_0c;
    void *unk_10;
    void *unk_14;
    u16 unk_18;
    u16 unk_1a;
    u16 unk_1c;
    u16 unk_1e;
    u16 unk_20;
    u8 unk_22[2];
    u8 unk_24[4];
    Unk_ov066_02262074_Ent unk_28[16];
    u8 *unk_88;
    u8 unk_8c;
    u8 unk_8d;
    u8 unk_8e;
    u8 unk_8f;
    u8 pad90[3];
    u8 unk_93;
    u8 unk_94;
    u8 unk_95;
    u8 unk_96;
    u8 pad97;
    u16 unk_98;
    u8 pad9a[2];
    void (*unk_9c)(void);
    u8 pad_a0[0xb0 - 0xa0];
    s32 (*unk_b0)(u32, u32, u32, u32);
    s32 (*unk_b4)(void);
    u32 unk_b8;
    u8 padbc[4];
    Unk_ov066_02262074_Flags unk_c0;
};

extern "C" {
extern Unk_ov066_02262074_A *data_ov066_022647ac;
extern Unk_ov066_02262074_B *data_ov066_022647b4;
extern u32 data_ov066_022647b8;
extern u8 data_ov066_022647bc;
extern u16 data_ov066_022647c0;

void func_02115640(void *p);
void func_02115fb4(void *p, s32 v, s32 n);
s32 func_0211f188(void);
s32 func_0211f3dc(void *p, s32 v);
u32 func_0211f698(void);
void func_02114594(void *p, s32 v);
u32 func_0213335c(u32 a, u32 b);

void func_ov066_0225f22c(u32 v);
void *func_ov066_0225f2c8(s32 a, s32 b);
void func_ov066_0225f284(void *p);
void func_ov066_0226214c(u32 a);
void func_ov066_0226223c(u32 a, u32 b);
void func_ov066_022625e8(void);
void func_ov066_0226278c(void);
u32 func_ov066_022623ac(void);
s32 func_ov066_022622ac(u32 a, u32 b, u32 c, u32 d);
void func_ov066_022607c0(s32 v);
void func_ov066_022607e8(void);
void func_ov066_022608b8(void);
u32 func_ov066_02260dac(void *p);
void func_ov066_022613dc(void *p);
void func_ov066_0226160c(void);
void func_ov066_02261c5c(void);
s32 func_ov066_0225ffcc(void);
s32 func_ov066_02262c38(void);
void func_ov066_02262be4(void);
}

#pragma thumb off
extern "C" {

void func_ov066_02262074(u8 *p, u32 v) {
    if (data_ov066_022647ac->unk_04 != 4) {
        return;
    }
    if (p == NULL) {
        return;
    }
    data_ov066_022647ac->unk_04 = 8;
    {
        u32 w = v & 1;
        u32 c = *(u32 *)&data_ov066_022647b4->unk_c0;
        *(u32 *)&data_ov066_022647b4->unk_c0 = (c & ~0x40) | (w << 6);
    }
    func_ov066_022613dc(p + 0x20);
}

void func_ov066_022620e8(void) {
    func_ov066_02262074(data_ov066_022647b4->unk_88, 0);
}

void func_ov066_02262108(u32 a) {
    data_ov066_022647ac->unk_04 = 6;
    data_ov066_022647b4->unk_96 = 0;
    func_ov066_0226214c(a);
    func_ov066_0226160c();
}

void func_ov066_0226214c(u32 a) {
    Unk_ov066_02262074_Rec *r = data_ov066_022647b4->unk_00;
    data_ov066_022647b4->unk_8c = 1;
    func_ov066_0226223c(a, 1);
    r->unk_00 = data_ov066_022647b4->unk_08;
    r->unk_04 = data_ov066_022647b4->unk_18;
    r->unk_08 = data_ov066_022647ac->unk_28;
    data_ov066_022647b8 = data_ov066_022647b8 * 0x5eedf715 + 0x1b0cb173;
    data_ov066_022647b4->unk_20 = data_ov066_022647b8;
    r->unk_0c = data_ov066_022647b4->unk_20;
    r->unk_0e = 1;
    r->unk_12 = 0;
    r->unk_14 = 0;
    r->unk_16 = 0;
    r->unk_10 = data_ov066_022647ac->unk_0a;
    r->unk_18 = func_0211f698();
    r->unk_32 = data_ov066_022647b4->unk_8d;
    r->unk_34 = data_ov066_022647ac->unk_1a;
    r->unk_36 = data_ov066_022647ac->unk_1e;
}

void func_ov066_0226223c(u32 a, u32 b) {
    Unk_ov066_02262074_Rec2 *r = data_ov066_022647b4->unk_08;
    if (a != 0xe34d) {
        r->unk_00 = a;
    }
    data_ov066_022647b8 = data_ov066_022647b8 * 0x5eedf715 + 0x1b0cb173;
    r->unk_02 = data_ov066_022647b8;
    r->unk_04 = data_ov066_022647b4->unk_95;
    r->unk_05 = b;
    r->unk_06 = 5;
}

s32 func_ov066_022622ac(u32 a, u32 b, u32 c, u32 d) {
    if (data_ov066_022647b4 != NULL) {
        if (data_ov066_022647b4->unk_b0 != NULL) {
            return data_ov066_022647b4->unk_b0(a, b, c, d);
        }
    }
    return 0;
}

s32 func_ov066_022622f4(void) {
    if (data_ov066_022647b4 != NULL) {
        if (data_ov066_022647b4->unk_b4 != NULL) {
            return data_ov066_022647b4->unk_b4();
        }
    }
    return 0;
}

u32 func_ov066_0226233c(void) {
    if (func_ov066_0225ffcc() != 10) {
        return 0;
    }
    Unk_ov066_02262074_Data *d = (Unk_ov066_02262074_Data *)data_ov066_022647b4->unk_04->unk_04;
    func_02114594(&d->unk_17e, 2);
    return d->unk_17e;
}

u32 func_ov066_0226238c(void) {
    if (data_ov066_022647b4 != NULL) {
        return data_ov066_022647b4->unk_1e;
    }
    return 0xffff;
}

u32 func_ov066_022623ac(void) {
    u32 t = data_ov066_022647b8 * 0x5eedf715 + 0x1b0cb173;
    data_ov066_022647b8 = t;
    return t;
}

void func_ov066_022623d4(void) {
    func_ov066_022607c0(0);
    data_ov066_022647b4->unk_c0.f2 = 0;
    data_ov066_022647b4->unk_9c();
    data_ov066_022647b4->unk_c0.f0 = 0;
    data_ov066_022647b4->unk_c0.f1 = 0;
    data_ov066_022647b4->unk_93 = 0;
    data_ov066_022647b4->unk_94 = 0;
    data_ov066_022647b4->unk_95 = 0;
    data_ov066_022647b4->unk_98 = 0;
    func_ov066_02261c5c();
    func_ov066_02262be4();
}

void func_ov066_02262464(void) {
    if (data_ov066_022647ac->unk_04 == 2) {
        if (func_0211f188() != 0) {
            return;
        }
        func_ov066_022607e8();
        func_ov066_0225f284(data_ov066_022647b4->unk_14);
        func_ov066_0225f284(data_ov066_022647b4->unk_10);
        func_ov066_0225f284(data_ov066_022647b4->unk_0c);
        func_ov066_0225f284(data_ov066_022647b4->unk_08);
        func_ov066_0225f284(data_ov066_022647b4->unk_00);
        func_ov066_0225f284(data_ov066_022647b4->unk_04);
        func_ov066_0225f284(data_ov066_022647b4);
        data_ov066_022647b4 = NULL;
        data_ov066_022647ac->unk_04 = 1;
    } else {
        func_ov066_0225f22c(0x44);
    }
}

void func_ov066_02262548(void) {
    if (data_ov066_022647b4 != NULL) {
        return;
    }
    data_ov066_022647b4 = (Unk_ov066_02262074_B *)func_ov066_0225f2c8(0xc4, 4);
    data_ov066_022647b4->unk_04 = (Unk_ov066_02262074_Buf *)func_ov066_0225f2c8(0xf00, 0x20);
    if (func_0211f3dc(data_ov066_022647b4->unk_04, data_ov066_022647ac->unk_0d) == 0) {
        func_ov066_022625e8();
        return;
    }
    func_ov066_0225f284(data_ov066_022647b4->unk_04);
}

void func_ov066_022625e8(void) {
    data_ov066_022647b4->unk_00 = (Unk_ov066_02262074_Rec *)func_ov066_0225f2c8(0x40, 0x20);
    data_ov066_022647b4->unk_08 = (Unk_ov066_02262074_Rec2 *)func_ov066_0225f2c8(0x70, 0x20);
    data_ov066_022647b4->unk_18 = 8;
    u32 a = ((data_ov066_022647ac->unk_18 + 0xe) * data_ov066_022647ac->unk_0a + 0x29) & ~0x1f;
    u32 b = (data_ov066_022647ac->unk_1c + 0x55) & ~0x1f;
    u16 x = (u16)(a << 1);
    u16 y = (u16)(b << 1);
    if (x <= y) {
        x = y;
    }
    data_ov066_022647b4->unk_1a = x;
    data_ov066_022647b4->unk_0c = func_ov066_0225f2c8(data_ov066_022647b4->unk_1a, 0x20);
    a = (data_ov066_022647ac->unk_1a + 0x23) & ~0x1f;
    b = (data_ov066_022647ac->unk_1e + 0x21) & ~0x1f;
    x = (u16)a;
    y = (u16)b;
    if (x <= y) {
        x = y;
    }
    data_ov066_022647b4->unk_1c = x;
    data_ov066_022647b4->unk_10 = func_ov066_0225f2c8(data_ov066_022647b4->unk_1c, 0x20);
    data_ov066_022647b4->unk_14 = func_ov066_0225f2c8(data_ov066_022647ac->unk_1e * 2, 0x20);
    data_ov066_022647b4->unk_b8 = 0;
    func_ov066_022608b8();
    func_02115640(data_ov066_022647b4->unk_22);
    data_ov066_022647b8 = func_ov066_02260dac(data_ov066_022647b4->unk_24);
    data_ov066_022647ac->unk_04 = 2;
    data_ov066_022647ac->unk_00 = 0;
    func_ov066_0226278c();
}

void func_ov066_0226278c(void) {
    u8 buf[6];
    data_ov066_022647b4->unk_1e = 0xffff;
    data_ov066_022647b4->unk_8c = 1;
    data_ov066_022647b4->unk_c0.f0 = 0;
    data_ov066_022647b4->unk_c0.f1 = 0;
    data_ov066_022647b4->unk_c0.f2 = 0;
    data_ov066_022647b4->unk_c0.f3 = 0;
    data_ov066_022647b4->unk_c0.f4 = 0;
    data_ov066_022647b4->unk_c0.f5 = 0;
    data_ov066_022647b4->unk_c0.f6 = 0;
    data_ov066_022647b4->unk_c0.f10 = 0;
    if ((u8)(data_ov066_022647ac->unk_08 + 2) <= 1) {
        data_ov066_022647b4->unk_c0.f7 = 1;
        data_ov066_022647b4->unk_8d = 0;
        data_ov066_022647b4->unk_8e = 0;
        data_ov066_022647b4->unk_8f = 0;
    } else {
        data_ov066_022647b4->unk_c0.f7 = 0;
        data_ov066_022647b4->unk_8d = data_ov066_022647ac->unk_08;
        data_ov066_022647b4->unk_8e = 0;
        data_ov066_022647b4->unk_8f = data_ov066_022647ac->unk_08;
    }
    func_02115fb4(buf, 0, 6);
    s32 i;
    Unk_ov066_02262074_Row *e = (Unk_ov066_02262074_Row *)data_ov066_022647b4;
    for (i = 0; i < 16; i++) {
        e->e = *(Unk_ov066_02262074_Ent *)buf;
        e = (Unk_ov066_02262074_Row *)((u8 *)e + 6);
    }
}

s32 func_ov066_0226292c(void) {
    if (func_ov066_02262c38() == 0) {
        if (data_ov066_022647bc != 0) {
            u8 i = 0;
            u32 t = func_ov066_022623ac();
            u32 sel = (u8)(t % data_ov066_022647bc);
            u16 m = data_ov066_022647c0;
            do {
                if ((m & (1 << i)) != 0) {
                    if (sel != 0) {
                        sel = (u8)(sel - 1);
                    } else {
                        data_ov066_022647b4->unk_8d = i + 1;
                        return 1;
                    }
                }
                i = i + 1;
            } while (i < 14);
        }
    }
    return 0;
}

}
#pragma thumb reset
