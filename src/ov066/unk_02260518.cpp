// mwcc-flags: -O4,p
#include "types.h"

struct Unk_ov066_02260518_Bits {
    s32 f0 : 1;
    s32 f1 : 1;
    s32 rest : 30;
};

struct Unk_ov066_02260518_Bits3 {
    s32 pad : 3;
    s32 f3 : 1;
    s32 rest : 28;
};

struct Unk_ov066_02260518_CBits {
    s32 pad : 7;
    s32 f7 : 1;
    s32 f8 : 1;
    s32 f9 : 1;
    s32 rest : 22;
};

struct Unk_ov066_02260518_Elem {
    u32 v[4];
};

struct Unk_ov066_02260518_Head {
    u32 unk_00;
    u16 unk_04;
    u16 unk_06;
    u8 unk_08;
    u8 unk_09;
    u8 unk_0a;
    u8 unk_0b;
    u8 unk_0c;
    u8 unk_0d;
};

// data_ov066_022647ac
struct Unk_ov066_02260518_A {
    u32 unk_00;
    s32 unk_04;
    u8 pad_08;
    u8 unk_09;
    u8 pad_0a[2];
    u8 unk_0c;
    u8 pad_0d[3];
    u8 *unk_10;
    u8 pad_14[0x20 - 0x14];
    u16 unk_20;
    u16 unk_22;
    u8 pad_24[0x3c - 0x24];
    Unk_ov066_02260518_Bits3 unk_3c;
};

// data_ov066_022647b0
struct Unk_ov066_02260518_B {
    Unk_ov066_02260518_Head *unk_00;
    u32 unk_04;
    Unk_ov066_02260518_Elem *unk_08;
    Unk_ov066_02260518_Bits unk_0c;
    u32 unk_10[11];
    u32 unk_3c[12];
    s32 unk_6c;
};

struct Unk_ov066_02260dd0_Msg {
    u16 unk_00;
    u16 unk_02;
};

struct Unk_ov066_02260518_Rec {
    u16 unk_00;
    u8 unk_02[6];
    u16 unk_08;
};

// data_ov066_022647b4
struct Unk_ov066_02260518_C {
    u8 pad_00[0x88];
    Unk_ov066_02260518_Rec *unk_88;
    u8 unk_8c;
    u8 pad_8d;
    u8 unk_8e;
    u8 pad_8f[4];
    u8 unk_93;
    u8 unk_94;
    u8 unk_95;
    u8 pad_96[0xb8 - 0x96];
    u32 unk_b8;
    u8 pad_bc[4];
    Unk_ov066_02260518_CBits unk_c0;
};

extern "C" {
extern Unk_ov066_02260518_A *data_ov066_022647ac;
extern Unk_ov066_02260518_B *data_ov066_022647b0;
extern Unk_ov066_02260518_C *data_ov066_022647b4;
extern u32 data_ov066_022647b8;

void func_02115094(void *p);
void func_021152e4(void *p);
void func_0211512c(void *p, s64 v, void (*fn)(void), u32 z);
u32 func_01ffa2ec(void);
void func_01ffa3d4(u32 s);

void func_ov066_02260518(void);
void func_ov066_022605a0(void);
void func_ov066_022605cc(void);
void func_ov066_02260634(void);
void func_ov066_02260670(s32 t);
u32 func_ov066_02260774(u32 idx);
void func_ov066_022607c0(s32 v);
BOOL func_ov066_02260b4c(void);
void func_ov066_02260c28(void);
void func_ov066_02260d30(u32 v);
s32 func_ov066_02260d74(u8 *a, u8 *b);
void func_ov066_0225f22c(u32 v);
void func_ov066_0225f284(void *p);
void func_ov066_0225f5b4(void);
void *func_ov066_0225f2c8(u32 a, u32 b);
s32 func_ov066_0225fc78(s32 v, u32 a, u32 b);
void func_ov066_02260100(void);
Unk_ov066_02260518_Rec *func_ov066_02260144(u32 a, u32 b);
s32 func_ov066_022601a0(u32 idx);
void func_ov066_0225f310(void);
void func_ov066_02261490(void);
void func_ov066_02262074(void *p, s32 v);
void func_ov066_02262108(u32 v);
void func_ov066_022629cc(u32 v);
u32 func_ov066_02262b70(u32 v);
void func_ov066_02262ca8(void *p, s32 v);
void func_ov066_02262d70(void *p);
void func_ov066_02263198(void *p);
void func_ov066_022631d0(void *p, u8 a, u32 b);
}

#pragma thumb off
extern "C" {

void func_ov066_02260518(void) {
    Unk_ov066_02260518_Head *r = data_ov066_022647b0->unk_00;
    data_ov066_022647b4->unk_8e = func_ov066_02260774(data_ov066_022647b4->unk_95);
    r->unk_00 = data_ov066_022647b0->unk_04;
    r->unk_04 = data_ov066_022647b4->unk_8e;
    r->unk_06 = data_ov066_022647ac->unk_22;
    r->unk_08 = 0xff;
    r->unk_09 = 0xff;
    r->unk_0a = 0xff;
    r->unk_0b = 0xff;
    r->unk_0c = 0xff;
    r->unk_0d = 0xff;
}

void func_ov066_022605a0(void) {
    data_ov066_022647b0->unk_0c.f1 = 0;
    func_02115094(&data_ov066_022647b0->unk_10);
}

void func_ov066_022605cc(void) {
    data_ov066_022647ac->unk_04 = 7;
    func_ov066_02260518();
    func_ov066_02260100();
    data_ov066_022647b4->unk_95++;
    if (data_ov066_022647b4->unk_95 >= data_ov066_022647ac->unk_09) {
        data_ov066_022647b4->unk_95 = 0;
    }
}

void func_ov066_02260634(void) {
    if (data_ov066_022647b0->unk_0c.f0) {
        return;
    }
    func_ov066_022605a0();
}

void func_ov066_02260670(s32 t) {
    if (data_ov066_022647ac->unk_3c.f3) {
        func_ov066_02262d70(&data_ov066_022647b0->unk_08[data_ov066_022647b4->unk_95]);
    } else {
        func_ov066_02262ca8(&data_ov066_022647b0->unk_08[data_ov066_022647b4->unk_95], 0x1f4);
        func_ov066_022607c0(0);
    }
    data_ov066_022647b0->unk_0c.f1 = 1;
    data_ov066_022647b0->unk_0c.f0 = 0;
    if (t != 0) {
        func_02115094(&data_ov066_022647b0->unk_10);
        func_0211512c(&data_ov066_022647b0->unk_10, t * 0x82ea / 64, func_ov066_02260634, 0);
    }
    func_ov066_022605cc();
}

u32 func_ov066_02260774(u32 idx) {
    u8 *p = data_ov066_022647ac->unk_10;
    if (p != NULL) {
        return p[idx];
    }
    return func_ov066_02262b70(data_ov066_022647b4->unk_8e);
}

void func_ov066_022607c0(s32 v) {
    u32 s = func_01ffa2ec();
    data_ov066_022647b0->unk_6c = v;
    func_01ffa3d4(s);
}

void func_ov066_022607e8(void) {
    s32 i;
    for (i = data_ov066_022647ac->unk_09 - 1; i >= 0; i--) {
        func_ov066_02263198(&data_ov066_022647b0->unk_08[i]);
    }
    func_ov066_0225f284(data_ov066_022647b0->unk_08);
    func_ov066_0225f284((void *)data_ov066_022647b0->unk_04);
    func_ov066_0225f284(data_ov066_022647b0->unk_00);
    data_ov066_022647b0->unk_6c = 0;
    data_ov066_022647b0->unk_0c.f0 = 0;
    func_02115094(&data_ov066_022647b0->unk_3c);
    func_02115094(&data_ov066_022647b0->unk_10);
    func_ov066_0225f284(data_ov066_022647b0);
    data_ov066_022647b0 = NULL;
}

void func_ov066_022608b8(void) {
    s32 i;
    data_ov066_022647b0 = (Unk_ov066_02260518_B *)func_ov066_0225f2c8(0x70, 4);
    data_ov066_022647b0->unk_00 = (Unk_ov066_02260518_Head *)func_ov066_0225f2c8(0x20, 0x20);
    data_ov066_022647b0->unk_04 = (u32)func_ov066_0225f2c8(0xc0, 0x20);
    data_ov066_022647b0->unk_08 = (Unk_ov066_02260518_Elem *)func_ov066_0225f2c8(data_ov066_022647ac->unk_09 << 4, 4);
    for (i = 0; i < data_ov066_022647ac->unk_09; i++) {
        func_ov066_022631d0(&data_ov066_022647b0->unk_08[i], i, data_ov066_022647ac->unk_0c);
    }
    func_021152e4(&data_ov066_022647b0->unk_10);
    func_021152e4(&data_ov066_022647b0->unk_3c);
}

void func_ov066_022609a8(u32 v) {
    if (data_ov066_022647b4 == NULL) {
        return;
    }
    u32 s = func_01ffa2ec();
    data_ov066_022647b4->unk_b8 = v;
    func_01ffa3d4(s);
}

BOOL func_ov066_022609e4(u8 *p) {
    if (p[0] != 0 || p[1] != 0 || p[2] != 0 || p[3] != 0 || p[4] != 0 || p[5] != 0) {
        return TRUE;
    }
    return FALSE;
}

u8 func_ov066_02260a3c(void) {
    if (data_ov066_022647b4 != NULL) {
        return data_ov066_022647b4->unk_8c;
    }
    return 0;
}

void func_ov066_02260a58(void) {
    s32 r = 0;
    if (data_ov066_022647b4->unk_c0.f8) {
        if (func_ov066_022601a0(data_ov066_022647b4->unk_95) > 0) {
            r = func_ov066_02260b4c();
        }
    }
    if (r != 0) {
        return;
    }
    if (data_ov066_022647b4->unk_94 == data_ov066_022647b4->unk_93) {
        switch (data_ov066_022647ac->unk_04) {
        case 6:
            func_ov066_02261490();
            break;
        case 4:
        case 7:
            func_ov066_02260c28();
            func_ov066_02260670(data_ov066_022647ac->unk_20);
            break;
        }
    } else {
        switch (data_ov066_022647ac->unk_04) {
        case 4:
            func_ov066_02260d30(0x2348);
        case 6:
            func_ov066_02260c28();
            break;
        }
    }
}

BOOL func_ov066_02260b4c(void) {
    u8 i;
    Unk_ov066_02260518_Rec *best = NULL;
    i = 0;
    if (i < data_ov066_022647ac->unk_0c) {
        do {
            Unk_ov066_02260518_Rec *e = func_ov066_02260144(data_ov066_022647b4->unk_95, i);
            if (e->unk_00 != 0) {
                if (*(volatile u16 *)&e->unk_08 == 0xbd8a) {
                    best = e;
                    break;
                }
                if (*(volatile u16 *)&e->unk_08 == 0x2348) {
                    if (best != NULL) {
                        if (func_ov066_02260d74(e->unk_02, best->unk_02) != 0) {
                            best = e;
                        }
                    } else {
                        best = e;
                    }
                }
            }
            i++;
        } while (i < data_ov066_022647ac->unk_0c);
    }
    if (best == NULL) {
        return FALSE;
    }
    func_ov066_02262074(best, 1);
    return TRUE;
}

void func_ov066_02260c28(void) {
    data_ov066_022647b4->unk_94 = data_ov066_022647b4->unk_94 + 1;
    if (data_ov066_022647b4->unk_94 >= 4) {
        data_ov066_022647b4->unk_94 = 0;
        data_ov066_022647b8 = data_ov066_022647b8 * 0x5eedf715 + 0x1b0cb173;
        data_ov066_022647b4->unk_93 = data_ov066_022647b8 & 3;
    }
}

void func_ov066_02260c8c(void) {
    func_ov066_02260670(0);
    func_ov066_0225f5b4();
}

s32 func_ov066_02260cac(Unk_ov066_02260518_Rec *p, u32 a, u32 b) {
    if (p != NULL && p->unk_00 != 0 && (p->unk_08 == 0x2348 || p->unk_08 == 0xbd8a)) {
        data_ov066_022647b4->unk_88 = p;
        data_ov066_022647b4->unk_c0.f9 = 1;
        return func_ov066_0225fc78(5, a, b);
    }
    return 0;
}

void func_ov066_02260d30(u32 v) {
    if (data_ov066_022647b4->unk_c0.f7) {
        func_ov066_022629cc(v);
    } else {
        func_ov066_02262108(v);
    }
}

s32 func_ov066_02260d74(u8 *a, u8 *b) {
    s32 i;
    for (i = 0; i < 6; i++) {
        u32 bb = b[i];
        u32 aa = a[i];
        if (aa > bb) {
            return 1;
        }
        if (aa < bb) {
            return -1;
        }
    }
    return 0;
}

u32 func_ov066_02260dac(u8 *p) {
    return (p[0] << 24) | (p[1] << 16) | (p[2] << 8) | p[3];
}

void func_ov066_02260dd0(Unk_ov066_02260dd0_Msg *m) {
    func_ov066_0225f310();
    if (m->unk_02 == 0) {
        data_ov066_022647ac->unk_04 = 4;
        func_ov066_02260670(0x64);
    } else {
        func_ov066_0225f22c(m->unk_02);
    }
}

}
#pragma thumb reset
